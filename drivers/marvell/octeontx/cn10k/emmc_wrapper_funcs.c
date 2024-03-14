/***********************license start***********************************
 * Copyright (c) 2020 Marvell.
 * SPDX-License-Identifier: BSD-3-Clause
 * https://spdx.org/licenses
 **********************license end**************************************/

#include <string.h>
#include <drivers/gpio.h>
#include <timers_octeontx.h>
#include <utils.h>
#include <drivers/gpio.h>
#include <gpio_octeontx.h>
#include "emmc_wrapper_funcs.h"
#include "emmc_driver_funcs.h"
#include "cavm-csrs-cpc.h"
#include "cavm-csrs-emmc.h"
#include "cavm-csrs-gpio.h"
/**
 * Do not enable this unless you have hours to wait for booting up since
 * this will dump a LOT of debugging information
 */
//#define EMMC_DEV_DEBUG

/****************************************************************
 *   Description:
 *   Input: None
 *   Output: None
 *   Returns: None
 *****************************************************************/
extern card_properties_t crd_prop;
extern emmc_response_t   last_cmd_resp;
extern img_txfer_t       img_txfer_upd;
extern card_transfer_t   card_txfer_upd;
extern cmd_framed_t      last_cmd_framed;
extern card_registers_t  card_reg;
extern emmc_blk_cntl   blk_ctrl;
extern uint32_t emmc_last_cmd;

static uint32_t taac_ns;
static uint32_t taac_clks;
static uint64_t wait_on_dat_longest_time;
static srs12_intr_res_t last_result;
static srs12_intr_res_t last_set_result;
static save_state_t saved_state;
static bool fake_init;

enum sdhci_fsms {
	FSM_DEB = 0x00,
	FSM_FIN = 0x01,
	FSM_BUFFER = 0x02,
	FSM_BUSY = 0x03,
	FSM_WRX = 0x04,
	FSM_RDX = 0x05,
	FSM_XFR = 0x06,
	FSM_BIU = 0x07,
	FSM_ABORT = 0x08,
	FSM_ADMA = 0x09,
	FSM_DCTRL = 0x0a,
	FSM_DMA_DATAPATH = 0x0b,
	FSM_DMA_CTRL = 0x0c,
	FSM_TUNE_CTRL = 0x0d,
	FSM_STEP = 0x0e,
	FSM_STATUS = 0x0f,
	FSM_READ_PATTERN = 0x10,
	FSM_BOOT = 0x11,
	FSM_CQE = 0x12,
	FSM_EXEC = 0x13,
	FSM_CITIMER = 0x14,
	FSM_QUEUE1 = 0x15,
	FSM_AXI2AHBLITE = 0x16,
	FSM_IP = 0x2000,
	FSM_CMD = 0x2001,
	FSM_CMD_CTRL = 0x2002,
	FSM_CMD2 = 0x2003,
	FSM_BLOCK = 0x2004,
	FSM_INF_XFER_END = 0x2005,
	FSM_INF_XFER_REND = 0x2006,
};

#define UNSTUFF_BITS(resp, start, size)					\
	({								\
		const int __size = size;				\
		const uint32_t __mask = (__size < 32 ? 1 << __size : 0) - 1;	\
		const int __off =  ((start) / 32);			\
		const int __shft = (start) & 31;			\
		uint32_t __res;						\
									\
		__res = resp[__off] >> __shft;				\
		if (__size + __shft > 32)				\
			__res |= resp[__off-1] << ((32 - __shft) % 32);	\
		__res & __mask;						\
	})

static const unsigned int taac_exp[] = {
	1,	10,	100,	1000,	10000,	100000,	1000000, 10000000,
};

static const unsigned int taac_mant[] = {
	0,	10,	12,	13,	15,	20,	25,	30,
	35,	40,	45,	50,	55,	60,	70,	80,
};

/******************************************************************************
 *  Description: Save state
 *  Input Parameters: None
 *  Output Parameters: None
 *  Returns: None
 *******************************************************************************/
uint32_t emmc_save_state(void)
{
	if (saved_state.state_saved) {
		return SDMMC_GENERAL_ERROR;
	}
	saved_state.ctrl1.all = CSR_READ(CAVM_EMMCX_HOST_SRS_SRS10(0));
	saved_state.dma_descr_addr = CSR_READ(CAVM_EMMCX_HOST_SRS_SRS22(0)) |
				     (CSR_READ(CAVM_EMMCX_HOST_SRS_SRS23(0)) << 32);
	saved_state.state_saved = true;
	return 0;
}

uint32_t emmc_restore_state(void)
{
	if (!saved_state.state_saved) {
		return SDMMC_GENERAL_ERROR;
	}
	CSR_WRITE(CAVM_EMMCX_HOST_SRS_SRS10(0), saved_state.ctrl1.all);
	CSR_WRITE(CAVM_EMMCX_HOST_SRS_SRS22(0), saved_state.dma_descr_addr & 0xffffffff);
	CSR_WRITE(CAVM_EMMCX_HOST_SRS_SRS23(0), saved_state.dma_descr_addr >> 32);
	saved_state.state_saved = false;
	return 0;
}

#ifdef EMMC_DEV_DEBUG
static void print_buffer(const void *buffer, size_t size) __attribute__((unused));
static void print_buffer(const void *buffer, size_t size)
{
	unsigned long i;
	static const char hex_str[] = "0123456789abcdef";
	const uint8_t *ptr = buffer;
	char line[80];
	char *cptr = line;

	for (i = 0; i < size; i++) {
		if (i % 16 == 0) {
			cptr += snprintf(line, sizeof(line), "%p: ", ptr);
			*cptr++ = hex_str[(i >> 12) & 0xf];
			*cptr++ = hex_str[(i >> 8) & 0xf];
			*cptr++ = hex_str[(i >> 4) & 0xf];
			*cptr++ = hex_str[i & 0xf];
			*cptr++ = ':';
		} else if (i % 8 == 0) {
			*cptr++ = ' ';
			*cptr++ = '-';
		}
		*cptr++ = ' ';
		*cptr++ = hex_str[(*ptr >> 4) & 0xf];
		*cptr++ = hex_str[*ptr & 0xf];
		ptr++;
		if (i % 16 == 15) {
			*cptr = '\0';
			cptr = line;
			INFO("%s\n", line);
		}
	}
	if (cptr != line) {
		*cptr = '\0';
		INFO("%s\n", line);
	}
}

/**
 * This prints out the debugging state machines in a human readable format
 *
 * @param fsm	State machine to print out
 */
static void print_fsm(unsigned  int fsm)
{
	union cavm_emmcx_host_hrs_hrs32 hrs32;
	const char *fsm_name;
	const char *fsm_state_name = "UNKNOWN";
	static const char * const fsm_names[] = {
		"DEB",		/* 0x00 */
		"FIN",		/* 0x01 */
		"BUFFER",	/* 0x02 */
		"BUSY",		/* 0x03 */
		"WRX",		/* 0x04 */
		"RDX",		/* 0x05 */
		"XFR",		/* 0x06 */
		"BIU",		/* 0x07 */
		"ABORT",	/* 0x08 */
		"ADMA",		/* 0x09 */
		"DCTRL",	/* 0x0a */
		"DMA_DATAPATH",	/* 0x0b */
		"DMA_CTRL",	/* 0x0c */
		"TUNE_CTRL",	/* 0x0d */
		"STEP",		/* 0x0e */
		"STATUS",	/* 0x0f */
		"READ_PATTERN",	/* 0x10 */
		"BOOT",		/* 0x11 */
		"CQE",		/* 0x12 */
		"EXEC",		/* 0x13 */
		"CITIMER",	/* 0x14 */
		"QUEUE1",	/* 0x15 */
		"AXI2AHBLITE",	/* 0x16 */
	};
	static const char * const fsm_ext_names[] = {
		"IP",		/* 0x2000 */
		"CMD",
		"CMD_CTRL",
		"CMD2",
		"BLOCK",
		"INF_XFER_END",
		"INF_XFER_REND",
	};

	static const char * const dbg_states[] = {
		"RESET",
		"DEBOUNCE",
		"CARD_IN",
		"NO_CARD",
	};
	static const char * const fin_states[] = {
		"IDLE",
		"WRITE_SEL",
		"WRITE",
		"WRITE_END",
		"READ_SEL",
		"READ",
		"READ_END",
	};
	static const char * const biu_states[] = {
		"RESET",
		"IDLE",
		"CMDSEL",
		"CMDABORT",
		"CMDNORMAL",
		"CMDSEND",
		"RSPWAIT0",
		"RSPWAIT",
		"RSPWRITE",
		"STARTXFER",
		"RESERVED10",
		"RSPERROR",
		"RESERVED12",
		"RESERVED13",
		"RESERVED14",
		"RESERVED15",
		"ACTIVATE_S0"
	};
	static const char * const xfer_states[] = {
		"RESET",
		"IDLE",
		"READ",
		"WRITE",
		"LOAD",
		"SBG_REQ",
		"SBG_INT",
		"SBG_WAIT",
		"FAKE",
	};

	static const char * const exec_states[] = {
		"IDLE",
		"QPOP",
		"QPOP_RDY",
		"TD",
		"TD_READY",
		"SETUP",
		"WAIT",
		"COMPLETE",
		"ERR",
		"ERR__WAIT",
		"DCMD_CMD13"
	};

	static const char * const rdx_states[] = {
		"RESET",
		"IDLE",
		"ACTIVE",
		"BIUWAIT",
		"RDXCOMPLETE",
	};

	static const char * const *wrx_states = rdx_states;

	static const char * const busy_states[] = {
		"IDLE",
		"WAITING",
		"ACTIVE",
	};

	static const char * const abort_states[] = {
		"INACTIVE",
		"WAITING",
		"TRIGGERED",
		"ACTIVE",
	};

	static const char * const dctrl_states[] = {
		"IDLE",
		"CFG",
		"CFG2",
		"CFG3",
		"CFG4",
		"WAIT",
		"END",
		"ENABLE",
		"ACTIVE",
		"PROCEND",
		"ERROR",
		"ERRORLEN",
		"LENVAL",
		"SUSPEND",
		"MERR",
	};

	static const char * const dma_datapath_states[] = {
		"IDLE",
		"TRANS",
	};

	static const char * const adma_states[] = {
		"IDLE",
		"INITIAL",
		"DESCFETCH",
		"DESCFETCH2",
		"PROCESS",
		"CFG",
		"WAIT",
		"END",
		"ENABLE",
		"ACTIVE",
		"PROCEND",
		"ERROR",
		"ERRORLEN",
		"LENVAL",
		"SUSPEND",
		"MERR",
	};

	static const char * const dma_ctrl_states[] = {
		"IDLE",
		"REQFIRST",
		"REQ",
		"END",
		"BNDWAIT",
		"BND",
		"WAIT",
	};

	static const char * const status_states[] = {
		"IDLE",
		"START",
		"ACTIVE",
		"CALC",
		"CALC2",
		"CALC3",
		"UPDATE_POS",
		"END",
	};

	static const char * const read_pattern_states[] = {
		"IDLE",
		"START",
		"CONT",
		"SKIP",
	};

	static const char * const tune_ctrl_states[] = {
		"IDLE",
		"REQ",
		"ACK",
		"INA",
	};

	static const char * const cmd_states[] = {
		"IDLE",
		"SEND",
		"END",
		"WAIT",
		"RESP",
		"COMPLETE",
		"GAP",
		"ERROR",
		"BOOT",
	};

	static const char * const cmd_ctrl_states[] = {
		"IDLE",
		"NORMAL",
		"AUTOCMD12",
		"AUTOCMD23",
		"NORMAL_BEFORE_AUTOCMD12",
		"CMD13_BEFORE_AUTOCMD12",
	};

	static const char * const cmd2_states[] = {
		"IDLE",
		"UNKNOWN1",
		"REQ",
		"WAIT",
	};

	static const char * const xfer_end_states[] = {
		"IDLE",
		"WLAST",
		"WIDLE",
		"WENDREQ",
		"WENDACK",
		"WEND",
		"WEND2",
	};

	static const char * const xfer_rend_states[] = {
		"RIDLE",
		"RABORT",
		"RWAIT",
		"RWAIT2",
	};

	static const char * const citimer_states[] = {
		"IDLE",
		"CMD13REQ",
		"WAIT",
	};

	static const char * const step_states[] = {
		"STEP_IDL",
		"TUNERRRST",
		"TUNEERR",
		"TUNEOKAY",
		"COMMIT",
	};

	static const char * const block_states[] = {
		"IDLE (wait for data)",
		"START (send/recv start bit)",
		"DATA (write/read data block)",
		"CRC (generate/check CRC)",
		"STOP (send/recv stop bit)",
		"WAIT (wait CRC response)",
		"RESP (CRC response from card)",
		"GAP (gap between data blocks)",
		"COMPLETE (last block complete)",
		"READWAIT (wait state between data blocks)",
		"ABORT (data transfer aborted)",
		"BUSY (busy from card)",
		"SBG (stop at block gap)",
		"INACTIVE (wait in inactive for transfer abort)",
		"BOOTACKWAIT (boot acknowledge wait)"
		"BOOTACK (boot acknowledge)"
	};

	static const char * const ip_states[] = {
		"DISABLE",
		"PERIOD",
		"ENABLE",
	};
#if 0
	static const char * const ocp_wrap_states[] = {
		"IDLE",
		"WRITE_SEL",
		"WRITE",
		"WRITE_END",
		"READ_SEL",
		"READ",
		"READ_END",
	};
#endif
	static const char * const buffer_states[] = {
		"SPRAM_RD_WR_SEL_IDLE",
		"SPRAM_RD_WR_SEL_WAIT0",
		"SPRAM_READ_WR_SEL_INIT0",
		"SPRAM_RD_WR_SEL_ACTIVE0",
		"SPRAM_RD_WR_SEL_WAIT1",
		"SPRAM_RD_WR_SEL_INIT1",
		"SPRAM_RD_WR_SEL_ACTIVE1",
	};

	static const char * const axi2ahblite_states[] = {
		"IDLE",
		"RD",
		"WR",
		"WR_PART",
		"BUSY",
	};

	if (fsm <= 0x16)
		fsm_name = fsm_names[fsm];
	else if (fsm >= 0x2000 && fsm <= 0x2006)
		fsm_name = fsm_ext_names[fsm - 0x2000];
	else
		fsm_name = "UNKNOWN";


	hrs32.u = 0;
	hrs32.s.load = 1;
	hrs32.s.addr = fsm;
	CSR_WRITE(CAVM_EMMCX_HOST_HRS_HRS32(0), hrs32.u);
	do {
		hrs32.u = CSR_READ(CAVM_EMMCX_HOST_HRS_HRS32(0));
	} while (hrs32.s.load == 1);
	switch (fsm) {
	case FSM_DEB:
		fsm_state_name = dbg_states[hrs32.s.data];
		break;
	case FSM_FIN:
		if (hrs32.s.data <= 6)
			fsm_state_name = fin_states[hrs32.s.data];
		break;
	case FSM_BUFFER:
		fsm_state_name = buffer_states[hrs32.s.data];
		break;
	case FSM_BUSY:
		fsm_state_name = busy_states[hrs32.s.data];
		break;
	case FSM_WRX:
		fsm_state_name = wrx_states[hrs32.s.data];
		break;
	case FSM_RDX:
		fsm_state_name = rdx_states[hrs32.s.data];
		break;
	case FSM_XFR:
		fsm_state_name = xfer_states[hrs32.s.data];
		break;
	case FSM_BIU:
		fsm_state_name = biu_states[hrs32.s.data];
		break;
	case FSM_ABORT:
		fsm_state_name = abort_states[hrs32.s.data];
		break;
	case FSM_ADMA:
		fsm_state_name = adma_states[hrs32.s.data];
		break;
	case FSM_DCTRL:
		fsm_state_name = dctrl_states[hrs32.s.data];
		break;
	case FSM_DMA_DATAPATH:
		fsm_state_name = dma_datapath_states[hrs32.s.data];
		break;
	case FSM_DMA_CTRL:
		fsm_state_name = dma_ctrl_states[hrs32.s.data];
		break;
	case FSM_TUNE_CTRL:
		fsm_state_name = tune_ctrl_states[hrs32.s.data];
		break;
	case FSM_STEP:
		fsm_state_name = step_states[hrs32.s.data];
		break;
	case FSM_STATUS:
		fsm_state_name = status_states[hrs32.s.data];
		break;
	case FSM_READ_PATTERN:
		fsm_state_name = read_pattern_states[hrs32.s.data];
		break;
	case FSM_BOOT:
		break;
	case FSM_CQE:
		break;
	case FSM_EXEC:
		fsm_state_name = exec_states[hrs32.s.data];
		break;
	case FSM_CITIMER:
		fsm_state_name = citimer_states[hrs32.s.data];
		break;
	case FSM_QUEUE1:
		break;
	case FSM_AXI2AHBLITE:
		fsm_state_name = axi2ahblite_states[hrs32.s.data];
		break;
	case FSM_IP:
		fsm_state_name = ip_states[hrs32.s.data];
		break;
	case FSM_CMD:
		fsm_state_name = cmd_states[hrs32.s.data];
		break;
	case FSM_CMD_CTRL:
		fsm_state_name = cmd_ctrl_states[hrs32.s.data];
		break;
	case FSM_CMD2:
		fsm_state_name = cmd2_states[hrs32.s.data];
		break;
	case FSM_BLOCK:
		fsm_state_name = block_states[hrs32.s.data];
		break;
	case FSM_INF_XFER_END:
		fsm_state_name = xfer_end_states[hrs32.s.data];
		break;
	case FSM_INF_XFER_REND:
		fsm_state_name = xfer_rend_states[hrs32.s.data];
		break;
	default:
		break;
	}
	INFO("FSM: %s (0x%x), state: %s (0x%x)\n",
	     fsm_name, fsm, fsm_state_name, hrs32.s.data);
}

static uint32_t read_phy(uint32_t reg)
{
	CSR_WRITE(CAVM_EMMCX_HOST_HRS_HRS04(0), reg);
	return CSR_READ(CAVM_EMMCX_HOST_HRS_HRS05(0));
}

static void print_phy(void)
{
	INFO("PHY regs:\n");
	INFO("  PHY_DQ_TIMING: 0x%x\n", read_phy(EMMC_PHY_DQ_TIMING_ADDR));
	INFO("  PHY_DQS_TIMING: 0x%x\n", read_phy(EMMC_PHY_DQS_TIMING_ADDR));
	INFO("  PHY_GATE_LPBK_CTRL: 0x%x\n", read_phy(EMMC_PHY_GATE_LPBK_CTRL_ADDR));
	INFO("  MASTER_CTRL: 0x%x\n", read_phy(EMMC_PHY_MASTER_CTRL_ADDR));
	INFO("  SLAVE_CTRL: 0x%x\n", read_phy(EMMC_PHY_SLAVE_CTRL_ADDR));
	INFO("  PHY_CTRL: 0x%x\n", read_phy(EMMC_PHY_CTRL_ADDR));
	INFO("  GPIO_CTRL: 0x%x\n", read_phy(EMMC_PHY_GPIO_CTRL_ADDR));
}

static void print_regs(const char *s)
{
	uint32_t val;

	INFO("%s:\n", s);
	print_phy();
	INFO("HRS:\n");
	val = CSR_READ(CAVM_EMMCX_HOST_HRS_HRS00(0));
	INFO("  HRS00: 0x%x\n", val);
	val = CSR_READ(CAVM_EMMCX_HOST_HRS_HRS01(0));
	INFO("  HRS01: 0x%x\n", val);
	val = CSR_READ(CAVM_EMMCX_HOST_HRS_HRS02(0));
	INFO("  HRS02: 0x%x\n", val);
	val = CSR_READ(CAVM_EMMCX_HOST_HRS_HRS03(0));
	INFO("  HRS03: 0x%x\n", val);
	val = CSR_READ(CAVM_EMMCX_HOST_HRS_HRS06(0));
	INFO("  HRS06 EMMC mode: 0x%x\n", val);
	val = CSR_READ(CAVM_EMMCX_HOST_HRS_HRS07(0));
	INFO("  HRS07 EMMC mode: 0x%x\n", val);
	val = CSR_READ(CAVM_EMMCX_HOST_HRS_HRS08(0));
	INFO("  HRS08: 0x%x\n", val);
	val = CSR_READ(CAVM_EMMCX_HOST_HRS_HRS09(0));
	INFO("  HRS09: 0x%x\n", val);
	val = CSR_READ(CAVM_EMMCX_HOST_HRS_HRS10(0));
	INFO("  HRS10: 0x%x\n", val);
	val = CSR_READ(CAVM_EMMCX_HOST_HRS_HRS11(0));
	INFO("  HRS11: 0x%x\n", val);
	val = CSR_READ(CAVM_EMMCX_HOST_HRS_HRS12(0));
	INFO("  HRS12: 0x%x\n", val);
	val = CSR_READ(CAVM_EMMCX_HOST_HRS_HRS13(0));
	INFO("  HRS13: 0x%x\n", val);
	val = CSR_READ(CAVM_EMMCX_HOST_HRS_HRS16(0));
	INFO("  HRS16: 0x%x\n", val);
	val = CSR_READ(CAVM_EMMCX_HOST_HRS_HRS29(0));
	INFO("  HRS29: 0x%x\n", val);
	for (val = 0; val <= 0x16; val++)
		print_fsm(val);
	for (val = 0x2000; val <= 0x2006; val++)
		print_fsm(val);
	val = CSR_READ(CAVM_EMMCX_HOST_HRS_HRS32(0));
	INFO("  HRS32: 0x%x\n", val);
	val = CSR_READ(CAVM_EMMCX_HOST_HRS_HRS36(0));
	INFO("  HRS36: 0x%x\n", val);
	INFO("SRS:\n");
	val = CSR_READ(CAVM_EMMCX_HOST_SRS_SRS00(0));
	INFO("  SRS00: 0x%x\n", val);
	val = CSR_READ(CAVM_EMMCX_HOST_SRS_SRS01(0));
	INFO("  SRS01: 0x%x\n", val);
	val = CSR_READ(CAVM_EMMCX_HOST_SRS_SRS03(0));
	INFO("  SRS03: 0x%x\n", val);
	val = CSR_READ(CAVM_EMMCX_HOST_SRS_SRS04(0));
	INFO("  SRS04: 0x%x\n", val);
	val = CSR_READ(CAVM_EMMCX_HOST_SRS_SRS05(0));
	INFO("  SRS05: 0x%x\n", val);
	val = CSR_READ(CAVM_EMMCX_HOST_SRS_SRS06(0));
	INFO("  SRS06: 0x%x\n", val);
	val = CSR_READ(CAVM_EMMCX_HOST_SRS_SRS07(0));
	INFO("  SRS07: 0x%x\n", val);
	val = CSR_READ(CAVM_EMMCX_HOST_SRS_SRS09(0));
	INFO("  SRS09: 0x%x\n", val);
	val = CSR_READ(CAVM_EMMCX_HOST_SRS_SRS10(0));
	INFO("  SRS10: 0x%x\n", val);
	val = CSR_READ(CAVM_EMMCX_HOST_SRS_SRS11(0));
	INFO("  SRS11: 0x%x\n", val);
	val = CSR_READ(CAVM_EMMCX_HOST_SRS_SRS12(0));
	INFO("  SRS12: 0x%x\n", val);
	val = CSR_READ(CAVM_EMMCX_HOST_SRS_SRS13(0));
	INFO("  SRS13: 0x%x\n", val);
	val = CSR_READ(CAVM_EMMCX_HOST_SRS_SRS14(0));
	INFO("  SRS14: 0x%x\n", val);
	val = CSR_READ(CAVM_EMMCX_HOST_SRS_SRS15(0));
	INFO("  SRS15: 0x%x\n", val);
	val = CSR_READ(CAVM_EMMCX_HOST_SRS_SRS16(0));
	INFO("  SRS16: 0x%x\n", val);
	val = CSR_READ(CAVM_EMMCX_HOST_SRS_SRS17(0));
	INFO("  SRS17: 0x%x\n", val);
	val = CSR_READ(CAVM_EMMCX_HOST_SRS_SRS18(0));
	INFO("  SRS18: 0x%x\n", val);
	val = CSR_READ(CAVM_EMMCX_HOST_SRS_SRS19(0));
	INFO("  SRS19: 0x%x\n", val);
}
#else
static inline void print_regs(const char *)
{
}
#endif
/****************************************************************
 *   Description: Read the CPC 100Mhz reference clock
 *   Input: None
 *   Output: None
 *   Returns: clock tick converted to milliseconds
 *****************************************************************/
static uint64_t get_time_ms(void)
{
	return octeontx_get_dtime_usec(0) / 1000;
}

static void card_power_init(void)
{
#ifdef SD_POWER_GPIO
	int value;

	if (cavm_is_platform(PLATFORM_ASIM))
		return;

	octeontx_gpio_init();

	gpio_set_direction(SD_POWER_GPIO, GPIO_DIR_IN);
	udelay(100);
	value = gpio_get_value(SD_POWER_GPIO);
	debug_emmc("%s: Configuring power GPIO %d, strap is %s\n", __func__, SD_POWER_GPIO,
		   value ? "HIGH" : "LOW");
	octeontx_gpio_config(SD_POWER_GPIO, true, 0, !value);
	mdelay(200);
	octeontx_gpio_config(SD_POWER_GPIO, true, CAVM_GPIO_PIN_SEL_E_EMMC_RST, value);
	mdelay(200);
#endif
}

/******************************************************************************
 *  Description: Initialize the card
 *  Input Parameters: None
 *  Output Parameters: None
 *  Returns: None
 *******************************************************************************/
uint32_t card_init(void)
{
	uint32_t rca = 0;
	uint32_t result  = 0;
	uint32_t argument = 0;
	uint32_t bus_width = 0;

	debug_emmc("EMMC Starting card init\n");

	wait_on_dat_longest_time = 0;

	zeromem(&crd_prop, sizeof(crd_prop));
	zeromem(&last_cmd_resp, sizeof(last_cmd_resp));
	zeromem(&img_txfer_upd, sizeof(img_txfer_upd));
	zeromem(&card_txfer_upd, sizeof(card_txfer_upd));
	zeromem(&last_cmd_framed, sizeof(last_cmd_framed));
	zeromem(&card_reg, sizeof(card_reg));
	zeromem(&blk_ctrl, sizeof(blk_ctrl));

	crd_prop.SdhClock = EMMC_CLOCK50MHZRATE;
	crd_prop.strictErrChk = 0;
	crd_prop.emmc_dma_type = NODMA;
	crd_prop.last_send_cmd_resptype = 0;
	crd_prop.card_state = UNINITIALIZED;

	card_power_init();

	/* Issue a full reset. */
	if (emmc_FullSWReset() != NO_ERROR)
		return SDMMC_INIT_TIMEOUT_ERROR;
	/* HRS00 & HRS02 Setup */
	if (emmc_IPSpecificInit() != NO_ERROR)
		return SDMMC_INIT_TIMEOUT_ERROR;
	/* Card Detection  */
	if (emmc_IsCardInserted() != NO_ERROR)
		return STD_SDMMCNotFound;

	emmc_SetControllerVoltage();
	emmc_SetBusRate(crd_prop.SdhClock, EMMC_CLOCK200KHZRATE);
	emmc_SetDataTimeout(EMMC_CLOCK_27_MULT);
	emmc_EnableDisableIntSources(1);
	emmc_SetDmaMode(NODMA);

	result = identify_card();
	if (result != NO_ERROR)
		return STD_SDMMCNotFound;
	/* Set up State */
	crd_prop.card_state = INITIALIZE;

	/* SD and MMC joint functionality again
	 * At this point we should have our OCR contents.
	 * See if they match the voltage range we choose for the controller
	 */
	result = emmc_CheckVoltageCompatibility((uint32_t)EMMC_VLTGSEL_3_3);
	if (result != NO_ERROR)
		return SDMMCInitializationError;

	/*send CMD2 to get the CID numbers */
	wrapper_SendSetupCommand(STD_MMC_CMD2, 0, EMMC_RESTYPE_R2 | EMMC_136_RES);
	result = get_response(STD_MMC_CMD2, MMC_RESPONSE_R2);
	if (result != NO_ERROR) {
		WARN("%s: CMD2 response failed\n", __func__);
		return SDMMCInitializationError;
	}

	/* Next its CMD3 to assign an RCA to the cards */
	if (crd_prop.SD == TYPE_SD) {
		bus_width = 4;
		argument = 0;
		wrapper_SendSetupCommand(STD_MMC_CMD3, argument,
					 EMMC_RESTYPE_R6 | EMMC_48_RES);
		result = get_response(STD_MMC_CMD3, MMC_RESPONSE_R6);
	} else {
		/* build an RCA for this session. Try to base the RCA on the serial number.
		 * rca is only 16 bits long.
		 */
		rca = (card_reg.cid.serialnum) & 0x0000ffff;
		/* make sure RCA is valid (must be greater than 0) */
		if (!rca)
			rca = 1;
		/* rca occupies high order 16 bits of 32 bit argument. */
		card_reg.rca = rca << 16;

		argument = card_reg.rca;
		wrapper_SendSetupCommand(STD_MMC_CMD3, argument, EMMC_RESTYPE_R1 | EMMC_48_RES);
		result = get_response(STD_MMC_CMD3, MMC_RESPONSE_R1);
	}
	if (result != NO_ERROR) {
		WARN("%s: SD/MMC CMD3 response failed\n", __func__);
		return SDMMCInitializationError;
	}

	/* send CMD13 to check the status of the card
	 * Make sure card is stdby mode
	 */
	result = emmc_CheckCardStatus((uint32_t)0x700, (uint32_t)R1_LOCKEDCARDMASK);
	if (result != NO_ERROR) {
		WARN("%s: Check card status failed\n", __func__);
		return SDMMCInitializationError;
	}

	udelay(1000);
	/* now we are beyond the point where some cards have subtle
	 * non-compliance issues with the spec.
	 * for example, some cards leave the error bits from
	 * unrecognized commands (like 55 & 41) set
	 * until this point - which is correct (since CMD3 was the first
	 * R1 type command). other cards clear them earlier, which is incorrect -
	 * but presents fewer initialization failures.
	 * at this point it is safe, and necessary, to begin rigorously
	 * examining all error status bits.
	 */
	crd_prop.StrictErrorCheck = 1;

	/* Send CMD 9 to retrieve the CSD */
	argument = card_reg.rca;
	wrapper_SendSetupCommand(STD_MMC_CMD9, argument, EMMC_RESTYPE_R2 | EMMC_136_RES);
	result = get_response(STD_MMC_CMD9, MMC_RESPONSE_R2);

	/*send CMD7 to get card into transfer state */
	argument = card_reg.rca;
	wrapper_SendSetupCommand(STD_MMC_CMD7, argument, EMMC_RESTYPE_R1 | EMMC_48_RES);
	result |= get_response(STD_MMC_CMD7, MMC_RESPONSE_R1);

	/*send CMD13 to check the status of the card */
	result |= emmc_CheckCardStatus((uint32_t)0x900, (uint32_t)R1_LOCKEDCARDMASK);
	if (result != NO_ERROR)
		return SDMMCInitializationError;

	/* CMD 16 Set Block Length */
	argument = crd_prop.ReadBlockSize;
	wrapper_SendSetupCommand(STD_MMC_CMD16, argument, EMMC_RESTYPE_R1 | EMMC_48_RES);
	result = get_response(STD_MMC_CMD16, MMC_RESPONSE_R1);
	/* Set the block length for the controller */
	CSR_WRITE(CAVM_EMMCX_HOST_SRS_SRS01(0), argument);

	if (!cavm_is_platform(PLATFORM_ASIM)) {

		result = SetHighSpeedTiming();
		/* send CMD13 to check the status of the card */
		result = emmc_CheckCardStatus((uint32_t)0x900, (uint32_t)R1_LOCKEDCARDMASK);
		if (result != NO_ERROR) {
			WARN("%s: Setting high-speed timing failed\n", __func__);
			return SDMMCInitializationError;
		}

		/* Attempt to Increase Bus width */
		result = emmc_SetBusWidth(bus_width);
		if (result != NO_ERROR)
			WARN("%s: Setting bus width to %d failed\n", __func__, bus_width);

		/*send CMD13 to check the status of the card */
		result |= emmc_CheckCardStatus((uint32_t)0x900, (uint32_t)R1_LOCKEDCARDMASK);
		if (result != NO_ERROR) {
			WARN("%s: check status after bus width failed\n", __func__);
			return SDMMCInitializationError;
		}
	}

	/* Set up State, Ready for Data transfers */
	crd_prop.card_state = READY;

	return NO_ERROR;
}

/******************************************************************************
 *  Description: Initialize global variables
 *  Input Parameters:
 *	rca	RCA value to use
 *	ocr	OCR value to use
 *	is_sd	True for SD card, false for eMMC
 *  Output Parameters: None
 *  Returns: None
 *******************************************************************************/
void fake_card_init(uint16_t rca, uint32_t ocr, bool is_sd)
{
	taac_ns = 0;
	taac_clks = 0;

	if (ocr == 0)
		ocr = 0xc0ff8080;
	if (rca == 0)
		rca = 1;

	crd_prop.strictErrChk = 1;
	crd_prop.ReadBlockSize = SDHC_BLOCK_LEN;
	crd_prop.WriteBlockSize = SDHC_BLOCK_LEN;
	crd_prop.emmc_dma_type = NODMA;
	crd_prop.last_send_cmd_resptype = 0;
	crd_prop.card_state = READY;
	crd_prop.AccessMode = (ocr & OCR_ACCESS_MODE_MASK) == OCR_ACCESS_MODE_SECTOR ?
				SECTOR_ACCESS : BYTE_ACCESS;
	fake_init = true;

	card_reg.ocr = ocr;
	card_reg.rca = rca << 16;
	crd_prop.SD = is_sd ? TYPE_SD : TYPE_MMC;
	INFO("%s: rca: 0x%x, ocr: 0x%x, %s, %s access\n",
	     __func__, rca, ocr,
	     crd_prop.SD == TYPE_SD ? "SD" : "eMMC",
	     crd_prop.AccessMode == SECTOR_ACCESS ? "sector" : "byte");
}

/******************************************************************************
 *  Description: Analyze the response
 *  Input Parameters: None
 *  Output Parameters: None
 *  Returns: None
 *******************************************************************************/
uint32_t get_response(uint32_t cmd, uint32_t response_type)
{
	uint32_t i, temp, temp2, temp3;
	uint32_t result = 0;
	uint32_t *resp = NULL;
	uint32_t m, e;
	uint64_t start_time;
	uint64_t d_time;
	bool timed_out = false;
	int min_loops = 3;

	/* Default to 1 second timeout */
	int timeout_us = 10000000;
#if 0	/* Disabled for now */
	/*
	 * If we know the taac_ns value from chip capabilities then
	 * use that as the timeout value.
	 */
	if (taac_ns) {
		/*
		 * convert nanosecond to microseconds
		 */
		timeout_us = div_round_up(taac_ns, 1000);
		debug_emmc("%s: taac_ns: %u, timeout_us: %d\n", __func__,
			   taac_ns, timeout_us);
		/*
		 * It is recommended to double timeout on block writes (CMD24)
		 */
		if (cmd == STD_MMC_CMD24)
			timeout_us *= 2;
	}
#endif
	start_time = octeontx_get_dtime_usec(0);
	do {
		emmc_isr();
		d_time = octeontx_get_dtime_usec(start_time);
		timed_out = (d_time > timeout_us) && (min_loops-- < 0);
		/* if the command had an error, the command may have aborted
		 * without setting the command complete bit. for example,
		 * if no response is received, then the command is aborted,
		 * the emmc_isr sets the state to FAULT, and command complete
		 * will not assert. check for such a scenario here.
		 */
		if (crd_prop.card_state == FAULT) {
			debug_emmc("%s: MMC driver wait for response set FAULT cmd: %d\n",
				   __func__, emmc_last_cmd);
			print_regs("get_response FAULT state:");
			result = SDMMC_GENERAL_ERROR;
			return result;
		}

		if (last_cmd_resp.CommandComplete) {
			if (response_type != MMC_RESPONSE_R1B) {
				timed_out = false;
				break;
			} else if (last_cmd_resp.TransferComplete) {
				timed_out = false;
				break;
			}
		}
	} while (!timed_out);

	if (timed_out) {
		debug_emmc("%s: start time: %lu, now: %lu, dtime: %lu\n",
			   __func__, start_time, octeontx_get_dtime_usec(0), d_time);
		debug_emmc("%s timed out after %lu us, cmd: %u\n",
			   __func__, d_time, emmc_last_cmd);
		print_regs("get_response timeout");
		return SDMMC_CMD_TIMEOUT;
	}

	/* Read in the Buffers */
	switch (response_type) {
	case MMC_RESPONSE_R1:
	case MMC_RESPONSE_R1B:
		last_cmd_resp.R1_RESP = last_cmd_resp.pBuffer[0];
		break;
	case MMC_RESPONSE_R2: /* This is for CID or CSD register */
	{
		last_cmd_framed.all = CSR_READ(CAVM_EMMCX_HOST_SRS_SRS03(0));
		if (last_cmd_framed.s.cmd_idx == STD_MMC_CMD9) /*CSD */ {
			/* Copy the CSD values from the buffer */
			for (i = 0; i < 4; i++)
				card_reg.csd.csd_value[i] = last_cmd_resp.pBuffer[i];

			/* CRC is stripped so we need to do some shifting */
			resp = &card_reg.csd.csd_value[0];
			for (i = 0; i < 4; i++) {
				resp[i] <<= 8;
				if (i != 3)
					resp[i] |= resp[i + 1] << 24;
			}
			m = UNSTUFF_BITS(resp, 115, 4); /* Multiplier */
			e = UNSTUFF_BITS(resp, 112, 3); /* Time unit */
			taac_ns = div_round_up(taac_exp[e] * taac_mant[m], 10);
			taac_clks = UNSTUFF_BITS(resp, 104, 8) * 100;

			/* Optionally we could record maximum block lengths from the CSD.
			 * But some devices cheat and put incorrect values in this field.
			 * Save off read Block Size, play it safe, for now hard code to 512 Bytes
			 */
			crd_prop.ReadBlockSize = HARD512BLOCKLENGTH;
			/* Save off Write Block Size */
			crd_prop.WriteBlockSize = HARD512BLOCKLENGTH;

			/* Capture Erase Granularity. */
			if (crd_prop.SD == TYPE_SD) {
				/* Check Erase Single Block Enable - Bit 46 */
				if ((card_reg.csd.csd_value[1] >> 14) & 1) {
					crd_prop.EraseSize = crd_prop.WriteBlockSize;
				} else {
					crd_prop.EraseSize = ((card_reg.csd.csd_value[1] >> 7) &
						0x7F) + 1;
					crd_prop.EraseSize *= crd_prop.WriteBlockSize;
				}
			} else /* MMC Card */ {
				crd_prop.EraseSize = ((card_reg.csd.csd_value[1] >> 5) & 0x1F) + 1;
				crd_prop.EraseSize *= (((card_reg.csd.csd_value[1] >> 10) &
					0x1F) + 1);
				crd_prop.EraseSize *= crd_prop.WriteBlockSize;
			}

			/* Now calculate the capacity of this card */
			temp = ((card_reg.csd.csd_value[2] >> 16) & 0xF);   /* Get READ_BL_LEN */
			temp = 1 << temp;  /* Now we have Max Block Length */
			temp2 = ((card_reg.csd.csd_value[1] >> 15) & 0x7) + 2; /* Get C_SIZE_MULT */
			temp2 = 1 << temp2;
			temp3 = ((card_reg.csd.csd_value[1] >> 30) & 0x3);	 /* Get C_SIZE */
			temp3 |= ((card_reg.csd.csd_value[2] & 0x3FF) << 2); /* Get C_SIZE */
			temp3++;
			crd_prop.CardCapacity = temp3 * temp2 * temp; /*Total Size of the card in Bytes*/
		} else /* Assume CID */ {
			/* Copy the CSD values from the buffer */
			for (i = 0; i < 4; i++)
				card_reg.cid.cid_value[i] = last_cmd_resp.pBuffer[i];

			/* Now capture the serial number from the CID - 32 bit number */
			if (crd_prop.SD == TYPE_MMC) {
				card_reg.cid.serialnum = (card_reg.cid.cid_value[0] >> 16) & 0xFFFF;
				card_reg.cid.serialnum |= (card_reg.cid.cid_value[1] << 16);
			} else {
				card_reg.cid.serialnum = (card_reg.cid.cid_value[0] >> 24) & 0xFF;
				card_reg.cid.serialnum |= (card_reg.cid.cid_value[1] << 8);
			}
		}
		break;
	}
	case MMC_RESPONSE_R3:
	{
		card_reg.ocr = last_cmd_resp.pBuffer[0];
		break;
	}
	/* These modes are not supported by the driver */
	case MMC_RESPONSE_R4:
	case MMC_RESPONSE_R5:
	case MMC_RESPONSE_R5B:
		break;
	case MMC_RESPONSE_R6:
	{
		card_reg.rca = last_cmd_resp.pBuffer[0];
		break;
	}
	case MMC_RESPONSE_R7:
	{
		crd_prop.SD_VHS = last_cmd_resp.pBuffer[0];
		break;
	}
	case MMC_RESPONSE_NONE:
	default:
		break;
	}
	return result;
}

/****************************************************************
 *   Description: Interrupt Service Routine for SDMMC controller
 *                Controls flow and catches faults asynchronously.
 *   Input: None
 *   Output: result - command status
 *   Returns: None
 *****************************************************************/
void emmc_isr(void)
{

	srs12_intr_res_t result;
	uint32_t cmderror = 0;
	uint32_t reg_srs15 = 0;
	uint32_t resptype = 0;
	/* that strange mask is all possible error bits in the card stat field. */
	uint32_t   r1_resp_error_bits = 0xfdffc080;

	/*EMMC Host Error/Normal Interrupt Statu Register*/
	result.all = CSR_READ(CAVM_EMMCX_HOST_SRS_SRS12(0));
	last_result.all = result.all;
	if (result.all != 0)
		last_set_result = result;
	last_cmd_resp.int_response.all = result.all;

	CSR_INIT(sts_reg, CAVM_EMMCX_HOST_SRS_SRS09(0));


	/* Check for any error */
	if (result.s.cmd_complete) {
		//debug_emmc("%s: Command %u complete, result: 0x%x\n", __func__,
		//	   emmc_last_cmd, result.all);
		/* if we're in strict error checking mode, and
		 * if the completing command has an R1 or R1B status,
		 * look for any error bits in the card status field
		 */
		if (crd_prop.strictErrChk) {
			resptype = (crd_prop.last_send_cmd_resptype << 8) & EMMC_RESTYPE_MASK;
			if (resptype == EMMC_RESTYPE_R1) {
				/* that strange mask is all possible error bits. */
				cmderror = (CSR_READ(CAVM_EMMCX_HOST_SRS_SRS04(0)) & r1_resp_error_bits);
			}
		} else {
			/* don't examine error because not strict error checking mode or this is not an R1 type of command. */
			cmderror = 0;
		}
	}

	if (result.s.err_intr || cmderror) {
		debug_emmc("%s: Result 0x%x or cmderror 0x%x, cmd: %u\n",
			   __func__, result.all, cmderror, emmc_last_cmd);
		if ((result.s.cmd_tout_err) ||  (result.s.data_tout_err) || cmderror) {
			/* this cleas the command inhibit flag in sd_present_state_1. */
			emmc_CMDSWReset();
			/* this clears the data inhibit flag and stops mclk. */
			emmc_DataSWReset();
			debug_emmc("%s: cmd_tout_error: 0x%x, data_tout_err: 0x%x\n",
				   __func__, result.s.cmd_tout_err, result.s.data_tout_err);
		} else if (result.s.auto_cmd12_err) {
			debug_emmc("%s: cmd12 error\n", __func__);
			/* acmd 12 error requires examining a separate error status register: */
			reg_srs15 = CSR_READ(CAVM_EMMCX_HOST_SRS_SRS15(0));

			/* any acmd12 error requires an sd host controller reset
			 * because there's no way to know if the command was processed.
			 * this cleas the command inhibit flag in sd_present_state_1.
			 */
			emmc_CMDSWReset();
			/* this clears the data inhibit flag and stops mclk. */
			emmc_DataSWReset();

			/* clear the acmd12 error bits. */
			CSR_WRITE(CAVM_EMMCX_HOST_SRS_SRS15(0), reg_srs15);
		}

		/* clear the general error status bits */
		emmc_clear_interrupts(result.all);

		INFO("%s err_intr: %x result: %x sts_reg: %x last_cmd: %d\n",
			 __func__, result.s.err_intr, result.all, sts_reg.u,
			 emmc_last_cmd);

		crd_prop.card_state = FAULT;
		/* done with handling an error condition. */
		/* nothing more to do. */
		return;
	}

	/* Has the Command completed? If so read the response register */
	if (result.s.cmd_complete) {
		/* Indicate that the response has been read */
		last_cmd_resp.CommandComplete = 1;
		last_cmd_resp.pBuffer[0] = CSR_READ(CAVM_EMMCX_HOST_SRS_SRS04(0));
		last_cmd_resp.pBuffer[1] = CSR_READ(CAVM_EMMCX_HOST_SRS_SRS05(0));
		last_cmd_resp.pBuffer[2] = CSR_READ(CAVM_EMMCX_HOST_SRS_SRS06(0));
		last_cmd_resp.pBuffer[3] = CSR_READ(CAVM_EMMCX_HOST_SRS_SRS07(0));
	}

	if (result.s.txfr_complete) {
		//debug_emmc("%s: Transfer complete\n", __func__);
		/* Indicate that the response has been read */
		last_cmd_resp.TransferComplete = 1;
	}

	/* Are we DMA enabled? */
	if ((crd_prop.emmc_dma_type)) {
		if (result.s.txfr_complete) {
#ifdef TBD
			if (crd_prop.OpModeAttribs.OpMode == NORMAL_MODE) {
				img_txfer_upd.img_cur_sz_txfer += (img_txfer_upd.NumBlocks * HARD512BLOCKLENGTH);
				/* Update the image read status when the whole image is read                 */
				if (img_txfer_upd.img_cur_sz_txfer == img_txfer_upd.img_size)
					img_txfer_upd.img_txfer_status = 1;

				crd_prop.card_state = READY;
			} else {
				/* STREAMING_MODE
				 * xfrcomp interrupt occurs only once for the streaming that is a
				 * the end of all transfers
				 */
				crd_prop.card_state = READY;
			}
#endif
		}
	}

	/* Clear interrupts */
	emmc_clear_interrupts(result.all);
	if (crd_prop.emmc_dma_type == NODMA) {
		/* Handle State based interrupts XFRCOMP, BUFRDRDY, BUFWRRDY */
		switch (crd_prop.card_state) {
		case WRITE:
		{
			if (result.s.buf_wr_rdy) {
				emmc_writefifo();

				img_txfer_upd.img_cur_sz_txfer += (card_txfer_upd.WordIndex * 4);
				/* Update the image read status when the whole image is written */
				if (img_txfer_upd.img_cur_sz_txfer == img_txfer_upd.img_size)
					img_txfer_upd.img_txfer_status = 1;

				/* Are we done sending all of data? */
				if (card_txfer_upd.TransWordSize == card_txfer_upd.WordIndex)
					crd_prop.card_state = DATATRAN;
			}
			break;
		}
		case READ:
		{
			if (result.s.buf_rd_rdy) {
				emmc_readfifo();

				img_txfer_upd.img_cur_sz_txfer += (card_txfer_upd.WordIndex * 4);
				/* Update the image read status when the whole image is read */
				if (img_txfer_upd.img_cur_sz_txfer == img_txfer_upd.img_size)
					img_txfer_upd.img_txfer_status = 1;

				/* Are we done sending all of data? */
				if (card_txfer_upd.TransWordSize == card_txfer_upd.WordIndex)
					crd_prop.card_state = DATATRAN;
			}
			break;
		}
		case DATATRAN:
		{
			/* Wait for Transfer Complete Signal */
			if (result.s.txfr_complete)
				crd_prop.card_state = READY;
			break;
		}
		default:
			break;
		}
	}
}

/****************************************************************
 *   Description: Reads the contents of the read fifo (512 words)
 *   Input: None
 *   Output: buffer will contain the contents of the read fifo
 *   Returns: None
 *****************************************************************/
void emmc_readfifo(void)
{
	volatile uint32_t data;
	uint32_t index = 0;
	uint32_t data_index;

	volatile uint32_t *pBuffer;

	pBuffer = &data;
	for (index = 0; index < card_txfer_upd.StartDiscardWords; index++)
		*pBuffer = CSR_READ(CAVM_EMMCX_HOST_SRS_SRS08(0));

	/* Read Requested Data */
	for (data_index = 0;
	     index < card_txfer_upd.TransWordSize - card_txfer_upd.EndDiscardWords;
	     index++, data_index++)
		((uint32_t *)((unsigned long)(card_txfer_upd.LocalAddr)))[data_index] =
			CSR_READ(CAVM_EMMCX_HOST_SRS_SRS08(0));

	/* Ignore Trailing Bytes */
	for (; index < card_txfer_upd.TransWordSize; index++)
		*pBuffer = CSR_READ(CAVM_EMMCX_HOST_SRS_SRS08(0));

	card_txfer_upd.WordIndex = index;
}

/****************************************************************
 *   Description: Writes 2048 bytes (512 words) to the FIFO
 *   Input: None
 *   Output: None
 *   Returns: None
 *****************************************************************/
void emmc_writefifo(void)
{
	uint32_t index;

	if (card_txfer_upd.StartDiscardWords || card_txfer_upd.EndDiscardWords) {
		WARN("%s: Not a complete block!\n", __func__);
	}

	for (index = 0; index < card_txfer_upd.TransWordSize; index++)
		CSR_WRITE(CAVM_EMMCX_HOST_SRS_SRS08(0),
			((uint32_t *)((unsigned long)(card_txfer_upd.LocalAddr)))[index]);
	card_txfer_upd.WordIndex = index;
}

/****************************************************************
 *   Description: Identifies which type of card was inserted
 *   Input: None
 *   Output: WTP recoginized Success/Fail return code
 *   Returns: None
 *****************************************************************/
uint32_t identify_card(void)
{
	uint32_t error = 0;
	uint32_t result = 0;
	uint32_t argument = 0;
	uint32_t HighCapacity = 0;
	uint32_t attempts = 0;
	uint32_t F8_Return = 0;
	uint64_t start, timeout = 100000;
	bool timedout;

	print_regs("About to send CMD0");
	crd_prop.SD = TYPE_SD;
	mdelay(5);
	/* Send CMD0 (GO_IDLE_STATE) to get card into idle state */
	argument = 0xf0f0f0f0;
	wrapper_SendSetupCommand(STD_MMC_CMD0, argument,
		(EMMC_RESTYPE_NONE | EMMC_NO_RES));
	error =  get_response(STD_MMC_CMD0, MMC_RESPONSE_NONE);
	if (error != NO_ERROR) {
		INFO("%s: Going to pre-idle state failed\n", __func__);
	}
	argument = 0;
	wrapper_SendSetupCommand(STD_MMC_CMD0, argument,
		(EMMC_RESTYPE_NONE | EMMC_NO_RES));
	error =  get_response(STD_MMC_CMD0, MMC_RESPONSE_NONE);
	if (error) {
		print_regs("CMD0 error");
		mdelay(100);
		/* Try again.  Send CMD0 (GO_IDLE_STATE) to get card into idle state */
		wrapper_SendSetupCommand(STD_MMC_CMD0, argument,
			(EMMC_RESTYPE_NONE | EMMC_NO_RES));
		error =  get_response(STD_MMC_CMD0, MMC_RESPONSE_NONE);
	}
	/* Check for High Capacity Cards First
	 * This do while sending SD specific command, not necessarily for MMC
	 */
	argument = (SDVHS_2_7_TO_3_6 << SDVHSARGSHIFT) | SDVHSCHECKPATTERN;
	do {
		/* Start with SD
		 * Try High Voltage range first:
		 * Note: this is a valid command for SD cards in the idle state.
		 * for mmc cards in the idle state, this is not valid, so no reponse is generated.
		 * however, even some SD cards may miss this command, so that's why it is
		 * sent out twice. See SD spec, step 4 of figure 9 in card init and id section.
		 */
		wrapper_SendSetupCommand(STD_SD_CMD8, argument, EMMC_RESTYPE_R7 | EMMC_48_RES);

		/* get the response (if any) to XLLP_SD_CMD8. */
		result = get_response(STD_SD_CMD8, MMC_RESPONSE_R7);
		if (crd_prop.card_state == FAULT) {
			crd_prop.SD = TYPE_MMC;
			break;
		}
		if (result == NO_ERROR)
			F8_Return = 1;
		else
			F8_Return = 0;

		/* Check for High Capacity Cards */
		HighCapacity = (crd_prop.SD_VHS == argument);
		attempts++;
	} while (!HighCapacity && (attempts < 3));

	debug_emmc("%s: Card type: %u\n", __func__, crd_prop.SD);
	/* First time, pass NULL argument to get back values card is compatible with
	 * Send appropriate CMD Sequence to Identify the type of card inserted
	 * Set HCS and voltage window for ACMD41 to start initialization.
	 */
	argument = HOST_CAPACITY_SUPPORTED | VDD_WINDOW_V33;
	card_reg.ocr = 0; /* Make sure to clear out OCR. */

	/*  Wait for the Response based on the CommandComplete interrupt signal */
	start = octeontx_get_dtime_usec(0);
	attempts = 0;
	do {
		switch (crd_prop.SD) {
		case TYPE_SD: /* Assume SD */
			wrapper_SendSetupCommand(STD_SD_CMD55, 0, EMMC_RESTYPE_R1 | EMMC_48_RES);
			error = get_response(STD_SD_CMD55, MMC_RESPONSE_R1);
			if (error)
				WARN("%s: Error getting response from CMD55\n", __func__);
			wrapper_SendSetupCommand(STD_SD_ACMD41, argument, EMMC_RESTYPE_R3 |
				EMMC_48_RES);
			error = get_response(STD_SD_ACMD41, MMC_RESPONSE_R3);
			if (error)
				WARN("%s: Error getting response from ACMD41\n", __func__);
			if (card_reg.ocr == 0)
				crd_prop.SD = TYPE_MMC;
			else
				result = NO_ERROR;
			break;
		case TYPE_MMC: /* Assume MMC */
			timeout = 1000000; // Try for 1 second per the JEDEC spec
			wrapper_SendSetupCommand(STD_MMC_CMD1, argument, EMMC_RESTYPE_R3 | EMMC_48_RES);
			error = get_response(STD_MMC_CMD1, MMC_RESPONSE_R3);

			if (card_reg.ocr == 0)
				result = STD_NotFoundError;
			else
				result = NO_ERROR;
			break;
		default:
			return STD_NotFoundError;
		}

		timedout = octeontx_get_dtime_usec(start) > timeout && attempts++ > 3;
		if ((card_reg.ocr & 0x80000000) == 0x80000000)
			break;
		else if (timedout)  {
			WARN("%s: timed out\n", __func__);
			return STD_NotFoundError;
		}
		udelay(1000);
	} while (!timedout);

	if (error != NO_ERROR) {
		WARN("%s: Not found\n", __func__);
		return STD_NotFoundError;
	}

	/* Assign Access Mode. */
	if (!F8_Return && (crd_prop.SD == TYPE_SD))
		crd_prop.AccessMode = BYTE_ACCESS;
	else if ((card_reg.ocr & OCR_ACCESS_MODE_MASK) == OCR_ACCESS_MODE_SECTOR)
		crd_prop.AccessMode = SECTOR_ACCESS;
	else
		crd_prop.AccessMode = BYTE_ACCESS;
	return result;
}

/****************************************************************
 *   Description: Checks to make sure that the OCR register of
 *                the device supports the voltage range that was
 *                selected for the controller
 *   Input: None
 *   Output: None
 *   Returns: None
 *****************************************************************/
uint32_t emmc_CheckVoltageCompatibility(uint32_t ctrlr_voltage)
{
	/* Check SD vs MMC */
	if (crd_prop.SD == TYPE_SD) {
		switch (ctrlr_voltage) {
		case EMMC_VLTGSEL_3_3:
			if (card_reg.ocr & MMC_OCR_VOLTAGE_3_3_TO_3_6)
				return NO_ERROR;
			break;
		case EMMC_VLTGSEL_3_0:
			if (card_reg.ocr & MMC_OCR_VOLTAGE_1_8_TO_3_3)
				return NO_ERROR;
			break;
		case EMMC_VLTGSEL_1_8:
			if (card_reg.ocr & MMC_OCR_VOLTAGE_1_8)
				return NO_ERROR;
			break;
		default:
			return SDMMCDeviceVoltageNotSupported;
		}
	} else {
		if ((card_reg.ocr & MMC_OCR_VOLTAGE_ALL) == MMC_OCR_VOLTAGE_ALL)
			return NO_ERROR;
	}
	return SDMMCDeviceVoltageNotSupported;
}

/****************************************************************
 *   Description: Gets the status of the card by issuing CMD 13.
 *                The return from the routine is based on a check
 *                against the expected value which is passed in.
 *   Input: R1_Resp_Match - card response match.
 *          Mask - mask to remove undesired bits
 *   Output: None
 *   Returns: Result of the card status
 *****************************************************************/
uint32_t emmc_CheckCardStatus(uint32_t resp_to_match, uint32_t mask)
{
	uint32_t argument;
	uint32_t result;
	uint32_t cardstatus;

	/*send CMD13 to check the status of the card */
	debug_emmc("%s(CMD%u, RCA: 0x%x)\n", __func__, resp_to_match, card_reg.rca);
	argument = card_reg.rca;
	wrapper_SendSetupCommand(STD_MMC_CMD13, argument, EMMC_RESTYPE_R1 | EMMC_48_RES);
	result = get_response(STD_MMC_CMD13, MMC_RESPONSE_R1);

	/* Mask out undesired check bits */
	cardstatus = (last_cmd_resp.R1_RESP) & mask;
	debug_emmc("%s: response: 0x%x, masked response: 0x%x, mask: 0x%x\n",
		   __func__, last_cmd_resp.R1_RESP, cardstatus, mask);

	if ((cardstatus == resp_to_match) && (result == NO_ERROR))
		return NO_ERROR;
	else
		return STD_TimeOutError;
}

/****************************************************************
 *   Description: Reverses the byte order in an array
 *   Input: Buffer and size to reverse
 *   Output: Reversed buffer
 *   Returns: none
 *****************************************************************/
static void reverse_bytes(uint8_t *buf, uint32_t size)
{
	int i, j;
	uint8_t temp;

	i = 0;
	j = size - 1;
	while (j > i) {
		temp = buf[i];
		buf[i] = buf[j];
		buf[j] = temp;
		i++;
		j--;
	}
}

/****************************************************************
 *   Description: reads the scr value
 *   Input: None
 *   Output: None
 *   Returns: status
 *****************************************************************/
uint32_t emmc_SDGet_SCR(void)
{
	uint32_t argument = 0;
	uint32_t org_blk_size;
	volatile uint32_t result = NO_ERROR;
	emmc_blk_cntl ctrl_blk;
	union cavm_emmcx_host_srs_srs15 srs15;

	/* Issue ACMD51 to read in the SCR */
	wrapper_SendSetupCommand(STD_SD_CMD55, card_reg.rca, MM4_RT_R1 | EMMC_48_RES);
	result = get_response(STD_SD_CMD55, MMC_RESPONSE_R1);

	/* Set up State */
	crd_prop.card_state = READ;

	/* This requires a transfer over the data lines. */
	ctrl_blk.all = CSR_READ(CAVM_EMMCX_HOST_SRS_SRS01(0));
	org_blk_size = ctrl_blk.s.xfr_blksz;
	ctrl_blk.s.blk_cnt = 1;
	ctrl_blk.s.xfr_blksz = sizeof(scr_layout_t);
	card_txfer_upd.StartDiscardWords = 0;
	/*(512 - 8) / 4; 126 words - SCR is only 2 words of data. */
	card_txfer_upd.EndDiscardWords = 0;
	/* ReadBlockSize / 4; Total Transfer Size including pre and post bytes */
	card_txfer_upd.TransWordSize = 2;
	card_txfer_upd.LocalAddr = (uintptr_t)((&card_reg.scr.scr_value[0]));
	/* Stores Index of Current write position */
	card_txfer_upd.WordIndex = 0;

	if (crd_prop.emmc_dma_type == SDMA) {
		ctrl_blk.s.dma_bufsz = MM4_512_HOST_DMA_BDRY;
		/*TBD why writing 32 bit address, LW - mask - 0xFFFFFFFF*/
		CSR_WRITE(CAVM_EMMCX_HOST_SRS_SRS01(0), (uintptr_t)(&card_reg.scr.scr_value[0]));
	}

	CSR_WRITE(CAVM_EMMCX_HOST_SRS_SRS01(0), ctrl_blk.all);

	result = wrapper_SendDataCommandNoAuto12(STD_SD_ACMD51, argument,
		MM4_SINGLE_BLOCK_TRAN, MM4_CARD_TO_HOST_DATA,
		MM4_RT_R1 | EMMC_48_RES);
	if (result != NO_ERROR) {
		ctrl_blk.s.xfr_blksz = org_blk_size;
		CSR_WRITE(CAVM_EMMCX_HOST_SRS_SRS01(0), ctrl_blk.all);
		return result;
	}

	/* Wait for the Read to Complete */
	result = get_status_within(EMMC_READ_SCR_TIMEOUT_MS);
	if (result != NO_ERROR) {
		ctrl_blk.s.xfr_blksz = org_blk_size;
		CSR_WRITE(CAVM_EMMCX_HOST_SRS_SRS01(0), ctrl_blk.all);
		return result;
	}

	/* Restore back to original blk size.        */
	ctrl_blk.s.xfr_blksz = org_blk_size;
	CSR_WRITE(CAVM_EMMCX_HOST_SRS_SRS01(0), ctrl_blk.all);
	/* Get the Card Response */
	result = get_response(STD_SD_ACMD51, MMC_RESPONSE_R1);
	if ((result != NO_ERROR) || (last_cmd_resp.R1_RESP != 0x920))
		emmc_SendStopCommand(); /* Send a stop command */
	crd_prop.card_state = READY;

	/* send CMD13 to check the status of the card
	 * Make sure card is transfer mode
	 */
	result |= emmc_CheckCardStatus((uint32_t)0x900, (uint32_t)R1_LOCKEDCARDMASK);
	if (result != NO_ERROR) {
		ctrl_blk.s.xfr_blksz = org_blk_size;
		CSR_WRITE(CAVM_EMMCX_HOST_SRS_SRS01(0), ctrl_blk.all);
		return SDMMC_SWITCH_ERROR;
	}

	/* Swap the byte ordering */
	reverse_bytes((uint8_t *)&card_reg.scr.scr_value[0],
		      sizeof(scr_layout_t));
	srs15.u = CSR_READ(CAVM_EMMCX_HOST_SRS_SRS15(0));
	srs15.s.cmd23e = !!(card_reg.scr.scr_value[1] & 2);
	CSR_WRITE(CAVM_EMMCX_HOST_SRS_SRS15(0), srs15.u);

	return NO_ERROR;
}

/****************************************************************
 *   Description: setup the card structure and call
 *                senddatacmdnoAuto12
 *   Input: None
 *   Output: None
 *   Returns: Result
 *****************************************************************/
uint32_t wrapper_SendDataCommandNoAuto12(uint32_t cmd,
	uint32_t argument, uint32_t blk_type, uint32_t data_dir,
	uint32_t resp_type)
{
	uint32_t result = NO_ERROR;
	uint32_t blk_count = 0;

	/* no need to clear out any fault state that may be left
	 * over from a previously failed transaction.
	 * that's because the caller has set State to read or
	 * write before calling here.
	 */
	last_cmd_resp.CommandComplete = 0;
	last_cmd_resp.TransferComplete = 0;

	/* save the info for use by the isr: */
	card_txfer_upd.RespType = (resp_type >> 8) & 0x000000ff;
	card_txfer_upd.cmd = cmd;
	emmc_last_cmd = cmd;

	/*Block count is disabled for ADMA2 */
	blk_count = (crd_prop.emmc_dma_type == ADMA2) ? 0 : 1;

	/*TBD DMA support*/
	result = emmc_SendDataCommandNoAuto12(cmd, argument, blk_type, data_dir,
		resp_type & 0x000000ff, 0, blk_count);
	return result;
}

/****************************************************************
 *   Description: setup the card structure and call senddatacmd
 *   Input: None
 *   Output: None
 *   Returns: Result
 *****************************************************************/

uint32_t wrapper_SendDataCommand(uint32_t cmd, uint32_t argument,
	uint32_t blk_type, uint32_t data_dir, uint32_t resp_type)
{
	uint32_t result = NO_ERROR;
	uint32_t fAutoCmd23En;

	/* no need to clear out any fault state that may be left
	 * over from a previously failed transaction.
	 * that's because the caller has set State to read or
	 * write before calling here.
	 */

	/* No Response to the command yet */
	last_cmd_resp.CommandComplete = 0;
	last_cmd_resp.TransferComplete = 0;

	/* save the info for use by the isr: */
	card_txfer_upd.RespType = (resp_type >> 8) & 0x000000ff;
	card_txfer_upd.cmd = cmd;
	emmc_last_cmd = cmd;

	if (((crd_prop.emmc_dma_type == ADMA2) && (crd_prop.SD == TYPE_MMC)) ||
	    ((crd_prop.SD == TYPE_SD && card_reg.scr.scr_value[1] & (1 << 1)) &&
	    (blk_type == MM4_MULTI_BLOCK_TRAN)))
		fAutoCmd23En = 1;
	else
		fAutoCmd23En = 0;

	result = emmc_SendDataCommand(cmd, argument, blk_type, data_dir,
		resp_type & 0x000000ff, 0, fAutoCmd23En,
		((crd_prop.RPMB_Enable) ? 1 : 0));
	return result;
}

/****************************************************************
 *   Description: setup the card structure and call sendsetupcmd
 *   Input: None
 *   Output: None
 *   Returns: Result
 *****************************************************************/
uint32_t wrapper_SendSetupCommand(uint32_t cmd, uint32_t argument, uint32_t resp_type)
{
	uint32_t result = NO_ERROR;

	debug_emmc("%s(%u, 0x%x, 0x%x)\n", __func__, cmd, argument, resp_type);
	/* clear out any fault status that may be left over from a previously
	 * failed transaction.
	 */
	crd_prop.card_state = READY;

	/* No Response to the command yet */
	last_cmd_resp.CommandComplete = 0;
	last_cmd_resp.TransferComplete = 0;

	/* save the info for use by the isr: */
	card_txfer_upd.RespType = (resp_type >> 8) & 0x000000ff;
	card_txfer_upd.cmd = cmd;
	emmc_last_cmd = cmd;

	/* clear out any bits not for the SD_CMD.RES_TYPE field */
	//debug_emmc("In wrapper_SendSetupCommand for cmd::%d argument::%x\n",cmd,argument);
	result = emmc_SendSetupCommand(cmd, argument, (resp_type & 0x000000ff));
	return result;
}

/****************************************************************
 *   Description: checks the status within the given milliseconds
 *   Input: Number of millisceonds to loop around
 *   Output: None
 *   Returns: Result
 *****************************************************************/
uint32_t get_status_within(uint32_t msecs)
{
	uint64_t start = octeontx_get_dtime_usec(0);
	uint32_t loops = 0;
	do {
		emmc_isr();

		if ((crd_prop.card_state == FAULT) || (crd_prop.card_state == READY))
			return NO_ERROR;
		udelay(1);
	} while (octeontx_get_dtime_usec(start) < msecs * 1000 || loops++ < 2); /* detection loop with timeout */

	debug_emmc("%s: Timed out, status: 0x%lx, cmd: %u\n", __func__,
		   CSR_READ(CAVM_EMMCX_HOST_SRS_SRS12(0)), emmc_last_cmd);
	return STD_TimeOutError;
}

/****************************************************************
 *   Description: send stop command for read and write
 *   Input: Number of millisceonds to loop around
 *   Output: None
 *   Returns: Result
 *****************************************************************/
void emmc_SendStopCommand(void)
{
	if (crd_prop.card_state == READ) {
		/* Send a CMD 12 to stop transmissions. */
		emmc_SendSetupCommand(STD_MMC_CMD12, 0, EMMC_RESTYPE_R1 | EMMC_48_RES);
		get_response(STD_MMC_CMD12, MMC_RESPONSE_R1);
	}
	if (crd_prop.card_state == WRITE) {
		/*  Send a CMD 12 to stop transmissions. */
		emmc_SendSetupCommand(STD_MMC_CMD12, 0,
			EMMC_RESTYPE_R1 | EMMC_RT_BUSY | EMMC_48_RES_WITH_BUSY);
		get_response(STD_MMC_CMD12, MMC_RESPONSE_R1B);
	}
}

/****************************************************************
 *   Description: Sets the Bus width highest bus width supported
 *   Input: width
 *   Output: None
 *   Returns: Result
 *****************************************************************/
uint32_t emmc_SetBusWidth(uint32_t width)
{
	uint32_t result = NO_ERROR;
	uint8_t  sdcard_width = 0;
	emmc_cntl1 emmc_ctrl1;

	volatile mmc_cmd6_struct mmc_cmd6;

	emmc_ctrl1.all = CSR_READ(CAVM_EMMCX_HOST_SRS_SRS10(0));
	/* Check supported configurations first */
	if (crd_prop.SD == TYPE_SD) {
		/* Check do we support 4 bit mode? */
		result = emmc_SDGet_SCR();
		/* Irrespective of the input 'Width', max bus width that SD supports is 4 bit  */
		sdcard_width = ((card_reg.scr.scr_value[1] >> 16) & 0xF);

		if (sdcard_width == SCRSD4BITMODE) {
			/* Issue ACMD 6 to set the bus width */
			wrapper_SendSetupCommand(STD_SD_CMD55, card_reg.rca, EMMC_RESTYPE_R1 |
				EMMC_48_RES);
			result = get_response(STD_SD_CMD55, MMC_RESPONSE_R1);
			wrapper_SendSetupCommand(STD_SD_ACMD6, SD_CMD6_4BITMODE, EMMC_RESTYPE_R1 |
				EMMC_48_RES);
			result = get_response(STD_SD_ACMD6, MMC_RESPONSE_R1);
		}
	} else {
		/* Issue CMD 6 to set BUS WIDTH bits in EXT_CSD register byte 183 */
		mmc_cmd6.s.Access = EXT_CSD_ACCESS_WRITE_BYTE;   /*Write Byte */
		mmc_cmd6.s.CmdSet = 0;						   /* Don't Care */
		mmc_cmd6.s.Index = BUS_WIDTH_MMC_EXT_CSD_OFFSET; /* Choose Bus Width */
		mmc_cmd6.s.Reserved0 = 0;
		mmc_cmd6.s.Reserved1 = 0;
		mmc_cmd6.s.Value = (width == 8) ? (uint8_t)2 : (uint8_t)1; /* Choose 8 bit mode.*/

		wrapper_SendSetupCommand(STD_MMC_CMD6, mmc_cmd6.all,
			EMMC_RESTYPE_R1 |  EMMC_RT_BUSY | EMMC_48_RES_WITH_BUSY);
		result = get_response(STD_MMC_CMD6, MMC_RESPONSE_R1B);
	}

	/* send CMD13 to check the status of the card
	 * Make sure card is transfer mode
	 * Make sure card is transfer mode
	 */
	result |= emmc_CheckCardStatus((uint32_t)0x900, (uint32_t)R1_LOCKEDCARDMASK);
	if (result != NO_ERROR) {
		crd_prop.card_state = READY;
		return SDMMC_SWITCH_ERROR;
	}

	/* Now change the controller to boost bus width */
	if (crd_prop.SD == TYPE_SD) {
		if (sdcard_width == SCRSD4BITMODE) {
			emmc_ctrl1.s.datawidth = 1; /* Move to 4-bit mode */
			CSR_WRITE(CAVM_EMMCX_HOST_SRS_SRS10(0), emmc_ctrl1.all);
			return NO_ERROR;
		}
	}
	if (width == 8)
		emmc_ctrl1.s.ex_data_width = 1; /* Move to 8-bit mode. */
	else
		emmc_ctrl1.s.datawidth = 1; /* Move to 4-bit mode */
	CSR_WRITE(CAVM_EMMCX_HOST_SRS_SRS10(0), emmc_ctrl1.all);

	return NO_ERROR;
}

/****************************************************************
 *   Description: stops the card with cmd0 and shuts the clock
 *   Input: None
 *   Output: None
 *   Returns: Result
 *****************************************************************/
uint32_t emmc_CardShutdown(void)
{
	emmc_cntl1    emmc_ctrl1;

	if (fake_init)
		return NO_ERROR;

	debug_emmc("%s: Shutting down\n", __func__);
	/* Initialize Flash Properties */
	emmc_ctrl1.all = CSR_READ(CAVM_EMMCX_HOST_SRS_SRS10(0));

	/* send a CMD0, go idle here so the card gets into the idle state.
	 * even though that forces any subsequent software, like the os,
	 * to rediscover and reinit the card, this is worth doing. by
	 * putting the card into the idle state, it will be able to handle
	 * any bootrom flash probe operation if a platform reset occurs
	 * before the OS has completely initialized the device.
	 */

	/* Send CMD0 (GO_IDLE_STATE) to get card into idle state */
	emmc_SendSetupCommand(STD_MMC_CMD0, 0, EMMC_RESTYPE_NONE | EMMC_NO_RES);
	get_response(STD_MMC_CMD0, MMC_RESPONSE_NONE);

	/* Disable Bus Power */
	emmc_ctrl1.s.buspwr = 0;
	CSR_WRITE(CAVM_EMMCX_HOST_SRS_SRS10(0), emmc_ctrl1.all);

	/* Stop Bus Clock */
	emmc_StopBusClock();

	/* Mask all interrupts */
	emmc_EnableDisableIntSources(0);

	/* Disable internal clocks. */
	emmc_StopInternalBusClock();
	return NO_ERROR;
}

/****************************************************************
 *   Description: If the Card supports partitioning (eSD) this
 *                routine will switch to the appropriate partition
 *                by using extended partition command set CMD37.
 *   Input: part_num - Contains the partition Number to switch to
 *                and enable bits for the boot partitions.
 *   Output: None
 *   Returns: Result
 *****************************************************************/
uint32_t change_parition(uint32_t part_num)
{
	uint32_t result = NO_ERROR;

	volatile mmc_cmd6_struct mmc_cmd6;

	crd_prop.RPMB_Enable = 0;

	/* CN10xxx platform doesn't support DMA data to CPC RAM so force it as NODMA mode */
	crd_prop.emmc_dma_type = NODMA;
#ifdef TBD
	SetDMAMode();
#endif

	/* Must set partition */
	if (crd_prop.SD == TYPE_SD) {
		return NO_ERROR;
#ifdef TBD
		/* CMD 43 Select Partition */
		/* Cmd = XLLP_eSD_CMD43;
		 * argument = PartitionNumber << 24;
		 * partition number goes in bits [31:24], rest are 0's
		 */

		/* emmc_SendSetupCommand(pSDMMCP, Cmd, EMMC_CMD_TYPE_NORMAL, argument,
		 * EMMC_RT_R1 | EMMC_RT_BUSY | EMMC_48_RES_WITH_BUSY);
		 * result = emmc_Interpret_Response(MMC_RESPONSE_R1B,
		 * MMC_RESPONSE_R1B_TIMEOUT);
		 */
#endif
	} else {
		/* Issue CMD 6 to clear PARTITION_ACCESS bits in EXT_CSD register byte 179 */
		mmc_cmd6.s.Access = EXT_CSD_ACCESS_CLEAR_BITS;		  /* Clear bits */
		mmc_cmd6.s.CmdSet = 0;	  /* Don't Care */
		mmc_cmd6.s.Index = PARTITION_CONFIG_MMC_EXT_CSD_OFFSET; /* Choose Boot Config */
		mmc_cmd6.s.Reserved0 = 0;
		mmc_cmd6.s.Reserved1 = 0;
		mmc_cmd6.s.Value = PARTITION_ACCESS_BITS; /* Clear out Partition Access bits */

		emmc_SendSetupCommand(STD_MMC_CMD6, mmc_cmd6.all,
			EMMC_RESTYPE_R1 |  EMMC_RT_BUSY | EMMC_48_RES_WITH_BUSY);
		result = get_response(STD_MMC_CMD6, MMC_RESPONSE_R1B);

		/* Now issue CMD 6 again to set the right bits. */
		mmc_cmd6.s.Access = EXT_CSD_ACCESS_SET_BITS;			  /* Clear bits */
		mmc_cmd6.s.CmdSet = 0;  ///* Don't Care */
		mmc_cmd6.s.Index = PARTITION_CONFIG_MMC_EXT_CSD_OFFSET;// /* Choose Boot Config */
		mmc_cmd6.s.Reserved0 = 0;
		mmc_cmd6.s.Reserved1 = 0;
		mmc_cmd6.s.Value = part_num; //Set the correct partition

		wrapper_SendSetupCommand(STD_MMC_CMD6, mmc_cmd6.all,
			EMMC_RESTYPE_R1 |  EMMC_RT_BUSY | EMMC_48_RES_WITH_BUSY);
		result |= get_response(STD_MMC_CMD6, MMC_RESPONSE_R1B);
	}

	result |= emmc_CheckCardStatus((uint32_t)0x900, (uint32_t)R1_LOCKEDCARDMASK);
	if (result != NO_ERROR) {
		crd_prop.card_state = READY;
		return SDMMC_SWITCH_ERROR;
	}
	return NO_ERROR;
}

/****************************************************************
 *   Description: Reads the given block off of the SD/MMC card and
 *                into LocalAddr or empty buffer
 *   Input: None
 *   Output: LocalAddr will contain the contents of the block
 *   Returns: None
 *****************************************************************/
uint32_t emmc_read_blocks(void)
{
	uint32_t argument;
	uint32_t result = NO_ERROR;
	emmc_blk_cntl emmc_blk;

#ifdef TBD
	ADMA_DESCRIPTOR admaDesc[NO_ADMA_TX_DESCS];
#endif
	/*clear the pre and post bytes buffer. for debug purposes
	 */
#ifdef TBD
	memset((void *)admaDesc, 0, NO_ADMA_TX_DESCS * sizeof(ADMA_DESCRIPTOR));
#endif

	/* Must set MMC NUMBLK */
	emmc_blk.all = CSR_READ(CAVM_EMMCX_HOST_SRS_SRS01(0));
	/* blk_cnt is used in PIO/SDMA mode */
	emmc_blk.s.blk_cnt = card_txfer_upd.NumBlocks;

	if (crd_prop.emmc_dma_type == SDMA) {
		emmc_blk.s.dma_bufsz = MM4_512_HOST_DMA_BDRY;
		CSR_WRITE(CAVM_EMMCX_HOST_SRS_SRS00(0), card_txfer_upd.LocalAddr);
	}
	/* debug_emmc("%s: Writing 0x%x to SRS01\n", __func__, emmc_blk.all); */
	CSR_WRITE(CAVM_EMMCX_HOST_SRS_SRS01(0), emmc_blk.all);

	/* Set up State
	 */
	crd_prop.card_state = READ;

	/* Set up the loading address, to consistent with the reading routine,
	 *  always read from the beginning of a block
	 */
	argument = card_txfer_upd.card_addr;
	/* In sector mode addressing; all addresses need to be specified
	 *  as block offsets.
	 */
	if (crd_prop.AccessMode == SECTOR_ACCESS)
		argument /= HARD512BLOCKLENGTH;
	else if (crd_prop.AccessMode == BYTE_ACCESS)
		argument = argument - (argument % HARD512BLOCKLENGTH);

	// Send Read Command
	result = wrapper_SendDataCommand(STD_MMC_CMD17, argument,
					 MM4_SINGLE_BLOCK_TRAN, MM4_CARD_TO_HOST_DATA,
					 EMMC_RESTYPE_R1 | EMMC_48_RES | EMMC_48_CRC |
					 EMMC_48_CHECK_INDEX);
	if (result != NO_ERROR) {
		debug_emmc("%s: wrapper_SendDataCommand returned 0x%x\n",
			   __func__, result);
		return result;
	}

	result = get_status_within(1000);
	if (result != NO_ERROR) {
		debug_emmc("%s: get_status_within returned 0x%x\n",
			   __func__, result);
		return STD_TimeOutError;
	}

	/* This state entered if ISR detected an error. */
	if (crd_prop.card_state == FAULT) {
		debug_emmc("%s: card state is FAULT\n", __func__);
		return STD_ReadError;
	}

	/* Get the Card Response */
	result = get_response(STD_MMC_CMD17, MMC_RESPONSE_R1);
	if ((result != NO_ERROR) ||
	    ((last_cmd_resp.R1_RESP & R1_LOCKEDCARDMASK) != 0x900) ||
	     (crd_prop.card_state == FAULT)) {
		debug_emmc("%s: get_response returned 0x%x\n",
			   __func__, result);
		result = STD_ReadError;
		crd_prop.card_state = FAULT;
		/* Send a stop command
		 */
		emmc_SendStopCommand();
	} else {
		crd_prop.card_state = READY;
	}
	/* debug_emmc("%s: Returning %u\n", __func__, result); */
	return result;
}

/****************************************************************
 *   Description: Writes the required number of blocks to
 *                CardAddress
 *   Input: None
 *   Output: Address starting with CardAddress will contain
 *           content from LocalAddress
 *   Returns: None
 *****************************************************************/
uint32_t emmc_WriteBlocks(void)
{
	uint32_t argument;
	uint32_t result = NO_ERROR;
	emmc_blk_cntl emmc_blk;

#ifdef TBD
	ADMA_DESCRIPTOR admaDesc[NO_ADMA_TX_DESCS];
#endif
	/*clear the pre and post bytes buffer. for debug purposes
	 */
#ifdef TBD
	memset((void *)admaDesc, 0, NO_ADMA_TX_DESCS * sizeof(ADMA_DESCRIPTOR));
#endif

	/* Must set MMC NUMBLK */
	emmc_blk.all = CSR_READ(CAVM_EMMCX_HOST_SRS_SRS01(0));
	/* blk_cnt is used in PIO/SDMA mode */
	emmc_blk.s.blk_cnt = card_txfer_upd.NumBlocks;

	if (crd_prop.emmc_dma_type == SDMA) {
		emmc_blk.s.dma_bufsz = MM4_512_HOST_DMA_BDRY;
		CSR_WRITE(CAVM_EMMCX_HOST_SRS_SRS00(0), card_txfer_upd.LocalAddr);
	}
	CSR_WRITE(CAVM_EMMCX_HOST_SRS_SRS01(0), emmc_blk.all);

	/* Set up State */
	crd_prop.card_state = WRITE;

	/* Do a CMD 24 single block write */
	argument = card_txfer_upd.card_addr;
	if (crd_prop.AccessMode == SECTOR_ACCESS)
		/* In sector mode addressing; all addresses need to be specified as
		 * ^block offsets.
		 */
		argument /= HARD512BLOCKLENGTH;
	else if (crd_prop.AccessMode == BYTE_ACCESS) {
		debug_emmc("%s: Write in byte access mode\n", __func__);
		argument = argument - (argument % crd_prop.WriteBlockSize);
	}

	result = wrapper_SendDataCommand(STD_MMC_CMD24, argument,
		MM4_SINGLE_BLOCK_TRAN, MM4_HOST_TO_CARD_DATA,
		EMMC_RESTYPE_R1 | EMMC_48_RES_WITH_BUSY |
		EMMC_48_CRC | EMMC_48_CHECK_INDEX);
	if (result != NO_ERROR) {
		debug_emmc("%s: send data cmd24 returned 0x%x\n", __func__, result);
		return result;
	}

	/* It is recommended to double wait time for write operations */
	result = get_status_within(EMMC_WRITE_BLOCK_TIMEOUT_MS);

	if (result != NO_ERROR) {
		debug_emmc("%s: %d get_status_within failed result: %d\n", __func__, __LINE__, result);
	}
	/* This state entered if ISR detected an error. */
	if (crd_prop.card_state == FAULT)
		return SDMMCWriteError;

	/* Get the Card Response
	 */
	result = get_response(STD_MMC_CMD24, MMC_RESPONSE_R1);
	if ((result != NO_ERROR) || (crd_prop.card_state == FAULT) ||
		((last_cmd_resp.R1_RESP & R1_NOMASK) != 0x900)) {
		result = STD_WriteError;
		crd_prop.card_state = FAULT;
		/* Send a stop command
		 */
		ERROR("%s emmc_blk.all: 0x%x last_cmd_resp: %x\n",
			  __func__,  emmc_blk.all, last_cmd_resp.R1_RESP);

		emmc_SendStopCommand();
		return result;
	}

	/* the write data transfer completed...now must wait for the card to
	 * assert the ready line.
	 * (the ready status from the last data transfer is meaningless here
	 * because it was left over from the write command that initiated the data transfer.)
	 * section 7.7.2 of the mmc 4.3 spec defines a formula for the timeout value.
	 * for now, just use a constant.  Samsung KLMxGxxExM defines max write
	 * timeout as 600 ms
	 */
	/* FIXME: implement the formula, which is based on info from the CSD...
	 */
	if (!emmc_WaitReady(1000)) {
		result = STD_WriteError;
		ERROR("%s:%d FAULT\n", __func__, __LINE__);
		crd_prop.card_state = FAULT;
		/* Send a stop command
		 */
		emmc_SendStopCommand();
		return result;
	}

	crd_prop.card_state = READY;
	return NO_ERROR;
}


/****************************************************************
 *   Description: Writes the required number of blocks to
 *                CardAddress
 *   Input: timeout in ms
 *   Output: Address starting with CardAddress will contain
 *           content from LocalAddress
 *   Returns: None
 *****************************************************************/

/* TBD: change this to use an r1b type... */
uint32_t emmc_WaitReady(uint32_t timeout)
{
	uint32_t writecomplete = 0;
	uint32_t result = NO_ERROR;
	bool	 dat_idle = false;
	uint32_t argument = card_reg.rca;
	uint64_t start_time = get_time_ms();

	CSR_INIT(sts_reg, CAVM_EMMCX_HOST_SRS_SRS09(0));

	/* issue a series of get status commands until the (new) status
	 * indicates ready.
	 * limit the amount of time to wait to the input parameter
	 * TimeOutMilliSec
	 */
	do {
		sts_reg.u = CSR_READ(CAVM_EMMCX_HOST_SRS_SRS09(0));

		/* Check to see if data line is still active indicating
		 * indicating write is still in progress
		 */
		if (!sts_reg.s.dla) {
			dat_idle = true;
			break;
		}

	} while (get_time_ms() - start_time < timeout);

	if (!dat_idle) {
		ERROR("emmc_WaitReady timedout waiting for DAT\n");
	}

	do {
		/* send CMD13 to check the status of the card */
		wrapper_SendSetupCommand(STD_MMC_CMD13, argument,
			EMMC_RESTYPE_R1 | EMMC_48_RES);

		result = get_response(STD_MMC_CMD13, MMC_RESPONSE_R1);
		if (result != NO_ERROR) {
			WARN("eMMC get response timeout\n");
			break; // failed to complete transaction
		}

		/* examine the new status, which was just extracted from the response
		 * field of the get stauts command.
		 * card_status:READY_FOR_DATA asserted. write is complete.
		 */
		if ((last_cmd_resp.R1_RESP & 0x00000100) == 0x00000100) {
			writecomplete = 1;
			break;
		}
		udelay(1);
		/* timeout is in mseconds */
	} while (get_time_ms() - start_time < timeout);

	if (get_time_ms() - start_time > wait_on_dat_longest_time) {
		wait_on_dat_longest_time = get_time_ms() - start_time;
		debug_emmc("MMC: longest write delay: %ld ms\n",
			   wait_on_dat_longest_time);
	}

	if (!writecomplete) {
		ERROR(" %s timed out resp: %x timeout: %d\n",
			  __func__, last_cmd_resp.R1_RESP, timeout);
	}

	return writecomplete;
}

/******************************************************************************
 *  Description: Sets the Bus speed to high speed timing
 *  Input Parameters: None
 *  Output Parameters: None
 *  Returns: NO_ERROR or failed response
 *******************************************************************************/
uint32_t SetHighSpeedTiming(void)
{
	volatile mmc_cmd6_struct mmc_cmd6;
	emmc_cntl1 emmc_ctrl1;
	uint32_t result = NO_ERROR;

	emmc_ctrl1.all = CSR_READ(CAVM_EMMCX_HOST_SRS_SRS10(0));

	/* Check supported configurations first */
	if (crd_prop.SD != TYPE_SD) {
		/* Issue CMD 6 to set BUS WIDTH bits in EXT_CSD register byte 183 */
		mmc_cmd6.s.Access = EXT_CSD_ACCESS_WRITE_BYTE;
		mmc_cmd6.s.CmdSet = 0;
		mmc_cmd6.s.Index = HS_TIMING_MMC_EXT_CSD_OFFSET;
		mmc_cmd6.s.Reserved0 = 0;
		mmc_cmd6.s.Reserved1 = 0;
		mmc_cmd6.s.Value = 1; /* Choose High Speed Timing. */

		wrapper_SendSetupCommand(STD_MMC_CMD6, mmc_cmd6.all,
			EMMC_RESTYPE_R1 | EMMC_RT_BUSY | EMMC_48_RES_WITH_BUSY);
			result = get_response(STD_MMC_CMD6, MMC_RESPONSE_R1B);
	} else {
		emmc_SetBusRate(crd_prop.SdhClock, EMMC_CLOCK12_5MHZRATE);
		return NO_ERROR;
	}

	/* send CMD13 to check the status of the card */
	/* Make sure card is transfer mode */
	result |= emmc_CheckCardStatus((uint32_t)0x900, R1_LOCKEDCARDMASK);
	if (result == NO_ERROR) {
		emmc_ctrl1.s.hispeed = 1;
		CSR_WRITE(CAVM_EMMCX_HOST_SRS_SRS10(0), emmc_ctrl1.all);
	} else {
		crd_prop.card_state = READY;
		/* Failed, stick with lower speed */
		emmc_SetBusRate(crd_prop.SdhClock, EMMC_CLOCK12_5MHZRATE);
		return NO_ERROR;
	}

	/* Now change the speed to max through the controller  */
	emmc_SetBusRate(crd_prop.SdhClock, EMMC_CLOCK50MHZRATE);

	return NO_ERROR;
}
