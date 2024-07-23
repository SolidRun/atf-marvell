/*
 * Copyright (c) 2023 Marvell.
 *
 * SPDX-License-Identifier:     BSD-3-Clause
 * https://spdx.org/licenses
 */

#ifndef __PLAT_CN20K_CONFIGURATION_H__
#define __PLAT_CN20K_CONFIGURATION_H__

#define CN20KAS_PKG 2
#define CN20KA_PKG  1

/* Used to initialize individual device IOBN security settings */
struct cn20k_stream_security_setting {
	uint32_t streamid;    /* id of instance 0, see CAVM_PCC_DEV_CON_E_xxx */
	int      instances;   /* # of stream instances */
	/* following are applied to BOTH BUSX_STREAMS & DEVX/RSLX_STREAMS */
	int      strm_nsec;
	int      phys_nsec;
};

int plat_octeontx_get_cpt_count(void);
int plat_octeontx_get_rpm_count(void);
int plat_octeontx_get_gserm_count(void);
int plat_octeontx_get_portm_count(void);
int plat_portm_get_max_lane_cnt(int portm_idx);
int plat_get_refclk_term_gserm_num(int refclk_idx);
int plat_get_altpkg(void);
unsigned int plat_configure_rid(void);
struct cn20k_stream_security_setting *plat_get_cn20k_stream_security(int *count);
void plat_cn20k_set_secondary_cpu_jump_addr(int core_id, uint64_t entrypoint_addr);

void plat_octeontx_get_eth_lmac_rvu_info(unsigned int eth_id,
					 unsigned int lmac_id,
					 int *num_rvu_vfs,
					 int *num_msix_vec,
					 int *nix_block);
int plat_octeontx_get_eth_count(void);
int plat_octeontx_get_eth_lmac_count(void);
int plat_octeontx_is_enabled_eth_lmac(unsigned int eth_id,
				      unsigned int lmac_id);

#define CAVM_GIC_ANB_NCBI_P_OVR_OFFSET	0x10
#define CAVM_GIC_ANB_NCBI_NP_OVR_OFFSET 0x20
#define CAVM_GIC_ANB_REG_START		0x10012000
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

#define FIXED_ECAM_BAR			0xc10000000000ll

#endif /* __PLAT_CN20K_CONFIGURATION_H__ */
