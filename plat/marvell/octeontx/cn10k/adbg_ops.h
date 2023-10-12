/* SPDX-License-Identifier: BSD-3-Clause
 * Copyright(C) 2022 Marvell.
 */

#ifndef __ADBG_OPS_H__
#define __ADBG_OPS_H__

/* This header file is shared between libcnxk-debug pages, kernel module and firmware.
 * Any updates to this header file should be synced across all code.
 */

#ifndef PLAT_OCTEONTX_ADBG
#define PLAT_OCTEONTX_ADBG 0xc2000ffe
#endif

typedef struct {
	struct {
		uint8_t num;
	} core;
	struct {
		uint32_t l1d_size;
		uint32_t l2_size;
		uint32_t l1i_size;
		uint16_t l1d_sets;
		uint16_t l1d_ways;
		uint16_t l2_sets;
		uint16_t l2_ways;
	} cache;
	struct {
		uint8_t num;
		uint8_t n_cntr;
	} dss;
	struct {
		uint8_t num;
		uint8_t n_cntr;
	} tad;
	struct {
		uint8_t num;
		uint8_t n_cntr;
	} apa;
	struct {
		uint8_t num;
		uint8_t n_cntr;
	} msw;
	struct {
		uint8_t num;
		uint8_t n_cntr;
	} iobn;
	struct {
		uint8_t num;
		uint8_t n_arb;
	} ncb;
} adbg_config_t;

#define ADBG_ARB_NAME_MAX_LEN 8
#define ADBG_MAX_NCB          5
#define ADBG_MAX_ARB          16

typedef struct {
	uint64_t major : 32;
	uint64_t minor : 32;
} adbg_version_t;

#define ADBG_VERSION_MAJOR	1UL
#define ADBG_VERSION_MINOR	2UL
#define ADBG_VERSION		{.major = ADBG_VERSION_MAJOR, .minor = ADBG_VERSION_MINOR}

typedef struct {
	uint64_t coreclk;
	uint64_t meshclk;
	uint64_t sclk;
	uint64_t dficlk;
	uint64_t netclk;
	uint64_t ioclk;
} adbg_clk_t;

typedef enum {
	ADBG_SUBSYS_GENERIC,
	ADBG_SUBSYS_CACHE,
	ADBG_SUBSYS_DSS,
	ADBG_SUBSYS_TAD,
	ADBG_SUBSYS_APA,
	ADBG_SUBSYS_MSW,
	ADBG_SUBSYS_IOBN,
	ADBG_SUBSYS_NCB,
} adbg_subsys_t;

typedef enum {
	ADBG_GENERIC_OP_HANDSHAKE,
	ADBG_GENERIC_OP_VERSION_GET,
	ADBG_GENERIC_OP_CLK_GET,
	ADBG_GENERIC_OP_CONFIG_GET,
} adbg_generic_op_t;

typedef enum {
	ADBG_CACHE_OP_SNAPSHOT,
} adbg_cache_op_t;

typedef enum {
	ADBG_DSS_OP_COUNTER_INIT,
	ADBG_DSS_OP_COUNTER_EVENTMASK_SET,
	ADBG_DSS_OP_COUNTER_ENABLE,
	ADBG_DSS_OP_COUNTER_DISABLE,
	ADBG_DSS_OP_COUNTER_START,
	ADBG_DSS_OP_COUNTER_STOP,
	ADBG_DSS_OP_COUNTER_SNAPSHOT,
	ADBG_DSS_OP_FREERUN_COUNTER_ENABLE,
	ADBG_DSS_OP_FREERUN_COUNTER_DISABLE,
} adbg_dss_op_t;

typedef enum {
	ADBG_TAD_OP_COUNTER_EVENT_SELECT,
	ADBG_TAD_OP_COUNTER_CLEAR,
	ADBG_TAD_OP_COUNTER_SNAPSHOT,
} adbg_tad_op_t;

typedef enum {
	ADBG_APA_OP_COUNTER_ENABLE,
	ADBG_APA_OP_COUNTER_DISABLE,
	ADBG_APA_OP_COUNTER_CLEAR,
	ADBG_APA_OP_COUNTER_SNAPSHOT,
} adbg_apa_op_t;

typedef enum {
	ADBG_MSW_OP_COUNTER_ENABLE,
	ADBG_MSW_OP_COUNTER_DISABLE,
	ADBG_MSW_OP_COUNTER_CLEAR,
	ADBG_MSW_OP_COUNTER_SNAPSHOT,
} adbg_msw_op_t;

typedef enum {
	ADBG_IOBN_OP_COUNTER_EVENT_SELECT,
	ADBG_IOBN_OP_COUNTER_ENABLE,
	ADBG_IOBN_OP_COUNTER_CLEAR,
	ADBG_IOBN_OP_COUNTER_DISABLE,
	ADBG_IOBN_OP_COUNTER_SNAPSHOT,
} adbg_iobn_op_t;

typedef enum {
	ADBG_NCB_OP_COUNTER_SNAPSHOT,
	ADBG_NCB_OP_ARB_MAP_GET,
} adbg_ncb_op_t;

typedef struct {
	uint64_t core : 8;
	uint64_t ramid : 8;
} adbg_cache_arg_t;

typedef struct {
	union {
		struct {
			uint64_t num : 8;
			uint64_t mask : 56;
		} cntr;
		uint64_t u;
	};
} adbg_dss_arg_t;

typedef struct {
	union {
		struct {
			uint64_t sel : 8;
			uint64_t num : 8;
		} cntr;
		uint64_t u;
	};
} adbg_tad_arg_t;

typedef struct {
	union {
		struct {
			uint64_t sel : 8;
			uint64_t num : 8;
			uint64_t cls : 3;
			uint64_t ctl : 12;
		} cntr;
		uint64_t u;
	};
} adbg_iobn_arg_t;

typedef struct {
	union { /* Arg 1 passed to firmware via SMC */
		struct {
			uint64_t subsys : 8;
			uint64_t op : 8;
		};
		uint64_t u1;
	};
	union { /* Arg 2 passed to firmware via SMC */
		adbg_cache_arg_t cache;
		adbg_dss_arg_t dss;
		adbg_tad_arg_t tad;
		adbg_iobn_arg_t iobn;
		uint64_t u2;
	};
	union { /* Arg 3 passed to firmware via SMC */
		uint64_t u3;
	};
	union { /* Arg 4 passed to firwware via SMC */
		uint64_t u4;
	};
	struct { /* Args passed to kernel. Not passed to FW via SMC */
		void *usr_mem;
		uint64_t usr_mem_sz;
	};
} adbg_arg_t;

#endif
