/*
 * Copyright (c) 2024 Marvell.
 * SPDX-License-Identifier: BSD-3-Clause
 */

/* RVU driver for CN20K */

#include <stdio.h>
#include <stdint.h>
#include <inttypes.h>

#include <octeontx_common.h>
#include <plat_board_cfg.h>
#include <rvu_20k.h>
#include <assert.h>
#include <debug.h>
#include <octeontx_utils.h>
#include <plat_cn20k_configuration.h>

#include "cavm-csrs-nix.h"
#include "cavm-csrs-npa.h"
#include "cavm-csrs-pccpf.h"
#include "cavm-csrs-rvu.h"

#include "cavm-csrs-spi.h"


/* for LEGACY logging, define DEBUG_ATF_RVU to enable debug logs */
#undef DEBUG_ATF_RVU

#if defined(MRVL_TF_LOG_MODULE)
#  undef MRVL_TF_LOG_MODULE
#  define MRVL_TF_LOG_MODULE  MRVL_TF_LOG_MODULE_RVU
#  define debug_rvu(...) (mrvl_tf_log_modules & MRVL_TF_LOG_MODULE) ? \
			  tf_log(LOG_MARKER_NOTICE __VA_ARGS__) : (void)0
#elif DEBUG_ATF_RVU
#define debug_rvu printf
#else
#define debug_rvu(...) ((void) (0))
#endif

static struct rvu_device rvu_dev[RVU_MAX_PFS];

int get_max_rvu_pfs(void)
{
	return 32;
}

/* set total VFs and HWVFs for PFs */
static void enable_rvu_pf(int pf)
{
	union cavm_rvu_priv_pfx_cfg pf_cfg;

	pf_cfg.u = 0;
	/* enable AF access when configuring the PF as AF */
	if (pf == RVU_AF)
		pf_cfg.s.af_ena = TRUE;
	else
		pf_cfg.s.af_ena = FALSE;
	pf_cfg.s.ena = TRUE;

	/* For now only set for AF */
	if (pf == RVU_AF) {
		pf_cfg.s.nvf = rvu_dev[pf].num_vfs;
		pf_cfg.s.first_hwvf = rvu_dev[pf].first_hwvf;
	}
	CSR_WRITE(CAVM_RVU_PRIV_PFX_CFG(pf), pf_cfg.u);
}

static void disable_rvu_pf(int pf)
{
	union cavm_rvu_priv_pfx_cfg pf_cfg;

	pf_cfg.u = 0;
	pf_cfg.s.af_ena = 0;
	pf_cfg.s.ena = 0;
	pf_cfg.s.nvf = 0;
	pf_cfg.s.first_hwvf = 0;
	CSR_WRITE(CAVM_RVU_PRIV_PFX_CFG(pf), pf_cfg.u);

}
static void dump_rvu_devs(void)
{
	int pf;

	for (pf = 0; pf < get_max_rvu_pfs(); pf++) {
		debug_rvu("******************************************\n");
		debug_rvu("PF%d: enable=%d, num_vfs=%d, first_hwvf=%d\n"
			  "pf_num_msix_vec=%d, vf_num_msix_vec=%d\n"
			  "pf_res_nix_ena=%d\n",
			  pf, rvu_dev[pf].enable, rvu_dev[pf].num_vfs,
			  rvu_dev[pf].first_hwvf, rvu_dev[pf].pf_num_msix_vec,
			  rvu_dev[pf].vf_num_msix_vec,
			  rvu_dev[pf].pf_res_nix_ena);
		debug_rvu("PCI Settings:\n"
			  "pf_devid=0x%x, vf_devid=0x%x, class_code=0x%x\n",
			  rvu_dev[pf].pci.pf_devid, rvu_dev[pf].pci.vf_devid,
			  rvu_dev[pf].pci.class_code);
	}

	debug_rvu("******************************************\n");
}

/* Initialize PCI PF_DEVID and VF_DEVID */
static void config_rvu_pci(void)
{
	cavm_rvu_priv_pfx_id_cfg_t pf_id_cfg;
	int pf;

	for (pf = 0; pf < 1; pf++) {
		pf_id_cfg.u = 0;
		pf_id_cfg.s.class_code = rvu_dev[pf].pci.class_code;
		pf_id_cfg.s.pf_devid = rvu_dev[pf].pci.pf_devid;
		pf_id_cfg.s.vf_devid = rvu_dev[pf].pci.vf_devid;
		CSR_WRITE(CAVM_RVU_PRIV_PFX_ID_CFG(pf), pf_id_cfg.u);
		debug_rvu("RVU: PF%d devid[7:0] 0x%x\n", pf,
			  pf_id_cfg.s.pf_devid);
	}
}

static void config_rvu_dev(int pf, rvu_pf_cfg_t *pf_cfg, int *hwvf)
{

	rvu_dev[pf].enable = TRUE;
	rvu_dev[pf].num_vfs = pf_cfg->num_vfs;
	rvu_dev[pf].first_hwvf = pf_cfg->num_vfs ? *hwvf : 0;
	rvu_dev[pf].pf_num_msix_vec = pf_cfg->num_msix_vec;
	rvu_dev[pf].pci.pf_devid = pf_cfg->devid & DEVID_MASK;
	rvu_dev[pf].pci.vf_devid = pf_cfg->vf_devid & DEVID_MASK;
	rvu_dev[pf].vf_num_msix_vec = pf_cfg->num_vfs ? pf_cfg->num_msix_vec : 0;
	rvu_dev[pf].pci.class_code = pf_cfg->cls_code & CLASS_CODE_MASK;
	rvu_dev[pf].pf_res_nix_ena = NIX_DISABLED;

	switch (rvu_dev[pf].pci.pf_devid) {
	case CAVM_PCC_DEV_IDL_E_RVU_AF:
		rvu_dev[pf].vf_num_msix_vec = RVU_VF_INT_VEC_COUNT;
		break;
	case CAVM_PCC_DEV_IDL_E_RVU:
		rvu_dev[pf].pf_res_nix_ena = NIX_ENABLE;
		break;
	}
	/* Increment already allocated HWVFs */
	*hwvf += rvu_dev[pf].num_vfs;
}

static int init_rvu_dev_from_fdt(void)
{
	int current_hwvf = 0, ent;
	rvu_config_t *rvu_cfg;
	rvu_pf_cfg_t *pf_cfg = NULL;

	rvu_cfg = &plat_octeontx_bcfg->rvu_cfg;
	/* Check if FDT config is valid */
	if (!(rvu_cfg->valid)) {
		ERROR("Invalid RVU configuration, skipping RVU init!.\n");
		return -1;
	}
	/* Now initialize devices passed in dts */
	for (ent = 0; ent < rvu_cfg->num_dev; ent++) {
		pf_cfg = &rvu_cfg->pf_cfg[ent];

		/*Skip the entry is not enabled*/
		if (!pf_cfg->enable)
			continue;
		config_rvu_dev(pf_cfg->pf_id, pf_cfg, &current_hwvf);
	}
	return 0;
}

void rvu_devices_init(void)
{
	int pf, rc;

	rc = init_rvu_dev_from_fdt();
	if (rc < 0)
		return;

	dump_rvu_devs();

	for (pf = 0; pf < get_max_rvu_pfs(); pf++) {
		if (rvu_dev[pf].enable)
			enable_rvu_pf(pf);
		else	/* Disable unused PFs */
			disable_rvu_pf(pf);
	}
	config_rvu_pci();
}
