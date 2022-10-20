#ifndef __DSS_RAS_H__
#define __DSS_RAS_H__
#include <cavm-csrs-dss.h>

#define cavm_clock_get_count(...)	read_cntpct_el0()
#define cavm_clock_get_rate(...)	read_cntfrq_el0()
#define cavm_wait_usec(usec)		udelay(usec)

/* Total number of controllers on cn10k family */
#define MAX_MEM_CHANS		6

#define DATA_LANE_BITS			2 // for 32-bit channels
#define MAX_DATA_LANES			(1 << DATA_LANE_BITS)
//#define BLM (MAX_DATA_LANES - 1)	// BLM == Byte-Lane Mask
#define MAX_POLL_COUNT			100000

typedef struct {
	uint64_t phys_addr; // needs 44(?) bits
	uint64_t offset;    // channel local offset
	uint32_t ch;        // DSS/DMC number
	int ch_mask;        // channel mask
	// channel local geometry info
	uint32_t row;       // needs 18 bits
	uint16_t rank;      // needs 1 bit
	uint16_t bg;        // needs 3 bits
	uint16_t bank;      // needs 2 bits
	uint16_t col;       // needs 11 (ECC) or 12 bits (POISON) ???
} addr_xlate_t;

extern int cn10k_get_ch_mask(void);
extern void cn10k_dram_xlate_to_pa(addr_xlate_t *xlate);
extern int cn10k_dram_xlate_from_pa(addr_xlate_t *xlate);

/* These routines are based on Table 13-2 in the DWC Databook
 *
 * flip2bit - decode bit number from input: ECCSTAT[corrected_bit_num]
 * bit2flip - encode bit number to  output: ECCCFG2[flip_bit_pos?]
 * set this for 64, since we are using the multi-beat ECC scheme
 */

// This is for decode of ECCSTAT[corrected_bit_num]
static inline int cn10k_dram_flip2bit(int ch, int flip)
{
	int dec, temp;
	cavm_dssx_ddrctl_regb_ddrc_ch0_ecccfg0_t reg_ECCCFG0;
	int MY_DATA_WIDTH;

	reg_ECCCFG0.u = CSR_READ(CAVM_DSSX_DDRCTL_REGB_DDRC_CH0_ECCCFG0(ch));
	MY_DATA_WIDTH = (reg_ECCCFG0.s.ecc_type == 1) ? 64 : 32;

	if (__builtin_popcount(flip) < 2) // one of the special ones
		return (MY_DATA_WIDTH + ((flip) ? (__builtin_ffs(flip)) : 0));

	dec = 0;
	temp = flip >> 1;
	while ((temp >>= 1))
		dec++;
	return (flip - 3 - dec);
}

// This is for encode of ECCCFG3[flip_bit_pos?]
static inline int cn10k_dram_bit2flip(int ch, int bit)
{
	cavm_dssx_ddrctl_regb_ddrc_ch0_ecccfg0_t reg_ECCCFG0;
	int flip;
	int MY_DATA_WIDTH;

	reg_ECCCFG0.u = CSR_READ(CAVM_DSSX_DDRCTL_REGB_DDRC_CH0_ECCCFG0(ch));

	MY_DATA_WIDTH = (reg_ECCCFG0.s.ecc_type == 1) ? 64 : 32;

	if (bit >= MY_DATA_WIDTH) { // special ones
		flip = bit - MY_DATA_WIDTH;
		return (flip) ? (1 << (flip - 1)) : 0;
	}

	/* this is the brute force method
	 * we search for the correct encoding
	 */
	for (flip = 0; flip < (MY_DATA_WIDTH + 8); flip++)
		if (bit == cn10k_dram_flip2bit(ch, flip))
			return flip;
	return -1;
}
#endif
