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

#ifdef PLAT_cnf10kb
/* These functions are added to support retimer MUX config via SMC call (sysfs)
 * interface for VRAN NIC Thor board
 */

static int rpm_read_flash_retimer_params(uint8_t *buf, uint64_t *buflen)
{
	return spi_read_retimer_persistent_data((uintptr_t) buf, buflen);
}

#define MAX_RETIMERS 4
static int gserm_get_lane_for_retimer(int retimer_idx, int gserm_idx)
{
	int lane = -1;

	debug_rpm_flash("%s: retimer_idx %d gserm_idx %d\n", __func__, retimer_idx, gserm_idx);

	switch (retimer_idx) {
	case 0:
		if ((gserm_idx == 0) || (gserm_idx == 3))
			lane = 3;
	break;
	case 1:
		if ((gserm_idx == 0) || (gserm_idx == 3))
			lane = 2;
	break;
	case 2:
		if (gserm_idx == 0)
			lane = 1;
		else if (gserm_idx == 2)
			lane = 3;
	break;
	case 3:
		if (gserm_idx == 0)
			lane = 0;
		else if (gserm_idx == 2)
			lane = 2;
	break;
	default:
		ERROR("%s: Invalid retimer Id %d\n", __func__, retimer_idx);
		return -1;
	break;
	}

	return lane;
}
#endif

int rpm_update_flash_mode_param_by_portm_idx(int portm_idx, int portm_mode)
{
	return rpm_update_flash_lmac_params(portm_idx, PORTM_MODE,
		portm_mode);
}



#ifdef PLAT_cnf10kb
int rpm_update_flash_gserm_retimer_params(int retimer_idx, int gserm_idx)
{
	gserm_retimer_flash_ctx_t rctx[MAX_RETIMERS];
	gserm_retimer_flash_ctx_t *ptr;
	int err, lane = -1;
	uint64_t buf_size = sizeof(rctx);

	debug_rpm_flash("%s: retimer_idx %d gserm_idx %d\n", __func__, retimer_idx, gserm_idx);

	if (gserm_idx != -1) {
		/* Validate GSERM for the retimer index */
		lane = gserm_get_lane_for_retimer(retimer_idx, gserm_idx);
		if (lane == -1) {
			ERROR("%s: GSERM%d chosen is not valid for the retimer %d\n", __func__,
					gserm_idx, retimer_idx);
			return -1;
		}

		err = rpm_read_flash_retimer_params((uint8_t *)rctx, &buf_size);
		if (err < 0) {
			debug_rpm_flash("%s: GSERM%d Retimer %d : Read flash failed for retimer params\n", __func__,
				gserm_idx, retimer_idx);
			return -1;
		}

		ptr = &rctx[retimer_idx];
		/* As flash erase sets all bits to 1, use 0x2 to mark
		 * param as valid
		 */
		ptr->s.status = 0x2;
		ptr->s.gserm_idx = gserm_idx;

		err = spi_update_retimer_persistent_data((uintptr_t)rctx, sizeof(rctx));
		if (err < 0) {
			debug_rpm_flash("Write flash failed for Retimer params\n");
			return -1;
		}
	}

	return 0;
}

int rpm_update_flash_mode_param_for_retimer(int retimer_idx, int gserm_idx, int portm_mode)
{
	int portm_idx = 0, lane = -1, portm_first = 0;

	debug_rpm_flash("%s: retimer_idx %d gserm_idx %d portm_mode %d\n", __func__,
			retimer_idx, gserm_idx, portm_mode);

	if (portm_mode == -1)
		return 0;

	/* Get the lane info to obtain the PORTM index for the corresponding
	 * GSERM/lane to configure the PORTM mode
	 */
	portm_first = cn10k_portm_gserm_get_first_portm_num(gserm_idx);
	if (portm_first == -1)
		return -1;

	lane = gserm_get_lane_for_retimer(retimer_idx, gserm_idx);

	if (lane == -1) {
		ERROR("%s: Not valid GSERM%d chosen for the retimer %d\n", __func__,
				gserm_idx, retimer_idx);
		return -1;
	}

	portm_idx = portm_first + lane;

	debug_rpm_flash("%s: portm_first %d lane %d portm_idx %d\n", __func__,
			portm_first, lane, portm_idx);

	if (cn10k_portm_mode_valid(portm_idx, portm_mode) != 1) {
		ERROR("%s: PORTM%d: Invalid mode configuration: %d\n", __func__, portm_idx, portm_mode);
		return -1;
	}

	rpm_update_flash_mode_param_by_portm_idx(portm_idx, portm_mode);

	return 0;
}
#endif

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
