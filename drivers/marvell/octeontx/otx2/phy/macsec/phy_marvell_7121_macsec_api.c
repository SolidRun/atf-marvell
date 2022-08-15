/*
 * Copyright (C) 2022 Marvell.
 *
 * SPDX-License-Identifier:     BSD-3-Clause
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
#include "api_secy_types.h"
#include "api_secy.h"
#include "sa_builder_macsec.h"
#include "adapter_cfye_support.h"
#include "da_internal.h"
#include "api_cfye_ext.h"
#include "api_secy_ext.h"

#include "phy_marvell_7121_macsec_api.h"

MZD_STATUS  phy_7121_macsec_set_mac_da_api(phy_7121_macsec_drv_t *phy_macsec_drv,
						mac_da_t *mac_da)
{
	debug_phy_driver("%s: mac_da->mac %s\n", __func__, (char *)mac_da->mac);

	switch (mac_da->dir) {
	case PHY_7121_MACSEC_INGRESS:
		phy_macsec_drv->mac_ingress_true = true;
		for (int i = 0; i < 6; i++) {
			phy_macsec_drv->mac_ingress[i] = mac_da->mac[i];
			debug_phy_driver("%s: mac_da->mac[%d] = %x"
				" phy_macsec_drv->mac_ingress[%d] = %x\n",
				__func__, i, (unsigned int)mac_da->mac[i], i,
				phy_macsec_drv->mac_ingress[i]);
		}

		debug_phy_driver("%s: INGRESS phy_macsec_drv->mac_da.mac %s\n",
				__func__, (char *)phy_macsec_drv->mac_ingress);
		break;
	case PHY_7121_MACSEC_EGRESS:
		phy_macsec_drv->mac_egress_true = true;
		for (int i = 0; i < 6; i++) {
			phy_macsec_drv->mac_egress[i] = mac_da->mac[i];
			debug_phy_driver("%s: mac_da->mac[%d] = %x"
				" phy_macsec_drv->mac_egress[%d] = %x\n",
				__func__, i, (unsigned int)mac_da->mac[i], i,
				phy_macsec_drv->mac_egress[i]);
		}

		debug_phy_driver("%s: EGRESS phy_macsec_drv->mac_da.mac %s\n",
				__func__, (char *)phy_macsec_drv->mac_egress);
		break;
	}

	return MZD_OK;
}

MZD_STATUS phy_7121_macsec_set_key_api(phy_7121_macsec_drv_t *phy_macsec_drv,
							key_sa_t *key_sa)
{
	if (key_sa->dir == PHY_7121_MACSEC_INGRESS) {

		phy_macsec_drv->transform_params_ingress.Key_p
							= phy_macsec_drv->key_ingress;
		phy_macsec_drv->transform_params_ingress.KeyByteCount = key_sa->key_size;
		debug_phy_driver("%s: INGRESS key_sa->key_size %d key_sa->key %s "
			" phy_macsec_drv->transform_params_ingress.KeyByteCount %d\n",
			__func__, key_sa->key_size, key_sa->key,
			phy_macsec_drv->transform_params_ingress.KeyByteCount);

		memset((char *)phy_macsec_drv->transform_params_ingress.Key_p, '\0',
								key_sa->key_size + 1);

		strlcpy((char *)phy_macsec_drv->transform_params_ingress.Key_p,
				(char *)key_sa->key, key_sa->key_size + 1);

		debug_phy_driver("%s: phy_macsec_drv->transform_params_ingress.Key_p %s\n",
				__func__, phy_macsec_drv->transform_params_ingress.Key_p);
		phy_macsec_drv->sa_params_ingress_true = true;

	} else if (key_sa->dir == PHY_7121_MACSEC_EGRESS) {

		phy_macsec_drv->transform_params_egress.Key_p
							= phy_macsec_drv->key_ingress;

		phy_macsec_drv->transform_params_egress.KeyByteCount = key_sa->key_size;
		debug_phy_driver("%s: EGRESS key_sa->key_size %d key_sa->key %s "
				"phy_macsec_drv->transform_params_egress.KeyByteCount %d\n",
				__func__, key_sa->key_size, key_sa->key,
				phy_macsec_drv->transform_params_egress.KeyByteCount);

		memset((char *)phy_macsec_drv->transform_params_egress.Key_p, '\0',
					key_sa->key_size + 1);

		strlcpy((char *)phy_macsec_drv->transform_params_egress.Key_p,
					(char *)key_sa->key,
					key_sa->key_size + 1);

		debug_phy_driver("%s: phy_macsec_drv->transform_params_egress.Key_p %s\n",
				__func__, phy_macsec_drv->transform_params_egress.Key_p);
		phy_macsec_drv->sa_params_egress_true = true;
	} else {
		return MZD_FAIL;
	}

	return MZD_OK;
}

MZD_STATUS phy_7121_macsec_op_api(int cgx_id,
				int lmac_id,
				int macsec_cmd,
				phy_7121_macsec_drv_t *phy_macsec_drv)
{
	MZD_STATUS status = MZD_FAIL;
	phy_config_t *phy;
	MZD_U16 lane;
	//MZD_U16 mode;
#ifndef MODE_DEBUG
	MZD_DEV_PTR pDev;
	MZD_OP_MODE lineMode;
	MZD_U16 mdio_port_index;
#endif
	phy = &plat_octeontx_bcfg->cgx_cfg[cgx_id].lmac_cfg[lmac_id].phy_config;
	lane = phy->port;

#ifndef MODE_DEBUG
	pDev = phy->priv;
	mdio_port_index = MZD_GET_PORT_IDX(pDev, phy->addr);
	//hostMode = pDev->hostConfig[mdio_port_index][lane].opMode;
	lineMode = pDev->lineConfig[mdio_port_index][lane].opMode;
	debug_phy_driver("%s opMode %d\n", __func__, lineMode);
#endif
	switch (macsec_cmd) {
	case PHY_MAC_ADV_MACSEC_ENABLE:
		debug_phy_driver("%s PHY_MAC_ADV_MACSEC_ENABLE %d \n",
							__func__, macsec_cmd);
		status = phy_7121_macsec_enable_engines(phy->priv,
				   phy->addr,
				   lane,
				   MZD_INIT_MACSEC_ENABLE,
#ifdef MODE_DEBUG
				   //MZD_P10LN,
				   MZD_P25LN,
#else
				   lineMode,
#endif
				   phy_macsec_drv);

		break;
	case  PHY_MAC_ADV_MACSEC_BYPASS:
		debug_phy_driver("%s PHY_MAC_ADV_MACSEC_BYPASS %d\n",
							__func__, macsec_cmd);
		status = phy_7121_macsec_bypass_engines(phy->priv,
				   phy->addr,
				   lane,
#ifdef MODE_DEBUG
				   //MZD_P10LN,
				   MZD_P25LN
#else
				   lineMode
#endif
				);
		break;
	case PHY_MAC_ADV_MACSEC_PTP:
		debug_phy_driver("%s PHY_MAC_ADV_MACSEC_PTP %d\n",
							__func__, macsec_cmd);
		status = phy_7121_macsec_enable_engines(phy->priv,
				   phy->addr,
				   lane,
				   MZD_INIT_MACSEC_ENABLE | MZD_INIT_PTP,
				   lineMode,
				   phy_macsec_drv);

		break;
	case  PHY_MAC_ADV_MACSEC_TEST:
		debug_phy_driver("%s PHY_MAC_ADV_MACSEC_TEST %d\n",
						__func__, macsec_cmd);
		status = phy_7121_test_macsec_enable_engines(phy->priv,
						phy->addr, lane);
		break;
	default:
		debug_phy_driver("%s Invalid command %d\n",
						__func__, macsec_cmd);
		return MZD_FAIL;
	}

	if (status != MZD_OK) {
		MZD_DBG_ERROR("test_macsec: test macsec failed\n");
		return MZD_FAIL;
	}

	return MZD_OK;
}

#ifdef LATER
MZD_STATUS  phy_7121_macsec_set_policy_api(phy_7121_macsec_drv_t *phy_macsec_drv)
{

	phy_7121_macsec_set_chnl_policy(channel_id);

	return MZD_OK;
}

MZD_STATUS phy_7121_macsec_set_sa_api(phy_7121_macsec_drv_t *phy_macsec_drv)
{
	phy_7121_macsec_set_sa(channel_id);
	return MZD_OK;
}
#endif
