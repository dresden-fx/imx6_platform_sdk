/*
 * Copyright (C) 2011, Freescale Semiconductor, Inc. All Rights Reserved
 * THIS SOURCE CODE IS CONFIDENTIAL AND PROPRIETARY AND MAY NOT
 * BE USED OR DISTRIBUTED WITHOUT THE WRITTEN PERMISSION OF
 * Freescale Semiconductor, Inc.
*/

/*!
 * @file usbh_drv.c
 * @brief USB host driver.
 */

#include "hardware.h"

int emuerateDevice (usb_module_t *, usbhQueueHead_t *, usbDeviceDescriptor_t *,uint8_t *,uint8_t *,uint8_t *,uint8_t *,uint8_t *);
void usbh_set_device_address(usb_module_t *, usbhQueueHead_t *, uint32_t);
void usbh_get_dev_desc(usb_module_t *, usbhQueueHead_t *, usbDeviceDescriptor_t *);
void usbh_get_config_desc(usb_module_t *, usbhQueueHead_t *, uint8_t *);
void usbh_get_interface_desc(usb_module_t *, usbhQueueHead_t *, uint8_t *,uint8_t *, uint8_t *);
void usbh_set_configuration(usb_module_t *, usbhQueueHead_t *, uint32_t);
void usbh_get_report_desc(usb_module_t *, usbhQueueHead_t *, uint8_t *);
void wait(uint32_t);

#define DEVICE_ADDRESS	0x2
#define CONFIG_VALUE	0x1	/* This is the only valid config value for a USB mouse */
#define FRAME_LIST_SIZE 32

extern uint8_t usb_utmi_int_flag, usb_ulpi_int_flag;
uint32_t frame_list[1024]  __attribute__ ((aligned (4096))); // 4K aligned frame list memory

/********************************************************************/

void usb0_host_test (void)
{
	int                    i, temp, periodic_base;
	usbPortSpeed_t         usb_port_speed;
	usbDeviceDescriptor_t  *device_descriptor;
	uint8_t                *config_descriptor;
	uint8_t                *interface_descriptor;
	uint8_t                *hid_descriptor;
	uint8_t                *ep_descriptor;
	uint8_t                *report_descriptor;
	usbRegisters_t         *UsbReg;
	
	usb_module_t *usbhModule;
	usb_module_t usbOtgModule;

	usbhQueueHead_t* usb_qh_ep0, * usb_qh_ep1;
	usbhTransferDescriptor_t * int_qtd;
	
	uint8_t usbhMouseData[MAX_USB_BUFFER_SIZE];
	uint32_t int_transfer_size, int_packet_size, bytes_received;
	
	usbOtgModule.moduleName = "OTG controller";
	usbOtgModule.moduleBaseAddress = (usbRegisters_t *)USBOH3_USB_BASE_ADDR;
	usbOtgModule.controllerID = OTG;
	usbOtgModule.phyType = Utmi;

	usbhModule = &usbOtgModule;
	UsbReg = usbhModule->moduleBaseAddress;

	// Allocate memory for the descriptors
	device_descriptor = (usbDeviceDescriptor_t*) malloc (MAX_USB_DESC_SIZE);
	config_descriptor = (uint8_t*) malloc (MAX_USB_DESC_SIZE);
	interface_descriptor = (uint8_t*) malloc (MAX_USB_DESC_SIZE);
	hid_descriptor = (uint8_t*) malloc (MAX_USB_DESC_SIZE);
	ep_descriptor = (uint8_t*) malloc (MAX_USB_DESC_SIZE);
	report_descriptor = (uint8_t*) malloc (MAX_USB_DESC_SIZE);
	
    /* Global interrupt enable */

	printf("Starting USB OTG host test.\n\n");

	// Initialize the USB host controller
	usbh_init(usbhModule);
								
	/* Wait for device connect */
	while(!( UsbReg->USB_PORTSC & (USB_PORTSC_CCS)));
	printf("Connect detected.\n");	
		
	// Reset the device

 	usbh_bus_reset(usbhModule);
	
	usb_port_speed = usbh_get_port_speed(usbhModule);
	
	
	/* Create a QueueHead to use for EndPoint0. This single QH will be the
	 * asynchronous schedule during enumeration. 
	 */
    switch (usb_port_speed)
    {
	    case usbSpeedFull:
	 	    usb_qh_ep0 = usbh_qh_init(0x40, 1, EPS_FULL, 0, 0, 0);
	 	    printf("Device connected at FULL speed\n");
	 	    break;
	    case usbSpeedLow:
	      	usb_qh_ep0 = usbh_qh_init(0x40, 1, EPS_LOW, 0, 0, 0);
	 	    printf("Device connected at LOW speed\n");
	      	break;
	    case usbSpeedHigh:
	      	usb_qh_ep0 = usbh_qh_init(0x40, 1, EPS_HIGH, 0, 0, 0);
	 	    printf("Device connected at HIGH speed\n");
	    	break;
	    default :
	    	break;
    }

    /*!
     * Put this queue head on the Asynchronous Schedule.
     * This is our first queue head on the AS so we point the controller to this QH
     * Any further queue heads will be linked to this HQ
     */
    UsbReg->USB_ASYNCLISTADDR = (uint32_t)usb_qh_ep0;

    // Enable the asynchronous schedule
    usbh_enable_asynchronous_schedule(usbhModule);
    
	// Enumerate the attached device
	 
	if (emuerateDevice(usbhModule, usb_qh_ep0, device_descriptor, config_descriptor, interface_descriptor,
				hid_descriptor, ep_descriptor, report_descriptor ))
    	printf("\nUSB mouse enumerated!!\n");
    else
    {
    	printf("\nDevice is not a mouse. No further processing is performed\n");
    	while(1); /* Not a mouse, hang around forever */

    }

	// We have a mouse connected.
	/* Initialize the periodic schedule for the interrupt endpoint */
	periodic_base = usbh_periodic_schedule_init(usbhModule, FRAME_LIST_SIZE, (&frame_list[0]));
	
	/* Create a QH for endpoint 1 */
	
	usb_qh_ep1 = usbh_qh_init(0x8,0, EPS_LOW,1,DEVICE_ADDRESS,1);
	
	/* Invalidate the QH horizontal pointer since the init function will point
	 * the QH back to itself.
	 */
	usb_qh_ep1->queueHeadLinkPointer |= USB_QH_LINK_PTR_T;

	/* This version of the code just polls the mouse once per iteration of
	 * the frame list. The polling rate can be adjusted changing the size
	 * of the frame list and/or pointing more of the frame list entries
	 * to the interrupt QH.
	 */

	/* Put the queue head to the periodic schedule */
	*(uint32_t *)(periodic_base) = (uint32_t)usb_qh_ep1 + 0x002;

	/* Initialize the amount of data to receive. In this case we will
	 * receive 20 packets per loop. ep_desc[04] inidicates the size of 
	 * each packet. So transfer_size = 20 * ep_desc[04].
	 */
	int_packet_size = ep_descriptor[04];
	int_transfer_size = 20 * int_packet_size;	

	/* Create a qTD to transfer 20 packets worth of data */
	int_qtd = usbh_qtd_init(int_transfer_size, 1, IN_PID, (uint32_t*) usbhMouseData);
								
/* This while(1) loop will allow for continuously receiving mouse data. Some
 * packets could be lost due to the time needed to reinitialize the qTD for the
 * next batch of transfers. So a more correct way to do this would be to create
 * multiple qTDs and rotate them for each iteration of the loop. For a mouse
 * application some data loss is acceptable, so only one qTD is used. 
 */									
	while(1)
	{
	
		/* Point the QH to the qTD */
		usb_qh_ep1->nextQtd = (uint32_t) int_qtd;
		
		/* Initialize bytes received counter */
		bytes_received = 0;
		
		while (bytes_received < int_transfer_size)
		{
			/* Wait for transaction to complete */
		#ifdef USB_USE_INT
			while (usb_utmi_int_flag == 0);
			usb_utmi_int_flag = 0;
		#else
			while (!(UsbReg->USB_USBSTS & (USB_USBSTS_UI)));
			UsbReg->USB_USBSTS |= (USB_USBSTS_UI);
		#endif
		
		    /* Check for errors */
		  	if( UsbReg->USB_USBSTS & (USB_USBSTS_UEI))
		    {
		    	printf("ERROR!!!\n");
			    temp = *(uint32_t *)((UsbReg->USB_ASYNCLISTADDR) + 0x18);
		        printf("qTD status = 0x%08x\n",temp);	
		    }
		    else 	/* Display data if no error occurred. */
		    {
		     	printf("IN = ");
		     	for(i=0; i < int_packet_size; i++)
		     		printf("0x%02x  ",usbhMouseData[bytes_received + i]);
		     	printf("\n"); 
		    }

		  	if((uint8_t)usbhMouseData[bytes_received] == 1)    // Left moust button
		  	{
		  		return;   // exit
		  	}
		            
			/* Clear the USB interrupt error bit */
			UsbReg->USB_USBSTS |= (USB_USBSTS_UEI);
	
			/* Increment bytes received counter */		
			bytes_received = bytes_received + int_packet_size;

			/* Set the active bit in the QH to ensure that it can accept
			 * more data if we aren't done yet. 
	     	 */
	     	if (bytes_received != int_transfer_size) 
				*(uint32_t *)((uint32_t)usb_qh_ep1+0x18) |= 0x00000080;
		}
		
		/* Re-initialize the qTD to accept the next 20 packets*/
		int_qtd->qtdToken |= USB_QTD_TOKEN_TRANS_SIZE(int_transfer_size) | USB_QTD_TOKEN_STAT_ACTIVE;
		int_qtd->qtdBuffer[0] = (uint32_t) usbhMouseData;
	}		
}

/********************************************************************/
/* This enumeration routine is specific for a HID class mouse device. The code
 * code be used as a starting for enumerating other devices. If drivers need
 * to be able to detect different types of devices (for example a keyboard or
 * a mouse could be attached), then some level of descriptor parsing would need
 * to be added to determine what the attached device is. This code verifies
 * that a mouse is attached and returns an error if the device is not a HID
 * class mouse.
 */
int
emuerateDevice(usb_module_t *port, usbhQueueHead_t *usb_qh_ep0, usbDeviceDescriptor_t *device_descriptor,uint8_t *config_descriptor,uint8_t *interface_descriptor,
		 uint8_t *hid_descriptor,uint8_t *ep_descriptor,uint8_t *report_descriptor )
{

	usbh_bus_reset(port);
	
	/*!
	 * Read the first 8 bytes of the device descriptor as we do not yet know the max payload size
	 * Our new device has address 0
	 */
	usbh_get_dev_desc(port, usb_qh_ep0, device_descriptor);

	/*!
	 * Update the maximum packet size in the queue head
	 */

	// Stop schedule to avoid contention with controller
	usbh_disable_asynchronous_schedule(port);

	/* Set the max packet size in the QH to the max packet size in the device descriptor */
	usb_qh_ep0->endpointCharacteristics = ((usb_qh_ep0->endpointCharacteristics & ~USB_QH_EP_CHAR_MAX_PACKET(0x7FF))
								| USB_QH_EP_CHAR_MAX_PACKET(device_descriptor->bMaxPacketSize));


	usb_qh_ep0->endpointCharacteristics &= ~(0x7FF << 16); // clear max packet size
	usb_qh_ep0->endpointCharacteristics |= ((uint32_t)(device_descriptor->bMaxPacketSize)) << 16;

	// Restart asynchronous schedule
	usbh_enable_asynchronous_schedule(port);

	/* Send set address command */
   	usbh_set_device_address(port, usb_qh_ep0, DEVICE_ADDRESS);
		
	/* Read in the full device descriptor */
	usbh_get_dev_desc(port, usb_qh_ep0, device_descriptor);
	
	/* Read in the configuration descriptor */
    usbh_get_config_desc(port, usb_qh_ep0, config_descriptor);

	/* Read in the interface, HID, and endpoint descriptors */
    usbh_get_interface_desc(port, usb_qh_ep0, interface_descriptor,hid_descriptor,ep_descriptor);
    
    /* Test the interface descriptor parameters to check if the attached
     * device is in the HID class and that it is also a mouse. 
     */
    if( (interface_descriptor[5] != 0x3) | (interface_descriptor[7] != 0x2))
    {
   		printf("Device enumerated.\n");
   		return 0;   // not a mouse; return
   	}
   	
	/* Set the configuration for the device */
	/* We already know the device is a USB mouse, so there is only one possible
	 * configuration for the device.
	 */ 
    usbh_set_configuration(port, usb_qh_ep0, CONFIG_VALUE);
    
	usbh_get_report_desc(port, usb_qh_ep0, report_descriptor);
	
	return 1;
}
/********************************************************************/
void usbh_set_device_address(usb_module_t *port, usbhQueueHead_t *usb_qh_ep0, uint32_t device_address)
{
	usbhTransferDescriptor_t * usb_qtd1, *usb_qtd2;
	uint32_t temp;
	uint32_t usbhSetupCommand[2];

	usbRegisters_t *UsbReg = port->moduleBaseAddress;

	/* data for Set Address command */
	usbhSetupCommand[0] = 0x00000500 | ((0x7F & device_address) <<16);
	usbhSetupCommand[1] = 0x00000000;
	
    usb_qtd1 = usbh_qtd_init(0x8, 0, SETUP_PID, usbhSetupCommand);
    usb_qtd2 = usbh_qtd_init(0x0, 1, IN_PID, 0);

    usb_qtd1->nextQtd = (uint32_t)usb_qtd2;

	/* Link the new descriptor to the and of the list */
	usb_qh_ep0->nextQtd = (uint32_t)usb_qtd1;

	#ifdef USB_USE_INT
	while (usb_utmi_int_flag == 0);
	usb_utmi_int_flag = 0;
	#else
	while (!(UsbReg->USB_USBSTS & (USB_USBSTS_UI )));
	UsbReg->USB_USBSTS |= (USB_USBSTS_UI);
	#endif
    	
    /* Check for errors */
  	if( UsbReg->USB_USBSTS & (USB_USBSTS_UEI))
    {
    	printf("ERROR!!!\n");
	    temp = *(uint32_t *)((UsbReg->USB_ASYNCLISTADDR) + 0x18);
        printf("qTD status = 0x%08x\n",temp);	
     }
     else
     {
     	printf("Set address command complete!!\n\n");
		#ifdef DEBUG_PRINT	
        	printf("USBSTS = 0x%08x\n",(UsbReg->USB_USBSTS));
    	#endif
    }
	/* Clear the USB Error bit */
	UsbReg->USB_USBSTS |= (USB_USBSTS_UEI);
	
	/* Change the device address in the QH to the new value */
	usb_qh_ep0->endpointCharacteristics |= USB_QH_EP_CHAR_DEV_ADDR(device_address);
	
    /* Return memory for descriptors to the heap */
    free((void *)usb_qtd1->mallocPointer);
    free((void *)usb_qtd2->mallocPointer);
}
/********************************************************************/

/*!
 * Read device descriptor from a connected device
 * This routine creates transfers descriptors read the device descriptor and adds them to the queue.
 * @param port
 * @param usbh_qh_ep0       Queue Head (identifies device and endpoint)
 * @param device_descriptor Device descriptor structure to hold device data
 */
void usbh_get_dev_desc(usb_module_t *port, usbhQueueHead_t *usb_qh_ep0, usbDeviceDescriptor_t *device_descriptor)
{
	usbhTransferDescriptor_t *usb_qtd1, *usb_qtd2, *usb_qtd3;
	uint32_t temp;
	uint32_t usbhSetupCommand[2];

	usbRegisters_t *UsbReg = port->moduleBaseAddress;  // Point to controllers registers
	
	/* data for Get Descriptor command */
	usbhSetupCommand[0] = 0x01000680;
	usbhSetupCommand[1] = 0x00120000;

    usb_qtd1 = usbh_qtd_init(0x8, 0, SETUP_PID, usbhSetupCommand);
    usb_qtd2 = usbh_qtd_init(18, 0, IN_PID, (uint32_t*) device_descriptor);
    usb_qtd3 = usbh_qtd_init(0x0, 1, OUT_PID, 0);

    // link the transfer descriptors so they all get executed
    usb_qtd1->nextQtd = (uint32_t)usb_qtd2;
    usb_qtd2->nextQtd = (uint32_t)usb_qtd3;
    
	/* Point the QH to the linked list of qTDs */
	usb_qh_ep0->nextQtd = (uint32_t)usb_qtd1;
        	
	/* Wait for transaction to complete and clear int flag*/
	while (!(UsbReg->USB_USBSTS & (USB_USBSTS_UI)));
	UsbReg->USB_USBSTS |= (USB_USBSTS_UI);
	
	/*!
	 * Check if the last transaction completed
	 * This flag is what is used to recover used descriptors
	 */
	while (usb_qtd3->qtdToken & 0x80);

	/* Check for errors */
  	if(UsbReg->USB_USBSTS & (USB_USBSTS_UEI))
    {
    	
    	printf("ERROR!!!\n");
	    temp = *(uint32_t *)((UsbReg->USB_ASYNCLISTADDR) + 0x18);
        printf("qTD status = 0x%08x\n",temp);	
		/* Clear the USB Error bit */
		UsbReg->USB_USBSTS |= (USB_USBSTS_UEI);
    }
     else
     {
     	printf("Device descriptor has been read!!\n\n");
		#ifdef DEBUG_PRINT	
        	printf("USBSTS = 0x%08x\n",(UsbReg->USB_USBSTS));
    	#endif
    }

	#ifdef DEBUG_PRINT	
		for( i=0; i<0x12; i++)
        	printf("device_descriptor[%02x] = 0x%02x\n",i,device_descriptor[i]);	
	#endif
    
    /* Return memory for descriptors to the heap */
    free((void *)usb_qtd1->mallocPointer);
    free((void *)usb_qtd2->mallocPointer);
    free((void *)usb_qtd3->mallocPointer);
}
/********************************************************************/
void usbh_get_config_desc(usb_module_t *port, usbhQueueHead_t * usb_qh_ep0, uint8_t * config_descriptor)
{
	usbhTransferDescriptor_t * usb_qtd1, *usb_qtd2, *usb_qtd3;
	uint32_t i, temp;
	uint32_t usbhSetupCommand[2];
	
	usbRegisters_t *UsbReg = port->moduleBaseAddress;

	/* data for Get Configuration Descriptor command */
	usbhSetupCommand[0] = 0x02000680;
	usbhSetupCommand[1] = 0x00090000;
		
    usb_qtd1 = usbh_qtd_init(0x8, 0, SETUP_PID, usbhSetupCommand);
    usb_qtd2 = usbh_qtd_init(0x9, 0, IN_PID, (uint32_t *)config_descriptor);
    usb_qtd3 = usbh_qtd_init(0x0, 0, OUT_PID, 0);

    // Link transfer descriptors
    usb_qtd1->nextQtd = (uint32_t)usb_qtd2;
    usb_qtd2->nextQtd = (uint32_t)usb_qtd3;
    
	/* Add transfer descriptors to the queue head*/
	usb_qh_ep0->nextQtd = (uint32_t)usb_qtd1;
        	
	/* Wait for transaction to complete and clear interrpt flag */
	while (!(UsbReg->USB_USBSTS & (USB_USBSTS_UI)));
	UsbReg->USB_USBSTS |= (USB_USBSTS_UI);
	
	/*
	 * check active bit in token word.
	 * If this bit is not cleared, then the transfer is not completed.
	 * wait till done
	 */
	while (usb_qtd3->qtdToken & 0x80);
	
    /* Check for errors */
  	if( UsbReg->USB_USBSTS & (USB_USBSTS_UEI))
    {

    	printf("Error: ");
	    temp = *(uint32_t *)((UsbReg->USB_ASYNCLISTADDR) + 0x18);
        printf("qTD status = 0x%08x\n",temp);	
        for(i=0; i<3; i++)
        	config_descriptor[i] = 0;
     }
     else
     {
		#ifdef DEBUG_PRINT	
	     	printf("Configuration descriptor has been read!!\n\n");
        	printf("USBSTS = 0x%08x\n",(UsbReg->USB_USBSTS));
    	#endif
    }

	#ifdef DEBUG_PRINT	
		for( i=0; i<0x9; i++)
        	printf("config_descriptor[%02x] = 0x%02x\n",i,config_descriptor[i]);	
	#endif
    
	/* Clear the USB error bit */
	UsbReg->USB_USBSTS |= (USB_USBSTS_UEI);
	
	/* Wait until the active bit is cleared in the last qtd. */
	while(usb_qtd3->qtdToken & 0x80);
	
    /* Return memory for descriptors to the heap */
    free((void *)usb_qtd1->mallocPointer);
    free((void *)usb_qtd2->mallocPointer);
    free((void *)usb_qtd3->mallocPointer);
}
/********************************************************************/
void usbh_get_interface_desc(usb_module_t *port, usbhQueueHead_t * usb_qh_ep0, uint8_t * interface_descriptor, uint8_t * hid_descriptor,
						uint8_t * ep_descriptor)
{
	uint8_t *transferBuffer;		// Buffer to store received data
	usbhTransferDescriptor_t * usb_qtd1, *usb_qtd2, *usb_qtd3;
	uint32_t i, temp;
	uint32_t usbhSetupCommand[2];

	usbRegisters_t *UsbReg = port->moduleBaseAddress;

	/* data for Get Configuration Descriptor command */
	usbhSetupCommand[0] = 0x02000680;
	usbhSetupCommand[1] = 0x00FF0000;

	/* Allocate buffer memory */
	transferBuffer = (uint8_t *)malloc(1024);

    usb_qtd1 = usbh_qtd_init(0x8, 0, SETUP_PID, usbhSetupCommand);
    usb_qtd2 = usbh_qtd_init(0xFF, 0, IN_PID, (uint32_t *)transferBuffer);
    usb_qtd3 = usbh_qtd_init(0x0, 1, OUT_PID, 0);

    usb_qtd1->nextQtd = (uint32_t)usb_qtd2;
    // We also link to alternateNextQtd in case the device returns a short packet
    usb_qtd2->nextQtd = (uint32_t)usb_qtd3;
    usb_qtd2->alternateNextQtd = (uint32_t)usb_qtd3;
        
	/* Point the QH to the linked list of qTDs */
	usb_qh_ep0->nextQtd = (uint32_t)usb_qtd1;

	/* Wait for transaction to complete and clear interrpt flag */
	while (!(UsbReg->USB_USBSTS & (USB_USBSTS_UI)));
	UsbReg->USB_USBSTS |= (USB_USBSTS_UI);

	/* Wait until the active bit is cleared in the last qtd. */
	while(usb_qtd3->qtdToken & 0x80);
	
    /* Check for errors */
  	if( UsbReg->USB_USBSTS & (USB_USBSTS_UEI))
    {
    	printf("ERROR!!!\n");
	    temp = *(uint32_t *)((UsbReg->USB_ASYNCLISTADDR) + 0x18);
        printf("qTD status = 0x%08x\n",temp);	
        for(i=0; i<3; i++)
       	interface_descriptor[i] = 0;

      	while (1); // hang around if we had an error
   }
    else
    {
		#ifdef DEBUG_PRINT	
	     	printf("Interface, hid, and endpoint descriptors have been read!!\n\n");
        	printf("USBSTS = 0x%08x\n",(UsbReg->USB_USBSTS));
    	#endif
    }

	for( i=0; i<0x9; i++)
		interface_descriptor[i] = transferBuffer[i+9];
	for( i=0; i<0x9; i++)
		hid_descriptor[i] = transferBuffer[i+18];
	for( i=0; i<0x7; i++)
		ep_descriptor[i] = transferBuffer[i+27];
		

	#ifdef DEBUG_PRINT	
		for( i=0; i<0x9; i++)
        	printf("interface_descriptor[%02x] = 0x%02x\n",i,interface_descriptor[i]);	
		for( i=0; i<0x9; i++)
        	printf("hid_descriptor[%02x] = 0x%02x\n",i,hid_descriptor[i]);	
		for( i=0; i<0x7; i++)
        	printf("ep_descriptor[%02x] = 0x%02x\n",i,ep_descriptor[i]);	        	
	#endif
    
	/* Clear the USB error bit */
	UsbReg->USB_USBSTS |= (USB_USBSTS_UEI);
	
    /* Return memory for descriptors to the heap */
    free((void *)usb_qtd1->mallocPointer);
    free((void *)usb_qtd2->mallocPointer);
    free((void *)usb_qtd3->mallocPointer);
}
/********************************************************************/
void usbh_set_configuration(usb_module_t *port, usbhQueueHead_t * usb_qh_ep0, uint32_t config_value)
{
	usbhTransferDescriptor_t * usb_qtd1, *usb_qtd2;
	uint32_t temp;
	uint32_t usbhSetupCommand[2];

	usbRegisters_t *UsbReg = port->moduleBaseAddress;

	/* data for Set Address command */
	usbhSetupCommand[0] = 0x00000900 | ((0x7F & config_value) <<16);
	usbhSetupCommand[1] = 0x00000000;
	
    usb_qtd1 = usbh_qtd_init(0x8, 0, SETUP_PID, usbhSetupCommand);
    usb_qtd2 = usbh_qtd_init(0x0, 1, IN_PID, 0);

    usb_qtd1->nextQtd = (uint32_t)usb_qtd2;
    
    while(usb_qh_ep0->qtdToken & 0x80); /* wait for active bit to clear */
    
	/* Point the QH to the linked list of qTDs */
	usb_qh_ep0->nextQtd = (uint32_t)usb_qtd1;
    
    /* Enable async schedule */
//	USB_USBCMD(USB_MODULE) |= USB_USBCMD_ASE;
	
	/* Wait for asynchronous schedule to enable */
//	while (!(USB_USBSTS(USB_MODULE) & USB_USBSTS_AS));

	/* Wait for transaction to complete and clear interrpt flag */
	#ifdef USB_USE_INT
	while (usb_utmi_int_flag == 0);
	usb_utmi_int_flag = 0;
	#else
	while (!(UsbReg->USB_USBSTS & (USB_USBSTS_UI)));
	UsbReg->USB_USBSTS |= (USB_USBSTS_UI);
	#endif
	
	/* Wait until the active bit is cleared in the last qtd. */
	while(usb_qtd2->qtdToken & 0x80);

    /* Check for errors */
  	if( UsbReg->USB_USBSTS & (USB_USBSTS_UEI))
    {
    	printf("ERROR!!!\n");
	    temp = *(uint32_t *)((UsbReg->USB_ASYNCLISTADDR) + 0x18);
        printf("qTD status = 0x%08x\n",temp);	
     }
     else
     {
     	printf("Set configuration command complete!!\n\n");
		#ifdef DEBUG_PRINT	
        	printf("USBSTS = 0x%08x\n",(UsbReg->USB_USBSTS));
    	#endif
    }
	/* Clear the USB error bit */
	UsbReg->USB_USBSTS |= (USB_USBSTS_UEI);
	
    /* Return memory for descriptors to the heap */
    free((void *)usb_qtd1->mallocPointer);
    free((void *)usb_qtd2->mallocPointer);
}
/********************************************************************/
void usbh_get_report_desc(usb_module_t *port, usbhQueueHead_t * usb_qh_ep0, uint8_t *report_descriptor)
{
	usbhTransferDescriptor_t *usb_qtd1, *usb_qtd2, *usb_qtd3;
	uint32_t i, temp;
	uint32_t usbhSetupCommand[2];

    usbRegisters_t *UsbReg = port->moduleBaseAddress;

	/* data for Get Configuration Descriptor command */
	usbhSetupCommand[0] = 0x22000681;
	usbhSetupCommand[1] = 0x00740000;
	
	// Create transfer descriptors for the control transfer
    usb_qtd1 = usbh_qtd_init(0x8, 0, SETUP_PID, (uint32_t *)usbhSetupCommand);
    usb_qtd2 = usbh_qtd_init(0x74, 0, IN_PID, (uint32_t *)report_descriptor);
    usb_qtd3 = usbh_qtd_init(0x0, 1, OUT_PID, 0);

    usb_qtd1->nextQtd = (uint32_t)usb_qtd2;
    usb_qtd2->nextQtd = usb_qtd2->alternateNextQtd = (uint32_t)usb_qtd3;
        
	/* Point the QH to the linked list of qTDs */
	usb_qh_ep0->nextQtd = (uint32_t)usb_qtd1;
        	
	/* Wait for transaction to complete and clear interrupt flag */
	while (!(UsbReg->USB_USBSTS & (USB_USBSTS_UI)));
	UsbReg->USB_USBSTS |= (USB_USBSTS_UI);
	
	/* Wait until the active bit is cleared in the last qtd. */
	while(usb_qtd3->qtdToken & 0x80);

    /* Check for errors */
  	if( UsbReg->USB_USBSTS & (USB_USBSTS_UEI))
    {
    	printf("ERROR!!!\n");
	    temp = *(uint32_t *)((UsbReg->USB_ASYNCLISTADDR) + 0x18);
        printf("qTD status = 0x%08x\n",temp);	
        for(i=0; i<3; i++)
        	report_descriptor[i] = 0;
    }
    else
    {
		#ifdef DEBUG_PRINT	
	     	printf("Report descriptor has been read!!\n\n");
        	printf("USBSTS = 0x%08x\n",(UsbReg->USB_USBSTS));
    	#endif
    }

	#ifdef DEBUG_PRINT	
		i=0;
		while (!((report_descriptor[i-1] == 0xC0) & (report_descriptor[i-2] == 0xC0))) 
        {
        	printf("report_descriptor[%02x] = 0x%02x\n",i,report_descriptor[i]);	
        	i++;
        }
	#endif
    
	/* Clear the USB error bit */
	UsbReg->USB_USBSTS |= (USB_USBSTS_UEI);
	
    /* Return memory for descriptors to the heap */
    free((void *)usb_qtd1->mallocPointer);
    free((void *)usb_qtd2->mallocPointer);
    free((void *)usb_qtd3->mallocPointer);
}

