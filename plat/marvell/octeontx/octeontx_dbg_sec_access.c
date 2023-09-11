/*
 * Copyright (C) 2023 Marvell.
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

#include <octeontx_mmap_utils.h>
#include <octeontx_dram.h>
#include <errno.h>
#include <inttypes.h>

/*
 * Checks Matching ASC Mapping Index
 * address - Address to be read/write
 *
 * Return:
 *	ASC Index
 */
static ccs_region_index_t get_ccs_regn_index(uint64_t address)
{
	uint64_t asc_regn_base;
	uint64_t asc_regn_size;
	ccs_region_index_t ccs_index;

	for (ccs_index = 0; ccs_index != CCS_REGION_IDX_MAX; ccs_index++) {
		asc_regn_size = memory_region_get_info(ccs_index, &asc_regn_base);
		VERBOSE("SEC_ACCESS : ASC Region 0x%" PRIx64 "--- 0x%" PRIx64 "\n",
				asc_regn_base, asc_regn_base + asc_regn_size - 1);
		if (address >= asc_regn_base && address <= (asc_regn_base + asc_regn_size - 1))
			break;
	}
	return ccs_index;
}

/*
 * gives mem attr as per ASC Index
 * address - Address to be read/write
 *
 * Return:
 *	mem attribute
 */
static unsigned int asc_mem_attr_setup(uint64_t address)
{
	unsigned int mem_attr;

	switch (get_ccs_regn_index(address)) {
	case SECURE_NONPRESERVE:
		VERBOSE("SEC_ACCESS : ASC Region Secure\n");
		mem_attr = MT_MEMORY | MT_RW | MT_SECURE;
		break;
	case NSECURE_NONPRESERVE:
	case NSEC_LMT_REGION:
	case NSEC_PRESERVE_REGION_0:
	case USER_PRESERVE_REGION_0:
	case NSECURE_NONPRESERVE_1:
		VERBOSE("SEC_ACCESS : ASC Region NonSecure\n");
		mem_attr = MT_MEMORY | MT_RW | MT_NS;
		break;
	case CCS_REGION_IDX_MAX:
		mem_attr = MT_DEVICE | MT_RW | MT_SECURE;
		break;
	}
	return mem_attr;
}

/*
 * Accessing Region from secure world
 * address - Address to be read/write
 * val - data to be written to Region or read from Region
 * write - WRITE Flag
 * bits_32 - size of data to be read/write (64/32 bit)
 *
 * Return:
 *       ret - Status field:
 *           0 - Success
 *           other values are error codes
 */
int octeontx_access_mapping(uint64_t address, uint64_t *val,
		uint64_t write, uint64_t bits_32)
{
	uint64_t base;
	int ret;

	VERBOSE("SEC_ACCESS : Addr 0x%" PRIx64 "\n", address);
	base = ROUND_DOWN(address, PAGE_SIZE);
	ret = octeontx_mmap_add_dynamic_region_with_sync(base,
							 base,
							 PAGE_SIZE,
							 asc_mem_attr_setup(address));
	/*
	 * -EPERM : Overlaps in the Translation Table, Mapping is
	 * present
	 */
	if (ret != -EPERM && ret != 0)
		return ret;

	if (write)
		if (bits_32)
			*(volatile uint32_t *)address = cavm_cpu_to_le32(*val);
		else
			*(volatile uint64_t *)address = cavm_cpu_to_le64(*val);
	else
		if (bits_32)
			*(uint32_t *)val = cavm_le32_to_cpu(
					*(volatile uint32_t *)address);
		else
			*(uint64_t *)val = cavm_le64_to_cpu(
					*(volatile uint64_t *)address);

	/*Removing Newly Mapped Entry*/
	if (ret == 0)
		octeontx_mmap_remove_dynamic_region_with_sync(base, PAGE_SIZE);
	return 0;
}
