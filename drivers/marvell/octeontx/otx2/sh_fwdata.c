/*
 * Copyright (c) 2016 Marvell.
 * This program is provided "as is" without any warranty of any kind,
 * and is distributed under the applicable Marvell proprietary limited use
 * license agreement.
 */

/* SH FW DATA management driver for OcteonTX2 */

#include <stdio.h>
#include <string.h>
#include <arch.h>
#include <platform_def.h>
#include <octeontx_common.h>
#include <plat_board_cfg.h>
#include <rvu.h>
#include <sh_fwdata.h>
#include <plat/common/platform.h>
#include <assert.h>
#include <debug.h>
#include <octeontx_utils.h>
#include <plat_scfg.h>
#include <sfp_mgmt.h>
#include <libfdt.h>

#ifdef NT_FW_CONFIG
#include <plat_npc_mcam_profile.h>
#endif

#include "cavm-csrs-rst.h"
#include "cavm-csrs-rvu.h"

#undef DEBUG_ATF_SH_MEM_MGMT

#ifdef DEBUG_ATF_SH_MEM_MGMT
#define debug_shmem_mgmt printf
#else
#define debug_shmem_mgmt(...) ((void) (0))
#endif
#define RST_REF_CLK 50

static struct eth_lmac_fwdata_s *get_sh_cgx_fwdata_ptr(int cgx_id, int lmac_id)
{
	struct sh_fwdata *fw_data;
	struct eth_lmac_fwdata_s *sh_cgx_fwdata;

	fw_data = (struct sh_fwdata *)get_sh_fwdata_base();
	sh_cgx_fwdata = &fw_data->eth_fw_data[cgx_id][lmac_id];

	debug_shmem_mgmt("%s: %d:%d fw_data %p cgx_fw_data %p\n",
					__func__, cgx_id,
					lmac_id, fw_data,
					sh_cgx_fwdata);
	return sh_cgx_fwdata;
}

int sh_fwdata_get_sfp_info_offset(int eth_id, int lmac_id)
{
	struct sh_fwdata *fw_data;
	struct eth_lmac_fwdata_s *sh_eth_fwdata;
	void *sfp_info;
	uint32_t offset;

	if (eth_id >= ETH_MAX || lmac_id >= ETH_LMACS_MAX)
		return -1;

	fw_data = (struct sh_fwdata *)get_sh_fwdata_base();
	sh_eth_fwdata = &fw_data->eth_fw_data[eth_id][lmac_id];
	sfp_info = &sh_eth_fwdata->sfp_eeprom;
	offset = (int)((char *)sfp_info - (char *)fw_data);

	debug_shmem_mgmt("%s: %d:%d fw_data: %p sfp info offset: %x\n",
				__func__, eth_id,
				lmac_id, fw_data, offset);

	return offset;
}

static void sh_fwdata_update_ptp(struct sh_fwdata *fwdata)
{
	void *fdt = fdt_ptr;
	int offset, lenp;
	const int *val;

	offset = fdt_node_offset_by_compatible(fdt, -1, "marvell,ptp");
	/* Proceed without ptp node */
	if (offset < 0)
		return;

	val = fdt_getprop(fdt, offset, "external-ptp-clk", &lenp);
	if (val)
		fwdata->ptp_ext_clk_rate = fdt32_to_cpu(*val);

	if (fdt_get_property(fdt, offset, "external-tstamp", &lenp))
		fwdata->ptp_ext_tstamp = 1;
}

void sh_fwdata_init(void)
{
	cavm_rst_boot_t rst_boot;
	struct sh_fwdata *fwdata;
	int i, pf_mac_num;
	uint64_t pf_mac;

	fwdata = (struct sh_fwdata *)get_sh_fwdata_base();
	if (get_sh_fwdata_base() + sizeof(struct sh_fwdata) > SH_FWDATA_LIMIT) {
		fwdata->header_magic = 0x0;
		ERROR("SHARED FWDATA size misconfiguration\n");
		return;
	}
	memset(fwdata, 0, sizeof(*fwdata));
	fwdata->header_magic = SH_FWDATA_HEADER_MAGIC;
	fwdata->version = SH_FWDATA_VERSION;

	/* MAC address */
	pf_mac_num = plat_octeontx_bcfg->pf_mac_num;
	pf_mac = plat_octeontx_bcfg->pf_mac_base;

	/* Clear MAC tables */
	for (i = 0; i < PF_MACNUM_MAX; i++)
		fwdata->pf_macs[i]  = 0;

	for (i = 0; i < VF_MACNUM_MAX; i++)
		fwdata->vf_macs[i] = 0;

	/* Init PF MAC address; Skip PF 0 used as AF */
	for (i = 1; i <= pf_mac_num; i++) {
		if (i >= PF_MACNUM_MAX)
			break;
		fwdata->pf_macs[i] = pf_mac;
		pf_mac++;
	}
	rst_boot.u = CSR_READ(CAVM_RST_BOOT);
	fwdata->coreclk = rst_boot.s.c_mul * RST_REF_CLK;
	fwdata->sclk = rst_boot.s.pnr_mul * RST_REF_CLK;
	fwdata->rvu_af_msixtr_base = CSR_READ(CAVM_RVU_AF_MSIXTR_BASE);
#ifdef NT_FW_CONFIG
	fwdata->mcam_addr = otx2_get_npc_profile_addr(0);
	fwdata->mcam_sz = otx2_get_npc_profile_size(0);
#endif
	sh_fwdata_update_ptp(fwdata);
}

void sh_fwdata_update_supported_fec(int cgx_id, int lmac_id)
{
	int val;
	struct eth_lmac_fwdata_s *fwdata;
	cgx_lmac_config_t *lmac_cfg;

	lmac_cfg = &plat_octeontx_bcfg->cgx_cfg[cgx_id].lmac_cfg[lmac_id];

	fwdata = get_sh_cgx_fwdata_ptr(cgx_id, lmac_id);

	fwdata->rw_valid = 0;

	/* If SFP slot is present, supported FEC should
	 * be returned based on transceiver capabilities.
	 * If not, return based on PCS supported type
	 */
	if (lmac_cfg->sfp_slot)
		val = sfp_get_fec_capability(cgx_id, lmac_id);
	else
		val = cgx_get_supported_fec_type(cgx_id, lmac_id);

	if (fwdata->phy.misc.mod_type == PHY_MOD_TYPE_PAM4)
		val = CGX_FEC_RS; /* PAM4 requires RS-FEC */

	fwdata->supported_fec = val;
	fwdata->rw_valid = 1;
	debug_shmem_mgmt("%s: %d:%d fwdata->supported_fec %llx\n", __func__,
						cgx_id,
						lmac_id, fwdata->supported_fec);
}

void sh_fwdata_update_eeprom_data(int cgx_id, int lmac_id, uint16_t sff_id)
{
	struct eth_lmac_fwdata_s *fwdata;
	sfp_shared_data_t *sh_data = sfp_get_sh_mem_ptr(cgx_id, lmac_id);

	fwdata = get_sh_cgx_fwdata_ptr(cgx_id, lmac_id);

	fwdata->rw_valid = 0;

	memcpy(fwdata->sfp_eeprom.buf, sh_data->buf, SFP_EEPROM_SIZE);

	fwdata->sfp_eeprom.sff_id = sff_id;
	fwdata->rw_valid = 1;
}

void sh_fwdata_clear_eeprom_data(int cgx_id, int lmac_id, uint16_t sff_id)
{
	struct eth_lmac_fwdata_s *fwdata;

	fwdata = get_sh_cgx_fwdata_ptr(cgx_id, lmac_id);

	fwdata->rw_valid = 0;
	fwdata->sfp_eeprom.sff_id = 0;
	memset(fwdata->sfp_eeprom.buf, 0, SFP_EEPROM_SIZE);
	fwdata->rw_valid = 1;
}

int sh_fwdata_get_supported_fec(int cgx_id, int lmac_id)
{
	struct eth_lmac_fwdata_s *fwdata;

	fwdata = get_sh_cgx_fwdata_ptr(cgx_id, lmac_id);

	debug_shmem_mgmt("%s: %d:%d supported fec %d\n", __func__,
			cgx_id, lmac_id,
			fwdata->supported_fec);

	return fwdata->supported_fec;
}

void sh_fwdata_set_supported_link_modes(int cgx_id, int lmac_id)
{
	struct eth_lmac_fwdata_s *fwdata;
	cgx_lmac_config_t *lmac_cfg;

	lmac_cfg = &plat_octeontx_bcfg->cgx_cfg[cgx_id].lmac_cfg[lmac_id];
	fwdata = get_sh_cgx_fwdata_ptr(cgx_id, lmac_id);

	fwdata->supported_link_modes = lmac_cfg->supported_link_modes;
	debug_shmem_mgmt("%s: %d:%d supported link mode 0x%llx\n", __func__,
			cgx_id, lmac_id,
			fwdata->supported_link_modes);
}

void sh_fwdata_update_mac_addr(uint64_t mac, int pf_id)
{
	struct sh_fwdata *fwdata = (struct sh_fwdata *)get_sh_fwdata_base();

	if (pf_id >= PF_MACNUM_MAX)
		return;

	fwdata->pf_macs[pf_id] = mac;
}

void sh_fwdata_update_phy_mod_type(int cgx_id, int lmac_id)
{
	struct eth_lmac_fwdata_s *fwdata;
	phy_config_t *phy;
	cgx_lmac_config_t *lmac_cfg;

	lmac_cfg = &plat_octeontx_bcfg->cgx_cfg[cgx_id].lmac_cfg[lmac_id];
	phy = &lmac_cfg->phy_config;
	fwdata = get_sh_cgx_fwdata_ptr(cgx_id, lmac_id);

	fwdata->rw_valid = 0;
	/* Make sure Linux kernel sees rw_valid is cleared before changing
	 * other fields of fwdata.
	 */
	WMB;

	fwdata->phy.misc.mod_type = phy->mod_type;
	/* Make sure that the write to phy_mod_type is done before indicating
	 * to Linux that fwdata is valid.
	 */
	WMB;

	fwdata->rw_valid = 1;
}

void sh_fwdata_update_phy_can_change_mod_type(int cgx_id, int lmac_id)
{
	struct eth_lmac_fwdata_s *fwdata;
	phy_config_t *phy;
	cgx_lmac_config_t *lmac_cfg;

	lmac_cfg = &plat_octeontx_bcfg->cgx_cfg[cgx_id].lmac_cfg[lmac_id];
	phy = &lmac_cfg->phy_config;
	fwdata = get_sh_cgx_fwdata_ptr(cgx_id, lmac_id);

	fwdata->rw_valid = 0;
	/* Make sure Linux kernel sees rw_valid is cleared before changing
	 * other fields of fwdata.
	 */
	WMB;

	if (phy->drv->flags & PHY_FLAG_SUPPORTS_CHANGING_MOD_TYPE)
		fwdata->phy.misc.can_change_mod_type = 1;
	else
		fwdata->phy.misc.can_change_mod_type = 0;
	/* Make sure that the write to phy.can_change_mod_type is done before
	 * indicating to Linux that fwdata is valid.
	 */
	WMB;

	fwdata->rw_valid = 1;
}

void sh_fwdata_update_phy_has_fec_stats(int cgx_id, int lmac_id)
{
	struct eth_lmac_fwdata_s *fwdata;
	phy_config_t *phy;
	cgx_lmac_config_t *lmac_cfg;

	lmac_cfg = &plat_octeontx_bcfg->cgx_cfg[cgx_id].lmac_cfg[lmac_id];
	phy = &lmac_cfg->phy_config;
	fwdata = get_sh_cgx_fwdata_ptr(cgx_id, lmac_id);

	fwdata->rw_valid = 0;
	/* Make sure Linux kernel sees rw_valid is cleared before changing
	 * other fields of fwdata.
	 */
	WMB;

	if (phy->drv->flags & PHY_FLAG_HAS_FEC_STATS)
		fwdata->phy.misc.has_fec_stats = 1;
	else
		fwdata->phy.misc.has_fec_stats = 0;
	/* Make sure that the write to fwdata->phy.has_fec_stats is done before
	 * indicating to Linux that fwdata is valid.
	 */
	WMB;

	fwdata->rw_valid = 1;
}

void sh_fwdata_update_phy_fec_stats(int cgx_id, int lmac_id)
{
	struct eth_lmac_fwdata_s *fwdata;
	phy_config_t *phy;
	cgx_lmac_config_t *lmac_cfg;

	lmac_cfg = &plat_octeontx_bcfg->cgx_cfg[cgx_id].lmac_cfg[lmac_id];
	phy = &lmac_cfg->phy_config;
	fwdata = get_sh_cgx_fwdata_ptr(cgx_id, lmac_id);

	fwdata->rw_valid = 0;
	/* Make sure Linux kernel sees rw_valid is cleared before changing
	 * other fields of fwdata.
	 */
	WMB;

	fwdata->phy.fec_stats.rsfec_corr_cws    = phy->fec_stats.rsfec_corr_cws;
	fwdata->phy.fec_stats.rsfec_uncorr_cws  = phy->fec_stats.rsfec_uncorr_cws;
	fwdata->phy.fec_stats.brfec_corr_blks   = phy->fec_stats.brfec_corr_blks;
	fwdata->phy.fec_stats.brfec_uncorr_blks = phy->fec_stats.brfec_uncorr_blks;

	/* Make sure that the writes to fwdate->phy.fec_stats are done before
	 * indicating to Linux that fwdata is valid.
	 */
	WMB;

	fwdata->rw_valid = 1;
}
