#ifndef __CAVM_CSRS_PRCHN_H__
#define __CAVM_CSRS_PRCHN_H__
/* This file is auto-generated. Do not edit */

/***********************license start***********************************
* Copyright (C) 2020 Marvell
* SPDX-License-Identifier: BSD-3-Clause
* https://spdx.org/licenses
***********************license end**************************************/


/**
 * @file
 *
 * Configuration and status register (CSR) address and type definitions for
 * OcteonTX PRCHN.
 *
 * This file is auto generated. Do not edit.
 *
 */

/**
 * Structure prchn_du2_s
 *
 * DU Structure
 * Contains the 2*Du from this physical root sequence, expressed in the resolution of
 * IFFT time window.
 */
union cavm_prchn_du2_s
{
    uint64_t u;
    struct cavm_prchn_du2_s_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_11_63        : 53;
        uint64_t du2                   : 11; /**< [ 10:  0] 2Du value for zero-correlation zone N; unit is the resolution of IFFT. */
#else /* Word 0 - Little Endian */
        uint64_t du2                   : 11; /**< [ 10:  0] 2Du value for zero-correlation zone N; unit is the resolution of IFFT. */
        uint64_t reserved_11_63        : 53;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_prchn_du2_s_s cn; */
};

/**
 * Structure prchn_du_s
 *
 * DU Structure
 * Contains the Du from this physical root sequence, expressed in the resolution of IFFT time window.
 */
union cavm_prchn_du_s
{
    uint64_t u;
    struct cavm_prchn_du_s_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_11_63        : 53;
        uint64_t du                    : 11; /**< [ 10:  0] Du value for zero-correlation zone N; unit is the resolution of IFFT. */
#else /* Word 0 - Little Endian */
        uint64_t du                    : 11; /**< [ 10:  0] Du value for zero-correlation zone N; unit is the resolution of IFFT. */
        uint64_t reserved_11_63        : 53;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_prchn_du_s_s cn; */
};

/**
 * Structure prchn_jd_parm_s
 *
 * PRCHN Common Job Configuration Structure
 * This structure defines the formal of PRCH jobs.
 */
union cavm_prchn_jd_parm_s
{
    uint64_t u[4];
    struct cavm_prchn_jd_parm_s_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_60_63        : 4;
        uint64_t num_ant               : 4;  /**< [ 59: 56] Number of antennas */
        uint64_t reserved_52_55        : 4;
        uint64_t sym_repetition        : 4;  /**< [ 51: 48] Number of repeated symbols in a PRCH. */
        uint64_t reserved_43_47        : 5;
        uint64_t zc_length             : 11; /**< [ 42: 32] Length of ZC sequence length
                                                                 For internally generated ZC sequence (zcseq_mode=0x0), zc_length should be one
                                                                 of 139, 571,839 and 1151.
                                                                 For externally generated ZC sequence (zcseq_mode=0x1), if ifft_siz=0x0,
                                                                 zc_length needs to be a prime number and less than 511
                                                                 if ifft_size=0x1, zc_length needs to be a prime number and between [513,2047] */
        uint64_t reserved_25_31        : 7;
        uint64_t zcseq_mode            : 1;  /**< [ 24: 24] 0: internal ZC sequence
                                                                 1: external ZC sequence
                                                                 The length of ZC sequence equals to zc_length. */
        uint64_t reserved_23           : 1;
        uint64_t num_of_root_seq       : 7;  /**< [ 22: 16] Number of root sequences to generate for detection. */
        uint64_t reserved_15           : 1;
        uint64_t num_preambles         : 7;  /**< [ 14:  8] Number of preambles to be detected */
        uint64_t reserved_6_7          : 2;
        uint64_t pf_in_en              : 1;  /**< [  5:  5] 0: disable input of power profile
                                                                 1: enable input power profile for all root sequence */
        uint64_t pf_out_en             : 1;  /**< [  4:  4] 0: disable output power profile for all root sequence
                                                                 1: output power profile for all root sequence. */
        uint64_t reserved_2_3          : 2;
        uint64_t input_offset          : 2;  /**< [  1:  0] Number of samples of offset applied to the first word of input samples from
                                                                 RDDMA for each symbol and antenna. */
#else /* Word 0 - Little Endian */
        uint64_t input_offset          : 2;  /**< [  1:  0] Number of samples of offset applied to the first word of input samples from
                                                                 RDDMA for each symbol and antenna. */
        uint64_t reserved_2_3          : 2;
        uint64_t pf_out_en             : 1;  /**< [  4:  4] 0: disable output power profile for all root sequence
                                                                 1: output power profile for all root sequence. */
        uint64_t pf_in_en              : 1;  /**< [  5:  5] 0: disable input of power profile
                                                                 1: enable input power profile for all root sequence */
        uint64_t reserved_6_7          : 2;
        uint64_t num_preambles         : 7;  /**< [ 14:  8] Number of preambles to be detected */
        uint64_t reserved_15           : 1;
        uint64_t num_of_root_seq       : 7;  /**< [ 22: 16] Number of root sequences to generate for detection. */
        uint64_t reserved_23           : 1;
        uint64_t zcseq_mode            : 1;  /**< [ 24: 24] 0: internal ZC sequence
                                                                 1: external ZC sequence
                                                                 The length of ZC sequence equals to zc_length. */
        uint64_t reserved_25_31        : 7;
        uint64_t zc_length             : 11; /**< [ 42: 32] Length of ZC sequence length
                                                                 For internally generated ZC sequence (zcseq_mode=0x0), zc_length should be one
                                                                 of 139, 571,839 and 1151.
                                                                 For externally generated ZC sequence (zcseq_mode=0x1), if ifft_siz=0x0,
                                                                 zc_length needs to be a prime number and less than 511
                                                                 if ifft_size=0x1, zc_length needs to be a prime number and between [513,2047] */
        uint64_t reserved_43_47        : 5;
        uint64_t sym_repetition        : 4;  /**< [ 51: 48] Number of repeated symbols in a PRCH. */
        uint64_t reserved_52_55        : 4;
        uint64_t num_ant               : 4;  /**< [ 59: 56] Number of antennas */
        uint64_t reserved_60_63        : 4;
#endif /* Word 0 - End */
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 1 - Big Endian */
        uint64_t reserved_113_127      : 15;
        uint64_t fdagc_mode            : 5;  /**< [112:108] See Table 3 of MSD */
        uint64_t reserved_105_107      : 3;
        uint64_t fdagc_backoff         : 5;  /**< [104:100] See Table 3 of MSD */
        uint64_t reserved_97_99        : 3;
        uint64_t fdagc_on              : 1;  /**< [ 96: 96] Enable or disable frequency domain AGC
                                                                 0 : off
                                                                 1 : on */
        uint64_t reserved_88_95        : 8;
        uint64_t noise_threshold       : 8;  /**< [ 87: 80] Threshold used for noise measurement.
                                                                 Format is 5b unsigned integer and 3 b decimal. The actual value used is noise_threshold/8. */
        uint64_t reserved_77_79        : 3;
        uint64_t corrcoeff_conv_lvl    : 5;  /**< [ 76: 72] Correlation coefficient output level conversion. Assume bit0 is LSB
                                                                 0x0: [15:0]
                                                                 0x1: [16:1]
                                                                 0x2: [17:2]
                                                                 . . .
                                                                 0x31: [47:31] */
        uint64_t restricted_set        : 2;  /**< [ 71: 70] 0x0: normal mode (unrestricted set);
                                                                 0x1 : high speed mode (restricted set type A);
                                                                 0x2 : very high speed mode(restricted set type B) */
        uint64_t pf_out_format         : 1;  /**< [ 69: 69] Format for power samples
                                                                 0: 10b mantissa and 6 bits exponent
                                                                 1: 16bit unsigned integer. */
        uint64_t ifft_size             : 1;  /**< [ 68: 68] 0: 512
                                                                 1: 2048 */
        uint64_t num_sym_coh           : 4;  /**< [ 67: 64] Number of symbols for each coherent period */
#else /* Word 1 - Little Endian */
        uint64_t num_sym_coh           : 4;  /**< [ 67: 64] Number of symbols for each coherent period */
        uint64_t ifft_size             : 1;  /**< [ 68: 68] 0: 512
                                                                 1: 2048 */
        uint64_t pf_out_format         : 1;  /**< [ 69: 69] Format for power samples
                                                                 0: 10b mantissa and 6 bits exponent
                                                                 1: 16bit unsigned integer. */
        uint64_t restricted_set        : 2;  /**< [ 71: 70] 0x0: normal mode (unrestricted set);
                                                                 0x1 : high speed mode (restricted set type A);
                                                                 0x2 : very high speed mode(restricted set type B) */
        uint64_t corrcoeff_conv_lvl    : 5;  /**< [ 76: 72] Correlation coefficient output level conversion. Assume bit0 is LSB
                                                                 0x0: [15:0]
                                                                 0x1: [16:1]
                                                                 0x2: [17:2]
                                                                 . . .
                                                                 0x31: [47:31] */
        uint64_t reserved_77_79        : 3;
        uint64_t noise_threshold       : 8;  /**< [ 87: 80] Threshold used for noise measurement.
                                                                 Format is 5b unsigned integer and 3 b decimal. The actual value used is noise_threshold/8. */
        uint64_t reserved_88_95        : 8;
        uint64_t fdagc_on              : 1;  /**< [ 96: 96] Enable or disable frequency domain AGC
                                                                 0 : off
                                                                 1 : on */
        uint64_t reserved_97_99        : 3;
        uint64_t fdagc_backoff         : 5;  /**< [104:100] See Table 3 of MSD */
        uint64_t reserved_105_107      : 3;
        uint64_t fdagc_mode            : 5;  /**< [112:108] See Table 3 of MSD */
        uint64_t reserved_113_127      : 15;
#endif /* Word 1 - End */
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 2 - Big Endian */
        uint64_t reserved_180_191      : 12;
        uint64_t srch_2nd_gap          : 4;  /**< [179:176] Samples to be excluded around the main peak for 2nd peak search. */
        uint64_t reserved_175          : 1;
        uint64_t srch_2nd_win_right    : 7;  /**< [174:168] Used to set the size of searching window to the right side of the main peak. The
                                                                 unit is the resolution of IFFT. */
        uint64_t reserved_167          : 1;
        uint64_t srch_2nd_win_left     : 7;  /**< [166:160] Used to set the size of searching window to the left side of main peak. The unit
                                                                 is the resolution of IFFT. */
        uint64_t reserved_155_159      : 5;
        uint64_t preamble_srch_len     : 11; /**< [154:144] Used to set the size of searching window for main peak search. The unit is the
                                                                 resolution of IFFT. See Sec. 2.3.10.1
                                                                 Note that preamble_srch_offset+ preamble_srch_len needs to be less than NCS
                                                                 value expressed in IFFT resolution */
        uint64_t reserved_138_143      : 6;
        uint64_t preamble_srch_offset  : 10; /**< [137:128] Start sample of Ncs in short seq
                                                                 The unit is the resolution of IFFT  See Sec. 2.3.10.1
                                                                 Note that preamble_srch_offset+ preamble_srch_len needs to be less than NCS
                                                                 value expressed in IFFT resolution */
#else /* Word 2 - Little Endian */
        uint64_t preamble_srch_offset  : 10; /**< [137:128] Start sample of Ncs in short seq
                                                                 The unit is the resolution of IFFT  See Sec. 2.3.10.1
                                                                 Note that preamble_srch_offset+ preamble_srch_len needs to be less than NCS
                                                                 value expressed in IFFT resolution */
        uint64_t reserved_138_143      : 6;
        uint64_t preamble_srch_len     : 11; /**< [154:144] Used to set the size of searching window for main peak search. The unit is the
                                                                 resolution of IFFT. See Sec. 2.3.10.1
                                                                 Note that preamble_srch_offset+ preamble_srch_len needs to be less than NCS
                                                                 value expressed in IFFT resolution */
        uint64_t reserved_155_159      : 5;
        uint64_t srch_2nd_win_left     : 7;  /**< [166:160] Used to set the size of searching window to the left side of main peak. The unit
                                                                 is the resolution of IFFT. */
        uint64_t reserved_167          : 1;
        uint64_t srch_2nd_win_right    : 7;  /**< [174:168] Used to set the size of searching window to the right side of the main peak. The
                                                                 unit is the resolution of IFFT. */
        uint64_t reserved_175          : 1;
        uint64_t srch_2nd_gap          : 4;  /**< [179:176] Samples to be excluded around the main peak for 2nd peak search. */
        uint64_t reserved_180_191      : 12;
#endif /* Word 2 - End */
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 3 - Big Endian */
        uint64_t reserved_218_255      : 38;
        uint64_t res_n_acc             : 3;  /**< [217:215] Number of harmonics to be combined in harmonic combining in restricted mode.
                                                                 [1,3] for type A (restricted_set=1)
                                                                 [1,5] for typeB ((restricted_set=2). */
        uint64_t reserved_213_214      : 2;
        uint64_t res_full_sens_level   : 2;  /**< [212:211] Indicate how fast the weighting factor changed with respect to non-coherent
                                                                 combined harmonic level:
                                                                 Value= 0: weighting factor is always 1.0 (corresponding to directly harmonic combination)
                                                                 Value=3: fastest transition. */
        uint64_t reserved_208_210      : 3;
        uint64_t res_full_weight_level : 8;  /**< [207:200] Indicates the point the weight is 1.0 when the non-coherent accumulated result
                                                                 greater than  (noise_estimation x res_full_weight_level). The format is with
                                                                 4-bit fraction number. Therefore, a value of 16 is actually means 1.0x
                                                                 noise_est. */
        uint64_t pf_scalingshifts      : 6;  /**< [199:194] Number of right shifts bits scaling.
                                                                 When pf_scalingmode=0 for absolute scaling, this is the number of right shift bits
                                                                 When pf_scalingmode=1, pf_scalingshifts is the number of right shift bit
                                                                 relative to the level of noise estimation. */
        uint64_t reserved_193          : 1;
        uint64_t pf_scalingmode        : 1;  /**< [192:192] Choose to indicate if power profiling samples (PDP) is fixed scaling or scaled
                                                                 according to noise level.
                                                                 0: absolute scaling, pf_scalingshifts are number of right shifts
                                                                 1: relative to noise estimation. */
#else /* Word 3 - Little Endian */
        uint64_t pf_scalingmode        : 1;  /**< [192:192] Choose to indicate if power profiling samples (PDP) is fixed scaling or scaled
                                                                 according to noise level.
                                                                 0: absolute scaling, pf_scalingshifts are number of right shifts
                                                                 1: relative to noise estimation. */
        uint64_t reserved_193          : 1;
        uint64_t pf_scalingshifts      : 6;  /**< [199:194] Number of right shifts bits scaling.
                                                                 When pf_scalingmode=0 for absolute scaling, this is the number of right shift bits
                                                                 When pf_scalingmode=1, pf_scalingshifts is the number of right shift bit
                                                                 relative to the level of noise estimation. */
        uint64_t res_full_weight_level : 8;  /**< [207:200] Indicates the point the weight is 1.0 when the non-coherent accumulated result
                                                                 greater than  (noise_estimation x res_full_weight_level). The format is with
                                                                 4-bit fraction number. Therefore, a value of 16 is actually means 1.0x
                                                                 noise_est. */
        uint64_t reserved_208_210      : 3;
        uint64_t res_full_sens_level   : 2;  /**< [212:211] Indicate how fast the weighting factor changed with respect to non-coherent
                                                                 combined harmonic level:
                                                                 Value= 0: weighting factor is always 1.0 (corresponding to directly harmonic combination)
                                                                 Value=3: fastest transition. */
        uint64_t reserved_213_214      : 2;
        uint64_t res_n_acc             : 3;  /**< [217:215] Number of harmonics to be combined in harmonic combining in restricted mode.
                                                                 [1,3] for type A (restricted_set=1)
                                                                 [1,5] for typeB ((restricted_set=2). */
        uint64_t reserved_218_255      : 38;
#endif /* Word 3 - End */
    } s;
    /* struct cavm_prchn_jd_parm_s_s cn; */
};

/**
 * Structure prchn_phy_root_s
 *
 * Physical Roots Structure
 * This structure contains one phyical roots.  There are 64 total.
 */
union cavm_prchn_phy_root_s
{
    uint64_t u;
    struct cavm_prchn_phy_root_s_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_11_63        : 53;
        uint64_t res_n_acc             : 11; /**< [ 10:  0] Root physical index to generate preamble. The total number of physical roots to
                                                                 be used is (num_of_root_seq+1). */
#else /* Word 0 - Little Endian */
        uint64_t res_n_acc             : 11; /**< [ 10:  0] Root physical index to generate preamble. The total number of physical roots to
                                                                 be used is (num_of_root_seq+1). */
        uint64_t reserved_11_63        : 53;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_prchn_phy_root_s_s cn; */
};

/**
 * Structure prchn_preampble_start_s
 *
 * Time Sample Index Structure
 * This structure contains beginning time sample index of a zero-correlation zone.
 * There are 64 total.
 */
union cavm_prchn_preampble_start_s
{
    uint64_t u;
    struct cavm_prchn_preampble_start_s_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_11_63        : 53;
        uint64_t preamble_start        : 11; /**< [ 10:  0] Starting index of zero-correlation zone N; unit is the resolution of IFFT */
#else /* Word 0 - Little Endian */
        uint64_t preamble_start        : 11; /**< [ 10:  0] Starting index of zero-correlation zone N; unit is the resolution of IFFT */
        uint64_t reserved_11_63        : 53;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_prchn_preampble_start_s_s cn; */
};

/**
 * Structure prchn_seq_idx_s
 *
 * Root Sequence Index Structure
 * This structure contains the index to indicate which root sequence to use.  There are 64 total.
 */
union cavm_prchn_seq_idx_s
{
    uint64_t u;
    struct cavm_prchn_seq_idx_s_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_6_63         : 58;
        uint64_t seq_idx               : 6;  /**< [  5:  0] Index to indicate which root sequence form parameter phy_root for Nth zero-correlation zone. */
#else /* Word 0 - Little Endian */
        uint64_t seq_idx               : 6;  /**< [  5:  0] Index to indicate which root sequence form parameter phy_root for Nth zero-correlation zone. */
        uint64_t reserved_6_63         : 58;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_prchn_seq_idx_s_s cn; */
};

/**
 * Register (RSL) prchn#_ab#_control0
 *
 * PRCHN Control0 Register
 * This register is used to start PRCHN HAB processing.
 */
union cavm_prchnx_abx_control0
{
    uint64_t u;
    struct cavm_prchnx_abx_control0_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t jobid2                : 16; /**< [ 63: 48](R/W/H) Job ID2 */
        uint64_t jobid1                : 16; /**< [ 47: 32](R/W/H) Job ID1 */
        uint64_t jobid0                : 16; /**< [ 31: 16](R/W/H) Job ID0 */
        uint64_t reserved_3_15         : 13;
        uint64_t start2                : 1;  /**< [  2:  2](R/W/H) Write 1 to start processing the job in configuration slot 2. This bit auto-clears.
                                                                 Writes are ignored when the configuration slot is busy (PRCHN(0)_AB(0..2)_STATUS[STATUS2] = 1). */
        uint64_t start1                : 1;  /**< [  1:  1](R/W/H) Write 1 to start processing the job in configuration slot 1. This bit auto-clears.
                                                                 Writes are ignored when the configuration slot is busy (PRCHN(0)_AB(0..2)_STATUS[STATUS1] = 1). */
        uint64_t start0                : 1;  /**< [  0:  0](R/W/H) Write 1 to start processing the job in configuration slot 0. This bit auto-clears.
                                                                 Writes are ignored when the configuration slot is busy (PRCHN(0)_AB(0..2)_STATUS[STATUS0] = 1). */
#else /* Word 0 - Little Endian */
        uint64_t start0                : 1;  /**< [  0:  0](R/W/H) Write 1 to start processing the job in configuration slot 0. This bit auto-clears.
                                                                 Writes are ignored when the configuration slot is busy (PRCHN(0)_AB(0..2)_STATUS[STATUS0] = 1). */
        uint64_t start1                : 1;  /**< [  1:  1](R/W/H) Write 1 to start processing the job in configuration slot 1. This bit auto-clears.
                                                                 Writes are ignored when the configuration slot is busy (PRCHN(0)_AB(0..2)_STATUS[STATUS1] = 1). */
        uint64_t start2                : 1;  /**< [  2:  2](R/W/H) Write 1 to start processing the job in configuration slot 2. This bit auto-clears.
                                                                 Writes are ignored when the configuration slot is busy (PRCHN(0)_AB(0..2)_STATUS[STATUS2] = 1). */
        uint64_t reserved_3_15         : 13;
        uint64_t jobid0                : 16; /**< [ 31: 16](R/W/H) Job ID0 */
        uint64_t jobid1                : 16; /**< [ 47: 32](R/W/H) Job ID1 */
        uint64_t jobid2                : 16; /**< [ 63: 48](R/W/H) Job ID2 */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_prchnx_abx_control0_s cn; */
};
typedef union cavm_prchnx_abx_control0 cavm_prchnx_abx_control0_t;

static inline uint64_t CAVM_PRCHNX_ABX_CONTROL0(uint64_t a, uint64_t b) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_PRCHNX_ABX_CONTROL0(uint64_t a, uint64_t b)
{
    if ((a==0) && (b<=2))
        return 0x87e042180000ll + 0ll * ((a) & 0x0) + 0x10000ll * ((b) & 0x3);
    __cavm_csr_fatal("PRCHNX_ABX_CONTROL0", 2, a, b, 0, 0, 0, 0);
}

#define typedef_CAVM_PRCHNX_ABX_CONTROL0(a,b) cavm_prchnx_abx_control0_t
#define bustype_CAVM_PRCHNX_ABX_CONTROL0(a,b) CSR_TYPE_RSL
#define basename_CAVM_PRCHNX_ABX_CONTROL0(a,b) "PRCHNX_ABX_CONTROL0"
#define busnum_CAVM_PRCHNX_ABX_CONTROL0(a,b) (a)
#define arguments_CAVM_PRCHNX_ABX_CONTROL0(a,b) (a),(b),-1,-1

/**
 * Register (RSL) prchn#_ab#_eco
 *
 * INTERNAL: PRCHN ECO Register
 */
union cavm_prchnx_abx_eco
{
    uint64_t u;
    struct cavm_prchnx_abx_eco_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_32_63        : 32;
        uint64_t eco_rw                : 32; /**< [ 31:  0](R/W) Internal:
                                                                 Reserved for ECO usage. */
#else /* Word 0 - Little Endian */
        uint64_t eco_rw                : 32; /**< [ 31:  0](R/W) Internal:
                                                                 Reserved for ECO usage. */
        uint64_t reserved_32_63        : 32;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_prchnx_abx_eco_s cn; */
};
typedef union cavm_prchnx_abx_eco cavm_prchnx_abx_eco_t;

static inline uint64_t CAVM_PRCHNX_ABX_ECO(uint64_t a, uint64_t b) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_PRCHNX_ABX_ECO(uint64_t a, uint64_t b)
{
    if ((a==0) && (b<=2))
        return 0x87e042180010ll + 0ll * ((a) & 0x0) + 0x10000ll * ((b) & 0x3);
    __cavm_csr_fatal("PRCHNX_ABX_ECO", 2, a, b, 0, 0, 0, 0);
}

#define typedef_CAVM_PRCHNX_ABX_ECO(a,b) cavm_prchnx_abx_eco_t
#define bustype_CAVM_PRCHNX_ABX_ECO(a,b) CSR_TYPE_RSL
#define basename_CAVM_PRCHNX_ABX_ECO(a,b) "PRCHNX_ABX_ECO"
#define busnum_CAVM_PRCHNX_ABX_ECO(a,b) (a)
#define arguments_CAVM_PRCHNX_ABX_ECO(a,b) (a),(b),-1,-1

/**
 * Register (RSL) prchn#_ab#_error_enable0
 *
 * PRCHN Error Enable 0 Register
 * This register enables error reporting for PRCHN(0)_AB(0..2)_ERROR_SOURCE0 register.
 */
union cavm_prchnx_abx_error_enable0
{
    uint64_t u;
    struct cavm_prchnx_abx_error_enable0_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_5_63         : 59;
        uint64_t rp0_of_en             : 1;  /**< [  4:  4](R/W) Read Port 0 Overflow Enable */
        uint64_t reserved_1_3          : 3;
        uint64_t rp0_uf_en             : 1;  /**< [  0:  0](R/W) Read Port 0 Underflow Enable */
#else /* Word 0 - Little Endian */
        uint64_t rp0_uf_en             : 1;  /**< [  0:  0](R/W) Read Port 0 Underflow Enable */
        uint64_t reserved_1_3          : 3;
        uint64_t rp0_of_en             : 1;  /**< [  4:  4](R/W) Read Port 0 Overflow Enable */
        uint64_t reserved_5_63         : 59;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_prchnx_abx_error_enable0_s cn; */
};
typedef union cavm_prchnx_abx_error_enable0 cavm_prchnx_abx_error_enable0_t;

static inline uint64_t CAVM_PRCHNX_ABX_ERROR_ENABLE0(uint64_t a, uint64_t b) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_PRCHNX_ABX_ERROR_ENABLE0(uint64_t a, uint64_t b)
{
    if ((a==0) && (b<=2))
        return 0x87e042180040ll + 0ll * ((a) & 0x0) + 0x10000ll * ((b) & 0x3);
    __cavm_csr_fatal("PRCHNX_ABX_ERROR_ENABLE0", 2, a, b, 0, 0, 0, 0);
}

#define typedef_CAVM_PRCHNX_ABX_ERROR_ENABLE0(a,b) cavm_prchnx_abx_error_enable0_t
#define bustype_CAVM_PRCHNX_ABX_ERROR_ENABLE0(a,b) CSR_TYPE_RSL
#define basename_CAVM_PRCHNX_ABX_ERROR_ENABLE0(a,b) "PRCHNX_ABX_ERROR_ENABLE0"
#define busnum_CAVM_PRCHNX_ABX_ERROR_ENABLE0(a,b) (a)
#define arguments_CAVM_PRCHNX_ABX_ERROR_ENABLE0(a,b) (a),(b),-1,-1

/**
 * Register (RSL) prchn#_ab#_error_source0
 *
 * PRCHN Error Source 0 Register
 * This is register contains information about read port overflows and underflows.
 */
union cavm_prchnx_abx_error_source0
{
    uint64_t u;
    struct cavm_prchnx_abx_error_source0_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_32_63        : 32;
        uint64_t rp0_jobid             : 16; /**< [ 31: 16](RO/H) Job ID for the job that caused either an underflow or overflow on port 0. */
        uint64_t reserved_5_15         : 11;
        uint64_t rp0_of                : 1;  /**< [  4:  4](R/W1C/H) Set to 1 when an overflow occurs on port 0. Cleared by a write to one. */
        uint64_t reserved_1_3          : 3;
        uint64_t rp0_uf                : 1;  /**< [  0:  0](R/W1C/H) Set to 1 when an underflow occurs on port 0. Cleared by a write to one. */
#else /* Word 0 - Little Endian */
        uint64_t rp0_uf                : 1;  /**< [  0:  0](R/W1C/H) Set to 1 when an underflow occurs on port 0. Cleared by a write to one. */
        uint64_t reserved_1_3          : 3;
        uint64_t rp0_of                : 1;  /**< [  4:  4](R/W1C/H) Set to 1 when an overflow occurs on port 0. Cleared by a write to one. */
        uint64_t reserved_5_15         : 11;
        uint64_t rp0_jobid             : 16; /**< [ 31: 16](RO/H) Job ID for the job that caused either an underflow or overflow on port 0. */
        uint64_t reserved_32_63        : 32;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_prchnx_abx_error_source0_s cn; */
};
typedef union cavm_prchnx_abx_error_source0 cavm_prchnx_abx_error_source0_t;

static inline uint64_t CAVM_PRCHNX_ABX_ERROR_SOURCE0(uint64_t a, uint64_t b) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_PRCHNX_ABX_ERROR_SOURCE0(uint64_t a, uint64_t b)
{
    if ((a==0) && (b<=2))
        return 0x87e042180030ll + 0ll * ((a) & 0x0) + 0x10000ll * ((b) & 0x3);
    __cavm_csr_fatal("PRCHNX_ABX_ERROR_SOURCE0", 2, a, b, 0, 0, 0, 0);
}

#define typedef_CAVM_PRCHNX_ABX_ERROR_SOURCE0(a,b) cavm_prchnx_abx_error_source0_t
#define bustype_CAVM_PRCHNX_ABX_ERROR_SOURCE0(a,b) CSR_TYPE_RSL
#define basename_CAVM_PRCHNX_ABX_ERROR_SOURCE0(a,b) "PRCHNX_ABX_ERROR_SOURCE0"
#define busnum_CAVM_PRCHNX_ABX_ERROR_SOURCE0(a,b) (a)
#define arguments_CAVM_PRCHNX_ABX_ERROR_SOURCE0(a,b) (a),(b),-1,-1

/**
 * Register (RSL) prchn#_ab#_hab_jcfg0_data#
 *
 * PRCHN Job Configuration 0 Registers
 * This register range accesses the job configuration RAM for slot 0.
 */
union cavm_prchnx_abx_hab_jcfg0_datax
{
    uint64_t u;
    struct cavm_prchnx_abx_hab_jcfg0_datax_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t entry                 : 64; /**< [ 63:  0](R/W) PRCHN Job Configuration for Job Slot 0. */
#else /* Word 0 - Little Endian */
        uint64_t entry                 : 64; /**< [ 63:  0](R/W) PRCHN Job Configuration for Job Slot 0. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_prchnx_abx_hab_jcfg0_datax_s cn; */
};
typedef union cavm_prchnx_abx_hab_jcfg0_datax cavm_prchnx_abx_hab_jcfg0_datax_t;

static inline uint64_t CAVM_PRCHNX_ABX_HAB_JCFG0_DATAX(uint64_t a, uint64_t b, uint64_t c) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_PRCHNX_ABX_HAB_JCFG0_DATAX(uint64_t a, uint64_t b, uint64_t c)
{
    if ((a==0) && (b<=2) && (c<=75))
        return 0x87e042182000ll + 0ll * ((a) & 0x0) + 0x10000ll * ((b) & 0x3) + 8ll * ((c) & 0x7f);
    __cavm_csr_fatal("PRCHNX_ABX_HAB_JCFG0_DATAX", 3, a, b, c, 0, 0, 0);
}

#define typedef_CAVM_PRCHNX_ABX_HAB_JCFG0_DATAX(a,b,c) cavm_prchnx_abx_hab_jcfg0_datax_t
#define bustype_CAVM_PRCHNX_ABX_HAB_JCFG0_DATAX(a,b,c) CSR_TYPE_RSL
#define basename_CAVM_PRCHNX_ABX_HAB_JCFG0_DATAX(a,b,c) "PRCHNX_ABX_HAB_JCFG0_DATAX"
#define busnum_CAVM_PRCHNX_ABX_HAB_JCFG0_DATAX(a,b,c) (a)
#define arguments_CAVM_PRCHNX_ABX_HAB_JCFG0_DATAX(a,b,c) (a),(b),(c),-1

/**
 * Register (RSL) prchn#_ab#_hab_jcfg1_data#
 *
 * PRCHN Job Configuration 1 Registers
 * This register range accesses the job configuration RAM for slot 1.
 */
union cavm_prchnx_abx_hab_jcfg1_datax
{
    uint64_t u;
    struct cavm_prchnx_abx_hab_jcfg1_datax_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t entry                 : 64; /**< [ 63:  0](R/W) PRCHN Job Configuration for Job Slot 0. */
#else /* Word 0 - Little Endian */
        uint64_t entry                 : 64; /**< [ 63:  0](R/W) PRCHN Job Configuration for Job Slot 0. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_prchnx_abx_hab_jcfg1_datax_s cn; */
};
typedef union cavm_prchnx_abx_hab_jcfg1_datax cavm_prchnx_abx_hab_jcfg1_datax_t;

static inline uint64_t CAVM_PRCHNX_ABX_HAB_JCFG1_DATAX(uint64_t a, uint64_t b, uint64_t c) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_PRCHNX_ABX_HAB_JCFG1_DATAX(uint64_t a, uint64_t b, uint64_t c)
{
    if ((a==0) && (b<=2) && (c<=75))
        return 0x87e042184000ll + 0ll * ((a) & 0x0) + 0x10000ll * ((b) & 0x3) + 8ll * ((c) & 0x7f);
    __cavm_csr_fatal("PRCHNX_ABX_HAB_JCFG1_DATAX", 3, a, b, c, 0, 0, 0);
}

#define typedef_CAVM_PRCHNX_ABX_HAB_JCFG1_DATAX(a,b,c) cavm_prchnx_abx_hab_jcfg1_datax_t
#define bustype_CAVM_PRCHNX_ABX_HAB_JCFG1_DATAX(a,b,c) CSR_TYPE_RSL
#define basename_CAVM_PRCHNX_ABX_HAB_JCFG1_DATAX(a,b,c) "PRCHNX_ABX_HAB_JCFG1_DATAX"
#define busnum_CAVM_PRCHNX_ABX_HAB_JCFG1_DATAX(a,b,c) (a)
#define arguments_CAVM_PRCHNX_ABX_HAB_JCFG1_DATAX(a,b,c) (a),(b),(c),-1

/**
 * Register (RSL) prchn#_ab#_hab_jcfg2_data#
 *
 * PRCHN(0) Job Configuration 2 Registers
 * This register range accesses the job configuration RAM for slot 2.
 */
union cavm_prchnx_abx_hab_jcfg2_datax
{
    uint64_t u;
    struct cavm_prchnx_abx_hab_jcfg2_datax_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t entry                 : 64; /**< [ 63:  0](R/W) PRCHN Job Configuration for Job Slot 2. */
#else /* Word 0 - Little Endian */
        uint64_t entry                 : 64; /**< [ 63:  0](R/W) PRCHN Job Configuration for Job Slot 2. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_prchnx_abx_hab_jcfg2_datax_s cn; */
};
typedef union cavm_prchnx_abx_hab_jcfg2_datax cavm_prchnx_abx_hab_jcfg2_datax_t;

static inline uint64_t CAVM_PRCHNX_ABX_HAB_JCFG2_DATAX(uint64_t a, uint64_t b, uint64_t c) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_PRCHNX_ABX_HAB_JCFG2_DATAX(uint64_t a, uint64_t b, uint64_t c)
{
    if ((a==0) && (b<=2) && (c<=75))
        return 0x87e042186000ll + 0ll * ((a) & 0x0) + 0x10000ll * ((b) & 0x3) + 8ll * ((c) & 0x7f);
    __cavm_csr_fatal("PRCHNX_ABX_HAB_JCFG2_DATAX", 3, a, b, c, 0, 0, 0);
}

#define typedef_CAVM_PRCHNX_ABX_HAB_JCFG2_DATAX(a,b,c) cavm_prchnx_abx_hab_jcfg2_datax_t
#define bustype_CAVM_PRCHNX_ABX_HAB_JCFG2_DATAX(a,b,c) CSR_TYPE_RSL
#define basename_CAVM_PRCHNX_ABX_HAB_JCFG2_DATAX(a,b,c) "PRCHNX_ABX_HAB_JCFG2_DATAX"
#define busnum_CAVM_PRCHNX_ABX_HAB_JCFG2_DATAX(a,b,c) (a)
#define arguments_CAVM_PRCHNX_ABX_HAB_JCFG2_DATAX(a,b,c) (a),(b),(c),-1

/**
 * Register (RSL) prchn#_ab#_scratch
 *
 * INTERNAL: Scratch Register
 *
 * Scratch register.
 */
union cavm_prchnx_abx_scratch
{
    uint64_t u;
    struct cavm_prchnx_abx_scratch_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t data                  : 64; /**< [ 63:  0](R/W) Scratch data. */
#else /* Word 0 - Little Endian */
        uint64_t data                  : 64; /**< [ 63:  0](R/W) Scratch data. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_prchnx_abx_scratch_s cn; */
};
typedef union cavm_prchnx_abx_scratch cavm_prchnx_abx_scratch_t;

static inline uint64_t CAVM_PRCHNX_ABX_SCRATCH(uint64_t a, uint64_t b) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_PRCHNX_ABX_SCRATCH(uint64_t a, uint64_t b)
{
    if ((a==0) && (b<=2))
        return 0x87e042180080ll + 0ll * ((a) & 0x0) + 0x10000ll * ((b) & 0x3);
    __cavm_csr_fatal("PRCHNX_ABX_SCRATCH", 2, a, b, 0, 0, 0, 0);
}

#define typedef_CAVM_PRCHNX_ABX_SCRATCH(a,b) cavm_prchnx_abx_scratch_t
#define bustype_CAVM_PRCHNX_ABX_SCRATCH(a,b) CSR_TYPE_RSL
#define basename_CAVM_PRCHNX_ABX_SCRATCH(a,b) "PRCHNX_ABX_SCRATCH"
#define busnum_CAVM_PRCHNX_ABX_SCRATCH(a,b) (a)
#define arguments_CAVM_PRCHNX_ABX_SCRATCH(a,b) (a),(b),-1,-1

/**
 * Register (RSL) prchn#_ab#_status
 *
 * PRCHN Status Register
 */
union cavm_prchnx_abx_status
{
    uint64_t u;
    struct cavm_prchnx_abx_status_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_5_63         : 59;
        uint64_t ready                 : 1;  /**< [  4:  4](RO/H) Indicates if the PRCHN is ready to receive next job. '1' = Ready for next job, '0' = Busy. */
        uint64_t reserved_3            : 1;
        uint64_t status2               : 1;  /**< [  2:  2](RO/H) Indicates if the PRCHN is busy processing a job with CONFIGURATION 2.
                                                                 '0' = Ready for new job,
                                                                 '1' = Busy processing. */
        uint64_t status1               : 1;  /**< [  1:  1](RO/H) Indicates if the PRCHN is busy processing a job with CONFIGURATION 1.
                                                                 '0' = Ready for new job,
                                                                 '1' = Busy processing. */
        uint64_t status0               : 1;  /**< [  0:  0](RO/H) Indicates if the PRCHN is busy processing a job with CONFIGURATION 0.
                                                                 '0' = Ready for new job,
                                                                 '1' = Busy processing. */
#else /* Word 0 - Little Endian */
        uint64_t status0               : 1;  /**< [  0:  0](RO/H) Indicates if the PRCHN is busy processing a job with CONFIGURATION 0.
                                                                 '0' = Ready for new job,
                                                                 '1' = Busy processing. */
        uint64_t status1               : 1;  /**< [  1:  1](RO/H) Indicates if the PRCHN is busy processing a job with CONFIGURATION 1.
                                                                 '0' = Ready for new job,
                                                                 '1' = Busy processing. */
        uint64_t status2               : 1;  /**< [  2:  2](RO/H) Indicates if the PRCHN is busy processing a job with CONFIGURATION 2.
                                                                 '0' = Ready for new job,
                                                                 '1' = Busy processing. */
        uint64_t reserved_3            : 1;
        uint64_t ready                 : 1;  /**< [  4:  4](RO/H) Indicates if the PRCHN is ready to receive next job. '1' = Ready for next job, '0' = Busy. */
        uint64_t reserved_5_63         : 59;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_prchnx_abx_status_s cn; */
};
typedef union cavm_prchnx_abx_status cavm_prchnx_abx_status_t;

static inline uint64_t CAVM_PRCHNX_ABX_STATUS(uint64_t a, uint64_t b) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_PRCHNX_ABX_STATUS(uint64_t a, uint64_t b)
{
    if ((a==0) && (b<=2))
        return 0x87e042180018ll + 0ll * ((a) & 0x0) + 0x10000ll * ((b) & 0x3);
    __cavm_csr_fatal("PRCHNX_ABX_STATUS", 2, a, b, 0, 0, 0, 0);
}

#define typedef_CAVM_PRCHNX_ABX_STATUS(a,b) cavm_prchnx_abx_status_t
#define bustype_CAVM_PRCHNX_ABX_STATUS(a,b) CSR_TYPE_RSL
#define basename_CAVM_PRCHNX_ABX_STATUS(a,b) "PRCHNX_ABX_STATUS"
#define busnum_CAVM_PRCHNX_ABX_STATUS(a,b) (a)
#define arguments_CAVM_PRCHNX_ABX_STATUS(a,b) (a),(b),-1,-1

#endif /* __CAVM_CSRS_PRCHN_H__ */
