#ifndef __CAVM_CSRS_PRCHN_H__
#define __CAVM_CSRS_PRCHN_H__
/* This file is auto-generated. Do not edit */

/***********************license start***********************************
* Copyright (c) 2020 Marvell.
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
 * Structure prch_job_cfg_s
 *
 * PRCH Common Job Configuration Structure
 * This structure defines the formal of PRCH jobs.
 */
union cavm_prch_job_cfg_s
{
    uint64_t u[76];
    struct cavm_prch_job_cfg_s_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_60_63        : 4;
        uint64_t num_ant               : 4;  /**< [ 59: 56] Number of antennas */
        uint64_t reserved_52_55        : 4;
        uint64_t sym_repetition        : 4;  /**< [ 51: 48] Number of repeated symbols in a PRCH. */
        uint64_t reserved_43_47        : 5;
        uint64_t zc_length             : 11; /**< [ 42: 32] Length of ZC sequence
                                                                 For internally generated ZC sequence (zcseq_mode=0x0), zc_length should be one
                                                                 of 139, 571,839 and 1151.
                                                                 For externally generated ZC sequence (zcseq_mode=0x1), if ifft_size=0x0,
                                                                 zc_length needs to be a prime number and less than 511
                                                                 if ifft_size=0x1, zc_length needs to be a prime number and between [513,1151]
                                                                 Note that, when zc_length is not one of 139, 571,839 and 1151, fdagc_on=0x0 */
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
                                                                 1: enable output power profile for all root sequence. */
        uint64_t reserved_2_3          : 2;
        uint64_t input_offset          : 2;  /**< [  1:  0] Number of samples of offset applied to the first word of input samples from
                                                                 RDDMA for each symbol and antenna. */
#else /* Word 0 - Little Endian */
        uint64_t input_offset          : 2;  /**< [  1:  0] Number of samples of offset applied to the first word of input samples from
                                                                 RDDMA for each symbol and antenna. */
        uint64_t reserved_2_3          : 2;
        uint64_t pf_out_en             : 1;  /**< [  4:  4] 0: disable output power profile for all root sequence
                                                                 1: enable output power profile for all root sequence. */
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
        uint64_t zc_length             : 11; /**< [ 42: 32] Length of ZC sequence
                                                                 For internally generated ZC sequence (zcseq_mode=0x0), zc_length should be one
                                                                 of 139, 571,839 and 1151.
                                                                 For externally generated ZC sequence (zcseq_mode=0x1), if ifft_size=0x0,
                                                                 zc_length needs to be a prime number and less than 511
                                                                 if ifft_size=0x1, zc_length needs to be a prime number and between [513,1151]
                                                                 Note that, when zc_length is not one of 139, 571,839 and 1151, fdagc_on=0x0 */
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
        uint64_t fdagc_backoff         : 5;  /**< [104:100] Frequency-domain AGC backoff level. */
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
                                                                 0x31: [46:31] */
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
                                                                 0x31: [46:31] */
        uint64_t reserved_77_79        : 3;
        uint64_t noise_threshold       : 8;  /**< [ 87: 80] Threshold used for noise measurement.
                                                                 Format is 5b unsigned integer and 3 b decimal. The actual value used is noise_threshold/8. */
        uint64_t reserved_88_95        : 8;
        uint64_t fdagc_on              : 1;  /**< [ 96: 96] Enable or disable frequency domain AGC
                                                                 0 : off
                                                                 1 : on */
        uint64_t reserved_97_99        : 3;
        uint64_t fdagc_backoff         : 5;  /**< [104:100] Frequency-domain AGC backoff level. */
        uint64_t reserved_105_107      : 3;
        uint64_t fdagc_mode            : 5;  /**< [112:108] See Table 3 of MSD */
        uint64_t reserved_113_127      : 15;
#endif /* Word 1 - End */
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 2 - Big Endian */
        uint64_t reserved_180_191      : 12;
        uint64_t srch_2nd_gap          : 4;  /**< [179:176] Samples to be excluded around the main peak for 2nd peak search. */
        uint64_t reserved_175          : 1;
        uint64_t srch_2nd_win_right    : 7;  /**< [174:168] Used to set the size of searching window to the right side of the main peak.
                                                                 The unit is the resolution of IFFT. */
        uint64_t reserved_167          : 1;
        uint64_t srch_2nd_win_left     : 7;  /**< [166:160] Used to set the size of searching window to the left side of main peak.
                                                                 The unit is the resolution of IFFT. */
        uint64_t reserved_155_159      : 5;
        uint64_t preamble_srch_len     : 11; /**< [154:144] Used to set the size of searching window for main peak search.
                                                                 The unit is the resolution of IFFT. See Sec. 2.3.10.1
                                                                 Note that preamble_srch_offset+ preamble_srch_len needs to be less than zero-
                                                                 correlation zone value expressed in IFFT resolution */
        uint64_t reserved_138_143      : 6;
        uint64_t preamble_srch_offset  : 10; /**< [137:128] Start sample of the search
                                                                 The unit is the resolution of IFFT. See Sec. 2.3.10.1
                                                                 Note that preamble_srch_offset+ preamble_srch_len needs to be less than zero-
                                                                 correlation zone value expressed in IFFT resolution */
#else /* Word 2 - Little Endian */
        uint64_t preamble_srch_offset  : 10; /**< [137:128] Start sample of the search
                                                                 The unit is the resolution of IFFT. See Sec. 2.3.10.1
                                                                 Note that preamble_srch_offset+ preamble_srch_len needs to be less than zero-
                                                                 correlation zone value expressed in IFFT resolution */
        uint64_t reserved_138_143      : 6;
        uint64_t preamble_srch_len     : 11; /**< [154:144] Used to set the size of searching window for main peak search.
                                                                 The unit is the resolution of IFFT. See Sec. 2.3.10.1
                                                                 Note that preamble_srch_offset+ preamble_srch_len needs to be less than zero-
                                                                 correlation zone value expressed in IFFT resolution */
        uint64_t reserved_155_159      : 5;
        uint64_t srch_2nd_win_left     : 7;  /**< [166:160] Used to set the size of searching window to the left side of main peak.
                                                                 The unit is the resolution of IFFT. */
        uint64_t reserved_167          : 1;
        uint64_t srch_2nd_win_right    : 7;  /**< [174:168] Used to set the size of searching window to the right side of the main peak.
                                                                 The unit is the resolution of IFFT. */
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
        uint64_t res_sens_level        : 2;  /**< [212:211] Indicate how fast the weighting factor changes with respect to non-coherent
                                                                 combined harmonic level:
                                                                 Value=0: weighting factor is always 1.0 (corresponding to directly harmonic combination).
                                                                 Value=3: fastest transition */
        uint64_t reserved_208_210      : 3;
        uint64_t res_full_weight_level : 8;  /**< [207:200] Indicates the point the weight is 1.0 when the non-coherent accumulated result greater
                                                                 than  (noise_estimation x res_full_weight_level).
                                                                 The format is with 4-bit fraction number.
                                                                 Therefore, a value of 16 is actually means 1.0x noise_est. */
        uint64_t pf_scalingshifts      : 6;  /**< [199:194] Number of right-shift bits scaling.
                                                                 When pf_scalingmode=0 for absolute scaling, this is the number of right shift bits
                                                                 When pf_scalingmode=1, pf_scalingshifts is the number of right shift bit
                                                                 relative to the level of noise estimation.
                                                                 See Section 6.1 for more detail.
                                                                 Used when pf_out_format=1. */
        uint64_t reserved_193          : 1;
        uint64_t pf_scalingmode        : 1;  /**< [192:192] Choose to indicate if power profiling samples (PDP) is fixed scaling or scaled
                                                                 according to noise level.
                                                                 0: absolute scaling, pf_scalingshifts are number of right shifts
                                                                 1: relative to noise estimation.
                                                                 See Sec. 6.1 for more detail.
                                                                 Used when pf_out_format=1 */
#else /* Word 3 - Little Endian */
        uint64_t pf_scalingmode        : 1;  /**< [192:192] Choose to indicate if power profiling samples (PDP) is fixed scaling or scaled
                                                                 according to noise level.
                                                                 0: absolute scaling, pf_scalingshifts are number of right shifts
                                                                 1: relative to noise estimation.
                                                                 See Sec. 6.1 for more detail.
                                                                 Used when pf_out_format=1 */
        uint64_t reserved_193          : 1;
        uint64_t pf_scalingshifts      : 6;  /**< [199:194] Number of right-shift bits scaling.
                                                                 When pf_scalingmode=0 for absolute scaling, this is the number of right shift bits
                                                                 When pf_scalingmode=1, pf_scalingshifts is the number of right shift bit
                                                                 relative to the level of noise estimation.
                                                                 See Section 6.1 for more detail.
                                                                 Used when pf_out_format=1. */
        uint64_t res_full_weight_level : 8;  /**< [207:200] Indicates the point the weight is 1.0 when the non-coherent accumulated result greater
                                                                 than  (noise_estimation x res_full_weight_level).
                                                                 The format is with 4-bit fraction number.
                                                                 Therefore, a value of 16 is actually means 1.0x noise_est. */
        uint64_t reserved_208_210      : 3;
        uint64_t res_sens_level        : 2;  /**< [212:211] Indicate how fast the weighting factor changes with respect to non-coherent
                                                                 combined harmonic level:
                                                                 Value=0: weighting factor is always 1.0 (corresponding to directly harmonic combination).
                                                                 Value=3: fastest transition */
        uint64_t reserved_213_214      : 2;
        uint64_t res_n_acc             : 3;  /**< [217:215] Number of harmonics to be combined in harmonic combining in restricted mode.
                                                                 [1,3] for type A (restricted_set=1)
                                                                 [1,5] for typeB ((restricted_set=2). */
        uint64_t reserved_218_255      : 38;
#endif /* Word 3 - End */
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 4 - Big Endian */
        uint64_t reserved_315_319      : 5;
        uint64_t phy_root_3            : 11; /**< [314:304] Root physical index to generate preamble. The total number of physical roots to
                                                                 be used is num_of_root_seq. */
        uint64_t reserved_299_303      : 5;
        uint64_t phy_root_2            : 11; /**< [298:288] Root physical index to generate preamble. The total number of physical roots to
                                                                 be used is num_of_root_seq. */
        uint64_t reserved_283_287      : 5;
        uint64_t phy_root_1            : 11; /**< [282:272] Root physical index to generate preamble. The total number of physical roots to
                                                                 be used is num_of_root_seq. */
        uint64_t reserved_267_271      : 5;
        uint64_t phy_root_0            : 11; /**< [266:256] Root physical index to generate preamble. The total number of physical roots to
                                                                 be used is num_of_root_seq. */
#else /* Word 4 - Little Endian */
        uint64_t phy_root_0            : 11; /**< [266:256] Root physical index to generate preamble. The total number of physical roots to
                                                                 be used is num_of_root_seq. */
        uint64_t reserved_267_271      : 5;
        uint64_t phy_root_1            : 11; /**< [282:272] Root physical index to generate preamble. The total number of physical roots to
                                                                 be used is num_of_root_seq. */
        uint64_t reserved_283_287      : 5;
        uint64_t phy_root_2            : 11; /**< [298:288] Root physical index to generate preamble. The total number of physical roots to
                                                                 be used is num_of_root_seq. */
        uint64_t reserved_299_303      : 5;
        uint64_t phy_root_3            : 11; /**< [314:304] Root physical index to generate preamble. The total number of physical roots to
                                                                 be used is num_of_root_seq. */
        uint64_t reserved_315_319      : 5;
#endif /* Word 4 - End */
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 5 - Big Endian */
        uint64_t reserved_379_383      : 5;
        uint64_t phy_root_7            : 11; /**< [378:368] Root physical index to generate preamble. The total number of physical roots to
                                                                 be used is num_of_root_seq. */
        uint64_t reserved_363_367      : 5;
        uint64_t phy_root_6            : 11; /**< [362:352] Root physical index to generate preamble. The total number of physical roots to
                                                                 be used is num_of_root_seq. */
        uint64_t reserved_347_351      : 5;
        uint64_t phy_root_5            : 11; /**< [346:336] Root physical index to generate preamble. The total number of physical roots to
                                                                 be used is num_of_root_seq. */
        uint64_t reserved_331_335      : 5;
        uint64_t phy_root_4            : 11; /**< [330:320] Root physical index to generate preamble. The total number of physical roots to
                                                                 be used is num_of_root_seq. */
#else /* Word 5 - Little Endian */
        uint64_t phy_root_4            : 11; /**< [330:320] Root physical index to generate preamble. The total number of physical roots to
                                                                 be used is num_of_root_seq. */
        uint64_t reserved_331_335      : 5;
        uint64_t phy_root_5            : 11; /**< [346:336] Root physical index to generate preamble. The total number of physical roots to
                                                                 be used is num_of_root_seq. */
        uint64_t reserved_347_351      : 5;
        uint64_t phy_root_6            : 11; /**< [362:352] Root physical index to generate preamble. The total number of physical roots to
                                                                 be used is num_of_root_seq. */
        uint64_t reserved_363_367      : 5;
        uint64_t phy_root_7            : 11; /**< [378:368] Root physical index to generate preamble. The total number of physical roots to
                                                                 be used is num_of_root_seq. */
        uint64_t reserved_379_383      : 5;
#endif /* Word 5 - End */
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 6 - Big Endian */
        uint64_t reserved_443_447      : 5;
        uint64_t phy_root_11           : 11; /**< [442:432] Root physical index to generate preamble. The total number of physical roots to
                                                                 be used is num_of_root_seq. */
        uint64_t reserved_427_431      : 5;
        uint64_t phy_root_10           : 11; /**< [426:416] Root physical index to generate preamble. The total number of physical roots to
                                                                 be used is num_of_root_seq. */
        uint64_t reserved_411_415      : 5;
        uint64_t phy_root_9            : 11; /**< [410:400] Root physical index to generate preamble. The total number of physical roots to
                                                                 be used is num_of_root_seq. */
        uint64_t reserved_395_399      : 5;
        uint64_t phy_root_8            : 11; /**< [394:384] Root physical index to generate preamble. The total number of physical roots to
                                                                 be used is num_of_root_seq. */
#else /* Word 6 - Little Endian */
        uint64_t phy_root_8            : 11; /**< [394:384] Root physical index to generate preamble. The total number of physical roots to
                                                                 be used is num_of_root_seq. */
        uint64_t reserved_395_399      : 5;
        uint64_t phy_root_9            : 11; /**< [410:400] Root physical index to generate preamble. The total number of physical roots to
                                                                 be used is num_of_root_seq. */
        uint64_t reserved_411_415      : 5;
        uint64_t phy_root_10           : 11; /**< [426:416] Root physical index to generate preamble. The total number of physical roots to
                                                                 be used is num_of_root_seq. */
        uint64_t reserved_427_431      : 5;
        uint64_t phy_root_11           : 11; /**< [442:432] Root physical index to generate preamble. The total number of physical roots to
                                                                 be used is num_of_root_seq. */
        uint64_t reserved_443_447      : 5;
#endif /* Word 6 - End */
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 7 - Big Endian */
        uint64_t reserved_507_511      : 5;
        uint64_t phy_root_15           : 11; /**< [506:496] Root physical index to generate preamble. The total number of physical roots to
                                                                 be used is num_of_root_seq. */
        uint64_t reserved_491_495      : 5;
        uint64_t phy_root_14           : 11; /**< [490:480] Root physical index to generate preamble. The total number of physical roots to
                                                                 be used is num_of_root_seq. */
        uint64_t reserved_475_479      : 5;
        uint64_t phy_root_13           : 11; /**< [474:464] Root physical index to generate preamble. The total number of physical roots to
                                                                 be used is num_of_root_seq. */
        uint64_t reserved_459_463      : 5;
        uint64_t phy_root_12           : 11; /**< [458:448] Root physical index to generate preamble. The total number of physical roots to
                                                                 be used is num_of_root_seq. */
#else /* Word 7 - Little Endian */
        uint64_t phy_root_12           : 11; /**< [458:448] Root physical index to generate preamble. The total number of physical roots to
                                                                 be used is num_of_root_seq. */
        uint64_t reserved_459_463      : 5;
        uint64_t phy_root_13           : 11; /**< [474:464] Root physical index to generate preamble. The total number of physical roots to
                                                                 be used is num_of_root_seq. */
        uint64_t reserved_475_479      : 5;
        uint64_t phy_root_14           : 11; /**< [490:480] Root physical index to generate preamble. The total number of physical roots to
                                                                 be used is num_of_root_seq. */
        uint64_t reserved_491_495      : 5;
        uint64_t phy_root_15           : 11; /**< [506:496] Root physical index to generate preamble. The total number of physical roots to
                                                                 be used is num_of_root_seq. */
        uint64_t reserved_507_511      : 5;
#endif /* Word 7 - End */
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 8 - Big Endian */
        uint64_t reserved_571_575      : 5;
        uint64_t phy_root_19           : 11; /**< [570:560] Root physical index to generate preamble. The total number of physical roots to
                                                                 be used is num_of_root_seq. */
        uint64_t reserved_555_559      : 5;
        uint64_t phy_root_18           : 11; /**< [554:544] Root physical index to generate preamble. The total number of physical roots to
                                                                 be used is num_of_root_seq. */
        uint64_t reserved_539_543      : 5;
        uint64_t phy_root_17           : 11; /**< [538:528] Root physical index to generate preamble. The total number of physical roots to
                                                                 be used is num_of_root_seq. */
        uint64_t reserved_523_527      : 5;
        uint64_t phy_root_16           : 11; /**< [522:512] Root physical index to generate preamble. The total number of physical roots to
                                                                 be used is num_of_root_seq. */
#else /* Word 8 - Little Endian */
        uint64_t phy_root_16           : 11; /**< [522:512] Root physical index to generate preamble. The total number of physical roots to
                                                                 be used is num_of_root_seq. */
        uint64_t reserved_523_527      : 5;
        uint64_t phy_root_17           : 11; /**< [538:528] Root physical index to generate preamble. The total number of physical roots to
                                                                 be used is num_of_root_seq. */
        uint64_t reserved_539_543      : 5;
        uint64_t phy_root_18           : 11; /**< [554:544] Root physical index to generate preamble. The total number of physical roots to
                                                                 be used is num_of_root_seq. */
        uint64_t reserved_555_559      : 5;
        uint64_t phy_root_19           : 11; /**< [570:560] Root physical index to generate preamble. The total number of physical roots to
                                                                 be used is num_of_root_seq. */
        uint64_t reserved_571_575      : 5;
#endif /* Word 8 - End */
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 9 - Big Endian */
        uint64_t reserved_635_639      : 5;
        uint64_t phy_root_23           : 11; /**< [634:624] Root physical index to generate preamble. The total number of physical roots to
                                                                 be used is num_of_root_seq. */
        uint64_t reserved_619_623      : 5;
        uint64_t phy_root_22           : 11; /**< [618:608] Root physical index to generate preamble. The total number of physical roots to
                                                                 be used is num_of_root_seq. */
        uint64_t reserved_603_607      : 5;
        uint64_t phy_root_21           : 11; /**< [602:592] Root physical index to generate preamble. The total number of physical roots to
                                                                 be used is num_of_root_seq. */
        uint64_t reserved_587_591      : 5;
        uint64_t phy_root_20           : 11; /**< [586:576] Root physical index to generate preamble. The total number of physical roots to
                                                                 be used is num_of_root_seq. */
#else /* Word 9 - Little Endian */
        uint64_t phy_root_20           : 11; /**< [586:576] Root physical index to generate preamble. The total number of physical roots to
                                                                 be used is num_of_root_seq. */
        uint64_t reserved_587_591      : 5;
        uint64_t phy_root_21           : 11; /**< [602:592] Root physical index to generate preamble. The total number of physical roots to
                                                                 be used is num_of_root_seq. */
        uint64_t reserved_603_607      : 5;
        uint64_t phy_root_22           : 11; /**< [618:608] Root physical index to generate preamble. The total number of physical roots to
                                                                 be used is num_of_root_seq. */
        uint64_t reserved_619_623      : 5;
        uint64_t phy_root_23           : 11; /**< [634:624] Root physical index to generate preamble. The total number of physical roots to
                                                                 be used is num_of_root_seq. */
        uint64_t reserved_635_639      : 5;
#endif /* Word 9 - End */
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 10 - Big Endian */
        uint64_t reserved_699_703      : 5;
        uint64_t phy_root_27           : 11; /**< [698:688] Root physical index to generate preamble. The total number of physical roots to
                                                                 be used is num_of_root_seq. */
        uint64_t reserved_683_687      : 5;
        uint64_t phy_root_26           : 11; /**< [682:672] Root physical index to generate preamble. The total number of physical roots to
                                                                 be used is num_of_root_seq. */
        uint64_t reserved_667_671      : 5;
        uint64_t phy_root_25           : 11; /**< [666:656] Root physical index to generate preamble. The total number of physical roots to
                                                                 be used is num_of_root_seq. */
        uint64_t reserved_651_655      : 5;
        uint64_t phy_root_24           : 11; /**< [650:640] Root physical index to generate preamble. The total number of physical roots to
                                                                 be used is num_of_root_seq. */
#else /* Word 10 - Little Endian */
        uint64_t phy_root_24           : 11; /**< [650:640] Root physical index to generate preamble. The total number of physical roots to
                                                                 be used is num_of_root_seq. */
        uint64_t reserved_651_655      : 5;
        uint64_t phy_root_25           : 11; /**< [666:656] Root physical index to generate preamble. The total number of physical roots to
                                                                 be used is num_of_root_seq. */
        uint64_t reserved_667_671      : 5;
        uint64_t phy_root_26           : 11; /**< [682:672] Root physical index to generate preamble. The total number of physical roots to
                                                                 be used is num_of_root_seq. */
        uint64_t reserved_683_687      : 5;
        uint64_t phy_root_27           : 11; /**< [698:688] Root physical index to generate preamble. The total number of physical roots to
                                                                 be used is num_of_root_seq. */
        uint64_t reserved_699_703      : 5;
#endif /* Word 10 - End */
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 11 - Big Endian */
        uint64_t reserved_763_767      : 5;
        uint64_t phy_root_31           : 11; /**< [762:752] Root physical index to generate preamble. The total number of physical roots to
                                                                 be used is num_of_root_seq. */
        uint64_t reserved_747_751      : 5;
        uint64_t phy_root_30           : 11; /**< [746:736] Root physical index to generate preamble. The total number of physical roots to
                                                                 be used is num_of_root_seq. */
        uint64_t reserved_731_735      : 5;
        uint64_t phy_root_29           : 11; /**< [730:720] Root physical index to generate preamble. The total number of physical roots to
                                                                 be used is num_of_root_seq. */
        uint64_t reserved_715_719      : 5;
        uint64_t phy_root_28           : 11; /**< [714:704] Root physical index to generate preamble. The total number of physical roots to
                                                                 be used is num_of_root_seq. */
#else /* Word 11 - Little Endian */
        uint64_t phy_root_28           : 11; /**< [714:704] Root physical index to generate preamble. The total number of physical roots to
                                                                 be used is num_of_root_seq. */
        uint64_t reserved_715_719      : 5;
        uint64_t phy_root_29           : 11; /**< [730:720] Root physical index to generate preamble. The total number of physical roots to
                                                                 be used is num_of_root_seq. */
        uint64_t reserved_731_735      : 5;
        uint64_t phy_root_30           : 11; /**< [746:736] Root physical index to generate preamble. The total number of physical roots to
                                                                 be used is num_of_root_seq. */
        uint64_t reserved_747_751      : 5;
        uint64_t phy_root_31           : 11; /**< [762:752] Root physical index to generate preamble. The total number of physical roots to
                                                                 be used is num_of_root_seq. */
        uint64_t reserved_763_767      : 5;
#endif /* Word 11 - End */
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 12 - Big Endian */
        uint64_t reserved_827_831      : 5;
        uint64_t phy_root_35           : 11; /**< [826:816] Root physical index to generate preamble. The total number of physical roots to
                                                                 be used is num_of_root_seq. */
        uint64_t reserved_811_815      : 5;
        uint64_t phy_root_34           : 11; /**< [810:800] Root physical index to generate preamble. The total number of physical roots to
                                                                 be used is num_of_root_seq. */
        uint64_t reserved_795_799      : 5;
        uint64_t phy_root_33           : 11; /**< [794:784] Root physical index to generate preamble. The total number of physical roots to
                                                                 be used is num_of_root_seq. */
        uint64_t reserved_779_783      : 5;
        uint64_t phy_root_32           : 11; /**< [778:768] Root physical index to generate preamble. The total number of physical roots to
                                                                 be used is num_of_root_seq. */
#else /* Word 12 - Little Endian */
        uint64_t phy_root_32           : 11; /**< [778:768] Root physical index to generate preamble. The total number of physical roots to
                                                                 be used is num_of_root_seq. */
        uint64_t reserved_779_783      : 5;
        uint64_t phy_root_33           : 11; /**< [794:784] Root physical index to generate preamble. The total number of physical roots to
                                                                 be used is num_of_root_seq. */
        uint64_t reserved_795_799      : 5;
        uint64_t phy_root_34           : 11; /**< [810:800] Root physical index to generate preamble. The total number of physical roots to
                                                                 be used is num_of_root_seq. */
        uint64_t reserved_811_815      : 5;
        uint64_t phy_root_35           : 11; /**< [826:816] Root physical index to generate preamble. The total number of physical roots to
                                                                 be used is num_of_root_seq. */
        uint64_t reserved_827_831      : 5;
#endif /* Word 12 - End */
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 13 - Big Endian */
        uint64_t reserved_891_895      : 5;
        uint64_t phy_root_39           : 11; /**< [890:880] Root physical index to generate preamble. The total number of physical roots to
                                                                 be used is num_of_root_seq. */
        uint64_t reserved_875_879      : 5;
        uint64_t phy_root_38           : 11; /**< [874:864] Root physical index to generate preamble. The total number of physical roots to
                                                                 be used is num_of_root_seq. */
        uint64_t reserved_859_863      : 5;
        uint64_t phy_root_37           : 11; /**< [858:848] Root physical index to generate preamble. The total number of physical roots to
                                                                 be used is num_of_root_seq. */
        uint64_t reserved_843_847      : 5;
        uint64_t phy_root_36           : 11; /**< [842:832] Root physical index to generate preamble. The total number of physical roots to
                                                                 be used is num_of_root_seq. */
#else /* Word 13 - Little Endian */
        uint64_t phy_root_36           : 11; /**< [842:832] Root physical index to generate preamble. The total number of physical roots to
                                                                 be used is num_of_root_seq. */
        uint64_t reserved_843_847      : 5;
        uint64_t phy_root_37           : 11; /**< [858:848] Root physical index to generate preamble. The total number of physical roots to
                                                                 be used is num_of_root_seq. */
        uint64_t reserved_859_863      : 5;
        uint64_t phy_root_38           : 11; /**< [874:864] Root physical index to generate preamble. The total number of physical roots to
                                                                 be used is num_of_root_seq. */
        uint64_t reserved_875_879      : 5;
        uint64_t phy_root_39           : 11; /**< [890:880] Root physical index to generate preamble. The total number of physical roots to
                                                                 be used is num_of_root_seq. */
        uint64_t reserved_891_895      : 5;
#endif /* Word 13 - End */
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 14 - Big Endian */
        uint64_t reserved_955_959      : 5;
        uint64_t phy_root_43           : 11; /**< [954:944] Root physical index to generate preamble. The total number of physical roots to
                                                                 be used is num_of_root_seq. */
        uint64_t reserved_939_943      : 5;
        uint64_t phy_root_42           : 11; /**< [938:928] Root physical index to generate preamble. The total number of physical roots to
                                                                 be used is num_of_root_seq. */
        uint64_t reserved_923_927      : 5;
        uint64_t phy_root_41           : 11; /**< [922:912] Root physical index to generate preamble. The total number of physical roots to
                                                                 be used is num_of_root_seq. */
        uint64_t reserved_907_911      : 5;
        uint64_t phy_root_40           : 11; /**< [906:896] Root physical index to generate preamble. The total number of physical roots to
                                                                 be used is num_of_root_seq. */
#else /* Word 14 - Little Endian */
        uint64_t phy_root_40           : 11; /**< [906:896] Root physical index to generate preamble. The total number of physical roots to
                                                                 be used is num_of_root_seq. */
        uint64_t reserved_907_911      : 5;
        uint64_t phy_root_41           : 11; /**< [922:912] Root physical index to generate preamble. The total number of physical roots to
                                                                 be used is num_of_root_seq. */
        uint64_t reserved_923_927      : 5;
        uint64_t phy_root_42           : 11; /**< [938:928] Root physical index to generate preamble. The total number of physical roots to
                                                                 be used is num_of_root_seq. */
        uint64_t reserved_939_943      : 5;
        uint64_t phy_root_43           : 11; /**< [954:944] Root physical index to generate preamble. The total number of physical roots to
                                                                 be used is num_of_root_seq. */
        uint64_t reserved_955_959      : 5;
#endif /* Word 14 - End */
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 15 - Big Endian */
        uint64_t reserved_1019_1023    : 5;
        uint64_t phy_root_47           : 11; /**< [1018:1008] Root physical index to generate preamble. The total number of physical roots to
                                                                 be used is num_of_root_seq. */
        uint64_t reserved_1003_1007    : 5;
        uint64_t phy_root_46           : 11; /**< [1002:992] Root physical index to generate preamble. The total number of physical roots to
                                                                 be used is num_of_root_seq. */
        uint64_t reserved_987_991      : 5;
        uint64_t phy_root_45           : 11; /**< [986:976] Root physical index to generate preamble. The total number of physical roots to
                                                                 be used is num_of_root_seq. */
        uint64_t reserved_971_975      : 5;
        uint64_t phy_root_44           : 11; /**< [970:960] Root physical index to generate preamble. The total number of physical roots to
                                                                 be used is num_of_root_seq. */
#else /* Word 15 - Little Endian */
        uint64_t phy_root_44           : 11; /**< [970:960] Root physical index to generate preamble. The total number of physical roots to
                                                                 be used is num_of_root_seq. */
        uint64_t reserved_971_975      : 5;
        uint64_t phy_root_45           : 11; /**< [986:976] Root physical index to generate preamble. The total number of physical roots to
                                                                 be used is num_of_root_seq. */
        uint64_t reserved_987_991      : 5;
        uint64_t phy_root_46           : 11; /**< [1002:992] Root physical index to generate preamble. The total number of physical roots to
                                                                 be used is num_of_root_seq. */
        uint64_t reserved_1003_1007    : 5;
        uint64_t phy_root_47           : 11; /**< [1018:1008] Root physical index to generate preamble. The total number of physical roots to
                                                                 be used is num_of_root_seq. */
        uint64_t reserved_1019_1023    : 5;
#endif /* Word 15 - End */
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 16 - Big Endian */
        uint64_t reserved_1083_1087    : 5;
        uint64_t phy_root_51           : 11; /**< [1082:1072] Root physical index to generate preamble. The total number of physical roots to
                                                                 be used is num_of_root_seq. */
        uint64_t reserved_1067_1071    : 5;
        uint64_t phy_root_50           : 11; /**< [1066:1056] Root physical index to generate preamble. The total number of physical roots to
                                                                 be used is num_of_root_seq. */
        uint64_t reserved_1051_1055    : 5;
        uint64_t phy_root_49           : 11; /**< [1050:1040] Root physical index to generate preamble. The total number of physical roots to
                                                                 be used is num_of_root_seq. */
        uint64_t reserved_1035_1039    : 5;
        uint64_t phy_root_48           : 11; /**< [1034:1024] Root physical index to generate preamble. The total number of physical roots to
                                                                 be used is num_of_root_seq. */
#else /* Word 16 - Little Endian */
        uint64_t phy_root_48           : 11; /**< [1034:1024] Root physical index to generate preamble. The total number of physical roots to
                                                                 be used is num_of_root_seq. */
        uint64_t reserved_1035_1039    : 5;
        uint64_t phy_root_49           : 11; /**< [1050:1040] Root physical index to generate preamble. The total number of physical roots to
                                                                 be used is num_of_root_seq. */
        uint64_t reserved_1051_1055    : 5;
        uint64_t phy_root_50           : 11; /**< [1066:1056] Root physical index to generate preamble. The total number of physical roots to
                                                                 be used is num_of_root_seq. */
        uint64_t reserved_1067_1071    : 5;
        uint64_t phy_root_51           : 11; /**< [1082:1072] Root physical index to generate preamble. The total number of physical roots to
                                                                 be used is num_of_root_seq. */
        uint64_t reserved_1083_1087    : 5;
#endif /* Word 16 - End */
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 17 - Big Endian */
        uint64_t reserved_1147_1151    : 5;
        uint64_t phy_root_55           : 11; /**< [1146:1136] Root physical index to generate preamble. The total number of physical roots to
                                                                 be used is num_of_root_seq. */
        uint64_t reserved_1131_1135    : 5;
        uint64_t phy_root_54           : 11; /**< [1130:1120] Root physical index to generate preamble. The total number of physical roots to
                                                                 be used is num_of_root_seq. */
        uint64_t reserved_1115_1119    : 5;
        uint64_t phy_root_53           : 11; /**< [1114:1104] Root physical index to generate preamble. The total number of physical roots to
                                                                 be used is num_of_root_seq. */
        uint64_t reserved_1099_1103    : 5;
        uint64_t phy_root_52           : 11; /**< [1098:1088] Root physical index to generate preamble. The total number of physical roots to
                                                                 be used is num_of_root_seq. */
#else /* Word 17 - Little Endian */
        uint64_t phy_root_52           : 11; /**< [1098:1088] Root physical index to generate preamble. The total number of physical roots to
                                                                 be used is num_of_root_seq. */
        uint64_t reserved_1099_1103    : 5;
        uint64_t phy_root_53           : 11; /**< [1114:1104] Root physical index to generate preamble. The total number of physical roots to
                                                                 be used is num_of_root_seq. */
        uint64_t reserved_1115_1119    : 5;
        uint64_t phy_root_54           : 11; /**< [1130:1120] Root physical index to generate preamble. The total number of physical roots to
                                                                 be used is num_of_root_seq. */
        uint64_t reserved_1131_1135    : 5;
        uint64_t phy_root_55           : 11; /**< [1146:1136] Root physical index to generate preamble. The total number of physical roots to
                                                                 be used is num_of_root_seq. */
        uint64_t reserved_1147_1151    : 5;
#endif /* Word 17 - End */
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 18 - Big Endian */
        uint64_t reserved_1211_1215    : 5;
        uint64_t phy_root_59           : 11; /**< [1210:1200] Root physical index to generate preamble. The total number of physical roots to
                                                                 be used is num_of_root_seq. */
        uint64_t reserved_1195_1199    : 5;
        uint64_t phy_root_58           : 11; /**< [1194:1184] Root physical index to generate preamble. The total number of physical roots to
                                                                 be used is num_of_root_seq. */
        uint64_t reserved_1179_1183    : 5;
        uint64_t phy_root_57           : 11; /**< [1178:1168] Root physical index to generate preamble. The total number of physical roots to
                                                                 be used is num_of_root_seq. */
        uint64_t reserved_1163_1167    : 5;
        uint64_t phy_root_56           : 11; /**< [1162:1152] Root physical index to generate preamble. The total number of physical roots to
                                                                 be used is num_of_root_seq. */
#else /* Word 18 - Little Endian */
        uint64_t phy_root_56           : 11; /**< [1162:1152] Root physical index to generate preamble. The total number of physical roots to
                                                                 be used is num_of_root_seq. */
        uint64_t reserved_1163_1167    : 5;
        uint64_t phy_root_57           : 11; /**< [1178:1168] Root physical index to generate preamble. The total number of physical roots to
                                                                 be used is num_of_root_seq. */
        uint64_t reserved_1179_1183    : 5;
        uint64_t phy_root_58           : 11; /**< [1194:1184] Root physical index to generate preamble. The total number of physical roots to
                                                                 be used is num_of_root_seq. */
        uint64_t reserved_1195_1199    : 5;
        uint64_t phy_root_59           : 11; /**< [1210:1200] Root physical index to generate preamble. The total number of physical roots to
                                                                 be used is num_of_root_seq. */
        uint64_t reserved_1211_1215    : 5;
#endif /* Word 18 - End */
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 19 - Big Endian */
        uint64_t reserved_1275_1279    : 5;
        uint64_t phy_root_63           : 11; /**< [1274:1264] Root physical index to generate preamble. The total number of physical roots to
                                                                 be used is num_of_root_seq. */
        uint64_t reserved_1259_1263    : 5;
        uint64_t phy_root_62           : 11; /**< [1258:1248] Root physical index to generate preamble. The total number of physical roots to
                                                                 be used is num_of_root_seq. */
        uint64_t reserved_1243_1247    : 5;
        uint64_t phy_root_61           : 11; /**< [1242:1232] Root physical index to generate preamble. The total number of physical roots to
                                                                 be used is num_of_root_seq. */
        uint64_t reserved_1227_1231    : 5;
        uint64_t phy_root_60           : 11; /**< [1226:1216] Root physical index to generate preamble. The total number of physical roots to
                                                                 be used is num_of_root_seq. */
#else /* Word 19 - Little Endian */
        uint64_t phy_root_60           : 11; /**< [1226:1216] Root physical index to generate preamble. The total number of physical roots to
                                                                 be used is num_of_root_seq. */
        uint64_t reserved_1227_1231    : 5;
        uint64_t phy_root_61           : 11; /**< [1242:1232] Root physical index to generate preamble. The total number of physical roots to
                                                                 be used is num_of_root_seq. */
        uint64_t reserved_1243_1247    : 5;
        uint64_t phy_root_62           : 11; /**< [1258:1248] Root physical index to generate preamble. The total number of physical roots to
                                                                 be used is num_of_root_seq. */
        uint64_t reserved_1259_1263    : 5;
        uint64_t phy_root_63           : 11; /**< [1274:1264] Root physical index to generate preamble. The total number of physical roots to
                                                                 be used is num_of_root_seq. */
        uint64_t reserved_1275_1279    : 5;
#endif /* Word 19 - End */
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 20 - Big Endian */
        uint64_t reserved_1342_1343    : 2;
        uint64_t seq_idx_7             : 6;  /**< [1341:1336] Index to indicate which root sequence in parameter phy_root_7 for the zero-
                                                                 correlation zone (preamble). */
        uint64_t reserved_1334_1335    : 2;
        uint64_t seq_idx_6             : 6;  /**< [1333:1328] Index to indicate which root sequence in parameter phy_root_6 for the zero-
                                                                 correlation zone (preamble). */
        uint64_t reserved_1326_1327    : 2;
        uint64_t seq_idx_5             : 6;  /**< [1325:1320] Index to indicate which root sequence in parameter phy_root_5 for the zero-
                                                                 correlation zone (preamble). */
        uint64_t reserved_1318_1319    : 2;
        uint64_t seq_idx_4             : 6;  /**< [1317:1312] Index to indicate which root sequence in parameter phy_root_4 for the zero-
                                                                 correlation zone (preamble). */
        uint64_t reserved_1310_1311    : 2;
        uint64_t seq_idx_3             : 6;  /**< [1309:1304] Index to indicate which root sequence in parameter phy_root_3 for the zero-
                                                                 correlation zone (preamble). */
        uint64_t reserved_1302_1303    : 2;
        uint64_t seq_idx_2             : 6;  /**< [1301:1296] Index to indicate which root sequence in parameter phy_root_2 for the zero-
                                                                 correlation zone (preamble). */
        uint64_t reserved_1294_1295    : 2;
        uint64_t seq_idx_1             : 6;  /**< [1293:1288] Index to indicate which root sequence in parameter phy_root_1 for the zero-
                                                                 correlation zone (preamble). */
        uint64_t reserved_1286_1287    : 2;
        uint64_t seq_idx_0             : 6;  /**< [1285:1280] Index to indicate which root sequence in parameter phy_root_0 for the zero-
                                                                 correlation zone (preamble). */
#else /* Word 20 - Little Endian */
        uint64_t seq_idx_0             : 6;  /**< [1285:1280] Index to indicate which root sequence in parameter phy_root_0 for the zero-
                                                                 correlation zone (preamble). */
        uint64_t reserved_1286_1287    : 2;
        uint64_t seq_idx_1             : 6;  /**< [1293:1288] Index to indicate which root sequence in parameter phy_root_1 for the zero-
                                                                 correlation zone (preamble). */
        uint64_t reserved_1294_1295    : 2;
        uint64_t seq_idx_2             : 6;  /**< [1301:1296] Index to indicate which root sequence in parameter phy_root_2 for the zero-
                                                                 correlation zone (preamble). */
        uint64_t reserved_1302_1303    : 2;
        uint64_t seq_idx_3             : 6;  /**< [1309:1304] Index to indicate which root sequence in parameter phy_root_3 for the zero-
                                                                 correlation zone (preamble). */
        uint64_t reserved_1310_1311    : 2;
        uint64_t seq_idx_4             : 6;  /**< [1317:1312] Index to indicate which root sequence in parameter phy_root_4 for the zero-
                                                                 correlation zone (preamble). */
        uint64_t reserved_1318_1319    : 2;
        uint64_t seq_idx_5             : 6;  /**< [1325:1320] Index to indicate which root sequence in parameter phy_root_5 for the zero-
                                                                 correlation zone (preamble). */
        uint64_t reserved_1326_1327    : 2;
        uint64_t seq_idx_6             : 6;  /**< [1333:1328] Index to indicate which root sequence in parameter phy_root_6 for the zero-
                                                                 correlation zone (preamble). */
        uint64_t reserved_1334_1335    : 2;
        uint64_t seq_idx_7             : 6;  /**< [1341:1336] Index to indicate which root sequence in parameter phy_root_7 for the zero-
                                                                 correlation zone (preamble). */
        uint64_t reserved_1342_1343    : 2;
#endif /* Word 20 - End */
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 21 - Big Endian */
        uint64_t reserved_1406_1407    : 2;
        uint64_t seq_idx_15            : 6;  /**< [1405:1400] Index to indicate which root sequence in parameter phy_root_15 for the zero-
                                                                 correlation zone (preamble). */
        uint64_t reserved_1398_1399    : 2;
        uint64_t seq_idx_14            : 6;  /**< [1397:1392] Index to indicate which root sequence in parameter phy_root_14 for the zero-
                                                                 correlation zone (preamble). */
        uint64_t reserved_1390_1391    : 2;
        uint64_t seq_idx_13            : 6;  /**< [1389:1384] Index to indicate which root sequence in parameter phy_root_13 for the zero-
                                                                 correlation zone (preamble). */
        uint64_t reserved_1382_1383    : 2;
        uint64_t seq_idx_12            : 6;  /**< [1381:1376] Index to indicate which root sequence in parameter phy_root_12 for the zero-
                                                                 correlation zone (preamble). */
        uint64_t reserved_1374_1375    : 2;
        uint64_t seq_idx_11            : 6;  /**< [1373:1368] Index to indicate which root sequence in parameter phy_root_11 for the zero-
                                                                 correlation zone (preamble). */
        uint64_t reserved_1366_1367    : 2;
        uint64_t seq_idx_10            : 6;  /**< [1365:1360] Index to indicate which root sequence in parameter phy_root_10 for the zero-
                                                                 correlation zone (preamble). */
        uint64_t reserved_1358_1359    : 2;
        uint64_t seq_idx_9             : 6;  /**< [1357:1352] Index to indicate which root sequence in parameter phy_root_9 for the zero-
                                                                 correlation zone (preamble). */
        uint64_t reserved_1350_1351    : 2;
        uint64_t seq_idx_8             : 6;  /**< [1349:1344] Index to indicate which root sequence in parameter phy_root_8 for the zero-
                                                                 correlation zone (preamble). */
#else /* Word 21 - Little Endian */
        uint64_t seq_idx_8             : 6;  /**< [1349:1344] Index to indicate which root sequence in parameter phy_root_8 for the zero-
                                                                 correlation zone (preamble). */
        uint64_t reserved_1350_1351    : 2;
        uint64_t seq_idx_9             : 6;  /**< [1357:1352] Index to indicate which root sequence in parameter phy_root_9 for the zero-
                                                                 correlation zone (preamble). */
        uint64_t reserved_1358_1359    : 2;
        uint64_t seq_idx_10            : 6;  /**< [1365:1360] Index to indicate which root sequence in parameter phy_root_10 for the zero-
                                                                 correlation zone (preamble). */
        uint64_t reserved_1366_1367    : 2;
        uint64_t seq_idx_11            : 6;  /**< [1373:1368] Index to indicate which root sequence in parameter phy_root_11 for the zero-
                                                                 correlation zone (preamble). */
        uint64_t reserved_1374_1375    : 2;
        uint64_t seq_idx_12            : 6;  /**< [1381:1376] Index to indicate which root sequence in parameter phy_root_12 for the zero-
                                                                 correlation zone (preamble). */
        uint64_t reserved_1382_1383    : 2;
        uint64_t seq_idx_13            : 6;  /**< [1389:1384] Index to indicate which root sequence in parameter phy_root_13 for the zero-
                                                                 correlation zone (preamble). */
        uint64_t reserved_1390_1391    : 2;
        uint64_t seq_idx_14            : 6;  /**< [1397:1392] Index to indicate which root sequence in parameter phy_root_14 for the zero-
                                                                 correlation zone (preamble). */
        uint64_t reserved_1398_1399    : 2;
        uint64_t seq_idx_15            : 6;  /**< [1405:1400] Index to indicate which root sequence in parameter phy_root_15 for the zero-
                                                                 correlation zone (preamble). */
        uint64_t reserved_1406_1407    : 2;
#endif /* Word 21 - End */
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 22 - Big Endian */
        uint64_t reserved_1470_1471    : 2;
        uint64_t seq_idx_23            : 6;  /**< [1469:1464] Index to indicate which root sequence in parameter phy_root_23 for the zero-
                                                                 correlation zone (preamble). */
        uint64_t reserved_1462_1463    : 2;
        uint64_t seq_idx_22            : 6;  /**< [1461:1456] Index to indicate which root sequence in parameter phy_root_22 for the zero-
                                                                 correlation zone (preamble). */
        uint64_t reserved_1454_1455    : 2;
        uint64_t seq_idx_21            : 6;  /**< [1453:1448] Index to indicate which root sequence in parameter phy_root_21 for the zero-
                                                                 correlation zone (preamble). */
        uint64_t reserved_1446_1447    : 2;
        uint64_t seq_idx_20            : 6;  /**< [1445:1440] Index to indicate which root sequence in parameter phy_root_20 for the zero-
                                                                 correlation zone (preamble). */
        uint64_t reserved_1438_1439    : 2;
        uint64_t seq_idx_19            : 6;  /**< [1437:1432] Index to indicate which root sequence in parameter phy_root_19 for the zero-
                                                                 correlation zone (preamble). */
        uint64_t reserved_1430_1431    : 2;
        uint64_t seq_idx_18            : 6;  /**< [1429:1424] Index to indicate which root sequence in parameter phy_root_18 for the zero-
                                                                 correlation zone (preamble). */
        uint64_t reserved_1422_1423    : 2;
        uint64_t seq_idx_17            : 6;  /**< [1421:1416] Index to indicate which root sequence in parameter phy_root_17 for the zero-
                                                                 correlation zone (preamble). */
        uint64_t reserved_1414_1415    : 2;
        uint64_t seq_idx_16            : 6;  /**< [1413:1408] Index to indicate which root sequence in parameter phy_root_16 for the zero-
                                                                 correlation zone (preamble). */
#else /* Word 22 - Little Endian */
        uint64_t seq_idx_16            : 6;  /**< [1413:1408] Index to indicate which root sequence in parameter phy_root_16 for the zero-
                                                                 correlation zone (preamble). */
        uint64_t reserved_1414_1415    : 2;
        uint64_t seq_idx_17            : 6;  /**< [1421:1416] Index to indicate which root sequence in parameter phy_root_17 for the zero-
                                                                 correlation zone (preamble). */
        uint64_t reserved_1422_1423    : 2;
        uint64_t seq_idx_18            : 6;  /**< [1429:1424] Index to indicate which root sequence in parameter phy_root_18 for the zero-
                                                                 correlation zone (preamble). */
        uint64_t reserved_1430_1431    : 2;
        uint64_t seq_idx_19            : 6;  /**< [1437:1432] Index to indicate which root sequence in parameter phy_root_19 for the zero-
                                                                 correlation zone (preamble). */
        uint64_t reserved_1438_1439    : 2;
        uint64_t seq_idx_20            : 6;  /**< [1445:1440] Index to indicate which root sequence in parameter phy_root_20 for the zero-
                                                                 correlation zone (preamble). */
        uint64_t reserved_1446_1447    : 2;
        uint64_t seq_idx_21            : 6;  /**< [1453:1448] Index to indicate which root sequence in parameter phy_root_21 for the zero-
                                                                 correlation zone (preamble). */
        uint64_t reserved_1454_1455    : 2;
        uint64_t seq_idx_22            : 6;  /**< [1461:1456] Index to indicate which root sequence in parameter phy_root_22 for the zero-
                                                                 correlation zone (preamble). */
        uint64_t reserved_1462_1463    : 2;
        uint64_t seq_idx_23            : 6;  /**< [1469:1464] Index to indicate which root sequence in parameter phy_root_23 for the zero-
                                                                 correlation zone (preamble). */
        uint64_t reserved_1470_1471    : 2;
#endif /* Word 22 - End */
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 23 - Big Endian */
        uint64_t reserved_1534_1535    : 2;
        uint64_t seq_idx_31            : 6;  /**< [1533:1528] Index to indicate which root sequence in parameter phy_root_31 for the zero-
                                                                 correlation zone (preamble). */
        uint64_t reserved_1526_1527    : 2;
        uint64_t seq_idx_30            : 6;  /**< [1525:1520] Index to indicate which root sequence in parameter phy_root_30 for the zero-
                                                                 correlation zone (preamble). */
        uint64_t reserved_1518_1519    : 2;
        uint64_t seq_idx_29            : 6;  /**< [1517:1512] Index to indicate which root sequence in parameter phy_root_29 for the zero-
                                                                 correlation zone (preamble). */
        uint64_t reserved_1510_1511    : 2;
        uint64_t seq_idx_28            : 6;  /**< [1509:1504] Index to indicate which root sequence in parameter phy_root_28 for the zero-
                                                                 correlation zone (preamble). */
        uint64_t reserved_1502_1503    : 2;
        uint64_t seq_idx_27            : 6;  /**< [1501:1496] Index to indicate which root sequence in parameter phy_root_27 for the zero-
                                                                 correlation zone (preamble). */
        uint64_t reserved_1494_1495    : 2;
        uint64_t seq_idx_26            : 6;  /**< [1493:1488] Index to indicate which root sequence in parameter phy_root_26 for the zero-
                                                                 correlation zone (preamble). */
        uint64_t reserved_1486_1487    : 2;
        uint64_t seq_idx_25            : 6;  /**< [1485:1480] Index to indicate which root sequence in parameter phy_root_25 for the zero-
                                                                 correlation zone (preamble). */
        uint64_t reserved_1478_1479    : 2;
        uint64_t seq_idx_24            : 6;  /**< [1477:1472] Index to indicate which root sequence in parameter phy_root_24 for the zero-
                                                                 correlation zone (preamble). */
#else /* Word 23 - Little Endian */
        uint64_t seq_idx_24            : 6;  /**< [1477:1472] Index to indicate which root sequence in parameter phy_root_24 for the zero-
                                                                 correlation zone (preamble). */
        uint64_t reserved_1478_1479    : 2;
        uint64_t seq_idx_25            : 6;  /**< [1485:1480] Index to indicate which root sequence in parameter phy_root_25 for the zero-
                                                                 correlation zone (preamble). */
        uint64_t reserved_1486_1487    : 2;
        uint64_t seq_idx_26            : 6;  /**< [1493:1488] Index to indicate which root sequence in parameter phy_root_26 for the zero-
                                                                 correlation zone (preamble). */
        uint64_t reserved_1494_1495    : 2;
        uint64_t seq_idx_27            : 6;  /**< [1501:1496] Index to indicate which root sequence in parameter phy_root_27 for the zero-
                                                                 correlation zone (preamble). */
        uint64_t reserved_1502_1503    : 2;
        uint64_t seq_idx_28            : 6;  /**< [1509:1504] Index to indicate which root sequence in parameter phy_root_28 for the zero-
                                                                 correlation zone (preamble). */
        uint64_t reserved_1510_1511    : 2;
        uint64_t seq_idx_29            : 6;  /**< [1517:1512] Index to indicate which root sequence in parameter phy_root_29 for the zero-
                                                                 correlation zone (preamble). */
        uint64_t reserved_1518_1519    : 2;
        uint64_t seq_idx_30            : 6;  /**< [1525:1520] Index to indicate which root sequence in parameter phy_root_30 for the zero-
                                                                 correlation zone (preamble). */
        uint64_t reserved_1526_1527    : 2;
        uint64_t seq_idx_31            : 6;  /**< [1533:1528] Index to indicate which root sequence in parameter phy_root_31 for the zero-
                                                                 correlation zone (preamble). */
        uint64_t reserved_1534_1535    : 2;
#endif /* Word 23 - End */
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 24 - Big Endian */
        uint64_t reserved_1598_1599    : 2;
        uint64_t seq_idx_39            : 6;  /**< [1597:1592] Index to indicate which root sequence in parameter phy_root_39 for the zero-
                                                                 correlation zone (preamble). */
        uint64_t reserved_1590_1591    : 2;
        uint64_t seq_idx_38            : 6;  /**< [1589:1584] Index to indicate which root sequence in parameter phy_root_38 for the zero-
                                                                 correlation zone (preamble). */
        uint64_t reserved_1582_1583    : 2;
        uint64_t seq_idx_37            : 6;  /**< [1581:1576] Index to indicate which root sequence in parameter phy_root_37 for the zero-
                                                                 correlation zone (preamble). */
        uint64_t reserved_1574_1575    : 2;
        uint64_t seq_idx_36            : 6;  /**< [1573:1568] Index to indicate which root sequence in parameter phy_root_36 for the zero-
                                                                 correlation zone (preamble). */
        uint64_t reserved_1566_1567    : 2;
        uint64_t seq_idx_35            : 6;  /**< [1565:1560] Index to indicate which root sequence in parameter phy_root_35 for the zero-
                                                                 correlation zone (preamble). */
        uint64_t reserved_1558_1559    : 2;
        uint64_t seq_idx_34            : 6;  /**< [1557:1552] Index to indicate which root sequence in parameter phy_root_34 for the zero-
                                                                 correlation zone (preamble). */
        uint64_t reserved_1550_1551    : 2;
        uint64_t seq_idx_33            : 6;  /**< [1549:1544] Index to indicate which root sequence in parameter phy_root_33 for the zero-
                                                                 correlation zone (preamble). */
        uint64_t reserved_1542_1543    : 2;
        uint64_t seq_idx_32            : 6;  /**< [1541:1536] Index to indicate which root sequence in parameter phy_root_32 for the zero-
                                                                 correlation zone (preamble). */
#else /* Word 24 - Little Endian */
        uint64_t seq_idx_32            : 6;  /**< [1541:1536] Index to indicate which root sequence in parameter phy_root_32 for the zero-
                                                                 correlation zone (preamble). */
        uint64_t reserved_1542_1543    : 2;
        uint64_t seq_idx_33            : 6;  /**< [1549:1544] Index to indicate which root sequence in parameter phy_root_33 for the zero-
                                                                 correlation zone (preamble). */
        uint64_t reserved_1550_1551    : 2;
        uint64_t seq_idx_34            : 6;  /**< [1557:1552] Index to indicate which root sequence in parameter phy_root_34 for the zero-
                                                                 correlation zone (preamble). */
        uint64_t reserved_1558_1559    : 2;
        uint64_t seq_idx_35            : 6;  /**< [1565:1560] Index to indicate which root sequence in parameter phy_root_35 for the zero-
                                                                 correlation zone (preamble). */
        uint64_t reserved_1566_1567    : 2;
        uint64_t seq_idx_36            : 6;  /**< [1573:1568] Index to indicate which root sequence in parameter phy_root_36 for the zero-
                                                                 correlation zone (preamble). */
        uint64_t reserved_1574_1575    : 2;
        uint64_t seq_idx_37            : 6;  /**< [1581:1576] Index to indicate which root sequence in parameter phy_root_37 for the zero-
                                                                 correlation zone (preamble). */
        uint64_t reserved_1582_1583    : 2;
        uint64_t seq_idx_38            : 6;  /**< [1589:1584] Index to indicate which root sequence in parameter phy_root_38 for the zero-
                                                                 correlation zone (preamble). */
        uint64_t reserved_1590_1591    : 2;
        uint64_t seq_idx_39            : 6;  /**< [1597:1592] Index to indicate which root sequence in parameter phy_root_39 for the zero-
                                                                 correlation zone (preamble). */
        uint64_t reserved_1598_1599    : 2;
#endif /* Word 24 - End */
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 25 - Big Endian */
        uint64_t reserved_1662_1663    : 2;
        uint64_t seq_idx_47            : 6;  /**< [1661:1656] Index to indicate which root sequence in parameter phy_root_47 for the zero-
                                                                 correlation zone (preamble). */
        uint64_t reserved_1654_1655    : 2;
        uint64_t seq_idx_46            : 6;  /**< [1653:1648] Index to indicate which root sequence in parameter phy_root_46 for the zero-
                                                                 correlation zone (preamble). */
        uint64_t reserved_1646_1647    : 2;
        uint64_t seq_idx_45            : 6;  /**< [1645:1640] Index to indicate which root sequence in parameter phy_root_45 for the zero-
                                                                 correlation zone (preamble). */
        uint64_t reserved_1638_1639    : 2;
        uint64_t seq_idx_44            : 6;  /**< [1637:1632] Index to indicate which root sequence in parameter phy_root_44 for the zero-
                                                                 correlation zone (preamble). */
        uint64_t reserved_1630_1631    : 2;
        uint64_t seq_idx_43            : 6;  /**< [1629:1624] Index to indicate which root sequence in parameter phy_root_43 for the zero-
                                                                 correlation zone (preamble). */
        uint64_t reserved_1622_1623    : 2;
        uint64_t seq_idx_42            : 6;  /**< [1621:1616] Index to indicate which root sequence in parameter phy_root_42 for the zero-
                                                                 correlation zone (preamble). */
        uint64_t reserved_1614_1615    : 2;
        uint64_t seq_idx_41            : 6;  /**< [1613:1608] Index to indicate which root sequence in parameter phy_root_41 for the zero-
                                                                 correlation zone (preamble). */
        uint64_t reserved_1606_1607    : 2;
        uint64_t seq_idx_40            : 6;  /**< [1605:1600] Index to indicate which root sequence in parameter phy_root_40 for the zero-
                                                                 correlation zone (preamble). */
#else /* Word 25 - Little Endian */
        uint64_t seq_idx_40            : 6;  /**< [1605:1600] Index to indicate which root sequence in parameter phy_root_40 for the zero-
                                                                 correlation zone (preamble). */
        uint64_t reserved_1606_1607    : 2;
        uint64_t seq_idx_41            : 6;  /**< [1613:1608] Index to indicate which root sequence in parameter phy_root_41 for the zero-
                                                                 correlation zone (preamble). */
        uint64_t reserved_1614_1615    : 2;
        uint64_t seq_idx_42            : 6;  /**< [1621:1616] Index to indicate which root sequence in parameter phy_root_42 for the zero-
                                                                 correlation zone (preamble). */
        uint64_t reserved_1622_1623    : 2;
        uint64_t seq_idx_43            : 6;  /**< [1629:1624] Index to indicate which root sequence in parameter phy_root_43 for the zero-
                                                                 correlation zone (preamble). */
        uint64_t reserved_1630_1631    : 2;
        uint64_t seq_idx_44            : 6;  /**< [1637:1632] Index to indicate which root sequence in parameter phy_root_44 for the zero-
                                                                 correlation zone (preamble). */
        uint64_t reserved_1638_1639    : 2;
        uint64_t seq_idx_45            : 6;  /**< [1645:1640] Index to indicate which root sequence in parameter phy_root_45 for the zero-
                                                                 correlation zone (preamble). */
        uint64_t reserved_1646_1647    : 2;
        uint64_t seq_idx_46            : 6;  /**< [1653:1648] Index to indicate which root sequence in parameter phy_root_46 for the zero-
                                                                 correlation zone (preamble). */
        uint64_t reserved_1654_1655    : 2;
        uint64_t seq_idx_47            : 6;  /**< [1661:1656] Index to indicate which root sequence in parameter phy_root_47 for the zero-
                                                                 correlation zone (preamble). */
        uint64_t reserved_1662_1663    : 2;
#endif /* Word 25 - End */
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 26 - Big Endian */
        uint64_t reserved_1726_1727    : 2;
        uint64_t seq_idx_55            : 6;  /**< [1725:1720] Index to indicate which root sequence in parameter phy_root_55 for the zero-
                                                                 correlation zone (preamble). */
        uint64_t reserved_1718_1719    : 2;
        uint64_t seq_idx_54            : 6;  /**< [1717:1712] Index to indicate which root sequence in parameter phy_root_54 for the zero-
                                                                 correlation zone (preamble). */
        uint64_t reserved_1710_1711    : 2;
        uint64_t seq_idx_53            : 6;  /**< [1709:1704] Index to indicate which root sequence in parameter phy_root_53 for the zero-
                                                                 correlation zone (preamble). */
        uint64_t reserved_1702_1703    : 2;
        uint64_t seq_idx_52            : 6;  /**< [1701:1696] Index to indicate which root sequence in parameter phy_root_52 for the zero-
                                                                 correlation zone (preamble). */
        uint64_t reserved_1694_1695    : 2;
        uint64_t seq_idx_51            : 6;  /**< [1693:1688] Index to indicate which root sequence in parameter phy_root_51 for the zero-
                                                                 correlation zone (preamble). */
        uint64_t reserved_1686_1687    : 2;
        uint64_t seq_idx_50            : 6;  /**< [1685:1680] Index to indicate which root sequence in parameter phy_root_50 for the zero-
                                                                 correlation zone (preamble). */
        uint64_t reserved_1678_1679    : 2;
        uint64_t seq_idx_49            : 6;  /**< [1677:1672] Index to indicate which root sequence in parameter phy_root_49 for the zero-
                                                                 correlation zone (preamble). */
        uint64_t reserved_1670_1671    : 2;
        uint64_t seq_idx_48            : 6;  /**< [1669:1664] Index to indicate which root sequence in parameter phy_root_48 for the zero-
                                                                 correlation zone (preamble). */
#else /* Word 26 - Little Endian */
        uint64_t seq_idx_48            : 6;  /**< [1669:1664] Index to indicate which root sequence in parameter phy_root_48 for the zero-
                                                                 correlation zone (preamble). */
        uint64_t reserved_1670_1671    : 2;
        uint64_t seq_idx_49            : 6;  /**< [1677:1672] Index to indicate which root sequence in parameter phy_root_49 for the zero-
                                                                 correlation zone (preamble). */
        uint64_t reserved_1678_1679    : 2;
        uint64_t seq_idx_50            : 6;  /**< [1685:1680] Index to indicate which root sequence in parameter phy_root_50 for the zero-
                                                                 correlation zone (preamble). */
        uint64_t reserved_1686_1687    : 2;
        uint64_t seq_idx_51            : 6;  /**< [1693:1688] Index to indicate which root sequence in parameter phy_root_51 for the zero-
                                                                 correlation zone (preamble). */
        uint64_t reserved_1694_1695    : 2;
        uint64_t seq_idx_52            : 6;  /**< [1701:1696] Index to indicate which root sequence in parameter phy_root_52 for the zero-
                                                                 correlation zone (preamble). */
        uint64_t reserved_1702_1703    : 2;
        uint64_t seq_idx_53            : 6;  /**< [1709:1704] Index to indicate which root sequence in parameter phy_root_53 for the zero-
                                                                 correlation zone (preamble). */
        uint64_t reserved_1710_1711    : 2;
        uint64_t seq_idx_54            : 6;  /**< [1717:1712] Index to indicate which root sequence in parameter phy_root_54 for the zero-
                                                                 correlation zone (preamble). */
        uint64_t reserved_1718_1719    : 2;
        uint64_t seq_idx_55            : 6;  /**< [1725:1720] Index to indicate which root sequence in parameter phy_root_55 for the zero-
                                                                 correlation zone (preamble). */
        uint64_t reserved_1726_1727    : 2;
#endif /* Word 26 - End */
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 27 - Big Endian */
        uint64_t reserved_1790_1791    : 2;
        uint64_t seq_idx_63            : 6;  /**< [1789:1784] Index to indicate which root sequence in parameter phy_root_63 for the zero-
                                                                 correlation zone (preamble). */
        uint64_t reserved_1782_1783    : 2;
        uint64_t seq_idx_62            : 6;  /**< [1781:1776] Index to indicate which root sequence in parameter phy_root_62 for the zero-
                                                                 correlation zone (preamble). */
        uint64_t reserved_1774_1775    : 2;
        uint64_t seq_idx_61            : 6;  /**< [1773:1768] Index to indicate which root sequence in parameter phy_root_61 for the zero-
                                                                 correlation zone (preamble). */
        uint64_t reserved_1766_1767    : 2;
        uint64_t seq_idx_60            : 6;  /**< [1765:1760] Index to indicate which root sequence in parameter phy_root_60 for the zero-
                                                                 correlation zone (preamble). */
        uint64_t reserved_1758_1759    : 2;
        uint64_t seq_idx_59            : 6;  /**< [1757:1752] Index to indicate which root sequence in parameter phy_root_59 for the zero-
                                                                 correlation zone (preamble). */
        uint64_t reserved_1750_1751    : 2;
        uint64_t seq_idx_58            : 6;  /**< [1749:1744] Index to indicate which root sequence in parameter phy_root_58 for the zero-
                                                                 correlation zone (preamble). */
        uint64_t reserved_1742_1743    : 2;
        uint64_t seq_idx_57            : 6;  /**< [1741:1736] Index to indicate which root sequence in parameter phy_root_57 for the zero-
                                                                 correlation zone (preamble). */
        uint64_t reserved_1734_1735    : 2;
        uint64_t seq_idx_56            : 6;  /**< [1733:1728] Index to indicate which root sequence in parameter phy_root_56 for the zero-
                                                                 correlation zone (preamble). */
#else /* Word 27 - Little Endian */
        uint64_t seq_idx_56            : 6;  /**< [1733:1728] Index to indicate which root sequence in parameter phy_root_56 for the zero-
                                                                 correlation zone (preamble). */
        uint64_t reserved_1734_1735    : 2;
        uint64_t seq_idx_57            : 6;  /**< [1741:1736] Index to indicate which root sequence in parameter phy_root_57 for the zero-
                                                                 correlation zone (preamble). */
        uint64_t reserved_1742_1743    : 2;
        uint64_t seq_idx_58            : 6;  /**< [1749:1744] Index to indicate which root sequence in parameter phy_root_58 for the zero-
                                                                 correlation zone (preamble). */
        uint64_t reserved_1750_1751    : 2;
        uint64_t seq_idx_59            : 6;  /**< [1757:1752] Index to indicate which root sequence in parameter phy_root_59 for the zero-
                                                                 correlation zone (preamble). */
        uint64_t reserved_1758_1759    : 2;
        uint64_t seq_idx_60            : 6;  /**< [1765:1760] Index to indicate which root sequence in parameter phy_root_60 for the zero-
                                                                 correlation zone (preamble). */
        uint64_t reserved_1766_1767    : 2;
        uint64_t seq_idx_61            : 6;  /**< [1773:1768] Index to indicate which root sequence in parameter phy_root_61 for the zero-
                                                                 correlation zone (preamble). */
        uint64_t reserved_1774_1775    : 2;
        uint64_t seq_idx_62            : 6;  /**< [1781:1776] Index to indicate which root sequence in parameter phy_root_62 for the zero-
                                                                 correlation zone (preamble). */
        uint64_t reserved_1782_1783    : 2;
        uint64_t seq_idx_63            : 6;  /**< [1789:1784] Index to indicate which root sequence in parameter phy_root_63 for the zero-
                                                                 correlation zone (preamble). */
        uint64_t reserved_1790_1791    : 2;
#endif /* Word 27 - End */
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 28 - Big Endian */
        uint64_t reserved_1851_1855    : 5;
        uint64_t preamble_start_3      : 11; /**< [1850:1840] Starting index of zero-correlation zone 3; unit is the resolution of IFFT. */
        uint64_t reserved_1835_1839    : 5;
        uint64_t preamble_start_2      : 11; /**< [1834:1824] Starting index of zero-correlation zone 2; unit is the resolution of IFFT. */
        uint64_t reserved_1819_1823    : 5;
        uint64_t preamble_start_1      : 11; /**< [1818:1808] Starting index of zero-correlation zone 1; unit is the resolution of IFFT. */
        uint64_t reserved_1803_1807    : 5;
        uint64_t preamble_start_0      : 11; /**< [1802:1792] Starting index of zero-correlation zone 0; unit is the resolution of IFFT. */
#else /* Word 28 - Little Endian */
        uint64_t preamble_start_0      : 11; /**< [1802:1792] Starting index of zero-correlation zone 0; unit is the resolution of IFFT. */
        uint64_t reserved_1803_1807    : 5;
        uint64_t preamble_start_1      : 11; /**< [1818:1808] Starting index of zero-correlation zone 1; unit is the resolution of IFFT. */
        uint64_t reserved_1819_1823    : 5;
        uint64_t preamble_start_2      : 11; /**< [1834:1824] Starting index of zero-correlation zone 2; unit is the resolution of IFFT. */
        uint64_t reserved_1835_1839    : 5;
        uint64_t preamble_start_3      : 11; /**< [1850:1840] Starting index of zero-correlation zone 3; unit is the resolution of IFFT. */
        uint64_t reserved_1851_1855    : 5;
#endif /* Word 28 - End */
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 29 - Big Endian */
        uint64_t reserved_1915_1919    : 5;
        uint64_t preamble_start_7      : 11; /**< [1914:1904] Starting index of zero-correlation zone 7; unit is the resolution of IFFT. */
        uint64_t reserved_1899_1903    : 5;
        uint64_t preamble_start_6      : 11; /**< [1898:1888] Starting index of zero-correlation zone 6; unit is the resolution of IFFT. */
        uint64_t reserved_1883_1887    : 5;
        uint64_t preamble_start_5      : 11; /**< [1882:1872] Starting index of zero-correlation zone 5; unit is the resolution of IFFT. */
        uint64_t reserved_1867_1871    : 5;
        uint64_t preamble_start_4      : 11; /**< [1866:1856] Starting index of zero-correlation zone 4; unit is the resolution of IFFT. */
#else /* Word 29 - Little Endian */
        uint64_t preamble_start_4      : 11; /**< [1866:1856] Starting index of zero-correlation zone 4; unit is the resolution of IFFT. */
        uint64_t reserved_1867_1871    : 5;
        uint64_t preamble_start_5      : 11; /**< [1882:1872] Starting index of zero-correlation zone 5; unit is the resolution of IFFT. */
        uint64_t reserved_1883_1887    : 5;
        uint64_t preamble_start_6      : 11; /**< [1898:1888] Starting index of zero-correlation zone 6; unit is the resolution of IFFT. */
        uint64_t reserved_1899_1903    : 5;
        uint64_t preamble_start_7      : 11; /**< [1914:1904] Starting index of zero-correlation zone 7; unit is the resolution of IFFT. */
        uint64_t reserved_1915_1919    : 5;
#endif /* Word 29 - End */
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 30 - Big Endian */
        uint64_t reserved_1979_1983    : 5;
        uint64_t preamble_start_11     : 11; /**< [1978:1968] Starting index of zero-correlation zone 11; unit is the resolution of IFFT. */
        uint64_t reserved_1963_1967    : 5;
        uint64_t preamble_start_10     : 11; /**< [1962:1952] Starting index of zero-correlation zone 10; unit is the resolution of IFFT. */
        uint64_t reserved_1947_1951    : 5;
        uint64_t preamble_start_9      : 11; /**< [1946:1936] Starting index of zero-correlation zone 9; unit is the resolution of IFFT. */
        uint64_t reserved_1931_1935    : 5;
        uint64_t preamble_start_8      : 11; /**< [1930:1920] Starting index of zero-correlation zone 8; unit is the resolution of IFFT. */
#else /* Word 30 - Little Endian */
        uint64_t preamble_start_8      : 11; /**< [1930:1920] Starting index of zero-correlation zone 8; unit is the resolution of IFFT. */
        uint64_t reserved_1931_1935    : 5;
        uint64_t preamble_start_9      : 11; /**< [1946:1936] Starting index of zero-correlation zone 9; unit is the resolution of IFFT. */
        uint64_t reserved_1947_1951    : 5;
        uint64_t preamble_start_10     : 11; /**< [1962:1952] Starting index of zero-correlation zone 10; unit is the resolution of IFFT. */
        uint64_t reserved_1963_1967    : 5;
        uint64_t preamble_start_11     : 11; /**< [1978:1968] Starting index of zero-correlation zone 11; unit is the resolution of IFFT. */
        uint64_t reserved_1979_1983    : 5;
#endif /* Word 30 - End */
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 31 - Big Endian */
        uint64_t reserved_2043_2047    : 5;
        uint64_t preamble_start_15     : 11; /**< [2042:2032] Starting index of zero-correlation zone 15; unit is the resolution of IFFT. */
        uint64_t reserved_2027_2031    : 5;
        uint64_t preamble_start_14     : 11; /**< [2026:2016] Starting index of zero-correlation zone 14; unit is the resolution of IFFT. */
        uint64_t reserved_2011_2015    : 5;
        uint64_t preamble_start_13     : 11; /**< [2010:2000] Starting index of zero-correlation zone 13; unit is the resolution of IFFT. */
        uint64_t reserved_1995_1999    : 5;
        uint64_t preamble_start_12     : 11; /**< [1994:1984] Starting index of zero-correlation zone 12; unit is the resolution of IFFT. */
#else /* Word 31 - Little Endian */
        uint64_t preamble_start_12     : 11; /**< [1994:1984] Starting index of zero-correlation zone 12; unit is the resolution of IFFT. */
        uint64_t reserved_1995_1999    : 5;
        uint64_t preamble_start_13     : 11; /**< [2010:2000] Starting index of zero-correlation zone 13; unit is the resolution of IFFT. */
        uint64_t reserved_2011_2015    : 5;
        uint64_t preamble_start_14     : 11; /**< [2026:2016] Starting index of zero-correlation zone 14; unit is the resolution of IFFT. */
        uint64_t reserved_2027_2031    : 5;
        uint64_t preamble_start_15     : 11; /**< [2042:2032] Starting index of zero-correlation zone 15; unit is the resolution of IFFT. */
        uint64_t reserved_2043_2047    : 5;
#endif /* Word 31 - End */
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 32 - Big Endian */
        uint64_t reserved_2107_2111    : 5;
        uint64_t preamble_start_19     : 11; /**< [2106:2096] Starting index of zero-correlation zone 19; unit is the resolution of IFFT. */
        uint64_t reserved_2091_2095    : 5;
        uint64_t preamble_start_18     : 11; /**< [2090:2080] Starting index of zero-correlation zone 18; unit is the resolution of IFFT. */
        uint64_t reserved_2075_2079    : 5;
        uint64_t preamble_start_17     : 11; /**< [2074:2064] Starting index of zero-correlation zone 17; unit is the resolution of IFFT. */
        uint64_t reserved_2059_2063    : 5;
        uint64_t preamble_start_16     : 11; /**< [2058:2048] Starting index of zero-correlation zone 16; unit is the resolution of IFFT. */
#else /* Word 32 - Little Endian */
        uint64_t preamble_start_16     : 11; /**< [2058:2048] Starting index of zero-correlation zone 16; unit is the resolution of IFFT. */
        uint64_t reserved_2059_2063    : 5;
        uint64_t preamble_start_17     : 11; /**< [2074:2064] Starting index of zero-correlation zone 17; unit is the resolution of IFFT. */
        uint64_t reserved_2075_2079    : 5;
        uint64_t preamble_start_18     : 11; /**< [2090:2080] Starting index of zero-correlation zone 18; unit is the resolution of IFFT. */
        uint64_t reserved_2091_2095    : 5;
        uint64_t preamble_start_19     : 11; /**< [2106:2096] Starting index of zero-correlation zone 19; unit is the resolution of IFFT. */
        uint64_t reserved_2107_2111    : 5;
#endif /* Word 32 - End */
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 33 - Big Endian */
        uint64_t reserved_2171_2175    : 5;
        uint64_t preamble_start_23     : 11; /**< [2170:2160] Starting index of zero-correlation zone 23; unit is the resolution of IFFT. */
        uint64_t reserved_2155_2159    : 5;
        uint64_t preamble_start_22     : 11; /**< [2154:2144] Starting index of zero-correlation zone 22; unit is the resolution of IFFT. */
        uint64_t reserved_2139_2143    : 5;
        uint64_t preamble_start_21     : 11; /**< [2138:2128] Starting index of zero-correlation zone 21; unit is the resolution of IFFT. */
        uint64_t reserved_2123_2127    : 5;
        uint64_t preamble_start_20     : 11; /**< [2122:2112] Starting index of zero-correlation zone 20; unit is the resolution of IFFT. */
#else /* Word 33 - Little Endian */
        uint64_t preamble_start_20     : 11; /**< [2122:2112] Starting index of zero-correlation zone 20; unit is the resolution of IFFT. */
        uint64_t reserved_2123_2127    : 5;
        uint64_t preamble_start_21     : 11; /**< [2138:2128] Starting index of zero-correlation zone 21; unit is the resolution of IFFT. */
        uint64_t reserved_2139_2143    : 5;
        uint64_t preamble_start_22     : 11; /**< [2154:2144] Starting index of zero-correlation zone 22; unit is the resolution of IFFT. */
        uint64_t reserved_2155_2159    : 5;
        uint64_t preamble_start_23     : 11; /**< [2170:2160] Starting index of zero-correlation zone 23; unit is the resolution of IFFT. */
        uint64_t reserved_2171_2175    : 5;
#endif /* Word 33 - End */
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 34 - Big Endian */
        uint64_t reserved_2235_2239    : 5;
        uint64_t preamble_start_27     : 11; /**< [2234:2224] Starting index of zero-correlation zone 27; unit is the resolution of IFFT. */
        uint64_t reserved_2219_2223    : 5;
        uint64_t preamble_start_26     : 11; /**< [2218:2208] Starting index of zero-correlation zone 26; unit is the resolution of IFFT. */
        uint64_t reserved_2203_2207    : 5;
        uint64_t preamble_start_25     : 11; /**< [2202:2192] Starting index of zero-correlation zone 25; unit is the resolution of IFFT. */
        uint64_t reserved_2187_2191    : 5;
        uint64_t preamble_start_24     : 11; /**< [2186:2176] Starting index of zero-correlation zone 24; unit is the resolution of IFFT. */
#else /* Word 34 - Little Endian */
        uint64_t preamble_start_24     : 11; /**< [2186:2176] Starting index of zero-correlation zone 24; unit is the resolution of IFFT. */
        uint64_t reserved_2187_2191    : 5;
        uint64_t preamble_start_25     : 11; /**< [2202:2192] Starting index of zero-correlation zone 25; unit is the resolution of IFFT. */
        uint64_t reserved_2203_2207    : 5;
        uint64_t preamble_start_26     : 11; /**< [2218:2208] Starting index of zero-correlation zone 26; unit is the resolution of IFFT. */
        uint64_t reserved_2219_2223    : 5;
        uint64_t preamble_start_27     : 11; /**< [2234:2224] Starting index of zero-correlation zone 27; unit is the resolution of IFFT. */
        uint64_t reserved_2235_2239    : 5;
#endif /* Word 34 - End */
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 35 - Big Endian */
        uint64_t reserved_2299_2303    : 5;
        uint64_t preamble_start_31     : 11; /**< [2298:2288] Starting index of zero-correlation zone 31; unit is the resolution of IFFT. */
        uint64_t reserved_2283_2287    : 5;
        uint64_t preamble_start_30     : 11; /**< [2282:2272] Starting index of zero-correlation zone 30; unit is the resolution of IFFT. */
        uint64_t reserved_2267_2271    : 5;
        uint64_t preamble_start_29     : 11; /**< [2266:2256] Starting index of zero-correlation zone 29; unit is the resolution of IFFT. */
        uint64_t reserved_2251_2255    : 5;
        uint64_t preamble_start_28     : 11; /**< [2250:2240] Starting index of zero-correlation zone 28; unit is the resolution of IFFT. */
#else /* Word 35 - Little Endian */
        uint64_t preamble_start_28     : 11; /**< [2250:2240] Starting index of zero-correlation zone 28; unit is the resolution of IFFT. */
        uint64_t reserved_2251_2255    : 5;
        uint64_t preamble_start_29     : 11; /**< [2266:2256] Starting index of zero-correlation zone 29; unit is the resolution of IFFT. */
        uint64_t reserved_2267_2271    : 5;
        uint64_t preamble_start_30     : 11; /**< [2282:2272] Starting index of zero-correlation zone 30; unit is the resolution of IFFT. */
        uint64_t reserved_2283_2287    : 5;
        uint64_t preamble_start_31     : 11; /**< [2298:2288] Starting index of zero-correlation zone 31; unit is the resolution of IFFT. */
        uint64_t reserved_2299_2303    : 5;
#endif /* Word 35 - End */
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 36 - Big Endian */
        uint64_t reserved_2363_2367    : 5;
        uint64_t preamble_start_35     : 11; /**< [2362:2352] Starting index of zero-correlation zone 35; unit is the resolution of IFFT. */
        uint64_t reserved_2347_2351    : 5;
        uint64_t preamble_start_34     : 11; /**< [2346:2336] Starting index of zero-correlation zone 34; unit is the resolution of IFFT. */
        uint64_t reserved_2331_2335    : 5;
        uint64_t preamble_start_33     : 11; /**< [2330:2320] Starting index of zero-correlation zone 33; unit is the resolution of IFFT. */
        uint64_t reserved_2315_2319    : 5;
        uint64_t preamble_start_32     : 11; /**< [2314:2304] Starting index of zero-correlation zone 32; unit is the resolution of IFFT. */
#else /* Word 36 - Little Endian */
        uint64_t preamble_start_32     : 11; /**< [2314:2304] Starting index of zero-correlation zone 32; unit is the resolution of IFFT. */
        uint64_t reserved_2315_2319    : 5;
        uint64_t preamble_start_33     : 11; /**< [2330:2320] Starting index of zero-correlation zone 33; unit is the resolution of IFFT. */
        uint64_t reserved_2331_2335    : 5;
        uint64_t preamble_start_34     : 11; /**< [2346:2336] Starting index of zero-correlation zone 34; unit is the resolution of IFFT. */
        uint64_t reserved_2347_2351    : 5;
        uint64_t preamble_start_35     : 11; /**< [2362:2352] Starting index of zero-correlation zone 35; unit is the resolution of IFFT. */
        uint64_t reserved_2363_2367    : 5;
#endif /* Word 36 - End */
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 37 - Big Endian */
        uint64_t reserved_2427_2431    : 5;
        uint64_t preamble_start_39     : 11; /**< [2426:2416] Starting index of zero-correlation zone 39; unit is the resolution of IFFT. */
        uint64_t reserved_2411_2415    : 5;
        uint64_t preamble_start_38     : 11; /**< [2410:2400] Starting index of zero-correlation zone 38; unit is the resolution of IFFT. */
        uint64_t reserved_2395_2399    : 5;
        uint64_t preamble_start_37     : 11; /**< [2394:2384] Starting index of zero-correlation zone 37; unit is the resolution of IFFT. */
        uint64_t reserved_2379_2383    : 5;
        uint64_t preamble_start_36     : 11; /**< [2378:2368] Starting index of zero-correlation zone 36; unit is the resolution of IFFT. */
#else /* Word 37 - Little Endian */
        uint64_t preamble_start_36     : 11; /**< [2378:2368] Starting index of zero-correlation zone 36; unit is the resolution of IFFT. */
        uint64_t reserved_2379_2383    : 5;
        uint64_t preamble_start_37     : 11; /**< [2394:2384] Starting index of zero-correlation zone 37; unit is the resolution of IFFT. */
        uint64_t reserved_2395_2399    : 5;
        uint64_t preamble_start_38     : 11; /**< [2410:2400] Starting index of zero-correlation zone 38; unit is the resolution of IFFT. */
        uint64_t reserved_2411_2415    : 5;
        uint64_t preamble_start_39     : 11; /**< [2426:2416] Starting index of zero-correlation zone 39; unit is the resolution of IFFT. */
        uint64_t reserved_2427_2431    : 5;
#endif /* Word 37 - End */
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 38 - Big Endian */
        uint64_t reserved_2491_2495    : 5;
        uint64_t preamble_start_43     : 11; /**< [2490:2480] Starting index of zero-correlation zone 43; unit is the resolution of IFFT. */
        uint64_t reserved_2475_2479    : 5;
        uint64_t preamble_start_42     : 11; /**< [2474:2464] Starting index of zero-correlation zone 42; unit is the resolution of IFFT. */
        uint64_t reserved_2459_2463    : 5;
        uint64_t preamble_start_41     : 11; /**< [2458:2448] Starting index of zero-correlation zone 41; unit is the resolution of IFFT. */
        uint64_t reserved_2443_2447    : 5;
        uint64_t preamble_start_40     : 11; /**< [2442:2432] Starting index of zero-correlation zone 40; unit is the resolution of IFFT. */
#else /* Word 38 - Little Endian */
        uint64_t preamble_start_40     : 11; /**< [2442:2432] Starting index of zero-correlation zone 40; unit is the resolution of IFFT. */
        uint64_t reserved_2443_2447    : 5;
        uint64_t preamble_start_41     : 11; /**< [2458:2448] Starting index of zero-correlation zone 41; unit is the resolution of IFFT. */
        uint64_t reserved_2459_2463    : 5;
        uint64_t preamble_start_42     : 11; /**< [2474:2464] Starting index of zero-correlation zone 42; unit is the resolution of IFFT. */
        uint64_t reserved_2475_2479    : 5;
        uint64_t preamble_start_43     : 11; /**< [2490:2480] Starting index of zero-correlation zone 43; unit is the resolution of IFFT. */
        uint64_t reserved_2491_2495    : 5;
#endif /* Word 38 - End */
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 39 - Big Endian */
        uint64_t reserved_2555_2559    : 5;
        uint64_t preamble_start_47     : 11; /**< [2554:2544] Starting index of zero-correlation zone 47; unit is the resolution of IFFT. */
        uint64_t reserved_2539_2543    : 5;
        uint64_t preamble_start_46     : 11; /**< [2538:2528] Starting index of zero-correlation zone 46; unit is the resolution of IFFT. */
        uint64_t reserved_2523_2527    : 5;
        uint64_t preamble_start_45     : 11; /**< [2522:2512] Starting index of zero-correlation zone 45; unit is the resolution of IFFT. */
        uint64_t reserved_2507_2511    : 5;
        uint64_t preamble_start_44     : 11; /**< [2506:2496] Starting index of zero-correlation zone 44; unit is the resolution of IFFT. */
#else /* Word 39 - Little Endian */
        uint64_t preamble_start_44     : 11; /**< [2506:2496] Starting index of zero-correlation zone 44; unit is the resolution of IFFT. */
        uint64_t reserved_2507_2511    : 5;
        uint64_t preamble_start_45     : 11; /**< [2522:2512] Starting index of zero-correlation zone 45; unit is the resolution of IFFT. */
        uint64_t reserved_2523_2527    : 5;
        uint64_t preamble_start_46     : 11; /**< [2538:2528] Starting index of zero-correlation zone 46; unit is the resolution of IFFT. */
        uint64_t reserved_2539_2543    : 5;
        uint64_t preamble_start_47     : 11; /**< [2554:2544] Starting index of zero-correlation zone 47; unit is the resolution of IFFT. */
        uint64_t reserved_2555_2559    : 5;
#endif /* Word 39 - End */
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 40 - Big Endian */
        uint64_t reserved_2619_2623    : 5;
        uint64_t preamble_start_51     : 11; /**< [2618:2608] Starting index of zero-correlation zone 51; unit is the resolution of IFFT. */
        uint64_t reserved_2603_2607    : 5;
        uint64_t preamble_start_50     : 11; /**< [2602:2592] Starting index of zero-correlation zone 50; unit is the resolution of IFFT. */
        uint64_t reserved_2587_2591    : 5;
        uint64_t preamble_start_49     : 11; /**< [2586:2576] Starting index of zero-correlation zone 49; unit is the resolution of IFFT. */
        uint64_t reserved_2571_2575    : 5;
        uint64_t preamble_start_48     : 11; /**< [2570:2560] Starting index of zero-correlation zone 48; unit is the resolution of IFFT. */
#else /* Word 40 - Little Endian */
        uint64_t preamble_start_48     : 11; /**< [2570:2560] Starting index of zero-correlation zone 48; unit is the resolution of IFFT. */
        uint64_t reserved_2571_2575    : 5;
        uint64_t preamble_start_49     : 11; /**< [2586:2576] Starting index of zero-correlation zone 49; unit is the resolution of IFFT. */
        uint64_t reserved_2587_2591    : 5;
        uint64_t preamble_start_50     : 11; /**< [2602:2592] Starting index of zero-correlation zone 50; unit is the resolution of IFFT. */
        uint64_t reserved_2603_2607    : 5;
        uint64_t preamble_start_51     : 11; /**< [2618:2608] Starting index of zero-correlation zone 51; unit is the resolution of IFFT. */
        uint64_t reserved_2619_2623    : 5;
#endif /* Word 40 - End */
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 41 - Big Endian */
        uint64_t reserved_2683_2687    : 5;
        uint64_t preamble_start_55     : 11; /**< [2682:2672] Starting index of zero-correlation zone 55; unit is the resolution of IFFT. */
        uint64_t reserved_2667_2671    : 5;
        uint64_t preamble_start_54     : 11; /**< [2666:2656] Starting index of zero-correlation zone 54; unit is the resolution of IFFT. */
        uint64_t reserved_2651_2655    : 5;
        uint64_t preamble_start_53     : 11; /**< [2650:2640] Starting index of zero-correlation zone 53; unit is the resolution of IFFT. */
        uint64_t reserved_2635_2639    : 5;
        uint64_t preamble_start_52     : 11; /**< [2634:2624] Starting index of zero-correlation zone 52; unit is the resolution of IFFT. */
#else /* Word 41 - Little Endian */
        uint64_t preamble_start_52     : 11; /**< [2634:2624] Starting index of zero-correlation zone 52; unit is the resolution of IFFT. */
        uint64_t reserved_2635_2639    : 5;
        uint64_t preamble_start_53     : 11; /**< [2650:2640] Starting index of zero-correlation zone 53; unit is the resolution of IFFT. */
        uint64_t reserved_2651_2655    : 5;
        uint64_t preamble_start_54     : 11; /**< [2666:2656] Starting index of zero-correlation zone 54; unit is the resolution of IFFT. */
        uint64_t reserved_2667_2671    : 5;
        uint64_t preamble_start_55     : 11; /**< [2682:2672] Starting index of zero-correlation zone 55; unit is the resolution of IFFT. */
        uint64_t reserved_2683_2687    : 5;
#endif /* Word 41 - End */
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 42 - Big Endian */
        uint64_t reserved_2747_2751    : 5;
        uint64_t preamble_start_59     : 11; /**< [2746:2736] Starting index of zero-correlation zone 59; unit is the resolution of IFFT. */
        uint64_t reserved_2731_2735    : 5;
        uint64_t preamble_start_58     : 11; /**< [2730:2720] Starting index of zero-correlation zone 58; unit is the resolution of IFFT. */
        uint64_t reserved_2715_2719    : 5;
        uint64_t preamble_start_57     : 11; /**< [2714:2704] Starting index of zero-correlation zone 57; unit is the resolution of IFFT. */
        uint64_t reserved_2699_2703    : 5;
        uint64_t preamble_start_56     : 11; /**< [2698:2688] Starting index of zero-correlation zone 56; unit is the resolution of IFFT. */
#else /* Word 42 - Little Endian */
        uint64_t preamble_start_56     : 11; /**< [2698:2688] Starting index of zero-correlation zone 56; unit is the resolution of IFFT. */
        uint64_t reserved_2699_2703    : 5;
        uint64_t preamble_start_57     : 11; /**< [2714:2704] Starting index of zero-correlation zone 57; unit is the resolution of IFFT. */
        uint64_t reserved_2715_2719    : 5;
        uint64_t preamble_start_58     : 11; /**< [2730:2720] Starting index of zero-correlation zone 58; unit is the resolution of IFFT. */
        uint64_t reserved_2731_2735    : 5;
        uint64_t preamble_start_59     : 11; /**< [2746:2736] Starting index of zero-correlation zone 59; unit is the resolution of IFFT. */
        uint64_t reserved_2747_2751    : 5;
#endif /* Word 42 - End */
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 43 - Big Endian */
        uint64_t reserved_2811_2815    : 5;
        uint64_t preamble_start_63     : 11; /**< [2810:2800] Starting index of zero-correlation zone 63; unit is the resolution of IFFT. */
        uint64_t reserved_2795_2799    : 5;
        uint64_t preamble_start_62     : 11; /**< [2794:2784] Starting index of zero-correlation zone 62; unit is the resolution of IFFT. */
        uint64_t reserved_2779_2783    : 5;
        uint64_t preamble_start_61     : 11; /**< [2778:2768] Starting index of zero-correlation zone 61; unit is the resolution of IFFT. */
        uint64_t reserved_2763_2767    : 5;
        uint64_t preamble_start_60     : 11; /**< [2762:2752] Starting index of zero-correlation zone 60; unit is the resolution of IFFT. */
#else /* Word 43 - Little Endian */
        uint64_t preamble_start_60     : 11; /**< [2762:2752] Starting index of zero-correlation zone 60; unit is the resolution of IFFT. */
        uint64_t reserved_2763_2767    : 5;
        uint64_t preamble_start_61     : 11; /**< [2778:2768] Starting index of zero-correlation zone 61; unit is the resolution of IFFT. */
        uint64_t reserved_2779_2783    : 5;
        uint64_t preamble_start_62     : 11; /**< [2794:2784] Starting index of zero-correlation zone 62; unit is the resolution of IFFT. */
        uint64_t reserved_2795_2799    : 5;
        uint64_t preamble_start_63     : 11; /**< [2810:2800] Starting index of zero-correlation zone 63; unit is the resolution of IFFT. */
        uint64_t reserved_2811_2815    : 5;
#endif /* Word 43 - End */
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 44 - Big Endian */
        uint64_t reserved_2875_2879    : 5;
        uint64_t du_3                  : 11; /**< [2874:2864] Du value for zero-correlation zone 3; unit is the resolution of IFFT. */
        uint64_t reserved_2859_2863    : 5;
        uint64_t du_2                  : 11; /**< [2858:2848] Du value for zero-correlation zone 2; unit is the resolution of IFFT. */
        uint64_t reserved_2843_2847    : 5;
        uint64_t du_1                  : 11; /**< [2842:2832] Du value for zero-correlation zone 1; unit is the resolution of IFFT. */
        uint64_t reserved_2827_2831    : 5;
        uint64_t du_0                  : 11; /**< [2826:2816] Du value for zero-correlation zone 0; unit is the resolution of IFFT. */
#else /* Word 44 - Little Endian */
        uint64_t du_0                  : 11; /**< [2826:2816] Du value for zero-correlation zone 0; unit is the resolution of IFFT. */
        uint64_t reserved_2827_2831    : 5;
        uint64_t du_1                  : 11; /**< [2842:2832] Du value for zero-correlation zone 1; unit is the resolution of IFFT. */
        uint64_t reserved_2843_2847    : 5;
        uint64_t du_2                  : 11; /**< [2858:2848] Du value for zero-correlation zone 2; unit is the resolution of IFFT. */
        uint64_t reserved_2859_2863    : 5;
        uint64_t du_3                  : 11; /**< [2874:2864] Du value for zero-correlation zone 3; unit is the resolution of IFFT. */
        uint64_t reserved_2875_2879    : 5;
#endif /* Word 44 - End */
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 45 - Big Endian */
        uint64_t reserved_2939_2943    : 5;
        uint64_t du_7                  : 11; /**< [2938:2928] Du value for zero-correlation zone 7; unit is the resolution of IFFT. */
        uint64_t reserved_2923_2927    : 5;
        uint64_t du_6                  : 11; /**< [2922:2912] Du value for zero-correlation zone 6; unit is the resolution of IFFT. */
        uint64_t reserved_2907_2911    : 5;
        uint64_t du_5                  : 11; /**< [2906:2896] Du value for zero-correlation zone 5; unit is the resolution of IFFT. */
        uint64_t reserved_2891_2895    : 5;
        uint64_t du_4                  : 11; /**< [2890:2880] Du value for zero-correlation zone 4; unit is the resolution of IFFT. */
#else /* Word 45 - Little Endian */
        uint64_t du_4                  : 11; /**< [2890:2880] Du value for zero-correlation zone 4; unit is the resolution of IFFT. */
        uint64_t reserved_2891_2895    : 5;
        uint64_t du_5                  : 11; /**< [2906:2896] Du value for zero-correlation zone 5; unit is the resolution of IFFT. */
        uint64_t reserved_2907_2911    : 5;
        uint64_t du_6                  : 11; /**< [2922:2912] Du value for zero-correlation zone 6; unit is the resolution of IFFT. */
        uint64_t reserved_2923_2927    : 5;
        uint64_t du_7                  : 11; /**< [2938:2928] Du value for zero-correlation zone 7; unit is the resolution of IFFT. */
        uint64_t reserved_2939_2943    : 5;
#endif /* Word 45 - End */
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 46 - Big Endian */
        uint64_t reserved_3003_3007    : 5;
        uint64_t du_11                 : 11; /**< [3002:2992] Du value for zero-correlation zone 11; unit is the resolution of IFFT. */
        uint64_t reserved_2987_2991    : 5;
        uint64_t du_10                 : 11; /**< [2986:2976] Du value for zero-correlation zone 10; unit is the resolution of IFFT. */
        uint64_t reserved_2971_2975    : 5;
        uint64_t du_9                  : 11; /**< [2970:2960] Du value for zero-correlation zone 9; unit is the resolution of IFFT. */
        uint64_t reserved_2955_2959    : 5;
        uint64_t du_8                  : 11; /**< [2954:2944] Du value for zero-correlation zone 8; unit is the resolution of IFFT. */
#else /* Word 46 - Little Endian */
        uint64_t du_8                  : 11; /**< [2954:2944] Du value for zero-correlation zone 8; unit is the resolution of IFFT. */
        uint64_t reserved_2955_2959    : 5;
        uint64_t du_9                  : 11; /**< [2970:2960] Du value for zero-correlation zone 9; unit is the resolution of IFFT. */
        uint64_t reserved_2971_2975    : 5;
        uint64_t du_10                 : 11; /**< [2986:2976] Du value for zero-correlation zone 10; unit is the resolution of IFFT. */
        uint64_t reserved_2987_2991    : 5;
        uint64_t du_11                 : 11; /**< [3002:2992] Du value for zero-correlation zone 11; unit is the resolution of IFFT. */
        uint64_t reserved_3003_3007    : 5;
#endif /* Word 46 - End */
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 47 - Big Endian */
        uint64_t reserved_3067_3071    : 5;
        uint64_t du_15                 : 11; /**< [3066:3056] Du value for zero-correlation zone 15; unit is the resolution of IFFT. */
        uint64_t reserved_3051_3055    : 5;
        uint64_t du_14                 : 11; /**< [3050:3040] Du value for zero-correlation zone 14; unit is the resolution of IFFT. */
        uint64_t reserved_3035_3039    : 5;
        uint64_t du_13                 : 11; /**< [3034:3024] Du value for zero-correlation zone 13; unit is the resolution of IFFT. */
        uint64_t reserved_3019_3023    : 5;
        uint64_t du_12                 : 11; /**< [3018:3008] Du value for zero-correlation zone 12; unit is the resolution of IFFT. */
#else /* Word 47 - Little Endian */
        uint64_t du_12                 : 11; /**< [3018:3008] Du value for zero-correlation zone 12; unit is the resolution of IFFT. */
        uint64_t reserved_3019_3023    : 5;
        uint64_t du_13                 : 11; /**< [3034:3024] Du value for zero-correlation zone 13; unit is the resolution of IFFT. */
        uint64_t reserved_3035_3039    : 5;
        uint64_t du_14                 : 11; /**< [3050:3040] Du value for zero-correlation zone 14; unit is the resolution of IFFT. */
        uint64_t reserved_3051_3055    : 5;
        uint64_t du_15                 : 11; /**< [3066:3056] Du value for zero-correlation zone 15; unit is the resolution of IFFT. */
        uint64_t reserved_3067_3071    : 5;
#endif /* Word 47 - End */
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 48 - Big Endian */
        uint64_t reserved_3131_3135    : 5;
        uint64_t du_19                 : 11; /**< [3130:3120] Du value for zero-correlation zone 19; unit is the resolution of IFFT. */
        uint64_t reserved_3115_3119    : 5;
        uint64_t du_18                 : 11; /**< [3114:3104] Du value for zero-correlation zone 18; unit is the resolution of IFFT. */
        uint64_t reserved_3099_3103    : 5;
        uint64_t du_17                 : 11; /**< [3098:3088] Du value for zero-correlation zone 17; unit is the resolution of IFFT. */
        uint64_t reserved_3083_3087    : 5;
        uint64_t du_16                 : 11; /**< [3082:3072] Du value for zero-correlation zone 16; unit is the resolution of IFFT. */
#else /* Word 48 - Little Endian */
        uint64_t du_16                 : 11; /**< [3082:3072] Du value for zero-correlation zone 16; unit is the resolution of IFFT. */
        uint64_t reserved_3083_3087    : 5;
        uint64_t du_17                 : 11; /**< [3098:3088] Du value for zero-correlation zone 17; unit is the resolution of IFFT. */
        uint64_t reserved_3099_3103    : 5;
        uint64_t du_18                 : 11; /**< [3114:3104] Du value for zero-correlation zone 18; unit is the resolution of IFFT. */
        uint64_t reserved_3115_3119    : 5;
        uint64_t du_19                 : 11; /**< [3130:3120] Du value for zero-correlation zone 19; unit is the resolution of IFFT. */
        uint64_t reserved_3131_3135    : 5;
#endif /* Word 48 - End */
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 49 - Big Endian */
        uint64_t reserved_3195_3199    : 5;
        uint64_t du_23                 : 11; /**< [3194:3184] Du value for zero-correlation zone 23; unit is the resolution of IFFT. */
        uint64_t reserved_3179_3183    : 5;
        uint64_t du_22                 : 11; /**< [3178:3168] Du value for zero-correlation zone 22; unit is the resolution of IFFT. */
        uint64_t reserved_3163_3167    : 5;
        uint64_t du_21                 : 11; /**< [3162:3152] Du value for zero-correlation zone 21; unit is the resolution of IFFT. */
        uint64_t reserved_3147_3151    : 5;
        uint64_t du_20                 : 11; /**< [3146:3136] Du value for zero-correlation zone 20; unit is the resolution of IFFT. */
#else /* Word 49 - Little Endian */
        uint64_t du_20                 : 11; /**< [3146:3136] Du value for zero-correlation zone 20; unit is the resolution of IFFT. */
        uint64_t reserved_3147_3151    : 5;
        uint64_t du_21                 : 11; /**< [3162:3152] Du value for zero-correlation zone 21; unit is the resolution of IFFT. */
        uint64_t reserved_3163_3167    : 5;
        uint64_t du_22                 : 11; /**< [3178:3168] Du value for zero-correlation zone 22; unit is the resolution of IFFT. */
        uint64_t reserved_3179_3183    : 5;
        uint64_t du_23                 : 11; /**< [3194:3184] Du value for zero-correlation zone 23; unit is the resolution of IFFT. */
        uint64_t reserved_3195_3199    : 5;
#endif /* Word 49 - End */
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 50 - Big Endian */
        uint64_t reserved_3259_3263    : 5;
        uint64_t du_27                 : 11; /**< [3258:3248] Du value for zero-correlation zone 27; unit is the resolution of IFFT. */
        uint64_t reserved_3243_3247    : 5;
        uint64_t du_26                 : 11; /**< [3242:3232] Du value for zero-correlation zone 26; unit is the resolution of IFFT. */
        uint64_t reserved_3227_3231    : 5;
        uint64_t du_25                 : 11; /**< [3226:3216] Du value for zero-correlation zone 25; unit is the resolution of IFFT. */
        uint64_t reserved_3211_3215    : 5;
        uint64_t du_24                 : 11; /**< [3210:3200] Du value for zero-correlation zone 24; unit is the resolution of IFFT. */
#else /* Word 50 - Little Endian */
        uint64_t du_24                 : 11; /**< [3210:3200] Du value for zero-correlation zone 24; unit is the resolution of IFFT. */
        uint64_t reserved_3211_3215    : 5;
        uint64_t du_25                 : 11; /**< [3226:3216] Du value for zero-correlation zone 25; unit is the resolution of IFFT. */
        uint64_t reserved_3227_3231    : 5;
        uint64_t du_26                 : 11; /**< [3242:3232] Du value for zero-correlation zone 26; unit is the resolution of IFFT. */
        uint64_t reserved_3243_3247    : 5;
        uint64_t du_27                 : 11; /**< [3258:3248] Du value for zero-correlation zone 27; unit is the resolution of IFFT. */
        uint64_t reserved_3259_3263    : 5;
#endif /* Word 50 - End */
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 51 - Big Endian */
        uint64_t reserved_3323_3327    : 5;
        uint64_t du_31                 : 11; /**< [3322:3312] Du value for zero-correlation zone 31; unit is the resolution of IFFT. */
        uint64_t reserved_3307_3311    : 5;
        uint64_t du_30                 : 11; /**< [3306:3296] Du value for zero-correlation zone 30; unit is the resolution of IFFT. */
        uint64_t reserved_3291_3295    : 5;
        uint64_t du_29                 : 11; /**< [3290:3280] Du value for zero-correlation zone 29; unit is the resolution of IFFT. */
        uint64_t reserved_3275_3279    : 5;
        uint64_t du_28                 : 11; /**< [3274:3264] Du value for zero-correlation zone 28; unit is the resolution of IFFT. */
#else /* Word 51 - Little Endian */
        uint64_t du_28                 : 11; /**< [3274:3264] Du value for zero-correlation zone 28; unit is the resolution of IFFT. */
        uint64_t reserved_3275_3279    : 5;
        uint64_t du_29                 : 11; /**< [3290:3280] Du value for zero-correlation zone 29; unit is the resolution of IFFT. */
        uint64_t reserved_3291_3295    : 5;
        uint64_t du_30                 : 11; /**< [3306:3296] Du value for zero-correlation zone 30; unit is the resolution of IFFT. */
        uint64_t reserved_3307_3311    : 5;
        uint64_t du_31                 : 11; /**< [3322:3312] Du value for zero-correlation zone 31; unit is the resolution of IFFT. */
        uint64_t reserved_3323_3327    : 5;
#endif /* Word 51 - End */
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 52 - Big Endian */
        uint64_t reserved_3387_3391    : 5;
        uint64_t du_35                 : 11; /**< [3386:3376] Du value for zero-correlation zone 35; unit is the resolution of IFFT. */
        uint64_t reserved_3371_3375    : 5;
        uint64_t du_34                 : 11; /**< [3370:3360] Du value for zero-correlation zone 34; unit is the resolution of IFFT. */
        uint64_t reserved_3355_3359    : 5;
        uint64_t du_33                 : 11; /**< [3354:3344] Du value for zero-correlation zone 33; unit is the resolution of IFFT. */
        uint64_t reserved_3339_3343    : 5;
        uint64_t du_32                 : 11; /**< [3338:3328] Du value for zero-correlation zone 32; unit is the resolution of IFFT. */
#else /* Word 52 - Little Endian */
        uint64_t du_32                 : 11; /**< [3338:3328] Du value for zero-correlation zone 32; unit is the resolution of IFFT. */
        uint64_t reserved_3339_3343    : 5;
        uint64_t du_33                 : 11; /**< [3354:3344] Du value for zero-correlation zone 33; unit is the resolution of IFFT. */
        uint64_t reserved_3355_3359    : 5;
        uint64_t du_34                 : 11; /**< [3370:3360] Du value for zero-correlation zone 34; unit is the resolution of IFFT. */
        uint64_t reserved_3371_3375    : 5;
        uint64_t du_35                 : 11; /**< [3386:3376] Du value for zero-correlation zone 35; unit is the resolution of IFFT. */
        uint64_t reserved_3387_3391    : 5;
#endif /* Word 52 - End */
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 53 - Big Endian */
        uint64_t reserved_3451_3455    : 5;
        uint64_t du_39                 : 11; /**< [3450:3440] Du value for zero-correlation zone 39; unit is the resolution of IFFT. */
        uint64_t reserved_3435_3439    : 5;
        uint64_t du_38                 : 11; /**< [3434:3424] Du value for zero-correlation zone 38; unit is the resolution of IFFT. */
        uint64_t reserved_3419_3423    : 5;
        uint64_t du_37                 : 11; /**< [3418:3408] Du value for zero-correlation zone 37; unit is the resolution of IFFT. */
        uint64_t reserved_3403_3407    : 5;
        uint64_t du_36                 : 11; /**< [3402:3392] Du value for zero-correlation zone 36; unit is the resolution of IFFT. */
#else /* Word 53 - Little Endian */
        uint64_t du_36                 : 11; /**< [3402:3392] Du value for zero-correlation zone 36; unit is the resolution of IFFT. */
        uint64_t reserved_3403_3407    : 5;
        uint64_t du_37                 : 11; /**< [3418:3408] Du value for zero-correlation zone 37; unit is the resolution of IFFT. */
        uint64_t reserved_3419_3423    : 5;
        uint64_t du_38                 : 11; /**< [3434:3424] Du value for zero-correlation zone 38; unit is the resolution of IFFT. */
        uint64_t reserved_3435_3439    : 5;
        uint64_t du_39                 : 11; /**< [3450:3440] Du value for zero-correlation zone 39; unit is the resolution of IFFT. */
        uint64_t reserved_3451_3455    : 5;
#endif /* Word 53 - End */
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 54 - Big Endian */
        uint64_t reserved_3515_3519    : 5;
        uint64_t du_43                 : 11; /**< [3514:3504] Du value for zero-correlation zone 43; unit is the resolution of IFFT. */
        uint64_t reserved_3499_3503    : 5;
        uint64_t du_42                 : 11; /**< [3498:3488] Du value for zero-correlation zone 42; unit is the resolution of IFFT. */
        uint64_t reserved_3483_3487    : 5;
        uint64_t du_41                 : 11; /**< [3482:3472] Du value for zero-correlation zone 41; unit is the resolution of IFFT. */
        uint64_t reserved_3467_3471    : 5;
        uint64_t du_40                 : 11; /**< [3466:3456] Du value for zero-correlation zone 40; unit is the resolution of IFFT. */
#else /* Word 54 - Little Endian */
        uint64_t du_40                 : 11; /**< [3466:3456] Du value for zero-correlation zone 40; unit is the resolution of IFFT. */
        uint64_t reserved_3467_3471    : 5;
        uint64_t du_41                 : 11; /**< [3482:3472] Du value for zero-correlation zone 41; unit is the resolution of IFFT. */
        uint64_t reserved_3483_3487    : 5;
        uint64_t du_42                 : 11; /**< [3498:3488] Du value for zero-correlation zone 42; unit is the resolution of IFFT. */
        uint64_t reserved_3499_3503    : 5;
        uint64_t du_43                 : 11; /**< [3514:3504] Du value for zero-correlation zone 43; unit is the resolution of IFFT. */
        uint64_t reserved_3515_3519    : 5;
#endif /* Word 54 - End */
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 55 - Big Endian */
        uint64_t reserved_3579_3583    : 5;
        uint64_t du_47                 : 11; /**< [3578:3568] Du value for zero-correlation zone 47; unit is the resolution of IFFT. */
        uint64_t reserved_3563_3567    : 5;
        uint64_t du_46                 : 11; /**< [3562:3552] Du value for zero-correlation zone 46; unit is the resolution of IFFT. */
        uint64_t reserved_3547_3551    : 5;
        uint64_t du_45                 : 11; /**< [3546:3536] Du value for zero-correlation zone 45; unit is the resolution of IFFT. */
        uint64_t reserved_3531_3535    : 5;
        uint64_t du_44                 : 11; /**< [3530:3520] Du value for zero-correlation zone 44; unit is the resolution of IFFT. */
#else /* Word 55 - Little Endian */
        uint64_t du_44                 : 11; /**< [3530:3520] Du value for zero-correlation zone 44; unit is the resolution of IFFT. */
        uint64_t reserved_3531_3535    : 5;
        uint64_t du_45                 : 11; /**< [3546:3536] Du value for zero-correlation zone 45; unit is the resolution of IFFT. */
        uint64_t reserved_3547_3551    : 5;
        uint64_t du_46                 : 11; /**< [3562:3552] Du value for zero-correlation zone 46; unit is the resolution of IFFT. */
        uint64_t reserved_3563_3567    : 5;
        uint64_t du_47                 : 11; /**< [3578:3568] Du value for zero-correlation zone 47; unit is the resolution of IFFT. */
        uint64_t reserved_3579_3583    : 5;
#endif /* Word 55 - End */
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 56 - Big Endian */
        uint64_t reserved_3643_3647    : 5;
        uint64_t du_51                 : 11; /**< [3642:3632] Du value for zero-correlation zone 51; unit is the resolution of IFFT. */
        uint64_t reserved_3627_3631    : 5;
        uint64_t du_50                 : 11; /**< [3626:3616] Du value for zero-correlation zone 50; unit is the resolution of IFFT. */
        uint64_t reserved_3611_3615    : 5;
        uint64_t du_49                 : 11; /**< [3610:3600] Du value for zero-correlation zone 49; unit is the resolution of IFFT. */
        uint64_t reserved_3595_3599    : 5;
        uint64_t du_48                 : 11; /**< [3594:3584] Du value for zero-correlation zone 48; unit is the resolution of IFFT. */
#else /* Word 56 - Little Endian */
        uint64_t du_48                 : 11; /**< [3594:3584] Du value for zero-correlation zone 48; unit is the resolution of IFFT. */
        uint64_t reserved_3595_3599    : 5;
        uint64_t du_49                 : 11; /**< [3610:3600] Du value for zero-correlation zone 49; unit is the resolution of IFFT. */
        uint64_t reserved_3611_3615    : 5;
        uint64_t du_50                 : 11; /**< [3626:3616] Du value for zero-correlation zone 50; unit is the resolution of IFFT. */
        uint64_t reserved_3627_3631    : 5;
        uint64_t du_51                 : 11; /**< [3642:3632] Du value for zero-correlation zone 51; unit is the resolution of IFFT. */
        uint64_t reserved_3643_3647    : 5;
#endif /* Word 56 - End */
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 57 - Big Endian */
        uint64_t reserved_3707_3711    : 5;
        uint64_t du_55                 : 11; /**< [3706:3696] Du value for zero-correlation zone 55; unit is the resolution of IFFT. */
        uint64_t reserved_3691_3695    : 5;
        uint64_t du_54                 : 11; /**< [3690:3680] Du value for zero-correlation zone 54; unit is the resolution of IFFT. */
        uint64_t reserved_3675_3679    : 5;
        uint64_t du_53                 : 11; /**< [3674:3664] Du value for zero-correlation zone 53; unit is the resolution of IFFT. */
        uint64_t reserved_3659_3663    : 5;
        uint64_t du_52                 : 11; /**< [3658:3648] Du value for zero-correlation zone 52; unit is the resolution of IFFT. */
#else /* Word 57 - Little Endian */
        uint64_t du_52                 : 11; /**< [3658:3648] Du value for zero-correlation zone 52; unit is the resolution of IFFT. */
        uint64_t reserved_3659_3663    : 5;
        uint64_t du_53                 : 11; /**< [3674:3664] Du value for zero-correlation zone 53; unit is the resolution of IFFT. */
        uint64_t reserved_3675_3679    : 5;
        uint64_t du_54                 : 11; /**< [3690:3680] Du value for zero-correlation zone 54; unit is the resolution of IFFT. */
        uint64_t reserved_3691_3695    : 5;
        uint64_t du_55                 : 11; /**< [3706:3696] Du value for zero-correlation zone 55; unit is the resolution of IFFT. */
        uint64_t reserved_3707_3711    : 5;
#endif /* Word 57 - End */
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 58 - Big Endian */
        uint64_t reserved_3771_3775    : 5;
        uint64_t du_59                 : 11; /**< [3770:3760] Du value for zero-correlation zone 59; unit is the resolution of IFFT. */
        uint64_t reserved_3755_3759    : 5;
        uint64_t du_58                 : 11; /**< [3754:3744] Du value for zero-correlation zone 58; unit is the resolution of IFFT. */
        uint64_t reserved_3739_3743    : 5;
        uint64_t du_57                 : 11; /**< [3738:3728] Du value for zero-correlation zone 57; unit is the resolution of IFFT. */
        uint64_t reserved_3723_3727    : 5;
        uint64_t du_56                 : 11; /**< [3722:3712] Du value for zero-correlation zone 56; unit is the resolution of IFFT. */
#else /* Word 58 - Little Endian */
        uint64_t du_56                 : 11; /**< [3722:3712] Du value for zero-correlation zone 56; unit is the resolution of IFFT. */
        uint64_t reserved_3723_3727    : 5;
        uint64_t du_57                 : 11; /**< [3738:3728] Du value for zero-correlation zone 57; unit is the resolution of IFFT. */
        uint64_t reserved_3739_3743    : 5;
        uint64_t du_58                 : 11; /**< [3754:3744] Du value for zero-correlation zone 58; unit is the resolution of IFFT. */
        uint64_t reserved_3755_3759    : 5;
        uint64_t du_59                 : 11; /**< [3770:3760] Du value for zero-correlation zone 59; unit is the resolution of IFFT. */
        uint64_t reserved_3771_3775    : 5;
#endif /* Word 58 - End */
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 59 - Big Endian */
        uint64_t reserved_3835_3839    : 5;
        uint64_t du_63                 : 11; /**< [3834:3824] Du value for zero-correlation zone 63; unit is the resolution of IFFT. */
        uint64_t reserved_3819_3823    : 5;
        uint64_t du_62                 : 11; /**< [3818:3808] Du value for zero-correlation zone 62; unit is the resolution of IFFT. */
        uint64_t reserved_3803_3807    : 5;
        uint64_t du_61                 : 11; /**< [3802:3792] Du value for zero-correlation zone 61; unit is the resolution of IFFT. */
        uint64_t reserved_3787_3791    : 5;
        uint64_t du_60                 : 11; /**< [3786:3776] Du value for zero-correlation zone 60; unit is the resolution of IFFT. */
#else /* Word 59 - Little Endian */
        uint64_t du_60                 : 11; /**< [3786:3776] Du value for zero-correlation zone 60; unit is the resolution of IFFT. */
        uint64_t reserved_3787_3791    : 5;
        uint64_t du_61                 : 11; /**< [3802:3792] Du value for zero-correlation zone 61; unit is the resolution of IFFT. */
        uint64_t reserved_3803_3807    : 5;
        uint64_t du_62                 : 11; /**< [3818:3808] Du value for zero-correlation zone 62; unit is the resolution of IFFT. */
        uint64_t reserved_3819_3823    : 5;
        uint64_t du_63                 : 11; /**< [3834:3824] Du value for zero-correlation zone 63; unit is the resolution of IFFT. */
        uint64_t reserved_3835_3839    : 5;
#endif /* Word 59 - End */
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 60 - Big Endian */
        uint64_t reserved_3899_3903    : 5;
        uint64_t du2_3                 : 11; /**< [3898:3888] 2*Du value for zero-correlation zone 3; unit is the resolution of IFFT. */
        uint64_t reserved_3883_3887    : 5;
        uint64_t du2_2                 : 11; /**< [3882:3872] 2*Du value for zero-correlation zone 2; unit is the resolution of IFFT. */
        uint64_t reserved_3867_3871    : 5;
        uint64_t du2_1                 : 11; /**< [3866:3856] 2*Du value for zero-correlation zone 1; unit is the resolution of IFFT. */
        uint64_t reserved_3851_3855    : 5;
        uint64_t du2_0                 : 11; /**< [3850:3840] 2*Du value for zero-correlation zone 0; unit is the resolution of IFFT. */
#else /* Word 60 - Little Endian */
        uint64_t du2_0                 : 11; /**< [3850:3840] 2*Du value for zero-correlation zone 0; unit is the resolution of IFFT. */
        uint64_t reserved_3851_3855    : 5;
        uint64_t du2_1                 : 11; /**< [3866:3856] 2*Du value for zero-correlation zone 1; unit is the resolution of IFFT. */
        uint64_t reserved_3867_3871    : 5;
        uint64_t du2_2                 : 11; /**< [3882:3872] 2*Du value for zero-correlation zone 2; unit is the resolution of IFFT. */
        uint64_t reserved_3883_3887    : 5;
        uint64_t du2_3                 : 11; /**< [3898:3888] 2*Du value for zero-correlation zone 3; unit is the resolution of IFFT. */
        uint64_t reserved_3899_3903    : 5;
#endif /* Word 60 - End */
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 61 - Big Endian */
        uint64_t reserved_3963_3967    : 5;
        uint64_t du2_7                 : 11; /**< [3962:3952] 2*Du value for zero-correlation zone 7; unit is the resolution of IFFT. */
        uint64_t reserved_3947_3951    : 5;
        uint64_t du2_6                 : 11; /**< [3946:3936] 2*Du value for zero-correlation zone 6; unit is the resolution of IFFT. */
        uint64_t reserved_3931_3935    : 5;
        uint64_t du2_5                 : 11; /**< [3930:3920] 2*Du value for zero-correlation zone 5; unit is the resolution of IFFT. */
        uint64_t reserved_3915_3919    : 5;
        uint64_t du2_4                 : 11; /**< [3914:3904] 2*Du value for zero-correlation zone 4; unit is the resolution of IFFT. */
#else /* Word 61 - Little Endian */
        uint64_t du2_4                 : 11; /**< [3914:3904] 2*Du value for zero-correlation zone 4; unit is the resolution of IFFT. */
        uint64_t reserved_3915_3919    : 5;
        uint64_t du2_5                 : 11; /**< [3930:3920] 2*Du value for zero-correlation zone 5; unit is the resolution of IFFT. */
        uint64_t reserved_3931_3935    : 5;
        uint64_t du2_6                 : 11; /**< [3946:3936] 2*Du value for zero-correlation zone 6; unit is the resolution of IFFT. */
        uint64_t reserved_3947_3951    : 5;
        uint64_t du2_7                 : 11; /**< [3962:3952] 2*Du value for zero-correlation zone 7; unit is the resolution of IFFT. */
        uint64_t reserved_3963_3967    : 5;
#endif /* Word 61 - End */
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 62 - Big Endian */
        uint64_t reserved_4027_4031    : 5;
        uint64_t du2_11                : 11; /**< [4026:4016] 2*Du value for zero-correlation zone 11; unit is the resolution of IFFT. */
        uint64_t reserved_4011_4015    : 5;
        uint64_t du2_10                : 11; /**< [4010:4000] 2*Du value for zero-correlation zone 10; unit is the resolution of IFFT. */
        uint64_t reserved_3995_3999    : 5;
        uint64_t du2_9                 : 11; /**< [3994:3984] 2*Du value for zero-correlation zone 9; unit is the resolution of IFFT. */
        uint64_t reserved_3979_3983    : 5;
        uint64_t du2_8                 : 11; /**< [3978:3968] 2*Du value for zero-correlation zone 8; unit is the resolution of IFFT. */
#else /* Word 62 - Little Endian */
        uint64_t du2_8                 : 11; /**< [3978:3968] 2*Du value for zero-correlation zone 8; unit is the resolution of IFFT. */
        uint64_t reserved_3979_3983    : 5;
        uint64_t du2_9                 : 11; /**< [3994:3984] 2*Du value for zero-correlation zone 9; unit is the resolution of IFFT. */
        uint64_t reserved_3995_3999    : 5;
        uint64_t du2_10                : 11; /**< [4010:4000] 2*Du value for zero-correlation zone 10; unit is the resolution of IFFT. */
        uint64_t reserved_4011_4015    : 5;
        uint64_t du2_11                : 11; /**< [4026:4016] 2*Du value for zero-correlation zone 11; unit is the resolution of IFFT. */
        uint64_t reserved_4027_4031    : 5;
#endif /* Word 62 - End */
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 63 - Big Endian */
        uint64_t reserved_4091_4095    : 5;
        uint64_t du2_15                : 11; /**< [4090:4080] 2*Du value for zero-correlation zone 15; unit is the resolution of IFFT. */
        uint64_t reserved_4075_4079    : 5;
        uint64_t du2_14                : 11; /**< [4074:4064] 2*Du value for zero-correlation zone 14; unit is the resolution of IFFT. */
        uint64_t reserved_4059_4063    : 5;
        uint64_t du2_13                : 11; /**< [4058:4048] 2*Du value for zero-correlation zone 13; unit is the resolution of IFFT. */
        uint64_t reserved_4043_4047    : 5;
        uint64_t du2_12                : 11; /**< [4042:4032] 2*Du value for zero-correlation zone 12; unit is the resolution of IFFT. */
#else /* Word 63 - Little Endian */
        uint64_t du2_12                : 11; /**< [4042:4032] 2*Du value for zero-correlation zone 12; unit is the resolution of IFFT. */
        uint64_t reserved_4043_4047    : 5;
        uint64_t du2_13                : 11; /**< [4058:4048] 2*Du value for zero-correlation zone 13; unit is the resolution of IFFT. */
        uint64_t reserved_4059_4063    : 5;
        uint64_t du2_14                : 11; /**< [4074:4064] 2*Du value for zero-correlation zone 14; unit is the resolution of IFFT. */
        uint64_t reserved_4075_4079    : 5;
        uint64_t du2_15                : 11; /**< [4090:4080] 2*Du value for zero-correlation zone 15; unit is the resolution of IFFT. */
        uint64_t reserved_4091_4095    : 5;
#endif /* Word 63 - End */
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 64 - Big Endian */
        uint64_t reserved_4155_4159    : 5;
        uint64_t du2_19                : 11; /**< [4154:4144] 2*Du value for zero-correlation zone 19; unit is the resolution of IFFT. */
        uint64_t reserved_4139_4143    : 5;
        uint64_t du2_18                : 11; /**< [4138:4128] 2*Du value for zero-correlation zone 18; unit is the resolution of IFFT. */
        uint64_t reserved_4123_4127    : 5;
        uint64_t du2_17                : 11; /**< [4122:4112] 2*Du value for zero-correlation zone 17; unit is the resolution of IFFT. */
        uint64_t reserved_4107_4111    : 5;
        uint64_t du2_16                : 11; /**< [4106:4096] 2*Du value for zero-correlation zone 16; unit is the resolution of IFFT. */
#else /* Word 64 - Little Endian */
        uint64_t du2_16                : 11; /**< [4106:4096] 2*Du value for zero-correlation zone 16; unit is the resolution of IFFT. */
        uint64_t reserved_4107_4111    : 5;
        uint64_t du2_17                : 11; /**< [4122:4112] 2*Du value for zero-correlation zone 17; unit is the resolution of IFFT. */
        uint64_t reserved_4123_4127    : 5;
        uint64_t du2_18                : 11; /**< [4138:4128] 2*Du value for zero-correlation zone 18; unit is the resolution of IFFT. */
        uint64_t reserved_4139_4143    : 5;
        uint64_t du2_19                : 11; /**< [4154:4144] 2*Du value for zero-correlation zone 19; unit is the resolution of IFFT. */
        uint64_t reserved_4155_4159    : 5;
#endif /* Word 64 - End */
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 65 - Big Endian */
        uint64_t reserved_4219_4223    : 5;
        uint64_t du2_23                : 11; /**< [4218:4208] 2*Du value for zero-correlation zone 23; unit is the resolution of IFFT. */
        uint64_t reserved_4203_4207    : 5;
        uint64_t du2_22                : 11; /**< [4202:4192] 2*Du value for zero-correlation zone 22; unit is the resolution of IFFT. */
        uint64_t reserved_4187_4191    : 5;
        uint64_t du2_21                : 11; /**< [4186:4176] 2*Du value for zero-correlation zone 21; unit is the resolution of IFFT. */
        uint64_t reserved_4171_4175    : 5;
        uint64_t du2_20                : 11; /**< [4170:4160] 2*Du value for zero-correlation zone 20; unit is the resolution of IFFT. */
#else /* Word 65 - Little Endian */
        uint64_t du2_20                : 11; /**< [4170:4160] 2*Du value for zero-correlation zone 20; unit is the resolution of IFFT. */
        uint64_t reserved_4171_4175    : 5;
        uint64_t du2_21                : 11; /**< [4186:4176] 2*Du value for zero-correlation zone 21; unit is the resolution of IFFT. */
        uint64_t reserved_4187_4191    : 5;
        uint64_t du2_22                : 11; /**< [4202:4192] 2*Du value for zero-correlation zone 22; unit is the resolution of IFFT. */
        uint64_t reserved_4203_4207    : 5;
        uint64_t du2_23                : 11; /**< [4218:4208] 2*Du value for zero-correlation zone 23; unit is the resolution of IFFT. */
        uint64_t reserved_4219_4223    : 5;
#endif /* Word 65 - End */
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 66 - Big Endian */
        uint64_t reserved_4283_4287    : 5;
        uint64_t du2_27                : 11; /**< [4282:4272] 2*Du value for zero-correlation zone 27; unit is the resolution of IFFT. */
        uint64_t reserved_4267_4271    : 5;
        uint64_t du2_26                : 11; /**< [4266:4256] 2*Du value for zero-correlation zone 26; unit is the resolution of IFFT. */
        uint64_t reserved_4251_4255    : 5;
        uint64_t du2_25                : 11; /**< [4250:4240] 2*Du value for zero-correlation zone 25; unit is the resolution of IFFT. */
        uint64_t reserved_4235_4239    : 5;
        uint64_t du2_24                : 11; /**< [4234:4224] 2*Du value for zero-correlation zone 24; unit is the resolution of IFFT. */
#else /* Word 66 - Little Endian */
        uint64_t du2_24                : 11; /**< [4234:4224] 2*Du value for zero-correlation zone 24; unit is the resolution of IFFT. */
        uint64_t reserved_4235_4239    : 5;
        uint64_t du2_25                : 11; /**< [4250:4240] 2*Du value for zero-correlation zone 25; unit is the resolution of IFFT. */
        uint64_t reserved_4251_4255    : 5;
        uint64_t du2_26                : 11; /**< [4266:4256] 2*Du value for zero-correlation zone 26; unit is the resolution of IFFT. */
        uint64_t reserved_4267_4271    : 5;
        uint64_t du2_27                : 11; /**< [4282:4272] 2*Du value for zero-correlation zone 27; unit is the resolution of IFFT. */
        uint64_t reserved_4283_4287    : 5;
#endif /* Word 66 - End */
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 67 - Big Endian */
        uint64_t reserved_4347_4351    : 5;
        uint64_t du2_31                : 11; /**< [4346:4336] 2*Du value for zero-correlation zone 31; unit is the resolution of IFFT. */
        uint64_t reserved_4331_4335    : 5;
        uint64_t du2_30                : 11; /**< [4330:4320] 2*Du value for zero-correlation zone 30; unit is the resolution of IFFT. */
        uint64_t reserved_4315_4319    : 5;
        uint64_t du2_29                : 11; /**< [4314:4304] 2*Du value for zero-correlation zone 29; unit is the resolution of IFFT. */
        uint64_t reserved_4299_4303    : 5;
        uint64_t du2_28                : 11; /**< [4298:4288] 2*Du value for zero-correlation zone 28; unit is the resolution of IFFT. */
#else /* Word 67 - Little Endian */
        uint64_t du2_28                : 11; /**< [4298:4288] 2*Du value for zero-correlation zone 28; unit is the resolution of IFFT. */
        uint64_t reserved_4299_4303    : 5;
        uint64_t du2_29                : 11; /**< [4314:4304] 2*Du value for zero-correlation zone 29; unit is the resolution of IFFT. */
        uint64_t reserved_4315_4319    : 5;
        uint64_t du2_30                : 11; /**< [4330:4320] 2*Du value for zero-correlation zone 30; unit is the resolution of IFFT. */
        uint64_t reserved_4331_4335    : 5;
        uint64_t du2_31                : 11; /**< [4346:4336] 2*Du value for zero-correlation zone 31; unit is the resolution of IFFT. */
        uint64_t reserved_4347_4351    : 5;
#endif /* Word 67 - End */
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 68 - Big Endian */
        uint64_t reserved_4411_4415    : 5;
        uint64_t du2_35                : 11; /**< [4410:4400] 2*Du value for zero-correlation zone 35; unit is the resolution of IFFT. */
        uint64_t reserved_4395_4399    : 5;
        uint64_t du2_34                : 11; /**< [4394:4384] 2*Du value for zero-correlation zone 34; unit is the resolution of IFFT. */
        uint64_t reserved_4379_4383    : 5;
        uint64_t du2_33                : 11; /**< [4378:4368] 2*Du value for zero-correlation zone 33; unit is the resolution of IFFT. */
        uint64_t reserved_4363_4367    : 5;
        uint64_t du2_32                : 11; /**< [4362:4352] 2*Du value for zero-correlation zone 32; unit is the resolution of IFFT. */
#else /* Word 68 - Little Endian */
        uint64_t du2_32                : 11; /**< [4362:4352] 2*Du value for zero-correlation zone 32; unit is the resolution of IFFT. */
        uint64_t reserved_4363_4367    : 5;
        uint64_t du2_33                : 11; /**< [4378:4368] 2*Du value for zero-correlation zone 33; unit is the resolution of IFFT. */
        uint64_t reserved_4379_4383    : 5;
        uint64_t du2_34                : 11; /**< [4394:4384] 2*Du value for zero-correlation zone 34; unit is the resolution of IFFT. */
        uint64_t reserved_4395_4399    : 5;
        uint64_t du2_35                : 11; /**< [4410:4400] 2*Du value for zero-correlation zone 35; unit is the resolution of IFFT. */
        uint64_t reserved_4411_4415    : 5;
#endif /* Word 68 - End */
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 69 - Big Endian */
        uint64_t reserved_4475_4479    : 5;
        uint64_t du2_39                : 11; /**< [4474:4464] 2*Du value for zero-correlation zone 39; unit is the resolution of IFFT. */
        uint64_t reserved_4459_4463    : 5;
        uint64_t du2_38                : 11; /**< [4458:4448] 2*Du value for zero-correlation zone 38; unit is the resolution of IFFT. */
        uint64_t reserved_4443_4447    : 5;
        uint64_t du2_37                : 11; /**< [4442:4432] 2*Du value for zero-correlation zone 37; unit is the resolution of IFFT. */
        uint64_t reserved_4427_4431    : 5;
        uint64_t du2_36                : 11; /**< [4426:4416] 2*Du value for zero-correlation zone 36; unit is the resolution of IFFT. */
#else /* Word 69 - Little Endian */
        uint64_t du2_36                : 11; /**< [4426:4416] 2*Du value for zero-correlation zone 36; unit is the resolution of IFFT. */
        uint64_t reserved_4427_4431    : 5;
        uint64_t du2_37                : 11; /**< [4442:4432] 2*Du value for zero-correlation zone 37; unit is the resolution of IFFT. */
        uint64_t reserved_4443_4447    : 5;
        uint64_t du2_38                : 11; /**< [4458:4448] 2*Du value for zero-correlation zone 38; unit is the resolution of IFFT. */
        uint64_t reserved_4459_4463    : 5;
        uint64_t du2_39                : 11; /**< [4474:4464] 2*Du value for zero-correlation zone 39; unit is the resolution of IFFT. */
        uint64_t reserved_4475_4479    : 5;
#endif /* Word 69 - End */
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 70 - Big Endian */
        uint64_t reserved_4539_4543    : 5;
        uint64_t du2_43                : 11; /**< [4538:4528] 2*Du value for zero-correlation zone 43; unit is the resolution of IFFT. */
        uint64_t reserved_4523_4527    : 5;
        uint64_t du2_42                : 11; /**< [4522:4512] 2*Du value for zero-correlation zone 42; unit is the resolution of IFFT. */
        uint64_t reserved_4507_4511    : 5;
        uint64_t du2_41                : 11; /**< [4506:4496] 2*Du value for zero-correlation zone 41; unit is the resolution of IFFT. */
        uint64_t reserved_4491_4495    : 5;
        uint64_t du2_40                : 11; /**< [4490:4480] 2*Du value for zero-correlation zone 40; unit is the resolution of IFFT. */
#else /* Word 70 - Little Endian */
        uint64_t du2_40                : 11; /**< [4490:4480] 2*Du value for zero-correlation zone 40; unit is the resolution of IFFT. */
        uint64_t reserved_4491_4495    : 5;
        uint64_t du2_41                : 11; /**< [4506:4496] 2*Du value for zero-correlation zone 41; unit is the resolution of IFFT. */
        uint64_t reserved_4507_4511    : 5;
        uint64_t du2_42                : 11; /**< [4522:4512] 2*Du value for zero-correlation zone 42; unit is the resolution of IFFT. */
        uint64_t reserved_4523_4527    : 5;
        uint64_t du2_43                : 11; /**< [4538:4528] 2*Du value for zero-correlation zone 43; unit is the resolution of IFFT. */
        uint64_t reserved_4539_4543    : 5;
#endif /* Word 70 - End */
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 71 - Big Endian */
        uint64_t reserved_4603_4607    : 5;
        uint64_t du2_47                : 11; /**< [4602:4592] 2*Du value for zero-correlation zone 47; unit is the resolution of IFFT. */
        uint64_t reserved_4587_4591    : 5;
        uint64_t du2_46                : 11; /**< [4586:4576] 2*Du value for zero-correlation zone 46; unit is the resolution of IFFT. */
        uint64_t reserved_4571_4575    : 5;
        uint64_t du2_45                : 11; /**< [4570:4560] 2*Du value for zero-correlation zone 45; unit is the resolution of IFFT. */
        uint64_t reserved_4555_4559    : 5;
        uint64_t du2_44                : 11; /**< [4554:4544] 2*Du value for zero-correlation zone 44; unit is the resolution of IFFT. */
#else /* Word 71 - Little Endian */
        uint64_t du2_44                : 11; /**< [4554:4544] 2*Du value for zero-correlation zone 44; unit is the resolution of IFFT. */
        uint64_t reserved_4555_4559    : 5;
        uint64_t du2_45                : 11; /**< [4570:4560] 2*Du value for zero-correlation zone 45; unit is the resolution of IFFT. */
        uint64_t reserved_4571_4575    : 5;
        uint64_t du2_46                : 11; /**< [4586:4576] 2*Du value for zero-correlation zone 46; unit is the resolution of IFFT. */
        uint64_t reserved_4587_4591    : 5;
        uint64_t du2_47                : 11; /**< [4602:4592] 2*Du value for zero-correlation zone 47; unit is the resolution of IFFT. */
        uint64_t reserved_4603_4607    : 5;
#endif /* Word 71 - End */
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 72 - Big Endian */
        uint64_t reserved_4667_4671    : 5;
        uint64_t du2_51                : 11; /**< [4666:4656] 2*Du value for zero-correlation zone 51; unit is the resolution of IFFT. */
        uint64_t reserved_4651_4655    : 5;
        uint64_t du2_50                : 11; /**< [4650:4640] 2*Du value for zero-correlation zone 50; unit is the resolution of IFFT. */
        uint64_t reserved_4635_4639    : 5;
        uint64_t du2_49                : 11; /**< [4634:4624] 2*Du value for zero-correlation zone 49; unit is the resolution of IFFT. */
        uint64_t reserved_4619_4623    : 5;
        uint64_t du2_48                : 11; /**< [4618:4608] 2*Du value for zero-correlation zone 48; unit is the resolution of IFFT. */
#else /* Word 72 - Little Endian */
        uint64_t du2_48                : 11; /**< [4618:4608] 2*Du value for zero-correlation zone 48; unit is the resolution of IFFT. */
        uint64_t reserved_4619_4623    : 5;
        uint64_t du2_49                : 11; /**< [4634:4624] 2*Du value for zero-correlation zone 49; unit is the resolution of IFFT. */
        uint64_t reserved_4635_4639    : 5;
        uint64_t du2_50                : 11; /**< [4650:4640] 2*Du value for zero-correlation zone 50; unit is the resolution of IFFT. */
        uint64_t reserved_4651_4655    : 5;
        uint64_t du2_51                : 11; /**< [4666:4656] 2*Du value for zero-correlation zone 51; unit is the resolution of IFFT. */
        uint64_t reserved_4667_4671    : 5;
#endif /* Word 72 - End */
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 73 - Big Endian */
        uint64_t reserved_4731_4735    : 5;
        uint64_t du2_55                : 11; /**< [4730:4720] 2*Du value for zero-correlation zone 55; unit is the resolution of IFFT. */
        uint64_t reserved_4715_4719    : 5;
        uint64_t du2_54                : 11; /**< [4714:4704] 2*Du value for zero-correlation zone 54; unit is the resolution of IFFT. */
        uint64_t reserved_4699_4703    : 5;
        uint64_t du2_53                : 11; /**< [4698:4688] 2*Du value for zero-correlation zone 53; unit is the resolution of IFFT. */
        uint64_t reserved_4683_4687    : 5;
        uint64_t du2_52                : 11; /**< [4682:4672] 2*Du value for zero-correlation zone 52; unit is the resolution of IFFT. */
#else /* Word 73 - Little Endian */
        uint64_t du2_52                : 11; /**< [4682:4672] 2*Du value for zero-correlation zone 52; unit is the resolution of IFFT. */
        uint64_t reserved_4683_4687    : 5;
        uint64_t du2_53                : 11; /**< [4698:4688] 2*Du value for zero-correlation zone 53; unit is the resolution of IFFT. */
        uint64_t reserved_4699_4703    : 5;
        uint64_t du2_54                : 11; /**< [4714:4704] 2*Du value for zero-correlation zone 54; unit is the resolution of IFFT. */
        uint64_t reserved_4715_4719    : 5;
        uint64_t du2_55                : 11; /**< [4730:4720] 2*Du value for zero-correlation zone 55; unit is the resolution of IFFT. */
        uint64_t reserved_4731_4735    : 5;
#endif /* Word 73 - End */
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 74 - Big Endian */
        uint64_t reserved_4795_4799    : 5;
        uint64_t du2_59                : 11; /**< [4794:4784] 2*Du value for zero-correlation zone 59; unit is the resolution of IFFT. */
        uint64_t reserved_4779_4783    : 5;
        uint64_t du2_58                : 11; /**< [4778:4768] 2*Du value for zero-correlation zone 58; unit is the resolution of IFFT. */
        uint64_t reserved_4763_4767    : 5;
        uint64_t du2_57                : 11; /**< [4762:4752] 2*Du value for zero-correlation zone 57; unit is the resolution of IFFT. */
        uint64_t reserved_4747_4751    : 5;
        uint64_t du2_56                : 11; /**< [4746:4736] 2*Du value for zero-correlation zone 56; unit is the resolution of IFFT. */
#else /* Word 74 - Little Endian */
        uint64_t du2_56                : 11; /**< [4746:4736] 2*Du value for zero-correlation zone 56; unit is the resolution of IFFT. */
        uint64_t reserved_4747_4751    : 5;
        uint64_t du2_57                : 11; /**< [4762:4752] 2*Du value for zero-correlation zone 57; unit is the resolution of IFFT. */
        uint64_t reserved_4763_4767    : 5;
        uint64_t du2_58                : 11; /**< [4778:4768] 2*Du value for zero-correlation zone 58; unit is the resolution of IFFT. */
        uint64_t reserved_4779_4783    : 5;
        uint64_t du2_59                : 11; /**< [4794:4784] 2*Du value for zero-correlation zone 59; unit is the resolution of IFFT. */
        uint64_t reserved_4795_4799    : 5;
#endif /* Word 74 - End */
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 75 - Big Endian */
        uint64_t reserved_4859_4863    : 5;
        uint64_t du2_63                : 11; /**< [4858:4848] 2*Du value for zero-correlation zone 63; unit is the resolution of IFFT. */
        uint64_t reserved_4843_4847    : 5;
        uint64_t du2_62                : 11; /**< [4842:4832] 2*Du value for zero-correlation zone 62; unit is the resolution of IFFT. */
        uint64_t reserved_4827_4831    : 5;
        uint64_t du2_61                : 11; /**< [4826:4816] 2*Du value for zero-correlation zone 61; unit is the resolution of IFFT. */
        uint64_t reserved_4811_4815    : 5;
        uint64_t du2_60                : 11; /**< [4810:4800] 2*Du value for zero-correlation zone 60; unit is the resolution of IFFT. */
#else /* Word 75 - Little Endian */
        uint64_t du2_60                : 11; /**< [4810:4800] 2*Du value for zero-correlation zone 60; unit is the resolution of IFFT. */
        uint64_t reserved_4811_4815    : 5;
        uint64_t du2_61                : 11; /**< [4826:4816] 2*Du value for zero-correlation zone 61; unit is the resolution of IFFT. */
        uint64_t reserved_4827_4831    : 5;
        uint64_t du2_62                : 11; /**< [4842:4832] 2*Du value for zero-correlation zone 62; unit is the resolution of IFFT. */
        uint64_t reserved_4843_4847    : 5;
        uint64_t du2_63                : 11; /**< [4858:4848] 2*Du value for zero-correlation zone 63; unit is the resolution of IFFT. */
        uint64_t reserved_4859_4863    : 5;
#endif /* Word 75 - End */
    } s;
    /* struct cavm_prch_job_cfg_s_s cn; */
};

/**
 * Register (RSL) prch#_ab#_control0
 *
 * PRCH Control0 Register
 * This register is used to start PRCH HAB processing.
 */
union cavm_prchx_abx_control0
{
    uint64_t u;
    struct cavm_prchx_abx_control0_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t jobid2                : 16; /**< [ 63: 48](R/W/H) Job ID2 */
        uint64_t jobid1                : 16; /**< [ 47: 32](R/W/H) Job ID1 */
        uint64_t jobid0                : 16; /**< [ 31: 16](R/W/H) Job ID0 */
        uint64_t reserved_3_15         : 13;
        uint64_t start2                : 1;  /**< [  2:  2](R/W/H) Write 1 to start processing the job in configuration slot 2. This bit auto-clears.
                                                                 Writes are ignored when the configuration slot is busy (PRCH(0)_AB(0..2)_STATUS[STATUS2] = 1). */
        uint64_t start1                : 1;  /**< [  1:  1](R/W/H) Write 1 to start processing the job in configuration slot 1. This bit auto-clears.
                                                                 Writes are ignored when the configuration slot is busy (PRCH(0)_AB(0..2)_STATUS[STATUS1] = 1). */
        uint64_t start0                : 1;  /**< [  0:  0](R/W/H) Write 1 to start processing the job in configuration slot 0. This bit auto-clears.
                                                                 Writes are ignored when the configuration slot is busy (PRCH(0)_AB(0..2)_STATUS[STATUS0] = 1). */
#else /* Word 0 - Little Endian */
        uint64_t start0                : 1;  /**< [  0:  0](R/W/H) Write 1 to start processing the job in configuration slot 0. This bit auto-clears.
                                                                 Writes are ignored when the configuration slot is busy (PRCH(0)_AB(0..2)_STATUS[STATUS0] = 1). */
        uint64_t start1                : 1;  /**< [  1:  1](R/W/H) Write 1 to start processing the job in configuration slot 1. This bit auto-clears.
                                                                 Writes are ignored when the configuration slot is busy (PRCH(0)_AB(0..2)_STATUS[STATUS1] = 1). */
        uint64_t start2                : 1;  /**< [  2:  2](R/W/H) Write 1 to start processing the job in configuration slot 2. This bit auto-clears.
                                                                 Writes are ignored when the configuration slot is busy (PRCH(0)_AB(0..2)_STATUS[STATUS2] = 1). */
        uint64_t reserved_3_15         : 13;
        uint64_t jobid0                : 16; /**< [ 31: 16](R/W/H) Job ID0 */
        uint64_t jobid1                : 16; /**< [ 47: 32](R/W/H) Job ID1 */
        uint64_t jobid2                : 16; /**< [ 63: 48](R/W/H) Job ID2 */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_prchx_abx_control0_s cn; */
};
typedef union cavm_prchx_abx_control0 cavm_prchx_abx_control0_t;

static inline uint64_t CAVM_PRCHX_ABX_CONTROL0(uint64_t a, uint64_t b) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_PRCHX_ABX_CONTROL0(uint64_t a, uint64_t b)
{
    if ((a==0) && (b<=2))
        return 0x87e042180000ll + 0ll * ((a) & 0x0) + 0x10000ll * ((b) & 0x3);
    __cavm_csr_fatal("PRCHX_ABX_CONTROL0", 2, a, b, 0, 0, 0, 0);
}

#define typedef_CAVM_PRCHX_ABX_CONTROL0(a,b) cavm_prchx_abx_control0_t
#define bustype_CAVM_PRCHX_ABX_CONTROL0(a,b) CSR_TYPE_RSL
#define basename_CAVM_PRCHX_ABX_CONTROL0(a,b) "PRCHX_ABX_CONTROL0"
#define busnum_CAVM_PRCHX_ABX_CONTROL0(a,b) (a)
#define arguments_CAVM_PRCHX_ABX_CONTROL0(a,b) (a),(b),-1,-1

/**
 * Register (RSL) prch#_ab#_eco
 *
 * INTERNAL: PRCH ECO Register
 */
union cavm_prchx_abx_eco
{
    uint64_t u;
    struct cavm_prchx_abx_eco_s
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
    /* struct cavm_prchx_abx_eco_s cn; */
};
typedef union cavm_prchx_abx_eco cavm_prchx_abx_eco_t;

static inline uint64_t CAVM_PRCHX_ABX_ECO(uint64_t a, uint64_t b) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_PRCHX_ABX_ECO(uint64_t a, uint64_t b)
{
    if ((a==0) && (b<=2))
        return 0x87e042180010ll + 0ll * ((a) & 0x0) + 0x10000ll * ((b) & 0x3);
    __cavm_csr_fatal("PRCHX_ABX_ECO", 2, a, b, 0, 0, 0, 0);
}

#define typedef_CAVM_PRCHX_ABX_ECO(a,b) cavm_prchx_abx_eco_t
#define bustype_CAVM_PRCHX_ABX_ECO(a,b) CSR_TYPE_RSL
#define basename_CAVM_PRCHX_ABX_ECO(a,b) "PRCHX_ABX_ECO"
#define busnum_CAVM_PRCHX_ABX_ECO(a,b) (a)
#define arguments_CAVM_PRCHX_ABX_ECO(a,b) (a),(b),-1,-1

/**
 * Register (RSL) prch#_ab#_error_enable0
 *
 * PRCH Error Enable 0 Register
 * This register enables error reporting for PRCH(0)_AB(0..2)_ERROR_SOURCE0 register.
 */
union cavm_prchx_abx_error_enable0
{
    uint64_t u;
    struct cavm_prchx_abx_error_enable0_s
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
    /* struct cavm_prchx_abx_error_enable0_s cn; */
};
typedef union cavm_prchx_abx_error_enable0 cavm_prchx_abx_error_enable0_t;

static inline uint64_t CAVM_PRCHX_ABX_ERROR_ENABLE0(uint64_t a, uint64_t b) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_PRCHX_ABX_ERROR_ENABLE0(uint64_t a, uint64_t b)
{
    if ((a==0) && (b<=2))
        return 0x87e042180040ll + 0ll * ((a) & 0x0) + 0x10000ll * ((b) & 0x3);
    __cavm_csr_fatal("PRCHX_ABX_ERROR_ENABLE0", 2, a, b, 0, 0, 0, 0);
}

#define typedef_CAVM_PRCHX_ABX_ERROR_ENABLE0(a,b) cavm_prchx_abx_error_enable0_t
#define bustype_CAVM_PRCHX_ABX_ERROR_ENABLE0(a,b) CSR_TYPE_RSL
#define basename_CAVM_PRCHX_ABX_ERROR_ENABLE0(a,b) "PRCHX_ABX_ERROR_ENABLE0"
#define busnum_CAVM_PRCHX_ABX_ERROR_ENABLE0(a,b) (a)
#define arguments_CAVM_PRCHX_ABX_ERROR_ENABLE0(a,b) (a),(b),-1,-1

/**
 * Register (RSL) prch#_ab#_error_source0
 *
 * PRCH Error Source 0 Register
 * This is register contains information about read port overflows and underflows.
 */
union cavm_prchx_abx_error_source0
{
    uint64_t u;
    struct cavm_prchx_abx_error_source0_s
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
    /* struct cavm_prchx_abx_error_source0_s cn; */
};
typedef union cavm_prchx_abx_error_source0 cavm_prchx_abx_error_source0_t;

static inline uint64_t CAVM_PRCHX_ABX_ERROR_SOURCE0(uint64_t a, uint64_t b) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_PRCHX_ABX_ERROR_SOURCE0(uint64_t a, uint64_t b)
{
    if ((a==0) && (b<=2))
        return 0x87e042180030ll + 0ll * ((a) & 0x0) + 0x10000ll * ((b) & 0x3);
    __cavm_csr_fatal("PRCHX_ABX_ERROR_SOURCE0", 2, a, b, 0, 0, 0, 0);
}

#define typedef_CAVM_PRCHX_ABX_ERROR_SOURCE0(a,b) cavm_prchx_abx_error_source0_t
#define bustype_CAVM_PRCHX_ABX_ERROR_SOURCE0(a,b) CSR_TYPE_RSL
#define basename_CAVM_PRCHX_ABX_ERROR_SOURCE0(a,b) "PRCHX_ABX_ERROR_SOURCE0"
#define busnum_CAVM_PRCHX_ABX_ERROR_SOURCE0(a,b) (a)
#define arguments_CAVM_PRCHX_ABX_ERROR_SOURCE0(a,b) (a),(b),-1,-1

/**
 * Register (RSL) prch#_ab#_hab_jcfg0_data#
 *
 * PRCH Job Configuration 0 Registers
 * This register range accesses the job configuration RAM for slot 0.
 */
union cavm_prchx_abx_hab_jcfg0_datax
{
    uint64_t u;
    struct cavm_prchx_abx_hab_jcfg0_datax_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t entry                 : 64; /**< [ 63:  0](R/W) PRCH Job Configuration for Job Slot 0. */
#else /* Word 0 - Little Endian */
        uint64_t entry                 : 64; /**< [ 63:  0](R/W) PRCH Job Configuration for Job Slot 0. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_prchx_abx_hab_jcfg0_datax_s cn; */
};
typedef union cavm_prchx_abx_hab_jcfg0_datax cavm_prchx_abx_hab_jcfg0_datax_t;

static inline uint64_t CAVM_PRCHX_ABX_HAB_JCFG0_DATAX(uint64_t a, uint64_t b, uint64_t c) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_PRCHX_ABX_HAB_JCFG0_DATAX(uint64_t a, uint64_t b, uint64_t c)
{
    if ((a==0) && (b<=2) && (c<=75))
        return 0x87e042182000ll + 0ll * ((a) & 0x0) + 0x10000ll * ((b) & 0x3) + 8ll * ((c) & 0x7f);
    __cavm_csr_fatal("PRCHX_ABX_HAB_JCFG0_DATAX", 3, a, b, c, 0, 0, 0);
}

#define typedef_CAVM_PRCHX_ABX_HAB_JCFG0_DATAX(a,b,c) cavm_prchx_abx_hab_jcfg0_datax_t
#define bustype_CAVM_PRCHX_ABX_HAB_JCFG0_DATAX(a,b,c) CSR_TYPE_RSL
#define basename_CAVM_PRCHX_ABX_HAB_JCFG0_DATAX(a,b,c) "PRCHX_ABX_HAB_JCFG0_DATAX"
#define busnum_CAVM_PRCHX_ABX_HAB_JCFG0_DATAX(a,b,c) (a)
#define arguments_CAVM_PRCHX_ABX_HAB_JCFG0_DATAX(a,b,c) (a),(b),(c),-1

/**
 * Register (RSL) prch#_ab#_hab_jcfg1_data#
 *
 * PRCH Job Configuration 1 Registers
 * This register range accesses the job configuration RAM for slot 1.
 */
union cavm_prchx_abx_hab_jcfg1_datax
{
    uint64_t u;
    struct cavm_prchx_abx_hab_jcfg1_datax_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t entry                 : 64; /**< [ 63:  0](R/W) PRCH Job Configuration for Job Slot 0. */
#else /* Word 0 - Little Endian */
        uint64_t entry                 : 64; /**< [ 63:  0](R/W) PRCH Job Configuration for Job Slot 0. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_prchx_abx_hab_jcfg1_datax_s cn; */
};
typedef union cavm_prchx_abx_hab_jcfg1_datax cavm_prchx_abx_hab_jcfg1_datax_t;

static inline uint64_t CAVM_PRCHX_ABX_HAB_JCFG1_DATAX(uint64_t a, uint64_t b, uint64_t c) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_PRCHX_ABX_HAB_JCFG1_DATAX(uint64_t a, uint64_t b, uint64_t c)
{
    if ((a==0) && (b<=2) && (c<=75))
        return 0x87e042184000ll + 0ll * ((a) & 0x0) + 0x10000ll * ((b) & 0x3) + 8ll * ((c) & 0x7f);
    __cavm_csr_fatal("PRCHX_ABX_HAB_JCFG1_DATAX", 3, a, b, c, 0, 0, 0);
}

#define typedef_CAVM_PRCHX_ABX_HAB_JCFG1_DATAX(a,b,c) cavm_prchx_abx_hab_jcfg1_datax_t
#define bustype_CAVM_PRCHX_ABX_HAB_JCFG1_DATAX(a,b,c) CSR_TYPE_RSL
#define basename_CAVM_PRCHX_ABX_HAB_JCFG1_DATAX(a,b,c) "PRCHX_ABX_HAB_JCFG1_DATAX"
#define busnum_CAVM_PRCHX_ABX_HAB_JCFG1_DATAX(a,b,c) (a)
#define arguments_CAVM_PRCHX_ABX_HAB_JCFG1_DATAX(a,b,c) (a),(b),(c),-1

/**
 * Register (RSL) prch#_ab#_hab_jcfg2_data#
 *
 * PRCH(0) Job Configuration 2 Registers
 * This register range accesses the job configuration RAM for slot 2.
 */
union cavm_prchx_abx_hab_jcfg2_datax
{
    uint64_t u;
    struct cavm_prchx_abx_hab_jcfg2_datax_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t entry                 : 64; /**< [ 63:  0](R/W) PRCH Job Configuration for Job Slot 2. */
#else /* Word 0 - Little Endian */
        uint64_t entry                 : 64; /**< [ 63:  0](R/W) PRCH Job Configuration for Job Slot 2. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_prchx_abx_hab_jcfg2_datax_s cn; */
};
typedef union cavm_prchx_abx_hab_jcfg2_datax cavm_prchx_abx_hab_jcfg2_datax_t;

static inline uint64_t CAVM_PRCHX_ABX_HAB_JCFG2_DATAX(uint64_t a, uint64_t b, uint64_t c) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_PRCHX_ABX_HAB_JCFG2_DATAX(uint64_t a, uint64_t b, uint64_t c)
{
    if ((a==0) && (b<=2) && (c<=75))
        return 0x87e042186000ll + 0ll * ((a) & 0x0) + 0x10000ll * ((b) & 0x3) + 8ll * ((c) & 0x7f);
    __cavm_csr_fatal("PRCHX_ABX_HAB_JCFG2_DATAX", 3, a, b, c, 0, 0, 0);
}

#define typedef_CAVM_PRCHX_ABX_HAB_JCFG2_DATAX(a,b,c) cavm_prchx_abx_hab_jcfg2_datax_t
#define bustype_CAVM_PRCHX_ABX_HAB_JCFG2_DATAX(a,b,c) CSR_TYPE_RSL
#define basename_CAVM_PRCHX_ABX_HAB_JCFG2_DATAX(a,b,c) "PRCHX_ABX_HAB_JCFG2_DATAX"
#define busnum_CAVM_PRCHX_ABX_HAB_JCFG2_DATAX(a,b,c) (a)
#define arguments_CAVM_PRCHX_ABX_HAB_JCFG2_DATAX(a,b,c) (a),(b),(c),-1

/**
 * Register (RSL) prch#_ab#_scratch
 *
 * INTERNAL: Scratch Register
 *
 * Scratch register.
 */
union cavm_prchx_abx_scratch
{
    uint64_t u;
    struct cavm_prchx_abx_scratch_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t data                  : 64; /**< [ 63:  0](R/W) Scratch data. */
#else /* Word 0 - Little Endian */
        uint64_t data                  : 64; /**< [ 63:  0](R/W) Scratch data. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_prchx_abx_scratch_s cn; */
};
typedef union cavm_prchx_abx_scratch cavm_prchx_abx_scratch_t;

static inline uint64_t CAVM_PRCHX_ABX_SCRATCH(uint64_t a, uint64_t b) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_PRCHX_ABX_SCRATCH(uint64_t a, uint64_t b)
{
    if ((a==0) && (b<=2))
        return 0x87e042180080ll + 0ll * ((a) & 0x0) + 0x10000ll * ((b) & 0x3);
    __cavm_csr_fatal("PRCHX_ABX_SCRATCH", 2, a, b, 0, 0, 0, 0);
}

#define typedef_CAVM_PRCHX_ABX_SCRATCH(a,b) cavm_prchx_abx_scratch_t
#define bustype_CAVM_PRCHX_ABX_SCRATCH(a,b) CSR_TYPE_RSL
#define basename_CAVM_PRCHX_ABX_SCRATCH(a,b) "PRCHX_ABX_SCRATCH"
#define busnum_CAVM_PRCHX_ABX_SCRATCH(a,b) (a)
#define arguments_CAVM_PRCHX_ABX_SCRATCH(a,b) (a),(b),-1,-1

/**
 * Register (RSL) prch#_ab#_status
 *
 * PRCH Status Register
 */
union cavm_prchx_abx_status
{
    uint64_t u;
    struct cavm_prchx_abx_status_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_5_63         : 59;
        uint64_t ready                 : 1;  /**< [  4:  4](RO/H) Indicates if the PRCH is ready to receive next job. '1' = Ready for next job, '0' = Busy. */
        uint64_t reserved_3            : 1;
        uint64_t status2               : 1;  /**< [  2:  2](RO/H) Indicates if the PRCH is busy processing a job with CONFIGURATION 2.
                                                                 '0' = Ready for new job,
                                                                 '1' = Busy processing. */
        uint64_t status1               : 1;  /**< [  1:  1](RO/H) Indicates if the PRCH is busy processing a job with CONFIGURATION 1.
                                                                 '0' = Ready for new job,
                                                                 '1' = Busy processing. */
        uint64_t status0               : 1;  /**< [  0:  0](RO/H) Indicates if the PRCH is busy processing a job with CONFIGURATION 0.
                                                                 '0' = Ready for new job,
                                                                 '1' = Busy processing. */
#else /* Word 0 - Little Endian */
        uint64_t status0               : 1;  /**< [  0:  0](RO/H) Indicates if the PRCH is busy processing a job with CONFIGURATION 0.
                                                                 '0' = Ready for new job,
                                                                 '1' = Busy processing. */
        uint64_t status1               : 1;  /**< [  1:  1](RO/H) Indicates if the PRCH is busy processing a job with CONFIGURATION 1.
                                                                 '0' = Ready for new job,
                                                                 '1' = Busy processing. */
        uint64_t status2               : 1;  /**< [  2:  2](RO/H) Indicates if the PRCH is busy processing a job with CONFIGURATION 2.
                                                                 '0' = Ready for new job,
                                                                 '1' = Busy processing. */
        uint64_t reserved_3            : 1;
        uint64_t ready                 : 1;  /**< [  4:  4](RO/H) Indicates if the PRCH is ready to receive next job. '1' = Ready for next job, '0' = Busy. */
        uint64_t reserved_5_63         : 59;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_prchx_abx_status_s cn; */
};
typedef union cavm_prchx_abx_status cavm_prchx_abx_status_t;

static inline uint64_t CAVM_PRCHX_ABX_STATUS(uint64_t a, uint64_t b) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_PRCHX_ABX_STATUS(uint64_t a, uint64_t b)
{
    if ((a==0) && (b<=2))
        return 0x87e042180018ll + 0ll * ((a) & 0x0) + 0x10000ll * ((b) & 0x3);
    __cavm_csr_fatal("PRCHX_ABX_STATUS", 2, a, b, 0, 0, 0, 0);
}

#define typedef_CAVM_PRCHX_ABX_STATUS(a,b) cavm_prchx_abx_status_t
#define bustype_CAVM_PRCHX_ABX_STATUS(a,b) CSR_TYPE_RSL
#define basename_CAVM_PRCHX_ABX_STATUS(a,b) "PRCHX_ABX_STATUS"
#define busnum_CAVM_PRCHX_ABX_STATUS(a,b) (a)
#define arguments_CAVM_PRCHX_ABX_STATUS(a,b) (a),(b),-1,-1

#endif /* __CAVM_CSRS_PRCHN_H__ */
