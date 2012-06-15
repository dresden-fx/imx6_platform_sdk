/*
 * Copyright (C) 2012, Freescale Semiconductor, Inc. All Rights Reserved
 * THIS SOURCE CODE IS CONFIDENTIAL AND PROPRIETARY AND MAY NOT
 * BE USED OR DISTRIBUTED WITHOUT THE WRITTEN PERMISSION OF
 * Freescale Semiconductor, Inc.
 */

#ifndef __HW_DVFSC_REGISTERS_H__
#define __HW_DVFSC_REGISTERS_H__

#include "regs.h"

/*
 * i.MX6SL DVFSC registers defined in this header file.
 *
 * - HW_DVFSC_THRS - DVFS Thresholds
 * - HW_DVFSC_COUN - DVFS Counters thresholds
 * - HW_DVFSC_SIG1 - DVFS general purpose bits weight
 * - HW_DVFSC_DVFSSIG0 - DVFS general purpose bits weight
 * - HW_DVFSC_DVFSGPC0 - DVFS general purpose bit 0 weight counter
 * - HW_DVFSC_DVFSGPC1 - DVFS general purpose bit 1 weight counter
 * - HW_DVFSC_DVFSGPBT - DVFS general purpose bits enables
 * - HW_DVFSC_DVFSEMAC - DVFS EMAC settings
 * - HW_DVFSC_CNTR - DVFS Control
 * - HW_DVFSC_DVFSLTR0_0 - DVFS Load Tracking Register 0, portion 0
 * - HW_DVFSC_DVFSLTR0_1 - DVFS Load Tracking Register 0, portion 1
 * - HW_DVFSC_DVFSLTR1_0 - DVFS Load Tracking Register 1, portion 0
 * - HW_DVFSC_DVFSLTR1_1 - DVFS Load Tracking Register 3, portion 1
 * - HW_DVFSC_DVFSPT0 - DVFS pattern 0 length
 * - HW_DVFSC_DVFSPT1 - DVFS pattern 1 length
 * - HW_DVFSC_DVFSPT2 - DVFS pattern 2 length
 * - HW_DVFSC_DVFSPT3 - DVFS pattern 3 length
 *
 * - hw_dvfsc_t - Struct containing all module registers.
 */

//! @name Module base addresses
//@{
#ifndef REGS_DVFSC_BASE
#define HW_DVFSC_INSTANCE_COUNT (1) //!< Number of instances of the DVFSC module.
#define REGS_DVFSC_BASE (0x020dc000) //!< Base address for DVFSC.
#endif
//@}


//-------------------------------------------------------------------------------------------
// HW_DVFSC_THRS - DVFS Thresholds
//-------------------------------------------------------------------------------------------

#ifndef __LANGUAGE_ASM__
/*!
 * @brief HW_DVFSC_THRS - DVFS Thresholds (RW)
 *
 * Reset value: 0x0faf003e
 *

 */
typedef union _hw_dvfsc_thrs
{
    reg32_t U;
    struct _hw_dvfsc_thrs_bitfields
    {
        unsigned PNCTHR : 6; //!< [5:0] Panic threshold for load tracking
        unsigned RESERVED0 : 10; //!< [15:6] Reserved
        unsigned DWTHR : 6; //!< [21:16] Down threshold for load tracking
        unsigned UPTHR : 6; //!< [27:22] Upper threshold for load tracking
        unsigned RESERVED1 : 4; //!< [31:28] Reserved
    } B;
} hw_dvfsc_thrs_t;
#endif

/*
 * constants & macros for entire DVFSC_THRS register
 */
#define HW_DVFSC_THRS_ADDR      (REGS_DVFSC_BASE + 0x0)

#ifndef __LANGUAGE_ASM__
#define HW_DVFSC_THRS           (*(volatile hw_dvfsc_thrs_t *) HW_DVFSC_THRS_ADDR)
#define HW_DVFSC_THRS_RD()      (HW_DVFSC_THRS.U)
#define HW_DVFSC_THRS_WR(v)     (HW_DVFSC_THRS.U = (v))
#define HW_DVFSC_THRS_SET(v)    (HW_DVFSC_THRS_WR(HW_DVFSC_THRS_RD() |  (v)))
#define HW_DVFSC_THRS_CLR(v)    (HW_DVFSC_THRS_WR(HW_DVFSC_THRS_RD() & ~(v)))
#define HW_DVFSC_THRS_TOG(v)    (HW_DVFSC_THRS_WR(HW_DVFSC_THRS_RD() ^  (v)))
#endif

/*
 * constants & macros for individual DVFSC_THRS bitfields
 */

/* --- Register HW_DVFSC_THRS, field PNCTHR[5:0] (RW)
 *
 * Panic threshold for load tracking
 */

#define BP_DVFSC_THRS_PNCTHR      (0)      //!< Bit position for DVFSC_THRS_PNCTHR.
#define BM_DVFSC_THRS_PNCTHR      (0x0000003f)  //!< Bit mask for DVFSC_THRS_PNCTHR.

//! @brief Get value of DVFSC_THRS_PNCTHR from a register value.
#define BG_DVFSC_THRS_PNCTHR(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_DVFSC_THRS_PNCTHR) >> BP_DVFSC_THRS_PNCTHR)

//! @brief Format value for bitfield DVFSC_THRS_PNCTHR.
#define BF_DVFSC_THRS_PNCTHR(v)   ((__REG_VALUE_TYPE((v), reg32_t) << BP_DVFSC_THRS_PNCTHR) & BM_DVFSC_THRS_PNCTHR)

#ifndef __LANGUAGE_ASM__
//! @brief Set the PNCTHR field to a new value.
#define BW_DVFSC_THRS_PNCTHR(v)   (HW_DVFSC_THRS_WR((HW_DVFSC_THRS_RD() & ~BM_DVFSC_THRS_PNCTHR) | BF_DVFSC_THRS_PNCTHR(v)))
#endif

/* --- Register HW_DVFSC_THRS, field DWTHR[21:16] (RW)
 *
 * Down threshold for load tracking
 */

#define BP_DVFSC_THRS_DWTHR      (16)      //!< Bit position for DVFSC_THRS_DWTHR.
#define BM_DVFSC_THRS_DWTHR      (0x003f0000)  //!< Bit mask for DVFSC_THRS_DWTHR.

//! @brief Get value of DVFSC_THRS_DWTHR from a register value.
#define BG_DVFSC_THRS_DWTHR(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_DVFSC_THRS_DWTHR) >> BP_DVFSC_THRS_DWTHR)

//! @brief Format value for bitfield DVFSC_THRS_DWTHR.
#define BF_DVFSC_THRS_DWTHR(v)   ((__REG_VALUE_TYPE((v), reg32_t) << BP_DVFSC_THRS_DWTHR) & BM_DVFSC_THRS_DWTHR)

#ifndef __LANGUAGE_ASM__
//! @brief Set the DWTHR field to a new value.
#define BW_DVFSC_THRS_DWTHR(v)   (HW_DVFSC_THRS_WR((HW_DVFSC_THRS_RD() & ~BM_DVFSC_THRS_DWTHR) | BF_DVFSC_THRS_DWTHR(v)))
#endif

/* --- Register HW_DVFSC_THRS, field UPTHR[27:22] (RW)
 *
 * Upper threshold for load tracking
 */

#define BP_DVFSC_THRS_UPTHR      (22)      //!< Bit position for DVFSC_THRS_UPTHR.
#define BM_DVFSC_THRS_UPTHR      (0x0fc00000)  //!< Bit mask for DVFSC_THRS_UPTHR.

//! @brief Get value of DVFSC_THRS_UPTHR from a register value.
#define BG_DVFSC_THRS_UPTHR(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_DVFSC_THRS_UPTHR) >> BP_DVFSC_THRS_UPTHR)

//! @brief Format value for bitfield DVFSC_THRS_UPTHR.
#define BF_DVFSC_THRS_UPTHR(v)   ((__REG_VALUE_TYPE((v), reg32_t) << BP_DVFSC_THRS_UPTHR) & BM_DVFSC_THRS_UPTHR)

#ifndef __LANGUAGE_ASM__
//! @brief Set the UPTHR field to a new value.
#define BW_DVFSC_THRS_UPTHR(v)   (HW_DVFSC_THRS_WR((HW_DVFSC_THRS_RD() & ~BM_DVFSC_THRS_UPTHR) | BF_DVFSC_THRS_UPTHR(v)))
#endif

//-------------------------------------------------------------------------------------------
// HW_DVFSC_COUN - DVFS Counters thresholds
//-------------------------------------------------------------------------------------------

#ifndef __LANGUAGE_ASM__
/*!
 * @brief HW_DVFSC_COUN - DVFS Counters thresholds (RW)
 *
 * Reset value: 0x00070020
 *

 */
typedef union _hw_dvfsc_coun
{
    reg32_t U;
    struct _hw_dvfsc_coun_bitfields
    {
        unsigned UPCNT : 8; //!< [7:0] UP counter threshold value
        unsigned RESERVED0 : 8; //!< [15:8] Reserved
        unsigned DN_CNT : 8; //!< [23:16] Down counter threshold value
        unsigned RESERVED1 : 8; //!< [31:24] Reserved
    } B;
} hw_dvfsc_coun_t;
#endif

/*
 * constants & macros for entire DVFSC_COUN register
 */
#define HW_DVFSC_COUN_ADDR      (REGS_DVFSC_BASE + 0x4)

#ifndef __LANGUAGE_ASM__
#define HW_DVFSC_COUN           (*(volatile hw_dvfsc_coun_t *) HW_DVFSC_COUN_ADDR)
#define HW_DVFSC_COUN_RD()      (HW_DVFSC_COUN.U)
#define HW_DVFSC_COUN_WR(v)     (HW_DVFSC_COUN.U = (v))
#define HW_DVFSC_COUN_SET(v)    (HW_DVFSC_COUN_WR(HW_DVFSC_COUN_RD() |  (v)))
#define HW_DVFSC_COUN_CLR(v)    (HW_DVFSC_COUN_WR(HW_DVFSC_COUN_RD() & ~(v)))
#define HW_DVFSC_COUN_TOG(v)    (HW_DVFSC_COUN_WR(HW_DVFSC_COUN_RD() ^  (v)))
#endif

/*
 * constants & macros for individual DVFSC_COUN bitfields
 */

/* --- Register HW_DVFSC_COUN, field UPCNT[7:0] (RW)
 *
 * UP counter threshold value
 */

#define BP_DVFSC_COUN_UPCNT      (0)      //!< Bit position for DVFSC_COUN_UPCNT.
#define BM_DVFSC_COUN_UPCNT      (0x000000ff)  //!< Bit mask for DVFSC_COUN_UPCNT.

//! @brief Get value of DVFSC_COUN_UPCNT from a register value.
#define BG_DVFSC_COUN_UPCNT(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_DVFSC_COUN_UPCNT) >> BP_DVFSC_COUN_UPCNT)

//! @brief Format value for bitfield DVFSC_COUN_UPCNT.
#define BF_DVFSC_COUN_UPCNT(v)   ((__REG_VALUE_TYPE((v), reg32_t) << BP_DVFSC_COUN_UPCNT) & BM_DVFSC_COUN_UPCNT)

#ifndef __LANGUAGE_ASM__
//! @brief Set the UPCNT field to a new value.
#define BW_DVFSC_COUN_UPCNT(v)   (HW_DVFSC_COUN_WR((HW_DVFSC_COUN_RD() & ~BM_DVFSC_COUN_UPCNT) | BF_DVFSC_COUN_UPCNT(v)))
#endif

/* --- Register HW_DVFSC_COUN, field DN_CNT[23:16] (RW)
 *
 * Down counter threshold value
 */

#define BP_DVFSC_COUN_DN_CNT      (16)      //!< Bit position for DVFSC_COUN_DN_CNT.
#define BM_DVFSC_COUN_DN_CNT      (0x00ff0000)  //!< Bit mask for DVFSC_COUN_DN_CNT.

//! @brief Get value of DVFSC_COUN_DN_CNT from a register value.
#define BG_DVFSC_COUN_DN_CNT(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_DVFSC_COUN_DN_CNT) >> BP_DVFSC_COUN_DN_CNT)

//! @brief Format value for bitfield DVFSC_COUN_DN_CNT.
#define BF_DVFSC_COUN_DN_CNT(v)   ((__REG_VALUE_TYPE((v), reg32_t) << BP_DVFSC_COUN_DN_CNT) & BM_DVFSC_COUN_DN_CNT)

#ifndef __LANGUAGE_ASM__
//! @brief Set the DN_CNT field to a new value.
#define BW_DVFSC_COUN_DN_CNT(v)   (HW_DVFSC_COUN_WR((HW_DVFSC_COUN_RD() & ~BM_DVFSC_COUN_DN_CNT) | BF_DVFSC_COUN_DN_CNT(v)))
#endif

//-------------------------------------------------------------------------------------------
// HW_DVFSC_SIG1 - DVFS general purpose bits weight
//-------------------------------------------------------------------------------------------

#ifndef __LANGUAGE_ASM__
/*!
 * @brief HW_DVFSC_SIG1 - DVFS general purpose bits weight (RW)
 *
 * Reset value: 0x00000000
 *

 */
typedef union _hw_dvfsc_sig1
{
    reg32_t U;
    struct _hw_dvfsc_sig1_bitfields
    {
        unsigned RESERVED0 : 2; //!< [1:0] Reserved
        unsigned WSW6 : 3; //!< [4:2] General purpose load tracking signal weight dvfs_w_sig[6]
        unsigned WSW7 : 3; //!< [7:5] General purpose load tracking signal weight dvfs_w_sig[7]
        unsigned WSW8 : 3; //!< [10:8] General purpose load tracking signal weight dvfs_w_sig[8]
        unsigned WSW9 : 3; //!< [13:11] General purpose load tracking signal weight dvfs_w_sig[9]
        unsigned WSW10 : 3; //!< [16:14] General purpose load tracking signal weight dvfs_w_sig[10]
        unsigned WSW11 : 3; //!< [19:17] General purpose load tracking signal weight dvfs_w_sig[11]
        unsigned WSW12 : 3; //!< [22:20] General purpose load tracking signal weight dvfs_w_sig[12]
        unsigned WSW13 : 3; //!< [25:23] General purpose load tracking signal weight dvfs_w_sig[13]
        unsigned WSW14 : 3; //!< [28:26] General purpose load tracking signal weight dvfs_w_sig[14]
        unsigned WSW15 : 3; //!< [31:29] General purpose load tracking signal weight dvfs_w_sig[15]
    } B;
} hw_dvfsc_sig1_t;
#endif

/*
 * constants & macros for entire DVFSC_SIG1 register
 */
#define HW_DVFSC_SIG1_ADDR      (REGS_DVFSC_BASE + 0x8)

#ifndef __LANGUAGE_ASM__
#define HW_DVFSC_SIG1           (*(volatile hw_dvfsc_sig1_t *) HW_DVFSC_SIG1_ADDR)
#define HW_DVFSC_SIG1_RD()      (HW_DVFSC_SIG1.U)
#define HW_DVFSC_SIG1_WR(v)     (HW_DVFSC_SIG1.U = (v))
#define HW_DVFSC_SIG1_SET(v)    (HW_DVFSC_SIG1_WR(HW_DVFSC_SIG1_RD() |  (v)))
#define HW_DVFSC_SIG1_CLR(v)    (HW_DVFSC_SIG1_WR(HW_DVFSC_SIG1_RD() & ~(v)))
#define HW_DVFSC_SIG1_TOG(v)    (HW_DVFSC_SIG1_WR(HW_DVFSC_SIG1_RD() ^  (v)))
#endif

/*
 * constants & macros for individual DVFSC_SIG1 bitfields
 */

/* --- Register HW_DVFSC_SIG1, field WSW6[4:2] (RW)
 *
 * General purpose load tracking signal weight dvfs_w_sig[6]
 */

#define BP_DVFSC_SIG1_WSW6      (2)      //!< Bit position for DVFSC_SIG1_WSW6.
#define BM_DVFSC_SIG1_WSW6      (0x0000001c)  //!< Bit mask for DVFSC_SIG1_WSW6.

//! @brief Get value of DVFSC_SIG1_WSW6 from a register value.
#define BG_DVFSC_SIG1_WSW6(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_DVFSC_SIG1_WSW6) >> BP_DVFSC_SIG1_WSW6)

//! @brief Format value for bitfield DVFSC_SIG1_WSW6.
#define BF_DVFSC_SIG1_WSW6(v)   ((__REG_VALUE_TYPE((v), reg32_t) << BP_DVFSC_SIG1_WSW6) & BM_DVFSC_SIG1_WSW6)

#ifndef __LANGUAGE_ASM__
//! @brief Set the WSW6 field to a new value.
#define BW_DVFSC_SIG1_WSW6(v)   (HW_DVFSC_SIG1_WR((HW_DVFSC_SIG1_RD() & ~BM_DVFSC_SIG1_WSW6) | BF_DVFSC_SIG1_WSW6(v)))
#endif

/* --- Register HW_DVFSC_SIG1, field WSW7[7:5] (RW)
 *
 * General purpose load tracking signal weight dvfs_w_sig[7]
 */

#define BP_DVFSC_SIG1_WSW7      (5)      //!< Bit position for DVFSC_SIG1_WSW7.
#define BM_DVFSC_SIG1_WSW7      (0x000000e0)  //!< Bit mask for DVFSC_SIG1_WSW7.

//! @brief Get value of DVFSC_SIG1_WSW7 from a register value.
#define BG_DVFSC_SIG1_WSW7(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_DVFSC_SIG1_WSW7) >> BP_DVFSC_SIG1_WSW7)

//! @brief Format value for bitfield DVFSC_SIG1_WSW7.
#define BF_DVFSC_SIG1_WSW7(v)   ((__REG_VALUE_TYPE((v), reg32_t) << BP_DVFSC_SIG1_WSW7) & BM_DVFSC_SIG1_WSW7)

#ifndef __LANGUAGE_ASM__
//! @brief Set the WSW7 field to a new value.
#define BW_DVFSC_SIG1_WSW7(v)   (HW_DVFSC_SIG1_WR((HW_DVFSC_SIG1_RD() & ~BM_DVFSC_SIG1_WSW7) | BF_DVFSC_SIG1_WSW7(v)))
#endif

/* --- Register HW_DVFSC_SIG1, field WSW8[10:8] (RW)
 *
 * General purpose load tracking signal weight dvfs_w_sig[8]
 */

#define BP_DVFSC_SIG1_WSW8      (8)      //!< Bit position for DVFSC_SIG1_WSW8.
#define BM_DVFSC_SIG1_WSW8      (0x00000700)  //!< Bit mask for DVFSC_SIG1_WSW8.

//! @brief Get value of DVFSC_SIG1_WSW8 from a register value.
#define BG_DVFSC_SIG1_WSW8(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_DVFSC_SIG1_WSW8) >> BP_DVFSC_SIG1_WSW8)

//! @brief Format value for bitfield DVFSC_SIG1_WSW8.
#define BF_DVFSC_SIG1_WSW8(v)   ((__REG_VALUE_TYPE((v), reg32_t) << BP_DVFSC_SIG1_WSW8) & BM_DVFSC_SIG1_WSW8)

#ifndef __LANGUAGE_ASM__
//! @brief Set the WSW8 field to a new value.
#define BW_DVFSC_SIG1_WSW8(v)   (HW_DVFSC_SIG1_WR((HW_DVFSC_SIG1_RD() & ~BM_DVFSC_SIG1_WSW8) | BF_DVFSC_SIG1_WSW8(v)))
#endif

/* --- Register HW_DVFSC_SIG1, field WSW9[13:11] (RW)
 *
 * General purpose load tracking signal weight dvfs_w_sig[9]
 */

#define BP_DVFSC_SIG1_WSW9      (11)      //!< Bit position for DVFSC_SIG1_WSW9.
#define BM_DVFSC_SIG1_WSW9      (0x00003800)  //!< Bit mask for DVFSC_SIG1_WSW9.

//! @brief Get value of DVFSC_SIG1_WSW9 from a register value.
#define BG_DVFSC_SIG1_WSW9(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_DVFSC_SIG1_WSW9) >> BP_DVFSC_SIG1_WSW9)

//! @brief Format value for bitfield DVFSC_SIG1_WSW9.
#define BF_DVFSC_SIG1_WSW9(v)   ((__REG_VALUE_TYPE((v), reg32_t) << BP_DVFSC_SIG1_WSW9) & BM_DVFSC_SIG1_WSW9)

#ifndef __LANGUAGE_ASM__
//! @brief Set the WSW9 field to a new value.
#define BW_DVFSC_SIG1_WSW9(v)   (HW_DVFSC_SIG1_WR((HW_DVFSC_SIG1_RD() & ~BM_DVFSC_SIG1_WSW9) | BF_DVFSC_SIG1_WSW9(v)))
#endif

/* --- Register HW_DVFSC_SIG1, field WSW10[16:14] (RW)
 *
 * General purpose load tracking signal weight dvfs_w_sig[10]
 */

#define BP_DVFSC_SIG1_WSW10      (14)      //!< Bit position for DVFSC_SIG1_WSW10.
#define BM_DVFSC_SIG1_WSW10      (0x0001c000)  //!< Bit mask for DVFSC_SIG1_WSW10.

//! @brief Get value of DVFSC_SIG1_WSW10 from a register value.
#define BG_DVFSC_SIG1_WSW10(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_DVFSC_SIG1_WSW10) >> BP_DVFSC_SIG1_WSW10)

//! @brief Format value for bitfield DVFSC_SIG1_WSW10.
#define BF_DVFSC_SIG1_WSW10(v)   ((__REG_VALUE_TYPE((v), reg32_t) << BP_DVFSC_SIG1_WSW10) & BM_DVFSC_SIG1_WSW10)

#ifndef __LANGUAGE_ASM__
//! @brief Set the WSW10 field to a new value.
#define BW_DVFSC_SIG1_WSW10(v)   (HW_DVFSC_SIG1_WR((HW_DVFSC_SIG1_RD() & ~BM_DVFSC_SIG1_WSW10) | BF_DVFSC_SIG1_WSW10(v)))
#endif

/* --- Register HW_DVFSC_SIG1, field WSW11[19:17] (RW)
 *
 * General purpose load tracking signal weight dvfs_w_sig[11]
 */

#define BP_DVFSC_SIG1_WSW11      (17)      //!< Bit position for DVFSC_SIG1_WSW11.
#define BM_DVFSC_SIG1_WSW11      (0x000e0000)  //!< Bit mask for DVFSC_SIG1_WSW11.

//! @brief Get value of DVFSC_SIG1_WSW11 from a register value.
#define BG_DVFSC_SIG1_WSW11(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_DVFSC_SIG1_WSW11) >> BP_DVFSC_SIG1_WSW11)

//! @brief Format value for bitfield DVFSC_SIG1_WSW11.
#define BF_DVFSC_SIG1_WSW11(v)   ((__REG_VALUE_TYPE((v), reg32_t) << BP_DVFSC_SIG1_WSW11) & BM_DVFSC_SIG1_WSW11)

#ifndef __LANGUAGE_ASM__
//! @brief Set the WSW11 field to a new value.
#define BW_DVFSC_SIG1_WSW11(v)   (HW_DVFSC_SIG1_WR((HW_DVFSC_SIG1_RD() & ~BM_DVFSC_SIG1_WSW11) | BF_DVFSC_SIG1_WSW11(v)))
#endif

/* --- Register HW_DVFSC_SIG1, field WSW12[22:20] (RW)
 *
 * General purpose load tracking signal weight dvfs_w_sig[12]
 */

#define BP_DVFSC_SIG1_WSW12      (20)      //!< Bit position for DVFSC_SIG1_WSW12.
#define BM_DVFSC_SIG1_WSW12      (0x00700000)  //!< Bit mask for DVFSC_SIG1_WSW12.

//! @brief Get value of DVFSC_SIG1_WSW12 from a register value.
#define BG_DVFSC_SIG1_WSW12(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_DVFSC_SIG1_WSW12) >> BP_DVFSC_SIG1_WSW12)

//! @brief Format value for bitfield DVFSC_SIG1_WSW12.
#define BF_DVFSC_SIG1_WSW12(v)   ((__REG_VALUE_TYPE((v), reg32_t) << BP_DVFSC_SIG1_WSW12) & BM_DVFSC_SIG1_WSW12)

#ifndef __LANGUAGE_ASM__
//! @brief Set the WSW12 field to a new value.
#define BW_DVFSC_SIG1_WSW12(v)   (HW_DVFSC_SIG1_WR((HW_DVFSC_SIG1_RD() & ~BM_DVFSC_SIG1_WSW12) | BF_DVFSC_SIG1_WSW12(v)))
#endif

/* --- Register HW_DVFSC_SIG1, field WSW13[25:23] (RW)
 *
 * General purpose load tracking signal weight dvfs_w_sig[13]
 */

#define BP_DVFSC_SIG1_WSW13      (23)      //!< Bit position for DVFSC_SIG1_WSW13.
#define BM_DVFSC_SIG1_WSW13      (0x03800000)  //!< Bit mask for DVFSC_SIG1_WSW13.

//! @brief Get value of DVFSC_SIG1_WSW13 from a register value.
#define BG_DVFSC_SIG1_WSW13(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_DVFSC_SIG1_WSW13) >> BP_DVFSC_SIG1_WSW13)

//! @brief Format value for bitfield DVFSC_SIG1_WSW13.
#define BF_DVFSC_SIG1_WSW13(v)   ((__REG_VALUE_TYPE((v), reg32_t) << BP_DVFSC_SIG1_WSW13) & BM_DVFSC_SIG1_WSW13)

#ifndef __LANGUAGE_ASM__
//! @brief Set the WSW13 field to a new value.
#define BW_DVFSC_SIG1_WSW13(v)   (HW_DVFSC_SIG1_WR((HW_DVFSC_SIG1_RD() & ~BM_DVFSC_SIG1_WSW13) | BF_DVFSC_SIG1_WSW13(v)))
#endif

/* --- Register HW_DVFSC_SIG1, field WSW14[28:26] (RW)
 *
 * General purpose load tracking signal weight dvfs_w_sig[14]
 */

#define BP_DVFSC_SIG1_WSW14      (26)      //!< Bit position for DVFSC_SIG1_WSW14.
#define BM_DVFSC_SIG1_WSW14      (0x1c000000)  //!< Bit mask for DVFSC_SIG1_WSW14.

//! @brief Get value of DVFSC_SIG1_WSW14 from a register value.
#define BG_DVFSC_SIG1_WSW14(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_DVFSC_SIG1_WSW14) >> BP_DVFSC_SIG1_WSW14)

//! @brief Format value for bitfield DVFSC_SIG1_WSW14.
#define BF_DVFSC_SIG1_WSW14(v)   ((__REG_VALUE_TYPE((v), reg32_t) << BP_DVFSC_SIG1_WSW14) & BM_DVFSC_SIG1_WSW14)

#ifndef __LANGUAGE_ASM__
//! @brief Set the WSW14 field to a new value.
#define BW_DVFSC_SIG1_WSW14(v)   (HW_DVFSC_SIG1_WR((HW_DVFSC_SIG1_RD() & ~BM_DVFSC_SIG1_WSW14) | BF_DVFSC_SIG1_WSW14(v)))
#endif

/* --- Register HW_DVFSC_SIG1, field WSW15[31:29] (RW)
 *
 * General purpose load tracking signal weight dvfs_w_sig[15]
 */

#define BP_DVFSC_SIG1_WSW15      (29)      //!< Bit position for DVFSC_SIG1_WSW15.
#define BM_DVFSC_SIG1_WSW15      (0xe0000000)  //!< Bit mask for DVFSC_SIG1_WSW15.

//! @brief Get value of DVFSC_SIG1_WSW15 from a register value.
#define BG_DVFSC_SIG1_WSW15(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_DVFSC_SIG1_WSW15) >> BP_DVFSC_SIG1_WSW15)

//! @brief Format value for bitfield DVFSC_SIG1_WSW15.
#define BF_DVFSC_SIG1_WSW15(v)   ((__REG_VALUE_TYPE((v), reg32_t) << BP_DVFSC_SIG1_WSW15) & BM_DVFSC_SIG1_WSW15)

#ifndef __LANGUAGE_ASM__
//! @brief Set the WSW15 field to a new value.
#define BW_DVFSC_SIG1_WSW15(v)   (HW_DVFSC_SIG1_WR((HW_DVFSC_SIG1_RD() & ~BM_DVFSC_SIG1_WSW15) | BF_DVFSC_SIG1_WSW15(v)))
#endif

//-------------------------------------------------------------------------------------------
// HW_DVFSC_DVFSSIG0 - DVFS general purpose bits weight
//-------------------------------------------------------------------------------------------

#ifndef __LANGUAGE_ASM__
/*!
 * @brief HW_DVFSC_DVFSSIG0 - DVFS general purpose bits weight (RW)
 *
 * Reset value: 0x00000000
 *

 */
typedef union _hw_dvfsc_dvfssig0
{
    reg32_t U;
    struct _hw_dvfsc_dvfssig0_bitfields
    {
        unsigned WSW0 : 6; //!< [5:0] General purpose load tracking signal weight dvfs_w_sig[0].
        unsigned WSW1 : 6; //!< [11:6] General purpose load tracking signal weight dvfs_w_sig[1].
        unsigned RESERVED0 : 8; //!< [19:12] Reserved
        unsigned WSW2 : 3; //!< [22:20] General purpose load tracking signal weight dvfs_w_sig[2]
        unsigned WSW3 : 3; //!< [25:23] General purpose load tracking signal weight dvfs_w_sig[3]
        unsigned WSW4 : 3; //!< [28:26] General purpose load tracking signal weight dvfs_w_sig[4]
        unsigned WSW5 : 3; //!< [31:29] General purpose load tracking signal weight dvfs_w_sig[5]
    } B;
} hw_dvfsc_dvfssig0_t;
#endif

/*
 * constants & macros for entire DVFSC_DVFSSIG0 register
 */
#define HW_DVFSC_DVFSSIG0_ADDR      (REGS_DVFSC_BASE + 0xc)

#ifndef __LANGUAGE_ASM__
#define HW_DVFSC_DVFSSIG0           (*(volatile hw_dvfsc_dvfssig0_t *) HW_DVFSC_DVFSSIG0_ADDR)
#define HW_DVFSC_DVFSSIG0_RD()      (HW_DVFSC_DVFSSIG0.U)
#define HW_DVFSC_DVFSSIG0_WR(v)     (HW_DVFSC_DVFSSIG0.U = (v))
#define HW_DVFSC_DVFSSIG0_SET(v)    (HW_DVFSC_DVFSSIG0_WR(HW_DVFSC_DVFSSIG0_RD() |  (v)))
#define HW_DVFSC_DVFSSIG0_CLR(v)    (HW_DVFSC_DVFSSIG0_WR(HW_DVFSC_DVFSSIG0_RD() & ~(v)))
#define HW_DVFSC_DVFSSIG0_TOG(v)    (HW_DVFSC_DVFSSIG0_WR(HW_DVFSC_DVFSSIG0_RD() ^  (v)))
#endif

/*
 * constants & macros for individual DVFSC_DVFSSIG0 bitfields
 */

/* --- Register HW_DVFSC_DVFSSIG0, field WSW0[5:0] (RW)
 *
 * General purpose load tracking signal weight dvfs_w_sig[0]. This value is relevant during GPC0
 * counting period or when GPB0 is set.
 */

#define BP_DVFSC_DVFSSIG0_WSW0      (0)      //!< Bit position for DVFSC_DVFSSIG0_WSW0.
#define BM_DVFSC_DVFSSIG0_WSW0      (0x0000003f)  //!< Bit mask for DVFSC_DVFSSIG0_WSW0.

//! @brief Get value of DVFSC_DVFSSIG0_WSW0 from a register value.
#define BG_DVFSC_DVFSSIG0_WSW0(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_DVFSC_DVFSSIG0_WSW0) >> BP_DVFSC_DVFSSIG0_WSW0)

//! @brief Format value for bitfield DVFSC_DVFSSIG0_WSW0.
#define BF_DVFSC_DVFSSIG0_WSW0(v)   ((__REG_VALUE_TYPE((v), reg32_t) << BP_DVFSC_DVFSSIG0_WSW0) & BM_DVFSC_DVFSSIG0_WSW0)

#ifndef __LANGUAGE_ASM__
//! @brief Set the WSW0 field to a new value.
#define BW_DVFSC_DVFSSIG0_WSW0(v)   (HW_DVFSC_DVFSSIG0_WR((HW_DVFSC_DVFSSIG0_RD() & ~BM_DVFSC_DVFSSIG0_WSW0) | BF_DVFSC_DVFSSIG0_WSW0(v)))
#endif

/* --- Register HW_DVFSC_DVFSSIG0, field WSW1[11:6] (RW)
 *
 * General purpose load tracking signal weight dvfs_w_sig[1]. This value is relevant during GPC1
 * counting period or when GPB1 is set.
 */

#define BP_DVFSC_DVFSSIG0_WSW1      (6)      //!< Bit position for DVFSC_DVFSSIG0_WSW1.
#define BM_DVFSC_DVFSSIG0_WSW1      (0x00000fc0)  //!< Bit mask for DVFSC_DVFSSIG0_WSW1.

//! @brief Get value of DVFSC_DVFSSIG0_WSW1 from a register value.
#define BG_DVFSC_DVFSSIG0_WSW1(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_DVFSC_DVFSSIG0_WSW1) >> BP_DVFSC_DVFSSIG0_WSW1)

//! @brief Format value for bitfield DVFSC_DVFSSIG0_WSW1.
#define BF_DVFSC_DVFSSIG0_WSW1(v)   ((__REG_VALUE_TYPE((v), reg32_t) << BP_DVFSC_DVFSSIG0_WSW1) & BM_DVFSC_DVFSSIG0_WSW1)

#ifndef __LANGUAGE_ASM__
//! @brief Set the WSW1 field to a new value.
#define BW_DVFSC_DVFSSIG0_WSW1(v)   (HW_DVFSC_DVFSSIG0_WR((HW_DVFSC_DVFSSIG0_RD() & ~BM_DVFSC_DVFSSIG0_WSW1) | BF_DVFSC_DVFSSIG0_WSW1(v)))
#endif

/* --- Register HW_DVFSC_DVFSSIG0, field WSW2[22:20] (RW)
 *
 * General purpose load tracking signal weight dvfs_w_sig[2]
 */

#define BP_DVFSC_DVFSSIG0_WSW2      (20)      //!< Bit position for DVFSC_DVFSSIG0_WSW2.
#define BM_DVFSC_DVFSSIG0_WSW2      (0x00700000)  //!< Bit mask for DVFSC_DVFSSIG0_WSW2.

//! @brief Get value of DVFSC_DVFSSIG0_WSW2 from a register value.
#define BG_DVFSC_DVFSSIG0_WSW2(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_DVFSC_DVFSSIG0_WSW2) >> BP_DVFSC_DVFSSIG0_WSW2)

//! @brief Format value for bitfield DVFSC_DVFSSIG0_WSW2.
#define BF_DVFSC_DVFSSIG0_WSW2(v)   ((__REG_VALUE_TYPE((v), reg32_t) << BP_DVFSC_DVFSSIG0_WSW2) & BM_DVFSC_DVFSSIG0_WSW2)

#ifndef __LANGUAGE_ASM__
//! @brief Set the WSW2 field to a new value.
#define BW_DVFSC_DVFSSIG0_WSW2(v)   (HW_DVFSC_DVFSSIG0_WR((HW_DVFSC_DVFSSIG0_RD() & ~BM_DVFSC_DVFSSIG0_WSW2) | BF_DVFSC_DVFSSIG0_WSW2(v)))
#endif

/* --- Register HW_DVFSC_DVFSSIG0, field WSW3[25:23] (RW)
 *
 * General purpose load tracking signal weight dvfs_w_sig[3]
 */

#define BP_DVFSC_DVFSSIG0_WSW3      (23)      //!< Bit position for DVFSC_DVFSSIG0_WSW3.
#define BM_DVFSC_DVFSSIG0_WSW3      (0x03800000)  //!< Bit mask for DVFSC_DVFSSIG0_WSW3.

//! @brief Get value of DVFSC_DVFSSIG0_WSW3 from a register value.
#define BG_DVFSC_DVFSSIG0_WSW3(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_DVFSC_DVFSSIG0_WSW3) >> BP_DVFSC_DVFSSIG0_WSW3)

//! @brief Format value for bitfield DVFSC_DVFSSIG0_WSW3.
#define BF_DVFSC_DVFSSIG0_WSW3(v)   ((__REG_VALUE_TYPE((v), reg32_t) << BP_DVFSC_DVFSSIG0_WSW3) & BM_DVFSC_DVFSSIG0_WSW3)

#ifndef __LANGUAGE_ASM__
//! @brief Set the WSW3 field to a new value.
#define BW_DVFSC_DVFSSIG0_WSW3(v)   (HW_DVFSC_DVFSSIG0_WR((HW_DVFSC_DVFSSIG0_RD() & ~BM_DVFSC_DVFSSIG0_WSW3) | BF_DVFSC_DVFSSIG0_WSW3(v)))
#endif

/* --- Register HW_DVFSC_DVFSSIG0, field WSW4[28:26] (RW)
 *
 * General purpose load tracking signal weight dvfs_w_sig[4]
 */

#define BP_DVFSC_DVFSSIG0_WSW4      (26)      //!< Bit position for DVFSC_DVFSSIG0_WSW4.
#define BM_DVFSC_DVFSSIG0_WSW4      (0x1c000000)  //!< Bit mask for DVFSC_DVFSSIG0_WSW4.

//! @brief Get value of DVFSC_DVFSSIG0_WSW4 from a register value.
#define BG_DVFSC_DVFSSIG0_WSW4(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_DVFSC_DVFSSIG0_WSW4) >> BP_DVFSC_DVFSSIG0_WSW4)

//! @brief Format value for bitfield DVFSC_DVFSSIG0_WSW4.
#define BF_DVFSC_DVFSSIG0_WSW4(v)   ((__REG_VALUE_TYPE((v), reg32_t) << BP_DVFSC_DVFSSIG0_WSW4) & BM_DVFSC_DVFSSIG0_WSW4)

#ifndef __LANGUAGE_ASM__
//! @brief Set the WSW4 field to a new value.
#define BW_DVFSC_DVFSSIG0_WSW4(v)   (HW_DVFSC_DVFSSIG0_WR((HW_DVFSC_DVFSSIG0_RD() & ~BM_DVFSC_DVFSSIG0_WSW4) | BF_DVFSC_DVFSSIG0_WSW4(v)))
#endif

/* --- Register HW_DVFSC_DVFSSIG0, field WSW5[31:29] (RW)
 *
 * General purpose load tracking signal weight dvfs_w_sig[5]
 */

#define BP_DVFSC_DVFSSIG0_WSW5      (29)      //!< Bit position for DVFSC_DVFSSIG0_WSW5.
#define BM_DVFSC_DVFSSIG0_WSW5      (0xe0000000)  //!< Bit mask for DVFSC_DVFSSIG0_WSW5.

//! @brief Get value of DVFSC_DVFSSIG0_WSW5 from a register value.
#define BG_DVFSC_DVFSSIG0_WSW5(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_DVFSC_DVFSSIG0_WSW5) >> BP_DVFSC_DVFSSIG0_WSW5)

//! @brief Format value for bitfield DVFSC_DVFSSIG0_WSW5.
#define BF_DVFSC_DVFSSIG0_WSW5(v)   ((__REG_VALUE_TYPE((v), reg32_t) << BP_DVFSC_DVFSSIG0_WSW5) & BM_DVFSC_DVFSSIG0_WSW5)

#ifndef __LANGUAGE_ASM__
//! @brief Set the WSW5 field to a new value.
#define BW_DVFSC_DVFSSIG0_WSW5(v)   (HW_DVFSC_DVFSSIG0_WR((HW_DVFSC_DVFSSIG0_RD() & ~BM_DVFSC_DVFSSIG0_WSW5) | BF_DVFSC_DVFSSIG0_WSW5(v)))
#endif

//-------------------------------------------------------------------------------------------
// HW_DVFSC_DVFSGPC0 - DVFS general purpose bit 0 weight counter
//-------------------------------------------------------------------------------------------

#ifndef __LANGUAGE_ASM__
/*!
 * @brief HW_DVFSC_DVFSGPC0 - DVFS general purpose bit 0 weight counter (RW)
 *
 * Reset value: 0x00000000
 *
 * DVFS general purpose bits weight counter.
 */
typedef union _hw_dvfsc_dvfsgpc0
{
    reg32_t U;
    struct _hw_dvfsc_dvfsgpc0_bitfields
    {
        unsigned GPBC0 : 17; //!< [16:0] GPBC0 - General Purpose bits Counter 0 During period of this counter the GeP bit 0 will be set and WSW0 will be added to the calculations.
        unsigned RESERVED0 : 13; //!< [29:17] reserved
        unsigned C0ACT : 1; //!< [30] C0ACT - Counter 0 active indicator
        unsigned C0STRT : 1; //!< [31] C0STRT - Counter 0 start Setting of this bit will initialize down counting of the GPC0 value.
    } B;
} hw_dvfsc_dvfsgpc0_t;
#endif

/*
 * constants & macros for entire DVFSC_DVFSGPC0 register
 */
#define HW_DVFSC_DVFSGPC0_ADDR      (REGS_DVFSC_BASE + 0x10)

#ifndef __LANGUAGE_ASM__
#define HW_DVFSC_DVFSGPC0           (*(volatile hw_dvfsc_dvfsgpc0_t *) HW_DVFSC_DVFSGPC0_ADDR)
#define HW_DVFSC_DVFSGPC0_RD()      (HW_DVFSC_DVFSGPC0.U)
#define HW_DVFSC_DVFSGPC0_WR(v)     (HW_DVFSC_DVFSGPC0.U = (v))
#define HW_DVFSC_DVFSGPC0_SET(v)    (HW_DVFSC_DVFSGPC0_WR(HW_DVFSC_DVFSGPC0_RD() |  (v)))
#define HW_DVFSC_DVFSGPC0_CLR(v)    (HW_DVFSC_DVFSGPC0_WR(HW_DVFSC_DVFSGPC0_RD() & ~(v)))
#define HW_DVFSC_DVFSGPC0_TOG(v)    (HW_DVFSC_DVFSGPC0_WR(HW_DVFSC_DVFSGPC0_RD() ^  (v)))
#endif

/*
 * constants & macros for individual DVFSC_DVFSGPC0 bitfields
 */

/* --- Register HW_DVFSC_DVFSGPC0, field GPBC0[16:0] (RW)
 *
 * GPBC0 - General Purpose bits Counter 0 During period of this counter the GeP bit 0 will be set
 * and WSW0 will be added to the calculations.
 */

#define BP_DVFSC_DVFSGPC0_GPBC0      (0)      //!< Bit position for DVFSC_DVFSGPC0_GPBC0.
#define BM_DVFSC_DVFSGPC0_GPBC0      (0x0001ffff)  //!< Bit mask for DVFSC_DVFSGPC0_GPBC0.

//! @brief Get value of DVFSC_DVFSGPC0_GPBC0 from a register value.
#define BG_DVFSC_DVFSGPC0_GPBC0(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_DVFSC_DVFSGPC0_GPBC0) >> BP_DVFSC_DVFSGPC0_GPBC0)

//! @brief Format value for bitfield DVFSC_DVFSGPC0_GPBC0.
#define BF_DVFSC_DVFSGPC0_GPBC0(v)   ((__REG_VALUE_TYPE((v), reg32_t) << BP_DVFSC_DVFSGPC0_GPBC0) & BM_DVFSC_DVFSGPC0_GPBC0)

#ifndef __LANGUAGE_ASM__
//! @brief Set the GPBC0 field to a new value.
#define BW_DVFSC_DVFSGPC0_GPBC0(v)   (HW_DVFSC_DVFSGPC0_WR((HW_DVFSC_DVFSGPC0_RD() & ~BM_DVFSC_DVFSGPC0_GPBC0) | BF_DVFSC_DVFSGPC0_GPBC0(v)))
#endif

/* --- Register HW_DVFSC_DVFSGPC0, field C0ACT[30] (RO)
 *
 * C0ACT - Counter 0 active indicator
 *
 * Values:
 * 0 - General Purpose bit0 counter reached value of "0" - the instead of WSW0, "0" (zero) is provided to
 *     DVFS calculation
 * 1 - General Purpose bit0 counter didn't reach value of "0" - the WSW0 is provided to DVFS calculation
 */

#define BP_DVFSC_DVFSGPC0_C0ACT      (30)      //!< Bit position for DVFSC_DVFSGPC0_C0ACT.
#define BM_DVFSC_DVFSGPC0_C0ACT      (0x40000000)  //!< Bit mask for DVFSC_DVFSGPC0_C0ACT.

//! @brief Get value of DVFSC_DVFSGPC0_C0ACT from a register value.
#define BG_DVFSC_DVFSGPC0_C0ACT(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_DVFSC_DVFSGPC0_C0ACT) >> BP_DVFSC_DVFSGPC0_C0ACT)


/* --- Register HW_DVFSC_DVFSGPC0, field C0STRT[31] (RW)
 *
 * C0STRT - Counter 0 start Setting of this bit will initialize down counting of the GPC0 value. Bit
 * is self-cleared next cycle after setting. Any setting of this bit will re-start GPC0 counter to
 * the GPC0 value. GPB0 bit disables (overrides) GPC0 counter - WSW0 weight is applicable
 * continuously
 */

#define BP_DVFSC_DVFSGPC0_C0STRT      (31)      //!< Bit position for DVFSC_DVFSGPC0_C0STRT.
#define BM_DVFSC_DVFSGPC0_C0STRT      (0x80000000)  //!< Bit mask for DVFSC_DVFSGPC0_C0STRT.

//! @brief Get value of DVFSC_DVFSGPC0_C0STRT from a register value.
#define BG_DVFSC_DVFSGPC0_C0STRT(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_DVFSC_DVFSGPC0_C0STRT) >> BP_DVFSC_DVFSGPC0_C0STRT)

//! @brief Format value for bitfield DVFSC_DVFSGPC0_C0STRT.
#define BF_DVFSC_DVFSGPC0_C0STRT(v)   ((__REG_VALUE_TYPE((v), reg32_t) << BP_DVFSC_DVFSGPC0_C0STRT) & BM_DVFSC_DVFSGPC0_C0STRT)

#ifndef __LANGUAGE_ASM__
//! @brief Set the C0STRT field to a new value.
#define BW_DVFSC_DVFSGPC0_C0STRT(v)   (HW_DVFSC_DVFSGPC0_WR((HW_DVFSC_DVFSGPC0_RD() & ~BM_DVFSC_DVFSGPC0_C0STRT) | BF_DVFSC_DVFSGPC0_C0STRT(v)))
#endif

//-------------------------------------------------------------------------------------------
// HW_DVFSC_DVFSGPC1 - DVFS general purpose bit 1 weight counter
//-------------------------------------------------------------------------------------------

#ifndef __LANGUAGE_ASM__
/*!
 * @brief HW_DVFSC_DVFSGPC1 - DVFS general purpose bit 1 weight counter (RW)
 *
 * Reset value: 0x00000000
 *
 * DVFS general purpose bits weight counter1.
 */
typedef union _hw_dvfsc_dvfsgpc1
{
    reg32_t U;
    struct _hw_dvfsc_dvfsgpc1_bitfields
    {
        unsigned GPBC1 : 17; //!< [16:0] GPBC1 - General Purpose bits Counter 1 During period of this counter the GeP bit 1 will be set and WSW1 will be added to the calculations.
        unsigned RESERVED0 : 13; //!< [29:17] reserved
        unsigned C1ACT : 1; //!< [30] C1ACT - Counter 1 active indicator
        unsigned C1STRT : 1; //!< [31] C1STRT - Counter 1start Setting of this bit will initialize down counting of the GPC1 value.
    } B;
} hw_dvfsc_dvfsgpc1_t;
#endif

/*
 * constants & macros for entire DVFSC_DVFSGPC1 register
 */
#define HW_DVFSC_DVFSGPC1_ADDR      (REGS_DVFSC_BASE + 0x14)

#ifndef __LANGUAGE_ASM__
#define HW_DVFSC_DVFSGPC1           (*(volatile hw_dvfsc_dvfsgpc1_t *) HW_DVFSC_DVFSGPC1_ADDR)
#define HW_DVFSC_DVFSGPC1_RD()      (HW_DVFSC_DVFSGPC1.U)
#define HW_DVFSC_DVFSGPC1_WR(v)     (HW_DVFSC_DVFSGPC1.U = (v))
#define HW_DVFSC_DVFSGPC1_SET(v)    (HW_DVFSC_DVFSGPC1_WR(HW_DVFSC_DVFSGPC1_RD() |  (v)))
#define HW_DVFSC_DVFSGPC1_CLR(v)    (HW_DVFSC_DVFSGPC1_WR(HW_DVFSC_DVFSGPC1_RD() & ~(v)))
#define HW_DVFSC_DVFSGPC1_TOG(v)    (HW_DVFSC_DVFSGPC1_WR(HW_DVFSC_DVFSGPC1_RD() ^  (v)))
#endif

/*
 * constants & macros for individual DVFSC_DVFSGPC1 bitfields
 */

/* --- Register HW_DVFSC_DVFSGPC1, field GPBC1[16:0] (RW)
 *
 * GPBC1 - General Purpose bits Counter 1 During period of this counter the GeP bit 1 will be set
 * and WSW1 will be added to the calculations.
 */

#define BP_DVFSC_DVFSGPC1_GPBC1      (0)      //!< Bit position for DVFSC_DVFSGPC1_GPBC1.
#define BM_DVFSC_DVFSGPC1_GPBC1      (0x0001ffff)  //!< Bit mask for DVFSC_DVFSGPC1_GPBC1.

//! @brief Get value of DVFSC_DVFSGPC1_GPBC1 from a register value.
#define BG_DVFSC_DVFSGPC1_GPBC1(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_DVFSC_DVFSGPC1_GPBC1) >> BP_DVFSC_DVFSGPC1_GPBC1)

//! @brief Format value for bitfield DVFSC_DVFSGPC1_GPBC1.
#define BF_DVFSC_DVFSGPC1_GPBC1(v)   ((__REG_VALUE_TYPE((v), reg32_t) << BP_DVFSC_DVFSGPC1_GPBC1) & BM_DVFSC_DVFSGPC1_GPBC1)

#ifndef __LANGUAGE_ASM__
//! @brief Set the GPBC1 field to a new value.
#define BW_DVFSC_DVFSGPC1_GPBC1(v)   (HW_DVFSC_DVFSGPC1_WR((HW_DVFSC_DVFSGPC1_RD() & ~BM_DVFSC_DVFSGPC1_GPBC1) | BF_DVFSC_DVFSGPC1_GPBC1(v)))
#endif

/* --- Register HW_DVFSC_DVFSGPC1, field C1ACT[30] (RO)
 *
 * C1ACT - Counter 1 active indicator
 *
 * Values:
 * 0 - General Purpose bit1 counter reached value of "0" - the instead of WSW1, "0" (zero) is provided to
 *     DVFS calculation
 * 1 - General Purpose bit1 counter didn't reach value of "0" - the WSW1 is provided to DVFS calculation
 */

#define BP_DVFSC_DVFSGPC1_C1ACT      (30)      //!< Bit position for DVFSC_DVFSGPC1_C1ACT.
#define BM_DVFSC_DVFSGPC1_C1ACT      (0x40000000)  //!< Bit mask for DVFSC_DVFSGPC1_C1ACT.

//! @brief Get value of DVFSC_DVFSGPC1_C1ACT from a register value.
#define BG_DVFSC_DVFSGPC1_C1ACT(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_DVFSC_DVFSGPC1_C1ACT) >> BP_DVFSC_DVFSGPC1_C1ACT)


/* --- Register HW_DVFSC_DVFSGPC1, field C1STRT[31] (RW)
 *
 * C1STRT - Counter 1start Setting of this bit will initialize down counting of the GPC1 value. Bit
 * is self-cleared next cycle after setting. Any setting of this bit will re-start GPC1 counter to
 * the GPC1 value. GPB1 bit disables (overrides) GPC1 counter - WSW1 weight is applicable
 * continuously
 */

#define BP_DVFSC_DVFSGPC1_C1STRT      (31)      //!< Bit position for DVFSC_DVFSGPC1_C1STRT.
#define BM_DVFSC_DVFSGPC1_C1STRT      (0x80000000)  //!< Bit mask for DVFSC_DVFSGPC1_C1STRT.

//! @brief Get value of DVFSC_DVFSGPC1_C1STRT from a register value.
#define BG_DVFSC_DVFSGPC1_C1STRT(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_DVFSC_DVFSGPC1_C1STRT) >> BP_DVFSC_DVFSGPC1_C1STRT)

//! @brief Format value for bitfield DVFSC_DVFSGPC1_C1STRT.
#define BF_DVFSC_DVFSGPC1_C1STRT(v)   ((__REG_VALUE_TYPE((v), reg32_t) << BP_DVFSC_DVFSGPC1_C1STRT) & BM_DVFSC_DVFSGPC1_C1STRT)

#ifndef __LANGUAGE_ASM__
//! @brief Set the C1STRT field to a new value.
#define BW_DVFSC_DVFSGPC1_C1STRT(v)   (HW_DVFSC_DVFSGPC1_WR((HW_DVFSC_DVFSGPC1_RD() & ~BM_DVFSC_DVFSGPC1_C1STRT) | BF_DVFSC_DVFSGPC1_C1STRT(v)))
#endif

//-------------------------------------------------------------------------------------------
// HW_DVFSC_DVFSGPBT - DVFS general purpose bits enables
//-------------------------------------------------------------------------------------------

#ifndef __LANGUAGE_ASM__
/*!
 * @brief HW_DVFSC_DVFSGPBT - DVFS general purpose bits enables (RW)
 *
 * Reset value: 0x00000000
 *

 */
typedef union _hw_dvfsc_dvfsgpbt
{
    reg32_t U;
    struct _hw_dvfsc_dvfsgpbt_bitfields
    {
        unsigned GPB0 : 1; //!< [0] General purpose bit 0.
        unsigned GPB1 : 1; //!< [1] General purpose bit 1.
        unsigned GPB2 : 1; //!< [2] General purpose bit 2.
        unsigned GPB3 : 1; //!< [3] General purpose bit 3.
        unsigned GPB4 : 1; //!< [4] General purpose bit 4.
        unsigned GPB5 : 1; //!< [5] General purpose bit 5.
        unsigned GPB6 : 1; //!< [6] General purpose bit 6.
        unsigned GPB7 : 1; //!< [7] General purpose bit 7.
        unsigned GPB8 : 1; //!< [8] General purpose bit 8.
        unsigned GPB9 : 1; //!< [9] General purpose bit 9.
        unsigned GPB10 : 1; //!< [10] General purpose bit 10.
        unsigned GPB11 : 1; //!< [11] General purpose bit 11.
        unsigned GPB12 : 1; //!< [12] General purpose bit 12.
        unsigned GPB13 : 1; //!< [13] General purpose bit 13.
        unsigned GPB14 : 1; //!< [14] General purpose bit 14.
        unsigned GPB15 : 1; //!< [15] General purpose bit 15.
        unsigned RESERVED0 : 16; //!< [31:16] reserved
    } B;
} hw_dvfsc_dvfsgpbt_t;
#endif

/*
 * constants & macros for entire DVFSC_DVFSGPBT register
 */
#define HW_DVFSC_DVFSGPBT_ADDR      (REGS_DVFSC_BASE + 0x18)

#ifndef __LANGUAGE_ASM__
#define HW_DVFSC_DVFSGPBT           (*(volatile hw_dvfsc_dvfsgpbt_t *) HW_DVFSC_DVFSGPBT_ADDR)
#define HW_DVFSC_DVFSGPBT_RD()      (HW_DVFSC_DVFSGPBT.U)
#define HW_DVFSC_DVFSGPBT_WR(v)     (HW_DVFSC_DVFSGPBT.U = (v))
#define HW_DVFSC_DVFSGPBT_SET(v)    (HW_DVFSC_DVFSGPBT_WR(HW_DVFSC_DVFSGPBT_RD() |  (v)))
#define HW_DVFSC_DVFSGPBT_CLR(v)    (HW_DVFSC_DVFSGPBT_WR(HW_DVFSC_DVFSGPBT_RD() & ~(v)))
#define HW_DVFSC_DVFSGPBT_TOG(v)    (HW_DVFSC_DVFSGPBT_WR(HW_DVFSC_DVFSGPBT_RD() ^  (v)))
#endif

/*
 * constants & macros for individual DVFSC_DVFSGPBT bitfields
 */

/* --- Register HW_DVFSC_DVFSGPBT, field GPB0[0] (RW)
 *
 * General purpose bit 0. Its weight is set by WSW0 value. IF set (1), the GPBC0 operation is
 * disregarded, WSW0 value is applied continuously.
 */

#define BP_DVFSC_DVFSGPBT_GPB0      (0)      //!< Bit position for DVFSC_DVFSGPBT_GPB0.
#define BM_DVFSC_DVFSGPBT_GPB0      (0x00000001)  //!< Bit mask for DVFSC_DVFSGPBT_GPB0.

//! @brief Get value of DVFSC_DVFSGPBT_GPB0 from a register value.
#define BG_DVFSC_DVFSGPBT_GPB0(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_DVFSC_DVFSGPBT_GPB0) >> BP_DVFSC_DVFSGPBT_GPB0)

//! @brief Format value for bitfield DVFSC_DVFSGPBT_GPB0.
#define BF_DVFSC_DVFSGPBT_GPB0(v)   ((__REG_VALUE_TYPE((v), reg32_t) << BP_DVFSC_DVFSGPBT_GPB0) & BM_DVFSC_DVFSGPBT_GPB0)

#ifndef __LANGUAGE_ASM__
//! @brief Set the GPB0 field to a new value.
#define BW_DVFSC_DVFSGPBT_GPB0(v)   (HW_DVFSC_DVFSGPBT_WR((HW_DVFSC_DVFSGPBT_RD() & ~BM_DVFSC_DVFSGPBT_GPB0) | BF_DVFSC_DVFSGPBT_GPB0(v)))
#endif

/* --- Register HW_DVFSC_DVFSGPBT, field GPB1[1] (RW)
 *
 * General purpose bit 1. Its weight is set by WSW1 value. IF set (1), the GPBC1 operation is
 * disregarded, WSW1 value is applied continuously.
 */

#define BP_DVFSC_DVFSGPBT_GPB1      (1)      //!< Bit position for DVFSC_DVFSGPBT_GPB1.
#define BM_DVFSC_DVFSGPBT_GPB1      (0x00000002)  //!< Bit mask for DVFSC_DVFSGPBT_GPB1.

//! @brief Get value of DVFSC_DVFSGPBT_GPB1 from a register value.
#define BG_DVFSC_DVFSGPBT_GPB1(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_DVFSC_DVFSGPBT_GPB1) >> BP_DVFSC_DVFSGPBT_GPB1)

//! @brief Format value for bitfield DVFSC_DVFSGPBT_GPB1.
#define BF_DVFSC_DVFSGPBT_GPB1(v)   ((__REG_VALUE_TYPE((v), reg32_t) << BP_DVFSC_DVFSGPBT_GPB1) & BM_DVFSC_DVFSGPBT_GPB1)

#ifndef __LANGUAGE_ASM__
//! @brief Set the GPB1 field to a new value.
#define BW_DVFSC_DVFSGPBT_GPB1(v)   (HW_DVFSC_DVFSGPBT_WR((HW_DVFSC_DVFSGPBT_RD() & ~BM_DVFSC_DVFSGPBT_GPB1) | BF_DVFSC_DVFSGPBT_GPB1(v)))
#endif

/* --- Register HW_DVFSC_DVFSGPBT, field GPB2[2] (RW)
 *
 * General purpose bit 2. Its weight is set by WSW2 value.
 */

#define BP_DVFSC_DVFSGPBT_GPB2      (2)      //!< Bit position for DVFSC_DVFSGPBT_GPB2.
#define BM_DVFSC_DVFSGPBT_GPB2      (0x00000004)  //!< Bit mask for DVFSC_DVFSGPBT_GPB2.

//! @brief Get value of DVFSC_DVFSGPBT_GPB2 from a register value.
#define BG_DVFSC_DVFSGPBT_GPB2(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_DVFSC_DVFSGPBT_GPB2) >> BP_DVFSC_DVFSGPBT_GPB2)

//! @brief Format value for bitfield DVFSC_DVFSGPBT_GPB2.
#define BF_DVFSC_DVFSGPBT_GPB2(v)   ((__REG_VALUE_TYPE((v), reg32_t) << BP_DVFSC_DVFSGPBT_GPB2) & BM_DVFSC_DVFSGPBT_GPB2)

#ifndef __LANGUAGE_ASM__
//! @brief Set the GPB2 field to a new value.
#define BW_DVFSC_DVFSGPBT_GPB2(v)   (HW_DVFSC_DVFSGPBT_WR((HW_DVFSC_DVFSGPBT_RD() & ~BM_DVFSC_DVFSGPBT_GPB2) | BF_DVFSC_DVFSGPBT_GPB2(v)))
#endif

/* --- Register HW_DVFSC_DVFSGPBT, field GPB3[3] (RW)
 *
 * General purpose bit 3. Its weight is set by WSW3 value.
 */

#define BP_DVFSC_DVFSGPBT_GPB3      (3)      //!< Bit position for DVFSC_DVFSGPBT_GPB3.
#define BM_DVFSC_DVFSGPBT_GPB3      (0x00000008)  //!< Bit mask for DVFSC_DVFSGPBT_GPB3.

//! @brief Get value of DVFSC_DVFSGPBT_GPB3 from a register value.
#define BG_DVFSC_DVFSGPBT_GPB3(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_DVFSC_DVFSGPBT_GPB3) >> BP_DVFSC_DVFSGPBT_GPB3)

//! @brief Format value for bitfield DVFSC_DVFSGPBT_GPB3.
#define BF_DVFSC_DVFSGPBT_GPB3(v)   ((__REG_VALUE_TYPE((v), reg32_t) << BP_DVFSC_DVFSGPBT_GPB3) & BM_DVFSC_DVFSGPBT_GPB3)

#ifndef __LANGUAGE_ASM__
//! @brief Set the GPB3 field to a new value.
#define BW_DVFSC_DVFSGPBT_GPB3(v)   (HW_DVFSC_DVFSGPBT_WR((HW_DVFSC_DVFSGPBT_RD() & ~BM_DVFSC_DVFSGPBT_GPB3) | BF_DVFSC_DVFSGPBT_GPB3(v)))
#endif

/* --- Register HW_DVFSC_DVFSGPBT, field GPB4[4] (RW)
 *
 * General purpose bit 4. Its weight is set by WSW4 value.
 */

#define BP_DVFSC_DVFSGPBT_GPB4      (4)      //!< Bit position for DVFSC_DVFSGPBT_GPB4.
#define BM_DVFSC_DVFSGPBT_GPB4      (0x00000010)  //!< Bit mask for DVFSC_DVFSGPBT_GPB4.

//! @brief Get value of DVFSC_DVFSGPBT_GPB4 from a register value.
#define BG_DVFSC_DVFSGPBT_GPB4(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_DVFSC_DVFSGPBT_GPB4) >> BP_DVFSC_DVFSGPBT_GPB4)

//! @brief Format value for bitfield DVFSC_DVFSGPBT_GPB4.
#define BF_DVFSC_DVFSGPBT_GPB4(v)   ((__REG_VALUE_TYPE((v), reg32_t) << BP_DVFSC_DVFSGPBT_GPB4) & BM_DVFSC_DVFSGPBT_GPB4)

#ifndef __LANGUAGE_ASM__
//! @brief Set the GPB4 field to a new value.
#define BW_DVFSC_DVFSGPBT_GPB4(v)   (HW_DVFSC_DVFSGPBT_WR((HW_DVFSC_DVFSGPBT_RD() & ~BM_DVFSC_DVFSGPBT_GPB4) | BF_DVFSC_DVFSGPBT_GPB4(v)))
#endif

/* --- Register HW_DVFSC_DVFSGPBT, field GPB5[5] (RW)
 *
 * General purpose bit 5. Its weight is set by WSW5 value.
 */

#define BP_DVFSC_DVFSGPBT_GPB5      (5)      //!< Bit position for DVFSC_DVFSGPBT_GPB5.
#define BM_DVFSC_DVFSGPBT_GPB5      (0x00000020)  //!< Bit mask for DVFSC_DVFSGPBT_GPB5.

//! @brief Get value of DVFSC_DVFSGPBT_GPB5 from a register value.
#define BG_DVFSC_DVFSGPBT_GPB5(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_DVFSC_DVFSGPBT_GPB5) >> BP_DVFSC_DVFSGPBT_GPB5)

//! @brief Format value for bitfield DVFSC_DVFSGPBT_GPB5.
#define BF_DVFSC_DVFSGPBT_GPB5(v)   ((__REG_VALUE_TYPE((v), reg32_t) << BP_DVFSC_DVFSGPBT_GPB5) & BM_DVFSC_DVFSGPBT_GPB5)

#ifndef __LANGUAGE_ASM__
//! @brief Set the GPB5 field to a new value.
#define BW_DVFSC_DVFSGPBT_GPB5(v)   (HW_DVFSC_DVFSGPBT_WR((HW_DVFSC_DVFSGPBT_RD() & ~BM_DVFSC_DVFSGPBT_GPB5) | BF_DVFSC_DVFSGPBT_GPB5(v)))
#endif

/* --- Register HW_DVFSC_DVFSGPBT, field GPB6[6] (RW)
 *
 * General purpose bit 6. Its weight is set by WSW6 value.
 */

#define BP_DVFSC_DVFSGPBT_GPB6      (6)      //!< Bit position for DVFSC_DVFSGPBT_GPB6.
#define BM_DVFSC_DVFSGPBT_GPB6      (0x00000040)  //!< Bit mask for DVFSC_DVFSGPBT_GPB6.

//! @brief Get value of DVFSC_DVFSGPBT_GPB6 from a register value.
#define BG_DVFSC_DVFSGPBT_GPB6(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_DVFSC_DVFSGPBT_GPB6) >> BP_DVFSC_DVFSGPBT_GPB6)

//! @brief Format value for bitfield DVFSC_DVFSGPBT_GPB6.
#define BF_DVFSC_DVFSGPBT_GPB6(v)   ((__REG_VALUE_TYPE((v), reg32_t) << BP_DVFSC_DVFSGPBT_GPB6) & BM_DVFSC_DVFSGPBT_GPB6)

#ifndef __LANGUAGE_ASM__
//! @brief Set the GPB6 field to a new value.
#define BW_DVFSC_DVFSGPBT_GPB6(v)   (HW_DVFSC_DVFSGPBT_WR((HW_DVFSC_DVFSGPBT_RD() & ~BM_DVFSC_DVFSGPBT_GPB6) | BF_DVFSC_DVFSGPBT_GPB6(v)))
#endif

/* --- Register HW_DVFSC_DVFSGPBT, field GPB7[7] (RW)
 *
 * General purpose bit 7. Its weight is set by WSW7 value.
 */

#define BP_DVFSC_DVFSGPBT_GPB7      (7)      //!< Bit position for DVFSC_DVFSGPBT_GPB7.
#define BM_DVFSC_DVFSGPBT_GPB7      (0x00000080)  //!< Bit mask for DVFSC_DVFSGPBT_GPB7.

//! @brief Get value of DVFSC_DVFSGPBT_GPB7 from a register value.
#define BG_DVFSC_DVFSGPBT_GPB7(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_DVFSC_DVFSGPBT_GPB7) >> BP_DVFSC_DVFSGPBT_GPB7)

//! @brief Format value for bitfield DVFSC_DVFSGPBT_GPB7.
#define BF_DVFSC_DVFSGPBT_GPB7(v)   ((__REG_VALUE_TYPE((v), reg32_t) << BP_DVFSC_DVFSGPBT_GPB7) & BM_DVFSC_DVFSGPBT_GPB7)

#ifndef __LANGUAGE_ASM__
//! @brief Set the GPB7 field to a new value.
#define BW_DVFSC_DVFSGPBT_GPB7(v)   (HW_DVFSC_DVFSGPBT_WR((HW_DVFSC_DVFSGPBT_RD() & ~BM_DVFSC_DVFSGPBT_GPB7) | BF_DVFSC_DVFSGPBT_GPB7(v)))
#endif

/* --- Register HW_DVFSC_DVFSGPBT, field GPB8[8] (RW)
 *
 * General purpose bit 8. Its weight is set by WSW8 value.
 */

#define BP_DVFSC_DVFSGPBT_GPB8      (8)      //!< Bit position for DVFSC_DVFSGPBT_GPB8.
#define BM_DVFSC_DVFSGPBT_GPB8      (0x00000100)  //!< Bit mask for DVFSC_DVFSGPBT_GPB8.

//! @brief Get value of DVFSC_DVFSGPBT_GPB8 from a register value.
#define BG_DVFSC_DVFSGPBT_GPB8(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_DVFSC_DVFSGPBT_GPB8) >> BP_DVFSC_DVFSGPBT_GPB8)

//! @brief Format value for bitfield DVFSC_DVFSGPBT_GPB8.
#define BF_DVFSC_DVFSGPBT_GPB8(v)   ((__REG_VALUE_TYPE((v), reg32_t) << BP_DVFSC_DVFSGPBT_GPB8) & BM_DVFSC_DVFSGPBT_GPB8)

#ifndef __LANGUAGE_ASM__
//! @brief Set the GPB8 field to a new value.
#define BW_DVFSC_DVFSGPBT_GPB8(v)   (HW_DVFSC_DVFSGPBT_WR((HW_DVFSC_DVFSGPBT_RD() & ~BM_DVFSC_DVFSGPBT_GPB8) | BF_DVFSC_DVFSGPBT_GPB8(v)))
#endif

/* --- Register HW_DVFSC_DVFSGPBT, field GPB9[9] (RW)
 *
 * General purpose bit 9. Its weight is set by WSW9 value.
 */

#define BP_DVFSC_DVFSGPBT_GPB9      (9)      //!< Bit position for DVFSC_DVFSGPBT_GPB9.
#define BM_DVFSC_DVFSGPBT_GPB9      (0x00000200)  //!< Bit mask for DVFSC_DVFSGPBT_GPB9.

//! @brief Get value of DVFSC_DVFSGPBT_GPB9 from a register value.
#define BG_DVFSC_DVFSGPBT_GPB9(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_DVFSC_DVFSGPBT_GPB9) >> BP_DVFSC_DVFSGPBT_GPB9)

//! @brief Format value for bitfield DVFSC_DVFSGPBT_GPB9.
#define BF_DVFSC_DVFSGPBT_GPB9(v)   ((__REG_VALUE_TYPE((v), reg32_t) << BP_DVFSC_DVFSGPBT_GPB9) & BM_DVFSC_DVFSGPBT_GPB9)

#ifndef __LANGUAGE_ASM__
//! @brief Set the GPB9 field to a new value.
#define BW_DVFSC_DVFSGPBT_GPB9(v)   (HW_DVFSC_DVFSGPBT_WR((HW_DVFSC_DVFSGPBT_RD() & ~BM_DVFSC_DVFSGPBT_GPB9) | BF_DVFSC_DVFSGPBT_GPB9(v)))
#endif

/* --- Register HW_DVFSC_DVFSGPBT, field GPB10[10] (RW)
 *
 * General purpose bit 10. Its weight is set by WSW10 value.
 */

#define BP_DVFSC_DVFSGPBT_GPB10      (10)      //!< Bit position for DVFSC_DVFSGPBT_GPB10.
#define BM_DVFSC_DVFSGPBT_GPB10      (0x00000400)  //!< Bit mask for DVFSC_DVFSGPBT_GPB10.

//! @brief Get value of DVFSC_DVFSGPBT_GPB10 from a register value.
#define BG_DVFSC_DVFSGPBT_GPB10(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_DVFSC_DVFSGPBT_GPB10) >> BP_DVFSC_DVFSGPBT_GPB10)

//! @brief Format value for bitfield DVFSC_DVFSGPBT_GPB10.
#define BF_DVFSC_DVFSGPBT_GPB10(v)   ((__REG_VALUE_TYPE((v), reg32_t) << BP_DVFSC_DVFSGPBT_GPB10) & BM_DVFSC_DVFSGPBT_GPB10)

#ifndef __LANGUAGE_ASM__
//! @brief Set the GPB10 field to a new value.
#define BW_DVFSC_DVFSGPBT_GPB10(v)   (HW_DVFSC_DVFSGPBT_WR((HW_DVFSC_DVFSGPBT_RD() & ~BM_DVFSC_DVFSGPBT_GPB10) | BF_DVFSC_DVFSGPBT_GPB10(v)))
#endif

/* --- Register HW_DVFSC_DVFSGPBT, field GPB11[11] (RW)
 *
 * General purpose bit 11. Its weight is set by WSW11 value.
 */

#define BP_DVFSC_DVFSGPBT_GPB11      (11)      //!< Bit position for DVFSC_DVFSGPBT_GPB11.
#define BM_DVFSC_DVFSGPBT_GPB11      (0x00000800)  //!< Bit mask for DVFSC_DVFSGPBT_GPB11.

//! @brief Get value of DVFSC_DVFSGPBT_GPB11 from a register value.
#define BG_DVFSC_DVFSGPBT_GPB11(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_DVFSC_DVFSGPBT_GPB11) >> BP_DVFSC_DVFSGPBT_GPB11)

//! @brief Format value for bitfield DVFSC_DVFSGPBT_GPB11.
#define BF_DVFSC_DVFSGPBT_GPB11(v)   ((__REG_VALUE_TYPE((v), reg32_t) << BP_DVFSC_DVFSGPBT_GPB11) & BM_DVFSC_DVFSGPBT_GPB11)

#ifndef __LANGUAGE_ASM__
//! @brief Set the GPB11 field to a new value.
#define BW_DVFSC_DVFSGPBT_GPB11(v)   (HW_DVFSC_DVFSGPBT_WR((HW_DVFSC_DVFSGPBT_RD() & ~BM_DVFSC_DVFSGPBT_GPB11) | BF_DVFSC_DVFSGPBT_GPB11(v)))
#endif

/* --- Register HW_DVFSC_DVFSGPBT, field GPB12[12] (RW)
 *
 * General purpose bit 12. Its weight is set by WSW12 value.
 */

#define BP_DVFSC_DVFSGPBT_GPB12      (12)      //!< Bit position for DVFSC_DVFSGPBT_GPB12.
#define BM_DVFSC_DVFSGPBT_GPB12      (0x00001000)  //!< Bit mask for DVFSC_DVFSGPBT_GPB12.

//! @brief Get value of DVFSC_DVFSGPBT_GPB12 from a register value.
#define BG_DVFSC_DVFSGPBT_GPB12(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_DVFSC_DVFSGPBT_GPB12) >> BP_DVFSC_DVFSGPBT_GPB12)

//! @brief Format value for bitfield DVFSC_DVFSGPBT_GPB12.
#define BF_DVFSC_DVFSGPBT_GPB12(v)   ((__REG_VALUE_TYPE((v), reg32_t) << BP_DVFSC_DVFSGPBT_GPB12) & BM_DVFSC_DVFSGPBT_GPB12)

#ifndef __LANGUAGE_ASM__
//! @brief Set the GPB12 field to a new value.
#define BW_DVFSC_DVFSGPBT_GPB12(v)   (HW_DVFSC_DVFSGPBT_WR((HW_DVFSC_DVFSGPBT_RD() & ~BM_DVFSC_DVFSGPBT_GPB12) | BF_DVFSC_DVFSGPBT_GPB12(v)))
#endif

/* --- Register HW_DVFSC_DVFSGPBT, field GPB13[13] (RW)
 *
 * General purpose bit 13. Its weight is set by WSW13 value.
 */

#define BP_DVFSC_DVFSGPBT_GPB13      (13)      //!< Bit position for DVFSC_DVFSGPBT_GPB13.
#define BM_DVFSC_DVFSGPBT_GPB13      (0x00002000)  //!< Bit mask for DVFSC_DVFSGPBT_GPB13.

//! @brief Get value of DVFSC_DVFSGPBT_GPB13 from a register value.
#define BG_DVFSC_DVFSGPBT_GPB13(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_DVFSC_DVFSGPBT_GPB13) >> BP_DVFSC_DVFSGPBT_GPB13)

//! @brief Format value for bitfield DVFSC_DVFSGPBT_GPB13.
#define BF_DVFSC_DVFSGPBT_GPB13(v)   ((__REG_VALUE_TYPE((v), reg32_t) << BP_DVFSC_DVFSGPBT_GPB13) & BM_DVFSC_DVFSGPBT_GPB13)

#ifndef __LANGUAGE_ASM__
//! @brief Set the GPB13 field to a new value.
#define BW_DVFSC_DVFSGPBT_GPB13(v)   (HW_DVFSC_DVFSGPBT_WR((HW_DVFSC_DVFSGPBT_RD() & ~BM_DVFSC_DVFSGPBT_GPB13) | BF_DVFSC_DVFSGPBT_GPB13(v)))
#endif

/* --- Register HW_DVFSC_DVFSGPBT, field GPB14[14] (RW)
 *
 * General purpose bit 14. Its weight is set by WSW14 value.
 */

#define BP_DVFSC_DVFSGPBT_GPB14      (14)      //!< Bit position for DVFSC_DVFSGPBT_GPB14.
#define BM_DVFSC_DVFSGPBT_GPB14      (0x00004000)  //!< Bit mask for DVFSC_DVFSGPBT_GPB14.

//! @brief Get value of DVFSC_DVFSGPBT_GPB14 from a register value.
#define BG_DVFSC_DVFSGPBT_GPB14(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_DVFSC_DVFSGPBT_GPB14) >> BP_DVFSC_DVFSGPBT_GPB14)

//! @brief Format value for bitfield DVFSC_DVFSGPBT_GPB14.
#define BF_DVFSC_DVFSGPBT_GPB14(v)   ((__REG_VALUE_TYPE((v), reg32_t) << BP_DVFSC_DVFSGPBT_GPB14) & BM_DVFSC_DVFSGPBT_GPB14)

#ifndef __LANGUAGE_ASM__
//! @brief Set the GPB14 field to a new value.
#define BW_DVFSC_DVFSGPBT_GPB14(v)   (HW_DVFSC_DVFSGPBT_WR((HW_DVFSC_DVFSGPBT_RD() & ~BM_DVFSC_DVFSGPBT_GPB14) | BF_DVFSC_DVFSGPBT_GPB14(v)))
#endif

/* --- Register HW_DVFSC_DVFSGPBT, field GPB15[15] (RW)
 *
 * General purpose bit 15. Its weight is set by WSW15 value.
 */

#define BP_DVFSC_DVFSGPBT_GPB15      (15)      //!< Bit position for DVFSC_DVFSGPBT_GPB15.
#define BM_DVFSC_DVFSGPBT_GPB15      (0x00008000)  //!< Bit mask for DVFSC_DVFSGPBT_GPB15.

//! @brief Get value of DVFSC_DVFSGPBT_GPB15 from a register value.
#define BG_DVFSC_DVFSGPBT_GPB15(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_DVFSC_DVFSGPBT_GPB15) >> BP_DVFSC_DVFSGPBT_GPB15)

//! @brief Format value for bitfield DVFSC_DVFSGPBT_GPB15.
#define BF_DVFSC_DVFSGPBT_GPB15(v)   ((__REG_VALUE_TYPE((v), reg32_t) << BP_DVFSC_DVFSGPBT_GPB15) & BM_DVFSC_DVFSGPBT_GPB15)

#ifndef __LANGUAGE_ASM__
//! @brief Set the GPB15 field to a new value.
#define BW_DVFSC_DVFSGPBT_GPB15(v)   (HW_DVFSC_DVFSGPBT_WR((HW_DVFSC_DVFSGPBT_RD() & ~BM_DVFSC_DVFSGPBT_GPB15) | BF_DVFSC_DVFSGPBT_GPB15(v)))
#endif

//-------------------------------------------------------------------------------------------
// HW_DVFSC_DVFSEMAC - DVFS EMAC settings
//-------------------------------------------------------------------------------------------

#ifndef __LANGUAGE_ASM__
/*!
 * @brief HW_DVFSC_DVFSEMAC - DVFS EMAC settings (RW)
 *
 * Reset value: 0x00000004
 *

 */
typedef union _hw_dvfsc_dvfsemac
{
    reg32_t U;
    struct _hw_dvfsc_dvfsemac_bitfields
    {
        unsigned EMAC : 9; //!< [8:0] EMAC - EMA control value
        unsigned DVFEN0 : 1; //!< [9] DVFS tracking for core0 enable.
        unsigned RESERVED0 : 6; //!< [15:10] Reserved
        unsigned FSVAI0 : 2; //!< [17:16] DVFS Frequency adjustment status of core 0.
        unsigned RESERVED1 : 6; //!< [23:18] Reserved
        unsigned WFIM0 : 1; //!< [24] DVFS Wait for Interrupt of core 0 mask bit
        unsigned RESERVED2 : 7; //!< [31:25] Reserved
    } B;
} hw_dvfsc_dvfsemac_t;
#endif

/*
 * constants & macros for entire DVFSC_DVFSEMAC register
 */
#define HW_DVFSC_DVFSEMAC_ADDR      (REGS_DVFSC_BASE + 0x1c)

#ifndef __LANGUAGE_ASM__
#define HW_DVFSC_DVFSEMAC           (*(volatile hw_dvfsc_dvfsemac_t *) HW_DVFSC_DVFSEMAC_ADDR)
#define HW_DVFSC_DVFSEMAC_RD()      (HW_DVFSC_DVFSEMAC.U)
#define HW_DVFSC_DVFSEMAC_WR(v)     (HW_DVFSC_DVFSEMAC.U = (v))
#define HW_DVFSC_DVFSEMAC_SET(v)    (HW_DVFSC_DVFSEMAC_WR(HW_DVFSC_DVFSEMAC_RD() |  (v)))
#define HW_DVFSC_DVFSEMAC_CLR(v)    (HW_DVFSC_DVFSEMAC_WR(HW_DVFSC_DVFSEMAC_RD() & ~(v)))
#define HW_DVFSC_DVFSEMAC_TOG(v)    (HW_DVFSC_DVFSEMAC_WR(HW_DVFSC_DVFSEMAC_RD() ^  (v)))
#endif

/*
 * constants & macros for individual DVFSC_DVFSEMAC bitfields
 */

/* --- Register HW_DVFSC_DVFSEMAC, field EMAC[8:0] (RW)
 *
 * EMAC - EMA control value
 */

#define BP_DVFSC_DVFSEMAC_EMAC      (0)      //!< Bit position for DVFSC_DVFSEMAC_EMAC.
#define BM_DVFSC_DVFSEMAC_EMAC      (0x000001ff)  //!< Bit mask for DVFSC_DVFSEMAC_EMAC.

//! @brief Get value of DVFSC_DVFSEMAC_EMAC from a register value.
#define BG_DVFSC_DVFSEMAC_EMAC(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_DVFSC_DVFSEMAC_EMAC) >> BP_DVFSC_DVFSEMAC_EMAC)

//! @brief Format value for bitfield DVFSC_DVFSEMAC_EMAC.
#define BF_DVFSC_DVFSEMAC_EMAC(v)   ((__REG_VALUE_TYPE((v), reg32_t) << BP_DVFSC_DVFSEMAC_EMAC) & BM_DVFSC_DVFSEMAC_EMAC)

#ifndef __LANGUAGE_ASM__
//! @brief Set the EMAC field to a new value.
#define BW_DVFSC_DVFSEMAC_EMAC(v)   (HW_DVFSC_DVFSEMAC_WR((HW_DVFSC_DVFSEMAC_RD() & ~BM_DVFSC_DVFSEMAC_EMAC) | BF_DVFSC_DVFSEMAC_EMAC(v)))
#endif

/* --- Register HW_DVFSC_DVFSEMAC, field DVFEN0[9] (RW)
 *
 * DVFS tracking for core0 enable.
 *
 * Values:
 * 0 - DVFS disabled.
 * 1 - DVFS enabled.
 */

#define BP_DVFSC_DVFSEMAC_DVFEN0      (9)      //!< Bit position for DVFSC_DVFSEMAC_DVFEN0.
#define BM_DVFSC_DVFSEMAC_DVFEN0      (0x00000200)  //!< Bit mask for DVFSC_DVFSEMAC_DVFEN0.

//! @brief Get value of DVFSC_DVFSEMAC_DVFEN0 from a register value.
#define BG_DVFSC_DVFSEMAC_DVFEN0(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_DVFSC_DVFSEMAC_DVFEN0) >> BP_DVFSC_DVFSEMAC_DVFEN0)

//! @brief Format value for bitfield DVFSC_DVFSEMAC_DVFEN0.
#define BF_DVFSC_DVFSEMAC_DVFEN0(v)   ((__REG_VALUE_TYPE((v), reg32_t) << BP_DVFSC_DVFSEMAC_DVFEN0) & BM_DVFSC_DVFSEMAC_DVFEN0)

#ifndef __LANGUAGE_ASM__
//! @brief Set the DVFEN0 field to a new value.
#define BW_DVFSC_DVFSEMAC_DVFEN0(v)   (HW_DVFSC_DVFSEMAC_WR((HW_DVFSC_DVFSEMAC_RD() & ~BM_DVFSC_DVFSEMAC_DVFEN0) | BF_DVFSC_DVFSEMAC_DVFEN0(v)))
#endif


/* --- Register HW_DVFSC_DVFSEMAC, field FSVAI0[17:16] (RO)
 *
 * DVFS Frequency adjustment status of core 0. These status bits indicate that frequency should be
 * changed, following load of core 0.
 *
 * Values:
 * 00 - no change
 * 01 - frequency should be increased. Low priority source for interrupt. Interrupt is asserted, if
 *     FSVAIM=0. Interrupt is masked if MAXF = 1 (highest frequency).
 * 10 - frequency should be decreased. Interrupt is asserted, if FSVAIM=0. Interrupt is masked if MINF= 1
 *     (lowest frequency).
 * 11 - frequency should be increased immediately. High priority source of interrupt. Interrupt is asserted,
 *     if FSVAIM=0. Interrupt is masked if MAXF = 1 (highest frequency).
 */

#define BP_DVFSC_DVFSEMAC_FSVAI0      (16)      //!< Bit position for DVFSC_DVFSEMAC_FSVAI0.
#define BM_DVFSC_DVFSEMAC_FSVAI0      (0x00030000)  //!< Bit mask for DVFSC_DVFSEMAC_FSVAI0.

//! @brief Get value of DVFSC_DVFSEMAC_FSVAI0 from a register value.
#define BG_DVFSC_DVFSEMAC_FSVAI0(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_DVFSC_DVFSEMAC_FSVAI0) >> BP_DVFSC_DVFSEMAC_FSVAI0)


/* --- Register HW_DVFSC_DVFSEMAC, field WFIM0[24] (RW)
 *
 * DVFS Wait for Interrupt of core 0 mask bit
 *
 * Values:
 * 0 - Wait for interrupt of core 0 isn't masked
 * 1 - Wait for interrupt of core 0 is masked.
 */

#define BP_DVFSC_DVFSEMAC_WFIM0      (24)      //!< Bit position for DVFSC_DVFSEMAC_WFIM0.
#define BM_DVFSC_DVFSEMAC_WFIM0      (0x01000000)  //!< Bit mask for DVFSC_DVFSEMAC_WFIM0.

//! @brief Get value of DVFSC_DVFSEMAC_WFIM0 from a register value.
#define BG_DVFSC_DVFSEMAC_WFIM0(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_DVFSC_DVFSEMAC_WFIM0) >> BP_DVFSC_DVFSEMAC_WFIM0)

//! @brief Format value for bitfield DVFSC_DVFSEMAC_WFIM0.
#define BF_DVFSC_DVFSEMAC_WFIM0(v)   ((__REG_VALUE_TYPE((v), reg32_t) << BP_DVFSC_DVFSEMAC_WFIM0) & BM_DVFSC_DVFSEMAC_WFIM0)

#ifndef __LANGUAGE_ASM__
//! @brief Set the WFIM0 field to a new value.
#define BW_DVFSC_DVFSEMAC_WFIM0(v)   (HW_DVFSC_DVFSEMAC_WR((HW_DVFSC_DVFSEMAC_RD() & ~BM_DVFSC_DVFSEMAC_WFIM0) | BF_DVFSC_DVFSEMAC_WFIM0(v)))
#endif


//-------------------------------------------------------------------------------------------
// HW_DVFSC_CNTR - DVFS Control
//-------------------------------------------------------------------------------------------

#ifndef __LANGUAGE_ASM__
/*!
 * @brief HW_DVFSC_CNTR - DVFS Control (RW)
 *
 * Reset value: 0x0900000e
 *
 * DIV3CK division         DIV3CK setting  dividing ratio  sum_3 passing bits  div_1_clk cumulative
 * divider      00  1  4-0  1*512=512    001  4  6-2  4*512=2048    010  16  8-4  16*512=8192    011
 * 64  10-6  64*512=32768    100  256  12-8  256*512=131072    101  1024  16-10  1024*512=524288
 * Preliminary Divider definition       DIV_RATIO value  ARM clk division ratio      000000  1
 * 000001  2    000010  3    ...  ...
 */
typedef union _hw_dvfsc_cntr
{
    reg32_t U;
    struct _hw_dvfsc_cntr_bitfields
    {
        unsigned RESERVED0 : 3; //!< [2:0] reserved
        unsigned LTBRSR : 2; //!< [4:3] LTBRSR - Load Tracking Buffer Register Source:
        unsigned LTBRSH : 1; //!< [5] LTBRSH - Load Tracking Buffer Register Shift:
        unsigned PFUS : 3; //!< [8:6] PFUS - Periodic Frequency Update Status
        unsigned PFUE : 1; //!< [9] PFUE - Period Frequency Update Enable
        unsigned RESERVED1 : 1; //!< [10] reserved
        unsigned DIV_RATIO : 6; //!< [16:11] DIV_RATIO - Divider value.
        unsigned MINF : 1; //!< [17] Minimum frequency reached.
        unsigned MAXF : 1; //!< [18] Maximum frequency reached.
        unsigned RESERVED2 : 1; //!< [19] Reserved
        unsigned FSVAI : 2; //!< [21:20] FSVAI DVFS Frequency adjustment interrupt.
        unsigned FSVAIM : 1; //!< [22] DVFS Frequency adjustment interrupt mask.
        unsigned PIRQS : 1; //!< [23] PIRQS - Pattern IRQ Source * write '1' to clear.
        unsigned DVFIS : 1; //!< [24] DVFS Interrupt select.
        unsigned LBFL0 : 1; //!< [25] Load buffer 0 - full status bit.
        unsigned LBFL1 : 1; //!< [26] Load buffer 1 - full status bit.
        unsigned LBMI : 1; //!< [27] Load buffer full mask interrupt.
        unsigned DVFEV : 1; //!< [28] Always give a DVFS event.
        unsigned DIV3CK : 3; //!< [31:29] DIV3CK - div_3_clk division ratio inside the DVFS module.
    } B;
} hw_dvfsc_cntr_t;
#endif

/*
 * constants & macros for entire DVFSC_CNTR register
 */
#define HW_DVFSC_CNTR_ADDR      (REGS_DVFSC_BASE + 0x20)

#ifndef __LANGUAGE_ASM__
#define HW_DVFSC_CNTR           (*(volatile hw_dvfsc_cntr_t *) HW_DVFSC_CNTR_ADDR)
#define HW_DVFSC_CNTR_RD()      (HW_DVFSC_CNTR.U)
#define HW_DVFSC_CNTR_WR(v)     (HW_DVFSC_CNTR.U = (v))
#define HW_DVFSC_CNTR_SET(v)    (HW_DVFSC_CNTR_WR(HW_DVFSC_CNTR_RD() |  (v)))
#define HW_DVFSC_CNTR_CLR(v)    (HW_DVFSC_CNTR_WR(HW_DVFSC_CNTR_RD() & ~(v)))
#define HW_DVFSC_CNTR_TOG(v)    (HW_DVFSC_CNTR_WR(HW_DVFSC_CNTR_RD() ^  (v)))
#endif

/*
 * constants & macros for individual DVFSC_CNTR bitfields
 */

/* --- Register HW_DVFSC_CNTR, field LTBRSR[4:3] (RW)
 *
 * LTBRSR - Load Tracking Buffer Register Source:
 *
 * Values:
 * 00 - pre_ld_add
 * 01 - ld_add
 * 10 - after ema
 * 11 - reserved
 */

#define BP_DVFSC_CNTR_LTBRSR      (3)      //!< Bit position for DVFSC_CNTR_LTBRSR.
#define BM_DVFSC_CNTR_LTBRSR      (0x00000018)  //!< Bit mask for DVFSC_CNTR_LTBRSR.

//! @brief Get value of DVFSC_CNTR_LTBRSR from a register value.
#define BG_DVFSC_CNTR_LTBRSR(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_DVFSC_CNTR_LTBRSR) >> BP_DVFSC_CNTR_LTBRSR)

//! @brief Format value for bitfield DVFSC_CNTR_LTBRSR.
#define BF_DVFSC_CNTR_LTBRSR(v)   ((__REG_VALUE_TYPE((v), reg32_t) << BP_DVFSC_CNTR_LTBRSR) & BM_DVFSC_CNTR_LTBRSR)

#ifndef __LANGUAGE_ASM__
//! @brief Set the LTBRSR field to a new value.
#define BW_DVFSC_CNTR_LTBRSR(v)   (HW_DVFSC_CNTR_WR((HW_DVFSC_CNTR_RD() & ~BM_DVFSC_CNTR_LTBRSR) | BF_DVFSC_CNTR_LTBRSR(v)))
#endif


/* --- Register HW_DVFSC_CNTR, field LTBRSH[5] (RW)
 *
 * LTBRSH - Load Tracking Buffer Register Shift:
 *
 * Values:
 * 0 - values of [5:2] of the selected input are saving in Load Tracking Buffer
 * 1 - values of [4:1] of the selected input are saving in Load Tracking Buffer
 */

#define BP_DVFSC_CNTR_LTBRSH      (5)      //!< Bit position for DVFSC_CNTR_LTBRSH.
#define BM_DVFSC_CNTR_LTBRSH      (0x00000020)  //!< Bit mask for DVFSC_CNTR_LTBRSH.

//! @brief Get value of DVFSC_CNTR_LTBRSH from a register value.
#define BG_DVFSC_CNTR_LTBRSH(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_DVFSC_CNTR_LTBRSH) >> BP_DVFSC_CNTR_LTBRSH)

//! @brief Format value for bitfield DVFSC_CNTR_LTBRSH.
#define BF_DVFSC_CNTR_LTBRSH(v)   ((__REG_VALUE_TYPE((v), reg32_t) << BP_DVFSC_CNTR_LTBRSH) & BM_DVFSC_CNTR_LTBRSH)

#ifndef __LANGUAGE_ASM__
//! @brief Set the LTBRSH field to a new value.
#define BW_DVFSC_CNTR_LTBRSH(v)   (HW_DVFSC_CNTR_WR((HW_DVFSC_CNTR_RD() & ~BM_DVFSC_CNTR_LTBRSH) | BF_DVFSC_CNTR_LTBRSH(v)))
#endif


/* --- Register HW_DVFSC_CNTR, field PFUS[8:6] (RO)
 *
 * PFUS - Periodic Frequency Update Status
 *
 * Values:
 * 000 - no update
 * 100 - DVFSPT0 period, previous finished(can be performance level decrease)
 * 101 - DVFSPT1 period, previous finished(can be EMA-detected performance level)
 * 110 - DVFSPT2 period, previous finished(can be performance level increase)
 * 111 - DVFSPT3 period, previous finished (can be EMA-detected performance level)
 */

#define BP_DVFSC_CNTR_PFUS      (6)      //!< Bit position for DVFSC_CNTR_PFUS.
#define BM_DVFSC_CNTR_PFUS      (0x000001c0)  //!< Bit mask for DVFSC_CNTR_PFUS.

//! @brief Get value of DVFSC_CNTR_PFUS from a register value.
#define BG_DVFSC_CNTR_PFUS(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_DVFSC_CNTR_PFUS) >> BP_DVFSC_CNTR_PFUS)


/* --- Register HW_DVFSC_CNTR, field PFUE[9] (RW)
 *
 * PFUE - Period Frequency Update Enable
 *
 * Values:
 * 0 - disabled
 * 1 - enabled
 */

#define BP_DVFSC_CNTR_PFUE      (9)      //!< Bit position for DVFSC_CNTR_PFUE.
#define BM_DVFSC_CNTR_PFUE      (0x00000200)  //!< Bit mask for DVFSC_CNTR_PFUE.

//! @brief Get value of DVFSC_CNTR_PFUE from a register value.
#define BG_DVFSC_CNTR_PFUE(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_DVFSC_CNTR_PFUE) >> BP_DVFSC_CNTR_PFUE)

//! @brief Format value for bitfield DVFSC_CNTR_PFUE.
#define BF_DVFSC_CNTR_PFUE(v)   ((__REG_VALUE_TYPE((v), reg32_t) << BP_DVFSC_CNTR_PFUE) & BM_DVFSC_CNTR_PFUE)

#ifndef __LANGUAGE_ASM__
//! @brief Set the PFUE field to a new value.
#define BW_DVFSC_CNTR_PFUE(v)   (HW_DVFSC_CNTR_WR((HW_DVFSC_CNTR_RD() & ~BM_DVFSC_CNTR_PFUE) | BF_DVFSC_CNTR_PFUE(v)))
#endif


/* --- Register HW_DVFSC_CNTR, field DIV_RATIO[16:11] (RW)
 *
 * DIV_RATIO - Divider value. Divider divides the input ARM clock, following the table
 */

#define BP_DVFSC_CNTR_DIV_RATIO      (11)      //!< Bit position for DVFSC_CNTR_DIV_RATIO.
#define BM_DVFSC_CNTR_DIV_RATIO      (0x0001f800)  //!< Bit mask for DVFSC_CNTR_DIV_RATIO.

//! @brief Get value of DVFSC_CNTR_DIV_RATIO from a register value.
#define BG_DVFSC_CNTR_DIV_RATIO(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_DVFSC_CNTR_DIV_RATIO) >> BP_DVFSC_CNTR_DIV_RATIO)

//! @brief Format value for bitfield DVFSC_CNTR_DIV_RATIO.
#define BF_DVFSC_CNTR_DIV_RATIO(v)   ((__REG_VALUE_TYPE((v), reg32_t) << BP_DVFSC_CNTR_DIV_RATIO) & BM_DVFSC_CNTR_DIV_RATIO)

#ifndef __LANGUAGE_ASM__
//! @brief Set the DIV_RATIO field to a new value.
#define BW_DVFSC_CNTR_DIV_RATIO(v)   (HW_DVFSC_CNTR_WR((HW_DVFSC_CNTR_RD() & ~BM_DVFSC_CNTR_DIV_RATIO) | BF_DVFSC_CNTR_DIV_RATIO(v)))
#endif

/* --- Register HW_DVFSC_CNTR, field MINF[17] (RW)
 *
 * Minimum frequency reached. Interrupt will not be created in minimum frequency reached and
 * frequency decrease required.
 *
 * Values:
 * 0 - min frequency not reached
 * 1 - min frequency reached
 */

#define BP_DVFSC_CNTR_MINF      (17)      //!< Bit position for DVFSC_CNTR_MINF.
#define BM_DVFSC_CNTR_MINF      (0x00020000)  //!< Bit mask for DVFSC_CNTR_MINF.

//! @brief Get value of DVFSC_CNTR_MINF from a register value.
#define BG_DVFSC_CNTR_MINF(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_DVFSC_CNTR_MINF) >> BP_DVFSC_CNTR_MINF)

//! @brief Format value for bitfield DVFSC_CNTR_MINF.
#define BF_DVFSC_CNTR_MINF(v)   ((__REG_VALUE_TYPE((v), reg32_t) << BP_DVFSC_CNTR_MINF) & BM_DVFSC_CNTR_MINF)

#ifndef __LANGUAGE_ASM__
//! @brief Set the MINF field to a new value.
#define BW_DVFSC_CNTR_MINF(v)   (HW_DVFSC_CNTR_WR((HW_DVFSC_CNTR_RD() & ~BM_DVFSC_CNTR_MINF) | BF_DVFSC_CNTR_MINF(v)))
#endif


/* --- Register HW_DVFSC_CNTR, field MAXF[18] (RW)
 *
 * Maximum frequency reached. Interrupt will not be created in maximum frequency reached and
 * frequency increase required.
 *
 * Values:
 * 0 - max frequency not reached
 * 1 - max frequency reached
 */

#define BP_DVFSC_CNTR_MAXF      (18)      //!< Bit position for DVFSC_CNTR_MAXF.
#define BM_DVFSC_CNTR_MAXF      (0x00040000)  //!< Bit mask for DVFSC_CNTR_MAXF.

//! @brief Get value of DVFSC_CNTR_MAXF from a register value.
#define BG_DVFSC_CNTR_MAXF(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_DVFSC_CNTR_MAXF) >> BP_DVFSC_CNTR_MAXF)

//! @brief Format value for bitfield DVFSC_CNTR_MAXF.
#define BF_DVFSC_CNTR_MAXF(v)   ((__REG_VALUE_TYPE((v), reg32_t) << BP_DVFSC_CNTR_MAXF) & BM_DVFSC_CNTR_MAXF)

#ifndef __LANGUAGE_ASM__
//! @brief Set the MAXF field to a new value.
#define BW_DVFSC_CNTR_MAXF(v)   (HW_DVFSC_CNTR_WR((HW_DVFSC_CNTR_RD() & ~BM_DVFSC_CNTR_MAXF) | BF_DVFSC_CNTR_MAXF(v)))
#endif


/* --- Register HW_DVFSC_CNTR, field FSVAI[21:20] (RO)
 *
 * FSVAI DVFS Frequency adjustment interrupt. These status bits indicate that the system frequency
 * should be changed.
 *
 * Values:
 * 00 - no interrupt
 * 01 - frequency should be increased. Low priority interrupt. Interrupt is asserted, if FSVAIM=0. Interrupt
 *     is masked if MAXF = 1 (highest frequency).
 * 10 - frequency should be decreased. Interrupt is asserted, if FSVAIM=0. Interrupt is masked if MINF= 1
 *     (lowest frequency).
 * 11 - frequency should be increased immediately. High priority interrupt. Interrupt is asserted, if
 *     FSVAIM=0. Interrupt is masked if MAXF = 1 (highest frequency).
 */

#define BP_DVFSC_CNTR_FSVAI      (20)      //!< Bit position for DVFSC_CNTR_FSVAI.
#define BM_DVFSC_CNTR_FSVAI      (0x00300000)  //!< Bit mask for DVFSC_CNTR_FSVAI.

//! @brief Get value of DVFSC_CNTR_FSVAI from a register value.
#define BG_DVFSC_CNTR_FSVAI(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_DVFSC_CNTR_FSVAI) >> BP_DVFSC_CNTR_FSVAI)


/* --- Register HW_DVFSC_CNTR, field FSVAIM[22] (RW)
 *
 * DVFS Frequency adjustment interrupt mask. This bit masks the DVFS frequency adjustment interrupt.
 * FSVAI status bits will be still asserted in relevant cases.
 *
 * Values:
 * 0 - interrupt is enabled.
 * 1 - interrupt is masked.
 */

#define BP_DVFSC_CNTR_FSVAIM      (22)      //!< Bit position for DVFSC_CNTR_FSVAIM.
#define BM_DVFSC_CNTR_FSVAIM      (0x00400000)  //!< Bit mask for DVFSC_CNTR_FSVAIM.

//! @brief Get value of DVFSC_CNTR_FSVAIM from a register value.
#define BG_DVFSC_CNTR_FSVAIM(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_DVFSC_CNTR_FSVAIM) >> BP_DVFSC_CNTR_FSVAIM)

//! @brief Format value for bitfield DVFSC_CNTR_FSVAIM.
#define BF_DVFSC_CNTR_FSVAIM(v)   ((__REG_VALUE_TYPE((v), reg32_t) << BP_DVFSC_CNTR_FSVAIM) & BM_DVFSC_CNTR_FSVAIM)

#ifndef __LANGUAGE_ASM__
//! @brief Set the FSVAIM field to a new value.
#define BW_DVFSC_CNTR_FSVAIM(v)   (HW_DVFSC_CNTR_WR((HW_DVFSC_CNTR_RD() & ~BM_DVFSC_CNTR_FSVAIM) | BF_DVFSC_CNTR_FSVAIM(v)))
#endif


/* --- Register HW_DVFSC_CNTR, field PIRQS[23] (RW)
 *
 * PIRQS - Pattern IRQ Source * write '1' to clear. Writing '1' will clear interrupt if interrupt
 * was from pattern
 *
 * Values:
 * 0 - DVFS IRQ source was not from pattern
 * 1 - DVFS IRQ source was from pattern
 */

#define BP_DVFSC_CNTR_PIRQS      (23)      //!< Bit position for DVFSC_CNTR_PIRQS.
#define BM_DVFSC_CNTR_PIRQS      (0x00800000)  //!< Bit mask for DVFSC_CNTR_PIRQS.

//! @brief Get value of DVFSC_CNTR_PIRQS from a register value.
#define BG_DVFSC_CNTR_PIRQS(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_DVFSC_CNTR_PIRQS) >> BP_DVFSC_CNTR_PIRQS)

//! @brief Format value for bitfield DVFSC_CNTR_PIRQS.
#define BF_DVFSC_CNTR_PIRQS(v)   ((__REG_VALUE_TYPE((v), reg32_t) << BP_DVFSC_CNTR_PIRQS) & BM_DVFSC_CNTR_PIRQS)

#ifndef __LANGUAGE_ASM__
//! @brief Set the PIRQS field to a new value.
#define BW_DVFSC_CNTR_PIRQS(v)   (HW_DVFSC_CNTR_WR((HW_DVFSC_CNTR_RD() & ~BM_DVFSC_CNTR_PIRQS) | BF_DVFSC_CNTR_PIRQS(v)))
#endif


/* --- Register HW_DVFSC_CNTR, field DVFIS[24] (RW)
 *
 * DVFS Interrupt select. These bits define destination of DVFS interrupts.
 *
 * Values:
 * 0 - SDMA interrupt will be generated for DVFS events.
 * 1 - MCU interrupt will be generated for DVFS events.
 */

#define BP_DVFSC_CNTR_DVFIS      (24)      //!< Bit position for DVFSC_CNTR_DVFIS.
#define BM_DVFSC_CNTR_DVFIS      (0x01000000)  //!< Bit mask for DVFSC_CNTR_DVFIS.

//! @brief Get value of DVFSC_CNTR_DVFIS from a register value.
#define BG_DVFSC_CNTR_DVFIS(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_DVFSC_CNTR_DVFIS) >> BP_DVFSC_CNTR_DVFIS)

//! @brief Format value for bitfield DVFSC_CNTR_DVFIS.
#define BF_DVFSC_CNTR_DVFIS(v)   ((__REG_VALUE_TYPE((v), reg32_t) << BP_DVFSC_CNTR_DVFIS) & BM_DVFSC_CNTR_DVFIS)

#ifndef __LANGUAGE_ASM__
//! @brief Set the DVFIS field to a new value.
#define BW_DVFSC_CNTR_DVFIS(v)   (HW_DVFSC_CNTR_WR((HW_DVFSC_CNTR_RD() & ~BM_DVFSC_CNTR_DVFIS) | BF_DVFSC_CNTR_DVFIS(v)))
#endif


/* --- Register HW_DVFSC_CNTR, field LBFL0[25] (RW)
 *
 * Load buffer 0 - full status bit. This bit indicates that log buffer registers are full. The bit
 * is set to 1 automatically. An interrupt will be generated if LBMI bit is set to "0" Write '1' to
 * clear. (write '0' leaves bit unchanged)
 *
 * Values:
 * 0 - Load buffer1 is not full.
 * 1 - Load buffer1 is full.
 */

#define BP_DVFSC_CNTR_LBFL0      (25)      //!< Bit position for DVFSC_CNTR_LBFL0.
#define BM_DVFSC_CNTR_LBFL0      (0x02000000)  //!< Bit mask for DVFSC_CNTR_LBFL0.

//! @brief Get value of DVFSC_CNTR_LBFL0 from a register value.
#define BG_DVFSC_CNTR_LBFL0(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_DVFSC_CNTR_LBFL0) >> BP_DVFSC_CNTR_LBFL0)

//! @brief Format value for bitfield DVFSC_CNTR_LBFL0.
#define BF_DVFSC_CNTR_LBFL0(v)   ((__REG_VALUE_TYPE((v), reg32_t) << BP_DVFSC_CNTR_LBFL0) & BM_DVFSC_CNTR_LBFL0)

#ifndef __LANGUAGE_ASM__
//! @brief Set the LBFL0 field to a new value.
#define BW_DVFSC_CNTR_LBFL0(v)   (HW_DVFSC_CNTR_WR((HW_DVFSC_CNTR_RD() & ~BM_DVFSC_CNTR_LBFL0) | BF_DVFSC_CNTR_LBFL0(v)))
#endif


/* --- Register HW_DVFSC_CNTR, field LBFL1[26] (RW)
 *
 * Load buffer 1 - full status bit. This bit indicates that log buffer registers are full. The bit
 * is set to 1 automatically. An interrupt will be generated if LBMI bit is set to "0" Write '1' to
 * clear. (write '0' leaves bit unchanged)
 *
 * Values:
 * 0 - Load buffer0 is not full.
 * 1 - Load buffer0 is full.
 */

#define BP_DVFSC_CNTR_LBFL1      (26)      //!< Bit position for DVFSC_CNTR_LBFL1.
#define BM_DVFSC_CNTR_LBFL1      (0x04000000)  //!< Bit mask for DVFSC_CNTR_LBFL1.

//! @brief Get value of DVFSC_CNTR_LBFL1 from a register value.
#define BG_DVFSC_CNTR_LBFL1(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_DVFSC_CNTR_LBFL1) >> BP_DVFSC_CNTR_LBFL1)

//! @brief Format value for bitfield DVFSC_CNTR_LBFL1.
#define BF_DVFSC_CNTR_LBFL1(v)   ((__REG_VALUE_TYPE((v), reg32_t) << BP_DVFSC_CNTR_LBFL1) & BM_DVFSC_CNTR_LBFL1)

#ifndef __LANGUAGE_ASM__
//! @brief Set the LBFL1 field to a new value.
#define BW_DVFSC_CNTR_LBFL1(v)   (HW_DVFSC_CNTR_WR((HW_DVFSC_CNTR_RD() & ~BM_DVFSC_CNTR_LBFL1) | BF_DVFSC_CNTR_LBFL1(v)))
#endif


/* --- Register HW_DVFSC_CNTR, field LBMI[27] (RW)
 *
 * Load buffer full mask interrupt. This bit masks the generation of this interrupt. Load buffer
 * full interrupt is masked (LBFL0 and LBFL1 bits still will be updated, but interrupt won't be
 * generated) Load buffer full interrupt is enabled.
 */

#define BP_DVFSC_CNTR_LBMI      (27)      //!< Bit position for DVFSC_CNTR_LBMI.
#define BM_DVFSC_CNTR_LBMI      (0x08000000)  //!< Bit mask for DVFSC_CNTR_LBMI.

//! @brief Get value of DVFSC_CNTR_LBMI from a register value.
#define BG_DVFSC_CNTR_LBMI(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_DVFSC_CNTR_LBMI) >> BP_DVFSC_CNTR_LBMI)

//! @brief Format value for bitfield DVFSC_CNTR_LBMI.
#define BF_DVFSC_CNTR_LBMI(v)   ((__REG_VALUE_TYPE((v), reg32_t) << BP_DVFSC_CNTR_LBMI) & BM_DVFSC_CNTR_LBMI)

#ifndef __LANGUAGE_ASM__
//! @brief Set the LBMI field to a new value.
#define BW_DVFSC_CNTR_LBMI(v)   (HW_DVFSC_CNTR_WR((HW_DVFSC_CNTR_RD() & ~BM_DVFSC_CNTR_LBMI) | BF_DVFSC_CNTR_LBMI(v)))
#endif

/* --- Register HW_DVFSC_CNTR, field DVFEV[28] (RW)
 *
 * Always give a DVFS event.
 *
 * Values:
 * 0 - Do not give an event always.
 * 1 - Always give event.
 */

#define BP_DVFSC_CNTR_DVFEV      (28)      //!< Bit position for DVFSC_CNTR_DVFEV.
#define BM_DVFSC_CNTR_DVFEV      (0x10000000)  //!< Bit mask for DVFSC_CNTR_DVFEV.

//! @brief Get value of DVFSC_CNTR_DVFEV from a register value.
#define BG_DVFSC_CNTR_DVFEV(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_DVFSC_CNTR_DVFEV) >> BP_DVFSC_CNTR_DVFEV)

//! @brief Format value for bitfield DVFSC_CNTR_DVFEV.
#define BF_DVFSC_CNTR_DVFEV(v)   ((__REG_VALUE_TYPE((v), reg32_t) << BP_DVFSC_CNTR_DVFEV) & BM_DVFSC_CNTR_DVFEV)

#ifndef __LANGUAGE_ASM__
//! @brief Set the DVFEV field to a new value.
#define BW_DVFSC_CNTR_DVFEV(v)   (HW_DVFSC_CNTR_WR((HW_DVFSC_CNTR_RD() & ~BM_DVFSC_CNTR_DVFEV) | BF_DVFSC_CNTR_DVFEV(v)))
#endif


/* --- Register HW_DVFSC_CNTR, field DIV3CK[31:29] (RW)
 *
 * DIV3CK - div_3_clk division ratio inside the DVFS module. According to the
 */

#define BP_DVFSC_CNTR_DIV3CK      (29)      //!< Bit position for DVFSC_CNTR_DIV3CK.
#define BM_DVFSC_CNTR_DIV3CK      (0xe0000000)  //!< Bit mask for DVFSC_CNTR_DIV3CK.

//! @brief Get value of DVFSC_CNTR_DIV3CK from a register value.
#define BG_DVFSC_CNTR_DIV3CK(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_DVFSC_CNTR_DIV3CK) >> BP_DVFSC_CNTR_DIV3CK)

//! @brief Format value for bitfield DVFSC_CNTR_DIV3CK.
#define BF_DVFSC_CNTR_DIV3CK(v)   ((__REG_VALUE_TYPE((v), reg32_t) << BP_DVFSC_CNTR_DIV3CK) & BM_DVFSC_CNTR_DIV3CK)

#ifndef __LANGUAGE_ASM__
//! @brief Set the DIV3CK field to a new value.
#define BW_DVFSC_CNTR_DIV3CK(v)   (HW_DVFSC_CNTR_WR((HW_DVFSC_CNTR_RD() & ~BM_DVFSC_CNTR_DIV3CK) | BF_DVFSC_CNTR_DIV3CK(v)))
#endif

//-------------------------------------------------------------------------------------------
// HW_DVFSC_DVFSLTR0_0 - DVFS Load Tracking Register 0, portion 0
//-------------------------------------------------------------------------------------------

#ifndef __LANGUAGE_ASM__
/*!
 * @brief HW_DVFSC_DVFSLTR0_0 - DVFS Load Tracking Register 0, portion 0 (RO)
 *
 * Reset value: 0x00000000
 *

 */
typedef union _hw_dvfsc_dvfsltr0_0
{
    reg32_t U;
    struct _hw_dvfsc_dvfsltr0_0_bitfields
    {
        unsigned LTS0_0 : 4; //!< [3:0] core 0 Load Tracking Sample 0
        unsigned LTS0_1 : 4; //!< [7:4] core 0 Load Tracking Sample 1
        unsigned LTS0_2 : 4; //!< [11:8] core 0 Load Tracking Sample 2
        unsigned LTS0_3 : 4; //!< [15:12] core 0 Load Tracking Sample 3
        unsigned LTS0_4 : 4; //!< [19:16] core 0 Load Tracking Sample 4
        unsigned LTS0_5 : 4; //!< [23:20] core 0 Load Tracking Sample 5
        unsigned LTS0_6 : 4; //!< [27:24] core 0 Load Tracking Sample 6
        unsigned LTS0_7 : 4; //!< [31:28] core 0 Load Tracking Sample 7
    } B;
} hw_dvfsc_dvfsltr0_0_t;
#endif

/*
 * constants & macros for entire DVFSC_DVFSLTR0_0 register
 */
#define HW_DVFSC_DVFSLTR0_0_ADDR      (REGS_DVFSC_BASE + 0x24)

#ifndef __LANGUAGE_ASM__
#define HW_DVFSC_DVFSLTR0_0           (*(volatile hw_dvfsc_dvfsltr0_0_t *) HW_DVFSC_DVFSLTR0_0_ADDR)
#define HW_DVFSC_DVFSLTR0_0_RD()      (HW_DVFSC_DVFSLTR0_0.U)
#endif

/*
 * constants & macros for individual DVFSC_DVFSLTR0_0 bitfields
 */

/* --- Register HW_DVFSC_DVFSLTR0_0, field LTS0_0[3:0] (RO)
 *
 * core 0 Load Tracking Sample 0
 */

#define BP_DVFSC_DVFSLTR0_0_LTS0_0      (0)      //!< Bit position for DVFSC_DVFSLTR0_0_LTS0_0.
#define BM_DVFSC_DVFSLTR0_0_LTS0_0      (0x0000000f)  //!< Bit mask for DVFSC_DVFSLTR0_0_LTS0_0.

//! @brief Get value of DVFSC_DVFSLTR0_0_LTS0_0 from a register value.
#define BG_DVFSC_DVFSLTR0_0_LTS0_0(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_DVFSC_DVFSLTR0_0_LTS0_0) >> BP_DVFSC_DVFSLTR0_0_LTS0_0)

/* --- Register HW_DVFSC_DVFSLTR0_0, field LTS0_1[7:4] (RO)
 *
 * core 0 Load Tracking Sample 1
 */

#define BP_DVFSC_DVFSLTR0_0_LTS0_1      (4)      //!< Bit position for DVFSC_DVFSLTR0_0_LTS0_1.
#define BM_DVFSC_DVFSLTR0_0_LTS0_1      (0x000000f0)  //!< Bit mask for DVFSC_DVFSLTR0_0_LTS0_1.

//! @brief Get value of DVFSC_DVFSLTR0_0_LTS0_1 from a register value.
#define BG_DVFSC_DVFSLTR0_0_LTS0_1(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_DVFSC_DVFSLTR0_0_LTS0_1) >> BP_DVFSC_DVFSLTR0_0_LTS0_1)

/* --- Register HW_DVFSC_DVFSLTR0_0, field LTS0_2[11:8] (RO)
 *
 * core 0 Load Tracking Sample 2
 */

#define BP_DVFSC_DVFSLTR0_0_LTS0_2      (8)      //!< Bit position for DVFSC_DVFSLTR0_0_LTS0_2.
#define BM_DVFSC_DVFSLTR0_0_LTS0_2      (0x00000f00)  //!< Bit mask for DVFSC_DVFSLTR0_0_LTS0_2.

//! @brief Get value of DVFSC_DVFSLTR0_0_LTS0_2 from a register value.
#define BG_DVFSC_DVFSLTR0_0_LTS0_2(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_DVFSC_DVFSLTR0_0_LTS0_2) >> BP_DVFSC_DVFSLTR0_0_LTS0_2)

/* --- Register HW_DVFSC_DVFSLTR0_0, field LTS0_3[15:12] (RO)
 *
 * core 0 Load Tracking Sample 3
 */

#define BP_DVFSC_DVFSLTR0_0_LTS0_3      (12)      //!< Bit position for DVFSC_DVFSLTR0_0_LTS0_3.
#define BM_DVFSC_DVFSLTR0_0_LTS0_3      (0x0000f000)  //!< Bit mask for DVFSC_DVFSLTR0_0_LTS0_3.

//! @brief Get value of DVFSC_DVFSLTR0_0_LTS0_3 from a register value.
#define BG_DVFSC_DVFSLTR0_0_LTS0_3(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_DVFSC_DVFSLTR0_0_LTS0_3) >> BP_DVFSC_DVFSLTR0_0_LTS0_3)

/* --- Register HW_DVFSC_DVFSLTR0_0, field LTS0_4[19:16] (RO)
 *
 * core 0 Load Tracking Sample 4
 */

#define BP_DVFSC_DVFSLTR0_0_LTS0_4      (16)      //!< Bit position for DVFSC_DVFSLTR0_0_LTS0_4.
#define BM_DVFSC_DVFSLTR0_0_LTS0_4      (0x000f0000)  //!< Bit mask for DVFSC_DVFSLTR0_0_LTS0_4.

//! @brief Get value of DVFSC_DVFSLTR0_0_LTS0_4 from a register value.
#define BG_DVFSC_DVFSLTR0_0_LTS0_4(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_DVFSC_DVFSLTR0_0_LTS0_4) >> BP_DVFSC_DVFSLTR0_0_LTS0_4)

/* --- Register HW_DVFSC_DVFSLTR0_0, field LTS0_5[23:20] (RO)
 *
 * core 0 Load Tracking Sample 5
 */

#define BP_DVFSC_DVFSLTR0_0_LTS0_5      (20)      //!< Bit position for DVFSC_DVFSLTR0_0_LTS0_5.
#define BM_DVFSC_DVFSLTR0_0_LTS0_5      (0x00f00000)  //!< Bit mask for DVFSC_DVFSLTR0_0_LTS0_5.

//! @brief Get value of DVFSC_DVFSLTR0_0_LTS0_5 from a register value.
#define BG_DVFSC_DVFSLTR0_0_LTS0_5(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_DVFSC_DVFSLTR0_0_LTS0_5) >> BP_DVFSC_DVFSLTR0_0_LTS0_5)

/* --- Register HW_DVFSC_DVFSLTR0_0, field LTS0_6[27:24] (RO)
 *
 * core 0 Load Tracking Sample 6
 */

#define BP_DVFSC_DVFSLTR0_0_LTS0_6      (24)      //!< Bit position for DVFSC_DVFSLTR0_0_LTS0_6.
#define BM_DVFSC_DVFSLTR0_0_LTS0_6      (0x0f000000)  //!< Bit mask for DVFSC_DVFSLTR0_0_LTS0_6.

//! @brief Get value of DVFSC_DVFSLTR0_0_LTS0_6 from a register value.
#define BG_DVFSC_DVFSLTR0_0_LTS0_6(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_DVFSC_DVFSLTR0_0_LTS0_6) >> BP_DVFSC_DVFSLTR0_0_LTS0_6)

/* --- Register HW_DVFSC_DVFSLTR0_0, field LTS0_7[31:28] (RO)
 *
 * core 0 Load Tracking Sample 7
 */

#define BP_DVFSC_DVFSLTR0_0_LTS0_7      (28)      //!< Bit position for DVFSC_DVFSLTR0_0_LTS0_7.
#define BM_DVFSC_DVFSLTR0_0_LTS0_7      (0xf0000000)  //!< Bit mask for DVFSC_DVFSLTR0_0_LTS0_7.

//! @brief Get value of DVFSC_DVFSLTR0_0_LTS0_7 from a register value.
#define BG_DVFSC_DVFSLTR0_0_LTS0_7(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_DVFSC_DVFSLTR0_0_LTS0_7) >> BP_DVFSC_DVFSLTR0_0_LTS0_7)

//-------------------------------------------------------------------------------------------
// HW_DVFSC_DVFSLTR0_1 - DVFS Load Tracking Register 0, portion 1
//-------------------------------------------------------------------------------------------

#ifndef __LANGUAGE_ASM__
/*!
 * @brief HW_DVFSC_DVFSLTR0_1 - DVFS Load Tracking Register 0, portion 1 (RO)
 *
 * Reset value: 0x00000000
 *

 */
typedef union _hw_dvfsc_dvfsltr0_1
{
    reg32_t U;
    struct _hw_dvfsc_dvfsltr0_1_bitfields
    {
        unsigned LTS0_8 : 4; //!< [3:0] core 0 Load Tracking Sample 8
        unsigned LTS0_9 : 4; //!< [7:4] core 0 Load Tracking Sample 9
        unsigned LTS0_10 : 4; //!< [11:8] core 0 Load Tracking Sample 10
        unsigned LTS0_11 : 4; //!< [15:12] core 0 Load Tracking Sample 11
        unsigned LTS0_12 : 4; //!< [19:16] core 0 Load Tracking Sample 12
        unsigned LTS0_13 : 4; //!< [23:20] core 0 Load Tracking Sample 13
        unsigned LTS0_14 : 4; //!< [27:24] core 0 Load Tracking Sample 14
        unsigned LTS0_15 : 4; //!< [31:28] core 0 Load Tracking Sample 15
    } B;
} hw_dvfsc_dvfsltr0_1_t;
#endif

/*
 * constants & macros for entire DVFSC_DVFSLTR0_1 register
 */
#define HW_DVFSC_DVFSLTR0_1_ADDR      (REGS_DVFSC_BASE + 0x28)

#ifndef __LANGUAGE_ASM__
#define HW_DVFSC_DVFSLTR0_1           (*(volatile hw_dvfsc_dvfsltr0_1_t *) HW_DVFSC_DVFSLTR0_1_ADDR)
#define HW_DVFSC_DVFSLTR0_1_RD()      (HW_DVFSC_DVFSLTR0_1.U)
#endif

/*
 * constants & macros for individual DVFSC_DVFSLTR0_1 bitfields
 */

/* --- Register HW_DVFSC_DVFSLTR0_1, field LTS0_8[3:0] (RO)
 *
 * core 0 Load Tracking Sample 8
 */

#define BP_DVFSC_DVFSLTR0_1_LTS0_8      (0)      //!< Bit position for DVFSC_DVFSLTR0_1_LTS0_8.
#define BM_DVFSC_DVFSLTR0_1_LTS0_8      (0x0000000f)  //!< Bit mask for DVFSC_DVFSLTR0_1_LTS0_8.

//! @brief Get value of DVFSC_DVFSLTR0_1_LTS0_8 from a register value.
#define BG_DVFSC_DVFSLTR0_1_LTS0_8(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_DVFSC_DVFSLTR0_1_LTS0_8) >> BP_DVFSC_DVFSLTR0_1_LTS0_8)

/* --- Register HW_DVFSC_DVFSLTR0_1, field LTS0_9[7:4] (RO)
 *
 * core 0 Load Tracking Sample 9
 */

#define BP_DVFSC_DVFSLTR0_1_LTS0_9      (4)      //!< Bit position for DVFSC_DVFSLTR0_1_LTS0_9.
#define BM_DVFSC_DVFSLTR0_1_LTS0_9      (0x000000f0)  //!< Bit mask for DVFSC_DVFSLTR0_1_LTS0_9.

//! @brief Get value of DVFSC_DVFSLTR0_1_LTS0_9 from a register value.
#define BG_DVFSC_DVFSLTR0_1_LTS0_9(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_DVFSC_DVFSLTR0_1_LTS0_9) >> BP_DVFSC_DVFSLTR0_1_LTS0_9)

/* --- Register HW_DVFSC_DVFSLTR0_1, field LTS0_10[11:8] (RO)
 *
 * core 0 Load Tracking Sample 10
 */

#define BP_DVFSC_DVFSLTR0_1_LTS0_10      (8)      //!< Bit position for DVFSC_DVFSLTR0_1_LTS0_10.
#define BM_DVFSC_DVFSLTR0_1_LTS0_10      (0x00000f00)  //!< Bit mask for DVFSC_DVFSLTR0_1_LTS0_10.

//! @brief Get value of DVFSC_DVFSLTR0_1_LTS0_10 from a register value.
#define BG_DVFSC_DVFSLTR0_1_LTS0_10(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_DVFSC_DVFSLTR0_1_LTS0_10) >> BP_DVFSC_DVFSLTR0_1_LTS0_10)

/* --- Register HW_DVFSC_DVFSLTR0_1, field LTS0_11[15:12] (RO)
 *
 * core 0 Load Tracking Sample 11
 */

#define BP_DVFSC_DVFSLTR0_1_LTS0_11      (12)      //!< Bit position for DVFSC_DVFSLTR0_1_LTS0_11.
#define BM_DVFSC_DVFSLTR0_1_LTS0_11      (0x0000f000)  //!< Bit mask for DVFSC_DVFSLTR0_1_LTS0_11.

//! @brief Get value of DVFSC_DVFSLTR0_1_LTS0_11 from a register value.
#define BG_DVFSC_DVFSLTR0_1_LTS0_11(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_DVFSC_DVFSLTR0_1_LTS0_11) >> BP_DVFSC_DVFSLTR0_1_LTS0_11)

/* --- Register HW_DVFSC_DVFSLTR0_1, field LTS0_12[19:16] (RO)
 *
 * core 0 Load Tracking Sample 12
 */

#define BP_DVFSC_DVFSLTR0_1_LTS0_12      (16)      //!< Bit position for DVFSC_DVFSLTR0_1_LTS0_12.
#define BM_DVFSC_DVFSLTR0_1_LTS0_12      (0x000f0000)  //!< Bit mask for DVFSC_DVFSLTR0_1_LTS0_12.

//! @brief Get value of DVFSC_DVFSLTR0_1_LTS0_12 from a register value.
#define BG_DVFSC_DVFSLTR0_1_LTS0_12(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_DVFSC_DVFSLTR0_1_LTS0_12) >> BP_DVFSC_DVFSLTR0_1_LTS0_12)

/* --- Register HW_DVFSC_DVFSLTR0_1, field LTS0_13[23:20] (RO)
 *
 * core 0 Load Tracking Sample 13
 */

#define BP_DVFSC_DVFSLTR0_1_LTS0_13      (20)      //!< Bit position for DVFSC_DVFSLTR0_1_LTS0_13.
#define BM_DVFSC_DVFSLTR0_1_LTS0_13      (0x00f00000)  //!< Bit mask for DVFSC_DVFSLTR0_1_LTS0_13.

//! @brief Get value of DVFSC_DVFSLTR0_1_LTS0_13 from a register value.
#define BG_DVFSC_DVFSLTR0_1_LTS0_13(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_DVFSC_DVFSLTR0_1_LTS0_13) >> BP_DVFSC_DVFSLTR0_1_LTS0_13)

/* --- Register HW_DVFSC_DVFSLTR0_1, field LTS0_14[27:24] (RO)
 *
 * core 0 Load Tracking Sample 14
 */

#define BP_DVFSC_DVFSLTR0_1_LTS0_14      (24)      //!< Bit position for DVFSC_DVFSLTR0_1_LTS0_14.
#define BM_DVFSC_DVFSLTR0_1_LTS0_14      (0x0f000000)  //!< Bit mask for DVFSC_DVFSLTR0_1_LTS0_14.

//! @brief Get value of DVFSC_DVFSLTR0_1_LTS0_14 from a register value.
#define BG_DVFSC_DVFSLTR0_1_LTS0_14(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_DVFSC_DVFSLTR0_1_LTS0_14) >> BP_DVFSC_DVFSLTR0_1_LTS0_14)

/* --- Register HW_DVFSC_DVFSLTR0_1, field LTS0_15[31:28] (RO)
 *
 * core 0 Load Tracking Sample 15
 */

#define BP_DVFSC_DVFSLTR0_1_LTS0_15      (28)      //!< Bit position for DVFSC_DVFSLTR0_1_LTS0_15.
#define BM_DVFSC_DVFSLTR0_1_LTS0_15      (0xf0000000)  //!< Bit mask for DVFSC_DVFSLTR0_1_LTS0_15.

//! @brief Get value of DVFSC_DVFSLTR0_1_LTS0_15 from a register value.
#define BG_DVFSC_DVFSLTR0_1_LTS0_15(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_DVFSC_DVFSLTR0_1_LTS0_15) >> BP_DVFSC_DVFSLTR0_1_LTS0_15)

//-------------------------------------------------------------------------------------------
// HW_DVFSC_DVFSLTR1_0 - DVFS Load Tracking Register 1, portion 0
//-------------------------------------------------------------------------------------------

#ifndef __LANGUAGE_ASM__
/*!
 * @brief HW_DVFSC_DVFSLTR1_0 - DVFS Load Tracking Register 1, portion 0 (RO)
 *
 * Reset value: 0x00000000
 *

 */
typedef union _hw_dvfsc_dvfsltr1_0
{
    reg32_t U;
    struct _hw_dvfsc_dvfsltr1_0_bitfields
    {
        unsigned LTS1_0 : 4; //!< [3:0] core 0 Load Tracking Sample 0
        unsigned LTS1_1 : 4; //!< [7:4] core 0 Load Tracking Sample 1
        unsigned LTS1_2 : 4; //!< [11:8] core 0 Load Tracking Sample 2
        unsigned LTS1_3 : 4; //!< [15:12] core 0 Load Tracking Sample 3
        unsigned LTS1_4 : 4; //!< [19:16] core 0 Load Tracking Sample 4
        unsigned LTS1_5 : 4; //!< [23:20] core 0 Load Tracking Sample 5
        unsigned LTS1_6 : 4; //!< [27:24] core 0 Load Tracking Sample 6
        unsigned LTS1_7 : 4; //!< [31:28] core 0 Load Tracking Sample 7
    } B;
} hw_dvfsc_dvfsltr1_0_t;
#endif

/*
 * constants & macros for entire DVFSC_DVFSLTR1_0 register
 */
#define HW_DVFSC_DVFSLTR1_0_ADDR      (REGS_DVFSC_BASE + 0x2c)

#ifndef __LANGUAGE_ASM__
#define HW_DVFSC_DVFSLTR1_0           (*(volatile hw_dvfsc_dvfsltr1_0_t *) HW_DVFSC_DVFSLTR1_0_ADDR)
#define HW_DVFSC_DVFSLTR1_0_RD()      (HW_DVFSC_DVFSLTR1_0.U)
#endif

/*
 * constants & macros for individual DVFSC_DVFSLTR1_0 bitfields
 */

/* --- Register HW_DVFSC_DVFSLTR1_0, field LTS1_0[3:0] (RO)
 *
 * core 0 Load Tracking Sample 0
 */

#define BP_DVFSC_DVFSLTR1_0_LTS1_0      (0)      //!< Bit position for DVFSC_DVFSLTR1_0_LTS1_0.
#define BM_DVFSC_DVFSLTR1_0_LTS1_0      (0x0000000f)  //!< Bit mask for DVFSC_DVFSLTR1_0_LTS1_0.

//! @brief Get value of DVFSC_DVFSLTR1_0_LTS1_0 from a register value.
#define BG_DVFSC_DVFSLTR1_0_LTS1_0(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_DVFSC_DVFSLTR1_0_LTS1_0) >> BP_DVFSC_DVFSLTR1_0_LTS1_0)

/* --- Register HW_DVFSC_DVFSLTR1_0, field LTS1_1[7:4] (RO)
 *
 * core 0 Load Tracking Sample 1
 */

#define BP_DVFSC_DVFSLTR1_0_LTS1_1      (4)      //!< Bit position for DVFSC_DVFSLTR1_0_LTS1_1.
#define BM_DVFSC_DVFSLTR1_0_LTS1_1      (0x000000f0)  //!< Bit mask for DVFSC_DVFSLTR1_0_LTS1_1.

//! @brief Get value of DVFSC_DVFSLTR1_0_LTS1_1 from a register value.
#define BG_DVFSC_DVFSLTR1_0_LTS1_1(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_DVFSC_DVFSLTR1_0_LTS1_1) >> BP_DVFSC_DVFSLTR1_0_LTS1_1)

/* --- Register HW_DVFSC_DVFSLTR1_0, field LTS1_2[11:8] (RO)
 *
 * core 0 Load Tracking Sample 2
 */

#define BP_DVFSC_DVFSLTR1_0_LTS1_2      (8)      //!< Bit position for DVFSC_DVFSLTR1_0_LTS1_2.
#define BM_DVFSC_DVFSLTR1_0_LTS1_2      (0x00000f00)  //!< Bit mask for DVFSC_DVFSLTR1_0_LTS1_2.

//! @brief Get value of DVFSC_DVFSLTR1_0_LTS1_2 from a register value.
#define BG_DVFSC_DVFSLTR1_0_LTS1_2(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_DVFSC_DVFSLTR1_0_LTS1_2) >> BP_DVFSC_DVFSLTR1_0_LTS1_2)

/* --- Register HW_DVFSC_DVFSLTR1_0, field LTS1_3[15:12] (RO)
 *
 * core 0 Load Tracking Sample 3
 */

#define BP_DVFSC_DVFSLTR1_0_LTS1_3      (12)      //!< Bit position for DVFSC_DVFSLTR1_0_LTS1_3.
#define BM_DVFSC_DVFSLTR1_0_LTS1_3      (0x0000f000)  //!< Bit mask for DVFSC_DVFSLTR1_0_LTS1_3.

//! @brief Get value of DVFSC_DVFSLTR1_0_LTS1_3 from a register value.
#define BG_DVFSC_DVFSLTR1_0_LTS1_3(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_DVFSC_DVFSLTR1_0_LTS1_3) >> BP_DVFSC_DVFSLTR1_0_LTS1_3)

/* --- Register HW_DVFSC_DVFSLTR1_0, field LTS1_4[19:16] (RO)
 *
 * core 0 Load Tracking Sample 4
 */

#define BP_DVFSC_DVFSLTR1_0_LTS1_4      (16)      //!< Bit position for DVFSC_DVFSLTR1_0_LTS1_4.
#define BM_DVFSC_DVFSLTR1_0_LTS1_4      (0x000f0000)  //!< Bit mask for DVFSC_DVFSLTR1_0_LTS1_4.

//! @brief Get value of DVFSC_DVFSLTR1_0_LTS1_4 from a register value.
#define BG_DVFSC_DVFSLTR1_0_LTS1_4(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_DVFSC_DVFSLTR1_0_LTS1_4) >> BP_DVFSC_DVFSLTR1_0_LTS1_4)

/* --- Register HW_DVFSC_DVFSLTR1_0, field LTS1_5[23:20] (RO)
 *
 * core 0 Load Tracking Sample 5
 */

#define BP_DVFSC_DVFSLTR1_0_LTS1_5      (20)      //!< Bit position for DVFSC_DVFSLTR1_0_LTS1_5.
#define BM_DVFSC_DVFSLTR1_0_LTS1_5      (0x00f00000)  //!< Bit mask for DVFSC_DVFSLTR1_0_LTS1_5.

//! @brief Get value of DVFSC_DVFSLTR1_0_LTS1_5 from a register value.
#define BG_DVFSC_DVFSLTR1_0_LTS1_5(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_DVFSC_DVFSLTR1_0_LTS1_5) >> BP_DVFSC_DVFSLTR1_0_LTS1_5)

/* --- Register HW_DVFSC_DVFSLTR1_0, field LTS1_6[27:24] (RO)
 *
 * core 0 Load Tracking Sample 6
 */

#define BP_DVFSC_DVFSLTR1_0_LTS1_6      (24)      //!< Bit position for DVFSC_DVFSLTR1_0_LTS1_6.
#define BM_DVFSC_DVFSLTR1_0_LTS1_6      (0x0f000000)  //!< Bit mask for DVFSC_DVFSLTR1_0_LTS1_6.

//! @brief Get value of DVFSC_DVFSLTR1_0_LTS1_6 from a register value.
#define BG_DVFSC_DVFSLTR1_0_LTS1_6(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_DVFSC_DVFSLTR1_0_LTS1_6) >> BP_DVFSC_DVFSLTR1_0_LTS1_6)

/* --- Register HW_DVFSC_DVFSLTR1_0, field LTS1_7[31:28] (RO)
 *
 * core 0 Load Tracking Sample 7
 */

#define BP_DVFSC_DVFSLTR1_0_LTS1_7      (28)      //!< Bit position for DVFSC_DVFSLTR1_0_LTS1_7.
#define BM_DVFSC_DVFSLTR1_0_LTS1_7      (0xf0000000)  //!< Bit mask for DVFSC_DVFSLTR1_0_LTS1_7.

//! @brief Get value of DVFSC_DVFSLTR1_0_LTS1_7 from a register value.
#define BG_DVFSC_DVFSLTR1_0_LTS1_7(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_DVFSC_DVFSLTR1_0_LTS1_7) >> BP_DVFSC_DVFSLTR1_0_LTS1_7)

//-------------------------------------------------------------------------------------------
// HW_DVFSC_DVFSLTR1_1 - DVFS Load Tracking Register 3, portion 1
//-------------------------------------------------------------------------------------------

#ifndef __LANGUAGE_ASM__
/*!
 * @brief HW_DVFSC_DVFSLTR1_1 - DVFS Load Tracking Register 3, portion 1 (RO)
 *
 * Reset value: 0x00000000
 *

 */
typedef union _hw_dvfsc_dvfsltr1_1
{
    reg32_t U;
    struct _hw_dvfsc_dvfsltr1_1_bitfields
    {
        unsigned LTS1_8 : 4; //!< [3:0] core 0 Load Tracking Sample 8
        unsigned LTS1_9 : 4; //!< [7:4] core 0 Load Tracking Sample 9
        unsigned LTS1_10 : 4; //!< [11:8] core 0 Load Tracking Sample 10
        unsigned LTS1_11 : 4; //!< [15:12] core 0 Load Tracking Sample 11
        unsigned LTS1_12 : 4; //!< [19:16] core 0 Load Tracking Sample 12
        unsigned LTS1_13 : 4; //!< [23:20] core 0 Load Tracking Sample 13
        unsigned LTS1_14 : 4; //!< [27:24] core 0 Load Tracking Sample 14
        unsigned LTS1_15 : 4; //!< [31:28] core 0 Load Tracking Sample 15
    } B;
} hw_dvfsc_dvfsltr1_1_t;
#endif

/*
 * constants & macros for entire DVFSC_DVFSLTR1_1 register
 */
#define HW_DVFSC_DVFSLTR1_1_ADDR      (REGS_DVFSC_BASE + 0x30)

#ifndef __LANGUAGE_ASM__
#define HW_DVFSC_DVFSLTR1_1           (*(volatile hw_dvfsc_dvfsltr1_1_t *) HW_DVFSC_DVFSLTR1_1_ADDR)
#define HW_DVFSC_DVFSLTR1_1_RD()      (HW_DVFSC_DVFSLTR1_1.U)
#endif

/*
 * constants & macros for individual DVFSC_DVFSLTR1_1 bitfields
 */

/* --- Register HW_DVFSC_DVFSLTR1_1, field LTS1_8[3:0] (RO)
 *
 * core 0 Load Tracking Sample 8
 */

#define BP_DVFSC_DVFSLTR1_1_LTS1_8      (0)      //!< Bit position for DVFSC_DVFSLTR1_1_LTS1_8.
#define BM_DVFSC_DVFSLTR1_1_LTS1_8      (0x0000000f)  //!< Bit mask for DVFSC_DVFSLTR1_1_LTS1_8.

//! @brief Get value of DVFSC_DVFSLTR1_1_LTS1_8 from a register value.
#define BG_DVFSC_DVFSLTR1_1_LTS1_8(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_DVFSC_DVFSLTR1_1_LTS1_8) >> BP_DVFSC_DVFSLTR1_1_LTS1_8)

/* --- Register HW_DVFSC_DVFSLTR1_1, field LTS1_9[7:4] (RO)
 *
 * core 0 Load Tracking Sample 9
 */

#define BP_DVFSC_DVFSLTR1_1_LTS1_9      (4)      //!< Bit position for DVFSC_DVFSLTR1_1_LTS1_9.
#define BM_DVFSC_DVFSLTR1_1_LTS1_9      (0x000000f0)  //!< Bit mask for DVFSC_DVFSLTR1_1_LTS1_9.

//! @brief Get value of DVFSC_DVFSLTR1_1_LTS1_9 from a register value.
#define BG_DVFSC_DVFSLTR1_1_LTS1_9(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_DVFSC_DVFSLTR1_1_LTS1_9) >> BP_DVFSC_DVFSLTR1_1_LTS1_9)

/* --- Register HW_DVFSC_DVFSLTR1_1, field LTS1_10[11:8] (RO)
 *
 * core 0 Load Tracking Sample 10
 */

#define BP_DVFSC_DVFSLTR1_1_LTS1_10      (8)      //!< Bit position for DVFSC_DVFSLTR1_1_LTS1_10.
#define BM_DVFSC_DVFSLTR1_1_LTS1_10      (0x00000f00)  //!< Bit mask for DVFSC_DVFSLTR1_1_LTS1_10.

//! @brief Get value of DVFSC_DVFSLTR1_1_LTS1_10 from a register value.
#define BG_DVFSC_DVFSLTR1_1_LTS1_10(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_DVFSC_DVFSLTR1_1_LTS1_10) >> BP_DVFSC_DVFSLTR1_1_LTS1_10)

/* --- Register HW_DVFSC_DVFSLTR1_1, field LTS1_11[15:12] (RO)
 *
 * core 0 Load Tracking Sample 11
 */

#define BP_DVFSC_DVFSLTR1_1_LTS1_11      (12)      //!< Bit position for DVFSC_DVFSLTR1_1_LTS1_11.
#define BM_DVFSC_DVFSLTR1_1_LTS1_11      (0x0000f000)  //!< Bit mask for DVFSC_DVFSLTR1_1_LTS1_11.

//! @brief Get value of DVFSC_DVFSLTR1_1_LTS1_11 from a register value.
#define BG_DVFSC_DVFSLTR1_1_LTS1_11(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_DVFSC_DVFSLTR1_1_LTS1_11) >> BP_DVFSC_DVFSLTR1_1_LTS1_11)

/* --- Register HW_DVFSC_DVFSLTR1_1, field LTS1_12[19:16] (RO)
 *
 * core 0 Load Tracking Sample 12
 */

#define BP_DVFSC_DVFSLTR1_1_LTS1_12      (16)      //!< Bit position for DVFSC_DVFSLTR1_1_LTS1_12.
#define BM_DVFSC_DVFSLTR1_1_LTS1_12      (0x000f0000)  //!< Bit mask for DVFSC_DVFSLTR1_1_LTS1_12.

//! @brief Get value of DVFSC_DVFSLTR1_1_LTS1_12 from a register value.
#define BG_DVFSC_DVFSLTR1_1_LTS1_12(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_DVFSC_DVFSLTR1_1_LTS1_12) >> BP_DVFSC_DVFSLTR1_1_LTS1_12)

/* --- Register HW_DVFSC_DVFSLTR1_1, field LTS1_13[23:20] (RO)
 *
 * core 0 Load Tracking Sample 13
 */

#define BP_DVFSC_DVFSLTR1_1_LTS1_13      (20)      //!< Bit position for DVFSC_DVFSLTR1_1_LTS1_13.
#define BM_DVFSC_DVFSLTR1_1_LTS1_13      (0x00f00000)  //!< Bit mask for DVFSC_DVFSLTR1_1_LTS1_13.

//! @brief Get value of DVFSC_DVFSLTR1_1_LTS1_13 from a register value.
#define BG_DVFSC_DVFSLTR1_1_LTS1_13(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_DVFSC_DVFSLTR1_1_LTS1_13) >> BP_DVFSC_DVFSLTR1_1_LTS1_13)

/* --- Register HW_DVFSC_DVFSLTR1_1, field LTS1_14[27:24] (RO)
 *
 * core 0 Load Tracking Sample 14
 */

#define BP_DVFSC_DVFSLTR1_1_LTS1_14      (24)      //!< Bit position for DVFSC_DVFSLTR1_1_LTS1_14.
#define BM_DVFSC_DVFSLTR1_1_LTS1_14      (0x0f000000)  //!< Bit mask for DVFSC_DVFSLTR1_1_LTS1_14.

//! @brief Get value of DVFSC_DVFSLTR1_1_LTS1_14 from a register value.
#define BG_DVFSC_DVFSLTR1_1_LTS1_14(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_DVFSC_DVFSLTR1_1_LTS1_14) >> BP_DVFSC_DVFSLTR1_1_LTS1_14)

/* --- Register HW_DVFSC_DVFSLTR1_1, field LTS1_15[31:28] (RO)
 *
 * core 0 Load Tracking Sample 15
 */

#define BP_DVFSC_DVFSLTR1_1_LTS1_15      (28)      //!< Bit position for DVFSC_DVFSLTR1_1_LTS1_15.
#define BM_DVFSC_DVFSLTR1_1_LTS1_15      (0xf0000000)  //!< Bit mask for DVFSC_DVFSLTR1_1_LTS1_15.

//! @brief Get value of DVFSC_DVFSLTR1_1_LTS1_15 from a register value.
#define BG_DVFSC_DVFSLTR1_1_LTS1_15(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_DVFSC_DVFSLTR1_1_LTS1_15) >> BP_DVFSC_DVFSLTR1_1_LTS1_15)

//-------------------------------------------------------------------------------------------
// HW_DVFSC_DVFSPT0 - DVFS pattern 0 length
//-------------------------------------------------------------------------------------------

#ifndef __LANGUAGE_ASM__
/*!
 * @brief HW_DVFSC_DVFSPT0 - DVFS pattern 0 length (RW)
 *
 * Reset value: 0x00000010
 *

 */
typedef union _hw_dvfsc_dvfspt0
{
    reg32_t U;
    struct _hw_dvfsc_dvfspt0_bitfields
    {
        unsigned FPTN0 : 17; //!< [16:0] FPTN0 - Frequency pattern 0 counter During period of this counter the frequency will be reduced from the EMA-detected level.
        unsigned PT0A : 1; //!< [17] PT0A - Pattern 0 currently active (read-only)
        unsigned RESERVED0 : 14; //!< [31:18] reserved
    } B;
} hw_dvfsc_dvfspt0_t;
#endif

/*
 * constants & macros for entire DVFSC_DVFSPT0 register
 */
#define HW_DVFSC_DVFSPT0_ADDR      (REGS_DVFSC_BASE + 0x34)

#ifndef __LANGUAGE_ASM__
#define HW_DVFSC_DVFSPT0           (*(volatile hw_dvfsc_dvfspt0_t *) HW_DVFSC_DVFSPT0_ADDR)
#define HW_DVFSC_DVFSPT0_RD()      (HW_DVFSC_DVFSPT0.U)
#define HW_DVFSC_DVFSPT0_WR(v)     (HW_DVFSC_DVFSPT0.U = (v))
#define HW_DVFSC_DVFSPT0_SET(v)    (HW_DVFSC_DVFSPT0_WR(HW_DVFSC_DVFSPT0_RD() |  (v)))
#define HW_DVFSC_DVFSPT0_CLR(v)    (HW_DVFSC_DVFSPT0_WR(HW_DVFSC_DVFSPT0_RD() & ~(v)))
#define HW_DVFSC_DVFSPT0_TOG(v)    (HW_DVFSC_DVFSPT0_WR(HW_DVFSC_DVFSPT0_RD() ^  (v)))
#endif

/*
 * constants & macros for individual DVFSC_DVFSPT0 bitfields
 */

/* --- Register HW_DVFSC_DVFSPT0, field FPTN0[16:0] (RW)
 *
 * FPTN0 - Frequency pattern 0 counter During period of this counter the frequency will be reduced
 * from the EMA-detected level.
 */

#define BP_DVFSC_DVFSPT0_FPTN0      (0)      //!< Bit position for DVFSC_DVFSPT0_FPTN0.
#define BM_DVFSC_DVFSPT0_FPTN0      (0x0001ffff)  //!< Bit mask for DVFSC_DVFSPT0_FPTN0.

//! @brief Get value of DVFSC_DVFSPT0_FPTN0 from a register value.
#define BG_DVFSC_DVFSPT0_FPTN0(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_DVFSC_DVFSPT0_FPTN0) >> BP_DVFSC_DVFSPT0_FPTN0)

//! @brief Format value for bitfield DVFSC_DVFSPT0_FPTN0.
#define BF_DVFSC_DVFSPT0_FPTN0(v)   ((__REG_VALUE_TYPE((v), reg32_t) << BP_DVFSC_DVFSPT0_FPTN0) & BM_DVFSC_DVFSPT0_FPTN0)

#ifndef __LANGUAGE_ASM__
//! @brief Set the FPTN0 field to a new value.
#define BW_DVFSC_DVFSPT0_FPTN0(v)   (HW_DVFSC_DVFSPT0_WR((HW_DVFSC_DVFSPT0_RD() & ~BM_DVFSC_DVFSPT0_FPTN0) | BF_DVFSC_DVFSPT0_FPTN0(v)))
#endif

/* --- Register HW_DVFSC_DVFSPT0, field PT0A[17] (RO)
 *
 * PT0A - Pattern 0 currently active (read-only)
 *
 * Values:
 * 0 - non-active
 * 1 - active
 */

#define BP_DVFSC_DVFSPT0_PT0A      (17)      //!< Bit position for DVFSC_DVFSPT0_PT0A.
#define BM_DVFSC_DVFSPT0_PT0A      (0x00020000)  //!< Bit mask for DVFSC_DVFSPT0_PT0A.

//! @brief Get value of DVFSC_DVFSPT0_PT0A from a register value.
#define BG_DVFSC_DVFSPT0_PT0A(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_DVFSC_DVFSPT0_PT0A) >> BP_DVFSC_DVFSPT0_PT0A)


//-------------------------------------------------------------------------------------------
// HW_DVFSC_DVFSPT1 - DVFS pattern 1 length
//-------------------------------------------------------------------------------------------

#ifndef __LANGUAGE_ASM__
/*!
 * @brief HW_DVFSC_DVFSPT1 - DVFS pattern 1 length (RW)
 *
 * Reset value: 0x00000010
 *

 */
typedef union _hw_dvfsc_dvfspt1
{
    reg32_t U;
    struct _hw_dvfsc_dvfspt1_bitfields
    {
        unsigned FPTN1 : 17; //!< [16:0] FPTN1 - Frequency pattern 1 counter During period of this counter the frequency will be set to the EMA-detected level.
        unsigned PT1A : 1; //!< [17] PT1A - Pattern 1 currently active (read-only)
        unsigned RESERVED0 : 14; //!< [31:18] reserved
    } B;
} hw_dvfsc_dvfspt1_t;
#endif

/*
 * constants & macros for entire DVFSC_DVFSPT1 register
 */
#define HW_DVFSC_DVFSPT1_ADDR      (REGS_DVFSC_BASE + 0x38)

#ifndef __LANGUAGE_ASM__
#define HW_DVFSC_DVFSPT1           (*(volatile hw_dvfsc_dvfspt1_t *) HW_DVFSC_DVFSPT1_ADDR)
#define HW_DVFSC_DVFSPT1_RD()      (HW_DVFSC_DVFSPT1.U)
#define HW_DVFSC_DVFSPT1_WR(v)     (HW_DVFSC_DVFSPT1.U = (v))
#define HW_DVFSC_DVFSPT1_SET(v)    (HW_DVFSC_DVFSPT1_WR(HW_DVFSC_DVFSPT1_RD() |  (v)))
#define HW_DVFSC_DVFSPT1_CLR(v)    (HW_DVFSC_DVFSPT1_WR(HW_DVFSC_DVFSPT1_RD() & ~(v)))
#define HW_DVFSC_DVFSPT1_TOG(v)    (HW_DVFSC_DVFSPT1_WR(HW_DVFSC_DVFSPT1_RD() ^  (v)))
#endif

/*
 * constants & macros for individual DVFSC_DVFSPT1 bitfields
 */

/* --- Register HW_DVFSC_DVFSPT1, field FPTN1[16:0] (RW)
 *
 * FPTN1 - Frequency pattern 1 counter During period of this counter the frequency will be set to
 * the EMA-detected level.
 */

#define BP_DVFSC_DVFSPT1_FPTN1      (0)      //!< Bit position for DVFSC_DVFSPT1_FPTN1.
#define BM_DVFSC_DVFSPT1_FPTN1      (0x0001ffff)  //!< Bit mask for DVFSC_DVFSPT1_FPTN1.

//! @brief Get value of DVFSC_DVFSPT1_FPTN1 from a register value.
#define BG_DVFSC_DVFSPT1_FPTN1(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_DVFSC_DVFSPT1_FPTN1) >> BP_DVFSC_DVFSPT1_FPTN1)

//! @brief Format value for bitfield DVFSC_DVFSPT1_FPTN1.
#define BF_DVFSC_DVFSPT1_FPTN1(v)   ((__REG_VALUE_TYPE((v), reg32_t) << BP_DVFSC_DVFSPT1_FPTN1) & BM_DVFSC_DVFSPT1_FPTN1)

#ifndef __LANGUAGE_ASM__
//! @brief Set the FPTN1 field to a new value.
#define BW_DVFSC_DVFSPT1_FPTN1(v)   (HW_DVFSC_DVFSPT1_WR((HW_DVFSC_DVFSPT1_RD() & ~BM_DVFSC_DVFSPT1_FPTN1) | BF_DVFSC_DVFSPT1_FPTN1(v)))
#endif

/* --- Register HW_DVFSC_DVFSPT1, field PT1A[17] (RO)
 *
 * PT1A - Pattern 1 currently active (read-only)
 *
 * Values:
 * 0 - non-active
 * 1 - active
 */

#define BP_DVFSC_DVFSPT1_PT1A      (17)      //!< Bit position for DVFSC_DVFSPT1_PT1A.
#define BM_DVFSC_DVFSPT1_PT1A      (0x00020000)  //!< Bit mask for DVFSC_DVFSPT1_PT1A.

//! @brief Get value of DVFSC_DVFSPT1_PT1A from a register value.
#define BG_DVFSC_DVFSPT1_PT1A(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_DVFSC_DVFSPT1_PT1A) >> BP_DVFSC_DVFSPT1_PT1A)


//-------------------------------------------------------------------------------------------
// HW_DVFSC_DVFSPT2 - DVFS pattern 2 length
//-------------------------------------------------------------------------------------------

#ifndef __LANGUAGE_ASM__
/*!
 * @brief HW_DVFSC_DVFSPT2 - DVFS pattern 2 length (RW)
 *
 * Reset value: 0x00000010
 *

 */
typedef union _hw_dvfsc_dvfspt2
{
    reg32_t U;
    struct _hw_dvfsc_dvfspt2_bitfields
    {
        unsigned FPTN2 : 17; //!< [16:0] FPTN2 - Frequency pattern 2 counter During period of this counter the frequency will be increased to higher, than detected by the EMA-detected level.
        unsigned PT2A : 1; //!< [17] PT2A - Pattern 2 currently active (read-only)
        unsigned RESERVED0 : 8; //!< [25:18] reserved
        unsigned P2THR : 6; //!< [31:26] P2THR - Pattern 2 Threshold Threshold of current DVFS load (after EMA), for generating interrupts with PFUS indicators 110, 111.
    } B;
} hw_dvfsc_dvfspt2_t;
#endif

/*
 * constants & macros for entire DVFSC_DVFSPT2 register
 */
#define HW_DVFSC_DVFSPT2_ADDR      (REGS_DVFSC_BASE + 0x3c)

#ifndef __LANGUAGE_ASM__
#define HW_DVFSC_DVFSPT2           (*(volatile hw_dvfsc_dvfspt2_t *) HW_DVFSC_DVFSPT2_ADDR)
#define HW_DVFSC_DVFSPT2_RD()      (HW_DVFSC_DVFSPT2.U)
#define HW_DVFSC_DVFSPT2_WR(v)     (HW_DVFSC_DVFSPT2.U = (v))
#define HW_DVFSC_DVFSPT2_SET(v)    (HW_DVFSC_DVFSPT2_WR(HW_DVFSC_DVFSPT2_RD() |  (v)))
#define HW_DVFSC_DVFSPT2_CLR(v)    (HW_DVFSC_DVFSPT2_WR(HW_DVFSC_DVFSPT2_RD() & ~(v)))
#define HW_DVFSC_DVFSPT2_TOG(v)    (HW_DVFSC_DVFSPT2_WR(HW_DVFSC_DVFSPT2_RD() ^  (v)))
#endif

/*
 * constants & macros for individual DVFSC_DVFSPT2 bitfields
 */

/* --- Register HW_DVFSC_DVFSPT2, field FPTN2[16:0] (RW)
 *
 * FPTN2 - Frequency pattern 2 counter During period of this counter the frequency will be increased
 * to higher, than detected by the EMA-detected level.
 */

#define BP_DVFSC_DVFSPT2_FPTN2      (0)      //!< Bit position for DVFSC_DVFSPT2_FPTN2.
#define BM_DVFSC_DVFSPT2_FPTN2      (0x0001ffff)  //!< Bit mask for DVFSC_DVFSPT2_FPTN2.

//! @brief Get value of DVFSC_DVFSPT2_FPTN2 from a register value.
#define BG_DVFSC_DVFSPT2_FPTN2(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_DVFSC_DVFSPT2_FPTN2) >> BP_DVFSC_DVFSPT2_FPTN2)

//! @brief Format value for bitfield DVFSC_DVFSPT2_FPTN2.
#define BF_DVFSC_DVFSPT2_FPTN2(v)   ((__REG_VALUE_TYPE((v), reg32_t) << BP_DVFSC_DVFSPT2_FPTN2) & BM_DVFSC_DVFSPT2_FPTN2)

#ifndef __LANGUAGE_ASM__
//! @brief Set the FPTN2 field to a new value.
#define BW_DVFSC_DVFSPT2_FPTN2(v)   (HW_DVFSC_DVFSPT2_WR((HW_DVFSC_DVFSPT2_RD() & ~BM_DVFSC_DVFSPT2_FPTN2) | BF_DVFSC_DVFSPT2_FPTN2(v)))
#endif

/* --- Register HW_DVFSC_DVFSPT2, field PT2A[17] (RO)
 *
 * PT2A - Pattern 2 currently active (read-only)
 *
 * Values:
 * 0 - non-active
 * 1 - active
 */

#define BP_DVFSC_DVFSPT2_PT2A      (17)      //!< Bit position for DVFSC_DVFSPT2_PT2A.
#define BM_DVFSC_DVFSPT2_PT2A      (0x00020000)  //!< Bit mask for DVFSC_DVFSPT2_PT2A.

//! @brief Get value of DVFSC_DVFSPT2_PT2A from a register value.
#define BG_DVFSC_DVFSPT2_PT2A(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_DVFSC_DVFSPT2_PT2A) >> BP_DVFSC_DVFSPT2_PT2A)


/* --- Register HW_DVFSC_DVFSPT2, field P2THR[31:26] (RW)
 *
 * P2THR - Pattern 2 Threshold Threshold of current DVFS load (after EMA), for generating interrupts
 * with PFUS indicators 110, 111. If the current performance is greater than the P2THR value, the
 * interrupts will be generated. Otherwise, pattern delay will be counted, but without interrupt
 * generation.
 */

#define BP_DVFSC_DVFSPT2_P2THR      (26)      //!< Bit position for DVFSC_DVFSPT2_P2THR.
#define BM_DVFSC_DVFSPT2_P2THR      (0xfc000000)  //!< Bit mask for DVFSC_DVFSPT2_P2THR.

//! @brief Get value of DVFSC_DVFSPT2_P2THR from a register value.
#define BG_DVFSC_DVFSPT2_P2THR(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_DVFSC_DVFSPT2_P2THR) >> BP_DVFSC_DVFSPT2_P2THR)

//! @brief Format value for bitfield DVFSC_DVFSPT2_P2THR.
#define BF_DVFSC_DVFSPT2_P2THR(v)   ((__REG_VALUE_TYPE((v), reg32_t) << BP_DVFSC_DVFSPT2_P2THR) & BM_DVFSC_DVFSPT2_P2THR)

#ifndef __LANGUAGE_ASM__
//! @brief Set the P2THR field to a new value.
#define BW_DVFSC_DVFSPT2_P2THR(v)   (HW_DVFSC_DVFSPT2_WR((HW_DVFSC_DVFSPT2_RD() & ~BM_DVFSC_DVFSPT2_P2THR) | BF_DVFSC_DVFSPT2_P2THR(v)))
#endif

//-------------------------------------------------------------------------------------------
// HW_DVFSC_DVFSPT3 - DVFS pattern 3 length
//-------------------------------------------------------------------------------------------

#ifndef __LANGUAGE_ASM__
/*!
 * @brief HW_DVFSC_DVFSPT3 - DVFS pattern 3 length (RW)
 *
 * Reset value: 0x00000010
 *

 */
typedef union _hw_dvfsc_dvfspt3
{
    reg32_t U;
    struct _hw_dvfsc_dvfspt3_bitfields
    {
        unsigned FPTN3 : 17; //!< [16:0] FPTN3 - Frequency pattern 3 counter During period of this counter the frequency will be set to the EMA-detected level.
        unsigned PT3A : 1; //!< [17] PT3A - Pattern 3 currently active (read-only)
        unsigned RESERVED0 : 14; //!< [31:18] reserved
    } B;
} hw_dvfsc_dvfspt3_t;
#endif

/*
 * constants & macros for entire DVFSC_DVFSPT3 register
 */
#define HW_DVFSC_DVFSPT3_ADDR      (REGS_DVFSC_BASE + 0x40)

#ifndef __LANGUAGE_ASM__
#define HW_DVFSC_DVFSPT3           (*(volatile hw_dvfsc_dvfspt3_t *) HW_DVFSC_DVFSPT3_ADDR)
#define HW_DVFSC_DVFSPT3_RD()      (HW_DVFSC_DVFSPT3.U)
#define HW_DVFSC_DVFSPT3_WR(v)     (HW_DVFSC_DVFSPT3.U = (v))
#define HW_DVFSC_DVFSPT3_SET(v)    (HW_DVFSC_DVFSPT3_WR(HW_DVFSC_DVFSPT3_RD() |  (v)))
#define HW_DVFSC_DVFSPT3_CLR(v)    (HW_DVFSC_DVFSPT3_WR(HW_DVFSC_DVFSPT3_RD() & ~(v)))
#define HW_DVFSC_DVFSPT3_TOG(v)    (HW_DVFSC_DVFSPT3_WR(HW_DVFSC_DVFSPT3_RD() ^  (v)))
#endif

/*
 * constants & macros for individual DVFSC_DVFSPT3 bitfields
 */

/* --- Register HW_DVFSC_DVFSPT3, field FPTN3[16:0] (RW)
 *
 * FPTN3 - Frequency pattern 3 counter During period of this counter the frequency will be set to
 * the EMA-detected level.
 */

#define BP_DVFSC_DVFSPT3_FPTN3      (0)      //!< Bit position for DVFSC_DVFSPT3_FPTN3.
#define BM_DVFSC_DVFSPT3_FPTN3      (0x0001ffff)  //!< Bit mask for DVFSC_DVFSPT3_FPTN3.

//! @brief Get value of DVFSC_DVFSPT3_FPTN3 from a register value.
#define BG_DVFSC_DVFSPT3_FPTN3(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_DVFSC_DVFSPT3_FPTN3) >> BP_DVFSC_DVFSPT3_FPTN3)

//! @brief Format value for bitfield DVFSC_DVFSPT3_FPTN3.
#define BF_DVFSC_DVFSPT3_FPTN3(v)   ((__REG_VALUE_TYPE((v), reg32_t) << BP_DVFSC_DVFSPT3_FPTN3) & BM_DVFSC_DVFSPT3_FPTN3)

#ifndef __LANGUAGE_ASM__
//! @brief Set the FPTN3 field to a new value.
#define BW_DVFSC_DVFSPT3_FPTN3(v)   (HW_DVFSC_DVFSPT3_WR((HW_DVFSC_DVFSPT3_RD() & ~BM_DVFSC_DVFSPT3_FPTN3) | BF_DVFSC_DVFSPT3_FPTN3(v)))
#endif

/* --- Register HW_DVFSC_DVFSPT3, field PT3A[17] (RO)
 *
 * PT3A - Pattern 3 currently active (read-only)
 *
 * Values:
 * 0 - non-active
 * 1 - active
 */

#define BP_DVFSC_DVFSPT3_PT3A      (17)      //!< Bit position for DVFSC_DVFSPT3_PT3A.
#define BM_DVFSC_DVFSPT3_PT3A      (0x00020000)  //!< Bit mask for DVFSC_DVFSPT3_PT3A.

//! @brief Get value of DVFSC_DVFSPT3_PT3A from a register value.
#define BG_DVFSC_DVFSPT3_PT3A(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_DVFSC_DVFSPT3_PT3A) >> BP_DVFSC_DVFSPT3_PT3A)



/*!
 * @brief All DVFSC module registers.
 */
#ifndef __LANGUAGE_ASM__
#pragma pack(1)
typedef struct _hw_dvfsc
{
    volatile hw_dvfsc_thrs_t THRS; //!< DVFS Thresholds
    volatile hw_dvfsc_coun_t COUN; //!< DVFS Counters thresholds
    volatile hw_dvfsc_sig1_t SIG1; //!< DVFS general purpose bits weight
    volatile hw_dvfsc_dvfssig0_t DVFSSIG0; //!< DVFS general purpose bits weight
    volatile hw_dvfsc_dvfsgpc0_t DVFSGPC0; //!< DVFS general purpose bit 0 weight counter
    volatile hw_dvfsc_dvfsgpc1_t DVFSGPC1; //!< DVFS general purpose bit 1 weight counter
    volatile hw_dvfsc_dvfsgpbt_t DVFSGPBT; //!< DVFS general purpose bits enables
    volatile hw_dvfsc_dvfsemac_t DVFSEMAC; //!< DVFS EMAC settings
    volatile hw_dvfsc_cntr_t CNTR; //!< DVFS Control
    volatile hw_dvfsc_dvfsltr0_0_t DVFSLTR0_0; //!< DVFS Load Tracking Register 0, portion 0
    volatile hw_dvfsc_dvfsltr0_1_t DVFSLTR0_1; //!< DVFS Load Tracking Register 0, portion 1
    volatile hw_dvfsc_dvfsltr1_0_t DVFSLTR1_0; //!< DVFS Load Tracking Register 1, portion 0
    volatile hw_dvfsc_dvfsltr1_1_t DVFSLTR1_1; //!< DVFS Load Tracking Register 3, portion 1
    volatile hw_dvfsc_dvfspt0_t DVFSPT0; //!< DVFS pattern 0 length
    volatile hw_dvfsc_dvfspt1_t DVFSPT1; //!< DVFS pattern 1 length
    volatile hw_dvfsc_dvfspt2_t DVFSPT2; //!< DVFS pattern 2 length
    volatile hw_dvfsc_dvfspt3_t DVFSPT3; //!< DVFS pattern 3 length
} hw_dvfsc_t;
#pragma pack()

//! @brief Macro to access all DVFSC registers.
//! @return Reference (not a pointer) to the registers struct. To get a pointer to the struct,
//!     use the '&' operator, like <code>&HW_DVFSC(0)</code>.
#define HW_DVFSC     (*(volatile hw_dvfsc_t *) REGS_DVFSC_BASE)

#endif


#endif // __HW_DVFSC_REGISTERS_H__