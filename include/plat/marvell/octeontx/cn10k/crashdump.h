/*
 * Copyright (c) 2022 Marvell.
 *
 * SPDX-License-Identifier:     BSD-3-Clause
 * https://spdx.org/licenses
 */

#ifndef __CRASHDUMP_H__
#define __CRASHDUMP_H__
#include <context.h>

#define DEFAULT_CRASHDUMP_SPIBASE	0x16E0000
#define DEFAULT_CRASHDUMP_SPISIZE	0x00100000

#define CRASHDUMP_SIGNATURE      0x50445243 /*  "CRDP" */
#define CRASHDUMP_VERSION        0x0001

#define CRASHDUMP_TYPE_HALT		0x00
#define CRASHDUMP_TYPE_AP_CONTEXT	0x01
#define CRASHDUMP_TYPE_CRASH_LOGS	0x02
#define CRASHDUMP_TYPE_CPER		0x03

#define ERROR_STR_MAXLEN		80

#define VAR_LEN		4
#define MAX_LOG_LEN	2048
#define MAX_GIC_PENDR	4

/*
 * DO NOT MODIFY BELOW STRUCTURES
 * Create new structures with new version number if any modification is needed
 */

/* Crash dump block */
struct crashdump_block {
	uint32_t   signature;
	uint16_t   version;
	uint8_t    checksum;       /* entire block must sum to zero */
	uint8_t    sequence;       /* order number of the block */
	uint16_t   reserved;       /* reserved for future use */

	uint16_t   data_type;
	uint32_t   data_size;
	uint8_t    data[VAR_LEN];  /* contains data described in below struct's */
} __attribute__((__packed__));

struct cn10k_cpu_context {
	uint64_t mpidr_el1;
	uint64_t rsvd0;
	/* GP regs in secure context */
	gp_regs_t sec_gpregs_ctx;
	/* GP regs in non-secure context */
	gp_regs_t nsec_gpregs_ctx;
	/* System registers in EL3 */
	el3_state_t el3state_ctx;
	/* System registers in EL1 */
	el1_sysregs_t el1_sysregs_ctx;
	el0isr_gp_regs_t el0isr_gpregs_ctx;
	el0isr_sys_regs_t el0isr_sysregs_ctx;
	/* GIC CPU interface registers */
	uint64_t icc_ctlr_el3;
	uint64_t icc_hppir0_el1;
	uint64_t icc_hppir1_el1;
	/* Only SPI pend state */
	uint64_t gicd_ispendr[MAX_GIC_PENDR];
} __attribute__((packed, aligned(16)));

typedef struct cn10k_cpu_context cn10k_cpu_context_t;

uint8_t dump_to_console();
uint8_t set_dump_to_console(uint8_t enable);
uint8_t set_dump_to_flash(uint8_t enable);

int crashdump_init(void *fdt);

int crashdump_add(uint8_t type, void *data, uint32_t size);

#define CRASH_HDR_SIZE        		(sizeof(struct crashdump_block))
#define SIZEOF_CRASHDUMP_BLK(datasz)	(uint16_t) (CRASH_HDR_SIZE - VAR_LEN + datasz)

#endif //__CRASHDUMP_H__
