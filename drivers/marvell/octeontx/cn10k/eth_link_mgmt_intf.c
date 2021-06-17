/*
 * Copyright (C) 2021 Marvell International Ltd.
 *
 * SPDX-License-Identifier:     BSD-3-Clause
 * https://spdx.org/licenses
 **********************license end**************************************/

/* RPM<-> ECP interface for CN10KA */

#include <arch.h>
#include <stdio.h>
#include <debug.h>
#include <string.h>
#include <platform_def.h>
#include <timers.h>
#include <octeontx_common.h>
#include <drivers/delay_timer.h>
#include <plat_board_cfg.h>
#include <eth_intf.h>
#include <sh_fwdata.h>
#include <plat_portm_cfg.h>
#include <eth_link_mgmt_intf.h>

/* define DEBUG_ATF_ETH_LINK_MGMT to enable debug logs */
#undef DEBUG_ATF_ETH_LINK_MGMT
#if defined(MRVL_TF_LOG_MODULE)
#  undef MRVL_TF_LOG_MODULE
#  define MRVL_TF_LOG_MODULE  MRVL_TF_LOG_MODULE_ETH_LINK_MGMT
#  define debug_eth_link_intf(...) (mrvl_tf_log_modules & MRVL_TF_LOG_MODULE) ? \
			  tf_log(LOG_MARKER_NOTICE __VA_ARGS__) : (void)0
#elif DEBUG_ATF_ETH_LINK_MGMT
#define debug_eth_link_intf printf
#else
#define debug_eth_link_intf(...) ((void) (0))
#endif

ecp_link_shared_data_t *sh_data_global = (void *)ETH_LINK_SHMEM_BASE;

ecp_link_mgmt_sh_data_t *ecp_link_get_sh_mem_ptr(int portm)
{
	ecp_link_mgmt_sh_data_t *sh_data;

	sh_data = &(sh_data_global->link_mgmt_portm[portm]);
	debug_eth_link_intf("%s: portm %d sh_data %p\n", __func__, portm, sh_data);
	return sh_data;
}

void ecp_link_init_shmem(void)
{
	int rpm_idx, lmac_idx;
	rpm_lmac_config_t *lmac;
	rpm_config_t *rpm;
	ecp_link_mgmt_sh_data_t *sh_link_mgmt_data;

	debug_eth_link_intf("%s\n", __func__);
	debug_eth_link_intf("sizeof = %d\n", (int)sizeof(ecp_link_shared_data_t));

	/* Initialize shared memory for each LMAC */
	memset(sh_data_global, 0, sizeof(ecp_link_shared_data_t));
	sh_data_global->size = sizeof(ecp_link_shared_data_t);
	sh_data_global->intf_rev = 0xABCD0000;

	debug_eth_link_intf("%s: sh_data_global %p size %d intf_rev 0x%x\n", __func__,
			sh_data_global, sh_data_global->size, sh_data_global->intf_rev);

	for (rpm_idx = 0; rpm_idx < MAX_RPM; rpm_idx++) {
		rpm = &plat_octeontx_bcfg->rpm_cfg[rpm_idx];
		for (lmac_idx = 0; lmac_idx < MAX_LMAC_PER_RPM; lmac_idx++) {
			lmac = &rpm->lmac_cfg[lmac_idx];

			if (lmac->lmac_enable) {
				sh_link_mgmt_data = ecp_link_get_sh_mem_ptr(lmac->portm);
				if (sh_link_mgmt_data == NULL) {
					ERROR("%s: SM pointer is NULL\n", __func__);
					return;
				}

				sh_link_mgmt_data->portm = lmac->portm;
				sh_link_mgmt_data->rpm_id = rpm_idx;
				sh_link_mgmt_data->lmac_id = lmac_idx;
				sh_link_mgmt_data->portm_mode = lmac->portm_mode;
				debug_eth_link_intf("%s: rpm_id %d lmac_id %d\n", __func__,
						sh_link_mgmt_data->rpm_id,
						sh_link_mgmt_data->lmac_id);
			}
		}
	}
}

int ecp_send_link_req(int portm, int rpm_id, int lmac_id, int req_id)
{
	int retry_lock = 0;
	ecp_link_mgmt_sh_data_t *sh_data = ecp_link_get_sh_mem_ptr(portm);
	rpm_lmac_config_t *lmac;
	ecp_link_mgmt_sh_data_t *sh_link_mgmt_data;

	debug_eth_link_intf("%s: %d:%d portm %d\n", __func__, rpm_id, lmac_id, portm);

	if (sh_data == NULL) {
		ERROR("%s: SM pointer is NULL\n", __func__);
		return -1;
	}

	/* Get lmac index from PORTM to retrieve FEC and other properties */
	lmac = &plat_octeontx_bcfg->rpm_cfg[rpm_id].lmac_cfg[lmac_id];

	/* If the command is MODE_CHANGE, update the new PORTM mode to SM */
	if (req_id == ECP_LINK_REQ_MODE_CHANGE) {
		sh_link_mgmt_data = ecp_link_get_sh_mem_ptr(lmac->portm);
		if (sh_link_mgmt_data == NULL) {
			ERROR("%s: SM pointer is NULL\n", __func__);
			return -1;
		}
		sh_link_mgmt_data->portm_mode = lmac->portm_mode;
	}
retry_acquire_lock:
	if (sh_data->lock == LINK_OWN_NONE) {
		sh_data->lock = LINK_OWN_AP;

		/* If ack bit is clear, post the request
		 * ECP will clear the ack bit when the
		 * request is processed
		 */
		debug_eth_link_intf("%s: %d ack %d\n",
			__func__, portm, sh_data->ack);
		if (!sh_data->ack) {
			debug_eth_link_intf("%s: %d: sending req_id %d\n",
				__func__, portm, req_id);
			/* Reset the state always to NO_STATE so
			 * ECP can start AN
			 */
			if (req_id == ECP_LINK_REQ_BRINGUP)
				sh_data->link_rsp.link_state = ETH_LINK_NO_STATE;
			sh_data->link_req.req_id = req_id;
			sh_data->link_req.fec_type = lmac->fec;
			sh_data->ack = 1;
		} else {
			debug_eth_link_intf("%s: portm %d request in progress\n", __func__, portm);
			sh_data->lock = LINK_OWN_NONE;
			return -1;
		}
	} else {
		if (retry_lock++ < 5) {
			mdelay(1);
			goto retry_acquire_lock;
		}
		debug_eth_link_intf("%s %d lock %d not available for AP\n",
					 __func__,
					portm,
					sh_data->lock);
		return -1;
	}
	sh_data->lock = LINK_OWN_NONE;

	return 0;
}

unsigned int ecp_get_link_state(int portm, ecp_link_state_t *link_state)
{
	int retry_lock = 0;
	int state = 0;

	ecp_link_mgmt_sh_data_t *sh_data = ecp_link_get_sh_mem_ptr(portm);

	if (sh_data == NULL) {
		ERROR("%s: SM pointer is NULL\n", __func__);
		return -1;
	}
	debug_eth_link_intf("%s:%d\n", __func__, portm);

retry_acquire_lock:
	if (sh_data->lock == LINK_OWN_NONE) {
		sh_data->lock = LINK_OWN_AP;
		if (retry_lock++ < 5) {
			mdelay(1);
			goto retry_acquire_lock;
		}
		debug_eth_link_intf("%s %d lock %d not available for AP\n",
					 __func__,
					portm,
					sh_data->lock);
		return -1;
	}

	if (!sh_data->ack) {
		state = sh_data->link_rsp.link_state;
		link_state->s.link_up = sh_data->link_rsp.ecp_link_state.s.link_up;
		link_state->s.duplex = sh_data->link_rsp.ecp_link_state.s.duplex;
		link_state->s.speed = sh_data->link_rsp.ecp_link_state.s.speed;
		link_state->s.fec = sh_data->link_rsp.ecp_link_state.s.fec;
		link_state->s.error_type = sh_data->link_rsp.ecp_link_state.s.error_type;
		sh_data->lock = LINK_OWN_NONE;
		/* FIXME : update other parameters */
	} else {
		sh_data->lock = LINK_OWN_NONE;
		return ETH_LINK_NO_STATE;
	}
	debug_eth_link_intf("%s: portm %d state %d link_up %d speed %d fec %d\n", __func__, portm, state,
			link_state->s.link_up, link_state->s.speed,
				link_state->s.fec);

	return state;
}

unsigned int ecp_get_intf_rev(int portm)
{
	int retry_lock = 0;
	unsigned int ecp_rev = 0;
	ecp_link_mgmt_sh_data_t *sh_data = ecp_link_get_sh_mem_ptr(portm);

	if (sh_data == NULL) {
		ERROR("%s: SM pointer is NULL\n", __func__);
		return -1;
	}

	debug_eth_link_intf("%s: %d\n", __func__, portm);

retry_acquire_lock:
	if (sh_data->lock == LINK_OWN_NONE) {
		sh_data->lock = LINK_OWN_AP;
		if (retry_lock++ < 5) {
			mdelay(1);
			goto retry_acquire_lock;
		}
		debug_eth_link_intf("%s %d lock %d not available for AP\n",
					 __func__,
					portm,
					sh_data->lock);
		return -1;
	}

	ecp_rev = sh_data_global->intf_rev;
	sh_data->lock = LINK_OWN_NONE;
	return ecp_rev;
}

unsigned int ecp_update_phy_link_state(int portm, rpm_link_state_t *phy_link_state)
{
	int retry_lock = 0;
	ecp_link_mgmt_sh_data_t *sh_data = ecp_link_get_sh_mem_ptr(portm);

	if (sh_data == NULL) {
		ERROR("%s: SM pointer is NULL\n", __func__);
		return -1;
	}

	debug_eth_link_intf("%s: %d\n", __func__, portm);

retry_acquire_lock:
	if (sh_data->lock == LINK_OWN_NONE) {
		sh_data->lock = LINK_OWN_AP;
		if (retry_lock++ < 5) {
			mdelay(1);
			goto retry_acquire_lock;
		}
		debug_eth_link_intf("%s %d lock %d not available for AP\n",
					 __func__,
					portm,
					sh_data->lock);
		return -1;
	}
	sh_data->link_req.phy_present = 1;
	sh_data->link_req.phy_link_state.s.link_up = phy_link_state->s.link_up;
	sh_data->link_req.phy_link_state.s.duplex = phy_link_state->s.full_duplex;
	sh_data->link_req.phy_link_state.s.speed = phy_link_state->s.speed;

	sh_data->lock = LINK_OWN_NONE;

	return 0;
}

/**
 * Waits for ECP to clear command ack
 *
 * @param portm     PORTM to use
 * @return 0 on success, -1 on failure/timeout
 */
int ecp_wait_for_cmd_ack_to_clr(int portm)
{
	int retry_lock = 0;
	ecp_link_mgmt_sh_data_t *sh_data = ecp_link_get_sh_mem_ptr(portm);

	if (sh_data == NULL) {
		ERROR("%s: SM pointer is NULL\n", __func__);
		return -1;
	}
	debug_eth_link_intf("%s: %d\n", __func__, portm);

retry_ack_check:
	if (sh_data->ack) {
		if (retry_lock++ < 5) {
			mdelay(1);
			goto retry_ack_check;
		}
		debug_eth_link_intf("%s %d Waiting for ECP to clear command ack\n",
			       __func__, portm);
		return -1;
	}

	return 0;
}
