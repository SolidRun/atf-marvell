/***********************license start***********************************
 * Copyright (C) 2021 Marvell International Ltd.
 *
 * SPDX-License-Identifier: BSD-3-Clause
 * https://spdx.org/licenses
 **********************license end**************************************/

#ifndef __LNK_INTF_H__
#define __LNK_INTF_H__

#include <plat_portm_cfg.h>

/* Ownership of shared memory */
typedef enum link_own {
	LINK_OWN_NONE = 0,
	LINK_OWN_AP,
	LINK_OWN_ECP
} link_own_info_t;

typedef enum link_req_status {
	LINK_REQ_FAIL = 0,
	LINK_REQ_SUCCESS
} link_req_status_t;

/* Link error types enum definiton. need to be in sync with rpm_error type defined in eth_intf.h */
typedef enum link_err_type {
	LINK_ERR_NONE = 0,
	LINK_ERR_LMAC_NOT_ENABLED,
	LINK_ERR_LMAC_MODE_INVALID,
	LINK_ERR_REQUEST_ID_INVALID,
	LINK_ERR_PREV_ACK_NOT_CLEAR,
	LINK_ERR_PHY_LINK_DOWN,		/* = 5 */
	LINK_ERR_PCS_RESET_FAIL,
	LINK_ERR_AN_CPT_FAIL,
	LINK_ERR_TX_NOT_IDLE,
	LINK_ERR_RX_NOT_IDLE,
	LINK_ERR_SPUX_BR_BLKLOCK_FAIL,	/* = 10 */
	LINK_ERR_SPUX_RX_ALIGN_FAIL,
	LINK_ERR_SPUX_TX_FAULT,
	LINK_ERR_SPUX_RX_FAULT,
	LINK_ERR_SPUX_RESET_FAIL,
	LINK_ERR_SPUX_AN_RESET_FAIL,	/* = 15 */
	LINK_ERR_SPUX_USX_AN_RESET_FAIL,
	LINK_ERR_SMUX_RX_LINK_NOT_OK,
	LINK_ERR_PCS_LINK_FAIL,
	LINK_ERR_TRAINING_FAIL,
	LINK_ERR_RX_EQU_FAIL,		/* = 20 */
	LINK_ERR_SPUX_BER_FAIL,
	LINK_ERR_SPUX_RSFEC_ALGN_FAIL,
	LINK_ERR_SPUX_MARKER_LOCK_FAIL,
	LINK_ERR_SET_FEC_INVALID,
	LINK_ERR_SET_FEC_FAIL,		/* = 25 */
	LINK_ERR_MODULE_INVALID,
	LINK_ERR_MODULE_NOT_PRESENT,
	LINK_ERR_SPEED_CHANGE_INVALID,
	LINK_ERR_SERDES_RX_NO_SIGNAL,
	LINK_ERR_SERDES_CPRI_PARAM_INVALID,	/* = 30 */
	LINK_ERR_ECP_LINK_REQ_FAIL,
	LINK_ERR_LPCS_INTERNAL_LBK_INVALID,
	/* Add any error types from eth_intf.h and new error types
	 * required for ATF<->ECP here
	 */
	LINK_ERR_RCV_LNK_FAIL,			/* = 33 */
	LINK_ERR_LOCAL_FLT_FAIL,
	LINK_ERR_BLKS_ERR_FAIL,			/* = 35 */
	LINK_ERR_BER_CNT_FAIL,
	LINK_ERR_REMOTE_FLT_FAIL,
	LINK_ERR_STABLE_TIMEOUT,
	/* TODO: add more error types */
} link_err_type_t;

typedef enum ecp_link_req_id {
	ECP_LINK_REQ_NONE = 0,
	ECP_LINK_REQ_BRINGUP,
	ECP_LINK_REQ_BRINGDOWN,
	ECP_LINK_REQ_MODE_CHANGE,
	ECP_LINK_REQ_FEC_CHANGE,
	ECP_LINK_REQ_LMAC_CHANGE,
} ecp_link_req_id_t;

/* Link state enum definiton */
typedef enum link_state {
	ETH_LINK_NO_STATE = 0,
	ETH_LINK_STATE_LINK_BRINGUP,            /* First link bringup attempt */
	ETH_LINK_STATE_LINK_BRINGDOWN,          /* Bring link down */
	ETH_LINK_STATE_LINK_FEC_CHANGE,         /* Change FEC */
	ETH_LINK_STATE_MODE_CHANGE,             /* Change MODE */
	ETH_LINK_STATE_MODE_CHANGE_IN_PROGRESS,
	ETH_LINK_STATE_EXT_PHY_STATUS,          /* Check external PHY status */
	ETH_LINK_STATE_RX_SIGNAL,
	ETH_LINK_STATE_RX_TRAIN_FIRST,
	ETH_LINK_STATE_RX_TRAIN_IN_PROGRESS,
	ETH_LINK_STATE_AN_START,
	ETH_LINK_STATE_AN_RESTART,
	ETH_LINK_STATE_AN_SECOND_STAGE,
	ETH_LINK_STATE_AN_FIRST_LOOP,
	ETH_LINK_STATE_AN_IN_PROGRESS,
	ETH_LINK_STATE_AN_COMPLETE,
	ETH_LINK_STATE_LT_FIRST_LOOP,
	ETH_LINK_STATE_LT_IN_PROGRESS,
	ETH_LINK_STATE_LINK_FIRST_LOOP,
	ETH_LINK_STATE_LINK_IN_PROGRESS,
	ETH_LINK_STATE_LINK_UP,
	ETH_LINK_STATE_LINK_STOPPED
} ecp_link_state_enum_t;

typedef enum lnk_fail_type {
	ETH_RCV_LNK_FAIL = 0,
	ETH_LOCAL_FLT_FAIL,
	ETH_ERR_BLKS_FAIL,
	ETH_BER_CNT_FAIL,
	ETH_REMOTE_FLT_FAIL,
	ETH_STABLE_TIMEOUT,
} ecp_lnk_fail_type_t;

typedef enum an_fail_type {
	UNSUPPORTED_TECH = 0,
	INVALID_WIDTH,
} an_fail_type_t;

typedef enum lt_fail_type {
	SERDES_TIMEOUT = 0,
	SW_TIMEOUT,
} lt_fail_type_t;

typedef enum ecp_an_fail_mode {
	LT_FAIL = 0,
	LNK_FAIL = 1,
	AN_FAIL = 2,
	RXT_FAIL = 3,
} ecp_an_fail_mode_t;

typedef struct ecp_link_dbg_status {
	uint32_t fail_mode:2;     /* fail mode (an, lt, link) */
	uint32_t train_fail_cnt;  /* Rx/Link training fail cnt */
	uint32_t lnk_fail_count;  /* Link fail cnt */
	uint32_t fail_type:4;     /* Detailed failure */
	uint32_t err_cnt;         /* BER/ERR_BLK count */
	uint32_t lt_time:10;      /* Link Training time in ms */
	uint32_t lnk_time:14;     /* Link time in ms */
} ecp_link_dbg_status_t;

typedef union ecp_link_state_u {
	uint64_t link_stat;
	struct ecp_link_state {
		uint64_t link_up:1;
		uint64_t duplex:1;
		uint64_t speed:4;
		uint64_t an:1;
		uint64_t portm_mode:8;
		uint64_t error_type:10; /* link_err_type_t enum */
		uint64_t fec:2; /* FEC type */
		uint64_t reserved:36;
	} s;
} ecp_link_state_t;

typedef struct ecp_link_req {
	uint32_t req_id;
	uint32_t req_args;        /* TODO */
	uint32_t sfp_slot_present;/* Indicates if QSFP/SFP mgmt is enabled */
	uint32_t sfp_mod_stat;    /* Indicates if QSFP/SFP module is present */
	uint32_t phy_present;     /* Indicates if PHY is present */
	/* PHY mgmt is handled by ATF. ATF will update phy_link_stat reading
	 * from PHY and update SM. Relevant fields of ecp_link_state_t
	 * can be used for PHY and others can be ignored
	 */
	ecp_link_state_t phy_link_state;
} ecp_link_req_t;

typedef struct ecp_link_resp {
	uint32_t req_stat;	/* link_req_status_t */
	uint32_t link_state;  /* ecp_link_state_enum_t enum */
	ecp_link_state_t ecp_link_state;
	ecp_link_dbg_status_t ecp_link_dbg;
	int sig_detect;
} ecp_link_resp_t;

typedef struct ecp_link_mgmt_sh_data {
	uint32_t lock;
	uint32_t ack;
	uint32_t portm_idx;
	portm_config_t portm_cfg;
	uint32_t lmac_id;
	/* Link management async req/rsp between AP and ECP */
	ecp_link_req_t link_req;
	ecp_link_resp_t link_rsp;
} ecp_link_mgmt_sh_data_t;

typedef struct link_shared_data {
	uint32_t size;
	uint32_t intf_rev;
	ecp_link_mgmt_sh_data_t link_mgmt_portm[MAX_PORTM];
} ecp_link_shared_data_t;

void ecp_link_init_shmem(void);
int ecp_send_link_req(int portm, int rpm_id, int lmac_id, int req_id);
unsigned int ecp_get_link_state(int portm, ecp_link_state_t *link_state);
unsigned int ecp_update_phy_link_state(int portm, rpm_link_state_t *phy_link_state);

#endif /* __LNK_INTF_H__ */
