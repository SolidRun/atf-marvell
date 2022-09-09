/*
 * Copyright (c) 2021 Marvell.
 *
 * SPDX-License-Identifier:     BSD-3-Clause
 * https://spdx.org/licenses
 */

/* EDAC/RAS SMCs CN10K */

#include <arch.h>
#include <stdint.h>
#include <stdio.h>
#include <errno.h>
#include <string.h>
#include <stdbool.h>
#include <platform_def.h>
#include <debug.h>
#include <plat_ras.h>

int64_t plat_ras_smc_op(u_register_t x1, u_register_t x2,
			u_register_t x3, u_register_t x4)
{
	switch (x1) {
	case CN10K_EDAC_VERSION:
		return 0;
	default:
		return -EINVAL;
	}
}
