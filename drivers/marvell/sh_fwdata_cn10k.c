/*
 * Copyright (C) 2020 Marvell International Ltd.
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

static struct eth_lmac_fwdata_s *get_sh_rpm_fwdata_ptr(int rpm_id, int lmac_id)
{
	struct sh_fwdata *fw_data;
	struct eth_lmac_fwdata_s *sh_rpm_fwdata;

	fw_data = (struct sh_fwdata *)get_sh_fwdata_base();
	sh_rpm_fwdata = &fw_data->eth_fw_data[rpm_id][lmac_id];

	debug_shmem_mgmt("%s: %d:%d fw_data %p rpm_fw_data %p\n",
					__func__, rpm_id,
					lmac_id, fw_data,
					sh_rpm_fwdata);
	return sh_rpm_fwdata;
}

void sh_fwdata_init(void)
{
	cavm_rst_pllx_t rst_pll;
	struct sh_fwdata *fwdata;
	struct eth_lmac_fwdata_s *lmac_fwdata;
	rpm_lmac_config_t *lmac_cfg;
	int i, pf_mac_num;
	uint64_t pf_mac;

	fwdata = (struct sh_fwdata *)get_sh_fwdata_base();
	if (get_sh_fwdata_base() + sizeof(struct sh_fwdata) > SH_FWDATA_LIMIT) {
		fwdata->header_magic = 0x0;
		ERROR("SHARED FWDATA size misconfiguration\n");
		return;
	}
	memset(fwdata, 0, sizeof(fwdata));
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
	for (i = 1; i < pf_mac_num; i++) {
		if (i >= PF_MACNUM_MAX)
			break;
		fwdata->pf_macs[i] = pf_mac;
		pf_mac++;
	}
	rst_pll.u = CSR_READ(CAVM_RST_PLLX(CAVM_RST_PLL_E_MESHCLK));
	fwdata->coreclk = rst_pll.s.cur_mul * RST_REF_CLK;
	rst_pll.u = CSR_READ(CAVM_RST_PLLX(CAVM_RST_PLL_E_SCLK));
	fwdata->sclk = rst_pll.s.cur_mul * RST_REF_CLK;
	fwdata->rvu_af_msixtr_base = CSR_READ(CAVM_RVU_AF_MSIXTR_BASE);

	/* Update LMAC type in sh FW data for each LMAC */
	for (int rpm_id = 0; rpm_id < MAX_RPM; rpm_id++) {
		for (int lmac_id = 0; lmac_id < MAX_LMAC_PER_RPM; lmac_id++) {
			lmac_cfg = &plat_octeontx_bcfg->rpm_cfg[rpm_id].lmac_cfg[lmac_id];
			lmac_fwdata = get_sh_rpm_fwdata_ptr(rpm_id, lmac_id);
			lmac_fwdata->lmac_type = lmac_cfg->mode;
		}
	}
}

void sh_fwdata_update_mac_addr(uint64_t mac, int pf_id)
{
	struct sh_fwdata *fwdata = (struct sh_fwdata *)get_sh_fwdata_base();

	if (pf_id >= PF_MACNUM_MAX)
		return;

	fwdata->pf_macs[pf_id] = mac;
}
