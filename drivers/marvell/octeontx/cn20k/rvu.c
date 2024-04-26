/*
 * Copyright (c) 2024 Marvell.
 * SPDX-License-Identifier: BSD-3-Clause
 */

/* RVU driver for CN20K */

#include <stdio.h>
#include <stdint.h>
#include <inttypes.h>

#include <arch.h>
#include <platform_def.h>
#include <octeontx_common.h>
#include <plat_board_cfg.h>
#include <rvu_20k.h>
#include <assert.h>
#include <debug.h>
#include <octeontx_utils.h>
#include <plat_cn20k_configuration.h>

#include "cavm-csrs-nix.h"
#include "cavm-csrs-rvu.h"
#include "cavm-csrs-npa.h"
#include "cavm-csrs-pccpf.h"
#include "cavm-csrs-ecam.h"

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

static int get_max_rvu_pfs(void)
{
	uint64_t cfg;

	cfg = RVU_CSR_READ(RVU_AF_BAR0_BASE, RVU_PRIV_CONST);
	return ((cfg >> 33) & 0xFF);
}

/* Skip pci enemuration of non-active PFs */
static void rvu_disable_ecam_access(void)
{
	union cavm_ecamx_domx_busx_permit bus_permit;
	union cavm_ecamx_domx_devx_permit dev_permit;
	int pf, ecam = 0, domain = 2, dev = 0, bus = 0;

	for (pf = 0; pf < get_max_rvu_pfs(); pf++) {
		if (rvu_dev[pf].enable)
			continue;
		/* Disable bus */
		bus = pf + 2;
		/* At bus 0x22 and 0x43 bridges are connected. so skip them */
		if (bus == 0x22 || bus == 0x43)
			bus = pf + 3;
		bus_permit.u = RVU_CSR_READ(ECAMX_PF_BAR0(ecam),
					    ECAMX_DOMX_BUSX_PERMIT(domain, bus));
		bus_permit.s.sec_dis = 0;
		bus_permit.s.nsec_dis = 1;
		bus_permit.s.xcp0_dis = 0;
		bus_permit.s.xcp1_dis = 0;
		bus_permit.s.xcp2_dis = 0;
		bus_permit.s.xcp3_dis = 0;
		RVU_CSR_WRITE(ECAMX_PF_BAR0(ecam),
			      ECAMX_DOMX_BUSX_PERMIT(domain, bus),
			      bus_permit.u);
		/* Device disable */
		dev_permit.u = RVU_CSR_READ(ECAMX_PF_BAR0(ecam),
					    ECAMX_DOMX_DEVX_PERMIT(domain, dev));
		dev_permit.s.sec_dis = 0;
		dev_permit.s.nsec_dis = 1;
		dev_permit.s.xcp0_dis = 0;
		dev_permit.s.xcp1_dis = 0;
		dev_permit.s.xcp2_dis = 0;
		dev_permit.s.xcp3_dis = 0;
		RVU_CSR_WRITE(ECAMX_PF_BAR0(ecam),
			      ECAMX_DOMX_DEVX_PERMIT(domain, dev),
			      dev_permit.u);
	}
}

/* This function set the msix vector offset for all rvu blocks */
static void conf_af_block_vec_offset(void)
{
	union cavm_rvu_priv_pfx_int_cfg af_int_cfg;
	union cavm_nixx_priv_af_int_cfg nix_int_cfg;
	union cavm_npa_priv_af_int_cfg npa_int_cfg;
	int af_msix_used = 0;

	/*TODO: Should add mbox interrupts */
	af_msix_used += RVU_AF_INT_VEC_E_MSIX_SIZE;

	/* Configure RVU_PF_INT_VEC_E right next to RVU_AF */
	af_int_cfg.u = RVU_CSR_READ(RVU_AF_BAR0_BASE, RVU_PRIV_PFX_INT_CFG(0));
	af_int_cfg.s.msix_offset = af_msix_used;
	RVU_CSR_WRITE(RVU_AF_BAR0_BASE, RVU_PRIV_PFX_INT_CFG(0), af_int_cfg.u);
	af_msix_used += af_int_cfg.s.msix_size;

	/*
	 * Configure next blocks accordingly to the number
	 * of MSI-X AF interrupts already consumed
	 */
	/*TODO: Use RVU_PF_DISC register to check block is implemeted */
	nix_int_cfg.u = RVU_CSR_READ(RVU_AF_BAR0_BASE, NIX_PRIV_AF_INT_CFG);
	nix_int_cfg.s.msix_offset = af_msix_used;
	RVU_CSR_WRITE(RVU_AF_BAR0_BASE, NIX_PRIV_AF_INT_CFG, nix_int_cfg.u);
	af_msix_used += nix_int_cfg.s.msix_size;

	npa_int_cfg.u = RVU_CSR_READ(RVU_AF_BAR0_BASE, NPA_PRIV_AF_INT_CFG);
	npa_int_cfg.s.msix_offset = af_msix_used;
	RVU_CSR_WRITE(RVU_AF_BAR0_BASE, NPA_PRIV_AF_INT_CFG, npa_int_cfg.u);
	af_msix_used += npa_int_cfg.s.msix_size;
}

static int msix_enable(void)
{
	uint32_t msix_offset = 0;
	int pf;

	/* set AF MSIX table base*/
	union cavm_rvu_af_msixtr_base af_msix_cfg;

	af_msix_cfg.u = MSIX_TABLE_BASE;
	RVU_CSR_WRITE(RVU_AF_BAR0_BASE, RVU_AF_MSIXTR_BASE, af_msix_cfg.u);

	conf_af_block_vec_offset();
	for (pf = 0; pf < get_max_rvu_pfs(); pf++) {
		if (!rvu_dev[pf].enable)
			continue;

		union cavm_rvu_priv_pfx_msix_cfg pfx_msix_cfg;

		/* Get the number of MSIX from rvu_dev array */
		pfx_msix_cfg.u = 0;
		pfx_msix_cfg.s.pf_msixt_offset = msix_offset;
		pfx_msix_cfg.s.pf_msixt_sizem1 =
				rvu_dev[pf].pf_num_msix_vec - 1;
		msix_offset += (rvu_dev[pf].pf_num_msix_vec);

		/* If pf_msix_offset needs alignment */
		if (msix_offset & RVU_ALIGNMENT_MASK) {
			msix_offset += RVU_OFFSET_ALIGNMENT;
			msix_offset &= ~(RVU_ALIGNMENT_MASK);
		}

		if (rvu_dev[pf].num_vfs) {
			pfx_msix_cfg.s.vf_msixt_offset = msix_offset;
			pfx_msix_cfg.s.vf_msixt_sizem1 =
				rvu_dev[pf].vf_num_msix_vec - 1;
			msix_offset += ((rvu_dev[pf].num_vfs &
				(MAX_RVU_VFS_PER_PF - 1)) *
				rvu_dev[pf].vf_num_msix_vec);

			/* If vf_msix_offset needs alignment */
			if (msix_offset & RVU_ALIGNMENT_MASK) {
				msix_offset += RVU_OFFSET_ALIGNMENT;
				msix_offset &= ~(RVU_ALIGNMENT_MASK);
			}

		}
		RVU_CSR_WRITE(RVU_AF_BAR0_BASE, RVU_PRIV_PFX_MSIX_CFG(pf),
			      pfx_msix_cfg.u);
	}
	return 0;
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
	pf_cfg.s.nvf = rvu_dev[pf].num_vfs;
	pf_cfg.s.first_hwvf = rvu_dev[pf].first_hwvf;
	RVU_CSR_WRITE(RVU_AF_BAR0_BASE, RVU_PRIV_PFX_CFG(pf), pf_cfg.u);
}

static void disable_rvu_pf(int pf)
{
	union cavm_rvu_priv_pfx_cfg pf_cfg;

	pf_cfg.u = 0;
	pf_cfg.s.af_ena = 0;
	pf_cfg.s.ena = 0;
	pf_cfg.s.nvf = 0;
	pf_cfg.s.first_hwvf = 0;
	RVU_CSR_WRITE(RVU_AF_BAR0_BASE, RVU_PRIV_PFX_CFG(pf), pf_cfg.u);
}

static void dump_rvu_devs(void)
{
	int pf;

	for (pf = 0; pf < get_max_rvu_pfs(); pf++) {
		debug_rvu("******************************************\n");
		debug_rvu("PF%d: enable=%d, num_vfs=%d, first_hwvf=%d\n"
			  "pf_num_msix_vec=%d, vf_num_msix_vec=%d\n",
			  pf, rvu_dev[pf].enable, rvu_dev[pf].num_vfs,
			  rvu_dev[pf].first_hwvf, rvu_dev[pf].pf_num_msix_vec,
			  rvu_dev[pf].vf_num_msix_vec);
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
	uint64_t cfg = 0;
	int pf;

	for (pf = 0; pf < get_max_rvu_pfs(); pf++) {
		cfg = (rvu_dev[pf].pci.class_code & CLASS_CODE_MASK) << 16;
		cfg |= (rvu_dev[pf].pci.vf_devid & DEVID_MASK) << 8;
		cfg |= (rvu_dev[pf].pci.pf_devid & DEVID_MASK);
		RVU_CSR_WRITE(RVU_AF_BAR0_BASE, RVU_PRIV_PFX_ID_CFG(pf), cfg);
		debug_rvu("RVU: PF%d devid[7:0] 0x%x\n", pf,
			  rvu_dev[pf].pci.pf_devid);
	}
}

static void config_rvu_dev(int pf, rvu_pf_cfg_t *pf_cfg, int *hwvf)
{

	rvu_dev[pf].enable = pf_cfg->enable;
	rvu_dev[pf].num_vfs = pf_cfg->num_vfs;
	rvu_dev[pf].first_hwvf = pf_cfg->num_vfs ? *hwvf : 0;
	rvu_dev[pf].pf_num_msix_vec = pf_cfg->num_msix_vec;
	rvu_dev[pf].pci.pf_devid = pf_cfg->devid & DEVID_MASK;
	rvu_dev[pf].pci.vf_devid = pf_cfg->vf_devid & DEVID_MASK;
	rvu_dev[pf].vf_num_msix_vec = pf_cfg->num_vfs ? pf_cfg->num_msix_vec : 0;
	rvu_dev[pf].pci.class_code = pf_cfg->cls_code & CLASS_CODE_MASK;

	/*Skip hwvf allocation for disable pf */
	if (!pf_cfg->enable)
		return;

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
	rc = msix_enable();
	if (rc) {
		for (pf = 0; pf < get_max_rvu_pfs(); pf++) {
			disable_rvu_pf(pf);
		}
	}
	config_rvu_pci();
	rvu_disable_ecam_access();
}
