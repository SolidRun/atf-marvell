/*
 * Copyright (c) 2018 Marvell.
 *
 * SPDX-License-Identifier:     BSD-3-Clause
 * https://spdx.org/licenses
 */

#ifndef __OCTEONTX_SECURITY_H__
#define __OCTEONTX_SECURITY_H__
typedef enum {
	TAD_FLUSH_TYPE_CLEAN_INVAL = 0,
	TAD_FLUSH_TYPE_MAKE_INVAL,
	TAD_FLUSH_TYPE_CLEAN_SHARED
} tad_cmn_flush_type_t;

void octeontx_security_setup(void);
void octeontx_configure_mmc_security(int secure);
void octeontx_configure_pem_ep_security(int pem);

#endif /* __OCTEONTX_SECURITY_H__ */
