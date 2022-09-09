/*
 * Copyright (c) 2021 Marvell.
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
#include <libfdt.h>

/* For LEGACY logging, define DEBUG_ATF_PHY_MGMT to enable debug logs */
#undef DEBUG_ATF_PHY_MGMT

#if defined(MRVL_TF_LOG_MODULE)
#  undef MRVL_TF_LOG_MODULE
#  define MRVL_TF_LOG_MODULE  MRVL_TF_LOG_MODULE_ETH_PHY_MGMT
#  define debug_phy_driver(...) (mrvl_tf_log_modules & MRVL_TF_LOG_MODULE) ? \
			       tf_log(LOG_MARKER_NOTICE __VA_ARGS__) : (void)0
#elif DEBUG_ATF_PHY_MGMT
#define debug_phy_driver printf
#else
#define debug_phy_driver(...) ((void) (0))
#endif

int phy_get_link_status(int eth_id, int lmac_id,
				link_state_t *link)
{
	rpm_lmac_config_t *lmac = NULL;
	phy_config_t *phy = NULL;

	debug_phy_driver("%s: %d:%d\n", __func__, eth_id, lmac_id);

	/* Get the LMAC type for each LMAC */
	lmac = &plat_octeontx_bcfg->rpm_cfg[eth_id].lmac_cfg[lmac_id];
	phy = lmac->phy_config;

	debug_phy_driver("%s: mode %d\n", __func__, lmac->mode);

	if (!phy || !lmac->phy_present)
		return -1;

	/* Call PHY specific probe callback here */
	if (phy->valid)
		phy->drv->get_link_status(eth_id,
				lmac_id, link);

	return 0;
}

void phy_check_reg_init(phy_config_t *phy, int mode, const void *fdt, int phy_node_offset)
{
	const struct fdt_property *reg_init;
	const uint32_t *data;
	int total_len, count;

	reg_init = fdt_get_property(
		fdt, phy_node_offset, "cn10k,reg-init", &total_len);

	if (!phy || !reg_init)
		return;

	if (total_len % (5 * sizeof(uint32_t)))
		return;

	count = total_len / (5 * sizeof(uint32_t));
	data = (const uint32_t *)reg_init->data;

	for (int i = 0; i < count; i++) {
		data = (const uint32_t *)reg_init->data + i * 5;

		int out = 0;
		int devad, reg, mask, val, wait_ms;

		devad = (mode == CLAUSE45) ? fdt32_to_cpu(data[0]) : -1;
		reg = fdt32_to_cpu(data[1]);
		mask = fdt32_to_cpu(data[2]);
		val = fdt32_to_cpu(data[3]);
		wait_ms = fdt32_to_cpu(data[4]);

		if (mask) {
			out = phy_mdio_read(phy, mode, devad, reg);
			out &= mask;
		}

		out |= val;
		phy_mdio_write(phy, mode, devad, reg, out);

		if (wait_ms)
			mdelay(wait_ms);
	}
}

void phy_probe(int eth_id, int lmac_id)
{
	phy_config_t *phy;

	debug_phy_driver("%s: %d:%d\n", __func__, eth_id, lmac_id);

	if (lmac_id < 0 || lmac_id >= MAX_LMAC_PER_RPM) {
		WARN("LMAC ID %d out of range\n", lmac_id);
		return;
	}

	phy = plat_octeontx_bcfg->rpm_cfg[eth_id].lmac_cfg[lmac_id].phy_config;
	if (!phy)
		return;

	/* Enable the SMI/MDIO bus */
	smi_reset(phy->mdio_bus);

	/* Call PHY specific probe callback here */
	if (phy->valid)
		phy->drv->probe(eth_id, lmac_id);
}

void phy_config(int eth_id, int lmac_id)
{
	phy_config_t *phy;

	debug_phy_driver("%s: %d:%d\n", __func__, eth_id, lmac_id);

	if (lmac_id < 0 || lmac_id >= MAX_LMAC_PER_RPM) {
		WARN("LMAC ID %d out of range\n", lmac_id);
		return;
	}

	phy = plat_octeontx_bcfg->rpm_cfg[eth_id].lmac_cfg[lmac_id].phy_config;
	if (!phy)
		return;

	/* Call PHY specific config callback here */
	if (phy->valid)
		phy->drv->config(eth_id, lmac_id);
}

#ifdef DEBUG_ATF_ENABLE_PHY_DIAGNOSTIC_CMDS
int phy_set_loopback(int eth_id, int lmac_id, int host_side, int lbk_type, int enable)
{
	int ret = -1;
	phy_config_t *phy;

	debug_phy_driver("%s: %d:%d en=%d\n", __func__, eth_id, lmac_id, enable);

	if (eth_id < 0 || eth_id >= MAX_RPM)
		return -1;

	if (lmac_id < 0 || lmac_id >= MAX_LMAC_PER_RPM)
		return -1;

	phy = plat_octeontx_bcfg->rpm_cfg[eth_id].lmac_cfg[lmac_id].phy_config;
	if (!phy)
		return -1;

	/* Call PHY specific config callback here */
	if (phy->valid && phy->drv->set_loopback)
		ret = phy->drv->set_loopback(eth_id, lmac_id, host_side, lbk_type, enable);

	return ret;
}

int phy_get_temp(int eth_id, int lmac_id, int *temp)
{
	int ret = -1;
	phy_config_t *phy;

	debug_phy_driver("%s: %d:%d\n", __func__, eth_id, lmac_id);

	if (eth_id < 0 || eth_id >= MAX_RPM)
		return -1;

	if (lmac_id < 0 || lmac_id >= MAX_LMAC_PER_RPM)
		return -1;

	phy = plat_octeontx_bcfg->rpm_cfg[eth_id].lmac_cfg[lmac_id].phy_config;
	if (!phy)
		return -1;

	/* Call PHY specific config callback here */
	if (phy->valid && phy->drv->get_temp && temp)
		ret = phy->drv->get_temp(eth_id, lmac_id, temp);

	return ret;
}

int phy_set_serdes_cfg(int eth_id, int lmac_id, phy_serdes_cfg_t *cfg)
{
	int ret = -1;
	phy_config_t *phy;

	debug_phy_driver("%s: %d:%d\n", __func__, eth_id, lmac_id);

	if (eth_id < 0 || eth_id >= MAX_RPM)
		return -1;

	if (lmac_id < 0 || lmac_id >= MAX_LMAC_PER_RPM)
		return -1;

	phy = plat_octeontx_bcfg->rpm_cfg[eth_id].lmac_cfg[lmac_id].phy_config;
	if (!phy)
		return -1;

	/* Call PHY specific config callback here */
	if (phy->valid && phy->drv->set_serdes_cfg && cfg)
		ret = phy->drv->set_serdes_cfg(eth_id, lmac_id, cfg);

	return ret;
}

int phy_get_serdes_cfg(int eth_id, int lmac_id, phy_serdes_cfg_t *cfg)
{
	int ret = -1;
	phy_config_t *phy;

	debug_phy_driver("%s: %d:%d\n", __func__, eth_id, lmac_id);

	if (eth_id < 0 || eth_id >= MAX_RPM)
		return -1;

	if (lmac_id < 0 || lmac_id >= MAX_LMAC_PER_RPM)
		return -1;

	phy = plat_octeontx_bcfg->rpm_cfg[eth_id].lmac_cfg[lmac_id].phy_config;
	if (!phy)
		return -1;

	/* Call PHY specific config callback here */
	if (phy->valid && phy->drv->get_serdes_cfg && cfg)
		ret = phy->drv->get_serdes_cfg(eth_id, lmac_id, cfg);

	return ret;
}

int phy_read_reg(int eth_id, int lmac_id,
	int mode, int dev_page, int reg, int *val)
{
	int ret = -1;
	phy_config_t *phy;

	debug_phy_driver("%s: %d:%d\n", __func__, eth_id, lmac_id);

	if (eth_id < 0 || eth_id >= MAX_RPM)
		return -1;

	if (lmac_id < 0 || lmac_id >= MAX_LMAC_PER_RPM)
		return -1;

	phy = plat_octeontx_bcfg->rpm_cfg[eth_id].lmac_cfg[lmac_id].phy_config;
	if (!phy)
		return -1;

	if (phy->valid && val) {
		if (mode == CLAUSE22) {
			*val = (dev_page >= 0) ?
				phy_mdio_c22_paged_read(phy, dev_page, reg) :
				phy_mdio_read(phy, mode, dev_page, reg);

			ret = 0;
		} else if (mode == CLAUSE45 && dev_page >= 0) {
			*val = phy_mdio_read(phy, mode, dev_page, reg);
			ret = 0;
		}
	}

	return ret;
}

int phy_write_reg(int eth_id, int lmac_id,
	int mode, int dev_page, int reg, int val)
{
	int ret = -1;
	phy_config_t *phy;

	debug_phy_driver("%s: %d:%d\n", __func__, eth_id, lmac_id);

	if (eth_id < 0 || eth_id >= MAX_RPM)
		return -1;

	if (lmac_id < 0 || lmac_id >= MAX_LMAC_PER_RPM)
		return -1;

	phy = plat_octeontx_bcfg->rpm_cfg[eth_id].lmac_cfg[lmac_id].phy_config;
	if (!phy)
		return -1;

	if (phy->valid) {
		if (mode == CLAUSE22) {
			if (dev_page >= 0)
				phy_mdio_c22_paged_write(phy, dev_page, reg, val);
			else
				phy_mdio_write(phy, mode, dev_page, reg, val);

			ret = 0;
		} else if (mode == CLAUSE45 && dev_page >= 0) {
			phy_mdio_write(phy, mode, dev_page, reg, val);
			ret = 0;
		}
	}

	return ret;
}

#endif /* DEBUG_ATF_ENABLE_PHY_DIAGNOSTIC_CMDS */

void phy_set_supported_link_modes(int eth_id, int lmac_id)
{
	phy_config_t *phy;

	debug_phy_driver("%s: %d:%d\n", __func__, eth_id, lmac_id);

	phy = plat_octeontx_bcfg->rpm_cfg[eth_id].lmac_cfg[lmac_id].phy_config;
	if (!phy)
		return;

	/* Call PHY specific callback here */
	if (phy->valid)
		phy->drv->set_supported_modes(eth_id, lmac_id);
}

void phy_reset(int eth_id, int lmac_id)
{
	phy_config_t *phy;

	debug_phy_driver("%s: %d:%d\n", __func__, eth_id, lmac_id);

	phy = plat_octeontx_bcfg->rpm_cfg[eth_id].lmac_cfg[lmac_id].phy_config;
	if (!phy)
		return;

	/* Call PHY specific config callback here */
	if (phy->valid)
		phy->drv->reset(eth_id, lmac_id);
}

void phy_lookup(int eth_id, int lmac_id, int type)
{
	rpm_lmac_config_t *lmac;
	phy_config_t *phy;

	debug_phy_driver("%s: %d:%d\n", __func__, eth_id, lmac_id);

	if (eth_id < 0 || eth_id >= MAX_RPM)
		return;

	if (lmac_id < 0 || lmac_id > MAX_LMAC_PER_RPM)
		return;

	lmac = &plat_octeontx_bcfg->rpm_cfg[eth_id].lmac_cfg[lmac_id];
	phy = lmac->phy_config;

	if (!phy)
		return;

	/* First look for PHY driver in Marvell PHY table */
	phy->drv = phy_marvell_drv_lookup(type);
	if (phy->drv != NULL) {
		phy->valid = 1;
		return;
	}

	/* FIXME: Add new PHY table lookup here */

	/* Last, look for PHY type in Generic PHY table */
	phy->drv = phy_generic_drv_lookup(type);
	if (phy->drv != NULL) {
		phy->valid = 1;
		return;
	}

	/* If reached here, no valid PHY driver found */
	phy->valid = 0;
	ERROR("%s: %d:%d, no valid PHY driver found for type %d\n", __func__,
			eth_id, lmac_id, type);
}

#ifdef DEBUG_ATF_ENABLE_SERDES_DIAGNOSTIC_CMDS
int phy_enable_prbs(int eth_id, int lmac_id, int host_side, int prbs, int dir)
{
	phy_config_t *phy;
	uint64_t ret = -1;

	debug_phy_driver("%s: %d:%d\n", __func__, eth_id, lmac_id);

	if (eth_id < 0 || eth_id >= MAX_RPM)
		return -1;

	if (lmac_id < 0 || lmac_id >= MAX_LMAC_PER_RPM)
		return -1;

	phy = plat_octeontx_bcfg->rpm_cfg[eth_id].lmac_cfg[lmac_id].phy_config;
	if (!phy)
		return -1;

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

	debug_phy_driver("%s: %d:%d\n", __func__, eth_id, lmac_id);

	if (eth_id < 0 || eth_id >= MAX_RPM)
		return -1;

	if (lmac_id < 0 || lmac_id >= MAX_LMAC_PER_RPM)
		return -1;

	phy = plat_octeontx_bcfg->rpm_cfg[eth_id].lmac_cfg[lmac_id].phy_config;
	if (!phy)
		return -1;

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

	debug_phy_driver("%s: %d:%d\n", __func__, eth_id, lmac_id);

	if (eth_id < 0 || eth_id >= MAX_RPM)
		return -1;

	phy = plat_octeontx_bcfg->rpm_cfg[eth_id].lmac_cfg[lmac_id].phy_config;
	if (!phy)
		return -1;

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
	if (phy)
		smi_set_switch(phy, enable);
}

int phy_mdio_read(phy_config_t *phy, int mode, int devad, int reg)
{
	int val = 0;

	if (phy)
		val = smi_read(phy->mdio_bus, mode, phy->addr, devad, reg);

	return val;
}

void phy_mdio_write(phy_config_t *phy, int mode, int devad, int reg, int val)
{
	if (phy)
		smi_write(phy->mdio_bus, phy->addr, devad, mode, reg, val);
}

int phy_mdio_c22_paged_read(phy_config_t *phy, int page, int reg)
{
	int val = 0;
	int page_sel_reg;

	if (!phy)
		return 0;

	if (phy->valid && phy->drv->get_page_select_register)
		page_sel_reg = phy->drv->get_page_select_register();
	else
		page_sel_reg = MII_MARVELL_22_PAGE_REG;

	/* First, set the requested page */
	smi_write(phy->mdio_bus, phy->addr, -1, CLAUSE22, page_sel_reg, page);
	/* Read the register */
	val = smi_read(phy->mdio_bus, CLAUSE22, phy->addr, -1, reg);
	/* Set the page back to zero */
	smi_write(phy->mdio_bus, phy->addr, -1, CLAUSE22, page_sel_reg, 0);

	return val;
}

void phy_mdio_c22_paged_write(phy_config_t *phy, int page, int reg, int val)
{
	int page_sel_reg;

	if (!phy)
		return;

	if (phy->valid && phy->drv->get_page_select_register)
		page_sel_reg = phy->drv->get_page_select_register();
	else
		page_sel_reg = MII_MARVELL_22_PAGE_REG;

	/* First, set the requested page */
	smi_write(phy->mdio_bus, phy->addr, -1, CLAUSE22, page_sel_reg, page);
	/* Read the register */
	smi_write(phy->mdio_bus, phy->addr, -1, CLAUSE22, reg, val);
	/* Set the page back to zero */
	smi_write(phy->mdio_bus, phy->addr, -1, CLAUSE22, page_sel_reg, 0);
}

int phy_get_fec_stats(int eth_id, int lmac_id)
{
	rpm_lmac_config_t *lmac = NULL;
	phy_config_t *phy = NULL;
	int ret;

	debug_phy_driver("%s: %d:%d\n", __func__, eth_id, lmac_id);

	lmac = &plat_octeontx_bcfg->rpm_cfg[eth_id].lmac_cfg[lmac_id];
	phy = lmac->phy_config;

	if (!phy || !lmac->phy_present)
		return -1;

	if (!(phy->drv->flags & PHY_FLAG_HAS_FEC_STATS))
		return -1;

	if (phy->valid && phy->drv->get_fec_stats)
		ret = phy->drv->get_fec_stats(eth_id, lmac_id);
	else
		ret = -1;

	return ret;
}
