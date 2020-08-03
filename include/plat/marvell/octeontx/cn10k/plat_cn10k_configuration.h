/*
 * Copyright (C) 2020 Marvell International Ltd.
 *
 * SPDX-License-Identifier:     BSD-3-Clause
 * https://spdx.org/licenses
 */

#ifndef __PLAT_CN10K_CONFIGURATION_H__
#define __PLAT_CN10K_CONFIGURATION_H__

#define CN106XX_PKG  1

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
int plat_octeontx_get_gserp_count(void);
int plat_octeontx_get_mcc_count(void);
int plat_octeontx_get_pem_count(void);
int plat_get_altpkg(void);
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

#endif /* __PLAT_CN10K_CONFIGURATION_H__ */
