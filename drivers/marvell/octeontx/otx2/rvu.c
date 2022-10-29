/*
 * Copyright (c) 2016 Marvell.
 * This program is provided "as is" without any warranty of any kind,
 * and is distributed under the applicable Marvell proprietary limited use
 * license agreement.
 */

/* RVU driver for OcteonTX2/TX3 */

#include <stdio.h>
#include <arch.h>
#include <platform_def.h>
#include <octeontx_common.h>
#include <plat_board_cfg.h>
#include <rvu.h>
#include <plat/common/platform.h>
#include <assert.h>
#include <debug.h>
#include <octeontx_utils.h>
#include <plat_scfg.h>
#if defined(PLAT_CN10K_FAMILY)
#include <octeontx_dram.h>
#include <plat_cn10k_configuration.h>
#include "cavm-csrs-apr.h"
#else
#include <plat_otx2_configuration.h>
#endif

#include "cavm-csrs-cpt.h"
#include "cavm-csrs-ndc.h"
#include "cavm-csrs-nix.h"
#include "cavm-csrs-npa.h"
#include "cavm-csrs-pccpf.h"
#include "cavm-csrs-pem.h"
#include "cavm-csrs-rvu.h"
#include "cavm-csrs-sso.h"
#include "cavm-csrs-tim.h"
#ifdef PLAT_t98
#include "cavm-csrs-ree.h"
#endif

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

struct sw_rvu_dev_info {
	int               type; /* SW_RVU_xxx_PF */
	int               num;  /* SW_RVU_xxx_NUM_PF */
	struct pci_config pci;
};

/* Stores ETH LMAC data for RVU PF dynamic provisioning */
struct rvu_pf_eth_lmac {
	uint8_t                eth_id;
	uint8_t                lmac_id;
};

static struct rvu_device rvu_dev[MAX_RVU_PFS];

typedef enum {
	avail_from_bot = 1,
	avail_from_top = -1,
} rvu_pf_avail_dir_t;

static int rvu_first_available(rvu_pf_avail_dir_t dir)
{
	int i;

	i = (dir == avail_from_top) ? RVU_LAST : RVU_ETH_FIRST;
	while ((i >= RVU_ETH_FIRST) && (i <= RVU_LAST) && rvu_dev[i].enable)
		i += (int)dir;

	if ((i < RVU_ETH_FIRST) || (i > RVU_LAST))
		return -1;

	return i;
}

static inline int octeontx_get_msix_for_npa(void)
{
	union cavm_npa_priv_lfx_int_cfg npa_int_cfg;
	int lf = 0;

	npa_int_cfg.u = CSR_READ(CAVM_NPA_PRIV_LFX_INT_CFG(lf));

	return npa_int_cfg.s.msix_size;
}

static inline int octeontx_get_msix_for_eth(void)
{
	int lf = 0, nix = 0;
	union cavm_nixx_priv_lfx_int_cfg nixx_int_cfg;

	nixx_int_cfg.u = CSR_READ(CAVM_NIXX_PRIV_LFX_INT_CFG(nix, lf));

	return nixx_int_cfg.s.msix_size + octeontx_get_msix_for_npa();
}

static inline int octeontx_get_msix_for_cpt(void)
{
	int lf = 0, cpt = 0;
	union cavm_cptx_priv_lfx_int_cfg cptx_int_cfg;

	if (plat_octeontx_get_cpt_count() == 0)
		return 0;

	cptx_int_cfg.u = CSR_READ(CAVM_CPTX_PRIV_LFX_INT_CFG(cpt, lf));

	return cptx_int_cfg.s.msix_size;
}

static void octeontx_init_rvu_af(int *hwvf)
{
	rvu_dev[RVU_AF].enable = TRUE;
	rvu_dev[RVU_AF].num_vfs = plat_octeontx_bcfg->rvu_config.admin_pf.num_rvu_vfs;
	rvu_dev[RVU_AF].first_hwvf = *hwvf;
	rvu_dev[RVU_AF].pf_num_msix_vec = plat_octeontx_bcfg->rvu_config.admin_pf.num_msix_vec;
	rvu_dev[RVU_AF].vf_num_msix_vec = RVU_VF_INT_VEC_COUNT +
					  octeontx_get_msix_for_eth() +
					  (octeontx_get_msix_for_cpt() *
					  CPT_AF_VF_MSIX_FACTOR);
	rvu_dev[RVU_AF].pf_res_nix_id = NIX_DISABLED;
	rvu_dev[RVU_AF].pci.pf_devid = CAVM_PCC_DEV_IDL_E_RVU_AF & DEVID_MASK;
	rvu_dev[RVU_AF].pci.vf_devid = CAVM_PCC_DEV_IDL_E_SW_RVU_AF_VF & DEVID_MASK;
	rvu_dev[RVU_AF].pci.class_code = RVU_CLASS_CODE & CLASS_CODE_MASK;
	/* Increment already allocated HWVFs */
	*hwvf += rvu_dev[RVU_AF].num_vfs;
}

static rvu_sw_rvu_pf_t *find_sw_rvu_pf_info(int bfdt_index)
{
	if (bfdt_index < SW_RVU_NUM_PF)
		return &(plat_octeontx_bcfg->rvu_config.sw_pf[bfdt_index]);

	assert(bfdt_index < SW_RVU_NUM_PF);
	return NULL;
}

static struct sw_rvu_dev_info *find_sw_rvu_dev(int bfdt_index)
{
	static struct sw_rvu_dev_info sw_dev_list[] = {
		{ SW_RVU_SSO_TIM_PF(0), SW_RVU_SSO_TIM_NUM_PF,
		  { .pf_devid = CAVM_PCC_DEV_IDL_E_SW_RVU_SSO_TIM_PF,
		    .vf_devid = CAVM_PCC_DEV_IDL_E_SW_RVU_SSO_TIM_VF,
		    .class_code = GSP_CLASS_CODE
		  } },
		{ SW_RVU_NPA_PF(0), SW_RVU_NPA_NUM_PF,
		  { .pf_devid = CAVM_PCC_DEV_IDL_E_SW_RVU_NPA_PF,
		    .vf_devid = CAVM_PCC_DEV_IDL_E_SW_RVU_NPA_VF,
		    .class_code = GSP_CLASS_CODE
		  } },
#if defined(PLAT_CN10K_FAMILY)
		{ SW_RVU_IPSEC_PF(0), SW_RVU_IPSEC_NUM_PF,
		  { .pf_devid = CAVM_PCC_DEV_IDL_E_SW_RVU_IPSEC_INLINE_PF,
		    .vf_devid = CAVM_PCC_DEV_IDL_E_SW_RVU_IPSEC_INLINE_VF,
		    .class_code = GSP_CLASS_CODE
		  } },
#endif
		{ SW_RVU_SDP_PF(0), SW_RVU_SDP_NUM_PF,
		  { .pf_devid = CAVM_PCC_DEV_IDL_E_SW_RVU_SDP_PF,
		    .vf_devid = CAVM_PCC_DEV_IDL_E_SW_RVU_SDP_VF,
		    .class_code = RVU_CLASS_CODE
		  } },
		{ SW_RVU_CPT_PF(0), SW_RVU_CPT_NUM_PF,
#if defined(PLAT_CN10K_FAMILY)
		  { .pf_devid = CAVM_PCC_DEV_IDL_E_SW_RVU_CPT10_PF,
		    .vf_devid = CAVM_PCC_DEV_IDL_E_SW_RVU_CPT10_VF,
		    .class_code = CPT_CLASS_CODE
		  } },
#else
		  { .pf_devid = CAVM_PCC_DEV_IDL_E_SW_RVU_CPT_PF,
		    .vf_devid = CAVM_PCC_DEV_IDL_E_SW_RVU_CPT_VF,
		    .class_code = CPT_CLASS_CODE
		  } },
#endif
		{ SW_RVU_REE_PF(0), SW_RVU_REE_NUM_PF,
		  { .pf_devid = CAVM_PCC_DEV_IDL_E_SW_RVU_REE_PF,
		    .vf_devid = CAVM_PCC_DEV_IDL_E_SW_RVU_REE_VF,
		    .class_code = GSP_CLASS_CODE
		  } },
	}, *sw_dev;
	int i;

	sw_dev = NULL;
	for (i = 0; !sw_dev && (i < ARRAY_SIZE(sw_dev_list)); i++)
		if ((bfdt_index >= sw_dev_list[i].type) &&
		    (bfdt_index < (sw_dev_list[i].type + sw_dev_list[i].num)))
			sw_dev = &sw_dev_list[i];

	return sw_dev;
}

static void octeontx_init_rvu_fixed(int *hwvf, int rvu, int bfdt_index,
				    int has_vfs)
{
	struct sw_rvu_dev_info *sw_dev;
	rvu_sw_rvu_pf_t *sw_pf;

	sw_pf = find_sw_rvu_pf_info(bfdt_index);
	if (!sw_pf) {
		ERROR("Internal: cannot locate SW_RVU_xxx %d PF info!\n",
		      bfdt_index);
		return;
	}

	sw_dev = find_sw_rvu_dev(bfdt_index);
	if (!sw_dev) {
		ERROR("Internal: cannot locate SW_RVU_xxx %d device!\n",
		      bfdt_index);
		return;
	}

	rvu_dev[rvu].enable = TRUE;
	rvu_dev[rvu].num_vfs = has_vfs ? sw_pf->num_rvu_vfs : 0;
	rvu_dev[rvu].first_hwvf = has_vfs ? *hwvf : 0;
	rvu_dev[rvu].pf_num_msix_vec = sw_pf->num_msix_vec;
	rvu_dev[rvu].pf_res_nix_id = NIX_DISABLED;

	rvu_dev[rvu].pci.pf_devid = sw_dev->pci.pf_devid & DEVID_MASK;
	rvu_dev[rvu].pci.vf_devid = sw_dev->pci.vf_devid & DEVID_MASK;
	rvu_dev[rvu].pci.class_code = sw_dev->pci.class_code & CLASS_CODE_MASK;
	rvu_dev[rvu].vf_num_msix_vec = has_vfs ? sw_pf->num_msix_vec : 0;

	debug_rvu("rvu %02d [%04x/%04x]: swidx %d, rvu_vfs %d, msix_vec %d\n",
		rvu, rvu_dev[rvu].pci.pf_devid, rvu_dev[rvu].pci.vf_devid,
		bfdt_index, sw_pf->num_rvu_vfs, sw_pf->num_msix_vec);

	/* Increment already allocated HWVFs */
	*hwvf += rvu_dev[rvu].num_vfs;
}

static void octeontx_init_rvu_lmac(int *hwvf, int rvu, int eth_id,
				   int lmac_id)
{
	int num_rvu_vfs, num_msix_vec;
	nix_block_t nix_block;

	plat_octeontx_get_eth_lmac_rvu_info(eth_id, lmac_id, &num_rvu_vfs,
					    &num_msix_vec, (int *)&nix_block);
	rvu_dev[rvu].enable = TRUE;
	rvu_dev[rvu].num_vfs = num_rvu_vfs;
	rvu_dev[rvu].first_hwvf = *hwvf;
	rvu_dev[rvu].pf_num_msix_vec = num_msix_vec;
	rvu_dev[rvu].vf_num_msix_vec = num_msix_vec;
	switch (nix_block) {
	case NIX0:
		rvu_dev[rvu].pf_res_nix_id = 0;
		break;

	case NIX1:
		rvu_dev[rvu].pf_res_nix_id = 1;
		break;

	default:
		rvu_dev[rvu].pf_res_nix_id = NIX_DISABLED;
	}
	rvu_dev[rvu].pci.pf_devid = CAVM_PCC_DEV_IDL_E_RVU & DEVID_MASK;
	rvu_dev[rvu].pci.vf_devid = CAVM_PCC_DEV_IDL_E_RVU_VF & DEVID_MASK;
	rvu_dev[rvu].pci.class_code = RVU_CLASS_CODE & CLASS_CODE_MASK;
	/* Increment already allocated HWVFs */
	*hwvf += rvu_dev[rvu].num_vfs;
}

/*
 * rvu_provision_pfs_for_sw_devs()
 *
 * Performs provisioning of RVU PFs to SW_RVU_xxx devices.
 *
 * RVU PFs for these devices are provisioned dynamically from any available
 * PF starting from the 'top' (i.e. last PF).
 * Depending upon the "provision-mode", RVU PFs MAY be allocated to
 * the SW_RVU_xxx devices which 'override' an RVU PF reserved for an ETH LMAC.
 *
 * Refer to the RVU PF provisioning document for more information.
 *
 * on entry,
 *   top_eth_pf:    [numerically] highest RVU PF # reserved for ETH LMACs
 *   cur_hwvf:      [pointer to] starting RVU SR-IOV VF number to provision
 *                  (i.e. 0 ... RVU_PRIV_CONST[HWVFS]-1)
 *   uninit_pf_cnt: [pointer to] count of uninitialized RVU PFs
 *                  (i.e. available RVU PFs)
 *   eth_lmac_list: [pointer to] list of ETH LMAC data
 *                  (used to 'override' an RVU PF allocated to an ETH dev)
 *
 * returns,
 *   void
 *
 */
static void rvu_provision_pfs_for_sw_devs(int top_eth_pf,
					  int *cur_hwvf, int *uninit_pf_cnt,
					  struct rvu_pf_eth_lmac *eth_lmac_list)
{
	rvu_sw_rvu_pf_t *sw_pf;
	int i, rvu_pf;

	/* Provision RVU PFs for REE. */
	for (i = SW_RVU_REE_NUM_PF - 1; (int)i >= 0; i--) {
		rvu_pf = rvu_first_available(avail_from_top);

		if (rvu_pf == (MAX_RVU_PFS - 1)) {
			octeontx_init_rvu_fixed(cur_hwvf, rvu_pf,
					SW_RVU_SSO_TIM_PF(0), FALSE);
			rvu_pf = rvu_first_available(avail_from_top);
		}

		/* Enforce constraint */
		if (rvu_pf < RVU_ETH_FIRST) {
			ERROR("RVU: too many SW_RVU_xxx devices (REE%d).\n", i);
			break;
		}

		sw_pf = find_sw_rvu_pf_info(SW_RVU_REE_PF(i));
		if (sw_pf == NULL) {
			ERROR("Internal error locating REE info\n");
			panic();
		}

		/* Legacy not valid for REE */
		if ((sw_pf->mapping == SW_RVU_MAP_LEGACY) ||
		    (sw_pf->mapping == SW_RVU_MAP_NONE)) {
			debug_rvu(
			  "RVU: NOT provisioning PF for SW_RVU_REE #%d\n", i);
			continue;
		}

		if ((sw_pf->mapping == SW_RVU_MAP_AVAILABLE) &&
			 (rvu_pf <= top_eth_pf)) {
			debug_rvu(
			  "RVU: cannot provision PF for SW_RVU_REE #%d\n",
			  i);
			continue;
		}

		assert((sw_pf->mapping == SW_RVU_MAP_FORCE) ||
		       (sw_pf->mapping == SW_RVU_MAP_AVAILABLE));

		debug_rvu("RVU: provision PF%d -> SW_RVU_REE #%d\n",
			  rvu_pf, i);

		octeontx_init_rvu_fixed(cur_hwvf, rvu_pf, SW_RVU_REE_PF(i),
					TRUE);
		/*
		 * If this PF was already provisioned to ETH,
		 * disable the lmac so ETH driver will not use it.
		 *
		 * Otherwise, adjust uninitialized count.
		 */
		if (rvu_pf <= top_eth_pf) {
			plat_octeontx_enable_eth_lmac(
				  eth_lmac_list[rvu_pf].eth_id,
				  eth_lmac_list[rvu_pf].lmac_id, false);
			debug_rvu("RVU: replacing ETH%d/LMAC%d with REE\n",
				  eth_lmac_list[rvu_pf].eth_id,
				  eth_lmac_list[rvu_pf].lmac_id);
		} else /* i.e. rvu_pf > top_eth_pf */ {
			*uninit_pf_cnt -= 1;
			debug_rvu("RVU: Decrement uninit_pfs -> %d\n",
				  *uninit_pf_cnt);
		}
	}

	/* Provision RVU PFs for SDP. */
	for (i = 0; i < SW_RVU_SDP_NUM_PF; i++) {
		int pem = 0;
		if (IS_OCTEONTX_PASS(read_midr(), T98PARTNUM, 1, 0))
			continue;
		rvu_pf = rvu_first_available(avail_from_top);

		/* Enforce constraint */
		if (rvu_pf < RVU_ETH_FIRST) {
			ERROR("RVU: too many SW_RVU_xxx devices (SDP%d).\n", i);
			break;
		}

		if (!is_pem_in_ep_mode(pem))
			break;

		pem = pem + 2;
		sw_pf = find_sw_rvu_pf_info(SW_RVU_SDP_PF(i));
		if (sw_pf == NULL) {
			ERROR("Internal error locating SDP info\n");
			panic();
		}

		/* [single SDP] already LEGACY-mapped */
		if (sw_pf->mapping == SW_RVU_MAP_LEGACY)
			continue;

		if (sw_pf->mapping == SW_RVU_MAP_NONE) {
			debug_rvu(
			  "RVU: NOT provisioning PF for SW_RVU_SDP #%d\n", i);
			continue;
		}

		if ((sw_pf->mapping == SW_RVU_MAP_AVAILABLE) &&
			 (rvu_pf <= top_eth_pf)) {
			debug_rvu(
			  "RVU: cannot provision PF for SW_RVU_SDP #%d\n",
			  i);
			continue;
		}

		assert((sw_pf->mapping == SW_RVU_MAP_FORCE) ||
		       (sw_pf->mapping == SW_RVU_MAP_AVAILABLE));

		debug_rvu("RVU: provision PF%d -> SW_RVU_SDP #%d\n",
			  rvu_pf, i);

		octeontx_init_rvu_fixed(cur_hwvf, rvu_pf, SW_RVU_SDP_PF(i),
					TRUE);
		/*
		 * If this PF was already provisioned to ETH,
		 * disable the lmac so ETH driver will not use it.
		 *
		 * Otherwise, adjust uninitialized count.
		 */
		if (rvu_pf <= top_eth_pf) {
			plat_octeontx_enable_eth_lmac(
				  eth_lmac_list[rvu_pf].eth_id,
				  eth_lmac_list[rvu_pf].lmac_id, false);
			debug_rvu("RVU: replacing ETH%d/LMAC%d with SDP\n",
				  eth_lmac_list[rvu_pf].eth_id,
				  eth_lmac_list[rvu_pf].lmac_id);
		} else /* i.e. rvu_pf > top_eth_pf */ {
			*uninit_pf_cnt -= 1;
			debug_rvu("RVU: Decrement uninit_pfs -> %d\n",
				  *uninit_pf_cnt);
		}
	}
}

static int octeontx_init_rvu_from_fdt(void)
{
	int eth_id, lmac_id, pf, current_hwvf = 0;
	int uninit_pfs = 0, fixed_sso_tim_pfs, sso_tim_pfs, npa_pfs;
	int top_eth_pf;
	rvu_sw_rvu_pf_t *sw_pf;
	struct rvu_pf_eth_lmac eth_lmac_list[MAX_RVU_PFS];
#if !defined(PLAT_cnf10ka) && !defined(PLAT_cnf10kb)
	int rvu = RVU_LAST;
#endif
#if defined(PLAT_CN10K_FAMILY)
	int ipsec_pfs;
#endif

	/* Implementation note: this array only requires elements equal to the
	 * max number of ETH LMAC devices.
	 * However, since the ETH devices could potentially be placed anywhere
	 * in the range of 0..<max_rvu_pf_num>, the array is defined with
	 * sufficient size so that it can be accessed using the RVU PF device
	 * number.  This simplifies the code; the extra space is negligible
	 * as each array element is only 0x10 bytes.
	 */

	/* Check if FDT config is valid */
	if (!(plat_octeontx_bcfg->rvu_config.valid)) {
		ERROR("Invalid RVU configuration, skipping RVU init!.\n");
		return -1;
	}

	/*
	 * Firstly, initialize fixed setup
	 *     (PF0, PF(last-2), PF(last-1), PF(last))
	 */
	/* Init RVU0 - AF (PF0) */
	octeontx_init_rvu_af(&current_hwvf);

	/* Init RVU(last-2) - SSO_TIM (PF(last-2)) UNLESS SSO_TIM
	 * provision-mode is set to "AVAILABLE.
	 * On existing systems, provision-mode will be empty, thus
	 * defaulting to "LEGACY".  New systems which don't necessarily
	 * require a fixed SSO_TIM can set "AVAILABLE", thus bypassing
	 * a fixed allocation.
	 */
	sw_pf = find_sw_rvu_pf_info(SW_RVU_SSO_TIM_PF(0));
	if (sw_pf == NULL) {
		ERROR("Internal error locating TIM info\n");
		panic();
	}

	fixed_sso_tim_pfs = 0;
	/* If provision-mode == "AVAILABLE", don't alloc fixed SSO_TIM */
	if (sw_pf && (sw_pf->mapping != SW_RVU_MAP_AVAILABLE) &&
	    (sw_pf->mapping != SW_RVU_MAP_NONE)) {
		fixed_sso_tim_pfs++;
		octeontx_init_rvu_fixed(&current_hwvf, FIXED_RVU_SSO_TIM,
					SW_RVU_SSO_TIM_PF(0), TRUE);
	} else {
		uninit_pfs++;
		debug_rvu("RVU: skipping fixed SSO_TIM allocation\n");
	}

	/*
	 * Init RVU(last-1) - NPA (PF(last-1)) UNLESS NPA provision-mode
	 * is set to "AVAILABLE".
	 *
	 * On existing systems, provision-mode will be empty, thus
	 * defaulting to "LEGACY".  New systems which don't necessarily
	 * require a fixed NPA can set "AVAILABLE", thus bypassing a fixed
	 * allocation.
	 *
	 * Check for 'legacy' SDP provisioning, which is dependent upon ALL of:
	 *   FDT entry indicates 'LEGACY'
	 *   at least one PEM is in Endpoint mode
	 *
	 * For 'legacy' SDP, provision PF(last-1) as SDP instead of NPA.
	 */
	sw_pf = find_sw_rvu_pf_info(SW_RVU_SDP_PF(0));
	if (sw_pf == NULL) {
		ERROR("Internal error locating SDP info\n");
		panic();
	}
	if (sw_pf && (sw_pf->mapping == SW_RVU_MAP_LEGACY) &&
	    is_pem_in_ep_mode(0) &&
	    !IS_OCTEONTX_PASS(read_midr(), T98PARTNUM, 1, 0)) {
		debug_rvu("RVU: provision PF%d -> SW_RVU_SDP (override NPA)\n",
			  FIXED_RVU_NPA);
		octeontx_init_rvu_fixed(&current_hwvf, FIXED_RVU_NPA,
					SW_RVU_SDP_PF(0), TRUE);
	} else {
		sw_pf = find_sw_rvu_pf_info(SW_RVU_NPA_PF(0));
		if (sw_pf == NULL) {
			ERROR("Internal error locating NPA info\n");
			panic();
		}

		/* If provision-mode == "AVAILABLE", don't alloc fixed NPA */
		if (sw_pf && (sw_pf->mapping != SW_RVU_MAP_AVAILABLE) &&
		    (sw_pf->mapping != SW_RVU_MAP_NONE))
			octeontx_init_rvu_fixed(&current_hwvf, FIXED_RVU_NPA,
						SW_RVU_NPA_PF(0), TRUE);
		else {
			uninit_pfs++;
			debug_rvu("RVU: skipping fixed NPA allocation\n");
		}
	}

#if defined(PLAT_CN10K_FAMILY)
	/* For cn10k family, setup fixed provision for IPSEC PF at (last-3) */
	sw_pf = find_sw_rvu_pf_info(SW_RVU_IPSEC_PF(0));
	if (sw_pf != NULL && sw_pf->mapping != SW_RVU_MAP_NONE) {
		octeontx_init_rvu_fixed(&current_hwvf, FIXED_RVU_IPSEC,
			SW_RVU_IPSEC_PF(0), FALSE);
	} else {
		uninit_pfs++;
		WARN("RVU: skipping fixed IPSEC allocation\n");
	}
#endif

	/*
	 * The ETH PFs need to be provisioned.
	 * However, some of the RVU PFs reserved for ETH can be
	 * provisioned for SW_RVU_xxx devices instead, depending upon
	 * the "provision-mode" property of the SW_RVU_xxx device.
	 *
	 * These 'overridden' ETH devices may not consume the same number
	 * of LFs that the SW_RVU_xxx devices consume.
	 * Since the allocation of LFs to RVU PFs is done contiguously,
	 * the ETH devices cannot yet be allocated (since they might
	 * subsequently be overridden, this could produce gaps in the LF space).
	 *
	 * So, the count of RVU PFs is calculated first, without actually
	 * allocating LFs to the ETH devices.
	 *
	 * Then, the provisioning of RVU PFs to SW_RVU_xxx devices is
	 * performed, 'overriding' ETH allocations as necessary.
	 *
	 * Finally, after provisioning for all the SW_RVU_xxx devices has
	 * completed, the provisioning for ETH devices can be done.
	 * This ensures that the LFs are allocated in a contiguous manner,
	 * with no gaps.
	 */

	pf = RVU_ETH_FIRST;
	/* This represents the [numerically] highest RVU PF required by ETH */
	top_eth_pf = RVU_ETH_FIRST;

	uninit_pfs += (RVU_ETH_LAST - RVU_ETH_FIRST + 1);

	/* Determine the required number of ETH LMAC PFs */
	for (eth_id = 0; eth_id < plat_octeontx_get_eth_count(); eth_id++) {
		for (lmac_id = 0; lmac_id < plat_octeontx_get_eth_lmac_count();
		     lmac_id++) {
			if (plat_octeontx_is_enabled_eth_lmac(eth_id,
							      lmac_id) &&
			    !plat_octeontx_is_eth_lmac_rfoe(eth_id,
							    lmac_id)) {
				/* Save for possible re-allocation */
				eth_lmac_list[pf].eth_id = eth_id;
				eth_lmac_list[pf].lmac_id = lmac_id;

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

#if defined(PLAT_cn10ka) || defined(PLAT_cn10kb)
	/* Assing last RVU PF for CPT before SDP so that it won't overlap */
	if (!plat_octeontx_bcfg->rvu_config.cpt_dis) {
		/* Init last RVU - as CPT if present */
		octeontx_init_rvu_fixed(&current_hwvf, rvu,
			SW_RVU_CPT_PF(0), TRUE);
	}
#endif

	/*
	 * Now, provision RVU PFs for SW_RVU_xxx devices DOWNWARD starting from
	 * the 'pool' of available PFs.
	 */
	rvu_provision_pfs_for_sw_devs(top_eth_pf,
				      &current_hwvf,
				      &uninit_pfs,
				      eth_lmac_list);

	/*
	 * Finally, after any possible 'overrides' by SW_RVU_xxx devices,
	 * perform actual provisioning of RVU PFs to ETH devices.
	 */
	pf = RVU_ETH_FIRST;
	for (eth_id = 0; eth_id < plat_octeontx_get_eth_count(); eth_id++) {
		for (lmac_id = 0; lmac_id < plat_octeontx_get_eth_lmac_count();
		     lmac_id++) {
			if (plat_octeontx_is_enabled_eth_lmac(eth_id,
							      lmac_id) &&
			    !plat_octeontx_is_eth_lmac_rfoe(eth_id,
							    lmac_id)) {
				/* Sanity check */
				assert(eth_lmac_list[pf].eth_id ==
				       eth_id);
				assert(eth_lmac_list[pf].lmac_id ==
				       lmac_id);
				octeontx_init_rvu_lmac(&current_hwvf,
						       pf, eth_id,
						       lmac_id);
				assert(current_hwvf <= MAX_RVU_HWVFS);
				pf++;
			}
		}
	}

	if (pf != RVU_ETH_FIRST)
		debug_rvu("RVU: PF%d was last PF provisioned for ETH\n", pf-1);
	debug_rvu("RVU: uninitialized PF count %d\n", uninit_pfs);

	/*
	 * For all unitialized PFs, divide them by factor and configure:
	 * FACTOR*uninit_pf's as SSO_TIM PF
	 * All left PFs (uninit_pfs - FACTOR*uninit_pfs) as NPA PF
	 * FACTOR, as discussed with ODP developers, is set to 3/4.
	 */
	/* In T98 SOC (Errata AP-38625)
	 * If number of CGX.LMACs <= 12, assign PF15 instead of PF23 for CPT
	 * If number of CGX.LMACs > 12, assign PF23 for CPT.
	 */
#if defined(PLAT_t98)
	if ((pf <= 13) && IS_OCTEONTX_PN(read_midr(), T98PARTNUM)) {
		rvu = 15;
		uninit_pfs--;
	}
#endif

#if defined(PLAT_CN10K_FAMILY)
	if (plat_octeontx_bcfg->rvu_config.cpt_dis) {
		uninit_pfs++;
	}
#else
	/* Now configure RVU PF for CPT */
	if (plat_octeontx_bcfg->rvu_config.cpt_dis) {
		uninit_pfs++;
	} else {
		/* Init last RVU - as CPT if present */
		octeontx_init_rvu_fixed(&current_hwvf, rvu,
			SW_RVU_CPT_PF(0), TRUE);
	}
#endif

	if (!uninit_pfs)
		return 0;

#if defined(PLAT_CN10K_FAMILY)
	/* For cn10k family distribute available PFs between SSO_TIM, IPSEC
	 * and NPA in the ratio of 2:2:1. If there is any reminder left after
	 * the division, it will be given away in the following order:
	 * 1. SSO_TIM
	 * 2. IPSEC // only on cn10ka, cn10ka
	 * 3. NPA
	 */
	{
		int div = uninit_pfs / 5;
		int rem = uninit_pfs - 5 * div;

		sso_tim_pfs = 2 * div;
#if defined(PLAT_cn10ka) || defined(PLAT_cn10kb)
		ipsec_pfs = 2 * div;
		npa_pfs = div;
#else
		ipsec_pfs = 0;
		npa_pfs = 3 * div; // configure ipsec as npa on cnf10x platform
#endif
		switch (rem) {
		case 4:
			sso_tim_pfs++;
			/* FALLTHROUGH */
		case 3:
			npa_pfs++;
			/* FALLTHROUGH */
		case 2:
#if defined(PLAT_cn10ka) || defined(PLAT_cn10kb)
			ipsec_pfs++;
#else
			npa_pfs++;
#endif
			/* FALLTHROUGH */
		case 1:
			sso_tim_pfs++;
			/* FALLTHROUGH */
		default:
			break;
		}
	}

#	define MAX_ALLOWED_RVU_SSO_PFS 12
	/* Limit number of SSO PFs so as not to waste [MSIX] resources */
	if (sso_tim_pfs > (MAX_ALLOWED_RVU_SSO_PFS - fixed_sso_tim_pfs)) {
		int exc_pfs = sso_tim_pfs - (MAX_ALLOWED_RVU_SSO_PFS - fixed_sso_tim_pfs);

		sso_tim_pfs -= exc_pfs;
		npa_pfs += exc_pfs / 2;
		ipsec_pfs += (exc_pfs - exc_pfs / 2);
	}

	debug_rvu("RVU: allocating %u SSO, %u IPSEC and %u NPA PFs, starting at PF%u\n",
		sso_tim_pfs, ipsec_pfs, npa_pfs, pf);
#else
	/*
	 * Fix RVU PFs for NPA, SSO and SDP to address errata workaround AP-38625
	 * on T98 Pass1.0
	 *
	 * CGX_LMACS <= 11  // PF1 .. PF11
	 * 	PF12 for SSO
	 * 	PF13 & PF14 for SDP
	 *
	 * CGX_LMACS == 12 // PF1 .. PF12
	 * 	PF13 for SDP
	 * 	PF14 for SSO even if EP is configured or not
	 *
	 * CGX_LMACS > 12
	 * 	No PF for SDP
	 * 	PF14 for SSO (Force)
	 *
	 * REE:
	 * 	PF21 and PF22
	 *
	 * CPT:
	 * 	PF15 (CGX_LMACS <= 12) or PF23
	 *
	 * In all the combinations, Configure total 3 PFs for SSO and one PF for NPA and
	 * disable all unused PFs
	 */
	if (IS_OCTEONTX_PASS(read_midr(), T98PARTNUM, 1, 0)) {
		int sso_rvu, sdp_rvu, npa_rvu;
		if (pf <= 11) {
			sdp_rvu = 13;

			if (is_pem_in_ep_mode(0)) {
				npa_rvu = 12;
				octeontx_init_rvu_fixed(&current_hwvf, npa_rvu,
					SW_RVU_NPA_PF(0), TRUE);
				octeontx_init_rvu_fixed(&current_hwvf, sdp_rvu,
					SW_RVU_SDP_PF(0), TRUE);
			} else {
				sso_rvu = 12;
				octeontx_init_rvu_fixed(&current_hwvf, sso_rvu,
					SW_RVU_SSO_TIM_PF(0), TRUE);
			}

			/* only create second SDP PF if PEM2 is in EP
			 * mode
			 */
			if (is_pem_in_ep_mode(2))
				octeontx_init_rvu_fixed(&current_hwvf, sdp_rvu + 1,
							SW_RVU_SDP_PF(1), TRUE);
			else
				octeontx_init_rvu_fixed(&current_hwvf, sdp_rvu + 1,
							SW_RVU_SSO_TIM_PF(0), FALSE);
		} else if (pf == 12) {
			sso_rvu = 14;
			sdp_rvu = 13;
			octeontx_init_rvu_fixed(&current_hwvf, sso_rvu,
				SW_RVU_SSO_TIM_PF(0), TRUE);

			if (is_pem_in_ep_mode(0))
				octeontx_init_rvu_fixed(&current_hwvf, sdp_rvu,
					SW_RVU_SDP_PF(0), TRUE);
		} else if (pf > 12) {
			sso_rvu = 14;
			octeontx_init_rvu_fixed(&current_hwvf, sso_rvu,
				SW_RVU_SSO_TIM_PF(0), TRUE);
		}
		return 0;
	}

	sso_tim_pfs = uninit_pfs * SSO_TIM_TO_NPA_PFS_FACTOR;

#	define MAX_ALLOWED_RVU_SSO_PFS 8
	/* Limit number of SSO PFs so as not to waste [MSIX] resources */
	if (sso_tim_pfs > (MAX_ALLOWED_RVU_SSO_PFS - fixed_sso_tim_pfs))
		sso_tim_pfs = MAX_ALLOWED_RVU_SSO_PFS - fixed_sso_tim_pfs;
	npa_pfs = uninit_pfs - sso_tim_pfs;
	debug_rvu("RVU: allocating %u SSO PFs, %u NPA PFs, starting at PF%u\n",
		  sso_tim_pfs, npa_pfs, pf);
#endif // defined(PLAT_CN10K_FAMILY)

	while (sso_tim_pfs > 0) {
		pf = rvu_first_available(avail_from_bot);
		if (pf == -1) {
			ERROR("RVU: exceeded limit, %d SSO_TIM_PFs remaining\n",
			      sso_tim_pfs);
			return 0;
		}
		octeontx_init_rvu_fixed(&current_hwvf, pf,
					SW_RVU_SSO_TIM_PF(0), FALSE);
		sso_tim_pfs--;
	}

#if defined(PLAT_CN10K_FAMILY)
	while (ipsec_pfs > 0) {
		pf = rvu_first_available(avail_from_bot);
		if (pf == -1) {
			ERROR("RVU: exceeded limit, %d IPSEC_PFs remaining\n",
			      ipsec_pfs);
			return 0;
		}
		octeontx_init_rvu_fixed(&current_hwvf, pf,
					SW_RVU_IPSEC_PF(0), FALSE);
		ipsec_pfs--;
	}
#endif

	while (npa_pfs > 0) {
		pf = rvu_first_available(avail_from_bot);
		if (pf == -1) {
			ERROR("RVU: exceeded limit, %d NPA_PFs remaining\n",
			      npa_pfs);
			return 0;
		}
		octeontx_init_rvu_fixed(&current_hwvf, pf,
					SW_RVU_NPA_PF(0), FALSE);
		npa_pfs--;
	}

	return 0;
}

/* returns max PFs supported by RVU */
static int octeontx_get_max_rvu_pfs(void)
{
	union cavm_rvu_priv_const priv_const;

	priv_const.u = CSR_READ(CAVM_RVU_PRIV_CONST);

	return priv_const.s.pfs;
}

/* returns max VFs supported by RVU */
static int octeontx_get_max_rvu_vfs(void)
{
	union cavm_rvu_priv_const priv_const;

	priv_const.u = CSR_READ(CAVM_RVU_PRIV_CONST);

	return priv_const.s.max_vfs_per_pf;
}

static void dump_rvu_devs(void)
{
	int pf;

	for (pf = 0; pf < octeontx_get_max_rvu_pfs(); pf++) {
		debug_rvu("******************************************\n");
		debug_rvu("PF%d: enable=%d, num_vfs=%d, first_hwvf=%d\n"
			  "pf_num_msix_vec=%d, vf_num_msix_vec=%d\n"
			  "pf_res_nix_id=%d\n",
			  pf, rvu_dev[pf].enable, rvu_dev[pf].num_vfs,
			  rvu_dev[pf].first_hwvf, rvu_dev[pf].pf_num_msix_vec,
			  rvu_dev[pf].vf_num_msix_vec,
			  rvu_dev[pf].pf_res_nix_id);
		debug_rvu("PCI Settings:\n"
			  "pf_devid=0x%x, vf_devid=0x%x, class_code=0x%x\n",
			  rvu_dev[pf].pci.pf_devid, rvu_dev[pf].pci.vf_devid,
			  rvu_dev[pf].pci.class_code);
	}

	debug_rvu("******************************************\n");
}

#if defined(PLAT_CN10K_FAMILY)
static uint64_t next_pow2(uint64_t x);
static void cn10k_rvu_apr_init(void)
{
	union cavm_apr_af_lmt_cfg af_lmt_cfg;
	union cavm_apr_af_lmt_map_base lmt_map_base;

	/*Enable 32 PFs and 256 VFs per PF in map table */
	af_lmt_cfg.u = 0;
	/* ensure a power of two (ASIM config might not support all RVU PFs) */
	af_lmt_cfg.s.pfs = __builtin_ctzl(next_pow2(MAX_RVU_PFS));
	/* ensure a power of two (ASIM config might not support all RVU VFs) */
	af_lmt_cfg.s.funcs = __builtin_ctzl(next_pow2(MAX_RVU_VFS));
	CSR_WRITE(CAVM_APR_AF_LMT_CFG, af_lmt_cfg.u);

	lmt_map_base.u = RVU_LMT_MAPTBL_BASE;
	CSR_WRITE(CAVM_APR_AF_LMT_MAP_BASE, lmt_map_base.u);
}

static void config_lmt_map_table(void)
{
	union cavm_rvu_af_pfx_lmtline_addr pf_lmt_addr;
	union cavm_rvu_af_pfx_vf_bar4_addr vf_bar4_addr;
	union cavm_apr_af_lmt_ctl lmt_ctl;
	uint64_t lmt_ent_addr, vf_lmt_addr;
	uint64_t val = 0, lmt_ent_base_addr;
	int vfs = MAX_RVU_VFS, pf, vf;

	for (pf = 0; pf < octeontx_get_max_rvu_pfs(); pf++) {
		if (!rvu_dev[pf].enable)
			continue;

		lmt_ent_base_addr = RVU_LMT_MAPTBL_BASE +
				(pf * vfs) * RVU_LMT_MAPTBL_ENTRY_SIZE;
		lmt_ent_addr = lmt_ent_base_addr;
		/* Enable 2K LMT Lines per PF */
		/* TODO for cn10ka: remove hard-coded values */
		val |= 0x1ull << 20 | 0x6ull << 16;
		pf_lmt_addr.u = CSR_READ(CAVM_RVU_AF_PFX_LMTLINE_ADDR(pf));
		debug_rvu("RVU: PF%u LMT entry @ %p, LMTLINE_ADDR 0x%016llx\n",
			  pf, (void *)lmt_ent_addr, (long long)pf_lmt_addr.u);
		octeontx_write64(lmt_ent_addr, pf_lmt_addr.u);
		debug_rvu("RVU: PF%u LMT entry @ %p, val 0x%016llx\n", pf,
			  (void *)lmt_ent_addr + 0x8, (long long)val);
		octeontx_write64((lmt_ent_addr + 0x8), val);
		if (rvu_dev[pf].num_vfs) {
			vf_bar4_addr.u = CSR_READ(CAVM_RVU_AF_PFX_VF_BAR4_ADDR(pf));
			vf_lmt_addr = vf_bar4_addr.u;
			for (vf = 0; vf < rvu_dev[pf].num_vfs; vf++) {
				lmt_ent_addr = lmt_ent_base_addr + ((vf + 1) * RVU_LMT_MAPTBL_ENTRY_SIZE);
				octeontx_write64(lmt_ent_addr, vf_lmt_addr);
				debug_rvu("RVU: PF%u  VF%u LMT entry @ %p, LMTLINE_ADDR 0x%016llx\n",
					  pf, vf, (void *)lmt_ent_addr, (long long)vf_lmt_addr);
				octeontx_write64((lmt_ent_addr + 0x8), val);
				debug_rvu("RVU: VF%u LMT entry @ %p, val 0x%016llx\n", vf,
					  (void *)lmt_ent_addr + 0x8,
					  (long long)val);
				vf_lmt_addr += RVU_PF_LMT_LMTLINE_SIZE;
			}
		}
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

/* On CN10K memory for PF and VF mailboxs and lmtlines are allocated
 * from end of non-secure non-preserve region. Memory allocation is
 * dynamic based on numbers of enabled PFs and VFs.
 */
void cn10k_reserve_mbox_lmtline_memory(uint64_t *mem_base, uint64_t *mem_size)
{
	uint64_t size, rsize = 0;
	uint64_t pow2, base;
	int pf, num_funcs;
	int lmt_asc_idx = NSEC_LMT_REGION;

	for (pf = 0; pf < octeontx_get_max_rvu_pfs(); pf++) {
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

	base = octeontx_dram_reserve(rsize, NSECURE_NONPRESERVE, &lmt_asc_idx);
	if (base == 0) {
		ERROR("%s: RVU: Mbox/LMTLine memory allocation fails(%llx)\n",
		      __func__, rsize);
		panic();
	}
	if (cn10k_fdt_update_mailbox_memory_range(base, rsize)) {
		ERROR("%s: RVU: Mbox/LMTLine device tree update fail(%llx)\n",
		      __func__, rsize);
		panic();
	}

	*mem_base = base;
	*mem_size = rsize;
	plat_octeontx_bcfg->rvu_rsvd_reg_index = lmt_asc_idx;
}

static void cn10k_mailbox_enable(void)
{
	union cavm_rvu_af_pfx_lmtline_addr pf_lmt_addr;
	union cavm_rvu_af_pfx_bar4_addr pf_bar4_addr;
	union cavm_rvu_af_pfx_bar4_cfg pf_bar4_cfg;
	union cavm_rvu_af_pfx_vf_bar4_addr vf_bar4_addr;
	union cavm_rvu_af_pfx_vf_bar4_cfg vf_bar4_cfg;
	uint64_t size;
	uint64_t base, limit;
	int pf, num_funcs;

	cn10k_reserve_mbox_lmtline_memory(&base, &size);
	limit = base + size;

	for (pf = 0; pf < octeontx_get_max_rvu_pfs(); pf++) {
		if (!rvu_dev[pf].enable)
			continue;

		pf_bar4_addr.u = base;
		CSR_WRITE(CAVM_RVU_AF_PFX_BAR4_ADDR(pf), pf_bar4_addr.u);

		/* For a PF mailbox memory should be arranged as mbox region to
		 * communicate with AF followed by mbox region space
		 * for its VFs
		 */
		num_funcs = (1 /* i.e. the PF */ + rvu_dev[pf].num_vfs);

		size = num_funcs * RVU_PF_MAILBOX_SIZE;

		/* Alloc pages for PF LMTlines */
		size += RVU_PF_LMT_LMTLINE_SIZE;
		size = next_pow2(size);

		debug_rvu("RVU: PF%u (%u VFs) MB at %p (0x%x B), limit %p\n",
			  pf, rvu_dev[pf].num_vfs,
			  (void *)(uintptr_t)base, (unsigned int)size,
			  (void *)(uintptr_t)limit);

		if ((base + size) > limit) {
			ERROR("RVU: PF%u MB addr %p + size %p exceeds "
			      "limit %p\n", pf, (void *)(uintptr_t)base,
			      (void *)(uintptr_t)size,
			      (void *)(uintptr_t)limit);
			panic();
			break;
		}
		/* Configure PF LMTLINE  address (contiguous to mailboxes) */
		pf_lmt_addr.u = base + (num_funcs * RVU_PF_MAILBOX_SIZE);
		CSR_WRITE(CAVM_RVU_AF_PFX_LMTLINE_ADDR(pf), pf_lmt_addr.u);

		/* Write log2(size) in barbits */
		pf_bar4_cfg.u = __builtin_ctzl(size);
		CSR_WRITE(CAVM_RVU_AF_PFX_BAR4_CFG(pf), pf_bar4_cfg.u);
		base += size;

		if (rvu_dev[pf].num_vfs) {
			/*configure VF LMTLINE address */
			vf_bar4_addr.u = base;
			CSR_WRITE(CAVM_RVU_AF_PFX_VF_BAR4_ADDR(pf),
				  vf_bar4_addr.u);
			size = rvu_dev[pf].num_vfs * RVU_PF_LMT_LMTLINE_SIZE;
			if ((base + size) > limit) {
				ERROR("RVU: PF%u's VF LMTLINE addr %p + size %p"
				      " exceeds limit %p\n", pf,
				      (void *)(uintptr_t)base,
				      (void *)(uintptr_t)size,
				      (void *)(uintptr_t)limit);
				panic();
				break;
			}
			vf_bar4_cfg.u =  __builtin_ctzl(RVU_PF_LMT_LMTLINE_SIZE);
			CSR_WRITE(CAVM_RVU_AF_PFX_VF_BAR4_CFG(pf),
				  vf_bar4_cfg.u);
			base += size;
		}
	}

	config_lmt_map_table();
}
#else
static void otx2_mailbox_enable(void)
{
	int pf;
	static uint64_t vf_base = VF_MBOX_BASE;
	union cavm_rvu_af_pf_bar4_addr pf_bar4_addr;


	pf_bar4_addr.u = PF_MBOX_BASE;
	CSR_WRITE(CAVM_RVU_AF_PF_BAR4_ADDR, pf_bar4_addr.u);

	for (pf = 0; pf < octeontx_get_max_rvu_pfs(); pf++) {
		if (rvu_dev[pf].enable && rvu_dev[pf].num_vfs) {
			uint64_t bar4_addr = CAVM_RVU_BAR_E_RVU_PFX_FUNCX_BAR2(pf, 0) + 0x10;
			octeontx_write64(bar4_addr, vf_base);
			vf_base = vf_base + (0x10000 * (rvu_dev[pf].num_vfs & 0x7f));
		}
	}
}
#endif // defined(PLAT_CN10K_FAMILY)

/* set mailbox memory*/
static void mailbox_enable(void)
{
#if defined(PLAT_CN10K_FAMILY)
	cn10k_mailbox_enable();
#else
	otx2_mailbox_enable();
#endif
	return;
}

/* Initialize PCI PF_DEVID and VF_DEVID */
static void config_rvu_pci(void)
{
	cavm_rvu_priv_pfx_id_cfg_t pf_id_cfg;
	int pf;

	for (pf = 0; pf < octeontx_get_max_rvu_pfs(); pf++) {
		pf_id_cfg.u = 0;
		pf_id_cfg.s.class_code = rvu_dev[pf].pci.class_code;
		pf_id_cfg.s.pf_devid = rvu_dev[pf].pci.pf_devid;
		pf_id_cfg.s.vf_devid = rvu_dev[pf].pci.vf_devid;
		CSR_WRITE(CAVM_RVU_PRIV_PFX_ID_CFG(pf), pf_id_cfg.u);
		debug_rvu("RVU: PF%d devid[7:0] 0x%x\n", pf,
			  pf_id_cfg.s.pf_devid);
	}
}

static void msix_error_print_map(void)
{
	int pf;

	for (pf = 0; pf < octeontx_get_max_rvu_pfs(); pf++) {
		ERROR(" PF%d: num_pf_msix=%d, num_vfs=%d, total_vfs_msix=%d\n",
			pf, rvu_dev[pf].pf_num_msix_vec, rvu_dev[pf].num_vfs,
			rvu_dev[pf].vf_num_msix_vec);
	}
}

/*
 * Configure AF interrupt map at PF's MSI-X table.
 */
static void conf_msix_admin_blk_offset(void)
{
	union cavm_rvu_priv_pfx_int_cfg af_int_cfg;
	union cavm_nixx_priv_af_int_cfg nix_int_cfg;
	union cavm_npa_priv_af_int_cfg npa_int_cfg;
	union cavm_sso_priv_af_int_cfg sso_int_cfg;
	union cavm_tim_priv_af_int_cfg tim_int_cfg;
	union cavm_ndcx_priv_af_int_cfg ndc_int_cfg;
	union cavm_cptx_priv_af_int_cfg	cpt_int_cfg;
#ifdef PLAT_t98
	union cavm_reex_priv_af_int_cfg ree_int_cfg;
	rvu_sw_rvu_pf_t *sw_pf;
#endif
	int af_msix_used = 0, i = 0;
	uint64_t midr;

	/*
	 * AF interrupt vectors enumerated by RVU_AF_INT_VEC_E
	 * have a fixed starting offset (0) in RVU PF(0)'s
	 * MSI-X table, so just increment used MSI-X.
	 * There's no register that holds AF_INT_VEC_E size.
	 */
	af_msix_used += RVU_AF_INT_VEC_E_MSIX_SIZE;

	/* Configure RVU_PF_INT_VEC_E right next to RVU_AF */
	af_int_cfg.u = CSR_READ(CAVM_RVU_PRIV_PFX_INT_CFG(0));
	af_int_cfg.s.msix_offset = af_msix_used;
	CSR_WRITE(CAVM_RVU_PRIV_PFX_INT_CFG(0), af_int_cfg.u);
	af_msix_used += af_int_cfg.s.msix_size;

	/*
	 * Configure next blocks accordingly to the number
	 * of MSI-X AF interrupts already consumed
	 */
	for (i = 0; i < plat_octeontx_scfg->nix_count; i++) {
		nix_int_cfg.u = CSR_READ(CAVM_NIXX_PRIV_AF_INT_CFG(i));
		nix_int_cfg.s.msix_offset = af_msix_used;
		CSR_WRITE(CAVM_NIXX_PRIV_AF_INT_CFG(i), nix_int_cfg.u);
		af_msix_used += nix_int_cfg.s.msix_size;
	}

	npa_int_cfg.u = CSR_READ(CAVM_NPA_PRIV_AF_INT_CFG);
	npa_int_cfg.s.msix_offset = af_msix_used;
	CSR_WRITE(CAVM_NPA_PRIV_AF_INT_CFG, npa_int_cfg.u);
	af_msix_used += npa_int_cfg.s.msix_size;

	sso_int_cfg.u = CSR_READ(CAVM_SSO_PRIV_AF_INT_CFG);
	sso_int_cfg.s.msix_offset = af_msix_used;
	CSR_WRITE(CAVM_SSO_PRIV_AF_INT_CFG, sso_int_cfg.u);
	af_msix_used += sso_int_cfg.s.msix_size;

	tim_int_cfg.u = CSR_READ(CAVM_TIM_PRIV_AF_INT_CFG);
	tim_int_cfg.s.msix_offset = af_msix_used;
	CSR_WRITE(CAVM_TIM_PRIV_AF_INT_CFG, tim_int_cfg.u);
	af_msix_used += tim_int_cfg.s.msix_size;

	midr = read_midr();
	for (i = 0; i < 3; i++) {
		/* Workaround for errata NDC-34917,
		 * set NDC_PRIV_AF_INT_CFG[MSIX_OFFSET] = 0
		 */
		if (IS_OCTEONTX_PASS(midr, T96PARTNUM, 1, 0)) {
			CSR_WRITE(CAVM_NDCX_PRIV_AF_INT_CFG(i), 0x0);
			continue;
		}
		ndc_int_cfg.u = CSR_READ(CAVM_NDCX_PRIV_AF_INT_CFG(i));
		ndc_int_cfg.s.msix_offset = af_msix_used;
		CSR_WRITE(CAVM_NDCX_PRIV_AF_INT_CFG(i), ndc_int_cfg.u);
		af_msix_used += ndc_int_cfg.s.msix_size;
	}

	if (!plat_octeontx_bcfg->rvu_config.cpt_dis) {
		for (i = 0; i < SW_RVU_CPT_NUM_PF; i++) {
			cpt_int_cfg.u = CSR_READ(CAVM_CPTX_PRIV_AF_INT_CFG(i));
			cpt_int_cfg.s.msix_offset = af_msix_used;
			CSR_WRITE(CAVM_CPTX_PRIV_AF_INT_CFG(i), cpt_int_cfg.u);
			af_msix_used += cpt_int_cfg.s.msix_size;
		}
	}

#ifdef PLAT_t98
	for (i = 0; i < SW_RVU_REE_NUM_PF; i++) {
		sw_pf = find_sw_rvu_pf_info(SW_RVU_REE_PF(i));
		assert(sw_pf != NULL);

		if ((sw_pf->mapping != SW_RVU_MAP_FORCE) &&
		    (sw_pf->mapping != SW_RVU_MAP_AVAILABLE))
			continue;

		ree_int_cfg.u = CSR_READ(CAVM_REEX_PRIV_AF_INT_CFG(i));
		ree_int_cfg.s.msix_offset = af_msix_used;
		CSR_WRITE(CAVM_REEX_PRIV_AF_INT_CFG(i), ree_int_cfg.u);
		af_msix_used += ree_int_cfg.s.msix_size;
	}
#endif

	/* Sanity check for incorrect FDT setup */
	assert(af_msix_used <= rvu_dev[0].pf_num_msix_vec);
}

static int msix_enable(void)
{
	uint32_t msix_offset = 0;
	int pf;
	union cavm_rvu_priv_const priv_const;

	/* Read contents of RVU_PRIV_CONST */
	priv_const.u = CSR_READ(CAVM_RVU_PRIV_CONST);

	/* set AF MSIX table base*/
	union cavm_rvu_af_msixtr_base af_msix_cfg;

	af_msix_cfg.u = MSIX_TABLE_BASE;
	CSR_WRITE(CAVM_RVU_AF_MSIXTR_BASE, af_msix_cfg.u);

	/*
	 * Check if reserved memory for MSI-X table is big enough to hold all
	 * possible MSI-Xes.
	 */
	assert(priv_const.s.max_msix * RVU_MSIX_VEC_SIZE <= MSIX_TABLE_SIZE);

	/* Configure AF interrupt offsets at PF0 */
	conf_msix_admin_blk_offset();

	/* set PF/VF msix table size and offset */
	for (pf = 0; pf < octeontx_get_max_rvu_pfs(); pf++) {
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

		/*
		 * Check if requested number of MSI-X does
		 * not exceedes number of available MSI-X by HRM.
		 * If such configuration is requested,
		 * print error and not configure more PFs.
		 * Return pf index which has invalid configuration.
		 */
		if (msix_offset > priv_const.s.max_msix) {
			ERROR("Invalid RVU MSI-X configuration!\n");
			ERROR("Disabling PFs (%d:%d)\n",
			      pf, (octeontx_get_max_rvu_pfs() - 1));
			msix_error_print_map();
			return pf;
		}

		CSR_WRITE(CAVM_RVU_PRIV_PFX_MSIX_CFG(pf), pfx_msix_cfg.u);
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
/* Enable NPA for PF*/
static void pf_enable_npa(int pf, int lf_id)
{
	union cavm_rvu_priv_pfx_npa_cfg pf_npa_cfg;
	union cavm_npa_priv_lfx_cfg npa_lf_cfg;

	pf_npa_cfg.u = 0;
	pf_npa_cfg.s.has_lf = 1;
	CSR_WRITE(CAVM_RVU_PRIV_PFX_NPA_CFG(pf), pf_npa_cfg.u);

	npa_lf_cfg.u = 0;
	npa_lf_cfg.s.ena = 1;
	npa_lf_cfg.s.pf_func = (((pf & 0x3f) << 10) | 0x0);
	npa_lf_cfg.s.slot = 0;
	CSR_WRITE(CAVM_NPA_PRIV_LFX_CFG(lf_id), npa_lf_cfg.u);
}

/* Disable NPA for PF */
static void pf_disable_npa(int pf, int lf_id)
{
	union cavm_rvu_priv_pfx_npa_cfg pf_npa_cfg;
	union cavm_npa_priv_lfx_cfg npa_lf_cfg;

	pf_npa_cfg.u = 0;
	CSR_WRITE(CAVM_RVU_PRIV_PFX_NPA_CFG(pf), pf_npa_cfg.u);

	npa_lf_cfg.u = 0;
	CSR_WRITE(CAVM_NPA_PRIV_LFX_CFG(lf_id), npa_lf_cfg.u);
}

/* Enable NIX for PF*/
static void pf_enable_nix(int nix_id, int pf, int lf_id)
{
	union cavm_rvu_priv_pfx_nixx_cfg pf_nix_cfg;
	union cavm_nixx_priv_lfx_cfg nix_lf_cfg;

	pf_nix_cfg.u = 0;
	pf_nix_cfg.s.has_lf = 1;
	CSR_WRITE(CAVM_RVU_PRIV_PFX_NIXX_CFG(pf, nix_id), pf_nix_cfg.u);

	nix_lf_cfg.u = 0;
	nix_lf_cfg.s.ena = 1;
	nix_lf_cfg.s.pf_func = (((pf & 0x3f) << 10) | 0x0);
	nix_lf_cfg.s.slot = 0;
	CSR_WRITE(CAVM_NIXX_PRIV_LFX_CFG(nix_id, lf_id), nix_lf_cfg.u);
}

/* Disable NIX for PF */
static void pf_disable_nix(int nix_id, int pf, int lf_id)
{
	union cavm_rvu_priv_pfx_nixx_cfg pf_nix_cfg;
	union cavm_nixx_priv_lfx_cfg nix_lf_cfg;

	pf_nix_cfg.u = 0;
	CSR_WRITE(CAVM_RVU_PRIV_PFX_NIXX_CFG(pf, nix_id), pf_nix_cfg.u);

	nix_lf_cfg.u = 0;
	CSR_WRITE(CAVM_NIXX_PRIV_LFX_CFG(nix_id, lf_id), nix_lf_cfg.u);
}

/* Reset all the resources before enabling PF */
static void reset_rvu_pf(int pf)
{
	union cavm_rvu_priv_pfx_cptx_cfg cpt_cfg;
	union cavm_rvu_priv_pfx_int_cfg int_cfg;
	union cavm_rvu_priv_pfx_msix_cfg msix_cfg;
	union cavm_rvu_priv_pfx_nixx_cfg nix_cfg;
	union cavm_rvu_priv_pfx_npa_cfg npa_cfg;
	union cavm_rvu_priv_pfx_sso_cfg sso_cfg;
	union cavm_rvu_priv_pfx_ssow_cfg ssow_cfg;
	union cavm_rvu_priv_pfx_tim_cfg tim_cfg;
	int nix;

	if (!plat_octeontx_bcfg->rvu_config.cpt_dis) {	/* CPT is present */
		cpt_cfg.u = 0;
		cpt_cfg.s.num_lfs = 0;
		CSR_WRITE(CAVM_RVU_PRIV_PFX_CPTX_CFG(pf, 0), cpt_cfg.u);
	}

	int_cfg.u = 0;
	int_cfg.s.msix_offset = 0;
	CSR_WRITE(CAVM_RVU_PRIV_PFX_INT_CFG(pf), int_cfg.u);

	msix_cfg.u = 0;
	msix_cfg.s.pf_msixt_offset = 0;
	msix_cfg.s.pf_msixt_sizem1 = 0;
	msix_cfg.s.vf_msixt_offset = 0;
	msix_cfg.s.vf_msixt_sizem1 = 0;
	CSR_WRITE(CAVM_RVU_PRIV_PFX_MSIX_CFG(pf), msix_cfg.u);

	for (nix = 0; nix < plat_octeontx_scfg->nix_count; nix++) {
		nix_cfg.u = 0;
		nix_cfg.s.has_lf = 0;
		CSR_WRITE(CAVM_RVU_PRIV_PFX_NIXX_CFG(pf, nix), nix_cfg.u);
	}

	npa_cfg.u = 0;
	npa_cfg.s.has_lf = 0;
	CSR_WRITE(CAVM_RVU_PRIV_PFX_NPA_CFG(pf), npa_cfg.u);

	sso_cfg.u = 0;
	sso_cfg.s.num_lfs = 0;
	CSR_WRITE(CAVM_RVU_PRIV_PFX_SSO_CFG(pf), sso_cfg.u);

	ssow_cfg.u = 0;
	ssow_cfg.s.num_lfs = 0;
	CSR_WRITE(CAVM_RVU_PRIV_PFX_SSOW_CFG(pf), ssow_cfg.u);

	tim_cfg.u = 0;
	tim_cfg.s.num_lfs = 0;
	CSR_WRITE(CAVM_RVU_PRIV_PFX_TIM_CFG(pf), tim_cfg.u);
}

/* Returns max LFs supported by NPA */
static int octeontx2_get_max_npa_lfs(void)
{
	cavm_npa_af_const_t npa_af_const;

	npa_af_const.u = CSR_READ(CAVM_NPA_AF_CONST);

	return npa_af_const.s.lfs;
}

/* Returns max LFs supported by NIX */
static int octeontx2_get_max_nix_lfs(int nix)
{
	cavm_nixx_af_const2_t nixx_af_const2;

	nixx_af_const2.u = CSR_READ(CAVM_NIXX_AF_CONST2(nix));

	return nixx_af_const2.s.lfs;
}

/* This is workaround for errata RVU-35948 */
static void rvu_errata_35948(void)
{
	int pf, mbox, vf;
	uint64_t int_reg;

	/* Write zeros to RVU_AF_AFPF()_MBOX() */
	for (pf = 0; pf < octeontx_get_max_rvu_pfs(); pf++) {
		for (mbox = 0; mbox < RVU_MBOX_NUM; mbox++)
			CSR_WRITE(CAVM_RVU_AF_AFPFX_MBOXX(pf, mbox), 0);
	}
	/* Write zeros to RVU_PF_VF()_PFVF_MBOX() */
	for (vf = 0; vf < octeontx_get_max_rvu_vfs(); vf++) {
		for (mbox = 0; mbox < RVU_MBOX_NUM; mbox++)
			CSR_WRITE(CAVM_RVU_PF_VFX_PFVF_MBOXX(vf, mbox), 0);
	}

	/* Clear RVU_PF_INT[MBOX] */
	for (mbox = 0; mbox < RVU_MBOX_NUM; mbox++) {
		int_reg = CSR_READ(CAVM_RVU_PF_INT);
		int_reg |= RVU_PF_INT_SET_MBOX;
		CSR_WRITE(CAVM_RVU_PF_INT, int_reg);
	}
	/* Clear RVU_VF_INT[MBOX] */
	for (mbox = 0; mbox < RVU_MBOX_NUM; mbox++) {
		int_reg = CSR_READ(CAVM_RVU_VF_INT);
		int_reg |= RVU_VF_INT_SET_MBOX;
		CSR_WRITE(CAVM_RVU_VF_INT, int_reg);
	}
}

/* Exported functions */
int octeontx_clear_lf_to_pf_mapping(void)
{
	int pf, lf, nix;

	for (pf = 0; pf < octeontx_get_max_rvu_pfs(); pf++) {
		for (nix = 0; nix < plat_octeontx_scfg->nix_count; nix++) {
			for (lf = 0;
			     lf < octeontx2_get_max_nix_lfs(nix);
			     lf++) {
				pf_disable_nix(nix, pf, lf);
			}
		}

		for (lf = 0; lf < octeontx2_get_max_npa_lfs(); lf++) {
			pf_disable_npa(pf, lf);
		}
	}

	return 0;
}

void octeontx_rvu_init(void)
{
	int pf, rc, nix_id;
	int npalf_id = 0, nixlf_id[MAX_NIX] = {0};

	/* This is workaround for errata RVU-35948 */
	if (IS_OCTEONTX_VAR(read_midr(), T96PARTNUM, 1) ||
	    IS_OCTEONTX_PN(read_midr(), F95PARTNUM) ||
	    IS_OCTEONTX_PN(read_midr(), F95MMPARTNUM))
		rvu_errata_35948();

	/* sanity-check platform definition */
	if (octeontx_get_max_rvu_pfs() != MAX_RVU_PFS) {
		ERROR("RVU: max PFs mismatch, platform def %u, actual %u\n",
		      MAX_RVU_PFS, octeontx_get_max_rvu_pfs());
		assert(octeontx_get_max_rvu_pfs() <= MAX_RVU_PFS);
	}

	/* sanity check - validate platform definition */
	if (octeontx_get_max_rvu_pfs() != MAX_RVU_PFS)
		ERROR("MAX_RVU_PFS %d does not match platform const %d\n",
		      MAX_RVU_PFS, octeontx_get_max_rvu_pfs());

	rc = octeontx_init_rvu_from_fdt();
	if (rc < 0)
		return;

	dump_rvu_devs();

#if defined(PLAT_CN10K_FAMILY)
	cn10k_rvu_apr_init();
#endif
	for (pf = 0 ; pf < octeontx_get_max_rvu_pfs(); pf++) {
		if (rvu_dev[pf].enable) {
			reset_rvu_pf(pf);
			enable_rvu_pf(pf);
			nix_id = rvu_dev[pf].pf_res_nix_id;
			if (nix_id >= plat_octeontx_scfg->nix_count) {
				WARN("RVU: non-existent NIX%d used on PF%d\n",
				     nix_id, pf);
			} else if (nix_id != NIX_DISABLED) {
				debug_rvu("RVU: provision NIX%d/LF%d to PF%d\n",
					  nix_id, nixlf_id[nix_id], pf);
				pf_enable_nix(nix_id, pf, nixlf_id[nix_id]);
				nixlf_id[nix_id]++;
				debug_rvu("RVU: provision NPA LF%d to PF%d\n",
					  npalf_id, pf);
				pf_enable_npa(pf, npalf_id);
				npalf_id++;
			}
		}
		else 	/* Disable unused PFs */
			disable_rvu_pf(pf);
	}

	rc = msix_enable();
	if (rc) {
		for (pf = rc; pf < octeontx_get_max_rvu_pfs(); pf++) {
			disable_rvu_pf(pf);
			reset_rvu_pf(pf);
		}
	}

	mailbox_enable();
	config_rvu_pci();
}
