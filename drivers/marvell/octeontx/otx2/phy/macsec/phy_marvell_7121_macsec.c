/*
 * Copyright (c) 2022 Marvell.
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
	0,
	K1,
	sizeof(K1),
	SCI1,
	NULL,
	NULL,
	0,
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
	0,
	K2,
	sizeof(K2),
	SCI2,
	NULL,
	NULL,
	//PKT_SEQ_NUMBER, /* Sequence number. */
	0,
	0,
	0,
};

#ifdef SA_REKEY
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
#endif

MZD_STATUS phy_7121_macsec_drv_init(phy_7121_macsec_drv_t *phy_macsec_drv)
{
	memset(phy_macsec_drv, 0, sizeof(phy_7121_macsec_drv_t));

	for (int i = 0; i < MAX_SA_PER_PORT; i++) {
		memcpy((void *)&phy_macsec_drv->macsec_sa_ingress[i].transform_params,
			(void *)&Transform_Params_Basic_Transform_Ingress,
			sizeof(da_sa_params_t));

		memcpy((void *)&phy_macsec_drv->macsec_sa_egress[i].transform_params,
			(void *)&Transform_Params_Basic_Transform_Egress,
			sizeof(da_sa_params_t));
	}

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
	MZD_U16 channelID;
	MZD_U8 ingressDevId, egressDevId;
	MZD_U16 mdioPortIndex = MZD_GET_PORT_IDX(pDev, mdioPort);
	CfyE_Status_t CfyE_Rc;
	SecY_Status_t SecY_Rc;
	PMZD_MACSEC_RES_STURCT resMACSecStuct = &phy_macsec_drv->resMACSecStuct;

	if (pDev->macsecCtrl.macsecInitialized == MZD_FALSE) {
		Driver164_Init();
	}

	MZD_ATTEMPT(mzdMacSecMacInit(pDev, mdioPort, MZD_BOTH_SIDE, laneOffset, opMode, mode));

	if (mode ==  MZD_INIT_MACSEC_BYPASS)  {
		MAC_ADV_MACSEC_DBG("MZD_INIT_MACSEC_BYPASS mode set\n");
		return MZD_OK;
	}

	channelID = (mdioPortIndex % 2) ? (laneOffset + MZD_NUM_LANES) : laneOffset;

	MZD_ATTEMPT(mzdMacSecGetAssignedDeviceID(pDev, mdioPort, &ingressDevId, &egressDevId));

	MAC_ADV_MACSEC_DBG("mzdMacSecGetAssignedDeviceID: pDev=%p ingressDevId=%d egressDevId=%d\n",
								pDev, ingressDevId, egressDevId);

	MAC_ADV_MACSEC_DBG("++++++ CfyE initialization started ++++++\n");

	/* Initialize Ingress/Egress EIP-163 configure device CfyE_Device_Init */
	{
		CfyE_Init_t ingressSettings;
		CfyE_Init_t egressSettings;

		MAC_ADV_MACSEC_DBG(" Initializing CfyE\n");

		mzdMemSet(&ingressSettings, 0, sizeof(ingressSettings));
		mzdMemSet(&egressSettings, 0, sizeof(egressSettings));

		if (!(CfyELib_Initialized_Check(ingressDevId, __func__, MZD_FALSE))) {
			CfyE_Rc = CfyE_Device_Init(ingressDevId, CFYE_ROLE_INGRESS,
								&ingressSettings);

			if (CfyE_Rc != CFYE_STATUS_OK) {
				MAC_ADV_MACSEC_DBG(" CfyE ingressDevId=%d could "
					"not be initialized, error=%d\n",
							ingressDevId, CfyE_Rc);
				return MZD_FAIL;
			}
		}

		if (!(CfyELib_Initialized_Check(egressDevId, __func__, MZD_FALSE))) {
			CfyE_Rc = CfyE_Device_Init(egressDevId, CFYE_ROLE_EGRESS, &egressSettings);

			if (CfyE_Rc != CFYE_STATUS_OK) {
				MAC_ADV_MACSEC_DBG(" CfyE egressDevId=%d "
						"could not be egressDevId, error=%d\n",
						ingressDevId, CfyE_Rc);
				return MZD_FAIL;
			}
		}

		MAC_ADV_MACSEC_DBG("++++++ CfyE is initialized successfully++++++\n");
	}

	MAC_ADV_MACSEC_DBG("++++++ Init SecY Engines ++++++\n");
	/* Initialize Ingress/Egress EIP-164 security device SecY_Device_Init */
	{
		SecY_Settings_t ingressSettings;
		SecY_Settings_t egressSettings;

		MAC_ADV_MACSEC_DBG(" Initializing SecY\n");

		mzdMemSet(&ingressSettings, 0, sizeof(ingressSettings));
		mzdMemSet(&egressSettings, 0, sizeof(egressSettings));

		ingressSettings.DropBypass.DropType = SECY_SA_DROP_CRC_ERROR;

		SecY_Rc = SecY_Device_Init(ingressDevId, SECY_ROLE_INGRESS, &ingressSettings);

		if (SecY_Rc != SECY_STATUS_OK) {
			MAC_ADV_MACSEC_DBG(" SecY ingressDevId=%d could not be initialized,"
						"error=%d\n", ingressDevId, SecY_Rc);
			return MZD_FAIL;
		}

		/* Non-matching SA flow packet processing rules */
		/* Default rule is to drop non-matching SA packets */

		egressSettings.DropBypass.DropType =  SECY_SA_DROP_CRC_ERROR;

		SecY_Rc = SecY_Device_Init(egressDevId, SECY_ROLE_EGRESS, &egressSettings);

		if (SecY_Rc != SECY_STATUS_OK) {
			MAC_ADV_MACSEC_DBG(" SecY egressDevId=%d could not be initialized, "
					"error=%d\n", egressDevId, SecY_Rc);
			return MZD_FAIL;
		}

		MAC_ADV_MACSEC_DBG("++++++ SecY is initialized successfully ++++++\n");
	}

	if (resMACSecStuct) {
		mzdMemSet(resMACSecStuct, 0, sizeof(MZD_MACSEC_RES_STURCT));

		resMACSecStuct->mdioPort = mdioPort;
		resMACSecStuct->channelID = channelID;
		resMACSecStuct->ingressDevId = ingressDevId;
		resMACSecStuct->egressDevId = egressDevId;
	}

	return MZD_OK;
}

MZD_STATUS phy_7121_macsec_vport_add_ingress(phy_7121_macsec_drv_t *phy_macsec_drv)
{
	CfyE_vPortHandle_t CfyE_IngressVPortHandle = CfyE_vPortHandle_NULL;
	CfyE_RuleHandle_t CfyE_IngressRuleHandle = CfyE_RuleHandle_NULL;

	MZD_UINT ingressVPort;

	CfyE_vPort_t vPortParams;
	CfyE_Rule_t RuleParams;

	CfyE_Status_t CfyE_Rc;
	MZD_U8 *p;

	PMZD_MACSEC_RES_STURCT resMACSecStuct = &phy_macsec_drv->resMACSecStuct;
	MZD_U16 channelID = resMACSecStuct->channelID;

	MZD_U8 ingressDevId = resMACSecStuct->ingressDevId;

	MAC_ADV_MACSEC_DBG("++++++ Ingress v-port Policy ++++++\n");
	mzdMemSet(&vPortParams, 0, sizeof(vPortParams));
	vPortParams.SecTagOffset = 12;

	CfyE_Rc = CfyE_vPort_Add(ingressDevId, &CfyE_IngressVPortHandle,
			&vPortParams, SECY_MODE_MACSEC);
	if (CfyE_Rc != CFYE_STATUS_OK) {
		MAC_ADV_MACSEC_DBG(" Failed, ingressDevId=%d CfyE_vPort_Add()=%d\n",
			   ingressDevId, CfyE_Rc);
		return MZD_FAIL;
	}

	CfyE_vPortIndex_Get(CfyE_IngressVPortHandle, &ingressVPort);

	MAC_ADV_MACSEC_DBG(" ingressVPort id:%d added\n", ingressVPort);

	mzdMemSet(&RuleParams, 0, sizeof(RuleParams));

	RuleParams.Policy.vPortHandle = CfyE_IngressVPortHandle;

	RuleParams.Mask.PacketType = CFYE_RULE_PKT_TYPE_OTHER;

	RuleParams.Mask.ChannelID = 0xFF;
	RuleParams.Mask.NumTags = 0x00;

	RuleParams.Key.PacketType = CFYE_RULE_PKT_TYPE_OTHER;
	RuleParams.Key.ChannelID = channelID;
	RuleParams.Key.NumTags = 0x00;

	RuleParams.DataMask[0] = 0x00000000;
	RuleParams.DataMask[1] = 0x00000000;

	if (phy_macsec_drv->mac_ingress_true)  {
		p = phy_macsec_drv->mac_ingress;
	} else {
		p = MAC_DA;
	}

	print_key(p, 6);

	//RuleParams.Data[0] = p[0] | (p[1] << 8) | (p[2] << 16) | (p[3] << 24);
	RuleParams.Data[0] = p[0] | (channelID << 4) | (p[1] << 8)
			| (p[2] << 16) | (p[3] << 24);
	RuleParams.Data[1] = p[4] | (p[5] << 8);

	MAC_ADV_MACSEC_DBG("\nRuleParams.DataMask[0] %x RuleParams.DataMask[1] %xn",
			RuleParams.DataMask[0], RuleParams.DataMask[1]);

	MAC_ADV_MACSEC_DBG("\nRuleParams.Data[0] %x RuleParams.Data[1] %x\n",
			RuleParams.Data[0], RuleParams.Data[1]);

	CfyE_Rc = CfyE_Rule_Add(ingressDevId, CfyE_IngressVPortHandle,
			&CfyE_IngressRuleHandle, &RuleParams);

	if (CfyE_Rc != CFYE_STATUS_OK) {
		MAC_ADV_MACSEC_DBG(" Failed, CfyE_Rule_Add()=%d\n", CfyE_Rc);
		return MZD_FAIL;
	}

	CfyE_Rc = CfyE_Rule_Enable(ingressDevId, CfyE_IngressRuleHandle, MZD_TRUE);
	if (CfyE_Rc != CFYE_STATUS_OK) {
		MAC_ADV_MACSEC_DBG(" Failed, CfyE_Rule_Enable()=%d\n", CfyE_Rc);
		return MZD_FAIL;
	}

	phy_macsec_drv->ingressVPort = ingressVPort;

	if (resMACSecStuct) {
		resMACSecStuct->CfyE_IngressRuleHandle = CfyE_IngressRuleHandle;
		resMACSecStuct->CfyE_IngressVPortHandle = CfyE_IngressVPortHandle;
	}

	MAC_ADV_MACSEC_DBG("++++++ Ingress v-port Policy Added ++++++\n");
	return MZD_OK;
}

MZD_STATUS phy_7121_macsec_vport_add_egress(phy_7121_macsec_drv_t *phy_macsec_drv)
{
	CfyE_vPortHandle_t CfyE_EgressVPortHandle = CfyE_vPortHandle_NULL;
	CfyE_RuleHandle_t CfyE_EgressRuleHandle = CfyE_RuleHandle_NULL;

	MZD_UINT egressVPort;

	CfyE_vPort_t vPortParams;
	CfyE_Rule_t RuleParams;
	CfyE_Status_t CfyE_Rc;
	MZD_U8 *p;

	PMZD_MACSEC_RES_STURCT resMACSecStuct = &phy_macsec_drv->resMACSecStuct;
	MZD_U16 channelID = resMACSecStuct->channelID;

	MZD_U8 egressDevId = resMACSecStuct->egressDevId;

	vPortParams.PktExtension = 3; /* egress packet extension */

	MAC_ADV_MACSEC_DBG("++++++ Egress v-port policy ++++++\n");

	CfyE_Rc = CfyE_vPort_Add(egressDevId, &CfyE_EgressVPortHandle,
				&vPortParams, SECY_MODE_MACSEC);
	if (CfyE_Rc != CFYE_STATUS_OK) {
		MAC_ADV_MACSEC_DBG(" Failed, egressDevId=%d CfyE_vPort_Add()=%d\n",
			   egressDevId, CfyE_Rc);
		return MZD_FAIL;
	}

	CfyE_vPortIndex_Get(CfyE_EgressVPortHandle, &egressVPort);

	MAC_ADV_MACSEC_DBG(" egressVPort id:%d added\n", egressVPort);

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
	} else  {
		p = MAC_DA;
	}

	print_key(p, 6);

	//RuleParams.Data[0] = p[0] | (p[1] << 8) | (p[2] << 16) | (p[3] << 24);
	RuleParams.Data[0] = p[0] | (channelID << 4) | (p[1] << 8)
			| (p[2] << 16) | (p[3] << 24);
	RuleParams.Data[1] = p[4] | (p[5] << 8);

	MAC_ADV_MACSEC_DBG("\nRuleParams.DataMask[0] %x RuleParams.DataMask[1] %xn",
			RuleParams.DataMask[0], RuleParams.DataMask[1]);

	MAC_ADV_MACSEC_DBG("\nRuleParams.Data[0] %x RuleParams.Data[1] %xn",
			RuleParams.Data[0], RuleParams.Data[1]);

	CfyE_Rc = CfyE_Rule_Add(egressDevId, CfyE_EgressVPortHandle,
			&CfyE_EgressRuleHandle, &RuleParams);

	if (CfyE_Rc != CFYE_STATUS_OK) {
		MAC_ADV_MACSEC_DBG(" Failed, CfyE_Rule_Add()=%d\n", CfyE_Rc);
		return MZD_FAIL;
	}

	CfyE_Rc = CfyE_Rule_Enable(egressDevId, CfyE_EgressRuleHandle, MZD_TRUE);
	if (CfyE_Rc != CFYE_STATUS_OK) {
		MAC_ADV_MACSEC_DBG(" Failed, egressDevId=%d CfyE_Rule_Enable()=%d\n",
			   egressDevId, CfyE_Rc);
		return MZD_FAIL;
	}

	MAC_ADV_MACSEC_DBG(" Rule enabled\n");

	phy_macsec_drv->egressVPort = egressVPort;

	if (resMACSecStuct) {
		resMACSecStuct->CfyE_EgressRuleHandle = CfyE_EgressRuleHandle;
		resMACSecStuct->CfyE_EgressVPortHandle = CfyE_EgressVPortHandle;
	}

	MAC_ADV_MACSEC_DBG("++++++ Egress v-port policy Done ++++++\n");
	return MZD_OK;
}

MZD_STATUS phy_7121_macsec_sa_add_ingress(phy_7121_macsec_drv_t *phy_macsec_drv,
					macsec_sa_params_t *sa_params)
{
	SecY_SA_t SA_Params;
	MZD_U32 SAWordCount = 0;

	SecY_Status_t SecY_Rc;
	SecY_SAHandle_t SecY_IngressSAHandle;

	uint8_t curr_sa = sa_params->sa_num;

	PMZD_MACSEC_RES_STURCT resMACSecStuct = &phy_macsec_drv->resMACSecStuct;

	MZD_UINT ingressVPort = phy_macsec_drv->ingressVPort;
	MZD_U8 ingressDevId = resMACSecStuct->ingressDevId;

	MAC_ADV_MACSEC_DBG("++++++ Ingress  SecY policy Set ++++++\n");
	mzdMemSet(&SA_Params, 0, sizeof(SA_Params));

	/* DA_MACSEC_MODE_INGRESS */
	if (phy_macsec_drv->macsec_sa_ingress[curr_sa].is_actiontype)  {
		SA_Params.ActionType = phy_macsec_drv->macsec_sa_ingress[curr_sa].actiontype;
		MAC_ADV_MACSEC_DBG("\nProgram ActionType Ingress SA %d DropType %d",
				curr_sa, SA_Params.ActionType);
	} else
		SA_Params.ActionType = SECY_SA_ACTION_INGRESS;

	if (phy_macsec_drv->macsec_sa_ingress[curr_sa].is_droptype)  {
		SA_Params.DropType = phy_macsec_drv->macsec_sa_ingress[curr_sa].droptype;
		MAC_ADV_MACSEC_DBG("\nProgram DropType Ingress SA %d DropType %d",
				curr_sa, SA_Params.DropType);
	} else
		SA_Params.DropType = SECY_SA_DROP_CRC_ERROR;

	SA_Params.DestPort = SECY_PORT_CONTROLLED;

	SA_Params.Params.Ingress.ValidateFramesTagged = SECY_FRAME_VALIDATE_STRICT;
	//SA_Params.Params.Ingress.ValidateFramesTagged = SECY_FRAME_VALIDATE_DISABLE;

	SA_Params.Params.Ingress.fReplayProtect = true;
	if (phy_macsec_drv->macsec_sa_ingress[curr_sa].sci_id.sci_flag) {
		SA_Params.Params.Ingress.SCI_p =
			phy_macsec_drv->macsec_sa_ingress[curr_sa].transform_params.SCI_p;

		SA_Params.Params.Ingress.AN = curr_sa;

		MAC_ADV_MACSEC_DBG("\nProgram SCI Ingress SA %d AN %d",
				curr_sa, SA_Params.Params.Ingress.AN);
		print_key(SA_Params.Params.Ingress.SCI_p, MACSEC_SCI_SIZE);
	} else {
		SA_Params.Params.Ingress.SCI_p =
			da_macsec_discard_const(SCI_Basic_Transform_Ingress_p);
		SA_Params.Params.Ingress.AN = *TCI_AN_Basic_Transform_Ingress_p & 3;

		MAC_ADV_MACSEC_DBG("\nProgram Default SCI Ingress SA %d AN %d",
				curr_sa, SA_Params.Params.Ingress.AN);
		print_key(SA_Params.Params.Ingress.SCI_p, MACSEC_SCI_SIZE);
	}

	SA_Params.Params.Ingress.fAllowTagged = true;
	SA_Params.Params.Ingress.PreSecTagAuthLength = 12;

	if ((phy_macsec_drv->macsec_sa_ingress[curr_sa].macsec_key.key_flag)
		|| (phy_macsec_drv->macsec_sa_ingress[curr_sa].sci_id.sci_flag)) {
		SA_Params.TransformRecord_p
		= da_macsec_build_sa(&phy_macsec_drv->macsec_sa_ingress[curr_sa].transform_params,
					 &SAWordCount);
		MAC_ADV_MACSEC_DBG("\nProgram Key Ingress SA %d", curr_sa);
		print_key(phy_macsec_drv->macsec_sa_ingress[curr_sa].transform_params.Key_p,
			phy_macsec_drv->macsec_sa_ingress[curr_sa].transform_params.KeyByteCount);

		MAC_ADV_MACSEC_DBG("\nProgram SCI Ingress SA %d", curr_sa);
		print_key(phy_macsec_drv->macsec_sa_ingress[curr_sa].transform_params.SCI_p,
									MACSEC_SCI_SIZE);

	} else {
		SA_Params.TransformRecord_p
		= da_macsec_build_sa(&Transform_Params_Basic_Transform_Ingress,
					 &SAWordCount);
		MAC_ADV_MACSEC_DBG("\nProgram Default Key Ingress");
		print_key(Transform_Params_Basic_Transform_Ingress.Key_p,
			Transform_Params_Basic_Transform_Ingress.KeyByteCount);
	}

	SA_Params.SA_WordCount = SAWordCount;

	SecY_Rc = SecY_SA_Add(ingressDevId, ingressVPort, &SecY_IngressSAHandle,
					 &SA_Params);
	if (SecY_Rc != SECY_STATUS_OK) {
		MAC_ADV_MACSEC_DBG(" Failed, SecY_SA_Add()=%d\n", SecY_Rc);
		SecY_Device_Uninit(ingressDevId);
		return MZD_FAIL;
	}

	MAC_ADV_MACSEC_DBG(" Transform 32-bit word count %d\n",
				SA_Params.SA_WordCount);

	Log_HexDump32("Ingress Transform data",
		0,
		SA_Params.TransformRecord_p,
		SA_Params.SA_WordCount);

	if (SA_Params.TransformRecord_p) {
		da_macsec_free(SA_Params.TransformRecord_p);
	}

	MAC_ADV_MACSEC_DBG(" SA Ingress with Transform Record added\n");

	MAC_ADV_MACSEC_DBG("****** Set Ingress SecY policy DONE  ******\n");
	if (resMACSecStuct) {
		resMACSecStuct->SecY_IngressSAHandle = SecY_IngressSAHandle.p;
	}
	MAC_ADV_MACSEC_DBG("++++++ Ingress SecY policy Done ++++++\n");

	return MZD_OK;
}

MZD_STATUS phy_7121_macsec_sa_add_egress(phy_7121_macsec_drv_t *phy_macsec_drv,
						macsec_sa_params_t *sa_params)
{
	SecY_SA_t SA_Params;
	MZD_U32 SAWordCount = 0;

	SecY_Status_t SecY_Rc;
	SecY_SAHandle_t SecY_EgressSAHandle;

	uint8_t curr_sa = sa_params->sa_num;

	PMZD_MACSEC_RES_STURCT resMACSecStuct = &phy_macsec_drv->resMACSecStuct;

	MZD_UINT egressVPort = phy_macsec_drv->egressVPort;
	MZD_U8 egressDevId = resMACSecStuct->egressDevId;

	MAC_ADV_MACSEC_DBG("++++++ Egress SecY policy ++++++\n");

	mzdMemSet(&SA_Params, 0, sizeof(SA_Params));

	/* DA_MACSEC_MODE_EGRESS */
	if (phy_macsec_drv->macsec_sa_egress[curr_sa].is_actiontype)  {
		SA_Params.ActionType = phy_macsec_drv->macsec_sa_egress[curr_sa].actiontype;
		MAC_ADV_MACSEC_DBG("\nProgram ActionType Egress SA %d DropType %d",
				curr_sa, SA_Params.ActionType);
	} else
		SA_Params.ActionType = SECY_SA_ACTION_EGRESS;

	if (phy_macsec_drv->macsec_sa_egress[curr_sa].is_droptype)  {
		SA_Params.DropType = phy_macsec_drv->macsec_sa_egress[curr_sa].droptype;
		MAC_ADV_MACSEC_DBG("\nProgram DropType Egress SA %d DropType %d",
				curr_sa, SA_Params.DropType);
	} else
		SA_Params.DropType = SECY_SA_DROP_CRC_ERROR;

	SA_Params.DestPort = SECY_PORT_COMMON;

	SA_Params.Params.Egress.fProtectFrames = true;
	SA_Params.Params.Egress.fIncludeSCI = true;
	SA_Params.Params.Egress.fConfProtect = true;
	SA_Params.Params.Egress.fAllowDataPkts = true;
	SA_Params.Params.Egress.PreSecTagAuthLength = 12;

	if ((phy_macsec_drv->macsec_sa_egress[curr_sa].macsec_key.key_flag)
		|| (phy_macsec_drv->macsec_sa_egress[curr_sa].sci_id.sci_flag))	{

		phy_macsec_drv->macsec_sa_egress[curr_sa].transform_params.AN = curr_sa;
		MAC_ADV_MACSEC_DBG("\nProgram AN  %d",
				phy_macsec_drv->macsec_sa_egress[curr_sa].transform_params.AN);

		SA_Params.TransformRecord_p
		= da_macsec_build_sa(&phy_macsec_drv->macsec_sa_egress[curr_sa].transform_params,
					 &SAWordCount);
		MAC_ADV_MACSEC_DBG("\nProgram Key Egress curr_sa %d", curr_sa);
		print_key(phy_macsec_drv->macsec_sa_egress[curr_sa].transform_params.Key_p,
			phy_macsec_drv->macsec_sa_egress[curr_sa].transform_params.KeyByteCount);
		MAC_ADV_MACSEC_DBG("\nProgram SCI Egress SA %d", curr_sa);
		print_key(phy_macsec_drv->macsec_sa_egress[curr_sa].transform_params.SCI_p,
									MACSEC_SCI_SIZE);
	} else {
		SA_Params.TransformRecord_p
		= da_macsec_build_sa(&Transform_Params_Basic_Transform_Egress,
					 &SAWordCount);
		MAC_ADV_MACSEC_DBG("\nDefault Program Key Egress");
		print_key(Transform_Params_Basic_Transform_Egress.Key_p,
			Transform_Params_Basic_Transform_Egress.KeyByteCount);
	}

	SA_Params.SA_WordCount = SAWordCount;

	SecY_Rc = SecY_SA_Add(egressDevId, egressVPort, &SecY_EgressSAHandle, &SA_Params);

	if (SecY_Rc != SECY_STATUS_OK) {
		MAC_ADV_MACSEC_DBG(" Failed, egressDevId %d, SecY_SA_Add()=%d\n",
			  egressDevId, SecY_Rc);
		SecY_Device_Uninit(egressDevId);
		return MZD_FAIL;
	}

	MAC_ADV_MACSEC_DBG(" Transform 32-bit word count %d\n", SA_Params.SA_WordCount);

	Log_HexDump32("Egress Transform data",
		0,
		SA_Params.TransformRecord_p,
		SA_Params.SA_WordCount);

	if (SA_Params.TransformRecord_p) {
		da_macsec_free(SA_Params.TransformRecord_p);
	}

	MAC_ADV_MACSEC_DBG(" SA Egress with Transform Record added\n");

	if (resMACSecStuct) {
		resMACSecStuct->SecY_EgressSAHandle = SecY_EgressSAHandle.p;
	}

	MAC_ADV_MACSEC_DBG("++++++ Egress SecY Policy Done ++++++\n");
	return MZD_OK;
}

MZD_STATUS phy_7121_macsec_sa_del_ingress(phy_7121_macsec_drv_t *phy_macsec_drv,
						macsec_sa_params_t *sa_params)
{
	SecY_SAHandle_t SecY_IngressSAHandle;

	PMZD_MACSEC_RES_STURCT resMACSecStuct = &phy_macsec_drv->resMACSecStuct;

	MZD_U8 ingressDevId = resMACSecStuct->ingressDevId;

	SecY_IngressSAHandle.p = resMACSecStuct->SecY_IngressSAHandle;

	SecY_SA_Remove(ingressDevId, SecY_IngressSAHandle);

	return MZD_OK;
}

MZD_STATUS phy_7121_macsec_sa_del_egress(phy_7121_macsec_drv_t *phy_macsec_drv,
						macsec_sa_params_t *sa_params)
{
	SecY_SAHandle_t SecY_EgressSAHandle;

	PMZD_MACSEC_RES_STURCT resMACSecStuct = &phy_macsec_drv->resMACSecStuct;

	MZD_U8 egressDevId = resMACSecStuct->egressDevId;

	SecY_EgressSAHandle.p = resMACSecStuct->SecY_EgressSAHandle;

	SecY_SA_Remove(egressDevId, SecY_EgressSAHandle);

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
		MAC_ADV_MACSEC_DBG("test_macsec: test macsec failed\n");
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

	MAC_ADV_MACSEC_DBG("%s ingressDevId %d, egressDevId %d\n", __func__,
						ingressDevId, egressDevId);
	{
		SecY_SA_Stat_I_t SAStats;

		ZEROINIT(SAStats);

		printf("\nCfyE_Diag_Device_Dump(ingressDevId)=%d\n",
								ingressDevId);
		CfyE_Rc = CfyE_Diag_Device_Dump(ingressDevId);
		if (CfyE_Rc != CFYE_STATUS_OK) {
			MAC_ADV_MACSEC_DBG("CfyE_Diag_Device_Dump: Failed,"
					" CfyE_Diag_Device_Dump(ingressDevId)=%d\n", CfyE_Rc);
			goto error_exit;
		}

		printf("\nSecY_Diag_Device_Dump(ingressDevId)=%d\n", CfyE_Rc);
		SecY_Rc = SecY_Diag_Device_Dump(ingressDevId);
		if (SecY_Rc != SECY_STATUS_OK) {
			MAC_ADV_MACSEC_DBG("SecY_Diag_Device_Dump: Failed,"
				"SecY_Diag_Device_Dump(ingressDevId)=%d\n", SecY_Rc);
			goto error_exit;
		}

		/* Read the SA ingress statistics counters, */
		/* request device synchronization before reading out the statistics */
		printf("\nSA ingress statistics counters\n");
		SecY_Rc = SecY_SA_Statistics_I_Get(ingressDevId,
						   SecY_IngressSAHandle,
						   &SAStats,
						   true);
		if (SecY_Rc != SECY_STATUS_OK) {
			MAC_ADV_MACSEC_DBG("SecY_SA_Statistics_I_Get: Failed,"
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
		printf("\nSecY ingress statistics counters\n");
		SecY_Rc = SecY_SecY_Statistics_I_Get(ingressDevId,
						 ingressVPort,
						 &SecYStats,
						 true);
		if (SecY_Rc != SECY_STATUS_OK) {
			MAC_ADV_MACSEC_DBG("SecY_SecY_Statistics_I_Get: Failed,"
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
		printf("\nIFC/IFC1  ingress statistics counters\n");
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

		printf("\nCfyE_Diag_Device_Dump(egressDevId)=%d\n", CfyE_Rc);
		CfyE_Rc = CfyE_Diag_Device_Dump(egressDevId);
		if (CfyE_Rc != CFYE_STATUS_OK) {
			MAC_ADV_MACSEC_DBG("CfyE_Diag_Device_Dump: Failed,"
				" CfyE_Diag_Device_Dump(egressDevId)=%d\n", CfyE_Rc);
			goto error_exit;
		}

		printf("\nSecY_Diag_Device_Dump(egressDevId)=%d\n", CfyE_Rc);

		SecY_Rc = SecY_Diag_Device_Dump(egressDevId);
		if (SecY_Rc != SECY_STATUS_OK) {
			printf("SecY_Diag_Device_Dump: Failed,"
				" SecY_Diag_Device_Dump(egressDevId)=%d\n", SecY_Rc);
			goto error_exit;
		}

		/* Read out egress SA statistics, */
		/* request device synchronization before reading out statistics */
		printf("\nEgress SA statistics %d\n", CfyE_Rc);
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
		printf("SecY_SA_Statistics_E_Get: Egress SA Statistics:\n"
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
				MAC_ADV_MACSEC_DBG("mzdMACSecSampleSecyCfyeTransform: Failed,"
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
				MAC_ADV_MACSEC_DBG("SecY_Ifc_Statistics_E_Get: Failed,"
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

#ifdef SA_REKEY
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

		if (phy_macsec_drv->macsec_sa_ingress[0].) {
			SA_Params.TransformRecord_p
			= da_macsec_build_sa(
			&phy_macsec_drv->macsec_sa_ingress[phy_macsec_drv->macsec_sa_ingress,
									&SAWordCount);
			MAC_ADV_MACSEC_DBG("\nProgram Key 2 Ingress");
			print_key(phy_macsec_drv->transform_params_ingress.Key_p,
				phy_macsec_drv->transform_params_ingress.KeyByteCount);

			phy_macsec_drv->sa_params_ingress_true = 0;
		} else {

			SA_Params.TransformRecord_p =
				da_macsec_build_sa(&Transform_Params_Ingress2,
								&SAWordCount);
			MAC_ADV_MACSEC_DBG("\nProgram Default Key 2 Ingress");
			print_key(Transform_Params_Basic_Transform_Ingress.Key_p,
					Transform_Params_Basic_Transform_Ingress.KeyByteCount);
		}

		SA_Params.SA_WordCount = SAWordCount;

		SecY_Rc = SecY_SA_Add(ingressDevId, ingressVPort,
					&SecY_IngressSAHandle2, &SA_Params);
		if (SecY_Rc != SECY_STATUS_OK) {
			MAC_ADV_MACSEC_DBG("%s: Failed, SecY_SA_Add()=%d\n",
						__func__, SecY_Rc);
			return MZD_FAIL;
		}

		if (SA_Params.TransformRecord_p) {
			da_macsec_free(SA_Params.TransformRecord_p);
		}

		MAC_ADV_MACSEC_DBG("%s: SA Ingress with Transform Record added\n",
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
			MAC_ADV_MACSEC_DBG("\nProgram Key 2 Egress");
			print_key(phy_macsec_drv->transform_params_egress.Key_p,
			phy_macsec_drv->transform_params_egress.KeyByteCount);

			phy_macsec_drv->sa_params_egress_true = 0;
		} else {
			SA_Params.TransformRecord_p =
				da_macsec_build_sa(&Transform_Params_Egress2,
						&SAWordCount);
			MAC_ADV_MACSEC_DBG("\nDefault Program Key 2 Egress");
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
#endif

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

	MAC_ADV_MACSEC_DBG("%s cmd %d\n", __func__, cmd);
	switch (cmd) {
	case PHY_7121_MACSEC_PKTTEST_GEN:
		MAC_ADV_MACSEC_DBG("PHY_7121_MACSEC_PKTTEST_CONFIG\n");
		mzdConfigurePktGeneratorChecker(phy->priv, phy->addr,
				MZD_HOST_SIDE, lane_offset, readToClear,
				dontuseSFDinChecker, pktPatternControl,
				generateCRCoff, initialPayload,
				frameLengthControl, numPktsToSend,
				randomIPG, ipgDuration);
		break;

	case PHY_7121_MACSEC_PKTTEST_START:
		MAC_ADV_MACSEC_DBG("PHY_7121_MACSEC_PKTTEST_START\n");
		mzdEnablePktGeneratorChecker(phy->priv, phy->addr,
				MZD_HOST_SIDE, lane_offset,
				MZD_TRUE, MZD_FALSE);
		break;

	case PHY_7121_MACSEC_PKTTEST_STOP:
		MAC_ADV_MACSEC_DBG("PHY_7121_MACSEC_PKTTEST_STOP\n");
		mzdStartStopPktGenTraffic(phy->priv, phy->addr, MZD_HOST_SIDE,
						lane_offset, numPktsToSend);
		break;

	case PHY_7121_MACSEC_PKTTEST_CHECK:
		MAC_ADV_MACSEC_DBG("PHY_7121_MACSEC_PKTTEST_CHECK\n");
		mzdEnablePktGeneratorChecker(phy->priv, phy->addr, MZD_HOST_SIDE,
				  lane_offset, MZD_FALSE, MZD_TRUE);
		break;

	case PHY_7121_MACSEC_PKTTEST_COUNTERS:
		MAC_ADV_MACSEC_DBG("PHY_7121_MACSEC_PKTTEST_COUNTERS\n");
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
		 MAC_ADV_MACSEC_DBG("PHY_7121_MACSEC_PKTTEST_LPBK\n");
		 MZD_ATTEMPT(mzdSetPCSHostLoopback(phy->priv, phy->addr,
			lane_offset, MZD_PMA_DEEP_LOOPBACK, MZD_ENABLE));
		break;

	default:
		return MZD_FAIL;
	}

	return MZD_OK;
}
