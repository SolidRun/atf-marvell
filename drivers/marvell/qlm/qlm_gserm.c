/*
 * Copyright (C) 2020 Marvell International Ltd.
 *
 * SPDX-License-Identifier:     BSD-3-Clause
 * https://spdx.org/licenses
 */

#include <octeontx_common.h>
#include <octeontx_utils.h>
#include <qlm/qlm_cn10k.h>
#include <plat_cn10k_configuration.h>

/**
 * Get the SERDES state
 *
 * @param node   Node to query
 * @param qlm	Index into GSER* group
 * @param lane   Lane in GSER*
 *
 * @return State data
 */
gserm_state_lane_t gserm_get_state(int gserm, int lane)
{
	printf("%s: gserm %d lane %d\n", __func__,
				gserm, lane);
	gserm_state_lane_t state = {.u = CSR_READ(CAVM_GSERMX_SCRATCHX(gserm, lane))};
	return state;
}
