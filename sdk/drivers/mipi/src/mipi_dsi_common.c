/*
 * Copyright (C) 2009-2012, Freescale Semiconductor, Inc. All Rights Reserved
 * THIS SOURCE CODE IS CONFIDENTIAL AND PROPRIETARY AND MAY NOT
 * BE USED OR DISTRIBUTED WITHOUT THE WRITTEN PERMISSION OF
 * Freescale Semiconductor, Inc.
*/

/*!
 * @file  mipi_dsi_common.c
 * @brief common functions for mipi dsi, currently only support DPI mode
 *
 * @ingroup diag_mipi
 */

#include "registers/regsmipidsi.h"
#include "mipi/mipi_common.h"
#include "ipu/ipu_common.h"
#include "truly_hx8369.h"

void dphy_write_control(unsigned long testcode, unsigned long testwrite)
{
	/* {phy_testclk, phy_testclr} = {0, 0} */
	BW_MIPI_DSI_PHY_TST_CTRL0_PHY_TESTCLK(0);
	BW_MIPI_DSI_PHY_TST_CTRL0_PHY_TESTCLR(0);

	/* {phy_testen, phy_testdout, phy_testdin}*/
	HW_MIPI_DSI_PHY_TST_CTRL1_WR(testcode);
	BW_MIPI_DSI_PHY_TST_CTRL1_PHY_TESTEN(1);

	/* {phy_testclk, phy_testclr} = {0, 0} --> {1, 0}*/
	BW_MIPI_DSI_PHY_TST_CTRL0_PHY_TESTCLK(1);

	/* {phy_testclk, phy_testclr} = {1, 0} --> {0, 0}*/
	BW_MIPI_DSI_PHY_TST_CTRL0_PHY_TESTCLK(0);

	/* {phy_testen, phy_testdout, phy_testdin}*/
	HW_MIPI_DSI_PHY_TST_CTRL1_WR(testwrite);
	BW_MIPI_DSI_PHY_TST_CTRL1_PHY_TESTEN(0);

	/* {phy_testclk, phy_testclr} = {0, 0} --> {1, 0}*/
	BW_MIPI_DSI_PHY_TST_CTRL0_PHY_TESTCLK(1);

	/* {phy_testclk, phy_testclr} = {1, 0} --> {0, 0}*/
	BW_MIPI_DSI_PHY_TST_CTRL0_PHY_TESTCLK(0);
}

void gen_write_cmd(unsigned long gen_hdr)
{
	HW_MIPI_DSI_GEN_HDR_WR(gen_hdr);
	//while(!HW_MIPI_DSI_CMD_PKT_STATUS.B.GEN_CMD_EMPTY);
}

void gen_write_data(unsigned long gen_pld_data)
{
	HW_MIPI_DSI_GEN_PLD_DATA_WR(gen_pld_data);
}

int gen_read_data(void)
{
	return HW_MIPI_DSI_GEN_PLD_DATA_RD();
}

void mipi_lcd_init(void)
{
	int val = 0;
	gen_write_data(HX8369_CMD_SETEXTC | (HX8369_CMD_SETEXTC_PARAM_1 << 8));
	gen_write_cmd((HX8369_CMD_SETEXTC_LEN << 8) | MIPI_DSI_GENERIC_LONG_WRITE);

#if 0
	gen_write_cmd((HX8369_CMD_GETHXID << 8) | MIPI_DSI_GENERIC_READ_REQUEST_2_PARAM);
	val = gen_read_data();
	printf("ID is %x\n", val);
#endif

	/* 
	 * set the TRULY MIPI panel
	 * choose DPI mode, resolution is 480x800, RGB24 format
	 */
	gen_write_data(HX8369_CMD_SETDISP | (HX8369_CMD_SETDISP_1_HALT << 8) |
			(HX8369_CMD_SETDISP_2_RES_MODE << 16) |
			(HX8369_CMD_SETDISP_3_BP << 24));
	gen_write_data(HX8369_CMD_SETDISP_4_FP | (HX8369_CMD_SETDISP_5_SAP << 8) |
			 (HX8369_CMD_SETDISP_6_GENON << 16) |
			 (HX8369_CMD_SETDISP_7_GENOFF << 24));
	gen_write_data(HX8369_CMD_SETDISP_8_RTN | (HX8369_CMD_SETDISP_9_TEI << 8) |
			 (HX8369_CMD_SETDISP_10_TEP_UP << 16) |
			 (HX8369_CMD_SETDISP_11_TEP_LOW << 24));
	gen_write_data(HX8369_CMD_SETDISP_12_BP_PE |
			(HX8369_CMD_SETDISP_13_FP_PE << 8) |
			 (HX8369_CMD_SETDISP_14_RTN_PE << 16) |
			 (HX8369_CMD_SETDISP_15_GON << 24));
	gen_write_cmd((HX8369_CMD_SETDISP_LEN << 8) | MIPI_DSI_GENERIC_LONG_WRITE);
		
	/* Set display waveform cycle */
	gen_write_data(HX8369_CMD_SETCYC | (HX8369_CMD_SETCYC_PARAM_1 << 8));
	gen_write_data(HX8369_CMD_SETCYC_PARAM_2);
	gen_write_cmd((HX8369_CMD_SETCYC_LEN << 8) | MIPI_DSI_GENERIC_LONG_WRITE);

	/* Set GIP timing output control */
	gen_write_data(HX8369_CMD_SETGIP | (HX8369_CMD_SETGIP_PARAM_1 << 8));
	gen_write_data(HX8369_CMD_SETGIP_PARAM_2);
	gen_write_data(HX8369_CMD_SETGIP_PARAM_3);
	gen_write_data(HX8369_CMD_SETGIP_PARAM_4);
	gen_write_data(HX8369_CMD_SETGIP_PARAM_5);
	gen_write_data(HX8369_CMD_SETGIP_PARAM_6);
	gen_write_data(HX8369_CMD_SETGIP_PARAM_7);
	gen_write_cmd((HX8369_CMD_SETGIP_LEN << 8) | MIPI_DSI_GENERIC_LONG_WRITE);

	/* Set power: standby, DC etc. */
	gen_write_data(HX8369_CMD_SETPOWER | (HX8369_CMD_SETPOWER_PARAM_1 << 8));
	gen_write_data(HX8369_CMD_SETPOWER_PARAM_2);
	gen_write_data(HX8369_CMD_SETPOWER_PARAM_3);
	gen_write_data(HX8369_CMD_SETPOWER_PARAM_4);
	gen_write_data(HX8369_CMD_SETPOWER_PARAM_5);
	gen_write_cmd((HX8369_CMD_SETPOWER_LEN << 8) | MIPI_DSI_GENERIC_LONG_WRITE);

	/* Set VCOM voltage. */
	gen_write_data(HX8369_CMD_SETVCOM | (HX8369_CMD_SETVCOM_PARAM_1 << 8));
	gen_write_cmd((HX8369_CMD_SETVCOM_LEN << 8) | MIPI_DSI_GENERIC_LONG_WRITE);

	/* Set Panel format: BGR/RGB*/
	val = HX8369_CMD_SETPANEL | (HX8369_CMD_SETPANEL_PARAM_1 << 8);
	gen_write_cmd((val << 8) |MIPI_DSI_GENERIC_SHORT_WRITE_2_PARAM);

	/* Set gamma curve related setting */
	gen_write_data(HX8369_CMD_SETGAMMA | (HX8369_CMD_SETGAMMA_PARAM_1 << 8));
	gen_write_data(HX8369_CMD_SETGAMMA_PARAM_2);
	gen_write_data(HX8369_CMD_SETGAMMA_PARAM_3);
	gen_write_data(HX8369_CMD_SETGAMMA_PARAM_4);
	gen_write_data(HX8369_CMD_SETGAMMA_PARAM_5);
	gen_write_data(HX8369_CMD_SETGAMMA_PARAM_6);
	gen_write_data(HX8369_CMD_SETGAMMA_PARAM_7);
	gen_write_data(HX8369_CMD_SETGAMMA_PARAM_8);
	gen_write_data(HX8369_CMD_SETGAMMA_PARAM_9);
	gen_write_cmd((HX8369_CMD_SETGAMMA_LEN << 8) | MIPI_DSI_GENERIC_LONG_WRITE);

	/* Set MIPI: DPHYCMD & DSICMD, data lane number */
	gen_write_data(HX8369_CMD_SETMIPI | (HX8369_CMD_SETMIPI_PARAM_1 << 8));
	gen_write_data(HX8369_CMD_SETMIPI_PARAM_2);
	gen_write_data(HX8369_CMD_SETMIPI_PARAM_3 | HX8369_CMD_SETMIPI_ONELANE);
	gen_write_data(HX8369_CMD_SETMIPI_PARAM_4);
	gen_write_cmd((HX8369_CMD_SETMIPI_LEN << 8) | MIPI_DSI_GENERIC_LONG_WRITE);

	/* Set pixel format:24bpp */
	val = HX8369_CMD_SETPIXEL_FMT | (HX8369_CMD_SETPIXEL_FMT_24BPP << 8);
	gen_write_cmd((val << 8) | MIPI_DSI_GENERIC_SHORT_WRITE_2_PARAM);

	/* Set column address: 0~479 */
	gen_write_data(HX8369_CMD_SETCLUMN_ADDR | (HX8369_CMD_SETCLUMN_ADDR_PARAM_1 << 8));
	gen_write_data(HX8369_CMD_SETCLUMN_ADDR_PARAM_2);
	gen_write_cmd((HX8369_CMD_SETCLUMN_ADDR_LEN << 8) | MIPI_DSI_GENERIC_LONG_WRITE);

	/* Set page address: 0~799 */
	gen_write_data(HX8369_CMD_SETPAGE_ADDR |(HX8369_CMD_SETPAGE_ADDR_PARAM_1 << 8));
	gen_write_data(HX8369_CMD_SETPAGE_ADDR_PARAM_2);
	gen_write_cmd((HX8369_CMD_SETPAGE_ADDR_LEN << 8) | MIPI_DSI_GENERIC_LONG_WRITE);
    	hal_delay_us(500);

	/* Set display brightness related */
	val = HX8369_CMD_WRT_DISP_BRIGHT | (HX8369_CMD_WRT_DISP_BRIGHT_PARAM_1 << 8);
	gen_write_cmd((val << 8) |MIPI_DSI_GENERIC_SHORT_WRITE_2_PARAM);

	val = HX8369_CMD_WRT_CABC_CTRL |(HX8369_CMD_WRT_CABC_CTRL_PARAM_1 << 8);
	gen_write_cmd((val << 8) |MIPI_DSI_GENERIC_SHORT_WRITE_2_PARAM);
    	hal_delay_us(500);
	
	val = HX8369_CMD_WRT_CTRL_DISP |(HX8369_CMD_WRT_CTRL_DISP_PARAM_1 << 8);
	gen_write_cmd((val << 8) |MIPI_DSI_GENERIC_SHORT_WRITE_2_PARAM);
    	hal_delay_us(500);

	/* exit sleep mode and set display on */
	gen_write_cmd((MIPI_DCS_EXIT_SLEEP_MODE << 8) |MIPI_DSI_GENERIC_SHORT_WRITE_1_PARAM);
	
	/* To allow time for the supply voltages
	 * and clock circuits to stabilize.
	 */
	hal_delay_us(5000);
	gen_write_cmd((MIPI_DCS_SET_DISPLAY_ON << 8) |MIPI_DSI_GENERIC_SHORT_WRITE_1_PARAM);
}

void mipi_dsi_init(void)
{
    int dlane = 1;              //data lane set to 1
	int thsa, thbp, thline;
	float dpi2_laneclk_ratio;
	float pclk = 0;
	float pperiod = 0;

	/*step 1: keeping core and d-phy in reset state */
	HW_MIPI_DSI_PWR_UP_WR(0x0);
	HW_MIPI_DSI_PHY_RSTZ_WR(0x0);

    /*step 2: set the DSI DPI interface */
	BW_MIPI_DSI_PHY_IF_CFG_PHY_STOP_WAIT_TIME(PHY_STOP_WAIT_TIME);
	BW_MIPI_DSI_PHY_IF_CFG_N_LANES(dlane - 1);

    /*virtual id = 0, 24bit color normal color mode, and also the sync polarities */
	HW_MIPI_DSI_DPI_CFG_WR(DPI_CFG);
    /*set the video transmission mode, select burst mode */
	HW_MIPI_DSI_VID_MODE_CFG_WR(VID_MODE_CFG);
    /*set timeout clock and escape clock divisions. */
	HW_MIPI_DSI_CLKMGR_CFG_WR(DSI_CLK_DIV);
	HW_MIPI_DSI_PHY_TMR_CFG_WR(PHY_TIMING_CFG);
	HW_MIPI_DSI_VID_PKT_CFG_WR(VID_PKT_CFG);
    /*calculate and set the timing */
	pclk = (264/((int)(264/24.55+0.5)));   //MHz, 264M is the IPU frequency
	pperiod = ((float)(1000/pclk)); //ns
   	dpi2_laneclk_ratio = (float)(pperiod/CLKLANEBYTEPERIOD); 
	thsa = (int)(((float)DPITHSA)*dpi2_laneclk_ratio);
	thbp = (int)(((float)DPITHBP)*dpi2_laneclk_ratio);
	thline = (int)(((float)(DPITHSA+DPITHBP+DPITHACT+DPITHFP))*dpi2_laneclk_ratio);
	BW_MIPI_DSI_TMR_LINE_CFG_HSA_TIME(thsa);
	BW_MIPI_DSI_TMR_LINE_CFG_HBP_TIME(thbp);
	BW_MIPI_DSI_TMR_LINE_CFG_HLINE_TIME(thline);
	HW_MIPI_DSI_VTIMING_CFG_WR(VTIMING_CFG);
    /*set the packet handleri, including the packet size and sync timing */
	HW_MIPI_DSI_PCKHDL_CFG_WR(PCKHDL_CFG);
	HW_MIPI_DSI_CMD_MODE_CFG_WR(0x00001fff);
    /*enable DSI controller */
	HW_MIPI_DSI_PWR_UP_WR(PWR_UP);

    /*step 4: configure the DPHY PLL clock frequency */
    dphy_write_control(0x44, 0x32); //set clock to be 800Mhz
	BW_MIPI_DSI_PHY_RSTZ_PHY_SHUTDOWNZ(1);
	BW_MIPI_DSI_PHY_RSTZ_PHY_RSTZ(1);
	BW_MIPI_DSI_PHY_RSTZ_PHY_ENABLECLK(1);

	while(!HW_MIPI_DSI_PHY_STATUS.B.PHYLOCK);
	while(!HW_MIPI_DSI_PHY_STATUS.B.PHYSTOPSTATECLKLANE);

    /*configure the TRULY panel through the generic data interface */
    mipi_lcd_init();

	HW_MIPI_DSI_PHY_IF_CTRL_WR(PHY_IF_CTRL);
}
