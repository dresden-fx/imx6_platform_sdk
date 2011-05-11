/*
 * Copyright (C) 2010, Freescale Semiconductor, Inc. All Rights Reserved
 * THIS SOURCE CODE IS CONFIDENTIAL AND PROPRIETARY AND MAY NOT
 * BE USED OR DISTRIBUTED WITHOUT THE WRITTEN PERMISSION OF
 * Freescale Semiconductor, Inc.
*/
#ifndef _TVE_REG_DEF_
#define _TVE_REG_DEF_

#include "hardware.h"

#define CCM_CDCDR_TVE_CLK_PRED      0x70000000  //the relevant mask for the tve_clk_pred[2:0] field

#define TVE_REG_TVE_EN 				(TVE_BASE_ADDR + 0x1000),0x00000001
#define TVE_REG_TVDAC_SAMP_RATE 	(TVE_BASE_ADDR + 0x1000),0x00000006
#define TVE_REG_IPU_CLK_EN 			(TVE_BASE_ADDR + 0x1000),0x00000008
#define TVE_REG_DATA_SOURCE_SEL 	(TVE_BASE_ADDR + 0x1000),0x00000030
#define TVE_REG_INP_VIDEO_FORM 		(TVE_BASE_ADDR + 0x1000),0x00000040
#define TVE_REG_P2I_CONV_EN 		(TVE_BASE_ADDR + 0x1000),0x00000080
#define TVE_REG_TV_STAND 			(TVE_BASE_ADDR + 0x1000),0x00000f00
#define TVE_REG_TV_OUT_MODE 		(TVE_BASE_ADDR + 0x1000),0x00007000
#define TVE_REG_SD_PED_AMP_CONT 	(TVE_BASE_ADDR + 0x1000),0x00030000
#define TVE_REG_SYNC_CH_0_EN 		(TVE_BASE_ADDR + 0x1000),0x00100000
#define TVE_REG_SYNC_CH_1_EN 		(TVE_BASE_ADDR + 0x1000),0x00200000
#define TVE_REG_SYNC_CH_2_EN 		(TVE_BASE_ADDR + 0x1000),0x00400000
#define TVE_REG_ACT_LINE_OFFSET 	(TVE_BASE_ADDR + 0x1000),0x07000000
#define TVE_REG_COM_CONF_REG 		(TVE_BASE_ADDR + 0x1000),0x07737fff
#define TVE_REG_DEFLICK_EN 			(TVE_BASE_ADDR + 0x1004),0x00000001
#define TVE_REG_DEFLICK_MEAS_WIN 	(TVE_BASE_ADDR + 0x1004),0x00000002
#define TVE_REG_DEFLICK_COEF 		(TVE_BASE_ADDR + 0x1004),0x00000070
#define TVE_REG_DEFLICK_LOW_THRESH 	(TVE_BASE_ADDR + 0x1004),0x0000ff00
#define TVE_REG_DEFLICK_MID_THRESH 	(TVE_BASE_ADDR + 0x1004),0x00ff0000
#define TVE_REG_DEFLICK_HIGH_THRESH (TVE_BASE_ADDR + 0x1004),0xff000000
#define TVE_REG_LUMA_FILT_CONT_REG_0 (TVE_BASE_ADDR + 0x1004),0xffffff73
#define TVE_REG_V_SHARP_EN 			(TVE_BASE_ADDR + 0x1008),0x00000001
#define TVE_REG_V_SHARP_COEF 		(TVE_BASE_ADDR + 0x1008),0x00000070
#define TVE_REG_V_SHARP_LOW_THRESH 	(TVE_BASE_ADDR + 0x1008),0x0000ff00
#define TVE_REG_V_SHARP_HIGH_THRESH (TVE_BASE_ADDR + 0x1008),0xff000000
#define TVE_REG_LUMA_FILT_CONT_REG_1 (TVE_BASE_ADDR + 0x1008),0xff00ff71
#define TVE_REG_H_SHARP_EN 			(TVE_BASE_ADDR + 0x100c),0x00000001
#define TVE_REG_H_SHARP_COEF 		(TVE_BASE_ADDR + 0x100c),0x00000070
#define TVE_REG_H_SHARP_LOW_THRESH 	(TVE_BASE_ADDR + 0x100c),0x0000ff00
#define TVE_REG_H_SHARP_HIGH_THRESH (TVE_BASE_ADDR + 0x100c),0xff000000
#define TVE_REG_LUMA_FILT_CONT_REG_2 (TVE_BASE_ADDR + 0x100c),0xff00ff71
#define TVE_REG_DERING_EN 			(TVE_BASE_ADDR + 0x1010),0x00000001
#define TVE_REG_SUPP_FILTER_TYPE 	(TVE_BASE_ADDR + 0x1010),0x00000006
#define TVE_REG_DERING_COEF 		(TVE_BASE_ADDR + 0x1010),0x00000070
#define TVE_REG_DERING_LOW_THRESH 	(TVE_BASE_ADDR + 0x1010),0x0000ff00
#define TVE_REG_DERING_MID_THRESH 	(TVE_BASE_ADDR + 0x1010),0x00ff0000
#define TVE_REG_DERING_HIGH_THRESH 	(TVE_BASE_ADDR + 0x1010),0xff000000
#define TVE_REG_LUMA_FILT_CONT_REG_3 (TVE_BASE_ADDR + 0x1010),0xffffff77
#define TVE_REG_LUMA_SA_EN 			(TVE_BASE_ADDR + 0x1014),0x00000001
#define TVE_REG_SA_H_POINTS_NUM 	(TVE_BASE_ADDR + 0x1014),0x00000030
#define TVE_REG_SA_V_POINTS_NUM 	(TVE_BASE_ADDR + 0x1014),0x00000300
#define TVE_REG_LUMA_SA_CONT_REG_0 	(TVE_BASE_ADDR + 0x1014),0x00000331
#define TVE_REG_SA_WIN_WIDTH 		(TVE_BASE_ADDR + 0x1018),0x000000ff
#define TVE_REG_SA_WIN_HEIGHT  (TVE_BASE_ADDR + 0x1018),0x0000ff00
#define TVE_REG_SA_WIN_H_OFFSET  (TVE_BASE_ADDR + 0x1018),0x00ff0000
#define TVE_REG_SA_WIN_V_OFFSET  (TVE_BASE_ADDR + 0x1018),0xff000000
#define TVE_REG_LUMA_SA_CONT_REG_1 (TVE_BASE_ADDR + 0x1018),0xffffffff
#define TVE_REG_LPU_DEFLICK_MEAS_MEAN (TVE_BASE_ADDR + 0x101c),0x000000ff
#define TVE_REG_LPU_V_SHARP_MEAS_MEAN (TVE_BASE_ADDR + 0x101c),0x0000ff00
#define TVE_REG_LPU_H_SHARP_MEAS_MEAN (TVE_BASE_ADDR + 0x101c),0x00ff0000
#define TVE_REG_LPU_DERING_MEAS_MEAN (TVE_BASE_ADDR + 0x101c),0xff000000
#define TVE_REG_LUMA_SA_STAT_REG_0 (TVE_BASE_ADDR + 0x101c),0xffffffff
#define TVE_REG_LPU_LUMA_MEAN (TVE_BASE_ADDR + 0x1020),0x000000ff
#define TVE_REG_LUMA_SA_STAT_REG_1 (TVE_BASE_ADDR + 0x1020),0x000000ff
#define TVE_REG_CHROMA_V_FILT_EN (TVE_BASE_ADDR + 0x1024),0x00000001
#define TVE_REG_CHROMA_BW (TVE_BASE_ADDR + 0x1024),0x00000070
#define TVE_REG_SCH_PHASE (TVE_BASE_ADDR + 0x1024),0x0000ff00
#define TVE_REG_CHROMA_CONT_REG (TVE_BASE_ADDR + 0x1024),0x0000ff71
#define TVE_REG_TVDAC_0_GAIN (TVE_BASE_ADDR + 0x1028),0x0000003f
#define TVE_REG_TVDAC_0_OFFSET (TVE_BASE_ADDR + 0x1028),0x0000ff00
#define TVE_REG_BG_RDY_TIME (TVE_BASE_ADDR + 0x1028),0x00ff0000
#define TVE_REG_TVDAC_0_CONT_REG (TVE_BASE_ADDR + 0x1028),0x00ffff3f
#define TVE_REG_TVDAC_1_GAIN (TVE_BASE_ADDR + 0x102c),0x0000003f
#define TVE_REG_TVDAC_1_OFFSET (TVE_BASE_ADDR + 0x102c),0x0000ff00
#define TVE_REG_TVDAC_1_CONT_REG (TVE_BASE_ADDR + 0x102c),0x0000ff3f
#define TVE_REG_TVDAC_2_GAIN (TVE_BASE_ADDR + 0x1030),0x0000003f
#define TVE_REG_TVDAC_2_OFFSET (TVE_BASE_ADDR + 0x1030),0x0000ff00
#define TVE_REG_TVDAC_2_CONT_REG (TVE_BASE_ADDR + 0x1030),0x0000ff3f
#define TVE_REG_CD_EN (TVE_BASE_ADDR + 0x1034),0x00000001
#define TVE_REG_CD_TRIG_MODE (TVE_BASE_ADDR + 0x1034),0x00000002
#define TVE_REG_CD_STBY_MON_PER (TVE_BASE_ADDR + 0x1034),0x000000f0
#define TVE_REG_CD_CH_0_REF_LVL (TVE_BASE_ADDR + 0x1034),0x00000100
#define TVE_REG_CD_CH_1_REF_LVL (TVE_BASE_ADDR + 0x1034),0x00000200
#define TVE_REG_CD_CH_2_REF_LVL (TVE_BASE_ADDR + 0x1034),0x00000400
#define TVE_REG_CD_REF_MODE (TVE_BASE_ADDR + 0x1034),0x00000800
#define TVE_REG_CD_CH_0_LM_EN (TVE_BASE_ADDR + 0x1034),0x00010000
#define TVE_REG_CD_CH_1_LM_EN (TVE_BASE_ADDR + 0x1034),0x00020000
#define TVE_REG_CD_CH_2_LM_EN (TVE_BASE_ADDR + 0x1034),0x00040000
#define TVE_REG_CD_CH_0_SM_EN (TVE_BASE_ADDR + 0x1034),0x00100000
#define TVE_REG_CD_CH_1_SM_EN (TVE_BASE_ADDR + 0x1034),0x00200000
#define TVE_REG_CD_CH_2_SM_EN (TVE_BASE_ADDR + 0x1034),0x00400000
#define TVE_REG_CD_CONT_REG (TVE_BASE_ADDR + 0x1034),0x00770ff3
#define TVE_REG_CC_SD_F1_EN (TVE_BASE_ADDR + 0x1038),0x00000001
#define TVE_REG_CC_SD_F2_EN (TVE_BASE_ADDR + 0x1038),0x00000002
#define TVE_REG_CC_SD_BOOST_EN (TVE_BASE_ADDR + 0x1038),0x00000004
#define TVE_REG_CGMS_SD_F1_EN (TVE_BASE_ADDR + 0x1038),0x00000010
#define TVE_REG_CGMS_SD_F2_EN (TVE_BASE_ADDR + 0x1038),0x00000020
#define TVE_REG_CGMS_SD_SW_CRC_EN (TVE_BASE_ADDR + 0x1038),0x00000040
#define TVE_REG_WSS_SD_EN (TVE_BASE_ADDR + 0x1038),0x00000080
#define TVE_REG_CGMS_HD_A_F1_EN (TVE_BASE_ADDR + 0x1038),0x00000100
#define TVE_REG_CGMS_HD_A_F2_EN (TVE_BASE_ADDR + 0x1038),0x00000200
#define TVE_REG_CGMS_HD_A_SW_CRC_EN (TVE_BASE_ADDR + 0x1038),0x00000400
#define TVE_REG_CGMS_HD_B_F1_EN (TVE_BASE_ADDR + 0x1038),0x00001000
#define TVE_REG_CGMS_HD_B_F2_EN (TVE_BASE_ADDR + 0x1038),0x00002000
#define TVE_REG_CGMS_HD_B_SW_CRC_EN (TVE_BASE_ADDR + 0x1038),0x00004000
#define TVE_REG_CGMS_HD_B_F1_HEADER (TVE_BASE_ADDR + 0x1038),0x003f0000
#define TVE_REG_CGMS_HD_B_F2_HEADER (TVE_BASE_ADDR + 0x1038),0x3f000000
#define TVE_REG_VBI_DATA_CONT_REG (TVE_BASE_ADDR + 0x1038),0x3f3f77f7
#define TVE_REG_CGMS_SD_HD_A_F1_DATA (TVE_BASE_ADDR + 0x103c),0x000fffff
#define TVE_REG_VBI_DATA_REG_0 (TVE_BASE_ADDR + 0x103c),0x000fffff
#define TVE_REG_CGMS_SD_HD_A_F2_DATA (TVE_BASE_ADDR + 0x1040),0x000fffff
#define TVE_REG_VBI_DATA_REG_1 (TVE_BASE_ADDR + 0x1040),0x000fffff
#define TVE_REG_CC_SD_CGMS_HD_B_F1_DATA_0 (TVE_BASE_ADDR + 0x1044),0xffffffff
#define TVE_REG_VBI_DATA_REG_2 (TVE_BASE_ADDR + 0x1044),0xffffffff
#define TVE_REG_WSS_SD_CGMS_HD_B_F1_DATA_1 (TVE_BASE_ADDR + 0x1048),0xffffffff
#define TVE_REG_VBI_DATA_REG_3 (TVE_BASE_ADDR + 0x1048),0xffffffff
#define TVE_REG_CGMS_HD_B_F1_DATA_2 (TVE_BASE_ADDR + 0x104c),0xffffffff
#define TVE_REG_VBI_DATA_REG_4 (TVE_BASE_ADDR + 0x104c),0xffffffff
#define TVE_REG_CGMS_HD_B_F1_DATA_3 (TVE_BASE_ADDR + 0x1050),0xffffffff
#define TVE_REG_VBI_DATA_REG_5 (TVE_BASE_ADDR + 0x1050),0xffffffff
#define TVE_REG_CC_SD_CGMS_HD_B_F2_DATA_0 (TVE_BASE_ADDR + 0x1054),0xffffffff
#define TVE_REG_VBI_DATA_REG_6 (TVE_BASE_ADDR + 0x1054),0xffffffff
#define TVE_REG_CGMS_HD_B_F2_DATA_1 (TVE_BASE_ADDR + 0x1058),0xffffffff
#define TVE_REG_VBI_DATA_REG_7 (TVE_BASE_ADDR + 0x1058),0xffffffff
#define TVE_REG_CGMS_HD_B_F2_DATA_2 (TVE_BASE_ADDR + 0x105c),0xffffffff
#define TVE_REG_VBI_DATA_REG_8 (TVE_BASE_ADDR + 0x105c),0xffffffff
#define TVE_REG_CGMS_HD_B_F2_DATA_3 (TVE_BASE_ADDR + 0x1060),0xffffffff
#define TVE_REG_VBI_DATA_REG_9 (TVE_BASE_ADDR + 0x1060),0xffffffff
#define TVE_REG_CD_LM_IEN (TVE_BASE_ADDR + 0x1064),0x00000001
#define TVE_REG_CD_SM_IEN (TVE_BASE_ADDR + 0x1064),0x00000002
#define TVE_REG_CD_MON_END_IEN (TVE_BASE_ADDR + 0x1064),0x00000004
#define TVE_REG_CC_SD_F1_DONE_IEN (TVE_BASE_ADDR + 0x1064),0x00000008
#define TVE_REG_CC_SD_F2_DONE_IEN (TVE_BASE_ADDR + 0x1064),0x00000010
#define TVE_REG_CGMS_SD_F1_DONE_IEN (TVE_BASE_ADDR + 0x1064),0x00000020
#define TVE_REG_CGMS_SD_F2_DONE_IEN (TVE_BASE_ADDR + 0x1064),0x00000040
#define TVE_REG_WSS_SD_DONE_IEN (TVE_BASE_ADDR + 0x1064),0x00000080
#define TVE_REG_CGMS_HD_A_F1_DONE_IEN (TVE_BASE_ADDR + 0x1064),0x00000100
#define TVE_REG_CGMS_HD_A_F2_DONE_IEN (TVE_BASE_ADDR + 0x1064),0x00000200
#define TVE_REG_CGMS_HD_B_F1_DONE_IEN (TVE_BASE_ADDR + 0x1064),0x00000400
#define TVE_REG_CGMS_HD_B_F2_DONE_IEN (TVE_BASE_ADDR + 0x1064),0x00000800
#define TVE_REG_TVE_FIELD_END_IEN (TVE_BASE_ADDR + 0x1064),0x00001000
#define TVE_REG_TVE_FRAME_END_IEN (TVE_BASE_ADDR + 0x1064),0x00002000
#define TVE_REG_SA_MEAS_END_IEN (TVE_BASE_ADDR + 0x1064),0x00004000
#define TVE_REG_INT_CONT_REG (TVE_BASE_ADDR + 0x1064),0x00007fff
#define TVE_REG_CDCU_CD_LM_INT (TVE_BASE_ADDR + 0x1068),0x00000001
#define TVE_REG_CDCU_CD_SM_INT (TVE_BASE_ADDR + 0x1068),0x00000002
#define TVE_REG_CDCU_CD_MON_END_INT (TVE_BASE_ADDR + 0x1068),0x00000004
#define TVE_REG_VDG_CC_SD_F1_DONE_INT (TVE_BASE_ADDR + 0x1068),0x00000008
#define TVE_REG_VDG_CC_SD_F2_DONE_INT (TVE_BASE_ADDR + 0x1068),0x00000010
#define TVE_REG_VDG_CGMS_SD_F1_DONE_INT (TVE_BASE_ADDR + 0x1068),0x00000020
#define TVE_REG_VDG_CGMS_SD_F2_DONE_INT (TVE_BASE_ADDR + 0x1068),0x00000040
#define TVE_REG_VDG_WSS_SD_DONE_INT (TVE_BASE_ADDR + 0x1068),0x00000080
#define TVE_REG_VDG_CGMS_HD_A_F1_DONE_INT (TVE_BASE_ADDR + 0x1068),0x00000100
#define TVE_REG_VDG_CGMS_HD_A_F2_DONE_INT (TVE_BASE_ADDR + 0x1068),0x00000200
#define TVE_REG_VDG_CGMS_HD_B_F1_DONE_INT (TVE_BASE_ADDR + 0x1068),0x00000400
#define TVE_REG_VDG_CGMS_HD_B_F2_DONE_INT (TVE_BASE_ADDR + 0x1068),0x00000800
#define TVE_REG_TSC_TVE_FIELD_END_INT (TVE_BASE_ADDR + 0x1068),0x00001000
#define TVE_REG_TSC_TVE_FRAME_END_INT (TVE_BASE_ADDR + 0x1068),0x00002000
#define TVE_REG_LPU_SA_MEAS_END_INT (TVE_BASE_ADDR + 0x1068),0x00004000
#define TVE_REG_CD_CH_0_LM_ST (TVE_BASE_ADDR + 0x1068),0x00010000
#define TVE_REG_CD_CH_1_LM_ST (TVE_BASE_ADDR + 0x1068),0x00020000
#define TVE_REG_CD_CH_2_LM_ST (TVE_BASE_ADDR + 0x1068),0x00040000
#define TVE_REG_CD_CH_0_SM_ST (TVE_BASE_ADDR + 0x1068),0x00100000
#define TVE_REG_CD_CH_1_SM_ST (TVE_BASE_ADDR + 0x1068),0x00200000
#define TVE_REG_CD_CH_2_SM_ST (TVE_BASE_ADDR + 0x1068),0x00400000
#define TVE_REG_CD_MAN_TRIG (TVE_BASE_ADDR + 0x1068),0x01000000
#define TVE_REG_BG_READY (TVE_BASE_ADDR + 0x1068),0x02000000
#define TVE_REG_STAT_REG (TVE_BASE_ADDR + 0x1068),0x03777fff
#define TVE_REG_TVDAC_TEST_MODE (TVE_BASE_ADDR + 0x106c),0x00000007
#define TVE_REG_TVDAC_0_DATA_FORCE (TVE_BASE_ADDR + 0x106c),0x00000010
#define TVE_REG_TVDAC_1_DATA_FORCE (TVE_BASE_ADDR + 0x106c),0x00000020
#define TVE_REG_TVDAC_2_DATA_FORCE (TVE_BASE_ADDR + 0x106c),0x00000040
#define TVE_REG_TVDAC_TEST_SINE_FREQ (TVE_BASE_ADDR + 0x106c),0x00000700
#define TVE_REG_TVDAC_TEST_SINE_LEVEL (TVE_BASE_ADDR + 0x106c),0x00003000
#define TVE_REG_COLORBAR_TYPE (TVE_BASE_ADDR + 0x106c),0x00010000
#define TVE_REG_TST_MODE_REG (TVE_BASE_ADDR + 0x106c),0x00013777
#define TVE_REG_H_TIMING_USR_MODE_EN (TVE_BASE_ADDR + 0x1070),0x00000001
#define TVE_REG_LUMA_FILT_USR_MODE_EN (TVE_BASE_ADDR + 0x1070),0x00000002
#define TVE_REG_SC_FREQ_USR_MODE_EN (TVE_BASE_ADDR + 0x1070),0x00000004
#define TVE_REG_CSCM_COEF_USR_MODE_EN (TVE_BASE_ADDR + 0x1070),0x00000008
#define TVE_REG_BLANK_LEVEL_USR_MODE_EN (TVE_BASE_ADDR + 0x1070),0x00000010
#define TVE_REG_VBI_DATA_USR_MODE_EN (TVE_BASE_ADDR + 0x1070),0x00000020
#define TVE_REG_TVDAC_DROP_COMP_USR_MODE_EN (TVE_BASE_ADDR + 0x1070),0x00000040
#define TVE_REG_USER_MODE_CONT_REG (TVE_BASE_ADDR + 0x1070),0x0000007f
#define TVE_REG_SD_VBI_T0_USR (TVE_BASE_ADDR + 0x1074),0x0000003f
#define TVE_REG_SD_VBI_T1_USR (TVE_BASE_ADDR + 0x1074),0x0003ff00
#define TVE_REG_SD_VBI_T2_USR (TVE_BASE_ADDR + 0x1074),0x3ff00000
#define TVE_REG_SD_TIMING_USR_CONT_REG_0 (TVE_BASE_ADDR + 0x1074),0x3ff3ff3f
#define TVE_REG_SD_ACT_T0_USR (TVE_BASE_ADDR + 0x1078),0x0000007f
#define TVE_REG_SD_ACT_T1_USR (TVE_BASE_ADDR + 0x1078),0x00001f00
#define TVE_REG_SD_ACT_T2_USR (TVE_BASE_ADDR + 0x1078),0x007f0000
#define TVE_REG_SD_ACT_T3_USR (TVE_BASE_ADDR + 0x1078),0x7f000000
#define TVE_REG_SD_TIMING_USR_CONT_REG_1 (TVE_BASE_ADDR + 0x1078),0x7f7f1f7f
#define TVE_REG_SD_ACT_T4_USR (TVE_BASE_ADDR + 0x107c),0x000007ff
#define TVE_REG_SD_ACT_T5_USR (TVE_BASE_ADDR + 0x107c),0x003ff000
#define TVE_REG_SD_ACT_T6_USR (TVE_BASE_ADDR + 0x107c),0x3f000000
#define TVE_REG_SD_TIMING_USR_CONT_REG_2 (TVE_BASE_ADDR + 0x107c),0x3f3ff7ff
#define TVE_REG_HD_VBI_ACT_T0_USR (TVE_BASE_ADDR + 0x1080),0x0000007f
#define TVE_REG_HD_VBI_T1_USR (TVE_BASE_ADDR + 0x1080),0x0001ff00
#define TVE_REG_HD_VBI_T2_USR (TVE_BASE_ADDR + 0x1080),0x7ff00000
#define TVE_REG_HD_TIMING_USR_CONT_REG_0 (TVE_BASE_ADDR + 0x1080),0x7ff1ff7f
#define TVE_REG_HD_VBI_T3_USR (TVE_BASE_ADDR + 0x1084),0x00001fff
#define TVE_REG_HD_ACT_T1_USR (TVE_BASE_ADDR + 0x1084),0x01ff0000
#define TVE_REG_HD_TIMING_USR_CONT_REG_1 (TVE_BASE_ADDR + 0x1084),0x01ff1fff
#define TVE_REG_HD_ACT_T2_USR (TVE_BASE_ADDR + 0x1088),0x00000fff
#define TVE_REG_HD_ACT_T3_USR (TVE_BASE_ADDR + 0x1088),0x1fff0000
#define TVE_REG_HD_TIMING_USR_CONT_REG_2 (TVE_BASE_ADDR + 0x1088),0x1fff0fff
#define TVE_REG_DEFLICK_MASK_MATRIX_USR (TVE_BASE_ADDR + 0x108c),0x00ffffff
#define TVE_REG_LUMA_USR_CONT_REG_0 (TVE_BASE_ADDR + 0x108c),0x00ffffff
#define TVE_REG_V_SHARP_MASK_MATRIX_USR (TVE_BASE_ADDR + 0x1090),0x00ffffff
#define TVE_REG_LUMA_USR_CONT_REG_1 (TVE_BASE_ADDR + 0x1090),0x00ffffff
#define TVE_REG_H_SHARP_MASK_MATRIX_USR (TVE_BASE_ADDR + 0x1094),0x00ffffff
#define TVE_REG_LUMA_USR_CONT_REG_2 (TVE_BASE_ADDR + 0x1094),0x00ffffff
#define TVE_REG_DERING_MASK_MATRIX_USR (TVE_BASE_ADDR + 0x1098),0x00ffffff
#define TVE_REG_LUMA_USR_CONT_REG_3 (TVE_BASE_ADDR + 0x1098),0x00ffffff
#define TVE_REG_DATA_CLIP_USR (TVE_BASE_ADDR + 0x109c),0x00000001
#define TVE_REG_BRIGHT_CORR_USR (TVE_BASE_ADDR + 0x109c),0x00003f00
#define TVE_REG_CSCM_A_COEF_USR (TVE_BASE_ADDR + 0x109c),0x07ff0000
#define TVE_REG_CSC_USR_CONT_REG_0 (TVE_BASE_ADDR + 0x109c),0x07ff3f01
#define TVE_REG_CSCM_B_COEF_USR (TVE_BASE_ADDR + 0x10a0),0x00000fff
#define TVE_REG_CSCM_C_COEF_USR (TVE_BASE_ADDR + 0x10a0),0x07ff0000
#define TVE_REG_CSC_USR_CONT_REG_1 (TVE_BASE_ADDR + 0x10a0),0x07ff0fff
#define TVE_REG_CSCM_D_COEF_USR (TVE_BASE_ADDR + 0x10a4),0x00000fff
#define TVE_REG_CSCM_E_COEF_USR (TVE_BASE_ADDR + 0x10a4),0x1fff0000
#define TVE_REG_CSC_USR_CONT_REG_2 (TVE_BASE_ADDR + 0x10a4),0x1fff0fff
#define TVE_REG_BLANKING_CH_0_USR (TVE_BASE_ADDR + 0x10a8),0x000003ff
#define TVE_REG_BLANKING_CH_1_USR (TVE_BASE_ADDR + 0x10a8),0x000ffc00
#define TVE_REG_BLANKING_CH_2_USR (TVE_BASE_ADDR + 0x10a8),0x3ff00000
#define TVE_REG_BLANK_USR_CONT_REG (TVE_BASE_ADDR + 0x10a8),0x3fffffff
#define TVE_REG_SC_FREQ_USR (TVE_BASE_ADDR + 0x10ac),0x3fffffff
#define TVE_REG_SD_MOD_USR_CONT_REG (TVE_BASE_ADDR + 0x10ac),0x3fffffff
#define TVE_REG_VBI_DATA_START_TIME_USR (TVE_BASE_ADDR + 0x10b0),0x00000fff
#define TVE_REG_VBI_DATA_STOP_TIME_USR (TVE_BASE_ADDR + 0x10b0),0x0fff0000
#define TVE_REG_VBI_DATA_USR_CONT_REG_0 (TVE_BASE_ADDR + 0x10b0),0x0fff0fff
#define TVE_REG_VBI_PACKET_START_TIME_USR (TVE_BASE_ADDR + 0x10b4),0x00000fff
#define TVE_REG_VBI_DATA_USR_CONT_REG_1 (TVE_BASE_ADDR + 0x10b4),0x00000fff
#define TVE_REG_CC_SD_RUNIN_START_TIME_USR (TVE_BASE_ADDR + 0x10b8),0x00000fff
#define TVE_REG_CC_SD_RUNIN_DIV_NUM_USR (TVE_BASE_ADDR + 0x10b8),0x07ff0000
#define TVE_REG_VBI_DATA_USR_CONT_REG_2 (TVE_BASE_ADDR + 0x10b8),0x07ff0fff
#define TVE_REG_CC_SD_CGMS_HD_B_DIV_NUM_USR (TVE_BASE_ADDR + 0x10bc),0x0000007f
#define TVE_REG_CC_SD_CGMS_HD_B_DIV_DENOM_USR (TVE_BASE_ADDR + 0x10bc),0x1fff0000
#define TVE_REG_VBI_DATA_USR_CONT_REG_3 (TVE_BASE_ADDR + 0x10bc),0x1fff007f
#define TVE_REG_WSS_CGMS_SD_CGMS_HD_A_DIV_NUM_USR (TVE_BASE_ADDR + 0x10c0),0x0000007f
#define TVE_REG_WSS_CGMS_SD_CGMS_HD_A_DIV_DENOM_USR (TVE_BASE_ADDR + 0x10c0),0x1fff0000
#define TVE_REG_VBI_DATA_USR_CONT_REG_4 (TVE_BASE_ADDR + 0x10c0),0x1fff007f
#define TVE_REG_TVDAC_0_DROP_COMP (TVE_BASE_ADDR + 0x10c4),0x0000000f
#define TVE_REG_TVDAC_1_DROP_COMP (TVE_BASE_ADDR + 0x10c4),0x000000f0
#define TVE_REG_TVDAC_2_DROP_COMP (TVE_BASE_ADDR + 0x10c4),0x00000f00
#define TVE_REG_DROP_COMP_USR_CONT_REG (TVE_BASE_ADDR + 0x10c4),0x00000fff
#define TVE_REG_MV_WORD_0 (TVE_BASE_ADDR + 0x10c8),0xffffffff
#define TVE_REG_MAC_WORD_REG_0 (TVE_BASE_ADDR + 0x10c8),0xffffffff
#define TVE_REG_MV_WORD_1 (TVE_BASE_ADDR + 0x10cc),0xffffffff
#define TVE_REG_MAC_WORD_REG_1 (TVE_BASE_ADDR + 0x10cc),0xffffffff
#define TVE_REG_MV_WORD_2 (TVE_BASE_ADDR + 0x10d0),0xffffffff
#define TVE_REG_MAC_WORD_REG_2 (TVE_BASE_ADDR + 0x10d0),0xffffffff
#define TVE_REG_MV_WORD_3 (TVE_BASE_ADDR + 0x10d4),0xffffffff
#define TVE_REG_MAC_WORD_REG_3 (TVE_BASE_ADDR + 0x10d4),0xffffffff
#define TVE_REG_MV_WORD_4 (TVE_BASE_ADDR + 0x10d8),0xffffffff
#define TVE_REG_MAC_WORD_REG_4 (TVE_BASE_ADDR + 0x10d8),0xffffffff
#define TVE_REG_MV_DATA_READY (TVE_BASE_ADDR + 0x10dc),0x00000001
#define TVE_REG_MAC_CONT_REG (TVE_BASE_ADDR + 0x10dc),0x00000001

//TVEV2 - registers defines without masking :
#define TVEV2_REG_COM_CONF_REG (TVE_BASE_ADDR + 0x1000)
#define TVEV2_REG_LUMA_FILT_CONT_REG_0 (TVE_BASE_ADDR + 0x1004)
#define TVEV2_REG_LUMA_FILT_CONT_REG_1 (TVE_BASE_ADDR + 0x1008)
#define TVEV2_REG_LUMA_FILT_CONT_REG_2 (TVE_BASE_ADDR + 0x100c)
#define TVEV2_REG_LUMA_FILT_CONT_REG_3 (TVE_BASE_ADDR + 0x1010)
#define TVEV2_REG_LUMA_SA_CONT_REG_0 (TVE_BASE_ADDR + 0x1014)
#define TVEV2_REG_LUMA_SA_CONT_REG_1 (TVE_BASE_ADDR + 0x1018)
#define TVEV2_REG_LUMA_SA_STAT_REG_0 (TVE_BASE_ADDR + 0x101c)
#define TVEV2_REG_LUMA_SA_STAT_REG_1 (TVE_BASE_ADDR + 0x1020)
#define TVEV2_REG_CHROMA_CONT_REG (TVE_BASE_ADDR + 0x1024)
#define TVEV2_REG_TVDAC_0_CONT_REG (TVE_BASE_ADDR + 0x1028)
#define TVEV2_REG_TVDAC_1_CONT_REG (TVE_BASE_ADDR + 0x102c)
#define TVEV2_REG_TVDAC_2_CONT_REG (TVE_BASE_ADDR + 0x1030)
#define TVEV2_REG_CD_CONT_REG (TVE_BASE_ADDR + 0x1034)
#define TVEV2_REG_VBI_DATA_CONT_REG (TVE_BASE_ADDR + 0x1038)
#define TVEV2_REG_VBI_DATA_REG_0 (TVE_BASE_ADDR + 0x103c)
#define TVEV2_REG_VBI_DATA_REG_1 (TVE_BASE_ADDR + 0x1040)
#define TVEV2_REG_VBI_DATA_REG_2 (TVE_BASE_ADDR + 0x1044)
#define TVEV2_REG_VBI_DATA_REG_3 (TVE_BASE_ADDR + 0x1048)
#define TVEV2_REG_VBI_DATA_REG_4 (TVE_BASE_ADDR + 0x104c)
#define TVEV2_REG_VBI_DATA_REG_5 (TVE_BASE_ADDR + 0x1050)
#define TVEV2_REG_VBI_DATA_REG_6 (TVE_BASE_ADDR + 0x1054)
#define TVEV2_REG_VBI_DATA_REG_7 (TVE_BASE_ADDR + 0x1058)
#define TVEV2_REG_VBI_DATA_REG_8 (TVE_BASE_ADDR + 0x105c)
#define TVEV2_REG_VBI_DATA_REG_9 (TVE_BASE_ADDR + 0x1060)
#define TVEV2_REG_INT_CONT_REG (TVE_BASE_ADDR + 0x1064)
#define TVEV2_REG_STAT_REG (TVE_BASE_ADDR + 0x1068)
#define TVEV2_REG_TST_MODE_REG (TVE_BASE_ADDR + 0x106c)
#define TVEV2_REG_USER_MODE_CONT_REG (TVE_BASE_ADDR + 0x1070)
#define TVEV2_REG_SD_TIMING_USR_CONT_REG_0 (TVE_BASE_ADDR + 0x1074)
#define TVEV2_REG_SD_TIMING_USR_CONT_REG_1 (TVE_BASE_ADDR + 0x1078)
#define TVEV2_REG_SD_TIMING_USR_CONT_REG_2 (TVE_BASE_ADDR + 0x107c)
#define TVEV2_REG_HD_TIMING_USR_CONT_REG_0 (TVE_BASE_ADDR + 0x1080)
#define TVEV2_REG_HD_TIMING_USR_CONT_REG_1 (TVE_BASE_ADDR + 0x1084)
#define TVEV2_REG_HD_TIMING_USR_CONT_REG_2 (TVE_BASE_ADDR + 0x1088)
#define TVEV2_REG_LUMA_USR_CONT_REG_0 (TVE_BASE_ADDR + 0x108c)
#define TVEV2_REG_LUMA_USR_CONT_REG_1 (TVE_BASE_ADDR + 0x1090)
#define TVEV2_REG_LUMA_USR_CONT_REG_2 (TVE_BASE_ADDR + 0x1094)
#define TVEV2_REG_LUMA_USR_CONT_REG_3 (TVE_BASE_ADDR + 0x1098)
#define TVEV2_REG_CSC_USR_CONT_REG_0 (TVE_BASE_ADDR + 0x109c)
#define TVEV2_REG_CSC_USR_CONT_REG_1 (TVE_BASE_ADDR + 0x10a0)
#define TVEV2_REG_CSC_USR_CONT_REG_2 (TVE_BASE_ADDR + 0x10a4)
#define TVEV2_REG_BLANK_USR_CONT_REG (TVE_BASE_ADDR + 0x10a8)
#define TVEV2_REG_SD_MOD_USR_CONT_REG (TVE_BASE_ADDR + 0x10ac)
#define TVEV2_REG_VBI_DATA_USR_CONT_REG_0 (TVE_BASE_ADDR + 0x10b0)
#define TVEV2_REG_VBI_DATA_USR_CONT_REG_1 (TVE_BASE_ADDR + 0x10b4)
#define TVEV2_REG_VBI_DATA_USR_CONT_REG_2 (TVE_BASE_ADDR + 0x10b8)
#define TVEV2_REG_VBI_DATA_USR_CONT_REG_3 (TVE_BASE_ADDR + 0x10bc)
#define TVEV2_REG_VBI_DATA_USR_CONT_REG_4 (TVE_BASE_ADDR + 0x10c0)
#define TVEV2_REG_DROP_COMP_USR_CONT_REG (TVE_BASE_ADDR + 0x10c4)
#define TVEV2_REG_MAC_WORD_REG_0 (TVE_BASE_ADDR + 0x10c8)
#define TVEV2_REG_MAC_WORD_REG_1 (TVE_BASE_ADDR + 0x10cc)
#define TVEV2_REG_MAC_WORD_REG_2 (TVE_BASE_ADDR + 0x10d0)
#define TVEV2_REG_MAC_WORD_REG_3 (TVE_BASE_ADDR + 0x10d4)
#define TVEV2_REG_MAC_WORD_REG_4 (TVE_BASE_ADDR + 0x10d8)
#define TVEV2_REG_MAC_CONT_REG (TVE_BASE_ADDR + 0x10dc)

#endif
