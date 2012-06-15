/*
 * Copyright (C) 2012, Freescale Semiconductor, Inc. All Rights Reserved
 * THIS SOURCE CODE IS CONFIDENTIAL AND PROPRIETARY AND MAY NOT
 * BE USED OR DISTRIBUTED WITHOUT THE WRITTEN PERMISSION OF
 * Freescale Semiconductor, Inc.
 */

#ifndef __HW_MMDC_REGISTERS_H__
#define __HW_MMDC_REGISTERS_H__

#include "regs.h"

/*
 * i.MX6SDL MMDC registers defined in this header file.
 *
 * - HW_MMDC_MDCTL - MMDC Core Control Register
 * - HW_MMDC_MDPDC - MMDC Core Power Down Control Register
 * - HW_MMDC_MDOTC - MMDC Core ODT Timing Control Register
 * - HW_MMDC_MDCFG0 - MMDC Core Timing Configuration Register 0
 * - HW_MMDC_MDCFG1 - MMDC Core Timing Configuration Register 1
 * - HW_MMDC_MDCFG2 - MMDC Core Timing Configuration Register 2
 * - HW_MMDC_MDMISC - MMDC Core Miscellaneous Register
 * - HW_MMDC_MDSCR - MMDC Core Special Command Register
 * - HW_MMDC_MDREF - MMDC Core Refresh Control Register
 * - HW_MMDC_MDRWD - MMDC Core Read/Write Command Delay Register
 * - HW_MMDC_MDOR - MMDC Core Out of Reset Delays Register
 * - HW_MMDC_MDMRR - MMDC Core MRR Data Register
 * - HW_MMDC_MDCFG3LP - MMDC Core Timing Configuration Register 3
 * - HW_MMDC_MDMR4 - MMDC Core MR4 Derating Register
 * - HW_MMDC_MDASP - MMDC Core Address Space Partition Register
 * - HW_MMDC_MAARCR - MMDC Core AXI Reordering Control Regsiter
 * - HW_MMDC_MAPSR - MMDC Core Power Saving Control and Status Register
 * - HW_MMDC_MAEXIDR0 - MMDC Core Exclusive ID Monitor Register0
 * - HW_MMDC_MAEXIDR1 - MMDC Core Exclusive ID Monitor Register1
 * - HW_MMDC_MADPCR0 - MMDC Core Debug and Profiling Control Register 0
 * - HW_MMDC_MADPCR1 - MMDC Core Debug and Profiling Control Register 1
 * - HW_MMDC_MADPSR0 - MMDC Core Debug and Profiling Status Register 0
 * - HW_MMDC_MADPSR1 - MMDC Core Debug and Profiling Status Register 1
 * - HW_MMDC_MADPSR2 - MMDC Core Debug and Profiling Status Register 2
 * - HW_MMDC_MADPSR3 - MMDC Core Debug and Profiling Status Register 3
 * - HW_MMDC_MADPSR4 - MMDC Core Debug and Profiling Status Register 4
 * - HW_MMDC_MADPSR5 - MMDC Core Debug and Profiling Status Register 5
 * - HW_MMDC_MASBS0 - MMDC Core Step By Step Address Register
 * - HW_MMDC_MASBS1 - MMDC Core Step By Step Address Attributes Register
 * - HW_MMDC_MAGENP - MMDC Core General Purpose Register
 * - HW_MMDC_MPZQHWCTRL - MMDC PHY ZQ HW control register
 * - HW_MMDC_MPZQSWCTRL - MMDC PHY ZQ SW control register
 * - HW_MMDC_MPWLGCR - MMDC PHY Write Leveling Configuration and Error Status Register
 * - HW_MMDC_MPWLDECTRL0 - MMDC PHY Write Leveling Delay Control Register 0
 * - HW_MMDC_MPWLDECTRL1 - MMDC PHY Write Leveling Delay Control Register 1
 * - HW_MMDC_MPWLDLST - MMDC PHY Write Leveling delay-line Status Register
 * - HW_MMDC_MPODTCTRL - MMDC PHY ODT control register
 * - HW_MMDC_MPRDDQBY0DL - MMDC PHY Read DQ Byte0 Delay Register
 * - HW_MMDC_MPRDDQBY1DL - MMDC PHY Read DQ Byte1 Delay Register
 * - HW_MMDC_MPRDDQBY2DL - MMDC PHY Read DQ Byte2 Delay Register
 * - HW_MMDC_MPRDDQBY3DL - MMDC PHY Read DQ Byte3 Delay Register
 * - HW_MMDC_MPWRDQBY0DL - MMDC PHY Write DQ Byte0 Delay Register
 * - HW_MMDC_MPWRDQBY1DL - MMDC PHY Write DQ Byte1 Delay Register
 * - HW_MMDC_MPWRDQBY2DL - MMDC PHY Write DQ Byte2 Delay Register
 * - HW_MMDC_MPWRDQBY3DL - MMDC PHY Write DQ Byte3 Delay Register
 * - HW_MMDC_MPDGCTRL0 - MMDC PHY Read DQS Gating Control Register 0
 * - HW_MMDC_MPDGCTRL1 - MMDC PHY Read DQS Gating Control Register 1
 * - HW_MMDC_MPDGDLST0 - MMDC PHY Read DQS Gating delay-line Status Register
 * - HW_MMDC_MPRDDLCTL - MMDC PHY Read delay-lines Configuration Register
 * - HW_MMDC_MPRDDLST - MMDC PHY Read delay-lines Status Register
 * - HW_MMDC_MPWRDLCTL - MMDC PHY Write delay-lines Configuration Register
 * - HW_MMDC_MPWRDLST - MMDC PHY Write delay-lines Status Register
 * - HW_MMDC_MPSDCTRL - MMDC PHY CK Control Register
 * - HW_MMDC_MPZQLP2CTL - MMDC ZQ LPDDR2 HW Control Register
 * - HW_MMDC_MPRDDLHWCTL - MMDC PHY Read Delay HW Calibration Control Register
 * - HW_MMDC_MPWRDLHWCTL - MMDC PHY Write Delay HW Calibration Control Register
 * - HW_MMDC_MPRDDLHWST0 - MMDC PHY Read Delay HW Calibration Status Register 0
 * - HW_MMDC_MPRDDLHWST1 - MMDC PHY Read Delay HW Calibration Status Register 1
 * - HW_MMDC_MPWRDLHWST0 - MMDC PHY Write Delay HW Calibration Status Register 0
 * - HW_MMDC_MPWRDLHWST1 - MMDC PHY Write Delay HW Calibration Status Register 1
 * - HW_MMDC_MPWLHWERR - MMDC PHY Write Leveling HW Error Register
 * - HW_MMDC_MPDGHWST0 - MMDC PHY Read DQS Gating HW Status Register 0
 * - HW_MMDC_MPDGHWST1 - MMDC PHY Read DQS Gating HW Status Register 1
 * - HW_MMDC_MPDGHWST2 - MMDC PHY Read DQS Gating HW Status Register 2
 * - HW_MMDC_MPDGHWST3 - MMDC PHY Read DQS Gating HW Status Register 3
 * - HW_MMDC_MPPDCMPR1 - MMDC PHY Pre-defined Compare Register 1
 * - HW_MMDC_MPPDCMPR2 - MMDC PHY Pre-defined Compare and CA delay-line Configuration Register
 * - HW_MMDC_MPSWDAR0 - MMDC PHY SW Dummy Access Register
 * - HW_MMDC_MPSWDRDR0 - MMDC PHY SW Dummy Read Data Register 0
 * - HW_MMDC_MPSWDRDR1 - MMDC PHY SW Dummy Read Data Register 1
 * - HW_MMDC_MPSWDRDR2 - MMDC PHY SW Dummy Read Data Register 2
 * - HW_MMDC_MPSWDRDR3 - MMDC PHY SW Dummy Read Data Register 3
 * - HW_MMDC_MPSWDRDR4 - MMDC PHY SW Dummy Read Data Register 4
 * - HW_MMDC_MPSWDRDR5 - MMDC PHY SW Dummy Read Data Register 5
 * - HW_MMDC_MPSWDRDR6 - MMDC PHY SW Dummy Read Data Register 6
 * - HW_MMDC_MPSWDRDR7 - MMDC PHY SW Dummy Read Data Register 7
 * - HW_MMDC_MPMUR0 - MMDC PHY Measure Unit Register
 * - HW_MMDC_MPWRCADL - MMDC Write CA delay-line controller
 * - HW_MMDC_MPDCCR - MMDC Duty Cycle Control Register
 *
 * - hw_mmdc_t - Struct containing all module registers.
 */

//! @name Module base addresses
//@{
#ifndef REGS_MMDC_BASE
#define HW_MMDC_INSTANCE_COUNT (0) //!< Number of instances of the MMDC module.
#define REGS_MMDC_BASE (0x00000000) //!< Base address for MMDC.
#endif
//@}


//-------------------------------------------------------------------------------------------
// HW_MMDC_MDCTL - MMDC Core Control Register
//-------------------------------------------------------------------------------------------

#ifndef __LANGUAGE_ASM__
/*!
 * @brief HW_MMDC_MDCTL - MMDC Core Control Register (RW)
 *
 * Reset value: 0x03110000
 *
 * Supported Mode Of Operations:  For Channel 0: All  For Channel 1: LP2_2ch_x16, LP2_2ch_x32
 */
typedef union _hw_mmdc_mdctl
{
    reg32_t U;
    struct _hw_mmdc_mdctl_bitfields
    {
        unsigned RESERVED0 : 16; //!< [15:0] Reserved
        unsigned DSIZ : 2; //!< [17:16] DDR data bus size.
        unsigned RESERVED1 : 1; //!< [18] Reserved
        unsigned BL : 1; //!< [19] Burst Length.
        unsigned COL : 3; //!< [22:20] Column Address Width.
        unsigned RESERVED2 : 1; //!< [23] Reserved
        unsigned ROW : 3; //!< [26:24] Row Address Width.
        unsigned RESERVED3 : 3; //!< [29:27] Reserved
        unsigned SDE_1 : 1; //!< [30] MMDC Enable CS1.
        unsigned SDE_0 : 1; //!< [31] MMDC Enable CS0.
    } B;
} hw_mmdc_mdctl_t;
#endif

/*
 * constants & macros for entire MMDC_MDCTL register
 */
#define HW_MMDC_MDCTL_ADDR      (REGS_MMDC_BASE + 0x0)

#ifndef __LANGUAGE_ASM__
#define HW_MMDC_MDCTL           (*(volatile hw_mmdc_mdctl_t *) HW_MMDC_MDCTL_ADDR)
#define HW_MMDC_MDCTL_RD()      (HW_MMDC_MDCTL.U)
#define HW_MMDC_MDCTL_WR(v)     (HW_MMDC_MDCTL.U = (v))
#define HW_MMDC_MDCTL_SET(v)    (HW_MMDC_MDCTL_WR(HW_MMDC_MDCTL_RD() |  (v)))
#define HW_MMDC_MDCTL_CLR(v)    (HW_MMDC_MDCTL_WR(HW_MMDC_MDCTL_RD() & ~(v)))
#define HW_MMDC_MDCTL_TOG(v)    (HW_MMDC_MDCTL_WR(HW_MMDC_MDCTL_RD() ^  (v)))
#endif

/*
 * constants & macros for individual MMDC_MDCTL bitfields
 */

/* --- Register HW_MMDC_MDCTL, field DSIZ[17:16] (RW)
 *
 * DDR data bus size. This field determines the size of the data bus of the DDR memory
 *
 * Values:
 * 0 - 16-bit data bus
 * 1 - 32-bit data bus
 * 2 - 64-bit data bus
 * 3 - Reserved
 */

#define BP_MMDC_MDCTL_DSIZ      (16)      //!< Bit position for MMDC_MDCTL_DSIZ.
#define BM_MMDC_MDCTL_DSIZ      (0x00030000)  //!< Bit mask for MMDC_MDCTL_DSIZ.

//! @brief Get value of MMDC_MDCTL_DSIZ from a register value.
#define BG_MMDC_MDCTL_DSIZ(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_MMDC_MDCTL_DSIZ) >> BP_MMDC_MDCTL_DSIZ)

//! @brief Format value for bitfield MMDC_MDCTL_DSIZ.
#define BF_MMDC_MDCTL_DSIZ(v)   ((__REG_VALUE_TYPE((v), reg32_t) << BP_MMDC_MDCTL_DSIZ) & BM_MMDC_MDCTL_DSIZ)

#ifndef __LANGUAGE_ASM__
//! @brief Set the DSIZ field to a new value.
#define BW_MMDC_MDCTL_DSIZ(v)   (HW_MMDC_MDCTL_WR((HW_MMDC_MDCTL_RD() & ~BM_MMDC_MDCTL_DSIZ) | BF_MMDC_MDCTL_DSIZ(v)))
#endif


/* --- Register HW_MMDC_MDCTL, field BL[19] (RW)
 *
 * Burst Length. This field determines the burst length of the DDR device. In DDR2/ LPDDR2 mode the
 * MMDC supports burst length 4. In DDR3 mode the MMDC supports burst length 8.
 *
 * Values:
 * 0 - Burst Length 4 is used
 * 1 - Burst Length 8 is used
 */

#define BP_MMDC_MDCTL_BL      (19)      //!< Bit position for MMDC_MDCTL_BL.
#define BM_MMDC_MDCTL_BL      (0x00080000)  //!< Bit mask for MMDC_MDCTL_BL.

//! @brief Get value of MMDC_MDCTL_BL from a register value.
#define BG_MMDC_MDCTL_BL(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_MMDC_MDCTL_BL) >> BP_MMDC_MDCTL_BL)

//! @brief Format value for bitfield MMDC_MDCTL_BL.
#define BF_MMDC_MDCTL_BL(v)   ((__REG_VALUE_TYPE((v), reg32_t) << BP_MMDC_MDCTL_BL) & BM_MMDC_MDCTL_BL)

#ifndef __LANGUAGE_ASM__
//! @brief Set the BL field to a new value.
#define BW_MMDC_MDCTL_BL(v)   (HW_MMDC_MDCTL_WR((HW_MMDC_MDCTL_RD() & ~BM_MMDC_MDCTL_BL) | BF_MMDC_MDCTL_BL(v)))
#endif


/* --- Register HW_MMDC_MDCTL, field COL[22:20] (RW)
 *
 * Column Address Width. This field specifies the number of column addresses used by the memory
 * array. It will determine how an incoming address will be decoded.
 *
 * Values:
 * 0x0 - 9 bits column
 * 0x1 - 10 bits column
 * 0x2 - 11 bits column
 * 0x3 - 8 bits column
 * 0x4 - 12 bits column
 * 0x5-0xF - Reserved
 */

#define BP_MMDC_MDCTL_COL      (20)      //!< Bit position for MMDC_MDCTL_COL.
#define BM_MMDC_MDCTL_COL      (0x00700000)  //!< Bit mask for MMDC_MDCTL_COL.

//! @brief Get value of MMDC_MDCTL_COL from a register value.
#define BG_MMDC_MDCTL_COL(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_MMDC_MDCTL_COL) >> BP_MMDC_MDCTL_COL)

//! @brief Format value for bitfield MMDC_MDCTL_COL.
#define BF_MMDC_MDCTL_COL(v)   ((__REG_VALUE_TYPE((v), reg32_t) << BP_MMDC_MDCTL_COL) & BM_MMDC_MDCTL_COL)

#ifndef __LANGUAGE_ASM__
//! @brief Set the COL field to a new value.
#define BW_MMDC_MDCTL_COL(v)   (HW_MMDC_MDCTL_WR((HW_MMDC_MDCTL_RD() & ~BM_MMDC_MDCTL_COL) | BF_MMDC_MDCTL_COL(v)))
#endif


/* --- Register HW_MMDC_MDCTL, field ROW[26:24] (RW)
 *
 * Row Address Width. This field specifies the number of row addresses used by the memory array. It
 * will affect the way an incoming address will be decoded. Settings 110-111 are reserved
 *
 * Values:
 * 000 - 11 bits Row
 * 001 - 12 bits Row
 * 010 - 13 bits Row
 * 011 - 14 bits Row
 * 100 - 15 bits Row
 * 101 - 16 bits Row
 */

#define BP_MMDC_MDCTL_ROW      (24)      //!< Bit position for MMDC_MDCTL_ROW.
#define BM_MMDC_MDCTL_ROW      (0x07000000)  //!< Bit mask for MMDC_MDCTL_ROW.

//! @brief Get value of MMDC_MDCTL_ROW from a register value.
#define BG_MMDC_MDCTL_ROW(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_MMDC_MDCTL_ROW) >> BP_MMDC_MDCTL_ROW)

//! @brief Format value for bitfield MMDC_MDCTL_ROW.
#define BF_MMDC_MDCTL_ROW(v)   ((__REG_VALUE_TYPE((v), reg32_t) << BP_MMDC_MDCTL_ROW) & BM_MMDC_MDCTL_ROW)

#ifndef __LANGUAGE_ASM__
//! @brief Set the ROW field to a new value.
#define BW_MMDC_MDCTL_ROW(v)   (HW_MMDC_MDCTL_WR((HW_MMDC_MDCTL_RD() & ~BM_MMDC_MDCTL_ROW) | BF_MMDC_MDCTL_ROW(v)))
#endif


/* --- Register HW_MMDC_MDCTL, field SDE_1[30] (RW)
 *
 * MMDC Enable CS1. This bit enables/disables accesses from the MMDC toward Chip Select 1. The reset
 * value of this bit is "0" (i.e No clocks and clock enable will be driven to the memory). At the
 * enabling point the MMDC will perform an initialization process (including a delay on RESET and/or
 * CKE) for both chip selects. The initialization length depends on the configured memory type.
 *
 * Values:
 * 0 - Disabled
 * 1 - Enabled
 */

#define BP_MMDC_MDCTL_SDE_1      (30)      //!< Bit position for MMDC_MDCTL_SDE_1.
#define BM_MMDC_MDCTL_SDE_1      (0x40000000)  //!< Bit mask for MMDC_MDCTL_SDE_1.

//! @brief Get value of MMDC_MDCTL_SDE_1 from a register value.
#define BG_MMDC_MDCTL_SDE_1(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_MMDC_MDCTL_SDE_1) >> BP_MMDC_MDCTL_SDE_1)

//! @brief Format value for bitfield MMDC_MDCTL_SDE_1.
#define BF_MMDC_MDCTL_SDE_1(v)   ((__REG_VALUE_TYPE((v), reg32_t) << BP_MMDC_MDCTL_SDE_1) & BM_MMDC_MDCTL_SDE_1)

#ifndef __LANGUAGE_ASM__
//! @brief Set the SDE_1 field to a new value.
#define BW_MMDC_MDCTL_SDE_1(v)   (HW_MMDC_MDCTL_WR((HW_MMDC_MDCTL_RD() & ~BM_MMDC_MDCTL_SDE_1) | BF_MMDC_MDCTL_SDE_1(v)))
#endif


/* --- Register HW_MMDC_MDCTL, field SDE_0[31] (RW)
 *
 * MMDC Enable CS0. This bit enables/disables accesses from the MMDC toward Chip Select 0. The reset
 * value of this bit is "0" (i.e No clocks and clock enable will be driven to the memory). At the
 * enabling point the MMDC will perform an initialization process (including a delay on RESET and/or
 * CKE) for both chip selects. The initialization length depends on the configured memory type.
 *
 * Values:
 * 0 - Disabled
 * 1 - Enabled
 */

#define BP_MMDC_MDCTL_SDE_0      (31)      //!< Bit position for MMDC_MDCTL_SDE_0.
#define BM_MMDC_MDCTL_SDE_0      (0x80000000)  //!< Bit mask for MMDC_MDCTL_SDE_0.

//! @brief Get value of MMDC_MDCTL_SDE_0 from a register value.
#define BG_MMDC_MDCTL_SDE_0(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_MMDC_MDCTL_SDE_0) >> BP_MMDC_MDCTL_SDE_0)

//! @brief Format value for bitfield MMDC_MDCTL_SDE_0.
#define BF_MMDC_MDCTL_SDE_0(v)   ((__REG_VALUE_TYPE((v), reg32_t) << BP_MMDC_MDCTL_SDE_0) & BM_MMDC_MDCTL_SDE_0)

#ifndef __LANGUAGE_ASM__
//! @brief Set the SDE_0 field to a new value.
#define BW_MMDC_MDCTL_SDE_0(v)   (HW_MMDC_MDCTL_WR((HW_MMDC_MDCTL_RD() & ~BM_MMDC_MDCTL_SDE_0) | BF_MMDC_MDCTL_SDE_0(v)))
#endif


//-------------------------------------------------------------------------------------------
// HW_MMDC_MDPDC - MMDC Core Power Down Control Register
//-------------------------------------------------------------------------------------------

#ifndef __LANGUAGE_ASM__
/*!
 * @brief HW_MMDC_MDPDC - MMDC Core Power Down Control Register (RW)
 *
 * Reset value: 0x00030012
 *
 * Supported Mode Of Operations:  For Channel 0: All  For Channel 1: LP2_2ch_x16, LP2_2ch_x32   PRCT
 * field encoding        PRCT[2:0]    Precharge Timer        000    Disabled (Bit field reset value)
 * 001    2 clocks      010    4 clocks      011    8 clocks      100    16 clocks      101    32
 * clocks      110    64 clocks      111    128 clocks         PWDT field encoding        PWDT[3:0]
 * Power Down Time-out        0000    Disabled (bit field reset value)      0001    16 cycles
 * 0010    32 cycles      0011    64 cycles      0100    128 cycles      0101    256 cycles
 * 0110    512 cycles      0111    1024 cycles      1000    2048 cycles      1001    4096 cycles
 * 1010    8196 cycles      1011    16384 cycles      1100    32768 cycles      1101-1111
 * Reserved
 */
typedef union _hw_mmdc_mdpdc
{
    reg32_t U;
    struct _hw_mmdc_mdpdc_bitfields
    {
        unsigned TCKSRE : 3; //!< [2:0] Valid clock cycles after self-refresh entry.
        unsigned TCKSRX : 3; //!< [5:3] Valid clock cycles before self-refresh exit.
        unsigned BOTH_CS_PD : 1; //!< [6] Parallel power down entry to both chip selects.
        unsigned SLOW_PD : 1; //!< [7] Slow/fast power down.
        unsigned PWDT_0 : 4; //!< [11:8] Power Down Timer - Chip Select 0.
        unsigned PWDT_1 : 4; //!< [15:12] Power Down Timer - Chip Select 1.
        unsigned TCKE : 3; //!< [18:16] CKE minimum pulse width.
        unsigned RESERVED0 : 5; //!< [23:19] Reserved
        unsigned PRCT_0 : 3; //!< [26:24] Precharge Timer - Chip Select 0.
        unsigned RESERVED1 : 1; //!< [27] Reserved
        unsigned PRCT_1 : 3; //!< [30:28] Precharge Timer - Chip Select 1.
        unsigned RESERVED2 : 1; //!< [31] Reserved
    } B;
} hw_mmdc_mdpdc_t;
#endif

/*
 * constants & macros for entire MMDC_MDPDC register
 */
#define HW_MMDC_MDPDC_ADDR      (REGS_MMDC_BASE + 0x4)

#ifndef __LANGUAGE_ASM__
#define HW_MMDC_MDPDC           (*(volatile hw_mmdc_mdpdc_t *) HW_MMDC_MDPDC_ADDR)
#define HW_MMDC_MDPDC_RD()      (HW_MMDC_MDPDC.U)
#define HW_MMDC_MDPDC_WR(v)     (HW_MMDC_MDPDC.U = (v))
#define HW_MMDC_MDPDC_SET(v)    (HW_MMDC_MDPDC_WR(HW_MMDC_MDPDC_RD() |  (v)))
#define HW_MMDC_MDPDC_CLR(v)    (HW_MMDC_MDPDC_WR(HW_MMDC_MDPDC_RD() & ~(v)))
#define HW_MMDC_MDPDC_TOG(v)    (HW_MMDC_MDPDC_WR(HW_MMDC_MDPDC_RD() ^  (v)))
#endif

/*
 * constants & macros for individual MMDC_MDPDC bitfields
 */

/* --- Register HW_MMDC_MDPDC, field TCKSRE[2:0] (RW)
 *
 * Valid clock cycles after self-refresh entry. This field determines the amount of clock cycles
 * after self-refresh entry
 *
 * Values:
 * 0x0 - 0 cycle
 * 0x1 - 1 cycles
 * 0x6 - 6cycles
 * 0x7 - 7cycles
 */

#define BP_MMDC_MDPDC_TCKSRE      (0)      //!< Bit position for MMDC_MDPDC_TCKSRE.
#define BM_MMDC_MDPDC_TCKSRE      (0x00000007)  //!< Bit mask for MMDC_MDPDC_TCKSRE.

//! @brief Get value of MMDC_MDPDC_TCKSRE from a register value.
#define BG_MMDC_MDPDC_TCKSRE(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_MMDC_MDPDC_TCKSRE) >> BP_MMDC_MDPDC_TCKSRE)

//! @brief Format value for bitfield MMDC_MDPDC_TCKSRE.
#define BF_MMDC_MDPDC_TCKSRE(v)   ((__REG_VALUE_TYPE((v), reg32_t) << BP_MMDC_MDPDC_TCKSRE) & BM_MMDC_MDPDC_TCKSRE)

#ifndef __LANGUAGE_ASM__
//! @brief Set the TCKSRE field to a new value.
#define BW_MMDC_MDPDC_TCKSRE(v)   (HW_MMDC_MDPDC_WR((HW_MMDC_MDPDC_RD() & ~BM_MMDC_MDPDC_TCKSRE) | BF_MMDC_MDPDC_TCKSRE(v)))
#endif


/* --- Register HW_MMDC_MDPDC, field TCKSRX[5:3] (RW)
 *
 * Valid clock cycles before self-refresh exit. This field determines the amount of clock cycles
 * before self-refresh exit
 *
 * Values:
 * 0x0 - 0 cycle
 * 0x1 - 1 cycles
 * 0x6 - 6 cycles
 * 0x7 - 7 cycles
 */

#define BP_MMDC_MDPDC_TCKSRX      (3)      //!< Bit position for MMDC_MDPDC_TCKSRX.
#define BM_MMDC_MDPDC_TCKSRX      (0x00000038)  //!< Bit mask for MMDC_MDPDC_TCKSRX.

//! @brief Get value of MMDC_MDPDC_TCKSRX from a register value.
#define BG_MMDC_MDPDC_TCKSRX(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_MMDC_MDPDC_TCKSRX) >> BP_MMDC_MDPDC_TCKSRX)

//! @brief Format value for bitfield MMDC_MDPDC_TCKSRX.
#define BF_MMDC_MDPDC_TCKSRX(v)   ((__REG_VALUE_TYPE((v), reg32_t) << BP_MMDC_MDPDC_TCKSRX) & BM_MMDC_MDPDC_TCKSRX)

#ifndef __LANGUAGE_ASM__
//! @brief Set the TCKSRX field to a new value.
#define BW_MMDC_MDPDC_TCKSRX(v)   (HW_MMDC_MDPDC_WR((HW_MMDC_MDPDC_RD() & ~BM_MMDC_MDPDC_TCKSRX) | BF_MMDC_MDPDC_TCKSRX(v)))
#endif


/* --- Register HW_MMDC_MDPDC, field BOTH_CS_PD[6] (RW)
 *
 * Parallel power down entry to both chip selects. When power down timer is used for both chip-
 * selects (i.e PWDT_0 and PWDT1 don't equal "0") , then if this bit is enabled, the MMDC will enter
 * power down only if the amount of idle cycles of both chip selects was obtained.
 *
 * Values:
 * 0 - Each chip select can enter power down independently according to its configuration.
 * 1 - Chip selects can enter power down only if the amount of idle cycles of both chip selects was
 *     obtained.
 */

#define BP_MMDC_MDPDC_BOTH_CS_PD      (6)      //!< Bit position for MMDC_MDPDC_BOTH_CS_PD.
#define BM_MMDC_MDPDC_BOTH_CS_PD      (0x00000040)  //!< Bit mask for MMDC_MDPDC_BOTH_CS_PD.

//! @brief Get value of MMDC_MDPDC_BOTH_CS_PD from a register value.
#define BG_MMDC_MDPDC_BOTH_CS_PD(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_MMDC_MDPDC_BOTH_CS_PD) >> BP_MMDC_MDPDC_BOTH_CS_PD)

//! @brief Format value for bitfield MMDC_MDPDC_BOTH_CS_PD.
#define BF_MMDC_MDPDC_BOTH_CS_PD(v)   ((__REG_VALUE_TYPE((v), reg32_t) << BP_MMDC_MDPDC_BOTH_CS_PD) & BM_MMDC_MDPDC_BOTH_CS_PD)

#ifndef __LANGUAGE_ASM__
//! @brief Set the BOTH_CS_PD field to a new value.
#define BW_MMDC_MDPDC_BOTH_CS_PD(v)   (HW_MMDC_MDPDC_WR((HW_MMDC_MDPDC_RD() & ~BM_MMDC_MDPDC_BOTH_CS_PD) | BF_MMDC_MDPDC_BOTH_CS_PD(v)))
#endif


/* --- Register HW_MMDC_MDPDC, field SLOW_PD[7] (RW)
 *
 * Slow/fast power down. In DDR3 mode this field is referred to slow precharge power-down. In DDR2
 * mode this field is referred to slow active power-down. In LPDDR2 mode this field is not relevant.
 * Memory should be configured the same.
 *
 * Values:
 * 0 - Fast mode.
 * 1 - Slow mode.
 */

#define BP_MMDC_MDPDC_SLOW_PD      (7)      //!< Bit position for MMDC_MDPDC_SLOW_PD.
#define BM_MMDC_MDPDC_SLOW_PD      (0x00000080)  //!< Bit mask for MMDC_MDPDC_SLOW_PD.

//! @brief Get value of MMDC_MDPDC_SLOW_PD from a register value.
#define BG_MMDC_MDPDC_SLOW_PD(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_MMDC_MDPDC_SLOW_PD) >> BP_MMDC_MDPDC_SLOW_PD)

//! @brief Format value for bitfield MMDC_MDPDC_SLOW_PD.
#define BF_MMDC_MDPDC_SLOW_PD(v)   ((__REG_VALUE_TYPE((v), reg32_t) << BP_MMDC_MDPDC_SLOW_PD) & BM_MMDC_MDPDC_SLOW_PD)

#ifndef __LANGUAGE_ASM__
//! @brief Set the SLOW_PD field to a new value.
#define BW_MMDC_MDPDC_SLOW_PD(v)   (HW_MMDC_MDPDC_WR((HW_MMDC_MDPDC_RD() & ~BM_MMDC_MDPDC_SLOW_PD) | BF_MMDC_MDPDC_SLOW_PD(v)))
#endif


/* --- Register HW_MMDC_MDPDC, field PWDT_0[11:8] (RW)
 *
 * Power Down Timer - Chip Select 0. This field determines the amount of idle cycle for which chip
 * select 0 will be automatically get into precharge/active power down. The amount of cycles are
 * determined according to the PWDT Field Encoding table above.
 */

#define BP_MMDC_MDPDC_PWDT_0      (8)      //!< Bit position for MMDC_MDPDC_PWDT_0.
#define BM_MMDC_MDPDC_PWDT_0      (0x00000f00)  //!< Bit mask for MMDC_MDPDC_PWDT_0.

//! @brief Get value of MMDC_MDPDC_PWDT_0 from a register value.
#define BG_MMDC_MDPDC_PWDT_0(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_MMDC_MDPDC_PWDT_0) >> BP_MMDC_MDPDC_PWDT_0)

//! @brief Format value for bitfield MMDC_MDPDC_PWDT_0.
#define BF_MMDC_MDPDC_PWDT_0(v)   ((__REG_VALUE_TYPE((v), reg32_t) << BP_MMDC_MDPDC_PWDT_0) & BM_MMDC_MDPDC_PWDT_0)

#ifndef __LANGUAGE_ASM__
//! @brief Set the PWDT_0 field to a new value.
#define BW_MMDC_MDPDC_PWDT_0(v)   (HW_MMDC_MDPDC_WR((HW_MMDC_MDPDC_RD() & ~BM_MMDC_MDPDC_PWDT_0) | BF_MMDC_MDPDC_PWDT_0(v)))
#endif

/* --- Register HW_MMDC_MDPDC, field PWDT_1[15:12] (RW)
 *
 * Power Down Timer - Chip Select 1. This field determines the amount of idle cycle for which chip
 * select 1 will be automatically get into precharge/active power down. The amount of cycles are
 * determined according to the PWDT Field Encoding table above.
 */

#define BP_MMDC_MDPDC_PWDT_1      (12)      //!< Bit position for MMDC_MDPDC_PWDT_1.
#define BM_MMDC_MDPDC_PWDT_1      (0x0000f000)  //!< Bit mask for MMDC_MDPDC_PWDT_1.

//! @brief Get value of MMDC_MDPDC_PWDT_1 from a register value.
#define BG_MMDC_MDPDC_PWDT_1(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_MMDC_MDPDC_PWDT_1) >> BP_MMDC_MDPDC_PWDT_1)

//! @brief Format value for bitfield MMDC_MDPDC_PWDT_1.
#define BF_MMDC_MDPDC_PWDT_1(v)   ((__REG_VALUE_TYPE((v), reg32_t) << BP_MMDC_MDPDC_PWDT_1) & BM_MMDC_MDPDC_PWDT_1)

#ifndef __LANGUAGE_ASM__
//! @brief Set the PWDT_1 field to a new value.
#define BW_MMDC_MDPDC_PWDT_1(v)   (HW_MMDC_MDPDC_WR((HW_MMDC_MDPDC_RD() & ~BM_MMDC_MDPDC_PWDT_1) | BF_MMDC_MDPDC_PWDT_1(v)))
#endif

/* --- Register HW_MMDC_MDPDC, field TCKE[18:16] (RW)
 *
 * CKE minimum pulse width. This field determines the minimum pulse width of CKE.
 *
 * Values:
 * 0x0 - 1 cycle
 * 0x1 - 2 cycles
 * 0x6 - 7 cycles
 * 0x7 - 8 cycles
 */

#define BP_MMDC_MDPDC_TCKE      (16)      //!< Bit position for MMDC_MDPDC_TCKE.
#define BM_MMDC_MDPDC_TCKE      (0x00070000)  //!< Bit mask for MMDC_MDPDC_TCKE.

//! @brief Get value of MMDC_MDPDC_TCKE from a register value.
#define BG_MMDC_MDPDC_TCKE(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_MMDC_MDPDC_TCKE) >> BP_MMDC_MDPDC_TCKE)

//! @brief Format value for bitfield MMDC_MDPDC_TCKE.
#define BF_MMDC_MDPDC_TCKE(v)   ((__REG_VALUE_TYPE((v), reg32_t) << BP_MMDC_MDPDC_TCKE) & BM_MMDC_MDPDC_TCKE)

#ifndef __LANGUAGE_ASM__
//! @brief Set the TCKE field to a new value.
#define BW_MMDC_MDPDC_TCKE(v)   (HW_MMDC_MDPDC_WR((HW_MMDC_MDPDC_RD() & ~BM_MMDC_MDPDC_TCKE) | BF_MMDC_MDPDC_TCKE(v)))
#endif


/* --- Register HW_MMDC_MDPDC, field PRCT_0[26:24] (RW)
 *
 * Precharge Timer - Chip Select 0. This field determines the amount of idle cycle for which chip
 * select 0 will be automatically precharged. The amount of cycles are determined according to the
 * table below.
 */

#define BP_MMDC_MDPDC_PRCT_0      (24)      //!< Bit position for MMDC_MDPDC_PRCT_0.
#define BM_MMDC_MDPDC_PRCT_0      (0x07000000)  //!< Bit mask for MMDC_MDPDC_PRCT_0.

//! @brief Get value of MMDC_MDPDC_PRCT_0 from a register value.
#define BG_MMDC_MDPDC_PRCT_0(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_MMDC_MDPDC_PRCT_0) >> BP_MMDC_MDPDC_PRCT_0)

//! @brief Format value for bitfield MMDC_MDPDC_PRCT_0.
#define BF_MMDC_MDPDC_PRCT_0(v)   ((__REG_VALUE_TYPE((v), reg32_t) << BP_MMDC_MDPDC_PRCT_0) & BM_MMDC_MDPDC_PRCT_0)

#ifndef __LANGUAGE_ASM__
//! @brief Set the PRCT_0 field to a new value.
#define BW_MMDC_MDPDC_PRCT_0(v)   (HW_MMDC_MDPDC_WR((HW_MMDC_MDPDC_RD() & ~BM_MMDC_MDPDC_PRCT_0) | BF_MMDC_MDPDC_PRCT_0(v)))
#endif

/* --- Register HW_MMDC_MDPDC, field PRCT_1[30:28] (RW)
 *
 * Precharge Timer - Chip Select 1. This field determines the amount of idle cycle for which chip
 * select 1 will be automatically precharged. The amount of cycles are determined according to the
 * PRCT Field Encoding table above.
 */

#define BP_MMDC_MDPDC_PRCT_1      (28)      //!< Bit position for MMDC_MDPDC_PRCT_1.
#define BM_MMDC_MDPDC_PRCT_1      (0x70000000)  //!< Bit mask for MMDC_MDPDC_PRCT_1.

//! @brief Get value of MMDC_MDPDC_PRCT_1 from a register value.
#define BG_MMDC_MDPDC_PRCT_1(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_MMDC_MDPDC_PRCT_1) >> BP_MMDC_MDPDC_PRCT_1)

//! @brief Format value for bitfield MMDC_MDPDC_PRCT_1.
#define BF_MMDC_MDPDC_PRCT_1(v)   ((__REG_VALUE_TYPE((v), reg32_t) << BP_MMDC_MDPDC_PRCT_1) & BM_MMDC_MDPDC_PRCT_1)

#ifndef __LANGUAGE_ASM__
//! @brief Set the PRCT_1 field to a new value.
#define BW_MMDC_MDPDC_PRCT_1(v)   (HW_MMDC_MDPDC_WR((HW_MMDC_MDPDC_RD() & ~BM_MMDC_MDPDC_PRCT_1) | BF_MMDC_MDPDC_PRCT_1(v)))
#endif

//-------------------------------------------------------------------------------------------
// HW_MMDC_MDOTC - MMDC Core ODT Timing Control Register
//-------------------------------------------------------------------------------------------

#ifndef __LANGUAGE_ASM__
/*!
 * @brief HW_MMDC_MDOTC - MMDC Core ODT Timing Control Register (RW)
 *
 * Reset value: 0x12272000
 *
 * Supported Mode Of Operations:  For Channel 0: All  For Channel 1: LP2_2ch_x16, LP2_2ch_x32  For
 * further information see .
 */
typedef union _hw_mmdc_mdotc
{
    reg32_t U;
    struct _hw_mmdc_mdotc_bitfields
    {
        unsigned RESERVED0 : 4; //!< [3:0] Reserved
        unsigned TODT_IDLE_OFF : 5; //!< [8:4] ODT turn off latency.
        unsigned RESERVED1 : 3; //!< [11:9] Reserved
        unsigned TODTLON : 3; //!< [14:12] ODT turn on latency.
        unsigned RESERVED2 : 1; //!< [15] Reserved
        unsigned TAXPD : 4; //!< [19:16] Asynchronous ODT to power down exit delay.
        unsigned TANPD : 4; //!< [23:20] Asynchronous ODT to power down entry delay.
        unsigned TAONPD : 3; //!< [26:24] Asynchronous RTT turn-on delay (power down with DLL frozen).
        unsigned TAOFPD : 3; //!< [29:27] Asynchronous RTT turn-off delay (power down with DLL frozen).
        unsigned RESERVED3 : 2; //!< [31:30] Reserved
    } B;
} hw_mmdc_mdotc_t;
#endif

/*
 * constants & macros for entire MMDC_MDOTC register
 */
#define HW_MMDC_MDOTC_ADDR      (REGS_MMDC_BASE + 0x8)

#ifndef __LANGUAGE_ASM__
#define HW_MMDC_MDOTC           (*(volatile hw_mmdc_mdotc_t *) HW_MMDC_MDOTC_ADDR)
#define HW_MMDC_MDOTC_RD()      (HW_MMDC_MDOTC.U)
#define HW_MMDC_MDOTC_WR(v)     (HW_MMDC_MDOTC.U = (v))
#define HW_MMDC_MDOTC_SET(v)    (HW_MMDC_MDOTC_WR(HW_MMDC_MDOTC_RD() |  (v)))
#define HW_MMDC_MDOTC_CLR(v)    (HW_MMDC_MDOTC_WR(HW_MMDC_MDOTC_RD() & ~(v)))
#define HW_MMDC_MDOTC_TOG(v)    (HW_MMDC_MDOTC_WR(HW_MMDC_MDOTC_RD() ^  (v)))
#endif

/*
 * constants & macros for individual MMDC_MDOTC bitfields
 */

/* --- Register HW_MMDC_MDOTC, field TODT_IDLE_OFF[8:4] (RW)
 *
 * ODT turn off latency. This field determines the Idle period before turning memory ODT off. This
 * field is not relevant in LPDDR2 mode.
 *
 * Values:
 * 0x0 - 0 cycle (turned off at the earliest possible time)
 * 0x1 - 1 cycle
 * 0x2 - 2 cycles
 * 0x1E - 30 cycles
 * 0x1F - 31 cycles
 */

#define BP_MMDC_MDOTC_TODT_IDLE_OFF      (4)      //!< Bit position for MMDC_MDOTC_TODT_IDLE_OFF.
#define BM_MMDC_MDOTC_TODT_IDLE_OFF      (0x000001f0)  //!< Bit mask for MMDC_MDOTC_TODT_IDLE_OFF.

//! @brief Get value of MMDC_MDOTC_TODT_IDLE_OFF from a register value.
#define BG_MMDC_MDOTC_TODT_IDLE_OFF(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_MMDC_MDOTC_TODT_IDLE_OFF) >> BP_MMDC_MDOTC_TODT_IDLE_OFF)

//! @brief Format value for bitfield MMDC_MDOTC_TODT_IDLE_OFF.
#define BF_MMDC_MDOTC_TODT_IDLE_OFF(v)   ((__REG_VALUE_TYPE((v), reg32_t) << BP_MMDC_MDOTC_TODT_IDLE_OFF) & BM_MMDC_MDOTC_TODT_IDLE_OFF)

#ifndef __LANGUAGE_ASM__
//! @brief Set the TODT_IDLE_OFF field to a new value.
#define BW_MMDC_MDOTC_TODT_IDLE_OFF(v)   (HW_MMDC_MDOTC_WR((HW_MMDC_MDOTC_RD() & ~BM_MMDC_MDOTC_TODT_IDLE_OFF) | BF_MMDC_MDOTC_TODT_IDLE_OFF(v)))
#endif


/* --- Register HW_MMDC_MDOTC, field TODTLON[14:12] (RW)
 *
 * ODT turn on latency. This field determines the delay between ODT signal and the associated RTT,
 * where according to JEDEC standard it equals WL(write latency) - 2. Therefore, the value that is
 * configured to tODTLon field should correspond the value that is configured to MDCGFG1[tCWL] In
 * DDR2 this field is called 'tAOND' In LPDDR2 this field is not relevant.
 *
 * Values:
 * 0x0 - - 0x1 Reserved
 * 0x2 - 2 cycles
 * 0x3 - 3 cycles
 * 0x4 - 4 cycles
 * 0x5 - 5 cycles
 * 0x6 - 6 cycles
 * 0x7 - Reserved
 */

#define BP_MMDC_MDOTC_TODTLON      (12)      //!< Bit position for MMDC_MDOTC_TODTLON.
#define BM_MMDC_MDOTC_TODTLON      (0x00007000)  //!< Bit mask for MMDC_MDOTC_TODTLON.

//! @brief Get value of MMDC_MDOTC_TODTLON from a register value.
#define BG_MMDC_MDOTC_TODTLON(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_MMDC_MDOTC_TODTLON) >> BP_MMDC_MDOTC_TODTLON)

//! @brief Format value for bitfield MMDC_MDOTC_TODTLON.
#define BF_MMDC_MDOTC_TODTLON(v)   ((__REG_VALUE_TYPE((v), reg32_t) << BP_MMDC_MDOTC_TODTLON) & BM_MMDC_MDOTC_TODTLON)

#ifndef __LANGUAGE_ASM__
//! @brief Set the TODTLON field to a new value.
#define BW_MMDC_MDOTC_TODTLON(v)   (HW_MMDC_MDOTC_WR((HW_MMDC_MDOTC_RD() & ~BM_MMDC_MDOTC_TODTLON) | BF_MMDC_MDOTC_TODTLON(v)))
#endif


/* --- Register HW_MMDC_MDOTC, field TAXPD[19:16] (RW)
 *
 * Asynchronous ODT to power down exit delay. In DDR3 should be set to tCWL-1 In DDR2 mode this
 * field is referred to ODT power down exit latency. This field is not relevant in LPDDR2 mode.
 *
 * Values:
 * 0x0 - 1 clock
 * 0x1 - 2 clocks
 * 0x2 - 3 clocks
 * 0xE - 15 clocks
 * 0xF - 16 clocks
 */

#define BP_MMDC_MDOTC_TAXPD      (16)      //!< Bit position for MMDC_MDOTC_TAXPD.
#define BM_MMDC_MDOTC_TAXPD      (0x000f0000)  //!< Bit mask for MMDC_MDOTC_TAXPD.

//! @brief Get value of MMDC_MDOTC_TAXPD from a register value.
#define BG_MMDC_MDOTC_TAXPD(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_MMDC_MDOTC_TAXPD) >> BP_MMDC_MDOTC_TAXPD)

//! @brief Format value for bitfield MMDC_MDOTC_TAXPD.
#define BF_MMDC_MDOTC_TAXPD(v)   ((__REG_VALUE_TYPE((v), reg32_t) << BP_MMDC_MDOTC_TAXPD) & BM_MMDC_MDOTC_TAXPD)

#ifndef __LANGUAGE_ASM__
//! @brief Set the TAXPD field to a new value.
#define BW_MMDC_MDOTC_TAXPD(v)   (HW_MMDC_MDOTC_WR((HW_MMDC_MDOTC_RD() & ~BM_MMDC_MDOTC_TAXPD) | BF_MMDC_MDOTC_TAXPD(v)))
#endif


/* --- Register HW_MMDC_MDOTC, field TANPD[23:20] (RW)
 *
 * Asynchronous ODT to power down entry delay. In DDR3 should be set to tCWL-1 In DDR2 mode this
 * field is referred to ODT to power down entry latency. This field is not relevant in LPDDR2 mode.
 *
 * Values:
 * 0x0 - 1 clock
 * 0x1 - 2 clocks
 * 0x2 - 3 clocks
 * 0xE - 15 clocks
 * 0xF - 16 clocks
 */

#define BP_MMDC_MDOTC_TANPD      (20)      //!< Bit position for MMDC_MDOTC_TANPD.
#define BM_MMDC_MDOTC_TANPD      (0x00f00000)  //!< Bit mask for MMDC_MDOTC_TANPD.

//! @brief Get value of MMDC_MDOTC_TANPD from a register value.
#define BG_MMDC_MDOTC_TANPD(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_MMDC_MDOTC_TANPD) >> BP_MMDC_MDOTC_TANPD)

//! @brief Format value for bitfield MMDC_MDOTC_TANPD.
#define BF_MMDC_MDOTC_TANPD(v)   ((__REG_VALUE_TYPE((v), reg32_t) << BP_MMDC_MDOTC_TANPD) & BM_MMDC_MDOTC_TANPD)

#ifndef __LANGUAGE_ASM__
//! @brief Set the TANPD field to a new value.
#define BW_MMDC_MDOTC_TANPD(v)   (HW_MMDC_MDOTC_WR((HW_MMDC_MDOTC_RD() & ~BM_MMDC_MDOTC_TANPD) | BF_MMDC_MDOTC_TANPD(v)))
#endif


/* --- Register HW_MMDC_MDOTC, field TAONPD[26:24] (RW)
 *
 * Asynchronous RTT turn-on delay (power down with DLL frozen). This field determines the time
 * between termination cuircuit gets out of high impedance and begins to turn on till ODT resistance
 * are fully on. In DDR2 mode his field is referred to ODT turn-on (power down mode) max value. This
 * field is not relevant in LPDDR2 mode.
 *
 * Values:
 * 0x0 - 1 cycle
 * 0x1 - 2 cycles
 * 0x6 - 7 cycles
 * 0x7 - 8 cycles
 */

#define BP_MMDC_MDOTC_TAONPD      (24)      //!< Bit position for MMDC_MDOTC_TAONPD.
#define BM_MMDC_MDOTC_TAONPD      (0x07000000)  //!< Bit mask for MMDC_MDOTC_TAONPD.

//! @brief Get value of MMDC_MDOTC_TAONPD from a register value.
#define BG_MMDC_MDOTC_TAONPD(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_MMDC_MDOTC_TAONPD) >> BP_MMDC_MDOTC_TAONPD)

//! @brief Format value for bitfield MMDC_MDOTC_TAONPD.
#define BF_MMDC_MDOTC_TAONPD(v)   ((__REG_VALUE_TYPE((v), reg32_t) << BP_MMDC_MDOTC_TAONPD) & BM_MMDC_MDOTC_TAONPD)

#ifndef __LANGUAGE_ASM__
//! @brief Set the TAONPD field to a new value.
#define BW_MMDC_MDOTC_TAONPD(v)   (HW_MMDC_MDOTC_WR((HW_MMDC_MDOTC_RD() & ~BM_MMDC_MDOTC_TAONPD) | BF_MMDC_MDOTC_TAONPD(v)))
#endif


/* --- Register HW_MMDC_MDOTC, field TAOFPD[29:27] (RW)
 *
 * Asynchronous RTT turn-off delay (power down with DLL frozen). This field determines the time
 * between termination cuircuit starts to turn off the ODT resistance till termination has reached
 * high impedance. DDR2: ODT turn-off (power down mode) max value. This field is not relevant in
 * LPDDR2 mode.
 *
 * Values:
 * 0x0 - 1 cycle
 * 0x1 - 2 cycles
 * 0x6 - 7 cycles
 * 0x7 - 8 cycles
 */

#define BP_MMDC_MDOTC_TAOFPD      (27)      //!< Bit position for MMDC_MDOTC_TAOFPD.
#define BM_MMDC_MDOTC_TAOFPD      (0x38000000)  //!< Bit mask for MMDC_MDOTC_TAOFPD.

//! @brief Get value of MMDC_MDOTC_TAOFPD from a register value.
#define BG_MMDC_MDOTC_TAOFPD(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_MMDC_MDOTC_TAOFPD) >> BP_MMDC_MDOTC_TAOFPD)

//! @brief Format value for bitfield MMDC_MDOTC_TAOFPD.
#define BF_MMDC_MDOTC_TAOFPD(v)   ((__REG_VALUE_TYPE((v), reg32_t) << BP_MMDC_MDOTC_TAOFPD) & BM_MMDC_MDOTC_TAOFPD)

#ifndef __LANGUAGE_ASM__
//! @brief Set the TAOFPD field to a new value.
#define BW_MMDC_MDOTC_TAOFPD(v)   (HW_MMDC_MDOTC_WR((HW_MMDC_MDOTC_RD() & ~BM_MMDC_MDOTC_TAOFPD) | BF_MMDC_MDOTC_TAOFPD(v)))
#endif


//-------------------------------------------------------------------------------------------
// HW_MMDC_MDCFG0 - MMDC Core Timing Configuration Register 0
//-------------------------------------------------------------------------------------------

#ifndef __LANGUAGE_ASM__
/*!
 * @brief HW_MMDC_MDCFG0 - MMDC Core Timing Configuration Register 0 (RW)
 *
 * Reset value: 0x323622d3
 *
 * Supported Mode Of Operations:  For Channel 0: All  For Channel 1: LP2_2ch_x16, LP2_2ch_x32
 */
typedef union _hw_mmdc_mdcfg0
{
    reg32_t U;
    struct _hw_mmdc_mdcfg0_bitfields
    {
        unsigned TCL : 4; //!< [3:0] CAS Read Latency.
        unsigned TFAW : 5; //!< [8:4] Four Active Window (all banks).
        unsigned TXPDLL : 4; //!< [12:9] Exit precharge power down with DLL frozen to commands requiring DLL.
        unsigned TXP : 3; //!< [15:13] Exit power down with DLL-on to any valid command.
        unsigned TXS : 8; //!< [23:16] Exit self refresh to non READ command.
        unsigned TRFC : 8; //!< [31:24] Refresh command to Active or Refresh command time.
    } B;
} hw_mmdc_mdcfg0_t;
#endif

/*
 * constants & macros for entire MMDC_MDCFG0 register
 */
#define HW_MMDC_MDCFG0_ADDR      (REGS_MMDC_BASE + 0xc)

#ifndef __LANGUAGE_ASM__
#define HW_MMDC_MDCFG0           (*(volatile hw_mmdc_mdcfg0_t *) HW_MMDC_MDCFG0_ADDR)
#define HW_MMDC_MDCFG0_RD()      (HW_MMDC_MDCFG0.U)
#define HW_MMDC_MDCFG0_WR(v)     (HW_MMDC_MDCFG0.U = (v))
#define HW_MMDC_MDCFG0_SET(v)    (HW_MMDC_MDCFG0_WR(HW_MMDC_MDCFG0_RD() |  (v)))
#define HW_MMDC_MDCFG0_CLR(v)    (HW_MMDC_MDCFG0_WR(HW_MMDC_MDCFG0_RD() & ~(v)))
#define HW_MMDC_MDCFG0_TOG(v)    (HW_MMDC_MDCFG0_WR(HW_MMDC_MDCFG0_RD() ^  (v)))
#endif

/*
 * constants & macros for individual MMDC_MDCFG0 bitfields
 */

/* --- Register HW_MMDC_MDCFG0, field TCL[3:0] (RW)
 *
 * CAS Read Latency. In DDR3 mode this field is referred to CL. In LPDDR2 /DDR2 mode this field is
 * referred to RL. In LPDDR2 mode only the RL/WL pairs are allowed as specified in MR2 register See
 * DDR2 SDRAM Specification JESD79-2E (April 2008) , to DDR3 SDRAM Specification JESD79-3E (July
 * 2010) and LPDDR2 SDRAM Specification JESD209-2B (February 2010) for a detailed description of
 * this parameter.
 *
 * Values:
 * 0x0 - 3 cycles
 * 0x1 - 4 cycles
 * 0x2 - 5 cycles
 * 0x3 - 6 cycles
 * 0x4 - 7 cycles
 * 0x5 - 8 cycles
 * 0x6 - 9 cycles
 * 0x7 - 10 cycles
 * 0x8 - 11 cycles
 * 0x9 - - 0xF Reserved
 */

#define BP_MMDC_MDCFG0_TCL      (0)      //!< Bit position for MMDC_MDCFG0_TCL.
#define BM_MMDC_MDCFG0_TCL      (0x0000000f)  //!< Bit mask for MMDC_MDCFG0_TCL.

//! @brief Get value of MMDC_MDCFG0_TCL from a register value.
#define BG_MMDC_MDCFG0_TCL(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_MMDC_MDCFG0_TCL) >> BP_MMDC_MDCFG0_TCL)

//! @brief Format value for bitfield MMDC_MDCFG0_TCL.
#define BF_MMDC_MDCFG0_TCL(v)   ((__REG_VALUE_TYPE((v), reg32_t) << BP_MMDC_MDCFG0_TCL) & BM_MMDC_MDCFG0_TCL)

#ifndef __LANGUAGE_ASM__
//! @brief Set the TCL field to a new value.
#define BW_MMDC_MDCFG0_TCL(v)   (HW_MMDC_MDCFG0_WR((HW_MMDC_MDCFG0_RD() & ~BM_MMDC_MDCFG0_TCL) | BF_MMDC_MDCFG0_TCL(v)))
#endif


/* --- Register HW_MMDC_MDCFG0, field TFAW[8:4] (RW)
 *
 * Four Active Window (all banks). See DDR2 SDRAM Specification JESD79-2E (April 2008), to DDR3
 * SDRAM Specification JESD79-3E (July 2010) and LPDDR2 SDRAM Specification JESD209-2B (February
 * 2010) and LPDDR2 SDRAM Specification JESD209-2B (February 2010) for a detailed description of
 * this parameter.
 *
 * Values:
 * 0x0 - 1 clock
 * 0x1 - 2 clocks
 * 0x2 - 3 clocks
 * 0x1E - 31 clocks
 * 0x1F - 32 clocks
 */

#define BP_MMDC_MDCFG0_TFAW      (4)      //!< Bit position for MMDC_MDCFG0_TFAW.
#define BM_MMDC_MDCFG0_TFAW      (0x000001f0)  //!< Bit mask for MMDC_MDCFG0_TFAW.

//! @brief Get value of MMDC_MDCFG0_TFAW from a register value.
#define BG_MMDC_MDCFG0_TFAW(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_MMDC_MDCFG0_TFAW) >> BP_MMDC_MDCFG0_TFAW)

//! @brief Format value for bitfield MMDC_MDCFG0_TFAW.
#define BF_MMDC_MDCFG0_TFAW(v)   ((__REG_VALUE_TYPE((v), reg32_t) << BP_MMDC_MDCFG0_TFAW) & BM_MMDC_MDCFG0_TFAW)

#ifndef __LANGUAGE_ASM__
//! @brief Set the TFAW field to a new value.
#define BW_MMDC_MDCFG0_TFAW(v)   (HW_MMDC_MDCFG0_WR((HW_MMDC_MDCFG0_RD() & ~BM_MMDC_MDCFG0_TFAW) | BF_MMDC_MDCFG0_TFAW(v)))
#endif


/* --- Register HW_MMDC_MDCFG0, field TXPDLL[12:9] (RW)
 *
 * Exit precharge power down with DLL frozen to commands requiring DLL. This field is not relevant
 * in LPDDR2 mode. In DDR2 mode this field is referred to the time from exit active power down to
 * read commands(tXARD/tXARDS depending to memory configuration) See DDR2 SDRAM Specification
 * JESD79-2E (April 2008) , to DDR3 SDRAM Specification JESD79-3E (July 2010) and LPDDR2 SDRAM
 * Specification JESD209-2B (February 2010) and LPDDR2 SDRAM Specification JESD209-2B (February
 * 2010) for a detailed description of this parameter.
 *
 * Values:
 * 0x0 - 1 clock
 * 0x1 - 2 clocks
 * 0x2 - 3 clocks
 * 0xE - 15 clocks
 * 0xF - 16 clocks
 */

#define BP_MMDC_MDCFG0_TXPDLL      (9)      //!< Bit position for MMDC_MDCFG0_TXPDLL.
#define BM_MMDC_MDCFG0_TXPDLL      (0x00001e00)  //!< Bit mask for MMDC_MDCFG0_TXPDLL.

//! @brief Get value of MMDC_MDCFG0_TXPDLL from a register value.
#define BG_MMDC_MDCFG0_TXPDLL(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_MMDC_MDCFG0_TXPDLL) >> BP_MMDC_MDCFG0_TXPDLL)

//! @brief Format value for bitfield MMDC_MDCFG0_TXPDLL.
#define BF_MMDC_MDCFG0_TXPDLL(v)   ((__REG_VALUE_TYPE((v), reg32_t) << BP_MMDC_MDCFG0_TXPDLL) & BM_MMDC_MDCFG0_TXPDLL)

#ifndef __LANGUAGE_ASM__
//! @brief Set the TXPDLL field to a new value.
#define BW_MMDC_MDCFG0_TXPDLL(v)   (HW_MMDC_MDCFG0_WR((HW_MMDC_MDCFG0_RD() & ~BM_MMDC_MDCFG0_TXPDLL) | BF_MMDC_MDCFG0_TXPDLL(v)))
#endif


/* --- Register HW_MMDC_MDCFG0, field TXP[15:13] (RW)
 *
 * Exit power down with DLL-on to any valid command. Exit power down with DLL-frozen to commands not
 * requiring a locked DLL In DDR2 mode this field is referred to Exit precharge power down to any
 * command. In LPDDR2 mode this field is referred to Exit power-down to next valid command delay.
 * See DDR2 SDRAM Specification JESD79-2E (April 2008), to DDR3 SDRAM Specification JESD79-3E (July
 * 2010) and LPDDR2 SDRAM Specification JESD209-2B (February 2010) and LPDDR2 SDRAM Specification
 * JESD209-2B (February 2010) for a detailed description of this parameter.
 *
 * Values:
 * 0x0 - 1 cycle
 * 0x1 - 2 cycles
 * 0x6 - 7 cycles
 * 0x7 - 8 cycles
 */

#define BP_MMDC_MDCFG0_TXP      (13)      //!< Bit position for MMDC_MDCFG0_TXP.
#define BM_MMDC_MDCFG0_TXP      (0x0000e000)  //!< Bit mask for MMDC_MDCFG0_TXP.

//! @brief Get value of MMDC_MDCFG0_TXP from a register value.
#define BG_MMDC_MDCFG0_TXP(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_MMDC_MDCFG0_TXP) >> BP_MMDC_MDCFG0_TXP)

//! @brief Format value for bitfield MMDC_MDCFG0_TXP.
#define BF_MMDC_MDCFG0_TXP(v)   ((__REG_VALUE_TYPE((v), reg32_t) << BP_MMDC_MDCFG0_TXP) & BM_MMDC_MDCFG0_TXP)

#ifndef __LANGUAGE_ASM__
//! @brief Set the TXP field to a new value.
#define BW_MMDC_MDCFG0_TXP(v)   (HW_MMDC_MDCFG0_WR((HW_MMDC_MDCFG0_RD() & ~BM_MMDC_MDCFG0_TXP) | BF_MMDC_MDCFG0_TXP(v)))
#endif


/* --- Register HW_MMDC_MDCFG0, field TXS[23:16] (RW)
 *
 * Exit self refresh to non READ command. (Named tXSNR in DDR2 devices) In LPDDR2 it is called tXSR,
 * self-refresh exit to next valid command delay. See DDR2 SDRAM Specification JESD79-2E (April
 * 2008), to DDR3 SDRAM Specification JESD79-3E (July 2010) and LPDDR2 SDRAM Specification
 * JESD209-2B (February 2010) and LPDDR2 SDRAM Specification JESD209-2B (February 2010) for a
 * detailed description of this parameter.
 *
 * Values:
 * 0x0 - - 0x15 reserved
 * 0x16 - 23 clocks
 * 0x17 - 24 clocks
 * 0xFE - 255 clocks
 * 0xFF - 256 clocks
 */

#define BP_MMDC_MDCFG0_TXS      (16)      //!< Bit position for MMDC_MDCFG0_TXS.
#define BM_MMDC_MDCFG0_TXS      (0x00ff0000)  //!< Bit mask for MMDC_MDCFG0_TXS.

//! @brief Get value of MMDC_MDCFG0_TXS from a register value.
#define BG_MMDC_MDCFG0_TXS(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_MMDC_MDCFG0_TXS) >> BP_MMDC_MDCFG0_TXS)

//! @brief Format value for bitfield MMDC_MDCFG0_TXS.
#define BF_MMDC_MDCFG0_TXS(v)   ((__REG_VALUE_TYPE((v), reg32_t) << BP_MMDC_MDCFG0_TXS) & BM_MMDC_MDCFG0_TXS)

#ifndef __LANGUAGE_ASM__
//! @brief Set the TXS field to a new value.
#define BW_MMDC_MDCFG0_TXS(v)   (HW_MMDC_MDCFG0_WR((HW_MMDC_MDCFG0_RD() & ~BM_MMDC_MDCFG0_TXS) | BF_MMDC_MDCFG0_TXS(v)))
#endif


/* --- Register HW_MMDC_MDCFG0, field TRFC[31:24] (RW)
 *
 * Refresh command to Active or Refresh command time. See DDR2 SDRAM Specification JESD79-2E (April
 * 2008) , to DDR3 SDRAM Specification JESD79-3E (July 2010) and LPDDR2 SDRAM Specification
 * JESD209-2B (February 2010) and LPDDR2 SDRAM Specification JESD209-2B (February 2010) for a
 * detailed description of this parameter.
 *
 * Values:
 * 0x0 - 1 clock
 * 0x1 - 2 clocks
 * 0x2 - 3 clocks
 * 0xFE - 255 clocks
 * 0xFF - 256 clocks
 */

#define BP_MMDC_MDCFG0_TRFC      (24)      //!< Bit position for MMDC_MDCFG0_TRFC.
#define BM_MMDC_MDCFG0_TRFC      (0xff000000)  //!< Bit mask for MMDC_MDCFG0_TRFC.

//! @brief Get value of MMDC_MDCFG0_TRFC from a register value.
#define BG_MMDC_MDCFG0_TRFC(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_MMDC_MDCFG0_TRFC) >> BP_MMDC_MDCFG0_TRFC)

//! @brief Format value for bitfield MMDC_MDCFG0_TRFC.
#define BF_MMDC_MDCFG0_TRFC(v)   ((__REG_VALUE_TYPE((v), reg32_t) << BP_MMDC_MDCFG0_TRFC) & BM_MMDC_MDCFG0_TRFC)

#ifndef __LANGUAGE_ASM__
//! @brief Set the TRFC field to a new value.
#define BW_MMDC_MDCFG0_TRFC(v)   (HW_MMDC_MDCFG0_WR((HW_MMDC_MDCFG0_RD() & ~BM_MMDC_MDCFG0_TRFC) | BF_MMDC_MDCFG0_TRFC(v)))
#endif


//-------------------------------------------------------------------------------------------
// HW_MMDC_MDCFG1 - MMDC Core Timing Configuration Register 1
//-------------------------------------------------------------------------------------------

#ifndef __LANGUAGE_ASM__
/*!
 * @brief HW_MMDC_MDCFG1 - MMDC Core Timing Configuration Register 1 (RW)
 *
 * Reset value: 0xb6b18a23
 *
 * Supported Mode Of Operations:  For Channel 0: All  For Channel 1: LP2_2ch_x16, LP2_2ch_x32
 */
typedef union _hw_mmdc_mdcfg1
{
    reg32_t U;
    struct _hw_mmdc_mdcfg1_bitfields
    {
        unsigned TCWL : 3; //!< [2:0] CAS Write Latency.
        unsigned RESERVED0 : 2; //!< [4:3] Reserved
        unsigned TMRD : 4; //!< [8:5] Mode Register Set command cycle (all banks).
        unsigned TWR : 3; //!< [11:9] WRITE recovery time (same bank).
        unsigned RESERVED1 : 3; //!< [14:12] Reserved
        unsigned TRPA : 1; //!< [15] Precharge-all command period.
        unsigned TRAS : 5; //!< [20:16] Active to Precharge command period (same bank).
        unsigned TRC : 5; //!< [25:21] Active to Active or Refresh command period (same bank).
        unsigned TRP : 3; //!< [28:26] Precharge command period (same bank).
        unsigned TRCD : 3; //!< [31:29] Active command to internal read or write delay time (same bank).
    } B;
} hw_mmdc_mdcfg1_t;
#endif

/*
 * constants & macros for entire MMDC_MDCFG1 register
 */
#define HW_MMDC_MDCFG1_ADDR      (REGS_MMDC_BASE + 0x10)

#ifndef __LANGUAGE_ASM__
#define HW_MMDC_MDCFG1           (*(volatile hw_mmdc_mdcfg1_t *) HW_MMDC_MDCFG1_ADDR)
#define HW_MMDC_MDCFG1_RD()      (HW_MMDC_MDCFG1.U)
#define HW_MMDC_MDCFG1_WR(v)     (HW_MMDC_MDCFG1.U = (v))
#define HW_MMDC_MDCFG1_SET(v)    (HW_MMDC_MDCFG1_WR(HW_MMDC_MDCFG1_RD() |  (v)))
#define HW_MMDC_MDCFG1_CLR(v)    (HW_MMDC_MDCFG1_WR(HW_MMDC_MDCFG1_RD() & ~(v)))
#define HW_MMDC_MDCFG1_TOG(v)    (HW_MMDC_MDCFG1_WR(HW_MMDC_MDCFG1_RD() ^  (v)))
#endif

/*
 * constants & macros for individual MMDC_MDCFG1 bitfields
 */

/* --- Register HW_MMDC_MDCFG1, field TCWL[2:0] (RW)
 *
 * CAS Write Latency. In DDR2 mode this field is referred to WL and equals RL-1. In DDR3 mode this
 * field is referred to CWL. In LPDDR2 mode this field is referred to WL.
 *
 * Values:
 * 0x0 - 2cycles ( DDR2/ DDR3) , 1 cycle (LPDDR2)
 * 0x1 - 3cycles ( DDR2/ DDR3) , 2 cycles (LPDDR2)
 * 0x2 - 4cycles ( DDR2/ DDR3) , 3 cycles (LPDDR2)
 * 0x3 - 5cycles ( DDR2/ DDR3) , 4 cycles (LPDDR2)
 * 0x4 - 6cycles ( DDR2/ DDR3) , 5 cycles (LPDDR2)
 * 0x5 - 7cycles ( DDR2/ DDR3) , 6 cycles (LPDDR2)
 * 0x6 - 8cycles ( DDR2/ DDR3) , 7 cycles (LPDDR2)
 * 0x7 - Reserved
 */

#define BP_MMDC_MDCFG1_TCWL      (0)      //!< Bit position for MMDC_MDCFG1_TCWL.
#define BM_MMDC_MDCFG1_TCWL      (0x00000007)  //!< Bit mask for MMDC_MDCFG1_TCWL.

//! @brief Get value of MMDC_MDCFG1_TCWL from a register value.
#define BG_MMDC_MDCFG1_TCWL(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_MMDC_MDCFG1_TCWL) >> BP_MMDC_MDCFG1_TCWL)

//! @brief Format value for bitfield MMDC_MDCFG1_TCWL.
#define BF_MMDC_MDCFG1_TCWL(v)   ((__REG_VALUE_TYPE((v), reg32_t) << BP_MMDC_MDCFG1_TCWL) & BM_MMDC_MDCFG1_TCWL)

#ifndef __LANGUAGE_ASM__
//! @brief Set the TCWL field to a new value.
#define BW_MMDC_MDCFG1_TCWL(v)   (HW_MMDC_MDCFG1_WR((HW_MMDC_MDCFG1_RD() & ~BM_MMDC_MDCFG1_TCWL) | BF_MMDC_MDCFG1_TCWL(v)))
#endif


/* --- Register HW_MMDC_MDCFG1, field TMRD[8:5] (RW)
 *
 * Mode Register Set command cycle (all banks). In DDR3 mode this field shoud be set to max
 * (tMRD,tMOD). In DDR2 mode this field is Set to tMRD. In LPDDR2 mode this field should be set to
 * max(tMRR,tMRW) See DDR2 SDRAM Specification JESD79-2E (April 2008) and to DDR3 SDRAM
 * Specification JESD79-3E (July 2010) and LPDDR2 SDRAM Specification JESD209-2B (February 2010) and
 * LPDDR2 SDRAM Specification JESD209-2B (February 2010) for a detailed description of this
 * parameter.
 *
 * Values:
 * 0x0 - 1 clock
 * 0x1 - 2 clocks
 * 0x2 - 3 clocks
 * 0xE - 15 clocks
 * 0xF - 16 clocks
 */

#define BP_MMDC_MDCFG1_TMRD      (5)      //!< Bit position for MMDC_MDCFG1_TMRD.
#define BM_MMDC_MDCFG1_TMRD      (0x000001e0)  //!< Bit mask for MMDC_MDCFG1_TMRD.

//! @brief Get value of MMDC_MDCFG1_TMRD from a register value.
#define BG_MMDC_MDCFG1_TMRD(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_MMDC_MDCFG1_TMRD) >> BP_MMDC_MDCFG1_TMRD)

//! @brief Format value for bitfield MMDC_MDCFG1_TMRD.
#define BF_MMDC_MDCFG1_TMRD(v)   ((__REG_VALUE_TYPE((v), reg32_t) << BP_MMDC_MDCFG1_TMRD) & BM_MMDC_MDCFG1_TMRD)

#ifndef __LANGUAGE_ASM__
//! @brief Set the TMRD field to a new value.
#define BW_MMDC_MDCFG1_TMRD(v)   (HW_MMDC_MDCFG1_WR((HW_MMDC_MDCFG1_RD() & ~BM_MMDC_MDCFG1_TMRD) | BF_MMDC_MDCFG1_TMRD(v)))
#endif


/* --- Register HW_MMDC_MDCFG1, field TWR[11:9] (RW)
 *
 * WRITE recovery time (same bank). See DDR2 SDRAM Specification JESD79-2E (April 2008) and to DDR3
 * SDRAM Specification JESD79-3E (July 2010) and LPDDR2 SDRAM Specification JESD209-2B (February
 * 2010) and LPDDR2 SDRAM Specification JESD209-2B (February 2010) for a detailed description of
 * this parameter.
 *
 * Values:
 * 0x0 - 1cycle
 * 0x1 - 2cycles
 * 0x2 - 3cycles
 * 0x3 - 4cycles
 * 0x4 - 5cycles
 * 0x5 - 6cycles
 * 0x6 - 7cycles
 * 0x7 - 8 cycles
 */

#define BP_MMDC_MDCFG1_TWR      (9)      //!< Bit position for MMDC_MDCFG1_TWR.
#define BM_MMDC_MDCFG1_TWR      (0x00000e00)  //!< Bit mask for MMDC_MDCFG1_TWR.

//! @brief Get value of MMDC_MDCFG1_TWR from a register value.
#define BG_MMDC_MDCFG1_TWR(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_MMDC_MDCFG1_TWR) >> BP_MMDC_MDCFG1_TWR)

//! @brief Format value for bitfield MMDC_MDCFG1_TWR.
#define BF_MMDC_MDCFG1_TWR(v)   ((__REG_VALUE_TYPE((v), reg32_t) << BP_MMDC_MDCFG1_TWR) & BM_MMDC_MDCFG1_TWR)

#ifndef __LANGUAGE_ASM__
//! @brief Set the TWR field to a new value.
#define BW_MMDC_MDCFG1_TWR(v)   (HW_MMDC_MDCFG1_WR((HW_MMDC_MDCFG1_RD() & ~BM_MMDC_MDCFG1_TWR) | BF_MMDC_MDCFG1_TWR(v)))
#endif


/* --- Register HW_MMDC_MDCFG1, field TRPA[15] (RW)
 *
 * Precharge-all command period. (This field is valid only for DDR2/ DDR3 memories) In LPDDR2 mode
 * this parameter should be configured at tRPab_LP. See DDR2 SDRAM Specification JESD79-2E (April
 * 2008) and to DDR3 SDRAM Specification JESD79-3E (July 2010) and LPDDR2 SDRAM Specification
 * JESD209-2B (February 2010) and LPDDR2 SDRAM Specification JESD209-2B (February 2010) for a
 * detailed description of this parameter.
 *
 * Values:
 * 0 - Will be equal to: tRP.
 * 1 - Will be equal to: tRP+1.
 */

#define BP_MMDC_MDCFG1_TRPA      (15)      //!< Bit position for MMDC_MDCFG1_TRPA.
#define BM_MMDC_MDCFG1_TRPA      (0x00008000)  //!< Bit mask for MMDC_MDCFG1_TRPA.

//! @brief Get value of MMDC_MDCFG1_TRPA from a register value.
#define BG_MMDC_MDCFG1_TRPA(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_MMDC_MDCFG1_TRPA) >> BP_MMDC_MDCFG1_TRPA)

//! @brief Format value for bitfield MMDC_MDCFG1_TRPA.
#define BF_MMDC_MDCFG1_TRPA(v)   ((__REG_VALUE_TYPE((v), reg32_t) << BP_MMDC_MDCFG1_TRPA) & BM_MMDC_MDCFG1_TRPA)

#ifndef __LANGUAGE_ASM__
//! @brief Set the TRPA field to a new value.
#define BW_MMDC_MDCFG1_TRPA(v)   (HW_MMDC_MDCFG1_WR((HW_MMDC_MDCFG1_RD() & ~BM_MMDC_MDCFG1_TRPA) | BF_MMDC_MDCFG1_TRPA(v)))
#endif


/* --- Register HW_MMDC_MDCFG1, field TRAS[20:16] (RW)
 *
 * Active to Precharge command period (same bank). See DDR2 SDRAM Specification JESD79-2E (April
 * 2008) and to DDR3 SDRAM Specification JESD79-3E (July 2010) and LPDDR2 SDRAM Specification
 * JESD209-2B (February 2010) and LPDDR2 SDRAM Specification JESD209-2B (February 2010) for a
 * detailed description of this parameter.
 *
 * Values:
 * 0x0 - 1 clock
 * 0x1 - 2 clocks
 * 0x2 - 3 clocks
 * 0x1E - 31 clocks
 * 0x1F - Reserved
 */

#define BP_MMDC_MDCFG1_TRAS      (16)      //!< Bit position for MMDC_MDCFG1_TRAS.
#define BM_MMDC_MDCFG1_TRAS      (0x001f0000)  //!< Bit mask for MMDC_MDCFG1_TRAS.

//! @brief Get value of MMDC_MDCFG1_TRAS from a register value.
#define BG_MMDC_MDCFG1_TRAS(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_MMDC_MDCFG1_TRAS) >> BP_MMDC_MDCFG1_TRAS)

//! @brief Format value for bitfield MMDC_MDCFG1_TRAS.
#define BF_MMDC_MDCFG1_TRAS(v)   ((__REG_VALUE_TYPE((v), reg32_t) << BP_MMDC_MDCFG1_TRAS) & BM_MMDC_MDCFG1_TRAS)

#ifndef __LANGUAGE_ASM__
//! @brief Set the TRAS field to a new value.
#define BW_MMDC_MDCFG1_TRAS(v)   (HW_MMDC_MDCFG1_WR((HW_MMDC_MDCFG1_RD() & ~BM_MMDC_MDCFG1_TRAS) | BF_MMDC_MDCFG1_TRAS(v)))
#endif


/* --- Register HW_MMDC_MDCFG1, field TRC[25:21] (RW)
 *
 * Active to Active or Refresh command period (same bank). (This field is valid only for DDR2/ DDR3
 * memories) In LPDDR2 mode this parameter should be configured at tRC_LP. See DDR2 SDRAM
 * Specification JESD79-2E (April 2008) and to DDR3 SDRAM Specification JESD79-3E (July 2010) and
 * LPDDR2 SDRAM Specification JESD209-2B (February 2010) and LPDDR2 SDRAM Specification JESD209-2B
 * (February 2010) for a detailed description of this parameter.
 *
 * Values:
 * 0x0 - 1 clock
 * 0x1 - 2 clocks
 * 0x2 - 3 clocks
 * 0x1E - 31 clocks
 * 0x1F - 32 clocks
 */

#define BP_MMDC_MDCFG1_TRC      (21)      //!< Bit position for MMDC_MDCFG1_TRC.
#define BM_MMDC_MDCFG1_TRC      (0x03e00000)  //!< Bit mask for MMDC_MDCFG1_TRC.

//! @brief Get value of MMDC_MDCFG1_TRC from a register value.
#define BG_MMDC_MDCFG1_TRC(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_MMDC_MDCFG1_TRC) >> BP_MMDC_MDCFG1_TRC)

//! @brief Format value for bitfield MMDC_MDCFG1_TRC.
#define BF_MMDC_MDCFG1_TRC(v)   ((__REG_VALUE_TYPE((v), reg32_t) << BP_MMDC_MDCFG1_TRC) & BM_MMDC_MDCFG1_TRC)

#ifndef __LANGUAGE_ASM__
//! @brief Set the TRC field to a new value.
#define BW_MMDC_MDCFG1_TRC(v)   (HW_MMDC_MDCFG1_WR((HW_MMDC_MDCFG1_RD() & ~BM_MMDC_MDCFG1_TRC) | BF_MMDC_MDCFG1_TRC(v)))
#endif


/* --- Register HW_MMDC_MDCFG1, field TRP[28:26] (RW)
 *
 * Precharge command period (same bank). (This field is valid only for DDR2/ DDR3 memories) IIn
 * LPDDR2 mode this parameter should be configured at tRPpb_LP. See DDR2 SDRAM Specification
 * JESD79-2E (April 2008) and to DDR3 SDRAM Specification JESD79-3E (July 2010) and LPDDR2 SDRAM
 * Specification JESD209-2B (February 2010) and LPDDR2 SDRAM Specification JESD209-2B (February
 * 2010) for a detailed description of this parameter.
 *
 * Values:
 * 0x0 - 1 clock
 * 0x1 - 2 clocks
 * 0x2 - 3 clocks
 * 0x3 - 4 clocks
 * 0x4 - 5 clocks
 * 0x5 - 6 clocks
 * 0x6 - 7 clocks
 * 0x7 - 8 clocks
 */

#define BP_MMDC_MDCFG1_TRP      (26)      //!< Bit position for MMDC_MDCFG1_TRP.
#define BM_MMDC_MDCFG1_TRP      (0x1c000000)  //!< Bit mask for MMDC_MDCFG1_TRP.

//! @brief Get value of MMDC_MDCFG1_TRP from a register value.
#define BG_MMDC_MDCFG1_TRP(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_MMDC_MDCFG1_TRP) >> BP_MMDC_MDCFG1_TRP)

//! @brief Format value for bitfield MMDC_MDCFG1_TRP.
#define BF_MMDC_MDCFG1_TRP(v)   ((__REG_VALUE_TYPE((v), reg32_t) << BP_MMDC_MDCFG1_TRP) & BM_MMDC_MDCFG1_TRP)

#ifndef __LANGUAGE_ASM__
//! @brief Set the TRP field to a new value.
#define BW_MMDC_MDCFG1_TRP(v)   (HW_MMDC_MDCFG1_WR((HW_MMDC_MDCFG1_RD() & ~BM_MMDC_MDCFG1_TRP) | BF_MMDC_MDCFG1_TRP(v)))
#endif


/* --- Register HW_MMDC_MDCFG1, field TRCD[31:29] (RW)
 *
 * Active command to internal read or write delay time (same bank). (This field is valid only for
 * DDR2/ DDR3 memories) In LPDDR2 mode this parameter should be configured at tRCD_LP. See DDR2
 * SDRAM Specification JESD79-2E (April 2008) and to DDR3 SDRAM Specification JESD79-3E (July 2010)
 * and LPDDR2 SDRAM Specification JESD209-2B (February 2010) and LPDDR2 SDRAM Specification
 * JESD209-2B (February 2010) for a detailed description of this parameter.
 *
 * Values:
 * 0x0 - 1 clock
 * 0x1 - 2 clocks
 * 0x2 - 3 clocks
 * 0x3 - 4 clocks
 * 0x4 - 5 clocks
 * 0x5 - 6 clocks
 * 0x6 - 7 clocks
 * 0x7 - 8 clocks
 */

#define BP_MMDC_MDCFG1_TRCD      (29)      //!< Bit position for MMDC_MDCFG1_TRCD.
#define BM_MMDC_MDCFG1_TRCD      (0xe0000000)  //!< Bit mask for MMDC_MDCFG1_TRCD.

//! @brief Get value of MMDC_MDCFG1_TRCD from a register value.
#define BG_MMDC_MDCFG1_TRCD(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_MMDC_MDCFG1_TRCD) >> BP_MMDC_MDCFG1_TRCD)

//! @brief Format value for bitfield MMDC_MDCFG1_TRCD.
#define BF_MMDC_MDCFG1_TRCD(v)   ((__REG_VALUE_TYPE((v), reg32_t) << BP_MMDC_MDCFG1_TRCD) & BM_MMDC_MDCFG1_TRCD)

#ifndef __LANGUAGE_ASM__
//! @brief Set the TRCD field to a new value.
#define BW_MMDC_MDCFG1_TRCD(v)   (HW_MMDC_MDCFG1_WR((HW_MMDC_MDCFG1_RD() & ~BM_MMDC_MDCFG1_TRCD) | BF_MMDC_MDCFG1_TRCD(v)))
#endif


//-------------------------------------------------------------------------------------------
// HW_MMDC_MDCFG2 - MMDC Core Timing Configuration Register 2
//-------------------------------------------------------------------------------------------

#ifndef __LANGUAGE_ASM__
/*!
 * @brief HW_MMDC_MDCFG2 - MMDC Core Timing Configuration Register 2 (RW)
 *
 * Reset value: 0x00c70092
 *
 * Supported Mode Of Operations:  For Channel 0: All  For Channel 1: LP2_2ch_x16, LP2_2ch_x32
 */
typedef union _hw_mmdc_mdcfg2
{
    reg32_t U;
    struct _hw_mmdc_mdcfg2_bitfields
    {
        unsigned TRRD : 3; //!< [2:0] Active to Active command period (all banks).
        unsigned TWTR : 3; //!< [5:3] Internal WRITE to READ command delay (same bank).
        unsigned TRTP : 3; //!< [8:6] Internal READ command to Precharge command delay (same bank).
        unsigned RESERVED0 : 7; //!< [15:9] Reserved
        unsigned TDLLK : 9; //!< [24:16] DLL locking time.
        unsigned RESERVED1 : 7; //!< [31:25] Reserved
    } B;
} hw_mmdc_mdcfg2_t;
#endif

/*
 * constants & macros for entire MMDC_MDCFG2 register
 */
#define HW_MMDC_MDCFG2_ADDR      (REGS_MMDC_BASE + 0x14)

#ifndef __LANGUAGE_ASM__
#define HW_MMDC_MDCFG2           (*(volatile hw_mmdc_mdcfg2_t *) HW_MMDC_MDCFG2_ADDR)
#define HW_MMDC_MDCFG2_RD()      (HW_MMDC_MDCFG2.U)
#define HW_MMDC_MDCFG2_WR(v)     (HW_MMDC_MDCFG2.U = (v))
#define HW_MMDC_MDCFG2_SET(v)    (HW_MMDC_MDCFG2_WR(HW_MMDC_MDCFG2_RD() |  (v)))
#define HW_MMDC_MDCFG2_CLR(v)    (HW_MMDC_MDCFG2_WR(HW_MMDC_MDCFG2_RD() & ~(v)))
#define HW_MMDC_MDCFG2_TOG(v)    (HW_MMDC_MDCFG2_WR(HW_MMDC_MDCFG2_RD() ^  (v)))
#endif

/*
 * constants & macros for individual MMDC_MDCFG2 bitfields
 */

/* --- Register HW_MMDC_MDCFG2, field TRRD[2:0] (RW)
 *
 * Active to Active command period (all banks). See DDR2 SDRAM Specification JESD79-2E (April 2008)
 * and to DDR3 SDRAM Specification JESD79-3E (July 2010) and LPDDR2 SDRAM Specification JESD209-2B
 * (February 2010) and LPDDR2 SDRAM Specification JESD209-2B (February 2010) for a detailed
 * description of this parameter.
 *
 * Values:
 * 0x0 - 1cycle
 * 0x1 - 2cycles
 * 0x2 - 3cycles
 * 0x3 - 4cycles
 * 0x4 - 5cycles
 * 0x5 - 6cycles
 * 0x6 - 7cycles
 * 0x7 - Reserved
 */

#define BP_MMDC_MDCFG2_TRRD      (0)      //!< Bit position for MMDC_MDCFG2_TRRD.
#define BM_MMDC_MDCFG2_TRRD      (0x00000007)  //!< Bit mask for MMDC_MDCFG2_TRRD.

//! @brief Get value of MMDC_MDCFG2_TRRD from a register value.
#define BG_MMDC_MDCFG2_TRRD(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_MMDC_MDCFG2_TRRD) >> BP_MMDC_MDCFG2_TRRD)

//! @brief Format value for bitfield MMDC_MDCFG2_TRRD.
#define BF_MMDC_MDCFG2_TRRD(v)   ((__REG_VALUE_TYPE((v), reg32_t) << BP_MMDC_MDCFG2_TRRD) & BM_MMDC_MDCFG2_TRRD)

#ifndef __LANGUAGE_ASM__
//! @brief Set the TRRD field to a new value.
#define BW_MMDC_MDCFG2_TRRD(v)   (HW_MMDC_MDCFG2_WR((HW_MMDC_MDCFG2_RD() & ~BM_MMDC_MDCFG2_TRRD) | BF_MMDC_MDCFG2_TRRD(v)))
#endif


/* --- Register HW_MMDC_MDCFG2, field TWTR[5:3] (RW)
 *
 * Internal WRITE to READ command delay (same bank). See DDR2 SDRAM Specification JESD79-2E (April
 * 2008) and to DDR3 SDRAM Specification JESD79-3E (July 2010) and LPDDR2 SDRAM Specification
 * JESD209-2B (February 2010) and LPDDR2 SDRAM Specification JESD209-2B (February 2010) for a
 * detailed description of this parameter.
 *
 * Values:
 * 0x0 - 1cycle
 * 0x1 - 2cycles
 * 0x2 - 3cycles
 * 0x3 - 4cycles
 * 0x4 - 5cycles
 * 0x5 - 6cycles
 * 0x6 - 7cycles
 * 0x7 - 8 cycles
 */

#define BP_MMDC_MDCFG2_TWTR      (3)      //!< Bit position for MMDC_MDCFG2_TWTR.
#define BM_MMDC_MDCFG2_TWTR      (0x00000038)  //!< Bit mask for MMDC_MDCFG2_TWTR.

//! @brief Get value of MMDC_MDCFG2_TWTR from a register value.
#define BG_MMDC_MDCFG2_TWTR(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_MMDC_MDCFG2_TWTR) >> BP_MMDC_MDCFG2_TWTR)

//! @brief Format value for bitfield MMDC_MDCFG2_TWTR.
#define BF_MMDC_MDCFG2_TWTR(v)   ((__REG_VALUE_TYPE((v), reg32_t) << BP_MMDC_MDCFG2_TWTR) & BM_MMDC_MDCFG2_TWTR)

#ifndef __LANGUAGE_ASM__
//! @brief Set the TWTR field to a new value.
#define BW_MMDC_MDCFG2_TWTR(v)   (HW_MMDC_MDCFG2_WR((HW_MMDC_MDCFG2_RD() & ~BM_MMDC_MDCFG2_TWTR) | BF_MMDC_MDCFG2_TWTR(v)))
#endif


/* --- Register HW_MMDC_MDCFG2, field TRTP[8:6] (RW)
 *
 * Internal READ command to Precharge command delay (same bank). See DDR2 SDRAM Specification
 * JESD79-2E (April 2008) and to DDR3 SDRAM Specification JESD79-3E (July 2010) and LPDDR2 SDRAM
 * Specification JESD209-2B (February 2010) and LPDDR2 SDRAM Specification JESD209-2B (February
 * 2010) for a detailed description of this parameter.
 *
 * Values:
 * 0x0 - 1cycle
 * 0x1 - 2cycles
 * 0x2 - 3cycles
 * 0x3 - 4cycles
 * 0x4 - 5cycles
 * 0x5 - 6cycles
 * 0x6 - 7cycles
 * 0x7 - 8 cycles
 */

#define BP_MMDC_MDCFG2_TRTP      (6)      //!< Bit position for MMDC_MDCFG2_TRTP.
#define BM_MMDC_MDCFG2_TRTP      (0x000001c0)  //!< Bit mask for MMDC_MDCFG2_TRTP.

//! @brief Get value of MMDC_MDCFG2_TRTP from a register value.
#define BG_MMDC_MDCFG2_TRTP(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_MMDC_MDCFG2_TRTP) >> BP_MMDC_MDCFG2_TRTP)

//! @brief Format value for bitfield MMDC_MDCFG2_TRTP.
#define BF_MMDC_MDCFG2_TRTP(v)   ((__REG_VALUE_TYPE((v), reg32_t) << BP_MMDC_MDCFG2_TRTP) & BM_MMDC_MDCFG2_TRTP)

#ifndef __LANGUAGE_ASM__
//! @brief Set the TRTP field to a new value.
#define BW_MMDC_MDCFG2_TRTP(v)   (HW_MMDC_MDCFG2_WR((HW_MMDC_MDCFG2_RD() & ~BM_MMDC_MDCFG2_TRTP) | BF_MMDC_MDCFG2_TRTP(v)))
#endif


/* --- Register HW_MMDC_MDCFG2, field TDLLK[24:16] (RW)
 *
 * DLL locking time. In DDR2 mode this field is called tXSRD, exit self refresh to read command.
 * This field is not relevant in LPDDR2 mode. See DDR2 SDRAM Specification JESD79-2E (April 2008)
 * and to DDR3 SDRAM Specification JESD79-3E (July 2010) and LPDDR2 SDRAM Specification JESD209-2B
 * (February 2010) and LPDDR2 SDRAM Specification JESD209-2B (February 2010) for a detailed
 * description of this parameter.
 *
 * Values:
 * 0x0 - 1 cycle.
 * 0x1 - 2 cycles.
 * 0x2 - 3 cycles.
 * 0xC7 - 200 cycles (JEDEC value for DDR2).
 * 0x1FE - 511 cycles.
 * 0x1FF - 512 cycles (JEDEC value for DDR3).
 */

#define BP_MMDC_MDCFG2_TDLLK      (16)      //!< Bit position for MMDC_MDCFG2_TDLLK.
#define BM_MMDC_MDCFG2_TDLLK      (0x01ff0000)  //!< Bit mask for MMDC_MDCFG2_TDLLK.

//! @brief Get value of MMDC_MDCFG2_TDLLK from a register value.
#define BG_MMDC_MDCFG2_TDLLK(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_MMDC_MDCFG2_TDLLK) >> BP_MMDC_MDCFG2_TDLLK)

//! @brief Format value for bitfield MMDC_MDCFG2_TDLLK.
#define BF_MMDC_MDCFG2_TDLLK(v)   ((__REG_VALUE_TYPE((v), reg32_t) << BP_MMDC_MDCFG2_TDLLK) & BM_MMDC_MDCFG2_TDLLK)

#ifndef __LANGUAGE_ASM__
//! @brief Set the TDLLK field to a new value.
#define BW_MMDC_MDCFG2_TDLLK(v)   (HW_MMDC_MDCFG2_WR((HW_MMDC_MDCFG2_RD() & ~BM_MMDC_MDCFG2_TDLLK) | BF_MMDC_MDCFG2_TDLLK(v)))
#endif


//-------------------------------------------------------------------------------------------
// HW_MMDC_MDMISC - MMDC Core Miscellaneous Register
//-------------------------------------------------------------------------------------------

#ifndef __LANGUAGE_ASM__
/*!
 * @brief HW_MMDC_MDMISC - MMDC Core Miscellaneous Register (RW)
 *
 * Reset value: 0x00001600
 *
 * Supported Mode Of Operations:  For Channel 0: All  For Channel 1: LP2_2ch_x16, LP2_2ch_x32
 */
typedef union _hw_mmdc_mdmisc
{
    reg32_t U;
    struct _hw_mmdc_mdmisc_bitfields
    {
        unsigned RESERVED0 : 1; //!< [0] Reserved
        unsigned RST : 1; //!< [1] Software Reset.
        unsigned LPDDR2_2CH : 1; //!< [2] LPDDR2 2-channels mode.
        unsigned DDR_TYPE : 2; //!< [4:3] DDR TYPE.
        unsigned DDR_4_BANK : 1; //!< [5] Number of banks per DDR device.
        unsigned RALAT : 3; //!< [8:6] Read Additional Latency.
        unsigned MIF3_MODE : 2; //!< [10:9] Command prediction working mode.
        unsigned LPDDR2_S2 : 1; //!< [11] LPDDR2 S2 device type indication.
        unsigned BI_ON : 1; //!< [12] Bank Interleaving On.
        unsigned RESERVED1 : 3; //!< [15:13] Reserved
        unsigned WALAT : 2; //!< [17:16] Write Additional latency.
        unsigned LHD : 1; //!< [18] Latency hiding disable.
        unsigned ADDR_MIRROR : 1; //!< [19] Address mirroring.
        unsigned CALIB_PER_CS : 1; //!< [20] Number of chip-select for calibration process.
        unsigned RESERVED2 : 9; //!< [29:21] Reserved.
        unsigned CS1_RDY : 1; //!< [30] External status device on CS1.
        unsigned CS0_RDY : 1; //!< [31] External status device on CS0.
    } B;
} hw_mmdc_mdmisc_t;
#endif

/*
 * constants & macros for entire MMDC_MDMISC register
 */
#define HW_MMDC_MDMISC_ADDR      (REGS_MMDC_BASE + 0x18)

#ifndef __LANGUAGE_ASM__
#define HW_MMDC_MDMISC           (*(volatile hw_mmdc_mdmisc_t *) HW_MMDC_MDMISC_ADDR)
#define HW_MMDC_MDMISC_RD()      (HW_MMDC_MDMISC.U)
#define HW_MMDC_MDMISC_WR(v)     (HW_MMDC_MDMISC.U = (v))
#define HW_MMDC_MDMISC_SET(v)    (HW_MMDC_MDMISC_WR(HW_MMDC_MDMISC_RD() |  (v)))
#define HW_MMDC_MDMISC_CLR(v)    (HW_MMDC_MDMISC_WR(HW_MMDC_MDMISC_RD() & ~(v)))
#define HW_MMDC_MDMISC_TOG(v)    (HW_MMDC_MDMISC_WR(HW_MMDC_MDMISC_RD() ^  (v)))
#endif

/*
 * constants & macros for individual MMDC_MDMISC bitfields
 */

/* --- Register HW_MMDC_MDMISC, field RST[1] (RW)
 *
 * Software Reset. When this bit is asserted then the internal FSMs and registers of the MMDC will
 * be initialized. This bit once asserted gets deasserted automatically.
 *
 * Values:
 * 0 - Do nothing.
 * 1 - Assert reset to the MMDC.
 */

#define BP_MMDC_MDMISC_RST      (1)      //!< Bit position for MMDC_MDMISC_RST.
#define BM_MMDC_MDMISC_RST      (0x00000002)  //!< Bit mask for MMDC_MDMISC_RST.

//! @brief Get value of MMDC_MDMISC_RST from a register value.
#define BG_MMDC_MDMISC_RST(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_MMDC_MDMISC_RST) >> BP_MMDC_MDMISC_RST)

//! @brief Format value for bitfield MMDC_MDMISC_RST.
#define BF_MMDC_MDMISC_RST(v)   ((__REG_VALUE_TYPE((v), reg32_t) << BP_MMDC_MDMISC_RST) & BM_MMDC_MDMISC_RST)

#ifndef __LANGUAGE_ASM__
//! @brief Set the RST field to a new value.
#define BW_MMDC_MDMISC_RST(v)   (HW_MMDC_MDMISC_WR((HW_MMDC_MDMISC_RD() & ~BM_MMDC_MDMISC_RST) | BF_MMDC_MDMISC_RST(v)))
#endif


/* --- Register HW_MMDC_MDMISC, field LPDDR2_2CH[2] (RW)
 *
 * LPDDR2 2-channels mode. When this bit is set to "1" then dual channel mode is activated. This
 * field should be cleared for DDR3 mode.
 *
 * Values:
 * 0 - 1-channel mode (DDR3)
 * 1 - 2-channels mode (LPDDR2)
 */

#define BP_MMDC_MDMISC_LPDDR2_2CH      (2)      //!< Bit position for MMDC_MDMISC_LPDDR2_2CH.
#define BM_MMDC_MDMISC_LPDDR2_2CH      (0x00000004)  //!< Bit mask for MMDC_MDMISC_LPDDR2_2CH.

//! @brief Get value of MMDC_MDMISC_LPDDR2_2CH from a register value.
#define BG_MMDC_MDMISC_LPDDR2_2CH(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_MMDC_MDMISC_LPDDR2_2CH) >> BP_MMDC_MDMISC_LPDDR2_2CH)

//! @brief Format value for bitfield MMDC_MDMISC_LPDDR2_2CH.
#define BF_MMDC_MDMISC_LPDDR2_2CH(v)   ((__REG_VALUE_TYPE((v), reg32_t) << BP_MMDC_MDMISC_LPDDR2_2CH) & BM_MMDC_MDMISC_LPDDR2_2CH)

#ifndef __LANGUAGE_ASM__
//! @brief Set the LPDDR2_2CH field to a new value.
#define BW_MMDC_MDMISC_LPDDR2_2CH(v)   (HW_MMDC_MDMISC_WR((HW_MMDC_MDMISC_RD() & ~BM_MMDC_MDMISC_LPDDR2_2CH) | BF_MMDC_MDMISC_LPDDR2_2CH(v)))
#endif


/* --- Register HW_MMDC_MDMISC, field DDR_TYPE[4:3] (RW)
 *
 * DDR TYPE. This field determines the type of the external DDR device.
 *
 * Values:
 * 0x0 - DDR3 device is used. (Default)
 * 0x1 - LPDDR2 device is used.
 * 0x2 - DDR2 device is used.
 * 0x2 - Reserved.
 * 0x3 - Reserved.
 * 0x3 - Reserved.
 */

#define BP_MMDC_MDMISC_DDR_TYPE      (3)      //!< Bit position for MMDC_MDMISC_DDR_TYPE.
#define BM_MMDC_MDMISC_DDR_TYPE      (0x00000018)  //!< Bit mask for MMDC_MDMISC_DDR_TYPE.

//! @brief Get value of MMDC_MDMISC_DDR_TYPE from a register value.
#define BG_MMDC_MDMISC_DDR_TYPE(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_MMDC_MDMISC_DDR_TYPE) >> BP_MMDC_MDMISC_DDR_TYPE)

//! @brief Format value for bitfield MMDC_MDMISC_DDR_TYPE.
#define BF_MMDC_MDMISC_DDR_TYPE(v)   ((__REG_VALUE_TYPE((v), reg32_t) << BP_MMDC_MDMISC_DDR_TYPE) & BM_MMDC_MDMISC_DDR_TYPE)

#ifndef __LANGUAGE_ASM__
//! @brief Set the DDR_TYPE field to a new value.
#define BW_MMDC_MDMISC_DDR_TYPE(v)   (HW_MMDC_MDMISC_WR((HW_MMDC_MDMISC_RD() & ~BM_MMDC_MDMISC_DDR_TYPE) | BF_MMDC_MDMISC_DDR_TYPE(v)))
#endif


/* --- Register HW_MMDC_MDMISC, field DDR_4_BANK[5] (RW)
 *
 * Number of banks per DDR device. When this bit is set to "1" then the MMDC will work with DDR
 * device of 4 banks.
 *
 * Values:
 * 0 - 8 banks device is being used. (Default)
 * 1 - 4 banks device is being used
 */

#define BP_MMDC_MDMISC_DDR_4_BANK      (5)      //!< Bit position for MMDC_MDMISC_DDR_4_BANK.
#define BM_MMDC_MDMISC_DDR_4_BANK      (0x00000020)  //!< Bit mask for MMDC_MDMISC_DDR_4_BANK.

//! @brief Get value of MMDC_MDMISC_DDR_4_BANK from a register value.
#define BG_MMDC_MDMISC_DDR_4_BANK(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_MMDC_MDMISC_DDR_4_BANK) >> BP_MMDC_MDMISC_DDR_4_BANK)

//! @brief Format value for bitfield MMDC_MDMISC_DDR_4_BANK.
#define BF_MMDC_MDMISC_DDR_4_BANK(v)   ((__REG_VALUE_TYPE((v), reg32_t) << BP_MMDC_MDMISC_DDR_4_BANK) & BM_MMDC_MDMISC_DDR_4_BANK)

#ifndef __LANGUAGE_ASM__
//! @brief Set the DDR_4_BANK field to a new value.
#define BW_MMDC_MDMISC_DDR_4_BANK(v)   (HW_MMDC_MDMISC_WR((HW_MMDC_MDMISC_RD() & ~BM_MMDC_MDMISC_DDR_4_BANK) | BF_MMDC_MDMISC_DDR_4_BANK(v)))
#endif


/* --- Register HW_MMDC_MDMISC, field RALAT[8:6] (RW)
 *
 * Read Additional Latency. This field determines the additional read latency which is added to CAS
 * latency and internal delays for which the MMDC will retrieve the read data from the internal
 * FIFO. This field is used to compensate on board/chip delays. In LPDDR2 mode 2 extra cycles will
 * be added internally in order to compensate tDQSCK delay.
 *
 * Values:
 * 0x0 - no additional latency.
 * 0x1 - 1 cycle additional latency.
 * 0x2 - 2 cycles additional latency.
 * 0x3 - 3 cycles additional latency.
 * 0x4 - 4 cycles additional latency.
 * 0x5 - 5 cycles additional latency.
 * 0x6 - 6 cycles additional latency.
 * 0x7 - 7 cycles additional latency.
 */

#define BP_MMDC_MDMISC_RALAT      (6)      //!< Bit position for MMDC_MDMISC_RALAT.
#define BM_MMDC_MDMISC_RALAT      (0x000001c0)  //!< Bit mask for MMDC_MDMISC_RALAT.

//! @brief Get value of MMDC_MDMISC_RALAT from a register value.
#define BG_MMDC_MDMISC_RALAT(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_MMDC_MDMISC_RALAT) >> BP_MMDC_MDMISC_RALAT)

//! @brief Format value for bitfield MMDC_MDMISC_RALAT.
#define BF_MMDC_MDMISC_RALAT(v)   ((__REG_VALUE_TYPE((v), reg32_t) << BP_MMDC_MDMISC_RALAT) & BM_MMDC_MDMISC_RALAT)

#ifndef __LANGUAGE_ASM__
//! @brief Set the RALAT field to a new value.
#define BW_MMDC_MDMISC_RALAT(v)   (HW_MMDC_MDMISC_WR((HW_MMDC_MDMISC_RD() & ~BM_MMDC_MDMISC_RALAT) | BF_MMDC_MDMISC_RALAT(v)))
#endif


/* --- Register HW_MMDC_MDMISC, field MIF3_MODE[10:9] (RW)
 *
 * Command prediction working mode. This field determines the level of command prediction that will
 * be used by the MMDC
 *
 * Values:
 * 00 - Disable prediction.
 * 01 - Enable prediction based on : Valid access on first pipe line stage.
 * 10 - Enable prediction based on: Valid access on first pipe line stage, Valid access on axi bus.
 * 11 - Enable prediction based on: Valid access on first pipe line stage, Valid access on axi bus, Next
 *     miss access from access queue.
 */

#define BP_MMDC_MDMISC_MIF3_MODE      (9)      //!< Bit position for MMDC_MDMISC_MIF3_MODE.
#define BM_MMDC_MDMISC_MIF3_MODE      (0x00000600)  //!< Bit mask for MMDC_MDMISC_MIF3_MODE.

//! @brief Get value of MMDC_MDMISC_MIF3_MODE from a register value.
#define BG_MMDC_MDMISC_MIF3_MODE(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_MMDC_MDMISC_MIF3_MODE) >> BP_MMDC_MDMISC_MIF3_MODE)

//! @brief Format value for bitfield MMDC_MDMISC_MIF3_MODE.
#define BF_MMDC_MDMISC_MIF3_MODE(v)   ((__REG_VALUE_TYPE((v), reg32_t) << BP_MMDC_MDMISC_MIF3_MODE) & BM_MMDC_MDMISC_MIF3_MODE)

#ifndef __LANGUAGE_ASM__
//! @brief Set the MIF3_MODE field to a new value.
#define BW_MMDC_MDMISC_MIF3_MODE(v)   (HW_MMDC_MDMISC_WR((HW_MMDC_MDMISC_RD() & ~BM_MMDC_MDMISC_MIF3_MODE) | BF_MMDC_MDMISC_MIF3_MODE(v)))
#endif


/* --- Register HW_MMDC_MDMISC, field LPDDR2_S2[11] (RW)
 *
 * LPDDR2 S2 device type indication. In case LPDDR2 device is used (DDR_TYPE = 0x1), this bit will
 * indicate whether S2 or S4 device is used. This bit should be cleared in DDR3 mode
 *
 * Values:
 * 0x0 - LPDDR2-S4 device is used.
 * 0x1 - LPDDR2-S2 device is used.
 */

#define BP_MMDC_MDMISC_LPDDR2_S2      (11)      //!< Bit position for MMDC_MDMISC_LPDDR2_S2.
#define BM_MMDC_MDMISC_LPDDR2_S2      (0x00000800)  //!< Bit mask for MMDC_MDMISC_LPDDR2_S2.

//! @brief Get value of MMDC_MDMISC_LPDDR2_S2 from a register value.
#define BG_MMDC_MDMISC_LPDDR2_S2(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_MMDC_MDMISC_LPDDR2_S2) >> BP_MMDC_MDMISC_LPDDR2_S2)

//! @brief Format value for bitfield MMDC_MDMISC_LPDDR2_S2.
#define BF_MMDC_MDMISC_LPDDR2_S2(v)   ((__REG_VALUE_TYPE((v), reg32_t) << BP_MMDC_MDMISC_LPDDR2_S2) & BM_MMDC_MDMISC_LPDDR2_S2)

#ifndef __LANGUAGE_ASM__
//! @brief Set the LPDDR2_S2 field to a new value.
#define BW_MMDC_MDMISC_LPDDR2_S2(v)   (HW_MMDC_MDMISC_WR((HW_MMDC_MDMISC_RD() & ~BM_MMDC_MDMISC_LPDDR2_S2) | BF_MMDC_MDMISC_LPDDR2_S2(v)))
#endif


/* --- Register HW_MMDC_MDMISC, field BI_ON[12] (RW)
 *
 * Bank Interleaving On. This bit controls the organization of the bank, row and column address
 * bits. For further information see .
 *
 * Values:
 * 0 - Banks are not interleaved, and address will be decoded as bank-row-column
 * 1 - Banks are interleaved, and address will be decoded as row-bank-column
 */

#define BP_MMDC_MDMISC_BI_ON      (12)      //!< Bit position for MMDC_MDMISC_BI_ON.
#define BM_MMDC_MDMISC_BI_ON      (0x00001000)  //!< Bit mask for MMDC_MDMISC_BI_ON.

//! @brief Get value of MMDC_MDMISC_BI_ON from a register value.
#define BG_MMDC_MDMISC_BI_ON(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_MMDC_MDMISC_BI_ON) >> BP_MMDC_MDMISC_BI_ON)

//! @brief Format value for bitfield MMDC_MDMISC_BI_ON.
#define BF_MMDC_MDMISC_BI_ON(v)   ((__REG_VALUE_TYPE((v), reg32_t) << BP_MMDC_MDMISC_BI_ON) & BM_MMDC_MDMISC_BI_ON)

#ifndef __LANGUAGE_ASM__
//! @brief Set the BI_ON field to a new value.
#define BW_MMDC_MDMISC_BI_ON(v)   (HW_MMDC_MDMISC_WR((HW_MMDC_MDMISC_RD() & ~BM_MMDC_MDMISC_BI_ON) | BF_MMDC_MDMISC_BI_ON(v)))
#endif


/* --- Register HW_MMDC_MDMISC, field WALAT[17:16] (RW)
 *
 * Write Additional latency. In case the write-leveling calibration process indicates a delay around
 * half cycle (between CK and the associated DQS) then this field must be configured accordingly.
 * This field will add delay on the obe I/O control, which will compensate on the additional write
 * leveling delay on DQS and prevent the DQS from being croped.
 *
 * Values:
 * 0x0 - No additional latency required.
 * 0x1 - 1 cycle additional delay
 * 0x2 - 2 cycles additional delay
 * 0x3 - 3 cycles additional delay
 */

#define BP_MMDC_MDMISC_WALAT      (16)      //!< Bit position for MMDC_MDMISC_WALAT.
#define BM_MMDC_MDMISC_WALAT      (0x00030000)  //!< Bit mask for MMDC_MDMISC_WALAT.

//! @brief Get value of MMDC_MDMISC_WALAT from a register value.
#define BG_MMDC_MDMISC_WALAT(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_MMDC_MDMISC_WALAT) >> BP_MMDC_MDMISC_WALAT)

//! @brief Format value for bitfield MMDC_MDMISC_WALAT.
#define BF_MMDC_MDMISC_WALAT(v)   ((__REG_VALUE_TYPE((v), reg32_t) << BP_MMDC_MDMISC_WALAT) & BM_MMDC_MDMISC_WALAT)

#ifndef __LANGUAGE_ASM__
//! @brief Set the WALAT field to a new value.
#define BW_MMDC_MDMISC_WALAT(v)   (HW_MMDC_MDMISC_WR((HW_MMDC_MDMISC_RD() & ~BM_MMDC_MDMISC_WALAT) | BF_MMDC_MDMISC_WALAT(v)))
#endif


/* --- Register HW_MMDC_MDMISC, field LHD[18] (RW)
 *
 * Latency hiding disable. This is a debug feature. When set to "1" the MMDC will handle one
 * read/write access at a time. Meaning that the MMDC pipe-line will be limitted to 1 open access
 * (next AXI address phase will be acknowledged if the current AXI data phase had finished)
 *
 * Values:
 * 0 - Latency hiding on.
 * 1 - Latency hiding disable.
 */

#define BP_MMDC_MDMISC_LHD      (18)      //!< Bit position for MMDC_MDMISC_LHD.
#define BM_MMDC_MDMISC_LHD      (0x00040000)  //!< Bit mask for MMDC_MDMISC_LHD.

//! @brief Get value of MMDC_MDMISC_LHD from a register value.
#define BG_MMDC_MDMISC_LHD(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_MMDC_MDMISC_LHD) >> BP_MMDC_MDMISC_LHD)

//! @brief Format value for bitfield MMDC_MDMISC_LHD.
#define BF_MMDC_MDMISC_LHD(v)   ((__REG_VALUE_TYPE((v), reg32_t) << BP_MMDC_MDMISC_LHD) & BM_MMDC_MDMISC_LHD)

#ifndef __LANGUAGE_ASM__
//! @brief Set the LHD field to a new value.
#define BW_MMDC_MDMISC_LHD(v)   (HW_MMDC_MDMISC_WR((HW_MMDC_MDMISC_RD() & ~BM_MMDC_MDMISC_LHD) | BF_MMDC_MDMISC_LHD(v)))
#endif


/* --- Register HW_MMDC_MDMISC, field ADDR_MIRROR[19] (RW)
 *
 * Address mirroring. This feature is not supported for LPDDR2 memories. But only for DDR2 or DDR3
 * memories. For further information see .
 *
 * Values:
 * 0 - Address mirroring disabled.
 * 1 - Address mirroring enabled.
 */

#define BP_MMDC_MDMISC_ADDR_MIRROR      (19)      //!< Bit position for MMDC_MDMISC_ADDR_MIRROR.
#define BM_MMDC_MDMISC_ADDR_MIRROR      (0x00080000)  //!< Bit mask for MMDC_MDMISC_ADDR_MIRROR.

//! @brief Get value of MMDC_MDMISC_ADDR_MIRROR from a register value.
#define BG_MMDC_MDMISC_ADDR_MIRROR(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_MMDC_MDMISC_ADDR_MIRROR) >> BP_MMDC_MDMISC_ADDR_MIRROR)

//! @brief Format value for bitfield MMDC_MDMISC_ADDR_MIRROR.
#define BF_MMDC_MDMISC_ADDR_MIRROR(v)   ((__REG_VALUE_TYPE((v), reg32_t) << BP_MMDC_MDMISC_ADDR_MIRROR) & BM_MMDC_MDMISC_ADDR_MIRROR)

#ifndef __LANGUAGE_ASM__
//! @brief Set the ADDR_MIRROR field to a new value.
#define BW_MMDC_MDMISC_ADDR_MIRROR(v)   (HW_MMDC_MDMISC_WR((HW_MMDC_MDMISC_RD() & ~BM_MMDC_MDMISC_ADDR_MIRROR) | BF_MMDC_MDMISC_ADDR_MIRROR(v)))
#endif


/* --- Register HW_MMDC_MDMISC, field CALIB_PER_CS[20] (RW)
 *
 * Number of chip-select for calibration process. This bit determines the chip-select index that the
 * associated calibration is targetted to. Relevant for read, write, write leveling and read DQS
 * gating calibrations
 *
 * Values:
 * 0 - Calibration is targetted to CS0
 * 1 - Calibration is targetted to CS1
 */

#define BP_MMDC_MDMISC_CALIB_PER_CS      (20)      //!< Bit position for MMDC_MDMISC_CALIB_PER_CS.
#define BM_MMDC_MDMISC_CALIB_PER_CS      (0x00100000)  //!< Bit mask for MMDC_MDMISC_CALIB_PER_CS.

//! @brief Get value of MMDC_MDMISC_CALIB_PER_CS from a register value.
#define BG_MMDC_MDMISC_CALIB_PER_CS(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_MMDC_MDMISC_CALIB_PER_CS) >> BP_MMDC_MDMISC_CALIB_PER_CS)

//! @brief Format value for bitfield MMDC_MDMISC_CALIB_PER_CS.
#define BF_MMDC_MDMISC_CALIB_PER_CS(v)   ((__REG_VALUE_TYPE((v), reg32_t) << BP_MMDC_MDMISC_CALIB_PER_CS) & BM_MMDC_MDMISC_CALIB_PER_CS)

#ifndef __LANGUAGE_ASM__
//! @brief Set the CALIB_PER_CS field to a new value.
#define BW_MMDC_MDMISC_CALIB_PER_CS(v)   (HW_MMDC_MDMISC_WR((HW_MMDC_MDMISC_RD() & ~BM_MMDC_MDMISC_CALIB_PER_CS) | BF_MMDC_MDMISC_CALIB_PER_CS(v)))
#endif


/* --- Register HW_MMDC_MDMISC, field CS1_RDY[30] (RO)
 *
 * External status device on CS1. This is a read-only status bit, that indicates whether the
 * external memory is in wake-up period.
 *
 * Values:
 * 0 - Device in wake-up period.
 * 1 - Device is ready for initialization.
 */

#define BP_MMDC_MDMISC_CS1_RDY      (30)      //!< Bit position for MMDC_MDMISC_CS1_RDY.
#define BM_MMDC_MDMISC_CS1_RDY      (0x40000000)  //!< Bit mask for MMDC_MDMISC_CS1_RDY.

//! @brief Get value of MMDC_MDMISC_CS1_RDY from a register value.
#define BG_MMDC_MDMISC_CS1_RDY(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_MMDC_MDMISC_CS1_RDY) >> BP_MMDC_MDMISC_CS1_RDY)


/* --- Register HW_MMDC_MDMISC, field CS0_RDY[31] (RO)
 *
 * External status device on CS0. This is a read-only status bit, that indicates whether the
 * external memory is in wake-up period.
 *
 * Values:
 * 0 - Device in wake-up period.
 * 1 - Device is ready for initialization.
 */

#define BP_MMDC_MDMISC_CS0_RDY      (31)      //!< Bit position for MMDC_MDMISC_CS0_RDY.
#define BM_MMDC_MDMISC_CS0_RDY      (0x80000000)  //!< Bit mask for MMDC_MDMISC_CS0_RDY.

//! @brief Get value of MMDC_MDMISC_CS0_RDY from a register value.
#define BG_MMDC_MDMISC_CS0_RDY(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_MMDC_MDMISC_CS0_RDY) >> BP_MMDC_MDMISC_CS0_RDY)


//-------------------------------------------------------------------------------------------
// HW_MMDC_MDSCR - MMDC Core Special Command Register
//-------------------------------------------------------------------------------------------

#ifndef __LANGUAGE_ASM__
/*!
 * @brief HW_MMDC_MDSCR - MMDC Core Special Command Register (RW)
 *
 * Reset value: 0x00000000
 *
 * This register is used to issue special commands manually toward the external DDR device (such as
 * load mode register, manual self refresh, manual precharge and so on). Every write to this
 * register will be interpreted as a command, and a read from this register will show the last
 * command that was executed.  Every write to this register will result in one special command, and
 * the IP bus will assert ips_xfr_wait as long as the special command is being carried out.
 * Supported Mode Of Operations:  For Channel 0: All  For Channel 1: LP2_2ch_x16, LP2_2ch_x32
 */
typedef union _hw_mmdc_mdscr
{
    reg32_t U;
    struct _hw_mmdc_mdscr_bitfields
    {
        unsigned CMD_BA : 3; //!< [2:0] Bank Address.
        unsigned CMD_CS : 1; //!< [3] Chip Select.
        unsigned CMD : 3; //!< [6:4] Command.
        unsigned RESERVED0 : 2; //!< [8:7] Reserved.
        unsigned WL_EN : 1; //!< [9] DQS pads direction.
        unsigned MRR_READ_DATA_VALID : 1; //!< [10] MRR read data valid.
        unsigned RESERVED1 : 3; //!< [13:11] Reserved
        unsigned CON_ACK : 1; //!< [14] Configuration acknowledge.
        unsigned CON_REQ : 1; //!< [15] Configuration request.
        unsigned CMD_ADDR_LSB : 8; //!< [23:16] Command/Address LSB.
        unsigned CMD_ADDR_MSB : 8; //!< [31:24] Command/Address MSB.
    } B;
} hw_mmdc_mdscr_t;
#endif

/*
 * constants & macros for entire MMDC_MDSCR register
 */
#define HW_MMDC_MDSCR_ADDR      (REGS_MMDC_BASE + 0x1c)

#ifndef __LANGUAGE_ASM__
#define HW_MMDC_MDSCR           (*(volatile hw_mmdc_mdscr_t *) HW_MMDC_MDSCR_ADDR)
#define HW_MMDC_MDSCR_RD()      (HW_MMDC_MDSCR.U)
#define HW_MMDC_MDSCR_WR(v)     (HW_MMDC_MDSCR.U = (v))
#define HW_MMDC_MDSCR_SET(v)    (HW_MMDC_MDSCR_WR(HW_MMDC_MDSCR_RD() |  (v)))
#define HW_MMDC_MDSCR_CLR(v)    (HW_MMDC_MDSCR_WR(HW_MMDC_MDSCR_RD() & ~(v)))
#define HW_MMDC_MDSCR_TOG(v)    (HW_MMDC_MDSCR_WR(HW_MMDC_MDSCR_RD() ^  (v)))
#endif

/*
 * constants & macros for individual MMDC_MDSCR bitfields
 */

/* --- Register HW_MMDC_MDSCR, field CMD_BA[2:0] (RW)
 *
 * Bank Address. This field determines the address of the bank within the selected chip-select where
 * the command is targetted to.
 *
 * Values:
 * 0x0 - bank address 0
 * 0x1 - bank address 1
 * 0x2 - bank address 2
 * 0x7 - bank address 7
 */

#define BP_MMDC_MDSCR_CMD_BA      (0)      //!< Bit position for MMDC_MDSCR_CMD_BA.
#define BM_MMDC_MDSCR_CMD_BA      (0x00000007)  //!< Bit mask for MMDC_MDSCR_CMD_BA.

//! @brief Get value of MMDC_MDSCR_CMD_BA from a register value.
#define BG_MMDC_MDSCR_CMD_BA(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_MMDC_MDSCR_CMD_BA) >> BP_MMDC_MDSCR_CMD_BA)

//! @brief Format value for bitfield MMDC_MDSCR_CMD_BA.
#define BF_MMDC_MDSCR_CMD_BA(v)   ((__REG_VALUE_TYPE((v), reg32_t) << BP_MMDC_MDSCR_CMD_BA) & BM_MMDC_MDSCR_CMD_BA)

#ifndef __LANGUAGE_ASM__
//! @brief Set the CMD_BA field to a new value.
#define BW_MMDC_MDSCR_CMD_BA(v)   (HW_MMDC_MDSCR_WR((HW_MMDC_MDSCR_RD() & ~BM_MMDC_MDSCR_CMD_BA) | BF_MMDC_MDSCR_CMD_BA(v)))
#endif


/* --- Register HW_MMDC_MDSCR, field CMD_CS[3] (RW)
 *
 * Chip Select. This field determines which chip select the command is targeted to
 *
 * Values:
 * 0 - to Chip-select 0
 * 1 - to Chip-select 1
 */

#define BP_MMDC_MDSCR_CMD_CS      (3)      //!< Bit position for MMDC_MDSCR_CMD_CS.
#define BM_MMDC_MDSCR_CMD_CS      (0x00000008)  //!< Bit mask for MMDC_MDSCR_CMD_CS.

//! @brief Get value of MMDC_MDSCR_CMD_CS from a register value.
#define BG_MMDC_MDSCR_CMD_CS(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_MMDC_MDSCR_CMD_CS) >> BP_MMDC_MDSCR_CMD_CS)

//! @brief Format value for bitfield MMDC_MDSCR_CMD_CS.
#define BF_MMDC_MDSCR_CMD_CS(v)   ((__REG_VALUE_TYPE((v), reg32_t) << BP_MMDC_MDSCR_CMD_CS) & BM_MMDC_MDSCR_CMD_CS)

#ifndef __LANGUAGE_ASM__
//! @brief Set the CMD_CS field to a new value.
#define BW_MMDC_MDSCR_CMD_CS(v)   (HW_MMDC_MDSCR_WR((HW_MMDC_MDSCR_RD() & ~BM_MMDC_MDSCR_CMD_CS) | BF_MMDC_MDSCR_CMD_CS(v)))
#endif


/* --- Register HW_MMDC_MDSCR, field CMD[6:4] (RW)
 *
 * Command. This field contains the command to be executed. This field will be automatically cleared
 * after the command will be send to the DDR memory.
 *
 * Values:
 * 0x0 - Normal operation
 * 0x1 - Precharge all, command is sent independently of bank status (set correct CMD_CS). Will be issued
 *     even if banks are closed. Mainly used for init sequence purpose.
 * 0x2 - Auto-Refresh Command (set correct CMD_CS).
 * 0x3 - Load Mode Register Command ( DDR2/ DDR3, set correct CMD_CS, CMD_BA, CMD_ADDR_LSB, CMD_ADDR_MSB),
 *     MRW Command (LPDDR2, set correct CMD_CS, MR_OP, MR_ADDR)
 * 0x4 - ZQ calibration ( DDR2/ DDR3, set correct CMD_CS, {CMD_ADDR_MSB,CMD_ADDR_LSB} = 0x400 or 0x0 )
 * 0x5 - Precharge all, only if banks open (set correct CMD_CS).
 * 0x6 - MRR command (LPDDR2, set correct CMD_CS, MR_ADDR)
 * 0x7 - Reserved
 */

#define BP_MMDC_MDSCR_CMD      (4)      //!< Bit position for MMDC_MDSCR_CMD.
#define BM_MMDC_MDSCR_CMD      (0x00000070)  //!< Bit mask for MMDC_MDSCR_CMD.

//! @brief Get value of MMDC_MDSCR_CMD from a register value.
#define BG_MMDC_MDSCR_CMD(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_MMDC_MDSCR_CMD) >> BP_MMDC_MDSCR_CMD)

//! @brief Format value for bitfield MMDC_MDSCR_CMD.
#define BF_MMDC_MDSCR_CMD(v)   ((__REG_VALUE_TYPE((v), reg32_t) << BP_MMDC_MDSCR_CMD) & BM_MMDC_MDSCR_CMD)

#ifndef __LANGUAGE_ASM__
//! @brief Set the CMD field to a new value.
#define BW_MMDC_MDSCR_CMD(v)   (HW_MMDC_MDSCR_WR((HW_MMDC_MDSCR_RD() & ~BM_MMDC_MDSCR_CMD) | BF_MMDC_MDSCR_CMD(v)))
#endif


/* --- Register HW_MMDC_MDSCR, field WL_EN[9] (RW)
 *
 * DQS pads direction. This bit controls the DQS pads direction during write-leveling calibration
 * process. Before starting the write-leveling calibration process this bit should be set to "1". It
 * should be set to "0" when sending write leveling exit command. For further information see .
 *
 * Values:
 * 0 - Exit write leveling mode or stay in normal mode.
 * 1 - Write leveling entry command was sent.
 */

#define BP_MMDC_MDSCR_WL_EN      (9)      //!< Bit position for MMDC_MDSCR_WL_EN.
#define BM_MMDC_MDSCR_WL_EN      (0x00000200)  //!< Bit mask for MMDC_MDSCR_WL_EN.

//! @brief Get value of MMDC_MDSCR_WL_EN from a register value.
#define BG_MMDC_MDSCR_WL_EN(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_MMDC_MDSCR_WL_EN) >> BP_MMDC_MDSCR_WL_EN)

//! @brief Format value for bitfield MMDC_MDSCR_WL_EN.
#define BF_MMDC_MDSCR_WL_EN(v)   ((__REG_VALUE_TYPE((v), reg32_t) << BP_MMDC_MDSCR_WL_EN) & BM_MMDC_MDSCR_WL_EN)

#ifndef __LANGUAGE_ASM__
//! @brief Set the WL_EN field to a new value.
#define BW_MMDC_MDSCR_WL_EN(v)   (HW_MMDC_MDSCR_WR((HW_MMDC_MDSCR_RD() & ~BM_MMDC_MDSCR_WL_EN) | BF_MMDC_MDSCR_WL_EN(v)))
#endif


/* --- Register HW_MMDC_MDSCR, field MRR_READ_DATA_VALID[10] (RO)
 *
 * MRR read data valid. This field indicates that read data is valid at MDMRR register This field is
 * relevant only for LPDDR2 mode
 *
 * Values:
 * 0 - Cleared upon the assertion of MRR command
 * 1 - Set after MRR data is valid and stored at MDMRR register.
 */

#define BP_MMDC_MDSCR_MRR_READ_DATA_VALID      (10)      //!< Bit position for MMDC_MDSCR_MRR_READ_DATA_VALID.
#define BM_MMDC_MDSCR_MRR_READ_DATA_VALID      (0x00000400)  //!< Bit mask for MMDC_MDSCR_MRR_READ_DATA_VALID.

//! @brief Get value of MMDC_MDSCR_MRR_READ_DATA_VALID from a register value.
#define BG_MMDC_MDSCR_MRR_READ_DATA_VALID(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_MMDC_MDSCR_MRR_READ_DATA_VALID) >> BP_MMDC_MDSCR_MRR_READ_DATA_VALID)


/* --- Register HW_MMDC_MDSCR, field CON_ACK[14] (RO)
 *
 * Configuration acknowledge. Whenever this bit is set, it is permitted to configure MMDC IP
 * registers.
 *
 * Values:
 * 0 - Configuration of MMDC registers is forbidden.
 * 1 - Configuration of MMDC registers is permitted.
 */

#define BP_MMDC_MDSCR_CON_ACK      (14)      //!< Bit position for MMDC_MDSCR_CON_ACK.
#define BM_MMDC_MDSCR_CON_ACK      (0x00004000)  //!< Bit mask for MMDC_MDSCR_CON_ACK.

//! @brief Get value of MMDC_MDSCR_CON_ACK from a register value.
#define BG_MMDC_MDSCR_CON_ACK(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_MMDC_MDSCR_CON_ACK) >> BP_MMDC_MDSCR_CON_ACK)


/* --- Register HW_MMDC_MDSCR, field CON_REQ[15] (RW)
 *
 * Configuration request. When this bit is set then the MMDC will clean the pending AXI accesses and
 * will prevent from further AXI accesses to be acknowledged. This field guarantee safe
 * configuration (or change configuration) of the MMDC while no access is in process and prevents an
 * unexpected behaviour. After setting this bit, it is needed to poll on CON_ACK until it is set to
 * "1". When CON_ACK is asserted then configuration is permitted. After configuration is completed
 * then this bit must be deasserted in order to process further AXI accesses. This bit is asserted
 * at the end of the reset sequence, meaning that the MMDC is waiting to configure and intialize the
 * external memory before accepting any AXI accesses. Configuration request/acknowledge mechanism
 * should be used for the following procedures: changing of timing parameters , during calibration
 * process or driving commands via MDSCR[CMD]
 *
 * Values:
 * 0 - No request to configure MMDC.
 * 1 - A request to configure MMDC is valid
 */

#define BP_MMDC_MDSCR_CON_REQ      (15)      //!< Bit position for MMDC_MDSCR_CON_REQ.
#define BM_MMDC_MDSCR_CON_REQ      (0x00008000)  //!< Bit mask for MMDC_MDSCR_CON_REQ.

//! @brief Get value of MMDC_MDSCR_CON_REQ from a register value.
#define BG_MMDC_MDSCR_CON_REQ(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_MMDC_MDSCR_CON_REQ) >> BP_MMDC_MDSCR_CON_REQ)

//! @brief Format value for bitfield MMDC_MDSCR_CON_REQ.
#define BF_MMDC_MDSCR_CON_REQ(v)   ((__REG_VALUE_TYPE((v), reg32_t) << BP_MMDC_MDSCR_CON_REQ) & BM_MMDC_MDSCR_CON_REQ)

#ifndef __LANGUAGE_ASM__
//! @brief Set the CON_REQ field to a new value.
#define BW_MMDC_MDSCR_CON_REQ(v)   (HW_MMDC_MDSCR_WR((HW_MMDC_MDSCR_RD() & ~BM_MMDC_MDSCR_CON_REQ) | BF_MMDC_MDSCR_CON_REQ(v)))
#endif


/* --- Register HW_MMDC_MDSCR, field CMD_ADDR_LSB[23:16] (RW)
 *
 * Command/Address LSB. This field indicates the LSB of the command/Address In LPDDR2 this field
 * indicates the MRR/MRW address
 */

#define BP_MMDC_MDSCR_CMD_ADDR_LSB      (16)      //!< Bit position for MMDC_MDSCR_CMD_ADDR_LSB.
#define BM_MMDC_MDSCR_CMD_ADDR_LSB      (0x00ff0000)  //!< Bit mask for MMDC_MDSCR_CMD_ADDR_LSB.

//! @brief Get value of MMDC_MDSCR_CMD_ADDR_LSB from a register value.
#define BG_MMDC_MDSCR_CMD_ADDR_LSB(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_MMDC_MDSCR_CMD_ADDR_LSB) >> BP_MMDC_MDSCR_CMD_ADDR_LSB)

//! @brief Format value for bitfield MMDC_MDSCR_CMD_ADDR_LSB.
#define BF_MMDC_MDSCR_CMD_ADDR_LSB(v)   ((__REG_VALUE_TYPE((v), reg32_t) << BP_MMDC_MDSCR_CMD_ADDR_LSB) & BM_MMDC_MDSCR_CMD_ADDR_LSB)

#ifndef __LANGUAGE_ASM__
//! @brief Set the CMD_ADDR_LSB field to a new value.
#define BW_MMDC_MDSCR_CMD_ADDR_LSB(v)   (HW_MMDC_MDSCR_WR((HW_MMDC_MDSCR_RD() & ~BM_MMDC_MDSCR_CMD_ADDR_LSB) | BF_MMDC_MDSCR_CMD_ADDR_LSB(v)))
#endif

/* --- Register HW_MMDC_MDSCR, field CMD_ADDR_MSB[31:24] (RW)
 *
 * Command/Address MSB. This field indicates the MSB of the command/Address. In LPDDR2 this field
 * indicates the MRW operand
 */

#define BP_MMDC_MDSCR_CMD_ADDR_MSB      (24)      //!< Bit position for MMDC_MDSCR_CMD_ADDR_MSB.
#define BM_MMDC_MDSCR_CMD_ADDR_MSB      (0xff000000)  //!< Bit mask for MMDC_MDSCR_CMD_ADDR_MSB.

//! @brief Get value of MMDC_MDSCR_CMD_ADDR_MSB from a register value.
#define BG_MMDC_MDSCR_CMD_ADDR_MSB(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_MMDC_MDSCR_CMD_ADDR_MSB) >> BP_MMDC_MDSCR_CMD_ADDR_MSB)

//! @brief Format value for bitfield MMDC_MDSCR_CMD_ADDR_MSB.
#define BF_MMDC_MDSCR_CMD_ADDR_MSB(v)   ((__REG_VALUE_TYPE((v), reg32_t) << BP_MMDC_MDSCR_CMD_ADDR_MSB) & BM_MMDC_MDSCR_CMD_ADDR_MSB)

#ifndef __LANGUAGE_ASM__
//! @brief Set the CMD_ADDR_MSB field to a new value.
#define BW_MMDC_MDSCR_CMD_ADDR_MSB(v)   (HW_MMDC_MDSCR_WR((HW_MMDC_MDSCR_RD() & ~BM_MMDC_MDSCR_CMD_ADDR_MSB) | BF_MMDC_MDSCR_CMD_ADDR_MSB(v)))
#endif

//-------------------------------------------------------------------------------------------
// HW_MMDC_MDREF - MMDC Core Refresh Control Register
//-------------------------------------------------------------------------------------------

#ifndef __LANGUAGE_ASM__
/*!
 * @brief HW_MMDC_MDREF - MMDC Core Refresh Control Register (RW)
 *
 * Reset value: 0x0000c000
 *
 * This register determines the refresh scheme that will be executed toward the DDR device. It
 * specifies how often a refresh cycle occurs and how many refresh commands will be executed every
 * refresh cycle.  For further information see .  The following tables show examples of possible
 * refresh schemes.   Refresh rate example for REF_SEL = 0          REFR[2:0]    Number of refresh
 * commands every 64KHz    Average periodic refresh rate  (tREFI)    System Refresh period
 * 0x0    1    15.6 μs    tRFC      0x1    2    7.8 μs    2*tRFC      0x3    4    3.9μs    4*tRFC
 * 0x7    8    1.95 μs    8*tRFC        Refresh rate example for REF_SEL = 1          REFR[2:0]
 * Number of refresh commands every 32KHz    Average periodic refresh rate  (tREFI)    System
 * Refresh period        0x1    2    15.6 μs    2*tRFC      0x3    4    7.8 μs    4*tRFC      0x7
 * 8    3.9μs    8*tRFC        Refresh rate example for REF_SEL = 2@ 400MHz           REFR[2:0]
 * Number of refresh commands every refresh cycle    REF_CNT    Average periodic refresh rate
 * (tREFI)    System Refresh period        0x0    1    0x618    3.9 μs    tRFC      0x1    2
 * 0xC30    3.9 μs    2*tRFC      0x2    3    0x1248    3.9μs    3*tRFC      0x3    4    0x1860
 * 3.9 μs    4*tRFC       Other refresh configurations are also allowed; the configuration values in
 * the tables above are only examples for obtaining the desired average periodic refresh rate.  If
 * the required average periodic refresh rate (tREFI) is kept, all of the rows will be refreshed in
 * every refresh window. Because the memory device issues additional refresh commands for every
 * refresh it receives, the tREFI remains the same across the device, regardless of its number of
 * rows. This is particularly relevant in the tRFC parameter, which becomes bigger as the density
 * increases.  Supported Mode Of Operations:  For Channel 0: All  For Channel 1: LP2_2ch_x16,
 * LP2_2ch_x32
 */
typedef union _hw_mmdc_mdref
{
    reg32_t U;
    struct _hw_mmdc_mdref_bitfields
    {
        unsigned START_REF : 1; //!< [0] Manual start of refresh cycle.
        unsigned RESERVED0 : 10; //!< [10:1] Reserved
        unsigned REFR : 3; //!< [13:11] Refresh Rate.
        unsigned REF_SEL : 2; //!< [15:14] Refresh Selector.
        unsigned REF_CNT : 16; //!< [31:16] Refresh Counter at DDR clock period If REF_SEL equals '2' a refresh cycle will begin every amount of DDR cycles configured in this field.
    } B;
} hw_mmdc_mdref_t;
#endif

/*
 * constants & macros for entire MMDC_MDREF register
 */
#define HW_MMDC_MDREF_ADDR      (REGS_MMDC_BASE + 0x20)

#ifndef __LANGUAGE_ASM__
#define HW_MMDC_MDREF           (*(volatile hw_mmdc_mdref_t *) HW_MMDC_MDREF_ADDR)
#define HW_MMDC_MDREF_RD()      (HW_MMDC_MDREF.U)
#define HW_MMDC_MDREF_WR(v)     (HW_MMDC_MDREF.U = (v))
#define HW_MMDC_MDREF_SET(v)    (HW_MMDC_MDREF_WR(HW_MMDC_MDREF_RD() |  (v)))
#define HW_MMDC_MDREF_CLR(v)    (HW_MMDC_MDREF_WR(HW_MMDC_MDREF_RD() & ~(v)))
#define HW_MMDC_MDREF_TOG(v)    (HW_MMDC_MDREF_WR(HW_MMDC_MDREF_RD() ^  (v)))
#endif

/*
 * constants & macros for individual MMDC_MDREF bitfields
 */

/* --- Register HW_MMDC_MDREF, field START_REF[0] (RW)
 *
 * Manual start of refresh cycle. When this field is set to '1' the MMDC will start a refresh cycle
 * immediately according to number of refresh commands that are configured in 'REFR' field. This bit
 * returns to zero automatically.
 *
 * Values:
 * 0 - Do nothing.
 * 1 - Start a refresh cycle.
 */

#define BP_MMDC_MDREF_START_REF      (0)      //!< Bit position for MMDC_MDREF_START_REF.
#define BM_MMDC_MDREF_START_REF      (0x00000001)  //!< Bit mask for MMDC_MDREF_START_REF.

//! @brief Get value of MMDC_MDREF_START_REF from a register value.
#define BG_MMDC_MDREF_START_REF(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_MMDC_MDREF_START_REF) >> BP_MMDC_MDREF_START_REF)

//! @brief Format value for bitfield MMDC_MDREF_START_REF.
#define BF_MMDC_MDREF_START_REF(v)   ((__REG_VALUE_TYPE((v), reg32_t) << BP_MMDC_MDREF_START_REF) & BM_MMDC_MDREF_START_REF)

#ifndef __LANGUAGE_ASM__
//! @brief Set the START_REF field to a new value.
#define BW_MMDC_MDREF_START_REF(v)   (HW_MMDC_MDREF_WR((HW_MMDC_MDREF_RD() & ~BM_MMDC_MDREF_START_REF) | BF_MMDC_MDREF_START_REF(v)))
#endif


/* --- Register HW_MMDC_MDREF, field REFR[13:11] (RW)
 *
 * Refresh Rate. This field determines how many refresh commands will be issued every refresh cycle.
 * After every refresh command the MMDC won't drive any command to the DDR device untill satisfying
 * tRFC period
 *
 * Values:
 * 0x0 - 1 refresh
 * 0x1 - 2 refreshes
 * 0x2 - 3 refreshes
 * 0x3 - 4 refreshes
 * 0x4 - 5 refreshes
 * 0x5 - 6 refreshes
 * 0x6 - 7 refreshes
 * 0x7 - 8 refreshes
 */

#define BP_MMDC_MDREF_REFR      (11)      //!< Bit position for MMDC_MDREF_REFR.
#define BM_MMDC_MDREF_REFR      (0x00003800)  //!< Bit mask for MMDC_MDREF_REFR.

//! @brief Get value of MMDC_MDREF_REFR from a register value.
#define BG_MMDC_MDREF_REFR(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_MMDC_MDREF_REFR) >> BP_MMDC_MDREF_REFR)

//! @brief Format value for bitfield MMDC_MDREF_REFR.
#define BF_MMDC_MDREF_REFR(v)   ((__REG_VALUE_TYPE((v), reg32_t) << BP_MMDC_MDREF_REFR) & BM_MMDC_MDREF_REFR)

#ifndef __LANGUAGE_ASM__
//! @brief Set the REFR field to a new value.
#define BW_MMDC_MDREF_REFR(v)   (HW_MMDC_MDREF_WR((HW_MMDC_MDREF_RD() & ~BM_MMDC_MDREF_REFR) | BF_MMDC_MDREF_REFR(v)))
#endif


/* --- Register HW_MMDC_MDREF, field REF_SEL[15:14] (RW)
 *
 * Refresh Selector. This bit selects the source of the clock that will trigger each refresh cycle:
 *
 * Values:
 * 0 - Periodic refresh cycles will be triggered in frequency of 64KHz.
 * 1 - Periodic refresh cycles will be triggered in frequency of 32KHz.
 * 2 - Periodic refresh cycles will be triggered every amount of cycles that are configured in REF_CNT
 *     field.
 * 3 - No refresh cycles will be triggered.
 */

#define BP_MMDC_MDREF_REF_SEL      (14)      //!< Bit position for MMDC_MDREF_REF_SEL.
#define BM_MMDC_MDREF_REF_SEL      (0x0000c000)  //!< Bit mask for MMDC_MDREF_REF_SEL.

//! @brief Get value of MMDC_MDREF_REF_SEL from a register value.
#define BG_MMDC_MDREF_REF_SEL(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_MMDC_MDREF_REF_SEL) >> BP_MMDC_MDREF_REF_SEL)

//! @brief Format value for bitfield MMDC_MDREF_REF_SEL.
#define BF_MMDC_MDREF_REF_SEL(v)   ((__REG_VALUE_TYPE((v), reg32_t) << BP_MMDC_MDREF_REF_SEL) & BM_MMDC_MDREF_REF_SEL)

#ifndef __LANGUAGE_ASM__
//! @brief Set the REF_SEL field to a new value.
#define BW_MMDC_MDREF_REF_SEL(v)   (HW_MMDC_MDREF_WR((HW_MMDC_MDREF_RD() & ~BM_MMDC_MDREF_REF_SEL) | BF_MMDC_MDREF_REF_SEL(v)))
#endif


/* --- Register HW_MMDC_MDREF, field REF_CNT[31:16] (RW)
 *
 * Refresh Counter at DDR clock period If REF_SEL equals '2' a refresh cycle will begin every amount
 * of DDR cycles configured in this field.
 *
 * Values:
 * 0x0 - Reserved.
 * 0x1 - 1 cycle.
 * 0xFFFE - 65534 cycles.
 * 0xFFFF - 65535 cycles.
 */

#define BP_MMDC_MDREF_REF_CNT      (16)      //!< Bit position for MMDC_MDREF_REF_CNT.
#define BM_MMDC_MDREF_REF_CNT      (0xffff0000)  //!< Bit mask for MMDC_MDREF_REF_CNT.

//! @brief Get value of MMDC_MDREF_REF_CNT from a register value.
#define BG_MMDC_MDREF_REF_CNT(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_MMDC_MDREF_REF_CNT) >> BP_MMDC_MDREF_REF_CNT)

//! @brief Format value for bitfield MMDC_MDREF_REF_CNT.
#define BF_MMDC_MDREF_REF_CNT(v)   ((__REG_VALUE_TYPE((v), reg32_t) << BP_MMDC_MDREF_REF_CNT) & BM_MMDC_MDREF_REF_CNT)

#ifndef __LANGUAGE_ASM__
//! @brief Set the REF_CNT field to a new value.
#define BW_MMDC_MDREF_REF_CNT(v)   (HW_MMDC_MDREF_WR((HW_MMDC_MDREF_RD() & ~BM_MMDC_MDREF_REF_CNT) | BF_MMDC_MDREF_REF_CNT(v)))
#endif


//-------------------------------------------------------------------------------------------
// HW_MMDC_MDRWD - MMDC Core Read/Write Command Delay Register
//-------------------------------------------------------------------------------------------

#ifndef __LANGUAGE_ASM__
/*!
 * @brief HW_MMDC_MDRWD - MMDC Core Read/Write Command Delay Register (RW)
 *
 * Reset value: 0x0f9f26d2
 *
 * This register determines the delay between back to back read and write accesses. The register
 * reset values are set to the minimum required value. As the default values are set to achieve
 * optimal results, changing them is discouraged.  Supported Mode Of Operations:  For Channel 0: All
 * For Channel 1: LP2_2ch_x16, LP2_2ch_x32
 */
typedef union _hw_mmdc_mdrwd
{
    reg32_t U;
    struct _hw_mmdc_mdrwd_bitfields
    {
        unsigned RTR_DIFF : 3; //!< [2:0] Read to read delay for different chip-select.
        unsigned RTW_DIFF : 3; //!< [5:3] Read to write delay for different chip-select.
        unsigned WTW_DIFF : 3; //!< [8:6] Write to write delay for different chip-select.
        unsigned WTR_DIFF : 3; //!< [11:9] Write to read delay for different chip-select.
        unsigned RTW_SAME : 3; //!< [14:12] Read to write delay for the same chip-select.
        unsigned RESERVED0 : 1; //!< [15] Reserved
        unsigned TDAI : 13; //!< [28:16] Device auto initialization period.(maximum) This field is relevant only to LPDDR2 mode
        unsigned RESERVED1 : 3; //!< [31:29] Reserved
    } B;
} hw_mmdc_mdrwd_t;
#endif

/*
 * constants & macros for entire MMDC_MDRWD register
 */
#define HW_MMDC_MDRWD_ADDR      (REGS_MMDC_BASE + 0x2c)

#ifndef __LANGUAGE_ASM__
#define HW_MMDC_MDRWD           (*(volatile hw_mmdc_mdrwd_t *) HW_MMDC_MDRWD_ADDR)
#define HW_MMDC_MDRWD_RD()      (HW_MMDC_MDRWD.U)
#define HW_MMDC_MDRWD_WR(v)     (HW_MMDC_MDRWD.U = (v))
#define HW_MMDC_MDRWD_SET(v)    (HW_MMDC_MDRWD_WR(HW_MMDC_MDRWD_RD() |  (v)))
#define HW_MMDC_MDRWD_CLR(v)    (HW_MMDC_MDRWD_WR(HW_MMDC_MDRWD_RD() & ~(v)))
#define HW_MMDC_MDRWD_TOG(v)    (HW_MMDC_MDRWD_WR(HW_MMDC_MDRWD_RD() ^  (v)))
#endif

/*
 * constants & macros for individual MMDC_MDRWD bitfields
 */

/* --- Register HW_MMDC_MDRWD, field RTR_DIFF[2:0] (RW)
 *
 * Read to read delay for different chip-select. This field controls the delay between read to read
 * commands toward different chip select. The total delay is calculated according to: BL/2 +
 * RTR_DIFF
 *
 * Values:
 * 0x0 - 0 cycle
 * 0x1 - 1 cycle
 * 0x2 - 2 cycles (Default)
 * 0x3 - 3 cycles
 * 0x4 - 4 cycles
 * 0x5 - 5 cycles
 * 0x6 - 6 cycles
 * 0x7 - 7 cycles
 */

#define BP_MMDC_MDRWD_RTR_DIFF      (0)      //!< Bit position for MMDC_MDRWD_RTR_DIFF.
#define BM_MMDC_MDRWD_RTR_DIFF      (0x00000007)  //!< Bit mask for MMDC_MDRWD_RTR_DIFF.

//! @brief Get value of MMDC_MDRWD_RTR_DIFF from a register value.
#define BG_MMDC_MDRWD_RTR_DIFF(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_MMDC_MDRWD_RTR_DIFF) >> BP_MMDC_MDRWD_RTR_DIFF)

//! @brief Format value for bitfield MMDC_MDRWD_RTR_DIFF.
#define BF_MMDC_MDRWD_RTR_DIFF(v)   ((__REG_VALUE_TYPE((v), reg32_t) << BP_MMDC_MDRWD_RTR_DIFF) & BM_MMDC_MDRWD_RTR_DIFF)

#ifndef __LANGUAGE_ASM__
//! @brief Set the RTR_DIFF field to a new value.
#define BW_MMDC_MDRWD_RTR_DIFF(v)   (HW_MMDC_MDRWD_WR((HW_MMDC_MDRWD_RD() & ~BM_MMDC_MDRWD_RTR_DIFF) | BF_MMDC_MDRWD_RTR_DIFF(v)))
#endif


/* --- Register HW_MMDC_MDRWD, field RTW_DIFF[5:3] (RW)
 *
 * Read to write delay for different chip-select. This field controls the delay between read to
 * write commands toward different chip select. The total delay is calculated according to: BL/2 +
 * RTW_DIFF + (tCL - tCWL) + RALAT
 *
 * Values:
 * 0x0 - 0 cycle
 * 0x1 - 1 cycle
 * 0x2 - 2 cycles (Default)
 * 0x3 - 3 cycles
 * 0x4 - 4 cycles
 * 0x5 - 5 cycles
 * 0x6 - 6 cycles
 * 0x7 - 7 cycles
 */

#define BP_MMDC_MDRWD_RTW_DIFF      (3)      //!< Bit position for MMDC_MDRWD_RTW_DIFF.
#define BM_MMDC_MDRWD_RTW_DIFF      (0x00000038)  //!< Bit mask for MMDC_MDRWD_RTW_DIFF.

//! @brief Get value of MMDC_MDRWD_RTW_DIFF from a register value.
#define BG_MMDC_MDRWD_RTW_DIFF(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_MMDC_MDRWD_RTW_DIFF) >> BP_MMDC_MDRWD_RTW_DIFF)

//! @brief Format value for bitfield MMDC_MDRWD_RTW_DIFF.
#define BF_MMDC_MDRWD_RTW_DIFF(v)   ((__REG_VALUE_TYPE((v), reg32_t) << BP_MMDC_MDRWD_RTW_DIFF) & BM_MMDC_MDRWD_RTW_DIFF)

#ifndef __LANGUAGE_ASM__
//! @brief Set the RTW_DIFF field to a new value.
#define BW_MMDC_MDRWD_RTW_DIFF(v)   (HW_MMDC_MDRWD_WR((HW_MMDC_MDRWD_RD() & ~BM_MMDC_MDRWD_RTW_DIFF) | BF_MMDC_MDRWD_RTW_DIFF(v)))
#endif


/* --- Register HW_MMDC_MDRWD, field WTW_DIFF[8:6] (RW)
 *
 * Write to write delay for different chip-select. This field controls the delay between write to
 * write commands toward different chip select. The total delay is calculated according to: BL/2 +
 * WTW_DIFF
 *
 * Values:
 * 0x0 - 0 cycle
 * 0x1 - 1 cycle
 * 0x2 - 2 cycles
 * 0x3 - 3 cycles (Default)
 * 0x4 - 4 cycles
 * 0x5 - 5 cycles
 * 0x6 - 6 cycles
 * 0x7 - 7 cycles
 */

#define BP_MMDC_MDRWD_WTW_DIFF      (6)      //!< Bit position for MMDC_MDRWD_WTW_DIFF.
#define BM_MMDC_MDRWD_WTW_DIFF      (0x000001c0)  //!< Bit mask for MMDC_MDRWD_WTW_DIFF.

//! @brief Get value of MMDC_MDRWD_WTW_DIFF from a register value.
#define BG_MMDC_MDRWD_WTW_DIFF(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_MMDC_MDRWD_WTW_DIFF) >> BP_MMDC_MDRWD_WTW_DIFF)

//! @brief Format value for bitfield MMDC_MDRWD_WTW_DIFF.
#define BF_MMDC_MDRWD_WTW_DIFF(v)   ((__REG_VALUE_TYPE((v), reg32_t) << BP_MMDC_MDRWD_WTW_DIFF) & BM_MMDC_MDRWD_WTW_DIFF)

#ifndef __LANGUAGE_ASM__
//! @brief Set the WTW_DIFF field to a new value.
#define BW_MMDC_MDRWD_WTW_DIFF(v)   (HW_MMDC_MDRWD_WR((HW_MMDC_MDRWD_RD() & ~BM_MMDC_MDRWD_WTW_DIFF) | BF_MMDC_MDRWD_WTW_DIFF(v)))
#endif


/* --- Register HW_MMDC_MDRWD, field WTR_DIFF[11:9] (RW)
 *
 * Write to read delay for different chip-select. This field controls the delay between write to
 * read commands toward different chip select. The total delay is calculated according to: BL/2 +
 * WTR_DIFF + (tCL-tCWL) + RALAT
 *
 * Values:
 * 0x0 - 0 cycle
 * 0x1 - 1 cycle
 * 0x2 - 2 cycles
 * 0x3 - 3 cycles (Default)
 * 0x4 - 4 cycles
 * 0x5 - 5 cycles
 * 0x6 - 6 cycles
 * 0x7 - 7 cycles
 */

#define BP_MMDC_MDRWD_WTR_DIFF      (9)      //!< Bit position for MMDC_MDRWD_WTR_DIFF.
#define BM_MMDC_MDRWD_WTR_DIFF      (0x00000e00)  //!< Bit mask for MMDC_MDRWD_WTR_DIFF.

//! @brief Get value of MMDC_MDRWD_WTR_DIFF from a register value.
#define BG_MMDC_MDRWD_WTR_DIFF(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_MMDC_MDRWD_WTR_DIFF) >> BP_MMDC_MDRWD_WTR_DIFF)

//! @brief Format value for bitfield MMDC_MDRWD_WTR_DIFF.
#define BF_MMDC_MDRWD_WTR_DIFF(v)   ((__REG_VALUE_TYPE((v), reg32_t) << BP_MMDC_MDRWD_WTR_DIFF) & BM_MMDC_MDRWD_WTR_DIFF)

#ifndef __LANGUAGE_ASM__
//! @brief Set the WTR_DIFF field to a new value.
#define BW_MMDC_MDRWD_WTR_DIFF(v)   (HW_MMDC_MDRWD_WR((HW_MMDC_MDRWD_RD() & ~BM_MMDC_MDRWD_WTR_DIFF) | BF_MMDC_MDRWD_WTR_DIFF(v)))
#endif


/* --- Register HW_MMDC_MDRWD, field RTW_SAME[14:12] (RW)
 *
 * Read to write delay for the same chip-select. This field controls the delay between read to write
 * commands toward the same chip select. The total delay is calculated according to: BL/2 + RTW_SAME
 * + (tCL-tCWL) + RALAT
 *
 * Values:
 * 0x0 - 0 cycle
 * 0x1 - 1 cycle
 * 0x2 - 2 cycles (Default)
 * 0x3 - 3 cycles
 * 0x4 - 4 cycles
 * 0x5 - 5 cycles
 * 0x6 - 6 cycles
 * 0x7 - 7 cycles
 */

#define BP_MMDC_MDRWD_RTW_SAME      (12)      //!< Bit position for MMDC_MDRWD_RTW_SAME.
#define BM_MMDC_MDRWD_RTW_SAME      (0x00007000)  //!< Bit mask for MMDC_MDRWD_RTW_SAME.

//! @brief Get value of MMDC_MDRWD_RTW_SAME from a register value.
#define BG_MMDC_MDRWD_RTW_SAME(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_MMDC_MDRWD_RTW_SAME) >> BP_MMDC_MDRWD_RTW_SAME)

//! @brief Format value for bitfield MMDC_MDRWD_RTW_SAME.
#define BF_MMDC_MDRWD_RTW_SAME(v)   ((__REG_VALUE_TYPE((v), reg32_t) << BP_MMDC_MDRWD_RTW_SAME) & BM_MMDC_MDRWD_RTW_SAME)

#ifndef __LANGUAGE_ASM__
//! @brief Set the RTW_SAME field to a new value.
#define BW_MMDC_MDRWD_RTW_SAME(v)   (HW_MMDC_MDRWD_WR((HW_MMDC_MDRWD_RD() & ~BM_MMDC_MDRWD_RTW_SAME) | BF_MMDC_MDRWD_RTW_SAME(v)))
#endif


/* --- Register HW_MMDC_MDRWD, field TDAI[28:16] (RW)
 *
 * Device auto initialization period.(maximum) This field is relevant only to LPDDR2 mode
 *
 * Values:
 * 0x0 - 1 cycle
 * 0xF9F - 4000 cycles (Default, JEDEC value for LPDDR2, gives 10us at 400MHz clock).
 * 0x1FFF - 8192 cycles
 */

#define BP_MMDC_MDRWD_TDAI      (16)      //!< Bit position for MMDC_MDRWD_TDAI.
#define BM_MMDC_MDRWD_TDAI      (0x1fff0000)  //!< Bit mask for MMDC_MDRWD_TDAI.

//! @brief Get value of MMDC_MDRWD_TDAI from a register value.
#define BG_MMDC_MDRWD_TDAI(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_MMDC_MDRWD_TDAI) >> BP_MMDC_MDRWD_TDAI)

//! @brief Format value for bitfield MMDC_MDRWD_TDAI.
#define BF_MMDC_MDRWD_TDAI(v)   ((__REG_VALUE_TYPE((v), reg32_t) << BP_MMDC_MDRWD_TDAI) & BM_MMDC_MDRWD_TDAI)

#ifndef __LANGUAGE_ASM__
//! @brief Set the TDAI field to a new value.
#define BW_MMDC_MDRWD_TDAI(v)   (HW_MMDC_MDRWD_WR((HW_MMDC_MDRWD_RD() & ~BM_MMDC_MDRWD_TDAI) | BF_MMDC_MDRWD_TDAI(v)))
#endif


//-------------------------------------------------------------------------------------------
// HW_MMDC_MDOR - MMDC Core Out of Reset Delays Register
//-------------------------------------------------------------------------------------------

#ifndef __LANGUAGE_ASM__
/*!
 * @brief HW_MMDC_MDOR - MMDC Core Out of Reset Delays Register (RW)
 *
 * Reset value: 0x009f0e0e
 *
 * This register defines delays that must be kept when MMDC exits reset.  Supported Mode Of
 * Operations:  For Channel 0: All  For Channel 1: LP2_2ch_x16, LP2_2ch_x32
 */
typedef union _hw_mmdc_mdor
{
    reg32_t U;
    struct _hw_mmdc_mdor_bitfields
    {
        unsigned RST_TO_CKE : 6; //!< [5:0] DDR3: Time from SDE enable to CKE rise.
        unsigned RESERVED0 : 2; //!< [7:6] Reserved
        unsigned SDE_TO_RST : 6; //!< [13:8] DDR3: Time from SDE enable until DDR reset# is high.
        unsigned RESERVED1 : 2; //!< [15:14] Reserved
        unsigned TXPR : 8; //!< [23:16] DDR2/ DDR3: CKE HIGH to a valid command.
        unsigned RESERVED2 : 8; //!< [31:24] Reserved
    } B;
} hw_mmdc_mdor_t;
#endif

/*
 * constants & macros for entire MMDC_MDOR register
 */
#define HW_MMDC_MDOR_ADDR      (REGS_MMDC_BASE + 0x30)

#ifndef __LANGUAGE_ASM__
#define HW_MMDC_MDOR           (*(volatile hw_mmdc_mdor_t *) HW_MMDC_MDOR_ADDR)
#define HW_MMDC_MDOR_RD()      (HW_MMDC_MDOR.U)
#define HW_MMDC_MDOR_WR(v)     (HW_MMDC_MDOR.U = (v))
#define HW_MMDC_MDOR_SET(v)    (HW_MMDC_MDOR_WR(HW_MMDC_MDOR_RD() |  (v)))
#define HW_MMDC_MDOR_CLR(v)    (HW_MMDC_MDOR_WR(HW_MMDC_MDOR_RD() & ~(v)))
#define HW_MMDC_MDOR_TOG(v)    (HW_MMDC_MDOR_WR(HW_MMDC_MDOR_RD() ^  (v)))
#endif

/*
 * constants & macros for individual MMDC_MDOR bitfields
 */

/* --- Register HW_MMDC_MDOR, field RST_TO_CKE[5:0] (RW)
 *
 * DDR3: Time from SDE enable to CKE rise. In case that DDR reset# is low, will wait until it's high
 * and thenwait this period until rising CKE. (JEDEC value is 500 us) In DDR2 mode this field is
 * referred to to the time from SDE enable to CKE rise. (JEDEC value is 200 us) LPDDR2: Idle time
 * ater first CKE assertion. (JEDEC value is 200 us) Each cycle in this field is 15.258 us.
 *
 * Values:
 * 0x0 - Reserved
 * 0x1 - Reserved
 * 0x2 - Reserved
 * 0x3 - 1 cycles
 * 0x10 - 14 cycles (JEDEC value for DDR2/ LPDDR2) - total of 200 us
 * 0x23 - 33 cycles (JEDEC value for DDR3) - total of 500 us
 * 0x3E - 60 cycles
 * 0x3F - 61 cycles
 */

#define BP_MMDC_MDOR_RST_TO_CKE      (0)      //!< Bit position for MMDC_MDOR_RST_TO_CKE.
#define BM_MMDC_MDOR_RST_TO_CKE      (0x0000003f)  //!< Bit mask for MMDC_MDOR_RST_TO_CKE.

//! @brief Get value of MMDC_MDOR_RST_TO_CKE from a register value.
#define BG_MMDC_MDOR_RST_TO_CKE(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_MMDC_MDOR_RST_TO_CKE) >> BP_MMDC_MDOR_RST_TO_CKE)

//! @brief Format value for bitfield MMDC_MDOR_RST_TO_CKE.
#define BF_MMDC_MDOR_RST_TO_CKE(v)   ((__REG_VALUE_TYPE((v), reg32_t) << BP_MMDC_MDOR_RST_TO_CKE) & BM_MMDC_MDOR_RST_TO_CKE)

#ifndef __LANGUAGE_ASM__
//! @brief Set the RST_TO_CKE field to a new value.
#define BW_MMDC_MDOR_RST_TO_CKE(v)   (HW_MMDC_MDOR_WR((HW_MMDC_MDOR_RD() & ~BM_MMDC_MDOR_RST_TO_CKE) | BF_MMDC_MDOR_RST_TO_CKE(v)))
#endif


/* --- Register HW_MMDC_MDOR, field SDE_TO_RST[13:8] (RW)
 *
 * DDR3: Time from SDE enable until DDR reset# is high. In DDR2/ LPDDR2 mode this field is not
 * relevant . Each cycle in this field is 15.625 us.
 *
 * Values:
 * 0x0 - Reserved
 * 0x1 - Reserved
 * 0x2 - Reserved
 * 0x3 - 1 cycles
 * 0x4 - 2 cycles
 * 0xF - 13 cycles (Jedec value for DDR3) - total of 200 us
 * 0x3E - 60 cycles
 * 0x3F - 61 cycles
 */

#define BP_MMDC_MDOR_SDE_TO_RST      (8)      //!< Bit position for MMDC_MDOR_SDE_TO_RST.
#define BM_MMDC_MDOR_SDE_TO_RST      (0x00003f00)  //!< Bit mask for MMDC_MDOR_SDE_TO_RST.

//! @brief Get value of MMDC_MDOR_SDE_TO_RST from a register value.
#define BG_MMDC_MDOR_SDE_TO_RST(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_MMDC_MDOR_SDE_TO_RST) >> BP_MMDC_MDOR_SDE_TO_RST)

//! @brief Format value for bitfield MMDC_MDOR_SDE_TO_RST.
#define BF_MMDC_MDOR_SDE_TO_RST(v)   ((__REG_VALUE_TYPE((v), reg32_t) << BP_MMDC_MDOR_SDE_TO_RST) & BM_MMDC_MDOR_SDE_TO_RST)

#ifndef __LANGUAGE_ASM__
//! @brief Set the SDE_TO_RST field to a new value.
#define BW_MMDC_MDOR_SDE_TO_RST(v)   (HW_MMDC_MDOR_WR((HW_MMDC_MDOR_RD() & ~BM_MMDC_MDOR_SDE_TO_RST) | BF_MMDC_MDOR_SDE_TO_RST(v)))
#endif


/* --- Register HW_MMDC_MDOR, field TXPR[23:16] (RW)
 *
 * DDR2/ DDR3: CKE HIGH to a valid command. This field is not relevant in LPDDR2 mode. According to
 * DDR2 JEDEC standard this field supposes to be 400 ns. DDR3: As defined in timing parameter table.
 *
 * Values:
 * 0x0 - Reserved
 * 0x1 - 2 cycles
 * 0x2 - 3 cycles
 * 0xFE - 255 cycles
 * 0xFF - 256 cycles
 */

#define BP_MMDC_MDOR_TXPR      (16)      //!< Bit position for MMDC_MDOR_TXPR.
#define BM_MMDC_MDOR_TXPR      (0x00ff0000)  //!< Bit mask for MMDC_MDOR_TXPR.

//! @brief Get value of MMDC_MDOR_TXPR from a register value.
#define BG_MMDC_MDOR_TXPR(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_MMDC_MDOR_TXPR) >> BP_MMDC_MDOR_TXPR)

//! @brief Format value for bitfield MMDC_MDOR_TXPR.
#define BF_MMDC_MDOR_TXPR(v)   ((__REG_VALUE_TYPE((v), reg32_t) << BP_MMDC_MDOR_TXPR) & BM_MMDC_MDOR_TXPR)

#ifndef __LANGUAGE_ASM__
//! @brief Set the TXPR field to a new value.
#define BW_MMDC_MDOR_TXPR(v)   (HW_MMDC_MDOR_WR((HW_MMDC_MDOR_RD() & ~BM_MMDC_MDOR_TXPR) | BF_MMDC_MDOR_TXPR(v)))
#endif


//-------------------------------------------------------------------------------------------
// HW_MMDC_MDMRR - MMDC Core MRR Data Register
//-------------------------------------------------------------------------------------------

#ifndef __LANGUAGE_ASM__
/*!
 * @brief HW_MMDC_MDMRR - MMDC Core MRR Data Register (RO)
 *
 * Reset value: 0x00000000
 *
 * This register contains data that was collected after issuing MRR command. The data in this
 * register is valid only when MDSCR[MRR_READ_DATA_VALID] is set to "1".  This register is relevant
 * only in LPDDR2 mode. For further information see .  Supported Mode Of Operations:  For Channel 0:
 * LP2_2ch_x16, LP2_2ch_x32  For Channel 1: LP2_2ch_x16, LP2_2ch_x32
 */
typedef union _hw_mmdc_mdmrr
{
    reg32_t U;
    struct _hw_mmdc_mdmrr_bitfields
    {
        unsigned MRR_READ_DATA0 : 8; //!< [7:0] MRR DATA that arrived on DQ[7:0]
        unsigned MRR_READ_DATA1 : 8; //!< [15:8] MRR DATA that arrived on DQ[15:8]
        unsigned MRR_READ_DATA2 : 8; //!< [23:16] MRR DATA that arrived on DQ[23:16]
        unsigned MRR_READ_DATA3 : 8; //!< [31:24] MRR DATA that arrived on DQ[31:24]
    } B;
} hw_mmdc_mdmrr_t;
#endif

/*
 * constants & macros for entire MMDC_MDMRR register
 */
#define HW_MMDC_MDMRR_ADDR      (REGS_MMDC_BASE + 0x34)

#ifndef __LANGUAGE_ASM__
#define HW_MMDC_MDMRR           (*(volatile hw_mmdc_mdmrr_t *) HW_MMDC_MDMRR_ADDR)
#define HW_MMDC_MDMRR_RD()      (HW_MMDC_MDMRR.U)
#endif

/*
 * constants & macros for individual MMDC_MDMRR bitfields
 */

/* --- Register HW_MMDC_MDMRR, field MRR_READ_DATA0[7:0] (RO)
 *
 * MRR DATA that arrived on DQ[7:0]
 */

#define BP_MMDC_MDMRR_MRR_READ_DATA0      (0)      //!< Bit position for MMDC_MDMRR_MRR_READ_DATA0.
#define BM_MMDC_MDMRR_MRR_READ_DATA0      (0x000000ff)  //!< Bit mask for MMDC_MDMRR_MRR_READ_DATA0.

//! @brief Get value of MMDC_MDMRR_MRR_READ_DATA0 from a register value.
#define BG_MMDC_MDMRR_MRR_READ_DATA0(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_MMDC_MDMRR_MRR_READ_DATA0) >> BP_MMDC_MDMRR_MRR_READ_DATA0)

/* --- Register HW_MMDC_MDMRR, field MRR_READ_DATA1[15:8] (RO)
 *
 * MRR DATA that arrived on DQ[15:8]
 */

#define BP_MMDC_MDMRR_MRR_READ_DATA1      (8)      //!< Bit position for MMDC_MDMRR_MRR_READ_DATA1.
#define BM_MMDC_MDMRR_MRR_READ_DATA1      (0x0000ff00)  //!< Bit mask for MMDC_MDMRR_MRR_READ_DATA1.

//! @brief Get value of MMDC_MDMRR_MRR_READ_DATA1 from a register value.
#define BG_MMDC_MDMRR_MRR_READ_DATA1(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_MMDC_MDMRR_MRR_READ_DATA1) >> BP_MMDC_MDMRR_MRR_READ_DATA1)

/* --- Register HW_MMDC_MDMRR, field MRR_READ_DATA2[23:16] (RO)
 *
 * MRR DATA that arrived on DQ[23:16]
 */

#define BP_MMDC_MDMRR_MRR_READ_DATA2      (16)      //!< Bit position for MMDC_MDMRR_MRR_READ_DATA2.
#define BM_MMDC_MDMRR_MRR_READ_DATA2      (0x00ff0000)  //!< Bit mask for MMDC_MDMRR_MRR_READ_DATA2.

//! @brief Get value of MMDC_MDMRR_MRR_READ_DATA2 from a register value.
#define BG_MMDC_MDMRR_MRR_READ_DATA2(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_MMDC_MDMRR_MRR_READ_DATA2) >> BP_MMDC_MDMRR_MRR_READ_DATA2)

/* --- Register HW_MMDC_MDMRR, field MRR_READ_DATA3[31:24] (RO)
 *
 * MRR DATA that arrived on DQ[31:24]
 */

#define BP_MMDC_MDMRR_MRR_READ_DATA3      (24)      //!< Bit position for MMDC_MDMRR_MRR_READ_DATA3.
#define BM_MMDC_MDMRR_MRR_READ_DATA3      (0xff000000)  //!< Bit mask for MMDC_MDMRR_MRR_READ_DATA3.

//! @brief Get value of MMDC_MDMRR_MRR_READ_DATA3 from a register value.
#define BG_MMDC_MDMRR_MRR_READ_DATA3(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_MMDC_MDMRR_MRR_READ_DATA3) >> BP_MMDC_MDMRR_MRR_READ_DATA3)

//-------------------------------------------------------------------------------------------
// HW_MMDC_MDCFG3LP - MMDC Core Timing Configuration Register 3
//-------------------------------------------------------------------------------------------

#ifndef __LANGUAGE_ASM__
/*!
 * @brief HW_MMDC_MDCFG3LP - MMDC Core Timing Configuration Register 3 (RW)
 *
 * Reset value: 0x00000000
 *
 * This register is relevant only for LPDDR2 mode.  Supported Mode Of Operations:  For Channel 0:
 * LP2_2ch_x16, LP2_2ch_x32  For Channel 1: LP2_2ch_x16, LP2_2ch_x32
 */
typedef union _hw_mmdc_mdcfg3lp
{
    reg32_t U;
    struct _hw_mmdc_mdcfg3lp_bitfields
    {
        unsigned TRPAB_LP : 4; //!< [3:0] Precharge (all banks) command period.
        unsigned TRPPB_LP : 4; //!< [7:4] Precharge (per bank) command period (same bank).
        unsigned TRCD_LP : 4; //!< [11:8] Active command to internal read or write delay time (same bank).
        unsigned RESERVED0 : 4; //!< [15:12] Reserved
        unsigned RC_LP : 6; //!< [21:16] Active to Active or Refresh command period (same bank).
        unsigned RESERVED1 : 10; //!< [31:22] Reserved
    } B;
} hw_mmdc_mdcfg3lp_t;
#endif

/*
 * constants & macros for entire MMDC_MDCFG3LP register
 */
#define HW_MMDC_MDCFG3LP_ADDR      (REGS_MMDC_BASE + 0x38)

#ifndef __LANGUAGE_ASM__
#define HW_MMDC_MDCFG3LP           (*(volatile hw_mmdc_mdcfg3lp_t *) HW_MMDC_MDCFG3LP_ADDR)
#define HW_MMDC_MDCFG3LP_RD()      (HW_MMDC_MDCFG3LP.U)
#define HW_MMDC_MDCFG3LP_WR(v)     (HW_MMDC_MDCFG3LP.U = (v))
#define HW_MMDC_MDCFG3LP_SET(v)    (HW_MMDC_MDCFG3LP_WR(HW_MMDC_MDCFG3LP_RD() |  (v)))
#define HW_MMDC_MDCFG3LP_CLR(v)    (HW_MMDC_MDCFG3LP_WR(HW_MMDC_MDCFG3LP_RD() & ~(v)))
#define HW_MMDC_MDCFG3LP_TOG(v)    (HW_MMDC_MDCFG3LP_WR(HW_MMDC_MDCFG3LP_RD() ^  (v)))
#endif

/*
 * constants & macros for individual MMDC_MDCFG3LP bitfields
 */

/* --- Register HW_MMDC_MDCFG3LP, field TRPAB_LP[3:0] (RW)
 *
 * Precharge (all banks) command period. (This field is valid only for LPDDR2 memories)
 *
 * Values:
 * 0x0 - 1 clock
 * 0x1 - 2 clocks
 * 0x2 - 3 clocks
 * 0xE - 15 clocks
 * 0xF - Reserved
 */

#define BP_MMDC_MDCFG3LP_TRPAB_LP      (0)      //!< Bit position for MMDC_MDCFG3LP_TRPAB_LP.
#define BM_MMDC_MDCFG3LP_TRPAB_LP      (0x0000000f)  //!< Bit mask for MMDC_MDCFG3LP_TRPAB_LP.

//! @brief Get value of MMDC_MDCFG3LP_TRPAB_LP from a register value.
#define BG_MMDC_MDCFG3LP_TRPAB_LP(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_MMDC_MDCFG3LP_TRPAB_LP) >> BP_MMDC_MDCFG3LP_TRPAB_LP)

//! @brief Format value for bitfield MMDC_MDCFG3LP_TRPAB_LP.
#define BF_MMDC_MDCFG3LP_TRPAB_LP(v)   ((__REG_VALUE_TYPE((v), reg32_t) << BP_MMDC_MDCFG3LP_TRPAB_LP) & BM_MMDC_MDCFG3LP_TRPAB_LP)

#ifndef __LANGUAGE_ASM__
//! @brief Set the TRPAB_LP field to a new value.
#define BW_MMDC_MDCFG3LP_TRPAB_LP(v)   (HW_MMDC_MDCFG3LP_WR((HW_MMDC_MDCFG3LP_RD() & ~BM_MMDC_MDCFG3LP_TRPAB_LP) | BF_MMDC_MDCFG3LP_TRPAB_LP(v)))
#endif


/* --- Register HW_MMDC_MDCFG3LP, field TRPPB_LP[7:4] (RW)
 *
 * Precharge (per bank) command period (same bank). (This field is valid only for LPDDR2 memories)
 *
 * Values:
 * 0x0 - 1 clock
 * 0x1 - 2 clocks
 * 0x2 - 3 clocks
 * 0xE - 15 clocks
 * 0xF - Reserved
 */

#define BP_MMDC_MDCFG3LP_TRPPB_LP      (4)      //!< Bit position for MMDC_MDCFG3LP_TRPPB_LP.
#define BM_MMDC_MDCFG3LP_TRPPB_LP      (0x000000f0)  //!< Bit mask for MMDC_MDCFG3LP_TRPPB_LP.

//! @brief Get value of MMDC_MDCFG3LP_TRPPB_LP from a register value.
#define BG_MMDC_MDCFG3LP_TRPPB_LP(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_MMDC_MDCFG3LP_TRPPB_LP) >> BP_MMDC_MDCFG3LP_TRPPB_LP)

//! @brief Format value for bitfield MMDC_MDCFG3LP_TRPPB_LP.
#define BF_MMDC_MDCFG3LP_TRPPB_LP(v)   ((__REG_VALUE_TYPE((v), reg32_t) << BP_MMDC_MDCFG3LP_TRPPB_LP) & BM_MMDC_MDCFG3LP_TRPPB_LP)

#ifndef __LANGUAGE_ASM__
//! @brief Set the TRPPB_LP field to a new value.
#define BW_MMDC_MDCFG3LP_TRPPB_LP(v)   (HW_MMDC_MDCFG3LP_WR((HW_MMDC_MDCFG3LP_RD() & ~BM_MMDC_MDCFG3LP_TRPPB_LP) | BF_MMDC_MDCFG3LP_TRPPB_LP(v)))
#endif


/* --- Register HW_MMDC_MDCFG3LP, field TRCD_LP[11:8] (RW)
 *
 * Active command to internal read or write delay time (same bank). (This field is valid only for
 * LPDDR2 memories)
 *
 * Values:
 * 0x0 - 1 clock
 * 0x1 - 2 clocks
 * 0x2 - 3 clocks
 * 0xE - 15 clocks
 * 0xF - Reserved
 */

#define BP_MMDC_MDCFG3LP_TRCD_LP      (8)      //!< Bit position for MMDC_MDCFG3LP_TRCD_LP.
#define BM_MMDC_MDCFG3LP_TRCD_LP      (0x00000f00)  //!< Bit mask for MMDC_MDCFG3LP_TRCD_LP.

//! @brief Get value of MMDC_MDCFG3LP_TRCD_LP from a register value.
#define BG_MMDC_MDCFG3LP_TRCD_LP(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_MMDC_MDCFG3LP_TRCD_LP) >> BP_MMDC_MDCFG3LP_TRCD_LP)

//! @brief Format value for bitfield MMDC_MDCFG3LP_TRCD_LP.
#define BF_MMDC_MDCFG3LP_TRCD_LP(v)   ((__REG_VALUE_TYPE((v), reg32_t) << BP_MMDC_MDCFG3LP_TRCD_LP) & BM_MMDC_MDCFG3LP_TRCD_LP)

#ifndef __LANGUAGE_ASM__
//! @brief Set the TRCD_LP field to a new value.
#define BW_MMDC_MDCFG3LP_TRCD_LP(v)   (HW_MMDC_MDCFG3LP_WR((HW_MMDC_MDCFG3LP_RD() & ~BM_MMDC_MDCFG3LP_TRCD_LP) | BF_MMDC_MDCFG3LP_TRCD_LP(v)))
#endif


/* --- Register HW_MMDC_MDCFG3LP, field RC_LP[21:16] (RW)
 *
 * Active to Active or Refresh command period (same bank). (This field is valid only for LPDDR2
 * memories)
 *
 * Values:
 * 0x0 - 1 clock
 * 0x1 - 2 clocks
 * 0x2 - 3 clocks
 * 0x3E - 63 clocks
 * 0x3F - Reserved
 */

#define BP_MMDC_MDCFG3LP_RC_LP      (16)      //!< Bit position for MMDC_MDCFG3LP_RC_LP.
#define BM_MMDC_MDCFG3LP_RC_LP      (0x003f0000)  //!< Bit mask for MMDC_MDCFG3LP_RC_LP.

//! @brief Get value of MMDC_MDCFG3LP_RC_LP from a register value.
#define BG_MMDC_MDCFG3LP_RC_LP(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_MMDC_MDCFG3LP_RC_LP) >> BP_MMDC_MDCFG3LP_RC_LP)

//! @brief Format value for bitfield MMDC_MDCFG3LP_RC_LP.
#define BF_MMDC_MDCFG3LP_RC_LP(v)   ((__REG_VALUE_TYPE((v), reg32_t) << BP_MMDC_MDCFG3LP_RC_LP) & BM_MMDC_MDCFG3LP_RC_LP)

#ifndef __LANGUAGE_ASM__
//! @brief Set the RC_LP field to a new value.
#define BW_MMDC_MDCFG3LP_RC_LP(v)   (HW_MMDC_MDCFG3LP_WR((HW_MMDC_MDCFG3LP_RD() & ~BM_MMDC_MDCFG3LP_RC_LP) | BF_MMDC_MDCFG3LP_RC_LP(v)))
#endif


//-------------------------------------------------------------------------------------------
// HW_MMDC_MDMR4 - MMDC Core MR4 Derating Register
//-------------------------------------------------------------------------------------------

#ifndef __LANGUAGE_ASM__
/*!
 * @brief HW_MMDC_MDMR4 - MMDC Core MR4 Derating Register (RW)
 *
 * Reset value: 0x00000000
 *
 * This register is relevant only for LPDDR2 mode. It is used to dynamically change certain values
 * depending on MR4 read result, which is based on memory temperature sensor result.  Supported Mode
 * of Operations:  For Channel 0: LP2_2ch_x16, LP2_2ch_x32  For Channel 1: LP2_2ch_x16, LP2_2ch_x32
 */
typedef union _hw_mmdc_mdmr4
{
    reg32_t U;
    struct _hw_mmdc_mdmr4_bitfields
    {
        unsigned UPDATE_DE_REQ : 1; //!< [0] Update Derated Values Request.
        unsigned UPDATE_DE_ACK : 1; //!< [1] Update Derated Values Acknowledge.
        unsigned RESERVED0 : 2; //!< [3:2] Reserved
        unsigned TRCD_DE : 1; //!< [4] tRCD derating value.
        unsigned TRC_DE : 1; //!< [5] tRC derating value.
        unsigned TRAS_DE : 1; //!< [6] tRAS derating value.
        unsigned TRP_DE : 1; //!< [7] tRP derating value.
        unsigned TRRD_DE : 1; //!< [8] tRRD derating value.
        unsigned RESERVED1 : 23; //!< [31:9] Reserved
    } B;
} hw_mmdc_mdmr4_t;
#endif

/*
 * constants & macros for entire MMDC_MDMR4 register
 */
#define HW_MMDC_MDMR4_ADDR      (REGS_MMDC_BASE + 0x3c)

#ifndef __LANGUAGE_ASM__
#define HW_MMDC_MDMR4           (*(volatile hw_mmdc_mdmr4_t *) HW_MMDC_MDMR4_ADDR)
#define HW_MMDC_MDMR4_RD()      (HW_MMDC_MDMR4.U)
#define HW_MMDC_MDMR4_WR(v)     (HW_MMDC_MDMR4.U = (v))
#define HW_MMDC_MDMR4_SET(v)    (HW_MMDC_MDMR4_WR(HW_MMDC_MDMR4_RD() |  (v)))
#define HW_MMDC_MDMR4_CLR(v)    (HW_MMDC_MDMR4_WR(HW_MMDC_MDMR4_RD() & ~(v)))
#define HW_MMDC_MDMR4_TOG(v)    (HW_MMDC_MDMR4_WR(HW_MMDC_MDMR4_RD() ^  (v)))
#endif

/*
 * constants & macros for individual MMDC_MDMR4 bitfields
 */

/* --- Register HW_MMDC_MDMR4, field UPDATE_DE_REQ[0] (RW)
 *
 * Update Derated Values Request. This read modify write field is automatically cleared after the
 * request is issued.
 *
 * Values:
 * 0 - Do nothing.
 * 1 - Request to update the following values: tRRD, tRCD, tRP, tRC, tRAS and refresh related fields(MDREF
 *     register): REF_CNT, REF_SEL, REFR
 */

#define BP_MMDC_MDMR4_UPDATE_DE_REQ      (0)      //!< Bit position for MMDC_MDMR4_UPDATE_DE_REQ.
#define BM_MMDC_MDMR4_UPDATE_DE_REQ      (0x00000001)  //!< Bit mask for MMDC_MDMR4_UPDATE_DE_REQ.

//! @brief Get value of MMDC_MDMR4_UPDATE_DE_REQ from a register value.
#define BG_MMDC_MDMR4_UPDATE_DE_REQ(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_MMDC_MDMR4_UPDATE_DE_REQ) >> BP_MMDC_MDMR4_UPDATE_DE_REQ)

//! @brief Format value for bitfield MMDC_MDMR4_UPDATE_DE_REQ.
#define BF_MMDC_MDMR4_UPDATE_DE_REQ(v)   ((__REG_VALUE_TYPE((v), reg32_t) << BP_MMDC_MDMR4_UPDATE_DE_REQ) & BM_MMDC_MDMR4_UPDATE_DE_REQ)

#ifndef __LANGUAGE_ASM__
//! @brief Set the UPDATE_DE_REQ field to a new value.
#define BW_MMDC_MDMR4_UPDATE_DE_REQ(v)   (HW_MMDC_MDMR4_WR((HW_MMDC_MDMR4_RD() & ~BM_MMDC_MDMR4_UPDATE_DE_REQ) | BF_MMDC_MDMR4_UPDATE_DE_REQ(v)))
#endif


/* --- Register HW_MMDC_MDMR4, field UPDATE_DE_ACK[1] (RO)
 *
 * Update Derated Values Acknowledge. This read only bit will be cleared upon UPDATE_DE_REQ
 * assertion and will be set after the new values are taken.
 */

#define BP_MMDC_MDMR4_UPDATE_DE_ACK      (1)      //!< Bit position for MMDC_MDMR4_UPDATE_DE_ACK.
#define BM_MMDC_MDMR4_UPDATE_DE_ACK      (0x00000002)  //!< Bit mask for MMDC_MDMR4_UPDATE_DE_ACK.

//! @brief Get value of MMDC_MDMR4_UPDATE_DE_ACK from a register value.
#define BG_MMDC_MDMR4_UPDATE_DE_ACK(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_MMDC_MDMR4_UPDATE_DE_ACK) >> BP_MMDC_MDMR4_UPDATE_DE_ACK)

/* --- Register HW_MMDC_MDMR4, field TRCD_DE[4] (RW)
 *
 * tRCD derating value.
 *
 * Values:
 * 0 - Original tRCD is used.
 * 1 - tRCD is derated in 1 cycle.
 */

#define BP_MMDC_MDMR4_TRCD_DE      (4)      //!< Bit position for MMDC_MDMR4_TRCD_DE.
#define BM_MMDC_MDMR4_TRCD_DE      (0x00000010)  //!< Bit mask for MMDC_MDMR4_TRCD_DE.

//! @brief Get value of MMDC_MDMR4_TRCD_DE from a register value.
#define BG_MMDC_MDMR4_TRCD_DE(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_MMDC_MDMR4_TRCD_DE) >> BP_MMDC_MDMR4_TRCD_DE)

//! @brief Format value for bitfield MMDC_MDMR4_TRCD_DE.
#define BF_MMDC_MDMR4_TRCD_DE(v)   ((__REG_VALUE_TYPE((v), reg32_t) << BP_MMDC_MDMR4_TRCD_DE) & BM_MMDC_MDMR4_TRCD_DE)

#ifndef __LANGUAGE_ASM__
//! @brief Set the TRCD_DE field to a new value.
#define BW_MMDC_MDMR4_TRCD_DE(v)   (HW_MMDC_MDMR4_WR((HW_MMDC_MDMR4_RD() & ~BM_MMDC_MDMR4_TRCD_DE) | BF_MMDC_MDMR4_TRCD_DE(v)))
#endif


/* --- Register HW_MMDC_MDMR4, field TRC_DE[5] (RW)
 *
 * tRC derating value.
 *
 * Values:
 * 0 - Original tRC is used.
 * 1 - tRC is derated in 1 cycle.
 */

#define BP_MMDC_MDMR4_TRC_DE      (5)      //!< Bit position for MMDC_MDMR4_TRC_DE.
#define BM_MMDC_MDMR4_TRC_DE      (0x00000020)  //!< Bit mask for MMDC_MDMR4_TRC_DE.

//! @brief Get value of MMDC_MDMR4_TRC_DE from a register value.
#define BG_MMDC_MDMR4_TRC_DE(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_MMDC_MDMR4_TRC_DE) >> BP_MMDC_MDMR4_TRC_DE)

//! @brief Format value for bitfield MMDC_MDMR4_TRC_DE.
#define BF_MMDC_MDMR4_TRC_DE(v)   ((__REG_VALUE_TYPE((v), reg32_t) << BP_MMDC_MDMR4_TRC_DE) & BM_MMDC_MDMR4_TRC_DE)

#ifndef __LANGUAGE_ASM__
//! @brief Set the TRC_DE field to a new value.
#define BW_MMDC_MDMR4_TRC_DE(v)   (HW_MMDC_MDMR4_WR((HW_MMDC_MDMR4_RD() & ~BM_MMDC_MDMR4_TRC_DE) | BF_MMDC_MDMR4_TRC_DE(v)))
#endif


/* --- Register HW_MMDC_MDMR4, field TRAS_DE[6] (RW)
 *
 * tRAS derating value.
 *
 * Values:
 * 0 - Original tRAS is used.
 * 1 - tRAS is derated in 1 cycle.
 */

#define BP_MMDC_MDMR4_TRAS_DE      (6)      //!< Bit position for MMDC_MDMR4_TRAS_DE.
#define BM_MMDC_MDMR4_TRAS_DE      (0x00000040)  //!< Bit mask for MMDC_MDMR4_TRAS_DE.

//! @brief Get value of MMDC_MDMR4_TRAS_DE from a register value.
#define BG_MMDC_MDMR4_TRAS_DE(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_MMDC_MDMR4_TRAS_DE) >> BP_MMDC_MDMR4_TRAS_DE)

//! @brief Format value for bitfield MMDC_MDMR4_TRAS_DE.
#define BF_MMDC_MDMR4_TRAS_DE(v)   ((__REG_VALUE_TYPE((v), reg32_t) << BP_MMDC_MDMR4_TRAS_DE) & BM_MMDC_MDMR4_TRAS_DE)

#ifndef __LANGUAGE_ASM__
//! @brief Set the TRAS_DE field to a new value.
#define BW_MMDC_MDMR4_TRAS_DE(v)   (HW_MMDC_MDMR4_WR((HW_MMDC_MDMR4_RD() & ~BM_MMDC_MDMR4_TRAS_DE) | BF_MMDC_MDMR4_TRAS_DE(v)))
#endif


/* --- Register HW_MMDC_MDMR4, field TRP_DE[7] (RW)
 *
 * tRP derating value.
 *
 * Values:
 * 0 - Original tRP is used.
 * 1 - tRP is derated in 1 cycle.
 */

#define BP_MMDC_MDMR4_TRP_DE      (7)      //!< Bit position for MMDC_MDMR4_TRP_DE.
#define BM_MMDC_MDMR4_TRP_DE      (0x00000080)  //!< Bit mask for MMDC_MDMR4_TRP_DE.

//! @brief Get value of MMDC_MDMR4_TRP_DE from a register value.
#define BG_MMDC_MDMR4_TRP_DE(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_MMDC_MDMR4_TRP_DE) >> BP_MMDC_MDMR4_TRP_DE)

//! @brief Format value for bitfield MMDC_MDMR4_TRP_DE.
#define BF_MMDC_MDMR4_TRP_DE(v)   ((__REG_VALUE_TYPE((v), reg32_t) << BP_MMDC_MDMR4_TRP_DE) & BM_MMDC_MDMR4_TRP_DE)

#ifndef __LANGUAGE_ASM__
//! @brief Set the TRP_DE field to a new value.
#define BW_MMDC_MDMR4_TRP_DE(v)   (HW_MMDC_MDMR4_WR((HW_MMDC_MDMR4_RD() & ~BM_MMDC_MDMR4_TRP_DE) | BF_MMDC_MDMR4_TRP_DE(v)))
#endif


/* --- Register HW_MMDC_MDMR4, field TRRD_DE[8] (RW)
 *
 * tRRD derating value.
 *
 * Values:
 * 0 - Original tRRD is used.
 * 1 - tRRD is derated in 1 cycle.
 */

#define BP_MMDC_MDMR4_TRRD_DE      (8)      //!< Bit position for MMDC_MDMR4_TRRD_DE.
#define BM_MMDC_MDMR4_TRRD_DE      (0x00000100)  //!< Bit mask for MMDC_MDMR4_TRRD_DE.

//! @brief Get value of MMDC_MDMR4_TRRD_DE from a register value.
#define BG_MMDC_MDMR4_TRRD_DE(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_MMDC_MDMR4_TRRD_DE) >> BP_MMDC_MDMR4_TRRD_DE)

//! @brief Format value for bitfield MMDC_MDMR4_TRRD_DE.
#define BF_MMDC_MDMR4_TRRD_DE(v)   ((__REG_VALUE_TYPE((v), reg32_t) << BP_MMDC_MDMR4_TRRD_DE) & BM_MMDC_MDMR4_TRRD_DE)

#ifndef __LANGUAGE_ASM__
//! @brief Set the TRRD_DE field to a new value.
#define BW_MMDC_MDMR4_TRRD_DE(v)   (HW_MMDC_MDMR4_WR((HW_MMDC_MDMR4_RD() & ~BM_MMDC_MDMR4_TRRD_DE) | BF_MMDC_MDMR4_TRRD_DE(v)))
#endif


//-------------------------------------------------------------------------------------------
// HW_MMDC_MDASP - MMDC Core Address Space Partition Register
//-------------------------------------------------------------------------------------------

#ifndef __LANGUAGE_ASM__
/*!
 * @brief HW_MMDC_MDASP - MMDC Core Address Space Partition Register (RW)
 *
 * Reset value: 0x0000003f
 *
 * This register defines the partitioning between chip select 0 and chip select 1. For further
 * information see .  Supported Mode Of Operations:  For Channel 0: All  For Channel 1: LP2_2ch_x16,
 * LP2_2ch_x32
 */
typedef union _hw_mmdc_mdasp
{
    reg32_t U;
    struct _hw_mmdc_mdasp_bitfields
    {
        unsigned CS0_END : 7; //!< [6:0] CS0_END.
        unsigned RESERVED0 : 25; //!< [31:7] Reserved
    } B;
} hw_mmdc_mdasp_t;
#endif

/*
 * constants & macros for entire MMDC_MDASP register
 */
#define HW_MMDC_MDASP_ADDR      (REGS_MMDC_BASE + 0x40)

#ifndef __LANGUAGE_ASM__
#define HW_MMDC_MDASP           (*(volatile hw_mmdc_mdasp_t *) HW_MMDC_MDASP_ADDR)
#define HW_MMDC_MDASP_RD()      (HW_MMDC_MDASP.U)
#define HW_MMDC_MDASP_WR(v)     (HW_MMDC_MDASP.U = (v))
#define HW_MMDC_MDASP_SET(v)    (HW_MMDC_MDASP_WR(HW_MMDC_MDASP_RD() |  (v)))
#define HW_MMDC_MDASP_CLR(v)    (HW_MMDC_MDASP_WR(HW_MMDC_MDASP_RD() & ~(v)))
#define HW_MMDC_MDASP_TOG(v)    (HW_MMDC_MDASP_WR(HW_MMDC_MDASP_RD() ^  (v)))
#endif

/*
 * constants & macros for individual MMDC_MDASP bitfields
 */

/* --- Register HW_MMDC_MDASP, field CS0_END[6:0] (RW)
 *
 * CS0_END. Defines the absolute last address associated with CS0 with increments of 256Mb
 *
 * Values:
 * 000_0000 - 256Mb
 * 000_0001 - 512Mb
 * 001_1111 - 8Gb (1GB)
 * 111_1111 - 32Gb (4GB)
 * 011_1111 - 16Gb (2GB) - default
 */

#define BP_MMDC_MDASP_CS0_END      (0)      //!< Bit position for MMDC_MDASP_CS0_END.
#define BM_MMDC_MDASP_CS0_END      (0x0000007f)  //!< Bit mask for MMDC_MDASP_CS0_END.

//! @brief Get value of MMDC_MDASP_CS0_END from a register value.
#define BG_MMDC_MDASP_CS0_END(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_MMDC_MDASP_CS0_END) >> BP_MMDC_MDASP_CS0_END)

//! @brief Format value for bitfield MMDC_MDASP_CS0_END.
#define BF_MMDC_MDASP_CS0_END(v)   ((__REG_VALUE_TYPE((v), reg32_t) << BP_MMDC_MDASP_CS0_END) & BM_MMDC_MDASP_CS0_END)

#ifndef __LANGUAGE_ASM__
//! @brief Set the CS0_END field to a new value.
#define BW_MMDC_MDASP_CS0_END(v)   (HW_MMDC_MDASP_WR((HW_MMDC_MDASP_RD() & ~BM_MMDC_MDASP_CS0_END) | BF_MMDC_MDASP_CS0_END(v)))
#endif


//-------------------------------------------------------------------------------------------
// HW_MMDC_MAARCR - MMDC Core AXI Reordering Control Regsiter
//-------------------------------------------------------------------------------------------

#ifndef __LANGUAGE_ASM__
/*!
 * @brief HW_MMDC_MAARCR - MMDC Core AXI Reordering Control Regsiter (RW)
 *
 * Reset value: 0x809901a3
 *
 * This register determines the values of the weights used for the re-ordering arbitration engine.
 * For further information see .  Supported Mode Of Operations:  For Channel 0: All  For Channel 1:
 * LP2_2ch_x16, LP2_2ch_x32
 */
typedef union _hw_mmdc_maarcr
{
    reg32_t U;
    struct _hw_mmdc_maarcr_bitfields
    {
        unsigned ARCR_GUARD : 4; //!< [3:0] ARCR Guard.
        unsigned ARCR_DYN_MAX : 4; //!< [7:4] ARCR Dynamic Maximum.
        unsigned ARCR_DYN_JMP : 4; //!< [11:8] ARCR Dynamic Jump.
        unsigned RESERVED0 : 4; //!< [15:12] Reserved
        unsigned ARCR_ACC_HIT : 3; //!< [18:16] ARCR Access Hit Rate.
        unsigned RESERVED1 : 1; //!< [19] Reserved
        unsigned ARCR_PAG_HIT : 3; //!< [22:20] ARCR Page Hit Rate.
        unsigned RESERVED2 : 1; //!< [23] Reserved
        unsigned ARCR_RCH_EN : 1; //!< [24] This bit defines whether Real time channel is activated and bypassed all other pending accesses, So accesses with QoS=='F' will be granted the highest prioritiy in the optimization/reordering mechanism Default value is 0x1 - encoding 1 (Enabled)
        unsigned RESERVED3 : 3; //!< [27:25] Reserved
        unsigned ARCR_EXC_ERR_EN : 1; //!< [28] This bit defines whether exclusive read/write access violation of AXI 6.2.4 rule result in SLV Error response or in OKAY response Default value is 0x1 - encoding 1(response is SLV Error)
        unsigned RESERVED4 : 1; //!< [29] Reserved
        unsigned ARCR_SEC_ERR_EN : 1; //!< [30] This bit defines whether security read/write access violation result in SLV Error response or in OKAY response Default value is 0x1 - encoding 1(response is SLV Error, rresp/bresp=2'b10)
        unsigned ARCR_SEC_ERR_LOCK : 1; //!< [31] Once set, this bit locks ARCR_SEC_ERR_EN and prevents from its updating.
    } B;
} hw_mmdc_maarcr_t;
#endif

/*
 * constants & macros for entire MMDC_MAARCR register
 */
#define HW_MMDC_MAARCR_ADDR      (REGS_MMDC_BASE + 0x400)

#ifndef __LANGUAGE_ASM__
#define HW_MMDC_MAARCR           (*(volatile hw_mmdc_maarcr_t *) HW_MMDC_MAARCR_ADDR)
#define HW_MMDC_MAARCR_RD()      (HW_MMDC_MAARCR.U)
#define HW_MMDC_MAARCR_WR(v)     (HW_MMDC_MAARCR.U = (v))
#define HW_MMDC_MAARCR_SET(v)    (HW_MMDC_MAARCR_WR(HW_MMDC_MAARCR_RD() |  (v)))
#define HW_MMDC_MAARCR_CLR(v)    (HW_MMDC_MAARCR_WR(HW_MMDC_MAARCR_RD() & ~(v)))
#define HW_MMDC_MAARCR_TOG(v)    (HW_MMDC_MAARCR_WR(HW_MMDC_MAARCR_RD() ^  (v)))
#endif

/*
 * constants & macros for individual MMDC_MAARCR bitfields
 */

/* --- Register HW_MMDC_MAARCR, field ARCR_GUARD[3:0] (RW)
 *
 * ARCR Guard. After an access reached the maximum dynamic score value, it will wait additional
 * ARCR_GUARD arbitration cycles and then will gain the highest priority in the
 * optimization/reordering mechanism.
 *
 * Values:
 * 0000 - 15 (default)
 * 0001 - 16
 * 1111 - 30
 */

#define BP_MMDC_MAARCR_ARCR_GUARD      (0)      //!< Bit position for MMDC_MAARCR_ARCR_GUARD.
#define BM_MMDC_MAARCR_ARCR_GUARD      (0x0000000f)  //!< Bit mask for MMDC_MAARCR_ARCR_GUARD.

//! @brief Get value of MMDC_MAARCR_ARCR_GUARD from a register value.
#define BG_MMDC_MAARCR_ARCR_GUARD(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_MMDC_MAARCR_ARCR_GUARD) >> BP_MMDC_MAARCR_ARCR_GUARD)

//! @brief Format value for bitfield MMDC_MAARCR_ARCR_GUARD.
#define BF_MMDC_MAARCR_ARCR_GUARD(v)   ((__REG_VALUE_TYPE((v), reg32_t) << BP_MMDC_MAARCR_ARCR_GUARD) & BM_MMDC_MAARCR_ARCR_GUARD)

#ifndef __LANGUAGE_ASM__
//! @brief Set the ARCR_GUARD field to a new value.
#define BW_MMDC_MAARCR_ARCR_GUARD(v)   (HW_MMDC_MAARCR_WR((HW_MMDC_MAARCR_RD() & ~BM_MMDC_MAARCR_ARCR_GUARD) | BF_MMDC_MAARCR_ARCR_GUARD(v)))
#endif


/* --- Register HW_MMDC_MAARCR, field ARCR_DYN_MAX[7:4] (RW)
 *
 * ARCR Dynamic Maximum. ARCR_DYN_MAX is the maximum dynamic score value that each access inside the
 * optimization/reordering mechanism can get.
 *
 * Values:
 * 0000 - 0
 * 0001 - 1
 * 1111 - 15 (default)
 */

#define BP_MMDC_MAARCR_ARCR_DYN_MAX      (4)      //!< Bit position for MMDC_MAARCR_ARCR_DYN_MAX.
#define BM_MMDC_MAARCR_ARCR_DYN_MAX      (0x000000f0)  //!< Bit mask for MMDC_MAARCR_ARCR_DYN_MAX.

//! @brief Get value of MMDC_MAARCR_ARCR_DYN_MAX from a register value.
#define BG_MMDC_MAARCR_ARCR_DYN_MAX(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_MMDC_MAARCR_ARCR_DYN_MAX) >> BP_MMDC_MAARCR_ARCR_DYN_MAX)

//! @brief Format value for bitfield MMDC_MAARCR_ARCR_DYN_MAX.
#define BF_MMDC_MAARCR_ARCR_DYN_MAX(v)   ((__REG_VALUE_TYPE((v), reg32_t) << BP_MMDC_MAARCR_ARCR_DYN_MAX) & BM_MMDC_MAARCR_ARCR_DYN_MAX)

#ifndef __LANGUAGE_ASM__
//! @brief Set the ARCR_DYN_MAX field to a new value.
#define BW_MMDC_MAARCR_ARCR_DYN_MAX(v)   (HW_MMDC_MAARCR_WR((HW_MMDC_MAARCR_RD() & ~BM_MMDC_MAARCR_ARCR_DYN_MAX) | BF_MMDC_MAARCR_ARCR_DYN_MAX(v)))
#endif


/* --- Register HW_MMDC_MAARCR, field ARCR_DYN_JMP[11:8] (RW)
 *
 * ARCR Dynamic Jump. Each time an access wan't chosen by the optimization/reordering mechanism then
 * its dynamic score will be incremented by ARCR_DYN_JMP value. Setting ARCR_DYN_JMP may cause
 * starvation of low priority accesses ARCR_DYN_JMP must be smaller than ARCR_DYN_MAX Default
 * ARCR_DYN_JMP value is 0x0001 - encoding 1
 */

#define BP_MMDC_MAARCR_ARCR_DYN_JMP      (8)      //!< Bit position for MMDC_MAARCR_ARCR_DYN_JMP.
#define BM_MMDC_MAARCR_ARCR_DYN_JMP      (0x00000f00)  //!< Bit mask for MMDC_MAARCR_ARCR_DYN_JMP.

//! @brief Get value of MMDC_MAARCR_ARCR_DYN_JMP from a register value.
#define BG_MMDC_MAARCR_ARCR_DYN_JMP(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_MMDC_MAARCR_ARCR_DYN_JMP) >> BP_MMDC_MAARCR_ARCR_DYN_JMP)

//! @brief Format value for bitfield MMDC_MAARCR_ARCR_DYN_JMP.
#define BF_MMDC_MAARCR_ARCR_DYN_JMP(v)   ((__REG_VALUE_TYPE((v), reg32_t) << BP_MMDC_MAARCR_ARCR_DYN_JMP) & BM_MMDC_MAARCR_ARCR_DYN_JMP)

#ifndef __LANGUAGE_ASM__
//! @brief Set the ARCR_DYN_JMP field to a new value.
#define BW_MMDC_MAARCR_ARCR_DYN_JMP(v)   (HW_MMDC_MAARCR_WR((HW_MMDC_MAARCR_RD() & ~BM_MMDC_MAARCR_ARCR_DYN_JMP) | BF_MMDC_MAARCR_ARCR_DYN_JMP(v)))
#endif

/* --- Register HW_MMDC_MAARCR, field ARCR_ACC_HIT[18:16] (RW)
 *
 * ARCR Access Hit Rate. This value will be added by the optimization/reordering mechanism to any
 * pending access that has the same access type (read/write) as the previous access. Default value
 * of is ARCR_ACC_HIT 0x0010 - encoding 2.
 */

#define BP_MMDC_MAARCR_ARCR_ACC_HIT      (16)      //!< Bit position for MMDC_MAARCR_ARCR_ACC_HIT.
#define BM_MMDC_MAARCR_ARCR_ACC_HIT      (0x00070000)  //!< Bit mask for MMDC_MAARCR_ARCR_ACC_HIT.

//! @brief Get value of MMDC_MAARCR_ARCR_ACC_HIT from a register value.
#define BG_MMDC_MAARCR_ARCR_ACC_HIT(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_MMDC_MAARCR_ARCR_ACC_HIT) >> BP_MMDC_MAARCR_ARCR_ACC_HIT)

//! @brief Format value for bitfield MMDC_MAARCR_ARCR_ACC_HIT.
#define BF_MMDC_MAARCR_ARCR_ACC_HIT(v)   ((__REG_VALUE_TYPE((v), reg32_t) << BP_MMDC_MAARCR_ARCR_ACC_HIT) & BM_MMDC_MAARCR_ARCR_ACC_HIT)

#ifndef __LANGUAGE_ASM__
//! @brief Set the ARCR_ACC_HIT field to a new value.
#define BW_MMDC_MAARCR_ARCR_ACC_HIT(v)   (HW_MMDC_MAARCR_WR((HW_MMDC_MAARCR_RD() & ~BM_MMDC_MAARCR_ARCR_ACC_HIT) | BF_MMDC_MAARCR_ARCR_ACC_HIT(v)))
#endif

/* --- Register HW_MMDC_MAARCR, field ARCR_PAG_HIT[22:20] (RW)
 *
 * ARCR Page Hit Rate. This value will be added by the optimization/reordering mechanism to any
 * pending access that is targeted to an open DDR row. Default value of ARCR_PAG_HIT is 0x00100 -
 * encoding 4.
 */

#define BP_MMDC_MAARCR_ARCR_PAG_HIT      (20)      //!< Bit position for MMDC_MAARCR_ARCR_PAG_HIT.
#define BM_MMDC_MAARCR_ARCR_PAG_HIT      (0x00700000)  //!< Bit mask for MMDC_MAARCR_ARCR_PAG_HIT.

//! @brief Get value of MMDC_MAARCR_ARCR_PAG_HIT from a register value.
#define BG_MMDC_MAARCR_ARCR_PAG_HIT(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_MMDC_MAARCR_ARCR_PAG_HIT) >> BP_MMDC_MAARCR_ARCR_PAG_HIT)

//! @brief Format value for bitfield MMDC_MAARCR_ARCR_PAG_HIT.
#define BF_MMDC_MAARCR_ARCR_PAG_HIT(v)   ((__REG_VALUE_TYPE((v), reg32_t) << BP_MMDC_MAARCR_ARCR_PAG_HIT) & BM_MMDC_MAARCR_ARCR_PAG_HIT)

#ifndef __LANGUAGE_ASM__
//! @brief Set the ARCR_PAG_HIT field to a new value.
#define BW_MMDC_MAARCR_ARCR_PAG_HIT(v)   (HW_MMDC_MAARCR_WR((HW_MMDC_MAARCR_RD() & ~BM_MMDC_MAARCR_ARCR_PAG_HIT) | BF_MMDC_MAARCR_ARCR_PAG_HIT(v)))
#endif

/* --- Register HW_MMDC_MAARCR, field ARCR_RCH_EN[24] (RW)
 *
 * This bit defines whether Real time channel is activated and bypassed all other pending accesses,
 * So accesses with QoS=='F' will be granted the highest prioritiy in the optimization/reordering
 * mechanism Default value is 0x1 - encoding 1 (Enabled)
 *
 * Values:
 * 0 - normal prioritization, no bypassing
 * 1 - accesses with QoS=='F' bypass the arbitration
 */

#define BP_MMDC_MAARCR_ARCR_RCH_EN      (24)      //!< Bit position for MMDC_MAARCR_ARCR_RCH_EN.
#define BM_MMDC_MAARCR_ARCR_RCH_EN      (0x01000000)  //!< Bit mask for MMDC_MAARCR_ARCR_RCH_EN.

//! @brief Get value of MMDC_MAARCR_ARCR_RCH_EN from a register value.
#define BG_MMDC_MAARCR_ARCR_RCH_EN(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_MMDC_MAARCR_ARCR_RCH_EN) >> BP_MMDC_MAARCR_ARCR_RCH_EN)

//! @brief Format value for bitfield MMDC_MAARCR_ARCR_RCH_EN.
#define BF_MMDC_MAARCR_ARCR_RCH_EN(v)   ((__REG_VALUE_TYPE((v), reg32_t) << BP_MMDC_MAARCR_ARCR_RCH_EN) & BM_MMDC_MAARCR_ARCR_RCH_EN)

#ifndef __LANGUAGE_ASM__
//! @brief Set the ARCR_RCH_EN field to a new value.
#define BW_MMDC_MAARCR_ARCR_RCH_EN(v)   (HW_MMDC_MAARCR_WR((HW_MMDC_MAARCR_RD() & ~BM_MMDC_MAARCR_ARCR_RCH_EN) | BF_MMDC_MAARCR_ARCR_RCH_EN(v)))
#endif


/* --- Register HW_MMDC_MAARCR, field ARCR_EXC_ERR_EN[28] (RW)
 *
 * This bit defines whether exclusive read/write access violation of AXI 6.2.4 rule result in SLV
 * Error response or in OKAY response Default value is 0x1 - encoding 1(response is SLV Error)
 *
 * Values:
 * 0 - violation of AXI exclusive rules (6.2.4) result in OKAY response (rresp/bresp=2'b00)
 * 1 - violation of AXI exclusive rules (6.2.4) result in SLAVE Error response (rresp/bresp=2'b10)
 */

#define BP_MMDC_MAARCR_ARCR_EXC_ERR_EN      (28)      //!< Bit position for MMDC_MAARCR_ARCR_EXC_ERR_EN.
#define BM_MMDC_MAARCR_ARCR_EXC_ERR_EN      (0x10000000)  //!< Bit mask for MMDC_MAARCR_ARCR_EXC_ERR_EN.

//! @brief Get value of MMDC_MAARCR_ARCR_EXC_ERR_EN from a register value.
#define BG_MMDC_MAARCR_ARCR_EXC_ERR_EN(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_MMDC_MAARCR_ARCR_EXC_ERR_EN) >> BP_MMDC_MAARCR_ARCR_EXC_ERR_EN)

//! @brief Format value for bitfield MMDC_MAARCR_ARCR_EXC_ERR_EN.
#define BF_MMDC_MAARCR_ARCR_EXC_ERR_EN(v)   ((__REG_VALUE_TYPE((v), reg32_t) << BP_MMDC_MAARCR_ARCR_EXC_ERR_EN) & BM_MMDC_MAARCR_ARCR_EXC_ERR_EN)

#ifndef __LANGUAGE_ASM__
//! @brief Set the ARCR_EXC_ERR_EN field to a new value.
#define BW_MMDC_MAARCR_ARCR_EXC_ERR_EN(v)   (HW_MMDC_MAARCR_WR((HW_MMDC_MAARCR_RD() & ~BM_MMDC_MAARCR_ARCR_EXC_ERR_EN) | BF_MMDC_MAARCR_ARCR_EXC_ERR_EN(v)))
#endif


/* --- Register HW_MMDC_MAARCR, field ARCR_SEC_ERR_EN[30] (RW)
 *
 * This bit defines whether security read/write access violation result in SLV Error response or in
 * OKAY response Default value is 0x1 - encoding 1(response is SLV Error, rresp/bresp=2'b10)
 *
 * Values:
 * 0 - security violation results in OKAY response (rresp/bresp=2'b00)
 * 1 - security violation results in SLAVE Error response (rresp/bresp=2'b10)
 */

#define BP_MMDC_MAARCR_ARCR_SEC_ERR_EN      (30)      //!< Bit position for MMDC_MAARCR_ARCR_SEC_ERR_EN.
#define BM_MMDC_MAARCR_ARCR_SEC_ERR_EN      (0x40000000)  //!< Bit mask for MMDC_MAARCR_ARCR_SEC_ERR_EN.

//! @brief Get value of MMDC_MAARCR_ARCR_SEC_ERR_EN from a register value.
#define BG_MMDC_MAARCR_ARCR_SEC_ERR_EN(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_MMDC_MAARCR_ARCR_SEC_ERR_EN) >> BP_MMDC_MAARCR_ARCR_SEC_ERR_EN)

//! @brief Format value for bitfield MMDC_MAARCR_ARCR_SEC_ERR_EN.
#define BF_MMDC_MAARCR_ARCR_SEC_ERR_EN(v)   ((__REG_VALUE_TYPE((v), reg32_t) << BP_MMDC_MAARCR_ARCR_SEC_ERR_EN) & BM_MMDC_MAARCR_ARCR_SEC_ERR_EN)

#ifndef __LANGUAGE_ASM__
//! @brief Set the ARCR_SEC_ERR_EN field to a new value.
#define BW_MMDC_MAARCR_ARCR_SEC_ERR_EN(v)   (HW_MMDC_MAARCR_WR((HW_MMDC_MAARCR_RD() & ~BM_MMDC_MAARCR_ARCR_SEC_ERR_EN) | BF_MMDC_MAARCR_ARCR_SEC_ERR_EN(v)))
#endif


/* --- Register HW_MMDC_MAARCR, field ARCR_SEC_ERR_LOCK[31] (RW)
 *
 * Once set, this bit locks ARCR_SEC_ERR_EN and prevents from its updating. This bit can be only
 * cleared by reset Default value is 0x0 - encoding 0 (unlocked)
 *
 * Values:
 * 0 - ARCR_SEC_ERR_EN is unlocked, so can be updated any moment
 * 1 - ARCR_SEC_ERR_EN is locked, so it can't be updated
 */

#define BP_MMDC_MAARCR_ARCR_SEC_ERR_LOCK      (31)      //!< Bit position for MMDC_MAARCR_ARCR_SEC_ERR_LOCK.
#define BM_MMDC_MAARCR_ARCR_SEC_ERR_LOCK      (0x80000000)  //!< Bit mask for MMDC_MAARCR_ARCR_SEC_ERR_LOCK.

//! @brief Get value of MMDC_MAARCR_ARCR_SEC_ERR_LOCK from a register value.
#define BG_MMDC_MAARCR_ARCR_SEC_ERR_LOCK(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_MMDC_MAARCR_ARCR_SEC_ERR_LOCK) >> BP_MMDC_MAARCR_ARCR_SEC_ERR_LOCK)

//! @brief Format value for bitfield MMDC_MAARCR_ARCR_SEC_ERR_LOCK.
#define BF_MMDC_MAARCR_ARCR_SEC_ERR_LOCK(v)   ((__REG_VALUE_TYPE((v), reg32_t) << BP_MMDC_MAARCR_ARCR_SEC_ERR_LOCK) & BM_MMDC_MAARCR_ARCR_SEC_ERR_LOCK)

#ifndef __LANGUAGE_ASM__
//! @brief Set the ARCR_SEC_ERR_LOCK field to a new value.
#define BW_MMDC_MAARCR_ARCR_SEC_ERR_LOCK(v)   (HW_MMDC_MAARCR_WR((HW_MMDC_MAARCR_RD() & ~BM_MMDC_MAARCR_ARCR_SEC_ERR_LOCK) | BF_MMDC_MAARCR_ARCR_SEC_ERR_LOCK(v)))
#endif


//-------------------------------------------------------------------------------------------
// HW_MMDC_MAPSR - MMDC Core Power Saving Control and Status Register
//-------------------------------------------------------------------------------------------

#ifndef __LANGUAGE_ASM__
/*!
 * @brief HW_MMDC_MAPSR - MMDC Core Power Saving Control and Status Register (RW)
 *
 * Reset value: 0x00011007
 *
 * The MAPSR determines the power saving features of MMDC. For further information see .  Supported
 * Mode Of Operations:  For Channel 0: All  For Channel 1: LP2_2ch_x16, LP2_2ch_x32
 */
typedef union _hw_mmdc_mapsr
{
    reg32_t U;
    struct _hw_mmdc_mapsr_bitfields
    {
        unsigned PSD : 1; //!< [0] Automatic Power Saving Disable.
        unsigned RESERVED0 : 3; //!< [3:1] Reserved.
        unsigned PSS : 1; //!< [4] Power Saving Status.
        unsigned RIS : 1; //!< [5] Read Idle Status.This read only bit indicates whether read request buffer is idle (empty) or not.
        unsigned WIS : 1; //!< [6] Write Idle Status.This read only bit indicates whether write request buffer is idle (empty) or not.
        unsigned RESERVED1 : 1; //!< [7] Reserved.
        unsigned PST : 8; //!< [15:8] Automatic Power saving timer.
        unsigned RESERVED2 : 4; //!< [19:16] Reserved
        unsigned LPMD : 1; //!< [20] General LPMD request.
        unsigned DVFS : 1; //!< [21] General DVFS request.
        unsigned RESERVED3 : 2; //!< [23:22] Reserved
        unsigned LPACK : 1; //!< [24] General low-power acknowledge.
        unsigned DVACK : 1; //!< [25] General DVFS acknowledge.
        unsigned RESERVED4 : 6; //!< [31:26] Reserved
    } B;
} hw_mmdc_mapsr_t;
#endif

/*
 * constants & macros for entire MMDC_MAPSR register
 */
#define HW_MMDC_MAPSR_ADDR      (REGS_MMDC_BASE + 0x404)

#ifndef __LANGUAGE_ASM__
#define HW_MMDC_MAPSR           (*(volatile hw_mmdc_mapsr_t *) HW_MMDC_MAPSR_ADDR)
#define HW_MMDC_MAPSR_RD()      (HW_MMDC_MAPSR.U)
#define HW_MMDC_MAPSR_WR(v)     (HW_MMDC_MAPSR.U = (v))
#define HW_MMDC_MAPSR_SET(v)    (HW_MMDC_MAPSR_WR(HW_MMDC_MAPSR_RD() |  (v)))
#define HW_MMDC_MAPSR_CLR(v)    (HW_MMDC_MAPSR_WR(HW_MMDC_MAPSR_RD() & ~(v)))
#define HW_MMDC_MAPSR_TOG(v)    (HW_MMDC_MAPSR_WR(HW_MMDC_MAPSR_RD() ^  (v)))
#endif

/*
 * constants & macros for individual MMDC_MAPSR bitfields
 */

/* --- Register HW_MMDC_MAPSR, field PSD[0] (RW)
 *
 * Automatic Power Saving Disable. When the value of PSD is "0" (i.e automatic power saving is
 * enabled) then the PST is activated and MMDC will enter automatically to self-refresh while the
 * number of idle cycle reached. This bit must be disabled (i.e set to "1") during calibration
 * process
 *
 * Values:
 * 0 - power saving enabled
 * 1 - power saving disabled (default)
 */

#define BP_MMDC_MAPSR_PSD      (0)      //!< Bit position for MMDC_MAPSR_PSD.
#define BM_MMDC_MAPSR_PSD      (0x00000001)  //!< Bit mask for MMDC_MAPSR_PSD.

//! @brief Get value of MMDC_MAPSR_PSD from a register value.
#define BG_MMDC_MAPSR_PSD(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_MMDC_MAPSR_PSD) >> BP_MMDC_MAPSR_PSD)

//! @brief Format value for bitfield MMDC_MAPSR_PSD.
#define BF_MMDC_MAPSR_PSD(v)   ((__REG_VALUE_TYPE((v), reg32_t) << BP_MMDC_MAPSR_PSD) & BM_MMDC_MAPSR_PSD)

#ifndef __LANGUAGE_ASM__
//! @brief Set the PSD field to a new value.
#define BW_MMDC_MAPSR_PSD(v)   (HW_MMDC_MAPSR_WR((HW_MMDC_MAPSR_RD() & ~BM_MMDC_MAPSR_PSD) | BF_MMDC_MAPSR_PSD(v)))
#endif


/* --- Register HW_MMDC_MAPSR, field PSS[4] (RO)
 *
 * Power Saving Status. This read only bit indicates whether the MMDC is in automatic power saving
 * mode.
 *
 * Values:
 * 0 - not in power saving
 * 1 - power saving
 */

#define BP_MMDC_MAPSR_PSS      (4)      //!< Bit position for MMDC_MAPSR_PSS.
#define BM_MMDC_MAPSR_PSS      (0x00000010)  //!< Bit mask for MMDC_MAPSR_PSS.

//! @brief Get value of MMDC_MAPSR_PSS from a register value.
#define BG_MMDC_MAPSR_PSS(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_MMDC_MAPSR_PSS) >> BP_MMDC_MAPSR_PSS)


/* --- Register HW_MMDC_MAPSR, field RIS[5] (RO)
 *
 * Read Idle Status.This read only bit indicates whether read request buffer is idle (empty) or not.
 *
 * Values:
 * 0 - idle
 * 1 - not idle
 */

#define BP_MMDC_MAPSR_RIS      (5)      //!< Bit position for MMDC_MAPSR_RIS.
#define BM_MMDC_MAPSR_RIS      (0x00000020)  //!< Bit mask for MMDC_MAPSR_RIS.

//! @brief Get value of MMDC_MAPSR_RIS from a register value.
#define BG_MMDC_MAPSR_RIS(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_MMDC_MAPSR_RIS) >> BP_MMDC_MAPSR_RIS)


/* --- Register HW_MMDC_MAPSR, field WIS[6] (RO)
 *
 * Write Idle Status.This read only bit indicates whether write request buffer is idle (empty) or
 * not.
 *
 * Values:
 * 0 - idle
 * 1 - not idle
 */

#define BP_MMDC_MAPSR_WIS      (6)      //!< Bit position for MMDC_MAPSR_WIS.
#define BM_MMDC_MAPSR_WIS      (0x00000040)  //!< Bit mask for MMDC_MAPSR_WIS.

//! @brief Get value of MMDC_MAPSR_WIS from a register value.
#define BG_MMDC_MAPSR_WIS(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_MMDC_MAPSR_WIS) >> BP_MMDC_MAPSR_WIS)


/* --- Register HW_MMDC_MAPSR, field PST[15:8] (RW)
 *
 * Automatic Power saving timer. Valid only when PSD is set to "0". When the MMDC is idle for amount
 * of cycles specified in that field then the DDR device will be entered automatically into self-
 * refresh mode. The real value which is used is register-value multiplied by 64.
 *
 * Values:
 * 00000000 - Reserved - this value is forbidden.
 * 00000001 - timer is configured to 64 clock cycles.
 * 00000010 - timer is configured to 128 clock cycles.
 * 00010000 - (Default)- 1024 clock cycles.
 * 11111111 - timer clock is configured to 16320 clock cycles.
 */

#define BP_MMDC_MAPSR_PST      (8)      //!< Bit position for MMDC_MAPSR_PST.
#define BM_MMDC_MAPSR_PST      (0x0000ff00)  //!< Bit mask for MMDC_MAPSR_PST.

//! @brief Get value of MMDC_MAPSR_PST from a register value.
#define BG_MMDC_MAPSR_PST(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_MMDC_MAPSR_PST) >> BP_MMDC_MAPSR_PST)

//! @brief Format value for bitfield MMDC_MAPSR_PST.
#define BF_MMDC_MAPSR_PST(v)   ((__REG_VALUE_TYPE((v), reg32_t) << BP_MMDC_MAPSR_PST) & BM_MMDC_MAPSR_PST)

#ifndef __LANGUAGE_ASM__
//! @brief Set the PST field to a new value.
#define BW_MMDC_MAPSR_PST(v)   (HW_MMDC_MAPSR_WR((HW_MMDC_MAPSR_RD() & ~BM_MMDC_MAPSR_PST) | BF_MMDC_MAPSR_PST(v)))
#endif


/* --- Register HW_MMDC_MAPSR, field LPMD[20] (RW)
 *
 * General LPMD request. SW request for LPMD. Assertion of this bit will yield in self-refresh entry
 * sequence
 *
 * Values:
 * 0 - no lpmd request
 * 1 - lpmd request
 */

#define BP_MMDC_MAPSR_LPMD      (20)      //!< Bit position for MMDC_MAPSR_LPMD.
#define BM_MMDC_MAPSR_LPMD      (0x00100000)  //!< Bit mask for MMDC_MAPSR_LPMD.

//! @brief Get value of MMDC_MAPSR_LPMD from a register value.
#define BG_MMDC_MAPSR_LPMD(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_MMDC_MAPSR_LPMD) >> BP_MMDC_MAPSR_LPMD)

//! @brief Format value for bitfield MMDC_MAPSR_LPMD.
#define BF_MMDC_MAPSR_LPMD(v)   ((__REG_VALUE_TYPE((v), reg32_t) << BP_MMDC_MAPSR_LPMD) & BM_MMDC_MAPSR_LPMD)

#ifndef __LANGUAGE_ASM__
//! @brief Set the LPMD field to a new value.
#define BW_MMDC_MAPSR_LPMD(v)   (HW_MMDC_MAPSR_WR((HW_MMDC_MAPSR_RD() & ~BM_MMDC_MAPSR_LPMD) | BF_MMDC_MAPSR_LPMD(v)))
#endif


/* --- Register HW_MMDC_MAPSR, field DVFS[21] (RW)
 *
 * General DVFS request. SW request for DVFS. Assertion of this bit will yield in self-refresh entry
 * sequence
 *
 * Values:
 * 0 - no dvfs request
 * 1 - dvfs request
 */

#define BP_MMDC_MAPSR_DVFS      (21)      //!< Bit position for MMDC_MAPSR_DVFS.
#define BM_MMDC_MAPSR_DVFS      (0x00200000)  //!< Bit mask for MMDC_MAPSR_DVFS.

//! @brief Get value of MMDC_MAPSR_DVFS from a register value.
#define BG_MMDC_MAPSR_DVFS(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_MMDC_MAPSR_DVFS) >> BP_MMDC_MAPSR_DVFS)

//! @brief Format value for bitfield MMDC_MAPSR_DVFS.
#define BF_MMDC_MAPSR_DVFS(v)   ((__REG_VALUE_TYPE((v), reg32_t) << BP_MMDC_MAPSR_DVFS) & BM_MMDC_MAPSR_DVFS)

#ifndef __LANGUAGE_ASM__
//! @brief Set the DVFS field to a new value.
#define BW_MMDC_MAPSR_DVFS(v)   (HW_MMDC_MAPSR_WR((HW_MMDC_MAPSR_RD() & ~BM_MMDC_MAPSR_DVFS) | BF_MMDC_MAPSR_DVFS(v)))
#endif


/* --- Register HW_MMDC_MAPSR, field LPACK[24] (RO)
 *
 * General low-power acknowledge. This read only bit indicates whether a low-power acknowledge was
 * asserted and that MMDC is in self-refresh mode
 */

#define BP_MMDC_MAPSR_LPACK      (24)      //!< Bit position for MMDC_MAPSR_LPACK.
#define BM_MMDC_MAPSR_LPACK      (0x01000000)  //!< Bit mask for MMDC_MAPSR_LPACK.

//! @brief Get value of MMDC_MAPSR_LPACK from a register value.
#define BG_MMDC_MAPSR_LPACK(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_MMDC_MAPSR_LPACK) >> BP_MMDC_MAPSR_LPACK)

/* --- Register HW_MMDC_MAPSR, field DVACK[25] (RO)
 *
 * General DVFS acknowledge. This read only bit indicates whether a dvfs acknowledge was asserted
 * and that MMDC is in self-refresh mode
 */

#define BP_MMDC_MAPSR_DVACK      (25)      //!< Bit position for MMDC_MAPSR_DVACK.
#define BM_MMDC_MAPSR_DVACK      (0x02000000)  //!< Bit mask for MMDC_MAPSR_DVACK.

//! @brief Get value of MMDC_MAPSR_DVACK from a register value.
#define BG_MMDC_MAPSR_DVACK(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_MMDC_MAPSR_DVACK) >> BP_MMDC_MAPSR_DVACK)

//-------------------------------------------------------------------------------------------
// HW_MMDC_MAEXIDR0 - MMDC Core Exclusive ID Monitor Register0
//-------------------------------------------------------------------------------------------

#ifndef __LANGUAGE_ASM__
/*!
 * @brief HW_MMDC_MAEXIDR0 - MMDC Core Exclusive ID Monitor Register0 (RW)
 *
 * Reset value: 0x00200000
 *
 * This register defines the ID to be monitored for exclusive accesses of monitor0 and monitor1. For
 * further information see .  Supported Mode Of Operations:  For Channel 0: All  For Channel 1:
 * LP2_2ch_x16, LP2_2ch_x32
 */
typedef union _hw_mmdc_maexidr0
{
    reg32_t U;
    struct _hw_mmdc_maexidr0_bitfields
    {
        unsigned EXC_ID_MONITOR0 : 16; //!< [15:0] This feild defines ID for Exclusive monitor#0.
        unsigned EXC_ID_MONITOR1 : 16; //!< [31:16] This feild defines ID for Exclusive monitor#1.
    } B;
} hw_mmdc_maexidr0_t;
#endif

/*
 * constants & macros for entire MMDC_MAEXIDR0 register
 */
#define HW_MMDC_MAEXIDR0_ADDR      (REGS_MMDC_BASE + 0x408)

#ifndef __LANGUAGE_ASM__
#define HW_MMDC_MAEXIDR0           (*(volatile hw_mmdc_maexidr0_t *) HW_MMDC_MAEXIDR0_ADDR)
#define HW_MMDC_MAEXIDR0_RD()      (HW_MMDC_MAEXIDR0.U)
#define HW_MMDC_MAEXIDR0_WR(v)     (HW_MMDC_MAEXIDR0.U = (v))
#define HW_MMDC_MAEXIDR0_SET(v)    (HW_MMDC_MAEXIDR0_WR(HW_MMDC_MAEXIDR0_RD() |  (v)))
#define HW_MMDC_MAEXIDR0_CLR(v)    (HW_MMDC_MAEXIDR0_WR(HW_MMDC_MAEXIDR0_RD() & ~(v)))
#define HW_MMDC_MAEXIDR0_TOG(v)    (HW_MMDC_MAEXIDR0_WR(HW_MMDC_MAEXIDR0_RD() ^  (v)))
#endif

/*
 * constants & macros for individual MMDC_MAEXIDR0 bitfields
 */

/* --- Register HW_MMDC_MAEXIDR0, field EXC_ID_MONITOR0[15:0] (RW)
 *
 * This feild defines ID for Exclusive monitor#0. Default value is 0x0000
 */

#define BP_MMDC_MAEXIDR0_EXC_ID_MONITOR0      (0)      //!< Bit position for MMDC_MAEXIDR0_EXC_ID_MONITOR0.
#define BM_MMDC_MAEXIDR0_EXC_ID_MONITOR0      (0x0000ffff)  //!< Bit mask for MMDC_MAEXIDR0_EXC_ID_MONITOR0.

//! @brief Get value of MMDC_MAEXIDR0_EXC_ID_MONITOR0 from a register value.
#define BG_MMDC_MAEXIDR0_EXC_ID_MONITOR0(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_MMDC_MAEXIDR0_EXC_ID_MONITOR0) >> BP_MMDC_MAEXIDR0_EXC_ID_MONITOR0)

//! @brief Format value for bitfield MMDC_MAEXIDR0_EXC_ID_MONITOR0.
#define BF_MMDC_MAEXIDR0_EXC_ID_MONITOR0(v)   ((__REG_VALUE_TYPE((v), reg32_t) << BP_MMDC_MAEXIDR0_EXC_ID_MONITOR0) & BM_MMDC_MAEXIDR0_EXC_ID_MONITOR0)

#ifndef __LANGUAGE_ASM__
//! @brief Set the EXC_ID_MONITOR0 field to a new value.
#define BW_MMDC_MAEXIDR0_EXC_ID_MONITOR0(v)   (HW_MMDC_MAEXIDR0_WR((HW_MMDC_MAEXIDR0_RD() & ~BM_MMDC_MAEXIDR0_EXC_ID_MONITOR0) | BF_MMDC_MAEXIDR0_EXC_ID_MONITOR0(v)))
#endif

/* --- Register HW_MMDC_MAEXIDR0, field EXC_ID_MONITOR1[31:16] (RW)
 *
 * This feild defines ID for Exclusive monitor#1. Default value is 0x0020
 */

#define BP_MMDC_MAEXIDR0_EXC_ID_MONITOR1      (16)      //!< Bit position for MMDC_MAEXIDR0_EXC_ID_MONITOR1.
#define BM_MMDC_MAEXIDR0_EXC_ID_MONITOR1      (0xffff0000)  //!< Bit mask for MMDC_MAEXIDR0_EXC_ID_MONITOR1.

//! @brief Get value of MMDC_MAEXIDR0_EXC_ID_MONITOR1 from a register value.
#define BG_MMDC_MAEXIDR0_EXC_ID_MONITOR1(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_MMDC_MAEXIDR0_EXC_ID_MONITOR1) >> BP_MMDC_MAEXIDR0_EXC_ID_MONITOR1)

//! @brief Format value for bitfield MMDC_MAEXIDR0_EXC_ID_MONITOR1.
#define BF_MMDC_MAEXIDR0_EXC_ID_MONITOR1(v)   ((__REG_VALUE_TYPE((v), reg32_t) << BP_MMDC_MAEXIDR0_EXC_ID_MONITOR1) & BM_MMDC_MAEXIDR0_EXC_ID_MONITOR1)

#ifndef __LANGUAGE_ASM__
//! @brief Set the EXC_ID_MONITOR1 field to a new value.
#define BW_MMDC_MAEXIDR0_EXC_ID_MONITOR1(v)   (HW_MMDC_MAEXIDR0_WR((HW_MMDC_MAEXIDR0_RD() & ~BM_MMDC_MAEXIDR0_EXC_ID_MONITOR1) | BF_MMDC_MAEXIDR0_EXC_ID_MONITOR1(v)))
#endif

//-------------------------------------------------------------------------------------------
// HW_MMDC_MAEXIDR1 - MMDC Core Exclusive ID Monitor Register1
//-------------------------------------------------------------------------------------------

#ifndef __LANGUAGE_ASM__
/*!
 * @brief HW_MMDC_MAEXIDR1 - MMDC Core Exclusive ID Monitor Register1 (RW)
 *
 * Reset value: 0x00600040
 *
 * This register defines the ID to be monitored for exclusive accesses of monitor2 and monitor3. For
 * further information see .  Supported Mode Of Operations:  For Channel 0: All  For Channel 1:
 * LP2_2ch_x16, LP2_2ch_x32
 */
typedef union _hw_mmdc_maexidr1
{
    reg32_t U;
    struct _hw_mmdc_maexidr1_bitfields
    {
        unsigned EXC_ID_MONITOR2 : 16; //!< [15:0] This feild defines ID for Exclusive monitor#2.
        unsigned EXC_ID_MONITOR3 : 16; //!< [31:16] This feild defines ID for Exclusive monitor#3.
    } B;
} hw_mmdc_maexidr1_t;
#endif

/*
 * constants & macros for entire MMDC_MAEXIDR1 register
 */
#define HW_MMDC_MAEXIDR1_ADDR      (REGS_MMDC_BASE + 0x40c)

#ifndef __LANGUAGE_ASM__
#define HW_MMDC_MAEXIDR1           (*(volatile hw_mmdc_maexidr1_t *) HW_MMDC_MAEXIDR1_ADDR)
#define HW_MMDC_MAEXIDR1_RD()      (HW_MMDC_MAEXIDR1.U)
#define HW_MMDC_MAEXIDR1_WR(v)     (HW_MMDC_MAEXIDR1.U = (v))
#define HW_MMDC_MAEXIDR1_SET(v)    (HW_MMDC_MAEXIDR1_WR(HW_MMDC_MAEXIDR1_RD() |  (v)))
#define HW_MMDC_MAEXIDR1_CLR(v)    (HW_MMDC_MAEXIDR1_WR(HW_MMDC_MAEXIDR1_RD() & ~(v)))
#define HW_MMDC_MAEXIDR1_TOG(v)    (HW_MMDC_MAEXIDR1_WR(HW_MMDC_MAEXIDR1_RD() ^  (v)))
#endif

/*
 * constants & macros for individual MMDC_MAEXIDR1 bitfields
 */

/* --- Register HW_MMDC_MAEXIDR1, field EXC_ID_MONITOR2[15:0] (RW)
 *
 * This feild defines ID for Exclusive monitor#2. Default value is 0x0040
 */

#define BP_MMDC_MAEXIDR1_EXC_ID_MONITOR2      (0)      //!< Bit position for MMDC_MAEXIDR1_EXC_ID_MONITOR2.
#define BM_MMDC_MAEXIDR1_EXC_ID_MONITOR2      (0x0000ffff)  //!< Bit mask for MMDC_MAEXIDR1_EXC_ID_MONITOR2.

//! @brief Get value of MMDC_MAEXIDR1_EXC_ID_MONITOR2 from a register value.
#define BG_MMDC_MAEXIDR1_EXC_ID_MONITOR2(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_MMDC_MAEXIDR1_EXC_ID_MONITOR2) >> BP_MMDC_MAEXIDR1_EXC_ID_MONITOR2)

//! @brief Format value for bitfield MMDC_MAEXIDR1_EXC_ID_MONITOR2.
#define BF_MMDC_MAEXIDR1_EXC_ID_MONITOR2(v)   ((__REG_VALUE_TYPE((v), reg32_t) << BP_MMDC_MAEXIDR1_EXC_ID_MONITOR2) & BM_MMDC_MAEXIDR1_EXC_ID_MONITOR2)

#ifndef __LANGUAGE_ASM__
//! @brief Set the EXC_ID_MONITOR2 field to a new value.
#define BW_MMDC_MAEXIDR1_EXC_ID_MONITOR2(v)   (HW_MMDC_MAEXIDR1_WR((HW_MMDC_MAEXIDR1_RD() & ~BM_MMDC_MAEXIDR1_EXC_ID_MONITOR2) | BF_MMDC_MAEXIDR1_EXC_ID_MONITOR2(v)))
#endif

/* --- Register HW_MMDC_MAEXIDR1, field EXC_ID_MONITOR3[31:16] (RW)
 *
 * This feild defines ID for Exclusive monitor#3. Default value is 0x0060
 */

#define BP_MMDC_MAEXIDR1_EXC_ID_MONITOR3      (16)      //!< Bit position for MMDC_MAEXIDR1_EXC_ID_MONITOR3.
#define BM_MMDC_MAEXIDR1_EXC_ID_MONITOR3      (0xffff0000)  //!< Bit mask for MMDC_MAEXIDR1_EXC_ID_MONITOR3.

//! @brief Get value of MMDC_MAEXIDR1_EXC_ID_MONITOR3 from a register value.
#define BG_MMDC_MAEXIDR1_EXC_ID_MONITOR3(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_MMDC_MAEXIDR1_EXC_ID_MONITOR3) >> BP_MMDC_MAEXIDR1_EXC_ID_MONITOR3)

//! @brief Format value for bitfield MMDC_MAEXIDR1_EXC_ID_MONITOR3.
#define BF_MMDC_MAEXIDR1_EXC_ID_MONITOR3(v)   ((__REG_VALUE_TYPE((v), reg32_t) << BP_MMDC_MAEXIDR1_EXC_ID_MONITOR3) & BM_MMDC_MAEXIDR1_EXC_ID_MONITOR3)

#ifndef __LANGUAGE_ASM__
//! @brief Set the EXC_ID_MONITOR3 field to a new value.
#define BW_MMDC_MAEXIDR1_EXC_ID_MONITOR3(v)   (HW_MMDC_MAEXIDR1_WR((HW_MMDC_MAEXIDR1_RD() & ~BM_MMDC_MAEXIDR1_EXC_ID_MONITOR3) | BF_MMDC_MAEXIDR1_EXC_ID_MONITOR3(v)))
#endif

//-------------------------------------------------------------------------------------------
// HW_MMDC_MADPCR0 - MMDC Core Debug and Profiling Control Register 0
//-------------------------------------------------------------------------------------------

#ifndef __LANGUAGE_ASM__
/*!
 * @brief HW_MMDC_MADPCR0 - MMDC Core Debug and Profiling Control Register 0 (RW)
 *
 * Reset value: 0x00000000
 *
 * Supported Mode Of Operations:  For Channel 0: All  For Channel 1: LP2_2ch_x16, LP2_2ch_x32
 */
typedef union _hw_mmdc_madpcr0
{
    reg32_t U;
    struct _hw_mmdc_madpcr0_bitfields
    {
        unsigned DBG_EN : 1; //!< [0] Debug and Profiling Enable.
        unsigned DBG_RST : 1; //!< [1] Debug and Profiling Reset.
        unsigned PRF_FRZ : 1; //!< [2] Profiling freeze.
        unsigned CYC_OVF : 1; //!< [3] Total Profiling Cycles Count Overflow.
        unsigned RESERVED0 : 4; //!< [7:4] Reserved.
        unsigned SBS_EN : 1; //!< [8] Step By Step debug Enable.
        unsigned SBS : 1; //!< [9] Step By Step trigger.
        unsigned RESERVED1 : 22; //!< [31:10] Reserved.
    } B;
} hw_mmdc_madpcr0_t;
#endif

/*
 * constants & macros for entire MMDC_MADPCR0 register
 */
#define HW_MMDC_MADPCR0_ADDR      (REGS_MMDC_BASE + 0x410)

#ifndef __LANGUAGE_ASM__
#define HW_MMDC_MADPCR0           (*(volatile hw_mmdc_madpcr0_t *) HW_MMDC_MADPCR0_ADDR)
#define HW_MMDC_MADPCR0_RD()      (HW_MMDC_MADPCR0.U)
#define HW_MMDC_MADPCR0_WR(v)     (HW_MMDC_MADPCR0.U = (v))
#define HW_MMDC_MADPCR0_SET(v)    (HW_MMDC_MADPCR0_WR(HW_MMDC_MADPCR0_RD() |  (v)))
#define HW_MMDC_MADPCR0_CLR(v)    (HW_MMDC_MADPCR0_WR(HW_MMDC_MADPCR0_RD() & ~(v)))
#define HW_MMDC_MADPCR0_TOG(v)    (HW_MMDC_MADPCR0_WR(HW_MMDC_MADPCR0_RD() ^  (v)))
#endif

/*
 * constants & macros for individual MMDC_MADPCR0 bitfields
 */

/* --- Register HW_MMDC_MADPCR0, field DBG_EN[0] (RW)
 *
 * Debug and Profiling Enable. Enable debug and profiling mechanism. When this bit is asserted then
 * the MMDC will perform a profiling based on the ID that is configured to MADPCR1. Upon assertion
 * of PRF_FRZ the profiling will be freezed and the profiling results will be sampled to the status
 * registers (MADPSR0-MADPSR5). For further information see . default is "disable"
 *
 * Values:
 * 0 - disable
 * 1 - enable
 */

#define BP_MMDC_MADPCR0_DBG_EN      (0)      //!< Bit position for MMDC_MADPCR0_DBG_EN.
#define BM_MMDC_MADPCR0_DBG_EN      (0x00000001)  //!< Bit mask for MMDC_MADPCR0_DBG_EN.

//! @brief Get value of MMDC_MADPCR0_DBG_EN from a register value.
#define BG_MMDC_MADPCR0_DBG_EN(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_MMDC_MADPCR0_DBG_EN) >> BP_MMDC_MADPCR0_DBG_EN)

//! @brief Format value for bitfield MMDC_MADPCR0_DBG_EN.
#define BF_MMDC_MADPCR0_DBG_EN(v)   ((__REG_VALUE_TYPE((v), reg32_t) << BP_MMDC_MADPCR0_DBG_EN) & BM_MMDC_MADPCR0_DBG_EN)

#ifndef __LANGUAGE_ASM__
//! @brief Set the DBG_EN field to a new value.
#define BW_MMDC_MADPCR0_DBG_EN(v)   (HW_MMDC_MADPCR0_WR((HW_MMDC_MADPCR0_RD() & ~BM_MMDC_MADPCR0_DBG_EN) | BF_MMDC_MADPCR0_DBG_EN(v)))
#endif


/* --- Register HW_MMDC_MADPCR0, field DBG_RST[1] (RW)
 *
 * Debug and Profiling Reset. Reset all debug and profiling counters and components.
 *
 * Values:
 * 0 - no reset
 * 1 - reset
 */

#define BP_MMDC_MADPCR0_DBG_RST      (1)      //!< Bit position for MMDC_MADPCR0_DBG_RST.
#define BM_MMDC_MADPCR0_DBG_RST      (0x00000002)  //!< Bit mask for MMDC_MADPCR0_DBG_RST.

//! @brief Get value of MMDC_MADPCR0_DBG_RST from a register value.
#define BG_MMDC_MADPCR0_DBG_RST(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_MMDC_MADPCR0_DBG_RST) >> BP_MMDC_MADPCR0_DBG_RST)

//! @brief Format value for bitfield MMDC_MADPCR0_DBG_RST.
#define BF_MMDC_MADPCR0_DBG_RST(v)   ((__REG_VALUE_TYPE((v), reg32_t) << BP_MMDC_MADPCR0_DBG_RST) & BM_MMDC_MADPCR0_DBG_RST)

#ifndef __LANGUAGE_ASM__
//! @brief Set the DBG_RST field to a new value.
#define BW_MMDC_MADPCR0_DBG_RST(v)   (HW_MMDC_MADPCR0_WR((HW_MMDC_MADPCR0_RD() & ~BM_MMDC_MADPCR0_DBG_RST) | BF_MMDC_MADPCR0_DBG_RST(v)))
#endif


/* --- Register HW_MMDC_MADPCR0, field PRF_FRZ[2] (RW)
 *
 * Profiling freeze. When this bit is assertted then the profilling mechanism will be freezed and
 * the associated status registers ( MADPSR0-MADPSR5) will hold the the current profiling values.
 *
 * Values:
 * 0 - profiling counters are not frozen
 * 1 - profiling counters are frozen
 */

#define BP_MMDC_MADPCR0_PRF_FRZ      (2)      //!< Bit position for MMDC_MADPCR0_PRF_FRZ.
#define BM_MMDC_MADPCR0_PRF_FRZ      (0x00000004)  //!< Bit mask for MMDC_MADPCR0_PRF_FRZ.

//! @brief Get value of MMDC_MADPCR0_PRF_FRZ from a register value.
#define BG_MMDC_MADPCR0_PRF_FRZ(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_MMDC_MADPCR0_PRF_FRZ) >> BP_MMDC_MADPCR0_PRF_FRZ)

//! @brief Format value for bitfield MMDC_MADPCR0_PRF_FRZ.
#define BF_MMDC_MADPCR0_PRF_FRZ(v)   ((__REG_VALUE_TYPE((v), reg32_t) << BP_MMDC_MADPCR0_PRF_FRZ) & BM_MMDC_MADPCR0_PRF_FRZ)

#ifndef __LANGUAGE_ASM__
//! @brief Set the PRF_FRZ field to a new value.
#define BW_MMDC_MADPCR0_PRF_FRZ(v)   (HW_MMDC_MADPCR0_WR((HW_MMDC_MADPCR0_RD() & ~BM_MMDC_MADPCR0_PRF_FRZ) | BF_MMDC_MADPCR0_PRF_FRZ(v)))
#endif


/* --- Register HW_MMDC_MADPCR0, field CYC_OVF[3] (W1C)
 *
 * Total Profiling Cycles Count Overflow. When profiling mechanism is enabled (DBG_EN is set to "1")
 * then this bit is asserted when overflow of CYC_COUNT occurred. Cleared by writing 1 to it.
 *
 * Values:
 * 0 - no overflow
 * 1 - overflow
 */

#define BP_MMDC_MADPCR0_CYC_OVF      (3)      //!< Bit position for MMDC_MADPCR0_CYC_OVF.
#define BM_MMDC_MADPCR0_CYC_OVF      (0x00000008)  //!< Bit mask for MMDC_MADPCR0_CYC_OVF.

//! @brief Get value of MMDC_MADPCR0_CYC_OVF from a register value.
#define BG_MMDC_MADPCR0_CYC_OVF(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_MMDC_MADPCR0_CYC_OVF) >> BP_MMDC_MADPCR0_CYC_OVF)

//! @brief Format value for bitfield MMDC_MADPCR0_CYC_OVF.
#define BF_MMDC_MADPCR0_CYC_OVF(v)   ((__REG_VALUE_TYPE((v), reg32_t) << BP_MMDC_MADPCR0_CYC_OVF) & BM_MMDC_MADPCR0_CYC_OVF)

#ifndef __LANGUAGE_ASM__
//! @brief Set the CYC_OVF field to a new value.
#define BW_MMDC_MADPCR0_CYC_OVF(v)   (HW_MMDC_MADPCR0_WR((HW_MMDC_MADPCR0_RD() & ~BM_MMDC_MADPCR0_CYC_OVF) | BF_MMDC_MADPCR0_CYC_OVF(v)))
#endif


/* --- Register HW_MMDC_MADPCR0, field SBS_EN[8] (RW)
 *
 * Step By Step debug Enable. Enable step by step mode. Every time this mechanism is enabled then
 * setting SBS to "1" will dispatch one pending AXI access to the DDR and in parallel its attributes
 * will be observed in the status registes (MASBS0 and MASBS1). For further information see .
 *
 * Values:
 * 0 - disable
 * 1 - enable
 */

#define BP_MMDC_MADPCR0_SBS_EN      (8)      //!< Bit position for MMDC_MADPCR0_SBS_EN.
#define BM_MMDC_MADPCR0_SBS_EN      (0x00000100)  //!< Bit mask for MMDC_MADPCR0_SBS_EN.

//! @brief Get value of MMDC_MADPCR0_SBS_EN from a register value.
#define BG_MMDC_MADPCR0_SBS_EN(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_MMDC_MADPCR0_SBS_EN) >> BP_MMDC_MADPCR0_SBS_EN)

//! @brief Format value for bitfield MMDC_MADPCR0_SBS_EN.
#define BF_MMDC_MADPCR0_SBS_EN(v)   ((__REG_VALUE_TYPE((v), reg32_t) << BP_MMDC_MADPCR0_SBS_EN) & BM_MMDC_MADPCR0_SBS_EN)

#ifndef __LANGUAGE_ASM__
//! @brief Set the SBS_EN field to a new value.
#define BW_MMDC_MADPCR0_SBS_EN(v)   (HW_MMDC_MADPCR0_WR((HW_MMDC_MADPCR0_RD() & ~BM_MMDC_MADPCR0_SBS_EN) | BF_MMDC_MADPCR0_SBS_EN(v)))
#endif


/* --- Register HW_MMDC_MADPCR0, field SBS[9] (RW)
 *
 * Step By Step trigger. If SBS_EN is set to "1" then dispatching AXI pending access toward the DDR
 * will done only if this bit is set to "1", otherewise no access will be dispatched toward the DDR.
 * This bit is cleared when the pending access has been issued toward the DDR device.
 *
 * Values:
 * 0 - No access will be launced toward the DDR
 * 1 - Lanuch AXI pending access toward the DDR
 */

#define BP_MMDC_MADPCR0_SBS      (9)      //!< Bit position for MMDC_MADPCR0_SBS.
#define BM_MMDC_MADPCR0_SBS      (0x00000200)  //!< Bit mask for MMDC_MADPCR0_SBS.

//! @brief Get value of MMDC_MADPCR0_SBS from a register value.
#define BG_MMDC_MADPCR0_SBS(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_MMDC_MADPCR0_SBS) >> BP_MMDC_MADPCR0_SBS)

//! @brief Format value for bitfield MMDC_MADPCR0_SBS.
#define BF_MMDC_MADPCR0_SBS(v)   ((__REG_VALUE_TYPE((v), reg32_t) << BP_MMDC_MADPCR0_SBS) & BM_MMDC_MADPCR0_SBS)

#ifndef __LANGUAGE_ASM__
//! @brief Set the SBS field to a new value.
#define BW_MMDC_MADPCR0_SBS(v)   (HW_MMDC_MADPCR0_WR((HW_MMDC_MADPCR0_RD() & ~BM_MMDC_MADPCR0_SBS) | BF_MMDC_MADPCR0_SBS(v)))
#endif


//-------------------------------------------------------------------------------------------
// HW_MMDC_MADPCR1 - MMDC Core Debug and Profiling Control Register 1
//-------------------------------------------------------------------------------------------

#ifndef __LANGUAGE_ASM__
/*!
 * @brief HW_MMDC_MADPCR1 - MMDC Core Debug and Profiling Control Register 1 (RW)
 *
 * Reset value: 0x00000000
 *
 * Supported Mode Of Operations:  For Channel 0: All  For Channel 1: LP2_2ch_x16, LP2_2ch_x32
 */
typedef union _hw_mmdc_madpcr1
{
    reg32_t U;
    struct _hw_mmdc_madpcr1_bitfields
    {
        unsigned PRF_AXI_ID : 16; //!< [15:0] Profiling AXI ID.
        unsigned PRF_AXI_ID_MASK : 16; //!< [31:16] Profiling AXI ID Mask.
    } B;
} hw_mmdc_madpcr1_t;
#endif

/*
 * constants & macros for entire MMDC_MADPCR1 register
 */
#define HW_MMDC_MADPCR1_ADDR      (REGS_MMDC_BASE + 0x414)

#ifndef __LANGUAGE_ASM__
#define HW_MMDC_MADPCR1           (*(volatile hw_mmdc_madpcr1_t *) HW_MMDC_MADPCR1_ADDR)
#define HW_MMDC_MADPCR1_RD()      (HW_MMDC_MADPCR1.U)
#define HW_MMDC_MADPCR1_WR(v)     (HW_MMDC_MADPCR1.U = (v))
#define HW_MMDC_MADPCR1_SET(v)    (HW_MMDC_MADPCR1_WR(HW_MMDC_MADPCR1_RD() |  (v)))
#define HW_MMDC_MADPCR1_CLR(v)    (HW_MMDC_MADPCR1_WR(HW_MMDC_MADPCR1_RD() & ~(v)))
#define HW_MMDC_MADPCR1_TOG(v)    (HW_MMDC_MADPCR1_WR(HW_MMDC_MADPCR1_RD() ^  (v)))
#endif

/*
 * constants & macros for individual MMDC_MADPCR1 bitfields
 */

/* --- Register HW_MMDC_MADPCR1, field PRF_AXI_ID[15:0] (RW)
 *
 * Profiling AXI ID. AXI IDs that matches a bit-wise AND logic operation between PRF_AXI_ID and
 * PRF_AXI_ID_MASK are chosen for profiling. Default value is 0x0, to choose any ID-s for profiling
 */

#define BP_MMDC_MADPCR1_PRF_AXI_ID      (0)      //!< Bit position for MMDC_MADPCR1_PRF_AXI_ID.
#define BM_MMDC_MADPCR1_PRF_AXI_ID      (0x0000ffff)  //!< Bit mask for MMDC_MADPCR1_PRF_AXI_ID.

//! @brief Get value of MMDC_MADPCR1_PRF_AXI_ID from a register value.
#define BG_MMDC_MADPCR1_PRF_AXI_ID(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_MMDC_MADPCR1_PRF_AXI_ID) >> BP_MMDC_MADPCR1_PRF_AXI_ID)

//! @brief Format value for bitfield MMDC_MADPCR1_PRF_AXI_ID.
#define BF_MMDC_MADPCR1_PRF_AXI_ID(v)   ((__REG_VALUE_TYPE((v), reg32_t) << BP_MMDC_MADPCR1_PRF_AXI_ID) & BM_MMDC_MADPCR1_PRF_AXI_ID)

#ifndef __LANGUAGE_ASM__
//! @brief Set the PRF_AXI_ID field to a new value.
#define BW_MMDC_MADPCR1_PRF_AXI_ID(v)   (HW_MMDC_MADPCR1_WR((HW_MMDC_MADPCR1_RD() & ~BM_MMDC_MADPCR1_PRF_AXI_ID) | BF_MMDC_MADPCR1_PRF_AXI_ID(v)))
#endif

/* --- Register HW_MMDC_MADPCR1, field PRF_AXI_ID_MASK[31:16] (RW)
 *
 * Profiling AXI ID Mask. AXI ID bits which masked by this value are chosen for profiling.
 *
 * Values:
 * 0 - AXI ID specific bit is ignored (don't care)
 * 1 - AXI ID specific bit is chosen for profiling
 */

#define BP_MMDC_MADPCR1_PRF_AXI_ID_MASK      (16)      //!< Bit position for MMDC_MADPCR1_PRF_AXI_ID_MASK.
#define BM_MMDC_MADPCR1_PRF_AXI_ID_MASK      (0xffff0000)  //!< Bit mask for MMDC_MADPCR1_PRF_AXI_ID_MASK.

//! @brief Get value of MMDC_MADPCR1_PRF_AXI_ID_MASK from a register value.
#define BG_MMDC_MADPCR1_PRF_AXI_ID_MASK(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_MMDC_MADPCR1_PRF_AXI_ID_MASK) >> BP_MMDC_MADPCR1_PRF_AXI_ID_MASK)

//! @brief Format value for bitfield MMDC_MADPCR1_PRF_AXI_ID_MASK.
#define BF_MMDC_MADPCR1_PRF_AXI_ID_MASK(v)   ((__REG_VALUE_TYPE((v), reg32_t) << BP_MMDC_MADPCR1_PRF_AXI_ID_MASK) & BM_MMDC_MADPCR1_PRF_AXI_ID_MASK)

#ifndef __LANGUAGE_ASM__
//! @brief Set the PRF_AXI_ID_MASK field to a new value.
#define BW_MMDC_MADPCR1_PRF_AXI_ID_MASK(v)   (HW_MMDC_MADPCR1_WR((HW_MMDC_MADPCR1_RD() & ~BM_MMDC_MADPCR1_PRF_AXI_ID_MASK) | BF_MMDC_MADPCR1_PRF_AXI_ID_MASK(v)))
#endif


//-------------------------------------------------------------------------------------------
// HW_MMDC_MADPSR0 - MMDC Core Debug and Profiling Status Register 0
//-------------------------------------------------------------------------------------------

#ifndef __LANGUAGE_ASM__
/*!
 * @brief HW_MMDC_MADPSR0 - MMDC Core Debug and Profiling Status Register 0 (RO)
 *
 * Reset value: 0x00000000
 *
 * Supported Mode Of Operations:  For Channel 0: All  For Channel 1: LP2_2ch_x16, LP2_2ch_x32
 */
typedef union _hw_mmdc_madpsr0
{
    reg32_t U;
    struct _hw_mmdc_madpsr0_bitfields
    {
        unsigned CYC_COUNT : 32; //!< [31:0] Total Profiling cycle Count.
    } B;
} hw_mmdc_madpsr0_t;
#endif

/*
 * constants & macros for entire MMDC_MADPSR0 register
 */
#define HW_MMDC_MADPSR0_ADDR      (REGS_MMDC_BASE + 0x418)

#ifndef __LANGUAGE_ASM__
#define HW_MMDC_MADPSR0           (*(volatile hw_mmdc_madpsr0_t *) HW_MMDC_MADPSR0_ADDR)
#define HW_MMDC_MADPSR0_RD()      (HW_MMDC_MADPSR0.U)
#endif

/*
 * constants & macros for individual MMDC_MADPSR0 bitfields
 */

/* --- Register HW_MMDC_MADPSR0, field CYC_COUNT[31:0] (RO)
 *
 * Total Profiling cycle Count. This field reflects the total cycle count in case the profiling
 * mechanism is enabled from assertion of DBG_EN and until PRF_FRZ is asserted
 */

#define BP_MMDC_MADPSR0_CYC_COUNT      (0)      //!< Bit position for MMDC_MADPSR0_CYC_COUNT.
#define BM_MMDC_MADPSR0_CYC_COUNT      (0xffffffff)  //!< Bit mask for MMDC_MADPSR0_CYC_COUNT.

//! @brief Get value of MMDC_MADPSR0_CYC_COUNT from a register value.
#define BG_MMDC_MADPSR0_CYC_COUNT(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_MMDC_MADPSR0_CYC_COUNT) >> BP_MMDC_MADPSR0_CYC_COUNT)

//-------------------------------------------------------------------------------------------
// HW_MMDC_MADPSR1 - MMDC Core Debug and Profiling Status Register 1
//-------------------------------------------------------------------------------------------

#ifndef __LANGUAGE_ASM__
/*!
 * @brief HW_MMDC_MADPSR1 - MMDC Core Debug and Profiling Status Register 1 (RO)
 *
 * Reset value: 0x00000000
 *
 * The register reflects the total cycles during which the MMDC state machines were busy (both
 * writes and reads). This information can be used for DDR Utilization calculation.  Supported Mode
 * Of Operations:  For Channel 0: All  For Channel 1: LP2_2ch_x16, LP2_2ch_x32
 */
typedef union _hw_mmdc_madpsr1
{
    reg32_t U;
    struct _hw_mmdc_madpsr1_bitfields
    {
        unsigned BUSY_COUNT : 32; //!< [31:0] Profiling Busy Cycles Count.
    } B;
} hw_mmdc_madpsr1_t;
#endif

/*
 * constants & macros for entire MMDC_MADPSR1 register
 */
#define HW_MMDC_MADPSR1_ADDR      (REGS_MMDC_BASE + 0x41c)

#ifndef __LANGUAGE_ASM__
#define HW_MMDC_MADPSR1           (*(volatile hw_mmdc_madpsr1_t *) HW_MMDC_MADPSR1_ADDR)
#define HW_MMDC_MADPSR1_RD()      (HW_MMDC_MADPSR1.U)
#endif

/*
 * constants & macros for individual MMDC_MADPSR1 bitfields
 */

/* --- Register HW_MMDC_MADPSR1, field BUSY_COUNT[31:0] (RO)
 *
 * Profiling Busy Cycles Count. This field reflects the total number of cycles where the MMDC read
 * and write state machines were busy during the profiling period. Can be used for DDR utilization
 * calculations
 */

#define BP_MMDC_MADPSR1_BUSY_COUNT      (0)      //!< Bit position for MMDC_MADPSR1_BUSY_COUNT.
#define BM_MMDC_MADPSR1_BUSY_COUNT      (0xffffffff)  //!< Bit mask for MMDC_MADPSR1_BUSY_COUNT.

//! @brief Get value of MMDC_MADPSR1_BUSY_COUNT from a register value.
#define BG_MMDC_MADPSR1_BUSY_COUNT(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_MMDC_MADPSR1_BUSY_COUNT) >> BP_MMDC_MADPSR1_BUSY_COUNT)

//-------------------------------------------------------------------------------------------
// HW_MMDC_MADPSR2 - MMDC Core Debug and Profiling Status Register 2
//-------------------------------------------------------------------------------------------

#ifndef __LANGUAGE_ASM__
/*!
 * @brief HW_MMDC_MADPSR2 - MMDC Core Debug and Profiling Status Register 2 (RO)
 *
 * Reset value: 0x00000000
 *
 * This register reflects the total number of read accesses (per AXI ID) toward MMDC.  Supported
 * Mode Of Operations:  For Channel 0: All  For Channel 1: LP2_2ch_x16, LP2_2ch_x32
 */
typedef union _hw_mmdc_madpsr2
{
    reg32_t U;
    struct _hw_mmdc_madpsr2_bitfields
    {
        unsigned RD_ACC_COUNT : 32; //!< [31:0] Profiling Read Access Count.
    } B;
} hw_mmdc_madpsr2_t;
#endif

/*
 * constants & macros for entire MMDC_MADPSR2 register
 */
#define HW_MMDC_MADPSR2_ADDR      (REGS_MMDC_BASE + 0x420)

#ifndef __LANGUAGE_ASM__
#define HW_MMDC_MADPSR2           (*(volatile hw_mmdc_madpsr2_t *) HW_MMDC_MADPSR2_ADDR)
#define HW_MMDC_MADPSR2_RD()      (HW_MMDC_MADPSR2.U)
#endif

/*
 * constants & macros for individual MMDC_MADPSR2 bitfields
 */

/* --- Register HW_MMDC_MADPSR2, field RD_ACC_COUNT[31:0] (RO)
 *
 * Profiling Read Access Count. This register reflects the total number of read accesses (per AXI
 * ID) toward MMDC.
 */

#define BP_MMDC_MADPSR2_RD_ACC_COUNT      (0)      //!< Bit position for MMDC_MADPSR2_RD_ACC_COUNT.
#define BM_MMDC_MADPSR2_RD_ACC_COUNT      (0xffffffff)  //!< Bit mask for MMDC_MADPSR2_RD_ACC_COUNT.

//! @brief Get value of MMDC_MADPSR2_RD_ACC_COUNT from a register value.
#define BG_MMDC_MADPSR2_RD_ACC_COUNT(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_MMDC_MADPSR2_RD_ACC_COUNT) >> BP_MMDC_MADPSR2_RD_ACC_COUNT)

//-------------------------------------------------------------------------------------------
// HW_MMDC_MADPSR3 - MMDC Core Debug and Profiling Status Register 3
//-------------------------------------------------------------------------------------------

#ifndef __LANGUAGE_ASM__
/*!
 * @brief HW_MMDC_MADPSR3 - MMDC Core Debug and Profiling Status Register 3 (RO)
 *
 * Reset value: 0x00000000
 *
 * This register reflects the total number of write accesses (per AXI ID) toward MMDC.  Supported
 * Mode Of Operations:  For Channel 0: All  For Channel 1: LP2_2ch_x16, LP2_2ch_x32
 */
typedef union _hw_mmdc_madpsr3
{
    reg32_t U;
    struct _hw_mmdc_madpsr3_bitfields
    {
        unsigned WR_ACC_COUNT : 32; //!< [31:0] Profiling Write Access Count.
    } B;
} hw_mmdc_madpsr3_t;
#endif

/*
 * constants & macros for entire MMDC_MADPSR3 register
 */
#define HW_MMDC_MADPSR3_ADDR      (REGS_MMDC_BASE + 0x424)

#ifndef __LANGUAGE_ASM__
#define HW_MMDC_MADPSR3           (*(volatile hw_mmdc_madpsr3_t *) HW_MMDC_MADPSR3_ADDR)
#define HW_MMDC_MADPSR3_RD()      (HW_MMDC_MADPSR3.U)
#endif

/*
 * constants & macros for individual MMDC_MADPSR3 bitfields
 */

/* --- Register HW_MMDC_MADPSR3, field WR_ACC_COUNT[31:0] (RO)
 *
 * Profiling Write Access Count. This register reflects the total number of write accesses (per AXI
 * ID) toward MMDC.
 */

#define BP_MMDC_MADPSR3_WR_ACC_COUNT      (0)      //!< Bit position for MMDC_MADPSR3_WR_ACC_COUNT.
#define BM_MMDC_MADPSR3_WR_ACC_COUNT      (0xffffffff)  //!< Bit mask for MMDC_MADPSR3_WR_ACC_COUNT.

//! @brief Get value of MMDC_MADPSR3_WR_ACC_COUNT from a register value.
#define BG_MMDC_MADPSR3_WR_ACC_COUNT(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_MMDC_MADPSR3_WR_ACC_COUNT) >> BP_MMDC_MADPSR3_WR_ACC_COUNT)

//-------------------------------------------------------------------------------------------
// HW_MMDC_MADPSR4 - MMDC Core Debug and Profiling Status Register 4
//-------------------------------------------------------------------------------------------

#ifndef __LANGUAGE_ASM__
/*!
 * @brief HW_MMDC_MADPSR4 - MMDC Core Debug and Profiling Status Register 4 (RO)
 *
 * Reset value: 0x00000000
 *
 * This register reflects the total number of bytes that were transferred during read access (per
 * AXI ID) toward MMDC.  Supported Mode Of Operations:  For Channel 0: All  For Channel 1:
 * LP2_2ch_x16, LP2_2ch_x32
 */
typedef union _hw_mmdc_madpsr4
{
    reg32_t U;
    struct _hw_mmdc_madpsr4_bitfields
    {
        unsigned RD_BYTES_COUNT : 32; //!< [31:0] Profiling Read Bytes Count.
    } B;
} hw_mmdc_madpsr4_t;
#endif

/*
 * constants & macros for entire MMDC_MADPSR4 register
 */
#define HW_MMDC_MADPSR4_ADDR      (REGS_MMDC_BASE + 0x428)

#ifndef __LANGUAGE_ASM__
#define HW_MMDC_MADPSR4           (*(volatile hw_mmdc_madpsr4_t *) HW_MMDC_MADPSR4_ADDR)
#define HW_MMDC_MADPSR4_RD()      (HW_MMDC_MADPSR4.U)
#endif

/*
 * constants & macros for individual MMDC_MADPSR4 bitfields
 */

/* --- Register HW_MMDC_MADPSR4, field RD_BYTES_COUNT[31:0] (RO)
 *
 * Profiling Read Bytes Count. This register reflects the total number of bytes that were
 * transferred during read access (per AXI ID) toward MMDC.
 */

#define BP_MMDC_MADPSR4_RD_BYTES_COUNT      (0)      //!< Bit position for MMDC_MADPSR4_RD_BYTES_COUNT.
#define BM_MMDC_MADPSR4_RD_BYTES_COUNT      (0xffffffff)  //!< Bit mask for MMDC_MADPSR4_RD_BYTES_COUNT.

//! @brief Get value of MMDC_MADPSR4_RD_BYTES_COUNT from a register value.
#define BG_MMDC_MADPSR4_RD_BYTES_COUNT(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_MMDC_MADPSR4_RD_BYTES_COUNT) >> BP_MMDC_MADPSR4_RD_BYTES_COUNT)

//-------------------------------------------------------------------------------------------
// HW_MMDC_MADPSR5 - MMDC Core Debug and Profiling Status Register 5
//-------------------------------------------------------------------------------------------

#ifndef __LANGUAGE_ASM__
/*!
 * @brief HW_MMDC_MADPSR5 - MMDC Core Debug and Profiling Status Register 5 (RO)
 *
 * Reset value: 0x00000000
 *
 * This register reflects the total number of bytes that were transferred during write access (per
 * AXI ID) toward MMDC.  Supported Mode Of Operations:  For Channel 0: All  For Channel 1:
 * LP2_2ch_x16, LP2_2ch_x32
 */
typedef union _hw_mmdc_madpsr5
{
    reg32_t U;
    struct _hw_mmdc_madpsr5_bitfields
    {
        unsigned WR_BYTES_COUNT : 32; //!< [31:0] Profiling Write Bytes Count.
    } B;
} hw_mmdc_madpsr5_t;
#endif

/*
 * constants & macros for entire MMDC_MADPSR5 register
 */
#define HW_MMDC_MADPSR5_ADDR      (REGS_MMDC_BASE + 0x42c)

#ifndef __LANGUAGE_ASM__
#define HW_MMDC_MADPSR5           (*(volatile hw_mmdc_madpsr5_t *) HW_MMDC_MADPSR5_ADDR)
#define HW_MMDC_MADPSR5_RD()      (HW_MMDC_MADPSR5.U)
#endif

/*
 * constants & macros for individual MMDC_MADPSR5 bitfields
 */

/* --- Register HW_MMDC_MADPSR5, field WR_BYTES_COUNT[31:0] (RO)
 *
 * Profiling Write Bytes Count. This register reflects the total number of bytes that were
 * transferred during write access (per AXI ID) toward MMDC.
 */

#define BP_MMDC_MADPSR5_WR_BYTES_COUNT      (0)      //!< Bit position for MMDC_MADPSR5_WR_BYTES_COUNT.
#define BM_MMDC_MADPSR5_WR_BYTES_COUNT      (0xffffffff)  //!< Bit mask for MMDC_MADPSR5_WR_BYTES_COUNT.

//! @brief Get value of MMDC_MADPSR5_WR_BYTES_COUNT from a register value.
#define BG_MMDC_MADPSR5_WR_BYTES_COUNT(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_MMDC_MADPSR5_WR_BYTES_COUNT) >> BP_MMDC_MADPSR5_WR_BYTES_COUNT)

//-------------------------------------------------------------------------------------------
// HW_MMDC_MASBS0 - MMDC Core Step By Step Address Register
//-------------------------------------------------------------------------------------------

#ifndef __LANGUAGE_ASM__
/*!
 * @brief HW_MMDC_MASBS0 - MMDC Core Step By Step Address Register (RO)
 *
 * Reset value: 0x00000000
 *
 * Supported Mode Of Operations:  For Channel 0: All  For Channel 1: LP2_2ch_x16, LP2_2ch_x32
 */
typedef union _hw_mmdc_masbs0
{
    reg32_t U;
    struct _hw_mmdc_masbs0_bitfields
    {
        unsigned SBS_ADDR : 32; //!< [31:0] Step By Step Address.
    } B;
} hw_mmdc_masbs0_t;
#endif

/*
 * constants & macros for entire MMDC_MASBS0 register
 */
#define HW_MMDC_MASBS0_ADDR      (REGS_MMDC_BASE + 0x430)

#ifndef __LANGUAGE_ASM__
#define HW_MMDC_MASBS0           (*(volatile hw_mmdc_masbs0_t *) HW_MMDC_MASBS0_ADDR)
#define HW_MMDC_MASBS0_RD()      (HW_MMDC_MASBS0.U)
#endif

/*
 * constants & macros for individual MMDC_MASBS0 bitfields
 */

/* --- Register HW_MMDC_MASBS0, field SBS_ADDR[31:0] (RO)
 *
 * Step By Step Address. These bits reflect the address of the pending request in case of step by
 * step mode.
 */

#define BP_MMDC_MASBS0_SBS_ADDR      (0)      //!< Bit position for MMDC_MASBS0_SBS_ADDR.
#define BM_MMDC_MASBS0_SBS_ADDR      (0xffffffff)  //!< Bit mask for MMDC_MASBS0_SBS_ADDR.

//! @brief Get value of MMDC_MASBS0_SBS_ADDR from a register value.
#define BG_MMDC_MASBS0_SBS_ADDR(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_MMDC_MASBS0_SBS_ADDR) >> BP_MMDC_MASBS0_SBS_ADDR)

//-------------------------------------------------------------------------------------------
// HW_MMDC_MASBS1 - MMDC Core Step By Step Address Attributes Register
//-------------------------------------------------------------------------------------------

#ifndef __LANGUAGE_ASM__
/*!
 * @brief HW_MMDC_MASBS1 - MMDC Core Step By Step Address Attributes Register (RO)
 *
 * Reset value: 0x00000000
 *
 * Supported Mode Of Operations:  For Channel 0: All  For Channel 1: LP2_2ch_x16, LP2_2ch_x32
 */
typedef union _hw_mmdc_masbs1
{
    reg32_t U;
    struct _hw_mmdc_masbs1_bitfields
    {
        unsigned SBS_VLD : 1; //!< [0] Step By Step Valid.
        unsigned SBS_TYPE : 1; //!< [1] Step By Step Request Type.
        unsigned SBS_LOCK : 2; //!< [3:2] Step By Step Lock.
        unsigned SBS_PROT : 3; //!< [6:4] Step By Step Protection.
        unsigned SBS_SIZE : 3; //!< [9:7] Step By Step Size.
        unsigned SBS_BURST : 2; //!< [11:10] Step By Step Burst.
        unsigned SBS_BUFF : 1; //!< [12] Step By Step Buffered.
        unsigned SBS_LEN : 3; //!< [15:13] Step By Step Length.
        unsigned SBS_AXI_ID : 16; //!< [31:16] Step By Step AXI ID.
    } B;
} hw_mmdc_masbs1_t;
#endif

/*
 * constants & macros for entire MMDC_MASBS1 register
 */
#define HW_MMDC_MASBS1_ADDR      (REGS_MMDC_BASE + 0x434)

#ifndef __LANGUAGE_ASM__
#define HW_MMDC_MASBS1           (*(volatile hw_mmdc_masbs1_t *) HW_MMDC_MASBS1_ADDR)
#define HW_MMDC_MASBS1_RD()      (HW_MMDC_MASBS1.U)
#endif

/*
 * constants & macros for individual MMDC_MASBS1 bitfields
 */

/* --- Register HW_MMDC_MASBS1, field SBS_VLD[0] (RO)
 *
 * Step By Step Valid. This bit reflects whether there is a pending request in case of step by step
 * mode.
 *
 * Values:
 * 0 - not valid
 * 1 - valid
 */

#define BP_MMDC_MASBS1_SBS_VLD      (0)      //!< Bit position for MMDC_MASBS1_SBS_VLD.
#define BM_MMDC_MASBS1_SBS_VLD      (0x00000001)  //!< Bit mask for MMDC_MASBS1_SBS_VLD.

//! @brief Get value of MMDC_MASBS1_SBS_VLD from a register value.
#define BG_MMDC_MASBS1_SBS_VLD(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_MMDC_MASBS1_SBS_VLD) >> BP_MMDC_MASBS1_SBS_VLD)


/* --- Register HW_MMDC_MASBS1, field SBS_TYPE[1] (RO)
 *
 * Step By Step Request Type. These bits reflect the type (read/write) of the pending request in
 * case of step by step mode.
 *
 * Values:
 * 0 - write
 * 1 - read
 */

#define BP_MMDC_MASBS1_SBS_TYPE      (1)      //!< Bit position for MMDC_MASBS1_SBS_TYPE.
#define BM_MMDC_MASBS1_SBS_TYPE      (0x00000002)  //!< Bit mask for MMDC_MASBS1_SBS_TYPE.

//! @brief Get value of MMDC_MASBS1_SBS_TYPE from a register value.
#define BG_MMDC_MASBS1_SBS_TYPE(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_MMDC_MASBS1_SBS_TYPE) >> BP_MMDC_MASBS1_SBS_TYPE)


/* --- Register HW_MMDC_MASBS1, field SBS_LOCK[3:2] (RO)
 *
 * Step By Step Lock. These bits reflect the AXI LOCK of the pending request in case of step by step
 * mode.
 */

#define BP_MMDC_MASBS1_SBS_LOCK      (2)      //!< Bit position for MMDC_MASBS1_SBS_LOCK.
#define BM_MMDC_MASBS1_SBS_LOCK      (0x0000000c)  //!< Bit mask for MMDC_MASBS1_SBS_LOCK.

//! @brief Get value of MMDC_MASBS1_SBS_LOCK from a register value.
#define BG_MMDC_MASBS1_SBS_LOCK(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_MMDC_MASBS1_SBS_LOCK) >> BP_MMDC_MASBS1_SBS_LOCK)

/* --- Register HW_MMDC_MASBS1, field SBS_PROT[6:4] (RO)
 *
 * Step By Step Protection. These bits reflect the AXI PROT of the pending request in case of step
 * by step mode.
 */

#define BP_MMDC_MASBS1_SBS_PROT      (4)      //!< Bit position for MMDC_MASBS1_SBS_PROT.
#define BM_MMDC_MASBS1_SBS_PROT      (0x00000070)  //!< Bit mask for MMDC_MASBS1_SBS_PROT.

//! @brief Get value of MMDC_MASBS1_SBS_PROT from a register value.
#define BG_MMDC_MASBS1_SBS_PROT(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_MMDC_MASBS1_SBS_PROT) >> BP_MMDC_MASBS1_SBS_PROT)

/* --- Register HW_MMDC_MASBS1, field SBS_SIZE[9:7] (RO)
 *
 * Step By Step Size. These bits reflect the AXI SIZE of the pending request in case of step by step
 * mode.
 *
 * Values:
 * 000 - 8 bits
 * 001 - 16 bits
 * 010 - 32 bits
 * 011 - 64 bits
 * 100 - 128bits
 * 101-111 - Reserved
 */

#define BP_MMDC_MASBS1_SBS_SIZE      (7)      //!< Bit position for MMDC_MASBS1_SBS_SIZE.
#define BM_MMDC_MASBS1_SBS_SIZE      (0x00000380)  //!< Bit mask for MMDC_MASBS1_SBS_SIZE.

//! @brief Get value of MMDC_MASBS1_SBS_SIZE from a register value.
#define BG_MMDC_MASBS1_SBS_SIZE(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_MMDC_MASBS1_SBS_SIZE) >> BP_MMDC_MASBS1_SBS_SIZE)


/* --- Register HW_MMDC_MASBS1, field SBS_BURST[11:10] (RO)
 *
 * Step By Step Burst. These bits reflect the AXI BURST of the pending request in case of step by
 * step mode.
 *
 * Values:
 * 00 - FIXED
 * 01 - INCR burst
 * 10 - WRAP burst
 * 11 - reserved
 */

#define BP_MMDC_MASBS1_SBS_BURST      (10)      //!< Bit position for MMDC_MASBS1_SBS_BURST.
#define BM_MMDC_MASBS1_SBS_BURST      (0x00000c00)  //!< Bit mask for MMDC_MASBS1_SBS_BURST.

//! @brief Get value of MMDC_MASBS1_SBS_BURST from a register value.
#define BG_MMDC_MASBS1_SBS_BURST(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_MMDC_MASBS1_SBS_BURST) >> BP_MMDC_MASBS1_SBS_BURST)


/* --- Register HW_MMDC_MASBS1, field SBS_BUFF[12] (RO)
 *
 * Step By Step Buffered. This bit reflect the AXI CACHE[0] of the pending request in case of step
 * by step mode. Relevant only for write requests
 */

#define BP_MMDC_MASBS1_SBS_BUFF      (12)      //!< Bit position for MMDC_MASBS1_SBS_BUFF.
#define BM_MMDC_MASBS1_SBS_BUFF      (0x00001000)  //!< Bit mask for MMDC_MASBS1_SBS_BUFF.

//! @brief Get value of MMDC_MASBS1_SBS_BUFF from a register value.
#define BG_MMDC_MASBS1_SBS_BUFF(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_MMDC_MASBS1_SBS_BUFF) >> BP_MMDC_MASBS1_SBS_BUFF)

/* --- Register HW_MMDC_MASBS1, field SBS_LEN[15:13] (RO)
 *
 * Step By Step Length. These bits reflect the AXI LENGTH of the pending request in case of step by
 * step mode.
 *
 * Values:
 * 000 - burst of length 1
 * 001 - burst of length 2
 * 111 - burst of length 8
 */

#define BP_MMDC_MASBS1_SBS_LEN      (13)      //!< Bit position for MMDC_MASBS1_SBS_LEN.
#define BM_MMDC_MASBS1_SBS_LEN      (0x0000e000)  //!< Bit mask for MMDC_MASBS1_SBS_LEN.

//! @brief Get value of MMDC_MASBS1_SBS_LEN from a register value.
#define BG_MMDC_MASBS1_SBS_LEN(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_MMDC_MASBS1_SBS_LEN) >> BP_MMDC_MASBS1_SBS_LEN)


/* --- Register HW_MMDC_MASBS1, field SBS_AXI_ID[31:16] (RO)
 *
 * Step By Step AXI ID. These bits reflect the AXI ID of the pending request in case of step by step
 * mode.
 */

#define BP_MMDC_MASBS1_SBS_AXI_ID      (16)      //!< Bit position for MMDC_MASBS1_SBS_AXI_ID.
#define BM_MMDC_MASBS1_SBS_AXI_ID      (0xffff0000)  //!< Bit mask for MMDC_MASBS1_SBS_AXI_ID.

//! @brief Get value of MMDC_MASBS1_SBS_AXI_ID from a register value.
#define BG_MMDC_MASBS1_SBS_AXI_ID(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_MMDC_MASBS1_SBS_AXI_ID) >> BP_MMDC_MASBS1_SBS_AXI_ID)

//-------------------------------------------------------------------------------------------
// HW_MMDC_MAGENP - MMDC Core General Purpose Register
//-------------------------------------------------------------------------------------------

#ifndef __LANGUAGE_ASM__
/*!
 * @brief HW_MMDC_MAGENP - MMDC Core General Purpose Register (RW)
 *
 * Reset value: 0x00000000
 *
 * This register is a general 32 bit read/write register.  Supported Mode Of Operations:  For
 * Channel 0: All  For Channel 1: LP2_2ch_x16, LP2_2ch_x32
 */
typedef union _hw_mmdc_magenp
{
    reg32_t U;
    struct _hw_mmdc_magenp_bitfields
    {
        unsigned GP31_GP0 : 32; //!< [31:0] General purpose read/write bits.
    } B;
} hw_mmdc_magenp_t;
#endif

/*
 * constants & macros for entire MMDC_MAGENP register
 */
#define HW_MMDC_MAGENP_ADDR      (REGS_MMDC_BASE + 0x440)

#ifndef __LANGUAGE_ASM__
#define HW_MMDC_MAGENP           (*(volatile hw_mmdc_magenp_t *) HW_MMDC_MAGENP_ADDR)
#define HW_MMDC_MAGENP_RD()      (HW_MMDC_MAGENP.U)
#define HW_MMDC_MAGENP_WR(v)     (HW_MMDC_MAGENP.U = (v))
#define HW_MMDC_MAGENP_SET(v)    (HW_MMDC_MAGENP_WR(HW_MMDC_MAGENP_RD() |  (v)))
#define HW_MMDC_MAGENP_CLR(v)    (HW_MMDC_MAGENP_WR(HW_MMDC_MAGENP_RD() & ~(v)))
#define HW_MMDC_MAGENP_TOG(v)    (HW_MMDC_MAGENP_WR(HW_MMDC_MAGENP_RD() ^  (v)))
#endif

/*
 * constants & macros for individual MMDC_MAGENP bitfields
 */

/* --- Register HW_MMDC_MAGENP, field GP31_GP0[31:0] (RW)
 *
 * General purpose read/write bits.
 */

#define BP_MMDC_MAGENP_GP31_GP0      (0)      //!< Bit position for MMDC_MAGENP_GP31_GP0.
#define BM_MMDC_MAGENP_GP31_GP0      (0xffffffff)  //!< Bit mask for MMDC_MAGENP_GP31_GP0.

//! @brief Get value of MMDC_MAGENP_GP31_GP0 from a register value.
#define BG_MMDC_MAGENP_GP31_GP0(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_MMDC_MAGENP_GP31_GP0) >> BP_MMDC_MAGENP_GP31_GP0)

//! @brief Format value for bitfield MMDC_MAGENP_GP31_GP0.
#define BF_MMDC_MAGENP_GP31_GP0(v)   ((__REG_VALUE_TYPE((v), reg32_t) << BP_MMDC_MAGENP_GP31_GP0) & BM_MMDC_MAGENP_GP31_GP0)

#ifndef __LANGUAGE_ASM__
//! @brief Set the GP31_GP0 field to a new value.
#define BW_MMDC_MAGENP_GP31_GP0(v)   (HW_MMDC_MAGENP_WR((HW_MMDC_MAGENP_RD() & ~BM_MMDC_MAGENP_GP31_GP0) | BF_MMDC_MAGENP_GP31_GP0(v)))
#endif

//-------------------------------------------------------------------------------------------
// HW_MMDC_MPZQHWCTRL - MMDC PHY ZQ HW control register
//-------------------------------------------------------------------------------------------

#ifndef __LANGUAGE_ASM__
/*!
 * @brief HW_MMDC_MPZQHWCTRL - MMDC PHY ZQ HW control register (RW)
 *
 * Reset value: 0xa1380000
 *
 * Supported Mode Of Operations:  For Channel 0: All  For Channel 1: This register is reserved for
 * channel 1.
 */
typedef union _hw_mmdc_mpzqhwctrl
{
    reg32_t U;
    struct _hw_mmdc_mpzqhwctrl_bitfields
    {
        unsigned ZQ_MODE : 2; //!< [1:0] ZQ calibration mode:
        unsigned ZQ_HW_PER : 4; //!< [5:2] ZQ periodic calibration time.
        unsigned ZQ_HW_PU_RES : 5; //!< [10:6] ZQ automatic calibration pull-up result.
        unsigned ZQ_HW_PD_RES : 5; //!< [15:11] ZQ HW calibration pull-down result.
        unsigned ZQ_HW_FOR : 1; //!< [16] Force ZQ automatic calibration process with the i.MX ZQ calibration pad.
        unsigned TZQ_INIT : 3; //!< [19:17] Device ZQ long/init time.
        unsigned TZQ_OPER : 3; //!< [22:20] Device ZQ long/oper time.
        unsigned TZQ_CS : 3; //!< [25:23] Device ZQ short time.
        unsigned RESERVED0 : 1; //!< [26] Reserved.
        unsigned ZQ_EARLY_COMPARATOR_EN_TIMER : 5; //!< [31:27] ZQ early comparator enable timer.
    } B;
} hw_mmdc_mpzqhwctrl_t;
#endif

/*
 * constants & macros for entire MMDC_MPZQHWCTRL register
 */
#define HW_MMDC_MPZQHWCTRL_ADDR      (REGS_MMDC_BASE + 0x800)

#ifndef __LANGUAGE_ASM__
#define HW_MMDC_MPZQHWCTRL           (*(volatile hw_mmdc_mpzqhwctrl_t *) HW_MMDC_MPZQHWCTRL_ADDR)
#define HW_MMDC_MPZQHWCTRL_RD()      (HW_MMDC_MPZQHWCTRL.U)
#define HW_MMDC_MPZQHWCTRL_WR(v)     (HW_MMDC_MPZQHWCTRL.U = (v))
#define HW_MMDC_MPZQHWCTRL_SET(v)    (HW_MMDC_MPZQHWCTRL_WR(HW_MMDC_MPZQHWCTRL_RD() |  (v)))
#define HW_MMDC_MPZQHWCTRL_CLR(v)    (HW_MMDC_MPZQHWCTRL_WR(HW_MMDC_MPZQHWCTRL_RD() & ~(v)))
#define HW_MMDC_MPZQHWCTRL_TOG(v)    (HW_MMDC_MPZQHWCTRL_WR(HW_MMDC_MPZQHWCTRL_RD() ^  (v)))
#endif

/*
 * constants & macros for individual MMDC_MPZQHWCTRL bitfields
 */

/* --- Register HW_MMDC_MPZQHWCTRL, field ZQ_MODE[1:0] (RW)
 *
 * ZQ calibration mode:
 *
 * Values:
 * 0x0 - No ZQ calibration is issued. (Default)
 * 0x1 - ZQ calibration is issued to i.MX ZQ calibration pad together with ZQ long command to the external
 *     DDR device only when exiting self refresh.
 * 0x2 - ZQ calibration command long/short is issued only to the external DDR device periodically and when
 *     exiting self refresh
 * 0x3 - ZQ calibration is issued to i.MX ZQ calibration pad together with ZQ calibration command long/short
 *     to the external DDR device periodically and when exiting self refresh
 */

#define BP_MMDC_MPZQHWCTRL_ZQ_MODE      (0)      //!< Bit position for MMDC_MPZQHWCTRL_ZQ_MODE.
#define BM_MMDC_MPZQHWCTRL_ZQ_MODE      (0x00000003)  //!< Bit mask for MMDC_MPZQHWCTRL_ZQ_MODE.

//! @brief Get value of MMDC_MPZQHWCTRL_ZQ_MODE from a register value.
#define BG_MMDC_MPZQHWCTRL_ZQ_MODE(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_MMDC_MPZQHWCTRL_ZQ_MODE) >> BP_MMDC_MPZQHWCTRL_ZQ_MODE)

//! @brief Format value for bitfield MMDC_MPZQHWCTRL_ZQ_MODE.
#define BF_MMDC_MPZQHWCTRL_ZQ_MODE(v)   ((__REG_VALUE_TYPE((v), reg32_t) << BP_MMDC_MPZQHWCTRL_ZQ_MODE) & BM_MMDC_MPZQHWCTRL_ZQ_MODE)

#ifndef __LANGUAGE_ASM__
//! @brief Set the ZQ_MODE field to a new value.
#define BW_MMDC_MPZQHWCTRL_ZQ_MODE(v)   (HW_MMDC_MPZQHWCTRL_WR((HW_MMDC_MPZQHWCTRL_RD() & ~BM_MMDC_MPZQHWCTRL_ZQ_MODE) | BF_MMDC_MPZQHWCTRL_ZQ_MODE(v)))
#endif


/* --- Register HW_MMDC_MPZQHWCTRL, field ZQ_HW_PER[5:2] (RW)
 *
 * ZQ periodic calibration time. This field determines how often the periodic ZQ calibration is
 * performed. This field is applied for both ZQ short calibration and ZQ automatic calibration
 * process with i.MX ZQ calibration pad. Whenever this timer is expired then according to ZQ_MODE
 * the ZQ automatic calibration process with the i.MX ZQ calibration pad will be issued and/or
 * short/long command will be issued to the external DDR device. This field is ignored if ZQ_MODE
 * equals "00"
 *
 * Values:
 * 0000 - ZQ calibration is performed every 1 ms.
 * 0001 - ZQ calibration is performed every 2 ms.
 * 0010 - ZQ calibration is performed every 4 ms.
 * 1010 - ZQ calibration is performed every 1 ms.
 * 1110 - ZQ calibration is performed every 16 ms.
 * 1111 - ZQ calibration is performed every 32 ms.
 */

#define BP_MMDC_MPZQHWCTRL_ZQ_HW_PER      (2)      //!< Bit position for MMDC_MPZQHWCTRL_ZQ_HW_PER.
#define BM_MMDC_MPZQHWCTRL_ZQ_HW_PER      (0x0000003c)  //!< Bit mask for MMDC_MPZQHWCTRL_ZQ_HW_PER.

//! @brief Get value of MMDC_MPZQHWCTRL_ZQ_HW_PER from a register value.
#define BG_MMDC_MPZQHWCTRL_ZQ_HW_PER(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_MMDC_MPZQHWCTRL_ZQ_HW_PER) >> BP_MMDC_MPZQHWCTRL_ZQ_HW_PER)

//! @brief Format value for bitfield MMDC_MPZQHWCTRL_ZQ_HW_PER.
#define BF_MMDC_MPZQHWCTRL_ZQ_HW_PER(v)   ((__REG_VALUE_TYPE((v), reg32_t) << BP_MMDC_MPZQHWCTRL_ZQ_HW_PER) & BM_MMDC_MPZQHWCTRL_ZQ_HW_PER)

#ifndef __LANGUAGE_ASM__
//! @brief Set the ZQ_HW_PER field to a new value.
#define BW_MMDC_MPZQHWCTRL_ZQ_HW_PER(v)   (HW_MMDC_MPZQHWCTRL_WR((HW_MMDC_MPZQHWCTRL_RD() & ~BM_MMDC_MPZQHWCTRL_ZQ_HW_PER) | BF_MMDC_MPZQHWCTRL_ZQ_HW_PER(v)))
#endif


/* --- Register HW_MMDC_MPZQHWCTRL, field ZQ_HW_PU_RES[10:6] (RO)
 *
 * ZQ automatic calibration pull-up result. This field holds the pull-up resistor value calculated
 * at the end of the ZQ automatic calibration process with the i.MX ZQ calibration pad.
 *
 * Values:
 * 00000 - Min. resistance.
 * 11111 - Max. resistance.
 */

#define BP_MMDC_MPZQHWCTRL_ZQ_HW_PU_RES      (6)      //!< Bit position for MMDC_MPZQHWCTRL_ZQ_HW_PU_RES.
#define BM_MMDC_MPZQHWCTRL_ZQ_HW_PU_RES      (0x000007c0)  //!< Bit mask for MMDC_MPZQHWCTRL_ZQ_HW_PU_RES.

//! @brief Get value of MMDC_MPZQHWCTRL_ZQ_HW_PU_RES from a register value.
#define BG_MMDC_MPZQHWCTRL_ZQ_HW_PU_RES(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_MMDC_MPZQHWCTRL_ZQ_HW_PU_RES) >> BP_MMDC_MPZQHWCTRL_ZQ_HW_PU_RES)


/* --- Register HW_MMDC_MPZQHWCTRL, field ZQ_HW_PD_RES[15:11] (RO)
 *
 * ZQ HW calibration pull-down result. This field holds the pull-down resistor value calculated at
 * the end of the ZQ automatic calibration process with the i.MX ZQ calibration pad.
 *
 * Values:
 * 00000 - Max. resistance.
 * 11111 - Min. resistance.
 */

#define BP_MMDC_MPZQHWCTRL_ZQ_HW_PD_RES      (11)      //!< Bit position for MMDC_MPZQHWCTRL_ZQ_HW_PD_RES.
#define BM_MMDC_MPZQHWCTRL_ZQ_HW_PD_RES      (0x0000f800)  //!< Bit mask for MMDC_MPZQHWCTRL_ZQ_HW_PD_RES.

//! @brief Get value of MMDC_MPZQHWCTRL_ZQ_HW_PD_RES from a register value.
#define BG_MMDC_MPZQHWCTRL_ZQ_HW_PD_RES(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_MMDC_MPZQHWCTRL_ZQ_HW_PD_RES) >> BP_MMDC_MPZQHWCTRL_ZQ_HW_PD_RES)


/* --- Register HW_MMDC_MPZQHWCTRL, field ZQ_HW_FOR[16] (RW)
 *
 * Force ZQ automatic calibration process with the i.MX ZQ calibration pad. When this bit is
 * asserted then the MMDC will issue one ZQ automatic calibration process with the i.MX ZQ
 * calibration pad. It is the user responsibility to make sure that all the accesses to DDR will be
 * finished before asserting this bit using CON_REQ/CON_ACK mechanism. HW will negate this bit upon
 * completion of the ZQ calibration process. Upon negation of this bit the ZQ HW calibration pull-up
 * and pull-down results (ZQ_HW_PU_RES and ZQ_HW_PD_RES respectively) are valid In order to enable
 * this bit ZQ_MODE must be set to either "1" or "3"
 */

#define BP_MMDC_MPZQHWCTRL_ZQ_HW_FOR      (16)      //!< Bit position for MMDC_MPZQHWCTRL_ZQ_HW_FOR.
#define BM_MMDC_MPZQHWCTRL_ZQ_HW_FOR      (0x00010000)  //!< Bit mask for MMDC_MPZQHWCTRL_ZQ_HW_FOR.

//! @brief Get value of MMDC_MPZQHWCTRL_ZQ_HW_FOR from a register value.
#define BG_MMDC_MPZQHWCTRL_ZQ_HW_FOR(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_MMDC_MPZQHWCTRL_ZQ_HW_FOR) >> BP_MMDC_MPZQHWCTRL_ZQ_HW_FOR)

//! @brief Format value for bitfield MMDC_MPZQHWCTRL_ZQ_HW_FOR.
#define BF_MMDC_MPZQHWCTRL_ZQ_HW_FOR(v)   ((__REG_VALUE_TYPE((v), reg32_t) << BP_MMDC_MPZQHWCTRL_ZQ_HW_FOR) & BM_MMDC_MPZQHWCTRL_ZQ_HW_FOR)

#ifndef __LANGUAGE_ASM__
//! @brief Set the ZQ_HW_FOR field to a new value.
#define BW_MMDC_MPZQHWCTRL_ZQ_HW_FOR(v)   (HW_MMDC_MPZQHWCTRL_WR((HW_MMDC_MPZQHWCTRL_RD() & ~BM_MMDC_MPZQHWCTRL_ZQ_HW_FOR) | BF_MMDC_MPZQHWCTRL_ZQ_HW_FOR(v)))
#endif

/* --- Register HW_MMDC_MPZQHWCTRL, field TZQ_INIT[19:17] (RW)
 *
 * Device ZQ long/init time. This field holds the number of cycles that are required by the external
 * DDR device to perform ZQ long calibration right after reset. Upon driving the command to the DDR
 * device then no further accesses will be issued to the DDR device till satisfying that time. In
 * LPDDR2 the ZQ init time is taken from MPZQLP2CTL[ZQ_LP2_HW_ZQINIT] This field should not be
 * update during ZQ calibration.
 *
 * Values:
 * 000 - Reserved
 * 001 - Reserved
 * 010 - 128 cycles
 * 011 - 256 cycles
 * 100 - 512 cycles - Default (JEDEC value for DDR3)
 * 101 - 1024 cycles
 * 110- - 111 Resreved
 */

#define BP_MMDC_MPZQHWCTRL_TZQ_INIT      (17)      //!< Bit position for MMDC_MPZQHWCTRL_TZQ_INIT.
#define BM_MMDC_MPZQHWCTRL_TZQ_INIT      (0x000e0000)  //!< Bit mask for MMDC_MPZQHWCTRL_TZQ_INIT.

//! @brief Get value of MMDC_MPZQHWCTRL_TZQ_INIT from a register value.
#define BG_MMDC_MPZQHWCTRL_TZQ_INIT(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_MMDC_MPZQHWCTRL_TZQ_INIT) >> BP_MMDC_MPZQHWCTRL_TZQ_INIT)

//! @brief Format value for bitfield MMDC_MPZQHWCTRL_TZQ_INIT.
#define BF_MMDC_MPZQHWCTRL_TZQ_INIT(v)   ((__REG_VALUE_TYPE((v), reg32_t) << BP_MMDC_MPZQHWCTRL_TZQ_INIT) & BM_MMDC_MPZQHWCTRL_TZQ_INIT)

#ifndef __LANGUAGE_ASM__
//! @brief Set the TZQ_INIT field to a new value.
#define BW_MMDC_MPZQHWCTRL_TZQ_INIT(v)   (HW_MMDC_MPZQHWCTRL_WR((HW_MMDC_MPZQHWCTRL_RD() & ~BM_MMDC_MPZQHWCTRL_TZQ_INIT) | BF_MMDC_MPZQHWCTRL_TZQ_INIT(v)))
#endif


/* --- Register HW_MMDC_MPZQHWCTRL, field TZQ_OPER[22:20] (RW)
 *
 * Device ZQ long/oper time. This field holds the number of cycles that are required by the external
 * DDR device to perform ZQ long calibration except the first ZQ long command that is isued after
 * reset. Upon driving the command to the DDR device then no further accesses will be issued to the
 * DDR device till satisfying that time. In LPDDR2 the ZQ oper time is taken from
 * MPZQLP2CTL[ZQ_LP2_HW_ZQCL] This field should not be update during ZQ calibration.
 *
 * Values:
 * 000 - Reserved
 * 001 - Reserved
 * 010 - 128 cycles
 * 011 - 256 cycles - Default (JEDEC value for DDR3)
 * 100 - 512 cycles
 * 101 - 1024 cycles
 * 110- - 111 Resreved
 */

#define BP_MMDC_MPZQHWCTRL_TZQ_OPER      (20)      //!< Bit position for MMDC_MPZQHWCTRL_TZQ_OPER.
#define BM_MMDC_MPZQHWCTRL_TZQ_OPER      (0x00700000)  //!< Bit mask for MMDC_MPZQHWCTRL_TZQ_OPER.

//! @brief Get value of MMDC_MPZQHWCTRL_TZQ_OPER from a register value.
#define BG_MMDC_MPZQHWCTRL_TZQ_OPER(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_MMDC_MPZQHWCTRL_TZQ_OPER) >> BP_MMDC_MPZQHWCTRL_TZQ_OPER)

//! @brief Format value for bitfield MMDC_MPZQHWCTRL_TZQ_OPER.
#define BF_MMDC_MPZQHWCTRL_TZQ_OPER(v)   ((__REG_VALUE_TYPE((v), reg32_t) << BP_MMDC_MPZQHWCTRL_TZQ_OPER) & BM_MMDC_MPZQHWCTRL_TZQ_OPER)

#ifndef __LANGUAGE_ASM__
//! @brief Set the TZQ_OPER field to a new value.
#define BW_MMDC_MPZQHWCTRL_TZQ_OPER(v)   (HW_MMDC_MPZQHWCTRL_WR((HW_MMDC_MPZQHWCTRL_RD() & ~BM_MMDC_MPZQHWCTRL_TZQ_OPER) | BF_MMDC_MPZQHWCTRL_TZQ_OPER(v)))
#endif


/* --- Register HW_MMDC_MPZQHWCTRL, field TZQ_CS[25:23] (RW)
 *
 * Device ZQ short time. This field holds the number of cycles that are required by the external DDR
 * device to perform ZQ short calibration. Upon driving the command to the DDR device then no
 * further accesses will be issued to the DDR device till satisfying that time. In LPDDR2 the ZQ
 * short time is taken from MPZQLP2CTL[ZQ_LP2_HW_ZQCS] This field should not be update during ZQ
 * calibration.
 *
 * Values:
 * 000 - Reserved
 * 001 - Reserved
 * 010 - 128 cycles (Default)
 * 011 - 256 cycles
 * 100 - 512 cycles
 * 101 - 1024 cycles
 * 110- - 111 Resreved
 */

#define BP_MMDC_MPZQHWCTRL_TZQ_CS      (23)      //!< Bit position for MMDC_MPZQHWCTRL_TZQ_CS.
#define BM_MMDC_MPZQHWCTRL_TZQ_CS      (0x03800000)  //!< Bit mask for MMDC_MPZQHWCTRL_TZQ_CS.

//! @brief Get value of MMDC_MPZQHWCTRL_TZQ_CS from a register value.
#define BG_MMDC_MPZQHWCTRL_TZQ_CS(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_MMDC_MPZQHWCTRL_TZQ_CS) >> BP_MMDC_MPZQHWCTRL_TZQ_CS)

//! @brief Format value for bitfield MMDC_MPZQHWCTRL_TZQ_CS.
#define BF_MMDC_MPZQHWCTRL_TZQ_CS(v)   ((__REG_VALUE_TYPE((v), reg32_t) << BP_MMDC_MPZQHWCTRL_TZQ_CS) & BM_MMDC_MPZQHWCTRL_TZQ_CS)

#ifndef __LANGUAGE_ASM__
//! @brief Set the TZQ_CS field to a new value.
#define BW_MMDC_MPZQHWCTRL_TZQ_CS(v)   (HW_MMDC_MPZQHWCTRL_WR((HW_MMDC_MPZQHWCTRL_RD() & ~BM_MMDC_MPZQHWCTRL_TZQ_CS) | BF_MMDC_MPZQHWCTRL_TZQ_CS(v)))
#endif


/* --- Register HW_MMDC_MPZQHWCTRL, field ZQ_EARLY_COMPARATOR_EN_TIMER[31:27] (RW)
 *
 * ZQ early comparator enable timer. This timer defines the interval between the warming up of the
 * comparator of the i.MX ZQ calibration pad and the begining of the ZQ calibration process with the
 * pad
 *
 * Values:
 * 0x0 - - 0x6 Reserved
 * 0x7 - 8 cycles
 * 0x14 - 21 cycles (Default)
 * 0x1E - 31 cycles
 * 0x1F - 32 cycles
 */

#define BP_MMDC_MPZQHWCTRL_ZQ_EARLY_COMPARATOR_EN_TIMER      (27)      //!< Bit position for MMDC_MPZQHWCTRL_ZQ_EARLY_COMPARATOR_EN_TIMER.
#define BM_MMDC_MPZQHWCTRL_ZQ_EARLY_COMPARATOR_EN_TIMER      (0xf8000000)  //!< Bit mask for MMDC_MPZQHWCTRL_ZQ_EARLY_COMPARATOR_EN_TIMER.

//! @brief Get value of MMDC_MPZQHWCTRL_ZQ_EARLY_COMPARATOR_EN_TIMER from a register value.
#define BG_MMDC_MPZQHWCTRL_ZQ_EARLY_COMPARATOR_EN_TIMER(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_MMDC_MPZQHWCTRL_ZQ_EARLY_COMPARATOR_EN_TIMER) >> BP_MMDC_MPZQHWCTRL_ZQ_EARLY_COMPARATOR_EN_TIMER)

//! @brief Format value for bitfield MMDC_MPZQHWCTRL_ZQ_EARLY_COMPARATOR_EN_TIMER.
#define BF_MMDC_MPZQHWCTRL_ZQ_EARLY_COMPARATOR_EN_TIMER(v)   ((__REG_VALUE_TYPE((v), reg32_t) << BP_MMDC_MPZQHWCTRL_ZQ_EARLY_COMPARATOR_EN_TIMER) & BM_MMDC_MPZQHWCTRL_ZQ_EARLY_COMPARATOR_EN_TIMER)

#ifndef __LANGUAGE_ASM__
//! @brief Set the ZQ_EARLY_COMPARATOR_EN_TIMER field to a new value.
#define BW_MMDC_MPZQHWCTRL_ZQ_EARLY_COMPARATOR_EN_TIMER(v)   (HW_MMDC_MPZQHWCTRL_WR((HW_MMDC_MPZQHWCTRL_RD() & ~BM_MMDC_MPZQHWCTRL_ZQ_EARLY_COMPARATOR_EN_TIMER) | BF_MMDC_MPZQHWCTRL_ZQ_EARLY_COMPARATOR_EN_TIMER(v)))
#endif


//-------------------------------------------------------------------------------------------
// HW_MMDC_MPZQSWCTRL - MMDC PHY ZQ SW control register
//-------------------------------------------------------------------------------------------

#ifndef __LANGUAGE_ASM__
/*!
 * @brief HW_MMDC_MPZQSWCTRL - MMDC PHY ZQ SW control register (RW)
 *
 * Reset value: 0x00000000
 *
 * Supported Mode Of Operations:  For Channel 0: All  For Channel 1: This register is reserved.
 */
typedef union _hw_mmdc_mpzqswctrl
{
    reg32_t U;
    struct _hw_mmdc_mpzqswctrl_bitfields
    {
        unsigned ZQ_SW_FOR : 1; //!< [0] ZQ SW calibration enable.
        unsigned ZQ_SW_RES : 1; //!< [1] ZQ software calibration result.
        unsigned ZQ_SW_PU_VAL : 5; //!< [6:2] ZQ software pull-up resistence.This field determines the value of the PU resistor during SW ZQ calibration.
        unsigned ZQ_SW_PD_VAL : 5; //!< [11:7] ZQ software pull-down resistence.This field determines the value of the PD resistor during SW ZQ calibration.
        unsigned ZQ_SW_PD : 1; //!< [12] ZQ software PU/PD calibration.
        unsigned USE_ZQ_SW_VAL : 1; //!< [13] Use SW ZQ configured value for I/O pads resistor controls.
        unsigned RESERVED0 : 2; //!< [15:14] Reserved
        unsigned ZQ_CMP_OUT_SMP : 2; //!< [17:16] Defines the amount of cycles between driving the ZQ signals to the ZQ pad and till sampling the comparator enable output while performing ZQ calibration process with the i.MX ZQ calibration pad
        unsigned RESERVED1 : 14; //!< [31:18] Reserved
    } B;
} hw_mmdc_mpzqswctrl_t;
#endif

/*
 * constants & macros for entire MMDC_MPZQSWCTRL register
 */
#define HW_MMDC_MPZQSWCTRL_ADDR      (REGS_MMDC_BASE + 0x804)

#ifndef __LANGUAGE_ASM__
#define HW_MMDC_MPZQSWCTRL           (*(volatile hw_mmdc_mpzqswctrl_t *) HW_MMDC_MPZQSWCTRL_ADDR)
#define HW_MMDC_MPZQSWCTRL_RD()      (HW_MMDC_MPZQSWCTRL.U)
#define HW_MMDC_MPZQSWCTRL_WR(v)     (HW_MMDC_MPZQSWCTRL.U = (v))
#define HW_MMDC_MPZQSWCTRL_SET(v)    (HW_MMDC_MPZQSWCTRL_WR(HW_MMDC_MPZQSWCTRL_RD() |  (v)))
#define HW_MMDC_MPZQSWCTRL_CLR(v)    (HW_MMDC_MPZQSWCTRL_WR(HW_MMDC_MPZQSWCTRL_RD() & ~(v)))
#define HW_MMDC_MPZQSWCTRL_TOG(v)    (HW_MMDC_MPZQSWCTRL_WR(HW_MMDC_MPZQSWCTRL_RD() ^  (v)))
#endif

/*
 * constants & macros for individual MMDC_MPZQSWCTRL bitfields
 */

/* --- Register HW_MMDC_MPZQSWCTRL, field ZQ_SW_FOR[0] (RW)
 *
 * ZQ SW calibration enable. This bit when asserted enables ZQ SW calibration. HW negates this bit
 * upon completion of the ZQ SW calibration. Upon negation of this bit the ZQ SW calibration result
 * (i.e ZQ_SW_RES) is valid
 */

#define BP_MMDC_MPZQSWCTRL_ZQ_SW_FOR      (0)      //!< Bit position for MMDC_MPZQSWCTRL_ZQ_SW_FOR.
#define BM_MMDC_MPZQSWCTRL_ZQ_SW_FOR      (0x00000001)  //!< Bit mask for MMDC_MPZQSWCTRL_ZQ_SW_FOR.

//! @brief Get value of MMDC_MPZQSWCTRL_ZQ_SW_FOR from a register value.
#define BG_MMDC_MPZQSWCTRL_ZQ_SW_FOR(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_MMDC_MPZQSWCTRL_ZQ_SW_FOR) >> BP_MMDC_MPZQSWCTRL_ZQ_SW_FOR)

//! @brief Format value for bitfield MMDC_MPZQSWCTRL_ZQ_SW_FOR.
#define BF_MMDC_MPZQSWCTRL_ZQ_SW_FOR(v)   ((__REG_VALUE_TYPE((v), reg32_t) << BP_MMDC_MPZQSWCTRL_ZQ_SW_FOR) & BM_MMDC_MPZQSWCTRL_ZQ_SW_FOR)

#ifndef __LANGUAGE_ASM__
//! @brief Set the ZQ_SW_FOR field to a new value.
#define BW_MMDC_MPZQSWCTRL_ZQ_SW_FOR(v)   (HW_MMDC_MPZQSWCTRL_WR((HW_MMDC_MPZQSWCTRL_RD() & ~BM_MMDC_MPZQSWCTRL_ZQ_SW_FOR) | BF_MMDC_MPZQSWCTRL_ZQ_SW_FOR(v)))
#endif

/* --- Register HW_MMDC_MPZQSWCTRL, field ZQ_SW_RES[1] (RO)
 *
 * ZQ software calibration result. This bit reflects the ZQ calibration voltage comparator value.
 *
 * Values:
 * 0 - Current ZQ calibration voltage is less than VDD/2.
 * 1 - Current ZQ calibration voltage is more than VDD/2
 */

#define BP_MMDC_MPZQSWCTRL_ZQ_SW_RES      (1)      //!< Bit position for MMDC_MPZQSWCTRL_ZQ_SW_RES.
#define BM_MMDC_MPZQSWCTRL_ZQ_SW_RES      (0x00000002)  //!< Bit mask for MMDC_MPZQSWCTRL_ZQ_SW_RES.

//! @brief Get value of MMDC_MPZQSWCTRL_ZQ_SW_RES from a register value.
#define BG_MMDC_MPZQSWCTRL_ZQ_SW_RES(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_MMDC_MPZQSWCTRL_ZQ_SW_RES) >> BP_MMDC_MPZQSWCTRL_ZQ_SW_RES)


/* --- Register HW_MMDC_MPZQSWCTRL, field ZQ_SW_PU_VAL[6:2] (RW)
 *
 * ZQ software pull-up resistence.This field determines the value of the PU resistor during SW ZQ
 * calibration.
 *
 * Values:
 * 00000 - Min. resistance.
 * 11111 - Max. resistance.
 */

#define BP_MMDC_MPZQSWCTRL_ZQ_SW_PU_VAL      (2)      //!< Bit position for MMDC_MPZQSWCTRL_ZQ_SW_PU_VAL.
#define BM_MMDC_MPZQSWCTRL_ZQ_SW_PU_VAL      (0x0000007c)  //!< Bit mask for MMDC_MPZQSWCTRL_ZQ_SW_PU_VAL.

//! @brief Get value of MMDC_MPZQSWCTRL_ZQ_SW_PU_VAL from a register value.
#define BG_MMDC_MPZQSWCTRL_ZQ_SW_PU_VAL(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_MMDC_MPZQSWCTRL_ZQ_SW_PU_VAL) >> BP_MMDC_MPZQSWCTRL_ZQ_SW_PU_VAL)

//! @brief Format value for bitfield MMDC_MPZQSWCTRL_ZQ_SW_PU_VAL.
#define BF_MMDC_MPZQSWCTRL_ZQ_SW_PU_VAL(v)   ((__REG_VALUE_TYPE((v), reg32_t) << BP_MMDC_MPZQSWCTRL_ZQ_SW_PU_VAL) & BM_MMDC_MPZQSWCTRL_ZQ_SW_PU_VAL)

#ifndef __LANGUAGE_ASM__
//! @brief Set the ZQ_SW_PU_VAL field to a new value.
#define BW_MMDC_MPZQSWCTRL_ZQ_SW_PU_VAL(v)   (HW_MMDC_MPZQSWCTRL_WR((HW_MMDC_MPZQSWCTRL_RD() & ~BM_MMDC_MPZQSWCTRL_ZQ_SW_PU_VAL) | BF_MMDC_MPZQSWCTRL_ZQ_SW_PU_VAL(v)))
#endif


/* --- Register HW_MMDC_MPZQSWCTRL, field ZQ_SW_PD_VAL[11:7] (RW)
 *
 * ZQ software pull-down resistence.This field determines the value of the PD resistor during SW ZQ
 * calibration.
 *
 * Values:
 * 00000 - Max. resistance.
 * 11111 - Min. resistance.
 */

#define BP_MMDC_MPZQSWCTRL_ZQ_SW_PD_VAL      (7)      //!< Bit position for MMDC_MPZQSWCTRL_ZQ_SW_PD_VAL.
#define BM_MMDC_MPZQSWCTRL_ZQ_SW_PD_VAL      (0x00000f80)  //!< Bit mask for MMDC_MPZQSWCTRL_ZQ_SW_PD_VAL.

//! @brief Get value of MMDC_MPZQSWCTRL_ZQ_SW_PD_VAL from a register value.
#define BG_MMDC_MPZQSWCTRL_ZQ_SW_PD_VAL(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_MMDC_MPZQSWCTRL_ZQ_SW_PD_VAL) >> BP_MMDC_MPZQSWCTRL_ZQ_SW_PD_VAL)

//! @brief Format value for bitfield MMDC_MPZQSWCTRL_ZQ_SW_PD_VAL.
#define BF_MMDC_MPZQSWCTRL_ZQ_SW_PD_VAL(v)   ((__REG_VALUE_TYPE((v), reg32_t) << BP_MMDC_MPZQSWCTRL_ZQ_SW_PD_VAL) & BM_MMDC_MPZQSWCTRL_ZQ_SW_PD_VAL)

#ifndef __LANGUAGE_ASM__
//! @brief Set the ZQ_SW_PD_VAL field to a new value.
#define BW_MMDC_MPZQSWCTRL_ZQ_SW_PD_VAL(v)   (HW_MMDC_MPZQSWCTRL_WR((HW_MMDC_MPZQSWCTRL_RD() & ~BM_MMDC_MPZQSWCTRL_ZQ_SW_PD_VAL) | BF_MMDC_MPZQSWCTRL_ZQ_SW_PD_VAL(v)))
#endif


/* --- Register HW_MMDC_MPZQSWCTRL, field ZQ_SW_PD[12] (RW)
 *
 * ZQ software PU/PD calibration. This bit determines the calibration stage (PU or PD).
 *
 * Values:
 * 0 - PU resistor calibration
 * 1 - PD resistor calibration
 */

#define BP_MMDC_MPZQSWCTRL_ZQ_SW_PD      (12)      //!< Bit position for MMDC_MPZQSWCTRL_ZQ_SW_PD.
#define BM_MMDC_MPZQSWCTRL_ZQ_SW_PD      (0x00001000)  //!< Bit mask for MMDC_MPZQSWCTRL_ZQ_SW_PD.

//! @brief Get value of MMDC_MPZQSWCTRL_ZQ_SW_PD from a register value.
#define BG_MMDC_MPZQSWCTRL_ZQ_SW_PD(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_MMDC_MPZQSWCTRL_ZQ_SW_PD) >> BP_MMDC_MPZQSWCTRL_ZQ_SW_PD)

//! @brief Format value for bitfield MMDC_MPZQSWCTRL_ZQ_SW_PD.
#define BF_MMDC_MPZQSWCTRL_ZQ_SW_PD(v)   ((__REG_VALUE_TYPE((v), reg32_t) << BP_MMDC_MPZQSWCTRL_ZQ_SW_PD) & BM_MMDC_MPZQSWCTRL_ZQ_SW_PD)

#ifndef __LANGUAGE_ASM__
//! @brief Set the ZQ_SW_PD field to a new value.
#define BW_MMDC_MPZQSWCTRL_ZQ_SW_PD(v)   (HW_MMDC_MPZQSWCTRL_WR((HW_MMDC_MPZQSWCTRL_RD() & ~BM_MMDC_MPZQSWCTRL_ZQ_SW_PD) | BF_MMDC_MPZQSWCTRL_ZQ_SW_PD(v)))
#endif


/* --- Register HW_MMDC_MPZQSWCTRL, field USE_ZQ_SW_VAL[13] (RW)
 *
 * Use SW ZQ configured value for I/O pads resistor controls. This bit selects whether ZQ SW value
 * or ZQ HW value will be driven to the I/O pads resistor controls. By default this bit is cleared
 * and MMDC drives the HW ZQ status bits on the resistor controls of the I/O pads. This bit should
 * not be updated during ZQ calibration.
 *
 * Values:
 * 0 - Fields ZQ_HW_PD_VAL & ZQ_HW_PU_VAL will be driven to I/O pads resistor controls.
 * 1 - Fields ZQ_SW_PD_VAL & ZQ_SW_PU_VAL will be driven to I/O pads resistor controls.
 */

#define BP_MMDC_MPZQSWCTRL_USE_ZQ_SW_VAL      (13)      //!< Bit position for MMDC_MPZQSWCTRL_USE_ZQ_SW_VAL.
#define BM_MMDC_MPZQSWCTRL_USE_ZQ_SW_VAL      (0x00002000)  //!< Bit mask for MMDC_MPZQSWCTRL_USE_ZQ_SW_VAL.

//! @brief Get value of MMDC_MPZQSWCTRL_USE_ZQ_SW_VAL from a register value.
#define BG_MMDC_MPZQSWCTRL_USE_ZQ_SW_VAL(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_MMDC_MPZQSWCTRL_USE_ZQ_SW_VAL) >> BP_MMDC_MPZQSWCTRL_USE_ZQ_SW_VAL)

//! @brief Format value for bitfield MMDC_MPZQSWCTRL_USE_ZQ_SW_VAL.
#define BF_MMDC_MPZQSWCTRL_USE_ZQ_SW_VAL(v)   ((__REG_VALUE_TYPE((v), reg32_t) << BP_MMDC_MPZQSWCTRL_USE_ZQ_SW_VAL) & BM_MMDC_MPZQSWCTRL_USE_ZQ_SW_VAL)

#ifndef __LANGUAGE_ASM__
//! @brief Set the USE_ZQ_SW_VAL field to a new value.
#define BW_MMDC_MPZQSWCTRL_USE_ZQ_SW_VAL(v)   (HW_MMDC_MPZQSWCTRL_WR((HW_MMDC_MPZQSWCTRL_RD() & ~BM_MMDC_MPZQSWCTRL_USE_ZQ_SW_VAL) | BF_MMDC_MPZQSWCTRL_USE_ZQ_SW_VAL(v)))
#endif


/* --- Register HW_MMDC_MPZQSWCTRL, field ZQ_CMP_OUT_SMP[17:16] (RW)
 *
 * Defines the amount of cycles between driving the ZQ signals to the ZQ pad and till sampling the
 * comparator enable output while performing ZQ calibration process with the i.MX ZQ calibration pad
 *
 * Values:
 * 00 - 7 cycles
 * 01 - 15 cycles
 * 10 - 23 cycles
 * 11 - 31 cycles
 */

#define BP_MMDC_MPZQSWCTRL_ZQ_CMP_OUT_SMP      (16)      //!< Bit position for MMDC_MPZQSWCTRL_ZQ_CMP_OUT_SMP.
#define BM_MMDC_MPZQSWCTRL_ZQ_CMP_OUT_SMP      (0x00030000)  //!< Bit mask for MMDC_MPZQSWCTRL_ZQ_CMP_OUT_SMP.

//! @brief Get value of MMDC_MPZQSWCTRL_ZQ_CMP_OUT_SMP from a register value.
#define BG_MMDC_MPZQSWCTRL_ZQ_CMP_OUT_SMP(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_MMDC_MPZQSWCTRL_ZQ_CMP_OUT_SMP) >> BP_MMDC_MPZQSWCTRL_ZQ_CMP_OUT_SMP)

//! @brief Format value for bitfield MMDC_MPZQSWCTRL_ZQ_CMP_OUT_SMP.
#define BF_MMDC_MPZQSWCTRL_ZQ_CMP_OUT_SMP(v)   ((__REG_VALUE_TYPE((v), reg32_t) << BP_MMDC_MPZQSWCTRL_ZQ_CMP_OUT_SMP) & BM_MMDC_MPZQSWCTRL_ZQ_CMP_OUT_SMP)

#ifndef __LANGUAGE_ASM__
//! @brief Set the ZQ_CMP_OUT_SMP field to a new value.
#define BW_MMDC_MPZQSWCTRL_ZQ_CMP_OUT_SMP(v)   (HW_MMDC_MPZQSWCTRL_WR((HW_MMDC_MPZQSWCTRL_RD() & ~BM_MMDC_MPZQSWCTRL_ZQ_CMP_OUT_SMP) | BF_MMDC_MPZQSWCTRL_ZQ_CMP_OUT_SMP(v)))
#endif


//-------------------------------------------------------------------------------------------
// HW_MMDC_MPWLGCR - MMDC PHY Write Leveling Configuration and Error Status Register
//-------------------------------------------------------------------------------------------

#ifndef __LANGUAGE_ASM__
/*!
 * @brief HW_MMDC_MPWLGCR - MMDC PHY Write Leveling Configuration and Error Status Register (RW)
 *
 * Reset value: 0x00000000
 *
 * Supported Mode Of Operations:  For Channel 0: All  For Channel 1: DDR3_x64, LP2_2ch_x16,
 * LP2_2ch_x32
 */
typedef union _hw_mmdc_mpwlgcr
{
    reg32_t U;
    struct _hw_mmdc_mpwlgcr_bitfields
    {
        unsigned HW_WL_EN : 1; //!< [0] Write-Leveling HW (automatic) enable.
        unsigned SW_WL_EN : 1; //!< [1] Write-Leveling SW enable.
        unsigned SW_WL_CNT_EN : 1; //!< [2] SW write-leveling count down enable.This bit when asserted set a certain delay of (25+15) cycles from the setting of SW_WL_EN and before driving the DQS to the DDR device.This bit should be asserted before the first SW write-leveling request and after issuing the write leveling MRS command
        unsigned RESERVED0 : 1; //!< [3] Reserved
        unsigned WL_SW_RES0 : 1; //!< [4] Byte0 write-leveling software result.
        unsigned WL_SW_RES1 : 1; //!< [5] Byte1 write-leveling software result.
        unsigned WL_SW_RES2 : 1; //!< [6] Byte2 write-leveling software result.
        unsigned WL_SW_RES3 : 1; //!< [7] Byte3 write-leveling software result.
        unsigned WL_HW_ERR0 : 1; //!< [8] Byte0 write-leveling HW calibration error.
        unsigned WL_HW_ERR1 : 1; //!< [9] Byte1 write-leveling HW calibration error.
        unsigned WL_HW_ERR2 : 1; //!< [10] Byte2 write-leveling HW calibration error.
        unsigned WL_HW_ERR3 : 1; //!< [11] Byte3 write-leveling HW calibration error.
        unsigned RESERVED1 : 20; //!< [31:12] Reserved
    } B;
} hw_mmdc_mpwlgcr_t;
#endif

/*
 * constants & macros for entire MMDC_MPWLGCR register
 */
#define HW_MMDC_MPWLGCR_ADDR      (REGS_MMDC_BASE + 0x808)

#ifndef __LANGUAGE_ASM__
#define HW_MMDC_MPWLGCR           (*(volatile hw_mmdc_mpwlgcr_t *) HW_MMDC_MPWLGCR_ADDR)
#define HW_MMDC_MPWLGCR_RD()      (HW_MMDC_MPWLGCR.U)
#define HW_MMDC_MPWLGCR_WR(v)     (HW_MMDC_MPWLGCR.U = (v))
#define HW_MMDC_MPWLGCR_SET(v)    (HW_MMDC_MPWLGCR_WR(HW_MMDC_MPWLGCR_RD() |  (v)))
#define HW_MMDC_MPWLGCR_CLR(v)    (HW_MMDC_MPWLGCR_WR(HW_MMDC_MPWLGCR_RD() & ~(v)))
#define HW_MMDC_MPWLGCR_TOG(v)    (HW_MMDC_MPWLGCR_WR(HW_MMDC_MPWLGCR_RD() ^  (v)))
#endif

/*
 * constants & macros for individual MMDC_MPWLGCR bitfields
 */

/* --- Register HW_MMDC_MPWLGCR, field HW_WL_EN[0] (RW)
 *
 * Write-Leveling HW (automatic) enable. If this bit is asserted then the MMDC will perform the
 * whole Write-Leveling sequence with the DDR device (assuming that Write-Leveling procedure is
 * already enabled in the DDR device through MRS command). HW negates this bit upon completion of
 * the HW write-leveling. Negation of this bit also points that the write-leveling HW calibration
 * results are valid Before issuing the first DQS the MMDC counts 25 + 15 cycles automatically as
 * required by the standard.
 */

#define BP_MMDC_MPWLGCR_HW_WL_EN      (0)      //!< Bit position for MMDC_MPWLGCR_HW_WL_EN.
#define BM_MMDC_MPWLGCR_HW_WL_EN      (0x00000001)  //!< Bit mask for MMDC_MPWLGCR_HW_WL_EN.

//! @brief Get value of MMDC_MPWLGCR_HW_WL_EN from a register value.
#define BG_MMDC_MPWLGCR_HW_WL_EN(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_MMDC_MPWLGCR_HW_WL_EN) >> BP_MMDC_MPWLGCR_HW_WL_EN)

//! @brief Format value for bitfield MMDC_MPWLGCR_HW_WL_EN.
#define BF_MMDC_MPWLGCR_HW_WL_EN(v)   ((__REG_VALUE_TYPE((v), reg32_t) << BP_MMDC_MPWLGCR_HW_WL_EN) & BM_MMDC_MPWLGCR_HW_WL_EN)

#ifndef __LANGUAGE_ASM__
//! @brief Set the HW_WL_EN field to a new value.
#define BW_MMDC_MPWLGCR_HW_WL_EN(v)   (HW_MMDC_MPWLGCR_WR((HW_MMDC_MPWLGCR_RD() & ~BM_MMDC_MPWLGCR_HW_WL_EN) | BF_MMDC_MPWLGCR_HW_WL_EN(v)))
#endif

/* --- Register HW_MMDC_MPWLGCR, field SW_WL_EN[1] (RW)
 *
 * Write-Leveling SW enable. If this bit is asserted then the MMDC will perform one write-leveling
 * iteration with the DDR device (assuming that Write-Leveling procedure is already enabled in the
 * DDR device through MRS command). HW negate this bit upon completion of the SW write-leveling.
 * Negation of this bit also points that the write-leveling SW calibration result is valid If this
 * bit and the SW_WL_CNT_EN are enabled the MMDC counts 25 + 15 cycles before issuing the SW write-
 * leveling DQS.
 */

#define BP_MMDC_MPWLGCR_SW_WL_EN      (1)      //!< Bit position for MMDC_MPWLGCR_SW_WL_EN.
#define BM_MMDC_MPWLGCR_SW_WL_EN      (0x00000002)  //!< Bit mask for MMDC_MPWLGCR_SW_WL_EN.

//! @brief Get value of MMDC_MPWLGCR_SW_WL_EN from a register value.
#define BG_MMDC_MPWLGCR_SW_WL_EN(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_MMDC_MPWLGCR_SW_WL_EN) >> BP_MMDC_MPWLGCR_SW_WL_EN)

//! @brief Format value for bitfield MMDC_MPWLGCR_SW_WL_EN.
#define BF_MMDC_MPWLGCR_SW_WL_EN(v)   ((__REG_VALUE_TYPE((v), reg32_t) << BP_MMDC_MPWLGCR_SW_WL_EN) & BM_MMDC_MPWLGCR_SW_WL_EN)

#ifndef __LANGUAGE_ASM__
//! @brief Set the SW_WL_EN field to a new value.
#define BW_MMDC_MPWLGCR_SW_WL_EN(v)   (HW_MMDC_MPWLGCR_WR((HW_MMDC_MPWLGCR_RD() & ~BM_MMDC_MPWLGCR_SW_WL_EN) | BF_MMDC_MPWLGCR_SW_WL_EN(v)))
#endif

/* --- Register HW_MMDC_MPWLGCR, field SW_WL_CNT_EN[2] (RW)
 *
 * SW write-leveling count down enable.This bit when asserted set a certain delay of (25+15) cycles
 * from the setting of SW_WL_EN and before driving the DQS to the DDR device.This bit should be
 * asserted before the first SW write-leveling request and after issuing the write leveling MRS
 * command
 *
 * Values:
 * 0 - MMDC doesn't count 25+15 cycles before issuing write-leveling DQS.
 * 1 - MMDC counts 25+15 cycles before issuing write-leveling DQS.
 */

#define BP_MMDC_MPWLGCR_SW_WL_CNT_EN      (2)      //!< Bit position for MMDC_MPWLGCR_SW_WL_CNT_EN.
#define BM_MMDC_MPWLGCR_SW_WL_CNT_EN      (0x00000004)  //!< Bit mask for MMDC_MPWLGCR_SW_WL_CNT_EN.

//! @brief Get value of MMDC_MPWLGCR_SW_WL_CNT_EN from a register value.
#define BG_MMDC_MPWLGCR_SW_WL_CNT_EN(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_MMDC_MPWLGCR_SW_WL_CNT_EN) >> BP_MMDC_MPWLGCR_SW_WL_CNT_EN)

//! @brief Format value for bitfield MMDC_MPWLGCR_SW_WL_CNT_EN.
#define BF_MMDC_MPWLGCR_SW_WL_CNT_EN(v)   ((__REG_VALUE_TYPE((v), reg32_t) << BP_MMDC_MPWLGCR_SW_WL_CNT_EN) & BM_MMDC_MPWLGCR_SW_WL_CNT_EN)

#ifndef __LANGUAGE_ASM__
//! @brief Set the SW_WL_CNT_EN field to a new value.
#define BW_MMDC_MPWLGCR_SW_WL_CNT_EN(v)   (HW_MMDC_MPWLGCR_WR((HW_MMDC_MPWLGCR_RD() & ~BM_MMDC_MPWLGCR_SW_WL_CNT_EN) | BF_MMDC_MPWLGCR_SW_WL_CNT_EN(v)))
#endif


/* --- Register HW_MMDC_MPWLGCR, field WL_SW_RES0[4] (RO)
 *
 * Byte0 write-leveling software result. This bit reflects the value that is driven by the DDR
 * device on DQ0 during SW write-leveling.
 *
 * Values:
 * 0 - DQS0 sampled low CK during SW write-leveling.
 * 1 - DQS0 sampled high CK during SW write-leveling.
 */

#define BP_MMDC_MPWLGCR_WL_SW_RES0      (4)      //!< Bit position for MMDC_MPWLGCR_WL_SW_RES0.
#define BM_MMDC_MPWLGCR_WL_SW_RES0      (0x00000010)  //!< Bit mask for MMDC_MPWLGCR_WL_SW_RES0.

//! @brief Get value of MMDC_MPWLGCR_WL_SW_RES0 from a register value.
#define BG_MMDC_MPWLGCR_WL_SW_RES0(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_MMDC_MPWLGCR_WL_SW_RES0) >> BP_MMDC_MPWLGCR_WL_SW_RES0)


/* --- Register HW_MMDC_MPWLGCR, field WL_SW_RES1[5] (RO)
 *
 * Byte1 write-leveling software result. This bit reflects the value that is driven by the DDR
 * device on DQ8 during SW write-leveling.
 *
 * Values:
 * 0 - DQS1 sampled low CK during SW write-leveling.
 * 1 - DQS1 sampled high CK during SW write-leveling.
 */

#define BP_MMDC_MPWLGCR_WL_SW_RES1      (5)      //!< Bit position for MMDC_MPWLGCR_WL_SW_RES1.
#define BM_MMDC_MPWLGCR_WL_SW_RES1      (0x00000020)  //!< Bit mask for MMDC_MPWLGCR_WL_SW_RES1.

//! @brief Get value of MMDC_MPWLGCR_WL_SW_RES1 from a register value.
#define BG_MMDC_MPWLGCR_WL_SW_RES1(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_MMDC_MPWLGCR_WL_SW_RES1) >> BP_MMDC_MPWLGCR_WL_SW_RES1)


/* --- Register HW_MMDC_MPWLGCR, field WL_SW_RES2[6] (RO)
 *
 * Byte2 write-leveling software result. This bit reflects the value that is driven by the DDR
 * device on DQ16 during SW write-leveling.
 *
 * Values:
 * 0 - DQS2 sampled low CK during SW write-leveling.
 * 1 - DQS2 sampled high CK during SW write-leveling.
 */

#define BP_MMDC_MPWLGCR_WL_SW_RES2      (6)      //!< Bit position for MMDC_MPWLGCR_WL_SW_RES2.
#define BM_MMDC_MPWLGCR_WL_SW_RES2      (0x00000040)  //!< Bit mask for MMDC_MPWLGCR_WL_SW_RES2.

//! @brief Get value of MMDC_MPWLGCR_WL_SW_RES2 from a register value.
#define BG_MMDC_MPWLGCR_WL_SW_RES2(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_MMDC_MPWLGCR_WL_SW_RES2) >> BP_MMDC_MPWLGCR_WL_SW_RES2)


/* --- Register HW_MMDC_MPWLGCR, field WL_SW_RES3[7] (RO)
 *
 * Byte3 write-leveling software result. This bit reflects the value that is driven by the DDR
 * device on DQ24 during SW write-leveling.
 *
 * Values:
 * 0 - DQS3 sampled low CK during SW write-leveling.
 * 1 - DQS3 sampled high CK during SW write-leveling.
 */

#define BP_MMDC_MPWLGCR_WL_SW_RES3      (7)      //!< Bit position for MMDC_MPWLGCR_WL_SW_RES3.
#define BM_MMDC_MPWLGCR_WL_SW_RES3      (0x00000080)  //!< Bit mask for MMDC_MPWLGCR_WL_SW_RES3.

//! @brief Get value of MMDC_MPWLGCR_WL_SW_RES3 from a register value.
#define BG_MMDC_MPWLGCR_WL_SW_RES3(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_MMDC_MPWLGCR_WL_SW_RES3) >> BP_MMDC_MPWLGCR_WL_SW_RES3)


/* --- Register HW_MMDC_MPWLGCR, field WL_HW_ERR0[8] (RO)
 *
 * Byte0 write-leveling HW calibration error. This bit is asserted when an error was found on byte0
 * during write-leveling HW calibration. This bit is valid only upon completion of the write-
 * leveling HW calibration (i.e HW_WL_EN bit is de-asserted)
 *
 * Values:
 * 0 - No error was found on byte0 during write-leveling HW calibration.
 * 1 - An error was found on byte0 during write-leveling HW calibration.
 */

#define BP_MMDC_MPWLGCR_WL_HW_ERR0      (8)      //!< Bit position for MMDC_MPWLGCR_WL_HW_ERR0.
#define BM_MMDC_MPWLGCR_WL_HW_ERR0      (0x00000100)  //!< Bit mask for MMDC_MPWLGCR_WL_HW_ERR0.

//! @brief Get value of MMDC_MPWLGCR_WL_HW_ERR0 from a register value.
#define BG_MMDC_MPWLGCR_WL_HW_ERR0(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_MMDC_MPWLGCR_WL_HW_ERR0) >> BP_MMDC_MPWLGCR_WL_HW_ERR0)


/* --- Register HW_MMDC_MPWLGCR, field WL_HW_ERR1[9] (RO)
 *
 * Byte1 write-leveling HW calibration error. This bit is asserted when an error was found on byte1
 * during write-leveling HW calibration. This bit is valid only upon completion of the write-
 * leveling HW calibration (i.e HW_WL_EN bit is de-asserted)
 *
 * Values:
 * 0 - No error was found on byte1 during write-leveling HW calibration.
 * 1 - An error was found on byte1 during write-leveling HW calibration.
 */

#define BP_MMDC_MPWLGCR_WL_HW_ERR1      (9)      //!< Bit position for MMDC_MPWLGCR_WL_HW_ERR1.
#define BM_MMDC_MPWLGCR_WL_HW_ERR1      (0x00000200)  //!< Bit mask for MMDC_MPWLGCR_WL_HW_ERR1.

//! @brief Get value of MMDC_MPWLGCR_WL_HW_ERR1 from a register value.
#define BG_MMDC_MPWLGCR_WL_HW_ERR1(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_MMDC_MPWLGCR_WL_HW_ERR1) >> BP_MMDC_MPWLGCR_WL_HW_ERR1)


/* --- Register HW_MMDC_MPWLGCR, field WL_HW_ERR2[10] (RO)
 *
 * Byte2 write-leveling HW calibration error. This bit is asserted when an error was found on byte2
 * during write-leveling HW calibration. This bit is valid only upon completion of the write-
 * leveling HW calibration (i.e HW_WL_EN bit is de-asserted)
 *
 * Values:
 * 0 - No error was found on byte2 during write-leveling HW calibration.
 * 1 - An error was found on byte2 during write-leveling HW calibration.
 */

#define BP_MMDC_MPWLGCR_WL_HW_ERR2      (10)      //!< Bit position for MMDC_MPWLGCR_WL_HW_ERR2.
#define BM_MMDC_MPWLGCR_WL_HW_ERR2      (0x00000400)  //!< Bit mask for MMDC_MPWLGCR_WL_HW_ERR2.

//! @brief Get value of MMDC_MPWLGCR_WL_HW_ERR2 from a register value.
#define BG_MMDC_MPWLGCR_WL_HW_ERR2(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_MMDC_MPWLGCR_WL_HW_ERR2) >> BP_MMDC_MPWLGCR_WL_HW_ERR2)


/* --- Register HW_MMDC_MPWLGCR, field WL_HW_ERR3[11] (RO)
 *
 * Byte3 write-leveling HW calibration error. This bit is asserted when an error was found on byte3
 * during write-leveling HW calibration. This bit is valid only upon completion of the write-
 * leveling HW calibration (i.e HW_WL_EN bit is de-asserted)
 *
 * Values:
 * 0 - No error was found on byte3 during write-leveling HW calibration.
 * 1 - An error was found on byte3 during write-leveling HW calibration.
 */

#define BP_MMDC_MPWLGCR_WL_HW_ERR3      (11)      //!< Bit position for MMDC_MPWLGCR_WL_HW_ERR3.
#define BM_MMDC_MPWLGCR_WL_HW_ERR3      (0x00000800)  //!< Bit mask for MMDC_MPWLGCR_WL_HW_ERR3.

//! @brief Get value of MMDC_MPWLGCR_WL_HW_ERR3 from a register value.
#define BG_MMDC_MPWLGCR_WL_HW_ERR3(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_MMDC_MPWLGCR_WL_HW_ERR3) >> BP_MMDC_MPWLGCR_WL_HW_ERR3)


//-------------------------------------------------------------------------------------------
// HW_MMDC_MPWLDECTRL0 - MMDC PHY Write Leveling Delay Control Register 0
//-------------------------------------------------------------------------------------------

#ifndef __LANGUAGE_ASM__
/*!
 * @brief HW_MMDC_MPWLDECTRL0 - MMDC PHY Write Leveling Delay Control Register 0 (RW)
 *
 * Reset value: 0x00000000
 *
 * Supported Mode OF Operations:  For Channel 0: All  For Channel 1: DDR3_x64, LP2_2ch_x16,
 * LP2_2ch_x32
 */
typedef union _hw_mmdc_mpwldectrl0
{
    reg32_t U;
    struct _hw_mmdc_mpwldectrl0_bitfields
    {
        unsigned WL_DL_ABS_OFFSET0 : 7; //!< [6:0] Absolute write-leveling delay offset for Byte 0.
        unsigned RESERVED0 : 1; //!< [7] Reserved
        unsigned WL_HC_DEL0 : 1; //!< [8] Write leveling half cycle delay for Byte 0.
        unsigned WL_CYC_DEL0 : 2; //!< [10:9] Write leveling cycle delay for Byte 0.
        unsigned RESERVED1 : 5; //!< [15:11] Reserved
        unsigned WL_DL_ABS_OFFSET1 : 7; //!< [22:16] Absolute write-leveling delay offset for Byte 1.
        unsigned RESERVED2 : 1; //!< [23] Reserved
        unsigned WL_HC_DEL1 : 1; //!< [24] Write leveling half cycle delay for Byte 1.
        unsigned WL_CYC_DEL1 : 2; //!< [26:25] Write leveling cycle delay for Byte 1.
        unsigned RESERVED3 : 5; //!< [31:27] Reserved
    } B;
} hw_mmdc_mpwldectrl0_t;
#endif

/*
 * constants & macros for entire MMDC_MPWLDECTRL0 register
 */
#define HW_MMDC_MPWLDECTRL0_ADDR      (REGS_MMDC_BASE + 0x80c)

#ifndef __LANGUAGE_ASM__
#define HW_MMDC_MPWLDECTRL0           (*(volatile hw_mmdc_mpwldectrl0_t *) HW_MMDC_MPWLDECTRL0_ADDR)
#define HW_MMDC_MPWLDECTRL0_RD()      (HW_MMDC_MPWLDECTRL0.U)
#define HW_MMDC_MPWLDECTRL0_WR(v)     (HW_MMDC_MPWLDECTRL0.U = (v))
#define HW_MMDC_MPWLDECTRL0_SET(v)    (HW_MMDC_MPWLDECTRL0_WR(HW_MMDC_MPWLDECTRL0_RD() |  (v)))
#define HW_MMDC_MPWLDECTRL0_CLR(v)    (HW_MMDC_MPWLDECTRL0_WR(HW_MMDC_MPWLDECTRL0_RD() & ~(v)))
#define HW_MMDC_MPWLDECTRL0_TOG(v)    (HW_MMDC_MPWLDECTRL0_WR(HW_MMDC_MPWLDECTRL0_RD() ^  (v)))
#endif

/*
 * constants & macros for individual MMDC_MPWLDECTRL0 bitfields
 */

/* --- Register HW_MMDC_MPWLDECTRL0, field WL_DL_ABS_OFFSET0[6:0] (RW)
 *
 * Absolute write-leveling delay offset for Byte 0. This field indicates the absolute delay between
 * CK and write DQS of Byte0 with fractions of a clock period and up to half cycle. This value is
 * process and frequency independent. The value of the delay can be calculated using the following
 * equation (WR_DL_ABS_OFFSET1 / 256) * clock period When SW write-leveling is enabled (i.e SW_WL_EN
 * = 1) then this value will be taken as is to the associated delay-line. When HW write-leveling is
 * enabled (i.e HW_WL_EN = 1 ) then this value will indicate (status) the value that is taken to the
 * associated delay-line at the end of the write-leveling calibration. The delay-line has a
 * resolution that may vary between device to device, therefore is some cases an increment of the
 * delay by 1 step may be smaller than the delay-line resolution.
 */

#define BP_MMDC_MPWLDECTRL0_WL_DL_ABS_OFFSET0      (0)      //!< Bit position for MMDC_MPWLDECTRL0_WL_DL_ABS_OFFSET0.
#define BM_MMDC_MPWLDECTRL0_WL_DL_ABS_OFFSET0      (0x0000007f)  //!< Bit mask for MMDC_MPWLDECTRL0_WL_DL_ABS_OFFSET0.

//! @brief Get value of MMDC_MPWLDECTRL0_WL_DL_ABS_OFFSET0 from a register value.
#define BG_MMDC_MPWLDECTRL0_WL_DL_ABS_OFFSET0(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_MMDC_MPWLDECTRL0_WL_DL_ABS_OFFSET0) >> BP_MMDC_MPWLDECTRL0_WL_DL_ABS_OFFSET0)

//! @brief Format value for bitfield MMDC_MPWLDECTRL0_WL_DL_ABS_OFFSET0.
#define BF_MMDC_MPWLDECTRL0_WL_DL_ABS_OFFSET0(v)   ((__REG_VALUE_TYPE((v), reg32_t) << BP_MMDC_MPWLDECTRL0_WL_DL_ABS_OFFSET0) & BM_MMDC_MPWLDECTRL0_WL_DL_ABS_OFFSET0)

#ifndef __LANGUAGE_ASM__
//! @brief Set the WL_DL_ABS_OFFSET0 field to a new value.
#define BW_MMDC_MPWLDECTRL0_WL_DL_ABS_OFFSET0(v)   (HW_MMDC_MPWLDECTRL0_WR((HW_MMDC_MPWLDECTRL0_RD() & ~BM_MMDC_MPWLDECTRL0_WL_DL_ABS_OFFSET0) | BF_MMDC_MPWLDECTRL0_WL_DL_ABS_OFFSET0(v)))
#endif

/* --- Register HW_MMDC_MPWLDECTRL0, field WL_HC_DEL0[8] (RW)
 *
 * Write leveling half cycle delay for Byte 0. This field indicates whether a delay of half cycle
 * between CK and write DQS is added to the delay that is indicated in the associated
 * WR_DL_ABS_OFFSET and WL_CYC_DEL. So the total delay is the sum of (WL_DL_ABS_OFFSET/256*cycle) +
 * (WL_HC_DEL*half cycle) + (WL_CYC_DEL*cycle). When SW write-leveling is enabled (i.e SW_WL_EN = 1)
 * then this value will be taken as is and will be added to the associated delay that is configured
 * in WL_DL_OFFSET and WL_CYC_DEL. When HW write-leveling is enabled (i.e HW_WL_EN = 1 ) then this
 * value will indicate (status) whether a delay of half cycle was added or not to the associated
 * WL_DL_OFFSET and WL_CYC_DEL.
 *
 * Values:
 * 0 - No delay is added.
 * 1 - Half cycle delay is added.
 */

#define BP_MMDC_MPWLDECTRL0_WL_HC_DEL0      (8)      //!< Bit position for MMDC_MPWLDECTRL0_WL_HC_DEL0.
#define BM_MMDC_MPWLDECTRL0_WL_HC_DEL0      (0x00000100)  //!< Bit mask for MMDC_MPWLDECTRL0_WL_HC_DEL0.

//! @brief Get value of MMDC_MPWLDECTRL0_WL_HC_DEL0 from a register value.
#define BG_MMDC_MPWLDECTRL0_WL_HC_DEL0(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_MMDC_MPWLDECTRL0_WL_HC_DEL0) >> BP_MMDC_MPWLDECTRL0_WL_HC_DEL0)

//! @brief Format value for bitfield MMDC_MPWLDECTRL0_WL_HC_DEL0.
#define BF_MMDC_MPWLDECTRL0_WL_HC_DEL0(v)   ((__REG_VALUE_TYPE((v), reg32_t) << BP_MMDC_MPWLDECTRL0_WL_HC_DEL0) & BM_MMDC_MPWLDECTRL0_WL_HC_DEL0)

#ifndef __LANGUAGE_ASM__
//! @brief Set the WL_HC_DEL0 field to a new value.
#define BW_MMDC_MPWLDECTRL0_WL_HC_DEL0(v)   (HW_MMDC_MPWLDECTRL0_WR((HW_MMDC_MPWLDECTRL0_RD() & ~BM_MMDC_MPWLDECTRL0_WL_HC_DEL0) | BF_MMDC_MPWLDECTRL0_WL_HC_DEL0(v)))
#endif


/* --- Register HW_MMDC_MPWLDECTRL0, field WL_CYC_DEL0[10:9] (RW)
 *
 * Write leveling cycle delay for Byte 0. This field indicates whether a delay of 1 or 2 cycles
 * between CK and write DQS is added to the delay that is indicated in the associated
 * WR_DL_ABS_OFFSET and WL_HC_DEL. So the total delay is the sum of (WL_DL_ABS_OFFSET/256*cycle) +
 * (WL_HC_DEL*half cycle) + (WL_CYC_DEL*cycle). When both SW write-leveling is enabled (i.e SW_WL_EN
 * = 1) or HW write-leveling is enabled (i.e HW_WL_EN = 1 ) then this value will be taken as is and
 * will be added to the associated delay that is configured in WL_DL_OFFSET and WL_HC_DEL. Note that
 * in HW write-leveling this field is not used for indication, as in WL_DL_OFFSET and WL_HC_DEL, but
 * for configuration.
 *
 * Values:
 * 0 - No delay is added.
 * 1 - 1 cycle delay is added.
 * 2 - 2 cycles delay is added.
 * 3 - Reserved.
 */

#define BP_MMDC_MPWLDECTRL0_WL_CYC_DEL0      (9)      //!< Bit position for MMDC_MPWLDECTRL0_WL_CYC_DEL0.
#define BM_MMDC_MPWLDECTRL0_WL_CYC_DEL0      (0x00000600)  //!< Bit mask for MMDC_MPWLDECTRL0_WL_CYC_DEL0.

//! @brief Get value of MMDC_MPWLDECTRL0_WL_CYC_DEL0 from a register value.
#define BG_MMDC_MPWLDECTRL0_WL_CYC_DEL0(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_MMDC_MPWLDECTRL0_WL_CYC_DEL0) >> BP_MMDC_MPWLDECTRL0_WL_CYC_DEL0)

//! @brief Format value for bitfield MMDC_MPWLDECTRL0_WL_CYC_DEL0.
#define BF_MMDC_MPWLDECTRL0_WL_CYC_DEL0(v)   ((__REG_VALUE_TYPE((v), reg32_t) << BP_MMDC_MPWLDECTRL0_WL_CYC_DEL0) & BM_MMDC_MPWLDECTRL0_WL_CYC_DEL0)

#ifndef __LANGUAGE_ASM__
//! @brief Set the WL_CYC_DEL0 field to a new value.
#define BW_MMDC_MPWLDECTRL0_WL_CYC_DEL0(v)   (HW_MMDC_MPWLDECTRL0_WR((HW_MMDC_MPWLDECTRL0_RD() & ~BM_MMDC_MPWLDECTRL0_WL_CYC_DEL0) | BF_MMDC_MPWLDECTRL0_WL_CYC_DEL0(v)))
#endif


/* --- Register HW_MMDC_MPWLDECTRL0, field WL_DL_ABS_OFFSET1[22:16] (RW)
 *
 * Absolute write-leveling delay offset for Byte 1. This field indicates the absolute delay between
 * CK and write DQS of Byte1 with fractions of a clock period and up to half cycle. This value is
 * process and frequency independent. The value of the delay can be calculated using the following
 * equation (WR_DL_ABS_OFFSET1 / 256) * clock period When SW write-leveling is enabled (i.e SW_WL_EN
 * = 1) then this value will be taken as is to the associated delay-line. When HW write-leveling is
 * enabled (i.e HW_WL_EN = 1 ) then this value will indicate (status) the value that is taken to the
 * associated delay-line at the end of the write-leveling calibration. The delay-line has a
 * resolution that may vary between device to device, therefore is some cases an increment of the
 * delay by 1 step may be smaller than the delay-line resolution.
 */

#define BP_MMDC_MPWLDECTRL0_WL_DL_ABS_OFFSET1      (16)      //!< Bit position for MMDC_MPWLDECTRL0_WL_DL_ABS_OFFSET1.
#define BM_MMDC_MPWLDECTRL0_WL_DL_ABS_OFFSET1      (0x007f0000)  //!< Bit mask for MMDC_MPWLDECTRL0_WL_DL_ABS_OFFSET1.

//! @brief Get value of MMDC_MPWLDECTRL0_WL_DL_ABS_OFFSET1 from a register value.
#define BG_MMDC_MPWLDECTRL0_WL_DL_ABS_OFFSET1(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_MMDC_MPWLDECTRL0_WL_DL_ABS_OFFSET1) >> BP_MMDC_MPWLDECTRL0_WL_DL_ABS_OFFSET1)

//! @brief Format value for bitfield MMDC_MPWLDECTRL0_WL_DL_ABS_OFFSET1.
#define BF_MMDC_MPWLDECTRL0_WL_DL_ABS_OFFSET1(v)   ((__REG_VALUE_TYPE((v), reg32_t) << BP_MMDC_MPWLDECTRL0_WL_DL_ABS_OFFSET1) & BM_MMDC_MPWLDECTRL0_WL_DL_ABS_OFFSET1)

#ifndef __LANGUAGE_ASM__
//! @brief Set the WL_DL_ABS_OFFSET1 field to a new value.
#define BW_MMDC_MPWLDECTRL0_WL_DL_ABS_OFFSET1(v)   (HW_MMDC_MPWLDECTRL0_WR((HW_MMDC_MPWLDECTRL0_RD() & ~BM_MMDC_MPWLDECTRL0_WL_DL_ABS_OFFSET1) | BF_MMDC_MPWLDECTRL0_WL_DL_ABS_OFFSET1(v)))
#endif

/* --- Register HW_MMDC_MPWLDECTRL0, field WL_HC_DEL1[24] (RW)
 *
 * Write leveling half cycle delay for Byte 1. This field indicates whether a delay of half cycle
 * between CK and write DQS is added to the delay that is indicated in the associated
 * WR_DL_ABS_OFFSET and WL_CYC_DEL. So the total delay is the sum of (WL_DL_ABS_OFFSET/256*cycle) +
 * (WL_HC_DEL*half cycle) + (WL_CYC_DEL*cycle). When SW write-leveling is enabled (i.e SW_WL_EN = 1)
 * then this value will be taken as is and will be added to the associated delay that is configured
 * in WL_DL_OFFSET and WL_CYC_DEL. When HW write-leveling is enabled (i.e HW_WL_EN = 1 ) then this
 * value will indicate (status) whether a delay of half cycle was added or not to the associated
 * WL_DL_OFFSET and WL_CYC_DEL.
 *
 * Values:
 * 0 - No delay is added.
 * 1 - Half cycle delay is added.
 */

#define BP_MMDC_MPWLDECTRL0_WL_HC_DEL1      (24)      //!< Bit position for MMDC_MPWLDECTRL0_WL_HC_DEL1.
#define BM_MMDC_MPWLDECTRL0_WL_HC_DEL1      (0x01000000)  //!< Bit mask for MMDC_MPWLDECTRL0_WL_HC_DEL1.

//! @brief Get value of MMDC_MPWLDECTRL0_WL_HC_DEL1 from a register value.
#define BG_MMDC_MPWLDECTRL0_WL_HC_DEL1(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_MMDC_MPWLDECTRL0_WL_HC_DEL1) >> BP_MMDC_MPWLDECTRL0_WL_HC_DEL1)

//! @brief Format value for bitfield MMDC_MPWLDECTRL0_WL_HC_DEL1.
#define BF_MMDC_MPWLDECTRL0_WL_HC_DEL1(v)   ((__REG_VALUE_TYPE((v), reg32_t) << BP_MMDC_MPWLDECTRL0_WL_HC_DEL1) & BM_MMDC_MPWLDECTRL0_WL_HC_DEL1)

#ifndef __LANGUAGE_ASM__
//! @brief Set the WL_HC_DEL1 field to a new value.
#define BW_MMDC_MPWLDECTRL0_WL_HC_DEL1(v)   (HW_MMDC_MPWLDECTRL0_WR((HW_MMDC_MPWLDECTRL0_RD() & ~BM_MMDC_MPWLDECTRL0_WL_HC_DEL1) | BF_MMDC_MPWLDECTRL0_WL_HC_DEL1(v)))
#endif


/* --- Register HW_MMDC_MPWLDECTRL0, field WL_CYC_DEL1[26:25] (RW)
 *
 * Write leveling cycle delay for Byte 1. This field indicates whether a delay of 1 or 2 cycles
 * between CK and write DQS is added to the delay that is indicated in the associated
 * WR_DL_ABS_OFFSET and WL_HC_DEL. So the total delay is the sum of (WL_DL_ABS_OFFSET/256*cycle) +
 * (WL_HC_DEL*half cycle) + (WL_CYC_DEL*cycle). When both SW write-leveling is enabled (i.e SW_WL_EN
 * = 1) or HW write-leveling is enabled (i.e HW_WL_EN = 1 ) then this value will be taken as is and
 * will be added to the associated delay that is configured in WL_DL_OFFSET and WL_HC_DEL. Note that
 * in HW write-leveling this field is not used for indication, as in WL_DL_OFFSET and WL_HC_DEL, but
 * for configuration.
 *
 * Values:
 * 0 - No delay is added.
 * 1 - 1 cycle delay is added.
 * 2 - 2 cycles delay is added.
 * 3 - Reserved.
 */

#define BP_MMDC_MPWLDECTRL0_WL_CYC_DEL1      (25)      //!< Bit position for MMDC_MPWLDECTRL0_WL_CYC_DEL1.
#define BM_MMDC_MPWLDECTRL0_WL_CYC_DEL1      (0x06000000)  //!< Bit mask for MMDC_MPWLDECTRL0_WL_CYC_DEL1.

//! @brief Get value of MMDC_MPWLDECTRL0_WL_CYC_DEL1 from a register value.
#define BG_MMDC_MPWLDECTRL0_WL_CYC_DEL1(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_MMDC_MPWLDECTRL0_WL_CYC_DEL1) >> BP_MMDC_MPWLDECTRL0_WL_CYC_DEL1)

//! @brief Format value for bitfield MMDC_MPWLDECTRL0_WL_CYC_DEL1.
#define BF_MMDC_MPWLDECTRL0_WL_CYC_DEL1(v)   ((__REG_VALUE_TYPE((v), reg32_t) << BP_MMDC_MPWLDECTRL0_WL_CYC_DEL1) & BM_MMDC_MPWLDECTRL0_WL_CYC_DEL1)

#ifndef __LANGUAGE_ASM__
//! @brief Set the WL_CYC_DEL1 field to a new value.
#define BW_MMDC_MPWLDECTRL0_WL_CYC_DEL1(v)   (HW_MMDC_MPWLDECTRL0_WR((HW_MMDC_MPWLDECTRL0_RD() & ~BM_MMDC_MPWLDECTRL0_WL_CYC_DEL1) | BF_MMDC_MPWLDECTRL0_WL_CYC_DEL1(v)))
#endif


//-------------------------------------------------------------------------------------------
// HW_MMDC_MPWLDECTRL1 - MMDC PHY Write Leveling Delay Control Register 1
//-------------------------------------------------------------------------------------------

#ifndef __LANGUAGE_ASM__
/*!
 * @brief HW_MMDC_MPWLDECTRL1 - MMDC PHY Write Leveling Delay Control Register 1 (RW)
 *
 * Reset value: 0x00000000
 *
 * Supported Mode Of Operations:  For Channel 0: All  For Channel 1: DDR3_x64, LP2_2ch_x32
 */
typedef union _hw_mmdc_mpwldectrl1
{
    reg32_t U;
    struct _hw_mmdc_mpwldectrl1_bitfields
    {
        unsigned WL_DL_ABS_OFFSET2 : 7; //!< [6:0] Absolute write-leveling delay offset for Byte 2.
        unsigned RESERVED0 : 1; //!< [7] Reserved
        unsigned WL_HC_DEL2 : 1; //!< [8] Write leveling half cycle delay for Byte 2.
        unsigned WL_CYC_DEL2 : 2; //!< [10:9] Write leveling cycle delay for Byte 2.
        unsigned RESERVED1 : 5; //!< [15:11] Reserved
        unsigned WL_DL_ABS_OFFSET3 : 7; //!< [22:16] Absolute write-leveling delay offset for Byte 3.
        unsigned RESERVED2 : 1; //!< [23] Reserved
        unsigned WL_HC_DEL3 : 1; //!< [24] Write leveling half cycle delay for Byte 3.
        unsigned WL_CYC_DEL3 : 2; //!< [26:25] Write leveling cycle delay for Byte 3.
        unsigned RESERVED3 : 5; //!< [31:27] Reserved
    } B;
} hw_mmdc_mpwldectrl1_t;
#endif

/*
 * constants & macros for entire MMDC_MPWLDECTRL1 register
 */
#define HW_MMDC_MPWLDECTRL1_ADDR      (REGS_MMDC_BASE + 0x810)

#ifndef __LANGUAGE_ASM__
#define HW_MMDC_MPWLDECTRL1           (*(volatile hw_mmdc_mpwldectrl1_t *) HW_MMDC_MPWLDECTRL1_ADDR)
#define HW_MMDC_MPWLDECTRL1_RD()      (HW_MMDC_MPWLDECTRL1.U)
#define HW_MMDC_MPWLDECTRL1_WR(v)     (HW_MMDC_MPWLDECTRL1.U = (v))
#define HW_MMDC_MPWLDECTRL1_SET(v)    (HW_MMDC_MPWLDECTRL1_WR(HW_MMDC_MPWLDECTRL1_RD() |  (v)))
#define HW_MMDC_MPWLDECTRL1_CLR(v)    (HW_MMDC_MPWLDECTRL1_WR(HW_MMDC_MPWLDECTRL1_RD() & ~(v)))
#define HW_MMDC_MPWLDECTRL1_TOG(v)    (HW_MMDC_MPWLDECTRL1_WR(HW_MMDC_MPWLDECTRL1_RD() ^  (v)))
#endif

/*
 * constants & macros for individual MMDC_MPWLDECTRL1 bitfields
 */

/* --- Register HW_MMDC_MPWLDECTRL1, field WL_DL_ABS_OFFSET2[6:0] (RW)
 *
 * Absolute write-leveling delay offset for Byte 2. This field indicates the absolute delay between
 * CK and write DQS of Byte1 with fractions of a clock period and up to half cycle. This value is
 * process and frequency independent. The value of the delay can be calculated using the following
 * equation (WR_DL_ABS_OFFSET2 / 256) * clock period When SW write-leveling is enabled (i.e SW_WL_EN
 * = 1) then this value will be taken as is to the associated delay-line. When HW write-leveling is
 * enabled (i.e HW_WL_EN = 1 ) then this value will indicate (status) the value that is taken to the
 * associated delay-line at the end of the write-leveling calibration. The delay-line has a
 * resolution that may vary between device to device, therefore is some cases an increment of the
 * delay by 1 step may be smaller than the delay-line resolution.
 */

#define BP_MMDC_MPWLDECTRL1_WL_DL_ABS_OFFSET2      (0)      //!< Bit position for MMDC_MPWLDECTRL1_WL_DL_ABS_OFFSET2.
#define BM_MMDC_MPWLDECTRL1_WL_DL_ABS_OFFSET2      (0x0000007f)  //!< Bit mask for MMDC_MPWLDECTRL1_WL_DL_ABS_OFFSET2.

//! @brief Get value of MMDC_MPWLDECTRL1_WL_DL_ABS_OFFSET2 from a register value.
#define BG_MMDC_MPWLDECTRL1_WL_DL_ABS_OFFSET2(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_MMDC_MPWLDECTRL1_WL_DL_ABS_OFFSET2) >> BP_MMDC_MPWLDECTRL1_WL_DL_ABS_OFFSET2)

//! @brief Format value for bitfield MMDC_MPWLDECTRL1_WL_DL_ABS_OFFSET2.
#define BF_MMDC_MPWLDECTRL1_WL_DL_ABS_OFFSET2(v)   ((__REG_VALUE_TYPE((v), reg32_t) << BP_MMDC_MPWLDECTRL1_WL_DL_ABS_OFFSET2) & BM_MMDC_MPWLDECTRL1_WL_DL_ABS_OFFSET2)

#ifndef __LANGUAGE_ASM__
//! @brief Set the WL_DL_ABS_OFFSET2 field to a new value.
#define BW_MMDC_MPWLDECTRL1_WL_DL_ABS_OFFSET2(v)   (HW_MMDC_MPWLDECTRL1_WR((HW_MMDC_MPWLDECTRL1_RD() & ~BM_MMDC_MPWLDECTRL1_WL_DL_ABS_OFFSET2) | BF_MMDC_MPWLDECTRL1_WL_DL_ABS_OFFSET2(v)))
#endif

/* --- Register HW_MMDC_MPWLDECTRL1, field WL_HC_DEL2[8] (RW)
 *
 * Write leveling half cycle delay for Byte 2. This field indicates whether a delay of half cycle
 * between CK and write DQS is added to the delay that is indicated in the associated
 * WR_DL_ABS_OFFSET and WL_CYC_DEL. So the total delay is the sum of (WL_DL_ABS_OFFSET/256*cycle) +
 * (WL_HC_DEL*half cycle) + (WL_CYC_DEL*cycle). When SW write-leveling is enabled (i.e SW_WL_EN = 1)
 * then this value will be taken as is and will be added to the associated delay that is configured
 * in WL_DL_OFFSET and WL_CYC_DEL. When HW write-leveling is enabled (i.e HW_WL_EN = 1 ) then this
 * value will indicate (status) whether a delay of half cycle was added or not to the associated
 * WL_DL_OFFSET and WL_CYC_DEL.
 *
 * Values:
 * 0 - No delay is added.
 * 1 - Half cycle delay is added.
 */

#define BP_MMDC_MPWLDECTRL1_WL_HC_DEL2      (8)      //!< Bit position for MMDC_MPWLDECTRL1_WL_HC_DEL2.
#define BM_MMDC_MPWLDECTRL1_WL_HC_DEL2      (0x00000100)  //!< Bit mask for MMDC_MPWLDECTRL1_WL_HC_DEL2.

//! @brief Get value of MMDC_MPWLDECTRL1_WL_HC_DEL2 from a register value.
#define BG_MMDC_MPWLDECTRL1_WL_HC_DEL2(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_MMDC_MPWLDECTRL1_WL_HC_DEL2) >> BP_MMDC_MPWLDECTRL1_WL_HC_DEL2)

//! @brief Format value for bitfield MMDC_MPWLDECTRL1_WL_HC_DEL2.
#define BF_MMDC_MPWLDECTRL1_WL_HC_DEL2(v)   ((__REG_VALUE_TYPE((v), reg32_t) << BP_MMDC_MPWLDECTRL1_WL_HC_DEL2) & BM_MMDC_MPWLDECTRL1_WL_HC_DEL2)

#ifndef __LANGUAGE_ASM__
//! @brief Set the WL_HC_DEL2 field to a new value.
#define BW_MMDC_MPWLDECTRL1_WL_HC_DEL2(v)   (HW_MMDC_MPWLDECTRL1_WR((HW_MMDC_MPWLDECTRL1_RD() & ~BM_MMDC_MPWLDECTRL1_WL_HC_DEL2) | BF_MMDC_MPWLDECTRL1_WL_HC_DEL2(v)))
#endif


/* --- Register HW_MMDC_MPWLDECTRL1, field WL_CYC_DEL2[10:9] (RW)
 *
 * Write leveling cycle delay for Byte 2. This field indicates whether a delay of 1 or 2 cycles
 * between CK and write DQS is added to the delay that is indicated in the associated
 * WR_DL_ABS_OFFSET and WL_HC_DEL. So the total delay is the sum of (WL_DL_ABS_OFFSET/256*cycle) +
 * (WL_HC_DEL*half cycle) + (WL_CYC_DEL*cycle). When both SW write-leveling is enabled (i.e SW_WL_EN
 * = 1) or HW write-leveling is enabled (i.e HW_WL_EN = 1 ) then this value will be taken as is and
 * will be added to the associated delay that is configured in WL_DL_OFFSET and WL_HC_DEL. Note that
 * in HW write-leveling this field is not used for indication, as in WL_DL_OFFSET and WL_HC_DEL, but
 * for configuration.
 *
 * Values:
 * 0 - No delay is added.
 * 1 - 1 cycle delay is added.
 * 2 - 2 cycles delay is added.
 * 3 - Reserved.
 */

#define BP_MMDC_MPWLDECTRL1_WL_CYC_DEL2      (9)      //!< Bit position for MMDC_MPWLDECTRL1_WL_CYC_DEL2.
#define BM_MMDC_MPWLDECTRL1_WL_CYC_DEL2      (0x00000600)  //!< Bit mask for MMDC_MPWLDECTRL1_WL_CYC_DEL2.

//! @brief Get value of MMDC_MPWLDECTRL1_WL_CYC_DEL2 from a register value.
#define BG_MMDC_MPWLDECTRL1_WL_CYC_DEL2(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_MMDC_MPWLDECTRL1_WL_CYC_DEL2) >> BP_MMDC_MPWLDECTRL1_WL_CYC_DEL2)

//! @brief Format value for bitfield MMDC_MPWLDECTRL1_WL_CYC_DEL2.
#define BF_MMDC_MPWLDECTRL1_WL_CYC_DEL2(v)   ((__REG_VALUE_TYPE((v), reg32_t) << BP_MMDC_MPWLDECTRL1_WL_CYC_DEL2) & BM_MMDC_MPWLDECTRL1_WL_CYC_DEL2)

#ifndef __LANGUAGE_ASM__
//! @brief Set the WL_CYC_DEL2 field to a new value.
#define BW_MMDC_MPWLDECTRL1_WL_CYC_DEL2(v)   (HW_MMDC_MPWLDECTRL1_WR((HW_MMDC_MPWLDECTRL1_RD() & ~BM_MMDC_MPWLDECTRL1_WL_CYC_DEL2) | BF_MMDC_MPWLDECTRL1_WL_CYC_DEL2(v)))
#endif


/* --- Register HW_MMDC_MPWLDECTRL1, field WL_DL_ABS_OFFSET3[22:16] (RW)
 *
 * Absolute write-leveling delay offset for Byte 3. This field indicates the absolute delay between
 * CK and write DQS of Byte3 with fractions of a clock period and up to half cycle. This value is
 * process and frequency independent. The value of the delay can be calculated using the following
 * equation (WL_DL_ABS_OFFSET3 / 256) * clock period When SW write-leveling is enabled (i.e SW_WL_EN
 * = 1) then this value will be taken as is to the associated delay-line. When HW write-leveling is
 * enabled (i.e HW_WL_EN = 1 ) then this value will indicate (status) the value that is taken to the
 * associated delay-line at the end of the write-leveling calibration. The delay-line has a
 * resolution that may vary between device to device, therefore is some cases an increment of the
 * delay by 1 step may be smaller than the delay-line resolution.
 */

#define BP_MMDC_MPWLDECTRL1_WL_DL_ABS_OFFSET3      (16)      //!< Bit position for MMDC_MPWLDECTRL1_WL_DL_ABS_OFFSET3.
#define BM_MMDC_MPWLDECTRL1_WL_DL_ABS_OFFSET3      (0x007f0000)  //!< Bit mask for MMDC_MPWLDECTRL1_WL_DL_ABS_OFFSET3.

//! @brief Get value of MMDC_MPWLDECTRL1_WL_DL_ABS_OFFSET3 from a register value.
#define BG_MMDC_MPWLDECTRL1_WL_DL_ABS_OFFSET3(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_MMDC_MPWLDECTRL1_WL_DL_ABS_OFFSET3) >> BP_MMDC_MPWLDECTRL1_WL_DL_ABS_OFFSET3)

//! @brief Format value for bitfield MMDC_MPWLDECTRL1_WL_DL_ABS_OFFSET3.
#define BF_MMDC_MPWLDECTRL1_WL_DL_ABS_OFFSET3(v)   ((__REG_VALUE_TYPE((v), reg32_t) << BP_MMDC_MPWLDECTRL1_WL_DL_ABS_OFFSET3) & BM_MMDC_MPWLDECTRL1_WL_DL_ABS_OFFSET3)

#ifndef __LANGUAGE_ASM__
//! @brief Set the WL_DL_ABS_OFFSET3 field to a new value.
#define BW_MMDC_MPWLDECTRL1_WL_DL_ABS_OFFSET3(v)   (HW_MMDC_MPWLDECTRL1_WR((HW_MMDC_MPWLDECTRL1_RD() & ~BM_MMDC_MPWLDECTRL1_WL_DL_ABS_OFFSET3) | BF_MMDC_MPWLDECTRL1_WL_DL_ABS_OFFSET3(v)))
#endif

/* --- Register HW_MMDC_MPWLDECTRL1, field WL_HC_DEL3[24] (RW)
 *
 * Write leveling half cycle delay for Byte 3. This field indicates whether a delay of half cycle
 * between CK and write DQS is added to the delay that is indicated in the associated
 * WL_DL_ABS_OFFSET and WL_CYC_DEL. So the total delay is the sum of (WL_DL_ABS_OFFSET/256*cycle) +
 * (WL_HC_DEL*half cycle) + (WL_CYC_DEL*cycle). When SW write-leveling is enabled (i.e SW_WL_EN = 1)
 * then this value will be taken as is and will be added to the associated delay that is configured
 * in WL_DL_OFFSET and WL_CYC_DEL. When HW write-leveling is enabled (i.e HW_WL_EN = 1 ) then this
 * value will indicate (status) whether a delay of half cycle was added or not to the associated
 * WL_DL_OFFSET and WL_CYC_DEL.
 *
 * Values:
 * 0 - No delay is added.
 * 1 - Half cycle delay is added.
 */

#define BP_MMDC_MPWLDECTRL1_WL_HC_DEL3      (24)      //!< Bit position for MMDC_MPWLDECTRL1_WL_HC_DEL3.
#define BM_MMDC_MPWLDECTRL1_WL_HC_DEL3      (0x01000000)  //!< Bit mask for MMDC_MPWLDECTRL1_WL_HC_DEL3.

//! @brief Get value of MMDC_MPWLDECTRL1_WL_HC_DEL3 from a register value.
#define BG_MMDC_MPWLDECTRL1_WL_HC_DEL3(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_MMDC_MPWLDECTRL1_WL_HC_DEL3) >> BP_MMDC_MPWLDECTRL1_WL_HC_DEL3)

//! @brief Format value for bitfield MMDC_MPWLDECTRL1_WL_HC_DEL3.
#define BF_MMDC_MPWLDECTRL1_WL_HC_DEL3(v)   ((__REG_VALUE_TYPE((v), reg32_t) << BP_MMDC_MPWLDECTRL1_WL_HC_DEL3) & BM_MMDC_MPWLDECTRL1_WL_HC_DEL3)

#ifndef __LANGUAGE_ASM__
//! @brief Set the WL_HC_DEL3 field to a new value.
#define BW_MMDC_MPWLDECTRL1_WL_HC_DEL3(v)   (HW_MMDC_MPWLDECTRL1_WR((HW_MMDC_MPWLDECTRL1_RD() & ~BM_MMDC_MPWLDECTRL1_WL_HC_DEL3) | BF_MMDC_MPWLDECTRL1_WL_HC_DEL3(v)))
#endif


/* --- Register HW_MMDC_MPWLDECTRL1, field WL_CYC_DEL3[26:25] (RW)
 *
 * Write leveling cycle delay for Byte 3. This field indicates whether a delay of 1 or 2 cycles
 * between CK and write DQS is added to the delay that is indicated in the associated
 * WL_DL_ABS_OFFSET and WL_HC_DEL. So the total delay is the sum of (WL_DL_ABS_OFFSET/256*cycle) +
 * (WL_HC_DEL*half cycle) + (WL_CYC_DEL*cycle). When both SW write-leveling is enabled (i.e SW_WL_EN
 * = 1) or HW write-leveling is enabled (i.e HW_WL_EN = 1 ) then this value will be taken as is and
 * will be added to the associated delay that is configured in WL_DL_OFFSET and WL_HC_DEL. Note that
 * in HW write-leveling this field is not used for indication, as in WL_DL_OFFSET and WL_HC_DEL, but
 * for configuration.
 *
 * Values:
 * 0 - No delay is added.
 * 1 - 1 cycle delay is added.
 * 2 - 2 cycles delay is added.
 * 3 - Reserved.
 */

#define BP_MMDC_MPWLDECTRL1_WL_CYC_DEL3      (25)      //!< Bit position for MMDC_MPWLDECTRL1_WL_CYC_DEL3.
#define BM_MMDC_MPWLDECTRL1_WL_CYC_DEL3      (0x06000000)  //!< Bit mask for MMDC_MPWLDECTRL1_WL_CYC_DEL3.

//! @brief Get value of MMDC_MPWLDECTRL1_WL_CYC_DEL3 from a register value.
#define BG_MMDC_MPWLDECTRL1_WL_CYC_DEL3(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_MMDC_MPWLDECTRL1_WL_CYC_DEL3) >> BP_MMDC_MPWLDECTRL1_WL_CYC_DEL3)

//! @brief Format value for bitfield MMDC_MPWLDECTRL1_WL_CYC_DEL3.
#define BF_MMDC_MPWLDECTRL1_WL_CYC_DEL3(v)   ((__REG_VALUE_TYPE((v), reg32_t) << BP_MMDC_MPWLDECTRL1_WL_CYC_DEL3) & BM_MMDC_MPWLDECTRL1_WL_CYC_DEL3)

#ifndef __LANGUAGE_ASM__
//! @brief Set the WL_CYC_DEL3 field to a new value.
#define BW_MMDC_MPWLDECTRL1_WL_CYC_DEL3(v)   (HW_MMDC_MPWLDECTRL1_WR((HW_MMDC_MPWLDECTRL1_RD() & ~BM_MMDC_MPWLDECTRL1_WL_CYC_DEL3) | BF_MMDC_MPWLDECTRL1_WL_CYC_DEL3(v)))
#endif


//-------------------------------------------------------------------------------------------
// HW_MMDC_MPWLDLST - MMDC PHY Write Leveling delay-line Status Register
//-------------------------------------------------------------------------------------------

#ifndef __LANGUAGE_ASM__
/*!
 * @brief HW_MMDC_MPWLDLST - MMDC PHY Write Leveling delay-line Status Register (RO)
 *
 * Reset value: 0x00000000
 *
 * This register holds the status of the four write leveling delay-lines.  Supported Mode Of
 * Operations:  For Channel 0: All  For Channel 1: DDR3_x64, LP2_2ch_x16, LP2_2ch_x32
 */
typedef union _hw_mmdc_mpwldlst
{
    reg32_t U;
    struct _hw_mmdc_mpwldlst_bitfields
    {
        unsigned WL_DL_UNIT_NUM0 : 7; //!< [6:0] This field reflects the number of delay units that are actually used by write leveling delay-line 0.
        unsigned RESERVED0 : 1; //!< [7] Reserved
        unsigned WL_DL_UNIT_NUM1 : 7; //!< [14:8] This field reflects the number of delay units that are actually used by write leveling delay-line 1.
        unsigned RESERVED1 : 1; //!< [15] Reserved
        unsigned WL_DL_UNIT_NUM2 : 7; //!< [22:16] This field reflects the number of delay units that are actually used by write leveling delay-line 2.
        unsigned RESERVED2 : 1; //!< [23] Reserved
        unsigned WL_DL_UNIT_NUM3 : 7; //!< [30:24] This field reflects the number of delay units that are actually used by write leveling delay-line 3.
        unsigned RESERVED3 : 1; //!< [31] Reserved
    } B;
} hw_mmdc_mpwldlst_t;
#endif

/*
 * constants & macros for entire MMDC_MPWLDLST register
 */
#define HW_MMDC_MPWLDLST_ADDR      (REGS_MMDC_BASE + 0x814)

#ifndef __LANGUAGE_ASM__
#define HW_MMDC_MPWLDLST           (*(volatile hw_mmdc_mpwldlst_t *) HW_MMDC_MPWLDLST_ADDR)
#define HW_MMDC_MPWLDLST_RD()      (HW_MMDC_MPWLDLST.U)
#endif

/*
 * constants & macros for individual MMDC_MPWLDLST bitfields
 */

/* --- Register HW_MMDC_MPWLDLST, field WL_DL_UNIT_NUM0[6:0] (RO)
 *
 * This field reflects the number of delay units that are actually used by write leveling delay-line
 * 0.
 */

#define BP_MMDC_MPWLDLST_WL_DL_UNIT_NUM0      (0)      //!< Bit position for MMDC_MPWLDLST_WL_DL_UNIT_NUM0.
#define BM_MMDC_MPWLDLST_WL_DL_UNIT_NUM0      (0x0000007f)  //!< Bit mask for MMDC_MPWLDLST_WL_DL_UNIT_NUM0.

//! @brief Get value of MMDC_MPWLDLST_WL_DL_UNIT_NUM0 from a register value.
#define BG_MMDC_MPWLDLST_WL_DL_UNIT_NUM0(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_MMDC_MPWLDLST_WL_DL_UNIT_NUM0) >> BP_MMDC_MPWLDLST_WL_DL_UNIT_NUM0)

/* --- Register HW_MMDC_MPWLDLST, field WL_DL_UNIT_NUM1[14:8] (RO)
 *
 * This field reflects the number of delay units that are actually used by write leveling delay-line
 * 1.
 */

#define BP_MMDC_MPWLDLST_WL_DL_UNIT_NUM1      (8)      //!< Bit position for MMDC_MPWLDLST_WL_DL_UNIT_NUM1.
#define BM_MMDC_MPWLDLST_WL_DL_UNIT_NUM1      (0x00007f00)  //!< Bit mask for MMDC_MPWLDLST_WL_DL_UNIT_NUM1.

//! @brief Get value of MMDC_MPWLDLST_WL_DL_UNIT_NUM1 from a register value.
#define BG_MMDC_MPWLDLST_WL_DL_UNIT_NUM1(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_MMDC_MPWLDLST_WL_DL_UNIT_NUM1) >> BP_MMDC_MPWLDLST_WL_DL_UNIT_NUM1)

/* --- Register HW_MMDC_MPWLDLST, field WL_DL_UNIT_NUM2[22:16] (RO)
 *
 * This field reflects the number of delay units that are actually used by write leveling delay-line
 * 2.
 */

#define BP_MMDC_MPWLDLST_WL_DL_UNIT_NUM2      (16)      //!< Bit position for MMDC_MPWLDLST_WL_DL_UNIT_NUM2.
#define BM_MMDC_MPWLDLST_WL_DL_UNIT_NUM2      (0x007f0000)  //!< Bit mask for MMDC_MPWLDLST_WL_DL_UNIT_NUM2.

//! @brief Get value of MMDC_MPWLDLST_WL_DL_UNIT_NUM2 from a register value.
#define BG_MMDC_MPWLDLST_WL_DL_UNIT_NUM2(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_MMDC_MPWLDLST_WL_DL_UNIT_NUM2) >> BP_MMDC_MPWLDLST_WL_DL_UNIT_NUM2)

/* --- Register HW_MMDC_MPWLDLST, field WL_DL_UNIT_NUM3[30:24] (RO)
 *
 * This field reflects the number of delay units that are actually used by write leveling delay-line
 * 3.
 */

#define BP_MMDC_MPWLDLST_WL_DL_UNIT_NUM3      (24)      //!< Bit position for MMDC_MPWLDLST_WL_DL_UNIT_NUM3.
#define BM_MMDC_MPWLDLST_WL_DL_UNIT_NUM3      (0x7f000000)  //!< Bit mask for MMDC_MPWLDLST_WL_DL_UNIT_NUM3.

//! @brief Get value of MMDC_MPWLDLST_WL_DL_UNIT_NUM3 from a register value.
#define BG_MMDC_MPWLDLST_WL_DL_UNIT_NUM3(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_MMDC_MPWLDLST_WL_DL_UNIT_NUM3) >> BP_MMDC_MPWLDLST_WL_DL_UNIT_NUM3)

//-------------------------------------------------------------------------------------------
// HW_MMDC_MPODTCTRL - MMDC PHY ODT control register
//-------------------------------------------------------------------------------------------

#ifndef __LANGUAGE_ASM__
/*!
 * @brief HW_MMDC_MPODTCTRL - MMDC PHY ODT control register (RW)
 *
 * Reset value: 0x00000000
 *
 * In LPDDR2 mode this register should be cleared, so no termination will be activated  Supported
 * Mode Of Operations:  For Channel 0: DDR3_x16, DDR3_x32, DDR3_x64  For Channel 1: DDR3_x64
 */
typedef union _hw_mmdc_mpodtctrl
{
    reg32_t U;
    struct _hw_mmdc_mpodtctrl_bitfields
    {
        unsigned ODT_WR_PAS_EN : 1; //!< [0] Inactive write CS ODT enable.
        unsigned ODT_WR_ACT_EN : 1; //!< [1] Active write CS ODT enable.
        unsigned ODT_RD_PAS_EN : 1; //!< [2] Inactive read CS ODT enable.
        unsigned ODT_RD_ACT_EN : 1; //!< [3] Active read CS ODT enable.
        unsigned ODT0_INT_RES : 3; //!< [6:4] On chip ODT byte0 resistor - This field determines the Rtt_Nom of the on chip ODT byte0 resistor during read accesses.
        unsigned RESERVED0 : 1; //!< [7] Reserved
        unsigned ODT1_INT_RES : 3; //!< [10:8] On chip ODT byte1 resistor - This field determines the Rtt_Nom of the on chip ODT byte1 resistor during read accesses.
        unsigned RESERVED1 : 1; //!< [11] Reserved
        unsigned ODT2_INT_RES : 3; //!< [14:12] On chip ODT byte2 resistor - This field determines the Rtt_Nom of the on chip ODT byte2 resistor during read accesses.
        unsigned RESERVED2 : 1; //!< [15] Reserved
        unsigned ODT3_INT_RES : 3; //!< [18:16] On chip ODT byte3 resistor - This field determines the Rtt_Nom of the on chip ODT byte3 resistor during read accesses.
        unsigned RESERVED3 : 13; //!< [31:19] Reserved
    } B;
} hw_mmdc_mpodtctrl_t;
#endif

/*
 * constants & macros for entire MMDC_MPODTCTRL register
 */
#define HW_MMDC_MPODTCTRL_ADDR      (REGS_MMDC_BASE + 0x818)

#ifndef __LANGUAGE_ASM__
#define HW_MMDC_MPODTCTRL           (*(volatile hw_mmdc_mpodtctrl_t *) HW_MMDC_MPODTCTRL_ADDR)
#define HW_MMDC_MPODTCTRL_RD()      (HW_MMDC_MPODTCTRL.U)
#define HW_MMDC_MPODTCTRL_WR(v)     (HW_MMDC_MPODTCTRL.U = (v))
#define HW_MMDC_MPODTCTRL_SET(v)    (HW_MMDC_MPODTCTRL_WR(HW_MMDC_MPODTCTRL_RD() |  (v)))
#define HW_MMDC_MPODTCTRL_CLR(v)    (HW_MMDC_MPODTCTRL_WR(HW_MMDC_MPODTCTRL_RD() & ~(v)))
#define HW_MMDC_MPODTCTRL_TOG(v)    (HW_MMDC_MPODTCTRL_WR(HW_MMDC_MPODTCTRL_RD() ^  (v)))
#endif

/*
 * constants & macros for individual MMDC_MPODTCTRL bitfields
 */

/* --- Register HW_MMDC_MPODTCTRL, field ODT_WR_PAS_EN[0] (RW)
 *
 * Inactive write CS ODT enable. The bit determines if ODT pin of the inactive CS will be asserted
 * during write accesses.
 *
 * Values:
 * 0 - Inactive CS ODT pin is disabled during write accesses to other CS.
 * 1 - Inactive CS ODT pin is enabled during write accesses to other CS.
 */

#define BP_MMDC_MPODTCTRL_ODT_WR_PAS_EN      (0)      //!< Bit position for MMDC_MPODTCTRL_ODT_WR_PAS_EN.
#define BM_MMDC_MPODTCTRL_ODT_WR_PAS_EN      (0x00000001)  //!< Bit mask for MMDC_MPODTCTRL_ODT_WR_PAS_EN.

//! @brief Get value of MMDC_MPODTCTRL_ODT_WR_PAS_EN from a register value.
#define BG_MMDC_MPODTCTRL_ODT_WR_PAS_EN(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_MMDC_MPODTCTRL_ODT_WR_PAS_EN) >> BP_MMDC_MPODTCTRL_ODT_WR_PAS_EN)

//! @brief Format value for bitfield MMDC_MPODTCTRL_ODT_WR_PAS_EN.
#define BF_MMDC_MPODTCTRL_ODT_WR_PAS_EN(v)   ((__REG_VALUE_TYPE((v), reg32_t) << BP_MMDC_MPODTCTRL_ODT_WR_PAS_EN) & BM_MMDC_MPODTCTRL_ODT_WR_PAS_EN)

#ifndef __LANGUAGE_ASM__
//! @brief Set the ODT_WR_PAS_EN field to a new value.
#define BW_MMDC_MPODTCTRL_ODT_WR_PAS_EN(v)   (HW_MMDC_MPODTCTRL_WR((HW_MMDC_MPODTCTRL_RD() & ~BM_MMDC_MPODTCTRL_ODT_WR_PAS_EN) | BF_MMDC_MPODTCTRL_ODT_WR_PAS_EN(v)))
#endif


/* --- Register HW_MMDC_MPODTCTRL, field ODT_WR_ACT_EN[1] (RW)
 *
 * Active write CS ODT enable. The bit determines if ODT pin of the active CS will be asserted
 * during write accesses.
 *
 * Values:
 * 0 - Active CS ODT pin is disabled during write access.
 * 1 - Active CS ODT pin is enabled during write access.
 */

#define BP_MMDC_MPODTCTRL_ODT_WR_ACT_EN      (1)      //!< Bit position for MMDC_MPODTCTRL_ODT_WR_ACT_EN.
#define BM_MMDC_MPODTCTRL_ODT_WR_ACT_EN      (0x00000002)  //!< Bit mask for MMDC_MPODTCTRL_ODT_WR_ACT_EN.

//! @brief Get value of MMDC_MPODTCTRL_ODT_WR_ACT_EN from a register value.
#define BG_MMDC_MPODTCTRL_ODT_WR_ACT_EN(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_MMDC_MPODTCTRL_ODT_WR_ACT_EN) >> BP_MMDC_MPODTCTRL_ODT_WR_ACT_EN)

//! @brief Format value for bitfield MMDC_MPODTCTRL_ODT_WR_ACT_EN.
#define BF_MMDC_MPODTCTRL_ODT_WR_ACT_EN(v)   ((__REG_VALUE_TYPE((v), reg32_t) << BP_MMDC_MPODTCTRL_ODT_WR_ACT_EN) & BM_MMDC_MPODTCTRL_ODT_WR_ACT_EN)

#ifndef __LANGUAGE_ASM__
//! @brief Set the ODT_WR_ACT_EN field to a new value.
#define BW_MMDC_MPODTCTRL_ODT_WR_ACT_EN(v)   (HW_MMDC_MPODTCTRL_WR((HW_MMDC_MPODTCTRL_RD() & ~BM_MMDC_MPODTCTRL_ODT_WR_ACT_EN) | BF_MMDC_MPODTCTRL_ODT_WR_ACT_EN(v)))
#endif


/* --- Register HW_MMDC_MPODTCTRL, field ODT_RD_PAS_EN[2] (RW)
 *
 * Inactive read CS ODT enable. The bit determines if ODT pin of the inactive CS will be asserted
 * during read accesses.
 *
 * Values:
 * 0 - Inactive CS ODT pin is disabled during read accesses to other CS.
 * 1 - Inactive CS ODT pin is enabled during read accesses to other CS.
 */

#define BP_MMDC_MPODTCTRL_ODT_RD_PAS_EN      (2)      //!< Bit position for MMDC_MPODTCTRL_ODT_RD_PAS_EN.
#define BM_MMDC_MPODTCTRL_ODT_RD_PAS_EN      (0x00000004)  //!< Bit mask for MMDC_MPODTCTRL_ODT_RD_PAS_EN.

//! @brief Get value of MMDC_MPODTCTRL_ODT_RD_PAS_EN from a register value.
#define BG_MMDC_MPODTCTRL_ODT_RD_PAS_EN(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_MMDC_MPODTCTRL_ODT_RD_PAS_EN) >> BP_MMDC_MPODTCTRL_ODT_RD_PAS_EN)

//! @brief Format value for bitfield MMDC_MPODTCTRL_ODT_RD_PAS_EN.
#define BF_MMDC_MPODTCTRL_ODT_RD_PAS_EN(v)   ((__REG_VALUE_TYPE((v), reg32_t) << BP_MMDC_MPODTCTRL_ODT_RD_PAS_EN) & BM_MMDC_MPODTCTRL_ODT_RD_PAS_EN)

#ifndef __LANGUAGE_ASM__
//! @brief Set the ODT_RD_PAS_EN field to a new value.
#define BW_MMDC_MPODTCTRL_ODT_RD_PAS_EN(v)   (HW_MMDC_MPODTCTRL_WR((HW_MMDC_MPODTCTRL_RD() & ~BM_MMDC_MPODTCTRL_ODT_RD_PAS_EN) | BF_MMDC_MPODTCTRL_ODT_RD_PAS_EN(v)))
#endif


/* --- Register HW_MMDC_MPODTCTRL, field ODT_RD_ACT_EN[3] (RW)
 *
 * Active read CS ODT enable. The bit determines if ODT pin of the active CS will be asserted during
 * read accesses.
 *
 * Values:
 * 0 - Active CS ODT pin is disabled during read access.
 * 1 - Active CS ODT pin is enabled during read access.
 */

#define BP_MMDC_MPODTCTRL_ODT_RD_ACT_EN      (3)      //!< Bit position for MMDC_MPODTCTRL_ODT_RD_ACT_EN.
#define BM_MMDC_MPODTCTRL_ODT_RD_ACT_EN      (0x00000008)  //!< Bit mask for MMDC_MPODTCTRL_ODT_RD_ACT_EN.

//! @brief Get value of MMDC_MPODTCTRL_ODT_RD_ACT_EN from a register value.
#define BG_MMDC_MPODTCTRL_ODT_RD_ACT_EN(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_MMDC_MPODTCTRL_ODT_RD_ACT_EN) >> BP_MMDC_MPODTCTRL_ODT_RD_ACT_EN)

//! @brief Format value for bitfield MMDC_MPODTCTRL_ODT_RD_ACT_EN.
#define BF_MMDC_MPODTCTRL_ODT_RD_ACT_EN(v)   ((__REG_VALUE_TYPE((v), reg32_t) << BP_MMDC_MPODTCTRL_ODT_RD_ACT_EN) & BM_MMDC_MPODTCTRL_ODT_RD_ACT_EN)

#ifndef __LANGUAGE_ASM__
//! @brief Set the ODT_RD_ACT_EN field to a new value.
#define BW_MMDC_MPODTCTRL_ODT_RD_ACT_EN(v)   (HW_MMDC_MPODTCTRL_WR((HW_MMDC_MPODTCTRL_RD() & ~BM_MMDC_MPODTCTRL_ODT_RD_ACT_EN) | BF_MMDC_MPODTCTRL_ODT_RD_ACT_EN(v)))
#endif


/* --- Register HW_MMDC_MPODTCTRL, field ODT0_INT_RES[6:4] (RW)
 *
 * On chip ODT byte0 resistor - This field determines the Rtt_Nom of the on chip ODT byte0 resistor
 * during read accesses.
 *
 * Values:
 * 000 - Rtt_Nom Disabled.
 * 001 - Rtt_Nom 120 Ohm /75 Ohm(ddr2)
 * 010 - Rtt_Nom 60 Ohm /150 Ohm(ddr2)
 * 011 - Rtt_Nom 40 Ohm /50 Ohm(ddr2)
 * 100 - Rtt_Nom 30 Ohm /37.5 Ohm(ddr2)
 * 101 - Rtt_Nom 24 Ohm /30 Ohm(ddr2)
 * 110 - Rtt_Nom 20 Ohm /25 Ohm(ddr2)
 * 111 - Rtt_Nom 17 Ohm /21 Ohm(ddr2)
 */

#define BP_MMDC_MPODTCTRL_ODT0_INT_RES      (4)      //!< Bit position for MMDC_MPODTCTRL_ODT0_INT_RES.
#define BM_MMDC_MPODTCTRL_ODT0_INT_RES      (0x00000070)  //!< Bit mask for MMDC_MPODTCTRL_ODT0_INT_RES.

//! @brief Get value of MMDC_MPODTCTRL_ODT0_INT_RES from a register value.
#define BG_MMDC_MPODTCTRL_ODT0_INT_RES(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_MMDC_MPODTCTRL_ODT0_INT_RES) >> BP_MMDC_MPODTCTRL_ODT0_INT_RES)

//! @brief Format value for bitfield MMDC_MPODTCTRL_ODT0_INT_RES.
#define BF_MMDC_MPODTCTRL_ODT0_INT_RES(v)   ((__REG_VALUE_TYPE((v), reg32_t) << BP_MMDC_MPODTCTRL_ODT0_INT_RES) & BM_MMDC_MPODTCTRL_ODT0_INT_RES)

#ifndef __LANGUAGE_ASM__
//! @brief Set the ODT0_INT_RES field to a new value.
#define BW_MMDC_MPODTCTRL_ODT0_INT_RES(v)   (HW_MMDC_MPODTCTRL_WR((HW_MMDC_MPODTCTRL_RD() & ~BM_MMDC_MPODTCTRL_ODT0_INT_RES) | BF_MMDC_MPODTCTRL_ODT0_INT_RES(v)))
#endif


/* --- Register HW_MMDC_MPODTCTRL, field ODT1_INT_RES[10:8] (RW)
 *
 * On chip ODT byte1 resistor - This field determines the Rtt_Nom of the on chip ODT byte1 resistor
 * during read accesses.
 *
 * Values:
 * 0000 - Rtt_Nom Disabled.
 * 001 - Rtt_Nom 120 Ohm /75 Ohm(ddr2)
 * 010 - Rtt_Nom 60 Ohm /150 Ohm(ddr2)
 * 011 - Rtt_Nom 40 Ohm /50 Ohm(ddr2)
 * 100 - Rtt_Nom 30 Ohm /37.5 Ohm(ddr2)
 * 101 - Rtt_Nom 24 Ohm /30 Ohm(ddr2)
 * 110 - Rtt_Nom 20 Ohm /25 Ohm(ddr2)
 * 111 - Rtt_Nom 17 Ohm /21 Ohm(ddr2)
 */

#define BP_MMDC_MPODTCTRL_ODT1_INT_RES      (8)      //!< Bit position for MMDC_MPODTCTRL_ODT1_INT_RES.
#define BM_MMDC_MPODTCTRL_ODT1_INT_RES      (0x00000700)  //!< Bit mask for MMDC_MPODTCTRL_ODT1_INT_RES.

//! @brief Get value of MMDC_MPODTCTRL_ODT1_INT_RES from a register value.
#define BG_MMDC_MPODTCTRL_ODT1_INT_RES(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_MMDC_MPODTCTRL_ODT1_INT_RES) >> BP_MMDC_MPODTCTRL_ODT1_INT_RES)

//! @brief Format value for bitfield MMDC_MPODTCTRL_ODT1_INT_RES.
#define BF_MMDC_MPODTCTRL_ODT1_INT_RES(v)   ((__REG_VALUE_TYPE((v), reg32_t) << BP_MMDC_MPODTCTRL_ODT1_INT_RES) & BM_MMDC_MPODTCTRL_ODT1_INT_RES)

#ifndef __LANGUAGE_ASM__
//! @brief Set the ODT1_INT_RES field to a new value.
#define BW_MMDC_MPODTCTRL_ODT1_INT_RES(v)   (HW_MMDC_MPODTCTRL_WR((HW_MMDC_MPODTCTRL_RD() & ~BM_MMDC_MPODTCTRL_ODT1_INT_RES) | BF_MMDC_MPODTCTRL_ODT1_INT_RES(v)))
#endif


/* --- Register HW_MMDC_MPODTCTRL, field ODT2_INT_RES[14:12] (RW)
 *
 * On chip ODT byte2 resistor - This field determines the Rtt_Nom of the on chip ODT byte2 resistor
 * during read accesses.
 *
 * Values:
 * 000 - Rtt_Nom Disabled.
 * 001 - Rtt_Nom 120 Ohm /75 Ohm(ddr2)
 * 010 - Rtt_Nom 60 Ohm /150 Ohm(ddr2)
 * 011 - Rtt_Nom 40 Ohm /50 Ohm(ddr2)
 * 100 - Rtt_Nom 30 Ohm /37.5 Ohm(ddr2)
 * 101 - Rtt_Nom 24 Ohm /30 Ohm(ddr2)
 * 110 - Rtt_Nom 20 Ohm /25 Ohm(ddr2)
 * 111 - Rtt_Nom 17 Ohm /21 Ohm(ddr2)
 */

#define BP_MMDC_MPODTCTRL_ODT2_INT_RES      (12)      //!< Bit position for MMDC_MPODTCTRL_ODT2_INT_RES.
#define BM_MMDC_MPODTCTRL_ODT2_INT_RES      (0x00007000)  //!< Bit mask for MMDC_MPODTCTRL_ODT2_INT_RES.

//! @brief Get value of MMDC_MPODTCTRL_ODT2_INT_RES from a register value.
#define BG_MMDC_MPODTCTRL_ODT2_INT_RES(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_MMDC_MPODTCTRL_ODT2_INT_RES) >> BP_MMDC_MPODTCTRL_ODT2_INT_RES)

//! @brief Format value for bitfield MMDC_MPODTCTRL_ODT2_INT_RES.
#define BF_MMDC_MPODTCTRL_ODT2_INT_RES(v)   ((__REG_VALUE_TYPE((v), reg32_t) << BP_MMDC_MPODTCTRL_ODT2_INT_RES) & BM_MMDC_MPODTCTRL_ODT2_INT_RES)

#ifndef __LANGUAGE_ASM__
//! @brief Set the ODT2_INT_RES field to a new value.
#define BW_MMDC_MPODTCTRL_ODT2_INT_RES(v)   (HW_MMDC_MPODTCTRL_WR((HW_MMDC_MPODTCTRL_RD() & ~BM_MMDC_MPODTCTRL_ODT2_INT_RES) | BF_MMDC_MPODTCTRL_ODT2_INT_RES(v)))
#endif


/* --- Register HW_MMDC_MPODTCTRL, field ODT3_INT_RES[18:16] (RW)
 *
 * On chip ODT byte3 resistor - This field determines the Rtt_Nom of the on chip ODT byte3 resistor
 * during read accesses.
 *
 * Values:
 * 000 - Rtt_Nom Disabled.
 * 001 - Rtt_Nom 120 Ohm /75 Ohm(ddr2)
 * 010 - Rtt_Nom 60 Ohm /150 Ohm(ddr2)
 * 011 - Rtt_Nom 40 Ohm /50 Ohm(ddr2)
 * 100 - Rtt_Nom 30 Ohm /37.5 Ohm(ddr2)
 * 101 - Rtt_Nom 24 Ohm /30 Ohm(ddr2)
 * 110 - Rtt_Nom 20 Ohm /25 Ohm(ddr2)
 * 111 - Rtt_Nom 17 Ohm /21 Ohm(ddr2)
 */

#define BP_MMDC_MPODTCTRL_ODT3_INT_RES      (16)      //!< Bit position for MMDC_MPODTCTRL_ODT3_INT_RES.
#define BM_MMDC_MPODTCTRL_ODT3_INT_RES      (0x00070000)  //!< Bit mask for MMDC_MPODTCTRL_ODT3_INT_RES.

//! @brief Get value of MMDC_MPODTCTRL_ODT3_INT_RES from a register value.
#define BG_MMDC_MPODTCTRL_ODT3_INT_RES(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_MMDC_MPODTCTRL_ODT3_INT_RES) >> BP_MMDC_MPODTCTRL_ODT3_INT_RES)

//! @brief Format value for bitfield MMDC_MPODTCTRL_ODT3_INT_RES.
#define BF_MMDC_MPODTCTRL_ODT3_INT_RES(v)   ((__REG_VALUE_TYPE((v), reg32_t) << BP_MMDC_MPODTCTRL_ODT3_INT_RES) & BM_MMDC_MPODTCTRL_ODT3_INT_RES)

#ifndef __LANGUAGE_ASM__
//! @brief Set the ODT3_INT_RES field to a new value.
#define BW_MMDC_MPODTCTRL_ODT3_INT_RES(v)   (HW_MMDC_MPODTCTRL_WR((HW_MMDC_MPODTCTRL_RD() & ~BM_MMDC_MPODTCTRL_ODT3_INT_RES) | BF_MMDC_MPODTCTRL_ODT3_INT_RES(v)))
#endif


//-------------------------------------------------------------------------------------------
// HW_MMDC_MPRDDQBY0DL - MMDC PHY Read DQ Byte0 Delay Register
//-------------------------------------------------------------------------------------------

#ifndef __LANGUAGE_ASM__
/*!
 * @brief HW_MMDC_MPRDDQBY0DL - MMDC PHY Read DQ Byte0 Delay Register (RW)
 *
 * Reset value: 0x00000000
 *
 * This register is used to add fine-tuning adjustment to every bit in the read DQ byte0 relative to
 * the read DQS. This delay is in addition to the read data calibration. If operating in 64-bit
 * mode, there is an identical register that is mapped at the second base address.  Supported Mode
 * Of Operations:  For Channel 0: All  For Channel 1: DDR3_x64, LP2_2ch_x16, LP2_2ch_x32
 */
typedef union _hw_mmdc_mprddqby0dl
{
    reg32_t U;
    struct _hw_mmdc_mprddqby0dl_bitfields
    {
        unsigned RD_DQ0_DEL : 3; //!< [2:0] Read dqs0 to dq0 delay fine-tuning.
        unsigned RESERVED0 : 1; //!< [3] Reserved
        unsigned RD_DQ1_DEL : 3; //!< [6:4] Read dqs0 to dq1 delay fine-tuning.
        unsigned RESERVED1 : 1; //!< [7] Reserved
        unsigned RD_DQ2_DEL : 3; //!< [10:8] Read dqs0 to dq2 delay fine-tuning.
        unsigned RESERVED2 : 1; //!< [11] Reserved
        unsigned RD_DQ3_DEL : 3; //!< [14:12] Read dqs0 to dq3 delay fine-tuning.
        unsigned RESERVED3 : 1; //!< [15] Reserved
        unsigned RD_DQ4_DEL : 3; //!< [18:16] Read dqs0 to dq4 delay fine-tuning.
        unsigned RESERVED4 : 1; //!< [19] Reserved
        unsigned RD_DQ5_DEL : 3; //!< [22:20] Read dqs0 to dq5 delay fine-tuning.
        unsigned RESERVED5 : 1; //!< [23] Reserved
        unsigned RD_DQ6_DEL : 3; //!< [26:24] Read dqs0 to dq6 delay fine-tuning.
        unsigned RESERVED6 : 1; //!< [27] Reserved
        unsigned RD_DQ7_DEL : 3; //!< [30:28] Read dqs0 to dq7 delay fine-tuning.
        unsigned RESERVED7 : 1; //!< [31] Reserved
    } B;
} hw_mmdc_mprddqby0dl_t;
#endif

/*
 * constants & macros for entire MMDC_MPRDDQBY0DL register
 */
#define HW_MMDC_MPRDDQBY0DL_ADDR      (REGS_MMDC_BASE + 0x81c)

#ifndef __LANGUAGE_ASM__
#define HW_MMDC_MPRDDQBY0DL           (*(volatile hw_mmdc_mprddqby0dl_t *) HW_MMDC_MPRDDQBY0DL_ADDR)
#define HW_MMDC_MPRDDQBY0DL_RD()      (HW_MMDC_MPRDDQBY0DL.U)
#define HW_MMDC_MPRDDQBY0DL_WR(v)     (HW_MMDC_MPRDDQBY0DL.U = (v))
#define HW_MMDC_MPRDDQBY0DL_SET(v)    (HW_MMDC_MPRDDQBY0DL_WR(HW_MMDC_MPRDDQBY0DL_RD() |  (v)))
#define HW_MMDC_MPRDDQBY0DL_CLR(v)    (HW_MMDC_MPRDDQBY0DL_WR(HW_MMDC_MPRDDQBY0DL_RD() & ~(v)))
#define HW_MMDC_MPRDDQBY0DL_TOG(v)    (HW_MMDC_MPRDDQBY0DL_WR(HW_MMDC_MPRDDQBY0DL_RD() ^  (v)))
#endif

/*
 * constants & macros for individual MMDC_MPRDDQBY0DL bitfields
 */

/* --- Register HW_MMDC_MPRDDQBY0DL, field RD_DQ0_DEL[2:0] (RW)
 *
 * Read dqs0 to dq0 delay fine-tuning. This field holds the number of delay units that are added to
 * dq0 relative to dqs0.
 *
 * Values:
 * 000 - No change in dq0 delay
 * 001 - Add dq0 delay of 1 delay unit
 * 010 - Add dq0 delay of 2 delay units.
 * 011 - Add dq0 delay of 3 delay units.
 * 100 - Add dq0 delay of 4 delay units.
 * 101 - Add dq0 delay of 5 delay units.
 * 110 - Add dq0 delay of 6 delay units.
 * 111 - Add dq0 delay of 7 delay units.
 */

#define BP_MMDC_MPRDDQBY0DL_RD_DQ0_DEL      (0)      //!< Bit position for MMDC_MPRDDQBY0DL_RD_DQ0_DEL.
#define BM_MMDC_MPRDDQBY0DL_RD_DQ0_DEL      (0x00000007)  //!< Bit mask for MMDC_MPRDDQBY0DL_RD_DQ0_DEL.

//! @brief Get value of MMDC_MPRDDQBY0DL_RD_DQ0_DEL from a register value.
#define BG_MMDC_MPRDDQBY0DL_RD_DQ0_DEL(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_MMDC_MPRDDQBY0DL_RD_DQ0_DEL) >> BP_MMDC_MPRDDQBY0DL_RD_DQ0_DEL)

//! @brief Format value for bitfield MMDC_MPRDDQBY0DL_RD_DQ0_DEL.
#define BF_MMDC_MPRDDQBY0DL_RD_DQ0_DEL(v)   ((__REG_VALUE_TYPE((v), reg32_t) << BP_MMDC_MPRDDQBY0DL_RD_DQ0_DEL) & BM_MMDC_MPRDDQBY0DL_RD_DQ0_DEL)

#ifndef __LANGUAGE_ASM__
//! @brief Set the RD_DQ0_DEL field to a new value.
#define BW_MMDC_MPRDDQBY0DL_RD_DQ0_DEL(v)   (HW_MMDC_MPRDDQBY0DL_WR((HW_MMDC_MPRDDQBY0DL_RD() & ~BM_MMDC_MPRDDQBY0DL_RD_DQ0_DEL) | BF_MMDC_MPRDDQBY0DL_RD_DQ0_DEL(v)))
#endif


/* --- Register HW_MMDC_MPRDDQBY0DL, field RD_DQ1_DEL[6:4] (RW)
 *
 * Read dqs0 to dq1 delay fine-tuning. This field holds the number of delay units that are added to
 * dq1 relative to dqs0.
 *
 * Values:
 * 000 - No change in dq1 delay
 * 001 - Add dq1 delay of 1 delay unit
 * 010 - Add dq1 delay of 2 delay units.
 * 011 - Add dq1 delay of 3 delay units.
 * 100 - Add dq1 delay of 4 delay units.
 * 101 - Add dq1 delay of 5 delay units.
 * 110 - Add dq1 delay of 6 delay units.
 * 111 - Add dq1 delay of 7 delay units.
 */

#define BP_MMDC_MPRDDQBY0DL_RD_DQ1_DEL      (4)      //!< Bit position for MMDC_MPRDDQBY0DL_RD_DQ1_DEL.
#define BM_MMDC_MPRDDQBY0DL_RD_DQ1_DEL      (0x00000070)  //!< Bit mask for MMDC_MPRDDQBY0DL_RD_DQ1_DEL.

//! @brief Get value of MMDC_MPRDDQBY0DL_RD_DQ1_DEL from a register value.
#define BG_MMDC_MPRDDQBY0DL_RD_DQ1_DEL(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_MMDC_MPRDDQBY0DL_RD_DQ1_DEL) >> BP_MMDC_MPRDDQBY0DL_RD_DQ1_DEL)

//! @brief Format value for bitfield MMDC_MPRDDQBY0DL_RD_DQ1_DEL.
#define BF_MMDC_MPRDDQBY0DL_RD_DQ1_DEL(v)   ((__REG_VALUE_TYPE((v), reg32_t) << BP_MMDC_MPRDDQBY0DL_RD_DQ1_DEL) & BM_MMDC_MPRDDQBY0DL_RD_DQ1_DEL)

#ifndef __LANGUAGE_ASM__
//! @brief Set the RD_DQ1_DEL field to a new value.
#define BW_MMDC_MPRDDQBY0DL_RD_DQ1_DEL(v)   (HW_MMDC_MPRDDQBY0DL_WR((HW_MMDC_MPRDDQBY0DL_RD() & ~BM_MMDC_MPRDDQBY0DL_RD_DQ1_DEL) | BF_MMDC_MPRDDQBY0DL_RD_DQ1_DEL(v)))
#endif


/* --- Register HW_MMDC_MPRDDQBY0DL, field RD_DQ2_DEL[10:8] (RW)
 *
 * Read dqs0 to dq2 delay fine-tuning. This field holds the number of delay units that are added to
 * dq2 relative to dqs0.
 *
 * Values:
 * 000 - No change in dq2 delay
 * 001 - Add dq2 delay of 1 delay unit
 * 010 - Add dq2 delay of 2 delay units.
 * 011 - Add dq2 delay of 3 delay units.
 * 100 - Add dq2 delay of 4 delay units.
 * 101 - Add dq2 delay of 5 delay units.
 * 110 - Add dq2 delay of 6 delay units.
 * 111 - Add dq2 delay of 7 delay units.
 */

#define BP_MMDC_MPRDDQBY0DL_RD_DQ2_DEL      (8)      //!< Bit position for MMDC_MPRDDQBY0DL_RD_DQ2_DEL.
#define BM_MMDC_MPRDDQBY0DL_RD_DQ2_DEL      (0x00000700)  //!< Bit mask for MMDC_MPRDDQBY0DL_RD_DQ2_DEL.

//! @brief Get value of MMDC_MPRDDQBY0DL_RD_DQ2_DEL from a register value.
#define BG_MMDC_MPRDDQBY0DL_RD_DQ2_DEL(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_MMDC_MPRDDQBY0DL_RD_DQ2_DEL) >> BP_MMDC_MPRDDQBY0DL_RD_DQ2_DEL)

//! @brief Format value for bitfield MMDC_MPRDDQBY0DL_RD_DQ2_DEL.
#define BF_MMDC_MPRDDQBY0DL_RD_DQ2_DEL(v)   ((__REG_VALUE_TYPE((v), reg32_t) << BP_MMDC_MPRDDQBY0DL_RD_DQ2_DEL) & BM_MMDC_MPRDDQBY0DL_RD_DQ2_DEL)

#ifndef __LANGUAGE_ASM__
//! @brief Set the RD_DQ2_DEL field to a new value.
#define BW_MMDC_MPRDDQBY0DL_RD_DQ2_DEL(v)   (HW_MMDC_MPRDDQBY0DL_WR((HW_MMDC_MPRDDQBY0DL_RD() & ~BM_MMDC_MPRDDQBY0DL_RD_DQ2_DEL) | BF_MMDC_MPRDDQBY0DL_RD_DQ2_DEL(v)))
#endif


/* --- Register HW_MMDC_MPRDDQBY0DL, field RD_DQ3_DEL[14:12] (RW)
 *
 * Read dqs0 to dq3 delay fine-tuning. This field holds the number of delay units that are added to
 * dq3 relative to dqs0.
 *
 * Values:
 * 000 - No change in dq3 delay
 * 001 - Add dq3 delay of 1 delay unit
 * 010 - Add dq3 delay of 2 delay units.
 * 011 - Add dq3 delay of 3 delay units.
 * 100 - Add dq3 delay of 4 delay units.
 * 101 - Add dq3 delay of 5 delay units.
 * 110 - Add dq3 delay of 6 delay units.
 * 111 - Add dq3 delay of 7 delay units.
 */

#define BP_MMDC_MPRDDQBY0DL_RD_DQ3_DEL      (12)      //!< Bit position for MMDC_MPRDDQBY0DL_RD_DQ3_DEL.
#define BM_MMDC_MPRDDQBY0DL_RD_DQ3_DEL      (0x00007000)  //!< Bit mask for MMDC_MPRDDQBY0DL_RD_DQ3_DEL.

//! @brief Get value of MMDC_MPRDDQBY0DL_RD_DQ3_DEL from a register value.
#define BG_MMDC_MPRDDQBY0DL_RD_DQ3_DEL(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_MMDC_MPRDDQBY0DL_RD_DQ3_DEL) >> BP_MMDC_MPRDDQBY0DL_RD_DQ3_DEL)

//! @brief Format value for bitfield MMDC_MPRDDQBY0DL_RD_DQ3_DEL.
#define BF_MMDC_MPRDDQBY0DL_RD_DQ3_DEL(v)   ((__REG_VALUE_TYPE((v), reg32_t) << BP_MMDC_MPRDDQBY0DL_RD_DQ3_DEL) & BM_MMDC_MPRDDQBY0DL_RD_DQ3_DEL)

#ifndef __LANGUAGE_ASM__
//! @brief Set the RD_DQ3_DEL field to a new value.
#define BW_MMDC_MPRDDQBY0DL_RD_DQ3_DEL(v)   (HW_MMDC_MPRDDQBY0DL_WR((HW_MMDC_MPRDDQBY0DL_RD() & ~BM_MMDC_MPRDDQBY0DL_RD_DQ3_DEL) | BF_MMDC_MPRDDQBY0DL_RD_DQ3_DEL(v)))
#endif


/* --- Register HW_MMDC_MPRDDQBY0DL, field RD_DQ4_DEL[18:16] (RW)
 *
 * Read dqs0 to dq4 delay fine-tuning. This field holds the number of delay units that are added to
 * dq4 relative to dqs0.
 *
 * Values:
 * 000 - No change in dq4 delay
 * 001 - Add dq4 delay of 1 delay unit
 * 010 - Add dq4 delay of 2 delay units.
 * 011 - Add dq4 delay of 3 delay units.
 * 100 - Add dq4 delay of 4 delay units.
 * 101 - Add dq4 delay of 5 delay units.
 * 110 - Add dq4 delay of 6 delay units.
 * 111 - Add dq4 delay of 7 delay units.
 */

#define BP_MMDC_MPRDDQBY0DL_RD_DQ4_DEL      (16)      //!< Bit position for MMDC_MPRDDQBY0DL_RD_DQ4_DEL.
#define BM_MMDC_MPRDDQBY0DL_RD_DQ4_DEL      (0x00070000)  //!< Bit mask for MMDC_MPRDDQBY0DL_RD_DQ4_DEL.

//! @brief Get value of MMDC_MPRDDQBY0DL_RD_DQ4_DEL from a register value.
#define BG_MMDC_MPRDDQBY0DL_RD_DQ4_DEL(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_MMDC_MPRDDQBY0DL_RD_DQ4_DEL) >> BP_MMDC_MPRDDQBY0DL_RD_DQ4_DEL)

//! @brief Format value for bitfield MMDC_MPRDDQBY0DL_RD_DQ4_DEL.
#define BF_MMDC_MPRDDQBY0DL_RD_DQ4_DEL(v)   ((__REG_VALUE_TYPE((v), reg32_t) << BP_MMDC_MPRDDQBY0DL_RD_DQ4_DEL) & BM_MMDC_MPRDDQBY0DL_RD_DQ4_DEL)

#ifndef __LANGUAGE_ASM__
//! @brief Set the RD_DQ4_DEL field to a new value.
#define BW_MMDC_MPRDDQBY0DL_RD_DQ4_DEL(v)   (HW_MMDC_MPRDDQBY0DL_WR((HW_MMDC_MPRDDQBY0DL_RD() & ~BM_MMDC_MPRDDQBY0DL_RD_DQ4_DEL) | BF_MMDC_MPRDDQBY0DL_RD_DQ4_DEL(v)))
#endif


/* --- Register HW_MMDC_MPRDDQBY0DL, field RD_DQ5_DEL[22:20] (RW)
 *
 * Read dqs0 to dq5 delay fine-tuning. This field holds the number of delay units that are added to
 * dq5 relative to dqs0.
 *
 * Values:
 * 000 - No change in dq5 delay
 * 001 - Add dq5 delay of 1 delay unit
 * 010 - Add dq5 delay of 2 delay units.
 * 011 - Add dq5 delay of 3 delay units.
 * 100 - Add dq5 delay of 4 delay units.
 * 101 - Add dq5 delay of 5 delay units.
 * 110 - Add dq5 delay of 6 delay units.
 * 111 - Add dq5 delay of 7 delay units.
 */

#define BP_MMDC_MPRDDQBY0DL_RD_DQ5_DEL      (20)      //!< Bit position for MMDC_MPRDDQBY0DL_RD_DQ5_DEL.
#define BM_MMDC_MPRDDQBY0DL_RD_DQ5_DEL      (0x00700000)  //!< Bit mask for MMDC_MPRDDQBY0DL_RD_DQ5_DEL.

//! @brief Get value of MMDC_MPRDDQBY0DL_RD_DQ5_DEL from a register value.
#define BG_MMDC_MPRDDQBY0DL_RD_DQ5_DEL(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_MMDC_MPRDDQBY0DL_RD_DQ5_DEL) >> BP_MMDC_MPRDDQBY0DL_RD_DQ5_DEL)

//! @brief Format value for bitfield MMDC_MPRDDQBY0DL_RD_DQ5_DEL.
#define BF_MMDC_MPRDDQBY0DL_RD_DQ5_DEL(v)   ((__REG_VALUE_TYPE((v), reg32_t) << BP_MMDC_MPRDDQBY0DL_RD_DQ5_DEL) & BM_MMDC_MPRDDQBY0DL_RD_DQ5_DEL)

#ifndef __LANGUAGE_ASM__
//! @brief Set the RD_DQ5_DEL field to a new value.
#define BW_MMDC_MPRDDQBY0DL_RD_DQ5_DEL(v)   (HW_MMDC_MPRDDQBY0DL_WR((HW_MMDC_MPRDDQBY0DL_RD() & ~BM_MMDC_MPRDDQBY0DL_RD_DQ5_DEL) | BF_MMDC_MPRDDQBY0DL_RD_DQ5_DEL(v)))
#endif


/* --- Register HW_MMDC_MPRDDQBY0DL, field RD_DQ6_DEL[26:24] (RW)
 *
 * Read dqs0 to dq6 delay fine-tuning. This field holds the number of delay units that are added to
 * dq6 relative to dqs0.
 *
 * Values:
 * 000 - No change in dq6 delay
 * 001 - Add dq6 delay of 1 delay unit
 * 010 - Add dq6 delay of 2 delay units.
 * 011 - Add dq6 delay of 3 delay units.
 * 100 - Add dq6 delay of 4 delay units.
 * 101 - Add dq6 delay of 5 delay units.
 * 110 - Add dq6 delay of 6 delay units.
 * 111 - Add dq6 delay of 7 delay units.
 */

#define BP_MMDC_MPRDDQBY0DL_RD_DQ6_DEL      (24)      //!< Bit position for MMDC_MPRDDQBY0DL_RD_DQ6_DEL.
#define BM_MMDC_MPRDDQBY0DL_RD_DQ6_DEL      (0x07000000)  //!< Bit mask for MMDC_MPRDDQBY0DL_RD_DQ6_DEL.

//! @brief Get value of MMDC_MPRDDQBY0DL_RD_DQ6_DEL from a register value.
#define BG_MMDC_MPRDDQBY0DL_RD_DQ6_DEL(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_MMDC_MPRDDQBY0DL_RD_DQ6_DEL) >> BP_MMDC_MPRDDQBY0DL_RD_DQ6_DEL)

//! @brief Format value for bitfield MMDC_MPRDDQBY0DL_RD_DQ6_DEL.
#define BF_MMDC_MPRDDQBY0DL_RD_DQ6_DEL(v)   ((__REG_VALUE_TYPE((v), reg32_t) << BP_MMDC_MPRDDQBY0DL_RD_DQ6_DEL) & BM_MMDC_MPRDDQBY0DL_RD_DQ6_DEL)

#ifndef __LANGUAGE_ASM__
//! @brief Set the RD_DQ6_DEL field to a new value.
#define BW_MMDC_MPRDDQBY0DL_RD_DQ6_DEL(v)   (HW_MMDC_MPRDDQBY0DL_WR((HW_MMDC_MPRDDQBY0DL_RD() & ~BM_MMDC_MPRDDQBY0DL_RD_DQ6_DEL) | BF_MMDC_MPRDDQBY0DL_RD_DQ6_DEL(v)))
#endif


/* --- Register HW_MMDC_MPRDDQBY0DL, field RD_DQ7_DEL[30:28] (RW)
 *
 * Read dqs0 to dq7 delay fine-tuning. This field holds the number of delay units that are added to
 * dq7 relative to dqs0.
 *
 * Values:
 * 000 - No change in dq7 delay
 * 001 - Add dq7 delay of 1 delay unit
 * 010 - Add dq7 delay of 2 delay units.
 * 011 - Add dq7 delay of 3 delay units.
 * 100 - Add dq7 delay of 4 delay units.
 * 101 - Add dq7 delay of 5 delay units.
 * 110 - Add dq7 delay of 6 delay units.
 * 111 - Add dq7 delay of 7 delay units.
 */

#define BP_MMDC_MPRDDQBY0DL_RD_DQ7_DEL      (28)      //!< Bit position for MMDC_MPRDDQBY0DL_RD_DQ7_DEL.
#define BM_MMDC_MPRDDQBY0DL_RD_DQ7_DEL      (0x70000000)  //!< Bit mask for MMDC_MPRDDQBY0DL_RD_DQ7_DEL.

//! @brief Get value of MMDC_MPRDDQBY0DL_RD_DQ7_DEL from a register value.
#define BG_MMDC_MPRDDQBY0DL_RD_DQ7_DEL(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_MMDC_MPRDDQBY0DL_RD_DQ7_DEL) >> BP_MMDC_MPRDDQBY0DL_RD_DQ7_DEL)

//! @brief Format value for bitfield MMDC_MPRDDQBY0DL_RD_DQ7_DEL.
#define BF_MMDC_MPRDDQBY0DL_RD_DQ7_DEL(v)   ((__REG_VALUE_TYPE((v), reg32_t) << BP_MMDC_MPRDDQBY0DL_RD_DQ7_DEL) & BM_MMDC_MPRDDQBY0DL_RD_DQ7_DEL)

#ifndef __LANGUAGE_ASM__
//! @brief Set the RD_DQ7_DEL field to a new value.
#define BW_MMDC_MPRDDQBY0DL_RD_DQ7_DEL(v)   (HW_MMDC_MPRDDQBY0DL_WR((HW_MMDC_MPRDDQBY0DL_RD() & ~BM_MMDC_MPRDDQBY0DL_RD_DQ7_DEL) | BF_MMDC_MPRDDQBY0DL_RD_DQ7_DEL(v)))
#endif


//-------------------------------------------------------------------------------------------
// HW_MMDC_MPRDDQBY1DL - MMDC PHY Read DQ Byte1 Delay Register
//-------------------------------------------------------------------------------------------

#ifndef __LANGUAGE_ASM__
/*!
 * @brief HW_MMDC_MPRDDQBY1DL - MMDC PHY Read DQ Byte1 Delay Register (RW)
 *
 * Reset value: 0x00000000
 *
 * This register is used to add fine-tuning adjustment to every bit in the read DQ byte1 relative to
 * the read DQS  Supported Mode Of Operations:  For Channel 0: All  For Channel 1: DDR3_x64,
 * LP2_2ch_x16, LP2_2ch_x32
 */
typedef union _hw_mmdc_mprddqby1dl
{
    reg32_t U;
    struct _hw_mmdc_mprddqby1dl_bitfields
    {
        unsigned RD_DQ8_DEL : 3; //!< [2:0] Read dqs1 to dq8 delay fine-tuning.
        unsigned RESERVED0 : 1; //!< [3] Reserved
        unsigned RD_DQ9_DEL : 3; //!< [6:4] Read dqs1 to dq9 delay fine-tuning.
        unsigned RESERVED1 : 1; //!< [7] Reserved
        unsigned RD_DQ10_DEL : 3; //!< [10:8] Read dqs1 to dq10 delay fine-tuning.
        unsigned RESERVED2 : 1; //!< [11] Reserved
        unsigned RD_DQ11_DEL : 3; //!< [14:12] Read dqs1 to dq11 delay fine-tuning.
        unsigned RESERVED3 : 1; //!< [15] Reserved
        unsigned RD_DQ12_DEL : 3; //!< [18:16] Read dqs1 to dq12 delay fine-tuning.
        unsigned RESERVED4 : 1; //!< [19] Reserved
        unsigned RD_DQ13_DEL : 3; //!< [22:20] Read dqs1 to dq13 delay fine-tuning.
        unsigned RESERVED5 : 1; //!< [23] Reserved
        unsigned RD_DQ14_DEL : 3; //!< [26:24] Read dqs1 to dq14 delay fine-tuning.
        unsigned RESERVED6 : 1; //!< [27] Reserved
        unsigned RD_DQ15_DEL : 3; //!< [30:28] Read dqs1 to dq15 delay fine-tuning.
        unsigned RESERVED7 : 1; //!< [31] Reserved
    } B;
} hw_mmdc_mprddqby1dl_t;
#endif

/*
 * constants & macros for entire MMDC_MPRDDQBY1DL register
 */
#define HW_MMDC_MPRDDQBY1DL_ADDR      (REGS_MMDC_BASE + 0x820)

#ifndef __LANGUAGE_ASM__
#define HW_MMDC_MPRDDQBY1DL           (*(volatile hw_mmdc_mprddqby1dl_t *) HW_MMDC_MPRDDQBY1DL_ADDR)
#define HW_MMDC_MPRDDQBY1DL_RD()      (HW_MMDC_MPRDDQBY1DL.U)
#define HW_MMDC_MPRDDQBY1DL_WR(v)     (HW_MMDC_MPRDDQBY1DL.U = (v))
#define HW_MMDC_MPRDDQBY1DL_SET(v)    (HW_MMDC_MPRDDQBY1DL_WR(HW_MMDC_MPRDDQBY1DL_RD() |  (v)))
#define HW_MMDC_MPRDDQBY1DL_CLR(v)    (HW_MMDC_MPRDDQBY1DL_WR(HW_MMDC_MPRDDQBY1DL_RD() & ~(v)))
#define HW_MMDC_MPRDDQBY1DL_TOG(v)    (HW_MMDC_MPRDDQBY1DL_WR(HW_MMDC_MPRDDQBY1DL_RD() ^  (v)))
#endif

/*
 * constants & macros for individual MMDC_MPRDDQBY1DL bitfields
 */

/* --- Register HW_MMDC_MPRDDQBY1DL, field RD_DQ8_DEL[2:0] (RW)
 *
 * Read dqs1 to dq8 delay fine-tuning. This field holds the number of delay units that are added to
 * dq8 relative to dqs1.
 *
 * Values:
 * 000 - No change in dq8 delay
 * 001 - Add dq8 delay of 1 delay unit
 * 010 - Add dq8 delay of 2 delay units.
 * 011 - Add dq8 delay of 3 delay units.
 * 100 - Add dq8 delay of 4 delay units.
 * 101 - Add dq8 delay of 5 delay units.
 * 110 - Add dq8 delay of 6 delay units.
 * 111 - Add dq8 delay of 7 delay units.
 */

#define BP_MMDC_MPRDDQBY1DL_RD_DQ8_DEL      (0)      //!< Bit position for MMDC_MPRDDQBY1DL_RD_DQ8_DEL.
#define BM_MMDC_MPRDDQBY1DL_RD_DQ8_DEL      (0x00000007)  //!< Bit mask for MMDC_MPRDDQBY1DL_RD_DQ8_DEL.

//! @brief Get value of MMDC_MPRDDQBY1DL_RD_DQ8_DEL from a register value.
#define BG_MMDC_MPRDDQBY1DL_RD_DQ8_DEL(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_MMDC_MPRDDQBY1DL_RD_DQ8_DEL) >> BP_MMDC_MPRDDQBY1DL_RD_DQ8_DEL)

//! @brief Format value for bitfield MMDC_MPRDDQBY1DL_RD_DQ8_DEL.
#define BF_MMDC_MPRDDQBY1DL_RD_DQ8_DEL(v)   ((__REG_VALUE_TYPE((v), reg32_t) << BP_MMDC_MPRDDQBY1DL_RD_DQ8_DEL) & BM_MMDC_MPRDDQBY1DL_RD_DQ8_DEL)

#ifndef __LANGUAGE_ASM__
//! @brief Set the RD_DQ8_DEL field to a new value.
#define BW_MMDC_MPRDDQBY1DL_RD_DQ8_DEL(v)   (HW_MMDC_MPRDDQBY1DL_WR((HW_MMDC_MPRDDQBY1DL_RD() & ~BM_MMDC_MPRDDQBY1DL_RD_DQ8_DEL) | BF_MMDC_MPRDDQBY1DL_RD_DQ8_DEL(v)))
#endif


/* --- Register HW_MMDC_MPRDDQBY1DL, field RD_DQ9_DEL[6:4] (RW)
 *
 * Read dqs1 to dq9 delay fine-tuning. This field holds the number of delay units that are added to
 * dq9 relative to dqs1.
 *
 * Values:
 * 000 - No change in dq9 delay
 * 001 - Add dq9 delay of 1 delay unit
 * 010 - Add dq9 delay of 2 delay units.
 * 011 - Add dq9 delay of 3 delay units.
 * 100 - Add dq9 delay of 4 delay units.
 * 101 - Add dq9 delay of 5 delay units.
 * 110 - Add dq9 delay of 6 delay units.
 * 111 - Add dq9 delay of 7 delay units.
 */

#define BP_MMDC_MPRDDQBY1DL_RD_DQ9_DEL      (4)      //!< Bit position for MMDC_MPRDDQBY1DL_RD_DQ9_DEL.
#define BM_MMDC_MPRDDQBY1DL_RD_DQ9_DEL      (0x00000070)  //!< Bit mask for MMDC_MPRDDQBY1DL_RD_DQ9_DEL.

//! @brief Get value of MMDC_MPRDDQBY1DL_RD_DQ9_DEL from a register value.
#define BG_MMDC_MPRDDQBY1DL_RD_DQ9_DEL(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_MMDC_MPRDDQBY1DL_RD_DQ9_DEL) >> BP_MMDC_MPRDDQBY1DL_RD_DQ9_DEL)

//! @brief Format value for bitfield MMDC_MPRDDQBY1DL_RD_DQ9_DEL.
#define BF_MMDC_MPRDDQBY1DL_RD_DQ9_DEL(v)   ((__REG_VALUE_TYPE((v), reg32_t) << BP_MMDC_MPRDDQBY1DL_RD_DQ9_DEL) & BM_MMDC_MPRDDQBY1DL_RD_DQ9_DEL)

#ifndef __LANGUAGE_ASM__
//! @brief Set the RD_DQ9_DEL field to a new value.
#define BW_MMDC_MPRDDQBY1DL_RD_DQ9_DEL(v)   (HW_MMDC_MPRDDQBY1DL_WR((HW_MMDC_MPRDDQBY1DL_RD() & ~BM_MMDC_MPRDDQBY1DL_RD_DQ9_DEL) | BF_MMDC_MPRDDQBY1DL_RD_DQ9_DEL(v)))
#endif


/* --- Register HW_MMDC_MPRDDQBY1DL, field RD_DQ10_DEL[10:8] (RW)
 *
 * Read dqs1 to dq10 delay fine-tuning. This field holds the number of delay units that are added to
 * dq10 relative to dqs1.
 *
 * Values:
 * 000 - No change in dq10 delay
 * 001 - Add dq10 delay of 1 delay unit
 * 010 - Add dq10 delay of 2 delay units.
 * 011 - Add dq10 delay of 3 delay units.
 * 100 - Add dq10 delay of 4 delay units.
 * 101 - Add dq10 delay of 5 delay unit
 * 110 - Add dq10 delay of 6 delay units.
 * 111 - Add dq10 delay of 7 delay units.
 */

#define BP_MMDC_MPRDDQBY1DL_RD_DQ10_DEL      (8)      //!< Bit position for MMDC_MPRDDQBY1DL_RD_DQ10_DEL.
#define BM_MMDC_MPRDDQBY1DL_RD_DQ10_DEL      (0x00000700)  //!< Bit mask for MMDC_MPRDDQBY1DL_RD_DQ10_DEL.

//! @brief Get value of MMDC_MPRDDQBY1DL_RD_DQ10_DEL from a register value.
#define BG_MMDC_MPRDDQBY1DL_RD_DQ10_DEL(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_MMDC_MPRDDQBY1DL_RD_DQ10_DEL) >> BP_MMDC_MPRDDQBY1DL_RD_DQ10_DEL)

//! @brief Format value for bitfield MMDC_MPRDDQBY1DL_RD_DQ10_DEL.
#define BF_MMDC_MPRDDQBY1DL_RD_DQ10_DEL(v)   ((__REG_VALUE_TYPE((v), reg32_t) << BP_MMDC_MPRDDQBY1DL_RD_DQ10_DEL) & BM_MMDC_MPRDDQBY1DL_RD_DQ10_DEL)

#ifndef __LANGUAGE_ASM__
//! @brief Set the RD_DQ10_DEL field to a new value.
#define BW_MMDC_MPRDDQBY1DL_RD_DQ10_DEL(v)   (HW_MMDC_MPRDDQBY1DL_WR((HW_MMDC_MPRDDQBY1DL_RD() & ~BM_MMDC_MPRDDQBY1DL_RD_DQ10_DEL) | BF_MMDC_MPRDDQBY1DL_RD_DQ10_DEL(v)))
#endif


/* --- Register HW_MMDC_MPRDDQBY1DL, field RD_DQ11_DEL[14:12] (RW)
 *
 * Read dqs1 to dq11 delay fine-tuning. This field holds the number of delay units that are added to
 * dq11 relative to dqs1.
 *
 * Values:
 * 000 - No change in dq11 delay
 * 001 - Add dq11 delay of 1 delay unit
 * 010 - Add dq11 delay of 2 delay units.
 * 011 - Add dq11 delay of 3 delay units.
 * 100 - Add dq11 delay of 4 delay units.
 * 101 - Add dq11 delay of 5 delay units.
 * 110 - Add dq11 delay of 6 delay units.
 * 111 - Add dq11 delay of 7 delay units.
 */

#define BP_MMDC_MPRDDQBY1DL_RD_DQ11_DEL      (12)      //!< Bit position for MMDC_MPRDDQBY1DL_RD_DQ11_DEL.
#define BM_MMDC_MPRDDQBY1DL_RD_DQ11_DEL      (0x00007000)  //!< Bit mask for MMDC_MPRDDQBY1DL_RD_DQ11_DEL.

//! @brief Get value of MMDC_MPRDDQBY1DL_RD_DQ11_DEL from a register value.
#define BG_MMDC_MPRDDQBY1DL_RD_DQ11_DEL(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_MMDC_MPRDDQBY1DL_RD_DQ11_DEL) >> BP_MMDC_MPRDDQBY1DL_RD_DQ11_DEL)

//! @brief Format value for bitfield MMDC_MPRDDQBY1DL_RD_DQ11_DEL.
#define BF_MMDC_MPRDDQBY1DL_RD_DQ11_DEL(v)   ((__REG_VALUE_TYPE((v), reg32_t) << BP_MMDC_MPRDDQBY1DL_RD_DQ11_DEL) & BM_MMDC_MPRDDQBY1DL_RD_DQ11_DEL)

#ifndef __LANGUAGE_ASM__
//! @brief Set the RD_DQ11_DEL field to a new value.
#define BW_MMDC_MPRDDQBY1DL_RD_DQ11_DEL(v)   (HW_MMDC_MPRDDQBY1DL_WR((HW_MMDC_MPRDDQBY1DL_RD() & ~BM_MMDC_MPRDDQBY1DL_RD_DQ11_DEL) | BF_MMDC_MPRDDQBY1DL_RD_DQ11_DEL(v)))
#endif


/* --- Register HW_MMDC_MPRDDQBY1DL, field RD_DQ12_DEL[18:16] (RW)
 *
 * Read dqs1 to dq12 delay fine-tuning. This field holds the number of delay units that are added to
 * dq12 relative to dqs1.
 *
 * Values:
 * 000 - No change in dq12 delay
 * 001 - Add dq12 delay of 1 delay unit
 * 010 - Add dq12 delay of 2 delay units.
 * 011 - Add dq12 delay of 3 delay units.
 * 100 - Add dq12 delay of 4 delay units.
 * 101 - Add dq12 delay of 5 delay units.
 * 110 - Add dq12 delay of 6 delay units.
 * 111 - Add dq12 delay of 7 delay units.
 */

#define BP_MMDC_MPRDDQBY1DL_RD_DQ12_DEL      (16)      //!< Bit position for MMDC_MPRDDQBY1DL_RD_DQ12_DEL.
#define BM_MMDC_MPRDDQBY1DL_RD_DQ12_DEL      (0x00070000)  //!< Bit mask for MMDC_MPRDDQBY1DL_RD_DQ12_DEL.

//! @brief Get value of MMDC_MPRDDQBY1DL_RD_DQ12_DEL from a register value.
#define BG_MMDC_MPRDDQBY1DL_RD_DQ12_DEL(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_MMDC_MPRDDQBY1DL_RD_DQ12_DEL) >> BP_MMDC_MPRDDQBY1DL_RD_DQ12_DEL)

//! @brief Format value for bitfield MMDC_MPRDDQBY1DL_RD_DQ12_DEL.
#define BF_MMDC_MPRDDQBY1DL_RD_DQ12_DEL(v)   ((__REG_VALUE_TYPE((v), reg32_t) << BP_MMDC_MPRDDQBY1DL_RD_DQ12_DEL) & BM_MMDC_MPRDDQBY1DL_RD_DQ12_DEL)

#ifndef __LANGUAGE_ASM__
//! @brief Set the RD_DQ12_DEL field to a new value.
#define BW_MMDC_MPRDDQBY1DL_RD_DQ12_DEL(v)   (HW_MMDC_MPRDDQBY1DL_WR((HW_MMDC_MPRDDQBY1DL_RD() & ~BM_MMDC_MPRDDQBY1DL_RD_DQ12_DEL) | BF_MMDC_MPRDDQBY1DL_RD_DQ12_DEL(v)))
#endif


/* --- Register HW_MMDC_MPRDDQBY1DL, field RD_DQ13_DEL[22:20] (RW)
 *
 * Read dqs1 to dq13 delay fine-tuning. This field holds the number of delay units that are added to
 * dq13 relative to dqs1.
 *
 * Values:
 * 000 - No change in dq13 delay
 * 001 - Add dq13 delay of 1 delay unit
 * 010 - Add dq13 delay of 2 delay units.
 * 011 - Add dq13 delay of 3 delay units.
 * 100 - Add dq13 delay of 4 delay units.
 * 101 - Add dq13 delay of 5 delay units.
 * 110 - Add dq13 delay of 6 delay units.
 * 111 - Add dq13 delay of 7 delay units.
 */

#define BP_MMDC_MPRDDQBY1DL_RD_DQ13_DEL      (20)      //!< Bit position for MMDC_MPRDDQBY1DL_RD_DQ13_DEL.
#define BM_MMDC_MPRDDQBY1DL_RD_DQ13_DEL      (0x00700000)  //!< Bit mask for MMDC_MPRDDQBY1DL_RD_DQ13_DEL.

//! @brief Get value of MMDC_MPRDDQBY1DL_RD_DQ13_DEL from a register value.
#define BG_MMDC_MPRDDQBY1DL_RD_DQ13_DEL(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_MMDC_MPRDDQBY1DL_RD_DQ13_DEL) >> BP_MMDC_MPRDDQBY1DL_RD_DQ13_DEL)

//! @brief Format value for bitfield MMDC_MPRDDQBY1DL_RD_DQ13_DEL.
#define BF_MMDC_MPRDDQBY1DL_RD_DQ13_DEL(v)   ((__REG_VALUE_TYPE((v), reg32_t) << BP_MMDC_MPRDDQBY1DL_RD_DQ13_DEL) & BM_MMDC_MPRDDQBY1DL_RD_DQ13_DEL)

#ifndef __LANGUAGE_ASM__
//! @brief Set the RD_DQ13_DEL field to a new value.
#define BW_MMDC_MPRDDQBY1DL_RD_DQ13_DEL(v)   (HW_MMDC_MPRDDQBY1DL_WR((HW_MMDC_MPRDDQBY1DL_RD() & ~BM_MMDC_MPRDDQBY1DL_RD_DQ13_DEL) | BF_MMDC_MPRDDQBY1DL_RD_DQ13_DEL(v)))
#endif


/* --- Register HW_MMDC_MPRDDQBY1DL, field RD_DQ14_DEL[26:24] (RW)
 *
 * Read dqs1 to dq14 delay fine-tuning. This field holds the number of delay units that are added to
 * dq14 relative to dqs1.
 *
 * Values:
 * 000 - No change in dq14 delay
 * 001 - Add dq14 delay of 1 delay unit
 * 010 - Add dq14 delay of 2 delay units.
 * 011 - Add dq14 delay of 3 delay units.
 * 100 - Add dq14 delay of 4 delay units.
 * 101 - Add dq14 delay of 5 delay units.
 * 110 - Add dq14 delay of 6 delay units.
 * 111 - Add dq14 delay of 7 delay units.
 */

#define BP_MMDC_MPRDDQBY1DL_RD_DQ14_DEL      (24)      //!< Bit position for MMDC_MPRDDQBY1DL_RD_DQ14_DEL.
#define BM_MMDC_MPRDDQBY1DL_RD_DQ14_DEL      (0x07000000)  //!< Bit mask for MMDC_MPRDDQBY1DL_RD_DQ14_DEL.

//! @brief Get value of MMDC_MPRDDQBY1DL_RD_DQ14_DEL from a register value.
#define BG_MMDC_MPRDDQBY1DL_RD_DQ14_DEL(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_MMDC_MPRDDQBY1DL_RD_DQ14_DEL) >> BP_MMDC_MPRDDQBY1DL_RD_DQ14_DEL)

//! @brief Format value for bitfield MMDC_MPRDDQBY1DL_RD_DQ14_DEL.
#define BF_MMDC_MPRDDQBY1DL_RD_DQ14_DEL(v)   ((__REG_VALUE_TYPE((v), reg32_t) << BP_MMDC_MPRDDQBY1DL_RD_DQ14_DEL) & BM_MMDC_MPRDDQBY1DL_RD_DQ14_DEL)

#ifndef __LANGUAGE_ASM__
//! @brief Set the RD_DQ14_DEL field to a new value.
#define BW_MMDC_MPRDDQBY1DL_RD_DQ14_DEL(v)   (HW_MMDC_MPRDDQBY1DL_WR((HW_MMDC_MPRDDQBY1DL_RD() & ~BM_MMDC_MPRDDQBY1DL_RD_DQ14_DEL) | BF_MMDC_MPRDDQBY1DL_RD_DQ14_DEL(v)))
#endif


/* --- Register HW_MMDC_MPRDDQBY1DL, field RD_DQ15_DEL[30:28] (RW)
 *
 * Read dqs1 to dq15 delay fine-tuning. This field holds the number of delay units that are added to
 * dq15 relative to dqs1.
 *
 * Values:
 * 000 - No change in dq15 delay
 * 001 - Add dq15 delay of 1 delay unit
 * 010 - Add dq15 delay of 2 delay units.
 * 011 - Add dq15 delay of 3 delay units.
 * 100 - Add dq15 delay of 4 delay units.
 * 101 - Add dq15 delay of 5 delay units.
 * 110 - Add dq15 delay of 6 delay units.
 * 111 - Add dq15 delay of 7 delay units.
 */

#define BP_MMDC_MPRDDQBY1DL_RD_DQ15_DEL      (28)      //!< Bit position for MMDC_MPRDDQBY1DL_RD_DQ15_DEL.
#define BM_MMDC_MPRDDQBY1DL_RD_DQ15_DEL      (0x70000000)  //!< Bit mask for MMDC_MPRDDQBY1DL_RD_DQ15_DEL.

//! @brief Get value of MMDC_MPRDDQBY1DL_RD_DQ15_DEL from a register value.
#define BG_MMDC_MPRDDQBY1DL_RD_DQ15_DEL(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_MMDC_MPRDDQBY1DL_RD_DQ15_DEL) >> BP_MMDC_MPRDDQBY1DL_RD_DQ15_DEL)

//! @brief Format value for bitfield MMDC_MPRDDQBY1DL_RD_DQ15_DEL.
#define BF_MMDC_MPRDDQBY1DL_RD_DQ15_DEL(v)   ((__REG_VALUE_TYPE((v), reg32_t) << BP_MMDC_MPRDDQBY1DL_RD_DQ15_DEL) & BM_MMDC_MPRDDQBY1DL_RD_DQ15_DEL)

#ifndef __LANGUAGE_ASM__
//! @brief Set the RD_DQ15_DEL field to a new value.
#define BW_MMDC_MPRDDQBY1DL_RD_DQ15_DEL(v)   (HW_MMDC_MPRDDQBY1DL_WR((HW_MMDC_MPRDDQBY1DL_RD() & ~BM_MMDC_MPRDDQBY1DL_RD_DQ15_DEL) | BF_MMDC_MPRDDQBY1DL_RD_DQ15_DEL(v)))
#endif


//-------------------------------------------------------------------------------------------
// HW_MMDC_MPRDDQBY2DL - MMDC PHY Read DQ Byte2 Delay Register
//-------------------------------------------------------------------------------------------

#ifndef __LANGUAGE_ASM__
/*!
 * @brief HW_MMDC_MPRDDQBY2DL - MMDC PHY Read DQ Byte2 Delay Register (RW)
 *
 * Reset value: 0x00000000
 *
 * This register is used to add fine-tuning adjustment to every bit in the read DQ byte2 relative to
 * the read DQS  Supported Mode Of Operations:  For Channel 0: All  For Channel 1: DDR3_x64,
 * LP2_2ch_x32
 */
typedef union _hw_mmdc_mprddqby2dl
{
    reg32_t U;
    struct _hw_mmdc_mprddqby2dl_bitfields
    {
        unsigned RD_DQ16_DEL : 3; //!< [2:0] Read dqs2 to dq16 delay fine-tuning.
        unsigned RESERVED0 : 1; //!< [3] Reserved
        unsigned RD_DQ17_DEL : 3; //!< [6:4] Read dqs2 to dq17 delay fine-tuning.
        unsigned RESERVED1 : 1; //!< [7] Reserved
        unsigned RD_DQ18_DEL : 3; //!< [10:8] Read dqs2 to dq18 delay fine-tuning.
        unsigned RESERVED2 : 1; //!< [11] Reserved
        unsigned RD_DQ19_DEL : 3; //!< [14:12] Read dqs2 to dq19 delay fine-tuning.
        unsigned RESERVED3 : 1; //!< [15] Reserved
        unsigned RD_DQ20_DEL : 3; //!< [18:16] Read dqs2 to dq20 delay fine-tuning.
        unsigned RESERVED4 : 1; //!< [19] Reserved
        unsigned RD_DQ21_DEL : 3; //!< [22:20] Read dqs2 to dq21 delay fine-tuning.
        unsigned RESERVED5 : 1; //!< [23] Reserved
        unsigned RD_DQ22_DEL : 3; //!< [26:24] Read dqs2 to dq22 delay fine-tuning.
        unsigned RESERVED6 : 1; //!< [27] Reserved
        unsigned RD_DQ23_DEL : 3; //!< [30:28] Read dqs2 to dq23 delay fine-tuning.
        unsigned RESERVED7 : 1; //!< [31] Reserved
    } B;
} hw_mmdc_mprddqby2dl_t;
#endif

/*
 * constants & macros for entire MMDC_MPRDDQBY2DL register
 */
#define HW_MMDC_MPRDDQBY2DL_ADDR      (REGS_MMDC_BASE + 0x824)

#ifndef __LANGUAGE_ASM__
#define HW_MMDC_MPRDDQBY2DL           (*(volatile hw_mmdc_mprddqby2dl_t *) HW_MMDC_MPRDDQBY2DL_ADDR)
#define HW_MMDC_MPRDDQBY2DL_RD()      (HW_MMDC_MPRDDQBY2DL.U)
#define HW_MMDC_MPRDDQBY2DL_WR(v)     (HW_MMDC_MPRDDQBY2DL.U = (v))
#define HW_MMDC_MPRDDQBY2DL_SET(v)    (HW_MMDC_MPRDDQBY2DL_WR(HW_MMDC_MPRDDQBY2DL_RD() |  (v)))
#define HW_MMDC_MPRDDQBY2DL_CLR(v)    (HW_MMDC_MPRDDQBY2DL_WR(HW_MMDC_MPRDDQBY2DL_RD() & ~(v)))
#define HW_MMDC_MPRDDQBY2DL_TOG(v)    (HW_MMDC_MPRDDQBY2DL_WR(HW_MMDC_MPRDDQBY2DL_RD() ^  (v)))
#endif

/*
 * constants & macros for individual MMDC_MPRDDQBY2DL bitfields
 */

/* --- Register HW_MMDC_MPRDDQBY2DL, field RD_DQ16_DEL[2:0] (RW)
 *
 * Read dqs2 to dq16 delay fine-tuning. This field holds the number of delay units that are added to
 * dq16 relative to dqs2.
 *
 * Values:
 * 000 - No change in dq16 delay
 * 001 - Add dq16 delay of 1 delay unit
 * 010 - Add dq16 delay of 2 delay units.
 * 011 - Add dq16 delay of 3 delay units.
 * 100 - Add dq16 delay of 4 delay units.
 * 101 - Add dq16 delay of 5 delay units.
 * 110 - Add dq16 delay of 6 delay units.
 * 111 - Add dq16 delay of 7 delay units.
 */

#define BP_MMDC_MPRDDQBY2DL_RD_DQ16_DEL      (0)      //!< Bit position for MMDC_MPRDDQBY2DL_RD_DQ16_DEL.
#define BM_MMDC_MPRDDQBY2DL_RD_DQ16_DEL      (0x00000007)  //!< Bit mask for MMDC_MPRDDQBY2DL_RD_DQ16_DEL.

//! @brief Get value of MMDC_MPRDDQBY2DL_RD_DQ16_DEL from a register value.
#define BG_MMDC_MPRDDQBY2DL_RD_DQ16_DEL(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_MMDC_MPRDDQBY2DL_RD_DQ16_DEL) >> BP_MMDC_MPRDDQBY2DL_RD_DQ16_DEL)

//! @brief Format value for bitfield MMDC_MPRDDQBY2DL_RD_DQ16_DEL.
#define BF_MMDC_MPRDDQBY2DL_RD_DQ16_DEL(v)   ((__REG_VALUE_TYPE((v), reg32_t) << BP_MMDC_MPRDDQBY2DL_RD_DQ16_DEL) & BM_MMDC_MPRDDQBY2DL_RD_DQ16_DEL)

#ifndef __LANGUAGE_ASM__
//! @brief Set the RD_DQ16_DEL field to a new value.
#define BW_MMDC_MPRDDQBY2DL_RD_DQ16_DEL(v)   (HW_MMDC_MPRDDQBY2DL_WR((HW_MMDC_MPRDDQBY2DL_RD() & ~BM_MMDC_MPRDDQBY2DL_RD_DQ16_DEL) | BF_MMDC_MPRDDQBY2DL_RD_DQ16_DEL(v)))
#endif


/* --- Register HW_MMDC_MPRDDQBY2DL, field RD_DQ17_DEL[6:4] (RW)
 *
 * Read dqs2 to dq17 delay fine-tuning. This field holds the number of delay units that are added to
 * dq17 relative to dqs2.
 *
 * Values:
 * 000 - No change in dq17 delay
 * 001 - Add dq17 delay of 1 delay unit
 * 010 - Add dq17 delay of 2 delay units.
 * 011 - Add dq17 delay of 3 delay units.
 * 100 - Add dq17 delay of 4 delay units.
 * 101 - Add dq17 delay of 5 delay units.
 * 110 - Add dq17 delay of 6 delay units.
 * 111 - Add dq17 delay of 7 delay units.
 */

#define BP_MMDC_MPRDDQBY2DL_RD_DQ17_DEL      (4)      //!< Bit position for MMDC_MPRDDQBY2DL_RD_DQ17_DEL.
#define BM_MMDC_MPRDDQBY2DL_RD_DQ17_DEL      (0x00000070)  //!< Bit mask for MMDC_MPRDDQBY2DL_RD_DQ17_DEL.

//! @brief Get value of MMDC_MPRDDQBY2DL_RD_DQ17_DEL from a register value.
#define BG_MMDC_MPRDDQBY2DL_RD_DQ17_DEL(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_MMDC_MPRDDQBY2DL_RD_DQ17_DEL) >> BP_MMDC_MPRDDQBY2DL_RD_DQ17_DEL)

//! @brief Format value for bitfield MMDC_MPRDDQBY2DL_RD_DQ17_DEL.
#define BF_MMDC_MPRDDQBY2DL_RD_DQ17_DEL(v)   ((__REG_VALUE_TYPE((v), reg32_t) << BP_MMDC_MPRDDQBY2DL_RD_DQ17_DEL) & BM_MMDC_MPRDDQBY2DL_RD_DQ17_DEL)

#ifndef __LANGUAGE_ASM__
//! @brief Set the RD_DQ17_DEL field to a new value.
#define BW_MMDC_MPRDDQBY2DL_RD_DQ17_DEL(v)   (HW_MMDC_MPRDDQBY2DL_WR((HW_MMDC_MPRDDQBY2DL_RD() & ~BM_MMDC_MPRDDQBY2DL_RD_DQ17_DEL) | BF_MMDC_MPRDDQBY2DL_RD_DQ17_DEL(v)))
#endif


/* --- Register HW_MMDC_MPRDDQBY2DL, field RD_DQ18_DEL[10:8] (RW)
 *
 * Read dqs2 to dq18 delay fine-tuning. This field holds the number of delay units that are added to
 * dq18 relative to dqs2.
 *
 * Values:
 * 000 - No change in dq18 delay
 * 001 - Add dq18 delay of 1 delay unit
 * 010 - Add dq18 delay of 2 delay units.
 * 011 - Add dq18 delay of 3 delay units.
 * 100 - Add dq18 delay of 4 delay units.
 * 101 - Add dq18 delay of 5 delay units.
 * 110 - Add dq18 delay of 6 delay units.
 * 111 - Add dq18 delay of 7 delay units.
 */

#define BP_MMDC_MPRDDQBY2DL_RD_DQ18_DEL      (8)      //!< Bit position for MMDC_MPRDDQBY2DL_RD_DQ18_DEL.
#define BM_MMDC_MPRDDQBY2DL_RD_DQ18_DEL      (0x00000700)  //!< Bit mask for MMDC_MPRDDQBY2DL_RD_DQ18_DEL.

//! @brief Get value of MMDC_MPRDDQBY2DL_RD_DQ18_DEL from a register value.
#define BG_MMDC_MPRDDQBY2DL_RD_DQ18_DEL(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_MMDC_MPRDDQBY2DL_RD_DQ18_DEL) >> BP_MMDC_MPRDDQBY2DL_RD_DQ18_DEL)

//! @brief Format value for bitfield MMDC_MPRDDQBY2DL_RD_DQ18_DEL.
#define BF_MMDC_MPRDDQBY2DL_RD_DQ18_DEL(v)   ((__REG_VALUE_TYPE((v), reg32_t) << BP_MMDC_MPRDDQBY2DL_RD_DQ18_DEL) & BM_MMDC_MPRDDQBY2DL_RD_DQ18_DEL)

#ifndef __LANGUAGE_ASM__
//! @brief Set the RD_DQ18_DEL field to a new value.
#define BW_MMDC_MPRDDQBY2DL_RD_DQ18_DEL(v)   (HW_MMDC_MPRDDQBY2DL_WR((HW_MMDC_MPRDDQBY2DL_RD() & ~BM_MMDC_MPRDDQBY2DL_RD_DQ18_DEL) | BF_MMDC_MPRDDQBY2DL_RD_DQ18_DEL(v)))
#endif


/* --- Register HW_MMDC_MPRDDQBY2DL, field RD_DQ19_DEL[14:12] (RW)
 *
 * Read dqs2 to dq19 delay fine-tuning. This field holds the number of delay units that are added to
 * dq19 relative to dqs2.
 *
 * Values:
 * 000 - No change in dq19 delay
 * 001 - Add dq19 delay of 1 delay unit
 * 010 - Add dq19 delay of 2 delay units.
 * 011 - Add dq19 delay of 3 delay units.
 * 100 - Add dq19 delay of 4 delay units.
 * 101 - Add dq19 delay of 5 delay units.
 * 110 - Add dq19 delay of 6 delay units.
 * 111 - Add dq19 delay of 7 delay units.
 */

#define BP_MMDC_MPRDDQBY2DL_RD_DQ19_DEL      (12)      //!< Bit position for MMDC_MPRDDQBY2DL_RD_DQ19_DEL.
#define BM_MMDC_MPRDDQBY2DL_RD_DQ19_DEL      (0x00007000)  //!< Bit mask for MMDC_MPRDDQBY2DL_RD_DQ19_DEL.

//! @brief Get value of MMDC_MPRDDQBY2DL_RD_DQ19_DEL from a register value.
#define BG_MMDC_MPRDDQBY2DL_RD_DQ19_DEL(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_MMDC_MPRDDQBY2DL_RD_DQ19_DEL) >> BP_MMDC_MPRDDQBY2DL_RD_DQ19_DEL)

//! @brief Format value for bitfield MMDC_MPRDDQBY2DL_RD_DQ19_DEL.
#define BF_MMDC_MPRDDQBY2DL_RD_DQ19_DEL(v)   ((__REG_VALUE_TYPE((v), reg32_t) << BP_MMDC_MPRDDQBY2DL_RD_DQ19_DEL) & BM_MMDC_MPRDDQBY2DL_RD_DQ19_DEL)

#ifndef __LANGUAGE_ASM__
//! @brief Set the RD_DQ19_DEL field to a new value.
#define BW_MMDC_MPRDDQBY2DL_RD_DQ19_DEL(v)   (HW_MMDC_MPRDDQBY2DL_WR((HW_MMDC_MPRDDQBY2DL_RD() & ~BM_MMDC_MPRDDQBY2DL_RD_DQ19_DEL) | BF_MMDC_MPRDDQBY2DL_RD_DQ19_DEL(v)))
#endif


/* --- Register HW_MMDC_MPRDDQBY2DL, field RD_DQ20_DEL[18:16] (RW)
 *
 * Read dqs2 to dq20 delay fine-tuning. This field holds the number of delay units that are added to
 * dq20 relative to dqs2.
 *
 * Values:
 * 000 - No change in dq20 delay
 * 001 - Add dq20 delay of 1 delay unit
 * 010 - Add dq20 delay of 2 delay units.
 * 011 - Add dq20 delay of 3 delay units.
 * 100 - Add dq20 delay of 4 delay units.
 * 101 - Add dq20 delay of 5 delay units.
 * 110 - Add dq20 delay of 6 delay units.
 * 111 - Add dq20 delay of 7 delay units.
 */

#define BP_MMDC_MPRDDQBY2DL_RD_DQ20_DEL      (16)      //!< Bit position for MMDC_MPRDDQBY2DL_RD_DQ20_DEL.
#define BM_MMDC_MPRDDQBY2DL_RD_DQ20_DEL      (0x00070000)  //!< Bit mask for MMDC_MPRDDQBY2DL_RD_DQ20_DEL.

//! @brief Get value of MMDC_MPRDDQBY2DL_RD_DQ20_DEL from a register value.
#define BG_MMDC_MPRDDQBY2DL_RD_DQ20_DEL(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_MMDC_MPRDDQBY2DL_RD_DQ20_DEL) >> BP_MMDC_MPRDDQBY2DL_RD_DQ20_DEL)

//! @brief Format value for bitfield MMDC_MPRDDQBY2DL_RD_DQ20_DEL.
#define BF_MMDC_MPRDDQBY2DL_RD_DQ20_DEL(v)   ((__REG_VALUE_TYPE((v), reg32_t) << BP_MMDC_MPRDDQBY2DL_RD_DQ20_DEL) & BM_MMDC_MPRDDQBY2DL_RD_DQ20_DEL)

#ifndef __LANGUAGE_ASM__
//! @brief Set the RD_DQ20_DEL field to a new value.
#define BW_MMDC_MPRDDQBY2DL_RD_DQ20_DEL(v)   (HW_MMDC_MPRDDQBY2DL_WR((HW_MMDC_MPRDDQBY2DL_RD() & ~BM_MMDC_MPRDDQBY2DL_RD_DQ20_DEL) | BF_MMDC_MPRDDQBY2DL_RD_DQ20_DEL(v)))
#endif


/* --- Register HW_MMDC_MPRDDQBY2DL, field RD_DQ21_DEL[22:20] (RW)
 *
 * Read dqs2 to dq21 delay fine-tuning. This field holds the number of delay units that are added to
 * dq21 relative to dqs2.
 *
 * Values:
 * 000 - No change in dq21 delay
 * 001 - Add dq21 delay of 1 delay unit
 * 010 - Add dq21 delay of 2 delay units.
 * 011 - Add dq21 delay of 3 delay units.
 * 100 - Add dq21 delay of 4 delay units.
 * 101 - Add dq21 delay of 5 delay units.
 * 110 - Add dq21 delay of 6 delay units.
 * 111 - Add dq21 delay of 7 delay units.
 */

#define BP_MMDC_MPRDDQBY2DL_RD_DQ21_DEL      (20)      //!< Bit position for MMDC_MPRDDQBY2DL_RD_DQ21_DEL.
#define BM_MMDC_MPRDDQBY2DL_RD_DQ21_DEL      (0x00700000)  //!< Bit mask for MMDC_MPRDDQBY2DL_RD_DQ21_DEL.

//! @brief Get value of MMDC_MPRDDQBY2DL_RD_DQ21_DEL from a register value.
#define BG_MMDC_MPRDDQBY2DL_RD_DQ21_DEL(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_MMDC_MPRDDQBY2DL_RD_DQ21_DEL) >> BP_MMDC_MPRDDQBY2DL_RD_DQ21_DEL)

//! @brief Format value for bitfield MMDC_MPRDDQBY2DL_RD_DQ21_DEL.
#define BF_MMDC_MPRDDQBY2DL_RD_DQ21_DEL(v)   ((__REG_VALUE_TYPE((v), reg32_t) << BP_MMDC_MPRDDQBY2DL_RD_DQ21_DEL) & BM_MMDC_MPRDDQBY2DL_RD_DQ21_DEL)

#ifndef __LANGUAGE_ASM__
//! @brief Set the RD_DQ21_DEL field to a new value.
#define BW_MMDC_MPRDDQBY2DL_RD_DQ21_DEL(v)   (HW_MMDC_MPRDDQBY2DL_WR((HW_MMDC_MPRDDQBY2DL_RD() & ~BM_MMDC_MPRDDQBY2DL_RD_DQ21_DEL) | BF_MMDC_MPRDDQBY2DL_RD_DQ21_DEL(v)))
#endif


/* --- Register HW_MMDC_MPRDDQBY2DL, field RD_DQ22_DEL[26:24] (RW)
 *
 * Read dqs2 to dq22 delay fine-tuning. This field holds the number of delay units that are added to
 * dq22 relative to dqs2.
 *
 * Values:
 * 000 - No change in dq22 delay
 * 001 - Add dq22 delay of 1 delay unit
 * 010 - Add dq22 delay of 2 delay units.
 * 011 - Add dq22 delay of 3 delay units.
 * 100 - Add dq22 delay of 4 delay units.
 * 101 - Add dq22 delay of 5 delay units.
 * 110 - Add dq22 delay of 6 delay units.
 * 111 - Add dq22 delay of 7 delay units.
 */

#define BP_MMDC_MPRDDQBY2DL_RD_DQ22_DEL      (24)      //!< Bit position for MMDC_MPRDDQBY2DL_RD_DQ22_DEL.
#define BM_MMDC_MPRDDQBY2DL_RD_DQ22_DEL      (0x07000000)  //!< Bit mask for MMDC_MPRDDQBY2DL_RD_DQ22_DEL.

//! @brief Get value of MMDC_MPRDDQBY2DL_RD_DQ22_DEL from a register value.
#define BG_MMDC_MPRDDQBY2DL_RD_DQ22_DEL(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_MMDC_MPRDDQBY2DL_RD_DQ22_DEL) >> BP_MMDC_MPRDDQBY2DL_RD_DQ22_DEL)

//! @brief Format value for bitfield MMDC_MPRDDQBY2DL_RD_DQ22_DEL.
#define BF_MMDC_MPRDDQBY2DL_RD_DQ22_DEL(v)   ((__REG_VALUE_TYPE((v), reg32_t) << BP_MMDC_MPRDDQBY2DL_RD_DQ22_DEL) & BM_MMDC_MPRDDQBY2DL_RD_DQ22_DEL)

#ifndef __LANGUAGE_ASM__
//! @brief Set the RD_DQ22_DEL field to a new value.
#define BW_MMDC_MPRDDQBY2DL_RD_DQ22_DEL(v)   (HW_MMDC_MPRDDQBY2DL_WR((HW_MMDC_MPRDDQBY2DL_RD() & ~BM_MMDC_MPRDDQBY2DL_RD_DQ22_DEL) | BF_MMDC_MPRDDQBY2DL_RD_DQ22_DEL(v)))
#endif


/* --- Register HW_MMDC_MPRDDQBY2DL, field RD_DQ23_DEL[30:28] (RW)
 *
 * Read dqs2 to dq23 delay fine-tuning. This field holds the number of delay units that are added to
 * dq23 relative to dqs2.
 *
 * Values:
 * 000 - No change in dq23 delay
 * 001 - Add dq23 delay of 1 delay unit
 * 010 - Add dq23 delay of 2 delay units.
 * 011 - Add dq23 delay of 3 delay units.
 * 100 - Add dq23 delay of 4 delay units.
 * 101 - Add dq23 delay of 5 delay units.
 * 110 - Add dq23 delay of 6 delay units.
 * 111 - Add dq23 delay of 7 delay units.
 */

#define BP_MMDC_MPRDDQBY2DL_RD_DQ23_DEL      (28)      //!< Bit position for MMDC_MPRDDQBY2DL_RD_DQ23_DEL.
#define BM_MMDC_MPRDDQBY2DL_RD_DQ23_DEL      (0x70000000)  //!< Bit mask for MMDC_MPRDDQBY2DL_RD_DQ23_DEL.

//! @brief Get value of MMDC_MPRDDQBY2DL_RD_DQ23_DEL from a register value.
#define BG_MMDC_MPRDDQBY2DL_RD_DQ23_DEL(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_MMDC_MPRDDQBY2DL_RD_DQ23_DEL) >> BP_MMDC_MPRDDQBY2DL_RD_DQ23_DEL)

//! @brief Format value for bitfield MMDC_MPRDDQBY2DL_RD_DQ23_DEL.
#define BF_MMDC_MPRDDQBY2DL_RD_DQ23_DEL(v)   ((__REG_VALUE_TYPE((v), reg32_t) << BP_MMDC_MPRDDQBY2DL_RD_DQ23_DEL) & BM_MMDC_MPRDDQBY2DL_RD_DQ23_DEL)

#ifndef __LANGUAGE_ASM__
//! @brief Set the RD_DQ23_DEL field to a new value.
#define BW_MMDC_MPRDDQBY2DL_RD_DQ23_DEL(v)   (HW_MMDC_MPRDDQBY2DL_WR((HW_MMDC_MPRDDQBY2DL_RD() & ~BM_MMDC_MPRDDQBY2DL_RD_DQ23_DEL) | BF_MMDC_MPRDDQBY2DL_RD_DQ23_DEL(v)))
#endif


//-------------------------------------------------------------------------------------------
// HW_MMDC_MPRDDQBY3DL - MMDC PHY Read DQ Byte3 Delay Register
//-------------------------------------------------------------------------------------------

#ifndef __LANGUAGE_ASM__
/*!
 * @brief HW_MMDC_MPRDDQBY3DL - MMDC PHY Read DQ Byte3 Delay Register (RW)
 *
 * Reset value: 0x00000000
 *
 * This register is used to add fine-tuning adjustment to every bit in the read DQ byte3 relative to
 * the read DQS.  The bit assignments and the bit field descriptions for the register are shown
 * below.  Supported Mode Of Operations:  For Channel 0: All  For Channel 1: DDR3_x64, LP2_2ch_x32
 */
typedef union _hw_mmdc_mprddqby3dl
{
    reg32_t U;
    struct _hw_mmdc_mprddqby3dl_bitfields
    {
        unsigned RD_DQ24_DEL : 3; //!< [2:0] Read dqs3 to dq24 delay fine-tuning.
        unsigned RESERVED0 : 1; //!< [3] Reserved
        unsigned RD_DQ25_DEL : 3; //!< [6:4] Read dqs3 to dq25 delay fine-tuning.
        unsigned RESERVED1 : 1; //!< [7] Reserved
        unsigned RD_DQ26_DEL : 3; //!< [10:8] Read dqs3 to dq26 delay fine-tuning.
        unsigned RESERVED2 : 1; //!< [11] Reserved
        unsigned RD_DQ27_DEL : 3; //!< [14:12] Read dqs3 to dq27 delay fine-tuning.
        unsigned RESERVED3 : 1; //!< [15] Reserved
        unsigned RD_DQ28_DEL : 3; //!< [18:16] Read dqs3 to dq28 delay fine-tuning.
        unsigned RESERVED4 : 1; //!< [19] Reserved
        unsigned RD_DQ29_DEL : 3; //!< [22:20] Read dqs3 to dq29 delay fine-tuning.
        unsigned RESERVED5 : 1; //!< [23] Reserved
        unsigned RD_DQ30_DEL : 3; //!< [26:24] Read dqs3 to dq30 delay fine-tuning.
        unsigned RESERVED6 : 1; //!< [27] Reserved
        unsigned RD_DQ31_DEL : 3; //!< [30:28] Read dqs3 to dq31 delay fine-tuning.
        unsigned RESERVED7 : 1; //!< [31] Reserved
    } B;
} hw_mmdc_mprddqby3dl_t;
#endif

/*
 * constants & macros for entire MMDC_MPRDDQBY3DL register
 */
#define HW_MMDC_MPRDDQBY3DL_ADDR      (REGS_MMDC_BASE + 0x828)

#ifndef __LANGUAGE_ASM__
#define HW_MMDC_MPRDDQBY3DL           (*(volatile hw_mmdc_mprddqby3dl_t *) HW_MMDC_MPRDDQBY3DL_ADDR)
#define HW_MMDC_MPRDDQBY3DL_RD()      (HW_MMDC_MPRDDQBY3DL.U)
#define HW_MMDC_MPRDDQBY3DL_WR(v)     (HW_MMDC_MPRDDQBY3DL.U = (v))
#define HW_MMDC_MPRDDQBY3DL_SET(v)    (HW_MMDC_MPRDDQBY3DL_WR(HW_MMDC_MPRDDQBY3DL_RD() |  (v)))
#define HW_MMDC_MPRDDQBY3DL_CLR(v)    (HW_MMDC_MPRDDQBY3DL_WR(HW_MMDC_MPRDDQBY3DL_RD() & ~(v)))
#define HW_MMDC_MPRDDQBY3DL_TOG(v)    (HW_MMDC_MPRDDQBY3DL_WR(HW_MMDC_MPRDDQBY3DL_RD() ^  (v)))
#endif

/*
 * constants & macros for individual MMDC_MPRDDQBY3DL bitfields
 */

/* --- Register HW_MMDC_MPRDDQBY3DL, field RD_DQ24_DEL[2:0] (RW)
 *
 * Read dqs3 to dq24 delay fine-tuning. This field holds the number of delay units that are added to
 * dq24 relative to dqs3.
 *
 * Values:
 * 000 - No change in dq24 delay
 * 001 - Add dq24 delay of 1 delay unit
 * 010 - Add dq24 delay of 2 delay units.
 * 011 - Add dq24 delay of 3 delay units.
 * 100 - Add dq24 delay of 4 delay units.
 * 101 - Add dq24 delay of 5 delay units.
 * 110 - Add dq24 delay of 6 delay units.
 * 111 - Add dq24 delay of 7 delay units.
 */

#define BP_MMDC_MPRDDQBY3DL_RD_DQ24_DEL      (0)      //!< Bit position for MMDC_MPRDDQBY3DL_RD_DQ24_DEL.
#define BM_MMDC_MPRDDQBY3DL_RD_DQ24_DEL      (0x00000007)  //!< Bit mask for MMDC_MPRDDQBY3DL_RD_DQ24_DEL.

//! @brief Get value of MMDC_MPRDDQBY3DL_RD_DQ24_DEL from a register value.
#define BG_MMDC_MPRDDQBY3DL_RD_DQ24_DEL(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_MMDC_MPRDDQBY3DL_RD_DQ24_DEL) >> BP_MMDC_MPRDDQBY3DL_RD_DQ24_DEL)

//! @brief Format value for bitfield MMDC_MPRDDQBY3DL_RD_DQ24_DEL.
#define BF_MMDC_MPRDDQBY3DL_RD_DQ24_DEL(v)   ((__REG_VALUE_TYPE((v), reg32_t) << BP_MMDC_MPRDDQBY3DL_RD_DQ24_DEL) & BM_MMDC_MPRDDQBY3DL_RD_DQ24_DEL)

#ifndef __LANGUAGE_ASM__
//! @brief Set the RD_DQ24_DEL field to a new value.
#define BW_MMDC_MPRDDQBY3DL_RD_DQ24_DEL(v)   (HW_MMDC_MPRDDQBY3DL_WR((HW_MMDC_MPRDDQBY3DL_RD() & ~BM_MMDC_MPRDDQBY3DL_RD_DQ24_DEL) | BF_MMDC_MPRDDQBY3DL_RD_DQ24_DEL(v)))
#endif


/* --- Register HW_MMDC_MPRDDQBY3DL, field RD_DQ25_DEL[6:4] (RW)
 *
 * Read dqs3 to dq25 delay fine-tuning. This field holds the number of delay units that are added to
 * dq25 relative to dqs3.
 *
 * Values:
 * 000 - No change in dq25 delay
 * 001 - Add dq25 delay of 1 delay unit
 * 010 - Add dq25 delay of 2 delay units.
 * 011 - Add dq25 delay of 3 delay units.
 * 100 - Add dq25 delay of 4 delay units.
 * 101 - Add dq25 delay of 5 delay units.
 * 110 - Add dq25 delay of 6 delay units.
 * 111 - Add dq25 delay of 7 delay units.
 */

#define BP_MMDC_MPRDDQBY3DL_RD_DQ25_DEL      (4)      //!< Bit position for MMDC_MPRDDQBY3DL_RD_DQ25_DEL.
#define BM_MMDC_MPRDDQBY3DL_RD_DQ25_DEL      (0x00000070)  //!< Bit mask for MMDC_MPRDDQBY3DL_RD_DQ25_DEL.

//! @brief Get value of MMDC_MPRDDQBY3DL_RD_DQ25_DEL from a register value.
#define BG_MMDC_MPRDDQBY3DL_RD_DQ25_DEL(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_MMDC_MPRDDQBY3DL_RD_DQ25_DEL) >> BP_MMDC_MPRDDQBY3DL_RD_DQ25_DEL)

//! @brief Format value for bitfield MMDC_MPRDDQBY3DL_RD_DQ25_DEL.
#define BF_MMDC_MPRDDQBY3DL_RD_DQ25_DEL(v)   ((__REG_VALUE_TYPE((v), reg32_t) << BP_MMDC_MPRDDQBY3DL_RD_DQ25_DEL) & BM_MMDC_MPRDDQBY3DL_RD_DQ25_DEL)

#ifndef __LANGUAGE_ASM__
//! @brief Set the RD_DQ25_DEL field to a new value.
#define BW_MMDC_MPRDDQBY3DL_RD_DQ25_DEL(v)   (HW_MMDC_MPRDDQBY3DL_WR((HW_MMDC_MPRDDQBY3DL_RD() & ~BM_MMDC_MPRDDQBY3DL_RD_DQ25_DEL) | BF_MMDC_MPRDDQBY3DL_RD_DQ25_DEL(v)))
#endif


/* --- Register HW_MMDC_MPRDDQBY3DL, field RD_DQ26_DEL[10:8] (RW)
 *
 * Read dqs3 to dq26 delay fine-tuning. This field holds the number of delay units that are added to
 * dq26 relative to dqs3.
 *
 * Values:
 * 000 - No change in dq26 delay
 * 001 - Add dq26 delay of 1 delay unit
 * 010 - Add dq26 delay of 2 delay units.
 * 011 - Add dq26 delay of 3 delay units.
 * 100 - Add dq26 delay of 4 delay units.
 * 101 - Add dq26 delay of 5 delay units.
 * 110 - Add dq26 delay of 6 delay units.
 * 111 - Add dq26 delay of 7 delay units.
 */

#define BP_MMDC_MPRDDQBY3DL_RD_DQ26_DEL      (8)      //!< Bit position for MMDC_MPRDDQBY3DL_RD_DQ26_DEL.
#define BM_MMDC_MPRDDQBY3DL_RD_DQ26_DEL      (0x00000700)  //!< Bit mask for MMDC_MPRDDQBY3DL_RD_DQ26_DEL.

//! @brief Get value of MMDC_MPRDDQBY3DL_RD_DQ26_DEL from a register value.
#define BG_MMDC_MPRDDQBY3DL_RD_DQ26_DEL(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_MMDC_MPRDDQBY3DL_RD_DQ26_DEL) >> BP_MMDC_MPRDDQBY3DL_RD_DQ26_DEL)

//! @brief Format value for bitfield MMDC_MPRDDQBY3DL_RD_DQ26_DEL.
#define BF_MMDC_MPRDDQBY3DL_RD_DQ26_DEL(v)   ((__REG_VALUE_TYPE((v), reg32_t) << BP_MMDC_MPRDDQBY3DL_RD_DQ26_DEL) & BM_MMDC_MPRDDQBY3DL_RD_DQ26_DEL)

#ifndef __LANGUAGE_ASM__
//! @brief Set the RD_DQ26_DEL field to a new value.
#define BW_MMDC_MPRDDQBY3DL_RD_DQ26_DEL(v)   (HW_MMDC_MPRDDQBY3DL_WR((HW_MMDC_MPRDDQBY3DL_RD() & ~BM_MMDC_MPRDDQBY3DL_RD_DQ26_DEL) | BF_MMDC_MPRDDQBY3DL_RD_DQ26_DEL(v)))
#endif


/* --- Register HW_MMDC_MPRDDQBY3DL, field RD_DQ27_DEL[14:12] (RW)
 *
 * Read dqs3 to dq27 delay fine-tuning. This field holds the number of delay units that are added to
 * dq27 relative to dqs3.
 *
 * Values:
 * 000 - No change in dq27 delay
 * 001 - Add dq27 delay of 1 delay unit
 * 010 - Add dq27 delay of 2 delay units.
 * 011 - Add dq27 delay of 3 delay units.
 * 100 - Add dq27 delay of 4 delay units.
 * 101 - Add dq27 delay of 5 delay units.
 * 110 - Add dq27 delay of 6 delay units.
 * 111 - Add dq27 delay of 7 delay units.
 */

#define BP_MMDC_MPRDDQBY3DL_RD_DQ27_DEL      (12)      //!< Bit position for MMDC_MPRDDQBY3DL_RD_DQ27_DEL.
#define BM_MMDC_MPRDDQBY3DL_RD_DQ27_DEL      (0x00007000)  //!< Bit mask for MMDC_MPRDDQBY3DL_RD_DQ27_DEL.

//! @brief Get value of MMDC_MPRDDQBY3DL_RD_DQ27_DEL from a register value.
#define BG_MMDC_MPRDDQBY3DL_RD_DQ27_DEL(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_MMDC_MPRDDQBY3DL_RD_DQ27_DEL) >> BP_MMDC_MPRDDQBY3DL_RD_DQ27_DEL)

//! @brief Format value for bitfield MMDC_MPRDDQBY3DL_RD_DQ27_DEL.
#define BF_MMDC_MPRDDQBY3DL_RD_DQ27_DEL(v)   ((__REG_VALUE_TYPE((v), reg32_t) << BP_MMDC_MPRDDQBY3DL_RD_DQ27_DEL) & BM_MMDC_MPRDDQBY3DL_RD_DQ27_DEL)

#ifndef __LANGUAGE_ASM__
//! @brief Set the RD_DQ27_DEL field to a new value.
#define BW_MMDC_MPRDDQBY3DL_RD_DQ27_DEL(v)   (HW_MMDC_MPRDDQBY3DL_WR((HW_MMDC_MPRDDQBY3DL_RD() & ~BM_MMDC_MPRDDQBY3DL_RD_DQ27_DEL) | BF_MMDC_MPRDDQBY3DL_RD_DQ27_DEL(v)))
#endif


/* --- Register HW_MMDC_MPRDDQBY3DL, field RD_DQ28_DEL[18:16] (RW)
 *
 * Read dqs3 to dq28 delay fine-tuning. This field holds the number of delay units that are added to
 * dq28 relative to dqs3.
 *
 * Values:
 * 000 - No change in dq28 delay
 * 001 - Add dq28 delay of 1 delay unit
 * 010 - Add dq28 delay of 2 delay units.
 * 011 - Add dq28 delay of 3 delay units.
 * 100 - Add dq28 delay of 4 delay units.
 * 101 - Add dq28 delay of 5 delay units.
 * 110 - Add dq28 delay of 6 delay units.
 * 111 - Add dq28 delay of 7 delay units.
 */

#define BP_MMDC_MPRDDQBY3DL_RD_DQ28_DEL      (16)      //!< Bit position for MMDC_MPRDDQBY3DL_RD_DQ28_DEL.
#define BM_MMDC_MPRDDQBY3DL_RD_DQ28_DEL      (0x00070000)  //!< Bit mask for MMDC_MPRDDQBY3DL_RD_DQ28_DEL.

//! @brief Get value of MMDC_MPRDDQBY3DL_RD_DQ28_DEL from a register value.
#define BG_MMDC_MPRDDQBY3DL_RD_DQ28_DEL(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_MMDC_MPRDDQBY3DL_RD_DQ28_DEL) >> BP_MMDC_MPRDDQBY3DL_RD_DQ28_DEL)

//! @brief Format value for bitfield MMDC_MPRDDQBY3DL_RD_DQ28_DEL.
#define BF_MMDC_MPRDDQBY3DL_RD_DQ28_DEL(v)   ((__REG_VALUE_TYPE((v), reg32_t) << BP_MMDC_MPRDDQBY3DL_RD_DQ28_DEL) & BM_MMDC_MPRDDQBY3DL_RD_DQ28_DEL)

#ifndef __LANGUAGE_ASM__
//! @brief Set the RD_DQ28_DEL field to a new value.
#define BW_MMDC_MPRDDQBY3DL_RD_DQ28_DEL(v)   (HW_MMDC_MPRDDQBY3DL_WR((HW_MMDC_MPRDDQBY3DL_RD() & ~BM_MMDC_MPRDDQBY3DL_RD_DQ28_DEL) | BF_MMDC_MPRDDQBY3DL_RD_DQ28_DEL(v)))
#endif


/* --- Register HW_MMDC_MPRDDQBY3DL, field RD_DQ29_DEL[22:20] (RW)
 *
 * Read dqs3 to dq29 delay fine-tuning. This field holds the number of delay units that are added to
 * dq29 relative to dqs3.
 *
 * Values:
 * 000 - No change in dq29 delay
 * 001 - Add dq29 delay of 1 delay unit
 * 010 - Add dq29 delay of 2 delay units.
 * 011 - Add dq29 delay of 3 delay units.
 * 100 - Add dq29 delay of 4 delay units.
 * 101 - Add dq29 delay of 5 delay units.
 * 110 - Add dq29 delay of 6 delay units.
 * 111 - Add dq29 delay of 7 delay units.
 */

#define BP_MMDC_MPRDDQBY3DL_RD_DQ29_DEL      (20)      //!< Bit position for MMDC_MPRDDQBY3DL_RD_DQ29_DEL.
#define BM_MMDC_MPRDDQBY3DL_RD_DQ29_DEL      (0x00700000)  //!< Bit mask for MMDC_MPRDDQBY3DL_RD_DQ29_DEL.

//! @brief Get value of MMDC_MPRDDQBY3DL_RD_DQ29_DEL from a register value.
#define BG_MMDC_MPRDDQBY3DL_RD_DQ29_DEL(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_MMDC_MPRDDQBY3DL_RD_DQ29_DEL) >> BP_MMDC_MPRDDQBY3DL_RD_DQ29_DEL)

//! @brief Format value for bitfield MMDC_MPRDDQBY3DL_RD_DQ29_DEL.
#define BF_MMDC_MPRDDQBY3DL_RD_DQ29_DEL(v)   ((__REG_VALUE_TYPE((v), reg32_t) << BP_MMDC_MPRDDQBY3DL_RD_DQ29_DEL) & BM_MMDC_MPRDDQBY3DL_RD_DQ29_DEL)

#ifndef __LANGUAGE_ASM__
//! @brief Set the RD_DQ29_DEL field to a new value.
#define BW_MMDC_MPRDDQBY3DL_RD_DQ29_DEL(v)   (HW_MMDC_MPRDDQBY3DL_WR((HW_MMDC_MPRDDQBY3DL_RD() & ~BM_MMDC_MPRDDQBY3DL_RD_DQ29_DEL) | BF_MMDC_MPRDDQBY3DL_RD_DQ29_DEL(v)))
#endif


/* --- Register HW_MMDC_MPRDDQBY3DL, field RD_DQ30_DEL[26:24] (RW)
 *
 * Read dqs3 to dq30 delay fine-tuning. This field holds the number of delay units that are added to
 * dq30 relative to dqs3.
 *
 * Values:
 * 000 - No change in dq30 delay
 * 001 - Add dq30 delay of 1 delay unit
 * 010 - Add dq30 delay of 2 delay units.
 * 011 - Add dq30 delay of 3 delay units.
 * 100 - Add dq30 delay of 4 delay units.
 * 101 - Add dq30 delay of 5 delay units.
 * 110 - Add dq30 delay of 6 delay units.
 * 111 - Add dq30 delay of 7 delay units.
 */

#define BP_MMDC_MPRDDQBY3DL_RD_DQ30_DEL      (24)      //!< Bit position for MMDC_MPRDDQBY3DL_RD_DQ30_DEL.
#define BM_MMDC_MPRDDQBY3DL_RD_DQ30_DEL      (0x07000000)  //!< Bit mask for MMDC_MPRDDQBY3DL_RD_DQ30_DEL.

//! @brief Get value of MMDC_MPRDDQBY3DL_RD_DQ30_DEL from a register value.
#define BG_MMDC_MPRDDQBY3DL_RD_DQ30_DEL(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_MMDC_MPRDDQBY3DL_RD_DQ30_DEL) >> BP_MMDC_MPRDDQBY3DL_RD_DQ30_DEL)

//! @brief Format value for bitfield MMDC_MPRDDQBY3DL_RD_DQ30_DEL.
#define BF_MMDC_MPRDDQBY3DL_RD_DQ30_DEL(v)   ((__REG_VALUE_TYPE((v), reg32_t) << BP_MMDC_MPRDDQBY3DL_RD_DQ30_DEL) & BM_MMDC_MPRDDQBY3DL_RD_DQ30_DEL)

#ifndef __LANGUAGE_ASM__
//! @brief Set the RD_DQ30_DEL field to a new value.
#define BW_MMDC_MPRDDQBY3DL_RD_DQ30_DEL(v)   (HW_MMDC_MPRDDQBY3DL_WR((HW_MMDC_MPRDDQBY3DL_RD() & ~BM_MMDC_MPRDDQBY3DL_RD_DQ30_DEL) | BF_MMDC_MPRDDQBY3DL_RD_DQ30_DEL(v)))
#endif


/* --- Register HW_MMDC_MPRDDQBY3DL, field RD_DQ31_DEL[30:28] (RW)
 *
 * Read dqs3 to dq31 delay fine-tuning. This field holds the number of delay units that are added to
 * dq31 relative to dqs3.
 *
 * Values:
 * 000 - No change in dq31 delay
 * 001 - Add dq31 delay of 1 delay unit
 * 010 - Add dq31 delay of 2 delay units.
 * 011 - Add dq31 delay of 3 delay units.
 * 100 - Add dq31 delay of 4 delay units.
 * 101 - Add dq31 delay of 5 delay units.
 * 110 - Add dq31 delay of 6 delay units.
 * 111 - Add dq31 delay of 7 delay units.
 */

#define BP_MMDC_MPRDDQBY3DL_RD_DQ31_DEL      (28)      //!< Bit position for MMDC_MPRDDQBY3DL_RD_DQ31_DEL.
#define BM_MMDC_MPRDDQBY3DL_RD_DQ31_DEL      (0x70000000)  //!< Bit mask for MMDC_MPRDDQBY3DL_RD_DQ31_DEL.

//! @brief Get value of MMDC_MPRDDQBY3DL_RD_DQ31_DEL from a register value.
#define BG_MMDC_MPRDDQBY3DL_RD_DQ31_DEL(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_MMDC_MPRDDQBY3DL_RD_DQ31_DEL) >> BP_MMDC_MPRDDQBY3DL_RD_DQ31_DEL)

//! @brief Format value for bitfield MMDC_MPRDDQBY3DL_RD_DQ31_DEL.
#define BF_MMDC_MPRDDQBY3DL_RD_DQ31_DEL(v)   ((__REG_VALUE_TYPE((v), reg32_t) << BP_MMDC_MPRDDQBY3DL_RD_DQ31_DEL) & BM_MMDC_MPRDDQBY3DL_RD_DQ31_DEL)

#ifndef __LANGUAGE_ASM__
//! @brief Set the RD_DQ31_DEL field to a new value.
#define BW_MMDC_MPRDDQBY3DL_RD_DQ31_DEL(v)   (HW_MMDC_MPRDDQBY3DL_WR((HW_MMDC_MPRDDQBY3DL_RD() & ~BM_MMDC_MPRDDQBY3DL_RD_DQ31_DEL) | BF_MMDC_MPRDDQBY3DL_RD_DQ31_DEL(v)))
#endif


//-------------------------------------------------------------------------------------------
// HW_MMDC_MPWRDQBY0DL - MMDC PHY Write DQ Byte0 Delay Register
//-------------------------------------------------------------------------------------------

#ifndef __LANGUAGE_ASM__
/*!
 * @brief HW_MMDC_MPWRDQBY0DL - MMDC PHY Write DQ Byte0 Delay Register (RW)
 *
 * Reset value: 0x00000000
 *
 * This register is used to add fine-tuning adjustment to every bit in the write DQ byte0 relative
 * to the write DQS  Supported Mode Of Operations:  For Channel 0: All  For Channel 1: DDR3_x64,
 * LP2_2ch_x16, LP2_2ch_x32
 */
typedef union _hw_mmdc_mpwrdqby0dl
{
    reg32_t U;
    struct _hw_mmdc_mpwrdqby0dl_bitfields
    {
        unsigned WR_DQ0_DEL : 2; //!< [1:0] Write dq0 delay fine-tuning.
        unsigned RESERVED0 : 2; //!< [3:2] Reserved
        unsigned WR_DQ1_DEL : 2; //!< [5:4] Write dq1 delay fine-tuning.
        unsigned RESERVED1 : 2; //!< [7:6] Reserved
        unsigned WR_DQ2_DEL : 2; //!< [9:8] Write dq2 delay fine-tuning.
        unsigned RESERVED2 : 2; //!< [11:10] Reserved
        unsigned WR_DQ3_DEL : 2; //!< [13:12] Write dq3 delay fine-tuning.
        unsigned RESERVED3 : 2; //!< [15:14] Reserved
        unsigned WR_DQ4_DEL : 2; //!< [17:16] Write dq4 delay fine-tuning.
        unsigned RESERVED4 : 2; //!< [19:18] Reserved
        unsigned WR_DQ5_DEL : 2; //!< [21:20] Write dq5 delay fine-tuning.
        unsigned RESERVED5 : 2; //!< [23:22] Reserved
        unsigned WR_DQ6_DEL : 2; //!< [25:24] Write dq6 delay fine-tuning.
        unsigned RESERVED6 : 2; //!< [27:26] Reserved
        unsigned WR_DQ7_DEL : 2; //!< [29:28] Write dq7 delay fine-tuning.
        unsigned WR_DM0_DEL : 2; //!< [31:30] Write dm0 delay fine-tuning.
    } B;
} hw_mmdc_mpwrdqby0dl_t;
#endif

/*
 * constants & macros for entire MMDC_MPWRDQBY0DL register
 */
#define HW_MMDC_MPWRDQBY0DL_ADDR      (REGS_MMDC_BASE + 0x82c)

#ifndef __LANGUAGE_ASM__
#define HW_MMDC_MPWRDQBY0DL           (*(volatile hw_mmdc_mpwrdqby0dl_t *) HW_MMDC_MPWRDQBY0DL_ADDR)
#define HW_MMDC_MPWRDQBY0DL_RD()      (HW_MMDC_MPWRDQBY0DL.U)
#define HW_MMDC_MPWRDQBY0DL_WR(v)     (HW_MMDC_MPWRDQBY0DL.U = (v))
#define HW_MMDC_MPWRDQBY0DL_SET(v)    (HW_MMDC_MPWRDQBY0DL_WR(HW_MMDC_MPWRDQBY0DL_RD() |  (v)))
#define HW_MMDC_MPWRDQBY0DL_CLR(v)    (HW_MMDC_MPWRDQBY0DL_WR(HW_MMDC_MPWRDQBY0DL_RD() & ~(v)))
#define HW_MMDC_MPWRDQBY0DL_TOG(v)    (HW_MMDC_MPWRDQBY0DL_WR(HW_MMDC_MPWRDQBY0DL_RD() ^  (v)))
#endif

/*
 * constants & macros for individual MMDC_MPWRDQBY0DL bitfields
 */

/* --- Register HW_MMDC_MPWRDQBY0DL, field WR_DQ0_DEL[1:0] (RW)
 *
 * Write dq0 delay fine-tuning. This field holds the number of delay units that are added to dq0
 * relative to dqs0.
 *
 * Values:
 * 00 - No change in dq0 delay
 * 01 - Add dq0 delay of 1 delay unit.
 * 10 - Add dq0 delay of 2 delay units.
 * 11 - Add dq0 delay of 3 delay units.
 */

#define BP_MMDC_MPWRDQBY0DL_WR_DQ0_DEL      (0)      //!< Bit position for MMDC_MPWRDQBY0DL_WR_DQ0_DEL.
#define BM_MMDC_MPWRDQBY0DL_WR_DQ0_DEL      (0x00000003)  //!< Bit mask for MMDC_MPWRDQBY0DL_WR_DQ0_DEL.

//! @brief Get value of MMDC_MPWRDQBY0DL_WR_DQ0_DEL from a register value.
#define BG_MMDC_MPWRDQBY0DL_WR_DQ0_DEL(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_MMDC_MPWRDQBY0DL_WR_DQ0_DEL) >> BP_MMDC_MPWRDQBY0DL_WR_DQ0_DEL)

//! @brief Format value for bitfield MMDC_MPWRDQBY0DL_WR_DQ0_DEL.
#define BF_MMDC_MPWRDQBY0DL_WR_DQ0_DEL(v)   ((__REG_VALUE_TYPE((v), reg32_t) << BP_MMDC_MPWRDQBY0DL_WR_DQ0_DEL) & BM_MMDC_MPWRDQBY0DL_WR_DQ0_DEL)

#ifndef __LANGUAGE_ASM__
//! @brief Set the WR_DQ0_DEL field to a new value.
#define BW_MMDC_MPWRDQBY0DL_WR_DQ0_DEL(v)   (HW_MMDC_MPWRDQBY0DL_WR((HW_MMDC_MPWRDQBY0DL_RD() & ~BM_MMDC_MPWRDQBY0DL_WR_DQ0_DEL) | BF_MMDC_MPWRDQBY0DL_WR_DQ0_DEL(v)))
#endif


/* --- Register HW_MMDC_MPWRDQBY0DL, field WR_DQ1_DEL[5:4] (RW)
 *
 * Write dq1 delay fine-tuning. This field holds the number of delay units that are added to dq1
 * relative to dqs0.
 *
 * Values:
 * 00 - No change in dq1 delay
 * 01 - Add dq1 delay of 1 delay unit.
 * 10 - Add dq1 delay of 2 delay units.
 * 11 - Add dq1 delay of 3 delay units.
 */

#define BP_MMDC_MPWRDQBY0DL_WR_DQ1_DEL      (4)      //!< Bit position for MMDC_MPWRDQBY0DL_WR_DQ1_DEL.
#define BM_MMDC_MPWRDQBY0DL_WR_DQ1_DEL      (0x00000030)  //!< Bit mask for MMDC_MPWRDQBY0DL_WR_DQ1_DEL.

//! @brief Get value of MMDC_MPWRDQBY0DL_WR_DQ1_DEL from a register value.
#define BG_MMDC_MPWRDQBY0DL_WR_DQ1_DEL(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_MMDC_MPWRDQBY0DL_WR_DQ1_DEL) >> BP_MMDC_MPWRDQBY0DL_WR_DQ1_DEL)

//! @brief Format value for bitfield MMDC_MPWRDQBY0DL_WR_DQ1_DEL.
#define BF_MMDC_MPWRDQBY0DL_WR_DQ1_DEL(v)   ((__REG_VALUE_TYPE((v), reg32_t) << BP_MMDC_MPWRDQBY0DL_WR_DQ1_DEL) & BM_MMDC_MPWRDQBY0DL_WR_DQ1_DEL)

#ifndef __LANGUAGE_ASM__
//! @brief Set the WR_DQ1_DEL field to a new value.
#define BW_MMDC_MPWRDQBY0DL_WR_DQ1_DEL(v)   (HW_MMDC_MPWRDQBY0DL_WR((HW_MMDC_MPWRDQBY0DL_RD() & ~BM_MMDC_MPWRDQBY0DL_WR_DQ1_DEL) | BF_MMDC_MPWRDQBY0DL_WR_DQ1_DEL(v)))
#endif


/* --- Register HW_MMDC_MPWRDQBY0DL, field WR_DQ2_DEL[9:8] (RW)
 *
 * Write dq2 delay fine-tuning. This field holds the number of delay units that are added to dq2
 * relative to dqs0.
 *
 * Values:
 * 00 - No change in dq2 delay
 * 01 - Add dq2 delay of 1 delay unit.
 * 10 - Add dq2 delay of 2 delay units.
 * 11 - Add dq2 delay of 3 delay units.
 */

#define BP_MMDC_MPWRDQBY0DL_WR_DQ2_DEL      (8)      //!< Bit position for MMDC_MPWRDQBY0DL_WR_DQ2_DEL.
#define BM_MMDC_MPWRDQBY0DL_WR_DQ2_DEL      (0x00000300)  //!< Bit mask for MMDC_MPWRDQBY0DL_WR_DQ2_DEL.

//! @brief Get value of MMDC_MPWRDQBY0DL_WR_DQ2_DEL from a register value.
#define BG_MMDC_MPWRDQBY0DL_WR_DQ2_DEL(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_MMDC_MPWRDQBY0DL_WR_DQ2_DEL) >> BP_MMDC_MPWRDQBY0DL_WR_DQ2_DEL)

//! @brief Format value for bitfield MMDC_MPWRDQBY0DL_WR_DQ2_DEL.
#define BF_MMDC_MPWRDQBY0DL_WR_DQ2_DEL(v)   ((__REG_VALUE_TYPE((v), reg32_t) << BP_MMDC_MPWRDQBY0DL_WR_DQ2_DEL) & BM_MMDC_MPWRDQBY0DL_WR_DQ2_DEL)

#ifndef __LANGUAGE_ASM__
//! @brief Set the WR_DQ2_DEL field to a new value.
#define BW_MMDC_MPWRDQBY0DL_WR_DQ2_DEL(v)   (HW_MMDC_MPWRDQBY0DL_WR((HW_MMDC_MPWRDQBY0DL_RD() & ~BM_MMDC_MPWRDQBY0DL_WR_DQ2_DEL) | BF_MMDC_MPWRDQBY0DL_WR_DQ2_DEL(v)))
#endif


/* --- Register HW_MMDC_MPWRDQBY0DL, field WR_DQ3_DEL[13:12] (RW)
 *
 * Write dq3 delay fine-tuning. This field holds the number of delay units that are added to dq3
 * relative to dqs0.
 *
 * Values:
 * 00 - No change in dq3 delay
 * 01 - Add dq3 delay of 1 delay unit.
 * 10 - Add dq3 delay of 2 delay units.
 * 11 - Add dq3 delay of 3 delay units.
 */

#define BP_MMDC_MPWRDQBY0DL_WR_DQ3_DEL      (12)      //!< Bit position for MMDC_MPWRDQBY0DL_WR_DQ3_DEL.
#define BM_MMDC_MPWRDQBY0DL_WR_DQ3_DEL      (0x00003000)  //!< Bit mask for MMDC_MPWRDQBY0DL_WR_DQ3_DEL.

//! @brief Get value of MMDC_MPWRDQBY0DL_WR_DQ3_DEL from a register value.
#define BG_MMDC_MPWRDQBY0DL_WR_DQ3_DEL(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_MMDC_MPWRDQBY0DL_WR_DQ3_DEL) >> BP_MMDC_MPWRDQBY0DL_WR_DQ3_DEL)

//! @brief Format value for bitfield MMDC_MPWRDQBY0DL_WR_DQ3_DEL.
#define BF_MMDC_MPWRDQBY0DL_WR_DQ3_DEL(v)   ((__REG_VALUE_TYPE((v), reg32_t) << BP_MMDC_MPWRDQBY0DL_WR_DQ3_DEL) & BM_MMDC_MPWRDQBY0DL_WR_DQ3_DEL)

#ifndef __LANGUAGE_ASM__
//! @brief Set the WR_DQ3_DEL field to a new value.
#define BW_MMDC_MPWRDQBY0DL_WR_DQ3_DEL(v)   (HW_MMDC_MPWRDQBY0DL_WR((HW_MMDC_MPWRDQBY0DL_RD() & ~BM_MMDC_MPWRDQBY0DL_WR_DQ3_DEL) | BF_MMDC_MPWRDQBY0DL_WR_DQ3_DEL(v)))
#endif


/* --- Register HW_MMDC_MPWRDQBY0DL, field WR_DQ4_DEL[17:16] (RW)
 *
 * Write dq4 delay fine-tuning. This field holds the number of delay units that are added to dq4
 * relative to dqs0.
 *
 * Values:
 * 00 - No change in dq4 delay
 * 01 - Add dq4 delay of 1 delay unit..
 * 10 - Add dq4 delay of 2 delay units.
 * 11 - Add dq4 delay of 3 delay units.
 */

#define BP_MMDC_MPWRDQBY0DL_WR_DQ4_DEL      (16)      //!< Bit position for MMDC_MPWRDQBY0DL_WR_DQ4_DEL.
#define BM_MMDC_MPWRDQBY0DL_WR_DQ4_DEL      (0x00030000)  //!< Bit mask for MMDC_MPWRDQBY0DL_WR_DQ4_DEL.

//! @brief Get value of MMDC_MPWRDQBY0DL_WR_DQ4_DEL from a register value.
#define BG_MMDC_MPWRDQBY0DL_WR_DQ4_DEL(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_MMDC_MPWRDQBY0DL_WR_DQ4_DEL) >> BP_MMDC_MPWRDQBY0DL_WR_DQ4_DEL)

//! @brief Format value for bitfield MMDC_MPWRDQBY0DL_WR_DQ4_DEL.
#define BF_MMDC_MPWRDQBY0DL_WR_DQ4_DEL(v)   ((__REG_VALUE_TYPE((v), reg32_t) << BP_MMDC_MPWRDQBY0DL_WR_DQ4_DEL) & BM_MMDC_MPWRDQBY0DL_WR_DQ4_DEL)

#ifndef __LANGUAGE_ASM__
//! @brief Set the WR_DQ4_DEL field to a new value.
#define BW_MMDC_MPWRDQBY0DL_WR_DQ4_DEL(v)   (HW_MMDC_MPWRDQBY0DL_WR((HW_MMDC_MPWRDQBY0DL_RD() & ~BM_MMDC_MPWRDQBY0DL_WR_DQ4_DEL) | BF_MMDC_MPWRDQBY0DL_WR_DQ4_DEL(v)))
#endif


/* --- Register HW_MMDC_MPWRDQBY0DL, field WR_DQ5_DEL[21:20] (RW)
 *
 * Write dq5 delay fine-tuning. This field holds the number of delay units that are added to dq5
 * relative to dqs0.
 *
 * Values:
 * 00 - No change in dq5 delay
 * 01 - Add dq5 delay of 1 delay unit.
 * 10 - Add dq5 delay of 2 delay units.
 * 11 - Add dq5 delay of 3 delay units.
 */

#define BP_MMDC_MPWRDQBY0DL_WR_DQ5_DEL      (20)      //!< Bit position for MMDC_MPWRDQBY0DL_WR_DQ5_DEL.
#define BM_MMDC_MPWRDQBY0DL_WR_DQ5_DEL      (0x00300000)  //!< Bit mask for MMDC_MPWRDQBY0DL_WR_DQ5_DEL.

//! @brief Get value of MMDC_MPWRDQBY0DL_WR_DQ5_DEL from a register value.
#define BG_MMDC_MPWRDQBY0DL_WR_DQ5_DEL(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_MMDC_MPWRDQBY0DL_WR_DQ5_DEL) >> BP_MMDC_MPWRDQBY0DL_WR_DQ5_DEL)

//! @brief Format value for bitfield MMDC_MPWRDQBY0DL_WR_DQ5_DEL.
#define BF_MMDC_MPWRDQBY0DL_WR_DQ5_DEL(v)   ((__REG_VALUE_TYPE((v), reg32_t) << BP_MMDC_MPWRDQBY0DL_WR_DQ5_DEL) & BM_MMDC_MPWRDQBY0DL_WR_DQ5_DEL)

#ifndef __LANGUAGE_ASM__
//! @brief Set the WR_DQ5_DEL field to a new value.
#define BW_MMDC_MPWRDQBY0DL_WR_DQ5_DEL(v)   (HW_MMDC_MPWRDQBY0DL_WR((HW_MMDC_MPWRDQBY0DL_RD() & ~BM_MMDC_MPWRDQBY0DL_WR_DQ5_DEL) | BF_MMDC_MPWRDQBY0DL_WR_DQ5_DEL(v)))
#endif


/* --- Register HW_MMDC_MPWRDQBY0DL, field WR_DQ6_DEL[25:24] (RW)
 *
 * Write dq6 delay fine-tuning. This field holds the number of delay units that are added to dq6
 * relative to dqs0.
 *
 * Values:
 * 00 - No change in dq6 delay
 * 01 - Add dq6 delay of 1 delay unit.
 * 10 - Add dq6 delay of 2 delay units.
 * 11 - Add dq6 delay of 3 delay units.
 */

#define BP_MMDC_MPWRDQBY0DL_WR_DQ6_DEL      (24)      //!< Bit position for MMDC_MPWRDQBY0DL_WR_DQ6_DEL.
#define BM_MMDC_MPWRDQBY0DL_WR_DQ6_DEL      (0x03000000)  //!< Bit mask for MMDC_MPWRDQBY0DL_WR_DQ6_DEL.

//! @brief Get value of MMDC_MPWRDQBY0DL_WR_DQ6_DEL from a register value.
#define BG_MMDC_MPWRDQBY0DL_WR_DQ6_DEL(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_MMDC_MPWRDQBY0DL_WR_DQ6_DEL) >> BP_MMDC_MPWRDQBY0DL_WR_DQ6_DEL)

//! @brief Format value for bitfield MMDC_MPWRDQBY0DL_WR_DQ6_DEL.
#define BF_MMDC_MPWRDQBY0DL_WR_DQ6_DEL(v)   ((__REG_VALUE_TYPE((v), reg32_t) << BP_MMDC_MPWRDQBY0DL_WR_DQ6_DEL) & BM_MMDC_MPWRDQBY0DL_WR_DQ6_DEL)

#ifndef __LANGUAGE_ASM__
//! @brief Set the WR_DQ6_DEL field to a new value.
#define BW_MMDC_MPWRDQBY0DL_WR_DQ6_DEL(v)   (HW_MMDC_MPWRDQBY0DL_WR((HW_MMDC_MPWRDQBY0DL_RD() & ~BM_MMDC_MPWRDQBY0DL_WR_DQ6_DEL) | BF_MMDC_MPWRDQBY0DL_WR_DQ6_DEL(v)))
#endif


/* --- Register HW_MMDC_MPWRDQBY0DL, field WR_DQ7_DEL[29:28] (RW)
 *
 * Write dq7 delay fine-tuning. This field holds the number of delay units that are added to dq7
 * relative to dqs0.
 *
 * Values:
 * 00 - No change in dq7 delay
 * 01 - Add dq7 delay of 1 delay unit.
 * 10 - Add dq7 delay of 2 delay units.
 * 11 - Add dq7 delay of 3 delay units.
 */

#define BP_MMDC_MPWRDQBY0DL_WR_DQ7_DEL      (28)      //!< Bit position for MMDC_MPWRDQBY0DL_WR_DQ7_DEL.
#define BM_MMDC_MPWRDQBY0DL_WR_DQ7_DEL      (0x30000000)  //!< Bit mask for MMDC_MPWRDQBY0DL_WR_DQ7_DEL.

//! @brief Get value of MMDC_MPWRDQBY0DL_WR_DQ7_DEL from a register value.
#define BG_MMDC_MPWRDQBY0DL_WR_DQ7_DEL(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_MMDC_MPWRDQBY0DL_WR_DQ7_DEL) >> BP_MMDC_MPWRDQBY0DL_WR_DQ7_DEL)

//! @brief Format value for bitfield MMDC_MPWRDQBY0DL_WR_DQ7_DEL.
#define BF_MMDC_MPWRDQBY0DL_WR_DQ7_DEL(v)   ((__REG_VALUE_TYPE((v), reg32_t) << BP_MMDC_MPWRDQBY0DL_WR_DQ7_DEL) & BM_MMDC_MPWRDQBY0DL_WR_DQ7_DEL)

#ifndef __LANGUAGE_ASM__
//! @brief Set the WR_DQ7_DEL field to a new value.
#define BW_MMDC_MPWRDQBY0DL_WR_DQ7_DEL(v)   (HW_MMDC_MPWRDQBY0DL_WR((HW_MMDC_MPWRDQBY0DL_RD() & ~BM_MMDC_MPWRDQBY0DL_WR_DQ7_DEL) | BF_MMDC_MPWRDQBY0DL_WR_DQ7_DEL(v)))
#endif


/* --- Register HW_MMDC_MPWRDQBY0DL, field WR_DM0_DEL[31:30] (RW)
 *
 * Write dm0 delay fine-tuning. This field holds the number of delay units that are added to dm0
 * relative to dqs0.
 *
 * Values:
 * 00 - No change in dm0 delay
 * 01 - Add dm0 delay of 1 delay unit.
 * 10 - Add dm0 delay of 2 delay units.
 * 11 - Add dm0 delay of 3 delay units.
 */

#define BP_MMDC_MPWRDQBY0DL_WR_DM0_DEL      (30)      //!< Bit position for MMDC_MPWRDQBY0DL_WR_DM0_DEL.
#define BM_MMDC_MPWRDQBY0DL_WR_DM0_DEL      (0xc0000000)  //!< Bit mask for MMDC_MPWRDQBY0DL_WR_DM0_DEL.

//! @brief Get value of MMDC_MPWRDQBY0DL_WR_DM0_DEL from a register value.
#define BG_MMDC_MPWRDQBY0DL_WR_DM0_DEL(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_MMDC_MPWRDQBY0DL_WR_DM0_DEL) >> BP_MMDC_MPWRDQBY0DL_WR_DM0_DEL)

//! @brief Format value for bitfield MMDC_MPWRDQBY0DL_WR_DM0_DEL.
#define BF_MMDC_MPWRDQBY0DL_WR_DM0_DEL(v)   ((__REG_VALUE_TYPE((v), reg32_t) << BP_MMDC_MPWRDQBY0DL_WR_DM0_DEL) & BM_MMDC_MPWRDQBY0DL_WR_DM0_DEL)

#ifndef __LANGUAGE_ASM__
//! @brief Set the WR_DM0_DEL field to a new value.
#define BW_MMDC_MPWRDQBY0DL_WR_DM0_DEL(v)   (HW_MMDC_MPWRDQBY0DL_WR((HW_MMDC_MPWRDQBY0DL_RD() & ~BM_MMDC_MPWRDQBY0DL_WR_DM0_DEL) | BF_MMDC_MPWRDQBY0DL_WR_DM0_DEL(v)))
#endif


//-------------------------------------------------------------------------------------------
// HW_MMDC_MPWRDQBY1DL - MMDC PHY Write DQ Byte1 Delay Register
//-------------------------------------------------------------------------------------------

#ifndef __LANGUAGE_ASM__
/*!
 * @brief HW_MMDC_MPWRDQBY1DL - MMDC PHY Write DQ Byte1 Delay Register (RW)
 *
 * Reset value: 0x00000000
 *
 * This register is used to add fine-tuning adjustment to every bit in the write DQ byte1 relative
 * to the write DQS  Supported Mode Of Operations:  For Channel 0: All  For Channel 1: DDR3_x64,
 * LP2_2ch_x16, LP2_2ch_x32
 */
typedef union _hw_mmdc_mpwrdqby1dl
{
    reg32_t U;
    struct _hw_mmdc_mpwrdqby1dl_bitfields
    {
        unsigned WR_DQ8_DEL : 2; //!< [1:0] Write dq8 delay fine-tuning.
        unsigned RESERVED0 : 2; //!< [3:2] Reserved
        unsigned WR_DQ9_DEL : 2; //!< [5:4] Write dq9 delay fine-tuning.
        unsigned RESERVED1 : 2; //!< [7:6] Reserved
        unsigned WR_DQ10_DEL : 2; //!< [9:8] Write dq10 delay fine-tuning.
        unsigned RESERVED2 : 2; //!< [11:10] Reserved
        unsigned WR_DQ11_DEL : 2; //!< [13:12] Write dq11 delay fine-tuning.
        unsigned RESERVED3 : 2; //!< [15:14] Reserved
        unsigned WR_DQ12_DEL : 2; //!< [17:16] Write dq12 delay fine-tuning.
        unsigned RESERVED4 : 2; //!< [19:18] Reserved
        unsigned WR_DQ13_DEL : 2; //!< [21:20] Write dq13 delay fine-tuning.
        unsigned RESERVED5 : 2; //!< [23:22] Reserved
        unsigned WR_DQ14_DEL : 2; //!< [25:24] Write dq14 delay fine-tuning.
        unsigned RESERVED6 : 2; //!< [27:26] Reserved
        unsigned WR_DQ15_DEL : 2; //!< [29:28] Write dq15 delay fine-tuning.
        unsigned WR_DM1_DEL : 2; //!< [31:30] Write dm1 delay fine-tuning.
    } B;
} hw_mmdc_mpwrdqby1dl_t;
#endif

/*
 * constants & macros for entire MMDC_MPWRDQBY1DL register
 */
#define HW_MMDC_MPWRDQBY1DL_ADDR      (REGS_MMDC_BASE + 0x830)

#ifndef __LANGUAGE_ASM__
#define HW_MMDC_MPWRDQBY1DL           (*(volatile hw_mmdc_mpwrdqby1dl_t *) HW_MMDC_MPWRDQBY1DL_ADDR)
#define HW_MMDC_MPWRDQBY1DL_RD()      (HW_MMDC_MPWRDQBY1DL.U)
#define HW_MMDC_MPWRDQBY1DL_WR(v)     (HW_MMDC_MPWRDQBY1DL.U = (v))
#define HW_MMDC_MPWRDQBY1DL_SET(v)    (HW_MMDC_MPWRDQBY1DL_WR(HW_MMDC_MPWRDQBY1DL_RD() |  (v)))
#define HW_MMDC_MPWRDQBY1DL_CLR(v)    (HW_MMDC_MPWRDQBY1DL_WR(HW_MMDC_MPWRDQBY1DL_RD() & ~(v)))
#define HW_MMDC_MPWRDQBY1DL_TOG(v)    (HW_MMDC_MPWRDQBY1DL_WR(HW_MMDC_MPWRDQBY1DL_RD() ^  (v)))
#endif

/*
 * constants & macros for individual MMDC_MPWRDQBY1DL bitfields
 */

/* --- Register HW_MMDC_MPWRDQBY1DL, field WR_DQ8_DEL[1:0] (RW)
 *
 * Write dq8 delay fine-tuning. This field holds the number of delay units that are added to dq8
 * relative to dqs1.
 *
 * Values:
 * 00 - No change in dq8 delay
 * 01 - Add dq8 delay of 1 delay unit.
 * 10 - Add dq8 delay of 2 delay units.
 * 11 - Add dq8 delay of 3 delay units.
 */

#define BP_MMDC_MPWRDQBY1DL_WR_DQ8_DEL      (0)      //!< Bit position for MMDC_MPWRDQBY1DL_WR_DQ8_DEL.
#define BM_MMDC_MPWRDQBY1DL_WR_DQ8_DEL      (0x00000003)  //!< Bit mask for MMDC_MPWRDQBY1DL_WR_DQ8_DEL.

//! @brief Get value of MMDC_MPWRDQBY1DL_WR_DQ8_DEL from a register value.
#define BG_MMDC_MPWRDQBY1DL_WR_DQ8_DEL(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_MMDC_MPWRDQBY1DL_WR_DQ8_DEL) >> BP_MMDC_MPWRDQBY1DL_WR_DQ8_DEL)

//! @brief Format value for bitfield MMDC_MPWRDQBY1DL_WR_DQ8_DEL.
#define BF_MMDC_MPWRDQBY1DL_WR_DQ8_DEL(v)   ((__REG_VALUE_TYPE((v), reg32_t) << BP_MMDC_MPWRDQBY1DL_WR_DQ8_DEL) & BM_MMDC_MPWRDQBY1DL_WR_DQ8_DEL)

#ifndef __LANGUAGE_ASM__
//! @brief Set the WR_DQ8_DEL field to a new value.
#define BW_MMDC_MPWRDQBY1DL_WR_DQ8_DEL(v)   (HW_MMDC_MPWRDQBY1DL_WR((HW_MMDC_MPWRDQBY1DL_RD() & ~BM_MMDC_MPWRDQBY1DL_WR_DQ8_DEL) | BF_MMDC_MPWRDQBY1DL_WR_DQ8_DEL(v)))
#endif


/* --- Register HW_MMDC_MPWRDQBY1DL, field WR_DQ9_DEL[5:4] (RW)
 *
 * Write dq9 delay fine-tuning. This field holds the number of delay units that are added to dq9
 * relative to dqs1.
 *
 * Values:
 * 00 - No change in dq9 delay
 * 01 - Add dq9 delay of 1 delay unit.
 * 10 - Add dq9 delay of 2 delay units.
 * 11 - Add dq9 delay of 3 delay units.
 */

#define BP_MMDC_MPWRDQBY1DL_WR_DQ9_DEL      (4)      //!< Bit position for MMDC_MPWRDQBY1DL_WR_DQ9_DEL.
#define BM_MMDC_MPWRDQBY1DL_WR_DQ9_DEL      (0x00000030)  //!< Bit mask for MMDC_MPWRDQBY1DL_WR_DQ9_DEL.

//! @brief Get value of MMDC_MPWRDQBY1DL_WR_DQ9_DEL from a register value.
#define BG_MMDC_MPWRDQBY1DL_WR_DQ9_DEL(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_MMDC_MPWRDQBY1DL_WR_DQ9_DEL) >> BP_MMDC_MPWRDQBY1DL_WR_DQ9_DEL)

//! @brief Format value for bitfield MMDC_MPWRDQBY1DL_WR_DQ9_DEL.
#define BF_MMDC_MPWRDQBY1DL_WR_DQ9_DEL(v)   ((__REG_VALUE_TYPE((v), reg32_t) << BP_MMDC_MPWRDQBY1DL_WR_DQ9_DEL) & BM_MMDC_MPWRDQBY1DL_WR_DQ9_DEL)

#ifndef __LANGUAGE_ASM__
//! @brief Set the WR_DQ9_DEL field to a new value.
#define BW_MMDC_MPWRDQBY1DL_WR_DQ9_DEL(v)   (HW_MMDC_MPWRDQBY1DL_WR((HW_MMDC_MPWRDQBY1DL_RD() & ~BM_MMDC_MPWRDQBY1DL_WR_DQ9_DEL) | BF_MMDC_MPWRDQBY1DL_WR_DQ9_DEL(v)))
#endif


/* --- Register HW_MMDC_MPWRDQBY1DL, field WR_DQ10_DEL[9:8] (RW)
 *
 * Write dq10 delay fine-tuning. This field holds the number of delay units that are added to dq10
 * relative to dqs1.
 *
 * Values:
 * 00 - No change in dq10 delay
 * 01 - Add dq10 delay of 1 delay unit.
 * 10 - Add dq10 delay of 2 delay units.
 * 11 - Add dq10 delay of 3 delay units.
 */

#define BP_MMDC_MPWRDQBY1DL_WR_DQ10_DEL      (8)      //!< Bit position for MMDC_MPWRDQBY1DL_WR_DQ10_DEL.
#define BM_MMDC_MPWRDQBY1DL_WR_DQ10_DEL      (0x00000300)  //!< Bit mask for MMDC_MPWRDQBY1DL_WR_DQ10_DEL.

//! @brief Get value of MMDC_MPWRDQBY1DL_WR_DQ10_DEL from a register value.
#define BG_MMDC_MPWRDQBY1DL_WR_DQ10_DEL(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_MMDC_MPWRDQBY1DL_WR_DQ10_DEL) >> BP_MMDC_MPWRDQBY1DL_WR_DQ10_DEL)

//! @brief Format value for bitfield MMDC_MPWRDQBY1DL_WR_DQ10_DEL.
#define BF_MMDC_MPWRDQBY1DL_WR_DQ10_DEL(v)   ((__REG_VALUE_TYPE((v), reg32_t) << BP_MMDC_MPWRDQBY1DL_WR_DQ10_DEL) & BM_MMDC_MPWRDQBY1DL_WR_DQ10_DEL)

#ifndef __LANGUAGE_ASM__
//! @brief Set the WR_DQ10_DEL field to a new value.
#define BW_MMDC_MPWRDQBY1DL_WR_DQ10_DEL(v)   (HW_MMDC_MPWRDQBY1DL_WR((HW_MMDC_MPWRDQBY1DL_RD() & ~BM_MMDC_MPWRDQBY1DL_WR_DQ10_DEL) | BF_MMDC_MPWRDQBY1DL_WR_DQ10_DEL(v)))
#endif


/* --- Register HW_MMDC_MPWRDQBY1DL, field WR_DQ11_DEL[13:12] (RW)
 *
 * Write dq11 delay fine-tuning. This field holds the number of delay units that are added to dq11
 * relative to dqs1.
 *
 * Values:
 * 00 - No change in dq11 delay
 * 01 - Add dq11 delay of 1 delay unit.
 * 10 - Add dq11 delay of 2 delay units.
 * 11 - Add dq11 delay of 3 delay units.
 */

#define BP_MMDC_MPWRDQBY1DL_WR_DQ11_DEL      (12)      //!< Bit position for MMDC_MPWRDQBY1DL_WR_DQ11_DEL.
#define BM_MMDC_MPWRDQBY1DL_WR_DQ11_DEL      (0x00003000)  //!< Bit mask for MMDC_MPWRDQBY1DL_WR_DQ11_DEL.

//! @brief Get value of MMDC_MPWRDQBY1DL_WR_DQ11_DEL from a register value.
#define BG_MMDC_MPWRDQBY1DL_WR_DQ11_DEL(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_MMDC_MPWRDQBY1DL_WR_DQ11_DEL) >> BP_MMDC_MPWRDQBY1DL_WR_DQ11_DEL)

//! @brief Format value for bitfield MMDC_MPWRDQBY1DL_WR_DQ11_DEL.
#define BF_MMDC_MPWRDQBY1DL_WR_DQ11_DEL(v)   ((__REG_VALUE_TYPE((v), reg32_t) << BP_MMDC_MPWRDQBY1DL_WR_DQ11_DEL) & BM_MMDC_MPWRDQBY1DL_WR_DQ11_DEL)

#ifndef __LANGUAGE_ASM__
//! @brief Set the WR_DQ11_DEL field to a new value.
#define BW_MMDC_MPWRDQBY1DL_WR_DQ11_DEL(v)   (HW_MMDC_MPWRDQBY1DL_WR((HW_MMDC_MPWRDQBY1DL_RD() & ~BM_MMDC_MPWRDQBY1DL_WR_DQ11_DEL) | BF_MMDC_MPWRDQBY1DL_WR_DQ11_DEL(v)))
#endif


/* --- Register HW_MMDC_MPWRDQBY1DL, field WR_DQ12_DEL[17:16] (RW)
 *
 * Write dq12 delay fine-tuning. This field holds the number of delay units that are added to dq12
 * relative to dqs1.
 *
 * Values:
 * 00 - No change in dq12 delay
 * 01 - Add dq12 delay of 1 delay unit.
 * 10 - Add dq12 delay of 2 delay units.
 * 11 - Add dq12 delay of 3 delay units.
 */

#define BP_MMDC_MPWRDQBY1DL_WR_DQ12_DEL      (16)      //!< Bit position for MMDC_MPWRDQBY1DL_WR_DQ12_DEL.
#define BM_MMDC_MPWRDQBY1DL_WR_DQ12_DEL      (0x00030000)  //!< Bit mask for MMDC_MPWRDQBY1DL_WR_DQ12_DEL.

//! @brief Get value of MMDC_MPWRDQBY1DL_WR_DQ12_DEL from a register value.
#define BG_MMDC_MPWRDQBY1DL_WR_DQ12_DEL(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_MMDC_MPWRDQBY1DL_WR_DQ12_DEL) >> BP_MMDC_MPWRDQBY1DL_WR_DQ12_DEL)

//! @brief Format value for bitfield MMDC_MPWRDQBY1DL_WR_DQ12_DEL.
#define BF_MMDC_MPWRDQBY1DL_WR_DQ12_DEL(v)   ((__REG_VALUE_TYPE((v), reg32_t) << BP_MMDC_MPWRDQBY1DL_WR_DQ12_DEL) & BM_MMDC_MPWRDQBY1DL_WR_DQ12_DEL)

#ifndef __LANGUAGE_ASM__
//! @brief Set the WR_DQ12_DEL field to a new value.
#define BW_MMDC_MPWRDQBY1DL_WR_DQ12_DEL(v)   (HW_MMDC_MPWRDQBY1DL_WR((HW_MMDC_MPWRDQBY1DL_RD() & ~BM_MMDC_MPWRDQBY1DL_WR_DQ12_DEL) | BF_MMDC_MPWRDQBY1DL_WR_DQ12_DEL(v)))
#endif


/* --- Register HW_MMDC_MPWRDQBY1DL, field WR_DQ13_DEL[21:20] (RW)
 *
 * Write dq13 delay fine-tuning. This field holds the number of delay units that are added to dq13
 * relative to dqs1.
 *
 * Values:
 * 00 - No change in dq13 delay
 * 01 - Add dq13 delay of 1 delay unit.
 * 10 - Add dq13 delay of 2 delay units.
 * 11 - Add dq13 delay of 3 delay units.
 */

#define BP_MMDC_MPWRDQBY1DL_WR_DQ13_DEL      (20)      //!< Bit position for MMDC_MPWRDQBY1DL_WR_DQ13_DEL.
#define BM_MMDC_MPWRDQBY1DL_WR_DQ13_DEL      (0x00300000)  //!< Bit mask for MMDC_MPWRDQBY1DL_WR_DQ13_DEL.

//! @brief Get value of MMDC_MPWRDQBY1DL_WR_DQ13_DEL from a register value.
#define BG_MMDC_MPWRDQBY1DL_WR_DQ13_DEL(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_MMDC_MPWRDQBY1DL_WR_DQ13_DEL) >> BP_MMDC_MPWRDQBY1DL_WR_DQ13_DEL)

//! @brief Format value for bitfield MMDC_MPWRDQBY1DL_WR_DQ13_DEL.
#define BF_MMDC_MPWRDQBY1DL_WR_DQ13_DEL(v)   ((__REG_VALUE_TYPE((v), reg32_t) << BP_MMDC_MPWRDQBY1DL_WR_DQ13_DEL) & BM_MMDC_MPWRDQBY1DL_WR_DQ13_DEL)

#ifndef __LANGUAGE_ASM__
//! @brief Set the WR_DQ13_DEL field to a new value.
#define BW_MMDC_MPWRDQBY1DL_WR_DQ13_DEL(v)   (HW_MMDC_MPWRDQBY1DL_WR((HW_MMDC_MPWRDQBY1DL_RD() & ~BM_MMDC_MPWRDQBY1DL_WR_DQ13_DEL) | BF_MMDC_MPWRDQBY1DL_WR_DQ13_DEL(v)))
#endif


/* --- Register HW_MMDC_MPWRDQBY1DL, field WR_DQ14_DEL[25:24] (RW)
 *
 * Write dq14 delay fine-tuning. This field holds the number of delay units that are added to dq14
 * relative to dqs1.
 *
 * Values:
 * 00 - No change in dq14 delay
 * 01 - Add dq14 delay of 1 delay unit.
 * 10 - Add dq14 delay of 2 delay units.
 * 11 - Add dq14 delay of 3 delay units.
 */

#define BP_MMDC_MPWRDQBY1DL_WR_DQ14_DEL      (24)      //!< Bit position for MMDC_MPWRDQBY1DL_WR_DQ14_DEL.
#define BM_MMDC_MPWRDQBY1DL_WR_DQ14_DEL      (0x03000000)  //!< Bit mask for MMDC_MPWRDQBY1DL_WR_DQ14_DEL.

//! @brief Get value of MMDC_MPWRDQBY1DL_WR_DQ14_DEL from a register value.
#define BG_MMDC_MPWRDQBY1DL_WR_DQ14_DEL(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_MMDC_MPWRDQBY1DL_WR_DQ14_DEL) >> BP_MMDC_MPWRDQBY1DL_WR_DQ14_DEL)

//! @brief Format value for bitfield MMDC_MPWRDQBY1DL_WR_DQ14_DEL.
#define BF_MMDC_MPWRDQBY1DL_WR_DQ14_DEL(v)   ((__REG_VALUE_TYPE((v), reg32_t) << BP_MMDC_MPWRDQBY1DL_WR_DQ14_DEL) & BM_MMDC_MPWRDQBY1DL_WR_DQ14_DEL)

#ifndef __LANGUAGE_ASM__
//! @brief Set the WR_DQ14_DEL field to a new value.
#define BW_MMDC_MPWRDQBY1DL_WR_DQ14_DEL(v)   (HW_MMDC_MPWRDQBY1DL_WR((HW_MMDC_MPWRDQBY1DL_RD() & ~BM_MMDC_MPWRDQBY1DL_WR_DQ14_DEL) | BF_MMDC_MPWRDQBY1DL_WR_DQ14_DEL(v)))
#endif


/* --- Register HW_MMDC_MPWRDQBY1DL, field WR_DQ15_DEL[29:28] (RW)
 *
 * Write dq15 delay fine-tuning. This field holds the number of delay units that are added to dq15
 * relative to dqs1.
 *
 * Values:
 * 00 - No change in dq15 delay
 * 01 - Add dq15 delay of 1 delay unit.
 * 10 - Add dq15 delay of 2 delay units.
 * 11 - Add dq15 delay of 3 delay units.
 */

#define BP_MMDC_MPWRDQBY1DL_WR_DQ15_DEL      (28)      //!< Bit position for MMDC_MPWRDQBY1DL_WR_DQ15_DEL.
#define BM_MMDC_MPWRDQBY1DL_WR_DQ15_DEL      (0x30000000)  //!< Bit mask for MMDC_MPWRDQBY1DL_WR_DQ15_DEL.

//! @brief Get value of MMDC_MPWRDQBY1DL_WR_DQ15_DEL from a register value.
#define BG_MMDC_MPWRDQBY1DL_WR_DQ15_DEL(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_MMDC_MPWRDQBY1DL_WR_DQ15_DEL) >> BP_MMDC_MPWRDQBY1DL_WR_DQ15_DEL)

//! @brief Format value for bitfield MMDC_MPWRDQBY1DL_WR_DQ15_DEL.
#define BF_MMDC_MPWRDQBY1DL_WR_DQ15_DEL(v)   ((__REG_VALUE_TYPE((v), reg32_t) << BP_MMDC_MPWRDQBY1DL_WR_DQ15_DEL) & BM_MMDC_MPWRDQBY1DL_WR_DQ15_DEL)

#ifndef __LANGUAGE_ASM__
//! @brief Set the WR_DQ15_DEL field to a new value.
#define BW_MMDC_MPWRDQBY1DL_WR_DQ15_DEL(v)   (HW_MMDC_MPWRDQBY1DL_WR((HW_MMDC_MPWRDQBY1DL_RD() & ~BM_MMDC_MPWRDQBY1DL_WR_DQ15_DEL) | BF_MMDC_MPWRDQBY1DL_WR_DQ15_DEL(v)))
#endif


/* --- Register HW_MMDC_MPWRDQBY1DL, field WR_DM1_DEL[31:30] (RW)
 *
 * Write dm1 delay fine-tuning. This field holds the number of delay units that are added to dm1
 * relative to dqs1.
 *
 * Values:
 * 00 - No change in dm1 delay
 * 01 - Add dm1 delay of 1 delay unit.
 * 10 - Add dm1 delay of 2 delay units.
 * 11 - Add dm1 delay of 3 delay units.
 */

#define BP_MMDC_MPWRDQBY1DL_WR_DM1_DEL      (30)      //!< Bit position for MMDC_MPWRDQBY1DL_WR_DM1_DEL.
#define BM_MMDC_MPWRDQBY1DL_WR_DM1_DEL      (0xc0000000)  //!< Bit mask for MMDC_MPWRDQBY1DL_WR_DM1_DEL.

//! @brief Get value of MMDC_MPWRDQBY1DL_WR_DM1_DEL from a register value.
#define BG_MMDC_MPWRDQBY1DL_WR_DM1_DEL(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_MMDC_MPWRDQBY1DL_WR_DM1_DEL) >> BP_MMDC_MPWRDQBY1DL_WR_DM1_DEL)

//! @brief Format value for bitfield MMDC_MPWRDQBY1DL_WR_DM1_DEL.
#define BF_MMDC_MPWRDQBY1DL_WR_DM1_DEL(v)   ((__REG_VALUE_TYPE((v), reg32_t) << BP_MMDC_MPWRDQBY1DL_WR_DM1_DEL) & BM_MMDC_MPWRDQBY1DL_WR_DM1_DEL)

#ifndef __LANGUAGE_ASM__
//! @brief Set the WR_DM1_DEL field to a new value.
#define BW_MMDC_MPWRDQBY1DL_WR_DM1_DEL(v)   (HW_MMDC_MPWRDQBY1DL_WR((HW_MMDC_MPWRDQBY1DL_RD() & ~BM_MMDC_MPWRDQBY1DL_WR_DM1_DEL) | BF_MMDC_MPWRDQBY1DL_WR_DM1_DEL(v)))
#endif


//-------------------------------------------------------------------------------------------
// HW_MMDC_MPWRDQBY2DL - MMDC PHY Write DQ Byte2 Delay Register
//-------------------------------------------------------------------------------------------

#ifndef __LANGUAGE_ASM__
/*!
 * @brief HW_MMDC_MPWRDQBY2DL - MMDC PHY Write DQ Byte2 Delay Register (RW)
 *
 * Reset value: 0x00000000
 *
 * This register is used to add fine-tuning adjustment to every bit in the write DQ byte2 relative
 * to the write DQS  Supported Mode Of Operations:  For Channel 0: All  For Channel 1: DDR3_x64,
 * LP2_2ch_x32
 */
typedef union _hw_mmdc_mpwrdqby2dl
{
    reg32_t U;
    struct _hw_mmdc_mpwrdqby2dl_bitfields
    {
        unsigned WR_DQ16_DEL : 2; //!< [1:0] Write dq16 delay fine tuning.
        unsigned RESERVED0 : 2; //!< [3:2] Reserved
        unsigned WR_DQ17_DEL : 2; //!< [5:4] Write dq17 delay fine tuning.
        unsigned RESERVED1 : 2; //!< [7:6] Reserved
        unsigned WR_DQ18_DEL : 2; //!< [9:8] Write dq18 delay fine tuning.
        unsigned RESERVED2 : 2; //!< [11:10] Reserved
        unsigned WR_DQ19_DEL : 2; //!< [13:12] Write dq19 delay fine tuning.
        unsigned RESERVED3 : 2; //!< [15:14] Reserved
        unsigned WR_DQ20_DEL : 2; //!< [17:16] Write dq20 delay fine tuning.
        unsigned RESERVED4 : 2; //!< [19:18] Reserved
        unsigned WR_DQ21_DEL : 2; //!< [21:20] Write dq21 delay fine tuning.
        unsigned RESERVED5 : 2; //!< [23:22] Reserved
        unsigned WR_DQ22_DEL : 2; //!< [25:24] Write dq22 delay fine tuning.
        unsigned RESERVED6 : 2; //!< [27:26] Reserved
        unsigned WR_DQ23_DEL : 2; //!< [29:28] Write dq23 delay fine tuning.
        unsigned WR_DM2_DEL : 2; //!< [31:30] Write dm2 delay fine-tuning.
    } B;
} hw_mmdc_mpwrdqby2dl_t;
#endif

/*
 * constants & macros for entire MMDC_MPWRDQBY2DL register
 */
#define HW_MMDC_MPWRDQBY2DL_ADDR      (REGS_MMDC_BASE + 0x834)

#ifndef __LANGUAGE_ASM__
#define HW_MMDC_MPWRDQBY2DL           (*(volatile hw_mmdc_mpwrdqby2dl_t *) HW_MMDC_MPWRDQBY2DL_ADDR)
#define HW_MMDC_MPWRDQBY2DL_RD()      (HW_MMDC_MPWRDQBY2DL.U)
#define HW_MMDC_MPWRDQBY2DL_WR(v)     (HW_MMDC_MPWRDQBY2DL.U = (v))
#define HW_MMDC_MPWRDQBY2DL_SET(v)    (HW_MMDC_MPWRDQBY2DL_WR(HW_MMDC_MPWRDQBY2DL_RD() |  (v)))
#define HW_MMDC_MPWRDQBY2DL_CLR(v)    (HW_MMDC_MPWRDQBY2DL_WR(HW_MMDC_MPWRDQBY2DL_RD() & ~(v)))
#define HW_MMDC_MPWRDQBY2DL_TOG(v)    (HW_MMDC_MPWRDQBY2DL_WR(HW_MMDC_MPWRDQBY2DL_RD() ^  (v)))
#endif

/*
 * constants & macros for individual MMDC_MPWRDQBY2DL bitfields
 */

/* --- Register HW_MMDC_MPWRDQBY2DL, field WR_DQ16_DEL[1:0] (RW)
 *
 * Write dq16 delay fine tuning. This field holds the number of delay units that are added to dq16
 * relative to dqs2.
 *
 * Values:
 * 00 - No change in dq16 delay
 * 01 - Add dq16 delay of 1 delay unit.
 * 10 - Add dq16 delay of 2 delay units.
 * 11 - Add dq16 delay of 3 delay units.
 */

#define BP_MMDC_MPWRDQBY2DL_WR_DQ16_DEL      (0)      //!< Bit position for MMDC_MPWRDQBY2DL_WR_DQ16_DEL.
#define BM_MMDC_MPWRDQBY2DL_WR_DQ16_DEL      (0x00000003)  //!< Bit mask for MMDC_MPWRDQBY2DL_WR_DQ16_DEL.

//! @brief Get value of MMDC_MPWRDQBY2DL_WR_DQ16_DEL from a register value.
#define BG_MMDC_MPWRDQBY2DL_WR_DQ16_DEL(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_MMDC_MPWRDQBY2DL_WR_DQ16_DEL) >> BP_MMDC_MPWRDQBY2DL_WR_DQ16_DEL)

//! @brief Format value for bitfield MMDC_MPWRDQBY2DL_WR_DQ16_DEL.
#define BF_MMDC_MPWRDQBY2DL_WR_DQ16_DEL(v)   ((__REG_VALUE_TYPE((v), reg32_t) << BP_MMDC_MPWRDQBY2DL_WR_DQ16_DEL) & BM_MMDC_MPWRDQBY2DL_WR_DQ16_DEL)

#ifndef __LANGUAGE_ASM__
//! @brief Set the WR_DQ16_DEL field to a new value.
#define BW_MMDC_MPWRDQBY2DL_WR_DQ16_DEL(v)   (HW_MMDC_MPWRDQBY2DL_WR((HW_MMDC_MPWRDQBY2DL_RD() & ~BM_MMDC_MPWRDQBY2DL_WR_DQ16_DEL) | BF_MMDC_MPWRDQBY2DL_WR_DQ16_DEL(v)))
#endif


/* --- Register HW_MMDC_MPWRDQBY2DL, field WR_DQ17_DEL[5:4] (RW)
 *
 * Write dq17 delay fine tuning. This field holds the number of delay units that are added to dq17
 * relative to dqs2.
 *
 * Values:
 * 00 - No change in dq17 delay
 * 01 - Add dq17 delay of 1 delay unit.
 * 10 - Add dq17 delay of 2 delay units.
 * 11 - Add dq17 delay of 3 delay units.
 */

#define BP_MMDC_MPWRDQBY2DL_WR_DQ17_DEL      (4)      //!< Bit position for MMDC_MPWRDQBY2DL_WR_DQ17_DEL.
#define BM_MMDC_MPWRDQBY2DL_WR_DQ17_DEL      (0x00000030)  //!< Bit mask for MMDC_MPWRDQBY2DL_WR_DQ17_DEL.

//! @brief Get value of MMDC_MPWRDQBY2DL_WR_DQ17_DEL from a register value.
#define BG_MMDC_MPWRDQBY2DL_WR_DQ17_DEL(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_MMDC_MPWRDQBY2DL_WR_DQ17_DEL) >> BP_MMDC_MPWRDQBY2DL_WR_DQ17_DEL)

//! @brief Format value for bitfield MMDC_MPWRDQBY2DL_WR_DQ17_DEL.
#define BF_MMDC_MPWRDQBY2DL_WR_DQ17_DEL(v)   ((__REG_VALUE_TYPE((v), reg32_t) << BP_MMDC_MPWRDQBY2DL_WR_DQ17_DEL) & BM_MMDC_MPWRDQBY2DL_WR_DQ17_DEL)

#ifndef __LANGUAGE_ASM__
//! @brief Set the WR_DQ17_DEL field to a new value.
#define BW_MMDC_MPWRDQBY2DL_WR_DQ17_DEL(v)   (HW_MMDC_MPWRDQBY2DL_WR((HW_MMDC_MPWRDQBY2DL_RD() & ~BM_MMDC_MPWRDQBY2DL_WR_DQ17_DEL) | BF_MMDC_MPWRDQBY2DL_WR_DQ17_DEL(v)))
#endif


/* --- Register HW_MMDC_MPWRDQBY2DL, field WR_DQ18_DEL[9:8] (RW)
 *
 * Write dq18 delay fine tuning. This field holds the number of delay units that are added to dq18
 * relative to dqs2.
 *
 * Values:
 * 00 - No change in dq18 delay
 * 01 - Add dq18 delay of 1 delay unit.
 * 10 - Add dq18 delay of 2 delay units.
 * 11 - Add dq18 delay of 3 delay units.
 */

#define BP_MMDC_MPWRDQBY2DL_WR_DQ18_DEL      (8)      //!< Bit position for MMDC_MPWRDQBY2DL_WR_DQ18_DEL.
#define BM_MMDC_MPWRDQBY2DL_WR_DQ18_DEL      (0x00000300)  //!< Bit mask for MMDC_MPWRDQBY2DL_WR_DQ18_DEL.

//! @brief Get value of MMDC_MPWRDQBY2DL_WR_DQ18_DEL from a register value.
#define BG_MMDC_MPWRDQBY2DL_WR_DQ18_DEL(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_MMDC_MPWRDQBY2DL_WR_DQ18_DEL) >> BP_MMDC_MPWRDQBY2DL_WR_DQ18_DEL)

//! @brief Format value for bitfield MMDC_MPWRDQBY2DL_WR_DQ18_DEL.
#define BF_MMDC_MPWRDQBY2DL_WR_DQ18_DEL(v)   ((__REG_VALUE_TYPE((v), reg32_t) << BP_MMDC_MPWRDQBY2DL_WR_DQ18_DEL) & BM_MMDC_MPWRDQBY2DL_WR_DQ18_DEL)

#ifndef __LANGUAGE_ASM__
//! @brief Set the WR_DQ18_DEL field to a new value.
#define BW_MMDC_MPWRDQBY2DL_WR_DQ18_DEL(v)   (HW_MMDC_MPWRDQBY2DL_WR((HW_MMDC_MPWRDQBY2DL_RD() & ~BM_MMDC_MPWRDQBY2DL_WR_DQ18_DEL) | BF_MMDC_MPWRDQBY2DL_WR_DQ18_DEL(v)))
#endif


/* --- Register HW_MMDC_MPWRDQBY2DL, field WR_DQ19_DEL[13:12] (RW)
 *
 * Write dq19 delay fine tuning. This field holds the number of delay units that are added to dq19
 * relative to dqs2.
 *
 * Values:
 * 00 - No change in dq19 delay
 * 01 - Add dq19 delay of 1 delay unit.
 * 10 - Add dq19 delay of 2 delay units.
 * 11 - Add dq19 delay of 3 delay units.
 */

#define BP_MMDC_MPWRDQBY2DL_WR_DQ19_DEL      (12)      //!< Bit position for MMDC_MPWRDQBY2DL_WR_DQ19_DEL.
#define BM_MMDC_MPWRDQBY2DL_WR_DQ19_DEL      (0x00003000)  //!< Bit mask for MMDC_MPWRDQBY2DL_WR_DQ19_DEL.

//! @brief Get value of MMDC_MPWRDQBY2DL_WR_DQ19_DEL from a register value.
#define BG_MMDC_MPWRDQBY2DL_WR_DQ19_DEL(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_MMDC_MPWRDQBY2DL_WR_DQ19_DEL) >> BP_MMDC_MPWRDQBY2DL_WR_DQ19_DEL)

//! @brief Format value for bitfield MMDC_MPWRDQBY2DL_WR_DQ19_DEL.
#define BF_MMDC_MPWRDQBY2DL_WR_DQ19_DEL(v)   ((__REG_VALUE_TYPE((v), reg32_t) << BP_MMDC_MPWRDQBY2DL_WR_DQ19_DEL) & BM_MMDC_MPWRDQBY2DL_WR_DQ19_DEL)

#ifndef __LANGUAGE_ASM__
//! @brief Set the WR_DQ19_DEL field to a new value.
#define BW_MMDC_MPWRDQBY2DL_WR_DQ19_DEL(v)   (HW_MMDC_MPWRDQBY2DL_WR((HW_MMDC_MPWRDQBY2DL_RD() & ~BM_MMDC_MPWRDQBY2DL_WR_DQ19_DEL) | BF_MMDC_MPWRDQBY2DL_WR_DQ19_DEL(v)))
#endif


/* --- Register HW_MMDC_MPWRDQBY2DL, field WR_DQ20_DEL[17:16] (RW)
 *
 * Write dq20 delay fine tuning. This field holds the number of delay units that are added to dq20
 * relative to dqs2.
 *
 * Values:
 * 00 - No change in dq20 delay
 * 01 - Add dq20 delay of 1 delay unit.
 * 10 - Add dq20 delay of 2 delay units.
 * 11 - Add dq20 delay of 3 delay units.
 */

#define BP_MMDC_MPWRDQBY2DL_WR_DQ20_DEL      (16)      //!< Bit position for MMDC_MPWRDQBY2DL_WR_DQ20_DEL.
#define BM_MMDC_MPWRDQBY2DL_WR_DQ20_DEL      (0x00030000)  //!< Bit mask for MMDC_MPWRDQBY2DL_WR_DQ20_DEL.

//! @brief Get value of MMDC_MPWRDQBY2DL_WR_DQ20_DEL from a register value.
#define BG_MMDC_MPWRDQBY2DL_WR_DQ20_DEL(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_MMDC_MPWRDQBY2DL_WR_DQ20_DEL) >> BP_MMDC_MPWRDQBY2DL_WR_DQ20_DEL)

//! @brief Format value for bitfield MMDC_MPWRDQBY2DL_WR_DQ20_DEL.
#define BF_MMDC_MPWRDQBY2DL_WR_DQ20_DEL(v)   ((__REG_VALUE_TYPE((v), reg32_t) << BP_MMDC_MPWRDQBY2DL_WR_DQ20_DEL) & BM_MMDC_MPWRDQBY2DL_WR_DQ20_DEL)

#ifndef __LANGUAGE_ASM__
//! @brief Set the WR_DQ20_DEL field to a new value.
#define BW_MMDC_MPWRDQBY2DL_WR_DQ20_DEL(v)   (HW_MMDC_MPWRDQBY2DL_WR((HW_MMDC_MPWRDQBY2DL_RD() & ~BM_MMDC_MPWRDQBY2DL_WR_DQ20_DEL) | BF_MMDC_MPWRDQBY2DL_WR_DQ20_DEL(v)))
#endif


/* --- Register HW_MMDC_MPWRDQBY2DL, field WR_DQ21_DEL[21:20] (RW)
 *
 * Write dq21 delay fine tuning. This field holds the number of delay units that are added to dq21
 * relative to dqs2.
 *
 * Values:
 * 00 - No change in dq21 delay
 * 01 - Add dq21 delay of 1 delay unit.
 * 10 - Add dq21 delay of 2 delay units.
 * 11 - Add dq21 delay of 3 delay units.
 */

#define BP_MMDC_MPWRDQBY2DL_WR_DQ21_DEL      (20)      //!< Bit position for MMDC_MPWRDQBY2DL_WR_DQ21_DEL.
#define BM_MMDC_MPWRDQBY2DL_WR_DQ21_DEL      (0x00300000)  //!< Bit mask for MMDC_MPWRDQBY2DL_WR_DQ21_DEL.

//! @brief Get value of MMDC_MPWRDQBY2DL_WR_DQ21_DEL from a register value.
#define BG_MMDC_MPWRDQBY2DL_WR_DQ21_DEL(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_MMDC_MPWRDQBY2DL_WR_DQ21_DEL) >> BP_MMDC_MPWRDQBY2DL_WR_DQ21_DEL)

//! @brief Format value for bitfield MMDC_MPWRDQBY2DL_WR_DQ21_DEL.
#define BF_MMDC_MPWRDQBY2DL_WR_DQ21_DEL(v)   ((__REG_VALUE_TYPE((v), reg32_t) << BP_MMDC_MPWRDQBY2DL_WR_DQ21_DEL) & BM_MMDC_MPWRDQBY2DL_WR_DQ21_DEL)

#ifndef __LANGUAGE_ASM__
//! @brief Set the WR_DQ21_DEL field to a new value.
#define BW_MMDC_MPWRDQBY2DL_WR_DQ21_DEL(v)   (HW_MMDC_MPWRDQBY2DL_WR((HW_MMDC_MPWRDQBY2DL_RD() & ~BM_MMDC_MPWRDQBY2DL_WR_DQ21_DEL) | BF_MMDC_MPWRDQBY2DL_WR_DQ21_DEL(v)))
#endif


/* --- Register HW_MMDC_MPWRDQBY2DL, field WR_DQ22_DEL[25:24] (RW)
 *
 * Write dq22 delay fine tuning. This field holds the number of delay units that are added to dq22
 * relative to dqs2.
 *
 * Values:
 * 00 - No change in dq22 delay
 * 01 - Add dq22 delay of 1 delay unit.
 * 10 - Add dq22 delay of 2 delay units.
 * 11 - Add dq22 delay of 3 delay units.
 */

#define BP_MMDC_MPWRDQBY2DL_WR_DQ22_DEL      (24)      //!< Bit position for MMDC_MPWRDQBY2DL_WR_DQ22_DEL.
#define BM_MMDC_MPWRDQBY2DL_WR_DQ22_DEL      (0x03000000)  //!< Bit mask for MMDC_MPWRDQBY2DL_WR_DQ22_DEL.

//! @brief Get value of MMDC_MPWRDQBY2DL_WR_DQ22_DEL from a register value.
#define BG_MMDC_MPWRDQBY2DL_WR_DQ22_DEL(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_MMDC_MPWRDQBY2DL_WR_DQ22_DEL) >> BP_MMDC_MPWRDQBY2DL_WR_DQ22_DEL)

//! @brief Format value for bitfield MMDC_MPWRDQBY2DL_WR_DQ22_DEL.
#define BF_MMDC_MPWRDQBY2DL_WR_DQ22_DEL(v)   ((__REG_VALUE_TYPE((v), reg32_t) << BP_MMDC_MPWRDQBY2DL_WR_DQ22_DEL) & BM_MMDC_MPWRDQBY2DL_WR_DQ22_DEL)

#ifndef __LANGUAGE_ASM__
//! @brief Set the WR_DQ22_DEL field to a new value.
#define BW_MMDC_MPWRDQBY2DL_WR_DQ22_DEL(v)   (HW_MMDC_MPWRDQBY2DL_WR((HW_MMDC_MPWRDQBY2DL_RD() & ~BM_MMDC_MPWRDQBY2DL_WR_DQ22_DEL) | BF_MMDC_MPWRDQBY2DL_WR_DQ22_DEL(v)))
#endif


/* --- Register HW_MMDC_MPWRDQBY2DL, field WR_DQ23_DEL[29:28] (RW)
 *
 * Write dq23 delay fine tuning. This field holds the number of delay units that are added to dq23
 * relative to dqs2.
 *
 * Values:
 * 00 - No change in dq23 delay
 * 01 - Add dq23 delay of 1 delay unit.
 * 10 - Add dq23 delay of 2 delay units.
 * 11 - Add dq23 delay of 3 delay units.
 */

#define BP_MMDC_MPWRDQBY2DL_WR_DQ23_DEL      (28)      //!< Bit position for MMDC_MPWRDQBY2DL_WR_DQ23_DEL.
#define BM_MMDC_MPWRDQBY2DL_WR_DQ23_DEL      (0x30000000)  //!< Bit mask for MMDC_MPWRDQBY2DL_WR_DQ23_DEL.

//! @brief Get value of MMDC_MPWRDQBY2DL_WR_DQ23_DEL from a register value.
#define BG_MMDC_MPWRDQBY2DL_WR_DQ23_DEL(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_MMDC_MPWRDQBY2DL_WR_DQ23_DEL) >> BP_MMDC_MPWRDQBY2DL_WR_DQ23_DEL)

//! @brief Format value for bitfield MMDC_MPWRDQBY2DL_WR_DQ23_DEL.
#define BF_MMDC_MPWRDQBY2DL_WR_DQ23_DEL(v)   ((__REG_VALUE_TYPE((v), reg32_t) << BP_MMDC_MPWRDQBY2DL_WR_DQ23_DEL) & BM_MMDC_MPWRDQBY2DL_WR_DQ23_DEL)

#ifndef __LANGUAGE_ASM__
//! @brief Set the WR_DQ23_DEL field to a new value.
#define BW_MMDC_MPWRDQBY2DL_WR_DQ23_DEL(v)   (HW_MMDC_MPWRDQBY2DL_WR((HW_MMDC_MPWRDQBY2DL_RD() & ~BM_MMDC_MPWRDQBY2DL_WR_DQ23_DEL) | BF_MMDC_MPWRDQBY2DL_WR_DQ23_DEL(v)))
#endif


/* --- Register HW_MMDC_MPWRDQBY2DL, field WR_DM2_DEL[31:30] (RW)
 *
 * Write dm2 delay fine-tuning. This field holds the number of delay units that are added to dm2
 * relative to dqs2.
 *
 * Values:
 * 00 - No change in dm2 delay
 * 01 - Add dm2 delay of 1 delay unit.
 * 10 - Add dm2 delay of 2 delay units.
 * 11 - Add dm2 delay of 3 delay units.
 */

#define BP_MMDC_MPWRDQBY2DL_WR_DM2_DEL      (30)      //!< Bit position for MMDC_MPWRDQBY2DL_WR_DM2_DEL.
#define BM_MMDC_MPWRDQBY2DL_WR_DM2_DEL      (0xc0000000)  //!< Bit mask for MMDC_MPWRDQBY2DL_WR_DM2_DEL.

//! @brief Get value of MMDC_MPWRDQBY2DL_WR_DM2_DEL from a register value.
#define BG_MMDC_MPWRDQBY2DL_WR_DM2_DEL(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_MMDC_MPWRDQBY2DL_WR_DM2_DEL) >> BP_MMDC_MPWRDQBY2DL_WR_DM2_DEL)

//! @brief Format value for bitfield MMDC_MPWRDQBY2DL_WR_DM2_DEL.
#define BF_MMDC_MPWRDQBY2DL_WR_DM2_DEL(v)   ((__REG_VALUE_TYPE((v), reg32_t) << BP_MMDC_MPWRDQBY2DL_WR_DM2_DEL) & BM_MMDC_MPWRDQBY2DL_WR_DM2_DEL)

#ifndef __LANGUAGE_ASM__
//! @brief Set the WR_DM2_DEL field to a new value.
#define BW_MMDC_MPWRDQBY2DL_WR_DM2_DEL(v)   (HW_MMDC_MPWRDQBY2DL_WR((HW_MMDC_MPWRDQBY2DL_RD() & ~BM_MMDC_MPWRDQBY2DL_WR_DM2_DEL) | BF_MMDC_MPWRDQBY2DL_WR_DM2_DEL(v)))
#endif


//-------------------------------------------------------------------------------------------
// HW_MMDC_MPWRDQBY3DL - MMDC PHY Write DQ Byte3 Delay Register
//-------------------------------------------------------------------------------------------

#ifndef __LANGUAGE_ASM__
/*!
 * @brief HW_MMDC_MPWRDQBY3DL - MMDC PHY Write DQ Byte3 Delay Register (RW)
 *
 * Reset value: 0x00000000
 *
 * This register is used to add fine-tuning adjustment to every bit in the write DQ byte3 relative
 * to the write DQS  Supported Mode Of Operations:  For Channel 0: All  For Channel 1: DDR3_x64,
 * LP2_2ch_x32
 */
typedef union _hw_mmdc_mpwrdqby3dl
{
    reg32_t U;
    struct _hw_mmdc_mpwrdqby3dl_bitfields
    {
        unsigned WR_DQ24_DEL : 2; //!< [1:0] Write dq24 delay fine tuning.
        unsigned RESERVED0 : 2; //!< [3:2] Reserved
        unsigned WR_DQ25_DEL : 2; //!< [5:4] Write dq25 delay fine tuning.
        unsigned RESERVED1 : 2; //!< [7:6] Reserved
        unsigned WR_DQ26_DEL : 2; //!< [9:8] Write dq26 delay fine tuning.
        unsigned RESERVED2 : 2; //!< [11:10] Reserved
        unsigned WR_DQ27_DEL : 2; //!< [13:12] Write dq27 delay fine tuning.
        unsigned RESERVED3 : 2; //!< [15:14] Reserved
        unsigned WR_DQ28_DEL : 2; //!< [17:16] Write dq28 delay fine tuning.
        unsigned RESERVED4 : 2; //!< [19:18] Reserved
        unsigned WR_DQ29_DEL : 2; //!< [21:20] Write dq29 delay fine tuning.
        unsigned RESERVED5 : 2; //!< [23:22] Reserved
        unsigned WR_DQ30_DEL : 2; //!< [25:24] Write dq30 delay fine tuning.
        unsigned RESERVED6 : 2; //!< [27:26] Reserved
        unsigned WR_DQ31_DEL : 2; //!< [29:28] Write dq31 delay fine tuning.
        unsigned WR_DM3_DEL : 2; //!< [31:30] Write dm3 delay fine tuning.
    } B;
} hw_mmdc_mpwrdqby3dl_t;
#endif

/*
 * constants & macros for entire MMDC_MPWRDQBY3DL register
 */
#define HW_MMDC_MPWRDQBY3DL_ADDR      (REGS_MMDC_BASE + 0x838)

#ifndef __LANGUAGE_ASM__
#define HW_MMDC_MPWRDQBY3DL           (*(volatile hw_mmdc_mpwrdqby3dl_t *) HW_MMDC_MPWRDQBY3DL_ADDR)
#define HW_MMDC_MPWRDQBY3DL_RD()      (HW_MMDC_MPWRDQBY3DL.U)
#define HW_MMDC_MPWRDQBY3DL_WR(v)     (HW_MMDC_MPWRDQBY3DL.U = (v))
#define HW_MMDC_MPWRDQBY3DL_SET(v)    (HW_MMDC_MPWRDQBY3DL_WR(HW_MMDC_MPWRDQBY3DL_RD() |  (v)))
#define HW_MMDC_MPWRDQBY3DL_CLR(v)    (HW_MMDC_MPWRDQBY3DL_WR(HW_MMDC_MPWRDQBY3DL_RD() & ~(v)))
#define HW_MMDC_MPWRDQBY3DL_TOG(v)    (HW_MMDC_MPWRDQBY3DL_WR(HW_MMDC_MPWRDQBY3DL_RD() ^  (v)))
#endif

/*
 * constants & macros for individual MMDC_MPWRDQBY3DL bitfields
 */

/* --- Register HW_MMDC_MPWRDQBY3DL, field WR_DQ24_DEL[1:0] (RW)
 *
 * Write dq24 delay fine tuning. This field holds the number of delay units that are added to dq24
 * relative to dqs3.
 *
 * Values:
 * 00 - No change in dq24 delay
 * 01 - Add dq24 delay of 1 delay unit.
 * 10 - Add dq24 delay of 2 delay units.
 * 11 - Add dq24 delay of 3 delay units.
 */

#define BP_MMDC_MPWRDQBY3DL_WR_DQ24_DEL      (0)      //!< Bit position for MMDC_MPWRDQBY3DL_WR_DQ24_DEL.
#define BM_MMDC_MPWRDQBY3DL_WR_DQ24_DEL      (0x00000003)  //!< Bit mask for MMDC_MPWRDQBY3DL_WR_DQ24_DEL.

//! @brief Get value of MMDC_MPWRDQBY3DL_WR_DQ24_DEL from a register value.
#define BG_MMDC_MPWRDQBY3DL_WR_DQ24_DEL(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_MMDC_MPWRDQBY3DL_WR_DQ24_DEL) >> BP_MMDC_MPWRDQBY3DL_WR_DQ24_DEL)

//! @brief Format value for bitfield MMDC_MPWRDQBY3DL_WR_DQ24_DEL.
#define BF_MMDC_MPWRDQBY3DL_WR_DQ24_DEL(v)   ((__REG_VALUE_TYPE((v), reg32_t) << BP_MMDC_MPWRDQBY3DL_WR_DQ24_DEL) & BM_MMDC_MPWRDQBY3DL_WR_DQ24_DEL)

#ifndef __LANGUAGE_ASM__
//! @brief Set the WR_DQ24_DEL field to a new value.
#define BW_MMDC_MPWRDQBY3DL_WR_DQ24_DEL(v)   (HW_MMDC_MPWRDQBY3DL_WR((HW_MMDC_MPWRDQBY3DL_RD() & ~BM_MMDC_MPWRDQBY3DL_WR_DQ24_DEL) | BF_MMDC_MPWRDQBY3DL_WR_DQ24_DEL(v)))
#endif


/* --- Register HW_MMDC_MPWRDQBY3DL, field WR_DQ25_DEL[5:4] (RW)
 *
 * Write dq25 delay fine tuning. This field holds the number of delay units that are added to dq25
 * relative to dqs3.
 *
 * Values:
 * 00 - No change in dq25 delay
 * 01 - Add dq25 delay of 1 delay unit.
 * 10 - Add dq25 delay of 2 delay units.
 * 11 - Add dq25 delay of 3 delay units.
 */

#define BP_MMDC_MPWRDQBY3DL_WR_DQ25_DEL      (4)      //!< Bit position for MMDC_MPWRDQBY3DL_WR_DQ25_DEL.
#define BM_MMDC_MPWRDQBY3DL_WR_DQ25_DEL      (0x00000030)  //!< Bit mask for MMDC_MPWRDQBY3DL_WR_DQ25_DEL.

//! @brief Get value of MMDC_MPWRDQBY3DL_WR_DQ25_DEL from a register value.
#define BG_MMDC_MPWRDQBY3DL_WR_DQ25_DEL(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_MMDC_MPWRDQBY3DL_WR_DQ25_DEL) >> BP_MMDC_MPWRDQBY3DL_WR_DQ25_DEL)

//! @brief Format value for bitfield MMDC_MPWRDQBY3DL_WR_DQ25_DEL.
#define BF_MMDC_MPWRDQBY3DL_WR_DQ25_DEL(v)   ((__REG_VALUE_TYPE((v), reg32_t) << BP_MMDC_MPWRDQBY3DL_WR_DQ25_DEL) & BM_MMDC_MPWRDQBY3DL_WR_DQ25_DEL)

#ifndef __LANGUAGE_ASM__
//! @brief Set the WR_DQ25_DEL field to a new value.
#define BW_MMDC_MPWRDQBY3DL_WR_DQ25_DEL(v)   (HW_MMDC_MPWRDQBY3DL_WR((HW_MMDC_MPWRDQBY3DL_RD() & ~BM_MMDC_MPWRDQBY3DL_WR_DQ25_DEL) | BF_MMDC_MPWRDQBY3DL_WR_DQ25_DEL(v)))
#endif


/* --- Register HW_MMDC_MPWRDQBY3DL, field WR_DQ26_DEL[9:8] (RW)
 *
 * Write dq26 delay fine tuning. This field holds the number of delay units that are added to dq26
 * relative to dqs3.
 *
 * Values:
 * 00 - No change in dq26 delay
 * 01 - Add dq26 delay of 1 delay unit.
 * 10 - Add dq26 delay of 2 delay units.
 * 11 - Add dq26 delay of 3 delay units.
 */

#define BP_MMDC_MPWRDQBY3DL_WR_DQ26_DEL      (8)      //!< Bit position for MMDC_MPWRDQBY3DL_WR_DQ26_DEL.
#define BM_MMDC_MPWRDQBY3DL_WR_DQ26_DEL      (0x00000300)  //!< Bit mask for MMDC_MPWRDQBY3DL_WR_DQ26_DEL.

//! @brief Get value of MMDC_MPWRDQBY3DL_WR_DQ26_DEL from a register value.
#define BG_MMDC_MPWRDQBY3DL_WR_DQ26_DEL(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_MMDC_MPWRDQBY3DL_WR_DQ26_DEL) >> BP_MMDC_MPWRDQBY3DL_WR_DQ26_DEL)

//! @brief Format value for bitfield MMDC_MPWRDQBY3DL_WR_DQ26_DEL.
#define BF_MMDC_MPWRDQBY3DL_WR_DQ26_DEL(v)   ((__REG_VALUE_TYPE((v), reg32_t) << BP_MMDC_MPWRDQBY3DL_WR_DQ26_DEL) & BM_MMDC_MPWRDQBY3DL_WR_DQ26_DEL)

#ifndef __LANGUAGE_ASM__
//! @brief Set the WR_DQ26_DEL field to a new value.
#define BW_MMDC_MPWRDQBY3DL_WR_DQ26_DEL(v)   (HW_MMDC_MPWRDQBY3DL_WR((HW_MMDC_MPWRDQBY3DL_RD() & ~BM_MMDC_MPWRDQBY3DL_WR_DQ26_DEL) | BF_MMDC_MPWRDQBY3DL_WR_DQ26_DEL(v)))
#endif


/* --- Register HW_MMDC_MPWRDQBY3DL, field WR_DQ27_DEL[13:12] (RW)
 *
 * Write dq27 delay fine tuning. This field holds the number of delay units that are added to dq27
 * relative to dqs3.
 *
 * Values:
 * 00 - No change in dq27 delay
 * 01 - Add dq27 delay of 1 delay unit.
 * 10 - Add dq27 delay of 2 delay units.
 * 11 - Add dq27 delay of 3 delay units.
 */

#define BP_MMDC_MPWRDQBY3DL_WR_DQ27_DEL      (12)      //!< Bit position for MMDC_MPWRDQBY3DL_WR_DQ27_DEL.
#define BM_MMDC_MPWRDQBY3DL_WR_DQ27_DEL      (0x00003000)  //!< Bit mask for MMDC_MPWRDQBY3DL_WR_DQ27_DEL.

//! @brief Get value of MMDC_MPWRDQBY3DL_WR_DQ27_DEL from a register value.
#define BG_MMDC_MPWRDQBY3DL_WR_DQ27_DEL(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_MMDC_MPWRDQBY3DL_WR_DQ27_DEL) >> BP_MMDC_MPWRDQBY3DL_WR_DQ27_DEL)

//! @brief Format value for bitfield MMDC_MPWRDQBY3DL_WR_DQ27_DEL.
#define BF_MMDC_MPWRDQBY3DL_WR_DQ27_DEL(v)   ((__REG_VALUE_TYPE((v), reg32_t) << BP_MMDC_MPWRDQBY3DL_WR_DQ27_DEL) & BM_MMDC_MPWRDQBY3DL_WR_DQ27_DEL)

#ifndef __LANGUAGE_ASM__
//! @brief Set the WR_DQ27_DEL field to a new value.
#define BW_MMDC_MPWRDQBY3DL_WR_DQ27_DEL(v)   (HW_MMDC_MPWRDQBY3DL_WR((HW_MMDC_MPWRDQBY3DL_RD() & ~BM_MMDC_MPWRDQBY3DL_WR_DQ27_DEL) | BF_MMDC_MPWRDQBY3DL_WR_DQ27_DEL(v)))
#endif


/* --- Register HW_MMDC_MPWRDQBY3DL, field WR_DQ28_DEL[17:16] (RW)
 *
 * Write dq28 delay fine tuning. This field holds the number of delay units that are added to dq28
 * relative to dqs3.
 *
 * Values:
 * 00 - No change in dq28 delay
 * 01 - Add dq28 delay of 1 delay unit.
 * 10 - Add dq28 delay of 2 delay units.
 * 11 - Add dq28 delay of 3 delay units.
 */

#define BP_MMDC_MPWRDQBY3DL_WR_DQ28_DEL      (16)      //!< Bit position for MMDC_MPWRDQBY3DL_WR_DQ28_DEL.
#define BM_MMDC_MPWRDQBY3DL_WR_DQ28_DEL      (0x00030000)  //!< Bit mask for MMDC_MPWRDQBY3DL_WR_DQ28_DEL.

//! @brief Get value of MMDC_MPWRDQBY3DL_WR_DQ28_DEL from a register value.
#define BG_MMDC_MPWRDQBY3DL_WR_DQ28_DEL(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_MMDC_MPWRDQBY3DL_WR_DQ28_DEL) >> BP_MMDC_MPWRDQBY3DL_WR_DQ28_DEL)

//! @brief Format value for bitfield MMDC_MPWRDQBY3DL_WR_DQ28_DEL.
#define BF_MMDC_MPWRDQBY3DL_WR_DQ28_DEL(v)   ((__REG_VALUE_TYPE((v), reg32_t) << BP_MMDC_MPWRDQBY3DL_WR_DQ28_DEL) & BM_MMDC_MPWRDQBY3DL_WR_DQ28_DEL)

#ifndef __LANGUAGE_ASM__
//! @brief Set the WR_DQ28_DEL field to a new value.
#define BW_MMDC_MPWRDQBY3DL_WR_DQ28_DEL(v)   (HW_MMDC_MPWRDQBY3DL_WR((HW_MMDC_MPWRDQBY3DL_RD() & ~BM_MMDC_MPWRDQBY3DL_WR_DQ28_DEL) | BF_MMDC_MPWRDQBY3DL_WR_DQ28_DEL(v)))
#endif


/* --- Register HW_MMDC_MPWRDQBY3DL, field WR_DQ29_DEL[21:20] (RW)
 *
 * Write dq29 delay fine tuning. This field holds the number of delay units that are added to dq29
 * relative to dqs3.
 *
 * Values:
 * 00 - No change in dq29 delay
 * 01 - Add dq29 delay of 1 delay unit.
 * 10 - Add dq29 delay of 2 delay units.
 * 11 - Add dq29 delay of 3 delay units.
 */

#define BP_MMDC_MPWRDQBY3DL_WR_DQ29_DEL      (20)      //!< Bit position for MMDC_MPWRDQBY3DL_WR_DQ29_DEL.
#define BM_MMDC_MPWRDQBY3DL_WR_DQ29_DEL      (0x00300000)  //!< Bit mask for MMDC_MPWRDQBY3DL_WR_DQ29_DEL.

//! @brief Get value of MMDC_MPWRDQBY3DL_WR_DQ29_DEL from a register value.
#define BG_MMDC_MPWRDQBY3DL_WR_DQ29_DEL(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_MMDC_MPWRDQBY3DL_WR_DQ29_DEL) >> BP_MMDC_MPWRDQBY3DL_WR_DQ29_DEL)

//! @brief Format value for bitfield MMDC_MPWRDQBY3DL_WR_DQ29_DEL.
#define BF_MMDC_MPWRDQBY3DL_WR_DQ29_DEL(v)   ((__REG_VALUE_TYPE((v), reg32_t) << BP_MMDC_MPWRDQBY3DL_WR_DQ29_DEL) & BM_MMDC_MPWRDQBY3DL_WR_DQ29_DEL)

#ifndef __LANGUAGE_ASM__
//! @brief Set the WR_DQ29_DEL field to a new value.
#define BW_MMDC_MPWRDQBY3DL_WR_DQ29_DEL(v)   (HW_MMDC_MPWRDQBY3DL_WR((HW_MMDC_MPWRDQBY3DL_RD() & ~BM_MMDC_MPWRDQBY3DL_WR_DQ29_DEL) | BF_MMDC_MPWRDQBY3DL_WR_DQ29_DEL(v)))
#endif


/* --- Register HW_MMDC_MPWRDQBY3DL, field WR_DQ30_DEL[25:24] (RW)
 *
 * Write dq30 delay fine tuning. This field holds the number of delay units that are added to dq30
 * relative to dqs3.
 *
 * Values:
 * 00 - No change in dq30 delay
 * 01 - Add dq30 delay of 1 delay unit.
 * 10 - Add dq30 delay of 2 delay units.
 * 11 - Add dq30 delay of 3 delay units.
 */

#define BP_MMDC_MPWRDQBY3DL_WR_DQ30_DEL      (24)      //!< Bit position for MMDC_MPWRDQBY3DL_WR_DQ30_DEL.
#define BM_MMDC_MPWRDQBY3DL_WR_DQ30_DEL      (0x03000000)  //!< Bit mask for MMDC_MPWRDQBY3DL_WR_DQ30_DEL.

//! @brief Get value of MMDC_MPWRDQBY3DL_WR_DQ30_DEL from a register value.
#define BG_MMDC_MPWRDQBY3DL_WR_DQ30_DEL(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_MMDC_MPWRDQBY3DL_WR_DQ30_DEL) >> BP_MMDC_MPWRDQBY3DL_WR_DQ30_DEL)

//! @brief Format value for bitfield MMDC_MPWRDQBY3DL_WR_DQ30_DEL.
#define BF_MMDC_MPWRDQBY3DL_WR_DQ30_DEL(v)   ((__REG_VALUE_TYPE((v), reg32_t) << BP_MMDC_MPWRDQBY3DL_WR_DQ30_DEL) & BM_MMDC_MPWRDQBY3DL_WR_DQ30_DEL)

#ifndef __LANGUAGE_ASM__
//! @brief Set the WR_DQ30_DEL field to a new value.
#define BW_MMDC_MPWRDQBY3DL_WR_DQ30_DEL(v)   (HW_MMDC_MPWRDQBY3DL_WR((HW_MMDC_MPWRDQBY3DL_RD() & ~BM_MMDC_MPWRDQBY3DL_WR_DQ30_DEL) | BF_MMDC_MPWRDQBY3DL_WR_DQ30_DEL(v)))
#endif


/* --- Register HW_MMDC_MPWRDQBY3DL, field WR_DQ31_DEL[29:28] (RW)
 *
 * Write dq31 delay fine tuning. This field holds the number of delay units that are added to dq31
 * relative to dqs3.
 *
 * Values:
 * 00 - No change in dq31 delay
 * 01 - Add dq31 delay of 1 delay unit.
 * 10 - Add dq31 delay of 2 delay units.
 * 11 - Add dq31 delay of 3 delay units.
 */

#define BP_MMDC_MPWRDQBY3DL_WR_DQ31_DEL      (28)      //!< Bit position for MMDC_MPWRDQBY3DL_WR_DQ31_DEL.
#define BM_MMDC_MPWRDQBY3DL_WR_DQ31_DEL      (0x30000000)  //!< Bit mask for MMDC_MPWRDQBY3DL_WR_DQ31_DEL.

//! @brief Get value of MMDC_MPWRDQBY3DL_WR_DQ31_DEL from a register value.
#define BG_MMDC_MPWRDQBY3DL_WR_DQ31_DEL(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_MMDC_MPWRDQBY3DL_WR_DQ31_DEL) >> BP_MMDC_MPWRDQBY3DL_WR_DQ31_DEL)

//! @brief Format value for bitfield MMDC_MPWRDQBY3DL_WR_DQ31_DEL.
#define BF_MMDC_MPWRDQBY3DL_WR_DQ31_DEL(v)   ((__REG_VALUE_TYPE((v), reg32_t) << BP_MMDC_MPWRDQBY3DL_WR_DQ31_DEL) & BM_MMDC_MPWRDQBY3DL_WR_DQ31_DEL)

#ifndef __LANGUAGE_ASM__
//! @brief Set the WR_DQ31_DEL field to a new value.
#define BW_MMDC_MPWRDQBY3DL_WR_DQ31_DEL(v)   (HW_MMDC_MPWRDQBY3DL_WR((HW_MMDC_MPWRDQBY3DL_RD() & ~BM_MMDC_MPWRDQBY3DL_WR_DQ31_DEL) | BF_MMDC_MPWRDQBY3DL_WR_DQ31_DEL(v)))
#endif


/* --- Register HW_MMDC_MPWRDQBY3DL, field WR_DM3_DEL[31:30] (RW)
 *
 * Write dm3 delay fine tuning. This field holds the number of delay units that are added to dm3
 * relative to dqs3.
 *
 * Values:
 * 00 - No change in dm3 delay
 * 01 - Add dm3 delay of 1 delay unit.
 * 10 - Add dm3 delay of 2 delay units.
 * 11 - Add dm3 delay of 3 delay units.
 */

#define BP_MMDC_MPWRDQBY3DL_WR_DM3_DEL      (30)      //!< Bit position for MMDC_MPWRDQBY3DL_WR_DM3_DEL.
#define BM_MMDC_MPWRDQBY3DL_WR_DM3_DEL      (0xc0000000)  //!< Bit mask for MMDC_MPWRDQBY3DL_WR_DM3_DEL.

//! @brief Get value of MMDC_MPWRDQBY3DL_WR_DM3_DEL from a register value.
#define BG_MMDC_MPWRDQBY3DL_WR_DM3_DEL(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_MMDC_MPWRDQBY3DL_WR_DM3_DEL) >> BP_MMDC_MPWRDQBY3DL_WR_DM3_DEL)

//! @brief Format value for bitfield MMDC_MPWRDQBY3DL_WR_DM3_DEL.
#define BF_MMDC_MPWRDQBY3DL_WR_DM3_DEL(v)   ((__REG_VALUE_TYPE((v), reg32_t) << BP_MMDC_MPWRDQBY3DL_WR_DM3_DEL) & BM_MMDC_MPWRDQBY3DL_WR_DM3_DEL)

#ifndef __LANGUAGE_ASM__
//! @brief Set the WR_DM3_DEL field to a new value.
#define BW_MMDC_MPWRDQBY3DL_WR_DM3_DEL(v)   (HW_MMDC_MPWRDQBY3DL_WR((HW_MMDC_MPWRDQBY3DL_RD() & ~BM_MMDC_MPWRDQBY3DL_WR_DM3_DEL) | BF_MMDC_MPWRDQBY3DL_WR_DM3_DEL(v)))
#endif


//-------------------------------------------------------------------------------------------
// HW_MMDC_MPDGCTRL0 - MMDC PHY Read DQS Gating Control Register 0
//-------------------------------------------------------------------------------------------

#ifndef __LANGUAGE_ASM__
/*!
 * @brief HW_MMDC_MPDGCTRL0 - MMDC PHY Read DQS Gating Control Register 0 (RW)
 *
 * Reset value: 0x00000000
 *
 * Supported Mode Of Operations:  For Channel 0: DDR3_x16, DDR3_x32, DDR3_x64  For Channel 1:
 * DDR3_x64
 */
typedef union _hw_mmdc_mpdgctrl0
{
    reg32_t U;
    struct _hw_mmdc_mpdgctrl0_bitfields
    {
        unsigned DG_DL_ABS_OFFSET0 : 7; //!< [6:0] Absolute read DQS gating delay offset for Byte0.
        unsigned RESERVED0 : 1; //!< [7] Reserved
        unsigned DG_HC_DEL0 : 4; //!< [11:8] Read DQS gating half cycles delay for Byte0 (Channel 0 register) and Byte4 in 64-bit mode (Channel 1 register) .
        unsigned HW_DG_ERR : 1; //!< [12] HW DQS gating error.
        unsigned RESERVED1 : 3; //!< [15:13] Reserved
        unsigned DG_DL_ABS_OFFSET1 : 7; //!< [22:16] Absolute read DQS gating delay offset for Byte1.
        unsigned DG_EXT_UP : 1; //!< [23] DG extend upper boundary.
        unsigned DG_HC_DEL1 : 4; //!< [27:24] Read DQS gating half cycles delay for Byte1 (channel 0 register) and Byte5 in 64-bit mode (channel 1 register) .
        unsigned HW_DG_EN : 1; //!< [28] Enable automatic read DQS gating calibration.
        unsigned DG_DIS : 1; //!< [29] Read DQS gating disable.
        unsigned DG_CMP_CYC : 1; //!< [30] Read DQS gating sample cycle.
        unsigned RST_RD_FIFO : 1; //!< [31] Reset Read Data FIFO and associated pointers.
    } B;
} hw_mmdc_mpdgctrl0_t;
#endif

/*
 * constants & macros for entire MMDC_MPDGCTRL0 register
 */
#define HW_MMDC_MPDGCTRL0_ADDR      (REGS_MMDC_BASE + 0x83c)

#ifndef __LANGUAGE_ASM__
#define HW_MMDC_MPDGCTRL0           (*(volatile hw_mmdc_mpdgctrl0_t *) HW_MMDC_MPDGCTRL0_ADDR)
#define HW_MMDC_MPDGCTRL0_RD()      (HW_MMDC_MPDGCTRL0.U)
#define HW_MMDC_MPDGCTRL0_WR(v)     (HW_MMDC_MPDGCTRL0.U = (v))
#define HW_MMDC_MPDGCTRL0_SET(v)    (HW_MMDC_MPDGCTRL0_WR(HW_MMDC_MPDGCTRL0_RD() |  (v)))
#define HW_MMDC_MPDGCTRL0_CLR(v)    (HW_MMDC_MPDGCTRL0_WR(HW_MMDC_MPDGCTRL0_RD() & ~(v)))
#define HW_MMDC_MPDGCTRL0_TOG(v)    (HW_MMDC_MPDGCTRL0_WR(HW_MMDC_MPDGCTRL0_RD() ^  (v)))
#endif

/*
 * constants & macros for individual MMDC_MPDGCTRL0 bitfields
 */

/* --- Register HW_MMDC_MPDGCTRL0, field DG_DL_ABS_OFFSET0[6:0] (RW)
 *
 * Absolute read DQS gating delay offset for Byte0. This field indicates the absolute delay between
 * read DQS gate and the middle of the read DQS preamble of Byte0 with fractions of a clock period
 * and up to half cycle.The fraction is process and frequency independent. The delay of the delay-
 * line would be (DG_DL_ABS_OFFSET0 / 256)* fast_clk. This field can also bit written by HW. Upon
 * completion of the automatic read DQS gating calibration this field gets the value of the 7 LSB of
 * ((HW_DG_LOW0 + HW_DG_UP0) /2). Note that not all changes will have effect on the actual delay. If
 * the requested change is smaller than the delay-line resolution, then no change will occur.
 */

#define BP_MMDC_MPDGCTRL0_DG_DL_ABS_OFFSET0      (0)      //!< Bit position for MMDC_MPDGCTRL0_DG_DL_ABS_OFFSET0.
#define BM_MMDC_MPDGCTRL0_DG_DL_ABS_OFFSET0      (0x0000007f)  //!< Bit mask for MMDC_MPDGCTRL0_DG_DL_ABS_OFFSET0.

//! @brief Get value of MMDC_MPDGCTRL0_DG_DL_ABS_OFFSET0 from a register value.
#define BG_MMDC_MPDGCTRL0_DG_DL_ABS_OFFSET0(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_MMDC_MPDGCTRL0_DG_DL_ABS_OFFSET0) >> BP_MMDC_MPDGCTRL0_DG_DL_ABS_OFFSET0)

//! @brief Format value for bitfield MMDC_MPDGCTRL0_DG_DL_ABS_OFFSET0.
#define BF_MMDC_MPDGCTRL0_DG_DL_ABS_OFFSET0(v)   ((__REG_VALUE_TYPE((v), reg32_t) << BP_MMDC_MPDGCTRL0_DG_DL_ABS_OFFSET0) & BM_MMDC_MPDGCTRL0_DG_DL_ABS_OFFSET0)

#ifndef __LANGUAGE_ASM__
//! @brief Set the DG_DL_ABS_OFFSET0 field to a new value.
#define BW_MMDC_MPDGCTRL0_DG_DL_ABS_OFFSET0(v)   (HW_MMDC_MPDGCTRL0_WR((HW_MMDC_MPDGCTRL0_RD() & ~BM_MMDC_MPDGCTRL0_DG_DL_ABS_OFFSET0) | BF_MMDC_MPDGCTRL0_DG_DL_ABS_OFFSET0(v)))
#endif

/* --- Register HW_MMDC_MPDGCTRL0, field DG_HC_DEL0[11:8] (RW)
 *
 * Read DQS gating half cycles delay for Byte0 (Channel 0 register) and Byte4 in 64-bit mode
 * (Channel 1 register) . This field indicates the delay in half cycles between read DQS gate and
 * the middle of the read DQS preamble of Byte0/4. This delay is added to the delay that is
 * genearted by the read DQS1 gating delay-line, So the total read DQS gating delay is
 * (DG_HC_DEL#)*0.5*cycle + (DG_DL_ABS_OFFSET#)*1/256*cycle Upon completion of the automatic read
 * DQS gating calibration this field gets the value of the 4 MSB of ((HW_DG_LOW1 + HW_DG_UP1) /2).
 *
 * Values:
 * 0000 - 0 cycles delay.
 * 0001 - Half cycle delay.
 * 0010 - 1 cycle delay
 * 1101 - 6.5 cycles delay
 * 1110 - Reserved
 * 1111 - Reserved
 */

#define BP_MMDC_MPDGCTRL0_DG_HC_DEL0      (8)      //!< Bit position for MMDC_MPDGCTRL0_DG_HC_DEL0.
#define BM_MMDC_MPDGCTRL0_DG_HC_DEL0      (0x00000f00)  //!< Bit mask for MMDC_MPDGCTRL0_DG_HC_DEL0.

//! @brief Get value of MMDC_MPDGCTRL0_DG_HC_DEL0 from a register value.
#define BG_MMDC_MPDGCTRL0_DG_HC_DEL0(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_MMDC_MPDGCTRL0_DG_HC_DEL0) >> BP_MMDC_MPDGCTRL0_DG_HC_DEL0)

//! @brief Format value for bitfield MMDC_MPDGCTRL0_DG_HC_DEL0.
#define BF_MMDC_MPDGCTRL0_DG_HC_DEL0(v)   ((__REG_VALUE_TYPE((v), reg32_t) << BP_MMDC_MPDGCTRL0_DG_HC_DEL0) & BM_MMDC_MPDGCTRL0_DG_HC_DEL0)

#ifndef __LANGUAGE_ASM__
//! @brief Set the DG_HC_DEL0 field to a new value.
#define BW_MMDC_MPDGCTRL0_DG_HC_DEL0(v)   (HW_MMDC_MPDGCTRL0_WR((HW_MMDC_MPDGCTRL0_RD() & ~BM_MMDC_MPDGCTRL0_DG_HC_DEL0) | BF_MMDC_MPDGCTRL0_DG_HC_DEL0(v)))
#endif


/* --- Register HW_MMDC_MPDGCTRL0, field HW_DG_ERR[12] (RO)
 *
 * HW DQS gating error. This bit valid is asserted when an error was found during the read DQS
 * gating HW calibration process. Error can occur when no valid value was found during HW
 * calibration. This bit is valid only after HW_DG_EN is de-asserted.
 *
 * Values:
 * 0 - No error was found during the DQS gating HW calibration process.
 * 1 - An error was found during the DQS gating HW calibration process.
 */

#define BP_MMDC_MPDGCTRL0_HW_DG_ERR      (12)      //!< Bit position for MMDC_MPDGCTRL0_HW_DG_ERR.
#define BM_MMDC_MPDGCTRL0_HW_DG_ERR      (0x00001000)  //!< Bit mask for MMDC_MPDGCTRL0_HW_DG_ERR.

//! @brief Get value of MMDC_MPDGCTRL0_HW_DG_ERR from a register value.
#define BG_MMDC_MPDGCTRL0_HW_DG_ERR(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_MMDC_MPDGCTRL0_HW_DG_ERR) >> BP_MMDC_MPDGCTRL0_HW_DG_ERR)


/* --- Register HW_MMDC_MPDGCTRL0, field DG_DL_ABS_OFFSET1[22:16] (RW)
 *
 * Absolute read DQS gating delay offset for Byte1. This field indicates the absolute delay between
 * read DQS gate and the middle of the read DQS preamble of Byte1 with fractions of a clock period
 * and up to half cycle.The fraction is process and frequency independent. The delay of the delay-
 * line would be (DG_DL_ABS_OFFSET1 / 256)* fast_clk. This field can also bit written by HW. Upon
 * completion of the automatic read DQS gating calibration this field gets the value of the 7 LSB of
 * ((HW_DG_LOW1 + HW_DG_UP1) /2). Note that not all changes will have effect on the actual delay. If
 * the requested change is smaller than the delay-line resolution, then no change will occur.
 */

#define BP_MMDC_MPDGCTRL0_DG_DL_ABS_OFFSET1      (16)      //!< Bit position for MMDC_MPDGCTRL0_DG_DL_ABS_OFFSET1.
#define BM_MMDC_MPDGCTRL0_DG_DL_ABS_OFFSET1      (0x007f0000)  //!< Bit mask for MMDC_MPDGCTRL0_DG_DL_ABS_OFFSET1.

//! @brief Get value of MMDC_MPDGCTRL0_DG_DL_ABS_OFFSET1 from a register value.
#define BG_MMDC_MPDGCTRL0_DG_DL_ABS_OFFSET1(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_MMDC_MPDGCTRL0_DG_DL_ABS_OFFSET1) >> BP_MMDC_MPDGCTRL0_DG_DL_ABS_OFFSET1)

//! @brief Format value for bitfield MMDC_MPDGCTRL0_DG_DL_ABS_OFFSET1.
#define BF_MMDC_MPDGCTRL0_DG_DL_ABS_OFFSET1(v)   ((__REG_VALUE_TYPE((v), reg32_t) << BP_MMDC_MPDGCTRL0_DG_DL_ABS_OFFSET1) & BM_MMDC_MPDGCTRL0_DG_DL_ABS_OFFSET1)

#ifndef __LANGUAGE_ASM__
//! @brief Set the DG_DL_ABS_OFFSET1 field to a new value.
#define BW_MMDC_MPDGCTRL0_DG_DL_ABS_OFFSET1(v)   (HW_MMDC_MPDGCTRL0_WR((HW_MMDC_MPDGCTRL0_RD() & ~BM_MMDC_MPDGCTRL0_DG_DL_ABS_OFFSET1) | BF_MMDC_MPDGCTRL0_DG_DL_ABS_OFFSET1(v)))
#endif

/* --- Register HW_MMDC_MPDGCTRL0, field DG_EXT_UP[23] (RW)
 *
 * DG extend upper boundary. By default the upper boundary of DQS gating HW calibration is set
 * according to first failing comparison after at least one passing comparison. If this bit is
 * asserted then the upper boundary is set accroding to the last passing comparison.
 */

#define BP_MMDC_MPDGCTRL0_DG_EXT_UP      (23)      //!< Bit position for MMDC_MPDGCTRL0_DG_EXT_UP.
#define BM_MMDC_MPDGCTRL0_DG_EXT_UP      (0x00800000)  //!< Bit mask for MMDC_MPDGCTRL0_DG_EXT_UP.

//! @brief Get value of MMDC_MPDGCTRL0_DG_EXT_UP from a register value.
#define BG_MMDC_MPDGCTRL0_DG_EXT_UP(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_MMDC_MPDGCTRL0_DG_EXT_UP) >> BP_MMDC_MPDGCTRL0_DG_EXT_UP)

//! @brief Format value for bitfield MMDC_MPDGCTRL0_DG_EXT_UP.
#define BF_MMDC_MPDGCTRL0_DG_EXT_UP(v)   ((__REG_VALUE_TYPE((v), reg32_t) << BP_MMDC_MPDGCTRL0_DG_EXT_UP) & BM_MMDC_MPDGCTRL0_DG_EXT_UP)

#ifndef __LANGUAGE_ASM__
//! @brief Set the DG_EXT_UP field to a new value.
#define BW_MMDC_MPDGCTRL0_DG_EXT_UP(v)   (HW_MMDC_MPDGCTRL0_WR((HW_MMDC_MPDGCTRL0_RD() & ~BM_MMDC_MPDGCTRL0_DG_EXT_UP) | BF_MMDC_MPDGCTRL0_DG_EXT_UP(v)))
#endif

/* --- Register HW_MMDC_MPDGCTRL0, field DG_HC_DEL1[27:24] (RW)
 *
 * Read DQS gating half cycles delay for Byte1 (channel 0 register) and Byte5 in 64-bit mode
 * (channel 1 register) . This field indicates the delay in half cycles between read DQS gate and
 * the middle of the read DQS preamble of Byte1. This delay is added to the delay that is genearted
 * by the read DQS1 gating delay-line, So the total read DQS gating delay is (DG_HC_DEL#)*0.5*cycle
 * + (DG_DL_ABS_OFFSET#)*1/256*cycle Upon completion of the automatic read DQS gating calibration
 * this field gets the value of the 4 MSB of ((HW_DG_LOW1 + HW_DG_UP1) /2).
 *
 * Values:
 * 0000 - 0 cycles delay.
 * 0001 - Half cycle delay.
 * 0010 - 1 cycle delay
 * 1101 - 6.5 cycles delay
 * 1110 - Reserved
 * 1111 - Reserved
 */

#define BP_MMDC_MPDGCTRL0_DG_HC_DEL1      (24)      //!< Bit position for MMDC_MPDGCTRL0_DG_HC_DEL1.
#define BM_MMDC_MPDGCTRL0_DG_HC_DEL1      (0x0f000000)  //!< Bit mask for MMDC_MPDGCTRL0_DG_HC_DEL1.

//! @brief Get value of MMDC_MPDGCTRL0_DG_HC_DEL1 from a register value.
#define BG_MMDC_MPDGCTRL0_DG_HC_DEL1(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_MMDC_MPDGCTRL0_DG_HC_DEL1) >> BP_MMDC_MPDGCTRL0_DG_HC_DEL1)

//! @brief Format value for bitfield MMDC_MPDGCTRL0_DG_HC_DEL1.
#define BF_MMDC_MPDGCTRL0_DG_HC_DEL1(v)   ((__REG_VALUE_TYPE((v), reg32_t) << BP_MMDC_MPDGCTRL0_DG_HC_DEL1) & BM_MMDC_MPDGCTRL0_DG_HC_DEL1)

#ifndef __LANGUAGE_ASM__
//! @brief Set the DG_HC_DEL1 field to a new value.
#define BW_MMDC_MPDGCTRL0_DG_HC_DEL1(v)   (HW_MMDC_MPDGCTRL0_WR((HW_MMDC_MPDGCTRL0_RD() & ~BM_MMDC_MPDGCTRL0_DG_HC_DEL1) | BF_MMDC_MPDGCTRL0_DG_HC_DEL1(v)))
#endif


/* --- Register HW_MMDC_MPDGCTRL0, field HW_DG_EN[28] (RW)
 *
 * Enable automatic read DQS gating calibration. If this bit is asserted then the MMDC performs
 * automatic read DQS gating calibration. HW negates this bit upon completion of the automatic read
 * DQS gating. Note: Before issuing the first read command the MMDC counts 12 cycles. In LPDDR2 mode
 * automatic (HW) read DQS gating should be disabled and Pull-up/pull-down resistors on DQS/DQS#
 * should be enabled while ODT resistors must be disconnected.
 *
 * Values:
 * 0 - Disable automatic read DQS gating calibration
 * 1 - Start automatic read DQS gating calibration
 */

#define BP_MMDC_MPDGCTRL0_HW_DG_EN      (28)      //!< Bit position for MMDC_MPDGCTRL0_HW_DG_EN.
#define BM_MMDC_MPDGCTRL0_HW_DG_EN      (0x10000000)  //!< Bit mask for MMDC_MPDGCTRL0_HW_DG_EN.

//! @brief Get value of MMDC_MPDGCTRL0_HW_DG_EN from a register value.
#define BG_MMDC_MPDGCTRL0_HW_DG_EN(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_MMDC_MPDGCTRL0_HW_DG_EN) >> BP_MMDC_MPDGCTRL0_HW_DG_EN)

//! @brief Format value for bitfield MMDC_MPDGCTRL0_HW_DG_EN.
#define BF_MMDC_MPDGCTRL0_HW_DG_EN(v)   ((__REG_VALUE_TYPE((v), reg32_t) << BP_MMDC_MPDGCTRL0_HW_DG_EN) & BM_MMDC_MPDGCTRL0_HW_DG_EN)

#ifndef __LANGUAGE_ASM__
//! @brief Set the HW_DG_EN field to a new value.
#define BW_MMDC_MPDGCTRL0_HW_DG_EN(v)   (HW_MMDC_MPDGCTRL0_WR((HW_MMDC_MPDGCTRL0_RD() & ~BM_MMDC_MPDGCTRL0_HW_DG_EN) | BF_MMDC_MPDGCTRL0_HW_DG_EN(v)))
#endif


/* --- Register HW_MMDC_MPDGCTRL0, field DG_DIS[29] (RO)
 *
 * Read DQS gating disable. If this bit is asserted then the MMDC disables the read DQS gating
 * mechnism. If this bits is asserted (read DQS gating is disabled) then pulll-up and pull-down
 * resistors suppose to be used on DQS and DQS# respectively
 *
 * Values:
 * 0 - Read DQS gating mechanism is enbled
 * 1 - Read DQS gating mechanism is disabled
 */

#define BP_MMDC_MPDGCTRL0_DG_DIS      (29)      //!< Bit position for MMDC_MPDGCTRL0_DG_DIS.
#define BM_MMDC_MPDGCTRL0_DG_DIS      (0x20000000)  //!< Bit mask for MMDC_MPDGCTRL0_DG_DIS.

//! @brief Get value of MMDC_MPDGCTRL0_DG_DIS from a register value.
#define BG_MMDC_MPDGCTRL0_DG_DIS(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_MMDC_MPDGCTRL0_DG_DIS) >> BP_MMDC_MPDGCTRL0_DG_DIS)


/* --- Register HW_MMDC_MPDGCTRL0, field DG_CMP_CYC[30] (RO)
 *
 * Read DQS gating sample cycle. If this bit is asserted then the MMDC waits 32 cycles before
 * comparing the read data, Otherwise it waits 16 DDR cycles.
 *
 * Values:
 * 0 - MMDC waits 16 DDR cycles
 * 1 - MMDC waits 32 DDR cycles
 */

#define BP_MMDC_MPDGCTRL0_DG_CMP_CYC      (30)      //!< Bit position for MMDC_MPDGCTRL0_DG_CMP_CYC.
#define BM_MMDC_MPDGCTRL0_DG_CMP_CYC      (0x40000000)  //!< Bit mask for MMDC_MPDGCTRL0_DG_CMP_CYC.

//! @brief Get value of MMDC_MPDGCTRL0_DG_CMP_CYC from a register value.
#define BG_MMDC_MPDGCTRL0_DG_CMP_CYC(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_MMDC_MPDGCTRL0_DG_CMP_CYC) >> BP_MMDC_MPDGCTRL0_DG_CMP_CYC)


/* --- Register HW_MMDC_MPDGCTRL0, field RST_RD_FIFO[31] (RW)
 *
 * Reset Read Data FIFO and associated pointers. If this bit is asserted then the MMDC resets the
 * read data FIFO and the associated pointers. This bit is self cleared after the FIFO reset is
 * done.
 */

#define BP_MMDC_MPDGCTRL0_RST_RD_FIFO      (31)      //!< Bit position for MMDC_MPDGCTRL0_RST_RD_FIFO.
#define BM_MMDC_MPDGCTRL0_RST_RD_FIFO      (0x80000000)  //!< Bit mask for MMDC_MPDGCTRL0_RST_RD_FIFO.

//! @brief Get value of MMDC_MPDGCTRL0_RST_RD_FIFO from a register value.
#define BG_MMDC_MPDGCTRL0_RST_RD_FIFO(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_MMDC_MPDGCTRL0_RST_RD_FIFO) >> BP_MMDC_MPDGCTRL0_RST_RD_FIFO)

//! @brief Format value for bitfield MMDC_MPDGCTRL0_RST_RD_FIFO.
#define BF_MMDC_MPDGCTRL0_RST_RD_FIFO(v)   ((__REG_VALUE_TYPE((v), reg32_t) << BP_MMDC_MPDGCTRL0_RST_RD_FIFO) & BM_MMDC_MPDGCTRL0_RST_RD_FIFO)

#ifndef __LANGUAGE_ASM__
//! @brief Set the RST_RD_FIFO field to a new value.
#define BW_MMDC_MPDGCTRL0_RST_RD_FIFO(v)   (HW_MMDC_MPDGCTRL0_WR((HW_MMDC_MPDGCTRL0_RD() & ~BM_MMDC_MPDGCTRL0_RST_RD_FIFO) | BF_MMDC_MPDGCTRL0_RST_RD_FIFO(v)))
#endif

//-------------------------------------------------------------------------------------------
// HW_MMDC_MPDGCTRL1 - MMDC PHY Read DQS Gating Control Register 1
//-------------------------------------------------------------------------------------------

#ifndef __LANGUAGE_ASM__
/*!
 * @brief HW_MMDC_MPDGCTRL1 - MMDC PHY Read DQS Gating Control Register 1 (RW)
 *
 * Reset value: 0x00000000
 *
 * Supported Mode Of Operations:  For Channel 0: DDR3_x16, DDR3_x32, DDR3_x64  For Channel 1:
 * DDR3_x64
 */
typedef union _hw_mmdc_mpdgctrl1
{
    reg32_t U;
    struct _hw_mmdc_mpdgctrl1_bitfields
    {
        unsigned DG_DL_ABS_OFFSET2 : 7; //!< [6:0] Absolute read DQS gating delay offset for Byte2.
        unsigned RESERVED0 : 1; //!< [7] Reserved
        unsigned DG_HC_DEL2 : 4; //!< [11:8] Read DQS gating half cycles delay for Byte2 (Channel 0 register) and Byte6 for 64-bit mode(channel 1 register) .
        unsigned RESERVED1 : 4; //!< [15:12] Reserved
        unsigned DG_DL_ABS_OFFSET3 : 7; //!< [22:16] Absolute read DQS gating delay offset for Byte3.
        unsigned RESERVED2 : 1; //!< [23] Reserved
        unsigned DG_HC_DEL3 : 4; //!< [27:24] Read DQS gating half cycles delay for Byte3 (Channel 0 register) and Byte7 for 64-bit data (Channel 1 register) .
        unsigned RESERVED3 : 4; //!< [31:28] Reserved
    } B;
} hw_mmdc_mpdgctrl1_t;
#endif

/*
 * constants & macros for entire MMDC_MPDGCTRL1 register
 */
#define HW_MMDC_MPDGCTRL1_ADDR      (REGS_MMDC_BASE + 0x840)

#ifndef __LANGUAGE_ASM__
#define HW_MMDC_MPDGCTRL1           (*(volatile hw_mmdc_mpdgctrl1_t *) HW_MMDC_MPDGCTRL1_ADDR)
#define HW_MMDC_MPDGCTRL1_RD()      (HW_MMDC_MPDGCTRL1.U)
#define HW_MMDC_MPDGCTRL1_WR(v)     (HW_MMDC_MPDGCTRL1.U = (v))
#define HW_MMDC_MPDGCTRL1_SET(v)    (HW_MMDC_MPDGCTRL1_WR(HW_MMDC_MPDGCTRL1_RD() |  (v)))
#define HW_MMDC_MPDGCTRL1_CLR(v)    (HW_MMDC_MPDGCTRL1_WR(HW_MMDC_MPDGCTRL1_RD() & ~(v)))
#define HW_MMDC_MPDGCTRL1_TOG(v)    (HW_MMDC_MPDGCTRL1_WR(HW_MMDC_MPDGCTRL1_RD() ^  (v)))
#endif

/*
 * constants & macros for individual MMDC_MPDGCTRL1 bitfields
 */

/* --- Register HW_MMDC_MPDGCTRL1, field DG_DL_ABS_OFFSET2[6:0] (RW)
 *
 * Absolute read DQS gating delay offset for Byte2. This field indicates the absolute delay between
 * read DQS gate and the middle of the read DQS preamble of Byte2 with fractions of a clock period
 * and up to half cycle.The fraction is process and frequency independent. The delay of the delay-
 * line would be (DG_DL_ABS_OFFSET2 / 256)* fast_clk. This field can also bit written by HW. Upon
 * completion of the automatic read DQS gating calibration this field gets the value of the 7 LSB of
 * ((HW_DG_LOW2 + HW_DG_UP2) /2). Note that not all changes will have effect on the actual delay. If
 * the requested change is smaller than the delay-line resolution, then no change will occur.
 */

#define BP_MMDC_MPDGCTRL1_DG_DL_ABS_OFFSET2      (0)      //!< Bit position for MMDC_MPDGCTRL1_DG_DL_ABS_OFFSET2.
#define BM_MMDC_MPDGCTRL1_DG_DL_ABS_OFFSET2      (0x0000007f)  //!< Bit mask for MMDC_MPDGCTRL1_DG_DL_ABS_OFFSET2.

//! @brief Get value of MMDC_MPDGCTRL1_DG_DL_ABS_OFFSET2 from a register value.
#define BG_MMDC_MPDGCTRL1_DG_DL_ABS_OFFSET2(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_MMDC_MPDGCTRL1_DG_DL_ABS_OFFSET2) >> BP_MMDC_MPDGCTRL1_DG_DL_ABS_OFFSET2)

//! @brief Format value for bitfield MMDC_MPDGCTRL1_DG_DL_ABS_OFFSET2.
#define BF_MMDC_MPDGCTRL1_DG_DL_ABS_OFFSET2(v)   ((__REG_VALUE_TYPE((v), reg32_t) << BP_MMDC_MPDGCTRL1_DG_DL_ABS_OFFSET2) & BM_MMDC_MPDGCTRL1_DG_DL_ABS_OFFSET2)

#ifndef __LANGUAGE_ASM__
//! @brief Set the DG_DL_ABS_OFFSET2 field to a new value.
#define BW_MMDC_MPDGCTRL1_DG_DL_ABS_OFFSET2(v)   (HW_MMDC_MPDGCTRL1_WR((HW_MMDC_MPDGCTRL1_RD() & ~BM_MMDC_MPDGCTRL1_DG_DL_ABS_OFFSET2) | BF_MMDC_MPDGCTRL1_DG_DL_ABS_OFFSET2(v)))
#endif

/* --- Register HW_MMDC_MPDGCTRL1, field DG_HC_DEL2[11:8] (RW)
 *
 * Read DQS gating half cycles delay for Byte2 (Channel 0 register) and Byte6 for 64-bit
 * mode(channel 1 register) . This field indicates the delay in half cycles between read DQS gate
 * and the middle of the read DQS preamble of Byte2/5. This delay is added to the delay that is
 * genearted by the read DQS1 gating delay-line, So the total read DQS gating delay is
 * (DG_HC_DEL#)*0.5*cycle + (DG_DL_ABS_OFFSET#)*1/256*cycle Upon completion of the automatic read
 * DQS gating calibration this field gets the value of the 4 MSB of ((HW_DG_LOW2 + HW_DG_UP2) /2).
 *
 * Values:
 * 0000 - 0 cycles delay.
 * 0001 - Half cycle delay.
 * 0010 - 1 cycle delay
 * 1101 - 6.5 cycles delay
 * 1110 - Reserved
 * 1111 - Reserved
 */

#define BP_MMDC_MPDGCTRL1_DG_HC_DEL2      (8)      //!< Bit position for MMDC_MPDGCTRL1_DG_HC_DEL2.
#define BM_MMDC_MPDGCTRL1_DG_HC_DEL2      (0x00000f00)  //!< Bit mask for MMDC_MPDGCTRL1_DG_HC_DEL2.

//! @brief Get value of MMDC_MPDGCTRL1_DG_HC_DEL2 from a register value.
#define BG_MMDC_MPDGCTRL1_DG_HC_DEL2(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_MMDC_MPDGCTRL1_DG_HC_DEL2) >> BP_MMDC_MPDGCTRL1_DG_HC_DEL2)

//! @brief Format value for bitfield MMDC_MPDGCTRL1_DG_HC_DEL2.
#define BF_MMDC_MPDGCTRL1_DG_HC_DEL2(v)   ((__REG_VALUE_TYPE((v), reg32_t) << BP_MMDC_MPDGCTRL1_DG_HC_DEL2) & BM_MMDC_MPDGCTRL1_DG_HC_DEL2)

#ifndef __LANGUAGE_ASM__
//! @brief Set the DG_HC_DEL2 field to a new value.
#define BW_MMDC_MPDGCTRL1_DG_HC_DEL2(v)   (HW_MMDC_MPDGCTRL1_WR((HW_MMDC_MPDGCTRL1_RD() & ~BM_MMDC_MPDGCTRL1_DG_HC_DEL2) | BF_MMDC_MPDGCTRL1_DG_HC_DEL2(v)))
#endif


/* --- Register HW_MMDC_MPDGCTRL1, field DG_DL_ABS_OFFSET3[22:16] (RW)
 *
 * Absolute read DQS gating delay offset for Byte3. This field indicates the absolute delay between
 * read DQS gate and the middle of the read DQS preamble of Byte3 with fractions of a clock period
 * and up to half cycle.The fraction is process and frequency independent. The delay of the delay-
 * line would be (DG_DL_ABS_OFFSET3 / 256)* fast_clk. This field can also bit written by HW. Upon
 * completion of the automatic read DQS gating calibration this field gets the value of the 7 LSB of
 * ((HW_DG_LOW3 + HW_DG_UP3) /2). Note that not all changes will have effect on the actual delay. If
 * the requested change is smaller than the delay-line resolution, then no change will occur.
 */

#define BP_MMDC_MPDGCTRL1_DG_DL_ABS_OFFSET3      (16)      //!< Bit position for MMDC_MPDGCTRL1_DG_DL_ABS_OFFSET3.
#define BM_MMDC_MPDGCTRL1_DG_DL_ABS_OFFSET3      (0x007f0000)  //!< Bit mask for MMDC_MPDGCTRL1_DG_DL_ABS_OFFSET3.

//! @brief Get value of MMDC_MPDGCTRL1_DG_DL_ABS_OFFSET3 from a register value.
#define BG_MMDC_MPDGCTRL1_DG_DL_ABS_OFFSET3(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_MMDC_MPDGCTRL1_DG_DL_ABS_OFFSET3) >> BP_MMDC_MPDGCTRL1_DG_DL_ABS_OFFSET3)

//! @brief Format value for bitfield MMDC_MPDGCTRL1_DG_DL_ABS_OFFSET3.
#define BF_MMDC_MPDGCTRL1_DG_DL_ABS_OFFSET3(v)   ((__REG_VALUE_TYPE((v), reg32_t) << BP_MMDC_MPDGCTRL1_DG_DL_ABS_OFFSET3) & BM_MMDC_MPDGCTRL1_DG_DL_ABS_OFFSET3)

#ifndef __LANGUAGE_ASM__
//! @brief Set the DG_DL_ABS_OFFSET3 field to a new value.
#define BW_MMDC_MPDGCTRL1_DG_DL_ABS_OFFSET3(v)   (HW_MMDC_MPDGCTRL1_WR((HW_MMDC_MPDGCTRL1_RD() & ~BM_MMDC_MPDGCTRL1_DG_DL_ABS_OFFSET3) | BF_MMDC_MPDGCTRL1_DG_DL_ABS_OFFSET3(v)))
#endif

/* --- Register HW_MMDC_MPDGCTRL1, field DG_HC_DEL3[27:24] (RW)
 *
 * Read DQS gating half cycles delay for Byte3 (Channel 0 register) and Byte7 for 64-bit data
 * (Channel 1 register) . This field indicates the delay in half cycles between read DQS gate and
 * the middle of the read DQS preamble of Byte3/7. This delay is added to the delay that is
 * genearted by the read DQS1 gating delay-line, So the total read DQS gating delay is
 * (DG_HC_DEL#)*0.5*cycle + (DG_DL_ABS_OFFSET#)*1/256*cycle Upon completion of the automatic read
 * DQS gating calibration this field gets the value of the 4 MSB of ((HW_DG_LOW3 + HW_DG_UP3) /2).
 *
 * Values:
 * 0000 - 0 cycles delay.
 * 0001 - Half cycle delay.
 * 0010 - 1 cycle delay
 * 1101 - 6.5 cycles delay
 * 1110 - Reserved
 * 1111 - Reserved
 */

#define BP_MMDC_MPDGCTRL1_DG_HC_DEL3      (24)      //!< Bit position for MMDC_MPDGCTRL1_DG_HC_DEL3.
#define BM_MMDC_MPDGCTRL1_DG_HC_DEL3      (0x0f000000)  //!< Bit mask for MMDC_MPDGCTRL1_DG_HC_DEL3.

//! @brief Get value of MMDC_MPDGCTRL1_DG_HC_DEL3 from a register value.
#define BG_MMDC_MPDGCTRL1_DG_HC_DEL3(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_MMDC_MPDGCTRL1_DG_HC_DEL3) >> BP_MMDC_MPDGCTRL1_DG_HC_DEL3)

//! @brief Format value for bitfield MMDC_MPDGCTRL1_DG_HC_DEL3.
#define BF_MMDC_MPDGCTRL1_DG_HC_DEL3(v)   ((__REG_VALUE_TYPE((v), reg32_t) << BP_MMDC_MPDGCTRL1_DG_HC_DEL3) & BM_MMDC_MPDGCTRL1_DG_HC_DEL3)

#ifndef __LANGUAGE_ASM__
//! @brief Set the DG_HC_DEL3 field to a new value.
#define BW_MMDC_MPDGCTRL1_DG_HC_DEL3(v)   (HW_MMDC_MPDGCTRL1_WR((HW_MMDC_MPDGCTRL1_RD() & ~BM_MMDC_MPDGCTRL1_DG_HC_DEL3) | BF_MMDC_MPDGCTRL1_DG_HC_DEL3(v)))
#endif


//-------------------------------------------------------------------------------------------
// HW_MMDC_MPDGDLST0 - MMDC PHY Read DQS Gating delay-line Status Register
//-------------------------------------------------------------------------------------------

#ifndef __LANGUAGE_ASM__
/*!
 * @brief HW_MMDC_MPDGDLST0 - MMDC PHY Read DQS Gating delay-line Status Register (RO)
 *
 * Reset value: 0x00000000
 *
 * This register holds the status of the 4 dqs gating delay-lines.  Supported Mode Of Operations:
 * For Channel 0: DDR3_x16, DDR3_x32, DDR3_x64  For Channel 1: DDR3_x64
 */
typedef union _hw_mmdc_mpdgdlst0
{
    reg32_t U;
    struct _hw_mmdc_mpdgdlst0_bitfields
    {
        unsigned DG_DL_UNIT_NUM0 : 7; //!< [6:0] This field reflects the number of delay units that are actually used by read DQS gating delay-line 0.
        unsigned RESERVED0 : 1; //!< [7] Reserved
        unsigned DG_DL_UNIT_NUM1 : 7; //!< [14:8] This field reflects the number of delay units that are actually used by read DQS gating delay-line 1.
        unsigned RESERVED1 : 1; //!< [15] Reserved
        unsigned DG_DL_UNIT_NUM2 : 7; //!< [22:16] This field reflects the number of delay units that are actually used by read DQS gating delay-line 2.
        unsigned RESERVED2 : 1; //!< [23] Reserved
        unsigned DG_DL_UNIT_NUM3 : 7; //!< [30:24] This field reflects the number of delay units that are actually used by read DQS gating delay-line 3.
        unsigned RESERVED3 : 1; //!< [31] Reserved
    } B;
} hw_mmdc_mpdgdlst0_t;
#endif

/*
 * constants & macros for entire MMDC_MPDGDLST0 register
 */
#define HW_MMDC_MPDGDLST0_ADDR      (REGS_MMDC_BASE + 0x844)

#ifndef __LANGUAGE_ASM__
#define HW_MMDC_MPDGDLST0           (*(volatile hw_mmdc_mpdgdlst0_t *) HW_MMDC_MPDGDLST0_ADDR)
#define HW_MMDC_MPDGDLST0_RD()      (HW_MMDC_MPDGDLST0.U)
#endif

/*
 * constants & macros for individual MMDC_MPDGDLST0 bitfields
 */

/* --- Register HW_MMDC_MPDGDLST0, field DG_DL_UNIT_NUM0[6:0] (RO)
 *
 * This field reflects the number of delay units that are actually used by read DQS gating delay-
 * line 0.
 */

#define BP_MMDC_MPDGDLST0_DG_DL_UNIT_NUM0      (0)      //!< Bit position for MMDC_MPDGDLST0_DG_DL_UNIT_NUM0.
#define BM_MMDC_MPDGDLST0_DG_DL_UNIT_NUM0      (0x0000007f)  //!< Bit mask for MMDC_MPDGDLST0_DG_DL_UNIT_NUM0.

//! @brief Get value of MMDC_MPDGDLST0_DG_DL_UNIT_NUM0 from a register value.
#define BG_MMDC_MPDGDLST0_DG_DL_UNIT_NUM0(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_MMDC_MPDGDLST0_DG_DL_UNIT_NUM0) >> BP_MMDC_MPDGDLST0_DG_DL_UNIT_NUM0)

/* --- Register HW_MMDC_MPDGDLST0, field DG_DL_UNIT_NUM1[14:8] (RO)
 *
 * This field reflects the number of delay units that are actually used by read DQS gating delay-
 * line 1.
 */

#define BP_MMDC_MPDGDLST0_DG_DL_UNIT_NUM1      (8)      //!< Bit position for MMDC_MPDGDLST0_DG_DL_UNIT_NUM1.
#define BM_MMDC_MPDGDLST0_DG_DL_UNIT_NUM1      (0x00007f00)  //!< Bit mask for MMDC_MPDGDLST0_DG_DL_UNIT_NUM1.

//! @brief Get value of MMDC_MPDGDLST0_DG_DL_UNIT_NUM1 from a register value.
#define BG_MMDC_MPDGDLST0_DG_DL_UNIT_NUM1(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_MMDC_MPDGDLST0_DG_DL_UNIT_NUM1) >> BP_MMDC_MPDGDLST0_DG_DL_UNIT_NUM1)

/* --- Register HW_MMDC_MPDGDLST0, field DG_DL_UNIT_NUM2[22:16] (RO)
 *
 * This field reflects the number of delay units that are actually used by read DQS gating delay-
 * line 2.
 */

#define BP_MMDC_MPDGDLST0_DG_DL_UNIT_NUM2      (16)      //!< Bit position for MMDC_MPDGDLST0_DG_DL_UNIT_NUM2.
#define BM_MMDC_MPDGDLST0_DG_DL_UNIT_NUM2      (0x007f0000)  //!< Bit mask for MMDC_MPDGDLST0_DG_DL_UNIT_NUM2.

//! @brief Get value of MMDC_MPDGDLST0_DG_DL_UNIT_NUM2 from a register value.
#define BG_MMDC_MPDGDLST0_DG_DL_UNIT_NUM2(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_MMDC_MPDGDLST0_DG_DL_UNIT_NUM2) >> BP_MMDC_MPDGDLST0_DG_DL_UNIT_NUM2)

/* --- Register HW_MMDC_MPDGDLST0, field DG_DL_UNIT_NUM3[30:24] (RO)
 *
 * This field reflects the number of delay units that are actually used by read DQS gating delay-
 * line 3.
 */

#define BP_MMDC_MPDGDLST0_DG_DL_UNIT_NUM3      (24)      //!< Bit position for MMDC_MPDGDLST0_DG_DL_UNIT_NUM3.
#define BM_MMDC_MPDGDLST0_DG_DL_UNIT_NUM3      (0x7f000000)  //!< Bit mask for MMDC_MPDGDLST0_DG_DL_UNIT_NUM3.

//! @brief Get value of MMDC_MPDGDLST0_DG_DL_UNIT_NUM3 from a register value.
#define BG_MMDC_MPDGDLST0_DG_DL_UNIT_NUM3(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_MMDC_MPDGDLST0_DG_DL_UNIT_NUM3) >> BP_MMDC_MPDGDLST0_DG_DL_UNIT_NUM3)

//-------------------------------------------------------------------------------------------
// HW_MMDC_MPRDDLCTL - MMDC PHY Read delay-lines Configuration Register
//-------------------------------------------------------------------------------------------

#ifndef __LANGUAGE_ASM__
/*!
 * @brief HW_MMDC_MPRDDLCTL - MMDC PHY Read delay-lines Configuration Register (RW)
 *
 * Reset value: 0x40404040
 *
 * This register controls read delay-lines functionality; it determines DQS delay relative to the
 * associated DQ read access. The delay-line compensates for process variations and produces a
 * constant delay regardless of the process, temperature and voltage.  Supported Mode Of Operations:
 * For Channel 0: All  For Channel 1: DDR3_x64, LP2_2ch_x16, LP2_2ch_x32
 */
typedef union _hw_mmdc_mprddlctl
{
    reg32_t U;
    struct _hw_mmdc_mprddlctl_bitfields
    {
        unsigned RD_DL_ABS_OFFSET0 : 7; //!< [6:0] Absolute read delay offset for Byte0.
        unsigned RESERVED0 : 1; //!< [7] Reserved
        unsigned RD_DL_ABS_OFFSET1 : 7; //!< [14:8] Absolute read delay offset for Byte1.
        unsigned RESERVED1 : 1; //!< [15] Reserved
        unsigned RD_DL_ABS_OFFSET2 : 7; //!< [22:16] Absolute read delay offset for Byte2.
        unsigned RESERVED2 : 1; //!< [23] Reserved
        unsigned RD_DL_ABS_OFFSET3 : 7; //!< [30:24] Absolute read delay offset for Byte3.
        unsigned RESERVED3 : 1; //!< [31] Reserved
    } B;
} hw_mmdc_mprddlctl_t;
#endif

/*
 * constants & macros for entire MMDC_MPRDDLCTL register
 */
#define HW_MMDC_MPRDDLCTL_ADDR      (REGS_MMDC_BASE + 0x848)

#ifndef __LANGUAGE_ASM__
#define HW_MMDC_MPRDDLCTL           (*(volatile hw_mmdc_mprddlctl_t *) HW_MMDC_MPRDDLCTL_ADDR)
#define HW_MMDC_MPRDDLCTL_RD()      (HW_MMDC_MPRDDLCTL.U)
#define HW_MMDC_MPRDDLCTL_WR(v)     (HW_MMDC_MPRDDLCTL.U = (v))
#define HW_MMDC_MPRDDLCTL_SET(v)    (HW_MMDC_MPRDDLCTL_WR(HW_MMDC_MPRDDLCTL_RD() |  (v)))
#define HW_MMDC_MPRDDLCTL_CLR(v)    (HW_MMDC_MPRDDLCTL_WR(HW_MMDC_MPRDDLCTL_RD() & ~(v)))
#define HW_MMDC_MPRDDLCTL_TOG(v)    (HW_MMDC_MPRDDLCTL_WR(HW_MMDC_MPRDDLCTL_RD() ^  (v)))
#endif

/*
 * constants & macros for individual MMDC_MPRDDLCTL bitfields
 */

/* --- Register HW_MMDC_MPRDDLCTL, field RD_DL_ABS_OFFSET0[6:0] (RW)
 *
 * Absolute read delay offset for Byte0. This field indicates the absolute delay between read DQS
 * strobe and the read data of Byte0 with fractions of a clock period and up to half cycle. The
 * fraction is process and frequency independent. The delay of the delay-line would be
 * (RD_DL_ABS_OFFSET0 / 256) * fast_clk. So for the default value of 64 we get a quarter cycle
 * delay. This field can also bit written by HW. Upon completion of the read delay-line HW
 * calibration this field gets the value of (HW_RD_DL_LOW0 + HW_RD_DL_UP0) /2 Note that not all
 * changes will have effect on the actual delay. If the requested change is smaller than the delay-
 * line resolution, then no change will occur.
 */

#define BP_MMDC_MPRDDLCTL_RD_DL_ABS_OFFSET0      (0)      //!< Bit position for MMDC_MPRDDLCTL_RD_DL_ABS_OFFSET0.
#define BM_MMDC_MPRDDLCTL_RD_DL_ABS_OFFSET0      (0x0000007f)  //!< Bit mask for MMDC_MPRDDLCTL_RD_DL_ABS_OFFSET0.

//! @brief Get value of MMDC_MPRDDLCTL_RD_DL_ABS_OFFSET0 from a register value.
#define BG_MMDC_MPRDDLCTL_RD_DL_ABS_OFFSET0(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_MMDC_MPRDDLCTL_RD_DL_ABS_OFFSET0) >> BP_MMDC_MPRDDLCTL_RD_DL_ABS_OFFSET0)

//! @brief Format value for bitfield MMDC_MPRDDLCTL_RD_DL_ABS_OFFSET0.
#define BF_MMDC_MPRDDLCTL_RD_DL_ABS_OFFSET0(v)   ((__REG_VALUE_TYPE((v), reg32_t) << BP_MMDC_MPRDDLCTL_RD_DL_ABS_OFFSET0) & BM_MMDC_MPRDDLCTL_RD_DL_ABS_OFFSET0)

#ifndef __LANGUAGE_ASM__
//! @brief Set the RD_DL_ABS_OFFSET0 field to a new value.
#define BW_MMDC_MPRDDLCTL_RD_DL_ABS_OFFSET0(v)   (HW_MMDC_MPRDDLCTL_WR((HW_MMDC_MPRDDLCTL_RD() & ~BM_MMDC_MPRDDLCTL_RD_DL_ABS_OFFSET0) | BF_MMDC_MPRDDLCTL_RD_DL_ABS_OFFSET0(v)))
#endif

/* --- Register HW_MMDC_MPRDDLCTL, field RD_DL_ABS_OFFSET1[14:8] (RW)
 *
 * Absolute read delay offset for Byte1. This field indicates the absolute delay between read DQS
 * strobe and the read data of Byte1 with fractions of a clock period and up to half cycle. The
 * fraction is process and frequency independent. The delay of the delay-line would be
 * (RD_DL_ABS_OFFSET1 / 256) * fast_clk. So for the default value of 64 we get a quarter cycle
 * delay. This field can also bit written by HW. Upon completion of the read delay-line HW
 * calibration this field gets the value of (HW_RD_DL_LOW1 + HW_RD_DL_UP1) /2 Note that not all
 * changes will have effect on the actual delay. If the requested change is smaller than the delay-
 * line resolution, then no change will occur.
 */

#define BP_MMDC_MPRDDLCTL_RD_DL_ABS_OFFSET1      (8)      //!< Bit position for MMDC_MPRDDLCTL_RD_DL_ABS_OFFSET1.
#define BM_MMDC_MPRDDLCTL_RD_DL_ABS_OFFSET1      (0x00007f00)  //!< Bit mask for MMDC_MPRDDLCTL_RD_DL_ABS_OFFSET1.

//! @brief Get value of MMDC_MPRDDLCTL_RD_DL_ABS_OFFSET1 from a register value.
#define BG_MMDC_MPRDDLCTL_RD_DL_ABS_OFFSET1(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_MMDC_MPRDDLCTL_RD_DL_ABS_OFFSET1) >> BP_MMDC_MPRDDLCTL_RD_DL_ABS_OFFSET1)

//! @brief Format value for bitfield MMDC_MPRDDLCTL_RD_DL_ABS_OFFSET1.
#define BF_MMDC_MPRDDLCTL_RD_DL_ABS_OFFSET1(v)   ((__REG_VALUE_TYPE((v), reg32_t) << BP_MMDC_MPRDDLCTL_RD_DL_ABS_OFFSET1) & BM_MMDC_MPRDDLCTL_RD_DL_ABS_OFFSET1)

#ifndef __LANGUAGE_ASM__
//! @brief Set the RD_DL_ABS_OFFSET1 field to a new value.
#define BW_MMDC_MPRDDLCTL_RD_DL_ABS_OFFSET1(v)   (HW_MMDC_MPRDDLCTL_WR((HW_MMDC_MPRDDLCTL_RD() & ~BM_MMDC_MPRDDLCTL_RD_DL_ABS_OFFSET1) | BF_MMDC_MPRDDLCTL_RD_DL_ABS_OFFSET1(v)))
#endif

/* --- Register HW_MMDC_MPRDDLCTL, field RD_DL_ABS_OFFSET2[22:16] (RW)
 *
 * Absolute read delay offset for Byte2. This field indicates the absolute delay between read DQS
 * strobe and the read data of Byte2 with fractions of a clock period and up to half cycle. The
 * fraction is process and frequency independent. The delay of the delay-line would be
 * (RD_DL_ABS_OFFSET2 / 256) * fast_clk. So for the default value of 64 we get a quarter cycle
 * delay. This field can also bit written by HW. Upon completion of the read delay-line HW
 * calibration this field gets the value of (HW_RD_DL_LOW2 + HW_RD_DL_UP2) /2 Note that not all
 * changes will have effect on the actual delay. If the requested change is smaller than the delay-
 * line resolution, then no change will occur.
 */

#define BP_MMDC_MPRDDLCTL_RD_DL_ABS_OFFSET2      (16)      //!< Bit position for MMDC_MPRDDLCTL_RD_DL_ABS_OFFSET2.
#define BM_MMDC_MPRDDLCTL_RD_DL_ABS_OFFSET2      (0x007f0000)  //!< Bit mask for MMDC_MPRDDLCTL_RD_DL_ABS_OFFSET2.

//! @brief Get value of MMDC_MPRDDLCTL_RD_DL_ABS_OFFSET2 from a register value.
#define BG_MMDC_MPRDDLCTL_RD_DL_ABS_OFFSET2(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_MMDC_MPRDDLCTL_RD_DL_ABS_OFFSET2) >> BP_MMDC_MPRDDLCTL_RD_DL_ABS_OFFSET2)

//! @brief Format value for bitfield MMDC_MPRDDLCTL_RD_DL_ABS_OFFSET2.
#define BF_MMDC_MPRDDLCTL_RD_DL_ABS_OFFSET2(v)   ((__REG_VALUE_TYPE((v), reg32_t) << BP_MMDC_MPRDDLCTL_RD_DL_ABS_OFFSET2) & BM_MMDC_MPRDDLCTL_RD_DL_ABS_OFFSET2)

#ifndef __LANGUAGE_ASM__
//! @brief Set the RD_DL_ABS_OFFSET2 field to a new value.
#define BW_MMDC_MPRDDLCTL_RD_DL_ABS_OFFSET2(v)   (HW_MMDC_MPRDDLCTL_WR((HW_MMDC_MPRDDLCTL_RD() & ~BM_MMDC_MPRDDLCTL_RD_DL_ABS_OFFSET2) | BF_MMDC_MPRDDLCTL_RD_DL_ABS_OFFSET2(v)))
#endif

/* --- Register HW_MMDC_MPRDDLCTL, field RD_DL_ABS_OFFSET3[30:24] (RW)
 *
 * Absolute read delay offset for Byte3. This field indicates the absolute delay between read DQS
 * strobe and the read data of Byte3 with fractions of a clock period and up to half cycle. The
 * fraction is process and frequency independent. The delay of the delay-line would be
 * (RD_DL_ABS_OFFSET3 / 256) * fast_clk. So for the default value of 64 we get a quarter cycle
 * delay. This field can also bit written by HW. Upon completion of the read delay-line HW
 * calibration this field gets the value of (HW_RD_DL_LOW3 + HW_RD_DL_UP3) /2 Note that not all
 * changes will have effect on the actual delay. If the requested change is smaller than the delay-
 * line resolution, then no change will occur.
 */

#define BP_MMDC_MPRDDLCTL_RD_DL_ABS_OFFSET3      (24)      //!< Bit position for MMDC_MPRDDLCTL_RD_DL_ABS_OFFSET3.
#define BM_MMDC_MPRDDLCTL_RD_DL_ABS_OFFSET3      (0x7f000000)  //!< Bit mask for MMDC_MPRDDLCTL_RD_DL_ABS_OFFSET3.

//! @brief Get value of MMDC_MPRDDLCTL_RD_DL_ABS_OFFSET3 from a register value.
#define BG_MMDC_MPRDDLCTL_RD_DL_ABS_OFFSET3(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_MMDC_MPRDDLCTL_RD_DL_ABS_OFFSET3) >> BP_MMDC_MPRDDLCTL_RD_DL_ABS_OFFSET3)

//! @brief Format value for bitfield MMDC_MPRDDLCTL_RD_DL_ABS_OFFSET3.
#define BF_MMDC_MPRDDLCTL_RD_DL_ABS_OFFSET3(v)   ((__REG_VALUE_TYPE((v), reg32_t) << BP_MMDC_MPRDDLCTL_RD_DL_ABS_OFFSET3) & BM_MMDC_MPRDDLCTL_RD_DL_ABS_OFFSET3)

#ifndef __LANGUAGE_ASM__
//! @brief Set the RD_DL_ABS_OFFSET3 field to a new value.
#define BW_MMDC_MPRDDLCTL_RD_DL_ABS_OFFSET3(v)   (HW_MMDC_MPRDDLCTL_WR((HW_MMDC_MPRDDLCTL_RD() & ~BM_MMDC_MPRDDLCTL_RD_DL_ABS_OFFSET3) | BF_MMDC_MPRDDLCTL_RD_DL_ABS_OFFSET3(v)))
#endif

//-------------------------------------------------------------------------------------------
// HW_MMDC_MPRDDLST - MMDC PHY Read delay-lines Status Register
//-------------------------------------------------------------------------------------------

#ifndef __LANGUAGE_ASM__
/*!
 * @brief HW_MMDC_MPRDDLST - MMDC PHY Read delay-lines Status Register (RO)
 *
 * Reset value: 0x00000000
 *
 * This register holds the status of the 4 read delay-lines.  Supported Mode Of Operations:  For
 * Channel 0: All  For Channel 1: DDR3_x64, LP2_2ch_x16, LP2_2ch_x32
 */
typedef union _hw_mmdc_mprddlst
{
    reg32_t U;
    struct _hw_mmdc_mprddlst_bitfields
    {
        unsigned RD_DL_UNIT_NUM0 : 7; //!< [6:0] This field reflects the number of delay units that are actually used by read delay-line 0.
        unsigned RESERVED0 : 1; //!< [7] Reserved
        unsigned RD_DL_UNIT_NUM1 : 7; //!< [14:8] This field reflects the number of delay units that are actually used by read delay-line 1.
        unsigned RESERVED1 : 1; //!< [15] Reserved
        unsigned RD_DL_UNIT_NUM2 : 7; //!< [22:16] This field reflects the number of delay units that are actually used by read delay-line 2.
        unsigned RESERVED2 : 1; //!< [23] Reserved
        unsigned RD_DL_UNIT_NUM3 : 7; //!< [30:24] This field reflects the number of delay units that are actually used by read delay-line 3.
        unsigned RESERVED3 : 1; //!< [31] Reserved
    } B;
} hw_mmdc_mprddlst_t;
#endif

/*
 * constants & macros for entire MMDC_MPRDDLST register
 */
#define HW_MMDC_MPRDDLST_ADDR      (REGS_MMDC_BASE + 0x84c)

#ifndef __LANGUAGE_ASM__
#define HW_MMDC_MPRDDLST           (*(volatile hw_mmdc_mprddlst_t *) HW_MMDC_MPRDDLST_ADDR)
#define HW_MMDC_MPRDDLST_RD()      (HW_MMDC_MPRDDLST.U)
#endif

/*
 * constants & macros for individual MMDC_MPRDDLST bitfields
 */

/* --- Register HW_MMDC_MPRDDLST, field RD_DL_UNIT_NUM0[6:0] (RO)
 *
 * This field reflects the number of delay units that are actually used by read delay-line 0.
 */

#define BP_MMDC_MPRDDLST_RD_DL_UNIT_NUM0      (0)      //!< Bit position for MMDC_MPRDDLST_RD_DL_UNIT_NUM0.
#define BM_MMDC_MPRDDLST_RD_DL_UNIT_NUM0      (0x0000007f)  //!< Bit mask for MMDC_MPRDDLST_RD_DL_UNIT_NUM0.

//! @brief Get value of MMDC_MPRDDLST_RD_DL_UNIT_NUM0 from a register value.
#define BG_MMDC_MPRDDLST_RD_DL_UNIT_NUM0(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_MMDC_MPRDDLST_RD_DL_UNIT_NUM0) >> BP_MMDC_MPRDDLST_RD_DL_UNIT_NUM0)

/* --- Register HW_MMDC_MPRDDLST, field RD_DL_UNIT_NUM1[14:8] (RO)
 *
 * This field reflects the number of delay units that are actually used by read delay-line 1.
 */

#define BP_MMDC_MPRDDLST_RD_DL_UNIT_NUM1      (8)      //!< Bit position for MMDC_MPRDDLST_RD_DL_UNIT_NUM1.
#define BM_MMDC_MPRDDLST_RD_DL_UNIT_NUM1      (0x00007f00)  //!< Bit mask for MMDC_MPRDDLST_RD_DL_UNIT_NUM1.

//! @brief Get value of MMDC_MPRDDLST_RD_DL_UNIT_NUM1 from a register value.
#define BG_MMDC_MPRDDLST_RD_DL_UNIT_NUM1(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_MMDC_MPRDDLST_RD_DL_UNIT_NUM1) >> BP_MMDC_MPRDDLST_RD_DL_UNIT_NUM1)

/* --- Register HW_MMDC_MPRDDLST, field RD_DL_UNIT_NUM2[22:16] (RO)
 *
 * This field reflects the number of delay units that are actually used by read delay-line 2.
 */

#define BP_MMDC_MPRDDLST_RD_DL_UNIT_NUM2      (16)      //!< Bit position for MMDC_MPRDDLST_RD_DL_UNIT_NUM2.
#define BM_MMDC_MPRDDLST_RD_DL_UNIT_NUM2      (0x007f0000)  //!< Bit mask for MMDC_MPRDDLST_RD_DL_UNIT_NUM2.

//! @brief Get value of MMDC_MPRDDLST_RD_DL_UNIT_NUM2 from a register value.
#define BG_MMDC_MPRDDLST_RD_DL_UNIT_NUM2(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_MMDC_MPRDDLST_RD_DL_UNIT_NUM2) >> BP_MMDC_MPRDDLST_RD_DL_UNIT_NUM2)

/* --- Register HW_MMDC_MPRDDLST, field RD_DL_UNIT_NUM3[30:24] (RO)
 *
 * This field reflects the number of delay units that are actually used by read delay-line 3.
 */

#define BP_MMDC_MPRDDLST_RD_DL_UNIT_NUM3      (24)      //!< Bit position for MMDC_MPRDDLST_RD_DL_UNIT_NUM3.
#define BM_MMDC_MPRDDLST_RD_DL_UNIT_NUM3      (0x7f000000)  //!< Bit mask for MMDC_MPRDDLST_RD_DL_UNIT_NUM3.

//! @brief Get value of MMDC_MPRDDLST_RD_DL_UNIT_NUM3 from a register value.
#define BG_MMDC_MPRDDLST_RD_DL_UNIT_NUM3(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_MMDC_MPRDDLST_RD_DL_UNIT_NUM3) >> BP_MMDC_MPRDDLST_RD_DL_UNIT_NUM3)

//-------------------------------------------------------------------------------------------
// HW_MMDC_MPWRDLCTL - MMDC PHY Write delay-lines Configuration Register
//-------------------------------------------------------------------------------------------

#ifndef __LANGUAGE_ASM__
/*!
 * @brief HW_MMDC_MPWRDLCTL - MMDC PHY Write delay-lines Configuration Register (RW)
 *
 * Reset value: 0x40404040
 *
 * This register controls write delay-lines functionality, it determines DQ/DM delay relative to the
 * associated DQS in write access. The delay-line compensates for process variations, and produces a
 * constant delay regardless of the process, temperature and voltage.  Supported Mode Of Operations:
 * For Channel 0: All  For Channel 1: DDR3_x64, LP2_2ch_x16, LP2_2ch_x32
 */
typedef union _hw_mmdc_mpwrdlctl
{
    reg32_t U;
    struct _hw_mmdc_mpwrdlctl_bitfields
    {
        unsigned WR_DL_ABS_OFFSET0 : 7; //!< [6:0] Absolute write delay offset for Byte0.
        unsigned RESERVED0 : 1; //!< [7] Reserved
        unsigned WR_DL_ABS_OFFSET1 : 7; //!< [14:8] Absolute write delay offset for Byte1.
        unsigned RESERVED1 : 1; //!< [15] Reserved
        unsigned WR_DL_ABS_OFFSET2 : 7; //!< [22:16] Absolute write delay offset for Byte2.
        unsigned RESERVED2 : 1; //!< [23] Reserved
        unsigned WR_DL_ABS_OFFSET3 : 7; //!< [30:24] Absolute write delay offset for Byte3.
        unsigned RESERVED3 : 1; //!< [31] Reserved
    } B;
} hw_mmdc_mpwrdlctl_t;
#endif

/*
 * constants & macros for entire MMDC_MPWRDLCTL register
 */
#define HW_MMDC_MPWRDLCTL_ADDR      (REGS_MMDC_BASE + 0x850)

#ifndef __LANGUAGE_ASM__
#define HW_MMDC_MPWRDLCTL           (*(volatile hw_mmdc_mpwrdlctl_t *) HW_MMDC_MPWRDLCTL_ADDR)
#define HW_MMDC_MPWRDLCTL_RD()      (HW_MMDC_MPWRDLCTL.U)
#define HW_MMDC_MPWRDLCTL_WR(v)     (HW_MMDC_MPWRDLCTL.U = (v))
#define HW_MMDC_MPWRDLCTL_SET(v)    (HW_MMDC_MPWRDLCTL_WR(HW_MMDC_MPWRDLCTL_RD() |  (v)))
#define HW_MMDC_MPWRDLCTL_CLR(v)    (HW_MMDC_MPWRDLCTL_WR(HW_MMDC_MPWRDLCTL_RD() & ~(v)))
#define HW_MMDC_MPWRDLCTL_TOG(v)    (HW_MMDC_MPWRDLCTL_WR(HW_MMDC_MPWRDLCTL_RD() ^  (v)))
#endif

/*
 * constants & macros for individual MMDC_MPWRDLCTL bitfields
 */

/* --- Register HW_MMDC_MPWRDLCTL, field WR_DL_ABS_OFFSET0[6:0] (RW)
 *
 * Absolute write delay offset for Byte0. This field indicates the absolute delay between write DQS
 * strobe and the write data of Byte3 with fractions of a clock period and up to half cycle. The
 * fraction is process and frequency independent. The delay of the delay-line would be
 * (WR_DL_ABS_OFFSET0 / 256) * fast_clk. So for the default value of 64 we get a quarter cycle
 * delay. This field can also bit written by HW. Upon completion of the write delay-line HW
 * calibration this field gets the value of (HW_WR_DL_LOW0 + HW_WR_DL_UP0) /2 Note that not all
 * changes of this value will affect the actual delay. If the requested change is smaller than the
 * delay-line resolution, then no change will occur.
 */

#define BP_MMDC_MPWRDLCTL_WR_DL_ABS_OFFSET0      (0)      //!< Bit position for MMDC_MPWRDLCTL_WR_DL_ABS_OFFSET0.
#define BM_MMDC_MPWRDLCTL_WR_DL_ABS_OFFSET0      (0x0000007f)  //!< Bit mask for MMDC_MPWRDLCTL_WR_DL_ABS_OFFSET0.

//! @brief Get value of MMDC_MPWRDLCTL_WR_DL_ABS_OFFSET0 from a register value.
#define BG_MMDC_MPWRDLCTL_WR_DL_ABS_OFFSET0(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_MMDC_MPWRDLCTL_WR_DL_ABS_OFFSET0) >> BP_MMDC_MPWRDLCTL_WR_DL_ABS_OFFSET0)

//! @brief Format value for bitfield MMDC_MPWRDLCTL_WR_DL_ABS_OFFSET0.
#define BF_MMDC_MPWRDLCTL_WR_DL_ABS_OFFSET0(v)   ((__REG_VALUE_TYPE((v), reg32_t) << BP_MMDC_MPWRDLCTL_WR_DL_ABS_OFFSET0) & BM_MMDC_MPWRDLCTL_WR_DL_ABS_OFFSET0)

#ifndef __LANGUAGE_ASM__
//! @brief Set the WR_DL_ABS_OFFSET0 field to a new value.
#define BW_MMDC_MPWRDLCTL_WR_DL_ABS_OFFSET0(v)   (HW_MMDC_MPWRDLCTL_WR((HW_MMDC_MPWRDLCTL_RD() & ~BM_MMDC_MPWRDLCTL_WR_DL_ABS_OFFSET0) | BF_MMDC_MPWRDLCTL_WR_DL_ABS_OFFSET0(v)))
#endif

/* --- Register HW_MMDC_MPWRDLCTL, field WR_DL_ABS_OFFSET1[14:8] (RW)
 *
 * Absolute write delay offset for Byte1. This field indicates the absolute delay between write DQS
 * strobe and the write data of Byte1 with fractions of a clock period and up to half cycle. The
 * fraction is process and frequency independent. The delay of the delay-line would be
 * (WR_DL_ABS_OFFSET1 / 256) * fast_clk. So for the default value of 64 we get a quarter cycle
 * delay. This field can also bit written by HW. Upon completion of the write delay-line HW
 * calibration this field gets the value of (HW_WR_DL_LOW1 + HW_WR_DL_UP1) /2 Note that not all
 * changes of this value will affect the actual delay. If the requested change is smaller than the
 * delay-line resolution, then no change will occur.
 */

#define BP_MMDC_MPWRDLCTL_WR_DL_ABS_OFFSET1      (8)      //!< Bit position for MMDC_MPWRDLCTL_WR_DL_ABS_OFFSET1.
#define BM_MMDC_MPWRDLCTL_WR_DL_ABS_OFFSET1      (0x00007f00)  //!< Bit mask for MMDC_MPWRDLCTL_WR_DL_ABS_OFFSET1.

//! @brief Get value of MMDC_MPWRDLCTL_WR_DL_ABS_OFFSET1 from a register value.
#define BG_MMDC_MPWRDLCTL_WR_DL_ABS_OFFSET1(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_MMDC_MPWRDLCTL_WR_DL_ABS_OFFSET1) >> BP_MMDC_MPWRDLCTL_WR_DL_ABS_OFFSET1)

//! @brief Format value for bitfield MMDC_MPWRDLCTL_WR_DL_ABS_OFFSET1.
#define BF_MMDC_MPWRDLCTL_WR_DL_ABS_OFFSET1(v)   ((__REG_VALUE_TYPE((v), reg32_t) << BP_MMDC_MPWRDLCTL_WR_DL_ABS_OFFSET1) & BM_MMDC_MPWRDLCTL_WR_DL_ABS_OFFSET1)

#ifndef __LANGUAGE_ASM__
//! @brief Set the WR_DL_ABS_OFFSET1 field to a new value.
#define BW_MMDC_MPWRDLCTL_WR_DL_ABS_OFFSET1(v)   (HW_MMDC_MPWRDLCTL_WR((HW_MMDC_MPWRDLCTL_RD() & ~BM_MMDC_MPWRDLCTL_WR_DL_ABS_OFFSET1) | BF_MMDC_MPWRDLCTL_WR_DL_ABS_OFFSET1(v)))
#endif

/* --- Register HW_MMDC_MPWRDLCTL, field WR_DL_ABS_OFFSET2[22:16] (RW)
 *
 * Absolute write delay offset for Byte2. This field indicates the absolute delay between write DQS
 * strobe and the write data of Byte2 with fractions of a clock period and up to half cycle. The
 * fraction is process and frequency independent. The delay of the delay-line would be
 * (WR_DL_ABS_OFFSET2/ 256) * fast_clk. So for the default value of 64 we get a quarter cycle delay.
 * This field can also bit written by HW. Upon completion of the write delay-line HW calibration
 * this field gets the value of (HW_WR_DL_LOW2 + HW_WR_DL_UP2) /2 Note that not all changes will
 * have effect on the actual delay. If the requested change is smaller than the delay-line
 * resolution, then no change will occur.
 */

#define BP_MMDC_MPWRDLCTL_WR_DL_ABS_OFFSET2      (16)      //!< Bit position for MMDC_MPWRDLCTL_WR_DL_ABS_OFFSET2.
#define BM_MMDC_MPWRDLCTL_WR_DL_ABS_OFFSET2      (0x007f0000)  //!< Bit mask for MMDC_MPWRDLCTL_WR_DL_ABS_OFFSET2.

//! @brief Get value of MMDC_MPWRDLCTL_WR_DL_ABS_OFFSET2 from a register value.
#define BG_MMDC_MPWRDLCTL_WR_DL_ABS_OFFSET2(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_MMDC_MPWRDLCTL_WR_DL_ABS_OFFSET2) >> BP_MMDC_MPWRDLCTL_WR_DL_ABS_OFFSET2)

//! @brief Format value for bitfield MMDC_MPWRDLCTL_WR_DL_ABS_OFFSET2.
#define BF_MMDC_MPWRDLCTL_WR_DL_ABS_OFFSET2(v)   ((__REG_VALUE_TYPE((v), reg32_t) << BP_MMDC_MPWRDLCTL_WR_DL_ABS_OFFSET2) & BM_MMDC_MPWRDLCTL_WR_DL_ABS_OFFSET2)

#ifndef __LANGUAGE_ASM__
//! @brief Set the WR_DL_ABS_OFFSET2 field to a new value.
#define BW_MMDC_MPWRDLCTL_WR_DL_ABS_OFFSET2(v)   (HW_MMDC_MPWRDLCTL_WR((HW_MMDC_MPWRDLCTL_RD() & ~BM_MMDC_MPWRDLCTL_WR_DL_ABS_OFFSET2) | BF_MMDC_MPWRDLCTL_WR_DL_ABS_OFFSET2(v)))
#endif

/* --- Register HW_MMDC_MPWRDLCTL, field WR_DL_ABS_OFFSET3[30:24] (RW)
 *
 * Absolute write delay offset for Byte3. This field indicates the absolute delay between write DQS
 * strobe and the write data of Byte3 with fractions of a clock period and up to half cycle. The
 * fraction is process and frequency independent. The delay of the delay-line would be
 * (WR_DL_ABS_OFFSET3 / 256) * fast_clk. So for the default value of 64 we get a quarter cycle
 * delay. This field can also bit written by HW. Upon completion of the write delay-line HW
 * calibration this field gets the value of (HW_WR_DL_LOW3 + HW_WR_DL_UP3) /2 Note that not all
 * changes will have effect on the actual delay. If the requested change is smaller than the delay-
 * line resolution, then no change will occur.
 */

#define BP_MMDC_MPWRDLCTL_WR_DL_ABS_OFFSET3      (24)      //!< Bit position for MMDC_MPWRDLCTL_WR_DL_ABS_OFFSET3.
#define BM_MMDC_MPWRDLCTL_WR_DL_ABS_OFFSET3      (0x7f000000)  //!< Bit mask for MMDC_MPWRDLCTL_WR_DL_ABS_OFFSET3.

//! @brief Get value of MMDC_MPWRDLCTL_WR_DL_ABS_OFFSET3 from a register value.
#define BG_MMDC_MPWRDLCTL_WR_DL_ABS_OFFSET3(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_MMDC_MPWRDLCTL_WR_DL_ABS_OFFSET3) >> BP_MMDC_MPWRDLCTL_WR_DL_ABS_OFFSET3)

//! @brief Format value for bitfield MMDC_MPWRDLCTL_WR_DL_ABS_OFFSET3.
#define BF_MMDC_MPWRDLCTL_WR_DL_ABS_OFFSET3(v)   ((__REG_VALUE_TYPE((v), reg32_t) << BP_MMDC_MPWRDLCTL_WR_DL_ABS_OFFSET3) & BM_MMDC_MPWRDLCTL_WR_DL_ABS_OFFSET3)

#ifndef __LANGUAGE_ASM__
//! @brief Set the WR_DL_ABS_OFFSET3 field to a new value.
#define BW_MMDC_MPWRDLCTL_WR_DL_ABS_OFFSET3(v)   (HW_MMDC_MPWRDLCTL_WR((HW_MMDC_MPWRDLCTL_RD() & ~BM_MMDC_MPWRDLCTL_WR_DL_ABS_OFFSET3) | BF_MMDC_MPWRDLCTL_WR_DL_ABS_OFFSET3(v)))
#endif

//-------------------------------------------------------------------------------------------
// HW_MMDC_MPWRDLST - MMDC PHY Write delay-lines Status Register
//-------------------------------------------------------------------------------------------

#ifndef __LANGUAGE_ASM__
/*!
 * @brief HW_MMDC_MPWRDLST - MMDC PHY Write delay-lines Status Register (RO)
 *
 * Reset value: 0x00000000
 *
 * This register holds the status of the 4 write delay-line.  Supported Mode Of Operations:  For
 * Channel 0: All  For Channel 1: DDR3_x64, LP2_2ch_x16, LP2_2ch_x32
 */
typedef union _hw_mmdc_mpwrdlst
{
    reg32_t U;
    struct _hw_mmdc_mpwrdlst_bitfields
    {
        unsigned WR_DL_UNIT_NUM0 : 7; //!< [6:0] This field reflects the number of delay units that are actually used by write delay-line 0.
        unsigned RESERVED0 : 1; //!< [7] Reserved
        unsigned WR_DL_UNIT_NUM1 : 7; //!< [14:8] This field reflects the number of delay units that are actually used by write delay-line 1.
        unsigned RESERVED1 : 1; //!< [15] Reserved
        unsigned WR_DL_UNIT_NUM2 : 7; //!< [22:16] This field reflects the number of delay units that are actually used by write delay-line 2.
        unsigned RESERVED2 : 1; //!< [23] Reserved
        unsigned WR_DL_UNIT_NUM3 : 7; //!< [30:24] This field reflects the number of delay units that are actually used by write delay-line 3.
        unsigned RESERVED3 : 1; //!< [31] Reserved
    } B;
} hw_mmdc_mpwrdlst_t;
#endif

/*
 * constants & macros for entire MMDC_MPWRDLST register
 */
#define HW_MMDC_MPWRDLST_ADDR      (REGS_MMDC_BASE + 0x854)

#ifndef __LANGUAGE_ASM__
#define HW_MMDC_MPWRDLST           (*(volatile hw_mmdc_mpwrdlst_t *) HW_MMDC_MPWRDLST_ADDR)
#define HW_MMDC_MPWRDLST_RD()      (HW_MMDC_MPWRDLST.U)
#endif

/*
 * constants & macros for individual MMDC_MPWRDLST bitfields
 */

/* --- Register HW_MMDC_MPWRDLST, field WR_DL_UNIT_NUM0[6:0] (RO)
 *
 * This field reflects the number of delay units that are actually used by write delay-line 0.
 */

#define BP_MMDC_MPWRDLST_WR_DL_UNIT_NUM0      (0)      //!< Bit position for MMDC_MPWRDLST_WR_DL_UNIT_NUM0.
#define BM_MMDC_MPWRDLST_WR_DL_UNIT_NUM0      (0x0000007f)  //!< Bit mask for MMDC_MPWRDLST_WR_DL_UNIT_NUM0.

//! @brief Get value of MMDC_MPWRDLST_WR_DL_UNIT_NUM0 from a register value.
#define BG_MMDC_MPWRDLST_WR_DL_UNIT_NUM0(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_MMDC_MPWRDLST_WR_DL_UNIT_NUM0) >> BP_MMDC_MPWRDLST_WR_DL_UNIT_NUM0)

/* --- Register HW_MMDC_MPWRDLST, field WR_DL_UNIT_NUM1[14:8] (RO)
 *
 * This field reflects the number of delay units that are actually used by write delay-line 1.
 */

#define BP_MMDC_MPWRDLST_WR_DL_UNIT_NUM1      (8)      //!< Bit position for MMDC_MPWRDLST_WR_DL_UNIT_NUM1.
#define BM_MMDC_MPWRDLST_WR_DL_UNIT_NUM1      (0x00007f00)  //!< Bit mask for MMDC_MPWRDLST_WR_DL_UNIT_NUM1.

//! @brief Get value of MMDC_MPWRDLST_WR_DL_UNIT_NUM1 from a register value.
#define BG_MMDC_MPWRDLST_WR_DL_UNIT_NUM1(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_MMDC_MPWRDLST_WR_DL_UNIT_NUM1) >> BP_MMDC_MPWRDLST_WR_DL_UNIT_NUM1)

/* --- Register HW_MMDC_MPWRDLST, field WR_DL_UNIT_NUM2[22:16] (RO)
 *
 * This field reflects the number of delay units that are actually used by write delay-line 2.
 */

#define BP_MMDC_MPWRDLST_WR_DL_UNIT_NUM2      (16)      //!< Bit position for MMDC_MPWRDLST_WR_DL_UNIT_NUM2.
#define BM_MMDC_MPWRDLST_WR_DL_UNIT_NUM2      (0x007f0000)  //!< Bit mask for MMDC_MPWRDLST_WR_DL_UNIT_NUM2.

//! @brief Get value of MMDC_MPWRDLST_WR_DL_UNIT_NUM2 from a register value.
#define BG_MMDC_MPWRDLST_WR_DL_UNIT_NUM2(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_MMDC_MPWRDLST_WR_DL_UNIT_NUM2) >> BP_MMDC_MPWRDLST_WR_DL_UNIT_NUM2)

/* --- Register HW_MMDC_MPWRDLST, field WR_DL_UNIT_NUM3[30:24] (RO)
 *
 * This field reflects the number of delay units that are actually used by write delay-line 3.
 */

#define BP_MMDC_MPWRDLST_WR_DL_UNIT_NUM3      (24)      //!< Bit position for MMDC_MPWRDLST_WR_DL_UNIT_NUM3.
#define BM_MMDC_MPWRDLST_WR_DL_UNIT_NUM3      (0x7f000000)  //!< Bit mask for MMDC_MPWRDLST_WR_DL_UNIT_NUM3.

//! @brief Get value of MMDC_MPWRDLST_WR_DL_UNIT_NUM3 from a register value.
#define BG_MMDC_MPWRDLST_WR_DL_UNIT_NUM3(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_MMDC_MPWRDLST_WR_DL_UNIT_NUM3) >> BP_MMDC_MPWRDLST_WR_DL_UNIT_NUM3)

//-------------------------------------------------------------------------------------------
// HW_MMDC_MPSDCTRL - MMDC PHY CK Control Register
//-------------------------------------------------------------------------------------------

#ifndef __LANGUAGE_ASM__
/*!
 * @brief HW_MMDC_MPSDCTRL - MMDC PHY CK Control Register (RW)
 *
 * Reset value: 0x00000000
 *
 * This register controls the fine tuning of the primary clock (CK0).  Supported Mode Of Operations:
 * For Channel 0: All  For Channel 1: LP2_2ch_x16, LP2_2ch_x32
 */
typedef union _hw_mmdc_mpsdctrl
{
    reg32_t U;
    struct _hw_mmdc_mpsdctrl_bitfields
    {
        unsigned RESERVED0 : 8; //!< [7:0] Reserved
        unsigned SDCLK0_DEL : 2; //!< [9:8] DDR clock0 delay fine tuning.
        unsigned RESERVED1 : 22; //!< [31:10] Reserved
    } B;
} hw_mmdc_mpsdctrl_t;
#endif

/*
 * constants & macros for entire MMDC_MPSDCTRL register
 */
#define HW_MMDC_MPSDCTRL_ADDR      (REGS_MMDC_BASE + 0x858)

#ifndef __LANGUAGE_ASM__
#define HW_MMDC_MPSDCTRL           (*(volatile hw_mmdc_mpsdctrl_t *) HW_MMDC_MPSDCTRL_ADDR)
#define HW_MMDC_MPSDCTRL_RD()      (HW_MMDC_MPSDCTRL.U)
#define HW_MMDC_MPSDCTRL_WR(v)     (HW_MMDC_MPSDCTRL.U = (v))
#define HW_MMDC_MPSDCTRL_SET(v)    (HW_MMDC_MPSDCTRL_WR(HW_MMDC_MPSDCTRL_RD() |  (v)))
#define HW_MMDC_MPSDCTRL_CLR(v)    (HW_MMDC_MPSDCTRL_WR(HW_MMDC_MPSDCTRL_RD() & ~(v)))
#define HW_MMDC_MPSDCTRL_TOG(v)    (HW_MMDC_MPSDCTRL_WR(HW_MMDC_MPSDCTRL_RD() ^  (v)))
#endif

/*
 * constants & macros for individual MMDC_MPSDCTRL bitfields
 */

/* --- Register HW_MMDC_MPSDCTRL, field SDCLK0_DEL[9:8] (RW)
 *
 * DDR clock0 delay fine tuning. This field holds the number of delay units that are added to DDR
 * clock (CK0). Note: In case of LPDDR2 2-ch mode this registers controls the fine tuning of the
 * clock that is driven to channel0 In case of DDR3 the fine tuning of the secondary clock is
 * controlled by 0x021B_4858[SDCLK]
 *
 * Values:
 * 00 - No change in DDR clock0 delay
 * 01 - Add DDR clock0 delay of 1 delay unit.
 * 10 - Add DDR clock0 delay of 2 delay units.
 * 11 - Add DDR clock0 delay of 3 delay units.
 */

#define BP_MMDC_MPSDCTRL_SDCLK0_DEL      (8)      //!< Bit position for MMDC_MPSDCTRL_SDCLK0_DEL.
#define BM_MMDC_MPSDCTRL_SDCLK0_DEL      (0x00000300)  //!< Bit mask for MMDC_MPSDCTRL_SDCLK0_DEL.

//! @brief Get value of MMDC_MPSDCTRL_SDCLK0_DEL from a register value.
#define BG_MMDC_MPSDCTRL_SDCLK0_DEL(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_MMDC_MPSDCTRL_SDCLK0_DEL) >> BP_MMDC_MPSDCTRL_SDCLK0_DEL)

//! @brief Format value for bitfield MMDC_MPSDCTRL_SDCLK0_DEL.
#define BF_MMDC_MPSDCTRL_SDCLK0_DEL(v)   ((__REG_VALUE_TYPE((v), reg32_t) << BP_MMDC_MPSDCTRL_SDCLK0_DEL) & BM_MMDC_MPSDCTRL_SDCLK0_DEL)

#ifndef __LANGUAGE_ASM__
//! @brief Set the SDCLK0_DEL field to a new value.
#define BW_MMDC_MPSDCTRL_SDCLK0_DEL(v)   (HW_MMDC_MPSDCTRL_WR((HW_MMDC_MPSDCTRL_RD() & ~BM_MMDC_MPSDCTRL_SDCLK0_DEL) | BF_MMDC_MPSDCTRL_SDCLK0_DEL(v)))
#endif


//-------------------------------------------------------------------------------------------
// HW_MMDC_MPZQLP2CTL - MMDC ZQ LPDDR2 HW Control Register
//-------------------------------------------------------------------------------------------

#ifndef __LANGUAGE_ASM__
/*!
 * @brief HW_MMDC_MPZQLP2CTL - MMDC ZQ LPDDR2 HW Control Register (RW)
 *
 * Reset value: 0x1b5f0109
 *
 * This register controls the idle time that takes the LPDDR2 device to perform ZQ calibration
 * Supported Mode Of Operations:  For Channel 0: LP2_2ch_x16, LP2_2ch_x32  For Channel 1:
 * LP2_2ch_x16, LP2_2ch_x32
 */
typedef union _hw_mmdc_mpzqlp2ctl
{
    reg32_t U;
    struct _hw_mmdc_mpzqlp2ctl_bitfields
    {
        unsigned ZQ_LP2_HW_ZQINIT : 9; //!< [8:0] This register defines the period in cycles that it takes the memory device to perform a Init ZQ calibration.
        unsigned RESERVED0 : 7; //!< [15:9] Reserved
        unsigned ZQ_LP2_HW_ZQCL : 8; //!< [23:16] This register defines the period in cycles that it takes the memory device to perform a long ZQ calibration.
        unsigned ZQ_LP2_HW_ZQCS : 7; //!< [30:24] This register defines the period in cycles that it takes the memory device to perform a Short ZQ calibration.
        unsigned RESERVED1 : 1; //!< [31] Reserved
    } B;
} hw_mmdc_mpzqlp2ctl_t;
#endif

/*
 * constants & macros for entire MMDC_MPZQLP2CTL register
 */
#define HW_MMDC_MPZQLP2CTL_ADDR      (REGS_MMDC_BASE + 0x85c)

#ifndef __LANGUAGE_ASM__
#define HW_MMDC_MPZQLP2CTL           (*(volatile hw_mmdc_mpzqlp2ctl_t *) HW_MMDC_MPZQLP2CTL_ADDR)
#define HW_MMDC_MPZQLP2CTL_RD()      (HW_MMDC_MPZQLP2CTL.U)
#define HW_MMDC_MPZQLP2CTL_WR(v)     (HW_MMDC_MPZQLP2CTL.U = (v))
#define HW_MMDC_MPZQLP2CTL_SET(v)    (HW_MMDC_MPZQLP2CTL_WR(HW_MMDC_MPZQLP2CTL_RD() |  (v)))
#define HW_MMDC_MPZQLP2CTL_CLR(v)    (HW_MMDC_MPZQLP2CTL_WR(HW_MMDC_MPZQLP2CTL_RD() & ~(v)))
#define HW_MMDC_MPZQLP2CTL_TOG(v)    (HW_MMDC_MPZQLP2CTL_WR(HW_MMDC_MPZQLP2CTL_RD() ^  (v)))
#endif

/*
 * constants & macros for individual MMDC_MPZQLP2CTL bitfields
 */

/* --- Register HW_MMDC_MPZQLP2CTL, field ZQ_LP2_HW_ZQINIT[8:0] (RW)
 *
 * This register defines the period in cycles that it takes the memory device to perform a Init ZQ
 * calibration. This is the period of time that the MMDC has to wait after sending a init ZQ
 * calibration and before sending other commands.
 *
 * Values:
 * 0x0-0x36 - Reserved
 * 0x37 - 112 cycles
 * 0x38 - 114 cycles
 * 0x109 - 532 cycles (Default, JEDEC value, tZQINIT, for LPDDR2, 1us @ clock frequency 533MHz)
 * 0x1FE - 1022 cycles
 * 0x1FF - 1024 cycles
 */

#define BP_MMDC_MPZQLP2CTL_ZQ_LP2_HW_ZQINIT      (0)      //!< Bit position for MMDC_MPZQLP2CTL_ZQ_LP2_HW_ZQINIT.
#define BM_MMDC_MPZQLP2CTL_ZQ_LP2_HW_ZQINIT      (0x000001ff)  //!< Bit mask for MMDC_MPZQLP2CTL_ZQ_LP2_HW_ZQINIT.

//! @brief Get value of MMDC_MPZQLP2CTL_ZQ_LP2_HW_ZQINIT from a register value.
#define BG_MMDC_MPZQLP2CTL_ZQ_LP2_HW_ZQINIT(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_MMDC_MPZQLP2CTL_ZQ_LP2_HW_ZQINIT) >> BP_MMDC_MPZQLP2CTL_ZQ_LP2_HW_ZQINIT)

//! @brief Format value for bitfield MMDC_MPZQLP2CTL_ZQ_LP2_HW_ZQINIT.
#define BF_MMDC_MPZQLP2CTL_ZQ_LP2_HW_ZQINIT(v)   ((__REG_VALUE_TYPE((v), reg32_t) << BP_MMDC_MPZQLP2CTL_ZQ_LP2_HW_ZQINIT) & BM_MMDC_MPZQLP2CTL_ZQ_LP2_HW_ZQINIT)

#ifndef __LANGUAGE_ASM__
//! @brief Set the ZQ_LP2_HW_ZQINIT field to a new value.
#define BW_MMDC_MPZQLP2CTL_ZQ_LP2_HW_ZQINIT(v)   (HW_MMDC_MPZQLP2CTL_WR((HW_MMDC_MPZQLP2CTL_RD() & ~BM_MMDC_MPZQLP2CTL_ZQ_LP2_HW_ZQINIT) | BF_MMDC_MPZQLP2CTL_ZQ_LP2_HW_ZQINIT(v)))
#endif


/* --- Register HW_MMDC_MPZQLP2CTL, field ZQ_LP2_HW_ZQCL[23:16] (RW)
 *
 * This register defines the period in cycles that it takes the memory device to perform a long ZQ
 * calibration. This is the period of time that the MMDC has to wait after sending a Short ZQ
 * calibration and before sending other commands.
 *
 * Values:
 * 0x0-0x36 - Reserved
 * 0x37 - 112 cycles
 * 0x38 - 114 cycles
 * 0x5F - 192 cycles (Default, JEDEC value, tZQCL, for LPDDR2, 360ns @ clock frequency 533MHz)
 * 0xFE - 510 cycles
 * 0xFF - 512 cycles
 */

#define BP_MMDC_MPZQLP2CTL_ZQ_LP2_HW_ZQCL      (16)      //!< Bit position for MMDC_MPZQLP2CTL_ZQ_LP2_HW_ZQCL.
#define BM_MMDC_MPZQLP2CTL_ZQ_LP2_HW_ZQCL      (0x00ff0000)  //!< Bit mask for MMDC_MPZQLP2CTL_ZQ_LP2_HW_ZQCL.

//! @brief Get value of MMDC_MPZQLP2CTL_ZQ_LP2_HW_ZQCL from a register value.
#define BG_MMDC_MPZQLP2CTL_ZQ_LP2_HW_ZQCL(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_MMDC_MPZQLP2CTL_ZQ_LP2_HW_ZQCL) >> BP_MMDC_MPZQLP2CTL_ZQ_LP2_HW_ZQCL)

//! @brief Format value for bitfield MMDC_MPZQLP2CTL_ZQ_LP2_HW_ZQCL.
#define BF_MMDC_MPZQLP2CTL_ZQ_LP2_HW_ZQCL(v)   ((__REG_VALUE_TYPE((v), reg32_t) << BP_MMDC_MPZQLP2CTL_ZQ_LP2_HW_ZQCL) & BM_MMDC_MPZQLP2CTL_ZQ_LP2_HW_ZQCL)

#ifndef __LANGUAGE_ASM__
//! @brief Set the ZQ_LP2_HW_ZQCL field to a new value.
#define BW_MMDC_MPZQLP2CTL_ZQ_LP2_HW_ZQCL(v)   (HW_MMDC_MPZQLP2CTL_WR((HW_MMDC_MPZQLP2CTL_RD() & ~BM_MMDC_MPZQLP2CTL_ZQ_LP2_HW_ZQCL) | BF_MMDC_MPZQLP2CTL_ZQ_LP2_HW_ZQCL(v)))
#endif


/* --- Register HW_MMDC_MPZQLP2CTL, field ZQ_LP2_HW_ZQCS[30:24] (RW)
 *
 * This register defines the period in cycles that it takes the memory device to perform a Short ZQ
 * calibration. This is the period of time that the MMDC has to wait after sending a long ZQ
 * calibration and before sending other commands. This delay will also be used if ZQ reset is sent.
 *
 * Values:
 * 0x0-0x1A - Reserved
 * 0x1B - 112 cycles (default)
 * 0x1C - 116 cycles
 * 0x7E - 508 cycles
 * 0x7F - 512 cycles
 */

#define BP_MMDC_MPZQLP2CTL_ZQ_LP2_HW_ZQCS      (24)      //!< Bit position for MMDC_MPZQLP2CTL_ZQ_LP2_HW_ZQCS.
#define BM_MMDC_MPZQLP2CTL_ZQ_LP2_HW_ZQCS      (0x7f000000)  //!< Bit mask for MMDC_MPZQLP2CTL_ZQ_LP2_HW_ZQCS.

//! @brief Get value of MMDC_MPZQLP2CTL_ZQ_LP2_HW_ZQCS from a register value.
#define BG_MMDC_MPZQLP2CTL_ZQ_LP2_HW_ZQCS(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_MMDC_MPZQLP2CTL_ZQ_LP2_HW_ZQCS) >> BP_MMDC_MPZQLP2CTL_ZQ_LP2_HW_ZQCS)

//! @brief Format value for bitfield MMDC_MPZQLP2CTL_ZQ_LP2_HW_ZQCS.
#define BF_MMDC_MPZQLP2CTL_ZQ_LP2_HW_ZQCS(v)   ((__REG_VALUE_TYPE((v), reg32_t) << BP_MMDC_MPZQLP2CTL_ZQ_LP2_HW_ZQCS) & BM_MMDC_MPZQLP2CTL_ZQ_LP2_HW_ZQCS)

#ifndef __LANGUAGE_ASM__
//! @brief Set the ZQ_LP2_HW_ZQCS field to a new value.
#define BW_MMDC_MPZQLP2CTL_ZQ_LP2_HW_ZQCS(v)   (HW_MMDC_MPZQLP2CTL_WR((HW_MMDC_MPZQLP2CTL_RD() & ~BM_MMDC_MPZQLP2CTL_ZQ_LP2_HW_ZQCS) | BF_MMDC_MPZQLP2CTL_ZQ_LP2_HW_ZQCS(v)))
#endif


//-------------------------------------------------------------------------------------------
// HW_MMDC_MPRDDLHWCTL - MMDC PHY Read Delay HW Calibration Control Register
//-------------------------------------------------------------------------------------------

#ifndef __LANGUAGE_ASM__
/*!
 * @brief HW_MMDC_MPRDDLHWCTL - MMDC PHY Read Delay HW Calibration Control Register (RW)
 *
 * Reset value: 0x00000000
 *
 * Supported Mode Of Operations:  For Channel 0: All  For Channel 1: DDR3_x64, LP2_2ch_x16,
 * LP2_2ch_x32
 */
typedef union _hw_mmdc_mprddlhwctl
{
    reg32_t U;
    struct _hw_mmdc_mprddlhwctl_bitfields
    {
        unsigned HW_RD_DL_ERR0 : 1; //!< [0] Automatic (HW) read calibration error of Byte0.
        unsigned HW_RD_DL_ERR1 : 1; //!< [1] Automatic (HW) read calibration error of Byte1.
        unsigned HW_RD_DL_ERR2 : 1; //!< [2] Automatic (HW) read calibration error of Byte2.
        unsigned HW_RD_DL_ERR3 : 1; //!< [3] Automatic (HW) read calibration error of Byte3.
        unsigned HW_RD_DL_EN : 1; //!< [4] Enable automatic (HW) read calibration.
        unsigned HW_RD_DL_CMP_CYC : 1; //!< [5] Automatic (HW) read sample cycle.
        unsigned RESERVED0 : 26; //!< [31:6] Reserved
    } B;
} hw_mmdc_mprddlhwctl_t;
#endif

/*
 * constants & macros for entire MMDC_MPRDDLHWCTL register
 */
#define HW_MMDC_MPRDDLHWCTL_ADDR      (REGS_MMDC_BASE + 0x860)

#ifndef __LANGUAGE_ASM__
#define HW_MMDC_MPRDDLHWCTL           (*(volatile hw_mmdc_mprddlhwctl_t *) HW_MMDC_MPRDDLHWCTL_ADDR)
#define HW_MMDC_MPRDDLHWCTL_RD()      (HW_MMDC_MPRDDLHWCTL.U)
#define HW_MMDC_MPRDDLHWCTL_WR(v)     (HW_MMDC_MPRDDLHWCTL.U = (v))
#define HW_MMDC_MPRDDLHWCTL_SET(v)    (HW_MMDC_MPRDDLHWCTL_WR(HW_MMDC_MPRDDLHWCTL_RD() |  (v)))
#define HW_MMDC_MPRDDLHWCTL_CLR(v)    (HW_MMDC_MPRDDLHWCTL_WR(HW_MMDC_MPRDDLHWCTL_RD() & ~(v)))
#define HW_MMDC_MPRDDLHWCTL_TOG(v)    (HW_MMDC_MPRDDLHWCTL_WR(HW_MMDC_MPRDDLHWCTL_RD() ^  (v)))
#endif

/*
 * constants & macros for individual MMDC_MPRDDLHWCTL bitfields
 */

/* --- Register HW_MMDC_MPRDDLHWCTL, field HW_RD_DL_ERR0[0] (RO)
 *
 * Automatic (HW) read calibration error of Byte0. If this bit is asserted then it indicates that an
 * error was found during the HW calibration process of read delay-line 0. In case this bit is zero
 * at the end of the calibration process then the boundary results can be found at MPRDDLHWST0
 * register. This bit is valid only after HW_RD_DL_EN is de-asserted.
 *
 * Values:
 * 0 - No error was found in read delay-line 0 during the automatic (HW) read calibration process of read
 *     delay-line 0.
 * 1 - An error was found in read delay-line 0 during the automatic (HW) read calibration process of read
 *     delay-line 0.
 */

#define BP_MMDC_MPRDDLHWCTL_HW_RD_DL_ERR0      (0)      //!< Bit position for MMDC_MPRDDLHWCTL_HW_RD_DL_ERR0.
#define BM_MMDC_MPRDDLHWCTL_HW_RD_DL_ERR0      (0x00000001)  //!< Bit mask for MMDC_MPRDDLHWCTL_HW_RD_DL_ERR0.

//! @brief Get value of MMDC_MPRDDLHWCTL_HW_RD_DL_ERR0 from a register value.
#define BG_MMDC_MPRDDLHWCTL_HW_RD_DL_ERR0(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_MMDC_MPRDDLHWCTL_HW_RD_DL_ERR0) >> BP_MMDC_MPRDDLHWCTL_HW_RD_DL_ERR0)


/* --- Register HW_MMDC_MPRDDLHWCTL, field HW_RD_DL_ERR1[1] (RO)
 *
 * Automatic (HW) read calibration error of Byte1. If this bit is asserted then it indicates that an
 * error was found during the HW calibration process of read delay-line 1. In case this bit is zero
 * at the end of the calibration process then the boundary results can be found at MPRDDLHWST0
 * register. This bit is valid only after HW_RD_DL_EN is de-asserted.
 *
 * Values:
 * 0 - No error was found in read delay-line 1 during the automatic (HW) read calibration process of read
 *     delay-line 1.
 * 1 - An error was found in read delay-line 1 during the automatic (HW) read calibration process of read
 *     delay-line 1.
 */

#define BP_MMDC_MPRDDLHWCTL_HW_RD_DL_ERR1      (1)      //!< Bit position for MMDC_MPRDDLHWCTL_HW_RD_DL_ERR1.
#define BM_MMDC_MPRDDLHWCTL_HW_RD_DL_ERR1      (0x00000002)  //!< Bit mask for MMDC_MPRDDLHWCTL_HW_RD_DL_ERR1.

//! @brief Get value of MMDC_MPRDDLHWCTL_HW_RD_DL_ERR1 from a register value.
#define BG_MMDC_MPRDDLHWCTL_HW_RD_DL_ERR1(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_MMDC_MPRDDLHWCTL_HW_RD_DL_ERR1) >> BP_MMDC_MPRDDLHWCTL_HW_RD_DL_ERR1)


/* --- Register HW_MMDC_MPRDDLHWCTL, field HW_RD_DL_ERR2[2] (RO)
 *
 * Automatic (HW) read calibration error of Byte2. If this bit is asserted then it indicates that an
 * error was found during the HW calibration process of read delay-line 2. In case this bit is zero
 * at the end of the calibration process then the boundary results can be found at MPRDDLHWST1
 * register. This bit is valid only after HW_RD_DL_EN is de-asserted.
 *
 * Values:
 * 0 - No error was found in read delay-line 2 during the automatic (HW) read calibration process of read
 *     delay-line 2.
 * 1 - An error was found in read delay-line 2 during the automatic (HW) read calibration process of read
 *     delay-line 2.
 */

#define BP_MMDC_MPRDDLHWCTL_HW_RD_DL_ERR2      (2)      //!< Bit position for MMDC_MPRDDLHWCTL_HW_RD_DL_ERR2.
#define BM_MMDC_MPRDDLHWCTL_HW_RD_DL_ERR2      (0x00000004)  //!< Bit mask for MMDC_MPRDDLHWCTL_HW_RD_DL_ERR2.

//! @brief Get value of MMDC_MPRDDLHWCTL_HW_RD_DL_ERR2 from a register value.
#define BG_MMDC_MPRDDLHWCTL_HW_RD_DL_ERR2(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_MMDC_MPRDDLHWCTL_HW_RD_DL_ERR2) >> BP_MMDC_MPRDDLHWCTL_HW_RD_DL_ERR2)


/* --- Register HW_MMDC_MPRDDLHWCTL, field HW_RD_DL_ERR3[3] (RO)
 *
 * Automatic (HW) read calibration error of Byte3. If this bit is asserted then it indicates that an
 * error was found during the HW calibration process of read delay-line 3. In case this bit is zero
 * at the end of the calibration process then the boundary results can be found at MPRDDLHWST1
 * register. This bit is valid only after HW_RD_DL_EN is de-asserted.
 *
 * Values:
 * 0 - No error was found in read delay-line 3 during the automatic (HW) read calibration process of read
 *     delay-line 3.
 * 1 - An error was found in read delay-line 3 during the automatic (HW) read calibration process of read
 *     delay-line 3.
 */

#define BP_MMDC_MPRDDLHWCTL_HW_RD_DL_ERR3      (3)      //!< Bit position for MMDC_MPRDDLHWCTL_HW_RD_DL_ERR3.
#define BM_MMDC_MPRDDLHWCTL_HW_RD_DL_ERR3      (0x00000008)  //!< Bit mask for MMDC_MPRDDLHWCTL_HW_RD_DL_ERR3.

//! @brief Get value of MMDC_MPRDDLHWCTL_HW_RD_DL_ERR3 from a register value.
#define BG_MMDC_MPRDDLHWCTL_HW_RD_DL_ERR3(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_MMDC_MPRDDLHWCTL_HW_RD_DL_ERR3) >> BP_MMDC_MPRDDLHWCTL_HW_RD_DL_ERR3)


/* --- Register HW_MMDC_MPRDDLHWCTL, field HW_RD_DL_EN[4] (RW)
 *
 * Enable automatic (HW) read calibration. If this bit is asserted then the MMDC will perform an
 * automatic read calibration. HW should negate this bit upon completion of the calibration.
 * Negation of this bit also points that the read calibration results are valid Note: Before issuing
 * the first read command MMDC counts 12 cycles.
 */

#define BP_MMDC_MPRDDLHWCTL_HW_RD_DL_EN      (4)      //!< Bit position for MMDC_MPRDDLHWCTL_HW_RD_DL_EN.
#define BM_MMDC_MPRDDLHWCTL_HW_RD_DL_EN      (0x00000010)  //!< Bit mask for MMDC_MPRDDLHWCTL_HW_RD_DL_EN.

//! @brief Get value of MMDC_MPRDDLHWCTL_HW_RD_DL_EN from a register value.
#define BG_MMDC_MPRDDLHWCTL_HW_RD_DL_EN(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_MMDC_MPRDDLHWCTL_HW_RD_DL_EN) >> BP_MMDC_MPRDDLHWCTL_HW_RD_DL_EN)

//! @brief Format value for bitfield MMDC_MPRDDLHWCTL_HW_RD_DL_EN.
#define BF_MMDC_MPRDDLHWCTL_HW_RD_DL_EN(v)   ((__REG_VALUE_TYPE((v), reg32_t) << BP_MMDC_MPRDDLHWCTL_HW_RD_DL_EN) & BM_MMDC_MPRDDLHWCTL_HW_RD_DL_EN)

#ifndef __LANGUAGE_ASM__
//! @brief Set the HW_RD_DL_EN field to a new value.
#define BW_MMDC_MPRDDLHWCTL_HW_RD_DL_EN(v)   (HW_MMDC_MPRDDLHWCTL_WR((HW_MMDC_MPRDDLHWCTL_RD() & ~BM_MMDC_MPRDDLHWCTL_HW_RD_DL_EN) | BF_MMDC_MPRDDLHWCTL_HW_RD_DL_EN(v)))
#endif

/* --- Register HW_MMDC_MPRDDLHWCTL, field HW_RD_DL_CMP_CYC[5] (RW)
 *
 * Automatic (HW) read sample cycle. If this bit is asserted then the MMDC will compare the read
 * data 32 cycles after the MMDC sent the read command enable pulse else it compares the data after
 * 16 cycles.
 */

#define BP_MMDC_MPRDDLHWCTL_HW_RD_DL_CMP_CYC      (5)      //!< Bit position for MMDC_MPRDDLHWCTL_HW_RD_DL_CMP_CYC.
#define BM_MMDC_MPRDDLHWCTL_HW_RD_DL_CMP_CYC      (0x00000020)  //!< Bit mask for MMDC_MPRDDLHWCTL_HW_RD_DL_CMP_CYC.

//! @brief Get value of MMDC_MPRDDLHWCTL_HW_RD_DL_CMP_CYC from a register value.
#define BG_MMDC_MPRDDLHWCTL_HW_RD_DL_CMP_CYC(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_MMDC_MPRDDLHWCTL_HW_RD_DL_CMP_CYC) >> BP_MMDC_MPRDDLHWCTL_HW_RD_DL_CMP_CYC)

//! @brief Format value for bitfield MMDC_MPRDDLHWCTL_HW_RD_DL_CMP_CYC.
#define BF_MMDC_MPRDDLHWCTL_HW_RD_DL_CMP_CYC(v)   ((__REG_VALUE_TYPE((v), reg32_t) << BP_MMDC_MPRDDLHWCTL_HW_RD_DL_CMP_CYC) & BM_MMDC_MPRDDLHWCTL_HW_RD_DL_CMP_CYC)

#ifndef __LANGUAGE_ASM__
//! @brief Set the HW_RD_DL_CMP_CYC field to a new value.
#define BW_MMDC_MPRDDLHWCTL_HW_RD_DL_CMP_CYC(v)   (HW_MMDC_MPRDDLHWCTL_WR((HW_MMDC_MPRDDLHWCTL_RD() & ~BM_MMDC_MPRDDLHWCTL_HW_RD_DL_CMP_CYC) | BF_MMDC_MPRDDLHWCTL_HW_RD_DL_CMP_CYC(v)))
#endif

//-------------------------------------------------------------------------------------------
// HW_MMDC_MPWRDLHWCTL - MMDC PHY Write Delay HW Calibration Control Register
//-------------------------------------------------------------------------------------------

#ifndef __LANGUAGE_ASM__
/*!
 * @brief HW_MMDC_MPWRDLHWCTL - MMDC PHY Write Delay HW Calibration Control Register (RW)
 *
 * Reset value: 0x00000000
 *
 * Supported Mode Of Operations:  For Channel 0: All  For Channel 1: DDR3_x64, LP2_2ch_x16,
 * LP2_2ch_x32
 */
typedef union _hw_mmdc_mpwrdlhwctl
{
    reg32_t U;
    struct _hw_mmdc_mpwrdlhwctl_bitfields
    {
        unsigned HW_WR_DL_ERR0 : 1; //!< [0] Automatic (HW) write calibration error of Byte0.
        unsigned HW_WR_DL_ERR1 : 1; //!< [1] Automatic (HW) write calibration error of Byte1.
        unsigned HW_WR_DL_ERR2 : 1; //!< [2] Automatic (HW) write calibration error of Byte2.
        unsigned HW_WR_DL_ERR3 : 1; //!< [3] Automatic (HW) write calibration error of Byte3.
        unsigned HW_WR_DL_EN : 1; //!< [4] Enable automatic (HW) write calibration.
        unsigned HW_WR_DL_CMP_CYC : 1; //!< [5] Write sample cycle.
        unsigned RESERVED0 : 26; //!< [31:6] Reserved
    } B;
} hw_mmdc_mpwrdlhwctl_t;
#endif

/*
 * constants & macros for entire MMDC_MPWRDLHWCTL register
 */
#define HW_MMDC_MPWRDLHWCTL_ADDR      (REGS_MMDC_BASE + 0x864)

#ifndef __LANGUAGE_ASM__
#define HW_MMDC_MPWRDLHWCTL           (*(volatile hw_mmdc_mpwrdlhwctl_t *) HW_MMDC_MPWRDLHWCTL_ADDR)
#define HW_MMDC_MPWRDLHWCTL_RD()      (HW_MMDC_MPWRDLHWCTL.U)
#define HW_MMDC_MPWRDLHWCTL_WR(v)     (HW_MMDC_MPWRDLHWCTL.U = (v))
#define HW_MMDC_MPWRDLHWCTL_SET(v)    (HW_MMDC_MPWRDLHWCTL_WR(HW_MMDC_MPWRDLHWCTL_RD() |  (v)))
#define HW_MMDC_MPWRDLHWCTL_CLR(v)    (HW_MMDC_MPWRDLHWCTL_WR(HW_MMDC_MPWRDLHWCTL_RD() & ~(v)))
#define HW_MMDC_MPWRDLHWCTL_TOG(v)    (HW_MMDC_MPWRDLHWCTL_WR(HW_MMDC_MPWRDLHWCTL_RD() ^  (v)))
#endif

/*
 * constants & macros for individual MMDC_MPWRDLHWCTL bitfields
 */

/* --- Register HW_MMDC_MPWRDLHWCTL, field HW_WR_DL_ERR0[0] (RO)
 *
 * Automatic (HW) write calibration error of Byte0. If this bit is asserted then it indicates that
 * an error was found during the HW calibration process of write delay-line 0. In case this bit is
 * zero at the end of the calibration process then the boundary results can be found at MPWRDLHWST0
 * register. This bit is valid only after HW_WR_DL_EN is de-asserted.
 *
 * Values:
 * 0 - No error was found during the automatic (HW) write calibration process of write delay-line 0.
 * 1 - An error was found during the automatic (HW) write calibration process of write delay-line 0.
 */

#define BP_MMDC_MPWRDLHWCTL_HW_WR_DL_ERR0      (0)      //!< Bit position for MMDC_MPWRDLHWCTL_HW_WR_DL_ERR0.
#define BM_MMDC_MPWRDLHWCTL_HW_WR_DL_ERR0      (0x00000001)  //!< Bit mask for MMDC_MPWRDLHWCTL_HW_WR_DL_ERR0.

//! @brief Get value of MMDC_MPWRDLHWCTL_HW_WR_DL_ERR0 from a register value.
#define BG_MMDC_MPWRDLHWCTL_HW_WR_DL_ERR0(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_MMDC_MPWRDLHWCTL_HW_WR_DL_ERR0) >> BP_MMDC_MPWRDLHWCTL_HW_WR_DL_ERR0)


/* --- Register HW_MMDC_MPWRDLHWCTL, field HW_WR_DL_ERR1[1] (RO)
 *
 * Automatic (HW) write calibration error of Byte1. If this bit is asserted then it indicates that
 * an error was found during the HW calibration process of write delay-line 1. In case this bit is
 * zero at the end of the calibration process then the boundary results can be found at MPWRDLHWST0
 * register. This bit is valid only after HW_WR_DL_EN is de-asserted.
 *
 * Values:
 * 0 - No error was found during the automatic (HW) write calibration process of write delay-line 1.
 * 1 - An error was found during the automatic (HW) write calibration process of write delay-line 1.
 */

#define BP_MMDC_MPWRDLHWCTL_HW_WR_DL_ERR1      (1)      //!< Bit position for MMDC_MPWRDLHWCTL_HW_WR_DL_ERR1.
#define BM_MMDC_MPWRDLHWCTL_HW_WR_DL_ERR1      (0x00000002)  //!< Bit mask for MMDC_MPWRDLHWCTL_HW_WR_DL_ERR1.

//! @brief Get value of MMDC_MPWRDLHWCTL_HW_WR_DL_ERR1 from a register value.
#define BG_MMDC_MPWRDLHWCTL_HW_WR_DL_ERR1(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_MMDC_MPWRDLHWCTL_HW_WR_DL_ERR1) >> BP_MMDC_MPWRDLHWCTL_HW_WR_DL_ERR1)


/* --- Register HW_MMDC_MPWRDLHWCTL, field HW_WR_DL_ERR2[2] (RO)
 *
 * Automatic (HW) write calibration error of Byte2. If this bit is asserted then it indicates that
 * an error was found during the HW calibration process of write delay-line 2. T In case this bit is
 * zero at the end of the calibration process then the boundary results can be found at MPWRDLHWST1
 * register. This bit is valid only after HW_WR_DL_EN is de-asserted.
 *
 * Values:
 * 0 - No error was found during the automatic (HW) write calibration process of write delay-line 2.
 * 1 - An error was found during the automatic (HW) write calibration process of write delay-line 2.
 */

#define BP_MMDC_MPWRDLHWCTL_HW_WR_DL_ERR2      (2)      //!< Bit position for MMDC_MPWRDLHWCTL_HW_WR_DL_ERR2.
#define BM_MMDC_MPWRDLHWCTL_HW_WR_DL_ERR2      (0x00000004)  //!< Bit mask for MMDC_MPWRDLHWCTL_HW_WR_DL_ERR2.

//! @brief Get value of MMDC_MPWRDLHWCTL_HW_WR_DL_ERR2 from a register value.
#define BG_MMDC_MPWRDLHWCTL_HW_WR_DL_ERR2(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_MMDC_MPWRDLHWCTL_HW_WR_DL_ERR2) >> BP_MMDC_MPWRDLHWCTL_HW_WR_DL_ERR2)


/* --- Register HW_MMDC_MPWRDLHWCTL, field HW_WR_DL_ERR3[3] (RO)
 *
 * Automatic (HW) write calibration error of Byte3. If this bit is asserted then it indicates that
 * an error was found during the HW calibration process of write delay-line 3. In case this bit is
 * zero at the end of the calibration process then the boundary results can be found at MPWRDLHWST1
 * register. This bit is valid only after HW_WR_DL_EN is de-asserted.
 *
 * Values:
 * 0 - No error was found during the automatic (HW) write calibration process of write delay-line 3.
 * 1 - An error was found during the automatic (HW) write calibration process of write delay-line 3.
 */

#define BP_MMDC_MPWRDLHWCTL_HW_WR_DL_ERR3      (3)      //!< Bit position for MMDC_MPWRDLHWCTL_HW_WR_DL_ERR3.
#define BM_MMDC_MPWRDLHWCTL_HW_WR_DL_ERR3      (0x00000008)  //!< Bit mask for MMDC_MPWRDLHWCTL_HW_WR_DL_ERR3.

//! @brief Get value of MMDC_MPWRDLHWCTL_HW_WR_DL_ERR3 from a register value.
#define BG_MMDC_MPWRDLHWCTL_HW_WR_DL_ERR3(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_MMDC_MPWRDLHWCTL_HW_WR_DL_ERR3) >> BP_MMDC_MPWRDLHWCTL_HW_WR_DL_ERR3)


/* --- Register HW_MMDC_MPWRDLHWCTL, field HW_WR_DL_EN[4] (RW)
 *
 * Enable automatic (HW) write calibration. If this bit is asserted then the MMDC will perform an
 * automatic write calibration. HW should negate this bit upon completion of the calibration.
 * Negation of this bit also indicates that the write calibration results are valid Note: Before
 * issuing the first read command MMDC counts 12 cycles.
 */

#define BP_MMDC_MPWRDLHWCTL_HW_WR_DL_EN      (4)      //!< Bit position for MMDC_MPWRDLHWCTL_HW_WR_DL_EN.
#define BM_MMDC_MPWRDLHWCTL_HW_WR_DL_EN      (0x00000010)  //!< Bit mask for MMDC_MPWRDLHWCTL_HW_WR_DL_EN.

//! @brief Get value of MMDC_MPWRDLHWCTL_HW_WR_DL_EN from a register value.
#define BG_MMDC_MPWRDLHWCTL_HW_WR_DL_EN(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_MMDC_MPWRDLHWCTL_HW_WR_DL_EN) >> BP_MMDC_MPWRDLHWCTL_HW_WR_DL_EN)

//! @brief Format value for bitfield MMDC_MPWRDLHWCTL_HW_WR_DL_EN.
#define BF_MMDC_MPWRDLHWCTL_HW_WR_DL_EN(v)   ((__REG_VALUE_TYPE((v), reg32_t) << BP_MMDC_MPWRDLHWCTL_HW_WR_DL_EN) & BM_MMDC_MPWRDLHWCTL_HW_WR_DL_EN)

#ifndef __LANGUAGE_ASM__
//! @brief Set the HW_WR_DL_EN field to a new value.
#define BW_MMDC_MPWRDLHWCTL_HW_WR_DL_EN(v)   (HW_MMDC_MPWRDLHWCTL_WR((HW_MMDC_MPWRDLHWCTL_RD() & ~BM_MMDC_MPWRDLHWCTL_HW_WR_DL_EN) | BF_MMDC_MPWRDLHWCTL_HW_WR_DL_EN(v)))
#endif

/* --- Register HW_MMDC_MPWRDLHWCTL, field HW_WR_DL_CMP_CYC[5] (RW)
 *
 * Write sample cycle. If this bit is asserted then the MMDC will compare the data 32 cycles after
 * the MMDC sent the read command enable pulse else it compares the data after 16 cycles.
 */

#define BP_MMDC_MPWRDLHWCTL_HW_WR_DL_CMP_CYC      (5)      //!< Bit position for MMDC_MPWRDLHWCTL_HW_WR_DL_CMP_CYC.
#define BM_MMDC_MPWRDLHWCTL_HW_WR_DL_CMP_CYC      (0x00000020)  //!< Bit mask for MMDC_MPWRDLHWCTL_HW_WR_DL_CMP_CYC.

//! @brief Get value of MMDC_MPWRDLHWCTL_HW_WR_DL_CMP_CYC from a register value.
#define BG_MMDC_MPWRDLHWCTL_HW_WR_DL_CMP_CYC(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_MMDC_MPWRDLHWCTL_HW_WR_DL_CMP_CYC) >> BP_MMDC_MPWRDLHWCTL_HW_WR_DL_CMP_CYC)

//! @brief Format value for bitfield MMDC_MPWRDLHWCTL_HW_WR_DL_CMP_CYC.
#define BF_MMDC_MPWRDLHWCTL_HW_WR_DL_CMP_CYC(v)   ((__REG_VALUE_TYPE((v), reg32_t) << BP_MMDC_MPWRDLHWCTL_HW_WR_DL_CMP_CYC) & BM_MMDC_MPWRDLHWCTL_HW_WR_DL_CMP_CYC)

#ifndef __LANGUAGE_ASM__
//! @brief Set the HW_WR_DL_CMP_CYC field to a new value.
#define BW_MMDC_MPWRDLHWCTL_HW_WR_DL_CMP_CYC(v)   (HW_MMDC_MPWRDLHWCTL_WR((HW_MMDC_MPWRDLHWCTL_RD() & ~BM_MMDC_MPWRDLHWCTL_HW_WR_DL_CMP_CYC) | BF_MMDC_MPWRDLHWCTL_HW_WR_DL_CMP_CYC(v)))
#endif

//-------------------------------------------------------------------------------------------
// HW_MMDC_MPRDDLHWST0 - MMDC PHY Read Delay HW Calibration Status Register 0
//-------------------------------------------------------------------------------------------

#ifndef __LANGUAGE_ASM__
/*!
 * @brief HW_MMDC_MPRDDLHWST0 - MMDC PHY Read Delay HW Calibration Status Register 0 (RO)
 *
 * Reset value: 0x00000000
 *
 * Supported Mode Of Operations:  For Channel 0: All  For Channel 1: DDR3_x64, LP2_2ch_x16,
 * LP2_2ch_x32
 */
typedef union _hw_mmdc_mprddlhwst0
{
    reg32_t U;
    struct _hw_mmdc_mprddlhwst0_bitfields
    {
        unsigned HW_RD_DL_LOW0 : 7; //!< [6:0] Automatic (HW) read calibration result of the lower boundary of Byte0.
        unsigned RESERVED0 : 1; //!< [7] Reserved
        unsigned HW_RD_DL_UP0 : 7; //!< [14:8] Automatic (HW) read calibration result of the upper boundary of Byte0.
        unsigned RESERVED1 : 1; //!< [15] Reserved
        unsigned HW_RD_DL_LOW1 : 7; //!< [22:16] Automatic (HW) read calibration result of the lower boundary of Byte1.
        unsigned RESERVED2 : 1; //!< [23] Reserved
        unsigned HW_RD_DL_UP1 : 7; //!< [30:24] Automatic (HW) read calibration result of the upper boundary of Byte1.
        unsigned RESERVED3 : 1; //!< [31] Reserved
    } B;
} hw_mmdc_mprddlhwst0_t;
#endif

/*
 * constants & macros for entire MMDC_MPRDDLHWST0 register
 */
#define HW_MMDC_MPRDDLHWST0_ADDR      (REGS_MMDC_BASE + 0x868)

#ifndef __LANGUAGE_ASM__
#define HW_MMDC_MPRDDLHWST0           (*(volatile hw_mmdc_mprddlhwst0_t *) HW_MMDC_MPRDDLHWST0_ADDR)
#define HW_MMDC_MPRDDLHWST0_RD()      (HW_MMDC_MPRDDLHWST0.U)
#endif

/*
 * constants & macros for individual MMDC_MPRDDLHWST0 bitfields
 */

/* --- Register HW_MMDC_MPRDDLHWST0, field HW_RD_DL_LOW0[6:0] (RO)
 *
 * Automatic (HW) read calibration result of the lower boundary of Byte0. This field holds the
 * automatic (HW) read calibration result of the lower boundary of Byte0.
 */

#define BP_MMDC_MPRDDLHWST0_HW_RD_DL_LOW0      (0)      //!< Bit position for MMDC_MPRDDLHWST0_HW_RD_DL_LOW0.
#define BM_MMDC_MPRDDLHWST0_HW_RD_DL_LOW0      (0x0000007f)  //!< Bit mask for MMDC_MPRDDLHWST0_HW_RD_DL_LOW0.

//! @brief Get value of MMDC_MPRDDLHWST0_HW_RD_DL_LOW0 from a register value.
#define BG_MMDC_MPRDDLHWST0_HW_RD_DL_LOW0(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_MMDC_MPRDDLHWST0_HW_RD_DL_LOW0) >> BP_MMDC_MPRDDLHWST0_HW_RD_DL_LOW0)

/* --- Register HW_MMDC_MPRDDLHWST0, field HW_RD_DL_UP0[14:8] (RO)
 *
 * Automatic (HW) read calibration result of the upper boundary of Byte0. This field holds the
 * automatic (HW) read calibration result of the upper boundary of Byte0.
 */

#define BP_MMDC_MPRDDLHWST0_HW_RD_DL_UP0      (8)      //!< Bit position for MMDC_MPRDDLHWST0_HW_RD_DL_UP0.
#define BM_MMDC_MPRDDLHWST0_HW_RD_DL_UP0      (0x00007f00)  //!< Bit mask for MMDC_MPRDDLHWST0_HW_RD_DL_UP0.

//! @brief Get value of MMDC_MPRDDLHWST0_HW_RD_DL_UP0 from a register value.
#define BG_MMDC_MPRDDLHWST0_HW_RD_DL_UP0(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_MMDC_MPRDDLHWST0_HW_RD_DL_UP0) >> BP_MMDC_MPRDDLHWST0_HW_RD_DL_UP0)

/* --- Register HW_MMDC_MPRDDLHWST0, field HW_RD_DL_LOW1[22:16] (RO)
 *
 * Automatic (HW) read calibration result of the lower boundary of Byte1. This field holds the
 * automatic (HW) read calibration result of the lower boundary of Byte1
 */

#define BP_MMDC_MPRDDLHWST0_HW_RD_DL_LOW1      (16)      //!< Bit position for MMDC_MPRDDLHWST0_HW_RD_DL_LOW1.
#define BM_MMDC_MPRDDLHWST0_HW_RD_DL_LOW1      (0x007f0000)  //!< Bit mask for MMDC_MPRDDLHWST0_HW_RD_DL_LOW1.

//! @brief Get value of MMDC_MPRDDLHWST0_HW_RD_DL_LOW1 from a register value.
#define BG_MMDC_MPRDDLHWST0_HW_RD_DL_LOW1(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_MMDC_MPRDDLHWST0_HW_RD_DL_LOW1) >> BP_MMDC_MPRDDLHWST0_HW_RD_DL_LOW1)

/* --- Register HW_MMDC_MPRDDLHWST0, field HW_RD_DL_UP1[30:24] (RO)
 *
 * Automatic (HW) read calibration result of the upper boundary of Byte1. This field holds the
 * automatic (HW) read calibration result of the upper boundary of Byte1
 */

#define BP_MMDC_MPRDDLHWST0_HW_RD_DL_UP1      (24)      //!< Bit position for MMDC_MPRDDLHWST0_HW_RD_DL_UP1.
#define BM_MMDC_MPRDDLHWST0_HW_RD_DL_UP1      (0x7f000000)  //!< Bit mask for MMDC_MPRDDLHWST0_HW_RD_DL_UP1.

//! @brief Get value of MMDC_MPRDDLHWST0_HW_RD_DL_UP1 from a register value.
#define BG_MMDC_MPRDDLHWST0_HW_RD_DL_UP1(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_MMDC_MPRDDLHWST0_HW_RD_DL_UP1) >> BP_MMDC_MPRDDLHWST0_HW_RD_DL_UP1)

//-------------------------------------------------------------------------------------------
// HW_MMDC_MPRDDLHWST1 - MMDC PHY Read Delay HW Calibration Status Register 1
//-------------------------------------------------------------------------------------------

#ifndef __LANGUAGE_ASM__
/*!
 * @brief HW_MMDC_MPRDDLHWST1 - MMDC PHY Read Delay HW Calibration Status Register 1 (RO)
 *
 * Reset value: 0x00000000
 *
 * Supported Mode Of Operations:  For Channel 0: All  For Channel 1: DDR3_x64, LP2_2ch_x16,
 * LP2_2ch_x32
 */
typedef union _hw_mmdc_mprddlhwst1
{
    reg32_t U;
    struct _hw_mmdc_mprddlhwst1_bitfields
    {
        unsigned HW_RD_DL_LOW2 : 7; //!< [6:0] Automatic (HW) read calibration result of the lower boundary of Byte2.
        unsigned RESERVED0 : 1; //!< [7] Reserved
        unsigned HW_RD_DL_UP2 : 7; //!< [14:8] Automatic (HW) read calibration result of the upper boundary of Byte2.
        unsigned RESERVED1 : 1; //!< [15] Reserved
        unsigned HW_RD_DL_LOW3 : 7; //!< [22:16] Automatic (HW) read calibration result of the lower boundary of Byte3.
        unsigned RESERVED2 : 1; //!< [23] Reserved
        unsigned HW_RD_DL_UP3 : 7; //!< [30:24] Automatic (HW) read calibration result of the upper boundary of Byte3.
        unsigned RESERVED3 : 1; //!< [31] Reserved
    } B;
} hw_mmdc_mprddlhwst1_t;
#endif

/*
 * constants & macros for entire MMDC_MPRDDLHWST1 register
 */
#define HW_MMDC_MPRDDLHWST1_ADDR      (REGS_MMDC_BASE + 0x86c)

#ifndef __LANGUAGE_ASM__
#define HW_MMDC_MPRDDLHWST1           (*(volatile hw_mmdc_mprddlhwst1_t *) HW_MMDC_MPRDDLHWST1_ADDR)
#define HW_MMDC_MPRDDLHWST1_RD()      (HW_MMDC_MPRDDLHWST1.U)
#endif

/*
 * constants & macros for individual MMDC_MPRDDLHWST1 bitfields
 */

/* --- Register HW_MMDC_MPRDDLHWST1, field HW_RD_DL_LOW2[6:0] (RO)
 *
 * Automatic (HW) read calibration result of the lower boundary of Byte2. This field holds the
 * automatic (HW) read calibration result of the lower boundary of Byte2.
 */

#define BP_MMDC_MPRDDLHWST1_HW_RD_DL_LOW2      (0)      //!< Bit position for MMDC_MPRDDLHWST1_HW_RD_DL_LOW2.
#define BM_MMDC_MPRDDLHWST1_HW_RD_DL_LOW2      (0x0000007f)  //!< Bit mask for MMDC_MPRDDLHWST1_HW_RD_DL_LOW2.

//! @brief Get value of MMDC_MPRDDLHWST1_HW_RD_DL_LOW2 from a register value.
#define BG_MMDC_MPRDDLHWST1_HW_RD_DL_LOW2(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_MMDC_MPRDDLHWST1_HW_RD_DL_LOW2) >> BP_MMDC_MPRDDLHWST1_HW_RD_DL_LOW2)

/* --- Register HW_MMDC_MPRDDLHWST1, field HW_RD_DL_UP2[14:8] (RO)
 *
 * Automatic (HW) read calibration result of the upper boundary of Byte2. This field holds the
 * automatic (HW) read calibration result of the upper boundary of Byte2.
 */

#define BP_MMDC_MPRDDLHWST1_HW_RD_DL_UP2      (8)      //!< Bit position for MMDC_MPRDDLHWST1_HW_RD_DL_UP2.
#define BM_MMDC_MPRDDLHWST1_HW_RD_DL_UP2      (0x00007f00)  //!< Bit mask for MMDC_MPRDDLHWST1_HW_RD_DL_UP2.

//! @brief Get value of MMDC_MPRDDLHWST1_HW_RD_DL_UP2 from a register value.
#define BG_MMDC_MPRDDLHWST1_HW_RD_DL_UP2(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_MMDC_MPRDDLHWST1_HW_RD_DL_UP2) >> BP_MMDC_MPRDDLHWST1_HW_RD_DL_UP2)

/* --- Register HW_MMDC_MPRDDLHWST1, field HW_RD_DL_LOW3[22:16] (RO)
 *
 * Automatic (HW) read calibration result of the lower boundary of Byte3. This field holds the
 * automatic (HW) read calibration result of the lower boundary of Byte3
 */

#define BP_MMDC_MPRDDLHWST1_HW_RD_DL_LOW3      (16)      //!< Bit position for MMDC_MPRDDLHWST1_HW_RD_DL_LOW3.
#define BM_MMDC_MPRDDLHWST1_HW_RD_DL_LOW3      (0x007f0000)  //!< Bit mask for MMDC_MPRDDLHWST1_HW_RD_DL_LOW3.

//! @brief Get value of MMDC_MPRDDLHWST1_HW_RD_DL_LOW3 from a register value.
#define BG_MMDC_MPRDDLHWST1_HW_RD_DL_LOW3(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_MMDC_MPRDDLHWST1_HW_RD_DL_LOW3) >> BP_MMDC_MPRDDLHWST1_HW_RD_DL_LOW3)

/* --- Register HW_MMDC_MPRDDLHWST1, field HW_RD_DL_UP3[30:24] (RO)
 *
 * Automatic (HW) read calibration result of the upper boundary of Byte3. This field holds the
 * automatic (HW) read calibration result of the upper boundary of Byte3
 */

#define BP_MMDC_MPRDDLHWST1_HW_RD_DL_UP3      (24)      //!< Bit position for MMDC_MPRDDLHWST1_HW_RD_DL_UP3.
#define BM_MMDC_MPRDDLHWST1_HW_RD_DL_UP3      (0x7f000000)  //!< Bit mask for MMDC_MPRDDLHWST1_HW_RD_DL_UP3.

//! @brief Get value of MMDC_MPRDDLHWST1_HW_RD_DL_UP3 from a register value.
#define BG_MMDC_MPRDDLHWST1_HW_RD_DL_UP3(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_MMDC_MPRDDLHWST1_HW_RD_DL_UP3) >> BP_MMDC_MPRDDLHWST1_HW_RD_DL_UP3)

//-------------------------------------------------------------------------------------------
// HW_MMDC_MPWRDLHWST0 - MMDC PHY Write Delay HW Calibration Status Register 0
//-------------------------------------------------------------------------------------------

#ifndef __LANGUAGE_ASM__
/*!
 * @brief HW_MMDC_MPWRDLHWST0 - MMDC PHY Write Delay HW Calibration Status Register 0 (RO)
 *
 * Reset value: 0x00000000
 *
 * Supported Mode Of Operations:  For Channel 0: All  For Channel 1: DDR3_x64, LP2_2ch_x16,
 * LP2_2ch_x32
 */
typedef union _hw_mmdc_mpwrdlhwst0
{
    reg32_t U;
    struct _hw_mmdc_mpwrdlhwst0_bitfields
    {
        unsigned HW_WR_DL_LOW0 : 7; //!< [6:0] Automatic (HW) write calibration result of the lower boundary of Byte0.
        unsigned RESERVED0 : 1; //!< [7] Reserved
        unsigned HW_WR_DL_UP0 : 7; //!< [14:8] Automatic (HW) write calibration result of the upper boundary of Byte0.
        unsigned RESERVED1 : 1; //!< [15] Reserved
        unsigned HW_WR_DL_LOW1 : 7; //!< [22:16] Automatic (HW) write calibration result of the lower boundary of Byte1.
        unsigned RESERVED2 : 1; //!< [23] Reserved
        unsigned HW_WR_DL_UP1 : 7; //!< [30:24] Aautomatic (HW) write utomatic (HW) write calibration result of the upper boundary of Byte1.
        unsigned RESERVED3 : 1; //!< [31] Reserved
    } B;
} hw_mmdc_mpwrdlhwst0_t;
#endif

/*
 * constants & macros for entire MMDC_MPWRDLHWST0 register
 */
#define HW_MMDC_MPWRDLHWST0_ADDR      (REGS_MMDC_BASE + 0x870)

#ifndef __LANGUAGE_ASM__
#define HW_MMDC_MPWRDLHWST0           (*(volatile hw_mmdc_mpwrdlhwst0_t *) HW_MMDC_MPWRDLHWST0_ADDR)
#define HW_MMDC_MPWRDLHWST0_RD()      (HW_MMDC_MPWRDLHWST0.U)
#endif

/*
 * constants & macros for individual MMDC_MPWRDLHWST0 bitfields
 */

/* --- Register HW_MMDC_MPWRDLHWST0, field HW_WR_DL_LOW0[6:0] (RO)
 *
 * Automatic (HW) write calibration result of the lower boundary of Byte0. This field holds the
 * automatic (HW) write calibration result of the lower boundary of Byte0.
 */

#define BP_MMDC_MPWRDLHWST0_HW_WR_DL_LOW0      (0)      //!< Bit position for MMDC_MPWRDLHWST0_HW_WR_DL_LOW0.
#define BM_MMDC_MPWRDLHWST0_HW_WR_DL_LOW0      (0x0000007f)  //!< Bit mask for MMDC_MPWRDLHWST0_HW_WR_DL_LOW0.

//! @brief Get value of MMDC_MPWRDLHWST0_HW_WR_DL_LOW0 from a register value.
#define BG_MMDC_MPWRDLHWST0_HW_WR_DL_LOW0(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_MMDC_MPWRDLHWST0_HW_WR_DL_LOW0) >> BP_MMDC_MPWRDLHWST0_HW_WR_DL_LOW0)

/* --- Register HW_MMDC_MPWRDLHWST0, field HW_WR_DL_UP0[14:8] (RO)
 *
 * Automatic (HW) write calibration result of the upper boundary of Byte0. This field holds the
 * automatic (HW) write calibration result of the upper boundary of Byte0.
 */

#define BP_MMDC_MPWRDLHWST0_HW_WR_DL_UP0      (8)      //!< Bit position for MMDC_MPWRDLHWST0_HW_WR_DL_UP0.
#define BM_MMDC_MPWRDLHWST0_HW_WR_DL_UP0      (0x00007f00)  //!< Bit mask for MMDC_MPWRDLHWST0_HW_WR_DL_UP0.

//! @brief Get value of MMDC_MPWRDLHWST0_HW_WR_DL_UP0 from a register value.
#define BG_MMDC_MPWRDLHWST0_HW_WR_DL_UP0(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_MMDC_MPWRDLHWST0_HW_WR_DL_UP0) >> BP_MMDC_MPWRDLHWST0_HW_WR_DL_UP0)

/* --- Register HW_MMDC_MPWRDLHWST0, field HW_WR_DL_LOW1[22:16] (RO)
 *
 * Automatic (HW) write calibration result of the lower boundary of Byte1. This field holds the
 * automatic (HW) write calibration result of the lower boundary of Byte1.
 */

#define BP_MMDC_MPWRDLHWST0_HW_WR_DL_LOW1      (16)      //!< Bit position for MMDC_MPWRDLHWST0_HW_WR_DL_LOW1.
#define BM_MMDC_MPWRDLHWST0_HW_WR_DL_LOW1      (0x007f0000)  //!< Bit mask for MMDC_MPWRDLHWST0_HW_WR_DL_LOW1.

//! @brief Get value of MMDC_MPWRDLHWST0_HW_WR_DL_LOW1 from a register value.
#define BG_MMDC_MPWRDLHWST0_HW_WR_DL_LOW1(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_MMDC_MPWRDLHWST0_HW_WR_DL_LOW1) >> BP_MMDC_MPWRDLHWST0_HW_WR_DL_LOW1)

/* --- Register HW_MMDC_MPWRDLHWST0, field HW_WR_DL_UP1[30:24] (RO)
 *
 * Aautomatic (HW) write utomatic (HW) write calibration result of the upper boundary of Byte1. This
 * field holds the automatic (HW) write calibration result of the upper boundary of Byte1.
 */

#define BP_MMDC_MPWRDLHWST0_HW_WR_DL_UP1      (24)      //!< Bit position for MMDC_MPWRDLHWST0_HW_WR_DL_UP1.
#define BM_MMDC_MPWRDLHWST0_HW_WR_DL_UP1      (0x7f000000)  //!< Bit mask for MMDC_MPWRDLHWST0_HW_WR_DL_UP1.

//! @brief Get value of MMDC_MPWRDLHWST0_HW_WR_DL_UP1 from a register value.
#define BG_MMDC_MPWRDLHWST0_HW_WR_DL_UP1(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_MMDC_MPWRDLHWST0_HW_WR_DL_UP1) >> BP_MMDC_MPWRDLHWST0_HW_WR_DL_UP1)

//-------------------------------------------------------------------------------------------
// HW_MMDC_MPWRDLHWST1 - MMDC PHY Write Delay HW Calibration Status Register 1
//-------------------------------------------------------------------------------------------

#ifndef __LANGUAGE_ASM__
/*!
 * @brief HW_MMDC_MPWRDLHWST1 - MMDC PHY Write Delay HW Calibration Status Register 1 (RO)
 *
 * Reset value: 0x00000000
 *
 * Supported Mode Of Operations:  For Channel 0: All  For Channel 1: DDR3_x64, LP2_2ch_x32
 */
typedef union _hw_mmdc_mpwrdlhwst1
{
    reg32_t U;
    struct _hw_mmdc_mpwrdlhwst1_bitfields
    {
        unsigned HW_WR_DL_LOW2 : 7; //!< [6:0] Automatic (HW) write calibration result of the lower boundary of Byte2.
        unsigned RESERVED0 : 1; //!< [7] Reserved
        unsigned HW_WR_DL_UP2 : 7; //!< [14:8] Automatic (HW) write calibration result of the upper boundary of Byte2.
        unsigned RESERVED1 : 1; //!< [15] Reserved
        unsigned HW_WR_DL_LOW3 : 7; //!< [22:16] Automatic (HW) write calibration result of the lower boundary of Byte3.
        unsigned RESERVED2 : 1; //!< [23] Reserved
        unsigned HW_WR_DL_UP3 : 7; //!< [30:24] Automatic (HW) write calibration result of the upper boundary of Byte3.
        unsigned RESERVED3 : 1; //!< [31] Reserved
    } B;
} hw_mmdc_mpwrdlhwst1_t;
#endif

/*
 * constants & macros for entire MMDC_MPWRDLHWST1 register
 */
#define HW_MMDC_MPWRDLHWST1_ADDR      (REGS_MMDC_BASE + 0x874)

#ifndef __LANGUAGE_ASM__
#define HW_MMDC_MPWRDLHWST1           (*(volatile hw_mmdc_mpwrdlhwst1_t *) HW_MMDC_MPWRDLHWST1_ADDR)
#define HW_MMDC_MPWRDLHWST1_RD()      (HW_MMDC_MPWRDLHWST1.U)
#endif

/*
 * constants & macros for individual MMDC_MPWRDLHWST1 bitfields
 */

/* --- Register HW_MMDC_MPWRDLHWST1, field HW_WR_DL_LOW2[6:0] (RO)
 *
 * Automatic (HW) write calibration result of the lower boundary of Byte2. This field holds the
 * automatic (HW) write calibration result of the lower boundary of Byte2.
 */

#define BP_MMDC_MPWRDLHWST1_HW_WR_DL_LOW2      (0)      //!< Bit position for MMDC_MPWRDLHWST1_HW_WR_DL_LOW2.
#define BM_MMDC_MPWRDLHWST1_HW_WR_DL_LOW2      (0x0000007f)  //!< Bit mask for MMDC_MPWRDLHWST1_HW_WR_DL_LOW2.

//! @brief Get value of MMDC_MPWRDLHWST1_HW_WR_DL_LOW2 from a register value.
#define BG_MMDC_MPWRDLHWST1_HW_WR_DL_LOW2(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_MMDC_MPWRDLHWST1_HW_WR_DL_LOW2) >> BP_MMDC_MPWRDLHWST1_HW_WR_DL_LOW2)

/* --- Register HW_MMDC_MPWRDLHWST1, field HW_WR_DL_UP2[14:8] (RO)
 *
 * Automatic (HW) write calibration result of the upper boundary of Byte2. This field holds the
 * automatic (HW) write calibration result of the upper boundary of Byte2.
 */

#define BP_MMDC_MPWRDLHWST1_HW_WR_DL_UP2      (8)      //!< Bit position for MMDC_MPWRDLHWST1_HW_WR_DL_UP2.
#define BM_MMDC_MPWRDLHWST1_HW_WR_DL_UP2      (0x00007f00)  //!< Bit mask for MMDC_MPWRDLHWST1_HW_WR_DL_UP2.

//! @brief Get value of MMDC_MPWRDLHWST1_HW_WR_DL_UP2 from a register value.
#define BG_MMDC_MPWRDLHWST1_HW_WR_DL_UP2(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_MMDC_MPWRDLHWST1_HW_WR_DL_UP2) >> BP_MMDC_MPWRDLHWST1_HW_WR_DL_UP2)

/* --- Register HW_MMDC_MPWRDLHWST1, field HW_WR_DL_LOW3[22:16] (RO)
 *
 * Automatic (HW) write calibration result of the lower boundary of Byte3. This field holds the
 * automatic (HW) write calibration result of the lower boundary of Byte3.
 */

#define BP_MMDC_MPWRDLHWST1_HW_WR_DL_LOW3      (16)      //!< Bit position for MMDC_MPWRDLHWST1_HW_WR_DL_LOW3.
#define BM_MMDC_MPWRDLHWST1_HW_WR_DL_LOW3      (0x007f0000)  //!< Bit mask for MMDC_MPWRDLHWST1_HW_WR_DL_LOW3.

//! @brief Get value of MMDC_MPWRDLHWST1_HW_WR_DL_LOW3 from a register value.
#define BG_MMDC_MPWRDLHWST1_HW_WR_DL_LOW3(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_MMDC_MPWRDLHWST1_HW_WR_DL_LOW3) >> BP_MMDC_MPWRDLHWST1_HW_WR_DL_LOW3)

/* --- Register HW_MMDC_MPWRDLHWST1, field HW_WR_DL_UP3[30:24] (RO)
 *
 * Automatic (HW) write calibration result of the upper boundary of Byte3. This field holds the
 * automatic (HW) write calibration result of the upper boundary of Byte3.
 */

#define BP_MMDC_MPWRDLHWST1_HW_WR_DL_UP3      (24)      //!< Bit position for MMDC_MPWRDLHWST1_HW_WR_DL_UP3.
#define BM_MMDC_MPWRDLHWST1_HW_WR_DL_UP3      (0x7f000000)  //!< Bit mask for MMDC_MPWRDLHWST1_HW_WR_DL_UP3.

//! @brief Get value of MMDC_MPWRDLHWST1_HW_WR_DL_UP3 from a register value.
#define BG_MMDC_MPWRDLHWST1_HW_WR_DL_UP3(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_MMDC_MPWRDLHWST1_HW_WR_DL_UP3) >> BP_MMDC_MPWRDLHWST1_HW_WR_DL_UP3)

//-------------------------------------------------------------------------------------------
// HW_MMDC_MPWLHWERR - MMDC PHY Write Leveling HW Error Register
//-------------------------------------------------------------------------------------------

#ifndef __LANGUAGE_ASM__
/*!
 * @brief HW_MMDC_MPWLHWERR - MMDC PHY Write Leveling HW Error Register (RW)
 *
 * Reset value: 0x00000000
 *
 * Supported Mode Of Operations:  For Channel 0: All  For Channel 1: DDR3_x64, LP2_2ch_x16,
 * LP2_2ch_x32
 */
typedef union _hw_mmdc_mpwlhwerr
{
    reg32_t U;
    struct _hw_mmdc_mpwlhwerr_bitfields
    {
        unsigned HW_WL0_DQ : 8; //!< [7:0] HW write-leveling calibration result of Byte0.
        unsigned HW_WL1_DQ : 8; //!< [15:8] HW write-leveling calibration result of Byte1.
        unsigned HW_WL2_DQ : 8; //!< [23:16] HW write-leveling calibration result of Byte2.
        unsigned HW_WL3_DQ : 8; //!< [31:24] HW write-leveling calibration result of Byte3.
    } B;
} hw_mmdc_mpwlhwerr_t;
#endif

/*
 * constants & macros for entire MMDC_MPWLHWERR register
 */
#define HW_MMDC_MPWLHWERR_ADDR      (REGS_MMDC_BASE + 0x878)

#ifndef __LANGUAGE_ASM__
#define HW_MMDC_MPWLHWERR           (*(volatile hw_mmdc_mpwlhwerr_t *) HW_MMDC_MPWLHWERR_ADDR)
#define HW_MMDC_MPWLHWERR_RD()      (HW_MMDC_MPWLHWERR.U)
#define HW_MMDC_MPWLHWERR_WR(v)     (HW_MMDC_MPWLHWERR.U = (v))
#define HW_MMDC_MPWLHWERR_SET(v)    (HW_MMDC_MPWLHWERR_WR(HW_MMDC_MPWLHWERR_RD() |  (v)))
#define HW_MMDC_MPWLHWERR_CLR(v)    (HW_MMDC_MPWLHWERR_WR(HW_MMDC_MPWLHWERR_RD() & ~(v)))
#define HW_MMDC_MPWLHWERR_TOG(v)    (HW_MMDC_MPWLHWERR_WR(HW_MMDC_MPWLHWERR_RD() ^  (v)))
#endif

/*
 * constants & macros for individual MMDC_MPWLHWERR bitfields
 */

/* --- Register HW_MMDC_MPWLHWERR, field HW_WL0_DQ[7:0] (RO)
 *
 * HW write-leveling calibration result of Byte0. This field holds the results for all the 8 write-
 * leveling steps of Byte0. i.e bit 0 holds the result of the write-leveling calibration of 0 delay,
 * bit 1holds the result of the write-leveling calibration of 1/8delay till bit 7 that holds the
 * result of the write-leveling calibration of 7/8 delay
 */

#define BP_MMDC_MPWLHWERR_HW_WL0_DQ      (0)      //!< Bit position for MMDC_MPWLHWERR_HW_WL0_DQ.
#define BM_MMDC_MPWLHWERR_HW_WL0_DQ      (0x000000ff)  //!< Bit mask for MMDC_MPWLHWERR_HW_WL0_DQ.

//! @brief Get value of MMDC_MPWLHWERR_HW_WL0_DQ from a register value.
#define BG_MMDC_MPWLHWERR_HW_WL0_DQ(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_MMDC_MPWLHWERR_HW_WL0_DQ) >> BP_MMDC_MPWLHWERR_HW_WL0_DQ)

/* --- Register HW_MMDC_MPWLHWERR, field HW_WL1_DQ[15:8] (RO)
 *
 * HW write-leveling calibration result of Byte1. This field holds the results for all the 8 write-
 * leveling steps of Byte1. i.e bit 0 holds the result of the write-leveling calibration of 0 delay,
 * bit 1holds the result of the write-leveling calibration of 1/8delay till bit 7 that holds the
 * result of the write-leveling calibration of 7/8 delay
 */

#define BP_MMDC_MPWLHWERR_HW_WL1_DQ      (8)      //!< Bit position for MMDC_MPWLHWERR_HW_WL1_DQ.
#define BM_MMDC_MPWLHWERR_HW_WL1_DQ      (0x0000ff00)  //!< Bit mask for MMDC_MPWLHWERR_HW_WL1_DQ.

//! @brief Get value of MMDC_MPWLHWERR_HW_WL1_DQ from a register value.
#define BG_MMDC_MPWLHWERR_HW_WL1_DQ(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_MMDC_MPWLHWERR_HW_WL1_DQ) >> BP_MMDC_MPWLHWERR_HW_WL1_DQ)

/* --- Register HW_MMDC_MPWLHWERR, field HW_WL2_DQ[23:16] (RO)
 *
 * HW write-leveling calibration result of Byte2. This field holds the results for all the 8 write-
 * leveling steps of Byte2. i.e bit 0 holds the result of the write-leveling calibration of 0 delay,
 * bit 1holds the result of the write-leveling calibration of 1/8delay till bit 7 that holds the
 * result of the write-leveling calibration of 7/8 delay
 */

#define BP_MMDC_MPWLHWERR_HW_WL2_DQ      (16)      //!< Bit position for MMDC_MPWLHWERR_HW_WL2_DQ.
#define BM_MMDC_MPWLHWERR_HW_WL2_DQ      (0x00ff0000)  //!< Bit mask for MMDC_MPWLHWERR_HW_WL2_DQ.

//! @brief Get value of MMDC_MPWLHWERR_HW_WL2_DQ from a register value.
#define BG_MMDC_MPWLHWERR_HW_WL2_DQ(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_MMDC_MPWLHWERR_HW_WL2_DQ) >> BP_MMDC_MPWLHWERR_HW_WL2_DQ)

/* --- Register HW_MMDC_MPWLHWERR, field HW_WL3_DQ[31:24] (RO)
 *
 * HW write-leveling calibration result of Byte3. This field holds the results for all the 8 write-
 * leveling steps of Byte3. i.e bit 0 holds the result of the write-leveling calibration of 0 delay,
 * bit 1holds the result of the write-leveling calibration of 1/8delay till bit 7 that holdsthe
 * result of the write-leveling calibration of 7/8 delay
 */

#define BP_MMDC_MPWLHWERR_HW_WL3_DQ      (24)      //!< Bit position for MMDC_MPWLHWERR_HW_WL3_DQ.
#define BM_MMDC_MPWLHWERR_HW_WL3_DQ      (0xff000000)  //!< Bit mask for MMDC_MPWLHWERR_HW_WL3_DQ.

//! @brief Get value of MMDC_MPWLHWERR_HW_WL3_DQ from a register value.
#define BG_MMDC_MPWLHWERR_HW_WL3_DQ(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_MMDC_MPWLHWERR_HW_WL3_DQ) >> BP_MMDC_MPWLHWERR_HW_WL3_DQ)

//-------------------------------------------------------------------------------------------
// HW_MMDC_MPDGHWST0 - MMDC PHY Read DQS Gating HW Status Register 0
//-------------------------------------------------------------------------------------------

#ifndef __LANGUAGE_ASM__
/*!
 * @brief HW_MMDC_MPDGHWST0 - MMDC PHY Read DQS Gating HW Status Register 0 (RO)
 *
 * Reset value: 0x00000000
 *
 * Supported Mode Of Operations:  For Channel 0: DDR3_x16, DDR3_x32, DDR3_x64  For Channel 1:
 * DDR3_x64
 */
typedef union _hw_mmdc_mpdghwst0
{
    reg32_t U;
    struct _hw_mmdc_mpdghwst0_bitfields
    {
        unsigned HW_DG_LOW0 : 11; //!< [10:0] HW DQS gating calibration result of the lower boundary of Byte0.
        unsigned RESERVED0 : 5; //!< [15:11] Reserved
        unsigned HW_DG_UP0 : 11; //!< [26:16] HW DQS gating calibration result of the upper boundary of Byte0.
        unsigned RESERVED1 : 5; //!< [31:27] Reserved
    } B;
} hw_mmdc_mpdghwst0_t;
#endif

/*
 * constants & macros for entire MMDC_MPDGHWST0 register
 */
#define HW_MMDC_MPDGHWST0_ADDR      (REGS_MMDC_BASE + 0x87c)

#ifndef __LANGUAGE_ASM__
#define HW_MMDC_MPDGHWST0           (*(volatile hw_mmdc_mpdghwst0_t *) HW_MMDC_MPDGHWST0_ADDR)
#define HW_MMDC_MPDGHWST0_RD()      (HW_MMDC_MPDGHWST0.U)
#endif

/*
 * constants & macros for individual MMDC_MPDGHWST0 bitfields
 */

/* --- Register HW_MMDC_MPDGHWST0, field HW_DG_LOW0[10:0] (RO)
 *
 * HW DQS gating calibration result of the lower boundary of Byte0. This field holds the HW DQS
 * gating calibration result of the lower boundary of Byte0.
 */

#define BP_MMDC_MPDGHWST0_HW_DG_LOW0      (0)      //!< Bit position for MMDC_MPDGHWST0_HW_DG_LOW0.
#define BM_MMDC_MPDGHWST0_HW_DG_LOW0      (0x000007ff)  //!< Bit mask for MMDC_MPDGHWST0_HW_DG_LOW0.

//! @brief Get value of MMDC_MPDGHWST0_HW_DG_LOW0 from a register value.
#define BG_MMDC_MPDGHWST0_HW_DG_LOW0(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_MMDC_MPDGHWST0_HW_DG_LOW0) >> BP_MMDC_MPDGHWST0_HW_DG_LOW0)

/* --- Register HW_MMDC_MPDGHWST0, field HW_DG_UP0[26:16] (RO)
 *
 * HW DQS gating calibration result of the upper boundary of Byte0. This field holds the HW DQS
 * gating calibration result of the upper boundary of Byte0.
 */

#define BP_MMDC_MPDGHWST0_HW_DG_UP0      (16)      //!< Bit position for MMDC_MPDGHWST0_HW_DG_UP0.
#define BM_MMDC_MPDGHWST0_HW_DG_UP0      (0x07ff0000)  //!< Bit mask for MMDC_MPDGHWST0_HW_DG_UP0.

//! @brief Get value of MMDC_MPDGHWST0_HW_DG_UP0 from a register value.
#define BG_MMDC_MPDGHWST0_HW_DG_UP0(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_MMDC_MPDGHWST0_HW_DG_UP0) >> BP_MMDC_MPDGHWST0_HW_DG_UP0)

//-------------------------------------------------------------------------------------------
// HW_MMDC_MPDGHWST1 - MMDC PHY Read DQS Gating HW Status Register 1
//-------------------------------------------------------------------------------------------

#ifndef __LANGUAGE_ASM__
/*!
 * @brief HW_MMDC_MPDGHWST1 - MMDC PHY Read DQS Gating HW Status Register 1 (RO)
 *
 * Reset value: 0x00000000
 *
 * Supported Mode Of Operations:  For Channel 0: DDR3_x16, DDR3_x32, DDR3_x64  For Channel 1:
 * DDR3_x64
 */
typedef union _hw_mmdc_mpdghwst1
{
    reg32_t U;
    struct _hw_mmdc_mpdghwst1_bitfields
    {
        unsigned HW_DG_LOW1 : 11; //!< [10:0] HW DQS gating calibration result of the lower boundary of Byte1.
        unsigned RESERVED0 : 5; //!< [15:11] Reserved
        unsigned HW_DG_UP1 : 11; //!< [26:16] HW DQS gating calibration result of the upper boundary of Byte1.
        unsigned RESERVED1 : 5; //!< [31:27] Reserved
    } B;
} hw_mmdc_mpdghwst1_t;
#endif

/*
 * constants & macros for entire MMDC_MPDGHWST1 register
 */
#define HW_MMDC_MPDGHWST1_ADDR      (REGS_MMDC_BASE + 0x880)

#ifndef __LANGUAGE_ASM__
#define HW_MMDC_MPDGHWST1           (*(volatile hw_mmdc_mpdghwst1_t *) HW_MMDC_MPDGHWST1_ADDR)
#define HW_MMDC_MPDGHWST1_RD()      (HW_MMDC_MPDGHWST1.U)
#endif

/*
 * constants & macros for individual MMDC_MPDGHWST1 bitfields
 */

/* --- Register HW_MMDC_MPDGHWST1, field HW_DG_LOW1[10:0] (RO)
 *
 * HW DQS gating calibration result of the lower boundary of Byte1. This field holds the HW DQS
 * gating calibration result of the lower boundary of Byte1.
 */

#define BP_MMDC_MPDGHWST1_HW_DG_LOW1      (0)      //!< Bit position for MMDC_MPDGHWST1_HW_DG_LOW1.
#define BM_MMDC_MPDGHWST1_HW_DG_LOW1      (0x000007ff)  //!< Bit mask for MMDC_MPDGHWST1_HW_DG_LOW1.

//! @brief Get value of MMDC_MPDGHWST1_HW_DG_LOW1 from a register value.
#define BG_MMDC_MPDGHWST1_HW_DG_LOW1(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_MMDC_MPDGHWST1_HW_DG_LOW1) >> BP_MMDC_MPDGHWST1_HW_DG_LOW1)

/* --- Register HW_MMDC_MPDGHWST1, field HW_DG_UP1[26:16] (RO)
 *
 * HW DQS gating calibration result of the upper boundary of Byte1. This field holds the HW DQS
 * gating calibration result of the upper boundary of Byte1.
 */

#define BP_MMDC_MPDGHWST1_HW_DG_UP1      (16)      //!< Bit position for MMDC_MPDGHWST1_HW_DG_UP1.
#define BM_MMDC_MPDGHWST1_HW_DG_UP1      (0x07ff0000)  //!< Bit mask for MMDC_MPDGHWST1_HW_DG_UP1.

//! @brief Get value of MMDC_MPDGHWST1_HW_DG_UP1 from a register value.
#define BG_MMDC_MPDGHWST1_HW_DG_UP1(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_MMDC_MPDGHWST1_HW_DG_UP1) >> BP_MMDC_MPDGHWST1_HW_DG_UP1)

//-------------------------------------------------------------------------------------------
// HW_MMDC_MPDGHWST2 - MMDC PHY Read DQS Gating HW Status Register 2
//-------------------------------------------------------------------------------------------

#ifndef __LANGUAGE_ASM__
/*!
 * @brief HW_MMDC_MPDGHWST2 - MMDC PHY Read DQS Gating HW Status Register 2 (RO)
 *
 * Reset value: 0x00000000
 *
 * Supported Mode Of Operations:  For Channel 0: DDR3_x16, DDR3_x32, DDR3_x64  For Channel 1:
 * DDR3_x64
 */
typedef union _hw_mmdc_mpdghwst2
{
    reg32_t U;
    struct _hw_mmdc_mpdghwst2_bitfields
    {
        unsigned HW_DG_LOW2 : 11; //!< [10:0] HW DQS gating calibration result of the lower boundary of Byte2.
        unsigned RESERVED0 : 5; //!< [15:11] Reserved
        unsigned HW_DG_UP2 : 11; //!< [26:16] HW DQS gating calibration result of the upper boundary of Byte2.
        unsigned RESERVED1 : 5; //!< [31:27] Reserved
    } B;
} hw_mmdc_mpdghwst2_t;
#endif

/*
 * constants & macros for entire MMDC_MPDGHWST2 register
 */
#define HW_MMDC_MPDGHWST2_ADDR      (REGS_MMDC_BASE + 0x884)

#ifndef __LANGUAGE_ASM__
#define HW_MMDC_MPDGHWST2           (*(volatile hw_mmdc_mpdghwst2_t *) HW_MMDC_MPDGHWST2_ADDR)
#define HW_MMDC_MPDGHWST2_RD()      (HW_MMDC_MPDGHWST2.U)
#endif

/*
 * constants & macros for individual MMDC_MPDGHWST2 bitfields
 */

/* --- Register HW_MMDC_MPDGHWST2, field HW_DG_LOW2[10:0] (RO)
 *
 * HW DQS gating calibration result of the lower boundary of Byte2. This field holds the HW DQS
 * gating calibration result of the lower boundary of Byte2.
 */

#define BP_MMDC_MPDGHWST2_HW_DG_LOW2      (0)      //!< Bit position for MMDC_MPDGHWST2_HW_DG_LOW2.
#define BM_MMDC_MPDGHWST2_HW_DG_LOW2      (0x000007ff)  //!< Bit mask for MMDC_MPDGHWST2_HW_DG_LOW2.

//! @brief Get value of MMDC_MPDGHWST2_HW_DG_LOW2 from a register value.
#define BG_MMDC_MPDGHWST2_HW_DG_LOW2(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_MMDC_MPDGHWST2_HW_DG_LOW2) >> BP_MMDC_MPDGHWST2_HW_DG_LOW2)

/* --- Register HW_MMDC_MPDGHWST2, field HW_DG_UP2[26:16] (RO)
 *
 * HW DQS gating calibration result of the upper boundary of Byte2. This field holds the HW DQS
 * gating calibration result of the upper boundary of Byte2.
 */

#define BP_MMDC_MPDGHWST2_HW_DG_UP2      (16)      //!< Bit position for MMDC_MPDGHWST2_HW_DG_UP2.
#define BM_MMDC_MPDGHWST2_HW_DG_UP2      (0x07ff0000)  //!< Bit mask for MMDC_MPDGHWST2_HW_DG_UP2.

//! @brief Get value of MMDC_MPDGHWST2_HW_DG_UP2 from a register value.
#define BG_MMDC_MPDGHWST2_HW_DG_UP2(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_MMDC_MPDGHWST2_HW_DG_UP2) >> BP_MMDC_MPDGHWST2_HW_DG_UP2)

//-------------------------------------------------------------------------------------------
// HW_MMDC_MPDGHWST3 - MMDC PHY Read DQS Gating HW Status Register 3
//-------------------------------------------------------------------------------------------

#ifndef __LANGUAGE_ASM__
/*!
 * @brief HW_MMDC_MPDGHWST3 - MMDC PHY Read DQS Gating HW Status Register 3 (RO)
 *
 * Reset value: 0x00000000
 *
 * Supported Mode Of Operations:  For Channel 0: DDR3_x16, DDR3_x32, DDR3_x64  For Channel 1:
 * DDR3_x64
 */
typedef union _hw_mmdc_mpdghwst3
{
    reg32_t U;
    struct _hw_mmdc_mpdghwst3_bitfields
    {
        unsigned HW_DG_LOW3 : 11; //!< [10:0] HW DQS gating calibration result of the lower boundary of Byte3.
        unsigned RESERVED0 : 5; //!< [15:11] Reserved
        unsigned HW_DG_UP3 : 11; //!< [26:16] HW DQS gating calibration result of the upper boundary of Byte3.
        unsigned RESERVED1 : 5; //!< [31:27] Reserved
    } B;
} hw_mmdc_mpdghwst3_t;
#endif

/*
 * constants & macros for entire MMDC_MPDGHWST3 register
 */
#define HW_MMDC_MPDGHWST3_ADDR      (REGS_MMDC_BASE + 0x888)

#ifndef __LANGUAGE_ASM__
#define HW_MMDC_MPDGHWST3           (*(volatile hw_mmdc_mpdghwst3_t *) HW_MMDC_MPDGHWST3_ADDR)
#define HW_MMDC_MPDGHWST3_RD()      (HW_MMDC_MPDGHWST3.U)
#endif

/*
 * constants & macros for individual MMDC_MPDGHWST3 bitfields
 */

/* --- Register HW_MMDC_MPDGHWST3, field HW_DG_LOW3[10:0] (RO)
 *
 * HW DQS gating calibration result of the lower boundary of Byte3. This field holds the HW DQS
 * gating calibration result of the lower boundary of Byte3.
 */

#define BP_MMDC_MPDGHWST3_HW_DG_LOW3      (0)      //!< Bit position for MMDC_MPDGHWST3_HW_DG_LOW3.
#define BM_MMDC_MPDGHWST3_HW_DG_LOW3      (0x000007ff)  //!< Bit mask for MMDC_MPDGHWST3_HW_DG_LOW3.

//! @brief Get value of MMDC_MPDGHWST3_HW_DG_LOW3 from a register value.
#define BG_MMDC_MPDGHWST3_HW_DG_LOW3(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_MMDC_MPDGHWST3_HW_DG_LOW3) >> BP_MMDC_MPDGHWST3_HW_DG_LOW3)

/* --- Register HW_MMDC_MPDGHWST3, field HW_DG_UP3[26:16] (RO)
 *
 * HW DQS gating calibration result of the upper boundary of Byte3. This field holds the HW DQS
 * gating calibration result of the upper boundary of Byte3.
 */

#define BP_MMDC_MPDGHWST3_HW_DG_UP3      (16)      //!< Bit position for MMDC_MPDGHWST3_HW_DG_UP3.
#define BM_MMDC_MPDGHWST3_HW_DG_UP3      (0x07ff0000)  //!< Bit mask for MMDC_MPDGHWST3_HW_DG_UP3.

//! @brief Get value of MMDC_MPDGHWST3_HW_DG_UP3 from a register value.
#define BG_MMDC_MPDGHWST3_HW_DG_UP3(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_MMDC_MPDGHWST3_HW_DG_UP3) >> BP_MMDC_MPDGHWST3_HW_DG_UP3)

//-------------------------------------------------------------------------------------------
// HW_MMDC_MPPDCMPR1 - MMDC PHY Pre-defined Compare Register 1
//-------------------------------------------------------------------------------------------

#ifndef __LANGUAGE_ASM__
/*!
 * @brief HW_MMDC_MPPDCMPR1 - MMDC PHY Pre-defined Compare Register 1 (RW)
 *
 * Reset value: 0x00000000
 *
 * This register holds the MMDC pre-defined compare value that will be used during automatic read,
 * read DQS gating and write calibration process. The compare value can be the MPR value (as defined
 * in the JEDEC) or can be programmed by the PDV1 and PDV2 fields. In case of DDR3 (BL=8) the MMDC
 * will duplicate PDV1,PDV2 and drive that data on Beat4-7 of the same byte  Supported Mode Of
 * Operations:  For Channel 0: All  For Channel 1: LP2_2ch_x16, LP2_2ch_x32
 */
typedef union _hw_mmdc_mppdcmpr1
{
    reg32_t U;
    struct _hw_mmdc_mppdcmpr1_bitfields
    {
        unsigned PDV1 : 16; //!< [15:0] MMDC Pre defined comapre value2.
        unsigned PDV2 : 16; //!< [31:16] MMDC Pre defined comapre value2.
    } B;
} hw_mmdc_mppdcmpr1_t;
#endif

/*
 * constants & macros for entire MMDC_MPPDCMPR1 register
 */
#define HW_MMDC_MPPDCMPR1_ADDR      (REGS_MMDC_BASE + 0x88c)

#ifndef __LANGUAGE_ASM__
#define HW_MMDC_MPPDCMPR1           (*(volatile hw_mmdc_mppdcmpr1_t *) HW_MMDC_MPPDCMPR1_ADDR)
#define HW_MMDC_MPPDCMPR1_RD()      (HW_MMDC_MPPDCMPR1.U)
#define HW_MMDC_MPPDCMPR1_WR(v)     (HW_MMDC_MPPDCMPR1.U = (v))
#define HW_MMDC_MPPDCMPR1_SET(v)    (HW_MMDC_MPPDCMPR1_WR(HW_MMDC_MPPDCMPR1_RD() |  (v)))
#define HW_MMDC_MPPDCMPR1_CLR(v)    (HW_MMDC_MPPDCMPR1_WR(HW_MMDC_MPPDCMPR1_RD() & ~(v)))
#define HW_MMDC_MPPDCMPR1_TOG(v)    (HW_MMDC_MPPDCMPR1_WR(HW_MMDC_MPPDCMPR1_RD() ^  (v)))
#endif

/*
 * constants & macros for individual MMDC_MPPDCMPR1 bitfields
 */

/* --- Register HW_MMDC_MPPDCMPR1, field PDV1[15:0] (RW)
 *
 * MMDC Pre defined comapre value2. This field holds the 2 LSB of the data that will be driven to
 * the DDR device during automatic read, read DQS gating and write calibrations in case MPR(DDR3)/
 * DQ calibration (LPDDR2) mode are disabled (MPR_CMP is disabled). Upon read access during the
 * calibration the MMDC will compare the read data with the data that is stored in this field.
 * Before issuing the read access, the MMDC will invert the value of this field and drive it to the
 * associated entry in the read comparison FIFO.
 */

#define BP_MMDC_MPPDCMPR1_PDV1      (0)      //!< Bit position for MMDC_MPPDCMPR1_PDV1.
#define BM_MMDC_MPPDCMPR1_PDV1      (0x0000ffff)  //!< Bit mask for MMDC_MPPDCMPR1_PDV1.

//! @brief Get value of MMDC_MPPDCMPR1_PDV1 from a register value.
#define BG_MMDC_MPPDCMPR1_PDV1(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_MMDC_MPPDCMPR1_PDV1) >> BP_MMDC_MPPDCMPR1_PDV1)

//! @brief Format value for bitfield MMDC_MPPDCMPR1_PDV1.
#define BF_MMDC_MPPDCMPR1_PDV1(v)   ((__REG_VALUE_TYPE((v), reg32_t) << BP_MMDC_MPPDCMPR1_PDV1) & BM_MMDC_MPPDCMPR1_PDV1)

#ifndef __LANGUAGE_ASM__
//! @brief Set the PDV1 field to a new value.
#define BW_MMDC_MPPDCMPR1_PDV1(v)   (HW_MMDC_MPPDCMPR1_WR((HW_MMDC_MPPDCMPR1_RD() & ~BM_MMDC_MPPDCMPR1_PDV1) | BF_MMDC_MPPDCMPR1_PDV1(v)))
#endif

/* --- Register HW_MMDC_MPPDCMPR1, field PDV2[31:16] (RW)
 *
 * MMDC Pre defined comapre value2. This field holds the 2 MSB of the data that will be driven to
 * the DDR device during automatic read, read DQS gating and write calibrations in case MPR(DDR3)/
 * DQ calibration (LPDDR2) mode are disabled (MPR_CMP is disabled). Upon read access during the
 * calibration the MMDC will compare the read data with the data that is stored in this field. Note
 * : Before issue the read access the MMDC will invert the value of this field and drive it to the
 * associate entry in the read comparison FIFO. For further information see Section 19.14.3.1.2,
 * "Calibration with pre-defined value , Section 19.14.4.1.2, "Calibration with pre-defined value
 * and Section 19.14.5.1, "HW (automatic) Write Calibraion
 */

#define BP_MMDC_MPPDCMPR1_PDV2      (16)      //!< Bit position for MMDC_MPPDCMPR1_PDV2.
#define BM_MMDC_MPPDCMPR1_PDV2      (0xffff0000)  //!< Bit mask for MMDC_MPPDCMPR1_PDV2.

//! @brief Get value of MMDC_MPPDCMPR1_PDV2 from a register value.
#define BG_MMDC_MPPDCMPR1_PDV2(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_MMDC_MPPDCMPR1_PDV2) >> BP_MMDC_MPPDCMPR1_PDV2)

//! @brief Format value for bitfield MMDC_MPPDCMPR1_PDV2.
#define BF_MMDC_MPPDCMPR1_PDV2(v)   ((__REG_VALUE_TYPE((v), reg32_t) << BP_MMDC_MPPDCMPR1_PDV2) & BM_MMDC_MPPDCMPR1_PDV2)

#ifndef __LANGUAGE_ASM__
//! @brief Set the PDV2 field to a new value.
#define BW_MMDC_MPPDCMPR1_PDV2(v)   (HW_MMDC_MPPDCMPR1_WR((HW_MMDC_MPPDCMPR1_RD() & ~BM_MMDC_MPPDCMPR1_PDV2) | BF_MMDC_MPPDCMPR1_PDV2(v)))
#endif

//-------------------------------------------------------------------------------------------
// HW_MMDC_MPPDCMPR2 - MMDC PHY Pre-defined Compare and CA delay-line Configuration Register
//-------------------------------------------------------------------------------------------

#ifndef __LANGUAGE_ASM__
/*!
 * @brief HW_MMDC_MPPDCMPR2 - MMDC PHY Pre-defined Compare and CA delay-line Configuration Register (RW)
 *
 * Reset value: 0x00400000
 *
 * Supported Mode Of Operations:  For Channel 0: All  For Channel 1: LP2_2ch_x16, LP2_2ch_x32
 */
typedef union _hw_mmdc_mppdcmpr2
{
    reg32_t U;
    struct _hw_mmdc_mppdcmpr2_bitfields
    {
        unsigned MPR_CMP : 1; //!< [0] MPR(DDR3)/DQ calibration (LPDDR2) comapre enable.
        unsigned MPR_FULL_CMP : 1; //!< [1] MPR(DDR3)/DQ calibration (LPDDR2) full compare enable.
        unsigned READ_LEVEL_PATTERN : 1; //!< [2] MPR(DDR3)/DQ calibration(LPDDR2) read compare pattern.
        unsigned RESERVED0 : 13; //!< [15:3] Reserved
        unsigned CA_DL_ABS_OFFSET : 7; //!< [22:16] Absolute CA (Command/Address of LPDDRR2) offset.
        unsigned RESERVED1 : 1; //!< [23] Reserved
        unsigned PHY_CA_DL_UNIT : 7; //!< [30:24] This field reflects the number of delay units that are actually used by CA (Command/Address of LPDDR2) delay-line
        unsigned RESERVED2 : 1; //!< [31] Reserved
    } B;
} hw_mmdc_mppdcmpr2_t;
#endif

/*
 * constants & macros for entire MMDC_MPPDCMPR2 register
 */
#define HW_MMDC_MPPDCMPR2_ADDR      (REGS_MMDC_BASE + 0x890)

#ifndef __LANGUAGE_ASM__
#define HW_MMDC_MPPDCMPR2           (*(volatile hw_mmdc_mppdcmpr2_t *) HW_MMDC_MPPDCMPR2_ADDR)
#define HW_MMDC_MPPDCMPR2_RD()      (HW_MMDC_MPPDCMPR2.U)
#define HW_MMDC_MPPDCMPR2_WR(v)     (HW_MMDC_MPPDCMPR2.U = (v))
#define HW_MMDC_MPPDCMPR2_SET(v)    (HW_MMDC_MPPDCMPR2_WR(HW_MMDC_MPPDCMPR2_RD() |  (v)))
#define HW_MMDC_MPPDCMPR2_CLR(v)    (HW_MMDC_MPPDCMPR2_WR(HW_MMDC_MPPDCMPR2_RD() & ~(v)))
#define HW_MMDC_MPPDCMPR2_TOG(v)    (HW_MMDC_MPPDCMPR2_WR(HW_MMDC_MPPDCMPR2_RD() ^  (v)))
#endif

/*
 * constants & macros for individual MMDC_MPPDCMPR2 bitfields
 */

/* --- Register HW_MMDC_MPPDCMPR2, field MPR_CMP[0] (RW)
 *
 * MPR(DDR3)/DQ calibration (LPDDR2) comapre enable. This bit indicates whether the MMDC will
 * compare the read data during automatic read and read DQS calibration processes to the pre-defined
 * patterns that are driven by the DDR deivce (READ_LEVEL_PATTERN as defined by JEDEC) or general
 * pre-defined value that are stored in PDV1 and PDV2. When this bit is disabled data is compared to
 * the data of the pre defined compare value field For further information see and .
 */

#define BP_MMDC_MPPDCMPR2_MPR_CMP      (0)      //!< Bit position for MMDC_MPPDCMPR2_MPR_CMP.
#define BM_MMDC_MPPDCMPR2_MPR_CMP      (0x00000001)  //!< Bit mask for MMDC_MPPDCMPR2_MPR_CMP.

//! @brief Get value of MMDC_MPPDCMPR2_MPR_CMP from a register value.
#define BG_MMDC_MPPDCMPR2_MPR_CMP(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_MMDC_MPPDCMPR2_MPR_CMP) >> BP_MMDC_MPPDCMPR2_MPR_CMP)

//! @brief Format value for bitfield MMDC_MPPDCMPR2_MPR_CMP.
#define BF_MMDC_MPPDCMPR2_MPR_CMP(v)   ((__REG_VALUE_TYPE((v), reg32_t) << BP_MMDC_MPPDCMPR2_MPR_CMP) & BM_MMDC_MPPDCMPR2_MPR_CMP)

#ifndef __LANGUAGE_ASM__
//! @brief Set the MPR_CMP field to a new value.
#define BW_MMDC_MPPDCMPR2_MPR_CMP(v)   (HW_MMDC_MPPDCMPR2_WR((HW_MMDC_MPPDCMPR2_RD() & ~BM_MMDC_MPPDCMPR2_MPR_CMP) | BF_MMDC_MPPDCMPR2_MPR_CMP(v)))
#endif

/* --- Register HW_MMDC_MPPDCMPR2, field MPR_FULL_CMP[1] (RW)
 *
 * MPR(DDR3)/DQ calibration (LPDDR2) full compare enable. In case MPR(DDR3)/DQ calibration(LPDDR2)
 * modes are used during the calibration process (MPR_CMP is asserted) then this field indicates
 * whether the MMDC will compare all the bits of the data that is read from the DDR device to the
 * MPR pre-defined pattern. When this bit is de-asserted only LSB of each byte is compared.
 */

#define BP_MMDC_MPPDCMPR2_MPR_FULL_CMP      (1)      //!< Bit position for MMDC_MPPDCMPR2_MPR_FULL_CMP.
#define BM_MMDC_MPPDCMPR2_MPR_FULL_CMP      (0x00000002)  //!< Bit mask for MMDC_MPPDCMPR2_MPR_FULL_CMP.

//! @brief Get value of MMDC_MPPDCMPR2_MPR_FULL_CMP from a register value.
#define BG_MMDC_MPPDCMPR2_MPR_FULL_CMP(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_MMDC_MPPDCMPR2_MPR_FULL_CMP) >> BP_MMDC_MPPDCMPR2_MPR_FULL_CMP)

//! @brief Format value for bitfield MMDC_MPPDCMPR2_MPR_FULL_CMP.
#define BF_MMDC_MPPDCMPR2_MPR_FULL_CMP(v)   ((__REG_VALUE_TYPE((v), reg32_t) << BP_MMDC_MPPDCMPR2_MPR_FULL_CMP) & BM_MMDC_MPPDCMPR2_MPR_FULL_CMP)

#ifndef __LANGUAGE_ASM__
//! @brief Set the MPR_FULL_CMP field to a new value.
#define BW_MMDC_MPPDCMPR2_MPR_FULL_CMP(v)   (HW_MMDC_MPPDCMPR2_WR((HW_MMDC_MPPDCMPR2_RD() & ~BM_MMDC_MPPDCMPR2_MPR_FULL_CMP) | BF_MMDC_MPPDCMPR2_MPR_FULL_CMP(v)))
#endif

/* --- Register HW_MMDC_MPPDCMPR2, field READ_LEVEL_PATTERN[2] (RW)
 *
 * MPR(DDR3)/DQ calibration(LPDDR2) read compare pattern. In case MPR(DDR3)/DQ calibration(LPDDR2)
 * modes are used during the calibration process (MPR_CMP is asserted) then this field indicates the
 * read pattern for the comparison.
 *
 * Values:
 * 0 - Compare with read pattern 1010
 * 1 - Compare with read pattern 0011 (Used only in LPDDR2 mode)
 */

#define BP_MMDC_MPPDCMPR2_READ_LEVEL_PATTERN      (2)      //!< Bit position for MMDC_MPPDCMPR2_READ_LEVEL_PATTERN.
#define BM_MMDC_MPPDCMPR2_READ_LEVEL_PATTERN      (0x00000004)  //!< Bit mask for MMDC_MPPDCMPR2_READ_LEVEL_PATTERN.

//! @brief Get value of MMDC_MPPDCMPR2_READ_LEVEL_PATTERN from a register value.
#define BG_MMDC_MPPDCMPR2_READ_LEVEL_PATTERN(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_MMDC_MPPDCMPR2_READ_LEVEL_PATTERN) >> BP_MMDC_MPPDCMPR2_READ_LEVEL_PATTERN)

//! @brief Format value for bitfield MMDC_MPPDCMPR2_READ_LEVEL_PATTERN.
#define BF_MMDC_MPPDCMPR2_READ_LEVEL_PATTERN(v)   ((__REG_VALUE_TYPE((v), reg32_t) << BP_MMDC_MPPDCMPR2_READ_LEVEL_PATTERN) & BM_MMDC_MPPDCMPR2_READ_LEVEL_PATTERN)

#ifndef __LANGUAGE_ASM__
//! @brief Set the READ_LEVEL_PATTERN field to a new value.
#define BW_MMDC_MPPDCMPR2_READ_LEVEL_PATTERN(v)   (HW_MMDC_MPPDCMPR2_WR((HW_MMDC_MPPDCMPR2_RD() & ~BM_MMDC_MPPDCMPR2_READ_LEVEL_PATTERN) | BF_MMDC_MPPDCMPR2_READ_LEVEL_PATTERN(v)))
#endif


/* --- Register HW_MMDC_MPPDCMPR2, field CA_DL_ABS_OFFSET[22:16] (RW)
 *
 * Absolute CA (Command/Address of LPDDRR2) offset. This field indicates the absolute delay between
 * CA (Command/Address) bus and the DDR clock (CK) with fractions of a clock period and up to half
 * cycle. The fraction is process and frequency independent. The delay of the delay-line would be
 * (CA_DL_ABS_OFFSET / 256) * fast_clk. So for the default value of 64 we get a quarter cycle delay.
 */

#define BP_MMDC_MPPDCMPR2_CA_DL_ABS_OFFSET      (16)      //!< Bit position for MMDC_MPPDCMPR2_CA_DL_ABS_OFFSET.
#define BM_MMDC_MPPDCMPR2_CA_DL_ABS_OFFSET      (0x007f0000)  //!< Bit mask for MMDC_MPPDCMPR2_CA_DL_ABS_OFFSET.

//! @brief Get value of MMDC_MPPDCMPR2_CA_DL_ABS_OFFSET from a register value.
#define BG_MMDC_MPPDCMPR2_CA_DL_ABS_OFFSET(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_MMDC_MPPDCMPR2_CA_DL_ABS_OFFSET) >> BP_MMDC_MPPDCMPR2_CA_DL_ABS_OFFSET)

//! @brief Format value for bitfield MMDC_MPPDCMPR2_CA_DL_ABS_OFFSET.
#define BF_MMDC_MPPDCMPR2_CA_DL_ABS_OFFSET(v)   ((__REG_VALUE_TYPE((v), reg32_t) << BP_MMDC_MPPDCMPR2_CA_DL_ABS_OFFSET) & BM_MMDC_MPPDCMPR2_CA_DL_ABS_OFFSET)

#ifndef __LANGUAGE_ASM__
//! @brief Set the CA_DL_ABS_OFFSET field to a new value.
#define BW_MMDC_MPPDCMPR2_CA_DL_ABS_OFFSET(v)   (HW_MMDC_MPPDCMPR2_WR((HW_MMDC_MPPDCMPR2_RD() & ~BM_MMDC_MPPDCMPR2_CA_DL_ABS_OFFSET) | BF_MMDC_MPPDCMPR2_CA_DL_ABS_OFFSET(v)))
#endif

/* --- Register HW_MMDC_MPPDCMPR2, field PHY_CA_DL_UNIT[30:24] (RO)
 *
 * This field reflects the number of delay units that are actually used by CA (Command/Address of
 * LPDDR2) delay-line
 */

#define BP_MMDC_MPPDCMPR2_PHY_CA_DL_UNIT      (24)      //!< Bit position for MMDC_MPPDCMPR2_PHY_CA_DL_UNIT.
#define BM_MMDC_MPPDCMPR2_PHY_CA_DL_UNIT      (0x7f000000)  //!< Bit mask for MMDC_MPPDCMPR2_PHY_CA_DL_UNIT.

//! @brief Get value of MMDC_MPPDCMPR2_PHY_CA_DL_UNIT from a register value.
#define BG_MMDC_MPPDCMPR2_PHY_CA_DL_UNIT(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_MMDC_MPPDCMPR2_PHY_CA_DL_UNIT) >> BP_MMDC_MPPDCMPR2_PHY_CA_DL_UNIT)

//-------------------------------------------------------------------------------------------
// HW_MMDC_MPSWDAR0 - MMDC PHY SW Dummy Access Register
//-------------------------------------------------------------------------------------------

#ifndef __LANGUAGE_ASM__
/*!
 * @brief HW_MMDC_MPSWDAR0 - MMDC PHY SW Dummy Access Register (RW)
 *
 * Reset value: 0x00000000
 *
 * Supported Mode Of Operations:  For Channel 0: All  For Channel 1: DDR3_x64, LP2_2ch_x16,
 * LP2_2ch_x32
 */
typedef union _hw_mmdc_mpswdar0
{
    reg32_t U;
    struct _hw_mmdc_mpswdar0_bitfields
    {
        unsigned SW_DUMMY_WR : 1; //!< [0] SW dummy write.
        unsigned SW_DUMMY_RD : 1; //!< [1] SW dummy read.
        unsigned SW_DUM_CMP0 : 1; //!< [2] SW dummy read byte0 compare results.
        unsigned SW_DUM_CMP1 : 1; //!< [3] SW dummy read byte1 compare results.
        unsigned SW_DUM_CMP2 : 1; //!< [4] SW dummy read byte2 compare results.
        unsigned SW_DUM_CMP3 : 1; //!< [5] SW dummy read byte3 compare results.
        unsigned RESERVED0 : 26; //!< [31:6] Reserved
    } B;
} hw_mmdc_mpswdar0_t;
#endif

/*
 * constants & macros for entire MMDC_MPSWDAR0 register
 */
#define HW_MMDC_MPSWDAR0_ADDR      (REGS_MMDC_BASE + 0x894)

#ifndef __LANGUAGE_ASM__
#define HW_MMDC_MPSWDAR0           (*(volatile hw_mmdc_mpswdar0_t *) HW_MMDC_MPSWDAR0_ADDR)
#define HW_MMDC_MPSWDAR0_RD()      (HW_MMDC_MPSWDAR0.U)
#define HW_MMDC_MPSWDAR0_WR(v)     (HW_MMDC_MPSWDAR0.U = (v))
#define HW_MMDC_MPSWDAR0_SET(v)    (HW_MMDC_MPSWDAR0_WR(HW_MMDC_MPSWDAR0_RD() |  (v)))
#define HW_MMDC_MPSWDAR0_CLR(v)    (HW_MMDC_MPSWDAR0_WR(HW_MMDC_MPSWDAR0_RD() & ~(v)))
#define HW_MMDC_MPSWDAR0_TOG(v)    (HW_MMDC_MPSWDAR0_WR(HW_MMDC_MPSWDAR0_RD() ^  (v)))
#endif

/*
 * constants & macros for individual MMDC_MPSWDAR0 bitfields
 */

/* --- Register HW_MMDC_MPSWDAR0, field SW_DUMMY_WR[0] (RW)
 *
 * SW dummy write. When this bit is asserted the MMDC will generate internally write access without
 * intervention of the system toward bank 0, row 0, column 0, while the data is driven from
 * MPPDCMPR1[PDV1] and MPPDCMPR1[PDV2]. The bit is de-asserted automatically upon completion of the
 * access.
 */

#define BP_MMDC_MPSWDAR0_SW_DUMMY_WR      (0)      //!< Bit position for MMDC_MPSWDAR0_SW_DUMMY_WR.
#define BM_MMDC_MPSWDAR0_SW_DUMMY_WR      (0x00000001)  //!< Bit mask for MMDC_MPSWDAR0_SW_DUMMY_WR.

//! @brief Get value of MMDC_MPSWDAR0_SW_DUMMY_WR from a register value.
#define BG_MMDC_MPSWDAR0_SW_DUMMY_WR(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_MMDC_MPSWDAR0_SW_DUMMY_WR) >> BP_MMDC_MPSWDAR0_SW_DUMMY_WR)

//! @brief Format value for bitfield MMDC_MPSWDAR0_SW_DUMMY_WR.
#define BF_MMDC_MPSWDAR0_SW_DUMMY_WR(v)   ((__REG_VALUE_TYPE((v), reg32_t) << BP_MMDC_MPSWDAR0_SW_DUMMY_WR) & BM_MMDC_MPSWDAR0_SW_DUMMY_WR)

#ifndef __LANGUAGE_ASM__
//! @brief Set the SW_DUMMY_WR field to a new value.
#define BW_MMDC_MPSWDAR0_SW_DUMMY_WR(v)   (HW_MMDC_MPSWDAR0_WR((HW_MMDC_MPSWDAR0_RD() & ~BM_MMDC_MPSWDAR0_SW_DUMMY_WR) | BF_MMDC_MPSWDAR0_SW_DUMMY_WR(v)))
#endif

/* --- Register HW_MMDC_MPSWDAR0, field SW_DUMMY_RD[1] (RW)
 *
 * SW dummy read. When this bit is asserted the MMDC will generate internally read access without
 * intervention of the system toward bank 0, row 0, column 0. If MPR_CMP = 1then the read data will
 * be compared to MPPDCMPR2[READ_LEVEL_PATTERN] . If MPR_CMP =0 then the read data will be compared
 * to MPPDCMPR1[PDV1], MPPDCMPR1[PDV2]. Upon completion of the access this bit is de-asserted
 * automatically and the read data and comparison results are valid at MPSWDAR0[SW_DUM_CMP#] and
 * MPSWDRDR0-MPSWDRDR7 respectively.
 */

#define BP_MMDC_MPSWDAR0_SW_DUMMY_RD      (1)      //!< Bit position for MMDC_MPSWDAR0_SW_DUMMY_RD.
#define BM_MMDC_MPSWDAR0_SW_DUMMY_RD      (0x00000002)  //!< Bit mask for MMDC_MPSWDAR0_SW_DUMMY_RD.

//! @brief Get value of MMDC_MPSWDAR0_SW_DUMMY_RD from a register value.
#define BG_MMDC_MPSWDAR0_SW_DUMMY_RD(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_MMDC_MPSWDAR0_SW_DUMMY_RD) >> BP_MMDC_MPSWDAR0_SW_DUMMY_RD)

//! @brief Format value for bitfield MMDC_MPSWDAR0_SW_DUMMY_RD.
#define BF_MMDC_MPSWDAR0_SW_DUMMY_RD(v)   ((__REG_VALUE_TYPE((v), reg32_t) << BP_MMDC_MPSWDAR0_SW_DUMMY_RD) & BM_MMDC_MPSWDAR0_SW_DUMMY_RD)

#ifndef __LANGUAGE_ASM__
//! @brief Set the SW_DUMMY_RD field to a new value.
#define BW_MMDC_MPSWDAR0_SW_DUMMY_RD(v)   (HW_MMDC_MPSWDAR0_WR((HW_MMDC_MPSWDAR0_RD() & ~BM_MMDC_MPSWDAR0_SW_DUMMY_RD) | BF_MMDC_MPSWDAR0_SW_DUMMY_RD(v)))
#endif

/* --- Register HW_MMDC_MPSWDAR0, field SW_DUM_CMP0[2] (RO)
 *
 * SW dummy read byte0 compare results. This bit indicates the result of the read data comparison of
 * Byte0 at the completion of SW_DUMMY_RD. This bit is valid only when SW_DUMMY_RD is de-assrted.
 *
 * Values:
 * 0 - Dummy read fail
 * 1 - Dummy read pass
 */

#define BP_MMDC_MPSWDAR0_SW_DUM_CMP0      (2)      //!< Bit position for MMDC_MPSWDAR0_SW_DUM_CMP0.
#define BM_MMDC_MPSWDAR0_SW_DUM_CMP0      (0x00000004)  //!< Bit mask for MMDC_MPSWDAR0_SW_DUM_CMP0.

//! @brief Get value of MMDC_MPSWDAR0_SW_DUM_CMP0 from a register value.
#define BG_MMDC_MPSWDAR0_SW_DUM_CMP0(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_MMDC_MPSWDAR0_SW_DUM_CMP0) >> BP_MMDC_MPSWDAR0_SW_DUM_CMP0)


/* --- Register HW_MMDC_MPSWDAR0, field SW_DUM_CMP1[3] (RO)
 *
 * SW dummy read byte1 compare results. This bit indicates the result of the read data comparison of
 * Byte1 at the completion of SW_DUMMY_RD. This bit is valid only when SW_DUMMY_RD is de-assrted.
 *
 * Values:
 * 0 - Dummy read fail
 * 1 - Dummy read pass
 */

#define BP_MMDC_MPSWDAR0_SW_DUM_CMP1      (3)      //!< Bit position for MMDC_MPSWDAR0_SW_DUM_CMP1.
#define BM_MMDC_MPSWDAR0_SW_DUM_CMP1      (0x00000008)  //!< Bit mask for MMDC_MPSWDAR0_SW_DUM_CMP1.

//! @brief Get value of MMDC_MPSWDAR0_SW_DUM_CMP1 from a register value.
#define BG_MMDC_MPSWDAR0_SW_DUM_CMP1(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_MMDC_MPSWDAR0_SW_DUM_CMP1) >> BP_MMDC_MPSWDAR0_SW_DUM_CMP1)


/* --- Register HW_MMDC_MPSWDAR0, field SW_DUM_CMP2[4] (RO)
 *
 * SW dummy read byte2 compare results. This bit indicates the result of the read data comparison of
 * Byte2 at the completion of SW_DUMMY_RD. This bit is valid only when SW_DUMMY_RD is de-assrted.
 *
 * Values:
 * 0 - Dummy read fail
 * 1 - Dummy read pass
 */

#define BP_MMDC_MPSWDAR0_SW_DUM_CMP2      (4)      //!< Bit position for MMDC_MPSWDAR0_SW_DUM_CMP2.
#define BM_MMDC_MPSWDAR0_SW_DUM_CMP2      (0x00000010)  //!< Bit mask for MMDC_MPSWDAR0_SW_DUM_CMP2.

//! @brief Get value of MMDC_MPSWDAR0_SW_DUM_CMP2 from a register value.
#define BG_MMDC_MPSWDAR0_SW_DUM_CMP2(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_MMDC_MPSWDAR0_SW_DUM_CMP2) >> BP_MMDC_MPSWDAR0_SW_DUM_CMP2)


/* --- Register HW_MMDC_MPSWDAR0, field SW_DUM_CMP3[5] (RO)
 *
 * SW dummy read byte3 compare results. This bit indicates the result of the read data comparison of
 * Byte3 at the completion of SW_DUMMY_RD. This bit is valid only when SW_DUMMY_RD is de-assrted.
 *
 * Values:
 * 0 - Dummy read fail
 * 1 - Dummy read pass
 */

#define BP_MMDC_MPSWDAR0_SW_DUM_CMP3      (5)      //!< Bit position for MMDC_MPSWDAR0_SW_DUM_CMP3.
#define BM_MMDC_MPSWDAR0_SW_DUM_CMP3      (0x00000020)  //!< Bit mask for MMDC_MPSWDAR0_SW_DUM_CMP3.

//! @brief Get value of MMDC_MPSWDAR0_SW_DUM_CMP3 from a register value.
#define BG_MMDC_MPSWDAR0_SW_DUM_CMP3(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_MMDC_MPSWDAR0_SW_DUM_CMP3) >> BP_MMDC_MPSWDAR0_SW_DUM_CMP3)


//-------------------------------------------------------------------------------------------
// HW_MMDC_MPSWDRDR0 - MMDC PHY SW Dummy Read Data Register 0
//-------------------------------------------------------------------------------------------

#ifndef __LANGUAGE_ASM__
/*!
 * @brief HW_MMDC_MPSWDRDR0 - MMDC PHY SW Dummy Read Data Register 0 (RO)
 *
 * Reset value: 0xffffffff
 *
 * Supported Mode Of Operations:  For Channel 0: All  For Channel 1: DDR3_x64, LP2_2ch_x16,
 * LP2_2ch_x32
 */
typedef union _hw_mmdc_mpswdrdr0
{
    reg32_t U;
    struct _hw_mmdc_mpswdrdr0_bitfields
    {
        unsigned DUM_RD0 : 32; //!< [31:0] Dummy read data0.
    } B;
} hw_mmdc_mpswdrdr0_t;
#endif

/*
 * constants & macros for entire MMDC_MPSWDRDR0 register
 */
#define HW_MMDC_MPSWDRDR0_ADDR      (REGS_MMDC_BASE + 0x898)

#ifndef __LANGUAGE_ASM__
#define HW_MMDC_MPSWDRDR0           (*(volatile hw_mmdc_mpswdrdr0_t *) HW_MMDC_MPSWDRDR0_ADDR)
#define HW_MMDC_MPSWDRDR0_RD()      (HW_MMDC_MPSWDRDR0.U)
#endif

/*
 * constants & macros for individual MMDC_MPSWDRDR0 bitfields
 */

/* --- Register HW_MMDC_MPSWDRDR0, field DUM_RD0[31:0] (RO)
 *
 * Dummy read data0. This field holds the first data that is read from the DDR during SW dummy read
 * access (i.e when SW_DUMMY_RD = 1). This field is valid only when SW_DUMMY_RD is de-assrted
 */

#define BP_MMDC_MPSWDRDR0_DUM_RD0      (0)      //!< Bit position for MMDC_MPSWDRDR0_DUM_RD0.
#define BM_MMDC_MPSWDRDR0_DUM_RD0      (0xffffffff)  //!< Bit mask for MMDC_MPSWDRDR0_DUM_RD0.

//! @brief Get value of MMDC_MPSWDRDR0_DUM_RD0 from a register value.
#define BG_MMDC_MPSWDRDR0_DUM_RD0(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_MMDC_MPSWDRDR0_DUM_RD0) >> BP_MMDC_MPSWDRDR0_DUM_RD0)

//-------------------------------------------------------------------------------------------
// HW_MMDC_MPSWDRDR1 - MMDC PHY SW Dummy Read Data Register 1
//-------------------------------------------------------------------------------------------

#ifndef __LANGUAGE_ASM__
/*!
 * @brief HW_MMDC_MPSWDRDR1 - MMDC PHY SW Dummy Read Data Register 1 (RO)
 *
 * Reset value: 0xffffffff
 *
 * Supported Mode Of Operations:  For Channel 0: All  For Channel 1: DDR3_x64, LP2_2ch_x16,
 * LP2_2ch_x32
 */
typedef union _hw_mmdc_mpswdrdr1
{
    reg32_t U;
    struct _hw_mmdc_mpswdrdr1_bitfields
    {
        unsigned DUM_RD1 : 32; //!< [31:0] Dummy read data1.
    } B;
} hw_mmdc_mpswdrdr1_t;
#endif

/*
 * constants & macros for entire MMDC_MPSWDRDR1 register
 */
#define HW_MMDC_MPSWDRDR1_ADDR      (REGS_MMDC_BASE + 0x89c)

#ifndef __LANGUAGE_ASM__
#define HW_MMDC_MPSWDRDR1           (*(volatile hw_mmdc_mpswdrdr1_t *) HW_MMDC_MPSWDRDR1_ADDR)
#define HW_MMDC_MPSWDRDR1_RD()      (HW_MMDC_MPSWDRDR1.U)
#endif

/*
 * constants & macros for individual MMDC_MPSWDRDR1 bitfields
 */

/* --- Register HW_MMDC_MPSWDRDR1, field DUM_RD1[31:0] (RO)
 *
 * Dummy read data1. This field holds the second data that is read from the DDR during SW dummy read
 * access (i.e when SW_DUMMY_RD = 1). This field is valid only when SW_DUMMY_RD is de-assrted
 */

#define BP_MMDC_MPSWDRDR1_DUM_RD1      (0)      //!< Bit position for MMDC_MPSWDRDR1_DUM_RD1.
#define BM_MMDC_MPSWDRDR1_DUM_RD1      (0xffffffff)  //!< Bit mask for MMDC_MPSWDRDR1_DUM_RD1.

//! @brief Get value of MMDC_MPSWDRDR1_DUM_RD1 from a register value.
#define BG_MMDC_MPSWDRDR1_DUM_RD1(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_MMDC_MPSWDRDR1_DUM_RD1) >> BP_MMDC_MPSWDRDR1_DUM_RD1)

//-------------------------------------------------------------------------------------------
// HW_MMDC_MPSWDRDR2 - MMDC PHY SW Dummy Read Data Register 2
//-------------------------------------------------------------------------------------------

#ifndef __LANGUAGE_ASM__
/*!
 * @brief HW_MMDC_MPSWDRDR2 - MMDC PHY SW Dummy Read Data Register 2 (RO)
 *
 * Reset value: 0xffffffff
 *
 * Supported Mode Of Operations:  For Channel 0: All  For Channel 1: DDR3_x64, LP2_2ch_x16,
 * LP2_2ch_x32
 */
typedef union _hw_mmdc_mpswdrdr2
{
    reg32_t U;
    struct _hw_mmdc_mpswdrdr2_bitfields
    {
        unsigned DUM_RD2 : 32; //!< [31:0] Dummy read data2.
    } B;
} hw_mmdc_mpswdrdr2_t;
#endif

/*
 * constants & macros for entire MMDC_MPSWDRDR2 register
 */
#define HW_MMDC_MPSWDRDR2_ADDR      (REGS_MMDC_BASE + 0x8a0)

#ifndef __LANGUAGE_ASM__
#define HW_MMDC_MPSWDRDR2           (*(volatile hw_mmdc_mpswdrdr2_t *) HW_MMDC_MPSWDRDR2_ADDR)
#define HW_MMDC_MPSWDRDR2_RD()      (HW_MMDC_MPSWDRDR2.U)
#endif

/*
 * constants & macros for individual MMDC_MPSWDRDR2 bitfields
 */

/* --- Register HW_MMDC_MPSWDRDR2, field DUM_RD2[31:0] (RO)
 *
 * Dummy read data2. This field holds the third data that is read from the DDR during SW dummy read
 * access (i.e when SW_DUMMY_RD = 1). This field is valid only when SW_DUMMY_RD is de-assrted.
 */

#define BP_MMDC_MPSWDRDR2_DUM_RD2      (0)      //!< Bit position for MMDC_MPSWDRDR2_DUM_RD2.
#define BM_MMDC_MPSWDRDR2_DUM_RD2      (0xffffffff)  //!< Bit mask for MMDC_MPSWDRDR2_DUM_RD2.

//! @brief Get value of MMDC_MPSWDRDR2_DUM_RD2 from a register value.
#define BG_MMDC_MPSWDRDR2_DUM_RD2(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_MMDC_MPSWDRDR2_DUM_RD2) >> BP_MMDC_MPSWDRDR2_DUM_RD2)

//-------------------------------------------------------------------------------------------
// HW_MMDC_MPSWDRDR3 - MMDC PHY SW Dummy Read Data Register 3
//-------------------------------------------------------------------------------------------

#ifndef __LANGUAGE_ASM__
/*!
 * @brief HW_MMDC_MPSWDRDR3 - MMDC PHY SW Dummy Read Data Register 3 (RO)
 *
 * Reset value: 0xffffffff
 *
 * Supported Mode Of Operations:  For Channel 0: All  For Channel 1: DDR3_x64, LP2_2ch_x16,
 * LP2_2ch_x32
 */
typedef union _hw_mmdc_mpswdrdr3
{
    reg32_t U;
    struct _hw_mmdc_mpswdrdr3_bitfields
    {
        unsigned DUM_RD3 : 32; //!< [31:0] Dummy read data3.
    } B;
} hw_mmdc_mpswdrdr3_t;
#endif

/*
 * constants & macros for entire MMDC_MPSWDRDR3 register
 */
#define HW_MMDC_MPSWDRDR3_ADDR      (REGS_MMDC_BASE + 0x8a4)

#ifndef __LANGUAGE_ASM__
#define HW_MMDC_MPSWDRDR3           (*(volatile hw_mmdc_mpswdrdr3_t *) HW_MMDC_MPSWDRDR3_ADDR)
#define HW_MMDC_MPSWDRDR3_RD()      (HW_MMDC_MPSWDRDR3.U)
#endif

/*
 * constants & macros for individual MMDC_MPSWDRDR3 bitfields
 */

/* --- Register HW_MMDC_MPSWDRDR3, field DUM_RD3[31:0] (RO)
 *
 * Dummy read data3. This field holds the forth data that is read from the DDR during SW dummy read
 * access (i.e when SW_DUMMY_RD = 1). This field is valid only when SW_DUMMY_RD is de-assrted.
 */

#define BP_MMDC_MPSWDRDR3_DUM_RD3      (0)      //!< Bit position for MMDC_MPSWDRDR3_DUM_RD3.
#define BM_MMDC_MPSWDRDR3_DUM_RD3      (0xffffffff)  //!< Bit mask for MMDC_MPSWDRDR3_DUM_RD3.

//! @brief Get value of MMDC_MPSWDRDR3_DUM_RD3 from a register value.
#define BG_MMDC_MPSWDRDR3_DUM_RD3(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_MMDC_MPSWDRDR3_DUM_RD3) >> BP_MMDC_MPSWDRDR3_DUM_RD3)

//-------------------------------------------------------------------------------------------
// HW_MMDC_MPSWDRDR4 - MMDC PHY SW Dummy Read Data Register 4
//-------------------------------------------------------------------------------------------

#ifndef __LANGUAGE_ASM__
/*!
 * @brief HW_MMDC_MPSWDRDR4 - MMDC PHY SW Dummy Read Data Register 4 (RO)
 *
 * Reset value: 0xffffffff
 *
 * Supported Mode Of Operations:  For Channel 0: All  For Channel 1: DDR3_x64, LP2_2ch_x16,
 * LP2_2ch_x32
 */
typedef union _hw_mmdc_mpswdrdr4
{
    reg32_t U;
    struct _hw_mmdc_mpswdrdr4_bitfields
    {
        unsigned DUM_RD4 : 32; //!< [31:0] Dummy read data4.
    } B;
} hw_mmdc_mpswdrdr4_t;
#endif

/*
 * constants & macros for entire MMDC_MPSWDRDR4 register
 */
#define HW_MMDC_MPSWDRDR4_ADDR      (REGS_MMDC_BASE + 0x8a8)

#ifndef __LANGUAGE_ASM__
#define HW_MMDC_MPSWDRDR4           (*(volatile hw_mmdc_mpswdrdr4_t *) HW_MMDC_MPSWDRDR4_ADDR)
#define HW_MMDC_MPSWDRDR4_RD()      (HW_MMDC_MPSWDRDR4.U)
#endif

/*
 * constants & macros for individual MMDC_MPSWDRDR4 bitfields
 */

/* --- Register HW_MMDC_MPSWDRDR4, field DUM_RD4[31:0] (RO)
 *
 * Dummy read data4. This field holds the fifth data (only in case of burst length 8 (BL =1 )) that
 * is read from the DDR during SW dummy read access (i.e when SW_DUMMY_RD = 1). This field is valid
 * only when SW_DUMMY_RD is de-assrted.
 */

#define BP_MMDC_MPSWDRDR4_DUM_RD4      (0)      //!< Bit position for MMDC_MPSWDRDR4_DUM_RD4.
#define BM_MMDC_MPSWDRDR4_DUM_RD4      (0xffffffff)  //!< Bit mask for MMDC_MPSWDRDR4_DUM_RD4.

//! @brief Get value of MMDC_MPSWDRDR4_DUM_RD4 from a register value.
#define BG_MMDC_MPSWDRDR4_DUM_RD4(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_MMDC_MPSWDRDR4_DUM_RD4) >> BP_MMDC_MPSWDRDR4_DUM_RD4)

//-------------------------------------------------------------------------------------------
// HW_MMDC_MPSWDRDR5 - MMDC PHY SW Dummy Read Data Register 5
//-------------------------------------------------------------------------------------------

#ifndef __LANGUAGE_ASM__
/*!
 * @brief HW_MMDC_MPSWDRDR5 - MMDC PHY SW Dummy Read Data Register 5 (RO)
 *
 * Reset value: 0xffffffff
 *
 * Supported Mode Of Operations:  For Channel 0: All  For Channel 1: DDR3_x64, LP2_2ch_x16,
 * LP2_2ch_x32
 */
typedef union _hw_mmdc_mpswdrdr5
{
    reg32_t U;
    struct _hw_mmdc_mpswdrdr5_bitfields
    {
        unsigned DUM_RD5 : 32; //!< [31:0] Dummy read data5.
    } B;
} hw_mmdc_mpswdrdr5_t;
#endif

/*
 * constants & macros for entire MMDC_MPSWDRDR5 register
 */
#define HW_MMDC_MPSWDRDR5_ADDR      (REGS_MMDC_BASE + 0x8ac)

#ifndef __LANGUAGE_ASM__
#define HW_MMDC_MPSWDRDR5           (*(volatile hw_mmdc_mpswdrdr5_t *) HW_MMDC_MPSWDRDR5_ADDR)
#define HW_MMDC_MPSWDRDR5_RD()      (HW_MMDC_MPSWDRDR5.U)
#endif

/*
 * constants & macros for individual MMDC_MPSWDRDR5 bitfields
 */

/* --- Register HW_MMDC_MPSWDRDR5, field DUM_RD5[31:0] (RO)
 *
 * Dummy read data5. This field holds the sixth data (only in case of burst length 8 (BL =1 )) that
 * is read from the DDR during SW dummy read access (i.e when SW_DUMMY_RD = 1). This field is valid
 * only when SW_DUMMY_RD is de-assrted.
 */

#define BP_MMDC_MPSWDRDR5_DUM_RD5      (0)      //!< Bit position for MMDC_MPSWDRDR5_DUM_RD5.
#define BM_MMDC_MPSWDRDR5_DUM_RD5      (0xffffffff)  //!< Bit mask for MMDC_MPSWDRDR5_DUM_RD5.

//! @brief Get value of MMDC_MPSWDRDR5_DUM_RD5 from a register value.
#define BG_MMDC_MPSWDRDR5_DUM_RD5(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_MMDC_MPSWDRDR5_DUM_RD5) >> BP_MMDC_MPSWDRDR5_DUM_RD5)

//-------------------------------------------------------------------------------------------
// HW_MMDC_MPSWDRDR6 - MMDC PHY SW Dummy Read Data Register 6
//-------------------------------------------------------------------------------------------

#ifndef __LANGUAGE_ASM__
/*!
 * @brief HW_MMDC_MPSWDRDR6 - MMDC PHY SW Dummy Read Data Register 6 (RO)
 *
 * Reset value: 0xffffffff
 *
 * Supported Mode Of Operations:  For Channel 0: All  For Channel 1: DDR3_x64, LP2_2ch_x16,
 * LP2_2ch_x32
 */
typedef union _hw_mmdc_mpswdrdr6
{
    reg32_t U;
    struct _hw_mmdc_mpswdrdr6_bitfields
    {
        unsigned DUM_RD6 : 32; //!< [31:0] Dummy read data6.
    } B;
} hw_mmdc_mpswdrdr6_t;
#endif

/*
 * constants & macros for entire MMDC_MPSWDRDR6 register
 */
#define HW_MMDC_MPSWDRDR6_ADDR      (REGS_MMDC_BASE + 0x8b0)

#ifndef __LANGUAGE_ASM__
#define HW_MMDC_MPSWDRDR6           (*(volatile hw_mmdc_mpswdrdr6_t *) HW_MMDC_MPSWDRDR6_ADDR)
#define HW_MMDC_MPSWDRDR6_RD()      (HW_MMDC_MPSWDRDR6.U)
#endif

/*
 * constants & macros for individual MMDC_MPSWDRDR6 bitfields
 */

/* --- Register HW_MMDC_MPSWDRDR6, field DUM_RD6[31:0] (RO)
 *
 * Dummy read data6. This field holds the seventh data (only in case of burst length 8 (BL =1 ))
 * that is read from the DDR during SW dummy read access (i.e when SW_DUMMY_RD = 1). This field is
 * valid only when SW_DUMMY_RD is de-assrted.
 */

#define BP_MMDC_MPSWDRDR6_DUM_RD6      (0)      //!< Bit position for MMDC_MPSWDRDR6_DUM_RD6.
#define BM_MMDC_MPSWDRDR6_DUM_RD6      (0xffffffff)  //!< Bit mask for MMDC_MPSWDRDR6_DUM_RD6.

//! @brief Get value of MMDC_MPSWDRDR6_DUM_RD6 from a register value.
#define BG_MMDC_MPSWDRDR6_DUM_RD6(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_MMDC_MPSWDRDR6_DUM_RD6) >> BP_MMDC_MPSWDRDR6_DUM_RD6)

//-------------------------------------------------------------------------------------------
// HW_MMDC_MPSWDRDR7 - MMDC PHY SW Dummy Read Data Register 7
//-------------------------------------------------------------------------------------------

#ifndef __LANGUAGE_ASM__
/*!
 * @brief HW_MMDC_MPSWDRDR7 - MMDC PHY SW Dummy Read Data Register 7 (RO)
 *
 * Reset value: 0xffffffff
 *
 * Supported Mode Of Operations:  For Channel 0: All  For Channel 1: DDR3_x64, LP2_2ch_x16,
 * LP2_2ch_x32
 */
typedef union _hw_mmdc_mpswdrdr7
{
    reg32_t U;
    struct _hw_mmdc_mpswdrdr7_bitfields
    {
        unsigned DUM_RD7 : 32; //!< [31:0] Dummy read data7.
    } B;
} hw_mmdc_mpswdrdr7_t;
#endif

/*
 * constants & macros for entire MMDC_MPSWDRDR7 register
 */
#define HW_MMDC_MPSWDRDR7_ADDR      (REGS_MMDC_BASE + 0x8b4)

#ifndef __LANGUAGE_ASM__
#define HW_MMDC_MPSWDRDR7           (*(volatile hw_mmdc_mpswdrdr7_t *) HW_MMDC_MPSWDRDR7_ADDR)
#define HW_MMDC_MPSWDRDR7_RD()      (HW_MMDC_MPSWDRDR7.U)
#endif

/*
 * constants & macros for individual MMDC_MPSWDRDR7 bitfields
 */

/* --- Register HW_MMDC_MPSWDRDR7, field DUM_RD7[31:0] (RO)
 *
 * Dummy read data7. This field holds the eigth data (only in case of burst length 8 (BL =1 )) that
 * is read from the DDR during SW dummy read access (i.e when SW_DUMMY_RD = 1). This field is valid
 * only when SW_DUMMY_RD is de-assrted.
 */

#define BP_MMDC_MPSWDRDR7_DUM_RD7      (0)      //!< Bit position for MMDC_MPSWDRDR7_DUM_RD7.
#define BM_MMDC_MPSWDRDR7_DUM_RD7      (0xffffffff)  //!< Bit mask for MMDC_MPSWDRDR7_DUM_RD7.

//! @brief Get value of MMDC_MPSWDRDR7_DUM_RD7 from a register value.
#define BG_MMDC_MPSWDRDR7_DUM_RD7(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_MMDC_MPSWDRDR7_DUM_RD7) >> BP_MMDC_MPSWDRDR7_DUM_RD7)

//-------------------------------------------------------------------------------------------
// HW_MMDC_MPMUR0 - MMDC PHY Measure Unit Register
//-------------------------------------------------------------------------------------------

#ifndef __LANGUAGE_ASM__
/*!
 * @brief HW_MMDC_MPMUR0 - MMDC PHY Measure Unit Register (RW)
 *
 * Reset value: 0x00000000
 *
 * Supported Mode Of Operations:  For Channel 0: All  For Channel 1: LP2_2ch_x16, LP2_2ch_x32
 */
typedef union _hw_mmdc_mpmur0
{
    reg32_t U;
    struct _hw_mmdc_mpmur0_bitfields
    {
        unsigned MU_BYP_VAL : 10; //!< [9:0] Number of delay units for measurement bypass.
        unsigned MU_BYP_EN : 1; //!< [10] Measure unit bypass enable.
        unsigned FRC_MSR : 1; //!< [11] Force measuement on delay-lines.
        unsigned RESERVED0 : 4; //!< [15:12] Reserved
        unsigned MU_UNIT_DEL_NUM : 10; //!< [25:16] Number of delay units measured per cycle.
        unsigned RESERVED1 : 6; //!< [31:26] Reserved
    } B;
} hw_mmdc_mpmur0_t;
#endif

/*
 * constants & macros for entire MMDC_MPMUR0 register
 */
#define HW_MMDC_MPMUR0_ADDR      (REGS_MMDC_BASE + 0x8b8)

#ifndef __LANGUAGE_ASM__
#define HW_MMDC_MPMUR0           (*(volatile hw_mmdc_mpmur0_t *) HW_MMDC_MPMUR0_ADDR)
#define HW_MMDC_MPMUR0_RD()      (HW_MMDC_MPMUR0.U)
#define HW_MMDC_MPMUR0_WR(v)     (HW_MMDC_MPMUR0.U = (v))
#define HW_MMDC_MPMUR0_SET(v)    (HW_MMDC_MPMUR0_WR(HW_MMDC_MPMUR0_RD() |  (v)))
#define HW_MMDC_MPMUR0_CLR(v)    (HW_MMDC_MPMUR0_WR(HW_MMDC_MPMUR0_RD() & ~(v)))
#define HW_MMDC_MPMUR0_TOG(v)    (HW_MMDC_MPMUR0_WR(HW_MMDC_MPMUR0_RD() ^  (v)))
#endif

/*
 * constants & macros for individual MMDC_MPMUR0 bitfields
 */

/* --- Register HW_MMDC_MPMUR0, field MU_BYP_VAL[9:0] (RW)
 *
 * Number of delay units for measurement bypass. This field is used in debug mode and holds the
 * number of delay units that will be used by the delay-lines when MU_BYP_EN is asserted.
 */

#define BP_MMDC_MPMUR0_MU_BYP_VAL      (0)      //!< Bit position for MMDC_MPMUR0_MU_BYP_VAL.
#define BM_MMDC_MPMUR0_MU_BYP_VAL      (0x000003ff)  //!< Bit mask for MMDC_MPMUR0_MU_BYP_VAL.

//! @brief Get value of MMDC_MPMUR0_MU_BYP_VAL from a register value.
#define BG_MMDC_MPMUR0_MU_BYP_VAL(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_MMDC_MPMUR0_MU_BYP_VAL) >> BP_MMDC_MPMUR0_MU_BYP_VAL)

//! @brief Format value for bitfield MMDC_MPMUR0_MU_BYP_VAL.
#define BF_MMDC_MPMUR0_MU_BYP_VAL(v)   ((__REG_VALUE_TYPE((v), reg32_t) << BP_MMDC_MPMUR0_MU_BYP_VAL) & BM_MMDC_MPMUR0_MU_BYP_VAL)

#ifndef __LANGUAGE_ASM__
//! @brief Set the MU_BYP_VAL field to a new value.
#define BW_MMDC_MPMUR0_MU_BYP_VAL(v)   (HW_MMDC_MPMUR0_WR((HW_MMDC_MPMUR0_RD() & ~BM_MMDC_MPMUR0_MU_BYP_VAL) | BF_MMDC_MPMUR0_MU_BYP_VAL(v)))
#endif

/* --- Register HW_MMDC_MPMUR0, field MU_BYP_EN[10] (RW)
 *
 * Measure unit bypass enable. This field is used in debug mode and when it is asserted then the
 * delay-lines will use the number of delay units that are indicated at MU_BYP_VAL, otherwise the
 * delay-lines will use the number of delay units that was measured by the measurement unit and are
 * indicated at MU_UNIT_DEL_NUM
 *
 * Values:
 * 0 - The delay-lines use delay units as indicated at MU_UNIT_DEL_NUM.
 * 1 - The delay-lines use delay units as indicated at MU_BYPASS_VAL.
 */

#define BP_MMDC_MPMUR0_MU_BYP_EN      (10)      //!< Bit position for MMDC_MPMUR0_MU_BYP_EN.
#define BM_MMDC_MPMUR0_MU_BYP_EN      (0x00000400)  //!< Bit mask for MMDC_MPMUR0_MU_BYP_EN.

//! @brief Get value of MMDC_MPMUR0_MU_BYP_EN from a register value.
#define BG_MMDC_MPMUR0_MU_BYP_EN(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_MMDC_MPMUR0_MU_BYP_EN) >> BP_MMDC_MPMUR0_MU_BYP_EN)

//! @brief Format value for bitfield MMDC_MPMUR0_MU_BYP_EN.
#define BF_MMDC_MPMUR0_MU_BYP_EN(v)   ((__REG_VALUE_TYPE((v), reg32_t) << BP_MMDC_MPMUR0_MU_BYP_EN) & BM_MMDC_MPMUR0_MU_BYP_EN)

#ifndef __LANGUAGE_ASM__
//! @brief Set the MU_BYP_EN field to a new value.
#define BW_MMDC_MPMUR0_MU_BYP_EN(v)   (HW_MMDC_MPMUR0_WR((HW_MMDC_MPMUR0_RD() & ~BM_MMDC_MPMUR0_MU_BYP_EN) | BF_MMDC_MPMUR0_MU_BYP_EN(v)))
#endif


/* --- Register HW_MMDC_MPMUR0, field FRC_MSR[11] (RW)
 *
 * Force measuement on delay-lines. When this bit is asserted then a measurement process will be
 * performed, where at the completion of the process the delay-lines will issue the desired delay.
 * Upon completion of the measurement process the measure unit and the delay-lines will return to
 * functional more. This bit is self cleared. This bit should be used only during manual (SW)
 * calibration and not while the DDR is functional (being accessed). After initial calibration is
 * done the hardware performs periodic measurements to track any operating conditions changes.
 * Hence, force measurements (FRC_MSR) should not be used. See for more information. User should
 * make sure that there is no active accesses to/from DDR before asserting this bit.
 *
 * Values:
 * 0 - No measurement is performed
 * 1 - Perform measurement process
 */

#define BP_MMDC_MPMUR0_FRC_MSR      (11)      //!< Bit position for MMDC_MPMUR0_FRC_MSR.
#define BM_MMDC_MPMUR0_FRC_MSR      (0x00000800)  //!< Bit mask for MMDC_MPMUR0_FRC_MSR.

//! @brief Get value of MMDC_MPMUR0_FRC_MSR from a register value.
#define BG_MMDC_MPMUR0_FRC_MSR(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_MMDC_MPMUR0_FRC_MSR) >> BP_MMDC_MPMUR0_FRC_MSR)

//! @brief Format value for bitfield MMDC_MPMUR0_FRC_MSR.
#define BF_MMDC_MPMUR0_FRC_MSR(v)   ((__REG_VALUE_TYPE((v), reg32_t) << BP_MMDC_MPMUR0_FRC_MSR) & BM_MMDC_MPMUR0_FRC_MSR)

#ifndef __LANGUAGE_ASM__
//! @brief Set the FRC_MSR field to a new value.
#define BW_MMDC_MPMUR0_FRC_MSR(v)   (HW_MMDC_MPMUR0_WR((HW_MMDC_MPMUR0_RD() & ~BM_MMDC_MPMUR0_FRC_MSR) | BF_MMDC_MPMUR0_FRC_MSR(v)))
#endif


/* --- Register HW_MMDC_MPMUR0, field MU_UNIT_DEL_NUM[25:16] (RO)
 *
 * Number of delay units measured per cycle. This field is used in debug mode and holds the number
 * of delay units that were measured by the measure unit per DDR clock cycle. The delay-lines that
 * are used in every calibration process use that number for generating the desired delay.
 */

#define BP_MMDC_MPMUR0_MU_UNIT_DEL_NUM      (16)      //!< Bit position for MMDC_MPMUR0_MU_UNIT_DEL_NUM.
#define BM_MMDC_MPMUR0_MU_UNIT_DEL_NUM      (0x03ff0000)  //!< Bit mask for MMDC_MPMUR0_MU_UNIT_DEL_NUM.

//! @brief Get value of MMDC_MPMUR0_MU_UNIT_DEL_NUM from a register value.
#define BG_MMDC_MPMUR0_MU_UNIT_DEL_NUM(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_MMDC_MPMUR0_MU_UNIT_DEL_NUM) >> BP_MMDC_MPMUR0_MU_UNIT_DEL_NUM)

//-------------------------------------------------------------------------------------------
// HW_MMDC_MPWRCADL - MMDC Write CA delay-line controller
//-------------------------------------------------------------------------------------------

#ifndef __LANGUAGE_ASM__
/*!
 * @brief HW_MMDC_MPWRCADL - MMDC Write CA delay-line controller (RW)
 *
 * Reset value: 0x00000000
 *
 * This register is used to add fine-tuning adjustment to the CA (command/Address of LPDDR2 bus)
 * relative to the DDR clock  Supported Mode Of Operations:  For Channel 0: LP2_2ch_x16, LP2_2ch_x32
 * For Channel 1: LP2_2ch_x16, LP2_2ch_x32
 */
typedef union _hw_mmdc_mpwrcadl
{
    reg32_t U;
    struct _hw_mmdc_mpwrcadl_bitfields
    {
        unsigned WR_CA0_DEL : 2; //!< [1:0] CA (Command/Address LPDDR2 bus) bit 0 delay fine tuning.
        unsigned WR_CA1_DEL : 2; //!< [3:2] CA (Command/Address LPDDR2 bus) bit 1 delay fine tuning.
        unsigned WR_CA2_DEL : 2; //!< [5:4] CA (Command/Address LPDDR2 bus) bit 2 delay fine tuning.
        unsigned WR_CA3_DEL : 2; //!< [7:6] CA (Command/Address LPDDR2 bus) bit 3 delay fine tuning.
        unsigned WR_CA4_DEL : 2; //!< [9:8] CA (Command/Address LPDDR2 bus) bit 4 delay fine tuning.
        unsigned WR_CA5_DEL : 2; //!< [11:10] CA (Command/Address LPDDR2 bus) bit 5 delay fine tuning.
        unsigned WR_CA6_DEL : 2; //!< [13:12] CA (Command/Address LPDDR2 bus) bit 6 delay fine tuning.
        unsigned WR_CA7_DEL : 2; //!< [15:14] CA (Command/Address LPDDR2 bus) bit 7 delay fine tuning.
        unsigned WR_CA8_DEL : 2; //!< [17:16] CA (Command/Address LPDDR2 bus) bit 8 delay fine tuning.
        unsigned WR_CA9_DEL : 2; //!< [19:18] CA (Command/Address LPDDR2 bus) bit 9 delay fine tuning.
        unsigned RESERVED0 : 12; //!< [31:20] Reserved
    } B;
} hw_mmdc_mpwrcadl_t;
#endif

/*
 * constants & macros for entire MMDC_MPWRCADL register
 */
#define HW_MMDC_MPWRCADL_ADDR      (REGS_MMDC_BASE + 0x8bc)

#ifndef __LANGUAGE_ASM__
#define HW_MMDC_MPWRCADL           (*(volatile hw_mmdc_mpwrcadl_t *) HW_MMDC_MPWRCADL_ADDR)
#define HW_MMDC_MPWRCADL_RD()      (HW_MMDC_MPWRCADL.U)
#define HW_MMDC_MPWRCADL_WR(v)     (HW_MMDC_MPWRCADL.U = (v))
#define HW_MMDC_MPWRCADL_SET(v)    (HW_MMDC_MPWRCADL_WR(HW_MMDC_MPWRCADL_RD() |  (v)))
#define HW_MMDC_MPWRCADL_CLR(v)    (HW_MMDC_MPWRCADL_WR(HW_MMDC_MPWRCADL_RD() & ~(v)))
#define HW_MMDC_MPWRCADL_TOG(v)    (HW_MMDC_MPWRCADL_WR(HW_MMDC_MPWRCADL_RD() ^  (v)))
#endif

/*
 * constants & macros for individual MMDC_MPWRCADL bitfields
 */

/* --- Register HW_MMDC_MPWRCADL, field WR_CA0_DEL[1:0] (RW)
 *
 * CA (Command/Address LPDDR2 bus) bit 0 delay fine tuning. This field holds the number of delay
 * units that are added to CA (Command/Address bus) bit 0 relative to the clock.
 *
 * Values:
 * 00 - No change in CA0 delay
 * 01 - Add CA0 delay of 1 delay unit
 * 10 - Add CA0 delay of 2 delay units.
 * 11 - Add CA0 delay of 3 delay units.
 */

#define BP_MMDC_MPWRCADL_WR_CA0_DEL      (0)      //!< Bit position for MMDC_MPWRCADL_WR_CA0_DEL.
#define BM_MMDC_MPWRCADL_WR_CA0_DEL      (0x00000003)  //!< Bit mask for MMDC_MPWRCADL_WR_CA0_DEL.

//! @brief Get value of MMDC_MPWRCADL_WR_CA0_DEL from a register value.
#define BG_MMDC_MPWRCADL_WR_CA0_DEL(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_MMDC_MPWRCADL_WR_CA0_DEL) >> BP_MMDC_MPWRCADL_WR_CA0_DEL)

//! @brief Format value for bitfield MMDC_MPWRCADL_WR_CA0_DEL.
#define BF_MMDC_MPWRCADL_WR_CA0_DEL(v)   ((__REG_VALUE_TYPE((v), reg32_t) << BP_MMDC_MPWRCADL_WR_CA0_DEL) & BM_MMDC_MPWRCADL_WR_CA0_DEL)

#ifndef __LANGUAGE_ASM__
//! @brief Set the WR_CA0_DEL field to a new value.
#define BW_MMDC_MPWRCADL_WR_CA0_DEL(v)   (HW_MMDC_MPWRCADL_WR((HW_MMDC_MPWRCADL_RD() & ~BM_MMDC_MPWRCADL_WR_CA0_DEL) | BF_MMDC_MPWRCADL_WR_CA0_DEL(v)))
#endif


/* --- Register HW_MMDC_MPWRCADL, field WR_CA1_DEL[3:2] (RW)
 *
 * CA (Command/Address LPDDR2 bus) bit 1 delay fine tuning. This field holds the number of delay
 * units that are added to CA (Command/Address bus) bit 1 relative to the clock.
 *
 * Values:
 * 00 - No change in CA1 delay
 * 01 - Add CA1 delay of 1 delay unit
 * 10 - Add CA1 delay of 2 delay units.
 * 11 - Add CA1 delay of 3 delay units.
 */

#define BP_MMDC_MPWRCADL_WR_CA1_DEL      (2)      //!< Bit position for MMDC_MPWRCADL_WR_CA1_DEL.
#define BM_MMDC_MPWRCADL_WR_CA1_DEL      (0x0000000c)  //!< Bit mask for MMDC_MPWRCADL_WR_CA1_DEL.

//! @brief Get value of MMDC_MPWRCADL_WR_CA1_DEL from a register value.
#define BG_MMDC_MPWRCADL_WR_CA1_DEL(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_MMDC_MPWRCADL_WR_CA1_DEL) >> BP_MMDC_MPWRCADL_WR_CA1_DEL)

//! @brief Format value for bitfield MMDC_MPWRCADL_WR_CA1_DEL.
#define BF_MMDC_MPWRCADL_WR_CA1_DEL(v)   ((__REG_VALUE_TYPE((v), reg32_t) << BP_MMDC_MPWRCADL_WR_CA1_DEL) & BM_MMDC_MPWRCADL_WR_CA1_DEL)

#ifndef __LANGUAGE_ASM__
//! @brief Set the WR_CA1_DEL field to a new value.
#define BW_MMDC_MPWRCADL_WR_CA1_DEL(v)   (HW_MMDC_MPWRCADL_WR((HW_MMDC_MPWRCADL_RD() & ~BM_MMDC_MPWRCADL_WR_CA1_DEL) | BF_MMDC_MPWRCADL_WR_CA1_DEL(v)))
#endif


/* --- Register HW_MMDC_MPWRCADL, field WR_CA2_DEL[5:4] (RW)
 *
 * CA (Command/Address LPDDR2 bus) bit 2 delay fine tuning. This field holds the number of delay
 * units that are added to CA (Command/Address bus) bit 2 relative to the clock.
 *
 * Values:
 * 00 - No change in CA2 delay
 * 01 - Add CA2 delay of 1 delay unit
 * 10 - Add CA2 delay of 2 delay units.
 * 11 - Add CA2 delay of 3 delay units.
 */

#define BP_MMDC_MPWRCADL_WR_CA2_DEL      (4)      //!< Bit position for MMDC_MPWRCADL_WR_CA2_DEL.
#define BM_MMDC_MPWRCADL_WR_CA2_DEL      (0x00000030)  //!< Bit mask for MMDC_MPWRCADL_WR_CA2_DEL.

//! @brief Get value of MMDC_MPWRCADL_WR_CA2_DEL from a register value.
#define BG_MMDC_MPWRCADL_WR_CA2_DEL(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_MMDC_MPWRCADL_WR_CA2_DEL) >> BP_MMDC_MPWRCADL_WR_CA2_DEL)

//! @brief Format value for bitfield MMDC_MPWRCADL_WR_CA2_DEL.
#define BF_MMDC_MPWRCADL_WR_CA2_DEL(v)   ((__REG_VALUE_TYPE((v), reg32_t) << BP_MMDC_MPWRCADL_WR_CA2_DEL) & BM_MMDC_MPWRCADL_WR_CA2_DEL)

#ifndef __LANGUAGE_ASM__
//! @brief Set the WR_CA2_DEL field to a new value.
#define BW_MMDC_MPWRCADL_WR_CA2_DEL(v)   (HW_MMDC_MPWRCADL_WR((HW_MMDC_MPWRCADL_RD() & ~BM_MMDC_MPWRCADL_WR_CA2_DEL) | BF_MMDC_MPWRCADL_WR_CA2_DEL(v)))
#endif


/* --- Register HW_MMDC_MPWRCADL, field WR_CA3_DEL[7:6] (RW)
 *
 * CA (Command/Address LPDDR2 bus) bit 3 delay fine tuning. This field holds the number of delay
 * units that are added to CA (Command/Address bus) bit 3 relative to the clock.
 *
 * Values:
 * 00 - No change in CA3 delay
 * 01 - Add CA3 delay of 1 delay unit
 * 10 - Add CA3 delay of 2 delay units.
 * 11 - Add CA3 delay of 3 delay units.
 */

#define BP_MMDC_MPWRCADL_WR_CA3_DEL      (6)      //!< Bit position for MMDC_MPWRCADL_WR_CA3_DEL.
#define BM_MMDC_MPWRCADL_WR_CA3_DEL      (0x000000c0)  //!< Bit mask for MMDC_MPWRCADL_WR_CA3_DEL.

//! @brief Get value of MMDC_MPWRCADL_WR_CA3_DEL from a register value.
#define BG_MMDC_MPWRCADL_WR_CA3_DEL(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_MMDC_MPWRCADL_WR_CA3_DEL) >> BP_MMDC_MPWRCADL_WR_CA3_DEL)

//! @brief Format value for bitfield MMDC_MPWRCADL_WR_CA3_DEL.
#define BF_MMDC_MPWRCADL_WR_CA3_DEL(v)   ((__REG_VALUE_TYPE((v), reg32_t) << BP_MMDC_MPWRCADL_WR_CA3_DEL) & BM_MMDC_MPWRCADL_WR_CA3_DEL)

#ifndef __LANGUAGE_ASM__
//! @brief Set the WR_CA3_DEL field to a new value.
#define BW_MMDC_MPWRCADL_WR_CA3_DEL(v)   (HW_MMDC_MPWRCADL_WR((HW_MMDC_MPWRCADL_RD() & ~BM_MMDC_MPWRCADL_WR_CA3_DEL) | BF_MMDC_MPWRCADL_WR_CA3_DEL(v)))
#endif


/* --- Register HW_MMDC_MPWRCADL, field WR_CA4_DEL[9:8] (RW)
 *
 * CA (Command/Address LPDDR2 bus) bit 4 delay fine tuning. This field holds the number of delay
 * units that are added to CA (Command/Address bus) bit 4 relative to the clock.
 *
 * Values:
 * 00 - No change in CA4 delay
 * 01 - Add CA4 delay of 1 delay unit
 * 10 - Add CA4 delay of 2 delay units.
 * 11 - Add CA4 delay of 3 delay units.
 */

#define BP_MMDC_MPWRCADL_WR_CA4_DEL      (8)      //!< Bit position for MMDC_MPWRCADL_WR_CA4_DEL.
#define BM_MMDC_MPWRCADL_WR_CA4_DEL      (0x00000300)  //!< Bit mask for MMDC_MPWRCADL_WR_CA4_DEL.

//! @brief Get value of MMDC_MPWRCADL_WR_CA4_DEL from a register value.
#define BG_MMDC_MPWRCADL_WR_CA4_DEL(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_MMDC_MPWRCADL_WR_CA4_DEL) >> BP_MMDC_MPWRCADL_WR_CA4_DEL)

//! @brief Format value for bitfield MMDC_MPWRCADL_WR_CA4_DEL.
#define BF_MMDC_MPWRCADL_WR_CA4_DEL(v)   ((__REG_VALUE_TYPE((v), reg32_t) << BP_MMDC_MPWRCADL_WR_CA4_DEL) & BM_MMDC_MPWRCADL_WR_CA4_DEL)

#ifndef __LANGUAGE_ASM__
//! @brief Set the WR_CA4_DEL field to a new value.
#define BW_MMDC_MPWRCADL_WR_CA4_DEL(v)   (HW_MMDC_MPWRCADL_WR((HW_MMDC_MPWRCADL_RD() & ~BM_MMDC_MPWRCADL_WR_CA4_DEL) | BF_MMDC_MPWRCADL_WR_CA4_DEL(v)))
#endif


/* --- Register HW_MMDC_MPWRCADL, field WR_CA5_DEL[11:10] (RW)
 *
 * CA (Command/Address LPDDR2 bus) bit 5 delay fine tuning. This field holds the number of delay
 * units that are added to CA (Command/Address bus) bit 5 relative to the clock.
 *
 * Values:
 * 00 - No change in CA5 delay
 * 01 - Add CA5 delay of 1 delay unit
 * 10 - Add CA5 delay of 2 delay units.
 * 11 - Add CA5 delay of 3 delay units.
 */

#define BP_MMDC_MPWRCADL_WR_CA5_DEL      (10)      //!< Bit position for MMDC_MPWRCADL_WR_CA5_DEL.
#define BM_MMDC_MPWRCADL_WR_CA5_DEL      (0x00000c00)  //!< Bit mask for MMDC_MPWRCADL_WR_CA5_DEL.

//! @brief Get value of MMDC_MPWRCADL_WR_CA5_DEL from a register value.
#define BG_MMDC_MPWRCADL_WR_CA5_DEL(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_MMDC_MPWRCADL_WR_CA5_DEL) >> BP_MMDC_MPWRCADL_WR_CA5_DEL)

//! @brief Format value for bitfield MMDC_MPWRCADL_WR_CA5_DEL.
#define BF_MMDC_MPWRCADL_WR_CA5_DEL(v)   ((__REG_VALUE_TYPE((v), reg32_t) << BP_MMDC_MPWRCADL_WR_CA5_DEL) & BM_MMDC_MPWRCADL_WR_CA5_DEL)

#ifndef __LANGUAGE_ASM__
//! @brief Set the WR_CA5_DEL field to a new value.
#define BW_MMDC_MPWRCADL_WR_CA5_DEL(v)   (HW_MMDC_MPWRCADL_WR((HW_MMDC_MPWRCADL_RD() & ~BM_MMDC_MPWRCADL_WR_CA5_DEL) | BF_MMDC_MPWRCADL_WR_CA5_DEL(v)))
#endif


/* --- Register HW_MMDC_MPWRCADL, field WR_CA6_DEL[13:12] (RW)
 *
 * CA (Command/Address LPDDR2 bus) bit 6 delay fine tuning. This field holds the number of delay
 * units that are added to CA (Command/Address bus) bit 6 relative to the clock.
 *
 * Values:
 * 00 - No change in CA6 delay
 * 01 - Add CA6 delay of 1 delay unit
 * 10 - Add CA6 delay of 2 delay units.
 * 11 - Add CA6 delay of 3 delay units.
 */

#define BP_MMDC_MPWRCADL_WR_CA6_DEL      (12)      //!< Bit position for MMDC_MPWRCADL_WR_CA6_DEL.
#define BM_MMDC_MPWRCADL_WR_CA6_DEL      (0x00003000)  //!< Bit mask for MMDC_MPWRCADL_WR_CA6_DEL.

//! @brief Get value of MMDC_MPWRCADL_WR_CA6_DEL from a register value.
#define BG_MMDC_MPWRCADL_WR_CA6_DEL(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_MMDC_MPWRCADL_WR_CA6_DEL) >> BP_MMDC_MPWRCADL_WR_CA6_DEL)

//! @brief Format value for bitfield MMDC_MPWRCADL_WR_CA6_DEL.
#define BF_MMDC_MPWRCADL_WR_CA6_DEL(v)   ((__REG_VALUE_TYPE((v), reg32_t) << BP_MMDC_MPWRCADL_WR_CA6_DEL) & BM_MMDC_MPWRCADL_WR_CA6_DEL)

#ifndef __LANGUAGE_ASM__
//! @brief Set the WR_CA6_DEL field to a new value.
#define BW_MMDC_MPWRCADL_WR_CA6_DEL(v)   (HW_MMDC_MPWRCADL_WR((HW_MMDC_MPWRCADL_RD() & ~BM_MMDC_MPWRCADL_WR_CA6_DEL) | BF_MMDC_MPWRCADL_WR_CA6_DEL(v)))
#endif


/* --- Register HW_MMDC_MPWRCADL, field WR_CA7_DEL[15:14] (RW)
 *
 * CA (Command/Address LPDDR2 bus) bit 7 delay fine tuning. This field holds the number of delay
 * units that are added to CA (Command/Address bus) bit 7 relative to the clock.
 *
 * Values:
 * 00 - No change in CA7 delay
 * 01 - Add CA7 delay of 1 delay unit
 * 10 - Add CA7 delay of 2 delay units.
 * 11 - Add CA7 delay of 3 delay units.
 */

#define BP_MMDC_MPWRCADL_WR_CA7_DEL      (14)      //!< Bit position for MMDC_MPWRCADL_WR_CA7_DEL.
#define BM_MMDC_MPWRCADL_WR_CA7_DEL      (0x0000c000)  //!< Bit mask for MMDC_MPWRCADL_WR_CA7_DEL.

//! @brief Get value of MMDC_MPWRCADL_WR_CA7_DEL from a register value.
#define BG_MMDC_MPWRCADL_WR_CA7_DEL(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_MMDC_MPWRCADL_WR_CA7_DEL) >> BP_MMDC_MPWRCADL_WR_CA7_DEL)

//! @brief Format value for bitfield MMDC_MPWRCADL_WR_CA7_DEL.
#define BF_MMDC_MPWRCADL_WR_CA7_DEL(v)   ((__REG_VALUE_TYPE((v), reg32_t) << BP_MMDC_MPWRCADL_WR_CA7_DEL) & BM_MMDC_MPWRCADL_WR_CA7_DEL)

#ifndef __LANGUAGE_ASM__
//! @brief Set the WR_CA7_DEL field to a new value.
#define BW_MMDC_MPWRCADL_WR_CA7_DEL(v)   (HW_MMDC_MPWRCADL_WR((HW_MMDC_MPWRCADL_RD() & ~BM_MMDC_MPWRCADL_WR_CA7_DEL) | BF_MMDC_MPWRCADL_WR_CA7_DEL(v)))
#endif


/* --- Register HW_MMDC_MPWRCADL, field WR_CA8_DEL[17:16] (RW)
 *
 * CA (Command/Address LPDDR2 bus) bit 8 delay fine tuning. This field holds the number of delay
 * units that are added to CA (Command/Address bus) bit 8 relative to the clock.
 *
 * Values:
 * 00 - No change in CA8 delay
 * 01 - Add CA8 delay of 1 delay unit
 * 10 - Add CA8 delay of 2 delay units.
 * 11 - Add CA8 delay of 3 delay units.
 */

#define BP_MMDC_MPWRCADL_WR_CA8_DEL      (16)      //!< Bit position for MMDC_MPWRCADL_WR_CA8_DEL.
#define BM_MMDC_MPWRCADL_WR_CA8_DEL      (0x00030000)  //!< Bit mask for MMDC_MPWRCADL_WR_CA8_DEL.

//! @brief Get value of MMDC_MPWRCADL_WR_CA8_DEL from a register value.
#define BG_MMDC_MPWRCADL_WR_CA8_DEL(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_MMDC_MPWRCADL_WR_CA8_DEL) >> BP_MMDC_MPWRCADL_WR_CA8_DEL)

//! @brief Format value for bitfield MMDC_MPWRCADL_WR_CA8_DEL.
#define BF_MMDC_MPWRCADL_WR_CA8_DEL(v)   ((__REG_VALUE_TYPE((v), reg32_t) << BP_MMDC_MPWRCADL_WR_CA8_DEL) & BM_MMDC_MPWRCADL_WR_CA8_DEL)

#ifndef __LANGUAGE_ASM__
//! @brief Set the WR_CA8_DEL field to a new value.
#define BW_MMDC_MPWRCADL_WR_CA8_DEL(v)   (HW_MMDC_MPWRCADL_WR((HW_MMDC_MPWRCADL_RD() & ~BM_MMDC_MPWRCADL_WR_CA8_DEL) | BF_MMDC_MPWRCADL_WR_CA8_DEL(v)))
#endif


/* --- Register HW_MMDC_MPWRCADL, field WR_CA9_DEL[19:18] (RW)
 *
 * CA (Command/Address LPDDR2 bus) bit 9 delay fine tuning. This field holds the number of delay
 * units that are added to CA (Command/Address bus) bit 9 relative to the clock.
 *
 * Values:
 * 00 - No change in CA9 delay
 * 01 - Add CA9 delay of 1 delay unit
 * 10 - Add CA9 delay of 2 delay units.
 * 11 - Add CA9 delay of 3 delay units.
 */

#define BP_MMDC_MPWRCADL_WR_CA9_DEL      (18)      //!< Bit position for MMDC_MPWRCADL_WR_CA9_DEL.
#define BM_MMDC_MPWRCADL_WR_CA9_DEL      (0x000c0000)  //!< Bit mask for MMDC_MPWRCADL_WR_CA9_DEL.

//! @brief Get value of MMDC_MPWRCADL_WR_CA9_DEL from a register value.
#define BG_MMDC_MPWRCADL_WR_CA9_DEL(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_MMDC_MPWRCADL_WR_CA9_DEL) >> BP_MMDC_MPWRCADL_WR_CA9_DEL)

//! @brief Format value for bitfield MMDC_MPWRCADL_WR_CA9_DEL.
#define BF_MMDC_MPWRCADL_WR_CA9_DEL(v)   ((__REG_VALUE_TYPE((v), reg32_t) << BP_MMDC_MPWRCADL_WR_CA9_DEL) & BM_MMDC_MPWRCADL_WR_CA9_DEL)

#ifndef __LANGUAGE_ASM__
//! @brief Set the WR_CA9_DEL field to a new value.
#define BW_MMDC_MPWRCADL_WR_CA9_DEL(v)   (HW_MMDC_MPWRCADL_WR((HW_MMDC_MPWRCADL_RD() & ~BM_MMDC_MPWRCADL_WR_CA9_DEL) | BF_MMDC_MPWRCADL_WR_CA9_DEL(v)))
#endif


//-------------------------------------------------------------------------------------------
// HW_MMDC_MPDCCR - MMDC Duty Cycle Control Register
//-------------------------------------------------------------------------------------------

#ifndef __LANGUAGE_ASM__
/*!
 * @brief HW_MMDC_MPDCCR - MMDC Duty Cycle Control Register (RO)
 *
 * Reset value: 0x24922492
 *
 * This register is used to control the duty cycle of the DQS and the primary clock (CK0) .
 * Programming of that register is permitted by entering the DDR device into self-refresh mode
 * through LPMD/DVFS mechanism  Supported Mode Of Operations:  For Channel 0: All  For Channel 1:
 * DDR3_x64, LP2_2ch_x16, LP2_2ch_x32
 */
typedef union _hw_mmdc_mpdccr
{
    reg32_t U;
    struct _hw_mmdc_mpdccr_bitfields
    {
        unsigned WR_DQS0_FT_DCC : 3; //!< [2:0] Write DQS duty cycle fine tuning control of Byte0.
        unsigned WR_DQS1_FT_DCC : 3; //!< [5:3] Write DQS duty cycle fine tuning control of Byte1.
        unsigned WR_DQS2_FT_DCC : 3; //!< [8:6] Write DQS duty cycle fine tuning control of Byte1.
        unsigned WR_DQS3_FT_DCC : 3; //!< [11:9] Write DQS duty cycle fine tuning control of Byte0.
        unsigned CK_FT0_DCC : 3; //!< [14:12] Primary duty cycle fine tuning control of DDR clock.
        unsigned RESERVED0 : 1; //!< [15] Reserved
        unsigned CK_FT1_DCC : 3; //!< [18:16] Secondary duty cycle fine tuning control of DDR clock.
        unsigned RD_DQS0_FT_DCC : 3; //!< [21:19] Read DQS duty cycle fine tuning control of Byte0.
        unsigned RD_DQS1_FT_DCC : 3; //!< [24:22] Read DQS duty cycle fine tuning control of Byte1.
        unsigned RD_DQS2_FT_DCC : 3; //!< [27:25] Read DQS duty cycle fine tuning control of Byte2.
        unsigned RD_DQS3_FT_DCC : 3; //!< [30:28] Read DQS duty cycle fine tuning control of Byte3.
        unsigned RESERVED1 : 1; //!< [31] reserved
    } B;
} hw_mmdc_mpdccr_t;
#endif

/*
 * constants & macros for entire MMDC_MPDCCR register
 */
#define HW_MMDC_MPDCCR_ADDR      (REGS_MMDC_BASE + 0x8c0)

#ifndef __LANGUAGE_ASM__
#define HW_MMDC_MPDCCR           (*(volatile hw_mmdc_mpdccr_t *) HW_MMDC_MPDCCR_ADDR)
#define HW_MMDC_MPDCCR_RD()      (HW_MMDC_MPDCCR.U)
#endif

/*
 * constants & macros for individual MMDC_MPDCCR bitfields
 */

/* --- Register HW_MMDC_MPDCCR, field WR_DQS0_FT_DCC[2:0] (RO)
 *
 * Write DQS duty cycle fine tuning control of Byte0. This field controls the duty cycle of write
 * DQS of Byte0 Note all the other options are not allowed
 *
 * Values:
 * 001 - 48.5% low 51.5% high
 * 010 - 50% duty cycle (default)
 * 100 - 51.5% low 48.5% high
 */

#define BP_MMDC_MPDCCR_WR_DQS0_FT_DCC      (0)      //!< Bit position for MMDC_MPDCCR_WR_DQS0_FT_DCC.
#define BM_MMDC_MPDCCR_WR_DQS0_FT_DCC      (0x00000007)  //!< Bit mask for MMDC_MPDCCR_WR_DQS0_FT_DCC.

//! @brief Get value of MMDC_MPDCCR_WR_DQS0_FT_DCC from a register value.
#define BG_MMDC_MPDCCR_WR_DQS0_FT_DCC(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_MMDC_MPDCCR_WR_DQS0_FT_DCC) >> BP_MMDC_MPDCCR_WR_DQS0_FT_DCC)


/* --- Register HW_MMDC_MPDCCR, field WR_DQS1_FT_DCC[5:3] (RO)
 *
 * Write DQS duty cycle fine tuning control of Byte1. This field controls the duty cycle of write
 * DQS of Byte1 Note all the other options are not allowed
 *
 * Values:
 * 001 - 48.5% low 51.5% high
 * 010 - 50% duty cycle (default)
 * 100 - 51.5% low 48.5% high
 */

#define BP_MMDC_MPDCCR_WR_DQS1_FT_DCC      (3)      //!< Bit position for MMDC_MPDCCR_WR_DQS1_FT_DCC.
#define BM_MMDC_MPDCCR_WR_DQS1_FT_DCC      (0x00000038)  //!< Bit mask for MMDC_MPDCCR_WR_DQS1_FT_DCC.

//! @brief Get value of MMDC_MPDCCR_WR_DQS1_FT_DCC from a register value.
#define BG_MMDC_MPDCCR_WR_DQS1_FT_DCC(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_MMDC_MPDCCR_WR_DQS1_FT_DCC) >> BP_MMDC_MPDCCR_WR_DQS1_FT_DCC)


/* --- Register HW_MMDC_MPDCCR, field WR_DQS2_FT_DCC[8:6] (RO)
 *
 * Write DQS duty cycle fine tuning control of Byte1. This field controls the duty cycle of write
 * DQS of Byte1 Note all the other options are not allowed
 *
 * Values:
 * 001 - 48.5% low 51.5% high
 * 010 - 50% duty cycle (default)
 * 100 - 51.5% low 48.5% high
 */

#define BP_MMDC_MPDCCR_WR_DQS2_FT_DCC      (6)      //!< Bit position for MMDC_MPDCCR_WR_DQS2_FT_DCC.
#define BM_MMDC_MPDCCR_WR_DQS2_FT_DCC      (0x000001c0)  //!< Bit mask for MMDC_MPDCCR_WR_DQS2_FT_DCC.

//! @brief Get value of MMDC_MPDCCR_WR_DQS2_FT_DCC from a register value.
#define BG_MMDC_MPDCCR_WR_DQS2_FT_DCC(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_MMDC_MPDCCR_WR_DQS2_FT_DCC) >> BP_MMDC_MPDCCR_WR_DQS2_FT_DCC)


/* --- Register HW_MMDC_MPDCCR, field WR_DQS3_FT_DCC[11:9] (RO)
 *
 * Write DQS duty cycle fine tuning control of Byte0. This field controls the duty cycle of write
 * DQS of Byte0 Note all the other options are not allowed
 *
 * Values:
 * 001 - 48.5% low 51.5% high
 * 010 - 50% duty cycle (default)
 * 100 - 51.5% low 48.5% high
 */

#define BP_MMDC_MPDCCR_WR_DQS3_FT_DCC      (9)      //!< Bit position for MMDC_MPDCCR_WR_DQS3_FT_DCC.
#define BM_MMDC_MPDCCR_WR_DQS3_FT_DCC      (0x00000e00)  //!< Bit mask for MMDC_MPDCCR_WR_DQS3_FT_DCC.

//! @brief Get value of MMDC_MPDCCR_WR_DQS3_FT_DCC from a register value.
#define BG_MMDC_MPDCCR_WR_DQS3_FT_DCC(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_MMDC_MPDCCR_WR_DQS3_FT_DCC) >> BP_MMDC_MPDCCR_WR_DQS3_FT_DCC)


/* --- Register HW_MMDC_MPDCCR, field CK_FT0_DCC[14:12] (RO)
 *
 * Primary duty cycle fine tuning control of DDR clock. This field controls the duty cycle of the
 * DDR clock Note all the other options are not allowed
 *
 * Values:
 * 001 - 48.5% low 51.5% high
 * 010 - 50% duty cycle (default)
 * 100 - 51.5% low 48.5% high
 */

#define BP_MMDC_MPDCCR_CK_FT0_DCC      (12)      //!< Bit position for MMDC_MPDCCR_CK_FT0_DCC.
#define BM_MMDC_MPDCCR_CK_FT0_DCC      (0x00007000)  //!< Bit mask for MMDC_MPDCCR_CK_FT0_DCC.

//! @brief Get value of MMDC_MPDCCR_CK_FT0_DCC from a register value.
#define BG_MMDC_MPDCCR_CK_FT0_DCC(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_MMDC_MPDCCR_CK_FT0_DCC) >> BP_MMDC_MPDCCR_CK_FT0_DCC)


/* --- Register HW_MMDC_MPDCCR, field CK_FT1_DCC[18:16] (RO)
 *
 * Secondary duty cycle fine tuning control of DDR clock. This field controls the duty cycle of the
 * DDR clock and is cascaded to CK_FT0_DCC Note all the other options are not allowed
 *
 * Values:
 * 001 - 48.5% low 51.5% high
 * 010 - 50% duty cycle (default)
 * 100 - 51.5% low 48.5% high
 */

#define BP_MMDC_MPDCCR_CK_FT1_DCC      (16)      //!< Bit position for MMDC_MPDCCR_CK_FT1_DCC.
#define BM_MMDC_MPDCCR_CK_FT1_DCC      (0x00070000)  //!< Bit mask for MMDC_MPDCCR_CK_FT1_DCC.

//! @brief Get value of MMDC_MPDCCR_CK_FT1_DCC from a register value.
#define BG_MMDC_MPDCCR_CK_FT1_DCC(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_MMDC_MPDCCR_CK_FT1_DCC) >> BP_MMDC_MPDCCR_CK_FT1_DCC)


/* --- Register HW_MMDC_MPDCCR, field RD_DQS0_FT_DCC[21:19] (RO)
 *
 * Read DQS duty cycle fine tuning control of Byte0. This field controls the duty cycle of read DQS
 * of Byte0 Note all the other options are not allowed
 *
 * Values:
 * 001 - 48.5% low 51.5% high
 * 010 - 50% duty cycle (default)
 * 100 - 51.5% low 48.5% high
 */

#define BP_MMDC_MPDCCR_RD_DQS0_FT_DCC      (19)      //!< Bit position for MMDC_MPDCCR_RD_DQS0_FT_DCC.
#define BM_MMDC_MPDCCR_RD_DQS0_FT_DCC      (0x00380000)  //!< Bit mask for MMDC_MPDCCR_RD_DQS0_FT_DCC.

//! @brief Get value of MMDC_MPDCCR_RD_DQS0_FT_DCC from a register value.
#define BG_MMDC_MPDCCR_RD_DQS0_FT_DCC(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_MMDC_MPDCCR_RD_DQS0_FT_DCC) >> BP_MMDC_MPDCCR_RD_DQS0_FT_DCC)


/* --- Register HW_MMDC_MPDCCR, field RD_DQS1_FT_DCC[24:22] (RO)
 *
 * Read DQS duty cycle fine tuning control of Byte1. This field controls the duty cycle of read DQS
 * of Byte1 Note all the other options are not allowed
 *
 * Values:
 * 001 - 48.5% low 51.5% high
 * 010 - 50% duty cycle (default)
 * 100 - 51.5% low 48.5% high
 */

#define BP_MMDC_MPDCCR_RD_DQS1_FT_DCC      (22)      //!< Bit position for MMDC_MPDCCR_RD_DQS1_FT_DCC.
#define BM_MMDC_MPDCCR_RD_DQS1_FT_DCC      (0x01c00000)  //!< Bit mask for MMDC_MPDCCR_RD_DQS1_FT_DCC.

//! @brief Get value of MMDC_MPDCCR_RD_DQS1_FT_DCC from a register value.
#define BG_MMDC_MPDCCR_RD_DQS1_FT_DCC(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_MMDC_MPDCCR_RD_DQS1_FT_DCC) >> BP_MMDC_MPDCCR_RD_DQS1_FT_DCC)


/* --- Register HW_MMDC_MPDCCR, field RD_DQS2_FT_DCC[27:25] (RO)
 *
 * Read DQS duty cycle fine tuning control of Byte2. This field controls the duty cycle of read DQS
 * of Byte2 Note all the other options are not allowed
 *
 * Values:
 * 001 - 48.5% low 51.5% high
 * 010 - 50% duty cycle (default)
 * 100 - 51.5% low 48.5% high
 */

#define BP_MMDC_MPDCCR_RD_DQS2_FT_DCC      (25)      //!< Bit position for MMDC_MPDCCR_RD_DQS2_FT_DCC.
#define BM_MMDC_MPDCCR_RD_DQS2_FT_DCC      (0x0e000000)  //!< Bit mask for MMDC_MPDCCR_RD_DQS2_FT_DCC.

//! @brief Get value of MMDC_MPDCCR_RD_DQS2_FT_DCC from a register value.
#define BG_MMDC_MPDCCR_RD_DQS2_FT_DCC(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_MMDC_MPDCCR_RD_DQS2_FT_DCC) >> BP_MMDC_MPDCCR_RD_DQS2_FT_DCC)


/* --- Register HW_MMDC_MPDCCR, field RD_DQS3_FT_DCC[30:28] (RO)
 *
 * Read DQS duty cycle fine tuning control of Byte3. This field controls the duty cycle of read DQS
 * of Byte3 Note all the other options are not allowed
 *
 * Values:
 * 001 - 48.5% low 51.5% high
 * 010 - 50% duty cycle (default)
 * 100 - 51.5% low 48.5% high
 */

#define BP_MMDC_MPDCCR_RD_DQS3_FT_DCC      (28)      //!< Bit position for MMDC_MPDCCR_RD_DQS3_FT_DCC.
#define BM_MMDC_MPDCCR_RD_DQS3_FT_DCC      (0x70000000)  //!< Bit mask for MMDC_MPDCCR_RD_DQS3_FT_DCC.

//! @brief Get value of MMDC_MPDCCR_RD_DQS3_FT_DCC from a register value.
#define BG_MMDC_MPDCCR_RD_DQS3_FT_DCC(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_MMDC_MPDCCR_RD_DQS3_FT_DCC) >> BP_MMDC_MPDCCR_RD_DQS3_FT_DCC)



/*!
 * @brief All MMDC module registers.
 */
#ifndef __LANGUAGE_ASM__
#pragma pack(1)
typedef struct _hw_mmdc
{
    volatile hw_mmdc_mdctl_t MDCTL; //!< MMDC Core Control Register
    volatile hw_mmdc_mdpdc_t MDPDC; //!< MMDC Core Power Down Control Register
    volatile hw_mmdc_mdotc_t MDOTC; //!< MMDC Core ODT Timing Control Register
    volatile hw_mmdc_mdcfg0_t MDCFG0; //!< MMDC Core Timing Configuration Register 0
    volatile hw_mmdc_mdcfg1_t MDCFG1; //!< MMDC Core Timing Configuration Register 1
    volatile hw_mmdc_mdcfg2_t MDCFG2; //!< MMDC Core Timing Configuration Register 2
    volatile hw_mmdc_mdmisc_t MDMISC; //!< MMDC Core Miscellaneous Register
    volatile hw_mmdc_mdscr_t MDSCR; //!< MMDC Core Special Command Register
    volatile hw_mmdc_mdref_t MDREF; //!< MMDC Core Refresh Control Register
    reg32_t _reserved0[2];
    volatile hw_mmdc_mdrwd_t MDRWD; //!< MMDC Core Read/Write Command Delay Register
    volatile hw_mmdc_mdor_t MDOR; //!< MMDC Core Out of Reset Delays Register
    volatile hw_mmdc_mdmrr_t MDMRR; //!< MMDC Core MRR Data Register
    volatile hw_mmdc_mdcfg3lp_t MDCFG3LP; //!< MMDC Core Timing Configuration Register 3
    volatile hw_mmdc_mdmr4_t MDMR4; //!< MMDC Core MR4 Derating Register
    volatile hw_mmdc_mdasp_t MDASP; //!< MMDC Core Address Space Partition Register
    reg32_t _reserved1[239];
    volatile hw_mmdc_maarcr_t MAARCR; //!< MMDC Core AXI Reordering Control Regsiter
    volatile hw_mmdc_mapsr_t MAPSR; //!< MMDC Core Power Saving Control and Status Register
    volatile hw_mmdc_maexidr0_t MAEXIDR0; //!< MMDC Core Exclusive ID Monitor Register0
    volatile hw_mmdc_maexidr1_t MAEXIDR1; //!< MMDC Core Exclusive ID Monitor Register1
    volatile hw_mmdc_madpcr0_t MADPCR0; //!< MMDC Core Debug and Profiling Control Register 0
    volatile hw_mmdc_madpcr1_t MADPCR1; //!< MMDC Core Debug and Profiling Control Register 1
    volatile hw_mmdc_madpsr0_t MADPSR0; //!< MMDC Core Debug and Profiling Status Register 0
    volatile hw_mmdc_madpsr1_t MADPSR1; //!< MMDC Core Debug and Profiling Status Register 1
    volatile hw_mmdc_madpsr2_t MADPSR2; //!< MMDC Core Debug and Profiling Status Register 2
    volatile hw_mmdc_madpsr3_t MADPSR3; //!< MMDC Core Debug and Profiling Status Register 3
    volatile hw_mmdc_madpsr4_t MADPSR4; //!< MMDC Core Debug and Profiling Status Register 4
    volatile hw_mmdc_madpsr5_t MADPSR5; //!< MMDC Core Debug and Profiling Status Register 5
    volatile hw_mmdc_masbs0_t MASBS0; //!< MMDC Core Step By Step Address Register
    volatile hw_mmdc_masbs1_t MASBS1; //!< MMDC Core Step By Step Address Attributes Register
    reg32_t _reserved2[2];
    volatile hw_mmdc_magenp_t MAGENP; //!< MMDC Core General Purpose Register
    reg32_t _reserved3[239];
    volatile hw_mmdc_mpzqhwctrl_t MPZQHWCTRL; //!< MMDC PHY ZQ HW control register
    volatile hw_mmdc_mpzqswctrl_t MPZQSWCTRL; //!< MMDC PHY ZQ SW control register
    volatile hw_mmdc_mpwlgcr_t MPWLGCR; //!< MMDC PHY Write Leveling Configuration and Error Status Register
    volatile hw_mmdc_mpwldectrl0_t MPWLDECTRL0; //!< MMDC PHY Write Leveling Delay Control Register 0
    volatile hw_mmdc_mpwldectrl1_t MPWLDECTRL1; //!< MMDC PHY Write Leveling Delay Control Register 1
    volatile hw_mmdc_mpwldlst_t MPWLDLST; //!< MMDC PHY Write Leveling delay-line Status Register
    volatile hw_mmdc_mpodtctrl_t MPODTCTRL; //!< MMDC PHY ODT control register
    volatile hw_mmdc_mprddqby0dl_t MPRDDQBY0DL; //!< MMDC PHY Read DQ Byte0 Delay Register
    volatile hw_mmdc_mprddqby1dl_t MPRDDQBY1DL; //!< MMDC PHY Read DQ Byte1 Delay Register
    volatile hw_mmdc_mprddqby2dl_t MPRDDQBY2DL; //!< MMDC PHY Read DQ Byte2 Delay Register
    volatile hw_mmdc_mprddqby3dl_t MPRDDQBY3DL; //!< MMDC PHY Read DQ Byte3 Delay Register
    volatile hw_mmdc_mpwrdqby0dl_t MPWRDQBY0DL; //!< MMDC PHY Write DQ Byte0 Delay Register
    volatile hw_mmdc_mpwrdqby1dl_t MPWRDQBY1DL; //!< MMDC PHY Write DQ Byte1 Delay Register
    volatile hw_mmdc_mpwrdqby2dl_t MPWRDQBY2DL; //!< MMDC PHY Write DQ Byte2 Delay Register
    volatile hw_mmdc_mpwrdqby3dl_t MPWRDQBY3DL; //!< MMDC PHY Write DQ Byte3 Delay Register
    volatile hw_mmdc_mpdgctrl0_t MPDGCTRL0; //!< MMDC PHY Read DQS Gating Control Register 0
    volatile hw_mmdc_mpdgctrl1_t MPDGCTRL1; //!< MMDC PHY Read DQS Gating Control Register 1
    volatile hw_mmdc_mpdgdlst0_t MPDGDLST0; //!< MMDC PHY Read DQS Gating delay-line Status Register
    volatile hw_mmdc_mprddlctl_t MPRDDLCTL; //!< MMDC PHY Read delay-lines Configuration Register
    volatile hw_mmdc_mprddlst_t MPRDDLST; //!< MMDC PHY Read delay-lines Status Register
    volatile hw_mmdc_mpwrdlctl_t MPWRDLCTL; //!< MMDC PHY Write delay-lines Configuration Register
    volatile hw_mmdc_mpwrdlst_t MPWRDLST; //!< MMDC PHY Write delay-lines Status Register
    volatile hw_mmdc_mpsdctrl_t MPSDCTRL; //!< MMDC PHY CK Control Register
    volatile hw_mmdc_mpzqlp2ctl_t MPZQLP2CTL; //!< MMDC ZQ LPDDR2 HW Control Register
    volatile hw_mmdc_mprddlhwctl_t MPRDDLHWCTL; //!< MMDC PHY Read Delay HW Calibration Control Register
    volatile hw_mmdc_mpwrdlhwctl_t MPWRDLHWCTL; //!< MMDC PHY Write Delay HW Calibration Control Register
    volatile hw_mmdc_mprddlhwst0_t MPRDDLHWST0; //!< MMDC PHY Read Delay HW Calibration Status Register 0
    volatile hw_mmdc_mprddlhwst1_t MPRDDLHWST1; //!< MMDC PHY Read Delay HW Calibration Status Register 1
    volatile hw_mmdc_mpwrdlhwst0_t MPWRDLHWST0; //!< MMDC PHY Write Delay HW Calibration Status Register 0
    volatile hw_mmdc_mpwrdlhwst1_t MPWRDLHWST1; //!< MMDC PHY Write Delay HW Calibration Status Register 1
    volatile hw_mmdc_mpwlhwerr_t MPWLHWERR; //!< MMDC PHY Write Leveling HW Error Register
    volatile hw_mmdc_mpdghwst0_t MPDGHWST0; //!< MMDC PHY Read DQS Gating HW Status Register 0
    volatile hw_mmdc_mpdghwst1_t MPDGHWST1; //!< MMDC PHY Read DQS Gating HW Status Register 1
    volatile hw_mmdc_mpdghwst2_t MPDGHWST2; //!< MMDC PHY Read DQS Gating HW Status Register 2
    volatile hw_mmdc_mpdghwst3_t MPDGHWST3; //!< MMDC PHY Read DQS Gating HW Status Register 3
    volatile hw_mmdc_mppdcmpr1_t MPPDCMPR1; //!< MMDC PHY Pre-defined Compare Register 1
    volatile hw_mmdc_mppdcmpr2_t MPPDCMPR2; //!< MMDC PHY Pre-defined Compare and CA delay-line Configuration Register
    volatile hw_mmdc_mpswdar0_t MPSWDAR0; //!< MMDC PHY SW Dummy Access Register
    volatile hw_mmdc_mpswdrdr0_t MPSWDRDR0; //!< MMDC PHY SW Dummy Read Data Register 0
    volatile hw_mmdc_mpswdrdr1_t MPSWDRDR1; //!< MMDC PHY SW Dummy Read Data Register 1
    volatile hw_mmdc_mpswdrdr2_t MPSWDRDR2; //!< MMDC PHY SW Dummy Read Data Register 2
    volatile hw_mmdc_mpswdrdr3_t MPSWDRDR3; //!< MMDC PHY SW Dummy Read Data Register 3
    volatile hw_mmdc_mpswdrdr4_t MPSWDRDR4; //!< MMDC PHY SW Dummy Read Data Register 4
    volatile hw_mmdc_mpswdrdr5_t MPSWDRDR5; //!< MMDC PHY SW Dummy Read Data Register 5
    volatile hw_mmdc_mpswdrdr6_t MPSWDRDR6; //!< MMDC PHY SW Dummy Read Data Register 6
    volatile hw_mmdc_mpswdrdr7_t MPSWDRDR7; //!< MMDC PHY SW Dummy Read Data Register 7
    volatile hw_mmdc_mpmur0_t MPMUR0; //!< MMDC PHY Measure Unit Register
    volatile hw_mmdc_mpwrcadl_t MPWRCADL; //!< MMDC Write CA delay-line controller
    volatile hw_mmdc_mpdccr_t MPDCCR; //!< MMDC Duty Cycle Control Register
} hw_mmdc_t;
#pragma pack()

//! @brief Macro to access all MMDC registers.
//! @return Reference (not a pointer) to the registers struct. To get a pointer to the struct,
//!     use the '&' operator, like <code>&HW_MMDC(0)</code>.
#define HW_MMDC     (*(volatile hw_mmdc_t *) REGS_MMDC_BASE)

#endif


#endif // __HW_MMDC_REGISTERS_H__