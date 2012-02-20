/*
 * Copyright (C) 2012, Freescale Semiconductor, Inc. All Rights Reserved
 * THIS SOURCE CODE IS CONFIDENTIAL AND PROPRIETARY AND MAY NOT
 * BE USED OR DISTRIBUTED WITHOUT THE WRITTEN PERMISSION OF
 * Freescale Semiconductor, Inc.
 */

#ifndef _GPC_H
#define _GPC_H

#include "regs.h"

#ifndef REGS_GPC_BASE
#define REGS_GPC_BASE (REGS_BASE + 0x020dc000)

#endif


/*
 * HW_GPC_CNTR - GPC Interface control register
 */
#ifndef __LANGUAGE_ASM__
typedef union
{
    reg32_t  U;
    struct
    {
        unsigned GPU_VPU_PDN_REQ : 1;
        unsigned GPU_VPU_PUP_REQ : 1;
        unsigned RESERVED0 : 2;
        unsigned RESERVED1 : 1;
        unsigned RESERVED2 : 1;
        unsigned RESERVED3 : 10;
        unsigned DVFS0CR : 1;
        unsigned RESERVED4 : 3;
        unsigned RESERVED5 : 1;
        unsigned GPCIRQM : 1;
        unsigned RESERVED6 : 1;
        unsigned RESERVED7 : 9;

    } B;
} hw_gpc_cntr_t;
#endif

/*
 * constants & macros for entire GPC_CNTR register
 */
#define HW_GPC_CNTR_ADDR      (REGS_GPC_BASE + 0x0)

#ifndef __LANGUAGE_ASM__
#define HW_GPC_CNTR           (*(volatile hw_gpc_cntr_t *) HW_GPC_CNTR_ADDR)
#define HW_GPC_CNTR_RD()      (HW_GPC_CNTR.U)
#define HW_GPC_CNTR_WR(v)     (HW_GPC_CNTR.U = (v))
#define HW_GPC_CNTR_SET(v)    (HW_GPC_CNTR_WR(HW_GPC_CNTR_RD() |  (v)))
#define HW_GPC_CNTR_CLR(v)    (HW_GPC_CNTR_WR(HW_GPC_CNTR_RD() & ~(v)))
#define HW_GPC_CNTR_TOG(v)    (HW_GPC_CNTR_WR(HW_GPC_CNTR_RD() ^  (v)))
#endif


/*
 * constants & macros for individual GPC_CNTR bitfields
 */

/* --- Register HW_GPC_CNTR, field GPU_VPU_PDN_REQ */

#define BP_GPC_CNTR_GPU_VPU_PDN_REQ      0
#define BM_GPC_CNTR_GPU_VPU_PDN_REQ      0x00000001

#ifndef __LANGUAGE_ASM__
#define BF_GPC_CNTR_GPU_VPU_PDN_REQ(v)   ((((reg32_t) v) << 0) & BM_GPC_CNTR_GPU_VPU_PDN_REQ)
#else
#define BF_GPC_CNTR_GPU_VPU_PDN_REQ(v)   (((v) << 0) & BM_GPC_CNTR_GPU_VPU_PDN_REQ)
#endif
#ifndef __LANGUAGE_ASM__
#define BW_GPC_CNTR_GPU_VPU_PDN_REQ(v)   BF_CS1(GPC_CNTR, GPU_VPU_PDN_REQ, v)
#endif

/* --- Register HW_GPC_CNTR, field GPU_VPU_PUP_REQ */

#define BP_GPC_CNTR_GPU_VPU_PUP_REQ      1
#define BM_GPC_CNTR_GPU_VPU_PUP_REQ      0x00000002

#ifndef __LANGUAGE_ASM__
#define BF_GPC_CNTR_GPU_VPU_PUP_REQ(v)   ((((reg32_t) v) << 1) & BM_GPC_CNTR_GPU_VPU_PUP_REQ)
#else
#define BF_GPC_CNTR_GPU_VPU_PUP_REQ(v)   (((v) << 1) & BM_GPC_CNTR_GPU_VPU_PUP_REQ)
#endif
#ifndef __LANGUAGE_ASM__
#define BW_GPC_CNTR_GPU_VPU_PUP_REQ(v)   BF_CS1(GPC_CNTR, GPU_VPU_PUP_REQ, v)
#endif

/* --- Register HW_GPC_CNTR, field DVFS0CR */

#define BP_GPC_CNTR_DVFS0CR      16
#define BM_GPC_CNTR_DVFS0CR      0x00010000

#ifndef __LANGUAGE_ASM__
#define BF_GPC_CNTR_DVFS0CR(v)   ((((reg32_t) v) << 16) & BM_GPC_CNTR_DVFS0CR)
#else
#define BF_GPC_CNTR_DVFS0CR(v)   (((v) << 16) & BM_GPC_CNTR_DVFS0CR)
#endif
#ifndef __LANGUAGE_ASM__
#define BW_GPC_CNTR_DVFS0CR(v)   BF_CS1(GPC_CNTR, DVFS0CR, v)
#endif

/* --- Register HW_GPC_CNTR, field GPCIRQM */

#define BP_GPC_CNTR_GPCIRQM      21
#define BM_GPC_CNTR_GPCIRQM      0x00200000

#ifndef __LANGUAGE_ASM__
#define BF_GPC_CNTR_GPCIRQM(v)   ((((reg32_t) v) << 21) & BM_GPC_CNTR_GPCIRQM)
#else
#define BF_GPC_CNTR_GPCIRQM(v)   (((v) << 21) & BM_GPC_CNTR_GPCIRQM)
#endif
#ifndef __LANGUAGE_ASM__
#define BW_GPC_CNTR_GPCIRQM(v)   BF_CS1(GPC_CNTR, GPCIRQM, v)
#endif

/*
 * HW_GPC_PGR - GPC Power Gating Register
 */
#ifndef __LANGUAGE_ASM__
typedef union
{
    reg32_t  U;
    struct
    {
        unsigned RESERVED0 : 29;
        unsigned DRCIC : 2;
        unsigned RESERVED1 : 1;

    } B;
} hw_gpc_pgr_t;
#endif

/*
 * constants & macros for entire GPC_PGR register
 */
#define HW_GPC_PGR_ADDR      (REGS_GPC_BASE + 0x4)

#ifndef __LANGUAGE_ASM__
#define HW_GPC_PGR           (*(volatile hw_gpc_pgr_t *) HW_GPC_PGR_ADDR)
#define HW_GPC_PGR_RD()      (HW_GPC_PGR.U)
#define HW_GPC_PGR_WR(v)     (HW_GPC_PGR.U = (v))
#define HW_GPC_PGR_SET(v)    (HW_GPC_PGR_WR(HW_GPC_PGR_RD() |  (v)))
#define HW_GPC_PGR_CLR(v)    (HW_GPC_PGR_WR(HW_GPC_PGR_RD() & ~(v)))
#define HW_GPC_PGR_TOG(v)    (HW_GPC_PGR_WR(HW_GPC_PGR_RD() ^  (v)))
#endif


/*
 * constants & macros for individual GPC_PGR bitfields
 */

/* --- Register HW_GPC_PGR, field DRCIC */

#define BP_GPC_PGR_DRCIC      29
#define BM_GPC_PGR_DRCIC      0x60000000

#ifndef __LANGUAGE_ASM__
#define BF_GPC_PGR_DRCIC(v)   ((((reg32_t) v) << 29) & BM_GPC_PGR_DRCIC)
#else
#define BF_GPC_PGR_DRCIC(v)   (((v) << 29) & BM_GPC_PGR_DRCIC)
#endif
#ifndef __LANGUAGE_ASM__
#define BW_GPC_PGR_DRCIC(v)   BF_CS1(GPC_PGR, DRCIC, v)
#endif

/*
 * HW_GPC_IMR1 - IRQ masking register 1
 */
#ifndef __LANGUAGE_ASM__
typedef union
{
    reg32_t  U;
    struct
    {
        unsigned IMR1 : 32;

    } B;
} hw_gpc_imr1_t;
#endif

/*
 * constants & macros for entire GPC_IMR1 register
 */
#define HW_GPC_IMR1_ADDR      (REGS_GPC_BASE + 0x8)

#ifndef __LANGUAGE_ASM__
#define HW_GPC_IMR1           (*(volatile hw_gpc_imr1_t *) HW_GPC_IMR1_ADDR)
#define HW_GPC_IMR1_RD()      (HW_GPC_IMR1.U)
#define HW_GPC_IMR1_WR(v)     (HW_GPC_IMR1.U = (v))
#define HW_GPC_IMR1_SET(v)    (HW_GPC_IMR1_WR(HW_GPC_IMR1_RD() |  (v)))
#define HW_GPC_IMR1_CLR(v)    (HW_GPC_IMR1_WR(HW_GPC_IMR1_RD() & ~(v)))
#define HW_GPC_IMR1_TOG(v)    (HW_GPC_IMR1_WR(HW_GPC_IMR1_RD() ^  (v)))
#endif


/*
 * constants & macros for individual GPC_IMR1 bitfields
 */

/* --- Register HW_GPC_IMR1, field IMR1 */

#define BP_GPC_IMR1_IMR1      0
#define BM_GPC_IMR1_IMR1      0xffffffff

#ifndef __LANGUAGE_ASM__
#define BF_GPC_IMR1_IMR1(v)   ((((reg32_t) v) << 0) & BM_GPC_IMR1_IMR1)
#else
#define BF_GPC_IMR1_IMR1(v)   (((v) << 0) & BM_GPC_IMR1_IMR1)
#endif
#ifndef __LANGUAGE_ASM__
#define BW_GPC_IMR1_IMR1(v)   BF_CS1(GPC_IMR1, IMR1, v)
#endif

/*
 * HW_GPC_IMR2 - IRQ masking register 2
 */
#ifndef __LANGUAGE_ASM__
typedef union
{
    reg32_t  U;
    struct
    {
        unsigned IMR2 : 32;

    } B;
} hw_gpc_imr2_t;
#endif

/*
 * constants & macros for entire GPC_IMR2 register
 */
#define HW_GPC_IMR2_ADDR      (REGS_GPC_BASE + 0xc)

#ifndef __LANGUAGE_ASM__
#define HW_GPC_IMR2           (*(volatile hw_gpc_imr2_t *) HW_GPC_IMR2_ADDR)
#define HW_GPC_IMR2_RD()      (HW_GPC_IMR2.U)
#define HW_GPC_IMR2_WR(v)     (HW_GPC_IMR2.U = (v))
#define HW_GPC_IMR2_SET(v)    (HW_GPC_IMR2_WR(HW_GPC_IMR2_RD() |  (v)))
#define HW_GPC_IMR2_CLR(v)    (HW_GPC_IMR2_WR(HW_GPC_IMR2_RD() & ~(v)))
#define HW_GPC_IMR2_TOG(v)    (HW_GPC_IMR2_WR(HW_GPC_IMR2_RD() ^  (v)))
#endif


/*
 * constants & macros for individual GPC_IMR2 bitfields
 */

/* --- Register HW_GPC_IMR2, field IMR2 */

#define BP_GPC_IMR2_IMR2      0
#define BM_GPC_IMR2_IMR2      0xffffffff

#ifndef __LANGUAGE_ASM__
#define BF_GPC_IMR2_IMR2(v)   ((((reg32_t) v) << 0) & BM_GPC_IMR2_IMR2)
#else
#define BF_GPC_IMR2_IMR2(v)   (((v) << 0) & BM_GPC_IMR2_IMR2)
#endif
#ifndef __LANGUAGE_ASM__
#define BW_GPC_IMR2_IMR2(v)   BF_CS1(GPC_IMR2, IMR2, v)
#endif

/*
 * HW_GPC_IMR3 - IRQ masking register 3
 */
#ifndef __LANGUAGE_ASM__
typedef union
{
    reg32_t  U;
    struct
    {
        unsigned IMR3 : 32;

    } B;
} hw_gpc_imr3_t;
#endif

/*
 * constants & macros for entire GPC_IMR3 register
 */
#define HW_GPC_IMR3_ADDR      (REGS_GPC_BASE + 0x10)

#ifndef __LANGUAGE_ASM__
#define HW_GPC_IMR3           (*(volatile hw_gpc_imr3_t *) HW_GPC_IMR3_ADDR)
#define HW_GPC_IMR3_RD()      (HW_GPC_IMR3.U)
#define HW_GPC_IMR3_WR(v)     (HW_GPC_IMR3.U = (v))
#define HW_GPC_IMR3_SET(v)    (HW_GPC_IMR3_WR(HW_GPC_IMR3_RD() |  (v)))
#define HW_GPC_IMR3_CLR(v)    (HW_GPC_IMR3_WR(HW_GPC_IMR3_RD() & ~(v)))
#define HW_GPC_IMR3_TOG(v)    (HW_GPC_IMR3_WR(HW_GPC_IMR3_RD() ^  (v)))
#endif


/*
 * constants & macros for individual GPC_IMR3 bitfields
 */

/* --- Register HW_GPC_IMR3, field IMR3 */

#define BP_GPC_IMR3_IMR3      0
#define BM_GPC_IMR3_IMR3      0xffffffff

#ifndef __LANGUAGE_ASM__
#define BF_GPC_IMR3_IMR3(v)   ((((reg32_t) v) << 0) & BM_GPC_IMR3_IMR3)
#else
#define BF_GPC_IMR3_IMR3(v)   (((v) << 0) & BM_GPC_IMR3_IMR3)
#endif
#ifndef __LANGUAGE_ASM__
#define BW_GPC_IMR3_IMR3(v)   BF_CS1(GPC_IMR3, IMR3, v)
#endif

/*
 * HW_GPC_IMR4 - IRQ masking register 4
 */
#ifndef __LANGUAGE_ASM__
typedef union
{
    reg32_t  U;
    struct
    {
        unsigned IMR4 : 32;

    } B;
} hw_gpc_imr4_t;
#endif

/*
 * constants & macros for entire GPC_IMR4 register
 */
#define HW_GPC_IMR4_ADDR      (REGS_GPC_BASE + 0x14)

#ifndef __LANGUAGE_ASM__
#define HW_GPC_IMR4           (*(volatile hw_gpc_imr4_t *) HW_GPC_IMR4_ADDR)
#define HW_GPC_IMR4_RD()      (HW_GPC_IMR4.U)
#define HW_GPC_IMR4_WR(v)     (HW_GPC_IMR4.U = (v))
#define HW_GPC_IMR4_SET(v)    (HW_GPC_IMR4_WR(HW_GPC_IMR4_RD() |  (v)))
#define HW_GPC_IMR4_CLR(v)    (HW_GPC_IMR4_WR(HW_GPC_IMR4_RD() & ~(v)))
#define HW_GPC_IMR4_TOG(v)    (HW_GPC_IMR4_WR(HW_GPC_IMR4_RD() ^  (v)))
#endif


/*
 * constants & macros for individual GPC_IMR4 bitfields
 */

/* --- Register HW_GPC_IMR4, field IMR4 */

#define BP_GPC_IMR4_IMR4      0
#define BM_GPC_IMR4_IMR4      0xffffffff

#ifndef __LANGUAGE_ASM__
#define BF_GPC_IMR4_IMR4(v)   ((((reg32_t) v) << 0) & BM_GPC_IMR4_IMR4)
#else
#define BF_GPC_IMR4_IMR4(v)   (((v) << 0) & BM_GPC_IMR4_IMR4)
#endif
#ifndef __LANGUAGE_ASM__
#define BW_GPC_IMR4_IMR4(v)   BF_CS1(GPC_IMR4, IMR4, v)
#endif

/*
 * HW_GPC_ISR1 - IRQ status resister 1
 */
#ifndef __LANGUAGE_ASM__
typedef union
{
    reg32_t  U;
    struct
    {
        unsigned ISR1 : 32;

    } B;
} hw_gpc_isr1_t;
#endif

/*
 * constants & macros for entire GPC_ISR1 register
 */
#define HW_GPC_ISR1_ADDR      (REGS_GPC_BASE + 0x18)

#ifndef __LANGUAGE_ASM__
#define HW_GPC_ISR1           (*(volatile hw_gpc_isr1_t *) HW_GPC_ISR1_ADDR)
#define HW_GPC_ISR1_RD()      (HW_GPC_ISR1.U)
#define HW_GPC_ISR1_WR(v)     (HW_GPC_ISR1.U = (v))
#define HW_GPC_ISR1_SET(v)    (HW_GPC_ISR1_WR(HW_GPC_ISR1_RD() |  (v)))
#define HW_GPC_ISR1_CLR(v)    (HW_GPC_ISR1_WR(HW_GPC_ISR1_RD() & ~(v)))
#define HW_GPC_ISR1_TOG(v)    (HW_GPC_ISR1_WR(HW_GPC_ISR1_RD() ^  (v)))
#endif


/*
 * constants & macros for individual GPC_ISR1 bitfields
 */

/* --- Register HW_GPC_ISR1, field ISR1 */

#define BP_GPC_ISR1_ISR1      0
#define BM_GPC_ISR1_ISR1      0xffffffff

#ifndef __LANGUAGE_ASM__
#define BF_GPC_ISR1_ISR1(v)   ((((reg32_t) v) << 0) & BM_GPC_ISR1_ISR1)
#else
#define BF_GPC_ISR1_ISR1(v)   (((v) << 0) & BM_GPC_ISR1_ISR1)
#endif
#ifndef __LANGUAGE_ASM__
#define BW_GPC_ISR1_ISR1(v)   BF_CS1(GPC_ISR1, ISR1, v)
#endif

/*
 * HW_GPC_ISR2 - IRQ status resister 2
 */
#ifndef __LANGUAGE_ASM__
typedef union
{
    reg32_t  U;
    struct
    {
        unsigned ISR2 : 32;

    } B;
} hw_gpc_isr2_t;
#endif

/*
 * constants & macros for entire GPC_ISR2 register
 */
#define HW_GPC_ISR2_ADDR      (REGS_GPC_BASE + 0x1c)

#ifndef __LANGUAGE_ASM__
#define HW_GPC_ISR2           (*(volatile hw_gpc_isr2_t *) HW_GPC_ISR2_ADDR)
#define HW_GPC_ISR2_RD()      (HW_GPC_ISR2.U)
#define HW_GPC_ISR2_WR(v)     (HW_GPC_ISR2.U = (v))
#define HW_GPC_ISR2_SET(v)    (HW_GPC_ISR2_WR(HW_GPC_ISR2_RD() |  (v)))
#define HW_GPC_ISR2_CLR(v)    (HW_GPC_ISR2_WR(HW_GPC_ISR2_RD() & ~(v)))
#define HW_GPC_ISR2_TOG(v)    (HW_GPC_ISR2_WR(HW_GPC_ISR2_RD() ^  (v)))
#endif


/*
 * constants & macros for individual GPC_ISR2 bitfields
 */

/* --- Register HW_GPC_ISR2, field ISR2 */

#define BP_GPC_ISR2_ISR2      0
#define BM_GPC_ISR2_ISR2      0xffffffff

#ifndef __LANGUAGE_ASM__
#define BF_GPC_ISR2_ISR2(v)   ((((reg32_t) v) << 0) & BM_GPC_ISR2_ISR2)
#else
#define BF_GPC_ISR2_ISR2(v)   (((v) << 0) & BM_GPC_ISR2_ISR2)
#endif
#ifndef __LANGUAGE_ASM__
#define BW_GPC_ISR2_ISR2(v)   BF_CS1(GPC_ISR2, ISR2, v)
#endif

/*
 * HW_GPC_ISR3 - IRQ status resister 3
 */
#ifndef __LANGUAGE_ASM__
typedef union
{
    reg32_t  U;
    struct
    {
        unsigned ISR3 : 32;

    } B;
} hw_gpc_isr3_t;
#endif

/*
 * constants & macros for entire GPC_ISR3 register
 */
#define HW_GPC_ISR3_ADDR      (REGS_GPC_BASE + 0x20)

#ifndef __LANGUAGE_ASM__
#define HW_GPC_ISR3           (*(volatile hw_gpc_isr3_t *) HW_GPC_ISR3_ADDR)
#define HW_GPC_ISR3_RD()      (HW_GPC_ISR3.U)
#define HW_GPC_ISR3_WR(v)     (HW_GPC_ISR3.U = (v))
#define HW_GPC_ISR3_SET(v)    (HW_GPC_ISR3_WR(HW_GPC_ISR3_RD() |  (v)))
#define HW_GPC_ISR3_CLR(v)    (HW_GPC_ISR3_WR(HW_GPC_ISR3_RD() & ~(v)))
#define HW_GPC_ISR3_TOG(v)    (HW_GPC_ISR3_WR(HW_GPC_ISR3_RD() ^  (v)))
#endif


/*
 * constants & macros for individual GPC_ISR3 bitfields
 */

/* --- Register HW_GPC_ISR3, field ISR3 */

#define BP_GPC_ISR3_ISR3      0
#define BM_GPC_ISR3_ISR3      0xffffffff

#ifndef __LANGUAGE_ASM__
#define BF_GPC_ISR3_ISR3(v)   ((((reg32_t) v) << 0) & BM_GPC_ISR3_ISR3)
#else
#define BF_GPC_ISR3_ISR3(v)   (((v) << 0) & BM_GPC_ISR3_ISR3)
#endif
#ifndef __LANGUAGE_ASM__
#define BW_GPC_ISR3_ISR3(v)   BF_CS1(GPC_ISR3, ISR3, v)
#endif

/*
 * HW_GPC_ISR4 - IRQ status resister 4
 */
#ifndef __LANGUAGE_ASM__
typedef union
{
    reg32_t  U;
    struct
    {
        unsigned ISR4 : 32;

    } B;
} hw_gpc_isr4_t;
#endif

/*
 * constants & macros for entire GPC_ISR4 register
 */
#define HW_GPC_ISR4_ADDR      (REGS_GPC_BASE + 0x24)

#ifndef __LANGUAGE_ASM__
#define HW_GPC_ISR4           (*(volatile hw_gpc_isr4_t *) HW_GPC_ISR4_ADDR)
#define HW_GPC_ISR4_RD()      (HW_GPC_ISR4.U)
#define HW_GPC_ISR4_WR(v)     (HW_GPC_ISR4.U = (v))
#define HW_GPC_ISR4_SET(v)    (HW_GPC_ISR4_WR(HW_GPC_ISR4_RD() |  (v)))
#define HW_GPC_ISR4_CLR(v)    (HW_GPC_ISR4_WR(HW_GPC_ISR4_RD() & ~(v)))
#define HW_GPC_ISR4_TOG(v)    (HW_GPC_ISR4_WR(HW_GPC_ISR4_RD() ^  (v)))
#endif


/*
 * constants & macros for individual GPC_ISR4 bitfields
 */

/* --- Register HW_GPC_ISR4, field ISR4 */

#define BP_GPC_ISR4_ISR4      0
#define BM_GPC_ISR4_ISR4      0xffffffff

#ifndef __LANGUAGE_ASM__
#define BF_GPC_ISR4_ISR4(v)   ((((reg32_t) v) << 0) & BM_GPC_ISR4_ISR4)
#else
#define BF_GPC_ISR4_ISR4(v)   (((v) << 0) & BM_GPC_ISR4_ISR4)
#endif
#ifndef __LANGUAGE_ASM__
#define BW_GPC_ISR4_ISR4(v)   BF_CS1(GPC_ISR4, ISR4, v)
#endif


#endif // _GPC_H
