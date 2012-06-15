/*
 * Copyright (C) 2012, Freescale Semiconductor, Inc. All Rights Reserved
 * THIS SOURCE CODE IS CONFIDENTIAL AND PROPRIETARY AND MAY NOT
 * BE USED OR DISTRIBUTED WITHOUT THE WRITTEN PERMISSION OF
 * Freescale Semiconductor, Inc.
 */

#ifndef __HW_EIM_REGISTERS_H__
#define __HW_EIM_REGISTERS_H__

#include "regs.h"

/*
 * i.MX6SL EIM registers defined in this header file.
 *
 * - HW_EIM_CS0GCR1 - Chip Select n General Configuration Register 1
 * - HW_EIM_CS0GCR2 - Chip Select n General Configuration Register 2
 * - HW_EIM_CS0RCR1 - Chip Select n Read Configuration Register 1
 * - HW_EIM_CS0RCR2 - Chip Select n Read Configuration Register 2
 * - HW_EIM_CS0WCR1 - Chip Select n Write Configuration Register 1
 * - HW_EIM_CS0WCR2 - Chip Select n Write Configuration Register 2
 * - HW_EIM_CS1GCR1 - Chip Select n General Configuration Register 1
 * - HW_EIM_CS1GCR2 - Chip Select n General Configuration Register 2
 * - HW_EIM_CS1RCR1 - Chip Select n Read Configuration Register 1
 * - HW_EIM_CS1RCR2 - Chip Select n Read Configuration Register 2
 * - HW_EIM_CS1WCR1 - Chip Select n Write Configuration Register 1
 * - HW_EIM_CS1WCR2 - Chip Select n Write Configuration Register 2
 * - HW_EIM_CS2GCR1 - Chip Select n General Configuration Register 1
 * - HW_EIM_CS2GCR2 - Chip Select n General Configuration Register 2
 * - HW_EIM_CS2RCR1 - Chip Select n Read Configuration Register 1
 * - HW_EIM_CS2RCR2 - Chip Select n Read Configuration Register 2
 * - HW_EIM_CS2WCR1 - Chip Select n Write Configuration Register 1
 * - HW_EIM_CS2WCR2 - Chip Select n Write Configuration Register 2
 * - HW_EIM_CS3GCR1 - Chip Select n General Configuration Register 1
 * - HW_EIM_CS3GCR2 - Chip Select n General Configuration Register 2
 * - HW_EIM_CS3RCR1 - Chip Select n Read Configuration Register 1
 * - HW_EIM_CS3RCR2 - Chip Select n Read Configuration Register 2
 * - HW_EIM_CS3WCR1 - Chip Select n Write Configuration Register 1
 * - HW_EIM_CS3WCR2 - Chip Select n Write Configuration Register 2
 * - HW_EIM_CS4GCR1 - Chip Select n General Configuration Register 1
 * - HW_EIM_CS4GCR2 - Chip Select n General Configuration Register 2
 * - HW_EIM_CS4RCR1 - Chip Select n Read Configuration Register 1
 * - HW_EIM_CS4RCR2 - Chip Select n Read Configuration Register 2
 * - HW_EIM_CS4WCR1 - Chip Select n Write Configuration Register 1
 * - HW_EIM_CS4WCR2 - Chip Select n Write Configuration Register 2
 * - HW_EIM_CS5GCR1 - Chip Select n General Configuration Register 1
 * - HW_EIM_CS5GCR2 - Chip Select n General Configuration Register 2
 * - HW_EIM_CS5RCR1 - Chip Select n Read Configuration Register 1
 * - HW_EIM_CS5RCR2 - Chip Select n Read Configuration Register 2
 * - HW_EIM_CS5WCR1 - Chip Select n Write Configuration Register 1
 * - HW_EIM_CS5WCR2 - Chip Select n Write Configuration Register 2
 * - HW_EIM_WCR - EIM Configuration Register
 * - HW_EIM_DCR - DLL Control Register
 * - HW_EIM_DSR - DLL Status Register
 * - HW_EIM_WIAR - EIM IP Access Register
 * - HW_EIM_EAR - Error Address Register
 *
 * - hw_eim_t - Struct containing all module registers.
 */

//! @name Module base addresses
//@{
#ifndef REGS_EIM_BASE
#define HW_EIM_INSTANCE_COUNT (1) //!< Number of instances of the EIM module.
#define REGS_EIM_BASE (0x021b8000) //!< Base address for EIM.
#endif
//@}


//-------------------------------------------------------------------------------------------
// HW_EIM_CS0GCR1 - Chip Select n General Configuration Register 1
//-------------------------------------------------------------------------------------------

#ifndef __LANGUAGE_ASM__
/*!
 * @brief HW_EIM_CS0GCR1 - Chip Select n General Configuration Register 1 (RW)
 *
 * Reset value: 0x00010080
 *

 */
typedef union _hw_eim_cs0gcr1
{
    reg32_t U;
    struct _hw_eim_cs0gcr1_bitfields
    {
        unsigned CSEN : 1; //!< [0] CS Enable.
        unsigned SWR : 1; //!< [1] Synchronous Write Data.
        unsigned SRD : 1; //!< [2] Synchronous Read Data.
        unsigned MUM : 1; //!< [3] Multiplexed Mode.
        unsigned WFL : 1; //!< [4] Write Fix Latency.
        unsigned RFL : 1; //!< [5] Read Fix Latency.
        unsigned CRE : 1; //!< [6] Configuration Register Enable.
        unsigned CREP : 1; //!< [7] Configuration Register Enable Polarity.
        unsigned BL : 3; //!< [10:8] Burst Length.
        unsigned WC : 1; //!< [11] Write Continuous.
        unsigned BCD : 2; //!< [13:12] Burst Clock Divisor.
        unsigned BCS : 2; //!< [15:14] Burst Clock Start.
        unsigned DSZ : 3; //!< [18:16] Data Port Size.
        unsigned SP : 1; //!< [19] Supervisor Protect.
        unsigned CSREC : 3; //!< [22:20] CS Recovery.
        unsigned AUS : 1; //!< [23] Address UnShifted.
        unsigned GBC : 3; //!< [26:24] Gap Between Chip Selects.
        unsigned WP : 1; //!< [27] Write Protect.
        unsigned PSZ : 4; //!< [31:28] Page Size.
    } B;
} hw_eim_cs0gcr1_t;
#endif

/*
 * constants & macros for entire EIM_CS0GCR1 register
 */
#define HW_EIM_CS0GCR1_ADDR      (REGS_EIM_BASE + 0x0)

#ifndef __LANGUAGE_ASM__
#define HW_EIM_CS0GCR1           (*(volatile hw_eim_cs0gcr1_t *) HW_EIM_CS0GCR1_ADDR)
#define HW_EIM_CS0GCR1_RD()      (HW_EIM_CS0GCR1.U)
#define HW_EIM_CS0GCR1_WR(v)     (HW_EIM_CS0GCR1.U = (v))
#define HW_EIM_CS0GCR1_SET(v)    (HW_EIM_CS0GCR1_WR(HW_EIM_CS0GCR1_RD() |  (v)))
#define HW_EIM_CS0GCR1_CLR(v)    (HW_EIM_CS0GCR1_WR(HW_EIM_CS0GCR1_RD() & ~(v)))
#define HW_EIM_CS0GCR1_TOG(v)    (HW_EIM_CS0GCR1_WR(HW_EIM_CS0GCR1_RD() ^  (v)))
#endif

/*
 * constants & macros for individual EIM_CS0GCR1 bitfields
 */

/* --- Register HW_EIM_CS0GCR1, field CSEN[0] (RW)
 *
 * CS Enable. This bit controls the operation of the chip select pin. CSEN is set by a hardware
 * reset for CSGCR0 to allow external boot operation. CSEN is cleared by a hardware reset to
 * CSGCR1-CSGCR5. Reset value for EIM_CS0GCR1 for CSEN is 1. For EIM_CS1GCR1-CS1GCR5 reset value is
 * 0.
 *
 * Values:
 * 0 - Chip select function is disabled; attempts to access an address mapped by this chip select results
 *     in an error respond and no assertion of the chip select output
 * 1 - Chip select is enabled, and is asserted when presented with a valid access.
 */

#define BP_EIM_CS0GCR1_CSEN      (0)      //!< Bit position for EIM_CS0GCR1_CSEN.
#define BM_EIM_CS0GCR1_CSEN      (0x00000001)  //!< Bit mask for EIM_CS0GCR1_CSEN.

//! @brief Get value of EIM_CS0GCR1_CSEN from a register value.
#define BG_EIM_CS0GCR1_CSEN(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_EIM_CS0GCR1_CSEN) >> BP_EIM_CS0GCR1_CSEN)

//! @brief Format value for bitfield EIM_CS0GCR1_CSEN.
#define BF_EIM_CS0GCR1_CSEN(v)   ((__REG_VALUE_TYPE((v), reg32_t) << BP_EIM_CS0GCR1_CSEN) & BM_EIM_CS0GCR1_CSEN)

#ifndef __LANGUAGE_ASM__
//! @brief Set the CSEN field to a new value.
#define BW_EIM_CS0GCR1_CSEN(v)   (HW_EIM_CS0GCR1_WR((HW_EIM_CS0GCR1_RD() & ~BM_EIM_CS0GCR1_CSEN) | BF_EIM_CS0GCR1_CSEN(v)))
#endif


/* --- Register HW_EIM_CS0GCR1, field SWR[1] (RW)
 *
 * Synchronous Write Data. This bit field determine the write accesses mode to the External device
 * of the chip select. The External device should be configured to the same mode as this bit
 * implicates. SWR is cleared by a hardware reset. Sync. accesses supported only for 16/32 bit port.
 *
 * Values:
 * 0 - write accesses are in Asynchronous mode
 * 1 - write accesses are in Synchronous mode
 */

#define BP_EIM_CS0GCR1_SWR      (1)      //!< Bit position for EIM_CS0GCR1_SWR.
#define BM_EIM_CS0GCR1_SWR      (0x00000002)  //!< Bit mask for EIM_CS0GCR1_SWR.

//! @brief Get value of EIM_CS0GCR1_SWR from a register value.
#define BG_EIM_CS0GCR1_SWR(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_EIM_CS0GCR1_SWR) >> BP_EIM_CS0GCR1_SWR)

//! @brief Format value for bitfield EIM_CS0GCR1_SWR.
#define BF_EIM_CS0GCR1_SWR(v)   ((__REG_VALUE_TYPE((v), reg32_t) << BP_EIM_CS0GCR1_SWR) & BM_EIM_CS0GCR1_SWR)

#ifndef __LANGUAGE_ASM__
//! @brief Set the SWR field to a new value.
#define BW_EIM_CS0GCR1_SWR(v)   (HW_EIM_CS0GCR1_WR((HW_EIM_CS0GCR1_RD() & ~BM_EIM_CS0GCR1_SWR) | BF_EIM_CS0GCR1_SWR(v)))
#endif


/* --- Register HW_EIM_CS0GCR1, field SRD[2] (RW)
 *
 * Synchronous Read Data. This bit field determine the read accesses mode to the External device of
 * the chip select. The External device should be configured to the same mode as this bit
 * implicates. SRD is cleared by a hardware reset. Sync. accesses supported only for 16/32 bit port.
 *
 * Values:
 * 0 - read accesses are in Asynchronous mode
 * 1 - read accesses are in Synchronous mode
 */

#define BP_EIM_CS0GCR1_SRD      (2)      //!< Bit position for EIM_CS0GCR1_SRD.
#define BM_EIM_CS0GCR1_SRD      (0x00000004)  //!< Bit mask for EIM_CS0GCR1_SRD.

//! @brief Get value of EIM_CS0GCR1_SRD from a register value.
#define BG_EIM_CS0GCR1_SRD(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_EIM_CS0GCR1_SRD) >> BP_EIM_CS0GCR1_SRD)

//! @brief Format value for bitfield EIM_CS0GCR1_SRD.
#define BF_EIM_CS0GCR1_SRD(v)   ((__REG_VALUE_TYPE((v), reg32_t) << BP_EIM_CS0GCR1_SRD) & BM_EIM_CS0GCR1_SRD)

#ifndef __LANGUAGE_ASM__
//! @brief Set the SRD field to a new value.
#define BW_EIM_CS0GCR1_SRD(v)   (HW_EIM_CS0GCR1_WR((HW_EIM_CS0GCR1_RD() & ~BM_EIM_CS0GCR1_SRD) | BF_EIM_CS0GCR1_SRD(v)))
#endif


/* --- Register HW_EIM_CS0GCR1, field MUM[3] (RW)
 *
 * Multiplexed Mode. This bit determines the address/data multiplexed mode for asynchronous and
 * synchronous accesses for 8 bit, 16 bit or 32 bit devices (DSZ config. dependent). The reset value
 * for EIM_CS0GCR1[MUM] = EIM_BOOT[2]. For EIM_CS1GCR1 - EIM_CS5GCR1 the reset value is 0.
 *
 * Values:
 * 0 - Multiplexed Mode disable
 * 1 - Multiplexed Mode enable
 */

#define BP_EIM_CS0GCR1_MUM      (3)      //!< Bit position for EIM_CS0GCR1_MUM.
#define BM_EIM_CS0GCR1_MUM      (0x00000008)  //!< Bit mask for EIM_CS0GCR1_MUM.

//! @brief Get value of EIM_CS0GCR1_MUM from a register value.
#define BG_EIM_CS0GCR1_MUM(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_EIM_CS0GCR1_MUM) >> BP_EIM_CS0GCR1_MUM)

//! @brief Format value for bitfield EIM_CS0GCR1_MUM.
#define BF_EIM_CS0GCR1_MUM(v)   ((__REG_VALUE_TYPE((v), reg32_t) << BP_EIM_CS0GCR1_MUM) & BM_EIM_CS0GCR1_MUM)

#ifndef __LANGUAGE_ASM__
//! @brief Set the MUM field to a new value.
#define BW_EIM_CS0GCR1_MUM(v)   (HW_EIM_CS0GCR1_WR((HW_EIM_CS0GCR1_RD() & ~BM_EIM_CS0GCR1_MUM) | BF_EIM_CS0GCR1_MUM(v)))
#endif


/* --- Register HW_EIM_CS0GCR1, field WFL[4] (RW)
 *
 * Write Fix Latency. This bit field determine if the controller is monitoring the WAIT signal from
 * the External device connected to the chip select (handshake mode - fix or variable data latency)
 * or if it start data transfer according to WWSC field, it only valid in synchronous mode. WFL is
 * cleared by a hardware reset. When WFL=1 Burst access is terminated on page boundary and resume on
 * the following page according to BL bit field configuration, because WAIT signal is not monitored
 * from the external device
 *
 * Values:
 * 0 - the External device WAIT signal is being monitored, and it reflect the external data bus state
 * 1 - the state of the External devices is determined internally (Fix latency mode only)
 */

#define BP_EIM_CS0GCR1_WFL      (4)      //!< Bit position for EIM_CS0GCR1_WFL.
#define BM_EIM_CS0GCR1_WFL      (0x00000010)  //!< Bit mask for EIM_CS0GCR1_WFL.

//! @brief Get value of EIM_CS0GCR1_WFL from a register value.
#define BG_EIM_CS0GCR1_WFL(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_EIM_CS0GCR1_WFL) >> BP_EIM_CS0GCR1_WFL)

//! @brief Format value for bitfield EIM_CS0GCR1_WFL.
#define BF_EIM_CS0GCR1_WFL(v)   ((__REG_VALUE_TYPE((v), reg32_t) << BP_EIM_CS0GCR1_WFL) & BM_EIM_CS0GCR1_WFL)

#ifndef __LANGUAGE_ASM__
//! @brief Set the WFL field to a new value.
#define BW_EIM_CS0GCR1_WFL(v)   (HW_EIM_CS0GCR1_WR((HW_EIM_CS0GCR1_RD() & ~BM_EIM_CS0GCR1_WFL) | BF_EIM_CS0GCR1_WFL(v)))
#endif


/* --- Register HW_EIM_CS0GCR1, field RFL[5] (RW)
 *
 * Read Fix Latency. This bit field determine if the controller is monitoring the WAIT signal from
 * the External device connected to the chip select (handshake mode - fix or variable data latency)
 * or if it start sampling data according to RWSC field, it only valid in synchronous mode. RFL is
 * cleared by a hardware reset. When RFL=1 Burst access is terminated on page boundary and resume on
 * the following page according to BL bit field configuration, because WAIT signal is not monitored
 * from the external device.
 *
 * Values:
 * 0 - the External device WAIT signal is being monitored, and it reflect the external data bus state
 * 1 - the state of the External devices is determined internally (Fix latency mode only)
 */

#define BP_EIM_CS0GCR1_RFL      (5)      //!< Bit position for EIM_CS0GCR1_RFL.
#define BM_EIM_CS0GCR1_RFL      (0x00000020)  //!< Bit mask for EIM_CS0GCR1_RFL.

//! @brief Get value of EIM_CS0GCR1_RFL from a register value.
#define BG_EIM_CS0GCR1_RFL(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_EIM_CS0GCR1_RFL) >> BP_EIM_CS0GCR1_RFL)

//! @brief Format value for bitfield EIM_CS0GCR1_RFL.
#define BF_EIM_CS0GCR1_RFL(v)   ((__REG_VALUE_TYPE((v), reg32_t) << BP_EIM_CS0GCR1_RFL) & BM_EIM_CS0GCR1_RFL)

#ifndef __LANGUAGE_ASM__
//! @brief Set the RFL field to a new value.
#define BW_EIM_CS0GCR1_RFL(v)   (HW_EIM_CS0GCR1_WR((HW_EIM_CS0GCR1_RD() & ~BM_EIM_CS0GCR1_RFL) | BF_EIM_CS0GCR1_RFL(v)))
#endif


/* --- Register HW_EIM_CS0GCR1, field CRE[6] (RW)
 *
 * Configuration Register Enable. This bit indicates CRE memory pin state while executing a memory
 * register set command to PSRAM external device. CRE is cleared by a hardware reset.
 *
 * Values:
 * 0 - CRE signal use is disable
 * 1 - CRE signal use is enable
 */

#define BP_EIM_CS0GCR1_CRE      (6)      //!< Bit position for EIM_CS0GCR1_CRE.
#define BM_EIM_CS0GCR1_CRE      (0x00000040)  //!< Bit mask for EIM_CS0GCR1_CRE.

//! @brief Get value of EIM_CS0GCR1_CRE from a register value.
#define BG_EIM_CS0GCR1_CRE(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_EIM_CS0GCR1_CRE) >> BP_EIM_CS0GCR1_CRE)

//! @brief Format value for bitfield EIM_CS0GCR1_CRE.
#define BF_EIM_CS0GCR1_CRE(v)   ((__REG_VALUE_TYPE((v), reg32_t) << BP_EIM_CS0GCR1_CRE) & BM_EIM_CS0GCR1_CRE)

#ifndef __LANGUAGE_ASM__
//! @brief Set the CRE field to a new value.
#define BW_EIM_CS0GCR1_CRE(v)   (HW_EIM_CS0GCR1_WR((HW_EIM_CS0GCR1_RD() & ~BM_EIM_CS0GCR1_CRE) | BF_EIM_CS0GCR1_CRE(v)))
#endif


/* --- Register HW_EIM_CS0GCR1, field CREP[7] (RW)
 *
 * Configuration Register Enable Polarity. This bit indicates CRE memory pin assertion state,
 * active-low or active-high, while executing a memory register set command to the external device
 * (PSRAM memory type). CREP is set by a hardware reset. Whenever PSRAM is connected the CREP value
 * must be correct also for accesses where CRE is disabled. For Non-PSRAM memory CREP value should
 * be 1.
 *
 * Values:
 * 0 - CRE signal is active low
 * 1 - CRE signal is active high
 */

#define BP_EIM_CS0GCR1_CREP      (7)      //!< Bit position for EIM_CS0GCR1_CREP.
#define BM_EIM_CS0GCR1_CREP      (0x00000080)  //!< Bit mask for EIM_CS0GCR1_CREP.

//! @brief Get value of EIM_CS0GCR1_CREP from a register value.
#define BG_EIM_CS0GCR1_CREP(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_EIM_CS0GCR1_CREP) >> BP_EIM_CS0GCR1_CREP)

//! @brief Format value for bitfield EIM_CS0GCR1_CREP.
#define BF_EIM_CS0GCR1_CREP(v)   ((__REG_VALUE_TYPE((v), reg32_t) << BP_EIM_CS0GCR1_CREP) & BM_EIM_CS0GCR1_CREP)

#ifndef __LANGUAGE_ASM__
//! @brief Set the CREP field to a new value.
#define BW_EIM_CS0GCR1_CREP(v)   (HW_EIM_CS0GCR1_WR((HW_EIM_CS0GCR1_RD() & ~BM_EIM_CS0GCR1_CREP) | BF_EIM_CS0GCR1_CREP(v)))
#endif


/* --- Register HW_EIM_CS0GCR1, field BL[10:8] (RW)
 *
 * Burst Length. The BL bit field indicates memory burst length in words (word is defined by the DSZ
 * field) and should be properly initialized for mixed wrap/increment accesses support. Continuous
 * BL value corresponds to continuous burst length setting of the external memory device. For fix
 * memory burst size, type is always wrap. In case not matching wrap boundaries in both the memory
 * (BL field) and Master access on the current address, EIM update address on the external device
 * address bus and regenerates the access. BL is cleared by a hardware reset. When APR=1, Page Read
 * Mode is applied, BL determine the number of words within the read page burst. BL is cleared by a
 * hardware reset for EIM_CS0GCR1 - EIM_CS5GCR1.
 *
 * Values:
 * 000 - 4 words Memory wrap burst length (read page burst size when APR = 1)
 * 001 - 8 words Memory wrap burst length (read page burst size when APR = 1)
 * 010 - 16 words Memory wrap burst length (read page burst size when APR = 1)
 * 011 - 32 words Memory wrap burst length (read page burst size when APR = 1)
 * 100 - Continuous burst length (2 words read page burst size when APR = 1)
 * 101 - Reserved
 * 110 - Reserved
 * 111 - Reserved
 */

#define BP_EIM_CS0GCR1_BL      (8)      //!< Bit position for EIM_CS0GCR1_BL.
#define BM_EIM_CS0GCR1_BL      (0x00000700)  //!< Bit mask for EIM_CS0GCR1_BL.

//! @brief Get value of EIM_CS0GCR1_BL from a register value.
#define BG_EIM_CS0GCR1_BL(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_EIM_CS0GCR1_BL) >> BP_EIM_CS0GCR1_BL)

//! @brief Format value for bitfield EIM_CS0GCR1_BL.
#define BF_EIM_CS0GCR1_BL(v)   ((__REG_VALUE_TYPE((v), reg32_t) << BP_EIM_CS0GCR1_BL) & BM_EIM_CS0GCR1_BL)

#ifndef __LANGUAGE_ASM__
//! @brief Set the BL field to a new value.
#define BW_EIM_CS0GCR1_BL(v)   (HW_EIM_CS0GCR1_WR((HW_EIM_CS0GCR1_RD() & ~BM_EIM_CS0GCR1_BL) | BF_EIM_CS0GCR1_BL(v)))
#endif


/* --- Register HW_EIM_CS0GCR1, field WC[11] (RW)
 *
 * Write Continuous. The WI bit indicates that write access to the memory are always continuous
 * accesses regardless of the BL field value. WI is cleared by hardware reset.
 *
 * Values:
 * 0 - Write access burst length occurs according to BL value.
 * 1 - Write access burst length is continuous.
 */

#define BP_EIM_CS0GCR1_WC      (11)      //!< Bit position for EIM_CS0GCR1_WC.
#define BM_EIM_CS0GCR1_WC      (0x00000800)  //!< Bit mask for EIM_CS0GCR1_WC.

//! @brief Get value of EIM_CS0GCR1_WC from a register value.
#define BG_EIM_CS0GCR1_WC(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_EIM_CS0GCR1_WC) >> BP_EIM_CS0GCR1_WC)

//! @brief Format value for bitfield EIM_CS0GCR1_WC.
#define BF_EIM_CS0GCR1_WC(v)   ((__REG_VALUE_TYPE((v), reg32_t) << BP_EIM_CS0GCR1_WC) & BM_EIM_CS0GCR1_WC)

#ifndef __LANGUAGE_ASM__
//! @brief Set the WC field to a new value.
#define BW_EIM_CS0GCR1_WC(v)   (HW_EIM_CS0GCR1_WR((HW_EIM_CS0GCR1_RD() & ~BM_EIM_CS0GCR1_WC) | BF_EIM_CS0GCR1_WC(v)))
#endif


/* --- Register HW_EIM_CS0GCR1, field BCD[13:12] (RW)
 *
 * Burst Clock Divisor. This bit field contains the value used to program the burst clock divisor
 * for BCLK generation. It is used to divide the internal EIMbus frequency. BCD is cleared by a
 * hardware reset. For other then the mentioned below frequency such as 104 MHz, EIM clock (input
 * clock) should be adjust accordingly.
 *
 * Values:
 * 00 - Divide EIM clock by 1
 * 01 - Divide EIM clock by 2
 * 10 - Divide EIM clock by 3
 * 11 - Divide EIM clock by 4
 */

#define BP_EIM_CS0GCR1_BCD      (12)      //!< Bit position for EIM_CS0GCR1_BCD.
#define BM_EIM_CS0GCR1_BCD      (0x00003000)  //!< Bit mask for EIM_CS0GCR1_BCD.

//! @brief Get value of EIM_CS0GCR1_BCD from a register value.
#define BG_EIM_CS0GCR1_BCD(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_EIM_CS0GCR1_BCD) >> BP_EIM_CS0GCR1_BCD)

//! @brief Format value for bitfield EIM_CS0GCR1_BCD.
#define BF_EIM_CS0GCR1_BCD(v)   ((__REG_VALUE_TYPE((v), reg32_t) << BP_EIM_CS0GCR1_BCD) & BM_EIM_CS0GCR1_BCD)

#ifndef __LANGUAGE_ASM__
//! @brief Set the BCD field to a new value.
#define BW_EIM_CS0GCR1_BCD(v)   (HW_EIM_CS0GCR1_WR((HW_EIM_CS0GCR1_RD() & ~BM_EIM_CS0GCR1_BCD) | BF_EIM_CS0GCR1_BCD(v)))
#endif


/* --- Register HW_EIM_CS0GCR1, field BCS[15:14] (RW)
 *
 * Burst Clock Start. When SRD=1 or SWR=1,this bit field determines the number of EIM clock cycles
 * delay from start of access before the first rising edge of BCLK is generated. When BCD=0 value of
 * BCS=0 results in a half clock delay after the start of access. For other values of BCD a one
 * clock delay after the start of access is applied, not an immediate assertion. BCS is cleared by a
 * hardware reset.
 *
 * Values:
 * 00 - 0 EIM clock cycle additional delay
 * 01 - 1 EIM clock cycle additional delay
 * 10 - 2 EIM clock cycle additional delay
 * 11 - 3 EIM clock cycle additional delay
 */

#define BP_EIM_CS0GCR1_BCS      (14)      //!< Bit position for EIM_CS0GCR1_BCS.
#define BM_EIM_CS0GCR1_BCS      (0x0000c000)  //!< Bit mask for EIM_CS0GCR1_BCS.

//! @brief Get value of EIM_CS0GCR1_BCS from a register value.
#define BG_EIM_CS0GCR1_BCS(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_EIM_CS0GCR1_BCS) >> BP_EIM_CS0GCR1_BCS)

//! @brief Format value for bitfield EIM_CS0GCR1_BCS.
#define BF_EIM_CS0GCR1_BCS(v)   ((__REG_VALUE_TYPE((v), reg32_t) << BP_EIM_CS0GCR1_BCS) & BM_EIM_CS0GCR1_BCS)

#ifndef __LANGUAGE_ASM__
//! @brief Set the BCS field to a new value.
#define BW_EIM_CS0GCR1_BCS(v)   (HW_EIM_CS0GCR1_WR((HW_EIM_CS0GCR1_RD() & ~BM_EIM_CS0GCR1_BCS) | BF_EIM_CS0GCR1_BCS(v)))
#endif


/* --- Register HW_EIM_CS0GCR1, field DSZ[18:16] (RW)
 *
 * Data Port Size. This bit field defines the width of an external device's data port as shown
 * below. Only async. access supported for 8 bit port. The reset value for EIM_CS0GCR1, DSZ[2] = 0,
 * DSZ[1:0] = EIM_BOOT[1:0]. For EIM_CS1GCR1 - EIM_CS5GCR1, the reset value is 0b001.
 *
 * Values:
 * 000 - Reserved.
 * 001 - 16 bit port resides on DATA[15:0]
 * 010 - 16 bit port resides on DATA[31:16]
 * 011 - 32 bit port resides on DATA[31:0]
 * 100 - 8 bit port resides on DATA[7:0]
 * 101 - 8 bit port resides on DATA[15:8]
 * 110 - 8 bit port resides on DATA[23:16]
 * 111 - 8 bit port resides on DATA[31:24]
 */

#define BP_EIM_CS0GCR1_DSZ      (16)      //!< Bit position for EIM_CS0GCR1_DSZ.
#define BM_EIM_CS0GCR1_DSZ      (0x00070000)  //!< Bit mask for EIM_CS0GCR1_DSZ.

//! @brief Get value of EIM_CS0GCR1_DSZ from a register value.
#define BG_EIM_CS0GCR1_DSZ(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_EIM_CS0GCR1_DSZ) >> BP_EIM_CS0GCR1_DSZ)

//! @brief Format value for bitfield EIM_CS0GCR1_DSZ.
#define BF_EIM_CS0GCR1_DSZ(v)   ((__REG_VALUE_TYPE((v), reg32_t) << BP_EIM_CS0GCR1_DSZ) & BM_EIM_CS0GCR1_DSZ)

#ifndef __LANGUAGE_ASM__
//! @brief Set the DSZ field to a new value.
#define BW_EIM_CS0GCR1_DSZ(v)   (HW_EIM_CS0GCR1_WR((HW_EIM_CS0GCR1_RD() & ~BM_EIM_CS0GCR1_DSZ) | BF_EIM_CS0GCR1_DSZ(v)))
#endif


/* --- Register HW_EIM_CS0GCR1, field SP[19] (RW)
 *
 * Supervisor Protect. This bit prevents accesses to the address range defined by the corresponding
 * chip select when the access is attempted in the User mode. SP is cleared by a hardware reset.
 *
 * Values:
 * 0 - User mode accesses are allowed in the memory range defined by chip select.
 * 1 - User mode accesses are prohibited. All attempts to access an address mapped by this chip select in
 *     User mode results in an error response and no assertion of the chip select output.
 */

#define BP_EIM_CS0GCR1_SP      (19)      //!< Bit position for EIM_CS0GCR1_SP.
#define BM_EIM_CS0GCR1_SP      (0x00080000)  //!< Bit mask for EIM_CS0GCR1_SP.

//! @brief Get value of EIM_CS0GCR1_SP from a register value.
#define BG_EIM_CS0GCR1_SP(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_EIM_CS0GCR1_SP) >> BP_EIM_CS0GCR1_SP)

//! @brief Format value for bitfield EIM_CS0GCR1_SP.
#define BF_EIM_CS0GCR1_SP(v)   ((__REG_VALUE_TYPE((v), reg32_t) << BP_EIM_CS0GCR1_SP) & BM_EIM_CS0GCR1_SP)

#ifndef __LANGUAGE_ASM__
//! @brief Set the SP field to a new value.
#define BW_EIM_CS0GCR1_SP(v)   (HW_EIM_CS0GCR1_WR((HW_EIM_CS0GCR1_RD() & ~BM_EIM_CS0GCR1_SP) | BF_EIM_CS0GCR1_SP(v)))
#endif


/* --- Register HW_EIM_CS0GCR1, field CSREC[22:20] (RW)
 *
 * CS Recovery. This bit field, according to the settings shown below, determines the minimum pulse
 * width of CS, OE, and WE control signals before executing a new back to back access to the same
 * chip select. CSREC is cleared by a hardware reset. The reset value for EIM_CS0GCR1, CSREC[2:0] is
 * 0b110. For EIM_CS1GCR1 - EIM_CS5GCR, the reset value is 0b000. Example settings:
 *
 * Values:
 * 000 - 0 EIM clock cycles minimum width of CS, OE and WE signals (read async. mode only)
 * 001 - 1 EIM clock cycles minimum width of CS, OE and WE signals
 * 010 - 2 EIM clock cycles minimum width of CS, OE and WE signals
 * 111 - 7 EIM clock cycles minimum width of CS, OE and WE signals
 */

#define BP_EIM_CS0GCR1_CSREC      (20)      //!< Bit position for EIM_CS0GCR1_CSREC.
#define BM_EIM_CS0GCR1_CSREC      (0x00700000)  //!< Bit mask for EIM_CS0GCR1_CSREC.

//! @brief Get value of EIM_CS0GCR1_CSREC from a register value.
#define BG_EIM_CS0GCR1_CSREC(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_EIM_CS0GCR1_CSREC) >> BP_EIM_CS0GCR1_CSREC)

//! @brief Format value for bitfield EIM_CS0GCR1_CSREC.
#define BF_EIM_CS0GCR1_CSREC(v)   ((__REG_VALUE_TYPE((v), reg32_t) << BP_EIM_CS0GCR1_CSREC) & BM_EIM_CS0GCR1_CSREC)

#ifndef __LANGUAGE_ASM__
//! @brief Set the CSREC field to a new value.
#define BW_EIM_CS0GCR1_CSREC(v)   (HW_EIM_CS0GCR1_WR((HW_EIM_CS0GCR1_RD() & ~BM_EIM_CS0GCR1_CSREC) | BF_EIM_CS0GCR1_CSREC(v)))
#endif


/* --- Register HW_EIM_CS0GCR1, field AUS[23] (RW)
 *
 * Address UnShifted. This bit indicates an unshifted mode for address assertion for the relevant
 * chip select accesses. AUS bit is cleared by hardware reset.
 *
 * Values:
 * 0 - Address shifted according to port size (DSZ config.)
 * 1 - Address unshifted
 */

#define BP_EIM_CS0GCR1_AUS      (23)      //!< Bit position for EIM_CS0GCR1_AUS.
#define BM_EIM_CS0GCR1_AUS      (0x00800000)  //!< Bit mask for EIM_CS0GCR1_AUS.

//! @brief Get value of EIM_CS0GCR1_AUS from a register value.
#define BG_EIM_CS0GCR1_AUS(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_EIM_CS0GCR1_AUS) >> BP_EIM_CS0GCR1_AUS)

//! @brief Format value for bitfield EIM_CS0GCR1_AUS.
#define BF_EIM_CS0GCR1_AUS(v)   ((__REG_VALUE_TYPE((v), reg32_t) << BP_EIM_CS0GCR1_AUS) & BM_EIM_CS0GCR1_AUS)

#ifndef __LANGUAGE_ASM__
//! @brief Set the AUS field to a new value.
#define BW_EIM_CS0GCR1_AUS(v)   (HW_EIM_CS0GCR1_WR((HW_EIM_CS0GCR1_RD() & ~BM_EIM_CS0GCR1_AUS) | BF_EIM_CS0GCR1_AUS(v)))
#endif


/* --- Register HW_EIM_CS0GCR1, field GBC[26:24] (RW)
 *
 * Gap Between Chip Selects. This bit field, according to the settings shown below, determines the
 * minimum time between end of access to the current chip select and start of access to different
 * chip select. GBC is cleared by a hardware reset. Example settings:
 *
 * Values:
 * 000 - minimum of 0 EIM clock cycles before next access from different chip select (async. mode only)
 * 001 - minimum of 1 EIM clock cycles before next access from different chip select
 * 010 - minimum of 2 EIM clock cycles before next access from different chip select
 * 111 - minimum of 7 EIM clock cycles before next access from different chip select
 */

#define BP_EIM_CS0GCR1_GBC      (24)      //!< Bit position for EIM_CS0GCR1_GBC.
#define BM_EIM_CS0GCR1_GBC      (0x07000000)  //!< Bit mask for EIM_CS0GCR1_GBC.

//! @brief Get value of EIM_CS0GCR1_GBC from a register value.
#define BG_EIM_CS0GCR1_GBC(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_EIM_CS0GCR1_GBC) >> BP_EIM_CS0GCR1_GBC)

//! @brief Format value for bitfield EIM_CS0GCR1_GBC.
#define BF_EIM_CS0GCR1_GBC(v)   ((__REG_VALUE_TYPE((v), reg32_t) << BP_EIM_CS0GCR1_GBC) & BM_EIM_CS0GCR1_GBC)

#ifndef __LANGUAGE_ASM__
//! @brief Set the GBC field to a new value.
#define BW_EIM_CS0GCR1_GBC(v)   (HW_EIM_CS0GCR1_WR((HW_EIM_CS0GCR1_RD() & ~BM_EIM_CS0GCR1_GBC) | BF_EIM_CS0GCR1_GBC(v)))
#endif


/* --- Register HW_EIM_CS0GCR1, field WP[27] (RW)
 *
 * Write Protect. This bit prevents writes to the address range defined by the corresponding chip
 * select. WP is cleared by a hardware reset.
 *
 * Values:
 * 0 - Writes are allowed in the memory range defined by chip.
 * 1 - Writes are prohibited. All attempts to write to an address mapped by this chip select result in a
 *     error response and no assertion of the chip select output.
 */

#define BP_EIM_CS0GCR1_WP      (27)      //!< Bit position for EIM_CS0GCR1_WP.
#define BM_EIM_CS0GCR1_WP      (0x08000000)  //!< Bit mask for EIM_CS0GCR1_WP.

//! @brief Get value of EIM_CS0GCR1_WP from a register value.
#define BG_EIM_CS0GCR1_WP(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_EIM_CS0GCR1_WP) >> BP_EIM_CS0GCR1_WP)

//! @brief Format value for bitfield EIM_CS0GCR1_WP.
#define BF_EIM_CS0GCR1_WP(v)   ((__REG_VALUE_TYPE((v), reg32_t) << BP_EIM_CS0GCR1_WP) & BM_EIM_CS0GCR1_WP)

#ifndef __LANGUAGE_ASM__
//! @brief Set the WP field to a new value.
#define BW_EIM_CS0GCR1_WP(v)   (HW_EIM_CS0GCR1_WR((HW_EIM_CS0GCR1_RD() & ~BM_EIM_CS0GCR1_WP) | BF_EIM_CS0GCR1_WP(v)))
#endif


/* --- Register HW_EIM_CS0GCR1, field PSZ[31:28] (RW)
 *
 * Page Size. This bit field indicates memory page size in words (word is defined by the DSZ field).
 * PSZ is used when fix latency mode is applied, WFL=1 for sync. write accesses, RFL=1 for sync.
 * Read accesses. When working in fix latency mode WAIT signal from the external device is not being
 * monitored, PSZ is used to determine if page boundary is reached and renewal of access is
 * preformed. This bit field is ignored when sync. Mode is disabled or fix latency mode is not being
 * used for write or read access separately. It can be valid for both access type, read or write, or
 * only for one type, according to configuration. PSZ is cleared by a hardware reset.
 *
 * Values:
 * 0000 - 8 words page size
 * 0001 - 16 words page size
 * 0010 - 32 words page size
 * 0011 - 64 words page size
 * 0100 - 128 words page size
 * 0101 - 256 words page size
 * 0110 - 512 words page size
 * 0111 - 1024 (1k) words page size
 * 1000 - 2048 (2k) words page size
 * 1001 - - 1111 Reserved
 */

#define BP_EIM_CS0GCR1_PSZ      (28)      //!< Bit position for EIM_CS0GCR1_PSZ.
#define BM_EIM_CS0GCR1_PSZ      (0xf0000000)  //!< Bit mask for EIM_CS0GCR1_PSZ.

//! @brief Get value of EIM_CS0GCR1_PSZ from a register value.
#define BG_EIM_CS0GCR1_PSZ(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_EIM_CS0GCR1_PSZ) >> BP_EIM_CS0GCR1_PSZ)

//! @brief Format value for bitfield EIM_CS0GCR1_PSZ.
#define BF_EIM_CS0GCR1_PSZ(v)   ((__REG_VALUE_TYPE((v), reg32_t) << BP_EIM_CS0GCR1_PSZ) & BM_EIM_CS0GCR1_PSZ)

#ifndef __LANGUAGE_ASM__
//! @brief Set the PSZ field to a new value.
#define BW_EIM_CS0GCR1_PSZ(v)   (HW_EIM_CS0GCR1_WR((HW_EIM_CS0GCR1_RD() & ~BM_EIM_CS0GCR1_PSZ) | BF_EIM_CS0GCR1_PSZ(v)))
#endif


//-------------------------------------------------------------------------------------------
// HW_EIM_CS0GCR2 - Chip Select n General Configuration Register 2
//-------------------------------------------------------------------------------------------

#ifndef __LANGUAGE_ASM__
/*!
 * @brief HW_EIM_CS0GCR2 - Chip Select n General Configuration Register 2 (RW)
 *
 * Reset value: 0x00001000
 *

 */
typedef union _hw_eim_cs0gcr2
{
    reg32_t U;
    struct _hw_eim_cs0gcr2_bitfields
    {
        unsigned ADH : 2; //!< [1:0] Address hold time - This bit field determine the address hold time after ADV negation when mum = 1 (muxed mode).
        unsigned RESERVED0 : 2; //!< [3:2] Reserved
        unsigned DAPS : 4; //!< [7:4] Data Acknowledge Poling Start.
        unsigned DAE : 1; //!< [8] Data Acknowledge Enable.
        unsigned DAP : 1; //!< [9] Data Acknowledge Polarity.
        unsigned RESERVED1 : 2; //!< [11:10] Reserved
        unsigned MUX16_BYP_GRANT : 1; //!< [12] Muxed 16 bypass grant.
        unsigned RESERVED2 : 19; //!< [31:13] Reserved
    } B;
} hw_eim_cs0gcr2_t;
#endif

/*
 * constants & macros for entire EIM_CS0GCR2 register
 */
#define HW_EIM_CS0GCR2_ADDR      (REGS_EIM_BASE + 0x4)

#ifndef __LANGUAGE_ASM__
#define HW_EIM_CS0GCR2           (*(volatile hw_eim_cs0gcr2_t *) HW_EIM_CS0GCR2_ADDR)
#define HW_EIM_CS0GCR2_RD()      (HW_EIM_CS0GCR2.U)
#define HW_EIM_CS0GCR2_WR(v)     (HW_EIM_CS0GCR2.U = (v))
#define HW_EIM_CS0GCR2_SET(v)    (HW_EIM_CS0GCR2_WR(HW_EIM_CS0GCR2_RD() |  (v)))
#define HW_EIM_CS0GCR2_CLR(v)    (HW_EIM_CS0GCR2_WR(HW_EIM_CS0GCR2_RD() & ~(v)))
#define HW_EIM_CS0GCR2_TOG(v)    (HW_EIM_CS0GCR2_WR(HW_EIM_CS0GCR2_RD() ^  (v)))
#endif

/*
 * constants & macros for individual EIM_CS0GCR2 bitfields
 */

/* --- Register HW_EIM_CS0GCR2, field ADH[1:0] (RW)
 *
 * Address hold time - This bit field determine the address hold time after ADV negation when mum =
 * 1 (muxed mode). When mum = 0 this bit has no effect. For read accesses the field determines when
 * the pads direction will be switched. Reset value for EIM_CS0GCR2 for ADH is 10. For
 * EIM_CS1GCR2-EIM_CS5GCR2 reset value is 00.
 *
 * Values:
 * 00 - 0 cycle after ADV negation
 * 01 - 1 cycle after ADV negation
 * 10 - 2 cycle after ADV negation
 * 11 - Reserved
 */

#define BP_EIM_CS0GCR2_ADH      (0)      //!< Bit position for EIM_CS0GCR2_ADH.
#define BM_EIM_CS0GCR2_ADH      (0x00000003)  //!< Bit mask for EIM_CS0GCR2_ADH.

//! @brief Get value of EIM_CS0GCR2_ADH from a register value.
#define BG_EIM_CS0GCR2_ADH(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_EIM_CS0GCR2_ADH) >> BP_EIM_CS0GCR2_ADH)

//! @brief Format value for bitfield EIM_CS0GCR2_ADH.
#define BF_EIM_CS0GCR2_ADH(v)   ((__REG_VALUE_TYPE((v), reg32_t) << BP_EIM_CS0GCR2_ADH) & BM_EIM_CS0GCR2_ADH)

#ifndef __LANGUAGE_ASM__
//! @brief Set the ADH field to a new value.
#define BW_EIM_CS0GCR2_ADH(v)   (HW_EIM_CS0GCR2_WR((HW_EIM_CS0GCR2_RD() & ~BM_EIM_CS0GCR2_ADH) | BF_EIM_CS0GCR2_ADH(v)))
#endif


/* --- Register HW_EIM_CS0GCR2, field DAPS[7:4] (RW)
 *
 * Data Acknowledge Poling Start. This bit field determine the starting point of DTACK input signal
 * polling. DAPS is used only in asynchronous single read or write accesses. Since DTACK is an
 * async. signal the start point of DTACK signal polling is at least 3 cycles after the start of
 * access. DAPS is cleared by a hardware reset. Example settings:
 *
 * Values:
 * 0000 - 3 EIM clk cycle between start of access and first DTACK check
 * 0001 - 4 EIM clk cycles between start of access and first DTACK check
 * 0010 - 5 EIM clk cycles between start of access and first DTACK check
 * 0111 - 10 EIM clk cycles between start of access and first DTACK check
 * 1011 - 14 EIM clk cycles between start of access and first DTACK check
 * 1111 - 18 EIM clk cycles between start of access and first DTACK check
 */

#define BP_EIM_CS0GCR2_DAPS      (4)      //!< Bit position for EIM_CS0GCR2_DAPS.
#define BM_EIM_CS0GCR2_DAPS      (0x000000f0)  //!< Bit mask for EIM_CS0GCR2_DAPS.

//! @brief Get value of EIM_CS0GCR2_DAPS from a register value.
#define BG_EIM_CS0GCR2_DAPS(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_EIM_CS0GCR2_DAPS) >> BP_EIM_CS0GCR2_DAPS)

//! @brief Format value for bitfield EIM_CS0GCR2_DAPS.
#define BF_EIM_CS0GCR2_DAPS(v)   ((__REG_VALUE_TYPE((v), reg32_t) << BP_EIM_CS0GCR2_DAPS) & BM_EIM_CS0GCR2_DAPS)

#ifndef __LANGUAGE_ASM__
//! @brief Set the DAPS field to a new value.
#define BW_EIM_CS0GCR2_DAPS(v)   (HW_EIM_CS0GCR2_WR((HW_EIM_CS0GCR2_RD() & ~BM_EIM_CS0GCR2_DAPS) | BF_EIM_CS0GCR2_DAPS(v)))
#endif


/* --- Register HW_EIM_CS0GCR2, field DAE[8] (RW)
 *
 * Data Acknowledge Enable. This bit indicates external device is using DTACK pin as
 * strobe/terminator of an async. access. DTACK signal may be used only in asynchronous single read
 * (APR=0) or write accesses. DTACK poling start point is set by DAPS bit field. polarity of DTACK
 * is set by DAP bit field. DAE is cleared by a hardware reset.
 *
 * Values:
 * 0 - DTACK signal use is disable
 * 1 - DTACK signal use is enable
 */

#define BP_EIM_CS0GCR2_DAE      (8)      //!< Bit position for EIM_CS0GCR2_DAE.
#define BM_EIM_CS0GCR2_DAE      (0x00000100)  //!< Bit mask for EIM_CS0GCR2_DAE.

//! @brief Get value of EIM_CS0GCR2_DAE from a register value.
#define BG_EIM_CS0GCR2_DAE(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_EIM_CS0GCR2_DAE) >> BP_EIM_CS0GCR2_DAE)

//! @brief Format value for bitfield EIM_CS0GCR2_DAE.
#define BF_EIM_CS0GCR2_DAE(v)   ((__REG_VALUE_TYPE((v), reg32_t) << BP_EIM_CS0GCR2_DAE) & BM_EIM_CS0GCR2_DAE)

#ifndef __LANGUAGE_ASM__
//! @brief Set the DAE field to a new value.
#define BW_EIM_CS0GCR2_DAE(v)   (HW_EIM_CS0GCR2_WR((HW_EIM_CS0GCR2_RD() & ~BM_EIM_CS0GCR2_DAE) | BF_EIM_CS0GCR2_DAE(v)))
#endif


/* --- Register HW_EIM_CS0GCR2, field DAP[9] (RW)
 *
 * Data Acknowledge Polarity. This bit indicates DTACK memory pin assertion state, active-low or
 * active-high, while executing an async access using DTACK signal from the external device. DAP is
 * cleared by a hardware reset.
 *
 * Values:
 * 0 - DTACK signal is active high
 * 1 - DTACK signal is active low
 */

#define BP_EIM_CS0GCR2_DAP      (9)      //!< Bit position for EIM_CS0GCR2_DAP.
#define BM_EIM_CS0GCR2_DAP      (0x00000200)  //!< Bit mask for EIM_CS0GCR2_DAP.

//! @brief Get value of EIM_CS0GCR2_DAP from a register value.
#define BG_EIM_CS0GCR2_DAP(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_EIM_CS0GCR2_DAP) >> BP_EIM_CS0GCR2_DAP)

//! @brief Format value for bitfield EIM_CS0GCR2_DAP.
#define BF_EIM_CS0GCR2_DAP(v)   ((__REG_VALUE_TYPE((v), reg32_t) << BP_EIM_CS0GCR2_DAP) & BM_EIM_CS0GCR2_DAP)

#ifndef __LANGUAGE_ASM__
//! @brief Set the DAP field to a new value.
#define BW_EIM_CS0GCR2_DAP(v)   (HW_EIM_CS0GCR2_WR((HW_EIM_CS0GCR2_RD() & ~BM_EIM_CS0GCR2_DAP) | BF_EIM_CS0GCR2_DAP(v)))
#endif


/* --- Register HW_EIM_CS0GCR2, field MUX16_BYP_GRANT[12] (RW)
 *
 * Muxed 16 bypass grant. This bit when asserted causes EIM to bypass the grant/ack. arbitration
 * with NFC (only for 16 bit muxed mode accesses).
 *
 * Values:
 * 0 - EIM waits for grant before driving a 16 bit muxed mode access to the memory.
 * 1 - EIM ignores the grant signal and immediately drives a 16 bit muxed mode access to the memory.
 */

#define BP_EIM_CS0GCR2_MUX16_BYP_GRANT      (12)      //!< Bit position for EIM_CS0GCR2_MUX16_BYP_GRANT.
#define BM_EIM_CS0GCR2_MUX16_BYP_GRANT      (0x00001000)  //!< Bit mask for EIM_CS0GCR2_MUX16_BYP_GRANT.

//! @brief Get value of EIM_CS0GCR2_MUX16_BYP_GRANT from a register value.
#define BG_EIM_CS0GCR2_MUX16_BYP_GRANT(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_EIM_CS0GCR2_MUX16_BYP_GRANT) >> BP_EIM_CS0GCR2_MUX16_BYP_GRANT)

//! @brief Format value for bitfield EIM_CS0GCR2_MUX16_BYP_GRANT.
#define BF_EIM_CS0GCR2_MUX16_BYP_GRANT(v)   ((__REG_VALUE_TYPE((v), reg32_t) << BP_EIM_CS0GCR2_MUX16_BYP_GRANT) & BM_EIM_CS0GCR2_MUX16_BYP_GRANT)

#ifndef __LANGUAGE_ASM__
//! @brief Set the MUX16_BYP_GRANT field to a new value.
#define BW_EIM_CS0GCR2_MUX16_BYP_GRANT(v)   (HW_EIM_CS0GCR2_WR((HW_EIM_CS0GCR2_RD() & ~BM_EIM_CS0GCR2_MUX16_BYP_GRANT) | BF_EIM_CS0GCR2_MUX16_BYP_GRANT(v)))
#endif


//-------------------------------------------------------------------------------------------
// HW_EIM_CS0RCR1 - Chip Select n Read Configuration Register 1
//-------------------------------------------------------------------------------------------

#ifndef __LANGUAGE_ASM__
/*!
 * @brief HW_EIM_CS0RCR1 - Chip Select n Read Configuration Register 1 (RW)
 *
 * Reset value: 0x00000000
 *

 */
typedef union _hw_eim_cs0rcr1
{
    reg32_t U;
    struct _hw_eim_cs0rcr1_bitfields
    {
        unsigned RCSN : 3; //!< [2:0] Read CS Negation.
        unsigned RESERVED0 : 1; //!< [3] Reserved
        unsigned RCSA : 3; //!< [6:4] Read CS Assertion.
        unsigned RESERVED1 : 1; //!< [7] Reserved
        unsigned OEN : 3; //!< [10:8] OE Negation.
        unsigned RESERVED2 : 1; //!< [11] Reserved
        unsigned OEA : 3; //!< [14:12] OE Assertion.
        unsigned RESERVED3 : 1; //!< [15] Reserved
        unsigned RADVN : 3; //!< [18:16] ADV Negation.
        unsigned RAL : 1; //!< [19] Read ADV Low.
        unsigned RADVA : 3; //!< [22:20] ADV Assertion.
        unsigned RESERVED4 : 1; //!< [23] Reserved
        unsigned RWSC : 6; //!< [29:24] Read Wait State Control.
        unsigned RESERVED5 : 2; //!< [31:30] Reserved
    } B;
} hw_eim_cs0rcr1_t;
#endif

/*
 * constants & macros for entire EIM_CS0RCR1 register
 */
#define HW_EIM_CS0RCR1_ADDR      (REGS_EIM_BASE + 0x8)

#ifndef __LANGUAGE_ASM__
#define HW_EIM_CS0RCR1           (*(volatile hw_eim_cs0rcr1_t *) HW_EIM_CS0RCR1_ADDR)
#define HW_EIM_CS0RCR1_RD()      (HW_EIM_CS0RCR1.U)
#define HW_EIM_CS0RCR1_WR(v)     (HW_EIM_CS0RCR1.U = (v))
#define HW_EIM_CS0RCR1_SET(v)    (HW_EIM_CS0RCR1_WR(HW_EIM_CS0RCR1_RD() |  (v)))
#define HW_EIM_CS0RCR1_CLR(v)    (HW_EIM_CS0RCR1_WR(HW_EIM_CS0RCR1_RD() & ~(v)))
#define HW_EIM_CS0RCR1_TOG(v)    (HW_EIM_CS0RCR1_WR(HW_EIM_CS0RCR1_RD() ^  (v)))
#endif

/*
 * constants & macros for individual EIM_CS0RCR1 bitfields
 */

/* --- Register HW_EIM_CS0RCR1, field RCSN[2:0] (RW)
 *
 * Read CS Negation. This bit field determines when CS signal is negated during read cycles in
 * asynchronous single mode only (SRD=0 & APR = 0), according to the settings shown below. This bit
 * field is ignored when SRD=1. RCSN is cleared by a hardware reset. Example settings:
 *
 * Values:
 * 000 - 0 EIM clock cycles between end of read access and CS negation
 * 001 - 1 EIM clock cycles between end of read access and CS negation
 * 010 - 2 EIM clock cycles between end of read access and CS negation
 * 111 - 7 EIM clock cycles between end of read access and CS negation
 */

#define BP_EIM_CS0RCR1_RCSN      (0)      //!< Bit position for EIM_CS0RCR1_RCSN.
#define BM_EIM_CS0RCR1_RCSN      (0x00000007)  //!< Bit mask for EIM_CS0RCR1_RCSN.

//! @brief Get value of EIM_CS0RCR1_RCSN from a register value.
#define BG_EIM_CS0RCR1_RCSN(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_EIM_CS0RCR1_RCSN) >> BP_EIM_CS0RCR1_RCSN)

//! @brief Format value for bitfield EIM_CS0RCR1_RCSN.
#define BF_EIM_CS0RCR1_RCSN(v)   ((__REG_VALUE_TYPE((v), reg32_t) << BP_EIM_CS0RCR1_RCSN) & BM_EIM_CS0RCR1_RCSN)

#ifndef __LANGUAGE_ASM__
//! @brief Set the RCSN field to a new value.
#define BW_EIM_CS0RCR1_RCSN(v)   (HW_EIM_CS0RCR1_WR((HW_EIM_CS0RCR1_RD() & ~BM_EIM_CS0RCR1_RCSN) | BF_EIM_CS0RCR1_RCSN(v)))
#endif


/* --- Register HW_EIM_CS0RCR1, field RCSA[6:4] (RW)
 *
 * Read CS Assertion. This bit field determines when CS signal is asserted during read cycles
 * (synchronous or asynchronous mode), according to the settings shown below. RCSA is cleared by a
 * hardware reset. Example settings:
 *
 * Values:
 * 000 - 0 EIM clock cycles between beginning of read access and CS assertion
 * 001 - 1 EIM clock cycles between beginning of read access and CS assertion
 * 010 - 2 EIM clock cycles between beginning of read access and CS assertion
 * 111 - 7 EIM clock cycles between beginning of read access and CS assertion
 */

#define BP_EIM_CS0RCR1_RCSA      (4)      //!< Bit position for EIM_CS0RCR1_RCSA.
#define BM_EIM_CS0RCR1_RCSA      (0x00000070)  //!< Bit mask for EIM_CS0RCR1_RCSA.

//! @brief Get value of EIM_CS0RCR1_RCSA from a register value.
#define BG_EIM_CS0RCR1_RCSA(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_EIM_CS0RCR1_RCSA) >> BP_EIM_CS0RCR1_RCSA)

//! @brief Format value for bitfield EIM_CS0RCR1_RCSA.
#define BF_EIM_CS0RCR1_RCSA(v)   ((__REG_VALUE_TYPE((v), reg32_t) << BP_EIM_CS0RCR1_RCSA) & BM_EIM_CS0RCR1_RCSA)

#ifndef __LANGUAGE_ASM__
//! @brief Set the RCSA field to a new value.
#define BW_EIM_CS0RCR1_RCSA(v)   (HW_EIM_CS0RCR1_WR((HW_EIM_CS0RCR1_RD() & ~BM_EIM_CS0RCR1_RCSA) | BF_EIM_CS0RCR1_RCSA(v)))
#endif


/* --- Register HW_EIM_CS0RCR1, field OEN[10:8] (RW)
 *
 * OE Negation. This bit field determines when OE signal is negated during read cycles in
 * asynchronous single mode only (SRD=0 & APR = 0), according to the settings shown below. This bit
 * field is ignored when SRD=1. OEN is cleared by a hardware reset. Example settings:
 *
 * Values:
 * 000 - 0 EIM clock cycles between end of access and OE negation
 * 001 - 1 EIM clock cycles between end of access and OE negation
 * 010 - 2 EIM clock cycles between end of access and OE negation
 * 111 - 7 EIM clock cycles between end of access and OE negation
 */

#define BP_EIM_CS0RCR1_OEN      (8)      //!< Bit position for EIM_CS0RCR1_OEN.
#define BM_EIM_CS0RCR1_OEN      (0x00000700)  //!< Bit mask for EIM_CS0RCR1_OEN.

//! @brief Get value of EIM_CS0RCR1_OEN from a register value.
#define BG_EIM_CS0RCR1_OEN(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_EIM_CS0RCR1_OEN) >> BP_EIM_CS0RCR1_OEN)

//! @brief Format value for bitfield EIM_CS0RCR1_OEN.
#define BF_EIM_CS0RCR1_OEN(v)   ((__REG_VALUE_TYPE((v), reg32_t) << BP_EIM_CS0RCR1_OEN) & BM_EIM_CS0RCR1_OEN)

#ifndef __LANGUAGE_ASM__
//! @brief Set the OEN field to a new value.
#define BW_EIM_CS0RCR1_OEN(v)   (HW_EIM_CS0RCR1_WR((HW_EIM_CS0RCR1_RD() & ~BM_EIM_CS0RCR1_OEN) | BF_EIM_CS0RCR1_OEN(v)))
#endif


/* --- Register HW_EIM_CS0RCR1, field OEA[14:12] (RW)
 *
 * OE Assertion. This bit field determines when OE signal are asserted during read cycles
 * (synchronous or asynchronous mode), according to the settings shown below. OEA is cleared by a
 * hardware reset. In muxed mode OE assertion occurs (OEA + RADVN + RADVA + ADH +1) EIM clock cycles
 * from start of access. The reset value for EIM_CS0RCR1[OEA] is 0b000 if EIM_BOOT[2] = 0. If
 * EIM_BOOT[2] is 1, the reset value for EIM_CS0RCR1 is 0b010. The reset value of this field for
 * EIM_CS1RCR1 - EIM_CS5RCR1 is 0b000. Example settings:
 *
 * Values:
 * 000 - 0 EIM clock cycles between beginning of access and OE assertion
 * 001 - 1 EIM clock cycles between beginning of access and OE assertion
 * 010 - 2 EIM clock cycles between beginning of access and OE assertion
 * 111 - 7 EIM clock cycles between beginning of access and OE assertion
 */

#define BP_EIM_CS0RCR1_OEA      (12)      //!< Bit position for EIM_CS0RCR1_OEA.
#define BM_EIM_CS0RCR1_OEA      (0x00007000)  //!< Bit mask for EIM_CS0RCR1_OEA.

//! @brief Get value of EIM_CS0RCR1_OEA from a register value.
#define BG_EIM_CS0RCR1_OEA(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_EIM_CS0RCR1_OEA) >> BP_EIM_CS0RCR1_OEA)

//! @brief Format value for bitfield EIM_CS0RCR1_OEA.
#define BF_EIM_CS0RCR1_OEA(v)   ((__REG_VALUE_TYPE((v), reg32_t) << BP_EIM_CS0RCR1_OEA) & BM_EIM_CS0RCR1_OEA)

#ifndef __LANGUAGE_ASM__
//! @brief Set the OEA field to a new value.
#define BW_EIM_CS0RCR1_OEA(v)   (HW_EIM_CS0RCR1_WR((HW_EIM_CS0RCR1_RD() & ~BM_EIM_CS0RCR1_OEA) | BF_EIM_CS0RCR1_OEA(v)))
#endif


/* --- Register HW_EIM_CS0RCR1, field RADVN[18:16] (RW)
 *
 * ADV Negation. This bit field determines when ADV signal to memory is negated during read
 * accesses. When SRD=1 (synchronous read mode), ADV negation occurs according to the following
 * formula: (RADVN + RADVA + BCD + BCS + 1) EIM clock cycles from start of access. When asynchronous
 * read mode is applied (SRD=0) and RAL=0 ADV negation occurs according to the following formula:
 * (RADVN + RADVA + 1) EIM clock cycles from start of access. RADVN is cleared by a hardware reset.
 * the reset value for EIM_CS0RCR1[RADVN] = 2. For EIM_CS1RCR1 - EIM_CS5RCR1, the reset value is
 * 0b000. This field should be configured so ADV negation will occur before the end of access. For
 * ADV negation at the same time with the end of access user should RAL bit.
 */

#define BP_EIM_CS0RCR1_RADVN      (16)      //!< Bit position for EIM_CS0RCR1_RADVN.
#define BM_EIM_CS0RCR1_RADVN      (0x00070000)  //!< Bit mask for EIM_CS0RCR1_RADVN.

//! @brief Get value of EIM_CS0RCR1_RADVN from a register value.
#define BG_EIM_CS0RCR1_RADVN(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_EIM_CS0RCR1_RADVN) >> BP_EIM_CS0RCR1_RADVN)

//! @brief Format value for bitfield EIM_CS0RCR1_RADVN.
#define BF_EIM_CS0RCR1_RADVN(v)   ((__REG_VALUE_TYPE((v), reg32_t) << BP_EIM_CS0RCR1_RADVN) & BM_EIM_CS0RCR1_RADVN)

#ifndef __LANGUAGE_ASM__
//! @brief Set the RADVN field to a new value.
#define BW_EIM_CS0RCR1_RADVN(v)   (HW_EIM_CS0RCR1_WR((HW_EIM_CS0RCR1_RD() & ~BM_EIM_CS0RCR1_RADVN) | BF_EIM_CS0RCR1_RADVN(v)))
#endif

/* --- Register HW_EIM_CS0RCR1, field RAL[19] (RW)
 *
 * Read ADV Low. This bit field determine ADV signal negation time. When RAL=1, RADVN bit field is
 * ignored and ADV signal will stay asserted until end of access. When RAL=0 negation of ADV signal
 * is according to RADVN bit field configuration.
 */

#define BP_EIM_CS0RCR1_RAL      (19)      //!< Bit position for EIM_CS0RCR1_RAL.
#define BM_EIM_CS0RCR1_RAL      (0x00080000)  //!< Bit mask for EIM_CS0RCR1_RAL.

//! @brief Get value of EIM_CS0RCR1_RAL from a register value.
#define BG_EIM_CS0RCR1_RAL(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_EIM_CS0RCR1_RAL) >> BP_EIM_CS0RCR1_RAL)

//! @brief Format value for bitfield EIM_CS0RCR1_RAL.
#define BF_EIM_CS0RCR1_RAL(v)   ((__REG_VALUE_TYPE((v), reg32_t) << BP_EIM_CS0RCR1_RAL) & BM_EIM_CS0RCR1_RAL)

#ifndef __LANGUAGE_ASM__
//! @brief Set the RAL field to a new value.
#define BW_EIM_CS0RCR1_RAL(v)   (HW_EIM_CS0RCR1_WR((HW_EIM_CS0RCR1_RD() & ~BM_EIM_CS0RCR1_RAL) | BF_EIM_CS0RCR1_RAL(v)))
#endif

/* --- Register HW_EIM_CS0RCR1, field RADVA[22:20] (RW)
 *
 * ADV Assertion. This bit field determines when ADV signal is asserted for synchronous or
 * asynchronous read modes according to the settings shown below. RADVA is cleared by a hardware
 * reset. Example settings:
 *
 * Values:
 * 000 - 0 EIM clock cycles between beginning of access and ADV assertion
 * 001 - 1 EIM clock cycles between beginning of access and ADV assertion
 * 010 - 2 EIM clock cycles between beginning of access and ADV assertion
 * 111 - 7 EIM clock cycles between beginning of access and ADV assertion
 */

#define BP_EIM_CS0RCR1_RADVA      (20)      //!< Bit position for EIM_CS0RCR1_RADVA.
#define BM_EIM_CS0RCR1_RADVA      (0x00700000)  //!< Bit mask for EIM_CS0RCR1_RADVA.

//! @brief Get value of EIM_CS0RCR1_RADVA from a register value.
#define BG_EIM_CS0RCR1_RADVA(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_EIM_CS0RCR1_RADVA) >> BP_EIM_CS0RCR1_RADVA)

//! @brief Format value for bitfield EIM_CS0RCR1_RADVA.
#define BF_EIM_CS0RCR1_RADVA(v)   ((__REG_VALUE_TYPE((v), reg32_t) << BP_EIM_CS0RCR1_RADVA) & BM_EIM_CS0RCR1_RADVA)

#ifndef __LANGUAGE_ASM__
//! @brief Set the RADVA field to a new value.
#define BW_EIM_CS0RCR1_RADVA(v)   (HW_EIM_CS0RCR1_WR((HW_EIM_CS0RCR1_RD() & ~BM_EIM_CS0RCR1_RADVA) | BF_EIM_CS0RCR1_RADVA(v)))
#endif


/* --- Register HW_EIM_CS0RCR1, field RWSC[29:24] (RW)
 *
 * Read Wait State Control. This bit field programs the number of wait-states, according to the
 * settings shown below, for synchronous or asynchronous read access to the external device
 * connected to the chip select. When SRD=1 and RFL=0, RWSC indicates the number of burst clock
 * (BCLK) cycles from the start of an access, before the controller can start sample data.Since WAIT
 * signal can be asserted one cycle before the first data can be sampled, the controller starts
 * evaluating the WAIT signal state one cycle before, this is referred as handshake mode or variable
 * latency mode. When SRD=1 and RFL=1, RWSC indicates the number of burst clock (BCLK) cycles from
 * the start of an access, until the external device is ready for data transfer, this is referred as
 * fix latency mode. When SRD=0, RFL bit is ignored, RWSC indicates the asynchronous access length
 * and the number of EIM clock cycles from the start of access until the external device is ready
 * for data transfer. RWSC is cleared by a hardware reset. The reset value for EIM_CS0RCR1,
 * RWSC[5:0] = 0b011100. For CG1RCR1 - CS1RCR5 the reset value is 0b000000. Example settings:
 *
 * Values:
 * 000000 - Reserved
 * 000001 - RWSC value is 1
 * 000010 - RWSC value is 2
 * 111101 - RWSC value is 61
 * 111110 - RWSC value is 62
 * 111111 - RWSC value is 63
 */

#define BP_EIM_CS0RCR1_RWSC      (24)      //!< Bit position for EIM_CS0RCR1_RWSC.
#define BM_EIM_CS0RCR1_RWSC      (0x3f000000)  //!< Bit mask for EIM_CS0RCR1_RWSC.

//! @brief Get value of EIM_CS0RCR1_RWSC from a register value.
#define BG_EIM_CS0RCR1_RWSC(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_EIM_CS0RCR1_RWSC) >> BP_EIM_CS0RCR1_RWSC)

//! @brief Format value for bitfield EIM_CS0RCR1_RWSC.
#define BF_EIM_CS0RCR1_RWSC(v)   ((__REG_VALUE_TYPE((v), reg32_t) << BP_EIM_CS0RCR1_RWSC) & BM_EIM_CS0RCR1_RWSC)

#ifndef __LANGUAGE_ASM__
//! @brief Set the RWSC field to a new value.
#define BW_EIM_CS0RCR1_RWSC(v)   (HW_EIM_CS0RCR1_WR((HW_EIM_CS0RCR1_RD() & ~BM_EIM_CS0RCR1_RWSC) | BF_EIM_CS0RCR1_RWSC(v)))
#endif


//-------------------------------------------------------------------------------------------
// HW_EIM_CS0RCR2 - Chip Select n Read Configuration Register 2
//-------------------------------------------------------------------------------------------

#ifndef __LANGUAGE_ASM__
/*!
 * @brief HW_EIM_CS0RCR2 - Chip Select n Read Configuration Register 2 (RW)
 *
 * Reset value: 0x00000000
 *

 */
typedef union _hw_eim_cs0rcr2
{
    reg32_t U;
    struct _hw_eim_cs0rcr2_bitfields
    {
        unsigned RBEN : 3; //!< [2:0] Read BE Negation.
        unsigned RBE : 1; //!< [3] Read BE enable.
        unsigned RBEA : 3; //!< [6:4] Read BE Assertion.
        unsigned RESERVED0 : 1; //!< [7] Reserved
        unsigned RL : 2; //!< [9:8] Read Latency.
        unsigned RESERVED1 : 2; //!< [11:10] Reserved
        unsigned PAT : 3; //!< [14:12] Page Access Time.
        unsigned APR : 1; //!< [15] Asynchronous Page Read.
        unsigned RESERVED2 : 16; //!< [31:16] Reserved
    } B;
} hw_eim_cs0rcr2_t;
#endif

/*
 * constants & macros for entire EIM_CS0RCR2 register
 */
#define HW_EIM_CS0RCR2_ADDR      (REGS_EIM_BASE + 0xc)

#ifndef __LANGUAGE_ASM__
#define HW_EIM_CS0RCR2           (*(volatile hw_eim_cs0rcr2_t *) HW_EIM_CS0RCR2_ADDR)
#define HW_EIM_CS0RCR2_RD()      (HW_EIM_CS0RCR2.U)
#define HW_EIM_CS0RCR2_WR(v)     (HW_EIM_CS0RCR2.U = (v))
#define HW_EIM_CS0RCR2_SET(v)    (HW_EIM_CS0RCR2_WR(HW_EIM_CS0RCR2_RD() |  (v)))
#define HW_EIM_CS0RCR2_CLR(v)    (HW_EIM_CS0RCR2_WR(HW_EIM_CS0RCR2_RD() & ~(v)))
#define HW_EIM_CS0RCR2_TOG(v)    (HW_EIM_CS0RCR2_WR(HW_EIM_CS0RCR2_RD() ^  (v)))
#endif

/*
 * constants & macros for individual EIM_CS0RCR2 bitfields
 */

/* --- Register HW_EIM_CS0RCR2, field RBEN[2:0] (RW)
 *
 * Read BE Negation. This bit field determines when BE signal is negated during read cycles in
 * asynchronous single mode only (SRD=0 & APR=0), according to the settings shown below. This bit
 * field is ignored when SRD=1. RBEN is cleared by a hardware reset. Example settings:
 *
 * Values:
 * 000 - 0 EIM clock cycles between end of read access and BE negation
 * 001 - 1 EIM clock cycles between end of read access and BE negation
 * 010 - 2 EIM clock cycles between end of read access and BE negation
 * 111 - 7 EIM clock cycles between end of read access and BE negation
 */

#define BP_EIM_CS0RCR2_RBEN      (0)      //!< Bit position for EIM_CS0RCR2_RBEN.
#define BM_EIM_CS0RCR2_RBEN      (0x00000007)  //!< Bit mask for EIM_CS0RCR2_RBEN.

//! @brief Get value of EIM_CS0RCR2_RBEN from a register value.
#define BG_EIM_CS0RCR2_RBEN(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_EIM_CS0RCR2_RBEN) >> BP_EIM_CS0RCR2_RBEN)

//! @brief Format value for bitfield EIM_CS0RCR2_RBEN.
#define BF_EIM_CS0RCR2_RBEN(v)   ((__REG_VALUE_TYPE((v), reg32_t) << BP_EIM_CS0RCR2_RBEN) & BM_EIM_CS0RCR2_RBEN)

#ifndef __LANGUAGE_ASM__
//! @brief Set the RBEN field to a new value.
#define BW_EIM_CS0RCR2_RBEN(v)   (HW_EIM_CS0RCR2_WR((HW_EIM_CS0RCR2_RD() & ~BM_EIM_CS0RCR2_RBEN) | BF_EIM_CS0RCR2_RBEN(v)))
#endif


/* --- Register HW_EIM_CS0RCR2, field RBE[3] (RW)
 *
 * Read BE enable. This bit field determines if BE will be asserted during read access.
 *
 * Values:
 * 0 - - BE are disabled during read access.
 * 1- - BE are enable during read access according to value of RBEA & RBEN bit fields.
 */

#define BP_EIM_CS0RCR2_RBE      (3)      //!< Bit position for EIM_CS0RCR2_RBE.
#define BM_EIM_CS0RCR2_RBE      (0x00000008)  //!< Bit mask for EIM_CS0RCR2_RBE.

//! @brief Get value of EIM_CS0RCR2_RBE from a register value.
#define BG_EIM_CS0RCR2_RBE(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_EIM_CS0RCR2_RBE) >> BP_EIM_CS0RCR2_RBE)

//! @brief Format value for bitfield EIM_CS0RCR2_RBE.
#define BF_EIM_CS0RCR2_RBE(v)   ((__REG_VALUE_TYPE((v), reg32_t) << BP_EIM_CS0RCR2_RBE) & BM_EIM_CS0RCR2_RBE)

#ifndef __LANGUAGE_ASM__
//! @brief Set the RBE field to a new value.
#define BW_EIM_CS0RCR2_RBE(v)   (HW_EIM_CS0RCR2_WR((HW_EIM_CS0RCR2_RD() & ~BM_EIM_CS0RCR2_RBE) | BF_EIM_CS0RCR2_RBE(v)))
#endif


/* --- Register HW_EIM_CS0RCR2, field RBEA[6:4] (RW)
 *
 * Read BE Assertion. This bit field determines when BE signal is asserted during read cycles
 * (synchronous or asynchronous mode), according to the settings shown below. RBEA is cleared by a
 * hardware reset. Example settings:
 *
 * Values:
 * 000 - 0 EIM clock cycles between beginning of read access and BE assertion
 * 001 - 1 EIM clock cycles between beginning of read access and BE assertion
 * 010 - 2 EIM clock cycles between beginning of read access and BE assertion
 * 111 - 7 EIM clock cycles between beginning of read access and BE assertion
 */

#define BP_EIM_CS0RCR2_RBEA      (4)      //!< Bit position for EIM_CS0RCR2_RBEA.
#define BM_EIM_CS0RCR2_RBEA      (0x00000070)  //!< Bit mask for EIM_CS0RCR2_RBEA.

//! @brief Get value of EIM_CS0RCR2_RBEA from a register value.
#define BG_EIM_CS0RCR2_RBEA(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_EIM_CS0RCR2_RBEA) >> BP_EIM_CS0RCR2_RBEA)

//! @brief Format value for bitfield EIM_CS0RCR2_RBEA.
#define BF_EIM_CS0RCR2_RBEA(v)   ((__REG_VALUE_TYPE((v), reg32_t) << BP_EIM_CS0RCR2_RBEA) & BM_EIM_CS0RCR2_RBEA)

#ifndef __LANGUAGE_ASM__
//! @brief Set the RBEA field to a new value.
#define BW_EIM_CS0RCR2_RBEA(v)   (HW_EIM_CS0RCR2_WR((HW_EIM_CS0RCR2_RD() & ~BM_EIM_CS0RCR2_RBEA) | BF_EIM_CS0RCR2_RBEA(v)))
#endif


/* --- Register HW_EIM_CS0RCR2, field RL[9:8] (RW)
 *
 * Read Latency. This bit field indicates cycle latency when executing a synchronous read operation.
 * The fields holds the feedback clock loop delay in aclk cycle units. This field is cleared by a
 * hardware reset.
 *
 * Values:
 * 00 - Feedback clock loop delay is up to 1 cycle for BCD = 0 or 1.5 cycles for BCD != 0
 * 01 - Feedback clock loop delay is up to 2 cycles for BCD = 0 or 2.5 cycles for BCD != 0
 * 10 - Feedback clock loop delay is up to 3 cycles for BCD = 0 or 3.5 cycles for BCD != 0
 * 11 - Feedback clock loop delay is up to 4 cycles for BCD = 0 or 4.5 cycles for BCD != 0
 */

#define BP_EIM_CS0RCR2_RL      (8)      //!< Bit position for EIM_CS0RCR2_RL.
#define BM_EIM_CS0RCR2_RL      (0x00000300)  //!< Bit mask for EIM_CS0RCR2_RL.

//! @brief Get value of EIM_CS0RCR2_RL from a register value.
#define BG_EIM_CS0RCR2_RL(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_EIM_CS0RCR2_RL) >> BP_EIM_CS0RCR2_RL)

//! @brief Format value for bitfield EIM_CS0RCR2_RL.
#define BF_EIM_CS0RCR2_RL(v)   ((__REG_VALUE_TYPE((v), reg32_t) << BP_EIM_CS0RCR2_RL) & BM_EIM_CS0RCR2_RL)

#ifndef __LANGUAGE_ASM__
//! @brief Set the RL field to a new value.
#define BW_EIM_CS0RCR2_RL(v)   (HW_EIM_CS0RCR2_WR((HW_EIM_CS0RCR2_RD() & ~BM_EIM_CS0RCR2_RL) | BF_EIM_CS0RCR2_RL(v)))
#endif


/* --- Register HW_EIM_CS0RCR2, field PAT[14:12] (RW)
 *
 * Page Access Time. This bit field is used in Asynchronous Page Read mode only (APR=1). the initial
 * access is set by RWSC as in regular asynchronous mode. the consecutive address assertions width
 * determine by PAT field according to the settings shown below. when APR=0 this field is ignored.
 * PAT is cleared by a hardware reset for EIM_CS1GCR1 - EIM_CS5GCR1.
 *
 * Values:
 * 000 - Address width is 2 EIM clock cycles
 * 001 - Address width is 3 EIM clock cycles
 * 010 - Address width is 4 EIM clock cycles
 * 011 - Address width is 5 EIM clock cycles
 * 100 - Address width is 6 EIM clock cycles
 * 101 - Address width is 7 EIM clock cycles
 * 110 - Address width is 8 EIM clock cycles
 * 111 - Address width is 9 EIM clock cycles
 */

#define BP_EIM_CS0RCR2_PAT      (12)      //!< Bit position for EIM_CS0RCR2_PAT.
#define BM_EIM_CS0RCR2_PAT      (0x00007000)  //!< Bit mask for EIM_CS0RCR2_PAT.

//! @brief Get value of EIM_CS0RCR2_PAT from a register value.
#define BG_EIM_CS0RCR2_PAT(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_EIM_CS0RCR2_PAT) >> BP_EIM_CS0RCR2_PAT)

//! @brief Format value for bitfield EIM_CS0RCR2_PAT.
#define BF_EIM_CS0RCR2_PAT(v)   ((__REG_VALUE_TYPE((v), reg32_t) << BP_EIM_CS0RCR2_PAT) & BM_EIM_CS0RCR2_PAT)

#ifndef __LANGUAGE_ASM__
//! @brief Set the PAT field to a new value.
#define BW_EIM_CS0RCR2_PAT(v)   (HW_EIM_CS0RCR2_WR((HW_EIM_CS0RCR2_RD() & ~BM_EIM_CS0RCR2_PAT) | BF_EIM_CS0RCR2_PAT(v)))
#endif


/* --- Register HW_EIM_CS0RCR2, field APR[15] (RW)
 *
 * Asynchronous Page Read. This bit field determine the asynchronous read mode to the external
 * device. When APR=0, the async. read access is done as single word (where word is defined by the
 * DSZ field). when APR=1, the async. read access executed as page read. page size is according to
 * BL field config., RCSN,RBEN,OEN and RADVN are being ignored. APR is cleared by a hardware reset
 * for EIM_CS1GCR1 - EIM_CS5GCR1. SRD=0 and MUM=0 must apply when APR=1
 */

#define BP_EIM_CS0RCR2_APR      (15)      //!< Bit position for EIM_CS0RCR2_APR.
#define BM_EIM_CS0RCR2_APR      (0x00008000)  //!< Bit mask for EIM_CS0RCR2_APR.

//! @brief Get value of EIM_CS0RCR2_APR from a register value.
#define BG_EIM_CS0RCR2_APR(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_EIM_CS0RCR2_APR) >> BP_EIM_CS0RCR2_APR)

//! @brief Format value for bitfield EIM_CS0RCR2_APR.
#define BF_EIM_CS0RCR2_APR(v)   ((__REG_VALUE_TYPE((v), reg32_t) << BP_EIM_CS0RCR2_APR) & BM_EIM_CS0RCR2_APR)

#ifndef __LANGUAGE_ASM__
//! @brief Set the APR field to a new value.
#define BW_EIM_CS0RCR2_APR(v)   (HW_EIM_CS0RCR2_WR((HW_EIM_CS0RCR2_RD() & ~BM_EIM_CS0RCR2_APR) | BF_EIM_CS0RCR2_APR(v)))
#endif

//-------------------------------------------------------------------------------------------
// HW_EIM_CS0WCR1 - Chip Select n Write Configuration Register 1
//-------------------------------------------------------------------------------------------

#ifndef __LANGUAGE_ASM__
/*!
 * @brief HW_EIM_CS0WCR1 - Chip Select n Write Configuration Register 1 (RW)
 *
 * Reset value: 0x00000000
 *

 */
typedef union _hw_eim_cs0wcr1
{
    reg32_t U;
    struct _hw_eim_cs0wcr1_bitfields
    {
        unsigned WCSN : 3; //!< [2:0] Write CS Negation.
        unsigned WCSA : 3; //!< [5:3] Write CS Assertion.
        unsigned WEN : 3; //!< [8:6] WE Negation.
        unsigned WEA : 3; //!< [11:9] WE Assertion.
        unsigned WBEN : 3; //!< [14:12] BE[3:0] Negation.
        unsigned WBEA : 3; //!< [17:15] BE Assertion.
        unsigned WADVN : 3; //!< [20:18] ADV Negation.
        unsigned WADVA : 3; //!< [23:21] ADV Assertion.
        unsigned WWSC : 6; //!< [29:24] Write Wait State Control.
        unsigned WBED : 1; //!< [30] Write Byte Enable Disable.
        unsigned WAL : 1; //!< [31] Write ADV Low.
    } B;
} hw_eim_cs0wcr1_t;
#endif

/*
 * constants & macros for entire EIM_CS0WCR1 register
 */
#define HW_EIM_CS0WCR1_ADDR      (REGS_EIM_BASE + 0x10)

#ifndef __LANGUAGE_ASM__
#define HW_EIM_CS0WCR1           (*(volatile hw_eim_cs0wcr1_t *) HW_EIM_CS0WCR1_ADDR)
#define HW_EIM_CS0WCR1_RD()      (HW_EIM_CS0WCR1.U)
#define HW_EIM_CS0WCR1_WR(v)     (HW_EIM_CS0WCR1.U = (v))
#define HW_EIM_CS0WCR1_SET(v)    (HW_EIM_CS0WCR1_WR(HW_EIM_CS0WCR1_RD() |  (v)))
#define HW_EIM_CS0WCR1_CLR(v)    (HW_EIM_CS0WCR1_WR(HW_EIM_CS0WCR1_RD() & ~(v)))
#define HW_EIM_CS0WCR1_TOG(v)    (HW_EIM_CS0WCR1_WR(HW_EIM_CS0WCR1_RD() ^  (v)))
#endif

/*
 * constants & macros for individual EIM_CS0WCR1 bitfields
 */

/* --- Register HW_EIM_CS0WCR1, field WCSN[2:0] (RW)
 *
 * Write CS Negation. This bit field determines when CS signal is negated during write cycles in
 * asynchronous mode only (SWR=0), according to the settings shown below. This bit field is ignored
 * when SWR=1. WCSN is cleared by a hardware reset. Example settings:
 *
 * Values:
 * 000 - 0 EIM clock cycles between end of read access and CS negation
 * 001 - 1 EIM clock cycles between end of read access and CS negation
 * 010 - 2 EIM clock cycles between end of read access and CS negation
 * 111 - 7 EIM clock cycles between end of read access and CS negation
 */

#define BP_EIM_CS0WCR1_WCSN      (0)      //!< Bit position for EIM_CS0WCR1_WCSN.
#define BM_EIM_CS0WCR1_WCSN      (0x00000007)  //!< Bit mask for EIM_CS0WCR1_WCSN.

//! @brief Get value of EIM_CS0WCR1_WCSN from a register value.
#define BG_EIM_CS0WCR1_WCSN(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_EIM_CS0WCR1_WCSN) >> BP_EIM_CS0WCR1_WCSN)

//! @brief Format value for bitfield EIM_CS0WCR1_WCSN.
#define BF_EIM_CS0WCR1_WCSN(v)   ((__REG_VALUE_TYPE((v), reg32_t) << BP_EIM_CS0WCR1_WCSN) & BM_EIM_CS0WCR1_WCSN)

#ifndef __LANGUAGE_ASM__
//! @brief Set the WCSN field to a new value.
#define BW_EIM_CS0WCR1_WCSN(v)   (HW_EIM_CS0WCR1_WR((HW_EIM_CS0WCR1_RD() & ~BM_EIM_CS0WCR1_WCSN) | BF_EIM_CS0WCR1_WCSN(v)))
#endif


/* --- Register HW_EIM_CS0WCR1, field WCSA[5:3] (RW)
 *
 * Write CS Assertion. This bit field determines when CS signal is asserted during write cycles
 * (synchronous or asynchronous mode), according to the settings shown below.this bit field is
 * ignored when executing a read access to the external device. WCSA is cleared by a hardware reset.
 * Example settings:
 *
 * Values:
 * 000 - 0 EIM clock cycles between beginning of write access and CS assertion
 * 001 - 1 EIM clock cycles between beginning of write access and CS assertion
 * 010 - 2 EIM clock cycles between beginning of write access and CS assertion
 * 111 - 7 EIMclock cycles between beginning of write access and CS assertion
 */

#define BP_EIM_CS0WCR1_WCSA      (3)      //!< Bit position for EIM_CS0WCR1_WCSA.
#define BM_EIM_CS0WCR1_WCSA      (0x00000038)  //!< Bit mask for EIM_CS0WCR1_WCSA.

//! @brief Get value of EIM_CS0WCR1_WCSA from a register value.
#define BG_EIM_CS0WCR1_WCSA(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_EIM_CS0WCR1_WCSA) >> BP_EIM_CS0WCR1_WCSA)

//! @brief Format value for bitfield EIM_CS0WCR1_WCSA.
#define BF_EIM_CS0WCR1_WCSA(v)   ((__REG_VALUE_TYPE((v), reg32_t) << BP_EIM_CS0WCR1_WCSA) & BM_EIM_CS0WCR1_WCSA)

#ifndef __LANGUAGE_ASM__
//! @brief Set the WCSA field to a new value.
#define BW_EIM_CS0WCR1_WCSA(v)   (HW_EIM_CS0WCR1_WR((HW_EIM_CS0WCR1_RD() & ~BM_EIM_CS0WCR1_WCSA) | BF_EIM_CS0WCR1_WCSA(v)))
#endif


/* --- Register HW_EIM_CS0WCR1, field WEN[8:6] (RW)
 *
 * WE Negation. This bit field determines when WE signal is negated during write cycles in
 * asynchronous mode only (SWR=0), according to the settings shown below. This bit field is ignored
 * when SWR=1. WEN is cleared by a hardware reset. Reset value for EIM_CS0WCR for WEN is 2. For
 * EIM_CS1WCR - EIM_CS5WCR reset value is 000. Example settings:
 *
 * Values:
 * 000 - 0 EIM clock cycles between beginning of access and WE assertion
 * 001 - 1 EIM clock cycles between beginning of access and WE assertion
 * 010 - 2 EIM clock cycles between beginning of access and WE assertion
 * 111 - 7 EIM clock cycles between beginning of access and WE assertion
 */

#define BP_EIM_CS0WCR1_WEN      (6)      //!< Bit position for EIM_CS0WCR1_WEN.
#define BM_EIM_CS0WCR1_WEN      (0x000001c0)  //!< Bit mask for EIM_CS0WCR1_WEN.

//! @brief Get value of EIM_CS0WCR1_WEN from a register value.
#define BG_EIM_CS0WCR1_WEN(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_EIM_CS0WCR1_WEN) >> BP_EIM_CS0WCR1_WEN)

//! @brief Format value for bitfield EIM_CS0WCR1_WEN.
#define BF_EIM_CS0WCR1_WEN(v)   ((__REG_VALUE_TYPE((v), reg32_t) << BP_EIM_CS0WCR1_WEN) & BM_EIM_CS0WCR1_WEN)

#ifndef __LANGUAGE_ASM__
//! @brief Set the WEN field to a new value.
#define BW_EIM_CS0WCR1_WEN(v)   (HW_EIM_CS0WCR1_WR((HW_EIM_CS0WCR1_RD() & ~BM_EIM_CS0WCR1_WEN) | BF_EIM_CS0WCR1_WEN(v)))
#endif


/* --- Register HW_EIM_CS0WCR1, field WEA[11:9] (RW)
 *
 * WE Assertion. This bit field determines when WE signal is asserted during write cycles
 * (synchronous or asynchronous mode), according to the settings shown below. This bit field is
 * ignored when executing a read access to the external device. WEA is cleared by a hardware reset.
 * Reset value for EIM_CS0WCR for WEA is 2. For EIM_CS1WCR - EIM_CS5WCR reset value is 000. Example
 * settings:
 *
 * Values:
 * 000 - 0 EIM clock cycles between beginning of access and WE assertion
 * 001 - 1 EIM clock cycles between beginning of access and WE assertion
 * 010 - 2 EIM clock cycles between beginning of access and WE assertion
 * 111 - 7 EIMclock cycles between beginning of access and WE assertion
 */

#define BP_EIM_CS0WCR1_WEA      (9)      //!< Bit position for EIM_CS0WCR1_WEA.
#define BM_EIM_CS0WCR1_WEA      (0x00000e00)  //!< Bit mask for EIM_CS0WCR1_WEA.

//! @brief Get value of EIM_CS0WCR1_WEA from a register value.
#define BG_EIM_CS0WCR1_WEA(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_EIM_CS0WCR1_WEA) >> BP_EIM_CS0WCR1_WEA)

//! @brief Format value for bitfield EIM_CS0WCR1_WEA.
#define BF_EIM_CS0WCR1_WEA(v)   ((__REG_VALUE_TYPE((v), reg32_t) << BP_EIM_CS0WCR1_WEA) & BM_EIM_CS0WCR1_WEA)

#ifndef __LANGUAGE_ASM__
//! @brief Set the WEA field to a new value.
#define BW_EIM_CS0WCR1_WEA(v)   (HW_EIM_CS0WCR1_WR((HW_EIM_CS0WCR1_RD() & ~BM_EIM_CS0WCR1_WEA) | BF_EIM_CS0WCR1_WEA(v)))
#endif


/* --- Register HW_EIM_CS0WCR1, field WBEN[14:12] (RW)
 *
 * BE[3:0] Negation. This bit field determines when BE[3:0] bus signal is negated during write
 * cycles in async. mode only (SWR=0), according to the settings shown below. This bit field is
 * ignored when SWR=1. BEN is cleared by a hardware reset. Reset value for EIM_CS0WCR for WBEN is 2.
 * For EIM_CS1WCR - EIM_CS5WCR reset value is 000. Example settings: 000 0 EIM clock cycles between
 * end of access and WE negation 001 1 EIM clock cycles between end of access and WE negation 010 2
 * EIM clock cycles between end of access and WE negation 111 7 EIM clock cycles between end of
 * access and WE negation
 */

#define BP_EIM_CS0WCR1_WBEN      (12)      //!< Bit position for EIM_CS0WCR1_WBEN.
#define BM_EIM_CS0WCR1_WBEN      (0x00007000)  //!< Bit mask for EIM_CS0WCR1_WBEN.

//! @brief Get value of EIM_CS0WCR1_WBEN from a register value.
#define BG_EIM_CS0WCR1_WBEN(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_EIM_CS0WCR1_WBEN) >> BP_EIM_CS0WCR1_WBEN)

//! @brief Format value for bitfield EIM_CS0WCR1_WBEN.
#define BF_EIM_CS0WCR1_WBEN(v)   ((__REG_VALUE_TYPE((v), reg32_t) << BP_EIM_CS0WCR1_WBEN) & BM_EIM_CS0WCR1_WBEN)

#ifndef __LANGUAGE_ASM__
//! @brief Set the WBEN field to a new value.
#define BW_EIM_CS0WCR1_WBEN(v)   (HW_EIM_CS0WCR1_WR((HW_EIM_CS0WCR1_RD() & ~BM_EIM_CS0WCR1_WBEN) | BF_EIM_CS0WCR1_WBEN(v)))
#endif

/* --- Register HW_EIM_CS0WCR1, field WBEA[17:15] (RW)
 *
 * BE Assertion. This bit field determines when BE signal is asserted during write cycles in async.
 * mode only (SWR=0), according to the settings shown below. BEA is cleared by a hardware reset.
 * Reset value for EIM_CS0WCR for WBEA is 2. For EIM_CS1WCR - EIM_CS5WCR reset value is 000. Example
 * settings:
 *
 * Values:
 * 000 - 0 EIM clock cycles between beginning of access and BE assertion
 * 001 - 1 EIM clock cycles between beginning of access and BE assertion
 * 010 - 2 EIM clock cycles between beginning of access and BE assertion
 * 111 - 7 EIM clock cycles between beginning of access and BE assertion
 */

#define BP_EIM_CS0WCR1_WBEA      (15)      //!< Bit position for EIM_CS0WCR1_WBEA.
#define BM_EIM_CS0WCR1_WBEA      (0x00038000)  //!< Bit mask for EIM_CS0WCR1_WBEA.

//! @brief Get value of EIM_CS0WCR1_WBEA from a register value.
#define BG_EIM_CS0WCR1_WBEA(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_EIM_CS0WCR1_WBEA) >> BP_EIM_CS0WCR1_WBEA)

//! @brief Format value for bitfield EIM_CS0WCR1_WBEA.
#define BF_EIM_CS0WCR1_WBEA(v)   ((__REG_VALUE_TYPE((v), reg32_t) << BP_EIM_CS0WCR1_WBEA) & BM_EIM_CS0WCR1_WBEA)

#ifndef __LANGUAGE_ASM__
//! @brief Set the WBEA field to a new value.
#define BW_EIM_CS0WCR1_WBEA(v)   (HW_EIM_CS0WCR1_WR((HW_EIM_CS0WCR1_RD() & ~BM_EIM_CS0WCR1_WBEA) | BF_EIM_CS0WCR1_WBEA(v)))
#endif


/* --- Register HW_EIM_CS0WCR1, field WADVN[20:18] (RW)
 *
 * ADV Negation. This bit field determines when ADV signal to memory is negated during write
 * accesses. When SWR=1 (synchronous write mode), ADV negation occurs according to the following
 * formula: (WADVN + WADVA + BCD + BCS + 1) EIM clock cycles. When asynchronous read mode is applied
 * (SWR=0) ADV negation occurs according to the following formula: (WADVN + WADVA + 1) EIM clock
 * cycles. Reset value for EIM_CS0WCR for WADVN is 2. For EIM_CS1WCR - EIM_CS5WCR reset value is
 * 000. This field should be configured so ADV negation will occur before the end of access. For ADV
 * negation at the same time as the end of access, S/W should set the WAL bit.
 */

#define BP_EIM_CS0WCR1_WADVN      (18)      //!< Bit position for EIM_CS0WCR1_WADVN.
#define BM_EIM_CS0WCR1_WADVN      (0x001c0000)  //!< Bit mask for EIM_CS0WCR1_WADVN.

//! @brief Get value of EIM_CS0WCR1_WADVN from a register value.
#define BG_EIM_CS0WCR1_WADVN(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_EIM_CS0WCR1_WADVN) >> BP_EIM_CS0WCR1_WADVN)

//! @brief Format value for bitfield EIM_CS0WCR1_WADVN.
#define BF_EIM_CS0WCR1_WADVN(v)   ((__REG_VALUE_TYPE((v), reg32_t) << BP_EIM_CS0WCR1_WADVN) & BM_EIM_CS0WCR1_WADVN)

#ifndef __LANGUAGE_ASM__
//! @brief Set the WADVN field to a new value.
#define BW_EIM_CS0WCR1_WADVN(v)   (HW_EIM_CS0WCR1_WR((HW_EIM_CS0WCR1_RD() & ~BM_EIM_CS0WCR1_WADVN) | BF_EIM_CS0WCR1_WADVN(v)))
#endif

/* --- Register HW_EIM_CS0WCR1, field WADVA[23:21] (RW)
 *
 * ADV Assertion. This bit field determines when ADV signal is asserted for synchronous or
 * asynchronous write modes according to the settings shown below. WADVA is cleared by a hardware
 * reset. Example settings:
 *
 * Values:
 * 000 - 0 EIM clock cycles between beginning of access and ADV assertion
 * 001 - 1 EIM clock cycles between beginning of access and ADV assertion
 * 010 - 2 EIM clock cycles between beginning of access and ADV assertion
 * 111 - 7 EIM clock cycles between beginning of access and ADV assertion
 */

#define BP_EIM_CS0WCR1_WADVA      (21)      //!< Bit position for EIM_CS0WCR1_WADVA.
#define BM_EIM_CS0WCR1_WADVA      (0x00e00000)  //!< Bit mask for EIM_CS0WCR1_WADVA.

//! @brief Get value of EIM_CS0WCR1_WADVA from a register value.
#define BG_EIM_CS0WCR1_WADVA(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_EIM_CS0WCR1_WADVA) >> BP_EIM_CS0WCR1_WADVA)

//! @brief Format value for bitfield EIM_CS0WCR1_WADVA.
#define BF_EIM_CS0WCR1_WADVA(v)   ((__REG_VALUE_TYPE((v), reg32_t) << BP_EIM_CS0WCR1_WADVA) & BM_EIM_CS0WCR1_WADVA)

#ifndef __LANGUAGE_ASM__
//! @brief Set the WADVA field to a new value.
#define BW_EIM_CS0WCR1_WADVA(v)   (HW_EIM_CS0WCR1_WR((HW_EIM_CS0WCR1_RD() & ~BM_EIM_CS0WCR1_WADVA) | BF_EIM_CS0WCR1_WADVA(v)))
#endif


/* --- Register HW_EIM_CS0WCR1, field WWSC[29:24] (RW)
 *
 * Write Wait State Control. This bit field programs the number of wait-states, according to the
 * settings shown below, for synchronous or asynchronous write access to the external device
 * connected to the chip select. When SWR=1 and WFL=0, WWSC indicates the number of burst clock
 * (BCLK) cycles from the start of an access, before the memory can sample the first data.Since WAIT
 * signal can be asserted one cycle before the first data can be sampled, the controller starts
 * evaluating the WAIT signal state one cycle before, this is referred as handshake mode or variable
 * latency mode. When SWR=1 and WFL=1, WWSC indicates the number of burst clock (BCLK) cycles from
 * the start of an access, until the external device is ready for data transfer, this is referred as
 * fix latency mode. When SWR=0, WFL bit is ignored, WWSC indicates the asynchronous access length
 * and the number of EIM clock cycles from the start of access until the external device is ready
 * for data transfer. WWSC is cleared by a hardware reset. The reset value for EIM_CS0WCR1,
 * WWSC[5:0] = 0b011100. For EIM_CS1WCR1 - EIM_CS5WCR1, the reset value of this field is 0b000000.
 * Example settings:
 *
 * Values:
 * 000000 - Reserved
 * 000001 - WWSC value is 1
 * 000010 - WWSC value is 2
 * 000011 - WWSC value is 3
 * 111111 - WWSC value is 63
 */

#define BP_EIM_CS0WCR1_WWSC      (24)      //!< Bit position for EIM_CS0WCR1_WWSC.
#define BM_EIM_CS0WCR1_WWSC      (0x3f000000)  //!< Bit mask for EIM_CS0WCR1_WWSC.

//! @brief Get value of EIM_CS0WCR1_WWSC from a register value.
#define BG_EIM_CS0WCR1_WWSC(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_EIM_CS0WCR1_WWSC) >> BP_EIM_CS0WCR1_WWSC)

//! @brief Format value for bitfield EIM_CS0WCR1_WWSC.
#define BF_EIM_CS0WCR1_WWSC(v)   ((__REG_VALUE_TYPE((v), reg32_t) << BP_EIM_CS0WCR1_WWSC) & BM_EIM_CS0WCR1_WWSC)

#ifndef __LANGUAGE_ASM__
//! @brief Set the WWSC field to a new value.
#define BW_EIM_CS0WCR1_WWSC(v)   (HW_EIM_CS0WCR1_WR((HW_EIM_CS0WCR1_RD() & ~BM_EIM_CS0WCR1_WWSC) | BF_EIM_CS0WCR1_WWSC(v)))
#endif


/* --- Register HW_EIM_CS0WCR1, field WBED[30] (RW)
 *
 * Write Byte Enable Disable. When asserted this bit prevent from IPP_DO_BE_B[x] to be asserted
 * during write accesses.This bit is cleared by hardware reset.
 */

#define BP_EIM_CS0WCR1_WBED      (30)      //!< Bit position for EIM_CS0WCR1_WBED.
#define BM_EIM_CS0WCR1_WBED      (0x40000000)  //!< Bit mask for EIM_CS0WCR1_WBED.

//! @brief Get value of EIM_CS0WCR1_WBED from a register value.
#define BG_EIM_CS0WCR1_WBED(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_EIM_CS0WCR1_WBED) >> BP_EIM_CS0WCR1_WBED)

//! @brief Format value for bitfield EIM_CS0WCR1_WBED.
#define BF_EIM_CS0WCR1_WBED(v)   ((__REG_VALUE_TYPE((v), reg32_t) << BP_EIM_CS0WCR1_WBED) & BM_EIM_CS0WCR1_WBED)

#ifndef __LANGUAGE_ASM__
//! @brief Set the WBED field to a new value.
#define BW_EIM_CS0WCR1_WBED(v)   (HW_EIM_CS0WCR1_WR((HW_EIM_CS0WCR1_RD() & ~BM_EIM_CS0WCR1_WBED) | BF_EIM_CS0WCR1_WBED(v)))
#endif

/* --- Register HW_EIM_CS0WCR1, field WAL[31] (RW)
 *
 * Write ADV Low. This bit field determine ADV signal negation time in write accesses. When WAL=1,
 * WADVN bit field is ignored and ADV signal will stay asserted until end of access. When WAL=0
 * negation of ADV signal is according to WADVN bit field configuration.
 */

#define BP_EIM_CS0WCR1_WAL      (31)      //!< Bit position for EIM_CS0WCR1_WAL.
#define BM_EIM_CS0WCR1_WAL      (0x80000000)  //!< Bit mask for EIM_CS0WCR1_WAL.

//! @brief Get value of EIM_CS0WCR1_WAL from a register value.
#define BG_EIM_CS0WCR1_WAL(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_EIM_CS0WCR1_WAL) >> BP_EIM_CS0WCR1_WAL)

//! @brief Format value for bitfield EIM_CS0WCR1_WAL.
#define BF_EIM_CS0WCR1_WAL(v)   ((__REG_VALUE_TYPE((v), reg32_t) << BP_EIM_CS0WCR1_WAL) & BM_EIM_CS0WCR1_WAL)

#ifndef __LANGUAGE_ASM__
//! @brief Set the WAL field to a new value.
#define BW_EIM_CS0WCR1_WAL(v)   (HW_EIM_CS0WCR1_WR((HW_EIM_CS0WCR1_RD() & ~BM_EIM_CS0WCR1_WAL) | BF_EIM_CS0WCR1_WAL(v)))
#endif

//-------------------------------------------------------------------------------------------
// HW_EIM_CS0WCR2 - Chip Select n Write Configuration Register 2
//-------------------------------------------------------------------------------------------

#ifndef __LANGUAGE_ASM__
/*!
 * @brief HW_EIM_CS0WCR2 - Chip Select n Write Configuration Register 2 (RW)
 *
 * Reset value: 0x00000000
 *

 */
typedef union _hw_eim_cs0wcr2
{
    reg32_t U;
    struct _hw_eim_cs0wcr2_bitfields
    {
        unsigned WBCDD : 1; //!< [0] Write Burst Clock Divisor Decrement.
        unsigned RESERVED0 : 31; //!< [31:1] Reserved
    } B;
} hw_eim_cs0wcr2_t;
#endif

/*
 * constants & macros for entire EIM_CS0WCR2 register
 */
#define HW_EIM_CS0WCR2_ADDR      (REGS_EIM_BASE + 0x14)

#ifndef __LANGUAGE_ASM__
#define HW_EIM_CS0WCR2           (*(volatile hw_eim_cs0wcr2_t *) HW_EIM_CS0WCR2_ADDR)
#define HW_EIM_CS0WCR2_RD()      (HW_EIM_CS0WCR2.U)
#define HW_EIM_CS0WCR2_WR(v)     (HW_EIM_CS0WCR2.U = (v))
#define HW_EIM_CS0WCR2_SET(v)    (HW_EIM_CS0WCR2_WR(HW_EIM_CS0WCR2_RD() |  (v)))
#define HW_EIM_CS0WCR2_CLR(v)    (HW_EIM_CS0WCR2_WR(HW_EIM_CS0WCR2_RD() & ~(v)))
#define HW_EIM_CS0WCR2_TOG(v)    (HW_EIM_CS0WCR2_WR(HW_EIM_CS0WCR2_RD() ^  (v)))
#endif

/*
 * constants & macros for individual EIM_CS0WCR2 bitfields
 */

/* --- Register HW_EIM_CS0WCR2, field WBCDD[0] (RW)
 *
 * Write Burst Clock Divisor Decrement. If this bit is asserted and BCD value is 0 sync. write
 * access will be preformed as if BCD value is 1.When this bit is negated or BCD value is not 0 this
 * bit has no affect. This bit is cleared by hardware reset.
 */

#define BP_EIM_CS0WCR2_WBCDD      (0)      //!< Bit position for EIM_CS0WCR2_WBCDD.
#define BM_EIM_CS0WCR2_WBCDD      (0x00000001)  //!< Bit mask for EIM_CS0WCR2_WBCDD.

//! @brief Get value of EIM_CS0WCR2_WBCDD from a register value.
#define BG_EIM_CS0WCR2_WBCDD(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_EIM_CS0WCR2_WBCDD) >> BP_EIM_CS0WCR2_WBCDD)

//! @brief Format value for bitfield EIM_CS0WCR2_WBCDD.
#define BF_EIM_CS0WCR2_WBCDD(v)   ((__REG_VALUE_TYPE((v), reg32_t) << BP_EIM_CS0WCR2_WBCDD) & BM_EIM_CS0WCR2_WBCDD)

#ifndef __LANGUAGE_ASM__
//! @brief Set the WBCDD field to a new value.
#define BW_EIM_CS0WCR2_WBCDD(v)   (HW_EIM_CS0WCR2_WR((HW_EIM_CS0WCR2_RD() & ~BM_EIM_CS0WCR2_WBCDD) | BF_EIM_CS0WCR2_WBCDD(v)))
#endif

//-------------------------------------------------------------------------------------------
// HW_EIM_CS1GCR1 - Chip Select n General Configuration Register 1
//-------------------------------------------------------------------------------------------

#ifndef __LANGUAGE_ASM__
/*!
 * @brief HW_EIM_CS1GCR1 - Chip Select n General Configuration Register 1 (RW)
 *
 * Reset value: 0x00010080
 *

 */
typedef union _hw_eim_cs1gcr1
{
    reg32_t U;
    struct _hw_eim_cs1gcr1_bitfields
    {
        unsigned CSEN : 1; //!< [0] CS Enable.
        unsigned SWR : 1; //!< [1] Synchronous Write Data.
        unsigned SRD : 1; //!< [2] Synchronous Read Data.
        unsigned MUM : 1; //!< [3] Multiplexed Mode.
        unsigned WFL : 1; //!< [4] Write Fix Latency.
        unsigned RFL : 1; //!< [5] Read Fix Latency.
        unsigned CRE : 1; //!< [6] Configuration Register Enable.
        unsigned CREP : 1; //!< [7] Configuration Register Enable Polarity.
        unsigned BL : 3; //!< [10:8] Burst Length.
        unsigned WC : 1; //!< [11] Write Continuous.
        unsigned BCD : 2; //!< [13:12] Burst Clock Divisor.
        unsigned BCS : 2; //!< [15:14] Burst Clock Start.
        unsigned DSZ : 3; //!< [18:16] Data Port Size.
        unsigned SP : 1; //!< [19] Supervisor Protect.
        unsigned CSREC : 3; //!< [22:20] CS Recovery.
        unsigned AUS : 1; //!< [23] Address UnShifted.
        unsigned GBC : 3; //!< [26:24] Gap Between Chip Selects.
        unsigned WP : 1; //!< [27] Write Protect.
        unsigned PSZ : 4; //!< [31:28] Page Size.
    } B;
} hw_eim_cs1gcr1_t;
#endif

/*
 * constants & macros for entire EIM_CS1GCR1 register
 */
#define HW_EIM_CS1GCR1_ADDR      (REGS_EIM_BASE + 0x18)

#ifndef __LANGUAGE_ASM__
#define HW_EIM_CS1GCR1           (*(volatile hw_eim_cs1gcr1_t *) HW_EIM_CS1GCR1_ADDR)
#define HW_EIM_CS1GCR1_RD()      (HW_EIM_CS1GCR1.U)
#define HW_EIM_CS1GCR1_WR(v)     (HW_EIM_CS1GCR1.U = (v))
#define HW_EIM_CS1GCR1_SET(v)    (HW_EIM_CS1GCR1_WR(HW_EIM_CS1GCR1_RD() |  (v)))
#define HW_EIM_CS1GCR1_CLR(v)    (HW_EIM_CS1GCR1_WR(HW_EIM_CS1GCR1_RD() & ~(v)))
#define HW_EIM_CS1GCR1_TOG(v)    (HW_EIM_CS1GCR1_WR(HW_EIM_CS1GCR1_RD() ^  (v)))
#endif

/*
 * constants & macros for individual EIM_CS1GCR1 bitfields
 */

/* --- Register HW_EIM_CS1GCR1, field CSEN[0] (RW)
 *
 * CS Enable. This bit controls the operation of the chip select pin. CSEN is set by a hardware
 * reset for CSGCR0 to allow external boot operation. CSEN is cleared by a hardware reset to
 * CSGCR1-CSGCR5. Reset value for EIM_CS0GCR1 for CSEN is 1. For EIM_CS1GCR1-CS1GCR5 reset value is
 * 0.
 *
 * Values:
 * 0 - Chip select function is disabled; attempts to access an address mapped by this chip select results
 *     in an error respond and no assertion of the chip select output
 * 1 - Chip select is enabled, and is asserted when presented with a valid access.
 */

#define BP_EIM_CS1GCR1_CSEN      (0)      //!< Bit position for EIM_CS1GCR1_CSEN.
#define BM_EIM_CS1GCR1_CSEN      (0x00000001)  //!< Bit mask for EIM_CS1GCR1_CSEN.

//! @brief Get value of EIM_CS1GCR1_CSEN from a register value.
#define BG_EIM_CS1GCR1_CSEN(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_EIM_CS1GCR1_CSEN) >> BP_EIM_CS1GCR1_CSEN)

//! @brief Format value for bitfield EIM_CS1GCR1_CSEN.
#define BF_EIM_CS1GCR1_CSEN(v)   ((__REG_VALUE_TYPE((v), reg32_t) << BP_EIM_CS1GCR1_CSEN) & BM_EIM_CS1GCR1_CSEN)

#ifndef __LANGUAGE_ASM__
//! @brief Set the CSEN field to a new value.
#define BW_EIM_CS1GCR1_CSEN(v)   (HW_EIM_CS1GCR1_WR((HW_EIM_CS1GCR1_RD() & ~BM_EIM_CS1GCR1_CSEN) | BF_EIM_CS1GCR1_CSEN(v)))
#endif


/* --- Register HW_EIM_CS1GCR1, field SWR[1] (RW)
 *
 * Synchronous Write Data. This bit field determine the write accesses mode to the External device
 * of the chip select. The External device should be configured to the same mode as this bit
 * implicates. SWR is cleared by a hardware reset. Sync. accesses supported only for 16/32 bit port.
 *
 * Values:
 * 0 - write accesses are in Asynchronous mode
 * 1 - write accesses are in Synchronous mode
 */

#define BP_EIM_CS1GCR1_SWR      (1)      //!< Bit position for EIM_CS1GCR1_SWR.
#define BM_EIM_CS1GCR1_SWR      (0x00000002)  //!< Bit mask for EIM_CS1GCR1_SWR.

//! @brief Get value of EIM_CS1GCR1_SWR from a register value.
#define BG_EIM_CS1GCR1_SWR(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_EIM_CS1GCR1_SWR) >> BP_EIM_CS1GCR1_SWR)

//! @brief Format value for bitfield EIM_CS1GCR1_SWR.
#define BF_EIM_CS1GCR1_SWR(v)   ((__REG_VALUE_TYPE((v), reg32_t) << BP_EIM_CS1GCR1_SWR) & BM_EIM_CS1GCR1_SWR)

#ifndef __LANGUAGE_ASM__
//! @brief Set the SWR field to a new value.
#define BW_EIM_CS1GCR1_SWR(v)   (HW_EIM_CS1GCR1_WR((HW_EIM_CS1GCR1_RD() & ~BM_EIM_CS1GCR1_SWR) | BF_EIM_CS1GCR1_SWR(v)))
#endif


/* --- Register HW_EIM_CS1GCR1, field SRD[2] (RW)
 *
 * Synchronous Read Data. This bit field determine the read accesses mode to the External device of
 * the chip select. The External device should be configured to the same mode as this bit
 * implicates. SRD is cleared by a hardware reset. Sync. accesses supported only for 16/32 bit port.
 *
 * Values:
 * 0 - read accesses are in Asynchronous mode
 * 1 - read accesses are in Synchronous mode
 */

#define BP_EIM_CS1GCR1_SRD      (2)      //!< Bit position for EIM_CS1GCR1_SRD.
#define BM_EIM_CS1GCR1_SRD      (0x00000004)  //!< Bit mask for EIM_CS1GCR1_SRD.

//! @brief Get value of EIM_CS1GCR1_SRD from a register value.
#define BG_EIM_CS1GCR1_SRD(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_EIM_CS1GCR1_SRD) >> BP_EIM_CS1GCR1_SRD)

//! @brief Format value for bitfield EIM_CS1GCR1_SRD.
#define BF_EIM_CS1GCR1_SRD(v)   ((__REG_VALUE_TYPE((v), reg32_t) << BP_EIM_CS1GCR1_SRD) & BM_EIM_CS1GCR1_SRD)

#ifndef __LANGUAGE_ASM__
//! @brief Set the SRD field to a new value.
#define BW_EIM_CS1GCR1_SRD(v)   (HW_EIM_CS1GCR1_WR((HW_EIM_CS1GCR1_RD() & ~BM_EIM_CS1GCR1_SRD) | BF_EIM_CS1GCR1_SRD(v)))
#endif


/* --- Register HW_EIM_CS1GCR1, field MUM[3] (RW)
 *
 * Multiplexed Mode. This bit determines the address/data multiplexed mode for asynchronous and
 * synchronous accesses for 8 bit, 16 bit or 32 bit devices (DSZ config. dependent). The reset value
 * for EIM_CS0GCR1[MUM] = EIM_BOOT[2]. For EIM_CS1GCR1 - EIM_CS5GCR1 the reset value is 0.
 *
 * Values:
 * 0 - Multiplexed Mode disable
 * 1 - Multiplexed Mode enable
 */

#define BP_EIM_CS1GCR1_MUM      (3)      //!< Bit position for EIM_CS1GCR1_MUM.
#define BM_EIM_CS1GCR1_MUM      (0x00000008)  //!< Bit mask for EIM_CS1GCR1_MUM.

//! @brief Get value of EIM_CS1GCR1_MUM from a register value.
#define BG_EIM_CS1GCR1_MUM(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_EIM_CS1GCR1_MUM) >> BP_EIM_CS1GCR1_MUM)

//! @brief Format value for bitfield EIM_CS1GCR1_MUM.
#define BF_EIM_CS1GCR1_MUM(v)   ((__REG_VALUE_TYPE((v), reg32_t) << BP_EIM_CS1GCR1_MUM) & BM_EIM_CS1GCR1_MUM)

#ifndef __LANGUAGE_ASM__
//! @brief Set the MUM field to a new value.
#define BW_EIM_CS1GCR1_MUM(v)   (HW_EIM_CS1GCR1_WR((HW_EIM_CS1GCR1_RD() & ~BM_EIM_CS1GCR1_MUM) | BF_EIM_CS1GCR1_MUM(v)))
#endif


/* --- Register HW_EIM_CS1GCR1, field WFL[4] (RW)
 *
 * Write Fix Latency. This bit field determine if the controller is monitoring the WAIT signal from
 * the External device connected to the chip select (handshake mode - fix or variable data latency)
 * or if it start data transfer according to WWSC field, it only valid in synchronous mode. WFL is
 * cleared by a hardware reset. When WFL=1 Burst access is terminated on page boundary and resume on
 * the following page according to BL bit field configuration, because WAIT signal is not monitored
 * from the external device
 *
 * Values:
 * 0 - the External device WAIT signal is being monitored, and it reflect the external data bus state
 * 1 - the state of the External devices is determined internally (Fix latency mode only)
 */

#define BP_EIM_CS1GCR1_WFL      (4)      //!< Bit position for EIM_CS1GCR1_WFL.
#define BM_EIM_CS1GCR1_WFL      (0x00000010)  //!< Bit mask for EIM_CS1GCR1_WFL.

//! @brief Get value of EIM_CS1GCR1_WFL from a register value.
#define BG_EIM_CS1GCR1_WFL(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_EIM_CS1GCR1_WFL) >> BP_EIM_CS1GCR1_WFL)

//! @brief Format value for bitfield EIM_CS1GCR1_WFL.
#define BF_EIM_CS1GCR1_WFL(v)   ((__REG_VALUE_TYPE((v), reg32_t) << BP_EIM_CS1GCR1_WFL) & BM_EIM_CS1GCR1_WFL)

#ifndef __LANGUAGE_ASM__
//! @brief Set the WFL field to a new value.
#define BW_EIM_CS1GCR1_WFL(v)   (HW_EIM_CS1GCR1_WR((HW_EIM_CS1GCR1_RD() & ~BM_EIM_CS1GCR1_WFL) | BF_EIM_CS1GCR1_WFL(v)))
#endif


/* --- Register HW_EIM_CS1GCR1, field RFL[5] (RW)
 *
 * Read Fix Latency. This bit field determine if the controller is monitoring the WAIT signal from
 * the External device connected to the chip select (handshake mode - fix or variable data latency)
 * or if it start sampling data according to RWSC field, it only valid in synchronous mode. RFL is
 * cleared by a hardware reset. When RFL=1 Burst access is terminated on page boundary and resume on
 * the following page according to BL bit field configuration, because WAIT signal is not monitored
 * from the external device.
 *
 * Values:
 * 0 - the External device WAIT signal is being monitored, and it reflect the external data bus state
 * 1 - the state of the External devices is determined internally (Fix latency mode only)
 */

#define BP_EIM_CS1GCR1_RFL      (5)      //!< Bit position for EIM_CS1GCR1_RFL.
#define BM_EIM_CS1GCR1_RFL      (0x00000020)  //!< Bit mask for EIM_CS1GCR1_RFL.

//! @brief Get value of EIM_CS1GCR1_RFL from a register value.
#define BG_EIM_CS1GCR1_RFL(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_EIM_CS1GCR1_RFL) >> BP_EIM_CS1GCR1_RFL)

//! @brief Format value for bitfield EIM_CS1GCR1_RFL.
#define BF_EIM_CS1GCR1_RFL(v)   ((__REG_VALUE_TYPE((v), reg32_t) << BP_EIM_CS1GCR1_RFL) & BM_EIM_CS1GCR1_RFL)

#ifndef __LANGUAGE_ASM__
//! @brief Set the RFL field to a new value.
#define BW_EIM_CS1GCR1_RFL(v)   (HW_EIM_CS1GCR1_WR((HW_EIM_CS1GCR1_RD() & ~BM_EIM_CS1GCR1_RFL) | BF_EIM_CS1GCR1_RFL(v)))
#endif


/* --- Register HW_EIM_CS1GCR1, field CRE[6] (RW)
 *
 * Configuration Register Enable. This bit indicates CRE memory pin state while executing a memory
 * register set command to PSRAM external device. CRE is cleared by a hardware reset.
 *
 * Values:
 * 0 - CRE signal use is disable
 * 1 - CRE signal use is enable
 */

#define BP_EIM_CS1GCR1_CRE      (6)      //!< Bit position for EIM_CS1GCR1_CRE.
#define BM_EIM_CS1GCR1_CRE      (0x00000040)  //!< Bit mask for EIM_CS1GCR1_CRE.

//! @brief Get value of EIM_CS1GCR1_CRE from a register value.
#define BG_EIM_CS1GCR1_CRE(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_EIM_CS1GCR1_CRE) >> BP_EIM_CS1GCR1_CRE)

//! @brief Format value for bitfield EIM_CS1GCR1_CRE.
#define BF_EIM_CS1GCR1_CRE(v)   ((__REG_VALUE_TYPE((v), reg32_t) << BP_EIM_CS1GCR1_CRE) & BM_EIM_CS1GCR1_CRE)

#ifndef __LANGUAGE_ASM__
//! @brief Set the CRE field to a new value.
#define BW_EIM_CS1GCR1_CRE(v)   (HW_EIM_CS1GCR1_WR((HW_EIM_CS1GCR1_RD() & ~BM_EIM_CS1GCR1_CRE) | BF_EIM_CS1GCR1_CRE(v)))
#endif


/* --- Register HW_EIM_CS1GCR1, field CREP[7] (RW)
 *
 * Configuration Register Enable Polarity. This bit indicates CRE memory pin assertion state,
 * active-low or active-high, while executing a memory register set command to the external device
 * (PSRAM memory type). CREP is set by a hardware reset. Whenever PSRAM is connected the CREP value
 * must be correct also for accesses where CRE is disabled. For Non-PSRAM memory CREP value should
 * be 1.
 *
 * Values:
 * 0 - CRE signal is active low
 * 1 - CRE signal is active high
 */

#define BP_EIM_CS1GCR1_CREP      (7)      //!< Bit position for EIM_CS1GCR1_CREP.
#define BM_EIM_CS1GCR1_CREP      (0x00000080)  //!< Bit mask for EIM_CS1GCR1_CREP.

//! @brief Get value of EIM_CS1GCR1_CREP from a register value.
#define BG_EIM_CS1GCR1_CREP(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_EIM_CS1GCR1_CREP) >> BP_EIM_CS1GCR1_CREP)

//! @brief Format value for bitfield EIM_CS1GCR1_CREP.
#define BF_EIM_CS1GCR1_CREP(v)   ((__REG_VALUE_TYPE((v), reg32_t) << BP_EIM_CS1GCR1_CREP) & BM_EIM_CS1GCR1_CREP)

#ifndef __LANGUAGE_ASM__
//! @brief Set the CREP field to a new value.
#define BW_EIM_CS1GCR1_CREP(v)   (HW_EIM_CS1GCR1_WR((HW_EIM_CS1GCR1_RD() & ~BM_EIM_CS1GCR1_CREP) | BF_EIM_CS1GCR1_CREP(v)))
#endif


/* --- Register HW_EIM_CS1GCR1, field BL[10:8] (RW)
 *
 * Burst Length. The BL bit field indicates memory burst length in words (word is defined by the DSZ
 * field) and should be properly initialized for mixed wrap/increment accesses support. Continuous
 * BL value corresponds to continuous burst length setting of the external memory device. For fix
 * memory burst size, type is always wrap. In case not matching wrap boundaries in both the memory
 * (BL field) and Master access on the current address, EIM update address on the external device
 * address bus and regenerates the access. BL is cleared by a hardware reset. When APR=1, Page Read
 * Mode is applied, BL determine the number of words within the read page burst. BL is cleared by a
 * hardware reset for EIM_CS0GCR1 - EIM_CS5GCR1.
 *
 * Values:
 * 000 - 4 words Memory wrap burst length (read page burst size when APR = 1)
 * 001 - 8 words Memory wrap burst length (read page burst size when APR = 1)
 * 010 - 16 words Memory wrap burst length (read page burst size when APR = 1)
 * 011 - 32 words Memory wrap burst length (read page burst size when APR = 1)
 * 100 - Continuous burst length (2 words read page burst size when APR = 1)
 * 101 - Reserved
 * 110 - Reserved
 * 111 - Reserved
 */

#define BP_EIM_CS1GCR1_BL      (8)      //!< Bit position for EIM_CS1GCR1_BL.
#define BM_EIM_CS1GCR1_BL      (0x00000700)  //!< Bit mask for EIM_CS1GCR1_BL.

//! @brief Get value of EIM_CS1GCR1_BL from a register value.
#define BG_EIM_CS1GCR1_BL(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_EIM_CS1GCR1_BL) >> BP_EIM_CS1GCR1_BL)

//! @brief Format value for bitfield EIM_CS1GCR1_BL.
#define BF_EIM_CS1GCR1_BL(v)   ((__REG_VALUE_TYPE((v), reg32_t) << BP_EIM_CS1GCR1_BL) & BM_EIM_CS1GCR1_BL)

#ifndef __LANGUAGE_ASM__
//! @brief Set the BL field to a new value.
#define BW_EIM_CS1GCR1_BL(v)   (HW_EIM_CS1GCR1_WR((HW_EIM_CS1GCR1_RD() & ~BM_EIM_CS1GCR1_BL) | BF_EIM_CS1GCR1_BL(v)))
#endif


/* --- Register HW_EIM_CS1GCR1, field WC[11] (RW)
 *
 * Write Continuous. The WI bit indicates that write access to the memory are always continuous
 * accesses regardless of the BL field value. WI is cleared by hardware reset.
 *
 * Values:
 * 0 - Write access burst length occurs according to BL value.
 * 1 - Write access burst length is continuous.
 */

#define BP_EIM_CS1GCR1_WC      (11)      //!< Bit position for EIM_CS1GCR1_WC.
#define BM_EIM_CS1GCR1_WC      (0x00000800)  //!< Bit mask for EIM_CS1GCR1_WC.

//! @brief Get value of EIM_CS1GCR1_WC from a register value.
#define BG_EIM_CS1GCR1_WC(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_EIM_CS1GCR1_WC) >> BP_EIM_CS1GCR1_WC)

//! @brief Format value for bitfield EIM_CS1GCR1_WC.
#define BF_EIM_CS1GCR1_WC(v)   ((__REG_VALUE_TYPE((v), reg32_t) << BP_EIM_CS1GCR1_WC) & BM_EIM_CS1GCR1_WC)

#ifndef __LANGUAGE_ASM__
//! @brief Set the WC field to a new value.
#define BW_EIM_CS1GCR1_WC(v)   (HW_EIM_CS1GCR1_WR((HW_EIM_CS1GCR1_RD() & ~BM_EIM_CS1GCR1_WC) | BF_EIM_CS1GCR1_WC(v)))
#endif


/* --- Register HW_EIM_CS1GCR1, field BCD[13:12] (RW)
 *
 * Burst Clock Divisor. This bit field contains the value used to program the burst clock divisor
 * for BCLK generation. It is used to divide the internal EIMbus frequency. BCD is cleared by a
 * hardware reset. For other then the mentioned below frequency such as 104 MHz, EIM clock (input
 * clock) should be adjust accordingly.
 *
 * Values:
 * 00 - Divide EIM clock by 1
 * 01 - Divide EIM clock by 2
 * 10 - Divide EIM clock by 3
 * 11 - Divide EIM clock by 4
 */

#define BP_EIM_CS1GCR1_BCD      (12)      //!< Bit position for EIM_CS1GCR1_BCD.
#define BM_EIM_CS1GCR1_BCD      (0x00003000)  //!< Bit mask for EIM_CS1GCR1_BCD.

//! @brief Get value of EIM_CS1GCR1_BCD from a register value.
#define BG_EIM_CS1GCR1_BCD(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_EIM_CS1GCR1_BCD) >> BP_EIM_CS1GCR1_BCD)

//! @brief Format value for bitfield EIM_CS1GCR1_BCD.
#define BF_EIM_CS1GCR1_BCD(v)   ((__REG_VALUE_TYPE((v), reg32_t) << BP_EIM_CS1GCR1_BCD) & BM_EIM_CS1GCR1_BCD)

#ifndef __LANGUAGE_ASM__
//! @brief Set the BCD field to a new value.
#define BW_EIM_CS1GCR1_BCD(v)   (HW_EIM_CS1GCR1_WR((HW_EIM_CS1GCR1_RD() & ~BM_EIM_CS1GCR1_BCD) | BF_EIM_CS1GCR1_BCD(v)))
#endif


/* --- Register HW_EIM_CS1GCR1, field BCS[15:14] (RW)
 *
 * Burst Clock Start. When SRD=1 or SWR=1,this bit field determines the number of EIM clock cycles
 * delay from start of access before the first rising edge of BCLK is generated. When BCD=0 value of
 * BCS=0 results in a half clock delay after the start of access. For other values of BCD a one
 * clock delay after the start of access is applied, not an immediate assertion. BCS is cleared by a
 * hardware reset.
 *
 * Values:
 * 00 - 0 EIM clock cycle additional delay
 * 01 - 1 EIM clock cycle additional delay
 * 10 - 2 EIM clock cycle additional delay
 * 11 - 3 EIM clock cycle additional delay
 */

#define BP_EIM_CS1GCR1_BCS      (14)      //!< Bit position for EIM_CS1GCR1_BCS.
#define BM_EIM_CS1GCR1_BCS      (0x0000c000)  //!< Bit mask for EIM_CS1GCR1_BCS.

//! @brief Get value of EIM_CS1GCR1_BCS from a register value.
#define BG_EIM_CS1GCR1_BCS(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_EIM_CS1GCR1_BCS) >> BP_EIM_CS1GCR1_BCS)

//! @brief Format value for bitfield EIM_CS1GCR1_BCS.
#define BF_EIM_CS1GCR1_BCS(v)   ((__REG_VALUE_TYPE((v), reg32_t) << BP_EIM_CS1GCR1_BCS) & BM_EIM_CS1GCR1_BCS)

#ifndef __LANGUAGE_ASM__
//! @brief Set the BCS field to a new value.
#define BW_EIM_CS1GCR1_BCS(v)   (HW_EIM_CS1GCR1_WR((HW_EIM_CS1GCR1_RD() & ~BM_EIM_CS1GCR1_BCS) | BF_EIM_CS1GCR1_BCS(v)))
#endif


/* --- Register HW_EIM_CS1GCR1, field DSZ[18:16] (RW)
 *
 * Data Port Size. This bit field defines the width of an external device's data port as shown
 * below. Only async. access supported for 8 bit port. The reset value for EIM_CS0GCR1, DSZ[2] = 0,
 * DSZ[1:0] = EIM_BOOT[1:0]. For EIM_CS1GCR1 - EIM_CS5GCR1, the reset value is 0b001.
 *
 * Values:
 * 000 - Reserved.
 * 001 - 16 bit port resides on DATA[15:0]
 * 010 - 16 bit port resides on DATA[31:16]
 * 011 - 32 bit port resides on DATA[31:0]
 * 100 - 8 bit port resides on DATA[7:0]
 * 101 - 8 bit port resides on DATA[15:8]
 * 110 - 8 bit port resides on DATA[23:16]
 * 111 - 8 bit port resides on DATA[31:24]
 */

#define BP_EIM_CS1GCR1_DSZ      (16)      //!< Bit position for EIM_CS1GCR1_DSZ.
#define BM_EIM_CS1GCR1_DSZ      (0x00070000)  //!< Bit mask for EIM_CS1GCR1_DSZ.

//! @brief Get value of EIM_CS1GCR1_DSZ from a register value.
#define BG_EIM_CS1GCR1_DSZ(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_EIM_CS1GCR1_DSZ) >> BP_EIM_CS1GCR1_DSZ)

//! @brief Format value for bitfield EIM_CS1GCR1_DSZ.
#define BF_EIM_CS1GCR1_DSZ(v)   ((__REG_VALUE_TYPE((v), reg32_t) << BP_EIM_CS1GCR1_DSZ) & BM_EIM_CS1GCR1_DSZ)

#ifndef __LANGUAGE_ASM__
//! @brief Set the DSZ field to a new value.
#define BW_EIM_CS1GCR1_DSZ(v)   (HW_EIM_CS1GCR1_WR((HW_EIM_CS1GCR1_RD() & ~BM_EIM_CS1GCR1_DSZ) | BF_EIM_CS1GCR1_DSZ(v)))
#endif


/* --- Register HW_EIM_CS1GCR1, field SP[19] (RW)
 *
 * Supervisor Protect. This bit prevents accesses to the address range defined by the corresponding
 * chip select when the access is attempted in the User mode. SP is cleared by a hardware reset.
 *
 * Values:
 * 0 - User mode accesses are allowed in the memory range defined by chip select.
 * 1 - User mode accesses are prohibited. All attempts to access an address mapped by this chip select in
 *     User mode results in an error response and no assertion of the chip select output.
 */

#define BP_EIM_CS1GCR1_SP      (19)      //!< Bit position for EIM_CS1GCR1_SP.
#define BM_EIM_CS1GCR1_SP      (0x00080000)  //!< Bit mask for EIM_CS1GCR1_SP.

//! @brief Get value of EIM_CS1GCR1_SP from a register value.
#define BG_EIM_CS1GCR1_SP(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_EIM_CS1GCR1_SP) >> BP_EIM_CS1GCR1_SP)

//! @brief Format value for bitfield EIM_CS1GCR1_SP.
#define BF_EIM_CS1GCR1_SP(v)   ((__REG_VALUE_TYPE((v), reg32_t) << BP_EIM_CS1GCR1_SP) & BM_EIM_CS1GCR1_SP)

#ifndef __LANGUAGE_ASM__
//! @brief Set the SP field to a new value.
#define BW_EIM_CS1GCR1_SP(v)   (HW_EIM_CS1GCR1_WR((HW_EIM_CS1GCR1_RD() & ~BM_EIM_CS1GCR1_SP) | BF_EIM_CS1GCR1_SP(v)))
#endif


/* --- Register HW_EIM_CS1GCR1, field CSREC[22:20] (RW)
 *
 * CS Recovery. This bit field, according to the settings shown below, determines the minimum pulse
 * width of CS, OE, and WE control signals before executing a new back to back access to the same
 * chip select. CSREC is cleared by a hardware reset. The reset value for EIM_CS0GCR1, CSREC[2:0] is
 * 0b110. For EIM_CS1GCR1 - EIM_CS5GCR, the reset value is 0b000. Example settings:
 *
 * Values:
 * 000 - 0 EIM clock cycles minimum width of CS, OE and WE signals (read async. mode only)
 * 001 - 1 EIM clock cycles minimum width of CS, OE and WE signals
 * 010 - 2 EIM clock cycles minimum width of CS, OE and WE signals
 * 111 - 7 EIM clock cycles minimum width of CS, OE and WE signals
 */

#define BP_EIM_CS1GCR1_CSREC      (20)      //!< Bit position for EIM_CS1GCR1_CSREC.
#define BM_EIM_CS1GCR1_CSREC      (0x00700000)  //!< Bit mask for EIM_CS1GCR1_CSREC.

//! @brief Get value of EIM_CS1GCR1_CSREC from a register value.
#define BG_EIM_CS1GCR1_CSREC(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_EIM_CS1GCR1_CSREC) >> BP_EIM_CS1GCR1_CSREC)

//! @brief Format value for bitfield EIM_CS1GCR1_CSREC.
#define BF_EIM_CS1GCR1_CSREC(v)   ((__REG_VALUE_TYPE((v), reg32_t) << BP_EIM_CS1GCR1_CSREC) & BM_EIM_CS1GCR1_CSREC)

#ifndef __LANGUAGE_ASM__
//! @brief Set the CSREC field to a new value.
#define BW_EIM_CS1GCR1_CSREC(v)   (HW_EIM_CS1GCR1_WR((HW_EIM_CS1GCR1_RD() & ~BM_EIM_CS1GCR1_CSREC) | BF_EIM_CS1GCR1_CSREC(v)))
#endif


/* --- Register HW_EIM_CS1GCR1, field AUS[23] (RW)
 *
 * Address UnShifted. This bit indicates an unshifted mode for address assertion for the relevant
 * chip select accesses. AUS bit is cleared by hardware reset.
 *
 * Values:
 * 0 - Address shifted according to port size (DSZ config.)
 * 1 - Address unshifted
 */

#define BP_EIM_CS1GCR1_AUS      (23)      //!< Bit position for EIM_CS1GCR1_AUS.
#define BM_EIM_CS1GCR1_AUS      (0x00800000)  //!< Bit mask for EIM_CS1GCR1_AUS.

//! @brief Get value of EIM_CS1GCR1_AUS from a register value.
#define BG_EIM_CS1GCR1_AUS(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_EIM_CS1GCR1_AUS) >> BP_EIM_CS1GCR1_AUS)

//! @brief Format value for bitfield EIM_CS1GCR1_AUS.
#define BF_EIM_CS1GCR1_AUS(v)   ((__REG_VALUE_TYPE((v), reg32_t) << BP_EIM_CS1GCR1_AUS) & BM_EIM_CS1GCR1_AUS)

#ifndef __LANGUAGE_ASM__
//! @brief Set the AUS field to a new value.
#define BW_EIM_CS1GCR1_AUS(v)   (HW_EIM_CS1GCR1_WR((HW_EIM_CS1GCR1_RD() & ~BM_EIM_CS1GCR1_AUS) | BF_EIM_CS1GCR1_AUS(v)))
#endif


/* --- Register HW_EIM_CS1GCR1, field GBC[26:24] (RW)
 *
 * Gap Between Chip Selects. This bit field, according to the settings shown below, determines the
 * minimum time between end of access to the current chip select and start of access to different
 * chip select. GBC is cleared by a hardware reset. Example settings:
 *
 * Values:
 * 000 - minimum of 0 EIM clock cycles before next access from different chip select (async. mode only)
 * 001 - minimum of 1 EIM clock cycles before next access from different chip select
 * 010 - minimum of 2 EIM clock cycles before next access from different chip select
 * 111 - minimum of 7 EIM clock cycles before next access from different chip select
 */

#define BP_EIM_CS1GCR1_GBC      (24)      //!< Bit position for EIM_CS1GCR1_GBC.
#define BM_EIM_CS1GCR1_GBC      (0x07000000)  //!< Bit mask for EIM_CS1GCR1_GBC.

//! @brief Get value of EIM_CS1GCR1_GBC from a register value.
#define BG_EIM_CS1GCR1_GBC(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_EIM_CS1GCR1_GBC) >> BP_EIM_CS1GCR1_GBC)

//! @brief Format value for bitfield EIM_CS1GCR1_GBC.
#define BF_EIM_CS1GCR1_GBC(v)   ((__REG_VALUE_TYPE((v), reg32_t) << BP_EIM_CS1GCR1_GBC) & BM_EIM_CS1GCR1_GBC)

#ifndef __LANGUAGE_ASM__
//! @brief Set the GBC field to a new value.
#define BW_EIM_CS1GCR1_GBC(v)   (HW_EIM_CS1GCR1_WR((HW_EIM_CS1GCR1_RD() & ~BM_EIM_CS1GCR1_GBC) | BF_EIM_CS1GCR1_GBC(v)))
#endif


/* --- Register HW_EIM_CS1GCR1, field WP[27] (RW)
 *
 * Write Protect. This bit prevents writes to the address range defined by the corresponding chip
 * select. WP is cleared by a hardware reset.
 *
 * Values:
 * 0 - Writes are allowed in the memory range defined by chip.
 * 1 - Writes are prohibited. All attempts to write to an address mapped by this chip select result in a
 *     error response and no assertion of the chip select output.
 */

#define BP_EIM_CS1GCR1_WP      (27)      //!< Bit position for EIM_CS1GCR1_WP.
#define BM_EIM_CS1GCR1_WP      (0x08000000)  //!< Bit mask for EIM_CS1GCR1_WP.

//! @brief Get value of EIM_CS1GCR1_WP from a register value.
#define BG_EIM_CS1GCR1_WP(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_EIM_CS1GCR1_WP) >> BP_EIM_CS1GCR1_WP)

//! @brief Format value for bitfield EIM_CS1GCR1_WP.
#define BF_EIM_CS1GCR1_WP(v)   ((__REG_VALUE_TYPE((v), reg32_t) << BP_EIM_CS1GCR1_WP) & BM_EIM_CS1GCR1_WP)

#ifndef __LANGUAGE_ASM__
//! @brief Set the WP field to a new value.
#define BW_EIM_CS1GCR1_WP(v)   (HW_EIM_CS1GCR1_WR((HW_EIM_CS1GCR1_RD() & ~BM_EIM_CS1GCR1_WP) | BF_EIM_CS1GCR1_WP(v)))
#endif


/* --- Register HW_EIM_CS1GCR1, field PSZ[31:28] (RW)
 *
 * Page Size. This bit field indicates memory page size in words (word is defined by the DSZ field).
 * PSZ is used when fix latency mode is applied, WFL=1 for sync. write accesses, RFL=1 for sync.
 * Read accesses. When working in fix latency mode WAIT signal from the external device is not being
 * monitored, PSZ is used to determine if page boundary is reached and renewal of access is
 * preformed. This bit field is ignored when sync. Mode is disabled or fix latency mode is not being
 * used for write or read access separately. It can be valid for both access type, read or write, or
 * only for one type, according to configuration. PSZ is cleared by a hardware reset.
 *
 * Values:
 * 0000 - 8 words page size
 * 0001 - 16 words page size
 * 0010 - 32 words page size
 * 0011 - 64 words page size
 * 0100 - 128 words page size
 * 0101 - 256 words page size
 * 0110 - 512 words page size
 * 0111 - 1024 (1k) words page size
 * 1000 - 2048 (2k) words page size
 * 1001 - - 1111 Reserved
 */

#define BP_EIM_CS1GCR1_PSZ      (28)      //!< Bit position for EIM_CS1GCR1_PSZ.
#define BM_EIM_CS1GCR1_PSZ      (0xf0000000)  //!< Bit mask for EIM_CS1GCR1_PSZ.

//! @brief Get value of EIM_CS1GCR1_PSZ from a register value.
#define BG_EIM_CS1GCR1_PSZ(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_EIM_CS1GCR1_PSZ) >> BP_EIM_CS1GCR1_PSZ)

//! @brief Format value for bitfield EIM_CS1GCR1_PSZ.
#define BF_EIM_CS1GCR1_PSZ(v)   ((__REG_VALUE_TYPE((v), reg32_t) << BP_EIM_CS1GCR1_PSZ) & BM_EIM_CS1GCR1_PSZ)

#ifndef __LANGUAGE_ASM__
//! @brief Set the PSZ field to a new value.
#define BW_EIM_CS1GCR1_PSZ(v)   (HW_EIM_CS1GCR1_WR((HW_EIM_CS1GCR1_RD() & ~BM_EIM_CS1GCR1_PSZ) | BF_EIM_CS1GCR1_PSZ(v)))
#endif


//-------------------------------------------------------------------------------------------
// HW_EIM_CS1GCR2 - Chip Select n General Configuration Register 2
//-------------------------------------------------------------------------------------------

#ifndef __LANGUAGE_ASM__
/*!
 * @brief HW_EIM_CS1GCR2 - Chip Select n General Configuration Register 2 (RW)
 *
 * Reset value: 0x00001000
 *

 */
typedef union _hw_eim_cs1gcr2
{
    reg32_t U;
    struct _hw_eim_cs1gcr2_bitfields
    {
        unsigned ADH : 2; //!< [1:0] Address hold time - This bit field determine the address hold time after ADV negation when mum = 1 (muxed mode).
        unsigned RESERVED0 : 2; //!< [3:2] Reserved
        unsigned DAPS : 4; //!< [7:4] Data Acknowledge Poling Start.
        unsigned DAE : 1; //!< [8] Data Acknowledge Enable.
        unsigned DAP : 1; //!< [9] Data Acknowledge Polarity.
        unsigned RESERVED1 : 2; //!< [11:10] Reserved
        unsigned MUX16_BYP_GRANT : 1; //!< [12] Muxed 16 bypass grant.
        unsigned RESERVED2 : 19; //!< [31:13] Reserved
    } B;
} hw_eim_cs1gcr2_t;
#endif

/*
 * constants & macros for entire EIM_CS1GCR2 register
 */
#define HW_EIM_CS1GCR2_ADDR      (REGS_EIM_BASE + 0x1c)

#ifndef __LANGUAGE_ASM__
#define HW_EIM_CS1GCR2           (*(volatile hw_eim_cs1gcr2_t *) HW_EIM_CS1GCR2_ADDR)
#define HW_EIM_CS1GCR2_RD()      (HW_EIM_CS1GCR2.U)
#define HW_EIM_CS1GCR2_WR(v)     (HW_EIM_CS1GCR2.U = (v))
#define HW_EIM_CS1GCR2_SET(v)    (HW_EIM_CS1GCR2_WR(HW_EIM_CS1GCR2_RD() |  (v)))
#define HW_EIM_CS1GCR2_CLR(v)    (HW_EIM_CS1GCR2_WR(HW_EIM_CS1GCR2_RD() & ~(v)))
#define HW_EIM_CS1GCR2_TOG(v)    (HW_EIM_CS1GCR2_WR(HW_EIM_CS1GCR2_RD() ^  (v)))
#endif

/*
 * constants & macros for individual EIM_CS1GCR2 bitfields
 */

/* --- Register HW_EIM_CS1GCR2, field ADH[1:0] (RW)
 *
 * Address hold time - This bit field determine the address hold time after ADV negation when mum =
 * 1 (muxed mode). When mum = 0 this bit has no effect. For read accesses the field determines when
 * the pads direction will be switched. Reset value for EIM_CS0GCR2 for ADH is 10. For
 * EIM_CS1GCR2-EIM_CS5GCR2 reset value is 00.
 *
 * Values:
 * 00 - 0 cycle after ADV negation
 * 01 - 1 cycle after ADV negation
 * 10 - 2 cycle after ADV negation
 * 11 - Reserved
 */

#define BP_EIM_CS1GCR2_ADH      (0)      //!< Bit position for EIM_CS1GCR2_ADH.
#define BM_EIM_CS1GCR2_ADH      (0x00000003)  //!< Bit mask for EIM_CS1GCR2_ADH.

//! @brief Get value of EIM_CS1GCR2_ADH from a register value.
#define BG_EIM_CS1GCR2_ADH(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_EIM_CS1GCR2_ADH) >> BP_EIM_CS1GCR2_ADH)

//! @brief Format value for bitfield EIM_CS1GCR2_ADH.
#define BF_EIM_CS1GCR2_ADH(v)   ((__REG_VALUE_TYPE((v), reg32_t) << BP_EIM_CS1GCR2_ADH) & BM_EIM_CS1GCR2_ADH)

#ifndef __LANGUAGE_ASM__
//! @brief Set the ADH field to a new value.
#define BW_EIM_CS1GCR2_ADH(v)   (HW_EIM_CS1GCR2_WR((HW_EIM_CS1GCR2_RD() & ~BM_EIM_CS1GCR2_ADH) | BF_EIM_CS1GCR2_ADH(v)))
#endif


/* --- Register HW_EIM_CS1GCR2, field DAPS[7:4] (RW)
 *
 * Data Acknowledge Poling Start. This bit field determine the starting point of DTACK input signal
 * polling. DAPS is used only in asynchronous single read or write accesses. Since DTACK is an
 * async. signal the start point of DTACK signal polling is at least 3 cycles after the start of
 * access. DAPS is cleared by a hardware reset. Example settings:
 *
 * Values:
 * 0000 - 3 EIM clk cycle between start of access and first DTACK check
 * 0001 - 4 EIM clk cycles between start of access and first DTACK check
 * 0010 - 5 EIM clk cycles between start of access and first DTACK check
 * 0111 - 10 EIM clk cycles between start of access and first DTACK check
 * 1011 - 14 EIM clk cycles between start of access and first DTACK check
 * 1111 - 18 EIM clk cycles between start of access and first DTACK check
 */

#define BP_EIM_CS1GCR2_DAPS      (4)      //!< Bit position for EIM_CS1GCR2_DAPS.
#define BM_EIM_CS1GCR2_DAPS      (0x000000f0)  //!< Bit mask for EIM_CS1GCR2_DAPS.

//! @brief Get value of EIM_CS1GCR2_DAPS from a register value.
#define BG_EIM_CS1GCR2_DAPS(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_EIM_CS1GCR2_DAPS) >> BP_EIM_CS1GCR2_DAPS)

//! @brief Format value for bitfield EIM_CS1GCR2_DAPS.
#define BF_EIM_CS1GCR2_DAPS(v)   ((__REG_VALUE_TYPE((v), reg32_t) << BP_EIM_CS1GCR2_DAPS) & BM_EIM_CS1GCR2_DAPS)

#ifndef __LANGUAGE_ASM__
//! @brief Set the DAPS field to a new value.
#define BW_EIM_CS1GCR2_DAPS(v)   (HW_EIM_CS1GCR2_WR((HW_EIM_CS1GCR2_RD() & ~BM_EIM_CS1GCR2_DAPS) | BF_EIM_CS1GCR2_DAPS(v)))
#endif


/* --- Register HW_EIM_CS1GCR2, field DAE[8] (RW)
 *
 * Data Acknowledge Enable. This bit indicates external device is using DTACK pin as
 * strobe/terminator of an async. access. DTACK signal may be used only in asynchronous single read
 * (APR=0) or write accesses. DTACK poling start point is set by DAPS bit field. polarity of DTACK
 * is set by DAP bit field. DAE is cleared by a hardware reset.
 *
 * Values:
 * 0 - DTACK signal use is disable
 * 1 - DTACK signal use is enable
 */

#define BP_EIM_CS1GCR2_DAE      (8)      //!< Bit position for EIM_CS1GCR2_DAE.
#define BM_EIM_CS1GCR2_DAE      (0x00000100)  //!< Bit mask for EIM_CS1GCR2_DAE.

//! @brief Get value of EIM_CS1GCR2_DAE from a register value.
#define BG_EIM_CS1GCR2_DAE(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_EIM_CS1GCR2_DAE) >> BP_EIM_CS1GCR2_DAE)

//! @brief Format value for bitfield EIM_CS1GCR2_DAE.
#define BF_EIM_CS1GCR2_DAE(v)   ((__REG_VALUE_TYPE((v), reg32_t) << BP_EIM_CS1GCR2_DAE) & BM_EIM_CS1GCR2_DAE)

#ifndef __LANGUAGE_ASM__
//! @brief Set the DAE field to a new value.
#define BW_EIM_CS1GCR2_DAE(v)   (HW_EIM_CS1GCR2_WR((HW_EIM_CS1GCR2_RD() & ~BM_EIM_CS1GCR2_DAE) | BF_EIM_CS1GCR2_DAE(v)))
#endif


/* --- Register HW_EIM_CS1GCR2, field DAP[9] (RW)
 *
 * Data Acknowledge Polarity. This bit indicates DTACK memory pin assertion state, active-low or
 * active-high, while executing an async access using DTACK signal from the external device. DAP is
 * cleared by a hardware reset.
 *
 * Values:
 * 0 - DTACK signal is active high
 * 1 - DTACK signal is active low
 */

#define BP_EIM_CS1GCR2_DAP      (9)      //!< Bit position for EIM_CS1GCR2_DAP.
#define BM_EIM_CS1GCR2_DAP      (0x00000200)  //!< Bit mask for EIM_CS1GCR2_DAP.

//! @brief Get value of EIM_CS1GCR2_DAP from a register value.
#define BG_EIM_CS1GCR2_DAP(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_EIM_CS1GCR2_DAP) >> BP_EIM_CS1GCR2_DAP)

//! @brief Format value for bitfield EIM_CS1GCR2_DAP.
#define BF_EIM_CS1GCR2_DAP(v)   ((__REG_VALUE_TYPE((v), reg32_t) << BP_EIM_CS1GCR2_DAP) & BM_EIM_CS1GCR2_DAP)

#ifndef __LANGUAGE_ASM__
//! @brief Set the DAP field to a new value.
#define BW_EIM_CS1GCR2_DAP(v)   (HW_EIM_CS1GCR2_WR((HW_EIM_CS1GCR2_RD() & ~BM_EIM_CS1GCR2_DAP) | BF_EIM_CS1GCR2_DAP(v)))
#endif


/* --- Register HW_EIM_CS1GCR2, field MUX16_BYP_GRANT[12] (RW)
 *
 * Muxed 16 bypass grant. This bit when asserted causes EIM to bypass the grant/ack. arbitration
 * with NFC (only for 16 bit muxed mode accesses).
 *
 * Values:
 * 0 - EIM waits for grant before driving a 16 bit muxed mode access to the memory.
 * 1 - EIM ignores the grant signal and immediately drives a 16 bit muxed mode access to the memory.
 */

#define BP_EIM_CS1GCR2_MUX16_BYP_GRANT      (12)      //!< Bit position for EIM_CS1GCR2_MUX16_BYP_GRANT.
#define BM_EIM_CS1GCR2_MUX16_BYP_GRANT      (0x00001000)  //!< Bit mask for EIM_CS1GCR2_MUX16_BYP_GRANT.

//! @brief Get value of EIM_CS1GCR2_MUX16_BYP_GRANT from a register value.
#define BG_EIM_CS1GCR2_MUX16_BYP_GRANT(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_EIM_CS1GCR2_MUX16_BYP_GRANT) >> BP_EIM_CS1GCR2_MUX16_BYP_GRANT)

//! @brief Format value for bitfield EIM_CS1GCR2_MUX16_BYP_GRANT.
#define BF_EIM_CS1GCR2_MUX16_BYP_GRANT(v)   ((__REG_VALUE_TYPE((v), reg32_t) << BP_EIM_CS1GCR2_MUX16_BYP_GRANT) & BM_EIM_CS1GCR2_MUX16_BYP_GRANT)

#ifndef __LANGUAGE_ASM__
//! @brief Set the MUX16_BYP_GRANT field to a new value.
#define BW_EIM_CS1GCR2_MUX16_BYP_GRANT(v)   (HW_EIM_CS1GCR2_WR((HW_EIM_CS1GCR2_RD() & ~BM_EIM_CS1GCR2_MUX16_BYP_GRANT) | BF_EIM_CS1GCR2_MUX16_BYP_GRANT(v)))
#endif


//-------------------------------------------------------------------------------------------
// HW_EIM_CS1RCR1 - Chip Select n Read Configuration Register 1
//-------------------------------------------------------------------------------------------

#ifndef __LANGUAGE_ASM__
/*!
 * @brief HW_EIM_CS1RCR1 - Chip Select n Read Configuration Register 1 (RW)
 *
 * Reset value: 0x00000000
 *

 */
typedef union _hw_eim_cs1rcr1
{
    reg32_t U;
    struct _hw_eim_cs1rcr1_bitfields
    {
        unsigned RCSN : 3; //!< [2:0] Read CS Negation.
        unsigned RESERVED0 : 1; //!< [3] Reserved
        unsigned RCSA : 3; //!< [6:4] Read CS Assertion.
        unsigned RESERVED1 : 1; //!< [7] Reserved
        unsigned OEN : 3; //!< [10:8] OE Negation.
        unsigned RESERVED2 : 1; //!< [11] Reserved
        unsigned OEA : 3; //!< [14:12] OE Assertion.
        unsigned RESERVED3 : 1; //!< [15] Reserved
        unsigned RADVN : 3; //!< [18:16] ADV Negation.
        unsigned RAL : 1; //!< [19] Read ADV Low.
        unsigned RADVA : 3; //!< [22:20] ADV Assertion.
        unsigned RESERVED4 : 1; //!< [23] Reserved
        unsigned RWSC : 6; //!< [29:24] Read Wait State Control.
        unsigned RESERVED5 : 2; //!< [31:30] Reserved
    } B;
} hw_eim_cs1rcr1_t;
#endif

/*
 * constants & macros for entire EIM_CS1RCR1 register
 */
#define HW_EIM_CS1RCR1_ADDR      (REGS_EIM_BASE + 0x20)

#ifndef __LANGUAGE_ASM__
#define HW_EIM_CS1RCR1           (*(volatile hw_eim_cs1rcr1_t *) HW_EIM_CS1RCR1_ADDR)
#define HW_EIM_CS1RCR1_RD()      (HW_EIM_CS1RCR1.U)
#define HW_EIM_CS1RCR1_WR(v)     (HW_EIM_CS1RCR1.U = (v))
#define HW_EIM_CS1RCR1_SET(v)    (HW_EIM_CS1RCR1_WR(HW_EIM_CS1RCR1_RD() |  (v)))
#define HW_EIM_CS1RCR1_CLR(v)    (HW_EIM_CS1RCR1_WR(HW_EIM_CS1RCR1_RD() & ~(v)))
#define HW_EIM_CS1RCR1_TOG(v)    (HW_EIM_CS1RCR1_WR(HW_EIM_CS1RCR1_RD() ^  (v)))
#endif

/*
 * constants & macros for individual EIM_CS1RCR1 bitfields
 */

/* --- Register HW_EIM_CS1RCR1, field RCSN[2:0] (RW)
 *
 * Read CS Negation. This bit field determines when CS signal is negated during read cycles in
 * asynchronous single mode only (SRD=0 & APR = 0), according to the settings shown below. This bit
 * field is ignored when SRD=1. RCSN is cleared by a hardware reset. Example settings:
 *
 * Values:
 * 000 - 0 EIM clock cycles between end of read access and CS negation
 * 001 - 1 EIM clock cycles between end of read access and CS negation
 * 010 - 2 EIM clock cycles between end of read access and CS negation
 * 111 - 7 EIM clock cycles between end of read access and CS negation
 */

#define BP_EIM_CS1RCR1_RCSN      (0)      //!< Bit position for EIM_CS1RCR1_RCSN.
#define BM_EIM_CS1RCR1_RCSN      (0x00000007)  //!< Bit mask for EIM_CS1RCR1_RCSN.

//! @brief Get value of EIM_CS1RCR1_RCSN from a register value.
#define BG_EIM_CS1RCR1_RCSN(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_EIM_CS1RCR1_RCSN) >> BP_EIM_CS1RCR1_RCSN)

//! @brief Format value for bitfield EIM_CS1RCR1_RCSN.
#define BF_EIM_CS1RCR1_RCSN(v)   ((__REG_VALUE_TYPE((v), reg32_t) << BP_EIM_CS1RCR1_RCSN) & BM_EIM_CS1RCR1_RCSN)

#ifndef __LANGUAGE_ASM__
//! @brief Set the RCSN field to a new value.
#define BW_EIM_CS1RCR1_RCSN(v)   (HW_EIM_CS1RCR1_WR((HW_EIM_CS1RCR1_RD() & ~BM_EIM_CS1RCR1_RCSN) | BF_EIM_CS1RCR1_RCSN(v)))
#endif


/* --- Register HW_EIM_CS1RCR1, field RCSA[6:4] (RW)
 *
 * Read CS Assertion. This bit field determines when CS signal is asserted during read cycles
 * (synchronous or asynchronous mode), according to the settings shown below. RCSA is cleared by a
 * hardware reset. Example settings:
 *
 * Values:
 * 000 - 0 EIM clock cycles between beginning of read access and CS assertion
 * 001 - 1 EIM clock cycles between beginning of read access and CS assertion
 * 010 - 2 EIM clock cycles between beginning of read access and CS assertion
 * 111 - 7 EIM clock cycles between beginning of read access and CS assertion
 */

#define BP_EIM_CS1RCR1_RCSA      (4)      //!< Bit position for EIM_CS1RCR1_RCSA.
#define BM_EIM_CS1RCR1_RCSA      (0x00000070)  //!< Bit mask for EIM_CS1RCR1_RCSA.

//! @brief Get value of EIM_CS1RCR1_RCSA from a register value.
#define BG_EIM_CS1RCR1_RCSA(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_EIM_CS1RCR1_RCSA) >> BP_EIM_CS1RCR1_RCSA)

//! @brief Format value for bitfield EIM_CS1RCR1_RCSA.
#define BF_EIM_CS1RCR1_RCSA(v)   ((__REG_VALUE_TYPE((v), reg32_t) << BP_EIM_CS1RCR1_RCSA) & BM_EIM_CS1RCR1_RCSA)

#ifndef __LANGUAGE_ASM__
//! @brief Set the RCSA field to a new value.
#define BW_EIM_CS1RCR1_RCSA(v)   (HW_EIM_CS1RCR1_WR((HW_EIM_CS1RCR1_RD() & ~BM_EIM_CS1RCR1_RCSA) | BF_EIM_CS1RCR1_RCSA(v)))
#endif


/* --- Register HW_EIM_CS1RCR1, field OEN[10:8] (RW)
 *
 * OE Negation. This bit field determines when OE signal is negated during read cycles in
 * asynchronous single mode only (SRD=0 & APR = 0), according to the settings shown below. This bit
 * field is ignored when SRD=1. OEN is cleared by a hardware reset. Example settings:
 *
 * Values:
 * 000 - 0 EIM clock cycles between end of access and OE negation
 * 001 - 1 EIM clock cycles between end of access and OE negation
 * 010 - 2 EIM clock cycles between end of access and OE negation
 * 111 - 7 EIM clock cycles between end of access and OE negation
 */

#define BP_EIM_CS1RCR1_OEN      (8)      //!< Bit position for EIM_CS1RCR1_OEN.
#define BM_EIM_CS1RCR1_OEN      (0x00000700)  //!< Bit mask for EIM_CS1RCR1_OEN.

//! @brief Get value of EIM_CS1RCR1_OEN from a register value.
#define BG_EIM_CS1RCR1_OEN(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_EIM_CS1RCR1_OEN) >> BP_EIM_CS1RCR1_OEN)

//! @brief Format value for bitfield EIM_CS1RCR1_OEN.
#define BF_EIM_CS1RCR1_OEN(v)   ((__REG_VALUE_TYPE((v), reg32_t) << BP_EIM_CS1RCR1_OEN) & BM_EIM_CS1RCR1_OEN)

#ifndef __LANGUAGE_ASM__
//! @brief Set the OEN field to a new value.
#define BW_EIM_CS1RCR1_OEN(v)   (HW_EIM_CS1RCR1_WR((HW_EIM_CS1RCR1_RD() & ~BM_EIM_CS1RCR1_OEN) | BF_EIM_CS1RCR1_OEN(v)))
#endif


/* --- Register HW_EIM_CS1RCR1, field OEA[14:12] (RW)
 *
 * OE Assertion. This bit field determines when OE signal are asserted during read cycles
 * (synchronous or asynchronous mode), according to the settings shown below. OEA is cleared by a
 * hardware reset. In muxed mode OE assertion occurs (OEA + RADVN + RADVA + ADH +1) EIM clock cycles
 * from start of access. The reset value for EIM_CS0RCR1[OEA] is 0b000 if EIM_BOOT[2] = 0. If
 * EIM_BOOT[2] is 1, the reset value for EIM_CS0RCR1 is 0b010. The reset value of this field for
 * EIM_CS1RCR1 - EIM_CS5RCR1 is 0b000. Example settings:
 *
 * Values:
 * 000 - 0 EIM clock cycles between beginning of access and OE assertion
 * 001 - 1 EIM clock cycles between beginning of access and OE assertion
 * 010 - 2 EIM clock cycles between beginning of access and OE assertion
 * 111 - 7 EIM clock cycles between beginning of access and OE assertion
 */

#define BP_EIM_CS1RCR1_OEA      (12)      //!< Bit position for EIM_CS1RCR1_OEA.
#define BM_EIM_CS1RCR1_OEA      (0x00007000)  //!< Bit mask for EIM_CS1RCR1_OEA.

//! @brief Get value of EIM_CS1RCR1_OEA from a register value.
#define BG_EIM_CS1RCR1_OEA(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_EIM_CS1RCR1_OEA) >> BP_EIM_CS1RCR1_OEA)

//! @brief Format value for bitfield EIM_CS1RCR1_OEA.
#define BF_EIM_CS1RCR1_OEA(v)   ((__REG_VALUE_TYPE((v), reg32_t) << BP_EIM_CS1RCR1_OEA) & BM_EIM_CS1RCR1_OEA)

#ifndef __LANGUAGE_ASM__
//! @brief Set the OEA field to a new value.
#define BW_EIM_CS1RCR1_OEA(v)   (HW_EIM_CS1RCR1_WR((HW_EIM_CS1RCR1_RD() & ~BM_EIM_CS1RCR1_OEA) | BF_EIM_CS1RCR1_OEA(v)))
#endif


/* --- Register HW_EIM_CS1RCR1, field RADVN[18:16] (RW)
 *
 * ADV Negation. This bit field determines when ADV signal to memory is negated during read
 * accesses. When SRD=1 (synchronous read mode), ADV negation occurs according to the following
 * formula: (RADVN + RADVA + BCD + BCS + 1) EIM clock cycles from start of access. When asynchronous
 * read mode is applied (SRD=0) and RAL=0 ADV negation occurs according to the following formula:
 * (RADVN + RADVA + 1) EIM clock cycles from start of access. RADVN is cleared by a hardware reset.
 * the reset value for EIM_CS0RCR1[RADVN] = 2. For EIM_CS1RCR1 - EIM_CS5RCR1, the reset value is
 * 0b000. This field should be configured so ADV negation will occur before the end of access. For
 * ADV negation at the same time with the end of access user should RAL bit.
 */

#define BP_EIM_CS1RCR1_RADVN      (16)      //!< Bit position for EIM_CS1RCR1_RADVN.
#define BM_EIM_CS1RCR1_RADVN      (0x00070000)  //!< Bit mask for EIM_CS1RCR1_RADVN.

//! @brief Get value of EIM_CS1RCR1_RADVN from a register value.
#define BG_EIM_CS1RCR1_RADVN(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_EIM_CS1RCR1_RADVN) >> BP_EIM_CS1RCR1_RADVN)

//! @brief Format value for bitfield EIM_CS1RCR1_RADVN.
#define BF_EIM_CS1RCR1_RADVN(v)   ((__REG_VALUE_TYPE((v), reg32_t) << BP_EIM_CS1RCR1_RADVN) & BM_EIM_CS1RCR1_RADVN)

#ifndef __LANGUAGE_ASM__
//! @brief Set the RADVN field to a new value.
#define BW_EIM_CS1RCR1_RADVN(v)   (HW_EIM_CS1RCR1_WR((HW_EIM_CS1RCR1_RD() & ~BM_EIM_CS1RCR1_RADVN) | BF_EIM_CS1RCR1_RADVN(v)))
#endif

/* --- Register HW_EIM_CS1RCR1, field RAL[19] (RW)
 *
 * Read ADV Low. This bit field determine ADV signal negation time. When RAL=1, RADVN bit field is
 * ignored and ADV signal will stay asserted until end of access. When RAL=0 negation of ADV signal
 * is according to RADVN bit field configuration.
 */

#define BP_EIM_CS1RCR1_RAL      (19)      //!< Bit position for EIM_CS1RCR1_RAL.
#define BM_EIM_CS1RCR1_RAL      (0x00080000)  //!< Bit mask for EIM_CS1RCR1_RAL.

//! @brief Get value of EIM_CS1RCR1_RAL from a register value.
#define BG_EIM_CS1RCR1_RAL(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_EIM_CS1RCR1_RAL) >> BP_EIM_CS1RCR1_RAL)

//! @brief Format value for bitfield EIM_CS1RCR1_RAL.
#define BF_EIM_CS1RCR1_RAL(v)   ((__REG_VALUE_TYPE((v), reg32_t) << BP_EIM_CS1RCR1_RAL) & BM_EIM_CS1RCR1_RAL)

#ifndef __LANGUAGE_ASM__
//! @brief Set the RAL field to a new value.
#define BW_EIM_CS1RCR1_RAL(v)   (HW_EIM_CS1RCR1_WR((HW_EIM_CS1RCR1_RD() & ~BM_EIM_CS1RCR1_RAL) | BF_EIM_CS1RCR1_RAL(v)))
#endif

/* --- Register HW_EIM_CS1RCR1, field RADVA[22:20] (RW)
 *
 * ADV Assertion. This bit field determines when ADV signal is asserted for synchronous or
 * asynchronous read modes according to the settings shown below. RADVA is cleared by a hardware
 * reset. Example settings:
 *
 * Values:
 * 000 - 0 EIM clock cycles between beginning of access and ADV assertion
 * 001 - 1 EIM clock cycles between beginning of access and ADV assertion
 * 010 - 2 EIM clock cycles between beginning of access and ADV assertion
 * 111 - 7 EIM clock cycles between beginning of access and ADV assertion
 */

#define BP_EIM_CS1RCR1_RADVA      (20)      //!< Bit position for EIM_CS1RCR1_RADVA.
#define BM_EIM_CS1RCR1_RADVA      (0x00700000)  //!< Bit mask for EIM_CS1RCR1_RADVA.

//! @brief Get value of EIM_CS1RCR1_RADVA from a register value.
#define BG_EIM_CS1RCR1_RADVA(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_EIM_CS1RCR1_RADVA) >> BP_EIM_CS1RCR1_RADVA)

//! @brief Format value for bitfield EIM_CS1RCR1_RADVA.
#define BF_EIM_CS1RCR1_RADVA(v)   ((__REG_VALUE_TYPE((v), reg32_t) << BP_EIM_CS1RCR1_RADVA) & BM_EIM_CS1RCR1_RADVA)

#ifndef __LANGUAGE_ASM__
//! @brief Set the RADVA field to a new value.
#define BW_EIM_CS1RCR1_RADVA(v)   (HW_EIM_CS1RCR1_WR((HW_EIM_CS1RCR1_RD() & ~BM_EIM_CS1RCR1_RADVA) | BF_EIM_CS1RCR1_RADVA(v)))
#endif


/* --- Register HW_EIM_CS1RCR1, field RWSC[29:24] (RW)
 *
 * Read Wait State Control. This bit field programs the number of wait-states, according to the
 * settings shown below, for synchronous or asynchronous read access to the external device
 * connected to the chip select. When SRD=1 and RFL=0, RWSC indicates the number of burst clock
 * (BCLK) cycles from the start of an access, before the controller can start sample data.Since WAIT
 * signal can be asserted one cycle before the first data can be sampled, the controller starts
 * evaluating the WAIT signal state one cycle before, this is referred as handshake mode or variable
 * latency mode. When SRD=1 and RFL=1, RWSC indicates the number of burst clock (BCLK) cycles from
 * the start of an access, until the external device is ready for data transfer, this is referred as
 * fix latency mode. When SRD=0, RFL bit is ignored, RWSC indicates the asynchronous access length
 * and the number of EIM clock cycles from the start of access until the external device is ready
 * for data transfer. RWSC is cleared by a hardware reset. The reset value for EIM_CS0RCR1,
 * RWSC[5:0] = 0b011100. For CG1RCR1 - CS1RCR5 the reset value is 0b000000. Example settings:
 *
 * Values:
 * 000000 - Reserved
 * 000001 - RWSC value is 1
 * 000010 - RWSC value is 2
 * 111101 - RWSC value is 61
 * 111110 - RWSC value is 62
 * 111111 - RWSC value is 63
 */

#define BP_EIM_CS1RCR1_RWSC      (24)      //!< Bit position for EIM_CS1RCR1_RWSC.
#define BM_EIM_CS1RCR1_RWSC      (0x3f000000)  //!< Bit mask for EIM_CS1RCR1_RWSC.

//! @brief Get value of EIM_CS1RCR1_RWSC from a register value.
#define BG_EIM_CS1RCR1_RWSC(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_EIM_CS1RCR1_RWSC) >> BP_EIM_CS1RCR1_RWSC)

//! @brief Format value for bitfield EIM_CS1RCR1_RWSC.
#define BF_EIM_CS1RCR1_RWSC(v)   ((__REG_VALUE_TYPE((v), reg32_t) << BP_EIM_CS1RCR1_RWSC) & BM_EIM_CS1RCR1_RWSC)

#ifndef __LANGUAGE_ASM__
//! @brief Set the RWSC field to a new value.
#define BW_EIM_CS1RCR1_RWSC(v)   (HW_EIM_CS1RCR1_WR((HW_EIM_CS1RCR1_RD() & ~BM_EIM_CS1RCR1_RWSC) | BF_EIM_CS1RCR1_RWSC(v)))
#endif


//-------------------------------------------------------------------------------------------
// HW_EIM_CS1RCR2 - Chip Select n Read Configuration Register 2
//-------------------------------------------------------------------------------------------

#ifndef __LANGUAGE_ASM__
/*!
 * @brief HW_EIM_CS1RCR2 - Chip Select n Read Configuration Register 2 (RW)
 *
 * Reset value: 0x00000000
 *

 */
typedef union _hw_eim_cs1rcr2
{
    reg32_t U;
    struct _hw_eim_cs1rcr2_bitfields
    {
        unsigned RBEN : 3; //!< [2:0] Read BE Negation.
        unsigned RBE : 1; //!< [3] Read BE enable.
        unsigned RBEA : 3; //!< [6:4] Read BE Assertion.
        unsigned RESERVED0 : 1; //!< [7] Reserved
        unsigned RL : 2; //!< [9:8] Read Latency.
        unsigned RESERVED1 : 2; //!< [11:10] Reserved
        unsigned PAT : 3; //!< [14:12] Page Access Time.
        unsigned APR : 1; //!< [15] Asynchronous Page Read.
        unsigned RESERVED2 : 16; //!< [31:16] Reserved
    } B;
} hw_eim_cs1rcr2_t;
#endif

/*
 * constants & macros for entire EIM_CS1RCR2 register
 */
#define HW_EIM_CS1RCR2_ADDR      (REGS_EIM_BASE + 0x24)

#ifndef __LANGUAGE_ASM__
#define HW_EIM_CS1RCR2           (*(volatile hw_eim_cs1rcr2_t *) HW_EIM_CS1RCR2_ADDR)
#define HW_EIM_CS1RCR2_RD()      (HW_EIM_CS1RCR2.U)
#define HW_EIM_CS1RCR2_WR(v)     (HW_EIM_CS1RCR2.U = (v))
#define HW_EIM_CS1RCR2_SET(v)    (HW_EIM_CS1RCR2_WR(HW_EIM_CS1RCR2_RD() |  (v)))
#define HW_EIM_CS1RCR2_CLR(v)    (HW_EIM_CS1RCR2_WR(HW_EIM_CS1RCR2_RD() & ~(v)))
#define HW_EIM_CS1RCR2_TOG(v)    (HW_EIM_CS1RCR2_WR(HW_EIM_CS1RCR2_RD() ^  (v)))
#endif

/*
 * constants & macros for individual EIM_CS1RCR2 bitfields
 */

/* --- Register HW_EIM_CS1RCR2, field RBEN[2:0] (RW)
 *
 * Read BE Negation. This bit field determines when BE signal is negated during read cycles in
 * asynchronous single mode only (SRD=0 & APR=0), according to the settings shown below. This bit
 * field is ignored when SRD=1. RBEN is cleared by a hardware reset. Example settings:
 *
 * Values:
 * 000 - 0 EIM clock cycles between end of read access and BE negation
 * 001 - 1 EIM clock cycles between end of read access and BE negation
 * 010 - 2 EIM clock cycles between end of read access and BE negation
 * 111 - 7 EIM clock cycles between end of read access and BE negation
 */

#define BP_EIM_CS1RCR2_RBEN      (0)      //!< Bit position for EIM_CS1RCR2_RBEN.
#define BM_EIM_CS1RCR2_RBEN      (0x00000007)  //!< Bit mask for EIM_CS1RCR2_RBEN.

//! @brief Get value of EIM_CS1RCR2_RBEN from a register value.
#define BG_EIM_CS1RCR2_RBEN(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_EIM_CS1RCR2_RBEN) >> BP_EIM_CS1RCR2_RBEN)

//! @brief Format value for bitfield EIM_CS1RCR2_RBEN.
#define BF_EIM_CS1RCR2_RBEN(v)   ((__REG_VALUE_TYPE((v), reg32_t) << BP_EIM_CS1RCR2_RBEN) & BM_EIM_CS1RCR2_RBEN)

#ifndef __LANGUAGE_ASM__
//! @brief Set the RBEN field to a new value.
#define BW_EIM_CS1RCR2_RBEN(v)   (HW_EIM_CS1RCR2_WR((HW_EIM_CS1RCR2_RD() & ~BM_EIM_CS1RCR2_RBEN) | BF_EIM_CS1RCR2_RBEN(v)))
#endif


/* --- Register HW_EIM_CS1RCR2, field RBE[3] (RW)
 *
 * Read BE enable. This bit field determines if BE will be asserted during read access.
 *
 * Values:
 * 0 - - BE are disabled during read access.
 * 1- - BE are enable during read access according to value of RBEA & RBEN bit fields.
 */

#define BP_EIM_CS1RCR2_RBE      (3)      //!< Bit position for EIM_CS1RCR2_RBE.
#define BM_EIM_CS1RCR2_RBE      (0x00000008)  //!< Bit mask for EIM_CS1RCR2_RBE.

//! @brief Get value of EIM_CS1RCR2_RBE from a register value.
#define BG_EIM_CS1RCR2_RBE(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_EIM_CS1RCR2_RBE) >> BP_EIM_CS1RCR2_RBE)

//! @brief Format value for bitfield EIM_CS1RCR2_RBE.
#define BF_EIM_CS1RCR2_RBE(v)   ((__REG_VALUE_TYPE((v), reg32_t) << BP_EIM_CS1RCR2_RBE) & BM_EIM_CS1RCR2_RBE)

#ifndef __LANGUAGE_ASM__
//! @brief Set the RBE field to a new value.
#define BW_EIM_CS1RCR2_RBE(v)   (HW_EIM_CS1RCR2_WR((HW_EIM_CS1RCR2_RD() & ~BM_EIM_CS1RCR2_RBE) | BF_EIM_CS1RCR2_RBE(v)))
#endif


/* --- Register HW_EIM_CS1RCR2, field RBEA[6:4] (RW)
 *
 * Read BE Assertion. This bit field determines when BE signal is asserted during read cycles
 * (synchronous or asynchronous mode), according to the settings shown below. RBEA is cleared by a
 * hardware reset. Example settings:
 *
 * Values:
 * 000 - 0 EIM clock cycles between beginning of read access and BE assertion
 * 001 - 1 EIM clock cycles between beginning of read access and BE assertion
 * 010 - 2 EIM clock cycles between beginning of read access and BE assertion
 * 111 - 7 EIM clock cycles between beginning of read access and BE assertion
 */

#define BP_EIM_CS1RCR2_RBEA      (4)      //!< Bit position for EIM_CS1RCR2_RBEA.
#define BM_EIM_CS1RCR2_RBEA      (0x00000070)  //!< Bit mask for EIM_CS1RCR2_RBEA.

//! @brief Get value of EIM_CS1RCR2_RBEA from a register value.
#define BG_EIM_CS1RCR2_RBEA(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_EIM_CS1RCR2_RBEA) >> BP_EIM_CS1RCR2_RBEA)

//! @brief Format value for bitfield EIM_CS1RCR2_RBEA.
#define BF_EIM_CS1RCR2_RBEA(v)   ((__REG_VALUE_TYPE((v), reg32_t) << BP_EIM_CS1RCR2_RBEA) & BM_EIM_CS1RCR2_RBEA)

#ifndef __LANGUAGE_ASM__
//! @brief Set the RBEA field to a new value.
#define BW_EIM_CS1RCR2_RBEA(v)   (HW_EIM_CS1RCR2_WR((HW_EIM_CS1RCR2_RD() & ~BM_EIM_CS1RCR2_RBEA) | BF_EIM_CS1RCR2_RBEA(v)))
#endif


/* --- Register HW_EIM_CS1RCR2, field RL[9:8] (RW)
 *
 * Read Latency. This bit field indicates cycle latency when executing a synchronous read operation.
 * The fields holds the feedback clock loop delay in aclk cycle units. This field is cleared by a
 * hardware reset.
 *
 * Values:
 * 00 - Feedback clock loop delay is up to 1 cycle for BCD = 0 or 1.5 cycles for BCD != 0
 * 01 - Feedback clock loop delay is up to 2 cycles for BCD = 0 or 2.5 cycles for BCD != 0
 * 10 - Feedback clock loop delay is up to 3 cycles for BCD = 0 or 3.5 cycles for BCD != 0
 * 11 - Feedback clock loop delay is up to 4 cycles for BCD = 0 or 4.5 cycles for BCD != 0
 */

#define BP_EIM_CS1RCR2_RL      (8)      //!< Bit position for EIM_CS1RCR2_RL.
#define BM_EIM_CS1RCR2_RL      (0x00000300)  //!< Bit mask for EIM_CS1RCR2_RL.

//! @brief Get value of EIM_CS1RCR2_RL from a register value.
#define BG_EIM_CS1RCR2_RL(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_EIM_CS1RCR2_RL) >> BP_EIM_CS1RCR2_RL)

//! @brief Format value for bitfield EIM_CS1RCR2_RL.
#define BF_EIM_CS1RCR2_RL(v)   ((__REG_VALUE_TYPE((v), reg32_t) << BP_EIM_CS1RCR2_RL) & BM_EIM_CS1RCR2_RL)

#ifndef __LANGUAGE_ASM__
//! @brief Set the RL field to a new value.
#define BW_EIM_CS1RCR2_RL(v)   (HW_EIM_CS1RCR2_WR((HW_EIM_CS1RCR2_RD() & ~BM_EIM_CS1RCR2_RL) | BF_EIM_CS1RCR2_RL(v)))
#endif


/* --- Register HW_EIM_CS1RCR2, field PAT[14:12] (RW)
 *
 * Page Access Time. This bit field is used in Asynchronous Page Read mode only (APR=1). the initial
 * access is set by RWSC as in regular asynchronous mode. the consecutive address assertions width
 * determine by PAT field according to the settings shown below. when APR=0 this field is ignored.
 * PAT is cleared by a hardware reset for EIM_CS1GCR1 - EIM_CS5GCR1.
 *
 * Values:
 * 000 - Address width is 2 EIM clock cycles
 * 001 - Address width is 3 EIM clock cycles
 * 010 - Address width is 4 EIM clock cycles
 * 011 - Address width is 5 EIM clock cycles
 * 100 - Address width is 6 EIM clock cycles
 * 101 - Address width is 7 EIM clock cycles
 * 110 - Address width is 8 EIM clock cycles
 * 111 - Address width is 9 EIM clock cycles
 */

#define BP_EIM_CS1RCR2_PAT      (12)      //!< Bit position for EIM_CS1RCR2_PAT.
#define BM_EIM_CS1RCR2_PAT      (0x00007000)  //!< Bit mask for EIM_CS1RCR2_PAT.

//! @brief Get value of EIM_CS1RCR2_PAT from a register value.
#define BG_EIM_CS1RCR2_PAT(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_EIM_CS1RCR2_PAT) >> BP_EIM_CS1RCR2_PAT)

//! @brief Format value for bitfield EIM_CS1RCR2_PAT.
#define BF_EIM_CS1RCR2_PAT(v)   ((__REG_VALUE_TYPE((v), reg32_t) << BP_EIM_CS1RCR2_PAT) & BM_EIM_CS1RCR2_PAT)

#ifndef __LANGUAGE_ASM__
//! @brief Set the PAT field to a new value.
#define BW_EIM_CS1RCR2_PAT(v)   (HW_EIM_CS1RCR2_WR((HW_EIM_CS1RCR2_RD() & ~BM_EIM_CS1RCR2_PAT) | BF_EIM_CS1RCR2_PAT(v)))
#endif


/* --- Register HW_EIM_CS1RCR2, field APR[15] (RW)
 *
 * Asynchronous Page Read. This bit field determine the asynchronous read mode to the external
 * device. When APR=0, the async. read access is done as single word (where word is defined by the
 * DSZ field). when APR=1, the async. read access executed as page read. page size is according to
 * BL field config., RCSN,RBEN,OEN and RADVN are being ignored. APR is cleared by a hardware reset
 * for EIM_CS1GCR1 - EIM_CS5GCR1. SRD=0 and MUM=0 must apply when APR=1
 */

#define BP_EIM_CS1RCR2_APR      (15)      //!< Bit position for EIM_CS1RCR2_APR.
#define BM_EIM_CS1RCR2_APR      (0x00008000)  //!< Bit mask for EIM_CS1RCR2_APR.

//! @brief Get value of EIM_CS1RCR2_APR from a register value.
#define BG_EIM_CS1RCR2_APR(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_EIM_CS1RCR2_APR) >> BP_EIM_CS1RCR2_APR)

//! @brief Format value for bitfield EIM_CS1RCR2_APR.
#define BF_EIM_CS1RCR2_APR(v)   ((__REG_VALUE_TYPE((v), reg32_t) << BP_EIM_CS1RCR2_APR) & BM_EIM_CS1RCR2_APR)

#ifndef __LANGUAGE_ASM__
//! @brief Set the APR field to a new value.
#define BW_EIM_CS1RCR2_APR(v)   (HW_EIM_CS1RCR2_WR((HW_EIM_CS1RCR2_RD() & ~BM_EIM_CS1RCR2_APR) | BF_EIM_CS1RCR2_APR(v)))
#endif

//-------------------------------------------------------------------------------------------
// HW_EIM_CS1WCR1 - Chip Select n Write Configuration Register 1
//-------------------------------------------------------------------------------------------

#ifndef __LANGUAGE_ASM__
/*!
 * @brief HW_EIM_CS1WCR1 - Chip Select n Write Configuration Register 1 (RW)
 *
 * Reset value: 0x00000000
 *

 */
typedef union _hw_eim_cs1wcr1
{
    reg32_t U;
    struct _hw_eim_cs1wcr1_bitfields
    {
        unsigned WCSN : 3; //!< [2:0] Write CS Negation.
        unsigned WCSA : 3; //!< [5:3] Write CS Assertion.
        unsigned WEN : 3; //!< [8:6] WE Negation.
        unsigned WEA : 3; //!< [11:9] WE Assertion.
        unsigned WBEN : 3; //!< [14:12] BE[3:0] Negation.
        unsigned WBEA : 3; //!< [17:15] BE Assertion.
        unsigned WADVN : 3; //!< [20:18] ADV Negation.
        unsigned WADVA : 3; //!< [23:21] ADV Assertion.
        unsigned WWSC : 6; //!< [29:24] Write Wait State Control.
        unsigned WBED : 1; //!< [30] Write Byte Enable Disable.
        unsigned WAL : 1; //!< [31] Write ADV Low.
    } B;
} hw_eim_cs1wcr1_t;
#endif

/*
 * constants & macros for entire EIM_CS1WCR1 register
 */
#define HW_EIM_CS1WCR1_ADDR      (REGS_EIM_BASE + 0x28)

#ifndef __LANGUAGE_ASM__
#define HW_EIM_CS1WCR1           (*(volatile hw_eim_cs1wcr1_t *) HW_EIM_CS1WCR1_ADDR)
#define HW_EIM_CS1WCR1_RD()      (HW_EIM_CS1WCR1.U)
#define HW_EIM_CS1WCR1_WR(v)     (HW_EIM_CS1WCR1.U = (v))
#define HW_EIM_CS1WCR1_SET(v)    (HW_EIM_CS1WCR1_WR(HW_EIM_CS1WCR1_RD() |  (v)))
#define HW_EIM_CS1WCR1_CLR(v)    (HW_EIM_CS1WCR1_WR(HW_EIM_CS1WCR1_RD() & ~(v)))
#define HW_EIM_CS1WCR1_TOG(v)    (HW_EIM_CS1WCR1_WR(HW_EIM_CS1WCR1_RD() ^  (v)))
#endif

/*
 * constants & macros for individual EIM_CS1WCR1 bitfields
 */

/* --- Register HW_EIM_CS1WCR1, field WCSN[2:0] (RW)
 *
 * Write CS Negation. This bit field determines when CS signal is negated during write cycles in
 * asynchronous mode only (SWR=0), according to the settings shown below. This bit field is ignored
 * when SWR=1. WCSN is cleared by a hardware reset. Example settings:
 *
 * Values:
 * 000 - 0 EIM clock cycles between end of read access and CS negation
 * 001 - 1 EIM clock cycles between end of read access and CS negation
 * 010 - 2 EIM clock cycles between end of read access and CS negation
 * 111 - 7 EIM clock cycles between end of read access and CS negation
 */

#define BP_EIM_CS1WCR1_WCSN      (0)      //!< Bit position for EIM_CS1WCR1_WCSN.
#define BM_EIM_CS1WCR1_WCSN      (0x00000007)  //!< Bit mask for EIM_CS1WCR1_WCSN.

//! @brief Get value of EIM_CS1WCR1_WCSN from a register value.
#define BG_EIM_CS1WCR1_WCSN(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_EIM_CS1WCR1_WCSN) >> BP_EIM_CS1WCR1_WCSN)

//! @brief Format value for bitfield EIM_CS1WCR1_WCSN.
#define BF_EIM_CS1WCR1_WCSN(v)   ((__REG_VALUE_TYPE((v), reg32_t) << BP_EIM_CS1WCR1_WCSN) & BM_EIM_CS1WCR1_WCSN)

#ifndef __LANGUAGE_ASM__
//! @brief Set the WCSN field to a new value.
#define BW_EIM_CS1WCR1_WCSN(v)   (HW_EIM_CS1WCR1_WR((HW_EIM_CS1WCR1_RD() & ~BM_EIM_CS1WCR1_WCSN) | BF_EIM_CS1WCR1_WCSN(v)))
#endif


/* --- Register HW_EIM_CS1WCR1, field WCSA[5:3] (RW)
 *
 * Write CS Assertion. This bit field determines when CS signal is asserted during write cycles
 * (synchronous or asynchronous mode), according to the settings shown below.this bit field is
 * ignored when executing a read access to the external device. WCSA is cleared by a hardware reset.
 * Example settings:
 *
 * Values:
 * 000 - 0 EIM clock cycles between beginning of write access and CS assertion
 * 001 - 1 EIM clock cycles between beginning of write access and CS assertion
 * 010 - 2 EIM clock cycles between beginning of write access and CS assertion
 * 111 - 7 EIMclock cycles between beginning of write access and CS assertion
 */

#define BP_EIM_CS1WCR1_WCSA      (3)      //!< Bit position for EIM_CS1WCR1_WCSA.
#define BM_EIM_CS1WCR1_WCSA      (0x00000038)  //!< Bit mask for EIM_CS1WCR1_WCSA.

//! @brief Get value of EIM_CS1WCR1_WCSA from a register value.
#define BG_EIM_CS1WCR1_WCSA(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_EIM_CS1WCR1_WCSA) >> BP_EIM_CS1WCR1_WCSA)

//! @brief Format value for bitfield EIM_CS1WCR1_WCSA.
#define BF_EIM_CS1WCR1_WCSA(v)   ((__REG_VALUE_TYPE((v), reg32_t) << BP_EIM_CS1WCR1_WCSA) & BM_EIM_CS1WCR1_WCSA)

#ifndef __LANGUAGE_ASM__
//! @brief Set the WCSA field to a new value.
#define BW_EIM_CS1WCR1_WCSA(v)   (HW_EIM_CS1WCR1_WR((HW_EIM_CS1WCR1_RD() & ~BM_EIM_CS1WCR1_WCSA) | BF_EIM_CS1WCR1_WCSA(v)))
#endif


/* --- Register HW_EIM_CS1WCR1, field WEN[8:6] (RW)
 *
 * WE Negation. This bit field determines when WE signal is negated during write cycles in
 * asynchronous mode only (SWR=0), according to the settings shown below. This bit field is ignored
 * when SWR=1. WEN is cleared by a hardware reset. Reset value for EIM_CS0WCR for WEN is 2. For
 * EIM_CS1WCR - EIM_CS5WCR reset value is 000. Example settings:
 *
 * Values:
 * 000 - 0 EIM clock cycles between beginning of access and WE assertion
 * 001 - 1 EIM clock cycles between beginning of access and WE assertion
 * 010 - 2 EIM clock cycles between beginning of access and WE assertion
 * 111 - 7 EIM clock cycles between beginning of access and WE assertion
 */

#define BP_EIM_CS1WCR1_WEN      (6)      //!< Bit position for EIM_CS1WCR1_WEN.
#define BM_EIM_CS1WCR1_WEN      (0x000001c0)  //!< Bit mask for EIM_CS1WCR1_WEN.

//! @brief Get value of EIM_CS1WCR1_WEN from a register value.
#define BG_EIM_CS1WCR1_WEN(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_EIM_CS1WCR1_WEN) >> BP_EIM_CS1WCR1_WEN)

//! @brief Format value for bitfield EIM_CS1WCR1_WEN.
#define BF_EIM_CS1WCR1_WEN(v)   ((__REG_VALUE_TYPE((v), reg32_t) << BP_EIM_CS1WCR1_WEN) & BM_EIM_CS1WCR1_WEN)

#ifndef __LANGUAGE_ASM__
//! @brief Set the WEN field to a new value.
#define BW_EIM_CS1WCR1_WEN(v)   (HW_EIM_CS1WCR1_WR((HW_EIM_CS1WCR1_RD() & ~BM_EIM_CS1WCR1_WEN) | BF_EIM_CS1WCR1_WEN(v)))
#endif


/* --- Register HW_EIM_CS1WCR1, field WEA[11:9] (RW)
 *
 * WE Assertion. This bit field determines when WE signal is asserted during write cycles
 * (synchronous or asynchronous mode), according to the settings shown below. This bit field is
 * ignored when executing a read access to the external device. WEA is cleared by a hardware reset.
 * Reset value for EIM_CS0WCR for WEA is 2. For EIM_CS1WCR - EIM_CS5WCR reset value is 000. Example
 * settings:
 *
 * Values:
 * 000 - 0 EIM clock cycles between beginning of access and WE assertion
 * 001 - 1 EIM clock cycles between beginning of access and WE assertion
 * 010 - 2 EIM clock cycles between beginning of access and WE assertion
 * 111 - 7 EIMclock cycles between beginning of access and WE assertion
 */

#define BP_EIM_CS1WCR1_WEA      (9)      //!< Bit position for EIM_CS1WCR1_WEA.
#define BM_EIM_CS1WCR1_WEA      (0x00000e00)  //!< Bit mask for EIM_CS1WCR1_WEA.

//! @brief Get value of EIM_CS1WCR1_WEA from a register value.
#define BG_EIM_CS1WCR1_WEA(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_EIM_CS1WCR1_WEA) >> BP_EIM_CS1WCR1_WEA)

//! @brief Format value for bitfield EIM_CS1WCR1_WEA.
#define BF_EIM_CS1WCR1_WEA(v)   ((__REG_VALUE_TYPE((v), reg32_t) << BP_EIM_CS1WCR1_WEA) & BM_EIM_CS1WCR1_WEA)

#ifndef __LANGUAGE_ASM__
//! @brief Set the WEA field to a new value.
#define BW_EIM_CS1WCR1_WEA(v)   (HW_EIM_CS1WCR1_WR((HW_EIM_CS1WCR1_RD() & ~BM_EIM_CS1WCR1_WEA) | BF_EIM_CS1WCR1_WEA(v)))
#endif


/* --- Register HW_EIM_CS1WCR1, field WBEN[14:12] (RW)
 *
 * BE[3:0] Negation. This bit field determines when BE[3:0] bus signal is negated during write
 * cycles in async. mode only (SWR=0), according to the settings shown below. This bit field is
 * ignored when SWR=1. BEN is cleared by a hardware reset. Reset value for EIM_CS0WCR for WBEN is 2.
 * For EIM_CS1WCR - EIM_CS5WCR reset value is 000. Example settings: 000 0 EIM clock cycles between
 * end of access and WE negation 001 1 EIM clock cycles between end of access and WE negation 010 2
 * EIM clock cycles between end of access and WE negation 111 7 EIM clock cycles between end of
 * access and WE negation
 */

#define BP_EIM_CS1WCR1_WBEN      (12)      //!< Bit position for EIM_CS1WCR1_WBEN.
#define BM_EIM_CS1WCR1_WBEN      (0x00007000)  //!< Bit mask for EIM_CS1WCR1_WBEN.

//! @brief Get value of EIM_CS1WCR1_WBEN from a register value.
#define BG_EIM_CS1WCR1_WBEN(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_EIM_CS1WCR1_WBEN) >> BP_EIM_CS1WCR1_WBEN)

//! @brief Format value for bitfield EIM_CS1WCR1_WBEN.
#define BF_EIM_CS1WCR1_WBEN(v)   ((__REG_VALUE_TYPE((v), reg32_t) << BP_EIM_CS1WCR1_WBEN) & BM_EIM_CS1WCR1_WBEN)

#ifndef __LANGUAGE_ASM__
//! @brief Set the WBEN field to a new value.
#define BW_EIM_CS1WCR1_WBEN(v)   (HW_EIM_CS1WCR1_WR((HW_EIM_CS1WCR1_RD() & ~BM_EIM_CS1WCR1_WBEN) | BF_EIM_CS1WCR1_WBEN(v)))
#endif

/* --- Register HW_EIM_CS1WCR1, field WBEA[17:15] (RW)
 *
 * BE Assertion. This bit field determines when BE signal is asserted during write cycles in async.
 * mode only (SWR=0), according to the settings shown below. BEA is cleared by a hardware reset.
 * Reset value for EIM_CS0WCR for WBEA is 2. For EIM_CS1WCR - EIM_CS5WCR reset value is 000. Example
 * settings:
 *
 * Values:
 * 000 - 0 EIM clock cycles between beginning of access and BE assertion
 * 001 - 1 EIM clock cycles between beginning of access and BE assertion
 * 010 - 2 EIM clock cycles between beginning of access and BE assertion
 * 111 - 7 EIM clock cycles between beginning of access and BE assertion
 */

#define BP_EIM_CS1WCR1_WBEA      (15)      //!< Bit position for EIM_CS1WCR1_WBEA.
#define BM_EIM_CS1WCR1_WBEA      (0x00038000)  //!< Bit mask for EIM_CS1WCR1_WBEA.

//! @brief Get value of EIM_CS1WCR1_WBEA from a register value.
#define BG_EIM_CS1WCR1_WBEA(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_EIM_CS1WCR1_WBEA) >> BP_EIM_CS1WCR1_WBEA)

//! @brief Format value for bitfield EIM_CS1WCR1_WBEA.
#define BF_EIM_CS1WCR1_WBEA(v)   ((__REG_VALUE_TYPE((v), reg32_t) << BP_EIM_CS1WCR1_WBEA) & BM_EIM_CS1WCR1_WBEA)

#ifndef __LANGUAGE_ASM__
//! @brief Set the WBEA field to a new value.
#define BW_EIM_CS1WCR1_WBEA(v)   (HW_EIM_CS1WCR1_WR((HW_EIM_CS1WCR1_RD() & ~BM_EIM_CS1WCR1_WBEA) | BF_EIM_CS1WCR1_WBEA(v)))
#endif


/* --- Register HW_EIM_CS1WCR1, field WADVN[20:18] (RW)
 *
 * ADV Negation. This bit field determines when ADV signal to memory is negated during write
 * accesses. When SWR=1 (synchronous write mode), ADV negation occurs according to the following
 * formula: (WADVN + WADVA + BCD + BCS + 1) EIM clock cycles. When asynchronous read mode is applied
 * (SWR=0) ADV negation occurs according to the following formula: (WADVN + WADVA + 1) EIM clock
 * cycles. Reset value for EIM_CS0WCR for WADVN is 2. For EIM_CS1WCR - EIM_CS5WCR reset value is
 * 000. This field should be configured so ADV negation will occur before the end of access. For ADV
 * negation at the same time as the end of access, S/W should set the WAL bit.
 */

#define BP_EIM_CS1WCR1_WADVN      (18)      //!< Bit position for EIM_CS1WCR1_WADVN.
#define BM_EIM_CS1WCR1_WADVN      (0x001c0000)  //!< Bit mask for EIM_CS1WCR1_WADVN.

//! @brief Get value of EIM_CS1WCR1_WADVN from a register value.
#define BG_EIM_CS1WCR1_WADVN(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_EIM_CS1WCR1_WADVN) >> BP_EIM_CS1WCR1_WADVN)

//! @brief Format value for bitfield EIM_CS1WCR1_WADVN.
#define BF_EIM_CS1WCR1_WADVN(v)   ((__REG_VALUE_TYPE((v), reg32_t) << BP_EIM_CS1WCR1_WADVN) & BM_EIM_CS1WCR1_WADVN)

#ifndef __LANGUAGE_ASM__
//! @brief Set the WADVN field to a new value.
#define BW_EIM_CS1WCR1_WADVN(v)   (HW_EIM_CS1WCR1_WR((HW_EIM_CS1WCR1_RD() & ~BM_EIM_CS1WCR1_WADVN) | BF_EIM_CS1WCR1_WADVN(v)))
#endif

/* --- Register HW_EIM_CS1WCR1, field WADVA[23:21] (RW)
 *
 * ADV Assertion. This bit field determines when ADV signal is asserted for synchronous or
 * asynchronous write modes according to the settings shown below. WADVA is cleared by a hardware
 * reset. Example settings:
 *
 * Values:
 * 000 - 0 EIM clock cycles between beginning of access and ADV assertion
 * 001 - 1 EIM clock cycles between beginning of access and ADV assertion
 * 010 - 2 EIM clock cycles between beginning of access and ADV assertion
 * 111 - 7 EIM clock cycles between beginning of access and ADV assertion
 */

#define BP_EIM_CS1WCR1_WADVA      (21)      //!< Bit position for EIM_CS1WCR1_WADVA.
#define BM_EIM_CS1WCR1_WADVA      (0x00e00000)  //!< Bit mask for EIM_CS1WCR1_WADVA.

//! @brief Get value of EIM_CS1WCR1_WADVA from a register value.
#define BG_EIM_CS1WCR1_WADVA(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_EIM_CS1WCR1_WADVA) >> BP_EIM_CS1WCR1_WADVA)

//! @brief Format value for bitfield EIM_CS1WCR1_WADVA.
#define BF_EIM_CS1WCR1_WADVA(v)   ((__REG_VALUE_TYPE((v), reg32_t) << BP_EIM_CS1WCR1_WADVA) & BM_EIM_CS1WCR1_WADVA)

#ifndef __LANGUAGE_ASM__
//! @brief Set the WADVA field to a new value.
#define BW_EIM_CS1WCR1_WADVA(v)   (HW_EIM_CS1WCR1_WR((HW_EIM_CS1WCR1_RD() & ~BM_EIM_CS1WCR1_WADVA) | BF_EIM_CS1WCR1_WADVA(v)))
#endif


/* --- Register HW_EIM_CS1WCR1, field WWSC[29:24] (RW)
 *
 * Write Wait State Control. This bit field programs the number of wait-states, according to the
 * settings shown below, for synchronous or asynchronous write access to the external device
 * connected to the chip select. When SWR=1 and WFL=0, WWSC indicates the number of burst clock
 * (BCLK) cycles from the start of an access, before the memory can sample the first data.Since WAIT
 * signal can be asserted one cycle before the first data can be sampled, the controller starts
 * evaluating the WAIT signal state one cycle before, this is referred as handshake mode or variable
 * latency mode. When SWR=1 and WFL=1, WWSC indicates the number of burst clock (BCLK) cycles from
 * the start of an access, until the external device is ready for data transfer, this is referred as
 * fix latency mode. When SWR=0, WFL bit is ignored, WWSC indicates the asynchronous access length
 * and the number of EIM clock cycles from the start of access until the external device is ready
 * for data transfer. WWSC is cleared by a hardware reset. The reset value for EIM_CS0WCR1,
 * WWSC[5:0] = 0b011100. For EIM_CS1WCR1 - EIM_CS5WCR1, the reset value of this field is 0b000000.
 * Example settings:
 *
 * Values:
 * 000000 - Reserved
 * 000001 - WWSC value is 1
 * 000010 - WWSC value is 2
 * 000011 - WWSC value is 3
 * 111111 - WWSC value is 63
 */

#define BP_EIM_CS1WCR1_WWSC      (24)      //!< Bit position for EIM_CS1WCR1_WWSC.
#define BM_EIM_CS1WCR1_WWSC      (0x3f000000)  //!< Bit mask for EIM_CS1WCR1_WWSC.

//! @brief Get value of EIM_CS1WCR1_WWSC from a register value.
#define BG_EIM_CS1WCR1_WWSC(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_EIM_CS1WCR1_WWSC) >> BP_EIM_CS1WCR1_WWSC)

//! @brief Format value for bitfield EIM_CS1WCR1_WWSC.
#define BF_EIM_CS1WCR1_WWSC(v)   ((__REG_VALUE_TYPE((v), reg32_t) << BP_EIM_CS1WCR1_WWSC) & BM_EIM_CS1WCR1_WWSC)

#ifndef __LANGUAGE_ASM__
//! @brief Set the WWSC field to a new value.
#define BW_EIM_CS1WCR1_WWSC(v)   (HW_EIM_CS1WCR1_WR((HW_EIM_CS1WCR1_RD() & ~BM_EIM_CS1WCR1_WWSC) | BF_EIM_CS1WCR1_WWSC(v)))
#endif


/* --- Register HW_EIM_CS1WCR1, field WBED[30] (RW)
 *
 * Write Byte Enable Disable. When asserted this bit prevent from IPP_DO_BE_B[x] to be asserted
 * during write accesses.This bit is cleared by hardware reset.
 */

#define BP_EIM_CS1WCR1_WBED      (30)      //!< Bit position for EIM_CS1WCR1_WBED.
#define BM_EIM_CS1WCR1_WBED      (0x40000000)  //!< Bit mask for EIM_CS1WCR1_WBED.

//! @brief Get value of EIM_CS1WCR1_WBED from a register value.
#define BG_EIM_CS1WCR1_WBED(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_EIM_CS1WCR1_WBED) >> BP_EIM_CS1WCR1_WBED)

//! @brief Format value for bitfield EIM_CS1WCR1_WBED.
#define BF_EIM_CS1WCR1_WBED(v)   ((__REG_VALUE_TYPE((v), reg32_t) << BP_EIM_CS1WCR1_WBED) & BM_EIM_CS1WCR1_WBED)

#ifndef __LANGUAGE_ASM__
//! @brief Set the WBED field to a new value.
#define BW_EIM_CS1WCR1_WBED(v)   (HW_EIM_CS1WCR1_WR((HW_EIM_CS1WCR1_RD() & ~BM_EIM_CS1WCR1_WBED) | BF_EIM_CS1WCR1_WBED(v)))
#endif

/* --- Register HW_EIM_CS1WCR1, field WAL[31] (RW)
 *
 * Write ADV Low. This bit field determine ADV signal negation time in write accesses. When WAL=1,
 * WADVN bit field is ignored and ADV signal will stay asserted until end of access. When WAL=0
 * negation of ADV signal is according to WADVN bit field configuration.
 */

#define BP_EIM_CS1WCR1_WAL      (31)      //!< Bit position for EIM_CS1WCR1_WAL.
#define BM_EIM_CS1WCR1_WAL      (0x80000000)  //!< Bit mask for EIM_CS1WCR1_WAL.

//! @brief Get value of EIM_CS1WCR1_WAL from a register value.
#define BG_EIM_CS1WCR1_WAL(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_EIM_CS1WCR1_WAL) >> BP_EIM_CS1WCR1_WAL)

//! @brief Format value for bitfield EIM_CS1WCR1_WAL.
#define BF_EIM_CS1WCR1_WAL(v)   ((__REG_VALUE_TYPE((v), reg32_t) << BP_EIM_CS1WCR1_WAL) & BM_EIM_CS1WCR1_WAL)

#ifndef __LANGUAGE_ASM__
//! @brief Set the WAL field to a new value.
#define BW_EIM_CS1WCR1_WAL(v)   (HW_EIM_CS1WCR1_WR((HW_EIM_CS1WCR1_RD() & ~BM_EIM_CS1WCR1_WAL) | BF_EIM_CS1WCR1_WAL(v)))
#endif

//-------------------------------------------------------------------------------------------
// HW_EIM_CS1WCR2 - Chip Select n Write Configuration Register 2
//-------------------------------------------------------------------------------------------

#ifndef __LANGUAGE_ASM__
/*!
 * @brief HW_EIM_CS1WCR2 - Chip Select n Write Configuration Register 2 (RW)
 *
 * Reset value: 0x00000000
 *

 */
typedef union _hw_eim_cs1wcr2
{
    reg32_t U;
    struct _hw_eim_cs1wcr2_bitfields
    {
        unsigned WBCDD : 1; //!< [0] Write Burst Clock Divisor Decrement.
        unsigned RESERVED0 : 31; //!< [31:1] Reserved
    } B;
} hw_eim_cs1wcr2_t;
#endif

/*
 * constants & macros for entire EIM_CS1WCR2 register
 */
#define HW_EIM_CS1WCR2_ADDR      (REGS_EIM_BASE + 0x2c)

#ifndef __LANGUAGE_ASM__
#define HW_EIM_CS1WCR2           (*(volatile hw_eim_cs1wcr2_t *) HW_EIM_CS1WCR2_ADDR)
#define HW_EIM_CS1WCR2_RD()      (HW_EIM_CS1WCR2.U)
#define HW_EIM_CS1WCR2_WR(v)     (HW_EIM_CS1WCR2.U = (v))
#define HW_EIM_CS1WCR2_SET(v)    (HW_EIM_CS1WCR2_WR(HW_EIM_CS1WCR2_RD() |  (v)))
#define HW_EIM_CS1WCR2_CLR(v)    (HW_EIM_CS1WCR2_WR(HW_EIM_CS1WCR2_RD() & ~(v)))
#define HW_EIM_CS1WCR2_TOG(v)    (HW_EIM_CS1WCR2_WR(HW_EIM_CS1WCR2_RD() ^  (v)))
#endif

/*
 * constants & macros for individual EIM_CS1WCR2 bitfields
 */

/* --- Register HW_EIM_CS1WCR2, field WBCDD[0] (RW)
 *
 * Write Burst Clock Divisor Decrement. If this bit is asserted and BCD value is 0 sync. write
 * access will be preformed as if BCD value is 1.When this bit is negated or BCD value is not 0 this
 * bit has no affect. This bit is cleared by hardware reset.
 */

#define BP_EIM_CS1WCR2_WBCDD      (0)      //!< Bit position for EIM_CS1WCR2_WBCDD.
#define BM_EIM_CS1WCR2_WBCDD      (0x00000001)  //!< Bit mask for EIM_CS1WCR2_WBCDD.

//! @brief Get value of EIM_CS1WCR2_WBCDD from a register value.
#define BG_EIM_CS1WCR2_WBCDD(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_EIM_CS1WCR2_WBCDD) >> BP_EIM_CS1WCR2_WBCDD)

//! @brief Format value for bitfield EIM_CS1WCR2_WBCDD.
#define BF_EIM_CS1WCR2_WBCDD(v)   ((__REG_VALUE_TYPE((v), reg32_t) << BP_EIM_CS1WCR2_WBCDD) & BM_EIM_CS1WCR2_WBCDD)

#ifndef __LANGUAGE_ASM__
//! @brief Set the WBCDD field to a new value.
#define BW_EIM_CS1WCR2_WBCDD(v)   (HW_EIM_CS1WCR2_WR((HW_EIM_CS1WCR2_RD() & ~BM_EIM_CS1WCR2_WBCDD) | BF_EIM_CS1WCR2_WBCDD(v)))
#endif

//-------------------------------------------------------------------------------------------
// HW_EIM_CS2GCR1 - Chip Select n General Configuration Register 1
//-------------------------------------------------------------------------------------------

#ifndef __LANGUAGE_ASM__
/*!
 * @brief HW_EIM_CS2GCR1 - Chip Select n General Configuration Register 1 (RW)
 *
 * Reset value: 0x00010080
 *

 */
typedef union _hw_eim_cs2gcr1
{
    reg32_t U;
    struct _hw_eim_cs2gcr1_bitfields
    {
        unsigned CSEN : 1; //!< [0] CS Enable.
        unsigned SWR : 1; //!< [1] Synchronous Write Data.
        unsigned SRD : 1; //!< [2] Synchronous Read Data.
        unsigned MUM : 1; //!< [3] Multiplexed Mode.
        unsigned WFL : 1; //!< [4] Write Fix Latency.
        unsigned RFL : 1; //!< [5] Read Fix Latency.
        unsigned CRE : 1; //!< [6] Configuration Register Enable.
        unsigned CREP : 1; //!< [7] Configuration Register Enable Polarity.
        unsigned BL : 3; //!< [10:8] Burst Length.
        unsigned WC : 1; //!< [11] Write Continuous.
        unsigned BCD : 2; //!< [13:12] Burst Clock Divisor.
        unsigned BCS : 2; //!< [15:14] Burst Clock Start.
        unsigned DSZ : 3; //!< [18:16] Data Port Size.
        unsigned SP : 1; //!< [19] Supervisor Protect.
        unsigned CSREC : 3; //!< [22:20] CS Recovery.
        unsigned AUS : 1; //!< [23] Address UnShifted.
        unsigned GBC : 3; //!< [26:24] Gap Between Chip Selects.
        unsigned WP : 1; //!< [27] Write Protect.
        unsigned PSZ : 4; //!< [31:28] Page Size.
    } B;
} hw_eim_cs2gcr1_t;
#endif

/*
 * constants & macros for entire EIM_CS2GCR1 register
 */
#define HW_EIM_CS2GCR1_ADDR      (REGS_EIM_BASE + 0x30)

#ifndef __LANGUAGE_ASM__
#define HW_EIM_CS2GCR1           (*(volatile hw_eim_cs2gcr1_t *) HW_EIM_CS2GCR1_ADDR)
#define HW_EIM_CS2GCR1_RD()      (HW_EIM_CS2GCR1.U)
#define HW_EIM_CS2GCR1_WR(v)     (HW_EIM_CS2GCR1.U = (v))
#define HW_EIM_CS2GCR1_SET(v)    (HW_EIM_CS2GCR1_WR(HW_EIM_CS2GCR1_RD() |  (v)))
#define HW_EIM_CS2GCR1_CLR(v)    (HW_EIM_CS2GCR1_WR(HW_EIM_CS2GCR1_RD() & ~(v)))
#define HW_EIM_CS2GCR1_TOG(v)    (HW_EIM_CS2GCR1_WR(HW_EIM_CS2GCR1_RD() ^  (v)))
#endif

/*
 * constants & macros for individual EIM_CS2GCR1 bitfields
 */

/* --- Register HW_EIM_CS2GCR1, field CSEN[0] (RW)
 *
 * CS Enable. This bit controls the operation of the chip select pin. CSEN is set by a hardware
 * reset for CSGCR0 to allow external boot operation. CSEN is cleared by a hardware reset to
 * CSGCR1-CSGCR5. Reset value for EIM_CS0GCR1 for CSEN is 1. For EIM_CS1GCR1-CS1GCR5 reset value is
 * 0.
 *
 * Values:
 * 0 - Chip select function is disabled; attempts to access an address mapped by this chip select results
 *     in an error respond and no assertion of the chip select output
 * 1 - Chip select is enabled, and is asserted when presented with a valid access.
 */

#define BP_EIM_CS2GCR1_CSEN      (0)      //!< Bit position for EIM_CS2GCR1_CSEN.
#define BM_EIM_CS2GCR1_CSEN      (0x00000001)  //!< Bit mask for EIM_CS2GCR1_CSEN.

//! @brief Get value of EIM_CS2GCR1_CSEN from a register value.
#define BG_EIM_CS2GCR1_CSEN(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_EIM_CS2GCR1_CSEN) >> BP_EIM_CS2GCR1_CSEN)

//! @brief Format value for bitfield EIM_CS2GCR1_CSEN.
#define BF_EIM_CS2GCR1_CSEN(v)   ((__REG_VALUE_TYPE((v), reg32_t) << BP_EIM_CS2GCR1_CSEN) & BM_EIM_CS2GCR1_CSEN)

#ifndef __LANGUAGE_ASM__
//! @brief Set the CSEN field to a new value.
#define BW_EIM_CS2GCR1_CSEN(v)   (HW_EIM_CS2GCR1_WR((HW_EIM_CS2GCR1_RD() & ~BM_EIM_CS2GCR1_CSEN) | BF_EIM_CS2GCR1_CSEN(v)))
#endif


/* --- Register HW_EIM_CS2GCR1, field SWR[1] (RW)
 *
 * Synchronous Write Data. This bit field determine the write accesses mode to the External device
 * of the chip select. The External device should be configured to the same mode as this bit
 * implicates. SWR is cleared by a hardware reset. Sync. accesses supported only for 16/32 bit port.
 *
 * Values:
 * 0 - write accesses are in Asynchronous mode
 * 1 - write accesses are in Synchronous mode
 */

#define BP_EIM_CS2GCR1_SWR      (1)      //!< Bit position for EIM_CS2GCR1_SWR.
#define BM_EIM_CS2GCR1_SWR      (0x00000002)  //!< Bit mask for EIM_CS2GCR1_SWR.

//! @brief Get value of EIM_CS2GCR1_SWR from a register value.
#define BG_EIM_CS2GCR1_SWR(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_EIM_CS2GCR1_SWR) >> BP_EIM_CS2GCR1_SWR)

//! @brief Format value for bitfield EIM_CS2GCR1_SWR.
#define BF_EIM_CS2GCR1_SWR(v)   ((__REG_VALUE_TYPE((v), reg32_t) << BP_EIM_CS2GCR1_SWR) & BM_EIM_CS2GCR1_SWR)

#ifndef __LANGUAGE_ASM__
//! @brief Set the SWR field to a new value.
#define BW_EIM_CS2GCR1_SWR(v)   (HW_EIM_CS2GCR1_WR((HW_EIM_CS2GCR1_RD() & ~BM_EIM_CS2GCR1_SWR) | BF_EIM_CS2GCR1_SWR(v)))
#endif


/* --- Register HW_EIM_CS2GCR1, field SRD[2] (RW)
 *
 * Synchronous Read Data. This bit field determine the read accesses mode to the External device of
 * the chip select. The External device should be configured to the same mode as this bit
 * implicates. SRD is cleared by a hardware reset. Sync. accesses supported only for 16/32 bit port.
 *
 * Values:
 * 0 - read accesses are in Asynchronous mode
 * 1 - read accesses are in Synchronous mode
 */

#define BP_EIM_CS2GCR1_SRD      (2)      //!< Bit position for EIM_CS2GCR1_SRD.
#define BM_EIM_CS2GCR1_SRD      (0x00000004)  //!< Bit mask for EIM_CS2GCR1_SRD.

//! @brief Get value of EIM_CS2GCR1_SRD from a register value.
#define BG_EIM_CS2GCR1_SRD(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_EIM_CS2GCR1_SRD) >> BP_EIM_CS2GCR1_SRD)

//! @brief Format value for bitfield EIM_CS2GCR1_SRD.
#define BF_EIM_CS2GCR1_SRD(v)   ((__REG_VALUE_TYPE((v), reg32_t) << BP_EIM_CS2GCR1_SRD) & BM_EIM_CS2GCR1_SRD)

#ifndef __LANGUAGE_ASM__
//! @brief Set the SRD field to a new value.
#define BW_EIM_CS2GCR1_SRD(v)   (HW_EIM_CS2GCR1_WR((HW_EIM_CS2GCR1_RD() & ~BM_EIM_CS2GCR1_SRD) | BF_EIM_CS2GCR1_SRD(v)))
#endif


/* --- Register HW_EIM_CS2GCR1, field MUM[3] (RW)
 *
 * Multiplexed Mode. This bit determines the address/data multiplexed mode for asynchronous and
 * synchronous accesses for 8 bit, 16 bit or 32 bit devices (DSZ config. dependent). The reset value
 * for EIM_CS0GCR1[MUM] = EIM_BOOT[2]. For EIM_CS1GCR1 - EIM_CS5GCR1 the reset value is 0.
 *
 * Values:
 * 0 - Multiplexed Mode disable
 * 1 - Multiplexed Mode enable
 */

#define BP_EIM_CS2GCR1_MUM      (3)      //!< Bit position for EIM_CS2GCR1_MUM.
#define BM_EIM_CS2GCR1_MUM      (0x00000008)  //!< Bit mask for EIM_CS2GCR1_MUM.

//! @brief Get value of EIM_CS2GCR1_MUM from a register value.
#define BG_EIM_CS2GCR1_MUM(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_EIM_CS2GCR1_MUM) >> BP_EIM_CS2GCR1_MUM)

//! @brief Format value for bitfield EIM_CS2GCR1_MUM.
#define BF_EIM_CS2GCR1_MUM(v)   ((__REG_VALUE_TYPE((v), reg32_t) << BP_EIM_CS2GCR1_MUM) & BM_EIM_CS2GCR1_MUM)

#ifndef __LANGUAGE_ASM__
//! @brief Set the MUM field to a new value.
#define BW_EIM_CS2GCR1_MUM(v)   (HW_EIM_CS2GCR1_WR((HW_EIM_CS2GCR1_RD() & ~BM_EIM_CS2GCR1_MUM) | BF_EIM_CS2GCR1_MUM(v)))
#endif


/* --- Register HW_EIM_CS2GCR1, field WFL[4] (RW)
 *
 * Write Fix Latency. This bit field determine if the controller is monitoring the WAIT signal from
 * the External device connected to the chip select (handshake mode - fix or variable data latency)
 * or if it start data transfer according to WWSC field, it only valid in synchronous mode. WFL is
 * cleared by a hardware reset. When WFL=1 Burst access is terminated on page boundary and resume on
 * the following page according to BL bit field configuration, because WAIT signal is not monitored
 * from the external device
 *
 * Values:
 * 0 - the External device WAIT signal is being monitored, and it reflect the external data bus state
 * 1 - the state of the External devices is determined internally (Fix latency mode only)
 */

#define BP_EIM_CS2GCR1_WFL      (4)      //!< Bit position for EIM_CS2GCR1_WFL.
#define BM_EIM_CS2GCR1_WFL      (0x00000010)  //!< Bit mask for EIM_CS2GCR1_WFL.

//! @brief Get value of EIM_CS2GCR1_WFL from a register value.
#define BG_EIM_CS2GCR1_WFL(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_EIM_CS2GCR1_WFL) >> BP_EIM_CS2GCR1_WFL)

//! @brief Format value for bitfield EIM_CS2GCR1_WFL.
#define BF_EIM_CS2GCR1_WFL(v)   ((__REG_VALUE_TYPE((v), reg32_t) << BP_EIM_CS2GCR1_WFL) & BM_EIM_CS2GCR1_WFL)

#ifndef __LANGUAGE_ASM__
//! @brief Set the WFL field to a new value.
#define BW_EIM_CS2GCR1_WFL(v)   (HW_EIM_CS2GCR1_WR((HW_EIM_CS2GCR1_RD() & ~BM_EIM_CS2GCR1_WFL) | BF_EIM_CS2GCR1_WFL(v)))
#endif


/* --- Register HW_EIM_CS2GCR1, field RFL[5] (RW)
 *
 * Read Fix Latency. This bit field determine if the controller is monitoring the WAIT signal from
 * the External device connected to the chip select (handshake mode - fix or variable data latency)
 * or if it start sampling data according to RWSC field, it only valid in synchronous mode. RFL is
 * cleared by a hardware reset. When RFL=1 Burst access is terminated on page boundary and resume on
 * the following page according to BL bit field configuration, because WAIT signal is not monitored
 * from the external device.
 *
 * Values:
 * 0 - the External device WAIT signal is being monitored, and it reflect the external data bus state
 * 1 - the state of the External devices is determined internally (Fix latency mode only)
 */

#define BP_EIM_CS2GCR1_RFL      (5)      //!< Bit position for EIM_CS2GCR1_RFL.
#define BM_EIM_CS2GCR1_RFL      (0x00000020)  //!< Bit mask for EIM_CS2GCR1_RFL.

//! @brief Get value of EIM_CS2GCR1_RFL from a register value.
#define BG_EIM_CS2GCR1_RFL(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_EIM_CS2GCR1_RFL) >> BP_EIM_CS2GCR1_RFL)

//! @brief Format value for bitfield EIM_CS2GCR1_RFL.
#define BF_EIM_CS2GCR1_RFL(v)   ((__REG_VALUE_TYPE((v), reg32_t) << BP_EIM_CS2GCR1_RFL) & BM_EIM_CS2GCR1_RFL)

#ifndef __LANGUAGE_ASM__
//! @brief Set the RFL field to a new value.
#define BW_EIM_CS2GCR1_RFL(v)   (HW_EIM_CS2GCR1_WR((HW_EIM_CS2GCR1_RD() & ~BM_EIM_CS2GCR1_RFL) | BF_EIM_CS2GCR1_RFL(v)))
#endif


/* --- Register HW_EIM_CS2GCR1, field CRE[6] (RW)
 *
 * Configuration Register Enable. This bit indicates CRE memory pin state while executing a memory
 * register set command to PSRAM external device. CRE is cleared by a hardware reset.
 *
 * Values:
 * 0 - CRE signal use is disable
 * 1 - CRE signal use is enable
 */

#define BP_EIM_CS2GCR1_CRE      (6)      //!< Bit position for EIM_CS2GCR1_CRE.
#define BM_EIM_CS2GCR1_CRE      (0x00000040)  //!< Bit mask for EIM_CS2GCR1_CRE.

//! @brief Get value of EIM_CS2GCR1_CRE from a register value.
#define BG_EIM_CS2GCR1_CRE(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_EIM_CS2GCR1_CRE) >> BP_EIM_CS2GCR1_CRE)

//! @brief Format value for bitfield EIM_CS2GCR1_CRE.
#define BF_EIM_CS2GCR1_CRE(v)   ((__REG_VALUE_TYPE((v), reg32_t) << BP_EIM_CS2GCR1_CRE) & BM_EIM_CS2GCR1_CRE)

#ifndef __LANGUAGE_ASM__
//! @brief Set the CRE field to a new value.
#define BW_EIM_CS2GCR1_CRE(v)   (HW_EIM_CS2GCR1_WR((HW_EIM_CS2GCR1_RD() & ~BM_EIM_CS2GCR1_CRE) | BF_EIM_CS2GCR1_CRE(v)))
#endif


/* --- Register HW_EIM_CS2GCR1, field CREP[7] (RW)
 *
 * Configuration Register Enable Polarity. This bit indicates CRE memory pin assertion state,
 * active-low or active-high, while executing a memory register set command to the external device
 * (PSRAM memory type). CREP is set by a hardware reset. Whenever PSRAM is connected the CREP value
 * must be correct also for accesses where CRE is disabled. For Non-PSRAM memory CREP value should
 * be 1.
 *
 * Values:
 * 0 - CRE signal is active low
 * 1 - CRE signal is active high
 */

#define BP_EIM_CS2GCR1_CREP      (7)      //!< Bit position for EIM_CS2GCR1_CREP.
#define BM_EIM_CS2GCR1_CREP      (0x00000080)  //!< Bit mask for EIM_CS2GCR1_CREP.

//! @brief Get value of EIM_CS2GCR1_CREP from a register value.
#define BG_EIM_CS2GCR1_CREP(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_EIM_CS2GCR1_CREP) >> BP_EIM_CS2GCR1_CREP)

//! @brief Format value for bitfield EIM_CS2GCR1_CREP.
#define BF_EIM_CS2GCR1_CREP(v)   ((__REG_VALUE_TYPE((v), reg32_t) << BP_EIM_CS2GCR1_CREP) & BM_EIM_CS2GCR1_CREP)

#ifndef __LANGUAGE_ASM__
//! @brief Set the CREP field to a new value.
#define BW_EIM_CS2GCR1_CREP(v)   (HW_EIM_CS2GCR1_WR((HW_EIM_CS2GCR1_RD() & ~BM_EIM_CS2GCR1_CREP) | BF_EIM_CS2GCR1_CREP(v)))
#endif


/* --- Register HW_EIM_CS2GCR1, field BL[10:8] (RW)
 *
 * Burst Length. The BL bit field indicates memory burst length in words (word is defined by the DSZ
 * field) and should be properly initialized for mixed wrap/increment accesses support. Continuous
 * BL value corresponds to continuous burst length setting of the external memory device. For fix
 * memory burst size, type is always wrap. In case not matching wrap boundaries in both the memory
 * (BL field) and Master access on the current address, EIM update address on the external device
 * address bus and regenerates the access. BL is cleared by a hardware reset. When APR=1, Page Read
 * Mode is applied, BL determine the number of words within the read page burst. BL is cleared by a
 * hardware reset for EIM_CS0GCR1 - EIM_CS5GCR1.
 *
 * Values:
 * 000 - 4 words Memory wrap burst length (read page burst size when APR = 1)
 * 001 - 8 words Memory wrap burst length (read page burst size when APR = 1)
 * 010 - 16 words Memory wrap burst length (read page burst size when APR = 1)
 * 011 - 32 words Memory wrap burst length (read page burst size when APR = 1)
 * 100 - Continuous burst length (2 words read page burst size when APR = 1)
 * 101 - Reserved
 * 110 - Reserved
 * 111 - Reserved
 */

#define BP_EIM_CS2GCR1_BL      (8)      //!< Bit position for EIM_CS2GCR1_BL.
#define BM_EIM_CS2GCR1_BL      (0x00000700)  //!< Bit mask for EIM_CS2GCR1_BL.

//! @brief Get value of EIM_CS2GCR1_BL from a register value.
#define BG_EIM_CS2GCR1_BL(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_EIM_CS2GCR1_BL) >> BP_EIM_CS2GCR1_BL)

//! @brief Format value for bitfield EIM_CS2GCR1_BL.
#define BF_EIM_CS2GCR1_BL(v)   ((__REG_VALUE_TYPE((v), reg32_t) << BP_EIM_CS2GCR1_BL) & BM_EIM_CS2GCR1_BL)

#ifndef __LANGUAGE_ASM__
//! @brief Set the BL field to a new value.
#define BW_EIM_CS2GCR1_BL(v)   (HW_EIM_CS2GCR1_WR((HW_EIM_CS2GCR1_RD() & ~BM_EIM_CS2GCR1_BL) | BF_EIM_CS2GCR1_BL(v)))
#endif


/* --- Register HW_EIM_CS2GCR1, field WC[11] (RW)
 *
 * Write Continuous. The WI bit indicates that write access to the memory are always continuous
 * accesses regardless of the BL field value. WI is cleared by hardware reset.
 *
 * Values:
 * 0 - Write access burst length occurs according to BL value.
 * 1 - Write access burst length is continuous.
 */

#define BP_EIM_CS2GCR1_WC      (11)      //!< Bit position for EIM_CS2GCR1_WC.
#define BM_EIM_CS2GCR1_WC      (0x00000800)  //!< Bit mask for EIM_CS2GCR1_WC.

//! @brief Get value of EIM_CS2GCR1_WC from a register value.
#define BG_EIM_CS2GCR1_WC(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_EIM_CS2GCR1_WC) >> BP_EIM_CS2GCR1_WC)

//! @brief Format value for bitfield EIM_CS2GCR1_WC.
#define BF_EIM_CS2GCR1_WC(v)   ((__REG_VALUE_TYPE((v), reg32_t) << BP_EIM_CS2GCR1_WC) & BM_EIM_CS2GCR1_WC)

#ifndef __LANGUAGE_ASM__
//! @brief Set the WC field to a new value.
#define BW_EIM_CS2GCR1_WC(v)   (HW_EIM_CS2GCR1_WR((HW_EIM_CS2GCR1_RD() & ~BM_EIM_CS2GCR1_WC) | BF_EIM_CS2GCR1_WC(v)))
#endif


/* --- Register HW_EIM_CS2GCR1, field BCD[13:12] (RW)
 *
 * Burst Clock Divisor. This bit field contains the value used to program the burst clock divisor
 * for BCLK generation. It is used to divide the internal EIMbus frequency. BCD is cleared by a
 * hardware reset. For other then the mentioned below frequency such as 104 MHz, EIM clock (input
 * clock) should be adjust accordingly.
 *
 * Values:
 * 00 - Divide EIM clock by 1
 * 01 - Divide EIM clock by 2
 * 10 - Divide EIM clock by 3
 * 11 - Divide EIM clock by 4
 */

#define BP_EIM_CS2GCR1_BCD      (12)      //!< Bit position for EIM_CS2GCR1_BCD.
#define BM_EIM_CS2GCR1_BCD      (0x00003000)  //!< Bit mask for EIM_CS2GCR1_BCD.

//! @brief Get value of EIM_CS2GCR1_BCD from a register value.
#define BG_EIM_CS2GCR1_BCD(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_EIM_CS2GCR1_BCD) >> BP_EIM_CS2GCR1_BCD)

//! @brief Format value for bitfield EIM_CS2GCR1_BCD.
#define BF_EIM_CS2GCR1_BCD(v)   ((__REG_VALUE_TYPE((v), reg32_t) << BP_EIM_CS2GCR1_BCD) & BM_EIM_CS2GCR1_BCD)

#ifndef __LANGUAGE_ASM__
//! @brief Set the BCD field to a new value.
#define BW_EIM_CS2GCR1_BCD(v)   (HW_EIM_CS2GCR1_WR((HW_EIM_CS2GCR1_RD() & ~BM_EIM_CS2GCR1_BCD) | BF_EIM_CS2GCR1_BCD(v)))
#endif


/* --- Register HW_EIM_CS2GCR1, field BCS[15:14] (RW)
 *
 * Burst Clock Start. When SRD=1 or SWR=1,this bit field determines the number of EIM clock cycles
 * delay from start of access before the first rising edge of BCLK is generated. When BCD=0 value of
 * BCS=0 results in a half clock delay after the start of access. For other values of BCD a one
 * clock delay after the start of access is applied, not an immediate assertion. BCS is cleared by a
 * hardware reset.
 *
 * Values:
 * 00 - 0 EIM clock cycle additional delay
 * 01 - 1 EIM clock cycle additional delay
 * 10 - 2 EIM clock cycle additional delay
 * 11 - 3 EIM clock cycle additional delay
 */

#define BP_EIM_CS2GCR1_BCS      (14)      //!< Bit position for EIM_CS2GCR1_BCS.
#define BM_EIM_CS2GCR1_BCS      (0x0000c000)  //!< Bit mask for EIM_CS2GCR1_BCS.

//! @brief Get value of EIM_CS2GCR1_BCS from a register value.
#define BG_EIM_CS2GCR1_BCS(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_EIM_CS2GCR1_BCS) >> BP_EIM_CS2GCR1_BCS)

//! @brief Format value for bitfield EIM_CS2GCR1_BCS.
#define BF_EIM_CS2GCR1_BCS(v)   ((__REG_VALUE_TYPE((v), reg32_t) << BP_EIM_CS2GCR1_BCS) & BM_EIM_CS2GCR1_BCS)

#ifndef __LANGUAGE_ASM__
//! @brief Set the BCS field to a new value.
#define BW_EIM_CS2GCR1_BCS(v)   (HW_EIM_CS2GCR1_WR((HW_EIM_CS2GCR1_RD() & ~BM_EIM_CS2GCR1_BCS) | BF_EIM_CS2GCR1_BCS(v)))
#endif


/* --- Register HW_EIM_CS2GCR1, field DSZ[18:16] (RW)
 *
 * Data Port Size. This bit field defines the width of an external device's data port as shown
 * below. Only async. access supported for 8 bit port. The reset value for EIM_CS0GCR1, DSZ[2] = 0,
 * DSZ[1:0] = EIM_BOOT[1:0]. For EIM_CS1GCR1 - EIM_CS5GCR1, the reset value is 0b001.
 *
 * Values:
 * 000 - Reserved.
 * 001 - 16 bit port resides on DATA[15:0]
 * 010 - 16 bit port resides on DATA[31:16]
 * 011 - 32 bit port resides on DATA[31:0]
 * 100 - 8 bit port resides on DATA[7:0]
 * 101 - 8 bit port resides on DATA[15:8]
 * 110 - 8 bit port resides on DATA[23:16]
 * 111 - 8 bit port resides on DATA[31:24]
 */

#define BP_EIM_CS2GCR1_DSZ      (16)      //!< Bit position for EIM_CS2GCR1_DSZ.
#define BM_EIM_CS2GCR1_DSZ      (0x00070000)  //!< Bit mask for EIM_CS2GCR1_DSZ.

//! @brief Get value of EIM_CS2GCR1_DSZ from a register value.
#define BG_EIM_CS2GCR1_DSZ(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_EIM_CS2GCR1_DSZ) >> BP_EIM_CS2GCR1_DSZ)

//! @brief Format value for bitfield EIM_CS2GCR1_DSZ.
#define BF_EIM_CS2GCR1_DSZ(v)   ((__REG_VALUE_TYPE((v), reg32_t) << BP_EIM_CS2GCR1_DSZ) & BM_EIM_CS2GCR1_DSZ)

#ifndef __LANGUAGE_ASM__
//! @brief Set the DSZ field to a new value.
#define BW_EIM_CS2GCR1_DSZ(v)   (HW_EIM_CS2GCR1_WR((HW_EIM_CS2GCR1_RD() & ~BM_EIM_CS2GCR1_DSZ) | BF_EIM_CS2GCR1_DSZ(v)))
#endif


/* --- Register HW_EIM_CS2GCR1, field SP[19] (RW)
 *
 * Supervisor Protect. This bit prevents accesses to the address range defined by the corresponding
 * chip select when the access is attempted in the User mode. SP is cleared by a hardware reset.
 *
 * Values:
 * 0 - User mode accesses are allowed in the memory range defined by chip select.
 * 1 - User mode accesses are prohibited. All attempts to access an address mapped by this chip select in
 *     User mode results in an error response and no assertion of the chip select output.
 */

#define BP_EIM_CS2GCR1_SP      (19)      //!< Bit position for EIM_CS2GCR1_SP.
#define BM_EIM_CS2GCR1_SP      (0x00080000)  //!< Bit mask for EIM_CS2GCR1_SP.

//! @brief Get value of EIM_CS2GCR1_SP from a register value.
#define BG_EIM_CS2GCR1_SP(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_EIM_CS2GCR1_SP) >> BP_EIM_CS2GCR1_SP)

//! @brief Format value for bitfield EIM_CS2GCR1_SP.
#define BF_EIM_CS2GCR1_SP(v)   ((__REG_VALUE_TYPE((v), reg32_t) << BP_EIM_CS2GCR1_SP) & BM_EIM_CS2GCR1_SP)

#ifndef __LANGUAGE_ASM__
//! @brief Set the SP field to a new value.
#define BW_EIM_CS2GCR1_SP(v)   (HW_EIM_CS2GCR1_WR((HW_EIM_CS2GCR1_RD() & ~BM_EIM_CS2GCR1_SP) | BF_EIM_CS2GCR1_SP(v)))
#endif


/* --- Register HW_EIM_CS2GCR1, field CSREC[22:20] (RW)
 *
 * CS Recovery. This bit field, according to the settings shown below, determines the minimum pulse
 * width of CS, OE, and WE control signals before executing a new back to back access to the same
 * chip select. CSREC is cleared by a hardware reset. The reset value for EIM_CS0GCR1, CSREC[2:0] is
 * 0b110. For EIM_CS1GCR1 - EIM_CS5GCR, the reset value is 0b000. Example settings:
 *
 * Values:
 * 000 - 0 EIM clock cycles minimum width of CS, OE and WE signals (read async. mode only)
 * 001 - 1 EIM clock cycles minimum width of CS, OE and WE signals
 * 010 - 2 EIM clock cycles minimum width of CS, OE and WE signals
 * 111 - 7 EIM clock cycles minimum width of CS, OE and WE signals
 */

#define BP_EIM_CS2GCR1_CSREC      (20)      //!< Bit position for EIM_CS2GCR1_CSREC.
#define BM_EIM_CS2GCR1_CSREC      (0x00700000)  //!< Bit mask for EIM_CS2GCR1_CSREC.

//! @brief Get value of EIM_CS2GCR1_CSREC from a register value.
#define BG_EIM_CS2GCR1_CSREC(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_EIM_CS2GCR1_CSREC) >> BP_EIM_CS2GCR1_CSREC)

//! @brief Format value for bitfield EIM_CS2GCR1_CSREC.
#define BF_EIM_CS2GCR1_CSREC(v)   ((__REG_VALUE_TYPE((v), reg32_t) << BP_EIM_CS2GCR1_CSREC) & BM_EIM_CS2GCR1_CSREC)

#ifndef __LANGUAGE_ASM__
//! @brief Set the CSREC field to a new value.
#define BW_EIM_CS2GCR1_CSREC(v)   (HW_EIM_CS2GCR1_WR((HW_EIM_CS2GCR1_RD() & ~BM_EIM_CS2GCR1_CSREC) | BF_EIM_CS2GCR1_CSREC(v)))
#endif


/* --- Register HW_EIM_CS2GCR1, field AUS[23] (RW)
 *
 * Address UnShifted. This bit indicates an unshifted mode for address assertion for the relevant
 * chip select accesses. AUS bit is cleared by hardware reset.
 *
 * Values:
 * 0 - Address shifted according to port size (DSZ config.)
 * 1 - Address unshifted
 */

#define BP_EIM_CS2GCR1_AUS      (23)      //!< Bit position for EIM_CS2GCR1_AUS.
#define BM_EIM_CS2GCR1_AUS      (0x00800000)  //!< Bit mask for EIM_CS2GCR1_AUS.

//! @brief Get value of EIM_CS2GCR1_AUS from a register value.
#define BG_EIM_CS2GCR1_AUS(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_EIM_CS2GCR1_AUS) >> BP_EIM_CS2GCR1_AUS)

//! @brief Format value for bitfield EIM_CS2GCR1_AUS.
#define BF_EIM_CS2GCR1_AUS(v)   ((__REG_VALUE_TYPE((v), reg32_t) << BP_EIM_CS2GCR1_AUS) & BM_EIM_CS2GCR1_AUS)

#ifndef __LANGUAGE_ASM__
//! @brief Set the AUS field to a new value.
#define BW_EIM_CS2GCR1_AUS(v)   (HW_EIM_CS2GCR1_WR((HW_EIM_CS2GCR1_RD() & ~BM_EIM_CS2GCR1_AUS) | BF_EIM_CS2GCR1_AUS(v)))
#endif


/* --- Register HW_EIM_CS2GCR1, field GBC[26:24] (RW)
 *
 * Gap Between Chip Selects. This bit field, according to the settings shown below, determines the
 * minimum time between end of access to the current chip select and start of access to different
 * chip select. GBC is cleared by a hardware reset. Example settings:
 *
 * Values:
 * 000 - minimum of 0 EIM clock cycles before next access from different chip select (async. mode only)
 * 001 - minimum of 1 EIM clock cycles before next access from different chip select
 * 010 - minimum of 2 EIM clock cycles before next access from different chip select
 * 111 - minimum of 7 EIM clock cycles before next access from different chip select
 */

#define BP_EIM_CS2GCR1_GBC      (24)      //!< Bit position for EIM_CS2GCR1_GBC.
#define BM_EIM_CS2GCR1_GBC      (0x07000000)  //!< Bit mask for EIM_CS2GCR1_GBC.

//! @brief Get value of EIM_CS2GCR1_GBC from a register value.
#define BG_EIM_CS2GCR1_GBC(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_EIM_CS2GCR1_GBC) >> BP_EIM_CS2GCR1_GBC)

//! @brief Format value for bitfield EIM_CS2GCR1_GBC.
#define BF_EIM_CS2GCR1_GBC(v)   ((__REG_VALUE_TYPE((v), reg32_t) << BP_EIM_CS2GCR1_GBC) & BM_EIM_CS2GCR1_GBC)

#ifndef __LANGUAGE_ASM__
//! @brief Set the GBC field to a new value.
#define BW_EIM_CS2GCR1_GBC(v)   (HW_EIM_CS2GCR1_WR((HW_EIM_CS2GCR1_RD() & ~BM_EIM_CS2GCR1_GBC) | BF_EIM_CS2GCR1_GBC(v)))
#endif


/* --- Register HW_EIM_CS2GCR1, field WP[27] (RW)
 *
 * Write Protect. This bit prevents writes to the address range defined by the corresponding chip
 * select. WP is cleared by a hardware reset.
 *
 * Values:
 * 0 - Writes are allowed in the memory range defined by chip.
 * 1 - Writes are prohibited. All attempts to write to an address mapped by this chip select result in a
 *     error response and no assertion of the chip select output.
 */

#define BP_EIM_CS2GCR1_WP      (27)      //!< Bit position for EIM_CS2GCR1_WP.
#define BM_EIM_CS2GCR1_WP      (0x08000000)  //!< Bit mask for EIM_CS2GCR1_WP.

//! @brief Get value of EIM_CS2GCR1_WP from a register value.
#define BG_EIM_CS2GCR1_WP(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_EIM_CS2GCR1_WP) >> BP_EIM_CS2GCR1_WP)

//! @brief Format value for bitfield EIM_CS2GCR1_WP.
#define BF_EIM_CS2GCR1_WP(v)   ((__REG_VALUE_TYPE((v), reg32_t) << BP_EIM_CS2GCR1_WP) & BM_EIM_CS2GCR1_WP)

#ifndef __LANGUAGE_ASM__
//! @brief Set the WP field to a new value.
#define BW_EIM_CS2GCR1_WP(v)   (HW_EIM_CS2GCR1_WR((HW_EIM_CS2GCR1_RD() & ~BM_EIM_CS2GCR1_WP) | BF_EIM_CS2GCR1_WP(v)))
#endif


/* --- Register HW_EIM_CS2GCR1, field PSZ[31:28] (RW)
 *
 * Page Size. This bit field indicates memory page size in words (word is defined by the DSZ field).
 * PSZ is used when fix latency mode is applied, WFL=1 for sync. write accesses, RFL=1 for sync.
 * Read accesses. When working in fix latency mode WAIT signal from the external device is not being
 * monitored, PSZ is used to determine if page boundary is reached and renewal of access is
 * preformed. This bit field is ignored when sync. Mode is disabled or fix latency mode is not being
 * used for write or read access separately. It can be valid for both access type, read or write, or
 * only for one type, according to configuration. PSZ is cleared by a hardware reset.
 *
 * Values:
 * 0000 - 8 words page size
 * 0001 - 16 words page size
 * 0010 - 32 words page size
 * 0011 - 64 words page size
 * 0100 - 128 words page size
 * 0101 - 256 words page size
 * 0110 - 512 words page size
 * 0111 - 1024 (1k) words page size
 * 1000 - 2048 (2k) words page size
 * 1001 - - 1111 Reserved
 */

#define BP_EIM_CS2GCR1_PSZ      (28)      //!< Bit position for EIM_CS2GCR1_PSZ.
#define BM_EIM_CS2GCR1_PSZ      (0xf0000000)  //!< Bit mask for EIM_CS2GCR1_PSZ.

//! @brief Get value of EIM_CS2GCR1_PSZ from a register value.
#define BG_EIM_CS2GCR1_PSZ(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_EIM_CS2GCR1_PSZ) >> BP_EIM_CS2GCR1_PSZ)

//! @brief Format value for bitfield EIM_CS2GCR1_PSZ.
#define BF_EIM_CS2GCR1_PSZ(v)   ((__REG_VALUE_TYPE((v), reg32_t) << BP_EIM_CS2GCR1_PSZ) & BM_EIM_CS2GCR1_PSZ)

#ifndef __LANGUAGE_ASM__
//! @brief Set the PSZ field to a new value.
#define BW_EIM_CS2GCR1_PSZ(v)   (HW_EIM_CS2GCR1_WR((HW_EIM_CS2GCR1_RD() & ~BM_EIM_CS2GCR1_PSZ) | BF_EIM_CS2GCR1_PSZ(v)))
#endif


//-------------------------------------------------------------------------------------------
// HW_EIM_CS2GCR2 - Chip Select n General Configuration Register 2
//-------------------------------------------------------------------------------------------

#ifndef __LANGUAGE_ASM__
/*!
 * @brief HW_EIM_CS2GCR2 - Chip Select n General Configuration Register 2 (RW)
 *
 * Reset value: 0x00001000
 *

 */
typedef union _hw_eim_cs2gcr2
{
    reg32_t U;
    struct _hw_eim_cs2gcr2_bitfields
    {
        unsigned ADH : 2; //!< [1:0] Address hold time - This bit field determine the address hold time after ADV negation when mum = 1 (muxed mode).
        unsigned RESERVED0 : 2; //!< [3:2] Reserved
        unsigned DAPS : 4; //!< [7:4] Data Acknowledge Poling Start.
        unsigned DAE : 1; //!< [8] Data Acknowledge Enable.
        unsigned DAP : 1; //!< [9] Data Acknowledge Polarity.
        unsigned RESERVED1 : 2; //!< [11:10] Reserved
        unsigned MUX16_BYP_GRANT : 1; //!< [12] Muxed 16 bypass grant.
        unsigned RESERVED2 : 19; //!< [31:13] Reserved
    } B;
} hw_eim_cs2gcr2_t;
#endif

/*
 * constants & macros for entire EIM_CS2GCR2 register
 */
#define HW_EIM_CS2GCR2_ADDR      (REGS_EIM_BASE + 0x34)

#ifndef __LANGUAGE_ASM__
#define HW_EIM_CS2GCR2           (*(volatile hw_eim_cs2gcr2_t *) HW_EIM_CS2GCR2_ADDR)
#define HW_EIM_CS2GCR2_RD()      (HW_EIM_CS2GCR2.U)
#define HW_EIM_CS2GCR2_WR(v)     (HW_EIM_CS2GCR2.U = (v))
#define HW_EIM_CS2GCR2_SET(v)    (HW_EIM_CS2GCR2_WR(HW_EIM_CS2GCR2_RD() |  (v)))
#define HW_EIM_CS2GCR2_CLR(v)    (HW_EIM_CS2GCR2_WR(HW_EIM_CS2GCR2_RD() & ~(v)))
#define HW_EIM_CS2GCR2_TOG(v)    (HW_EIM_CS2GCR2_WR(HW_EIM_CS2GCR2_RD() ^  (v)))
#endif

/*
 * constants & macros for individual EIM_CS2GCR2 bitfields
 */

/* --- Register HW_EIM_CS2GCR2, field ADH[1:0] (RW)
 *
 * Address hold time - This bit field determine the address hold time after ADV negation when mum =
 * 1 (muxed mode). When mum = 0 this bit has no effect. For read accesses the field determines when
 * the pads direction will be switched. Reset value for EIM_CS0GCR2 for ADH is 10. For
 * EIM_CS1GCR2-EIM_CS5GCR2 reset value is 00.
 *
 * Values:
 * 00 - 0 cycle after ADV negation
 * 01 - 1 cycle after ADV negation
 * 10 - 2 cycle after ADV negation
 * 11 - Reserved
 */

#define BP_EIM_CS2GCR2_ADH      (0)      //!< Bit position for EIM_CS2GCR2_ADH.
#define BM_EIM_CS2GCR2_ADH      (0x00000003)  //!< Bit mask for EIM_CS2GCR2_ADH.

//! @brief Get value of EIM_CS2GCR2_ADH from a register value.
#define BG_EIM_CS2GCR2_ADH(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_EIM_CS2GCR2_ADH) >> BP_EIM_CS2GCR2_ADH)

//! @brief Format value for bitfield EIM_CS2GCR2_ADH.
#define BF_EIM_CS2GCR2_ADH(v)   ((__REG_VALUE_TYPE((v), reg32_t) << BP_EIM_CS2GCR2_ADH) & BM_EIM_CS2GCR2_ADH)

#ifndef __LANGUAGE_ASM__
//! @brief Set the ADH field to a new value.
#define BW_EIM_CS2GCR2_ADH(v)   (HW_EIM_CS2GCR2_WR((HW_EIM_CS2GCR2_RD() & ~BM_EIM_CS2GCR2_ADH) | BF_EIM_CS2GCR2_ADH(v)))
#endif


/* --- Register HW_EIM_CS2GCR2, field DAPS[7:4] (RW)
 *
 * Data Acknowledge Poling Start. This bit field determine the starting point of DTACK input signal
 * polling. DAPS is used only in asynchronous single read or write accesses. Since DTACK is an
 * async. signal the start point of DTACK signal polling is at least 3 cycles after the start of
 * access. DAPS is cleared by a hardware reset. Example settings:
 *
 * Values:
 * 0000 - 3 EIM clk cycle between start of access and first DTACK check
 * 0001 - 4 EIM clk cycles between start of access and first DTACK check
 * 0010 - 5 EIM clk cycles between start of access and first DTACK check
 * 0111 - 10 EIM clk cycles between start of access and first DTACK check
 * 1011 - 14 EIM clk cycles between start of access and first DTACK check
 * 1111 - 18 EIM clk cycles between start of access and first DTACK check
 */

#define BP_EIM_CS2GCR2_DAPS      (4)      //!< Bit position for EIM_CS2GCR2_DAPS.
#define BM_EIM_CS2GCR2_DAPS      (0x000000f0)  //!< Bit mask for EIM_CS2GCR2_DAPS.

//! @brief Get value of EIM_CS2GCR2_DAPS from a register value.
#define BG_EIM_CS2GCR2_DAPS(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_EIM_CS2GCR2_DAPS) >> BP_EIM_CS2GCR2_DAPS)

//! @brief Format value for bitfield EIM_CS2GCR2_DAPS.
#define BF_EIM_CS2GCR2_DAPS(v)   ((__REG_VALUE_TYPE((v), reg32_t) << BP_EIM_CS2GCR2_DAPS) & BM_EIM_CS2GCR2_DAPS)

#ifndef __LANGUAGE_ASM__
//! @brief Set the DAPS field to a new value.
#define BW_EIM_CS2GCR2_DAPS(v)   (HW_EIM_CS2GCR2_WR((HW_EIM_CS2GCR2_RD() & ~BM_EIM_CS2GCR2_DAPS) | BF_EIM_CS2GCR2_DAPS(v)))
#endif


/* --- Register HW_EIM_CS2GCR2, field DAE[8] (RW)
 *
 * Data Acknowledge Enable. This bit indicates external device is using DTACK pin as
 * strobe/terminator of an async. access. DTACK signal may be used only in asynchronous single read
 * (APR=0) or write accesses. DTACK poling start point is set by DAPS bit field. polarity of DTACK
 * is set by DAP bit field. DAE is cleared by a hardware reset.
 *
 * Values:
 * 0 - DTACK signal use is disable
 * 1 - DTACK signal use is enable
 */

#define BP_EIM_CS2GCR2_DAE      (8)      //!< Bit position for EIM_CS2GCR2_DAE.
#define BM_EIM_CS2GCR2_DAE      (0x00000100)  //!< Bit mask for EIM_CS2GCR2_DAE.

//! @brief Get value of EIM_CS2GCR2_DAE from a register value.
#define BG_EIM_CS2GCR2_DAE(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_EIM_CS2GCR2_DAE) >> BP_EIM_CS2GCR2_DAE)

//! @brief Format value for bitfield EIM_CS2GCR2_DAE.
#define BF_EIM_CS2GCR2_DAE(v)   ((__REG_VALUE_TYPE((v), reg32_t) << BP_EIM_CS2GCR2_DAE) & BM_EIM_CS2GCR2_DAE)

#ifndef __LANGUAGE_ASM__
//! @brief Set the DAE field to a new value.
#define BW_EIM_CS2GCR2_DAE(v)   (HW_EIM_CS2GCR2_WR((HW_EIM_CS2GCR2_RD() & ~BM_EIM_CS2GCR2_DAE) | BF_EIM_CS2GCR2_DAE(v)))
#endif


/* --- Register HW_EIM_CS2GCR2, field DAP[9] (RW)
 *
 * Data Acknowledge Polarity. This bit indicates DTACK memory pin assertion state, active-low or
 * active-high, while executing an async access using DTACK signal from the external device. DAP is
 * cleared by a hardware reset.
 *
 * Values:
 * 0 - DTACK signal is active high
 * 1 - DTACK signal is active low
 */

#define BP_EIM_CS2GCR2_DAP      (9)      //!< Bit position for EIM_CS2GCR2_DAP.
#define BM_EIM_CS2GCR2_DAP      (0x00000200)  //!< Bit mask for EIM_CS2GCR2_DAP.

//! @brief Get value of EIM_CS2GCR2_DAP from a register value.
#define BG_EIM_CS2GCR2_DAP(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_EIM_CS2GCR2_DAP) >> BP_EIM_CS2GCR2_DAP)

//! @brief Format value for bitfield EIM_CS2GCR2_DAP.
#define BF_EIM_CS2GCR2_DAP(v)   ((__REG_VALUE_TYPE((v), reg32_t) << BP_EIM_CS2GCR2_DAP) & BM_EIM_CS2GCR2_DAP)

#ifndef __LANGUAGE_ASM__
//! @brief Set the DAP field to a new value.
#define BW_EIM_CS2GCR2_DAP(v)   (HW_EIM_CS2GCR2_WR((HW_EIM_CS2GCR2_RD() & ~BM_EIM_CS2GCR2_DAP) | BF_EIM_CS2GCR2_DAP(v)))
#endif


/* --- Register HW_EIM_CS2GCR2, field MUX16_BYP_GRANT[12] (RW)
 *
 * Muxed 16 bypass grant. This bit when asserted causes EIM to bypass the grant/ack. arbitration
 * with NFC (only for 16 bit muxed mode accesses).
 *
 * Values:
 * 0 - EIM waits for grant before driving a 16 bit muxed mode access to the memory.
 * 1 - EIM ignores the grant signal and immediately drives a 16 bit muxed mode access to the memory.
 */

#define BP_EIM_CS2GCR2_MUX16_BYP_GRANT      (12)      //!< Bit position for EIM_CS2GCR2_MUX16_BYP_GRANT.
#define BM_EIM_CS2GCR2_MUX16_BYP_GRANT      (0x00001000)  //!< Bit mask for EIM_CS2GCR2_MUX16_BYP_GRANT.

//! @brief Get value of EIM_CS2GCR2_MUX16_BYP_GRANT from a register value.
#define BG_EIM_CS2GCR2_MUX16_BYP_GRANT(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_EIM_CS2GCR2_MUX16_BYP_GRANT) >> BP_EIM_CS2GCR2_MUX16_BYP_GRANT)

//! @brief Format value for bitfield EIM_CS2GCR2_MUX16_BYP_GRANT.
#define BF_EIM_CS2GCR2_MUX16_BYP_GRANT(v)   ((__REG_VALUE_TYPE((v), reg32_t) << BP_EIM_CS2GCR2_MUX16_BYP_GRANT) & BM_EIM_CS2GCR2_MUX16_BYP_GRANT)

#ifndef __LANGUAGE_ASM__
//! @brief Set the MUX16_BYP_GRANT field to a new value.
#define BW_EIM_CS2GCR2_MUX16_BYP_GRANT(v)   (HW_EIM_CS2GCR2_WR((HW_EIM_CS2GCR2_RD() & ~BM_EIM_CS2GCR2_MUX16_BYP_GRANT) | BF_EIM_CS2GCR2_MUX16_BYP_GRANT(v)))
#endif


//-------------------------------------------------------------------------------------------
// HW_EIM_CS2RCR1 - Chip Select n Read Configuration Register 1
//-------------------------------------------------------------------------------------------

#ifndef __LANGUAGE_ASM__
/*!
 * @brief HW_EIM_CS2RCR1 - Chip Select n Read Configuration Register 1 (RW)
 *
 * Reset value: 0x00000000
 *

 */
typedef union _hw_eim_cs2rcr1
{
    reg32_t U;
    struct _hw_eim_cs2rcr1_bitfields
    {
        unsigned RCSN : 3; //!< [2:0] Read CS Negation.
        unsigned RESERVED0 : 1; //!< [3] Reserved
        unsigned RCSA : 3; //!< [6:4] Read CS Assertion.
        unsigned RESERVED1 : 1; //!< [7] Reserved
        unsigned OEN : 3; //!< [10:8] OE Negation.
        unsigned RESERVED2 : 1; //!< [11] Reserved
        unsigned OEA : 3; //!< [14:12] OE Assertion.
        unsigned RESERVED3 : 1; //!< [15] Reserved
        unsigned RADVN : 3; //!< [18:16] ADV Negation.
        unsigned RAL : 1; //!< [19] Read ADV Low.
        unsigned RADVA : 3; //!< [22:20] ADV Assertion.
        unsigned RESERVED4 : 1; //!< [23] Reserved
        unsigned RWSC : 6; //!< [29:24] Read Wait State Control.
        unsigned RESERVED5 : 2; //!< [31:30] Reserved
    } B;
} hw_eim_cs2rcr1_t;
#endif

/*
 * constants & macros for entire EIM_CS2RCR1 register
 */
#define HW_EIM_CS2RCR1_ADDR      (REGS_EIM_BASE + 0x38)

#ifndef __LANGUAGE_ASM__
#define HW_EIM_CS2RCR1           (*(volatile hw_eim_cs2rcr1_t *) HW_EIM_CS2RCR1_ADDR)
#define HW_EIM_CS2RCR1_RD()      (HW_EIM_CS2RCR1.U)
#define HW_EIM_CS2RCR1_WR(v)     (HW_EIM_CS2RCR1.U = (v))
#define HW_EIM_CS2RCR1_SET(v)    (HW_EIM_CS2RCR1_WR(HW_EIM_CS2RCR1_RD() |  (v)))
#define HW_EIM_CS2RCR1_CLR(v)    (HW_EIM_CS2RCR1_WR(HW_EIM_CS2RCR1_RD() & ~(v)))
#define HW_EIM_CS2RCR1_TOG(v)    (HW_EIM_CS2RCR1_WR(HW_EIM_CS2RCR1_RD() ^  (v)))
#endif

/*
 * constants & macros for individual EIM_CS2RCR1 bitfields
 */

/* --- Register HW_EIM_CS2RCR1, field RCSN[2:0] (RW)
 *
 * Read CS Negation. This bit field determines when CS signal is negated during read cycles in
 * asynchronous single mode only (SRD=0 & APR = 0), according to the settings shown below. This bit
 * field is ignored when SRD=1. RCSN is cleared by a hardware reset. Example settings:
 *
 * Values:
 * 000 - 0 EIM clock cycles between end of read access and CS negation
 * 001 - 1 EIM clock cycles between end of read access and CS negation
 * 010 - 2 EIM clock cycles between end of read access and CS negation
 * 111 - 7 EIM clock cycles between end of read access and CS negation
 */

#define BP_EIM_CS2RCR1_RCSN      (0)      //!< Bit position for EIM_CS2RCR1_RCSN.
#define BM_EIM_CS2RCR1_RCSN      (0x00000007)  //!< Bit mask for EIM_CS2RCR1_RCSN.

//! @brief Get value of EIM_CS2RCR1_RCSN from a register value.
#define BG_EIM_CS2RCR1_RCSN(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_EIM_CS2RCR1_RCSN) >> BP_EIM_CS2RCR1_RCSN)

//! @brief Format value for bitfield EIM_CS2RCR1_RCSN.
#define BF_EIM_CS2RCR1_RCSN(v)   ((__REG_VALUE_TYPE((v), reg32_t) << BP_EIM_CS2RCR1_RCSN) & BM_EIM_CS2RCR1_RCSN)

#ifndef __LANGUAGE_ASM__
//! @brief Set the RCSN field to a new value.
#define BW_EIM_CS2RCR1_RCSN(v)   (HW_EIM_CS2RCR1_WR((HW_EIM_CS2RCR1_RD() & ~BM_EIM_CS2RCR1_RCSN) | BF_EIM_CS2RCR1_RCSN(v)))
#endif


/* --- Register HW_EIM_CS2RCR1, field RCSA[6:4] (RW)
 *
 * Read CS Assertion. This bit field determines when CS signal is asserted during read cycles
 * (synchronous or asynchronous mode), according to the settings shown below. RCSA is cleared by a
 * hardware reset. Example settings:
 *
 * Values:
 * 000 - 0 EIM clock cycles between beginning of read access and CS assertion
 * 001 - 1 EIM clock cycles between beginning of read access and CS assertion
 * 010 - 2 EIM clock cycles between beginning of read access and CS assertion
 * 111 - 7 EIM clock cycles between beginning of read access and CS assertion
 */

#define BP_EIM_CS2RCR1_RCSA      (4)      //!< Bit position for EIM_CS2RCR1_RCSA.
#define BM_EIM_CS2RCR1_RCSA      (0x00000070)  //!< Bit mask for EIM_CS2RCR1_RCSA.

//! @brief Get value of EIM_CS2RCR1_RCSA from a register value.
#define BG_EIM_CS2RCR1_RCSA(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_EIM_CS2RCR1_RCSA) >> BP_EIM_CS2RCR1_RCSA)

//! @brief Format value for bitfield EIM_CS2RCR1_RCSA.
#define BF_EIM_CS2RCR1_RCSA(v)   ((__REG_VALUE_TYPE((v), reg32_t) << BP_EIM_CS2RCR1_RCSA) & BM_EIM_CS2RCR1_RCSA)

#ifndef __LANGUAGE_ASM__
//! @brief Set the RCSA field to a new value.
#define BW_EIM_CS2RCR1_RCSA(v)   (HW_EIM_CS2RCR1_WR((HW_EIM_CS2RCR1_RD() & ~BM_EIM_CS2RCR1_RCSA) | BF_EIM_CS2RCR1_RCSA(v)))
#endif


/* --- Register HW_EIM_CS2RCR1, field OEN[10:8] (RW)
 *
 * OE Negation. This bit field determines when OE signal is negated during read cycles in
 * asynchronous single mode only (SRD=0 & APR = 0), according to the settings shown below. This bit
 * field is ignored when SRD=1. OEN is cleared by a hardware reset. Example settings:
 *
 * Values:
 * 000 - 0 EIM clock cycles between end of access and OE negation
 * 001 - 1 EIM clock cycles between end of access and OE negation
 * 010 - 2 EIM clock cycles between end of access and OE negation
 * 111 - 7 EIM clock cycles between end of access and OE negation
 */

#define BP_EIM_CS2RCR1_OEN      (8)      //!< Bit position for EIM_CS2RCR1_OEN.
#define BM_EIM_CS2RCR1_OEN      (0x00000700)  //!< Bit mask for EIM_CS2RCR1_OEN.

//! @brief Get value of EIM_CS2RCR1_OEN from a register value.
#define BG_EIM_CS2RCR1_OEN(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_EIM_CS2RCR1_OEN) >> BP_EIM_CS2RCR1_OEN)

//! @brief Format value for bitfield EIM_CS2RCR1_OEN.
#define BF_EIM_CS2RCR1_OEN(v)   ((__REG_VALUE_TYPE((v), reg32_t) << BP_EIM_CS2RCR1_OEN) & BM_EIM_CS2RCR1_OEN)

#ifndef __LANGUAGE_ASM__
//! @brief Set the OEN field to a new value.
#define BW_EIM_CS2RCR1_OEN(v)   (HW_EIM_CS2RCR1_WR((HW_EIM_CS2RCR1_RD() & ~BM_EIM_CS2RCR1_OEN) | BF_EIM_CS2RCR1_OEN(v)))
#endif


/* --- Register HW_EIM_CS2RCR1, field OEA[14:12] (RW)
 *
 * OE Assertion. This bit field determines when OE signal are asserted during read cycles
 * (synchronous or asynchronous mode), according to the settings shown below. OEA is cleared by a
 * hardware reset. In muxed mode OE assertion occurs (OEA + RADVN + RADVA + ADH +1) EIM clock cycles
 * from start of access. The reset value for EIM_CS0RCR1[OEA] is 0b000 if EIM_BOOT[2] = 0. If
 * EIM_BOOT[2] is 1, the reset value for EIM_CS0RCR1 is 0b010. The reset value of this field for
 * EIM_CS1RCR1 - EIM_CS5RCR1 is 0b000. Example settings:
 *
 * Values:
 * 000 - 0 EIM clock cycles between beginning of access and OE assertion
 * 001 - 1 EIM clock cycles between beginning of access and OE assertion
 * 010 - 2 EIM clock cycles between beginning of access and OE assertion
 * 111 - 7 EIM clock cycles between beginning of access and OE assertion
 */

#define BP_EIM_CS2RCR1_OEA      (12)      //!< Bit position for EIM_CS2RCR1_OEA.
#define BM_EIM_CS2RCR1_OEA      (0x00007000)  //!< Bit mask for EIM_CS2RCR1_OEA.

//! @brief Get value of EIM_CS2RCR1_OEA from a register value.
#define BG_EIM_CS2RCR1_OEA(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_EIM_CS2RCR1_OEA) >> BP_EIM_CS2RCR1_OEA)

//! @brief Format value for bitfield EIM_CS2RCR1_OEA.
#define BF_EIM_CS2RCR1_OEA(v)   ((__REG_VALUE_TYPE((v), reg32_t) << BP_EIM_CS2RCR1_OEA) & BM_EIM_CS2RCR1_OEA)

#ifndef __LANGUAGE_ASM__
//! @brief Set the OEA field to a new value.
#define BW_EIM_CS2RCR1_OEA(v)   (HW_EIM_CS2RCR1_WR((HW_EIM_CS2RCR1_RD() & ~BM_EIM_CS2RCR1_OEA) | BF_EIM_CS2RCR1_OEA(v)))
#endif


/* --- Register HW_EIM_CS2RCR1, field RADVN[18:16] (RW)
 *
 * ADV Negation. This bit field determines when ADV signal to memory is negated during read
 * accesses. When SRD=1 (synchronous read mode), ADV negation occurs according to the following
 * formula: (RADVN + RADVA + BCD + BCS + 1) EIM clock cycles from start of access. When asynchronous
 * read mode is applied (SRD=0) and RAL=0 ADV negation occurs according to the following formula:
 * (RADVN + RADVA + 1) EIM clock cycles from start of access. RADVN is cleared by a hardware reset.
 * the reset value for EIM_CS0RCR1[RADVN] = 2. For EIM_CS1RCR1 - EIM_CS5RCR1, the reset value is
 * 0b000. This field should be configured so ADV negation will occur before the end of access. For
 * ADV negation at the same time with the end of access user should RAL bit.
 */

#define BP_EIM_CS2RCR1_RADVN      (16)      //!< Bit position for EIM_CS2RCR1_RADVN.
#define BM_EIM_CS2RCR1_RADVN      (0x00070000)  //!< Bit mask for EIM_CS2RCR1_RADVN.

//! @brief Get value of EIM_CS2RCR1_RADVN from a register value.
#define BG_EIM_CS2RCR1_RADVN(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_EIM_CS2RCR1_RADVN) >> BP_EIM_CS2RCR1_RADVN)

//! @brief Format value for bitfield EIM_CS2RCR1_RADVN.
#define BF_EIM_CS2RCR1_RADVN(v)   ((__REG_VALUE_TYPE((v), reg32_t) << BP_EIM_CS2RCR1_RADVN) & BM_EIM_CS2RCR1_RADVN)

#ifndef __LANGUAGE_ASM__
//! @brief Set the RADVN field to a new value.
#define BW_EIM_CS2RCR1_RADVN(v)   (HW_EIM_CS2RCR1_WR((HW_EIM_CS2RCR1_RD() & ~BM_EIM_CS2RCR1_RADVN) | BF_EIM_CS2RCR1_RADVN(v)))
#endif

/* --- Register HW_EIM_CS2RCR1, field RAL[19] (RW)
 *
 * Read ADV Low. This bit field determine ADV signal negation time. When RAL=1, RADVN bit field is
 * ignored and ADV signal will stay asserted until end of access. When RAL=0 negation of ADV signal
 * is according to RADVN bit field configuration.
 */

#define BP_EIM_CS2RCR1_RAL      (19)      //!< Bit position for EIM_CS2RCR1_RAL.
#define BM_EIM_CS2RCR1_RAL      (0x00080000)  //!< Bit mask for EIM_CS2RCR1_RAL.

//! @brief Get value of EIM_CS2RCR1_RAL from a register value.
#define BG_EIM_CS2RCR1_RAL(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_EIM_CS2RCR1_RAL) >> BP_EIM_CS2RCR1_RAL)

//! @brief Format value for bitfield EIM_CS2RCR1_RAL.
#define BF_EIM_CS2RCR1_RAL(v)   ((__REG_VALUE_TYPE((v), reg32_t) << BP_EIM_CS2RCR1_RAL) & BM_EIM_CS2RCR1_RAL)

#ifndef __LANGUAGE_ASM__
//! @brief Set the RAL field to a new value.
#define BW_EIM_CS2RCR1_RAL(v)   (HW_EIM_CS2RCR1_WR((HW_EIM_CS2RCR1_RD() & ~BM_EIM_CS2RCR1_RAL) | BF_EIM_CS2RCR1_RAL(v)))
#endif

/* --- Register HW_EIM_CS2RCR1, field RADVA[22:20] (RW)
 *
 * ADV Assertion. This bit field determines when ADV signal is asserted for synchronous or
 * asynchronous read modes according to the settings shown below. RADVA is cleared by a hardware
 * reset. Example settings:
 *
 * Values:
 * 000 - 0 EIM clock cycles between beginning of access and ADV assertion
 * 001 - 1 EIM clock cycles between beginning of access and ADV assertion
 * 010 - 2 EIM clock cycles between beginning of access and ADV assertion
 * 111 - 7 EIM clock cycles between beginning of access and ADV assertion
 */

#define BP_EIM_CS2RCR1_RADVA      (20)      //!< Bit position for EIM_CS2RCR1_RADVA.
#define BM_EIM_CS2RCR1_RADVA      (0x00700000)  //!< Bit mask for EIM_CS2RCR1_RADVA.

//! @brief Get value of EIM_CS2RCR1_RADVA from a register value.
#define BG_EIM_CS2RCR1_RADVA(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_EIM_CS2RCR1_RADVA) >> BP_EIM_CS2RCR1_RADVA)

//! @brief Format value for bitfield EIM_CS2RCR1_RADVA.
#define BF_EIM_CS2RCR1_RADVA(v)   ((__REG_VALUE_TYPE((v), reg32_t) << BP_EIM_CS2RCR1_RADVA) & BM_EIM_CS2RCR1_RADVA)

#ifndef __LANGUAGE_ASM__
//! @brief Set the RADVA field to a new value.
#define BW_EIM_CS2RCR1_RADVA(v)   (HW_EIM_CS2RCR1_WR((HW_EIM_CS2RCR1_RD() & ~BM_EIM_CS2RCR1_RADVA) | BF_EIM_CS2RCR1_RADVA(v)))
#endif


/* --- Register HW_EIM_CS2RCR1, field RWSC[29:24] (RW)
 *
 * Read Wait State Control. This bit field programs the number of wait-states, according to the
 * settings shown below, for synchronous or asynchronous read access to the external device
 * connected to the chip select. When SRD=1 and RFL=0, RWSC indicates the number of burst clock
 * (BCLK) cycles from the start of an access, before the controller can start sample data.Since WAIT
 * signal can be asserted one cycle before the first data can be sampled, the controller starts
 * evaluating the WAIT signal state one cycle before, this is referred as handshake mode or variable
 * latency mode. When SRD=1 and RFL=1, RWSC indicates the number of burst clock (BCLK) cycles from
 * the start of an access, until the external device is ready for data transfer, this is referred as
 * fix latency mode. When SRD=0, RFL bit is ignored, RWSC indicates the asynchronous access length
 * and the number of EIM clock cycles from the start of access until the external device is ready
 * for data transfer. RWSC is cleared by a hardware reset. The reset value for EIM_CS0RCR1,
 * RWSC[5:0] = 0b011100. For CG1RCR1 - CS1RCR5 the reset value is 0b000000. Example settings:
 *
 * Values:
 * 000000 - Reserved
 * 000001 - RWSC value is 1
 * 000010 - RWSC value is 2
 * 111101 - RWSC value is 61
 * 111110 - RWSC value is 62
 * 111111 - RWSC value is 63
 */

#define BP_EIM_CS2RCR1_RWSC      (24)      //!< Bit position for EIM_CS2RCR1_RWSC.
#define BM_EIM_CS2RCR1_RWSC      (0x3f000000)  //!< Bit mask for EIM_CS2RCR1_RWSC.

//! @brief Get value of EIM_CS2RCR1_RWSC from a register value.
#define BG_EIM_CS2RCR1_RWSC(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_EIM_CS2RCR1_RWSC) >> BP_EIM_CS2RCR1_RWSC)

//! @brief Format value for bitfield EIM_CS2RCR1_RWSC.
#define BF_EIM_CS2RCR1_RWSC(v)   ((__REG_VALUE_TYPE((v), reg32_t) << BP_EIM_CS2RCR1_RWSC) & BM_EIM_CS2RCR1_RWSC)

#ifndef __LANGUAGE_ASM__
//! @brief Set the RWSC field to a new value.
#define BW_EIM_CS2RCR1_RWSC(v)   (HW_EIM_CS2RCR1_WR((HW_EIM_CS2RCR1_RD() & ~BM_EIM_CS2RCR1_RWSC) | BF_EIM_CS2RCR1_RWSC(v)))
#endif


//-------------------------------------------------------------------------------------------
// HW_EIM_CS2RCR2 - Chip Select n Read Configuration Register 2
//-------------------------------------------------------------------------------------------

#ifndef __LANGUAGE_ASM__
/*!
 * @brief HW_EIM_CS2RCR2 - Chip Select n Read Configuration Register 2 (RW)
 *
 * Reset value: 0x00000000
 *

 */
typedef union _hw_eim_cs2rcr2
{
    reg32_t U;
    struct _hw_eim_cs2rcr2_bitfields
    {
        unsigned RBEN : 3; //!< [2:0] Read BE Negation.
        unsigned RBE : 1; //!< [3] Read BE enable.
        unsigned RBEA : 3; //!< [6:4] Read BE Assertion.
        unsigned RESERVED0 : 1; //!< [7] Reserved
        unsigned RL : 2; //!< [9:8] Read Latency.
        unsigned RESERVED1 : 2; //!< [11:10] Reserved
        unsigned PAT : 3; //!< [14:12] Page Access Time.
        unsigned APR : 1; //!< [15] Asynchronous Page Read.
        unsigned RESERVED2 : 16; //!< [31:16] Reserved
    } B;
} hw_eim_cs2rcr2_t;
#endif

/*
 * constants & macros for entire EIM_CS2RCR2 register
 */
#define HW_EIM_CS2RCR2_ADDR      (REGS_EIM_BASE + 0x3c)

#ifndef __LANGUAGE_ASM__
#define HW_EIM_CS2RCR2           (*(volatile hw_eim_cs2rcr2_t *) HW_EIM_CS2RCR2_ADDR)
#define HW_EIM_CS2RCR2_RD()      (HW_EIM_CS2RCR2.U)
#define HW_EIM_CS2RCR2_WR(v)     (HW_EIM_CS2RCR2.U = (v))
#define HW_EIM_CS2RCR2_SET(v)    (HW_EIM_CS2RCR2_WR(HW_EIM_CS2RCR2_RD() |  (v)))
#define HW_EIM_CS2RCR2_CLR(v)    (HW_EIM_CS2RCR2_WR(HW_EIM_CS2RCR2_RD() & ~(v)))
#define HW_EIM_CS2RCR2_TOG(v)    (HW_EIM_CS2RCR2_WR(HW_EIM_CS2RCR2_RD() ^  (v)))
#endif

/*
 * constants & macros for individual EIM_CS2RCR2 bitfields
 */

/* --- Register HW_EIM_CS2RCR2, field RBEN[2:0] (RW)
 *
 * Read BE Negation. This bit field determines when BE signal is negated during read cycles in
 * asynchronous single mode only (SRD=0 & APR=0), according to the settings shown below. This bit
 * field is ignored when SRD=1. RBEN is cleared by a hardware reset. Example settings:
 *
 * Values:
 * 000 - 0 EIM clock cycles between end of read access and BE negation
 * 001 - 1 EIM clock cycles between end of read access and BE negation
 * 010 - 2 EIM clock cycles between end of read access and BE negation
 * 111 - 7 EIM clock cycles between end of read access and BE negation
 */

#define BP_EIM_CS2RCR2_RBEN      (0)      //!< Bit position for EIM_CS2RCR2_RBEN.
#define BM_EIM_CS2RCR2_RBEN      (0x00000007)  //!< Bit mask for EIM_CS2RCR2_RBEN.

//! @brief Get value of EIM_CS2RCR2_RBEN from a register value.
#define BG_EIM_CS2RCR2_RBEN(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_EIM_CS2RCR2_RBEN) >> BP_EIM_CS2RCR2_RBEN)

//! @brief Format value for bitfield EIM_CS2RCR2_RBEN.
#define BF_EIM_CS2RCR2_RBEN(v)   ((__REG_VALUE_TYPE((v), reg32_t) << BP_EIM_CS2RCR2_RBEN) & BM_EIM_CS2RCR2_RBEN)

#ifndef __LANGUAGE_ASM__
//! @brief Set the RBEN field to a new value.
#define BW_EIM_CS2RCR2_RBEN(v)   (HW_EIM_CS2RCR2_WR((HW_EIM_CS2RCR2_RD() & ~BM_EIM_CS2RCR2_RBEN) | BF_EIM_CS2RCR2_RBEN(v)))
#endif


/* --- Register HW_EIM_CS2RCR2, field RBE[3] (RW)
 *
 * Read BE enable. This bit field determines if BE will be asserted during read access.
 *
 * Values:
 * 0 - - BE are disabled during read access.
 * 1- - BE are enable during read access according to value of RBEA & RBEN bit fields.
 */

#define BP_EIM_CS2RCR2_RBE      (3)      //!< Bit position for EIM_CS2RCR2_RBE.
#define BM_EIM_CS2RCR2_RBE      (0x00000008)  //!< Bit mask for EIM_CS2RCR2_RBE.

//! @brief Get value of EIM_CS2RCR2_RBE from a register value.
#define BG_EIM_CS2RCR2_RBE(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_EIM_CS2RCR2_RBE) >> BP_EIM_CS2RCR2_RBE)

//! @brief Format value for bitfield EIM_CS2RCR2_RBE.
#define BF_EIM_CS2RCR2_RBE(v)   ((__REG_VALUE_TYPE((v), reg32_t) << BP_EIM_CS2RCR2_RBE) & BM_EIM_CS2RCR2_RBE)

#ifndef __LANGUAGE_ASM__
//! @brief Set the RBE field to a new value.
#define BW_EIM_CS2RCR2_RBE(v)   (HW_EIM_CS2RCR2_WR((HW_EIM_CS2RCR2_RD() & ~BM_EIM_CS2RCR2_RBE) | BF_EIM_CS2RCR2_RBE(v)))
#endif


/* --- Register HW_EIM_CS2RCR2, field RBEA[6:4] (RW)
 *
 * Read BE Assertion. This bit field determines when BE signal is asserted during read cycles
 * (synchronous or asynchronous mode), according to the settings shown below. RBEA is cleared by a
 * hardware reset. Example settings:
 *
 * Values:
 * 000 - 0 EIM clock cycles between beginning of read access and BE assertion
 * 001 - 1 EIM clock cycles between beginning of read access and BE assertion
 * 010 - 2 EIM clock cycles between beginning of read access and BE assertion
 * 111 - 7 EIM clock cycles between beginning of read access and BE assertion
 */

#define BP_EIM_CS2RCR2_RBEA      (4)      //!< Bit position for EIM_CS2RCR2_RBEA.
#define BM_EIM_CS2RCR2_RBEA      (0x00000070)  //!< Bit mask for EIM_CS2RCR2_RBEA.

//! @brief Get value of EIM_CS2RCR2_RBEA from a register value.
#define BG_EIM_CS2RCR2_RBEA(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_EIM_CS2RCR2_RBEA) >> BP_EIM_CS2RCR2_RBEA)

//! @brief Format value for bitfield EIM_CS2RCR2_RBEA.
#define BF_EIM_CS2RCR2_RBEA(v)   ((__REG_VALUE_TYPE((v), reg32_t) << BP_EIM_CS2RCR2_RBEA) & BM_EIM_CS2RCR2_RBEA)

#ifndef __LANGUAGE_ASM__
//! @brief Set the RBEA field to a new value.
#define BW_EIM_CS2RCR2_RBEA(v)   (HW_EIM_CS2RCR2_WR((HW_EIM_CS2RCR2_RD() & ~BM_EIM_CS2RCR2_RBEA) | BF_EIM_CS2RCR2_RBEA(v)))
#endif


/* --- Register HW_EIM_CS2RCR2, field RL[9:8] (RW)
 *
 * Read Latency. This bit field indicates cycle latency when executing a synchronous read operation.
 * The fields holds the feedback clock loop delay in aclk cycle units. This field is cleared by a
 * hardware reset.
 *
 * Values:
 * 00 - Feedback clock loop delay is up to 1 cycle for BCD = 0 or 1.5 cycles for BCD != 0
 * 01 - Feedback clock loop delay is up to 2 cycles for BCD = 0 or 2.5 cycles for BCD != 0
 * 10 - Feedback clock loop delay is up to 3 cycles for BCD = 0 or 3.5 cycles for BCD != 0
 * 11 - Feedback clock loop delay is up to 4 cycles for BCD = 0 or 4.5 cycles for BCD != 0
 */

#define BP_EIM_CS2RCR2_RL      (8)      //!< Bit position for EIM_CS2RCR2_RL.
#define BM_EIM_CS2RCR2_RL      (0x00000300)  //!< Bit mask for EIM_CS2RCR2_RL.

//! @brief Get value of EIM_CS2RCR2_RL from a register value.
#define BG_EIM_CS2RCR2_RL(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_EIM_CS2RCR2_RL) >> BP_EIM_CS2RCR2_RL)

//! @brief Format value for bitfield EIM_CS2RCR2_RL.
#define BF_EIM_CS2RCR2_RL(v)   ((__REG_VALUE_TYPE((v), reg32_t) << BP_EIM_CS2RCR2_RL) & BM_EIM_CS2RCR2_RL)

#ifndef __LANGUAGE_ASM__
//! @brief Set the RL field to a new value.
#define BW_EIM_CS2RCR2_RL(v)   (HW_EIM_CS2RCR2_WR((HW_EIM_CS2RCR2_RD() & ~BM_EIM_CS2RCR2_RL) | BF_EIM_CS2RCR2_RL(v)))
#endif


/* --- Register HW_EIM_CS2RCR2, field PAT[14:12] (RW)
 *
 * Page Access Time. This bit field is used in Asynchronous Page Read mode only (APR=1). the initial
 * access is set by RWSC as in regular asynchronous mode. the consecutive address assertions width
 * determine by PAT field according to the settings shown below. when APR=0 this field is ignored.
 * PAT is cleared by a hardware reset for EIM_CS1GCR1 - EIM_CS5GCR1.
 *
 * Values:
 * 000 - Address width is 2 EIM clock cycles
 * 001 - Address width is 3 EIM clock cycles
 * 010 - Address width is 4 EIM clock cycles
 * 011 - Address width is 5 EIM clock cycles
 * 100 - Address width is 6 EIM clock cycles
 * 101 - Address width is 7 EIM clock cycles
 * 110 - Address width is 8 EIM clock cycles
 * 111 - Address width is 9 EIM clock cycles
 */

#define BP_EIM_CS2RCR2_PAT      (12)      //!< Bit position for EIM_CS2RCR2_PAT.
#define BM_EIM_CS2RCR2_PAT      (0x00007000)  //!< Bit mask for EIM_CS2RCR2_PAT.

//! @brief Get value of EIM_CS2RCR2_PAT from a register value.
#define BG_EIM_CS2RCR2_PAT(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_EIM_CS2RCR2_PAT) >> BP_EIM_CS2RCR2_PAT)

//! @brief Format value for bitfield EIM_CS2RCR2_PAT.
#define BF_EIM_CS2RCR2_PAT(v)   ((__REG_VALUE_TYPE((v), reg32_t) << BP_EIM_CS2RCR2_PAT) & BM_EIM_CS2RCR2_PAT)

#ifndef __LANGUAGE_ASM__
//! @brief Set the PAT field to a new value.
#define BW_EIM_CS2RCR2_PAT(v)   (HW_EIM_CS2RCR2_WR((HW_EIM_CS2RCR2_RD() & ~BM_EIM_CS2RCR2_PAT) | BF_EIM_CS2RCR2_PAT(v)))
#endif


/* --- Register HW_EIM_CS2RCR2, field APR[15] (RW)
 *
 * Asynchronous Page Read. This bit field determine the asynchronous read mode to the external
 * device. When APR=0, the async. read access is done as single word (where word is defined by the
 * DSZ field). when APR=1, the async. read access executed as page read. page size is according to
 * BL field config., RCSN,RBEN,OEN and RADVN are being ignored. APR is cleared by a hardware reset
 * for EIM_CS1GCR1 - EIM_CS5GCR1. SRD=0 and MUM=0 must apply when APR=1
 */

#define BP_EIM_CS2RCR2_APR      (15)      //!< Bit position for EIM_CS2RCR2_APR.
#define BM_EIM_CS2RCR2_APR      (0x00008000)  //!< Bit mask for EIM_CS2RCR2_APR.

//! @brief Get value of EIM_CS2RCR2_APR from a register value.
#define BG_EIM_CS2RCR2_APR(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_EIM_CS2RCR2_APR) >> BP_EIM_CS2RCR2_APR)

//! @brief Format value for bitfield EIM_CS2RCR2_APR.
#define BF_EIM_CS2RCR2_APR(v)   ((__REG_VALUE_TYPE((v), reg32_t) << BP_EIM_CS2RCR2_APR) & BM_EIM_CS2RCR2_APR)

#ifndef __LANGUAGE_ASM__
//! @brief Set the APR field to a new value.
#define BW_EIM_CS2RCR2_APR(v)   (HW_EIM_CS2RCR2_WR((HW_EIM_CS2RCR2_RD() & ~BM_EIM_CS2RCR2_APR) | BF_EIM_CS2RCR2_APR(v)))
#endif

//-------------------------------------------------------------------------------------------
// HW_EIM_CS2WCR1 - Chip Select n Write Configuration Register 1
//-------------------------------------------------------------------------------------------

#ifndef __LANGUAGE_ASM__
/*!
 * @brief HW_EIM_CS2WCR1 - Chip Select n Write Configuration Register 1 (RW)
 *
 * Reset value: 0x00000000
 *

 */
typedef union _hw_eim_cs2wcr1
{
    reg32_t U;
    struct _hw_eim_cs2wcr1_bitfields
    {
        unsigned WCSN : 3; //!< [2:0] Write CS Negation.
        unsigned WCSA : 3; //!< [5:3] Write CS Assertion.
        unsigned WEN : 3; //!< [8:6] WE Negation.
        unsigned WEA : 3; //!< [11:9] WE Assertion.
        unsigned WBEN : 3; //!< [14:12] BE[3:0] Negation.
        unsigned WBEA : 3; //!< [17:15] BE Assertion.
        unsigned WADVN : 3; //!< [20:18] ADV Negation.
        unsigned WADVA : 3; //!< [23:21] ADV Assertion.
        unsigned WWSC : 6; //!< [29:24] Write Wait State Control.
        unsigned WBED : 1; //!< [30] Write Byte Enable Disable.
        unsigned WAL : 1; //!< [31] Write ADV Low.
    } B;
} hw_eim_cs2wcr1_t;
#endif

/*
 * constants & macros for entire EIM_CS2WCR1 register
 */
#define HW_EIM_CS2WCR1_ADDR      (REGS_EIM_BASE + 0x40)

#ifndef __LANGUAGE_ASM__
#define HW_EIM_CS2WCR1           (*(volatile hw_eim_cs2wcr1_t *) HW_EIM_CS2WCR1_ADDR)
#define HW_EIM_CS2WCR1_RD()      (HW_EIM_CS2WCR1.U)
#define HW_EIM_CS2WCR1_WR(v)     (HW_EIM_CS2WCR1.U = (v))
#define HW_EIM_CS2WCR1_SET(v)    (HW_EIM_CS2WCR1_WR(HW_EIM_CS2WCR1_RD() |  (v)))
#define HW_EIM_CS2WCR1_CLR(v)    (HW_EIM_CS2WCR1_WR(HW_EIM_CS2WCR1_RD() & ~(v)))
#define HW_EIM_CS2WCR1_TOG(v)    (HW_EIM_CS2WCR1_WR(HW_EIM_CS2WCR1_RD() ^  (v)))
#endif

/*
 * constants & macros for individual EIM_CS2WCR1 bitfields
 */

/* --- Register HW_EIM_CS2WCR1, field WCSN[2:0] (RW)
 *
 * Write CS Negation. This bit field determines when CS signal is negated during write cycles in
 * asynchronous mode only (SWR=0), according to the settings shown below. This bit field is ignored
 * when SWR=1. WCSN is cleared by a hardware reset. Example settings:
 *
 * Values:
 * 000 - 0 EIM clock cycles between end of read access and CS negation
 * 001 - 1 EIM clock cycles between end of read access and CS negation
 * 010 - 2 EIM clock cycles between end of read access and CS negation
 * 111 - 7 EIM clock cycles between end of read access and CS negation
 */

#define BP_EIM_CS2WCR1_WCSN      (0)      //!< Bit position for EIM_CS2WCR1_WCSN.
#define BM_EIM_CS2WCR1_WCSN      (0x00000007)  //!< Bit mask for EIM_CS2WCR1_WCSN.

//! @brief Get value of EIM_CS2WCR1_WCSN from a register value.
#define BG_EIM_CS2WCR1_WCSN(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_EIM_CS2WCR1_WCSN) >> BP_EIM_CS2WCR1_WCSN)

//! @brief Format value for bitfield EIM_CS2WCR1_WCSN.
#define BF_EIM_CS2WCR1_WCSN(v)   ((__REG_VALUE_TYPE((v), reg32_t) << BP_EIM_CS2WCR1_WCSN) & BM_EIM_CS2WCR1_WCSN)

#ifndef __LANGUAGE_ASM__
//! @brief Set the WCSN field to a new value.
#define BW_EIM_CS2WCR1_WCSN(v)   (HW_EIM_CS2WCR1_WR((HW_EIM_CS2WCR1_RD() & ~BM_EIM_CS2WCR1_WCSN) | BF_EIM_CS2WCR1_WCSN(v)))
#endif


/* --- Register HW_EIM_CS2WCR1, field WCSA[5:3] (RW)
 *
 * Write CS Assertion. This bit field determines when CS signal is asserted during write cycles
 * (synchronous or asynchronous mode), according to the settings shown below.this bit field is
 * ignored when executing a read access to the external device. WCSA is cleared by a hardware reset.
 * Example settings:
 *
 * Values:
 * 000 - 0 EIM clock cycles between beginning of write access and CS assertion
 * 001 - 1 EIM clock cycles between beginning of write access and CS assertion
 * 010 - 2 EIM clock cycles between beginning of write access and CS assertion
 * 111 - 7 EIMclock cycles between beginning of write access and CS assertion
 */

#define BP_EIM_CS2WCR1_WCSA      (3)      //!< Bit position for EIM_CS2WCR1_WCSA.
#define BM_EIM_CS2WCR1_WCSA      (0x00000038)  //!< Bit mask for EIM_CS2WCR1_WCSA.

//! @brief Get value of EIM_CS2WCR1_WCSA from a register value.
#define BG_EIM_CS2WCR1_WCSA(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_EIM_CS2WCR1_WCSA) >> BP_EIM_CS2WCR1_WCSA)

//! @brief Format value for bitfield EIM_CS2WCR1_WCSA.
#define BF_EIM_CS2WCR1_WCSA(v)   ((__REG_VALUE_TYPE((v), reg32_t) << BP_EIM_CS2WCR1_WCSA) & BM_EIM_CS2WCR1_WCSA)

#ifndef __LANGUAGE_ASM__
//! @brief Set the WCSA field to a new value.
#define BW_EIM_CS2WCR1_WCSA(v)   (HW_EIM_CS2WCR1_WR((HW_EIM_CS2WCR1_RD() & ~BM_EIM_CS2WCR1_WCSA) | BF_EIM_CS2WCR1_WCSA(v)))
#endif


/* --- Register HW_EIM_CS2WCR1, field WEN[8:6] (RW)
 *
 * WE Negation. This bit field determines when WE signal is negated during write cycles in
 * asynchronous mode only (SWR=0), according to the settings shown below. This bit field is ignored
 * when SWR=1. WEN is cleared by a hardware reset. Reset value for EIM_CS0WCR for WEN is 2. For
 * EIM_CS1WCR - EIM_CS5WCR reset value is 000. Example settings:
 *
 * Values:
 * 000 - 0 EIM clock cycles between beginning of access and WE assertion
 * 001 - 1 EIM clock cycles between beginning of access and WE assertion
 * 010 - 2 EIM clock cycles between beginning of access and WE assertion
 * 111 - 7 EIM clock cycles between beginning of access and WE assertion
 */

#define BP_EIM_CS2WCR1_WEN      (6)      //!< Bit position for EIM_CS2WCR1_WEN.
#define BM_EIM_CS2WCR1_WEN      (0x000001c0)  //!< Bit mask for EIM_CS2WCR1_WEN.

//! @brief Get value of EIM_CS2WCR1_WEN from a register value.
#define BG_EIM_CS2WCR1_WEN(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_EIM_CS2WCR1_WEN) >> BP_EIM_CS2WCR1_WEN)

//! @brief Format value for bitfield EIM_CS2WCR1_WEN.
#define BF_EIM_CS2WCR1_WEN(v)   ((__REG_VALUE_TYPE((v), reg32_t) << BP_EIM_CS2WCR1_WEN) & BM_EIM_CS2WCR1_WEN)

#ifndef __LANGUAGE_ASM__
//! @brief Set the WEN field to a new value.
#define BW_EIM_CS2WCR1_WEN(v)   (HW_EIM_CS2WCR1_WR((HW_EIM_CS2WCR1_RD() & ~BM_EIM_CS2WCR1_WEN) | BF_EIM_CS2WCR1_WEN(v)))
#endif


/* --- Register HW_EIM_CS2WCR1, field WEA[11:9] (RW)
 *
 * WE Assertion. This bit field determines when WE signal is asserted during write cycles
 * (synchronous or asynchronous mode), according to the settings shown below. This bit field is
 * ignored when executing a read access to the external device. WEA is cleared by a hardware reset.
 * Reset value for EIM_CS0WCR for WEA is 2. For EIM_CS1WCR - EIM_CS5WCR reset value is 000. Example
 * settings:
 *
 * Values:
 * 000 - 0 EIM clock cycles between beginning of access and WE assertion
 * 001 - 1 EIM clock cycles between beginning of access and WE assertion
 * 010 - 2 EIM clock cycles between beginning of access and WE assertion
 * 111 - 7 EIMclock cycles between beginning of access and WE assertion
 */

#define BP_EIM_CS2WCR1_WEA      (9)      //!< Bit position for EIM_CS2WCR1_WEA.
#define BM_EIM_CS2WCR1_WEA      (0x00000e00)  //!< Bit mask for EIM_CS2WCR1_WEA.

//! @brief Get value of EIM_CS2WCR1_WEA from a register value.
#define BG_EIM_CS2WCR1_WEA(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_EIM_CS2WCR1_WEA) >> BP_EIM_CS2WCR1_WEA)

//! @brief Format value for bitfield EIM_CS2WCR1_WEA.
#define BF_EIM_CS2WCR1_WEA(v)   ((__REG_VALUE_TYPE((v), reg32_t) << BP_EIM_CS2WCR1_WEA) & BM_EIM_CS2WCR1_WEA)

#ifndef __LANGUAGE_ASM__
//! @brief Set the WEA field to a new value.
#define BW_EIM_CS2WCR1_WEA(v)   (HW_EIM_CS2WCR1_WR((HW_EIM_CS2WCR1_RD() & ~BM_EIM_CS2WCR1_WEA) | BF_EIM_CS2WCR1_WEA(v)))
#endif


/* --- Register HW_EIM_CS2WCR1, field WBEN[14:12] (RW)
 *
 * BE[3:0] Negation. This bit field determines when BE[3:0] bus signal is negated during write
 * cycles in async. mode only (SWR=0), according to the settings shown below. This bit field is
 * ignored when SWR=1. BEN is cleared by a hardware reset. Reset value for EIM_CS0WCR for WBEN is 2.
 * For EIM_CS1WCR - EIM_CS5WCR reset value is 000. Example settings: 000 0 EIM clock cycles between
 * end of access and WE negation 001 1 EIM clock cycles between end of access and WE negation 010 2
 * EIM clock cycles between end of access and WE negation 111 7 EIM clock cycles between end of
 * access and WE negation
 */

#define BP_EIM_CS2WCR1_WBEN      (12)      //!< Bit position for EIM_CS2WCR1_WBEN.
#define BM_EIM_CS2WCR1_WBEN      (0x00007000)  //!< Bit mask for EIM_CS2WCR1_WBEN.

//! @brief Get value of EIM_CS2WCR1_WBEN from a register value.
#define BG_EIM_CS2WCR1_WBEN(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_EIM_CS2WCR1_WBEN) >> BP_EIM_CS2WCR1_WBEN)

//! @brief Format value for bitfield EIM_CS2WCR1_WBEN.
#define BF_EIM_CS2WCR1_WBEN(v)   ((__REG_VALUE_TYPE((v), reg32_t) << BP_EIM_CS2WCR1_WBEN) & BM_EIM_CS2WCR1_WBEN)

#ifndef __LANGUAGE_ASM__
//! @brief Set the WBEN field to a new value.
#define BW_EIM_CS2WCR1_WBEN(v)   (HW_EIM_CS2WCR1_WR((HW_EIM_CS2WCR1_RD() & ~BM_EIM_CS2WCR1_WBEN) | BF_EIM_CS2WCR1_WBEN(v)))
#endif

/* --- Register HW_EIM_CS2WCR1, field WBEA[17:15] (RW)
 *
 * BE Assertion. This bit field determines when BE signal is asserted during write cycles in async.
 * mode only (SWR=0), according to the settings shown below. BEA is cleared by a hardware reset.
 * Reset value for EIM_CS0WCR for WBEA is 2. For EIM_CS1WCR - EIM_CS5WCR reset value is 000. Example
 * settings:
 *
 * Values:
 * 000 - 0 EIM clock cycles between beginning of access and BE assertion
 * 001 - 1 EIM clock cycles between beginning of access and BE assertion
 * 010 - 2 EIM clock cycles between beginning of access and BE assertion
 * 111 - 7 EIM clock cycles between beginning of access and BE assertion
 */

#define BP_EIM_CS2WCR1_WBEA      (15)      //!< Bit position for EIM_CS2WCR1_WBEA.
#define BM_EIM_CS2WCR1_WBEA      (0x00038000)  //!< Bit mask for EIM_CS2WCR1_WBEA.

//! @brief Get value of EIM_CS2WCR1_WBEA from a register value.
#define BG_EIM_CS2WCR1_WBEA(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_EIM_CS2WCR1_WBEA) >> BP_EIM_CS2WCR1_WBEA)

//! @brief Format value for bitfield EIM_CS2WCR1_WBEA.
#define BF_EIM_CS2WCR1_WBEA(v)   ((__REG_VALUE_TYPE((v), reg32_t) << BP_EIM_CS2WCR1_WBEA) & BM_EIM_CS2WCR1_WBEA)

#ifndef __LANGUAGE_ASM__
//! @brief Set the WBEA field to a new value.
#define BW_EIM_CS2WCR1_WBEA(v)   (HW_EIM_CS2WCR1_WR((HW_EIM_CS2WCR1_RD() & ~BM_EIM_CS2WCR1_WBEA) | BF_EIM_CS2WCR1_WBEA(v)))
#endif


/* --- Register HW_EIM_CS2WCR1, field WADVN[20:18] (RW)
 *
 * ADV Negation. This bit field determines when ADV signal to memory is negated during write
 * accesses. When SWR=1 (synchronous write mode), ADV negation occurs according to the following
 * formula: (WADVN + WADVA + BCD + BCS + 1) EIM clock cycles. When asynchronous read mode is applied
 * (SWR=0) ADV negation occurs according to the following formula: (WADVN + WADVA + 1) EIM clock
 * cycles. Reset value for EIM_CS0WCR for WADVN is 2. For EIM_CS1WCR - EIM_CS5WCR reset value is
 * 000. This field should be configured so ADV negation will occur before the end of access. For ADV
 * negation at the same time as the end of access, S/W should set the WAL bit.
 */

#define BP_EIM_CS2WCR1_WADVN      (18)      //!< Bit position for EIM_CS2WCR1_WADVN.
#define BM_EIM_CS2WCR1_WADVN      (0x001c0000)  //!< Bit mask for EIM_CS2WCR1_WADVN.

//! @brief Get value of EIM_CS2WCR1_WADVN from a register value.
#define BG_EIM_CS2WCR1_WADVN(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_EIM_CS2WCR1_WADVN) >> BP_EIM_CS2WCR1_WADVN)

//! @brief Format value for bitfield EIM_CS2WCR1_WADVN.
#define BF_EIM_CS2WCR1_WADVN(v)   ((__REG_VALUE_TYPE((v), reg32_t) << BP_EIM_CS2WCR1_WADVN) & BM_EIM_CS2WCR1_WADVN)

#ifndef __LANGUAGE_ASM__
//! @brief Set the WADVN field to a new value.
#define BW_EIM_CS2WCR1_WADVN(v)   (HW_EIM_CS2WCR1_WR((HW_EIM_CS2WCR1_RD() & ~BM_EIM_CS2WCR1_WADVN) | BF_EIM_CS2WCR1_WADVN(v)))
#endif

/* --- Register HW_EIM_CS2WCR1, field WADVA[23:21] (RW)
 *
 * ADV Assertion. This bit field determines when ADV signal is asserted for synchronous or
 * asynchronous write modes according to the settings shown below. WADVA is cleared by a hardware
 * reset. Example settings:
 *
 * Values:
 * 000 - 0 EIM clock cycles between beginning of access and ADV assertion
 * 001 - 1 EIM clock cycles between beginning of access and ADV assertion
 * 010 - 2 EIM clock cycles between beginning of access and ADV assertion
 * 111 - 7 EIM clock cycles between beginning of access and ADV assertion
 */

#define BP_EIM_CS2WCR1_WADVA      (21)      //!< Bit position for EIM_CS2WCR1_WADVA.
#define BM_EIM_CS2WCR1_WADVA      (0x00e00000)  //!< Bit mask for EIM_CS2WCR1_WADVA.

//! @brief Get value of EIM_CS2WCR1_WADVA from a register value.
#define BG_EIM_CS2WCR1_WADVA(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_EIM_CS2WCR1_WADVA) >> BP_EIM_CS2WCR1_WADVA)

//! @brief Format value for bitfield EIM_CS2WCR1_WADVA.
#define BF_EIM_CS2WCR1_WADVA(v)   ((__REG_VALUE_TYPE((v), reg32_t) << BP_EIM_CS2WCR1_WADVA) & BM_EIM_CS2WCR1_WADVA)

#ifndef __LANGUAGE_ASM__
//! @brief Set the WADVA field to a new value.
#define BW_EIM_CS2WCR1_WADVA(v)   (HW_EIM_CS2WCR1_WR((HW_EIM_CS2WCR1_RD() & ~BM_EIM_CS2WCR1_WADVA) | BF_EIM_CS2WCR1_WADVA(v)))
#endif


/* --- Register HW_EIM_CS2WCR1, field WWSC[29:24] (RW)
 *
 * Write Wait State Control. This bit field programs the number of wait-states, according to the
 * settings shown below, for synchronous or asynchronous write access to the external device
 * connected to the chip select. When SWR=1 and WFL=0, WWSC indicates the number of burst clock
 * (BCLK) cycles from the start of an access, before the memory can sample the first data.Since WAIT
 * signal can be asserted one cycle before the first data can be sampled, the controller starts
 * evaluating the WAIT signal state one cycle before, this is referred as handshake mode or variable
 * latency mode. When SWR=1 and WFL=1, WWSC indicates the number of burst clock (BCLK) cycles from
 * the start of an access, until the external device is ready for data transfer, this is referred as
 * fix latency mode. When SWR=0, WFL bit is ignored, WWSC indicates the asynchronous access length
 * and the number of EIM clock cycles from the start of access until the external device is ready
 * for data transfer. WWSC is cleared by a hardware reset. The reset value for EIM_CS0WCR1,
 * WWSC[5:0] = 0b011100. For EIM_CS1WCR1 - EIM_CS5WCR1, the reset value of this field is 0b000000.
 * Example settings:
 *
 * Values:
 * 000000 - Reserved
 * 000001 - WWSC value is 1
 * 000010 - WWSC value is 2
 * 000011 - WWSC value is 3
 * 111111 - WWSC value is 63
 */

#define BP_EIM_CS2WCR1_WWSC      (24)      //!< Bit position for EIM_CS2WCR1_WWSC.
#define BM_EIM_CS2WCR1_WWSC      (0x3f000000)  //!< Bit mask for EIM_CS2WCR1_WWSC.

//! @brief Get value of EIM_CS2WCR1_WWSC from a register value.
#define BG_EIM_CS2WCR1_WWSC(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_EIM_CS2WCR1_WWSC) >> BP_EIM_CS2WCR1_WWSC)

//! @brief Format value for bitfield EIM_CS2WCR1_WWSC.
#define BF_EIM_CS2WCR1_WWSC(v)   ((__REG_VALUE_TYPE((v), reg32_t) << BP_EIM_CS2WCR1_WWSC) & BM_EIM_CS2WCR1_WWSC)

#ifndef __LANGUAGE_ASM__
//! @brief Set the WWSC field to a new value.
#define BW_EIM_CS2WCR1_WWSC(v)   (HW_EIM_CS2WCR1_WR((HW_EIM_CS2WCR1_RD() & ~BM_EIM_CS2WCR1_WWSC) | BF_EIM_CS2WCR1_WWSC(v)))
#endif


/* --- Register HW_EIM_CS2WCR1, field WBED[30] (RW)
 *
 * Write Byte Enable Disable. When asserted this bit prevent from IPP_DO_BE_B[x] to be asserted
 * during write accesses.This bit is cleared by hardware reset.
 */

#define BP_EIM_CS2WCR1_WBED      (30)      //!< Bit position for EIM_CS2WCR1_WBED.
#define BM_EIM_CS2WCR1_WBED      (0x40000000)  //!< Bit mask for EIM_CS2WCR1_WBED.

//! @brief Get value of EIM_CS2WCR1_WBED from a register value.
#define BG_EIM_CS2WCR1_WBED(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_EIM_CS2WCR1_WBED) >> BP_EIM_CS2WCR1_WBED)

//! @brief Format value for bitfield EIM_CS2WCR1_WBED.
#define BF_EIM_CS2WCR1_WBED(v)   ((__REG_VALUE_TYPE((v), reg32_t) << BP_EIM_CS2WCR1_WBED) & BM_EIM_CS2WCR1_WBED)

#ifndef __LANGUAGE_ASM__
//! @brief Set the WBED field to a new value.
#define BW_EIM_CS2WCR1_WBED(v)   (HW_EIM_CS2WCR1_WR((HW_EIM_CS2WCR1_RD() & ~BM_EIM_CS2WCR1_WBED) | BF_EIM_CS2WCR1_WBED(v)))
#endif

/* --- Register HW_EIM_CS2WCR1, field WAL[31] (RW)
 *
 * Write ADV Low. This bit field determine ADV signal negation time in write accesses. When WAL=1,
 * WADVN bit field is ignored and ADV signal will stay asserted until end of access. When WAL=0
 * negation of ADV signal is according to WADVN bit field configuration.
 */

#define BP_EIM_CS2WCR1_WAL      (31)      //!< Bit position for EIM_CS2WCR1_WAL.
#define BM_EIM_CS2WCR1_WAL      (0x80000000)  //!< Bit mask for EIM_CS2WCR1_WAL.

//! @brief Get value of EIM_CS2WCR1_WAL from a register value.
#define BG_EIM_CS2WCR1_WAL(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_EIM_CS2WCR1_WAL) >> BP_EIM_CS2WCR1_WAL)

//! @brief Format value for bitfield EIM_CS2WCR1_WAL.
#define BF_EIM_CS2WCR1_WAL(v)   ((__REG_VALUE_TYPE((v), reg32_t) << BP_EIM_CS2WCR1_WAL) & BM_EIM_CS2WCR1_WAL)

#ifndef __LANGUAGE_ASM__
//! @brief Set the WAL field to a new value.
#define BW_EIM_CS2WCR1_WAL(v)   (HW_EIM_CS2WCR1_WR((HW_EIM_CS2WCR1_RD() & ~BM_EIM_CS2WCR1_WAL) | BF_EIM_CS2WCR1_WAL(v)))
#endif

//-------------------------------------------------------------------------------------------
// HW_EIM_CS2WCR2 - Chip Select n Write Configuration Register 2
//-------------------------------------------------------------------------------------------

#ifndef __LANGUAGE_ASM__
/*!
 * @brief HW_EIM_CS2WCR2 - Chip Select n Write Configuration Register 2 (RW)
 *
 * Reset value: 0x00000000
 *

 */
typedef union _hw_eim_cs2wcr2
{
    reg32_t U;
    struct _hw_eim_cs2wcr2_bitfields
    {
        unsigned WBCDD : 1; //!< [0] Write Burst Clock Divisor Decrement.
        unsigned RESERVED0 : 31; //!< [31:1] Reserved
    } B;
} hw_eim_cs2wcr2_t;
#endif

/*
 * constants & macros for entire EIM_CS2WCR2 register
 */
#define HW_EIM_CS2WCR2_ADDR      (REGS_EIM_BASE + 0x44)

#ifndef __LANGUAGE_ASM__
#define HW_EIM_CS2WCR2           (*(volatile hw_eim_cs2wcr2_t *) HW_EIM_CS2WCR2_ADDR)
#define HW_EIM_CS2WCR2_RD()      (HW_EIM_CS2WCR2.U)
#define HW_EIM_CS2WCR2_WR(v)     (HW_EIM_CS2WCR2.U = (v))
#define HW_EIM_CS2WCR2_SET(v)    (HW_EIM_CS2WCR2_WR(HW_EIM_CS2WCR2_RD() |  (v)))
#define HW_EIM_CS2WCR2_CLR(v)    (HW_EIM_CS2WCR2_WR(HW_EIM_CS2WCR2_RD() & ~(v)))
#define HW_EIM_CS2WCR2_TOG(v)    (HW_EIM_CS2WCR2_WR(HW_EIM_CS2WCR2_RD() ^  (v)))
#endif

/*
 * constants & macros for individual EIM_CS2WCR2 bitfields
 */

/* --- Register HW_EIM_CS2WCR2, field WBCDD[0] (RW)
 *
 * Write Burst Clock Divisor Decrement. If this bit is asserted and BCD value is 0 sync. write
 * access will be preformed as if BCD value is 1.When this bit is negated or BCD value is not 0 this
 * bit has no affect. This bit is cleared by hardware reset.
 */

#define BP_EIM_CS2WCR2_WBCDD      (0)      //!< Bit position for EIM_CS2WCR2_WBCDD.
#define BM_EIM_CS2WCR2_WBCDD      (0x00000001)  //!< Bit mask for EIM_CS2WCR2_WBCDD.

//! @brief Get value of EIM_CS2WCR2_WBCDD from a register value.
#define BG_EIM_CS2WCR2_WBCDD(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_EIM_CS2WCR2_WBCDD) >> BP_EIM_CS2WCR2_WBCDD)

//! @brief Format value for bitfield EIM_CS2WCR2_WBCDD.
#define BF_EIM_CS2WCR2_WBCDD(v)   ((__REG_VALUE_TYPE((v), reg32_t) << BP_EIM_CS2WCR2_WBCDD) & BM_EIM_CS2WCR2_WBCDD)

#ifndef __LANGUAGE_ASM__
//! @brief Set the WBCDD field to a new value.
#define BW_EIM_CS2WCR2_WBCDD(v)   (HW_EIM_CS2WCR2_WR((HW_EIM_CS2WCR2_RD() & ~BM_EIM_CS2WCR2_WBCDD) | BF_EIM_CS2WCR2_WBCDD(v)))
#endif

//-------------------------------------------------------------------------------------------
// HW_EIM_CS3GCR1 - Chip Select n General Configuration Register 1
//-------------------------------------------------------------------------------------------

#ifndef __LANGUAGE_ASM__
/*!
 * @brief HW_EIM_CS3GCR1 - Chip Select n General Configuration Register 1 (RW)
 *
 * Reset value: 0x00010080
 *

 */
typedef union _hw_eim_cs3gcr1
{
    reg32_t U;
    struct _hw_eim_cs3gcr1_bitfields
    {
        unsigned CSEN : 1; //!< [0] CS Enable.
        unsigned SWR : 1; //!< [1] Synchronous Write Data.
        unsigned SRD : 1; //!< [2] Synchronous Read Data.
        unsigned MUM : 1; //!< [3] Multiplexed Mode.
        unsigned WFL : 1; //!< [4] Write Fix Latency.
        unsigned RFL : 1; //!< [5] Read Fix Latency.
        unsigned CRE : 1; //!< [6] Configuration Register Enable.
        unsigned CREP : 1; //!< [7] Configuration Register Enable Polarity.
        unsigned BL : 3; //!< [10:8] Burst Length.
        unsigned WC : 1; //!< [11] Write Continuous.
        unsigned BCD : 2; //!< [13:12] Burst Clock Divisor.
        unsigned BCS : 2; //!< [15:14] Burst Clock Start.
        unsigned DSZ : 3; //!< [18:16] Data Port Size.
        unsigned SP : 1; //!< [19] Supervisor Protect.
        unsigned CSREC : 3; //!< [22:20] CS Recovery.
        unsigned AUS : 1; //!< [23] Address UnShifted.
        unsigned GBC : 3; //!< [26:24] Gap Between Chip Selects.
        unsigned WP : 1; //!< [27] Write Protect.
        unsigned PSZ : 4; //!< [31:28] Page Size.
    } B;
} hw_eim_cs3gcr1_t;
#endif

/*
 * constants & macros for entire EIM_CS3GCR1 register
 */
#define HW_EIM_CS3GCR1_ADDR      (REGS_EIM_BASE + 0x48)

#ifndef __LANGUAGE_ASM__
#define HW_EIM_CS3GCR1           (*(volatile hw_eim_cs3gcr1_t *) HW_EIM_CS3GCR1_ADDR)
#define HW_EIM_CS3GCR1_RD()      (HW_EIM_CS3GCR1.U)
#define HW_EIM_CS3GCR1_WR(v)     (HW_EIM_CS3GCR1.U = (v))
#define HW_EIM_CS3GCR1_SET(v)    (HW_EIM_CS3GCR1_WR(HW_EIM_CS3GCR1_RD() |  (v)))
#define HW_EIM_CS3GCR1_CLR(v)    (HW_EIM_CS3GCR1_WR(HW_EIM_CS3GCR1_RD() & ~(v)))
#define HW_EIM_CS3GCR1_TOG(v)    (HW_EIM_CS3GCR1_WR(HW_EIM_CS3GCR1_RD() ^  (v)))
#endif

/*
 * constants & macros for individual EIM_CS3GCR1 bitfields
 */

/* --- Register HW_EIM_CS3GCR1, field CSEN[0] (RW)
 *
 * CS Enable. This bit controls the operation of the chip select pin. CSEN is set by a hardware
 * reset for CSGCR0 to allow external boot operation. CSEN is cleared by a hardware reset to
 * CSGCR1-CSGCR5. Reset value for EIM_CS0GCR1 for CSEN is 1. For EIM_CS1GCR1-CS1GCR5 reset value is
 * 0.
 *
 * Values:
 * 0 - Chip select function is disabled; attempts to access an address mapped by this chip select results
 *     in an error respond and no assertion of the chip select output
 * 1 - Chip select is enabled, and is asserted when presented with a valid access.
 */

#define BP_EIM_CS3GCR1_CSEN      (0)      //!< Bit position for EIM_CS3GCR1_CSEN.
#define BM_EIM_CS3GCR1_CSEN      (0x00000001)  //!< Bit mask for EIM_CS3GCR1_CSEN.

//! @brief Get value of EIM_CS3GCR1_CSEN from a register value.
#define BG_EIM_CS3GCR1_CSEN(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_EIM_CS3GCR1_CSEN) >> BP_EIM_CS3GCR1_CSEN)

//! @brief Format value for bitfield EIM_CS3GCR1_CSEN.
#define BF_EIM_CS3GCR1_CSEN(v)   ((__REG_VALUE_TYPE((v), reg32_t) << BP_EIM_CS3GCR1_CSEN) & BM_EIM_CS3GCR1_CSEN)

#ifndef __LANGUAGE_ASM__
//! @brief Set the CSEN field to a new value.
#define BW_EIM_CS3GCR1_CSEN(v)   (HW_EIM_CS3GCR1_WR((HW_EIM_CS3GCR1_RD() & ~BM_EIM_CS3GCR1_CSEN) | BF_EIM_CS3GCR1_CSEN(v)))
#endif


/* --- Register HW_EIM_CS3GCR1, field SWR[1] (RW)
 *
 * Synchronous Write Data. This bit field determine the write accesses mode to the External device
 * of the chip select. The External device should be configured to the same mode as this bit
 * implicates. SWR is cleared by a hardware reset. Sync. accesses supported only for 16/32 bit port.
 *
 * Values:
 * 0 - write accesses are in Asynchronous mode
 * 1 - write accesses are in Synchronous mode
 */

#define BP_EIM_CS3GCR1_SWR      (1)      //!< Bit position for EIM_CS3GCR1_SWR.
#define BM_EIM_CS3GCR1_SWR      (0x00000002)  //!< Bit mask for EIM_CS3GCR1_SWR.

//! @brief Get value of EIM_CS3GCR1_SWR from a register value.
#define BG_EIM_CS3GCR1_SWR(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_EIM_CS3GCR1_SWR) >> BP_EIM_CS3GCR1_SWR)

//! @brief Format value for bitfield EIM_CS3GCR1_SWR.
#define BF_EIM_CS3GCR1_SWR(v)   ((__REG_VALUE_TYPE((v), reg32_t) << BP_EIM_CS3GCR1_SWR) & BM_EIM_CS3GCR1_SWR)

#ifndef __LANGUAGE_ASM__
//! @brief Set the SWR field to a new value.
#define BW_EIM_CS3GCR1_SWR(v)   (HW_EIM_CS3GCR1_WR((HW_EIM_CS3GCR1_RD() & ~BM_EIM_CS3GCR1_SWR) | BF_EIM_CS3GCR1_SWR(v)))
#endif


/* --- Register HW_EIM_CS3GCR1, field SRD[2] (RW)
 *
 * Synchronous Read Data. This bit field determine the read accesses mode to the External device of
 * the chip select. The External device should be configured to the same mode as this bit
 * implicates. SRD is cleared by a hardware reset. Sync. accesses supported only for 16/32 bit port.
 *
 * Values:
 * 0 - read accesses are in Asynchronous mode
 * 1 - read accesses are in Synchronous mode
 */

#define BP_EIM_CS3GCR1_SRD      (2)      //!< Bit position for EIM_CS3GCR1_SRD.
#define BM_EIM_CS3GCR1_SRD      (0x00000004)  //!< Bit mask for EIM_CS3GCR1_SRD.

//! @brief Get value of EIM_CS3GCR1_SRD from a register value.
#define BG_EIM_CS3GCR1_SRD(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_EIM_CS3GCR1_SRD) >> BP_EIM_CS3GCR1_SRD)

//! @brief Format value for bitfield EIM_CS3GCR1_SRD.
#define BF_EIM_CS3GCR1_SRD(v)   ((__REG_VALUE_TYPE((v), reg32_t) << BP_EIM_CS3GCR1_SRD) & BM_EIM_CS3GCR1_SRD)

#ifndef __LANGUAGE_ASM__
//! @brief Set the SRD field to a new value.
#define BW_EIM_CS3GCR1_SRD(v)   (HW_EIM_CS3GCR1_WR((HW_EIM_CS3GCR1_RD() & ~BM_EIM_CS3GCR1_SRD) | BF_EIM_CS3GCR1_SRD(v)))
#endif


/* --- Register HW_EIM_CS3GCR1, field MUM[3] (RW)
 *
 * Multiplexed Mode. This bit determines the address/data multiplexed mode for asynchronous and
 * synchronous accesses for 8 bit, 16 bit or 32 bit devices (DSZ config. dependent). The reset value
 * for EIM_CS0GCR1[MUM] = EIM_BOOT[2]. For EIM_CS1GCR1 - EIM_CS5GCR1 the reset value is 0.
 *
 * Values:
 * 0 - Multiplexed Mode disable
 * 1 - Multiplexed Mode enable
 */

#define BP_EIM_CS3GCR1_MUM      (3)      //!< Bit position for EIM_CS3GCR1_MUM.
#define BM_EIM_CS3GCR1_MUM      (0x00000008)  //!< Bit mask for EIM_CS3GCR1_MUM.

//! @brief Get value of EIM_CS3GCR1_MUM from a register value.
#define BG_EIM_CS3GCR1_MUM(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_EIM_CS3GCR1_MUM) >> BP_EIM_CS3GCR1_MUM)

//! @brief Format value for bitfield EIM_CS3GCR1_MUM.
#define BF_EIM_CS3GCR1_MUM(v)   ((__REG_VALUE_TYPE((v), reg32_t) << BP_EIM_CS3GCR1_MUM) & BM_EIM_CS3GCR1_MUM)

#ifndef __LANGUAGE_ASM__
//! @brief Set the MUM field to a new value.
#define BW_EIM_CS3GCR1_MUM(v)   (HW_EIM_CS3GCR1_WR((HW_EIM_CS3GCR1_RD() & ~BM_EIM_CS3GCR1_MUM) | BF_EIM_CS3GCR1_MUM(v)))
#endif


/* --- Register HW_EIM_CS3GCR1, field WFL[4] (RW)
 *
 * Write Fix Latency. This bit field determine if the controller is monitoring the WAIT signal from
 * the External device connected to the chip select (handshake mode - fix or variable data latency)
 * or if it start data transfer according to WWSC field, it only valid in synchronous mode. WFL is
 * cleared by a hardware reset. When WFL=1 Burst access is terminated on page boundary and resume on
 * the following page according to BL bit field configuration, because WAIT signal is not monitored
 * from the external device
 *
 * Values:
 * 0 - the External device WAIT signal is being monitored, and it reflect the external data bus state
 * 1 - the state of the External devices is determined internally (Fix latency mode only)
 */

#define BP_EIM_CS3GCR1_WFL      (4)      //!< Bit position for EIM_CS3GCR1_WFL.
#define BM_EIM_CS3GCR1_WFL      (0x00000010)  //!< Bit mask for EIM_CS3GCR1_WFL.

//! @brief Get value of EIM_CS3GCR1_WFL from a register value.
#define BG_EIM_CS3GCR1_WFL(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_EIM_CS3GCR1_WFL) >> BP_EIM_CS3GCR1_WFL)

//! @brief Format value for bitfield EIM_CS3GCR1_WFL.
#define BF_EIM_CS3GCR1_WFL(v)   ((__REG_VALUE_TYPE((v), reg32_t) << BP_EIM_CS3GCR1_WFL) & BM_EIM_CS3GCR1_WFL)

#ifndef __LANGUAGE_ASM__
//! @brief Set the WFL field to a new value.
#define BW_EIM_CS3GCR1_WFL(v)   (HW_EIM_CS3GCR1_WR((HW_EIM_CS3GCR1_RD() & ~BM_EIM_CS3GCR1_WFL) | BF_EIM_CS3GCR1_WFL(v)))
#endif


/* --- Register HW_EIM_CS3GCR1, field RFL[5] (RW)
 *
 * Read Fix Latency. This bit field determine if the controller is monitoring the WAIT signal from
 * the External device connected to the chip select (handshake mode - fix or variable data latency)
 * or if it start sampling data according to RWSC field, it only valid in synchronous mode. RFL is
 * cleared by a hardware reset. When RFL=1 Burst access is terminated on page boundary and resume on
 * the following page according to BL bit field configuration, because WAIT signal is not monitored
 * from the external device.
 *
 * Values:
 * 0 - the External device WAIT signal is being monitored, and it reflect the external data bus state
 * 1 - the state of the External devices is determined internally (Fix latency mode only)
 */

#define BP_EIM_CS3GCR1_RFL      (5)      //!< Bit position for EIM_CS3GCR1_RFL.
#define BM_EIM_CS3GCR1_RFL      (0x00000020)  //!< Bit mask for EIM_CS3GCR1_RFL.

//! @brief Get value of EIM_CS3GCR1_RFL from a register value.
#define BG_EIM_CS3GCR1_RFL(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_EIM_CS3GCR1_RFL) >> BP_EIM_CS3GCR1_RFL)

//! @brief Format value for bitfield EIM_CS3GCR1_RFL.
#define BF_EIM_CS3GCR1_RFL(v)   ((__REG_VALUE_TYPE((v), reg32_t) << BP_EIM_CS3GCR1_RFL) & BM_EIM_CS3GCR1_RFL)

#ifndef __LANGUAGE_ASM__
//! @brief Set the RFL field to a new value.
#define BW_EIM_CS3GCR1_RFL(v)   (HW_EIM_CS3GCR1_WR((HW_EIM_CS3GCR1_RD() & ~BM_EIM_CS3GCR1_RFL) | BF_EIM_CS3GCR1_RFL(v)))
#endif


/* --- Register HW_EIM_CS3GCR1, field CRE[6] (RW)
 *
 * Configuration Register Enable. This bit indicates CRE memory pin state while executing a memory
 * register set command to PSRAM external device. CRE is cleared by a hardware reset.
 *
 * Values:
 * 0 - CRE signal use is disable
 * 1 - CRE signal use is enable
 */

#define BP_EIM_CS3GCR1_CRE      (6)      //!< Bit position for EIM_CS3GCR1_CRE.
#define BM_EIM_CS3GCR1_CRE      (0x00000040)  //!< Bit mask for EIM_CS3GCR1_CRE.

//! @brief Get value of EIM_CS3GCR1_CRE from a register value.
#define BG_EIM_CS3GCR1_CRE(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_EIM_CS3GCR1_CRE) >> BP_EIM_CS3GCR1_CRE)

//! @brief Format value for bitfield EIM_CS3GCR1_CRE.
#define BF_EIM_CS3GCR1_CRE(v)   ((__REG_VALUE_TYPE((v), reg32_t) << BP_EIM_CS3GCR1_CRE) & BM_EIM_CS3GCR1_CRE)

#ifndef __LANGUAGE_ASM__
//! @brief Set the CRE field to a new value.
#define BW_EIM_CS3GCR1_CRE(v)   (HW_EIM_CS3GCR1_WR((HW_EIM_CS3GCR1_RD() & ~BM_EIM_CS3GCR1_CRE) | BF_EIM_CS3GCR1_CRE(v)))
#endif


/* --- Register HW_EIM_CS3GCR1, field CREP[7] (RW)
 *
 * Configuration Register Enable Polarity. This bit indicates CRE memory pin assertion state,
 * active-low or active-high, while executing a memory register set command to the external device
 * (PSRAM memory type). CREP is set by a hardware reset. Whenever PSRAM is connected the CREP value
 * must be correct also for accesses where CRE is disabled. For Non-PSRAM memory CREP value should
 * be 1.
 *
 * Values:
 * 0 - CRE signal is active low
 * 1 - CRE signal is active high
 */

#define BP_EIM_CS3GCR1_CREP      (7)      //!< Bit position for EIM_CS3GCR1_CREP.
#define BM_EIM_CS3GCR1_CREP      (0x00000080)  //!< Bit mask for EIM_CS3GCR1_CREP.

//! @brief Get value of EIM_CS3GCR1_CREP from a register value.
#define BG_EIM_CS3GCR1_CREP(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_EIM_CS3GCR1_CREP) >> BP_EIM_CS3GCR1_CREP)

//! @brief Format value for bitfield EIM_CS3GCR1_CREP.
#define BF_EIM_CS3GCR1_CREP(v)   ((__REG_VALUE_TYPE((v), reg32_t) << BP_EIM_CS3GCR1_CREP) & BM_EIM_CS3GCR1_CREP)

#ifndef __LANGUAGE_ASM__
//! @brief Set the CREP field to a new value.
#define BW_EIM_CS3GCR1_CREP(v)   (HW_EIM_CS3GCR1_WR((HW_EIM_CS3GCR1_RD() & ~BM_EIM_CS3GCR1_CREP) | BF_EIM_CS3GCR1_CREP(v)))
#endif


/* --- Register HW_EIM_CS3GCR1, field BL[10:8] (RW)
 *
 * Burst Length. The BL bit field indicates memory burst length in words (word is defined by the DSZ
 * field) and should be properly initialized for mixed wrap/increment accesses support. Continuous
 * BL value corresponds to continuous burst length setting of the external memory device. For fix
 * memory burst size, type is always wrap. In case not matching wrap boundaries in both the memory
 * (BL field) and Master access on the current address, EIM update address on the external device
 * address bus and regenerates the access. BL is cleared by a hardware reset. When APR=1, Page Read
 * Mode is applied, BL determine the number of words within the read page burst. BL is cleared by a
 * hardware reset for EIM_CS0GCR1 - EIM_CS5GCR1.
 *
 * Values:
 * 000 - 4 words Memory wrap burst length (read page burst size when APR = 1)
 * 001 - 8 words Memory wrap burst length (read page burst size when APR = 1)
 * 010 - 16 words Memory wrap burst length (read page burst size when APR = 1)
 * 011 - 32 words Memory wrap burst length (read page burst size when APR = 1)
 * 100 - Continuous burst length (2 words read page burst size when APR = 1)
 * 101 - Reserved
 * 110 - Reserved
 * 111 - Reserved
 */

#define BP_EIM_CS3GCR1_BL      (8)      //!< Bit position for EIM_CS3GCR1_BL.
#define BM_EIM_CS3GCR1_BL      (0x00000700)  //!< Bit mask for EIM_CS3GCR1_BL.

//! @brief Get value of EIM_CS3GCR1_BL from a register value.
#define BG_EIM_CS3GCR1_BL(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_EIM_CS3GCR1_BL) >> BP_EIM_CS3GCR1_BL)

//! @brief Format value for bitfield EIM_CS3GCR1_BL.
#define BF_EIM_CS3GCR1_BL(v)   ((__REG_VALUE_TYPE((v), reg32_t) << BP_EIM_CS3GCR1_BL) & BM_EIM_CS3GCR1_BL)

#ifndef __LANGUAGE_ASM__
//! @brief Set the BL field to a new value.
#define BW_EIM_CS3GCR1_BL(v)   (HW_EIM_CS3GCR1_WR((HW_EIM_CS3GCR1_RD() & ~BM_EIM_CS3GCR1_BL) | BF_EIM_CS3GCR1_BL(v)))
#endif


/* --- Register HW_EIM_CS3GCR1, field WC[11] (RW)
 *
 * Write Continuous. The WI bit indicates that write access to the memory are always continuous
 * accesses regardless of the BL field value. WI is cleared by hardware reset.
 *
 * Values:
 * 0 - Write access burst length occurs according to BL value.
 * 1 - Write access burst length is continuous.
 */

#define BP_EIM_CS3GCR1_WC      (11)      //!< Bit position for EIM_CS3GCR1_WC.
#define BM_EIM_CS3GCR1_WC      (0x00000800)  //!< Bit mask for EIM_CS3GCR1_WC.

//! @brief Get value of EIM_CS3GCR1_WC from a register value.
#define BG_EIM_CS3GCR1_WC(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_EIM_CS3GCR1_WC) >> BP_EIM_CS3GCR1_WC)

//! @brief Format value for bitfield EIM_CS3GCR1_WC.
#define BF_EIM_CS3GCR1_WC(v)   ((__REG_VALUE_TYPE((v), reg32_t) << BP_EIM_CS3GCR1_WC) & BM_EIM_CS3GCR1_WC)

#ifndef __LANGUAGE_ASM__
//! @brief Set the WC field to a new value.
#define BW_EIM_CS3GCR1_WC(v)   (HW_EIM_CS3GCR1_WR((HW_EIM_CS3GCR1_RD() & ~BM_EIM_CS3GCR1_WC) | BF_EIM_CS3GCR1_WC(v)))
#endif


/* --- Register HW_EIM_CS3GCR1, field BCD[13:12] (RW)
 *
 * Burst Clock Divisor. This bit field contains the value used to program the burst clock divisor
 * for BCLK generation. It is used to divide the internal EIMbus frequency. BCD is cleared by a
 * hardware reset. For other then the mentioned below frequency such as 104 MHz, EIM clock (input
 * clock) should be adjust accordingly.
 *
 * Values:
 * 00 - Divide EIM clock by 1
 * 01 - Divide EIM clock by 2
 * 10 - Divide EIM clock by 3
 * 11 - Divide EIM clock by 4
 */

#define BP_EIM_CS3GCR1_BCD      (12)      //!< Bit position for EIM_CS3GCR1_BCD.
#define BM_EIM_CS3GCR1_BCD      (0x00003000)  //!< Bit mask for EIM_CS3GCR1_BCD.

//! @brief Get value of EIM_CS3GCR1_BCD from a register value.
#define BG_EIM_CS3GCR1_BCD(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_EIM_CS3GCR1_BCD) >> BP_EIM_CS3GCR1_BCD)

//! @brief Format value for bitfield EIM_CS3GCR1_BCD.
#define BF_EIM_CS3GCR1_BCD(v)   ((__REG_VALUE_TYPE((v), reg32_t) << BP_EIM_CS3GCR1_BCD) & BM_EIM_CS3GCR1_BCD)

#ifndef __LANGUAGE_ASM__
//! @brief Set the BCD field to a new value.
#define BW_EIM_CS3GCR1_BCD(v)   (HW_EIM_CS3GCR1_WR((HW_EIM_CS3GCR1_RD() & ~BM_EIM_CS3GCR1_BCD) | BF_EIM_CS3GCR1_BCD(v)))
#endif


/* --- Register HW_EIM_CS3GCR1, field BCS[15:14] (RW)
 *
 * Burst Clock Start. When SRD=1 or SWR=1,this bit field determines the number of EIM clock cycles
 * delay from start of access before the first rising edge of BCLK is generated. When BCD=0 value of
 * BCS=0 results in a half clock delay after the start of access. For other values of BCD a one
 * clock delay after the start of access is applied, not an immediate assertion. BCS is cleared by a
 * hardware reset.
 *
 * Values:
 * 00 - 0 EIM clock cycle additional delay
 * 01 - 1 EIM clock cycle additional delay
 * 10 - 2 EIM clock cycle additional delay
 * 11 - 3 EIM clock cycle additional delay
 */

#define BP_EIM_CS3GCR1_BCS      (14)      //!< Bit position for EIM_CS3GCR1_BCS.
#define BM_EIM_CS3GCR1_BCS      (0x0000c000)  //!< Bit mask for EIM_CS3GCR1_BCS.

//! @brief Get value of EIM_CS3GCR1_BCS from a register value.
#define BG_EIM_CS3GCR1_BCS(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_EIM_CS3GCR1_BCS) >> BP_EIM_CS3GCR1_BCS)

//! @brief Format value for bitfield EIM_CS3GCR1_BCS.
#define BF_EIM_CS3GCR1_BCS(v)   ((__REG_VALUE_TYPE((v), reg32_t) << BP_EIM_CS3GCR1_BCS) & BM_EIM_CS3GCR1_BCS)

#ifndef __LANGUAGE_ASM__
//! @brief Set the BCS field to a new value.
#define BW_EIM_CS3GCR1_BCS(v)   (HW_EIM_CS3GCR1_WR((HW_EIM_CS3GCR1_RD() & ~BM_EIM_CS3GCR1_BCS) | BF_EIM_CS3GCR1_BCS(v)))
#endif


/* --- Register HW_EIM_CS3GCR1, field DSZ[18:16] (RW)
 *
 * Data Port Size. This bit field defines the width of an external device's data port as shown
 * below. Only async. access supported for 8 bit port. The reset value for EIM_CS0GCR1, DSZ[2] = 0,
 * DSZ[1:0] = EIM_BOOT[1:0]. For EIM_CS1GCR1 - EIM_CS5GCR1, the reset value is 0b001.
 *
 * Values:
 * 000 - Reserved.
 * 001 - 16 bit port resides on DATA[15:0]
 * 010 - 16 bit port resides on DATA[31:16]
 * 011 - 32 bit port resides on DATA[31:0]
 * 100 - 8 bit port resides on DATA[7:0]
 * 101 - 8 bit port resides on DATA[15:8]
 * 110 - 8 bit port resides on DATA[23:16]
 * 111 - 8 bit port resides on DATA[31:24]
 */

#define BP_EIM_CS3GCR1_DSZ      (16)      //!< Bit position for EIM_CS3GCR1_DSZ.
#define BM_EIM_CS3GCR1_DSZ      (0x00070000)  //!< Bit mask for EIM_CS3GCR1_DSZ.

//! @brief Get value of EIM_CS3GCR1_DSZ from a register value.
#define BG_EIM_CS3GCR1_DSZ(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_EIM_CS3GCR1_DSZ) >> BP_EIM_CS3GCR1_DSZ)

//! @brief Format value for bitfield EIM_CS3GCR1_DSZ.
#define BF_EIM_CS3GCR1_DSZ(v)   ((__REG_VALUE_TYPE((v), reg32_t) << BP_EIM_CS3GCR1_DSZ) & BM_EIM_CS3GCR1_DSZ)

#ifndef __LANGUAGE_ASM__
//! @brief Set the DSZ field to a new value.
#define BW_EIM_CS3GCR1_DSZ(v)   (HW_EIM_CS3GCR1_WR((HW_EIM_CS3GCR1_RD() & ~BM_EIM_CS3GCR1_DSZ) | BF_EIM_CS3GCR1_DSZ(v)))
#endif


/* --- Register HW_EIM_CS3GCR1, field SP[19] (RW)
 *
 * Supervisor Protect. This bit prevents accesses to the address range defined by the corresponding
 * chip select when the access is attempted in the User mode. SP is cleared by a hardware reset.
 *
 * Values:
 * 0 - User mode accesses are allowed in the memory range defined by chip select.
 * 1 - User mode accesses are prohibited. All attempts to access an address mapped by this chip select in
 *     User mode results in an error response and no assertion of the chip select output.
 */

#define BP_EIM_CS3GCR1_SP      (19)      //!< Bit position for EIM_CS3GCR1_SP.
#define BM_EIM_CS3GCR1_SP      (0x00080000)  //!< Bit mask for EIM_CS3GCR1_SP.

//! @brief Get value of EIM_CS3GCR1_SP from a register value.
#define BG_EIM_CS3GCR1_SP(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_EIM_CS3GCR1_SP) >> BP_EIM_CS3GCR1_SP)

//! @brief Format value for bitfield EIM_CS3GCR1_SP.
#define BF_EIM_CS3GCR1_SP(v)   ((__REG_VALUE_TYPE((v), reg32_t) << BP_EIM_CS3GCR1_SP) & BM_EIM_CS3GCR1_SP)

#ifndef __LANGUAGE_ASM__
//! @brief Set the SP field to a new value.
#define BW_EIM_CS3GCR1_SP(v)   (HW_EIM_CS3GCR1_WR((HW_EIM_CS3GCR1_RD() & ~BM_EIM_CS3GCR1_SP) | BF_EIM_CS3GCR1_SP(v)))
#endif


/* --- Register HW_EIM_CS3GCR1, field CSREC[22:20] (RW)
 *
 * CS Recovery. This bit field, according to the settings shown below, determines the minimum pulse
 * width of CS, OE, and WE control signals before executing a new back to back access to the same
 * chip select. CSREC is cleared by a hardware reset. The reset value for EIM_CS0GCR1, CSREC[2:0] is
 * 0b110. For EIM_CS1GCR1 - EIM_CS5GCR, the reset value is 0b000. Example settings:
 *
 * Values:
 * 000 - 0 EIM clock cycles minimum width of CS, OE and WE signals (read async. mode only)
 * 001 - 1 EIM clock cycles minimum width of CS, OE and WE signals
 * 010 - 2 EIM clock cycles minimum width of CS, OE and WE signals
 * 111 - 7 EIM clock cycles minimum width of CS, OE and WE signals
 */

#define BP_EIM_CS3GCR1_CSREC      (20)      //!< Bit position for EIM_CS3GCR1_CSREC.
#define BM_EIM_CS3GCR1_CSREC      (0x00700000)  //!< Bit mask for EIM_CS3GCR1_CSREC.

//! @brief Get value of EIM_CS3GCR1_CSREC from a register value.
#define BG_EIM_CS3GCR1_CSREC(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_EIM_CS3GCR1_CSREC) >> BP_EIM_CS3GCR1_CSREC)

//! @brief Format value for bitfield EIM_CS3GCR1_CSREC.
#define BF_EIM_CS3GCR1_CSREC(v)   ((__REG_VALUE_TYPE((v), reg32_t) << BP_EIM_CS3GCR1_CSREC) & BM_EIM_CS3GCR1_CSREC)

#ifndef __LANGUAGE_ASM__
//! @brief Set the CSREC field to a new value.
#define BW_EIM_CS3GCR1_CSREC(v)   (HW_EIM_CS3GCR1_WR((HW_EIM_CS3GCR1_RD() & ~BM_EIM_CS3GCR1_CSREC) | BF_EIM_CS3GCR1_CSREC(v)))
#endif


/* --- Register HW_EIM_CS3GCR1, field AUS[23] (RW)
 *
 * Address UnShifted. This bit indicates an unshifted mode for address assertion for the relevant
 * chip select accesses. AUS bit is cleared by hardware reset.
 *
 * Values:
 * 0 - Address shifted according to port size (DSZ config.)
 * 1 - Address unshifted
 */

#define BP_EIM_CS3GCR1_AUS      (23)      //!< Bit position for EIM_CS3GCR1_AUS.
#define BM_EIM_CS3GCR1_AUS      (0x00800000)  //!< Bit mask for EIM_CS3GCR1_AUS.

//! @brief Get value of EIM_CS3GCR1_AUS from a register value.
#define BG_EIM_CS3GCR1_AUS(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_EIM_CS3GCR1_AUS) >> BP_EIM_CS3GCR1_AUS)

//! @brief Format value for bitfield EIM_CS3GCR1_AUS.
#define BF_EIM_CS3GCR1_AUS(v)   ((__REG_VALUE_TYPE((v), reg32_t) << BP_EIM_CS3GCR1_AUS) & BM_EIM_CS3GCR1_AUS)

#ifndef __LANGUAGE_ASM__
//! @brief Set the AUS field to a new value.
#define BW_EIM_CS3GCR1_AUS(v)   (HW_EIM_CS3GCR1_WR((HW_EIM_CS3GCR1_RD() & ~BM_EIM_CS3GCR1_AUS) | BF_EIM_CS3GCR1_AUS(v)))
#endif


/* --- Register HW_EIM_CS3GCR1, field GBC[26:24] (RW)
 *
 * Gap Between Chip Selects. This bit field, according to the settings shown below, determines the
 * minimum time between end of access to the current chip select and start of access to different
 * chip select. GBC is cleared by a hardware reset. Example settings:
 *
 * Values:
 * 000 - minimum of 0 EIM clock cycles before next access from different chip select (async. mode only)
 * 001 - minimum of 1 EIM clock cycles before next access from different chip select
 * 010 - minimum of 2 EIM clock cycles before next access from different chip select
 * 111 - minimum of 7 EIM clock cycles before next access from different chip select
 */

#define BP_EIM_CS3GCR1_GBC      (24)      //!< Bit position for EIM_CS3GCR1_GBC.
#define BM_EIM_CS3GCR1_GBC      (0x07000000)  //!< Bit mask for EIM_CS3GCR1_GBC.

//! @brief Get value of EIM_CS3GCR1_GBC from a register value.
#define BG_EIM_CS3GCR1_GBC(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_EIM_CS3GCR1_GBC) >> BP_EIM_CS3GCR1_GBC)

//! @brief Format value for bitfield EIM_CS3GCR1_GBC.
#define BF_EIM_CS3GCR1_GBC(v)   ((__REG_VALUE_TYPE((v), reg32_t) << BP_EIM_CS3GCR1_GBC) & BM_EIM_CS3GCR1_GBC)

#ifndef __LANGUAGE_ASM__
//! @brief Set the GBC field to a new value.
#define BW_EIM_CS3GCR1_GBC(v)   (HW_EIM_CS3GCR1_WR((HW_EIM_CS3GCR1_RD() & ~BM_EIM_CS3GCR1_GBC) | BF_EIM_CS3GCR1_GBC(v)))
#endif


/* --- Register HW_EIM_CS3GCR1, field WP[27] (RW)
 *
 * Write Protect. This bit prevents writes to the address range defined by the corresponding chip
 * select. WP is cleared by a hardware reset.
 *
 * Values:
 * 0 - Writes are allowed in the memory range defined by chip.
 * 1 - Writes are prohibited. All attempts to write to an address mapped by this chip select result in a
 *     error response and no assertion of the chip select output.
 */

#define BP_EIM_CS3GCR1_WP      (27)      //!< Bit position for EIM_CS3GCR1_WP.
#define BM_EIM_CS3GCR1_WP      (0x08000000)  //!< Bit mask for EIM_CS3GCR1_WP.

//! @brief Get value of EIM_CS3GCR1_WP from a register value.
#define BG_EIM_CS3GCR1_WP(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_EIM_CS3GCR1_WP) >> BP_EIM_CS3GCR1_WP)

//! @brief Format value for bitfield EIM_CS3GCR1_WP.
#define BF_EIM_CS3GCR1_WP(v)   ((__REG_VALUE_TYPE((v), reg32_t) << BP_EIM_CS3GCR1_WP) & BM_EIM_CS3GCR1_WP)

#ifndef __LANGUAGE_ASM__
//! @brief Set the WP field to a new value.
#define BW_EIM_CS3GCR1_WP(v)   (HW_EIM_CS3GCR1_WR((HW_EIM_CS3GCR1_RD() & ~BM_EIM_CS3GCR1_WP) | BF_EIM_CS3GCR1_WP(v)))
#endif


/* --- Register HW_EIM_CS3GCR1, field PSZ[31:28] (RW)
 *
 * Page Size. This bit field indicates memory page size in words (word is defined by the DSZ field).
 * PSZ is used when fix latency mode is applied, WFL=1 for sync. write accesses, RFL=1 for sync.
 * Read accesses. When working in fix latency mode WAIT signal from the external device is not being
 * monitored, PSZ is used to determine if page boundary is reached and renewal of access is
 * preformed. This bit field is ignored when sync. Mode is disabled or fix latency mode is not being
 * used for write or read access separately. It can be valid for both access type, read or write, or
 * only for one type, according to configuration. PSZ is cleared by a hardware reset.
 *
 * Values:
 * 0000 - 8 words page size
 * 0001 - 16 words page size
 * 0010 - 32 words page size
 * 0011 - 64 words page size
 * 0100 - 128 words page size
 * 0101 - 256 words page size
 * 0110 - 512 words page size
 * 0111 - 1024 (1k) words page size
 * 1000 - 2048 (2k) words page size
 * 1001 - - 1111 Reserved
 */

#define BP_EIM_CS3GCR1_PSZ      (28)      //!< Bit position for EIM_CS3GCR1_PSZ.
#define BM_EIM_CS3GCR1_PSZ      (0xf0000000)  //!< Bit mask for EIM_CS3GCR1_PSZ.

//! @brief Get value of EIM_CS3GCR1_PSZ from a register value.
#define BG_EIM_CS3GCR1_PSZ(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_EIM_CS3GCR1_PSZ) >> BP_EIM_CS3GCR1_PSZ)

//! @brief Format value for bitfield EIM_CS3GCR1_PSZ.
#define BF_EIM_CS3GCR1_PSZ(v)   ((__REG_VALUE_TYPE((v), reg32_t) << BP_EIM_CS3GCR1_PSZ) & BM_EIM_CS3GCR1_PSZ)

#ifndef __LANGUAGE_ASM__
//! @brief Set the PSZ field to a new value.
#define BW_EIM_CS3GCR1_PSZ(v)   (HW_EIM_CS3GCR1_WR((HW_EIM_CS3GCR1_RD() & ~BM_EIM_CS3GCR1_PSZ) | BF_EIM_CS3GCR1_PSZ(v)))
#endif


//-------------------------------------------------------------------------------------------
// HW_EIM_CS3GCR2 - Chip Select n General Configuration Register 2
//-------------------------------------------------------------------------------------------

#ifndef __LANGUAGE_ASM__
/*!
 * @brief HW_EIM_CS3GCR2 - Chip Select n General Configuration Register 2 (RW)
 *
 * Reset value: 0x00001000
 *

 */
typedef union _hw_eim_cs3gcr2
{
    reg32_t U;
    struct _hw_eim_cs3gcr2_bitfields
    {
        unsigned ADH : 2; //!< [1:0] Address hold time - This bit field determine the address hold time after ADV negation when mum = 1 (muxed mode).
        unsigned RESERVED0 : 2; //!< [3:2] Reserved
        unsigned DAPS : 4; //!< [7:4] Data Acknowledge Poling Start.
        unsigned DAE : 1; //!< [8] Data Acknowledge Enable.
        unsigned DAP : 1; //!< [9] Data Acknowledge Polarity.
        unsigned RESERVED1 : 2; //!< [11:10] Reserved
        unsigned MUX16_BYP_GRANT : 1; //!< [12] Muxed 16 bypass grant.
        unsigned RESERVED2 : 19; //!< [31:13] Reserved
    } B;
} hw_eim_cs3gcr2_t;
#endif

/*
 * constants & macros for entire EIM_CS3GCR2 register
 */
#define HW_EIM_CS3GCR2_ADDR      (REGS_EIM_BASE + 0x4c)

#ifndef __LANGUAGE_ASM__
#define HW_EIM_CS3GCR2           (*(volatile hw_eim_cs3gcr2_t *) HW_EIM_CS3GCR2_ADDR)
#define HW_EIM_CS3GCR2_RD()      (HW_EIM_CS3GCR2.U)
#define HW_EIM_CS3GCR2_WR(v)     (HW_EIM_CS3GCR2.U = (v))
#define HW_EIM_CS3GCR2_SET(v)    (HW_EIM_CS3GCR2_WR(HW_EIM_CS3GCR2_RD() |  (v)))
#define HW_EIM_CS3GCR2_CLR(v)    (HW_EIM_CS3GCR2_WR(HW_EIM_CS3GCR2_RD() & ~(v)))
#define HW_EIM_CS3GCR2_TOG(v)    (HW_EIM_CS3GCR2_WR(HW_EIM_CS3GCR2_RD() ^  (v)))
#endif

/*
 * constants & macros for individual EIM_CS3GCR2 bitfields
 */

/* --- Register HW_EIM_CS3GCR2, field ADH[1:0] (RW)
 *
 * Address hold time - This bit field determine the address hold time after ADV negation when mum =
 * 1 (muxed mode). When mum = 0 this bit has no effect. For read accesses the field determines when
 * the pads direction will be switched. Reset value for EIM_CS0GCR2 for ADH is 10. For
 * EIM_CS1GCR2-EIM_CS5GCR2 reset value is 00.
 *
 * Values:
 * 00 - 0 cycle after ADV negation
 * 01 - 1 cycle after ADV negation
 * 10 - 2 cycle after ADV negation
 * 11 - Reserved
 */

#define BP_EIM_CS3GCR2_ADH      (0)      //!< Bit position for EIM_CS3GCR2_ADH.
#define BM_EIM_CS3GCR2_ADH      (0x00000003)  //!< Bit mask for EIM_CS3GCR2_ADH.

//! @brief Get value of EIM_CS3GCR2_ADH from a register value.
#define BG_EIM_CS3GCR2_ADH(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_EIM_CS3GCR2_ADH) >> BP_EIM_CS3GCR2_ADH)

//! @brief Format value for bitfield EIM_CS3GCR2_ADH.
#define BF_EIM_CS3GCR2_ADH(v)   ((__REG_VALUE_TYPE((v), reg32_t) << BP_EIM_CS3GCR2_ADH) & BM_EIM_CS3GCR2_ADH)

#ifndef __LANGUAGE_ASM__
//! @brief Set the ADH field to a new value.
#define BW_EIM_CS3GCR2_ADH(v)   (HW_EIM_CS3GCR2_WR((HW_EIM_CS3GCR2_RD() & ~BM_EIM_CS3GCR2_ADH) | BF_EIM_CS3GCR2_ADH(v)))
#endif


/* --- Register HW_EIM_CS3GCR2, field DAPS[7:4] (RW)
 *
 * Data Acknowledge Poling Start. This bit field determine the starting point of DTACK input signal
 * polling. DAPS is used only in asynchronous single read or write accesses. Since DTACK is an
 * async. signal the start point of DTACK signal polling is at least 3 cycles after the start of
 * access. DAPS is cleared by a hardware reset. Example settings:
 *
 * Values:
 * 0000 - 3 EIM clk cycle between start of access and first DTACK check
 * 0001 - 4 EIM clk cycles between start of access and first DTACK check
 * 0010 - 5 EIM clk cycles between start of access and first DTACK check
 * 0111 - 10 EIM clk cycles between start of access and first DTACK check
 * 1011 - 14 EIM clk cycles between start of access and first DTACK check
 * 1111 - 18 EIM clk cycles between start of access and first DTACK check
 */

#define BP_EIM_CS3GCR2_DAPS      (4)      //!< Bit position for EIM_CS3GCR2_DAPS.
#define BM_EIM_CS3GCR2_DAPS      (0x000000f0)  //!< Bit mask for EIM_CS3GCR2_DAPS.

//! @brief Get value of EIM_CS3GCR2_DAPS from a register value.
#define BG_EIM_CS3GCR2_DAPS(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_EIM_CS3GCR2_DAPS) >> BP_EIM_CS3GCR2_DAPS)

//! @brief Format value for bitfield EIM_CS3GCR2_DAPS.
#define BF_EIM_CS3GCR2_DAPS(v)   ((__REG_VALUE_TYPE((v), reg32_t) << BP_EIM_CS3GCR2_DAPS) & BM_EIM_CS3GCR2_DAPS)

#ifndef __LANGUAGE_ASM__
//! @brief Set the DAPS field to a new value.
#define BW_EIM_CS3GCR2_DAPS(v)   (HW_EIM_CS3GCR2_WR((HW_EIM_CS3GCR2_RD() & ~BM_EIM_CS3GCR2_DAPS) | BF_EIM_CS3GCR2_DAPS(v)))
#endif


/* --- Register HW_EIM_CS3GCR2, field DAE[8] (RW)
 *
 * Data Acknowledge Enable. This bit indicates external device is using DTACK pin as
 * strobe/terminator of an async. access. DTACK signal may be used only in asynchronous single read
 * (APR=0) or write accesses. DTACK poling start point is set by DAPS bit field. polarity of DTACK
 * is set by DAP bit field. DAE is cleared by a hardware reset.
 *
 * Values:
 * 0 - DTACK signal use is disable
 * 1 - DTACK signal use is enable
 */

#define BP_EIM_CS3GCR2_DAE      (8)      //!< Bit position for EIM_CS3GCR2_DAE.
#define BM_EIM_CS3GCR2_DAE      (0x00000100)  //!< Bit mask for EIM_CS3GCR2_DAE.

//! @brief Get value of EIM_CS3GCR2_DAE from a register value.
#define BG_EIM_CS3GCR2_DAE(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_EIM_CS3GCR2_DAE) >> BP_EIM_CS3GCR2_DAE)

//! @brief Format value for bitfield EIM_CS3GCR2_DAE.
#define BF_EIM_CS3GCR2_DAE(v)   ((__REG_VALUE_TYPE((v), reg32_t) << BP_EIM_CS3GCR2_DAE) & BM_EIM_CS3GCR2_DAE)

#ifndef __LANGUAGE_ASM__
//! @brief Set the DAE field to a new value.
#define BW_EIM_CS3GCR2_DAE(v)   (HW_EIM_CS3GCR2_WR((HW_EIM_CS3GCR2_RD() & ~BM_EIM_CS3GCR2_DAE) | BF_EIM_CS3GCR2_DAE(v)))
#endif


/* --- Register HW_EIM_CS3GCR2, field DAP[9] (RW)
 *
 * Data Acknowledge Polarity. This bit indicates DTACK memory pin assertion state, active-low or
 * active-high, while executing an async access using DTACK signal from the external device. DAP is
 * cleared by a hardware reset.
 *
 * Values:
 * 0 - DTACK signal is active high
 * 1 - DTACK signal is active low
 */

#define BP_EIM_CS3GCR2_DAP      (9)      //!< Bit position for EIM_CS3GCR2_DAP.
#define BM_EIM_CS3GCR2_DAP      (0x00000200)  //!< Bit mask for EIM_CS3GCR2_DAP.

//! @brief Get value of EIM_CS3GCR2_DAP from a register value.
#define BG_EIM_CS3GCR2_DAP(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_EIM_CS3GCR2_DAP) >> BP_EIM_CS3GCR2_DAP)

//! @brief Format value for bitfield EIM_CS3GCR2_DAP.
#define BF_EIM_CS3GCR2_DAP(v)   ((__REG_VALUE_TYPE((v), reg32_t) << BP_EIM_CS3GCR2_DAP) & BM_EIM_CS3GCR2_DAP)

#ifndef __LANGUAGE_ASM__
//! @brief Set the DAP field to a new value.
#define BW_EIM_CS3GCR2_DAP(v)   (HW_EIM_CS3GCR2_WR((HW_EIM_CS3GCR2_RD() & ~BM_EIM_CS3GCR2_DAP) | BF_EIM_CS3GCR2_DAP(v)))
#endif


/* --- Register HW_EIM_CS3GCR2, field MUX16_BYP_GRANT[12] (RW)
 *
 * Muxed 16 bypass grant. This bit when asserted causes EIM to bypass the grant/ack. arbitration
 * with NFC (only for 16 bit muxed mode accesses).
 *
 * Values:
 * 0 - EIM waits for grant before driving a 16 bit muxed mode access to the memory.
 * 1 - EIM ignores the grant signal and immediately drives a 16 bit muxed mode access to the memory.
 */

#define BP_EIM_CS3GCR2_MUX16_BYP_GRANT      (12)      //!< Bit position for EIM_CS3GCR2_MUX16_BYP_GRANT.
#define BM_EIM_CS3GCR2_MUX16_BYP_GRANT      (0x00001000)  //!< Bit mask for EIM_CS3GCR2_MUX16_BYP_GRANT.

//! @brief Get value of EIM_CS3GCR2_MUX16_BYP_GRANT from a register value.
#define BG_EIM_CS3GCR2_MUX16_BYP_GRANT(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_EIM_CS3GCR2_MUX16_BYP_GRANT) >> BP_EIM_CS3GCR2_MUX16_BYP_GRANT)

//! @brief Format value for bitfield EIM_CS3GCR2_MUX16_BYP_GRANT.
#define BF_EIM_CS3GCR2_MUX16_BYP_GRANT(v)   ((__REG_VALUE_TYPE((v), reg32_t) << BP_EIM_CS3GCR2_MUX16_BYP_GRANT) & BM_EIM_CS3GCR2_MUX16_BYP_GRANT)

#ifndef __LANGUAGE_ASM__
//! @brief Set the MUX16_BYP_GRANT field to a new value.
#define BW_EIM_CS3GCR2_MUX16_BYP_GRANT(v)   (HW_EIM_CS3GCR2_WR((HW_EIM_CS3GCR2_RD() & ~BM_EIM_CS3GCR2_MUX16_BYP_GRANT) | BF_EIM_CS3GCR2_MUX16_BYP_GRANT(v)))
#endif


//-------------------------------------------------------------------------------------------
// HW_EIM_CS3RCR1 - Chip Select n Read Configuration Register 1
//-------------------------------------------------------------------------------------------

#ifndef __LANGUAGE_ASM__
/*!
 * @brief HW_EIM_CS3RCR1 - Chip Select n Read Configuration Register 1 (RW)
 *
 * Reset value: 0x00000000
 *

 */
typedef union _hw_eim_cs3rcr1
{
    reg32_t U;
    struct _hw_eim_cs3rcr1_bitfields
    {
        unsigned RCSN : 3; //!< [2:0] Read CS Negation.
        unsigned RESERVED0 : 1; //!< [3] Reserved
        unsigned RCSA : 3; //!< [6:4] Read CS Assertion.
        unsigned RESERVED1 : 1; //!< [7] Reserved
        unsigned OEN : 3; //!< [10:8] OE Negation.
        unsigned RESERVED2 : 1; //!< [11] Reserved
        unsigned OEA : 3; //!< [14:12] OE Assertion.
        unsigned RESERVED3 : 1; //!< [15] Reserved
        unsigned RADVN : 3; //!< [18:16] ADV Negation.
        unsigned RAL : 1; //!< [19] Read ADV Low.
        unsigned RADVA : 3; //!< [22:20] ADV Assertion.
        unsigned RESERVED4 : 1; //!< [23] Reserved
        unsigned RWSC : 6; //!< [29:24] Read Wait State Control.
        unsigned RESERVED5 : 2; //!< [31:30] Reserved
    } B;
} hw_eim_cs3rcr1_t;
#endif

/*
 * constants & macros for entire EIM_CS3RCR1 register
 */
#define HW_EIM_CS3RCR1_ADDR      (REGS_EIM_BASE + 0x50)

#ifndef __LANGUAGE_ASM__
#define HW_EIM_CS3RCR1           (*(volatile hw_eim_cs3rcr1_t *) HW_EIM_CS3RCR1_ADDR)
#define HW_EIM_CS3RCR1_RD()      (HW_EIM_CS3RCR1.U)
#define HW_EIM_CS3RCR1_WR(v)     (HW_EIM_CS3RCR1.U = (v))
#define HW_EIM_CS3RCR1_SET(v)    (HW_EIM_CS3RCR1_WR(HW_EIM_CS3RCR1_RD() |  (v)))
#define HW_EIM_CS3RCR1_CLR(v)    (HW_EIM_CS3RCR1_WR(HW_EIM_CS3RCR1_RD() & ~(v)))
#define HW_EIM_CS3RCR1_TOG(v)    (HW_EIM_CS3RCR1_WR(HW_EIM_CS3RCR1_RD() ^  (v)))
#endif

/*
 * constants & macros for individual EIM_CS3RCR1 bitfields
 */

/* --- Register HW_EIM_CS3RCR1, field RCSN[2:0] (RW)
 *
 * Read CS Negation. This bit field determines when CS signal is negated during read cycles in
 * asynchronous single mode only (SRD=0 & APR = 0), according to the settings shown below. This bit
 * field is ignored when SRD=1. RCSN is cleared by a hardware reset. Example settings:
 *
 * Values:
 * 000 - 0 EIM clock cycles between end of read access and CS negation
 * 001 - 1 EIM clock cycles between end of read access and CS negation
 * 010 - 2 EIM clock cycles between end of read access and CS negation
 * 111 - 7 EIM clock cycles between end of read access and CS negation
 */

#define BP_EIM_CS3RCR1_RCSN      (0)      //!< Bit position for EIM_CS3RCR1_RCSN.
#define BM_EIM_CS3RCR1_RCSN      (0x00000007)  //!< Bit mask for EIM_CS3RCR1_RCSN.

//! @brief Get value of EIM_CS3RCR1_RCSN from a register value.
#define BG_EIM_CS3RCR1_RCSN(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_EIM_CS3RCR1_RCSN) >> BP_EIM_CS3RCR1_RCSN)

//! @brief Format value for bitfield EIM_CS3RCR1_RCSN.
#define BF_EIM_CS3RCR1_RCSN(v)   ((__REG_VALUE_TYPE((v), reg32_t) << BP_EIM_CS3RCR1_RCSN) & BM_EIM_CS3RCR1_RCSN)

#ifndef __LANGUAGE_ASM__
//! @brief Set the RCSN field to a new value.
#define BW_EIM_CS3RCR1_RCSN(v)   (HW_EIM_CS3RCR1_WR((HW_EIM_CS3RCR1_RD() & ~BM_EIM_CS3RCR1_RCSN) | BF_EIM_CS3RCR1_RCSN(v)))
#endif


/* --- Register HW_EIM_CS3RCR1, field RCSA[6:4] (RW)
 *
 * Read CS Assertion. This bit field determines when CS signal is asserted during read cycles
 * (synchronous or asynchronous mode), according to the settings shown below. RCSA is cleared by a
 * hardware reset. Example settings:
 *
 * Values:
 * 000 - 0 EIM clock cycles between beginning of read access and CS assertion
 * 001 - 1 EIM clock cycles between beginning of read access and CS assertion
 * 010 - 2 EIM clock cycles between beginning of read access and CS assertion
 * 111 - 7 EIM clock cycles between beginning of read access and CS assertion
 */

#define BP_EIM_CS3RCR1_RCSA      (4)      //!< Bit position for EIM_CS3RCR1_RCSA.
#define BM_EIM_CS3RCR1_RCSA      (0x00000070)  //!< Bit mask for EIM_CS3RCR1_RCSA.

//! @brief Get value of EIM_CS3RCR1_RCSA from a register value.
#define BG_EIM_CS3RCR1_RCSA(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_EIM_CS3RCR1_RCSA) >> BP_EIM_CS3RCR1_RCSA)

//! @brief Format value for bitfield EIM_CS3RCR1_RCSA.
#define BF_EIM_CS3RCR1_RCSA(v)   ((__REG_VALUE_TYPE((v), reg32_t) << BP_EIM_CS3RCR1_RCSA) & BM_EIM_CS3RCR1_RCSA)

#ifndef __LANGUAGE_ASM__
//! @brief Set the RCSA field to a new value.
#define BW_EIM_CS3RCR1_RCSA(v)   (HW_EIM_CS3RCR1_WR((HW_EIM_CS3RCR1_RD() & ~BM_EIM_CS3RCR1_RCSA) | BF_EIM_CS3RCR1_RCSA(v)))
#endif


/* --- Register HW_EIM_CS3RCR1, field OEN[10:8] (RW)
 *
 * OE Negation. This bit field determines when OE signal is negated during read cycles in
 * asynchronous single mode only (SRD=0 & APR = 0), according to the settings shown below. This bit
 * field is ignored when SRD=1. OEN is cleared by a hardware reset. Example settings:
 *
 * Values:
 * 000 - 0 EIM clock cycles between end of access and OE negation
 * 001 - 1 EIM clock cycles between end of access and OE negation
 * 010 - 2 EIM clock cycles between end of access and OE negation
 * 111 - 7 EIM clock cycles between end of access and OE negation
 */

#define BP_EIM_CS3RCR1_OEN      (8)      //!< Bit position for EIM_CS3RCR1_OEN.
#define BM_EIM_CS3RCR1_OEN      (0x00000700)  //!< Bit mask for EIM_CS3RCR1_OEN.

//! @brief Get value of EIM_CS3RCR1_OEN from a register value.
#define BG_EIM_CS3RCR1_OEN(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_EIM_CS3RCR1_OEN) >> BP_EIM_CS3RCR1_OEN)

//! @brief Format value for bitfield EIM_CS3RCR1_OEN.
#define BF_EIM_CS3RCR1_OEN(v)   ((__REG_VALUE_TYPE((v), reg32_t) << BP_EIM_CS3RCR1_OEN) & BM_EIM_CS3RCR1_OEN)

#ifndef __LANGUAGE_ASM__
//! @brief Set the OEN field to a new value.
#define BW_EIM_CS3RCR1_OEN(v)   (HW_EIM_CS3RCR1_WR((HW_EIM_CS3RCR1_RD() & ~BM_EIM_CS3RCR1_OEN) | BF_EIM_CS3RCR1_OEN(v)))
#endif


/* --- Register HW_EIM_CS3RCR1, field OEA[14:12] (RW)
 *
 * OE Assertion. This bit field determines when OE signal are asserted during read cycles
 * (synchronous or asynchronous mode), according to the settings shown below. OEA is cleared by a
 * hardware reset. In muxed mode OE assertion occurs (OEA + RADVN + RADVA + ADH +1) EIM clock cycles
 * from start of access. The reset value for EIM_CS0RCR1[OEA] is 0b000 if EIM_BOOT[2] = 0. If
 * EIM_BOOT[2] is 1, the reset value for EIM_CS0RCR1 is 0b010. The reset value of this field for
 * EIM_CS1RCR1 - EIM_CS5RCR1 is 0b000. Example settings:
 *
 * Values:
 * 000 - 0 EIM clock cycles between beginning of access and OE assertion
 * 001 - 1 EIM clock cycles between beginning of access and OE assertion
 * 010 - 2 EIM clock cycles between beginning of access and OE assertion
 * 111 - 7 EIM clock cycles between beginning of access and OE assertion
 */

#define BP_EIM_CS3RCR1_OEA      (12)      //!< Bit position for EIM_CS3RCR1_OEA.
#define BM_EIM_CS3RCR1_OEA      (0x00007000)  //!< Bit mask for EIM_CS3RCR1_OEA.

//! @brief Get value of EIM_CS3RCR1_OEA from a register value.
#define BG_EIM_CS3RCR1_OEA(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_EIM_CS3RCR1_OEA) >> BP_EIM_CS3RCR1_OEA)

//! @brief Format value for bitfield EIM_CS3RCR1_OEA.
#define BF_EIM_CS3RCR1_OEA(v)   ((__REG_VALUE_TYPE((v), reg32_t) << BP_EIM_CS3RCR1_OEA) & BM_EIM_CS3RCR1_OEA)

#ifndef __LANGUAGE_ASM__
//! @brief Set the OEA field to a new value.
#define BW_EIM_CS3RCR1_OEA(v)   (HW_EIM_CS3RCR1_WR((HW_EIM_CS3RCR1_RD() & ~BM_EIM_CS3RCR1_OEA) | BF_EIM_CS3RCR1_OEA(v)))
#endif


/* --- Register HW_EIM_CS3RCR1, field RADVN[18:16] (RW)
 *
 * ADV Negation. This bit field determines when ADV signal to memory is negated during read
 * accesses. When SRD=1 (synchronous read mode), ADV negation occurs according to the following
 * formula: (RADVN + RADVA + BCD + BCS + 1) EIM clock cycles from start of access. When asynchronous
 * read mode is applied (SRD=0) and RAL=0 ADV negation occurs according to the following formula:
 * (RADVN + RADVA + 1) EIM clock cycles from start of access. RADVN is cleared by a hardware reset.
 * the reset value for EIM_CS0RCR1[RADVN] = 2. For EIM_CS1RCR1 - EIM_CS5RCR1, the reset value is
 * 0b000. This field should be configured so ADV negation will occur before the end of access. For
 * ADV negation at the same time with the end of access user should RAL bit.
 */

#define BP_EIM_CS3RCR1_RADVN      (16)      //!< Bit position for EIM_CS3RCR1_RADVN.
#define BM_EIM_CS3RCR1_RADVN      (0x00070000)  //!< Bit mask for EIM_CS3RCR1_RADVN.

//! @brief Get value of EIM_CS3RCR1_RADVN from a register value.
#define BG_EIM_CS3RCR1_RADVN(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_EIM_CS3RCR1_RADVN) >> BP_EIM_CS3RCR1_RADVN)

//! @brief Format value for bitfield EIM_CS3RCR1_RADVN.
#define BF_EIM_CS3RCR1_RADVN(v)   ((__REG_VALUE_TYPE((v), reg32_t) << BP_EIM_CS3RCR1_RADVN) & BM_EIM_CS3RCR1_RADVN)

#ifndef __LANGUAGE_ASM__
//! @brief Set the RADVN field to a new value.
#define BW_EIM_CS3RCR1_RADVN(v)   (HW_EIM_CS3RCR1_WR((HW_EIM_CS3RCR1_RD() & ~BM_EIM_CS3RCR1_RADVN) | BF_EIM_CS3RCR1_RADVN(v)))
#endif

/* --- Register HW_EIM_CS3RCR1, field RAL[19] (RW)
 *
 * Read ADV Low. This bit field determine ADV signal negation time. When RAL=1, RADVN bit field is
 * ignored and ADV signal will stay asserted until end of access. When RAL=0 negation of ADV signal
 * is according to RADVN bit field configuration.
 */

#define BP_EIM_CS3RCR1_RAL      (19)      //!< Bit position for EIM_CS3RCR1_RAL.
#define BM_EIM_CS3RCR1_RAL      (0x00080000)  //!< Bit mask for EIM_CS3RCR1_RAL.

//! @brief Get value of EIM_CS3RCR1_RAL from a register value.
#define BG_EIM_CS3RCR1_RAL(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_EIM_CS3RCR1_RAL) >> BP_EIM_CS3RCR1_RAL)

//! @brief Format value for bitfield EIM_CS3RCR1_RAL.
#define BF_EIM_CS3RCR1_RAL(v)   ((__REG_VALUE_TYPE((v), reg32_t) << BP_EIM_CS3RCR1_RAL) & BM_EIM_CS3RCR1_RAL)

#ifndef __LANGUAGE_ASM__
//! @brief Set the RAL field to a new value.
#define BW_EIM_CS3RCR1_RAL(v)   (HW_EIM_CS3RCR1_WR((HW_EIM_CS3RCR1_RD() & ~BM_EIM_CS3RCR1_RAL) | BF_EIM_CS3RCR1_RAL(v)))
#endif

/* --- Register HW_EIM_CS3RCR1, field RADVA[22:20] (RW)
 *
 * ADV Assertion. This bit field determines when ADV signal is asserted for synchronous or
 * asynchronous read modes according to the settings shown below. RADVA is cleared by a hardware
 * reset. Example settings:
 *
 * Values:
 * 000 - 0 EIM clock cycles between beginning of access and ADV assertion
 * 001 - 1 EIM clock cycles between beginning of access and ADV assertion
 * 010 - 2 EIM clock cycles between beginning of access and ADV assertion
 * 111 - 7 EIM clock cycles between beginning of access and ADV assertion
 */

#define BP_EIM_CS3RCR1_RADVA      (20)      //!< Bit position for EIM_CS3RCR1_RADVA.
#define BM_EIM_CS3RCR1_RADVA      (0x00700000)  //!< Bit mask for EIM_CS3RCR1_RADVA.

//! @brief Get value of EIM_CS3RCR1_RADVA from a register value.
#define BG_EIM_CS3RCR1_RADVA(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_EIM_CS3RCR1_RADVA) >> BP_EIM_CS3RCR1_RADVA)

//! @brief Format value for bitfield EIM_CS3RCR1_RADVA.
#define BF_EIM_CS3RCR1_RADVA(v)   ((__REG_VALUE_TYPE((v), reg32_t) << BP_EIM_CS3RCR1_RADVA) & BM_EIM_CS3RCR1_RADVA)

#ifndef __LANGUAGE_ASM__
//! @brief Set the RADVA field to a new value.
#define BW_EIM_CS3RCR1_RADVA(v)   (HW_EIM_CS3RCR1_WR((HW_EIM_CS3RCR1_RD() & ~BM_EIM_CS3RCR1_RADVA) | BF_EIM_CS3RCR1_RADVA(v)))
#endif


/* --- Register HW_EIM_CS3RCR1, field RWSC[29:24] (RW)
 *
 * Read Wait State Control. This bit field programs the number of wait-states, according to the
 * settings shown below, for synchronous or asynchronous read access to the external device
 * connected to the chip select. When SRD=1 and RFL=0, RWSC indicates the number of burst clock
 * (BCLK) cycles from the start of an access, before the controller can start sample data.Since WAIT
 * signal can be asserted one cycle before the first data can be sampled, the controller starts
 * evaluating the WAIT signal state one cycle before, this is referred as handshake mode or variable
 * latency mode. When SRD=1 and RFL=1, RWSC indicates the number of burst clock (BCLK) cycles from
 * the start of an access, until the external device is ready for data transfer, this is referred as
 * fix latency mode. When SRD=0, RFL bit is ignored, RWSC indicates the asynchronous access length
 * and the number of EIM clock cycles from the start of access until the external device is ready
 * for data transfer. RWSC is cleared by a hardware reset. The reset value for EIM_CS0RCR1,
 * RWSC[5:0] = 0b011100. For CG1RCR1 - CS1RCR5 the reset value is 0b000000. Example settings:
 *
 * Values:
 * 000000 - Reserved
 * 000001 - RWSC value is 1
 * 000010 - RWSC value is 2
 * 111101 - RWSC value is 61
 * 111110 - RWSC value is 62
 * 111111 - RWSC value is 63
 */

#define BP_EIM_CS3RCR1_RWSC      (24)      //!< Bit position for EIM_CS3RCR1_RWSC.
#define BM_EIM_CS3RCR1_RWSC      (0x3f000000)  //!< Bit mask for EIM_CS3RCR1_RWSC.

//! @brief Get value of EIM_CS3RCR1_RWSC from a register value.
#define BG_EIM_CS3RCR1_RWSC(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_EIM_CS3RCR1_RWSC) >> BP_EIM_CS3RCR1_RWSC)

//! @brief Format value for bitfield EIM_CS3RCR1_RWSC.
#define BF_EIM_CS3RCR1_RWSC(v)   ((__REG_VALUE_TYPE((v), reg32_t) << BP_EIM_CS3RCR1_RWSC) & BM_EIM_CS3RCR1_RWSC)

#ifndef __LANGUAGE_ASM__
//! @brief Set the RWSC field to a new value.
#define BW_EIM_CS3RCR1_RWSC(v)   (HW_EIM_CS3RCR1_WR((HW_EIM_CS3RCR1_RD() & ~BM_EIM_CS3RCR1_RWSC) | BF_EIM_CS3RCR1_RWSC(v)))
#endif


//-------------------------------------------------------------------------------------------
// HW_EIM_CS3RCR2 - Chip Select n Read Configuration Register 2
//-------------------------------------------------------------------------------------------

#ifndef __LANGUAGE_ASM__
/*!
 * @brief HW_EIM_CS3RCR2 - Chip Select n Read Configuration Register 2 (RW)
 *
 * Reset value: 0x00000000
 *

 */
typedef union _hw_eim_cs3rcr2
{
    reg32_t U;
    struct _hw_eim_cs3rcr2_bitfields
    {
        unsigned RBEN : 3; //!< [2:0] Read BE Negation.
        unsigned RBE : 1; //!< [3] Read BE enable.
        unsigned RBEA : 3; //!< [6:4] Read BE Assertion.
        unsigned RESERVED0 : 1; //!< [7] Reserved
        unsigned RL : 2; //!< [9:8] Read Latency.
        unsigned RESERVED1 : 2; //!< [11:10] Reserved
        unsigned PAT : 3; //!< [14:12] Page Access Time.
        unsigned APR : 1; //!< [15] Asynchronous Page Read.
        unsigned RESERVED2 : 16; //!< [31:16] Reserved
    } B;
} hw_eim_cs3rcr2_t;
#endif

/*
 * constants & macros for entire EIM_CS3RCR2 register
 */
#define HW_EIM_CS3RCR2_ADDR      (REGS_EIM_BASE + 0x54)

#ifndef __LANGUAGE_ASM__
#define HW_EIM_CS3RCR2           (*(volatile hw_eim_cs3rcr2_t *) HW_EIM_CS3RCR2_ADDR)
#define HW_EIM_CS3RCR2_RD()      (HW_EIM_CS3RCR2.U)
#define HW_EIM_CS3RCR2_WR(v)     (HW_EIM_CS3RCR2.U = (v))
#define HW_EIM_CS3RCR2_SET(v)    (HW_EIM_CS3RCR2_WR(HW_EIM_CS3RCR2_RD() |  (v)))
#define HW_EIM_CS3RCR2_CLR(v)    (HW_EIM_CS3RCR2_WR(HW_EIM_CS3RCR2_RD() & ~(v)))
#define HW_EIM_CS3RCR2_TOG(v)    (HW_EIM_CS3RCR2_WR(HW_EIM_CS3RCR2_RD() ^  (v)))
#endif

/*
 * constants & macros for individual EIM_CS3RCR2 bitfields
 */

/* --- Register HW_EIM_CS3RCR2, field RBEN[2:0] (RW)
 *
 * Read BE Negation. This bit field determines when BE signal is negated during read cycles in
 * asynchronous single mode only (SRD=0 & APR=0), according to the settings shown below. This bit
 * field is ignored when SRD=1. RBEN is cleared by a hardware reset. Example settings:
 *
 * Values:
 * 000 - 0 EIM clock cycles between end of read access and BE negation
 * 001 - 1 EIM clock cycles between end of read access and BE negation
 * 010 - 2 EIM clock cycles between end of read access and BE negation
 * 111 - 7 EIM clock cycles between end of read access and BE negation
 */

#define BP_EIM_CS3RCR2_RBEN      (0)      //!< Bit position for EIM_CS3RCR2_RBEN.
#define BM_EIM_CS3RCR2_RBEN      (0x00000007)  //!< Bit mask for EIM_CS3RCR2_RBEN.

//! @brief Get value of EIM_CS3RCR2_RBEN from a register value.
#define BG_EIM_CS3RCR2_RBEN(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_EIM_CS3RCR2_RBEN) >> BP_EIM_CS3RCR2_RBEN)

//! @brief Format value for bitfield EIM_CS3RCR2_RBEN.
#define BF_EIM_CS3RCR2_RBEN(v)   ((__REG_VALUE_TYPE((v), reg32_t) << BP_EIM_CS3RCR2_RBEN) & BM_EIM_CS3RCR2_RBEN)

#ifndef __LANGUAGE_ASM__
//! @brief Set the RBEN field to a new value.
#define BW_EIM_CS3RCR2_RBEN(v)   (HW_EIM_CS3RCR2_WR((HW_EIM_CS3RCR2_RD() & ~BM_EIM_CS3RCR2_RBEN) | BF_EIM_CS3RCR2_RBEN(v)))
#endif


/* --- Register HW_EIM_CS3RCR2, field RBE[3] (RW)
 *
 * Read BE enable. This bit field determines if BE will be asserted during read access.
 *
 * Values:
 * 0 - - BE are disabled during read access.
 * 1- - BE are enable during read access according to value of RBEA & RBEN bit fields.
 */

#define BP_EIM_CS3RCR2_RBE      (3)      //!< Bit position for EIM_CS3RCR2_RBE.
#define BM_EIM_CS3RCR2_RBE      (0x00000008)  //!< Bit mask for EIM_CS3RCR2_RBE.

//! @brief Get value of EIM_CS3RCR2_RBE from a register value.
#define BG_EIM_CS3RCR2_RBE(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_EIM_CS3RCR2_RBE) >> BP_EIM_CS3RCR2_RBE)

//! @brief Format value for bitfield EIM_CS3RCR2_RBE.
#define BF_EIM_CS3RCR2_RBE(v)   ((__REG_VALUE_TYPE((v), reg32_t) << BP_EIM_CS3RCR2_RBE) & BM_EIM_CS3RCR2_RBE)

#ifndef __LANGUAGE_ASM__
//! @brief Set the RBE field to a new value.
#define BW_EIM_CS3RCR2_RBE(v)   (HW_EIM_CS3RCR2_WR((HW_EIM_CS3RCR2_RD() & ~BM_EIM_CS3RCR2_RBE) | BF_EIM_CS3RCR2_RBE(v)))
#endif


/* --- Register HW_EIM_CS3RCR2, field RBEA[6:4] (RW)
 *
 * Read BE Assertion. This bit field determines when BE signal is asserted during read cycles
 * (synchronous or asynchronous mode), according to the settings shown below. RBEA is cleared by a
 * hardware reset. Example settings:
 *
 * Values:
 * 000 - 0 EIM clock cycles between beginning of read access and BE assertion
 * 001 - 1 EIM clock cycles between beginning of read access and BE assertion
 * 010 - 2 EIM clock cycles between beginning of read access and BE assertion
 * 111 - 7 EIM clock cycles between beginning of read access and BE assertion
 */

#define BP_EIM_CS3RCR2_RBEA      (4)      //!< Bit position for EIM_CS3RCR2_RBEA.
#define BM_EIM_CS3RCR2_RBEA      (0x00000070)  //!< Bit mask for EIM_CS3RCR2_RBEA.

//! @brief Get value of EIM_CS3RCR2_RBEA from a register value.
#define BG_EIM_CS3RCR2_RBEA(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_EIM_CS3RCR2_RBEA) >> BP_EIM_CS3RCR2_RBEA)

//! @brief Format value for bitfield EIM_CS3RCR2_RBEA.
#define BF_EIM_CS3RCR2_RBEA(v)   ((__REG_VALUE_TYPE((v), reg32_t) << BP_EIM_CS3RCR2_RBEA) & BM_EIM_CS3RCR2_RBEA)

#ifndef __LANGUAGE_ASM__
//! @brief Set the RBEA field to a new value.
#define BW_EIM_CS3RCR2_RBEA(v)   (HW_EIM_CS3RCR2_WR((HW_EIM_CS3RCR2_RD() & ~BM_EIM_CS3RCR2_RBEA) | BF_EIM_CS3RCR2_RBEA(v)))
#endif


/* --- Register HW_EIM_CS3RCR2, field RL[9:8] (RW)
 *
 * Read Latency. This bit field indicates cycle latency when executing a synchronous read operation.
 * The fields holds the feedback clock loop delay in aclk cycle units. This field is cleared by a
 * hardware reset.
 *
 * Values:
 * 00 - Feedback clock loop delay is up to 1 cycle for BCD = 0 or 1.5 cycles for BCD != 0
 * 01 - Feedback clock loop delay is up to 2 cycles for BCD = 0 or 2.5 cycles for BCD != 0
 * 10 - Feedback clock loop delay is up to 3 cycles for BCD = 0 or 3.5 cycles for BCD != 0
 * 11 - Feedback clock loop delay is up to 4 cycles for BCD = 0 or 4.5 cycles for BCD != 0
 */

#define BP_EIM_CS3RCR2_RL      (8)      //!< Bit position for EIM_CS3RCR2_RL.
#define BM_EIM_CS3RCR2_RL      (0x00000300)  //!< Bit mask for EIM_CS3RCR2_RL.

//! @brief Get value of EIM_CS3RCR2_RL from a register value.
#define BG_EIM_CS3RCR2_RL(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_EIM_CS3RCR2_RL) >> BP_EIM_CS3RCR2_RL)

//! @brief Format value for bitfield EIM_CS3RCR2_RL.
#define BF_EIM_CS3RCR2_RL(v)   ((__REG_VALUE_TYPE((v), reg32_t) << BP_EIM_CS3RCR2_RL) & BM_EIM_CS3RCR2_RL)

#ifndef __LANGUAGE_ASM__
//! @brief Set the RL field to a new value.
#define BW_EIM_CS3RCR2_RL(v)   (HW_EIM_CS3RCR2_WR((HW_EIM_CS3RCR2_RD() & ~BM_EIM_CS3RCR2_RL) | BF_EIM_CS3RCR2_RL(v)))
#endif


/* --- Register HW_EIM_CS3RCR2, field PAT[14:12] (RW)
 *
 * Page Access Time. This bit field is used in Asynchronous Page Read mode only (APR=1). the initial
 * access is set by RWSC as in regular asynchronous mode. the consecutive address assertions width
 * determine by PAT field according to the settings shown below. when APR=0 this field is ignored.
 * PAT is cleared by a hardware reset for EIM_CS1GCR1 - EIM_CS5GCR1.
 *
 * Values:
 * 000 - Address width is 2 EIM clock cycles
 * 001 - Address width is 3 EIM clock cycles
 * 010 - Address width is 4 EIM clock cycles
 * 011 - Address width is 5 EIM clock cycles
 * 100 - Address width is 6 EIM clock cycles
 * 101 - Address width is 7 EIM clock cycles
 * 110 - Address width is 8 EIM clock cycles
 * 111 - Address width is 9 EIM clock cycles
 */

#define BP_EIM_CS3RCR2_PAT      (12)      //!< Bit position for EIM_CS3RCR2_PAT.
#define BM_EIM_CS3RCR2_PAT      (0x00007000)  //!< Bit mask for EIM_CS3RCR2_PAT.

//! @brief Get value of EIM_CS3RCR2_PAT from a register value.
#define BG_EIM_CS3RCR2_PAT(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_EIM_CS3RCR2_PAT) >> BP_EIM_CS3RCR2_PAT)

//! @brief Format value for bitfield EIM_CS3RCR2_PAT.
#define BF_EIM_CS3RCR2_PAT(v)   ((__REG_VALUE_TYPE((v), reg32_t) << BP_EIM_CS3RCR2_PAT) & BM_EIM_CS3RCR2_PAT)

#ifndef __LANGUAGE_ASM__
//! @brief Set the PAT field to a new value.
#define BW_EIM_CS3RCR2_PAT(v)   (HW_EIM_CS3RCR2_WR((HW_EIM_CS3RCR2_RD() & ~BM_EIM_CS3RCR2_PAT) | BF_EIM_CS3RCR2_PAT(v)))
#endif


/* --- Register HW_EIM_CS3RCR2, field APR[15] (RW)
 *
 * Asynchronous Page Read. This bit field determine the asynchronous read mode to the external
 * device. When APR=0, the async. read access is done as single word (where word is defined by the
 * DSZ field). when APR=1, the async. read access executed as page read. page size is according to
 * BL field config., RCSN,RBEN,OEN and RADVN are being ignored. APR is cleared by a hardware reset
 * for EIM_CS1GCR1 - EIM_CS5GCR1. SRD=0 and MUM=0 must apply when APR=1
 */

#define BP_EIM_CS3RCR2_APR      (15)      //!< Bit position for EIM_CS3RCR2_APR.
#define BM_EIM_CS3RCR2_APR      (0x00008000)  //!< Bit mask for EIM_CS3RCR2_APR.

//! @brief Get value of EIM_CS3RCR2_APR from a register value.
#define BG_EIM_CS3RCR2_APR(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_EIM_CS3RCR2_APR) >> BP_EIM_CS3RCR2_APR)

//! @brief Format value for bitfield EIM_CS3RCR2_APR.
#define BF_EIM_CS3RCR2_APR(v)   ((__REG_VALUE_TYPE((v), reg32_t) << BP_EIM_CS3RCR2_APR) & BM_EIM_CS3RCR2_APR)

#ifndef __LANGUAGE_ASM__
//! @brief Set the APR field to a new value.
#define BW_EIM_CS3RCR2_APR(v)   (HW_EIM_CS3RCR2_WR((HW_EIM_CS3RCR2_RD() & ~BM_EIM_CS3RCR2_APR) | BF_EIM_CS3RCR2_APR(v)))
#endif

//-------------------------------------------------------------------------------------------
// HW_EIM_CS3WCR1 - Chip Select n Write Configuration Register 1
//-------------------------------------------------------------------------------------------

#ifndef __LANGUAGE_ASM__
/*!
 * @brief HW_EIM_CS3WCR1 - Chip Select n Write Configuration Register 1 (RW)
 *
 * Reset value: 0x00000000
 *

 */
typedef union _hw_eim_cs3wcr1
{
    reg32_t U;
    struct _hw_eim_cs3wcr1_bitfields
    {
        unsigned WCSN : 3; //!< [2:0] Write CS Negation.
        unsigned WCSA : 3; //!< [5:3] Write CS Assertion.
        unsigned WEN : 3; //!< [8:6] WE Negation.
        unsigned WEA : 3; //!< [11:9] WE Assertion.
        unsigned WBEN : 3; //!< [14:12] BE[3:0] Negation.
        unsigned WBEA : 3; //!< [17:15] BE Assertion.
        unsigned WADVN : 3; //!< [20:18] ADV Negation.
        unsigned WADVA : 3; //!< [23:21] ADV Assertion.
        unsigned WWSC : 6; //!< [29:24] Write Wait State Control.
        unsigned WBED : 1; //!< [30] Write Byte Enable Disable.
        unsigned WAL : 1; //!< [31] Write ADV Low.
    } B;
} hw_eim_cs3wcr1_t;
#endif

/*
 * constants & macros for entire EIM_CS3WCR1 register
 */
#define HW_EIM_CS3WCR1_ADDR      (REGS_EIM_BASE + 0x58)

#ifndef __LANGUAGE_ASM__
#define HW_EIM_CS3WCR1           (*(volatile hw_eim_cs3wcr1_t *) HW_EIM_CS3WCR1_ADDR)
#define HW_EIM_CS3WCR1_RD()      (HW_EIM_CS3WCR1.U)
#define HW_EIM_CS3WCR1_WR(v)     (HW_EIM_CS3WCR1.U = (v))
#define HW_EIM_CS3WCR1_SET(v)    (HW_EIM_CS3WCR1_WR(HW_EIM_CS3WCR1_RD() |  (v)))
#define HW_EIM_CS3WCR1_CLR(v)    (HW_EIM_CS3WCR1_WR(HW_EIM_CS3WCR1_RD() & ~(v)))
#define HW_EIM_CS3WCR1_TOG(v)    (HW_EIM_CS3WCR1_WR(HW_EIM_CS3WCR1_RD() ^  (v)))
#endif

/*
 * constants & macros for individual EIM_CS3WCR1 bitfields
 */

/* --- Register HW_EIM_CS3WCR1, field WCSN[2:0] (RW)
 *
 * Write CS Negation. This bit field determines when CS signal is negated during write cycles in
 * asynchronous mode only (SWR=0), according to the settings shown below. This bit field is ignored
 * when SWR=1. WCSN is cleared by a hardware reset. Example settings:
 *
 * Values:
 * 000 - 0 EIM clock cycles between end of read access and CS negation
 * 001 - 1 EIM clock cycles between end of read access and CS negation
 * 010 - 2 EIM clock cycles between end of read access and CS negation
 * 111 - 7 EIM clock cycles between end of read access and CS negation
 */

#define BP_EIM_CS3WCR1_WCSN      (0)      //!< Bit position for EIM_CS3WCR1_WCSN.
#define BM_EIM_CS3WCR1_WCSN      (0x00000007)  //!< Bit mask for EIM_CS3WCR1_WCSN.

//! @brief Get value of EIM_CS3WCR1_WCSN from a register value.
#define BG_EIM_CS3WCR1_WCSN(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_EIM_CS3WCR1_WCSN) >> BP_EIM_CS3WCR1_WCSN)

//! @brief Format value for bitfield EIM_CS3WCR1_WCSN.
#define BF_EIM_CS3WCR1_WCSN(v)   ((__REG_VALUE_TYPE((v), reg32_t) << BP_EIM_CS3WCR1_WCSN) & BM_EIM_CS3WCR1_WCSN)

#ifndef __LANGUAGE_ASM__
//! @brief Set the WCSN field to a new value.
#define BW_EIM_CS3WCR1_WCSN(v)   (HW_EIM_CS3WCR1_WR((HW_EIM_CS3WCR1_RD() & ~BM_EIM_CS3WCR1_WCSN) | BF_EIM_CS3WCR1_WCSN(v)))
#endif


/* --- Register HW_EIM_CS3WCR1, field WCSA[5:3] (RW)
 *
 * Write CS Assertion. This bit field determines when CS signal is asserted during write cycles
 * (synchronous or asynchronous mode), according to the settings shown below.this bit field is
 * ignored when executing a read access to the external device. WCSA is cleared by a hardware reset.
 * Example settings:
 *
 * Values:
 * 000 - 0 EIM clock cycles between beginning of write access and CS assertion
 * 001 - 1 EIM clock cycles between beginning of write access and CS assertion
 * 010 - 2 EIM clock cycles between beginning of write access and CS assertion
 * 111 - 7 EIMclock cycles between beginning of write access and CS assertion
 */

#define BP_EIM_CS3WCR1_WCSA      (3)      //!< Bit position for EIM_CS3WCR1_WCSA.
#define BM_EIM_CS3WCR1_WCSA      (0x00000038)  //!< Bit mask for EIM_CS3WCR1_WCSA.

//! @brief Get value of EIM_CS3WCR1_WCSA from a register value.
#define BG_EIM_CS3WCR1_WCSA(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_EIM_CS3WCR1_WCSA) >> BP_EIM_CS3WCR1_WCSA)

//! @brief Format value for bitfield EIM_CS3WCR1_WCSA.
#define BF_EIM_CS3WCR1_WCSA(v)   ((__REG_VALUE_TYPE((v), reg32_t) << BP_EIM_CS3WCR1_WCSA) & BM_EIM_CS3WCR1_WCSA)

#ifndef __LANGUAGE_ASM__
//! @brief Set the WCSA field to a new value.
#define BW_EIM_CS3WCR1_WCSA(v)   (HW_EIM_CS3WCR1_WR((HW_EIM_CS3WCR1_RD() & ~BM_EIM_CS3WCR1_WCSA) | BF_EIM_CS3WCR1_WCSA(v)))
#endif


/* --- Register HW_EIM_CS3WCR1, field WEN[8:6] (RW)
 *
 * WE Negation. This bit field determines when WE signal is negated during write cycles in
 * asynchronous mode only (SWR=0), according to the settings shown below. This bit field is ignored
 * when SWR=1. WEN is cleared by a hardware reset. Reset value for EIM_CS0WCR for WEN is 2. For
 * EIM_CS1WCR - EIM_CS5WCR reset value is 000. Example settings:
 *
 * Values:
 * 000 - 0 EIM clock cycles between beginning of access and WE assertion
 * 001 - 1 EIM clock cycles between beginning of access and WE assertion
 * 010 - 2 EIM clock cycles between beginning of access and WE assertion
 * 111 - 7 EIM clock cycles between beginning of access and WE assertion
 */

#define BP_EIM_CS3WCR1_WEN      (6)      //!< Bit position for EIM_CS3WCR1_WEN.
#define BM_EIM_CS3WCR1_WEN      (0x000001c0)  //!< Bit mask for EIM_CS3WCR1_WEN.

//! @brief Get value of EIM_CS3WCR1_WEN from a register value.
#define BG_EIM_CS3WCR1_WEN(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_EIM_CS3WCR1_WEN) >> BP_EIM_CS3WCR1_WEN)

//! @brief Format value for bitfield EIM_CS3WCR1_WEN.
#define BF_EIM_CS3WCR1_WEN(v)   ((__REG_VALUE_TYPE((v), reg32_t) << BP_EIM_CS3WCR1_WEN) & BM_EIM_CS3WCR1_WEN)

#ifndef __LANGUAGE_ASM__
//! @brief Set the WEN field to a new value.
#define BW_EIM_CS3WCR1_WEN(v)   (HW_EIM_CS3WCR1_WR((HW_EIM_CS3WCR1_RD() & ~BM_EIM_CS3WCR1_WEN) | BF_EIM_CS3WCR1_WEN(v)))
#endif


/* --- Register HW_EIM_CS3WCR1, field WEA[11:9] (RW)
 *
 * WE Assertion. This bit field determines when WE signal is asserted during write cycles
 * (synchronous or asynchronous mode), according to the settings shown below. This bit field is
 * ignored when executing a read access to the external device. WEA is cleared by a hardware reset.
 * Reset value for EIM_CS0WCR for WEA is 2. For EIM_CS1WCR - EIM_CS5WCR reset value is 000. Example
 * settings:
 *
 * Values:
 * 000 - 0 EIM clock cycles between beginning of access and WE assertion
 * 001 - 1 EIM clock cycles between beginning of access and WE assertion
 * 010 - 2 EIM clock cycles between beginning of access and WE assertion
 * 111 - 7 EIMclock cycles between beginning of access and WE assertion
 */

#define BP_EIM_CS3WCR1_WEA      (9)      //!< Bit position for EIM_CS3WCR1_WEA.
#define BM_EIM_CS3WCR1_WEA      (0x00000e00)  //!< Bit mask for EIM_CS3WCR1_WEA.

//! @brief Get value of EIM_CS3WCR1_WEA from a register value.
#define BG_EIM_CS3WCR1_WEA(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_EIM_CS3WCR1_WEA) >> BP_EIM_CS3WCR1_WEA)

//! @brief Format value for bitfield EIM_CS3WCR1_WEA.
#define BF_EIM_CS3WCR1_WEA(v)   ((__REG_VALUE_TYPE((v), reg32_t) << BP_EIM_CS3WCR1_WEA) & BM_EIM_CS3WCR1_WEA)

#ifndef __LANGUAGE_ASM__
//! @brief Set the WEA field to a new value.
#define BW_EIM_CS3WCR1_WEA(v)   (HW_EIM_CS3WCR1_WR((HW_EIM_CS3WCR1_RD() & ~BM_EIM_CS3WCR1_WEA) | BF_EIM_CS3WCR1_WEA(v)))
#endif


/* --- Register HW_EIM_CS3WCR1, field WBEN[14:12] (RW)
 *
 * BE[3:0] Negation. This bit field determines when BE[3:0] bus signal is negated during write
 * cycles in async. mode only (SWR=0), according to the settings shown below. This bit field is
 * ignored when SWR=1. BEN is cleared by a hardware reset. Reset value for EIM_CS0WCR for WBEN is 2.
 * For EIM_CS1WCR - EIM_CS5WCR reset value is 000. Example settings: 000 0 EIM clock cycles between
 * end of access and WE negation 001 1 EIM clock cycles between end of access and WE negation 010 2
 * EIM clock cycles between end of access and WE negation 111 7 EIM clock cycles between end of
 * access and WE negation
 */

#define BP_EIM_CS3WCR1_WBEN      (12)      //!< Bit position for EIM_CS3WCR1_WBEN.
#define BM_EIM_CS3WCR1_WBEN      (0x00007000)  //!< Bit mask for EIM_CS3WCR1_WBEN.

//! @brief Get value of EIM_CS3WCR1_WBEN from a register value.
#define BG_EIM_CS3WCR1_WBEN(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_EIM_CS3WCR1_WBEN) >> BP_EIM_CS3WCR1_WBEN)

//! @brief Format value for bitfield EIM_CS3WCR1_WBEN.
#define BF_EIM_CS3WCR1_WBEN(v)   ((__REG_VALUE_TYPE((v), reg32_t) << BP_EIM_CS3WCR1_WBEN) & BM_EIM_CS3WCR1_WBEN)

#ifndef __LANGUAGE_ASM__
//! @brief Set the WBEN field to a new value.
#define BW_EIM_CS3WCR1_WBEN(v)   (HW_EIM_CS3WCR1_WR((HW_EIM_CS3WCR1_RD() & ~BM_EIM_CS3WCR1_WBEN) | BF_EIM_CS3WCR1_WBEN(v)))
#endif

/* --- Register HW_EIM_CS3WCR1, field WBEA[17:15] (RW)
 *
 * BE Assertion. This bit field determines when BE signal is asserted during write cycles in async.
 * mode only (SWR=0), according to the settings shown below. BEA is cleared by a hardware reset.
 * Reset value for EIM_CS0WCR for WBEA is 2. For EIM_CS1WCR - EIM_CS5WCR reset value is 000. Example
 * settings:
 *
 * Values:
 * 000 - 0 EIM clock cycles between beginning of access and BE assertion
 * 001 - 1 EIM clock cycles between beginning of access and BE assertion
 * 010 - 2 EIM clock cycles between beginning of access and BE assertion
 * 111 - 7 EIM clock cycles between beginning of access and BE assertion
 */

#define BP_EIM_CS3WCR1_WBEA      (15)      //!< Bit position for EIM_CS3WCR1_WBEA.
#define BM_EIM_CS3WCR1_WBEA      (0x00038000)  //!< Bit mask for EIM_CS3WCR1_WBEA.

//! @brief Get value of EIM_CS3WCR1_WBEA from a register value.
#define BG_EIM_CS3WCR1_WBEA(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_EIM_CS3WCR1_WBEA) >> BP_EIM_CS3WCR1_WBEA)

//! @brief Format value for bitfield EIM_CS3WCR1_WBEA.
#define BF_EIM_CS3WCR1_WBEA(v)   ((__REG_VALUE_TYPE((v), reg32_t) << BP_EIM_CS3WCR1_WBEA) & BM_EIM_CS3WCR1_WBEA)

#ifndef __LANGUAGE_ASM__
//! @brief Set the WBEA field to a new value.
#define BW_EIM_CS3WCR1_WBEA(v)   (HW_EIM_CS3WCR1_WR((HW_EIM_CS3WCR1_RD() & ~BM_EIM_CS3WCR1_WBEA) | BF_EIM_CS3WCR1_WBEA(v)))
#endif


/* --- Register HW_EIM_CS3WCR1, field WADVN[20:18] (RW)
 *
 * ADV Negation. This bit field determines when ADV signal to memory is negated during write
 * accesses. When SWR=1 (synchronous write mode), ADV negation occurs according to the following
 * formula: (WADVN + WADVA + BCD + BCS + 1) EIM clock cycles. When asynchronous read mode is applied
 * (SWR=0) ADV negation occurs according to the following formula: (WADVN + WADVA + 1) EIM clock
 * cycles. Reset value for EIM_CS0WCR for WADVN is 2. For EIM_CS1WCR - EIM_CS5WCR reset value is
 * 000. This field should be configured so ADV negation will occur before the end of access. For ADV
 * negation at the same time as the end of access, S/W should set the WAL bit.
 */

#define BP_EIM_CS3WCR1_WADVN      (18)      //!< Bit position for EIM_CS3WCR1_WADVN.
#define BM_EIM_CS3WCR1_WADVN      (0x001c0000)  //!< Bit mask for EIM_CS3WCR1_WADVN.

//! @brief Get value of EIM_CS3WCR1_WADVN from a register value.
#define BG_EIM_CS3WCR1_WADVN(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_EIM_CS3WCR1_WADVN) >> BP_EIM_CS3WCR1_WADVN)

//! @brief Format value for bitfield EIM_CS3WCR1_WADVN.
#define BF_EIM_CS3WCR1_WADVN(v)   ((__REG_VALUE_TYPE((v), reg32_t) << BP_EIM_CS3WCR1_WADVN) & BM_EIM_CS3WCR1_WADVN)

#ifndef __LANGUAGE_ASM__
//! @brief Set the WADVN field to a new value.
#define BW_EIM_CS3WCR1_WADVN(v)   (HW_EIM_CS3WCR1_WR((HW_EIM_CS3WCR1_RD() & ~BM_EIM_CS3WCR1_WADVN) | BF_EIM_CS3WCR1_WADVN(v)))
#endif

/* --- Register HW_EIM_CS3WCR1, field WADVA[23:21] (RW)
 *
 * ADV Assertion. This bit field determines when ADV signal is asserted for synchronous or
 * asynchronous write modes according to the settings shown below. WADVA is cleared by a hardware
 * reset. Example settings:
 *
 * Values:
 * 000 - 0 EIM clock cycles between beginning of access and ADV assertion
 * 001 - 1 EIM clock cycles between beginning of access and ADV assertion
 * 010 - 2 EIM clock cycles between beginning of access and ADV assertion
 * 111 - 7 EIM clock cycles between beginning of access and ADV assertion
 */

#define BP_EIM_CS3WCR1_WADVA      (21)      //!< Bit position for EIM_CS3WCR1_WADVA.
#define BM_EIM_CS3WCR1_WADVA      (0x00e00000)  //!< Bit mask for EIM_CS3WCR1_WADVA.

//! @brief Get value of EIM_CS3WCR1_WADVA from a register value.
#define BG_EIM_CS3WCR1_WADVA(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_EIM_CS3WCR1_WADVA) >> BP_EIM_CS3WCR1_WADVA)

//! @brief Format value for bitfield EIM_CS3WCR1_WADVA.
#define BF_EIM_CS3WCR1_WADVA(v)   ((__REG_VALUE_TYPE((v), reg32_t) << BP_EIM_CS3WCR1_WADVA) & BM_EIM_CS3WCR1_WADVA)

#ifndef __LANGUAGE_ASM__
//! @brief Set the WADVA field to a new value.
#define BW_EIM_CS3WCR1_WADVA(v)   (HW_EIM_CS3WCR1_WR((HW_EIM_CS3WCR1_RD() & ~BM_EIM_CS3WCR1_WADVA) | BF_EIM_CS3WCR1_WADVA(v)))
#endif


/* --- Register HW_EIM_CS3WCR1, field WWSC[29:24] (RW)
 *
 * Write Wait State Control. This bit field programs the number of wait-states, according to the
 * settings shown below, for synchronous or asynchronous write access to the external device
 * connected to the chip select. When SWR=1 and WFL=0, WWSC indicates the number of burst clock
 * (BCLK) cycles from the start of an access, before the memory can sample the first data.Since WAIT
 * signal can be asserted one cycle before the first data can be sampled, the controller starts
 * evaluating the WAIT signal state one cycle before, this is referred as handshake mode or variable
 * latency mode. When SWR=1 and WFL=1, WWSC indicates the number of burst clock (BCLK) cycles from
 * the start of an access, until the external device is ready for data transfer, this is referred as
 * fix latency mode. When SWR=0, WFL bit is ignored, WWSC indicates the asynchronous access length
 * and the number of EIM clock cycles from the start of access until the external device is ready
 * for data transfer. WWSC is cleared by a hardware reset. The reset value for EIM_CS0WCR1,
 * WWSC[5:0] = 0b011100. For EIM_CS1WCR1 - EIM_CS5WCR1, the reset value of this field is 0b000000.
 * Example settings:
 *
 * Values:
 * 000000 - Reserved
 * 000001 - WWSC value is 1
 * 000010 - WWSC value is 2
 * 000011 - WWSC value is 3
 * 111111 - WWSC value is 63
 */

#define BP_EIM_CS3WCR1_WWSC      (24)      //!< Bit position for EIM_CS3WCR1_WWSC.
#define BM_EIM_CS3WCR1_WWSC      (0x3f000000)  //!< Bit mask for EIM_CS3WCR1_WWSC.

//! @brief Get value of EIM_CS3WCR1_WWSC from a register value.
#define BG_EIM_CS3WCR1_WWSC(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_EIM_CS3WCR1_WWSC) >> BP_EIM_CS3WCR1_WWSC)

//! @brief Format value for bitfield EIM_CS3WCR1_WWSC.
#define BF_EIM_CS3WCR1_WWSC(v)   ((__REG_VALUE_TYPE((v), reg32_t) << BP_EIM_CS3WCR1_WWSC) & BM_EIM_CS3WCR1_WWSC)

#ifndef __LANGUAGE_ASM__
//! @brief Set the WWSC field to a new value.
#define BW_EIM_CS3WCR1_WWSC(v)   (HW_EIM_CS3WCR1_WR((HW_EIM_CS3WCR1_RD() & ~BM_EIM_CS3WCR1_WWSC) | BF_EIM_CS3WCR1_WWSC(v)))
#endif


/* --- Register HW_EIM_CS3WCR1, field WBED[30] (RW)
 *
 * Write Byte Enable Disable. When asserted this bit prevent from IPP_DO_BE_B[x] to be asserted
 * during write accesses.This bit is cleared by hardware reset.
 */

#define BP_EIM_CS3WCR1_WBED      (30)      //!< Bit position for EIM_CS3WCR1_WBED.
#define BM_EIM_CS3WCR1_WBED      (0x40000000)  //!< Bit mask for EIM_CS3WCR1_WBED.

//! @brief Get value of EIM_CS3WCR1_WBED from a register value.
#define BG_EIM_CS3WCR1_WBED(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_EIM_CS3WCR1_WBED) >> BP_EIM_CS3WCR1_WBED)

//! @brief Format value for bitfield EIM_CS3WCR1_WBED.
#define BF_EIM_CS3WCR1_WBED(v)   ((__REG_VALUE_TYPE((v), reg32_t) << BP_EIM_CS3WCR1_WBED) & BM_EIM_CS3WCR1_WBED)

#ifndef __LANGUAGE_ASM__
//! @brief Set the WBED field to a new value.
#define BW_EIM_CS3WCR1_WBED(v)   (HW_EIM_CS3WCR1_WR((HW_EIM_CS3WCR1_RD() & ~BM_EIM_CS3WCR1_WBED) | BF_EIM_CS3WCR1_WBED(v)))
#endif

/* --- Register HW_EIM_CS3WCR1, field WAL[31] (RW)
 *
 * Write ADV Low. This bit field determine ADV signal negation time in write accesses. When WAL=1,
 * WADVN bit field is ignored and ADV signal will stay asserted until end of access. When WAL=0
 * negation of ADV signal is according to WADVN bit field configuration.
 */

#define BP_EIM_CS3WCR1_WAL      (31)      //!< Bit position for EIM_CS3WCR1_WAL.
#define BM_EIM_CS3WCR1_WAL      (0x80000000)  //!< Bit mask for EIM_CS3WCR1_WAL.

//! @brief Get value of EIM_CS3WCR1_WAL from a register value.
#define BG_EIM_CS3WCR1_WAL(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_EIM_CS3WCR1_WAL) >> BP_EIM_CS3WCR1_WAL)

//! @brief Format value for bitfield EIM_CS3WCR1_WAL.
#define BF_EIM_CS3WCR1_WAL(v)   ((__REG_VALUE_TYPE((v), reg32_t) << BP_EIM_CS3WCR1_WAL) & BM_EIM_CS3WCR1_WAL)

#ifndef __LANGUAGE_ASM__
//! @brief Set the WAL field to a new value.
#define BW_EIM_CS3WCR1_WAL(v)   (HW_EIM_CS3WCR1_WR((HW_EIM_CS3WCR1_RD() & ~BM_EIM_CS3WCR1_WAL) | BF_EIM_CS3WCR1_WAL(v)))
#endif

//-------------------------------------------------------------------------------------------
// HW_EIM_CS3WCR2 - Chip Select n Write Configuration Register 2
//-------------------------------------------------------------------------------------------

#ifndef __LANGUAGE_ASM__
/*!
 * @brief HW_EIM_CS3WCR2 - Chip Select n Write Configuration Register 2 (RW)
 *
 * Reset value: 0x00000000
 *

 */
typedef union _hw_eim_cs3wcr2
{
    reg32_t U;
    struct _hw_eim_cs3wcr2_bitfields
    {
        unsigned WBCDD : 1; //!< [0] Write Burst Clock Divisor Decrement.
        unsigned RESERVED0 : 31; //!< [31:1] Reserved
    } B;
} hw_eim_cs3wcr2_t;
#endif

/*
 * constants & macros for entire EIM_CS3WCR2 register
 */
#define HW_EIM_CS3WCR2_ADDR      (REGS_EIM_BASE + 0x5c)

#ifndef __LANGUAGE_ASM__
#define HW_EIM_CS3WCR2           (*(volatile hw_eim_cs3wcr2_t *) HW_EIM_CS3WCR2_ADDR)
#define HW_EIM_CS3WCR2_RD()      (HW_EIM_CS3WCR2.U)
#define HW_EIM_CS3WCR2_WR(v)     (HW_EIM_CS3WCR2.U = (v))
#define HW_EIM_CS3WCR2_SET(v)    (HW_EIM_CS3WCR2_WR(HW_EIM_CS3WCR2_RD() |  (v)))
#define HW_EIM_CS3WCR2_CLR(v)    (HW_EIM_CS3WCR2_WR(HW_EIM_CS3WCR2_RD() & ~(v)))
#define HW_EIM_CS3WCR2_TOG(v)    (HW_EIM_CS3WCR2_WR(HW_EIM_CS3WCR2_RD() ^  (v)))
#endif

/*
 * constants & macros for individual EIM_CS3WCR2 bitfields
 */

/* --- Register HW_EIM_CS3WCR2, field WBCDD[0] (RW)
 *
 * Write Burst Clock Divisor Decrement. If this bit is asserted and BCD value is 0 sync. write
 * access will be preformed as if BCD value is 1.When this bit is negated or BCD value is not 0 this
 * bit has no affect. This bit is cleared by hardware reset.
 */

#define BP_EIM_CS3WCR2_WBCDD      (0)      //!< Bit position for EIM_CS3WCR2_WBCDD.
#define BM_EIM_CS3WCR2_WBCDD      (0x00000001)  //!< Bit mask for EIM_CS3WCR2_WBCDD.

//! @brief Get value of EIM_CS3WCR2_WBCDD from a register value.
#define BG_EIM_CS3WCR2_WBCDD(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_EIM_CS3WCR2_WBCDD) >> BP_EIM_CS3WCR2_WBCDD)

//! @brief Format value for bitfield EIM_CS3WCR2_WBCDD.
#define BF_EIM_CS3WCR2_WBCDD(v)   ((__REG_VALUE_TYPE((v), reg32_t) << BP_EIM_CS3WCR2_WBCDD) & BM_EIM_CS3WCR2_WBCDD)

#ifndef __LANGUAGE_ASM__
//! @brief Set the WBCDD field to a new value.
#define BW_EIM_CS3WCR2_WBCDD(v)   (HW_EIM_CS3WCR2_WR((HW_EIM_CS3WCR2_RD() & ~BM_EIM_CS3WCR2_WBCDD) | BF_EIM_CS3WCR2_WBCDD(v)))
#endif

//-------------------------------------------------------------------------------------------
// HW_EIM_CS4GCR1 - Chip Select n General Configuration Register 1
//-------------------------------------------------------------------------------------------

#ifndef __LANGUAGE_ASM__
/*!
 * @brief HW_EIM_CS4GCR1 - Chip Select n General Configuration Register 1 (RW)
 *
 * Reset value: 0x00010080
 *

 */
typedef union _hw_eim_cs4gcr1
{
    reg32_t U;
    struct _hw_eim_cs4gcr1_bitfields
    {
        unsigned CSEN : 1; //!< [0] CS Enable.
        unsigned SWR : 1; //!< [1] Synchronous Write Data.
        unsigned SRD : 1; //!< [2] Synchronous Read Data.
        unsigned MUM : 1; //!< [3] Multiplexed Mode.
        unsigned WFL : 1; //!< [4] Write Fix Latency.
        unsigned RFL : 1; //!< [5] Read Fix Latency.
        unsigned CRE : 1; //!< [6] Configuration Register Enable.
        unsigned CREP : 1; //!< [7] Configuration Register Enable Polarity.
        unsigned BL : 3; //!< [10:8] Burst Length.
        unsigned WC : 1; //!< [11] Write Continuous.
        unsigned BCD : 2; //!< [13:12] Burst Clock Divisor.
        unsigned BCS : 2; //!< [15:14] Burst Clock Start.
        unsigned DSZ : 3; //!< [18:16] Data Port Size.
        unsigned SP : 1; //!< [19] Supervisor Protect.
        unsigned CSREC : 3; //!< [22:20] CS Recovery.
        unsigned AUS : 1; //!< [23] Address UnShifted.
        unsigned GBC : 3; //!< [26:24] Gap Between Chip Selects.
        unsigned WP : 1; //!< [27] Write Protect.
        unsigned PSZ : 4; //!< [31:28] Page Size.
    } B;
} hw_eim_cs4gcr1_t;
#endif

/*
 * constants & macros for entire EIM_CS4GCR1 register
 */
#define HW_EIM_CS4GCR1_ADDR      (REGS_EIM_BASE + 0x60)

#ifndef __LANGUAGE_ASM__
#define HW_EIM_CS4GCR1           (*(volatile hw_eim_cs4gcr1_t *) HW_EIM_CS4GCR1_ADDR)
#define HW_EIM_CS4GCR1_RD()      (HW_EIM_CS4GCR1.U)
#define HW_EIM_CS4GCR1_WR(v)     (HW_EIM_CS4GCR1.U = (v))
#define HW_EIM_CS4GCR1_SET(v)    (HW_EIM_CS4GCR1_WR(HW_EIM_CS4GCR1_RD() |  (v)))
#define HW_EIM_CS4GCR1_CLR(v)    (HW_EIM_CS4GCR1_WR(HW_EIM_CS4GCR1_RD() & ~(v)))
#define HW_EIM_CS4GCR1_TOG(v)    (HW_EIM_CS4GCR1_WR(HW_EIM_CS4GCR1_RD() ^  (v)))
#endif

/*
 * constants & macros for individual EIM_CS4GCR1 bitfields
 */

/* --- Register HW_EIM_CS4GCR1, field CSEN[0] (RW)
 *
 * CS Enable. This bit controls the operation of the chip select pin. CSEN is set by a hardware
 * reset for CSGCR0 to allow external boot operation. CSEN is cleared by a hardware reset to
 * CSGCR1-CSGCR5. Reset value for EIM_CS0GCR1 for CSEN is 1. For EIM_CS1GCR1-CS1GCR5 reset value is
 * 0.
 *
 * Values:
 * 0 - Chip select function is disabled; attempts to access an address mapped by this chip select results
 *     in an error respond and no assertion of the chip select output
 * 1 - Chip select is enabled, and is asserted when presented with a valid access.
 */

#define BP_EIM_CS4GCR1_CSEN      (0)      //!< Bit position for EIM_CS4GCR1_CSEN.
#define BM_EIM_CS4GCR1_CSEN      (0x00000001)  //!< Bit mask for EIM_CS4GCR1_CSEN.

//! @brief Get value of EIM_CS4GCR1_CSEN from a register value.
#define BG_EIM_CS4GCR1_CSEN(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_EIM_CS4GCR1_CSEN) >> BP_EIM_CS4GCR1_CSEN)

//! @brief Format value for bitfield EIM_CS4GCR1_CSEN.
#define BF_EIM_CS4GCR1_CSEN(v)   ((__REG_VALUE_TYPE((v), reg32_t) << BP_EIM_CS4GCR1_CSEN) & BM_EIM_CS4GCR1_CSEN)

#ifndef __LANGUAGE_ASM__
//! @brief Set the CSEN field to a new value.
#define BW_EIM_CS4GCR1_CSEN(v)   (HW_EIM_CS4GCR1_WR((HW_EIM_CS4GCR1_RD() & ~BM_EIM_CS4GCR1_CSEN) | BF_EIM_CS4GCR1_CSEN(v)))
#endif


/* --- Register HW_EIM_CS4GCR1, field SWR[1] (RW)
 *
 * Synchronous Write Data. This bit field determine the write accesses mode to the External device
 * of the chip select. The External device should be configured to the same mode as this bit
 * implicates. SWR is cleared by a hardware reset. Sync. accesses supported only for 16/32 bit port.
 *
 * Values:
 * 0 - write accesses are in Asynchronous mode
 * 1 - write accesses are in Synchronous mode
 */

#define BP_EIM_CS4GCR1_SWR      (1)      //!< Bit position for EIM_CS4GCR1_SWR.
#define BM_EIM_CS4GCR1_SWR      (0x00000002)  //!< Bit mask for EIM_CS4GCR1_SWR.

//! @brief Get value of EIM_CS4GCR1_SWR from a register value.
#define BG_EIM_CS4GCR1_SWR(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_EIM_CS4GCR1_SWR) >> BP_EIM_CS4GCR1_SWR)

//! @brief Format value for bitfield EIM_CS4GCR1_SWR.
#define BF_EIM_CS4GCR1_SWR(v)   ((__REG_VALUE_TYPE((v), reg32_t) << BP_EIM_CS4GCR1_SWR) & BM_EIM_CS4GCR1_SWR)

#ifndef __LANGUAGE_ASM__
//! @brief Set the SWR field to a new value.
#define BW_EIM_CS4GCR1_SWR(v)   (HW_EIM_CS4GCR1_WR((HW_EIM_CS4GCR1_RD() & ~BM_EIM_CS4GCR1_SWR) | BF_EIM_CS4GCR1_SWR(v)))
#endif


/* --- Register HW_EIM_CS4GCR1, field SRD[2] (RW)
 *
 * Synchronous Read Data. This bit field determine the read accesses mode to the External device of
 * the chip select. The External device should be configured to the same mode as this bit
 * implicates. SRD is cleared by a hardware reset. Sync. accesses supported only for 16/32 bit port.
 *
 * Values:
 * 0 - read accesses are in Asynchronous mode
 * 1 - read accesses are in Synchronous mode
 */

#define BP_EIM_CS4GCR1_SRD      (2)      //!< Bit position for EIM_CS4GCR1_SRD.
#define BM_EIM_CS4GCR1_SRD      (0x00000004)  //!< Bit mask for EIM_CS4GCR1_SRD.

//! @brief Get value of EIM_CS4GCR1_SRD from a register value.
#define BG_EIM_CS4GCR1_SRD(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_EIM_CS4GCR1_SRD) >> BP_EIM_CS4GCR1_SRD)

//! @brief Format value for bitfield EIM_CS4GCR1_SRD.
#define BF_EIM_CS4GCR1_SRD(v)   ((__REG_VALUE_TYPE((v), reg32_t) << BP_EIM_CS4GCR1_SRD) & BM_EIM_CS4GCR1_SRD)

#ifndef __LANGUAGE_ASM__
//! @brief Set the SRD field to a new value.
#define BW_EIM_CS4GCR1_SRD(v)   (HW_EIM_CS4GCR1_WR((HW_EIM_CS4GCR1_RD() & ~BM_EIM_CS4GCR1_SRD) | BF_EIM_CS4GCR1_SRD(v)))
#endif


/* --- Register HW_EIM_CS4GCR1, field MUM[3] (RW)
 *
 * Multiplexed Mode. This bit determines the address/data multiplexed mode for asynchronous and
 * synchronous accesses for 8 bit, 16 bit or 32 bit devices (DSZ config. dependent). The reset value
 * for EIM_CS0GCR1[MUM] = EIM_BOOT[2]. For EIM_CS1GCR1 - EIM_CS5GCR1 the reset value is 0.
 *
 * Values:
 * 0 - Multiplexed Mode disable
 * 1 - Multiplexed Mode enable
 */

#define BP_EIM_CS4GCR1_MUM      (3)      //!< Bit position for EIM_CS4GCR1_MUM.
#define BM_EIM_CS4GCR1_MUM      (0x00000008)  //!< Bit mask for EIM_CS4GCR1_MUM.

//! @brief Get value of EIM_CS4GCR1_MUM from a register value.
#define BG_EIM_CS4GCR1_MUM(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_EIM_CS4GCR1_MUM) >> BP_EIM_CS4GCR1_MUM)

//! @brief Format value for bitfield EIM_CS4GCR1_MUM.
#define BF_EIM_CS4GCR1_MUM(v)   ((__REG_VALUE_TYPE((v), reg32_t) << BP_EIM_CS4GCR1_MUM) & BM_EIM_CS4GCR1_MUM)

#ifndef __LANGUAGE_ASM__
//! @brief Set the MUM field to a new value.
#define BW_EIM_CS4GCR1_MUM(v)   (HW_EIM_CS4GCR1_WR((HW_EIM_CS4GCR1_RD() & ~BM_EIM_CS4GCR1_MUM) | BF_EIM_CS4GCR1_MUM(v)))
#endif


/* --- Register HW_EIM_CS4GCR1, field WFL[4] (RW)
 *
 * Write Fix Latency. This bit field determine if the controller is monitoring the WAIT signal from
 * the External device connected to the chip select (handshake mode - fix or variable data latency)
 * or if it start data transfer according to WWSC field, it only valid in synchronous mode. WFL is
 * cleared by a hardware reset. When WFL=1 Burst access is terminated on page boundary and resume on
 * the following page according to BL bit field configuration, because WAIT signal is not monitored
 * from the external device
 *
 * Values:
 * 0 - the External device WAIT signal is being monitored, and it reflect the external data bus state
 * 1 - the state of the External devices is determined internally (Fix latency mode only)
 */

#define BP_EIM_CS4GCR1_WFL      (4)      //!< Bit position for EIM_CS4GCR1_WFL.
#define BM_EIM_CS4GCR1_WFL      (0x00000010)  //!< Bit mask for EIM_CS4GCR1_WFL.

//! @brief Get value of EIM_CS4GCR1_WFL from a register value.
#define BG_EIM_CS4GCR1_WFL(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_EIM_CS4GCR1_WFL) >> BP_EIM_CS4GCR1_WFL)

//! @brief Format value for bitfield EIM_CS4GCR1_WFL.
#define BF_EIM_CS4GCR1_WFL(v)   ((__REG_VALUE_TYPE((v), reg32_t) << BP_EIM_CS4GCR1_WFL) & BM_EIM_CS4GCR1_WFL)

#ifndef __LANGUAGE_ASM__
//! @brief Set the WFL field to a new value.
#define BW_EIM_CS4GCR1_WFL(v)   (HW_EIM_CS4GCR1_WR((HW_EIM_CS4GCR1_RD() & ~BM_EIM_CS4GCR1_WFL) | BF_EIM_CS4GCR1_WFL(v)))
#endif


/* --- Register HW_EIM_CS4GCR1, field RFL[5] (RW)
 *
 * Read Fix Latency. This bit field determine if the controller is monitoring the WAIT signal from
 * the External device connected to the chip select (handshake mode - fix or variable data latency)
 * or if it start sampling data according to RWSC field, it only valid in synchronous mode. RFL is
 * cleared by a hardware reset. When RFL=1 Burst access is terminated on page boundary and resume on
 * the following page according to BL bit field configuration, because WAIT signal is not monitored
 * from the external device.
 *
 * Values:
 * 0 - the External device WAIT signal is being monitored, and it reflect the external data bus state
 * 1 - the state of the External devices is determined internally (Fix latency mode only)
 */

#define BP_EIM_CS4GCR1_RFL      (5)      //!< Bit position for EIM_CS4GCR1_RFL.
#define BM_EIM_CS4GCR1_RFL      (0x00000020)  //!< Bit mask for EIM_CS4GCR1_RFL.

//! @brief Get value of EIM_CS4GCR1_RFL from a register value.
#define BG_EIM_CS4GCR1_RFL(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_EIM_CS4GCR1_RFL) >> BP_EIM_CS4GCR1_RFL)

//! @brief Format value for bitfield EIM_CS4GCR1_RFL.
#define BF_EIM_CS4GCR1_RFL(v)   ((__REG_VALUE_TYPE((v), reg32_t) << BP_EIM_CS4GCR1_RFL) & BM_EIM_CS4GCR1_RFL)

#ifndef __LANGUAGE_ASM__
//! @brief Set the RFL field to a new value.
#define BW_EIM_CS4GCR1_RFL(v)   (HW_EIM_CS4GCR1_WR((HW_EIM_CS4GCR1_RD() & ~BM_EIM_CS4GCR1_RFL) | BF_EIM_CS4GCR1_RFL(v)))
#endif


/* --- Register HW_EIM_CS4GCR1, field CRE[6] (RW)
 *
 * Configuration Register Enable. This bit indicates CRE memory pin state while executing a memory
 * register set command to PSRAM external device. CRE is cleared by a hardware reset.
 *
 * Values:
 * 0 - CRE signal use is disable
 * 1 - CRE signal use is enable
 */

#define BP_EIM_CS4GCR1_CRE      (6)      //!< Bit position for EIM_CS4GCR1_CRE.
#define BM_EIM_CS4GCR1_CRE      (0x00000040)  //!< Bit mask for EIM_CS4GCR1_CRE.

//! @brief Get value of EIM_CS4GCR1_CRE from a register value.
#define BG_EIM_CS4GCR1_CRE(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_EIM_CS4GCR1_CRE) >> BP_EIM_CS4GCR1_CRE)

//! @brief Format value for bitfield EIM_CS4GCR1_CRE.
#define BF_EIM_CS4GCR1_CRE(v)   ((__REG_VALUE_TYPE((v), reg32_t) << BP_EIM_CS4GCR1_CRE) & BM_EIM_CS4GCR1_CRE)

#ifndef __LANGUAGE_ASM__
//! @brief Set the CRE field to a new value.
#define BW_EIM_CS4GCR1_CRE(v)   (HW_EIM_CS4GCR1_WR((HW_EIM_CS4GCR1_RD() & ~BM_EIM_CS4GCR1_CRE) | BF_EIM_CS4GCR1_CRE(v)))
#endif


/* --- Register HW_EIM_CS4GCR1, field CREP[7] (RW)
 *
 * Configuration Register Enable Polarity. This bit indicates CRE memory pin assertion state,
 * active-low or active-high, while executing a memory register set command to the external device
 * (PSRAM memory type). CREP is set by a hardware reset. Whenever PSRAM is connected the CREP value
 * must be correct also for accesses where CRE is disabled. For Non-PSRAM memory CREP value should
 * be 1.
 *
 * Values:
 * 0 - CRE signal is active low
 * 1 - CRE signal is active high
 */

#define BP_EIM_CS4GCR1_CREP      (7)      //!< Bit position for EIM_CS4GCR1_CREP.
#define BM_EIM_CS4GCR1_CREP      (0x00000080)  //!< Bit mask for EIM_CS4GCR1_CREP.

//! @brief Get value of EIM_CS4GCR1_CREP from a register value.
#define BG_EIM_CS4GCR1_CREP(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_EIM_CS4GCR1_CREP) >> BP_EIM_CS4GCR1_CREP)

//! @brief Format value for bitfield EIM_CS4GCR1_CREP.
#define BF_EIM_CS4GCR1_CREP(v)   ((__REG_VALUE_TYPE((v), reg32_t) << BP_EIM_CS4GCR1_CREP) & BM_EIM_CS4GCR1_CREP)

#ifndef __LANGUAGE_ASM__
//! @brief Set the CREP field to a new value.
#define BW_EIM_CS4GCR1_CREP(v)   (HW_EIM_CS4GCR1_WR((HW_EIM_CS4GCR1_RD() & ~BM_EIM_CS4GCR1_CREP) | BF_EIM_CS4GCR1_CREP(v)))
#endif


/* --- Register HW_EIM_CS4GCR1, field BL[10:8] (RW)
 *
 * Burst Length. The BL bit field indicates memory burst length in words (word is defined by the DSZ
 * field) and should be properly initialized for mixed wrap/increment accesses support. Continuous
 * BL value corresponds to continuous burst length setting of the external memory device. For fix
 * memory burst size, type is always wrap. In case not matching wrap boundaries in both the memory
 * (BL field) and Master access on the current address, EIM update address on the external device
 * address bus and regenerates the access. BL is cleared by a hardware reset. When APR=1, Page Read
 * Mode is applied, BL determine the number of words within the read page burst. BL is cleared by a
 * hardware reset for EIM_CS0GCR1 - EIM_CS5GCR1.
 *
 * Values:
 * 000 - 4 words Memory wrap burst length (read page burst size when APR = 1)
 * 001 - 8 words Memory wrap burst length (read page burst size when APR = 1)
 * 010 - 16 words Memory wrap burst length (read page burst size when APR = 1)
 * 011 - 32 words Memory wrap burst length (read page burst size when APR = 1)
 * 100 - Continuous burst length (2 words read page burst size when APR = 1)
 * 101 - Reserved
 * 110 - Reserved
 * 111 - Reserved
 */

#define BP_EIM_CS4GCR1_BL      (8)      //!< Bit position for EIM_CS4GCR1_BL.
#define BM_EIM_CS4GCR1_BL      (0x00000700)  //!< Bit mask for EIM_CS4GCR1_BL.

//! @brief Get value of EIM_CS4GCR1_BL from a register value.
#define BG_EIM_CS4GCR1_BL(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_EIM_CS4GCR1_BL) >> BP_EIM_CS4GCR1_BL)

//! @brief Format value for bitfield EIM_CS4GCR1_BL.
#define BF_EIM_CS4GCR1_BL(v)   ((__REG_VALUE_TYPE((v), reg32_t) << BP_EIM_CS4GCR1_BL) & BM_EIM_CS4GCR1_BL)

#ifndef __LANGUAGE_ASM__
//! @brief Set the BL field to a new value.
#define BW_EIM_CS4GCR1_BL(v)   (HW_EIM_CS4GCR1_WR((HW_EIM_CS4GCR1_RD() & ~BM_EIM_CS4GCR1_BL) | BF_EIM_CS4GCR1_BL(v)))
#endif


/* --- Register HW_EIM_CS4GCR1, field WC[11] (RW)
 *
 * Write Continuous. The WI bit indicates that write access to the memory are always continuous
 * accesses regardless of the BL field value. WI is cleared by hardware reset.
 *
 * Values:
 * 0 - Write access burst length occurs according to BL value.
 * 1 - Write access burst length is continuous.
 */

#define BP_EIM_CS4GCR1_WC      (11)      //!< Bit position for EIM_CS4GCR1_WC.
#define BM_EIM_CS4GCR1_WC      (0x00000800)  //!< Bit mask for EIM_CS4GCR1_WC.

//! @brief Get value of EIM_CS4GCR1_WC from a register value.
#define BG_EIM_CS4GCR1_WC(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_EIM_CS4GCR1_WC) >> BP_EIM_CS4GCR1_WC)

//! @brief Format value for bitfield EIM_CS4GCR1_WC.
#define BF_EIM_CS4GCR1_WC(v)   ((__REG_VALUE_TYPE((v), reg32_t) << BP_EIM_CS4GCR1_WC) & BM_EIM_CS4GCR1_WC)

#ifndef __LANGUAGE_ASM__
//! @brief Set the WC field to a new value.
#define BW_EIM_CS4GCR1_WC(v)   (HW_EIM_CS4GCR1_WR((HW_EIM_CS4GCR1_RD() & ~BM_EIM_CS4GCR1_WC) | BF_EIM_CS4GCR1_WC(v)))
#endif


/* --- Register HW_EIM_CS4GCR1, field BCD[13:12] (RW)
 *
 * Burst Clock Divisor. This bit field contains the value used to program the burst clock divisor
 * for BCLK generation. It is used to divide the internal EIMbus frequency. BCD is cleared by a
 * hardware reset. For other then the mentioned below frequency such as 104 MHz, EIM clock (input
 * clock) should be adjust accordingly.
 *
 * Values:
 * 00 - Divide EIM clock by 1
 * 01 - Divide EIM clock by 2
 * 10 - Divide EIM clock by 3
 * 11 - Divide EIM clock by 4
 */

#define BP_EIM_CS4GCR1_BCD      (12)      //!< Bit position for EIM_CS4GCR1_BCD.
#define BM_EIM_CS4GCR1_BCD      (0x00003000)  //!< Bit mask for EIM_CS4GCR1_BCD.

//! @brief Get value of EIM_CS4GCR1_BCD from a register value.
#define BG_EIM_CS4GCR1_BCD(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_EIM_CS4GCR1_BCD) >> BP_EIM_CS4GCR1_BCD)

//! @brief Format value for bitfield EIM_CS4GCR1_BCD.
#define BF_EIM_CS4GCR1_BCD(v)   ((__REG_VALUE_TYPE((v), reg32_t) << BP_EIM_CS4GCR1_BCD) & BM_EIM_CS4GCR1_BCD)

#ifndef __LANGUAGE_ASM__
//! @brief Set the BCD field to a new value.
#define BW_EIM_CS4GCR1_BCD(v)   (HW_EIM_CS4GCR1_WR((HW_EIM_CS4GCR1_RD() & ~BM_EIM_CS4GCR1_BCD) | BF_EIM_CS4GCR1_BCD(v)))
#endif


/* --- Register HW_EIM_CS4GCR1, field BCS[15:14] (RW)
 *
 * Burst Clock Start. When SRD=1 or SWR=1,this bit field determines the number of EIM clock cycles
 * delay from start of access before the first rising edge of BCLK is generated. When BCD=0 value of
 * BCS=0 results in a half clock delay after the start of access. For other values of BCD a one
 * clock delay after the start of access is applied, not an immediate assertion. BCS is cleared by a
 * hardware reset.
 *
 * Values:
 * 00 - 0 EIM clock cycle additional delay
 * 01 - 1 EIM clock cycle additional delay
 * 10 - 2 EIM clock cycle additional delay
 * 11 - 3 EIM clock cycle additional delay
 */

#define BP_EIM_CS4GCR1_BCS      (14)      //!< Bit position for EIM_CS4GCR1_BCS.
#define BM_EIM_CS4GCR1_BCS      (0x0000c000)  //!< Bit mask for EIM_CS4GCR1_BCS.

//! @brief Get value of EIM_CS4GCR1_BCS from a register value.
#define BG_EIM_CS4GCR1_BCS(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_EIM_CS4GCR1_BCS) >> BP_EIM_CS4GCR1_BCS)

//! @brief Format value for bitfield EIM_CS4GCR1_BCS.
#define BF_EIM_CS4GCR1_BCS(v)   ((__REG_VALUE_TYPE((v), reg32_t) << BP_EIM_CS4GCR1_BCS) & BM_EIM_CS4GCR1_BCS)

#ifndef __LANGUAGE_ASM__
//! @brief Set the BCS field to a new value.
#define BW_EIM_CS4GCR1_BCS(v)   (HW_EIM_CS4GCR1_WR((HW_EIM_CS4GCR1_RD() & ~BM_EIM_CS4GCR1_BCS) | BF_EIM_CS4GCR1_BCS(v)))
#endif


/* --- Register HW_EIM_CS4GCR1, field DSZ[18:16] (RW)
 *
 * Data Port Size. This bit field defines the width of an external device's data port as shown
 * below. Only async. access supported for 8 bit port. The reset value for EIM_CS0GCR1, DSZ[2] = 0,
 * DSZ[1:0] = EIM_BOOT[1:0]. For EIM_CS1GCR1 - EIM_CS5GCR1, the reset value is 0b001.
 *
 * Values:
 * 000 - Reserved.
 * 001 - 16 bit port resides on DATA[15:0]
 * 010 - 16 bit port resides on DATA[31:16]
 * 011 - 32 bit port resides on DATA[31:0]
 * 100 - 8 bit port resides on DATA[7:0]
 * 101 - 8 bit port resides on DATA[15:8]
 * 110 - 8 bit port resides on DATA[23:16]
 * 111 - 8 bit port resides on DATA[31:24]
 */

#define BP_EIM_CS4GCR1_DSZ      (16)      //!< Bit position for EIM_CS4GCR1_DSZ.
#define BM_EIM_CS4GCR1_DSZ      (0x00070000)  //!< Bit mask for EIM_CS4GCR1_DSZ.

//! @brief Get value of EIM_CS4GCR1_DSZ from a register value.
#define BG_EIM_CS4GCR1_DSZ(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_EIM_CS4GCR1_DSZ) >> BP_EIM_CS4GCR1_DSZ)

//! @brief Format value for bitfield EIM_CS4GCR1_DSZ.
#define BF_EIM_CS4GCR1_DSZ(v)   ((__REG_VALUE_TYPE((v), reg32_t) << BP_EIM_CS4GCR1_DSZ) & BM_EIM_CS4GCR1_DSZ)

#ifndef __LANGUAGE_ASM__
//! @brief Set the DSZ field to a new value.
#define BW_EIM_CS4GCR1_DSZ(v)   (HW_EIM_CS4GCR1_WR((HW_EIM_CS4GCR1_RD() & ~BM_EIM_CS4GCR1_DSZ) | BF_EIM_CS4GCR1_DSZ(v)))
#endif


/* --- Register HW_EIM_CS4GCR1, field SP[19] (RW)
 *
 * Supervisor Protect. This bit prevents accesses to the address range defined by the corresponding
 * chip select when the access is attempted in the User mode. SP is cleared by a hardware reset.
 *
 * Values:
 * 0 - User mode accesses are allowed in the memory range defined by chip select.
 * 1 - User mode accesses are prohibited. All attempts to access an address mapped by this chip select in
 *     User mode results in an error response and no assertion of the chip select output.
 */

#define BP_EIM_CS4GCR1_SP      (19)      //!< Bit position for EIM_CS4GCR1_SP.
#define BM_EIM_CS4GCR1_SP      (0x00080000)  //!< Bit mask for EIM_CS4GCR1_SP.

//! @brief Get value of EIM_CS4GCR1_SP from a register value.
#define BG_EIM_CS4GCR1_SP(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_EIM_CS4GCR1_SP) >> BP_EIM_CS4GCR1_SP)

//! @brief Format value for bitfield EIM_CS4GCR1_SP.
#define BF_EIM_CS4GCR1_SP(v)   ((__REG_VALUE_TYPE((v), reg32_t) << BP_EIM_CS4GCR1_SP) & BM_EIM_CS4GCR1_SP)

#ifndef __LANGUAGE_ASM__
//! @brief Set the SP field to a new value.
#define BW_EIM_CS4GCR1_SP(v)   (HW_EIM_CS4GCR1_WR((HW_EIM_CS4GCR1_RD() & ~BM_EIM_CS4GCR1_SP) | BF_EIM_CS4GCR1_SP(v)))
#endif


/* --- Register HW_EIM_CS4GCR1, field CSREC[22:20] (RW)
 *
 * CS Recovery. This bit field, according to the settings shown below, determines the minimum pulse
 * width of CS, OE, and WE control signals before executing a new back to back access to the same
 * chip select. CSREC is cleared by a hardware reset. The reset value for EIM_CS0GCR1, CSREC[2:0] is
 * 0b110. For EIM_CS1GCR1 - EIM_CS5GCR, the reset value is 0b000. Example settings:
 *
 * Values:
 * 000 - 0 EIM clock cycles minimum width of CS, OE and WE signals (read async. mode only)
 * 001 - 1 EIM clock cycles minimum width of CS, OE and WE signals
 * 010 - 2 EIM clock cycles minimum width of CS, OE and WE signals
 * 111 - 7 EIM clock cycles minimum width of CS, OE and WE signals
 */

#define BP_EIM_CS4GCR1_CSREC      (20)      //!< Bit position for EIM_CS4GCR1_CSREC.
#define BM_EIM_CS4GCR1_CSREC      (0x00700000)  //!< Bit mask for EIM_CS4GCR1_CSREC.

//! @brief Get value of EIM_CS4GCR1_CSREC from a register value.
#define BG_EIM_CS4GCR1_CSREC(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_EIM_CS4GCR1_CSREC) >> BP_EIM_CS4GCR1_CSREC)

//! @brief Format value for bitfield EIM_CS4GCR1_CSREC.
#define BF_EIM_CS4GCR1_CSREC(v)   ((__REG_VALUE_TYPE((v), reg32_t) << BP_EIM_CS4GCR1_CSREC) & BM_EIM_CS4GCR1_CSREC)

#ifndef __LANGUAGE_ASM__
//! @brief Set the CSREC field to a new value.
#define BW_EIM_CS4GCR1_CSREC(v)   (HW_EIM_CS4GCR1_WR((HW_EIM_CS4GCR1_RD() & ~BM_EIM_CS4GCR1_CSREC) | BF_EIM_CS4GCR1_CSREC(v)))
#endif


/* --- Register HW_EIM_CS4GCR1, field AUS[23] (RW)
 *
 * Address UnShifted. This bit indicates an unshifted mode for address assertion for the relevant
 * chip select accesses. AUS bit is cleared by hardware reset.
 *
 * Values:
 * 0 - Address shifted according to port size (DSZ config.)
 * 1 - Address unshifted
 */

#define BP_EIM_CS4GCR1_AUS      (23)      //!< Bit position for EIM_CS4GCR1_AUS.
#define BM_EIM_CS4GCR1_AUS      (0x00800000)  //!< Bit mask for EIM_CS4GCR1_AUS.

//! @brief Get value of EIM_CS4GCR1_AUS from a register value.
#define BG_EIM_CS4GCR1_AUS(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_EIM_CS4GCR1_AUS) >> BP_EIM_CS4GCR1_AUS)

//! @brief Format value for bitfield EIM_CS4GCR1_AUS.
#define BF_EIM_CS4GCR1_AUS(v)   ((__REG_VALUE_TYPE((v), reg32_t) << BP_EIM_CS4GCR1_AUS) & BM_EIM_CS4GCR1_AUS)

#ifndef __LANGUAGE_ASM__
//! @brief Set the AUS field to a new value.
#define BW_EIM_CS4GCR1_AUS(v)   (HW_EIM_CS4GCR1_WR((HW_EIM_CS4GCR1_RD() & ~BM_EIM_CS4GCR1_AUS) | BF_EIM_CS4GCR1_AUS(v)))
#endif


/* --- Register HW_EIM_CS4GCR1, field GBC[26:24] (RW)
 *
 * Gap Between Chip Selects. This bit field, according to the settings shown below, determines the
 * minimum time between end of access to the current chip select and start of access to different
 * chip select. GBC is cleared by a hardware reset. Example settings:
 *
 * Values:
 * 000 - minimum of 0 EIM clock cycles before next access from different chip select (async. mode only)
 * 001 - minimum of 1 EIM clock cycles before next access from different chip select
 * 010 - minimum of 2 EIM clock cycles before next access from different chip select
 * 111 - minimum of 7 EIM clock cycles before next access from different chip select
 */

#define BP_EIM_CS4GCR1_GBC      (24)      //!< Bit position for EIM_CS4GCR1_GBC.
#define BM_EIM_CS4GCR1_GBC      (0x07000000)  //!< Bit mask for EIM_CS4GCR1_GBC.

//! @brief Get value of EIM_CS4GCR1_GBC from a register value.
#define BG_EIM_CS4GCR1_GBC(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_EIM_CS4GCR1_GBC) >> BP_EIM_CS4GCR1_GBC)

//! @brief Format value for bitfield EIM_CS4GCR1_GBC.
#define BF_EIM_CS4GCR1_GBC(v)   ((__REG_VALUE_TYPE((v), reg32_t) << BP_EIM_CS4GCR1_GBC) & BM_EIM_CS4GCR1_GBC)

#ifndef __LANGUAGE_ASM__
//! @brief Set the GBC field to a new value.
#define BW_EIM_CS4GCR1_GBC(v)   (HW_EIM_CS4GCR1_WR((HW_EIM_CS4GCR1_RD() & ~BM_EIM_CS4GCR1_GBC) | BF_EIM_CS4GCR1_GBC(v)))
#endif


/* --- Register HW_EIM_CS4GCR1, field WP[27] (RW)
 *
 * Write Protect. This bit prevents writes to the address range defined by the corresponding chip
 * select. WP is cleared by a hardware reset.
 *
 * Values:
 * 0 - Writes are allowed in the memory range defined by chip.
 * 1 - Writes are prohibited. All attempts to write to an address mapped by this chip select result in a
 *     error response and no assertion of the chip select output.
 */

#define BP_EIM_CS4GCR1_WP      (27)      //!< Bit position for EIM_CS4GCR1_WP.
#define BM_EIM_CS4GCR1_WP      (0x08000000)  //!< Bit mask for EIM_CS4GCR1_WP.

//! @brief Get value of EIM_CS4GCR1_WP from a register value.
#define BG_EIM_CS4GCR1_WP(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_EIM_CS4GCR1_WP) >> BP_EIM_CS4GCR1_WP)

//! @brief Format value for bitfield EIM_CS4GCR1_WP.
#define BF_EIM_CS4GCR1_WP(v)   ((__REG_VALUE_TYPE((v), reg32_t) << BP_EIM_CS4GCR1_WP) & BM_EIM_CS4GCR1_WP)

#ifndef __LANGUAGE_ASM__
//! @brief Set the WP field to a new value.
#define BW_EIM_CS4GCR1_WP(v)   (HW_EIM_CS4GCR1_WR((HW_EIM_CS4GCR1_RD() & ~BM_EIM_CS4GCR1_WP) | BF_EIM_CS4GCR1_WP(v)))
#endif


/* --- Register HW_EIM_CS4GCR1, field PSZ[31:28] (RW)
 *
 * Page Size. This bit field indicates memory page size in words (word is defined by the DSZ field).
 * PSZ is used when fix latency mode is applied, WFL=1 for sync. write accesses, RFL=1 for sync.
 * Read accesses. When working in fix latency mode WAIT signal from the external device is not being
 * monitored, PSZ is used to determine if page boundary is reached and renewal of access is
 * preformed. This bit field is ignored when sync. Mode is disabled or fix latency mode is not being
 * used for write or read access separately. It can be valid for both access type, read or write, or
 * only for one type, according to configuration. PSZ is cleared by a hardware reset.
 *
 * Values:
 * 0000 - 8 words page size
 * 0001 - 16 words page size
 * 0010 - 32 words page size
 * 0011 - 64 words page size
 * 0100 - 128 words page size
 * 0101 - 256 words page size
 * 0110 - 512 words page size
 * 0111 - 1024 (1k) words page size
 * 1000 - 2048 (2k) words page size
 * 1001 - - 1111 Reserved
 */

#define BP_EIM_CS4GCR1_PSZ      (28)      //!< Bit position for EIM_CS4GCR1_PSZ.
#define BM_EIM_CS4GCR1_PSZ      (0xf0000000)  //!< Bit mask for EIM_CS4GCR1_PSZ.

//! @brief Get value of EIM_CS4GCR1_PSZ from a register value.
#define BG_EIM_CS4GCR1_PSZ(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_EIM_CS4GCR1_PSZ) >> BP_EIM_CS4GCR1_PSZ)

//! @brief Format value for bitfield EIM_CS4GCR1_PSZ.
#define BF_EIM_CS4GCR1_PSZ(v)   ((__REG_VALUE_TYPE((v), reg32_t) << BP_EIM_CS4GCR1_PSZ) & BM_EIM_CS4GCR1_PSZ)

#ifndef __LANGUAGE_ASM__
//! @brief Set the PSZ field to a new value.
#define BW_EIM_CS4GCR1_PSZ(v)   (HW_EIM_CS4GCR1_WR((HW_EIM_CS4GCR1_RD() & ~BM_EIM_CS4GCR1_PSZ) | BF_EIM_CS4GCR1_PSZ(v)))
#endif


//-------------------------------------------------------------------------------------------
// HW_EIM_CS4GCR2 - Chip Select n General Configuration Register 2
//-------------------------------------------------------------------------------------------

#ifndef __LANGUAGE_ASM__
/*!
 * @brief HW_EIM_CS4GCR2 - Chip Select n General Configuration Register 2 (RW)
 *
 * Reset value: 0x00001000
 *

 */
typedef union _hw_eim_cs4gcr2
{
    reg32_t U;
    struct _hw_eim_cs4gcr2_bitfields
    {
        unsigned ADH : 2; //!< [1:0] Address hold time - This bit field determine the address hold time after ADV negation when mum = 1 (muxed mode).
        unsigned RESERVED0 : 2; //!< [3:2] Reserved
        unsigned DAPS : 4; //!< [7:4] Data Acknowledge Poling Start.
        unsigned DAE : 1; //!< [8] Data Acknowledge Enable.
        unsigned DAP : 1; //!< [9] Data Acknowledge Polarity.
        unsigned RESERVED1 : 2; //!< [11:10] Reserved
        unsigned MUX16_BYP_GRANT : 1; //!< [12] Muxed 16 bypass grant.
        unsigned RESERVED2 : 19; //!< [31:13] Reserved
    } B;
} hw_eim_cs4gcr2_t;
#endif

/*
 * constants & macros for entire EIM_CS4GCR2 register
 */
#define HW_EIM_CS4GCR2_ADDR      (REGS_EIM_BASE + 0x64)

#ifndef __LANGUAGE_ASM__
#define HW_EIM_CS4GCR2           (*(volatile hw_eim_cs4gcr2_t *) HW_EIM_CS4GCR2_ADDR)
#define HW_EIM_CS4GCR2_RD()      (HW_EIM_CS4GCR2.U)
#define HW_EIM_CS4GCR2_WR(v)     (HW_EIM_CS4GCR2.U = (v))
#define HW_EIM_CS4GCR2_SET(v)    (HW_EIM_CS4GCR2_WR(HW_EIM_CS4GCR2_RD() |  (v)))
#define HW_EIM_CS4GCR2_CLR(v)    (HW_EIM_CS4GCR2_WR(HW_EIM_CS4GCR2_RD() & ~(v)))
#define HW_EIM_CS4GCR2_TOG(v)    (HW_EIM_CS4GCR2_WR(HW_EIM_CS4GCR2_RD() ^  (v)))
#endif

/*
 * constants & macros for individual EIM_CS4GCR2 bitfields
 */

/* --- Register HW_EIM_CS4GCR2, field ADH[1:0] (RW)
 *
 * Address hold time - This bit field determine the address hold time after ADV negation when mum =
 * 1 (muxed mode). When mum = 0 this bit has no effect. For read accesses the field determines when
 * the pads direction will be switched. Reset value for EIM_CS0GCR2 for ADH is 10. For
 * EIM_CS1GCR2-EIM_CS5GCR2 reset value is 00.
 *
 * Values:
 * 00 - 0 cycle after ADV negation
 * 01 - 1 cycle after ADV negation
 * 10 - 2 cycle after ADV negation
 * 11 - Reserved
 */

#define BP_EIM_CS4GCR2_ADH      (0)      //!< Bit position for EIM_CS4GCR2_ADH.
#define BM_EIM_CS4GCR2_ADH      (0x00000003)  //!< Bit mask for EIM_CS4GCR2_ADH.

//! @brief Get value of EIM_CS4GCR2_ADH from a register value.
#define BG_EIM_CS4GCR2_ADH(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_EIM_CS4GCR2_ADH) >> BP_EIM_CS4GCR2_ADH)

//! @brief Format value for bitfield EIM_CS4GCR2_ADH.
#define BF_EIM_CS4GCR2_ADH(v)   ((__REG_VALUE_TYPE((v), reg32_t) << BP_EIM_CS4GCR2_ADH) & BM_EIM_CS4GCR2_ADH)

#ifndef __LANGUAGE_ASM__
//! @brief Set the ADH field to a new value.
#define BW_EIM_CS4GCR2_ADH(v)   (HW_EIM_CS4GCR2_WR((HW_EIM_CS4GCR2_RD() & ~BM_EIM_CS4GCR2_ADH) | BF_EIM_CS4GCR2_ADH(v)))
#endif


/* --- Register HW_EIM_CS4GCR2, field DAPS[7:4] (RW)
 *
 * Data Acknowledge Poling Start. This bit field determine the starting point of DTACK input signal
 * polling. DAPS is used only in asynchronous single read or write accesses. Since DTACK is an
 * async. signal the start point of DTACK signal polling is at least 3 cycles after the start of
 * access. DAPS is cleared by a hardware reset. Example settings:
 *
 * Values:
 * 0000 - 3 EIM clk cycle between start of access and first DTACK check
 * 0001 - 4 EIM clk cycles between start of access and first DTACK check
 * 0010 - 5 EIM clk cycles between start of access and first DTACK check
 * 0111 - 10 EIM clk cycles between start of access and first DTACK check
 * 1011 - 14 EIM clk cycles between start of access and first DTACK check
 * 1111 - 18 EIM clk cycles between start of access and first DTACK check
 */

#define BP_EIM_CS4GCR2_DAPS      (4)      //!< Bit position for EIM_CS4GCR2_DAPS.
#define BM_EIM_CS4GCR2_DAPS      (0x000000f0)  //!< Bit mask for EIM_CS4GCR2_DAPS.

//! @brief Get value of EIM_CS4GCR2_DAPS from a register value.
#define BG_EIM_CS4GCR2_DAPS(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_EIM_CS4GCR2_DAPS) >> BP_EIM_CS4GCR2_DAPS)

//! @brief Format value for bitfield EIM_CS4GCR2_DAPS.
#define BF_EIM_CS4GCR2_DAPS(v)   ((__REG_VALUE_TYPE((v), reg32_t) << BP_EIM_CS4GCR2_DAPS) & BM_EIM_CS4GCR2_DAPS)

#ifndef __LANGUAGE_ASM__
//! @brief Set the DAPS field to a new value.
#define BW_EIM_CS4GCR2_DAPS(v)   (HW_EIM_CS4GCR2_WR((HW_EIM_CS4GCR2_RD() & ~BM_EIM_CS4GCR2_DAPS) | BF_EIM_CS4GCR2_DAPS(v)))
#endif


/* --- Register HW_EIM_CS4GCR2, field DAE[8] (RW)
 *
 * Data Acknowledge Enable. This bit indicates external device is using DTACK pin as
 * strobe/terminator of an async. access. DTACK signal may be used only in asynchronous single read
 * (APR=0) or write accesses. DTACK poling start point is set by DAPS bit field. polarity of DTACK
 * is set by DAP bit field. DAE is cleared by a hardware reset.
 *
 * Values:
 * 0 - DTACK signal use is disable
 * 1 - DTACK signal use is enable
 */

#define BP_EIM_CS4GCR2_DAE      (8)      //!< Bit position for EIM_CS4GCR2_DAE.
#define BM_EIM_CS4GCR2_DAE      (0x00000100)  //!< Bit mask for EIM_CS4GCR2_DAE.

//! @brief Get value of EIM_CS4GCR2_DAE from a register value.
#define BG_EIM_CS4GCR2_DAE(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_EIM_CS4GCR2_DAE) >> BP_EIM_CS4GCR2_DAE)

//! @brief Format value for bitfield EIM_CS4GCR2_DAE.
#define BF_EIM_CS4GCR2_DAE(v)   ((__REG_VALUE_TYPE((v), reg32_t) << BP_EIM_CS4GCR2_DAE) & BM_EIM_CS4GCR2_DAE)

#ifndef __LANGUAGE_ASM__
//! @brief Set the DAE field to a new value.
#define BW_EIM_CS4GCR2_DAE(v)   (HW_EIM_CS4GCR2_WR((HW_EIM_CS4GCR2_RD() & ~BM_EIM_CS4GCR2_DAE) | BF_EIM_CS4GCR2_DAE(v)))
#endif


/* --- Register HW_EIM_CS4GCR2, field DAP[9] (RW)
 *
 * Data Acknowledge Polarity. This bit indicates DTACK memory pin assertion state, active-low or
 * active-high, while executing an async access using DTACK signal from the external device. DAP is
 * cleared by a hardware reset.
 *
 * Values:
 * 0 - DTACK signal is active high
 * 1 - DTACK signal is active low
 */

#define BP_EIM_CS4GCR2_DAP      (9)      //!< Bit position for EIM_CS4GCR2_DAP.
#define BM_EIM_CS4GCR2_DAP      (0x00000200)  //!< Bit mask for EIM_CS4GCR2_DAP.

//! @brief Get value of EIM_CS4GCR2_DAP from a register value.
#define BG_EIM_CS4GCR2_DAP(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_EIM_CS4GCR2_DAP) >> BP_EIM_CS4GCR2_DAP)

//! @brief Format value for bitfield EIM_CS4GCR2_DAP.
#define BF_EIM_CS4GCR2_DAP(v)   ((__REG_VALUE_TYPE((v), reg32_t) << BP_EIM_CS4GCR2_DAP) & BM_EIM_CS4GCR2_DAP)

#ifndef __LANGUAGE_ASM__
//! @brief Set the DAP field to a new value.
#define BW_EIM_CS4GCR2_DAP(v)   (HW_EIM_CS4GCR2_WR((HW_EIM_CS4GCR2_RD() & ~BM_EIM_CS4GCR2_DAP) | BF_EIM_CS4GCR2_DAP(v)))
#endif


/* --- Register HW_EIM_CS4GCR2, field MUX16_BYP_GRANT[12] (RW)
 *
 * Muxed 16 bypass grant. This bit when asserted causes EIM to bypass the grant/ack. arbitration
 * with NFC (only for 16 bit muxed mode accesses).
 *
 * Values:
 * 0 - EIM waits for grant before driving a 16 bit muxed mode access to the memory.
 * 1 - EIM ignores the grant signal and immediately drives a 16 bit muxed mode access to the memory.
 */

#define BP_EIM_CS4GCR2_MUX16_BYP_GRANT      (12)      //!< Bit position for EIM_CS4GCR2_MUX16_BYP_GRANT.
#define BM_EIM_CS4GCR2_MUX16_BYP_GRANT      (0x00001000)  //!< Bit mask for EIM_CS4GCR2_MUX16_BYP_GRANT.

//! @brief Get value of EIM_CS4GCR2_MUX16_BYP_GRANT from a register value.
#define BG_EIM_CS4GCR2_MUX16_BYP_GRANT(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_EIM_CS4GCR2_MUX16_BYP_GRANT) >> BP_EIM_CS4GCR2_MUX16_BYP_GRANT)

//! @brief Format value for bitfield EIM_CS4GCR2_MUX16_BYP_GRANT.
#define BF_EIM_CS4GCR2_MUX16_BYP_GRANT(v)   ((__REG_VALUE_TYPE((v), reg32_t) << BP_EIM_CS4GCR2_MUX16_BYP_GRANT) & BM_EIM_CS4GCR2_MUX16_BYP_GRANT)

#ifndef __LANGUAGE_ASM__
//! @brief Set the MUX16_BYP_GRANT field to a new value.
#define BW_EIM_CS4GCR2_MUX16_BYP_GRANT(v)   (HW_EIM_CS4GCR2_WR((HW_EIM_CS4GCR2_RD() & ~BM_EIM_CS4GCR2_MUX16_BYP_GRANT) | BF_EIM_CS4GCR2_MUX16_BYP_GRANT(v)))
#endif


//-------------------------------------------------------------------------------------------
// HW_EIM_CS4RCR1 - Chip Select n Read Configuration Register 1
//-------------------------------------------------------------------------------------------

#ifndef __LANGUAGE_ASM__
/*!
 * @brief HW_EIM_CS4RCR1 - Chip Select n Read Configuration Register 1 (RW)
 *
 * Reset value: 0x00000000
 *

 */
typedef union _hw_eim_cs4rcr1
{
    reg32_t U;
    struct _hw_eim_cs4rcr1_bitfields
    {
        unsigned RCSN : 3; //!< [2:0] Read CS Negation.
        unsigned RESERVED0 : 1; //!< [3] Reserved
        unsigned RCSA : 3; //!< [6:4] Read CS Assertion.
        unsigned RESERVED1 : 1; //!< [7] Reserved
        unsigned OEN : 3; //!< [10:8] OE Negation.
        unsigned RESERVED2 : 1; //!< [11] Reserved
        unsigned OEA : 3; //!< [14:12] OE Assertion.
        unsigned RESERVED3 : 1; //!< [15] Reserved
        unsigned RADVN : 3; //!< [18:16] ADV Negation.
        unsigned RAL : 1; //!< [19] Read ADV Low.
        unsigned RADVA : 3; //!< [22:20] ADV Assertion.
        unsigned RESERVED4 : 1; //!< [23] Reserved
        unsigned RWSC : 6; //!< [29:24] Read Wait State Control.
        unsigned RESERVED5 : 2; //!< [31:30] Reserved
    } B;
} hw_eim_cs4rcr1_t;
#endif

/*
 * constants & macros for entire EIM_CS4RCR1 register
 */
#define HW_EIM_CS4RCR1_ADDR      (REGS_EIM_BASE + 0x68)

#ifndef __LANGUAGE_ASM__
#define HW_EIM_CS4RCR1           (*(volatile hw_eim_cs4rcr1_t *) HW_EIM_CS4RCR1_ADDR)
#define HW_EIM_CS4RCR1_RD()      (HW_EIM_CS4RCR1.U)
#define HW_EIM_CS4RCR1_WR(v)     (HW_EIM_CS4RCR1.U = (v))
#define HW_EIM_CS4RCR1_SET(v)    (HW_EIM_CS4RCR1_WR(HW_EIM_CS4RCR1_RD() |  (v)))
#define HW_EIM_CS4RCR1_CLR(v)    (HW_EIM_CS4RCR1_WR(HW_EIM_CS4RCR1_RD() & ~(v)))
#define HW_EIM_CS4RCR1_TOG(v)    (HW_EIM_CS4RCR1_WR(HW_EIM_CS4RCR1_RD() ^  (v)))
#endif

/*
 * constants & macros for individual EIM_CS4RCR1 bitfields
 */

/* --- Register HW_EIM_CS4RCR1, field RCSN[2:0] (RW)
 *
 * Read CS Negation. This bit field determines when CS signal is negated during read cycles in
 * asynchronous single mode only (SRD=0 & APR = 0), according to the settings shown below. This bit
 * field is ignored when SRD=1. RCSN is cleared by a hardware reset. Example settings:
 *
 * Values:
 * 000 - 0 EIM clock cycles between end of read access and CS negation
 * 001 - 1 EIM clock cycles between end of read access and CS negation
 * 010 - 2 EIM clock cycles between end of read access and CS negation
 * 111 - 7 EIM clock cycles between end of read access and CS negation
 */

#define BP_EIM_CS4RCR1_RCSN      (0)      //!< Bit position for EIM_CS4RCR1_RCSN.
#define BM_EIM_CS4RCR1_RCSN      (0x00000007)  //!< Bit mask for EIM_CS4RCR1_RCSN.

//! @brief Get value of EIM_CS4RCR1_RCSN from a register value.
#define BG_EIM_CS4RCR1_RCSN(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_EIM_CS4RCR1_RCSN) >> BP_EIM_CS4RCR1_RCSN)

//! @brief Format value for bitfield EIM_CS4RCR1_RCSN.
#define BF_EIM_CS4RCR1_RCSN(v)   ((__REG_VALUE_TYPE((v), reg32_t) << BP_EIM_CS4RCR1_RCSN) & BM_EIM_CS4RCR1_RCSN)

#ifndef __LANGUAGE_ASM__
//! @brief Set the RCSN field to a new value.
#define BW_EIM_CS4RCR1_RCSN(v)   (HW_EIM_CS4RCR1_WR((HW_EIM_CS4RCR1_RD() & ~BM_EIM_CS4RCR1_RCSN) | BF_EIM_CS4RCR1_RCSN(v)))
#endif


/* --- Register HW_EIM_CS4RCR1, field RCSA[6:4] (RW)
 *
 * Read CS Assertion. This bit field determines when CS signal is asserted during read cycles
 * (synchronous or asynchronous mode), according to the settings shown below. RCSA is cleared by a
 * hardware reset. Example settings:
 *
 * Values:
 * 000 - 0 EIM clock cycles between beginning of read access and CS assertion
 * 001 - 1 EIM clock cycles between beginning of read access and CS assertion
 * 010 - 2 EIM clock cycles between beginning of read access and CS assertion
 * 111 - 7 EIM clock cycles between beginning of read access and CS assertion
 */

#define BP_EIM_CS4RCR1_RCSA      (4)      //!< Bit position for EIM_CS4RCR1_RCSA.
#define BM_EIM_CS4RCR1_RCSA      (0x00000070)  //!< Bit mask for EIM_CS4RCR1_RCSA.

//! @brief Get value of EIM_CS4RCR1_RCSA from a register value.
#define BG_EIM_CS4RCR1_RCSA(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_EIM_CS4RCR1_RCSA) >> BP_EIM_CS4RCR1_RCSA)

//! @brief Format value for bitfield EIM_CS4RCR1_RCSA.
#define BF_EIM_CS4RCR1_RCSA(v)   ((__REG_VALUE_TYPE((v), reg32_t) << BP_EIM_CS4RCR1_RCSA) & BM_EIM_CS4RCR1_RCSA)

#ifndef __LANGUAGE_ASM__
//! @brief Set the RCSA field to a new value.
#define BW_EIM_CS4RCR1_RCSA(v)   (HW_EIM_CS4RCR1_WR((HW_EIM_CS4RCR1_RD() & ~BM_EIM_CS4RCR1_RCSA) | BF_EIM_CS4RCR1_RCSA(v)))
#endif


/* --- Register HW_EIM_CS4RCR1, field OEN[10:8] (RW)
 *
 * OE Negation. This bit field determines when OE signal is negated during read cycles in
 * asynchronous single mode only (SRD=0 & APR = 0), according to the settings shown below. This bit
 * field is ignored when SRD=1. OEN is cleared by a hardware reset. Example settings:
 *
 * Values:
 * 000 - 0 EIM clock cycles between end of access and OE negation
 * 001 - 1 EIM clock cycles between end of access and OE negation
 * 010 - 2 EIM clock cycles between end of access and OE negation
 * 111 - 7 EIM clock cycles between end of access and OE negation
 */

#define BP_EIM_CS4RCR1_OEN      (8)      //!< Bit position for EIM_CS4RCR1_OEN.
#define BM_EIM_CS4RCR1_OEN      (0x00000700)  //!< Bit mask for EIM_CS4RCR1_OEN.

//! @brief Get value of EIM_CS4RCR1_OEN from a register value.
#define BG_EIM_CS4RCR1_OEN(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_EIM_CS4RCR1_OEN) >> BP_EIM_CS4RCR1_OEN)

//! @brief Format value for bitfield EIM_CS4RCR1_OEN.
#define BF_EIM_CS4RCR1_OEN(v)   ((__REG_VALUE_TYPE((v), reg32_t) << BP_EIM_CS4RCR1_OEN) & BM_EIM_CS4RCR1_OEN)

#ifndef __LANGUAGE_ASM__
//! @brief Set the OEN field to a new value.
#define BW_EIM_CS4RCR1_OEN(v)   (HW_EIM_CS4RCR1_WR((HW_EIM_CS4RCR1_RD() & ~BM_EIM_CS4RCR1_OEN) | BF_EIM_CS4RCR1_OEN(v)))
#endif


/* --- Register HW_EIM_CS4RCR1, field OEA[14:12] (RW)
 *
 * OE Assertion. This bit field determines when OE signal are asserted during read cycles
 * (synchronous or asynchronous mode), according to the settings shown below. OEA is cleared by a
 * hardware reset. In muxed mode OE assertion occurs (OEA + RADVN + RADVA + ADH +1) EIM clock cycles
 * from start of access. The reset value for EIM_CS0RCR1[OEA] is 0b000 if EIM_BOOT[2] = 0. If
 * EIM_BOOT[2] is 1, the reset value for EIM_CS0RCR1 is 0b010. The reset value of this field for
 * EIM_CS1RCR1 - EIM_CS5RCR1 is 0b000. Example settings:
 *
 * Values:
 * 000 - 0 EIM clock cycles between beginning of access and OE assertion
 * 001 - 1 EIM clock cycles between beginning of access and OE assertion
 * 010 - 2 EIM clock cycles between beginning of access and OE assertion
 * 111 - 7 EIM clock cycles between beginning of access and OE assertion
 */

#define BP_EIM_CS4RCR1_OEA      (12)      //!< Bit position for EIM_CS4RCR1_OEA.
#define BM_EIM_CS4RCR1_OEA      (0x00007000)  //!< Bit mask for EIM_CS4RCR1_OEA.

//! @brief Get value of EIM_CS4RCR1_OEA from a register value.
#define BG_EIM_CS4RCR1_OEA(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_EIM_CS4RCR1_OEA) >> BP_EIM_CS4RCR1_OEA)

//! @brief Format value for bitfield EIM_CS4RCR1_OEA.
#define BF_EIM_CS4RCR1_OEA(v)   ((__REG_VALUE_TYPE((v), reg32_t) << BP_EIM_CS4RCR1_OEA) & BM_EIM_CS4RCR1_OEA)

#ifndef __LANGUAGE_ASM__
//! @brief Set the OEA field to a new value.
#define BW_EIM_CS4RCR1_OEA(v)   (HW_EIM_CS4RCR1_WR((HW_EIM_CS4RCR1_RD() & ~BM_EIM_CS4RCR1_OEA) | BF_EIM_CS4RCR1_OEA(v)))
#endif


/* --- Register HW_EIM_CS4RCR1, field RADVN[18:16] (RW)
 *
 * ADV Negation. This bit field determines when ADV signal to memory is negated during read
 * accesses. When SRD=1 (synchronous read mode), ADV negation occurs according to the following
 * formula: (RADVN + RADVA + BCD + BCS + 1) EIM clock cycles from start of access. When asynchronous
 * read mode is applied (SRD=0) and RAL=0 ADV negation occurs according to the following formula:
 * (RADVN + RADVA + 1) EIM clock cycles from start of access. RADVN is cleared by a hardware reset.
 * the reset value for EIM_CS0RCR1[RADVN] = 2. For EIM_CS1RCR1 - EIM_CS5RCR1, the reset value is
 * 0b000. This field should be configured so ADV negation will occur before the end of access. For
 * ADV negation at the same time with the end of access user should RAL bit.
 */

#define BP_EIM_CS4RCR1_RADVN      (16)      //!< Bit position for EIM_CS4RCR1_RADVN.
#define BM_EIM_CS4RCR1_RADVN      (0x00070000)  //!< Bit mask for EIM_CS4RCR1_RADVN.

//! @brief Get value of EIM_CS4RCR1_RADVN from a register value.
#define BG_EIM_CS4RCR1_RADVN(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_EIM_CS4RCR1_RADVN) >> BP_EIM_CS4RCR1_RADVN)

//! @brief Format value for bitfield EIM_CS4RCR1_RADVN.
#define BF_EIM_CS4RCR1_RADVN(v)   ((__REG_VALUE_TYPE((v), reg32_t) << BP_EIM_CS4RCR1_RADVN) & BM_EIM_CS4RCR1_RADVN)

#ifndef __LANGUAGE_ASM__
//! @brief Set the RADVN field to a new value.
#define BW_EIM_CS4RCR1_RADVN(v)   (HW_EIM_CS4RCR1_WR((HW_EIM_CS4RCR1_RD() & ~BM_EIM_CS4RCR1_RADVN) | BF_EIM_CS4RCR1_RADVN(v)))
#endif

/* --- Register HW_EIM_CS4RCR1, field RAL[19] (RW)
 *
 * Read ADV Low. This bit field determine ADV signal negation time. When RAL=1, RADVN bit field is
 * ignored and ADV signal will stay asserted until end of access. When RAL=0 negation of ADV signal
 * is according to RADVN bit field configuration.
 */

#define BP_EIM_CS4RCR1_RAL      (19)      //!< Bit position for EIM_CS4RCR1_RAL.
#define BM_EIM_CS4RCR1_RAL      (0x00080000)  //!< Bit mask for EIM_CS4RCR1_RAL.

//! @brief Get value of EIM_CS4RCR1_RAL from a register value.
#define BG_EIM_CS4RCR1_RAL(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_EIM_CS4RCR1_RAL) >> BP_EIM_CS4RCR1_RAL)

//! @brief Format value for bitfield EIM_CS4RCR1_RAL.
#define BF_EIM_CS4RCR1_RAL(v)   ((__REG_VALUE_TYPE((v), reg32_t) << BP_EIM_CS4RCR1_RAL) & BM_EIM_CS4RCR1_RAL)

#ifndef __LANGUAGE_ASM__
//! @brief Set the RAL field to a new value.
#define BW_EIM_CS4RCR1_RAL(v)   (HW_EIM_CS4RCR1_WR((HW_EIM_CS4RCR1_RD() & ~BM_EIM_CS4RCR1_RAL) | BF_EIM_CS4RCR1_RAL(v)))
#endif

/* --- Register HW_EIM_CS4RCR1, field RADVA[22:20] (RW)
 *
 * ADV Assertion. This bit field determines when ADV signal is asserted for synchronous or
 * asynchronous read modes according to the settings shown below. RADVA is cleared by a hardware
 * reset. Example settings:
 *
 * Values:
 * 000 - 0 EIM clock cycles between beginning of access and ADV assertion
 * 001 - 1 EIM clock cycles between beginning of access and ADV assertion
 * 010 - 2 EIM clock cycles between beginning of access and ADV assertion
 * 111 - 7 EIM clock cycles between beginning of access and ADV assertion
 */

#define BP_EIM_CS4RCR1_RADVA      (20)      //!< Bit position for EIM_CS4RCR1_RADVA.
#define BM_EIM_CS4RCR1_RADVA      (0x00700000)  //!< Bit mask for EIM_CS4RCR1_RADVA.

//! @brief Get value of EIM_CS4RCR1_RADVA from a register value.
#define BG_EIM_CS4RCR1_RADVA(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_EIM_CS4RCR1_RADVA) >> BP_EIM_CS4RCR1_RADVA)

//! @brief Format value for bitfield EIM_CS4RCR1_RADVA.
#define BF_EIM_CS4RCR1_RADVA(v)   ((__REG_VALUE_TYPE((v), reg32_t) << BP_EIM_CS4RCR1_RADVA) & BM_EIM_CS4RCR1_RADVA)

#ifndef __LANGUAGE_ASM__
//! @brief Set the RADVA field to a new value.
#define BW_EIM_CS4RCR1_RADVA(v)   (HW_EIM_CS4RCR1_WR((HW_EIM_CS4RCR1_RD() & ~BM_EIM_CS4RCR1_RADVA) | BF_EIM_CS4RCR1_RADVA(v)))
#endif


/* --- Register HW_EIM_CS4RCR1, field RWSC[29:24] (RW)
 *
 * Read Wait State Control. This bit field programs the number of wait-states, according to the
 * settings shown below, for synchronous or asynchronous read access to the external device
 * connected to the chip select. When SRD=1 and RFL=0, RWSC indicates the number of burst clock
 * (BCLK) cycles from the start of an access, before the controller can start sample data.Since WAIT
 * signal can be asserted one cycle before the first data can be sampled, the controller starts
 * evaluating the WAIT signal state one cycle before, this is referred as handshake mode or variable
 * latency mode. When SRD=1 and RFL=1, RWSC indicates the number of burst clock (BCLK) cycles from
 * the start of an access, until the external device is ready for data transfer, this is referred as
 * fix latency mode. When SRD=0, RFL bit is ignored, RWSC indicates the asynchronous access length
 * and the number of EIM clock cycles from the start of access until the external device is ready
 * for data transfer. RWSC is cleared by a hardware reset. The reset value for EIM_CS0RCR1,
 * RWSC[5:0] = 0b011100. For CG1RCR1 - CS1RCR5 the reset value is 0b000000. Example settings:
 *
 * Values:
 * 000000 - Reserved
 * 000001 - RWSC value is 1
 * 000010 - RWSC value is 2
 * 111101 - RWSC value is 61
 * 111110 - RWSC value is 62
 * 111111 - RWSC value is 63
 */

#define BP_EIM_CS4RCR1_RWSC      (24)      //!< Bit position for EIM_CS4RCR1_RWSC.
#define BM_EIM_CS4RCR1_RWSC      (0x3f000000)  //!< Bit mask for EIM_CS4RCR1_RWSC.

//! @brief Get value of EIM_CS4RCR1_RWSC from a register value.
#define BG_EIM_CS4RCR1_RWSC(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_EIM_CS4RCR1_RWSC) >> BP_EIM_CS4RCR1_RWSC)

//! @brief Format value for bitfield EIM_CS4RCR1_RWSC.
#define BF_EIM_CS4RCR1_RWSC(v)   ((__REG_VALUE_TYPE((v), reg32_t) << BP_EIM_CS4RCR1_RWSC) & BM_EIM_CS4RCR1_RWSC)

#ifndef __LANGUAGE_ASM__
//! @brief Set the RWSC field to a new value.
#define BW_EIM_CS4RCR1_RWSC(v)   (HW_EIM_CS4RCR1_WR((HW_EIM_CS4RCR1_RD() & ~BM_EIM_CS4RCR1_RWSC) | BF_EIM_CS4RCR1_RWSC(v)))
#endif


//-------------------------------------------------------------------------------------------
// HW_EIM_CS4RCR2 - Chip Select n Read Configuration Register 2
//-------------------------------------------------------------------------------------------

#ifndef __LANGUAGE_ASM__
/*!
 * @brief HW_EIM_CS4RCR2 - Chip Select n Read Configuration Register 2 (RW)
 *
 * Reset value: 0x00000000
 *

 */
typedef union _hw_eim_cs4rcr2
{
    reg32_t U;
    struct _hw_eim_cs4rcr2_bitfields
    {
        unsigned RBEN : 3; //!< [2:0] Read BE Negation.
        unsigned RBE : 1; //!< [3] Read BE enable.
        unsigned RBEA : 3; //!< [6:4] Read BE Assertion.
        unsigned RESERVED0 : 1; //!< [7] Reserved
        unsigned RL : 2; //!< [9:8] Read Latency.
        unsigned RESERVED1 : 2; //!< [11:10] Reserved
        unsigned PAT : 3; //!< [14:12] Page Access Time.
        unsigned APR : 1; //!< [15] Asynchronous Page Read.
        unsigned RESERVED2 : 16; //!< [31:16] Reserved
    } B;
} hw_eim_cs4rcr2_t;
#endif

/*
 * constants & macros for entire EIM_CS4RCR2 register
 */
#define HW_EIM_CS4RCR2_ADDR      (REGS_EIM_BASE + 0x6c)

#ifndef __LANGUAGE_ASM__
#define HW_EIM_CS4RCR2           (*(volatile hw_eim_cs4rcr2_t *) HW_EIM_CS4RCR2_ADDR)
#define HW_EIM_CS4RCR2_RD()      (HW_EIM_CS4RCR2.U)
#define HW_EIM_CS4RCR2_WR(v)     (HW_EIM_CS4RCR2.U = (v))
#define HW_EIM_CS4RCR2_SET(v)    (HW_EIM_CS4RCR2_WR(HW_EIM_CS4RCR2_RD() |  (v)))
#define HW_EIM_CS4RCR2_CLR(v)    (HW_EIM_CS4RCR2_WR(HW_EIM_CS4RCR2_RD() & ~(v)))
#define HW_EIM_CS4RCR2_TOG(v)    (HW_EIM_CS4RCR2_WR(HW_EIM_CS4RCR2_RD() ^  (v)))
#endif

/*
 * constants & macros for individual EIM_CS4RCR2 bitfields
 */

/* --- Register HW_EIM_CS4RCR2, field RBEN[2:0] (RW)
 *
 * Read BE Negation. This bit field determines when BE signal is negated during read cycles in
 * asynchronous single mode only (SRD=0 & APR=0), according to the settings shown below. This bit
 * field is ignored when SRD=1. RBEN is cleared by a hardware reset. Example settings:
 *
 * Values:
 * 000 - 0 EIM clock cycles between end of read access and BE negation
 * 001 - 1 EIM clock cycles between end of read access and BE negation
 * 010 - 2 EIM clock cycles between end of read access and BE negation
 * 111 - 7 EIM clock cycles between end of read access and BE negation
 */

#define BP_EIM_CS4RCR2_RBEN      (0)      //!< Bit position for EIM_CS4RCR2_RBEN.
#define BM_EIM_CS4RCR2_RBEN      (0x00000007)  //!< Bit mask for EIM_CS4RCR2_RBEN.

//! @brief Get value of EIM_CS4RCR2_RBEN from a register value.
#define BG_EIM_CS4RCR2_RBEN(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_EIM_CS4RCR2_RBEN) >> BP_EIM_CS4RCR2_RBEN)

//! @brief Format value for bitfield EIM_CS4RCR2_RBEN.
#define BF_EIM_CS4RCR2_RBEN(v)   ((__REG_VALUE_TYPE((v), reg32_t) << BP_EIM_CS4RCR2_RBEN) & BM_EIM_CS4RCR2_RBEN)

#ifndef __LANGUAGE_ASM__
//! @brief Set the RBEN field to a new value.
#define BW_EIM_CS4RCR2_RBEN(v)   (HW_EIM_CS4RCR2_WR((HW_EIM_CS4RCR2_RD() & ~BM_EIM_CS4RCR2_RBEN) | BF_EIM_CS4RCR2_RBEN(v)))
#endif


/* --- Register HW_EIM_CS4RCR2, field RBE[3] (RW)
 *
 * Read BE enable. This bit field determines if BE will be asserted during read access.
 *
 * Values:
 * 0 - - BE are disabled during read access.
 * 1- - BE are enable during read access according to value of RBEA & RBEN bit fields.
 */

#define BP_EIM_CS4RCR2_RBE      (3)      //!< Bit position for EIM_CS4RCR2_RBE.
#define BM_EIM_CS4RCR2_RBE      (0x00000008)  //!< Bit mask for EIM_CS4RCR2_RBE.

//! @brief Get value of EIM_CS4RCR2_RBE from a register value.
#define BG_EIM_CS4RCR2_RBE(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_EIM_CS4RCR2_RBE) >> BP_EIM_CS4RCR2_RBE)

//! @brief Format value for bitfield EIM_CS4RCR2_RBE.
#define BF_EIM_CS4RCR2_RBE(v)   ((__REG_VALUE_TYPE((v), reg32_t) << BP_EIM_CS4RCR2_RBE) & BM_EIM_CS4RCR2_RBE)

#ifndef __LANGUAGE_ASM__
//! @brief Set the RBE field to a new value.
#define BW_EIM_CS4RCR2_RBE(v)   (HW_EIM_CS4RCR2_WR((HW_EIM_CS4RCR2_RD() & ~BM_EIM_CS4RCR2_RBE) | BF_EIM_CS4RCR2_RBE(v)))
#endif


/* --- Register HW_EIM_CS4RCR2, field RBEA[6:4] (RW)
 *
 * Read BE Assertion. This bit field determines when BE signal is asserted during read cycles
 * (synchronous or asynchronous mode), according to the settings shown below. RBEA is cleared by a
 * hardware reset. Example settings:
 *
 * Values:
 * 000 - 0 EIM clock cycles between beginning of read access and BE assertion
 * 001 - 1 EIM clock cycles between beginning of read access and BE assertion
 * 010 - 2 EIM clock cycles between beginning of read access and BE assertion
 * 111 - 7 EIM clock cycles between beginning of read access and BE assertion
 */

#define BP_EIM_CS4RCR2_RBEA      (4)      //!< Bit position for EIM_CS4RCR2_RBEA.
#define BM_EIM_CS4RCR2_RBEA      (0x00000070)  //!< Bit mask for EIM_CS4RCR2_RBEA.

//! @brief Get value of EIM_CS4RCR2_RBEA from a register value.
#define BG_EIM_CS4RCR2_RBEA(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_EIM_CS4RCR2_RBEA) >> BP_EIM_CS4RCR2_RBEA)

//! @brief Format value for bitfield EIM_CS4RCR2_RBEA.
#define BF_EIM_CS4RCR2_RBEA(v)   ((__REG_VALUE_TYPE((v), reg32_t) << BP_EIM_CS4RCR2_RBEA) & BM_EIM_CS4RCR2_RBEA)

#ifndef __LANGUAGE_ASM__
//! @brief Set the RBEA field to a new value.
#define BW_EIM_CS4RCR2_RBEA(v)   (HW_EIM_CS4RCR2_WR((HW_EIM_CS4RCR2_RD() & ~BM_EIM_CS4RCR2_RBEA) | BF_EIM_CS4RCR2_RBEA(v)))
#endif


/* --- Register HW_EIM_CS4RCR2, field RL[9:8] (RW)
 *
 * Read Latency. This bit field indicates cycle latency when executing a synchronous read operation.
 * The fields holds the feedback clock loop delay in aclk cycle units. This field is cleared by a
 * hardware reset.
 *
 * Values:
 * 00 - Feedback clock loop delay is up to 1 cycle for BCD = 0 or 1.5 cycles for BCD != 0
 * 01 - Feedback clock loop delay is up to 2 cycles for BCD = 0 or 2.5 cycles for BCD != 0
 * 10 - Feedback clock loop delay is up to 3 cycles for BCD = 0 or 3.5 cycles for BCD != 0
 * 11 - Feedback clock loop delay is up to 4 cycles for BCD = 0 or 4.5 cycles for BCD != 0
 */

#define BP_EIM_CS4RCR2_RL      (8)      //!< Bit position for EIM_CS4RCR2_RL.
#define BM_EIM_CS4RCR2_RL      (0x00000300)  //!< Bit mask for EIM_CS4RCR2_RL.

//! @brief Get value of EIM_CS4RCR2_RL from a register value.
#define BG_EIM_CS4RCR2_RL(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_EIM_CS4RCR2_RL) >> BP_EIM_CS4RCR2_RL)

//! @brief Format value for bitfield EIM_CS4RCR2_RL.
#define BF_EIM_CS4RCR2_RL(v)   ((__REG_VALUE_TYPE((v), reg32_t) << BP_EIM_CS4RCR2_RL) & BM_EIM_CS4RCR2_RL)

#ifndef __LANGUAGE_ASM__
//! @brief Set the RL field to a new value.
#define BW_EIM_CS4RCR2_RL(v)   (HW_EIM_CS4RCR2_WR((HW_EIM_CS4RCR2_RD() & ~BM_EIM_CS4RCR2_RL) | BF_EIM_CS4RCR2_RL(v)))
#endif


/* --- Register HW_EIM_CS4RCR2, field PAT[14:12] (RW)
 *
 * Page Access Time. This bit field is used in Asynchronous Page Read mode only (APR=1). the initial
 * access is set by RWSC as in regular asynchronous mode. the consecutive address assertions width
 * determine by PAT field according to the settings shown below. when APR=0 this field is ignored.
 * PAT is cleared by a hardware reset for EIM_CS1GCR1 - EIM_CS5GCR1.
 *
 * Values:
 * 000 - Address width is 2 EIM clock cycles
 * 001 - Address width is 3 EIM clock cycles
 * 010 - Address width is 4 EIM clock cycles
 * 011 - Address width is 5 EIM clock cycles
 * 100 - Address width is 6 EIM clock cycles
 * 101 - Address width is 7 EIM clock cycles
 * 110 - Address width is 8 EIM clock cycles
 * 111 - Address width is 9 EIM clock cycles
 */

#define BP_EIM_CS4RCR2_PAT      (12)      //!< Bit position for EIM_CS4RCR2_PAT.
#define BM_EIM_CS4RCR2_PAT      (0x00007000)  //!< Bit mask for EIM_CS4RCR2_PAT.

//! @brief Get value of EIM_CS4RCR2_PAT from a register value.
#define BG_EIM_CS4RCR2_PAT(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_EIM_CS4RCR2_PAT) >> BP_EIM_CS4RCR2_PAT)

//! @brief Format value for bitfield EIM_CS4RCR2_PAT.
#define BF_EIM_CS4RCR2_PAT(v)   ((__REG_VALUE_TYPE((v), reg32_t) << BP_EIM_CS4RCR2_PAT) & BM_EIM_CS4RCR2_PAT)

#ifndef __LANGUAGE_ASM__
//! @brief Set the PAT field to a new value.
#define BW_EIM_CS4RCR2_PAT(v)   (HW_EIM_CS4RCR2_WR((HW_EIM_CS4RCR2_RD() & ~BM_EIM_CS4RCR2_PAT) | BF_EIM_CS4RCR2_PAT(v)))
#endif


/* --- Register HW_EIM_CS4RCR2, field APR[15] (RW)
 *
 * Asynchronous Page Read. This bit field determine the asynchronous read mode to the external
 * device. When APR=0, the async. read access is done as single word (where word is defined by the
 * DSZ field). when APR=1, the async. read access executed as page read. page size is according to
 * BL field config., RCSN,RBEN,OEN and RADVN are being ignored. APR is cleared by a hardware reset
 * for EIM_CS1GCR1 - EIM_CS5GCR1. SRD=0 and MUM=0 must apply when APR=1
 */

#define BP_EIM_CS4RCR2_APR      (15)      //!< Bit position for EIM_CS4RCR2_APR.
#define BM_EIM_CS4RCR2_APR      (0x00008000)  //!< Bit mask for EIM_CS4RCR2_APR.

//! @brief Get value of EIM_CS4RCR2_APR from a register value.
#define BG_EIM_CS4RCR2_APR(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_EIM_CS4RCR2_APR) >> BP_EIM_CS4RCR2_APR)

//! @brief Format value for bitfield EIM_CS4RCR2_APR.
#define BF_EIM_CS4RCR2_APR(v)   ((__REG_VALUE_TYPE((v), reg32_t) << BP_EIM_CS4RCR2_APR) & BM_EIM_CS4RCR2_APR)

#ifndef __LANGUAGE_ASM__
//! @brief Set the APR field to a new value.
#define BW_EIM_CS4RCR2_APR(v)   (HW_EIM_CS4RCR2_WR((HW_EIM_CS4RCR2_RD() & ~BM_EIM_CS4RCR2_APR) | BF_EIM_CS4RCR2_APR(v)))
#endif

//-------------------------------------------------------------------------------------------
// HW_EIM_CS4WCR1 - Chip Select n Write Configuration Register 1
//-------------------------------------------------------------------------------------------

#ifndef __LANGUAGE_ASM__
/*!
 * @brief HW_EIM_CS4WCR1 - Chip Select n Write Configuration Register 1 (RW)
 *
 * Reset value: 0x00000000
 *

 */
typedef union _hw_eim_cs4wcr1
{
    reg32_t U;
    struct _hw_eim_cs4wcr1_bitfields
    {
        unsigned WCSN : 3; //!< [2:0] Write CS Negation.
        unsigned WCSA : 3; //!< [5:3] Write CS Assertion.
        unsigned WEN : 3; //!< [8:6] WE Negation.
        unsigned WEA : 3; //!< [11:9] WE Assertion.
        unsigned WBEN : 3; //!< [14:12] BE[3:0] Negation.
        unsigned WBEA : 3; //!< [17:15] BE Assertion.
        unsigned WADVN : 3; //!< [20:18] ADV Negation.
        unsigned WADVA : 3; //!< [23:21] ADV Assertion.
        unsigned WWSC : 6; //!< [29:24] Write Wait State Control.
        unsigned WBED : 1; //!< [30] Write Byte Enable Disable.
        unsigned WAL : 1; //!< [31] Write ADV Low.
    } B;
} hw_eim_cs4wcr1_t;
#endif

/*
 * constants & macros for entire EIM_CS4WCR1 register
 */
#define HW_EIM_CS4WCR1_ADDR      (REGS_EIM_BASE + 0x70)

#ifndef __LANGUAGE_ASM__
#define HW_EIM_CS4WCR1           (*(volatile hw_eim_cs4wcr1_t *) HW_EIM_CS4WCR1_ADDR)
#define HW_EIM_CS4WCR1_RD()      (HW_EIM_CS4WCR1.U)
#define HW_EIM_CS4WCR1_WR(v)     (HW_EIM_CS4WCR1.U = (v))
#define HW_EIM_CS4WCR1_SET(v)    (HW_EIM_CS4WCR1_WR(HW_EIM_CS4WCR1_RD() |  (v)))
#define HW_EIM_CS4WCR1_CLR(v)    (HW_EIM_CS4WCR1_WR(HW_EIM_CS4WCR1_RD() & ~(v)))
#define HW_EIM_CS4WCR1_TOG(v)    (HW_EIM_CS4WCR1_WR(HW_EIM_CS4WCR1_RD() ^  (v)))
#endif

/*
 * constants & macros for individual EIM_CS4WCR1 bitfields
 */

/* --- Register HW_EIM_CS4WCR1, field WCSN[2:0] (RW)
 *
 * Write CS Negation. This bit field determines when CS signal is negated during write cycles in
 * asynchronous mode only (SWR=0), according to the settings shown below. This bit field is ignored
 * when SWR=1. WCSN is cleared by a hardware reset. Example settings:
 *
 * Values:
 * 000 - 0 EIM clock cycles between end of read access and CS negation
 * 001 - 1 EIM clock cycles between end of read access and CS negation
 * 010 - 2 EIM clock cycles between end of read access and CS negation
 * 111 - 7 EIM clock cycles between end of read access and CS negation
 */

#define BP_EIM_CS4WCR1_WCSN      (0)      //!< Bit position for EIM_CS4WCR1_WCSN.
#define BM_EIM_CS4WCR1_WCSN      (0x00000007)  //!< Bit mask for EIM_CS4WCR1_WCSN.

//! @brief Get value of EIM_CS4WCR1_WCSN from a register value.
#define BG_EIM_CS4WCR1_WCSN(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_EIM_CS4WCR1_WCSN) >> BP_EIM_CS4WCR1_WCSN)

//! @brief Format value for bitfield EIM_CS4WCR1_WCSN.
#define BF_EIM_CS4WCR1_WCSN(v)   ((__REG_VALUE_TYPE((v), reg32_t) << BP_EIM_CS4WCR1_WCSN) & BM_EIM_CS4WCR1_WCSN)

#ifndef __LANGUAGE_ASM__
//! @brief Set the WCSN field to a new value.
#define BW_EIM_CS4WCR1_WCSN(v)   (HW_EIM_CS4WCR1_WR((HW_EIM_CS4WCR1_RD() & ~BM_EIM_CS4WCR1_WCSN) | BF_EIM_CS4WCR1_WCSN(v)))
#endif


/* --- Register HW_EIM_CS4WCR1, field WCSA[5:3] (RW)
 *
 * Write CS Assertion. This bit field determines when CS signal is asserted during write cycles
 * (synchronous or asynchronous mode), according to the settings shown below.this bit field is
 * ignored when executing a read access to the external device. WCSA is cleared by a hardware reset.
 * Example settings:
 *
 * Values:
 * 000 - 0 EIM clock cycles between beginning of write access and CS assertion
 * 001 - 1 EIM clock cycles between beginning of write access and CS assertion
 * 010 - 2 EIM clock cycles between beginning of write access and CS assertion
 * 111 - 7 EIMclock cycles between beginning of write access and CS assertion
 */

#define BP_EIM_CS4WCR1_WCSA      (3)      //!< Bit position for EIM_CS4WCR1_WCSA.
#define BM_EIM_CS4WCR1_WCSA      (0x00000038)  //!< Bit mask for EIM_CS4WCR1_WCSA.

//! @brief Get value of EIM_CS4WCR1_WCSA from a register value.
#define BG_EIM_CS4WCR1_WCSA(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_EIM_CS4WCR1_WCSA) >> BP_EIM_CS4WCR1_WCSA)

//! @brief Format value for bitfield EIM_CS4WCR1_WCSA.
#define BF_EIM_CS4WCR1_WCSA(v)   ((__REG_VALUE_TYPE((v), reg32_t) << BP_EIM_CS4WCR1_WCSA) & BM_EIM_CS4WCR1_WCSA)

#ifndef __LANGUAGE_ASM__
//! @brief Set the WCSA field to a new value.
#define BW_EIM_CS4WCR1_WCSA(v)   (HW_EIM_CS4WCR1_WR((HW_EIM_CS4WCR1_RD() & ~BM_EIM_CS4WCR1_WCSA) | BF_EIM_CS4WCR1_WCSA(v)))
#endif


/* --- Register HW_EIM_CS4WCR1, field WEN[8:6] (RW)
 *
 * WE Negation. This bit field determines when WE signal is negated during write cycles in
 * asynchronous mode only (SWR=0), according to the settings shown below. This bit field is ignored
 * when SWR=1. WEN is cleared by a hardware reset. Reset value for EIM_CS0WCR for WEN is 2. For
 * EIM_CS1WCR - EIM_CS5WCR reset value is 000. Example settings:
 *
 * Values:
 * 000 - 0 EIM clock cycles between beginning of access and WE assertion
 * 001 - 1 EIM clock cycles between beginning of access and WE assertion
 * 010 - 2 EIM clock cycles between beginning of access and WE assertion
 * 111 - 7 EIM clock cycles between beginning of access and WE assertion
 */

#define BP_EIM_CS4WCR1_WEN      (6)      //!< Bit position for EIM_CS4WCR1_WEN.
#define BM_EIM_CS4WCR1_WEN      (0x000001c0)  //!< Bit mask for EIM_CS4WCR1_WEN.

//! @brief Get value of EIM_CS4WCR1_WEN from a register value.
#define BG_EIM_CS4WCR1_WEN(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_EIM_CS4WCR1_WEN) >> BP_EIM_CS4WCR1_WEN)

//! @brief Format value for bitfield EIM_CS4WCR1_WEN.
#define BF_EIM_CS4WCR1_WEN(v)   ((__REG_VALUE_TYPE((v), reg32_t) << BP_EIM_CS4WCR1_WEN) & BM_EIM_CS4WCR1_WEN)

#ifndef __LANGUAGE_ASM__
//! @brief Set the WEN field to a new value.
#define BW_EIM_CS4WCR1_WEN(v)   (HW_EIM_CS4WCR1_WR((HW_EIM_CS4WCR1_RD() & ~BM_EIM_CS4WCR1_WEN) | BF_EIM_CS4WCR1_WEN(v)))
#endif


/* --- Register HW_EIM_CS4WCR1, field WEA[11:9] (RW)
 *
 * WE Assertion. This bit field determines when WE signal is asserted during write cycles
 * (synchronous or asynchronous mode), according to the settings shown below. This bit field is
 * ignored when executing a read access to the external device. WEA is cleared by a hardware reset.
 * Reset value for EIM_CS0WCR for WEA is 2. For EIM_CS1WCR - EIM_CS5WCR reset value is 000. Example
 * settings:
 *
 * Values:
 * 000 - 0 EIM clock cycles between beginning of access and WE assertion
 * 001 - 1 EIM clock cycles between beginning of access and WE assertion
 * 010 - 2 EIM clock cycles between beginning of access and WE assertion
 * 111 - 7 EIMclock cycles between beginning of access and WE assertion
 */

#define BP_EIM_CS4WCR1_WEA      (9)      //!< Bit position for EIM_CS4WCR1_WEA.
#define BM_EIM_CS4WCR1_WEA      (0x00000e00)  //!< Bit mask for EIM_CS4WCR1_WEA.

//! @brief Get value of EIM_CS4WCR1_WEA from a register value.
#define BG_EIM_CS4WCR1_WEA(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_EIM_CS4WCR1_WEA) >> BP_EIM_CS4WCR1_WEA)

//! @brief Format value for bitfield EIM_CS4WCR1_WEA.
#define BF_EIM_CS4WCR1_WEA(v)   ((__REG_VALUE_TYPE((v), reg32_t) << BP_EIM_CS4WCR1_WEA) & BM_EIM_CS4WCR1_WEA)

#ifndef __LANGUAGE_ASM__
//! @brief Set the WEA field to a new value.
#define BW_EIM_CS4WCR1_WEA(v)   (HW_EIM_CS4WCR1_WR((HW_EIM_CS4WCR1_RD() & ~BM_EIM_CS4WCR1_WEA) | BF_EIM_CS4WCR1_WEA(v)))
#endif


/* --- Register HW_EIM_CS4WCR1, field WBEN[14:12] (RW)
 *
 * BE[3:0] Negation. This bit field determines when BE[3:0] bus signal is negated during write
 * cycles in async. mode only (SWR=0), according to the settings shown below. This bit field is
 * ignored when SWR=1. BEN is cleared by a hardware reset. Reset value for EIM_CS0WCR for WBEN is 2.
 * For EIM_CS1WCR - EIM_CS5WCR reset value is 000. Example settings: 000 0 EIM clock cycles between
 * end of access and WE negation 001 1 EIM clock cycles between end of access and WE negation 010 2
 * EIM clock cycles between end of access and WE negation 111 7 EIM clock cycles between end of
 * access and WE negation
 */

#define BP_EIM_CS4WCR1_WBEN      (12)      //!< Bit position for EIM_CS4WCR1_WBEN.
#define BM_EIM_CS4WCR1_WBEN      (0x00007000)  //!< Bit mask for EIM_CS4WCR1_WBEN.

//! @brief Get value of EIM_CS4WCR1_WBEN from a register value.
#define BG_EIM_CS4WCR1_WBEN(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_EIM_CS4WCR1_WBEN) >> BP_EIM_CS4WCR1_WBEN)

//! @brief Format value for bitfield EIM_CS4WCR1_WBEN.
#define BF_EIM_CS4WCR1_WBEN(v)   ((__REG_VALUE_TYPE((v), reg32_t) << BP_EIM_CS4WCR1_WBEN) & BM_EIM_CS4WCR1_WBEN)

#ifndef __LANGUAGE_ASM__
//! @brief Set the WBEN field to a new value.
#define BW_EIM_CS4WCR1_WBEN(v)   (HW_EIM_CS4WCR1_WR((HW_EIM_CS4WCR1_RD() & ~BM_EIM_CS4WCR1_WBEN) | BF_EIM_CS4WCR1_WBEN(v)))
#endif

/* --- Register HW_EIM_CS4WCR1, field WBEA[17:15] (RW)
 *
 * BE Assertion. This bit field determines when BE signal is asserted during write cycles in async.
 * mode only (SWR=0), according to the settings shown below. BEA is cleared by a hardware reset.
 * Reset value for EIM_CS0WCR for WBEA is 2. For EIM_CS1WCR - EIM_CS5WCR reset value is 000. Example
 * settings:
 *
 * Values:
 * 000 - 0 EIM clock cycles between beginning of access and BE assertion
 * 001 - 1 EIM clock cycles between beginning of access and BE assertion
 * 010 - 2 EIM clock cycles between beginning of access and BE assertion
 * 111 - 7 EIM clock cycles between beginning of access and BE assertion
 */

#define BP_EIM_CS4WCR1_WBEA      (15)      //!< Bit position for EIM_CS4WCR1_WBEA.
#define BM_EIM_CS4WCR1_WBEA      (0x00038000)  //!< Bit mask for EIM_CS4WCR1_WBEA.

//! @brief Get value of EIM_CS4WCR1_WBEA from a register value.
#define BG_EIM_CS4WCR1_WBEA(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_EIM_CS4WCR1_WBEA) >> BP_EIM_CS4WCR1_WBEA)

//! @brief Format value for bitfield EIM_CS4WCR1_WBEA.
#define BF_EIM_CS4WCR1_WBEA(v)   ((__REG_VALUE_TYPE((v), reg32_t) << BP_EIM_CS4WCR1_WBEA) & BM_EIM_CS4WCR1_WBEA)

#ifndef __LANGUAGE_ASM__
//! @brief Set the WBEA field to a new value.
#define BW_EIM_CS4WCR1_WBEA(v)   (HW_EIM_CS4WCR1_WR((HW_EIM_CS4WCR1_RD() & ~BM_EIM_CS4WCR1_WBEA) | BF_EIM_CS4WCR1_WBEA(v)))
#endif


/* --- Register HW_EIM_CS4WCR1, field WADVN[20:18] (RW)
 *
 * ADV Negation. This bit field determines when ADV signal to memory is negated during write
 * accesses. When SWR=1 (synchronous write mode), ADV negation occurs according to the following
 * formula: (WADVN + WADVA + BCD + BCS + 1) EIM clock cycles. When asynchronous read mode is applied
 * (SWR=0) ADV negation occurs according to the following formula: (WADVN + WADVA + 1) EIM clock
 * cycles. Reset value for EIM_CS0WCR for WADVN is 2. For EIM_CS1WCR - EIM_CS5WCR reset value is
 * 000. This field should be configured so ADV negation will occur before the end of access. For ADV
 * negation at the same time as the end of access, S/W should set the WAL bit.
 */

#define BP_EIM_CS4WCR1_WADVN      (18)      //!< Bit position for EIM_CS4WCR1_WADVN.
#define BM_EIM_CS4WCR1_WADVN      (0x001c0000)  //!< Bit mask for EIM_CS4WCR1_WADVN.

//! @brief Get value of EIM_CS4WCR1_WADVN from a register value.
#define BG_EIM_CS4WCR1_WADVN(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_EIM_CS4WCR1_WADVN) >> BP_EIM_CS4WCR1_WADVN)

//! @brief Format value for bitfield EIM_CS4WCR1_WADVN.
#define BF_EIM_CS4WCR1_WADVN(v)   ((__REG_VALUE_TYPE((v), reg32_t) << BP_EIM_CS4WCR1_WADVN) & BM_EIM_CS4WCR1_WADVN)

#ifndef __LANGUAGE_ASM__
//! @brief Set the WADVN field to a new value.
#define BW_EIM_CS4WCR1_WADVN(v)   (HW_EIM_CS4WCR1_WR((HW_EIM_CS4WCR1_RD() & ~BM_EIM_CS4WCR1_WADVN) | BF_EIM_CS4WCR1_WADVN(v)))
#endif

/* --- Register HW_EIM_CS4WCR1, field WADVA[23:21] (RW)
 *
 * ADV Assertion. This bit field determines when ADV signal is asserted for synchronous or
 * asynchronous write modes according to the settings shown below. WADVA is cleared by a hardware
 * reset. Example settings:
 *
 * Values:
 * 000 - 0 EIM clock cycles between beginning of access and ADV assertion
 * 001 - 1 EIM clock cycles between beginning of access and ADV assertion
 * 010 - 2 EIM clock cycles between beginning of access and ADV assertion
 * 111 - 7 EIM clock cycles between beginning of access and ADV assertion
 */

#define BP_EIM_CS4WCR1_WADVA      (21)      //!< Bit position for EIM_CS4WCR1_WADVA.
#define BM_EIM_CS4WCR1_WADVA      (0x00e00000)  //!< Bit mask for EIM_CS4WCR1_WADVA.

//! @brief Get value of EIM_CS4WCR1_WADVA from a register value.
#define BG_EIM_CS4WCR1_WADVA(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_EIM_CS4WCR1_WADVA) >> BP_EIM_CS4WCR1_WADVA)

//! @brief Format value for bitfield EIM_CS4WCR1_WADVA.
#define BF_EIM_CS4WCR1_WADVA(v)   ((__REG_VALUE_TYPE((v), reg32_t) << BP_EIM_CS4WCR1_WADVA) & BM_EIM_CS4WCR1_WADVA)

#ifndef __LANGUAGE_ASM__
//! @brief Set the WADVA field to a new value.
#define BW_EIM_CS4WCR1_WADVA(v)   (HW_EIM_CS4WCR1_WR((HW_EIM_CS4WCR1_RD() & ~BM_EIM_CS4WCR1_WADVA) | BF_EIM_CS4WCR1_WADVA(v)))
#endif


/* --- Register HW_EIM_CS4WCR1, field WWSC[29:24] (RW)
 *
 * Write Wait State Control. This bit field programs the number of wait-states, according to the
 * settings shown below, for synchronous or asynchronous write access to the external device
 * connected to the chip select. When SWR=1 and WFL=0, WWSC indicates the number of burst clock
 * (BCLK) cycles from the start of an access, before the memory can sample the first data.Since WAIT
 * signal can be asserted one cycle before the first data can be sampled, the controller starts
 * evaluating the WAIT signal state one cycle before, this is referred as handshake mode or variable
 * latency mode. When SWR=1 and WFL=1, WWSC indicates the number of burst clock (BCLK) cycles from
 * the start of an access, until the external device is ready for data transfer, this is referred as
 * fix latency mode. When SWR=0, WFL bit is ignored, WWSC indicates the asynchronous access length
 * and the number of EIM clock cycles from the start of access until the external device is ready
 * for data transfer. WWSC is cleared by a hardware reset. The reset value for EIM_CS0WCR1,
 * WWSC[5:0] = 0b011100. For EIM_CS1WCR1 - EIM_CS5WCR1, the reset value of this field is 0b000000.
 * Example settings:
 *
 * Values:
 * 000000 - Reserved
 * 000001 - WWSC value is 1
 * 000010 - WWSC value is 2
 * 000011 - WWSC value is 3
 * 111111 - WWSC value is 63
 */

#define BP_EIM_CS4WCR1_WWSC      (24)      //!< Bit position for EIM_CS4WCR1_WWSC.
#define BM_EIM_CS4WCR1_WWSC      (0x3f000000)  //!< Bit mask for EIM_CS4WCR1_WWSC.

//! @brief Get value of EIM_CS4WCR1_WWSC from a register value.
#define BG_EIM_CS4WCR1_WWSC(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_EIM_CS4WCR1_WWSC) >> BP_EIM_CS4WCR1_WWSC)

//! @brief Format value for bitfield EIM_CS4WCR1_WWSC.
#define BF_EIM_CS4WCR1_WWSC(v)   ((__REG_VALUE_TYPE((v), reg32_t) << BP_EIM_CS4WCR1_WWSC) & BM_EIM_CS4WCR1_WWSC)

#ifndef __LANGUAGE_ASM__
//! @brief Set the WWSC field to a new value.
#define BW_EIM_CS4WCR1_WWSC(v)   (HW_EIM_CS4WCR1_WR((HW_EIM_CS4WCR1_RD() & ~BM_EIM_CS4WCR1_WWSC) | BF_EIM_CS4WCR1_WWSC(v)))
#endif


/* --- Register HW_EIM_CS4WCR1, field WBED[30] (RW)
 *
 * Write Byte Enable Disable. When asserted this bit prevent from IPP_DO_BE_B[x] to be asserted
 * during write accesses.This bit is cleared by hardware reset.
 */

#define BP_EIM_CS4WCR1_WBED      (30)      //!< Bit position for EIM_CS4WCR1_WBED.
#define BM_EIM_CS4WCR1_WBED      (0x40000000)  //!< Bit mask for EIM_CS4WCR1_WBED.

//! @brief Get value of EIM_CS4WCR1_WBED from a register value.
#define BG_EIM_CS4WCR1_WBED(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_EIM_CS4WCR1_WBED) >> BP_EIM_CS4WCR1_WBED)

//! @brief Format value for bitfield EIM_CS4WCR1_WBED.
#define BF_EIM_CS4WCR1_WBED(v)   ((__REG_VALUE_TYPE((v), reg32_t) << BP_EIM_CS4WCR1_WBED) & BM_EIM_CS4WCR1_WBED)

#ifndef __LANGUAGE_ASM__
//! @brief Set the WBED field to a new value.
#define BW_EIM_CS4WCR1_WBED(v)   (HW_EIM_CS4WCR1_WR((HW_EIM_CS4WCR1_RD() & ~BM_EIM_CS4WCR1_WBED) | BF_EIM_CS4WCR1_WBED(v)))
#endif

/* --- Register HW_EIM_CS4WCR1, field WAL[31] (RW)
 *
 * Write ADV Low. This bit field determine ADV signal negation time in write accesses. When WAL=1,
 * WADVN bit field is ignored and ADV signal will stay asserted until end of access. When WAL=0
 * negation of ADV signal is according to WADVN bit field configuration.
 */

#define BP_EIM_CS4WCR1_WAL      (31)      //!< Bit position for EIM_CS4WCR1_WAL.
#define BM_EIM_CS4WCR1_WAL      (0x80000000)  //!< Bit mask for EIM_CS4WCR1_WAL.

//! @brief Get value of EIM_CS4WCR1_WAL from a register value.
#define BG_EIM_CS4WCR1_WAL(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_EIM_CS4WCR1_WAL) >> BP_EIM_CS4WCR1_WAL)

//! @brief Format value for bitfield EIM_CS4WCR1_WAL.
#define BF_EIM_CS4WCR1_WAL(v)   ((__REG_VALUE_TYPE((v), reg32_t) << BP_EIM_CS4WCR1_WAL) & BM_EIM_CS4WCR1_WAL)

#ifndef __LANGUAGE_ASM__
//! @brief Set the WAL field to a new value.
#define BW_EIM_CS4WCR1_WAL(v)   (HW_EIM_CS4WCR1_WR((HW_EIM_CS4WCR1_RD() & ~BM_EIM_CS4WCR1_WAL) | BF_EIM_CS4WCR1_WAL(v)))
#endif

//-------------------------------------------------------------------------------------------
// HW_EIM_CS4WCR2 - Chip Select n Write Configuration Register 2
//-------------------------------------------------------------------------------------------

#ifndef __LANGUAGE_ASM__
/*!
 * @brief HW_EIM_CS4WCR2 - Chip Select n Write Configuration Register 2 (RW)
 *
 * Reset value: 0x00000000
 *

 */
typedef union _hw_eim_cs4wcr2
{
    reg32_t U;
    struct _hw_eim_cs4wcr2_bitfields
    {
        unsigned WBCDD : 1; //!< [0] Write Burst Clock Divisor Decrement.
        unsigned RESERVED0 : 31; //!< [31:1] Reserved
    } B;
} hw_eim_cs4wcr2_t;
#endif

/*
 * constants & macros for entire EIM_CS4WCR2 register
 */
#define HW_EIM_CS4WCR2_ADDR      (REGS_EIM_BASE + 0x74)

#ifndef __LANGUAGE_ASM__
#define HW_EIM_CS4WCR2           (*(volatile hw_eim_cs4wcr2_t *) HW_EIM_CS4WCR2_ADDR)
#define HW_EIM_CS4WCR2_RD()      (HW_EIM_CS4WCR2.U)
#define HW_EIM_CS4WCR2_WR(v)     (HW_EIM_CS4WCR2.U = (v))
#define HW_EIM_CS4WCR2_SET(v)    (HW_EIM_CS4WCR2_WR(HW_EIM_CS4WCR2_RD() |  (v)))
#define HW_EIM_CS4WCR2_CLR(v)    (HW_EIM_CS4WCR2_WR(HW_EIM_CS4WCR2_RD() & ~(v)))
#define HW_EIM_CS4WCR2_TOG(v)    (HW_EIM_CS4WCR2_WR(HW_EIM_CS4WCR2_RD() ^  (v)))
#endif

/*
 * constants & macros for individual EIM_CS4WCR2 bitfields
 */

/* --- Register HW_EIM_CS4WCR2, field WBCDD[0] (RW)
 *
 * Write Burst Clock Divisor Decrement. If this bit is asserted and BCD value is 0 sync. write
 * access will be preformed as if BCD value is 1.When this bit is negated or BCD value is not 0 this
 * bit has no affect. This bit is cleared by hardware reset.
 */

#define BP_EIM_CS4WCR2_WBCDD      (0)      //!< Bit position for EIM_CS4WCR2_WBCDD.
#define BM_EIM_CS4WCR2_WBCDD      (0x00000001)  //!< Bit mask for EIM_CS4WCR2_WBCDD.

//! @brief Get value of EIM_CS4WCR2_WBCDD from a register value.
#define BG_EIM_CS4WCR2_WBCDD(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_EIM_CS4WCR2_WBCDD) >> BP_EIM_CS4WCR2_WBCDD)

//! @brief Format value for bitfield EIM_CS4WCR2_WBCDD.
#define BF_EIM_CS4WCR2_WBCDD(v)   ((__REG_VALUE_TYPE((v), reg32_t) << BP_EIM_CS4WCR2_WBCDD) & BM_EIM_CS4WCR2_WBCDD)

#ifndef __LANGUAGE_ASM__
//! @brief Set the WBCDD field to a new value.
#define BW_EIM_CS4WCR2_WBCDD(v)   (HW_EIM_CS4WCR2_WR((HW_EIM_CS4WCR2_RD() & ~BM_EIM_CS4WCR2_WBCDD) | BF_EIM_CS4WCR2_WBCDD(v)))
#endif

//-------------------------------------------------------------------------------------------
// HW_EIM_CS5GCR1 - Chip Select n General Configuration Register 1
//-------------------------------------------------------------------------------------------

#ifndef __LANGUAGE_ASM__
/*!
 * @brief HW_EIM_CS5GCR1 - Chip Select n General Configuration Register 1 (RW)
 *
 * Reset value: 0x00010080
 *

 */
typedef union _hw_eim_cs5gcr1
{
    reg32_t U;
    struct _hw_eim_cs5gcr1_bitfields
    {
        unsigned CSEN : 1; //!< [0] CS Enable.
        unsigned SWR : 1; //!< [1] Synchronous Write Data.
        unsigned SRD : 1; //!< [2] Synchronous Read Data.
        unsigned MUM : 1; //!< [3] Multiplexed Mode.
        unsigned WFL : 1; //!< [4] Write Fix Latency.
        unsigned RFL : 1; //!< [5] Read Fix Latency.
        unsigned CRE : 1; //!< [6] Configuration Register Enable.
        unsigned CREP : 1; //!< [7] Configuration Register Enable Polarity.
        unsigned BL : 3; //!< [10:8] Burst Length.
        unsigned WC : 1; //!< [11] Write Continuous.
        unsigned BCD : 2; //!< [13:12] Burst Clock Divisor.
        unsigned BCS : 2; //!< [15:14] Burst Clock Start.
        unsigned DSZ : 3; //!< [18:16] Data Port Size.
        unsigned SP : 1; //!< [19] Supervisor Protect.
        unsigned CSREC : 3; //!< [22:20] CS Recovery.
        unsigned AUS : 1; //!< [23] Address UnShifted.
        unsigned GBC : 3; //!< [26:24] Gap Between Chip Selects.
        unsigned WP : 1; //!< [27] Write Protect.
        unsigned PSZ : 4; //!< [31:28] Page Size.
    } B;
} hw_eim_cs5gcr1_t;
#endif

/*
 * constants & macros for entire EIM_CS5GCR1 register
 */
#define HW_EIM_CS5GCR1_ADDR      (REGS_EIM_BASE + 0x78)

#ifndef __LANGUAGE_ASM__
#define HW_EIM_CS5GCR1           (*(volatile hw_eim_cs5gcr1_t *) HW_EIM_CS5GCR1_ADDR)
#define HW_EIM_CS5GCR1_RD()      (HW_EIM_CS5GCR1.U)
#define HW_EIM_CS5GCR1_WR(v)     (HW_EIM_CS5GCR1.U = (v))
#define HW_EIM_CS5GCR1_SET(v)    (HW_EIM_CS5GCR1_WR(HW_EIM_CS5GCR1_RD() |  (v)))
#define HW_EIM_CS5GCR1_CLR(v)    (HW_EIM_CS5GCR1_WR(HW_EIM_CS5GCR1_RD() & ~(v)))
#define HW_EIM_CS5GCR1_TOG(v)    (HW_EIM_CS5GCR1_WR(HW_EIM_CS5GCR1_RD() ^  (v)))
#endif

/*
 * constants & macros for individual EIM_CS5GCR1 bitfields
 */

/* --- Register HW_EIM_CS5GCR1, field CSEN[0] (RW)
 *
 * CS Enable. This bit controls the operation of the chip select pin. CSEN is set by a hardware
 * reset for CSGCR0 to allow external boot operation. CSEN is cleared by a hardware reset to
 * CSGCR1-CSGCR5. Reset value for EIM_CS0GCR1 for CSEN is 1. For EIM_CS1GCR1-CS1GCR5 reset value is
 * 0.
 *
 * Values:
 * 0 - Chip select function is disabled; attempts to access an address mapped by this chip select results
 *     in an error respond and no assertion of the chip select output
 * 1 - Chip select is enabled, and is asserted when presented with a valid access.
 */

#define BP_EIM_CS5GCR1_CSEN      (0)      //!< Bit position for EIM_CS5GCR1_CSEN.
#define BM_EIM_CS5GCR1_CSEN      (0x00000001)  //!< Bit mask for EIM_CS5GCR1_CSEN.

//! @brief Get value of EIM_CS5GCR1_CSEN from a register value.
#define BG_EIM_CS5GCR1_CSEN(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_EIM_CS5GCR1_CSEN) >> BP_EIM_CS5GCR1_CSEN)

//! @brief Format value for bitfield EIM_CS5GCR1_CSEN.
#define BF_EIM_CS5GCR1_CSEN(v)   ((__REG_VALUE_TYPE((v), reg32_t) << BP_EIM_CS5GCR1_CSEN) & BM_EIM_CS5GCR1_CSEN)

#ifndef __LANGUAGE_ASM__
//! @brief Set the CSEN field to a new value.
#define BW_EIM_CS5GCR1_CSEN(v)   (HW_EIM_CS5GCR1_WR((HW_EIM_CS5GCR1_RD() & ~BM_EIM_CS5GCR1_CSEN) | BF_EIM_CS5GCR1_CSEN(v)))
#endif


/* --- Register HW_EIM_CS5GCR1, field SWR[1] (RW)
 *
 * Synchronous Write Data. This bit field determine the write accesses mode to the External device
 * of the chip select. The External device should be configured to the same mode as this bit
 * implicates. SWR is cleared by a hardware reset. Sync. accesses supported only for 16/32 bit port.
 *
 * Values:
 * 0 - write accesses are in Asynchronous mode
 * 1 - write accesses are in Synchronous mode
 */

#define BP_EIM_CS5GCR1_SWR      (1)      //!< Bit position for EIM_CS5GCR1_SWR.
#define BM_EIM_CS5GCR1_SWR      (0x00000002)  //!< Bit mask for EIM_CS5GCR1_SWR.

//! @brief Get value of EIM_CS5GCR1_SWR from a register value.
#define BG_EIM_CS5GCR1_SWR(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_EIM_CS5GCR1_SWR) >> BP_EIM_CS5GCR1_SWR)

//! @brief Format value for bitfield EIM_CS5GCR1_SWR.
#define BF_EIM_CS5GCR1_SWR(v)   ((__REG_VALUE_TYPE((v), reg32_t) << BP_EIM_CS5GCR1_SWR) & BM_EIM_CS5GCR1_SWR)

#ifndef __LANGUAGE_ASM__
//! @brief Set the SWR field to a new value.
#define BW_EIM_CS5GCR1_SWR(v)   (HW_EIM_CS5GCR1_WR((HW_EIM_CS5GCR1_RD() & ~BM_EIM_CS5GCR1_SWR) | BF_EIM_CS5GCR1_SWR(v)))
#endif


/* --- Register HW_EIM_CS5GCR1, field SRD[2] (RW)
 *
 * Synchronous Read Data. This bit field determine the read accesses mode to the External device of
 * the chip select. The External device should be configured to the same mode as this bit
 * implicates. SRD is cleared by a hardware reset. Sync. accesses supported only for 16/32 bit port.
 *
 * Values:
 * 0 - read accesses are in Asynchronous mode
 * 1 - read accesses are in Synchronous mode
 */

#define BP_EIM_CS5GCR1_SRD      (2)      //!< Bit position for EIM_CS5GCR1_SRD.
#define BM_EIM_CS5GCR1_SRD      (0x00000004)  //!< Bit mask for EIM_CS5GCR1_SRD.

//! @brief Get value of EIM_CS5GCR1_SRD from a register value.
#define BG_EIM_CS5GCR1_SRD(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_EIM_CS5GCR1_SRD) >> BP_EIM_CS5GCR1_SRD)

//! @brief Format value for bitfield EIM_CS5GCR1_SRD.
#define BF_EIM_CS5GCR1_SRD(v)   ((__REG_VALUE_TYPE((v), reg32_t) << BP_EIM_CS5GCR1_SRD) & BM_EIM_CS5GCR1_SRD)

#ifndef __LANGUAGE_ASM__
//! @brief Set the SRD field to a new value.
#define BW_EIM_CS5GCR1_SRD(v)   (HW_EIM_CS5GCR1_WR((HW_EIM_CS5GCR1_RD() & ~BM_EIM_CS5GCR1_SRD) | BF_EIM_CS5GCR1_SRD(v)))
#endif


/* --- Register HW_EIM_CS5GCR1, field MUM[3] (RW)
 *
 * Multiplexed Mode. This bit determines the address/data multiplexed mode for asynchronous and
 * synchronous accesses for 8 bit, 16 bit or 32 bit devices (DSZ config. dependent). The reset value
 * for EIM_CS0GCR1[MUM] = EIM_BOOT[2]. For EIM_CS1GCR1 - EIM_CS5GCR1 the reset value is 0.
 *
 * Values:
 * 0 - Multiplexed Mode disable
 * 1 - Multiplexed Mode enable
 */

#define BP_EIM_CS5GCR1_MUM      (3)      //!< Bit position for EIM_CS5GCR1_MUM.
#define BM_EIM_CS5GCR1_MUM      (0x00000008)  //!< Bit mask for EIM_CS5GCR1_MUM.

//! @brief Get value of EIM_CS5GCR1_MUM from a register value.
#define BG_EIM_CS5GCR1_MUM(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_EIM_CS5GCR1_MUM) >> BP_EIM_CS5GCR1_MUM)

//! @brief Format value for bitfield EIM_CS5GCR1_MUM.
#define BF_EIM_CS5GCR1_MUM(v)   ((__REG_VALUE_TYPE((v), reg32_t) << BP_EIM_CS5GCR1_MUM) & BM_EIM_CS5GCR1_MUM)

#ifndef __LANGUAGE_ASM__
//! @brief Set the MUM field to a new value.
#define BW_EIM_CS5GCR1_MUM(v)   (HW_EIM_CS5GCR1_WR((HW_EIM_CS5GCR1_RD() & ~BM_EIM_CS5GCR1_MUM) | BF_EIM_CS5GCR1_MUM(v)))
#endif


/* --- Register HW_EIM_CS5GCR1, field WFL[4] (RW)
 *
 * Write Fix Latency. This bit field determine if the controller is monitoring the WAIT signal from
 * the External device connected to the chip select (handshake mode - fix or variable data latency)
 * or if it start data transfer according to WWSC field, it only valid in synchronous mode. WFL is
 * cleared by a hardware reset. When WFL=1 Burst access is terminated on page boundary and resume on
 * the following page according to BL bit field configuration, because WAIT signal is not monitored
 * from the external device
 *
 * Values:
 * 0 - the External device WAIT signal is being monitored, and it reflect the external data bus state
 * 1 - the state of the External devices is determined internally (Fix latency mode only)
 */

#define BP_EIM_CS5GCR1_WFL      (4)      //!< Bit position for EIM_CS5GCR1_WFL.
#define BM_EIM_CS5GCR1_WFL      (0x00000010)  //!< Bit mask for EIM_CS5GCR1_WFL.

//! @brief Get value of EIM_CS5GCR1_WFL from a register value.
#define BG_EIM_CS5GCR1_WFL(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_EIM_CS5GCR1_WFL) >> BP_EIM_CS5GCR1_WFL)

//! @brief Format value for bitfield EIM_CS5GCR1_WFL.
#define BF_EIM_CS5GCR1_WFL(v)   ((__REG_VALUE_TYPE((v), reg32_t) << BP_EIM_CS5GCR1_WFL) & BM_EIM_CS5GCR1_WFL)

#ifndef __LANGUAGE_ASM__
//! @brief Set the WFL field to a new value.
#define BW_EIM_CS5GCR1_WFL(v)   (HW_EIM_CS5GCR1_WR((HW_EIM_CS5GCR1_RD() & ~BM_EIM_CS5GCR1_WFL) | BF_EIM_CS5GCR1_WFL(v)))
#endif


/* --- Register HW_EIM_CS5GCR1, field RFL[5] (RW)
 *
 * Read Fix Latency. This bit field determine if the controller is monitoring the WAIT signal from
 * the External device connected to the chip select (handshake mode - fix or variable data latency)
 * or if it start sampling data according to RWSC field, it only valid in synchronous mode. RFL is
 * cleared by a hardware reset. When RFL=1 Burst access is terminated on page boundary and resume on
 * the following page according to BL bit field configuration, because WAIT signal is not monitored
 * from the external device.
 *
 * Values:
 * 0 - the External device WAIT signal is being monitored, and it reflect the external data bus state
 * 1 - the state of the External devices is determined internally (Fix latency mode only)
 */

#define BP_EIM_CS5GCR1_RFL      (5)      //!< Bit position for EIM_CS5GCR1_RFL.
#define BM_EIM_CS5GCR1_RFL      (0x00000020)  //!< Bit mask for EIM_CS5GCR1_RFL.

//! @brief Get value of EIM_CS5GCR1_RFL from a register value.
#define BG_EIM_CS5GCR1_RFL(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_EIM_CS5GCR1_RFL) >> BP_EIM_CS5GCR1_RFL)

//! @brief Format value for bitfield EIM_CS5GCR1_RFL.
#define BF_EIM_CS5GCR1_RFL(v)   ((__REG_VALUE_TYPE((v), reg32_t) << BP_EIM_CS5GCR1_RFL) & BM_EIM_CS5GCR1_RFL)

#ifndef __LANGUAGE_ASM__
//! @brief Set the RFL field to a new value.
#define BW_EIM_CS5GCR1_RFL(v)   (HW_EIM_CS5GCR1_WR((HW_EIM_CS5GCR1_RD() & ~BM_EIM_CS5GCR1_RFL) | BF_EIM_CS5GCR1_RFL(v)))
#endif


/* --- Register HW_EIM_CS5GCR1, field CRE[6] (RW)
 *
 * Configuration Register Enable. This bit indicates CRE memory pin state while executing a memory
 * register set command to PSRAM external device. CRE is cleared by a hardware reset.
 *
 * Values:
 * 0 - CRE signal use is disable
 * 1 - CRE signal use is enable
 */

#define BP_EIM_CS5GCR1_CRE      (6)      //!< Bit position for EIM_CS5GCR1_CRE.
#define BM_EIM_CS5GCR1_CRE      (0x00000040)  //!< Bit mask for EIM_CS5GCR1_CRE.

//! @brief Get value of EIM_CS5GCR1_CRE from a register value.
#define BG_EIM_CS5GCR1_CRE(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_EIM_CS5GCR1_CRE) >> BP_EIM_CS5GCR1_CRE)

//! @brief Format value for bitfield EIM_CS5GCR1_CRE.
#define BF_EIM_CS5GCR1_CRE(v)   ((__REG_VALUE_TYPE((v), reg32_t) << BP_EIM_CS5GCR1_CRE) & BM_EIM_CS5GCR1_CRE)

#ifndef __LANGUAGE_ASM__
//! @brief Set the CRE field to a new value.
#define BW_EIM_CS5GCR1_CRE(v)   (HW_EIM_CS5GCR1_WR((HW_EIM_CS5GCR1_RD() & ~BM_EIM_CS5GCR1_CRE) | BF_EIM_CS5GCR1_CRE(v)))
#endif


/* --- Register HW_EIM_CS5GCR1, field CREP[7] (RW)
 *
 * Configuration Register Enable Polarity. This bit indicates CRE memory pin assertion state,
 * active-low or active-high, while executing a memory register set command to the external device
 * (PSRAM memory type). CREP is set by a hardware reset. Whenever PSRAM is connected the CREP value
 * must be correct also for accesses where CRE is disabled. For Non-PSRAM memory CREP value should
 * be 1.
 *
 * Values:
 * 0 - CRE signal is active low
 * 1 - CRE signal is active high
 */

#define BP_EIM_CS5GCR1_CREP      (7)      //!< Bit position for EIM_CS5GCR1_CREP.
#define BM_EIM_CS5GCR1_CREP      (0x00000080)  //!< Bit mask for EIM_CS5GCR1_CREP.

//! @brief Get value of EIM_CS5GCR1_CREP from a register value.
#define BG_EIM_CS5GCR1_CREP(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_EIM_CS5GCR1_CREP) >> BP_EIM_CS5GCR1_CREP)

//! @brief Format value for bitfield EIM_CS5GCR1_CREP.
#define BF_EIM_CS5GCR1_CREP(v)   ((__REG_VALUE_TYPE((v), reg32_t) << BP_EIM_CS5GCR1_CREP) & BM_EIM_CS5GCR1_CREP)

#ifndef __LANGUAGE_ASM__
//! @brief Set the CREP field to a new value.
#define BW_EIM_CS5GCR1_CREP(v)   (HW_EIM_CS5GCR1_WR((HW_EIM_CS5GCR1_RD() & ~BM_EIM_CS5GCR1_CREP) | BF_EIM_CS5GCR1_CREP(v)))
#endif


/* --- Register HW_EIM_CS5GCR1, field BL[10:8] (RW)
 *
 * Burst Length. The BL bit field indicates memory burst length in words (word is defined by the DSZ
 * field) and should be properly initialized for mixed wrap/increment accesses support. Continuous
 * BL value corresponds to continuous burst length setting of the external memory device. For fix
 * memory burst size, type is always wrap. In case not matching wrap boundaries in both the memory
 * (BL field) and Master access on the current address, EIM update address on the external device
 * address bus and regenerates the access. BL is cleared by a hardware reset. When APR=1, Page Read
 * Mode is applied, BL determine the number of words within the read page burst. BL is cleared by a
 * hardware reset for EIM_CS0GCR1 - EIM_CS5GCR1.
 *
 * Values:
 * 000 - 4 words Memory wrap burst length (read page burst size when APR = 1)
 * 001 - 8 words Memory wrap burst length (read page burst size when APR = 1)
 * 010 - 16 words Memory wrap burst length (read page burst size when APR = 1)
 * 011 - 32 words Memory wrap burst length (read page burst size when APR = 1)
 * 100 - Continuous burst length (2 words read page burst size when APR = 1)
 * 101 - Reserved
 * 110 - Reserved
 * 111 - Reserved
 */

#define BP_EIM_CS5GCR1_BL      (8)      //!< Bit position for EIM_CS5GCR1_BL.
#define BM_EIM_CS5GCR1_BL      (0x00000700)  //!< Bit mask for EIM_CS5GCR1_BL.

//! @brief Get value of EIM_CS5GCR1_BL from a register value.
#define BG_EIM_CS5GCR1_BL(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_EIM_CS5GCR1_BL) >> BP_EIM_CS5GCR1_BL)

//! @brief Format value for bitfield EIM_CS5GCR1_BL.
#define BF_EIM_CS5GCR1_BL(v)   ((__REG_VALUE_TYPE((v), reg32_t) << BP_EIM_CS5GCR1_BL) & BM_EIM_CS5GCR1_BL)

#ifndef __LANGUAGE_ASM__
//! @brief Set the BL field to a new value.
#define BW_EIM_CS5GCR1_BL(v)   (HW_EIM_CS5GCR1_WR((HW_EIM_CS5GCR1_RD() & ~BM_EIM_CS5GCR1_BL) | BF_EIM_CS5GCR1_BL(v)))
#endif


/* --- Register HW_EIM_CS5GCR1, field WC[11] (RW)
 *
 * Write Continuous. The WI bit indicates that write access to the memory are always continuous
 * accesses regardless of the BL field value. WI is cleared by hardware reset.
 *
 * Values:
 * 0 - Write access burst length occurs according to BL value.
 * 1 - Write access burst length is continuous.
 */

#define BP_EIM_CS5GCR1_WC      (11)      //!< Bit position for EIM_CS5GCR1_WC.
#define BM_EIM_CS5GCR1_WC      (0x00000800)  //!< Bit mask for EIM_CS5GCR1_WC.

//! @brief Get value of EIM_CS5GCR1_WC from a register value.
#define BG_EIM_CS5GCR1_WC(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_EIM_CS5GCR1_WC) >> BP_EIM_CS5GCR1_WC)

//! @brief Format value for bitfield EIM_CS5GCR1_WC.
#define BF_EIM_CS5GCR1_WC(v)   ((__REG_VALUE_TYPE((v), reg32_t) << BP_EIM_CS5GCR1_WC) & BM_EIM_CS5GCR1_WC)

#ifndef __LANGUAGE_ASM__
//! @brief Set the WC field to a new value.
#define BW_EIM_CS5GCR1_WC(v)   (HW_EIM_CS5GCR1_WR((HW_EIM_CS5GCR1_RD() & ~BM_EIM_CS5GCR1_WC) | BF_EIM_CS5GCR1_WC(v)))
#endif


/* --- Register HW_EIM_CS5GCR1, field BCD[13:12] (RW)
 *
 * Burst Clock Divisor. This bit field contains the value used to program the burst clock divisor
 * for BCLK generation. It is used to divide the internal EIMbus frequency. BCD is cleared by a
 * hardware reset. For other then the mentioned below frequency such as 104 MHz, EIM clock (input
 * clock) should be adjust accordingly.
 *
 * Values:
 * 00 - Divide EIM clock by 1
 * 01 - Divide EIM clock by 2
 * 10 - Divide EIM clock by 3
 * 11 - Divide EIM clock by 4
 */

#define BP_EIM_CS5GCR1_BCD      (12)      //!< Bit position for EIM_CS5GCR1_BCD.
#define BM_EIM_CS5GCR1_BCD      (0x00003000)  //!< Bit mask for EIM_CS5GCR1_BCD.

//! @brief Get value of EIM_CS5GCR1_BCD from a register value.
#define BG_EIM_CS5GCR1_BCD(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_EIM_CS5GCR1_BCD) >> BP_EIM_CS5GCR1_BCD)

//! @brief Format value for bitfield EIM_CS5GCR1_BCD.
#define BF_EIM_CS5GCR1_BCD(v)   ((__REG_VALUE_TYPE((v), reg32_t) << BP_EIM_CS5GCR1_BCD) & BM_EIM_CS5GCR1_BCD)

#ifndef __LANGUAGE_ASM__
//! @brief Set the BCD field to a new value.
#define BW_EIM_CS5GCR1_BCD(v)   (HW_EIM_CS5GCR1_WR((HW_EIM_CS5GCR1_RD() & ~BM_EIM_CS5GCR1_BCD) | BF_EIM_CS5GCR1_BCD(v)))
#endif


/* --- Register HW_EIM_CS5GCR1, field BCS[15:14] (RW)
 *
 * Burst Clock Start. When SRD=1 or SWR=1,this bit field determines the number of EIM clock cycles
 * delay from start of access before the first rising edge of BCLK is generated. When BCD=0 value of
 * BCS=0 results in a half clock delay after the start of access. For other values of BCD a one
 * clock delay after the start of access is applied, not an immediate assertion. BCS is cleared by a
 * hardware reset.
 *
 * Values:
 * 00 - 0 EIM clock cycle additional delay
 * 01 - 1 EIM clock cycle additional delay
 * 10 - 2 EIM clock cycle additional delay
 * 11 - 3 EIM clock cycle additional delay
 */

#define BP_EIM_CS5GCR1_BCS      (14)      //!< Bit position for EIM_CS5GCR1_BCS.
#define BM_EIM_CS5GCR1_BCS      (0x0000c000)  //!< Bit mask for EIM_CS5GCR1_BCS.

//! @brief Get value of EIM_CS5GCR1_BCS from a register value.
#define BG_EIM_CS5GCR1_BCS(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_EIM_CS5GCR1_BCS) >> BP_EIM_CS5GCR1_BCS)

//! @brief Format value for bitfield EIM_CS5GCR1_BCS.
#define BF_EIM_CS5GCR1_BCS(v)   ((__REG_VALUE_TYPE((v), reg32_t) << BP_EIM_CS5GCR1_BCS) & BM_EIM_CS5GCR1_BCS)

#ifndef __LANGUAGE_ASM__
//! @brief Set the BCS field to a new value.
#define BW_EIM_CS5GCR1_BCS(v)   (HW_EIM_CS5GCR1_WR((HW_EIM_CS5GCR1_RD() & ~BM_EIM_CS5GCR1_BCS) | BF_EIM_CS5GCR1_BCS(v)))
#endif


/* --- Register HW_EIM_CS5GCR1, field DSZ[18:16] (RW)
 *
 * Data Port Size. This bit field defines the width of an external device's data port as shown
 * below. Only async. access supported for 8 bit port. The reset value for EIM_CS0GCR1, DSZ[2] = 0,
 * DSZ[1:0] = EIM_BOOT[1:0]. For EIM_CS1GCR1 - EIM_CS5GCR1, the reset value is 0b001.
 *
 * Values:
 * 000 - Reserved.
 * 001 - 16 bit port resides on DATA[15:0]
 * 010 - 16 bit port resides on DATA[31:16]
 * 011 - 32 bit port resides on DATA[31:0]
 * 100 - 8 bit port resides on DATA[7:0]
 * 101 - 8 bit port resides on DATA[15:8]
 * 110 - 8 bit port resides on DATA[23:16]
 * 111 - 8 bit port resides on DATA[31:24]
 */

#define BP_EIM_CS5GCR1_DSZ      (16)      //!< Bit position for EIM_CS5GCR1_DSZ.
#define BM_EIM_CS5GCR1_DSZ      (0x00070000)  //!< Bit mask for EIM_CS5GCR1_DSZ.

//! @brief Get value of EIM_CS5GCR1_DSZ from a register value.
#define BG_EIM_CS5GCR1_DSZ(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_EIM_CS5GCR1_DSZ) >> BP_EIM_CS5GCR1_DSZ)

//! @brief Format value for bitfield EIM_CS5GCR1_DSZ.
#define BF_EIM_CS5GCR1_DSZ(v)   ((__REG_VALUE_TYPE((v), reg32_t) << BP_EIM_CS5GCR1_DSZ) & BM_EIM_CS5GCR1_DSZ)

#ifndef __LANGUAGE_ASM__
//! @brief Set the DSZ field to a new value.
#define BW_EIM_CS5GCR1_DSZ(v)   (HW_EIM_CS5GCR1_WR((HW_EIM_CS5GCR1_RD() & ~BM_EIM_CS5GCR1_DSZ) | BF_EIM_CS5GCR1_DSZ(v)))
#endif


/* --- Register HW_EIM_CS5GCR1, field SP[19] (RW)
 *
 * Supervisor Protect. This bit prevents accesses to the address range defined by the corresponding
 * chip select when the access is attempted in the User mode. SP is cleared by a hardware reset.
 *
 * Values:
 * 0 - User mode accesses are allowed in the memory range defined by chip select.
 * 1 - User mode accesses are prohibited. All attempts to access an address mapped by this chip select in
 *     User mode results in an error response and no assertion of the chip select output.
 */

#define BP_EIM_CS5GCR1_SP      (19)      //!< Bit position for EIM_CS5GCR1_SP.
#define BM_EIM_CS5GCR1_SP      (0x00080000)  //!< Bit mask for EIM_CS5GCR1_SP.

//! @brief Get value of EIM_CS5GCR1_SP from a register value.
#define BG_EIM_CS5GCR1_SP(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_EIM_CS5GCR1_SP) >> BP_EIM_CS5GCR1_SP)

//! @brief Format value for bitfield EIM_CS5GCR1_SP.
#define BF_EIM_CS5GCR1_SP(v)   ((__REG_VALUE_TYPE((v), reg32_t) << BP_EIM_CS5GCR1_SP) & BM_EIM_CS5GCR1_SP)

#ifndef __LANGUAGE_ASM__
//! @brief Set the SP field to a new value.
#define BW_EIM_CS5GCR1_SP(v)   (HW_EIM_CS5GCR1_WR((HW_EIM_CS5GCR1_RD() & ~BM_EIM_CS5GCR1_SP) | BF_EIM_CS5GCR1_SP(v)))
#endif


/* --- Register HW_EIM_CS5GCR1, field CSREC[22:20] (RW)
 *
 * CS Recovery. This bit field, according to the settings shown below, determines the minimum pulse
 * width of CS, OE, and WE control signals before executing a new back to back access to the same
 * chip select. CSREC is cleared by a hardware reset. The reset value for EIM_CS0GCR1, CSREC[2:0] is
 * 0b110. For EIM_CS1GCR1 - EIM_CS5GCR, the reset value is 0b000. Example settings:
 *
 * Values:
 * 000 - 0 EIM clock cycles minimum width of CS, OE and WE signals (read async. mode only)
 * 001 - 1 EIM clock cycles minimum width of CS, OE and WE signals
 * 010 - 2 EIM clock cycles minimum width of CS, OE and WE signals
 * 111 - 7 EIM clock cycles minimum width of CS, OE and WE signals
 */

#define BP_EIM_CS5GCR1_CSREC      (20)      //!< Bit position for EIM_CS5GCR1_CSREC.
#define BM_EIM_CS5GCR1_CSREC      (0x00700000)  //!< Bit mask for EIM_CS5GCR1_CSREC.

//! @brief Get value of EIM_CS5GCR1_CSREC from a register value.
#define BG_EIM_CS5GCR1_CSREC(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_EIM_CS5GCR1_CSREC) >> BP_EIM_CS5GCR1_CSREC)

//! @brief Format value for bitfield EIM_CS5GCR1_CSREC.
#define BF_EIM_CS5GCR1_CSREC(v)   ((__REG_VALUE_TYPE((v), reg32_t) << BP_EIM_CS5GCR1_CSREC) & BM_EIM_CS5GCR1_CSREC)

#ifndef __LANGUAGE_ASM__
//! @brief Set the CSREC field to a new value.
#define BW_EIM_CS5GCR1_CSREC(v)   (HW_EIM_CS5GCR1_WR((HW_EIM_CS5GCR1_RD() & ~BM_EIM_CS5GCR1_CSREC) | BF_EIM_CS5GCR1_CSREC(v)))
#endif


/* --- Register HW_EIM_CS5GCR1, field AUS[23] (RW)
 *
 * Address UnShifted. This bit indicates an unshifted mode for address assertion for the relevant
 * chip select accesses. AUS bit is cleared by hardware reset.
 *
 * Values:
 * 0 - Address shifted according to port size (DSZ config.)
 * 1 - Address unshifted
 */

#define BP_EIM_CS5GCR1_AUS      (23)      //!< Bit position for EIM_CS5GCR1_AUS.
#define BM_EIM_CS5GCR1_AUS      (0x00800000)  //!< Bit mask for EIM_CS5GCR1_AUS.

//! @brief Get value of EIM_CS5GCR1_AUS from a register value.
#define BG_EIM_CS5GCR1_AUS(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_EIM_CS5GCR1_AUS) >> BP_EIM_CS5GCR1_AUS)

//! @brief Format value for bitfield EIM_CS5GCR1_AUS.
#define BF_EIM_CS5GCR1_AUS(v)   ((__REG_VALUE_TYPE((v), reg32_t) << BP_EIM_CS5GCR1_AUS) & BM_EIM_CS5GCR1_AUS)

#ifndef __LANGUAGE_ASM__
//! @brief Set the AUS field to a new value.
#define BW_EIM_CS5GCR1_AUS(v)   (HW_EIM_CS5GCR1_WR((HW_EIM_CS5GCR1_RD() & ~BM_EIM_CS5GCR1_AUS) | BF_EIM_CS5GCR1_AUS(v)))
#endif


/* --- Register HW_EIM_CS5GCR1, field GBC[26:24] (RW)
 *
 * Gap Between Chip Selects. This bit field, according to the settings shown below, determines the
 * minimum time between end of access to the current chip select and start of access to different
 * chip select. GBC is cleared by a hardware reset. Example settings:
 *
 * Values:
 * 000 - minimum of 0 EIM clock cycles before next access from different chip select (async. mode only)
 * 001 - minimum of 1 EIM clock cycles before next access from different chip select
 * 010 - minimum of 2 EIM clock cycles before next access from different chip select
 * 111 - minimum of 7 EIM clock cycles before next access from different chip select
 */

#define BP_EIM_CS5GCR1_GBC      (24)      //!< Bit position for EIM_CS5GCR1_GBC.
#define BM_EIM_CS5GCR1_GBC      (0x07000000)  //!< Bit mask for EIM_CS5GCR1_GBC.

//! @brief Get value of EIM_CS5GCR1_GBC from a register value.
#define BG_EIM_CS5GCR1_GBC(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_EIM_CS5GCR1_GBC) >> BP_EIM_CS5GCR1_GBC)

//! @brief Format value for bitfield EIM_CS5GCR1_GBC.
#define BF_EIM_CS5GCR1_GBC(v)   ((__REG_VALUE_TYPE((v), reg32_t) << BP_EIM_CS5GCR1_GBC) & BM_EIM_CS5GCR1_GBC)

#ifndef __LANGUAGE_ASM__
//! @brief Set the GBC field to a new value.
#define BW_EIM_CS5GCR1_GBC(v)   (HW_EIM_CS5GCR1_WR((HW_EIM_CS5GCR1_RD() & ~BM_EIM_CS5GCR1_GBC) | BF_EIM_CS5GCR1_GBC(v)))
#endif


/* --- Register HW_EIM_CS5GCR1, field WP[27] (RW)
 *
 * Write Protect. This bit prevents writes to the address range defined by the corresponding chip
 * select. WP is cleared by a hardware reset.
 *
 * Values:
 * 0 - Writes are allowed in the memory range defined by chip.
 * 1 - Writes are prohibited. All attempts to write to an address mapped by this chip select result in a
 *     error response and no assertion of the chip select output.
 */

#define BP_EIM_CS5GCR1_WP      (27)      //!< Bit position for EIM_CS5GCR1_WP.
#define BM_EIM_CS5GCR1_WP      (0x08000000)  //!< Bit mask for EIM_CS5GCR1_WP.

//! @brief Get value of EIM_CS5GCR1_WP from a register value.
#define BG_EIM_CS5GCR1_WP(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_EIM_CS5GCR1_WP) >> BP_EIM_CS5GCR1_WP)

//! @brief Format value for bitfield EIM_CS5GCR1_WP.
#define BF_EIM_CS5GCR1_WP(v)   ((__REG_VALUE_TYPE((v), reg32_t) << BP_EIM_CS5GCR1_WP) & BM_EIM_CS5GCR1_WP)

#ifndef __LANGUAGE_ASM__
//! @brief Set the WP field to a new value.
#define BW_EIM_CS5GCR1_WP(v)   (HW_EIM_CS5GCR1_WR((HW_EIM_CS5GCR1_RD() & ~BM_EIM_CS5GCR1_WP) | BF_EIM_CS5GCR1_WP(v)))
#endif


/* --- Register HW_EIM_CS5GCR1, field PSZ[31:28] (RW)
 *
 * Page Size. This bit field indicates memory page size in words (word is defined by the DSZ field).
 * PSZ is used when fix latency mode is applied, WFL=1 for sync. write accesses, RFL=1 for sync.
 * Read accesses. When working in fix latency mode WAIT signal from the external device is not being
 * monitored, PSZ is used to determine if page boundary is reached and renewal of access is
 * preformed. This bit field is ignored when sync. Mode is disabled or fix latency mode is not being
 * used for write or read access separately. It can be valid for both access type, read or write, or
 * only for one type, according to configuration. PSZ is cleared by a hardware reset.
 *
 * Values:
 * 0000 - 8 words page size
 * 0001 - 16 words page size
 * 0010 - 32 words page size
 * 0011 - 64 words page size
 * 0100 - 128 words page size
 * 0101 - 256 words page size
 * 0110 - 512 words page size
 * 0111 - 1024 (1k) words page size
 * 1000 - 2048 (2k) words page size
 * 1001 - - 1111 Reserved
 */

#define BP_EIM_CS5GCR1_PSZ      (28)      //!< Bit position for EIM_CS5GCR1_PSZ.
#define BM_EIM_CS5GCR1_PSZ      (0xf0000000)  //!< Bit mask for EIM_CS5GCR1_PSZ.

//! @brief Get value of EIM_CS5GCR1_PSZ from a register value.
#define BG_EIM_CS5GCR1_PSZ(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_EIM_CS5GCR1_PSZ) >> BP_EIM_CS5GCR1_PSZ)

//! @brief Format value for bitfield EIM_CS5GCR1_PSZ.
#define BF_EIM_CS5GCR1_PSZ(v)   ((__REG_VALUE_TYPE((v), reg32_t) << BP_EIM_CS5GCR1_PSZ) & BM_EIM_CS5GCR1_PSZ)

#ifndef __LANGUAGE_ASM__
//! @brief Set the PSZ field to a new value.
#define BW_EIM_CS5GCR1_PSZ(v)   (HW_EIM_CS5GCR1_WR((HW_EIM_CS5GCR1_RD() & ~BM_EIM_CS5GCR1_PSZ) | BF_EIM_CS5GCR1_PSZ(v)))
#endif


//-------------------------------------------------------------------------------------------
// HW_EIM_CS5GCR2 - Chip Select n General Configuration Register 2
//-------------------------------------------------------------------------------------------

#ifndef __LANGUAGE_ASM__
/*!
 * @brief HW_EIM_CS5GCR2 - Chip Select n General Configuration Register 2 (RW)
 *
 * Reset value: 0x00001000
 *

 */
typedef union _hw_eim_cs5gcr2
{
    reg32_t U;
    struct _hw_eim_cs5gcr2_bitfields
    {
        unsigned ADH : 2; //!< [1:0] Address hold time - This bit field determine the address hold time after ADV negation when mum = 1 (muxed mode).
        unsigned RESERVED0 : 2; //!< [3:2] Reserved
        unsigned DAPS : 4; //!< [7:4] Data Acknowledge Poling Start.
        unsigned DAE : 1; //!< [8] Data Acknowledge Enable.
        unsigned DAP : 1; //!< [9] Data Acknowledge Polarity.
        unsigned RESERVED1 : 2; //!< [11:10] Reserved
        unsigned MUX16_BYP_GRANT : 1; //!< [12] Muxed 16 bypass grant.
        unsigned RESERVED2 : 19; //!< [31:13] Reserved
    } B;
} hw_eim_cs5gcr2_t;
#endif

/*
 * constants & macros for entire EIM_CS5GCR2 register
 */
#define HW_EIM_CS5GCR2_ADDR      (REGS_EIM_BASE + 0x7c)

#ifndef __LANGUAGE_ASM__
#define HW_EIM_CS5GCR2           (*(volatile hw_eim_cs5gcr2_t *) HW_EIM_CS5GCR2_ADDR)
#define HW_EIM_CS5GCR2_RD()      (HW_EIM_CS5GCR2.U)
#define HW_EIM_CS5GCR2_WR(v)     (HW_EIM_CS5GCR2.U = (v))
#define HW_EIM_CS5GCR2_SET(v)    (HW_EIM_CS5GCR2_WR(HW_EIM_CS5GCR2_RD() |  (v)))
#define HW_EIM_CS5GCR2_CLR(v)    (HW_EIM_CS5GCR2_WR(HW_EIM_CS5GCR2_RD() & ~(v)))
#define HW_EIM_CS5GCR2_TOG(v)    (HW_EIM_CS5GCR2_WR(HW_EIM_CS5GCR2_RD() ^  (v)))
#endif

/*
 * constants & macros for individual EIM_CS5GCR2 bitfields
 */

/* --- Register HW_EIM_CS5GCR2, field ADH[1:0] (RW)
 *
 * Address hold time - This bit field determine the address hold time after ADV negation when mum =
 * 1 (muxed mode). When mum = 0 this bit has no effect. For read accesses the field determines when
 * the pads direction will be switched. Reset value for EIM_CS0GCR2 for ADH is 10. For
 * EIM_CS1GCR2-EIM_CS5GCR2 reset value is 00.
 *
 * Values:
 * 00 - 0 cycle after ADV negation
 * 01 - 1 cycle after ADV negation
 * 10 - 2 cycle after ADV negation
 * 11 - Reserved
 */

#define BP_EIM_CS5GCR2_ADH      (0)      //!< Bit position for EIM_CS5GCR2_ADH.
#define BM_EIM_CS5GCR2_ADH      (0x00000003)  //!< Bit mask for EIM_CS5GCR2_ADH.

//! @brief Get value of EIM_CS5GCR2_ADH from a register value.
#define BG_EIM_CS5GCR2_ADH(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_EIM_CS5GCR2_ADH) >> BP_EIM_CS5GCR2_ADH)

//! @brief Format value for bitfield EIM_CS5GCR2_ADH.
#define BF_EIM_CS5GCR2_ADH(v)   ((__REG_VALUE_TYPE((v), reg32_t) << BP_EIM_CS5GCR2_ADH) & BM_EIM_CS5GCR2_ADH)

#ifndef __LANGUAGE_ASM__
//! @brief Set the ADH field to a new value.
#define BW_EIM_CS5GCR2_ADH(v)   (HW_EIM_CS5GCR2_WR((HW_EIM_CS5GCR2_RD() & ~BM_EIM_CS5GCR2_ADH) | BF_EIM_CS5GCR2_ADH(v)))
#endif


/* --- Register HW_EIM_CS5GCR2, field DAPS[7:4] (RW)
 *
 * Data Acknowledge Poling Start. This bit field determine the starting point of DTACK input signal
 * polling. DAPS is used only in asynchronous single read or write accesses. Since DTACK is an
 * async. signal the start point of DTACK signal polling is at least 3 cycles after the start of
 * access. DAPS is cleared by a hardware reset. Example settings:
 *
 * Values:
 * 0000 - 3 EIM clk cycle between start of access and first DTACK check
 * 0001 - 4 EIM clk cycles between start of access and first DTACK check
 * 0010 - 5 EIM clk cycles between start of access and first DTACK check
 * 0111 - 10 EIM clk cycles between start of access and first DTACK check
 * 1011 - 14 EIM clk cycles between start of access and first DTACK check
 * 1111 - 18 EIM clk cycles between start of access and first DTACK check
 */

#define BP_EIM_CS5GCR2_DAPS      (4)      //!< Bit position for EIM_CS5GCR2_DAPS.
#define BM_EIM_CS5GCR2_DAPS      (0x000000f0)  //!< Bit mask for EIM_CS5GCR2_DAPS.

//! @brief Get value of EIM_CS5GCR2_DAPS from a register value.
#define BG_EIM_CS5GCR2_DAPS(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_EIM_CS5GCR2_DAPS) >> BP_EIM_CS5GCR2_DAPS)

//! @brief Format value for bitfield EIM_CS5GCR2_DAPS.
#define BF_EIM_CS5GCR2_DAPS(v)   ((__REG_VALUE_TYPE((v), reg32_t) << BP_EIM_CS5GCR2_DAPS) & BM_EIM_CS5GCR2_DAPS)

#ifndef __LANGUAGE_ASM__
//! @brief Set the DAPS field to a new value.
#define BW_EIM_CS5GCR2_DAPS(v)   (HW_EIM_CS5GCR2_WR((HW_EIM_CS5GCR2_RD() & ~BM_EIM_CS5GCR2_DAPS) | BF_EIM_CS5GCR2_DAPS(v)))
#endif


/* --- Register HW_EIM_CS5GCR2, field DAE[8] (RW)
 *
 * Data Acknowledge Enable. This bit indicates external device is using DTACK pin as
 * strobe/terminator of an async. access. DTACK signal may be used only in asynchronous single read
 * (APR=0) or write accesses. DTACK poling start point is set by DAPS bit field. polarity of DTACK
 * is set by DAP bit field. DAE is cleared by a hardware reset.
 *
 * Values:
 * 0 - DTACK signal use is disable
 * 1 - DTACK signal use is enable
 */

#define BP_EIM_CS5GCR2_DAE      (8)      //!< Bit position for EIM_CS5GCR2_DAE.
#define BM_EIM_CS5GCR2_DAE      (0x00000100)  //!< Bit mask for EIM_CS5GCR2_DAE.

//! @brief Get value of EIM_CS5GCR2_DAE from a register value.
#define BG_EIM_CS5GCR2_DAE(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_EIM_CS5GCR2_DAE) >> BP_EIM_CS5GCR2_DAE)

//! @brief Format value for bitfield EIM_CS5GCR2_DAE.
#define BF_EIM_CS5GCR2_DAE(v)   ((__REG_VALUE_TYPE((v), reg32_t) << BP_EIM_CS5GCR2_DAE) & BM_EIM_CS5GCR2_DAE)

#ifndef __LANGUAGE_ASM__
//! @brief Set the DAE field to a new value.
#define BW_EIM_CS5GCR2_DAE(v)   (HW_EIM_CS5GCR2_WR((HW_EIM_CS5GCR2_RD() & ~BM_EIM_CS5GCR2_DAE) | BF_EIM_CS5GCR2_DAE(v)))
#endif


/* --- Register HW_EIM_CS5GCR2, field DAP[9] (RW)
 *
 * Data Acknowledge Polarity. This bit indicates DTACK memory pin assertion state, active-low or
 * active-high, while executing an async access using DTACK signal from the external device. DAP is
 * cleared by a hardware reset.
 *
 * Values:
 * 0 - DTACK signal is active high
 * 1 - DTACK signal is active low
 */

#define BP_EIM_CS5GCR2_DAP      (9)      //!< Bit position for EIM_CS5GCR2_DAP.
#define BM_EIM_CS5GCR2_DAP      (0x00000200)  //!< Bit mask for EIM_CS5GCR2_DAP.

//! @brief Get value of EIM_CS5GCR2_DAP from a register value.
#define BG_EIM_CS5GCR2_DAP(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_EIM_CS5GCR2_DAP) >> BP_EIM_CS5GCR2_DAP)

//! @brief Format value for bitfield EIM_CS5GCR2_DAP.
#define BF_EIM_CS5GCR2_DAP(v)   ((__REG_VALUE_TYPE((v), reg32_t) << BP_EIM_CS5GCR2_DAP) & BM_EIM_CS5GCR2_DAP)

#ifndef __LANGUAGE_ASM__
//! @brief Set the DAP field to a new value.
#define BW_EIM_CS5GCR2_DAP(v)   (HW_EIM_CS5GCR2_WR((HW_EIM_CS5GCR2_RD() & ~BM_EIM_CS5GCR2_DAP) | BF_EIM_CS5GCR2_DAP(v)))
#endif


/* --- Register HW_EIM_CS5GCR2, field MUX16_BYP_GRANT[12] (RW)
 *
 * Muxed 16 bypass grant. This bit when asserted causes EIM to bypass the grant/ack. arbitration
 * with NFC (only for 16 bit muxed mode accesses).
 *
 * Values:
 * 0 - EIM waits for grant before driving a 16 bit muxed mode access to the memory.
 * 1 - EIM ignores the grant signal and immediately drives a 16 bit muxed mode access to the memory.
 */

#define BP_EIM_CS5GCR2_MUX16_BYP_GRANT      (12)      //!< Bit position for EIM_CS5GCR2_MUX16_BYP_GRANT.
#define BM_EIM_CS5GCR2_MUX16_BYP_GRANT      (0x00001000)  //!< Bit mask for EIM_CS5GCR2_MUX16_BYP_GRANT.

//! @brief Get value of EIM_CS5GCR2_MUX16_BYP_GRANT from a register value.
#define BG_EIM_CS5GCR2_MUX16_BYP_GRANT(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_EIM_CS5GCR2_MUX16_BYP_GRANT) >> BP_EIM_CS5GCR2_MUX16_BYP_GRANT)

//! @brief Format value for bitfield EIM_CS5GCR2_MUX16_BYP_GRANT.
#define BF_EIM_CS5GCR2_MUX16_BYP_GRANT(v)   ((__REG_VALUE_TYPE((v), reg32_t) << BP_EIM_CS5GCR2_MUX16_BYP_GRANT) & BM_EIM_CS5GCR2_MUX16_BYP_GRANT)

#ifndef __LANGUAGE_ASM__
//! @brief Set the MUX16_BYP_GRANT field to a new value.
#define BW_EIM_CS5GCR2_MUX16_BYP_GRANT(v)   (HW_EIM_CS5GCR2_WR((HW_EIM_CS5GCR2_RD() & ~BM_EIM_CS5GCR2_MUX16_BYP_GRANT) | BF_EIM_CS5GCR2_MUX16_BYP_GRANT(v)))
#endif


//-------------------------------------------------------------------------------------------
// HW_EIM_CS5RCR1 - Chip Select n Read Configuration Register 1
//-------------------------------------------------------------------------------------------

#ifndef __LANGUAGE_ASM__
/*!
 * @brief HW_EIM_CS5RCR1 - Chip Select n Read Configuration Register 1 (RW)
 *
 * Reset value: 0x00000000
 *

 */
typedef union _hw_eim_cs5rcr1
{
    reg32_t U;
    struct _hw_eim_cs5rcr1_bitfields
    {
        unsigned RCSN : 3; //!< [2:0] Read CS Negation.
        unsigned RESERVED0 : 1; //!< [3] Reserved
        unsigned RCSA : 3; //!< [6:4] Read CS Assertion.
        unsigned RESERVED1 : 1; //!< [7] Reserved
        unsigned OEN : 3; //!< [10:8] OE Negation.
        unsigned RESERVED2 : 1; //!< [11] Reserved
        unsigned OEA : 3; //!< [14:12] OE Assertion.
        unsigned RESERVED3 : 1; //!< [15] Reserved
        unsigned RADVN : 3; //!< [18:16] ADV Negation.
        unsigned RAL : 1; //!< [19] Read ADV Low.
        unsigned RADVA : 3; //!< [22:20] ADV Assertion.
        unsigned RESERVED4 : 1; //!< [23] Reserved
        unsigned RWSC : 6; //!< [29:24] Read Wait State Control.
        unsigned RESERVED5 : 2; //!< [31:30] Reserved
    } B;
} hw_eim_cs5rcr1_t;
#endif

/*
 * constants & macros for entire EIM_CS5RCR1 register
 */
#define HW_EIM_CS5RCR1_ADDR      (REGS_EIM_BASE + 0x80)

#ifndef __LANGUAGE_ASM__
#define HW_EIM_CS5RCR1           (*(volatile hw_eim_cs5rcr1_t *) HW_EIM_CS5RCR1_ADDR)
#define HW_EIM_CS5RCR1_RD()      (HW_EIM_CS5RCR1.U)
#define HW_EIM_CS5RCR1_WR(v)     (HW_EIM_CS5RCR1.U = (v))
#define HW_EIM_CS5RCR1_SET(v)    (HW_EIM_CS5RCR1_WR(HW_EIM_CS5RCR1_RD() |  (v)))
#define HW_EIM_CS5RCR1_CLR(v)    (HW_EIM_CS5RCR1_WR(HW_EIM_CS5RCR1_RD() & ~(v)))
#define HW_EIM_CS5RCR1_TOG(v)    (HW_EIM_CS5RCR1_WR(HW_EIM_CS5RCR1_RD() ^  (v)))
#endif

/*
 * constants & macros for individual EIM_CS5RCR1 bitfields
 */

/* --- Register HW_EIM_CS5RCR1, field RCSN[2:0] (RW)
 *
 * Read CS Negation. This bit field determines when CS signal is negated during read cycles in
 * asynchronous single mode only (SRD=0 & APR = 0), according to the settings shown below. This bit
 * field is ignored when SRD=1. RCSN is cleared by a hardware reset. Example settings:
 *
 * Values:
 * 000 - 0 EIM clock cycles between end of read access and CS negation
 * 001 - 1 EIM clock cycles between end of read access and CS negation
 * 010 - 2 EIM clock cycles between end of read access and CS negation
 * 111 - 7 EIM clock cycles between end of read access and CS negation
 */

#define BP_EIM_CS5RCR1_RCSN      (0)      //!< Bit position for EIM_CS5RCR1_RCSN.
#define BM_EIM_CS5RCR1_RCSN      (0x00000007)  //!< Bit mask for EIM_CS5RCR1_RCSN.

//! @brief Get value of EIM_CS5RCR1_RCSN from a register value.
#define BG_EIM_CS5RCR1_RCSN(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_EIM_CS5RCR1_RCSN) >> BP_EIM_CS5RCR1_RCSN)

//! @brief Format value for bitfield EIM_CS5RCR1_RCSN.
#define BF_EIM_CS5RCR1_RCSN(v)   ((__REG_VALUE_TYPE((v), reg32_t) << BP_EIM_CS5RCR1_RCSN) & BM_EIM_CS5RCR1_RCSN)

#ifndef __LANGUAGE_ASM__
//! @brief Set the RCSN field to a new value.
#define BW_EIM_CS5RCR1_RCSN(v)   (HW_EIM_CS5RCR1_WR((HW_EIM_CS5RCR1_RD() & ~BM_EIM_CS5RCR1_RCSN) | BF_EIM_CS5RCR1_RCSN(v)))
#endif


/* --- Register HW_EIM_CS5RCR1, field RCSA[6:4] (RW)
 *
 * Read CS Assertion. This bit field determines when CS signal is asserted during read cycles
 * (synchronous or asynchronous mode), according to the settings shown below. RCSA is cleared by a
 * hardware reset. Example settings:
 *
 * Values:
 * 000 - 0 EIM clock cycles between beginning of read access and CS assertion
 * 001 - 1 EIM clock cycles between beginning of read access and CS assertion
 * 010 - 2 EIM clock cycles between beginning of read access and CS assertion
 * 111 - 7 EIM clock cycles between beginning of read access and CS assertion
 */

#define BP_EIM_CS5RCR1_RCSA      (4)      //!< Bit position for EIM_CS5RCR1_RCSA.
#define BM_EIM_CS5RCR1_RCSA      (0x00000070)  //!< Bit mask for EIM_CS5RCR1_RCSA.

//! @brief Get value of EIM_CS5RCR1_RCSA from a register value.
#define BG_EIM_CS5RCR1_RCSA(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_EIM_CS5RCR1_RCSA) >> BP_EIM_CS5RCR1_RCSA)

//! @brief Format value for bitfield EIM_CS5RCR1_RCSA.
#define BF_EIM_CS5RCR1_RCSA(v)   ((__REG_VALUE_TYPE((v), reg32_t) << BP_EIM_CS5RCR1_RCSA) & BM_EIM_CS5RCR1_RCSA)

#ifndef __LANGUAGE_ASM__
//! @brief Set the RCSA field to a new value.
#define BW_EIM_CS5RCR1_RCSA(v)   (HW_EIM_CS5RCR1_WR((HW_EIM_CS5RCR1_RD() & ~BM_EIM_CS5RCR1_RCSA) | BF_EIM_CS5RCR1_RCSA(v)))
#endif


/* --- Register HW_EIM_CS5RCR1, field OEN[10:8] (RW)
 *
 * OE Negation. This bit field determines when OE signal is negated during read cycles in
 * asynchronous single mode only (SRD=0 & APR = 0), according to the settings shown below. This bit
 * field is ignored when SRD=1. OEN is cleared by a hardware reset. Example settings:
 *
 * Values:
 * 000 - 0 EIM clock cycles between end of access and OE negation
 * 001 - 1 EIM clock cycles between end of access and OE negation
 * 010 - 2 EIM clock cycles between end of access and OE negation
 * 111 - 7 EIM clock cycles between end of access and OE negation
 */

#define BP_EIM_CS5RCR1_OEN      (8)      //!< Bit position for EIM_CS5RCR1_OEN.
#define BM_EIM_CS5RCR1_OEN      (0x00000700)  //!< Bit mask for EIM_CS5RCR1_OEN.

//! @brief Get value of EIM_CS5RCR1_OEN from a register value.
#define BG_EIM_CS5RCR1_OEN(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_EIM_CS5RCR1_OEN) >> BP_EIM_CS5RCR1_OEN)

//! @brief Format value for bitfield EIM_CS5RCR1_OEN.
#define BF_EIM_CS5RCR1_OEN(v)   ((__REG_VALUE_TYPE((v), reg32_t) << BP_EIM_CS5RCR1_OEN) & BM_EIM_CS5RCR1_OEN)

#ifndef __LANGUAGE_ASM__
//! @brief Set the OEN field to a new value.
#define BW_EIM_CS5RCR1_OEN(v)   (HW_EIM_CS5RCR1_WR((HW_EIM_CS5RCR1_RD() & ~BM_EIM_CS5RCR1_OEN) | BF_EIM_CS5RCR1_OEN(v)))
#endif


/* --- Register HW_EIM_CS5RCR1, field OEA[14:12] (RW)
 *
 * OE Assertion. This bit field determines when OE signal are asserted during read cycles
 * (synchronous or asynchronous mode), according to the settings shown below. OEA is cleared by a
 * hardware reset. In muxed mode OE assertion occurs (OEA + RADVN + RADVA + ADH +1) EIM clock cycles
 * from start of access. The reset value for EIM_CS0RCR1[OEA] is 0b000 if EIM_BOOT[2] = 0. If
 * EIM_BOOT[2] is 1, the reset value for EIM_CS0RCR1 is 0b010. The reset value of this field for
 * EIM_CS1RCR1 - EIM_CS5RCR1 is 0b000. Example settings:
 *
 * Values:
 * 000 - 0 EIM clock cycles between beginning of access and OE assertion
 * 001 - 1 EIM clock cycles between beginning of access and OE assertion
 * 010 - 2 EIM clock cycles between beginning of access and OE assertion
 * 111 - 7 EIM clock cycles between beginning of access and OE assertion
 */

#define BP_EIM_CS5RCR1_OEA      (12)      //!< Bit position for EIM_CS5RCR1_OEA.
#define BM_EIM_CS5RCR1_OEA      (0x00007000)  //!< Bit mask for EIM_CS5RCR1_OEA.

//! @brief Get value of EIM_CS5RCR1_OEA from a register value.
#define BG_EIM_CS5RCR1_OEA(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_EIM_CS5RCR1_OEA) >> BP_EIM_CS5RCR1_OEA)

//! @brief Format value for bitfield EIM_CS5RCR1_OEA.
#define BF_EIM_CS5RCR1_OEA(v)   ((__REG_VALUE_TYPE((v), reg32_t) << BP_EIM_CS5RCR1_OEA) & BM_EIM_CS5RCR1_OEA)

#ifndef __LANGUAGE_ASM__
//! @brief Set the OEA field to a new value.
#define BW_EIM_CS5RCR1_OEA(v)   (HW_EIM_CS5RCR1_WR((HW_EIM_CS5RCR1_RD() & ~BM_EIM_CS5RCR1_OEA) | BF_EIM_CS5RCR1_OEA(v)))
#endif


/* --- Register HW_EIM_CS5RCR1, field RADVN[18:16] (RW)
 *
 * ADV Negation. This bit field determines when ADV signal to memory is negated during read
 * accesses. When SRD=1 (synchronous read mode), ADV negation occurs according to the following
 * formula: (RADVN + RADVA + BCD + BCS + 1) EIM clock cycles from start of access. When asynchronous
 * read mode is applied (SRD=0) and RAL=0 ADV negation occurs according to the following formula:
 * (RADVN + RADVA + 1) EIM clock cycles from start of access. RADVN is cleared by a hardware reset.
 * the reset value for EIM_CS0RCR1[RADVN] = 2. For EIM_CS1RCR1 - EIM_CS5RCR1, the reset value is
 * 0b000. This field should be configured so ADV negation will occur before the end of access. For
 * ADV negation at the same time with the end of access user should RAL bit.
 */

#define BP_EIM_CS5RCR1_RADVN      (16)      //!< Bit position for EIM_CS5RCR1_RADVN.
#define BM_EIM_CS5RCR1_RADVN      (0x00070000)  //!< Bit mask for EIM_CS5RCR1_RADVN.

//! @brief Get value of EIM_CS5RCR1_RADVN from a register value.
#define BG_EIM_CS5RCR1_RADVN(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_EIM_CS5RCR1_RADVN) >> BP_EIM_CS5RCR1_RADVN)

//! @brief Format value for bitfield EIM_CS5RCR1_RADVN.
#define BF_EIM_CS5RCR1_RADVN(v)   ((__REG_VALUE_TYPE((v), reg32_t) << BP_EIM_CS5RCR1_RADVN) & BM_EIM_CS5RCR1_RADVN)

#ifndef __LANGUAGE_ASM__
//! @brief Set the RADVN field to a new value.
#define BW_EIM_CS5RCR1_RADVN(v)   (HW_EIM_CS5RCR1_WR((HW_EIM_CS5RCR1_RD() & ~BM_EIM_CS5RCR1_RADVN) | BF_EIM_CS5RCR1_RADVN(v)))
#endif

/* --- Register HW_EIM_CS5RCR1, field RAL[19] (RW)
 *
 * Read ADV Low. This bit field determine ADV signal negation time. When RAL=1, RADVN bit field is
 * ignored and ADV signal will stay asserted until end of access. When RAL=0 negation of ADV signal
 * is according to RADVN bit field configuration.
 */

#define BP_EIM_CS5RCR1_RAL      (19)      //!< Bit position for EIM_CS5RCR1_RAL.
#define BM_EIM_CS5RCR1_RAL      (0x00080000)  //!< Bit mask for EIM_CS5RCR1_RAL.

//! @brief Get value of EIM_CS5RCR1_RAL from a register value.
#define BG_EIM_CS5RCR1_RAL(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_EIM_CS5RCR1_RAL) >> BP_EIM_CS5RCR1_RAL)

//! @brief Format value for bitfield EIM_CS5RCR1_RAL.
#define BF_EIM_CS5RCR1_RAL(v)   ((__REG_VALUE_TYPE((v), reg32_t) << BP_EIM_CS5RCR1_RAL) & BM_EIM_CS5RCR1_RAL)

#ifndef __LANGUAGE_ASM__
//! @brief Set the RAL field to a new value.
#define BW_EIM_CS5RCR1_RAL(v)   (HW_EIM_CS5RCR1_WR((HW_EIM_CS5RCR1_RD() & ~BM_EIM_CS5RCR1_RAL) | BF_EIM_CS5RCR1_RAL(v)))
#endif

/* --- Register HW_EIM_CS5RCR1, field RADVA[22:20] (RW)
 *
 * ADV Assertion. This bit field determines when ADV signal is asserted for synchronous or
 * asynchronous read modes according to the settings shown below. RADVA is cleared by a hardware
 * reset. Example settings:
 *
 * Values:
 * 000 - 0 EIM clock cycles between beginning of access and ADV assertion
 * 001 - 1 EIM clock cycles between beginning of access and ADV assertion
 * 010 - 2 EIM clock cycles between beginning of access and ADV assertion
 * 111 - 7 EIM clock cycles between beginning of access and ADV assertion
 */

#define BP_EIM_CS5RCR1_RADVA      (20)      //!< Bit position for EIM_CS5RCR1_RADVA.
#define BM_EIM_CS5RCR1_RADVA      (0x00700000)  //!< Bit mask for EIM_CS5RCR1_RADVA.

//! @brief Get value of EIM_CS5RCR1_RADVA from a register value.
#define BG_EIM_CS5RCR1_RADVA(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_EIM_CS5RCR1_RADVA) >> BP_EIM_CS5RCR1_RADVA)

//! @brief Format value for bitfield EIM_CS5RCR1_RADVA.
#define BF_EIM_CS5RCR1_RADVA(v)   ((__REG_VALUE_TYPE((v), reg32_t) << BP_EIM_CS5RCR1_RADVA) & BM_EIM_CS5RCR1_RADVA)

#ifndef __LANGUAGE_ASM__
//! @brief Set the RADVA field to a new value.
#define BW_EIM_CS5RCR1_RADVA(v)   (HW_EIM_CS5RCR1_WR((HW_EIM_CS5RCR1_RD() & ~BM_EIM_CS5RCR1_RADVA) | BF_EIM_CS5RCR1_RADVA(v)))
#endif


/* --- Register HW_EIM_CS5RCR1, field RWSC[29:24] (RW)
 *
 * Read Wait State Control. This bit field programs the number of wait-states, according to the
 * settings shown below, for synchronous or asynchronous read access to the external device
 * connected to the chip select. When SRD=1 and RFL=0, RWSC indicates the number of burst clock
 * (BCLK) cycles from the start of an access, before the controller can start sample data.Since WAIT
 * signal can be asserted one cycle before the first data can be sampled, the controller starts
 * evaluating the WAIT signal state one cycle before, this is referred as handshake mode or variable
 * latency mode. When SRD=1 and RFL=1, RWSC indicates the number of burst clock (BCLK) cycles from
 * the start of an access, until the external device is ready for data transfer, this is referred as
 * fix latency mode. When SRD=0, RFL bit is ignored, RWSC indicates the asynchronous access length
 * and the number of EIM clock cycles from the start of access until the external device is ready
 * for data transfer. RWSC is cleared by a hardware reset. The reset value for EIM_CS0RCR1,
 * RWSC[5:0] = 0b011100. For CG1RCR1 - CS1RCR5 the reset value is 0b000000. Example settings:
 *
 * Values:
 * 000000 - Reserved
 * 000001 - RWSC value is 1
 * 000010 - RWSC value is 2
 * 111101 - RWSC value is 61
 * 111110 - RWSC value is 62
 * 111111 - RWSC value is 63
 */

#define BP_EIM_CS5RCR1_RWSC      (24)      //!< Bit position for EIM_CS5RCR1_RWSC.
#define BM_EIM_CS5RCR1_RWSC      (0x3f000000)  //!< Bit mask for EIM_CS5RCR1_RWSC.

//! @brief Get value of EIM_CS5RCR1_RWSC from a register value.
#define BG_EIM_CS5RCR1_RWSC(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_EIM_CS5RCR1_RWSC) >> BP_EIM_CS5RCR1_RWSC)

//! @brief Format value for bitfield EIM_CS5RCR1_RWSC.
#define BF_EIM_CS5RCR1_RWSC(v)   ((__REG_VALUE_TYPE((v), reg32_t) << BP_EIM_CS5RCR1_RWSC) & BM_EIM_CS5RCR1_RWSC)

#ifndef __LANGUAGE_ASM__
//! @brief Set the RWSC field to a new value.
#define BW_EIM_CS5RCR1_RWSC(v)   (HW_EIM_CS5RCR1_WR((HW_EIM_CS5RCR1_RD() & ~BM_EIM_CS5RCR1_RWSC) | BF_EIM_CS5RCR1_RWSC(v)))
#endif


//-------------------------------------------------------------------------------------------
// HW_EIM_CS5RCR2 - Chip Select n Read Configuration Register 2
//-------------------------------------------------------------------------------------------

#ifndef __LANGUAGE_ASM__
/*!
 * @brief HW_EIM_CS5RCR2 - Chip Select n Read Configuration Register 2 (RW)
 *
 * Reset value: 0x00000000
 *

 */
typedef union _hw_eim_cs5rcr2
{
    reg32_t U;
    struct _hw_eim_cs5rcr2_bitfields
    {
        unsigned RBEN : 3; //!< [2:0] Read BE Negation.
        unsigned RBE : 1; //!< [3] Read BE enable.
        unsigned RBEA : 3; //!< [6:4] Read BE Assertion.
        unsigned RESERVED0 : 1; //!< [7] Reserved
        unsigned RL : 2; //!< [9:8] Read Latency.
        unsigned RESERVED1 : 2; //!< [11:10] Reserved
        unsigned PAT : 3; //!< [14:12] Page Access Time.
        unsigned APR : 1; //!< [15] Asynchronous Page Read.
        unsigned RESERVED2 : 16; //!< [31:16] Reserved
    } B;
} hw_eim_cs5rcr2_t;
#endif

/*
 * constants & macros for entire EIM_CS5RCR2 register
 */
#define HW_EIM_CS5RCR2_ADDR      (REGS_EIM_BASE + 0x84)

#ifndef __LANGUAGE_ASM__
#define HW_EIM_CS5RCR2           (*(volatile hw_eim_cs5rcr2_t *) HW_EIM_CS5RCR2_ADDR)
#define HW_EIM_CS5RCR2_RD()      (HW_EIM_CS5RCR2.U)
#define HW_EIM_CS5RCR2_WR(v)     (HW_EIM_CS5RCR2.U = (v))
#define HW_EIM_CS5RCR2_SET(v)    (HW_EIM_CS5RCR2_WR(HW_EIM_CS5RCR2_RD() |  (v)))
#define HW_EIM_CS5RCR2_CLR(v)    (HW_EIM_CS5RCR2_WR(HW_EIM_CS5RCR2_RD() & ~(v)))
#define HW_EIM_CS5RCR2_TOG(v)    (HW_EIM_CS5RCR2_WR(HW_EIM_CS5RCR2_RD() ^  (v)))
#endif

/*
 * constants & macros for individual EIM_CS5RCR2 bitfields
 */

/* --- Register HW_EIM_CS5RCR2, field RBEN[2:0] (RW)
 *
 * Read BE Negation. This bit field determines when BE signal is negated during read cycles in
 * asynchronous single mode only (SRD=0 & APR=0), according to the settings shown below. This bit
 * field is ignored when SRD=1. RBEN is cleared by a hardware reset. Example settings:
 *
 * Values:
 * 000 - 0 EIM clock cycles between end of read access and BE negation
 * 001 - 1 EIM clock cycles between end of read access and BE negation
 * 010 - 2 EIM clock cycles between end of read access and BE negation
 * 111 - 7 EIM clock cycles between end of read access and BE negation
 */

#define BP_EIM_CS5RCR2_RBEN      (0)      //!< Bit position for EIM_CS5RCR2_RBEN.
#define BM_EIM_CS5RCR2_RBEN      (0x00000007)  //!< Bit mask for EIM_CS5RCR2_RBEN.

//! @brief Get value of EIM_CS5RCR2_RBEN from a register value.
#define BG_EIM_CS5RCR2_RBEN(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_EIM_CS5RCR2_RBEN) >> BP_EIM_CS5RCR2_RBEN)

//! @brief Format value for bitfield EIM_CS5RCR2_RBEN.
#define BF_EIM_CS5RCR2_RBEN(v)   ((__REG_VALUE_TYPE((v), reg32_t) << BP_EIM_CS5RCR2_RBEN) & BM_EIM_CS5RCR2_RBEN)

#ifndef __LANGUAGE_ASM__
//! @brief Set the RBEN field to a new value.
#define BW_EIM_CS5RCR2_RBEN(v)   (HW_EIM_CS5RCR2_WR((HW_EIM_CS5RCR2_RD() & ~BM_EIM_CS5RCR2_RBEN) | BF_EIM_CS5RCR2_RBEN(v)))
#endif


/* --- Register HW_EIM_CS5RCR2, field RBE[3] (RW)
 *
 * Read BE enable. This bit field determines if BE will be asserted during read access.
 *
 * Values:
 * 0 - - BE are disabled during read access.
 * 1- - BE are enable during read access according to value of RBEA & RBEN bit fields.
 */

#define BP_EIM_CS5RCR2_RBE      (3)      //!< Bit position for EIM_CS5RCR2_RBE.
#define BM_EIM_CS5RCR2_RBE      (0x00000008)  //!< Bit mask for EIM_CS5RCR2_RBE.

//! @brief Get value of EIM_CS5RCR2_RBE from a register value.
#define BG_EIM_CS5RCR2_RBE(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_EIM_CS5RCR2_RBE) >> BP_EIM_CS5RCR2_RBE)

//! @brief Format value for bitfield EIM_CS5RCR2_RBE.
#define BF_EIM_CS5RCR2_RBE(v)   ((__REG_VALUE_TYPE((v), reg32_t) << BP_EIM_CS5RCR2_RBE) & BM_EIM_CS5RCR2_RBE)

#ifndef __LANGUAGE_ASM__
//! @brief Set the RBE field to a new value.
#define BW_EIM_CS5RCR2_RBE(v)   (HW_EIM_CS5RCR2_WR((HW_EIM_CS5RCR2_RD() & ~BM_EIM_CS5RCR2_RBE) | BF_EIM_CS5RCR2_RBE(v)))
#endif


/* --- Register HW_EIM_CS5RCR2, field RBEA[6:4] (RW)
 *
 * Read BE Assertion. This bit field determines when BE signal is asserted during read cycles
 * (synchronous or asynchronous mode), according to the settings shown below. RBEA is cleared by a
 * hardware reset. Example settings:
 *
 * Values:
 * 000 - 0 EIM clock cycles between beginning of read access and BE assertion
 * 001 - 1 EIM clock cycles between beginning of read access and BE assertion
 * 010 - 2 EIM clock cycles between beginning of read access and BE assertion
 * 111 - 7 EIM clock cycles between beginning of read access and BE assertion
 */

#define BP_EIM_CS5RCR2_RBEA      (4)      //!< Bit position for EIM_CS5RCR2_RBEA.
#define BM_EIM_CS5RCR2_RBEA      (0x00000070)  //!< Bit mask for EIM_CS5RCR2_RBEA.

//! @brief Get value of EIM_CS5RCR2_RBEA from a register value.
#define BG_EIM_CS5RCR2_RBEA(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_EIM_CS5RCR2_RBEA) >> BP_EIM_CS5RCR2_RBEA)

//! @brief Format value for bitfield EIM_CS5RCR2_RBEA.
#define BF_EIM_CS5RCR2_RBEA(v)   ((__REG_VALUE_TYPE((v), reg32_t) << BP_EIM_CS5RCR2_RBEA) & BM_EIM_CS5RCR2_RBEA)

#ifndef __LANGUAGE_ASM__
//! @brief Set the RBEA field to a new value.
#define BW_EIM_CS5RCR2_RBEA(v)   (HW_EIM_CS5RCR2_WR((HW_EIM_CS5RCR2_RD() & ~BM_EIM_CS5RCR2_RBEA) | BF_EIM_CS5RCR2_RBEA(v)))
#endif


/* --- Register HW_EIM_CS5RCR2, field RL[9:8] (RW)
 *
 * Read Latency. This bit field indicates cycle latency when executing a synchronous read operation.
 * The fields holds the feedback clock loop delay in aclk cycle units. This field is cleared by a
 * hardware reset.
 *
 * Values:
 * 00 - Feedback clock loop delay is up to 1 cycle for BCD = 0 or 1.5 cycles for BCD != 0
 * 01 - Feedback clock loop delay is up to 2 cycles for BCD = 0 or 2.5 cycles for BCD != 0
 * 10 - Feedback clock loop delay is up to 3 cycles for BCD = 0 or 3.5 cycles for BCD != 0
 * 11 - Feedback clock loop delay is up to 4 cycles for BCD = 0 or 4.5 cycles for BCD != 0
 */

#define BP_EIM_CS5RCR2_RL      (8)      //!< Bit position for EIM_CS5RCR2_RL.
#define BM_EIM_CS5RCR2_RL      (0x00000300)  //!< Bit mask for EIM_CS5RCR2_RL.

//! @brief Get value of EIM_CS5RCR2_RL from a register value.
#define BG_EIM_CS5RCR2_RL(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_EIM_CS5RCR2_RL) >> BP_EIM_CS5RCR2_RL)

//! @brief Format value for bitfield EIM_CS5RCR2_RL.
#define BF_EIM_CS5RCR2_RL(v)   ((__REG_VALUE_TYPE((v), reg32_t) << BP_EIM_CS5RCR2_RL) & BM_EIM_CS5RCR2_RL)

#ifndef __LANGUAGE_ASM__
//! @brief Set the RL field to a new value.
#define BW_EIM_CS5RCR2_RL(v)   (HW_EIM_CS5RCR2_WR((HW_EIM_CS5RCR2_RD() & ~BM_EIM_CS5RCR2_RL) | BF_EIM_CS5RCR2_RL(v)))
#endif


/* --- Register HW_EIM_CS5RCR2, field PAT[14:12] (RW)
 *
 * Page Access Time. This bit field is used in Asynchronous Page Read mode only (APR=1). the initial
 * access is set by RWSC as in regular asynchronous mode. the consecutive address assertions width
 * determine by PAT field according to the settings shown below. when APR=0 this field is ignored.
 * PAT is cleared by a hardware reset for EIM_CS1GCR1 - EIM_CS5GCR1.
 *
 * Values:
 * 000 - Address width is 2 EIM clock cycles
 * 001 - Address width is 3 EIM clock cycles
 * 010 - Address width is 4 EIM clock cycles
 * 011 - Address width is 5 EIM clock cycles
 * 100 - Address width is 6 EIM clock cycles
 * 101 - Address width is 7 EIM clock cycles
 * 110 - Address width is 8 EIM clock cycles
 * 111 - Address width is 9 EIM clock cycles
 */

#define BP_EIM_CS5RCR2_PAT      (12)      //!< Bit position for EIM_CS5RCR2_PAT.
#define BM_EIM_CS5RCR2_PAT      (0x00007000)  //!< Bit mask for EIM_CS5RCR2_PAT.

//! @brief Get value of EIM_CS5RCR2_PAT from a register value.
#define BG_EIM_CS5RCR2_PAT(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_EIM_CS5RCR2_PAT) >> BP_EIM_CS5RCR2_PAT)

//! @brief Format value for bitfield EIM_CS5RCR2_PAT.
#define BF_EIM_CS5RCR2_PAT(v)   ((__REG_VALUE_TYPE((v), reg32_t) << BP_EIM_CS5RCR2_PAT) & BM_EIM_CS5RCR2_PAT)

#ifndef __LANGUAGE_ASM__
//! @brief Set the PAT field to a new value.
#define BW_EIM_CS5RCR2_PAT(v)   (HW_EIM_CS5RCR2_WR((HW_EIM_CS5RCR2_RD() & ~BM_EIM_CS5RCR2_PAT) | BF_EIM_CS5RCR2_PAT(v)))
#endif


/* --- Register HW_EIM_CS5RCR2, field APR[15] (RW)
 *
 * Asynchronous Page Read. This bit field determine the asynchronous read mode to the external
 * device. When APR=0, the async. read access is done as single word (where word is defined by the
 * DSZ field). when APR=1, the async. read access executed as page read. page size is according to
 * BL field config., RCSN,RBEN,OEN and RADVN are being ignored. APR is cleared by a hardware reset
 * for EIM_CS1GCR1 - EIM_CS5GCR1. SRD=0 and MUM=0 must apply when APR=1
 */

#define BP_EIM_CS5RCR2_APR      (15)      //!< Bit position for EIM_CS5RCR2_APR.
#define BM_EIM_CS5RCR2_APR      (0x00008000)  //!< Bit mask for EIM_CS5RCR2_APR.

//! @brief Get value of EIM_CS5RCR2_APR from a register value.
#define BG_EIM_CS5RCR2_APR(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_EIM_CS5RCR2_APR) >> BP_EIM_CS5RCR2_APR)

//! @brief Format value for bitfield EIM_CS5RCR2_APR.
#define BF_EIM_CS5RCR2_APR(v)   ((__REG_VALUE_TYPE((v), reg32_t) << BP_EIM_CS5RCR2_APR) & BM_EIM_CS5RCR2_APR)

#ifndef __LANGUAGE_ASM__
//! @brief Set the APR field to a new value.
#define BW_EIM_CS5RCR2_APR(v)   (HW_EIM_CS5RCR2_WR((HW_EIM_CS5RCR2_RD() & ~BM_EIM_CS5RCR2_APR) | BF_EIM_CS5RCR2_APR(v)))
#endif

//-------------------------------------------------------------------------------------------
// HW_EIM_CS5WCR1 - Chip Select n Write Configuration Register 1
//-------------------------------------------------------------------------------------------

#ifndef __LANGUAGE_ASM__
/*!
 * @brief HW_EIM_CS5WCR1 - Chip Select n Write Configuration Register 1 (RW)
 *
 * Reset value: 0x00000000
 *

 */
typedef union _hw_eim_cs5wcr1
{
    reg32_t U;
    struct _hw_eim_cs5wcr1_bitfields
    {
        unsigned WCSN : 3; //!< [2:0] Write CS Negation.
        unsigned WCSA : 3; //!< [5:3] Write CS Assertion.
        unsigned WEN : 3; //!< [8:6] WE Negation.
        unsigned WEA : 3; //!< [11:9] WE Assertion.
        unsigned WBEN : 3; //!< [14:12] BE[3:0] Negation.
        unsigned WBEA : 3; //!< [17:15] BE Assertion.
        unsigned WADVN : 3; //!< [20:18] ADV Negation.
        unsigned WADVA : 3; //!< [23:21] ADV Assertion.
        unsigned WWSC : 6; //!< [29:24] Write Wait State Control.
        unsigned WBED : 1; //!< [30] Write Byte Enable Disable.
        unsigned WAL : 1; //!< [31] Write ADV Low.
    } B;
} hw_eim_cs5wcr1_t;
#endif

/*
 * constants & macros for entire EIM_CS5WCR1 register
 */
#define HW_EIM_CS5WCR1_ADDR      (REGS_EIM_BASE + 0x88)

#ifndef __LANGUAGE_ASM__
#define HW_EIM_CS5WCR1           (*(volatile hw_eim_cs5wcr1_t *) HW_EIM_CS5WCR1_ADDR)
#define HW_EIM_CS5WCR1_RD()      (HW_EIM_CS5WCR1.U)
#define HW_EIM_CS5WCR1_WR(v)     (HW_EIM_CS5WCR1.U = (v))
#define HW_EIM_CS5WCR1_SET(v)    (HW_EIM_CS5WCR1_WR(HW_EIM_CS5WCR1_RD() |  (v)))
#define HW_EIM_CS5WCR1_CLR(v)    (HW_EIM_CS5WCR1_WR(HW_EIM_CS5WCR1_RD() & ~(v)))
#define HW_EIM_CS5WCR1_TOG(v)    (HW_EIM_CS5WCR1_WR(HW_EIM_CS5WCR1_RD() ^  (v)))
#endif

/*
 * constants & macros for individual EIM_CS5WCR1 bitfields
 */

/* --- Register HW_EIM_CS5WCR1, field WCSN[2:0] (RW)
 *
 * Write CS Negation. This bit field determines when CS signal is negated during write cycles in
 * asynchronous mode only (SWR=0), according to the settings shown below. This bit field is ignored
 * when SWR=1. WCSN is cleared by a hardware reset. Example settings:
 *
 * Values:
 * 000 - 0 EIM clock cycles between end of read access and CS negation
 * 001 - 1 EIM clock cycles between end of read access and CS negation
 * 010 - 2 EIM clock cycles between end of read access and CS negation
 * 111 - 7 EIM clock cycles between end of read access and CS negation
 */

#define BP_EIM_CS5WCR1_WCSN      (0)      //!< Bit position for EIM_CS5WCR1_WCSN.
#define BM_EIM_CS5WCR1_WCSN      (0x00000007)  //!< Bit mask for EIM_CS5WCR1_WCSN.

//! @brief Get value of EIM_CS5WCR1_WCSN from a register value.
#define BG_EIM_CS5WCR1_WCSN(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_EIM_CS5WCR1_WCSN) >> BP_EIM_CS5WCR1_WCSN)

//! @brief Format value for bitfield EIM_CS5WCR1_WCSN.
#define BF_EIM_CS5WCR1_WCSN(v)   ((__REG_VALUE_TYPE((v), reg32_t) << BP_EIM_CS5WCR1_WCSN) & BM_EIM_CS5WCR1_WCSN)

#ifndef __LANGUAGE_ASM__
//! @brief Set the WCSN field to a new value.
#define BW_EIM_CS5WCR1_WCSN(v)   (HW_EIM_CS5WCR1_WR((HW_EIM_CS5WCR1_RD() & ~BM_EIM_CS5WCR1_WCSN) | BF_EIM_CS5WCR1_WCSN(v)))
#endif


/* --- Register HW_EIM_CS5WCR1, field WCSA[5:3] (RW)
 *
 * Write CS Assertion. This bit field determines when CS signal is asserted during write cycles
 * (synchronous or asynchronous mode), according to the settings shown below.this bit field is
 * ignored when executing a read access to the external device. WCSA is cleared by a hardware reset.
 * Example settings:
 *
 * Values:
 * 000 - 0 EIM clock cycles between beginning of write access and CS assertion
 * 001 - 1 EIM clock cycles between beginning of write access and CS assertion
 * 010 - 2 EIM clock cycles between beginning of write access and CS assertion
 * 111 - 7 EIMclock cycles between beginning of write access and CS assertion
 */

#define BP_EIM_CS5WCR1_WCSA      (3)      //!< Bit position for EIM_CS5WCR1_WCSA.
#define BM_EIM_CS5WCR1_WCSA      (0x00000038)  //!< Bit mask for EIM_CS5WCR1_WCSA.

//! @brief Get value of EIM_CS5WCR1_WCSA from a register value.
#define BG_EIM_CS5WCR1_WCSA(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_EIM_CS5WCR1_WCSA) >> BP_EIM_CS5WCR1_WCSA)

//! @brief Format value for bitfield EIM_CS5WCR1_WCSA.
#define BF_EIM_CS5WCR1_WCSA(v)   ((__REG_VALUE_TYPE((v), reg32_t) << BP_EIM_CS5WCR1_WCSA) & BM_EIM_CS5WCR1_WCSA)

#ifndef __LANGUAGE_ASM__
//! @brief Set the WCSA field to a new value.
#define BW_EIM_CS5WCR1_WCSA(v)   (HW_EIM_CS5WCR1_WR((HW_EIM_CS5WCR1_RD() & ~BM_EIM_CS5WCR1_WCSA) | BF_EIM_CS5WCR1_WCSA(v)))
#endif


/* --- Register HW_EIM_CS5WCR1, field WEN[8:6] (RW)
 *
 * WE Negation. This bit field determines when WE signal is negated during write cycles in
 * asynchronous mode only (SWR=0), according to the settings shown below. This bit field is ignored
 * when SWR=1. WEN is cleared by a hardware reset. Reset value for EIM_CS0WCR for WEN is 2. For
 * EIM_CS1WCR - EIM_CS5WCR reset value is 000. Example settings:
 *
 * Values:
 * 000 - 0 EIM clock cycles between beginning of access and WE assertion
 * 001 - 1 EIM clock cycles between beginning of access and WE assertion
 * 010 - 2 EIM clock cycles between beginning of access and WE assertion
 * 111 - 7 EIM clock cycles between beginning of access and WE assertion
 */

#define BP_EIM_CS5WCR1_WEN      (6)      //!< Bit position for EIM_CS5WCR1_WEN.
#define BM_EIM_CS5WCR1_WEN      (0x000001c0)  //!< Bit mask for EIM_CS5WCR1_WEN.

//! @brief Get value of EIM_CS5WCR1_WEN from a register value.
#define BG_EIM_CS5WCR1_WEN(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_EIM_CS5WCR1_WEN) >> BP_EIM_CS5WCR1_WEN)

//! @brief Format value for bitfield EIM_CS5WCR1_WEN.
#define BF_EIM_CS5WCR1_WEN(v)   ((__REG_VALUE_TYPE((v), reg32_t) << BP_EIM_CS5WCR1_WEN) & BM_EIM_CS5WCR1_WEN)

#ifndef __LANGUAGE_ASM__
//! @brief Set the WEN field to a new value.
#define BW_EIM_CS5WCR1_WEN(v)   (HW_EIM_CS5WCR1_WR((HW_EIM_CS5WCR1_RD() & ~BM_EIM_CS5WCR1_WEN) | BF_EIM_CS5WCR1_WEN(v)))
#endif


/* --- Register HW_EIM_CS5WCR1, field WEA[11:9] (RW)
 *
 * WE Assertion. This bit field determines when WE signal is asserted during write cycles
 * (synchronous or asynchronous mode), according to the settings shown below. This bit field is
 * ignored when executing a read access to the external device. WEA is cleared by a hardware reset.
 * Reset value for EIM_CS0WCR for WEA is 2. For EIM_CS1WCR - EIM_CS5WCR reset value is 000. Example
 * settings:
 *
 * Values:
 * 000 - 0 EIM clock cycles between beginning of access and WE assertion
 * 001 - 1 EIM clock cycles between beginning of access and WE assertion
 * 010 - 2 EIM clock cycles between beginning of access and WE assertion
 * 111 - 7 EIMclock cycles between beginning of access and WE assertion
 */

#define BP_EIM_CS5WCR1_WEA      (9)      //!< Bit position for EIM_CS5WCR1_WEA.
#define BM_EIM_CS5WCR1_WEA      (0x00000e00)  //!< Bit mask for EIM_CS5WCR1_WEA.

//! @brief Get value of EIM_CS5WCR1_WEA from a register value.
#define BG_EIM_CS5WCR1_WEA(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_EIM_CS5WCR1_WEA) >> BP_EIM_CS5WCR1_WEA)

//! @brief Format value for bitfield EIM_CS5WCR1_WEA.
#define BF_EIM_CS5WCR1_WEA(v)   ((__REG_VALUE_TYPE((v), reg32_t) << BP_EIM_CS5WCR1_WEA) & BM_EIM_CS5WCR1_WEA)

#ifndef __LANGUAGE_ASM__
//! @brief Set the WEA field to a new value.
#define BW_EIM_CS5WCR1_WEA(v)   (HW_EIM_CS5WCR1_WR((HW_EIM_CS5WCR1_RD() & ~BM_EIM_CS5WCR1_WEA) | BF_EIM_CS5WCR1_WEA(v)))
#endif


/* --- Register HW_EIM_CS5WCR1, field WBEN[14:12] (RW)
 *
 * BE[3:0] Negation. This bit field determines when BE[3:0] bus signal is negated during write
 * cycles in async. mode only (SWR=0), according to the settings shown below. This bit field is
 * ignored when SWR=1. BEN is cleared by a hardware reset. Reset value for EIM_CS0WCR for WBEN is 2.
 * For EIM_CS1WCR - EIM_CS5WCR reset value is 000. Example settings: 000 0 EIM clock cycles between
 * end of access and WE negation 001 1 EIM clock cycles between end of access and WE negation 010 2
 * EIM clock cycles between end of access and WE negation 111 7 EIM clock cycles between end of
 * access and WE negation
 */

#define BP_EIM_CS5WCR1_WBEN      (12)      //!< Bit position for EIM_CS5WCR1_WBEN.
#define BM_EIM_CS5WCR1_WBEN      (0x00007000)  //!< Bit mask for EIM_CS5WCR1_WBEN.

//! @brief Get value of EIM_CS5WCR1_WBEN from a register value.
#define BG_EIM_CS5WCR1_WBEN(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_EIM_CS5WCR1_WBEN) >> BP_EIM_CS5WCR1_WBEN)

//! @brief Format value for bitfield EIM_CS5WCR1_WBEN.
#define BF_EIM_CS5WCR1_WBEN(v)   ((__REG_VALUE_TYPE((v), reg32_t) << BP_EIM_CS5WCR1_WBEN) & BM_EIM_CS5WCR1_WBEN)

#ifndef __LANGUAGE_ASM__
//! @brief Set the WBEN field to a new value.
#define BW_EIM_CS5WCR1_WBEN(v)   (HW_EIM_CS5WCR1_WR((HW_EIM_CS5WCR1_RD() & ~BM_EIM_CS5WCR1_WBEN) | BF_EIM_CS5WCR1_WBEN(v)))
#endif

/* --- Register HW_EIM_CS5WCR1, field WBEA[17:15] (RW)
 *
 * BE Assertion. This bit field determines when BE signal is asserted during write cycles in async.
 * mode only (SWR=0), according to the settings shown below. BEA is cleared by a hardware reset.
 * Reset value for EIM_CS0WCR for WBEA is 2. For EIM_CS1WCR - EIM_CS5WCR reset value is 000. Example
 * settings:
 *
 * Values:
 * 000 - 0 EIM clock cycles between beginning of access and BE assertion
 * 001 - 1 EIM clock cycles between beginning of access and BE assertion
 * 010 - 2 EIM clock cycles between beginning of access and BE assertion
 * 111 - 7 EIM clock cycles between beginning of access and BE assertion
 */

#define BP_EIM_CS5WCR1_WBEA      (15)      //!< Bit position for EIM_CS5WCR1_WBEA.
#define BM_EIM_CS5WCR1_WBEA      (0x00038000)  //!< Bit mask for EIM_CS5WCR1_WBEA.

//! @brief Get value of EIM_CS5WCR1_WBEA from a register value.
#define BG_EIM_CS5WCR1_WBEA(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_EIM_CS5WCR1_WBEA) >> BP_EIM_CS5WCR1_WBEA)

//! @brief Format value for bitfield EIM_CS5WCR1_WBEA.
#define BF_EIM_CS5WCR1_WBEA(v)   ((__REG_VALUE_TYPE((v), reg32_t) << BP_EIM_CS5WCR1_WBEA) & BM_EIM_CS5WCR1_WBEA)

#ifndef __LANGUAGE_ASM__
//! @brief Set the WBEA field to a new value.
#define BW_EIM_CS5WCR1_WBEA(v)   (HW_EIM_CS5WCR1_WR((HW_EIM_CS5WCR1_RD() & ~BM_EIM_CS5WCR1_WBEA) | BF_EIM_CS5WCR1_WBEA(v)))
#endif


/* --- Register HW_EIM_CS5WCR1, field WADVN[20:18] (RW)
 *
 * ADV Negation. This bit field determines when ADV signal to memory is negated during write
 * accesses. When SWR=1 (synchronous write mode), ADV negation occurs according to the following
 * formula: (WADVN + WADVA + BCD + BCS + 1) EIM clock cycles. When asynchronous read mode is applied
 * (SWR=0) ADV negation occurs according to the following formula: (WADVN + WADVA + 1) EIM clock
 * cycles. Reset value for EIM_CS0WCR for WADVN is 2. For EIM_CS1WCR - EIM_CS5WCR reset value is
 * 000. This field should be configured so ADV negation will occur before the end of access. For ADV
 * negation at the same time as the end of access, S/W should set the WAL bit.
 */

#define BP_EIM_CS5WCR1_WADVN      (18)      //!< Bit position for EIM_CS5WCR1_WADVN.
#define BM_EIM_CS5WCR1_WADVN      (0x001c0000)  //!< Bit mask for EIM_CS5WCR1_WADVN.

//! @brief Get value of EIM_CS5WCR1_WADVN from a register value.
#define BG_EIM_CS5WCR1_WADVN(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_EIM_CS5WCR1_WADVN) >> BP_EIM_CS5WCR1_WADVN)

//! @brief Format value for bitfield EIM_CS5WCR1_WADVN.
#define BF_EIM_CS5WCR1_WADVN(v)   ((__REG_VALUE_TYPE((v), reg32_t) << BP_EIM_CS5WCR1_WADVN) & BM_EIM_CS5WCR1_WADVN)

#ifndef __LANGUAGE_ASM__
//! @brief Set the WADVN field to a new value.
#define BW_EIM_CS5WCR1_WADVN(v)   (HW_EIM_CS5WCR1_WR((HW_EIM_CS5WCR1_RD() & ~BM_EIM_CS5WCR1_WADVN) | BF_EIM_CS5WCR1_WADVN(v)))
#endif

/* --- Register HW_EIM_CS5WCR1, field WADVA[23:21] (RW)
 *
 * ADV Assertion. This bit field determines when ADV signal is asserted for synchronous or
 * asynchronous write modes according to the settings shown below. WADVA is cleared by a hardware
 * reset. Example settings:
 *
 * Values:
 * 000 - 0 EIM clock cycles between beginning of access and ADV assertion
 * 001 - 1 EIM clock cycles between beginning of access and ADV assertion
 * 010 - 2 EIM clock cycles between beginning of access and ADV assertion
 * 111 - 7 EIM clock cycles between beginning of access and ADV assertion
 */

#define BP_EIM_CS5WCR1_WADVA      (21)      //!< Bit position for EIM_CS5WCR1_WADVA.
#define BM_EIM_CS5WCR1_WADVA      (0x00e00000)  //!< Bit mask for EIM_CS5WCR1_WADVA.

//! @brief Get value of EIM_CS5WCR1_WADVA from a register value.
#define BG_EIM_CS5WCR1_WADVA(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_EIM_CS5WCR1_WADVA) >> BP_EIM_CS5WCR1_WADVA)

//! @brief Format value for bitfield EIM_CS5WCR1_WADVA.
#define BF_EIM_CS5WCR1_WADVA(v)   ((__REG_VALUE_TYPE((v), reg32_t) << BP_EIM_CS5WCR1_WADVA) & BM_EIM_CS5WCR1_WADVA)

#ifndef __LANGUAGE_ASM__
//! @brief Set the WADVA field to a new value.
#define BW_EIM_CS5WCR1_WADVA(v)   (HW_EIM_CS5WCR1_WR((HW_EIM_CS5WCR1_RD() & ~BM_EIM_CS5WCR1_WADVA) | BF_EIM_CS5WCR1_WADVA(v)))
#endif


/* --- Register HW_EIM_CS5WCR1, field WWSC[29:24] (RW)
 *
 * Write Wait State Control. This bit field programs the number of wait-states, according to the
 * settings shown below, for synchronous or asynchronous write access to the external device
 * connected to the chip select. When SWR=1 and WFL=0, WWSC indicates the number of burst clock
 * (BCLK) cycles from the start of an access, before the memory can sample the first data.Since WAIT
 * signal can be asserted one cycle before the first data can be sampled, the controller starts
 * evaluating the WAIT signal state one cycle before, this is referred as handshake mode or variable
 * latency mode. When SWR=1 and WFL=1, WWSC indicates the number of burst clock (BCLK) cycles from
 * the start of an access, until the external device is ready for data transfer, this is referred as
 * fix latency mode. When SWR=0, WFL bit is ignored, WWSC indicates the asynchronous access length
 * and the number of EIM clock cycles from the start of access until the external device is ready
 * for data transfer. WWSC is cleared by a hardware reset. The reset value for EIM_CS0WCR1,
 * WWSC[5:0] = 0b011100. For EIM_CS1WCR1 - EIM_CS5WCR1, the reset value of this field is 0b000000.
 * Example settings:
 *
 * Values:
 * 000000 - Reserved
 * 000001 - WWSC value is 1
 * 000010 - WWSC value is 2
 * 000011 - WWSC value is 3
 * 111111 - WWSC value is 63
 */

#define BP_EIM_CS5WCR1_WWSC      (24)      //!< Bit position for EIM_CS5WCR1_WWSC.
#define BM_EIM_CS5WCR1_WWSC      (0x3f000000)  //!< Bit mask for EIM_CS5WCR1_WWSC.

//! @brief Get value of EIM_CS5WCR1_WWSC from a register value.
#define BG_EIM_CS5WCR1_WWSC(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_EIM_CS5WCR1_WWSC) >> BP_EIM_CS5WCR1_WWSC)

//! @brief Format value for bitfield EIM_CS5WCR1_WWSC.
#define BF_EIM_CS5WCR1_WWSC(v)   ((__REG_VALUE_TYPE((v), reg32_t) << BP_EIM_CS5WCR1_WWSC) & BM_EIM_CS5WCR1_WWSC)

#ifndef __LANGUAGE_ASM__
//! @brief Set the WWSC field to a new value.
#define BW_EIM_CS5WCR1_WWSC(v)   (HW_EIM_CS5WCR1_WR((HW_EIM_CS5WCR1_RD() & ~BM_EIM_CS5WCR1_WWSC) | BF_EIM_CS5WCR1_WWSC(v)))
#endif


/* --- Register HW_EIM_CS5WCR1, field WBED[30] (RW)
 *
 * Write Byte Enable Disable. When asserted this bit prevent from IPP_DO_BE_B[x] to be asserted
 * during write accesses.This bit is cleared by hardware reset.
 */

#define BP_EIM_CS5WCR1_WBED      (30)      //!< Bit position for EIM_CS5WCR1_WBED.
#define BM_EIM_CS5WCR1_WBED      (0x40000000)  //!< Bit mask for EIM_CS5WCR1_WBED.

//! @brief Get value of EIM_CS5WCR1_WBED from a register value.
#define BG_EIM_CS5WCR1_WBED(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_EIM_CS5WCR1_WBED) >> BP_EIM_CS5WCR1_WBED)

//! @brief Format value for bitfield EIM_CS5WCR1_WBED.
#define BF_EIM_CS5WCR1_WBED(v)   ((__REG_VALUE_TYPE((v), reg32_t) << BP_EIM_CS5WCR1_WBED) & BM_EIM_CS5WCR1_WBED)

#ifndef __LANGUAGE_ASM__
//! @brief Set the WBED field to a new value.
#define BW_EIM_CS5WCR1_WBED(v)   (HW_EIM_CS5WCR1_WR((HW_EIM_CS5WCR1_RD() & ~BM_EIM_CS5WCR1_WBED) | BF_EIM_CS5WCR1_WBED(v)))
#endif

/* --- Register HW_EIM_CS5WCR1, field WAL[31] (RW)
 *
 * Write ADV Low. This bit field determine ADV signal negation time in write accesses. When WAL=1,
 * WADVN bit field is ignored and ADV signal will stay asserted until end of access. When WAL=0
 * negation of ADV signal is according to WADVN bit field configuration.
 */

#define BP_EIM_CS5WCR1_WAL      (31)      //!< Bit position for EIM_CS5WCR1_WAL.
#define BM_EIM_CS5WCR1_WAL      (0x80000000)  //!< Bit mask for EIM_CS5WCR1_WAL.

//! @brief Get value of EIM_CS5WCR1_WAL from a register value.
#define BG_EIM_CS5WCR1_WAL(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_EIM_CS5WCR1_WAL) >> BP_EIM_CS5WCR1_WAL)

//! @brief Format value for bitfield EIM_CS5WCR1_WAL.
#define BF_EIM_CS5WCR1_WAL(v)   ((__REG_VALUE_TYPE((v), reg32_t) << BP_EIM_CS5WCR1_WAL) & BM_EIM_CS5WCR1_WAL)

#ifndef __LANGUAGE_ASM__
//! @brief Set the WAL field to a new value.
#define BW_EIM_CS5WCR1_WAL(v)   (HW_EIM_CS5WCR1_WR((HW_EIM_CS5WCR1_RD() & ~BM_EIM_CS5WCR1_WAL) | BF_EIM_CS5WCR1_WAL(v)))
#endif

//-------------------------------------------------------------------------------------------
// HW_EIM_CS5WCR2 - Chip Select n Write Configuration Register 2
//-------------------------------------------------------------------------------------------

#ifndef __LANGUAGE_ASM__
/*!
 * @brief HW_EIM_CS5WCR2 - Chip Select n Write Configuration Register 2 (RW)
 *
 * Reset value: 0x00000000
 *

 */
typedef union _hw_eim_cs5wcr2
{
    reg32_t U;
    struct _hw_eim_cs5wcr2_bitfields
    {
        unsigned WBCDD : 1; //!< [0] Write Burst Clock Divisor Decrement.
        unsigned RESERVED0 : 31; //!< [31:1] Reserved
    } B;
} hw_eim_cs5wcr2_t;
#endif

/*
 * constants & macros for entire EIM_CS5WCR2 register
 */
#define HW_EIM_CS5WCR2_ADDR      (REGS_EIM_BASE + 0x8c)

#ifndef __LANGUAGE_ASM__
#define HW_EIM_CS5WCR2           (*(volatile hw_eim_cs5wcr2_t *) HW_EIM_CS5WCR2_ADDR)
#define HW_EIM_CS5WCR2_RD()      (HW_EIM_CS5WCR2.U)
#define HW_EIM_CS5WCR2_WR(v)     (HW_EIM_CS5WCR2.U = (v))
#define HW_EIM_CS5WCR2_SET(v)    (HW_EIM_CS5WCR2_WR(HW_EIM_CS5WCR2_RD() |  (v)))
#define HW_EIM_CS5WCR2_CLR(v)    (HW_EIM_CS5WCR2_WR(HW_EIM_CS5WCR2_RD() & ~(v)))
#define HW_EIM_CS5WCR2_TOG(v)    (HW_EIM_CS5WCR2_WR(HW_EIM_CS5WCR2_RD() ^  (v)))
#endif

/*
 * constants & macros for individual EIM_CS5WCR2 bitfields
 */

/* --- Register HW_EIM_CS5WCR2, field WBCDD[0] (RW)
 *
 * Write Burst Clock Divisor Decrement. If this bit is asserted and BCD value is 0 sync. write
 * access will be preformed as if BCD value is 1.When this bit is negated or BCD value is not 0 this
 * bit has no affect. This bit is cleared by hardware reset.
 */

#define BP_EIM_CS5WCR2_WBCDD      (0)      //!< Bit position for EIM_CS5WCR2_WBCDD.
#define BM_EIM_CS5WCR2_WBCDD      (0x00000001)  //!< Bit mask for EIM_CS5WCR2_WBCDD.

//! @brief Get value of EIM_CS5WCR2_WBCDD from a register value.
#define BG_EIM_CS5WCR2_WBCDD(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_EIM_CS5WCR2_WBCDD) >> BP_EIM_CS5WCR2_WBCDD)

//! @brief Format value for bitfield EIM_CS5WCR2_WBCDD.
#define BF_EIM_CS5WCR2_WBCDD(v)   ((__REG_VALUE_TYPE((v), reg32_t) << BP_EIM_CS5WCR2_WBCDD) & BM_EIM_CS5WCR2_WBCDD)

#ifndef __LANGUAGE_ASM__
//! @brief Set the WBCDD field to a new value.
#define BW_EIM_CS5WCR2_WBCDD(v)   (HW_EIM_CS5WCR2_WR((HW_EIM_CS5WCR2_RD() & ~BM_EIM_CS5WCR2_WBCDD) | BF_EIM_CS5WCR2_WBCDD(v)))
#endif

//-------------------------------------------------------------------------------------------
// HW_EIM_WCR - EIM Configuration Register
//-------------------------------------------------------------------------------------------

#ifndef __LANGUAGE_ASM__
/*!
 * @brief HW_EIM_WCR - EIM Configuration Register (RW)
 *
 * Reset value: 0x00000020
 *

 */
typedef union _hw_eim_wcr
{
    reg32_t U;
    struct _hw_eim_wcr_bitfields
    {
        unsigned BCM : 1; //!< [0] Burst Clock Mode.
        unsigned GBCD : 2; //!< [2:1] General Burst Clock Divisor.
        unsigned CONT_BCLK_SEL : 1; //!< [3] When this bit is set BCLK pin output continuous clock.
        unsigned INTEN : 1; //!< [4] Interrupt Enable.
        unsigned INTPOL : 1; //!< [5] Interrupt Polarity.
        unsigned RESERVED0 : 2; //!< [7:6] Reserved
        unsigned WDOG_EN : 1; //!< [8] Memory WDog enable.
        unsigned WDOG_LIMIT : 2; //!< [10:9] Memory Watch Dog (WDog) cycle limit.
        unsigned FRUN_ACLK_EN : 1; //!< [11] 
        unsigned RESERVED1 : 20; //!< [31:12] 
    } B;
} hw_eim_wcr_t;
#endif

/*
 * constants & macros for entire EIM_WCR register
 */
#define HW_EIM_WCR_ADDR      (REGS_EIM_BASE + 0x90)

#ifndef __LANGUAGE_ASM__
#define HW_EIM_WCR           (*(volatile hw_eim_wcr_t *) HW_EIM_WCR_ADDR)
#define HW_EIM_WCR_RD()      (HW_EIM_WCR.U)
#define HW_EIM_WCR_WR(v)     (HW_EIM_WCR.U = (v))
#define HW_EIM_WCR_SET(v)    (HW_EIM_WCR_WR(HW_EIM_WCR_RD() |  (v)))
#define HW_EIM_WCR_CLR(v)    (HW_EIM_WCR_WR(HW_EIM_WCR_RD() & ~(v)))
#define HW_EIM_WCR_TOG(v)    (HW_EIM_WCR_WR(HW_EIM_WCR_RD() ^  (v)))
#endif

/*
 * constants & macros for individual EIM_WCR bitfields
 */

/* --- Register HW_EIM_WCR, field BCM[0] (RW)
 *
 * Burst Clock Mode. This bit selects the burst clock mode of operation. It is used for system debug
 * mode. BCM is cleared by a hardware reset. The BCLK frequency in this mode is according to GBCD
 * bit field. The BCLK phase is opposite to the EIM clock in this mode if GBCD is 0. This bit should
 * be used only in async. accesses. No sync access can be executed if this bit is set. When this bit
 * is set bcd field shouldn't be configured to 0.
 *
 * Values:
 * 0 - The burst clock runs only when accessing a chip select range with the SWR/SRD bits set. When the
 *     burst clock is not running it remains in a logic 0 state. When the burst clock is running it
 *     is configured by the BCD and BCS bit fields in the chip select Configuration Register.
 * 1 - The burst clock runs whenever ACLK is active (independent of chip select configuration)
 */

#define BP_EIM_WCR_BCM      (0)      //!< Bit position for EIM_WCR_BCM.
#define BM_EIM_WCR_BCM      (0x00000001)  //!< Bit mask for EIM_WCR_BCM.

//! @brief Get value of EIM_WCR_BCM from a register value.
#define BG_EIM_WCR_BCM(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_EIM_WCR_BCM) >> BP_EIM_WCR_BCM)

//! @brief Format value for bitfield EIM_WCR_BCM.
#define BF_EIM_WCR_BCM(v)   ((__REG_VALUE_TYPE((v), reg32_t) << BP_EIM_WCR_BCM) & BM_EIM_WCR_BCM)

#ifndef __LANGUAGE_ASM__
//! @brief Set the BCM field to a new value.
#define BW_EIM_WCR_BCM(v)   (HW_EIM_WCR_WR((HW_EIM_WCR_RD() & ~BM_EIM_WCR_BCM) | BF_EIM_WCR_BCM(v)))
#endif


/* --- Register HW_EIM_WCR, field GBCD[2:1] (RW)
 *
 * General Burst Clock Divisor. When BCM bit is set, this bit field contains the value used to
 * program the burst clock divisor for Continuous BCLK generation. The other BCD bit fields for each
 * chip select are ignored. It is used to divide the internal AXI bus frequency. When BCM=0 GBCD bit
 * field has no influence. GBCD is cleared by a hardware reset.
 *
 * Values:
 * 00 - Divide EIM clock by 1
 * 01 - Divide EIM clock by 2
 * 10 - Divide EIM clock by 3
 * 11 - Divide EIM clock by 4
 */

#define BP_EIM_WCR_GBCD      (1)      //!< Bit position for EIM_WCR_GBCD.
#define BM_EIM_WCR_GBCD      (0x00000006)  //!< Bit mask for EIM_WCR_GBCD.

//! @brief Get value of EIM_WCR_GBCD from a register value.
#define BG_EIM_WCR_GBCD(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_EIM_WCR_GBCD) >> BP_EIM_WCR_GBCD)

//! @brief Format value for bitfield EIM_WCR_GBCD.
#define BF_EIM_WCR_GBCD(v)   ((__REG_VALUE_TYPE((v), reg32_t) << BP_EIM_WCR_GBCD) & BM_EIM_WCR_GBCD)

#ifndef __LANGUAGE_ASM__
//! @brief Set the GBCD field to a new value.
#define BW_EIM_WCR_GBCD(v)   (HW_EIM_WCR_WR((HW_EIM_WCR_RD() & ~BM_EIM_WCR_GBCD) | BF_EIM_WCR_GBCD(v)))
#endif


/* --- Register HW_EIM_WCR, field CONT_BCLK_SEL[3] (RW)
 *
 * When this bit is set BCLK pin output continuous clock. Otherwize, BCLK will output clock only
 * when nesserary.
 *
 * Values:
 * 0 - BCLK When nesserary
 * 1 - BCLK Continuous
 */

#define BP_EIM_WCR_CONT_BCLK_SEL      (3)      //!< Bit position for EIM_WCR_CONT_BCLK_SEL.
#define BM_EIM_WCR_CONT_BCLK_SEL      (0x00000008)  //!< Bit mask for EIM_WCR_CONT_BCLK_SEL.

//! @brief Get value of EIM_WCR_CONT_BCLK_SEL from a register value.
#define BG_EIM_WCR_CONT_BCLK_SEL(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_EIM_WCR_CONT_BCLK_SEL) >> BP_EIM_WCR_CONT_BCLK_SEL)

//! @brief Format value for bitfield EIM_WCR_CONT_BCLK_SEL.
#define BF_EIM_WCR_CONT_BCLK_SEL(v)   ((__REG_VALUE_TYPE((v), reg32_t) << BP_EIM_WCR_CONT_BCLK_SEL) & BM_EIM_WCR_CONT_BCLK_SEL)

#ifndef __LANGUAGE_ASM__
//! @brief Set the CONT_BCLK_SEL field to a new value.
#define BW_EIM_WCR_CONT_BCLK_SEL(v)   (HW_EIM_WCR_WR((HW_EIM_WCR_RD() & ~BM_EIM_WCR_CONT_BCLK_SEL) | BF_EIM_WCR_CONT_BCLK_SEL(v)))
#endif


/* --- Register HW_EIM_WCR, field INTEN[4] (RW)
 *
 * Interrupt Enable. When this bit is set the External signal RDY_INT as active interrupt. When
 * interrupt occurs, INT bit at the WCR will be set and t EIM_EXT_INT signal will be asserted
 * correspondingly. This bit is cleared by a hardware reset.
 *
 * Values:
 * 0 - External interrupt Disable
 * 1 - External interrupt Enable
 */

#define BP_EIM_WCR_INTEN      (4)      //!< Bit position for EIM_WCR_INTEN.
#define BM_EIM_WCR_INTEN      (0x00000010)  //!< Bit mask for EIM_WCR_INTEN.

//! @brief Get value of EIM_WCR_INTEN from a register value.
#define BG_EIM_WCR_INTEN(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_EIM_WCR_INTEN) >> BP_EIM_WCR_INTEN)

//! @brief Format value for bitfield EIM_WCR_INTEN.
#define BF_EIM_WCR_INTEN(v)   ((__REG_VALUE_TYPE((v), reg32_t) << BP_EIM_WCR_INTEN) & BM_EIM_WCR_INTEN)

#ifndef __LANGUAGE_ASM__
//! @brief Set the INTEN field to a new value.
#define BW_EIM_WCR_INTEN(v)   (HW_EIM_WCR_WR((HW_EIM_WCR_RD() & ~BM_EIM_WCR_INTEN) | BF_EIM_WCR_INTEN(v)))
#endif


/* --- Register HW_EIM_WCR, field INTPOL[5] (RW)
 *
 * Interrupt Polarity. This bit field determines the polarity of the external device interrupt.
 *
 * Values:
 * 0 - External interrupt polarity is active low
 * 1 - External interrupt polarity is active high
 */

#define BP_EIM_WCR_INTPOL      (5)      //!< Bit position for EIM_WCR_INTPOL.
#define BM_EIM_WCR_INTPOL      (0x00000020)  //!< Bit mask for EIM_WCR_INTPOL.

//! @brief Get value of EIM_WCR_INTPOL from a register value.
#define BG_EIM_WCR_INTPOL(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_EIM_WCR_INTPOL) >> BP_EIM_WCR_INTPOL)

//! @brief Format value for bitfield EIM_WCR_INTPOL.
#define BF_EIM_WCR_INTPOL(v)   ((__REG_VALUE_TYPE((v), reg32_t) << BP_EIM_WCR_INTPOL) & BM_EIM_WCR_INTPOL)

#ifndef __LANGUAGE_ASM__
//! @brief Set the INTPOL field to a new value.
#define BW_EIM_WCR_INTPOL(v)   (HW_EIM_WCR_WR((HW_EIM_WCR_RD() & ~BM_EIM_WCR_INTPOL) | BF_EIM_WCR_INTPOL(v)))
#endif


/* --- Register HW_EIM_WCR, field WDOG_EN[8] (RW)
 *
 * Memory WDog enable. This bit controls the operation of the wdog counter that terminates the EIM
 * access.
 *
 * Values:
 * 0 - Memory WDog is Disabled
 * 1 - Memory WDog is Enabled
 */

#define BP_EIM_WCR_WDOG_EN      (8)      //!< Bit position for EIM_WCR_WDOG_EN.
#define BM_EIM_WCR_WDOG_EN      (0x00000100)  //!< Bit mask for EIM_WCR_WDOG_EN.

//! @brief Get value of EIM_WCR_WDOG_EN from a register value.
#define BG_EIM_WCR_WDOG_EN(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_EIM_WCR_WDOG_EN) >> BP_EIM_WCR_WDOG_EN)

//! @brief Format value for bitfield EIM_WCR_WDOG_EN.
#define BF_EIM_WCR_WDOG_EN(v)   ((__REG_VALUE_TYPE((v), reg32_t) << BP_EIM_WCR_WDOG_EN) & BM_EIM_WCR_WDOG_EN)

#ifndef __LANGUAGE_ASM__
//! @brief Set the WDOG_EN field to a new value.
#define BW_EIM_WCR_WDOG_EN(v)   (HW_EIM_WCR_WR((HW_EIM_WCR_RD() & ~BM_EIM_WCR_WDOG_EN) | BF_EIM_WCR_WDOG_EN(v)))
#endif


/* --- Register HW_EIM_WCR, field WDOG_LIMIT[10:9] (RW)
 *
 * Memory Watch Dog (WDog) cycle limit. This bit field determines the number of BCLK cycles (ACLK
 * cycles in dtack mode) before the wdog counter terminates the access and send an error response to
 * the master.
 *
 * Values:
 * 00 - 128 BCLK cycles
 * 01 - 256 BCLK cycles
 * 10 - 512 BCLK cycles
 * 11 - 1024 BCLK cycles
 */

#define BP_EIM_WCR_WDOG_LIMIT      (9)      //!< Bit position for EIM_WCR_WDOG_LIMIT.
#define BM_EIM_WCR_WDOG_LIMIT      (0x00000600)  //!< Bit mask for EIM_WCR_WDOG_LIMIT.

//! @brief Get value of EIM_WCR_WDOG_LIMIT from a register value.
#define BG_EIM_WCR_WDOG_LIMIT(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_EIM_WCR_WDOG_LIMIT) >> BP_EIM_WCR_WDOG_LIMIT)

//! @brief Format value for bitfield EIM_WCR_WDOG_LIMIT.
#define BF_EIM_WCR_WDOG_LIMIT(v)   ((__REG_VALUE_TYPE((v), reg32_t) << BP_EIM_WCR_WDOG_LIMIT) & BM_EIM_WCR_WDOG_LIMIT)

#ifndef __LANGUAGE_ASM__
//! @brief Set the WDOG_LIMIT field to a new value.
#define BW_EIM_WCR_WDOG_LIMIT(v)   (HW_EIM_WCR_WR((HW_EIM_WCR_RD() & ~BM_EIM_WCR_WDOG_LIMIT) | BF_EIM_WCR_WDOG_LIMIT(v)))
#endif


/* --- Register HW_EIM_WCR, field FRUN_ACLK_EN[11] (RW)
 *

 */

#define BP_EIM_WCR_FRUN_ACLK_EN      (11)      //!< Bit position for EIM_WCR_FRUN_ACLK_EN.
#define BM_EIM_WCR_FRUN_ACLK_EN      (0x00000800)  //!< Bit mask for EIM_WCR_FRUN_ACLK_EN.

//! @brief Get value of EIM_WCR_FRUN_ACLK_EN from a register value.
#define BG_EIM_WCR_FRUN_ACLK_EN(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_EIM_WCR_FRUN_ACLK_EN) >> BP_EIM_WCR_FRUN_ACLK_EN)

//! @brief Format value for bitfield EIM_WCR_FRUN_ACLK_EN.
#define BF_EIM_WCR_FRUN_ACLK_EN(v)   ((__REG_VALUE_TYPE((v), reg32_t) << BP_EIM_WCR_FRUN_ACLK_EN) & BM_EIM_WCR_FRUN_ACLK_EN)

#ifndef __LANGUAGE_ASM__
//! @brief Set the FRUN_ACLK_EN field to a new value.
#define BW_EIM_WCR_FRUN_ACLK_EN(v)   (HW_EIM_WCR_WR((HW_EIM_WCR_RD() & ~BM_EIM_WCR_FRUN_ACLK_EN) | BF_EIM_WCR_FRUN_ACLK_EN(v)))
#endif

//-------------------------------------------------------------------------------------------
// HW_EIM_DCR - DLL Control Register
//-------------------------------------------------------------------------------------------

#ifndef __LANGUAGE_ASM__
/*!
 * @brief HW_EIM_DCR - DLL Control Register (RW)
 *
 * Reset value: 0x14000000
 *

 */
typedef union _hw_eim_dcr
{
    reg32_t U;
    struct _hw_eim_dcr_bitfields
    {
        unsigned DLL_CTRL_ENABLE : 1; //!< [0] 
        unsigned DLL_CTRL_RESET : 1; //!< [1] 
        unsigned DLL_CTRL_SLV_FORCE_UPD : 1; //!< [2] 
        unsigned DLL_CTRL_SLV_OFFSET_DEC : 1; //!< [3] 
        unsigned DLL_CTRL_SLV_OFFSET : 3; //!< [6:4] 
        unsigned DLL_CTRL_GATE_UPDATE : 1; //!< [7] 
        unsigned DLL_CTRL_SLV_OVERRIDE : 1; //!< [8] Use override value in DLL_CTRL_SLV_OVERRIDE_VAL bit field instead of DLL locked value as delay.
        unsigned DLL_CTRL_SLV_OVERRIDE_VAL : 7; //!< [15:9] 
        unsigned DLL_CTRL_REF_INITIAL_VAL : 7; //!< [22:16] 
        unsigned DLL_CTRL_SLV_UPDATE_INT : 5; //!< [27:23] Update interval of slave DLL.
        unsigned DLL_CTRL_REF_UPDATE_INT : 4; //!< [31:28] Update interval of reference DLL.
    } B;
} hw_eim_dcr_t;
#endif

/*
 * constants & macros for entire EIM_DCR register
 */
#define HW_EIM_DCR_ADDR      (REGS_EIM_BASE + 0x94)

#ifndef __LANGUAGE_ASM__
#define HW_EIM_DCR           (*(volatile hw_eim_dcr_t *) HW_EIM_DCR_ADDR)
#define HW_EIM_DCR_RD()      (HW_EIM_DCR.U)
#define HW_EIM_DCR_WR(v)     (HW_EIM_DCR.U = (v))
#define HW_EIM_DCR_SET(v)    (HW_EIM_DCR_WR(HW_EIM_DCR_RD() |  (v)))
#define HW_EIM_DCR_CLR(v)    (HW_EIM_DCR_WR(HW_EIM_DCR_RD() & ~(v)))
#define HW_EIM_DCR_TOG(v)    (HW_EIM_DCR_WR(HW_EIM_DCR_RD() ^  (v)))
#endif

/*
 * constants & macros for individual EIM_DCR bitfields
 */

/* --- Register HW_EIM_DCR, field DLL_CTRL_ENABLE[0] (RW)
 *

 */

#define BP_EIM_DCR_DLL_CTRL_ENABLE      (0)      //!< Bit position for EIM_DCR_DLL_CTRL_ENABLE.
#define BM_EIM_DCR_DLL_CTRL_ENABLE      (0x00000001)  //!< Bit mask for EIM_DCR_DLL_CTRL_ENABLE.

//! @brief Get value of EIM_DCR_DLL_CTRL_ENABLE from a register value.
#define BG_EIM_DCR_DLL_CTRL_ENABLE(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_EIM_DCR_DLL_CTRL_ENABLE) >> BP_EIM_DCR_DLL_CTRL_ENABLE)

//! @brief Format value for bitfield EIM_DCR_DLL_CTRL_ENABLE.
#define BF_EIM_DCR_DLL_CTRL_ENABLE(v)   ((__REG_VALUE_TYPE((v), reg32_t) << BP_EIM_DCR_DLL_CTRL_ENABLE) & BM_EIM_DCR_DLL_CTRL_ENABLE)

#ifndef __LANGUAGE_ASM__
//! @brief Set the DLL_CTRL_ENABLE field to a new value.
#define BW_EIM_DCR_DLL_CTRL_ENABLE(v)   (HW_EIM_DCR_WR((HW_EIM_DCR_RD() & ~BM_EIM_DCR_DLL_CTRL_ENABLE) | BF_EIM_DCR_DLL_CTRL_ENABLE(v)))
#endif

/* --- Register HW_EIM_DCR, field DLL_CTRL_RESET[1] (RW)
 *

 */

#define BP_EIM_DCR_DLL_CTRL_RESET      (1)      //!< Bit position for EIM_DCR_DLL_CTRL_RESET.
#define BM_EIM_DCR_DLL_CTRL_RESET      (0x00000002)  //!< Bit mask for EIM_DCR_DLL_CTRL_RESET.

//! @brief Get value of EIM_DCR_DLL_CTRL_RESET from a register value.
#define BG_EIM_DCR_DLL_CTRL_RESET(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_EIM_DCR_DLL_CTRL_RESET) >> BP_EIM_DCR_DLL_CTRL_RESET)

//! @brief Format value for bitfield EIM_DCR_DLL_CTRL_RESET.
#define BF_EIM_DCR_DLL_CTRL_RESET(v)   ((__REG_VALUE_TYPE((v), reg32_t) << BP_EIM_DCR_DLL_CTRL_RESET) & BM_EIM_DCR_DLL_CTRL_RESET)

#ifndef __LANGUAGE_ASM__
//! @brief Set the DLL_CTRL_RESET field to a new value.
#define BW_EIM_DCR_DLL_CTRL_RESET(v)   (HW_EIM_DCR_WR((HW_EIM_DCR_RD() & ~BM_EIM_DCR_DLL_CTRL_RESET) | BF_EIM_DCR_DLL_CTRL_RESET(v)))
#endif

/* --- Register HW_EIM_DCR, field DLL_CTRL_SLV_FORCE_UPD[2] (RW)
 *

 */

#define BP_EIM_DCR_DLL_CTRL_SLV_FORCE_UPD      (2)      //!< Bit position for EIM_DCR_DLL_CTRL_SLV_FORCE_UPD.
#define BM_EIM_DCR_DLL_CTRL_SLV_FORCE_UPD      (0x00000004)  //!< Bit mask for EIM_DCR_DLL_CTRL_SLV_FORCE_UPD.

//! @brief Get value of EIM_DCR_DLL_CTRL_SLV_FORCE_UPD from a register value.
#define BG_EIM_DCR_DLL_CTRL_SLV_FORCE_UPD(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_EIM_DCR_DLL_CTRL_SLV_FORCE_UPD) >> BP_EIM_DCR_DLL_CTRL_SLV_FORCE_UPD)

//! @brief Format value for bitfield EIM_DCR_DLL_CTRL_SLV_FORCE_UPD.
#define BF_EIM_DCR_DLL_CTRL_SLV_FORCE_UPD(v)   ((__REG_VALUE_TYPE((v), reg32_t) << BP_EIM_DCR_DLL_CTRL_SLV_FORCE_UPD) & BM_EIM_DCR_DLL_CTRL_SLV_FORCE_UPD)

#ifndef __LANGUAGE_ASM__
//! @brief Set the DLL_CTRL_SLV_FORCE_UPD field to a new value.
#define BW_EIM_DCR_DLL_CTRL_SLV_FORCE_UPD(v)   (HW_EIM_DCR_WR((HW_EIM_DCR_RD() & ~BM_EIM_DCR_DLL_CTRL_SLV_FORCE_UPD) | BF_EIM_DCR_DLL_CTRL_SLV_FORCE_UPD(v)))
#endif

/* --- Register HW_EIM_DCR, field DLL_CTRL_SLV_OFFSET_DEC[3] (RW)
 *

 */

#define BP_EIM_DCR_DLL_CTRL_SLV_OFFSET_DEC      (3)      //!< Bit position for EIM_DCR_DLL_CTRL_SLV_OFFSET_DEC.
#define BM_EIM_DCR_DLL_CTRL_SLV_OFFSET_DEC      (0x00000008)  //!< Bit mask for EIM_DCR_DLL_CTRL_SLV_OFFSET_DEC.

//! @brief Get value of EIM_DCR_DLL_CTRL_SLV_OFFSET_DEC from a register value.
#define BG_EIM_DCR_DLL_CTRL_SLV_OFFSET_DEC(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_EIM_DCR_DLL_CTRL_SLV_OFFSET_DEC) >> BP_EIM_DCR_DLL_CTRL_SLV_OFFSET_DEC)

//! @brief Format value for bitfield EIM_DCR_DLL_CTRL_SLV_OFFSET_DEC.
#define BF_EIM_DCR_DLL_CTRL_SLV_OFFSET_DEC(v)   ((__REG_VALUE_TYPE((v), reg32_t) << BP_EIM_DCR_DLL_CTRL_SLV_OFFSET_DEC) & BM_EIM_DCR_DLL_CTRL_SLV_OFFSET_DEC)

#ifndef __LANGUAGE_ASM__
//! @brief Set the DLL_CTRL_SLV_OFFSET_DEC field to a new value.
#define BW_EIM_DCR_DLL_CTRL_SLV_OFFSET_DEC(v)   (HW_EIM_DCR_WR((HW_EIM_DCR_RD() & ~BM_EIM_DCR_DLL_CTRL_SLV_OFFSET_DEC) | BF_EIM_DCR_DLL_CTRL_SLV_OFFSET_DEC(v)))
#endif

/* --- Register HW_EIM_DCR, field DLL_CTRL_SLV_OFFSET[6:4] (RO)
 *

 */

#define BP_EIM_DCR_DLL_CTRL_SLV_OFFSET      (4)      //!< Bit position for EIM_DCR_DLL_CTRL_SLV_OFFSET.
#define BM_EIM_DCR_DLL_CTRL_SLV_OFFSET      (0x00000070)  //!< Bit mask for EIM_DCR_DLL_CTRL_SLV_OFFSET.

//! @brief Get value of EIM_DCR_DLL_CTRL_SLV_OFFSET from a register value.
#define BG_EIM_DCR_DLL_CTRL_SLV_OFFSET(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_EIM_DCR_DLL_CTRL_SLV_OFFSET) >> BP_EIM_DCR_DLL_CTRL_SLV_OFFSET)

/* --- Register HW_EIM_DCR, field DLL_CTRL_GATE_UPDATE[7] (RW)
 *

 */

#define BP_EIM_DCR_DLL_CTRL_GATE_UPDATE      (7)      //!< Bit position for EIM_DCR_DLL_CTRL_GATE_UPDATE.
#define BM_EIM_DCR_DLL_CTRL_GATE_UPDATE      (0x00000080)  //!< Bit mask for EIM_DCR_DLL_CTRL_GATE_UPDATE.

//! @brief Get value of EIM_DCR_DLL_CTRL_GATE_UPDATE from a register value.
#define BG_EIM_DCR_DLL_CTRL_GATE_UPDATE(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_EIM_DCR_DLL_CTRL_GATE_UPDATE) >> BP_EIM_DCR_DLL_CTRL_GATE_UPDATE)

//! @brief Format value for bitfield EIM_DCR_DLL_CTRL_GATE_UPDATE.
#define BF_EIM_DCR_DLL_CTRL_GATE_UPDATE(v)   ((__REG_VALUE_TYPE((v), reg32_t) << BP_EIM_DCR_DLL_CTRL_GATE_UPDATE) & BM_EIM_DCR_DLL_CTRL_GATE_UPDATE)

#ifndef __LANGUAGE_ASM__
//! @brief Set the DLL_CTRL_GATE_UPDATE field to a new value.
#define BW_EIM_DCR_DLL_CTRL_GATE_UPDATE(v)   (HW_EIM_DCR_WR((HW_EIM_DCR_RD() & ~BM_EIM_DCR_DLL_CTRL_GATE_UPDATE) | BF_EIM_DCR_DLL_CTRL_GATE_UPDATE(v)))
#endif

/* --- Register HW_EIM_DCR, field DLL_CTRL_SLV_OVERRIDE[8] (RW)
 *
 * Use override value in DLL_CTRL_SLV_OVERRIDE_VAL bit field instead of DLL locked value as delay.
 *
 * Values:
 * 0 - Slave delay use DLL lock value
 * 1 - Slave delay use DLL_CTRL_SLV_OVERRIDE_VAL
 */

#define BP_EIM_DCR_DLL_CTRL_SLV_OVERRIDE      (8)      //!< Bit position for EIM_DCR_DLL_CTRL_SLV_OVERRIDE.
#define BM_EIM_DCR_DLL_CTRL_SLV_OVERRIDE      (0x00000100)  //!< Bit mask for EIM_DCR_DLL_CTRL_SLV_OVERRIDE.

//! @brief Get value of EIM_DCR_DLL_CTRL_SLV_OVERRIDE from a register value.
#define BG_EIM_DCR_DLL_CTRL_SLV_OVERRIDE(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_EIM_DCR_DLL_CTRL_SLV_OVERRIDE) >> BP_EIM_DCR_DLL_CTRL_SLV_OVERRIDE)

//! @brief Format value for bitfield EIM_DCR_DLL_CTRL_SLV_OVERRIDE.
#define BF_EIM_DCR_DLL_CTRL_SLV_OVERRIDE(v)   ((__REG_VALUE_TYPE((v), reg32_t) << BP_EIM_DCR_DLL_CTRL_SLV_OVERRIDE) & BM_EIM_DCR_DLL_CTRL_SLV_OVERRIDE)

#ifndef __LANGUAGE_ASM__
//! @brief Set the DLL_CTRL_SLV_OVERRIDE field to a new value.
#define BW_EIM_DCR_DLL_CTRL_SLV_OVERRIDE(v)   (HW_EIM_DCR_WR((HW_EIM_DCR_RD() & ~BM_EIM_DCR_DLL_CTRL_SLV_OVERRIDE) | BF_EIM_DCR_DLL_CTRL_SLV_OVERRIDE(v)))
#endif


/* --- Register HW_EIM_DCR, field DLL_CTRL_SLV_OVERRIDE_VAL[15:9] (RW)
 *

 */

#define BP_EIM_DCR_DLL_CTRL_SLV_OVERRIDE_VAL      (9)      //!< Bit position for EIM_DCR_DLL_CTRL_SLV_OVERRIDE_VAL.
#define BM_EIM_DCR_DLL_CTRL_SLV_OVERRIDE_VAL      (0x0000fe00)  //!< Bit mask for EIM_DCR_DLL_CTRL_SLV_OVERRIDE_VAL.

//! @brief Get value of EIM_DCR_DLL_CTRL_SLV_OVERRIDE_VAL from a register value.
#define BG_EIM_DCR_DLL_CTRL_SLV_OVERRIDE_VAL(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_EIM_DCR_DLL_CTRL_SLV_OVERRIDE_VAL) >> BP_EIM_DCR_DLL_CTRL_SLV_OVERRIDE_VAL)

//! @brief Format value for bitfield EIM_DCR_DLL_CTRL_SLV_OVERRIDE_VAL.
#define BF_EIM_DCR_DLL_CTRL_SLV_OVERRIDE_VAL(v)   ((__REG_VALUE_TYPE((v), reg32_t) << BP_EIM_DCR_DLL_CTRL_SLV_OVERRIDE_VAL) & BM_EIM_DCR_DLL_CTRL_SLV_OVERRIDE_VAL)

#ifndef __LANGUAGE_ASM__
//! @brief Set the DLL_CTRL_SLV_OVERRIDE_VAL field to a new value.
#define BW_EIM_DCR_DLL_CTRL_SLV_OVERRIDE_VAL(v)   (HW_EIM_DCR_WR((HW_EIM_DCR_RD() & ~BM_EIM_DCR_DLL_CTRL_SLV_OVERRIDE_VAL) | BF_EIM_DCR_DLL_CTRL_SLV_OVERRIDE_VAL(v)))
#endif

/* --- Register HW_EIM_DCR, field DLL_CTRL_REF_INITIAL_VAL[22:16] (RW)
 *

 */

#define BP_EIM_DCR_DLL_CTRL_REF_INITIAL_VAL      (16)      //!< Bit position for EIM_DCR_DLL_CTRL_REF_INITIAL_VAL.
#define BM_EIM_DCR_DLL_CTRL_REF_INITIAL_VAL      (0x007f0000)  //!< Bit mask for EIM_DCR_DLL_CTRL_REF_INITIAL_VAL.

//! @brief Get value of EIM_DCR_DLL_CTRL_REF_INITIAL_VAL from a register value.
#define BG_EIM_DCR_DLL_CTRL_REF_INITIAL_VAL(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_EIM_DCR_DLL_CTRL_REF_INITIAL_VAL) >> BP_EIM_DCR_DLL_CTRL_REF_INITIAL_VAL)

//! @brief Format value for bitfield EIM_DCR_DLL_CTRL_REF_INITIAL_VAL.
#define BF_EIM_DCR_DLL_CTRL_REF_INITIAL_VAL(v)   ((__REG_VALUE_TYPE((v), reg32_t) << BP_EIM_DCR_DLL_CTRL_REF_INITIAL_VAL) & BM_EIM_DCR_DLL_CTRL_REF_INITIAL_VAL)

#ifndef __LANGUAGE_ASM__
//! @brief Set the DLL_CTRL_REF_INITIAL_VAL field to a new value.
#define BW_EIM_DCR_DLL_CTRL_REF_INITIAL_VAL(v)   (HW_EIM_DCR_WR((HW_EIM_DCR_RD() & ~BM_EIM_DCR_DLL_CTRL_REF_INITIAL_VAL) | BF_EIM_DCR_DLL_CTRL_REF_INITIAL_VAL(v)))
#endif

/* --- Register HW_EIM_DCR, field DLL_CTRL_SLV_UPDATE_INT[27:23] (RW)
 *
 * Update interval of slave DLL.
 */

#define BP_EIM_DCR_DLL_CTRL_SLV_UPDATE_INT      (23)      //!< Bit position for EIM_DCR_DLL_CTRL_SLV_UPDATE_INT.
#define BM_EIM_DCR_DLL_CTRL_SLV_UPDATE_INT      (0x0f800000)  //!< Bit mask for EIM_DCR_DLL_CTRL_SLV_UPDATE_INT.

//! @brief Get value of EIM_DCR_DLL_CTRL_SLV_UPDATE_INT from a register value.
#define BG_EIM_DCR_DLL_CTRL_SLV_UPDATE_INT(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_EIM_DCR_DLL_CTRL_SLV_UPDATE_INT) >> BP_EIM_DCR_DLL_CTRL_SLV_UPDATE_INT)

//! @brief Format value for bitfield EIM_DCR_DLL_CTRL_SLV_UPDATE_INT.
#define BF_EIM_DCR_DLL_CTRL_SLV_UPDATE_INT(v)   ((__REG_VALUE_TYPE((v), reg32_t) << BP_EIM_DCR_DLL_CTRL_SLV_UPDATE_INT) & BM_EIM_DCR_DLL_CTRL_SLV_UPDATE_INT)

#ifndef __LANGUAGE_ASM__
//! @brief Set the DLL_CTRL_SLV_UPDATE_INT field to a new value.
#define BW_EIM_DCR_DLL_CTRL_SLV_UPDATE_INT(v)   (HW_EIM_DCR_WR((HW_EIM_DCR_RD() & ~BM_EIM_DCR_DLL_CTRL_SLV_UPDATE_INT) | BF_EIM_DCR_DLL_CTRL_SLV_UPDATE_INT(v)))
#endif

/* --- Register HW_EIM_DCR, field DLL_CTRL_REF_UPDATE_INT[31:28] (RW)
 *
 * Update interval of reference DLL.
 */

#define BP_EIM_DCR_DLL_CTRL_REF_UPDATE_INT      (28)      //!< Bit position for EIM_DCR_DLL_CTRL_REF_UPDATE_INT.
#define BM_EIM_DCR_DLL_CTRL_REF_UPDATE_INT      (0xf0000000)  //!< Bit mask for EIM_DCR_DLL_CTRL_REF_UPDATE_INT.

//! @brief Get value of EIM_DCR_DLL_CTRL_REF_UPDATE_INT from a register value.
#define BG_EIM_DCR_DLL_CTRL_REF_UPDATE_INT(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_EIM_DCR_DLL_CTRL_REF_UPDATE_INT) >> BP_EIM_DCR_DLL_CTRL_REF_UPDATE_INT)

//! @brief Format value for bitfield EIM_DCR_DLL_CTRL_REF_UPDATE_INT.
#define BF_EIM_DCR_DLL_CTRL_REF_UPDATE_INT(v)   ((__REG_VALUE_TYPE((v), reg32_t) << BP_EIM_DCR_DLL_CTRL_REF_UPDATE_INT) & BM_EIM_DCR_DLL_CTRL_REF_UPDATE_INT)

#ifndef __LANGUAGE_ASM__
//! @brief Set the DLL_CTRL_REF_UPDATE_INT field to a new value.
#define BW_EIM_DCR_DLL_CTRL_REF_UPDATE_INT(v)   (HW_EIM_DCR_WR((HW_EIM_DCR_RD() & ~BM_EIM_DCR_DLL_CTRL_REF_UPDATE_INT) | BF_EIM_DCR_DLL_CTRL_REF_UPDATE_INT(v)))
#endif

//-------------------------------------------------------------------------------------------
// HW_EIM_DSR - DLL Status Register
//-------------------------------------------------------------------------------------------

#ifndef __LANGUAGE_ASM__
/*!
 * @brief HW_EIM_DSR - DLL Status Register (RO)
 *
 * Reset value: 0x00000000
 *

 */
typedef union _hw_eim_dsr
{
    reg32_t U;
    struct _hw_eim_dsr_bitfields
    {
        unsigned DLL_STS_SLV_LOCK : 1; //!< [0] 
        unsigned DLL_STS_REF_LOCK : 1; //!< [1] 
        unsigned DLL_STS_SLV_SEL : 7; //!< [8:2] 
        unsigned DLL_STS_REF_SEL : 7; //!< [15:9] 
        unsigned RESERVED0 : 16; //!< [31:16] 
    } B;
} hw_eim_dsr_t;
#endif

/*
 * constants & macros for entire EIM_DSR register
 */
#define HW_EIM_DSR_ADDR      (REGS_EIM_BASE + 0x98)

#ifndef __LANGUAGE_ASM__
#define HW_EIM_DSR           (*(volatile hw_eim_dsr_t *) HW_EIM_DSR_ADDR)
#define HW_EIM_DSR_RD()      (HW_EIM_DSR.U)
#endif

/*
 * constants & macros for individual EIM_DSR bitfields
 */

/* --- Register HW_EIM_DSR, field DLL_STS_SLV_LOCK[0] (RW)
 *

 */

#define BP_EIM_DSR_DLL_STS_SLV_LOCK      (0)      //!< Bit position for EIM_DSR_DLL_STS_SLV_LOCK.
#define BM_EIM_DSR_DLL_STS_SLV_LOCK      (0x00000001)  //!< Bit mask for EIM_DSR_DLL_STS_SLV_LOCK.

//! @brief Get value of EIM_DSR_DLL_STS_SLV_LOCK from a register value.
#define BG_EIM_DSR_DLL_STS_SLV_LOCK(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_EIM_DSR_DLL_STS_SLV_LOCK) >> BP_EIM_DSR_DLL_STS_SLV_LOCK)

/* --- Register HW_EIM_DSR, field DLL_STS_REF_LOCK[1] (RW)
 *

 */

#define BP_EIM_DSR_DLL_STS_REF_LOCK      (1)      //!< Bit position for EIM_DSR_DLL_STS_REF_LOCK.
#define BM_EIM_DSR_DLL_STS_REF_LOCK      (0x00000002)  //!< Bit mask for EIM_DSR_DLL_STS_REF_LOCK.

//! @brief Get value of EIM_DSR_DLL_STS_REF_LOCK from a register value.
#define BG_EIM_DSR_DLL_STS_REF_LOCK(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_EIM_DSR_DLL_STS_REF_LOCK) >> BP_EIM_DSR_DLL_STS_REF_LOCK)

/* --- Register HW_EIM_DSR, field DLL_STS_SLV_SEL[8:2] (RW)
 *

 */

#define BP_EIM_DSR_DLL_STS_SLV_SEL      (2)      //!< Bit position for EIM_DSR_DLL_STS_SLV_SEL.
#define BM_EIM_DSR_DLL_STS_SLV_SEL      (0x000001fc)  //!< Bit mask for EIM_DSR_DLL_STS_SLV_SEL.

//! @brief Get value of EIM_DSR_DLL_STS_SLV_SEL from a register value.
#define BG_EIM_DSR_DLL_STS_SLV_SEL(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_EIM_DSR_DLL_STS_SLV_SEL) >> BP_EIM_DSR_DLL_STS_SLV_SEL)

/* --- Register HW_EIM_DSR, field DLL_STS_REF_SEL[15:9] (RW)
 *

 */

#define BP_EIM_DSR_DLL_STS_REF_SEL      (9)      //!< Bit position for EIM_DSR_DLL_STS_REF_SEL.
#define BM_EIM_DSR_DLL_STS_REF_SEL      (0x0000fe00)  //!< Bit mask for EIM_DSR_DLL_STS_REF_SEL.

//! @brief Get value of EIM_DSR_DLL_STS_REF_SEL from a register value.
#define BG_EIM_DSR_DLL_STS_REF_SEL(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_EIM_DSR_DLL_STS_REF_SEL) >> BP_EIM_DSR_DLL_STS_REF_SEL)

//-------------------------------------------------------------------------------------------
// HW_EIM_WIAR - EIM IP Access Register
//-------------------------------------------------------------------------------------------

#ifndef __LANGUAGE_ASM__
/*!
 * @brief HW_EIM_WIAR - EIM IP Access Register (RW)
 *
 * Reset value: 0x00000010
 *

 */
typedef union _hw_eim_wiar
{
    reg32_t U;
    struct _hw_eim_wiar_bitfields
    {
        unsigned IPS_REQ : 1; //!< [0] IPS request.
        unsigned IPS_ACK : 1; //!< [1] IPS ACK.
        unsigned INT : 1; //!< [2] Interrupt.
        unsigned ERRST : 1; //!< [3] READY After Reset.
        unsigned ACLK_EN : 1; //!< [4] ACLK enable.
        unsigned RESERVED0 : 27; //!< [31:5] Reserved
    } B;
} hw_eim_wiar_t;
#endif

/*
 * constants & macros for entire EIM_WIAR register
 */
#define HW_EIM_WIAR_ADDR      (REGS_EIM_BASE + 0x9c)

#ifndef __LANGUAGE_ASM__
#define HW_EIM_WIAR           (*(volatile hw_eim_wiar_t *) HW_EIM_WIAR_ADDR)
#define HW_EIM_WIAR_RD()      (HW_EIM_WIAR.U)
#define HW_EIM_WIAR_WR(v)     (HW_EIM_WIAR.U = (v))
#define HW_EIM_WIAR_SET(v)    (HW_EIM_WIAR_WR(HW_EIM_WIAR_RD() |  (v)))
#define HW_EIM_WIAR_CLR(v)    (HW_EIM_WIAR_WR(HW_EIM_WIAR_RD() & ~(v)))
#define HW_EIM_WIAR_TOG(v)    (HW_EIM_WIAR_WR(HW_EIM_WIAR_RD() ^  (v)))
#endif

/*
 * constants & macros for individual EIM_WIAR bitfields
 */

/* --- Register HW_EIM_WIAR, field IPS_REQ[0] (RW)
 *
 * IPS request. The Master requests to access one of the IPS registers.Dutring such access the EIM
 * should not preform any AXI/memory accesses. The EIM finishes the AXI accesses that already starts
 * and asserts the IPS_ACK bit.
 *
 * Values:
 * 0 - No Master requests ips access
 * 1 - Master requests ips access
 */

#define BP_EIM_WIAR_IPS_REQ      (0)      //!< Bit position for EIM_WIAR_IPS_REQ.
#define BM_EIM_WIAR_IPS_REQ      (0x00000001)  //!< Bit mask for EIM_WIAR_IPS_REQ.

//! @brief Get value of EIM_WIAR_IPS_REQ from a register value.
#define BG_EIM_WIAR_IPS_REQ(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_EIM_WIAR_IPS_REQ) >> BP_EIM_WIAR_IPS_REQ)

//! @brief Format value for bitfield EIM_WIAR_IPS_REQ.
#define BF_EIM_WIAR_IPS_REQ(v)   ((__REG_VALUE_TYPE((v), reg32_t) << BP_EIM_WIAR_IPS_REQ) & BM_EIM_WIAR_IPS_REQ)

#ifndef __LANGUAGE_ASM__
//! @brief Set the IPS_REQ field to a new value.
#define BW_EIM_WIAR_IPS_REQ(v)   (HW_EIM_WIAR_WR((HW_EIM_WIAR_RD() & ~BM_EIM_WIAR_IPS_REQ) | BF_EIM_WIAR_IPS_REQ(v)))
#endif


/* --- Register HW_EIM_WIAR, field IPS_ACK[1] (RW)
 *
 * IPS ACK. The EIM is ready for ips access. There is no active AXI access and no new AXI access is
 * accepted till this bit is cleared. This bit is cleared by the master after it completes the ips
 * accesses.
 *
 * Values:
 * 0 - Master cannot access ips.
 * 1 - Master can access ips.
 */

#define BP_EIM_WIAR_IPS_ACK      (1)      //!< Bit position for EIM_WIAR_IPS_ACK.
#define BM_EIM_WIAR_IPS_ACK      (0x00000002)  //!< Bit mask for EIM_WIAR_IPS_ACK.

//! @brief Get value of EIM_WIAR_IPS_ACK from a register value.
#define BG_EIM_WIAR_IPS_ACK(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_EIM_WIAR_IPS_ACK) >> BP_EIM_WIAR_IPS_ACK)

//! @brief Format value for bitfield EIM_WIAR_IPS_ACK.
#define BF_EIM_WIAR_IPS_ACK(v)   ((__REG_VALUE_TYPE((v), reg32_t) << BP_EIM_WIAR_IPS_ACK) & BM_EIM_WIAR_IPS_ACK)

#ifndef __LANGUAGE_ASM__
//! @brief Set the IPS_ACK field to a new value.
#define BW_EIM_WIAR_IPS_ACK(v)   (HW_EIM_WIAR_WR((HW_EIM_WIAR_RD() & ~BM_EIM_WIAR_IPS_ACK) | BF_EIM_WIAR_IPS_ACK(v)))
#endif


/* --- Register HW_EIM_WIAR, field INT[2] (RW)
 *
 * Interrupt. This bit indicates interrupt assertion by an external device according to RDY_INT
 * signal. When polling this bit, INT=0 indicates interrupt not occurred and INT=1 indicates
 * assertion of the external device interrupt. This bit is cleared by a hardware reset.
 */

#define BP_EIM_WIAR_INT      (2)      //!< Bit position for EIM_WIAR_INT.
#define BM_EIM_WIAR_INT      (0x00000004)  //!< Bit mask for EIM_WIAR_INT.

//! @brief Get value of EIM_WIAR_INT from a register value.
#define BG_EIM_WIAR_INT(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_EIM_WIAR_INT) >> BP_EIM_WIAR_INT)

//! @brief Format value for bitfield EIM_WIAR_INT.
#define BF_EIM_WIAR_INT(v)   ((__REG_VALUE_TYPE((v), reg32_t) << BP_EIM_WIAR_INT) & BM_EIM_WIAR_INT)

#ifndef __LANGUAGE_ASM__
//! @brief Set the INT field to a new value.
#define BW_EIM_WIAR_INT(v)   (HW_EIM_WIAR_WR((HW_EIM_WIAR_RD() & ~BM_EIM_WIAR_INT) | BF_EIM_WIAR_INT(v)))
#endif

/* --- Register HW_EIM_WIAR, field ERRST[3] (RW)
 *
 * READY After Reset. This bit controls the initial ready/busy status for external devices on CS0
 * immediately after hardware reset. This is a sticky bit which is cleared once the RDY_INT signal
 * is asserted by the external device. When ERRST = 1 the first fetch access from EIM to the
 * external device located on CS0 will be pending until RDY_INT signal indicates that the external
 * device is ready, then EIM will execute the access. Reset value for ERRST is EIM_BOOT[4].
 *
 * Values:
 * 0 - RDY_INT After Reset Disable
 * 1 - RDY_INT After Reset Enable
 */

#define BP_EIM_WIAR_ERRST      (3)      //!< Bit position for EIM_WIAR_ERRST.
#define BM_EIM_WIAR_ERRST      (0x00000008)  //!< Bit mask for EIM_WIAR_ERRST.

//! @brief Get value of EIM_WIAR_ERRST from a register value.
#define BG_EIM_WIAR_ERRST(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_EIM_WIAR_ERRST) >> BP_EIM_WIAR_ERRST)

//! @brief Format value for bitfield EIM_WIAR_ERRST.
#define BF_EIM_WIAR_ERRST(v)   ((__REG_VALUE_TYPE((v), reg32_t) << BP_EIM_WIAR_ERRST) & BM_EIM_WIAR_ERRST)

#ifndef __LANGUAGE_ASM__
//! @brief Set the ERRST field to a new value.
#define BW_EIM_WIAR_ERRST(v)   (HW_EIM_WIAR_WR((HW_EIM_WIAR_RD() & ~BM_EIM_WIAR_ERRST) | BF_EIM_WIAR_ERRST(v)))
#endif


/* --- Register HW_EIM_WIAR, field ACLK_EN[4] (RW)
 *
 * ACLK enable. This bit gates the ACLK for the EIM except from FFs that get ipg_aclk_s. After reset
 * ACLK is enabled.
 *
 * Values:
 * 0 - ACLK is disabled
 * 1 - ACLK is enabled
 */

#define BP_EIM_WIAR_ACLK_EN      (4)      //!< Bit position for EIM_WIAR_ACLK_EN.
#define BM_EIM_WIAR_ACLK_EN      (0x00000010)  //!< Bit mask for EIM_WIAR_ACLK_EN.

//! @brief Get value of EIM_WIAR_ACLK_EN from a register value.
#define BG_EIM_WIAR_ACLK_EN(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_EIM_WIAR_ACLK_EN) >> BP_EIM_WIAR_ACLK_EN)

//! @brief Format value for bitfield EIM_WIAR_ACLK_EN.
#define BF_EIM_WIAR_ACLK_EN(v)   ((__REG_VALUE_TYPE((v), reg32_t) << BP_EIM_WIAR_ACLK_EN) & BM_EIM_WIAR_ACLK_EN)

#ifndef __LANGUAGE_ASM__
//! @brief Set the ACLK_EN field to a new value.
#define BW_EIM_WIAR_ACLK_EN(v)   (HW_EIM_WIAR_WR((HW_EIM_WIAR_RD() & ~BM_EIM_WIAR_ACLK_EN) | BF_EIM_WIAR_ACLK_EN(v)))
#endif


//-------------------------------------------------------------------------------------------
// HW_EIM_EAR - Error Address Register
//-------------------------------------------------------------------------------------------

#ifndef __LANGUAGE_ASM__
/*!
 * @brief HW_EIM_EAR - Error Address Register (RW)
 *
 * Reset value: 0x00000000
 *

 */
typedef union _hw_eim_ear
{
    reg32_t U;
    struct _hw_eim_ear_bitfields
    {
        unsigned ERROR_ADDR : 32; //!< [31:0] Error Address.
    } B;
} hw_eim_ear_t;
#endif

/*
 * constants & macros for entire EIM_EAR register
 */
#define HW_EIM_EAR_ADDR      (REGS_EIM_BASE + 0xa0)

#ifndef __LANGUAGE_ASM__
#define HW_EIM_EAR           (*(volatile hw_eim_ear_t *) HW_EIM_EAR_ADDR)
#define HW_EIM_EAR_RD()      (HW_EIM_EAR.U)
#define HW_EIM_EAR_WR(v)     (HW_EIM_EAR.U = (v))
#define HW_EIM_EAR_SET(v)    (HW_EIM_EAR_WR(HW_EIM_EAR_RD() |  (v)))
#define HW_EIM_EAR_CLR(v)    (HW_EIM_EAR_WR(HW_EIM_EAR_RD() & ~(v)))
#define HW_EIM_EAR_TOG(v)    (HW_EIM_EAR_WR(HW_EIM_EAR_RD() ^  (v)))
#endif

/*
 * constants & macros for individual EIM_EAR bitfields
 */

/* --- Register HW_EIM_EAR, field ERROR_ADDR[31:0] (RW)
 *
 * Error Address. This bit field holds the AXI address of the last access that caused error. This
 * register is read only register.
 */

#define BP_EIM_EAR_ERROR_ADDR      (0)      //!< Bit position for EIM_EAR_ERROR_ADDR.
#define BM_EIM_EAR_ERROR_ADDR      (0xffffffff)  //!< Bit mask for EIM_EAR_ERROR_ADDR.

//! @brief Get value of EIM_EAR_ERROR_ADDR from a register value.
#define BG_EIM_EAR_ERROR_ADDR(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_EIM_EAR_ERROR_ADDR) >> BP_EIM_EAR_ERROR_ADDR)

//! @brief Format value for bitfield EIM_EAR_ERROR_ADDR.
#define BF_EIM_EAR_ERROR_ADDR(v)   ((__REG_VALUE_TYPE((v), reg32_t) << BP_EIM_EAR_ERROR_ADDR) & BM_EIM_EAR_ERROR_ADDR)

#ifndef __LANGUAGE_ASM__
//! @brief Set the ERROR_ADDR field to a new value.
#define BW_EIM_EAR_ERROR_ADDR(v)   (HW_EIM_EAR_WR((HW_EIM_EAR_RD() & ~BM_EIM_EAR_ERROR_ADDR) | BF_EIM_EAR_ERROR_ADDR(v)))
#endif


/*!
 * @brief All EIM module registers.
 */
#ifndef __LANGUAGE_ASM__
#pragma pack(1)
typedef struct _hw_eim
{
    volatile hw_eim_cs0gcr1_t CS0GCR1; //!< Chip Select n General Configuration Register 1
    volatile hw_eim_cs0gcr2_t CS0GCR2; //!< Chip Select n General Configuration Register 2
    volatile hw_eim_cs0rcr1_t CS0RCR1; //!< Chip Select n Read Configuration Register 1
    volatile hw_eim_cs0rcr2_t CS0RCR2; //!< Chip Select n Read Configuration Register 2
    volatile hw_eim_cs0wcr1_t CS0WCR1; //!< Chip Select n Write Configuration Register 1
    volatile hw_eim_cs0wcr2_t CS0WCR2; //!< Chip Select n Write Configuration Register 2
    volatile hw_eim_cs1gcr1_t CS1GCR1; //!< Chip Select n General Configuration Register 1
    volatile hw_eim_cs1gcr2_t CS1GCR2; //!< Chip Select n General Configuration Register 2
    volatile hw_eim_cs1rcr1_t CS1RCR1; //!< Chip Select n Read Configuration Register 1
    volatile hw_eim_cs1rcr2_t CS1RCR2; //!< Chip Select n Read Configuration Register 2
    volatile hw_eim_cs1wcr1_t CS1WCR1; //!< Chip Select n Write Configuration Register 1
    volatile hw_eim_cs1wcr2_t CS1WCR2; //!< Chip Select n Write Configuration Register 2
    volatile hw_eim_cs2gcr1_t CS2GCR1; //!< Chip Select n General Configuration Register 1
    volatile hw_eim_cs2gcr2_t CS2GCR2; //!< Chip Select n General Configuration Register 2
    volatile hw_eim_cs2rcr1_t CS2RCR1; //!< Chip Select n Read Configuration Register 1
    volatile hw_eim_cs2rcr2_t CS2RCR2; //!< Chip Select n Read Configuration Register 2
    volatile hw_eim_cs2wcr1_t CS2WCR1; //!< Chip Select n Write Configuration Register 1
    volatile hw_eim_cs2wcr2_t CS2WCR2; //!< Chip Select n Write Configuration Register 2
    volatile hw_eim_cs3gcr1_t CS3GCR1; //!< Chip Select n General Configuration Register 1
    volatile hw_eim_cs3gcr2_t CS3GCR2; //!< Chip Select n General Configuration Register 2
    volatile hw_eim_cs3rcr1_t CS3RCR1; //!< Chip Select n Read Configuration Register 1
    volatile hw_eim_cs3rcr2_t CS3RCR2; //!< Chip Select n Read Configuration Register 2
    volatile hw_eim_cs3wcr1_t CS3WCR1; //!< Chip Select n Write Configuration Register 1
    volatile hw_eim_cs3wcr2_t CS3WCR2; //!< Chip Select n Write Configuration Register 2
    volatile hw_eim_cs4gcr1_t CS4GCR1; //!< Chip Select n General Configuration Register 1
    volatile hw_eim_cs4gcr2_t CS4GCR2; //!< Chip Select n General Configuration Register 2
    volatile hw_eim_cs4rcr1_t CS4RCR1; //!< Chip Select n Read Configuration Register 1
    volatile hw_eim_cs4rcr2_t CS4RCR2; //!< Chip Select n Read Configuration Register 2
    volatile hw_eim_cs4wcr1_t CS4WCR1; //!< Chip Select n Write Configuration Register 1
    volatile hw_eim_cs4wcr2_t CS4WCR2; //!< Chip Select n Write Configuration Register 2
    volatile hw_eim_cs5gcr1_t CS5GCR1; //!< Chip Select n General Configuration Register 1
    volatile hw_eim_cs5gcr2_t CS5GCR2; //!< Chip Select n General Configuration Register 2
    volatile hw_eim_cs5rcr1_t CS5RCR1; //!< Chip Select n Read Configuration Register 1
    volatile hw_eim_cs5rcr2_t CS5RCR2; //!< Chip Select n Read Configuration Register 2
    volatile hw_eim_cs5wcr1_t CS5WCR1; //!< Chip Select n Write Configuration Register 1
    volatile hw_eim_cs5wcr2_t CS5WCR2; //!< Chip Select n Write Configuration Register 2
    volatile hw_eim_wcr_t WCR; //!< EIM Configuration Register
    volatile hw_eim_dcr_t DCR; //!< DLL Control Register
    volatile hw_eim_dsr_t DSR; //!< DLL Status Register
    volatile hw_eim_wiar_t WIAR; //!< EIM IP Access Register
    volatile hw_eim_ear_t EAR; //!< Error Address Register
} hw_eim_t;
#pragma pack()

//! @brief Macro to access all EIM registers.
//! @return Reference (not a pointer) to the registers struct. To get a pointer to the struct,
//!     use the '&' operator, like <code>&HW_EIM(0)</code>.
#define HW_EIM     (*(volatile hw_eim_t *) REGS_EIM_BASE)

#endif


#endif // __HW_EIM_REGISTERS_H__