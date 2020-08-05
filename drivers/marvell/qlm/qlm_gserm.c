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
 * @param gserm	Index into GSER* group
 * @param lane   Lane in GSER*
 *
 * @return State data
 */
gserm_state_lane_t gserm_get_state(int gserm, int lane)
{
	gserm_state_lane_t state = {.u = CSR_READ(CAVM_GSERMX_SCRATCHX(gserm, lane))};
	return state;
}

/**
 * Set the SERDES state
 *
 * @param gserm	Index into GSER* group
 * @param lane   Lane in GSER*
 * @param gserm_state_lane_t state_data
 *
 * @return None
 */
void gserm_set_state(int gserm, int lane, gserm_state_lane_t state)
{
	CSR_WRITE(CAVM_GSERMX_SCRATCHX(gserm, lane), state.u);
}
