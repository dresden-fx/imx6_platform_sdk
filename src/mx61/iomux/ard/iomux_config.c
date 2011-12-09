/*
 * Copyright (C) 2011, Freescale Semiconductor, Inc. All Rights Reserved.
 * THIS SOURCE CODE IS CONFIDENTIAL AND PROPRIETARY AND MAY NOT
 * BE USED OR DISTRIBUTED WITHOUT THE WRITTEN PERMISSION OF
 * Freescale Semiconductor, Inc.
*/

// File: iomux_config.c

#include <iomux_config.h>

// Function to configure iomux for i.MX6DQ board ARD Rev. A.
void iomux_config(void)
{
    audmux_iomux_config();
    can1_iomux_config();
    can2_iomux_config();
    ccm_iomux_config();
    ecspi1_iomux_config();
    enet_iomux_config();
    esai_iomux_config();
    gpio1_iomux_config();
    gpio2_iomux_config();
    gpio4_iomux_config();
    gpio5_iomux_config();
    gpio6_iomux_config();
    i2c2_iomux_config();
    i2c3_iomux_config();
    ipu1_iomux_config();
    mlb_iomux_config();
    pwm3_iomux_config();
    pwm4_iomux_config();
    rawnand_iomux_config();
    spdif_iomux_config();
    uart2_iomux_config();
    uart3_iomux_config();
    uart4_iomux_config();
    usdhc1_iomux_config();
    usdhc3_iomux_config();
    wdog1_iomux_config();
    weim_iomux_config();
}

// Definitions for unused modules.
void anatop_iomux_config()
{
};

void asrc_iomux_config()
{
};

void caam_wrapper_iomux_config()
{
};

void cheetah_iomux_config()
{
};

void csu_iomux_config()
{
};

void dcic1_iomux_config()
{
};

void dcic2_iomux_config()
{
};

void ecspi2_iomux_config()
{
};

void ecspi3_iomux_config()
{
};

void ecspi4_iomux_config()
{
};

void ecspi5_iomux_config()
{
};

void epit1_iomux_config()
{
};

void epit2_iomux_config()
{
};

void gpio3_iomux_config()
{
};

void gpio7_iomux_config()
{
};

void gpt_iomux_config()
{
};

void gpu3d_iomux_config()
{
};

void hdmi_tx_iomux_config()
{
};

void i2c1_iomux_config()
{
};

void ipu2_iomux_config()
{
};

void kpp_iomux_config()
{
};

//void ldb_iomux_config(){};
void mipi_core_iomux_config()
{
};

void mipi_hsi_ctrl_iomux_config()
{
};

void mmdc_iomux_config()
{
};

void observe_mux_iomux_config()
{
};

void ocotp_ctrl_wrapper_iomux_config()
{
};

void osc32k_iomux_config()
{
};

void pcie_ctrl_iomux_config()
{
};

void phy_iomux_config()
{
};

void pl301_mx63per1_iomux_config()
{
};

void pwm1_iomux_config()
{
};

void pwm2_iomux_config()
{
};

void reserved_iomux_config()
{
};

void sata_phy_iomux_config()
{
};

void sdma_iomux_config()
{
};

void sjc_iomux_config()
{
};

void snvs_hp_wrapper_iomux_config()
{
};

void snvs_lp_wrapper_iomux_config()
{
};

void src_iomux_config()
{
};

void tcu_iomux_config()
{
};

void tpsmp_iomux_config()
{
};

void uart1_iomux_config()
{
};

void uart5_iomux_config()
{
};

void usboh3_iomux_config()
{
};

void usdhc2_iomux_config()
{
};

void usdhc4_iomux_config()
{
};

void wdog2_iomux_config()
{
};
