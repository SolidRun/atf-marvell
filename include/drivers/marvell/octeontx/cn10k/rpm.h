/*
 * Copyright (c) 2020 Marvell.
 *
 * SPDX-License-Identifier:     BSD-3-Clause
 * https://spdx.org/licenses
 */

#ifndef __RPM_H__
#define __RPM_H__

#include <platform_dt.h>
#include "cavm-csrs-rpm.h"

#define clock_get_count(...)	read_cntpct_el0()
#define clock_get_rate(...)	read_cntfrq_el0()

#define CAVM_RPM_LMAC_TYPES_E_FIFTYG_R (8)
#define CAVM_RPM_LMAC_TYPES_E_FORTYG_R (4)
#define CAVM_RPM_LMAC_TYPES_E_HUNDREDG_R (9)
#define CAVM_RPM_LMAC_TYPES_E_QSGMII (6)
#define CAVM_RPM_LMAC_TYPES_E_RGMII (5)
#define CAVM_RPM_LMAC_TYPES_E_RXAUI (2)
#define CAVM_RPM_LMAC_TYPES_E_SGMII (0)
#define CAVM_RPM_LMAC_TYPES_E_TENG_R (3)
#define CAVM_RPM_LMAC_TYPES_E_TWENTYFIVEG_R (7)
#define CAVM_RPM_LMAC_TYPES_E_USXGMII (0xa)
#define CAVM_RPM_LMAC_TYPES_E_USGMII (0xb)
#define CAVM_RPM_LMAC_TYPES_E_XAUI (1)
#define CAVM_RPM_LMAC_TYPES_E_MAX (0xc)

/* ERROR MASK based on cgx_err_type */
#define RPM_ERR_MASK                    0x3FF           /* 10 bits */

/* Recommended back pressure buffer depth to be 1/4th of FIFO size */
#define RPM_BP_ON_MARK_SIZE_DIV		4

/* Packet data depth is 128-bit and mark to be configured in
 * multiple of 16 bytes
 */
#define RPM_BP_PACKET_DATA_DEPTH	16

/* Max packset size as recommended by design */
#define RPM_MAX_FRAME_LENGTH		16384

/* Timeouts for RPM poll status */
#define RPM_POLL_LINK_BRINGUP_STATUS	4000000		/* 4 seconds */
#define RPM_LINK_BRINGUP_WAIT_STATUS	100000		/* 100 ms */
#define RPM_MODE_CHANGE_WAIT_STATUS	200000		/* 200 ms */
#define ECP_MODE_CHANGE_WAIT_STATUS	60000		/* 60 ms */
#define RPM_POLL_LINK_BRINGDOWN_STATUS	500000		/* 500 ms */
#define RPM_POLL_LINK_FECCHANGE_STATUS	4000000		/* 4 second */
#define ECP_TX_EQ_CHANGE_WAIT_MS	50		/* 50 ms */

typedef struct rpm_tsu_config {
	int tsu_rx_mode;
	int tsu_tx_mode;
	int tsu_modulo_tx;
	int tsu_module_rx;
	int tsu_blocktime;
	int tsu_blocktime_dec;
	int tsu_markertime;
	int tsu_markertime_dec;
	int tsu_blks_per_clk;
	int tsu_mii_mk_dly;
	int tsu_mii_cw_dly;
	int tsu_mii_tx_mk_cyc_dly;
	int tsu_mii_tx_cw_cyc_dly;
	int tsu_tx_sd_period;
} rpm_tsu_config_t;

/* Read-Modify-Write APIs for RPM CSRs */
#define CAVM_MODIFY_RPM_CHIP_CSR(type, csr, chip, field, val)   \
	do {                                                    \
		type c;                                         \
		c.u = CSR_READ(csr);			\
		c.chip.field = val;				\
		CSR_WRITE(csr, c.u);			\
	} while (0)

#define CAVM_MODIFY_RPM_CSR(type, csr, field, val)        \
	do {                                                    \
		type c;                                         \
		c.u = CSR_READ(csr);			\
		c.s.field = val;				\
		CSR_WRITE(csr, c.u);			\
	} while (0)

/* structure declarations */
typedef union rpm_link_status {
	uint64_t u64;
	struct rpm_link_status_s {
		uint64_t link_up:1;
		uint64_t full_duplex:1;
		uint64_t speed:4;		/* rpm_link_speed enum */
		/* current AN state:1 */
		uint64_t an:1;
		/* current FEC type:2 */
		uint64_t fec:2;
		uint64_t error_type:10;
		uint64_t reserved:45;
	} s;
} rpm_link_state_t;

/* Persistent settings for PORTM configuration (Mode/FEC change). This
 * struct should always be in sync with EBF
 */
typedef union rpm_lmac_flash_ctx {
	uint64_t u64;
	struct rpm_lmac_flash_ctx_s {
		uint64_t status:2; /* valid 0x2, other values invalid */
		uint64_t portm_idx:8; /* PORTM index */
		uint64_t portm_mode:8; /* PORTM mode */
		uint64_t fec_invalid:1;
		uint64_t fec_type:2;     /* FEC type */
		uint64_t ignore:1;
		uint64_t rsvd:42;
	} s;
} rpm_lmac_flash_ctx_t;

typedef enum link_bringup_state {
	LINK_BRINGUP_INIT = 0,
	LINK_BRINGUP_IN_PROGRESS,
	LINK_BRINGUP_DONE,
} link_bringup_state_t;

/* This structure will be used to maintain the current
 * link status and also lock mechanism to prevent simultaneous
 * access of CSRs by timer #1 and timer #2 CBs. as, SCRATCHX CSRs
 * have been modified to be opaque, it is not reliable to save
 * the current link status
 */
typedef union rpm_lmac_context {
	uint64_t u64;
	struct rpm_lmac_context_s {
		/* Timer #1 and Timer #2 CB should set lock = 1 (if lock == 0)
		 * before writing to SCRATCHX CSRs and free it after writing
		 * In addition to this lock, ownership status of SCRATCHX(1)
		 * should be checked to make sure kernel is not writing to it
		 */
		uint64_t lock:1;
		/* this variable will be used by timer #2 to poll for the
		 * link periodically as long as this variable is set. updated
		 * by timer #1 callback when there is a LINK UP/DOWN request
		 */
		uint64_t link_enable:1;
		/* internal loopback enable/disable */
		uint64_t lbk1_enable:1;
		/* link status */
		uint64_t link_up:1;
		uint64_t full_duplex:1;
		/* rpm_link_speed */
		uint64_t speed:4;
		/* rpm_error_type */
		uint64_t error_type:10;
		/* init link state */
		uint64_t init_link:1;
		/* current FEC type:2 */
		uint64_t fec:2;
		/* prev module status:2 */
		uint64_t mod_stats:2;
		uint64_t reserved:40;
	} s;
} rpm_lmac_context_t;

typedef struct rpm_lmac_bringup_context_s {
	/* to track link bring up timeout in milli seconds */
	uint64_t link_timeout;
	uint64_t link_bringup_time;
	uint64_t link_bringup_init_time;
		/* to track link bring up status
		 * STATE:
		 * 	LINK_BRINGUP_INIT = 0
		 *	LINK_BRINGUP_IN_PROGRESS
		 *	LINK_BRINGUP_DONE
		 */
	int link_bringup_status;
} rpm_lmac_bringup_context_t;

/* Mapping of mode to PORTM mode */
typedef struct speed_mode_map {
	uint64_t mode_bitmask;
} speed_mode_map_s;

/* RPM driver APIs */
void rpm_set_error_type(int rpm_id, int lmac_id, uint64_t type);

/* RPM FW interface APIs */
void rpm_fw_intf_init(void);
void rpm_fw_intf_shutdown(void);

/* Plat APIs specific to CN10K family */
int plat_get_rpm_idx(int qlm, int lane);
void rpm_init(int rpm_id);
int rpm_lmac_port_disable(int rpm_id, int lmac_id, rpm_lmac_context_t *lmac_ctx);
int rpm_set_internal_loopback(int rpm_id, int lmac_id, int enable);
void rpm_set_external_loopback(int rpm_id, int lmac_id, int enable);
int rpm_lmac_port_enable(int rpm_id, int lmac_id, rpm_lmac_context_t *lmac_ctx, rpm_link_state_t *lnk_sts, uint64_t bringup_timeout);
int rpm_fec_change(int rpm_id, int lmac_id, int fec, rpm_lmac_context_t *lmac_ctx, rpm_link_state_t *lnk_sts);

int rpm_update_flash_fec_param(int rpm_id, int lmac_id, int fec);
int rpm_update_flash_mode_param(int rpm_id, int lmac_id, int portm_mode);
int rpm_update_flash_mode_param_by_portm_idx(int portm_idx, int portm_mode);
/* Returns 1 if debug enabled, 0 if disabled */
int rpm_debug_log_state(void);
int rpm_set_ptp_mode(int rpm_id, int lmac_id, int enable);

#endif
