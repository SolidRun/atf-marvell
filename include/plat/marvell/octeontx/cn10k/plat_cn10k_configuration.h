/*
 * Copyright (c) 2020 Marvell.
 *
 * SPDX-License-Identifier:     BSD-3-Clause
 * https://spdx.org/licenses
 */

#ifndef __PLAT_CN10K_CONFIGURATION_H__
#define __PLAT_CN10K_CONFIGURATION_H__

#define CN10KAS_PKG  0
#define CN10KA_PKG  1

/* Used to initialize individual device IOBN security settings */
struct cn10k_stream_security_setting {
	uint32_t streamid;    /* id of instance 0, see CAVM_PCC_DEV_CON_E_xxx */
	int      instances;   /* # of stream instances */
	/* following are applied to BOTH BUSX_STREAMS & DEVX/RSLX_STREAMS */
	int      strm_nsec;
	int      phys_nsec;
};

int plat_octeontx_get_iobn_count(void);
int plat_octeontx_get_cpt_count(void);
int plat_octeontx_get_rpm_count(void);
int plat_octeontx_get_gserm_count(void);
int plat_octeontx_get_portm_count(void);
int plat_portm_get_max_lane_cnt(int portm_idx);
int plat_get_refclk_term_gserm_num(int refclk_idx);
int plat_octeontx_get_gserp_count(void);
int plat_octeontx_get_mcc_count(void);
int plat_octeontx_get_pem_count(void);
int plat_get_altpkg(void);
unsigned int is_pem_in_ep_mode(int pem);
unsigned int is_pem_in_rc_mode(int pem);
unsigned int is_pem_hotplug(int pem);
unsigned int plat_configure_rid(void);
unsigned int plat_configure_cpt_rid(void);
struct cn10k_stream_security_setting *plat_get_cn10k_stream_security(int *count);
void plat_cn10k_set_secondary_cpu_jump_addr(int core_id, uint64_t entrypoint_addr);
int plat_octeontx_get_nix_count(void);
int plat_octeontx_get_eth_count(void);
int plat_octeontx_get_eth_lmac_count(void);
void plat_octeontx_get_eth_lmac_rvu_info(unsigned int eth_id,
					 unsigned int lmac_id,
					 int *num_rvu_vfs,
					 int *num_msix_vec,
					 int *nix_block);
void plat_octeontx_enable_eth_lmac(unsigned int eth_id, unsigned int lmac_id,
				   int enabled);
int plat_octeontx_is_enabled_eth_lmac(unsigned int eth_id,
				      unsigned int lmac_id);
int plat_octeontx_is_eth_lmac_rfoe(unsigned int eth_id,
				   unsigned int lmac_id);

#define CAVM_GIC_ANB_NCBI_P_OVR_OFFSET 0x10
#define CAVM_GIC_ANB_NCBI_NP_OVR_OFFSET 0x20
#define CAVM_GIC_ANB_REG_START 0x10011000
#define CAVM_GIC_ANB_REG(offset) \
	CAVM_GIC_BAR_E_GIC_PF_BAR0 + \
	CAVM_GIC_ANB_REG_START + \
	offset
#define CAVM_GIC_ANB_REG_SIZE 0x60

#define CAVM_DSUUB_BAR0_REGION0_SIZE	4096
#define CAVM_DSUUB_BAR0_REGION0_BASE	0

#define CAVM_DSUUB_BAR0_REGION1_SIZE	4096
#define CAVM_DSUUB_BAR0_REGION1_BASE	0x30000

#define CAVM_DSUUB_BAR0_REGION2_SIZE	4096
#define CAVM_DSUUB_BAR0_REGION2_BASE	0x80000

#define CAVM_DSUUB_BAR0_REGION3_SIZE	4096
#define CAVM_DSUUB_BAR0_REGION3_BASE	0x90000

#define CAVM_DSUUB_BAR0_REGION4_SIZE	4096
#define CAVM_DSUUB_BAR0_REGION4_BASE	0xB0000

/*
 * Number of channels supported per SOC in cn10k family.
 * cn10ka : 6 DSS controllers
 * cnf10ka : 4 DSS controllers
 * cnf10kb : 4 DSS controllers
 */
#define MAX_CHANNELS		(cavm_is_model(OCTEONTX_CN10KA) ? 6 : \
				 (cavm_is_model(OCTEONTX_CN10KB) ? 2 : 4))

#define CAVM_TAD_CMN_BAR_E_TAD_CMN_PF_BAR0 \
		(cavm_is_model(OCTEONTX_CN10KB) ? CAVM_TAD_CMN_BAR_E_TAD_CMN_PF_BAR0_CN10KB : CAVM_TAD_CMN_BAR_E_TAD_CMN_PF_BAR0_CN10KA)

#define CAVM_TAD_CMN_BAR_E_TAD_CMN_PF_BAR0_SIZE \
		(cavm_is_model(OCTEONTX_CN10KB) ? CAVM_TAD_CMN_BAR_E_TAD_CMN_PF_BAR0_CN10KB_SIZE : CAVM_TAD_CMN_BAR_E_TAD_CMN_PF_BAR0_CN10KA_SIZE)

#endif /* __PLAT_CN10K_CONFIGURATION_H__ */
