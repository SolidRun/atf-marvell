
/*
 * Copyright (c) 2020 Marvell.
 *
 * SPDX-License-Identifier:     BSD-3-Clause
 * https://spdx.org/licenses
 *
 * Redistribution and use in source and binary forms, with or without
 * modification, are permitted provided that the following conditions are met:
 *
 * 1. Redistributions of source code must retain the above copyright notice,
 * this list of conditions and the following disclaimer.
 *
 * 2. Redistributions in binary form must reproduce the above copyright notice,
 * this list of conditions and the following disclaimer in the documentation
 * and/or other materials provided with the distribution.
 *
 * 3. Neither the name of the copyright holder nor the names of its
 * contributors may be used to endorse or promote products derived from this
 * software without specific prior written permission.
 *
 * THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS "AS IS"
 * AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE
 * IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE
 * ARE DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT HOLDER OR CONTRIBUTORS BE
 * LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR
 * CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF
 * SUBSTITUTE GOODS OR SERVICES; LOSS OF USE, DATA, OR PROFITS; OR BUSINESS
 * INTERRUPTION) HOWEVER CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN
 * CONTRACT, STRICT LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE)
 * ARISING IN ANY WAY OUT OF THE USE OF THIS SOFTWARE, EVEN IF ADVISED OF THE
 * POSSIBILITY OF SUCH DAMAGE.
 *
 */

#include <octeontx_common.h>
#include <octeontx_utils.h>
#include <qlm_cn10k.h>
#include <plat_cn10k_configuration.h>

#include "cavm-csrs-gserm.h"
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
