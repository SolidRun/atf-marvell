/*
 * Copyright (C) 2022 Marvell.
 *
 * SPDX-License-Identifier:	 BSD-3-Clause
 * https://spdx.org/licenses
 */


#include <arch.h>
#include <stdio.h>
#include <debug.h>
#include <drivers/delay_timer.h>
#include <platform_def.h>
#include <octeontx_common.h>
#include <plat_board_cfg.h>
#include <cgx.h>
#include <eth_intf.h>
#include <phy_marvell.h>
#include <phy_mgmt.h>
#include <phy_mgmt_adv_cmds.h>
#include <smi.h>

#include "mzdApiTypes.h"
#include "mzdApiRegs.h"
#include "mzdUtils.h"
#include "mzdAPI.h"
#include "mzdMacAPI.h"
#include "mzdMACSecAPI.h"

#include "api_cfye.h"
#include "api_cfye_ext.h"
#include "api_secy_ext.h"
#include "api_secy_types.h"
#include "api_secy.h"
#include "sa_builder_macsec.h"
#include "adapter_cfye_support.h"
#include "da_internal.h"

#include "phy_marvell_7121_macsec_api.h"

#define DEFAULT_KEY

MZD_U8 MAC_DA[] = { 11, 12, 13, 14, 15, 16 };

#ifdef DEFAULT_KEY
MZD_U8 K1[16] = {
	0xad, 0x7a, 0x2b, 0xd0, 0x3e, 0xac, 0x83, 0x5a,
	0x6f, 0x62, 0x0f, 0xdc, 0xb5, 0x06, 0xb3, 0x45,
};
#else
MZD_U8 K1[16] = {0};
#endif

MZD_U8 SCI1[] = {
	0x12, 0x15, 0x35, 0x24, 0xc0, 0x89, 0x5e, 0x81,
};

#define PKT_SEQ_NUMBER 0xFFFFFFF0  /* Rollover when SN reaches 0xFFFFFFFF */

da_sa_params_t Transform_Params_Basic_Transform_Ingress = {
	SAB_DIRECTION_INGRESS,
	SAB_OP_MACSEC,
	SAB_MACSEC_FLAG_ROLLOVER,
	2,
	K1,
	sizeof(K1),
	SCI1,
	NULL,
	NULL,
	PKT_SEQ_NUMBER + 1,
	0,
	0,
};

MZD_U8 SrcPacket_Basic_Transform_Ingress[] = {
	0xd6, 0x09, 0xb1, 0xf0,
	0x56, 0x63, 0x7a, 0x0d,
	0x46, 0xdf, 0x99, 0x8d,
	0x88, 0xe5, 0x2e, 0x00,
	0xb2, 0xc2, 0x84, 0x65,
	0x12, 0x15, 0x35, 0x24,
	0xc0, 0x89, 0x5e, 0x81,
	0x70, 0x1a, 0xfa, 0x1c,
	0xc0, 0x39, 0xc0, 0xd7,
	0x65, 0x12, 0x8a, 0x66,
	0x5d, 0xab, 0x69, 0x24,
	0x38, 0x99, 0xbf, 0x73,
	0x18, 0xcc, 0xdc, 0x81,
	0xc9, 0x93, 0x1d, 0xa1,
	0x7f, 0xbe, 0x8e, 0xdd,
	0x7d, 0x17, 0xcb, 0x8b,
	0x4c, 0x26, 0xfc, 0x81,
	0xe3, 0x28, 0x4f, 0x2b,
	0x7f, 0xba, 0x71, 0x3d,
	0x4f, 0x8d, 0x55, 0xe7,
	0xd3, 0xf0, 0x6f, 0xd5,
	0xa1, 0x3c, 0x0c, 0x29,
	0xb9, 0xd5, 0xb8, 0x80
};

MZD_U8 *TCI_AN_Basic_Transform_Ingress_p = &SrcPacket_Basic_Transform_Ingress[14];
MZD_U8 *SCI_Basic_Transform_Ingress_p = &SrcPacket_Basic_Transform_Ingress[20];

#ifdef DEFAULT_KEY
MZD_U8 K2[16] = {
	0xad, 0x7a, 0x2b, 0xd0, 0x3e, 0xac, 0x83, 0x5a,
	0x6f, 0x62, 0x0f, 0xdc, 0xb5, 0x06, 0xb3, 0x45,
};
#else
MZD_U8 K2[16] = {0};
#endif

MZD_U8 SCI2[] = {
	0x12, 0x15, 0x35, 0x24, 0xc0, 0x89, 0x5e, 0x81,
};

da_sa_params_t Transform_Params_Basic_Transform_Egress = {
	SAB_DIRECTION_EGRESS,
	SAB_OP_MACSEC,
	SAB_MACSEC_FLAG_ROLLOVER, /** Allow sequence number rollover (debugging only).*/
	2,
	K2,
	sizeof(K2),
	SCI2,
	NULL,
	NULL,
	PKT_SEQ_NUMBER, /* Sequence number. */
	0,
	0,
};

static da_sa_params_t Transform_Params_Ingress2 =
{
	SAB_DIRECTION_INGRESS,
	SAB_OP_MACSEC,
	0,     /* option flags */
	3,
	K2,
	sizeof(K2),
	SCI1,
	NULL,
	NULL,
	0, /* Sequence number. */
	0,
	0xFFFF,
};

static da_sa_params_t Transform_Params_Egress2 =
{
	SAB_DIRECTION_EGRESS,
	SAB_OP_MACSEC,
	0, //SAB_MACSEC_FLAG_ROLLOVER, /** Allow sequence number rollover (debugging only).*/
	3,
	K2,
	sizeof(K2),
	SCI1,
	NULL,
	NULL,
	0x00000001, /* Sequence number. */
	0,
	0,
};

static void print_key(uint8_t *key_p, unsigned int count)
{
	debug_phy_driver("\n");
	for (int i = 1; i <= count; i++) {
		debug_phy_driver(" 0x%x ", key_p[i-1]);
		if (i%8 == 0)
			debug_phy_driver("\n");
	}
}

MZD_STATUS phy_7121_macsec_drv_init(phy_7121_macsec_drv_t *phy_macsec_drv)
{
	memset(phy_macsec_drv, 0, sizeof(phy_7121_macsec_drv_t));

	memcpy((void *)&phy_macsec_drv->transform_params_ingress,
			(void *)&Transform_Params_Basic_Transform_Ingress,
			sizeof(da_sa_params_t));

	memcpy((void *)&phy_macsec_drv->transform_params_egress,
			(void *)&Transform_Params_Basic_Transform_Egress,
			sizeof(da_sa_params_t));

	return MZD_OK;
}


MZD_STATUS phy_7121_macsec_enable_engines(
	IN MZD_DEV_PTR pDev,
	IN MZD_U16 mdioPort,
	IN MZD_U16 laneOffset,
	IN MZD_U16 mode,
	IN MZD_OP_MODE opMode,
	phy_7121_macsec_drv_t *phy_macsec_drv)
{
	MZD_UINT ingressVPort, egressVPort;
	MZD_U16 channelID;
	MZD_U8 ingressDevId, egressDevId;
	MZD_U16 mdioPortIndex = MZD_GET_PORT_IDX(pDev, mdioPort);
	SecY_SAHandle_t SecY_IngressSAHandle, SecY_EgressSAHandle;
	CfyE_Status_t CfyE_Rc;
	SecY_Status_t SecY_Rc;
	CfyE_vPortHandle_t CfyE_IngressVPortHandle = CfyE_vPortHandle_NULL;
	CfyE_RuleHandle_t CfyE_IngressRuleHandle = CfyE_RuleHandle_NULL;
	CfyE_vPortHandle_t CfyE_EgressVPortHandle = CfyE_vPortHandle_NULL;
	CfyE_RuleHandle_t CfyE_EgressRuleHandle = CfyE_RuleHandle_NULL;
	PMZD_MACSEC_RES_STURCT resMACSecStuct = &phy_macsec_drv->resMACSecStuct;
	MZD_U8 *p;

	if (pDev->macsecCtrl.macsecInitialized == MZD_FALSE) {
		Driver164_Init();
	}

	MZD_ATTEMPT(mzdMacSecMacInit(pDev, mdioPort, MZD_BOTH_SIDE, laneOffset, opMode, mode));

	if (mode ==  MZD_INIT_MACSEC_BYPASS)  {
		debug_phy_driver("MZD_INIT_MACSEC_BYPASS mode set\n");
		return MZD_OK;
	}

	channelID = (mdioPortIndex % 2) ? (laneOffset + MZD_NUM_LANES) : laneOffset;

	MZD_ATTEMPT(mzdMacSecGetAssignedDeviceID(pDev, mdioPort, &ingressDevId, &egressDevId));

	debug_phy_driver("mzdMacSecGetAssignedDeviceID: pDev=%p ingressDevId=%d egressDevId=%d\n",
								pDev, ingressDevId, egressDevId);

	debug_phy_driver("****** CfyE initialized started ******\n");

	/* Initialize Ingress/Egress EIP-163 configure device CfyE_Device_Init */
	{
		CfyE_Init_t ingressSettings;
		CfyE_Init_t egressSettings;

		debug_phy_driver(" Initializing CfyE\n");

		mzdMemSet(&ingressSettings, 0, sizeof(ingressSettings));
		mzdMemSet(&egressSettings, 0, sizeof(egressSettings));

		if (!(CfyELib_Initialized_Check(ingressDevId, __func__, MZD_FALSE))) {
			CfyE_Rc = CfyE_Device_Init(ingressDevId, CFYE_ROLE_INGRESS,
								&ingressSettings);

			if (CfyE_Rc != CFYE_STATUS_OK) {
				debug_phy_driver(" CfyE ingressDevId=%d could "
					"not be initialized, error=%d\n",
							ingressDevId, CfyE_Rc);
				return MZD_FAIL;
			}
		}

		if (!(CfyELib_Initialized_Check(egressDevId, __func__, MZD_FALSE))) {
			CfyE_Rc = CfyE_Device_Init(egressDevId, CFYE_ROLE_EGRESS, &egressSettings);

			if (CfyE_Rc != CFYE_STATUS_OK) {
				debug_phy_driver(" CfyE egressDevId=%d "
						"could not be egressDevId, error=%d\n",
						ingressDevId, CfyE_Rc);
				return MZD_FAIL;
			}
		}

		debug_phy_driver("****** CfyE is initialized successfully******\n");
	}

	debug_phy_driver("****** Init SecY Engines ******\n");
	/* Initialize Ingress/Egress EIP-164 security device SecY_Device_Init */
	{
		SecY_Settings_t ingressSettings;
		SecY_Settings_t egressSettings;

		debug_phy_driver(" Initializing SecY\n");

		mzdMemSet(&ingressSettings, 0, sizeof(ingressSettings));
		mzdMemSet(&egressSettings, 0, sizeof(egressSettings));

		ingressSettings.DropBypass.DropType = SECY_SA_DROP_CRC_ERROR;

		SecY_Rc = SecY_Device_Init(ingressDevId, SECY_ROLE_INGRESS, &ingressSettings);

		if (SecY_Rc != SECY_STATUS_OK) {
			debug_phy_driver(" SecY ingressDevId=%d could not be initialized,"
						"error=%d\n", ingressDevId, SecY_Rc);
			return MZD_FAIL;
		}

		/* Non-matching SA flow packet processing rules */
		/* Default rule is to drop non-matching SA packets */

		egressSettings.DropBypass.DropType =  SECY_SA_DROP_CRC_ERROR;

		SecY_Rc = SecY_Device_Init(egressDevId, SECY_ROLE_EGRESS, &egressSettings);

		if (SecY_Rc != SECY_STATUS_OK) {
			debug_phy_driver(" SecY egressDevId=%d could not be initialized, "
					"error=%d\n", egressDevId, SecY_Rc);
			return MZD_FAIL;
		}

		debug_phy_driver(" SecY is initialized successfully\n");
	}

	debug_phy_driver("****** Ingress v-port policy ******\n");
	/*
	 * Create Ingress/Egress v-port policy
	 * Add Ingress/Egress rule, default match ignores MAC DA
	 */
	{
		CfyE_vPort_t vPortParams;
		CfyE_Rule_t RuleParams;

		mzdMemSet(&vPortParams, 0, sizeof(vPortParams));
		vPortParams.SecTagOffset = 12;

		/*
		 * Create Ingress v-port policy
		 * Add Ingress rule, default match ignores MAC DA
		 */
		CfyE_Rc = CfyE_vPort_Add(ingressDevId, &CfyE_IngressVPortHandle,
						&vPortParams, SECY_MODE_MACSEC);
		if (CfyE_Rc != CFYE_STATUS_OK) {
			debug_phy_driver(" Failed, ingressDevId=%d CfyE_vPort_Add()=%d\n",
						   ingressDevId, CfyE_Rc);
			return MZD_FAIL;
		}

		CfyE_vPortIndex_Get(CfyE_IngressVPortHandle, &ingressVPort);

		debug_phy_driver(" ingressVPort id:%d added\n", ingressVPort);

		/*
		 * Setup the Ingress rules and add it to the above new vPort
		 * Sample Ingress rule using default match which ignores MAC DA
		 */
		mzdMemSet(&RuleParams, 0, sizeof(RuleParams));

		RuleParams.Policy.vPortHandle = CfyE_IngressVPortHandle;

		RuleParams.Mask.PacketType = CFYE_RULE_PKT_TYPE_OTHER;

		/* Channel mask must be set to allow traffic on different lane
		 * to use an unique channel. Otherwise, running traffic on the
		 * incorrect channel will result in CRC errors
		 */
		RuleParams.Mask.ChannelID = 0xFF;
		RuleParams.Mask.NumTags = 0x00;

		RuleParams.Key.PacketType = CFYE_RULE_PKT_TYPE_OTHER;
		RuleParams.Key.ChannelID = channelID;
		RuleParams.Key.NumTags = 0x00;

		RuleParams.DataMask[0] = 0x00000000;
		RuleParams.DataMask[1] = 0x00000000;

		if (phy_macsec_drv->mac_ingress_true)  {
			p = phy_macsec_drv->mac_ingress;
			RuleParams.DataMask[0] = 0xffffffff;
			RuleParams.DataMask[1] = 0x0000ffff;
		} else {
			p = MAC_DA;
		}

		//RuleParams.Data[0] = p[0] | (p[1] << 8) | (p[2] << 16) | (p[3] << 24);
		RuleParams.Data[0] = p[0] | (channelID << 4) | (p[1] << 8)
					| (p[2] << 16) | (p[3] << 24);
		RuleParams.Data[1] = p[4] | (p[5] << 8);

		debug_phy_driver("RuleParams.Data[0] %x RuleParams.Data[1] %x\n",
					RuleParams.Data[0], RuleParams.Data[1]);

		CfyE_Rc = CfyE_Rule_Add(ingressDevId, CfyE_IngressVPortHandle,
					&CfyE_IngressRuleHandle, &RuleParams);

		if (CfyE_Rc != CFYE_STATUS_OK) {
			debug_phy_driver(" Failed, CfyE_Rule_Add()=%d\n", CfyE_Rc);
			return MZD_FAIL;
		}

		CfyE_Rc = CfyE_Rule_Enable(ingressDevId, CfyE_IngressRuleHandle, MZD_TRUE);
		if (CfyE_Rc != CFYE_STATUS_OK) {
			debug_phy_driver(" Failed, CfyE_Rule_Enable()=%d\n", CfyE_Rc);
			return MZD_FAIL;
		}

		debug_phy_driver("****** Egress  v-port policy ******\n");

		/*
		 *	Create Egress v-port policy
		 */
		vPortParams.PktExtension = 3; /* egress packet extension */

		CfyE_Rc = CfyE_vPort_Add(egressDevId, &CfyE_EgressVPortHandle,
							&vPortParams, SECY_MODE_MACSEC);
		if (CfyE_Rc != CFYE_STATUS_OK) {
			debug_phy_driver(" Failed, egressDevId=%d CfyE_vPort_Add()=%d\n",
						   egressDevId, CfyE_Rc);
			return MZD_FAIL;
		}

		/* Now get Ingress vPort index to use when installing SA: */
		CfyE_vPortIndex_Get(CfyE_EgressVPortHandle, &egressVPort);

		debug_phy_driver(" egressVPort id:%d added\n", egressVPort);

		/*
		 * Setup the Egress rules and add it to the above new vPort
		 */
		mzdMemSet(&RuleParams, 0, sizeof(RuleParams));

		RuleParams.Policy.vPortHandle = CfyE_EgressVPortHandle;

		RuleParams.Mask.PacketType = CFYE_RULE_PKT_TYPE_OTHER;

		RuleParams.Mask.ChannelID = 0xFF;
		RuleParams.Mask.NumTags = 0x00;

		RuleParams.Key.PacketType = CFYE_RULE_PKT_TYPE_OTHER;
		RuleParams.Key.ChannelID = channelID;
		RuleParams.Key.NumTags = 0x00;

		RuleParams.DataMask[0] = 0x00000000;
		RuleParams.DataMask[1] = 0x00000000;

		if (phy_macsec_drv->mac_egress_true) {
			p =  phy_macsec_drv->mac_egress;
			RuleParams.DataMask[0] = 0xffffffff;
			RuleParams.DataMask[1] = 0x0000ffff;
		} else  {
			p = MAC_DA;
		}

		//RuleParams.Data[0] = p[0] | (p[1] << 8) | (p[2] << 16) | (p[3] << 24);
		RuleParams.Data[0] = p[0] | (channelID << 4) | (p[1] << 8)
					| (p[2] << 16) | (p[3] << 24);
		RuleParams.Data[1] = p[4] | (p[5] << 8);

		debug_phy_driver("RuleParams.Data[0] %x RuleParams.Data[1] %xn",
					RuleParams.Data[0], RuleParams.Data[1]);

		CfyE_Rc = CfyE_Rule_Add(egressDevId, CfyE_EgressVPortHandle,
					&CfyE_EgressRuleHandle, &RuleParams);

		if (CfyE_Rc != CFYE_STATUS_OK) {
			debug_phy_driver(" Failed, CfyE_Rule_Add()=%d\n", CfyE_Rc);
			return MZD_FAIL;
		}

		CfyE_Rc = CfyE_Rule_Enable(egressDevId, CfyE_EgressRuleHandle, MZD_TRUE);
		if (CfyE_Rc != CFYE_STATUS_OK) {
			debug_phy_driver(" Failed, egressDevId=%d CfyE_Rule_Enable()=%d\n",
						   egressDevId, CfyE_Rc);
			return MZD_FAIL;
		}

		debug_phy_driver(" Rule enabled\n");
	}

	debug_phy_driver("****** Ingress  SecY policy Set ******\n");
	{
		/* Add Ingress secY policy - Install SA with transform record */
		/* Add Ingress SC and SA */

		SecY_SA_t SA_Params;
		MZD_U32 SAWordCount = 0;

		mzdMemSet(&SA_Params, 0, sizeof(SA_Params));

		/* DA_MACSEC_MODE_INGRESS */
		SA_Params.ActionType = SECY_SA_ACTION_INGRESS;
		SA_Params.DropType = SECY_SA_DROP_CRC_ERROR;
		//SA_Params.DropType = SECY_SA_DROP_NONE;

		SA_Params.DestPort = SECY_PORT_CONTROLLED;

		SA_Params.Params.Ingress.ValidateFramesTagged = SECY_FRAME_VALIDATE_STRICT;
		//SA_Params.Params.Ingress.ValidateFramesTagged = SECY_FRAME_VALIDATE_DISABLE;

		SA_Params.Params.Ingress.fReplayProtect = true;
		SA_Params.Params.Ingress.SCI_p =
			da_macsec_discard_const(SCI_Basic_Transform_Ingress_p);
		SA_Params.Params.Ingress.AN = *TCI_AN_Basic_Transform_Ingress_p & 3;
		SA_Params.Params.Ingress.fAllowTagged = true;
		SA_Params.Params.Ingress.PreSecTagAuthLength = 12;

		if (phy_macsec_drv->sa_params_ingress_true) {
			SA_Params.TransformRecord_p
				= da_macsec_build_sa(&phy_macsec_drv->transform_params_ingress,
									 &SAWordCount);
			debug_phy_driver("\nProgram Key Ingress");
			print_key(phy_macsec_drv->transform_params_ingress.Key_p,
					phy_macsec_drv->transform_params_ingress.KeyByteCount);

		} else {
			SA_Params.TransformRecord_p
				= da_macsec_build_sa(&Transform_Params_Basic_Transform_Ingress,
									 &SAWordCount);
			debug_phy_driver("\nProgram Default Key Ingress");
			print_key(Transform_Params_Basic_Transform_Ingress.Key_p,
					Transform_Params_Basic_Transform_Ingress.KeyByteCount);
		}

		SA_Params.SA_WordCount = SAWordCount;

		SecY_Rc = SecY_SA_Add(ingressDevId, ingressVPort, &SecY_IngressSAHandle,
									 &SA_Params);
		if (SecY_Rc != SECY_STATUS_OK) {
			debug_phy_driver(" Failed, SecY_SA_Add()=%d\n", SecY_Rc);
			SecY_Device_Uninit(ingressDevId);
			return MZD_FAIL;
		}

		debug_phy_driver(" Transform 32-bit word count %d\n",
							SA_Params.SA_WordCount);

		Log_HexDump32("Ingress Transform data",
			0,
			SA_Params.TransformRecord_p,
			SA_Params.SA_WordCount);

		if (SA_Params.TransformRecord_p) {
			da_macsec_free(SA_Params.TransformRecord_p);
		}

		debug_phy_driver(" SA Ingress with Transform Record added\n");
	}

	debug_phy_driver("****** Set Ingress SecY policy DONE  ******\n");

	debug_phy_driver("****** Set Egress SecY policy ******\n");
	{
		/* Add Egress secY policy - Install SA with transform record */
		/* Add Egress SC and SA */

		SecY_SA_t SA_Params;
		MZD_U32 SAWordCount = 0;

		mzdMemSet(&SA_Params, 0, sizeof(SA_Params));

		/* DA_MACSEC_MODE_EGRESS */
		SA_Params.ActionType = SECY_SA_ACTION_EGRESS;

		SA_Params.DropType = SECY_SA_DROP_CRC_ERROR;
		//SA_Params.DropType = SECY_SA_DROP_NONE;

		SA_Params.DestPort = SECY_PORT_COMMON;

		SA_Params.Params.Egress.fProtectFrames = true;
		SA_Params.Params.Egress.fIncludeSCI = true;
		SA_Params.Params.Egress.fConfProtect = true;
		SA_Params.Params.Egress.fAllowDataPkts = true;
		SA_Params.Params.Egress.PreSecTagAuthLength = 12;

		if (phy_macsec_drv->sa_params_egress_true) {
			SA_Params.TransformRecord_p
			= da_macsec_build_sa(&phy_macsec_drv->transform_params_egress,
									 &SAWordCount);
			debug_phy_driver("\nProgram Key Egress");
			print_key(phy_macsec_drv->transform_params_egress.Key_p,
					phy_macsec_drv->transform_params_egress.KeyByteCount);
		} else {
			SA_Params.TransformRecord_p
			= da_macsec_build_sa(&Transform_Params_Basic_Transform_Egress,
									 &SAWordCount);
			debug_phy_driver("\nDefault Program Key Egress");
			print_key(phy_macsec_drv->transform_params_egress.Key_p,
				phy_macsec_drv->transform_params_egress.KeyByteCount);
		}

		SA_Params.SA_WordCount = SAWordCount;

		SecY_Rc = SecY_SA_Add(egressDevId, egressVPort, &SecY_EgressSAHandle, &SA_Params);

		if (SecY_Rc != SECY_STATUS_OK) {
			debug_phy_driver(" Failed, egressDevId %d, SecY_SA_Add()=%d\n",
						  egressDevId, SecY_Rc);
			SecY_Device_Uninit(egressDevId);
			return MZD_FAIL;
		}

		debug_phy_driver(" Transform 32-bit word count %d\n", SA_Params.SA_WordCount);

		Log_HexDump32("Egress Transform data",
			0,
			SA_Params.TransformRecord_p,
			SA_Params.SA_WordCount);

		if (SA_Params.TransformRecord_p) {
			da_macsec_free(SA_Params.TransformRecord_p);
		}

		debug_phy_driver(" SA Egress with Transform Record added\n");
	}

#ifdef MODE_PCS_SET
	{
		MZD_MODE_OPTION_STRUCT modeOptionInfo;
		MZD_OP_MODE modePCS = opMode;

		MZD_ATTEMPT(mzdSampleSetPCSMode(pDev, mdioPort, laneOffset,
				MZD_MODE_FORCE_RECONFIG,
				modeOptionInfo, modePCS, modePCS, MZD_TRUE));
	}
#endif
	phy_macsec_drv->ingressVPort = ingressVPort;
	phy_macsec_drv->egressVPort = egressVPort;

	if (resMACSecStuct) {
		mzdMemSet(resMACSecStuct, 0, sizeof(MZD_MACSEC_RES_STURCT));

		resMACSecStuct->mdioPort = mdioPort;
		resMACSecStuct->channelID = channelID;
		resMACSecStuct->ingressDevId = ingressDevId;
		resMACSecStuct->egressDevId = egressDevId;
		resMACSecStuct->CfyE_IngressRuleHandle = CfyE_IngressRuleHandle;
		resMACSecStuct->CfyE_IngressVPortHandle = CfyE_IngressVPortHandle;
		resMACSecStuct->SecY_IngressSAHandle = SecY_IngressSAHandle.p;
		resMACSecStuct->CfyE_EgressRuleHandle = CfyE_EgressRuleHandle;
		resMACSecStuct->CfyE_EgressVPortHandle = CfyE_EgressVPortHandle;
		resMACSecStuct->SecY_EgressSAHandle = SecY_EgressSAHandle.p;
	}

	return MZD_OK;
}

MZD_STATUS phy_7121_macsec_bypass_engines(
	IN MZD_DEV_PTR pDev,
	IN MZD_U16 mdioPort,
	IN MZD_U16 laneOffset,
	IN MZD_OP_MODE opMode)
{

	if (pDev->macsecCtrl.macsecInitialized == MZD_FALSE) {
		Driver164_Init();
	}

	MZD_ATTEMPT(mzdMacSecMacInit(pDev, mdioPort, MZD_BOTH_SIDE, laneOffset,
				opMode,
				MZD_INIT_MACSEC_ENABLE | MZD_INIT_MACSEC_BYPASS));

	return MZD_OK;
}

MZD_STATUS phy_7121_macsec_free_resources(int cgx_id,
				int lmac_id,
				PMZD_MACSEC_RES_STURCT resMACSecStuct)
{
	phy_config_t *phy;
	MZD_U16 lane_offset;

	phy = &plat_octeontx_bcfg->cgx_cfg[cgx_id].lmac_cfg[lmac_id].phy_config;
	lane_offset = phy->port;

	MZD_ATTEMPT(mzdMACsecSampleFreeResources(phy->priv,
						phy->addr,
						lane_offset, MZD_TRUE, resMACSecStuct));

	return MZD_OK;
}

MZD_STATUS  phy_7121_get_mac_stats(
	IN MZD_DEV_PTR pDev,
	IN MZD_U16 mdioPort,
	IN MZD_U16 laneOffset
)
{
	MZD_STATUS status;

	printf("\n**** mzdMacMIBStatDump MAC counters HOST side\n");
	status = mzdMacMIBStatDump(pDev, mdioPort, MZD_HOST_SIDE, laneOffset, 0);
	printf("\n**** mzdMacMIBStatDump MAC counters LINE side\n");
	status = mzdMacMIBStatDump(pDev, mdioPort, MZD_LINE_SIDE, laneOffset, 0);

	if (status != MZD_OK) {
		debug_phy_driver("test_macsec: test macsec failed\n");
		return MZD_FAIL;
	}

	return MZD_OK;
}

#define STATS_PRINT
MZD_STATUS phy_7121_macsec_stats(int cgx_id,
				int lmac_id,
				phy_7121_macsec_drv_t *phy_macsec_drv)
{
	PMZD_MACSEC_RES_STURCT resMACSecStuct = &phy_macsec_drv->resMACSecStuct;
#ifdef STATS_PRINT
	MZD_U8	ingressDevId = resMACSecStuct->ingressDevId;
	MZD_U8	egressDevId = resMACSecStuct->egressDevId;
	SecY_SAHandle_t SecY_IngressSAHandle, SecY_EgressSAHandle;
	CfyE_Status_t CfyE_Rc;
	SecY_Status_t SecY_Rc;
	MZD_UINT ingressVPort = phy_macsec_drv->ingressVPort;
	MZD_UINT egressVPort = phy_macsec_drv->egressVPort;

	SecY_IngressSAHandle.p = resMACSecStuct->SecY_IngressSAHandle;
	SecY_EgressSAHandle.p = resMACSecStuct->SecY_EgressSAHandle;

	debug_phy_driver("%s ingressDevId %d, egressDevId %d\n", __func__,
						ingressDevId, egressDevId);
	{
		SecY_SA_Stat_I_t SAStats;

		ZEROINIT(SAStats);

		debug_phy_driver("\n******CfyE_Diag_Device_Dump(ingressDevId)=%d\n",
								ingressDevId);
		CfyE_Rc = CfyE_Diag_Device_Dump(ingressDevId);
		if (CfyE_Rc != CFYE_STATUS_OK) {
			debug_phy_driver("CfyE_Diag_Device_Dump: Failed,"
					" CfyE_Diag_Device_Dump(ingressDevId)=%d\n", CfyE_Rc);
			goto error_exit;
		}

		debug_phy_driver("\n*****SecY_Diag_Device_Dump(ingressDevId)=%d\n", CfyE_Rc);
		SecY_Rc = SecY_Diag_Device_Dump(ingressDevId);
		if (SecY_Rc != SECY_STATUS_OK) {
			debug_phy_driver("SecY_Diag_Device_Dump: Failed,"
				"SecY_Diag_Device_Dump(ingressDevId)=%d\n", SecY_Rc);
			goto error_exit;
		}

		/* Read the SA ingress statistics counters, */
		/* request device synchronization before reading out the statistics */
		debug_phy_driver("\n*****SA ingress statistics counters ******\n");
		SecY_Rc = SecY_SA_Statistics_I_Get(ingressDevId,
						   SecY_IngressSAHandle,
						   &SAStats,
						   true);
		if (SecY_Rc != SECY_STATUS_OK) {
			debug_phy_driver("SecY_SA_Statistics_I_Get: Failed,"
					" SecY_SA_Statistics_I_Get()=%d\n",
				SecY_Rc);
			goto error_exit;
		}

		/* Assume that any counters are less than 2^32, so we can just display */
		/* the low halves of the 64-bit counters */
		printf("SecY_SA_Statistics_I_Get:Ingress SA Statistics:\n"
		"\tInOctetsDecrypted: %u\n"
		"\tInOctetsValidated: %u\n"
		"\tInPktsDelayed:	 %u\n"
		"\tInPktsInvalid:	 %u\n"
		"\tInPktsLate:	%u\n"
		"\tInPktsNotUsingSA:  %u\n"
		"\tInPktsNotValid:	%u\n"
		"\tInPktsOK:	  %u\n"
		"\tInPktsUnchecked:   %u\n"
		"\tInPktsUnusedSA:	%u\n",
		SAStats.InOctetsDecrypted.Lo,
		SAStats.InOctetsValidated.Lo,
		SAStats.InPktsDelayed.Lo,
		SAStats.InPktsInvalid.Lo,
		SAStats.InPktsLate.Lo,
		SAStats.InPktsNotUsingSA.Lo,
		SAStats.InPktsNotValid.Lo,
		SAStats.InPktsOK.Lo,
		SAStats.InPktsUnchecked.Lo,
		SAStats.InPktsUnusedSA.Lo);
	}

	{
		SecY_SecY_Stat_I_t SecYStats;

		ZEROINIT(SecYStats);

		/* Read the SecY ingress statistics counters. */
		/* Sync with the SecY device to get the exact counters values */
		debug_phy_driver("\n*****SecY ingress statistics counters ******\n");
		SecY_Rc = SecY_SecY_Statistics_I_Get(ingressDevId,
						 ingressVPort,
						 &SecYStats,
						 true);
		if (SecY_Rc != SECY_STATUS_OK) {
			debug_phy_driver("SecY_SecY_Statistics_I_Get: Failed,"
				" SecY_SecY_Statistics_I_Get()=%d\n", SecY_Rc);
		goto error_exit;
		}

		/* Assume that any counters are less than 2^32, so we can just display */
		/* the low halves of the 64-bit counters */
		printf(
		"SecY_SecY_Statistics_I_Get: Ingress SecY(%d) Statistics:\n"
		"\tTransform E r r o r Packets Counter:	%u\n"
		"\tIngress Controlled Packets Counter:	 %u\n"
		"\tIngress Untagged Packets Counter:	   %u\n"
		"\tIngress No Tag Packets Counter:	 %u\n"
		"\tIngress Bad Tag Packets Counter:	%u\n"
		"\tIngress No SCI Packets Counter:	 %u\n"
		"\tIngress Unknown SCI Packets Counter:	%u\n"
		"\tIngress Tagged Control Packets Counter: %u\n",
		ingressVPort,
		SecYStats.InPktsTransformError.Lo,
		SecYStats.InPktsControl.Lo,
		SecYStats.InPktsUntagged.Lo,
		SecYStats.InPktsNoTag.Lo,
		SecYStats.InPktsBadTag.Lo,
		SecYStats.InPktsNoSCI.Lo,
		SecYStats.InPktsUnknownSCI.Lo,
		SecYStats.InPktsTaggedCtrl.Lo);
	}

	{
		SecY_Ifc_Stat_I_t IfcStats;

		ZEROINIT(IfcStats);

		/* Read the IFC/IFC1 ingress statistics counters. */
		/* Sync with the SecY device to get the exact counters values */
		debug_phy_driver("\n*****IFC/IFC1  ingress statistics counters ******\n");
		SecY_Rc = SecY_Ifc_Statistics_I_Get(ingressDevId,
						ingressVPort,
						&IfcStats,
						true);
		if (SecY_Rc != SECY_STATUS_OK) {
			printf("SecY_Ifc_Statistics_I_Get: Failed,"
				" SecY_Ifc_Statistics_I_Get()=%d\n", SecY_Rc);
			goto error_exit;
		}

		/* Assume that any counters are less than 2^32, so we can just display */
		/* the low halves of the 64-bit counters */
		printf(
			"SecY_Ifc_Statistics_I_Get: Ingress IFC/IFC1(%d) Statistics:\n"
			"\tUncontrolled Counters:\n"
			"\t  Octects:		 %u\n"
			"\t  Packets Unicast:	 %u\n"
			"\t  Packets Multicast:   %u\n"
			"\t  Packets Broadcast:   %u\n"
			"\tControlled Counters:\n"
			"\t  Octects:		 %u\n"
			"\t  Packets Unicast:	 %u\n"
			"\t  Packets Multicast:   %u\n"
			"\t  Packets Broadcast:   %u\n",
			ingressVPort,
			IfcStats.InOctetsUncontrolled.Lo,
			IfcStats.InPktsUnicastUncontrolled.Lo,
			IfcStats.InPktsMulticastUncontrolled.Lo,
			IfcStats.InPktsBroadcastUncontrolled.Lo,
			IfcStats.InOctetsControlled.Lo,
			IfcStats.InPktsUnicastControlled.Lo,
			IfcStats.InPktsMulticastControlled.Lo,
			IfcStats.InPktsBroadcastControlled.Lo);
	}

	{
		SecY_SA_Stat_E_t SAStats;

		ZEROINIT(SAStats);

		printf("\n***** CfyE_Diag_Device_Dump(egressDevId)=%d\n", CfyE_Rc);
		CfyE_Rc = CfyE_Diag_Device_Dump(egressDevId);
		if (CfyE_Rc != CFYE_STATUS_OK) {
			debug_phy_driver("CfyE_Diag_Device_Dump: Failed,"
				" CfyE_Diag_Device_Dump(egressDevId)=%d\n", CfyE_Rc);
			goto error_exit;
		}

		printf("\n***** SecY_Diag_Device_Dump(egressDevId)=%d\n", CfyE_Rc);

		SecY_Rc = SecY_Diag_Device_Dump(egressDevId);
		if (SecY_Rc != SECY_STATUS_OK) {
			printf("SecY_Diag_Device_Dump: Failed,"
				" SecY_Diag_Device_Dump(egressDevId)=%d\n", SecY_Rc);
			goto error_exit;
		}

		/* Read out egress SA statistics, */
		/* request device synchronization before reading out statistics */
		printf("\n***** Egress SA statistics %d\n", CfyE_Rc);
		SecY_Rc = SecY_SA_Statistics_E_Get(egressDevId,
					   SecY_EgressSAHandle,
					   &SAStats,
					   true);
		if (SecY_Rc != SECY_STATUS_OK) {
			printf("SecY_SA_Statistics_E_Get: Failed, SecY_SA_Statistics_E_Get()=%d\n",
			SecY_Rc);
			goto error_exit;
		}

		/* Assume that any counters are less than 2^32, so we can just display */
		/* the low halves of the 64-bit counters */
		debug_phy_driver("SecY_SA_Statistics_E_Get: Egress SA Statistics:\n"
		"\tOutOctetsEncryptedProtected: %u\n"
		"\tOutPktsEncryptedProtected:   %u\n"
		"\tOutPktsTooLong:		  %u\n"
		"\tOutPktsSANotInUse:	   %u\n",
		SAStats.OutOctetsEncryptedProtected.Lo,
		SAStats.OutPktsEncryptedProtected.Lo,
		SAStats.OutPktsTooLong.Lo,
		SAStats.OutPktsSANotInUse.Lo);

		{
			SecY_SecY_Stat_E_t SecYStats;

			ZEROINIT(SecYStats);

			/* Read the SecY ingress statistics counters. */
			/* Sync with the SecY device to get the exact counters values */
			SecY_Rc = SecY_SecY_Statistics_E_Get(egressDevId,
						 egressVPort,
						 &SecYStats,
						 true);
			if (SecY_Rc != SECY_STATUS_OK) {
				debug_phy_driver("mzdMACSecSampleSecyCfyeTransform: Failed,"
					" SecY_SecY_Statistics_E_Get()=%d\n",
					SecY_Rc);
				goto error_exit;
			}

			/* Assume that any counters are less than 2^32, so we can just display */
			/* the low halves of the 64-bit counters */
			printf(
			"SecY_SecY_Statistics_E_Get: Egress SecY(%d) Statistics:\n"
			"\tTransform E r r o r Packets Counter: %u\n"
			"\tEgress Controlled Packets Counter:   %u\n"
			"\tEgress Untagged Packets Counter:	 %u\n",
			egressVPort,
			SecYStats.OutPktsTransformError.Lo,
			SecYStats.OutPktsControl.Lo,
			SecYStats.OutPktsUntagged.Lo);

			if ((SecYStats.OutPktsTransformError.Lo != 0) ||
				(SecYStats.OutPktsControl.Lo != 0) ||
				(SecYStats.OutPktsUntagged.Lo != 0)) {
				printf("SecY_SecY_Statistics_E_Get: Failed, SecY statistics check:\n"
					"\tOutPktsTransformError=%u, expected 0\n"
					"\tOutPktsControl=%u, expected 0\n"
					"\tOutPktsUntagged=%u, expected 0\n",
					SecYStats.OutPktsTransformError.Lo,
					SecYStats.OutPktsControl.Lo,
					SecYStats.OutPktsUntagged.Lo);
				goto error_exit;
			}
		}

		{
			SecY_Ifc_Stat_E_t IfcStats;

			ZEROINIT(IfcStats);

			/* Read the IFC/IFC1 ingress statistics counters. */
			/* Sync with the SecY device to get the exact counters values */
			SecY_Rc = SecY_Ifc_Statistics_E_Get(egressDevId,
						egressVPort,
						&IfcStats,
						true);
			if (SecY_Rc != SECY_STATUS_OK) {
				debug_phy_driver("SecY_Ifc_Statistics_E_Get: Failed,"
					" SecY_Ifc_Statistics_E_Get()=%d\n", SecY_Rc);
				goto error_exit;
			}

			/* Assume that any counters are less than 2^32, so we can just display */
			/* the low halves of the 64-bit counters */
			printf(
			"SecY_Ifc_Statistics_E_Get: Egress IFC/IFC1(%d) Statistics:\n"
			"\tCommon Counters:\n"
			"\t  Octects:		 %u\n"
			"\tUncontrolled Counters:\n"
			"\t  Octects:		 %u\n"
			"\t  Packets Unicast:	 %u\n"
			"\t  Packets Multicast:   %u\n"
			"\t  Packets Broadcast:   %u\n"
			"\tControlled Counters:\n"
			"\t  Octects:		 %u\n"
			"\t  Packets Unicast:	 %u\n"
			"\t  Packets Multicast:   %u\n"
			"\t  Packets Broadcast:   %u\n",
			egressVPort,
			IfcStats.OutOctetsCommon.Lo,
			IfcStats.OutOctetsUncontrolled.Lo,
			IfcStats.OutPktsUnicastUncontrolled.Lo,
			IfcStats.OutPktsMulticastUncontrolled.Lo,
			IfcStats.OutPktsBroadcastUncontrolled.Lo,
			IfcStats.OutOctetsControlled.Lo,
			IfcStats.OutPktsUnicastControlled.Lo,
			IfcStats.OutPktsMulticastControlled.Lo,
			IfcStats.OutPktsBroadcastControlled.Lo);
		}
	}


error_exit:

#else
	phy_config_t *phy;

	phy = &plat_octeontx_bcfg->cgx_cfg[cgx_id].lmac_cfg[lmac_id].phy_config;
	mzdMACsecStatistics(phy->priv, resMACSecStuct);
#endif

	return MZD_OK;
}


MZD_STATUS phy_7121_macsec_rekey(phy_7121_macsec_drv_t *phy_macsec_drv)
{
	MZD_UINT ingressVPort;
	//MZD_UINT egressVPort;
	MZD_U8 ingressDevId, egressDevId;
	SecY_Status_t SecY_Rc;
	SecY_SAHandle_t SecY_IngressSAHandle2;
	SecY_SAHandle_t SecY_EgressSAHandle2;
	SecY_SAHandle_t SecY_EgressSAHandle1;

	SecY_SA_t SA_Params;
	MZD_U32 SAWordCount = 0;

	PMZD_MACSEC_RES_STURCT resMACSecStuct = &phy_macsec_drv->resMACSecStuct;

	//SecY_SAHandle_t SecY_IngressSAHandle1 = resMACSecStuct->SecY_IngressSAHandle;

	ingressVPort = phy_macsec_drv->ingressVPort;
	//egressVPort = phy_macsec_drv->egressVPort;

	ingressDevId = resMACSecStuct->ingressDevId;
	egressDevId = resMACSecStuct->ingressDevId;

	SecY_EgressSAHandle1.p = resMACSecStuct->SecY_EgressSAHandle;

	{
		mzdMemSet(&SA_Params, 0, sizeof(SA_Params));

		SA_Params.ActionType = SECY_SA_ACTION_INGRESS;
		SA_Params.DropType = SECY_SA_DROP_CRC_ERROR;
		SA_Params.DestPort = SECY_PORT_CONTROLLED;

		SA_Params.Params.Ingress.ValidateFramesTagged =
				SECY_FRAME_VALIDATE_STRICT;
		SA_Params.Params.Ingress.fReplayProtect = true;
		SA_Params.Params.Ingress.SCI_p = SCI1;
		SA_Params.Params.Ingress.AN = 3;
		SA_Params.Params.Ingress.fAllowTagged = true;
		SA_Params.Params.Ingress.PreSecTagAuthLength = 12;

		if (phy_macsec_drv->sa_params_ingress_true) {
			SA_Params.TransformRecord_p
			= da_macsec_build_sa(&phy_macsec_drv->transform_params_ingress,
									&SAWordCount);
			debug_phy_driver("\nProgram Key 2 Ingress");
			print_key(phy_macsec_drv->transform_params_ingress.Key_p,
				phy_macsec_drv->transform_params_ingress.KeyByteCount);

			phy_macsec_drv->sa_params_ingress_true = 0;
		} else {

			SA_Params.TransformRecord_p =
				da_macsec_build_sa(&Transform_Params_Ingress2,
								&SAWordCount);
			debug_phy_driver("\nProgram Default Key 2 Ingress");
			print_key(Transform_Params_Basic_Transform_Ingress.Key_p,
					Transform_Params_Basic_Transform_Ingress.KeyByteCount);
		}

		SA_Params.SA_WordCount = SAWordCount;

		SecY_Rc = SecY_SA_Add(ingressDevId, ingressVPort,
					&SecY_IngressSAHandle2, &SA_Params);
		if (SecY_Rc != SECY_STATUS_OK) {
			debug_phy_driver("%s: Failed, SecY_SA_Add()=%d\n",
						__func__, SecY_Rc);
			return MZD_FAIL;
		}

		if (SA_Params.TransformRecord_p) {
			da_macsec_free(SA_Params.TransformRecord_p);
		}

		debug_phy_driver("%s: SA Ingress with Transform Record added\n",
								__func__);
	}

        /* Install second egress SA with transform record */
        {
		mzdMemSet(&SA_Params, 0, sizeof(SA_Params));

		SA_Params.ActionType = SECY_SA_ACTION_EGRESS;
		SA_Params.DropType = SECY_SA_DROP_INTERNAL;
		SA_Params.DestPort = SECY_PORT_COMMON;

		SA_Params.Params.Egress.fProtectFrames = true;
		SA_Params.Params.Egress.fIncludeSCI = true;
		SA_Params.Params.Egress.fConfProtect = true;
		SA_Params.Params.Egress.fAllowDataPkts = true;
		SA_Params.Params.Egress.PreSecTagAuthLength = 12;

		if (phy_macsec_drv->sa_params_egress_true) {
			SA_Params.TransformRecord_p
			= da_macsec_build_sa(&phy_macsec_drv->transform_params_egress,
									&SAWordCount);
			debug_phy_driver("\nProgram Key 2 Egress");
			print_key(phy_macsec_drv->transform_params_egress.Key_p,
			phy_macsec_drv->transform_params_egress.KeyByteCount);

			phy_macsec_drv->sa_params_egress_true = 0;
		} else {
			SA_Params.TransformRecord_p =
				da_macsec_build_sa(&Transform_Params_Egress2,
						&SAWordCount);
			debug_phy_driver("\nDefault Program Key 2 Egress");
			print_key(phy_macsec_drv->transform_params_egress.Key_p,
				phy_macsec_drv->transform_params_egress.KeyByteCount);
		}

		SA_Params.SA_WordCount = SAWordCount;
	}

        /* Use SecY_SA_Chain instead of SecY_SA_Add to add new egress SA. */
        SecY_Rc = SecY_SA_Chain(egressDevId,
                                SecY_EgressSAHandle1,
                                &SecY_EgressSAHandle2,
                                &SA_Params);

	/* Store current reference for next key add */
	resMACSecStuct->SecY_EgressSAHandle = SecY_EgressSAHandle2.p;

	return MZD_OK;
}

MZD_STATUS phy_7121_macsec_pkt_test(int cgx_id,
				int lmac_id,
				PHY_7121_MACSEC_PKTTEST_t cmd)
{
	phy_config_t *phy;
	MZD_U16 lane_offset;
	MZD_U64 rxPktCountAfter, rxByteCountAfter, rxMACSecPktCount, rxMACSecByteCount;
	MZD_U64 rxMACSecPktErrCount, rxMACSecByteErrCount;
	MZD_BOOL readToClear = MZD_FALSE;
	MZD_BOOL dontuseSFDinChecker = MZD_FALSE;
	MZD_BOOL randomIPG = MZD_FALSE;
	MZD_BOOL generateCRCoff = MZD_FALSE;
	MZD_U16 pktPatternControl = 0;
	MZD_U32 initialPayload = 0xAABBCCDD;
	MZD_U16 frameLengthControl = 1000;
	MZD_U16 numPktsToSend = 1000;
	MZD_U16 ipgDuration = 11;

	phy = &plat_octeontx_bcfg->cgx_cfg[cgx_id].lmac_cfg[lmac_id].phy_config;
	lane_offset = phy->port;

	debug_phy_driver("%s cmd %d\n", __func__, cmd);
	switch (cmd) {
	case PHY_7121_MACSEC_PKTTEST_GEN:
		debug_phy_driver("PHY_7121_MACSEC_PKTTEST_CONFIG\n");
		mzdConfigurePktGeneratorChecker(phy->priv, phy->addr,
				MZD_HOST_SIDE, lane_offset, readToClear,
				dontuseSFDinChecker, pktPatternControl,
				generateCRCoff, initialPayload,
				frameLengthControl, numPktsToSend,
				randomIPG, ipgDuration);
		break;

	case PHY_7121_MACSEC_PKTTEST_START:
		debug_phy_driver("PHY_7121_MACSEC_PKTTEST_START\n");
		mzdEnablePktGeneratorChecker(phy->priv, phy->addr,
				MZD_HOST_SIDE, lane_offset,
				MZD_TRUE, MZD_FALSE);
		break;

	case PHY_7121_MACSEC_PKTTEST_STOP:
		debug_phy_driver("PHY_7121_MACSEC_PKTTEST_STOP\n");
		mzdStartStopPktGenTraffic(phy->priv, phy->addr, MZD_HOST_SIDE,
						lane_offset, numPktsToSend);
		break;

	case PHY_7121_MACSEC_PKTTEST_CHECK:
		debug_phy_driver("PHY_7121_MACSEC_PKTTEST_CHECK\n");
		mzdEnablePktGeneratorChecker(phy->priv, phy->addr, MZD_HOST_SIDE,
				  lane_offset, MZD_FALSE, MZD_TRUE);
		break;

	case PHY_7121_MACSEC_PKTTEST_COUNTERS:
		debug_phy_driver("PHY_7121_MACSEC_PKTTEST_COUNTERS\n");
		mzdPktGeneratorGetCounter(phy->priv, phy->addr, MZD_HOST_SIDE, lane_offset,
			  MZD_PKT_GET_RX, &rxPktCountAfter, &rxByteCountAfter);
		printf("mdioPort %d line side clear packet received rxPktCountAfter: %llu"
		" rxByteCountAfter: %llu\n", phy->addr,
			rxPktCountAfter, rxByteCountAfter);
		MZD_ATTEMPT(mzdPktGeneratorGetCounter(phy->priv, phy->addr,
				MZD_HOST_SIDE, lane_offset, MZD_PKT_GET_RX,
				&rxMACSecPktCount, &rxMACSecByteCount));
		MZD_ATTEMPT(mzdPktGeneratorGetCounter(phy->priv, phy->addr,
				MZD_HOST_SIDE, lane_offset, MZD_PKT_GET_ERR,
				&rxMACSecPktErrCount, &rxMACSecByteErrCount));
		printf("EXPECTED  rxMACSecPktCount: %d "
				"rxMACSecByteCount: %d or %d\n", numPktsToSend,
				((frameLengthControl+32+4)*numPktsToSend),
				((frameLengthControl+24+4)*numPktsToSend));
		printf("LINE: rxMACSecPktCount: %llu "
				"rxMACSecByteCount: %llu\n",
				rxMACSecPktCount, rxMACSecByteCount);
		printf("ERROR COUNT LINE: rxMACSecPktErrCount: %llu "
				"rxMACSecByteErrCount: %llu\n\n",
				rxMACSecPktErrCount, rxMACSecByteErrCount);
		break;

	case PHY_7121_MACSEC_PKTTEST_LPBK:
		 debug_phy_driver("PHY_7121_MACSEC_PKTTEST_LPBK\n");
		 MZD_ATTEMPT(mzdSetPCSHostLoopback(phy->priv, phy->addr,
			lane_offset, MZD_PMA_DEEP_LOOPBACK, MZD_ENABLE));
		break;

	default:
		return MZD_FAIL;
	}

	return MZD_OK;
}

MZD_STATUS mzdSampleSetPCSMode(
	IN MZD_DEV_PTR pDev,
	IN MZD_U16  mdioPort,
	IN MZD_U16  laneOffset,
	IN MZD_U32  modeOptionSel,
	IN MZD_MODE_OPTION_STRUCT modeOption,
	IN MZD_OP_MODE hostMode,
	IN MZD_OP_MODE lineMode,
	IN MZD_BOOL pollLinkStatus
)
{
	MZD_STATUS status;
	MZD_U16 latchedStatus;
	MZD_U16 i;
	MZD_U16 currentStatus;
	MZD_U16 result;
	MZD_U16 linkCheckDelay;
	MZD_PCS_LINK_STATUS statusDetail;

	modeOptionSel = MZD_MODE_FORCE_RECONFIG;

	status = mzdSetModeSelection(pDev, mdioPort, laneOffset, hostMode,
				lineMode, modeOptionSel,
				 modeOption, &result);

	if (status != MZD_OK) {
		debug_phy_driver("mzdSetModeSelection failed with result:0x%x\n", result);
		return MZD_FAIL;
	}

	if (pollLinkStatus == MZD_FALSE) {
		return MZD_OK;
	}

	mzdMemSet(&statusDetail, 0, sizeof(MZD_PCS_LINK_STATUS));

	linkCheckDelay = 30;

	for (i = 0; i < linkCheckDelay; i++) {
		status = mzdCheckPCSLinkStatus(pDev, mdioPort, laneOffset, &currentStatus,
				&latchedStatus, &statusDetail);
		if (status == MZD_OK) {
			if (currentStatus == MZD_LINK_UP) {
				debug_phy_driver("%s: link is up"
					       " in %u seconds\n", __func__, i);
				break;
			}
		}
		mdelay(1000);
	}

	if (i >= linkCheckDelay) {
		debug_phy_driver("%s: link is down\n", __func__);
	}

	return status;
}

MZD_STATUS  phy_7121_test_macsec_enable_engines(
	IN MZD_DEV_PTR pDev,
	IN MZD_U16 mdioPort,
	IN MZD_U16 laneOffset
)
{
	MZD_STATUS status;
	MZD_MACSEC_RES_STURCT resMACSecStuct;

	status = mzdMACSecSampleDefaultMatch(pDev,
				   mdioPort,
				   laneOffset,
				   MZD_P25LN,
				   MZD_TRUE,
				   MZD_TRUE,
				   &resMACSecStuct);

	if (status != MZD_OK) {
		debug_phy_driver("test_macsec: test macsec failed\n");
		return MZD_FAIL;
	}

	return MZD_OK;
}

