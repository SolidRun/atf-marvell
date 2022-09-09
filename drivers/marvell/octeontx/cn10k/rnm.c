/*
 * Copyright (c) 2021 Marvell.
 *
 * SPDX-License-Identifier:     BSD-3-Clause
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

/* RNM driver for CN10K */

#include <arch.h>
#include <stdio.h>
#include <string.h>
#include <debug.h>
#include <drivers/delay_timer.h>
#include <platform_def.h>
#include <platform_dt.h>
#include <octeontx_common.h>
#include <plat_board_cfg.h>
#include <plat_portm_cfg.h>
#include <octeontx_utils.h>

#include <rnm.h>
#include "cavm-csrs-rnm.h"

/* define DEBUG_RNM to enable debug logs */
#undef DEBUG_RNM
#ifdef DEBUG_RNM
#define debug_rnm printf
#else
#define debug_rnm(...)  ((void) (0))
#endif

int cn10k_rng_reset_health(void)
{
	int timeout = 100;
	union cavm_rnm_pf_ebg_health ebg_health;
	union cavm_rnm_ctl_status ctl_status;

	debug_rnm("cn10k_rng: Resetting from health state\n");

	/*
	 * (1) Toggle RNM_EBG_CTL[RNG_RSTN] to clear health test
	 * errors from the EBG.
	 */
	CSR_MODIFY(c, CAVM_RNM_EBG_CTL, c.s.rng_rstn = 0);
	mdelay(1);
	CSR_MODIFY(c, CAVM_RNM_EBG_CTL, c.s.rng_rstn = 1);

	/*
	 * (2) Monitor RNM_PF_EBG_HEALTH/RNM_VF_EBG_HEALTH[ST_DONE] for
	 * startup test completion. A startup test error in RNM_PF_EBG_HEALTH/
	 * RNM_VF_EBG_HEALTH[ST_ERR] indicates an entropy failure.
	 */
	do {
		ebg_health.u = CSR_READ(CAVM_RNM_PF_EBG_HEALTH);
		mdelay(1);
	} while (!ebg_health.s.st_done && timeout--);

	if (ebg_health.s.st_err) {
		ERROR("cn10k_rng: Entropy failure occurred during startup"
		      " (EBG_HEALTH=0x%llx)\n", ebg_health.u);
		return -1;
	}

	if (timeout == 0) {
		ERROR("cn10k_rng: Timed out waiting for "
		      "RNM_PF_EBG_HEALTH[ST_DONE]=1\n");
		return -1;
	}

	/*
	 * (3) Set RNM_CTL_STATUS[EBG_CTL_LOCK] and RNM_CTL_STATUS[EBG_POLL_EN]
	 * to resume normal entropy generation and consumption by RNM.
	 */
	ctl_status.u = CSR_READ(CAVM_RNM_CTL_STATUS);
	ctl_status.s.ebg_ctl_lock = 1;
	ctl_status.s.ebg_poll_en = 1;
	CSR_WRITE(CAVM_RNM_CTL_STATUS, ctl_status.u);

	debug_rnm("cn10k_rng: Reset from health done.\n");

	return 0;
}
