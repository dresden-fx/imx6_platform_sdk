/*
 * Copyright (C) 2012, Freescale Semiconductor, Inc. All Rights Reserved.
 * THIS SOURCE CODE IS CONFIDENTIAL AND PROPRIETARY AND MAY NOT
 * BE USED OR DISTRIBUTED WITHOUT THE WRITTEN PERMISSION OF
 * Freescale Semiconductor, Inc.
*/

// File: audmux_iomux_config.c

#include <io.h>
#include <iomux_define.h>
#include <iomux_register.h>

// Function to config iomux for instance audmux.
void audmux_iomux_config(void)
{
    // Config audmux.AUD3_RXD to pad CSI0_DAT7(N3)
    // Mux Register:
    // IOMUXC_SW_MUX_CTL_PAD_CSI0_DAT7(0x020E0274)
    //   SION (4) - Software Input On Field Reset: SION_DISABLED
    //              Force the selected mux mode Input path no matter of MUX_MODE functionality.
    //     SION_DISABLED (0) - Input Path is determined by functionality of the selected mux mode (regular).
    //     SION_ENABLED (1) - Force input path of pad CSI0_DAT7.
    //   MUX_MODE (2-0) - MUX Mode Select Field Reset: ALT5
    //                    Select 1 of 8 iomux modes to be used for pad: CSI0_DAT7.
    //     ALT0 (0) - Select mux mode: ALT0 mux port: CSI0_D[7] of instance: ipu1.
    //     ALT1 (1) - Select mux mode: ALT1 mux port: WEIM_D[5] of instance: weim.
    //     ALT2 (2) - Select mux mode: ALT2 mux port: SS0 of instance: ecspi1.
    //                NOTE: - Config Register IOMUXC_ECSPI1_IPP_IND_SS_B_0_SELECT_INPUT for mode ALT2.
    //     ALT3 (3) - Select mux mode: ALT3 mux port: ROW[6] of instance: kpp.
    //                NOTE: - Config Register IOMUXC_KPP_IPP_IND_ROW_6_SELECT_INPUT for mode ALT3.
    //     ALT4 (4) - Select mux mode: ALT4 mux port: AUD3_RXD of instance: audmux.
    //     ALT5 (5) - Select mux mode: ALT5 mux port: GPIO[25] of instance: gpio5.
    //     ALT6 (6) - Select mux mode: ALT6 mux port: MMDC_DEBUG[46] of instance: mmdc.
    //     ALT7 (7) - Select mux mode: ALT7 mux port: TRACE[4] of instance: cheetah.
    writel((SION_DISABLED & 0x1) << 4 | (ALT4 & 0x7), IOMUXC_SW_MUX_CTL_PAD_CSI0_DAT7);
    // Pad Control Register:
    // IOMUXC_SW_PAD_CTL_PAD_CSI0_DAT7(0x020E0644)
    //   HYS (16) - Hysteresis Enable Field Reset: HYS_ENABLED
    //              Select one out of next values for pad: CSI0_DAT7.
    //     HYS_DISABLED (0) - Hysteresis Disabled
    //     HYS_ENABLED (1) - Hysteresis Enabled
    //   PUS (15-14) - Pull Up / Down Config. Field Reset: PUS_100KOHM_PU
    //                 Select one out of next values for pad: CSI0_DAT7.
    //     PUS_100KOHM_PD (0) - 100K Ohm Pull Down
    //     PUS_47KOHM_PU (1) - 47K Ohm Pull Up
    //     PUS_100KOHM_PU (2) - 100K Ohm Pull Up
    //     PUS_22KOHM_PU (3) - 22K Ohm Pull Up
    //   PUE (13) - Pull / Keep Select Field Reset: PUE_PULL
    //              Select one out of next values for pad: CSI0_DAT7.
    //     PUE_KEEP (0) - Keeper
    //     PUE_PULL (1) - Pull
    //   PKE (12) - Pull / Keep Enable Field Reset: PKE_ENABLED
    //              Select one out of next values for pad: CSI0_DAT7.
    //     PKE_DISABLED (0) - Pull/Keeper Disabled
    //     PKE_ENABLED (1) - Pull/Keeper Enabled
    //   ODE (11) - Open Drain Enable Field Reset: ODE_DISABLED
    //              Select one out of next values for pad: CSI0_DAT7.
    //     ODE_DISABLED (0) - Open Drain Disabled
    //     ODE_ENABLED (1) - Open Drain Enabled
    //   SPEED (7-6) - Speed Field Reset: SPD_100MHZ
    //                 Select one out of next values for pad: CSI0_DAT7.
    //     SPD_TBD (0) - TBD
    //     SPD_50MHZ (1) - Low(50 MHz)
    //     SPD_100MHZ (2) - Medium(100 MHz)
    //     SPD_200MHZ (3) - Maximum(200 MHz)
    //   DSE (5-3) - Drive Strength Field Reset: DSE_40OHM
    //               Select one out of next values for pad: CSI0_DAT7.
    //     DSE_DISABLED (0) - Output driver disabled.
    //     DSE_240OHM (1) - 240 Ohm
    //     DSE_120OHM (2) - 120 Ohm
    //     DSE_80OHM (3) - 80 Ohm
    //     DSE_60OHM (4) - 60 Ohm
    //     DSE_48OHM (5) - 48 Ohm
    //     DSE_40OHM (6) - 40 Ohm
    //     DSE_34OHM (7) - 34 Ohm
    //   SRE (0) - Slew Rate Field Reset: SRE_SLOW
    //             Select one out of next values for pad: CSI0_DAT7.
    //     SRE_SLOW (0) - Slow Slew Rate
    //     SRE_FAST (1) - Fast Slew Rate
    writel((HYS_ENABLED & 0x1) << 16 | (PUS_100KOHM_PU & 0x3) << 14 | (PUE_PULL & 0x1) << 13 |
           (PKE_ENABLED & 0x1) << 12 | (ODE_DISABLED & 0x1) << 11 | (SPD_100MHZ & 0x3) << 6 |
           (DSE_40OHM & 0x7) << 3 | (SRE_SLOW & 0x1), IOMUXC_SW_PAD_CTL_PAD_CSI0_DAT7);

    // Config audmux.AUD3_TXC to pad CSI0_DAT4(N1)
    // Mux Register:
    // IOMUXC_SW_MUX_CTL_PAD_CSI0_DAT4(0x020E0268)
    //   SION (4) - Software Input On Field Reset: SION_DISABLED
    //              Force the selected mux mode Input path no matter of MUX_MODE functionality.
    //     SION_DISABLED (0) - Input Path is determined by functionality of the selected mux mode (regular).
    //     SION_ENABLED (1) - Force input path of pad CSI0_DAT4.
    //   MUX_MODE (2-0) - MUX Mode Select Field Reset: ALT5
    //                    Select 1 of 8 iomux modes to be used for pad: CSI0_DAT4.
    //     ALT0 (0) - Select mux mode: ALT0 mux port: CSI0_D[4] of instance: ipu1.
    //     ALT1 (1) - Select mux mode: ALT1 mux port: WEIM_D[2] of instance: weim.
    //     ALT2 (2) - Select mux mode: ALT2 mux port: SCLK of instance: ecspi1.
    //                NOTE: - Config Register IOMUXC_ECSPI1_IPP_CSPI_CLK_IN_SELECT_INPUT for mode ALT2.
    //     ALT3 (3) - Select mux mode: ALT3 mux port: COL[5] of instance: kpp.
    //                NOTE: - Config Register IOMUXC_KPP_IPP_IND_COL_5_SELECT_INPUT for mode ALT3.
    //     ALT4 (4) - Select mux mode: ALT4 mux port: AUD3_TXC of instance: audmux.
    //     ALT5 (5) - Select mux mode: ALT5 mux port: GPIO[22] of instance: gpio5.
    //     ALT6 (6) - Select mux mode: ALT6 mux port: MMDC_DEBUG[43] of instance: mmdc.
    //     ALT7 (7) - Select mux mode: ALT7 mux port: TRACE[1] of instance: cheetah.
    writel((SION_DISABLED & 0x1) << 4 | (ALT4 & 0x7), IOMUXC_SW_MUX_CTL_PAD_CSI0_DAT4);
    // Pad Control Register:
    // IOMUXC_SW_PAD_CTL_PAD_CSI0_DAT4(0x020E0638)
    //   HYS (16) - Hysteresis Enable Field Reset: HYS_ENABLED
    //              Select one out of next values for pad: CSI0_DAT4.
    //     HYS_DISABLED (0) - Hysteresis Disabled
    //     HYS_ENABLED (1) - Hysteresis Enabled
    //   PUS (15-14) - Pull Up / Down Config. Field Reset: PUS_100KOHM_PU
    //                 Select one out of next values for pad: CSI0_DAT4.
    //     PUS_100KOHM_PD (0) - 100K Ohm Pull Down
    //     PUS_47KOHM_PU (1) - 47K Ohm Pull Up
    //     PUS_100KOHM_PU (2) - 100K Ohm Pull Up
    //     PUS_22KOHM_PU (3) - 22K Ohm Pull Up
    //   PUE (13) - Pull / Keep Select Field Reset: PUE_PULL
    //              Select one out of next values for pad: CSI0_DAT4.
    //     PUE_KEEP (0) - Keeper
    //     PUE_PULL (1) - Pull
    //   PKE (12) - Pull / Keep Enable Field Reset: PKE_ENABLED
    //              Select one out of next values for pad: CSI0_DAT4.
    //     PKE_DISABLED (0) - Pull/Keeper Disabled
    //     PKE_ENABLED (1) - Pull/Keeper Enabled
    //   ODE (11) - Open Drain Enable Field Reset: ODE_DISABLED
    //              Select one out of next values for pad: CSI0_DAT4.
    //     ODE_DISABLED (0) - Open Drain Disabled
    //     ODE_ENABLED (1) - Open Drain Enabled
    //   SPEED (7-6) - Speed Field Reset: SPD_100MHZ
    //                 Select one out of next values for pad: CSI0_DAT4.
    //     SPD_TBD (0) - TBD
    //     SPD_50MHZ (1) - Low(50 MHz)
    //     SPD_100MHZ (2) - Medium(100 MHz)
    //     SPD_200MHZ (3) - Maximum(200 MHz)
    //   DSE (5-3) - Drive Strength Field Reset: DSE_40OHM
    //               Select one out of next values for pad: CSI0_DAT4.
    //     DSE_DISABLED (0) - Output driver disabled.
    //     DSE_240OHM (1) - 240 Ohm
    //     DSE_120OHM (2) - 120 Ohm
    //     DSE_80OHM (3) - 80 Ohm
    //     DSE_60OHM (4) - 60 Ohm
    //     DSE_48OHM (5) - 48 Ohm
    //     DSE_40OHM (6) - 40 Ohm
    //     DSE_34OHM (7) - 34 Ohm
    //   SRE (0) - Slew Rate Field Reset: SRE_SLOW
    //             Select one out of next values for pad: CSI0_DAT4.
    //     SRE_SLOW (0) - Slow Slew Rate
    //     SRE_FAST (1) - Fast Slew Rate
    writel((HYS_ENABLED & 0x1) << 16 | (PUS_100KOHM_PU & 0x3) << 14 | (PUE_PULL & 0x1) << 13 |
           (PKE_ENABLED & 0x1) << 12 | (ODE_DISABLED & 0x1) << 11 | (SPD_100MHZ & 0x3) << 6 |
           (DSE_40OHM & 0x7) << 3 | (SRE_SLOW & 0x1), IOMUXC_SW_PAD_CTL_PAD_CSI0_DAT4);

    // Config audmux.AUD3_TXD to pad CSI0_DAT5(P2)
    // Mux Register:
    // IOMUXC_SW_MUX_CTL_PAD_CSI0_DAT5(0x020E026C)
    //   SION (4) - Software Input On Field Reset: SION_DISABLED
    //              Force the selected mux mode Input path no matter of MUX_MODE functionality.
    //     SION_DISABLED (0) - Input Path is determined by functionality of the selected mux mode (regular).
    //     SION_ENABLED (1) - Force input path of pad CSI0_DAT5.
    //   MUX_MODE (2-0) - MUX Mode Select Field Reset: ALT5
    //                    Select 1 of 8 iomux modes to be used for pad: CSI0_DAT5.
    //     ALT0 (0) - Select mux mode: ALT0 mux port: CSI0_D[5] of instance: ipu1.
    //     ALT1 (1) - Select mux mode: ALT1 mux port: WEIM_D[3] of instance: weim.
    //     ALT2 (2) - Select mux mode: ALT2 mux port: MOSI of instance: ecspi1.
    //                NOTE: - Config Register IOMUXC_ECSPI1_IPP_IND_MOSI_SELECT_INPUT for mode ALT2.
    //     ALT3 (3) - Select mux mode: ALT3 mux port: ROW[5] of instance: kpp.
    //                NOTE: - Config Register IOMUXC_KPP_IPP_IND_ROW_5_SELECT_INPUT for mode ALT3.
    //     ALT4 (4) - Select mux mode: ALT4 mux port: AUD3_TXD of instance: audmux.
    //     ALT5 (5) - Select mux mode: ALT5 mux port: GPIO[23] of instance: gpio5.
    //     ALT6 (6) - Select mux mode: ALT6 mux port: MMDC_DEBUG[44] of instance: mmdc.
    //     ALT7 (7) - Select mux mode: ALT7 mux port: TRACE[2] of instance: cheetah.
    writel((SION_DISABLED & 0x1) << 4 | (ALT4 & 0x7), IOMUXC_SW_MUX_CTL_PAD_CSI0_DAT5);
    // Pad Control Register:
    // IOMUXC_SW_PAD_CTL_PAD_CSI0_DAT5(0x020E063C)
    //   HYS (16) - Hysteresis Enable Field Reset: HYS_ENABLED
    //              Select one out of next values for pad: CSI0_DAT5.
    //     HYS_DISABLED (0) - Hysteresis Disabled
    //     HYS_ENABLED (1) - Hysteresis Enabled
    //   PUS (15-14) - Pull Up / Down Config. Field Reset: PUS_100KOHM_PU
    //                 Select one out of next values for pad: CSI0_DAT5.
    //     PUS_100KOHM_PD (0) - 100K Ohm Pull Down
    //     PUS_47KOHM_PU (1) - 47K Ohm Pull Up
    //     PUS_100KOHM_PU (2) - 100K Ohm Pull Up
    //     PUS_22KOHM_PU (3) - 22K Ohm Pull Up
    //   PUE (13) - Pull / Keep Select Field Reset: PUE_PULL
    //              Select one out of next values for pad: CSI0_DAT5.
    //     PUE_KEEP (0) - Keeper
    //     PUE_PULL (1) - Pull
    //   PKE (12) - Pull / Keep Enable Field Reset: PKE_ENABLED
    //              Select one out of next values for pad: CSI0_DAT5.
    //     PKE_DISABLED (0) - Pull/Keeper Disabled
    //     PKE_ENABLED (1) - Pull/Keeper Enabled
    //   ODE (11) - Open Drain Enable Field Reset: ODE_DISABLED
    //              Select one out of next values for pad: CSI0_DAT5.
    //     ODE_DISABLED (0) - Open Drain Disabled
    //     ODE_ENABLED (1) - Open Drain Enabled
    //   SPEED (7-6) - Speed Field Reset: SPD_100MHZ
    //                 Select one out of next values for pad: CSI0_DAT5.
    //     SPD_TBD (0) - TBD
    //     SPD_50MHZ (1) - Low(50 MHz)
    //     SPD_100MHZ (2) - Medium(100 MHz)
    //     SPD_200MHZ (3) - Maximum(200 MHz)
    //   DSE (5-3) - Drive Strength Field Reset: DSE_40OHM
    //               Select one out of next values for pad: CSI0_DAT5.
    //     DSE_DISABLED (0) - Output driver disabled.
    //     DSE_240OHM (1) - 240 Ohm
    //     DSE_120OHM (2) - 120 Ohm
    //     DSE_80OHM (3) - 80 Ohm
    //     DSE_60OHM (4) - 60 Ohm
    //     DSE_48OHM (5) - 48 Ohm
    //     DSE_40OHM (6) - 40 Ohm
    //     DSE_34OHM (7) - 34 Ohm
    //   SRE (0) - Slew Rate Field Reset: SRE_SLOW
    //             Select one out of next values for pad: CSI0_DAT5.
    //     SRE_SLOW (0) - Slow Slew Rate
    //     SRE_FAST (1) - Fast Slew Rate
    writel((HYS_ENABLED & 0x1) << 16 | (PUS_100KOHM_PU & 0x3) << 14 | (PUE_PULL & 0x1) << 13 |
           (PKE_ENABLED & 0x1) << 12 | (ODE_DISABLED & 0x1) << 11 | (SPD_100MHZ & 0x3) << 6 |
           (DSE_40OHM & 0x7) << 3 | (SRE_SLOW & 0x1), IOMUXC_SW_PAD_CTL_PAD_CSI0_DAT5);

    // Config audmux.AUD3_TXFS to pad CSI0_DAT6(N4)
    // Mux Register:
    // IOMUXC_SW_MUX_CTL_PAD_CSI0_DAT6(0x020E0270)
    //   SION (4) - Software Input On Field Reset: SION_DISABLED
    //              Force the selected mux mode Input path no matter of MUX_MODE functionality.
    //     SION_DISABLED (0) - Input Path is determined by functionality of the selected mux mode (regular).
    //     SION_ENABLED (1) - Force input path of pad CSI0_DAT6.
    //   MUX_MODE (2-0) - MUX Mode Select Field Reset: ALT5
    //                    Select 1 of 8 iomux modes to be used for pad: CSI0_DAT6.
    //     ALT0 (0) - Select mux mode: ALT0 mux port: CSI0_D[6] of instance: ipu1.
    //     ALT1 (1) - Select mux mode: ALT1 mux port: WEIM_D[4] of instance: weim.
    //     ALT2 (2) - Select mux mode: ALT2 mux port: MISO of instance: ecspi1.
    //                NOTE: - Config Register IOMUXC_ECSPI1_IPP_IND_MISO_SELECT_INPUT for mode ALT2.
    //     ALT3 (3) - Select mux mode: ALT3 mux port: COL[6] of instance: kpp.
    //                NOTE: - Config Register IOMUXC_KPP_IPP_IND_COL_6_SELECT_INPUT for mode ALT3.
    //     ALT4 (4) - Select mux mode: ALT4 mux port: AUD3_TXFS of instance: audmux.
    //     ALT5 (5) - Select mux mode: ALT5 mux port: GPIO[24] of instance: gpio5.
    //     ALT6 (6) - Select mux mode: ALT6 mux port: MMDC_DEBUG[45] of instance: mmdc.
    //     ALT7 (7) - Select mux mode: ALT7 mux port: TRACE[3] of instance: cheetah.
    writel((SION_DISABLED & 0x1) << 4 | (ALT4 & 0x7), IOMUXC_SW_MUX_CTL_PAD_CSI0_DAT6);
    // Pad Control Register:
    // IOMUXC_SW_PAD_CTL_PAD_CSI0_DAT6(0x020E0640)
    //   HYS (16) - Hysteresis Enable Field Reset: HYS_ENABLED
    //              Select one out of next values for pad: CSI0_DAT6.
    //     HYS_DISABLED (0) - Hysteresis Disabled
    //     HYS_ENABLED (1) - Hysteresis Enabled
    //   PUS (15-14) - Pull Up / Down Config. Field Reset: PUS_100KOHM_PU
    //                 Select one out of next values for pad: CSI0_DAT6.
    //     PUS_100KOHM_PD (0) - 100K Ohm Pull Down
    //     PUS_47KOHM_PU (1) - 47K Ohm Pull Up
    //     PUS_100KOHM_PU (2) - 100K Ohm Pull Up
    //     PUS_22KOHM_PU (3) - 22K Ohm Pull Up
    //   PUE (13) - Pull / Keep Select Field Reset: PUE_PULL
    //              Select one out of next values for pad: CSI0_DAT6.
    //     PUE_KEEP (0) - Keeper
    //     PUE_PULL (1) - Pull
    //   PKE (12) - Pull / Keep Enable Field Reset: PKE_ENABLED
    //              Select one out of next values for pad: CSI0_DAT6.
    //     PKE_DISABLED (0) - Pull/Keeper Disabled
    //     PKE_ENABLED (1) - Pull/Keeper Enabled
    //   ODE (11) - Open Drain Enable Field Reset: ODE_DISABLED
    //              Select one out of next values for pad: CSI0_DAT6.
    //     ODE_DISABLED (0) - Open Drain Disabled
    //     ODE_ENABLED (1) - Open Drain Enabled
    //   SPEED (7-6) - Speed Field Reset: SPD_100MHZ
    //                 Select one out of next values for pad: CSI0_DAT6.
    //     SPD_TBD (0) - TBD
    //     SPD_50MHZ (1) - Low(50 MHz)
    //     SPD_100MHZ (2) - Medium(100 MHz)
    //     SPD_200MHZ (3) - Maximum(200 MHz)
    //   DSE (5-3) - Drive Strength Field Reset: DSE_40OHM
    //               Select one out of next values for pad: CSI0_DAT6.
    //     DSE_DISABLED (0) - Output driver disabled.
    //     DSE_240OHM (1) - 240 Ohm
    //     DSE_120OHM (2) - 120 Ohm
    //     DSE_80OHM (3) - 80 Ohm
    //     DSE_60OHM (4) - 60 Ohm
    //     DSE_48OHM (5) - 48 Ohm
    //     DSE_40OHM (6) - 40 Ohm
    //     DSE_34OHM (7) - 34 Ohm
    //   SRE (0) - Slew Rate Field Reset: SRE_SLOW
    //             Select one out of next values for pad: CSI0_DAT6.
    //     SRE_SLOW (0) - Slow Slew Rate
    //     SRE_FAST (1) - Fast Slew Rate
    writel((HYS_ENABLED & 0x1) << 16 | (PUS_100KOHM_PU & 0x3) << 14 | (PUE_PULL & 0x1) << 13 |
           (PKE_ENABLED & 0x1) << 12 | (ODE_DISABLED & 0x1) << 11 | (SPD_100MHZ & 0x3) << 6 |
           (DSE_40OHM & 0x7) << 3 | (SRE_SLOW & 0x1), IOMUXC_SW_PAD_CTL_PAD_CSI0_DAT6);
}