/*
 * Copyright (c) 2020 Marvell.
 *
 * SPDX-License-Identifier:     BSD-3-Clause
 * https://spdx.org/licenses
 */

#ifndef __PLAT_SCFG_H__
#define __PLAT_SCFG_H__

#include <octeontx_scfg.h>
#include <platform_scfg.h>
#include <platform_dt.h>

typedef struct plat_octeontx_scfg {
	scfg_t scfg;

	uint8_t qlm_max_lane_num[MAX_QLM];
	uint8_t portm_max_lane_cnt[MAX_PORTM];
	int refclk_term_gserm_num[MAX_REFCLK];
	uint8_t iobn_count;
	uint8_t rpm_count;
	uint8_t gserm_count;
	uint8_t portm_count;
	uint8_t mcc_count;
	uint8_t nix_count;
} plat_octeontx_scfg_t;

extern plat_octeontx_scfg_t * const plat_octeontx_scfg;

#endif /* __PLAT_SCFG_H__ */
