/*
 * Copyright (c) 2020 Marvell.
 *
 * SPDX-License-Identifier:     BSD-3-Clause
 * https://spdx.org/licenses
 */

#ifndef _GSERM_CN10K_H_
#define _GSERM_CN10K_H_

#include <cassert.h>
#include <plat_portm_cfg.h>

typedef union {
	uint64_t u;
	struct {
		uint64_t baud_mhz : 16;
		uint64_t mode     :  8;	/* cn10k_portm_modes_t */
		uint64_t ref_clk  :  4;
		uint64_t flags    :  8;
		uint64_t fec      :  12; /* cn10k_portm_fec_t */
		uint64_t reserved : 16;
	} s;
} gserm_state_lane_t;

/* QLM APIs */

static inline gserm_state_lane_t gserm_build_state(cn10k_portm_modes_t mode, int baud_mhz,
	uint8_t flags, int fec)
{
	gserm_state_lane_t state;

	state.u = 0;
	state.s.mode = mode;
	state.s.baud_mhz = baud_mhz;
	state.s.flags = flags;
	state.s.fec = fec;
	return state;
}

struct gserm_mode_strmap_s {
	int mode;
	int baud_rate;
	char *ebf_str;
	char *linux_str;
};

int gserm_get_mode_from_string(const char *str);

const struct gserm_mode_strmap_s gserm_get_mode_strmap(int gserm_mode);

/* Obtains GSERM SCRATCHX state */
gserm_state_lane_t gserm_get_state(int gserm, int lane);

/* Sets GSERM SCRATCHX state */
void gserm_set_state(int gserx, int lane, gserm_state_lane_t gserm_state);

#endif /* _QLM_H_ */
