/*
 * Copyright (C) 2020 Marvell International Ltd.
 *
 * SPDX-License-Identifier:     BSD-3-Clause
 * https://spdx.org/licenses
 */

#ifndef _QLM_H_
#define _QLM_H_

#include <cassert.h>

typedef enum {
	GSERM_MODE_DISABLED = 0,

	GSERM_MODE_XFI,
	GSERM_MODE_SFI,

	GSERM_MODE_25GAUI_C2C,
	GSERM_MODE_25GAUI_C2M,

	GSERM_MODE_LAST
} gserm_modes_t;

typedef union {
	uint64_t u;
	struct {
		uint64_t baud_mhz : 16;
		uint64_t mode     :  8;
		uint64_t ref_clk  :  4;
		uint64_t flags    :  8;
		uint64_t reserved : 28;
	} s;
} gserm_state_lane_t;

/* QLM APIs */

static inline gserm_state_lane_t qlm_build_state(gserm_modes_t mode, int baud_mhz,
	uint8_t flags)
{
	gserm_state_lane_t state;

	state.u = 0;
	state.s.mode = mode;
	state.s.baud_mhz = baud_mhz;
	state.s.flags = flags;
	return state;
}

struct gserm_mode_strmap_s {
	int mode;
	int baud_rate;
	char *ebf_str;
	char *linux_str;
};

const struct gserm_mode_strmap_s gserm_get_mode_strmap(int gserm_mode);

/* Obtains GSERM SCRATCHX state */
gserm_state_lane_t gserm_get_state(int gserm, int lane);
#endif /* _QLM_H_ */
