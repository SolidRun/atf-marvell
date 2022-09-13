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

int macsec_debug;

void print_key(uint8_t *key_p, unsigned int count)
{
	MAC_ADV_MACSEC_DBG("\n");
	for (int i = 1; i <= count; i++) {
		MAC_ADV_MACSEC_DBG(" 0x%x ", key_p[i-1]);
		if (i%8 == 0)
			MAC_ADV_MACSEC_DBG("\n");
	}
}

MZD_STATUS  phy_7121_macsec_set_mac_da_api(phy_7121_macsec_drv_t *phy_macsec_drv,
						macsec_vport_params_t *mac_da)
{
	enum PHY_7121_MACSEC_VPORT vport = mac_da->vport_num;

	MAC_ADV_MACSEC_DBG("%s: mac_da->mac %s\n", __func__, (char *)mac_da->mac);

	switch (mac_da->dir) {
	case PHY_7121_MACSEC_INGRESS:
		for (int i = 0; i < 6; i++) {
			phy_macsec_drv->macsec_vport_ingress[vport].mac[i] = mac_da->mac[i];
			MAC_ADV_MACSEC_DBG("%s: mac_da->mac[%d] = %x"
				" phy_macsec_drv->macsec_vport_ingress[vport].mac[%d] = %x\n",
				__func__, i, (unsigned int)mac_da->mac[i], i,
			phy_macsec_drv->macsec_vport_ingress[vport].mac[i]);
		}

		MAC_ADV_MACSEC_DBG("%s: INGRESS phy_macsec_drv->mac_da.mac %s\n",
			__func__, (char *)phy_macsec_drv->macsec_vport_ingress[vport].mac);

		phy_macsec_drv->macsec_vport_ingress[vport].mac_true = true;
		break;

	case PHY_7121_MACSEC_EGRESS:
		for (int i = 0; i < 6; i++) {
			phy_macsec_drv->macsec_vport_egress[vport].mac[i] = mac_da->mac[i];
			MAC_ADV_MACSEC_DBG("%s: mac_da->mac[%d] = %x"
				" phy_macsec_drv->macsec_vport_egress[vport].mac[%d] = %x\n",
				__func__, i, (unsigned int)mac_da->mac[i], i,
			phy_macsec_drv->macsec_vport_egress[vport].mac[i]);
		}

		MAC_ADV_MACSEC_DBG("%s: EGRESS phy_macsec_drv->mac_da.mac %s\n",
			__func__, (char *)phy_macsec_drv->macsec_vport_egress[vport].mac);

		phy_macsec_drv->macsec_vport_egress[vport].mac_true = true;
		break;
	}

	return MZD_OK;
}

MZD_STATUS  phy_7121_macsec_add_vport_api(phy_7121_macsec_drv_t *phy_macsec_drv,
						macsec_vport_params_t *vport_params)
{
	enum PHY_7121_MACSEC_VPORT vport = vport_params->vport_num;

	if (vport >= MACSEC_MAX_VPORT) {
		printf("%s: MACSEC_MAX_VPORT reached %d requested %d\n",
				__func__, MAX_SA_PER_PORT, vport);
		return MZD_FAIL;
	}


	MAC_ADV_MACSEC_DBG("%s: vport %d\n", __func__, vport);

	switch (vport_params->dir) {
	case PHY_7121_MACSEC_INGRESS:

		phy_macsec_drv->macsec_vport_ingress[vport].is_sci_explicit
							= vport_params->is_sci_explicit;
		MAC_ADV_MACSEC_DBG("%s: INGRESS vport is_sci_explicit %d vlan_tag %d\n", __func__,
				phy_macsec_drv->macsec_vport_ingress[vport].is_sci_explicit,
				phy_macsec_drv->macsec_vport_ingress[vport].is_vlan_tag);

		phy_macsec_drv->macsec_vport_ingress[vport].is_vlan_tag
							= vport_params->is_vlan_tag;

		if (phy_macsec_drv->macsec_vport_ingress[vport].is_vlan_tag) {
			for (int i = 0; i < 4; i++) {
				phy_macsec_drv->macsec_vport_ingress[vport].vlan_tag[i]
								= vport_params->vlan_tag[i];
				MAC_ADV_MACSEC_DBG("%s:"
					" vlan_tag[%d] = %x\n",
					__func__, i,
				phy_macsec_drv->macsec_vport_ingress[vport].vlan_tag[i]);
			}
		}

		MAC_ADV_MACSEC_DBG("%s: INGRESS"
	       " phy_macsec_drv->macsec_vport_ingress[vport].vlan_tag %s\n",
		__func__, (char *)phy_macsec_drv->macsec_vport_ingress[vport].vlan_tag);

		break;

	case PHY_7121_MACSEC_EGRESS:

		phy_macsec_drv->macsec_vport_egress[vport].is_sci_explicit
							= vport_params->is_sci_explicit;
		phy_macsec_drv->macsec_vport_egress[vport].is_vlan_tag
							= vport_params->is_vlan_tag;
		MAC_ADV_MACSEC_DBG("%s: INGRESS vport %d  is_sci_explicit vlan_tag %d\n", __func__,
				phy_macsec_drv->macsec_vport_ingress[vport].is_sci_explicit,
				phy_macsec_drv->macsec_vport_ingress[vport].is_vlan_tag);

		if (phy_macsec_drv->macsec_vport_egress[vport].is_vlan_tag) {
			for (int i = 0; i < 4; i++) {
				phy_macsec_drv->macsec_vport_egress[vport].vlan_tag[i]
								= vport_params->vlan_tag[i];
				MAC_ADV_MACSEC_DBG("%s:"
					" vlan_tag[%d] = %x\n",
					__func__, i,
				phy_macsec_drv->macsec_vport_egress[vport].vlan_tag[i]);
			}
		}

		MAC_ADV_MACSEC_DBG("%s: INGRESS"
		" phy_macsec_drv->macsec_vport_egress[vport].vlan_tag %s\n",
		__func__, (char *)phy_macsec_drv->macsec_vport_egress[vport].vlan_tag);

		break;
	}

	return MZD_OK;
}

MZD_STATUS phy_7121_macsec_set_key_api(phy_7121_macsec_drv_t *phy_macsec_drv,
						macsec_sa_params_t *key_sa)
{
	enum PHY_7121_MACSEC_VPORT vport = key_sa->vport_num;
	uint8_t curr_sa = key_sa->sa_num;
	phy_7121_macsec_vport_t *macsec_vport;

	if (vport >= MACSEC_MAX_VPORT) {
		printf("%s: MACSEC_MAX_VPORT reached %d requested %d\n",
				__func__, MAX_SA_PER_PORT, vport);
		return MZD_FAIL;
	}

	if (curr_sa == MAX_SA_PER_PORT) {
		printf("%s: MAX_SA_PER_PORT reached %d\n",
				__func__, MAX_SA_PER_PORT);
		return MZD_FAIL;
	}

	if (key_sa->key_size != MACSEC_KEY_SIZE) {
		printf("%s: MACSEC_KEY_SIZE not correct %d expected %d\n",
				__func__, key_sa->key_size, MACSEC_KEY_SIZE);
		return MZD_FAIL;
	}

	if (key_sa->dir == PHY_7121_MACSEC_INGRESS) {
		MAC_ADV_MACSEC_DBG("%s: INGRESS key_sa->key_size %d key_sa->key %s\n ",
					__func__, key_sa->key_size, key_sa->key);

		macsec_vport = &phy_macsec_drv->macsec_vport_ingress[vport];


	} else if (key_sa->dir == PHY_7121_MACSEC_EGRESS) {
		MAC_ADV_MACSEC_DBG("%s: EGRESS key_sa->key_size %d key_sa->key %s ",
					__func__, key_sa->key_size, key_sa->key);

		macsec_vport = &phy_macsec_drv->macsec_vport_egress[vport];

	} else {
		return MZD_FAIL;
	}

	memset((char *)macsec_vport->macsec_sa[curr_sa].macsec_key.key, '\0',
							key_sa->key_size + 1);

	strlcpy((char *)macsec_vport->macsec_sa[curr_sa].macsec_key.key,
			(char *)key_sa->key, key_sa->key_size + 1);

	macsec_vport->macsec_sa[curr_sa].transform_params.Key_p
		= macsec_vport->macsec_sa[curr_sa].macsec_key.key;

	macsec_vport->macsec_sa[curr_sa].transform_params.KeyByteCount
							= key_sa->key_size;

	MAC_ADV_MACSEC_DBG("%s: phy_macsec_drv->transform_params_ingress.Key_p %s\n"
				"key_sa->key_size %d\n",
		__func__, macsec_vport->macsec_sa[curr_sa].transform_params.Key_p,
						key_sa->key_size);
	print_key(macsec_vport->macsec_sa[curr_sa].transform_params.Key_p,
	macsec_vport->macsec_sa[curr_sa].transform_params.KeyByteCount);

	macsec_vport->macsec_sa[curr_sa].macsec_key.key_flag = true;

	return MZD_OK;
}

MZD_STATUS phy_7121_macsec_set_sci_api(phy_7121_macsec_drv_t *phy_macsec_drv,
						macsec_sa_params_t *sci_id)
{
	enum PHY_7121_MACSEC_VPORT vport = sci_id->vport_num;
	uint8_t curr_sa = sci_id->sa_num;
	phy_7121_macsec_vport_t *macsec_vport = NULL;

	if (vport >= MACSEC_MAX_VPORT) {
		printf("%s: MACSEC_MAX_VPORT reached %d requested %d\n",
				__func__, MAX_SA_PER_PORT, vport);
		return MZD_FAIL;
	}

	if (curr_sa >= MAX_SA_PER_PORT) {
		printf("%s: MAX_SA_PER_PORT reached %d\n",
				__func__, MAX_SA_PER_PORT);
		return MZD_FAIL;
	}

	MAC_ADV_MACSEC_DBG("%s: sci_id->sci %s\n", __func__, (char *)sci_id->sci);

	switch (sci_id->dir) {
	case PHY_7121_MACSEC_INGRESS:
		macsec_vport = &phy_macsec_drv->macsec_vport_ingress[vport];
		break;

	case PHY_7121_MACSEC_EGRESS:
		macsec_vport = &phy_macsec_drv->macsec_vport_egress[vport];
		break;
	}

	for (int i = 0; i < MACSEC_SCI_SIZE; i++) {
		macsec_vport->macsec_sa[curr_sa].sci_id.sci[i]
					= sci_id->sci[i];
		MAC_ADV_MACSEC_DBG("%s:"
		"macsec_vport->macsec_sa[%d].sci_id.sci[%d] = %x"
		" sci_id->sci[%d] = %x\n",
			__func__, curr_sa, i,
		(unsigned int)macsec_vport->macsec_sa[curr_sa].sci_id.sci[i],
		i, sci_id->sci[i]);
	}

	macsec_vport->macsec_sa[curr_sa].transform_params.SCI_p
		= macsec_vport->macsec_sa[curr_sa].sci_id.sci;

	print_key(macsec_vport->macsec_sa[curr_sa].transform_params.SCI_p,
						MACSEC_SCI_SIZE);

	macsec_vport->macsec_sa[curr_sa].sci_id.sci_flag = true;
	return MZD_OK;
}

MZD_STATUS phy_7121_macsec_set_pkt_num_api(phy_7121_macsec_drv_t *phy_macsec_drv,
						macsec_sa_params_t *pkt_num)
{
	enum PHY_7121_MACSEC_VPORT vport = pkt_num->vport_num;
	phy_7121_macsec_vport_t *macsec_vport = NULL;
	uint8_t curr_sa = pkt_num->sa_num;

	if (vport >= MACSEC_MAX_VPORT) {
		printf("%s: MACSEC_MAX_VPORT reached %d requested %d\n",
				__func__, MAX_SA_PER_PORT, vport);
		return MZD_FAIL;
	}

	if (curr_sa >= MAX_SA_PER_PORT) {
		printf("%s: MAX_SA_PER_PORT reached %d\n",
				__func__, MAX_SA_PER_PORT);
		return MZD_FAIL;
	}

	MAC_ADV_MACSEC_DBG("%s: pkt_num->seq_num_lo %x  pkt_num->seq_num_hi %x\n",
		__func__, pkt_num->seq_num_lo, pkt_num->seq_num_hi);

	switch (pkt_num->dir) {
	case PHY_7121_MACSEC_INGRESS:
		macsec_vport = &phy_macsec_drv->macsec_vport_ingress[vport];
		break;

	case PHY_7121_MACSEC_EGRESS:
		macsec_vport = &phy_macsec_drv->macsec_vport_egress[vport];
		break;
	}

	macsec_vport->macsec_sa[curr_sa].transform_params.SeqNumLo
		= pkt_num->seq_num_lo;
	macsec_vport->macsec_sa[curr_sa].transform_params.SeqNumHi
			= pkt_num->seq_num_hi;

	MAC_ADV_MACSEC_DBG("%s:"
	"Dir %d macsec_vport->macsec_sa[curr_sa].transform_params[0].SeqNumLo %x\n"
	"INGRESS macsec_vport->macsec_sa[curr_sa].transform_params[0].SeqNumHi %x\n",
	__func__, pkt_num->dir,
	macsec_vport->macsec_sa[curr_sa].transform_params.SeqNumLo,
	macsec_vport->macsec_sa[curr_sa].transform_params.SeqNumHi);

	macsec_vport->macsec_sa[curr_sa].is_seq_no = true;

	return MZD_OK;
}

MZD_STATUS phy_7121_macsec_actiontype_api(phy_7121_macsec_drv_t *phy_macsec_drv,
						macsec_sa_params_t *sa_params)
{
	enum PHY_7121_MACSEC_VPORT vport = sa_params->vport_num;
	phy_7121_macsec_vport_t *macsec_vport = NULL;
	uint8_t curr_sa = sa_params->sa_num;

	if (vport >= MACSEC_MAX_VPORT) {
		printf("%s: MACSEC_MAX_VPORT reached %d requested %d\n",
				__func__, MAX_SA_PER_PORT, vport);
		return MZD_FAIL;
	}

	if (curr_sa >= MAX_SA_PER_PORT) {
		printf("%s: MAX_SA_PER_PORT reached %d\n",
				__func__, MAX_SA_PER_PORT);
		return MZD_FAIL;
	}

	switch (sa_params->dir) {
	case PHY_7121_MACSEC_INGRESS:
		macsec_vport = &phy_macsec_drv->macsec_vport_ingress[vport];
		break;

	case PHY_7121_MACSEC_EGRESS:
		macsec_vport = &phy_macsec_drv->macsec_vport_egress[vport];
		break;
	}

	macsec_vport->macsec_sa[curr_sa].actiontype = sa_params->actiontype;
	macsec_vport->macsec_sa[curr_sa].is_actiontype = true;

	MAC_ADV_MACSEC_DBG("%s:"
	"Dir %d macsec_vport->macsec_sa[curr_sa].actiontype %d\n",
	__func__, sa_params->dir,
	macsec_vport->macsec_sa[curr_sa].actiontype);

	return MZD_OK;
}

MZD_STATUS phy_7121_macsec_droptype_api(phy_7121_macsec_drv_t *phy_macsec_drv,
						macsec_sa_params_t *sa_params)
{
	enum PHY_7121_MACSEC_VPORT vport = sa_params->vport_num;
	phy_7121_macsec_vport_t *macsec_vport = NULL;
	uint8_t curr_sa = sa_params->sa_num;

	if (vport >= MACSEC_MAX_VPORT) {
		printf("%s: MACSEC_MAX_VPORT reached %d requested %d\n",
				__func__, MAX_SA_PER_PORT, vport);
		return MZD_FAIL;
	}

	if (curr_sa >= MAX_SA_PER_PORT) {
		printf("%s: MAX_SA_PER_PORT reached %d\n",
				__func__, MAX_SA_PER_PORT);
		return MZD_FAIL;
	}

	switch (sa_params->dir) {
	case PHY_7121_MACSEC_INGRESS:
		macsec_vport = &phy_macsec_drv->macsec_vport_ingress[vport];
		break;

	case PHY_7121_MACSEC_EGRESS:
		macsec_vport = &phy_macsec_drv->macsec_vport_egress[vport];
		break;
	}

	macsec_vport->macsec_sa[curr_sa].droptype = sa_params->droptype;
	macsec_vport->macsec_sa[curr_sa].is_droptype = true;
	return MZD_OK;
}

MZD_STATUS phy_7121_macsec_add_sa_api(phy_7121_macsec_drv_t *phy_macsec_drv,
						macsec_sa_params_t *sa_params)
{
	enum PHY_7121_MACSEC_VPORT vport = sa_params->vport_num;
	phy_7121_macsec_vport_t *macsec_vport = NULL;
	uint8_t curr_sa = sa_params->sa_num;
	MZD_STATUS status = MZD_OK;

	if (vport >= MACSEC_MAX_VPORT) {
		printf("%s: MACSEC_MAX_VPORT reached %d requested %d\n",
				__func__, MAX_SA_PER_PORT, vport);
		return MZD_FAIL;
	}

	if (curr_sa >= MAX_SA_PER_PORT) {
		printf("%s: MAX_SA_PER_PORT reached %d\n",
				__func__, MAX_SA_PER_PORT);
		return MZD_FAIL;
	}

	if (sa_params->is_seq_no)
		phy_7121_macsec_set_pkt_num_api(phy_macsec_drv,
						sa_params);

	if (sa_params->is_actiontype)
		phy_7121_macsec_actiontype_api(phy_macsec_drv,
					sa_params);

	if (sa_params->is_droptype)
		phy_7121_macsec_droptype_api(phy_macsec_drv,
					sa_params);

	switch (sa_params->dir) {
	case PHY_7121_MACSEC_INGRESS:
		macsec_vport = &phy_macsec_drv->macsec_vport_ingress[vport];
		if (macsec_vport->macsec_sa[curr_sa].macsec_key.key_flag
									== false) {
			printf("%s: Warning :Ingress Key not supplied, "
				"Using default key for SA %d\n", __func__, curr_sa);
		}

		status = phy_7121_macsec_sa_add_ingress(phy_macsec_drv,
						sa_params);

		break;

	case PHY_7121_MACSEC_EGRESS:
		macsec_vport = &phy_macsec_drv->macsec_vport_egress[vport];
		if (macsec_vport->macsec_sa[curr_sa].macsec_key.key_flag
									== false) {
			printf("%s: Warning :Egress Key not supplied, "
				"Using default key for SA %d\n", __func__, curr_sa);
		}

		status = phy_7121_macsec_sa_add_egress(phy_macsec_drv,
						sa_params);
		break;
	}
	return status;
}

MZD_STATUS phy_7121_macsec_del_sa_api(phy_7121_macsec_drv_t *phy_macsec_drv,
						macsec_sa_params_t *sa_params)
{
	enum PHY_7121_MACSEC_VPORT vport = sa_params->vport_num;
	uint8_t curr_sa = sa_params->sa_num;
	MZD_STATUS status = MZD_OK;

	if (vport >= MACSEC_MAX_VPORT) {
		printf("%s: MACSEC_MAX_VPORT reached %d requested %d\n",
				__func__, MAX_SA_PER_PORT, vport);
		return MZD_FAIL;
	}

	if (curr_sa >= MAX_SA_PER_PORT) {
		printf("%s: MAX_SA_PER_PORT reached %d\n",
				__func__, MAX_SA_PER_PORT);
		return MZD_FAIL;
	}

	switch (sa_params->dir) {
	case PHY_7121_MACSEC_INGRESS:
		status = phy_7121_macsec_sa_del_ingress(phy_macsec_drv, sa_params);
		break;

	case PHY_7121_MACSEC_EGRESS:
		status = phy_7121_macsec_sa_del_egress(phy_macsec_drv, sa_params);
		break;
	}

	return status;
}

MZD_STATUS phy_7121_macsec_sa_switch_api(phy_7121_macsec_drv_t *phy_macsec_drv,
					struct macsec_sa_adv_ops *sa_adv_ops)
{
	enum PHY_7121_MACSEC_VPORT vport = sa_adv_ops->vport_num;
	uint8_t sa1 = sa_adv_ops->sa1;
	uint8_t sa2 = sa_adv_ops->sa2;
	MZD_STATUS status = MZD_OK;

	if (vport >= MACSEC_MAX_VPORT) {
		printf("%s: MACSEC_MAX_VPORT reached %d requested %d\n",
				__func__, MAX_SA_PER_PORT, vport);
		return MZD_FAIL;
	}

	if ((sa1 >= MAX_SA_PER_PORT) || (sa2 >= MAX_SA_PER_PORT)) {
		printf("%s: MAX_SA_PER_PORT reached sa1 %d sa1 %d max %d\n",
				__func__, sa1, sa2, MAX_SA_PER_PORT);
		return MZD_FAIL;
	}

	status = phy_7121_macsec_sa_switch(phy_macsec_drv, sa_adv_ops);

	return status;
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
	MAC_ADV_MACSEC_DBG("%s opMode %d\n", __func__, lineMode);
#endif
	switch (macsec_cmd) {
	case PHY_MAC_ADV_MACSEC_ENABLE:
		MAC_ADV_MACSEC_DBG("%s PHY_MAC_ADV_MACSEC_ENABLE %d\n",
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
		if (status != MZD_OK) {
			MZD_DBG_ERROR("phy_7121_macsec_enable_engines failed\n");
			return MZD_FAIL;
		}

		for (int i = 0; i < MACSEC_MAX_VPORT; i++) {
			status = phy_7121_macsec_vport_add_ingress(phy_macsec_drv, i);
			if (status != MZD_OK) {
				MZD_DBG_ERROR("phy_7121_macsec_vport_add_ingress failed\n");
				return MZD_FAIL;
			}

			status = phy_7121_macsec_vport_add_egress(phy_macsec_drv, i);
			if (status != MZD_OK) {
				MZD_DBG_ERROR("phy_7121_macsec_vport_add_egress failed\n");
				return MZD_FAIL;
			}
		}

		break;

	case PHY_MAC_ADV_MACSEC_BYPASS:
		MAC_ADV_MACSEC_DBG("%s PHY_MAC_ADV_MACSEC_BYPASS %d\n",
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
		MAC_ADV_MACSEC_DBG("%s PHY_MAC_ADV_MACSEC_PTP %d\n",
							__func__, macsec_cmd);
		status = phy_7121_macsec_enable_engines(phy->priv,
				   phy->addr,
				   lane,
				   MZD_INIT_MACSEC_ENABLE | MZD_INIT_PTP,
				   lineMode,
				   phy_macsec_drv);

		break;
#ifdef MACSEC_ENGINES_DEF
	case  PHY_MAC_ADV_MACSEC_TEST:
		MAC_ADV_MACSEC_DBG("%s PHY_MAC_ADV_MACSEC_TEST %d\n",
						__func__, macsec_cmd);
		status = phy_7121_test_macsec_enable_engines(phy->priv,
						phy->addr, lane);
		break;
#endif
	default:
		MAC_ADV_MACSEC_DBG("%s Invalid command %d\n",
						__func__, macsec_cmd);
		return MZD_FAIL;
	}

	if (status != MZD_OK) {
		MZD_DBG_ERROR("test_macsec: test macsec failed\n");
		return MZD_FAIL;
	}

	return MZD_OK;
}

static void print_sci(uint8_t *key_p, unsigned int count)
{
	printf("\n");
	for (int i = 1; i <= count; i++) {
		printf(" 0x%x ", key_p[i-1]);
		if (i%8 == 0)
			printf("\n");
	}
}


MZD_STATUS phy_7121_macsec_get_port_mac_api(phy_7121_macsec_drv_t *phy_macsec_drv,
						 macsec_vport_params_t *vport_params)
{
	enum PHY_7121_MACSEC_VPORT vport = vport_params->vport_num;
	phy_7121_macsec_vport_t *macsec_vport = NULL;

	if (vport >= MACSEC_MAX_VPORT) {
		printf("%s: MACSEC_MAX_VPORT reached %d requested %d\n",
				__func__, MAX_SA_PER_PORT, vport);
		return MZD_FAIL;
	}

	switch (vport_params->dir) {
	case PHY_7121_MACSEC_INGRESS:
		macsec_vport = &phy_macsec_drv->macsec_vport_ingress[vport];
		printf("\n MAC Ingress Params: %d\n", vport);
		break;

	case PHY_7121_MACSEC_EGRESS:
		macsec_vport = &phy_macsec_drv->macsec_vport_egress[vport];
		printf("\n MAC Egress Params: %d\n", vport);
		break;
	}

	printf(" MAC mac_flags %d\n",
			macsec_vport->mac_true);
	print_key(macsec_vport->mac, 6);

	return MZD_OK;
}


MZD_STATUS phy_7121_macsec_stats_api(phy_7121_macsec_drv_t *phy_macsec_drv,
				struct macsec_stats_params *macsec_stats)
{
	enum PHY_7121_MACSEC_VPORT vport = macsec_stats->vport_num;
	phy_7121_macsec_vport_t *macsec_vport = NULL;
	uint8_t curr_sa = macsec_stats->sa_num;
	MZD_STATUS status = MZD_OK;

	if (vport >= MACSEC_MAX_VPORT) {
		printf("%s: MACSEC_MAX_VPORT reached %d requested %d\n",
				__func__, MAX_SA_PER_PORT, vport);
		return MZD_FAIL;
	}

	if (curr_sa >= MAX_SA_PER_PORT) {
		printf("%s: MAX_SA_PER_PORT reached %d\n",
				__func__, MAX_SA_PER_PORT);
		return MZD_FAIL;
	}

	if (macsec_vport->macsec_sa[curr_sa].in_use != true) {
		printf("%s: SA %d dir %d Not created\n",
				__func__, curr_sa, macsec_stats->dir);
		return MZD_FAIL;
	}

	MAC_ADV_MACSEC_DBG(" MACSEC stats SA %d dir %d\n", curr_sa, macsec_stats->dir);

	switch (macsec_stats->dir) {
	case PHY_7121_MACSEC_INGRESS:
		printf(" MACSEC INGRESS stats %d\n", curr_sa);
		status = phy_7121_macsec_ingress_stats(phy_macsec_drv, macsec_stats);
		break;

	case PHY_7121_MACSEC_EGRESS:
		printf(" MACSEC EGRESS stats %d\n", curr_sa);
		status = phy_7121_macsec_egress_stats(phy_macsec_drv, macsec_stats);
		break;
	}

	return status;
}

MZD_STATUS phy_7121_macsec_get_sa_params_api(phy_7121_macsec_drv_t *phy_macsec_drv,
						macsec_sa_params_t *sa_params)
{
	enum PHY_7121_MACSEC_VPORT vport = sa_params->vport_num;
	phy_7121_macsec_vport_t *macsec_vport = NULL;
	uint8_t curr_sa = sa_params->sa_num;

	if (vport >= MACSEC_MAX_VPORT) {
		printf("%s: MACSEC_MAX_VPORT reached %d requested %d\n",
				__func__, MAX_SA_PER_PORT, vport);
		return MZD_FAIL;
	}

	if (curr_sa >= MAX_SA_PER_PORT) {
		printf("%s: MAX_SA_PER_PORT reached %d\n",
				__func__, MAX_SA_PER_PORT);
		return MZD_FAIL;
	}


	switch (sa_params->dir) {
	case PHY_7121_MACSEC_INGRESS:
		macsec_vport = &phy_macsec_drv->macsec_vport_ingress[vport];
		printf("\n SA Ingress Params: %d\n", vport);
		break;

	case PHY_7121_MACSEC_EGRESS:
		macsec_vport = &phy_macsec_drv->macsec_vport_egress[vport];
		printf("\n SA Egress Params: %d\n", vport);
		break;
	}

	if (macsec_vport->macsec_sa[curr_sa].in_use != true) {
		printf("%s: SA %d dir %d Not created\n",
				__func__, curr_sa, sa_params->dir);
		return MZD_FAIL;
	}

	printf("\n SA %d  vPort %d is_sci_explicit %d\n",
		curr_sa,
		macsec_vport->vport, macsec_vport->is_sci_explicit);

	printf("\n SA %d Key KeyByteCount %d key_flag %d\n",
		curr_sa,
		macsec_vport->macsec_sa[curr_sa].transform_params.KeyByteCount,
		macsec_vport->macsec_sa[curr_sa].macsec_key.key_flag);

		print_key(macsec_vport->macsec_sa[curr_sa].transform_params.Key_p,
			macsec_vport->macsec_sa[curr_sa].transform_params.KeyByteCount);

	printf("\n SA %d SCI key_flag %d\n",
		curr_sa,
		macsec_vport->macsec_sa[curr_sa].sci_id.sci_flag);

	print_sci(macsec_vport->macsec_sa[curr_sa].transform_params.SCI_p,
								MACSEC_SCI_SIZE);

	printf("\n SA %d DropType is_droptype %d droptype %d\n",
		curr_sa,
		macsec_vport->macsec_sa[curr_sa].is_droptype,
		macsec_vport->macsec_sa[curr_sa].droptype);

	printf("\n SA %d ActionType is_actiontype %d actiontype %d\n",
		curr_sa,
		macsec_vport->macsec_sa[curr_sa].is_actiontype,
		macsec_vport->macsec_sa[curr_sa].actiontype);

	printf("\n SA %d is_seq_no %d SeqNumLo %x SeqNumHi %x\n",
		curr_sa,
		macsec_vport->macsec_sa[curr_sa].is_seq_no,
		macsec_vport->macsec_sa[curr_sa].transform_params.SeqNumLo,
		macsec_vport->macsec_sa[curr_sa].transform_params.SeqNumHi);

	return MZD_OK;
}
