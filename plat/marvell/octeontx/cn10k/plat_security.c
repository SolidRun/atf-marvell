/*
 * Copyright (c) 2020 Marvell.
 *
 * SPDX-License-Identifier:     BSD-3-Clause
 * https://spdx.org/licenses
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

#include <stdio.h>
#include <debug.h>
#include <arch.h>
#include <platform_def.h>
#include <octeontx_common.h>
#include <plat_board_cfg.h>
#include <plat_scfg.h>
#include <plat_cn10k_configuration.h>
#include <octeontx_security.h>
#include <octeontx_dram.h>
#include <octeontx_utils.h>
#include <octeontx_ecam.h>

#include "cavm-csrs-ap.h"
#include "cavm-csrs-iobn.h"
#include "cavm-csrs-pccpf.h"
#include "cavm-csrs-pem.h"
#include "cavm-csrs-smmu.h"
#include "cavm-csrs-sam.h"
#include "cavm-csrs-tad_cmn.h"
#include "cavm-csrs-tad.h"

#define MAX_ASC_REGIONS 32

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
	[SEC_REGION_0] = {
		.free = 0,
		.attr = CCS_ATTR_SEC_BIT_MASK | CCS_ATTR_MAND_BIT_MASK | CCS_ATTR_FIXD_BIT_MASK,
		},
	/* Non-Secure-Non preserve memory for uboot and linux */
	[NSEC_REGION_0] = {
		.free = 0,
		.attr = CCS_ATTR_MAND_BIT_MASK,
		},
	/* Non-Secure-Non preserve memory for LMT lines */
	[NSEC_LMT_REGION] = {
		.free = 1,
		.attr = 0,
		},
	/* Non secure preserve memory, not used */
	[NSEC_PRESERVE_REGION_0] = {
		.free = 1,
		.attr = 0,
		},
	/* User defined non secure preserve memory */
	[USER_PRESERVE_REGION_0] = {
		.free = 1,
		.attr = 0,
		},
};

void dump_ccs_region_config(void)
{
	int index;
	ccs_region_t *region;
	uint64_t start, end;

	for (index = 0; index < MAX_ASC_REGIONS; index++) {
		region = &ccs_map[index];
		if (!region->free) {
			VERBOSE("ASC region %d Free %d\n", index, region->free);
			VERBOSE("Start 0x%llx End 0x%llx Reserved MemSz 0x%llx\n",
				region->start, region->end, region->rsvd_memsz);
			VERBOSE("Secure %d Fixed %d Mandatory %d\n",
				region->attr & CCS_ATTR_SEC_BIT_MASK,
				region->attr & CCS_ATTR_FIXD_BIT_MASK,
				region->attr & CCS_ATTR_MAND_BIT_MASK);

			start = region->start;
			end = region->end;

			switch (index) {
			case SECURE_NONPRESERVE:
				NOTICE("Secure Non Preserve Memory Region: "
				"0x%llx to 0x%llx (%lldMB)\n", start, end,
				((end - start + 1) >> 20));
				break;
			case NSECURE_NONPRESERVE:
				NOTICE("Non-Secure Non Preserve Memory Region: "
				"0x%llx to 0x%llx (%lldMB)\n", start, end,
				((end - start + 1) >> 20));
				break;
			case NSEC_LMT_REGION:
				NOTICE("LMT Memory Region: "
				"0x%llx to 0x%llx (%lldMB)\n", start, end,
				((end - start + 1) >> 20));
				break;
			case NSEC_PRESERVE_REGION_0:
				NOTICE("Non-Secure Preserve Memory Region: "
				"0x%llx to 0x%llx (%lldMB)\n", start, end,
				((end - start + 1) >> 20));
				break;
			case USER_PRESERVE_REGION_0:
				NOTICE("User Non-Secure Preserved Memory Region: "
				"0x%llx to 0x%llx (%lldMB)\n", start, end,
				((end - start + 1) >> 20));
				break;
			case NSECURE_NONPRESERVE_1:
				NOTICE("Non-Secure Non Preserve Memory Region 1: "
				"0x%llx to 0x%llx (%lldMB)\n", start, end,
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

	plat_octeontx_bcfg->asym_mem_config = 0;

	memset(ccs_map, 0, sizeof(ccs_map));
	for (index = 0; index < MAX_ASC_REGIONS; index++) {
		region = &ccs_map[index];
		region->number = region->asc_index = index;

		asc_attr.u = CSR_READ(CAVM_SAM_ASC_REGIONX_ATTR(index));
		if (!asc_attr.s.s_en && !asc_attr.s.ns_en) {
			region->free = 1;
			continue;
		}

		if (NSECURE_NONPRESERVE_1 == index)
			plat_octeontx_bcfg->asym_mem_config = 1;

		if (asc_attr.s.s_en)
			region->attr |= CCS_ATTR_SEC_BIT_MASK;

		if ((index == NSEC_PRESERVE_REGION_0) ||
			(index == USER_PRESERVE_REGION_0))
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
		ERROR("%s: SAM: Requested size (%llx) not 16M aligned\n",
		      __func__, size);
		return -1;
	}

	reg_start = CSR_READ(CAVM_SAM_ASC_REGIONX_START(index));
	reg_end = CSR_READ(CAVM_SAM_ASC_REGIONX_END(index));

	/* REGIONX_END always reports lower 24 bits as 0 */
	reg_end |= ASC_DEF_SIZE_MASK;

	if (size > (reg_end - reg_start + 1)) {
		ERROR("%s: SAM: Invalid request to reduce memory from index %d "
		      "Tatal size = %llx, Requested Size = %llx\n", __func__,
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

uint64_t rvu_rsvd_region_info(uint64_t *start, uint64_t *size)
{
	uint64_t addr = 0, sz;

	sz = sam_region_get_info(plat_octeontx_bcfg->rvu_rsvd_reg_index, &addr);
	*size = sz;
	*start = addr;
	return 0;
}

uint64_t memory_region_get_info(int index, uint64_t *start)
{
	return sam_region_get_info(index, start);
}

int memory_region_get_last_nsec(uint64_t *start, uint64_t alloc_sz)
{
	uint64_t size;

	if (plat_octeontx_bcfg->asym_mem_config) {
		size = sam_region_get_info(NSECURE_NONPRESERVE_1, start);
		if (!size)
			return -1;

		size -= ccs_map[NSECURE_NONPRESERVE_1].rsvd_memsz;
		ccs_map[NSECURE_NONPRESERVE_1].rsvd_memsz += alloc_sz;
	}
	else {
		size = sam_region_get_info(NSECURE_NONPRESERVE, start);
		if (!size)
			return -1;

		size -= ccs_map[NSECURE_NONPRESERVE].rsvd_memsz;
		ccs_map[NSECURE_NONPRESERVE].rsvd_memsz += alloc_sz;
	}

	*start = *start + size - alloc_sz;

	return 0;
}

uint64_t plat_get_memory_size(void)
{
	uint64_t addr, size = 0;

	size = memory_region_get_info(NSECURE_NONPRESERVE, &addr);
	if (plat_octeontx_bcfg->asym_mem_config)
		size += memory_region_get_info(NSECURE_NONPRESERVE_1, &addr);
	return size;
}

/* Flush the LLC Cache */
void llc_flush(void)
{
	int idxcnt, i, num_tads;
	uint64_t tad_mask = 0;
	cavm_tad_cmn_cache_flush_t ccf;
	cavm_tad_cmn_const_t tcc = { .u = CSR_READ(CAVM_TAD_CMN_CONST) };
	cavm_tadx_cache_flush_status_t tcfs;

	num_tads = tcc.s.num_tads;
	tad_mask = (1UL << num_tads) - 1;

	if (tcc.s.dtgsets > tcc.s.ltgsets) {
		idxcnt = tcc.s.dtgsets;
	} else {
		idxcnt = tcc.s.ltgsets;
	}

	ccf.s.idxstart   = 0;
	ccf.s.idxcnt     = (idxcnt - 1);
	ccf.s.flush_type = TAD_FLUSH_TYPE_CLEAN_SHARED;
	ccf.s.start      = 1;

	VERBOSE("Flushing the LLC (0x%llx)\n", ccf.u);
	CSR_WRITE(CAVM_TAD_CMN_CACHE_FLUSH, ccf.u);
	while (tad_mask) {
		for (i = 0; i < num_tads; i++) {
			if (tad_mask & (1UL << i)) {
				tcfs.u = CSR_READ(CAVM_TADX_CACHE_FLUSH_STATUS(i));
				if (tcfs.s.done)
					tad_mask &= ~(1UL << i);
			}
		}
	}

	VERBOSE("LLC flush done.\n");
}

void octeontx_security_setup(void)
{
	/*
	 * It's expected that EBF has allocated second region.
	 * Now mark it as non-secure.
	 */
	adjust_asc_region_security(NSECURE_NONPRESERVE);
	adjust_asc_region_security(NSECURE_NONPRESERVE_1);
	adjust_asc_region_security(NSEC_PRESERVE_REGION_0);
	adjust_asc_region_security(USER_PRESERVE_REGION_0);

	VERBOSE("Flushing L1C\n");
	dcsw_op_all(DCCISW);

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

/*
 * Helper function for setting-up stream security in IOBN.
 */
static void set_iobn_stream_security(int domain_idx, int bus_idx, int dev_idx,
				     int strm_ns, int phys_ns)
{
	int iobn_idx;

	for (iobn_idx = 0; iobn_idx < plat_octeontx_scfg->iobn_count;
	     iobn_idx++) {
		cavm_iobnx_domx_devx_streams_t iobn_comx_devx_stream;
		cavm_iobnx_domx_busx_streams_t iobn_domx_busx_stream;

		iobn_domx_busx_stream.u = CSR_READ(
			CAVM_IOBNX_DOMX_BUSX_STREAMS(iobn_idx, domain_idx,
						     bus_idx));
		iobn_domx_busx_stream.s.strm_nsec = strm_ns;
		iobn_domx_busx_stream.s.phys_nsec = phys_ns;
		CSR_WRITE(CAVM_IOBNX_DOMX_BUSX_STREAMS(
			  iobn_idx, domain_idx, bus_idx),
			  iobn_domx_busx_stream.u);

		iobn_comx_devx_stream.u = CSR_READ(
			CAVM_IOBNX_DOMX_DEVX_STREAMS(iobn_idx, domain_idx,
						     dev_idx));
		iobn_comx_devx_stream.s.strm_nsec = strm_ns;
		iobn_comx_devx_stream.s.phys_nsec = phys_ns;
		CSR_WRITE(CAVM_IOBNX_DOMX_DEVX_STREAMS(
			  iobn_idx, domain_idx, dev_idx),
			  iobn_comx_devx_stream.u);
	}
}

static void octeontx_configure_pem_iobn(int pem, uint32_t streamid, int secure)
{
	int dev_idx, bus_idx, domain_idx;
	int strm_ns, phys_ns;

	if (!is_pem_in_ep_mode(pem))
		return;

	strm_ns = !secure; /* set according to caller's request */
	phys_ns = 1; /* host can only access non-secure memory */

	domain_idx = STREAM_DMN_IDX(streamid);
	bus_idx = STREAM_BUS_IDX(streamid);
	dev_idx = STREAM_DEV_IDX(streamid);

#if 0
	VERBOSE("pem %d stream 0x%x dom %d bus %d sec %d\n",
		pem, streamid, domain_idx, bus_idx, secure);
#endif

	set_iobn_stream_security(domain_idx, bus_idx, dev_idx, strm_ns,
				phys_ns);
}

/*
 * This function configures PCI EP streams' security in IOBN.
 *
 * On entry,
 *   secure: 0 to configure stream for NON-secure lookup
 *           1 to configure stream for SECURE lookup
 */
void octeontx_configure_pem_ep_security(int pem)
{
	void *prop_start = NULL, *prop_end = NULL;
	uint32_t streamid, startid;
	cavm_smmux_s_gbpa_t s_gbpa;
	int id, secure;

	if (!is_pem_in_ep_mode(pem))
		return;

	secure = octeontx_fdt_get_pem_secure();
	octeontx_fdt_get_strmid_ptrs(pem, &prop_start, &prop_end);
	if (prop_start == NULL) {
		streamid = CAVM_PCC_DEV_CON_E_PCIERCX(0) | (pem << STREAM_DMN_SHIFT);
		octeontx_configure_pem_iobn(pem, streamid, secure);
	} else {
		do {
			streamid = octeontx_fdt_get_next_strmid(&prop_start, &prop_end);
			/* If no stream id is found */
			if (streamid == 0)
				break;

			/* If stream id is xFFFF, Configure all the stream IDs */
			if ((streamid & PEM_ALL_STREAM_IDS) == PEM_ALL_STREAM_IDS) {
				startid = CAVM_PCC_DEV_CON_E_PCIERCX(0) | (pem << STREAM_DMN_SHIFT);
				VERBOSE("Programing PEM stream ids %d..%d as secure\n",
					startid, streamid);
				for (id = startid; id <= streamid; id++)
					octeontx_configure_pem_iobn(pem, id, secure);
				break;
			}

			octeontx_configure_pem_iobn(pem, streamid, secure);
		} while (1);
	}

	/* Ensure that SMMU uses NS bit from secure stream config.
	 * The BDK sets NSCFG override to force secure memory accesses
	 * while loading images.
	 * It is safe to reset this here because all images have been
	 * loaded.
	 */
	s_gbpa.u = CSR_READ(CAVM_SMMUX_S_GBPA(0));
	s_gbpa.s.nscfg = 0;
	CSR_WRITE(CAVM_SMMUX_S_GBPA(0), s_gbpa.u);
}

/* Allocate a new region by reducing the memory from the last available
 * non-secure non-preserve memory */
int adjust_asc_region_next_avail(uint64_t size,  int *new_index, uint64_t *new_base)
{
	int idx, ret;
	uint64_t region_base = 0, region_size = 0;

	if (plat_octeontx_bcfg->asym_mem_config)
		idx = NSECURE_NONPRESERVE_1;
	else
		idx = NSECURE_NONPRESERVE;

	ret = adjust_asc_region(idx, size, new_index);
	if (!ret) {
		region_size = memory_region_get_info(idx, &region_base);
		*new_base = region_size + region_base;
	}

	return ret;
}
