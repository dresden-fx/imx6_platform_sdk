/*
 * Copyright (C) 2011, Freescale Semiconductor, Inc. All Rights Reserved
 * THIS SOURCE CODE IS CONFIDENTIAL AND PROPRIETARY AND MAY NOT
 * BE USED OR DISTRIBUTED WITHOUT THE WRITTEN PERMISSION OF
 * Freescale Semiconductor, Inc.
*/
/*!
 * @file ipu_def.h
 * @brief soc specified ipu macro and data structre defination of IPU.
 * @ingroup diag_ipu
 */

#include "hardware.h"
 
#define IPU_DEFAULT_WORK_CLOCK 264000000
//#define IPU_DMA_MEMORY_START	0x40000000   //moved to buffers.h
//#define IPU_DMA_MEMORY_END		0x4FFFFFFF   //moved to buffers.h

#define CH23_EBA0 	(IPU_DMA_MEMORY_START + 0x00000000)
#define CH23_EBA1 	(IPU_DMA_MEMORY_START + 0x00400000)
#define CH27_EBA0 	(IPU_DMA_MEMORY_START + 0x00800000)
#define CH27_EBA1 	(IPU_DMA_MEMORY_START + 0x00C00000)
#define CH28_EBA0 	(IPU_DMA_MEMORY_START + 0x01000000)
#define CH28_EBA1 	(IPU_DMA_MEMORY_START + 0x01400000)

// for video playback after resizing&rotation
#define CH22_EBA0 	(IPU_DMA_MEMORY_START + 0x01800000)
#define CH22_EBA1	(IPU_DMA_MEMORY_START + 0x01C00000)

#define CH21_EBA0 	(IPU_DMA_MEMORY_START + 0x02000000)
#define CH21_EBA1 	(IPU_DMA_MEMORY_START + 0x02400000)
#define CH20_EBA0 	(IPU_DMA_MEMORY_START + 0x02800000)
#define CH20_EBA1 	(IPU_DMA_MEMORY_START + 0x02C00000)
