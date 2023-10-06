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
#include <fdtebf_helper.h>

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
	if (plat_octeontx_bcfg->ignore_eth_persist_data) {
		debug_rpm_flash("%s: PORTM%d ignoring persistent data update\n",
				__func__, portm_idx);
		return 0;
	}

	return rpm_update_flash_lmac_params(portm_idx, PORTM_MODE,
		portm_mode);
}

#ifdef PLAT_cnf10kb
/* These functions are added to support retimer MUX config via SMC call (sysfs)
 * interface for VRAN NIC Thor board
 */

#define MAX_RETIMERS 4
static inline int _retimer_get_gser_lane(const void *fdt, int retimer_idx, int gserm)
{
	int lane = retimer_get_gserm_muxed_lane(fdt, retimer_idx, gserm);

	if (lane == -1) {
		ERROR("GSERM%d is not valid for the retimer %d\n",
				gserm, retimer_idx);
		return -1;
	}

	if (lane == -2) {
		ERROR("MUX%d: No valid MUX Mapping found in the Device Tree\n",
				retimer_idx);

		return -1;
	}

	return lane;
}

int rpm_update_flash_retimer_params(struct retimer_mux_cfg *mux_cfgs, int num_cfgs)
{
	gserm_retimer_flash_ctx_t rctx[MAX_RETIMERS];
	uint64_t rbuf_size = sizeof(rctx);
	rpm_lmac_flash_ctx_t fctx[MAX_PORTM];
	uint64_t fbuf_size = sizeof(fctx);
	int err, rtmr_idx;
	const void *fdt = fdt_ptr;
	int lanes[MAX_RETIMERS];

	for (rtmr_idx = 0; rtmr_idx < num_cfgs; rtmr_idx++) {
		struct retimer_mux_cfg *rtmr_cfg = &mux_cfgs[rtmr_idx];

		if (!rtmr_cfg->gserm_updated && !rtmr_cfg->mode_updated)
			continue;

		if (rtmr_cfg->gserm_updated) {
			int lane = _retimer_get_gser_lane(fdt, rtmr_idx, rtmr_cfg->gserm);

			if (lane != -1)
				lanes[rtmr_idx] = lane;
			else
				goto error;
		}

		if (rtmr_cfg->mode_updated) {
			int portm_first, portm, portm_mode, serdes_lanes;

			if (!rtmr_cfg->gserm_updated) {
				ERROR("Retimer %d: requested mode update w/o providing gserm\n", rtmr_idx);
				goto error;
			}

			portm_first = cn10k_portm_gserm_get_first_portm_num(rtmr_cfg->gserm);
			portm = portm_first + lanes[rtmr_idx];
			portm_mode = rtmr_cfg->mode;

			if (cn10k_portm_mode_valid(portm, portm_mode) != 1) {
				ERROR("%s: mode %d is not valid for the PORTM%d\n",
					__func__, portm_mode, portm);
				goto error;
			}

			serdes_lanes = cn10k_portm_get_mode_desc_serdes_num(portm_mode);
			switch (serdes_lanes) {
			case 2:
			{
				struct retimer_mux_cfg *ptr_adj_cfg = &mux_cfgs[rtmr_idx ^ 1];

				if (!ptr_adj_cfg->gserm_updated || ptr_adj_cfg->gserm != rtmr_cfg->gserm) {
					ERROR("%s: MUX%d: multi-lane mode requires same GSERM for the adjacent MUX\n",
						__func__, rtmr_idx);
					goto error;
				}

				if (ptr_adj_cfg->mode_updated) {
					ERROR("%s: MUX%d: conflicting mode settings on the adjacent MUX\n",
						__func__, rtmr_idx);
					goto error;
				}
			} break;
			case 1:
				break;
			default:
				goto error;
			}
		}
	}

	err = spi_read_retimer_persistent_data((uintptr_t)rctx, &rbuf_size);
	if (err < 0) {
		ERROR("%s: Read flash failed for retimer params\n", __func__);
		return -1;
	}

	err = spi_read_ethernet_persistent_data((uintptr_t)fctx, &fbuf_size);
	if (err < 0) {
		ERROR("%s: Read flash failed for lmac params\n", __func__);
		return -1;
	}

	for (rtmr_idx = 0; rtmr_idx < num_cfgs; rtmr_idx++) {
		struct retimer_mux_cfg *rtmr_cfg = &mux_cfgs[rtmr_idx];
		gserm_retimer_flash_ctx_t *ptr_flash;

		if (!rtmr_cfg->gserm_updated)
			continue;

		ptr_flash = &rctx[rtmr_idx];
		/* As flash erase sets all bits to 1, use 0x2 to mark
		 * param as valid
		 */
		ptr_flash->s.status = 0x2;
		ptr_flash->s.gserm_idx = rtmr_cfg->gserm;
	}

	for (rtmr_idx = 0; rtmr_idx < num_cfgs; rtmr_idx++) {
		struct retimer_mux_cfg *rtmr_cfg = &mux_cfgs[rtmr_idx];
		rpm_lmac_flash_ctx_t *ptr_flash;
		int first_portm, portm, adj_portm;
		int first_portm_mode, portm_mode, adj_portm_mode;
		int portm_lanes_cnt;

		if (!rtmr_cfg->mode_updated)
			continue;

		first_portm = cn10k_portm_gserm_get_first_portm_num(rtmr_cfg->gserm);
		portm = first_portm + lanes[rtmr_idx];
		adj_portm = portm & ~(0x1);

		ptr_flash = &fctx[portm];
		first_portm_mode = plat_octeontx_bcfg->portm_cfg[first_portm].portm_mode;
		portm_mode = plat_octeontx_bcfg->portm_cfg[portm].portm_mode;
		portm_lanes_cnt = cn10k_portm_get_mode_desc_serdes_num(portm_mode);
		adj_portm_mode = plat_octeontx_bcfg->portm_cfg[adj_portm].portm_mode;

		if (first_portm != portm && cn10k_portm_get_mode_desc_serdes_num(first_portm_mode) == 4)
			portm_mode = PORTM_MODE_INACTIVE;

		if (adj_portm != portm && cn10k_portm_get_mode_desc_serdes_num(adj_portm_mode) == 2)
			portm_mode = PORTM_MODE_INACTIVE;

		ptr_flash->s.portm_mode = portm_mode;

		if (portm_lanes_cnt == 1)
			continue;

		for (int i = 1; i < portm_lanes_cnt; i++) {
			ptr_flash = &fctx[portm + i];
			ptr_flash->s.portm_mode = PORTM_MODE_INACTIVE;
		}
	}

	for (int idx = 0; idx < num_cfgs; idx++) {
		int indexes[] = {1, 0, 3, 2};
		struct retimer_mux_cfg *rtmr_cfg;
		rpm_lmac_flash_ctx_t *ptr_flash;
		int portm, flashed_portm_mode, req_lane_cnt, cur_lane_cnt;

		rtmr_idx = indexes[idx];
		rtmr_cfg = &mux_cfgs[rtmr_idx];

		if (!rtmr_cfg->mode_updated)
			continue;

		portm = cn10k_portm_gserm_get_first_portm_num(rtmr_cfg->gserm) + lanes[rtmr_idx];
		ptr_flash = &fctx[portm];

		flashed_portm_mode = ptr_flash->s.portm_mode;
		req_lane_cnt = cn10k_portm_get_mode_desc_serdes_num(rtmr_cfg->mode);
		cur_lane_cnt = cn10k_portm_get_mode_desc_serdes_num(flashed_portm_mode);

		if (flashed_portm_mode == PORTM_MODE_INACTIVE) {
			ERROR("%s: PORTM%d already used by another port\n", __func__, portm);
			goto error;
		}

		ptr_flash->s.status = 0x2;
		ptr_flash->s.portm_idx = portm;
		ptr_flash->s.portm_mode = rtmr_cfg->mode;

		/*
		 * In case of multi-lane mark other lanes as used (INACTIVE)
		 */
		for (int i = 1; i < req_lane_cnt; i++) {
			ptr_flash = &fctx[portm + i];

			ptr_flash->s.status = 0x2;
			ptr_flash->s.portm_idx = portm + i;
			ptr_flash->s.portm_mode = PORTM_MODE_INACTIVE;
		}

		/*
		 * If new mode has less lanes mark unused as DISABLED
		 */
		if (cur_lane_cnt != -1 && cur_lane_cnt > req_lane_cnt) {
			int lanes_to_disable = cur_lane_cnt - req_lane_cnt;

			for (int i = 0; i < lanes_to_disable; i++) {
				ptr_flash = &fctx[portm + req_lane_cnt + i];
				ptr_flash->s.status = 0x2;
				ptr_flash->s.portm_mode = PORTM_MODE_DISABLED;
			}
		}
	}

	err = spi_update_retimer_persistent_data((uintptr_t)rctx, sizeof(rctx));
	if (err < 0) {
		ERROR("%s: Write flash failed for retimer params\n", __func__);
		return -1;
	}

	err = spi_update_ethernet_persistent_data((uintptr_t)fctx, sizeof(fctx));
	if (err < 0) {
		ERROR("%s: Write flash failed for lmac params\n", __func__);
		return -1;
	}

	return 0;
error:
	ERROR("%s: invalid configuration requested\n", __func__);
	return -1;
}
#endif

int rpm_update_flash_mode_param(int rpm_id, int lmac_id, int portm_mode)
{
	rpm_lmac_config_t *lmac;
	int portm_idx;

	if (plat_octeontx_bcfg->ignore_eth_persist_data) {
		debug_rpm_flash("%s: RPM%d.LMAC%d ignoring persistent data update\n",
				__func__, rpm_id, lmac_id);
		return 0;
	}

	lmac = &plat_octeontx_bcfg->rpm_cfg[rpm_id].lmac_cfg[lmac_id];
	portm_idx = lmac->portm_idx;

	return rpm_update_flash_lmac_params(portm_idx, PORTM_MODE,
					    portm_mode);
}

int rpm_update_flash_fec_param(int rpm_id, int lmac_id, int fec)
{
	rpm_lmac_config_t *lmac;
	int portm_idx;

	if (plat_octeontx_bcfg->ignore_eth_persist_data) {
		debug_rpm_flash("%s: RPM%d.LMAC%d ignoring persistent data update\n",
				__func__, rpm_id, lmac_id);
		return 0;
	}

	lmac = &plat_octeontx_bcfg->rpm_cfg[rpm_id].lmac_cfg[lmac_id];
	portm_idx = lmac->portm_idx;

	return rpm_update_flash_lmac_params(portm_idx, FEC, fec);
}
