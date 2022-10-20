/***********************license start***********************************
 * Copyright (c) 2021 Marvell.
 * SPDX-License-Identifier: BSD-3-Clause
 * https://spdx.org/licenses
 ***********************license end**************************************/

#include <stdio.h>
#include <stdint.h>
#include <string.h>
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

#define MAX_NUM_ASC_REGIONS  32
#define ASC_DEF_SIZE_MASK		((1 << 24) - 1)
#define GZ  (128UL << 10) // 128GB in MB (because (128K * 1MB) == 128GB)

extern uint32_t retrieve_dmc_mask_or_ddr_speed(char *string, uint32_t default_val);
static int chn_mask_valid;
static int dram_ch_mask;
static uint32_t dram_ch_sz_mb[6];

static int my_exp(int factor, int exp)
{
	int ret = 1;

	while (exp-- > 0)
		ret *= factor;
	return ret;
}

#define MAX_FACTOR_2  4
#define MAX_FACTOR_3  1

static int find_factors(int P, int *out_f2, int *out_f3)
{
	int f2, f3, rem;

	for (f2 = 0; f2 <= MAX_FACTOR_2; f2++) {
		for (f3 = 0; f3 <= MAX_FACTOR_3; f3++) {
			rem = P - (my_exp(2, f2) * my_exp(3, f3));
			if (rem == 0) {
				*out_f2 = f2;
				*out_f3 = f3;
				return 0;
			}
		}
	}
	return 1;
}

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

// Check the current DMC_MASK setting, and indicate when it is unsupported
// by returning non-zero.
//
int cn10k_dram_validate_dmc_mask(int ch_mask)
{
	int P = __builtin_popcount(ch_mask);

	// check DMC_MASK starting with the count of enabled channels
	// remember, it has been already checked for no chB without chA

	switch (P) {
	case 6: // all is OK
		break;

	case 5: // only OK to miss DSS0 chB // this may be too limited? won't others work?
		return (ch_mask != 0x3d);

	case 4: // OK only if two full DSSes
		return ((ch_mask != 0x0F) && (ch_mask != 0x33) && (ch_mask != 0x3c));

	case 3: // OK if missing DSS0 chB
		return (ch_mask != 0x0d);

	case 2: // any is OK
		break;

	case 1: // any is OK because we know it is a chA
		break;

	case 0:
	default:
		// illegal...
		return 1; // FAIL!!
	}

	return 0; // PASS!!
}

//////////////////////////////////////////////////////////////
//////////////////////////////////////////////////////////////
//
// New algorithm for handling asymmetric memory configurations
//
//////////////////////////////////////////////////////////////

#define MBtoB(x)   (((uint64_t)(x)) << 20)
#define GBtoMB(x)  (((uint64_t)(x)) << 10)

uint64_t get_config_size(uint64_t *working)
{
	uint64_t total_mem = 0;
	int ch;

	for (ch = 0; ch < MAX_CHANNELS; ch++)
		total_mem += working[ch];

	return total_mem;
}

/////////////////////////////////////

#define MAX_AREAS 6

typedef struct {
	// set during area setup
	uint64_t total_mem;
	uint64_t area_size;
	uint64_t slice_size;
	int ch_mask;
	int slices;

	// set during address range assignment
	uint64_t start_address;
	uint64_t end_address;
	int64_t final_offset;

	// during REGION request processing
	uint64_t current_size;
	uint64_t offset;
} area_table_entry_t;

uint64_t cn10k_dram_get_size_mbytes_ch(int ch)
{
	return dram_ch_sz_mb[ch];
}

/////////////////////////////////////////
//
// area addresses handled below
//
#define TOP32(x) ((((uint64_t)(x)) >> 32) & 0xFFFFFFFFul)
#define BOT32(x) ((((uint64_t)(x))) & 0xFFFFFFFFul)


////////////////////////////////////////////////////////
// Utilities/data/etc for the FROM_PA and TO_PA routines
//   Translate from/to PA to/from channel local geometry
////////////////////////////////////////////////////////

// enumerate for all the bits in the geometry fields
enum addrmap_bits {
	COL_B3,
	COL_B4,
	COL_B5,
	COL_B6,
	COL_B7,
	COL_B8,
	COL_B9,
	COL_B10,
	BG_B0,
	BG_B1,
	BG_B2,
	BANK_B0,
	BANK_B1,
	ROW_B0,
	ROW_B1,
	ROW_B2,
	ROW_B3,
	ROW_B4,
	ROW_B5,
	ROW_B6,
	ROW_B7,
	ROW_B8,
	ROW_B9,
	ROW_B10,
	ROW_B11,
	ROW_B12,
	ROW_B13,
	ROW_B14,
	ROW_B15,
	ROW_B16,
	ROW_B17,
	CS_BIT0,
	LAST_ADDRMAP_BITS
};

// these are the "internal base" values for all the geometry bits as described in
//  the HRM sections for the CAVM_DSSX_DDRCTL_REGB_ADDR_MAP0_ADDRMAPx CSRs
const uint8_t internal_base[LAST_ADDRMAP_BITS] = {
	[COL_B3] = 3,
	[COL_B4] = 4,
	[COL_B5] = 5,
	[COL_B6] = 6,
	[COL_B7] = 7,
	[COL_B8] = 8,
	[COL_B9] = 9,
	[COL_B10] = 10,
	[BG_B0] = 3,
	[BG_B1] = 4,
	[BG_B2] = 5,
	[BANK_B0] = 3,
	[BANK_B1] = 4,
	[ROW_B0] = 6,
	[ROW_B1] = 7,
	[ROW_B2] = 8,
	[ROW_B3] = 9,
	[ROW_B4] = 10,
	[ROW_B5] = 11,
	[ROW_B6] = 12,
	[ROW_B7] = 13,
	[ROW_B8] = 14,
	[ROW_B9] = 15,
	[ROW_B10] = 16,
	[ROW_B11] = 17,
	[ROW_B12] = 18,
	[ROW_B13] = 19,
	[ROW_B14] = 20,
	[ROW_B15] = 21,
	[ROW_B16] = 22,
	[ROW_B17] = 23,
	[CS_BIT0] = 6
};

enum addrmap_fields {
	COL_BITS, BG_BITS, BANK_BITS, ROW_BITS, CS_BITS, LAST_ADDRMAP_FIELD
};

typedef struct {
	uint8_t first, last, pos;
} field_struct_t;

static field_struct_t field_ctl[LAST_ADDRMAP_FIELD] = {
	[COL_BITS]  = { COL_B3,  COL_B10, 3 },
	[BG_BITS]   = { BG_B0,   BG_B2,   0 },
	[BANK_BITS] = { BANK_B0, BANK_B1, 0 },
	[ROW_BITS]  = { ROW_B0,  ROW_B17, 0 },
	[CS_BITS]   = { CS_BIT0, CS_BIT0, 0 }
};

//////////////////////////////////////////////////////////
// ADDRMAP-related utilities

// this routine is (nearly) identical to the DRAM init code in ebf_ddrc_ddr54_config()
// it sets up an array of geometry and bit-relative offsets to map physical addresses
// to or from geometry settings (rank, bank, bg, col, row)

static void setup_addrmap_entries(uint8_t *my_addrmap, int num_of_column,
								  int num_of_bg, int num_of_bank, int num_of_row, int num_of_cs)
{
	int column_offset, bank_group_offset, bank_offset, row_offset;

	/*addrmap_col_b3*/
	my_addrmap[COL_B3] = 0x0;
	/*addrmap_bg_b0*/
	my_addrmap[BG_B0] = 0x1;
	/*addrmap_bg_b1*/
	my_addrmap[BG_B1] = 0x1;
	/*addrmap_col_b4*/
	my_addrmap[COL_B4] = 0x2;
	/*addrmap_col_b5*/
	my_addrmap[COL_B5] = 0x2;
	/*addrmap_col_b6*/
	my_addrmap[COL_B6] = 0x2;
	/*addrmap_col_b7*/
	my_addrmap[COL_B7] = 0x2;
	/*addrmap_col_b8*/
	my_addrmap[COL_B8] = 0x2;
	/*addrmap_col_b9*/
	my_addrmap[COL_B9] = 0x2;
	/*addrmap_col_b10*/
	if (num_of_column == 11) {
		my_addrmap[COL_B10] = 0x2;
		column_offset = 1;
	} else {
		my_addrmap[COL_B10] = 0x1f;
		column_offset = 0;
	}
	/*addrmap_bg_b2*/
	if (num_of_bg == 8) {
		my_addrmap[BG_B2] = 0x7 + column_offset;
		bank_group_offset = 1;
	} else {
		my_addrmap[BG_B2] = 0x3f;
		bank_group_offset = 0;
	}
	/*addrmap_bank_b0*/
	my_addrmap[BANK_B0] = 0x9 + column_offset + bank_group_offset;
	/*addrmap_bank_b1*/
	if (num_of_bank == 4) {
		my_addrmap[BANK_B1] = 0x9 + column_offset + bank_group_offset;
		bank_offset = 1;
	} else {
		my_addrmap[BANK_B1] = 0x3f;
		bank_offset = 0;
	}
	/*addrmap_row_b0*/
	my_addrmap[ROW_B0] = 0x7 + column_offset + bank_group_offset + bank_offset;
	/*addrmap_row_b1*/
	my_addrmap[ROW_B1] = 0x7 + column_offset + bank_group_offset + bank_offset;
	/*addrmap_row_b2*/
	my_addrmap[ROW_B2] = 0x7 + column_offset + bank_group_offset + bank_offset;
	/*addrmap_row_b3*/
	my_addrmap[ROW_B3] = 0x7 + column_offset + bank_group_offset + bank_offset;
	/*addrmap_row_b4*/
	my_addrmap[ROW_B4] = 0x7 + column_offset + bank_group_offset + bank_offset;
	/*addrmap_row_b5*/
	my_addrmap[ROW_B5] = 0x7 + column_offset + bank_group_offset + bank_offset;
	/*addrmap_row_b6*/
	my_addrmap[ROW_B6] = 0x7 + column_offset + bank_group_offset + bank_offset;
	/*addrmap_row_b7*/
	my_addrmap[ROW_B7] = 0x7 + column_offset + bank_group_offset + bank_offset;
	/*addrmap_row_b8*/
	my_addrmap[ROW_B8] = 0x7 + column_offset + bank_group_offset + bank_offset;
	/*addrmap_row_b9*/
	my_addrmap[ROW_B9] = 0x7 + column_offset + bank_group_offset + bank_offset;
	/*addrmap_row_b10*/
	my_addrmap[ROW_B10] = 0x7 + column_offset + bank_group_offset + bank_offset;
	/*addrmap_row_b11*/
	my_addrmap[ROW_B11] = 0x7 + column_offset + bank_group_offset + bank_offset;
	/*addrmap_row_b12*/
	my_addrmap[ROW_B12] = 0x7 + column_offset + bank_group_offset + bank_offset;
	/*addrmap_row_b13*/
	my_addrmap[ROW_B13] = 0x7 + column_offset + bank_group_offset + bank_offset;
	/*addrmap_row_b14*/
	my_addrmap[ROW_B14] = 0x7 + column_offset + bank_group_offset + bank_offset;
	/*addrmap_row_b15*/
	my_addrmap[ROW_B15] = 0x7 + column_offset + bank_group_offset + bank_offset;
	if (num_of_row == 16) {
		/*addrmap_row_b16*/
		my_addrmap[ROW_B16] = 0x1f;
		/*addrmap_row_b17*/
		my_addrmap[ROW_B17] = 0x1f;
		row_offset = 0;
	} else if (num_of_row == 17) {
		/*addrmap_row_b16*/
		my_addrmap[ROW_B16] = 0x7 + column_offset + bank_group_offset
							  + bank_offset;
		/*addrmap_row_b17*/
		my_addrmap[ROW_B17] = 0x1f;
		row_offset = 1;
	} else {
		/*addrmap_row_b16*/
		my_addrmap[ROW_B16] = 0x7 + column_offset + bank_group_offset
							  + bank_offset;
		/*addrmap_row_b17*/
		my_addrmap[ROW_B17] = 0x7 + column_offset + bank_group_offset
							  + bank_offset;
		row_offset = 2;
	}
	/*addrmap_cs_bit0*/
	if (num_of_cs == 1)
		my_addrmap[CS_BIT0] = 0x3f;
	else
		my_addrmap[CS_BIT0] = 0x17 + column_offset + bank_group_offset
							  + bank_offset + row_offset;
}

static void read_addrmap_entries(int ch, uint8_t *my_map)
{
	union cavm_dssx_ddrctl_regb_addr_map0_addrmap1 reg_ADDRMAP1;
	union cavm_dssx_ddrctl_regb_addr_map0_addrmap3 reg_ADDRMAP3;
	union cavm_dssx_ddrctl_regb_addr_map0_addrmap4 reg_ADDRMAP4;
	union cavm_dssx_ddrctl_regb_addr_map0_addrmap5 reg_ADDRMAP5;
	union cavm_dssx_ddrctl_regb_addr_map0_addrmap6 reg_ADDRMAP6;
	union cavm_dssx_ddrctl_regb_addr_map0_addrmap7 reg_ADDRMAP7;
	union cavm_dssx_ddrctl_regb_addr_map0_addrmap8 reg_ADDRMAP8;
	union cavm_dssx_ddrctl_regb_addr_map0_addrmap9 reg_ADDRMAP9;
	union cavm_dssx_ddrctl_regb_addr_map0_addrmap10 reg_ADDRMAP10;
	union cavm_dssx_ddrctl_regb_addr_map0_addrmap11 reg_ADDRMAP11;

	reg_ADDRMAP1.u = CSR_READ(CAVM_DSSX_DDRCTL_REGB_ADDR_MAP0_ADDRMAP1(ch));
	reg_ADDRMAP3.u = CSR_READ(CAVM_DSSX_DDRCTL_REGB_ADDR_MAP0_ADDRMAP3(ch));
	reg_ADDRMAP4.u = CSR_READ(CAVM_DSSX_DDRCTL_REGB_ADDR_MAP0_ADDRMAP4(ch));
	reg_ADDRMAP5.u = CSR_READ(CAVM_DSSX_DDRCTL_REGB_ADDR_MAP0_ADDRMAP5(ch));
	reg_ADDRMAP6.u = CSR_READ(CAVM_DSSX_DDRCTL_REGB_ADDR_MAP0_ADDRMAP6(ch));
	reg_ADDRMAP7.u = CSR_READ(CAVM_DSSX_DDRCTL_REGB_ADDR_MAP0_ADDRMAP7(ch));
	reg_ADDRMAP8.u = CSR_READ(CAVM_DSSX_DDRCTL_REGB_ADDR_MAP0_ADDRMAP8(ch));
	reg_ADDRMAP9.u = CSR_READ(CAVM_DSSX_DDRCTL_REGB_ADDR_MAP0_ADDRMAP9(ch));
	reg_ADDRMAP10.u = CSR_READ(CAVM_DSSX_DDRCTL_REGB_ADDR_MAP0_ADDRMAP10(ch));
	reg_ADDRMAP11.u = CSR_READ(CAVM_DSSX_DDRCTL_REGB_ADDR_MAP0_ADDRMAP11(ch));

	my_map[COL_B3] = reg_ADDRMAP6.s.addrmap_col_b3;
	my_map[COL_B4] = reg_ADDRMAP6.s.addrmap_col_b4;
	my_map[COL_B5] = reg_ADDRMAP6.s.addrmap_col_b5;
	my_map[COL_B6] = reg_ADDRMAP6.s.addrmap_col_b6;
	my_map[COL_B7] = reg_ADDRMAP5.s.addrmap_col_b7;
	my_map[COL_B8] = reg_ADDRMAP5.s.addrmap_col_b8;
	my_map[COL_B9] = reg_ADDRMAP5.s.addrmap_col_b9;
	my_map[COL_B10] = reg_ADDRMAP5.s.addrmap_col_b10;

	my_map[BG_B0] = reg_ADDRMAP4.s.addrmap_bg_b0;
	my_map[BG_B1] = reg_ADDRMAP4.s.addrmap_bg_b1;
	my_map[BG_B2] = reg_ADDRMAP4.s.addrmap_bg_b2;

	my_map[BANK_B0] = reg_ADDRMAP3.s.addrmap_bank_b0;
	my_map[BANK_B1] = reg_ADDRMAP3.s.addrmap_bank_b1;

	my_map[ROW_B0] = reg_ADDRMAP11.s.addrmap_row_b0;
	my_map[ROW_B1] = reg_ADDRMAP11.s.addrmap_row_b1;
	my_map[ROW_B2] = reg_ADDRMAP10.s.addrmap_row_b2;
	my_map[ROW_B3] = reg_ADDRMAP10.s.addrmap_row_b3;
	my_map[ROW_B4] = reg_ADDRMAP10.s.addrmap_row_b4;
	my_map[ROW_B5] = reg_ADDRMAP10.s.addrmap_row_b5;
	my_map[ROW_B6] = reg_ADDRMAP9.s.addrmap_row_b6;
	my_map[ROW_B7] = reg_ADDRMAP9.s.addrmap_row_b7;
	my_map[ROW_B8] = reg_ADDRMAP9.s.addrmap_row_b8;
	my_map[ROW_B9] = reg_ADDRMAP9.s.addrmap_row_b9;
	my_map[ROW_B10] = reg_ADDRMAP8.s.addrmap_row_b10;
	my_map[ROW_B11] = reg_ADDRMAP8.s.addrmap_row_b11;
	my_map[ROW_B12] = reg_ADDRMAP8.s.addrmap_row_b12;
	my_map[ROW_B13] = reg_ADDRMAP8.s.addrmap_row_b13;
	my_map[ROW_B14] = reg_ADDRMAP7.s.addrmap_row_b14;
	my_map[ROW_B15] = reg_ADDRMAP7.s.addrmap_row_b15;
	my_map[ROW_B16] = reg_ADDRMAP7.s.addrmap_row_b16;
	my_map[ROW_B17] = reg_ADDRMAP7.s.addrmap_row_b17;

	my_map[CS_BIT0] = reg_ADDRMAP1.s.addrmap_cs_bit0;
}

static void get_ch_addrmap(int ch, uint8_t *addrmap)
{
	if (cavm_is_platform(PLATFORM_ASIM)) {
		// set up the address map as is done during init, using some settings
		setup_addrmap_entries(addrmap, /*num_col*/10, /*num_bg*/8,
							  /*num_bank*/4, /*num_row*/18, /*num_cs*/2);
	} else {
		// set up the address map by reading from the channel ADDRMAPx CSRs
		read_addrmap_entries(ch, addrmap);
	}
}

////////////////////////////////////////////////////////
// FROM_PA helper: translate offset to geometry settings
//
// INPUT:
//    ch
//    offset
//
// OUTPUT:
//    row,rank,bg,bank,col
//
static void from_pa_offset_to_geometry(addr_xlate_t *xlate)
{
	int i, j;
	uint64_t bitmask, offset;
	int bit, bitshift, map, pos;
	uint32_t fields[LAST_ADDRMAP_FIELD];
	uint8_t addrmap[LAST_ADDRMAP_BITS];

	// set up the address map from the channel ADDRMAPx CSRs
	get_ch_addrmap(xlate->ch, addrmap);

	// "offset" contains *all* the low-order 7 bits from the PA, including
	//  the lowest 2 ("bus" or DQ width) and the 3 column bits [2:0]
	//  that are not used in the mapping described by the ADDRMAPn CSRs.
	// Remember also that the ADDRMAPn CSRs "ignore" COL[2:0]
	offset = xlate->offset >> 2; // adjust to ignore the "bus" bits

	for (i = COL_BITS; i < LAST_ADDRMAP_FIELD; i++) {
		fields[i] = 0;
		pos = field_ctl[i].pos;
		for (j = field_ctl[i].first; j <= field_ctl[i].last; j++) {
			map = addrmap[j];
			if ((map == 0x3F) || (map == 0x1F)) // FIXME: this should be better!!!
				break;
			bitshift = map + internal_base[j]; // where it is coming from
			bitmask = (1ull << bitshift);

			bit = !!(offset & bitmask); // what is it now
			if (bit)
				fields[i] |= (1 << pos);

			pos++;
		}
	}

	// set the geometry to the struct
	xlate->col = fields[COL_BITS];
	xlate->col |= offset & 7; // OR in the 3 LS column bits from the offset/PA

	xlate->bg = fields[BG_BITS];
	xlate->bank = fields[BANK_BITS];
	xlate->row = fields[ROW_BITS];
	xlate->rank = fields[CS_BITS];
}

///////////////////////////////////////////////////////////////////
// FROM_PA helper: find SAM_ASC_REGION entry for a physical address
//
// INPUT:
//    addr_xlate_t *
//        allows access to: physical address and ch_mask fields
//
// OUTPUT:
//    region table index, or -1 on error
//
static int find_region_for_pa(addr_xlate_t *xlate/* was: uint64_t phys_addr*/)
{
	int r;

	for (r = 0; r < MAX_NUM_ASC_REGIONS; r++) {
		CSR_INIT(reg_attr, CAVM_SAM_ASC_REGIONX_ATTR(r));
		if (reg_attr.s.s_en || reg_attr.s.ns_en) { // region is active...
			CSR_INIT(reg_start, CAVM_SAM_ASC_REGIONX_START(r));
			CSR_INIT(reg_end, CAVM_SAM_ASC_REGIONX_END(r));
			reg_end.s.reserved_0_23 = 0xffffff;
			if ((reg_start.u <= xlate->phys_addr) && (xlate->phys_addr <= reg_end.u)) {
				// check incoming ch_mask vs what is in the region!!!
				// maybe issue an debug_ras(when it is bizarre...???
				if (xlate->ch_mask != reg_attr.s.dmc_mask) {
					debug_ras("DEBUG: FROM_PA helper %s: xlate->ch_mask 0x%x REPLACED BY region #%d dmc_mask 0x%x\n",
							  __func__, xlate->ch_mask, r, reg_attr.s.dmc_mask);
					xlate->ch_mask = reg_attr.s.dmc_mask;
				}
				return r; // take the first one!
			}
		}
	}
	return -1;
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

/////////////////////////////////////////////////////
// FROM_PA:
//   Translate from PA to channel local geometry
/////////////////////////////////////////////////////

// Primary use:
//   supply geometry for reports of comparison (CMP) errors during memory testing,
//   as well as for use in injecting DSS-based ECC errors

// coeffs and coeffs_table
//   Support for up to 16 DMC memory channels on CN10X
//
struct coeffs {
	uint8_t A, B, C, D, E;
};

static const struct coeffs table[] = {
	/* A  B  C  D  E */
	[1] = { 0, 0, 0, 0, 0 },
	[2] = { 1, 0, 0, 0, 0 },
	[3] = { 0, 1, 0, 0, 0 },
	[4] = { 2, 0, 1, 0, 0 },
	[6] = { 3, 1, 0, 0, 0 },
	[8] = { 4, 0, 2, 1, 0 },
	[12] = { 6, 2, 1, 0, 0 },
	[16] = { 8, 0, 4, 2, 1 },
};

// FIXME: for use during simulation, remove when not needed
static const uint64_t DMC_HASH[4] = {
	[3] = 0xfffffffffUL, /* SAM_DMC_HASH3[CO] */
	[2] = 0x555555555UL, /* SAM_DMC_HASH2[CO] */
	[1] = 0x333333333UL, /* SAM_DMC_HASH1[CO] */
	[0] = 0x111111111UL /* SAM_DMC_HASH0[CO] */
};

//
// Translate from Physical Address to channel-local geometry
//
// INPUT:
//    phys_addr
//    ch_mask
//
// OUTPUT: (currently)
//    ch
//    offset
//
// OUTPUT: (future)
//    ch
//    offset
//    row,rank,bg,bank,col
//
int cn10k_dram_xlate_from_pa(addr_xlate_t *xlate)
{
	int i, j, limit;
	uint64_t a, b, hash;
	int region;

	uint64_t pa_43_7 = xlate->phys_addr >> 7;
	uint64_t padmchashed_10_7 = 0;

	// find the region that holds the physical address, so we can use its info
	region = find_region_for_pa(xlate);
	if (region < 0) { // FAILED!!!
		printf("%s: ASC_REGION holding PA (0x%llx) NOT FOUND!!!\n", __func__, xlate->phys_addr);
		return -1;
	}

	// use the (possibly) updated ch_mask from the region the PA is in!!!
	int P = __builtin_popcount(xlate->ch_mask);

	debug_ras("DEBUG: FROM_PA entry: phys_addr 0x%llx, ch_mask 0x%x\n",
			xlate->phys_addr, xlate->ch_mask);

	// this first part simply computes the channel and relative offset
	// from the given physical address

	for (i = 3; i >= 0; i--) {

		if (cavm_is_platform(PLATFORM_ASIM)) {
			hash = DMC_HASH[i];
		} else {
			// FIXME? will this work for EMUL?
			CSR_INIT(reg_HASH, CAVM_SAM_DMC_HASHX(i));
			hash = reg_HASH.s.co;
		}

		a = hash & pa_43_7;

		b = 0;
		limit = 43 - 7;

		do {
			b ^= a & 1;
		} while ((a >>= 1) && --limit);

		padmchashed_10_7 |= b << i;
	}

	uint64_t padmchashed_43_7 = (pa_43_7 & 0x1FFFFFFFF0UL) | padmchashed_10_7;
	uint64_t padmchashed_7 = (padmchashed_10_7       )& 1;
	uint64_t padmchashed_8 = (padmchashed_10_7  >> 1) & 1;
	uint64_t padmchashed_9 = (padmchashed_10_7  >> 2) & 1;
	uint64_t padmchashed_10 = (padmchashed_10_7 >> 3) & 1;

	const struct coeffs *c = &table[P];

	uint64_t dmc_index = padmchashed_7         * c->A +
						(padmchashed_43_7 % 3) * c->B +
						padmchashed_8          * c->C +
						padmchashed_9          * c->D +
						padmchashed_10         * c->E;

	int dmc_number[MAX_MEM_CHANS];
	int tmp_mask = xlate->ch_mask;

	j = 0;
	do {
		i = __builtin_ffs(tmp_mask) - 1;
		dmc_number[j++] = i;
	} while (tmp_mask ^= (1 << i));

	// FIXME? validity check on dmc_index vs # of found entries (j)
	xlate->ch = dmc_number[dmc_index];

	// make sure the (possibly) updated ch_mask holds the channel we just got
	if (!(xlate->ch_mask & (1 << xlate->ch))) {
		printf("%s: ASC_REGION %d holding PA (0x%llx) does not map channel %d!!!\n",
			   __func__, region, xlate->phys_addr, xlate->ch);
		return -1; // FIXME???
	}

	// NOTE: contains *all* the low-order 7 bits from the PA, including
	//       the lowest 2 ("bus" or DQ width) and the 3 column bits [2:0]
	//       that are not used in the mapping described by the ADDRMAPn CSRs
	xlate->offset = (((padmchashed_43_7) / P) << 7) | (xlate->phys_addr & 0x7F);

	CSR_INIT(reg_off, CAVM_SAM_ASC_REGIONX_OFFSET(region));
	xlate->offset += reg_off.u;

	// eliminate extraneous (high order) bits: offset must be less than the size
	uint64_t off_mask = ((uint64_t) cn10k_dram_get_size_mbytes_ch(xlate->ch) << 20) - 1;

	xlate->offset &= off_mask;

	// to finish, translate the offset into the geometry setting
	from_pa_offset_to_geometry(xlate);

	debug_ras("FROM_PA: DMC%d (Rank%d,BG%d,BANK%d,ROW 0x%05x,COL 0x%04x)[PA 0x%llx/0x%llx]\n",
			  xlate->ch, xlate->rank, xlate->bg, xlate->bank, xlate->row,
			  xlate->col, xlate->phys_addr, xlate->offset);

	return 0;
}

/////////////////////////////////////////////////////
// TO_PA:
//   Translate to PA from channel local geometry
/////////////////////////////////////////////////////

static int ch_to_dmc_index(addr_xlate_t *xlate)
{
	uint8_t dmc_index[MAX_MEM_CHANS];
	int i, j;
	uint32_t dmc_mask = xlate->ch_mask;

	memset(dmc_index, 0xff, sizeof(dmc_index));

	j = 0;
	do {
		i = __builtin_ffsl(dmc_mask) - 1;
		dmc_index[i] = j++;
	} while (dmc_mask ^= (1ul << i));

	return dmc_index[xlate->ch];
}

/* ported from Anne Lacroix's C++ code */

struct multipliers {
	uint8_t V, W, X, Y, Z;
};

static const struct multipliers mulr[] = {
// V=bit9, W=bit8, X=bit7, Y=mod3 Z=final
	/*  V   W   X   Y  Z */
	[1] = { 0,   0, 3,  4, 6 },
	[2] = { 0,  18, 9,  4, 12 },
	[3] = { 36, 18, 9, 16, 24 },
};

static int get_remainder(int dmc_index, int f2, int f3)
{
	int remainder;
	int mod3, bit7, bit8, bit9;
	int i;

	if (f3 == 0) {                                   // f3 = 0
		remainder = 0;
		// reverse the bits of dmc_index
		for (i = 0; i < f2; i++) {
			remainder = (remainder << 1) | (dmc_index & 1);
			dmc_index >>= 1;
		}
	} else if (f2 == 0) {                           // f2 == 0, f3 == 1
		remainder = dmc_index;
	} else {
		bit9 = 0;
		bit8 = 0;
		if (f2 >= 2) {
			if (f2 > 2) {
				bit9 = dmc_index & 1;
				dmc_index >>= 1;
			}
			bit8 = dmc_index & 1;
			dmc_index >>= 1;
		}
		mod3 = dmc_index % 3;
		bit7 = dmc_index / 3;

		const struct multipliers *mp = &mulr[f2];

		remainder = (mp->V * bit9 + mp->W * bit8 + mp->X * bit7 + mp->Y * mod3) % mp->Z;
	}

	return remainder;
}

static int get_pa_10_7(uint64_t pa_dmchashed)
{
	union {
		uint64_t u;
		struct {
			uint64_t bits_10_7 : 4;
			uint64_t the_rest : 60;
		} s;
	} my_pa_43_7;

	uint64_t pa_dmchashed_10_7 = (pa_dmchashed >> 7) & 0xF;

	my_pa_43_7.u = pa_dmchashed >> 7;

	int n, i, j, limit;
	uint64_t a, b, hash;

	for (n = 0; n < 16; n++) {
		my_pa_43_7.s.bits_10_7 = n;
		uint64_t my_pa_dmchashed_10_7 = 0;

		for (i = 3; i >= 0; i--) {

			if (cavm_is_platform(PLATFORM_ASIM)) {
				hash = DMC_HASH[i];
			} else {
				// FIXME? will this work for EMUL?
				CSR_INIT(reg_HASH, CAVM_SAM_DMC_HASHX(i));
				hash = reg_HASH.s.co;
			}

			a = hash & my_pa_43_7.u;

			b = 0;
			limit = 43 - 7;

			for (j = 0; j <= limit; j++)
				b ^= (a >> j) & 1;

			my_pa_dmchashed_10_7 |= b << i;
		}

		if (my_pa_dmchashed_10_7 == pa_dmchashed_10_7)
			return n; /* found it! */
	}

	return -1; /* did not find it */
}

static uint64_t get_offset_from_region_pa(int region, uint64_t pa, int ch)
{
	int i, limit;
	uint64_t a, b, hash, ret = 0;

	uint64_t pa_43_7 = pa >> 7;

	CSR_INIT(reg_attr, CAVM_SAM_ASC_REGIONX_ATTR(region));

	int dmc_mask = reg_attr.s.dmc_mask;
	int P = __builtin_popcount(dmc_mask);

	// this first part simply computes the channel and relative offset
	// from the given physical address

	uint64_t padmchashed_10_7 = 0;

	for (i = 3; i >= 0; i--) {

		if (cavm_is_platform(PLATFORM_ASIM)) {
			hash = DMC_HASH[i];
		} else {
			// FIXME? will this work for EMUL?
			CSR_INIT(reg_HASH, CAVM_SAM_DMC_HASHX(i));
			hash = reg_HASH.s.co;
		}

		a = hash & pa_43_7;
		b = 0;
		limit = 43 - 7;
		do {
			b ^= a & 1;
		} while ((a >>= 1) && --limit);

		padmchashed_10_7 |= b << i;
	}
	uint64_t padmchashed_43_7 = (pa_43_7 & 0x1FFFFFFFF0UL) | padmchashed_10_7;

	// NOTE: contains *all* the low-order 7 bits from the PA, including
	//       the lowest 2 ("bus" or DQ width) and the 3 column bits [2:0]
	//       that are not used in the mapping described by the ADDRMAPn CSRs
	ret = (((padmchashed_43_7) / P) << 7) | (pa & 0x7F);

	// add in any OFFSET now
	CSR_INIT(reg_off, CAVM_SAM_ASC_REGIONX_OFFSET(region));
	ret += reg_off.u;

	// eliminate extraneous (high order) bits: offset must be less than the size
	uint64_t off_mask = (((uint64_t) cn10k_dram_get_size_mbytes_ch(ch)) << 20) - 1;

	ret &= off_mask;

	debug_ras("DEBUG: TO_PA helper %s: region %d PA 0x%llx BECAME offset 0x%llx\n", __func__, region, pa, ret);

	return ret;
}

///////////////////////////////////////////////////////////////////
// TO_PA helper: find SAM_ASC_REGION entry for a given channel
//
// INPUT:
//    addr_xlate_t *
//        allows access to: physical address and ch_mask fields
//
// OUTPUT:
//    region table index, or -1 on error
//
static int find_region_for_ch_offset(addr_xlate_t *xlate)
{
	int region;
	int ch_mask = (1 << xlate->ch);

	for (region = 0; region < MAX_NUM_ASC_REGIONS; region++) {
		CSR_INIT(reg_attr, CAVM_SAM_ASC_REGIONX_ATTR(region));
		if (reg_attr.s.s_en || reg_attr.s.ns_en) { // region is active...

			// if the channel is in the region mask...
			if ((ch_mask & reg_attr.s.dmc_mask) == ch_mask) {

				// translate START and END into offsets and see if they hold the incoming one
				CSR_INIT(reg_start, CAVM_SAM_ASC_REGIONX_START(region));
				CSR_INIT(reg_end, CAVM_SAM_ASC_REGIONX_END(region));
				reg_end.s.reserved_0_23 = 0xffffff;
				uint64_t start_offset = get_offset_from_region_pa(region, reg_start.u, xlate->ch);
				uint64_t end_offset = get_offset_from_region_pa(region, reg_end.u, xlate->ch);

				debug_ras("DEBUG: TO_PA helper %s: Found region %d with mask 0x%02x using DMC %d\n",
						  __func__, region, reg_attr.s.dmc_mask, xlate->ch);
				debug_ras("DEBUG: TO_PA helper %s: region %d START_PA 0x%llx, END_PA 0x%llx\n",
						  __func__, region, reg_start.u, reg_end.u);
				debug_ras("DEBUG: TO_PA helper %s: region %d START_OFFSET 0x%llx, END_OFFSET 0x%llx\n",
						  __func__, region, start_offset, end_offset);

				if ((xlate->offset >= start_offset) && (xlate->offset <= end_offset)) {

					debug_ras("DEBUG: TO_PA helper %s: region %d offset 0x%llx IS INSIDE [0x%llx, 0x%llx]\n",
							  __func__, region, xlate->offset, start_offset, end_offset);
					xlate->ch_mask = reg_attr.s.dmc_mask; // return this update!!!
					return region;
				}
			}
		}
	}

	return -1;
}

static int find_lowest_matching_region_mask(addr_xlate_t *xlate)
{
	int region;
	int ch_mask = xlate->ch_mask;
	uint64_t min_pa = ~0L;
	int min_region = -1;

	for (region = 0; region < MAX_NUM_ASC_REGIONS; region++) {
		CSR_INIT(reg_attr, CAVM_SAM_ASC_REGIONX_ATTR(region));
		if (reg_attr.s.s_en || reg_attr.s.ns_en) { // region is active...

			// if the region matches the channel mask...
			if (reg_attr.s.dmc_mask == ch_mask) {

				// get the START address and see if it is minimum
				CSR_INIT(reg_start, CAVM_SAM_ASC_REGIONX_START(region));

				debug_ras("DEBUG: TO_PA helper %s: Found region %d with mask 0x%02x start 0x%llx\n",
						  __func__, region, reg_attr.s.dmc_mask, reg_start.u);

				if (reg_start.u < min_pa) {
					debug_ras("DEBUG: TO_PA helper %s: region %d start 0x%llx IS NEW MIN\n", __func__, region, reg_start.u);
					min_pa = reg_start.u;
					min_region = region;
				}
			}
		}
	}

	return min_region;
}

// TO_PA Utility: translate channel + offset to PA
//
// INPUT:
//    ch
//    ch_mask
//    offset
//    rank,bg,bank,row,col
//
// OUTPUT: (currently)
//    phys_addr (dummy)
//
// OUTPUT: (future)
//    phys_addr (accurate)

static int from_ch_offset_to_pa(addr_xlate_t *xlate)
{
	// find the region in which this channel and relative offset fall
	int region = 0;
	uint64_t working_offset = 0;
	int P = 0;
	int f2 = 0, f3 = 0;
	int pa_10_7;

	region = find_region_for_ch_offset(xlate);

	if (region < 0) {
		debug_ras("DEBUG: TO_PA helper %s: ERROR: NO REGION FOUND for ch %d containing offset 0x%llx\n",
				  __func__, xlate->ch, xlate->offset);
		return -1;
	}

	// make a copy, we may need to modify it to properly calculate the PA
	working_offset = xlate->offset;

	// adjust the initial offset by the offset of the START address of the region
	CSR_INIT(reg_offset, CAVM_SAM_ASC_REGIONX_OFFSET(region));

	if (reg_offset.u > 0) {
		CSR_INIT(reg_start, CAVM_SAM_ASC_REGIONX_START(region));
		uint64_t start_offset = get_offset_from_region_pa(region, reg_start.u, xlate->ch);

		debug_ras("DEBUG: TO_PA helper %s: ch %d ADJUSTING offset 0x%llx DOWN BY start offset 0x%llx\n",
				  __func__, xlate->ch, xlate->offset, start_offset);

		working_offset -= start_offset; // adjust offset to relative to the start of the region
	}
	//?
	xlate->ch_mask = cn10k_get_ch_mask();
	P = __builtin_popcount(xlate->ch_mask); // possibly updated mask
	if (find_factors(P, &f2, &f3)) {
		printf("find_factors() error\n");
		return -1;
	}

	int dmc_index = ch_to_dmc_index(xlate);

	uint64_t remainder = get_remainder(dmc_index, f2, f3);

	// make sure to use the possibly modified version of OFFSET here...
	uint64_t pa_dmchashed = ((working_offset & 0xFFFFFFFFF80UL) * P)
							+ (remainder * 128) + (working_offset & 0x7FUL);

	pa_10_7 = get_pa_10_7(pa_dmchashed);
	if (pa_10_7 == -1) {
		printf("get_pa_10_7() error\n");
		return -1;
	}

	xlate->phys_addr = (pa_dmchashed & 0xFFFFFFFF87FUL) | (pa_10_7 << 7);

	debug_ras("DEBUG: TO_PA helper %s: region %d offset 0x%llx working_offset 0x%llx PA 0x%llx\n",
			  __func__, region, xlate->offset, working_offset, xlate->phys_addr);

	// find the region with matching mask and lowest START in which this channel and relative offset fall
	int min_region = find_lowest_matching_region_mask(xlate);

	if (min_region < 0) {
		debug_ras("DEBUG: TO_PA helper %s: ERROR: NO LOWEST REGION FOUND for MASK 0x%02x\n", __func__, xlate->ch_mask);
		min_region = region; // go with the initial region
	}

	// update PA by adding in the base of the "lowest PA" region match
	CSR_INIT(reg_start, CAVM_SAM_ASC_REGIONX_START(min_region));
	xlate->phys_addr += reg_start.u;

	debug_ras("DEBUG: TO_PA helper %s: min_region %d start 0x%llx PA 0x%llx\n",
			  __func__, region, reg_start.u, xlate->phys_addr);

	return 0;
}

// Translate from channel-local geometry to Physical Address
//
// Primary use:
//    supply physical address for report of DSS channel-based ECC errors
//
// INPUT:
//    ch
//    ch_mask
//    row,rank,bg,bank,col
//
// OUTPUT: (currently)
//    offset
//    phys_addr (dummy)
//
// OUTPUT: (future)
//    offset
//    phys_addr (accurate)
//
void cn10k_dram_xlate_to_pa(addr_xlate_t *xlate)
{
	int i, j;
	uint64_t bitmask, offset;
	int bit, bitshift, map, pos;
	uint32_t fields[LAST_ADDRMAP_FIELD];
	uint8_t addrmap[LAST_ADDRMAP_BITS];

	// This first part simply unpacks the bits in the geometry fields
	// and places them into their positions in the channel-relative offset

	// set up the address map from the channel ADDRMAPx CSRs
	get_ch_addrmap(xlate->ch, addrmap);

	// fetch the geometry from the struct
	fields[COL_BITS] = xlate->col;
	fields[BG_BITS] = xlate->bg;
	fields[BANK_BITS] = xlate->bank;
	fields[ROW_BITS] = xlate->row;
	fields[CS_BITS] = xlate->rank;

	// Remember that the final offset will include *only* the mapped bits
	//  which are detailed by the ADDRMAPn CSRs, so that COL[2:0] are ignored
	offset = 0;

	for (i = COL_BITS; i < LAST_ADDRMAP_FIELD; i++) {
		pos = field_ctl[i].pos;
		for (j = field_ctl[i].first; j <= field_ctl[i].last; j++) {
			map = addrmap[j];
			if ((map == 0x3F) || (map == 0x1F)) // FIXME: this should be better!!!
				break;

			bitshift = map + internal_base[j]; // where to put it
			bitmask = (1ull << bitshift);
			bit = !!(fields[i] & (1 << pos)); // what is it now
			if (bit)
				offset |= bitmask;
			pos++;
		}
	}

	// OR in the LS 3 bits from the column field
	offset |= (xlate->col & 7);

	// put it into the struct
	xlate->offset = offset << 2; // restore the "bus" bits

	// The final part is to translate the channel + offset into the physical address

	from_ch_offset_to_pa(xlate);

	debug_ras("TO_PA: DMC%d (Rank%d,BG%d,BANK%d,ROW 0x%05x,COL 0x%04x)[PA 0x%llx/0x%llx]\n",
			  xlate->ch, xlate->rank, xlate->bg, xlate->bank, xlate->row,
			  xlate->col, xlate->phys_addr, xlate->offset);
}

