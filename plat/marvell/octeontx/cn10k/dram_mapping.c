/***********************license start***********************************
 * Copyright (c) 2021 Marvell.
 * SPDX-License-Identifier: BSD-3-Clause
 * https://spdx.org/licenses
 ***********************license end**************************************/

#include <stdio.h>
#include <stdint.h>
#include <string.h>
#include <inttypes.h>
#include <assert.h>
#include <octeontx_common.h>
#include <plat_board_cfg.h>
#include <octeontx_ecam.h>
#include <octeontx_utils.h>
#include <platform_def.h>
#include <strtol.h>
#include <libfdt.h>
#include <plat_ras.h>
#include <plat_cn10k_configuration.h>
#include <drivers/delay_timer.h>
#include "dss_ras.h"

#include "cavm-csrs-ap.h"
#include "cavm-csrs-sam.h"
#include "cavm-csrs-dss.h"
#include "cavm-csrs-rst.h"

#define ASC_DEF_SIZE_MASK		((1 << 24) - 1)

static int chn_mask_valid;
static int dram_ch_mask;
static uint32_t dram_ch_sz_mb[6];

int cn10k_get_ch_mask(void)
{
	const void *fdt = fdt_ptr;
	const char *str;
	int offset, len;

	if (chn_mask_valid)
		return dram_ch_mask;

	offset = fdt_path_offset(fdt, "/cavium,bdk");
	if (offset < 0) {
		WARN("FDT node not found\n");
		return 0;
	}

	str = fdt_getprop(fdt, offset, "DDR-DMC-MASK", &len);
	if (str) {
		dram_ch_mask = strtol(str, NULL, 16);
		if (dram_ch_mask)
			chn_mask_valid = 1;
	}
	else {
		cavm_sam_asc_regionx_attr_t asc_attr;
		/* EBF and ATF are from different release */
		asc_attr.u = CSR_READ(CAVM_SAM_ASC_REGIONX_ATTR(0));
		dram_ch_mask = asc_attr.s.dmc_mask;
		chn_mask_valid = 1;
	}

	return dram_ch_mask;
}

int cn10k_get_ch_size(void)
{
	int offset;
	int ret = -1, prop_len;
	const void *fdt = fdt_ptr;
	int ch = 0;
	const fdt32_t *freg;
	void *prop = NULL;

	offset = fdt_path_offset(fdt, "/cavium,bdk");
	if (offset > 0) {
		prop = (void *)fdt_getprop(fdt, offset, "DDR-DMC-CH-SIZE" , &prop_len);

		if (prop == NULL) {
			return ret;
		}
	}

	freg = (const fdt32_t *) prop;
	for (ch = 0; ch < prop_len/sizeof(uint32_t); ch++) {
		dram_ch_sz_mb[ch] = fdt32_to_cpu(freg[ch]);
		VERBOSE("Channel size ch %d size %d\n", ch, dram_ch_sz_mb[ch]);
	}
	return 0;
}

uint64_t cn10k_dram_get_size_mbytes_ch(int ch)
{
	return dram_ch_sz_mb[ch];
}

bool is_secure_address(uint64_t addr)
{
	int r;
	uint64_t a_start, a_end;
	cavm_sam_asc_regionx_attr_t asc_attr;
	bool sec = false;

	for (r = 0; r < MAX_NUM_ASC_REGIONS; r++) {

		asc_attr.u = CSR_READ(CAVM_SAM_ASC_REGIONX_ATTR(r));
		if (!asc_attr.s.s_en)
			continue;

		a_start = CSR_READ(CAVM_SAM_ASC_REGIONX_START(r));
		a_end = CSR_READ(CAVM_SAM_ASC_REGIONX_END(r)) | ASC_DEF_SIZE_MASK;

		if ((addr >= a_start) && (addr < a_end) && asc_attr.s.s_en) {
			sec = true;
			break;
		}
	}

	return sec;
}

