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

int rpm_flash_read_portm_boot_cfg(portm_boot_cfg_ctx_t *ctx, size_t portm_count)
{
	uint64_t ctx_size;

	if (!ctx || portm_count == 0 || portm_count > MAX_PORTM)
		return -1;

	ctx_size = portm_count * sizeof(*ctx);
	return spi_read_portm_boot_persistent_data((uintptr_t)ctx, &ctx_size);
}

int rpm_flash_update_portm_boot_cfg(portm_boot_cfg_ctx_t *ctx, size_t portm_count)
{
	int err, idx;
	uint64_t ctx_size;
	portm_boot_cfg_ctx_t bctx[MAX_PORTM];

	if (!ctx || portm_count == 0 || portm_count > MAX_PORTM)
		return -1;

	ctx_size = portm_count * sizeof(*ctx);

	err = spi_read_portm_boot_persistent_data((uintptr_t)bctx, &ctx_size);
	if (err < 0) {
		debug_rpm_flash("%s: Flash read failed\n", __func__);
		return -1;
	}

	for (idx = 0; idx < portm_count; idx++) {
		portm_boot_cfg_ctx_t *dst_ptr = &bctx[idx];
		portm_boot_cfg_ctx_t *src_ptr = &ctx[idx];

		if (src_ptr->s.status == 0x2)
			memcpy(dst_ptr, src_ptr, sizeof(*src_ptr));
	}

	for (idx = portm_count - 1; idx >= 0; idx--) {
		int i, num_lanes = 0;
		portm_boot_cfg_ctx_t *src_ptr = &bctx[idx];

		if (src_ptr->s.status != 0x2)
			continue;

		if (!cn10k_portm_mode_valid(idx, src_ptr->s.portm_mode) &&
					    src_ptr->s.portm_mode != PORTM_MODE_DISABLED) {
			src_ptr->s.status = 0x3;
			continue;
		}

		num_lanes = cn10k_portm_get_mode_desc_serdes_num(src_ptr->s.portm_mode);
		for (i = 1; i < num_lanes; i++) {
			portm_boot_cfg_ctx_t *ptr = &bctx[idx + i];

			ptr->s.status = 0x2;
			ptr->s.portm_idx = idx + i;
			ptr->s.portm_mode = PORTM_MODE_INACTIVE;
		}
	}

	err = spi_update_portm_boot_persistent_data((uintptr_t)bctx, ctx_size);
	if (err < 0) {
		debug_rpm_flash("%s: Flash update failed\n", __func__);
		return -1;
	}

	memcpy(ctx, bctx, ctx_size);
	return 0;
}

int rpm_flash_erase_portm_boot_cfg(void)
{
	uint64_t ctx_size = MAX_PORTM * sizeof(portm_boot_cfg_ctx_t);

	return spi_update_portm_boot_persistent_data((uintptr_t)NULL, ctx_size);
}

int rpm_flash_collective_update(uint64_t portm_mask)
{
	rpm_lmac_flash_ctx_t fctx[MAX_PORTM];
	rpm_lmac_flash_ctx_t *ptr;
	int err;
	portm_config_t *portm;
	uint64_t fctx_sz = sizeof(fctx);

	if (plat_octeontx_bcfg->ignore_eth_persist_data) {
		debug_rpm_flash("%s: ignoring eth persistent data update\n", __func__);
		return 0;
	}

	err = rpm_read_flash_lmac_params((uint8_t *)fctx, &fctx_sz);
	if (err < 0) {
		debug_rpm_flash("%s: Flash read failed\n", __func__);
		return -1;
	}

	debug_rpm_flash("%s:\n", __func__);

	for (int idx = 0; idx < MAX_PORTM && portm_mask; idx++) {
		if (portm_mask & (1 << idx)) {
			portm = &(plat_octeontx_bcfg->portm_cfg[idx]);
			ptr = &fctx[idx];

			ptr->s.status = 0x2;
			ptr->s.portm_idx = idx;
			ptr->s.portm_mode = portm->portm_mode;
			ptr->s.fec_invalid = 0;
			ptr->s.fec_type = portm->fec;

			debug_rpm_flash("\tPORTM%d flash status %d portm mode %d fec type %d\n",
					idx, ptr->s.status, ptr->s.portm_mode, ptr->s.fec_type);

			portm_mask &= ~(1 << idx);
		}
	}

	err = spi_update_ethernet_persistent_data((uintptr_t)fctx, sizeof(fctx));
	if (err < 0) {
		debug_rpm_flash("%s: Flash write failed\n", __func__);
		return -1;
	}

	return 0;
}
