/*
 * Copyright (c) 2024 Marvell.
 *
 * SPDX-License-Identifier:     BSD-3-Clause
 *
 * https://spdx.org/licenses
 *
 */

#ifndef __PLAT_SVC_H__
#define __PLAT_SVC_H__

/*
 * No input
 * Return:
 *	0x0 -- Success
 */

#define PLAT_OCTEONTX_FLSF_FW_BOOTED	0xc2000b02

/*
 * No input
 * Return:
 *	0x0 -- Success
 */
#define PLAT_OCTEONTX_FLSF_CLEAR_FORCE_2NDRY	0xc2000b03
/*
 * Return:
 *	x0:
 *		0 -- Success
 *	x1: region address
 *	x2: region size
 */
#define PLAT_OCTEONTX_RVU_RSVD_REG_INFO		0xc2000b07

 /* Number of family specific SMCs */
#define CN20K_NUM_SMC_CALLS                      3


/* API that allows to define platform specific SMC CALLS */
uintptr_t cn20k_svc_smc_handler(uint32_t smc_fid,
                               u_register_t x1,
                               u_register_t x2,
                               u_register_t x3,
                               u_register_t x4,
                               void *cookie,
                               void *handle,
                               u_register_t flags);

#endif /* __PLAT_SVC_H__ */
