/*
 * Copyright (C) 2012, Freescale Semiconductor, Inc. All Rights Reserved
 * THIS SOURCE CODE IS CONFIDENTIAL AND PROPRIETARY AND MAY NOT
 * BE USED OR DISTRIBUTED WITHOUT THE WRITTEN PERMISSION OF
 * Freescale Semiconductor, Inc.
 */

#ifndef __HW_DBGMON_REGISTERS_H__
#define __HW_DBGMON_REGISTERS_H__

#include "regs.h"

/*
 * i.MX6SL DBGMON registers defined in this header file.
 *
 * - HW_DBGMON_HW_DBGMON_CTRL - HW_DBGMON_CTRL
 * - HW_DBGMON_HW_DBGMON_MASTER_EN - HW_DBGMON_MASTER_EN
 * - HW_DBGMON_HW_DBGMON_IRQ - HW_DBGMON_IRQ
 * - HW_DBGMON_HW_DBGMON_TRAP_ADDR_LOW - HW_DBGMON_TRAP_ADDR_LOW
 * - HW_DBGMON_HW_DBGMON_TRAP_ADDR_HIGH - HW_DBGMON_TRAP_ADDR_HIGH
 * - HW_DBGMON_HW_DBGMON_TRAP_ID - HW_DBGMON_TRAP_ID
 * - HW_DBGMON_HW_DBGMON_SNVS_ADDR - HW_DBGMON_SNVS_ADDR
 * - HW_DBGMON_HW_DBGMON_SNVS_DATA - HW_DBGMON_SNVS_DATA
 * - HW_DBGMON_HW_DBGMON_SNVS_INFO - HW_DBGMON_SNVS_INFO
 * - HW_DBGMON_HW_DBGMON_VERSION - HW_DBGMON_VERSION
 *
 * - hw_dbgmon_t - Struct containing all module registers.
 */

//! @name Module base addresses
//@{
#ifndef REGS_DBGMON_BASE
#define HW_DBGMON_INSTANCE_COUNT (1) //!< Number of instances of the DBGMON module.
#define REGS_DBGMON_BASE (0x02090000) //!< Base address for DBGMON.
#endif
//@}


//-------------------------------------------------------------------------------------------
// HW_DBGMON_HW_DBGMON_CTRL - HW_DBGMON_CTRL
//-------------------------------------------------------------------------------------------

#ifndef __LANGUAGE_ASM__
/*!
 * @brief HW_DBGMON_HW_DBGMON_CTRL - HW_DBGMON_CTRL (RW)
 *
 * Reset value: 0xc0000000
 *

 */
typedef union _hw_dbgmon_hw_dbgmon_ctrl
{
    reg32_t U;
    struct _hw_dbgmon_hw_dbgmon_ctrl_bitfields
    {
        unsigned RUN : 1; //!< [0] Set this bit to one to enable the DBGMON operation
        unsigned SNAP : 1; //!< [1] Set this bit to snapshot the registers selected by REQSEL to SNVS domain registers
        unsigned CLR : 1; //!< [2] Set this bit to clear the registers in SOC domain.
        unsigned CLR_SNVS : 1; //!< [3] Set this bit to clear the registers in SNVS domain
        unsigned ADDR_TRAPMODE : 1; //!< [4] The bit defines the address trap function.
        unsigned ID_TRAPMODE : 1; //!< [5] The bit defines the ID trap function.
        unsigned RESERVED0 : 2; //!< [7:6] Reserved
        unsigned REQSEL : 2; //!< [9:8] This field defines which sets of AXI transaction will be snaped to SNVS domain registers.
        unsigned RESERVED1 : 6; //!< [15:10] Reserved
        unsigned WORKMODE : 1; //!< [16] This field defines whether ignore the transaction in IRQ
        unsigned RESERVED2 : 3; //!< [19:17] Reserved
        unsigned ADDR_MASKEN : 1; //!< [20] This field control the address mask function,
        unsigned RESERVED3 : 3; //!< [23:21] Reserved
        unsigned WDOG_IRQ_SEL : 1; //!< [24] Select the source of WDOG IRQ.
        unsigned RESERVED4 : 5; //!< [29:25] Reserved
        unsigned CLKGATE : 1; //!< [30] This bit must be set to zero for normal oepration.
        unsigned SFTRST : 1; //!< [31] Set to zero for normal operation.
    } B;
} hw_dbgmon_hw_dbgmon_ctrl_t;
#endif

/*
 * constants & macros for entire DBGMON_HW_DBGMON_CTRL register
 */
#define HW_DBGMON_HW_DBGMON_CTRL_ADDR      (REGS_DBGMON_BASE + 0x0)

#ifndef __LANGUAGE_ASM__
#define HW_DBGMON_HW_DBGMON_CTRL           (*(volatile hw_dbgmon_hw_dbgmon_ctrl_t *) HW_DBGMON_HW_DBGMON_CTRL_ADDR)
#define HW_DBGMON_HW_DBGMON_CTRL_RD()      (HW_DBGMON_HW_DBGMON_CTRL.U)
#define HW_DBGMON_HW_DBGMON_CTRL_WR(v)     (HW_DBGMON_HW_DBGMON_CTRL.U = (v))
#define HW_DBGMON_HW_DBGMON_CTRL_SET(v)    (HW_DBGMON_HW_DBGMON_CTRL_WR(HW_DBGMON_HW_DBGMON_CTRL_RD() |  (v)))
#define HW_DBGMON_HW_DBGMON_CTRL_CLR(v)    (HW_DBGMON_HW_DBGMON_CTRL_WR(HW_DBGMON_HW_DBGMON_CTRL_RD() & ~(v)))
#define HW_DBGMON_HW_DBGMON_CTRL_TOG(v)    (HW_DBGMON_HW_DBGMON_CTRL_WR(HW_DBGMON_HW_DBGMON_CTRL_RD() ^  (v)))
#endif

/*
 * constants & macros for individual DBGMON_HW_DBGMON_CTRL bitfields
 */

/* --- Register HW_DBGMON_HW_DBGMON_CTRL, field RUN[0] (RW)
 *
 * Set this bit to one to enable the DBGMON operation
 *
 * Values:
 * 0 - HALT, DBGMON is in halt status
 * 1 - RUN, DBGMON is in working status
 */

#define BP_DBGMON_HW_DBGMON_CTRL_RUN      (0)      //!< Bit position for DBGMON_HW_DBGMON_CTRL_RUN.
#define BM_DBGMON_HW_DBGMON_CTRL_RUN      (0x00000001)  //!< Bit mask for DBGMON_HW_DBGMON_CTRL_RUN.

//! @brief Get value of DBGMON_HW_DBGMON_CTRL_RUN from a register value.
#define BG_DBGMON_HW_DBGMON_CTRL_RUN(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_DBGMON_HW_DBGMON_CTRL_RUN) >> BP_DBGMON_HW_DBGMON_CTRL_RUN)

//! @brief Format value for bitfield DBGMON_HW_DBGMON_CTRL_RUN.
#define BF_DBGMON_HW_DBGMON_CTRL_RUN(v)   ((__REG_VALUE_TYPE((v), reg32_t) << BP_DBGMON_HW_DBGMON_CTRL_RUN) & BM_DBGMON_HW_DBGMON_CTRL_RUN)

#ifndef __LANGUAGE_ASM__
//! @brief Set the RUN field to a new value.
#define BW_DBGMON_HW_DBGMON_CTRL_RUN(v)   (HW_DBGMON_HW_DBGMON_CTRL_WR((HW_DBGMON_HW_DBGMON_CTRL_RD() & ~BM_DBGMON_HW_DBGMON_CTRL_RUN) | BF_DBGMON_HW_DBGMON_CTRL_RUN(v)))
#endif


/* --- Register HW_DBGMON_HW_DBGMON_CTRL, field SNAP[1] (RW)
 *
 * Set this bit to snapshot the registers selected by REQSEL to SNVS domain registers
 */

#define BP_DBGMON_HW_DBGMON_CTRL_SNAP      (1)      //!< Bit position for DBGMON_HW_DBGMON_CTRL_SNAP.
#define BM_DBGMON_HW_DBGMON_CTRL_SNAP      (0x00000002)  //!< Bit mask for DBGMON_HW_DBGMON_CTRL_SNAP.

//! @brief Get value of DBGMON_HW_DBGMON_CTRL_SNAP from a register value.
#define BG_DBGMON_HW_DBGMON_CTRL_SNAP(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_DBGMON_HW_DBGMON_CTRL_SNAP) >> BP_DBGMON_HW_DBGMON_CTRL_SNAP)

//! @brief Format value for bitfield DBGMON_HW_DBGMON_CTRL_SNAP.
#define BF_DBGMON_HW_DBGMON_CTRL_SNAP(v)   ((__REG_VALUE_TYPE((v), reg32_t) << BP_DBGMON_HW_DBGMON_CTRL_SNAP) & BM_DBGMON_HW_DBGMON_CTRL_SNAP)

#ifndef __LANGUAGE_ASM__
//! @brief Set the SNAP field to a new value.
#define BW_DBGMON_HW_DBGMON_CTRL_SNAP(v)   (HW_DBGMON_HW_DBGMON_CTRL_WR((HW_DBGMON_HW_DBGMON_CTRL_RD() & ~BM_DBGMON_HW_DBGMON_CTRL_SNAP) | BF_DBGMON_HW_DBGMON_CTRL_SNAP(v)))
#endif

/* --- Register HW_DBGMON_HW_DBGMON_CTRL, field CLR[2] (RW)
 *
 * Set this bit to clear the registers in SOC domain. This bit will be automatically set to 0 once
 * the clear process is done
 */

#define BP_DBGMON_HW_DBGMON_CTRL_CLR      (2)      //!< Bit position for DBGMON_HW_DBGMON_CTRL_CLR.
#define BM_DBGMON_HW_DBGMON_CTRL_CLR      (0x00000004)  //!< Bit mask for DBGMON_HW_DBGMON_CTRL_CLR.

//! @brief Get value of DBGMON_HW_DBGMON_CTRL_CLR from a register value.
#define BG_DBGMON_HW_DBGMON_CTRL_CLR(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_DBGMON_HW_DBGMON_CTRL_CLR) >> BP_DBGMON_HW_DBGMON_CTRL_CLR)

//! @brief Format value for bitfield DBGMON_HW_DBGMON_CTRL_CLR.
#define BF_DBGMON_HW_DBGMON_CTRL_CLR(v)   ((__REG_VALUE_TYPE((v), reg32_t) << BP_DBGMON_HW_DBGMON_CTRL_CLR) & BM_DBGMON_HW_DBGMON_CTRL_CLR)

#ifndef __LANGUAGE_ASM__
//! @brief Set the CLR field to a new value.
#define BW_DBGMON_HW_DBGMON_CTRL_CLR(v)   (HW_DBGMON_HW_DBGMON_CTRL_WR((HW_DBGMON_HW_DBGMON_CTRL_RD() & ~BM_DBGMON_HW_DBGMON_CTRL_CLR) | BF_DBGMON_HW_DBGMON_CTRL_CLR(v)))
#endif

/* --- Register HW_DBGMON_HW_DBGMON_CTRL, field CLR_SNVS[3] (RW)
 *
 * Set this bit to clear the registers in SNVS domain
 */

#define BP_DBGMON_HW_DBGMON_CTRL_CLR_SNVS      (3)      //!< Bit position for DBGMON_HW_DBGMON_CTRL_CLR_SNVS.
#define BM_DBGMON_HW_DBGMON_CTRL_CLR_SNVS      (0x00000008)  //!< Bit mask for DBGMON_HW_DBGMON_CTRL_CLR_SNVS.

//! @brief Get value of DBGMON_HW_DBGMON_CTRL_CLR_SNVS from a register value.
#define BG_DBGMON_HW_DBGMON_CTRL_CLR_SNVS(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_DBGMON_HW_DBGMON_CTRL_CLR_SNVS) >> BP_DBGMON_HW_DBGMON_CTRL_CLR_SNVS)

//! @brief Format value for bitfield DBGMON_HW_DBGMON_CTRL_CLR_SNVS.
#define BF_DBGMON_HW_DBGMON_CTRL_CLR_SNVS(v)   ((__REG_VALUE_TYPE((v), reg32_t) << BP_DBGMON_HW_DBGMON_CTRL_CLR_SNVS) & BM_DBGMON_HW_DBGMON_CTRL_CLR_SNVS)

#ifndef __LANGUAGE_ASM__
//! @brief Set the CLR_SNVS field to a new value.
#define BW_DBGMON_HW_DBGMON_CTRL_CLR_SNVS(v)   (HW_DBGMON_HW_DBGMON_CTRL_WR((HW_DBGMON_HW_DBGMON_CTRL_RD() & ~BM_DBGMON_HW_DBGMON_CTRL_CLR_SNVS) | BF_DBGMON_HW_DBGMON_CTRL_CLR_SNVS(v)))
#endif

/* --- Register HW_DBGMON_HW_DBGMON_CTRL, field ADDR_TRAPMODE[4] (RW)
 *
 * The bit defines the address trap function.
 *
 * Values:
 * 0 - Address trap function is disabled
 * 1 - Address trap function is enabled
 */

#define BP_DBGMON_HW_DBGMON_CTRL_ADDR_TRAPMODE      (4)      //!< Bit position for DBGMON_HW_DBGMON_CTRL_ADDR_TRAPMODE.
#define BM_DBGMON_HW_DBGMON_CTRL_ADDR_TRAPMODE      (0x00000010)  //!< Bit mask for DBGMON_HW_DBGMON_CTRL_ADDR_TRAPMODE.

//! @brief Get value of DBGMON_HW_DBGMON_CTRL_ADDR_TRAPMODE from a register value.
#define BG_DBGMON_HW_DBGMON_CTRL_ADDR_TRAPMODE(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_DBGMON_HW_DBGMON_CTRL_ADDR_TRAPMODE) >> BP_DBGMON_HW_DBGMON_CTRL_ADDR_TRAPMODE)

//! @brief Format value for bitfield DBGMON_HW_DBGMON_CTRL_ADDR_TRAPMODE.
#define BF_DBGMON_HW_DBGMON_CTRL_ADDR_TRAPMODE(v)   ((__REG_VALUE_TYPE((v), reg32_t) << BP_DBGMON_HW_DBGMON_CTRL_ADDR_TRAPMODE) & BM_DBGMON_HW_DBGMON_CTRL_ADDR_TRAPMODE)

#ifndef __LANGUAGE_ASM__
//! @brief Set the ADDR_TRAPMODE field to a new value.
#define BW_DBGMON_HW_DBGMON_CTRL_ADDR_TRAPMODE(v)   (HW_DBGMON_HW_DBGMON_CTRL_WR((HW_DBGMON_HW_DBGMON_CTRL_RD() & ~BM_DBGMON_HW_DBGMON_CTRL_ADDR_TRAPMODE) | BF_DBGMON_HW_DBGMON_CTRL_ADDR_TRAPMODE(v)))
#endif


/* --- Register HW_DBGMON_HW_DBGMON_CTRL, field ID_TRAPMODE[5] (RW)
 *
 * The bit defines the ID trap function.
 *
 * Values:
 * 0 - ID trap function is disabled
 * 1 - ID trap function is enabled
 */

#define BP_DBGMON_HW_DBGMON_CTRL_ID_TRAPMODE      (5)      //!< Bit position for DBGMON_HW_DBGMON_CTRL_ID_TRAPMODE.
#define BM_DBGMON_HW_DBGMON_CTRL_ID_TRAPMODE      (0x00000020)  //!< Bit mask for DBGMON_HW_DBGMON_CTRL_ID_TRAPMODE.

//! @brief Get value of DBGMON_HW_DBGMON_CTRL_ID_TRAPMODE from a register value.
#define BG_DBGMON_HW_DBGMON_CTRL_ID_TRAPMODE(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_DBGMON_HW_DBGMON_CTRL_ID_TRAPMODE) >> BP_DBGMON_HW_DBGMON_CTRL_ID_TRAPMODE)

//! @brief Format value for bitfield DBGMON_HW_DBGMON_CTRL_ID_TRAPMODE.
#define BF_DBGMON_HW_DBGMON_CTRL_ID_TRAPMODE(v)   ((__REG_VALUE_TYPE((v), reg32_t) << BP_DBGMON_HW_DBGMON_CTRL_ID_TRAPMODE) & BM_DBGMON_HW_DBGMON_CTRL_ID_TRAPMODE)

#ifndef __LANGUAGE_ASM__
//! @brief Set the ID_TRAPMODE field to a new value.
#define BW_DBGMON_HW_DBGMON_CTRL_ID_TRAPMODE(v)   (HW_DBGMON_HW_DBGMON_CTRL_WR((HW_DBGMON_HW_DBGMON_CTRL_RD() & ~BM_DBGMON_HW_DBGMON_CTRL_ID_TRAPMODE) | BF_DBGMON_HW_DBGMON_CTRL_ID_TRAPMODE(v)))
#endif


/* --- Register HW_DBGMON_HW_DBGMON_CTRL, field REQSEL[9:8] (RW)
 *
 * This field defines which sets of AXI transaction will be snaped to SNVS domain registers. Assume
 * (N-3), (N-2), (N-1), N represent four continous most recent AXI transactions, N is the latest
 * transactions
 *
 * Values:
 * 00 - The information of the latest transaction will be snapped to SNVS domain registers
 * 01 - (N-1) transaction will be snapped to SNVS domain registers
 * 10 - (N-2) transaction will be snapped to SNVS domain registers
 * 11 - (N-3) transaction will be snapped to SNVS domain registers
 */

#define BP_DBGMON_HW_DBGMON_CTRL_REQSEL      (8)      //!< Bit position for DBGMON_HW_DBGMON_CTRL_REQSEL.
#define BM_DBGMON_HW_DBGMON_CTRL_REQSEL      (0x00000300)  //!< Bit mask for DBGMON_HW_DBGMON_CTRL_REQSEL.

//! @brief Get value of DBGMON_HW_DBGMON_CTRL_REQSEL from a register value.
#define BG_DBGMON_HW_DBGMON_CTRL_REQSEL(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_DBGMON_HW_DBGMON_CTRL_REQSEL) >> BP_DBGMON_HW_DBGMON_CTRL_REQSEL)

//! @brief Format value for bitfield DBGMON_HW_DBGMON_CTRL_REQSEL.
#define BF_DBGMON_HW_DBGMON_CTRL_REQSEL(v)   ((__REG_VALUE_TYPE((v), reg32_t) << BP_DBGMON_HW_DBGMON_CTRL_REQSEL) & BM_DBGMON_HW_DBGMON_CTRL_REQSEL)

#ifndef __LANGUAGE_ASM__
//! @brief Set the REQSEL field to a new value.
#define BW_DBGMON_HW_DBGMON_CTRL_REQSEL(v)   (HW_DBGMON_HW_DBGMON_CTRL_WR((HW_DBGMON_HW_DBGMON_CTRL_RD() & ~BM_DBGMON_HW_DBGMON_CTRL_REQSEL) | BF_DBGMON_HW_DBGMON_CTRL_REQSEL(v)))
#endif


/* --- Register HW_DBGMON_HW_DBGMON_CTRL, field WORKMODE[16] (RW)
 *
 * This field defines whether ignore the transaction in IRQ
 *
 * Values:
 * 0 - The axi transaction in interrupt status will be monitored
 * 1 - The axi transaction in interrupt status will be ignored
 */

#define BP_DBGMON_HW_DBGMON_CTRL_WORKMODE      (16)      //!< Bit position for DBGMON_HW_DBGMON_CTRL_WORKMODE.
#define BM_DBGMON_HW_DBGMON_CTRL_WORKMODE      (0x00010000)  //!< Bit mask for DBGMON_HW_DBGMON_CTRL_WORKMODE.

//! @brief Get value of DBGMON_HW_DBGMON_CTRL_WORKMODE from a register value.
#define BG_DBGMON_HW_DBGMON_CTRL_WORKMODE(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_DBGMON_HW_DBGMON_CTRL_WORKMODE) >> BP_DBGMON_HW_DBGMON_CTRL_WORKMODE)

//! @brief Format value for bitfield DBGMON_HW_DBGMON_CTRL_WORKMODE.
#define BF_DBGMON_HW_DBGMON_CTRL_WORKMODE(v)   ((__REG_VALUE_TYPE((v), reg32_t) << BP_DBGMON_HW_DBGMON_CTRL_WORKMODE) & BM_DBGMON_HW_DBGMON_CTRL_WORKMODE)

#ifndef __LANGUAGE_ASM__
//! @brief Set the WORKMODE field to a new value.
#define BW_DBGMON_HW_DBGMON_CTRL_WORKMODE(v)   (HW_DBGMON_HW_DBGMON_CTRL_WR((HW_DBGMON_HW_DBGMON_CTRL_RD() & ~BM_DBGMON_HW_DBGMON_CTRL_WORKMODE) | BF_DBGMON_HW_DBGMON_CTRL_WORKMODE(v)))
#endif


/* --- Register HW_DBGMON_HW_DBGMON_CTRL, field ADDR_MASKEN[20] (RW)
 *
 * This field control the address mask function,
 *
 * Values:
 * 0 - Address mask is disabled, all address range will be monitored
 * 1 - Address mask is enabled, address within the range defined by ADDR_HIGH, ADDR_LOW will be monitored
 */

#define BP_DBGMON_HW_DBGMON_CTRL_ADDR_MASKEN      (20)      //!< Bit position for DBGMON_HW_DBGMON_CTRL_ADDR_MASKEN.
#define BM_DBGMON_HW_DBGMON_CTRL_ADDR_MASKEN      (0x00100000)  //!< Bit mask for DBGMON_HW_DBGMON_CTRL_ADDR_MASKEN.

//! @brief Get value of DBGMON_HW_DBGMON_CTRL_ADDR_MASKEN from a register value.
#define BG_DBGMON_HW_DBGMON_CTRL_ADDR_MASKEN(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_DBGMON_HW_DBGMON_CTRL_ADDR_MASKEN) >> BP_DBGMON_HW_DBGMON_CTRL_ADDR_MASKEN)

//! @brief Format value for bitfield DBGMON_HW_DBGMON_CTRL_ADDR_MASKEN.
#define BF_DBGMON_HW_DBGMON_CTRL_ADDR_MASKEN(v)   ((__REG_VALUE_TYPE((v), reg32_t) << BP_DBGMON_HW_DBGMON_CTRL_ADDR_MASKEN) & BM_DBGMON_HW_DBGMON_CTRL_ADDR_MASKEN)

#ifndef __LANGUAGE_ASM__
//! @brief Set the ADDR_MASKEN field to a new value.
#define BW_DBGMON_HW_DBGMON_CTRL_ADDR_MASKEN(v)   (HW_DBGMON_HW_DBGMON_CTRL_WR((HW_DBGMON_HW_DBGMON_CTRL_RD() & ~BM_DBGMON_HW_DBGMON_CTRL_ADDR_MASKEN) | BF_DBGMON_HW_DBGMON_CTRL_ADDR_MASKEN(v)))
#endif


/* --- Register HW_DBGMON_HW_DBGMON_CTRL, field WDOG_IRQ_SEL[24] (RW)
 *
 * Select the source of WDOG IRQ.
 *
 * Values:
 * 0 - Select WDOG1 as WDOG IRQ source
 * 1 - Select WDOG2 as WDOG IRQ source
 */

#define BP_DBGMON_HW_DBGMON_CTRL_WDOG_IRQ_SEL      (24)      //!< Bit position for DBGMON_HW_DBGMON_CTRL_WDOG_IRQ_SEL.
#define BM_DBGMON_HW_DBGMON_CTRL_WDOG_IRQ_SEL      (0x01000000)  //!< Bit mask for DBGMON_HW_DBGMON_CTRL_WDOG_IRQ_SEL.

//! @brief Get value of DBGMON_HW_DBGMON_CTRL_WDOG_IRQ_SEL from a register value.
#define BG_DBGMON_HW_DBGMON_CTRL_WDOG_IRQ_SEL(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_DBGMON_HW_DBGMON_CTRL_WDOG_IRQ_SEL) >> BP_DBGMON_HW_DBGMON_CTRL_WDOG_IRQ_SEL)

//! @brief Format value for bitfield DBGMON_HW_DBGMON_CTRL_WDOG_IRQ_SEL.
#define BF_DBGMON_HW_DBGMON_CTRL_WDOG_IRQ_SEL(v)   ((__REG_VALUE_TYPE((v), reg32_t) << BP_DBGMON_HW_DBGMON_CTRL_WDOG_IRQ_SEL) & BM_DBGMON_HW_DBGMON_CTRL_WDOG_IRQ_SEL)

#ifndef __LANGUAGE_ASM__
//! @brief Set the WDOG_IRQ_SEL field to a new value.
#define BW_DBGMON_HW_DBGMON_CTRL_WDOG_IRQ_SEL(v)   (HW_DBGMON_HW_DBGMON_CTRL_WR((HW_DBGMON_HW_DBGMON_CTRL_RD() & ~BM_DBGMON_HW_DBGMON_CTRL_WDOG_IRQ_SEL) | BF_DBGMON_HW_DBGMON_CTRL_WDOG_IRQ_SEL(v)))
#endif


/* --- Register HW_DBGMON_HW_DBGMON_CTRL, field CLKGATE[30] (RW)
 *
 * This bit must be set to zero for normal oepration. When set to one it gates off the clock to the
 * block.
 *
 * Values:
 * 0 - Allow DBGMON to operate normally
 * 1 - Gating off the clock of DBGMON in order to minimize the power consumption.
 */

#define BP_DBGMON_HW_DBGMON_CTRL_CLKGATE      (30)      //!< Bit position for DBGMON_HW_DBGMON_CTRL_CLKGATE.
#define BM_DBGMON_HW_DBGMON_CTRL_CLKGATE      (0x40000000)  //!< Bit mask for DBGMON_HW_DBGMON_CTRL_CLKGATE.

//! @brief Get value of DBGMON_HW_DBGMON_CTRL_CLKGATE from a register value.
#define BG_DBGMON_HW_DBGMON_CTRL_CLKGATE(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_DBGMON_HW_DBGMON_CTRL_CLKGATE) >> BP_DBGMON_HW_DBGMON_CTRL_CLKGATE)

//! @brief Format value for bitfield DBGMON_HW_DBGMON_CTRL_CLKGATE.
#define BF_DBGMON_HW_DBGMON_CTRL_CLKGATE(v)   ((__REG_VALUE_TYPE((v), reg32_t) << BP_DBGMON_HW_DBGMON_CTRL_CLKGATE) & BM_DBGMON_HW_DBGMON_CTRL_CLKGATE)

#ifndef __LANGUAGE_ASM__
//! @brief Set the CLKGATE field to a new value.
#define BW_DBGMON_HW_DBGMON_CTRL_CLKGATE(v)   (HW_DBGMON_HW_DBGMON_CTRL_WR((HW_DBGMON_HW_DBGMON_CTRL_RD() & ~BM_DBGMON_HW_DBGMON_CTRL_CLKGATE) | BF_DBGMON_HW_DBGMON_CTRL_CLKGATE(v)))
#endif


/* --- Register HW_DBGMON_HW_DBGMON_CTRL, field SFTRST[31] (RW)
 *
 * Set to zero for normal operation. When this bit is set to one(default), then the entire block is
 * held in its reset state
 *
 * Values:
 * 0 - Allow DBGMON to operate normally
 * 1 - Hold DBGMON in reset
 */

#define BP_DBGMON_HW_DBGMON_CTRL_SFTRST      (31)      //!< Bit position for DBGMON_HW_DBGMON_CTRL_SFTRST.
#define BM_DBGMON_HW_DBGMON_CTRL_SFTRST      (0x80000000)  //!< Bit mask for DBGMON_HW_DBGMON_CTRL_SFTRST.

//! @brief Get value of DBGMON_HW_DBGMON_CTRL_SFTRST from a register value.
#define BG_DBGMON_HW_DBGMON_CTRL_SFTRST(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_DBGMON_HW_DBGMON_CTRL_SFTRST) >> BP_DBGMON_HW_DBGMON_CTRL_SFTRST)

//! @brief Format value for bitfield DBGMON_HW_DBGMON_CTRL_SFTRST.
#define BF_DBGMON_HW_DBGMON_CTRL_SFTRST(v)   ((__REG_VALUE_TYPE((v), reg32_t) << BP_DBGMON_HW_DBGMON_CTRL_SFTRST) & BM_DBGMON_HW_DBGMON_CTRL_SFTRST)

#ifndef __LANGUAGE_ASM__
//! @brief Set the SFTRST field to a new value.
#define BW_DBGMON_HW_DBGMON_CTRL_SFTRST(v)   (HW_DBGMON_HW_DBGMON_CTRL_WR((HW_DBGMON_HW_DBGMON_CTRL_RD() & ~BM_DBGMON_HW_DBGMON_CTRL_SFTRST) | BF_DBGMON_HW_DBGMON_CTRL_SFTRST(v)))
#endif


//-------------------------------------------------------------------------------------------
// HW_DBGMON_HW_DBGMON_MASTER_EN - HW_DBGMON_MASTER_EN
//-------------------------------------------------------------------------------------------

#ifndef __LANGUAGE_ASM__
/*!
 * @brief HW_DBGMON_HW_DBGMON_MASTER_EN - HW_DBGMON_MASTER_EN (RW)
 *
 * Reset value: 0x00000000
 *

 */
typedef union _hw_dbgmon_hw_dbgmon_master_en
{
    reg32_t U;
    struct _hw_dbgmon_hw_dbgmon_master_en_bitfields
    {
        unsigned MID0 : 1; //!< [0] Set to 1 to enable monitoring on MasterID 0.
        unsigned MID1 : 1; //!< [1] Set to 1 to enable monitoring on MasterID 1.
        unsigned MID2 : 1; //!< [2] Set to 1 to enable monitoring on MasterID 2.
        unsigned MID3 : 1; //!< [3] Set to 1 to enable monitoring on MasterID 3.
        unsigned MID4 : 1; //!< [4] Set to 1 to enable monitoring on MasterID 4.
        unsigned MID5 : 1; //!< [5] Set to 1 to enable monitoring on MasterID 5
        unsigned MID6 : 1; //!< [6] Set to 1 to enable monitoring on MasterID 6.
        unsigned MID7 : 1; //!< [7] Set to 1 to enable monitoring on MasterID 7.
        unsigned MID8 : 1; //!< [8] Set to 1 to enable monitoring on MasterID 8.
        unsigned MID9 : 1; //!< [9] Set to 1 to enable monitoring on MasterID 9.
        unsigned MID10 : 1; //!< [10] Set to 1 to enable monitoring on MasterID 10.
        unsigned MID11 : 1; //!< [11] Set to 1 to enable monitoring on MasterID 11.
        unsigned MID12 : 1; //!< [12] Set to 1 to enable monitoring on MasterID 12.
        unsigned MID13 : 1; //!< [13] Set to 1 to enable monitoring on MasterID 13.
        unsigned MID14 : 1; //!< [14] Set to 1 to enable monitoring on MasterID 14.
        unsigned MID15 : 1; //!< [15] Set to 1 to enable monitoring on MasterID 15.
        unsigned RESERVED0 : 16; //!< [31:16] Reserved
    } B;
} hw_dbgmon_hw_dbgmon_master_en_t;
#endif

/*
 * constants & macros for entire DBGMON_HW_DBGMON_MASTER_EN register
 */
#define HW_DBGMON_HW_DBGMON_MASTER_EN_ADDR      (REGS_DBGMON_BASE + 0x10)

#ifndef __LANGUAGE_ASM__
#define HW_DBGMON_HW_DBGMON_MASTER_EN           (*(volatile hw_dbgmon_hw_dbgmon_master_en_t *) HW_DBGMON_HW_DBGMON_MASTER_EN_ADDR)
#define HW_DBGMON_HW_DBGMON_MASTER_EN_RD()      (HW_DBGMON_HW_DBGMON_MASTER_EN.U)
#define HW_DBGMON_HW_DBGMON_MASTER_EN_WR(v)     (HW_DBGMON_HW_DBGMON_MASTER_EN.U = (v))
#define HW_DBGMON_HW_DBGMON_MASTER_EN_SET(v)    (HW_DBGMON_HW_DBGMON_MASTER_EN_WR(HW_DBGMON_HW_DBGMON_MASTER_EN_RD() |  (v)))
#define HW_DBGMON_HW_DBGMON_MASTER_EN_CLR(v)    (HW_DBGMON_HW_DBGMON_MASTER_EN_WR(HW_DBGMON_HW_DBGMON_MASTER_EN_RD() & ~(v)))
#define HW_DBGMON_HW_DBGMON_MASTER_EN_TOG(v)    (HW_DBGMON_HW_DBGMON_MASTER_EN_WR(HW_DBGMON_HW_DBGMON_MASTER_EN_RD() ^  (v)))
#endif

/*
 * constants & macros for individual DBGMON_HW_DBGMON_MASTER_EN bitfields
 */

/* --- Register HW_DBGMON_HW_DBGMON_MASTER_EN, field MID0[0] (RW)
 *
 * Set to 1 to enable monitoring on MasterID 0.
 */

#define BP_DBGMON_HW_DBGMON_MASTER_EN_MID0      (0)      //!< Bit position for DBGMON_HW_DBGMON_MASTER_EN_MID0.
#define BM_DBGMON_HW_DBGMON_MASTER_EN_MID0      (0x00000001)  //!< Bit mask for DBGMON_HW_DBGMON_MASTER_EN_MID0.

//! @brief Get value of DBGMON_HW_DBGMON_MASTER_EN_MID0 from a register value.
#define BG_DBGMON_HW_DBGMON_MASTER_EN_MID0(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_DBGMON_HW_DBGMON_MASTER_EN_MID0) >> BP_DBGMON_HW_DBGMON_MASTER_EN_MID0)

//! @brief Format value for bitfield DBGMON_HW_DBGMON_MASTER_EN_MID0.
#define BF_DBGMON_HW_DBGMON_MASTER_EN_MID0(v)   ((__REG_VALUE_TYPE((v), reg32_t) << BP_DBGMON_HW_DBGMON_MASTER_EN_MID0) & BM_DBGMON_HW_DBGMON_MASTER_EN_MID0)

#ifndef __LANGUAGE_ASM__
//! @brief Set the MID0 field to a new value.
#define BW_DBGMON_HW_DBGMON_MASTER_EN_MID0(v)   (HW_DBGMON_HW_DBGMON_MASTER_EN_WR((HW_DBGMON_HW_DBGMON_MASTER_EN_RD() & ~BM_DBGMON_HW_DBGMON_MASTER_EN_MID0) | BF_DBGMON_HW_DBGMON_MASTER_EN_MID0(v)))
#endif

/* --- Register HW_DBGMON_HW_DBGMON_MASTER_EN, field MID1[1] (RW)
 *
 * Set to 1 to enable monitoring on MasterID 1.
 */

#define BP_DBGMON_HW_DBGMON_MASTER_EN_MID1      (1)      //!< Bit position for DBGMON_HW_DBGMON_MASTER_EN_MID1.
#define BM_DBGMON_HW_DBGMON_MASTER_EN_MID1      (0x00000002)  //!< Bit mask for DBGMON_HW_DBGMON_MASTER_EN_MID1.

//! @brief Get value of DBGMON_HW_DBGMON_MASTER_EN_MID1 from a register value.
#define BG_DBGMON_HW_DBGMON_MASTER_EN_MID1(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_DBGMON_HW_DBGMON_MASTER_EN_MID1) >> BP_DBGMON_HW_DBGMON_MASTER_EN_MID1)

//! @brief Format value for bitfield DBGMON_HW_DBGMON_MASTER_EN_MID1.
#define BF_DBGMON_HW_DBGMON_MASTER_EN_MID1(v)   ((__REG_VALUE_TYPE((v), reg32_t) << BP_DBGMON_HW_DBGMON_MASTER_EN_MID1) & BM_DBGMON_HW_DBGMON_MASTER_EN_MID1)

#ifndef __LANGUAGE_ASM__
//! @brief Set the MID1 field to a new value.
#define BW_DBGMON_HW_DBGMON_MASTER_EN_MID1(v)   (HW_DBGMON_HW_DBGMON_MASTER_EN_WR((HW_DBGMON_HW_DBGMON_MASTER_EN_RD() & ~BM_DBGMON_HW_DBGMON_MASTER_EN_MID1) | BF_DBGMON_HW_DBGMON_MASTER_EN_MID1(v)))
#endif

/* --- Register HW_DBGMON_HW_DBGMON_MASTER_EN, field MID2[2] (RW)
 *
 * Set to 1 to enable monitoring on MasterID 2.
 */

#define BP_DBGMON_HW_DBGMON_MASTER_EN_MID2      (2)      //!< Bit position for DBGMON_HW_DBGMON_MASTER_EN_MID2.
#define BM_DBGMON_HW_DBGMON_MASTER_EN_MID2      (0x00000004)  //!< Bit mask for DBGMON_HW_DBGMON_MASTER_EN_MID2.

//! @brief Get value of DBGMON_HW_DBGMON_MASTER_EN_MID2 from a register value.
#define BG_DBGMON_HW_DBGMON_MASTER_EN_MID2(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_DBGMON_HW_DBGMON_MASTER_EN_MID2) >> BP_DBGMON_HW_DBGMON_MASTER_EN_MID2)

//! @brief Format value for bitfield DBGMON_HW_DBGMON_MASTER_EN_MID2.
#define BF_DBGMON_HW_DBGMON_MASTER_EN_MID2(v)   ((__REG_VALUE_TYPE((v), reg32_t) << BP_DBGMON_HW_DBGMON_MASTER_EN_MID2) & BM_DBGMON_HW_DBGMON_MASTER_EN_MID2)

#ifndef __LANGUAGE_ASM__
//! @brief Set the MID2 field to a new value.
#define BW_DBGMON_HW_DBGMON_MASTER_EN_MID2(v)   (HW_DBGMON_HW_DBGMON_MASTER_EN_WR((HW_DBGMON_HW_DBGMON_MASTER_EN_RD() & ~BM_DBGMON_HW_DBGMON_MASTER_EN_MID2) | BF_DBGMON_HW_DBGMON_MASTER_EN_MID2(v)))
#endif

/* --- Register HW_DBGMON_HW_DBGMON_MASTER_EN, field MID3[3] (RW)
 *
 * Set to 1 to enable monitoring on MasterID 3.
 */

#define BP_DBGMON_HW_DBGMON_MASTER_EN_MID3      (3)      //!< Bit position for DBGMON_HW_DBGMON_MASTER_EN_MID3.
#define BM_DBGMON_HW_DBGMON_MASTER_EN_MID3      (0x00000008)  //!< Bit mask for DBGMON_HW_DBGMON_MASTER_EN_MID3.

//! @brief Get value of DBGMON_HW_DBGMON_MASTER_EN_MID3 from a register value.
#define BG_DBGMON_HW_DBGMON_MASTER_EN_MID3(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_DBGMON_HW_DBGMON_MASTER_EN_MID3) >> BP_DBGMON_HW_DBGMON_MASTER_EN_MID3)

//! @brief Format value for bitfield DBGMON_HW_DBGMON_MASTER_EN_MID3.
#define BF_DBGMON_HW_DBGMON_MASTER_EN_MID3(v)   ((__REG_VALUE_TYPE((v), reg32_t) << BP_DBGMON_HW_DBGMON_MASTER_EN_MID3) & BM_DBGMON_HW_DBGMON_MASTER_EN_MID3)

#ifndef __LANGUAGE_ASM__
//! @brief Set the MID3 field to a new value.
#define BW_DBGMON_HW_DBGMON_MASTER_EN_MID3(v)   (HW_DBGMON_HW_DBGMON_MASTER_EN_WR((HW_DBGMON_HW_DBGMON_MASTER_EN_RD() & ~BM_DBGMON_HW_DBGMON_MASTER_EN_MID3) | BF_DBGMON_HW_DBGMON_MASTER_EN_MID3(v)))
#endif

/* --- Register HW_DBGMON_HW_DBGMON_MASTER_EN, field MID4[4] (RW)
 *
 * Set to 1 to enable monitoring on MasterID 4.
 */

#define BP_DBGMON_HW_DBGMON_MASTER_EN_MID4      (4)      //!< Bit position for DBGMON_HW_DBGMON_MASTER_EN_MID4.
#define BM_DBGMON_HW_DBGMON_MASTER_EN_MID4      (0x00000010)  //!< Bit mask for DBGMON_HW_DBGMON_MASTER_EN_MID4.

//! @brief Get value of DBGMON_HW_DBGMON_MASTER_EN_MID4 from a register value.
#define BG_DBGMON_HW_DBGMON_MASTER_EN_MID4(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_DBGMON_HW_DBGMON_MASTER_EN_MID4) >> BP_DBGMON_HW_DBGMON_MASTER_EN_MID4)

//! @brief Format value for bitfield DBGMON_HW_DBGMON_MASTER_EN_MID4.
#define BF_DBGMON_HW_DBGMON_MASTER_EN_MID4(v)   ((__REG_VALUE_TYPE((v), reg32_t) << BP_DBGMON_HW_DBGMON_MASTER_EN_MID4) & BM_DBGMON_HW_DBGMON_MASTER_EN_MID4)

#ifndef __LANGUAGE_ASM__
//! @brief Set the MID4 field to a new value.
#define BW_DBGMON_HW_DBGMON_MASTER_EN_MID4(v)   (HW_DBGMON_HW_DBGMON_MASTER_EN_WR((HW_DBGMON_HW_DBGMON_MASTER_EN_RD() & ~BM_DBGMON_HW_DBGMON_MASTER_EN_MID4) | BF_DBGMON_HW_DBGMON_MASTER_EN_MID4(v)))
#endif

/* --- Register HW_DBGMON_HW_DBGMON_MASTER_EN, field MID5[5] (RW)
 *
 * Set to 1 to enable monitoring on MasterID 5
 */

#define BP_DBGMON_HW_DBGMON_MASTER_EN_MID5      (5)      //!< Bit position for DBGMON_HW_DBGMON_MASTER_EN_MID5.
#define BM_DBGMON_HW_DBGMON_MASTER_EN_MID5      (0x00000020)  //!< Bit mask for DBGMON_HW_DBGMON_MASTER_EN_MID5.

//! @brief Get value of DBGMON_HW_DBGMON_MASTER_EN_MID5 from a register value.
#define BG_DBGMON_HW_DBGMON_MASTER_EN_MID5(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_DBGMON_HW_DBGMON_MASTER_EN_MID5) >> BP_DBGMON_HW_DBGMON_MASTER_EN_MID5)

//! @brief Format value for bitfield DBGMON_HW_DBGMON_MASTER_EN_MID5.
#define BF_DBGMON_HW_DBGMON_MASTER_EN_MID5(v)   ((__REG_VALUE_TYPE((v), reg32_t) << BP_DBGMON_HW_DBGMON_MASTER_EN_MID5) & BM_DBGMON_HW_DBGMON_MASTER_EN_MID5)

#ifndef __LANGUAGE_ASM__
//! @brief Set the MID5 field to a new value.
#define BW_DBGMON_HW_DBGMON_MASTER_EN_MID5(v)   (HW_DBGMON_HW_DBGMON_MASTER_EN_WR((HW_DBGMON_HW_DBGMON_MASTER_EN_RD() & ~BM_DBGMON_HW_DBGMON_MASTER_EN_MID5) | BF_DBGMON_HW_DBGMON_MASTER_EN_MID5(v)))
#endif

/* --- Register HW_DBGMON_HW_DBGMON_MASTER_EN, field MID6[6] (RW)
 *
 * Set to 1 to enable monitoring on MasterID 6.
 */

#define BP_DBGMON_HW_DBGMON_MASTER_EN_MID6      (6)      //!< Bit position for DBGMON_HW_DBGMON_MASTER_EN_MID6.
#define BM_DBGMON_HW_DBGMON_MASTER_EN_MID6      (0x00000040)  //!< Bit mask for DBGMON_HW_DBGMON_MASTER_EN_MID6.

//! @brief Get value of DBGMON_HW_DBGMON_MASTER_EN_MID6 from a register value.
#define BG_DBGMON_HW_DBGMON_MASTER_EN_MID6(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_DBGMON_HW_DBGMON_MASTER_EN_MID6) >> BP_DBGMON_HW_DBGMON_MASTER_EN_MID6)

//! @brief Format value for bitfield DBGMON_HW_DBGMON_MASTER_EN_MID6.
#define BF_DBGMON_HW_DBGMON_MASTER_EN_MID6(v)   ((__REG_VALUE_TYPE((v), reg32_t) << BP_DBGMON_HW_DBGMON_MASTER_EN_MID6) & BM_DBGMON_HW_DBGMON_MASTER_EN_MID6)

#ifndef __LANGUAGE_ASM__
//! @brief Set the MID6 field to a new value.
#define BW_DBGMON_HW_DBGMON_MASTER_EN_MID6(v)   (HW_DBGMON_HW_DBGMON_MASTER_EN_WR((HW_DBGMON_HW_DBGMON_MASTER_EN_RD() & ~BM_DBGMON_HW_DBGMON_MASTER_EN_MID6) | BF_DBGMON_HW_DBGMON_MASTER_EN_MID6(v)))
#endif

/* --- Register HW_DBGMON_HW_DBGMON_MASTER_EN, field MID7[7] (RW)
 *
 * Set to 1 to enable monitoring on MasterID 7.
 */

#define BP_DBGMON_HW_DBGMON_MASTER_EN_MID7      (7)      //!< Bit position for DBGMON_HW_DBGMON_MASTER_EN_MID7.
#define BM_DBGMON_HW_DBGMON_MASTER_EN_MID7      (0x00000080)  //!< Bit mask for DBGMON_HW_DBGMON_MASTER_EN_MID7.

//! @brief Get value of DBGMON_HW_DBGMON_MASTER_EN_MID7 from a register value.
#define BG_DBGMON_HW_DBGMON_MASTER_EN_MID7(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_DBGMON_HW_DBGMON_MASTER_EN_MID7) >> BP_DBGMON_HW_DBGMON_MASTER_EN_MID7)

//! @brief Format value for bitfield DBGMON_HW_DBGMON_MASTER_EN_MID7.
#define BF_DBGMON_HW_DBGMON_MASTER_EN_MID7(v)   ((__REG_VALUE_TYPE((v), reg32_t) << BP_DBGMON_HW_DBGMON_MASTER_EN_MID7) & BM_DBGMON_HW_DBGMON_MASTER_EN_MID7)

#ifndef __LANGUAGE_ASM__
//! @brief Set the MID7 field to a new value.
#define BW_DBGMON_HW_DBGMON_MASTER_EN_MID7(v)   (HW_DBGMON_HW_DBGMON_MASTER_EN_WR((HW_DBGMON_HW_DBGMON_MASTER_EN_RD() & ~BM_DBGMON_HW_DBGMON_MASTER_EN_MID7) | BF_DBGMON_HW_DBGMON_MASTER_EN_MID7(v)))
#endif

/* --- Register HW_DBGMON_HW_DBGMON_MASTER_EN, field MID8[8] (RW)
 *
 * Set to 1 to enable monitoring on MasterID 8.
 */

#define BP_DBGMON_HW_DBGMON_MASTER_EN_MID8      (8)      //!< Bit position for DBGMON_HW_DBGMON_MASTER_EN_MID8.
#define BM_DBGMON_HW_DBGMON_MASTER_EN_MID8      (0x00000100)  //!< Bit mask for DBGMON_HW_DBGMON_MASTER_EN_MID8.

//! @brief Get value of DBGMON_HW_DBGMON_MASTER_EN_MID8 from a register value.
#define BG_DBGMON_HW_DBGMON_MASTER_EN_MID8(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_DBGMON_HW_DBGMON_MASTER_EN_MID8) >> BP_DBGMON_HW_DBGMON_MASTER_EN_MID8)

//! @brief Format value for bitfield DBGMON_HW_DBGMON_MASTER_EN_MID8.
#define BF_DBGMON_HW_DBGMON_MASTER_EN_MID8(v)   ((__REG_VALUE_TYPE((v), reg32_t) << BP_DBGMON_HW_DBGMON_MASTER_EN_MID8) & BM_DBGMON_HW_DBGMON_MASTER_EN_MID8)

#ifndef __LANGUAGE_ASM__
//! @brief Set the MID8 field to a new value.
#define BW_DBGMON_HW_DBGMON_MASTER_EN_MID8(v)   (HW_DBGMON_HW_DBGMON_MASTER_EN_WR((HW_DBGMON_HW_DBGMON_MASTER_EN_RD() & ~BM_DBGMON_HW_DBGMON_MASTER_EN_MID8) | BF_DBGMON_HW_DBGMON_MASTER_EN_MID8(v)))
#endif

/* --- Register HW_DBGMON_HW_DBGMON_MASTER_EN, field MID9[9] (RW)
 *
 * Set to 1 to enable monitoring on MasterID 9.
 */

#define BP_DBGMON_HW_DBGMON_MASTER_EN_MID9      (9)      //!< Bit position for DBGMON_HW_DBGMON_MASTER_EN_MID9.
#define BM_DBGMON_HW_DBGMON_MASTER_EN_MID9      (0x00000200)  //!< Bit mask for DBGMON_HW_DBGMON_MASTER_EN_MID9.

//! @brief Get value of DBGMON_HW_DBGMON_MASTER_EN_MID9 from a register value.
#define BG_DBGMON_HW_DBGMON_MASTER_EN_MID9(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_DBGMON_HW_DBGMON_MASTER_EN_MID9) >> BP_DBGMON_HW_DBGMON_MASTER_EN_MID9)

//! @brief Format value for bitfield DBGMON_HW_DBGMON_MASTER_EN_MID9.
#define BF_DBGMON_HW_DBGMON_MASTER_EN_MID9(v)   ((__REG_VALUE_TYPE((v), reg32_t) << BP_DBGMON_HW_DBGMON_MASTER_EN_MID9) & BM_DBGMON_HW_DBGMON_MASTER_EN_MID9)

#ifndef __LANGUAGE_ASM__
//! @brief Set the MID9 field to a new value.
#define BW_DBGMON_HW_DBGMON_MASTER_EN_MID9(v)   (HW_DBGMON_HW_DBGMON_MASTER_EN_WR((HW_DBGMON_HW_DBGMON_MASTER_EN_RD() & ~BM_DBGMON_HW_DBGMON_MASTER_EN_MID9) | BF_DBGMON_HW_DBGMON_MASTER_EN_MID9(v)))
#endif

/* --- Register HW_DBGMON_HW_DBGMON_MASTER_EN, field MID10[10] (RW)
 *
 * Set to 1 to enable monitoring on MasterID 10.
 */

#define BP_DBGMON_HW_DBGMON_MASTER_EN_MID10      (10)      //!< Bit position for DBGMON_HW_DBGMON_MASTER_EN_MID10.
#define BM_DBGMON_HW_DBGMON_MASTER_EN_MID10      (0x00000400)  //!< Bit mask for DBGMON_HW_DBGMON_MASTER_EN_MID10.

//! @brief Get value of DBGMON_HW_DBGMON_MASTER_EN_MID10 from a register value.
#define BG_DBGMON_HW_DBGMON_MASTER_EN_MID10(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_DBGMON_HW_DBGMON_MASTER_EN_MID10) >> BP_DBGMON_HW_DBGMON_MASTER_EN_MID10)

//! @brief Format value for bitfield DBGMON_HW_DBGMON_MASTER_EN_MID10.
#define BF_DBGMON_HW_DBGMON_MASTER_EN_MID10(v)   ((__REG_VALUE_TYPE((v), reg32_t) << BP_DBGMON_HW_DBGMON_MASTER_EN_MID10) & BM_DBGMON_HW_DBGMON_MASTER_EN_MID10)

#ifndef __LANGUAGE_ASM__
//! @brief Set the MID10 field to a new value.
#define BW_DBGMON_HW_DBGMON_MASTER_EN_MID10(v)   (HW_DBGMON_HW_DBGMON_MASTER_EN_WR((HW_DBGMON_HW_DBGMON_MASTER_EN_RD() & ~BM_DBGMON_HW_DBGMON_MASTER_EN_MID10) | BF_DBGMON_HW_DBGMON_MASTER_EN_MID10(v)))
#endif

/* --- Register HW_DBGMON_HW_DBGMON_MASTER_EN, field MID11[11] (RW)
 *
 * Set to 1 to enable monitoring on MasterID 11.
 */

#define BP_DBGMON_HW_DBGMON_MASTER_EN_MID11      (11)      //!< Bit position for DBGMON_HW_DBGMON_MASTER_EN_MID11.
#define BM_DBGMON_HW_DBGMON_MASTER_EN_MID11      (0x00000800)  //!< Bit mask for DBGMON_HW_DBGMON_MASTER_EN_MID11.

//! @brief Get value of DBGMON_HW_DBGMON_MASTER_EN_MID11 from a register value.
#define BG_DBGMON_HW_DBGMON_MASTER_EN_MID11(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_DBGMON_HW_DBGMON_MASTER_EN_MID11) >> BP_DBGMON_HW_DBGMON_MASTER_EN_MID11)

//! @brief Format value for bitfield DBGMON_HW_DBGMON_MASTER_EN_MID11.
#define BF_DBGMON_HW_DBGMON_MASTER_EN_MID11(v)   ((__REG_VALUE_TYPE((v), reg32_t) << BP_DBGMON_HW_DBGMON_MASTER_EN_MID11) & BM_DBGMON_HW_DBGMON_MASTER_EN_MID11)

#ifndef __LANGUAGE_ASM__
//! @brief Set the MID11 field to a new value.
#define BW_DBGMON_HW_DBGMON_MASTER_EN_MID11(v)   (HW_DBGMON_HW_DBGMON_MASTER_EN_WR((HW_DBGMON_HW_DBGMON_MASTER_EN_RD() & ~BM_DBGMON_HW_DBGMON_MASTER_EN_MID11) | BF_DBGMON_HW_DBGMON_MASTER_EN_MID11(v)))
#endif

/* --- Register HW_DBGMON_HW_DBGMON_MASTER_EN, field MID12[12] (RW)
 *
 * Set to 1 to enable monitoring on MasterID 12.
 */

#define BP_DBGMON_HW_DBGMON_MASTER_EN_MID12      (12)      //!< Bit position for DBGMON_HW_DBGMON_MASTER_EN_MID12.
#define BM_DBGMON_HW_DBGMON_MASTER_EN_MID12      (0x00001000)  //!< Bit mask for DBGMON_HW_DBGMON_MASTER_EN_MID12.

//! @brief Get value of DBGMON_HW_DBGMON_MASTER_EN_MID12 from a register value.
#define BG_DBGMON_HW_DBGMON_MASTER_EN_MID12(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_DBGMON_HW_DBGMON_MASTER_EN_MID12) >> BP_DBGMON_HW_DBGMON_MASTER_EN_MID12)

//! @brief Format value for bitfield DBGMON_HW_DBGMON_MASTER_EN_MID12.
#define BF_DBGMON_HW_DBGMON_MASTER_EN_MID12(v)   ((__REG_VALUE_TYPE((v), reg32_t) << BP_DBGMON_HW_DBGMON_MASTER_EN_MID12) & BM_DBGMON_HW_DBGMON_MASTER_EN_MID12)

#ifndef __LANGUAGE_ASM__
//! @brief Set the MID12 field to a new value.
#define BW_DBGMON_HW_DBGMON_MASTER_EN_MID12(v)   (HW_DBGMON_HW_DBGMON_MASTER_EN_WR((HW_DBGMON_HW_DBGMON_MASTER_EN_RD() & ~BM_DBGMON_HW_DBGMON_MASTER_EN_MID12) | BF_DBGMON_HW_DBGMON_MASTER_EN_MID12(v)))
#endif

/* --- Register HW_DBGMON_HW_DBGMON_MASTER_EN, field MID13[13] (RW)
 *
 * Set to 1 to enable monitoring on MasterID 13.
 */

#define BP_DBGMON_HW_DBGMON_MASTER_EN_MID13      (13)      //!< Bit position for DBGMON_HW_DBGMON_MASTER_EN_MID13.
#define BM_DBGMON_HW_DBGMON_MASTER_EN_MID13      (0x00002000)  //!< Bit mask for DBGMON_HW_DBGMON_MASTER_EN_MID13.

//! @brief Get value of DBGMON_HW_DBGMON_MASTER_EN_MID13 from a register value.
#define BG_DBGMON_HW_DBGMON_MASTER_EN_MID13(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_DBGMON_HW_DBGMON_MASTER_EN_MID13) >> BP_DBGMON_HW_DBGMON_MASTER_EN_MID13)

//! @brief Format value for bitfield DBGMON_HW_DBGMON_MASTER_EN_MID13.
#define BF_DBGMON_HW_DBGMON_MASTER_EN_MID13(v)   ((__REG_VALUE_TYPE((v), reg32_t) << BP_DBGMON_HW_DBGMON_MASTER_EN_MID13) & BM_DBGMON_HW_DBGMON_MASTER_EN_MID13)

#ifndef __LANGUAGE_ASM__
//! @brief Set the MID13 field to a new value.
#define BW_DBGMON_HW_DBGMON_MASTER_EN_MID13(v)   (HW_DBGMON_HW_DBGMON_MASTER_EN_WR((HW_DBGMON_HW_DBGMON_MASTER_EN_RD() & ~BM_DBGMON_HW_DBGMON_MASTER_EN_MID13) | BF_DBGMON_HW_DBGMON_MASTER_EN_MID13(v)))
#endif

/* --- Register HW_DBGMON_HW_DBGMON_MASTER_EN, field MID14[14] (RW)
 *
 * Set to 1 to enable monitoring on MasterID 14.
 */

#define BP_DBGMON_HW_DBGMON_MASTER_EN_MID14      (14)      //!< Bit position for DBGMON_HW_DBGMON_MASTER_EN_MID14.
#define BM_DBGMON_HW_DBGMON_MASTER_EN_MID14      (0x00004000)  //!< Bit mask for DBGMON_HW_DBGMON_MASTER_EN_MID14.

//! @brief Get value of DBGMON_HW_DBGMON_MASTER_EN_MID14 from a register value.
#define BG_DBGMON_HW_DBGMON_MASTER_EN_MID14(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_DBGMON_HW_DBGMON_MASTER_EN_MID14) >> BP_DBGMON_HW_DBGMON_MASTER_EN_MID14)

//! @brief Format value for bitfield DBGMON_HW_DBGMON_MASTER_EN_MID14.
#define BF_DBGMON_HW_DBGMON_MASTER_EN_MID14(v)   ((__REG_VALUE_TYPE((v), reg32_t) << BP_DBGMON_HW_DBGMON_MASTER_EN_MID14) & BM_DBGMON_HW_DBGMON_MASTER_EN_MID14)

#ifndef __LANGUAGE_ASM__
//! @brief Set the MID14 field to a new value.
#define BW_DBGMON_HW_DBGMON_MASTER_EN_MID14(v)   (HW_DBGMON_HW_DBGMON_MASTER_EN_WR((HW_DBGMON_HW_DBGMON_MASTER_EN_RD() & ~BM_DBGMON_HW_DBGMON_MASTER_EN_MID14) | BF_DBGMON_HW_DBGMON_MASTER_EN_MID14(v)))
#endif

/* --- Register HW_DBGMON_HW_DBGMON_MASTER_EN, field MID15[15] (RW)
 *
 * Set to 1 to enable monitoring on MasterID 15.
 */

#define BP_DBGMON_HW_DBGMON_MASTER_EN_MID15      (15)      //!< Bit position for DBGMON_HW_DBGMON_MASTER_EN_MID15.
#define BM_DBGMON_HW_DBGMON_MASTER_EN_MID15      (0x00008000)  //!< Bit mask for DBGMON_HW_DBGMON_MASTER_EN_MID15.

//! @brief Get value of DBGMON_HW_DBGMON_MASTER_EN_MID15 from a register value.
#define BG_DBGMON_HW_DBGMON_MASTER_EN_MID15(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_DBGMON_HW_DBGMON_MASTER_EN_MID15) >> BP_DBGMON_HW_DBGMON_MASTER_EN_MID15)

//! @brief Format value for bitfield DBGMON_HW_DBGMON_MASTER_EN_MID15.
#define BF_DBGMON_HW_DBGMON_MASTER_EN_MID15(v)   ((__REG_VALUE_TYPE((v), reg32_t) << BP_DBGMON_HW_DBGMON_MASTER_EN_MID15) & BM_DBGMON_HW_DBGMON_MASTER_EN_MID15)

#ifndef __LANGUAGE_ASM__
//! @brief Set the MID15 field to a new value.
#define BW_DBGMON_HW_DBGMON_MASTER_EN_MID15(v)   (HW_DBGMON_HW_DBGMON_MASTER_EN_WR((HW_DBGMON_HW_DBGMON_MASTER_EN_RD() & ~BM_DBGMON_HW_DBGMON_MASTER_EN_MID15) | BF_DBGMON_HW_DBGMON_MASTER_EN_MID15(v)))
#endif

//-------------------------------------------------------------------------------------------
// HW_DBGMON_HW_DBGMON_IRQ - HW_DBGMON_IRQ
//-------------------------------------------------------------------------------------------

#ifndef __LANGUAGE_ASM__
/*!
 * @brief HW_DBGMON_HW_DBGMON_IRQ - HW_DBGMON_IRQ (RW)
 *
 * Reset value: 0x0000ffff
 *

 */
typedef union _hw_dbgmon_hw_dbgmon_irq
{
    reg32_t U;
    struct _hw_dbgmon_hw_dbgmon_irq_bitfields
    {
        unsigned ADDR_TRAP_IRQEN : 1; //!< [0] Address trap interrupt control.
        unsigned ID_TRAP_IRQEN : 1; //!< [1] ID trap interrupt control.
        unsigned ADDR_TRAP_IRQ : 1; //!< [2] This bit indicates the Address trap interrupt is happening.
        unsigned ID_TRAP_IRQ : 1; //!< [3] This bit indicates the ID trap interrupt is happening.
        unsigned RESERVED0 : 12; //!< [15:4] Reserved.
        unsigned IRQ_MID : 16; //!< [31:16] This field indicate which master sends the interrupt, will not update until all interrupts are cleared.
    } B;
} hw_dbgmon_hw_dbgmon_irq_t;
#endif

/*
 * constants & macros for entire DBGMON_HW_DBGMON_IRQ register
 */
#define HW_DBGMON_HW_DBGMON_IRQ_ADDR      (REGS_DBGMON_BASE + 0x20)

#ifndef __LANGUAGE_ASM__
#define HW_DBGMON_HW_DBGMON_IRQ           (*(volatile hw_dbgmon_hw_dbgmon_irq_t *) HW_DBGMON_HW_DBGMON_IRQ_ADDR)
#define HW_DBGMON_HW_DBGMON_IRQ_RD()      (HW_DBGMON_HW_DBGMON_IRQ.U)
#define HW_DBGMON_HW_DBGMON_IRQ_WR(v)     (HW_DBGMON_HW_DBGMON_IRQ.U = (v))
#define HW_DBGMON_HW_DBGMON_IRQ_SET(v)    (HW_DBGMON_HW_DBGMON_IRQ_WR(HW_DBGMON_HW_DBGMON_IRQ_RD() |  (v)))
#define HW_DBGMON_HW_DBGMON_IRQ_CLR(v)    (HW_DBGMON_HW_DBGMON_IRQ_WR(HW_DBGMON_HW_DBGMON_IRQ_RD() & ~(v)))
#define HW_DBGMON_HW_DBGMON_IRQ_TOG(v)    (HW_DBGMON_HW_DBGMON_IRQ_WR(HW_DBGMON_HW_DBGMON_IRQ_RD() ^  (v)))
#endif

/*
 * constants & macros for individual DBGMON_HW_DBGMON_IRQ bitfields
 */

/* --- Register HW_DBGMON_HW_DBGMON_IRQ, field ADDR_TRAP_IRQEN[0] (RW)
 *
 * Address trap interrupt control.
 *
 * Values:
 * 0 - Address trap interrupt is disabled
 * 1 - Address trap interrupt is enabled
 */

#define BP_DBGMON_HW_DBGMON_IRQ_ADDR_TRAP_IRQEN      (0)      //!< Bit position for DBGMON_HW_DBGMON_IRQ_ADDR_TRAP_IRQEN.
#define BM_DBGMON_HW_DBGMON_IRQ_ADDR_TRAP_IRQEN      (0x00000001)  //!< Bit mask for DBGMON_HW_DBGMON_IRQ_ADDR_TRAP_IRQEN.

//! @brief Get value of DBGMON_HW_DBGMON_IRQ_ADDR_TRAP_IRQEN from a register value.
#define BG_DBGMON_HW_DBGMON_IRQ_ADDR_TRAP_IRQEN(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_DBGMON_HW_DBGMON_IRQ_ADDR_TRAP_IRQEN) >> BP_DBGMON_HW_DBGMON_IRQ_ADDR_TRAP_IRQEN)

//! @brief Format value for bitfield DBGMON_HW_DBGMON_IRQ_ADDR_TRAP_IRQEN.
#define BF_DBGMON_HW_DBGMON_IRQ_ADDR_TRAP_IRQEN(v)   ((__REG_VALUE_TYPE((v), reg32_t) << BP_DBGMON_HW_DBGMON_IRQ_ADDR_TRAP_IRQEN) & BM_DBGMON_HW_DBGMON_IRQ_ADDR_TRAP_IRQEN)

#ifndef __LANGUAGE_ASM__
//! @brief Set the ADDR_TRAP_IRQEN field to a new value.
#define BW_DBGMON_HW_DBGMON_IRQ_ADDR_TRAP_IRQEN(v)   (HW_DBGMON_HW_DBGMON_IRQ_WR((HW_DBGMON_HW_DBGMON_IRQ_RD() & ~BM_DBGMON_HW_DBGMON_IRQ_ADDR_TRAP_IRQEN) | BF_DBGMON_HW_DBGMON_IRQ_ADDR_TRAP_IRQEN(v)))
#endif


/* --- Register HW_DBGMON_HW_DBGMON_IRQ, field ID_TRAP_IRQEN[1] (RW)
 *
 * ID trap interrupt control.
 *
 * Values:
 * 0 - ID trap interrupt is disabled
 * 1 - ID trap interrupt is enabled
 */

#define BP_DBGMON_HW_DBGMON_IRQ_ID_TRAP_IRQEN      (1)      //!< Bit position for DBGMON_HW_DBGMON_IRQ_ID_TRAP_IRQEN.
#define BM_DBGMON_HW_DBGMON_IRQ_ID_TRAP_IRQEN      (0x00000002)  //!< Bit mask for DBGMON_HW_DBGMON_IRQ_ID_TRAP_IRQEN.

//! @brief Get value of DBGMON_HW_DBGMON_IRQ_ID_TRAP_IRQEN from a register value.
#define BG_DBGMON_HW_DBGMON_IRQ_ID_TRAP_IRQEN(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_DBGMON_HW_DBGMON_IRQ_ID_TRAP_IRQEN) >> BP_DBGMON_HW_DBGMON_IRQ_ID_TRAP_IRQEN)

//! @brief Format value for bitfield DBGMON_HW_DBGMON_IRQ_ID_TRAP_IRQEN.
#define BF_DBGMON_HW_DBGMON_IRQ_ID_TRAP_IRQEN(v)   ((__REG_VALUE_TYPE((v), reg32_t) << BP_DBGMON_HW_DBGMON_IRQ_ID_TRAP_IRQEN) & BM_DBGMON_HW_DBGMON_IRQ_ID_TRAP_IRQEN)

#ifndef __LANGUAGE_ASM__
//! @brief Set the ID_TRAP_IRQEN field to a new value.
#define BW_DBGMON_HW_DBGMON_IRQ_ID_TRAP_IRQEN(v)   (HW_DBGMON_HW_DBGMON_IRQ_WR((HW_DBGMON_HW_DBGMON_IRQ_RD() & ~BM_DBGMON_HW_DBGMON_IRQ_ID_TRAP_IRQEN) | BF_DBGMON_HW_DBGMON_IRQ_ID_TRAP_IRQEN(v)))
#endif


/* --- Register HW_DBGMON_HW_DBGMON_IRQ, field ADDR_TRAP_IRQ[2] (RW)
 *
 * This bit indicates the Address trap interrupt is happening. Write to 1 to SCT address(offset =
 * 0x28) to clear it.
 */

#define BP_DBGMON_HW_DBGMON_IRQ_ADDR_TRAP_IRQ      (2)      //!< Bit position for DBGMON_HW_DBGMON_IRQ_ADDR_TRAP_IRQ.
#define BM_DBGMON_HW_DBGMON_IRQ_ADDR_TRAP_IRQ      (0x00000004)  //!< Bit mask for DBGMON_HW_DBGMON_IRQ_ADDR_TRAP_IRQ.

//! @brief Get value of DBGMON_HW_DBGMON_IRQ_ADDR_TRAP_IRQ from a register value.
#define BG_DBGMON_HW_DBGMON_IRQ_ADDR_TRAP_IRQ(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_DBGMON_HW_DBGMON_IRQ_ADDR_TRAP_IRQ) >> BP_DBGMON_HW_DBGMON_IRQ_ADDR_TRAP_IRQ)

//! @brief Format value for bitfield DBGMON_HW_DBGMON_IRQ_ADDR_TRAP_IRQ.
#define BF_DBGMON_HW_DBGMON_IRQ_ADDR_TRAP_IRQ(v)   ((__REG_VALUE_TYPE((v), reg32_t) << BP_DBGMON_HW_DBGMON_IRQ_ADDR_TRAP_IRQ) & BM_DBGMON_HW_DBGMON_IRQ_ADDR_TRAP_IRQ)

#ifndef __LANGUAGE_ASM__
//! @brief Set the ADDR_TRAP_IRQ field to a new value.
#define BW_DBGMON_HW_DBGMON_IRQ_ADDR_TRAP_IRQ(v)   (HW_DBGMON_HW_DBGMON_IRQ_WR((HW_DBGMON_HW_DBGMON_IRQ_RD() & ~BM_DBGMON_HW_DBGMON_IRQ_ADDR_TRAP_IRQ) | BF_DBGMON_HW_DBGMON_IRQ_ADDR_TRAP_IRQ(v)))
#endif

/* --- Register HW_DBGMON_HW_DBGMON_IRQ, field ID_TRAP_IRQ[3] (RW)
 *
 * This bit indicates the ID trap interrupt is happening. Write to 1 to SCT address(offset = 0x28)
 * to clear it.
 */

#define BP_DBGMON_HW_DBGMON_IRQ_ID_TRAP_IRQ      (3)      //!< Bit position for DBGMON_HW_DBGMON_IRQ_ID_TRAP_IRQ.
#define BM_DBGMON_HW_DBGMON_IRQ_ID_TRAP_IRQ      (0x00000008)  //!< Bit mask for DBGMON_HW_DBGMON_IRQ_ID_TRAP_IRQ.

//! @brief Get value of DBGMON_HW_DBGMON_IRQ_ID_TRAP_IRQ from a register value.
#define BG_DBGMON_HW_DBGMON_IRQ_ID_TRAP_IRQ(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_DBGMON_HW_DBGMON_IRQ_ID_TRAP_IRQ) >> BP_DBGMON_HW_DBGMON_IRQ_ID_TRAP_IRQ)

//! @brief Format value for bitfield DBGMON_HW_DBGMON_IRQ_ID_TRAP_IRQ.
#define BF_DBGMON_HW_DBGMON_IRQ_ID_TRAP_IRQ(v)   ((__REG_VALUE_TYPE((v), reg32_t) << BP_DBGMON_HW_DBGMON_IRQ_ID_TRAP_IRQ) & BM_DBGMON_HW_DBGMON_IRQ_ID_TRAP_IRQ)

#ifndef __LANGUAGE_ASM__
//! @brief Set the ID_TRAP_IRQ field to a new value.
#define BW_DBGMON_HW_DBGMON_IRQ_ID_TRAP_IRQ(v)   (HW_DBGMON_HW_DBGMON_IRQ_WR((HW_DBGMON_HW_DBGMON_IRQ_RD() & ~BM_DBGMON_HW_DBGMON_IRQ_ID_TRAP_IRQ) | BF_DBGMON_HW_DBGMON_IRQ_ID_TRAP_IRQ(v)))
#endif

/* --- Register HW_DBGMON_HW_DBGMON_IRQ, field IRQ_MID[31:16] (RW)
 *
 * This field indicate which master sends the interrupt, will not update until all interrupts are
 * cleared. each bit represents one master. IRQ_MID[16] represents Master 0 IRQ_MID[17] represents
 * Master 1, and so on
 */

#define BP_DBGMON_HW_DBGMON_IRQ_IRQ_MID      (16)      //!< Bit position for DBGMON_HW_DBGMON_IRQ_IRQ_MID.
#define BM_DBGMON_HW_DBGMON_IRQ_IRQ_MID      (0xffff0000)  //!< Bit mask for DBGMON_HW_DBGMON_IRQ_IRQ_MID.

//! @brief Get value of DBGMON_HW_DBGMON_IRQ_IRQ_MID from a register value.
#define BG_DBGMON_HW_DBGMON_IRQ_IRQ_MID(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_DBGMON_HW_DBGMON_IRQ_IRQ_MID) >> BP_DBGMON_HW_DBGMON_IRQ_IRQ_MID)

//! @brief Format value for bitfield DBGMON_HW_DBGMON_IRQ_IRQ_MID.
#define BF_DBGMON_HW_DBGMON_IRQ_IRQ_MID(v)   ((__REG_VALUE_TYPE((v), reg32_t) << BP_DBGMON_HW_DBGMON_IRQ_IRQ_MID) & BM_DBGMON_HW_DBGMON_IRQ_IRQ_MID)

#ifndef __LANGUAGE_ASM__
//! @brief Set the IRQ_MID field to a new value.
#define BW_DBGMON_HW_DBGMON_IRQ_IRQ_MID(v)   (HW_DBGMON_HW_DBGMON_IRQ_WR((HW_DBGMON_HW_DBGMON_IRQ_RD() & ~BM_DBGMON_HW_DBGMON_IRQ_IRQ_MID) | BF_DBGMON_HW_DBGMON_IRQ_IRQ_MID(v)))
#endif

//-------------------------------------------------------------------------------------------
// HW_DBGMON_HW_DBGMON_TRAP_ADDR_LOW - HW_DBGMON_TRAP_ADDR_LOW
//-------------------------------------------------------------------------------------------

#ifndef __LANGUAGE_ASM__
/*!
 * @brief HW_DBGMON_HW_DBGMON_TRAP_ADDR_LOW - HW_DBGMON_TRAP_ADDR_LOW (RW)
 *
 * Reset value: 0x00000000
 *

 */
typedef union _hw_dbgmon_hw_dbgmon_trap_addr_low
{
    reg32_t U;
    struct _hw_dbgmon_hw_dbgmon_trap_addr_low_bitfields
    {
        unsigned ADDRESS : 32; //!< [31:0] This field contains 32-bit low address for the address trap range
    } B;
} hw_dbgmon_hw_dbgmon_trap_addr_low_t;
#endif

/*
 * constants & macros for entire DBGMON_HW_DBGMON_TRAP_ADDR_LOW register
 */
#define HW_DBGMON_HW_DBGMON_TRAP_ADDR_LOW_ADDR      (REGS_DBGMON_BASE + 0x30)

#ifndef __LANGUAGE_ASM__
#define HW_DBGMON_HW_DBGMON_TRAP_ADDR_LOW           (*(volatile hw_dbgmon_hw_dbgmon_trap_addr_low_t *) HW_DBGMON_HW_DBGMON_TRAP_ADDR_LOW_ADDR)
#define HW_DBGMON_HW_DBGMON_TRAP_ADDR_LOW_RD()      (HW_DBGMON_HW_DBGMON_TRAP_ADDR_LOW.U)
#define HW_DBGMON_HW_DBGMON_TRAP_ADDR_LOW_WR(v)     (HW_DBGMON_HW_DBGMON_TRAP_ADDR_LOW.U = (v))
#define HW_DBGMON_HW_DBGMON_TRAP_ADDR_LOW_SET(v)    (HW_DBGMON_HW_DBGMON_TRAP_ADDR_LOW_WR(HW_DBGMON_HW_DBGMON_TRAP_ADDR_LOW_RD() |  (v)))
#define HW_DBGMON_HW_DBGMON_TRAP_ADDR_LOW_CLR(v)    (HW_DBGMON_HW_DBGMON_TRAP_ADDR_LOW_WR(HW_DBGMON_HW_DBGMON_TRAP_ADDR_LOW_RD() & ~(v)))
#define HW_DBGMON_HW_DBGMON_TRAP_ADDR_LOW_TOG(v)    (HW_DBGMON_HW_DBGMON_TRAP_ADDR_LOW_WR(HW_DBGMON_HW_DBGMON_TRAP_ADDR_LOW_RD() ^  (v)))
#endif

/*
 * constants & macros for individual DBGMON_HW_DBGMON_TRAP_ADDR_LOW bitfields
 */

/* --- Register HW_DBGMON_HW_DBGMON_TRAP_ADDR_LOW, field ADDRESS[31:0] (RW)
 *
 * This field contains 32-bit low address for the address trap range
 */

#define BP_DBGMON_HW_DBGMON_TRAP_ADDR_LOW_ADDRESS      (0)      //!< Bit position for DBGMON_HW_DBGMON_TRAP_ADDR_LOW_ADDRESS.
#define BM_DBGMON_HW_DBGMON_TRAP_ADDR_LOW_ADDRESS      (0xffffffff)  //!< Bit mask for DBGMON_HW_DBGMON_TRAP_ADDR_LOW_ADDRESS.

//! @brief Get value of DBGMON_HW_DBGMON_TRAP_ADDR_LOW_ADDRESS from a register value.
#define BG_DBGMON_HW_DBGMON_TRAP_ADDR_LOW_ADDRESS(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_DBGMON_HW_DBGMON_TRAP_ADDR_LOW_ADDRESS) >> BP_DBGMON_HW_DBGMON_TRAP_ADDR_LOW_ADDRESS)

//! @brief Format value for bitfield DBGMON_HW_DBGMON_TRAP_ADDR_LOW_ADDRESS.
#define BF_DBGMON_HW_DBGMON_TRAP_ADDR_LOW_ADDRESS(v)   ((__REG_VALUE_TYPE((v), reg32_t) << BP_DBGMON_HW_DBGMON_TRAP_ADDR_LOW_ADDRESS) & BM_DBGMON_HW_DBGMON_TRAP_ADDR_LOW_ADDRESS)

#ifndef __LANGUAGE_ASM__
//! @brief Set the ADDRESS field to a new value.
#define BW_DBGMON_HW_DBGMON_TRAP_ADDR_LOW_ADDRESS(v)   (HW_DBGMON_HW_DBGMON_TRAP_ADDR_LOW_WR((HW_DBGMON_HW_DBGMON_TRAP_ADDR_LOW_RD() & ~BM_DBGMON_HW_DBGMON_TRAP_ADDR_LOW_ADDRESS) | BF_DBGMON_HW_DBGMON_TRAP_ADDR_LOW_ADDRESS(v)))
#endif

//-------------------------------------------------------------------------------------------
// HW_DBGMON_HW_DBGMON_TRAP_ADDR_HIGH - HW_DBGMON_TRAP_ADDR_HIGH
//-------------------------------------------------------------------------------------------

#ifndef __LANGUAGE_ASM__
/*!
 * @brief HW_DBGMON_HW_DBGMON_TRAP_ADDR_HIGH - HW_DBGMON_TRAP_ADDR_HIGH (RW)
 *
 * Reset value: 0x00000000
 *

 */
typedef union _hw_dbgmon_hw_dbgmon_trap_addr_high
{
    reg32_t U;
    struct _hw_dbgmon_hw_dbgmon_trap_addr_high_bitfields
    {
        unsigned ADDRESS : 32; //!< [31:0] This field contains 32-bit high address for the address trap range
    } B;
} hw_dbgmon_hw_dbgmon_trap_addr_high_t;
#endif

/*
 * constants & macros for entire DBGMON_HW_DBGMON_TRAP_ADDR_HIGH register
 */
#define HW_DBGMON_HW_DBGMON_TRAP_ADDR_HIGH_ADDR      (REGS_DBGMON_BASE + 0x40)

#ifndef __LANGUAGE_ASM__
#define HW_DBGMON_HW_DBGMON_TRAP_ADDR_HIGH           (*(volatile hw_dbgmon_hw_dbgmon_trap_addr_high_t *) HW_DBGMON_HW_DBGMON_TRAP_ADDR_HIGH_ADDR)
#define HW_DBGMON_HW_DBGMON_TRAP_ADDR_HIGH_RD()      (HW_DBGMON_HW_DBGMON_TRAP_ADDR_HIGH.U)
#define HW_DBGMON_HW_DBGMON_TRAP_ADDR_HIGH_WR(v)     (HW_DBGMON_HW_DBGMON_TRAP_ADDR_HIGH.U = (v))
#define HW_DBGMON_HW_DBGMON_TRAP_ADDR_HIGH_SET(v)    (HW_DBGMON_HW_DBGMON_TRAP_ADDR_HIGH_WR(HW_DBGMON_HW_DBGMON_TRAP_ADDR_HIGH_RD() |  (v)))
#define HW_DBGMON_HW_DBGMON_TRAP_ADDR_HIGH_CLR(v)    (HW_DBGMON_HW_DBGMON_TRAP_ADDR_HIGH_WR(HW_DBGMON_HW_DBGMON_TRAP_ADDR_HIGH_RD() & ~(v)))
#define HW_DBGMON_HW_DBGMON_TRAP_ADDR_HIGH_TOG(v)    (HW_DBGMON_HW_DBGMON_TRAP_ADDR_HIGH_WR(HW_DBGMON_HW_DBGMON_TRAP_ADDR_HIGH_RD() ^  (v)))
#endif

/*
 * constants & macros for individual DBGMON_HW_DBGMON_TRAP_ADDR_HIGH bitfields
 */

/* --- Register HW_DBGMON_HW_DBGMON_TRAP_ADDR_HIGH, field ADDRESS[31:0] (RW)
 *
 * This field contains 32-bit high address for the address trap range
 */

#define BP_DBGMON_HW_DBGMON_TRAP_ADDR_HIGH_ADDRESS      (0)      //!< Bit position for DBGMON_HW_DBGMON_TRAP_ADDR_HIGH_ADDRESS.
#define BM_DBGMON_HW_DBGMON_TRAP_ADDR_HIGH_ADDRESS      (0xffffffff)  //!< Bit mask for DBGMON_HW_DBGMON_TRAP_ADDR_HIGH_ADDRESS.

//! @brief Get value of DBGMON_HW_DBGMON_TRAP_ADDR_HIGH_ADDRESS from a register value.
#define BG_DBGMON_HW_DBGMON_TRAP_ADDR_HIGH_ADDRESS(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_DBGMON_HW_DBGMON_TRAP_ADDR_HIGH_ADDRESS) >> BP_DBGMON_HW_DBGMON_TRAP_ADDR_HIGH_ADDRESS)

//! @brief Format value for bitfield DBGMON_HW_DBGMON_TRAP_ADDR_HIGH_ADDRESS.
#define BF_DBGMON_HW_DBGMON_TRAP_ADDR_HIGH_ADDRESS(v)   ((__REG_VALUE_TYPE((v), reg32_t) << BP_DBGMON_HW_DBGMON_TRAP_ADDR_HIGH_ADDRESS) & BM_DBGMON_HW_DBGMON_TRAP_ADDR_HIGH_ADDRESS)

#ifndef __LANGUAGE_ASM__
//! @brief Set the ADDRESS field to a new value.
#define BW_DBGMON_HW_DBGMON_TRAP_ADDR_HIGH_ADDRESS(v)   (HW_DBGMON_HW_DBGMON_TRAP_ADDR_HIGH_WR((HW_DBGMON_HW_DBGMON_TRAP_ADDR_HIGH_RD() & ~BM_DBGMON_HW_DBGMON_TRAP_ADDR_HIGH_ADDRESS) | BF_DBGMON_HW_DBGMON_TRAP_ADDR_HIGH_ADDRESS(v)))
#endif

//-------------------------------------------------------------------------------------------
// HW_DBGMON_HW_DBGMON_TRAP_ID - HW_DBGMON_TRAP_ID
//-------------------------------------------------------------------------------------------

#ifndef __LANGUAGE_ASM__
/*!
 * @brief HW_DBGMON_HW_DBGMON_TRAP_ID - HW_DBGMON_TRAP_ID (RW)
 *
 * Reset value: 0x00000000
 *

 */
typedef union _hw_dbgmon_hw_dbgmon_trap_id
{
    reg32_t U;
    struct _hw_dbgmon_hw_dbgmon_trap_id_bitfields
    {
        unsigned TRAP_ID_LOW : 16; //!< [15:0] This field contains 16-bit low ID for ID trap range
        unsigned TRAP_ID_HIGH : 16; //!< [31:16] This field contains 16-bit high ID for ID trap range
    } B;
} hw_dbgmon_hw_dbgmon_trap_id_t;
#endif

/*
 * constants & macros for entire DBGMON_HW_DBGMON_TRAP_ID register
 */
#define HW_DBGMON_HW_DBGMON_TRAP_ID_ADDR      (REGS_DBGMON_BASE + 0x50)

#ifndef __LANGUAGE_ASM__
#define HW_DBGMON_HW_DBGMON_TRAP_ID           (*(volatile hw_dbgmon_hw_dbgmon_trap_id_t *) HW_DBGMON_HW_DBGMON_TRAP_ID_ADDR)
#define HW_DBGMON_HW_DBGMON_TRAP_ID_RD()      (HW_DBGMON_HW_DBGMON_TRAP_ID.U)
#define HW_DBGMON_HW_DBGMON_TRAP_ID_WR(v)     (HW_DBGMON_HW_DBGMON_TRAP_ID.U = (v))
#define HW_DBGMON_HW_DBGMON_TRAP_ID_SET(v)    (HW_DBGMON_HW_DBGMON_TRAP_ID_WR(HW_DBGMON_HW_DBGMON_TRAP_ID_RD() |  (v)))
#define HW_DBGMON_HW_DBGMON_TRAP_ID_CLR(v)    (HW_DBGMON_HW_DBGMON_TRAP_ID_WR(HW_DBGMON_HW_DBGMON_TRAP_ID_RD() & ~(v)))
#define HW_DBGMON_HW_DBGMON_TRAP_ID_TOG(v)    (HW_DBGMON_HW_DBGMON_TRAP_ID_WR(HW_DBGMON_HW_DBGMON_TRAP_ID_RD() ^  (v)))
#endif

/*
 * constants & macros for individual DBGMON_HW_DBGMON_TRAP_ID bitfields
 */

/* --- Register HW_DBGMON_HW_DBGMON_TRAP_ID, field TRAP_ID_LOW[15:0] (RW)
 *
 * This field contains 16-bit low ID for ID trap range
 */

#define BP_DBGMON_HW_DBGMON_TRAP_ID_TRAP_ID_LOW      (0)      //!< Bit position for DBGMON_HW_DBGMON_TRAP_ID_TRAP_ID_LOW.
#define BM_DBGMON_HW_DBGMON_TRAP_ID_TRAP_ID_LOW      (0x0000ffff)  //!< Bit mask for DBGMON_HW_DBGMON_TRAP_ID_TRAP_ID_LOW.

//! @brief Get value of DBGMON_HW_DBGMON_TRAP_ID_TRAP_ID_LOW from a register value.
#define BG_DBGMON_HW_DBGMON_TRAP_ID_TRAP_ID_LOW(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_DBGMON_HW_DBGMON_TRAP_ID_TRAP_ID_LOW) >> BP_DBGMON_HW_DBGMON_TRAP_ID_TRAP_ID_LOW)

//! @brief Format value for bitfield DBGMON_HW_DBGMON_TRAP_ID_TRAP_ID_LOW.
#define BF_DBGMON_HW_DBGMON_TRAP_ID_TRAP_ID_LOW(v)   ((__REG_VALUE_TYPE((v), reg32_t) << BP_DBGMON_HW_DBGMON_TRAP_ID_TRAP_ID_LOW) & BM_DBGMON_HW_DBGMON_TRAP_ID_TRAP_ID_LOW)

#ifndef __LANGUAGE_ASM__
//! @brief Set the TRAP_ID_LOW field to a new value.
#define BW_DBGMON_HW_DBGMON_TRAP_ID_TRAP_ID_LOW(v)   (HW_DBGMON_HW_DBGMON_TRAP_ID_WR((HW_DBGMON_HW_DBGMON_TRAP_ID_RD() & ~BM_DBGMON_HW_DBGMON_TRAP_ID_TRAP_ID_LOW) | BF_DBGMON_HW_DBGMON_TRAP_ID_TRAP_ID_LOW(v)))
#endif

/* --- Register HW_DBGMON_HW_DBGMON_TRAP_ID, field TRAP_ID_HIGH[31:16] (RW)
 *
 * This field contains 16-bit high ID for ID trap range
 */

#define BP_DBGMON_HW_DBGMON_TRAP_ID_TRAP_ID_HIGH      (16)      //!< Bit position for DBGMON_HW_DBGMON_TRAP_ID_TRAP_ID_HIGH.
#define BM_DBGMON_HW_DBGMON_TRAP_ID_TRAP_ID_HIGH      (0xffff0000)  //!< Bit mask for DBGMON_HW_DBGMON_TRAP_ID_TRAP_ID_HIGH.

//! @brief Get value of DBGMON_HW_DBGMON_TRAP_ID_TRAP_ID_HIGH from a register value.
#define BG_DBGMON_HW_DBGMON_TRAP_ID_TRAP_ID_HIGH(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_DBGMON_HW_DBGMON_TRAP_ID_TRAP_ID_HIGH) >> BP_DBGMON_HW_DBGMON_TRAP_ID_TRAP_ID_HIGH)

//! @brief Format value for bitfield DBGMON_HW_DBGMON_TRAP_ID_TRAP_ID_HIGH.
#define BF_DBGMON_HW_DBGMON_TRAP_ID_TRAP_ID_HIGH(v)   ((__REG_VALUE_TYPE((v), reg32_t) << BP_DBGMON_HW_DBGMON_TRAP_ID_TRAP_ID_HIGH) & BM_DBGMON_HW_DBGMON_TRAP_ID_TRAP_ID_HIGH)

#ifndef __LANGUAGE_ASM__
//! @brief Set the TRAP_ID_HIGH field to a new value.
#define BW_DBGMON_HW_DBGMON_TRAP_ID_TRAP_ID_HIGH(v)   (HW_DBGMON_HW_DBGMON_TRAP_ID_WR((HW_DBGMON_HW_DBGMON_TRAP_ID_RD() & ~BM_DBGMON_HW_DBGMON_TRAP_ID_TRAP_ID_HIGH) | BF_DBGMON_HW_DBGMON_TRAP_ID_TRAP_ID_HIGH(v)))
#endif

//-------------------------------------------------------------------------------------------
// HW_DBGMON_HW_DBGMON_SNVS_ADDR - HW_DBGMON_SNVS_ADDR
//-------------------------------------------------------------------------------------------

#ifndef __LANGUAGE_ASM__
/*!
 * @brief HW_DBGMON_HW_DBGMON_SNVS_ADDR - HW_DBGMON_SNVS_ADDR (RO)
 *
 * Reset value: 0x00000000
 *

 */
typedef union _hw_dbgmon_hw_dbgmon_snvs_addr
{
    reg32_t U;
    struct _hw_dbgmon_hw_dbgmon_snvs_addr_bitfields
    {
        unsigned ADDR : 32; //!< [31:0] This field contains 32-bit Address in SNVS domain register
    } B;
} hw_dbgmon_hw_dbgmon_snvs_addr_t;
#endif

/*
 * constants & macros for entire DBGMON_HW_DBGMON_SNVS_ADDR register
 */
#define HW_DBGMON_HW_DBGMON_SNVS_ADDR_ADDR      (REGS_DBGMON_BASE + 0x60)

#ifndef __LANGUAGE_ASM__
#define HW_DBGMON_HW_DBGMON_SNVS_ADDR           (*(volatile hw_dbgmon_hw_dbgmon_snvs_addr_t *) HW_DBGMON_HW_DBGMON_SNVS_ADDR_ADDR)
#define HW_DBGMON_HW_DBGMON_SNVS_ADDR_RD()      (HW_DBGMON_HW_DBGMON_SNVS_ADDR.U)
#endif

/*
 * constants & macros for individual DBGMON_HW_DBGMON_SNVS_ADDR bitfields
 */

/* --- Register HW_DBGMON_HW_DBGMON_SNVS_ADDR, field ADDR[31:0] (RO)
 *
 * This field contains 32-bit Address in SNVS domain register
 */

#define BP_DBGMON_HW_DBGMON_SNVS_ADDR_ADDR      (0)      //!< Bit position for DBGMON_HW_DBGMON_SNVS_ADDR_ADDR.
#define BM_DBGMON_HW_DBGMON_SNVS_ADDR_ADDR      (0xffffffff)  //!< Bit mask for DBGMON_HW_DBGMON_SNVS_ADDR_ADDR.

//! @brief Get value of DBGMON_HW_DBGMON_SNVS_ADDR_ADDR from a register value.
#define BG_DBGMON_HW_DBGMON_SNVS_ADDR_ADDR(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_DBGMON_HW_DBGMON_SNVS_ADDR_ADDR) >> BP_DBGMON_HW_DBGMON_SNVS_ADDR_ADDR)

//-------------------------------------------------------------------------------------------
// HW_DBGMON_HW_DBGMON_SNVS_DATA - HW_DBGMON_SNVS_DATA
//-------------------------------------------------------------------------------------------

#ifndef __LANGUAGE_ASM__
/*!
 * @brief HW_DBGMON_HW_DBGMON_SNVS_DATA - HW_DBGMON_SNVS_DATA (RO)
 *
 * Reset value: 0x00000000
 *

 */
typedef union _hw_dbgmon_hw_dbgmon_snvs_data
{
    reg32_t U;
    struct _hw_dbgmon_hw_dbgmon_snvs_data_bitfields
    {
        unsigned DATA : 32; //!< [31:0] This field contains 32-bit Data of AXI transaction in SNVS domain register
    } B;
} hw_dbgmon_hw_dbgmon_snvs_data_t;
#endif

/*
 * constants & macros for entire DBGMON_HW_DBGMON_SNVS_DATA register
 */
#define HW_DBGMON_HW_DBGMON_SNVS_DATA_ADDR      (REGS_DBGMON_BASE + 0x70)

#ifndef __LANGUAGE_ASM__
#define HW_DBGMON_HW_DBGMON_SNVS_DATA           (*(volatile hw_dbgmon_hw_dbgmon_snvs_data_t *) HW_DBGMON_HW_DBGMON_SNVS_DATA_ADDR)
#define HW_DBGMON_HW_DBGMON_SNVS_DATA_RD()      (HW_DBGMON_HW_DBGMON_SNVS_DATA.U)
#endif

/*
 * constants & macros for individual DBGMON_HW_DBGMON_SNVS_DATA bitfields
 */

/* --- Register HW_DBGMON_HW_DBGMON_SNVS_DATA, field DATA[31:0] (RO)
 *
 * This field contains 32-bit Data of AXI transaction in SNVS domain register
 */

#define BP_DBGMON_HW_DBGMON_SNVS_DATA_DATA      (0)      //!< Bit position for DBGMON_HW_DBGMON_SNVS_DATA_DATA.
#define BM_DBGMON_HW_DBGMON_SNVS_DATA_DATA      (0xffffffff)  //!< Bit mask for DBGMON_HW_DBGMON_SNVS_DATA_DATA.

//! @brief Get value of DBGMON_HW_DBGMON_SNVS_DATA_DATA from a register value.
#define BG_DBGMON_HW_DBGMON_SNVS_DATA_DATA(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_DBGMON_HW_DBGMON_SNVS_DATA_DATA) >> BP_DBGMON_HW_DBGMON_SNVS_DATA_DATA)

//-------------------------------------------------------------------------------------------
// HW_DBGMON_HW_DBGMON_SNVS_INFO - HW_DBGMON_SNVS_INFO
//-------------------------------------------------------------------------------------------

#ifndef __LANGUAGE_ASM__
/*!
 * @brief HW_DBGMON_HW_DBGMON_SNVS_INFO - HW_DBGMON_SNVS_INFO (RO)
 *
 * Reset value: 0x00000000
 *

 */
typedef union _hw_dbgmon_hw_dbgmon_snvs_info
{
    reg32_t U;
    struct _hw_dbgmon_hw_dbgmon_snvs_info_bitfields
    {
        unsigned COMPLETE : 1; //!< [0] The field indicates whether the AXI transaction in SNVS domain complete.
        unsigned RDWR : 1; //!< [1] The field indicates the read/write attribute of AXI transaction in SNVS domain.
        unsigned RESERVED0 : 14; //!< [15:2] Reserved
        unsigned ID : 16; //!< [31:16] The field contain the ID of the AXI transaction in SNVS domain
    } B;
} hw_dbgmon_hw_dbgmon_snvs_info_t;
#endif

/*
 * constants & macros for entire DBGMON_HW_DBGMON_SNVS_INFO register
 */
#define HW_DBGMON_HW_DBGMON_SNVS_INFO_ADDR      (REGS_DBGMON_BASE + 0x80)

#ifndef __LANGUAGE_ASM__
#define HW_DBGMON_HW_DBGMON_SNVS_INFO           (*(volatile hw_dbgmon_hw_dbgmon_snvs_info_t *) HW_DBGMON_HW_DBGMON_SNVS_INFO_ADDR)
#define HW_DBGMON_HW_DBGMON_SNVS_INFO_RD()      (HW_DBGMON_HW_DBGMON_SNVS_INFO.U)
#endif

/*
 * constants & macros for individual DBGMON_HW_DBGMON_SNVS_INFO bitfields
 */

/* --- Register HW_DBGMON_HW_DBGMON_SNVS_INFO, field COMPLETE[0] (RO)
 *
 * The field indicates whether the AXI transaction in SNVS domain complete. 0: not complete, 1:
 * Complete
 */

#define BP_DBGMON_HW_DBGMON_SNVS_INFO_COMPLETE      (0)      //!< Bit position for DBGMON_HW_DBGMON_SNVS_INFO_COMPLETE.
#define BM_DBGMON_HW_DBGMON_SNVS_INFO_COMPLETE      (0x00000001)  //!< Bit mask for DBGMON_HW_DBGMON_SNVS_INFO_COMPLETE.

//! @brief Get value of DBGMON_HW_DBGMON_SNVS_INFO_COMPLETE from a register value.
#define BG_DBGMON_HW_DBGMON_SNVS_INFO_COMPLETE(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_DBGMON_HW_DBGMON_SNVS_INFO_COMPLETE) >> BP_DBGMON_HW_DBGMON_SNVS_INFO_COMPLETE)

/* --- Register HW_DBGMON_HW_DBGMON_SNVS_INFO, field RDWR[1] (RO)
 *
 * The field indicates the read/write attribute of AXI transaction in SNVS domain. 0: read, 1: Write
 */

#define BP_DBGMON_HW_DBGMON_SNVS_INFO_RDWR      (1)      //!< Bit position for DBGMON_HW_DBGMON_SNVS_INFO_RDWR.
#define BM_DBGMON_HW_DBGMON_SNVS_INFO_RDWR      (0x00000002)  //!< Bit mask for DBGMON_HW_DBGMON_SNVS_INFO_RDWR.

//! @brief Get value of DBGMON_HW_DBGMON_SNVS_INFO_RDWR from a register value.
#define BG_DBGMON_HW_DBGMON_SNVS_INFO_RDWR(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_DBGMON_HW_DBGMON_SNVS_INFO_RDWR) >> BP_DBGMON_HW_DBGMON_SNVS_INFO_RDWR)

/* --- Register HW_DBGMON_HW_DBGMON_SNVS_INFO, field ID[31:16] (RO)
 *
 * The field contain the ID of the AXI transaction in SNVS domain
 */

#define BP_DBGMON_HW_DBGMON_SNVS_INFO_ID      (16)      //!< Bit position for DBGMON_HW_DBGMON_SNVS_INFO_ID.
#define BM_DBGMON_HW_DBGMON_SNVS_INFO_ID      (0xffff0000)  //!< Bit mask for DBGMON_HW_DBGMON_SNVS_INFO_ID.

//! @brief Get value of DBGMON_HW_DBGMON_SNVS_INFO_ID from a register value.
#define BG_DBGMON_HW_DBGMON_SNVS_INFO_ID(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_DBGMON_HW_DBGMON_SNVS_INFO_ID) >> BP_DBGMON_HW_DBGMON_SNVS_INFO_ID)

//-------------------------------------------------------------------------------------------
// HW_DBGMON_HW_DBGMON_VERSION - HW_DBGMON_VERSION
//-------------------------------------------------------------------------------------------

#ifndef __LANGUAGE_ASM__
/*!
 * @brief HW_DBGMON_HW_DBGMON_VERSION - HW_DBGMON_VERSION (RO)
 *
 * Reset value: 0x01010000
 *

 */
typedef union _hw_dbgmon_hw_dbgmon_version
{
    reg32_t U;
    struct _hw_dbgmon_hw_dbgmon_version_bitfields
    {
        unsigned STEP : 16; //!< [15:0] Fixed read-only value reflecting the stepping of the RTL version
        unsigned MINOR : 8; //!< [23:16] Fixed read-only value reflecting the MINOR field of the RTL version
        unsigned MAJOR : 8; //!< [31:24] Fixed read-only value reflecting the MAJOR field of the RTL version
    } B;
} hw_dbgmon_hw_dbgmon_version_t;
#endif

/*
 * constants & macros for entire DBGMON_HW_DBGMON_VERSION register
 */
#define HW_DBGMON_HW_DBGMON_VERSION_ADDR      (REGS_DBGMON_BASE + 0x90)

#ifndef __LANGUAGE_ASM__
#define HW_DBGMON_HW_DBGMON_VERSION           (*(volatile hw_dbgmon_hw_dbgmon_version_t *) HW_DBGMON_HW_DBGMON_VERSION_ADDR)
#define HW_DBGMON_HW_DBGMON_VERSION_RD()      (HW_DBGMON_HW_DBGMON_VERSION.U)
#endif

/*
 * constants & macros for individual DBGMON_HW_DBGMON_VERSION bitfields
 */

/* --- Register HW_DBGMON_HW_DBGMON_VERSION, field STEP[15:0] (RO)
 *
 * Fixed read-only value reflecting the stepping of the RTL version
 */

#define BP_DBGMON_HW_DBGMON_VERSION_STEP      (0)      //!< Bit position for DBGMON_HW_DBGMON_VERSION_STEP.
#define BM_DBGMON_HW_DBGMON_VERSION_STEP      (0x0000ffff)  //!< Bit mask for DBGMON_HW_DBGMON_VERSION_STEP.

//! @brief Get value of DBGMON_HW_DBGMON_VERSION_STEP from a register value.
#define BG_DBGMON_HW_DBGMON_VERSION_STEP(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_DBGMON_HW_DBGMON_VERSION_STEP) >> BP_DBGMON_HW_DBGMON_VERSION_STEP)

/* --- Register HW_DBGMON_HW_DBGMON_VERSION, field MINOR[23:16] (RO)
 *
 * Fixed read-only value reflecting the MINOR field of the RTL version
 */

#define BP_DBGMON_HW_DBGMON_VERSION_MINOR      (16)      //!< Bit position for DBGMON_HW_DBGMON_VERSION_MINOR.
#define BM_DBGMON_HW_DBGMON_VERSION_MINOR      (0x00ff0000)  //!< Bit mask for DBGMON_HW_DBGMON_VERSION_MINOR.

//! @brief Get value of DBGMON_HW_DBGMON_VERSION_MINOR from a register value.
#define BG_DBGMON_HW_DBGMON_VERSION_MINOR(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_DBGMON_HW_DBGMON_VERSION_MINOR) >> BP_DBGMON_HW_DBGMON_VERSION_MINOR)

/* --- Register HW_DBGMON_HW_DBGMON_VERSION, field MAJOR[31:24] (RO)
 *
 * Fixed read-only value reflecting the MAJOR field of the RTL version
 */

#define BP_DBGMON_HW_DBGMON_VERSION_MAJOR      (24)      //!< Bit position for DBGMON_HW_DBGMON_VERSION_MAJOR.
#define BM_DBGMON_HW_DBGMON_VERSION_MAJOR      (0xff000000)  //!< Bit mask for DBGMON_HW_DBGMON_VERSION_MAJOR.

//! @brief Get value of DBGMON_HW_DBGMON_VERSION_MAJOR from a register value.
#define BG_DBGMON_HW_DBGMON_VERSION_MAJOR(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_DBGMON_HW_DBGMON_VERSION_MAJOR) >> BP_DBGMON_HW_DBGMON_VERSION_MAJOR)


/*!
 * @brief All DBGMON module registers.
 */
#ifndef __LANGUAGE_ASM__
#pragma pack(1)
typedef struct _hw_dbgmon
{
    volatile hw_dbgmon_hw_dbgmon_ctrl_t HW_DBGMON_CTRL; //!< HW_DBGMON_CTRL
    reg32_t _reserved0[3];
    volatile hw_dbgmon_hw_dbgmon_master_en_t HW_DBGMON_MASTER_EN; //!< HW_DBGMON_MASTER_EN
    reg32_t _reserved1[3];
    volatile hw_dbgmon_hw_dbgmon_irq_t HW_DBGMON_IRQ; //!< HW_DBGMON_IRQ
    reg32_t _reserved2[3];
    volatile hw_dbgmon_hw_dbgmon_trap_addr_low_t HW_DBGMON_TRAP_ADDR_LOW; //!< HW_DBGMON_TRAP_ADDR_LOW
    reg32_t _reserved3[3];
    volatile hw_dbgmon_hw_dbgmon_trap_addr_high_t HW_DBGMON_TRAP_ADDR_HIGH; //!< HW_DBGMON_TRAP_ADDR_HIGH
    reg32_t _reserved4[3];
    volatile hw_dbgmon_hw_dbgmon_trap_id_t HW_DBGMON_TRAP_ID; //!< HW_DBGMON_TRAP_ID
    reg32_t _reserved5[3];
    volatile hw_dbgmon_hw_dbgmon_snvs_addr_t HW_DBGMON_SNVS_ADDR; //!< HW_DBGMON_SNVS_ADDR
    reg32_t _reserved6[3];
    volatile hw_dbgmon_hw_dbgmon_snvs_data_t HW_DBGMON_SNVS_DATA; //!< HW_DBGMON_SNVS_DATA
    reg32_t _reserved7[3];
    volatile hw_dbgmon_hw_dbgmon_snvs_info_t HW_DBGMON_SNVS_INFO; //!< HW_DBGMON_SNVS_INFO
    reg32_t _reserved8[3];
    volatile hw_dbgmon_hw_dbgmon_version_t HW_DBGMON_VERSION; //!< HW_DBGMON_VERSION
} hw_dbgmon_t;
#pragma pack()

//! @brief Macro to access all DBGMON registers.
//! @return Reference (not a pointer) to the registers struct. To get a pointer to the struct,
//!     use the '&' operator, like <code>&HW_DBGMON(0)</code>.
#define HW_DBGMON     (*(volatile hw_dbgmon_t *) REGS_DBGMON_BASE)

#endif


#endif // __HW_DBGMON_REGISTERS_H__