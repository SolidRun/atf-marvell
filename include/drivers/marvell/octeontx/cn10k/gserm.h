/*
 * Copyright (c) 2021 Marvell.
 *
 * SPDX-License-Identifier:     BSD-3-Clause
 *
 * Redistribution and use in source and binary forms, with or without
 * modification, are permitted provided that the following conditions are met:
 *
 * 1. Redistributions of source code must retain the above copyright notice,
 * this list of conditions and the following disclaimer.
 *
 * 2. Redistributions in binary form must reproduce the above copyright notice,
 * this list of conditions and the following disclaimer in the documentation
 * and/or other materials provided with the distribution.
 *
 * 3. Neither the name of the copyright holder nor the names of its
 * contributors may be used to endorse or promote products derived from this
 * software without specific prior written permission.
 *
 * THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS "AS IS"
 * AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE
 * IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE
 * ARE DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT HOLDER OR CONTRIBUTORS BE
 * LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR
 * CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF
 * SUBSTITUTE GOODS OR SERVICES; LOSS OF USE, DATA, OR PROFITS; OR BUSINESS
 * INTERRUPTION) HOWEVER CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN
 * CONTRACT, STRICT LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE)
 * ARISING IN ANY WAY OUT OF THE USE OF THIS SOFTWARE, EVEN IF ADVISED OF THE
 * POSSIBILITY OF SUCH DAMAGE.
 *
 */

#ifndef __MARVELL_GSERM_H__
#define __MARVELL_GSERM_H__
/* GSERM timeouts */
#define GSERM_TX_RX_READY_TIMEOUT_US 100000   /* TX_RX PLL Ready timeout */
#define GSERM_MCU_INIT_DONE_TIMEOUT_US 50000
#define GSERM_PRBS_COMP_TIMEOUT_MS 10
#define GSERM_LPBK_COMP_TIMEOUT_MS 10

/* GSERM IP Revs */
#define GSERM_IP_MAJOR_REV 1
#define GSERM_IP_MINOR_REV 2

/* GSERM delays */
#define GSERM_RESET_DELAY_US 1000
/* GSERM Bit defines */
#define GSERM_USR_BIT 0
/* GSERM other */
/* Firmware offset is at 0x200.
 * Firmware is stored in buffer of 4 byte chunks (0x200/4 = 0x80)
 */
#define COMPHY_FIRMWARE_BUFF_INDEX 0x80

typedef union comphy_firmware_info
{
	uint32_t u32;
	struct comphy_firmware {
		uint8_t build;   /* offset 0x200 */
		uint8_t patch;   /* offset 0x201 */
		uint8_t minor;   /* offset 0x202 */
		uint8_t major;   /* offset 0x203 */
	} s;
} comphy_firmware_info_t;

typedef enum tx_eq_limits {
	TXEQ_PRE2_MIN = -9,
	TXEQ_PRE2_MAX = 0,
	TXEQ_PRE1_MIN = -22,
	TXEQ_PRE1_MAX = 0,
	TXEQ_MAIN_MIN = 35,
	TXEQ_MAIN_MAX = 63,
	TXEQ_POST_MIN = -16,
	TXEQ_POST_MAX = 0,
	TXEQ_SUM_MAX = 63,
} tx_eq_limits_t;

typedef enum tx_eq_param {
	TXEQ_PRE2,
	TXEQ_PRE1,
	TXEQ_POST,
	TXEQ_MAIN,

	TXEQ_NUM
} tx_eq_param_t;

typedef union {
	uint16_t array[TXEQ_NUM];
	struct {
		uint16_t pre2;
		uint16_t pre1;
		uint16_t post;
		uint16_t main;
		int polarity;
		int gray_code;
		int pre_code;
		int tx_idle;
	} s;
} tx_eq_params_t;

enum prbs_cmd {
	PRBS_CMD_START,
	PRBS_CMD_SHOW,
	PRBS_CMD_CLEAR,
	PRBS_CMD_STOP,
	PRBS_CMD_INJECT
};

typedef struct prbs_error_stats {
	uint64_t total_bits;
	uint64_t error_bits;
	int locked;
} prbs_error_stats_t;

typedef struct prbs_stats {
	prbs_error_stats_t error_stats[4];
	int gen_pattern;
	int check_pattern;
} prbs_stats_t;

#define DFE_TAPS_NUM 24
#define CTLE_PARAMS_NUM 13

typedef struct {
	int32_t dfe_taps[DFE_TAPS_NUM];
	uint32_t ctle_params[CTLE_PARAMS_NUM];
	int polarity;
	int gray_code;
	int pre_code;
	int squelch_detected;
} rx_eq_params_t;

enum rx_train_cmd {
	RX_TRAIN_START,
	RX_TRAIN_CHECK,
	RX_TRAIN_STOP
};

enum ecp_notify_prbs_loopback_mode {
	ECP_NOTIFY_LOOPBACK_NO_LOOPBACK,
	ECP_NOTIFY_LOOPBACK_NEA,
	ECP_NOTIFY_LOOPBACK_NED,
	ECP_NOTIFY_LOOPBACK_FED,
	ECP_NOTIFY_PRBS_MODE_GEN_ENA,
	ECP_NOTIFY_PRBS_MODE_CHECK_ENA,
	ECP_NOTIFY_PRBS_MODE_GEN_CHECK_ENA,
	ECP_NOTIFY_PRBS_MODE_GEN_DIS,
	ECP_NOTIFY_PRBS_MODE_CHECK_DIS,
	ECP_NOTIFY_PRBS_MODE_GEN_CHECK_DIS
};

/* Writes to GSERM15 are broadcast to all GSERM's */
#define GSERM_BROADCAST 15
#define CNF10KB_CPRI_UPMAC_OFFSET 2
#define CNF10KB_ETH_LOWMAC_OFFSET 4
#define CNF10KB_ETH_UPMAC_OFFSET 8

typedef struct gserm_portm_programming {
	cn10k_portm_modes_t portm_mode;
	int phy_gen_rx;
	int phy_gen_tx;
	int rxdata_gray_code_en;
	int txdata_gray_code_en;
	int rxdata_pre_code_en;
	int txdata_pre_code_en;
} gserm_portm_programming_t;

void gserm_reset_init(void);
int gserm_portm_get_gserm_mapping(int portm_idx, uint8_t *gserm_idx,
				  uint16_t *mapping, uint8_t *lanes_num);
int gserm_tx_eq_params_set(int portm_idx, int lane_idx,
			   int mask, tx_eq_params_t *params);
int gserm_tx_eq_params_get(int portm_idx, int lane_idx,
			   tx_eq_params_t *params);
int gserm_rx_eq_params_set(int portm_idx, int lane_idx,
			   int mask);
int gserm_rx_eq_params_get(int portm_idx, int lane_idx,
			   rx_eq_params_t *params);

int gserm_rx_training_start(int portm_idx, int lane_idx);
int gserm_rx_training_check(int portm_idx, int lane_idx,
				int *completed, int *res);
int gserm_rx_training_stop(int portm_idx, int lane_idx);

int gserm_loopback_mode_set(int portm_idx, int lane_idx,
			    portm_gserm_lpbk_mode_t lpbk_mode);
int gserm_prbs_start(int portm_idx, int lane_idx,
		     int gen_pattern, int check_pattern);
int gserm_prbs_stop(int portm_idx, int lane_idx, int gen, int check);
int gserm_prbs_clear(int portm_idx, int lane_idx);
int gserm_prbs_show(int portm_idx, int lane_idx,
		    prbs_stats_t *stats);
int gserm_prbs_inject_err(int portm_idx, int lane_idx,
			  int errors_cnt);

int gserm_ecp_update_loopback_mode(int portm_idx, int lpbk_mode);
int gserm_ecp_update_prbs_mode(int portm_idx, int gen, int check);

#endif /* __MARVELL_GSERM_H__ */

