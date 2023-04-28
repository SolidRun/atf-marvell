/***********************license start***********************************
 * Copyright (c) 2022 Marvell.
 *
 * SPDX-License-Identifier: BSD-3-Clause
 * https://spdx.org/licenses
 **********************license end**************************************/

#ifndef __FDTEBF_HELPER_H__
#define __FDTEBF_HELPER_H__

long cn10k_fdtebf_get_num(const void *fdt_addr, const char *prop, int base);

#ifdef PLAT_cnf10kb
int retimer_get_gserm_muxed_lane(const void *fdt, int retimer_idx, int gserm_idx);
#endif

#endif /* __FDTEBF_HELPER_H__ */
