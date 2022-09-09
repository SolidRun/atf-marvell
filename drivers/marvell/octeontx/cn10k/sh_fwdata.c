/*
 * Copyright (c) 2020 Marvell.
 * This program is provided "as is" without any warranty of any kind,
 * and is distributed under the applicable Marvell proprietary limited use
 * license agreement.
 */

/* SH FW DATA management driver for CN10K */

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
#include "cavm-csrs-apa.h"
#include "cavm-csrs-rvu.h"

#undef DEBUG_ATF_SH_MEM_MGMT

#ifdef DEBUG_ATF_SH_MEM_MGMT
#define debug_shmem_mgmt printf
#else
#define debug_shmem_mgmt(...) ((void) (0))
#endif
#define RST_REF_CLK 50

static struct eth_lmac_fwdata_s *get_sh_rpm_fwdata_ptr(int rpm_id, int lmac_id)
{
	struct sh_fwdata *fw_data;
	struct eth_lmac_fwdata_s *sh_rpm_fwdata;

	fw_data = (struct sh_fwdata *)get_sh_fwdata_base();
#if !defined(PLAT_cn10kb)
	sh_rpm_fwdata = &fw_data->eth_fw_data[rpm_id][lmac_id];
#else
	sh_rpm_fwdata = &fw_data->eth_fw_data_usx[rpm_id][lmac_id];
#endif
	debug_shmem_mgmt("%s: %d:%d fw_data %p rpm_fw_data %p\n",
					__func__, rpm_id,
					lmac_id, fw_data,
					sh_rpm_fwdata);
	return sh_rpm_fwdata;
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
	sh_eth_fwdata = get_sh_rpm_fwdata_ptr(eth_id, lmac_id);
	sfp_info = &sh_eth_fwdata->sfp_eeprom;
	offset = (int)((char *)sfp_info - (char *)fw_data);

	debug_shmem_mgmt("%s: %d:%d fw_data: %p sfp info offset: %x\n",
				__func__, eth_id,
				lmac_id, fw_data, offset);

	return offset;
}

void sh_fwdata_update_supported_fec(int rpm_id, int lmac_id)
{
	int val;
	struct eth_lmac_fwdata_s *fwdata;
	rpm_lmac_config_t *lmac_cfg;
	portm_config_t *portm;

	lmac_cfg = &plat_octeontx_bcfg->rpm_cfg[rpm_id].lmac_cfg[lmac_id];
	portm = &(plat_octeontx_bcfg->portm_cfg[lmac_cfg->portm_idx]);

	fwdata = get_sh_rpm_fwdata_ptr(rpm_id, lmac_id);

	fwdata->rw_valid = 0;

	/* FIXME: If SFP slot is present, supported FEC should
	 * be returned based on transceiver capabilities.
	 * If not, return based on PCS supported type
	 */
	val = cn10k_portm_get_mode_desc_fec(portm->portm_mode);

	if ((val == PORTM_FEC_RS_528_ONLY) || (val == PORTM_FEC_RS_544_ONLY))
		val = PORTM_FEC_RS;

	fwdata->supported_fec = val;
	fwdata->rw_valid = 1;
	debug_shmem_mgmt("%s: %d:%d fwdata->supported_fec %llx\n", __func__,
						rpm_id,
						lmac_id, fwdata->supported_fec);
}

int sh_fwdata_get_supported_fec(int rpm_id, int lmac_id)
{
	struct eth_lmac_fwdata_s *fwdata;

	fwdata = get_sh_rpm_fwdata_ptr(rpm_id, lmac_id);

	debug_shmem_mgmt("%s: %d:%d supported fec %lld\n", __func__,
			rpm_id, lmac_id,
			fwdata->supported_fec);

	return fwdata->supported_fec;
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
	cavm_rst_pllx_t rst_pll;
	cavm_apax_pll_t apa_pll;
	struct sh_fwdata *fwdata;
	struct eth_lmac_fwdata_s *lmac_fwdata;
	rpm_lmac_config_t *lmac_cfg;
	int i, pf_mac_num;

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

	/* Clear MAC tables */
	for (i = 0; i < PF_MACNUM_MAX; i++)
		fwdata->pf_macs[i]  = 0;

	for (i = 0; i < VF_MACNUM_MAX; i++)
		fwdata->vf_macs[i] = 0;

	/* Init PF MAC address; Skip PF 0 used as AF */
	for (i = 1; i <= pf_mac_num; i++) {
		if (i >= PF_MACNUM_MAX)
			break;
		fwdata->pf_macs[i] = plat_octeontx_bcfg->pf_macs[i-1];
	}
	apa_pll.u = CSR_READ(CAVM_APAX_PLL(0));
	fwdata->coreclk = apa_pll.s.next_mul * RST_REF_CLK;
	rst_pll.u = CSR_READ(CAVM_RST_PLLX(CAVM_RST_PLL_E_SCLK));
	fwdata->sclk = rst_pll.s.cur_mul * RST_REF_CLK;
	fwdata->rvu_af_msixtr_base = CSR_READ(CAVM_RVU_AF_MSIXTR_BASE);

	/* Update LMAC type in sh FW data for each LMAC */
	for (int rpm_id = 0; rpm_id < MAX_RPM; rpm_id++) {
		for (int lmac_id = 0; lmac_id < MAX_LMAC_PER_RPM; lmac_id++) {
			lmac_cfg = &plat_octeontx_bcfg->rpm_cfg[rpm_id].lmac_cfg[lmac_id];
			if (lmac_cfg->lmac_enable) {
				lmac_fwdata = get_sh_rpm_fwdata_ptr(rpm_id, lmac_id);
				lmac_fwdata->lmac_type = lmac_cfg->mode;
				lmac_fwdata->portm_idx = lmac_cfg->portm_idx;
			}
		}
	}
#ifdef NT_FW_CONFIG
	fwdata->mcam_addr = cn10k_get_npc_profile_addr(0);
	fwdata->mcam_sz = cn10k_get_npc_profile_size(0);
#endif
	sh_fwdata_update_ptp(fwdata);
}

void sh_fwdata_set_lmac_type(int rpm_id, int lmac_id, int mac_type)
{
	struct eth_lmac_fwdata_s *fwdata =
		get_sh_rpm_fwdata_ptr(rpm_id, lmac_id);

	if (mac_type == PORTM_ETH) {
		rpm_lmac_config_t *lmac_cfg;

		lmac_cfg = &plat_octeontx_bcfg->rpm_cfg[rpm_id].lmac_cfg[lmac_id];
		fwdata->lmac_type = lmac_cfg->mode;
		debug_shmem_mgmt("%s: %d:%d LMAC mode 0x%llx\n",
			__func__,
			rpm_id, lmac_id,
			fwdata->lmac_type);
	} else {
		fwdata->rw_valid = 0;
		fwdata->supported_link_modes = 0;
		fwdata->supported_an = 0;
		fwdata->supported_fec = 0;
		fwdata->lmac_type = 0;

		debug_shmem_mgmt("%s: %d:%d Ethernet LMAC disabled\n",
			__func__, rpm_id, lmac_id);
	}
}

void sh_fwdata_update_mac_addr(uint64_t mac, int pf_id)
{
	struct sh_fwdata *fwdata = (struct sh_fwdata *)get_sh_fwdata_base();

	if (pf_id >= PF_MACNUM_MAX)
		return;

	fwdata->pf_macs[pf_id] = mac;
}

void sh_fwdata_set_supported_link_modes(int rpm_id, int lmac_id)
{
	struct eth_lmac_fwdata_s *fwdata;
	rpm_lmac_config_t *lmac_cfg;

	lmac_cfg = &plat_octeontx_bcfg->rpm_cfg[rpm_id].lmac_cfg[lmac_id];
	fwdata = get_sh_rpm_fwdata_ptr(rpm_id, lmac_id);

	fwdata->supported_link_modes = lmac_cfg->supported_link_modes;
	debug_shmem_mgmt("%s: %d:%d supported link mode 0x%llx\n", __func__,
			rpm_id, lmac_id,
			fwdata->supported_link_modes);
}

void sh_fwdata_set_supported_an(int rpm_id, int lmac_id)
{
	rpm_lmac_config_t *lmac_cfg;
	struct eth_lmac_fwdata_s *fwdata;
	portm_config_t *portm;

	lmac_cfg = &plat_octeontx_bcfg->rpm_cfg[rpm_id].lmac_cfg[lmac_id];
	portm = &(plat_octeontx_bcfg->portm_cfg[lmac_cfg->portm_idx]);
	fwdata = get_sh_rpm_fwdata_ptr(rpm_id, lmac_id);

	if (lmac_cfg->phy_present)
		fwdata->supported_an = 1;
	else	/* FIXME : to add a separate field for AN as this function doesn't support SGMII */
		fwdata->supported_an = cn10k_portm_get_mode_desc_ap_sup(portm->portm_mode);

	debug_shmem_mgmt("%s: %d:%d supported AN %lld\n", __func__,
			rpm_id, lmac_id,
			fwdata->supported_an);
}

void sh_fwdata_update_eeprom_data(int portm_idx, uint16_t sff_id)
{
	struct eth_lmac_fwdata_s *fwdata;
	sfp_shared_data_t *sh_data;
	int rpm_id, lmac_id;

	rpm_id = cn10k_portm_get_rpm_num(portm_idx);
	lmac_id = cn10k_portm_get_rpm_lmac_num(portm_idx);

	if (rpm_id == -1 || lmac_id == -1) {
		ERROR("%s: PORTM%d is not a valid port\n",
			__func__, portm_idx);
		return;
	}

	sh_data = sfp_get_sh_mem_ptr(portm_idx);
	fwdata = get_sh_rpm_fwdata_ptr(rpm_id, lmac_id);
	fwdata->rw_valid = 0;

	memcpy(fwdata->sfp_eeprom.buf, sh_data->buf, SFP_EEPROM_SIZE);

	fwdata->sfp_eeprom.sff_id = sff_id;
	fwdata->rw_valid = 1;
}

void sh_fwdata_clear_eeprom_data(int rpm_id, int lmac_id, uint16_t sff_id)
{
	struct eth_lmac_fwdata_s *fwdata;

	fwdata = get_sh_rpm_fwdata_ptr(rpm_id, lmac_id);

	fwdata->rw_valid = 0;
	fwdata->sfp_eeprom.sff_id = 0;
	memset(fwdata->sfp_eeprom.buf, 0, SFP_EEPROM_SIZE);
	fwdata->rw_valid = 1;
}
