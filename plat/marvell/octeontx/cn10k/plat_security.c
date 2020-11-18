/*
 * Copyright (C) 2020 Marvell.
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
#include <octeontx_security.h>
#include <octeontx_dram.h>
#include <octeontx_utils.h>

#include "cavm-csrs-ap.h"
#include "cavm-csrs-iobn.h"
#include "cavm-csrs-pccpf.h"
#include "cavm-csrs-pem.h"
#include "cavm-csrs-smmu.h"
#include "cavm-csrs-sam.h"

#define MAX_ASC_REGIONS 32

/* Map given memory range in one of the ASC region */
static int create_new_asc_region(uint64_t start, uint64_t size, uint64_t attr,
				 int *region_index)
{
	cavm_sam_asc_regionx_attr_t asc_attr;
	int index;

	for (index = 0; index < MAX_ASC_REGIONS; index++) {
		/* Find not enabled ASC region specifier */
		asc_attr.u = CSR_READ(CAVM_SAM_ASC_REGIONX_ATTR(index));
		if (asc_attr.s.s_en || asc_attr.s.ns_en)
			continue;

		CSR_WRITE(CAVM_SAM_ASC_REGIONX_START(index), start);
		CSR_WRITE(CAVM_SAM_ASC_REGIONX_END(index), start + size - 1);

		asc_attr.u = attr;
		CSR_WRITE(CAVM_SAM_ASC_REGIONX_ATTR(index), asc_attr.u);

		/* Store ASC region index for later use */
		*region_index = index;

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
int adjust_asc_region(ccs_region_index_t index, uint64_t size)
{
	cavm_sam_asc_regionx_attr_t asc_attr, attr;
	uint64_t reg_start, reg_end;
	int idx;

	/* Size must be in multiple of 16M */
	if (size & 0xffffff) {
		ERROR("%s: SAM: Requested size (%llx) not 16M aligned\n",
		      __func__, size);
		return -1;
	}

	reg_start = CSR_READ(CAVM_SAM_ASC_REGIONX_START(index));
	reg_end = CSR_READ(CAVM_SAM_ASC_REGIONX_END(index));

	/* REGIONX_END always reports lower 24 bits as 0 */
	reg_end |= 0xffffff;

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

	/* Create ASC region of reduced memory with same attribute */
	if (create_new_asc_region(reg_end + 1, size, asc_attr.u, &idx)) {
		ERROR("%s: SAM: Cannot map new region in ASC\n", __func__);
		return -1;
	}

	/* Store ASC region index for later use */
	plat_octeontx_bcfg->rvu_rsvd_reg_index = idx;
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
	reg_end |= 0xffffff;

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

/* Flush the L2 Cache */
void l2c_flush(void)
{
}

void octeontx_security_setup(void)
{
	/* FIXME for cn10ka. Either EBF or ATF should configure SAM block
	* for ASC regions
	*/
	VERBOSE("Flushing L1C\n");
	dcsw_op_all(DCCISW);

	/* FIXME: Flushing L2C */

	VERBOSE("Flushing IC\n");
	__asm__ volatile("ic iallu\n"
			 "isb\n");
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
	uint64_t rsl_idx = CAVM_PCC_DEV_CON_E_MIO_EMM & 0xFF;
	uint64_t bus_idx = (CAVM_PCC_DEV_CON_E_MIO_EMM >> 8) & 0xFF;
	uint64_t domain_idx = (CAVM_PCC_DEV_CON_E_MIO_EMM >> 16) & 0xFF;
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
 * This function configures PCI EP streams' security in IOBN.
 *
 * On entry,
 *   secure: 0 to configure stream for NON-secure lookup
 *           1 to configure stream for SECURE lookup
 */
void octeontx_configure_pem_ep_security(int pem, int secure)
{
	/* FIXME for 106xx */
}
