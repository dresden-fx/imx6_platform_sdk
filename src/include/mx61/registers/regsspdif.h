/*
 * Copyright (C) 2012, Freescale Semiconductor, Inc. All Rights Reserved
 * THIS SOURCE CODE IS CONFIDENTIAL AND PROPRIETARY AND MAY NOT
 * BE USED OR DISTRIBUTED WITHOUT THE WRITTEN PERMISSION OF
 * Freescale Semiconductor, Inc.
 */

#ifndef _SPDIF_H
#define _SPDIF_H

#include "regs.h"

#ifndef REGS_SPDIF_BASE
#define REGS_SPDIF_BASE (REGS_BASE + 0x02004000)

#endif


/*
 * HW_SPDIF_SCR - SPDIF Configuration Register
 */
#ifndef __LANGUAGE_ASM__
typedef union
{
    reg32_t  U;
    struct
    {
        unsigned RESERVED0 : 8;
        unsigned RXFIFO_CTRL : 1;
        unsigned RXFIFO_OFF : 1;
        unsigned RXFIFO_RST : 1;
        unsigned RXFIFOFULL_SEL : 2;
        unsigned RXAUTOSYNC : 1;
        unsigned TXAUTOSYNC : 1;
        unsigned TXFIFOEMPTY_SEL : 2;
        unsigned RESERVED1 : 1;
        unsigned LOW : 1;
        unsigned SOFT_RESET : 1;
        unsigned TXFIFO_CTRL : 2;
        unsigned DMA_RX_EN : 1;
        unsigned DMA_TX_EN : 1;
        unsigned RESERVED2 : 2;
        unsigned VALCTRL : 1;
        unsigned TXSEL : 3;
        unsigned USRC_SEL : 2;

    } B;
} hw_spdif_scr_t;
#endif

/*
 * constants & macros for entire SPDIF_SCR register
 */
#define HW_SPDIF_SCR_ADDR      (REGS_SPDIF_BASE + 0x0)

#ifndef __LANGUAGE_ASM__
#define HW_SPDIF_SCR           (*(volatile hw_spdif_scr_t *) HW_SPDIF_SCR_ADDR)
#define HW_SPDIF_SCR_RD()      (HW_SPDIF_SCR.U)
#define HW_SPDIF_SCR_WR(v)     (HW_SPDIF_SCR.U = (v))
#define HW_SPDIF_SCR_SET(v)    (HW_SPDIF_SCR_WR(HW_SPDIF_SCR_RD() |  (v)))
#define HW_SPDIF_SCR_CLR(v)    (HW_SPDIF_SCR_WR(HW_SPDIF_SCR_RD() & ~(v)))
#define HW_SPDIF_SCR_TOG(v)    (HW_SPDIF_SCR_WR(HW_SPDIF_SCR_RD() ^  (v)))
#endif


/*
 * constants & macros for individual SPDIF_SCR bitfields
 */

/* --- Register HW_SPDIF_SCR, field RXFIFO_CTRL */

#define BP_SPDIF_SCR_RXFIFO_CTRL      23
#define BM_SPDIF_SCR_RXFIFO_CTRL      0x00800000

#ifndef __LANGUAGE_ASM__
#define BF_SPDIF_SCR_RXFIFO_CTRL(v)   ((((reg32_t) v) << 23) & BM_SPDIF_SCR_RXFIFO_CTRL)
#else
#define BF_SPDIF_SCR_RXFIFO_CTRL(v)   (((v) << 23) & BM_SPDIF_SCR_RXFIFO_CTRL)
#endif
#ifndef __LANGUAGE_ASM__
#define BW_SPDIF_SCR_RXFIFO_CTRL(v)   BF_CS1(SPDIF_SCR, RXFIFO_CTRL, v)
#endif

/* --- Register HW_SPDIF_SCR, field RXFIFO_OFF */

#define BP_SPDIF_SCR_RXFIFO_OFF      22
#define BM_SPDIF_SCR_RXFIFO_OFF      0x00400000

#ifndef __LANGUAGE_ASM__
#define BF_SPDIF_SCR_RXFIFO_OFF(v)   ((((reg32_t) v) << 22) & BM_SPDIF_SCR_RXFIFO_OFF)
#else
#define BF_SPDIF_SCR_RXFIFO_OFF(v)   (((v) << 22) & BM_SPDIF_SCR_RXFIFO_OFF)
#endif
#ifndef __LANGUAGE_ASM__
#define BW_SPDIF_SCR_RXFIFO_OFF(v)   BF_CS1(SPDIF_SCR, RXFIFO_OFF, v)
#endif

/* --- Register HW_SPDIF_SCR, field RXFIFO_RST */

#define BP_SPDIF_SCR_RXFIFO_RST      21
#define BM_SPDIF_SCR_RXFIFO_RST      0x00200000

#ifndef __LANGUAGE_ASM__
#define BF_SPDIF_SCR_RXFIFO_RST(v)   ((((reg32_t) v) << 21) & BM_SPDIF_SCR_RXFIFO_RST)
#else
#define BF_SPDIF_SCR_RXFIFO_RST(v)   (((v) << 21) & BM_SPDIF_SCR_RXFIFO_RST)
#endif
#ifndef __LANGUAGE_ASM__
#define BW_SPDIF_SCR_RXFIFO_RST(v)   BF_CS1(SPDIF_SCR, RXFIFO_RST, v)
#endif

/* --- Register HW_SPDIF_SCR, field RXFIFOFULL_SEL */

#define BP_SPDIF_SCR_RXFIFOFULL_SEL      19
#define BM_SPDIF_SCR_RXFIFOFULL_SEL      0x00180000

#ifndef __LANGUAGE_ASM__
#define BF_SPDIF_SCR_RXFIFOFULL_SEL(v)   ((((reg32_t) v) << 19) & BM_SPDIF_SCR_RXFIFOFULL_SEL)
#else
#define BF_SPDIF_SCR_RXFIFOFULL_SEL(v)   (((v) << 19) & BM_SPDIF_SCR_RXFIFOFULL_SEL)
#endif
#ifndef __LANGUAGE_ASM__
#define BW_SPDIF_SCR_RXFIFOFULL_SEL(v)   BF_CS1(SPDIF_SCR, RXFIFOFULL_SEL, v)
#endif

/* --- Register HW_SPDIF_SCR, field RXAUTOSYNC */

#define BP_SPDIF_SCR_RXAUTOSYNC      18
#define BM_SPDIF_SCR_RXAUTOSYNC      0x00040000

#ifndef __LANGUAGE_ASM__
#define BF_SPDIF_SCR_RXAUTOSYNC(v)   ((((reg32_t) v) << 18) & BM_SPDIF_SCR_RXAUTOSYNC)
#else
#define BF_SPDIF_SCR_RXAUTOSYNC(v)   (((v) << 18) & BM_SPDIF_SCR_RXAUTOSYNC)
#endif
#ifndef __LANGUAGE_ASM__
#define BW_SPDIF_SCR_RXAUTOSYNC(v)   BF_CS1(SPDIF_SCR, RXAUTOSYNC, v)
#endif

/* --- Register HW_SPDIF_SCR, field TXAUTOSYNC */

#define BP_SPDIF_SCR_TXAUTOSYNC      17
#define BM_SPDIF_SCR_TXAUTOSYNC      0x00020000

#ifndef __LANGUAGE_ASM__
#define BF_SPDIF_SCR_TXAUTOSYNC(v)   ((((reg32_t) v) << 17) & BM_SPDIF_SCR_TXAUTOSYNC)
#else
#define BF_SPDIF_SCR_TXAUTOSYNC(v)   (((v) << 17) & BM_SPDIF_SCR_TXAUTOSYNC)
#endif
#ifndef __LANGUAGE_ASM__
#define BW_SPDIF_SCR_TXAUTOSYNC(v)   BF_CS1(SPDIF_SCR, TXAUTOSYNC, v)
#endif

/* --- Register HW_SPDIF_SCR, field TXFIFOEMPTY_SEL */

#define BP_SPDIF_SCR_TXFIFOEMPTY_SEL      15
#define BM_SPDIF_SCR_TXFIFOEMPTY_SEL      0x00018000

#ifndef __LANGUAGE_ASM__
#define BF_SPDIF_SCR_TXFIFOEMPTY_SEL(v)   ((((reg32_t) v) << 15) & BM_SPDIF_SCR_TXFIFOEMPTY_SEL)
#else
#define BF_SPDIF_SCR_TXFIFOEMPTY_SEL(v)   (((v) << 15) & BM_SPDIF_SCR_TXFIFOEMPTY_SEL)
#endif
#ifndef __LANGUAGE_ASM__
#define BW_SPDIF_SCR_TXFIFOEMPTY_SEL(v)   BF_CS1(SPDIF_SCR, TXFIFOEMPTY_SEL, v)
#endif

/* --- Register HW_SPDIF_SCR, field LOW */

#define BP_SPDIF_SCR_LOW      13
#define BM_SPDIF_SCR_LOW      0x00002000

#ifndef __LANGUAGE_ASM__
#define BF_SPDIF_SCR_LOW(v)   ((((reg32_t) v) << 13) & BM_SPDIF_SCR_LOW)
#else
#define BF_SPDIF_SCR_LOW(v)   (((v) << 13) & BM_SPDIF_SCR_LOW)
#endif
#ifndef __LANGUAGE_ASM__
#define BW_SPDIF_SCR_LOW(v)   BF_CS1(SPDIF_SCR, LOW, v)
#endif

/* --- Register HW_SPDIF_SCR, field SOFT_RESET */

#define BP_SPDIF_SCR_SOFT_RESET      12
#define BM_SPDIF_SCR_SOFT_RESET      0x00001000

#ifndef __LANGUAGE_ASM__
#define BF_SPDIF_SCR_SOFT_RESET(v)   ((((reg32_t) v) << 12) & BM_SPDIF_SCR_SOFT_RESET)
#else
#define BF_SPDIF_SCR_SOFT_RESET(v)   (((v) << 12) & BM_SPDIF_SCR_SOFT_RESET)
#endif
#ifndef __LANGUAGE_ASM__
#define BW_SPDIF_SCR_SOFT_RESET(v)   BF_CS1(SPDIF_SCR, SOFT_RESET, v)
#endif

/* --- Register HW_SPDIF_SCR, field TXFIFO_CTRL */

#define BP_SPDIF_SCR_TXFIFO_CTRL      10
#define BM_SPDIF_SCR_TXFIFO_CTRL      0x00000c00

#ifndef __LANGUAGE_ASM__
#define BF_SPDIF_SCR_TXFIFO_CTRL(v)   ((((reg32_t) v) << 10) & BM_SPDIF_SCR_TXFIFO_CTRL)
#else
#define BF_SPDIF_SCR_TXFIFO_CTRL(v)   (((v) << 10) & BM_SPDIF_SCR_TXFIFO_CTRL)
#endif
#ifndef __LANGUAGE_ASM__
#define BW_SPDIF_SCR_TXFIFO_CTRL(v)   BF_CS1(SPDIF_SCR, TXFIFO_CTRL, v)
#endif

/* --- Register HW_SPDIF_SCR, field DMA_RX_EN */

#define BP_SPDIF_SCR_DMA_RX_EN      9
#define BM_SPDIF_SCR_DMA_RX_EN      0x00000200

#ifndef __LANGUAGE_ASM__
#define BF_SPDIF_SCR_DMA_RX_EN(v)   ((((reg32_t) v) << 9) & BM_SPDIF_SCR_DMA_RX_EN)
#else
#define BF_SPDIF_SCR_DMA_RX_EN(v)   (((v) << 9) & BM_SPDIF_SCR_DMA_RX_EN)
#endif
#ifndef __LANGUAGE_ASM__
#define BW_SPDIF_SCR_DMA_RX_EN(v)   BF_CS1(SPDIF_SCR, DMA_RX_EN, v)
#endif

/* --- Register HW_SPDIF_SCR, field DMA_TX_EN */

#define BP_SPDIF_SCR_DMA_TX_EN      8
#define BM_SPDIF_SCR_DMA_TX_EN      0x00000100

#ifndef __LANGUAGE_ASM__
#define BF_SPDIF_SCR_DMA_TX_EN(v)   ((((reg32_t) v) << 8) & BM_SPDIF_SCR_DMA_TX_EN)
#else
#define BF_SPDIF_SCR_DMA_TX_EN(v)   (((v) << 8) & BM_SPDIF_SCR_DMA_TX_EN)
#endif
#ifndef __LANGUAGE_ASM__
#define BW_SPDIF_SCR_DMA_TX_EN(v)   BF_CS1(SPDIF_SCR, DMA_TX_EN, v)
#endif

/* --- Register HW_SPDIF_SCR, field VALCTRL */

#define BP_SPDIF_SCR_VALCTRL      5
#define BM_SPDIF_SCR_VALCTRL      0x00000020

#ifndef __LANGUAGE_ASM__
#define BF_SPDIF_SCR_VALCTRL(v)   ((((reg32_t) v) << 5) & BM_SPDIF_SCR_VALCTRL)
#else
#define BF_SPDIF_SCR_VALCTRL(v)   (((v) << 5) & BM_SPDIF_SCR_VALCTRL)
#endif
#ifndef __LANGUAGE_ASM__
#define BW_SPDIF_SCR_VALCTRL(v)   BF_CS1(SPDIF_SCR, VALCTRL, v)
#endif

/* --- Register HW_SPDIF_SCR, field TXSEL */

#define BP_SPDIF_SCR_TXSEL      2
#define BM_SPDIF_SCR_TXSEL      0x0000001c

#ifndef __LANGUAGE_ASM__
#define BF_SPDIF_SCR_TXSEL(v)   ((((reg32_t) v) << 2) & BM_SPDIF_SCR_TXSEL)
#else
#define BF_SPDIF_SCR_TXSEL(v)   (((v) << 2) & BM_SPDIF_SCR_TXSEL)
#endif
#ifndef __LANGUAGE_ASM__
#define BW_SPDIF_SCR_TXSEL(v)   BF_CS1(SPDIF_SCR, TXSEL, v)
#endif

/* --- Register HW_SPDIF_SCR, field USRC_SEL */

#define BP_SPDIF_SCR_USRC_SEL      0
#define BM_SPDIF_SCR_USRC_SEL      0x00000003

#ifndef __LANGUAGE_ASM__
#define BF_SPDIF_SCR_USRC_SEL(v)   ((((reg32_t) v) << 0) & BM_SPDIF_SCR_USRC_SEL)
#else
#define BF_SPDIF_SCR_USRC_SEL(v)   (((v) << 0) & BM_SPDIF_SCR_USRC_SEL)
#endif
#ifndef __LANGUAGE_ASM__
#define BW_SPDIF_SCR_USRC_SEL(v)   BF_CS1(SPDIF_SCR, USRC_SEL, v)
#endif

/*
 * HW_SPDIF_SRCD - CDText Control Register
 */
#ifndef __LANGUAGE_ASM__
typedef union
{
    reg32_t  U;
    struct
    {
        unsigned RESERVED0 : 8;
        unsigned RESERVED1 : 9;
        unsigned RESERVED2 : 7;
        unsigned RESERVED3 : 5;
        unsigned RESERVED4 : 1;
        unsigned USYNCMODE : 1;
        unsigned RESERVED5 : 1;

    } B;
} hw_spdif_srcd_t;
#endif

/*
 * constants & macros for entire SPDIF_SRCD register
 */
#define HW_SPDIF_SRCD_ADDR      (REGS_SPDIF_BASE + 0x4)

#ifndef __LANGUAGE_ASM__
#define HW_SPDIF_SRCD           (*(volatile hw_spdif_srcd_t *) HW_SPDIF_SRCD_ADDR)
#define HW_SPDIF_SRCD_RD()      (HW_SPDIF_SRCD.U)
#define HW_SPDIF_SRCD_WR(v)     (HW_SPDIF_SRCD.U = (v))
#define HW_SPDIF_SRCD_SET(v)    (HW_SPDIF_SRCD_WR(HW_SPDIF_SRCD_RD() |  (v)))
#define HW_SPDIF_SRCD_CLR(v)    (HW_SPDIF_SRCD_WR(HW_SPDIF_SRCD_RD() & ~(v)))
#define HW_SPDIF_SRCD_TOG(v)    (HW_SPDIF_SRCD_WR(HW_SPDIF_SRCD_RD() ^  (v)))
#endif


/*
 * constants & macros for individual SPDIF_SRCD bitfields
 */

/* --- Register HW_SPDIF_SRCD, field USYNCMODE */

#define BP_SPDIF_SRCD_USYNCMODE      1
#define BM_SPDIF_SRCD_USYNCMODE      0x00000002

#ifndef __LANGUAGE_ASM__
#define BF_SPDIF_SRCD_USYNCMODE(v)   ((((reg32_t) v) << 1) & BM_SPDIF_SRCD_USYNCMODE)
#else
#define BF_SPDIF_SRCD_USYNCMODE(v)   (((v) << 1) & BM_SPDIF_SRCD_USYNCMODE)
#endif
#ifndef __LANGUAGE_ASM__
#define BW_SPDIF_SRCD_USYNCMODE(v)   BF_CS1(SPDIF_SRCD, USYNCMODE, v)
#endif

/*
 * HW_SPDIF_SRPC - PhaseConfig Register
 */
#ifndef __LANGUAGE_ASM__
typedef union
{
    reg32_t  U;
    struct
    {
        unsigned RESERVED0 : 8;
        unsigned RESERVED1 : 13;
        unsigned CLKSRC_SEL : 4;
        unsigned CLKSRC_SEL : 4;
        unsigned LOCK : 1;
        unsigned GAINSEL : 3;
        unsigned RESERVED2 : 3;

    } B;
} hw_spdif_srpc_t;
#endif

/*
 * constants & macros for entire SPDIF_SRPC register
 */
#define HW_SPDIF_SRPC_ADDR      (REGS_SPDIF_BASE + 0x8)

#ifndef __LANGUAGE_ASM__
#define HW_SPDIF_SRPC           (*(volatile hw_spdif_srpc_t *) HW_SPDIF_SRPC_ADDR)
#define HW_SPDIF_SRPC_RD()      (HW_SPDIF_SRPC.U)
#define HW_SPDIF_SRPC_WR(v)     (HW_SPDIF_SRPC.U = (v))
#define HW_SPDIF_SRPC_SET(v)    (HW_SPDIF_SRPC_WR(HW_SPDIF_SRPC_RD() |  (v)))
#define HW_SPDIF_SRPC_CLR(v)    (HW_SPDIF_SRPC_WR(HW_SPDIF_SRPC_RD() & ~(v)))
#define HW_SPDIF_SRPC_TOG(v)    (HW_SPDIF_SRPC_WR(HW_SPDIF_SRPC_RD() ^  (v)))
#endif


/*
 * constants & macros for individual SPDIF_SRPC bitfields
 */

/* --- Register HW_SPDIF_SRPC, field CLKSRC_SEL */

#define BP_SPDIF_SRPC_CLKSRC_SEL      7
#define BM_SPDIF_SRPC_CLKSRC_SEL      0x00000780

#ifndef __LANGUAGE_ASM__
#define BF_SPDIF_SRPC_CLKSRC_SEL(v)   ((((reg32_t) v) << 7) & BM_SPDIF_SRPC_CLKSRC_SEL)
#else
#define BF_SPDIF_SRPC_CLKSRC_SEL(v)   (((v) << 7) & BM_SPDIF_SRPC_CLKSRC_SEL)
#endif
#ifndef __LANGUAGE_ASM__
#define BW_SPDIF_SRPC_CLKSRC_SEL(v)   BF_CS1(SPDIF_SRPC, CLKSRC_SEL, v)
#endif

/* --- Register HW_SPDIF_SRPC, field CLKSRC_SEL */

#define BP_SPDIF_SRPC_CLKSRC_SEL      7
#define BM_SPDIF_SRPC_CLKSRC_SEL      0x00000780

#ifndef __LANGUAGE_ASM__
#define BF_SPDIF_SRPC_CLKSRC_SEL(v)   ((((reg32_t) v) << 7) & BM_SPDIF_SRPC_CLKSRC_SEL)
#else
#define BF_SPDIF_SRPC_CLKSRC_SEL(v)   (((v) << 7) & BM_SPDIF_SRPC_CLKSRC_SEL)
#endif
#ifndef __LANGUAGE_ASM__
#define BW_SPDIF_SRPC_CLKSRC_SEL(v)   BF_CS1(SPDIF_SRPC, CLKSRC_SEL, v)
#endif

/* --- Register HW_SPDIF_SRPC, field LOCK */

#define BP_SPDIF_SRPC_LOCK      6
#define BM_SPDIF_SRPC_LOCK      0x00000040

#ifndef __LANGUAGE_ASM__
#define BF_SPDIF_SRPC_LOCK(v)   ((((reg32_t) v) << 6) & BM_SPDIF_SRPC_LOCK)
#else
#define BF_SPDIF_SRPC_LOCK(v)   (((v) << 6) & BM_SPDIF_SRPC_LOCK)
#endif
#ifndef __LANGUAGE_ASM__
#define BW_SPDIF_SRPC_LOCK(v)   BF_CS1(SPDIF_SRPC, LOCK, v)
#endif

/* --- Register HW_SPDIF_SRPC, field GAINSEL */

#define BP_SPDIF_SRPC_GAINSEL      3
#define BM_SPDIF_SRPC_GAINSEL      0x00000038

#ifndef __LANGUAGE_ASM__
#define BF_SPDIF_SRPC_GAINSEL(v)   ((((reg32_t) v) << 3) & BM_SPDIF_SRPC_GAINSEL)
#else
#define BF_SPDIF_SRPC_GAINSEL(v)   (((v) << 3) & BM_SPDIF_SRPC_GAINSEL)
#endif
#ifndef __LANGUAGE_ASM__
#define BW_SPDIF_SRPC_GAINSEL(v)   BF_CS1(SPDIF_SRPC, GAINSEL, v)
#endif

/*
 * HW_SPDIF_SIE - InterruptEn Register
 */
#ifndef __LANGUAGE_ASM__
typedef union
{
    reg32_t  U;
    struct
    {
        unsigned RESERVED0 : 8;
        unsigned RESERVED1 : 1;
        unsigned RESERVED2 : 2;
        unsigned LOCK : 1;
        unsigned TXUNOV : 1;
        unsigned TXRESYN : 1;
        unsigned CNEW : 1;
        unsigned VALNOGOOD : 1;
        unsigned SYMERR : 1;
        unsigned BITERR : 1;
        unsigned RESERVED3 : 3;
        unsigned URXFUL : 1;
        unsigned URXOV : 1;
        unsigned QRXFUL : 1;
        unsigned QRXOV : 1;
        unsigned UQSYNC : 1;
        unsigned UQERR : 1;
        unsigned RXFIFOUNOV : 1;
        unsigned RXFIFORESYN : 1;
        unsigned LOCKLOSS : 1;
        unsigned TXEM : 1;
        unsigned RXFIFOFUL : 1;

    } B;
} hw_spdif_sie_t;
#endif

/*
 * constants & macros for entire SPDIF_SIE register
 */
#define HW_SPDIF_SIE_ADDR      (REGS_SPDIF_BASE + 0xc)

#ifndef __LANGUAGE_ASM__
#define HW_SPDIF_SIE           (*(volatile hw_spdif_sie_t *) HW_SPDIF_SIE_ADDR)
#define HW_SPDIF_SIE_RD()      (HW_SPDIF_SIE.U)
#define HW_SPDIF_SIE_WR(v)     (HW_SPDIF_SIE.U = (v))
#define HW_SPDIF_SIE_SET(v)    (HW_SPDIF_SIE_WR(HW_SPDIF_SIE_RD() |  (v)))
#define HW_SPDIF_SIE_CLR(v)    (HW_SPDIF_SIE_WR(HW_SPDIF_SIE_RD() & ~(v)))
#define HW_SPDIF_SIE_TOG(v)    (HW_SPDIF_SIE_WR(HW_SPDIF_SIE_RD() ^  (v)))
#endif


/*
 * constants & macros for individual SPDIF_SIE bitfields
 */

/* --- Register HW_SPDIF_SIE, field LOCK */

#define BP_SPDIF_SIE_LOCK      20
#define BM_SPDIF_SIE_LOCK      0x00100000

#ifndef __LANGUAGE_ASM__
#define BF_SPDIF_SIE_LOCK(v)   ((((reg32_t) v) << 20) & BM_SPDIF_SIE_LOCK)
#else
#define BF_SPDIF_SIE_LOCK(v)   (((v) << 20) & BM_SPDIF_SIE_LOCK)
#endif
#ifndef __LANGUAGE_ASM__
#define BW_SPDIF_SIE_LOCK(v)   BF_CS1(SPDIF_SIE, LOCK, v)
#endif

/* --- Register HW_SPDIF_SIE, field TXUNOV */

#define BP_SPDIF_SIE_TXUNOV      19
#define BM_SPDIF_SIE_TXUNOV      0x00080000

#ifndef __LANGUAGE_ASM__
#define BF_SPDIF_SIE_TXUNOV(v)   ((((reg32_t) v) << 19) & BM_SPDIF_SIE_TXUNOV)
#else
#define BF_SPDIF_SIE_TXUNOV(v)   (((v) << 19) & BM_SPDIF_SIE_TXUNOV)
#endif
#ifndef __LANGUAGE_ASM__
#define BW_SPDIF_SIE_TXUNOV(v)   BF_CS1(SPDIF_SIE, TXUNOV, v)
#endif

/* --- Register HW_SPDIF_SIE, field TXRESYN */

#define BP_SPDIF_SIE_TXRESYN      18
#define BM_SPDIF_SIE_TXRESYN      0x00040000

#ifndef __LANGUAGE_ASM__
#define BF_SPDIF_SIE_TXRESYN(v)   ((((reg32_t) v) << 18) & BM_SPDIF_SIE_TXRESYN)
#else
#define BF_SPDIF_SIE_TXRESYN(v)   (((v) << 18) & BM_SPDIF_SIE_TXRESYN)
#endif
#ifndef __LANGUAGE_ASM__
#define BW_SPDIF_SIE_TXRESYN(v)   BF_CS1(SPDIF_SIE, TXRESYN, v)
#endif

/* --- Register HW_SPDIF_SIE, field CNEW */

#define BP_SPDIF_SIE_CNEW      17
#define BM_SPDIF_SIE_CNEW      0x00020000

#ifndef __LANGUAGE_ASM__
#define BF_SPDIF_SIE_CNEW(v)   ((((reg32_t) v) << 17) & BM_SPDIF_SIE_CNEW)
#else
#define BF_SPDIF_SIE_CNEW(v)   (((v) << 17) & BM_SPDIF_SIE_CNEW)
#endif
#ifndef __LANGUAGE_ASM__
#define BW_SPDIF_SIE_CNEW(v)   BF_CS1(SPDIF_SIE, CNEW, v)
#endif

/* --- Register HW_SPDIF_SIE, field VALNOGOOD */

#define BP_SPDIF_SIE_VALNOGOOD      16
#define BM_SPDIF_SIE_VALNOGOOD      0x00010000

#ifndef __LANGUAGE_ASM__
#define BF_SPDIF_SIE_VALNOGOOD(v)   ((((reg32_t) v) << 16) & BM_SPDIF_SIE_VALNOGOOD)
#else
#define BF_SPDIF_SIE_VALNOGOOD(v)   (((v) << 16) & BM_SPDIF_SIE_VALNOGOOD)
#endif
#ifndef __LANGUAGE_ASM__
#define BW_SPDIF_SIE_VALNOGOOD(v)   BF_CS1(SPDIF_SIE, VALNOGOOD, v)
#endif

/* --- Register HW_SPDIF_SIE, field SYMERR */

#define BP_SPDIF_SIE_SYMERR      15
#define BM_SPDIF_SIE_SYMERR      0x00008000

#ifndef __LANGUAGE_ASM__
#define BF_SPDIF_SIE_SYMERR(v)   ((((reg32_t) v) << 15) & BM_SPDIF_SIE_SYMERR)
#else
#define BF_SPDIF_SIE_SYMERR(v)   (((v) << 15) & BM_SPDIF_SIE_SYMERR)
#endif
#ifndef __LANGUAGE_ASM__
#define BW_SPDIF_SIE_SYMERR(v)   BF_CS1(SPDIF_SIE, SYMERR, v)
#endif

/* --- Register HW_SPDIF_SIE, field BITERR */

#define BP_SPDIF_SIE_BITERR      14
#define BM_SPDIF_SIE_BITERR      0x00004000

#ifndef __LANGUAGE_ASM__
#define BF_SPDIF_SIE_BITERR(v)   ((((reg32_t) v) << 14) & BM_SPDIF_SIE_BITERR)
#else
#define BF_SPDIF_SIE_BITERR(v)   (((v) << 14) & BM_SPDIF_SIE_BITERR)
#endif
#ifndef __LANGUAGE_ASM__
#define BW_SPDIF_SIE_BITERR(v)   BF_CS1(SPDIF_SIE, BITERR, v)
#endif

/* --- Register HW_SPDIF_SIE, field URXFUL */

#define BP_SPDIF_SIE_URXFUL      10
#define BM_SPDIF_SIE_URXFUL      0x00000400

#ifndef __LANGUAGE_ASM__
#define BF_SPDIF_SIE_URXFUL(v)   ((((reg32_t) v) << 10) & BM_SPDIF_SIE_URXFUL)
#else
#define BF_SPDIF_SIE_URXFUL(v)   (((v) << 10) & BM_SPDIF_SIE_URXFUL)
#endif
#ifndef __LANGUAGE_ASM__
#define BW_SPDIF_SIE_URXFUL(v)   BF_CS1(SPDIF_SIE, URXFUL, v)
#endif

/* --- Register HW_SPDIF_SIE, field URXOV */

#define BP_SPDIF_SIE_URXOV      9
#define BM_SPDIF_SIE_URXOV      0x00000200

#ifndef __LANGUAGE_ASM__
#define BF_SPDIF_SIE_URXOV(v)   ((((reg32_t) v) << 9) & BM_SPDIF_SIE_URXOV)
#else
#define BF_SPDIF_SIE_URXOV(v)   (((v) << 9) & BM_SPDIF_SIE_URXOV)
#endif
#ifndef __LANGUAGE_ASM__
#define BW_SPDIF_SIE_URXOV(v)   BF_CS1(SPDIF_SIE, URXOV, v)
#endif

/* --- Register HW_SPDIF_SIE, field QRXFUL */

#define BP_SPDIF_SIE_QRXFUL      8
#define BM_SPDIF_SIE_QRXFUL      0x00000100

#ifndef __LANGUAGE_ASM__
#define BF_SPDIF_SIE_QRXFUL(v)   ((((reg32_t) v) << 8) & BM_SPDIF_SIE_QRXFUL)
#else
#define BF_SPDIF_SIE_QRXFUL(v)   (((v) << 8) & BM_SPDIF_SIE_QRXFUL)
#endif
#ifndef __LANGUAGE_ASM__
#define BW_SPDIF_SIE_QRXFUL(v)   BF_CS1(SPDIF_SIE, QRXFUL, v)
#endif

/* --- Register HW_SPDIF_SIE, field QRXOV */

#define BP_SPDIF_SIE_QRXOV      7
#define BM_SPDIF_SIE_QRXOV      0x00000080

#ifndef __LANGUAGE_ASM__
#define BF_SPDIF_SIE_QRXOV(v)   ((((reg32_t) v) << 7) & BM_SPDIF_SIE_QRXOV)
#else
#define BF_SPDIF_SIE_QRXOV(v)   (((v) << 7) & BM_SPDIF_SIE_QRXOV)
#endif
#ifndef __LANGUAGE_ASM__
#define BW_SPDIF_SIE_QRXOV(v)   BF_CS1(SPDIF_SIE, QRXOV, v)
#endif

/* --- Register HW_SPDIF_SIE, field UQSYNC */

#define BP_SPDIF_SIE_UQSYNC      6
#define BM_SPDIF_SIE_UQSYNC      0x00000040

#ifndef __LANGUAGE_ASM__
#define BF_SPDIF_SIE_UQSYNC(v)   ((((reg32_t) v) << 6) & BM_SPDIF_SIE_UQSYNC)
#else
#define BF_SPDIF_SIE_UQSYNC(v)   (((v) << 6) & BM_SPDIF_SIE_UQSYNC)
#endif
#ifndef __LANGUAGE_ASM__
#define BW_SPDIF_SIE_UQSYNC(v)   BF_CS1(SPDIF_SIE, UQSYNC, v)
#endif

/* --- Register HW_SPDIF_SIE, field UQERR */

#define BP_SPDIF_SIE_UQERR      5
#define BM_SPDIF_SIE_UQERR      0x00000020

#ifndef __LANGUAGE_ASM__
#define BF_SPDIF_SIE_UQERR(v)   ((((reg32_t) v) << 5) & BM_SPDIF_SIE_UQERR)
#else
#define BF_SPDIF_SIE_UQERR(v)   (((v) << 5) & BM_SPDIF_SIE_UQERR)
#endif
#ifndef __LANGUAGE_ASM__
#define BW_SPDIF_SIE_UQERR(v)   BF_CS1(SPDIF_SIE, UQERR, v)
#endif

/* --- Register HW_SPDIF_SIE, field RXFIFOUNOV */

#define BP_SPDIF_SIE_RXFIFOUNOV      4
#define BM_SPDIF_SIE_RXFIFOUNOV      0x00000010

#ifndef __LANGUAGE_ASM__
#define BF_SPDIF_SIE_RXFIFOUNOV(v)   ((((reg32_t) v) << 4) & BM_SPDIF_SIE_RXFIFOUNOV)
#else
#define BF_SPDIF_SIE_RXFIFOUNOV(v)   (((v) << 4) & BM_SPDIF_SIE_RXFIFOUNOV)
#endif
#ifndef __LANGUAGE_ASM__
#define BW_SPDIF_SIE_RXFIFOUNOV(v)   BF_CS1(SPDIF_SIE, RXFIFOUNOV, v)
#endif

/* --- Register HW_SPDIF_SIE, field RXFIFORESYN */

#define BP_SPDIF_SIE_RXFIFORESYN      3
#define BM_SPDIF_SIE_RXFIFORESYN      0x00000008

#ifndef __LANGUAGE_ASM__
#define BF_SPDIF_SIE_RXFIFORESYN(v)   ((((reg32_t) v) << 3) & BM_SPDIF_SIE_RXFIFORESYN)
#else
#define BF_SPDIF_SIE_RXFIFORESYN(v)   (((v) << 3) & BM_SPDIF_SIE_RXFIFORESYN)
#endif
#ifndef __LANGUAGE_ASM__
#define BW_SPDIF_SIE_RXFIFORESYN(v)   BF_CS1(SPDIF_SIE, RXFIFORESYN, v)
#endif

/* --- Register HW_SPDIF_SIE, field LOCKLOSS */

#define BP_SPDIF_SIE_LOCKLOSS      2
#define BM_SPDIF_SIE_LOCKLOSS      0x00000004

#ifndef __LANGUAGE_ASM__
#define BF_SPDIF_SIE_LOCKLOSS(v)   ((((reg32_t) v) << 2) & BM_SPDIF_SIE_LOCKLOSS)
#else
#define BF_SPDIF_SIE_LOCKLOSS(v)   (((v) << 2) & BM_SPDIF_SIE_LOCKLOSS)
#endif
#ifndef __LANGUAGE_ASM__
#define BW_SPDIF_SIE_LOCKLOSS(v)   BF_CS1(SPDIF_SIE, LOCKLOSS, v)
#endif

/* --- Register HW_SPDIF_SIE, field TXEM */

#define BP_SPDIF_SIE_TXEM      1
#define BM_SPDIF_SIE_TXEM      0x00000002

#ifndef __LANGUAGE_ASM__
#define BF_SPDIF_SIE_TXEM(v)   ((((reg32_t) v) << 1) & BM_SPDIF_SIE_TXEM)
#else
#define BF_SPDIF_SIE_TXEM(v)   (((v) << 1) & BM_SPDIF_SIE_TXEM)
#endif
#ifndef __LANGUAGE_ASM__
#define BW_SPDIF_SIE_TXEM(v)   BF_CS1(SPDIF_SIE, TXEM, v)
#endif

/* --- Register HW_SPDIF_SIE, field RXFIFOFUL */

#define BP_SPDIF_SIE_RXFIFOFUL      0
#define BM_SPDIF_SIE_RXFIFOFUL      0x00000001

#ifndef __LANGUAGE_ASM__
#define BF_SPDIF_SIE_RXFIFOFUL(v)   ((((reg32_t) v) << 0) & BM_SPDIF_SIE_RXFIFOFUL)
#else
#define BF_SPDIF_SIE_RXFIFOFUL(v)   (((v) << 0) & BM_SPDIF_SIE_RXFIFOFUL)
#endif
#ifndef __LANGUAGE_ASM__
#define BW_SPDIF_SIE_RXFIFOFUL(v)   BF_CS1(SPDIF_SIE, RXFIFOFUL, v)
#endif

/*
 * HW_SPDIF_SIS - InterruptStat Register
 */
#ifndef __LANGUAGE_ASM__
typedef union
{
    reg32_t  U;
    struct
    {
        unsigned RESERVED0 : 8;
        unsigned RESERVED1 : 3;
        unsigned LOCK : 1;
        unsigned TXUNOV : 1;
        unsigned TXRESYN : 1;
        unsigned CNEW : 1;
        unsigned VALNOGOOD : 1;
        unsigned SYMERR : 1;
        unsigned BITERR : 1;
        unsigned RESERVED2 : 3;
        unsigned URXFUL : 1;
        unsigned URXOV : 1;
        unsigned QRXFUL : 1;
        unsigned QRXOV : 1;
        unsigned UQSYNC : 1;
        unsigned UQERR : 1;
        unsigned RXFIFOUNOV : 1;
        unsigned RXFIFORESYN : 1;
        unsigned LOCKLOSS : 1;
        unsigned TXEM : 1;
        unsigned RXFIFOFUL : 1;

    } B;
} hw_spdif_sis_t;
#endif

/*
 * constants & macros for entire SPDIF_SIS register
 */
#define HW_SPDIF_SIS_ADDR      (REGS_SPDIF_BASE + 0x10)

#ifndef __LANGUAGE_ASM__
#define HW_SPDIF_SIS           (*(volatile hw_spdif_sis_t *) HW_SPDIF_SIS_ADDR)
#define HW_SPDIF_SIS_RD()      (HW_SPDIF_SIS.U)
#define HW_SPDIF_SIS_WR(v)     (HW_SPDIF_SIS.U = (v))
#define HW_SPDIF_SIS_SET(v)    (HW_SPDIF_SIS_WR(HW_SPDIF_SIS_RD() |  (v)))
#define HW_SPDIF_SIS_CLR(v)    (HW_SPDIF_SIS_WR(HW_SPDIF_SIS_RD() & ~(v)))
#define HW_SPDIF_SIS_TOG(v)    (HW_SPDIF_SIS_WR(HW_SPDIF_SIS_RD() ^  (v)))
#endif


/*
 * constants & macros for individual SPDIF_SIS bitfields
 */

/* --- Register HW_SPDIF_SIS, field LOCK */

#define BP_SPDIF_SIS_LOCK      20
#define BM_SPDIF_SIS_LOCK      0x00100000

#ifndef __LANGUAGE_ASM__
#define BF_SPDIF_SIS_LOCK(v)   ((((reg32_t) v) << 20) & BM_SPDIF_SIS_LOCK)
#else
#define BF_SPDIF_SIS_LOCK(v)   (((v) << 20) & BM_SPDIF_SIS_LOCK)
#endif
#ifndef __LANGUAGE_ASM__
#define BW_SPDIF_SIS_LOCK(v)   BF_CS1(SPDIF_SIS, LOCK, v)
#endif

/* --- Register HW_SPDIF_SIS, field TXUNOV */

#define BP_SPDIF_SIS_TXUNOV      19
#define BM_SPDIF_SIS_TXUNOV      0x00080000

#ifndef __LANGUAGE_ASM__
#define BF_SPDIF_SIS_TXUNOV(v)   ((((reg32_t) v) << 19) & BM_SPDIF_SIS_TXUNOV)
#else
#define BF_SPDIF_SIS_TXUNOV(v)   (((v) << 19) & BM_SPDIF_SIS_TXUNOV)
#endif
#ifndef __LANGUAGE_ASM__
#define BW_SPDIF_SIS_TXUNOV(v)   BF_CS1(SPDIF_SIS, TXUNOV, v)
#endif

/* --- Register HW_SPDIF_SIS, field TXRESYN */

#define BP_SPDIF_SIS_TXRESYN      18
#define BM_SPDIF_SIS_TXRESYN      0x00040000

#ifndef __LANGUAGE_ASM__
#define BF_SPDIF_SIS_TXRESYN(v)   ((((reg32_t) v) << 18) & BM_SPDIF_SIS_TXRESYN)
#else
#define BF_SPDIF_SIS_TXRESYN(v)   (((v) << 18) & BM_SPDIF_SIS_TXRESYN)
#endif
#ifndef __LANGUAGE_ASM__
#define BW_SPDIF_SIS_TXRESYN(v)   BF_CS1(SPDIF_SIS, TXRESYN, v)
#endif

/* --- Register HW_SPDIF_SIS, field CNEW */

#define BP_SPDIF_SIS_CNEW      17
#define BM_SPDIF_SIS_CNEW      0x00020000

#ifndef __LANGUAGE_ASM__
#define BF_SPDIF_SIS_CNEW(v)   ((((reg32_t) v) << 17) & BM_SPDIF_SIS_CNEW)
#else
#define BF_SPDIF_SIS_CNEW(v)   (((v) << 17) & BM_SPDIF_SIS_CNEW)
#endif
#ifndef __LANGUAGE_ASM__
#define BW_SPDIF_SIS_CNEW(v)   BF_CS1(SPDIF_SIS, CNEW, v)
#endif

/* --- Register HW_SPDIF_SIS, field VALNOGOOD */

#define BP_SPDIF_SIS_VALNOGOOD      16
#define BM_SPDIF_SIS_VALNOGOOD      0x00010000

#ifndef __LANGUAGE_ASM__
#define BF_SPDIF_SIS_VALNOGOOD(v)   ((((reg32_t) v) << 16) & BM_SPDIF_SIS_VALNOGOOD)
#else
#define BF_SPDIF_SIS_VALNOGOOD(v)   (((v) << 16) & BM_SPDIF_SIS_VALNOGOOD)
#endif
#ifndef __LANGUAGE_ASM__
#define BW_SPDIF_SIS_VALNOGOOD(v)   BF_CS1(SPDIF_SIS, VALNOGOOD, v)
#endif

/* --- Register HW_SPDIF_SIS, field SYMERR */

#define BP_SPDIF_SIS_SYMERR      15
#define BM_SPDIF_SIS_SYMERR      0x00008000

#ifndef __LANGUAGE_ASM__
#define BF_SPDIF_SIS_SYMERR(v)   ((((reg32_t) v) << 15) & BM_SPDIF_SIS_SYMERR)
#else
#define BF_SPDIF_SIS_SYMERR(v)   (((v) << 15) & BM_SPDIF_SIS_SYMERR)
#endif
#ifndef __LANGUAGE_ASM__
#define BW_SPDIF_SIS_SYMERR(v)   BF_CS1(SPDIF_SIS, SYMERR, v)
#endif

/* --- Register HW_SPDIF_SIS, field BITERR */

#define BP_SPDIF_SIS_BITERR      14
#define BM_SPDIF_SIS_BITERR      0x00004000

#ifndef __LANGUAGE_ASM__
#define BF_SPDIF_SIS_BITERR(v)   ((((reg32_t) v) << 14) & BM_SPDIF_SIS_BITERR)
#else
#define BF_SPDIF_SIS_BITERR(v)   (((v) << 14) & BM_SPDIF_SIS_BITERR)
#endif
#ifndef __LANGUAGE_ASM__
#define BW_SPDIF_SIS_BITERR(v)   BF_CS1(SPDIF_SIS, BITERR, v)
#endif

/* --- Register HW_SPDIF_SIS, field URXFUL */

#define BP_SPDIF_SIS_URXFUL      10
#define BM_SPDIF_SIS_URXFUL      0x00000400

#ifndef __LANGUAGE_ASM__
#define BF_SPDIF_SIS_URXFUL(v)   ((((reg32_t) v) << 10) & BM_SPDIF_SIS_URXFUL)
#else
#define BF_SPDIF_SIS_URXFUL(v)   (((v) << 10) & BM_SPDIF_SIS_URXFUL)
#endif
#ifndef __LANGUAGE_ASM__
#define BW_SPDIF_SIS_URXFUL(v)   BF_CS1(SPDIF_SIS, URXFUL, v)
#endif

/* --- Register HW_SPDIF_SIS, field URXOV */

#define BP_SPDIF_SIS_URXOV      9
#define BM_SPDIF_SIS_URXOV      0x00000200

#ifndef __LANGUAGE_ASM__
#define BF_SPDIF_SIS_URXOV(v)   ((((reg32_t) v) << 9) & BM_SPDIF_SIS_URXOV)
#else
#define BF_SPDIF_SIS_URXOV(v)   (((v) << 9) & BM_SPDIF_SIS_URXOV)
#endif
#ifndef __LANGUAGE_ASM__
#define BW_SPDIF_SIS_URXOV(v)   BF_CS1(SPDIF_SIS, URXOV, v)
#endif

/* --- Register HW_SPDIF_SIS, field QRXFUL */

#define BP_SPDIF_SIS_QRXFUL      8
#define BM_SPDIF_SIS_QRXFUL      0x00000100

#ifndef __LANGUAGE_ASM__
#define BF_SPDIF_SIS_QRXFUL(v)   ((((reg32_t) v) << 8) & BM_SPDIF_SIS_QRXFUL)
#else
#define BF_SPDIF_SIS_QRXFUL(v)   (((v) << 8) & BM_SPDIF_SIS_QRXFUL)
#endif
#ifndef __LANGUAGE_ASM__
#define BW_SPDIF_SIS_QRXFUL(v)   BF_CS1(SPDIF_SIS, QRXFUL, v)
#endif

/* --- Register HW_SPDIF_SIS, field QRXOV */

#define BP_SPDIF_SIS_QRXOV      7
#define BM_SPDIF_SIS_QRXOV      0x00000080

#ifndef __LANGUAGE_ASM__
#define BF_SPDIF_SIS_QRXOV(v)   ((((reg32_t) v) << 7) & BM_SPDIF_SIS_QRXOV)
#else
#define BF_SPDIF_SIS_QRXOV(v)   (((v) << 7) & BM_SPDIF_SIS_QRXOV)
#endif
#ifndef __LANGUAGE_ASM__
#define BW_SPDIF_SIS_QRXOV(v)   BF_CS1(SPDIF_SIS, QRXOV, v)
#endif

/* --- Register HW_SPDIF_SIS, field UQSYNC */

#define BP_SPDIF_SIS_UQSYNC      6
#define BM_SPDIF_SIS_UQSYNC      0x00000040

#ifndef __LANGUAGE_ASM__
#define BF_SPDIF_SIS_UQSYNC(v)   ((((reg32_t) v) << 6) & BM_SPDIF_SIS_UQSYNC)
#else
#define BF_SPDIF_SIS_UQSYNC(v)   (((v) << 6) & BM_SPDIF_SIS_UQSYNC)
#endif
#ifndef __LANGUAGE_ASM__
#define BW_SPDIF_SIS_UQSYNC(v)   BF_CS1(SPDIF_SIS, UQSYNC, v)
#endif

/* --- Register HW_SPDIF_SIS, field UQERR */

#define BP_SPDIF_SIS_UQERR      5
#define BM_SPDIF_SIS_UQERR      0x00000020

#ifndef __LANGUAGE_ASM__
#define BF_SPDIF_SIS_UQERR(v)   ((((reg32_t) v) << 5) & BM_SPDIF_SIS_UQERR)
#else
#define BF_SPDIF_SIS_UQERR(v)   (((v) << 5) & BM_SPDIF_SIS_UQERR)
#endif
#ifndef __LANGUAGE_ASM__
#define BW_SPDIF_SIS_UQERR(v)   BF_CS1(SPDIF_SIS, UQERR, v)
#endif

/* --- Register HW_SPDIF_SIS, field RXFIFOUNOV */

#define BP_SPDIF_SIS_RXFIFOUNOV      4
#define BM_SPDIF_SIS_RXFIFOUNOV      0x00000010

#ifndef __LANGUAGE_ASM__
#define BF_SPDIF_SIS_RXFIFOUNOV(v)   ((((reg32_t) v) << 4) & BM_SPDIF_SIS_RXFIFOUNOV)
#else
#define BF_SPDIF_SIS_RXFIFOUNOV(v)   (((v) << 4) & BM_SPDIF_SIS_RXFIFOUNOV)
#endif
#ifndef __LANGUAGE_ASM__
#define BW_SPDIF_SIS_RXFIFOUNOV(v)   BF_CS1(SPDIF_SIS, RXFIFOUNOV, v)
#endif

/* --- Register HW_SPDIF_SIS, field RXFIFORESYN */

#define BP_SPDIF_SIS_RXFIFORESYN      3
#define BM_SPDIF_SIS_RXFIFORESYN      0x00000008

#ifndef __LANGUAGE_ASM__
#define BF_SPDIF_SIS_RXFIFORESYN(v)   ((((reg32_t) v) << 3) & BM_SPDIF_SIS_RXFIFORESYN)
#else
#define BF_SPDIF_SIS_RXFIFORESYN(v)   (((v) << 3) & BM_SPDIF_SIS_RXFIFORESYN)
#endif
#ifndef __LANGUAGE_ASM__
#define BW_SPDIF_SIS_RXFIFORESYN(v)   BF_CS1(SPDIF_SIS, RXFIFORESYN, v)
#endif

/* --- Register HW_SPDIF_SIS, field LOCKLOSS */

#define BP_SPDIF_SIS_LOCKLOSS      2
#define BM_SPDIF_SIS_LOCKLOSS      0x00000004

#ifndef __LANGUAGE_ASM__
#define BF_SPDIF_SIS_LOCKLOSS(v)   ((((reg32_t) v) << 2) & BM_SPDIF_SIS_LOCKLOSS)
#else
#define BF_SPDIF_SIS_LOCKLOSS(v)   (((v) << 2) & BM_SPDIF_SIS_LOCKLOSS)
#endif
#ifndef __LANGUAGE_ASM__
#define BW_SPDIF_SIS_LOCKLOSS(v)   BF_CS1(SPDIF_SIS, LOCKLOSS, v)
#endif

/* --- Register HW_SPDIF_SIS, field TXEM */

#define BP_SPDIF_SIS_TXEM      1
#define BM_SPDIF_SIS_TXEM      0x00000002

#ifndef __LANGUAGE_ASM__
#define BF_SPDIF_SIS_TXEM(v)   ((((reg32_t) v) << 1) & BM_SPDIF_SIS_TXEM)
#else
#define BF_SPDIF_SIS_TXEM(v)   (((v) << 1) & BM_SPDIF_SIS_TXEM)
#endif
#ifndef __LANGUAGE_ASM__
#define BW_SPDIF_SIS_TXEM(v)   BF_CS1(SPDIF_SIS, TXEM, v)
#endif

/* --- Register HW_SPDIF_SIS, field RXFIFOFUL */

#define BP_SPDIF_SIS_RXFIFOFUL      0
#define BM_SPDIF_SIS_RXFIFOFUL      0x00000001

#ifndef __LANGUAGE_ASM__
#define BF_SPDIF_SIS_RXFIFOFUL(v)   ((((reg32_t) v) << 0) & BM_SPDIF_SIS_RXFIFOFUL)
#else
#define BF_SPDIF_SIS_RXFIFOFUL(v)   (((v) << 0) & BM_SPDIF_SIS_RXFIFOFUL)
#endif
#ifndef __LANGUAGE_ASM__
#define BW_SPDIF_SIS_RXFIFOFUL(v)   BF_CS1(SPDIF_SIS, RXFIFOFUL, v)
#endif

/*
 * HW_SPDIF_SIC - InterruptClear Register
 */
#ifndef __LANGUAGE_ASM__
typedef union
{
    reg32_t  U;
    struct
    {
        unsigned RESERVED0 : 8;
        unsigned RESERVED1 : 3;
        unsigned LOCK : 1;
        unsigned TXUNOV : 1;
        unsigned TXRESYN : 1;
        unsigned CNEW : 1;
        unsigned VALNOGOOD : 1;
        unsigned SYMERR : 1;
        unsigned BITERR : 1;
        unsigned RESERVED2 : 4;
        unsigned URXOV : 1;
        unsigned RESERVED3 : 1;
        unsigned QRXOV : 1;
        unsigned UQSYNC : 1;
        unsigned UQERR : 1;
        unsigned RXFIFOUNOV : 1;
        unsigned RXFIFORESYN : 1;
        unsigned LOCKLOSS : 1;
        unsigned RESERVED4 : 2;

    } B;
} hw_spdif_sic_t;
#endif

/*
 * constants & macros for entire SPDIF_SIC register
 */
#define HW_SPDIF_SIC_ADDR      (REGS_SPDIF_BASE + 0x10)

#ifndef __LANGUAGE_ASM__
#define HW_SPDIF_SIC           (*(volatile hw_spdif_sic_t *) HW_SPDIF_SIC_ADDR)
#define HW_SPDIF_SIC_RD()      (HW_SPDIF_SIC.U)
#define HW_SPDIF_SIC_WR(v)     (HW_SPDIF_SIC.U = (v))
#define HW_SPDIF_SIC_SET(v)    (HW_SPDIF_SIC_WR(HW_SPDIF_SIC_RD() |  (v)))
#define HW_SPDIF_SIC_CLR(v)    (HW_SPDIF_SIC_WR(HW_SPDIF_SIC_RD() & ~(v)))
#define HW_SPDIF_SIC_TOG(v)    (HW_SPDIF_SIC_WR(HW_SPDIF_SIC_RD() ^  (v)))
#endif


/*
 * constants & macros for individual SPDIF_SIC bitfields
 */

/* --- Register HW_SPDIF_SIC, field LOCK */

#define BP_SPDIF_SIC_LOCK      20
#define BM_SPDIF_SIC_LOCK      0x00100000

#ifndef __LANGUAGE_ASM__
#define BF_SPDIF_SIC_LOCK(v)   ((((reg32_t) v) << 20) & BM_SPDIF_SIC_LOCK)
#else
#define BF_SPDIF_SIC_LOCK(v)   (((v) << 20) & BM_SPDIF_SIC_LOCK)
#endif
#ifndef __LANGUAGE_ASM__
#define BW_SPDIF_SIC_LOCK(v)   BF_CS1(SPDIF_SIC, LOCK, v)
#endif

/* --- Register HW_SPDIF_SIC, field TXUNOV */

#define BP_SPDIF_SIC_TXUNOV      19
#define BM_SPDIF_SIC_TXUNOV      0x00080000

#ifndef __LANGUAGE_ASM__
#define BF_SPDIF_SIC_TXUNOV(v)   ((((reg32_t) v) << 19) & BM_SPDIF_SIC_TXUNOV)
#else
#define BF_SPDIF_SIC_TXUNOV(v)   (((v) << 19) & BM_SPDIF_SIC_TXUNOV)
#endif
#ifndef __LANGUAGE_ASM__
#define BW_SPDIF_SIC_TXUNOV(v)   BF_CS1(SPDIF_SIC, TXUNOV, v)
#endif

/* --- Register HW_SPDIF_SIC, field TXRESYN */

#define BP_SPDIF_SIC_TXRESYN      18
#define BM_SPDIF_SIC_TXRESYN      0x00040000

#ifndef __LANGUAGE_ASM__
#define BF_SPDIF_SIC_TXRESYN(v)   ((((reg32_t) v) << 18) & BM_SPDIF_SIC_TXRESYN)
#else
#define BF_SPDIF_SIC_TXRESYN(v)   (((v) << 18) & BM_SPDIF_SIC_TXRESYN)
#endif
#ifndef __LANGUAGE_ASM__
#define BW_SPDIF_SIC_TXRESYN(v)   BF_CS1(SPDIF_SIC, TXRESYN, v)
#endif

/* --- Register HW_SPDIF_SIC, field CNEW */

#define BP_SPDIF_SIC_CNEW      17
#define BM_SPDIF_SIC_CNEW      0x00020000

#ifndef __LANGUAGE_ASM__
#define BF_SPDIF_SIC_CNEW(v)   ((((reg32_t) v) << 17) & BM_SPDIF_SIC_CNEW)
#else
#define BF_SPDIF_SIC_CNEW(v)   (((v) << 17) & BM_SPDIF_SIC_CNEW)
#endif
#ifndef __LANGUAGE_ASM__
#define BW_SPDIF_SIC_CNEW(v)   BF_CS1(SPDIF_SIC, CNEW, v)
#endif

/* --- Register HW_SPDIF_SIC, field VALNOGOOD */

#define BP_SPDIF_SIC_VALNOGOOD      16
#define BM_SPDIF_SIC_VALNOGOOD      0x00010000

#ifndef __LANGUAGE_ASM__
#define BF_SPDIF_SIC_VALNOGOOD(v)   ((((reg32_t) v) << 16) & BM_SPDIF_SIC_VALNOGOOD)
#else
#define BF_SPDIF_SIC_VALNOGOOD(v)   (((v) << 16) & BM_SPDIF_SIC_VALNOGOOD)
#endif
#ifndef __LANGUAGE_ASM__
#define BW_SPDIF_SIC_VALNOGOOD(v)   BF_CS1(SPDIF_SIC, VALNOGOOD, v)
#endif

/* --- Register HW_SPDIF_SIC, field SYMERR */

#define BP_SPDIF_SIC_SYMERR      15
#define BM_SPDIF_SIC_SYMERR      0x00008000

#ifndef __LANGUAGE_ASM__
#define BF_SPDIF_SIC_SYMERR(v)   ((((reg32_t) v) << 15) & BM_SPDIF_SIC_SYMERR)
#else
#define BF_SPDIF_SIC_SYMERR(v)   (((v) << 15) & BM_SPDIF_SIC_SYMERR)
#endif
#ifndef __LANGUAGE_ASM__
#define BW_SPDIF_SIC_SYMERR(v)   BF_CS1(SPDIF_SIC, SYMERR, v)
#endif

/* --- Register HW_SPDIF_SIC, field BITERR */

#define BP_SPDIF_SIC_BITERR      14
#define BM_SPDIF_SIC_BITERR      0x00004000

#ifndef __LANGUAGE_ASM__
#define BF_SPDIF_SIC_BITERR(v)   ((((reg32_t) v) << 14) & BM_SPDIF_SIC_BITERR)
#else
#define BF_SPDIF_SIC_BITERR(v)   (((v) << 14) & BM_SPDIF_SIC_BITERR)
#endif
#ifndef __LANGUAGE_ASM__
#define BW_SPDIF_SIC_BITERR(v)   BF_CS1(SPDIF_SIC, BITERR, v)
#endif

/* --- Register HW_SPDIF_SIC, field URXOV */

#define BP_SPDIF_SIC_URXOV      9
#define BM_SPDIF_SIC_URXOV      0x00000200

#ifndef __LANGUAGE_ASM__
#define BF_SPDIF_SIC_URXOV(v)   ((((reg32_t) v) << 9) & BM_SPDIF_SIC_URXOV)
#else
#define BF_SPDIF_SIC_URXOV(v)   (((v) << 9) & BM_SPDIF_SIC_URXOV)
#endif
#ifndef __LANGUAGE_ASM__
#define BW_SPDIF_SIC_URXOV(v)   BF_CS1(SPDIF_SIC, URXOV, v)
#endif

/* --- Register HW_SPDIF_SIC, field QRXOV */

#define BP_SPDIF_SIC_QRXOV      7
#define BM_SPDIF_SIC_QRXOV      0x00000080

#ifndef __LANGUAGE_ASM__
#define BF_SPDIF_SIC_QRXOV(v)   ((((reg32_t) v) << 7) & BM_SPDIF_SIC_QRXOV)
#else
#define BF_SPDIF_SIC_QRXOV(v)   (((v) << 7) & BM_SPDIF_SIC_QRXOV)
#endif
#ifndef __LANGUAGE_ASM__
#define BW_SPDIF_SIC_QRXOV(v)   BF_CS1(SPDIF_SIC, QRXOV, v)
#endif

/* --- Register HW_SPDIF_SIC, field UQSYNC */

#define BP_SPDIF_SIC_UQSYNC      6
#define BM_SPDIF_SIC_UQSYNC      0x00000040

#ifndef __LANGUAGE_ASM__
#define BF_SPDIF_SIC_UQSYNC(v)   ((((reg32_t) v) << 6) & BM_SPDIF_SIC_UQSYNC)
#else
#define BF_SPDIF_SIC_UQSYNC(v)   (((v) << 6) & BM_SPDIF_SIC_UQSYNC)
#endif
#ifndef __LANGUAGE_ASM__
#define BW_SPDIF_SIC_UQSYNC(v)   BF_CS1(SPDIF_SIC, UQSYNC, v)
#endif

/* --- Register HW_SPDIF_SIC, field UQERR */

#define BP_SPDIF_SIC_UQERR      5
#define BM_SPDIF_SIC_UQERR      0x00000020

#ifndef __LANGUAGE_ASM__
#define BF_SPDIF_SIC_UQERR(v)   ((((reg32_t) v) << 5) & BM_SPDIF_SIC_UQERR)
#else
#define BF_SPDIF_SIC_UQERR(v)   (((v) << 5) & BM_SPDIF_SIC_UQERR)
#endif
#ifndef __LANGUAGE_ASM__
#define BW_SPDIF_SIC_UQERR(v)   BF_CS1(SPDIF_SIC, UQERR, v)
#endif

/* --- Register HW_SPDIF_SIC, field RXFIFOUNOV */

#define BP_SPDIF_SIC_RXFIFOUNOV      4
#define BM_SPDIF_SIC_RXFIFOUNOV      0x00000010

#ifndef __LANGUAGE_ASM__
#define BF_SPDIF_SIC_RXFIFOUNOV(v)   ((((reg32_t) v) << 4) & BM_SPDIF_SIC_RXFIFOUNOV)
#else
#define BF_SPDIF_SIC_RXFIFOUNOV(v)   (((v) << 4) & BM_SPDIF_SIC_RXFIFOUNOV)
#endif
#ifndef __LANGUAGE_ASM__
#define BW_SPDIF_SIC_RXFIFOUNOV(v)   BF_CS1(SPDIF_SIC, RXFIFOUNOV, v)
#endif

/* --- Register HW_SPDIF_SIC, field RXFIFORESYN */

#define BP_SPDIF_SIC_RXFIFORESYN      3
#define BM_SPDIF_SIC_RXFIFORESYN      0x00000008

#ifndef __LANGUAGE_ASM__
#define BF_SPDIF_SIC_RXFIFORESYN(v)   ((((reg32_t) v) << 3) & BM_SPDIF_SIC_RXFIFORESYN)
#else
#define BF_SPDIF_SIC_RXFIFORESYN(v)   (((v) << 3) & BM_SPDIF_SIC_RXFIFORESYN)
#endif
#ifndef __LANGUAGE_ASM__
#define BW_SPDIF_SIC_RXFIFORESYN(v)   BF_CS1(SPDIF_SIC, RXFIFORESYN, v)
#endif

/* --- Register HW_SPDIF_SIC, field LOCKLOSS */

#define BP_SPDIF_SIC_LOCKLOSS      2
#define BM_SPDIF_SIC_LOCKLOSS      0x00000004

#ifndef __LANGUAGE_ASM__
#define BF_SPDIF_SIC_LOCKLOSS(v)   ((((reg32_t) v) << 2) & BM_SPDIF_SIC_LOCKLOSS)
#else
#define BF_SPDIF_SIC_LOCKLOSS(v)   (((v) << 2) & BM_SPDIF_SIC_LOCKLOSS)
#endif
#ifndef __LANGUAGE_ASM__
#define BW_SPDIF_SIC_LOCKLOSS(v)   BF_CS1(SPDIF_SIC, LOCKLOSS, v)
#endif

/*
 * HW_SPDIF_SRL - SPDIFRxLeft Register
 */
#ifndef __LANGUAGE_ASM__
typedef union
{
    reg32_t  U;
    struct
    {
        unsigned RESERVED0 : 8;
        unsigned RXDATALEFT : 24;

    } B;
} hw_spdif_srl_t;
#endif

/*
 * constants & macros for entire SPDIF_SRL register
 */
#define HW_SPDIF_SRL_ADDR      (REGS_SPDIF_BASE + 0x14)

#ifndef __LANGUAGE_ASM__
#define HW_SPDIF_SRL           (*(volatile hw_spdif_srl_t *) HW_SPDIF_SRL_ADDR)
#define HW_SPDIF_SRL_RD()      (HW_SPDIF_SRL.U)
#define HW_SPDIF_SRL_WR(v)     (HW_SPDIF_SRL.U = (v))
#define HW_SPDIF_SRL_SET(v)    (HW_SPDIF_SRL_WR(HW_SPDIF_SRL_RD() |  (v)))
#define HW_SPDIF_SRL_CLR(v)    (HW_SPDIF_SRL_WR(HW_SPDIF_SRL_RD() & ~(v)))
#define HW_SPDIF_SRL_TOG(v)    (HW_SPDIF_SRL_WR(HW_SPDIF_SRL_RD() ^  (v)))
#endif


/*
 * constants & macros for individual SPDIF_SRL bitfields
 */

/* --- Register HW_SPDIF_SRL, field RXDATALEFT */

#define BP_SPDIF_SRL_RXDATALEFT      0
#define BM_SPDIF_SRL_RXDATALEFT      0x00ffffff

#ifndef __LANGUAGE_ASM__
#define BF_SPDIF_SRL_RXDATALEFT(v)   ((((reg32_t) v) << 0) & BM_SPDIF_SRL_RXDATALEFT)
#else
#define BF_SPDIF_SRL_RXDATALEFT(v)   (((v) << 0) & BM_SPDIF_SRL_RXDATALEFT)
#endif
#ifndef __LANGUAGE_ASM__
#define BW_SPDIF_SRL_RXDATALEFT(v)   BF_CS1(SPDIF_SRL, RXDATALEFT, v)
#endif

/*
 * HW_SPDIF_SRR - SPDIFRxRight Register
 */
#ifndef __LANGUAGE_ASM__
typedef union
{
    reg32_t  U;
    struct
    {
        unsigned RESERVED0 : 8;
        unsigned RXDATARIGHT : 24;

    } B;
} hw_spdif_srr_t;
#endif

/*
 * constants & macros for entire SPDIF_SRR register
 */
#define HW_SPDIF_SRR_ADDR      (REGS_SPDIF_BASE + 0x18)

#ifndef __LANGUAGE_ASM__
#define HW_SPDIF_SRR           (*(volatile hw_spdif_srr_t *) HW_SPDIF_SRR_ADDR)
#define HW_SPDIF_SRR_RD()      (HW_SPDIF_SRR.U)
#define HW_SPDIF_SRR_WR(v)     (HW_SPDIF_SRR.U = (v))
#define HW_SPDIF_SRR_SET(v)    (HW_SPDIF_SRR_WR(HW_SPDIF_SRR_RD() |  (v)))
#define HW_SPDIF_SRR_CLR(v)    (HW_SPDIF_SRR_WR(HW_SPDIF_SRR_RD() & ~(v)))
#define HW_SPDIF_SRR_TOG(v)    (HW_SPDIF_SRR_WR(HW_SPDIF_SRR_RD() ^  (v)))
#endif


/*
 * constants & macros for individual SPDIF_SRR bitfields
 */

/* --- Register HW_SPDIF_SRR, field RXDATARIGHT */

#define BP_SPDIF_SRR_RXDATARIGHT      0
#define BM_SPDIF_SRR_RXDATARIGHT      0x00ffffff

#ifndef __LANGUAGE_ASM__
#define BF_SPDIF_SRR_RXDATARIGHT(v)   ((((reg32_t) v) << 0) & BM_SPDIF_SRR_RXDATARIGHT)
#else
#define BF_SPDIF_SRR_RXDATARIGHT(v)   (((v) << 0) & BM_SPDIF_SRR_RXDATARIGHT)
#endif
#ifndef __LANGUAGE_ASM__
#define BW_SPDIF_SRR_RXDATARIGHT(v)   BF_CS1(SPDIF_SRR, RXDATARIGHT, v)
#endif

/*
 * HW_SPDIF_SRCSH - SPDIFRxCChannel_h Register
 */
#ifndef __LANGUAGE_ASM__
typedef union
{
    reg32_t  U;
    struct
    {
        unsigned RESERVED0 : 8;
        unsigned RXCCHANNEL_H : 24;

    } B;
} hw_spdif_srcsh_t;
#endif

/*
 * constants & macros for entire SPDIF_SRCSH register
 */
#define HW_SPDIF_SRCSH_ADDR      (REGS_SPDIF_BASE + 0x1c)

#ifndef __LANGUAGE_ASM__
#define HW_SPDIF_SRCSH           (*(volatile hw_spdif_srcsh_t *) HW_SPDIF_SRCSH_ADDR)
#define HW_SPDIF_SRCSH_RD()      (HW_SPDIF_SRCSH.U)
#define HW_SPDIF_SRCSH_WR(v)     (HW_SPDIF_SRCSH.U = (v))
#define HW_SPDIF_SRCSH_SET(v)    (HW_SPDIF_SRCSH_WR(HW_SPDIF_SRCSH_RD() |  (v)))
#define HW_SPDIF_SRCSH_CLR(v)    (HW_SPDIF_SRCSH_WR(HW_SPDIF_SRCSH_RD() & ~(v)))
#define HW_SPDIF_SRCSH_TOG(v)    (HW_SPDIF_SRCSH_WR(HW_SPDIF_SRCSH_RD() ^  (v)))
#endif


/*
 * constants & macros for individual SPDIF_SRCSH bitfields
 */

/* --- Register HW_SPDIF_SRCSH, field RXCCHANNEL_H */

#define BP_SPDIF_SRCSH_RXCCHANNEL_H      0
#define BM_SPDIF_SRCSH_RXCCHANNEL_H      0x00ffffff

#ifndef __LANGUAGE_ASM__
#define BF_SPDIF_SRCSH_RXCCHANNEL_H(v)   ((((reg32_t) v) << 0) & BM_SPDIF_SRCSH_RXCCHANNEL_H)
#else
#define BF_SPDIF_SRCSH_RXCCHANNEL_H(v)   (((v) << 0) & BM_SPDIF_SRCSH_RXCCHANNEL_H)
#endif
#ifndef __LANGUAGE_ASM__
#define BW_SPDIF_SRCSH_RXCCHANNEL_H(v)   BF_CS1(SPDIF_SRCSH, RXCCHANNEL_H, v)
#endif

/*
 * HW_SPDIF_SRCSL - SPDIFRxCChannel_l Register
 */
#ifndef __LANGUAGE_ASM__
typedef union
{
    reg32_t  U;
    struct
    {
        unsigned RESERVED0 : 8;
        unsigned RXCCHANNEL_L : 24;

    } B;
} hw_spdif_srcsl_t;
#endif

/*
 * constants & macros for entire SPDIF_SRCSL register
 */
#define HW_SPDIF_SRCSL_ADDR      (REGS_SPDIF_BASE + 0x20)

#ifndef __LANGUAGE_ASM__
#define HW_SPDIF_SRCSL           (*(volatile hw_spdif_srcsl_t *) HW_SPDIF_SRCSL_ADDR)
#define HW_SPDIF_SRCSL_RD()      (HW_SPDIF_SRCSL.U)
#define HW_SPDIF_SRCSL_WR(v)     (HW_SPDIF_SRCSL.U = (v))
#define HW_SPDIF_SRCSL_SET(v)    (HW_SPDIF_SRCSL_WR(HW_SPDIF_SRCSL_RD() |  (v)))
#define HW_SPDIF_SRCSL_CLR(v)    (HW_SPDIF_SRCSL_WR(HW_SPDIF_SRCSL_RD() & ~(v)))
#define HW_SPDIF_SRCSL_TOG(v)    (HW_SPDIF_SRCSL_WR(HW_SPDIF_SRCSL_RD() ^  (v)))
#endif


/*
 * constants & macros for individual SPDIF_SRCSL bitfields
 */

/* --- Register HW_SPDIF_SRCSL, field RXCCHANNEL_L */

#define BP_SPDIF_SRCSL_RXCCHANNEL_L      0
#define BM_SPDIF_SRCSL_RXCCHANNEL_L      0x00ffffff

#ifndef __LANGUAGE_ASM__
#define BF_SPDIF_SRCSL_RXCCHANNEL_L(v)   ((((reg32_t) v) << 0) & BM_SPDIF_SRCSL_RXCCHANNEL_L)
#else
#define BF_SPDIF_SRCSL_RXCCHANNEL_L(v)   (((v) << 0) & BM_SPDIF_SRCSL_RXCCHANNEL_L)
#endif
#ifndef __LANGUAGE_ASM__
#define BW_SPDIF_SRCSL_RXCCHANNEL_L(v)   BF_CS1(SPDIF_SRCSL, RXCCHANNEL_L, v)
#endif

/*
 * HW_SPDIF_SRU - UchannelRx Register
 */
#ifndef __LANGUAGE_ASM__
typedef union
{
    reg32_t  U;
    struct
    {
        unsigned RESERVED0 : 8;
        unsigned RXUCHANNEL : 24;

    } B;
} hw_spdif_sru_t;
#endif

/*
 * constants & macros for entire SPDIF_SRU register
 */
#define HW_SPDIF_SRU_ADDR      (REGS_SPDIF_BASE + 0x24)

#ifndef __LANGUAGE_ASM__
#define HW_SPDIF_SRU           (*(volatile hw_spdif_sru_t *) HW_SPDIF_SRU_ADDR)
#define HW_SPDIF_SRU_RD()      (HW_SPDIF_SRU.U)
#define HW_SPDIF_SRU_WR(v)     (HW_SPDIF_SRU.U = (v))
#define HW_SPDIF_SRU_SET(v)    (HW_SPDIF_SRU_WR(HW_SPDIF_SRU_RD() |  (v)))
#define HW_SPDIF_SRU_CLR(v)    (HW_SPDIF_SRU_WR(HW_SPDIF_SRU_RD() & ~(v)))
#define HW_SPDIF_SRU_TOG(v)    (HW_SPDIF_SRU_WR(HW_SPDIF_SRU_RD() ^  (v)))
#endif


/*
 * constants & macros for individual SPDIF_SRU bitfields
 */

/* --- Register HW_SPDIF_SRU, field RXUCHANNEL */

#define BP_SPDIF_SRU_RXUCHANNEL      0
#define BM_SPDIF_SRU_RXUCHANNEL      0x00ffffff

#ifndef __LANGUAGE_ASM__
#define BF_SPDIF_SRU_RXUCHANNEL(v)   ((((reg32_t) v) << 0) & BM_SPDIF_SRU_RXUCHANNEL)
#else
#define BF_SPDIF_SRU_RXUCHANNEL(v)   (((v) << 0) & BM_SPDIF_SRU_RXUCHANNEL)
#endif
#ifndef __LANGUAGE_ASM__
#define BW_SPDIF_SRU_RXUCHANNEL(v)   BF_CS1(SPDIF_SRU, RXUCHANNEL, v)
#endif

/*
 * HW_SPDIF_SRQ - QchannelRx Register
 */
#ifndef __LANGUAGE_ASM__
typedef union
{
    reg32_t  U;
    struct
    {
        unsigned RESERVED0 : 8;
        unsigned RXQCHANNEL : 24;

    } B;
} hw_spdif_srq_t;
#endif

/*
 * constants & macros for entire SPDIF_SRQ register
 */
#define HW_SPDIF_SRQ_ADDR      (REGS_SPDIF_BASE + 0x28)

#ifndef __LANGUAGE_ASM__
#define HW_SPDIF_SRQ           (*(volatile hw_spdif_srq_t *) HW_SPDIF_SRQ_ADDR)
#define HW_SPDIF_SRQ_RD()      (HW_SPDIF_SRQ.U)
#define HW_SPDIF_SRQ_WR(v)     (HW_SPDIF_SRQ.U = (v))
#define HW_SPDIF_SRQ_SET(v)    (HW_SPDIF_SRQ_WR(HW_SPDIF_SRQ_RD() |  (v)))
#define HW_SPDIF_SRQ_CLR(v)    (HW_SPDIF_SRQ_WR(HW_SPDIF_SRQ_RD() & ~(v)))
#define HW_SPDIF_SRQ_TOG(v)    (HW_SPDIF_SRQ_WR(HW_SPDIF_SRQ_RD() ^  (v)))
#endif


/*
 * constants & macros for individual SPDIF_SRQ bitfields
 */

/* --- Register HW_SPDIF_SRQ, field RXQCHANNEL */

#define BP_SPDIF_SRQ_RXQCHANNEL      0
#define BM_SPDIF_SRQ_RXQCHANNEL      0x00ffffff

#ifndef __LANGUAGE_ASM__
#define BF_SPDIF_SRQ_RXQCHANNEL(v)   ((((reg32_t) v) << 0) & BM_SPDIF_SRQ_RXQCHANNEL)
#else
#define BF_SPDIF_SRQ_RXQCHANNEL(v)   (((v) << 0) & BM_SPDIF_SRQ_RXQCHANNEL)
#endif
#ifndef __LANGUAGE_ASM__
#define BW_SPDIF_SRQ_RXQCHANNEL(v)   BF_CS1(SPDIF_SRQ, RXQCHANNEL, v)
#endif

/*
 * HW_SPDIF_STL - SPDIFTxLeft Register
 */
#ifndef __LANGUAGE_ASM__
typedef union
{
    reg32_t  U;
    struct
    {
        unsigned RESERVED0 : 8;
        unsigned TXDATALEFT : 24;

    } B;
} hw_spdif_stl_t;
#endif

/*
 * constants & macros for entire SPDIF_STL register
 */
#define HW_SPDIF_STL_ADDR      (REGS_SPDIF_BASE + 0x2c)

#ifndef __LANGUAGE_ASM__
#define HW_SPDIF_STL           (*(volatile hw_spdif_stl_t *) HW_SPDIF_STL_ADDR)
#define HW_SPDIF_STL_RD()      (HW_SPDIF_STL.U)
#define HW_SPDIF_STL_WR(v)     (HW_SPDIF_STL.U = (v))
#define HW_SPDIF_STL_SET(v)    (HW_SPDIF_STL_WR(HW_SPDIF_STL_RD() |  (v)))
#define HW_SPDIF_STL_CLR(v)    (HW_SPDIF_STL_WR(HW_SPDIF_STL_RD() & ~(v)))
#define HW_SPDIF_STL_TOG(v)    (HW_SPDIF_STL_WR(HW_SPDIF_STL_RD() ^  (v)))
#endif


/*
 * constants & macros for individual SPDIF_STL bitfields
 */

/* --- Register HW_SPDIF_STL, field TXDATALEFT */

#define BP_SPDIF_STL_TXDATALEFT      0
#define BM_SPDIF_STL_TXDATALEFT      0x00ffffff

#ifndef __LANGUAGE_ASM__
#define BF_SPDIF_STL_TXDATALEFT(v)   ((((reg32_t) v) << 0) & BM_SPDIF_STL_TXDATALEFT)
#else
#define BF_SPDIF_STL_TXDATALEFT(v)   (((v) << 0) & BM_SPDIF_STL_TXDATALEFT)
#endif
#ifndef __LANGUAGE_ASM__
#define BW_SPDIF_STL_TXDATALEFT(v)   BF_CS1(SPDIF_STL, TXDATALEFT, v)
#endif

/*
 * HW_SPDIF_STR - SPDIFTxRight Register
 */
#ifndef __LANGUAGE_ASM__
typedef union
{
    reg32_t  U;
    struct
    {
        unsigned RESERVED0 : 8;
        unsigned TXDATARIGHT : 24;

    } B;
} hw_spdif_str_t;
#endif

/*
 * constants & macros for entire SPDIF_STR register
 */
#define HW_SPDIF_STR_ADDR      (REGS_SPDIF_BASE + 0x30)

#ifndef __LANGUAGE_ASM__
#define HW_SPDIF_STR           (*(volatile hw_spdif_str_t *) HW_SPDIF_STR_ADDR)
#define HW_SPDIF_STR_RD()      (HW_SPDIF_STR.U)
#define HW_SPDIF_STR_WR(v)     (HW_SPDIF_STR.U = (v))
#define HW_SPDIF_STR_SET(v)    (HW_SPDIF_STR_WR(HW_SPDIF_STR_RD() |  (v)))
#define HW_SPDIF_STR_CLR(v)    (HW_SPDIF_STR_WR(HW_SPDIF_STR_RD() & ~(v)))
#define HW_SPDIF_STR_TOG(v)    (HW_SPDIF_STR_WR(HW_SPDIF_STR_RD() ^  (v)))
#endif


/*
 * constants & macros for individual SPDIF_STR bitfields
 */

/* --- Register HW_SPDIF_STR, field TXDATARIGHT */

#define BP_SPDIF_STR_TXDATARIGHT      0
#define BM_SPDIF_STR_TXDATARIGHT      0x00ffffff

#ifndef __LANGUAGE_ASM__
#define BF_SPDIF_STR_TXDATARIGHT(v)   ((((reg32_t) v) << 0) & BM_SPDIF_STR_TXDATARIGHT)
#else
#define BF_SPDIF_STR_TXDATARIGHT(v)   (((v) << 0) & BM_SPDIF_STR_TXDATARIGHT)
#endif
#ifndef __LANGUAGE_ASM__
#define BW_SPDIF_STR_TXDATARIGHT(v)   BF_CS1(SPDIF_STR, TXDATARIGHT, v)
#endif

/*
 * HW_SPDIF_STCSCH - SPDIFTxCChannelCons_h Register
 */
#ifndef __LANGUAGE_ASM__
typedef union
{
    reg32_t  U;
    struct
    {
        unsigned RESERVED0 : 8;
        unsigned TXCCHANNELCONS_H : 24;

    } B;
} hw_spdif_stcsch_t;
#endif

/*
 * constants & macros for entire SPDIF_STCSCH register
 */
#define HW_SPDIF_STCSCH_ADDR      (REGS_SPDIF_BASE + 0x34)

#ifndef __LANGUAGE_ASM__
#define HW_SPDIF_STCSCH           (*(volatile hw_spdif_stcsch_t *) HW_SPDIF_STCSCH_ADDR)
#define HW_SPDIF_STCSCH_RD()      (HW_SPDIF_STCSCH.U)
#define HW_SPDIF_STCSCH_WR(v)     (HW_SPDIF_STCSCH.U = (v))
#define HW_SPDIF_STCSCH_SET(v)    (HW_SPDIF_STCSCH_WR(HW_SPDIF_STCSCH_RD() |  (v)))
#define HW_SPDIF_STCSCH_CLR(v)    (HW_SPDIF_STCSCH_WR(HW_SPDIF_STCSCH_RD() & ~(v)))
#define HW_SPDIF_STCSCH_TOG(v)    (HW_SPDIF_STCSCH_WR(HW_SPDIF_STCSCH_RD() ^  (v)))
#endif


/*
 * constants & macros for individual SPDIF_STCSCH bitfields
 */

/* --- Register HW_SPDIF_STCSCH, field TXCCHANNELCONS_H */

#define BP_SPDIF_STCSCH_TXCCHANNELCONS_H      0
#define BM_SPDIF_STCSCH_TXCCHANNELCONS_H      0x00ffffff

#ifndef __LANGUAGE_ASM__
#define BF_SPDIF_STCSCH_TXCCHANNELCONS_H(v)   ((((reg32_t) v) << 0) & BM_SPDIF_STCSCH_TXCCHANNELCONS_H)
#else
#define BF_SPDIF_STCSCH_TXCCHANNELCONS_H(v)   (((v) << 0) & BM_SPDIF_STCSCH_TXCCHANNELCONS_H)
#endif
#ifndef __LANGUAGE_ASM__
#define BW_SPDIF_STCSCH_TXCCHANNELCONS_H(v)   BF_CS1(SPDIF_STCSCH, TXCCHANNELCONS_H, v)
#endif

/*
 * HW_SPDIF_STCSCL - SPDIFTxCChannelCons_l Register
 */
#ifndef __LANGUAGE_ASM__
typedef union
{
    reg32_t  U;
    struct
    {
        unsigned RESERVED0 : 8;
        unsigned TXCCHANNELCONS_L : 24;

    } B;
} hw_spdif_stcscl_t;
#endif

/*
 * constants & macros for entire SPDIF_STCSCL register
 */
#define HW_SPDIF_STCSCL_ADDR      (REGS_SPDIF_BASE + 0x38)

#ifndef __LANGUAGE_ASM__
#define HW_SPDIF_STCSCL           (*(volatile hw_spdif_stcscl_t *) HW_SPDIF_STCSCL_ADDR)
#define HW_SPDIF_STCSCL_RD()      (HW_SPDIF_STCSCL.U)
#define HW_SPDIF_STCSCL_WR(v)     (HW_SPDIF_STCSCL.U = (v))
#define HW_SPDIF_STCSCL_SET(v)    (HW_SPDIF_STCSCL_WR(HW_SPDIF_STCSCL_RD() |  (v)))
#define HW_SPDIF_STCSCL_CLR(v)    (HW_SPDIF_STCSCL_WR(HW_SPDIF_STCSCL_RD() & ~(v)))
#define HW_SPDIF_STCSCL_TOG(v)    (HW_SPDIF_STCSCL_WR(HW_SPDIF_STCSCL_RD() ^  (v)))
#endif


/*
 * constants & macros for individual SPDIF_STCSCL bitfields
 */

/* --- Register HW_SPDIF_STCSCL, field TXCCHANNELCONS_L */

#define BP_SPDIF_STCSCL_TXCCHANNELCONS_L      0
#define BM_SPDIF_STCSCL_TXCCHANNELCONS_L      0x00ffffff

#ifndef __LANGUAGE_ASM__
#define BF_SPDIF_STCSCL_TXCCHANNELCONS_L(v)   ((((reg32_t) v) << 0) & BM_SPDIF_STCSCL_TXCCHANNELCONS_L)
#else
#define BF_SPDIF_STCSCL_TXCCHANNELCONS_L(v)   (((v) << 0) & BM_SPDIF_STCSCL_TXCCHANNELCONS_L)
#endif
#ifndef __LANGUAGE_ASM__
#define BW_SPDIF_STCSCL_TXCCHANNELCONS_L(v)   BF_CS1(SPDIF_STCSCL, TXCCHANNELCONS_L, v)
#endif

/*
 * HW_SPDIF_SRFM - FreqMeas Register
 */
#ifndef __LANGUAGE_ASM__
typedef union
{
    reg32_t  U;
    struct
    {
        unsigned RESERVED0 : 8;
        unsigned FREQMEAS : 24;

    } B;
} hw_spdif_srfm_t;
#endif

/*
 * constants & macros for entire SPDIF_SRFM register
 */
#define HW_SPDIF_SRFM_ADDR      (REGS_SPDIF_BASE + 0x44)

#ifndef __LANGUAGE_ASM__
#define HW_SPDIF_SRFM           (*(volatile hw_spdif_srfm_t *) HW_SPDIF_SRFM_ADDR)
#define HW_SPDIF_SRFM_RD()      (HW_SPDIF_SRFM.U)
#define HW_SPDIF_SRFM_WR(v)     (HW_SPDIF_SRFM.U = (v))
#define HW_SPDIF_SRFM_SET(v)    (HW_SPDIF_SRFM_WR(HW_SPDIF_SRFM_RD() |  (v)))
#define HW_SPDIF_SRFM_CLR(v)    (HW_SPDIF_SRFM_WR(HW_SPDIF_SRFM_RD() & ~(v)))
#define HW_SPDIF_SRFM_TOG(v)    (HW_SPDIF_SRFM_WR(HW_SPDIF_SRFM_RD() ^  (v)))
#endif


/*
 * constants & macros for individual SPDIF_SRFM bitfields
 */

/* --- Register HW_SPDIF_SRFM, field FREQMEAS */

#define BP_SPDIF_SRFM_FREQMEAS      0
#define BM_SPDIF_SRFM_FREQMEAS      0x00ffffff

#ifndef __LANGUAGE_ASM__
#define BF_SPDIF_SRFM_FREQMEAS(v)   ((((reg32_t) v) << 0) & BM_SPDIF_SRFM_FREQMEAS)
#else
#define BF_SPDIF_SRFM_FREQMEAS(v)   (((v) << 0) & BM_SPDIF_SRFM_FREQMEAS)
#endif
#ifndef __LANGUAGE_ASM__
#define BW_SPDIF_SRFM_FREQMEAS(v)   BF_CS1(SPDIF_SRFM, FREQMEAS, v)
#endif

/*
 * HW_SPDIF_STC - SPDIFTxClk Register
 */
#ifndef __LANGUAGE_ASM__
typedef union
{
    reg32_t  U;
    struct
    {
        unsigned RESERVED0 : 8;
        unsigned RESERVED1 : 4;
        unsigned SYSCLK_DF : 9;
        unsigned TXCLK_SOURCE : 3;
        unsigned TXCLK_SOURCE : 3;
        unsigned TX_ALL_CLK_EN : 1;
        unsigned TX_ALL_CLK_EN : 1;
        unsigned TXCLK_DF : 7;

    } B;
} hw_spdif_stc_t;
#endif

/*
 * constants & macros for entire SPDIF_STC register
 */
#define HW_SPDIF_STC_ADDR      (REGS_SPDIF_BASE + 0x50)

#ifndef __LANGUAGE_ASM__
#define HW_SPDIF_STC           (*(volatile hw_spdif_stc_t *) HW_SPDIF_STC_ADDR)
#define HW_SPDIF_STC_RD()      (HW_SPDIF_STC.U)
#define HW_SPDIF_STC_WR(v)     (HW_SPDIF_STC.U = (v))
#define HW_SPDIF_STC_SET(v)    (HW_SPDIF_STC_WR(HW_SPDIF_STC_RD() |  (v)))
#define HW_SPDIF_STC_CLR(v)    (HW_SPDIF_STC_WR(HW_SPDIF_STC_RD() & ~(v)))
#define HW_SPDIF_STC_TOG(v)    (HW_SPDIF_STC_WR(HW_SPDIF_STC_RD() ^  (v)))
#endif


/*
 * constants & macros for individual SPDIF_STC bitfields
 */

/* --- Register HW_SPDIF_STC, field SYSCLK_DF */

#define BP_SPDIF_STC_SYSCLK_DF      11
#define BM_SPDIF_STC_SYSCLK_DF      0x000ff800

#ifndef __LANGUAGE_ASM__
#define BF_SPDIF_STC_SYSCLK_DF(v)   ((((reg32_t) v) << 11) & BM_SPDIF_STC_SYSCLK_DF)
#else
#define BF_SPDIF_STC_SYSCLK_DF(v)   (((v) << 11) & BM_SPDIF_STC_SYSCLK_DF)
#endif
#ifndef __LANGUAGE_ASM__
#define BW_SPDIF_STC_SYSCLK_DF(v)   BF_CS1(SPDIF_STC, SYSCLK_DF, v)
#endif

/* --- Register HW_SPDIF_STC, field TXCLK_SOURCE */

#define BP_SPDIF_STC_TXCLK_SOURCE      8
#define BM_SPDIF_STC_TXCLK_SOURCE      0x00000700

#ifndef __LANGUAGE_ASM__
#define BF_SPDIF_STC_TXCLK_SOURCE(v)   ((((reg32_t) v) << 8) & BM_SPDIF_STC_TXCLK_SOURCE)
#else
#define BF_SPDIF_STC_TXCLK_SOURCE(v)   (((v) << 8) & BM_SPDIF_STC_TXCLK_SOURCE)
#endif
#ifndef __LANGUAGE_ASM__
#define BW_SPDIF_STC_TXCLK_SOURCE(v)   BF_CS1(SPDIF_STC, TXCLK_SOURCE, v)
#endif

/* --- Register HW_SPDIF_STC, field TXCLK_SOURCE */

#define BP_SPDIF_STC_TXCLK_SOURCE      8
#define BM_SPDIF_STC_TXCLK_SOURCE      0x00000700

#ifndef __LANGUAGE_ASM__
#define BF_SPDIF_STC_TXCLK_SOURCE(v)   ((((reg32_t) v) << 8) & BM_SPDIF_STC_TXCLK_SOURCE)
#else
#define BF_SPDIF_STC_TXCLK_SOURCE(v)   (((v) << 8) & BM_SPDIF_STC_TXCLK_SOURCE)
#endif
#ifndef __LANGUAGE_ASM__
#define BW_SPDIF_STC_TXCLK_SOURCE(v)   BF_CS1(SPDIF_STC, TXCLK_SOURCE, v)
#endif

/* --- Register HW_SPDIF_STC, field TX_ALL_CLK_EN */

#define BP_SPDIF_STC_TX_ALL_CLK_EN      7
#define BM_SPDIF_STC_TX_ALL_CLK_EN      0x00000080

#ifndef __LANGUAGE_ASM__
#define BF_SPDIF_STC_TX_ALL_CLK_EN(v)   ((((reg32_t) v) << 7) & BM_SPDIF_STC_TX_ALL_CLK_EN)
#else
#define BF_SPDIF_STC_TX_ALL_CLK_EN(v)   (((v) << 7) & BM_SPDIF_STC_TX_ALL_CLK_EN)
#endif
#ifndef __LANGUAGE_ASM__
#define BW_SPDIF_STC_TX_ALL_CLK_EN(v)   BF_CS1(SPDIF_STC, TX_ALL_CLK_EN, v)
#endif

/* --- Register HW_SPDIF_STC, field TX_ALL_CLK_EN */

#define BP_SPDIF_STC_TX_ALL_CLK_EN      7
#define BM_SPDIF_STC_TX_ALL_CLK_EN      0x00000080

#ifndef __LANGUAGE_ASM__
#define BF_SPDIF_STC_TX_ALL_CLK_EN(v)   ((((reg32_t) v) << 7) & BM_SPDIF_STC_TX_ALL_CLK_EN)
#else
#define BF_SPDIF_STC_TX_ALL_CLK_EN(v)   (((v) << 7) & BM_SPDIF_STC_TX_ALL_CLK_EN)
#endif
#ifndef __LANGUAGE_ASM__
#define BW_SPDIF_STC_TX_ALL_CLK_EN(v)   BF_CS1(SPDIF_STC, TX_ALL_CLK_EN, v)
#endif

/* --- Register HW_SPDIF_STC, field TXCLK_DF */

#define BP_SPDIF_STC_TXCLK_DF      0
#define BM_SPDIF_STC_TXCLK_DF      0x0000007f

#ifndef __LANGUAGE_ASM__
#define BF_SPDIF_STC_TXCLK_DF(v)   ((((reg32_t) v) << 0) & BM_SPDIF_STC_TXCLK_DF)
#else
#define BF_SPDIF_STC_TXCLK_DF(v)   (((v) << 0) & BM_SPDIF_STC_TXCLK_DF)
#endif
#ifndef __LANGUAGE_ASM__
#define BW_SPDIF_STC_TXCLK_DF(v)   BF_CS1(SPDIF_STC, TXCLK_DF, v)
#endif


#endif // _SPDIF_H
