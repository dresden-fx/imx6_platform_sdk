/*
 * Copyright (C) 2011, Freescale Semiconductor, Inc. All Rights Reserved
 * THIS SOURCE CODE IS CONFIDENTIAL AND PROPRIETARY AND MAY NOT
 * BE USED OR DISTRIBUTED WITHOUT THE WRITTEN PERMISSION OF
 * Freescale Semiconductor, Inc.
*/
/*!
 * @file buffers.h
 * @definitions for ALL buffer memory space regions used by sdk drivers
 */

#define IPU_DEFAULT_WORK_CLOCK 264000000
#define IPU_DMA_MEMORY_START	0x40000000
#define IPU_DMA_MEMORY_END		0x4FFFFFFF

#define HDMI_AUDIO_BUF_START  0x3fff0000
#define HDMI_AUDIO_BUF_END    0x3fff4000

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
