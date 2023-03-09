/*
 * Copyright (c) 2021 Marvell.
 *
 * SPDX-License-Identifier:     BSD-3-Clause
 *
 * https://spdx.org/licenses
 *
 */

/* RNM driver for CN10K */

#include <arch.h>
#include <stdio.h>
#include <string.h>
#include <inttypes.h>
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
		      " (EBG_HEALTH=0x%" PRIx64 ")\n", ebg_health.u);
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
