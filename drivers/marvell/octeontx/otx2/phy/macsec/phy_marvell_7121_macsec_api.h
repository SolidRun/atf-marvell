/*
 * Copyright (C) 2022 Marvell International Ltd.
 *
 * SPDX-License-Identifier:	 BSD-3-Clause
 * https://spdx.org/licenses
 */

#ifndef __PHY_MARVELL_7121_MACSEC_API_H__
#define __PHY_MARVELL_7121_MACSEC_API_H__

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
#include <phy_mgmt_adv_cmds.h>

#include "mzdApiTypes.h"
#include "mzdApiRegs.h"
#include "mzdUtils.h"
#include "mzdAPI.h"
#include "mzdMacAPI.h"
#include "mzdMACSecAPI.h"
#include "mzdDiagnostics.h"

#include "api_cfye.h"
#include "api_secy_types.h"
#include "api_secy.h"
#include "sa_builder_macsec.h"
#include "adapter_cfye_support.h"
#include "da_internal.h"

typedef struct phy_7121_macsec_drv {
	bool sa_params_ingress_true;
	uint8_t key_ingress[MACSEC_KEY_SIZE];
	da_sa_params_t transform_params_ingress;
	bool sa_params_egress_true;
	uint8_t key_egress[MACSEC_KEY_SIZE];
	da_sa_params_t transform_params_egress;
	bool mac_ingress_true;
	MZD_U8 mac_ingress[6];
	bool mac_egress_true;
	MZD_U8 mac_egress[6];

	MZD_UINT ingressVPort;
	MZD_UINT egressVPort;
	MZD_MACSEC_RES_STURCT resMACSecStuct;
} phy_7121_macsec_drv_t;

MZD_STATUS phy_7121_macsec_enable_engines(
	IN MZD_DEV_PTR pDev,
	IN MZD_U16 mdioPort,
	IN MZD_U16 laneOffset,
	IN MZD_U16 mode,
	IN MZD_OP_MODE opMode,
	OUT phy_7121_macsec_drv_t *phy_macsec_drv);

MZD_STATUS phy_7121_macsec_op_api(int cgx_id,
				int lmac_id,
				int macsec_cmd,
				phy_7121_macsec_drv_t *phy_macsec_drv);

MZD_STATUS phy_7121_pkt_test_enable(int cgx_id,
				int lmac_id);

MZD_STATUS phy_7121_macsec_stats(int cgx_id,
			int lmac_id,
			phy_7121_macsec_drv_t *phy_macsec_drv);

MZD_STATUS  phy_7121_macsec_set_mac_da_api(phy_7121_macsec_drv_t *phy_macsec_drv,
			mac_da_t *mac_da);

MZD_STATUS phy_7121_macsec_set_key_api(phy_7121_macsec_drv_t *phy_macsec_drv,
			key_sa_t *key_sa);

MZD_STATUS phy_7121_macsec_pkt_test(int cgx_id,
			int lmac_id,
			PHY_7121_MACSEC_PKTTEST_t cmd);

extern MZD_STATUS mzdMACsecStatistics(
	IN MZD_DEV_PTR pDev,
	IN PMZD_MACSEC_RES_STURCT resMACSecStuct);

extern MZD_STATUS mzdMACsecSampleFreeResources(
	IN MZD_DEV_PTR pDev,
	IN MZD_U16 mdioPort,
	IN MZD_U16 laneOffset,
	IN MZD_BOOL freeDev,
	IN PMZD_MACSEC_RES_STURCT inMACSecStruct);

MZD_STATUS phy_7121_macsec_drv_init(phy_7121_macsec_drv_t *phy_macsec_drv);

MZD_STATUS phy_7121_test_macsec_enable_engines(
	IN MZD_DEV_PTR pDev,
	IN MZD_U16 mdioPort,
	IN MZD_U16 laneOffset);

extern MZD_STATUS mzdMACSecSampleDefaultMatch(
	IN MZD_DEV_PTR pDev,
	IN MZD_U16 mdioPort,
	IN MZD_U16 laneOffset,
	IN MZD_OP_MODE opMode,
	IN MZD_BOOL packetGenTest, /* MZD_TRUE to run packet gen test */
	IN MZD_BOOL freeResources,
	OUT PMZD_MACSEC_RES_STURCT resMACSecStuct);

MZD_STATUS mzdSampleSetPCSMode(
	IN MZD_DEV_PTR pDev,
	IN MZD_U16  mdioPort,
	IN MZD_U16  laneOffset,
	IN MZD_U32  modeOptionSel,
	IN MZD_MODE_OPTION_STRUCT modeOption,
	IN MZD_OP_MODE hostMode,
	IN MZD_OP_MODE lineMode,
	IN MZD_BOOL pollLinkStatus);

MZD_STATUS  phy_7121_get_mac_stats(
	IN MZD_DEV_PTR pDev,
	IN MZD_U16 mdioPort,
	IN MZD_U16 laneOffset);

MZD_STATUS phy_7121_macsec_bypass_engines(
	IN MZD_DEV_PTR pDev,
	IN MZD_U16 mdioPort,
	IN MZD_U16 laneOffset,
	IN MZD_OP_MODE opMode);

MZD_STATUS phy_7121_macsec_rekey(phy_7121_macsec_drv_t *phy_macsec_drv);

#endif
