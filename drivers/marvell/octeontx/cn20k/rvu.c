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
#include <plat_eth_cfg.h>
#include <octeontx_dram.h>

#include "cavm-csrs-nix.h"
#include "cavm-csrs-apr.h"
#include "cavm-csrs-rvu.h"
#include "cavm-csrs-npa.h"
#include "cavm-csrs-cpt.h"
#include "cavm-csrs-pccpf.h"
#include "cavm-csrs-ecam.h"
#include "cavm-csrs-apr.h"
#include "cavm-csrs-rpm.h"
#include "cavm-csrs-tim.h"
#include "cavm-csrs-sso.h"

#include "cavm-csrs-spi.h"

#define RVU_AF_BAR0_BASE		CAVM_RVU_BAR_E_RVU_PFX_BAR0(0)

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

/* Stores ETH LMAC data for RVU PF dynamic provisioning */
struct rvu_pf_eth_lmac {
	uint8_t                eth_id;
	uint8_t                lmac_id;
};

static struct rvu_device rvu_dev[MAX_RVU_PFS];

#define __const_hweight8(w)             \
		((unsigned int)               \
		((!!((w) & (1ULL << 0))) +    \
		(!!((w) & (1ULL << 1))) +     \
		(!!((w) & (1ULL << 2))) +     \
		(!!((w) & (1ULL << 3))) +     \
		(!!((w) & (1ULL << 4))) +     \
		(!!((w) & (1ULL << 5))) +     \
		(!!((w) & (1ULL << 6))) +     \
		(!!((w) & (1ULL << 7)))))

static int get_max_rvu_pfs(void)
{
	uint64_t cfg;

	cfg = RVU_CSR_READ(RVU_AF_BAR0_BASE, RVU_PRIV_CONST);
	return ((cfg >> 33) & 0xFF);
}

static inline int get_max_rvu_vfs(void)
{
	uint64_t cfg;

	cfg = RVU_CSR_READ(RVU_AF_BAR0_BASE, RVU_PRIV_CONST);
	return ((cfg >> 21) & 0xFFF);
}

static int get_rpm_intf_cnt(void)
{
	int rpm_id, lmac_id;
	int eth_cnt = 0;

	for (rpm_id = 0; rpm_id < plat_octeontx_get_rpm_count() ; rpm_id++) {
		for (lmac_id = 0; lmac_id < MAX_LMAC_PER_RPM; lmac_id++) {
			if (plat_cn20k_is_rpm_lmac_enable(rpm_id, lmac_id))
				eth_cnt++;
		}
	}
	return eth_cnt;
}

/* Skip pci enemuration of non-active PFs */
static void rvu_disable_ecam_access(void)
{
	union cavm_ecamx_domx_busx_permit bus_permit;
	int max_pf, pf, ecam = 0, domain, bus;

	max_pf = get_max_rvu_pfs();
	for (pf = 0; pf < max_pf; pf++) {
		if (rvu_dev[pf].enable)
			continue;

		bus = 1 + (pf % 32);
		domain = 2 + (pf / 32);

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
	}
}

/* Find next power of 2 and if argument is already power of 2 then
 * returns the argument
 */
static uint64_t next_pow2(uint64_t x)
{
	if (x == 1)
		return x;
	if (!(x & (x - 1)))
		return x;

	return (1 << (64 - __builtin_clzl(x - 1)));
}

static void rvu_apr_init(void)
{
	union cavm_apr_af_lmt_cfg af_lmt_cfg;
	union cavm_apr_af_lmt_map_base lmt_map_base;

	af_lmt_cfg.u = 0;
	af_lmt_cfg.s.pfs = __builtin_ctzl(next_pow2(MAX_RVU_PFS));
	af_lmt_cfg.s.funcs = __builtin_ctzl(next_pow2(MAX_RVU_VFS));
	RVU_CSR_WRITE(RVU_AF_BAR0_BASE, APR_AF_LMT_CFG, af_lmt_cfg.u);

	lmt_map_base.u = APR_TABLE_BASE;
	RVU_CSR_WRITE(RVU_AF_BAR0_BASE, APR_AF_LMT_MAP_BASE, lmt_map_base.u);
}

static void rvu_pf_disc_reset(void)
{
	int id;
	int pf_max = get_max_rvu_pfs();
	//int vf_max = get_max_rvu_vfs();

	/* Reset PFs DISC register */
	for (id = 1; id < pf_max; id++)
		RVU_CSR_WRITE(RVU_AF_BAR0_BASE, RVU_PRIV_PFX_DISC(id), 0x0ull);
#if 0
	/* Reset VFs DISC register */ TODO:
	for (id = 0; id < vf_max; id++)
		RVU_CSR_WRITE(RVU_AF_BAR0_BASE, RVU_PRIV_HWVFX_DISC(id),
			      0x0ull);
#endif
}

/* This function set the msix vector offset for all rvu blocks */
static void conf_af_block_vec_offset(void)
{
	union cavm_rvu_priv_pfx_int_cfg af_int_cfg;
	union cavm_nixx_priv_af_int_cfg nix_int_cfg;
	union cavm_npa_priv_af_int_cfg npa_int_cfg;
	union cavm_cptx_priv_af_int_cfg	cpt_int_cfg;
	union cavm_sso_priv_af_int_cfg sso_int_cfg;
	union cavm_tim_priv_af_int_cfg tim_int_cfg;
	union cavm_rvu_priv_pfx_disc af_disc;
	int af_msix_used = 0;

	/*TODO: Should add mbox interrupts */
	af_msix_used += RVU_AF_INT_VEC_E_CNT;

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
	af_disc.u = RVU_CSR_READ(RVU_AF_BAR0_BASE, RVU_PRIV_PFX_DISC(0));
	if ((af_disc.u >> BLKADDR_NIX0) & 0x1) {
		nix_int_cfg.u = RVU_CSR_READ(RVU_AF_BAR0_BASE, NIX_PRIV_AF_INT_CFG);
		nix_int_cfg.s.msix_offset = af_msix_used;
		RVU_CSR_WRITE(RVU_AF_BAR0_BASE, NIX_PRIV_AF_INT_CFG, nix_int_cfg.u);
		af_msix_used += nix_int_cfg.s.msix_size;
	}

	if ((af_disc.u >> BLKADDR_NPA) & 0x1) {
		npa_int_cfg.u = RVU_CSR_READ(RVU_AF_BAR0_BASE, NPA_PRIV_AF_INT_CFG);
		npa_int_cfg.s.msix_offset = af_msix_used;
		RVU_CSR_WRITE(RVU_AF_BAR0_BASE, NPA_PRIV_AF_INT_CFG, npa_int_cfg.u);
		af_msix_used += npa_int_cfg.s.msix_size;
	}

	if ((af_disc.u >> BLKADDR_CPT0) & 0x1) {
		cpt_int_cfg.u = RVU_CSR_READ(RVU_AF_BAR0_BASE, CPTX_PRIV_AF_INT_CFG(0));
		cpt_int_cfg.s.msix_offset = af_msix_used;
		RVU_CSR_WRITE(RVU_AF_BAR0_BASE, CPTX_PRIV_AF_INT_CFG(0), cpt_int_cfg.u);
		af_msix_used += cpt_int_cfg.s.msix_size;
	}

	if ((af_disc.u >> BLKADDR_SSO) & 0x1) {
		sso_int_cfg.u = RVU_CSR_READ(RVU_AF_BAR0_BASE, SSO_PRIV_AF_INT_CFG);
		sso_int_cfg.s.msix_offset = af_msix_used;
		RVU_CSR_WRITE(RVU_AF_BAR0_BASE, SSO_PRIV_AF_INT_CFG, sso_int_cfg.u);
		af_msix_used += sso_int_cfg.s.msix_size;
	}

	if ((af_disc.u >> BLKADDR_TIM) & 0x1) {
		tim_int_cfg.u = RVU_CSR_READ(RVU_AF_BAR0_BASE, TIM_PRIV_AF_INT_CFG);
		tim_int_cfg.s.msix_offset = af_msix_used;
		RVU_CSR_WRITE(RVU_AF_BAR0_BASE, TIM_PRIV_AF_INT_CFG, tim_int_cfg.u);
		af_msix_used += tim_int_cfg.s.msix_size;
	}
}

static int msix_enable(void)
{
	uint32_t msix_offset = 0;
	int pf, max_pf;

	/* set AF MSIX table base*/
	union cavm_rvu_af_msixtr_base af_msix_cfg;

	af_msix_cfg.u = MSIX_TABLE_BASE;
	RVU_CSR_WRITE(RVU_AF_BAR0_BASE, RVU_AF_MSIXTR_BASE, af_msix_cfg.u);

	conf_af_block_vec_offset();
	max_pf = get_max_rvu_pfs();
	for (pf = 0; pf < max_pf; pf++) {
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

/* Enable NPA for PF*/
static void pf_enable_npa(int pf, int lf_id)
{
	union cavm_npa_priv_lfx_cfg npa_lf_cfg;

	npa_lf_cfg.u = 0;
	npa_lf_cfg.s.ena = 1;
	npa_lf_cfg.s.pf_func = (((pf & 0x3f) << 9) | 0x0);
	npa_lf_cfg.s.slot = 0;
	CSR_WRITE(CAVM_NPA_PRIV_LFX_CFG(lf_id), npa_lf_cfg.u);
}

/* Disable NPA for PF */
static inline void pf_disable_npa(int pf, int lf_id)
{
	union cavm_npa_priv_lfx_cfg npa_lf_cfg;

	npa_lf_cfg.u = 0;
	CSR_WRITE(CAVM_NPA_PRIV_LFX_CFG(lf_id), npa_lf_cfg.u);
}

/* Enable NIX for PF*/
static void pf_enable_nix(int nix_id, int pf, int lf_id)
{
	union cavm_nixx_priv_lfx_cfg nix_lf_cfg;

	nix_lf_cfg.u = 0;
	nix_lf_cfg.s.ena = 1;
	nix_lf_cfg.s.pf_func = (((pf & 0x3f) << 9) | 0x0);
	nix_lf_cfg.s.slot = 0;
	CSR_WRITE(CAVM_NIXX_PRIV_LFX_CFG(nix_id, lf_id), nix_lf_cfg.u);
}

/* Disable NIX for PF */
static inline void pf_disable_nix(int nix_id, int pf, int lf_id)
{
	union cavm_nixx_priv_lfx_cfg nix_lf_cfg;

	nix_lf_cfg.u = 0;
	CSR_WRITE(CAVM_NIXX_PRIV_LFX_CFG(nix_id, lf_id), nix_lf_cfg.u);
}

/* Reset all the resources before enabling PF */
static void reset_rvu_pf(int pf)
{
	union cavm_rvu_priv_pfx_int_cfg int_cfg;
	union cavm_rvu_priv_pfx_msix_cfg msix_cfg;

	int_cfg.u = 0;
	int_cfg.s.msix_offset = 0;
	CSR_WRITE(CAVM_RVU_PRIV_PFX_INT_CFG(pf), int_cfg.u);

	msix_cfg.u = 0;
	msix_cfg.s.pf_msixt_offset = 0;
	msix_cfg.s.pf_msixt_sizem1 = 0;
	msix_cfg.s.vf_msixt_offset = 0;
	msix_cfg.s.vf_msixt_sizem1 = 0;
	CSR_WRITE(CAVM_RVU_PRIV_PFX_MSIX_CFG(pf), msix_cfg.u);
}

static void dump_rvu_devs(void)
{
	int pf, max_pf;

	max_pf = get_max_rvu_pfs();
	for (pf = 0; pf < max_pf; pf++) {
		debug_rvu("******************************************\n");
		debug_rvu("PF%d: enable=%d, num_vfs=%d, first_hwvf=%d\n"
			  "pf_num_msix_vec=%d, vf_num_msix_vec=%d\n",
			  pf, rvu_dev[pf].enable, rvu_dev[pf].num_vfs,
			  rvu_dev[pf].first_hwvf, rvu_dev[pf].pf_num_msix_vec,
			  rvu_dev[pf].vf_num_msix_vec);
		debug_rvu("PCI Settings:\n"
			  "pf_devid=0x%x, vf_devid=0x%x, class_code=0x%lx\n",
			  rvu_dev[pf].pci.pf_devid, rvu_dev[pf].pci.vf_devid,
			  rvu_dev[pf].pci.class_code);
	}

	debug_rvu("******************************************\n");
}

/* Initialize PCI PF_DEVID and VF_DEVID */
static void config_rvu_pci(void)
{
	uint64_t cfg = 0;
	int pf, max_pf;

	max_pf = get_max_rvu_pfs();
	for (pf = 0; pf < max_pf; pf++) {
		cfg = (rvu_dev[pf].pci.class_code & CLASS_CODE_MASK) << 16;
		cfg |= (rvu_dev[pf].pci.vf_devid & DEVID_MASK) << 8;
		cfg |= (rvu_dev[pf].pci.pf_devid & DEVID_MASK);
		CSR_WRITE(CAVM_RVU_PRIV_PFX_ID_CFG(pf), cfg);
		debug_rvu("RVU: PF%d devid[7:0] 0x%x\n", pf,
			  rvu_dev[pf].pci.pf_devid);
	}
}

static void config_rvu_dev(int pf, rvu_pf_cfg_t *pf_cfg, int *hwvf, int rpm_map)
{

	rvu_dev[pf].enable = pf_cfg->enable;
	rvu_dev[pf].num_vfs = pf_cfg->num_vfs;
	rvu_dev[pf].first_hwvf = pf_cfg->num_vfs ? *hwvf : 0;
	rvu_dev[pf].pf_num_msix_vec = pf_cfg->num_msix_vec;
	rvu_dev[pf].pci.pf_devid = pf_cfg->devid & DEVID_MASK;
	rvu_dev[pf].pci.vf_devid = pf_cfg->vf_devid & DEVID_MASK;
	if (rpm_map) {
		rvu_dev[pf].enable = 1;
		rvu_dev[pf].pci.pf_devid = PCI_DEVID_OCTEONTX2_RVU_PF & DEVID_MASK;
		rvu_dev[pf].pci.vf_devid = PCI_DEVID_OCTEONTX2_RVU_VF & DEVID_MASK;
	}

	rvu_dev[pf].vf_num_msix_vec = pf_cfg->num_vfs ? pf_cfg->num_msix_vec : 0;
	rvu_dev[pf].pci.class_code = pf_cfg->cls_code & CLASS_CODE_MASK;

	if (!pf)
		rvu_dev[pf].pf_num_msix_vec = RVU_AF_VEC_COUNT;

	/*Skip hwvf allocation for disable pf */
	if (!rvu_dev[pf].enable)
		return;

	/* Increment already allocated HWVFs */
	*hwvf += rvu_dev[pf].num_vfs;
}

static void octeontx_init_rvu_lmac(int *hwvf, int rvu, int eth_id,
				   int lmac_id)
{
	int num_rvu_vfs, num_msix_vec;
	int nix_block;

	plat_octeontx_get_eth_lmac_rvu_info(eth_id, lmac_id, &num_rvu_vfs,
					    &num_msix_vec, (int *)&nix_block);
	rvu_dev[rvu].enable = TRUE;
	rvu_dev[rvu].num_vfs = num_rvu_vfs;
	rvu_dev[rvu].first_hwvf = *hwvf;
	rvu_dev[rvu].pf_num_msix_vec = num_msix_vec;
	rvu_dev[rvu].vf_num_msix_vec = num_msix_vec;
	rvu_dev[rvu].pf_res_nix_ena = nix_block;
	rvu_dev[rvu].pci.pf_devid = CAVM_PCC_DEV_IDL_E_RVU & DEVID_MASK;
	rvu_dev[rvu].pci.vf_devid = CAVM_PCC_DEV_IDL_E_RVU_VF & DEVID_MASK;
	rvu_dev[rvu].pci.class_code = RVU_CLASS_CODE & CLASS_CODE_MASK;
	/* Increment already allocated HWVFs */
	*hwvf += rvu_dev[rvu].num_vfs;
}

static int init_rvu_dev_from_fdt(void)
{
	int current_hwvf = 0, ent, max_rpm_intf, rpm_map = 0;
	rvu_config_t *rvu_cfg;
	rvu_pf_cfg_t *pf_cfg = NULL;
	int pf, eth_id, lmac_id;
	int top_eth_pf, uninit_pfs = 0;

	rvu_cfg = &plat_octeontx_bcfg->rvu_cfg;
	/* Check if FDT config is valid */
	if (!(rvu_cfg->valid)) {
		ERROR("Invalid RVU configuration, skipping RVU init!.\n");
		return -1;
	}

	/* Now initialize devices passed in dts */
	max_rpm_intf = get_rpm_intf_cnt();
	for (ent = 0; ent < rvu_cfg->num_dev; ent++) {
		if (ent)
			rpm_map = (ent <= max_rpm_intf) ? true : false;

		pf_cfg = &rvu_cfg->pf_cfg[ent];
		config_rvu_dev(pf_cfg->pf_id, pf_cfg, &current_hwvf, rpm_map);
	}

	pf = RVU_ETH_FIRST;
	/* This represents the [numerically] highest RVU PF required by ETH */
	top_eth_pf = RVU_ETH_FIRST;

	uninit_pfs += (RVU_ETH_LAST - RVU_ETH_FIRST + 1);

	/* Determine the required number of ETH LMAC PFs */
	for (eth_id = 0; eth_id < plat_octeontx_get_eth_count(); eth_id++) {
		for (lmac_id = 0; lmac_id < plat_octeontx_get_eth_lmac_count();
		     lmac_id++) {
			if (plat_octeontx_is_enabled_eth_lmac(eth_id,
							      lmac_id)) {
				top_eth_pf = pf++;
				uninit_pfs--;
			}
		}
	}

	if (top_eth_pf == RVU_ETH_FIRST)
		debug_rvu("RVU: no PFs provisioned to ETH\n");
	else
		debug_rvu("RVU: PF%d is last PF required for ETH\n",
			  top_eth_pf);

	/*
	 * Finally, after any possible 'overrides' by SW_RVU_xxx devices,
	 * perform actual provisioning of RVU PFs to ETH devices.
	 */
	pf = RVU_ETH_FIRST;
	for (eth_id = 0; eth_id < plat_octeontx_get_eth_count(); eth_id++) {
		for (lmac_id = 0; lmac_id < plat_octeontx_get_eth_lmac_count();
		     lmac_id++) {
			if (plat_octeontx_is_enabled_eth_lmac(eth_id,
							      lmac_id)) {
				octeontx_init_rvu_lmac(&current_hwvf,
						       pf, eth_id,
						       lmac_id);
				pf++;
			}
		}
	}

	if (pf != RVU_ETH_FIRST)
		debug_rvu("RVU: PF%d was last PF provisioned for ETH\n", pf-1);


	return 0;
}

static void config_lmt_map_table(void)
{
	union cavm_rvu_af_pfx_lmtline_addr pf_lmt_addr;
	union cavm_apr_af_lmt_ctl lmt_ctl;
	uint64_t lmt_ent_addr;
	uint64_t val = 0, lmt_ent_base_addr;
	int vfs = MAX_RVU_VFS, pf, max_pf;//, vf;

	max_pf = get_max_rvu_pfs();
	for (pf = 0; pf < max_pf; pf++) {
		if (!rvu_dev[pf].enable)
			continue;

		lmt_ent_base_addr = APR_TABLE_BASE +
				(pf * vfs) * RVU_LMT_MAPTBL_ENTRY_SIZE;
		lmt_ent_addr = lmt_ent_base_addr;
		/* Enable 2K LMT Lines per PF */
		/* TODO for cn20ka: remove hard-coded values */
		val |= 0x1ull << 20 | 0x6ull << 16;
		pf_lmt_addr.u = CSR_READ(CAVM_RVU_AF_PFX_LMTLINE_ADDR(pf));
		debug_rvu("RVU: PF%u LMT entry @ %p, LMTLINE_ADDR 0x%" PRIx64 "\n",
			  pf, (void *)lmt_ent_addr, pf_lmt_addr.u);
		octeontx_write64(lmt_ent_addr, pf_lmt_addr.u);
		debug_rvu("RVU: PF%u LMT entry @ %p, val 0x%016" PRIx64 "\n", pf,
			  (void *)lmt_ent_addr + 0x8, val);
		octeontx_write64((lmt_ent_addr + 0x8), val);
	}

	/* Maintain LPC coherence after table setup/modifications
	 * as per APR chapter in HRM.
	 */
	lmt_ctl.s.flush = 0x1;
	CSR_WRITE(CAVM_APR_AF_LMT_CTL, lmt_ctl.u);
	do {
		lmt_ctl.u = CSR_READ(CAVM_APR_AF_LMT_CTL);
	} while (lmt_ctl.s.flush == 0x0);
	lmt_ctl.s.flush = 0x0;
	CSR_WRITE(CAVM_APR_AF_LMT_CTL, lmt_ctl.u);
}

/* On CN20K memory for PF and VF mailboxs and lmtlines are allocated
 * from end of non-secure non-preserve region. Memory allocation is
 * dynamic based on numbers of enabled PFs and VFs.
 */
void cn20k_reserve_mbox_lmtline_memory(uint64_t *mem_base, uint64_t *mem_size)
{
	uint64_t size, rsize = 0;
	uint64_t pow2, base;
	int pf, num_funcs, max_pf;
	int lmt_asc_idx = NSEC_0_LMT;

	max_pf = get_max_rvu_pfs();
	for (pf = 0; pf < max_pf; pf++) {
		if (!rvu_dev[pf].enable)
			continue;

		/* For a PF mailbox memory should be arranged as mbox region to
		 * communicate with AF followed by mbox region space
		 * for its VFs. LMTLINEs follows mailbox region and total
		 * memory (mailbox + lmtlines) must be power of two aligned.
		 */
		num_funcs = (1 /* i.e. the PF */ + rvu_dev[pf].num_vfs);
		size = num_funcs * RVU_PF_MAILBOX_SIZE;

		/* Alloc pages for PF LMTlines */
		size += RVU_PF_LMT_LMTLINE_SIZE;
		pow2 = next_pow2(size);
		rsize += pow2;

		if (rvu_dev[pf].num_vfs)
			rsize += rvu_dev[pf].num_vfs * RVU_PF_LMT_LMTLINE_SIZE;
	}

	base = octeontx_dram_reserve(rsize, NSEC_M_ASC1, &lmt_asc_idx);
	if (base == 0) {
		ERROR("%s: RVU: Mbox/LMTLine memory allocation fails(%" PRIx64 ")\n",
		      __func__, rsize);
		panic();
	}
	if (cn20k_fdt_update_mailbox_memory_range(base, rsize)) {
		ERROR("%s: RVU: Mbox/LMTLine device tree update fail(%" PRIx64 ")\n",
		      __func__, rsize);
		panic();
	}

	*mem_base = base;
	*mem_size = rsize;
	plat_octeontx_bcfg->rvu_rsvd_reg_index = lmt_asc_idx;
}

static void cn20k_mailbox_enable(void)
{
	union cavm_rvu_af_pfx_lmtline_addr pf_lmt_addr;
	cavm_rvu_af_afpf_mboxx_addr_t pf_bar0_addr;
	uint64_t size;
	uint64_t base, limit;
	int pf, num_funcs, max_pf;

	cn20k_reserve_mbox_lmtline_memory(&base, &size);
	limit = base + size;

	max_pf = get_max_rvu_pfs();
	for (pf = 0; pf < max_pf; pf++) {
		if (!rvu_dev[pf].enable)
			continue;

		pf_bar0_addr.u = base;
		CSR_WRITE(CAVM_RVU_AF_AFPF_MBOXX_ADDR(pf), pf_bar0_addr.u);

		/* For a PF mailbox memory should be arranged as mbox region to
		 * communicate with AF followed by mbox region space
		 * for its VFs
		 */
		num_funcs = (1 /* i.e. the PF */ + rvu_dev[pf].num_vfs);

		size = num_funcs * RVU_PF_MAILBOX_SIZE;

		/* Alloc pages for PF LMTlines */
		size += RVU_PF_LMT_LMTLINE_SIZE;
		size = next_pow2(size);

		debug_rvu("RVU: PF%u (%u VFs) MBOX at %p (0x%x B), limit %p\n",
			  pf, rvu_dev[pf].num_vfs,
			  (void *)(uintptr_t)base, (unsigned int)size,
			  (void *)(uintptr_t)limit);

		if ((base + size) > limit) {
			ERROR("RVU: PF%u MBOX addr %p + size %p exceeds "
			      "limit %p\n", pf, (void *)(uintptr_t)base,
			      (void *)(uintptr_t)size,
			      (void *)(uintptr_t)limit);
			panic();
			break;
		}
		/* Configure PF LMTLINE  address (contiguous to mailboxes) */
		pf_lmt_addr.u = base + (num_funcs * RVU_PF_MAILBOX_SIZE);
		CSR_WRITE(CAVM_RVU_AF_PFX_LMTLINE_ADDR(pf), pf_lmt_addr.u);
		base += size;
	}

	config_lmt_map_table();
}

void rvu_devices_init(void)
{
	int pf, rc, nix_id, max_pf;

	rc = init_rvu_dev_from_fdt();
	if (rc < 0)
		return;

	dump_rvu_devs();

	rvu_apr_init();

	nix_id = 0;
	max_pf = get_max_rvu_pfs();
	for (pf = 0 ; pf < max_pf; pf++) {
		if (rvu_dev[pf].enable) {
			reset_rvu_pf(pf);
			enable_rvu_pf(pf);

			if (rvu_dev[pf].pf_res_nix_ena != NIX_DISABLED) {
				debug_rvu("RVU: provision NIX%d/LF%d to PF%d\n",
					nix_id, pf, pf);
				pf_enable_nix(nix_id, pf, pf);
				debug_rvu("RVU: provision NPA LF%d to PF%d\n",
					pf, pf);
				pf_enable_npa(pf, pf);
			}
		}
		else 	/* Disable unused PFs */
			disable_rvu_pf(pf);
	}

	rc = msix_enable();
	if (rc) {
		for (pf = 0; pf < max_pf; pf++) {
			disable_rvu_pf(pf);
		}
	}
	cn20k_mailbox_enable();
	config_rvu_pci();
	rvu_disable_ecam_access();
	rvu_pf_disc_reset();
}
