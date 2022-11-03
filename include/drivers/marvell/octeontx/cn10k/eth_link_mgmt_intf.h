/***********************license start***********************************
 * Copyright (c) 2021 Marvell.
 *
 * SPDX-License-Identifier: BSD-3-Clause
 * https://spdx.org/licenses
 **********************license end**************************************/

#ifndef __LNK_INTF_H__
#define __LNK_INTF_H__

#include <plat_portm_cfg.h>
/* Worst case platform MAX_PORTM */
#define PORTM_MAX 28
/* Worst case platform MAX_LMAC_PER_RPM */
#define LMAC_PER_RPM_MAX 8

#define ECP_LINK_LOCK_WAIT_MS 5
#define ECP_LINK_CMD_ACK_WAIT_MS 10

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
	LINK_ERR_RX_TRAIN_SW_TIMEOUT,
	LINK_ERR_RX_TRAIN_SERDES_TIMEOUT,	/* = 40 */
	LINK_ERR_TXRX_TRAIN_SW_TIMEOUT,
	LINK_ERR_TXRX_TRAIN_PAT_LOCK_TIMEOUT,
	LINK_ERR_TXRX_TRAIN_BAD_EYE,
	LINK_ERR_TXRX_TRAIN_LOCAL_TIMEOUT,
	LINK_ERR_TXRX_TRAIN_REMOTE_TIMEOUT,	/* = 45 */
	LINK_ERR_AN_CL73_NO_HCD,
	LINK_ERR_MCESD_FAIL,
	LINK_ERR_GSERM,
	LINK_ERR_TXEQ_UPDATE_FAIL,
	/* TODO: add more error types */
} link_err_type_t;

typedef enum ecp_link_req_id {
	ECP_LINK_REQ_NONE = 0,
	ECP_LINK_REQ_BRINGUP,
	ECP_LINK_REQ_BRINGDOWN,
	ECP_LINK_REQ_MODE_CHANGE,
	ECP_LINK_REQ_FEC_CHANGE,
	ECP_LINK_REQ_AN_RESTART,
	ECP_LINK_REQ_LOOPBACK_STATE_CHANGE,
	ECP_LINK_REQ_PRBS_STATE_CHANGE,
	ECP_LINK_REQ_TXEQ_CHANGE,
} ecp_link_req_id_t;

/* Link state enum definition */
typedef enum link_state {
	ETH_LINK_STATE_NO_STATE = 0,
	ETH_LINK_STATE_LINK_BRINGUP_FIRST = 1,      /* First link bringup attempt */
	ETH_LINK_STATE_LINK_BRINGUP = 2,            /* First link bringup attempt */
	ETH_LINK_STATE_LINK_BRINGDOWN = 3,          /* Bring link down */
	ETH_LINK_STATE_LINK_FEC_CHANGE = 4,         /* Change FEC */
	ETH_LINK_STATE_MODE_CHANGE = 5,             /* Change MODE */
	ETH_LINK_STATE_RST_PU_PLL = 6,
	ETH_LINK_STATE_PLL_RDY_FIRST_LOOP = 7,      /* States for PLL_READY_TX/RX */
	ETH_LINK_STATE_PLL_RDY = 8,
	ETH_LINK_STATE_SPEED_CHANGE_FINAL = 9,
	ETH_LINK_STATE_AN_RESTART = 10,             /* AN Restart */
	ETH_LINK_STATE_REMOTE_FAULT = 11,
	ETH_LINK_STATE_EXT_PHY_STATUS = 12,         /* Check external PHY status */
	ETH_LINK_STATE_RX_SIGNAL_FIRST_LOOP = 13,
	ETH_LINK_STATE_RX_SIGNAL = 14,
	ETH_LINK_STATE_RX_INIT_FIRST_LOOP = 15,
	ETH_LINK_STATE_RX_INIT = 16,
	ETH_LINK_STATE_RX_TRAIN_FIRST = 17,
	ETH_LINK_STATE_RX_TRAIN_IN_PROGRESS = 18,
	ETH_LINK_STATE_AN_START = 19,
	ETH_LINK_STATE_AN_SECOND_STAGE = 20,
	ETH_LINK_STATE_AN_FIRST_LOOP = 21,
	ETH_LINK_STATE_AN_IN_PROGRESS = 22,
	ETH_LINK_STATE_LT_FIRST_LOOP = 23,
	ETH_LINK_STATE_LT_IN_PROGRESS = 24,
	ETH_LINK_STATE_LINK_FIRST_LOOP = 25,
	ETH_LINK_STATE_LINK_IN_PROGRESS = 26,
	ETH_LINK_STATE_LINK_UP = 27,               /* Link up */
	ETH_LINK_STATE_LINK_STOPPED = 28,
	ETH_LINK_STATE_LBCK_CHANGE = 29,
	ETH_LINK_STATE_PRBS_CHANGE = 30,
	ETH_LINK_STATE_SERDES_TEST_STATE = 31,
	ETH_LINK_STATE_TXEQ_UPDATE_FIRST = 32,
	ETH_LINK_STATE_TXEQ_UPDATE_IN_PROGRESS = 33,
	ETH_LINK_STATE_TXEQ_ACK_CLR_FIRST = 34,
	ETH_LINK_STATE_TXEQ_ACK_CLR_IN_PROGRESS = 35,
	ETH_LINK_STATE_LINK_INH_TIMER_WAIT_FIRST = 36,
	ETH_LINK_STATE_LINK_INH_TIMER_WAIT = 37,
	ETH_LINK_STATE_AN_ENABLE = 38,
	ETH_LINK_STATE_AN_TX_DISABLE = 39,
	ETH_LINK_STATE_AN_LINK_STAT_CK = 40,
	ETH_LINK_STATE_AN_PARALLEL_FLT = 41,
	ETH_LINK_STATE_AN_ABILITY_DET = 42,
	ETH_LINK_STATE_AN_ACK_DETECT = 43,
	ETH_LINK_STATE_AN_COMPLETE_ACK = 44,
	ETH_LINK_STATE_AN_NP_WAIT = 45,
	ETH_LINK_STATE_AN_GOOD_CK = 46,
	ETH_LINK_STATE_AN_GOOD = 47,
	ETH_LINK_STATE_AN_SERDES_WAIT = 48,
	ETH_LINK_STATE_SFP_MODULE_UNPLUGGED = 49,
	ETH_LINK_STATE_GSERM_FAILURE = 50,
	ETH_LINK_STATE_TXEQ_CHANGE = 51,
	ETH_LINK_STATE_TXEQ_FAILURE = 52,
	ETH_LINK_STATE_RX_INIT_WAIT = 53,
	ETH_LINK_STATE_RX_TRAIN_WAIT = 54,
} ecp_link_state_enum_t;

typedef enum ecp_aneg_state {
	ANEG_ST_AN_ENABLE = 0x1,
	ANEG_ST_TX_DISABLE = 0x2,
	ANEG_ST_LINK_STAT_CK = 0x4,
	ANEG_ST_PARALLEL_FLT = 0x8,
	ANEG_ST_ABILITY_DET = 0x10,
	ANEG_ST_ACK_DETECT = 0x20,
	ANEG_ST_COMPLETE_ACK = 0x40,
	ANEG_ST_NP_WAIT = 0x80,
	ANEG_ST_AN_GOOD_CK = 0x100,
	ANEG_ST_AN_GOOD = 0x200,
	ANEG_ST_SERDES_WAIT = 0x400,
} ecp_aneg_state_t;

typedef struct ecp_link_dbg_status {
	uint32_t train_fail_cnt;  /* Rx/Link training fail cnt */
	uint32_t lnk_fail_count;  /* Link fail cnt */
	uint32_t err_cnt;         /* BER/ERR_BLK count */
	uint32_t train_time:10;   /* Rx/Tx Training time in ms */
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

/* sfp_mod_stat : description
 * State machine maintain for SFP/QSFP management for communication
 * between AP & MCP
 * sfp_mod_state_info : Module status
typedef enum sfp_mod_state_info {
	SFP_MOD_STATE_ABSENT = 0,	// Module disconnected
	SFP_MOD_STATE_PRESENT,		// Module connected
	SFP_MOD_STATE_EEPROM_UPDATED,	// Update of EEPROM every 5s
	SFP_MOD_STATE_OTHER
} sfp_mod_state_info_t;
*/

typedef struct ecp_link_req {
	uint32_t req_id:6;
	uint32_t req_args;        /* TODO */
	uint32_t sfp_slot_present:1;/* Indicates if QSFP/SFP mgmt is enabled */
	uint32_t sfp_mod_stat:2;    /* Indicates if QSFP/SFP module is present */
	uint32_t phy_present:1;     /* Indicates if PHY is present */
	/* PHY mgmt is handled by ATF. ATF will update phy_link_stat reading
	 * from PHY and update SM. Relevant fields of ecp_link_state_t
	 * can be used for PHY and others can be ignored
	 */
	ecp_link_state_t phy_link_state[LMAC_PER_RPM_MAX];
} ecp_link_req_t;

typedef struct ecp_link_resp {
	ecp_link_state_enum_t link_state;
	ecp_link_state_t ecp_link_state;
	ecp_link_dbg_status_t ecp_link_dbg;
} ecp_link_resp_t;

typedef struct {
	uint32_t an_disable:1;  /* Set if AN is disabled */
	uint32_t mac_speed:4;	/* MAC speed to set when AN is disabled (enum eth_link_speed) */
	uint32_t mac_duplex:1;	/* MAC duplex to set when AN is disabled */
	uint32_t _reserved:26;
} lpcs_spd_dplx_t;

/* Stores 802.3AP negotiated Portm data */
typedef struct portm_config_aneg {
	cn10k_portm_modes_t portm_mode;    /* 802.3ap PORTM mode */
	cn10k_portm_pcs_type_t pcs_type;   /* 802.3ap PCS type used by portm_mode (Eth only) */
	int portms_used;                   /* 802.3ap Number of portm's used by port (typically equal to gser_numlanes) */
	cn10k_portm_fec_t fec;             /* 802.3ap PORTM FEC.*/
	int gser_numlanes;                 /* 802.3ap Number of SERDES lanes used by  portm_mode */
} portm_config_aneg_t;

typedef struct ecp_state_log {
	uint64_t timestamp;
	uint32_t lmac_id;
	cn10k_portm_mac_type_t mac_type;
	cn10k_portm_modes_t portm_mode;
	cn10k_portm_fec_t fec;
	ecp_link_req_t link_req;
	ecp_link_resp_t link_rsp;
	uint32_t sig_detect:1;
	lpcs_spd_dplx_t lpcs_spd_dplx;
} ecp_state_log_t;

#define QUEUED_ENTRIES_MAX 8
#define ECP_STS_ENTRIES_MAX 64
#define ECP_HIST_TOUT_MS 1000
typedef struct ecp_state_hist_buf {
	uint32_t ql_head;
	uint32_t ql_tail;
	ecp_state_log_t queued_logs[QUEUED_ENTRIES_MAX];

	uint32_t sl_head;
	uint32_t sl_tail;
	uint32_t sl_owner;
	ecp_state_log_t shared_logs[ECP_STS_ENTRIES_MAX];
} ecp_state_hist_buf_t;

typedef struct ecp_link_mgmt_sh_data {
	uint32_t lock;
	uint32_t ack;
	uint32_t req_in_prog[LMAC_PER_RPM_MAX]; /* Will get set to 1 by AP when requesting mode/txeq change. ECP clears it. */
	uint32_t portm_idx;
	portm_config_t portm_cfg;
	portm_config_aneg_t portm_cfg_aneg;     /* Updated as part of 802.3AP autoneg. */
	lpcs_spd_dplx_t lpcs_speed_dplx[LMAC_PER_RPM_MAX]; /* Speed and Duplex settings for lpcs modes */
	uint32_t sig_detect:1;
	uint32_t lmac_id;
	/* Link management async req/rsp between AP and ECP */
	ecp_link_req_t link_req;
	ecp_link_resp_t link_rsp[LMAC_PER_RPM_MAX];

	ecp_state_hist_buf_t history;
} ecp_link_mgmt_sh_data_t;

typedef struct link_shared_data {
	uint32_t size;
	uint32_t intf_rev;
	uint32_t debug_ena;  /* Set to 1 if debug enabled in rpm.c */
	ecp_link_mgmt_sh_data_t link_mgmt_portm[PORTM_MAX];
} ecp_link_shared_data_t;

void ecp_link_init_shmem(void);
int ecp_send_link_req(int portm, int rpm_id, int lmac_id, int req_id, rpm_lmac_context_t *lmac_ctx);

/**
 * Gets the ECP Portm config data from 802.3AP negotiation
 *
 * @param portm_idx         PORTM to use
 * @param *portm_cfg_aneg   802.3AP portm config
 * @return 1 Failed to get lock, 0 = Success
 */
int ecp_get_aneg_portm_cfg(int portm_idx, portm_config_aneg_t *portm_cfg_aneg);

/**
 * Sets the ECP req_in_prog
 *
 * @param portm_idx     PORTM to use
 * @param lmac_id
 * @param state         Value to set req_in_prog
 * @return 1 Failed to send, 0 = Success
 */
unsigned int ecp_set_req_in_prog(int portm_idx, int lmac_id, unsigned int state);

/**
 * Returns status of ECP req_in_prog
 *
 * @param portm_idx     PORTM to use
 * @param lmac_id
 * @return 0 request done, 1 not done
 */
unsigned int ecp_get_req_in_prog(int portm_idx, int lmac_id);

unsigned int ecp_get_link_state(int portm_idx, int lmac_id, ecp_link_state_t *link_state, int *sig_detect);
unsigned int ecp_update_phy_link_state(int portm, int lmac_id, rpm_link_state_t *phy_link_state);
unsigned int ecp_update_sfp_mod_state(int portm_idx, int mod_stat);
int ecp_dump_state_history(int portm_idx, int lmac_id, const char *msg);

/**
 * Convert ECP ETH Link state into a string value
 *
 * @param link_state: ECP ETH Link state to convert
 * @return: ECP ETH Link state string
 */
const char *cn10k_eth_link_state_to_str(ecp_link_state_enum_t link_state);

/**
 * Convert Link Error type into a string value
 *
 * @param link_error: Link error to convert
 * @return: Link error string
 */
const char *cn10k_link_error_to_str(link_err_type_t link_error);

/**
 * Convert ECP Link request type into a string value
 *
 * @param link_req: ECP Link request to convert
 * @return: ECP Link request string
 */
const char *cn10k_ecp_link_req_to_str(ecp_link_req_id_t link_req);

#endif /* __LNK_INTF_H__ */
