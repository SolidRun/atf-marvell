/*
 * Copyright (c) 2021 Marvell.
 *
 * SPDX-License-Identifier:     BSD-3-Clause
 * https://spdx.org/licenses
 */

/* RPM Flash helpers for CN10K */

#include <arch.h>
#include <stdio.h>
#include <string.h>
#include <libfdt.h>
#include <debug.h>
#include <spi.h>
#include <drivers/delay_timer.h>
#include <platform_def.h>
#include <platform_dt.h>
#include <octeontx_common.h>
#include <plat_board_cfg.h>
#include <rpm.h>
#include <octeontx_utils.h>
#include <spi_ops.h>

/* define DEBUG_ATF_RPM_FLASH to enable debug logs */
#undef DEBUG_ATF_RPM_FLASH

#ifdef DEBUG_ATF_RPM_FLASH
#define debug_rpm_flash printf
#else
#define debug_rpm_flash(...) ((void) (0))
#endif

enum cmd_param {
	IGNORE = 0,
	PORTM_MODE,
	FEC,
};

static int rpm_read_flash_lmac_params(uint8_t *buf, uint64_t *buflen)
{
	return spi_read_ethernet_persistent_data((uintptr_t) buf, buflen);
}

static int rpm_update_flash_lmac_params(int portm_idx, int cmd,
					int arg)
{
	rpm_lmac_flash_ctx_t fctx[MAX_PORTM];
	rpm_lmac_flash_ctx_t *ptr;
	int err;
	uint64_t buf_size = sizeof(fctx);
	portm_config_t *portm;

	portm = &(plat_octeontx_bcfg->portm_cfg[portm_idx]);

	err = rpm_read_flash_lmac_params((uint8_t *)fctx, &buf_size);
	if (err < 0) {
		debug_rpm_flash("%s: PORTM%d Read flash failed for lmac params\n", __func__,
				portm_idx);
		return -1;
	}
	ptr = &fctx[portm_idx];
	/* As flash erase sets all bits to 1, use 0x2 to mark
	 * param as valid, using 0 makes lmac mode read success for
	 * PORTM0 if previous status of flash has all 0's. To avoid
	 * such corner cases, change name from invalid to status with
	 * size increase 1-bit to 2-bit and use only 0x2 as valid and
	 * others as invalid.
	 */
	ptr->s.status = 0x2;
	ptr->s.portm_idx = portm_idx;
	if (cmd == FEC) {
		ptr->s.fec_type = arg & 0x3;
		/* As flash erase sets all bits to 1, use 0 to mark
		 * param fec_invalid as valid.
		 */
		ptr->s.fec_invalid = 0;
		ptr->s.portm_mode = portm->portm_mode;
	}
	if (cmd == PORTM_MODE) {
		ptr->s.portm_mode = arg;
		ptr->s.fec_invalid = 0;
		/* FIXME for line FEC when support is available */
		ptr->s.fec_type = portm->fec;
	}

	debug_rpm_flash("%s PORTM%d flash status %d portm %d portm mode %x\n",
			__func__, portm_idx, ptr->s.status, ptr->s.portm_idx,
			ptr->s.portm_mode);
	debug_rpm_flash("%s PORTM%d fec invalid %d type %x\n",
			__func__, portm_idx, ptr->s.fec_invalid, ptr->s.fec_type);

	err = spi_update_ethernet_persistent_data((uintptr_t)fctx, sizeof(fctx));
	if (err < 0) {
		debug_rpm_flash("Write flash failed for PORTM params\n");
		return -1;
	}

	return 0;
}

int rpm_update_flash_mode_param_by_portm_idx(int portm_idx, int portm_mode)
{
	return rpm_update_flash_lmac_params(portm_idx, PORTM_MODE,
		portm_mode);
}

int rpm_update_flash_mode_param(int rpm_id, int lmac_id, int portm_mode)
{
	rpm_lmac_config_t *lmac;
	int portm_idx;

	lmac = &plat_octeontx_bcfg->rpm_cfg[rpm_id].lmac_cfg[lmac_id];
	portm_idx = lmac->portm_idx;

	return rpm_update_flash_lmac_params(portm_idx, PORTM_MODE,
					    portm_mode);
}

int rpm_update_flash_fec_param(int rpm_id, int lmac_id, int fec)
{
	rpm_lmac_config_t *lmac;
	int portm_idx;

	lmac = &plat_octeontx_bcfg->rpm_cfg[rpm_id].lmac_cfg[lmac_id];
	portm_idx = lmac->portm_idx;

	return rpm_update_flash_lmac_params(portm_idx, FEC, fec);
}


