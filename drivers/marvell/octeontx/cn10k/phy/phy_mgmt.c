/*
 * Copyright (C) 2021 Marvell International Ltd.
 *
 * SPDX-License-Identifier:     BSD-3-Clause
 * https://spdx.org/licenses
 */

/* PHY driver for CN10k */

#include <arch.h>
#include <stdio.h>
#include <debug.h>
#include <string.h>
#include <platform_def.h>
#include <timers.h>
#include <octeontx_common.h>
#include <drivers/delay_timer.h>
#include <plat_board_cfg.h>
#include <smi.h>
#include <eth_intf.h>
#include <rpm.h>
#include <phy_mgmt.h>
#include <octeontx_utils.h>
#include <sh_fwdata.h>

/* define DEBUG_ATF_NW_MGMT to enable debug logs */
#undef DEBUG_ATF_NW_MGMT	/* PHY, SFP/QSFP management */

#ifdef DEBUG_ATF_NW_MGMT
#define debug_nw_mgmt printf
#else
#define debug_nw_mgmt(...) ((void) (0))
#endif

int phy_get_link_status(int eth_id, int lmac_id,
				link_state_t *link)
{
	rpm_lmac_config_t *lmac = NULL;
	phy_config_t *phy = NULL;

	debug_nw_mgmt("%s: %d:%d\n", __func__, eth_id, lmac_id);

	/* Get the LMAC type for each LMAC */
	lmac = &plat_octeontx_bcfg->rpm_cfg[eth_id].lmac_cfg[lmac_id];
	phy = &lmac->phy_config;

	debug_nw_mgmt("%s: mode %d\n", __func__, lmac->mode);

	if (!lmac->phy_present)
		return -1;

	/* Call PHY specific probe callback here */
	if (phy->valid)
		lmac->phy_config.drv->get_link_status(eth_id,
				lmac_id, link);

	return 0;
}

void phy_probe(int eth_id, int lmac_id)
{
	phy_config_t *phy;

	debug_nw_mgmt("%s: %d:%d\n", __func__, eth_id, lmac_id);

	phy = &plat_octeontx_bcfg->rpm_cfg[eth_id].lmac_cfg[lmac_id].phy_config;

	/* Enable the SMI/MDIO bus */
	smi_reset(phy->mdio_bus);

	/* Call PHY specific probe callback here */
	if (phy->valid)
		phy->drv->probe(eth_id, lmac_id);

	sh_fwdata_update_phy_has_fec_stats(eth_id, lmac_id);
}

void phy_config(int eth_id, int lmac_id)
{
	phy_config_t *phy;

	debug_nw_mgmt("%s: %d:%d\n", __func__, eth_id, lmac_id);

	phy = &plat_octeontx_bcfg->rpm_cfg[eth_id].lmac_cfg[lmac_id].phy_config;

	/* Call PHY specific config callback here */
	if (phy->valid)
		phy->drv->config(eth_id, lmac_id);
}

void phy_set_supported_link_modes(int eth_id, int lmac_id)
{
	phy_config_t *phy;

	debug_nw_mgmt("%s: %d:%d\n", __func__, eth_id, lmac_id);

	phy = &plat_octeontx_bcfg->rpm_cfg[eth_id].lmac_cfg[lmac_id].phy_config;

	/* Call PHY specific callback here */
	if (phy->valid)
		phy->drv->set_supported_modes(eth_id, lmac_id);
}

void phy_reset(int eth_id, int lmac_id)
{
	phy_config_t *phy;

	debug_nw_mgmt("%s: %d:%d\n", __func__, eth_id, lmac_id);

	phy = &plat_octeontx_bcfg->rpm_cfg[eth_id].lmac_cfg[lmac_id].phy_config;

	/* Call PHY specific config callback here */
	if (phy->valid)
		phy->drv->reset(eth_id, lmac_id);
}

void phy_lookup(int eth_id, int lmac_id, int type)
{
	rpm_lmac_config_t *lmac;

	debug_nw_mgmt("%s: %d:%d\n", __func__, eth_id, lmac_id);

	lmac = &plat_octeontx_bcfg->rpm_cfg[eth_id].lmac_cfg[lmac_id];

	/* First look for PHY driver in Marvell PHY table */
	lmac->phy_config.drv = phy_marvell_drv_lookup(type);
	if (lmac->phy_config.drv != NULL) {
		lmac->phy_config.valid = 1;
		return;
	}

	/* FIXME: Add new PHY table lookup here */

	/* Last, look for PHY type in Generic PHY table */
	lmac->phy_config.drv = phy_generic_drv_lookup(type);
	if (lmac->phy_config.drv != NULL) {
		lmac->phy_config.valid = 1;
		return;
	}

	/* If reached here, no valid PHY driver found */
	lmac->phy_config.valid = 0;
	ERROR("%s: %d:%d, no valid PHY driver found for type %d\n", __func__,
			eth_id, lmac_id, type);
}

#ifdef DEBUG_ATF_ENABLE_SERDES_DIAGNOSTIC_CMDS
int phy_enable_prbs(int eth_id, int lmac_id, int host_side, int prbs, int dir)
{
	phy_config_t *phy;
	uint64_t ret = -1;

	debug_nw_mgmt("%s: %d:%d\n", __func__, eth_id, lmac_id);

	phy = &plat_octeontx_bcfg->rpm_cfg[eth_id].lmac_cfg[lmac_id].phy_config;

	/* Call PHY specific enable_prbs callback here */
	if (phy->valid && phy->drv->enable_prbs)
		ret = phy->drv->enable_prbs(eth_id, lmac_id, host_side, prbs,
					dir);

	return ret;
}

int phy_disable_prbs(int eth_id, int lmac_id, int host_side, int prbs)
{
	phy_config_t *phy;
	uint64_t ret = -1;

	debug_nw_mgmt("%s: %d:%d\n", __func__, eth_id, lmac_id);

	phy = &plat_octeontx_bcfg->rpm_cfg[eth_id].lmac_cfg[lmac_id].phy_config;

	/* Call PHY specific disable_prbs callback here */
	if (phy->valid && phy->drv->disable_prbs)
		ret = phy->drv->disable_prbs(eth_id, lmac_id, host_side, prbs);

	return ret;
}

uint64_t phy_get_prbs_errors(int eth_id, int lmac_id, int host_side,
	int clear, int prbs)
{
	phy_config_t *phy;
	uint64_t ret = -1;

	debug_nw_mgmt("%s: %d:%d\n", __func__, eth_id, lmac_id);

	phy = &plat_octeontx_bcfg->rpm_cfg[eth_id].lmac_cfg[lmac_id].phy_config;

	/* Call PHY specific get_prbs_errors callback here */
	if (phy->valid && phy->drv->get_prbs_errors)
		ret = phy->drv->get_prbs_errors(eth_id, lmac_id, host_side,
					clear, prbs);

	return ret;
}
#endif /* DEBUG_ATF_ENABLE_SERDES_DIAGNOSTIC_CMDS */

/* Wrapper APIs for SMI driver for now */
void phy_set_switch(phy_config_t *phy, int enable)
{
	smi_set_switch(phy, enable);
}

int phy_mdio_read(phy_config_t *phy, int mode, int devad, int reg)
{
	int val = 0;

	val = smi_read(phy->mdio_bus, mode, phy->addr, devad, reg);

	return val;
}

void phy_mdio_write(phy_config_t *phy, int mode, int devad, int reg, int val)
{
	smi_write(phy->mdio_bus, phy->addr, devad, mode, reg, val);
}

int phy_get_fec_stats(int eth_id, int lmac_id)
{
	rpm_lmac_config_t *lmac = NULL;
	phy_config_t *phy = NULL;
	int ret;

	debug_nw_mgmt("%s: %d:%d\n", __func__, eth_id, lmac_id);

	lmac = &plat_octeontx_bcfg->rpm_cfg[eth_id].lmac_cfg[lmac_id];
	phy = &lmac->phy_config;

	if (!lmac->phy_present)
		return -1;

	if (!(phy->drv->flags & PHY_FLAG_HAS_FEC_STATS))
		return -1;

	if (phy->valid && phy->drv->get_fec_stats)
		ret = phy->drv->get_fec_stats(eth_id, lmac_id);
	else
		ret = -1;

	return ret;
}
