/*
 * Copyright (C) 2021 Marvell International Ltd.
 *
 * SPDX-License-Identifier:	 BSD-3-Clause
 * https://spdx.org/licenses
 */

#ifndef __PPR_H__
#define __PPR_H__

#ifdef PLAT_cnf10kb
	#define PPR_MRR_HEADER_ADDR		0x00F94000
#else
	#define PPR_MRR_HEADER_ADDR		0x01F94000
#endif

#define PPR_MRR_HEADER_SIZE		0x00001000
#define PPR_MRR_HEADER_END		(PPR_MRR_HEADER_ADDR + PPR_MRR_HEADER_SIZE)

// MRR (Mode Register Read) region statistics for PPR registers
#define MRR_REGION_ADDR			(PPR_MRR_HEADER_END)
#define MRR_REGION_SIZE			0x0000F000
#define MRR_REGION_END			(MRR_REGION_ADDR + MRR_REGION_SIZE)

// PPR region statistic list of MRR record with counter
#define PPR_REGION_ADDR			(MRR_REGION_END)
#define PPR_REGION_SIZE			0x00010000
#define PPR_REGION_END			(PPR_REGION_ADDR + PPR_REGION_SIZE)

#define MRR_POLL_INTERVAL		(24*60*60*1000)
#define MRR_CYCLES				30

#define FLASH_ERASE_MARK	0xFFFFFFFF

/*
 * struct mrr - Descriptor for MRR registers layout
 * MR16-MR18 Address of Row with Max Errors and Error Count
 */
struct mrr {
	uint32_t channel   : 5;
	uint32_t rank	   : 1;		// Ranks 0/1
	uint32_t device    : 3;		// 5 Devices
	uint32_t bank_gr   : 3;
	uint32_t bank_addr : 2;
	uint32_t row_num   : 18;
} __packed;

typedef int32_t mrr_t;

struct ppr {
	union {
		mrr_t record;
		struct mrr mrr;
	};
	uint32_t record_counter;
};

typedef int64_t ppr_t;

/*
 * Buffer for PPR statistics
 *
 * head_mrr - index of the first free record
 * head_ppr - index of the first free record
 * mrr_cycle - cycle counter for timer
 * ppr_bitmap - bitmap of repaired records
 */
struct ppr_mrr_header {
	uint32_t head_mrr;
	uint32_t head_ppr;
	uint32_t mrr_cycle;
	uint8_t  ppr_bitmap[0];
};

#define MRR_OFFSET(idx)	(MRR_REGION_ADDR + idx*sizeof(struct mrr))
#define PPR_OFFSET(idx)	(PPR_REGION_ADDR + idx*sizeof(struct ppr))

#define MRR_IDX(addr) ((addr - MRR_REGION_ADDR) / sizeof(struct mrr))
#define PPR_IDX(addr) ((addr - PPR_REGION_ADDR) / sizeof(struct ppr))

void ppr_fw_init(void);

#endif // __PPR_H__
