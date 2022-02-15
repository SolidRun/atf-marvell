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
#include <cn10k/csr/cavm-csrs-rst.h>
#include <plat_scfg.h>
#include <rpm.h>
#include <spinlock.h>
#include <plat_mem_alloc.h>

/* define DEBUG_ATF_ETH_LINK_MGMT to enable debug logs */
#undef DEBUG_ATF_ETH_LINK_MGMT
#if defined(MRVL_TF_LOG_MODULE)
#  define debug_eth_link_intf(...) (mrvl_tf_log_modules & MRVL_TF_LOG_MODULE_ETH_LINK_MGMT) ? \
			  tf_log(LOG_MARKER_NOTICE __VA_ARGS__) : (void)0
#elif DEBUG_ATF_ETH_LINK_MGMT
#define debug_eth_link_intf printf
#else
#define debug_eth_link_intf(...) ((void) (0))
#endif

#if defined(MRVL_TF_LOG_MODULE)
#  define debug_ecp_sm_hist(...) (mrvl_tf_log_modules & MRVL_TF_LOG_MODULE_ECP_SM_HIST) ? \
			  tf_log(LOG_MARKER_NOTICE __VA_ARGS__) : (void)0
#else
#  define debug_ecp_sm_hist(...) ((void) (0))
#endif

ecp_link_shared_data_t *ecp_sh_data_global = (void *)ETH_LINK_SHMEM_BASE;
static spinlock_t ecp_print_buf_lock;

int is_ecpcore_running(void)
{
	uint64_t status = CSR_READ(CAVM_RST_COLD_DATAX(1));

	return !((status >> CAVM_RST_SOURCE_E_ECP_WDOG) & 1);
}

ecp_link_mgmt_sh_data_t *ecp_link_get_sh_mem_ptr(int portm_idx)
{
	ecp_link_mgmt_sh_data_t *sh_data;

	sh_data = &(ecp_sh_data_global->link_mgmt_portm[portm_idx]);
	if (!is_ecpcore_running())
		return NULL;

	debug_eth_link_intf("%s: portm_idx %d sh_data %p\n", __func__, portm_idx, sh_data);
	return sh_data;
}

portm_config_t *ecp_link_get_portm_sh_mem_ptr(int portm_idx)
{
	portm_config_t *sh_data;
	if (!is_ecpcore_running())
		return NULL;

	sh_data = &(ecp_sh_data_global->link_mgmt_portm[portm_idx].portm_cfg);
	debug_eth_link_intf("%s: portm_idx %d sh_data %p\n", __func__, portm_idx, sh_data);
	return sh_data;
}

/**
 * Waits for lock to be set to LINK_OWN_NONE
 *
 * @param portm_idx     PORTM to use
 * @param timeout_ms    Time to wait in ms for lock
 * @return 0 on success, -1 on failure/timeout
 */
int ecp_wait_for_lock(int portm_idx, int timeout_ms)
{
	ecp_link_mgmt_sh_data_t *sh_data = ecp_link_get_sh_mem_ptr(portm_idx);
	uint64_t init_time, timeout;
	int ret = -1;

	if (sh_data == NULL) {
		ERROR("%s: SM pointer is NULL\n", __func__);
		return -1;
	}
	debug_eth_link_intf("%s: PORTM%d\n", __func__, portm_idx);

	init_time = clock_get_count(GSER_CLOCK_TIME);
	timeout = init_time + timeout_ms *
		clock_get_rate(GSER_CLOCK_TIME)/1000;

	while (clock_get_count(GSER_CLOCK_TIME)
	       < timeout) {
		if (sh_data->lock == LINK_OWN_NONE) {
			ret = 0;
			break;
		}
		udelay(100);
	}

	if (ret == 0)
		debug_eth_link_intf("%s: PORTM%d Lock available, time: %lld ms\n",
				    __func__, portm_idx,
				    (clock_get_count(GSER_CLOCK_TIME) - init_time) *
				    1000 / clock_get_rate(GSER_CLOCK_TIME));
	else
		debug_eth_link_intf("%s: PORTM%d Lock not available\n",
				    __func__, portm_idx);

	return ret;
}

/**
 * Waits for ECP to clear command ack
 *
 * @param portm_idx     PORTM to use
 * @param timeout_ms    Time to wait in ms for lock
 * @return 0 on success, -1 on failure/timeout
 */
int ecp_wait_for_cmd_ack_to_clr(int portm_idx, int timeout_ms)
{
	ecp_link_mgmt_sh_data_t *sh_data = ecp_link_get_sh_mem_ptr(portm_idx);
	uint64_t init_time, timeout;
	int ret = -1;

	if (sh_data == NULL) {
		ERROR("%s: SM pointer is NULL\n", __func__);
		return -1;
	}
	debug_eth_link_intf("%s: PORTM%d\n", __func__, portm_idx);

	init_time = clock_get_count(GSER_CLOCK_TIME);
	timeout = init_time + timeout_ms *
		clock_get_rate(GSER_CLOCK_TIME)/1000;

	while (clock_get_count(GSER_CLOCK_TIME)
	       < timeout) {
		if (!sh_data->ack) {
			ret = 0;
			break;
		}
		udelay(100);
	}

	if (ret == 0)
		debug_eth_link_intf("%s: PORTM%d ACK cleared, time: %lld ms\n",
				    __func__, portm_idx,
				    (clock_get_count(GSER_CLOCK_TIME) - init_time) *
				    1000 / clock_get_rate(GSER_CLOCK_TIME));
	else
		debug_eth_link_intf("%s: PORTM%d ACK did not clear\n",
				    __func__, portm_idx);

	return ret;
}

void ecp_link_init_shmem(void)
{
	portm_config_t *portm, *sh_portm;
	ecp_link_mgmt_sh_data_t *sh_link_mgmt_data;

	debug_eth_link_intf("%s\n", __func__);
	debug_eth_link_intf("sizeof = %d\n", (int)sizeof(ecp_link_shared_data_t));

	/* Initialize shared memory for each LMAC */
	memset(ecp_sh_data_global, 0, sizeof(ecp_link_shared_data_t));
	ecp_sh_data_global->size = sizeof(ecp_link_shared_data_t);
	ecp_sh_data_global->debug_ena = rpm_debug_log_state();

	debug_eth_link_intf("%s: ecp_sh_data_global %p size %d intf_rev 0x%x\n", __func__,
			ecp_sh_data_global, ecp_sh_data_global->size, ecp_sh_data_global->intf_rev);

	for (int portm_idx = 0; portm_idx < plat_octeontx_scfg->portm_count;) {
		portm = &(plat_octeontx_bcfg->portm_cfg[portm_idx]);

		if (!portm->port_enable) {
			portm_idx++;
			continue;
		}

		sh_link_mgmt_data = ecp_link_get_sh_mem_ptr(portm_idx);
		if (sh_link_mgmt_data == NULL) {
			ERROR("%s: SM pointer is NULL\n", __func__);
			return;
		}

		sh_portm = ecp_link_get_portm_sh_mem_ptr(portm_idx);
		if (sh_portm == NULL) {
			ERROR("%s: SM pointer is NULL\n", __func__);
			return;
		}

		/* Copy Portm data to shared memory */
		sh_link_mgmt_data->portm_idx = portm_idx;
		sh_link_mgmt_data->lmac_id = portm->mac_lane;
		*sh_portm = *portm;
		sh_portm->ap_802_3_adv = portm->ap_802_3_adv;

		debug_eth_link_intf("%s: PORTM:%d mac_type:%d, mac_id:%d portm_mode %d\n", __func__,
				    portm_idx,
				    sh_portm->mac_type,
				    sh_portm->mac_num,
				    sh_portm->portm_mode);

		portm_idx += portm->portms_used;
	}

	/* Program interface rev last. */
	ecp_sh_data_global->intf_rev = 0xABCD0000;
}

int ecp_send_link_req(int portm_idx, int rpm_id, int lmac_id, int req_id, rpm_lmac_context_t *lmac_ctx)
{
	ecp_link_mgmt_sh_data_t *sh_data = ecp_link_get_sh_mem_ptr(portm_idx);
	portm_config_t *portm, *sh_portm;

	debug_eth_link_intf("%s: %d:%d portm_idx %d\n", __func__, rpm_id, lmac_id, portm_idx);

	if (sh_data == NULL) {
		ERROR("%s: SM pointer is NULL\n", __func__);
		return -1;
	}

	/* Get lmac index from PORTM to retrieve FEC and other properties */
	portm = &(plat_octeontx_bcfg->portm_cfg[portm_idx]);

	/* Update the new PORTM mode to SM for certain requests */
	if ((req_id == ECP_LINK_REQ_MODE_CHANGE)
	    || (req_id == ECP_LINK_REQ_FEC_CHANGE)) {
		sh_portm = ecp_link_get_portm_sh_mem_ptr(portm_idx);

		if (sh_portm == NULL) {
			ERROR("%s: SM pointer is NULL\n", __func__);
			return -1;
		}
		/* Update Shared Portm struct to match ATF portm struct */
		*sh_portm = *portm;
		sh_portm->ap_802_3_adv = portm->ap_802_3_adv;
	} else if ((req_id == ECP_LINK_REQ_LOOPBACK_STATE_CHANGE)
		   || (req_id == ECP_LINK_REQ_PRBS_STATE_CHANGE)) {
		sh_portm = ecp_link_get_portm_sh_mem_ptr(portm_idx);

		if (sh_portm == NULL) {
			ERROR("%s: SM pointer is NULL\n", __func__);
			return -1;
		}
		/* Update Shared Portm struct to match ATF portm struct */
		*sh_portm = *portm;
		/* AN/LT does not need to be updated for PRBS/Loopback */
	}

	if (ecp_wait_for_lock(portm_idx, ECP_LINK_LOCK_WAIT_MS)) {
		debug_eth_link_intf("%s PORTM%d lock %d not available for AP\n",
				    __func__, portm_idx,
				    sh_data->lock);
		return -1;
	}

	sh_data->lock = LINK_OWN_AP;
	/* If ack bit is clear, post the request
	 * ECP will clear the ack bit when the
	 * request is processed
	 */
	if (!sh_data->ack) {
		debug_eth_link_intf("%s: PORTM%d: sending req_id %d\n",
				    __func__, portm_idx, req_id);
		sh_data->link_req.req_id = req_id;
		sh_data->portm_cfg.fec = portm->fec;
		sh_data->ack = 1;
		sh_data->lock = LINK_OWN_NONE;
	} else {
		debug_eth_link_intf("%s: PORTM%d request in progress\n", __func__, portm_idx);
		sh_data->lock = LINK_OWN_NONE;
		return -1;
	}

	/* ECP will clear ACK prior to releasing
	 * lock if a valid request is sent.
	 * Wait for request to be processed.
	 */
	if (ecp_wait_for_cmd_ack_to_clr(portm_idx, ECP_LINK_CMD_ACK_WAIT_MS)) {
		debug_eth_link_intf("%s PORTM%d ECP did not clear ACK\n",
				    __func__, portm_idx);
		return -1;
	}

	return 0;
}

static void _dump_state_history(ecp_state_log_t *ecp_logs, int count,
				int portm_idx, const char *msg)
{
	int idx;

	debug_ecp_sm_hist("[PORTM%d]: Last ECP state transitions:\n\t(Reason: %s)\n", portm_idx, msg);

	for (idx = 0; idx < count; idx++) {
		ecp_state_log_t *log_entry = &ecp_logs[idx];

		debug_ecp_sm_hist("\n[%llu] ECP State = %d\n",
			log_entry->timestamp, log_entry->link_rsp.link_state);

		debug_ecp_sm_hist("\tlink_req=\n");
		debug_ecp_sm_hist("\t\treq_id=%d, sfp_slot_present=%d, sfp_mod_stat=%d, phy_present=%d\n",
			log_entry->link_req.req_id,
			log_entry->link_req.sfp_slot_present,
			log_entry->link_req.sfp_mod_stat,
			log_entry->link_req.phy_present);

		debug_ecp_sm_hist("\tlink_rsp=\n");
		debug_ecp_sm_hist("\t\treq_stat=%d, link_state=%d, sig_detect=%d, ecp_link_state=0x%llx\n",
			log_entry->link_rsp.req_stat,
			log_entry->link_rsp.link_state,
			log_entry->link_rsp.sig_detect,
			log_entry->link_rsp.ecp_link_state.link_stat);
		debug_ecp_sm_hist("\t\tecp_link_dbg=\n");
		debug_ecp_sm_hist("\t\t\tfail_mode=%u, train_fail_cnt=%u, lnk_fail_count=%u\n",
			log_entry->link_rsp.ecp_link_dbg.fail_mode,
			log_entry->link_rsp.ecp_link_dbg.train_fail_cnt,
			log_entry->link_rsp.ecp_link_dbg.lnk_fail_count);
		debug_ecp_sm_hist("\t\t\tfail_type=%u, err_cnt=%u, train_time=%u, lnk_time=%u\n",
			log_entry->link_rsp.ecp_link_dbg.fail_type,
			log_entry->link_rsp.ecp_link_dbg.err_cnt,
			log_entry->link_rsp.ecp_link_dbg.train_time,
			log_entry->link_rsp.ecp_link_dbg.lnk_time);
		debug_ecp_sm_hist("-----------------------------------\n");
	}
}

int ecp_dump_state_history(int portm_idx, const char *msg)
{
	uint64_t timeout;
	uint32_t *tail;
	uint32_t head;
	int idx, count;
	ecp_link_mgmt_sh_data_t *sh_data;
	ecp_state_log_t *ecp_print_buf;

#if defined(MRVL_TF_LOG_MODULE)
	/* Check if feature is enabled, if not, there is no point to proceed */
	if (!(mrvl_tf_log_modules & MRVL_TF_LOG_MODULE_ECP_SM_HIST))
		return 0;
#else
	return 0;
#endif

	sh_data = ecp_link_get_sh_mem_ptr(portm_idx);

	if (sh_data == NULL) {
		ERROR("%s: SM pointer is NULL\n", __func__);
		return -1;
	}

	timeout = clock_get_count(GSER_CLOCK_TIME) +
		ECP_HIST_TOUT_MS * clock_get_rate(GSER_CLOCK_TIME) / 1000;

	while (clock_get_count(GSER_CLOCK_TIME) < timeout) {
		if (sh_data->history.sl_owner == LINK_OWN_NONE) {
			sh_data->history.sl_owner = LINK_OWN_AP;
			break;
		}
		udelay(100);
	}

	if (sh_data->history.sl_owner != LINK_OWN_AP) {
		debug_ecp_sm_hist("%s PORTM%d could not aquire ECP history lock\n",
				    __func__, portm_idx);
		return -1;
	}

	tail = &sh_data->history.sl_tail;
	head = sh_data->history.sl_head;

	count = (*tail <= head) ? head - *tail : ECP_STS_ENTRIES_MAX - (*tail - head);
	if (count <= 0) {
		sh_data->history.sl_owner = LINK_OWN_NONE;
		return 0;
	}

	/*
	 * Need to acquire lock before calling dynamic allocation
	 * as octeontx_malloc is not SMP safe.
	 */
	spin_lock(&ecp_print_buf_lock);
	ecp_print_buf = (ecp_state_log_t *)octeontx_malloc(
			count * sizeof(ecp_state_log_t));
	spin_unlock(&ecp_print_buf_lock);

	if (!ecp_print_buf) {
		ERROR("%s: Could not allocate memory for dumping ECP logs\n",
			__func__);
		sh_data->history.sl_owner = LINK_OWN_NONE;
		return -1;
	}

	idx = 0;
	while (idx < count) {
		ecp_state_log_t *in_entry = &sh_data->history.shared_logs[*tail];
		ecp_state_log_t *out_entry = &ecp_print_buf[idx++];

		memcpy(out_entry, in_entry, sizeof(*in_entry));
		*tail = (*tail + 1) & (ECP_STS_ENTRIES_MAX - 1);
	}

	sh_data->history.sl_owner = LINK_OWN_NONE;
	_dump_state_history(ecp_print_buf, count, portm_idx, msg);

	spin_lock(&ecp_print_buf_lock);
	octeontx_free(ecp_print_buf);
	spin_unlock(&ecp_print_buf_lock);

	return 0;
}

unsigned int ecp_get_link_state(int portm_idx, ecp_link_state_t *link_state)
{
	int state = 0;

	ecp_link_mgmt_sh_data_t *sh_data = ecp_link_get_sh_mem_ptr(portm_idx);

	if (sh_data == NULL) {
		ERROR("%s: SM pointer is NULL\n", __func__);
		return -1;
	}
	debug_eth_link_intf("%s:PORTM%d\n", __func__, portm_idx);

	if (ecp_wait_for_lock(portm_idx, ECP_LINK_LOCK_WAIT_MS)) {
		debug_eth_link_intf("%s PORTM%d lock %d not available for AP\n",
				    __func__, portm_idx,
				    sh_data->lock);
		return -1;
	}

	sh_data->lock = LINK_OWN_AP;

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

	debug_eth_link_intf("%s: portm_idx %d state %d link_up %d speed %d fec %d error type %d\n", __func__, portm_idx, state,
			link_state->s.link_up, link_state->s.speed,
				link_state->s.fec,
				link_state->s.error_type);

	return state;
}

unsigned int ecp_get_intf_rev(int portm_idx)
{
	unsigned int ecp_rev = 0;
	ecp_link_mgmt_sh_data_t *sh_data = ecp_link_get_sh_mem_ptr(portm_idx);

	if (sh_data == NULL) {
		ERROR("%s: SM pointer is NULL\n", __func__);
		return -1;
	}

	debug_eth_link_intf("%s: %d\n", __func__, portm_idx);

	if (ecp_wait_for_lock(portm_idx, ECP_LINK_LOCK_WAIT_MS)) {
		debug_eth_link_intf("%s PORTM%d lock %d not available for AP\n",
				    __func__, portm_idx,
				    sh_data->lock);
		return -1;
	} else
		sh_data->lock = LINK_OWN_AP;

	ecp_rev = ecp_sh_data_global->intf_rev;
	sh_data->lock = LINK_OWN_NONE;
	return ecp_rev;
}

unsigned int ecp_update_phy_link_state(int portm_idx, rpm_link_state_t *phy_link_state)
{
	ecp_link_mgmt_sh_data_t *sh_data = ecp_link_get_sh_mem_ptr(portm_idx);

	if (sh_data == NULL) {
		ERROR("%s: SM pointer is NULL\n", __func__);
		return -1;
	}

	debug_eth_link_intf("%s: %d\n", __func__, portm_idx);

	if (ecp_wait_for_lock(portm_idx, ECP_LINK_LOCK_WAIT_MS)) {
		debug_eth_link_intf("%s PORTM%d lock %d not available for AP\n",
				    __func__, portm_idx,
				    sh_data->lock);
		return -1;
	} else
		sh_data->lock = LINK_OWN_AP;

	sh_data->link_req.phy_present = 1;
	sh_data->link_req.phy_link_state.s.link_up = phy_link_state->s.link_up;
	sh_data->link_req.phy_link_state.s.duplex = phy_link_state->s.full_duplex;
	sh_data->link_req.phy_link_state.s.speed = phy_link_state->s.speed;

	sh_data->lock = LINK_OWN_NONE;

	return 0;
}

unsigned int ecp_update_sfp_mod_state(int portm_idx, int mod_stat)
{
	ecp_link_mgmt_sh_data_t *sh_data = ecp_link_get_sh_mem_ptr(portm_idx);

	debug_eth_link_intf("%s: %d\n", __func__, portm_idx);

	if (sh_data == NULL) {
		ERROR("%s: SM pointer is NULL\n", __func__);
		return -1;
	}

	if (ecp_wait_for_lock(portm_idx, ECP_LINK_LOCK_WAIT_MS)) {
		debug_eth_link_intf("%s PORTM%d lock %d not available for AP\n",
				    __func__, portm_idx,
				    sh_data->lock);
		return -1;
	} else
		sh_data->lock = LINK_OWN_AP;

	/* If SFP is enabled, update the SFP status in SM */
	sh_data->link_req.sfp_slot_present = 1;
	sh_data->link_req.sfp_mod_stat = mod_stat;
	debug_eth_link_intf("%s: portm_idx %d sfp status %d\n", __func__, portm_idx,
				sh_data->link_req.sfp_mod_stat);

	sh_data->lock = LINK_OWN_NONE;

	return 0;
}
