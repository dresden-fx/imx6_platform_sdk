/*
 * Copyright (C) 2012, Freescale Semiconductor, Inc. All Rights Reserved
 * THIS SOURCE CODE IS CONFIDENTIAL AND PROPRIETARY AND MAY NOT
 * BE USED OR DISTRIBUTED WITHOUT THE WRITTEN PERMISSION OF
 * Freescale Semiconductor, Inc.
 */

#ifndef __HW_GPU2D_REGISTERS_H__
#define __HW_GPU2D_REGISTERS_H__

#include "regs.h"

/*
 * i.MX6SL GPU2D registers defined in this header file.
 *
 * - HW_GPU2D_AQHICLOCKCONTROL - Clock Control Register
 * - HW_GPU2D_AQHIIDLE - Idle Status Register
 * - HW_GPU2D_AQAXICONFIG - AXI Configuration Register
 * - HW_GPU2D_AQAXISTATUS - AXI Status Register
 * - HW_GPU2D_AQINTRACKNOWLEDGE - Interrupt Acknowledge Register
 * - HW_GPU2D_AQINTRENBL - Interrupt Enable Register
 * - HW_GPU2D_AQIDENT - Identification Register
 * - HW_GPU2D_FEATURES - Features Register
 * - HW_GPU2D_CHIPID - Chip Identification Register
 * - HW_GPU2D_CHIPREV - Chip Revision Register
 * - HW_GPU2D_CHIPDATE - Chip Release Date Register
 * - HW_GPU2D_CHIPTIME - Chip Release Time Register
 * - HW_GPU2D_CHIPCUSTOMER - Chip Customer Register
 * - HW_GPU2D_MINORFEATURES0 - Minor Features Register 0
 * - HW_GPU2D_CACHECONTROL - Cache Control Register
 * - HW_GPU2D_RESETMEMCOUNTERS - Reset Mem Counters Register
 * - HW_GPU2D_TOTALREADS - Read Count Register
 * - HW_GPU2D_TOTALWRITES - Write Count Register
 * - HW_GPU2D_CHIPSPECS - Chip Specification Register
 * - HW_GPU2D_TOTALWRITEBURSTS - Write Data Count Register
 * - HW_GPU2D_TOTALWRITEREQS - Write REQ Count Register
 * - HW_GPU2D_TOTALWRITELASTS - Total WLAST Count Register
 * - HW_GPU2D_TOTALREADBURSTS - Total Read Data Count Register
 * - HW_GPU2D_TOTALREADREQS - Total Read REQ Count Register
 * - HW_GPU2D_TOTALREADLASTS - Total RLAST Count Register
 * - HW_GPU2D_GPOUT0 - General Purpose Register 0
 * - HW_GPU2D_GPOUT1 - General Purpose Register 1
 * - HW_GPU2D_GPOUT2 - General Purpose Register 2
 * - HW_GPU2D_AXICONTROL - AXI Control Register
 * - HW_GPU2D_MINORFEATURES1 - Minor Features Register 1
 * - HW_GPU2D_TOTALCYCLES - Total Cycle Counter Register
 * - HW_GPU2D_TOTALIDLECYLES - Total Idle Cycle Register
 * - HW_GPU2D_CHIPSPECS2 - Chip Specification Register
 * - HW_GPU2D_MODULEPOWERCONTROLS - Power Control Register
 * - HW_GPU2D_MODULEPOWERMODULECONTROL - Power Level Register
 * - HW_GPU2D_MODULEPOWERMODULESTATUS - Power Status Register
 *
 * - hw_gpu2d_t - Struct containing all module registers.
 */

//! @name Module base addresses
//@{
#ifndef REGS_GPU2D_BASE
#define HW_GPU2D_INSTANCE_COUNT (1) //!< Number of instances of the GPU2D module.
#define REGS_GPU2D_BASE (0x00134000) //!< Base address for GPU2D.
#endif
//@}


//-------------------------------------------------------------------------------------------
// HW_GPU2D_AQHICLOCKCONTROL - Clock Control Register
//-------------------------------------------------------------------------------------------

#ifndef __LANGUAGE_ASM__
/*!
 * @brief HW_GPU2D_AQHICLOCKCONTROL - Clock Control Register (RW)
 *
 * Reset value: 0x00000100
 *

 */
typedef union _hw_gpu2d_aqhiclockcontrol
{
    reg32_t U;
    struct _hw_gpu2d_aqhiclockcontrol_bitfields
    {
        unsigned RESERVED0 : 4; //!< [3:0] Reserved
        unsigned MULTI_PIPE_USE_SINGLE_AXI : 4; //!< [7:4] Force all the transactions to go to one AXI.
        unsigned MULTI_PIPE_REG_SELECT : 4; //!< [11:8] Determines which HI/MC to use while reading registers.
        unsigned ISOLATE_GPU : 1; //!< [12] Isolate GPU bit
        unsigned IDLE_VG : 1; //!< [13] VG pipe is idle.
        unsigned IDLE2_D : 1; //!< [14] 2D pipe is idle.
        unsigned IDLE3_D : 1; //!< [15] 3D pipe is idle.
        unsigned RESERVED1 : 3; //!< [18:16] Reserved
        unsigned SOFT_RESET : 1; //!< [19] Soft resets the IP.
        unsigned DISABLE_DEBUG_REGISTERS : 1; //!< [20] Disable debug registers.
        unsigned DISABLE_RAM_CLOCK_GATING : 1; //!< [21] Disables clock gating for rams.
        unsigned FSCALE_CMD_LOAD : 1; //!< [22] 
        unsigned FSCALE_VAL : 7; //!< [29:23] 
        unsigned CLK2D_DIS : 1; //!< [30] Disable 2D clock.
        unsigned CLK3D_DIS : 1; //!< [31] Disable 3D clock.
    } B;
} hw_gpu2d_aqhiclockcontrol_t;
#endif

/*
 * constants & macros for entire GPU2D_AQHICLOCKCONTROL register
 */
#define HW_GPU2D_AQHICLOCKCONTROL_ADDR      (REGS_GPU2D_BASE + 0x0)

#ifndef __LANGUAGE_ASM__
#define HW_GPU2D_AQHICLOCKCONTROL           (*(volatile hw_gpu2d_aqhiclockcontrol_t *) HW_GPU2D_AQHICLOCKCONTROL_ADDR)
#define HW_GPU2D_AQHICLOCKCONTROL_RD()      (HW_GPU2D_AQHICLOCKCONTROL.U)
#define HW_GPU2D_AQHICLOCKCONTROL_WR(v)     (HW_GPU2D_AQHICLOCKCONTROL.U = (v))
#define HW_GPU2D_AQHICLOCKCONTROL_SET(v)    (HW_GPU2D_AQHICLOCKCONTROL_WR(HW_GPU2D_AQHICLOCKCONTROL_RD() |  (v)))
#define HW_GPU2D_AQHICLOCKCONTROL_CLR(v)    (HW_GPU2D_AQHICLOCKCONTROL_WR(HW_GPU2D_AQHICLOCKCONTROL_RD() & ~(v)))
#define HW_GPU2D_AQHICLOCKCONTROL_TOG(v)    (HW_GPU2D_AQHICLOCKCONTROL_WR(HW_GPU2D_AQHICLOCKCONTROL_RD() ^  (v)))
#endif

/*
 * constants & macros for individual GPU2D_AQHICLOCKCONTROL bitfields
 */

/* --- Register HW_GPU2D_AQHICLOCKCONTROL, field MULTI_PIPE_USE_SINGLE_AXI[7:4] (RW)
 *
 * Force all the transactions to go to one AXI.
 */

#define BP_GPU2D_AQHICLOCKCONTROL_MULTI_PIPE_USE_SINGLE_AXI      (4)      //!< Bit position for GPU2D_AQHICLOCKCONTROL_MULTI_PIPE_USE_SINGLE_AXI.
#define BM_GPU2D_AQHICLOCKCONTROL_MULTI_PIPE_USE_SINGLE_AXI      (0x000000f0)  //!< Bit mask for GPU2D_AQHICLOCKCONTROL_MULTI_PIPE_USE_SINGLE_AXI.

//! @brief Get value of GPU2D_AQHICLOCKCONTROL_MULTI_PIPE_USE_SINGLE_AXI from a register value.
#define BG_GPU2D_AQHICLOCKCONTROL_MULTI_PIPE_USE_SINGLE_AXI(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_GPU2D_AQHICLOCKCONTROL_MULTI_PIPE_USE_SINGLE_AXI) >> BP_GPU2D_AQHICLOCKCONTROL_MULTI_PIPE_USE_SINGLE_AXI)

//! @brief Format value for bitfield GPU2D_AQHICLOCKCONTROL_MULTI_PIPE_USE_SINGLE_AXI.
#define BF_GPU2D_AQHICLOCKCONTROL_MULTI_PIPE_USE_SINGLE_AXI(v)   ((__REG_VALUE_TYPE((v), reg32_t) << BP_GPU2D_AQHICLOCKCONTROL_MULTI_PIPE_USE_SINGLE_AXI) & BM_GPU2D_AQHICLOCKCONTROL_MULTI_PIPE_USE_SINGLE_AXI)

#ifndef __LANGUAGE_ASM__
//! @brief Set the MULTI_PIPE_USE_SINGLE_AXI field to a new value.
#define BW_GPU2D_AQHICLOCKCONTROL_MULTI_PIPE_USE_SINGLE_AXI(v)   (HW_GPU2D_AQHICLOCKCONTROL_WR((HW_GPU2D_AQHICLOCKCONTROL_RD() & ~BM_GPU2D_AQHICLOCKCONTROL_MULTI_PIPE_USE_SINGLE_AXI) | BF_GPU2D_AQHICLOCKCONTROL_MULTI_PIPE_USE_SINGLE_AXI(v)))
#endif

/* --- Register HW_GPU2D_AQHICLOCKCONTROL, field MULTI_PIPE_REG_SELECT[11:8] (RW)
 *
 * Determines which HI/MC to use while reading registers.
 */

#define BP_GPU2D_AQHICLOCKCONTROL_MULTI_PIPE_REG_SELECT      (8)      //!< Bit position for GPU2D_AQHICLOCKCONTROL_MULTI_PIPE_REG_SELECT.
#define BM_GPU2D_AQHICLOCKCONTROL_MULTI_PIPE_REG_SELECT      (0x00000f00)  //!< Bit mask for GPU2D_AQHICLOCKCONTROL_MULTI_PIPE_REG_SELECT.

//! @brief Get value of GPU2D_AQHICLOCKCONTROL_MULTI_PIPE_REG_SELECT from a register value.
#define BG_GPU2D_AQHICLOCKCONTROL_MULTI_PIPE_REG_SELECT(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_GPU2D_AQHICLOCKCONTROL_MULTI_PIPE_REG_SELECT) >> BP_GPU2D_AQHICLOCKCONTROL_MULTI_PIPE_REG_SELECT)

//! @brief Format value for bitfield GPU2D_AQHICLOCKCONTROL_MULTI_PIPE_REG_SELECT.
#define BF_GPU2D_AQHICLOCKCONTROL_MULTI_PIPE_REG_SELECT(v)   ((__REG_VALUE_TYPE((v), reg32_t) << BP_GPU2D_AQHICLOCKCONTROL_MULTI_PIPE_REG_SELECT) & BM_GPU2D_AQHICLOCKCONTROL_MULTI_PIPE_REG_SELECT)

#ifndef __LANGUAGE_ASM__
//! @brief Set the MULTI_PIPE_REG_SELECT field to a new value.
#define BW_GPU2D_AQHICLOCKCONTROL_MULTI_PIPE_REG_SELECT(v)   (HW_GPU2D_AQHICLOCKCONTROL_WR((HW_GPU2D_AQHICLOCKCONTROL_RD() & ~BM_GPU2D_AQHICLOCKCONTROL_MULTI_PIPE_REG_SELECT) | BF_GPU2D_AQHICLOCKCONTROL_MULTI_PIPE_REG_SELECT(v)))
#endif

/* --- Register HW_GPU2D_AQHICLOCKCONTROL, field ISOLATE_GPU[12] (RW)
 *
 * Isolate GPU bit
 */

#define BP_GPU2D_AQHICLOCKCONTROL_ISOLATE_GPU      (12)      //!< Bit position for GPU2D_AQHICLOCKCONTROL_ISOLATE_GPU.
#define BM_GPU2D_AQHICLOCKCONTROL_ISOLATE_GPU      (0x00001000)  //!< Bit mask for GPU2D_AQHICLOCKCONTROL_ISOLATE_GPU.

//! @brief Get value of GPU2D_AQHICLOCKCONTROL_ISOLATE_GPU from a register value.
#define BG_GPU2D_AQHICLOCKCONTROL_ISOLATE_GPU(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_GPU2D_AQHICLOCKCONTROL_ISOLATE_GPU) >> BP_GPU2D_AQHICLOCKCONTROL_ISOLATE_GPU)

//! @brief Format value for bitfield GPU2D_AQHICLOCKCONTROL_ISOLATE_GPU.
#define BF_GPU2D_AQHICLOCKCONTROL_ISOLATE_GPU(v)   ((__REG_VALUE_TYPE((v), reg32_t) << BP_GPU2D_AQHICLOCKCONTROL_ISOLATE_GPU) & BM_GPU2D_AQHICLOCKCONTROL_ISOLATE_GPU)

#ifndef __LANGUAGE_ASM__
//! @brief Set the ISOLATE_GPU field to a new value.
#define BW_GPU2D_AQHICLOCKCONTROL_ISOLATE_GPU(v)   (HW_GPU2D_AQHICLOCKCONTROL_WR((HW_GPU2D_AQHICLOCKCONTROL_RD() & ~BM_GPU2D_AQHICLOCKCONTROL_ISOLATE_GPU) | BF_GPU2D_AQHICLOCKCONTROL_ISOLATE_GPU(v)))
#endif

/* --- Register HW_GPU2D_AQHICLOCKCONTROL, field IDLE_VG[13] (RW)
 *
 * VG pipe is idle.
 */

#define BP_GPU2D_AQHICLOCKCONTROL_IDLE_VG      (13)      //!< Bit position for GPU2D_AQHICLOCKCONTROL_IDLE_VG.
#define BM_GPU2D_AQHICLOCKCONTROL_IDLE_VG      (0x00002000)  //!< Bit mask for GPU2D_AQHICLOCKCONTROL_IDLE_VG.

//! @brief Get value of GPU2D_AQHICLOCKCONTROL_IDLE_VG from a register value.
#define BG_GPU2D_AQHICLOCKCONTROL_IDLE_VG(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_GPU2D_AQHICLOCKCONTROL_IDLE_VG) >> BP_GPU2D_AQHICLOCKCONTROL_IDLE_VG)

//! @brief Format value for bitfield GPU2D_AQHICLOCKCONTROL_IDLE_VG.
#define BF_GPU2D_AQHICLOCKCONTROL_IDLE_VG(v)   ((__REG_VALUE_TYPE((v), reg32_t) << BP_GPU2D_AQHICLOCKCONTROL_IDLE_VG) & BM_GPU2D_AQHICLOCKCONTROL_IDLE_VG)

#ifndef __LANGUAGE_ASM__
//! @brief Set the IDLE_VG field to a new value.
#define BW_GPU2D_AQHICLOCKCONTROL_IDLE_VG(v)   (HW_GPU2D_AQHICLOCKCONTROL_WR((HW_GPU2D_AQHICLOCKCONTROL_RD() & ~BM_GPU2D_AQHICLOCKCONTROL_IDLE_VG) | BF_GPU2D_AQHICLOCKCONTROL_IDLE_VG(v)))
#endif

/* --- Register HW_GPU2D_AQHICLOCKCONTROL, field IDLE2_D[14] (RW)
 *
 * 2D pipe is idle.
 */

#define BP_GPU2D_AQHICLOCKCONTROL_IDLE2_D      (14)      //!< Bit position for GPU2D_AQHICLOCKCONTROL_IDLE2_D.
#define BM_GPU2D_AQHICLOCKCONTROL_IDLE2_D      (0x00004000)  //!< Bit mask for GPU2D_AQHICLOCKCONTROL_IDLE2_D.

//! @brief Get value of GPU2D_AQHICLOCKCONTROL_IDLE2_D from a register value.
#define BG_GPU2D_AQHICLOCKCONTROL_IDLE2_D(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_GPU2D_AQHICLOCKCONTROL_IDLE2_D) >> BP_GPU2D_AQHICLOCKCONTROL_IDLE2_D)

//! @brief Format value for bitfield GPU2D_AQHICLOCKCONTROL_IDLE2_D.
#define BF_GPU2D_AQHICLOCKCONTROL_IDLE2_D(v)   ((__REG_VALUE_TYPE((v), reg32_t) << BP_GPU2D_AQHICLOCKCONTROL_IDLE2_D) & BM_GPU2D_AQHICLOCKCONTROL_IDLE2_D)

#ifndef __LANGUAGE_ASM__
//! @brief Set the IDLE2_D field to a new value.
#define BW_GPU2D_AQHICLOCKCONTROL_IDLE2_D(v)   (HW_GPU2D_AQHICLOCKCONTROL_WR((HW_GPU2D_AQHICLOCKCONTROL_RD() & ~BM_GPU2D_AQHICLOCKCONTROL_IDLE2_D) | BF_GPU2D_AQHICLOCKCONTROL_IDLE2_D(v)))
#endif

/* --- Register HW_GPU2D_AQHICLOCKCONTROL, field IDLE3_D[15] (RW)
 *
 * 3D pipe is idle.
 */

#define BP_GPU2D_AQHICLOCKCONTROL_IDLE3_D      (15)      //!< Bit position for GPU2D_AQHICLOCKCONTROL_IDLE3_D.
#define BM_GPU2D_AQHICLOCKCONTROL_IDLE3_D      (0x00008000)  //!< Bit mask for GPU2D_AQHICLOCKCONTROL_IDLE3_D.

//! @brief Get value of GPU2D_AQHICLOCKCONTROL_IDLE3_D from a register value.
#define BG_GPU2D_AQHICLOCKCONTROL_IDLE3_D(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_GPU2D_AQHICLOCKCONTROL_IDLE3_D) >> BP_GPU2D_AQHICLOCKCONTROL_IDLE3_D)

//! @brief Format value for bitfield GPU2D_AQHICLOCKCONTROL_IDLE3_D.
#define BF_GPU2D_AQHICLOCKCONTROL_IDLE3_D(v)   ((__REG_VALUE_TYPE((v), reg32_t) << BP_GPU2D_AQHICLOCKCONTROL_IDLE3_D) & BM_GPU2D_AQHICLOCKCONTROL_IDLE3_D)

#ifndef __LANGUAGE_ASM__
//! @brief Set the IDLE3_D field to a new value.
#define BW_GPU2D_AQHICLOCKCONTROL_IDLE3_D(v)   (HW_GPU2D_AQHICLOCKCONTROL_WR((HW_GPU2D_AQHICLOCKCONTROL_RD() & ~BM_GPU2D_AQHICLOCKCONTROL_IDLE3_D) | BF_GPU2D_AQHICLOCKCONTROL_IDLE3_D(v)))
#endif

/* --- Register HW_GPU2D_AQHICLOCKCONTROL, field SOFT_RESET[19] (RW)
 *
 * Soft resets the IP.
 */

#define BP_GPU2D_AQHICLOCKCONTROL_SOFT_RESET      (19)      //!< Bit position for GPU2D_AQHICLOCKCONTROL_SOFT_RESET.
#define BM_GPU2D_AQHICLOCKCONTROL_SOFT_RESET      (0x00080000)  //!< Bit mask for GPU2D_AQHICLOCKCONTROL_SOFT_RESET.

//! @brief Get value of GPU2D_AQHICLOCKCONTROL_SOFT_RESET from a register value.
#define BG_GPU2D_AQHICLOCKCONTROL_SOFT_RESET(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_GPU2D_AQHICLOCKCONTROL_SOFT_RESET) >> BP_GPU2D_AQHICLOCKCONTROL_SOFT_RESET)

//! @brief Format value for bitfield GPU2D_AQHICLOCKCONTROL_SOFT_RESET.
#define BF_GPU2D_AQHICLOCKCONTROL_SOFT_RESET(v)   ((__REG_VALUE_TYPE((v), reg32_t) << BP_GPU2D_AQHICLOCKCONTROL_SOFT_RESET) & BM_GPU2D_AQHICLOCKCONTROL_SOFT_RESET)

#ifndef __LANGUAGE_ASM__
//! @brief Set the SOFT_RESET field to a new value.
#define BW_GPU2D_AQHICLOCKCONTROL_SOFT_RESET(v)   (HW_GPU2D_AQHICLOCKCONTROL_WR((HW_GPU2D_AQHICLOCKCONTROL_RD() & ~BM_GPU2D_AQHICLOCKCONTROL_SOFT_RESET) | BF_GPU2D_AQHICLOCKCONTROL_SOFT_RESET(v)))
#endif

/* --- Register HW_GPU2D_AQHICLOCKCONTROL, field DISABLE_DEBUG_REGISTERS[20] (RW)
 *
 * Disable debug registers. If this bit is 1, debug registers are clock gated.
 */

#define BP_GPU2D_AQHICLOCKCONTROL_DISABLE_DEBUG_REGISTERS      (20)      //!< Bit position for GPU2D_AQHICLOCKCONTROL_DISABLE_DEBUG_REGISTERS.
#define BM_GPU2D_AQHICLOCKCONTROL_DISABLE_DEBUG_REGISTERS      (0x00100000)  //!< Bit mask for GPU2D_AQHICLOCKCONTROL_DISABLE_DEBUG_REGISTERS.

//! @brief Get value of GPU2D_AQHICLOCKCONTROL_DISABLE_DEBUG_REGISTERS from a register value.
#define BG_GPU2D_AQHICLOCKCONTROL_DISABLE_DEBUG_REGISTERS(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_GPU2D_AQHICLOCKCONTROL_DISABLE_DEBUG_REGISTERS) >> BP_GPU2D_AQHICLOCKCONTROL_DISABLE_DEBUG_REGISTERS)

//! @brief Format value for bitfield GPU2D_AQHICLOCKCONTROL_DISABLE_DEBUG_REGISTERS.
#define BF_GPU2D_AQHICLOCKCONTROL_DISABLE_DEBUG_REGISTERS(v)   ((__REG_VALUE_TYPE((v), reg32_t) << BP_GPU2D_AQHICLOCKCONTROL_DISABLE_DEBUG_REGISTERS) & BM_GPU2D_AQHICLOCKCONTROL_DISABLE_DEBUG_REGISTERS)

#ifndef __LANGUAGE_ASM__
//! @brief Set the DISABLE_DEBUG_REGISTERS field to a new value.
#define BW_GPU2D_AQHICLOCKCONTROL_DISABLE_DEBUG_REGISTERS(v)   (HW_GPU2D_AQHICLOCKCONTROL_WR((HW_GPU2D_AQHICLOCKCONTROL_RD() & ~BM_GPU2D_AQHICLOCKCONTROL_DISABLE_DEBUG_REGISTERS) | BF_GPU2D_AQHICLOCKCONTROL_DISABLE_DEBUG_REGISTERS(v)))
#endif

/* --- Register HW_GPU2D_AQHICLOCKCONTROL, field DISABLE_RAM_CLOCK_GATING[21] (RW)
 *
 * Disables clock gating for rams.
 */

#define BP_GPU2D_AQHICLOCKCONTROL_DISABLE_RAM_CLOCK_GATING      (21)      //!< Bit position for GPU2D_AQHICLOCKCONTROL_DISABLE_RAM_CLOCK_GATING.
#define BM_GPU2D_AQHICLOCKCONTROL_DISABLE_RAM_CLOCK_GATING      (0x00200000)  //!< Bit mask for GPU2D_AQHICLOCKCONTROL_DISABLE_RAM_CLOCK_GATING.

//! @brief Get value of GPU2D_AQHICLOCKCONTROL_DISABLE_RAM_CLOCK_GATING from a register value.
#define BG_GPU2D_AQHICLOCKCONTROL_DISABLE_RAM_CLOCK_GATING(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_GPU2D_AQHICLOCKCONTROL_DISABLE_RAM_CLOCK_GATING) >> BP_GPU2D_AQHICLOCKCONTROL_DISABLE_RAM_CLOCK_GATING)

//! @brief Format value for bitfield GPU2D_AQHICLOCKCONTROL_DISABLE_RAM_CLOCK_GATING.
#define BF_GPU2D_AQHICLOCKCONTROL_DISABLE_RAM_CLOCK_GATING(v)   ((__REG_VALUE_TYPE((v), reg32_t) << BP_GPU2D_AQHICLOCKCONTROL_DISABLE_RAM_CLOCK_GATING) & BM_GPU2D_AQHICLOCKCONTROL_DISABLE_RAM_CLOCK_GATING)

#ifndef __LANGUAGE_ASM__
//! @brief Set the DISABLE_RAM_CLOCK_GATING field to a new value.
#define BW_GPU2D_AQHICLOCKCONTROL_DISABLE_RAM_CLOCK_GATING(v)   (HW_GPU2D_AQHICLOCKCONTROL_WR((HW_GPU2D_AQHICLOCKCONTROL_RD() & ~BM_GPU2D_AQHICLOCKCONTROL_DISABLE_RAM_CLOCK_GATING) | BF_GPU2D_AQHICLOCKCONTROL_DISABLE_RAM_CLOCK_GATING(v)))
#endif

/* --- Register HW_GPU2D_AQHICLOCKCONTROL, field FSCALE_CMD_LOAD[22] (RW)
 *

 */

#define BP_GPU2D_AQHICLOCKCONTROL_FSCALE_CMD_LOAD      (22)      //!< Bit position for GPU2D_AQHICLOCKCONTROL_FSCALE_CMD_LOAD.
#define BM_GPU2D_AQHICLOCKCONTROL_FSCALE_CMD_LOAD      (0x00400000)  //!< Bit mask for GPU2D_AQHICLOCKCONTROL_FSCALE_CMD_LOAD.

//! @brief Get value of GPU2D_AQHICLOCKCONTROL_FSCALE_CMD_LOAD from a register value.
#define BG_GPU2D_AQHICLOCKCONTROL_FSCALE_CMD_LOAD(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_GPU2D_AQHICLOCKCONTROL_FSCALE_CMD_LOAD) >> BP_GPU2D_AQHICLOCKCONTROL_FSCALE_CMD_LOAD)

//! @brief Format value for bitfield GPU2D_AQHICLOCKCONTROL_FSCALE_CMD_LOAD.
#define BF_GPU2D_AQHICLOCKCONTROL_FSCALE_CMD_LOAD(v)   ((__REG_VALUE_TYPE((v), reg32_t) << BP_GPU2D_AQHICLOCKCONTROL_FSCALE_CMD_LOAD) & BM_GPU2D_AQHICLOCKCONTROL_FSCALE_CMD_LOAD)

#ifndef __LANGUAGE_ASM__
//! @brief Set the FSCALE_CMD_LOAD field to a new value.
#define BW_GPU2D_AQHICLOCKCONTROL_FSCALE_CMD_LOAD(v)   (HW_GPU2D_AQHICLOCKCONTROL_WR((HW_GPU2D_AQHICLOCKCONTROL_RD() & ~BM_GPU2D_AQHICLOCKCONTROL_FSCALE_CMD_LOAD) | BF_GPU2D_AQHICLOCKCONTROL_FSCALE_CMD_LOAD(v)))
#endif

/* --- Register HW_GPU2D_AQHICLOCKCONTROL, field FSCALE_VAL[29:23] (RW)
 *

 */

#define BP_GPU2D_AQHICLOCKCONTROL_FSCALE_VAL      (23)      //!< Bit position for GPU2D_AQHICLOCKCONTROL_FSCALE_VAL.
#define BM_GPU2D_AQHICLOCKCONTROL_FSCALE_VAL      (0x3f800000)  //!< Bit mask for GPU2D_AQHICLOCKCONTROL_FSCALE_VAL.

//! @brief Get value of GPU2D_AQHICLOCKCONTROL_FSCALE_VAL from a register value.
#define BG_GPU2D_AQHICLOCKCONTROL_FSCALE_VAL(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_GPU2D_AQHICLOCKCONTROL_FSCALE_VAL) >> BP_GPU2D_AQHICLOCKCONTROL_FSCALE_VAL)

//! @brief Format value for bitfield GPU2D_AQHICLOCKCONTROL_FSCALE_VAL.
#define BF_GPU2D_AQHICLOCKCONTROL_FSCALE_VAL(v)   ((__REG_VALUE_TYPE((v), reg32_t) << BP_GPU2D_AQHICLOCKCONTROL_FSCALE_VAL) & BM_GPU2D_AQHICLOCKCONTROL_FSCALE_VAL)

#ifndef __LANGUAGE_ASM__
//! @brief Set the FSCALE_VAL field to a new value.
#define BW_GPU2D_AQHICLOCKCONTROL_FSCALE_VAL(v)   (HW_GPU2D_AQHICLOCKCONTROL_WR((HW_GPU2D_AQHICLOCKCONTROL_RD() & ~BM_GPU2D_AQHICLOCKCONTROL_FSCALE_VAL) | BF_GPU2D_AQHICLOCKCONTROL_FSCALE_VAL(v)))
#endif

/* --- Register HW_GPU2D_AQHICLOCKCONTROL, field CLK2D_DIS[30] (RW)
 *
 * Disable 2D clock.
 */

#define BP_GPU2D_AQHICLOCKCONTROL_CLK2D_DIS      (30)      //!< Bit position for GPU2D_AQHICLOCKCONTROL_CLK2D_DIS.
#define BM_GPU2D_AQHICLOCKCONTROL_CLK2D_DIS      (0x40000000)  //!< Bit mask for GPU2D_AQHICLOCKCONTROL_CLK2D_DIS.

//! @brief Get value of GPU2D_AQHICLOCKCONTROL_CLK2D_DIS from a register value.
#define BG_GPU2D_AQHICLOCKCONTROL_CLK2D_DIS(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_GPU2D_AQHICLOCKCONTROL_CLK2D_DIS) >> BP_GPU2D_AQHICLOCKCONTROL_CLK2D_DIS)

//! @brief Format value for bitfield GPU2D_AQHICLOCKCONTROL_CLK2D_DIS.
#define BF_GPU2D_AQHICLOCKCONTROL_CLK2D_DIS(v)   ((__REG_VALUE_TYPE((v), reg32_t) << BP_GPU2D_AQHICLOCKCONTROL_CLK2D_DIS) & BM_GPU2D_AQHICLOCKCONTROL_CLK2D_DIS)

#ifndef __LANGUAGE_ASM__
//! @brief Set the CLK2D_DIS field to a new value.
#define BW_GPU2D_AQHICLOCKCONTROL_CLK2D_DIS(v)   (HW_GPU2D_AQHICLOCKCONTROL_WR((HW_GPU2D_AQHICLOCKCONTROL_RD() & ~BM_GPU2D_AQHICLOCKCONTROL_CLK2D_DIS) | BF_GPU2D_AQHICLOCKCONTROL_CLK2D_DIS(v)))
#endif

/* --- Register HW_GPU2D_AQHICLOCKCONTROL, field CLK3D_DIS[31] (RW)
 *
 * Disable 3D clock.
 */

#define BP_GPU2D_AQHICLOCKCONTROL_CLK3D_DIS      (31)      //!< Bit position for GPU2D_AQHICLOCKCONTROL_CLK3D_DIS.
#define BM_GPU2D_AQHICLOCKCONTROL_CLK3D_DIS      (0x80000000)  //!< Bit mask for GPU2D_AQHICLOCKCONTROL_CLK3D_DIS.

//! @brief Get value of GPU2D_AQHICLOCKCONTROL_CLK3D_DIS from a register value.
#define BG_GPU2D_AQHICLOCKCONTROL_CLK3D_DIS(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_GPU2D_AQHICLOCKCONTROL_CLK3D_DIS) >> BP_GPU2D_AQHICLOCKCONTROL_CLK3D_DIS)

//! @brief Format value for bitfield GPU2D_AQHICLOCKCONTROL_CLK3D_DIS.
#define BF_GPU2D_AQHICLOCKCONTROL_CLK3D_DIS(v)   ((__REG_VALUE_TYPE((v), reg32_t) << BP_GPU2D_AQHICLOCKCONTROL_CLK3D_DIS) & BM_GPU2D_AQHICLOCKCONTROL_CLK3D_DIS)

#ifndef __LANGUAGE_ASM__
//! @brief Set the CLK3D_DIS field to a new value.
#define BW_GPU2D_AQHICLOCKCONTROL_CLK3D_DIS(v)   (HW_GPU2D_AQHICLOCKCONTROL_WR((HW_GPU2D_AQHICLOCKCONTROL_RD() & ~BM_GPU2D_AQHICLOCKCONTROL_CLK3D_DIS) | BF_GPU2D_AQHICLOCKCONTROL_CLK3D_DIS(v)))
#endif

//-------------------------------------------------------------------------------------------
// HW_GPU2D_AQHIIDLE - Idle Status Register
//-------------------------------------------------------------------------------------------

#ifndef __LANGUAGE_ASM__
/*!
 * @brief HW_GPU2D_AQHIIDLE - Idle Status Register (RO)
 *
 * Reset value: 0x7fffffff
 *

 */
typedef union _hw_gpu2d_aqhiidle
{
    reg32_t U;
    struct _hw_gpu2d_aqhiidle_bitfields
    {
        unsigned AXI_LP : 1; //!< [0] AXI is in low power mode.
        unsigned RESERVED0 : 19; //!< [19:1] Reserved.
        unsigned IDLE_TS : 1; //!< [20] TS is idle.
        unsigned IDLE_FP : 1; //!< [21] FP is idle.
        unsigned IDLE_IM : 1; //!< [22] IM is idle.
        unsigned IDLE_VG : 1; //!< [23] VG is idle.
        unsigned IDLE_TX : 1; //!< [24] TX is idle.
        unsigned IDLE_RA : 1; //!< [25] RA is idle.
        unsigned IDLE_SE : 1; //!< [26] SE is idle.
        unsigned IDLE_PA : 1; //!< [27] PA is idle.
        unsigned IDLE_SH : 1; //!< [28] SH is idle.
        unsigned IDLE_PE : 1; //!< [29] PE is idle.
        unsigned IDLE_DE : 1; //!< [30] DE is idle.
        unsigned IDLE_FE : 1; //!< [31] FE is idle.
    } B;
} hw_gpu2d_aqhiidle_t;
#endif

/*
 * constants & macros for entire GPU2D_AQHIIDLE register
 */
#define HW_GPU2D_AQHIIDLE_ADDR      (REGS_GPU2D_BASE + 0x4)

#ifndef __LANGUAGE_ASM__
#define HW_GPU2D_AQHIIDLE           (*(volatile hw_gpu2d_aqhiidle_t *) HW_GPU2D_AQHIIDLE_ADDR)
#define HW_GPU2D_AQHIIDLE_RD()      (HW_GPU2D_AQHIIDLE.U)
#endif

/*
 * constants & macros for individual GPU2D_AQHIIDLE bitfields
 */

/* --- Register HW_GPU2D_AQHIIDLE, field AXI_LP[0] (RO)
 *
 * AXI is in low power mode.
 */

#define BP_GPU2D_AQHIIDLE_AXI_LP      (0)      //!< Bit position for GPU2D_AQHIIDLE_AXI_LP.
#define BM_GPU2D_AQHIIDLE_AXI_LP      (0x00000001)  //!< Bit mask for GPU2D_AQHIIDLE_AXI_LP.

//! @brief Get value of GPU2D_AQHIIDLE_AXI_LP from a register value.
#define BG_GPU2D_AQHIIDLE_AXI_LP(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_GPU2D_AQHIIDLE_AXI_LP) >> BP_GPU2D_AQHIIDLE_AXI_LP)

/* --- Register HW_GPU2D_AQHIIDLE, field IDLE_TS[20] (RO)
 *
 * TS is idle.
 */

#define BP_GPU2D_AQHIIDLE_IDLE_TS      (20)      //!< Bit position for GPU2D_AQHIIDLE_IDLE_TS.
#define BM_GPU2D_AQHIIDLE_IDLE_TS      (0x00100000)  //!< Bit mask for GPU2D_AQHIIDLE_IDLE_TS.

//! @brief Get value of GPU2D_AQHIIDLE_IDLE_TS from a register value.
#define BG_GPU2D_AQHIIDLE_IDLE_TS(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_GPU2D_AQHIIDLE_IDLE_TS) >> BP_GPU2D_AQHIIDLE_IDLE_TS)

/* --- Register HW_GPU2D_AQHIIDLE, field IDLE_FP[21] (RO)
 *
 * FP is idle.
 */

#define BP_GPU2D_AQHIIDLE_IDLE_FP      (21)      //!< Bit position for GPU2D_AQHIIDLE_IDLE_FP.
#define BM_GPU2D_AQHIIDLE_IDLE_FP      (0x00200000)  //!< Bit mask for GPU2D_AQHIIDLE_IDLE_FP.

//! @brief Get value of GPU2D_AQHIIDLE_IDLE_FP from a register value.
#define BG_GPU2D_AQHIIDLE_IDLE_FP(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_GPU2D_AQHIIDLE_IDLE_FP) >> BP_GPU2D_AQHIIDLE_IDLE_FP)

/* --- Register HW_GPU2D_AQHIIDLE, field IDLE_IM[22] (RO)
 *
 * IM is idle.
 */

#define BP_GPU2D_AQHIIDLE_IDLE_IM      (22)      //!< Bit position for GPU2D_AQHIIDLE_IDLE_IM.
#define BM_GPU2D_AQHIIDLE_IDLE_IM      (0x00400000)  //!< Bit mask for GPU2D_AQHIIDLE_IDLE_IM.

//! @brief Get value of GPU2D_AQHIIDLE_IDLE_IM from a register value.
#define BG_GPU2D_AQHIIDLE_IDLE_IM(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_GPU2D_AQHIIDLE_IDLE_IM) >> BP_GPU2D_AQHIIDLE_IDLE_IM)

/* --- Register HW_GPU2D_AQHIIDLE, field IDLE_VG[23] (RO)
 *
 * VG is idle.
 */

#define BP_GPU2D_AQHIIDLE_IDLE_VG      (23)      //!< Bit position for GPU2D_AQHIIDLE_IDLE_VG.
#define BM_GPU2D_AQHIIDLE_IDLE_VG      (0x00800000)  //!< Bit mask for GPU2D_AQHIIDLE_IDLE_VG.

//! @brief Get value of GPU2D_AQHIIDLE_IDLE_VG from a register value.
#define BG_GPU2D_AQHIIDLE_IDLE_VG(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_GPU2D_AQHIIDLE_IDLE_VG) >> BP_GPU2D_AQHIIDLE_IDLE_VG)

/* --- Register HW_GPU2D_AQHIIDLE, field IDLE_TX[24] (RO)
 *
 * TX is idle.
 */

#define BP_GPU2D_AQHIIDLE_IDLE_TX      (24)      //!< Bit position for GPU2D_AQHIIDLE_IDLE_TX.
#define BM_GPU2D_AQHIIDLE_IDLE_TX      (0x01000000)  //!< Bit mask for GPU2D_AQHIIDLE_IDLE_TX.

//! @brief Get value of GPU2D_AQHIIDLE_IDLE_TX from a register value.
#define BG_GPU2D_AQHIIDLE_IDLE_TX(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_GPU2D_AQHIIDLE_IDLE_TX) >> BP_GPU2D_AQHIIDLE_IDLE_TX)

/* --- Register HW_GPU2D_AQHIIDLE, field IDLE_RA[25] (RO)
 *
 * RA is idle.
 */

#define BP_GPU2D_AQHIIDLE_IDLE_RA      (25)      //!< Bit position for GPU2D_AQHIIDLE_IDLE_RA.
#define BM_GPU2D_AQHIIDLE_IDLE_RA      (0x02000000)  //!< Bit mask for GPU2D_AQHIIDLE_IDLE_RA.

//! @brief Get value of GPU2D_AQHIIDLE_IDLE_RA from a register value.
#define BG_GPU2D_AQHIIDLE_IDLE_RA(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_GPU2D_AQHIIDLE_IDLE_RA) >> BP_GPU2D_AQHIIDLE_IDLE_RA)

/* --- Register HW_GPU2D_AQHIIDLE, field IDLE_SE[26] (RO)
 *
 * SE is idle.
 */

#define BP_GPU2D_AQHIIDLE_IDLE_SE      (26)      //!< Bit position for GPU2D_AQHIIDLE_IDLE_SE.
#define BM_GPU2D_AQHIIDLE_IDLE_SE      (0x04000000)  //!< Bit mask for GPU2D_AQHIIDLE_IDLE_SE.

//! @brief Get value of GPU2D_AQHIIDLE_IDLE_SE from a register value.
#define BG_GPU2D_AQHIIDLE_IDLE_SE(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_GPU2D_AQHIIDLE_IDLE_SE) >> BP_GPU2D_AQHIIDLE_IDLE_SE)

/* --- Register HW_GPU2D_AQHIIDLE, field IDLE_PA[27] (RO)
 *
 * PA is idle.
 */

#define BP_GPU2D_AQHIIDLE_IDLE_PA      (27)      //!< Bit position for GPU2D_AQHIIDLE_IDLE_PA.
#define BM_GPU2D_AQHIIDLE_IDLE_PA      (0x08000000)  //!< Bit mask for GPU2D_AQHIIDLE_IDLE_PA.

//! @brief Get value of GPU2D_AQHIIDLE_IDLE_PA from a register value.
#define BG_GPU2D_AQHIIDLE_IDLE_PA(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_GPU2D_AQHIIDLE_IDLE_PA) >> BP_GPU2D_AQHIIDLE_IDLE_PA)

/* --- Register HW_GPU2D_AQHIIDLE, field IDLE_SH[28] (RO)
 *
 * SH is idle.
 */

#define BP_GPU2D_AQHIIDLE_IDLE_SH      (28)      //!< Bit position for GPU2D_AQHIIDLE_IDLE_SH.
#define BM_GPU2D_AQHIIDLE_IDLE_SH      (0x10000000)  //!< Bit mask for GPU2D_AQHIIDLE_IDLE_SH.

//! @brief Get value of GPU2D_AQHIIDLE_IDLE_SH from a register value.
#define BG_GPU2D_AQHIIDLE_IDLE_SH(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_GPU2D_AQHIIDLE_IDLE_SH) >> BP_GPU2D_AQHIIDLE_IDLE_SH)

/* --- Register HW_GPU2D_AQHIIDLE, field IDLE_PE[29] (RO)
 *
 * PE is idle.
 */

#define BP_GPU2D_AQHIIDLE_IDLE_PE      (29)      //!< Bit position for GPU2D_AQHIIDLE_IDLE_PE.
#define BM_GPU2D_AQHIIDLE_IDLE_PE      (0x20000000)  //!< Bit mask for GPU2D_AQHIIDLE_IDLE_PE.

//! @brief Get value of GPU2D_AQHIIDLE_IDLE_PE from a register value.
#define BG_GPU2D_AQHIIDLE_IDLE_PE(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_GPU2D_AQHIIDLE_IDLE_PE) >> BP_GPU2D_AQHIIDLE_IDLE_PE)

/* --- Register HW_GPU2D_AQHIIDLE, field IDLE_DE[30] (RO)
 *
 * DE is idle.
 */

#define BP_GPU2D_AQHIIDLE_IDLE_DE      (30)      //!< Bit position for GPU2D_AQHIIDLE_IDLE_DE.
#define BM_GPU2D_AQHIIDLE_IDLE_DE      (0x40000000)  //!< Bit mask for GPU2D_AQHIIDLE_IDLE_DE.

//! @brief Get value of GPU2D_AQHIIDLE_IDLE_DE from a register value.
#define BG_GPU2D_AQHIIDLE_IDLE_DE(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_GPU2D_AQHIIDLE_IDLE_DE) >> BP_GPU2D_AQHIIDLE_IDLE_DE)

/* --- Register HW_GPU2D_AQHIIDLE, field IDLE_FE[31] (RO)
 *
 * FE is idle.
 */

#define BP_GPU2D_AQHIIDLE_IDLE_FE      (31)      //!< Bit position for GPU2D_AQHIIDLE_IDLE_FE.
#define BM_GPU2D_AQHIIDLE_IDLE_FE      (0x80000000)  //!< Bit mask for GPU2D_AQHIIDLE_IDLE_FE.

//! @brief Get value of GPU2D_AQHIIDLE_IDLE_FE from a register value.
#define BG_GPU2D_AQHIIDLE_IDLE_FE(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_GPU2D_AQHIIDLE_IDLE_FE) >> BP_GPU2D_AQHIIDLE_IDLE_FE)

//-------------------------------------------------------------------------------------------
// HW_GPU2D_AQAXICONFIG - AXI Configuration Register
//-------------------------------------------------------------------------------------------

#ifndef __LANGUAGE_ASM__
/*!
 * @brief HW_GPU2D_AQAXICONFIG - AXI Configuration Register (RW)
 *
 * Reset value: 0x00000000
 *

 */
typedef union _hw_gpu2d_aqaxiconfig
{
    reg32_t U;
    struct _hw_gpu2d_aqaxiconfig_bitfields
    {
        unsigned RESERVED0 : 16; //!< [15:0] Reserved
        unsigned ARCACHE : 4; //!< [19:16] 
        unsigned AWCACHE : 4; //!< [23:20] 
        unsigned ARID : 4; //!< [27:24] 
        unsigned AWID : 4; //!< [31:28] 
    } B;
} hw_gpu2d_aqaxiconfig_t;
#endif

/*
 * constants & macros for entire GPU2D_AQAXICONFIG register
 */
#define HW_GPU2D_AQAXICONFIG_ADDR      (REGS_GPU2D_BASE + 0x8)

#ifndef __LANGUAGE_ASM__
#define HW_GPU2D_AQAXICONFIG           (*(volatile hw_gpu2d_aqaxiconfig_t *) HW_GPU2D_AQAXICONFIG_ADDR)
#define HW_GPU2D_AQAXICONFIG_RD()      (HW_GPU2D_AQAXICONFIG.U)
#define HW_GPU2D_AQAXICONFIG_WR(v)     (HW_GPU2D_AQAXICONFIG.U = (v))
#define HW_GPU2D_AQAXICONFIG_SET(v)    (HW_GPU2D_AQAXICONFIG_WR(HW_GPU2D_AQAXICONFIG_RD() |  (v)))
#define HW_GPU2D_AQAXICONFIG_CLR(v)    (HW_GPU2D_AQAXICONFIG_WR(HW_GPU2D_AQAXICONFIG_RD() & ~(v)))
#define HW_GPU2D_AQAXICONFIG_TOG(v)    (HW_GPU2D_AQAXICONFIG_WR(HW_GPU2D_AQAXICONFIG_RD() ^  (v)))
#endif

/*
 * constants & macros for individual GPU2D_AQAXICONFIG bitfields
 */

/* --- Register HW_GPU2D_AQAXICONFIG, field ARCACHE[19:16] (RW)
 *

 */

#define BP_GPU2D_AQAXICONFIG_ARCACHE      (16)      //!< Bit position for GPU2D_AQAXICONFIG_ARCACHE.
#define BM_GPU2D_AQAXICONFIG_ARCACHE      (0x000f0000)  //!< Bit mask for GPU2D_AQAXICONFIG_ARCACHE.

//! @brief Get value of GPU2D_AQAXICONFIG_ARCACHE from a register value.
#define BG_GPU2D_AQAXICONFIG_ARCACHE(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_GPU2D_AQAXICONFIG_ARCACHE) >> BP_GPU2D_AQAXICONFIG_ARCACHE)

//! @brief Format value for bitfield GPU2D_AQAXICONFIG_ARCACHE.
#define BF_GPU2D_AQAXICONFIG_ARCACHE(v)   ((__REG_VALUE_TYPE((v), reg32_t) << BP_GPU2D_AQAXICONFIG_ARCACHE) & BM_GPU2D_AQAXICONFIG_ARCACHE)

#ifndef __LANGUAGE_ASM__
//! @brief Set the ARCACHE field to a new value.
#define BW_GPU2D_AQAXICONFIG_ARCACHE(v)   (HW_GPU2D_AQAXICONFIG_WR((HW_GPU2D_AQAXICONFIG_RD() & ~BM_GPU2D_AQAXICONFIG_ARCACHE) | BF_GPU2D_AQAXICONFIG_ARCACHE(v)))
#endif

/* --- Register HW_GPU2D_AQAXICONFIG, field AWCACHE[23:20] (RW)
 *

 */

#define BP_GPU2D_AQAXICONFIG_AWCACHE      (20)      //!< Bit position for GPU2D_AQAXICONFIG_AWCACHE.
#define BM_GPU2D_AQAXICONFIG_AWCACHE      (0x00f00000)  //!< Bit mask for GPU2D_AQAXICONFIG_AWCACHE.

//! @brief Get value of GPU2D_AQAXICONFIG_AWCACHE from a register value.
#define BG_GPU2D_AQAXICONFIG_AWCACHE(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_GPU2D_AQAXICONFIG_AWCACHE) >> BP_GPU2D_AQAXICONFIG_AWCACHE)

//! @brief Format value for bitfield GPU2D_AQAXICONFIG_AWCACHE.
#define BF_GPU2D_AQAXICONFIG_AWCACHE(v)   ((__REG_VALUE_TYPE((v), reg32_t) << BP_GPU2D_AQAXICONFIG_AWCACHE) & BM_GPU2D_AQAXICONFIG_AWCACHE)

#ifndef __LANGUAGE_ASM__
//! @brief Set the AWCACHE field to a new value.
#define BW_GPU2D_AQAXICONFIG_AWCACHE(v)   (HW_GPU2D_AQAXICONFIG_WR((HW_GPU2D_AQAXICONFIG_RD() & ~BM_GPU2D_AQAXICONFIG_AWCACHE) | BF_GPU2D_AQAXICONFIG_AWCACHE(v)))
#endif

/* --- Register HW_GPU2D_AQAXICONFIG, field ARID[27:24] (RW)
 *

 */

#define BP_GPU2D_AQAXICONFIG_ARID      (24)      //!< Bit position for GPU2D_AQAXICONFIG_ARID.
#define BM_GPU2D_AQAXICONFIG_ARID      (0x0f000000)  //!< Bit mask for GPU2D_AQAXICONFIG_ARID.

//! @brief Get value of GPU2D_AQAXICONFIG_ARID from a register value.
#define BG_GPU2D_AQAXICONFIG_ARID(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_GPU2D_AQAXICONFIG_ARID) >> BP_GPU2D_AQAXICONFIG_ARID)

//! @brief Format value for bitfield GPU2D_AQAXICONFIG_ARID.
#define BF_GPU2D_AQAXICONFIG_ARID(v)   ((__REG_VALUE_TYPE((v), reg32_t) << BP_GPU2D_AQAXICONFIG_ARID) & BM_GPU2D_AQAXICONFIG_ARID)

#ifndef __LANGUAGE_ASM__
//! @brief Set the ARID field to a new value.
#define BW_GPU2D_AQAXICONFIG_ARID(v)   (HW_GPU2D_AQAXICONFIG_WR((HW_GPU2D_AQAXICONFIG_RD() & ~BM_GPU2D_AQAXICONFIG_ARID) | BF_GPU2D_AQAXICONFIG_ARID(v)))
#endif

/* --- Register HW_GPU2D_AQAXICONFIG, field AWID[31:28] (RW)
 *

 */

#define BP_GPU2D_AQAXICONFIG_AWID      (28)      //!< Bit position for GPU2D_AQAXICONFIG_AWID.
#define BM_GPU2D_AQAXICONFIG_AWID      (0xf0000000)  //!< Bit mask for GPU2D_AQAXICONFIG_AWID.

//! @brief Get value of GPU2D_AQAXICONFIG_AWID from a register value.
#define BG_GPU2D_AQAXICONFIG_AWID(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_GPU2D_AQAXICONFIG_AWID) >> BP_GPU2D_AQAXICONFIG_AWID)

//! @brief Format value for bitfield GPU2D_AQAXICONFIG_AWID.
#define BF_GPU2D_AQAXICONFIG_AWID(v)   ((__REG_VALUE_TYPE((v), reg32_t) << BP_GPU2D_AQAXICONFIG_AWID) & BM_GPU2D_AQAXICONFIG_AWID)

#ifndef __LANGUAGE_ASM__
//! @brief Set the AWID field to a new value.
#define BW_GPU2D_AQAXICONFIG_AWID(v)   (HW_GPU2D_AQAXICONFIG_WR((HW_GPU2D_AQAXICONFIG_RD() & ~BM_GPU2D_AQAXICONFIG_AWID) | BF_GPU2D_AQAXICONFIG_AWID(v)))
#endif

//-------------------------------------------------------------------------------------------
// HW_GPU2D_AQAXISTATUS - AXI Status Register
//-------------------------------------------------------------------------------------------

#ifndef __LANGUAGE_ASM__
/*!
 * @brief HW_GPU2D_AQAXISTATUS - AXI Status Register (RW)
 *
 * Reset value: 0x00000000
 *

 */
typedef union _hw_gpu2d_aqaxistatus
{
    reg32_t U;
    struct _hw_gpu2d_aqaxistatus_bitfields
    {
        unsigned WR_ERR_ID : 4; //!< [3:0] 
        unsigned RD_ERR_ID : 4; //!< [7:4] 
        unsigned DET_WR_ERR : 1; //!< [8] 
        unsigned DET_RD_ERR : 1; //!< [9] 
        unsigned RESERVED0 : 22; //!< [31:10] Reserved
    } B;
} hw_gpu2d_aqaxistatus_t;
#endif

/*
 * constants & macros for entire GPU2D_AQAXISTATUS register
 */
#define HW_GPU2D_AQAXISTATUS_ADDR      (REGS_GPU2D_BASE + 0xc)

#ifndef __LANGUAGE_ASM__
#define HW_GPU2D_AQAXISTATUS           (*(volatile hw_gpu2d_aqaxistatus_t *) HW_GPU2D_AQAXISTATUS_ADDR)
#define HW_GPU2D_AQAXISTATUS_RD()      (HW_GPU2D_AQAXISTATUS.U)
#define HW_GPU2D_AQAXISTATUS_WR(v)     (HW_GPU2D_AQAXISTATUS.U = (v))
#define HW_GPU2D_AQAXISTATUS_SET(v)    (HW_GPU2D_AQAXISTATUS_WR(HW_GPU2D_AQAXISTATUS_RD() |  (v)))
#define HW_GPU2D_AQAXISTATUS_CLR(v)    (HW_GPU2D_AQAXISTATUS_WR(HW_GPU2D_AQAXISTATUS_RD() & ~(v)))
#define HW_GPU2D_AQAXISTATUS_TOG(v)    (HW_GPU2D_AQAXISTATUS_WR(HW_GPU2D_AQAXISTATUS_RD() ^  (v)))
#endif

/*
 * constants & macros for individual GPU2D_AQAXISTATUS bitfields
 */

/* --- Register HW_GPU2D_AQAXISTATUS, field WR_ERR_ID[3:0] (RW)
 *

 */

#define BP_GPU2D_AQAXISTATUS_WR_ERR_ID      (0)      //!< Bit position for GPU2D_AQAXISTATUS_WR_ERR_ID.
#define BM_GPU2D_AQAXISTATUS_WR_ERR_ID      (0x0000000f)  //!< Bit mask for GPU2D_AQAXISTATUS_WR_ERR_ID.

//! @brief Get value of GPU2D_AQAXISTATUS_WR_ERR_ID from a register value.
#define BG_GPU2D_AQAXISTATUS_WR_ERR_ID(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_GPU2D_AQAXISTATUS_WR_ERR_ID) >> BP_GPU2D_AQAXISTATUS_WR_ERR_ID)

//! @brief Format value for bitfield GPU2D_AQAXISTATUS_WR_ERR_ID.
#define BF_GPU2D_AQAXISTATUS_WR_ERR_ID(v)   ((__REG_VALUE_TYPE((v), reg32_t) << BP_GPU2D_AQAXISTATUS_WR_ERR_ID) & BM_GPU2D_AQAXISTATUS_WR_ERR_ID)

#ifndef __LANGUAGE_ASM__
//! @brief Set the WR_ERR_ID field to a new value.
#define BW_GPU2D_AQAXISTATUS_WR_ERR_ID(v)   (HW_GPU2D_AQAXISTATUS_WR((HW_GPU2D_AQAXISTATUS_RD() & ~BM_GPU2D_AQAXISTATUS_WR_ERR_ID) | BF_GPU2D_AQAXISTATUS_WR_ERR_ID(v)))
#endif

/* --- Register HW_GPU2D_AQAXISTATUS, field RD_ERR_ID[7:4] (RW)
 *

 */

#define BP_GPU2D_AQAXISTATUS_RD_ERR_ID      (4)      //!< Bit position for GPU2D_AQAXISTATUS_RD_ERR_ID.
#define BM_GPU2D_AQAXISTATUS_RD_ERR_ID      (0x000000f0)  //!< Bit mask for GPU2D_AQAXISTATUS_RD_ERR_ID.

//! @brief Get value of GPU2D_AQAXISTATUS_RD_ERR_ID from a register value.
#define BG_GPU2D_AQAXISTATUS_RD_ERR_ID(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_GPU2D_AQAXISTATUS_RD_ERR_ID) >> BP_GPU2D_AQAXISTATUS_RD_ERR_ID)

//! @brief Format value for bitfield GPU2D_AQAXISTATUS_RD_ERR_ID.
#define BF_GPU2D_AQAXISTATUS_RD_ERR_ID(v)   ((__REG_VALUE_TYPE((v), reg32_t) << BP_GPU2D_AQAXISTATUS_RD_ERR_ID) & BM_GPU2D_AQAXISTATUS_RD_ERR_ID)

#ifndef __LANGUAGE_ASM__
//! @brief Set the RD_ERR_ID field to a new value.
#define BW_GPU2D_AQAXISTATUS_RD_ERR_ID(v)   (HW_GPU2D_AQAXISTATUS_WR((HW_GPU2D_AQAXISTATUS_RD() & ~BM_GPU2D_AQAXISTATUS_RD_ERR_ID) | BF_GPU2D_AQAXISTATUS_RD_ERR_ID(v)))
#endif

/* --- Register HW_GPU2D_AQAXISTATUS, field DET_WR_ERR[8] (RW)
 *

 */

#define BP_GPU2D_AQAXISTATUS_DET_WR_ERR      (8)      //!< Bit position for GPU2D_AQAXISTATUS_DET_WR_ERR.
#define BM_GPU2D_AQAXISTATUS_DET_WR_ERR      (0x00000100)  //!< Bit mask for GPU2D_AQAXISTATUS_DET_WR_ERR.

//! @brief Get value of GPU2D_AQAXISTATUS_DET_WR_ERR from a register value.
#define BG_GPU2D_AQAXISTATUS_DET_WR_ERR(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_GPU2D_AQAXISTATUS_DET_WR_ERR) >> BP_GPU2D_AQAXISTATUS_DET_WR_ERR)

//! @brief Format value for bitfield GPU2D_AQAXISTATUS_DET_WR_ERR.
#define BF_GPU2D_AQAXISTATUS_DET_WR_ERR(v)   ((__REG_VALUE_TYPE((v), reg32_t) << BP_GPU2D_AQAXISTATUS_DET_WR_ERR) & BM_GPU2D_AQAXISTATUS_DET_WR_ERR)

#ifndef __LANGUAGE_ASM__
//! @brief Set the DET_WR_ERR field to a new value.
#define BW_GPU2D_AQAXISTATUS_DET_WR_ERR(v)   (HW_GPU2D_AQAXISTATUS_WR((HW_GPU2D_AQAXISTATUS_RD() & ~BM_GPU2D_AQAXISTATUS_DET_WR_ERR) | BF_GPU2D_AQAXISTATUS_DET_WR_ERR(v)))
#endif

/* --- Register HW_GPU2D_AQAXISTATUS, field DET_RD_ERR[9] (RW)
 *

 */

#define BP_GPU2D_AQAXISTATUS_DET_RD_ERR      (9)      //!< Bit position for GPU2D_AQAXISTATUS_DET_RD_ERR.
#define BM_GPU2D_AQAXISTATUS_DET_RD_ERR      (0x00000200)  //!< Bit mask for GPU2D_AQAXISTATUS_DET_RD_ERR.

//! @brief Get value of GPU2D_AQAXISTATUS_DET_RD_ERR from a register value.
#define BG_GPU2D_AQAXISTATUS_DET_RD_ERR(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_GPU2D_AQAXISTATUS_DET_RD_ERR) >> BP_GPU2D_AQAXISTATUS_DET_RD_ERR)

//! @brief Format value for bitfield GPU2D_AQAXISTATUS_DET_RD_ERR.
#define BF_GPU2D_AQAXISTATUS_DET_RD_ERR(v)   ((__REG_VALUE_TYPE((v), reg32_t) << BP_GPU2D_AQAXISTATUS_DET_RD_ERR) & BM_GPU2D_AQAXISTATUS_DET_RD_ERR)

#ifndef __LANGUAGE_ASM__
//! @brief Set the DET_RD_ERR field to a new value.
#define BW_GPU2D_AQAXISTATUS_DET_RD_ERR(v)   (HW_GPU2D_AQAXISTATUS_WR((HW_GPU2D_AQAXISTATUS_RD() & ~BM_GPU2D_AQAXISTATUS_DET_RD_ERR) | BF_GPU2D_AQAXISTATUS_DET_RD_ERR(v)))
#endif

//-------------------------------------------------------------------------------------------
// HW_GPU2D_AQINTRACKNOWLEDGE - Interrupt Acknowledge Register
//-------------------------------------------------------------------------------------------

#ifndef __LANGUAGE_ASM__
/*!
 * @brief HW_GPU2D_AQINTRACKNOWLEDGE - Interrupt Acknowledge Register (RO)
 *
 * Reset value: 0x00000000
 *
 * Interrupt acknowledge register. Each bit represents a corresponding event being triggered.
 * Reading frmo this register clears the outstanding interrupt.
 */
typedef union _hw_gpu2d_aqintracknowledge
{
    reg32_t U;
    struct _hw_gpu2d_aqintracknowledge_bitfields
    {
        unsigned INTR_VEC : 32; //!< [31:0] 
    } B;
} hw_gpu2d_aqintracknowledge_t;
#endif

/*
 * constants & macros for entire GPU2D_AQINTRACKNOWLEDGE register
 */
#define HW_GPU2D_AQINTRACKNOWLEDGE_ADDR      (REGS_GPU2D_BASE + 0x10)

#ifndef __LANGUAGE_ASM__
#define HW_GPU2D_AQINTRACKNOWLEDGE           (*(volatile hw_gpu2d_aqintracknowledge_t *) HW_GPU2D_AQINTRACKNOWLEDGE_ADDR)
#define HW_GPU2D_AQINTRACKNOWLEDGE_RD()      (HW_GPU2D_AQINTRACKNOWLEDGE.U)
#endif

/*
 * constants & macros for individual GPU2D_AQINTRACKNOWLEDGE bitfields
 */

/* --- Register HW_GPU2D_AQINTRACKNOWLEDGE, field INTR_VEC[31:0] (RO)
 *

 */

#define BP_GPU2D_AQINTRACKNOWLEDGE_INTR_VEC      (0)      //!< Bit position for GPU2D_AQINTRACKNOWLEDGE_INTR_VEC.
#define BM_GPU2D_AQINTRACKNOWLEDGE_INTR_VEC      (0xffffffff)  //!< Bit mask for GPU2D_AQINTRACKNOWLEDGE_INTR_VEC.

//! @brief Get value of GPU2D_AQINTRACKNOWLEDGE_INTR_VEC from a register value.
#define BG_GPU2D_AQINTRACKNOWLEDGE_INTR_VEC(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_GPU2D_AQINTRACKNOWLEDGE_INTR_VEC) >> BP_GPU2D_AQINTRACKNOWLEDGE_INTR_VEC)

//-------------------------------------------------------------------------------------------
// HW_GPU2D_AQINTRENBL - Interrupt Enable Register
//-------------------------------------------------------------------------------------------

#ifndef __LANGUAGE_ASM__
/*!
 * @brief HW_GPU2D_AQINTRENBL - Interrupt Enable Register (RW)
 *
 * Reset value: 0x00000000
 *
 * Interrupt enable register. Each bit enables a corresponding event.
 */
typedef union _hw_gpu2d_aqintrenbl
{
    reg32_t U;
    struct _hw_gpu2d_aqintrenbl_bitfields
    {
        unsigned INTR_ENBL_VEC : 32; //!< [31:0] 
    } B;
} hw_gpu2d_aqintrenbl_t;
#endif

/*
 * constants & macros for entire GPU2D_AQINTRENBL register
 */
#define HW_GPU2D_AQINTRENBL_ADDR      (REGS_GPU2D_BASE + 0x14)

#ifndef __LANGUAGE_ASM__
#define HW_GPU2D_AQINTRENBL           (*(volatile hw_gpu2d_aqintrenbl_t *) HW_GPU2D_AQINTRENBL_ADDR)
#define HW_GPU2D_AQINTRENBL_RD()      (HW_GPU2D_AQINTRENBL.U)
#define HW_GPU2D_AQINTRENBL_WR(v)     (HW_GPU2D_AQINTRENBL.U = (v))
#define HW_GPU2D_AQINTRENBL_SET(v)    (HW_GPU2D_AQINTRENBL_WR(HW_GPU2D_AQINTRENBL_RD() |  (v)))
#define HW_GPU2D_AQINTRENBL_CLR(v)    (HW_GPU2D_AQINTRENBL_WR(HW_GPU2D_AQINTRENBL_RD() & ~(v)))
#define HW_GPU2D_AQINTRENBL_TOG(v)    (HW_GPU2D_AQINTRENBL_WR(HW_GPU2D_AQINTRENBL_RD() ^  (v)))
#endif

/*
 * constants & macros for individual GPU2D_AQINTRENBL bitfields
 */

/* --- Register HW_GPU2D_AQINTRENBL, field INTR_ENBL_VEC[31:0] (RW)
 *

 */

#define BP_GPU2D_AQINTRENBL_INTR_ENBL_VEC      (0)      //!< Bit position for GPU2D_AQINTRENBL_INTR_ENBL_VEC.
#define BM_GPU2D_AQINTRENBL_INTR_ENBL_VEC      (0xffffffff)  //!< Bit mask for GPU2D_AQINTRENBL_INTR_ENBL_VEC.

//! @brief Get value of GPU2D_AQINTRENBL_INTR_ENBL_VEC from a register value.
#define BG_GPU2D_AQINTRENBL_INTR_ENBL_VEC(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_GPU2D_AQINTRENBL_INTR_ENBL_VEC) >> BP_GPU2D_AQINTRENBL_INTR_ENBL_VEC)

//! @brief Format value for bitfield GPU2D_AQINTRENBL_INTR_ENBL_VEC.
#define BF_GPU2D_AQINTRENBL_INTR_ENBL_VEC(v)   ((__REG_VALUE_TYPE((v), reg32_t) << BP_GPU2D_AQINTRENBL_INTR_ENBL_VEC) & BM_GPU2D_AQINTRENBL_INTR_ENBL_VEC)

#ifndef __LANGUAGE_ASM__
//! @brief Set the INTR_ENBL_VEC field to a new value.
#define BW_GPU2D_AQINTRENBL_INTR_ENBL_VEC(v)   (HW_GPU2D_AQINTRENBL_WR((HW_GPU2D_AQINTRENBL_RD() & ~BM_GPU2D_AQINTRENBL_INTR_ENBL_VEC) | BF_GPU2D_AQINTRENBL_INTR_ENBL_VEC(v)))
#endif

//-------------------------------------------------------------------------------------------
// HW_GPU2D_AQIDENT - Identification Register
//-------------------------------------------------------------------------------------------

#ifndef __LANGUAGE_ASM__
/*!
 * @brief HW_GPU2D_AQIDENT - Identification Register (RO)
 *
 * Reset value: 0x00000000
 *
 * Identification register. This register has no set reset value. It varies with the implementation.
 */
typedef union _hw_gpu2d_aqident
{
    reg32_t U;
    struct _hw_gpu2d_aqident_bitfields
    {
        unsigned CUSTOMER : 8; //!< [7:0] Customer value.
        unsigned TECHNOLOGY : 4; //!< [11:8] Technology value.
        unsigned REVISION : 4; //!< [15:12] Revision value.
        unsigned PRODUCT : 8; //!< [23:16] Product value.
        unsigned FAMILY : 8; //!< [31:24] Family value.
    } B;
} hw_gpu2d_aqident_t;
#endif

/*
 * constants & macros for entire GPU2D_AQIDENT register
 */
#define HW_GPU2D_AQIDENT_ADDR      (REGS_GPU2D_BASE + 0x18)

#ifndef __LANGUAGE_ASM__
#define HW_GPU2D_AQIDENT           (*(volatile hw_gpu2d_aqident_t *) HW_GPU2D_AQIDENT_ADDR)
#define HW_GPU2D_AQIDENT_RD()      (HW_GPU2D_AQIDENT.U)
#endif

/*
 * constants & macros for individual GPU2D_AQIDENT bitfields
 */

/* --- Register HW_GPU2D_AQIDENT, field CUSTOMER[7:0] (RO)
 *
 * Customer value.
 */

#define BP_GPU2D_AQIDENT_CUSTOMER      (0)      //!< Bit position for GPU2D_AQIDENT_CUSTOMER.
#define BM_GPU2D_AQIDENT_CUSTOMER      (0x000000ff)  //!< Bit mask for GPU2D_AQIDENT_CUSTOMER.

//! @brief Get value of GPU2D_AQIDENT_CUSTOMER from a register value.
#define BG_GPU2D_AQIDENT_CUSTOMER(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_GPU2D_AQIDENT_CUSTOMER) >> BP_GPU2D_AQIDENT_CUSTOMER)

/* --- Register HW_GPU2D_AQIDENT, field TECHNOLOGY[11:8] (RO)
 *
 * Technology value.
 */

#define BP_GPU2D_AQIDENT_TECHNOLOGY      (8)      //!< Bit position for GPU2D_AQIDENT_TECHNOLOGY.
#define BM_GPU2D_AQIDENT_TECHNOLOGY      (0x00000f00)  //!< Bit mask for GPU2D_AQIDENT_TECHNOLOGY.

//! @brief Get value of GPU2D_AQIDENT_TECHNOLOGY from a register value.
#define BG_GPU2D_AQIDENT_TECHNOLOGY(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_GPU2D_AQIDENT_TECHNOLOGY) >> BP_GPU2D_AQIDENT_TECHNOLOGY)

/* --- Register HW_GPU2D_AQIDENT, field REVISION[15:12] (RO)
 *
 * Revision value.
 */

#define BP_GPU2D_AQIDENT_REVISION      (12)      //!< Bit position for GPU2D_AQIDENT_REVISION.
#define BM_GPU2D_AQIDENT_REVISION      (0x0000f000)  //!< Bit mask for GPU2D_AQIDENT_REVISION.

//! @brief Get value of GPU2D_AQIDENT_REVISION from a register value.
#define BG_GPU2D_AQIDENT_REVISION(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_GPU2D_AQIDENT_REVISION) >> BP_GPU2D_AQIDENT_REVISION)

/* --- Register HW_GPU2D_AQIDENT, field PRODUCT[23:16] (RO)
 *
 * Product value.
 */

#define BP_GPU2D_AQIDENT_PRODUCT      (16)      //!< Bit position for GPU2D_AQIDENT_PRODUCT.
#define BM_GPU2D_AQIDENT_PRODUCT      (0x00ff0000)  //!< Bit mask for GPU2D_AQIDENT_PRODUCT.

//! @brief Get value of GPU2D_AQIDENT_PRODUCT from a register value.
#define BG_GPU2D_AQIDENT_PRODUCT(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_GPU2D_AQIDENT_PRODUCT) >> BP_GPU2D_AQIDENT_PRODUCT)

/* --- Register HW_GPU2D_AQIDENT, field FAMILY[31:24] (RO)
 *
 * Family value.
 *
 * Values:
 * 01 - GC500
 * 02 - GC520
 * 03 - GC530
 * 04 - GC400
 * 05 - GC450
 * 08 - GC600
 * 09 - GC700
 * 0A - GC350
 * 10 - GC1000
 * 0B - GC380
 * 0C - GC800
 * 14 - GC2000
 */

#define BP_GPU2D_AQIDENT_FAMILY      (24)      //!< Bit position for GPU2D_AQIDENT_FAMILY.
#define BM_GPU2D_AQIDENT_FAMILY      (0xff000000)  //!< Bit mask for GPU2D_AQIDENT_FAMILY.

//! @brief Get value of GPU2D_AQIDENT_FAMILY from a register value.
#define BG_GPU2D_AQIDENT_FAMILY(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_GPU2D_AQIDENT_FAMILY) >> BP_GPU2D_AQIDENT_FAMILY)


//-------------------------------------------------------------------------------------------
// HW_GPU2D_FEATURES - Features Register
//-------------------------------------------------------------------------------------------

#ifndef __LANGUAGE_ASM__
/*!
 * @brief HW_GPU2D_FEATURES - Features Register (RO)
 *
 * Reset value: 0x00000000
 *
 * Shows which features are enabled in this chip. This register has no set reset value. It varies
 * with the implementation.
 */
typedef union _hw_gpu2d_features
{
    reg32_t U;
    struct _hw_gpu2d_features_bitfields
    {
        unsigned FE20_BIT_INDEX : 1; //!< [0] Supports 20 bit index.
        unsigned RS_YUV_TARGET : 1; //!< [1] Supports resolving into YUV target.
        unsigned BYTE_WRITE_3D : 1; //!< [2] 3D PE has byte write capability.
        unsigned FE20 : 1; //!< [3] FE 2.0 is present.
        unsigned VGTS : 1; //!< [4] VG tessellator is present.
        unsigned PIPE_VG : 1; //!< [5] VG pipe is present.
        unsigned MEM32_BIT_SUPPORT : 1; //!< [6] 32 bit memory address support.
        unsigned YUY2_RENDER_TARGET : 1; //!< [7] YUY2 support in PE and YUY2 to RGB conversion in resolve.
        unsigned HALF_TX_CACHE : 1; //!< [8] TX cache is half.
        unsigned HALF_PE_CACHE : 1; //!< [9] PE cache is half.
        unsigned YUY2_AVERAGING : 1; //!< [10] YUY2 averaging support in resolve.
        unsigned NO_SCALER : 1; //!< [11] IP does not have 2D scaler.
        unsigned BYTE_WRITE_2D : 1; //!< [12] Supports byte write in 2D.
        unsigned BUFFER_INTERLEAVING : 1; //!< [13] IP supports interleaving depth and color buffers.
        unsigned NO422_TEXTURE : 1; //!< [14] IP does not have 422 texture input format.
        unsigned NO_EZ : 1; //!< [15] IP does not have early-Z.
        unsigned MIN_AREA : 1; //!< [16] IP is configured to have minimum area.
        unsigned MODULE_CG : 1; //!< [17] Second level clock gating is available.
        unsigned YUV420_TILER : 1; //!< [18] YUV 4:2:0 tiler is available.
        unsigned HIGH_DYNAMIC_RANGE : 1; //!< [19] Shows if the IP has HDR support.
        unsigned FAST_SCALER : 1; //!< [20] Shows if the IP has HD scaler.
        unsigned ETC1_TEXTURE_COMPRESSION : 1; //!< [21] ETC1 texture compression.
        unsigned PIPE_2D : 1; //!< [22] Shows if there is 2D engine.
        unsigned DC : 1; //!< [23] Shows if there is a display controller in the IP.
        unsigned MSAA : 1; //!< [24] MSAA support.
        unsigned YUV420_FILTER : 1; //!< [25] YUV 4:2:0 support in filter blit.
        unsigned ZCOMPRESSION : 1; //!< [26] Depth and color compression.
        unsigned DEBUG_MODE : 1; //!< [27] Debug registers.
        unsigned DXT_TEXTURE_COMPRESSION : 1; //!< [28] DXT texture compression.
        unsigned PIPE_3D : 1; //!< [29] 3D pipe.
        unsigned SPECIAL_ANTI_ALIASING : 1; //!< [30] Full-screen anti-aliasing.
        unsigned FAST_CLEAR : 1; //!< [31] Fast clear.
    } B;
} hw_gpu2d_features_t;
#endif

/*
 * constants & macros for entire GPU2D_FEATURES register
 */
#define HW_GPU2D_FEATURES_ADDR      (REGS_GPU2D_BASE + 0x1c)

#ifndef __LANGUAGE_ASM__
#define HW_GPU2D_FEATURES           (*(volatile hw_gpu2d_features_t *) HW_GPU2D_FEATURES_ADDR)
#define HW_GPU2D_FEATURES_RD()      (HW_GPU2D_FEATURES.U)
#endif

/*
 * constants & macros for individual GPU2D_FEATURES bitfields
 */

/* --- Register HW_GPU2D_FEATURES, field FE20_BIT_INDEX[0] (RO)
 *
 * Supports 20 bit index.
 *
 * Values:
 * 0 - NONE
 * 1 - AVAILABLE
 */

#define BP_GPU2D_FEATURES_FE20_BIT_INDEX      (0)      //!< Bit position for GPU2D_FEATURES_FE20_BIT_INDEX.
#define BM_GPU2D_FEATURES_FE20_BIT_INDEX      (0x00000001)  //!< Bit mask for GPU2D_FEATURES_FE20_BIT_INDEX.

//! @brief Get value of GPU2D_FEATURES_FE20_BIT_INDEX from a register value.
#define BG_GPU2D_FEATURES_FE20_BIT_INDEX(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_GPU2D_FEATURES_FE20_BIT_INDEX) >> BP_GPU2D_FEATURES_FE20_BIT_INDEX)


/* --- Register HW_GPU2D_FEATURES, field RS_YUV_TARGET[1] (RO)
 *
 * Supports resolving into YUV target.
 *
 * Values:
 * 0 - NONE
 * 1 - AVAILABLE
 */

#define BP_GPU2D_FEATURES_RS_YUV_TARGET      (1)      //!< Bit position for GPU2D_FEATURES_RS_YUV_TARGET.
#define BM_GPU2D_FEATURES_RS_YUV_TARGET      (0x00000002)  //!< Bit mask for GPU2D_FEATURES_RS_YUV_TARGET.

//! @brief Get value of GPU2D_FEATURES_RS_YUV_TARGET from a register value.
#define BG_GPU2D_FEATURES_RS_YUV_TARGET(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_GPU2D_FEATURES_RS_YUV_TARGET) >> BP_GPU2D_FEATURES_RS_YUV_TARGET)


/* --- Register HW_GPU2D_FEATURES, field BYTE_WRITE_3D[2] (RO)
 *
 * 3D PE has byte write capability.
 *
 * Values:
 * 0 - NONE
 * 1 - AVAILABLE
 */

#define BP_GPU2D_FEATURES_BYTE_WRITE_3D      (2)      //!< Bit position for GPU2D_FEATURES_BYTE_WRITE_3D.
#define BM_GPU2D_FEATURES_BYTE_WRITE_3D      (0x00000004)  //!< Bit mask for GPU2D_FEATURES_BYTE_WRITE_3D.

//! @brief Get value of GPU2D_FEATURES_BYTE_WRITE_3D from a register value.
#define BG_GPU2D_FEATURES_BYTE_WRITE_3D(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_GPU2D_FEATURES_BYTE_WRITE_3D) >> BP_GPU2D_FEATURES_BYTE_WRITE_3D)


/* --- Register HW_GPU2D_FEATURES, field FE20[3] (RO)
 *
 * FE 2.0 is present.
 *
 * Values:
 * 0 - NONE
 * 1 - AVAILABLE
 */

#define BP_GPU2D_FEATURES_FE20      (3)      //!< Bit position for GPU2D_FEATURES_FE20.
#define BM_GPU2D_FEATURES_FE20      (0x00000008)  //!< Bit mask for GPU2D_FEATURES_FE20.

//! @brief Get value of GPU2D_FEATURES_FE20 from a register value.
#define BG_GPU2D_FEATURES_FE20(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_GPU2D_FEATURES_FE20) >> BP_GPU2D_FEATURES_FE20)


/* --- Register HW_GPU2D_FEATURES, field VGTS[4] (RO)
 *
 * VG tessellator is present.
 *
 * Values:
 * 0 - NONE
 * 1 - AVAILABLE
 */

#define BP_GPU2D_FEATURES_VGTS      (4)      //!< Bit position for GPU2D_FEATURES_VGTS.
#define BM_GPU2D_FEATURES_VGTS      (0x00000010)  //!< Bit mask for GPU2D_FEATURES_VGTS.

//! @brief Get value of GPU2D_FEATURES_VGTS from a register value.
#define BG_GPU2D_FEATURES_VGTS(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_GPU2D_FEATURES_VGTS) >> BP_GPU2D_FEATURES_VGTS)


/* --- Register HW_GPU2D_FEATURES, field PIPE_VG[5] (RO)
 *
 * VG pipe is present.
 *
 * Values:
 * 0 - NONE
 * 1 - AVAILABLE
 */

#define BP_GPU2D_FEATURES_PIPE_VG      (5)      //!< Bit position for GPU2D_FEATURES_PIPE_VG.
#define BM_GPU2D_FEATURES_PIPE_VG      (0x00000020)  //!< Bit mask for GPU2D_FEATURES_PIPE_VG.

//! @brief Get value of GPU2D_FEATURES_PIPE_VG from a register value.
#define BG_GPU2D_FEATURES_PIPE_VG(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_GPU2D_FEATURES_PIPE_VG) >> BP_GPU2D_FEATURES_PIPE_VG)


/* --- Register HW_GPU2D_FEATURES, field MEM32_BIT_SUPPORT[6] (RO)
 *
 * 32 bit memory address support.
 *
 * Values:
 * 0 - NONE
 * 1 - AVAILABLE
 */

#define BP_GPU2D_FEATURES_MEM32_BIT_SUPPORT      (6)      //!< Bit position for GPU2D_FEATURES_MEM32_BIT_SUPPORT.
#define BM_GPU2D_FEATURES_MEM32_BIT_SUPPORT      (0x00000040)  //!< Bit mask for GPU2D_FEATURES_MEM32_BIT_SUPPORT.

//! @brief Get value of GPU2D_FEATURES_MEM32_BIT_SUPPORT from a register value.
#define BG_GPU2D_FEATURES_MEM32_BIT_SUPPORT(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_GPU2D_FEATURES_MEM32_BIT_SUPPORT) >> BP_GPU2D_FEATURES_MEM32_BIT_SUPPORT)


/* --- Register HW_GPU2D_FEATURES, field YUY2_RENDER_TARGET[7] (RO)
 *
 * YUY2 support in PE and YUY2 to RGB conversion in resolve.
 *
 * Values:
 * 0 - NONE
 * 1 - AVAILABLE
 */

#define BP_GPU2D_FEATURES_YUY2_RENDER_TARGET      (7)      //!< Bit position for GPU2D_FEATURES_YUY2_RENDER_TARGET.
#define BM_GPU2D_FEATURES_YUY2_RENDER_TARGET      (0x00000080)  //!< Bit mask for GPU2D_FEATURES_YUY2_RENDER_TARGET.

//! @brief Get value of GPU2D_FEATURES_YUY2_RENDER_TARGET from a register value.
#define BG_GPU2D_FEATURES_YUY2_RENDER_TARGET(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_GPU2D_FEATURES_YUY2_RENDER_TARGET) >> BP_GPU2D_FEATURES_YUY2_RENDER_TARGET)


/* --- Register HW_GPU2D_FEATURES, field HALF_TX_CACHE[8] (RO)
 *
 * TX cache is half.
 *
 * Values:
 * 0 - NONE
 * 1 - AVAILABLE
 */

#define BP_GPU2D_FEATURES_HALF_TX_CACHE      (8)      //!< Bit position for GPU2D_FEATURES_HALF_TX_CACHE.
#define BM_GPU2D_FEATURES_HALF_TX_CACHE      (0x00000100)  //!< Bit mask for GPU2D_FEATURES_HALF_TX_CACHE.

//! @brief Get value of GPU2D_FEATURES_HALF_TX_CACHE from a register value.
#define BG_GPU2D_FEATURES_HALF_TX_CACHE(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_GPU2D_FEATURES_HALF_TX_CACHE) >> BP_GPU2D_FEATURES_HALF_TX_CACHE)


/* --- Register HW_GPU2D_FEATURES, field HALF_PE_CACHE[9] (RO)
 *
 * PE cache is half.
 *
 * Values:
 * 0 - NONE
 * 1 - AVAILABLE
 */

#define BP_GPU2D_FEATURES_HALF_PE_CACHE      (9)      //!< Bit position for GPU2D_FEATURES_HALF_PE_CACHE.
#define BM_GPU2D_FEATURES_HALF_PE_CACHE      (0x00000200)  //!< Bit mask for GPU2D_FEATURES_HALF_PE_CACHE.

//! @brief Get value of GPU2D_FEATURES_HALF_PE_CACHE from a register value.
#define BG_GPU2D_FEATURES_HALF_PE_CACHE(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_GPU2D_FEATURES_HALF_PE_CACHE) >> BP_GPU2D_FEATURES_HALF_PE_CACHE)


/* --- Register HW_GPU2D_FEATURES, field YUY2_AVERAGING[10] (RO)
 *
 * YUY2 averaging support in resolve.
 *
 * Values:
 * 0 - NONE
 * 1 - AVAILABLE
 */

#define BP_GPU2D_FEATURES_YUY2_AVERAGING      (10)      //!< Bit position for GPU2D_FEATURES_YUY2_AVERAGING.
#define BM_GPU2D_FEATURES_YUY2_AVERAGING      (0x00000400)  //!< Bit mask for GPU2D_FEATURES_YUY2_AVERAGING.

//! @brief Get value of GPU2D_FEATURES_YUY2_AVERAGING from a register value.
#define BG_GPU2D_FEATURES_YUY2_AVERAGING(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_GPU2D_FEATURES_YUY2_AVERAGING) >> BP_GPU2D_FEATURES_YUY2_AVERAGING)


/* --- Register HW_GPU2D_FEATURES, field NO_SCALER[11] (RO)
 *
 * IP does not have 2D scaler.
 *
 * Values:
 * 0 - NONE
 * 1 - AVAILABLE
 */

#define BP_GPU2D_FEATURES_NO_SCALER      (11)      //!< Bit position for GPU2D_FEATURES_NO_SCALER.
#define BM_GPU2D_FEATURES_NO_SCALER      (0x00000800)  //!< Bit mask for GPU2D_FEATURES_NO_SCALER.

//! @brief Get value of GPU2D_FEATURES_NO_SCALER from a register value.
#define BG_GPU2D_FEATURES_NO_SCALER(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_GPU2D_FEATURES_NO_SCALER) >> BP_GPU2D_FEATURES_NO_SCALER)


/* --- Register HW_GPU2D_FEATURES, field BYTE_WRITE_2D[12] (RO)
 *
 * Supports byte write in 2D.
 *
 * Values:
 * 0 - NONE
 * 1 - AVAILABLE
 */

#define BP_GPU2D_FEATURES_BYTE_WRITE_2D      (12)      //!< Bit position for GPU2D_FEATURES_BYTE_WRITE_2D.
#define BM_GPU2D_FEATURES_BYTE_WRITE_2D      (0x00001000)  //!< Bit mask for GPU2D_FEATURES_BYTE_WRITE_2D.

//! @brief Get value of GPU2D_FEATURES_BYTE_WRITE_2D from a register value.
#define BG_GPU2D_FEATURES_BYTE_WRITE_2D(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_GPU2D_FEATURES_BYTE_WRITE_2D) >> BP_GPU2D_FEATURES_BYTE_WRITE_2D)


/* --- Register HW_GPU2D_FEATURES, field BUFFER_INTERLEAVING[13] (RO)
 *
 * IP supports interleaving depth and color buffers.
 *
 * Values:
 * 0 - NONE
 * 1 - AVAILABLE
 */

#define BP_GPU2D_FEATURES_BUFFER_INTERLEAVING      (13)      //!< Bit position for GPU2D_FEATURES_BUFFER_INTERLEAVING.
#define BM_GPU2D_FEATURES_BUFFER_INTERLEAVING      (0x00002000)  //!< Bit mask for GPU2D_FEATURES_BUFFER_INTERLEAVING.

//! @brief Get value of GPU2D_FEATURES_BUFFER_INTERLEAVING from a register value.
#define BG_GPU2D_FEATURES_BUFFER_INTERLEAVING(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_GPU2D_FEATURES_BUFFER_INTERLEAVING) >> BP_GPU2D_FEATURES_BUFFER_INTERLEAVING)


/* --- Register HW_GPU2D_FEATURES, field NO422_TEXTURE[14] (RO)
 *
 * IP does not have 422 texture input format.
 *
 * Values:
 * 0 - NONE
 * 1 - AVAILABLE
 */

#define BP_GPU2D_FEATURES_NO422_TEXTURE      (14)      //!< Bit position for GPU2D_FEATURES_NO422_TEXTURE.
#define BM_GPU2D_FEATURES_NO422_TEXTURE      (0x00004000)  //!< Bit mask for GPU2D_FEATURES_NO422_TEXTURE.

//! @brief Get value of GPU2D_FEATURES_NO422_TEXTURE from a register value.
#define BG_GPU2D_FEATURES_NO422_TEXTURE(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_GPU2D_FEATURES_NO422_TEXTURE) >> BP_GPU2D_FEATURES_NO422_TEXTURE)


/* --- Register HW_GPU2D_FEATURES, field NO_EZ[15] (RO)
 *
 * IP does not have early-Z.
 *
 * Values:
 * 0 - NONE
 * 1 - AVAILABLE
 */

#define BP_GPU2D_FEATURES_NO_EZ      (15)      //!< Bit position for GPU2D_FEATURES_NO_EZ.
#define BM_GPU2D_FEATURES_NO_EZ      (0x00008000)  //!< Bit mask for GPU2D_FEATURES_NO_EZ.

//! @brief Get value of GPU2D_FEATURES_NO_EZ from a register value.
#define BG_GPU2D_FEATURES_NO_EZ(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_GPU2D_FEATURES_NO_EZ) >> BP_GPU2D_FEATURES_NO_EZ)


/* --- Register HW_GPU2D_FEATURES, field MIN_AREA[16] (RO)
 *
 * IP is configured to have minimum area.
 *
 * Values:
 * 0 - NONE
 * 1 - AVAILABLE
 */

#define BP_GPU2D_FEATURES_MIN_AREA      (16)      //!< Bit position for GPU2D_FEATURES_MIN_AREA.
#define BM_GPU2D_FEATURES_MIN_AREA      (0x00010000)  //!< Bit mask for GPU2D_FEATURES_MIN_AREA.

//! @brief Get value of GPU2D_FEATURES_MIN_AREA from a register value.
#define BG_GPU2D_FEATURES_MIN_AREA(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_GPU2D_FEATURES_MIN_AREA) >> BP_GPU2D_FEATURES_MIN_AREA)


/* --- Register HW_GPU2D_FEATURES, field MODULE_CG[17] (RO)
 *
 * Second level clock gating is available.
 *
 * Values:
 * 0 - NONE
 * 1 - AVAILABLE
 */

#define BP_GPU2D_FEATURES_MODULE_CG      (17)      //!< Bit position for GPU2D_FEATURES_MODULE_CG.
#define BM_GPU2D_FEATURES_MODULE_CG      (0x00020000)  //!< Bit mask for GPU2D_FEATURES_MODULE_CG.

//! @brief Get value of GPU2D_FEATURES_MODULE_CG from a register value.
#define BG_GPU2D_FEATURES_MODULE_CG(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_GPU2D_FEATURES_MODULE_CG) >> BP_GPU2D_FEATURES_MODULE_CG)


/* --- Register HW_GPU2D_FEATURES, field YUV420_TILER[18] (RO)
 *
 * YUV 4:2:0 tiler is available.
 *
 * Values:
 * 0 - NONE
 * 1 - AVAILABLE
 */

#define BP_GPU2D_FEATURES_YUV420_TILER      (18)      //!< Bit position for GPU2D_FEATURES_YUV420_TILER.
#define BM_GPU2D_FEATURES_YUV420_TILER      (0x00040000)  //!< Bit mask for GPU2D_FEATURES_YUV420_TILER.

//! @brief Get value of GPU2D_FEATURES_YUV420_TILER from a register value.
#define BG_GPU2D_FEATURES_YUV420_TILER(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_GPU2D_FEATURES_YUV420_TILER) >> BP_GPU2D_FEATURES_YUV420_TILER)


/* --- Register HW_GPU2D_FEATURES, field HIGH_DYNAMIC_RANGE[19] (RO)
 *
 * Shows if the IP has HDR support.
 *
 * Values:
 * 0 - NONE
 * 1 - AVAILABLE
 */

#define BP_GPU2D_FEATURES_HIGH_DYNAMIC_RANGE      (19)      //!< Bit position for GPU2D_FEATURES_HIGH_DYNAMIC_RANGE.
#define BM_GPU2D_FEATURES_HIGH_DYNAMIC_RANGE      (0x00080000)  //!< Bit mask for GPU2D_FEATURES_HIGH_DYNAMIC_RANGE.

//! @brief Get value of GPU2D_FEATURES_HIGH_DYNAMIC_RANGE from a register value.
#define BG_GPU2D_FEATURES_HIGH_DYNAMIC_RANGE(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_GPU2D_FEATURES_HIGH_DYNAMIC_RANGE) >> BP_GPU2D_FEATURES_HIGH_DYNAMIC_RANGE)


/* --- Register HW_GPU2D_FEATURES, field FAST_SCALER[20] (RO)
 *
 * Shows if the IP has HD scaler.
 *
 * Values:
 * 0 - NONE
 * 1 - AVAILABLE
 */

#define BP_GPU2D_FEATURES_FAST_SCALER      (20)      //!< Bit position for GPU2D_FEATURES_FAST_SCALER.
#define BM_GPU2D_FEATURES_FAST_SCALER      (0x00100000)  //!< Bit mask for GPU2D_FEATURES_FAST_SCALER.

//! @brief Get value of GPU2D_FEATURES_FAST_SCALER from a register value.
#define BG_GPU2D_FEATURES_FAST_SCALER(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_GPU2D_FEATURES_FAST_SCALER) >> BP_GPU2D_FEATURES_FAST_SCALER)


/* --- Register HW_GPU2D_FEATURES, field ETC1_TEXTURE_COMPRESSION[21] (RO)
 *
 * ETC1 texture compression.
 *
 * Values:
 * 0 - NONE
 * 1 - AVAILABLE
 */

#define BP_GPU2D_FEATURES_ETC1_TEXTURE_COMPRESSION      (21)      //!< Bit position for GPU2D_FEATURES_ETC1_TEXTURE_COMPRESSION.
#define BM_GPU2D_FEATURES_ETC1_TEXTURE_COMPRESSION      (0x00200000)  //!< Bit mask for GPU2D_FEATURES_ETC1_TEXTURE_COMPRESSION.

//! @brief Get value of GPU2D_FEATURES_ETC1_TEXTURE_COMPRESSION from a register value.
#define BG_GPU2D_FEATURES_ETC1_TEXTURE_COMPRESSION(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_GPU2D_FEATURES_ETC1_TEXTURE_COMPRESSION) >> BP_GPU2D_FEATURES_ETC1_TEXTURE_COMPRESSION)


/* --- Register HW_GPU2D_FEATURES, field PIPE_2D[22] (RO)
 *
 * Shows if there is 2D engine.
 *
 * Values:
 * 0 - NONE
 * 1 - AVAILABLE
 */

#define BP_GPU2D_FEATURES_PIPE_2D      (22)      //!< Bit position for GPU2D_FEATURES_PIPE_2D.
#define BM_GPU2D_FEATURES_PIPE_2D      (0x00400000)  //!< Bit mask for GPU2D_FEATURES_PIPE_2D.

//! @brief Get value of GPU2D_FEATURES_PIPE_2D from a register value.
#define BG_GPU2D_FEATURES_PIPE_2D(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_GPU2D_FEATURES_PIPE_2D) >> BP_GPU2D_FEATURES_PIPE_2D)


/* --- Register HW_GPU2D_FEATURES, field DC[23] (RO)
 *
 * Shows if there is a display controller in the IP.
 *
 * Values:
 * 0 - NONE
 * 1 - AVAILABLE
 */

#define BP_GPU2D_FEATURES_DC      (23)      //!< Bit position for GPU2D_FEATURES_DC.
#define BM_GPU2D_FEATURES_DC      (0x00800000)  //!< Bit mask for GPU2D_FEATURES_DC.

//! @brief Get value of GPU2D_FEATURES_DC from a register value.
#define BG_GPU2D_FEATURES_DC(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_GPU2D_FEATURES_DC) >> BP_GPU2D_FEATURES_DC)


/* --- Register HW_GPU2D_FEATURES, field MSAA[24] (RO)
 *
 * MSAA support.
 *
 * Values:
 * 0 - NONE
 * 1 - AVAILABLE
 */

#define BP_GPU2D_FEATURES_MSAA      (24)      //!< Bit position for GPU2D_FEATURES_MSAA.
#define BM_GPU2D_FEATURES_MSAA      (0x01000000)  //!< Bit mask for GPU2D_FEATURES_MSAA.

//! @brief Get value of GPU2D_FEATURES_MSAA from a register value.
#define BG_GPU2D_FEATURES_MSAA(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_GPU2D_FEATURES_MSAA) >> BP_GPU2D_FEATURES_MSAA)


/* --- Register HW_GPU2D_FEATURES, field YUV420_FILTER[25] (RO)
 *
 * YUV 4:2:0 support in filter blit.
 *
 * Values:
 * 0 - NONE
 * 1 - AVAILABLE
 */

#define BP_GPU2D_FEATURES_YUV420_FILTER      (25)      //!< Bit position for GPU2D_FEATURES_YUV420_FILTER.
#define BM_GPU2D_FEATURES_YUV420_FILTER      (0x02000000)  //!< Bit mask for GPU2D_FEATURES_YUV420_FILTER.

//! @brief Get value of GPU2D_FEATURES_YUV420_FILTER from a register value.
#define BG_GPU2D_FEATURES_YUV420_FILTER(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_GPU2D_FEATURES_YUV420_FILTER) >> BP_GPU2D_FEATURES_YUV420_FILTER)


/* --- Register HW_GPU2D_FEATURES, field ZCOMPRESSION[26] (RO)
 *
 * Depth and color compression.
 *
 * Values:
 * 0 - NONE
 * 1 - AVAILABLE
 */

#define BP_GPU2D_FEATURES_ZCOMPRESSION      (26)      //!< Bit position for GPU2D_FEATURES_ZCOMPRESSION.
#define BM_GPU2D_FEATURES_ZCOMPRESSION      (0x04000000)  //!< Bit mask for GPU2D_FEATURES_ZCOMPRESSION.

//! @brief Get value of GPU2D_FEATURES_ZCOMPRESSION from a register value.
#define BG_GPU2D_FEATURES_ZCOMPRESSION(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_GPU2D_FEATURES_ZCOMPRESSION) >> BP_GPU2D_FEATURES_ZCOMPRESSION)


/* --- Register HW_GPU2D_FEATURES, field DEBUG_MODE[27] (RO)
 *
 * Debug registers.
 *
 * Values:
 * 0 - NONE
 * 1 - AVAILABLE
 */

#define BP_GPU2D_FEATURES_DEBUG_MODE      (27)      //!< Bit position for GPU2D_FEATURES_DEBUG_MODE.
#define BM_GPU2D_FEATURES_DEBUG_MODE      (0x08000000)  //!< Bit mask for GPU2D_FEATURES_DEBUG_MODE.

//! @brief Get value of GPU2D_FEATURES_DEBUG_MODE from a register value.
#define BG_GPU2D_FEATURES_DEBUG_MODE(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_GPU2D_FEATURES_DEBUG_MODE) >> BP_GPU2D_FEATURES_DEBUG_MODE)


/* --- Register HW_GPU2D_FEATURES, field DXT_TEXTURE_COMPRESSION[28] (RO)
 *
 * DXT texture compression.
 *
 * Values:
 * 0 - NONE
 * 1 - AVAILABLE
 */

#define BP_GPU2D_FEATURES_DXT_TEXTURE_COMPRESSION      (28)      //!< Bit position for GPU2D_FEATURES_DXT_TEXTURE_COMPRESSION.
#define BM_GPU2D_FEATURES_DXT_TEXTURE_COMPRESSION      (0x10000000)  //!< Bit mask for GPU2D_FEATURES_DXT_TEXTURE_COMPRESSION.

//! @brief Get value of GPU2D_FEATURES_DXT_TEXTURE_COMPRESSION from a register value.
#define BG_GPU2D_FEATURES_DXT_TEXTURE_COMPRESSION(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_GPU2D_FEATURES_DXT_TEXTURE_COMPRESSION) >> BP_GPU2D_FEATURES_DXT_TEXTURE_COMPRESSION)


/* --- Register HW_GPU2D_FEATURES, field PIPE_3D[29] (RO)
 *
 * 3D pipe.
 *
 * Values:
 * 0 - NONE
 * 1 - AVAILABLE
 */

#define BP_GPU2D_FEATURES_PIPE_3D      (29)      //!< Bit position for GPU2D_FEATURES_PIPE_3D.
#define BM_GPU2D_FEATURES_PIPE_3D      (0x20000000)  //!< Bit mask for GPU2D_FEATURES_PIPE_3D.

//! @brief Get value of GPU2D_FEATURES_PIPE_3D from a register value.
#define BG_GPU2D_FEATURES_PIPE_3D(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_GPU2D_FEATURES_PIPE_3D) >> BP_GPU2D_FEATURES_PIPE_3D)


/* --- Register HW_GPU2D_FEATURES, field SPECIAL_ANTI_ALIASING[30] (RO)
 *
 * Full-screen anti-aliasing.
 *
 * Values:
 * 0 - NONE
 * 1 - AVAILABLE
 */

#define BP_GPU2D_FEATURES_SPECIAL_ANTI_ALIASING      (30)      //!< Bit position for GPU2D_FEATURES_SPECIAL_ANTI_ALIASING.
#define BM_GPU2D_FEATURES_SPECIAL_ANTI_ALIASING      (0x40000000)  //!< Bit mask for GPU2D_FEATURES_SPECIAL_ANTI_ALIASING.

//! @brief Get value of GPU2D_FEATURES_SPECIAL_ANTI_ALIASING from a register value.
#define BG_GPU2D_FEATURES_SPECIAL_ANTI_ALIASING(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_GPU2D_FEATURES_SPECIAL_ANTI_ALIASING) >> BP_GPU2D_FEATURES_SPECIAL_ANTI_ALIASING)


/* --- Register HW_GPU2D_FEATURES, field FAST_CLEAR[31] (RO)
 *
 * Fast clear.
 *
 * Values:
 * 0 - NONE
 * 1 - AVAILABLE
 */

#define BP_GPU2D_FEATURES_FAST_CLEAR      (31)      //!< Bit position for GPU2D_FEATURES_FAST_CLEAR.
#define BM_GPU2D_FEATURES_FAST_CLEAR      (0x80000000)  //!< Bit mask for GPU2D_FEATURES_FAST_CLEAR.

//! @brief Get value of GPU2D_FEATURES_FAST_CLEAR from a register value.
#define BG_GPU2D_FEATURES_FAST_CLEAR(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_GPU2D_FEATURES_FAST_CLEAR) >> BP_GPU2D_FEATURES_FAST_CLEAR)


//-------------------------------------------------------------------------------------------
// HW_GPU2D_CHIPID - Chip Identification Register
//-------------------------------------------------------------------------------------------

#ifndef __LANGUAGE_ASM__
/*!
 * @brief HW_GPU2D_CHIPID - Chip Identification Register (RO)
 *
 * Reset value: 0x00000000
 *
 * Shows the ID for the chip in BCD. This register has no set reset value. It varies with the
 * implementation.
 */
typedef union _hw_gpu2d_chipid
{
    reg32_t U;
    struct _hw_gpu2d_chipid_bitfields
    {
        unsigned ID : 32; //!< [31:0] Id.
    } B;
} hw_gpu2d_chipid_t;
#endif

/*
 * constants & macros for entire GPU2D_CHIPID register
 */
#define HW_GPU2D_CHIPID_ADDR      (REGS_GPU2D_BASE + 0x20)

#ifndef __LANGUAGE_ASM__
#define HW_GPU2D_CHIPID           (*(volatile hw_gpu2d_chipid_t *) HW_GPU2D_CHIPID_ADDR)
#define HW_GPU2D_CHIPID_RD()      (HW_GPU2D_CHIPID.U)
#endif

/*
 * constants & macros for individual GPU2D_CHIPID bitfields
 */

/* --- Register HW_GPU2D_CHIPID, field ID[31:0] (RO)
 *
 * Id.
 */

#define BP_GPU2D_CHIPID_ID      (0)      //!< Bit position for GPU2D_CHIPID_ID.
#define BM_GPU2D_CHIPID_ID      (0xffffffff)  //!< Bit mask for GPU2D_CHIPID_ID.

//! @brief Get value of GPU2D_CHIPID_ID from a register value.
#define BG_GPU2D_CHIPID_ID(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_GPU2D_CHIPID_ID) >> BP_GPU2D_CHIPID_ID)

//-------------------------------------------------------------------------------------------
// HW_GPU2D_CHIPREV - Chip Revision Register
//-------------------------------------------------------------------------------------------

#ifndef __LANGUAGE_ASM__
/*!
 * @brief HW_GPU2D_CHIPREV - Chip Revision Register (RO)
 *
 * Reset value: 0x00000000
 *
 * Shows the revision for the chip in BCD. This register has no set reset value. It varies with the
 * implementation.
 */
typedef union _hw_gpu2d_chiprev
{
    reg32_t U;
    struct _hw_gpu2d_chiprev_bitfields
    {
        unsigned REV : 32; //!< [31:0] Revision.
    } B;
} hw_gpu2d_chiprev_t;
#endif

/*
 * constants & macros for entire GPU2D_CHIPREV register
 */
#define HW_GPU2D_CHIPREV_ADDR      (REGS_GPU2D_BASE + 0x24)

#ifndef __LANGUAGE_ASM__
#define HW_GPU2D_CHIPREV           (*(volatile hw_gpu2d_chiprev_t *) HW_GPU2D_CHIPREV_ADDR)
#define HW_GPU2D_CHIPREV_RD()      (HW_GPU2D_CHIPREV.U)
#endif

/*
 * constants & macros for individual GPU2D_CHIPREV bitfields
 */

/* --- Register HW_GPU2D_CHIPREV, field REV[31:0] (RO)
 *
 * Revision.
 */

#define BP_GPU2D_CHIPREV_REV      (0)      //!< Bit position for GPU2D_CHIPREV_REV.
#define BM_GPU2D_CHIPREV_REV      (0xffffffff)  //!< Bit mask for GPU2D_CHIPREV_REV.

//! @brief Get value of GPU2D_CHIPREV_REV from a register value.
#define BG_GPU2D_CHIPREV_REV(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_GPU2D_CHIPREV_REV) >> BP_GPU2D_CHIPREV_REV)

//-------------------------------------------------------------------------------------------
// HW_GPU2D_CHIPDATE - Chip Release Date Register
//-------------------------------------------------------------------------------------------

#ifndef __LANGUAGE_ASM__
/*!
 * @brief HW_GPU2D_CHIPDATE - Chip Release Date Register (RO)
 *
 * Reset value: 0x00000000
 *
 * Shows the release date for the IP. This register has no set reset value. It varies with the
 * implementation.
 */
typedef union _hw_gpu2d_chipdate
{
    reg32_t U;
    struct _hw_gpu2d_chipdate_bitfields
    {
        unsigned DATE : 32; //!< [31:0] Date.
    } B;
} hw_gpu2d_chipdate_t;
#endif

/*
 * constants & macros for entire GPU2D_CHIPDATE register
 */
#define HW_GPU2D_CHIPDATE_ADDR      (REGS_GPU2D_BASE + 0x28)

#ifndef __LANGUAGE_ASM__
#define HW_GPU2D_CHIPDATE           (*(volatile hw_gpu2d_chipdate_t *) HW_GPU2D_CHIPDATE_ADDR)
#define HW_GPU2D_CHIPDATE_RD()      (HW_GPU2D_CHIPDATE.U)
#endif

/*
 * constants & macros for individual GPU2D_CHIPDATE bitfields
 */

/* --- Register HW_GPU2D_CHIPDATE, field DATE[31:0] (RO)
 *
 * Date.
 */

#define BP_GPU2D_CHIPDATE_DATE      (0)      //!< Bit position for GPU2D_CHIPDATE_DATE.
#define BM_GPU2D_CHIPDATE_DATE      (0xffffffff)  //!< Bit mask for GPU2D_CHIPDATE_DATE.

//! @brief Get value of GPU2D_CHIPDATE_DATE from a register value.
#define BG_GPU2D_CHIPDATE_DATE(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_GPU2D_CHIPDATE_DATE) >> BP_GPU2D_CHIPDATE_DATE)

//-------------------------------------------------------------------------------------------
// HW_GPU2D_CHIPTIME - Chip Release Time Register
//-------------------------------------------------------------------------------------------

#ifndef __LANGUAGE_ASM__
/*!
 * @brief HW_GPU2D_CHIPTIME - Chip Release Time Register (RO)
 *
 * Reset value: 0x00000000
 *
 * Shows the release time for the IP. This register has no set reset value. It varies with the
 * implementation.
 */
typedef union _hw_gpu2d_chiptime
{
    reg32_t U;
    struct _hw_gpu2d_chiptime_bitfields
    {
        unsigned TIME : 32; //!< [31:0] Time.
    } B;
} hw_gpu2d_chiptime_t;
#endif

/*
 * constants & macros for entire GPU2D_CHIPTIME register
 */
#define HW_GPU2D_CHIPTIME_ADDR      (REGS_GPU2D_BASE + 0x2c)

#ifndef __LANGUAGE_ASM__
#define HW_GPU2D_CHIPTIME           (*(volatile hw_gpu2d_chiptime_t *) HW_GPU2D_CHIPTIME_ADDR)
#define HW_GPU2D_CHIPTIME_RD()      (HW_GPU2D_CHIPTIME.U)
#endif

/*
 * constants & macros for individual GPU2D_CHIPTIME bitfields
 */

/* --- Register HW_GPU2D_CHIPTIME, field TIME[31:0] (RO)
 *
 * Time.
 */

#define BP_GPU2D_CHIPTIME_TIME      (0)      //!< Bit position for GPU2D_CHIPTIME_TIME.
#define BM_GPU2D_CHIPTIME_TIME      (0xffffffff)  //!< Bit mask for GPU2D_CHIPTIME_TIME.

//! @brief Get value of GPU2D_CHIPTIME_TIME from a register value.
#define BG_GPU2D_CHIPTIME_TIME(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_GPU2D_CHIPTIME_TIME) >> BP_GPU2D_CHIPTIME_TIME)

//-------------------------------------------------------------------------------------------
// HW_GPU2D_CHIPCUSTOMER - Chip Customer Register
//-------------------------------------------------------------------------------------------

#ifndef __LANGUAGE_ASM__
/*!
 * @brief HW_GPU2D_CHIPCUSTOMER - Chip Customer Register (RO)
 *
 * Reset value: 0x00000000
 *
 * Shows the customer and group for the IP. This register has no set reset value. It varies with the
 * implementation.
 */
typedef union _hw_gpu2d_chipcustomer
{
    reg32_t U;
    struct _hw_gpu2d_chipcustomer_bitfields
    {
        unsigned GROUP : 16; //!< [15:0] Group.
        unsigned COMPANY : 16; //!< [31:16] Company.
    } B;
} hw_gpu2d_chipcustomer_t;
#endif

/*
 * constants & macros for entire GPU2D_CHIPCUSTOMER register
 */
#define HW_GPU2D_CHIPCUSTOMER_ADDR      (REGS_GPU2D_BASE + 0x30)

#ifndef __LANGUAGE_ASM__
#define HW_GPU2D_CHIPCUSTOMER           (*(volatile hw_gpu2d_chipcustomer_t *) HW_GPU2D_CHIPCUSTOMER_ADDR)
#define HW_GPU2D_CHIPCUSTOMER_RD()      (HW_GPU2D_CHIPCUSTOMER.U)
#endif

/*
 * constants & macros for individual GPU2D_CHIPCUSTOMER bitfields
 */

/* --- Register HW_GPU2D_CHIPCUSTOMER, field GROUP[15:0] (RO)
 *
 * Group.
 */

#define BP_GPU2D_CHIPCUSTOMER_GROUP      (0)      //!< Bit position for GPU2D_CHIPCUSTOMER_GROUP.
#define BM_GPU2D_CHIPCUSTOMER_GROUP      (0x0000ffff)  //!< Bit mask for GPU2D_CHIPCUSTOMER_GROUP.

//! @brief Get value of GPU2D_CHIPCUSTOMER_GROUP from a register value.
#define BG_GPU2D_CHIPCUSTOMER_GROUP(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_GPU2D_CHIPCUSTOMER_GROUP) >> BP_GPU2D_CHIPCUSTOMER_GROUP)

/* --- Register HW_GPU2D_CHIPCUSTOMER, field COMPANY[31:16] (RO)
 *
 * Company.
 */

#define BP_GPU2D_CHIPCUSTOMER_COMPANY      (16)      //!< Bit position for GPU2D_CHIPCUSTOMER_COMPANY.
#define BM_GPU2D_CHIPCUSTOMER_COMPANY      (0xffff0000)  //!< Bit mask for GPU2D_CHIPCUSTOMER_COMPANY.

//! @brief Get value of GPU2D_CHIPCUSTOMER_COMPANY from a register value.
#define BG_GPU2D_CHIPCUSTOMER_COMPANY(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_GPU2D_CHIPCUSTOMER_COMPANY) >> BP_GPU2D_CHIPCUSTOMER_COMPANY)

//-------------------------------------------------------------------------------------------
// HW_GPU2D_MINORFEATURES0 - Minor Features Register 0
//-------------------------------------------------------------------------------------------

#ifndef __LANGUAGE_ASM__
/*!
 * @brief HW_GPU2D_MINORFEATURES0 - Minor Features Register 0 (RO)
 *
 * Reset value: 0x00000000
 *
 * Shows which minor features are enabled in this chip. This register has no set reset value. It
 * varies with the implementation.
 */
typedef union _hw_gpu2d_minorfeatures0
{
    reg32_t U;
    struct _hw_gpu2d_minorfeatures0_bitfields
    {
        unsigned FLIP_Y : 1; //!< [0] Y flipping capability is added to resolve.
        unsigned DUAL_RETURN_BUS : 1; //!< [1] Dual Return Bus from HI to clients.
        unsigned ENDIANNESS_CONFIG : 1; //!< [2] Configurable endianness support.
        unsigned TEXTURE8_K : 1; //!< [3] Supports 8Kx8K textures.
        unsigned CORRECT_TEXTURE_CONVERTER : 1; //!< [4] Driver hack is not needed.
        unsigned SPECIAL_MSAA_LOD : 1; //!< [5] Special LOD calculation when MSAA is on.
        unsigned FAST_CLEAR_FLUSH : 1; //!< [6] Proper flush is done in fast clear cache.
        unsigned _2DPE20 : 1; //!< [7] 2D PE 2.0 is present.
        unsigned CORRECT_AUTO_DISABLE : 1; //!< [8] Auto disable in FC is correct.
        unsigned RENDER_8K : 1; //!< [9] Supports 8K render target.
        unsigned TILE_STATUS_2BITS : 1; //!< [10] 2 bits are used instead of 4 bits for tile status.
        unsigned SEPARATE_TILE_STATUS_WHEN_INTERLEAVED : 1; //!< [11] Use 2 separate tile status buffers in interleaved mode.
        unsigned SUPER_TILED_32X32 : 1; //!< [12] 32x32 super tile is available.
        unsigned VG_20 : 1; //!< [13] Major updates to VG pipe (TS buffer tiling.
        unsigned TS_EXTENDED_COMMANDS : 1; //!< [14] New commands added to the tessellator.
        unsigned COMPRESSION_FIFO_FIXED : 1; //!< [15] If this bit is not set, the FIFO counter should be set to 50.
        unsigned EXTRA_SHADER_INSTRUCTIONS0 : 1; //!< [16] Floor, ceil, and sign instructions are available.
        unsigned VG_FILTER : 1; //!< [17] VG filter is available.
        unsigned VG_21 : 1; //!< [18] Minor updates to VG pipe (Event generation from VG, TS, PE).
        unsigned SHADER_GETS_W : 1; //!< [19] W is sent to SH from RA.
        unsigned EXTRA_SHADER_INSTRUCTIONS1 : 1; //!< [20] Sqrt, sin, cos instructions are available.
        unsigned DEFAULT_REG0 : 1; //!< [21] Unavailable registers will return 0.
        unsigned MC_20 : 1; //!< [22] New style MC with separate paths for color and depth.
        unsigned SHADER_MSAA_SIDEBAND : 1; //!< [23] Put the MSAA data into sideband fifo.
        unsigned BUG_FIXES0 : 1; //!< [24] 
        unsigned VAA : 1; //!< [25] VAA is available or not.
        unsigned BYPASS_IN_MSAA : 1; //!< [26] Shader supports bypass mode when MSAA is enabled.
        unsigned HIERARCHICAL_Z : 1; //!< [27] Hierarchiccal Z is supported.
        unsigned NEW_TEXTURE : 1; //!< [28] New texture unit is available.
        unsigned A8_TARGET_SUPPORT : 1; //!< [29] 2D engine supports A8 target.
        unsigned CORRECT_STENCIL : 1; //!< [30] Correct stencil behavior in depth only.
        unsigned ENHANCE_VR : 1; //!< [31] Enhance VR and add a mode to walk 16 pixels in 16-bit mode in Vertical pass to improve $ hit rate when rotating 90/270.
    } B;
} hw_gpu2d_minorfeatures0_t;
#endif

/*
 * constants & macros for entire GPU2D_MINORFEATURES0 register
 */
#define HW_GPU2D_MINORFEATURES0_ADDR      (REGS_GPU2D_BASE + 0x34)

#ifndef __LANGUAGE_ASM__
#define HW_GPU2D_MINORFEATURES0           (*(volatile hw_gpu2d_minorfeatures0_t *) HW_GPU2D_MINORFEATURES0_ADDR)
#define HW_GPU2D_MINORFEATURES0_RD()      (HW_GPU2D_MINORFEATURES0.U)
#endif

/*
 * constants & macros for individual GPU2D_MINORFEATURES0 bitfields
 */

/* --- Register HW_GPU2D_MINORFEATURES0, field FLIP_Y[0] (RO)
 *
 * Y flipping capability is added to resolve.
 *
 * Values:
 * 0 - NONE
 * 1 - AVAILABLE
 */

#define BP_GPU2D_MINORFEATURES0_FLIP_Y      (0)      //!< Bit position for GPU2D_MINORFEATURES0_FLIP_Y.
#define BM_GPU2D_MINORFEATURES0_FLIP_Y      (0x00000001)  //!< Bit mask for GPU2D_MINORFEATURES0_FLIP_Y.

//! @brief Get value of GPU2D_MINORFEATURES0_FLIP_Y from a register value.
#define BG_GPU2D_MINORFEATURES0_FLIP_Y(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_GPU2D_MINORFEATURES0_FLIP_Y) >> BP_GPU2D_MINORFEATURES0_FLIP_Y)


/* --- Register HW_GPU2D_MINORFEATURES0, field DUAL_RETURN_BUS[1] (RO)
 *
 * Dual Return Bus from HI to clients.
 *
 * Values:
 * 0 - NONE
 * 1 - AVAILABLE
 */

#define BP_GPU2D_MINORFEATURES0_DUAL_RETURN_BUS      (1)      //!< Bit position for GPU2D_MINORFEATURES0_DUAL_RETURN_BUS.
#define BM_GPU2D_MINORFEATURES0_DUAL_RETURN_BUS      (0x00000002)  //!< Bit mask for GPU2D_MINORFEATURES0_DUAL_RETURN_BUS.

//! @brief Get value of GPU2D_MINORFEATURES0_DUAL_RETURN_BUS from a register value.
#define BG_GPU2D_MINORFEATURES0_DUAL_RETURN_BUS(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_GPU2D_MINORFEATURES0_DUAL_RETURN_BUS) >> BP_GPU2D_MINORFEATURES0_DUAL_RETURN_BUS)


/* --- Register HW_GPU2D_MINORFEATURES0, field ENDIANNESS_CONFIG[2] (RO)
 *
 * Configurable endianness support.
 *
 * Values:
 * 0 - NONE
 * 1 - AVAILABLE
 */

#define BP_GPU2D_MINORFEATURES0_ENDIANNESS_CONFIG      (2)      //!< Bit position for GPU2D_MINORFEATURES0_ENDIANNESS_CONFIG.
#define BM_GPU2D_MINORFEATURES0_ENDIANNESS_CONFIG      (0x00000004)  //!< Bit mask for GPU2D_MINORFEATURES0_ENDIANNESS_CONFIG.

//! @brief Get value of GPU2D_MINORFEATURES0_ENDIANNESS_CONFIG from a register value.
#define BG_GPU2D_MINORFEATURES0_ENDIANNESS_CONFIG(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_GPU2D_MINORFEATURES0_ENDIANNESS_CONFIG) >> BP_GPU2D_MINORFEATURES0_ENDIANNESS_CONFIG)


/* --- Register HW_GPU2D_MINORFEATURES0, field TEXTURE8_K[3] (RO)
 *
 * Supports 8Kx8K textures.
 *
 * Values:
 * 0 - NONE
 * 1 - AVAILABLE
 */

#define BP_GPU2D_MINORFEATURES0_TEXTURE8_K      (3)      //!< Bit position for GPU2D_MINORFEATURES0_TEXTURE8_K.
#define BM_GPU2D_MINORFEATURES0_TEXTURE8_K      (0x00000008)  //!< Bit mask for GPU2D_MINORFEATURES0_TEXTURE8_K.

//! @brief Get value of GPU2D_MINORFEATURES0_TEXTURE8_K from a register value.
#define BG_GPU2D_MINORFEATURES0_TEXTURE8_K(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_GPU2D_MINORFEATURES0_TEXTURE8_K) >> BP_GPU2D_MINORFEATURES0_TEXTURE8_K)


/* --- Register HW_GPU2D_MINORFEATURES0, field CORRECT_TEXTURE_CONVERTER[4] (RO)
 *
 * Driver hack is not needed.
 *
 * Values:
 * 0 - NONE
 * 1 - AVAILABLE
 */

#define BP_GPU2D_MINORFEATURES0_CORRECT_TEXTURE_CONVERTER      (4)      //!< Bit position for GPU2D_MINORFEATURES0_CORRECT_TEXTURE_CONVERTER.
#define BM_GPU2D_MINORFEATURES0_CORRECT_TEXTURE_CONVERTER      (0x00000010)  //!< Bit mask for GPU2D_MINORFEATURES0_CORRECT_TEXTURE_CONVERTER.

//! @brief Get value of GPU2D_MINORFEATURES0_CORRECT_TEXTURE_CONVERTER from a register value.
#define BG_GPU2D_MINORFEATURES0_CORRECT_TEXTURE_CONVERTER(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_GPU2D_MINORFEATURES0_CORRECT_TEXTURE_CONVERTER) >> BP_GPU2D_MINORFEATURES0_CORRECT_TEXTURE_CONVERTER)


/* --- Register HW_GPU2D_MINORFEATURES0, field SPECIAL_MSAA_LOD[5] (RO)
 *
 * Special LOD calculation when MSAA is on.
 *
 * Values:
 * 0 - NONE
 * 1 - AVAILABLE
 */

#define BP_GPU2D_MINORFEATURES0_SPECIAL_MSAA_LOD      (5)      //!< Bit position for GPU2D_MINORFEATURES0_SPECIAL_MSAA_LOD.
#define BM_GPU2D_MINORFEATURES0_SPECIAL_MSAA_LOD      (0x00000020)  //!< Bit mask for GPU2D_MINORFEATURES0_SPECIAL_MSAA_LOD.

//! @brief Get value of GPU2D_MINORFEATURES0_SPECIAL_MSAA_LOD from a register value.
#define BG_GPU2D_MINORFEATURES0_SPECIAL_MSAA_LOD(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_GPU2D_MINORFEATURES0_SPECIAL_MSAA_LOD) >> BP_GPU2D_MINORFEATURES0_SPECIAL_MSAA_LOD)


/* --- Register HW_GPU2D_MINORFEATURES0, field FAST_CLEAR_FLUSH[6] (RO)
 *
 * Proper flush is done in fast clear cache.
 *
 * Values:
 * 0 - NONE
 * 1 - AVAILABLE
 */

#define BP_GPU2D_MINORFEATURES0_FAST_CLEAR_FLUSH      (6)      //!< Bit position for GPU2D_MINORFEATURES0_FAST_CLEAR_FLUSH.
#define BM_GPU2D_MINORFEATURES0_FAST_CLEAR_FLUSH      (0x00000040)  //!< Bit mask for GPU2D_MINORFEATURES0_FAST_CLEAR_FLUSH.

//! @brief Get value of GPU2D_MINORFEATURES0_FAST_CLEAR_FLUSH from a register value.
#define BG_GPU2D_MINORFEATURES0_FAST_CLEAR_FLUSH(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_GPU2D_MINORFEATURES0_FAST_CLEAR_FLUSH) >> BP_GPU2D_MINORFEATURES0_FAST_CLEAR_FLUSH)


/* --- Register HW_GPU2D_MINORFEATURES0, field _2DPE20[7] (RO)
 *
 * 2D PE 2.0 is present.
 *
 * Values:
 * 0 - NONE
 * 1 - AVAILABLE
 */

#define BP_GPU2D_MINORFEATURES0__2DPE20      (7)      //!< Bit position for GPU2D_MINORFEATURES0__2DPE20.
#define BM_GPU2D_MINORFEATURES0__2DPE20      (0x00000080)  //!< Bit mask for GPU2D_MINORFEATURES0__2DPE20.

//! @brief Get value of GPU2D_MINORFEATURES0__2DPE20 from a register value.
#define BG_GPU2D_MINORFEATURES0__2DPE20(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_GPU2D_MINORFEATURES0__2DPE20) >> BP_GPU2D_MINORFEATURES0__2DPE20)


/* --- Register HW_GPU2D_MINORFEATURES0, field CORRECT_AUTO_DISABLE[8] (RO)
 *
 * Auto disable in FC is correct.
 *
 * Values:
 * 0 - NONE
 * 1 - AVAILABLE
 */

#define BP_GPU2D_MINORFEATURES0_CORRECT_AUTO_DISABLE      (8)      //!< Bit position for GPU2D_MINORFEATURES0_CORRECT_AUTO_DISABLE.
#define BM_GPU2D_MINORFEATURES0_CORRECT_AUTO_DISABLE      (0x00000100)  //!< Bit mask for GPU2D_MINORFEATURES0_CORRECT_AUTO_DISABLE.

//! @brief Get value of GPU2D_MINORFEATURES0_CORRECT_AUTO_DISABLE from a register value.
#define BG_GPU2D_MINORFEATURES0_CORRECT_AUTO_DISABLE(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_GPU2D_MINORFEATURES0_CORRECT_AUTO_DISABLE) >> BP_GPU2D_MINORFEATURES0_CORRECT_AUTO_DISABLE)


/* --- Register HW_GPU2D_MINORFEATURES0, field RENDER_8K[9] (RO)
 *
 * Supports 8K render target.
 *
 * Values:
 * 0 - NONE
 * 1 - AVAILABLE
 */

#define BP_GPU2D_MINORFEATURES0_RENDER_8K      (9)      //!< Bit position for GPU2D_MINORFEATURES0_RENDER_8K.
#define BM_GPU2D_MINORFEATURES0_RENDER_8K      (0x00000200)  //!< Bit mask for GPU2D_MINORFEATURES0_RENDER_8K.

//! @brief Get value of GPU2D_MINORFEATURES0_RENDER_8K from a register value.
#define BG_GPU2D_MINORFEATURES0_RENDER_8K(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_GPU2D_MINORFEATURES0_RENDER_8K) >> BP_GPU2D_MINORFEATURES0_RENDER_8K)


/* --- Register HW_GPU2D_MINORFEATURES0, field TILE_STATUS_2BITS[10] (RO)
 *
 * 2 bits are used instead of 4 bits for tile status.
 *
 * Values:
 * 0 - NONE
 * 1 - AVAILABLE
 */

#define BP_GPU2D_MINORFEATURES0_TILE_STATUS_2BITS      (10)      //!< Bit position for GPU2D_MINORFEATURES0_TILE_STATUS_2BITS.
#define BM_GPU2D_MINORFEATURES0_TILE_STATUS_2BITS      (0x00000400)  //!< Bit mask for GPU2D_MINORFEATURES0_TILE_STATUS_2BITS.

//! @brief Get value of GPU2D_MINORFEATURES0_TILE_STATUS_2BITS from a register value.
#define BG_GPU2D_MINORFEATURES0_TILE_STATUS_2BITS(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_GPU2D_MINORFEATURES0_TILE_STATUS_2BITS) >> BP_GPU2D_MINORFEATURES0_TILE_STATUS_2BITS)


/* --- Register HW_GPU2D_MINORFEATURES0, field SEPARATE_TILE_STATUS_WHEN_INTERLEAVED[11] (RO)
 *
 * Use 2 separate tile status buffers in interleaved mode.
 *
 * Values:
 * 0 - NONE
 * 1 - AVAILABLE
 */

#define BP_GPU2D_MINORFEATURES0_SEPARATE_TILE_STATUS_WHEN_INTERLEAVED      (11)      //!< Bit position for GPU2D_MINORFEATURES0_SEPARATE_TILE_STATUS_WHEN_INTERLEAVED.
#define BM_GPU2D_MINORFEATURES0_SEPARATE_TILE_STATUS_WHEN_INTERLEAVED      (0x00000800)  //!< Bit mask for GPU2D_MINORFEATURES0_SEPARATE_TILE_STATUS_WHEN_INTERLEAVED.

//! @brief Get value of GPU2D_MINORFEATURES0_SEPARATE_TILE_STATUS_WHEN_INTERLEAVED from a register value.
#define BG_GPU2D_MINORFEATURES0_SEPARATE_TILE_STATUS_WHEN_INTERLEAVED(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_GPU2D_MINORFEATURES0_SEPARATE_TILE_STATUS_WHEN_INTERLEAVED) >> BP_GPU2D_MINORFEATURES0_SEPARATE_TILE_STATUS_WHEN_INTERLEAVED)


/* --- Register HW_GPU2D_MINORFEATURES0, field SUPER_TILED_32X32[12] (RO)
 *
 * 32x32 super tile is available.
 *
 * Values:
 * 0 - NONE
 * 1 - AVAILABLE
 */

#define BP_GPU2D_MINORFEATURES0_SUPER_TILED_32X32      (12)      //!< Bit position for GPU2D_MINORFEATURES0_SUPER_TILED_32X32.
#define BM_GPU2D_MINORFEATURES0_SUPER_TILED_32X32      (0x00001000)  //!< Bit mask for GPU2D_MINORFEATURES0_SUPER_TILED_32X32.

//! @brief Get value of GPU2D_MINORFEATURES0_SUPER_TILED_32X32 from a register value.
#define BG_GPU2D_MINORFEATURES0_SUPER_TILED_32X32(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_GPU2D_MINORFEATURES0_SUPER_TILED_32X32) >> BP_GPU2D_MINORFEATURES0_SUPER_TILED_32X32)


/* --- Register HW_GPU2D_MINORFEATURES0, field VG_20[13] (RO)
 *
 * Major updates to VG pipe (TS buffer tiling. State masking.).
 *
 * Values:
 * 0 - NONE
 * 1 - AVAILABLE
 */

#define BP_GPU2D_MINORFEATURES0_VG_20      (13)      //!< Bit position for GPU2D_MINORFEATURES0_VG_20.
#define BM_GPU2D_MINORFEATURES0_VG_20      (0x00002000)  //!< Bit mask for GPU2D_MINORFEATURES0_VG_20.

//! @brief Get value of GPU2D_MINORFEATURES0_VG_20 from a register value.
#define BG_GPU2D_MINORFEATURES0_VG_20(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_GPU2D_MINORFEATURES0_VG_20) >> BP_GPU2D_MINORFEATURES0_VG_20)


/* --- Register HW_GPU2D_MINORFEATURES0, field TS_EXTENDED_COMMANDS[14] (RO)
 *
 * New commands added to the tessellator.
 *
 * Values:
 * 0 - NONE
 * 1 - AVAILABLE
 */

#define BP_GPU2D_MINORFEATURES0_TS_EXTENDED_COMMANDS      (14)      //!< Bit position for GPU2D_MINORFEATURES0_TS_EXTENDED_COMMANDS.
#define BM_GPU2D_MINORFEATURES0_TS_EXTENDED_COMMANDS      (0x00004000)  //!< Bit mask for GPU2D_MINORFEATURES0_TS_EXTENDED_COMMANDS.

//! @brief Get value of GPU2D_MINORFEATURES0_TS_EXTENDED_COMMANDS from a register value.
#define BG_GPU2D_MINORFEATURES0_TS_EXTENDED_COMMANDS(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_GPU2D_MINORFEATURES0_TS_EXTENDED_COMMANDS) >> BP_GPU2D_MINORFEATURES0_TS_EXTENDED_COMMANDS)


/* --- Register HW_GPU2D_MINORFEATURES0, field COMPRESSION_FIFO_FIXED[15] (RO)
 *
 * If this bit is not set, the FIFO counter should be set to 50. Else, the default should remain.
 *
 * Values:
 * 0 - NONE
 * 1 - AVAILABLE
 */

#define BP_GPU2D_MINORFEATURES0_COMPRESSION_FIFO_FIXED      (15)      //!< Bit position for GPU2D_MINORFEATURES0_COMPRESSION_FIFO_FIXED.
#define BM_GPU2D_MINORFEATURES0_COMPRESSION_FIFO_FIXED      (0x00008000)  //!< Bit mask for GPU2D_MINORFEATURES0_COMPRESSION_FIFO_FIXED.

//! @brief Get value of GPU2D_MINORFEATURES0_COMPRESSION_FIFO_FIXED from a register value.
#define BG_GPU2D_MINORFEATURES0_COMPRESSION_FIFO_FIXED(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_GPU2D_MINORFEATURES0_COMPRESSION_FIFO_FIXED) >> BP_GPU2D_MINORFEATURES0_COMPRESSION_FIFO_FIXED)


/* --- Register HW_GPU2D_MINORFEATURES0, field EXTRA_SHADER_INSTRUCTIONS0[16] (RO)
 *
 * Floor, ceil, and sign instructions are available.
 *
 * Values:
 * 0 - NONE
 * 1 - AVAILABLE
 */

#define BP_GPU2D_MINORFEATURES0_EXTRA_SHADER_INSTRUCTIONS0      (16)      //!< Bit position for GPU2D_MINORFEATURES0_EXTRA_SHADER_INSTRUCTIONS0.
#define BM_GPU2D_MINORFEATURES0_EXTRA_SHADER_INSTRUCTIONS0      (0x00010000)  //!< Bit mask for GPU2D_MINORFEATURES0_EXTRA_SHADER_INSTRUCTIONS0.

//! @brief Get value of GPU2D_MINORFEATURES0_EXTRA_SHADER_INSTRUCTIONS0 from a register value.
#define BG_GPU2D_MINORFEATURES0_EXTRA_SHADER_INSTRUCTIONS0(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_GPU2D_MINORFEATURES0_EXTRA_SHADER_INSTRUCTIONS0) >> BP_GPU2D_MINORFEATURES0_EXTRA_SHADER_INSTRUCTIONS0)


/* --- Register HW_GPU2D_MINORFEATURES0, field VG_FILTER[17] (RO)
 *
 * VG filter is available.
 *
 * Values:
 * 0 - NONE
 * 1 - AVAILABLE
 */

#define BP_GPU2D_MINORFEATURES0_VG_FILTER      (17)      //!< Bit position for GPU2D_MINORFEATURES0_VG_FILTER.
#define BM_GPU2D_MINORFEATURES0_VG_FILTER      (0x00020000)  //!< Bit mask for GPU2D_MINORFEATURES0_VG_FILTER.

//! @brief Get value of GPU2D_MINORFEATURES0_VG_FILTER from a register value.
#define BG_GPU2D_MINORFEATURES0_VG_FILTER(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_GPU2D_MINORFEATURES0_VG_FILTER) >> BP_GPU2D_MINORFEATURES0_VG_FILTER)


/* --- Register HW_GPU2D_MINORFEATURES0, field VG_21[18] (RO)
 *
 * Minor updates to VG pipe (Event generation from VG, TS, PE). Tiled image support.
 *
 * Values:
 * 0 - NONE
 * 1 - AVAILABLE
 */

#define BP_GPU2D_MINORFEATURES0_VG_21      (18)      //!< Bit position for GPU2D_MINORFEATURES0_VG_21.
#define BM_GPU2D_MINORFEATURES0_VG_21      (0x00040000)  //!< Bit mask for GPU2D_MINORFEATURES0_VG_21.

//! @brief Get value of GPU2D_MINORFEATURES0_VG_21 from a register value.
#define BG_GPU2D_MINORFEATURES0_VG_21(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_GPU2D_MINORFEATURES0_VG_21) >> BP_GPU2D_MINORFEATURES0_VG_21)


/* --- Register HW_GPU2D_MINORFEATURES0, field SHADER_GETS_W[19] (RO)
 *
 * W is sent to SH from RA.
 *
 * Values:
 * 0 - NONE
 * 1 - AVAILABLE
 */

#define BP_GPU2D_MINORFEATURES0_SHADER_GETS_W      (19)      //!< Bit position for GPU2D_MINORFEATURES0_SHADER_GETS_W.
#define BM_GPU2D_MINORFEATURES0_SHADER_GETS_W      (0x00080000)  //!< Bit mask for GPU2D_MINORFEATURES0_SHADER_GETS_W.

//! @brief Get value of GPU2D_MINORFEATURES0_SHADER_GETS_W from a register value.
#define BG_GPU2D_MINORFEATURES0_SHADER_GETS_W(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_GPU2D_MINORFEATURES0_SHADER_GETS_W) >> BP_GPU2D_MINORFEATURES0_SHADER_GETS_W)


/* --- Register HW_GPU2D_MINORFEATURES0, field EXTRA_SHADER_INSTRUCTIONS1[20] (RO)
 *
 * Sqrt, sin, cos instructions are available.
 *
 * Values:
 * 0 - NONE
 * 1 - AVAILABLE
 */

#define BP_GPU2D_MINORFEATURES0_EXTRA_SHADER_INSTRUCTIONS1      (20)      //!< Bit position for GPU2D_MINORFEATURES0_EXTRA_SHADER_INSTRUCTIONS1.
#define BM_GPU2D_MINORFEATURES0_EXTRA_SHADER_INSTRUCTIONS1      (0x00100000)  //!< Bit mask for GPU2D_MINORFEATURES0_EXTRA_SHADER_INSTRUCTIONS1.

//! @brief Get value of GPU2D_MINORFEATURES0_EXTRA_SHADER_INSTRUCTIONS1 from a register value.
#define BG_GPU2D_MINORFEATURES0_EXTRA_SHADER_INSTRUCTIONS1(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_GPU2D_MINORFEATURES0_EXTRA_SHADER_INSTRUCTIONS1) >> BP_GPU2D_MINORFEATURES0_EXTRA_SHADER_INSTRUCTIONS1)


/* --- Register HW_GPU2D_MINORFEATURES0, field DEFAULT_REG0[21] (RO)
 *
 * Unavailable registers will return 0.
 *
 * Values:
 * 0 - NONE
 * 1 - AVAILABLE
 */

#define BP_GPU2D_MINORFEATURES0_DEFAULT_REG0      (21)      //!< Bit position for GPU2D_MINORFEATURES0_DEFAULT_REG0.
#define BM_GPU2D_MINORFEATURES0_DEFAULT_REG0      (0x00200000)  //!< Bit mask for GPU2D_MINORFEATURES0_DEFAULT_REG0.

//! @brief Get value of GPU2D_MINORFEATURES0_DEFAULT_REG0 from a register value.
#define BG_GPU2D_MINORFEATURES0_DEFAULT_REG0(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_GPU2D_MINORFEATURES0_DEFAULT_REG0) >> BP_GPU2D_MINORFEATURES0_DEFAULT_REG0)


/* --- Register HW_GPU2D_MINORFEATURES0, field MC_20[22] (RO)
 *
 * New style MC with separate paths for color and depth.
 *
 * Values:
 * 0 - NONE
 * 1 - AVAILABLE
 */

#define BP_GPU2D_MINORFEATURES0_MC_20      (22)      //!< Bit position for GPU2D_MINORFEATURES0_MC_20.
#define BM_GPU2D_MINORFEATURES0_MC_20      (0x00400000)  //!< Bit mask for GPU2D_MINORFEATURES0_MC_20.

//! @brief Get value of GPU2D_MINORFEATURES0_MC_20 from a register value.
#define BG_GPU2D_MINORFEATURES0_MC_20(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_GPU2D_MINORFEATURES0_MC_20) >> BP_GPU2D_MINORFEATURES0_MC_20)


/* --- Register HW_GPU2D_MINORFEATURES0, field SHADER_MSAA_SIDEBAND[23] (RO)
 *
 * Put the MSAA data into sideband fifo.
 *
 * Values:
 * 0 - NONE
 * 1 - AVAILABLE
 */

#define BP_GPU2D_MINORFEATURES0_SHADER_MSAA_SIDEBAND      (23)      //!< Bit position for GPU2D_MINORFEATURES0_SHADER_MSAA_SIDEBAND.
#define BM_GPU2D_MINORFEATURES0_SHADER_MSAA_SIDEBAND      (0x00800000)  //!< Bit mask for GPU2D_MINORFEATURES0_SHADER_MSAA_SIDEBAND.

//! @brief Get value of GPU2D_MINORFEATURES0_SHADER_MSAA_SIDEBAND from a register value.
#define BG_GPU2D_MINORFEATURES0_SHADER_MSAA_SIDEBAND(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_GPU2D_MINORFEATURES0_SHADER_MSAA_SIDEBAND) >> BP_GPU2D_MINORFEATURES0_SHADER_MSAA_SIDEBAND)


/* --- Register HW_GPU2D_MINORFEATURES0, field BUG_FIXES0[24] (RO)
 *

 *
 * Values:
 * 0 - NONE
 * 1 - AVAILABLE
 */

#define BP_GPU2D_MINORFEATURES0_BUG_FIXES0      (24)      //!< Bit position for GPU2D_MINORFEATURES0_BUG_FIXES0.
#define BM_GPU2D_MINORFEATURES0_BUG_FIXES0      (0x01000000)  //!< Bit mask for GPU2D_MINORFEATURES0_BUG_FIXES0.

//! @brief Get value of GPU2D_MINORFEATURES0_BUG_FIXES0 from a register value.
#define BG_GPU2D_MINORFEATURES0_BUG_FIXES0(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_GPU2D_MINORFEATURES0_BUG_FIXES0) >> BP_GPU2D_MINORFEATURES0_BUG_FIXES0)


/* --- Register HW_GPU2D_MINORFEATURES0, field VAA[25] (RO)
 *
 * VAA is available or not.
 *
 * Values:
 * 0 - NONE
 * 1 - AVAILABLE
 */

#define BP_GPU2D_MINORFEATURES0_VAA      (25)      //!< Bit position for GPU2D_MINORFEATURES0_VAA.
#define BM_GPU2D_MINORFEATURES0_VAA      (0x02000000)  //!< Bit mask for GPU2D_MINORFEATURES0_VAA.

//! @brief Get value of GPU2D_MINORFEATURES0_VAA from a register value.
#define BG_GPU2D_MINORFEATURES0_VAA(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_GPU2D_MINORFEATURES0_VAA) >> BP_GPU2D_MINORFEATURES0_VAA)


/* --- Register HW_GPU2D_MINORFEATURES0, field BYPASS_IN_MSAA[26] (RO)
 *
 * Shader supports bypass mode when MSAA is enabled.
 *
 * Values:
 * 0 - NONE
 * 1 - AVAILABLE
 */

#define BP_GPU2D_MINORFEATURES0_BYPASS_IN_MSAA      (26)      //!< Bit position for GPU2D_MINORFEATURES0_BYPASS_IN_MSAA.
#define BM_GPU2D_MINORFEATURES0_BYPASS_IN_MSAA      (0x04000000)  //!< Bit mask for GPU2D_MINORFEATURES0_BYPASS_IN_MSAA.

//! @brief Get value of GPU2D_MINORFEATURES0_BYPASS_IN_MSAA from a register value.
#define BG_GPU2D_MINORFEATURES0_BYPASS_IN_MSAA(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_GPU2D_MINORFEATURES0_BYPASS_IN_MSAA) >> BP_GPU2D_MINORFEATURES0_BYPASS_IN_MSAA)


/* --- Register HW_GPU2D_MINORFEATURES0, field HIERARCHICAL_Z[27] (RO)
 *
 * Hierarchiccal Z is supported.
 *
 * Values:
 * 0 - NONE
 * 1 - AVAILABLE
 */

#define BP_GPU2D_MINORFEATURES0_HIERARCHICAL_Z      (27)      //!< Bit position for GPU2D_MINORFEATURES0_HIERARCHICAL_Z.
#define BM_GPU2D_MINORFEATURES0_HIERARCHICAL_Z      (0x08000000)  //!< Bit mask for GPU2D_MINORFEATURES0_HIERARCHICAL_Z.

//! @brief Get value of GPU2D_MINORFEATURES0_HIERARCHICAL_Z from a register value.
#define BG_GPU2D_MINORFEATURES0_HIERARCHICAL_Z(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_GPU2D_MINORFEATURES0_HIERARCHICAL_Z) >> BP_GPU2D_MINORFEATURES0_HIERARCHICAL_Z)


/* --- Register HW_GPU2D_MINORFEATURES0, field NEW_TEXTURE[28] (RO)
 *
 * New texture unit is available.
 *
 * Values:
 * 0 - NONE
 * 1 - AVAILABLE
 */

#define BP_GPU2D_MINORFEATURES0_NEW_TEXTURE      (28)      //!< Bit position for GPU2D_MINORFEATURES0_NEW_TEXTURE.
#define BM_GPU2D_MINORFEATURES0_NEW_TEXTURE      (0x10000000)  //!< Bit mask for GPU2D_MINORFEATURES0_NEW_TEXTURE.

//! @brief Get value of GPU2D_MINORFEATURES0_NEW_TEXTURE from a register value.
#define BG_GPU2D_MINORFEATURES0_NEW_TEXTURE(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_GPU2D_MINORFEATURES0_NEW_TEXTURE) >> BP_GPU2D_MINORFEATURES0_NEW_TEXTURE)


/* --- Register HW_GPU2D_MINORFEATURES0, field A8_TARGET_SUPPORT[29] (RO)
 *
 * 2D engine supports A8 target.
 *
 * Values:
 * 0 - NONE
 * 1 - AVAILABLE
 */

#define BP_GPU2D_MINORFEATURES0_A8_TARGET_SUPPORT      (29)      //!< Bit position for GPU2D_MINORFEATURES0_A8_TARGET_SUPPORT.
#define BM_GPU2D_MINORFEATURES0_A8_TARGET_SUPPORT      (0x20000000)  //!< Bit mask for GPU2D_MINORFEATURES0_A8_TARGET_SUPPORT.

//! @brief Get value of GPU2D_MINORFEATURES0_A8_TARGET_SUPPORT from a register value.
#define BG_GPU2D_MINORFEATURES0_A8_TARGET_SUPPORT(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_GPU2D_MINORFEATURES0_A8_TARGET_SUPPORT) >> BP_GPU2D_MINORFEATURES0_A8_TARGET_SUPPORT)


/* --- Register HW_GPU2D_MINORFEATURES0, field CORRECT_STENCIL[30] (RO)
 *
 * Correct stencil behavior in depth only.
 *
 * Values:
 * 0 - NONE
 * 1 - AVAILABLE
 */

#define BP_GPU2D_MINORFEATURES0_CORRECT_STENCIL      (30)      //!< Bit position for GPU2D_MINORFEATURES0_CORRECT_STENCIL.
#define BM_GPU2D_MINORFEATURES0_CORRECT_STENCIL      (0x40000000)  //!< Bit mask for GPU2D_MINORFEATURES0_CORRECT_STENCIL.

//! @brief Get value of GPU2D_MINORFEATURES0_CORRECT_STENCIL from a register value.
#define BG_GPU2D_MINORFEATURES0_CORRECT_STENCIL(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_GPU2D_MINORFEATURES0_CORRECT_STENCIL) >> BP_GPU2D_MINORFEATURES0_CORRECT_STENCIL)


/* --- Register HW_GPU2D_MINORFEATURES0, field ENHANCE_VR[31] (RO)
 *
 * Enhance VR and add a mode to walk 16 pixels in 16-bit mode in Vertical pass to improve $ hit rate
 * when rotating 90/270.
 *
 * Values:
 * 0 - NONE
 * 1 - AVAILABLE
 */

#define BP_GPU2D_MINORFEATURES0_ENHANCE_VR      (31)      //!< Bit position for GPU2D_MINORFEATURES0_ENHANCE_VR.
#define BM_GPU2D_MINORFEATURES0_ENHANCE_VR      (0x80000000)  //!< Bit mask for GPU2D_MINORFEATURES0_ENHANCE_VR.

//! @brief Get value of GPU2D_MINORFEATURES0_ENHANCE_VR from a register value.
#define BG_GPU2D_MINORFEATURES0_ENHANCE_VR(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_GPU2D_MINORFEATURES0_ENHANCE_VR) >> BP_GPU2D_MINORFEATURES0_ENHANCE_VR)


//-------------------------------------------------------------------------------------------
// HW_GPU2D_CACHECONTROL - Cache Control Register
//-------------------------------------------------------------------------------------------

#ifndef __LANGUAGE_ASM__
/*!
 * @brief HW_GPU2D_CACHECONTROL - Cache Control Register (RW)
 *
 * Reset value: 0x00000000
 *

 */
typedef union _hw_gpu2d_cachecontrol
{
    reg32_t U;
    struct _hw_gpu2d_cachecontrol_bitfields
    {
        unsigned NOT_USED : 32; //!< [31:0] Reserved
    } B;
} hw_gpu2d_cachecontrol_t;
#endif

/*
 * constants & macros for entire GPU2D_CACHECONTROL register
 */
#define HW_GPU2D_CACHECONTROL_ADDR      (REGS_GPU2D_BASE + 0x38)

#ifndef __LANGUAGE_ASM__
#define HW_GPU2D_CACHECONTROL           (*(volatile hw_gpu2d_cachecontrol_t *) HW_GPU2D_CACHECONTROL_ADDR)
#define HW_GPU2D_CACHECONTROL_RD()      (HW_GPU2D_CACHECONTROL.U)
#define HW_GPU2D_CACHECONTROL_WR(v)     (HW_GPU2D_CACHECONTROL.U = (v))
#define HW_GPU2D_CACHECONTROL_SET(v)    (HW_GPU2D_CACHECONTROL_WR(HW_GPU2D_CACHECONTROL_RD() |  (v)))
#define HW_GPU2D_CACHECONTROL_CLR(v)    (HW_GPU2D_CACHECONTROL_WR(HW_GPU2D_CACHECONTROL_RD() & ~(v)))
#define HW_GPU2D_CACHECONTROL_TOG(v)    (HW_GPU2D_CACHECONTROL_WR(HW_GPU2D_CACHECONTROL_RD() ^  (v)))
#endif

/*
 * constants & macros for individual GPU2D_CACHECONTROL bitfields
 */

/* --- Register HW_GPU2D_CACHECONTROL, field NOT_USED[31:0] (RW)
 *
 * Reserved
 */

#define BP_GPU2D_CACHECONTROL_NOT_USED      (0)      //!< Bit position for GPU2D_CACHECONTROL_NOT_USED.
#define BM_GPU2D_CACHECONTROL_NOT_USED      (0xffffffff)  //!< Bit mask for GPU2D_CACHECONTROL_NOT_USED.

//! @brief Get value of GPU2D_CACHECONTROL_NOT_USED from a register value.
#define BG_GPU2D_CACHECONTROL_NOT_USED(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_GPU2D_CACHECONTROL_NOT_USED) >> BP_GPU2D_CACHECONTROL_NOT_USED)

//! @brief Format value for bitfield GPU2D_CACHECONTROL_NOT_USED.
#define BF_GPU2D_CACHECONTROL_NOT_USED(v)   ((__REG_VALUE_TYPE((v), reg32_t) << BP_GPU2D_CACHECONTROL_NOT_USED) & BM_GPU2D_CACHECONTROL_NOT_USED)

#ifndef __LANGUAGE_ASM__
//! @brief Set the NOT_USED field to a new value.
#define BW_GPU2D_CACHECONTROL_NOT_USED(v)   (HW_GPU2D_CACHECONTROL_WR((HW_GPU2D_CACHECONTROL_RD() & ~BM_GPU2D_CACHECONTROL_NOT_USED) | BF_GPU2D_CACHECONTROL_NOT_USED(v)))
#endif

//-------------------------------------------------------------------------------------------
// HW_GPU2D_RESETMEMCOUNTERS - Reset Mem Counters Register
//-------------------------------------------------------------------------------------------

#ifndef __LANGUAGE_ASM__
/*!
 * @brief HW_GPU2D_RESETMEMCOUNTERS - Reset Mem Counters Register (WO)
 *
 * Reset value: 0x00000000
 *
 * Writing 1 will reset the counters and stop counting. Write 0 to start counting again. This
 * register is write only so it has no reset value.
 */
typedef union _hw_gpu2d_resetmemcounters
{
    reg32_t U;
    struct _hw_gpu2d_resetmemcounters_bitfields
    {
        unsigned RESET : 32; //!< [31:0] 
    } B;
} hw_gpu2d_resetmemcounters_t;
#endif

/*
 * constants & macros for entire GPU2D_RESETMEMCOUNTERS register
 */
#define HW_GPU2D_RESETMEMCOUNTERS_ADDR      (REGS_GPU2D_BASE + 0x3c)

#ifndef __LANGUAGE_ASM__
#define HW_GPU2D_RESETMEMCOUNTERS           (*(volatile hw_gpu2d_resetmemcounters_t *) HW_GPU2D_RESETMEMCOUNTERS_ADDR)
#define HW_GPU2D_RESETMEMCOUNTERS_WR(v)     (HW_GPU2D_RESETMEMCOUNTERS.U = (v))
#endif

/*
 * constants & macros for individual GPU2D_RESETMEMCOUNTERS bitfields
 */

/* --- Register HW_GPU2D_RESETMEMCOUNTERS, field RESET[31:0] (WO)
 *

 */

#define BP_GPU2D_RESETMEMCOUNTERS_RESET      (0)      //!< Bit position for GPU2D_RESETMEMCOUNTERS_RESET.
#define BM_GPU2D_RESETMEMCOUNTERS_RESET      (0xffffffff)  //!< Bit mask for GPU2D_RESETMEMCOUNTERS_RESET.

//! @brief Get value of GPU2D_RESETMEMCOUNTERS_RESET from a register value.
#define BG_GPU2D_RESETMEMCOUNTERS_RESET(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_GPU2D_RESETMEMCOUNTERS_RESET) >> BP_GPU2D_RESETMEMCOUNTERS_RESET)

//! @brief Format value for bitfield GPU2D_RESETMEMCOUNTERS_RESET.
#define BF_GPU2D_RESETMEMCOUNTERS_RESET(v)   ((__REG_VALUE_TYPE((v), reg32_t) << BP_GPU2D_RESETMEMCOUNTERS_RESET) & BM_GPU2D_RESETMEMCOUNTERS_RESET)

//-------------------------------------------------------------------------------------------
// HW_GPU2D_TOTALREADS - Read Count Register
//-------------------------------------------------------------------------------------------

#ifndef __LANGUAGE_ASM__
/*!
 * @brief HW_GPU2D_TOTALREADS - Read Count Register (RO)
 *
 * Reset value: 0x00000000
 *
 * Total reads in terms of 64bits.
 */
typedef union _hw_gpu2d_totalreads
{
    reg32_t U;
    struct _hw_gpu2d_totalreads_bitfields
    {
        unsigned COUNT : 32; //!< [31:0] 
    } B;
} hw_gpu2d_totalreads_t;
#endif

/*
 * constants & macros for entire GPU2D_TOTALREADS register
 */
#define HW_GPU2D_TOTALREADS_ADDR      (REGS_GPU2D_BASE + 0x40)

#ifndef __LANGUAGE_ASM__
#define HW_GPU2D_TOTALREADS           (*(volatile hw_gpu2d_totalreads_t *) HW_GPU2D_TOTALREADS_ADDR)
#define HW_GPU2D_TOTALREADS_RD()      (HW_GPU2D_TOTALREADS.U)
#endif

/*
 * constants & macros for individual GPU2D_TOTALREADS bitfields
 */

/* --- Register HW_GPU2D_TOTALREADS, field COUNT[31:0] (RO)
 *

 */

#define BP_GPU2D_TOTALREADS_COUNT      (0)      //!< Bit position for GPU2D_TOTALREADS_COUNT.
#define BM_GPU2D_TOTALREADS_COUNT      (0xffffffff)  //!< Bit mask for GPU2D_TOTALREADS_COUNT.

//! @brief Get value of GPU2D_TOTALREADS_COUNT from a register value.
#define BG_GPU2D_TOTALREADS_COUNT(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_GPU2D_TOTALREADS_COUNT) >> BP_GPU2D_TOTALREADS_COUNT)

//-------------------------------------------------------------------------------------------
// HW_GPU2D_TOTALWRITES - Write Count Register
//-------------------------------------------------------------------------------------------

#ifndef __LANGUAGE_ASM__
/*!
 * @brief HW_GPU2D_TOTALWRITES - Write Count Register (RO)
 *
 * Reset value: 0x00000000
 *
 * Total writes in terms of 64bits.
 */
typedef union _hw_gpu2d_totalwrites
{
    reg32_t U;
    struct _hw_gpu2d_totalwrites_bitfields
    {
        unsigned COUNT : 32; //!< [31:0] 
    } B;
} hw_gpu2d_totalwrites_t;
#endif

/*
 * constants & macros for entire GPU2D_TOTALWRITES register
 */
#define HW_GPU2D_TOTALWRITES_ADDR      (REGS_GPU2D_BASE + 0x44)

#ifndef __LANGUAGE_ASM__
#define HW_GPU2D_TOTALWRITES           (*(volatile hw_gpu2d_totalwrites_t *) HW_GPU2D_TOTALWRITES_ADDR)
#define HW_GPU2D_TOTALWRITES_RD()      (HW_GPU2D_TOTALWRITES.U)
#endif

/*
 * constants & macros for individual GPU2D_TOTALWRITES bitfields
 */

/* --- Register HW_GPU2D_TOTALWRITES, field COUNT[31:0] (RO)
 *

 */

#define BP_GPU2D_TOTALWRITES_COUNT      (0)      //!< Bit position for GPU2D_TOTALWRITES_COUNT.
#define BM_GPU2D_TOTALWRITES_COUNT      (0xffffffff)  //!< Bit mask for GPU2D_TOTALWRITES_COUNT.

//! @brief Get value of GPU2D_TOTALWRITES_COUNT from a register value.
#define BG_GPU2D_TOTALWRITES_COUNT(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_GPU2D_TOTALWRITES_COUNT) >> BP_GPU2D_TOTALWRITES_COUNT)

//-------------------------------------------------------------------------------------------
// HW_GPU2D_CHIPSPECS - Chip Specification Register
//-------------------------------------------------------------------------------------------

#ifndef __LANGUAGE_ASM__
/*!
 * @brief HW_GPU2D_CHIPSPECS - Chip Specification Register (RO)
 *
 * Reset value: 0x00000000
 *
 * Specs for the chip. This register has no set reset value. It varies with the implementation.
 */
typedef union _hw_gpu2d_chipspecs
{
    reg32_t U;
    struct _hw_gpu2d_chipspecs_bitfields
    {
        unsigned VERTEX_OUTPUT_BUFFER_SIZE : 4; //!< [3:0] Log2 of vertex output buffer size.
        unsigned NUM_PIXEL_PIPES : 3; //!< [6:4] Number of pixel pipes.
        unsigned NUM_SHADER_CORES : 5; //!< [11:7] Number of shader cores.
        unsigned RESERVED0 : 3; //!< [14:12] Reserved
        unsigned VERTEX_CACHE_SIZE : 5; //!< [19:15] Number of entries in the vertex shader cache.
        unsigned THREAD_COUNT : 4; //!< [23:20] Log2 of thread count.
        unsigned TEMP_REGISTERS : 4; //!< [27:24] Log2 of temporary registers.
        unsigned STREAMS : 4; //!< [31:28] Number of vertex streams.
    } B;
} hw_gpu2d_chipspecs_t;
#endif

/*
 * constants & macros for entire GPU2D_CHIPSPECS register
 */
#define HW_GPU2D_CHIPSPECS_ADDR      (REGS_GPU2D_BASE + 0x48)

#ifndef __LANGUAGE_ASM__
#define HW_GPU2D_CHIPSPECS           (*(volatile hw_gpu2d_chipspecs_t *) HW_GPU2D_CHIPSPECS_ADDR)
#define HW_GPU2D_CHIPSPECS_RD()      (HW_GPU2D_CHIPSPECS.U)
#endif

/*
 * constants & macros for individual GPU2D_CHIPSPECS bitfields
 */

/* --- Register HW_GPU2D_CHIPSPECS, field VERTEX_OUTPUT_BUFFER_SIZE[3:0] (RO)
 *
 * Log2 of vertex output buffer size.
 */

#define BP_GPU2D_CHIPSPECS_VERTEX_OUTPUT_BUFFER_SIZE      (0)      //!< Bit position for GPU2D_CHIPSPECS_VERTEX_OUTPUT_BUFFER_SIZE.
#define BM_GPU2D_CHIPSPECS_VERTEX_OUTPUT_BUFFER_SIZE      (0x0000000f)  //!< Bit mask for GPU2D_CHIPSPECS_VERTEX_OUTPUT_BUFFER_SIZE.

//! @brief Get value of GPU2D_CHIPSPECS_VERTEX_OUTPUT_BUFFER_SIZE from a register value.
#define BG_GPU2D_CHIPSPECS_VERTEX_OUTPUT_BUFFER_SIZE(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_GPU2D_CHIPSPECS_VERTEX_OUTPUT_BUFFER_SIZE) >> BP_GPU2D_CHIPSPECS_VERTEX_OUTPUT_BUFFER_SIZE)

/* --- Register HW_GPU2D_CHIPSPECS, field NUM_PIXEL_PIPES[6:4] (RO)
 *
 * Number of pixel pipes.
 */

#define BP_GPU2D_CHIPSPECS_NUM_PIXEL_PIPES      (4)      //!< Bit position for GPU2D_CHIPSPECS_NUM_PIXEL_PIPES.
#define BM_GPU2D_CHIPSPECS_NUM_PIXEL_PIPES      (0x00000070)  //!< Bit mask for GPU2D_CHIPSPECS_NUM_PIXEL_PIPES.

//! @brief Get value of GPU2D_CHIPSPECS_NUM_PIXEL_PIPES from a register value.
#define BG_GPU2D_CHIPSPECS_NUM_PIXEL_PIPES(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_GPU2D_CHIPSPECS_NUM_PIXEL_PIPES) >> BP_GPU2D_CHIPSPECS_NUM_PIXEL_PIPES)

/* --- Register HW_GPU2D_CHIPSPECS, field NUM_SHADER_CORES[11:7] (RO)
 *
 * Number of shader cores.
 */

#define BP_GPU2D_CHIPSPECS_NUM_SHADER_CORES      (7)      //!< Bit position for GPU2D_CHIPSPECS_NUM_SHADER_CORES.
#define BM_GPU2D_CHIPSPECS_NUM_SHADER_CORES      (0x00000f80)  //!< Bit mask for GPU2D_CHIPSPECS_NUM_SHADER_CORES.

//! @brief Get value of GPU2D_CHIPSPECS_NUM_SHADER_CORES from a register value.
#define BG_GPU2D_CHIPSPECS_NUM_SHADER_CORES(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_GPU2D_CHIPSPECS_NUM_SHADER_CORES) >> BP_GPU2D_CHIPSPECS_NUM_SHADER_CORES)

/* --- Register HW_GPU2D_CHIPSPECS, field VERTEX_CACHE_SIZE[19:15] (RO)
 *
 * Number of entries in the vertex shader cache.
 */

#define BP_GPU2D_CHIPSPECS_VERTEX_CACHE_SIZE      (15)      //!< Bit position for GPU2D_CHIPSPECS_VERTEX_CACHE_SIZE.
#define BM_GPU2D_CHIPSPECS_VERTEX_CACHE_SIZE      (0x000f8000)  //!< Bit mask for GPU2D_CHIPSPECS_VERTEX_CACHE_SIZE.

//! @brief Get value of GPU2D_CHIPSPECS_VERTEX_CACHE_SIZE from a register value.
#define BG_GPU2D_CHIPSPECS_VERTEX_CACHE_SIZE(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_GPU2D_CHIPSPECS_VERTEX_CACHE_SIZE) >> BP_GPU2D_CHIPSPECS_VERTEX_CACHE_SIZE)

/* --- Register HW_GPU2D_CHIPSPECS, field THREAD_COUNT[23:20] (RO)
 *
 * Log2 of thread count.
 */

#define BP_GPU2D_CHIPSPECS_THREAD_COUNT      (20)      //!< Bit position for GPU2D_CHIPSPECS_THREAD_COUNT.
#define BM_GPU2D_CHIPSPECS_THREAD_COUNT      (0x00f00000)  //!< Bit mask for GPU2D_CHIPSPECS_THREAD_COUNT.

//! @brief Get value of GPU2D_CHIPSPECS_THREAD_COUNT from a register value.
#define BG_GPU2D_CHIPSPECS_THREAD_COUNT(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_GPU2D_CHIPSPECS_THREAD_COUNT) >> BP_GPU2D_CHIPSPECS_THREAD_COUNT)

/* --- Register HW_GPU2D_CHIPSPECS, field TEMP_REGISTERS[27:24] (RO)
 *
 * Log2 of temporary registers.
 */

#define BP_GPU2D_CHIPSPECS_TEMP_REGISTERS      (24)      //!< Bit position for GPU2D_CHIPSPECS_TEMP_REGISTERS.
#define BM_GPU2D_CHIPSPECS_TEMP_REGISTERS      (0x0f000000)  //!< Bit mask for GPU2D_CHIPSPECS_TEMP_REGISTERS.

//! @brief Get value of GPU2D_CHIPSPECS_TEMP_REGISTERS from a register value.
#define BG_GPU2D_CHIPSPECS_TEMP_REGISTERS(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_GPU2D_CHIPSPECS_TEMP_REGISTERS) >> BP_GPU2D_CHIPSPECS_TEMP_REGISTERS)

/* --- Register HW_GPU2D_CHIPSPECS, field STREAMS[31:28] (RO)
 *
 * Number of vertex streams.
 */

#define BP_GPU2D_CHIPSPECS_STREAMS      (28)      //!< Bit position for GPU2D_CHIPSPECS_STREAMS.
#define BM_GPU2D_CHIPSPECS_STREAMS      (0xf0000000)  //!< Bit mask for GPU2D_CHIPSPECS_STREAMS.

//! @brief Get value of GPU2D_CHIPSPECS_STREAMS from a register value.
#define BG_GPU2D_CHIPSPECS_STREAMS(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_GPU2D_CHIPSPECS_STREAMS) >> BP_GPU2D_CHIPSPECS_STREAMS)

//-------------------------------------------------------------------------------------------
// HW_GPU2D_TOTALWRITEBURSTS - Write Data Count Register
//-------------------------------------------------------------------------------------------

#ifndef __LANGUAGE_ASM__
/*!
 * @brief HW_GPU2D_TOTALWRITEBURSTS - Write Data Count Register (RO)
 *
 * Reset value: 0x00000000
 *
 * Total write Data Count in terms of 64bits. This register has no reset value.
 */
typedef union _hw_gpu2d_totalwritebursts
{
    reg32_t U;
    struct _hw_gpu2d_totalwritebursts_bitfields
    {
        unsigned COUNT : 32; //!< [31:0] 
    } B;
} hw_gpu2d_totalwritebursts_t;
#endif

/*
 * constants & macros for entire GPU2D_TOTALWRITEBURSTS register
 */
#define HW_GPU2D_TOTALWRITEBURSTS_ADDR      (REGS_GPU2D_BASE + 0x4c)

#ifndef __LANGUAGE_ASM__
#define HW_GPU2D_TOTALWRITEBURSTS           (*(volatile hw_gpu2d_totalwritebursts_t *) HW_GPU2D_TOTALWRITEBURSTS_ADDR)
#define HW_GPU2D_TOTALWRITEBURSTS_RD()      (HW_GPU2D_TOTALWRITEBURSTS.U)
#endif

/*
 * constants & macros for individual GPU2D_TOTALWRITEBURSTS bitfields
 */

/* --- Register HW_GPU2D_TOTALWRITEBURSTS, field COUNT[31:0] (RO)
 *

 */

#define BP_GPU2D_TOTALWRITEBURSTS_COUNT      (0)      //!< Bit position for GPU2D_TOTALWRITEBURSTS_COUNT.
#define BM_GPU2D_TOTALWRITEBURSTS_COUNT      (0xffffffff)  //!< Bit mask for GPU2D_TOTALWRITEBURSTS_COUNT.

//! @brief Get value of GPU2D_TOTALWRITEBURSTS_COUNT from a register value.
#define BG_GPU2D_TOTALWRITEBURSTS_COUNT(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_GPU2D_TOTALWRITEBURSTS_COUNT) >> BP_GPU2D_TOTALWRITEBURSTS_COUNT)

//-------------------------------------------------------------------------------------------
// HW_GPU2D_TOTALWRITEREQS - Write REQ Count Register
//-------------------------------------------------------------------------------------------

#ifndef __LANGUAGE_ASM__
/*!
 * @brief HW_GPU2D_TOTALWRITEREQS - Write REQ Count Register (RO)
 *
 * Reset value: 0x00000000
 *
 * Total write Request Count. This register has no reset value.
 */
typedef union _hw_gpu2d_totalwritereqs
{
    reg32_t U;
    struct _hw_gpu2d_totalwritereqs_bitfields
    {
        unsigned COUNT : 32; //!< [31:0] 
    } B;
} hw_gpu2d_totalwritereqs_t;
#endif

/*
 * constants & macros for entire GPU2D_TOTALWRITEREQS register
 */
#define HW_GPU2D_TOTALWRITEREQS_ADDR      (REGS_GPU2D_BASE + 0x50)

#ifndef __LANGUAGE_ASM__
#define HW_GPU2D_TOTALWRITEREQS           (*(volatile hw_gpu2d_totalwritereqs_t *) HW_GPU2D_TOTALWRITEREQS_ADDR)
#define HW_GPU2D_TOTALWRITEREQS_RD()      (HW_GPU2D_TOTALWRITEREQS.U)
#endif

/*
 * constants & macros for individual GPU2D_TOTALWRITEREQS bitfields
 */

/* --- Register HW_GPU2D_TOTALWRITEREQS, field COUNT[31:0] (RO)
 *

 */

#define BP_GPU2D_TOTALWRITEREQS_COUNT      (0)      //!< Bit position for GPU2D_TOTALWRITEREQS_COUNT.
#define BM_GPU2D_TOTALWRITEREQS_COUNT      (0xffffffff)  //!< Bit mask for GPU2D_TOTALWRITEREQS_COUNT.

//! @brief Get value of GPU2D_TOTALWRITEREQS_COUNT from a register value.
#define BG_GPU2D_TOTALWRITEREQS_COUNT(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_GPU2D_TOTALWRITEREQS_COUNT) >> BP_GPU2D_TOTALWRITEREQS_COUNT)

//-------------------------------------------------------------------------------------------
// HW_GPU2D_TOTALWRITELASTS - Total WLAST Count Register
//-------------------------------------------------------------------------------------------

#ifndef __LANGUAGE_ASM__
/*!
 * @brief HW_GPU2D_TOTALWRITELASTS - Total WLAST Count Register (RO)
 *
 * Reset value: 0x00000000
 *
 * Total WLAST Count. This is used to match with GCTotalWriteReqs. This register has no reset value.
 */
typedef union _hw_gpu2d_totalwritelasts
{
    reg32_t U;
    struct _hw_gpu2d_totalwritelasts_bitfields
    {
        unsigned COUNT : 32; //!< [31:0] 
    } B;
} hw_gpu2d_totalwritelasts_t;
#endif

/*
 * constants & macros for entire GPU2D_TOTALWRITELASTS register
 */
#define HW_GPU2D_TOTALWRITELASTS_ADDR      (REGS_GPU2D_BASE + 0x54)

#ifndef __LANGUAGE_ASM__
#define HW_GPU2D_TOTALWRITELASTS           (*(volatile hw_gpu2d_totalwritelasts_t *) HW_GPU2D_TOTALWRITELASTS_ADDR)
#define HW_GPU2D_TOTALWRITELASTS_RD()      (HW_GPU2D_TOTALWRITELASTS.U)
#endif

/*
 * constants & macros for individual GPU2D_TOTALWRITELASTS bitfields
 */

/* --- Register HW_GPU2D_TOTALWRITELASTS, field COUNT[31:0] (RO)
 *

 */

#define BP_GPU2D_TOTALWRITELASTS_COUNT      (0)      //!< Bit position for GPU2D_TOTALWRITELASTS_COUNT.
#define BM_GPU2D_TOTALWRITELASTS_COUNT      (0xffffffff)  //!< Bit mask for GPU2D_TOTALWRITELASTS_COUNT.

//! @brief Get value of GPU2D_TOTALWRITELASTS_COUNT from a register value.
#define BG_GPU2D_TOTALWRITELASTS_COUNT(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_GPU2D_TOTALWRITELASTS_COUNT) >> BP_GPU2D_TOTALWRITELASTS_COUNT)

//-------------------------------------------------------------------------------------------
// HW_GPU2D_TOTALREADBURSTS - Total Read Data Count Register
//-------------------------------------------------------------------------------------------

#ifndef __LANGUAGE_ASM__
/*!
 * @brief HW_GPU2D_TOTALREADBURSTS - Total Read Data Count Register (RO)
 *
 * Reset value: 0x00000000
 *
 * Total Read Data Count in terms of 64bits. This register has no reset value.
 */
typedef union _hw_gpu2d_totalreadbursts
{
    reg32_t U;
    struct _hw_gpu2d_totalreadbursts_bitfields
    {
        unsigned COUNT : 32; //!< [31:0] 
    } B;
} hw_gpu2d_totalreadbursts_t;
#endif

/*
 * constants & macros for entire GPU2D_TOTALREADBURSTS register
 */
#define HW_GPU2D_TOTALREADBURSTS_ADDR      (REGS_GPU2D_BASE + 0x58)

#ifndef __LANGUAGE_ASM__
#define HW_GPU2D_TOTALREADBURSTS           (*(volatile hw_gpu2d_totalreadbursts_t *) HW_GPU2D_TOTALREADBURSTS_ADDR)
#define HW_GPU2D_TOTALREADBURSTS_RD()      (HW_GPU2D_TOTALREADBURSTS.U)
#endif

/*
 * constants & macros for individual GPU2D_TOTALREADBURSTS bitfields
 */

/* --- Register HW_GPU2D_TOTALREADBURSTS, field COUNT[31:0] (RO)
 *

 */

#define BP_GPU2D_TOTALREADBURSTS_COUNT      (0)      //!< Bit position for GPU2D_TOTALREADBURSTS_COUNT.
#define BM_GPU2D_TOTALREADBURSTS_COUNT      (0xffffffff)  //!< Bit mask for GPU2D_TOTALREADBURSTS_COUNT.

//! @brief Get value of GPU2D_TOTALREADBURSTS_COUNT from a register value.
#define BG_GPU2D_TOTALREADBURSTS_COUNT(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_GPU2D_TOTALREADBURSTS_COUNT) >> BP_GPU2D_TOTALREADBURSTS_COUNT)

//-------------------------------------------------------------------------------------------
// HW_GPU2D_TOTALREADREQS - Total Read REQ Count Register
//-------------------------------------------------------------------------------------------

#ifndef __LANGUAGE_ASM__
/*!
 * @brief HW_GPU2D_TOTALREADREQS - Total Read REQ Count Register (RO)
 *
 * Reset value: 0x00000000
 *
 * Total Read Request Count. This register has no reset value.
 */
typedef union _hw_gpu2d_totalreadreqs
{
    reg32_t U;
    struct _hw_gpu2d_totalreadreqs_bitfields
    {
        unsigned COUNT : 32; //!< [31:0] 
    } B;
} hw_gpu2d_totalreadreqs_t;
#endif

/*
 * constants & macros for entire GPU2D_TOTALREADREQS register
 */
#define HW_GPU2D_TOTALREADREQS_ADDR      (REGS_GPU2D_BASE + 0x5c)

#ifndef __LANGUAGE_ASM__
#define HW_GPU2D_TOTALREADREQS           (*(volatile hw_gpu2d_totalreadreqs_t *) HW_GPU2D_TOTALREADREQS_ADDR)
#define HW_GPU2D_TOTALREADREQS_RD()      (HW_GPU2D_TOTALREADREQS.U)
#endif

/*
 * constants & macros for individual GPU2D_TOTALREADREQS bitfields
 */

/* --- Register HW_GPU2D_TOTALREADREQS, field COUNT[31:0] (RO)
 *

 */

#define BP_GPU2D_TOTALREADREQS_COUNT      (0)      //!< Bit position for GPU2D_TOTALREADREQS_COUNT.
#define BM_GPU2D_TOTALREADREQS_COUNT      (0xffffffff)  //!< Bit mask for GPU2D_TOTALREADREQS_COUNT.

//! @brief Get value of GPU2D_TOTALREADREQS_COUNT from a register value.
#define BG_GPU2D_TOTALREADREQS_COUNT(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_GPU2D_TOTALREADREQS_COUNT) >> BP_GPU2D_TOTALREADREQS_COUNT)

//-------------------------------------------------------------------------------------------
// HW_GPU2D_TOTALREADLASTS - Total RLAST Count Register
//-------------------------------------------------------------------------------------------

#ifndef __LANGUAGE_ASM__
/*!
 * @brief HW_GPU2D_TOTALREADLASTS - Total RLAST Count Register (RO)
 *
 * Reset value: 0x00000000
 *
 * Total RLAST Count. This is used to match with GCTotalReadReqs. This register has no reset value.
 */
typedef union _hw_gpu2d_totalreadlasts
{
    reg32_t U;
    struct _hw_gpu2d_totalreadlasts_bitfields
    {
        unsigned COUNT : 32; //!< [31:0] 
    } B;
} hw_gpu2d_totalreadlasts_t;
#endif

/*
 * constants & macros for entire GPU2D_TOTALREADLASTS register
 */
#define HW_GPU2D_TOTALREADLASTS_ADDR      (REGS_GPU2D_BASE + 0x60)

#ifndef __LANGUAGE_ASM__
#define HW_GPU2D_TOTALREADLASTS           (*(volatile hw_gpu2d_totalreadlasts_t *) HW_GPU2D_TOTALREADLASTS_ADDR)
#define HW_GPU2D_TOTALREADLASTS_RD()      (HW_GPU2D_TOTALREADLASTS.U)
#endif

/*
 * constants & macros for individual GPU2D_TOTALREADLASTS bitfields
 */

/* --- Register HW_GPU2D_TOTALREADLASTS, field COUNT[31:0] (RO)
 *

 */

#define BP_GPU2D_TOTALREADLASTS_COUNT      (0)      //!< Bit position for GPU2D_TOTALREADLASTS_COUNT.
#define BM_GPU2D_TOTALREADLASTS_COUNT      (0xffffffff)  //!< Bit mask for GPU2D_TOTALREADLASTS_COUNT.

//! @brief Get value of GPU2D_TOTALREADLASTS_COUNT from a register value.
#define BG_GPU2D_TOTALREADLASTS_COUNT(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_GPU2D_TOTALREADLASTS_COUNT) >> BP_GPU2D_TOTALREADLASTS_COUNT)

//-------------------------------------------------------------------------------------------
// HW_GPU2D_GPOUT0 - General Purpose Register 0
//-------------------------------------------------------------------------------------------

#ifndef __LANGUAGE_ASM__
/*!
 * @brief HW_GPU2D_GPOUT0 - General Purpose Register 0 (RW)
 *
 * Reset value: 0x00000000
 *
 * General Purpose output register0. R/W but not connected to anywhere
 */
typedef union _hw_gpu2d_gpout0
{
    reg32_t U;
    struct _hw_gpu2d_gpout0_bitfields
    {
        unsigned COUNT : 32; //!< [31:0] 
    } B;
} hw_gpu2d_gpout0_t;
#endif

/*
 * constants & macros for entire GPU2D_GPOUT0 register
 */
#define HW_GPU2D_GPOUT0_ADDR      (REGS_GPU2D_BASE + 0x64)

#ifndef __LANGUAGE_ASM__
#define HW_GPU2D_GPOUT0           (*(volatile hw_gpu2d_gpout0_t *) HW_GPU2D_GPOUT0_ADDR)
#define HW_GPU2D_GPOUT0_RD()      (HW_GPU2D_GPOUT0.U)
#define HW_GPU2D_GPOUT0_WR(v)     (HW_GPU2D_GPOUT0.U = (v))
#define HW_GPU2D_GPOUT0_SET(v)    (HW_GPU2D_GPOUT0_WR(HW_GPU2D_GPOUT0_RD() |  (v)))
#define HW_GPU2D_GPOUT0_CLR(v)    (HW_GPU2D_GPOUT0_WR(HW_GPU2D_GPOUT0_RD() & ~(v)))
#define HW_GPU2D_GPOUT0_TOG(v)    (HW_GPU2D_GPOUT0_WR(HW_GPU2D_GPOUT0_RD() ^  (v)))
#endif

/*
 * constants & macros for individual GPU2D_GPOUT0 bitfields
 */

/* --- Register HW_GPU2D_GPOUT0, field COUNT[31:0] (RW)
 *

 */

#define BP_GPU2D_GPOUT0_COUNT      (0)      //!< Bit position for GPU2D_GPOUT0_COUNT.
#define BM_GPU2D_GPOUT0_COUNT      (0xffffffff)  //!< Bit mask for GPU2D_GPOUT0_COUNT.

//! @brief Get value of GPU2D_GPOUT0_COUNT from a register value.
#define BG_GPU2D_GPOUT0_COUNT(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_GPU2D_GPOUT0_COUNT) >> BP_GPU2D_GPOUT0_COUNT)

//! @brief Format value for bitfield GPU2D_GPOUT0_COUNT.
#define BF_GPU2D_GPOUT0_COUNT(v)   ((__REG_VALUE_TYPE((v), reg32_t) << BP_GPU2D_GPOUT0_COUNT) & BM_GPU2D_GPOUT0_COUNT)

#ifndef __LANGUAGE_ASM__
//! @brief Set the COUNT field to a new value.
#define BW_GPU2D_GPOUT0_COUNT(v)   (HW_GPU2D_GPOUT0_WR((HW_GPU2D_GPOUT0_RD() & ~BM_GPU2D_GPOUT0_COUNT) | BF_GPU2D_GPOUT0_COUNT(v)))
#endif

//-------------------------------------------------------------------------------------------
// HW_GPU2D_GPOUT1 - General Purpose Register 1
//-------------------------------------------------------------------------------------------

#ifndef __LANGUAGE_ASM__
/*!
 * @brief HW_GPU2D_GPOUT1 - General Purpose Register 1 (RW)
 *
 * Reset value: 0x00000000
 *
 * General Purpose output register1. R/W but not connected to anywhere
 */
typedef union _hw_gpu2d_gpout1
{
    reg32_t U;
    struct _hw_gpu2d_gpout1_bitfields
    {
        unsigned COUNT : 32; //!< [31:0] 
    } B;
} hw_gpu2d_gpout1_t;
#endif

/*
 * constants & macros for entire GPU2D_GPOUT1 register
 */
#define HW_GPU2D_GPOUT1_ADDR      (REGS_GPU2D_BASE + 0x68)

#ifndef __LANGUAGE_ASM__
#define HW_GPU2D_GPOUT1           (*(volatile hw_gpu2d_gpout1_t *) HW_GPU2D_GPOUT1_ADDR)
#define HW_GPU2D_GPOUT1_RD()      (HW_GPU2D_GPOUT1.U)
#define HW_GPU2D_GPOUT1_WR(v)     (HW_GPU2D_GPOUT1.U = (v))
#define HW_GPU2D_GPOUT1_SET(v)    (HW_GPU2D_GPOUT1_WR(HW_GPU2D_GPOUT1_RD() |  (v)))
#define HW_GPU2D_GPOUT1_CLR(v)    (HW_GPU2D_GPOUT1_WR(HW_GPU2D_GPOUT1_RD() & ~(v)))
#define HW_GPU2D_GPOUT1_TOG(v)    (HW_GPU2D_GPOUT1_WR(HW_GPU2D_GPOUT1_RD() ^  (v)))
#endif

/*
 * constants & macros for individual GPU2D_GPOUT1 bitfields
 */

/* --- Register HW_GPU2D_GPOUT1, field COUNT[31:0] (RW)
 *

 */

#define BP_GPU2D_GPOUT1_COUNT      (0)      //!< Bit position for GPU2D_GPOUT1_COUNT.
#define BM_GPU2D_GPOUT1_COUNT      (0xffffffff)  //!< Bit mask for GPU2D_GPOUT1_COUNT.

//! @brief Get value of GPU2D_GPOUT1_COUNT from a register value.
#define BG_GPU2D_GPOUT1_COUNT(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_GPU2D_GPOUT1_COUNT) >> BP_GPU2D_GPOUT1_COUNT)

//! @brief Format value for bitfield GPU2D_GPOUT1_COUNT.
#define BF_GPU2D_GPOUT1_COUNT(v)   ((__REG_VALUE_TYPE((v), reg32_t) << BP_GPU2D_GPOUT1_COUNT) & BM_GPU2D_GPOUT1_COUNT)

#ifndef __LANGUAGE_ASM__
//! @brief Set the COUNT field to a new value.
#define BW_GPU2D_GPOUT1_COUNT(v)   (HW_GPU2D_GPOUT1_WR((HW_GPU2D_GPOUT1_RD() & ~BM_GPU2D_GPOUT1_COUNT) | BF_GPU2D_GPOUT1_COUNT(v)))
#endif

//-------------------------------------------------------------------------------------------
// HW_GPU2D_GPOUT2 - General Purpose Register 2
//-------------------------------------------------------------------------------------------

#ifndef __LANGUAGE_ASM__
/*!
 * @brief HW_GPU2D_GPOUT2 - General Purpose Register 2 (RW)
 *
 * Reset value: 0x00000000
 *
 * General Purpose output register2. R/W but not connected to anywhere
 */
typedef union _hw_gpu2d_gpout2
{
    reg32_t U;
    struct _hw_gpu2d_gpout2_bitfields
    {
        unsigned COUNT : 32; //!< [31:0] 
    } B;
} hw_gpu2d_gpout2_t;
#endif

/*
 * constants & macros for entire GPU2D_GPOUT2 register
 */
#define HW_GPU2D_GPOUT2_ADDR      (REGS_GPU2D_BASE + 0x6c)

#ifndef __LANGUAGE_ASM__
#define HW_GPU2D_GPOUT2           (*(volatile hw_gpu2d_gpout2_t *) HW_GPU2D_GPOUT2_ADDR)
#define HW_GPU2D_GPOUT2_RD()      (HW_GPU2D_GPOUT2.U)
#define HW_GPU2D_GPOUT2_WR(v)     (HW_GPU2D_GPOUT2.U = (v))
#define HW_GPU2D_GPOUT2_SET(v)    (HW_GPU2D_GPOUT2_WR(HW_GPU2D_GPOUT2_RD() |  (v)))
#define HW_GPU2D_GPOUT2_CLR(v)    (HW_GPU2D_GPOUT2_WR(HW_GPU2D_GPOUT2_RD() & ~(v)))
#define HW_GPU2D_GPOUT2_TOG(v)    (HW_GPU2D_GPOUT2_WR(HW_GPU2D_GPOUT2_RD() ^  (v)))
#endif

/*
 * constants & macros for individual GPU2D_GPOUT2 bitfields
 */

/* --- Register HW_GPU2D_GPOUT2, field COUNT[31:0] (RW)
 *

 */

#define BP_GPU2D_GPOUT2_COUNT      (0)      //!< Bit position for GPU2D_GPOUT2_COUNT.
#define BM_GPU2D_GPOUT2_COUNT      (0xffffffff)  //!< Bit mask for GPU2D_GPOUT2_COUNT.

//! @brief Get value of GPU2D_GPOUT2_COUNT from a register value.
#define BG_GPU2D_GPOUT2_COUNT(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_GPU2D_GPOUT2_COUNT) >> BP_GPU2D_GPOUT2_COUNT)

//! @brief Format value for bitfield GPU2D_GPOUT2_COUNT.
#define BF_GPU2D_GPOUT2_COUNT(v)   ((__REG_VALUE_TYPE((v), reg32_t) << BP_GPU2D_GPOUT2_COUNT) & BM_GPU2D_GPOUT2_COUNT)

#ifndef __LANGUAGE_ASM__
//! @brief Set the COUNT field to a new value.
#define BW_GPU2D_GPOUT2_COUNT(v)   (HW_GPU2D_GPOUT2_WR((HW_GPU2D_GPOUT2_RD() & ~BM_GPU2D_GPOUT2_COUNT) | BF_GPU2D_GPOUT2_COUNT(v)))
#endif

//-------------------------------------------------------------------------------------------
// HW_GPU2D_AXICONTROL - AXI Control Register
//-------------------------------------------------------------------------------------------

#ifndef __LANGUAGE_ASM__
/*!
 * @brief HW_GPU2D_AXICONTROL - AXI Control Register (RW)
 *
 * Reset value: 0x00000000
 *
 * Special Handling on AXI Bus
 */
typedef union _hw_gpu2d_axicontrol
{
    reg32_t U;
    struct _hw_gpu2d_axicontrol_bitfields
    {
        unsigned WR_FULL_BURST_MODE : 32; //!< [31:0] 
    } B;
} hw_gpu2d_axicontrol_t;
#endif

/*
 * constants & macros for entire GPU2D_AXICONTROL register
 */
#define HW_GPU2D_AXICONTROL_ADDR      (REGS_GPU2D_BASE + 0x70)

#ifndef __LANGUAGE_ASM__
#define HW_GPU2D_AXICONTROL           (*(volatile hw_gpu2d_axicontrol_t *) HW_GPU2D_AXICONTROL_ADDR)
#define HW_GPU2D_AXICONTROL_RD()      (HW_GPU2D_AXICONTROL.U)
#define HW_GPU2D_AXICONTROL_WR(v)     (HW_GPU2D_AXICONTROL.U = (v))
#define HW_GPU2D_AXICONTROL_SET(v)    (HW_GPU2D_AXICONTROL_WR(HW_GPU2D_AXICONTROL_RD() |  (v)))
#define HW_GPU2D_AXICONTROL_CLR(v)    (HW_GPU2D_AXICONTROL_WR(HW_GPU2D_AXICONTROL_RD() & ~(v)))
#define HW_GPU2D_AXICONTROL_TOG(v)    (HW_GPU2D_AXICONTROL_WR(HW_GPU2D_AXICONTROL_RD() ^  (v)))
#endif

/*
 * constants & macros for individual GPU2D_AXICONTROL bitfields
 */

/* --- Register HW_GPU2D_AXICONTROL, field WR_FULL_BURST_MODE[31:0] (RW)
 *

 *
 * Values:
 * 0 - NO_BURST_RESET_VALUE
 * 1 - BURST_RESET_VALUE
 */

#define BP_GPU2D_AXICONTROL_WR_FULL_BURST_MODE      (0)      //!< Bit position for GPU2D_AXICONTROL_WR_FULL_BURST_MODE.
#define BM_GPU2D_AXICONTROL_WR_FULL_BURST_MODE      (0xffffffff)  //!< Bit mask for GPU2D_AXICONTROL_WR_FULL_BURST_MODE.

//! @brief Get value of GPU2D_AXICONTROL_WR_FULL_BURST_MODE from a register value.
#define BG_GPU2D_AXICONTROL_WR_FULL_BURST_MODE(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_GPU2D_AXICONTROL_WR_FULL_BURST_MODE) >> BP_GPU2D_AXICONTROL_WR_FULL_BURST_MODE)

//! @brief Format value for bitfield GPU2D_AXICONTROL_WR_FULL_BURST_MODE.
#define BF_GPU2D_AXICONTROL_WR_FULL_BURST_MODE(v)   ((__REG_VALUE_TYPE((v), reg32_t) << BP_GPU2D_AXICONTROL_WR_FULL_BURST_MODE) & BM_GPU2D_AXICONTROL_WR_FULL_BURST_MODE)

#ifndef __LANGUAGE_ASM__
//! @brief Set the WR_FULL_BURST_MODE field to a new value.
#define BW_GPU2D_AXICONTROL_WR_FULL_BURST_MODE(v)   (HW_GPU2D_AXICONTROL_WR((HW_GPU2D_AXICONTROL_RD() & ~BM_GPU2D_AXICONTROL_WR_FULL_BURST_MODE) | BF_GPU2D_AXICONTROL_WR_FULL_BURST_MODE(v)))
#endif


//-------------------------------------------------------------------------------------------
// HW_GPU2D_MINORFEATURES1 - Minor Features Register 1
//-------------------------------------------------------------------------------------------

#ifndef __LANGUAGE_ASM__
/*!
 * @brief HW_GPU2D_MINORFEATURES1 - Minor Features Register 1 (RO)
 *
 * Reset value: 0x00000000
 *
 * Shows which features are enabled in this chip. This register has no set reset value. It varies
 * with the implementation.
 */
typedef union _hw_gpu2d_minorfeatures1
{
    reg32_t U;
    struct _hw_gpu2d_minorfeatures1_bitfields
    {
        unsigned RESERVED0 : 26; //!< [25:0] Reserved
        unsigned TEXTURE_STRIDE : 1; //!< [26] Texture has stride and memory addressing.
        unsigned BUG_FIXES2 : 1; //!< [27] 
        unsigned BUG_FIXES1 : 1; //!< [28] 
        unsigned VG_DOUBLE_BUFFER : 1; //!< [29] Double buffering support for VG (second TS-->VG semaphore is present).
        unsigned V2_COMPRESSION : 1; //!< [30] V2 compression.
        unsigned RSUV_SWIZZLE : 1; //!< [31] Resolve UV swizzle.
    } B;
} hw_gpu2d_minorfeatures1_t;
#endif

/*
 * constants & macros for entire GPU2D_MINORFEATURES1 register
 */
#define HW_GPU2D_MINORFEATURES1_ADDR      (REGS_GPU2D_BASE + 0x74)

#ifndef __LANGUAGE_ASM__
#define HW_GPU2D_MINORFEATURES1           (*(volatile hw_gpu2d_minorfeatures1_t *) HW_GPU2D_MINORFEATURES1_ADDR)
#define HW_GPU2D_MINORFEATURES1_RD()      (HW_GPU2D_MINORFEATURES1.U)
#endif

/*
 * constants & macros for individual GPU2D_MINORFEATURES1 bitfields
 */

/* --- Register HW_GPU2D_MINORFEATURES1, field TEXTURE_STRIDE[26] (RO)
 *
 * Texture has stride and memory addressing.
 *
 * Values:
 * 0 - NONE
 * 1 - AVAILABLE
 */

#define BP_GPU2D_MINORFEATURES1_TEXTURE_STRIDE      (26)      //!< Bit position for GPU2D_MINORFEATURES1_TEXTURE_STRIDE.
#define BM_GPU2D_MINORFEATURES1_TEXTURE_STRIDE      (0x04000000)  //!< Bit mask for GPU2D_MINORFEATURES1_TEXTURE_STRIDE.

//! @brief Get value of GPU2D_MINORFEATURES1_TEXTURE_STRIDE from a register value.
#define BG_GPU2D_MINORFEATURES1_TEXTURE_STRIDE(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_GPU2D_MINORFEATURES1_TEXTURE_STRIDE) >> BP_GPU2D_MINORFEATURES1_TEXTURE_STRIDE)


/* --- Register HW_GPU2D_MINORFEATURES1, field BUG_FIXES2[27] (RO)
 *

 *
 * Values:
 * 0 - NONE
 * 1 - AVAILABLE
 */

#define BP_GPU2D_MINORFEATURES1_BUG_FIXES2      (27)      //!< Bit position for GPU2D_MINORFEATURES1_BUG_FIXES2.
#define BM_GPU2D_MINORFEATURES1_BUG_FIXES2      (0x08000000)  //!< Bit mask for GPU2D_MINORFEATURES1_BUG_FIXES2.

//! @brief Get value of GPU2D_MINORFEATURES1_BUG_FIXES2 from a register value.
#define BG_GPU2D_MINORFEATURES1_BUG_FIXES2(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_GPU2D_MINORFEATURES1_BUG_FIXES2) >> BP_GPU2D_MINORFEATURES1_BUG_FIXES2)


/* --- Register HW_GPU2D_MINORFEATURES1, field BUG_FIXES1[28] (RO)
 *

 *
 * Values:
 * 0 - NONE
 * 1 - AVAILABLE
 */

#define BP_GPU2D_MINORFEATURES1_BUG_FIXES1      (28)      //!< Bit position for GPU2D_MINORFEATURES1_BUG_FIXES1.
#define BM_GPU2D_MINORFEATURES1_BUG_FIXES1      (0x10000000)  //!< Bit mask for GPU2D_MINORFEATURES1_BUG_FIXES1.

//! @brief Get value of GPU2D_MINORFEATURES1_BUG_FIXES1 from a register value.
#define BG_GPU2D_MINORFEATURES1_BUG_FIXES1(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_GPU2D_MINORFEATURES1_BUG_FIXES1) >> BP_GPU2D_MINORFEATURES1_BUG_FIXES1)


/* --- Register HW_GPU2D_MINORFEATURES1, field VG_DOUBLE_BUFFER[29] (RO)
 *
 * Double buffering support for VG (second TS-->VG semaphore is present).
 *
 * Values:
 * 0 - NONE
 * 1 - AVAILABLE
 */

#define BP_GPU2D_MINORFEATURES1_VG_DOUBLE_BUFFER      (29)      //!< Bit position for GPU2D_MINORFEATURES1_VG_DOUBLE_BUFFER.
#define BM_GPU2D_MINORFEATURES1_VG_DOUBLE_BUFFER      (0x20000000)  //!< Bit mask for GPU2D_MINORFEATURES1_VG_DOUBLE_BUFFER.

//! @brief Get value of GPU2D_MINORFEATURES1_VG_DOUBLE_BUFFER from a register value.
#define BG_GPU2D_MINORFEATURES1_VG_DOUBLE_BUFFER(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_GPU2D_MINORFEATURES1_VG_DOUBLE_BUFFER) >> BP_GPU2D_MINORFEATURES1_VG_DOUBLE_BUFFER)


/* --- Register HW_GPU2D_MINORFEATURES1, field V2_COMPRESSION[30] (RO)
 *
 * V2 compression.
 *
 * Values:
 * 0 - NONE
 * 1 - AVAILABLE
 */

#define BP_GPU2D_MINORFEATURES1_V2_COMPRESSION      (30)      //!< Bit position for GPU2D_MINORFEATURES1_V2_COMPRESSION.
#define BM_GPU2D_MINORFEATURES1_V2_COMPRESSION      (0x40000000)  //!< Bit mask for GPU2D_MINORFEATURES1_V2_COMPRESSION.

//! @brief Get value of GPU2D_MINORFEATURES1_V2_COMPRESSION from a register value.
#define BG_GPU2D_MINORFEATURES1_V2_COMPRESSION(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_GPU2D_MINORFEATURES1_V2_COMPRESSION) >> BP_GPU2D_MINORFEATURES1_V2_COMPRESSION)


/* --- Register HW_GPU2D_MINORFEATURES1, field RSUV_SWIZZLE[31] (RO)
 *
 * Resolve UV swizzle.
 *
 * Values:
 * 0 - NONE
 * 1 - AVAILABLE
 */

#define BP_GPU2D_MINORFEATURES1_RSUV_SWIZZLE      (31)      //!< Bit position for GPU2D_MINORFEATURES1_RSUV_SWIZZLE.
#define BM_GPU2D_MINORFEATURES1_RSUV_SWIZZLE      (0x80000000)  //!< Bit mask for GPU2D_MINORFEATURES1_RSUV_SWIZZLE.

//! @brief Get value of GPU2D_MINORFEATURES1_RSUV_SWIZZLE from a register value.
#define BG_GPU2D_MINORFEATURES1_RSUV_SWIZZLE(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_GPU2D_MINORFEATURES1_RSUV_SWIZZLE) >> BP_GPU2D_MINORFEATURES1_RSUV_SWIZZLE)


//-------------------------------------------------------------------------------------------
// HW_GPU2D_TOTALCYCLES - Total Cycle Counter Register
//-------------------------------------------------------------------------------------------

#ifndef __LANGUAGE_ASM__
/*!
 * @brief HW_GPU2D_TOTALCYCLES - Total Cycle Counter Register (RW)
 *
 * Reset value: 0x00000000
 *
 * Total cycles. This register is a free running counter. It can be reset by writing 0 to it.
 */
typedef union _hw_gpu2d_totalcycles
{
    reg32_t U;
    struct _hw_gpu2d_totalcycles_bitfields
    {
        unsigned CYCLES : 32; //!< [31:0] 
    } B;
} hw_gpu2d_totalcycles_t;
#endif

/*
 * constants & macros for entire GPU2D_TOTALCYCLES register
 */
#define HW_GPU2D_TOTALCYCLES_ADDR      (REGS_GPU2D_BASE + 0x78)

#ifndef __LANGUAGE_ASM__
#define HW_GPU2D_TOTALCYCLES           (*(volatile hw_gpu2d_totalcycles_t *) HW_GPU2D_TOTALCYCLES_ADDR)
#define HW_GPU2D_TOTALCYCLES_RD()      (HW_GPU2D_TOTALCYCLES.U)
#define HW_GPU2D_TOTALCYCLES_WR(v)     (HW_GPU2D_TOTALCYCLES.U = (v))
#define HW_GPU2D_TOTALCYCLES_SET(v)    (HW_GPU2D_TOTALCYCLES_WR(HW_GPU2D_TOTALCYCLES_RD() |  (v)))
#define HW_GPU2D_TOTALCYCLES_CLR(v)    (HW_GPU2D_TOTALCYCLES_WR(HW_GPU2D_TOTALCYCLES_RD() & ~(v)))
#define HW_GPU2D_TOTALCYCLES_TOG(v)    (HW_GPU2D_TOTALCYCLES_WR(HW_GPU2D_TOTALCYCLES_RD() ^  (v)))
#endif

/*
 * constants & macros for individual GPU2D_TOTALCYCLES bitfields
 */

/* --- Register HW_GPU2D_TOTALCYCLES, field CYCLES[31:0] (RW)
 *

 */

#define BP_GPU2D_TOTALCYCLES_CYCLES      (0)      //!< Bit position for GPU2D_TOTALCYCLES_CYCLES.
#define BM_GPU2D_TOTALCYCLES_CYCLES      (0xffffffff)  //!< Bit mask for GPU2D_TOTALCYCLES_CYCLES.

//! @brief Get value of GPU2D_TOTALCYCLES_CYCLES from a register value.
#define BG_GPU2D_TOTALCYCLES_CYCLES(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_GPU2D_TOTALCYCLES_CYCLES) >> BP_GPU2D_TOTALCYCLES_CYCLES)

//! @brief Format value for bitfield GPU2D_TOTALCYCLES_CYCLES.
#define BF_GPU2D_TOTALCYCLES_CYCLES(v)   ((__REG_VALUE_TYPE((v), reg32_t) << BP_GPU2D_TOTALCYCLES_CYCLES) & BM_GPU2D_TOTALCYCLES_CYCLES)

#ifndef __LANGUAGE_ASM__
//! @brief Set the CYCLES field to a new value.
#define BW_GPU2D_TOTALCYCLES_CYCLES(v)   (HW_GPU2D_TOTALCYCLES_WR((HW_GPU2D_TOTALCYCLES_RD() & ~BM_GPU2D_TOTALCYCLES_CYCLES) | BF_GPU2D_TOTALCYCLES_CYCLES(v)))
#endif

//-------------------------------------------------------------------------------------------
// HW_GPU2D_TOTALIDLECYLES - Total Idle Cycle Register
//-------------------------------------------------------------------------------------------

#ifndef __LANGUAGE_ASM__
/*!
 * @brief HW_GPU2D_TOTALIDLECYLES - Total Idle Cycle Register (RW)
 *
 * Reset value: 0x00000000
 *
 * Total cycles where the GPU is idle. It is reset when gcTotalCycles register is written to. It
 * looks at all the blocks but FE when determining the IP is idle.
 */
typedef union _hw_gpu2d_totalidlecyles
{
    reg32_t U;
    struct _hw_gpu2d_totalidlecyles_bitfields
    {
        unsigned CYCLES : 32; //!< [31:0] 
    } B;
} hw_gpu2d_totalidlecyles_t;
#endif

/*
 * constants & macros for entire GPU2D_TOTALIDLECYLES register
 */
#define HW_GPU2D_TOTALIDLECYLES_ADDR      (REGS_GPU2D_BASE + 0x7c)

#ifndef __LANGUAGE_ASM__
#define HW_GPU2D_TOTALIDLECYLES           (*(volatile hw_gpu2d_totalidlecyles_t *) HW_GPU2D_TOTALIDLECYLES_ADDR)
#define HW_GPU2D_TOTALIDLECYLES_RD()      (HW_GPU2D_TOTALIDLECYLES.U)
#define HW_GPU2D_TOTALIDLECYLES_WR(v)     (HW_GPU2D_TOTALIDLECYLES.U = (v))
#define HW_GPU2D_TOTALIDLECYLES_SET(v)    (HW_GPU2D_TOTALIDLECYLES_WR(HW_GPU2D_TOTALIDLECYLES_RD() |  (v)))
#define HW_GPU2D_TOTALIDLECYLES_CLR(v)    (HW_GPU2D_TOTALIDLECYLES_WR(HW_GPU2D_TOTALIDLECYLES_RD() & ~(v)))
#define HW_GPU2D_TOTALIDLECYLES_TOG(v)    (HW_GPU2D_TOTALIDLECYLES_WR(HW_GPU2D_TOTALIDLECYLES_RD() ^  (v)))
#endif

/*
 * constants & macros for individual GPU2D_TOTALIDLECYLES bitfields
 */

/* --- Register HW_GPU2D_TOTALIDLECYLES, field CYCLES[31:0] (RW)
 *

 */

#define BP_GPU2D_TOTALIDLECYLES_CYCLES      (0)      //!< Bit position for GPU2D_TOTALIDLECYLES_CYCLES.
#define BM_GPU2D_TOTALIDLECYLES_CYCLES      (0xffffffff)  //!< Bit mask for GPU2D_TOTALIDLECYLES_CYCLES.

//! @brief Get value of GPU2D_TOTALIDLECYLES_CYCLES from a register value.
#define BG_GPU2D_TOTALIDLECYLES_CYCLES(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_GPU2D_TOTALIDLECYLES_CYCLES) >> BP_GPU2D_TOTALIDLECYLES_CYCLES)

//! @brief Format value for bitfield GPU2D_TOTALIDLECYLES_CYCLES.
#define BF_GPU2D_TOTALIDLECYLES_CYCLES(v)   ((__REG_VALUE_TYPE((v), reg32_t) << BP_GPU2D_TOTALIDLECYLES_CYCLES) & BM_GPU2D_TOTALIDLECYLES_CYCLES)

#ifndef __LANGUAGE_ASM__
//! @brief Set the CYCLES field to a new value.
#define BW_GPU2D_TOTALIDLECYLES_CYCLES(v)   (HW_GPU2D_TOTALIDLECYLES_WR((HW_GPU2D_TOTALIDLECYLES_RD() & ~BM_GPU2D_TOTALIDLECYLES_CYCLES) | BF_GPU2D_TOTALIDLECYLES_CYCLES(v)))
#endif

//-------------------------------------------------------------------------------------------
// HW_GPU2D_CHIPSPECS2 - Chip Specification Register
//-------------------------------------------------------------------------------------------

#ifndef __LANGUAGE_ASM__
/*!
 * @brief HW_GPU2D_CHIPSPECS2 - Chip Specification Register (RW)
 *
 * Reset value: 0x00000000
 *
 * Specs for the chip. This register has no reset value. It varies with the implementation.
 */
typedef union _hw_gpu2d_chipspecs2
{
    reg32_t U;
    struct _hw_gpu2d_chipspecs2_bitfields
    {
        unsigned CYCLES : 32; //!< [31:0] 
    } B;
} hw_gpu2d_chipspecs2_t;
#endif

/*
 * constants & macros for entire GPU2D_CHIPSPECS2 register
 */
#define HW_GPU2D_CHIPSPECS2_ADDR      (REGS_GPU2D_BASE + 0x80)

#ifndef __LANGUAGE_ASM__
#define HW_GPU2D_CHIPSPECS2           (*(volatile hw_gpu2d_chipspecs2_t *) HW_GPU2D_CHIPSPECS2_ADDR)
#define HW_GPU2D_CHIPSPECS2_RD()      (HW_GPU2D_CHIPSPECS2.U)
#define HW_GPU2D_CHIPSPECS2_WR(v)     (HW_GPU2D_CHIPSPECS2.U = (v))
#define HW_GPU2D_CHIPSPECS2_SET(v)    (HW_GPU2D_CHIPSPECS2_WR(HW_GPU2D_CHIPSPECS2_RD() |  (v)))
#define HW_GPU2D_CHIPSPECS2_CLR(v)    (HW_GPU2D_CHIPSPECS2_WR(HW_GPU2D_CHIPSPECS2_RD() & ~(v)))
#define HW_GPU2D_CHIPSPECS2_TOG(v)    (HW_GPU2D_CHIPSPECS2_WR(HW_GPU2D_CHIPSPECS2_RD() ^  (v)))
#endif

/*
 * constants & macros for individual GPU2D_CHIPSPECS2 bitfields
 */

/* --- Register HW_GPU2D_CHIPSPECS2, field CYCLES[31:0] (RW)
 *

 */

#define BP_GPU2D_CHIPSPECS2_CYCLES      (0)      //!< Bit position for GPU2D_CHIPSPECS2_CYCLES.
#define BM_GPU2D_CHIPSPECS2_CYCLES      (0xffffffff)  //!< Bit mask for GPU2D_CHIPSPECS2_CYCLES.

//! @brief Get value of GPU2D_CHIPSPECS2_CYCLES from a register value.
#define BG_GPU2D_CHIPSPECS2_CYCLES(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_GPU2D_CHIPSPECS2_CYCLES) >> BP_GPU2D_CHIPSPECS2_CYCLES)

//! @brief Format value for bitfield GPU2D_CHIPSPECS2_CYCLES.
#define BF_GPU2D_CHIPSPECS2_CYCLES(v)   ((__REG_VALUE_TYPE((v), reg32_t) << BP_GPU2D_CHIPSPECS2_CYCLES) & BM_GPU2D_CHIPSPECS2_CYCLES)

#ifndef __LANGUAGE_ASM__
//! @brief Set the CYCLES field to a new value.
#define BW_GPU2D_CHIPSPECS2_CYCLES(v)   (HW_GPU2D_CHIPSPECS2_WR((HW_GPU2D_CHIPSPECS2_RD() & ~BM_GPU2D_CHIPSPECS2_CYCLES) | BF_GPU2D_CHIPSPECS2_CYCLES(v)))
#endif

//-------------------------------------------------------------------------------------------
// HW_GPU2D_MODULEPOWERCONTROLS - Power Control Register
//-------------------------------------------------------------------------------------------

#ifndef __LANGUAGE_ASM__
/*!
 * @brief HW_GPU2D_MODULEPOWERCONTROLS - Power Control Register (RW)
 *
 * Reset value: 0x00140020
 *
 * The Power Management register set has just a few registers for controlling clock gating within
 * the core. GC400 allows the user to control the clock gating of each internal module independently
 * of the other modules. Users can access all of these registers via the AHB Bus.  Control register
 * for module level power controls.
 */
typedef union _hw_gpu2d_modulepowercontrols
{
    reg32_t U;
    struct _hw_gpu2d_modulepowercontrols_bitfields
    {
        unsigned TURN_OFF_COUNTER : 16; //!< [15:0] Counter value for clock gating the module if the module is idle for this amount of clock cycles.
        unsigned RESERVED0 : 8; //!< [23:16] Reserved
        unsigned TURN_ON_COUNTER : 4; //!< [27:24] Number of clock cycles to wait after turning on the clock.
        unsigned RESERVED1 : 1; //!< [28] Reserved
        unsigned DISABLE_STARVE_MODULE_CLOCK_GATING : 1; //!< [29] Disables module level clock gating for starve/idle condition.
        unsigned DISABLE_STALL_MODULE_CLOCK_GATING : 1; //!< [30] Disables module level clock gating for stall condition.
        unsigned ENABLE_MODULE_CLOCK_GATING : 1; //!< [31] Enables module level clock gating.
    } B;
} hw_gpu2d_modulepowercontrols_t;
#endif

/*
 * constants & macros for entire GPU2D_MODULEPOWERCONTROLS register
 */
#define HW_GPU2D_MODULEPOWERCONTROLS_ADDR      (REGS_GPU2D_BASE + 0x84)

#ifndef __LANGUAGE_ASM__
#define HW_GPU2D_MODULEPOWERCONTROLS           (*(volatile hw_gpu2d_modulepowercontrols_t *) HW_GPU2D_MODULEPOWERCONTROLS_ADDR)
#define HW_GPU2D_MODULEPOWERCONTROLS_RD()      (HW_GPU2D_MODULEPOWERCONTROLS.U)
#define HW_GPU2D_MODULEPOWERCONTROLS_WR(v)     (HW_GPU2D_MODULEPOWERCONTROLS.U = (v))
#define HW_GPU2D_MODULEPOWERCONTROLS_SET(v)    (HW_GPU2D_MODULEPOWERCONTROLS_WR(HW_GPU2D_MODULEPOWERCONTROLS_RD() |  (v)))
#define HW_GPU2D_MODULEPOWERCONTROLS_CLR(v)    (HW_GPU2D_MODULEPOWERCONTROLS_WR(HW_GPU2D_MODULEPOWERCONTROLS_RD() & ~(v)))
#define HW_GPU2D_MODULEPOWERCONTROLS_TOG(v)    (HW_GPU2D_MODULEPOWERCONTROLS_WR(HW_GPU2D_MODULEPOWERCONTROLS_RD() ^  (v)))
#endif

/*
 * constants & macros for individual GPU2D_MODULEPOWERCONTROLS bitfields
 */

/* --- Register HW_GPU2D_MODULEPOWERCONTROLS, field TURN_OFF_COUNTER[15:0] (RW)
 *
 * Counter value for clock gating the module if the module is idle for this amount of clock cycles.
 */

#define BP_GPU2D_MODULEPOWERCONTROLS_TURN_OFF_COUNTER      (0)      //!< Bit position for GPU2D_MODULEPOWERCONTROLS_TURN_OFF_COUNTER.
#define BM_GPU2D_MODULEPOWERCONTROLS_TURN_OFF_COUNTER      (0x0000ffff)  //!< Bit mask for GPU2D_MODULEPOWERCONTROLS_TURN_OFF_COUNTER.

//! @brief Get value of GPU2D_MODULEPOWERCONTROLS_TURN_OFF_COUNTER from a register value.
#define BG_GPU2D_MODULEPOWERCONTROLS_TURN_OFF_COUNTER(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_GPU2D_MODULEPOWERCONTROLS_TURN_OFF_COUNTER) >> BP_GPU2D_MODULEPOWERCONTROLS_TURN_OFF_COUNTER)

//! @brief Format value for bitfield GPU2D_MODULEPOWERCONTROLS_TURN_OFF_COUNTER.
#define BF_GPU2D_MODULEPOWERCONTROLS_TURN_OFF_COUNTER(v)   ((__REG_VALUE_TYPE((v), reg32_t) << BP_GPU2D_MODULEPOWERCONTROLS_TURN_OFF_COUNTER) & BM_GPU2D_MODULEPOWERCONTROLS_TURN_OFF_COUNTER)

#ifndef __LANGUAGE_ASM__
//! @brief Set the TURN_OFF_COUNTER field to a new value.
#define BW_GPU2D_MODULEPOWERCONTROLS_TURN_OFF_COUNTER(v)   (HW_GPU2D_MODULEPOWERCONTROLS_WR((HW_GPU2D_MODULEPOWERCONTROLS_RD() & ~BM_GPU2D_MODULEPOWERCONTROLS_TURN_OFF_COUNTER) | BF_GPU2D_MODULEPOWERCONTROLS_TURN_OFF_COUNTER(v)))
#endif

/* --- Register HW_GPU2D_MODULEPOWERCONTROLS, field TURN_ON_COUNTER[27:24] (RW)
 *
 * Number of clock cycles to wait after turning on the clock.
 */

#define BP_GPU2D_MODULEPOWERCONTROLS_TURN_ON_COUNTER      (24)      //!< Bit position for GPU2D_MODULEPOWERCONTROLS_TURN_ON_COUNTER.
#define BM_GPU2D_MODULEPOWERCONTROLS_TURN_ON_COUNTER      (0x0f000000)  //!< Bit mask for GPU2D_MODULEPOWERCONTROLS_TURN_ON_COUNTER.

//! @brief Get value of GPU2D_MODULEPOWERCONTROLS_TURN_ON_COUNTER from a register value.
#define BG_GPU2D_MODULEPOWERCONTROLS_TURN_ON_COUNTER(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_GPU2D_MODULEPOWERCONTROLS_TURN_ON_COUNTER) >> BP_GPU2D_MODULEPOWERCONTROLS_TURN_ON_COUNTER)

//! @brief Format value for bitfield GPU2D_MODULEPOWERCONTROLS_TURN_ON_COUNTER.
#define BF_GPU2D_MODULEPOWERCONTROLS_TURN_ON_COUNTER(v)   ((__REG_VALUE_TYPE((v), reg32_t) << BP_GPU2D_MODULEPOWERCONTROLS_TURN_ON_COUNTER) & BM_GPU2D_MODULEPOWERCONTROLS_TURN_ON_COUNTER)

#ifndef __LANGUAGE_ASM__
//! @brief Set the TURN_ON_COUNTER field to a new value.
#define BW_GPU2D_MODULEPOWERCONTROLS_TURN_ON_COUNTER(v)   (HW_GPU2D_MODULEPOWERCONTROLS_WR((HW_GPU2D_MODULEPOWERCONTROLS_RD() & ~BM_GPU2D_MODULEPOWERCONTROLS_TURN_ON_COUNTER) | BF_GPU2D_MODULEPOWERCONTROLS_TURN_ON_COUNTER(v)))
#endif

/* --- Register HW_GPU2D_MODULEPOWERCONTROLS, field DISABLE_STARVE_MODULE_CLOCK_GATING[29] (RW)
 *
 * Disables module level clock gating for starve/idle condition.
 */

#define BP_GPU2D_MODULEPOWERCONTROLS_DISABLE_STARVE_MODULE_CLOCK_GATING      (29)      //!< Bit position for GPU2D_MODULEPOWERCONTROLS_DISABLE_STARVE_MODULE_CLOCK_GATING.
#define BM_GPU2D_MODULEPOWERCONTROLS_DISABLE_STARVE_MODULE_CLOCK_GATING      (0x20000000)  //!< Bit mask for GPU2D_MODULEPOWERCONTROLS_DISABLE_STARVE_MODULE_CLOCK_GATING.

//! @brief Get value of GPU2D_MODULEPOWERCONTROLS_DISABLE_STARVE_MODULE_CLOCK_GATING from a register value.
#define BG_GPU2D_MODULEPOWERCONTROLS_DISABLE_STARVE_MODULE_CLOCK_GATING(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_GPU2D_MODULEPOWERCONTROLS_DISABLE_STARVE_MODULE_CLOCK_GATING) >> BP_GPU2D_MODULEPOWERCONTROLS_DISABLE_STARVE_MODULE_CLOCK_GATING)

//! @brief Format value for bitfield GPU2D_MODULEPOWERCONTROLS_DISABLE_STARVE_MODULE_CLOCK_GATING.
#define BF_GPU2D_MODULEPOWERCONTROLS_DISABLE_STARVE_MODULE_CLOCK_GATING(v)   ((__REG_VALUE_TYPE((v), reg32_t) << BP_GPU2D_MODULEPOWERCONTROLS_DISABLE_STARVE_MODULE_CLOCK_GATING) & BM_GPU2D_MODULEPOWERCONTROLS_DISABLE_STARVE_MODULE_CLOCK_GATING)

#ifndef __LANGUAGE_ASM__
//! @brief Set the DISABLE_STARVE_MODULE_CLOCK_GATING field to a new value.
#define BW_GPU2D_MODULEPOWERCONTROLS_DISABLE_STARVE_MODULE_CLOCK_GATING(v)   (HW_GPU2D_MODULEPOWERCONTROLS_WR((HW_GPU2D_MODULEPOWERCONTROLS_RD() & ~BM_GPU2D_MODULEPOWERCONTROLS_DISABLE_STARVE_MODULE_CLOCK_GATING) | BF_GPU2D_MODULEPOWERCONTROLS_DISABLE_STARVE_MODULE_CLOCK_GATING(v)))
#endif

/* --- Register HW_GPU2D_MODULEPOWERCONTROLS, field DISABLE_STALL_MODULE_CLOCK_GATING[30] (RW)
 *
 * Disables module level clock gating for stall condition.
 */

#define BP_GPU2D_MODULEPOWERCONTROLS_DISABLE_STALL_MODULE_CLOCK_GATING      (30)      //!< Bit position for GPU2D_MODULEPOWERCONTROLS_DISABLE_STALL_MODULE_CLOCK_GATING.
#define BM_GPU2D_MODULEPOWERCONTROLS_DISABLE_STALL_MODULE_CLOCK_GATING      (0x40000000)  //!< Bit mask for GPU2D_MODULEPOWERCONTROLS_DISABLE_STALL_MODULE_CLOCK_GATING.

//! @brief Get value of GPU2D_MODULEPOWERCONTROLS_DISABLE_STALL_MODULE_CLOCK_GATING from a register value.
#define BG_GPU2D_MODULEPOWERCONTROLS_DISABLE_STALL_MODULE_CLOCK_GATING(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_GPU2D_MODULEPOWERCONTROLS_DISABLE_STALL_MODULE_CLOCK_GATING) >> BP_GPU2D_MODULEPOWERCONTROLS_DISABLE_STALL_MODULE_CLOCK_GATING)

//! @brief Format value for bitfield GPU2D_MODULEPOWERCONTROLS_DISABLE_STALL_MODULE_CLOCK_GATING.
#define BF_GPU2D_MODULEPOWERCONTROLS_DISABLE_STALL_MODULE_CLOCK_GATING(v)   ((__REG_VALUE_TYPE((v), reg32_t) << BP_GPU2D_MODULEPOWERCONTROLS_DISABLE_STALL_MODULE_CLOCK_GATING) & BM_GPU2D_MODULEPOWERCONTROLS_DISABLE_STALL_MODULE_CLOCK_GATING)

#ifndef __LANGUAGE_ASM__
//! @brief Set the DISABLE_STALL_MODULE_CLOCK_GATING field to a new value.
#define BW_GPU2D_MODULEPOWERCONTROLS_DISABLE_STALL_MODULE_CLOCK_GATING(v)   (HW_GPU2D_MODULEPOWERCONTROLS_WR((HW_GPU2D_MODULEPOWERCONTROLS_RD() & ~BM_GPU2D_MODULEPOWERCONTROLS_DISABLE_STALL_MODULE_CLOCK_GATING) | BF_GPU2D_MODULEPOWERCONTROLS_DISABLE_STALL_MODULE_CLOCK_GATING(v)))
#endif

/* --- Register HW_GPU2D_MODULEPOWERCONTROLS, field ENABLE_MODULE_CLOCK_GATING[31] (RW)
 *
 * Enables module level clock gating.
 */

#define BP_GPU2D_MODULEPOWERCONTROLS_ENABLE_MODULE_CLOCK_GATING      (31)      //!< Bit position for GPU2D_MODULEPOWERCONTROLS_ENABLE_MODULE_CLOCK_GATING.
#define BM_GPU2D_MODULEPOWERCONTROLS_ENABLE_MODULE_CLOCK_GATING      (0x80000000)  //!< Bit mask for GPU2D_MODULEPOWERCONTROLS_ENABLE_MODULE_CLOCK_GATING.

//! @brief Get value of GPU2D_MODULEPOWERCONTROLS_ENABLE_MODULE_CLOCK_GATING from a register value.
#define BG_GPU2D_MODULEPOWERCONTROLS_ENABLE_MODULE_CLOCK_GATING(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_GPU2D_MODULEPOWERCONTROLS_ENABLE_MODULE_CLOCK_GATING) >> BP_GPU2D_MODULEPOWERCONTROLS_ENABLE_MODULE_CLOCK_GATING)

//! @brief Format value for bitfield GPU2D_MODULEPOWERCONTROLS_ENABLE_MODULE_CLOCK_GATING.
#define BF_GPU2D_MODULEPOWERCONTROLS_ENABLE_MODULE_CLOCK_GATING(v)   ((__REG_VALUE_TYPE((v), reg32_t) << BP_GPU2D_MODULEPOWERCONTROLS_ENABLE_MODULE_CLOCK_GATING) & BM_GPU2D_MODULEPOWERCONTROLS_ENABLE_MODULE_CLOCK_GATING)

#ifndef __LANGUAGE_ASM__
//! @brief Set the ENABLE_MODULE_CLOCK_GATING field to a new value.
#define BW_GPU2D_MODULEPOWERCONTROLS_ENABLE_MODULE_CLOCK_GATING(v)   (HW_GPU2D_MODULEPOWERCONTROLS_WR((HW_GPU2D_MODULEPOWERCONTROLS_RD() & ~BM_GPU2D_MODULEPOWERCONTROLS_ENABLE_MODULE_CLOCK_GATING) | BF_GPU2D_MODULEPOWERCONTROLS_ENABLE_MODULE_CLOCK_GATING(v)))
#endif

//-------------------------------------------------------------------------------------------
// HW_GPU2D_MODULEPOWERMODULECONTROL - Power Level Register
//-------------------------------------------------------------------------------------------

#ifndef __LANGUAGE_ASM__
/*!
 * @brief HW_GPU2D_MODULEPOWERMODULECONTROL - Power Level Register (RW)
 *
 * Reset value: 0x00000000
 *
 * Module level control registers.
 */
typedef union _hw_gpu2d_modulepowermodulecontrol
{
    reg32_t U;
    struct _hw_gpu2d_modulepowermodulecontrol_bitfields
    {
        unsigned RESERVED0 : 20; //!< [19:0] Reserved
        unsigned DISABLE_MODULE_CLOCK_GATING_TS : 1; //!< [20] Disables module level clock gating for TS.
        unsigned DISABLE_MODULE_CLOCK_GATING_FP : 1; //!< [21] Disables module level clock gating for FP.
        unsigned DISABLE_MODULE_CLOCK_GATING_IM : 1; //!< [22] Disables module level clock gating for IM.
        unsigned DISABLE_MODULE_CLOCK_GATING_VG : 1; //!< [23] Disables module level clock gating for VG.
        unsigned DISABLE_MODULE_CLOCK_GATING_TX : 1; //!< [24] Disables module level clock gating for TX.
        unsigned DISABLE_MODULE_CLOCK_GATING_RA : 1; //!< [25] Disables module level clock gating for RA.
        unsigned DISABLE_MODULE_CLOCK_GATING_SE : 1; //!< [26] Disables module level clock gating for SE.
        unsigned DISABLE_MODULE_CLOCK_GATING_PA : 1; //!< [27] Disables module level clock gating for PA.
        unsigned DISABLE_MODULE_CLOCK_GATING_SH : 1; //!< [28] Disables module level clock gating for SH.
        unsigned DISABLE_MODULE_CLOCK_GATING_PE : 1; //!< [29] Disables module level clock gating for PE.
        unsigned DISABLE_MODULE_CLOCK_GATING_DE : 1; //!< [30] Disables module level clock gating for DE.
        unsigned DISABLE_MODULE_CLOCK_GATING_FE : 1; //!< [31] Disables module level clock gating for FE.
    } B;
} hw_gpu2d_modulepowermodulecontrol_t;
#endif

/*
 * constants & macros for entire GPU2D_MODULEPOWERMODULECONTROL register
 */
#define HW_GPU2D_MODULEPOWERMODULECONTROL_ADDR      (REGS_GPU2D_BASE + 0x88)

#ifndef __LANGUAGE_ASM__
#define HW_GPU2D_MODULEPOWERMODULECONTROL           (*(volatile hw_gpu2d_modulepowermodulecontrol_t *) HW_GPU2D_MODULEPOWERMODULECONTROL_ADDR)
#define HW_GPU2D_MODULEPOWERMODULECONTROL_RD()      (HW_GPU2D_MODULEPOWERMODULECONTROL.U)
#define HW_GPU2D_MODULEPOWERMODULECONTROL_WR(v)     (HW_GPU2D_MODULEPOWERMODULECONTROL.U = (v))
#define HW_GPU2D_MODULEPOWERMODULECONTROL_SET(v)    (HW_GPU2D_MODULEPOWERMODULECONTROL_WR(HW_GPU2D_MODULEPOWERMODULECONTROL_RD() |  (v)))
#define HW_GPU2D_MODULEPOWERMODULECONTROL_CLR(v)    (HW_GPU2D_MODULEPOWERMODULECONTROL_WR(HW_GPU2D_MODULEPOWERMODULECONTROL_RD() & ~(v)))
#define HW_GPU2D_MODULEPOWERMODULECONTROL_TOG(v)    (HW_GPU2D_MODULEPOWERMODULECONTROL_WR(HW_GPU2D_MODULEPOWERMODULECONTROL_RD() ^  (v)))
#endif

/*
 * constants & macros for individual GPU2D_MODULEPOWERMODULECONTROL bitfields
 */

/* --- Register HW_GPU2D_MODULEPOWERMODULECONTROL, field DISABLE_MODULE_CLOCK_GATING_TS[20] (RW)
 *
 * Disables module level clock gating for TS.
 */

#define BP_GPU2D_MODULEPOWERMODULECONTROL_DISABLE_MODULE_CLOCK_GATING_TS      (20)      //!< Bit position for GPU2D_MODULEPOWERMODULECONTROL_DISABLE_MODULE_CLOCK_GATING_TS.
#define BM_GPU2D_MODULEPOWERMODULECONTROL_DISABLE_MODULE_CLOCK_GATING_TS      (0x00100000)  //!< Bit mask for GPU2D_MODULEPOWERMODULECONTROL_DISABLE_MODULE_CLOCK_GATING_TS.

//! @brief Get value of GPU2D_MODULEPOWERMODULECONTROL_DISABLE_MODULE_CLOCK_GATING_TS from a register value.
#define BG_GPU2D_MODULEPOWERMODULECONTROL_DISABLE_MODULE_CLOCK_GATING_TS(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_GPU2D_MODULEPOWERMODULECONTROL_DISABLE_MODULE_CLOCK_GATING_TS) >> BP_GPU2D_MODULEPOWERMODULECONTROL_DISABLE_MODULE_CLOCK_GATING_TS)

//! @brief Format value for bitfield GPU2D_MODULEPOWERMODULECONTROL_DISABLE_MODULE_CLOCK_GATING_TS.
#define BF_GPU2D_MODULEPOWERMODULECONTROL_DISABLE_MODULE_CLOCK_GATING_TS(v)   ((__REG_VALUE_TYPE((v), reg32_t) << BP_GPU2D_MODULEPOWERMODULECONTROL_DISABLE_MODULE_CLOCK_GATING_TS) & BM_GPU2D_MODULEPOWERMODULECONTROL_DISABLE_MODULE_CLOCK_GATING_TS)

#ifndef __LANGUAGE_ASM__
//! @brief Set the DISABLE_MODULE_CLOCK_GATING_TS field to a new value.
#define BW_GPU2D_MODULEPOWERMODULECONTROL_DISABLE_MODULE_CLOCK_GATING_TS(v)   (HW_GPU2D_MODULEPOWERMODULECONTROL_WR((HW_GPU2D_MODULEPOWERMODULECONTROL_RD() & ~BM_GPU2D_MODULEPOWERMODULECONTROL_DISABLE_MODULE_CLOCK_GATING_TS) | BF_GPU2D_MODULEPOWERMODULECONTROL_DISABLE_MODULE_CLOCK_GATING_TS(v)))
#endif

/* --- Register HW_GPU2D_MODULEPOWERMODULECONTROL, field DISABLE_MODULE_CLOCK_GATING_FP[21] (RW)
 *
 * Disables module level clock gating for FP.
 */

#define BP_GPU2D_MODULEPOWERMODULECONTROL_DISABLE_MODULE_CLOCK_GATING_FP      (21)      //!< Bit position for GPU2D_MODULEPOWERMODULECONTROL_DISABLE_MODULE_CLOCK_GATING_FP.
#define BM_GPU2D_MODULEPOWERMODULECONTROL_DISABLE_MODULE_CLOCK_GATING_FP      (0x00200000)  //!< Bit mask for GPU2D_MODULEPOWERMODULECONTROL_DISABLE_MODULE_CLOCK_GATING_FP.

//! @brief Get value of GPU2D_MODULEPOWERMODULECONTROL_DISABLE_MODULE_CLOCK_GATING_FP from a register value.
#define BG_GPU2D_MODULEPOWERMODULECONTROL_DISABLE_MODULE_CLOCK_GATING_FP(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_GPU2D_MODULEPOWERMODULECONTROL_DISABLE_MODULE_CLOCK_GATING_FP) >> BP_GPU2D_MODULEPOWERMODULECONTROL_DISABLE_MODULE_CLOCK_GATING_FP)

//! @brief Format value for bitfield GPU2D_MODULEPOWERMODULECONTROL_DISABLE_MODULE_CLOCK_GATING_FP.
#define BF_GPU2D_MODULEPOWERMODULECONTROL_DISABLE_MODULE_CLOCK_GATING_FP(v)   ((__REG_VALUE_TYPE((v), reg32_t) << BP_GPU2D_MODULEPOWERMODULECONTROL_DISABLE_MODULE_CLOCK_GATING_FP) & BM_GPU2D_MODULEPOWERMODULECONTROL_DISABLE_MODULE_CLOCK_GATING_FP)

#ifndef __LANGUAGE_ASM__
//! @brief Set the DISABLE_MODULE_CLOCK_GATING_FP field to a new value.
#define BW_GPU2D_MODULEPOWERMODULECONTROL_DISABLE_MODULE_CLOCK_GATING_FP(v)   (HW_GPU2D_MODULEPOWERMODULECONTROL_WR((HW_GPU2D_MODULEPOWERMODULECONTROL_RD() & ~BM_GPU2D_MODULEPOWERMODULECONTROL_DISABLE_MODULE_CLOCK_GATING_FP) | BF_GPU2D_MODULEPOWERMODULECONTROL_DISABLE_MODULE_CLOCK_GATING_FP(v)))
#endif

/* --- Register HW_GPU2D_MODULEPOWERMODULECONTROL, field DISABLE_MODULE_CLOCK_GATING_IM[22] (RW)
 *
 * Disables module level clock gating for IM.
 */

#define BP_GPU2D_MODULEPOWERMODULECONTROL_DISABLE_MODULE_CLOCK_GATING_IM      (22)      //!< Bit position for GPU2D_MODULEPOWERMODULECONTROL_DISABLE_MODULE_CLOCK_GATING_IM.
#define BM_GPU2D_MODULEPOWERMODULECONTROL_DISABLE_MODULE_CLOCK_GATING_IM      (0x00400000)  //!< Bit mask for GPU2D_MODULEPOWERMODULECONTROL_DISABLE_MODULE_CLOCK_GATING_IM.

//! @brief Get value of GPU2D_MODULEPOWERMODULECONTROL_DISABLE_MODULE_CLOCK_GATING_IM from a register value.
#define BG_GPU2D_MODULEPOWERMODULECONTROL_DISABLE_MODULE_CLOCK_GATING_IM(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_GPU2D_MODULEPOWERMODULECONTROL_DISABLE_MODULE_CLOCK_GATING_IM) >> BP_GPU2D_MODULEPOWERMODULECONTROL_DISABLE_MODULE_CLOCK_GATING_IM)

//! @brief Format value for bitfield GPU2D_MODULEPOWERMODULECONTROL_DISABLE_MODULE_CLOCK_GATING_IM.
#define BF_GPU2D_MODULEPOWERMODULECONTROL_DISABLE_MODULE_CLOCK_GATING_IM(v)   ((__REG_VALUE_TYPE((v), reg32_t) << BP_GPU2D_MODULEPOWERMODULECONTROL_DISABLE_MODULE_CLOCK_GATING_IM) & BM_GPU2D_MODULEPOWERMODULECONTROL_DISABLE_MODULE_CLOCK_GATING_IM)

#ifndef __LANGUAGE_ASM__
//! @brief Set the DISABLE_MODULE_CLOCK_GATING_IM field to a new value.
#define BW_GPU2D_MODULEPOWERMODULECONTROL_DISABLE_MODULE_CLOCK_GATING_IM(v)   (HW_GPU2D_MODULEPOWERMODULECONTROL_WR((HW_GPU2D_MODULEPOWERMODULECONTROL_RD() & ~BM_GPU2D_MODULEPOWERMODULECONTROL_DISABLE_MODULE_CLOCK_GATING_IM) | BF_GPU2D_MODULEPOWERMODULECONTROL_DISABLE_MODULE_CLOCK_GATING_IM(v)))
#endif

/* --- Register HW_GPU2D_MODULEPOWERMODULECONTROL, field DISABLE_MODULE_CLOCK_GATING_VG[23] (RW)
 *
 * Disables module level clock gating for VG.
 */

#define BP_GPU2D_MODULEPOWERMODULECONTROL_DISABLE_MODULE_CLOCK_GATING_VG      (23)      //!< Bit position for GPU2D_MODULEPOWERMODULECONTROL_DISABLE_MODULE_CLOCK_GATING_VG.
#define BM_GPU2D_MODULEPOWERMODULECONTROL_DISABLE_MODULE_CLOCK_GATING_VG      (0x00800000)  //!< Bit mask for GPU2D_MODULEPOWERMODULECONTROL_DISABLE_MODULE_CLOCK_GATING_VG.

//! @brief Get value of GPU2D_MODULEPOWERMODULECONTROL_DISABLE_MODULE_CLOCK_GATING_VG from a register value.
#define BG_GPU2D_MODULEPOWERMODULECONTROL_DISABLE_MODULE_CLOCK_GATING_VG(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_GPU2D_MODULEPOWERMODULECONTROL_DISABLE_MODULE_CLOCK_GATING_VG) >> BP_GPU2D_MODULEPOWERMODULECONTROL_DISABLE_MODULE_CLOCK_GATING_VG)

//! @brief Format value for bitfield GPU2D_MODULEPOWERMODULECONTROL_DISABLE_MODULE_CLOCK_GATING_VG.
#define BF_GPU2D_MODULEPOWERMODULECONTROL_DISABLE_MODULE_CLOCK_GATING_VG(v)   ((__REG_VALUE_TYPE((v), reg32_t) << BP_GPU2D_MODULEPOWERMODULECONTROL_DISABLE_MODULE_CLOCK_GATING_VG) & BM_GPU2D_MODULEPOWERMODULECONTROL_DISABLE_MODULE_CLOCK_GATING_VG)

#ifndef __LANGUAGE_ASM__
//! @brief Set the DISABLE_MODULE_CLOCK_GATING_VG field to a new value.
#define BW_GPU2D_MODULEPOWERMODULECONTROL_DISABLE_MODULE_CLOCK_GATING_VG(v)   (HW_GPU2D_MODULEPOWERMODULECONTROL_WR((HW_GPU2D_MODULEPOWERMODULECONTROL_RD() & ~BM_GPU2D_MODULEPOWERMODULECONTROL_DISABLE_MODULE_CLOCK_GATING_VG) | BF_GPU2D_MODULEPOWERMODULECONTROL_DISABLE_MODULE_CLOCK_GATING_VG(v)))
#endif

/* --- Register HW_GPU2D_MODULEPOWERMODULECONTROL, field DISABLE_MODULE_CLOCK_GATING_TX[24] (RW)
 *
 * Disables module level clock gating for TX.
 */

#define BP_GPU2D_MODULEPOWERMODULECONTROL_DISABLE_MODULE_CLOCK_GATING_TX      (24)      //!< Bit position for GPU2D_MODULEPOWERMODULECONTROL_DISABLE_MODULE_CLOCK_GATING_TX.
#define BM_GPU2D_MODULEPOWERMODULECONTROL_DISABLE_MODULE_CLOCK_GATING_TX      (0x01000000)  //!< Bit mask for GPU2D_MODULEPOWERMODULECONTROL_DISABLE_MODULE_CLOCK_GATING_TX.

//! @brief Get value of GPU2D_MODULEPOWERMODULECONTROL_DISABLE_MODULE_CLOCK_GATING_TX from a register value.
#define BG_GPU2D_MODULEPOWERMODULECONTROL_DISABLE_MODULE_CLOCK_GATING_TX(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_GPU2D_MODULEPOWERMODULECONTROL_DISABLE_MODULE_CLOCK_GATING_TX) >> BP_GPU2D_MODULEPOWERMODULECONTROL_DISABLE_MODULE_CLOCK_GATING_TX)

//! @brief Format value for bitfield GPU2D_MODULEPOWERMODULECONTROL_DISABLE_MODULE_CLOCK_GATING_TX.
#define BF_GPU2D_MODULEPOWERMODULECONTROL_DISABLE_MODULE_CLOCK_GATING_TX(v)   ((__REG_VALUE_TYPE((v), reg32_t) << BP_GPU2D_MODULEPOWERMODULECONTROL_DISABLE_MODULE_CLOCK_GATING_TX) & BM_GPU2D_MODULEPOWERMODULECONTROL_DISABLE_MODULE_CLOCK_GATING_TX)

#ifndef __LANGUAGE_ASM__
//! @brief Set the DISABLE_MODULE_CLOCK_GATING_TX field to a new value.
#define BW_GPU2D_MODULEPOWERMODULECONTROL_DISABLE_MODULE_CLOCK_GATING_TX(v)   (HW_GPU2D_MODULEPOWERMODULECONTROL_WR((HW_GPU2D_MODULEPOWERMODULECONTROL_RD() & ~BM_GPU2D_MODULEPOWERMODULECONTROL_DISABLE_MODULE_CLOCK_GATING_TX) | BF_GPU2D_MODULEPOWERMODULECONTROL_DISABLE_MODULE_CLOCK_GATING_TX(v)))
#endif

/* --- Register HW_GPU2D_MODULEPOWERMODULECONTROL, field DISABLE_MODULE_CLOCK_GATING_RA[25] (RW)
 *
 * Disables module level clock gating for RA.
 */

#define BP_GPU2D_MODULEPOWERMODULECONTROL_DISABLE_MODULE_CLOCK_GATING_RA      (25)      //!< Bit position for GPU2D_MODULEPOWERMODULECONTROL_DISABLE_MODULE_CLOCK_GATING_RA.
#define BM_GPU2D_MODULEPOWERMODULECONTROL_DISABLE_MODULE_CLOCK_GATING_RA      (0x02000000)  //!< Bit mask for GPU2D_MODULEPOWERMODULECONTROL_DISABLE_MODULE_CLOCK_GATING_RA.

//! @brief Get value of GPU2D_MODULEPOWERMODULECONTROL_DISABLE_MODULE_CLOCK_GATING_RA from a register value.
#define BG_GPU2D_MODULEPOWERMODULECONTROL_DISABLE_MODULE_CLOCK_GATING_RA(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_GPU2D_MODULEPOWERMODULECONTROL_DISABLE_MODULE_CLOCK_GATING_RA) >> BP_GPU2D_MODULEPOWERMODULECONTROL_DISABLE_MODULE_CLOCK_GATING_RA)

//! @brief Format value for bitfield GPU2D_MODULEPOWERMODULECONTROL_DISABLE_MODULE_CLOCK_GATING_RA.
#define BF_GPU2D_MODULEPOWERMODULECONTROL_DISABLE_MODULE_CLOCK_GATING_RA(v)   ((__REG_VALUE_TYPE((v), reg32_t) << BP_GPU2D_MODULEPOWERMODULECONTROL_DISABLE_MODULE_CLOCK_GATING_RA) & BM_GPU2D_MODULEPOWERMODULECONTROL_DISABLE_MODULE_CLOCK_GATING_RA)

#ifndef __LANGUAGE_ASM__
//! @brief Set the DISABLE_MODULE_CLOCK_GATING_RA field to a new value.
#define BW_GPU2D_MODULEPOWERMODULECONTROL_DISABLE_MODULE_CLOCK_GATING_RA(v)   (HW_GPU2D_MODULEPOWERMODULECONTROL_WR((HW_GPU2D_MODULEPOWERMODULECONTROL_RD() & ~BM_GPU2D_MODULEPOWERMODULECONTROL_DISABLE_MODULE_CLOCK_GATING_RA) | BF_GPU2D_MODULEPOWERMODULECONTROL_DISABLE_MODULE_CLOCK_GATING_RA(v)))
#endif

/* --- Register HW_GPU2D_MODULEPOWERMODULECONTROL, field DISABLE_MODULE_CLOCK_GATING_SE[26] (RW)
 *
 * Disables module level clock gating for SE.
 */

#define BP_GPU2D_MODULEPOWERMODULECONTROL_DISABLE_MODULE_CLOCK_GATING_SE      (26)      //!< Bit position for GPU2D_MODULEPOWERMODULECONTROL_DISABLE_MODULE_CLOCK_GATING_SE.
#define BM_GPU2D_MODULEPOWERMODULECONTROL_DISABLE_MODULE_CLOCK_GATING_SE      (0x04000000)  //!< Bit mask for GPU2D_MODULEPOWERMODULECONTROL_DISABLE_MODULE_CLOCK_GATING_SE.

//! @brief Get value of GPU2D_MODULEPOWERMODULECONTROL_DISABLE_MODULE_CLOCK_GATING_SE from a register value.
#define BG_GPU2D_MODULEPOWERMODULECONTROL_DISABLE_MODULE_CLOCK_GATING_SE(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_GPU2D_MODULEPOWERMODULECONTROL_DISABLE_MODULE_CLOCK_GATING_SE) >> BP_GPU2D_MODULEPOWERMODULECONTROL_DISABLE_MODULE_CLOCK_GATING_SE)

//! @brief Format value for bitfield GPU2D_MODULEPOWERMODULECONTROL_DISABLE_MODULE_CLOCK_GATING_SE.
#define BF_GPU2D_MODULEPOWERMODULECONTROL_DISABLE_MODULE_CLOCK_GATING_SE(v)   ((__REG_VALUE_TYPE((v), reg32_t) << BP_GPU2D_MODULEPOWERMODULECONTROL_DISABLE_MODULE_CLOCK_GATING_SE) & BM_GPU2D_MODULEPOWERMODULECONTROL_DISABLE_MODULE_CLOCK_GATING_SE)

#ifndef __LANGUAGE_ASM__
//! @brief Set the DISABLE_MODULE_CLOCK_GATING_SE field to a new value.
#define BW_GPU2D_MODULEPOWERMODULECONTROL_DISABLE_MODULE_CLOCK_GATING_SE(v)   (HW_GPU2D_MODULEPOWERMODULECONTROL_WR((HW_GPU2D_MODULEPOWERMODULECONTROL_RD() & ~BM_GPU2D_MODULEPOWERMODULECONTROL_DISABLE_MODULE_CLOCK_GATING_SE) | BF_GPU2D_MODULEPOWERMODULECONTROL_DISABLE_MODULE_CLOCK_GATING_SE(v)))
#endif

/* --- Register HW_GPU2D_MODULEPOWERMODULECONTROL, field DISABLE_MODULE_CLOCK_GATING_PA[27] (RW)
 *
 * Disables module level clock gating for PA.
 */

#define BP_GPU2D_MODULEPOWERMODULECONTROL_DISABLE_MODULE_CLOCK_GATING_PA      (27)      //!< Bit position for GPU2D_MODULEPOWERMODULECONTROL_DISABLE_MODULE_CLOCK_GATING_PA.
#define BM_GPU2D_MODULEPOWERMODULECONTROL_DISABLE_MODULE_CLOCK_GATING_PA      (0x08000000)  //!< Bit mask for GPU2D_MODULEPOWERMODULECONTROL_DISABLE_MODULE_CLOCK_GATING_PA.

//! @brief Get value of GPU2D_MODULEPOWERMODULECONTROL_DISABLE_MODULE_CLOCK_GATING_PA from a register value.
#define BG_GPU2D_MODULEPOWERMODULECONTROL_DISABLE_MODULE_CLOCK_GATING_PA(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_GPU2D_MODULEPOWERMODULECONTROL_DISABLE_MODULE_CLOCK_GATING_PA) >> BP_GPU2D_MODULEPOWERMODULECONTROL_DISABLE_MODULE_CLOCK_GATING_PA)

//! @brief Format value for bitfield GPU2D_MODULEPOWERMODULECONTROL_DISABLE_MODULE_CLOCK_GATING_PA.
#define BF_GPU2D_MODULEPOWERMODULECONTROL_DISABLE_MODULE_CLOCK_GATING_PA(v)   ((__REG_VALUE_TYPE((v), reg32_t) << BP_GPU2D_MODULEPOWERMODULECONTROL_DISABLE_MODULE_CLOCK_GATING_PA) & BM_GPU2D_MODULEPOWERMODULECONTROL_DISABLE_MODULE_CLOCK_GATING_PA)

#ifndef __LANGUAGE_ASM__
//! @brief Set the DISABLE_MODULE_CLOCK_GATING_PA field to a new value.
#define BW_GPU2D_MODULEPOWERMODULECONTROL_DISABLE_MODULE_CLOCK_GATING_PA(v)   (HW_GPU2D_MODULEPOWERMODULECONTROL_WR((HW_GPU2D_MODULEPOWERMODULECONTROL_RD() & ~BM_GPU2D_MODULEPOWERMODULECONTROL_DISABLE_MODULE_CLOCK_GATING_PA) | BF_GPU2D_MODULEPOWERMODULECONTROL_DISABLE_MODULE_CLOCK_GATING_PA(v)))
#endif

/* --- Register HW_GPU2D_MODULEPOWERMODULECONTROL, field DISABLE_MODULE_CLOCK_GATING_SH[28] (RW)
 *
 * Disables module level clock gating for SH.
 */

#define BP_GPU2D_MODULEPOWERMODULECONTROL_DISABLE_MODULE_CLOCK_GATING_SH      (28)      //!< Bit position for GPU2D_MODULEPOWERMODULECONTROL_DISABLE_MODULE_CLOCK_GATING_SH.
#define BM_GPU2D_MODULEPOWERMODULECONTROL_DISABLE_MODULE_CLOCK_GATING_SH      (0x10000000)  //!< Bit mask for GPU2D_MODULEPOWERMODULECONTROL_DISABLE_MODULE_CLOCK_GATING_SH.

//! @brief Get value of GPU2D_MODULEPOWERMODULECONTROL_DISABLE_MODULE_CLOCK_GATING_SH from a register value.
#define BG_GPU2D_MODULEPOWERMODULECONTROL_DISABLE_MODULE_CLOCK_GATING_SH(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_GPU2D_MODULEPOWERMODULECONTROL_DISABLE_MODULE_CLOCK_GATING_SH) >> BP_GPU2D_MODULEPOWERMODULECONTROL_DISABLE_MODULE_CLOCK_GATING_SH)

//! @brief Format value for bitfield GPU2D_MODULEPOWERMODULECONTROL_DISABLE_MODULE_CLOCK_GATING_SH.
#define BF_GPU2D_MODULEPOWERMODULECONTROL_DISABLE_MODULE_CLOCK_GATING_SH(v)   ((__REG_VALUE_TYPE((v), reg32_t) << BP_GPU2D_MODULEPOWERMODULECONTROL_DISABLE_MODULE_CLOCK_GATING_SH) & BM_GPU2D_MODULEPOWERMODULECONTROL_DISABLE_MODULE_CLOCK_GATING_SH)

#ifndef __LANGUAGE_ASM__
//! @brief Set the DISABLE_MODULE_CLOCK_GATING_SH field to a new value.
#define BW_GPU2D_MODULEPOWERMODULECONTROL_DISABLE_MODULE_CLOCK_GATING_SH(v)   (HW_GPU2D_MODULEPOWERMODULECONTROL_WR((HW_GPU2D_MODULEPOWERMODULECONTROL_RD() & ~BM_GPU2D_MODULEPOWERMODULECONTROL_DISABLE_MODULE_CLOCK_GATING_SH) | BF_GPU2D_MODULEPOWERMODULECONTROL_DISABLE_MODULE_CLOCK_GATING_SH(v)))
#endif

/* --- Register HW_GPU2D_MODULEPOWERMODULECONTROL, field DISABLE_MODULE_CLOCK_GATING_PE[29] (RW)
 *
 * Disables module level clock gating for PE.
 */

#define BP_GPU2D_MODULEPOWERMODULECONTROL_DISABLE_MODULE_CLOCK_GATING_PE      (29)      //!< Bit position for GPU2D_MODULEPOWERMODULECONTROL_DISABLE_MODULE_CLOCK_GATING_PE.
#define BM_GPU2D_MODULEPOWERMODULECONTROL_DISABLE_MODULE_CLOCK_GATING_PE      (0x20000000)  //!< Bit mask for GPU2D_MODULEPOWERMODULECONTROL_DISABLE_MODULE_CLOCK_GATING_PE.

//! @brief Get value of GPU2D_MODULEPOWERMODULECONTROL_DISABLE_MODULE_CLOCK_GATING_PE from a register value.
#define BG_GPU2D_MODULEPOWERMODULECONTROL_DISABLE_MODULE_CLOCK_GATING_PE(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_GPU2D_MODULEPOWERMODULECONTROL_DISABLE_MODULE_CLOCK_GATING_PE) >> BP_GPU2D_MODULEPOWERMODULECONTROL_DISABLE_MODULE_CLOCK_GATING_PE)

//! @brief Format value for bitfield GPU2D_MODULEPOWERMODULECONTROL_DISABLE_MODULE_CLOCK_GATING_PE.
#define BF_GPU2D_MODULEPOWERMODULECONTROL_DISABLE_MODULE_CLOCK_GATING_PE(v)   ((__REG_VALUE_TYPE((v), reg32_t) << BP_GPU2D_MODULEPOWERMODULECONTROL_DISABLE_MODULE_CLOCK_GATING_PE) & BM_GPU2D_MODULEPOWERMODULECONTROL_DISABLE_MODULE_CLOCK_GATING_PE)

#ifndef __LANGUAGE_ASM__
//! @brief Set the DISABLE_MODULE_CLOCK_GATING_PE field to a new value.
#define BW_GPU2D_MODULEPOWERMODULECONTROL_DISABLE_MODULE_CLOCK_GATING_PE(v)   (HW_GPU2D_MODULEPOWERMODULECONTROL_WR((HW_GPU2D_MODULEPOWERMODULECONTROL_RD() & ~BM_GPU2D_MODULEPOWERMODULECONTROL_DISABLE_MODULE_CLOCK_GATING_PE) | BF_GPU2D_MODULEPOWERMODULECONTROL_DISABLE_MODULE_CLOCK_GATING_PE(v)))
#endif

/* --- Register HW_GPU2D_MODULEPOWERMODULECONTROL, field DISABLE_MODULE_CLOCK_GATING_DE[30] (RW)
 *
 * Disables module level clock gating for DE.
 */

#define BP_GPU2D_MODULEPOWERMODULECONTROL_DISABLE_MODULE_CLOCK_GATING_DE      (30)      //!< Bit position for GPU2D_MODULEPOWERMODULECONTROL_DISABLE_MODULE_CLOCK_GATING_DE.
#define BM_GPU2D_MODULEPOWERMODULECONTROL_DISABLE_MODULE_CLOCK_GATING_DE      (0x40000000)  //!< Bit mask for GPU2D_MODULEPOWERMODULECONTROL_DISABLE_MODULE_CLOCK_GATING_DE.

//! @brief Get value of GPU2D_MODULEPOWERMODULECONTROL_DISABLE_MODULE_CLOCK_GATING_DE from a register value.
#define BG_GPU2D_MODULEPOWERMODULECONTROL_DISABLE_MODULE_CLOCK_GATING_DE(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_GPU2D_MODULEPOWERMODULECONTROL_DISABLE_MODULE_CLOCK_GATING_DE) >> BP_GPU2D_MODULEPOWERMODULECONTROL_DISABLE_MODULE_CLOCK_GATING_DE)

//! @brief Format value for bitfield GPU2D_MODULEPOWERMODULECONTROL_DISABLE_MODULE_CLOCK_GATING_DE.
#define BF_GPU2D_MODULEPOWERMODULECONTROL_DISABLE_MODULE_CLOCK_GATING_DE(v)   ((__REG_VALUE_TYPE((v), reg32_t) << BP_GPU2D_MODULEPOWERMODULECONTROL_DISABLE_MODULE_CLOCK_GATING_DE) & BM_GPU2D_MODULEPOWERMODULECONTROL_DISABLE_MODULE_CLOCK_GATING_DE)

#ifndef __LANGUAGE_ASM__
//! @brief Set the DISABLE_MODULE_CLOCK_GATING_DE field to a new value.
#define BW_GPU2D_MODULEPOWERMODULECONTROL_DISABLE_MODULE_CLOCK_GATING_DE(v)   (HW_GPU2D_MODULEPOWERMODULECONTROL_WR((HW_GPU2D_MODULEPOWERMODULECONTROL_RD() & ~BM_GPU2D_MODULEPOWERMODULECONTROL_DISABLE_MODULE_CLOCK_GATING_DE) | BF_GPU2D_MODULEPOWERMODULECONTROL_DISABLE_MODULE_CLOCK_GATING_DE(v)))
#endif

/* --- Register HW_GPU2D_MODULEPOWERMODULECONTROL, field DISABLE_MODULE_CLOCK_GATING_FE[31] (RW)
 *
 * Disables module level clock gating for FE.
 */

#define BP_GPU2D_MODULEPOWERMODULECONTROL_DISABLE_MODULE_CLOCK_GATING_FE      (31)      //!< Bit position for GPU2D_MODULEPOWERMODULECONTROL_DISABLE_MODULE_CLOCK_GATING_FE.
#define BM_GPU2D_MODULEPOWERMODULECONTROL_DISABLE_MODULE_CLOCK_GATING_FE      (0x80000000)  //!< Bit mask for GPU2D_MODULEPOWERMODULECONTROL_DISABLE_MODULE_CLOCK_GATING_FE.

//! @brief Get value of GPU2D_MODULEPOWERMODULECONTROL_DISABLE_MODULE_CLOCK_GATING_FE from a register value.
#define BG_GPU2D_MODULEPOWERMODULECONTROL_DISABLE_MODULE_CLOCK_GATING_FE(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_GPU2D_MODULEPOWERMODULECONTROL_DISABLE_MODULE_CLOCK_GATING_FE) >> BP_GPU2D_MODULEPOWERMODULECONTROL_DISABLE_MODULE_CLOCK_GATING_FE)

//! @brief Format value for bitfield GPU2D_MODULEPOWERMODULECONTROL_DISABLE_MODULE_CLOCK_GATING_FE.
#define BF_GPU2D_MODULEPOWERMODULECONTROL_DISABLE_MODULE_CLOCK_GATING_FE(v)   ((__REG_VALUE_TYPE((v), reg32_t) << BP_GPU2D_MODULEPOWERMODULECONTROL_DISABLE_MODULE_CLOCK_GATING_FE) & BM_GPU2D_MODULEPOWERMODULECONTROL_DISABLE_MODULE_CLOCK_GATING_FE)

#ifndef __LANGUAGE_ASM__
//! @brief Set the DISABLE_MODULE_CLOCK_GATING_FE field to a new value.
#define BW_GPU2D_MODULEPOWERMODULECONTROL_DISABLE_MODULE_CLOCK_GATING_FE(v)   (HW_GPU2D_MODULEPOWERMODULECONTROL_WR((HW_GPU2D_MODULEPOWERMODULECONTROL_RD() & ~BM_GPU2D_MODULEPOWERMODULECONTROL_DISABLE_MODULE_CLOCK_GATING_FE) | BF_GPU2D_MODULEPOWERMODULECONTROL_DISABLE_MODULE_CLOCK_GATING_FE(v)))
#endif

//-------------------------------------------------------------------------------------------
// HW_GPU2D_MODULEPOWERMODULESTATUS - Power Status Register
//-------------------------------------------------------------------------------------------

#ifndef __LANGUAGE_ASM__
/*!
 * @brief HW_GPU2D_MODULEPOWERMODULESTATUS - Power Status Register (RO)
 *
 * Reset value: 0x00000000
 *
 * Module level control status.
 */
typedef union _hw_gpu2d_modulepowermodulestatus
{
    reg32_t U;
    struct _hw_gpu2d_modulepowermodulestatus_bitfields
    {
        unsigned RESERVED0 : 20; //!< [19:0] Reserved
        unsigned MODULE_CLOCK_GATED_TS : 1; //!< [20] Module level clock gating is ON for TS.
        unsigned MODULE_CLOCK_GATED_FP : 1; //!< [21] Module level clock gating is ON for FP.
        unsigned MODULE_CLOCK_GATED_IM : 1; //!< [22] Module level clock gating is ON for IM.
        unsigned MODULE_CLOCK_GATED_VG : 1; //!< [23] Module level clock gating is ON for VG.
        unsigned MODULE_CLOCK_GATED_TX : 1; //!< [24] Module level clock gating is ON for TX.
        unsigned MODULE_CLOCK_GATED_RA : 1; //!< [25] Module level clock gating is ON for RA.
        unsigned MODULE_CLOCK_GATED_SE : 1; //!< [26] Module level clock gating is ON for SE.
        unsigned MODULE_CLOCK_GATED_PA : 1; //!< [27] Module level clock gating is ON for PA.
        unsigned MODULE_CLOCK_GATED_SH : 1; //!< [28] Module level clock gating is ON for SH.
        unsigned MODULE_CLOCK_GATED_PE : 1; //!< [29] Module level clock gating is ON for PE.
        unsigned MODULE_CLOCK_GATED_DE : 1; //!< [30] Module level clock gating is ON for DE.
        unsigned MODULE_CLOCK_GATED_FE : 1; //!< [31] Module level clock gating is ON for FE.
    } B;
} hw_gpu2d_modulepowermodulestatus_t;
#endif

/*
 * constants & macros for entire GPU2D_MODULEPOWERMODULESTATUS register
 */
#define HW_GPU2D_MODULEPOWERMODULESTATUS_ADDR      (REGS_GPU2D_BASE + 0x8c)

#ifndef __LANGUAGE_ASM__
#define HW_GPU2D_MODULEPOWERMODULESTATUS           (*(volatile hw_gpu2d_modulepowermodulestatus_t *) HW_GPU2D_MODULEPOWERMODULESTATUS_ADDR)
#define HW_GPU2D_MODULEPOWERMODULESTATUS_RD()      (HW_GPU2D_MODULEPOWERMODULESTATUS.U)
#endif

/*
 * constants & macros for individual GPU2D_MODULEPOWERMODULESTATUS bitfields
 */

/* --- Register HW_GPU2D_MODULEPOWERMODULESTATUS, field MODULE_CLOCK_GATED_TS[20] (RO)
 *
 * Module level clock gating is ON for TS.
 */

#define BP_GPU2D_MODULEPOWERMODULESTATUS_MODULE_CLOCK_GATED_TS      (20)      //!< Bit position for GPU2D_MODULEPOWERMODULESTATUS_MODULE_CLOCK_GATED_TS.
#define BM_GPU2D_MODULEPOWERMODULESTATUS_MODULE_CLOCK_GATED_TS      (0x00100000)  //!< Bit mask for GPU2D_MODULEPOWERMODULESTATUS_MODULE_CLOCK_GATED_TS.

//! @brief Get value of GPU2D_MODULEPOWERMODULESTATUS_MODULE_CLOCK_GATED_TS from a register value.
#define BG_GPU2D_MODULEPOWERMODULESTATUS_MODULE_CLOCK_GATED_TS(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_GPU2D_MODULEPOWERMODULESTATUS_MODULE_CLOCK_GATED_TS) >> BP_GPU2D_MODULEPOWERMODULESTATUS_MODULE_CLOCK_GATED_TS)

/* --- Register HW_GPU2D_MODULEPOWERMODULESTATUS, field MODULE_CLOCK_GATED_FP[21] (RO)
 *
 * Module level clock gating is ON for FP.
 */

#define BP_GPU2D_MODULEPOWERMODULESTATUS_MODULE_CLOCK_GATED_FP      (21)      //!< Bit position for GPU2D_MODULEPOWERMODULESTATUS_MODULE_CLOCK_GATED_FP.
#define BM_GPU2D_MODULEPOWERMODULESTATUS_MODULE_CLOCK_GATED_FP      (0x00200000)  //!< Bit mask for GPU2D_MODULEPOWERMODULESTATUS_MODULE_CLOCK_GATED_FP.

//! @brief Get value of GPU2D_MODULEPOWERMODULESTATUS_MODULE_CLOCK_GATED_FP from a register value.
#define BG_GPU2D_MODULEPOWERMODULESTATUS_MODULE_CLOCK_GATED_FP(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_GPU2D_MODULEPOWERMODULESTATUS_MODULE_CLOCK_GATED_FP) >> BP_GPU2D_MODULEPOWERMODULESTATUS_MODULE_CLOCK_GATED_FP)

/* --- Register HW_GPU2D_MODULEPOWERMODULESTATUS, field MODULE_CLOCK_GATED_IM[22] (RO)
 *
 * Module level clock gating is ON for IM.
 */

#define BP_GPU2D_MODULEPOWERMODULESTATUS_MODULE_CLOCK_GATED_IM      (22)      //!< Bit position for GPU2D_MODULEPOWERMODULESTATUS_MODULE_CLOCK_GATED_IM.
#define BM_GPU2D_MODULEPOWERMODULESTATUS_MODULE_CLOCK_GATED_IM      (0x00400000)  //!< Bit mask for GPU2D_MODULEPOWERMODULESTATUS_MODULE_CLOCK_GATED_IM.

//! @brief Get value of GPU2D_MODULEPOWERMODULESTATUS_MODULE_CLOCK_GATED_IM from a register value.
#define BG_GPU2D_MODULEPOWERMODULESTATUS_MODULE_CLOCK_GATED_IM(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_GPU2D_MODULEPOWERMODULESTATUS_MODULE_CLOCK_GATED_IM) >> BP_GPU2D_MODULEPOWERMODULESTATUS_MODULE_CLOCK_GATED_IM)

/* --- Register HW_GPU2D_MODULEPOWERMODULESTATUS, field MODULE_CLOCK_GATED_VG[23] (RO)
 *
 * Module level clock gating is ON for VG.
 */

#define BP_GPU2D_MODULEPOWERMODULESTATUS_MODULE_CLOCK_GATED_VG      (23)      //!< Bit position for GPU2D_MODULEPOWERMODULESTATUS_MODULE_CLOCK_GATED_VG.
#define BM_GPU2D_MODULEPOWERMODULESTATUS_MODULE_CLOCK_GATED_VG      (0x00800000)  //!< Bit mask for GPU2D_MODULEPOWERMODULESTATUS_MODULE_CLOCK_GATED_VG.

//! @brief Get value of GPU2D_MODULEPOWERMODULESTATUS_MODULE_CLOCK_GATED_VG from a register value.
#define BG_GPU2D_MODULEPOWERMODULESTATUS_MODULE_CLOCK_GATED_VG(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_GPU2D_MODULEPOWERMODULESTATUS_MODULE_CLOCK_GATED_VG) >> BP_GPU2D_MODULEPOWERMODULESTATUS_MODULE_CLOCK_GATED_VG)

/* --- Register HW_GPU2D_MODULEPOWERMODULESTATUS, field MODULE_CLOCK_GATED_TX[24] (RO)
 *
 * Module level clock gating is ON for TX.
 */

#define BP_GPU2D_MODULEPOWERMODULESTATUS_MODULE_CLOCK_GATED_TX      (24)      //!< Bit position for GPU2D_MODULEPOWERMODULESTATUS_MODULE_CLOCK_GATED_TX.
#define BM_GPU2D_MODULEPOWERMODULESTATUS_MODULE_CLOCK_GATED_TX      (0x01000000)  //!< Bit mask for GPU2D_MODULEPOWERMODULESTATUS_MODULE_CLOCK_GATED_TX.

//! @brief Get value of GPU2D_MODULEPOWERMODULESTATUS_MODULE_CLOCK_GATED_TX from a register value.
#define BG_GPU2D_MODULEPOWERMODULESTATUS_MODULE_CLOCK_GATED_TX(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_GPU2D_MODULEPOWERMODULESTATUS_MODULE_CLOCK_GATED_TX) >> BP_GPU2D_MODULEPOWERMODULESTATUS_MODULE_CLOCK_GATED_TX)

/* --- Register HW_GPU2D_MODULEPOWERMODULESTATUS, field MODULE_CLOCK_GATED_RA[25] (RO)
 *
 * Module level clock gating is ON for RA.
 */

#define BP_GPU2D_MODULEPOWERMODULESTATUS_MODULE_CLOCK_GATED_RA      (25)      //!< Bit position for GPU2D_MODULEPOWERMODULESTATUS_MODULE_CLOCK_GATED_RA.
#define BM_GPU2D_MODULEPOWERMODULESTATUS_MODULE_CLOCK_GATED_RA      (0x02000000)  //!< Bit mask for GPU2D_MODULEPOWERMODULESTATUS_MODULE_CLOCK_GATED_RA.

//! @brief Get value of GPU2D_MODULEPOWERMODULESTATUS_MODULE_CLOCK_GATED_RA from a register value.
#define BG_GPU2D_MODULEPOWERMODULESTATUS_MODULE_CLOCK_GATED_RA(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_GPU2D_MODULEPOWERMODULESTATUS_MODULE_CLOCK_GATED_RA) >> BP_GPU2D_MODULEPOWERMODULESTATUS_MODULE_CLOCK_GATED_RA)

/* --- Register HW_GPU2D_MODULEPOWERMODULESTATUS, field MODULE_CLOCK_GATED_SE[26] (RO)
 *
 * Module level clock gating is ON for SE.
 */

#define BP_GPU2D_MODULEPOWERMODULESTATUS_MODULE_CLOCK_GATED_SE      (26)      //!< Bit position for GPU2D_MODULEPOWERMODULESTATUS_MODULE_CLOCK_GATED_SE.
#define BM_GPU2D_MODULEPOWERMODULESTATUS_MODULE_CLOCK_GATED_SE      (0x04000000)  //!< Bit mask for GPU2D_MODULEPOWERMODULESTATUS_MODULE_CLOCK_GATED_SE.

//! @brief Get value of GPU2D_MODULEPOWERMODULESTATUS_MODULE_CLOCK_GATED_SE from a register value.
#define BG_GPU2D_MODULEPOWERMODULESTATUS_MODULE_CLOCK_GATED_SE(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_GPU2D_MODULEPOWERMODULESTATUS_MODULE_CLOCK_GATED_SE) >> BP_GPU2D_MODULEPOWERMODULESTATUS_MODULE_CLOCK_GATED_SE)

/* --- Register HW_GPU2D_MODULEPOWERMODULESTATUS, field MODULE_CLOCK_GATED_PA[27] (RO)
 *
 * Module level clock gating is ON for PA.
 */

#define BP_GPU2D_MODULEPOWERMODULESTATUS_MODULE_CLOCK_GATED_PA      (27)      //!< Bit position for GPU2D_MODULEPOWERMODULESTATUS_MODULE_CLOCK_GATED_PA.
#define BM_GPU2D_MODULEPOWERMODULESTATUS_MODULE_CLOCK_GATED_PA      (0x08000000)  //!< Bit mask for GPU2D_MODULEPOWERMODULESTATUS_MODULE_CLOCK_GATED_PA.

//! @brief Get value of GPU2D_MODULEPOWERMODULESTATUS_MODULE_CLOCK_GATED_PA from a register value.
#define BG_GPU2D_MODULEPOWERMODULESTATUS_MODULE_CLOCK_GATED_PA(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_GPU2D_MODULEPOWERMODULESTATUS_MODULE_CLOCK_GATED_PA) >> BP_GPU2D_MODULEPOWERMODULESTATUS_MODULE_CLOCK_GATED_PA)

/* --- Register HW_GPU2D_MODULEPOWERMODULESTATUS, field MODULE_CLOCK_GATED_SH[28] (RO)
 *
 * Module level clock gating is ON for SH.
 */

#define BP_GPU2D_MODULEPOWERMODULESTATUS_MODULE_CLOCK_GATED_SH      (28)      //!< Bit position for GPU2D_MODULEPOWERMODULESTATUS_MODULE_CLOCK_GATED_SH.
#define BM_GPU2D_MODULEPOWERMODULESTATUS_MODULE_CLOCK_GATED_SH      (0x10000000)  //!< Bit mask for GPU2D_MODULEPOWERMODULESTATUS_MODULE_CLOCK_GATED_SH.

//! @brief Get value of GPU2D_MODULEPOWERMODULESTATUS_MODULE_CLOCK_GATED_SH from a register value.
#define BG_GPU2D_MODULEPOWERMODULESTATUS_MODULE_CLOCK_GATED_SH(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_GPU2D_MODULEPOWERMODULESTATUS_MODULE_CLOCK_GATED_SH) >> BP_GPU2D_MODULEPOWERMODULESTATUS_MODULE_CLOCK_GATED_SH)

/* --- Register HW_GPU2D_MODULEPOWERMODULESTATUS, field MODULE_CLOCK_GATED_PE[29] (RO)
 *
 * Module level clock gating is ON for PE.
 */

#define BP_GPU2D_MODULEPOWERMODULESTATUS_MODULE_CLOCK_GATED_PE      (29)      //!< Bit position for GPU2D_MODULEPOWERMODULESTATUS_MODULE_CLOCK_GATED_PE.
#define BM_GPU2D_MODULEPOWERMODULESTATUS_MODULE_CLOCK_GATED_PE      (0x20000000)  //!< Bit mask for GPU2D_MODULEPOWERMODULESTATUS_MODULE_CLOCK_GATED_PE.

//! @brief Get value of GPU2D_MODULEPOWERMODULESTATUS_MODULE_CLOCK_GATED_PE from a register value.
#define BG_GPU2D_MODULEPOWERMODULESTATUS_MODULE_CLOCK_GATED_PE(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_GPU2D_MODULEPOWERMODULESTATUS_MODULE_CLOCK_GATED_PE) >> BP_GPU2D_MODULEPOWERMODULESTATUS_MODULE_CLOCK_GATED_PE)

/* --- Register HW_GPU2D_MODULEPOWERMODULESTATUS, field MODULE_CLOCK_GATED_DE[30] (RO)
 *
 * Module level clock gating is ON for DE.
 */

#define BP_GPU2D_MODULEPOWERMODULESTATUS_MODULE_CLOCK_GATED_DE      (30)      //!< Bit position for GPU2D_MODULEPOWERMODULESTATUS_MODULE_CLOCK_GATED_DE.
#define BM_GPU2D_MODULEPOWERMODULESTATUS_MODULE_CLOCK_GATED_DE      (0x40000000)  //!< Bit mask for GPU2D_MODULEPOWERMODULESTATUS_MODULE_CLOCK_GATED_DE.

//! @brief Get value of GPU2D_MODULEPOWERMODULESTATUS_MODULE_CLOCK_GATED_DE from a register value.
#define BG_GPU2D_MODULEPOWERMODULESTATUS_MODULE_CLOCK_GATED_DE(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_GPU2D_MODULEPOWERMODULESTATUS_MODULE_CLOCK_GATED_DE) >> BP_GPU2D_MODULEPOWERMODULESTATUS_MODULE_CLOCK_GATED_DE)

/* --- Register HW_GPU2D_MODULEPOWERMODULESTATUS, field MODULE_CLOCK_GATED_FE[31] (RO)
 *
 * Module level clock gating is ON for FE.
 */

#define BP_GPU2D_MODULEPOWERMODULESTATUS_MODULE_CLOCK_GATED_FE      (31)      //!< Bit position for GPU2D_MODULEPOWERMODULESTATUS_MODULE_CLOCK_GATED_FE.
#define BM_GPU2D_MODULEPOWERMODULESTATUS_MODULE_CLOCK_GATED_FE      (0x80000000)  //!< Bit mask for GPU2D_MODULEPOWERMODULESTATUS_MODULE_CLOCK_GATED_FE.

//! @brief Get value of GPU2D_MODULEPOWERMODULESTATUS_MODULE_CLOCK_GATED_FE from a register value.
#define BG_GPU2D_MODULEPOWERMODULESTATUS_MODULE_CLOCK_GATED_FE(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_GPU2D_MODULEPOWERMODULESTATUS_MODULE_CLOCK_GATED_FE) >> BP_GPU2D_MODULEPOWERMODULESTATUS_MODULE_CLOCK_GATED_FE)


/*!
 * @brief All GPU2D module registers.
 */
#ifndef __LANGUAGE_ASM__
#pragma pack(1)
typedef struct _hw_gpu2d
{
    volatile hw_gpu2d_aqhiclockcontrol_t AQHICLOCKCONTROL; //!< Clock Control Register
    volatile hw_gpu2d_aqhiidle_t AQHIIDLE; //!< Idle Status Register
    volatile hw_gpu2d_aqaxiconfig_t AQAXICONFIG; //!< AXI Configuration Register
    volatile hw_gpu2d_aqaxistatus_t AQAXISTATUS; //!< AXI Status Register
    volatile hw_gpu2d_aqintracknowledge_t AQINTRACKNOWLEDGE; //!< Interrupt Acknowledge Register
    volatile hw_gpu2d_aqintrenbl_t AQINTRENBL; //!< Interrupt Enable Register
    volatile hw_gpu2d_aqident_t AQIDENT; //!< Identification Register
    volatile hw_gpu2d_features_t FEATURES; //!< Features Register
    volatile hw_gpu2d_chipid_t CHIPID; //!< Chip Identification Register
    volatile hw_gpu2d_chiprev_t CHIPREV; //!< Chip Revision Register
    volatile hw_gpu2d_chipdate_t CHIPDATE; //!< Chip Release Date Register
    volatile hw_gpu2d_chiptime_t CHIPTIME; //!< Chip Release Time Register
    volatile hw_gpu2d_chipcustomer_t CHIPCUSTOMER; //!< Chip Customer Register
    volatile hw_gpu2d_minorfeatures0_t MINORFEATURES0; //!< Minor Features Register 0
    volatile hw_gpu2d_cachecontrol_t CACHECONTROL; //!< Cache Control Register
    volatile hw_gpu2d_resetmemcounters_t RESETMEMCOUNTERS; //!< Reset Mem Counters Register
    volatile hw_gpu2d_totalreads_t TOTALREADS; //!< Read Count Register
    volatile hw_gpu2d_totalwrites_t TOTALWRITES; //!< Write Count Register
    volatile hw_gpu2d_chipspecs_t CHIPSPECS; //!< Chip Specification Register
    volatile hw_gpu2d_totalwritebursts_t TOTALWRITEBURSTS; //!< Write Data Count Register
    volatile hw_gpu2d_totalwritereqs_t TOTALWRITEREQS; //!< Write REQ Count Register
    volatile hw_gpu2d_totalwritelasts_t TOTALWRITELASTS; //!< Total WLAST Count Register
    volatile hw_gpu2d_totalreadbursts_t TOTALREADBURSTS; //!< Total Read Data Count Register
    volatile hw_gpu2d_totalreadreqs_t TOTALREADREQS; //!< Total Read REQ Count Register
    volatile hw_gpu2d_totalreadlasts_t TOTALREADLASTS; //!< Total RLAST Count Register
    volatile hw_gpu2d_gpout0_t GPOUT0; //!< General Purpose Register 0
    volatile hw_gpu2d_gpout1_t GPOUT1; //!< General Purpose Register 1
    volatile hw_gpu2d_gpout2_t GPOUT2; //!< General Purpose Register 2
    volatile hw_gpu2d_axicontrol_t AXICONTROL; //!< AXI Control Register
    volatile hw_gpu2d_minorfeatures1_t MINORFEATURES1; //!< Minor Features Register 1
    volatile hw_gpu2d_totalcycles_t TOTALCYCLES; //!< Total Cycle Counter Register
    volatile hw_gpu2d_totalidlecyles_t TOTALIDLECYLES; //!< Total Idle Cycle Register
    volatile hw_gpu2d_chipspecs2_t CHIPSPECS2; //!< Chip Specification Register
    volatile hw_gpu2d_modulepowercontrols_t MODULEPOWERCONTROLS; //!< Power Control Register
    volatile hw_gpu2d_modulepowermodulecontrol_t MODULEPOWERMODULECONTROL; //!< Power Level Register
    volatile hw_gpu2d_modulepowermodulestatus_t MODULEPOWERMODULESTATUS; //!< Power Status Register
} hw_gpu2d_t;
#pragma pack()

//! @brief Macro to access all GPU2D registers.
//! @return Reference (not a pointer) to the registers struct. To get a pointer to the struct,
//!     use the '&' operator, like <code>&HW_GPU2D(0)</code>.
#define HW_GPU2D     (*(volatile hw_gpu2d_t *) REGS_GPU2D_BASE)

#endif


#endif // __HW_GPU2D_REGISTERS_H__