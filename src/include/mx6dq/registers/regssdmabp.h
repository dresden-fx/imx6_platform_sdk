/*
 * Copyright (C) 2012, Freescale Semiconductor, Inc. All Rights Reserved
 * THIS SOURCE CODE IS CONFIDENTIAL AND PROPRIETARY AND MAY NOT
 * BE USED OR DISTRIBUTED WITHOUT THE WRITTEN PERMISSION OF
 * Freescale Semiconductor, Inc.
 */

#ifndef _SDMABP_H
#define _SDMABP_H

#include "regs.h"

/*
 * i.MX6DQ SDMABP registers defined in this header file.
 *
 * - HW_SDMABP_DC0PTR - Channel 0 Pointer
 * - HW_SDMABP_INTR - Channel Interrupts
 * - HW_SDMABP_STOP_STAT - Channel Stop/Channel Status
 * - HW_SDMABP_DSTART - Channel Start
 * - HW_SDMABP_EVTERR - DMA Request Error Register
 * - HW_SDMABP_INTRMASK - Channel DSP Interrupt Mask
 * - HW_SDMABP_EVTERRDBG - DMA Request Error Register
 *
 * hw_sdmabp_t - Struct containing all module registers.
 */

//! @name Module base addresses
//@{
#ifndef REGS_SDMABP_BASE
#define REGS_SDMABP_BASE (0x020ec000) //!< Base address for SDMABP.
#endif
//@}

#ifndef __LANGUAGE_ASM__
/*!
 * @brief HW_SDMABP_DC0PTR - Channel 0 Pointer (RW)
 *
 * Reset value: 0x00000000
 *

 */
typedef union _hw_sdmabp_dc0ptr
{
    reg32_t U;
    struct _hw_sdmabp_dc0ptr_bitfields
    {
        unsigned DC0PTR : 32; //!< [31:0] Channel 0 Pointer contains the 32-bit address, in BP memory, of the array of channel control blocks starting with the one for channel 0 (the control channel). This register should be initialized by the BP before it enables a channel (for example, channel 0). See the API document SDMA Scripts User Manual for the use of this register. The BP has a read/write access and the SDMA has a read-only access.
    } B;
} hw_sdmabp_dc0ptr_t;
#endif

/*
 * constants & macros for entire SDMABP_DC0PTR register
 */
#define HW_SDMABP_DC0PTR_ADDR      (REGS_SDMABP_BASE + 0x0)

#ifndef __LANGUAGE_ASM__
#define HW_SDMABP_DC0PTR           (*(volatile hw_sdmabp_dc0ptr_t *) HW_SDMABP_DC0PTR_ADDR)
#define HW_SDMABP_DC0PTR_RD()      (HW_SDMABP_DC0PTR.U)
#define HW_SDMABP_DC0PTR_WR(v)     (HW_SDMABP_DC0PTR.U = (v))
#define HW_SDMABP_DC0PTR_SET(v)    (HW_SDMABP_DC0PTR_WR(HW_SDMABP_DC0PTR_RD() |  (v)))
#define HW_SDMABP_DC0PTR_CLR(v)    (HW_SDMABP_DC0PTR_WR(HW_SDMABP_DC0PTR_RD() & ~(v)))
#define HW_SDMABP_DC0PTR_TOG(v)    (HW_SDMABP_DC0PTR_WR(HW_SDMABP_DC0PTR_RD() ^  (v)))
#endif

/*
 * constants & macros for individual SDMABP_DC0PTR bitfields
 */

/* --- Register HW_SDMABP_DC0PTR, field DC0PTR[31:0] (RW)
 *
 * Channel 0 Pointer contains the 32-bit address, in BP memory, of the array of channel control
 * blocks starting with the one for channel 0 (the control channel). This register should be
 * initialized by the BP before it enables a channel (for example, channel 0). See the API document
 * SDMA Scripts User Manual for the use of this register. The BP has a read/write access and the
 * SDMA has a read-only access.
 */

#define BP_SDMABP_DC0PTR_DC0PTR      (0)      //!< Bit position for SDMABP_DC0PTR_DC0PTR.
#define BM_SDMABP_DC0PTR_DC0PTR      (0xffffffff)  //!< Bit mask for SDMABP_DC0PTR_DC0PTR.

//! @brief Get value of SDMABP_DC0PTR_DC0PTR from a register value.
#define BG_SDMABP_DC0PTR_DC0PTR(r)   (((r) & BM_SDMABP_DC0PTR_DC0PTR) >> BP_SDMABP_DC0PTR_DC0PTR)

#ifndef __LANGUAGE_ASM__
//! @brief Format value for bitfield SDMABP_DC0PTR_DC0PTR.
#define BF_SDMABP_DC0PTR_DC0PTR(v)   ((((reg32_t) v) << BP_SDMABP_DC0PTR_DC0PTR) & BM_SDMABP_DC0PTR_DC0PTR)
#else
//! @brief Format value for bitfield SDMABP_DC0PTR_DC0PTR.
#define BF_SDMABP_DC0PTR_DC0PTR(v)   (((v) << BP_SDMABP_DC0PTR_DC0PTR) & BM_SDMABP_DC0PTR_DC0PTR)
#endif

#ifndef __LANGUAGE_ASM__
//! @brief Set the DC0PTR field to a new value.
#define BW_SDMABP_DC0PTR_DC0PTR(v)   (HW_SDMABP_DC0PTR_WR((HW_SDMABP_DC0PTR_RD() & ~BM_SDMABP_DC0PTR_DC0PTR) | BF_SDMABP_DC0PTR_DC0PTR(v)))
#endif

#ifndef __LANGUAGE_ASM__
/*!
 * @brief HW_SDMABP_INTR - Channel Interrupts (W1C)
 *
 * Reset value: 0x00000000
 *

 */
typedef union _hw_sdmabp_intr
{
    reg32_t U;
    struct _hw_sdmabp_intr_bitfields
    {
        unsigned DI : 32; //!< [31:0] The BP Interrupts register contains the 32 DI[i] bits. If any bit is set, it will cause an interrupt to the BP. This register is a "write-ones" register to the BP. When the BP sets a bit in this register, the corresponding DI[i] bit is cleared. The interrupt service routine should clear individual channel bits when their interrupts are serviced; failure to do so will cause continuous interrupts. The SDMA is responsible for setting the DI[i] bit corresponding to the current channel when the corresponding done instruction is executed.
    } B;
} hw_sdmabp_intr_t;
#endif

/*
 * constants & macros for entire SDMABP_INTR register
 */
#define HW_SDMABP_INTR_ADDR      (REGS_SDMABP_BASE + 0x4)

#ifndef __LANGUAGE_ASM__
#define HW_SDMABP_INTR           (*(volatile hw_sdmabp_intr_t *) HW_SDMABP_INTR_ADDR)
#define HW_SDMABP_INTR_RD()      (HW_SDMABP_INTR.U)
#define HW_SDMABP_INTR_WR(v)     (HW_SDMABP_INTR.U = (v))
#define HW_SDMABP_INTR_SET(v)    (HW_SDMABP_INTR_WR(HW_SDMABP_INTR_RD() |  (v)))
#define HW_SDMABP_INTR_CLR(v)    (HW_SDMABP_INTR_WR(HW_SDMABP_INTR_RD() & ~(v)))
#define HW_SDMABP_INTR_TOG(v)    (HW_SDMABP_INTR_WR(HW_SDMABP_INTR_RD() ^  (v)))
#endif

/*
 * constants & macros for individual SDMABP_INTR bitfields
 */

/* --- Register HW_SDMABP_INTR, field DI[31:0] (W1C)
 *
 * The BP Interrupts register contains the 32 DI[i] bits. If any bit is set, it will cause an
 * interrupt to the BP. This register is a "write-ones" register to the BP. When the BP sets a bit
 * in this register, the corresponding DI[i] bit is cleared. The interrupt service routine should
 * clear individual channel bits when their interrupts are serviced; failure to do so will cause
 * continuous interrupts. The SDMA is responsible for setting the DI[i] bit corresponding to the
 * current channel when the corresponding done instruction is executed.
 */

#define BP_SDMABP_INTR_DI      (0)      //!< Bit position for SDMABP_INTR_DI.
#define BM_SDMABP_INTR_DI      (0xffffffff)  //!< Bit mask for SDMABP_INTR_DI.

//! @brief Get value of SDMABP_INTR_DI from a register value.
#define BG_SDMABP_INTR_DI(r)   (((r) & BM_SDMABP_INTR_DI) >> BP_SDMABP_INTR_DI)

#ifndef __LANGUAGE_ASM__
//! @brief Format value for bitfield SDMABP_INTR_DI.
#define BF_SDMABP_INTR_DI(v)   ((((reg32_t) v) << BP_SDMABP_INTR_DI) & BM_SDMABP_INTR_DI)
#else
//! @brief Format value for bitfield SDMABP_INTR_DI.
#define BF_SDMABP_INTR_DI(v)   (((v) << BP_SDMABP_INTR_DI) & BM_SDMABP_INTR_DI)
#endif

#ifndef __LANGUAGE_ASM__
//! @brief Set the DI field to a new value.
#define BW_SDMABP_INTR_DI(v)   (HW_SDMABP_INTR_WR((HW_SDMABP_INTR_RD() & ~BM_SDMABP_INTR_DI) | BF_SDMABP_INTR_DI(v)))
#endif

#ifndef __LANGUAGE_ASM__
/*!
 * @brief HW_SDMABP_STOP_STAT - Channel Stop/Channel Status (RW)
 *
 * Reset value: 0x00000000
 *

 */
typedef union _hw_sdmabp_stop_stat
{
    reg32_t U;
    struct _hw_sdmabp_stop_stat_bitfields
    {
        unsigned DE : 32; //!< [31:0] This 32-bit register gives access to the BP (DSP) Enable bits, DE. There is one bit for every channel. This register is a "write-ones" register to the BP. When the BP writes 1 in bit i of this register, it clears the DE[i] and DSTART[i] bits. Reading this register yields the current state of the DE[i] bits.
    } B;
} hw_sdmabp_stop_stat_t;
#endif

/*
 * constants & macros for entire SDMABP_STOP_STAT register
 */
#define HW_SDMABP_STOP_STAT_ADDR      (REGS_SDMABP_BASE + 0x8)

#ifndef __LANGUAGE_ASM__
#define HW_SDMABP_STOP_STAT           (*(volatile hw_sdmabp_stop_stat_t *) HW_SDMABP_STOP_STAT_ADDR)
#define HW_SDMABP_STOP_STAT_RD()      (HW_SDMABP_STOP_STAT.U)
#define HW_SDMABP_STOP_STAT_WR(v)     (HW_SDMABP_STOP_STAT.U = (v))
#define HW_SDMABP_STOP_STAT_SET(v)    (HW_SDMABP_STOP_STAT_WR(HW_SDMABP_STOP_STAT_RD() |  (v)))
#define HW_SDMABP_STOP_STAT_CLR(v)    (HW_SDMABP_STOP_STAT_WR(HW_SDMABP_STOP_STAT_RD() & ~(v)))
#define HW_SDMABP_STOP_STAT_TOG(v)    (HW_SDMABP_STOP_STAT_WR(HW_SDMABP_STOP_STAT_RD() ^  (v)))
#endif

/*
 * constants & macros for individual SDMABP_STOP_STAT bitfields
 */

/* --- Register HW_SDMABP_STOP_STAT, field DE[31:0] (W1C)
 *
 * This 32-bit register gives access to the BP (DSP) Enable bits, DE. There is one bit for every
 * channel. This register is a "write-ones" register to the BP. When the BP writes 1 in bit i of
 * this register, it clears the DE[i] and DSTART[i] bits. Reading this register yields the current
 * state of the DE[i] bits.
 */

#define BP_SDMABP_STOP_STAT_DE      (0)      //!< Bit position for SDMABP_STOP_STAT_DE.
#define BM_SDMABP_STOP_STAT_DE      (0xffffffff)  //!< Bit mask for SDMABP_STOP_STAT_DE.

//! @brief Get value of SDMABP_STOP_STAT_DE from a register value.
#define BG_SDMABP_STOP_STAT_DE(r)   (((r) & BM_SDMABP_STOP_STAT_DE) >> BP_SDMABP_STOP_STAT_DE)

#ifndef __LANGUAGE_ASM__
//! @brief Format value for bitfield SDMABP_STOP_STAT_DE.
#define BF_SDMABP_STOP_STAT_DE(v)   ((((reg32_t) v) << BP_SDMABP_STOP_STAT_DE) & BM_SDMABP_STOP_STAT_DE)
#else
//! @brief Format value for bitfield SDMABP_STOP_STAT_DE.
#define BF_SDMABP_STOP_STAT_DE(v)   (((v) << BP_SDMABP_STOP_STAT_DE) & BM_SDMABP_STOP_STAT_DE)
#endif

#ifndef __LANGUAGE_ASM__
//! @brief Set the DE field to a new value.
#define BW_SDMABP_STOP_STAT_DE(v)   (HW_SDMABP_STOP_STAT_WR((HW_SDMABP_STOP_STAT_RD() & ~BM_SDMABP_STOP_STAT_DE) | BF_SDMABP_STOP_STAT_DE(v)))
#endif

#ifndef __LANGUAGE_ASM__
/*!
 * @brief HW_SDMABP_DSTART - Channel Start (RO)
 *
 * Reset value: 0x00000000
 *

 */
typedef union _hw_sdmabp_dstart
{
    reg32_t U;
    struct _hw_sdmabp_dstart_bitfields
    {
        unsigned DSTART : 32; //!< [31:0] The DSTART/DE registers are 32 bits wide with one bit for every channel. When a bit is written to 1, it enables the corresponding channel. Two physical registers are accessed with that address (DSTART and DE), which enables the BP to trigger a channel a second time before the first trigger was processed. This register is a "write-ones" register to the BP. Neither DSTART[i] bit can be set while the corresponding DE[i] bit is cleared. When the BP tries to set the DSTART[i] bit by writing a one (if the corresponding DE[i] bit is clear), the bit in the DSTART[i] register will remain cleared and the DE[i] bit will be set. If the corresponding DE[i] bit was already set, the DSTART[i] bit will be set. The next time the SDMA channel i attempts to clear the DE[i] bit by means of a done instruction, the bit in the DSTART[i] register will be cleared and the DE[i] bit will take the old value of the DSTART[i] bit. Reading this register yields the current state of the DSTART[i] bits. This mechanism enables the BP to pipeline two DSTART commands per channel.
    } B;
} hw_sdmabp_dstart_t;
#endif

/*
 * constants & macros for entire SDMABP_DSTART register
 */
#define HW_SDMABP_DSTART_ADDR      (REGS_SDMABP_BASE + 0xc)

#ifndef __LANGUAGE_ASM__
#define HW_SDMABP_DSTART           (*(volatile hw_sdmabp_dstart_t *) HW_SDMABP_DSTART_ADDR)
#define HW_SDMABP_DSTART_RD()      (HW_SDMABP_DSTART.U)
#endif

/*
 * constants & macros for individual SDMABP_DSTART bitfields
 */

/* --- Register HW_SDMABP_DSTART, field DSTART[31:0] (RO)
 *
 * The DSTART/DE registers are 32 bits wide with one bit for every channel. When a bit is written to
 * 1, it enables the corresponding channel. Two physical registers are accessed with that address
 * (DSTART and DE), which enables the BP to trigger a channel a second time before the first trigger
 * was processed. This register is a "write-ones" register to the BP. Neither DSTART[i] bit can be
 * set while the corresponding DE[i] bit is cleared. When the BP tries to set the DSTART[i] bit by
 * writing a one (if the corresponding DE[i] bit is clear), the bit in the DSTART[i] register will
 * remain cleared and the DE[i] bit will be set. If the corresponding DE[i] bit was already set, the
 * DSTART[i] bit will be set. The next time the SDMA channel i attempts to clear the DE[i] bit by
 * means of a done instruction, the bit in the DSTART[i] register will be cleared and the DE[i] bit
 * will take the old value of the DSTART[i] bit. Reading this register yields the current state of
 * the DSTART[i] bits. This mechanism enables the BP to pipeline two DSTART commands per channel.
 */

#define BP_SDMABP_DSTART_DSTART      (0)      //!< Bit position for SDMABP_DSTART_DSTART.
#define BM_SDMABP_DSTART_DSTART      (0xffffffff)  //!< Bit mask for SDMABP_DSTART_DSTART.

//! @brief Get value of SDMABP_DSTART_DSTART from a register value.
#define BG_SDMABP_DSTART_DSTART(r)   (((r) & BM_SDMABP_DSTART_DSTART) >> BP_SDMABP_DSTART_DSTART)

#ifndef __LANGUAGE_ASM__
/*!
 * @brief HW_SDMABP_EVTERR - DMA Request Error Register (RO)
 *
 * Reset value: 0x00000000
 *

 */
typedef union _hw_sdmabp_evterr
{
    reg32_t U;
    struct _hw_sdmabp_evterr_bitfields
    {
        unsigned CHNERR : 32; //!< [31:0] This register is used by the SDMA to warn the BP when an incoming DMA request was detected; it then triggers a channel that is already pending or being serviced, which may mean there is an overflow of data for that channel. An interrupt is sent to the BP if the corresponding channel bit is set in the INTRMASK register. This is a "write-ones" register for the scheduler. It is only able to set the flags. The flags are cleared when the register is read by the BP or during an SDMA reset. The CHNERR[i] bit is set when a DMA request that triggers channel i is received through the corresponding input pins and the EP[i] bit is already set. The EVTERR[i] bit is unaffected if the BP tries to set the EP[i] bit when that EP[i] bit is already set.
    } B;
} hw_sdmabp_evterr_t;
#endif

/*
 * constants & macros for entire SDMABP_EVTERR register
 */
#define HW_SDMABP_EVTERR_ADDR      (REGS_SDMABP_BASE + 0x28)

#ifndef __LANGUAGE_ASM__
#define HW_SDMABP_EVTERR           (*(volatile hw_sdmabp_evterr_t *) HW_SDMABP_EVTERR_ADDR)
#define HW_SDMABP_EVTERR_RD()      (HW_SDMABP_EVTERR.U)
#endif

/*
 * constants & macros for individual SDMABP_EVTERR bitfields
 */

/* --- Register HW_SDMABP_EVTERR, field CHNERR[31:0] (RO)
 *
 * This register is used by the SDMA to warn the BP when an incoming DMA request was detected; it
 * then triggers a channel that is already pending or being serviced, which may mean there is an
 * overflow of data for that channel. An interrupt is sent to the BP if the corresponding channel
 * bit is set in the INTRMASK register. This is a "write-ones" register for the scheduler. It is
 * only able to set the flags. The flags are cleared when the register is read by the BP or during
 * an SDMA reset. The CHNERR[i] bit is set when a DMA request that triggers channel i is received
 * through the corresponding input pins and the EP[i] bit is already set. The EVTERR[i] bit is
 * unaffected if the BP tries to set the EP[i] bit when that EP[i] bit is already set.
 */

#define BP_SDMABP_EVTERR_CHNERR      (0)      //!< Bit position for SDMABP_EVTERR_CHNERR.
#define BM_SDMABP_EVTERR_CHNERR      (0xffffffff)  //!< Bit mask for SDMABP_EVTERR_CHNERR.

//! @brief Get value of SDMABP_EVTERR_CHNERR from a register value.
#define BG_SDMABP_EVTERR_CHNERR(r)   (((r) & BM_SDMABP_EVTERR_CHNERR) >> BP_SDMABP_EVTERR_CHNERR)

#ifndef __LANGUAGE_ASM__
/*!
 * @brief HW_SDMABP_INTRMASK - Channel DSP Interrupt Mask (RW)
 *
 * Reset value: 0x00000000
 *

 */
typedef union _hw_sdmabp_intrmask
{
    reg32_t U;
    struct _hw_sdmabp_intrmask_bitfields
    {
        unsigned DIMASK : 32; //!< [31:0] The Interrupt Mask Register contains 32 interrupt generation mask bits. If bit DIMASK[i] is set, the DI[i] bit is set and an interrupt is sent to the BP when a DMA request error is detected on channel i (for example, EVTERR[i] is set).
    } B;
} hw_sdmabp_intrmask_t;
#endif

/*
 * constants & macros for entire SDMABP_INTRMASK register
 */
#define HW_SDMABP_INTRMASK_ADDR      (REGS_SDMABP_BASE + 0x2c)

#ifndef __LANGUAGE_ASM__
#define HW_SDMABP_INTRMASK           (*(volatile hw_sdmabp_intrmask_t *) HW_SDMABP_INTRMASK_ADDR)
#define HW_SDMABP_INTRMASK_RD()      (HW_SDMABP_INTRMASK.U)
#define HW_SDMABP_INTRMASK_WR(v)     (HW_SDMABP_INTRMASK.U = (v))
#define HW_SDMABP_INTRMASK_SET(v)    (HW_SDMABP_INTRMASK_WR(HW_SDMABP_INTRMASK_RD() |  (v)))
#define HW_SDMABP_INTRMASK_CLR(v)    (HW_SDMABP_INTRMASK_WR(HW_SDMABP_INTRMASK_RD() & ~(v)))
#define HW_SDMABP_INTRMASK_TOG(v)    (HW_SDMABP_INTRMASK_WR(HW_SDMABP_INTRMASK_RD() ^  (v)))
#endif

/*
 * constants & macros for individual SDMABP_INTRMASK bitfields
 */

/* --- Register HW_SDMABP_INTRMASK, field DIMASK[31:0] (RW)
 *
 * The Interrupt Mask Register contains 32 interrupt generation mask bits. If bit DIMASK[i] is set,
 * the DI[i] bit is set and an interrupt is sent to the BP when a DMA request error is detected on
 * channel i (for example, EVTERR[i] is set).
 */

#define BP_SDMABP_INTRMASK_DIMASK      (0)      //!< Bit position for SDMABP_INTRMASK_DIMASK.
#define BM_SDMABP_INTRMASK_DIMASK      (0xffffffff)  //!< Bit mask for SDMABP_INTRMASK_DIMASK.

//! @brief Get value of SDMABP_INTRMASK_DIMASK from a register value.
#define BG_SDMABP_INTRMASK_DIMASK(r)   (((r) & BM_SDMABP_INTRMASK_DIMASK) >> BP_SDMABP_INTRMASK_DIMASK)

#ifndef __LANGUAGE_ASM__
//! @brief Format value for bitfield SDMABP_INTRMASK_DIMASK.
#define BF_SDMABP_INTRMASK_DIMASK(v)   ((((reg32_t) v) << BP_SDMABP_INTRMASK_DIMASK) & BM_SDMABP_INTRMASK_DIMASK)
#else
//! @brief Format value for bitfield SDMABP_INTRMASK_DIMASK.
#define BF_SDMABP_INTRMASK_DIMASK(v)   (((v) << BP_SDMABP_INTRMASK_DIMASK) & BM_SDMABP_INTRMASK_DIMASK)
#endif

#ifndef __LANGUAGE_ASM__
//! @brief Set the DIMASK field to a new value.
#define BW_SDMABP_INTRMASK_DIMASK(v)   (HW_SDMABP_INTRMASK_WR((HW_SDMABP_INTRMASK_RD() & ~BM_SDMABP_INTRMASK_DIMASK) | BF_SDMABP_INTRMASK_DIMASK(v)))
#endif

#ifndef __LANGUAGE_ASM__
/*!
 * @brief HW_SDMABP_EVTERRDBG - DMA Request Error Register (RO)
 *
 * Reset value: 0x00000000
 *

 */
typedef union _hw_sdmabp_evterrdbg
{
    reg32_t U;
    struct _hw_sdmabp_evterrdbg_bitfields
    {
        unsigned CHNERR : 32; //!< [31:0] This register is the same as EVTERR except reading it does not clear its contents. This address is meant to be used in debug mode. The BP OnCE may check this register value without modifying it.
    } B;
} hw_sdmabp_evterrdbg_t;
#endif

/*
 * constants & macros for entire SDMABP_EVTERRDBG register
 */
#define HW_SDMABP_EVTERRDBG_ADDR      (REGS_SDMABP_BASE + 0x34)

#ifndef __LANGUAGE_ASM__
#define HW_SDMABP_EVTERRDBG           (*(volatile hw_sdmabp_evterrdbg_t *) HW_SDMABP_EVTERRDBG_ADDR)
#define HW_SDMABP_EVTERRDBG_RD()      (HW_SDMABP_EVTERRDBG.U)
#endif

/*
 * constants & macros for individual SDMABP_EVTERRDBG bitfields
 */

/* --- Register HW_SDMABP_EVTERRDBG, field CHNERR[31:0] (RO)
 *
 * This register is the same as EVTERR except reading it does not clear its contents. This address
 * is meant to be used in debug mode. The BP OnCE may check this register value without modifying
 * it.
 */

#define BP_SDMABP_EVTERRDBG_CHNERR      (0)      //!< Bit position for SDMABP_EVTERRDBG_CHNERR.
#define BM_SDMABP_EVTERRDBG_CHNERR      (0xffffffff)  //!< Bit mask for SDMABP_EVTERRDBG_CHNERR.

//! @brief Get value of SDMABP_EVTERRDBG_CHNERR from a register value.
#define BG_SDMABP_EVTERRDBG_CHNERR(r)   (((r) & BM_SDMABP_EVTERRDBG_CHNERR) >> BP_SDMABP_EVTERRDBG_CHNERR)


/*!
 * @brief All SDMABP module registers.
 */
#ifndef __LANGUAGE_ASM__
#pragma pack(1)
typedef struct _hw_sdmabp
{
    volatile hw_sdmabp_dc0ptr_t DC0PTR; //!< Channel 0 Pointer
    volatile hw_sdmabp_intr_t INTR; //!< Channel Interrupts
    volatile hw_sdmabp_stop_stat_t STOP_STAT; //!< Channel Stop/Channel Status
    volatile hw_sdmabp_dstart_t DSTART; //!< Channel Start
    reg32_t _reserved0[6];
    volatile hw_sdmabp_evterr_t EVTERR; //!< DMA Request Error Register
    volatile hw_sdmabp_intrmask_t INTRMASK; //!< Channel DSP Interrupt Mask
    reg32_t _reserved1;
    volatile hw_sdmabp_evterrdbg_t EVTERRDBG; //!< DMA Request Error Register
} hw_sdmabp_t;
#pragma pack()
#endif

//! @brief Macro to access all SDMABP registers.
//! @return Reference (not a pointer) to the registers struct. To get a pointer to the struct,
//!     use the '&' operator, like <code>&HW_SDMABP(0)</code>.
#define HW_SDMABP     (*(volatile hw_sdmabp_t *) REGS_SDMABP_BASE)


#endif // _SDMABP_H