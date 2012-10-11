/*
 * Copyright (C) 2011-2012, Freescale Semiconductor, Inc. All Rights Reserved
 * THIS SOURCE CODE IS CONFIDENTIAL AND PROPRIETARY AND MAY NOT
 * BE USED OR DISTRIBUTED WITHOUT THE WRITTEN PERMISSION OF
 * Freescale Semiconductor, Inc.
*/

#ifndef __ENET_H__
#define __ENET_H__

#if !defined (CHIP_MX6SL)
#include "registers/regsenet.h"
#else
#include "registers/regsfec.h"
#define hw_enet_t hw_fec_t
#endif

#define 	NUM_OF_ETH_DEVS	1

/* The defines of event bits */
#define ENET_EVENT_HBERR 0x80000000

#define ENET_EVENT_BABR	BM_ENET_EIR_BABR

#define ENET_EVENT_BABT	BM_ENET_EIR_BABT

#define ENET_EVENT_GRA	BM_ENET_EIR_GRA

#define ENET_EVENT_TXF 	BM_ENET_EIR_TXF

#define ENET_EVENT_TXB	BM_ENET_EIR_TXB

#define ENET_EVENT_RXF	BM_ENET_EIR_RXF

#define ENET_EVENT_RXB	BM_ENET_EIR_RXB

#define ENET_EVENT_MII	BM_ENET_EIR_MII

#define ENET_EVENT_EBERR	BM_ENET_EIR_EBERR

#define ENET_EVENT_LC	BM_ENET_EIR_LC

#define ENET_EVENT_RL	BM_ENET_EIR_RL

#define ENET_EVENT_UN	BM_ENET_EIR_UN

#define ENET_EVENT_TX		ENET_EVENT_TXF

#define ENET_EVENT_TX_ERR	(ENET_EVENT_BABT | ENET_EVENT_LC | ENET_EVENT_RL | ENET_EVENT_UN)

#define ENET_EVENT_RX		ENET_EVENT_RXF

#define ENET_EVENT_ERR		(ENET_EVENT_HBERR | ENET_EVENT_EBERR)

#define ENET_RX_FRAMES		8

#define ENET_FRAME_LEN		(1540+4)

/* the defines to active transmit or receive frame */
#define ENET_RX_TX_ACTIVE	BM_ENET_TDAR_TDAR	//BM_ENET_RDAR_RDAR

/* the defines of Ethernet Control register */
#define ENET_RESET	BM_ENET_ECR_RESET

#define ENET_ETHER_EN	BM_ENET_ECR_ETHEREN
#define ENET_ETHER_SPEED_1000M (1<<5)
#define ENET_ETHER_LITTLE_ENDIAN (1<<8)
/* the defins of MII operation */
#define ENET_MII_ST	0x40000000

#define ENET_MII_OP_OFF	BP_ENET_MMFR_OP

#define ENET_MII_OP_MASK 0x03

#define ENET_MII_OP_RD	0x02

#define ENET_MII_OP_WR	0x01

#define ENET_MII_PA_OFF	BP_ENET_MMFR_PA

#define ENET_MII_PA_MASK 0xFF

#define ENET_MII_RA_OFF	18

#define ENET_MII_RA_MASK	0xFF

#define ENET_MII_TA	0x00020000

#define ENET_MII_DATA_OFF BP_ENET_MMFR_DATA

#define ENET_MII_DATA_MASK 0x0000FFFF

#define ENET_MII_FRAME	( ENET_MII_ST | ENET_MII_TA )

#define ENET_MII_OP(x)	( ((x) & ENET_MII_OP_MASK) << ENET_MII_OP_OFF )

#define ENET_MII_PA(pa)  (((pa)& ENET_MII_PA_MASK) << ENET_MII_PA_OFF)

#define ENET_MII_RA(ra)	(((ra)& ENET_MII_RA_MASK) << ENET_MII_RA_OFF)

#define ENET_MII_SET_DATA(v) (((v) & ENET_MII_DATA_MASK) << ENET_MII_DATA_OFF)

#define ENET_MII_GET_DATA(v) (((v) >> ENET_MII_DATA_OFF) & ENET_MII_DATA_MASK )

#define ENET_MII_READ(pa, ra) (	( ENET_MII_FRAME | ENET_MII_OP(ENET_MII_OP_RD) )|\
					ENET_MII_PA(pa) | ENET_MII_RA(ra) )

#define ENET_MII_WRITE(pa, ra, v) ( ENET_MII_FRAME | ENET_MII_OP(ENET_MII_OP_WR)|\
				ENET_MII_PA(pa) | ENET_MII_RA(ra) |ENET_MII_SET_DATA(v) )

#define MII_SPEED_SHIFT	1

#define MII_SPEED_MASK 	0x0000003F

#define MII_SPEED(x)	( (((((x)+499999)/2500000)&(MII_SPEED_MASK))>>1)<<(MII_SPEED_SHIFT) )

/*the defines of MIB control */
#define ENET_MIB_DISABLE	BM_ENET_MIBC_MIB_DIS

/*the defines of Receive Control*/
#define ENET_RCR_FCE	BM_ENET_RCR_FCE

#define ENET_RCR_BC_REJ	BM_ENET_RCR_BC_REJ

#define ENET_RCR_PROM	BM_ENET_RCR_PROM

#define ENET_RCR_MII_MODE	(BM_ENET_RCR_MII_MODE)
#define ENET_RCR_RGMII_EN       (1<<6)  /*RGMII enable/disable */
#define ENET_RCR_RMII_MODE      (BM_ENET_RCR_RMII_MODE)  /*RMII mode:1->10M, 0->100M */

/*the defines of Transmit Control*/
#define ENET_TCR_RFC_PAUSE	BM_ENET_TCR_RFC_PAUSE

#define ENET_TCR_FDEN		BM_ENET_TCR_FDEN

/*the defines of buffer description*/
#define ENET_BD_RX_NUM	8

#define ENET_BD_TX_NUM	2

//! @brief MII type
enum imx_mii_type {
    MII,
    RMII,
    RGMII,
};

#define BD_RX_ST_EMPTY 0x8000

#define BD_RX_ST_WRAP  0x2000

#define BD_RX_ST_LAST  0x0800

#define BD_RX_ST_ERRS  0x0037

#define BD_TX_ST_RDY	0x8000

#define BD_TX_ST_WRAP	0x2000

#define BD_TX_ST_LAST  	0x0800

#define BD_TX_ST_TC  	0x0400

#define BD_TX_ST_ABC	0x0200

//! @brief  Data structure for Tx/Rx buffer descriptor
typedef struct imx_enet_bd_t {
    unsigned short int length;  /*packet size */
    unsigned short int status;  /*control & statue of this buffer description */
    unsigned char *data;        /*frame buffer address */
} imx_enet_bd_t;

//! @brief  Data structure for ENET device
typedef struct imx_enet_priv_s {
    hw_enet_t *enet_reg;     /*the reister base address of ENET */
    unsigned char phy_addr;     /*the address of PHY which associated with ENET controller */
    unsigned char tx_busy;      /*0:free, 1:transmitting frame */
    unsigned char res[2];
    unsigned long status;       /*the status of ENET device:link-status etc. */
    unsigned long tx_key;       /*save the key delivered from send function */
    imx_enet_bd_t *rx_bd;       /*the receive buffer description ring */
    imx_enet_bd_t *rx_cur;      /*the next recveive buffer description */
    imx_enet_bd_t *tx_bd;       /*the transmit buffer description rign */
    imx_enet_bd_t *tx_cur;      /*the next transmit buffer description */
    /*TODO: Add interrupt about fields */
    /*TODO: Add timer about fields */
} imx_enet_priv_t;

#define MXC_ENET_PRIVATE(x)	((imx_enet_priv_t *)(x)->driver_private)

/*The defines of the status field of imx_enet_priv_t */
#define ENET_STATUS_LINK_ON	0x80000000

#define ENET_STATUS_FULL_DPLX	0x40000000

#define ENET_STATUS_AUTO_NEG	0x20000000
#define ENET_STATUS_10M		0x8000000
#define ENET_STATUS_100M		0x10000000
#define ENET_STATUS_1000M		0x20000000
/*The defines about PHY */
#ifndef ENET_PHY_ADDR
#define PHY_PORT_ADDR		0x01
#else
#define PHY_PORT_ADDR		ENET_PHY_ADDR
#endif

#define PHY_CTRL_REG		0x00

#define PHY_CTRL_RESET		0x8000

#define PHY_CTRL_AUTO_NEG	0x1000

#define PHY_CTRL_FULL_DPLX	0x0100

#define PHY_STATUS_REG		0x01

#define PHY_STATUS_LINK_ST	0x0004

#define PHY_IDENTIFY_1		0x02

#define PHY_IDENTIFY_2		0x03

#define PHY_ID1_SHIFT		16

#define PHY_ID1_MASK		0xFFFF

#define PHY_ID2_SHIFT		0

#define PHY_ID2_MASK		0xFFFF

#define PHY_MODE_NUM		0x03F0

#define PHY_REV_NUM		0x000F

#define PHY_DIAG_REG		0x12

#define PHY_DIAG_DPLX		0x0800

#define PHY_DIAG_RATE		0x0400

#define PHY_MODE_REG		0x15

#define PHY_LED_SEL			0x200

#define PHY_AUTO_NEG_REG	0x5

#define PHY_AUTO_10BASET	0x20

#define PHY_AUTO_10BASET_DPLX		0x40

#define PHY_AUTO_100BASET	0x80

#define PHY_AUTO_100BASET_DPLX	0x100

#define PHY_AUTO_NEG_EXP_REG	0x6

#define PHY_AUTO_NEG_NEW_PAGE	0x2

#define PHY_AUTO_NEG_CAP		0x1

#define PHY_INT_SRC_REG	29

#define PHY_INT_AUTO_NEG	0x40

#define ENET_COMMON_TICK	2

#define ENET_COMMON_TIMEOUT	(1000*1000)

#define ENET_MII_TICK	2

#define ENET_MII_TIMEOUT	(1000*1000)

/*! 
 * Enable ENET and start transfer.
 * @param       dev    a pointer of ENET interface(imx_enet_priv_t) 
 *			 enaddr 	a pointer of MAC address
 *
 * @return      none
 */
void imx_enet_start(imx_enet_priv_t * dev, unsigned char *enaddr);

/*! 
 * Disable ENET
 * @param       dev    a pointer of ENET interface(imx_enet_priv_t) 
 *
 * @return      none
 */
void imx_enet_stop(imx_enet_priv_t * dev);

/*! 
 * Initialize ENET PHY, like LAN8700, 8720, AR8031, etc
 * @param       dev    a pointer of ENET interface(imx_enet_priv_t) 
 *
 * @return      none
 */
void imx_enet_phy_init(imx_enet_priv_t * dev);

/*! 
 * Initialize ENET interface, including buffer descriptor and MAC
 * @param       dev    a pointer of ENET interface(imx_enet_priv_t) 
 *			 reg_base	base address of ethernet registers
 *			 phy_addr	phy address, 0 or 1
 *
 * @return      zero
 */
int imx_enet_init(imx_enet_priv_t * dev, unsigned long reg_base, int phy_addr);

/*! 
 * Poll ENET events
 * @param       dev    a pointer of ENET interface(imx_enet_priv_t) 
 *
 * @return      event value
 */
unsigned long imx_enet_poll(imx_enet_priv_t * dev);

/*! 
 * Recieve ENET packet
 * @param       dev    a pointer of ENET interface(imx_enet_priv_t) 
 *			 buf		a pointer of buffer for received packet
 *			 length	the length of received packet
 *
 * @return      0 if succeeded
 *			-1 if failed
 *
 */
int imx_enet_recv(imx_enet_priv_t * dev, unsigned char *buf, int *length);

/*! 
 * Transmit ENET packet
 * @param       dev    a pointer of ENET interface(imx_enet_priv_t) 
 *			 buf		a pointer of buffer for packet to be sent
 *			 length	the length of packet to be sent
 *			 key		key
 *
 * @return      zero
 */
int imx_enet_send(imx_enet_priv_t * dev, unsigned char *buf, int length, unsigned long key);

#endif //__ENET_H__
