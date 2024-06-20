/*
 * Copyright (c) 2023 Marvell.
 *
 * SPDX-License-Identifier:     BSD-3-Clause
 * https://spdx.org/licenses
 *
 */

#include <stdio.h>
#include "inttypes.h"
#include <debug.h>
#include <arch.h>
#include <platform_def.h>
#include <octeontx_common.h>
#include <plat_board_cfg.h>
#include <plat_scfg.h>
#include <plat_cn20k_configuration.h>
#include <octeontx_security.h>
#include <octeontx_dram.h>
#include <octeontx_utils.h>
#include <octeontx_ecam.h>

//#include "cavm-csrs-ap.h"
#include "cavm-csrs-iobn.h"
#include "cavm-csrs-pccpf.h"
#include "cavm-csrs-pem.h"
#include "cavm-csrs-smmu.h"
#include "cavm-csrs-sam.h"
#include "cavm-csrs-tad_cmn.h"
#include "cavm-csrs-tad.h"
#include "cavm-csrs-pem.h"

#define MAX_ASC_REGIONS 24

#define CCS_ATTR_SEC_BIT_POS		0
#define CCS_ATTR_MAND_BIT_POS		1
#define CCS_ATTR_FIXD_BIT_POS		2
#define CCS_ATTR_PRESERVE_BIT_POS	3

#define CCS_ATTR_SEC_BIT_MASK		(1 << CCS_ATTR_SEC_BIT_POS)
#define CCS_ATTR_MAND_BIT_MASK		(1 << CCS_ATTR_MAND_BIT_POS)
#define CCS_ATTR_FIXD_BIT_MASK		(1 << CCS_ATTR_FIXD_BIT_POS)
#define CCS_ATTR_PRESERVE_BIT_MASK	(1 << CCS_ATTR_PRESERVE_BIT_POS)

#define ASC_DEF_SIZE_MASK		((1 << 24) - 1)

typedef struct ccs_region {
	ccs_region_index_t number;
	uint8_t asc_index;
	uint8_t free;
	uint16_t attr;
	uint64_t start;
	uint64_t end;
	uint64_t rsvd_memsz;
} ccs_region_t;

struct ccs_region ccs_map[MAX_ASC_REGIONS] = {
	/* Secure-Non preserve memory used by ATF */
	[SEC_ASC0] = {
		.free = 0,
		.attr = CCS_ATTR_SEC_BIT_MASK | CCS_ATTR_MAND_BIT_MASK | CCS_ATTR_FIXD_BIT_MASK,
		},
	/* Non-Secure-Non preserve memory for ECP */
	[NSEC_M_ASC0] = {
		.free = 0,
		.attr = CCS_ATTR_MAND_BIT_MASK,
		},
	/* Non-Secure-Non preserve memory for uboot and linux */
	[NSEC_M_ASC1] = {
		.free = 0,
		.attr = CCS_ATTR_MAND_BIT_MASK,
		},
	/* Non-Secure-Non preserve memory for LMT lines */
	[NSEC_0_LMT] = {
		.free = 1,
		.attr = 0,
		},
	/* User defined non secure preserve memory */
	[NSEC_P_ASC1] = {
		.free = 1,
		.attr = 0,
		},
};

void dump_ccs_region_config(void)
{
	int index;
	cavm_sam_asc_regionx_attr_t asc_attr;
	cavm_sam_asc_regionx_offset_t asc_offset;
	ccs_region_t *region;
	uint64_t start, end;

	for (index = 0; index < MAX_ASC_REGIONS; index++) {
		region = &ccs_map[index];
		if (!region->free) {
			VERBOSE("ASC region %d Free %d\n", index, region->free);
			VERBOSE("Start 0x%" PRIx64 " End 0x%" PRIx64 " Reserved MemSz 0x%" PRIx64 "\n",
				region->start, region->end, region->rsvd_memsz);
			VERBOSE("Secure %d Fixed %d Mandatory %d\n",
				region->attr & CCS_ATTR_SEC_BIT_MASK,
				region->attr & CCS_ATTR_FIXD_BIT_MASK,
				region->attr & CCS_ATTR_MAND_BIT_MASK);

			start = region->start;
			end = region->end;
			asc_offset.u = CSR_READ(CAVM_SAM_ASC_REGIONX_OFFSET(index));
			asc_attr.u = CSR_READ(CAVM_SAM_ASC_REGIONX_ATTR(index));
			VERBOSE("%d: DMC_MASK = 0x%x, OFFSET = 0x%x\n",
				 index, asc_attr.s.dss_mask, asc_offset.s.offset);

			switch (index) {
			case SEC_ASC0:
				NOTICE("Secure Non Preserve Memory Region: "
				"0x%" PRIx64 " to 0x%" PRIx64 " (%" PRId64 "MB)\n", start, end,
				((end - start + 1) >> 20));
				break;
			case NSEC_M_ASC0:
				NOTICE("Non-Secure Non Preserve Memory Region for ECP: "
				"0x%" PRIx64 " to 0x%" PRIx64 " (%" PRId64 "MB)\n", start, end,
				((end - start + 1) >> 20));
				break;
			case NSEC_M_ASC1:
				NOTICE("Non-Secure Non Preserve Memory Region: "
				"0x%" PRIx64 " to 0x%" PRIx64 " (%" PRId64 "MB)\n", start, end,
				((end - start + 1) >> 20));
				break;
			case NSEC_0_LMT:
				NOTICE("LMT Memory Region: "
				"0x%" PRIx64 " to 0x%" PRIx64 " (%" PRId64 "MB)\n", start, end,
				((end - start + 1) >> 20));
				break;
			case NSEC_P_ASC0:
				NOTICE("Non-Secure Preserve Memory Region: "
				"0x%" PRIx64 " to 0x%" PRIx64 " (%" PRId64 "MB)\n", start, end,
				((end - start + 1) >> 20));
				break;
			case NSEC_P_ASC1:
				NOTICE("User Non-Secure Preserved Memory Region: "
				"0x%" PRIx64 " to 0x%" PRIx64 " (%" PRId64 "MB)\n", start, end,
				((end - start + 1) >> 20));
				break;
			}
		}
	}
}

/* Function to read ASC region registers and initialize ccs region map */
void init_ccs_region_map(void)
{
	int index;
	cavm_sam_asc_regionx_attr_t asc_attr;
	ccs_region_t *region;

	memset(ccs_map, 0, sizeof(ccs_map));
	for (index = 0; index < MAX_ASC_REGIONS; index++) {
		region = &ccs_map[index];
		region->number = region->asc_index = index;

		asc_attr.u = CSR_READ(CAVM_SAM_ASC_REGIONX_ATTR(index));
		if (!asc_attr.s.s_en && !asc_attr.s.ns_en) {
			region->free = 1;
			continue;
		}

		if (asc_attr.s.s_en)
			region->attr |= CCS_ATTR_SEC_BIT_MASK;

		if ((index == NSEC_P_ASC0) || (index == NSEC_P_ASC1))
			region->attr |= CCS_ATTR_PRESERVE_BIT_MASK;

		region->start = CSR_READ(CAVM_SAM_ASC_REGIONX_START(index));
		region->end = CSR_READ(CAVM_SAM_ASC_REGIONX_END(index)) | ASC_DEF_SIZE_MASK;
		region->rsvd_memsz = 0;
	}
}

/* Map given memory range in one of the ASC region */
static int create_new_asc_region(uint64_t start, uint64_t size, uint64_t attr,
				 int *region_index)
{
	cavm_sam_asc_regionx_attr_t asc_attr;
	int index;
	ccs_region_t *region;

	if (*region_index < 0) {
		/* If the region index is not predefined, find the first available */
		for (index = CCS_REGION_IDX_MAX; index < MAX_ASC_REGIONS; index++) {
			/* Find not enabled ASC region specifier */
			asc_attr.u = CSR_READ(CAVM_SAM_ASC_REGIONX_ATTR(index));
			if (asc_attr.s.s_en || asc_attr.s.ns_en)
				continue;
			else
				break;
		}
	} else {
		index = *region_index;
		asc_attr.u = CSR_READ(CAVM_SAM_ASC_REGIONX_ATTR(index));
		if (asc_attr.s.s_en || asc_attr.s.ns_en)
			return -1;
	}

	if (index < MAX_ASC_REGIONS) {
		CSR_WRITE(CAVM_SAM_ASC_REGIONX_START(index), start);
		CSR_WRITE(CAVM_SAM_ASC_REGIONX_END(index), start + size - 1);

		asc_attr.u = attr;
		CSR_WRITE(CAVM_SAM_ASC_REGIONX_ATTR(index), asc_attr.u);

		/* Store ASC region index for later use */
		*region_index = index;

		region = &ccs_map[index];
		if (asc_attr.s.s_en)
			region->attr |= CCS_ATTR_SEC_BIT_MASK;
		region->start = CSR_READ(CAVM_SAM_ASC_REGIONX_START(index));
		region->end = CSR_READ(CAVM_SAM_ASC_REGIONX_END(index)) | ASC_DEF_SIZE_MASK;
		region->rsvd_memsz = 0;
		region->free = 0;

		return 0;
	}
	return -1;
}

/*
 * Adjust the given asc region by reducing it's size by requested size
 * Also create new asc region of requested memory size. Request memory
 * size must be 16M aligned.
 * Return zero on success and -ve on failure
 */
int adjust_asc_region(ccs_region_index_t index, uint64_t size, int *new_index)
{
	ccs_region_t *region;
	cavm_sam_asc_regionx_attr_t asc_attr, attr;
	uint64_t reg_start, reg_end;

	/* Size must be in multiple of 16M */
	if (size & ASC_DEF_SIZE_MASK) {
		ERROR("%s: SAM: Requested size (%" PRIx64 ") not 16M aligned\n",
		      __func__, size);
		return -1;
	}

	reg_start = CSR_READ(CAVM_SAM_ASC_REGIONX_START(index));
	reg_end = CSR_READ(CAVM_SAM_ASC_REGIONX_END(index));


	/* REGIONX_END always reports lower 24 bits as 0 */
	reg_end |= ASC_DEF_SIZE_MASK;

	if (size > (reg_end - reg_start + 1)) {
		ERROR("%s: SAM: Invalid request to reduce memory from index %d "
		      "Tatal size = %" PRIx64 ", Requested Size = %" PRIx64 "\n", __func__,
		      index, (reg_end - reg_start + 1), size);
		return -1;
	}

	reg_end -= size;

	/* Disable, Re-size and re-enable original ASC region */
	attr.u = asc_attr.u = CSR_READ(CAVM_SAM_ASC_REGIONX_ATTR(index));
	attr.s.s_en = 0;
	attr.s.ns_en = 0;
	CSR_WRITE(CAVM_SAM_ASC_REGIONX_ATTR(index), attr.u);
	CSR_WRITE(CAVM_SAM_ASC_REGIONX_END(index), reg_end);
	CSR_WRITE(CAVM_SAM_ASC_REGIONX_ATTR(index), asc_attr.u);

	region = &ccs_map[index];
	region->end = reg_end;

	/* Create ASC region of reduced memory with same attribute */
	if (create_new_asc_region(reg_end + 1, size, asc_attr.u, new_index)) {
		ERROR("%s: SAM: Cannot map new region in ASC\n", __func__);
		return -1;
	}

	/* Update Offset of new region based on current offset */
	CSR_WRITE(CAVM_SAM_ASC_REGIONX_OFFSET(*new_index),
			CSR_READ(CAVM_SAM_ASC_REGIONX_OFFSET(index)));

	return 0;
}

/*
 * Simply mark previously allocated ASC region as secure or non-secure
 * based on the ATF region type as enumerated by ccs_region_index_t.
 * Does not impact the allocated region's start-end range.
 */
int adjust_asc_region_security(const int index)
{
	ccs_region_t *region = &ccs_map[index];

	cavm_sam_asc_regionx_attr_t attr = { .u = CSR_READ(CAVM_SAM_ASC_REGIONX_ATTR(index)) };

	/* Check index range and ensure region has been configured */
	if ((index >= CCS_REGION_IDX_MAX) ||
		(!attr.s.s_en && !attr.s.ns_en)) {
		VERBOSE("%s SAM: ASC region%d is invalid\n", __func__, index);
		return -1;
	}

	if (region->attr & CCS_ATTR_SEC_BIT_MASK) {
		attr.s.s_en = 1;
		attr.s.ns_en = 0;
	} else {
		attr.s.ns_en = 1;
		attr.s.s_en = 0;
	}
	CSR_WRITE(CAVM_SAM_ASC_REGIONX_ATTR(index), attr.u);

	return 0;
}

/* Returns start and size info of the ASC region programmed by EBF
 */
uint64_t sam_region_get_info(ccs_region_index_t index, uint64_t *start)
{
	cavm_sam_asc_regionx_attr_t asc_attr;
	uint64_t reg_start, reg_end;

	if (index >= CCS_REGION_IDX_MAX)
		return 0;

	reg_start = CSR_READ(CAVM_SAM_ASC_REGIONX_START(index));
	reg_end = CSR_READ(CAVM_SAM_ASC_REGIONX_END(index));
	asc_attr.u = CSR_READ(CAVM_SAM_ASC_REGIONX_ATTR(index));

	/* Verify if user hasnt configured yet or misconfigured */
	if ((!asc_attr.s.s_en && !asc_attr.s.ns_en) ||
		reg_end < reg_start) {
		return 0;
	}

	/* REGIONX_END always reports lower 24 bits as 0 */
	reg_end |= ASC_DEF_SIZE_MASK;

	/* Return start and size */
	*start = reg_start;
	return reg_end - reg_start + 1;
}

uint64_t memory_region_get_info(int index, uint64_t *start)
{
	return sam_region_get_info(index, start);
}

int memory_region_get_last_nsec(uint64_t *start, uint64_t alloc_sz)
{
	uint64_t size;

	size = sam_region_get_info(NSEC_M_ASC1, start);
	if (!size)
		return -1;

	size -= ccs_map[NSEC_M_ASC1].rsvd_memsz;
	ccs_map[NSEC_M_ASC1].rsvd_memsz += alloc_sz;

	*start = *start + size - alloc_sz;

	return 0;
}

uint64_t plat_get_memory_size(void)
{
	uint64_t addr;

	return memory_region_get_info(NSEC_M_ASC1, &addr);
}

/* Flush the LLC Cache */
void llc_flush(void)
{
	/* FIXME */
}

void octeontx_security_setup(void)
{
	/*
	 * It's expected that EBF has allocated second region.
	 * Now mark it as non-secure.
	 */
	adjust_asc_region_security(NSEC_M_ASC0);
	adjust_asc_region_security(NSEC_M_ASC1);
	adjust_asc_region_security(NSEC_P_ASC0);
	adjust_asc_region_security(NSEC_P_ASC1);

	VERBOSE("Flushing L1C\n");
	dcsw_op_all(DCCISW);

	/* FIXME flush llc */
	VERBOSE("Flushing LLC\n");
	llc_flush();

	VERBOSE("Flushing IC\n");
	__asm__ volatile("ic iallu\n"
			 "isb\n");

	init_ccs_region_map();
}

/*
 * This function configures IOBN to grant access for eMMC controller
 * to secure/non-secure memory based on input parameter passed
 */
void octeontx_configure_mmc_security(int secure)
{
	/*
	 * rsl_idx - PCC function number for the RSL device
	 * (stream ID<7:0>)
	 * bus_idx - Stream's bus number (stream_id<15:8>).
	 */
	uint64_t rsl_idx = CAVM_PCC_DEV_CON_E_EMMCX(0) & 0xFF;
	uint64_t bus_idx = (CAVM_PCC_DEV_CON_E_EMMCX(0) >> 8) & 0xFF;
	uint64_t domain_idx = (CAVM_PCC_DEV_CON_E_EMMCX(0) >> 16) & 0xFF;
	cavm_iobnx_rslx_streams_t iobn_rslx_stream;
	cavm_iobnx_domx_busx_streams_t iobn_domx_busx_stream;

	/* Check for MMC boot, if not return here */
	if (plat_octeontx_bcfg->bcfg.boot_dev.boot_type != OCTEONTX_BOOT_EMMC)
		return;

	for (int iobn_idx = 0; iobn_idx < plat_octeontx_scfg->iobn_count;
				iobn_idx++) {
		if (secure) {
			/*
			 * While booting from MMC device, it is
			 * necessary to configure IOBN as to grant
			 * access for eMMC controller to secure memory,
			 * where images are loaded
			 */
			iobn_rslx_stream.u = CSR_READ(
				CAVM_IOBNX_RSLX_STREAMS(iobn_idx,
							rsl_idx));
			iobn_rslx_stream.s.strm_nsec = 0;
			iobn_rslx_stream.s.phys_nsec = 0;
			CSR_WRITE(CAVM_IOBNX_RSLX_STREAMS(
						iobn_idx, rsl_idx),
						iobn_rslx_stream.u);

			iobn_domx_busx_stream.u = CSR_READ(
				CAVM_IOBNX_DOMX_BUSX_STREAMS(iobn_idx,
				domain_idx, bus_idx));
			iobn_domx_busx_stream.s.strm_nsec = 0;
			iobn_domx_busx_stream.s.phys_nsec = 0;
			CSR_WRITE(CAVM_IOBNX_DOMX_BUSX_STREAMS(
				iobn_idx, domain_idx, bus_idx),
				iobn_domx_busx_stream.u);
		} else {
			/*
			 * Configure IOBN and mark MMC controller in
			 * NODE0 as acting for non-secure domain.
			 */
			iobn_rslx_stream.u = CSR_READ(
				CAVM_IOBNX_RSLX_STREAMS(
					iobn_idx, rsl_idx));
			iobn_rslx_stream.s.strm_nsec = 1;
			iobn_rslx_stream.s.phys_nsec = 1;
			CSR_WRITE(CAVM_IOBNX_RSLX_STREAMS(
					iobn_idx, rsl_idx), iobn_rslx_stream.u);

			/*
			 * Do not change IOBNX_DOMX_BUSX_STREAMS
			 * (changing IOBNX_RSLX_STREAMS was sufficient).
			 */
		}
	}
}

/* Allocate a new region by reducing the memory from the last available
 * non-secure non-preserve memory */
int adjust_asc_region_next_avail(uint64_t size,  int *new_index, uint64_t *new_base)
{
	int idx, ret;
	uint64_t region_base = 0, region_size = 0;

	idx = NSEC_M_ASC1;

	ret = adjust_asc_region(idx, size, new_index);
	if (!ret) {
		region_size = memory_region_get_info(idx, &region_base);
		*new_base = region_size + region_base;
	}

	return ret;
}
