/*
 * Copyright (C) 2016-2020 Marvell International Ltd.
 *
 * SPDX-License-Identifier:     BSD-3-Clause
 * https://spdx.org/licenses
 */

#ifndef __OCTEONTX_RAS_H__
#define __OCTEONTX_RAS_H__

#if RAS_EXTENSION

#include <lib/el3_runtime/context_mgmt.h>
#include <lib/extensions/ras.h>
#include <services/sdei.h>
#include <octeontx_irqs_def.h>
#include <octeontx_sdei.h>
#include <octeontx_common.h>
#include "octeontx_board_cfg.h"

/* DEBUG_RAS determines depth of debug detail:
 * when DEBUG==0, all is disabled
 * when DEBUG==1, multiplier selects:
 * 0 for suppressing RAS debug even on DEBUG=1 builds;
 * 1 for normally verbose DEBUG=1 operation;
 * 2,3.. for increasingly verbose chatter
 */
#define DEBUG_RAS (DEBUG * 1)

#ifndef noprintf
/* tell GCC to check code sanity, even when emitting no debug code */
__attribute__ ((format (printf, 1, 2)))
static inline int noprintf(const char *fmt, ...)
{
	return 0;
}
#define noprintf noprintf
#endif

#if DEBUG_RAS
# define debug_ras(...) printf(__VA_ARGS__)
#else
# define debug_ras(...) noprintf(__VA_ARGS__)
#endif

#if DEBUG_RAS >= 2
# define debug2ras(...) printf(__VA_ARGS__)
#else
# define debug2ras(...) noprintf(__VA_ARGS__)
#endif

#if DEBUG_RAS >= 3
# define debug3ras(...) printf(__VA_ARGS__)
#else
# define debug3ras(...) noprintf(__VA_ARGS__)
#endif

#ifndef LINUX_CPER_H

/*
 * Severity definition for error_severity in struct cper_record_header
 * and section_severity in struct cper_section_descriptor
 * (copied from linux/cper.h)
 */
enum {
	CPER_SEV_RECOVERABLE,
	CPER_SEV_FATAL,
	CPER_SEV_CORRECTED,
	CPER_SEV_INFORMATIONAL,
};

/* cper_sec_mem_err[_old] validation_bits (copied from linux/cper.h) */
#define CPER_MEM_VALID_ERROR_STATUS		0x0001
#define CPER_MEM_VALID_PA			0x0002
#define CPER_MEM_VALID_PA_MASK			0x0004
#define CPER_MEM_VALID_NODE			0x0008
#define CPER_MEM_VALID_CARD			0x0010
#define CPER_MEM_VALID_MODULE			0x0020
#define CPER_MEM_VALID_BANK			0x0040
#define CPER_MEM_VALID_DEVICE			0x0080
#define CPER_MEM_VALID_ROW			0x0100
#define CPER_MEM_VALID_COLUMN			0x0200
#define CPER_MEM_VALID_BIT_POSITION		0x0400
#define CPER_MEM_VALID_REQUESTOR_ID		0x0800
#define CPER_MEM_VALID_RESPONDER_ID		0x1000
#define CPER_MEM_VALID_TARGET_ID		0x2000
#define CPER_MEM_VALID_ERROR_TYPE		0x4000
#define CPER_MEM_VALID_RANK_NUMBER		0x8000
#define CPER_MEM_VALID_CARD_HANDLE		0x10000
#define CPER_MEM_VALID_MODULE_HANDLE		0x20000


#define CPER_ARM_VALID_MPIDR			0x0001
#define CPER_ARM_VALID_AFFINITY_LEVEL		0x0002
#define CPER_ARM_VALID_RUNNING_STATE		0x0004
#define CPER_ARM_VALID_VENDOR_INFO		0x0008

#define CPER_ARM_INFO_VALID_MULTI_ERR		0x0001
#define CPER_ARM_INFO_VALID_FLAGS		0x0002
#define CPER_ARM_INFO_VALID_ERR_INFO		0x0004
#define CPER_ARM_INFO_VALID_VIRT_ADDR		0x0008
#define CPER_ARM_INFO_VALID_PHYSICAL_ADDR	0x0010

/* ARM Processor Error Section, UEFI v2.7 sec N.2.4.4 */
struct cper_sec_proc_arm {
	uint32_t	validation_bits;
	uint16_t	err_info_num;		/* Number of Processor Error Info */
	uint16_t	context_info_num;	/* Number of Processor Context Info Records*/
	uint32_t	section_length;
	uint8_t		affinity_level;
	uint8_t		reserved[3];		/* must be zero */
	uint64_t	mpidr;
	uint64_t	midr;
	uint32_t	running_state;		/* Bit 0 set - Processor running. PSCI = 0 */
	uint32_t	psci_state;
} __packed;

/* ARM Processor Error Information Structure (copied from linux/cper.h) */
struct cper_arm_err_info {
	uint8_t		version;
	uint8_t		length;
	uint16_t	validation_bits;
	uint8_t		type;
	uint16_t	multiple_error;
	uint8_t		flags;
	uint64_t	error_info;
	uint64_t	virt_fault_addr;
	uint64_t	physical_fault_addr;
} __packed;

/* Old Memory Error Section UEFI 2.1, 2.2 (copied from linux/cper.h) */
struct cper_sec_mem_err_old {
	uint64_t	validation_bits;
	uint64_t	error_status;
	uint64_t	physical_addr;
	uint64_t	physical_addr_mask;
	uint16_t	node;
	uint16_t	card;
	uint16_t	module;
	uint16_t	bank;
	uint16_t	device;
	uint16_t	row;
	uint16_t	column;
	uint16_t	bit_pos;
	uint64_t	requestor_id;
	uint64_t	responder_id;
	uint64_t	target_id;
	uint8_t		error_type;
} __packed;

/* Memory Error Section UEFI >= 2.3 (copied from linux/cper.h )*/
struct cper_sec_mem_err {
	uint64_t	validation_bits;
	uint64_t	error_status;
	uint64_t	physical_addr;
	uint64_t	physical_addr_mask;
	uint16_t	node;
	uint16_t	card;
	uint16_t	module;
	uint16_t	bank;
	uint16_t	device;
	uint16_t	row;
	uint16_t	column;
	uint16_t	bit_pos;
	uint64_t	requestor_id;
	uint64_t	responder_id;
	uint64_t	target_id;
	uint8_t		error_type;
	uint8_t		reserved;
	uint16_t	rank;
	uint16_t	mem_array_handle;	/* card handle in UEFI 2.4 */
	uint16_t	mem_dev_handle;		/* module handle in UEFI 2.4 */
} __packed;
#endif // LINUX_CPER_H

#define OTX2_GHES_ERR_RING_SIG ((int)'M' << 24 | 'R' << 16 | 'V' << 8 | 'L')

#define OTX2_GHES_ERR_REC_FRU_TEXT_LEN 32

/* N.2.4.4 ARM Processor Error Section */
struct processor_error {
	struct cper_sec_proc_arm desc;
	struct cper_arm_err_info info;
};

struct otx2_ghes_err_record {
	union {
		struct processor_error       core;
		struct cper_sec_mem_err_old  mcc;
		struct cper_sec_mem_err_old  mdc;
		struct cper_sec_mem_err_old  lmc;
		struct cper_sec_mem_err_old  dss;
		struct cper_sec_mem_err_old  tad;
	} u;
	uint32_t severity; /* CPER_SEV_xxx */
	char fru_text[OTX2_GHES_ERR_REC_FRU_TEXT_LEN];
};

/* This is shared with Linux sdei-ghes driver */
struct otx2_ghes_err_ring {
	uint32_t volatile head;
	uint32_t volatile tail;
	uint32_t size;       /* ring size */
	uint32_t sig;        /* set to OTX2_GHES_ERR_RING_SIG if initialized */
	/* ring of records */
	struct otx2_ghes_err_record records[1] __aligned(8);
};


struct otx2_ghes_err_record *otx2_begin_ghes(ras_config_t *rc, const char *name,
			struct otx2_ghes_err_ring **ringp);

void otx2_send_ghes(struct otx2_ghes_err_record *rec,
			struct otx2_ghes_err_ring *err_ring, int event);

void otx2_map_ghes(ras_config_t *rc);

bool err_ring_init(struct otx2_ghes_err_ring *err_ring, int len, int entries);

#endif // RAS_EXTENSION

#endif // __OCTEONTX_RAS_H__
