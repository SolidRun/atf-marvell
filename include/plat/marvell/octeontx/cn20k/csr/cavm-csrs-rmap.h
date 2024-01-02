#ifndef __CAVM_CSRS_RMAP_H__
#define __CAVM_CSRS_RMAP_H__
/* This file is auto-generated. Do not edit */

/***********************license start***********************************
* Copyright (C) 2021-2024 Marvell.
* SPDX-License-Identifier: BSD-3-Clause
* https://spdx.org/licenses
***********************license end**************************************/


/**
 * @file
 *
 * Configuration and status register (CSR) address and type definitions for
 * RMAP.
 *
 * This file is auto generated. Do not edit.
 *
 */

/**
 * Enumeration rmap_bar_e
 */
#define CAVM_RMAP_BAR_E_RMAPX_PF_BAR2(a) (0x87e041a00000ll + 0x80000ll * (a))
#define CAVM_RMAP_BAR_E_RMAPX_PF_BAR2_SIZE 0x40000ull

/**
 * Structure rmap_lte_modex_s
 *
 * RMAP LTE Mode Structure
 * This structure defines the format of the job configuration of RMAP jobs when in
 * LTE Mode.
 */
union cavm_rmap_lte_modex_s
{
    uint64_t u[10];
    struct cavm_rmap_lte_modex_s_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t phy_mode              : 1;  /**< [ 63: 63] This flag sets mode of operation. Must be set to 0 to indicate LTE mode. */
        uint64_t tti_mode              : 3;  /**< [ 62: 60] TTI Mode:
                                                                 0x0 = normal 1ms TTI.
                                                                 0x1 = 7-OS sTTI.
                                                                 0x2 = 2/3-OS sTTI.
                                                                 0x3 = Flexible Symbol with no UCI.
                                                                 0x4 = feLAA Mode 1, no data puncturing.
                                                                 0x5 = feLAA Mode 1, slot0 data puncturing.
                                                                 0x6 = AUL mode. */
        uint64_t bypass_scrambler      : 1;  /**< [ 59: 59] If set to 1, bypass scrambling. */
        uint64_t bypass_modulator      : 1;  /**< [ 58: 58] If set to 1, bypass modulator/RS insertion and DFT. */
        uint64_t bypass_dft            : 1;  /**< [ 57: 57] If set to 1, DFT is bypassed. */
        uint64_t dft_standalone_flag   : 1;  /**< [ 56: 56] Flag to set the DFT engine as a standalone module. In this mode,
                                                                 both the functions before and after DFT/IDFT engine will be bypassed.
                                                                 The DFT/IDFT result will be DMAed directly to the output as in the one layer,
                                                                 no frequency hopping, allocation type 0 case.
                                                                   0: used as non-standalone module in the RMAP chain.
                                                                   1: used as standalone DFT/IDFT engine. */
        uint64_t bypass_data_uci_mux   : 1;  /**< [ 55: 55] If set to 1, Data_UCI multiplexer is bypassed. */
        uint64_t reserved_54           : 1;
        uint64_t ri_symb_flg           : 1;  /**< [ 53: 53] For tti_mode = 0.
                                                                   0: RI LLRs on data symbol indices {1,4,7,10}.
                                                                   1: RI LLRs on data symbol indices {0,3,6,9}.
                                                                 For tti_mode = 1.
                                                                   0: RI LLRs on data symbol indices {1,4}.
                                                                   1: RI LLRs on data symbol indices {0,3}.
                                                                 For tti_mode = 4 or 5.
                                                                   0: RI LLRs on data symbol indices {7,10}.
                                                                   1: RI LLRs on data symbol indices {6,9}.
                                                                 For tti_mode = 2,3,6.
                                                                   Force ri_symb_flg = 0 for tti_mode = 2,3,6. */
        uint64_t num_rb                : 9;  /**< [ 52: 44] The total number of RBs in a subframe.
                                                                 If RES_ALLC_TYPE = 1, this is the sum of number of RBs for Set 0 and Set 1.
                                                                 For LTE, valid range is [1:108]. */
        uint64_t aul_symb0_puncture_flg : 1; /**< [ 43: 43] Flag to indicate whether to do puncturing for symb0 under AUL mode.
                                                                 0: no puncturing.
                                                                 1: modulator punctures all REs of data symbol 0. */
        uint64_t num_layers            : 3;  /**< [ 42: 40] Number of layers for PUSCH channel:
                                                                 0x1 = 1 Layer.
                                                                 0x2 = 2 Layers.
                                                                 0x4 = 4 layers 4 layers is only for slot-PUSCH (sTTI 7 OS) and subslot-PUSCH.
                                                                 (sTTI 7 OS) as in Table 5.3.2A.2-1 of [R1].
                                                                 Others: reserved. */
        uint64_t mod_order             : 4;  /**< [ 39: 36] Modulation order:
                                                                 0x2 = QPSK.
                                                                 0x4 = 16-QAM.
                                                                 0x6 = 64-QAM.
                                                                 0x8 = 256-QAM. */
        uint64_t num_scalar_qam        : 4;  /**< [ 35: 32] Is the number of bits to control the configurable scalar in the modulator:
                                                                       I(Q)fix=round(2^(num_scalar_qam)*I(Q)),
                                                                 where I(Q)_flp are the column values from the Table 14 to Table 16, I(Q)_fix are
                                                                 the fixed-point numbers after the scaling.
                                                                 Range: [7,14]. */
        uint64_t dft_idft_flag         : 1;  /**< [ 31: 31] Flag to set the DFT or IDFT function:
                                                                   0: DFT.
                                                                   1: IDFT.
                                                                 Shall be set to 0 if dft_standalone_flag = 0.
                                                                 {0,1} for DFT only (dft_standalone_flag = 1). */
        uint64_t aul_symb11_puncture_flg : 1;/**< [ 30: 30] Flag to indicate whether to do puncturing for symb11 under AUL mode.
                                                                   0: no puncturing.
                                                                   1: modulator punctures all REs of data symbol 11. */
        uint64_t ndft_indx             : 6;  /**< [ 29: 24] Indices for the NDFTs defined in the list of supported NDFTs. The mapping of the
                                                                 ndft_indx to the number of RBs and NDFT_size is shown in the Table: Mapping of
                                                                 [NDFT_INDX]
                                                                 Range is [0, 34].
                                                                   0 = NDFT = 12.
                                                                   1 = NDFT = 24.
                                                                   ....
                                                                   33 = NDFT = 1200.
                                                                   34 = NDFT = 1296. */
        uint64_t reserved_21_23        : 3;
        uint64_t rs_bits_last          : 5;  /**< [ 20: 16] Configurable parameter to control the output scaling at the last stage of DFT/IDFT.
                                                                 The last stage of DFT/IDFT would be right shifted by rs_bits_last.
                                                                 Range: [15,19]. */
        uint64_t reserved_14_15        : 2;
        uint64_t g_prime               : 14; /**< [ 13:  0] Total number of coded symbols in the transport block.
                                                                 Total number of coded bits is g_prime*num_layers*mod_order.
                                                                 Valid range is [0, 15552] with the following condition:
                                                                 g_prime \<= num_symb_pusch*12*num_rb. */
#else /* Word 0 - Little Endian */
        uint64_t g_prime               : 14; /**< [ 13:  0] Total number of coded symbols in the transport block.
                                                                 Total number of coded bits is g_prime*num_layers*mod_order.
                                                                 Valid range is [0, 15552] with the following condition:
                                                                 g_prime \<= num_symb_pusch*12*num_rb. */
        uint64_t reserved_14_15        : 2;
        uint64_t rs_bits_last          : 5;  /**< [ 20: 16] Configurable parameter to control the output scaling at the last stage of DFT/IDFT.
                                                                 The last stage of DFT/IDFT would be right shifted by rs_bits_last.
                                                                 Range: [15,19]. */
        uint64_t reserved_21_23        : 3;
        uint64_t ndft_indx             : 6;  /**< [ 29: 24] Indices for the NDFTs defined in the list of supported NDFTs. The mapping of the
                                                                 ndft_indx to the number of RBs and NDFT_size is shown in the Table: Mapping of
                                                                 [NDFT_INDX]
                                                                 Range is [0, 34].
                                                                   0 = NDFT = 12.
                                                                   1 = NDFT = 24.
                                                                   ....
                                                                   33 = NDFT = 1200.
                                                                   34 = NDFT = 1296. */
        uint64_t aul_symb11_puncture_flg : 1;/**< [ 30: 30] Flag to indicate whether to do puncturing for symb11 under AUL mode.
                                                                   0: no puncturing.
                                                                   1: modulator punctures all REs of data symbol 11. */
        uint64_t dft_idft_flag         : 1;  /**< [ 31: 31] Flag to set the DFT or IDFT function:
                                                                   0: DFT.
                                                                   1: IDFT.
                                                                 Shall be set to 0 if dft_standalone_flag = 0.
                                                                 {0,1} for DFT only (dft_standalone_flag = 1). */
        uint64_t num_scalar_qam        : 4;  /**< [ 35: 32] Is the number of bits to control the configurable scalar in the modulator:
                                                                       I(Q)fix=round(2^(num_scalar_qam)*I(Q)),
                                                                 where I(Q)_flp are the column values from the Table 14 to Table 16, I(Q)_fix are
                                                                 the fixed-point numbers after the scaling.
                                                                 Range: [7,14]. */
        uint64_t mod_order             : 4;  /**< [ 39: 36] Modulation order:
                                                                 0x2 = QPSK.
                                                                 0x4 = 16-QAM.
                                                                 0x6 = 64-QAM.
                                                                 0x8 = 256-QAM. */
        uint64_t num_layers            : 3;  /**< [ 42: 40] Number of layers for PUSCH channel:
                                                                 0x1 = 1 Layer.
                                                                 0x2 = 2 Layers.
                                                                 0x4 = 4 layers 4 layers is only for slot-PUSCH (sTTI 7 OS) and subslot-PUSCH.
                                                                 (sTTI 7 OS) as in Table 5.3.2A.2-1 of [R1].
                                                                 Others: reserved. */
        uint64_t aul_symb0_puncture_flg : 1; /**< [ 43: 43] Flag to indicate whether to do puncturing for symb0 under AUL mode.
                                                                 0: no puncturing.
                                                                 1: modulator punctures all REs of data symbol 0. */
        uint64_t num_rb                : 9;  /**< [ 52: 44] The total number of RBs in a subframe.
                                                                 If RES_ALLC_TYPE = 1, this is the sum of number of RBs for Set 0 and Set 1.
                                                                 For LTE, valid range is [1:108]. */
        uint64_t ri_symb_flg           : 1;  /**< [ 53: 53] For tti_mode = 0.
                                                                   0: RI LLRs on data symbol indices {1,4,7,10}.
                                                                   1: RI LLRs on data symbol indices {0,3,6,9}.
                                                                 For tti_mode = 1.
                                                                   0: RI LLRs on data symbol indices {1,4}.
                                                                   1: RI LLRs on data symbol indices {0,3}.
                                                                 For tti_mode = 4 or 5.
                                                                   0: RI LLRs on data symbol indices {7,10}.
                                                                   1: RI LLRs on data symbol indices {6,9}.
                                                                 For tti_mode = 2,3,6.
                                                                   Force ri_symb_flg = 0 for tti_mode = 2,3,6. */
        uint64_t reserved_54           : 1;
        uint64_t bypass_data_uci_mux   : 1;  /**< [ 55: 55] If set to 1, Data_UCI multiplexer is bypassed. */
        uint64_t dft_standalone_flag   : 1;  /**< [ 56: 56] Flag to set the DFT engine as a standalone module. In this mode,
                                                                 both the functions before and after DFT/IDFT engine will be bypassed.
                                                                 The DFT/IDFT result will be DMAed directly to the output as in the one layer,
                                                                 no frequency hopping, allocation type 0 case.
                                                                   0: used as non-standalone module in the RMAP chain.
                                                                   1: used as standalone DFT/IDFT engine. */
        uint64_t bypass_dft            : 1;  /**< [ 57: 57] If set to 1, DFT is bypassed. */
        uint64_t bypass_modulator      : 1;  /**< [ 58: 58] If set to 1, bypass modulator/RS insertion and DFT. */
        uint64_t bypass_scrambler      : 1;  /**< [ 59: 59] If set to 1, bypass scrambling. */
        uint64_t tti_mode              : 3;  /**< [ 62: 60] TTI Mode:
                                                                 0x0 = normal 1ms TTI.
                                                                 0x1 = 7-OS sTTI.
                                                                 0x2 = 2/3-OS sTTI.
                                                                 0x3 = Flexible Symbol with no UCI.
                                                                 0x4 = feLAA Mode 1, no data puncturing.
                                                                 0x5 = feLAA Mode 1, slot0 data puncturing.
                                                                 0x6 = AUL mode. */
        uint64_t phy_mode              : 1;  /**< [ 63: 63] This flag sets mode of operation. Must be set to 0 to indicate LTE mode. */
#endif /* Word 0 - End */
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 1 - Big Endian */
        uint64_t reserved_125_127      : 3;
        uint64_t stti_2os_ack_pos      : 1;  /**< [124:124] The symbol index for the ACK mapping in the case of two data symbols for
                                                                 [TTI_MODE] = 0x2 (2/3-OS sTTI):
                                                                 0x0 = ACK on symbol 0 and RI on symbol 1.
                                                                 0x1 = ACK on symbol l and RI on symbol 0.

                                                                 This field is ignored for [TTI_MODE] = 0x0,0x1,0x3. */
        uint64_t reserved_123          : 1;
        uint64_t ack_enc_cat           : 3;  /**< [122:120] ACK encoding category:
                                                                 0 = No ACK.
                                                                 1 = O^ACK = 0x1.
                                                                 2 = O^ACK = 0x1, ACK bundling.
                                                                 3 = O^ACK = 0x2.
                                                                 4 = O^ACK = 0x2, ACK bundling.
                                                                 5 = 3 \<= O^ACK \<= 11.
                                                                 6 = 11 \< O^ACK \<= 22.
                                                                 7 = O^ACK \> 22, (encoder and repetition are bypassed).
                                                                 Shall be 0 if tti_mode \>= 3.
                                                                 Note: this field should be set to "0" if ACK_M_RE is "0". */
        uint64_t reserved_119          : 1;
        uint64_t ri_enc_cat            : 3;  /**< [118:116] RI encoding category:
                                                                 0 = no RI.
                                                                 1 = O^RI = 1.
                                                                 2 = O^RI = 2.
                                                                 3 = 3 \<= O^RI \<= 11.
                                                                 4 = 11 \< O^RI \<= 22.
                                                                 5 = O^RI \> 22 (Encoder and Repetition are bypassed).
                                                                 Others = Reserved.
                                                                 Shall be 0 if tti_mode = {3,6}. */
        uint64_t reserved_115          : 1;
        uint64_t err_var_in_data       : 8;  /**< [114:107] Error Variance for Data. The value range is [0, 127]. Software must constrain
                                                                 err_var_in_data \< scalar_uci. */
        uint64_t err_var_in_cqi        : 1;  /**< [106:106] Error Variance indication for CQI. */
        uint64_t err_var_in_ri         : 1;  /**< [105:105] Error Variance indication for RI. */
        uint64_t err_var_in_ack        : 1;  /**< [104:104] Error Variance indication for ACK. */
        uint64_t num_symb_pusch        : 4;  /**< [103:100] Number of SC-FDMA symbols carrying PUSCH in a TTI. Used for UL-SCH channel interleaving.

                                                                 tti_mode = 0 (1ms TTI): {9,10,11,12}.
                                                                   For ri_symb_flg = 0.
                                                                     - [11,12] when cp_mode = 0.
                                                                     - [9, 10] when cp_mode = 1.

                                                                   For ri_symb_flg = 1.
                                                                     num_symb_pusch is up to 11 and there is no ACK.

                                                                 tti_mode = 1 (7-OS sTTI).
                                                                   For ri_symb_flg = 0, [5,6}.
                                                                   For ri_symb_flg = 1, {4, 5, 6}.

                                                                 tti_mode = 2 (2/3-OS sTTI): [1,2}.

                                                                 tti_mode = 3 (Flexible symbol): [1,12].

                                                                 tti_mode = 4 (feLAA Mode 1, no data puncturing).
                                                                   For ri_symb_flg = 0.
                                                                     - [11,12] when cp_mode = 0.
                                                                     - [9, 10] when cp_mode = 1.
                                                                   For ri_symb_flg = 1: num_symb_pusch is up to 11.

                                                                 tti_mode = 5 (feLAA Mode 1, slot0 data puncturing).
                                                                   For ri_symb_flg = 0.
                                                                     - [11,12] when cp_mode = 0.
                                                                     - [9, 10] when cp_mode = 1.
                                                                   For ri_symb_flg = 1: num_symb_pusch is up to 11.

                                                                 tti_mode = 6 AUL mode: 12. */
        uint64_t reserved_99           : 1;
        uint64_t cp_mode               : 1;  /**< [ 98: 98] CP type for normal TTI (tti_mode = 0x0).
                                                                   0 = Normal CP.
                                                                   1 = Extended CP.

                                                                 Should be set to 0 for tti_mode = 1,2,3,4,5,6. */
        uint64_t reserved_97           : 1;
        uint64_t symb_byte_aligned     : 1;  /**< [ 96: 96] If set to 1, each mod_order bits are mapped to one byte output.
                                                                 Range: {0,1]}. */
        uint64_t reserved_95           : 1;
        uint64_t scrambling_cinit      : 31; /**< [ 94: 64] Initial value of the second m-sequence of the scrambler.
                                                                 See section 7.2 of [R1].
                                                                 Valid range is [0, 2^31-1]. */
#else /* Word 1 - Little Endian */
        uint64_t scrambling_cinit      : 31; /**< [ 94: 64] Initial value of the second m-sequence of the scrambler.
                                                                 See section 7.2 of [R1].
                                                                 Valid range is [0, 2^31-1]. */
        uint64_t reserved_95           : 1;
        uint64_t symb_byte_aligned     : 1;  /**< [ 96: 96] If set to 1, each mod_order bits are mapped to one byte output.
                                                                 Range: {0,1]}. */
        uint64_t reserved_97           : 1;
        uint64_t cp_mode               : 1;  /**< [ 98: 98] CP type for normal TTI (tti_mode = 0x0).
                                                                   0 = Normal CP.
                                                                   1 = Extended CP.

                                                                 Should be set to 0 for tti_mode = 1,2,3,4,5,6. */
        uint64_t reserved_99           : 1;
        uint64_t num_symb_pusch        : 4;  /**< [103:100] Number of SC-FDMA symbols carrying PUSCH in a TTI. Used for UL-SCH channel interleaving.

                                                                 tti_mode = 0 (1ms TTI): {9,10,11,12}.
                                                                   For ri_symb_flg = 0.
                                                                     - [11,12] when cp_mode = 0.
                                                                     - [9, 10] when cp_mode = 1.

                                                                   For ri_symb_flg = 1.
                                                                     num_symb_pusch is up to 11 and there is no ACK.

                                                                 tti_mode = 1 (7-OS sTTI).
                                                                   For ri_symb_flg = 0, [5,6}.
                                                                   For ri_symb_flg = 1, {4, 5, 6}.

                                                                 tti_mode = 2 (2/3-OS sTTI): [1,2}.

                                                                 tti_mode = 3 (Flexible symbol): [1,12].

                                                                 tti_mode = 4 (feLAA Mode 1, no data puncturing).
                                                                   For ri_symb_flg = 0.
                                                                     - [11,12] when cp_mode = 0.
                                                                     - [9, 10] when cp_mode = 1.
                                                                   For ri_symb_flg = 1: num_symb_pusch is up to 11.

                                                                 tti_mode = 5 (feLAA Mode 1, slot0 data puncturing).
                                                                   For ri_symb_flg = 0.
                                                                     - [11,12] when cp_mode = 0.
                                                                     - [9, 10] when cp_mode = 1.
                                                                   For ri_symb_flg = 1: num_symb_pusch is up to 11.

                                                                 tti_mode = 6 AUL mode: 12. */
        uint64_t err_var_in_ack        : 1;  /**< [104:104] Error Variance indication for ACK. */
        uint64_t err_var_in_ri         : 1;  /**< [105:105] Error Variance indication for RI. */
        uint64_t err_var_in_cqi        : 1;  /**< [106:106] Error Variance indication for CQI. */
        uint64_t err_var_in_data       : 8;  /**< [114:107] Error Variance for Data. The value range is [0, 127]. Software must constrain
                                                                 err_var_in_data \< scalar_uci. */
        uint64_t reserved_115          : 1;
        uint64_t ri_enc_cat            : 3;  /**< [118:116] RI encoding category:
                                                                 0 = no RI.
                                                                 1 = O^RI = 1.
                                                                 2 = O^RI = 2.
                                                                 3 = 3 \<= O^RI \<= 11.
                                                                 4 = 11 \< O^RI \<= 22.
                                                                 5 = O^RI \> 22 (Encoder and Repetition are bypassed).
                                                                 Others = Reserved.
                                                                 Shall be 0 if tti_mode = {3,6}. */
        uint64_t reserved_119          : 1;
        uint64_t ack_enc_cat           : 3;  /**< [122:120] ACK encoding category:
                                                                 0 = No ACK.
                                                                 1 = O^ACK = 0x1.
                                                                 2 = O^ACK = 0x1, ACK bundling.
                                                                 3 = O^ACK = 0x2.
                                                                 4 = O^ACK = 0x2, ACK bundling.
                                                                 5 = 3 \<= O^ACK \<= 11.
                                                                 6 = 11 \< O^ACK \<= 22.
                                                                 7 = O^ACK \> 22, (encoder and repetition are bypassed).
                                                                 Shall be 0 if tti_mode \>= 3.
                                                                 Note: this field should be set to "0" if ACK_M_RE is "0". */
        uint64_t reserved_123          : 1;
        uint64_t stti_2os_ack_pos      : 1;  /**< [124:124] The symbol index for the ACK mapping in the case of two data symbols for
                                                                 [TTI_MODE] = 0x2 (2/3-OS sTTI):
                                                                 0x0 = ACK on symbol 0 and RI on symbol 1.
                                                                 0x1 = ACK on symbol l and RI on symbol 0.

                                                                 This field is ignored for [TTI_MODE] = 0x0,0x1,0x3. */
        uint64_t reserved_125_127      : 3;
#endif /* Word 1 - End */
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 2 - Big Endian */
        uint64_t reserved_190_191      : 2;
        uint64_t num_cqi_re            : 14; /**< [189:176] Number of CQI REs per layer. Valid range is [0,15552] with the condition that
                                                                 [NUM_CQI_RE] \<= [NM_SYMB_PUSCH] * [NUM_RB] * 12. */
        uint64_t reserved_173_175      : 3;
        uint64_t num_ri_re             : 13; /**< [172:160] Number of RI REs per layer (Q'RI). If Q'RI = 0, no RI bits are received. Valid
                                                                 range is [0, 5184] with the following constraints:

                                                                 _ When [RI_ENC_CAT] = 0x0 or [TTI_MODE] = 0x3, valid range is 0.

                                                                 _ When [RI_ENC_CAT] \>= 0x1 and [TTI_MODE] = 0x0, valid range is [1,48*[NUM_RB]].

                                                                 _ When [RI_ENC_CAT] \>= 0x1 and [TTI_MODE] = 0x1, valid range is [1,24*[NUM_RB]].

                                                                 _ When [RI_ENC_CAT] \>= 0x1 and [TTI_MODE] = 0x2, valid range is [1,12*[NUM_RB]]. */
        uint64_t reserved_157_159      : 3;
        uint64_t num_ack_re            : 13; /**< [156:144] Number of ACK REs per layer (Q'ACK). Valid range is [0,5184] with the following conditions:

                                                                 _ When Q_ACK = 0 no ACK bits are received.

                                                                 _ When [ACK_ENC_CAT] = 0 or [TTI_MODE] = 0x3, must be 0x0.

                                                                 _ When [ACK_ENC_CAT] \>= 0x1 and [TTI_MODE] = 0x0, valid range is [1,48*[NUM_RB]].

                                                                 _ When [ACK_ENC_CAT] \>= 0x1 and [TTI_MODE] = 0x1, valid range is [1,24*[NUM_RB]].

                                                                 _ When [ACK_ENC_CAT] \>= 0x1, [NMU_SYMB_PUSCH] = 0x2 and [TTI_MODE] = 0x2, valid
                                                                 range is [1,12*[NUM_RB]].

                                                                 _ When [ACK_ENC_CAT] \>= 0x1, [NMU_SYMB_PUSCH] = 0x1 and [TTI_MODE] = 0x2, valid
                                                                 range is [1, 12*[NUM_RB] - [NUM_RI_RE]]. */
        uint64_t pic_enable            : 1;  /**< [143:143] 0: PIC related features in TC1860 are not enabled. All the qvar_report outputs 0s.
                                                                 1: PIC related features in TC1860 are enabled. */
        uint64_t reserved_139_142      : 4;
        uint64_t r_prime_mux           : 11; /**< [138:128] Size R'mux of the channel interleaver matrix. Valid range is [0,1296] with the
                                                                 condition that [R_PRIME_MUX] = 12 * [NUM_RB]. */
#else /* Word 2 - Little Endian */
        uint64_t r_prime_mux           : 11; /**< [138:128] Size R'mux of the channel interleaver matrix. Valid range is [0,1296] with the
                                                                 condition that [R_PRIME_MUX] = 12 * [NUM_RB]. */
        uint64_t reserved_139_142      : 4;
        uint64_t pic_enable            : 1;  /**< [143:143] 0: PIC related features in TC1860 are not enabled. All the qvar_report outputs 0s.
                                                                 1: PIC related features in TC1860 are enabled. */
        uint64_t num_ack_re            : 13; /**< [156:144] Number of ACK REs per layer (Q'ACK). Valid range is [0,5184] with the following conditions:

                                                                 _ When Q_ACK = 0 no ACK bits are received.

                                                                 _ When [ACK_ENC_CAT] = 0 or [TTI_MODE] = 0x3, must be 0x0.

                                                                 _ When [ACK_ENC_CAT] \>= 0x1 and [TTI_MODE] = 0x0, valid range is [1,48*[NUM_RB]].

                                                                 _ When [ACK_ENC_CAT] \>= 0x1 and [TTI_MODE] = 0x1, valid range is [1,24*[NUM_RB]].

                                                                 _ When [ACK_ENC_CAT] \>= 0x1, [NMU_SYMB_PUSCH] = 0x2 and [TTI_MODE] = 0x2, valid
                                                                 range is [1,12*[NUM_RB]].

                                                                 _ When [ACK_ENC_CAT] \>= 0x1, [NMU_SYMB_PUSCH] = 0x1 and [TTI_MODE] = 0x2, valid
                                                                 range is [1, 12*[NUM_RB] - [NUM_RI_RE]]. */
        uint64_t reserved_157_159      : 3;
        uint64_t num_ri_re             : 13; /**< [172:160] Number of RI REs per layer (Q'RI). If Q'RI = 0, no RI bits are received. Valid
                                                                 range is [0, 5184] with the following constraints:

                                                                 _ When [RI_ENC_CAT] = 0x0 or [TTI_MODE] = 0x3, valid range is 0.

                                                                 _ When [RI_ENC_CAT] \>= 0x1 and [TTI_MODE] = 0x0, valid range is [1,48*[NUM_RB]].

                                                                 _ When [RI_ENC_CAT] \>= 0x1 and [TTI_MODE] = 0x1, valid range is [1,24*[NUM_RB]].

                                                                 _ When [RI_ENC_CAT] \>= 0x1 and [TTI_MODE] = 0x2, valid range is [1,12*[NUM_RB]]. */
        uint64_t reserved_173_175      : 3;
        uint64_t num_cqi_re            : 14; /**< [189:176] Number of CQI REs per layer. Valid range is [0,15552] with the condition that
                                                                 [NUM_CQI_RE] \<= [NM_SYMB_PUSCH] * [NUM_RB] * 12. */
        uint64_t reserved_190_191      : 2;
#endif /* Word 2 - End */
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 3 - Big Endian */
        uint64_t reserved_251_255      : 5;
        uint64_t data_bit_order        : 1;  /**< [250:250] Indicator for the bit order of data bits.
                                                                   0: MSB first within a byte.
                                                                   1: LSB first with a byte. */
        uint64_t data_byte_order       : 2;  /**< [249:248] Indicator for the byte order of data bits in a word:
                                                                   0: DATA_BYTE_ORDER_MODE_0:,  Byte 0 is on lowest address.
                                                                   1: DATA_BYTE_ORDER_MODE_1.
                                                                     Byte 0 is on highest address.
                                                                     Swapping 8 bytes (64 bits).
                                                                   2: DATA_BYTE_ORDER_MODE_2.
                                                                     Swapping each 4 bytes (32 bits). */
        uint64_t reserved_247          : 1;
        uint64_t cqi_bit_order         : 1;  /**< [246:246] Indicator for the bit order of cqi bits.
                                                                 Same as data_bit_order. */
        uint64_t cqi_byte_order        : 2;  /**< [245:244] Indicator for the byte order of cqi bits in a word.
                                                                 Same as data_byte_order. */
        uint64_t reserved_243          : 1;
        uint64_t ri_bit_order          : 1;  /**< [242:242] Indicator for the bit order of ri bits.
                                                                 Same as data_bit_order. */
        uint64_t ri_byte_order         : 2;  /**< [241:240] Indicator for the byte order of ri bits in a word.
                                                                 Same as data_byte_order. */
        uint64_t reserved_239          : 1;
        uint64_t ack_bit_order         : 1;  /**< [238:238] Indicator for the bit order of ack bits.
                                                                 Same as data_bit_order. */
        uint64_t ack_byte_order        : 2;  /**< [237:236] Indicator for the byte order of ack bits in a word.
                                                                 Same as data_byte_order. */
        uint64_t reserved_234_235      : 2;
        uint64_t num_encoded_cqi_bits  : 18; /**< [233:216] The number of encoded cqi bits. When it is RM coded,=32.
                                                                 For convolutional code case, the recoded cqi bits can be fully rate-matched
                                                                 = num_rm_cqi_bit.

                                                                 Range: [0, 248832]:
                                                                 _ [0]: if num_rm_cqi_bit = 0
                                                                 _ [1,, 248832]: if num_rm_cqi_bit \<= 5760
                                                                 _ [1,, 5760] or [num_rm_cqi_bit,, 248832] if num_rm_cqi_bit \> 5760
                                                                 _ [invalid]: if num_rm_cqi_bit \> 5760 & num_encoded_cqi_bit \< num_rm_cqi_bit,

                                                                 where num_rm_cqi_bit = num_cqi_re*mod_order*num_layers must be
                                                                 in the range [0, num_cqi_re*mod_order*num_layers].

                                                                 Note: 5760 is the hardware buffer size for bit repetition. */
        uint64_t reserved_214_215      : 2;
        uint64_t num_bundled_i         : 2;  /**< [213:212] Index i=(N_bundled-1) mod 4  for the scrambling sequence table for ACK bundling,
                                                                 where N_bundled is determined as described in section 7.3 of [R3]. */
        uint64_t reserved_210_211      : 2;
        uint64_t res_alloc_type        : 1;  /**< [209:209] The resource allocation type:
                                                                 0 = Type 0.
                                                                 1 = Type 1. */
        uint64_t freq_hop_type         : 1;  /**< [208:208] Intra-subframe frequency hopping flag:
                                                                 0 = No intra-subframe frequency hopping.
                                                                 1 = Intra-subframe frequency hopping.
                                                                 If res_alloc_type = 1, freq_hop_flag shall be 0. */
        uint64_t reserved_207          : 1;
        uint64_t length_rb_set0        : 7;  /**< [206:200] The length in terms of contiguously allocated resource blocks (L_CRBs_3_1) for set0.
                                                                 Valid range is [1, 108]. */
        uint64_t reserved_199          : 1;
        uint64_t length_rb_set1        : 7;  /**< [198:192] Length in terms of contiguously allocated resource blocks (L_CRB 1) for set1.
                                                                 Range: [1,108].
                                                                 Ignored if res_alloc_type = 0.
                                                                 Shall be num_rb length_rb_set0 if res_alloc_type = 1. */
#else /* Word 3 - Little Endian */
        uint64_t length_rb_set1        : 7;  /**< [198:192] Length in terms of contiguously allocated resource blocks (L_CRB 1) for set1.
                                                                 Range: [1,108].
                                                                 Ignored if res_alloc_type = 0.
                                                                 Shall be num_rb length_rb_set0 if res_alloc_type = 1. */
        uint64_t reserved_199          : 1;
        uint64_t length_rb_set0        : 7;  /**< [206:200] The length in terms of contiguously allocated resource blocks (L_CRBs_3_1) for set0.
                                                                 Valid range is [1, 108]. */
        uint64_t reserved_207          : 1;
        uint64_t freq_hop_type         : 1;  /**< [208:208] Intra-subframe frequency hopping flag:
                                                                 0 = No intra-subframe frequency hopping.
                                                                 1 = Intra-subframe frequency hopping.
                                                                 If res_alloc_type = 1, freq_hop_flag shall be 0. */
        uint64_t res_alloc_type        : 1;  /**< [209:209] The resource allocation type:
                                                                 0 = Type 0.
                                                                 1 = Type 1. */
        uint64_t reserved_210_211      : 2;
        uint64_t num_bundled_i         : 2;  /**< [213:212] Index i=(N_bundled-1) mod 4  for the scrambling sequence table for ACK bundling,
                                                                 where N_bundled is determined as described in section 7.3 of [R3]. */
        uint64_t reserved_214_215      : 2;
        uint64_t num_encoded_cqi_bits  : 18; /**< [233:216] The number of encoded cqi bits. When it is RM coded,=32.
                                                                 For convolutional code case, the recoded cqi bits can be fully rate-matched
                                                                 = num_rm_cqi_bit.

                                                                 Range: [0, 248832]:
                                                                 _ [0]: if num_rm_cqi_bit = 0
                                                                 _ [1,, 248832]: if num_rm_cqi_bit \<= 5760
                                                                 _ [1,, 5760] or [num_rm_cqi_bit,, 248832] if num_rm_cqi_bit \> 5760
                                                                 _ [invalid]: if num_rm_cqi_bit \> 5760 & num_encoded_cqi_bit \< num_rm_cqi_bit,

                                                                 where num_rm_cqi_bit = num_cqi_re*mod_order*num_layers must be
                                                                 in the range [0, num_cqi_re*mod_order*num_layers].

                                                                 Note: 5760 is the hardware buffer size for bit repetition. */
        uint64_t reserved_234_235      : 2;
        uint64_t ack_byte_order        : 2;  /**< [237:236] Indicator for the byte order of ack bits in a word.
                                                                 Same as data_byte_order. */
        uint64_t ack_bit_order         : 1;  /**< [238:238] Indicator for the bit order of ack bits.
                                                                 Same as data_bit_order. */
        uint64_t reserved_239          : 1;
        uint64_t ri_byte_order         : 2;  /**< [241:240] Indicator for the byte order of ri bits in a word.
                                                                 Same as data_byte_order. */
        uint64_t ri_bit_order          : 1;  /**< [242:242] Indicator for the bit order of ri bits.
                                                                 Same as data_bit_order. */
        uint64_t reserved_243          : 1;
        uint64_t cqi_byte_order        : 2;  /**< [245:244] Indicator for the byte order of cqi bits in a word.
                                                                 Same as data_byte_order. */
        uint64_t cqi_bit_order         : 1;  /**< [246:246] Indicator for the bit order of cqi bits.
                                                                 Same as data_bit_order. */
        uint64_t reserved_247          : 1;
        uint64_t data_byte_order       : 2;  /**< [249:248] Indicator for the byte order of data bits in a word:
                                                                   0: DATA_BYTE_ORDER_MODE_0:,  Byte 0 is on lowest address.
                                                                   1: DATA_BYTE_ORDER_MODE_1.
                                                                     Byte 0 is on highest address.
                                                                     Swapping 8 bytes (64 bits).
                                                                   2: DATA_BYTE_ORDER_MODE_2.
                                                                     Swapping each 4 bytes (32 bits). */
        uint64_t data_bit_order        : 1;  /**< [250:250] Indicator for the bit order of data bits.
                                                                   0: MSB first within a byte.
                                                                   1: LSB first with a byte. */
        uint64_t reserved_251_255      : 5;
#endif /* Word 3 - End */
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 4 - Big Endian */
        uint64_t reserved_264_319      : 56;
        uint64_t scalar_uci            : 8;  /**< [263:256] The scalar used to scale the qvar_report for the UCI bits.
                                                                 Range is [1,128].
                                                                 Software to guarantee the constraint that scalar_uci \> max(err_var_in_data). */
#else /* Word 4 - Little Endian */
        uint64_t scalar_uci            : 8;  /**< [263:256] The scalar used to scale the qvar_report for the UCI bits.
                                                                 Range is [1,128].
                                                                 Software to guarantee the constraint that scalar_uci \> max(err_var_in_data). */
        uint64_t reserved_264_319      : 56;
#endif /* Word 4 - End */
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 5 - Big Endian */
        uint64_t reserved_361_383      : 23;
        uint64_t rshft_bits_pr         : 4;  /**< [360:357] The number of bits at right shift of the phase rotation filter. Range is [0,15]. */
        uint64_t foc_filter_enable     : 1;  /**< [356:356] Enable FOC filter.
                                                                 1: FOC is enabled only under pic_enable = 1. */
        uint64_t c_re_m5               : 12; /**< [355:344] C_re [-5] */
        uint64_t c_im_m5               : 12; /**< [343:332] C_im [-5] */
        uint64_t reserved_328_331      : 4;
        uint64_t q_threshold_low       : 8;  /**< [327:320] The threshold used for protection of small qvar_report values. */
#else /* Word 5 - Little Endian */
        uint64_t q_threshold_low       : 8;  /**< [327:320] The threshold used for protection of small qvar_report values. */
        uint64_t reserved_328_331      : 4;
        uint64_t c_im_m5               : 12; /**< [343:332] C_im [-5] */
        uint64_t c_re_m5               : 12; /**< [355:344] C_re [-5] */
        uint64_t foc_filter_enable     : 1;  /**< [356:356] Enable FOC filter.
                                                                 1: FOC is enabled only under pic_enable = 1. */
        uint64_t rshft_bits_pr         : 4;  /**< [360:357] The number of bits at right shift of the phase rotation filter. Range is [0,15]. */
        uint64_t reserved_361_383      : 23;
#endif /* Word 5 - End */
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 6 - Big Endian */
        uint64_t reserved_444_447      : 4;
        uint64_t c_re_m4               : 12; /**< [443:432] C_re [-4] */
        uint64_t c_im_m4               : 12; /**< [431:420] C_im [-4] */
        uint64_t c_re_m3               : 12; /**< [419:408] C_re [-3] */
        uint64_t c_im_m3               : 12; /**< [407:396] C_im [-3] */
        uint64_t c_re_m2               : 12; /**< [395:384] C_re [-2] */
#else /* Word 6 - Little Endian */
        uint64_t c_re_m2               : 12; /**< [395:384] C_re [-2] */
        uint64_t c_im_m3               : 12; /**< [407:396] C_im [-3] */
        uint64_t c_re_m3               : 12; /**< [419:408] C_re [-3] */
        uint64_t c_im_m4               : 12; /**< [431:420] C_im [-4] */
        uint64_t c_re_m4               : 12; /**< [443:432] C_re [-4] */
        uint64_t reserved_444_447      : 4;
#endif /* Word 6 - End */
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 7 - Big Endian */
        uint64_t reserved_508_511      : 4;
        uint64_t c_im_m2               : 12; /**< [507:496] C_im [-2] */
        uint64_t c_re_m1               : 12; /**< [495:484] C_re [-1] */
        uint64_t c_im_m1               : 12; /**< [483:472] C_im [-1] */
        uint64_t c_im_m0               : 12; /**< [471:460] C_im [0] */
        uint64_t c_re_m0               : 12; /**< [459:448] C_re [0] */
#else /* Word 7 - Little Endian */
        uint64_t c_re_m0               : 12; /**< [459:448] C_re [0] */
        uint64_t c_im_m0               : 12; /**< [471:460] C_im [0] */
        uint64_t c_im_m1               : 12; /**< [483:472] C_im [-1] */
        uint64_t c_re_m1               : 12; /**< [495:484] C_re [-1] */
        uint64_t c_im_m2               : 12; /**< [507:496] C_im [-2] */
        uint64_t reserved_508_511      : 4;
#endif /* Word 7 - End */
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 8 - Big Endian */
        uint64_t reserved_572_575      : 4;
        uint64_t c_im_p1               : 12; /**< [571:560] C_im [1] */
        uint64_t c_re_p1               : 12; /**< [559:548] C_re [1] */
        uint64_t c_im_p2               : 12; /**< [547:536] C_im [2] */
        uint64_t c_re_p2               : 12; /**< [535:524] C_re [2] */
        uint64_t c_im_p3               : 12; /**< [523:512] C_im [3] */
#else /* Word 8 - Little Endian */
        uint64_t c_im_p3               : 12; /**< [523:512] C_im [3] */
        uint64_t c_re_p2               : 12; /**< [535:524] C_re [2] */
        uint64_t c_im_p2               : 12; /**< [547:536] C_im [2] */
        uint64_t c_re_p1               : 12; /**< [559:548] C_re [1] */
        uint64_t c_im_p1               : 12; /**< [571:560] C_im [1] */
        uint64_t reserved_572_575      : 4;
#endif /* Word 8 - End */
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 9 - Big Endian */
        uint64_t reserved_636_639      : 4;
        uint64_t c_re_p3               : 12; /**< [635:624] C_re [3] */
        uint64_t c_im_p4               : 12; /**< [623:612] C_im [4] */
        uint64_t c_re_p4               : 12; /**< [611:600] C_re [4] */
        uint64_t c_im_p5               : 12; /**< [599:588] C_im [5] */
        uint64_t c_re_p5               : 12; /**< [587:576] C_re [5] */
#else /* Word 9 - Little Endian */
        uint64_t c_re_p5               : 12; /**< [587:576] C_re [5] */
        uint64_t c_im_p5               : 12; /**< [599:588] C_im [5] */
        uint64_t c_re_p4               : 12; /**< [611:600] C_re [4] */
        uint64_t c_im_p4               : 12; /**< [623:612] C_im [4] */
        uint64_t c_re_p3               : 12; /**< [635:624] C_re [3] */
        uint64_t reserved_636_639      : 4;
#endif /* Word 9 - End */
    } s;
    /* struct cavm_rmap_lte_modex_s_s cn; */
};

/**
 * Structure rmap_nr_modex_s
 *
 * RMAP 5G-NR Mode Structure
 * This structure defines the format of the job configuration of RMAP jobs when in
 * NR Mode.
 */
union cavm_rmap_nr_modex_s
{
    uint64_t u[13];
    struct cavm_rmap_nr_modex_s_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t phy_mode              : 1;  /**< [ 63: 63] 0: LTE.
                                                                 1: NR.
                                                                 Should be set to 1. */
        uint64_t reserved_60_62        : 3;
        uint64_t bypass_scrambler      : 1;  /**< [ 59: 59] If set to 1, bypass scrambling. */
        uint64_t bypass_modulator      : 1;  /**< [ 58: 58] If set, modulator/RS insertion and DFT are bypassed and TC1860 output is written
                                                                 to WR DMA. rs_insertion_enable = 0 and bypass_dft = 1 shall be set by SW. */
        uint64_t bypass_dft            : 1;  /**< [ 57: 57] If set to 1, DFT is bypassed.
                                                                 0 for NR DFTs-OFDM.
                                                                 1 for NR CP-OFDM. */
        uint64_t dft_standalone_flag   : 1;  /**< [ 56: 56] Flag to set the DFT engine as a standalone module. In this mode,
                                                                 both the functions before and after DFT/IDFT engine will be bypassed.
                                                                 The DFT/IDFT result will be DMAed directly to the output as in the one layer,
                                                                 no frequency hopping, allocation type 0 case.
                                                                   0: used as non-standalone module in the RMAP chain.
                                                                   1: used as standalone DFT/IDFT engine. */
        uint64_t reserved_53_55        : 3;
        uint64_t num_rb                : 9;  /**< [ 52: 44] The total number of RBs in a subframe. Valid range is [1,275]. */
        uint64_t reserved_43           : 1;
        uint64_t num_layers            : 3;  /**< [ 42: 40] Number of layers for PUSCH channel:
                                                                 0x1 = 1 Layer.
                                                                 0x2 = 2 Layers.
                                                                 0x4 = 4 layers 4 layers is only for slot-PUSCH (sTTI 7 OS) and subslot-PUSCH
                                                                 (sTTI 7 OS) as in Table 5.3.2A.2-1 of [R1].
                                                                 Others: reserved. */
        uint64_t mod_order             : 4;  /**< [ 39: 36] Modulation order:
                                                                 0x1 = {pi}/2 BPSK (5G-NR DFT-s-OFDM only).
                                                                 0x2 = QPSK.
                                                                 0x4 = 16-QAM.
                                                                 0x6 = 64-QAM.
                                                                 0x8 = 256-QAM. */
        uint64_t num_scalar_qam        : 4;  /**< [ 35: 32] Is the number of bits to control the configurable scalar in the modulator:
                                                                       I(Q)fix=round(2^(num_scalar_qam)*I(Q)),
                                                                 where I(Q)_flp are the column values from the Table 14 to Table 16, I(Q)_fix are
                                                                 the fixed-point numbers after the scaling.
                                                                 For pic_enable = 0: Range: [7,14].
                                                                 For pic_enable = 1: range is [7, 10]. */
        uint64_t dft_idft_flag         : 1;  /**< [ 31: 31] Flag to set the DFT or IDFT function:
                                                                   0: DFT.
                                                                   1: IDFT.
                                                                 Shall be set to 0 if dft_standalone_flag = 0.
                                                                 {0,1} for DFT only (dft_standalone_flag = 1) */
        uint64_t reserved_30           : 1;
        uint64_t ndft_indx             : 6;  /**< [ 29: 24] Indices for the NDFTs defined in the list of supported NDFTs. The mapping of the
                                                                 ndft_indx to the number of RBs and NDFT_size is shown in the Table: Mapping of
                                                                 [NDFT_INDX]
                                                                 Range is [0, 52].
                                                                   0 = NDFT = 12.
                                                                   1 = NDFT = 24.
                                                                   ....
                                                                   33 = NDFT = 1200.
                                                                   34 = NDFT = 1296.
                                                                   35 = NDFT = 1440.
                                                                   ....
                                                                   52 = NDFT = 3240. */
        uint64_t reserved_21_23        : 3;
        uint64_t rs_bits_last          : 5;  /**< [ 20: 16] Configurable parameter to control the output scaling at the last stage of DFT/IDFT.
                                                                 The last stage of DFT/IDFT would be right shifted by rs_bits_last.
                                                                 Range: [15,19].
                                                                 When set to 15, DFT has unit gain. */
        uint64_t reserved_0_15         : 16;
#else /* Word 0 - Little Endian */
        uint64_t reserved_0_15         : 16;
        uint64_t rs_bits_last          : 5;  /**< [ 20: 16] Configurable parameter to control the output scaling at the last stage of DFT/IDFT.
                                                                 The last stage of DFT/IDFT would be right shifted by rs_bits_last.
                                                                 Range: [15,19].
                                                                 When set to 15, DFT has unit gain. */
        uint64_t reserved_21_23        : 3;
        uint64_t ndft_indx             : 6;  /**< [ 29: 24] Indices for the NDFTs defined in the list of supported NDFTs. The mapping of the
                                                                 ndft_indx to the number of RBs and NDFT_size is shown in the Table: Mapping of
                                                                 [NDFT_INDX]
                                                                 Range is [0, 52].
                                                                   0 = NDFT = 12.
                                                                   1 = NDFT = 24.
                                                                   ....
                                                                   33 = NDFT = 1200.
                                                                   34 = NDFT = 1296.
                                                                   35 = NDFT = 1440.
                                                                   ....
                                                                   52 = NDFT = 3240. */
        uint64_t reserved_30           : 1;
        uint64_t dft_idft_flag         : 1;  /**< [ 31: 31] Flag to set the DFT or IDFT function:
                                                                   0: DFT.
                                                                   1: IDFT.
                                                                 Shall be set to 0 if dft_standalone_flag = 0.
                                                                 {0,1} for DFT only (dft_standalone_flag = 1) */
        uint64_t num_scalar_qam        : 4;  /**< [ 35: 32] Is the number of bits to control the configurable scalar in the modulator:
                                                                       I(Q)fix=round(2^(num_scalar_qam)*I(Q)),
                                                                 where I(Q)_flp are the column values from the Table 14 to Table 16, I(Q)_fix are
                                                                 the fixed-point numbers after the scaling.
                                                                 For pic_enable = 0: Range: [7,14].
                                                                 For pic_enable = 1: range is [7, 10]. */
        uint64_t mod_order             : 4;  /**< [ 39: 36] Modulation order:
                                                                 0x1 = {pi}/2 BPSK (5G-NR DFT-s-OFDM only).
                                                                 0x2 = QPSK.
                                                                 0x4 = 16-QAM.
                                                                 0x6 = 64-QAM.
                                                                 0x8 = 256-QAM. */
        uint64_t num_layers            : 3;  /**< [ 42: 40] Number of layers for PUSCH channel:
                                                                 0x1 = 1 Layer.
                                                                 0x2 = 2 Layers.
                                                                 0x4 = 4 layers 4 layers is only for slot-PUSCH (sTTI 7 OS) and subslot-PUSCH
                                                                 (sTTI 7 OS) as in Table 5.3.2A.2-1 of [R1].
                                                                 Others: reserved. */
        uint64_t reserved_43           : 1;
        uint64_t num_rb                : 9;  /**< [ 52: 44] The total number of RBs in a subframe. Valid range is [1,275]. */
        uint64_t reserved_53_55        : 3;
        uint64_t dft_standalone_flag   : 1;  /**< [ 56: 56] Flag to set the DFT engine as a standalone module. In this mode,
                                                                 both the functions before and after DFT/IDFT engine will be bypassed.
                                                                 The DFT/IDFT result will be DMAed directly to the output as in the one layer,
                                                                 no frequency hopping, allocation type 0 case.
                                                                   0: used as non-standalone module in the RMAP chain.
                                                                   1: used as standalone DFT/IDFT engine. */
        uint64_t bypass_dft            : 1;  /**< [ 57: 57] If set to 1, DFT is bypassed.
                                                                 0 for NR DFTs-OFDM.
                                                                 1 for NR CP-OFDM. */
        uint64_t bypass_modulator      : 1;  /**< [ 58: 58] If set, modulator/RS insertion and DFT are bypassed and TC1860 output is written
                                                                 to WR DMA. rs_insertion_enable = 0 and bypass_dft = 1 shall be set by SW. */
        uint64_t bypass_scrambler      : 1;  /**< [ 59: 59] If set to 1, bypass scrambling. */
        uint64_t reserved_60_62        : 3;
        uint64_t phy_mode              : 1;  /**< [ 63: 63] 0: LTE.
                                                                 1: NR.
                                                                 Should be set to 1. */
#endif /* Word 0 - End */
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 1 - Big Endian */
        uint64_t reserved_115_127      : 13;
        uint64_t ack_enc_cat           : 3;  /**< [114:112] The type of ACK bits:
                                                                 0: No ACK.
                                                                 1: number of ACK bits = 1.
                                                                 2: number of ACK bits = 2.
                                                                 3: number of ACK bits = [3,11].
                                                                 4: number of ACK bits \>= 12.
                                                                 Should be 0 if rs_cat = 2 (DMRS). */
        uint64_t reserved_107_111      : 5;
        uint64_t csi1_enc_cat          : 3;  /**< [106:104] The type of CSI1 bits :
                                                                 0: no CSI1 or if  [RS_CAT] = 2 (DMRS).
                                                                 1: number of CSI1 bits = 1.
                                                                 2: number of CSI1 bits = 2.
                                                                 3: number of CSI1 bits = [3,11].
                                                                 4: number of CSI1 bits \>= 12.
                                                                 Should be 0 if rs_cat = 2 (DMRS).
                                                                 Note: this field should be set to "0" if CSI1_M_RE is "0". */
        uint64_t reserved_99_103       : 5;
        uint64_t csi2_enc_cat          : 3;  /**< [ 98: 96] The type of CSI2 bits:
                                                                 0: no CSI2 or if  [RS_CAT] = 2 (DMRS).
                                                                 1: number of CSI2 bits = 1.
                                                                 2: number of CSI2 bits = 2.
                                                                 3: number of CSI2 bits = [3,11].
                                                                 4: number of CSI2 bits \>= 12.
                                                                 Should be 0 if rs_cat = 2 (DMRS).
                                                                 Note: this field should be set to "0" if CS21_M_RE is "0". */
        uint64_t reserved_91_95        : 5;
        uint64_t ack_rsv_d_re          : 11; /**< [ 90: 80] The step size for the ACK reserved REs in the case of ack_enc_cat  = 1 or 2. */
        uint64_t reserved_76_79        : 4;
        uint64_t ack_rsv_m_re          : 12; /**< [ 75: 64] The number of REs reserved for ACK bits in the case of ack_enc_cat = 1 or 2. */
#else /* Word 1 - Little Endian */
        uint64_t ack_rsv_m_re          : 12; /**< [ 75: 64] The number of REs reserved for ACK bits in the case of ack_enc_cat = 1 or 2. */
        uint64_t reserved_76_79        : 4;
        uint64_t ack_rsv_d_re          : 11; /**< [ 90: 80] The step size for the ACK reserved REs in the case of ack_enc_cat  = 1 or 2. */
        uint64_t reserved_91_95        : 5;
        uint64_t csi2_enc_cat          : 3;  /**< [ 98: 96] The type of CSI2 bits:
                                                                 0: no CSI2 or if  [RS_CAT] = 2 (DMRS).
                                                                 1: number of CSI2 bits = 1.
                                                                 2: number of CSI2 bits = 2.
                                                                 3: number of CSI2 bits = [3,11].
                                                                 4: number of CSI2 bits \>= 12.
                                                                 Should be 0 if rs_cat = 2 (DMRS).
                                                                 Note: this field should be set to "0" if CS21_M_RE is "0". */
        uint64_t reserved_99_103       : 5;
        uint64_t csi1_enc_cat          : 3;  /**< [106:104] The type of CSI1 bits :
                                                                 0: no CSI1 or if  [RS_CAT] = 2 (DMRS).
                                                                 1: number of CSI1 bits = 1.
                                                                 2: number of CSI1 bits = 2.
                                                                 3: number of CSI1 bits = [3,11].
                                                                 4: number of CSI1 bits \>= 12.
                                                                 Should be 0 if rs_cat = 2 (DMRS).
                                                                 Note: this field should be set to "0" if CSI1_M_RE is "0". */
        uint64_t reserved_107_111      : 5;
        uint64_t ack_enc_cat           : 3;  /**< [114:112] The type of ACK bits:
                                                                 0: No ACK.
                                                                 1: number of ACK bits = 1.
                                                                 2: number of ACK bits = 2.
                                                                 3: number of ACK bits = [3,11].
                                                                 4: number of ACK bits \>= 12.
                                                                 Should be 0 if rs_cat = 2 (DMRS). */
        uint64_t reserved_115_127      : 13;
#endif /* Word 1 - End */
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 2 - Big Endian */
        uint64_t reserved_191          : 1;
        uint64_t ack_d_re              : 11; /**< [190:180] The symbol-wise step size in RE for the ACK bits. */
        uint64_t ack_m_re              : 12; /**< [179:168] The symbol-wise number of REs for the ACK bits. When [ACK_ENC_CAT] = 0, this field must be 0. */
        uint64_t reserved_167          : 1;
        uint64_t ack_bit_offset        : 7;  /**< [166:160] Start bit offset in the first 128-bit word after input bit processing block of
                                                                 Section 2.5.2.1.
                                                                 Ignored when ack_enc_cat=0 or ack_m_re = 0.
                                                                 0 for ack_enc_cat = 1.
                                                                 {0,mod_order,2*mod_order} for ack_enc_cat = 2.
                                                                 [0,31] for ack_enc_cat = 3.
                                                                 [0,127] for ack_enc_cat = 4. */
        uint64_t reserved_159          : 1;
        uint64_t csi1_d_re             : 11; /**< [158:148] The symbol-wise step size in RE for the CSI1 bits. */
        uint64_t csi1_m_re             : 12; /**< [147:136] The symbol-wise number of REs for the CSI1 bits. When [CSI1_ENC_CAT] = 0, this field must be 0. */
        uint64_t reserved_135          : 1;
        uint64_t csi1_bit_offset       : 7;  /**< [134:128] Start bit offset in the first 128-bit word after input bit processing block of Section 2.5.2.1.
                                                                 Ignored when csi1_enc_cat = 0 or csi1_m_re = 0
                                                                 0 for csi1_enc_cat = 1.
                                                                 {0,mod_order,2*mod_order} for csi1_enc_cat = 2.
                                                                 [0,31] for csi1_enc_cat = 3.
                                                                 [0,127] for csi1_enc_cat = 4. */
#else /* Word 2 - Little Endian */
        uint64_t csi1_bit_offset       : 7;  /**< [134:128] Start bit offset in the first 128-bit word after input bit processing block of Section 2.5.2.1.
                                                                 Ignored when csi1_enc_cat = 0 or csi1_m_re = 0
                                                                 0 for csi1_enc_cat = 1.
                                                                 {0,mod_order,2*mod_order} for csi1_enc_cat = 2.
                                                                 [0,31] for csi1_enc_cat = 3.
                                                                 [0,127] for csi1_enc_cat = 4. */
        uint64_t reserved_135          : 1;
        uint64_t csi1_m_re             : 12; /**< [147:136] The symbol-wise number of REs for the CSI1 bits. When [CSI1_ENC_CAT] = 0, this field must be 0. */
        uint64_t csi1_d_re             : 11; /**< [158:148] The symbol-wise step size in RE for the CSI1 bits. */
        uint64_t reserved_159          : 1;
        uint64_t ack_bit_offset        : 7;  /**< [166:160] Start bit offset in the first 128-bit word after input bit processing block of
                                                                 Section 2.5.2.1.
                                                                 Ignored when ack_enc_cat=0 or ack_m_re = 0.
                                                                 0 for ack_enc_cat = 1.
                                                                 {0,mod_order,2*mod_order} for ack_enc_cat = 2.
                                                                 [0,31] for ack_enc_cat = 3.
                                                                 [0,127] for ack_enc_cat = 4. */
        uint64_t reserved_167          : 1;
        uint64_t ack_m_re              : 12; /**< [179:168] The symbol-wise number of REs for the ACK bits. When [ACK_ENC_CAT] = 0, this field must be 0. */
        uint64_t ack_d_re              : 11; /**< [190:180] The symbol-wise step size in RE for the ACK bits. */
        uint64_t reserved_191          : 1;
#endif /* Word 2 - End */
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 3 - Big Endian */
        uint64_t reserved_255          : 1;
        uint64_t csi2_d_re             : 11; /**< [254:244] The symbol-wise step size in RE for the CSI2 bits. */
        uint64_t csi2_m_re             : 12; /**< [243:232] The symbol-wise number of REs for the CSI2 bits. When [CSI2_ENC_CAT] = 0, this field must be 0. */
        uint64_t reserved_231          : 1;
        uint64_t csi2_bit_offset       : 7;  /**< [230:224] Start bit offset in the first 128-bit word after input bit processing block of Section 2.5.2.1.
                                                                 Ignored when csi2_enc_cat = 0 or csi2_m_re = 0
                                                                 0 for csi2_enc_cat = 1.
                                                                 {0,mod_order,2*mod_order} for csi2_enc_cat = 2.
                                                                 [0,31] for csi2_enc_cat = 3.
                                                                 [0,127] for csi2_enc_cat = 4. */
        uint64_t reserved_223          : 1;
        uint64_t ack_crc               : 1;  /**< [222:222] CRC value for ACK RE.
                                                                 0: CRC OK, 1 : CRC NOK.
                                                                 when ack_enc_cat = 0,1,2,3.
                                                                 or ack_enc_cat=4 and ack_reenc_mode = 0. */
        uint64_t csi1_crc              : 1;  /**< [221:221] CRC value for CSI1 RE.
                                                                 0: CRC OK, 1 : CRC NOK.
                                                                 when csi1_enc_cat = 0,1,2,3.
                                                                 or csi1_enc_cat = 4 and csi1_reenc_mode = 0. */
        uint64_t csi2_crc              : 1;  /**< [220:220] CRC value for CSI2 RE.
                                                                 0: CRC OK, 1 : CRC NOK.
                                                                 when csi2_enc_cat = 0,1,2,3.
                                                                 or csi2_enc_cat = 4 and csi2_reenc_mode = 0. */
        uint64_t ack_reenc_mode        : 1;  /**< [219:219] Bit packing mode for the reencoded ACK bits:
                                                                 0: plain bit stream of reencoded data bits packed one-by-one.
                                                                 1: CRC tagged in each Q_m (modulation order).
                                                                 only valid when ack_enc_cat = 4.
                                                                 0: CRC OK, 1 : CRC NOK. */
        uint64_t csi1_reenc_mode       : 1;  /**< [218:218] Bit packing mode for the reencoded CSI1 bits:
                                                                 0: plain bit stream of reencoded data bits packed one-by-one.
                                                                 1: CRC tagged in each Q_m (modulation order).
                                                                 only valid when csi1_enc_cat = 4.
                                                                 0: CRC OK, 1 : CRC NOK. */
        uint64_t csi2_reenc_mode       : 1;  /**< [217:217] Bit packing mode for the reencoded CSI2 bits:
                                                                 0: plain bit stream of reencoded data bits packed one-by-one.
                                                                 1: CRC tagged in each Q_m (modulation order).
                                                                 only valid when csi2_enc_cat = 4.
                                                                 0: CRC OK, 1 : CRC NOK. */
        uint64_t data_reenc_mode       : 1;  /**< [216:216] Bit packing mode for the reencoded DATA bits:
                                                                 0: plain bit stream of reencoded data bits packed one-by-one.
                                                                 1: CRC tagged in each Q_m (modulation order).
                                                                 0: CRC OK, 1 : CRC NOK. */
        uint64_t reserved_212_215      : 4;
        uint64_t data_m_re             : 12; /**< [211:200] The symbol-wise number of REs for the data bits. */
        uint64_t reserved_199          : 1;
        uint64_t data_bit_offset       : 7;  /**< [198:192] Start bit offset in the first 128-bit word of data bits. Valid range is [0,127].
                                                                 Note: This field should be set to "0" if DATA_M_RE is "0". */
#else /* Word 3 - Little Endian */
        uint64_t data_bit_offset       : 7;  /**< [198:192] Start bit offset in the first 128-bit word of data bits. Valid range is [0,127].
                                                                 Note: This field should be set to "0" if DATA_M_RE is "0". */
        uint64_t reserved_199          : 1;
        uint64_t data_m_re             : 12; /**< [211:200] The symbol-wise number of REs for the data bits. */
        uint64_t reserved_212_215      : 4;
        uint64_t data_reenc_mode       : 1;  /**< [216:216] Bit packing mode for the reencoded DATA bits:
                                                                 0: plain bit stream of reencoded data bits packed one-by-one.
                                                                 1: CRC tagged in each Q_m (modulation order).
                                                                 0: CRC OK, 1 : CRC NOK. */
        uint64_t csi2_reenc_mode       : 1;  /**< [217:217] Bit packing mode for the reencoded CSI2 bits:
                                                                 0: plain bit stream of reencoded data bits packed one-by-one.
                                                                 1: CRC tagged in each Q_m (modulation order).
                                                                 only valid when csi2_enc_cat = 4.
                                                                 0: CRC OK, 1 : CRC NOK. */
        uint64_t csi1_reenc_mode       : 1;  /**< [218:218] Bit packing mode for the reencoded CSI1 bits:
                                                                 0: plain bit stream of reencoded data bits packed one-by-one.
                                                                 1: CRC tagged in each Q_m (modulation order).
                                                                 only valid when csi1_enc_cat = 4.
                                                                 0: CRC OK, 1 : CRC NOK. */
        uint64_t ack_reenc_mode        : 1;  /**< [219:219] Bit packing mode for the reencoded ACK bits:
                                                                 0: plain bit stream of reencoded data bits packed one-by-one.
                                                                 1: CRC tagged in each Q_m (modulation order).
                                                                 only valid when ack_enc_cat = 4.
                                                                 0: CRC OK, 1 : CRC NOK. */
        uint64_t csi2_crc              : 1;  /**< [220:220] CRC value for CSI2 RE.
                                                                 0: CRC OK, 1 : CRC NOK.
                                                                 when csi2_enc_cat = 0,1,2,3.
                                                                 or csi2_enc_cat = 4 and csi2_reenc_mode = 0. */
        uint64_t csi1_crc              : 1;  /**< [221:221] CRC value for CSI1 RE.
                                                                 0: CRC OK, 1 : CRC NOK.
                                                                 when csi1_enc_cat = 0,1,2,3.
                                                                 or csi1_enc_cat = 4 and csi1_reenc_mode = 0. */
        uint64_t ack_crc               : 1;  /**< [222:222] CRC value for ACK RE.
                                                                 0: CRC OK, 1 : CRC NOK.
                                                                 when ack_enc_cat = 0,1,2,3.
                                                                 or ack_enc_cat=4 and ack_reenc_mode = 0. */
        uint64_t reserved_223          : 1;
        uint64_t csi2_bit_offset       : 7;  /**< [230:224] Start bit offset in the first 128-bit word after input bit processing block of Section 2.5.2.1.
                                                                 Ignored when csi2_enc_cat = 0 or csi2_m_re = 0
                                                                 0 for csi2_enc_cat = 1.
                                                                 {0,mod_order,2*mod_order} for csi2_enc_cat = 2.
                                                                 [0,31] for csi2_enc_cat = 3.
                                                                 [0,127] for csi2_enc_cat = 4. */
        uint64_t reserved_231          : 1;
        uint64_t csi2_m_re             : 12; /**< [243:232] The symbol-wise number of REs for the CSI2 bits. When [CSI2_ENC_CAT] = 0, this field must be 0. */
        uint64_t csi2_d_re             : 11; /**< [254:244] The symbol-wise step size in RE for the CSI2 bits. */
        uint64_t reserved_255          : 1;
#endif /* Word 3 - End */
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 4 - Big Endian */
        uint64_t reserved_312_319      : 8;
        uint64_t scrambling_offset     : 24; /**< [311:288] Starting bit location of scrambling sequences in number of bits beyond the
                                                                 initial 1600 bits from the sequence generator.
                                                                 Scrambling sequence is applied starting from (1600+scrambling_offset)-th bit.
                                                                 e.g. the first symbol job must set this value as 0 while the second symbol job
                                                                 must set this value as
                                                                 mod_order*num_layers*(number of non-RS symbols in symbol 0). */
        uint64_t reserved_287          : 1;
        uint64_t scrambling_cinit      : 31; /**< [286:256] Initial value of the second m-sequence of the scrambler. See section 7.2 of [R1].
                                                                 Valid range is [0, 2^31-1]. */
#else /* Word 4 - Little Endian */
        uint64_t scrambling_cinit      : 31; /**< [286:256] Initial value of the second m-sequence of the scrambler. See section 7.2 of [R1].
                                                                 Valid range is [0, 2^31-1]. */
        uint64_t reserved_287          : 1;
        uint64_t scrambling_offset     : 24; /**< [311:288] Starting bit location of scrambling sequences in number of bits beyond the
                                                                 initial 1600 bits from the sequence generator.
                                                                 Scrambling sequence is applied starting from (1600+scrambling_offset)-th bit.
                                                                 e.g. the first symbol job must set this value as 0 while the second symbol job
                                                                 must set this value as
                                                                 mod_order*num_layers*(number of non-RS symbols in symbol 0). */
        uint64_t reserved_312_319      : 8;
#endif /* Word 4 - End */
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 5 - Big Endian */
        uint64_t rs_insertion_enable   : 1;  /**< [383:383] RS Insertion Enable/Disable:
                                                                 0x0 = Disable (all RS insertion related parameters are ignored).
                                                                 0x1 = Enable RS Insertion. */
        uint64_t reserved_382          : 1;
        uint64_t rs_cat                : 2;  /**< [381:380] Category type for the reference symbols (RS):
                                                                 0x0 = PTRS for CP-OFDM.
                                                                 0x1 = PTRS for DFT-s-OFDM.
                                                                 0x2 = DMRS for CP-OFDM.
                                                                 0x3 = Reserved. */
        uint64_t reserved_379          : 1;
        uint64_t rs_mapping_type       : 3;  /**< [378:376] Mapping type for each RS category.

                                                                 For [RS_CAT] = 0 (PTRS for CP-OFDM) [0,1,2]:
                                                                 0x0 for distributed PTRS in PRB.
                                                                 0x1 for distributed PTRS in VRB.
                                                                 0x2 for localized PTRS.

                                                                 For rs_cat = 1 (PTRS for DFT-s-OFDM): [0,5].
                                                                 For rs_cat = 2 (DMRS for CP-OFDM: [0,7]. */
        uint64_t ptrs_dfts_ofdm_delta  : 1;  /**< [375:375] Delta {0,1} of the PTRS allocation for the DFT-s-OFDM case when [RS_CAT] = 1 and
                                                                 rs_mapping_type = 5. */
        uint64_t reserved_373_374      : 2;
        uint64_t ptrs_dist_start_rb_idx : 9; /**< [372:364] The start RB index of PUSCH allocation. Valid range is [0,274]. */
        uint64_t reserved_362_363      : 2;
        uint64_t ptrs_dist_rb_offset_0 : 2;  /**< [361:360] RB offset of the PTRS allocation for the CP-OFDM case. Valid range
                                                                 is [0, ptrs_dist_rb_step-1]. */
        uint64_t reserved_358_359      : 2;
        uint64_t ptrs_dist_rb_offset_1 : 2;  /**< [357:356] RB offset of the PTRS allocation for the CP-OFDM case. This field is valid only
                                                                 when [RS_CAT] = 0 and rs_mapping_type = 1. Valid range is [0, ptrs_dist_rb_step-1]. */
        uint64_t reserved_355          : 1;
        uint64_t ptrs_dist_rb_step     : 3;  /**< [354:352] RB step of PTRS allocation for CP-OFDM case. Valid range is {2,4}. */
        uint64_t reserved_351          : 1;
        uint64_t ptrs_dist_vrb_bundle_size : 3;/**< [350:348] L, VRB bundle size. Valid range is {2,4}. */
        uint64_t reserved_347          : 1;
        uint64_t ptrs_dist_num_ports   : 3;  /**< [346:344] The total number of antenna ports in the CP-OFDM case. It is only valid for CP-OFDM.
                                                                 Valid range is [1,6]. */
        uint64_t ptrs_dist_re_offset_0 : 4;  /**< [343:340] RE offset of the PTRS for CP-OFDM case for antenna port 0. This field is set
                                                                 according to Table 6.4.1.2.2.1-1 of [R6].

                                                                 _ k_ref^RE[i] in {0,...,11} valid for i = 0,1,...,[PTRS_DIST_NUM_PORTS]-1.

                                                                 _ k_ref^RE[i] \< k_ref^RE[i+1] for i=0,1,...,[PTRS_DIST_NUM_PORTS]-2. */
        uint64_t ptrs_dist_re_offset_1 : 4;  /**< [339:336] RE offset of the PTRS for CP-OFDM case for antenna port 1. See
                                                                 [PTRS_DIST_RE_OFFSET_0]. */
        uint64_t ptrs_dist_re_offset_2 : 4;  /**< [335:332] RE offset of the PTRS for CP-OFDM case for antenna port 2. See
                                                                 [PTRS_DIST_RE_OFFSET_0]. */
        uint64_t ptrs_dist_re_offset_3 : 4;  /**< [331:328] RE offset of the PTRS for CP-OFDM case for antenna port 3. See
                                                                 [PTRS_DIST_RE_OFFSET_0]. */
        uint64_t ptrs_dist_re_offset_4 : 4;  /**< [327:324] RE offset of the PTRS for CP-OFDM case for antenna port 4. See
                                                                 [PTRS_DIST_RE_OFFSET_0]. */
        uint64_t ptrs_dist_re_offset_5 : 4;  /**< [323:320] RE offset of the PTRS for CP-OFDM case for antenna port 5. See
                                                                 [PTRS_DIST_RE_OFFSET_0]. */
#else /* Word 5 - Little Endian */
        uint64_t ptrs_dist_re_offset_5 : 4;  /**< [323:320] RE offset of the PTRS for CP-OFDM case for antenna port 5. See
                                                                 [PTRS_DIST_RE_OFFSET_0]. */
        uint64_t ptrs_dist_re_offset_4 : 4;  /**< [327:324] RE offset of the PTRS for CP-OFDM case for antenna port 4. See
                                                                 [PTRS_DIST_RE_OFFSET_0]. */
        uint64_t ptrs_dist_re_offset_3 : 4;  /**< [331:328] RE offset of the PTRS for CP-OFDM case for antenna port 3. See
                                                                 [PTRS_DIST_RE_OFFSET_0]. */
        uint64_t ptrs_dist_re_offset_2 : 4;  /**< [335:332] RE offset of the PTRS for CP-OFDM case for antenna port 2. See
                                                                 [PTRS_DIST_RE_OFFSET_0]. */
        uint64_t ptrs_dist_re_offset_1 : 4;  /**< [339:336] RE offset of the PTRS for CP-OFDM case for antenna port 1. See
                                                                 [PTRS_DIST_RE_OFFSET_0]. */
        uint64_t ptrs_dist_re_offset_0 : 4;  /**< [343:340] RE offset of the PTRS for CP-OFDM case for antenna port 0. This field is set
                                                                 according to Table 6.4.1.2.2.1-1 of [R6].

                                                                 _ k_ref^RE[i] in {0,...,11} valid for i = 0,1,...,[PTRS_DIST_NUM_PORTS]-1.

                                                                 _ k_ref^RE[i] \< k_ref^RE[i+1] for i=0,1,...,[PTRS_DIST_NUM_PORTS]-2. */
        uint64_t ptrs_dist_num_ports   : 3;  /**< [346:344] The total number of antenna ports in the CP-OFDM case. It is only valid for CP-OFDM.
                                                                 Valid range is [1,6]. */
        uint64_t reserved_347          : 1;
        uint64_t ptrs_dist_vrb_bundle_size : 3;/**< [350:348] L, VRB bundle size. Valid range is {2,4}. */
        uint64_t reserved_351          : 1;
        uint64_t ptrs_dist_rb_step     : 3;  /**< [354:352] RB step of PTRS allocation for CP-OFDM case. Valid range is {2,4}. */
        uint64_t reserved_355          : 1;
        uint64_t ptrs_dist_rb_offset_1 : 2;  /**< [357:356] RB offset of the PTRS allocation for the CP-OFDM case. This field is valid only
                                                                 when [RS_CAT] = 0 and rs_mapping_type = 1. Valid range is [0, ptrs_dist_rb_step-1]. */
        uint64_t reserved_358_359      : 2;
        uint64_t ptrs_dist_rb_offset_0 : 2;  /**< [361:360] RB offset of the PTRS allocation for the CP-OFDM case. Valid range
                                                                 is [0, ptrs_dist_rb_step-1]. */
        uint64_t reserved_362_363      : 2;
        uint64_t ptrs_dist_start_rb_idx : 9; /**< [372:364] The start RB index of PUSCH allocation. Valid range is [0,274]. */
        uint64_t reserved_373_374      : 2;
        uint64_t ptrs_dfts_ofdm_delta  : 1;  /**< [375:375] Delta {0,1} of the PTRS allocation for the DFT-s-OFDM case when [RS_CAT] = 1 and
                                                                 rs_mapping_type = 5. */
        uint64_t rs_mapping_type       : 3;  /**< [378:376] Mapping type for each RS category.

                                                                 For [RS_CAT] = 0 (PTRS for CP-OFDM) [0,1,2]:
                                                                 0x0 for distributed PTRS in PRB.
                                                                 0x1 for distributed PTRS in VRB.
                                                                 0x2 for localized PTRS.

                                                                 For rs_cat = 1 (PTRS for DFT-s-OFDM): [0,5].
                                                                 For rs_cat = 2 (DMRS for CP-OFDM: [0,7]. */
        uint64_t reserved_379          : 1;
        uint64_t rs_cat                : 2;  /**< [381:380] Category type for the reference symbols (RS):
                                                                 0x0 = PTRS for CP-OFDM.
                                                                 0x1 = PTRS for DFT-s-OFDM.
                                                                 0x2 = DMRS for CP-OFDM.
                                                                 0x3 = Reserved. */
        uint64_t reserved_382          : 1;
        uint64_t rs_insertion_enable   : 1;  /**< [383:383] RS Insertion Enable/Disable:
                                                                 0x0 = Disable (all RS insertion related parameters are ignored).
                                                                 0x1 = Enable RS Insertion. */
#endif /* Word 5 - End */
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 6 - Big Endian */
        uint64_t reserved_444_447      : 4;
        uint64_t ptrs_loc_re_offset_0  : 12; /**< [443:432] This is the offset of REs for each group of PTRS insertion in the case of
                                                                 localized allocation. This is only valid for R16 of CP-OFDM.

                                                                 Constraints:
                                                                 \<pre\>
                                                                 [PTRS_LOC_RE_OFFSET_0] E{0,,,,,3299}
                                                                 [PTRS_LOC_RE_OFFSET_1] E{0,,,,,3299}

                                                                 if ([PTRS_LOC_RE_LENGTH_1] \> 0 ) {
                                                                     [PTRS_LOC_RE_OFFSET_1] \> [PTRS_LOC_RE_OFFSET_0]
                                                                   }
                                                                 \</pre\> */
        uint64_t reserved_428_431      : 4;
        uint64_t ptrs_loc_re_offset_1  : 12; /**< [427:416] See [PTRS_LOC_RE_OFFSET_0].
                                                                 Ignored if [PTRS_LOC_RE_LENGTH_1] = 0. */
        uint64_t reserved_409_415      : 7;
        uint64_t ptrs_loc_re_length_0  : 9;  /**< [408:400] RE Length in each burst of PTRS for localized PTRS allocation in CP-OFDM.

                                                                 Constraints:
                                                                 \<pre\>
                                                                 [PTRS_LOC_RE_LENGTH_0] E{1,,,,,,511}
                                                                 [PTRS_LOC_RE_LENGTH_1] E{0,,,,,,511}

                                                                 [PTRS_LOC_RE_OFFSET_0] + [PTRS_LOC_RE_LENGTH_0] \<= [NUM_RB]*12;
                                                                 [PTRS_LOC_RE_OFFSET_1] + [PTRS_LOC_RE_LENGTH_1] \<= [NUM_RB]*12;
                                                                 if ([PTRS_LOC_RE_LENGTH_1] \> 0 ) {
                                                                     [PTRS_LOC_RE_OFFSET_0] + [PTRS_LOC_RE_LENGTH_0] \<= [PTRS_LOC_RE_OFFSET_1];
                                                                   }
                                                                 \</pre\> */
        uint64_t reserved_393_399      : 7;
        uint64_t ptrs_loc_re_length_1  : 9;  /**< [392:384] See [PTRS_LOC_RE_LENGTH_0] */
#else /* Word 6 - Little Endian */
        uint64_t ptrs_loc_re_length_1  : 9;  /**< [392:384] See [PTRS_LOC_RE_LENGTH_0] */
        uint64_t reserved_393_399      : 7;
        uint64_t ptrs_loc_re_length_0  : 9;  /**< [408:400] RE Length in each burst of PTRS for localized PTRS allocation in CP-OFDM.

                                                                 Constraints:
                                                                 \<pre\>
                                                                 [PTRS_LOC_RE_LENGTH_0] E{1,,,,,,511}
                                                                 [PTRS_LOC_RE_LENGTH_1] E{0,,,,,,511}

                                                                 [PTRS_LOC_RE_OFFSET_0] + [PTRS_LOC_RE_LENGTH_0] \<= [NUM_RB]*12;
                                                                 [PTRS_LOC_RE_OFFSET_1] + [PTRS_LOC_RE_LENGTH_1] \<= [NUM_RB]*12;
                                                                 if ([PTRS_LOC_RE_LENGTH_1] \> 0 ) {
                                                                     [PTRS_LOC_RE_OFFSET_0] + [PTRS_LOC_RE_LENGTH_0] \<= [PTRS_LOC_RE_OFFSET_1];
                                                                   }
                                                                 \</pre\> */
        uint64_t reserved_409_415      : 7;
        uint64_t ptrs_loc_re_offset_1  : 12; /**< [427:416] See [PTRS_LOC_RE_OFFSET_0].
                                                                 Ignored if [PTRS_LOC_RE_LENGTH_1] = 0. */
        uint64_t reserved_428_431      : 4;
        uint64_t ptrs_loc_re_offset_0  : 12; /**< [443:432] This is the offset of REs for each group of PTRS insertion in the case of
                                                                 localized allocation. This is only valid for R16 of CP-OFDM.

                                                                 Constraints:
                                                                 \<pre\>
                                                                 [PTRS_LOC_RE_OFFSET_0] E{0,,,,,3299}
                                                                 [PTRS_LOC_RE_OFFSET_1] E{0,,,,,3299}

                                                                 if ([PTRS_LOC_RE_LENGTH_1] \> 0 ) {
                                                                     [PTRS_LOC_RE_OFFSET_1] \> [PTRS_LOC_RE_OFFSET_0]
                                                                   }
                                                                 \</pre\> */
        uint64_t reserved_444_447      : 4;
#endif /* Word 6 - End */
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 7 - Big Endian */
        uint64_t num_cb2s              : 8;  /**< [511:504] The number of CBs that has the size of cb2_rm_size. Range: [0,255]. */
        uint64_t reserved_500_503      : 4;
        uint64_t cb2_m_re              : 12; /**< [499:488] The number of REs in CB0 to be mapped in current job.
                                                                 Range: [1,3300]. */
        uint64_t num_cb1s              : 8;  /**< [487:480] The number of CBs that has the size of cb1_rm_size.
                                                                 It already includes CRC bits in the DMA stream if existing.
                                                                 The case that num_cb1s = 0 but num_cb2s !=0 is not allowed.
                                                                 Range: [0,255]. */
        uint64_t cb1_m_re              : 12; /**< [479:468] The number of REs in CB0 to be mapped in current job.
                                                                 Range: [1,3300]. */
        uint64_t cb0_m_re              : 12; /**< [467:456] The number of REs in CB0 to be mapped in current job.
                                                                 Range: [1,3300]. */
        uint64_t reserved_450_455      : 6;
        uint64_t crc_nulling_enable    : 1;  /**< [449:449] 0: CRC nulling feature is disabled.
                                                                 1: CRC_nulling feature is enabled.
                                                                 When this value is set to 0, the followings shall be set.
                                                                 ack_crc = 0.
                                                                 csi1_crc = 0.
                                                                 csi2_crc = 0.
                                                                 data_reenc_mode = 0. */
        uint64_t cb_concat_enable      : 1;  /**< [448:448] 0: CB concatenation feature is disabled.
                                                                 1: CB concatenation feature is enabled. */
#else /* Word 7 - Little Endian */
        uint64_t cb_concat_enable      : 1;  /**< [448:448] 0: CB concatenation feature is disabled.
                                                                 1: CB concatenation feature is enabled. */
        uint64_t crc_nulling_enable    : 1;  /**< [449:449] 0: CRC nulling feature is disabled.
                                                                 1: CRC_nulling feature is enabled.
                                                                 When this value is set to 0, the followings shall be set.
                                                                 ack_crc = 0.
                                                                 csi1_crc = 0.
                                                                 csi2_crc = 0.
                                                                 data_reenc_mode = 0. */
        uint64_t reserved_450_455      : 6;
        uint64_t cb0_m_re              : 12; /**< [467:456] The number of REs in CB0 to be mapped in current job.
                                                                 Range: [1,3300]. */
        uint64_t cb1_m_re              : 12; /**< [479:468] The number of REs in CB0 to be mapped in current job.
                                                                 Range: [1,3300]. */
        uint64_t num_cb1s              : 8;  /**< [487:480] The number of CBs that has the size of cb1_rm_size.
                                                                 It already includes CRC bits in the DMA stream if existing.
                                                                 The case that num_cb1s = 0 but num_cb2s !=0 is not allowed.
                                                                 Range: [0,255]. */
        uint64_t cb2_m_re              : 12; /**< [499:488] The number of REs in CB0 to be mapped in current job.
                                                                 Range: [1,3300]. */
        uint64_t reserved_500_503      : 4;
        uint64_t num_cb2s              : 8;  /**< [511:504] The number of CBs that has the size of cb2_rm_size. Range: [0,255]. */
#endif /* Word 7 - End */
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 8 - Big Endian */
        uint64_t q_threshold_low       : 8;  /**< [575:568] The threshold used for protection of small qvar_report(k) values. */
        uint64_t foc_filter_enable     : 1;  /**< [567:567] Enable FOC filter.
                                                                 1: FOC is enabled only under pic_enable = 1. */
        uint64_t reserved_564_566      : 3;
        uint64_t rshft_bits_pr         : 4;  /**< [563:560] The number of bits at right shift of the phase rotation filter. Range is [0,15]. */
        uint64_t c_re_m5               : 12; /**< [559:548] C_re [-5] */
        uint64_t c_im_m5               : 12; /**< [547:536] C_im [-5] */
        uint64_t scalar_uci            : 8;  /**< [535:528] The scalar used to scale the qvar_report for the UCI bits.
                                                                 Range is [1,128]. */
        uint64_t reserved_523_527      : 5;
        uint64_t err_var_in_csi2       : 1;  /**< [522:522] Error Variance indication for CSI2 */
        uint64_t err_var_in_csi1       : 1;  /**< [521:521] Error Variance indication for CSI1 */
        uint64_t err_var_in_ack        : 1;  /**< [520:520] Error Variance indication for ACK */
        uint64_t reserved_514_519      : 6;
        uint64_t pic_enable            : 1;  /**< [513:513] 0: PIC related features in TC1860 are not enabled. All the qvar_report outputs 0s.
                                                                 1: PIC related features in TC1860 are enabled.
                                                                 If pic_enable = 1, parameters shall be set as follows:
                                                                 - crc_nulling_enable = 0.
                                                                 - cb_concat_enable = 1.
                                                                 - cb_header_enable = 1.
                                                                 - data_reenc_mode = 0.
                                                                 - ack_crc = 0.
                                                                 - csi1_crc = 0.
                                                                 - csi2_crc = 0.
                                                                 - dft_pass = 0. (LTE). */
        uint64_t cb_header_en          : 1;  /**< [512:512] 0: CB Header is disabled;
                                                                 1: The first 128-bit word of data stream of each CB is header. */
#else /* Word 8 - Little Endian */
        uint64_t cb_header_en          : 1;  /**< [512:512] 0: CB Header is disabled;
                                                                 1: The first 128-bit word of data stream of each CB is header. */
        uint64_t pic_enable            : 1;  /**< [513:513] 0: PIC related features in TC1860 are not enabled. All the qvar_report outputs 0s.
                                                                 1: PIC related features in TC1860 are enabled.
                                                                 If pic_enable = 1, parameters shall be set as follows:
                                                                 - crc_nulling_enable = 0.
                                                                 - cb_concat_enable = 1.
                                                                 - cb_header_enable = 1.
                                                                 - data_reenc_mode = 0.
                                                                 - ack_crc = 0.
                                                                 - csi1_crc = 0.
                                                                 - csi2_crc = 0.
                                                                 - dft_pass = 0. (LTE). */
        uint64_t reserved_514_519      : 6;
        uint64_t err_var_in_ack        : 1;  /**< [520:520] Error Variance indication for ACK */
        uint64_t err_var_in_csi1       : 1;  /**< [521:521] Error Variance indication for CSI1 */
        uint64_t err_var_in_csi2       : 1;  /**< [522:522] Error Variance indication for CSI2 */
        uint64_t reserved_523_527      : 5;
        uint64_t scalar_uci            : 8;  /**< [535:528] The scalar used to scale the qvar_report for the UCI bits.
                                                                 Range is [1,128]. */
        uint64_t c_im_m5               : 12; /**< [547:536] C_im [-5] */
        uint64_t c_re_m5               : 12; /**< [559:548] C_re [-5] */
        uint64_t rshft_bits_pr         : 4;  /**< [563:560] The number of bits at right shift of the phase rotation filter. Range is [0,15]. */
        uint64_t reserved_564_566      : 3;
        uint64_t foc_filter_enable     : 1;  /**< [567:567] Enable FOC filter.
                                                                 1: FOC is enabled only under pic_enable = 1. */
        uint64_t q_threshold_low       : 8;  /**< [575:568] The threshold used for protection of small qvar_report(k) values. */
#endif /* Word 8 - End */
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 9 - Big Endian */
        uint64_t reserved_636_639      : 4;
        uint64_t c_re_m4               : 12; /**< [635:624] C_re [-4] */
        uint64_t c_im_m4               : 12; /**< [623:612] C_im [-4] */
        uint64_t c_re_m3               : 12; /**< [611:600] C_im [-3] */
        uint64_t c_im_m3               : 12; /**< [599:588] C_im [-3] */
        uint64_t c_re_m2               : 12; /**< [587:576] C_im [-2] */
#else /* Word 9 - Little Endian */
        uint64_t c_re_m2               : 12; /**< [587:576] C_im [-2] */
        uint64_t c_im_m3               : 12; /**< [599:588] C_im [-3] */
        uint64_t c_re_m3               : 12; /**< [611:600] C_im [-3] */
        uint64_t c_im_m4               : 12; /**< [623:612] C_im [-4] */
        uint64_t c_re_m4               : 12; /**< [635:624] C_re [-4] */
        uint64_t reserved_636_639      : 4;
#endif /* Word 9 - End */
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 10 - Big Endian */
        uint64_t reserved_700_703      : 4;
        uint64_t c_im_m2               : 12; /**< [699:688] C_im [-2] */
        uint64_t c_re_m1               : 12; /**< [687:676] C_re [-1] */
        uint64_t c_im_m1               : 12; /**< [675:664] C_im [-1] */
        uint64_t c_im_m0               : 12; /**< [663:652] C_im [0] */
        uint64_t c_re_m0               : 12; /**< [651:640] C_re [0] */
#else /* Word 10 - Little Endian */
        uint64_t c_re_m0               : 12; /**< [651:640] C_re [0] */
        uint64_t c_im_m0               : 12; /**< [663:652] C_im [0] */
        uint64_t c_im_m1               : 12; /**< [675:664] C_im [-1] */
        uint64_t c_re_m1               : 12; /**< [687:676] C_re [-1] */
        uint64_t c_im_m2               : 12; /**< [699:688] C_im [-2] */
        uint64_t reserved_700_703      : 4;
#endif /* Word 10 - End */
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 11 - Big Endian */
        uint64_t reserved_764_767      : 4;
        uint64_t c_im_p1               : 12; /**< [763:752] C_im [1] */
        uint64_t c_re_p1               : 12; /**< [751:740] C_re [1] */
        uint64_t c_im_p2               : 12; /**< [739:728] C_im [2] */
        uint64_t c_re_p2               : 12; /**< [727:716] C_re [2] */
        uint64_t c_im_p3               : 12; /**< [715:704] C_im [3] */
#else /* Word 11 - Little Endian */
        uint64_t c_im_p3               : 12; /**< [715:704] C_im [3] */
        uint64_t c_re_p2               : 12; /**< [727:716] C_re [2] */
        uint64_t c_im_p2               : 12; /**< [739:728] C_im [2] */
        uint64_t c_re_p1               : 12; /**< [751:740] C_re [1] */
        uint64_t c_im_p1               : 12; /**< [763:752] C_im [1] */
        uint64_t reserved_764_767      : 4;
#endif /* Word 11 - End */
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 12 - Big Endian */
        uint64_t reserved_828_831      : 4;
        uint64_t c_re_p3               : 12; /**< [827:816] C_re [3] */
        uint64_t c_im_p4               : 12; /**< [815:804] C_im [4] */
        uint64_t c_re_p4               : 12; /**< [803:792] C_re [4] */
        uint64_t c_im_p5               : 12; /**< [791:780] C_im [5] */
        uint64_t c_re_p5               : 12; /**< [779:768] C_re [5] */
#else /* Word 12 - Little Endian */
        uint64_t c_re_p5               : 12; /**< [779:768] C_re [5] */
        uint64_t c_im_p5               : 12; /**< [791:780] C_im [5] */
        uint64_t c_re_p4               : 12; /**< [803:792] C_re [4] */
        uint64_t c_im_p4               : 12; /**< [815:804] C_im [4] */
        uint64_t c_re_p3               : 12; /**< [827:816] C_re [3] */
        uint64_t reserved_828_831      : 4;
#endif /* Word 12 - End */
    } s;
    /* struct cavm_rmap_nr_modex_s_s cn; */
};

/**
 * Structure rmap_tc_lte_config_err_s
 *
 * RMAP TC LTE Mode Configuration Error Structure
 * When RMAP()_AB(0..1)_TC_ERROR[CORE_ERR] is set, this field indicates which
 * configuration parameter was set incorrectly. Each bit maps to a different error.
 */
union cavm_rmap_tc_lte_config_err_s
{
    uint64_t u;
    struct cavm_rmap_tc_lte_config_err_s_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_20_63        : 44;
        uint64_t invalid_symb_byte_aligned : 1;/**< [ 19: 19] Invalid range for RMAP_LTE_MODEX_S[SYMB_BYTE_ALIGNED]. */
        uint64_t invalid_scrambling_init : 1;/**< [ 18: 18] Invalid range for scrambling_init. */
        uint64_t invalid_bypass_scrambling : 1;/**< [ 17: 17] Invalid range for bypass_scrambling. */
        uint64_t invalid_tti2_ack_pos  : 1;  /**< [ 16: 16] Invalid range for tti2_ack_pos. */
        uint64_t invalid_ttimode       : 1;  /**< [ 15: 15] Invalid range for ttimode. */
        uint64_t invalid_cp_mode       : 1;  /**< [ 14: 14] Invalid range for RMAP_LTE_MODEX_S[CP_MODE]. */
        uint64_t invalid_ri_enc_cat    : 1;  /**< [ 13: 13] Invalid range for RMAP_LTE_MODEX_S[RI_ENC_CAT]. */
        uint64_t invalid_ack_enc_cat   : 1;  /**< [ 12: 12] Invalid range for RMAP_LTE_MODEX_S[ACK_ENC_CAT]. */
        uint64_t reserved_11           : 1;
        uint64_t invalid_r_prime_mux   : 1;  /**< [ 10: 10] Invalid range for [R_PRIME_MUX]. */
        uint64_t invalid_q_prime_ack   : 1;  /**< [  9:  9] Invalid range for [Q_PRIM_ACK]. */
        uint64_t invalid_q_prime_ri    : 1;  /**< [  8:  8] Invalid range for q_prime_ri. */
        uint64_t invalid_q_prime_cqi   : 1;  /**< [  7:  7] Invalid range for q_prime_cqi. */
        uint64_t invalid_num_layers    : 1;  /**< [  6:  6] Invalid range for RMAP_LTE_MODEX_S[NUM_LAYERS]. */
        uint64_t invalid_mod_order     : 1;  /**< [  5:  5] Invalid range for RMAP_LTE_MODEX_S[MOD_ORDER]. */
        uint64_t invalid_g_prime       : 1;  /**< [  4:  4] Invalid range for RMAP_LTE_MODEX_S[G_PRIME]. */
        uint64_t r_prime_mux           : 1;  /**< [  3:  3] Software must constrain
                                                                 [R_PRIME_MUX] * n_symb_pusch \<= (RMAP_LTE_MODEX_S[G_PRIME] + ri_prime). */
        uint64_t invalid_n_symb_pusch  : 1;  /**< [  2:  2] Invalid range for n_symb_pusch. */
        uint64_t q_prim_ack            : 1;  /**< [  1:  1] Software must constrain [Q_PRIM_ACK] \<= [R_PRIME_MUX] * 4. */
        uint64_t q_prim_ri             : 1;  /**< [  0:  0] Software must constrain [Q_PRIM_RI] \<= [R_PRIME_MUX] * 4. */
#else /* Word 0 - Little Endian */
        uint64_t q_prim_ri             : 1;  /**< [  0:  0] Software must constrain [Q_PRIM_RI] \<= [R_PRIME_MUX] * 4. */
        uint64_t q_prim_ack            : 1;  /**< [  1:  1] Software must constrain [Q_PRIM_ACK] \<= [R_PRIME_MUX] * 4. */
        uint64_t invalid_n_symb_pusch  : 1;  /**< [  2:  2] Invalid range for n_symb_pusch. */
        uint64_t r_prime_mux           : 1;  /**< [  3:  3] Software must constrain
                                                                 [R_PRIME_MUX] * n_symb_pusch \<= (RMAP_LTE_MODEX_S[G_PRIME] + ri_prime). */
        uint64_t invalid_g_prime       : 1;  /**< [  4:  4] Invalid range for RMAP_LTE_MODEX_S[G_PRIME]. */
        uint64_t invalid_mod_order     : 1;  /**< [  5:  5] Invalid range for RMAP_LTE_MODEX_S[MOD_ORDER]. */
        uint64_t invalid_num_layers    : 1;  /**< [  6:  6] Invalid range for RMAP_LTE_MODEX_S[NUM_LAYERS]. */
        uint64_t invalid_q_prime_cqi   : 1;  /**< [  7:  7] Invalid range for q_prime_cqi. */
        uint64_t invalid_q_prime_ri    : 1;  /**< [  8:  8] Invalid range for q_prime_ri. */
        uint64_t invalid_q_prime_ack   : 1;  /**< [  9:  9] Invalid range for [Q_PRIM_ACK]. */
        uint64_t invalid_r_prime_mux   : 1;  /**< [ 10: 10] Invalid range for [R_PRIME_MUX]. */
        uint64_t reserved_11           : 1;
        uint64_t invalid_ack_enc_cat   : 1;  /**< [ 12: 12] Invalid range for RMAP_LTE_MODEX_S[ACK_ENC_CAT]. */
        uint64_t invalid_ri_enc_cat    : 1;  /**< [ 13: 13] Invalid range for RMAP_LTE_MODEX_S[RI_ENC_CAT]. */
        uint64_t invalid_cp_mode       : 1;  /**< [ 14: 14] Invalid range for RMAP_LTE_MODEX_S[CP_MODE]. */
        uint64_t invalid_ttimode       : 1;  /**< [ 15: 15] Invalid range for ttimode. */
        uint64_t invalid_tti2_ack_pos  : 1;  /**< [ 16: 16] Invalid range for tti2_ack_pos. */
        uint64_t invalid_bypass_scrambling : 1;/**< [ 17: 17] Invalid range for bypass_scrambling. */
        uint64_t invalid_scrambling_init : 1;/**< [ 18: 18] Invalid range for scrambling_init. */
        uint64_t invalid_symb_byte_aligned : 1;/**< [ 19: 19] Invalid range for RMAP_LTE_MODEX_S[SYMB_BYTE_ALIGNED]. */
        uint64_t reserved_20_63        : 44;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_rmap_tc_lte_config_err_s_s cn; */
};

/**
 * Structure rmap_tc_nr_config_err_s
 *
 * RMAP TC NR Mode Configuration Error Structure
 * When RMAP()_AB(0..1)_TC_ERROR[CORE_ERR] is set, this field indicates which
 * configuration parameter was set incorrectly. Each bit maps to a different error:
 */
union cavm_rmap_tc_nr_config_err_s
{
    uint64_t u;
    struct cavm_rmap_tc_nr_config_err_s_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_41_63        : 23;
        uint64_t invalid_csi2_crc      : 1;  /**< [ 40: 40] Invalid range for RMAP_NR_MODEX_S[CSI2_CRC]. */
        uint64_t invalid_csi1_crc      : 1;  /**< [ 39: 39] Invalid range for RMAP_NR_MODEX_S[CSI1_CRC]. */
        uint64_t invalid_ack_crc       : 1;  /**< [ 38: 38] Invalid range for RMAP_NR_MODEX_S[ACK_CRC]. */
        uint64_t invalid_data_reenc_mode : 1;/**< [ 37: 37] Invalid range for RMAP_NR_MODEX_S[DATA_REENC_MODE]. */
        uint64_t invalid_csi2_reenc_mode : 1;/**< [ 36: 36] Invalid range for RMAP_NR_MODEX_S[CSI2_REENC_MODE]. */
        uint64_t invalid_csi1_reenc_mode : 1;/**< [ 35: 35] Invalid range for RMAP_NR_MODEX_S[CSI1_REENC_MODE]. */
        uint64_t invalid_ack_reenc_mode : 1; /**< [ 34: 34] Invalid range for RMAP_NR_MODEX_S[ACK_REENC_MODE]. */
        uint64_t invalid_mod_order     : 1;  /**< [ 33: 33] Invalid range for RMAP_NR_MODEX_S[MOD_ORDER]. */
        uint64_t invalid_num_layers    : 1;  /**< [ 32: 32] Invalid range for RMAP_NR_MODEX_S[NUM_LAYERS]. */
        uint64_t invalid_scrambling_offset : 1;/**< [ 31: 31] Invalid range for RMAP_NR_MODEX_S[SCRAMBLING_OFFSET]. */
        uint64_t invalid_scrambling_init : 1;/**< [ 30: 30] Invalid range for scrambling_init. */
        uint64_t invalid_bypass_scrambler : 1;/**< [ 29: 29] Invalid range for RMAP_NR_MODEX_S[BYPASS_SCRAMBLER]. */
        uint64_t invalid_data_bit_offset : 1;/**< [ 28: 28] Invalid range for RMAP_NR_MODEX_S[DATA_BIT_OFFSET]. */
        uint64_t invalid_data_m_re     : 1;  /**< [ 27: 27] Invalid range for RMAP_NR_MODEX_S[DATA_M_RE]. */
        uint64_t invalid_csi2_bit_offset : 1;/**< [ 26: 26] Invalid range for RMAP_NR_MODEX_S[CSI2_BIT_OFFSET]. */
        uint64_t invalid_csi2_m_re     : 1;  /**< [ 25: 25] Invalid range for RMAP_NR_MODEX_S[CSI2_M_RE]. */
        uint64_t invalid_csi2_d_re     : 1;  /**< [ 24: 24] Invalid range for RMAP_NR_MODEX_S[CSI2_D_RE]. */
        uint64_t invalid_csi1_bit_offset : 1;/**< [ 23: 23] Invalid range for RMAP_NR_MODEX_S[CSI1_BIT_OFFSET]. */
        uint64_t invalid_csi1_m_re     : 1;  /**< [ 22: 22] Invalid range for RMAP_NR_MODEX_S[CSI1_M_RE]. */
        uint64_t invalid_csi1_d_re     : 1;  /**< [ 21: 21] Invalid range for RMAP_NR_MODEX_S[CSI1_D_RE]. */
        uint64_t invalid_ack_bit_offset : 1; /**< [ 20: 20] Invalid range for RMAP_NR_MODEX_S[ACK_BIT_OFFSET]. */
        uint64_t invalid_ack_m_re      : 1;  /**< [ 19: 19] Invalid range for RMAP_NR_MODEX_S[ACK_M_RE]. */
        uint64_t invalid_ack_d_re      : 1;  /**< [ 18: 18] Invalid range for RMAP_NR_MODEX_S[ACK_D_RE]. */
        uint64_t invalid_ack_rsv_m_re  : 1;  /**< [ 17: 17] Invalid range for RMAP_NR_MODEX_S[ACK_RSV_M_RE]. */
        uint64_t invalid_ack_rsv_d_re  : 1;  /**< [ 16: 16] Invalid range for RMAP_NR_MODEX_S[ACK_RSV_D_RE]. */
        uint64_t invalid_csi2_enc_cat  : 1;  /**< [ 15: 15] Invalid range for RMAP_NR_MODEX_S[CSI2_ENC_CAT]. */
        uint64_t invalid_csi1_enc_cat  : 1;  /**< [ 14: 14] Invalid range for RMAP_NR_MODEX_S[CSI1_ENC_CAT]. */
        uint64_t invalid_ack_enc_cat   : 1;  /**< [ 13: 13] Invalid range for RMAP_NR_MODEX_S[ACK_ENC_CAT]. */
        uint64_t invalid_ptrs_dfts_ofdm_delta : 1;/**< [ 12: 12] Invalid range for RMAP_NR_MODEX_S[PTRS_DFTS_OFDM_DELTA]. */
        uint64_t invalid_ptrs_loc_re_length : 1;/**< [ 11: 11] Invalid range for ptrs_loc_re_length. */
        uint64_t invalid_ptrs_loc_re_offset : 1;/**< [ 10: 10] Invalid range for ptrs_loc_re_offset. */
        uint64_t invalid_ptrs_dist_vrb_bun_size : 1;/**< [  9:  9] Invalid range for RMAP_NR_MODEX_S[PTRS_DIST_VRB_BUNDLE_SIZE]. */
        uint64_t invalid_ptrs_dist_start_rb_idx : 1;/**< [  8:  8] Invalid range for RMAP_NR_MODEX_S[PTRS_DIST_START_RB_IDX]. */
        uint64_t invalid_ptrs_dist_num_ports : 1;/**< [  7:  7] Invalid range for RMAP_NR_MODEX_S[PTRS_DIST_NUM_PORTS]. */
        uint64_t invalid_ptrs_dist_re_offset : 1;/**< [  6:  6] Invalid range for ptrs_dist_re_offset. */
        uint64_t invalid_ptrs_dist_rb_step : 1;/**< [  5:  5] Invalid range for RMAP_NR_MODEX_S[PTRS_DIST_RB_STEP]. */
        uint64_t invalid_ptrs_dist_rb_offset : 1;/**< [  4:  4] Invalid range for ptrs_dist_rb_offset. */
        uint64_t invalid_num_rb_pusch  : 1;  /**< [  3:  3] Invalid range for num_rb_pusch. */
        uint64_t invalid_rs_mapping_type : 1;/**< [  2:  2] Invalid range for RMAP_NR_MODEX_S[RS_MAPPING_TYPE]. */
        uint64_t invalid_rs_cat        : 1;  /**< [  1:  1] Invalid range for RMAP_NR_MODEX_S[RS_CAT]. */
        uint64_t invalid_rs_insertion_enable : 1;/**< [  0:  0] Invalid range for RMAP_NR_MODEX_S[RS_INSERTION_ENABLE]. */
#else /* Word 0 - Little Endian */
        uint64_t invalid_rs_insertion_enable : 1;/**< [  0:  0] Invalid range for RMAP_NR_MODEX_S[RS_INSERTION_ENABLE]. */
        uint64_t invalid_rs_cat        : 1;  /**< [  1:  1] Invalid range for RMAP_NR_MODEX_S[RS_CAT]. */
        uint64_t invalid_rs_mapping_type : 1;/**< [  2:  2] Invalid range for RMAP_NR_MODEX_S[RS_MAPPING_TYPE]. */
        uint64_t invalid_num_rb_pusch  : 1;  /**< [  3:  3] Invalid range for num_rb_pusch. */
        uint64_t invalid_ptrs_dist_rb_offset : 1;/**< [  4:  4] Invalid range for ptrs_dist_rb_offset. */
        uint64_t invalid_ptrs_dist_rb_step : 1;/**< [  5:  5] Invalid range for RMAP_NR_MODEX_S[PTRS_DIST_RB_STEP]. */
        uint64_t invalid_ptrs_dist_re_offset : 1;/**< [  6:  6] Invalid range for ptrs_dist_re_offset. */
        uint64_t invalid_ptrs_dist_num_ports : 1;/**< [  7:  7] Invalid range for RMAP_NR_MODEX_S[PTRS_DIST_NUM_PORTS]. */
        uint64_t invalid_ptrs_dist_start_rb_idx : 1;/**< [  8:  8] Invalid range for RMAP_NR_MODEX_S[PTRS_DIST_START_RB_IDX]. */
        uint64_t invalid_ptrs_dist_vrb_bun_size : 1;/**< [  9:  9] Invalid range for RMAP_NR_MODEX_S[PTRS_DIST_VRB_BUNDLE_SIZE]. */
        uint64_t invalid_ptrs_loc_re_offset : 1;/**< [ 10: 10] Invalid range for ptrs_loc_re_offset. */
        uint64_t invalid_ptrs_loc_re_length : 1;/**< [ 11: 11] Invalid range for ptrs_loc_re_length. */
        uint64_t invalid_ptrs_dfts_ofdm_delta : 1;/**< [ 12: 12] Invalid range for RMAP_NR_MODEX_S[PTRS_DFTS_OFDM_DELTA]. */
        uint64_t invalid_ack_enc_cat   : 1;  /**< [ 13: 13] Invalid range for RMAP_NR_MODEX_S[ACK_ENC_CAT]. */
        uint64_t invalid_csi1_enc_cat  : 1;  /**< [ 14: 14] Invalid range for RMAP_NR_MODEX_S[CSI1_ENC_CAT]. */
        uint64_t invalid_csi2_enc_cat  : 1;  /**< [ 15: 15] Invalid range for RMAP_NR_MODEX_S[CSI2_ENC_CAT]. */
        uint64_t invalid_ack_rsv_d_re  : 1;  /**< [ 16: 16] Invalid range for RMAP_NR_MODEX_S[ACK_RSV_D_RE]. */
        uint64_t invalid_ack_rsv_m_re  : 1;  /**< [ 17: 17] Invalid range for RMAP_NR_MODEX_S[ACK_RSV_M_RE]. */
        uint64_t invalid_ack_d_re      : 1;  /**< [ 18: 18] Invalid range for RMAP_NR_MODEX_S[ACK_D_RE]. */
        uint64_t invalid_ack_m_re      : 1;  /**< [ 19: 19] Invalid range for RMAP_NR_MODEX_S[ACK_M_RE]. */
        uint64_t invalid_ack_bit_offset : 1; /**< [ 20: 20] Invalid range for RMAP_NR_MODEX_S[ACK_BIT_OFFSET]. */
        uint64_t invalid_csi1_d_re     : 1;  /**< [ 21: 21] Invalid range for RMAP_NR_MODEX_S[CSI1_D_RE]. */
        uint64_t invalid_csi1_m_re     : 1;  /**< [ 22: 22] Invalid range for RMAP_NR_MODEX_S[CSI1_M_RE]. */
        uint64_t invalid_csi1_bit_offset : 1;/**< [ 23: 23] Invalid range for RMAP_NR_MODEX_S[CSI1_BIT_OFFSET]. */
        uint64_t invalid_csi2_d_re     : 1;  /**< [ 24: 24] Invalid range for RMAP_NR_MODEX_S[CSI2_D_RE]. */
        uint64_t invalid_csi2_m_re     : 1;  /**< [ 25: 25] Invalid range for RMAP_NR_MODEX_S[CSI2_M_RE]. */
        uint64_t invalid_csi2_bit_offset : 1;/**< [ 26: 26] Invalid range for RMAP_NR_MODEX_S[CSI2_BIT_OFFSET]. */
        uint64_t invalid_data_m_re     : 1;  /**< [ 27: 27] Invalid range for RMAP_NR_MODEX_S[DATA_M_RE]. */
        uint64_t invalid_data_bit_offset : 1;/**< [ 28: 28] Invalid range for RMAP_NR_MODEX_S[DATA_BIT_OFFSET]. */
        uint64_t invalid_bypass_scrambler : 1;/**< [ 29: 29] Invalid range for RMAP_NR_MODEX_S[BYPASS_SCRAMBLER]. */
        uint64_t invalid_scrambling_init : 1;/**< [ 30: 30] Invalid range for scrambling_init. */
        uint64_t invalid_scrambling_offset : 1;/**< [ 31: 31] Invalid range for RMAP_NR_MODEX_S[SCRAMBLING_OFFSET]. */
        uint64_t invalid_num_layers    : 1;  /**< [ 32: 32] Invalid range for RMAP_NR_MODEX_S[NUM_LAYERS]. */
        uint64_t invalid_mod_order     : 1;  /**< [ 33: 33] Invalid range for RMAP_NR_MODEX_S[MOD_ORDER]. */
        uint64_t invalid_ack_reenc_mode : 1; /**< [ 34: 34] Invalid range for RMAP_NR_MODEX_S[ACK_REENC_MODE]. */
        uint64_t invalid_csi1_reenc_mode : 1;/**< [ 35: 35] Invalid range for RMAP_NR_MODEX_S[CSI1_REENC_MODE]. */
        uint64_t invalid_csi2_reenc_mode : 1;/**< [ 36: 36] Invalid range for RMAP_NR_MODEX_S[CSI2_REENC_MODE]. */
        uint64_t invalid_data_reenc_mode : 1;/**< [ 37: 37] Invalid range for RMAP_NR_MODEX_S[DATA_REENC_MODE]. */
        uint64_t invalid_ack_crc       : 1;  /**< [ 38: 38] Invalid range for RMAP_NR_MODEX_S[ACK_CRC]. */
        uint64_t invalid_csi1_crc      : 1;  /**< [ 39: 39] Invalid range for RMAP_NR_MODEX_S[CSI1_CRC]. */
        uint64_t invalid_csi2_crc      : 1;  /**< [ 40: 40] Invalid range for RMAP_NR_MODEX_S[CSI2_CRC]. */
        uint64_t reserved_41_63        : 23;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_rmap_tc_nr_config_err_s_s cn; */
};

/**
 * Register (RSL) rmap#_ab#_control0
 *
 * RMAP Control0 Register
 * This register is used to start RMAP HAB processing.
 */
union cavm_rmapx_abx_control0
{
    uint64_t u;
    struct cavm_rmapx_abx_control0_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t jobid2                : 16; /**< [ 63: 48](R/W/H) Job ID2 */
        uint64_t jobid1                : 16; /**< [ 47: 32](R/W/H) Job ID1 */
        uint64_t jobid0                : 16; /**< [ 31: 16](R/W/H) Job ID0 */
        uint64_t reserved_4_15         : 12;
        uint64_t start3                : 1;  /**< [  3:  3](R/W/H) Write 1 to start processing the job in configuration slot 3. This bit auto-clears.
                                                                 Writes are ignored when the configuration slot is busy
                                                                 (RMAP_AB(0..1)_STATUS[STATUS3] = 1). */
        uint64_t start2                : 1;  /**< [  2:  2](R/W/H) Write 1 to start processing the job in configuration slot 2. This bit auto-clears.
                                                                 Writes are ignored when the configuration slot is busy
                                                                 (RMAP_AB(0..1)_STATUS[STATUS2] = 1). */
        uint64_t start1                : 1;  /**< [  1:  1](R/W/H) Write 1 to start processing the job in configuration slot 1. This bit auto-clears.
                                                                 Writes are ignored when the configuration slot is busy
                                                                 (RMAP_AB(0..1)_STATUS[STATUS1] = 1). */
        uint64_t start0                : 1;  /**< [  0:  0](R/W/H) Write 1 to start processing the job in configuration slot 0. This bit auto-clears.
                                                                 Writes are ignored when the configuration slot is busy
                                                                 (RMAP_AB(0..1)_STATUS[STATUS0] = 1). */
#else /* Word 0 - Little Endian */
        uint64_t start0                : 1;  /**< [  0:  0](R/W/H) Write 1 to start processing the job in configuration slot 0. This bit auto-clears.
                                                                 Writes are ignored when the configuration slot is busy
                                                                 (RMAP_AB(0..1)_STATUS[STATUS0] = 1). */
        uint64_t start1                : 1;  /**< [  1:  1](R/W/H) Write 1 to start processing the job in configuration slot 1. This bit auto-clears.
                                                                 Writes are ignored when the configuration slot is busy
                                                                 (RMAP_AB(0..1)_STATUS[STATUS1] = 1). */
        uint64_t start2                : 1;  /**< [  2:  2](R/W/H) Write 1 to start processing the job in configuration slot 2. This bit auto-clears.
                                                                 Writes are ignored when the configuration slot is busy
                                                                 (RMAP_AB(0..1)_STATUS[STATUS2] = 1). */
        uint64_t start3                : 1;  /**< [  3:  3](R/W/H) Write 1 to start processing the job in configuration slot 3. This bit auto-clears.
                                                                 Writes are ignored when the configuration slot is busy
                                                                 (RMAP_AB(0..1)_STATUS[STATUS3] = 1). */
        uint64_t reserved_4_15         : 12;
        uint64_t jobid0                : 16; /**< [ 31: 16](R/W/H) Job ID0 */
        uint64_t jobid1                : 16; /**< [ 47: 32](R/W/H) Job ID1 */
        uint64_t jobid2                : 16; /**< [ 63: 48](R/W/H) Job ID2 */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_rmapx_abx_control0_s cn; */
};
typedef union cavm_rmapx_abx_control0 cavm_rmapx_abx_control0_t;

static inline uint64_t CAVM_RMAPX_ABX_CONTROL0(uint64_t a, uint64_t b) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_RMAPX_ABX_CONTROL0(uint64_t a, uint64_t b)
{
    if (cavm_is_model(OCTEONTX_CNF20KA) && ((a<=1) && (b<=1)))
        return 0x87e041a00000ll + 0x80000ll * ((a) & 0x1) + 0x10000ll * ((b) & 0x1);
    __cavm_csr_fatal("RMAPX_ABX_CONTROL0", 2, a, b, 0, 0, 0, 0);
}

#define typedef_CAVM_RMAPX_ABX_CONTROL0(a,b) cavm_rmapx_abx_control0_t
#define bustype_CAVM_RMAPX_ABX_CONTROL0(a,b) CSR_TYPE_RSL
#define basename_CAVM_RMAPX_ABX_CONTROL0(a,b) "RMAPX_ABX_CONTROL0"
#define device_bar_CAVM_RMAPX_ABX_CONTROL0(a,b) 0x2 /* PF_BAR2 */
#define busnum_CAVM_RMAPX_ABX_CONTROL0(a,b) (a)
#define arguments_CAVM_RMAPX_ABX_CONTROL0(a,b) (a),(b),-1,-1

/**
 * Register (RSL) rmap#_ab#_control1
 *
 * RMAP Control1 Register
 * This register is used to start RMAP HAB processing.
 */
union cavm_rmapx_abx_control1
{
    uint64_t u;
    struct cavm_rmapx_abx_control1_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_16_63        : 48;
        uint64_t jobid3                : 16; /**< [ 15:  0](R/W/H) Job ID4 */
#else /* Word 0 - Little Endian */
        uint64_t jobid3                : 16; /**< [ 15:  0](R/W/H) Job ID4 */
        uint64_t reserved_16_63        : 48;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_rmapx_abx_control1_s cn; */
};
typedef union cavm_rmapx_abx_control1 cavm_rmapx_abx_control1_t;

static inline uint64_t CAVM_RMAPX_ABX_CONTROL1(uint64_t a, uint64_t b) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_RMAPX_ABX_CONTROL1(uint64_t a, uint64_t b)
{
    if (cavm_is_model(OCTEONTX_CNF20KA) && ((a<=1) && (b<=1)))
        return 0x87e041a00008ll + 0x80000ll * ((a) & 0x1) + 0x10000ll * ((b) & 0x1);
    __cavm_csr_fatal("RMAPX_ABX_CONTROL1", 2, a, b, 0, 0, 0, 0);
}

#define typedef_CAVM_RMAPX_ABX_CONTROL1(a,b) cavm_rmapx_abx_control1_t
#define bustype_CAVM_RMAPX_ABX_CONTROL1(a,b) CSR_TYPE_RSL
#define basename_CAVM_RMAPX_ABX_CONTROL1(a,b) "RMAPX_ABX_CONTROL1"
#define device_bar_CAVM_RMAPX_ABX_CONTROL1(a,b) 0x2 /* PF_BAR2 */
#define busnum_CAVM_RMAPX_ABX_CONTROL1(a,b) (a)
#define arguments_CAVM_RMAPX_ABX_CONTROL1(a,b) (a),(b),-1,-1

/**
 * Register (RSL) rmap#_ab#_error_enable0
 *
 * RMAP Error Enable 0 Register
 * This register enables error reporting for RMAP_AB(0..1)_ERROR_SOURCE0 register.
 */
union cavm_rmapx_abx_error_enable0
{
    uint64_t u;
    struct cavm_rmapx_abx_error_enable0_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_6_63         : 58;
        uint64_t rp1_of_en             : 1;  /**< [  5:  5](R/W) Read Port 1 Overflow Enable */
        uint64_t rp0_of_en             : 1;  /**< [  4:  4](R/W) Read Port 0 Overflow Enable */
        uint64_t reserved_2_3          : 2;
        uint64_t rp1_uf_en             : 1;  /**< [  1:  1](R/W) Read Port 1 Underflow Enable */
        uint64_t rp0_uf_en             : 1;  /**< [  0:  0](R/W) Read Port 0 Underflow Enable */
#else /* Word 0 - Little Endian */
        uint64_t rp0_uf_en             : 1;  /**< [  0:  0](R/W) Read Port 0 Underflow Enable */
        uint64_t rp1_uf_en             : 1;  /**< [  1:  1](R/W) Read Port 1 Underflow Enable */
        uint64_t reserved_2_3          : 2;
        uint64_t rp0_of_en             : 1;  /**< [  4:  4](R/W) Read Port 0 Overflow Enable */
        uint64_t rp1_of_en             : 1;  /**< [  5:  5](R/W) Read Port 1 Overflow Enable */
        uint64_t reserved_6_63         : 58;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_rmapx_abx_error_enable0_s cn; */
};
typedef union cavm_rmapx_abx_error_enable0 cavm_rmapx_abx_error_enable0_t;

static inline uint64_t CAVM_RMAPX_ABX_ERROR_ENABLE0(uint64_t a, uint64_t b) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_RMAPX_ABX_ERROR_ENABLE0(uint64_t a, uint64_t b)
{
    if (cavm_is_model(OCTEONTX_CNF20KA) && ((a<=1) && (b<=1)))
        return 0x87e041a00040ll + 0x80000ll * ((a) & 0x1) + 0x10000ll * ((b) & 0x1);
    __cavm_csr_fatal("RMAPX_ABX_ERROR_ENABLE0", 2, a, b, 0, 0, 0, 0);
}

#define typedef_CAVM_RMAPX_ABX_ERROR_ENABLE0(a,b) cavm_rmapx_abx_error_enable0_t
#define bustype_CAVM_RMAPX_ABX_ERROR_ENABLE0(a,b) CSR_TYPE_RSL
#define basename_CAVM_RMAPX_ABX_ERROR_ENABLE0(a,b) "RMAPX_ABX_ERROR_ENABLE0"
#define device_bar_CAVM_RMAPX_ABX_ERROR_ENABLE0(a,b) 0x2 /* PF_BAR2 */
#define busnum_CAVM_RMAPX_ABX_ERROR_ENABLE0(a,b) (a)
#define arguments_CAVM_RMAPX_ABX_ERROR_ENABLE0(a,b) (a),(b),-1,-1

/**
 * Register (RSL) rmap#_ab#_error_enable1
 *
 * RMAP Error Enable 1 Register
 * This register enables reporting of job configuration errors.
 */
union cavm_rmapx_abx_error_enable1
{
    uint64_t u;
    struct cavm_rmapx_abx_error_enable1_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_34_63        : 30;
        uint64_t tc_event_en           : 1;  /**< [ 33: 33](R/W) Enable unexpected event reporting from TC core */
        uint64_t tc_error_en           : 1;  /**< [ 32: 32](R/W) Enable error reporting from TC core */
        uint64_t reserved_22_31        : 10;
        uint64_t num_cb_err_en         : 1;  /**< [ 21: 21](R/W) Enable reporting of Invalid CB Setting */
        uint64_t csi2_cat_err_en       : 1;  /**< [ 20: 20](R/W) Enable reporting of Invalid CSI2_ENC_CAT setting */
        uint64_t csi1_cat_err_en       : 1;  /**< [ 19: 19](R/W) Enable reporting of Invalid CSI1_ENC_CAT setting */
        uint64_t total_re_err_en       : 1;  /**< [ 18: 18](R/W) Enable reporting of inconsistent total RE errors. */
        uint64_t r_prime_mux_err_en    : 1;  /**< [ 17: 17](R/W) Enable reporting of invalid R_PRIME_MUX settings. */
        uint64_t dft_idx_err1_en       : 1;  /**< [ 16: 16](R/W) Enable reporting for invalid combinations of NDFT_INDX and NUM_RB. */
        uint64_t dft_idx_err0_en       : 1;  /**< [ 15: 15](R/W) Enable reporting of invalid NDFT_INDX setting. */
        uint64_t rb_set_err_en         : 1;  /**< [ 14: 14](R/W) Enable reporting of invalid RB_SET0 and RB_SET1 combinations for allocation type 1. */
        uint64_t ri_cat_err_en         : 1;  /**< [ 13: 13](R/W) Enable reporting of invalid RI_ENC_CAT setting. */
        uint64_t ack_cat_err_en        : 1;  /**< [ 12: 12](R/W) Enable reporting of invalid ACK_ENC_CAT setting. */
        uint64_t num_layers_err_en     : 1;  /**< [ 11: 11](R/W) Enable reporting of invalid NUM_LAYERS setting. */
        uint64_t mod_order_err_en      : 1;  /**< [ 10: 10](R/W) Enable reporting of invalid MOD_ORDER setting. */
        uint64_t byte_order_err3_en    : 1;  /**< [  9:  9](R/W) Enable reporting of invalid ACK_BYTE_ORDER setting. */
        uint64_t byte_order_err2_en    : 1;  /**< [  8:  8](R/W) Enable reporting of invalid RI_BYTE_ORDER setting. */
        uint64_t byte_order_err1_en    : 1;  /**< [  7:  7](R/W) Enable reporting of invalid CQI_BYTE_ORDER setting. */
        uint64_t byte_order_err0_en    : 1;  /**< [  6:  6](R/W) Enable reporting of invalid DATA_BYTE_ORDER setting. */
        uint64_t ack_err1_en           : 1;  /**< [  5:  5](R/W) Enable reporting of non-zero NUM_ACK_RE with zero ACK_ENC_CAT. */
        uint64_t ack_err0_en           : 1;  /**< [  4:  4](R/W) Enable reporting of zero NUM_ACK_RE with non-zero ACK_ENC_CAT. */
        uint64_t ri_err1_en            : 1;  /**< [  3:  3](R/W) Enable reporting of non-zero NUM_RI_RE with zero RI_ENC_CAT. */
        uint64_t ri_err0_en            : 1;  /**< [  2:  2](R/W) Enable reporting of zero NUM_RI_RE with non-zero RI_ENC_CAT. */
        uint64_t cqi_err1_en           : 1;  /**< [  1:  1](R/W) Enable reporting of non-zero NUM_CQI_RE with zero NUM_ENCODED_CQI_BITS. */
        uint64_t cqi_err0_en           : 1;  /**< [  0:  0](R/W) Enable reporting of zero NUM_CQI_RE with non-zero NUM_ENCODED_CQI_BITS. */
#else /* Word 0 - Little Endian */
        uint64_t cqi_err0_en           : 1;  /**< [  0:  0](R/W) Enable reporting of zero NUM_CQI_RE with non-zero NUM_ENCODED_CQI_BITS. */
        uint64_t cqi_err1_en           : 1;  /**< [  1:  1](R/W) Enable reporting of non-zero NUM_CQI_RE with zero NUM_ENCODED_CQI_BITS. */
        uint64_t ri_err0_en            : 1;  /**< [  2:  2](R/W) Enable reporting of zero NUM_RI_RE with non-zero RI_ENC_CAT. */
        uint64_t ri_err1_en            : 1;  /**< [  3:  3](R/W) Enable reporting of non-zero NUM_RI_RE with zero RI_ENC_CAT. */
        uint64_t ack_err0_en           : 1;  /**< [  4:  4](R/W) Enable reporting of zero NUM_ACK_RE with non-zero ACK_ENC_CAT. */
        uint64_t ack_err1_en           : 1;  /**< [  5:  5](R/W) Enable reporting of non-zero NUM_ACK_RE with zero ACK_ENC_CAT. */
        uint64_t byte_order_err0_en    : 1;  /**< [  6:  6](R/W) Enable reporting of invalid DATA_BYTE_ORDER setting. */
        uint64_t byte_order_err1_en    : 1;  /**< [  7:  7](R/W) Enable reporting of invalid CQI_BYTE_ORDER setting. */
        uint64_t byte_order_err2_en    : 1;  /**< [  8:  8](R/W) Enable reporting of invalid RI_BYTE_ORDER setting. */
        uint64_t byte_order_err3_en    : 1;  /**< [  9:  9](R/W) Enable reporting of invalid ACK_BYTE_ORDER setting. */
        uint64_t mod_order_err_en      : 1;  /**< [ 10: 10](R/W) Enable reporting of invalid MOD_ORDER setting. */
        uint64_t num_layers_err_en     : 1;  /**< [ 11: 11](R/W) Enable reporting of invalid NUM_LAYERS setting. */
        uint64_t ack_cat_err_en        : 1;  /**< [ 12: 12](R/W) Enable reporting of invalid ACK_ENC_CAT setting. */
        uint64_t ri_cat_err_en         : 1;  /**< [ 13: 13](R/W) Enable reporting of invalid RI_ENC_CAT setting. */
        uint64_t rb_set_err_en         : 1;  /**< [ 14: 14](R/W) Enable reporting of invalid RB_SET0 and RB_SET1 combinations for allocation type 1. */
        uint64_t dft_idx_err0_en       : 1;  /**< [ 15: 15](R/W) Enable reporting of invalid NDFT_INDX setting. */
        uint64_t dft_idx_err1_en       : 1;  /**< [ 16: 16](R/W) Enable reporting for invalid combinations of NDFT_INDX and NUM_RB. */
        uint64_t r_prime_mux_err_en    : 1;  /**< [ 17: 17](R/W) Enable reporting of invalid R_PRIME_MUX settings. */
        uint64_t total_re_err_en       : 1;  /**< [ 18: 18](R/W) Enable reporting of inconsistent total RE errors. */
        uint64_t csi1_cat_err_en       : 1;  /**< [ 19: 19](R/W) Enable reporting of Invalid CSI1_ENC_CAT setting */
        uint64_t csi2_cat_err_en       : 1;  /**< [ 20: 20](R/W) Enable reporting of Invalid CSI2_ENC_CAT setting */
        uint64_t num_cb_err_en         : 1;  /**< [ 21: 21](R/W) Enable reporting of Invalid CB Setting */
        uint64_t reserved_22_31        : 10;
        uint64_t tc_error_en           : 1;  /**< [ 32: 32](R/W) Enable error reporting from TC core */
        uint64_t tc_event_en           : 1;  /**< [ 33: 33](R/W) Enable unexpected event reporting from TC core */
        uint64_t reserved_34_63        : 30;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_rmapx_abx_error_enable1_s cn; */
};
typedef union cavm_rmapx_abx_error_enable1 cavm_rmapx_abx_error_enable1_t;

static inline uint64_t CAVM_RMAPX_ABX_ERROR_ENABLE1(uint64_t a, uint64_t b) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_RMAPX_ABX_ERROR_ENABLE1(uint64_t a, uint64_t b)
{
    if (cavm_is_model(OCTEONTX_CNF20KA) && ((a<=1) && (b<=1)))
        return 0x87e041a00048ll + 0x80000ll * ((a) & 0x1) + 0x10000ll * ((b) & 0x1);
    __cavm_csr_fatal("RMAPX_ABX_ERROR_ENABLE1", 2, a, b, 0, 0, 0, 0);
}

#define typedef_CAVM_RMAPX_ABX_ERROR_ENABLE1(a,b) cavm_rmapx_abx_error_enable1_t
#define bustype_CAVM_RMAPX_ABX_ERROR_ENABLE1(a,b) CSR_TYPE_RSL
#define basename_CAVM_RMAPX_ABX_ERROR_ENABLE1(a,b) "RMAPX_ABX_ERROR_ENABLE1"
#define device_bar_CAVM_RMAPX_ABX_ERROR_ENABLE1(a,b) 0x2 /* PF_BAR2 */
#define busnum_CAVM_RMAPX_ABX_ERROR_ENABLE1(a,b) (a)
#define arguments_CAVM_RMAPX_ABX_ERROR_ENABLE1(a,b) (a),(b),-1,-1

/**
 * Register (RSL) rmap#_ab#_error_source0
 *
 * RMAP Error Source 0 Register
 * This is register contains information about read port overflows and underflows.
 */
union cavm_rmapx_abx_error_source0
{
    uint64_t u;
    struct cavm_rmapx_abx_error_source0_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_32_63        : 32;
        uint64_t rp0_jobid             : 16; /**< [ 31: 16](RO/H) Job ID for the job that caused either an underflow or overflow on port 0. */
        uint64_t reserved_6_15         : 10;
        uint64_t rp1_of                : 1;  /**< [  5:  5](R/W1C/H) Set to 1 when an overflow occurs on port 1. Cleared by a write to one. */
        uint64_t rp0_of                : 1;  /**< [  4:  4](R/W1C/H) Set to 1 when an overflow occurs on port 0. Cleared by a write to one. */
        uint64_t reserved_2_3          : 2;
        uint64_t rp1_uf                : 1;  /**< [  1:  1](R/W1C/H) Set to 1 when an underflow occurs on port 1. Cleared by a write to one. */
        uint64_t rp0_uf                : 1;  /**< [  0:  0](R/W1C/H) Set to 1 when an underflow occurs on port 0. Cleared by a write to one. */
#else /* Word 0 - Little Endian */
        uint64_t rp0_uf                : 1;  /**< [  0:  0](R/W1C/H) Set to 1 when an underflow occurs on port 0. Cleared by a write to one. */
        uint64_t rp1_uf                : 1;  /**< [  1:  1](R/W1C/H) Set to 1 when an underflow occurs on port 1. Cleared by a write to one. */
        uint64_t reserved_2_3          : 2;
        uint64_t rp0_of                : 1;  /**< [  4:  4](R/W1C/H) Set to 1 when an overflow occurs on port 0. Cleared by a write to one. */
        uint64_t rp1_of                : 1;  /**< [  5:  5](R/W1C/H) Set to 1 when an overflow occurs on port 1. Cleared by a write to one. */
        uint64_t reserved_6_15         : 10;
        uint64_t rp0_jobid             : 16; /**< [ 31: 16](RO/H) Job ID for the job that caused either an underflow or overflow on port 0. */
        uint64_t reserved_32_63        : 32;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_rmapx_abx_error_source0_s cn; */
};
typedef union cavm_rmapx_abx_error_source0 cavm_rmapx_abx_error_source0_t;

static inline uint64_t CAVM_RMAPX_ABX_ERROR_SOURCE0(uint64_t a, uint64_t b) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_RMAPX_ABX_ERROR_SOURCE0(uint64_t a, uint64_t b)
{
    if (cavm_is_model(OCTEONTX_CNF20KA) && ((a<=1) && (b<=1)))
        return 0x87e041a00030ll + 0x80000ll * ((a) & 0x1) + 0x10000ll * ((b) & 0x1);
    __cavm_csr_fatal("RMAPX_ABX_ERROR_SOURCE0", 2, a, b, 0, 0, 0, 0);
}

#define typedef_CAVM_RMAPX_ABX_ERROR_SOURCE0(a,b) cavm_rmapx_abx_error_source0_t
#define bustype_CAVM_RMAPX_ABX_ERROR_SOURCE0(a,b) CSR_TYPE_RSL
#define basename_CAVM_RMAPX_ABX_ERROR_SOURCE0(a,b) "RMAPX_ABX_ERROR_SOURCE0"
#define device_bar_CAVM_RMAPX_ABX_ERROR_SOURCE0(a,b) 0x2 /* PF_BAR2 */
#define busnum_CAVM_RMAPX_ABX_ERROR_SOURCE0(a,b) (a)
#define arguments_CAVM_RMAPX_ABX_ERROR_SOURCE0(a,b) (a),(b),-1,-1

/**
 * Register (RSL) rmap#_ab#_error_source1
 *
 * RMAP Error Source 1 Register
 * This register contains information about job configuration errors.
 */
union cavm_rmapx_abx_error_source1
{
    uint64_t u;
    struct cavm_rmapx_abx_error_source1_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_34_63        : 30;
        uint64_t tc_event              : 1;  /**< [ 33: 33](R/W1C/H) Unexpected event reported from TC core, examine its CSR to determine the sources.
                                                                 This signal is tied low inside TC1860 so it should never get signaled. */
        uint64_t tc_error              : 1;  /**< [ 32: 32](R/W1C/H) Error within multiplexing, interleaving and scrambling sub-block. See
                                                                 RMAP_AB(0..1)_TC_ERROR for additional error information. */
        uint64_t reserved_22_31        : 10;
        uint64_t num_cb_err            : 1;  /**< [ 21: 21](R/W1C/H) Invalid CB settings, cb0_m_re \> 0, num_cb1s = 0, num_cb2s \> 0 */
        uint64_t csi2_cat_err          : 1;  /**< [ 20: 20](R/W1C/H) Invalid CSI2_ENC_CAT setting. */
        uint64_t csi1_cat_err          : 1;  /**< [ 19: 19](R/W1C/H) Invalid CSI1_ENC_CAT setting. */
        uint64_t total_re_err          : 1;  /**< [ 18: 18](R/W1C/H) Inconsistent total RE detected - (R_PRIME_MUX x NUM_SYMB_PUSCH) != (G_PRIME + NUM_CQI_RE +
                                                                 NUM_RI_RE). */
        uint64_t r_prime_mux_err       : 1;  /**< [ 17: 17](R/W1C/H) Invalid R_PRIME_MUX setting. R_PRIME_MUX must be NUM_RB*12. */
        uint64_t dft_idx_err1          : 1;  /**< [ 16: 16](R/W1C/H) Invalid combination of DFT index and NUM_RB detected. The combination of
                                                                 NDFT_INDX and NUM_RB, valid combinations are listed in the DFT index table. */
        uint64_t dft_idx_err0          : 1;  /**< [ 15: 15](R/W1C/H) Invalid DFT_INDX setting. */
        uint64_t rb_set_err            : 1;  /**< [ 14: 14](R/W1C/H) Invalid combination of LENGTH_RB_SET0 and LENGTH_RB_SET1 for
                                                                 allocation type 1 - they must sum to NUM_RB. */
        uint64_t ri_cat_err            : 1;  /**< [ 13: 13](R/W1C/H) Invalid RI_ENC_CAT setting. */
        uint64_t ack_cat_err           : 1;  /**< [ 12: 12](R/W1C/H) Invalid ACT_ENC_CAT setting. */
        uint64_t num_layers_err        : 1;  /**< [ 11: 11](R/W1C/H) Invalid NUM_LAYERS setting. */
        uint64_t mod_order_err         : 1;  /**< [ 10: 10](R/W1C/H) Invalid MOD_ORDER setting. */
        uint64_t byte_order_err3       : 1;  /**< [  9:  9](R/W1C/H) Invalid ACK_BYTE_ORDER setting. */
        uint64_t byte_order_err2       : 1;  /**< [  8:  8](R/W1C/H) Invalid RI_BYTE_ORDER setting. */
        uint64_t byte_order_err1       : 1;  /**< [  7:  7](R/W1C/H) Invalid CQI_BYTE_ORDER setting. */
        uint64_t byte_order_err0       : 1;  /**< [  6:  6](R/W1C/H) Invalid DATA_BYTE_ORDER setting. */
        uint64_t ack_err1              : 1;  /**< [  5:  5](R/W1C/H) Inconsistent ACK parameters - ACK_ENC_CAT was zero but NUM_ACK_RE was
                                                                 not zero. */
        uint64_t ack_err0              : 1;  /**< [  4:  4](R/W1C/H) Inconsistent ACK parameters - NUM_ACK_RE was zero but ACK_ENC_CAT was
                                                                 not zero. */
        uint64_t ri_err1               : 1;  /**< [  3:  3](R/W1C/H) Inconsistent RI parameters - RI_ENC_CAT was zero but NUM_RI_RE was
                                                                 not zero. */
        uint64_t ri_err0               : 1;  /**< [  2:  2](R/W1C/H) Inconsistent RI parameters - NUM_RI_RE was zero but RI_ENC_CAT was not zero. */
        uint64_t cqi_err1              : 1;  /**< [  1:  1](R/W1C/H) Inconsistent CQI parameters - NUM_ENCODED_CQI_BITS was zero but NUM_CQI_RE was
                                                                 not zero. */
        uint64_t cqi_err0              : 1;  /**< [  0:  0](R/W1C/H) Inconsistent CQI parameters - NUM_CQI_RE was zero but NUM_ENCODED_CQI_BITS was
                                                                 not zero. */
#else /* Word 0 - Little Endian */
        uint64_t cqi_err0              : 1;  /**< [  0:  0](R/W1C/H) Inconsistent CQI parameters - NUM_CQI_RE was zero but NUM_ENCODED_CQI_BITS was
                                                                 not zero. */
        uint64_t cqi_err1              : 1;  /**< [  1:  1](R/W1C/H) Inconsistent CQI parameters - NUM_ENCODED_CQI_BITS was zero but NUM_CQI_RE was
                                                                 not zero. */
        uint64_t ri_err0               : 1;  /**< [  2:  2](R/W1C/H) Inconsistent RI parameters - NUM_RI_RE was zero but RI_ENC_CAT was not zero. */
        uint64_t ri_err1               : 1;  /**< [  3:  3](R/W1C/H) Inconsistent RI parameters - RI_ENC_CAT was zero but NUM_RI_RE was
                                                                 not zero. */
        uint64_t ack_err0              : 1;  /**< [  4:  4](R/W1C/H) Inconsistent ACK parameters - NUM_ACK_RE was zero but ACK_ENC_CAT was
                                                                 not zero. */
        uint64_t ack_err1              : 1;  /**< [  5:  5](R/W1C/H) Inconsistent ACK parameters - ACK_ENC_CAT was zero but NUM_ACK_RE was
                                                                 not zero. */
        uint64_t byte_order_err0       : 1;  /**< [  6:  6](R/W1C/H) Invalid DATA_BYTE_ORDER setting. */
        uint64_t byte_order_err1       : 1;  /**< [  7:  7](R/W1C/H) Invalid CQI_BYTE_ORDER setting. */
        uint64_t byte_order_err2       : 1;  /**< [  8:  8](R/W1C/H) Invalid RI_BYTE_ORDER setting. */
        uint64_t byte_order_err3       : 1;  /**< [  9:  9](R/W1C/H) Invalid ACK_BYTE_ORDER setting. */
        uint64_t mod_order_err         : 1;  /**< [ 10: 10](R/W1C/H) Invalid MOD_ORDER setting. */
        uint64_t num_layers_err        : 1;  /**< [ 11: 11](R/W1C/H) Invalid NUM_LAYERS setting. */
        uint64_t ack_cat_err           : 1;  /**< [ 12: 12](R/W1C/H) Invalid ACT_ENC_CAT setting. */
        uint64_t ri_cat_err            : 1;  /**< [ 13: 13](R/W1C/H) Invalid RI_ENC_CAT setting. */
        uint64_t rb_set_err            : 1;  /**< [ 14: 14](R/W1C/H) Invalid combination of LENGTH_RB_SET0 and LENGTH_RB_SET1 for
                                                                 allocation type 1 - they must sum to NUM_RB. */
        uint64_t dft_idx_err0          : 1;  /**< [ 15: 15](R/W1C/H) Invalid DFT_INDX setting. */
        uint64_t dft_idx_err1          : 1;  /**< [ 16: 16](R/W1C/H) Invalid combination of DFT index and NUM_RB detected. The combination of
                                                                 NDFT_INDX and NUM_RB, valid combinations are listed in the DFT index table. */
        uint64_t r_prime_mux_err       : 1;  /**< [ 17: 17](R/W1C/H) Invalid R_PRIME_MUX setting. R_PRIME_MUX must be NUM_RB*12. */
        uint64_t total_re_err          : 1;  /**< [ 18: 18](R/W1C/H) Inconsistent total RE detected - (R_PRIME_MUX x NUM_SYMB_PUSCH) != (G_PRIME + NUM_CQI_RE +
                                                                 NUM_RI_RE). */
        uint64_t csi1_cat_err          : 1;  /**< [ 19: 19](R/W1C/H) Invalid CSI1_ENC_CAT setting. */
        uint64_t csi2_cat_err          : 1;  /**< [ 20: 20](R/W1C/H) Invalid CSI2_ENC_CAT setting. */
        uint64_t num_cb_err            : 1;  /**< [ 21: 21](R/W1C/H) Invalid CB settings, cb0_m_re \> 0, num_cb1s = 0, num_cb2s \> 0 */
        uint64_t reserved_22_31        : 10;
        uint64_t tc_error              : 1;  /**< [ 32: 32](R/W1C/H) Error within multiplexing, interleaving and scrambling sub-block. See
                                                                 RMAP_AB(0..1)_TC_ERROR for additional error information. */
        uint64_t tc_event              : 1;  /**< [ 33: 33](R/W1C/H) Unexpected event reported from TC core, examine its CSR to determine the sources.
                                                                 This signal is tied low inside TC1860 so it should never get signaled. */
        uint64_t reserved_34_63        : 30;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_rmapx_abx_error_source1_s cn; */
};
typedef union cavm_rmapx_abx_error_source1 cavm_rmapx_abx_error_source1_t;

static inline uint64_t CAVM_RMAPX_ABX_ERROR_SOURCE1(uint64_t a, uint64_t b) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_RMAPX_ABX_ERROR_SOURCE1(uint64_t a, uint64_t b)
{
    if (cavm_is_model(OCTEONTX_CNF20KA) && ((a<=1) && (b<=1)))
        return 0x87e041a00038ll + 0x80000ll * ((a) & 0x1) + 0x10000ll * ((b) & 0x1);
    __cavm_csr_fatal("RMAPX_ABX_ERROR_SOURCE1", 2, a, b, 0, 0, 0, 0);
}

#define typedef_CAVM_RMAPX_ABX_ERROR_SOURCE1(a,b) cavm_rmapx_abx_error_source1_t
#define bustype_CAVM_RMAPX_ABX_ERROR_SOURCE1(a,b) CSR_TYPE_RSL
#define basename_CAVM_RMAPX_ABX_ERROR_SOURCE1(a,b) "RMAPX_ABX_ERROR_SOURCE1"
#define device_bar_CAVM_RMAPX_ABX_ERROR_SOURCE1(a,b) 0x2 /* PF_BAR2 */
#define busnum_CAVM_RMAPX_ABX_ERROR_SOURCE1(a,b) (a)
#define arguments_CAVM_RMAPX_ABX_ERROR_SOURCE1(a,b) (a),(b),-1,-1

/**
 * Register (RSL) rmap#_ab#_jd0_cfg0
 *
 * RMAP Slot 0 Configuration Register 0
 * This register stores the 1st job configuration word for slot 0.
 * Software should not write this register directly, but instead use this
 * format when writing the job configuration section of the job descriptor.
 */
union cavm_rmapx_abx_jd0_cfg0
{
    uint64_t u;
    struct cavm_rmapx_abx_jd0_cfg0_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t phy_mode              : 1;  /**< [ 63: 63](R/W) LTE/NR Mode. 0 = LTE, 1 = NR. */
        uint64_t cfg0_data             : 63; /**< [ 62:  0](R/W) CFG0 Data */
#else /* Word 0 - Little Endian */
        uint64_t cfg0_data             : 63; /**< [ 62:  0](R/W) CFG0 Data */
        uint64_t phy_mode              : 1;  /**< [ 63: 63](R/W) LTE/NR Mode. 0 = LTE, 1 = NR. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_rmapx_abx_jd0_cfg0_s cn; */
};
typedef union cavm_rmapx_abx_jd0_cfg0 cavm_rmapx_abx_jd0_cfg0_t;

static inline uint64_t CAVM_RMAPX_ABX_JD0_CFG0(uint64_t a, uint64_t b) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_RMAPX_ABX_JD0_CFG0(uint64_t a, uint64_t b)
{
    if (cavm_is_model(OCTEONTX_CNF20KA) && ((a<=1) && (b<=1)))
        return 0x87e041a02000ll + 0x80000ll * ((a) & 0x1) + 0x10000ll * ((b) & 0x1);
    __cavm_csr_fatal("RMAPX_ABX_JD0_CFG0", 2, a, b, 0, 0, 0, 0);
}

#define typedef_CAVM_RMAPX_ABX_JD0_CFG0(a,b) cavm_rmapx_abx_jd0_cfg0_t
#define bustype_CAVM_RMAPX_ABX_JD0_CFG0(a,b) CSR_TYPE_RSL
#define basename_CAVM_RMAPX_ABX_JD0_CFG0(a,b) "RMAPX_ABX_JD0_CFG0"
#define device_bar_CAVM_RMAPX_ABX_JD0_CFG0(a,b) 0x2 /* PF_BAR2 */
#define busnum_CAVM_RMAPX_ABX_JD0_CFG0(a,b) (a)
#define arguments_CAVM_RMAPX_ABX_JD0_CFG0(a,b) (a),(b),-1,-1

/**
 * Register (RSL) rmap#_ab#_jd0_cfg1
 *
 * RMAP Slot 0 Configuration Register 1
 * This register stores the 2nd job configuration word for slot 0.
 * Software should not write this register directly, but instead use this
 * format when writing the job configuration section of the job descriptor.
 */
union cavm_rmapx_abx_jd0_cfg1
{
    uint64_t u;
    struct cavm_rmapx_abx_jd0_cfg1_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t cfg1_data             : 64; /**< [ 63:  0](R/W) CFG1 Data */
#else /* Word 0 - Little Endian */
        uint64_t cfg1_data             : 64; /**< [ 63:  0](R/W) CFG1 Data */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_rmapx_abx_jd0_cfg1_s cn; */
};
typedef union cavm_rmapx_abx_jd0_cfg1 cavm_rmapx_abx_jd0_cfg1_t;

static inline uint64_t CAVM_RMAPX_ABX_JD0_CFG1(uint64_t a, uint64_t b) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_RMAPX_ABX_JD0_CFG1(uint64_t a, uint64_t b)
{
    if (cavm_is_model(OCTEONTX_CNF20KA) && ((a<=1) && (b<=1)))
        return 0x87e041a02008ll + 0x80000ll * ((a) & 0x1) + 0x10000ll * ((b) & 0x1);
    __cavm_csr_fatal("RMAPX_ABX_JD0_CFG1", 2, a, b, 0, 0, 0, 0);
}

#define typedef_CAVM_RMAPX_ABX_JD0_CFG1(a,b) cavm_rmapx_abx_jd0_cfg1_t
#define bustype_CAVM_RMAPX_ABX_JD0_CFG1(a,b) CSR_TYPE_RSL
#define basename_CAVM_RMAPX_ABX_JD0_CFG1(a,b) "RMAPX_ABX_JD0_CFG1"
#define device_bar_CAVM_RMAPX_ABX_JD0_CFG1(a,b) 0x2 /* PF_BAR2 */
#define busnum_CAVM_RMAPX_ABX_JD0_CFG1(a,b) (a)
#define arguments_CAVM_RMAPX_ABX_JD0_CFG1(a,b) (a),(b),-1,-1

/**
 * Register (RSL) rmap#_ab#_jd0_cfg10
 *
 * RMAP Slot 0 Configuration Register 10
 * This register stores the 11th job configuration word for slot 0.
 * Software should not write this register directly, but instead use this
 * format when writing the job configuration section of the job descriptor.
 */
union cavm_rmapx_abx_jd0_cfg10
{
    uint64_t u;
    struct cavm_rmapx_abx_jd0_cfg10_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t cfg10_data            : 64; /**< [ 63:  0](R/W) CFG10 Data */
#else /* Word 0 - Little Endian */
        uint64_t cfg10_data            : 64; /**< [ 63:  0](R/W) CFG10 Data */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_rmapx_abx_jd0_cfg10_s cn; */
};
typedef union cavm_rmapx_abx_jd0_cfg10 cavm_rmapx_abx_jd0_cfg10_t;

static inline uint64_t CAVM_RMAPX_ABX_JD0_CFG10(uint64_t a, uint64_t b) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_RMAPX_ABX_JD0_CFG10(uint64_t a, uint64_t b)
{
    if (cavm_is_model(OCTEONTX_CNF20KA) && ((a<=1) && (b<=1)))
        return 0x87e041a02050ll + 0x80000ll * ((a) & 0x1) + 0x10000ll * ((b) & 0x1);
    __cavm_csr_fatal("RMAPX_ABX_JD0_CFG10", 2, a, b, 0, 0, 0, 0);
}

#define typedef_CAVM_RMAPX_ABX_JD0_CFG10(a,b) cavm_rmapx_abx_jd0_cfg10_t
#define bustype_CAVM_RMAPX_ABX_JD0_CFG10(a,b) CSR_TYPE_RSL
#define basename_CAVM_RMAPX_ABX_JD0_CFG10(a,b) "RMAPX_ABX_JD0_CFG10"
#define device_bar_CAVM_RMAPX_ABX_JD0_CFG10(a,b) 0x2 /* PF_BAR2 */
#define busnum_CAVM_RMAPX_ABX_JD0_CFG10(a,b) (a)
#define arguments_CAVM_RMAPX_ABX_JD0_CFG10(a,b) (a),(b),-1,-1

/**
 * Register (RSL) rmap#_ab#_jd0_cfg11
 *
 * RMAP Slot 0 Configuration Register 11
 * This register stores the 12th job configuration word for slot 0.
 * Software should not write this register directly, but instead use this
 * format when writing the job configuration section of the job descriptor.
 */
union cavm_rmapx_abx_jd0_cfg11
{
    uint64_t u;
    struct cavm_rmapx_abx_jd0_cfg11_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t cfg11_data            : 64; /**< [ 63:  0](R/W) CFG11 Data */
#else /* Word 0 - Little Endian */
        uint64_t cfg11_data            : 64; /**< [ 63:  0](R/W) CFG11 Data */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_rmapx_abx_jd0_cfg11_s cn; */
};
typedef union cavm_rmapx_abx_jd0_cfg11 cavm_rmapx_abx_jd0_cfg11_t;

static inline uint64_t CAVM_RMAPX_ABX_JD0_CFG11(uint64_t a, uint64_t b) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_RMAPX_ABX_JD0_CFG11(uint64_t a, uint64_t b)
{
    if (cavm_is_model(OCTEONTX_CNF20KA) && ((a<=1) && (b<=1)))
        return 0x87e041a02058ll + 0x80000ll * ((a) & 0x1) + 0x10000ll * ((b) & 0x1);
    __cavm_csr_fatal("RMAPX_ABX_JD0_CFG11", 2, a, b, 0, 0, 0, 0);
}

#define typedef_CAVM_RMAPX_ABX_JD0_CFG11(a,b) cavm_rmapx_abx_jd0_cfg11_t
#define bustype_CAVM_RMAPX_ABX_JD0_CFG11(a,b) CSR_TYPE_RSL
#define basename_CAVM_RMAPX_ABX_JD0_CFG11(a,b) "RMAPX_ABX_JD0_CFG11"
#define device_bar_CAVM_RMAPX_ABX_JD0_CFG11(a,b) 0x2 /* PF_BAR2 */
#define busnum_CAVM_RMAPX_ABX_JD0_CFG11(a,b) (a)
#define arguments_CAVM_RMAPX_ABX_JD0_CFG11(a,b) (a),(b),-1,-1

/**
 * Register (RSL) rmap#_ab#_jd0_cfg12
 *
 * RMAP Slot 0 Configuration Register 12
 * This register stores the 13th job configuration word for slot 0.
 * Software should not write this register directly, but instead use this
 * format when writing the job configuration section of the job descriptor.
 */
union cavm_rmapx_abx_jd0_cfg12
{
    uint64_t u;
    struct cavm_rmapx_abx_jd0_cfg12_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t cfg12_data            : 64; /**< [ 63:  0](R/W) CFG12 Data */
#else /* Word 0 - Little Endian */
        uint64_t cfg12_data            : 64; /**< [ 63:  0](R/W) CFG12 Data */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_rmapx_abx_jd0_cfg12_s cn; */
};
typedef union cavm_rmapx_abx_jd0_cfg12 cavm_rmapx_abx_jd0_cfg12_t;

static inline uint64_t CAVM_RMAPX_ABX_JD0_CFG12(uint64_t a, uint64_t b) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_RMAPX_ABX_JD0_CFG12(uint64_t a, uint64_t b)
{
    if (cavm_is_model(OCTEONTX_CNF20KA) && ((a<=1) && (b<=1)))
        return 0x87e041a02060ll + 0x80000ll * ((a) & 0x1) + 0x10000ll * ((b) & 0x1);
    __cavm_csr_fatal("RMAPX_ABX_JD0_CFG12", 2, a, b, 0, 0, 0, 0);
}

#define typedef_CAVM_RMAPX_ABX_JD0_CFG12(a,b) cavm_rmapx_abx_jd0_cfg12_t
#define bustype_CAVM_RMAPX_ABX_JD0_CFG12(a,b) CSR_TYPE_RSL
#define basename_CAVM_RMAPX_ABX_JD0_CFG12(a,b) "RMAPX_ABX_JD0_CFG12"
#define device_bar_CAVM_RMAPX_ABX_JD0_CFG12(a,b) 0x2 /* PF_BAR2 */
#define busnum_CAVM_RMAPX_ABX_JD0_CFG12(a,b) (a)
#define arguments_CAVM_RMAPX_ABX_JD0_CFG12(a,b) (a),(b),-1,-1

/**
 * Register (RSL) rmap#_ab#_jd0_cfg2
 *
 * RMAP Slot 0 Configuration Register 2
 * This register stores the 3rd job configuration word for slot 0.
 * Software should not write this register directly, but instead use this
 * format when writing the job configuration section of the job descriptor.
 */
union cavm_rmapx_abx_jd0_cfg2
{
    uint64_t u;
    struct cavm_rmapx_abx_jd0_cfg2_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t cfg2_data             : 64; /**< [ 63:  0](R/W) CFG2 Data */
#else /* Word 0 - Little Endian */
        uint64_t cfg2_data             : 64; /**< [ 63:  0](R/W) CFG2 Data */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_rmapx_abx_jd0_cfg2_s cn; */
};
typedef union cavm_rmapx_abx_jd0_cfg2 cavm_rmapx_abx_jd0_cfg2_t;

static inline uint64_t CAVM_RMAPX_ABX_JD0_CFG2(uint64_t a, uint64_t b) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_RMAPX_ABX_JD0_CFG2(uint64_t a, uint64_t b)
{
    if (cavm_is_model(OCTEONTX_CNF20KA) && ((a<=1) && (b<=1)))
        return 0x87e041a02010ll + 0x80000ll * ((a) & 0x1) + 0x10000ll * ((b) & 0x1);
    __cavm_csr_fatal("RMAPX_ABX_JD0_CFG2", 2, a, b, 0, 0, 0, 0);
}

#define typedef_CAVM_RMAPX_ABX_JD0_CFG2(a,b) cavm_rmapx_abx_jd0_cfg2_t
#define bustype_CAVM_RMAPX_ABX_JD0_CFG2(a,b) CSR_TYPE_RSL
#define basename_CAVM_RMAPX_ABX_JD0_CFG2(a,b) "RMAPX_ABX_JD0_CFG2"
#define device_bar_CAVM_RMAPX_ABX_JD0_CFG2(a,b) 0x2 /* PF_BAR2 */
#define busnum_CAVM_RMAPX_ABX_JD0_CFG2(a,b) (a)
#define arguments_CAVM_RMAPX_ABX_JD0_CFG2(a,b) (a),(b),-1,-1

/**
 * Register (RSL) rmap#_ab#_jd0_cfg3
 *
 * RMAP Slot 0 Configuration Register 3
 * This register stores the 4th job configuration word for slot 0.
 * Software should not write this register directly, but instead use this
 * format when writing the job configuration section of the job descriptor.
 */
union cavm_rmapx_abx_jd0_cfg3
{
    uint64_t u;
    struct cavm_rmapx_abx_jd0_cfg3_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t cfg3_data             : 64; /**< [ 63:  0](R/W) CFG3 Data */
#else /* Word 0 - Little Endian */
        uint64_t cfg3_data             : 64; /**< [ 63:  0](R/W) CFG3 Data */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_rmapx_abx_jd0_cfg3_s cn; */
};
typedef union cavm_rmapx_abx_jd0_cfg3 cavm_rmapx_abx_jd0_cfg3_t;

static inline uint64_t CAVM_RMAPX_ABX_JD0_CFG3(uint64_t a, uint64_t b) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_RMAPX_ABX_JD0_CFG3(uint64_t a, uint64_t b)
{
    if (cavm_is_model(OCTEONTX_CNF20KA) && ((a<=1) && (b<=1)))
        return 0x87e041a02018ll + 0x80000ll * ((a) & 0x1) + 0x10000ll * ((b) & 0x1);
    __cavm_csr_fatal("RMAPX_ABX_JD0_CFG3", 2, a, b, 0, 0, 0, 0);
}

#define typedef_CAVM_RMAPX_ABX_JD0_CFG3(a,b) cavm_rmapx_abx_jd0_cfg3_t
#define bustype_CAVM_RMAPX_ABX_JD0_CFG3(a,b) CSR_TYPE_RSL
#define basename_CAVM_RMAPX_ABX_JD0_CFG3(a,b) "RMAPX_ABX_JD0_CFG3"
#define device_bar_CAVM_RMAPX_ABX_JD0_CFG3(a,b) 0x2 /* PF_BAR2 */
#define busnum_CAVM_RMAPX_ABX_JD0_CFG3(a,b) (a)
#define arguments_CAVM_RMAPX_ABX_JD0_CFG3(a,b) (a),(b),-1,-1

/**
 * Register (RSL) rmap#_ab#_jd0_cfg4
 *
 * RMAP Slot 0 Configuration Register 4
 * This register stores the 5th job configuration word for slot 0.
 * Software should not write this register directly, but instead use this
 * format when writing the job configuration section of the job descriptor.
 */
union cavm_rmapx_abx_jd0_cfg4
{
    uint64_t u;
    struct cavm_rmapx_abx_jd0_cfg4_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t cfg4_data             : 64; /**< [ 63:  0](R/W) CFG4 Data */
#else /* Word 0 - Little Endian */
        uint64_t cfg4_data             : 64; /**< [ 63:  0](R/W) CFG4 Data */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_rmapx_abx_jd0_cfg4_s cn; */
};
typedef union cavm_rmapx_abx_jd0_cfg4 cavm_rmapx_abx_jd0_cfg4_t;

static inline uint64_t CAVM_RMAPX_ABX_JD0_CFG4(uint64_t a, uint64_t b) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_RMAPX_ABX_JD0_CFG4(uint64_t a, uint64_t b)
{
    if (cavm_is_model(OCTEONTX_CNF20KA) && ((a<=1) && (b<=1)))
        return 0x87e041a02020ll + 0x80000ll * ((a) & 0x1) + 0x10000ll * ((b) & 0x1);
    __cavm_csr_fatal("RMAPX_ABX_JD0_CFG4", 2, a, b, 0, 0, 0, 0);
}

#define typedef_CAVM_RMAPX_ABX_JD0_CFG4(a,b) cavm_rmapx_abx_jd0_cfg4_t
#define bustype_CAVM_RMAPX_ABX_JD0_CFG4(a,b) CSR_TYPE_RSL
#define basename_CAVM_RMAPX_ABX_JD0_CFG4(a,b) "RMAPX_ABX_JD0_CFG4"
#define device_bar_CAVM_RMAPX_ABX_JD0_CFG4(a,b) 0x2 /* PF_BAR2 */
#define busnum_CAVM_RMAPX_ABX_JD0_CFG4(a,b) (a)
#define arguments_CAVM_RMAPX_ABX_JD0_CFG4(a,b) (a),(b),-1,-1

/**
 * Register (RSL) rmap#_ab#_jd0_cfg5
 *
 * RMAP Slot 0 Configuration Register 5
 * This register stores the 6th job configuration word for slot 0.
 * Software should not write this register directly, but instead use this
 * format when writing the job configuration section of the job descriptor.
 */
union cavm_rmapx_abx_jd0_cfg5
{
    uint64_t u;
    struct cavm_rmapx_abx_jd0_cfg5_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t cfg5_data             : 64; /**< [ 63:  0](R/W) CFG5 Data */
#else /* Word 0 - Little Endian */
        uint64_t cfg5_data             : 64; /**< [ 63:  0](R/W) CFG5 Data */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_rmapx_abx_jd0_cfg5_s cn; */
};
typedef union cavm_rmapx_abx_jd0_cfg5 cavm_rmapx_abx_jd0_cfg5_t;

static inline uint64_t CAVM_RMAPX_ABX_JD0_CFG5(uint64_t a, uint64_t b) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_RMAPX_ABX_JD0_CFG5(uint64_t a, uint64_t b)
{
    if (cavm_is_model(OCTEONTX_CNF20KA) && ((a<=1) && (b<=1)))
        return 0x87e041a02028ll + 0x80000ll * ((a) & 0x1) + 0x10000ll * ((b) & 0x1);
    __cavm_csr_fatal("RMAPX_ABX_JD0_CFG5", 2, a, b, 0, 0, 0, 0);
}

#define typedef_CAVM_RMAPX_ABX_JD0_CFG5(a,b) cavm_rmapx_abx_jd0_cfg5_t
#define bustype_CAVM_RMAPX_ABX_JD0_CFG5(a,b) CSR_TYPE_RSL
#define basename_CAVM_RMAPX_ABX_JD0_CFG5(a,b) "RMAPX_ABX_JD0_CFG5"
#define device_bar_CAVM_RMAPX_ABX_JD0_CFG5(a,b) 0x2 /* PF_BAR2 */
#define busnum_CAVM_RMAPX_ABX_JD0_CFG5(a,b) (a)
#define arguments_CAVM_RMAPX_ABX_JD0_CFG5(a,b) (a),(b),-1,-1

/**
 * Register (RSL) rmap#_ab#_jd0_cfg6
 *
 * RMAP Slot 0 Configuration Register 6
 * This register stores the 7th job configuration word for slot 0.
 * Software should not write this register directly, but instead use this
 * format when writing the job configuration section of the job descriptor.
 */
union cavm_rmapx_abx_jd0_cfg6
{
    uint64_t u;
    struct cavm_rmapx_abx_jd0_cfg6_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t cfg6_data             : 64; /**< [ 63:  0](R/W) CFG6 Data */
#else /* Word 0 - Little Endian */
        uint64_t cfg6_data             : 64; /**< [ 63:  0](R/W) CFG6 Data */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_rmapx_abx_jd0_cfg6_s cn; */
};
typedef union cavm_rmapx_abx_jd0_cfg6 cavm_rmapx_abx_jd0_cfg6_t;

static inline uint64_t CAVM_RMAPX_ABX_JD0_CFG6(uint64_t a, uint64_t b) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_RMAPX_ABX_JD0_CFG6(uint64_t a, uint64_t b)
{
    if (cavm_is_model(OCTEONTX_CNF20KA) && ((a<=1) && (b<=1)))
        return 0x87e041a02030ll + 0x80000ll * ((a) & 0x1) + 0x10000ll * ((b) & 0x1);
    __cavm_csr_fatal("RMAPX_ABX_JD0_CFG6", 2, a, b, 0, 0, 0, 0);
}

#define typedef_CAVM_RMAPX_ABX_JD0_CFG6(a,b) cavm_rmapx_abx_jd0_cfg6_t
#define bustype_CAVM_RMAPX_ABX_JD0_CFG6(a,b) CSR_TYPE_RSL
#define basename_CAVM_RMAPX_ABX_JD0_CFG6(a,b) "RMAPX_ABX_JD0_CFG6"
#define device_bar_CAVM_RMAPX_ABX_JD0_CFG6(a,b) 0x2 /* PF_BAR2 */
#define busnum_CAVM_RMAPX_ABX_JD0_CFG6(a,b) (a)
#define arguments_CAVM_RMAPX_ABX_JD0_CFG6(a,b) (a),(b),-1,-1

/**
 * Register (RSL) rmap#_ab#_jd0_cfg7
 *
 * RMAP Slot 0 Configuration Register 7
 * This register stores the 8th job configuration word for slot 0.
 * Software should not write this register directly, but instead use this
 * format when writing the job configuration section of the job descriptor.
 */
union cavm_rmapx_abx_jd0_cfg7
{
    uint64_t u;
    struct cavm_rmapx_abx_jd0_cfg7_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t cfg7_data             : 64; /**< [ 63:  0](R/W) CFG7 Data */
#else /* Word 0 - Little Endian */
        uint64_t cfg7_data             : 64; /**< [ 63:  0](R/W) CFG7 Data */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_rmapx_abx_jd0_cfg7_s cn; */
};
typedef union cavm_rmapx_abx_jd0_cfg7 cavm_rmapx_abx_jd0_cfg7_t;

static inline uint64_t CAVM_RMAPX_ABX_JD0_CFG7(uint64_t a, uint64_t b) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_RMAPX_ABX_JD0_CFG7(uint64_t a, uint64_t b)
{
    if (cavm_is_model(OCTEONTX_CNF20KA) && ((a<=1) && (b<=1)))
        return 0x87e041a02038ll + 0x80000ll * ((a) & 0x1) + 0x10000ll * ((b) & 0x1);
    __cavm_csr_fatal("RMAPX_ABX_JD0_CFG7", 2, a, b, 0, 0, 0, 0);
}

#define typedef_CAVM_RMAPX_ABX_JD0_CFG7(a,b) cavm_rmapx_abx_jd0_cfg7_t
#define bustype_CAVM_RMAPX_ABX_JD0_CFG7(a,b) CSR_TYPE_RSL
#define basename_CAVM_RMAPX_ABX_JD0_CFG7(a,b) "RMAPX_ABX_JD0_CFG7"
#define device_bar_CAVM_RMAPX_ABX_JD0_CFG7(a,b) 0x2 /* PF_BAR2 */
#define busnum_CAVM_RMAPX_ABX_JD0_CFG7(a,b) (a)
#define arguments_CAVM_RMAPX_ABX_JD0_CFG7(a,b) (a),(b),-1,-1

/**
 * Register (RSL) rmap#_ab#_jd0_cfg8
 *
 * RMAP Slot 0 Configuration Register 8
 * This register stores the 9th job configuration word for slot 0.
 * Software should not write this register directly, but instead use this
 * format when writing the job configuration section of the job descriptor.
 */
union cavm_rmapx_abx_jd0_cfg8
{
    uint64_t u;
    struct cavm_rmapx_abx_jd0_cfg8_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t cfg8_data             : 64; /**< [ 63:  0](R/W) CFG8 Data */
#else /* Word 0 - Little Endian */
        uint64_t cfg8_data             : 64; /**< [ 63:  0](R/W) CFG8 Data */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_rmapx_abx_jd0_cfg8_s cn; */
};
typedef union cavm_rmapx_abx_jd0_cfg8 cavm_rmapx_abx_jd0_cfg8_t;

static inline uint64_t CAVM_RMAPX_ABX_JD0_CFG8(uint64_t a, uint64_t b) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_RMAPX_ABX_JD0_CFG8(uint64_t a, uint64_t b)
{
    if (cavm_is_model(OCTEONTX_CNF20KA) && ((a<=1) && (b<=1)))
        return 0x87e041a02040ll + 0x80000ll * ((a) & 0x1) + 0x10000ll * ((b) & 0x1);
    __cavm_csr_fatal("RMAPX_ABX_JD0_CFG8", 2, a, b, 0, 0, 0, 0);
}

#define typedef_CAVM_RMAPX_ABX_JD0_CFG8(a,b) cavm_rmapx_abx_jd0_cfg8_t
#define bustype_CAVM_RMAPX_ABX_JD0_CFG8(a,b) CSR_TYPE_RSL
#define basename_CAVM_RMAPX_ABX_JD0_CFG8(a,b) "RMAPX_ABX_JD0_CFG8"
#define device_bar_CAVM_RMAPX_ABX_JD0_CFG8(a,b) 0x2 /* PF_BAR2 */
#define busnum_CAVM_RMAPX_ABX_JD0_CFG8(a,b) (a)
#define arguments_CAVM_RMAPX_ABX_JD0_CFG8(a,b) (a),(b),-1,-1

/**
 * Register (RSL) rmap#_ab#_jd0_cfg9
 *
 * RMAP Slot 0 Configuration Register 9
 * This register stores the 10th job configuration word for slot 0.
 * Software should not write this register directly, but instead use this
 * format when writing the job configuration section of the job descriptor.
 */
union cavm_rmapx_abx_jd0_cfg9
{
    uint64_t u;
    struct cavm_rmapx_abx_jd0_cfg9_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t cfg9_data             : 64; /**< [ 63:  0](R/W) CFG9 Data */
#else /* Word 0 - Little Endian */
        uint64_t cfg9_data             : 64; /**< [ 63:  0](R/W) CFG9 Data */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_rmapx_abx_jd0_cfg9_s cn; */
};
typedef union cavm_rmapx_abx_jd0_cfg9 cavm_rmapx_abx_jd0_cfg9_t;

static inline uint64_t CAVM_RMAPX_ABX_JD0_CFG9(uint64_t a, uint64_t b) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_RMAPX_ABX_JD0_CFG9(uint64_t a, uint64_t b)
{
    if (cavm_is_model(OCTEONTX_CNF20KA) && ((a<=1) && (b<=1)))
        return 0x87e041a02048ll + 0x80000ll * ((a) & 0x1) + 0x10000ll * ((b) & 0x1);
    __cavm_csr_fatal("RMAPX_ABX_JD0_CFG9", 2, a, b, 0, 0, 0, 0);
}

#define typedef_CAVM_RMAPX_ABX_JD0_CFG9(a,b) cavm_rmapx_abx_jd0_cfg9_t
#define bustype_CAVM_RMAPX_ABX_JD0_CFG9(a,b) CSR_TYPE_RSL
#define basename_CAVM_RMAPX_ABX_JD0_CFG9(a,b) "RMAPX_ABX_JD0_CFG9"
#define device_bar_CAVM_RMAPX_ABX_JD0_CFG9(a,b) 0x2 /* PF_BAR2 */
#define busnum_CAVM_RMAPX_ABX_JD0_CFG9(a,b) (a)
#define arguments_CAVM_RMAPX_ABX_JD0_CFG9(a,b) (a),(b),-1,-1

/**
 * Register (RSL) rmap#_ab#_jd1_cfg0
 *
 * RMAP Slot 0 Configuration Register 0
 * This register stores the 1st job configuration word for slot 0.
 * Software should not write this register directly, but instead use this
 * format when writing the job configuration section of the job descriptor.
 */
union cavm_rmapx_abx_jd1_cfg0
{
    uint64_t u;
    struct cavm_rmapx_abx_jd1_cfg0_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t phy_mode              : 1;  /**< [ 63: 63](R/W) LTE/NR Mode. 0 = LTE, 1 = NR. */
        uint64_t cfg0_data             : 63; /**< [ 62:  0](R/W) CFG0 Data */
#else /* Word 0 - Little Endian */
        uint64_t cfg0_data             : 63; /**< [ 62:  0](R/W) CFG0 Data */
        uint64_t phy_mode              : 1;  /**< [ 63: 63](R/W) LTE/NR Mode. 0 = LTE, 1 = NR. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_rmapx_abx_jd1_cfg0_s cn; */
};
typedef union cavm_rmapx_abx_jd1_cfg0 cavm_rmapx_abx_jd1_cfg0_t;

static inline uint64_t CAVM_RMAPX_ABX_JD1_CFG0(uint64_t a, uint64_t b) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_RMAPX_ABX_JD1_CFG0(uint64_t a, uint64_t b)
{
    if (cavm_is_model(OCTEONTX_CNF20KA) && ((a<=1) && (b<=1)))
        return 0x87e041a04000ll + 0x80000ll * ((a) & 0x1) + 0x10000ll * ((b) & 0x1);
    __cavm_csr_fatal("RMAPX_ABX_JD1_CFG0", 2, a, b, 0, 0, 0, 0);
}

#define typedef_CAVM_RMAPX_ABX_JD1_CFG0(a,b) cavm_rmapx_abx_jd1_cfg0_t
#define bustype_CAVM_RMAPX_ABX_JD1_CFG0(a,b) CSR_TYPE_RSL
#define basename_CAVM_RMAPX_ABX_JD1_CFG0(a,b) "RMAPX_ABX_JD1_CFG0"
#define device_bar_CAVM_RMAPX_ABX_JD1_CFG0(a,b) 0x2 /* PF_BAR2 */
#define busnum_CAVM_RMAPX_ABX_JD1_CFG0(a,b) (a)
#define arguments_CAVM_RMAPX_ABX_JD1_CFG0(a,b) (a),(b),-1,-1

/**
 * Register (RSL) rmap#_ab#_jd1_cfg1
 *
 * RMAP Slot 0 Configuration Register 1
 * This register stores the 2nd job configuration word for slot 0.
 * Software should not write this register directly, but instead use this
 * format when writing the job configuration section of the job descriptor.
 */
union cavm_rmapx_abx_jd1_cfg1
{
    uint64_t u;
    struct cavm_rmapx_abx_jd1_cfg1_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t cfg1_data             : 64; /**< [ 63:  0](R/W) CFG1 Data */
#else /* Word 0 - Little Endian */
        uint64_t cfg1_data             : 64; /**< [ 63:  0](R/W) CFG1 Data */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_rmapx_abx_jd1_cfg1_s cn; */
};
typedef union cavm_rmapx_abx_jd1_cfg1 cavm_rmapx_abx_jd1_cfg1_t;

static inline uint64_t CAVM_RMAPX_ABX_JD1_CFG1(uint64_t a, uint64_t b) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_RMAPX_ABX_JD1_CFG1(uint64_t a, uint64_t b)
{
    if (cavm_is_model(OCTEONTX_CNF20KA) && ((a<=1) && (b<=1)))
        return 0x87e041a04008ll + 0x80000ll * ((a) & 0x1) + 0x10000ll * ((b) & 0x1);
    __cavm_csr_fatal("RMAPX_ABX_JD1_CFG1", 2, a, b, 0, 0, 0, 0);
}

#define typedef_CAVM_RMAPX_ABX_JD1_CFG1(a,b) cavm_rmapx_abx_jd1_cfg1_t
#define bustype_CAVM_RMAPX_ABX_JD1_CFG1(a,b) CSR_TYPE_RSL
#define basename_CAVM_RMAPX_ABX_JD1_CFG1(a,b) "RMAPX_ABX_JD1_CFG1"
#define device_bar_CAVM_RMAPX_ABX_JD1_CFG1(a,b) 0x2 /* PF_BAR2 */
#define busnum_CAVM_RMAPX_ABX_JD1_CFG1(a,b) (a)
#define arguments_CAVM_RMAPX_ABX_JD1_CFG1(a,b) (a),(b),-1,-1

/**
 * Register (RSL) rmap#_ab#_jd1_cfg10
 *
 * RMAP Slot 0 Configuration Register 10
 * This register stores the 11th job configuration word for slot 0.
 * Software should not write this register directly, but instead use this
 * format when writing the job configuration section of the job descriptor.
 */
union cavm_rmapx_abx_jd1_cfg10
{
    uint64_t u;
    struct cavm_rmapx_abx_jd1_cfg10_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t cfg10_data            : 64; /**< [ 63:  0](R/W) CFG10 Data */
#else /* Word 0 - Little Endian */
        uint64_t cfg10_data            : 64; /**< [ 63:  0](R/W) CFG10 Data */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_rmapx_abx_jd1_cfg10_s cn; */
};
typedef union cavm_rmapx_abx_jd1_cfg10 cavm_rmapx_abx_jd1_cfg10_t;

static inline uint64_t CAVM_RMAPX_ABX_JD1_CFG10(uint64_t a, uint64_t b) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_RMAPX_ABX_JD1_CFG10(uint64_t a, uint64_t b)
{
    if (cavm_is_model(OCTEONTX_CNF20KA) && ((a<=1) && (b<=1)))
        return 0x87e041a04050ll + 0x80000ll * ((a) & 0x1) + 0x10000ll * ((b) & 0x1);
    __cavm_csr_fatal("RMAPX_ABX_JD1_CFG10", 2, a, b, 0, 0, 0, 0);
}

#define typedef_CAVM_RMAPX_ABX_JD1_CFG10(a,b) cavm_rmapx_abx_jd1_cfg10_t
#define bustype_CAVM_RMAPX_ABX_JD1_CFG10(a,b) CSR_TYPE_RSL
#define basename_CAVM_RMAPX_ABX_JD1_CFG10(a,b) "RMAPX_ABX_JD1_CFG10"
#define device_bar_CAVM_RMAPX_ABX_JD1_CFG10(a,b) 0x2 /* PF_BAR2 */
#define busnum_CAVM_RMAPX_ABX_JD1_CFG10(a,b) (a)
#define arguments_CAVM_RMAPX_ABX_JD1_CFG10(a,b) (a),(b),-1,-1

/**
 * Register (RSL) rmap#_ab#_jd1_cfg11
 *
 * RMAP Slot 0 Configuration Register 11
 * This register stores the 12th job configuration word for slot 0.
 * Software should not write this register directly, but instead use this
 * format when writing the job configuration section of the job descriptor.
 */
union cavm_rmapx_abx_jd1_cfg11
{
    uint64_t u;
    struct cavm_rmapx_abx_jd1_cfg11_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t cfg11_data            : 64; /**< [ 63:  0](R/W) CFG11 Data */
#else /* Word 0 - Little Endian */
        uint64_t cfg11_data            : 64; /**< [ 63:  0](R/W) CFG11 Data */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_rmapx_abx_jd1_cfg11_s cn; */
};
typedef union cavm_rmapx_abx_jd1_cfg11 cavm_rmapx_abx_jd1_cfg11_t;

static inline uint64_t CAVM_RMAPX_ABX_JD1_CFG11(uint64_t a, uint64_t b) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_RMAPX_ABX_JD1_CFG11(uint64_t a, uint64_t b)
{
    if (cavm_is_model(OCTEONTX_CNF20KA) && ((a<=1) && (b<=1)))
        return 0x87e041a04058ll + 0x80000ll * ((a) & 0x1) + 0x10000ll * ((b) & 0x1);
    __cavm_csr_fatal("RMAPX_ABX_JD1_CFG11", 2, a, b, 0, 0, 0, 0);
}

#define typedef_CAVM_RMAPX_ABX_JD1_CFG11(a,b) cavm_rmapx_abx_jd1_cfg11_t
#define bustype_CAVM_RMAPX_ABX_JD1_CFG11(a,b) CSR_TYPE_RSL
#define basename_CAVM_RMAPX_ABX_JD1_CFG11(a,b) "RMAPX_ABX_JD1_CFG11"
#define device_bar_CAVM_RMAPX_ABX_JD1_CFG11(a,b) 0x2 /* PF_BAR2 */
#define busnum_CAVM_RMAPX_ABX_JD1_CFG11(a,b) (a)
#define arguments_CAVM_RMAPX_ABX_JD1_CFG11(a,b) (a),(b),-1,-1

/**
 * Register (RSL) rmap#_ab#_jd1_cfg12
 *
 * RMAP Slot 0 Configuration Register 12
 * This register stores the 13th job configuration word for slot 0.
 * Software should not write this register directly, but instead use this
 * format when writing the job configuration section of the job descriptor.
 */
union cavm_rmapx_abx_jd1_cfg12
{
    uint64_t u;
    struct cavm_rmapx_abx_jd1_cfg12_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t cfg12_data            : 64; /**< [ 63:  0](R/W) CFG12 Data */
#else /* Word 0 - Little Endian */
        uint64_t cfg12_data            : 64; /**< [ 63:  0](R/W) CFG12 Data */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_rmapx_abx_jd1_cfg12_s cn; */
};
typedef union cavm_rmapx_abx_jd1_cfg12 cavm_rmapx_abx_jd1_cfg12_t;

static inline uint64_t CAVM_RMAPX_ABX_JD1_CFG12(uint64_t a, uint64_t b) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_RMAPX_ABX_JD1_CFG12(uint64_t a, uint64_t b)
{
    if (cavm_is_model(OCTEONTX_CNF20KA) && ((a<=1) && (b<=1)))
        return 0x87e041a04060ll + 0x80000ll * ((a) & 0x1) + 0x10000ll * ((b) & 0x1);
    __cavm_csr_fatal("RMAPX_ABX_JD1_CFG12", 2, a, b, 0, 0, 0, 0);
}

#define typedef_CAVM_RMAPX_ABX_JD1_CFG12(a,b) cavm_rmapx_abx_jd1_cfg12_t
#define bustype_CAVM_RMAPX_ABX_JD1_CFG12(a,b) CSR_TYPE_RSL
#define basename_CAVM_RMAPX_ABX_JD1_CFG12(a,b) "RMAPX_ABX_JD1_CFG12"
#define device_bar_CAVM_RMAPX_ABX_JD1_CFG12(a,b) 0x2 /* PF_BAR2 */
#define busnum_CAVM_RMAPX_ABX_JD1_CFG12(a,b) (a)
#define arguments_CAVM_RMAPX_ABX_JD1_CFG12(a,b) (a),(b),-1,-1

/**
 * Register (RSL) rmap#_ab#_jd1_cfg2
 *
 * RMAP Slot 0 Configuration Register 2
 * This register stores the 3rd job configuration word for slot 0.
 * Software should not write this register directly, but instead use this
 * format when writing the job configuration section of the job descriptor.
 */
union cavm_rmapx_abx_jd1_cfg2
{
    uint64_t u;
    struct cavm_rmapx_abx_jd1_cfg2_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t cfg2_data             : 64; /**< [ 63:  0](R/W) CFG2 Data */
#else /* Word 0 - Little Endian */
        uint64_t cfg2_data             : 64; /**< [ 63:  0](R/W) CFG2 Data */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_rmapx_abx_jd1_cfg2_s cn; */
};
typedef union cavm_rmapx_abx_jd1_cfg2 cavm_rmapx_abx_jd1_cfg2_t;

static inline uint64_t CAVM_RMAPX_ABX_JD1_CFG2(uint64_t a, uint64_t b) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_RMAPX_ABX_JD1_CFG2(uint64_t a, uint64_t b)
{
    if (cavm_is_model(OCTEONTX_CNF20KA) && ((a<=1) && (b<=1)))
        return 0x87e041a04010ll + 0x80000ll * ((a) & 0x1) + 0x10000ll * ((b) & 0x1);
    __cavm_csr_fatal("RMAPX_ABX_JD1_CFG2", 2, a, b, 0, 0, 0, 0);
}

#define typedef_CAVM_RMAPX_ABX_JD1_CFG2(a,b) cavm_rmapx_abx_jd1_cfg2_t
#define bustype_CAVM_RMAPX_ABX_JD1_CFG2(a,b) CSR_TYPE_RSL
#define basename_CAVM_RMAPX_ABX_JD1_CFG2(a,b) "RMAPX_ABX_JD1_CFG2"
#define device_bar_CAVM_RMAPX_ABX_JD1_CFG2(a,b) 0x2 /* PF_BAR2 */
#define busnum_CAVM_RMAPX_ABX_JD1_CFG2(a,b) (a)
#define arguments_CAVM_RMAPX_ABX_JD1_CFG2(a,b) (a),(b),-1,-1

/**
 * Register (RSL) rmap#_ab#_jd1_cfg3
 *
 * RMAP Slot 0 Configuration Register 3
 * This register stores the 4th job configuration word for slot 0.
 */
union cavm_rmapx_abx_jd1_cfg3
{
    uint64_t u;
    struct cavm_rmapx_abx_jd1_cfg3_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t cfg3_data             : 64; /**< [ 63:  0](R/W) CFG3 Data */
#else /* Word 0 - Little Endian */
        uint64_t cfg3_data             : 64; /**< [ 63:  0](R/W) CFG3 Data */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_rmapx_abx_jd1_cfg3_s cn; */
};
typedef union cavm_rmapx_abx_jd1_cfg3 cavm_rmapx_abx_jd1_cfg3_t;

static inline uint64_t CAVM_RMAPX_ABX_JD1_CFG3(uint64_t a, uint64_t b) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_RMAPX_ABX_JD1_CFG3(uint64_t a, uint64_t b)
{
    if (cavm_is_model(OCTEONTX_CNF20KA) && ((a<=1) && (b<=1)))
        return 0x87e041a04018ll + 0x80000ll * ((a) & 0x1) + 0x10000ll * ((b) & 0x1);
    __cavm_csr_fatal("RMAPX_ABX_JD1_CFG3", 2, a, b, 0, 0, 0, 0);
}

#define typedef_CAVM_RMAPX_ABX_JD1_CFG3(a,b) cavm_rmapx_abx_jd1_cfg3_t
#define bustype_CAVM_RMAPX_ABX_JD1_CFG3(a,b) CSR_TYPE_RSL
#define basename_CAVM_RMAPX_ABX_JD1_CFG3(a,b) "RMAPX_ABX_JD1_CFG3"
#define device_bar_CAVM_RMAPX_ABX_JD1_CFG3(a,b) 0x2 /* PF_BAR2 */
#define busnum_CAVM_RMAPX_ABX_JD1_CFG3(a,b) (a)
#define arguments_CAVM_RMAPX_ABX_JD1_CFG3(a,b) (a),(b),-1,-1

/**
 * Register (RSL) rmap#_ab#_jd1_cfg4
 *
 * RMAP Slot 0 Configuration Register 4
 * This register stores the 5th job configuration word for slot 0.
 * Software should not write this register directly, but instead use this
 * format when writing the job configuration section of the job descriptor.
 */
union cavm_rmapx_abx_jd1_cfg4
{
    uint64_t u;
    struct cavm_rmapx_abx_jd1_cfg4_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t cfg4_data             : 64; /**< [ 63:  0](R/W) CFG4 Data */
#else /* Word 0 - Little Endian */
        uint64_t cfg4_data             : 64; /**< [ 63:  0](R/W) CFG4 Data */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_rmapx_abx_jd1_cfg4_s cn; */
};
typedef union cavm_rmapx_abx_jd1_cfg4 cavm_rmapx_abx_jd1_cfg4_t;

static inline uint64_t CAVM_RMAPX_ABX_JD1_CFG4(uint64_t a, uint64_t b) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_RMAPX_ABX_JD1_CFG4(uint64_t a, uint64_t b)
{
    if (cavm_is_model(OCTEONTX_CNF20KA) && ((a<=1) && (b<=1)))
        return 0x87e041a04020ll + 0x80000ll * ((a) & 0x1) + 0x10000ll * ((b) & 0x1);
    __cavm_csr_fatal("RMAPX_ABX_JD1_CFG4", 2, a, b, 0, 0, 0, 0);
}

#define typedef_CAVM_RMAPX_ABX_JD1_CFG4(a,b) cavm_rmapx_abx_jd1_cfg4_t
#define bustype_CAVM_RMAPX_ABX_JD1_CFG4(a,b) CSR_TYPE_RSL
#define basename_CAVM_RMAPX_ABX_JD1_CFG4(a,b) "RMAPX_ABX_JD1_CFG4"
#define device_bar_CAVM_RMAPX_ABX_JD1_CFG4(a,b) 0x2 /* PF_BAR2 */
#define busnum_CAVM_RMAPX_ABX_JD1_CFG4(a,b) (a)
#define arguments_CAVM_RMAPX_ABX_JD1_CFG4(a,b) (a),(b),-1,-1

/**
 * Register (RSL) rmap#_ab#_jd1_cfg5
 *
 * RMAP Slot 0 Configuration Register 5
 * This register stores the 6th job configuration word for slot 0.
 * Software should not write this register directly, but instead use this
 * format when writing the job configuration section of the job descriptor.
 */
union cavm_rmapx_abx_jd1_cfg5
{
    uint64_t u;
    struct cavm_rmapx_abx_jd1_cfg5_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t cfg5_data             : 64; /**< [ 63:  0](R/W) CFG5 Data */
#else /* Word 0 - Little Endian */
        uint64_t cfg5_data             : 64; /**< [ 63:  0](R/W) CFG5 Data */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_rmapx_abx_jd1_cfg5_s cn; */
};
typedef union cavm_rmapx_abx_jd1_cfg5 cavm_rmapx_abx_jd1_cfg5_t;

static inline uint64_t CAVM_RMAPX_ABX_JD1_CFG5(uint64_t a, uint64_t b) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_RMAPX_ABX_JD1_CFG5(uint64_t a, uint64_t b)
{
    if (cavm_is_model(OCTEONTX_CNF20KA) && ((a<=1) && (b<=1)))
        return 0x87e041a04028ll + 0x80000ll * ((a) & 0x1) + 0x10000ll * ((b) & 0x1);
    __cavm_csr_fatal("RMAPX_ABX_JD1_CFG5", 2, a, b, 0, 0, 0, 0);
}

#define typedef_CAVM_RMAPX_ABX_JD1_CFG5(a,b) cavm_rmapx_abx_jd1_cfg5_t
#define bustype_CAVM_RMAPX_ABX_JD1_CFG5(a,b) CSR_TYPE_RSL
#define basename_CAVM_RMAPX_ABX_JD1_CFG5(a,b) "RMAPX_ABX_JD1_CFG5"
#define device_bar_CAVM_RMAPX_ABX_JD1_CFG5(a,b) 0x2 /* PF_BAR2 */
#define busnum_CAVM_RMAPX_ABX_JD1_CFG5(a,b) (a)
#define arguments_CAVM_RMAPX_ABX_JD1_CFG5(a,b) (a),(b),-1,-1

/**
 * Register (RSL) rmap#_ab#_jd1_cfg6
 *
 * RMAP Slot 0 Configuration Register 6
 * This register stores the 7th job configuration word for slot 0.
 * Software should not write this register directly, but instead use this
 * format when writing the job configuration section of the job descriptor.
 */
union cavm_rmapx_abx_jd1_cfg6
{
    uint64_t u;
    struct cavm_rmapx_abx_jd1_cfg6_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t cfg6_data             : 64; /**< [ 63:  0](R/W) CFG6 Data */
#else /* Word 0 - Little Endian */
        uint64_t cfg6_data             : 64; /**< [ 63:  0](R/W) CFG6 Data */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_rmapx_abx_jd1_cfg6_s cn; */
};
typedef union cavm_rmapx_abx_jd1_cfg6 cavm_rmapx_abx_jd1_cfg6_t;

static inline uint64_t CAVM_RMAPX_ABX_JD1_CFG6(uint64_t a, uint64_t b) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_RMAPX_ABX_JD1_CFG6(uint64_t a, uint64_t b)
{
    if (cavm_is_model(OCTEONTX_CNF20KA) && ((a<=1) && (b<=1)))
        return 0x87e041a04030ll + 0x80000ll * ((a) & 0x1) + 0x10000ll * ((b) & 0x1);
    __cavm_csr_fatal("RMAPX_ABX_JD1_CFG6", 2, a, b, 0, 0, 0, 0);
}

#define typedef_CAVM_RMAPX_ABX_JD1_CFG6(a,b) cavm_rmapx_abx_jd1_cfg6_t
#define bustype_CAVM_RMAPX_ABX_JD1_CFG6(a,b) CSR_TYPE_RSL
#define basename_CAVM_RMAPX_ABX_JD1_CFG6(a,b) "RMAPX_ABX_JD1_CFG6"
#define device_bar_CAVM_RMAPX_ABX_JD1_CFG6(a,b) 0x2 /* PF_BAR2 */
#define busnum_CAVM_RMAPX_ABX_JD1_CFG6(a,b) (a)
#define arguments_CAVM_RMAPX_ABX_JD1_CFG6(a,b) (a),(b),-1,-1

/**
 * Register (RSL) rmap#_ab#_jd1_cfg7
 *
 * RMAP Slot 0 Configuration Register 7
 * This register stores the 8th job configuration word for slot 0.
 * Software should not write this register directly, but instead use this
 * format when writing the job configuration section of the job descriptor.
 */
union cavm_rmapx_abx_jd1_cfg7
{
    uint64_t u;
    struct cavm_rmapx_abx_jd1_cfg7_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t cfg7_data             : 64; /**< [ 63:  0](R/W) CFG7 Data */
#else /* Word 0 - Little Endian */
        uint64_t cfg7_data             : 64; /**< [ 63:  0](R/W) CFG7 Data */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_rmapx_abx_jd1_cfg7_s cn; */
};
typedef union cavm_rmapx_abx_jd1_cfg7 cavm_rmapx_abx_jd1_cfg7_t;

static inline uint64_t CAVM_RMAPX_ABX_JD1_CFG7(uint64_t a, uint64_t b) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_RMAPX_ABX_JD1_CFG7(uint64_t a, uint64_t b)
{
    if (cavm_is_model(OCTEONTX_CNF20KA) && ((a<=1) && (b<=1)))
        return 0x87e041a04038ll + 0x80000ll * ((a) & 0x1) + 0x10000ll * ((b) & 0x1);
    __cavm_csr_fatal("RMAPX_ABX_JD1_CFG7", 2, a, b, 0, 0, 0, 0);
}

#define typedef_CAVM_RMAPX_ABX_JD1_CFG7(a,b) cavm_rmapx_abx_jd1_cfg7_t
#define bustype_CAVM_RMAPX_ABX_JD1_CFG7(a,b) CSR_TYPE_RSL
#define basename_CAVM_RMAPX_ABX_JD1_CFG7(a,b) "RMAPX_ABX_JD1_CFG7"
#define device_bar_CAVM_RMAPX_ABX_JD1_CFG7(a,b) 0x2 /* PF_BAR2 */
#define busnum_CAVM_RMAPX_ABX_JD1_CFG7(a,b) (a)
#define arguments_CAVM_RMAPX_ABX_JD1_CFG7(a,b) (a),(b),-1,-1

/**
 * Register (RSL) rmap#_ab#_jd1_cfg8
 *
 * RMAP Slot 0 Configuration Register 8
 * This register stores the 9th job configuration word for slot 0.
 * Software should not write this register directly, but instead use this
 * format when writing the job configuration section of the job descriptor.
 */
union cavm_rmapx_abx_jd1_cfg8
{
    uint64_t u;
    struct cavm_rmapx_abx_jd1_cfg8_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t cfg8_data             : 64; /**< [ 63:  0](R/W) CFG8 Data */
#else /* Word 0 - Little Endian */
        uint64_t cfg8_data             : 64; /**< [ 63:  0](R/W) CFG8 Data */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_rmapx_abx_jd1_cfg8_s cn; */
};
typedef union cavm_rmapx_abx_jd1_cfg8 cavm_rmapx_abx_jd1_cfg8_t;

static inline uint64_t CAVM_RMAPX_ABX_JD1_CFG8(uint64_t a, uint64_t b) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_RMAPX_ABX_JD1_CFG8(uint64_t a, uint64_t b)
{
    if (cavm_is_model(OCTEONTX_CNF20KA) && ((a<=1) && (b<=1)))
        return 0x87e041a04040ll + 0x80000ll * ((a) & 0x1) + 0x10000ll * ((b) & 0x1);
    __cavm_csr_fatal("RMAPX_ABX_JD1_CFG8", 2, a, b, 0, 0, 0, 0);
}

#define typedef_CAVM_RMAPX_ABX_JD1_CFG8(a,b) cavm_rmapx_abx_jd1_cfg8_t
#define bustype_CAVM_RMAPX_ABX_JD1_CFG8(a,b) CSR_TYPE_RSL
#define basename_CAVM_RMAPX_ABX_JD1_CFG8(a,b) "RMAPX_ABX_JD1_CFG8"
#define device_bar_CAVM_RMAPX_ABX_JD1_CFG8(a,b) 0x2 /* PF_BAR2 */
#define busnum_CAVM_RMAPX_ABX_JD1_CFG8(a,b) (a)
#define arguments_CAVM_RMAPX_ABX_JD1_CFG8(a,b) (a),(b),-1,-1

/**
 * Register (RSL) rmap#_ab#_jd1_cfg9
 *
 * RMAP Slot 0 Configuration Register 9
 * This register stores the 10th job configuration word for slot 0.
 * Software should not write this register directly, but instead use this
 * format when writing the job configuration section of the job descriptor.
 */
union cavm_rmapx_abx_jd1_cfg9
{
    uint64_t u;
    struct cavm_rmapx_abx_jd1_cfg9_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t cfg9_data             : 64; /**< [ 63:  0](R/W) CFG9 Data */
#else /* Word 0 - Little Endian */
        uint64_t cfg9_data             : 64; /**< [ 63:  0](R/W) CFG9 Data */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_rmapx_abx_jd1_cfg9_s cn; */
};
typedef union cavm_rmapx_abx_jd1_cfg9 cavm_rmapx_abx_jd1_cfg9_t;

static inline uint64_t CAVM_RMAPX_ABX_JD1_CFG9(uint64_t a, uint64_t b) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_RMAPX_ABX_JD1_CFG9(uint64_t a, uint64_t b)
{
    if (cavm_is_model(OCTEONTX_CNF20KA) && ((a<=1) && (b<=1)))
        return 0x87e041a04048ll + 0x80000ll * ((a) & 0x1) + 0x10000ll * ((b) & 0x1);
    __cavm_csr_fatal("RMAPX_ABX_JD1_CFG9", 2, a, b, 0, 0, 0, 0);
}

#define typedef_CAVM_RMAPX_ABX_JD1_CFG9(a,b) cavm_rmapx_abx_jd1_cfg9_t
#define bustype_CAVM_RMAPX_ABX_JD1_CFG9(a,b) CSR_TYPE_RSL
#define basename_CAVM_RMAPX_ABX_JD1_CFG9(a,b) "RMAPX_ABX_JD1_CFG9"
#define device_bar_CAVM_RMAPX_ABX_JD1_CFG9(a,b) 0x2 /* PF_BAR2 */
#define busnum_CAVM_RMAPX_ABX_JD1_CFG9(a,b) (a)
#define arguments_CAVM_RMAPX_ABX_JD1_CFG9(a,b) (a),(b),-1,-1

/**
 * Register (RSL) rmap#_ab#_jd2_cfg0
 *
 * RMAP Slot 0 Configuration Register 0
 * This register stores the 1st job configuration word for slot 0.
 * Software should not write this register directly, but instead use this
 * format when writing the job configuration section of the job descriptor.
 */
union cavm_rmapx_abx_jd2_cfg0
{
    uint64_t u;
    struct cavm_rmapx_abx_jd2_cfg0_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t phy_mode              : 1;  /**< [ 63: 63](R/W) LTE/NR Mode. 0 = LTE, 1 = NR. */
        uint64_t cfg0_data             : 63; /**< [ 62:  0](R/W) CFG0 Data */
#else /* Word 0 - Little Endian */
        uint64_t cfg0_data             : 63; /**< [ 62:  0](R/W) CFG0 Data */
        uint64_t phy_mode              : 1;  /**< [ 63: 63](R/W) LTE/NR Mode. 0 = LTE, 1 = NR. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_rmapx_abx_jd2_cfg0_s cn; */
};
typedef union cavm_rmapx_abx_jd2_cfg0 cavm_rmapx_abx_jd2_cfg0_t;

static inline uint64_t CAVM_RMAPX_ABX_JD2_CFG0(uint64_t a, uint64_t b) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_RMAPX_ABX_JD2_CFG0(uint64_t a, uint64_t b)
{
    if (cavm_is_model(OCTEONTX_CNF20KA) && ((a<=1) && (b<=1)))
        return 0x87e041a06000ll + 0x80000ll * ((a) & 0x1) + 0x10000ll * ((b) & 0x1);
    __cavm_csr_fatal("RMAPX_ABX_JD2_CFG0", 2, a, b, 0, 0, 0, 0);
}

#define typedef_CAVM_RMAPX_ABX_JD2_CFG0(a,b) cavm_rmapx_abx_jd2_cfg0_t
#define bustype_CAVM_RMAPX_ABX_JD2_CFG0(a,b) CSR_TYPE_RSL
#define basename_CAVM_RMAPX_ABX_JD2_CFG0(a,b) "RMAPX_ABX_JD2_CFG0"
#define device_bar_CAVM_RMAPX_ABX_JD2_CFG0(a,b) 0x2 /* PF_BAR2 */
#define busnum_CAVM_RMAPX_ABX_JD2_CFG0(a,b) (a)
#define arguments_CAVM_RMAPX_ABX_JD2_CFG0(a,b) (a),(b),-1,-1

/**
 * Register (RSL) rmap#_ab#_jd2_cfg1
 *
 * RMAP Slot 0 Configuration Register 1
 * This register stores the 2nd job configuration word for slot 0.
 * Software should not write this register directly, but instead use this
 * format when writing the job configuration section of the job descriptor.
 */
union cavm_rmapx_abx_jd2_cfg1
{
    uint64_t u;
    struct cavm_rmapx_abx_jd2_cfg1_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t cfg1_data             : 64; /**< [ 63:  0](R/W) CFG1 Data */
#else /* Word 0 - Little Endian */
        uint64_t cfg1_data             : 64; /**< [ 63:  0](R/W) CFG1 Data */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_rmapx_abx_jd2_cfg1_s cn; */
};
typedef union cavm_rmapx_abx_jd2_cfg1 cavm_rmapx_abx_jd2_cfg1_t;

static inline uint64_t CAVM_RMAPX_ABX_JD2_CFG1(uint64_t a, uint64_t b) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_RMAPX_ABX_JD2_CFG1(uint64_t a, uint64_t b)
{
    if (cavm_is_model(OCTEONTX_CNF20KA) && ((a<=1) && (b<=1)))
        return 0x87e041a06008ll + 0x80000ll * ((a) & 0x1) + 0x10000ll * ((b) & 0x1);
    __cavm_csr_fatal("RMAPX_ABX_JD2_CFG1", 2, a, b, 0, 0, 0, 0);
}

#define typedef_CAVM_RMAPX_ABX_JD2_CFG1(a,b) cavm_rmapx_abx_jd2_cfg1_t
#define bustype_CAVM_RMAPX_ABX_JD2_CFG1(a,b) CSR_TYPE_RSL
#define basename_CAVM_RMAPX_ABX_JD2_CFG1(a,b) "RMAPX_ABX_JD2_CFG1"
#define device_bar_CAVM_RMAPX_ABX_JD2_CFG1(a,b) 0x2 /* PF_BAR2 */
#define busnum_CAVM_RMAPX_ABX_JD2_CFG1(a,b) (a)
#define arguments_CAVM_RMAPX_ABX_JD2_CFG1(a,b) (a),(b),-1,-1

/**
 * Register (RSL) rmap#_ab#_jd2_cfg10
 *
 * RMAP Slot 0 Configuration Register 10
 * This register stores the 11th job configuration word for slot 0.
 * Software should not write this register directly, but instead use this
 * format when writing the job configuration section of the job descriptor.
 */
union cavm_rmapx_abx_jd2_cfg10
{
    uint64_t u;
    struct cavm_rmapx_abx_jd2_cfg10_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t cfg10_data            : 64; /**< [ 63:  0](R/W) CFG10 Data */
#else /* Word 0 - Little Endian */
        uint64_t cfg10_data            : 64; /**< [ 63:  0](R/W) CFG10 Data */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_rmapx_abx_jd2_cfg10_s cn; */
};
typedef union cavm_rmapx_abx_jd2_cfg10 cavm_rmapx_abx_jd2_cfg10_t;

static inline uint64_t CAVM_RMAPX_ABX_JD2_CFG10(uint64_t a, uint64_t b) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_RMAPX_ABX_JD2_CFG10(uint64_t a, uint64_t b)
{
    if (cavm_is_model(OCTEONTX_CNF20KA) && ((a<=1) && (b<=1)))
        return 0x87e041a06050ll + 0x80000ll * ((a) & 0x1) + 0x10000ll * ((b) & 0x1);
    __cavm_csr_fatal("RMAPX_ABX_JD2_CFG10", 2, a, b, 0, 0, 0, 0);
}

#define typedef_CAVM_RMAPX_ABX_JD2_CFG10(a,b) cavm_rmapx_abx_jd2_cfg10_t
#define bustype_CAVM_RMAPX_ABX_JD2_CFG10(a,b) CSR_TYPE_RSL
#define basename_CAVM_RMAPX_ABX_JD2_CFG10(a,b) "RMAPX_ABX_JD2_CFG10"
#define device_bar_CAVM_RMAPX_ABX_JD2_CFG10(a,b) 0x2 /* PF_BAR2 */
#define busnum_CAVM_RMAPX_ABX_JD2_CFG10(a,b) (a)
#define arguments_CAVM_RMAPX_ABX_JD2_CFG10(a,b) (a),(b),-1,-1

/**
 * Register (RSL) rmap#_ab#_jd2_cfg11
 *
 * RMAP Slot 0 Configuration Register 11
 * This register stores the 12th job configuration word for slot 0.
 * Software should not write this register directly, but instead use this
 * format when writing the job configuration section of the job descriptor.
 */
union cavm_rmapx_abx_jd2_cfg11
{
    uint64_t u;
    struct cavm_rmapx_abx_jd2_cfg11_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t cfg11_data            : 64; /**< [ 63:  0](R/W) CFG11 Data */
#else /* Word 0 - Little Endian */
        uint64_t cfg11_data            : 64; /**< [ 63:  0](R/W) CFG11 Data */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_rmapx_abx_jd2_cfg11_s cn; */
};
typedef union cavm_rmapx_abx_jd2_cfg11 cavm_rmapx_abx_jd2_cfg11_t;

static inline uint64_t CAVM_RMAPX_ABX_JD2_CFG11(uint64_t a, uint64_t b) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_RMAPX_ABX_JD2_CFG11(uint64_t a, uint64_t b)
{
    if (cavm_is_model(OCTEONTX_CNF20KA) && ((a<=1) && (b<=1)))
        return 0x87e041a06058ll + 0x80000ll * ((a) & 0x1) + 0x10000ll * ((b) & 0x1);
    __cavm_csr_fatal("RMAPX_ABX_JD2_CFG11", 2, a, b, 0, 0, 0, 0);
}

#define typedef_CAVM_RMAPX_ABX_JD2_CFG11(a,b) cavm_rmapx_abx_jd2_cfg11_t
#define bustype_CAVM_RMAPX_ABX_JD2_CFG11(a,b) CSR_TYPE_RSL
#define basename_CAVM_RMAPX_ABX_JD2_CFG11(a,b) "RMAPX_ABX_JD2_CFG11"
#define device_bar_CAVM_RMAPX_ABX_JD2_CFG11(a,b) 0x2 /* PF_BAR2 */
#define busnum_CAVM_RMAPX_ABX_JD2_CFG11(a,b) (a)
#define arguments_CAVM_RMAPX_ABX_JD2_CFG11(a,b) (a),(b),-1,-1

/**
 * Register (RSL) rmap#_ab#_jd2_cfg12
 *
 * RMAP Slot 0 Configuration Register 12
 * This register stores the 13th job configuration word for slot 0.
 * Software should not write this register directly, but instead use this
 * format when writing the job configuration section of the job descriptor.
 */
union cavm_rmapx_abx_jd2_cfg12
{
    uint64_t u;
    struct cavm_rmapx_abx_jd2_cfg12_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t cfg12_data            : 64; /**< [ 63:  0](R/W) CFG12 Data */
#else /* Word 0 - Little Endian */
        uint64_t cfg12_data            : 64; /**< [ 63:  0](R/W) CFG12 Data */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_rmapx_abx_jd2_cfg12_s cn; */
};
typedef union cavm_rmapx_abx_jd2_cfg12 cavm_rmapx_abx_jd2_cfg12_t;

static inline uint64_t CAVM_RMAPX_ABX_JD2_CFG12(uint64_t a, uint64_t b) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_RMAPX_ABX_JD2_CFG12(uint64_t a, uint64_t b)
{
    if (cavm_is_model(OCTEONTX_CNF20KA) && ((a<=1) && (b<=1)))
        return 0x87e041a06060ll + 0x80000ll * ((a) & 0x1) + 0x10000ll * ((b) & 0x1);
    __cavm_csr_fatal("RMAPX_ABX_JD2_CFG12", 2, a, b, 0, 0, 0, 0);
}

#define typedef_CAVM_RMAPX_ABX_JD2_CFG12(a,b) cavm_rmapx_abx_jd2_cfg12_t
#define bustype_CAVM_RMAPX_ABX_JD2_CFG12(a,b) CSR_TYPE_RSL
#define basename_CAVM_RMAPX_ABX_JD2_CFG12(a,b) "RMAPX_ABX_JD2_CFG12"
#define device_bar_CAVM_RMAPX_ABX_JD2_CFG12(a,b) 0x2 /* PF_BAR2 */
#define busnum_CAVM_RMAPX_ABX_JD2_CFG12(a,b) (a)
#define arguments_CAVM_RMAPX_ABX_JD2_CFG12(a,b) (a),(b),-1,-1

/**
 * Register (RSL) rmap#_ab#_jd2_cfg2
 *
 * RMAP Slot 0 Configuration Register 2
 * This register stores the 3rd job configuration word for slot 0.
 * Software should not write this register directly, but instead use this
 * format when writing the job configuration section of the job descriptor.
 */
union cavm_rmapx_abx_jd2_cfg2
{
    uint64_t u;
    struct cavm_rmapx_abx_jd2_cfg2_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t cfg2_data             : 64; /**< [ 63:  0](R/W) CFG2 Data */
#else /* Word 0 - Little Endian */
        uint64_t cfg2_data             : 64; /**< [ 63:  0](R/W) CFG2 Data */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_rmapx_abx_jd2_cfg2_s cn; */
};
typedef union cavm_rmapx_abx_jd2_cfg2 cavm_rmapx_abx_jd2_cfg2_t;

static inline uint64_t CAVM_RMAPX_ABX_JD2_CFG2(uint64_t a, uint64_t b) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_RMAPX_ABX_JD2_CFG2(uint64_t a, uint64_t b)
{
    if (cavm_is_model(OCTEONTX_CNF20KA) && ((a<=1) && (b<=1)))
        return 0x87e041a06010ll + 0x80000ll * ((a) & 0x1) + 0x10000ll * ((b) & 0x1);
    __cavm_csr_fatal("RMAPX_ABX_JD2_CFG2", 2, a, b, 0, 0, 0, 0);
}

#define typedef_CAVM_RMAPX_ABX_JD2_CFG2(a,b) cavm_rmapx_abx_jd2_cfg2_t
#define bustype_CAVM_RMAPX_ABX_JD2_CFG2(a,b) CSR_TYPE_RSL
#define basename_CAVM_RMAPX_ABX_JD2_CFG2(a,b) "RMAPX_ABX_JD2_CFG2"
#define device_bar_CAVM_RMAPX_ABX_JD2_CFG2(a,b) 0x2 /* PF_BAR2 */
#define busnum_CAVM_RMAPX_ABX_JD2_CFG2(a,b) (a)
#define arguments_CAVM_RMAPX_ABX_JD2_CFG2(a,b) (a),(b),-1,-1

/**
 * Register (RSL) rmap#_ab#_jd2_cfg3
 *
 * RMAP Slot 0 Configuration Register 3
 * This register stores the 4th job configuration word for slot 0.
 * Software should not write this register directly, but instead use this
 * format when writing the job configuration section of the job descriptor.
 */
union cavm_rmapx_abx_jd2_cfg3
{
    uint64_t u;
    struct cavm_rmapx_abx_jd2_cfg3_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t cfg3_data             : 64; /**< [ 63:  0](R/W) CFG3 Data */
#else /* Word 0 - Little Endian */
        uint64_t cfg3_data             : 64; /**< [ 63:  0](R/W) CFG3 Data */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_rmapx_abx_jd2_cfg3_s cn; */
};
typedef union cavm_rmapx_abx_jd2_cfg3 cavm_rmapx_abx_jd2_cfg3_t;

static inline uint64_t CAVM_RMAPX_ABX_JD2_CFG3(uint64_t a, uint64_t b) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_RMAPX_ABX_JD2_CFG3(uint64_t a, uint64_t b)
{
    if (cavm_is_model(OCTEONTX_CNF20KA) && ((a<=1) && (b<=1)))
        return 0x87e041a06018ll + 0x80000ll * ((a) & 0x1) + 0x10000ll * ((b) & 0x1);
    __cavm_csr_fatal("RMAPX_ABX_JD2_CFG3", 2, a, b, 0, 0, 0, 0);
}

#define typedef_CAVM_RMAPX_ABX_JD2_CFG3(a,b) cavm_rmapx_abx_jd2_cfg3_t
#define bustype_CAVM_RMAPX_ABX_JD2_CFG3(a,b) CSR_TYPE_RSL
#define basename_CAVM_RMAPX_ABX_JD2_CFG3(a,b) "RMAPX_ABX_JD2_CFG3"
#define device_bar_CAVM_RMAPX_ABX_JD2_CFG3(a,b) 0x2 /* PF_BAR2 */
#define busnum_CAVM_RMAPX_ABX_JD2_CFG3(a,b) (a)
#define arguments_CAVM_RMAPX_ABX_JD2_CFG3(a,b) (a),(b),-1,-1

/**
 * Register (RSL) rmap#_ab#_jd2_cfg4
 *
 * RMAP Slot 0 Configuration Register 4
 * This register stores the 5th job configuration word for slot 0.
 * Software should not write this register directly, but instead use this
 * format when writing the job configuration section of the job descriptor.
 */
union cavm_rmapx_abx_jd2_cfg4
{
    uint64_t u;
    struct cavm_rmapx_abx_jd2_cfg4_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t cfg4_data             : 64; /**< [ 63:  0](R/W) CFG4 Data */
#else /* Word 0 - Little Endian */
        uint64_t cfg4_data             : 64; /**< [ 63:  0](R/W) CFG4 Data */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_rmapx_abx_jd2_cfg4_s cn; */
};
typedef union cavm_rmapx_abx_jd2_cfg4 cavm_rmapx_abx_jd2_cfg4_t;

static inline uint64_t CAVM_RMAPX_ABX_JD2_CFG4(uint64_t a, uint64_t b) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_RMAPX_ABX_JD2_CFG4(uint64_t a, uint64_t b)
{
    if (cavm_is_model(OCTEONTX_CNF20KA) && ((a<=1) && (b<=1)))
        return 0x87e041a06020ll + 0x80000ll * ((a) & 0x1) + 0x10000ll * ((b) & 0x1);
    __cavm_csr_fatal("RMAPX_ABX_JD2_CFG4", 2, a, b, 0, 0, 0, 0);
}

#define typedef_CAVM_RMAPX_ABX_JD2_CFG4(a,b) cavm_rmapx_abx_jd2_cfg4_t
#define bustype_CAVM_RMAPX_ABX_JD2_CFG4(a,b) CSR_TYPE_RSL
#define basename_CAVM_RMAPX_ABX_JD2_CFG4(a,b) "RMAPX_ABX_JD2_CFG4"
#define device_bar_CAVM_RMAPX_ABX_JD2_CFG4(a,b) 0x2 /* PF_BAR2 */
#define busnum_CAVM_RMAPX_ABX_JD2_CFG4(a,b) (a)
#define arguments_CAVM_RMAPX_ABX_JD2_CFG4(a,b) (a),(b),-1,-1

/**
 * Register (RSL) rmap#_ab#_jd2_cfg5
 *
 * RMAP Slot 0 Configuration Register 5
 * This register stores the 6th job configuration word for slot 0.
 * Software should not write this register directly, but instead use this
 * format when writing the job configuration section of the job descriptor.
 */
union cavm_rmapx_abx_jd2_cfg5
{
    uint64_t u;
    struct cavm_rmapx_abx_jd2_cfg5_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t cfg5_data             : 64; /**< [ 63:  0](R/W) CFG5 Data */
#else /* Word 0 - Little Endian */
        uint64_t cfg5_data             : 64; /**< [ 63:  0](R/W) CFG5 Data */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_rmapx_abx_jd2_cfg5_s cn; */
};
typedef union cavm_rmapx_abx_jd2_cfg5 cavm_rmapx_abx_jd2_cfg5_t;

static inline uint64_t CAVM_RMAPX_ABX_JD2_CFG5(uint64_t a, uint64_t b) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_RMAPX_ABX_JD2_CFG5(uint64_t a, uint64_t b)
{
    if (cavm_is_model(OCTEONTX_CNF20KA) && ((a<=1) && (b<=1)))
        return 0x87e041a06028ll + 0x80000ll * ((a) & 0x1) + 0x10000ll * ((b) & 0x1);
    __cavm_csr_fatal("RMAPX_ABX_JD2_CFG5", 2, a, b, 0, 0, 0, 0);
}

#define typedef_CAVM_RMAPX_ABX_JD2_CFG5(a,b) cavm_rmapx_abx_jd2_cfg5_t
#define bustype_CAVM_RMAPX_ABX_JD2_CFG5(a,b) CSR_TYPE_RSL
#define basename_CAVM_RMAPX_ABX_JD2_CFG5(a,b) "RMAPX_ABX_JD2_CFG5"
#define device_bar_CAVM_RMAPX_ABX_JD2_CFG5(a,b) 0x2 /* PF_BAR2 */
#define busnum_CAVM_RMAPX_ABX_JD2_CFG5(a,b) (a)
#define arguments_CAVM_RMAPX_ABX_JD2_CFG5(a,b) (a),(b),-1,-1

/**
 * Register (RSL) rmap#_ab#_jd2_cfg6
 *
 * RMAP Slot 0 Configuration Register 6
 * This register stores the 7th job configuration word for slot 0.
 * Software should not write this register directly, but instead use this
 * format when writing the job configuration section of the job descriptor.
 */
union cavm_rmapx_abx_jd2_cfg6
{
    uint64_t u;
    struct cavm_rmapx_abx_jd2_cfg6_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t cfg6_data             : 64; /**< [ 63:  0](R/W) CFG6 Data */
#else /* Word 0 - Little Endian */
        uint64_t cfg6_data             : 64; /**< [ 63:  0](R/W) CFG6 Data */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_rmapx_abx_jd2_cfg6_s cn; */
};
typedef union cavm_rmapx_abx_jd2_cfg6 cavm_rmapx_abx_jd2_cfg6_t;

static inline uint64_t CAVM_RMAPX_ABX_JD2_CFG6(uint64_t a, uint64_t b) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_RMAPX_ABX_JD2_CFG6(uint64_t a, uint64_t b)
{
    if (cavm_is_model(OCTEONTX_CNF20KA) && ((a<=1) && (b<=1)))
        return 0x87e041a06030ll + 0x80000ll * ((a) & 0x1) + 0x10000ll * ((b) & 0x1);
    __cavm_csr_fatal("RMAPX_ABX_JD2_CFG6", 2, a, b, 0, 0, 0, 0);
}

#define typedef_CAVM_RMAPX_ABX_JD2_CFG6(a,b) cavm_rmapx_abx_jd2_cfg6_t
#define bustype_CAVM_RMAPX_ABX_JD2_CFG6(a,b) CSR_TYPE_RSL
#define basename_CAVM_RMAPX_ABX_JD2_CFG6(a,b) "RMAPX_ABX_JD2_CFG6"
#define device_bar_CAVM_RMAPX_ABX_JD2_CFG6(a,b) 0x2 /* PF_BAR2 */
#define busnum_CAVM_RMAPX_ABX_JD2_CFG6(a,b) (a)
#define arguments_CAVM_RMAPX_ABX_JD2_CFG6(a,b) (a),(b),-1,-1

/**
 * Register (RSL) rmap#_ab#_jd2_cfg7
 *
 * RMAP Slot 0 Configuration Register 7
 * This register stores the 8th job configuration word for slot 0.
 * Software should not write this register directly, but instead use this
 * format when writing the job configuration section of the job descriptor.
 */
union cavm_rmapx_abx_jd2_cfg7
{
    uint64_t u;
    struct cavm_rmapx_abx_jd2_cfg7_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t cfg7_data             : 64; /**< [ 63:  0](R/W) CFG7 Data */
#else /* Word 0 - Little Endian */
        uint64_t cfg7_data             : 64; /**< [ 63:  0](R/W) CFG7 Data */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_rmapx_abx_jd2_cfg7_s cn; */
};
typedef union cavm_rmapx_abx_jd2_cfg7 cavm_rmapx_abx_jd2_cfg7_t;

static inline uint64_t CAVM_RMAPX_ABX_JD2_CFG7(uint64_t a, uint64_t b) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_RMAPX_ABX_JD2_CFG7(uint64_t a, uint64_t b)
{
    if (cavm_is_model(OCTEONTX_CNF20KA) && ((a<=1) && (b<=1)))
        return 0x87e041a06038ll + 0x80000ll * ((a) & 0x1) + 0x10000ll * ((b) & 0x1);
    __cavm_csr_fatal("RMAPX_ABX_JD2_CFG7", 2, a, b, 0, 0, 0, 0);
}

#define typedef_CAVM_RMAPX_ABX_JD2_CFG7(a,b) cavm_rmapx_abx_jd2_cfg7_t
#define bustype_CAVM_RMAPX_ABX_JD2_CFG7(a,b) CSR_TYPE_RSL
#define basename_CAVM_RMAPX_ABX_JD2_CFG7(a,b) "RMAPX_ABX_JD2_CFG7"
#define device_bar_CAVM_RMAPX_ABX_JD2_CFG7(a,b) 0x2 /* PF_BAR2 */
#define busnum_CAVM_RMAPX_ABX_JD2_CFG7(a,b) (a)
#define arguments_CAVM_RMAPX_ABX_JD2_CFG7(a,b) (a),(b),-1,-1

/**
 * Register (RSL) rmap#_ab#_jd2_cfg8
 *
 * RMAP Slot 0 Configuration Register 8
 * This register stores the 9th job configuration word for slot 0.
 * Software should not write this register directly, but instead use this
 * format when writing the job configuration section of the job descriptor.
 */
union cavm_rmapx_abx_jd2_cfg8
{
    uint64_t u;
    struct cavm_rmapx_abx_jd2_cfg8_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t cfg8_data             : 64; /**< [ 63:  0](R/W) CFG8 Data */
#else /* Word 0 - Little Endian */
        uint64_t cfg8_data             : 64; /**< [ 63:  0](R/W) CFG8 Data */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_rmapx_abx_jd2_cfg8_s cn; */
};
typedef union cavm_rmapx_abx_jd2_cfg8 cavm_rmapx_abx_jd2_cfg8_t;

static inline uint64_t CAVM_RMAPX_ABX_JD2_CFG8(uint64_t a, uint64_t b) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_RMAPX_ABX_JD2_CFG8(uint64_t a, uint64_t b)
{
    if (cavm_is_model(OCTEONTX_CNF20KA) && ((a<=1) && (b<=1)))
        return 0x87e041a06040ll + 0x80000ll * ((a) & 0x1) + 0x10000ll * ((b) & 0x1);
    __cavm_csr_fatal("RMAPX_ABX_JD2_CFG8", 2, a, b, 0, 0, 0, 0);
}

#define typedef_CAVM_RMAPX_ABX_JD2_CFG8(a,b) cavm_rmapx_abx_jd2_cfg8_t
#define bustype_CAVM_RMAPX_ABX_JD2_CFG8(a,b) CSR_TYPE_RSL
#define basename_CAVM_RMAPX_ABX_JD2_CFG8(a,b) "RMAPX_ABX_JD2_CFG8"
#define device_bar_CAVM_RMAPX_ABX_JD2_CFG8(a,b) 0x2 /* PF_BAR2 */
#define busnum_CAVM_RMAPX_ABX_JD2_CFG8(a,b) (a)
#define arguments_CAVM_RMAPX_ABX_JD2_CFG8(a,b) (a),(b),-1,-1

/**
 * Register (RSL) rmap#_ab#_jd2_cfg9
 *
 * RMAP Slot 0 Configuration Register 9
 * This register stores the 10th job configuration word for slot 0.
 * Software should not write this register directly, but instead use this
 * format when writing the job configuration section of the job descriptor.
 */
union cavm_rmapx_abx_jd2_cfg9
{
    uint64_t u;
    struct cavm_rmapx_abx_jd2_cfg9_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t cfg9_data             : 64; /**< [ 63:  0](R/W) CFG9 Data */
#else /* Word 0 - Little Endian */
        uint64_t cfg9_data             : 64; /**< [ 63:  0](R/W) CFG9 Data */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_rmapx_abx_jd2_cfg9_s cn; */
};
typedef union cavm_rmapx_abx_jd2_cfg9 cavm_rmapx_abx_jd2_cfg9_t;

static inline uint64_t CAVM_RMAPX_ABX_JD2_CFG9(uint64_t a, uint64_t b) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_RMAPX_ABX_JD2_CFG9(uint64_t a, uint64_t b)
{
    if (cavm_is_model(OCTEONTX_CNF20KA) && ((a<=1) && (b<=1)))
        return 0x87e041a06048ll + 0x80000ll * ((a) & 0x1) + 0x10000ll * ((b) & 0x1);
    __cavm_csr_fatal("RMAPX_ABX_JD2_CFG9", 2, a, b, 0, 0, 0, 0);
}

#define typedef_CAVM_RMAPX_ABX_JD2_CFG9(a,b) cavm_rmapx_abx_jd2_cfg9_t
#define bustype_CAVM_RMAPX_ABX_JD2_CFG9(a,b) CSR_TYPE_RSL
#define basename_CAVM_RMAPX_ABX_JD2_CFG9(a,b) "RMAPX_ABX_JD2_CFG9"
#define device_bar_CAVM_RMAPX_ABX_JD2_CFG9(a,b) 0x2 /* PF_BAR2 */
#define busnum_CAVM_RMAPX_ABX_JD2_CFG9(a,b) (a)
#define arguments_CAVM_RMAPX_ABX_JD2_CFG9(a,b) (a),(b),-1,-1

/**
 * Register (RSL) rmap#_ab#_jd3_cfg0
 *
 * RMAP Slot 0 Configuration Register 0
 * This register stores the 1st job configuration word for slot 0.
 * Software should not write this register directly, but instead use this
 * format when writing the job configuration section of the job descriptor.
 */
union cavm_rmapx_abx_jd3_cfg0
{
    uint64_t u;
    struct cavm_rmapx_abx_jd3_cfg0_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t phy_mode              : 1;  /**< [ 63: 63](R/W) LTE/NR Mode. 0 = LTE, 1 = NR. */
        uint64_t cfg0_data             : 63; /**< [ 62:  0](R/W) CFG0 Data */
#else /* Word 0 - Little Endian */
        uint64_t cfg0_data             : 63; /**< [ 62:  0](R/W) CFG0 Data */
        uint64_t phy_mode              : 1;  /**< [ 63: 63](R/W) LTE/NR Mode. 0 = LTE, 1 = NR. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_rmapx_abx_jd3_cfg0_s cn; */
};
typedef union cavm_rmapx_abx_jd3_cfg0 cavm_rmapx_abx_jd3_cfg0_t;

static inline uint64_t CAVM_RMAPX_ABX_JD3_CFG0(uint64_t a, uint64_t b) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_RMAPX_ABX_JD3_CFG0(uint64_t a, uint64_t b)
{
    if (cavm_is_model(OCTEONTX_CNF20KA) && ((a<=1) && (b<=1)))
        return 0x87e041a08000ll + 0x80000ll * ((a) & 0x1) + 0x10000ll * ((b) & 0x1);
    __cavm_csr_fatal("RMAPX_ABX_JD3_CFG0", 2, a, b, 0, 0, 0, 0);
}

#define typedef_CAVM_RMAPX_ABX_JD3_CFG0(a,b) cavm_rmapx_abx_jd3_cfg0_t
#define bustype_CAVM_RMAPX_ABX_JD3_CFG0(a,b) CSR_TYPE_RSL
#define basename_CAVM_RMAPX_ABX_JD3_CFG0(a,b) "RMAPX_ABX_JD3_CFG0"
#define device_bar_CAVM_RMAPX_ABX_JD3_CFG0(a,b) 0x2 /* PF_BAR2 */
#define busnum_CAVM_RMAPX_ABX_JD3_CFG0(a,b) (a)
#define arguments_CAVM_RMAPX_ABX_JD3_CFG0(a,b) (a),(b),-1,-1

/**
 * Register (RSL) rmap#_ab#_jd3_cfg1
 *
 * RMAP Slot 0 Configuration Register 1
 * This register stores the 2nd job configuration word for slot 0.
 * Software should not write this register directly, but instead use this
 * format when writing the job configuration section of the job descriptor.
 */
union cavm_rmapx_abx_jd3_cfg1
{
    uint64_t u;
    struct cavm_rmapx_abx_jd3_cfg1_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t cfg1_data             : 64; /**< [ 63:  0](R/W) CFG1 Data */
#else /* Word 0 - Little Endian */
        uint64_t cfg1_data             : 64; /**< [ 63:  0](R/W) CFG1 Data */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_rmapx_abx_jd3_cfg1_s cn; */
};
typedef union cavm_rmapx_abx_jd3_cfg1 cavm_rmapx_abx_jd3_cfg1_t;

static inline uint64_t CAVM_RMAPX_ABX_JD3_CFG1(uint64_t a, uint64_t b) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_RMAPX_ABX_JD3_CFG1(uint64_t a, uint64_t b)
{
    if (cavm_is_model(OCTEONTX_CNF20KA) && ((a<=1) && (b<=1)))
        return 0x87e041a08008ll + 0x80000ll * ((a) & 0x1) + 0x10000ll * ((b) & 0x1);
    __cavm_csr_fatal("RMAPX_ABX_JD3_CFG1", 2, a, b, 0, 0, 0, 0);
}

#define typedef_CAVM_RMAPX_ABX_JD3_CFG1(a,b) cavm_rmapx_abx_jd3_cfg1_t
#define bustype_CAVM_RMAPX_ABX_JD3_CFG1(a,b) CSR_TYPE_RSL
#define basename_CAVM_RMAPX_ABX_JD3_CFG1(a,b) "RMAPX_ABX_JD3_CFG1"
#define device_bar_CAVM_RMAPX_ABX_JD3_CFG1(a,b) 0x2 /* PF_BAR2 */
#define busnum_CAVM_RMAPX_ABX_JD3_CFG1(a,b) (a)
#define arguments_CAVM_RMAPX_ABX_JD3_CFG1(a,b) (a),(b),-1,-1

/**
 * Register (RSL) rmap#_ab#_jd3_cfg10
 *
 * RMAP Slot 0 Configuration Register 10
 * This register stores the 11th job configuration word for slot 0.
 * Software should not write this register directly, but instead use this
 * format when writing the job configuration section of the job descriptor.
 */
union cavm_rmapx_abx_jd3_cfg10
{
    uint64_t u;
    struct cavm_rmapx_abx_jd3_cfg10_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t cfg10_data            : 64; /**< [ 63:  0](R/W) CFG10 Data */
#else /* Word 0 - Little Endian */
        uint64_t cfg10_data            : 64; /**< [ 63:  0](R/W) CFG10 Data */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_rmapx_abx_jd3_cfg10_s cn; */
};
typedef union cavm_rmapx_abx_jd3_cfg10 cavm_rmapx_abx_jd3_cfg10_t;

static inline uint64_t CAVM_RMAPX_ABX_JD3_CFG10(uint64_t a, uint64_t b) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_RMAPX_ABX_JD3_CFG10(uint64_t a, uint64_t b)
{
    if (cavm_is_model(OCTEONTX_CNF20KA) && ((a<=1) && (b<=1)))
        return 0x87e041a08050ll + 0x80000ll * ((a) & 0x1) + 0x10000ll * ((b) & 0x1);
    __cavm_csr_fatal("RMAPX_ABX_JD3_CFG10", 2, a, b, 0, 0, 0, 0);
}

#define typedef_CAVM_RMAPX_ABX_JD3_CFG10(a,b) cavm_rmapx_abx_jd3_cfg10_t
#define bustype_CAVM_RMAPX_ABX_JD3_CFG10(a,b) CSR_TYPE_RSL
#define basename_CAVM_RMAPX_ABX_JD3_CFG10(a,b) "RMAPX_ABX_JD3_CFG10"
#define device_bar_CAVM_RMAPX_ABX_JD3_CFG10(a,b) 0x2 /* PF_BAR2 */
#define busnum_CAVM_RMAPX_ABX_JD3_CFG10(a,b) (a)
#define arguments_CAVM_RMAPX_ABX_JD3_CFG10(a,b) (a),(b),-1,-1

/**
 * Register (RSL) rmap#_ab#_jd3_cfg11
 *
 * RMAP Slot 0 Configuration Register 11
 * This register stores the 12th job configuration word for slot 0.
 * Software should not write this register directly, but instead use this
 * format when writing the job configuration section of the job descriptor.
 */
union cavm_rmapx_abx_jd3_cfg11
{
    uint64_t u;
    struct cavm_rmapx_abx_jd3_cfg11_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t cfg11_data            : 64; /**< [ 63:  0](R/W) CFG11 Data */
#else /* Word 0 - Little Endian */
        uint64_t cfg11_data            : 64; /**< [ 63:  0](R/W) CFG11 Data */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_rmapx_abx_jd3_cfg11_s cn; */
};
typedef union cavm_rmapx_abx_jd3_cfg11 cavm_rmapx_abx_jd3_cfg11_t;

static inline uint64_t CAVM_RMAPX_ABX_JD3_CFG11(uint64_t a, uint64_t b) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_RMAPX_ABX_JD3_CFG11(uint64_t a, uint64_t b)
{
    if (cavm_is_model(OCTEONTX_CNF20KA) && ((a<=1) && (b<=1)))
        return 0x87e041a08058ll + 0x80000ll * ((a) & 0x1) + 0x10000ll * ((b) & 0x1);
    __cavm_csr_fatal("RMAPX_ABX_JD3_CFG11", 2, a, b, 0, 0, 0, 0);
}

#define typedef_CAVM_RMAPX_ABX_JD3_CFG11(a,b) cavm_rmapx_abx_jd3_cfg11_t
#define bustype_CAVM_RMAPX_ABX_JD3_CFG11(a,b) CSR_TYPE_RSL
#define basename_CAVM_RMAPX_ABX_JD3_CFG11(a,b) "RMAPX_ABX_JD3_CFG11"
#define device_bar_CAVM_RMAPX_ABX_JD3_CFG11(a,b) 0x2 /* PF_BAR2 */
#define busnum_CAVM_RMAPX_ABX_JD3_CFG11(a,b) (a)
#define arguments_CAVM_RMAPX_ABX_JD3_CFG11(a,b) (a),(b),-1,-1

/**
 * Register (RSL) rmap#_ab#_jd3_cfg12
 *
 * RMAP Slot 0 Configuration Register 12
 * This register stores the 13th job configuration word for slot 0.
 * Software should not write this register directly, but instead use this
 * format when writing the job configuration section of the job descriptor.
 */
union cavm_rmapx_abx_jd3_cfg12
{
    uint64_t u;
    struct cavm_rmapx_abx_jd3_cfg12_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t cfg12_data            : 64; /**< [ 63:  0](R/W) CFG12 Data */
#else /* Word 0 - Little Endian */
        uint64_t cfg12_data            : 64; /**< [ 63:  0](R/W) CFG12 Data */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_rmapx_abx_jd3_cfg12_s cn; */
};
typedef union cavm_rmapx_abx_jd3_cfg12 cavm_rmapx_abx_jd3_cfg12_t;

static inline uint64_t CAVM_RMAPX_ABX_JD3_CFG12(uint64_t a, uint64_t b) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_RMAPX_ABX_JD3_CFG12(uint64_t a, uint64_t b)
{
    if (cavm_is_model(OCTEONTX_CNF20KA) && ((a<=1) && (b<=1)))
        return 0x87e041a08060ll + 0x80000ll * ((a) & 0x1) + 0x10000ll * ((b) & 0x1);
    __cavm_csr_fatal("RMAPX_ABX_JD3_CFG12", 2, a, b, 0, 0, 0, 0);
}

#define typedef_CAVM_RMAPX_ABX_JD3_CFG12(a,b) cavm_rmapx_abx_jd3_cfg12_t
#define bustype_CAVM_RMAPX_ABX_JD3_CFG12(a,b) CSR_TYPE_RSL
#define basename_CAVM_RMAPX_ABX_JD3_CFG12(a,b) "RMAPX_ABX_JD3_CFG12"
#define device_bar_CAVM_RMAPX_ABX_JD3_CFG12(a,b) 0x2 /* PF_BAR2 */
#define busnum_CAVM_RMAPX_ABX_JD3_CFG12(a,b) (a)
#define arguments_CAVM_RMAPX_ABX_JD3_CFG12(a,b) (a),(b),-1,-1

/**
 * Register (RSL) rmap#_ab#_jd3_cfg2
 *
 * RMAP Slot 0 Configuration Register 2
 * This register stores the 3rd job configuration word for slot 0.
 * Software should not write this register directly, but instead use this
 * format when writing the job configuration section of the job descriptor.
 */
union cavm_rmapx_abx_jd3_cfg2
{
    uint64_t u;
    struct cavm_rmapx_abx_jd3_cfg2_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t cfg2_data             : 64; /**< [ 63:  0](R/W) CFG2 Data */
#else /* Word 0 - Little Endian */
        uint64_t cfg2_data             : 64; /**< [ 63:  0](R/W) CFG2 Data */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_rmapx_abx_jd3_cfg2_s cn; */
};
typedef union cavm_rmapx_abx_jd3_cfg2 cavm_rmapx_abx_jd3_cfg2_t;

static inline uint64_t CAVM_RMAPX_ABX_JD3_CFG2(uint64_t a, uint64_t b) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_RMAPX_ABX_JD3_CFG2(uint64_t a, uint64_t b)
{
    if (cavm_is_model(OCTEONTX_CNF20KA) && ((a<=1) && (b<=1)))
        return 0x87e041a08010ll + 0x80000ll * ((a) & 0x1) + 0x10000ll * ((b) & 0x1);
    __cavm_csr_fatal("RMAPX_ABX_JD3_CFG2", 2, a, b, 0, 0, 0, 0);
}

#define typedef_CAVM_RMAPX_ABX_JD3_CFG2(a,b) cavm_rmapx_abx_jd3_cfg2_t
#define bustype_CAVM_RMAPX_ABX_JD3_CFG2(a,b) CSR_TYPE_RSL
#define basename_CAVM_RMAPX_ABX_JD3_CFG2(a,b) "RMAPX_ABX_JD3_CFG2"
#define device_bar_CAVM_RMAPX_ABX_JD3_CFG2(a,b) 0x2 /* PF_BAR2 */
#define busnum_CAVM_RMAPX_ABX_JD3_CFG2(a,b) (a)
#define arguments_CAVM_RMAPX_ABX_JD3_CFG2(a,b) (a),(b),-1,-1

/**
 * Register (RSL) rmap#_ab#_jd3_cfg3
 *
 * RMAP Slot 0 Configuration Register 3
 * This register stores the 4th job configuration word for slot 0.
 * Software should not write this register directly, but instead use this
 * format when writing the job configuration section of the job descriptor.
 */
union cavm_rmapx_abx_jd3_cfg3
{
    uint64_t u;
    struct cavm_rmapx_abx_jd3_cfg3_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t cfg3_data             : 64; /**< [ 63:  0](R/W) CFG3 Data */
#else /* Word 0 - Little Endian */
        uint64_t cfg3_data             : 64; /**< [ 63:  0](R/W) CFG3 Data */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_rmapx_abx_jd3_cfg3_s cn; */
};
typedef union cavm_rmapx_abx_jd3_cfg3 cavm_rmapx_abx_jd3_cfg3_t;

static inline uint64_t CAVM_RMAPX_ABX_JD3_CFG3(uint64_t a, uint64_t b) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_RMAPX_ABX_JD3_CFG3(uint64_t a, uint64_t b)
{
    if (cavm_is_model(OCTEONTX_CNF20KA) && ((a<=1) && (b<=1)))
        return 0x87e041a08018ll + 0x80000ll * ((a) & 0x1) + 0x10000ll * ((b) & 0x1);
    __cavm_csr_fatal("RMAPX_ABX_JD3_CFG3", 2, a, b, 0, 0, 0, 0);
}

#define typedef_CAVM_RMAPX_ABX_JD3_CFG3(a,b) cavm_rmapx_abx_jd3_cfg3_t
#define bustype_CAVM_RMAPX_ABX_JD3_CFG3(a,b) CSR_TYPE_RSL
#define basename_CAVM_RMAPX_ABX_JD3_CFG3(a,b) "RMAPX_ABX_JD3_CFG3"
#define device_bar_CAVM_RMAPX_ABX_JD3_CFG3(a,b) 0x2 /* PF_BAR2 */
#define busnum_CAVM_RMAPX_ABX_JD3_CFG3(a,b) (a)
#define arguments_CAVM_RMAPX_ABX_JD3_CFG3(a,b) (a),(b),-1,-1

/**
 * Register (RSL) rmap#_ab#_jd3_cfg4
 *
 * RMAP Slot 0 Configuration Register 4
 * This register stores the 5th job configuration word for slot 0.
 * Software should not write this register directly, but instead use this
 * format when writing the job configuration section of the job descriptor.
 */
union cavm_rmapx_abx_jd3_cfg4
{
    uint64_t u;
    struct cavm_rmapx_abx_jd3_cfg4_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t cfg4_data             : 64; /**< [ 63:  0](R/W) CFG4 Data */
#else /* Word 0 - Little Endian */
        uint64_t cfg4_data             : 64; /**< [ 63:  0](R/W) CFG4 Data */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_rmapx_abx_jd3_cfg4_s cn; */
};
typedef union cavm_rmapx_abx_jd3_cfg4 cavm_rmapx_abx_jd3_cfg4_t;

static inline uint64_t CAVM_RMAPX_ABX_JD3_CFG4(uint64_t a, uint64_t b) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_RMAPX_ABX_JD3_CFG4(uint64_t a, uint64_t b)
{
    if (cavm_is_model(OCTEONTX_CNF20KA) && ((a<=1) && (b<=1)))
        return 0x87e041a08020ll + 0x80000ll * ((a) & 0x1) + 0x10000ll * ((b) & 0x1);
    __cavm_csr_fatal("RMAPX_ABX_JD3_CFG4", 2, a, b, 0, 0, 0, 0);
}

#define typedef_CAVM_RMAPX_ABX_JD3_CFG4(a,b) cavm_rmapx_abx_jd3_cfg4_t
#define bustype_CAVM_RMAPX_ABX_JD3_CFG4(a,b) CSR_TYPE_RSL
#define basename_CAVM_RMAPX_ABX_JD3_CFG4(a,b) "RMAPX_ABX_JD3_CFG4"
#define device_bar_CAVM_RMAPX_ABX_JD3_CFG4(a,b) 0x2 /* PF_BAR2 */
#define busnum_CAVM_RMAPX_ABX_JD3_CFG4(a,b) (a)
#define arguments_CAVM_RMAPX_ABX_JD3_CFG4(a,b) (a),(b),-1,-1

/**
 * Register (RSL) rmap#_ab#_jd3_cfg5
 *
 * RMAP Slot 0 Configuration Register 5
 * This register stores the 6th job configuration word for slot 0.
 * Software should not write this register directly, but instead use this
 * format when writing the job configuration section of the job descriptor.
 */
union cavm_rmapx_abx_jd3_cfg5
{
    uint64_t u;
    struct cavm_rmapx_abx_jd3_cfg5_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t cfg5_data             : 64; /**< [ 63:  0](R/W) CFG5 Data */
#else /* Word 0 - Little Endian */
        uint64_t cfg5_data             : 64; /**< [ 63:  0](R/W) CFG5 Data */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_rmapx_abx_jd3_cfg5_s cn; */
};
typedef union cavm_rmapx_abx_jd3_cfg5 cavm_rmapx_abx_jd3_cfg5_t;

static inline uint64_t CAVM_RMAPX_ABX_JD3_CFG5(uint64_t a, uint64_t b) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_RMAPX_ABX_JD3_CFG5(uint64_t a, uint64_t b)
{
    if (cavm_is_model(OCTEONTX_CNF20KA) && ((a<=1) && (b<=1)))
        return 0x87e041a08028ll + 0x80000ll * ((a) & 0x1) + 0x10000ll * ((b) & 0x1);
    __cavm_csr_fatal("RMAPX_ABX_JD3_CFG5", 2, a, b, 0, 0, 0, 0);
}

#define typedef_CAVM_RMAPX_ABX_JD3_CFG5(a,b) cavm_rmapx_abx_jd3_cfg5_t
#define bustype_CAVM_RMAPX_ABX_JD3_CFG5(a,b) CSR_TYPE_RSL
#define basename_CAVM_RMAPX_ABX_JD3_CFG5(a,b) "RMAPX_ABX_JD3_CFG5"
#define device_bar_CAVM_RMAPX_ABX_JD3_CFG5(a,b) 0x2 /* PF_BAR2 */
#define busnum_CAVM_RMAPX_ABX_JD3_CFG5(a,b) (a)
#define arguments_CAVM_RMAPX_ABX_JD3_CFG5(a,b) (a),(b),-1,-1

/**
 * Register (RSL) rmap#_ab#_jd3_cfg6
 *
 * RMAP Slot 0 Configuration Register 6
 * This register stores the 7th job configuration word for slot 0.
 * Software should not write this register directly, but instead use this
 * format when writing the job configuration section of the job descriptor.
 */
union cavm_rmapx_abx_jd3_cfg6
{
    uint64_t u;
    struct cavm_rmapx_abx_jd3_cfg6_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t cfg6_data             : 64; /**< [ 63:  0](R/W) CFG6 Data */
#else /* Word 0 - Little Endian */
        uint64_t cfg6_data             : 64; /**< [ 63:  0](R/W) CFG6 Data */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_rmapx_abx_jd3_cfg6_s cn; */
};
typedef union cavm_rmapx_abx_jd3_cfg6 cavm_rmapx_abx_jd3_cfg6_t;

static inline uint64_t CAVM_RMAPX_ABX_JD3_CFG6(uint64_t a, uint64_t b) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_RMAPX_ABX_JD3_CFG6(uint64_t a, uint64_t b)
{
    if (cavm_is_model(OCTEONTX_CNF20KA) && ((a<=1) && (b<=1)))
        return 0x87e041a08030ll + 0x80000ll * ((a) & 0x1) + 0x10000ll * ((b) & 0x1);
    __cavm_csr_fatal("RMAPX_ABX_JD3_CFG6", 2, a, b, 0, 0, 0, 0);
}

#define typedef_CAVM_RMAPX_ABX_JD3_CFG6(a,b) cavm_rmapx_abx_jd3_cfg6_t
#define bustype_CAVM_RMAPX_ABX_JD3_CFG6(a,b) CSR_TYPE_RSL
#define basename_CAVM_RMAPX_ABX_JD3_CFG6(a,b) "RMAPX_ABX_JD3_CFG6"
#define device_bar_CAVM_RMAPX_ABX_JD3_CFG6(a,b) 0x2 /* PF_BAR2 */
#define busnum_CAVM_RMAPX_ABX_JD3_CFG6(a,b) (a)
#define arguments_CAVM_RMAPX_ABX_JD3_CFG6(a,b) (a),(b),-1,-1

/**
 * Register (RSL) rmap#_ab#_jd3_cfg7
 *
 * RMAP Slot 0 Configuration Register 7
 * This register stores the 8th job configuration word for slot 0.
 * Software should not write this register directly, but instead use this
 * format when writing the job configuration section of the job descriptor.
 */
union cavm_rmapx_abx_jd3_cfg7
{
    uint64_t u;
    struct cavm_rmapx_abx_jd3_cfg7_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t cfg7_data             : 64; /**< [ 63:  0](R/W) CFG7 Data */
#else /* Word 0 - Little Endian */
        uint64_t cfg7_data             : 64; /**< [ 63:  0](R/W) CFG7 Data */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_rmapx_abx_jd3_cfg7_s cn; */
};
typedef union cavm_rmapx_abx_jd3_cfg7 cavm_rmapx_abx_jd3_cfg7_t;

static inline uint64_t CAVM_RMAPX_ABX_JD3_CFG7(uint64_t a, uint64_t b) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_RMAPX_ABX_JD3_CFG7(uint64_t a, uint64_t b)
{
    if (cavm_is_model(OCTEONTX_CNF20KA) && ((a<=1) && (b<=1)))
        return 0x87e041a08038ll + 0x80000ll * ((a) & 0x1) + 0x10000ll * ((b) & 0x1);
    __cavm_csr_fatal("RMAPX_ABX_JD3_CFG7", 2, a, b, 0, 0, 0, 0);
}

#define typedef_CAVM_RMAPX_ABX_JD3_CFG7(a,b) cavm_rmapx_abx_jd3_cfg7_t
#define bustype_CAVM_RMAPX_ABX_JD3_CFG7(a,b) CSR_TYPE_RSL
#define basename_CAVM_RMAPX_ABX_JD3_CFG7(a,b) "RMAPX_ABX_JD3_CFG7"
#define device_bar_CAVM_RMAPX_ABX_JD3_CFG7(a,b) 0x2 /* PF_BAR2 */
#define busnum_CAVM_RMAPX_ABX_JD3_CFG7(a,b) (a)
#define arguments_CAVM_RMAPX_ABX_JD3_CFG7(a,b) (a),(b),-1,-1

/**
 * Register (RSL) rmap#_ab#_jd3_cfg8
 *
 * RMAP Slot 0 Configuration Register 8
 * This register stores the 9th job configuration word for slot 0.
 * Software should not write this register directly, but instead use this
 * format when writing the job configuration section of the job descriptor.
 */
union cavm_rmapx_abx_jd3_cfg8
{
    uint64_t u;
    struct cavm_rmapx_abx_jd3_cfg8_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t cfg8_data             : 64; /**< [ 63:  0](R/W) CFG8 Data */
#else /* Word 0 - Little Endian */
        uint64_t cfg8_data             : 64; /**< [ 63:  0](R/W) CFG8 Data */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_rmapx_abx_jd3_cfg8_s cn; */
};
typedef union cavm_rmapx_abx_jd3_cfg8 cavm_rmapx_abx_jd3_cfg8_t;

static inline uint64_t CAVM_RMAPX_ABX_JD3_CFG8(uint64_t a, uint64_t b) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_RMAPX_ABX_JD3_CFG8(uint64_t a, uint64_t b)
{
    if (cavm_is_model(OCTEONTX_CNF20KA) && ((a<=1) && (b<=1)))
        return 0x87e041a08040ll + 0x80000ll * ((a) & 0x1) + 0x10000ll * ((b) & 0x1);
    __cavm_csr_fatal("RMAPX_ABX_JD3_CFG8", 2, a, b, 0, 0, 0, 0);
}

#define typedef_CAVM_RMAPX_ABX_JD3_CFG8(a,b) cavm_rmapx_abx_jd3_cfg8_t
#define bustype_CAVM_RMAPX_ABX_JD3_CFG8(a,b) CSR_TYPE_RSL
#define basename_CAVM_RMAPX_ABX_JD3_CFG8(a,b) "RMAPX_ABX_JD3_CFG8"
#define device_bar_CAVM_RMAPX_ABX_JD3_CFG8(a,b) 0x2 /* PF_BAR2 */
#define busnum_CAVM_RMAPX_ABX_JD3_CFG8(a,b) (a)
#define arguments_CAVM_RMAPX_ABX_JD3_CFG8(a,b) (a),(b),-1,-1

/**
 * Register (RSL) rmap#_ab#_jd3_cfg9
 *
 * RMAP Slot 0 Configuration Register 9
 * This register stores the 10th job configuration word for slot 0.
 * Software should not write this register directly, but instead use this
 * format when writing the job configuration section of the job descriptor.
 */
union cavm_rmapx_abx_jd3_cfg9
{
    uint64_t u;
    struct cavm_rmapx_abx_jd3_cfg9_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t cfg9_data             : 64; /**< [ 63:  0](R/W) CFG9 Data */
#else /* Word 0 - Little Endian */
        uint64_t cfg9_data             : 64; /**< [ 63:  0](R/W) CFG9 Data */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_rmapx_abx_jd3_cfg9_s cn; */
};
typedef union cavm_rmapx_abx_jd3_cfg9 cavm_rmapx_abx_jd3_cfg9_t;

static inline uint64_t CAVM_RMAPX_ABX_JD3_CFG9(uint64_t a, uint64_t b) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_RMAPX_ABX_JD3_CFG9(uint64_t a, uint64_t b)
{
    if (cavm_is_model(OCTEONTX_CNF20KA) && ((a<=1) && (b<=1)))
        return 0x87e041a08048ll + 0x80000ll * ((a) & 0x1) + 0x10000ll * ((b) & 0x1);
    __cavm_csr_fatal("RMAPX_ABX_JD3_CFG9", 2, a, b, 0, 0, 0, 0);
}

#define typedef_CAVM_RMAPX_ABX_JD3_CFG9(a,b) cavm_rmapx_abx_jd3_cfg9_t
#define bustype_CAVM_RMAPX_ABX_JD3_CFG9(a,b) CSR_TYPE_RSL
#define basename_CAVM_RMAPX_ABX_JD3_CFG9(a,b) "RMAPX_ABX_JD3_CFG9"
#define device_bar_CAVM_RMAPX_ABX_JD3_CFG9(a,b) 0x2 /* PF_BAR2 */
#define busnum_CAVM_RMAPX_ABX_JD3_CFG9(a,b) (a)
#define arguments_CAVM_RMAPX_ABX_JD3_CFG9(a,b) (a),(b),-1,-1

/**
 * Register (RSL) rmap#_ab#_status
 *
 * RMAP Status Register
 */
union cavm_rmapx_abx_status
{
    uint64_t u;
    struct cavm_rmapx_abx_status_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_5_63         : 59;
        uint64_t ready                 : 1;  /**< [  4:  4](RO/H) Indicates if the RMAP is ready to receive next job. '1' = Ready for next job, '0' = Busy. */
        uint64_t status3               : 1;  /**< [  3:  3](RO/H) Indicates if the RMAP is busy processing a job with CONFIGURATION 3.
                                                                 '0' = Ready for new job,
                                                                 '1' = Busy processing. */
        uint64_t status2               : 1;  /**< [  2:  2](RO/H) Indicates if the RMAP is busy processing a job with CONFIGURATION 2.
                                                                 '0' = Ready for new job,
                                                                 '1' = Busy processing. */
        uint64_t status1               : 1;  /**< [  1:  1](RO/H) Indicates if the RMAP is busy processing a job with CONFIGURATION 1.
                                                                 '0' = Ready for new job,
                                                                 '1' = Busy processing. */
        uint64_t status0               : 1;  /**< [  0:  0](RO/H) Indicates if the RMAP is busy processing a job with CONFIGURATION 0.
                                                                 '0' = Ready for new job,
                                                                 '1' = Busy processing. */
#else /* Word 0 - Little Endian */
        uint64_t status0               : 1;  /**< [  0:  0](RO/H) Indicates if the RMAP is busy processing a job with CONFIGURATION 0.
                                                                 '0' = Ready for new job,
                                                                 '1' = Busy processing. */
        uint64_t status1               : 1;  /**< [  1:  1](RO/H) Indicates if the RMAP is busy processing a job with CONFIGURATION 1.
                                                                 '0' = Ready for new job,
                                                                 '1' = Busy processing. */
        uint64_t status2               : 1;  /**< [  2:  2](RO/H) Indicates if the RMAP is busy processing a job with CONFIGURATION 2.
                                                                 '0' = Ready for new job,
                                                                 '1' = Busy processing. */
        uint64_t status3               : 1;  /**< [  3:  3](RO/H) Indicates if the RMAP is busy processing a job with CONFIGURATION 3.
                                                                 '0' = Ready for new job,
                                                                 '1' = Busy processing. */
        uint64_t ready                 : 1;  /**< [  4:  4](RO/H) Indicates if the RMAP is ready to receive next job. '1' = Ready for next job, '0' = Busy. */
        uint64_t reserved_5_63         : 59;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_rmapx_abx_status_s cn; */
};
typedef union cavm_rmapx_abx_status cavm_rmapx_abx_status_t;

static inline uint64_t CAVM_RMAPX_ABX_STATUS(uint64_t a, uint64_t b) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_RMAPX_ABX_STATUS(uint64_t a, uint64_t b)
{
    if (cavm_is_model(OCTEONTX_CNF20KA) && ((a<=1) && (b<=1)))
        return 0x87e041a00018ll + 0x80000ll * ((a) & 0x1) + 0x10000ll * ((b) & 0x1);
    __cavm_csr_fatal("RMAPX_ABX_STATUS", 2, a, b, 0, 0, 0, 0);
}

#define typedef_CAVM_RMAPX_ABX_STATUS(a,b) cavm_rmapx_abx_status_t
#define bustype_CAVM_RMAPX_ABX_STATUS(a,b) CSR_TYPE_RSL
#define basename_CAVM_RMAPX_ABX_STATUS(a,b) "RMAPX_ABX_STATUS"
#define device_bar_CAVM_RMAPX_ABX_STATUS(a,b) 0x2 /* PF_BAR2 */
#define busnum_CAVM_RMAPX_ABX_STATUS(a,b) (a)
#define arguments_CAVM_RMAPX_ABX_STATUS(a,b) (a),(b),-1,-1

/**
 * Register (RSL) rmap#_ab#_tc_config_err_flags
 *
 * Multiplexing, Interleaving and Scrambling Configuration Error Register
 */
union cavm_rmapx_abx_tc_config_err_flags
{
    uint64_t u;
    struct cavm_rmapx_abx_tc_config_err_flags_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t config_err            : 64; /**< [ 63:  0](R/W) TC Config Error */
#else /* Word 0 - Little Endian */
        uint64_t config_err            : 64; /**< [ 63:  0](R/W) TC Config Error */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_rmapx_abx_tc_config_err_flags_s cn; */
};
typedef union cavm_rmapx_abx_tc_config_err_flags cavm_rmapx_abx_tc_config_err_flags_t;

static inline uint64_t CAVM_RMAPX_ABX_TC_CONFIG_ERR_FLAGS(uint64_t a, uint64_t b) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_RMAPX_ABX_TC_CONFIG_ERR_FLAGS(uint64_t a, uint64_t b)
{
    if (cavm_is_model(OCTEONTX_CNF20KA) && ((a<=1) && (b<=1)))
        return 0x87e041a01040ll + 0x80000ll * ((a) & 0x1) + 0x10000ll * ((b) & 0x1);
    __cavm_csr_fatal("RMAPX_ABX_TC_CONFIG_ERR_FLAGS", 2, a, b, 0, 0, 0, 0);
}

#define typedef_CAVM_RMAPX_ABX_TC_CONFIG_ERR_FLAGS(a,b) cavm_rmapx_abx_tc_config_err_flags_t
#define bustype_CAVM_RMAPX_ABX_TC_CONFIG_ERR_FLAGS(a,b) CSR_TYPE_RSL
#define basename_CAVM_RMAPX_ABX_TC_CONFIG_ERR_FLAGS(a,b) "RMAPX_ABX_TC_CONFIG_ERR_FLAGS"
#define device_bar_CAVM_RMAPX_ABX_TC_CONFIG_ERR_FLAGS(a,b) 0x2 /* PF_BAR2 */
#define busnum_CAVM_RMAPX_ABX_TC_CONFIG_ERR_FLAGS(a,b) (a)
#define arguments_CAVM_RMAPX_ABX_TC_CONFIG_ERR_FLAGS(a,b) (a),(b),-1,-1

/**
 * Register (RSL) rmap#_ab#_tc_error
 *
 * Multiplexing, Interleaving and Scrambling Error Register
 */
union cavm_rmapx_abx_tc_error
{
    uint64_t u;
    struct cavm_rmapx_abx_tc_error_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_9_63         : 55;
        uint64_t core_err              : 1;  /**< [  8:  8](R/W1C/H) invalid configuration, the block is aborted. See
                                                                 RMAP_AB(0..1)_TC_CONFIG_ERR_FLAGS. */
        uint64_t reserved_4_7          : 4;
        uint64_t ign_rd_acc            : 1;  /**< [  3:  3](R/W1C/H) ignored read access, already one read in progress */
        uint64_t inv_rd_acc            : 1;  /**< [  2:  2](R/W1C/H) invalid read access (out of range address). */
        uint64_t inv_wr_acc            : 1;  /**< [  1:  1](R/W1C/H) invalid write access (out of range address). */
        uint64_t inv_start_task        : 1;  /**< [  0:  0](R/W1C/H) invalid start task (core is already busy processing a task). Error bits,  a bit of "1"
                                                                 indicates an error, write "0" to clear. */
#else /* Word 0 - Little Endian */
        uint64_t inv_start_task        : 1;  /**< [  0:  0](R/W1C/H) invalid start task (core is already busy processing a task). Error bits,  a bit of "1"
                                                                 indicates an error, write "0" to clear. */
        uint64_t inv_wr_acc            : 1;  /**< [  1:  1](R/W1C/H) invalid write access (out of range address). */
        uint64_t inv_rd_acc            : 1;  /**< [  2:  2](R/W1C/H) invalid read access (out of range address). */
        uint64_t ign_rd_acc            : 1;  /**< [  3:  3](R/W1C/H) ignored read access, already one read in progress */
        uint64_t reserved_4_7          : 4;
        uint64_t core_err              : 1;  /**< [  8:  8](R/W1C/H) invalid configuration, the block is aborted. See
                                                                 RMAP_AB(0..1)_TC_CONFIG_ERR_FLAGS. */
        uint64_t reserved_9_63         : 55;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_rmapx_abx_tc_error_s cn; */
};
typedef union cavm_rmapx_abx_tc_error cavm_rmapx_abx_tc_error_t;

static inline uint64_t CAVM_RMAPX_ABX_TC_ERROR(uint64_t a, uint64_t b) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_RMAPX_ABX_TC_ERROR(uint64_t a, uint64_t b)
{
    if (cavm_is_model(OCTEONTX_CNF20KA) && ((a<=1) && (b<=1)))
        return 0x87e041a01038ll + 0x80000ll * ((a) & 0x1) + 0x10000ll * ((b) & 0x1);
    __cavm_csr_fatal("RMAPX_ABX_TC_ERROR", 2, a, b, 0, 0, 0, 0);
}

#define typedef_CAVM_RMAPX_ABX_TC_ERROR(a,b) cavm_rmapx_abx_tc_error_t
#define bustype_CAVM_RMAPX_ABX_TC_ERROR(a,b) CSR_TYPE_RSL
#define basename_CAVM_RMAPX_ABX_TC_ERROR(a,b) "RMAPX_ABX_TC_ERROR"
#define device_bar_CAVM_RMAPX_ABX_TC_ERROR(a,b) 0x2 /* PF_BAR2 */
#define busnum_CAVM_RMAPX_ABX_TC_ERROR(a,b) (a)
#define arguments_CAVM_RMAPX_ABX_TC_ERROR(a,b) (a),(b),-1,-1

/**
 * Register (RSL) rmap#_ab#_tc_error_mask
 *
 * Multiplexing, Interleaving and Scrambling Error Mask Register
 */
union cavm_rmapx_abx_tc_error_mask
{
    uint64_t u;
    struct cavm_rmapx_abx_tc_error_mask_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_32_63        : 32;
        uint64_t error_mask            : 32; /**< [ 31:  0](R/W) The contents of RMAP_AB(0..1)_TC_ERROR are masked with this register. When an
                                                                 error occurs, it is reported in RMAP_AB(0..1)_ERROR_SOURCE1[TC_ERROR] only when
                                                                 the corresponding bit in ERROR_MASK is set to one. */
#else /* Word 0 - Little Endian */
        uint64_t error_mask            : 32; /**< [ 31:  0](R/W) The contents of RMAP_AB(0..1)_TC_ERROR are masked with this register. When an
                                                                 error occurs, it is reported in RMAP_AB(0..1)_ERROR_SOURCE1[TC_ERROR] only when
                                                                 the corresponding bit in ERROR_MASK is set to one. */
        uint64_t reserved_32_63        : 32;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_rmapx_abx_tc_error_mask_s cn; */
};
typedef union cavm_rmapx_abx_tc_error_mask cavm_rmapx_abx_tc_error_mask_t;

static inline uint64_t CAVM_RMAPX_ABX_TC_ERROR_MASK(uint64_t a, uint64_t b) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_RMAPX_ABX_TC_ERROR_MASK(uint64_t a, uint64_t b)
{
    if (cavm_is_model(OCTEONTX_CNF20KA) && ((a<=1) && (b<=1)))
        return 0x87e041a01030ll + 0x80000ll * ((a) & 0x1) + 0x10000ll * ((b) & 0x1);
    __cavm_csr_fatal("RMAPX_ABX_TC_ERROR_MASK", 2, a, b, 0, 0, 0, 0);
}

#define typedef_CAVM_RMAPX_ABX_TC_ERROR_MASK(a,b) cavm_rmapx_abx_tc_error_mask_t
#define bustype_CAVM_RMAPX_ABX_TC_ERROR_MASK(a,b) CSR_TYPE_RSL
#define basename_CAVM_RMAPX_ABX_TC_ERROR_MASK(a,b) "RMAPX_ABX_TC_ERROR_MASK"
#define device_bar_CAVM_RMAPX_ABX_TC_ERROR_MASK(a,b) 0x2 /* PF_BAR2 */
#define busnum_CAVM_RMAPX_ABX_TC_ERROR_MASK(a,b) (a)
#define arguments_CAVM_RMAPX_ABX_TC_ERROR_MASK(a,b) (a),(b),-1,-1

/**
 * Register (RSL) rmap#_ab#_tc_main_control
 *
 * Multiplexing, Interleaving and Scrambling Control Register
 * This register controls pipelining, error checks and clock
 * gating within the multiplexing, interleaving and scrambling sub-block.
 */
union cavm_rmapx_abx_tc_main_control
{
    uint64_t u;
    struct cavm_rmapx_abx_tc_main_control_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_5_63         : 59;
        uint64_t chn_single_task_en    : 1;  /**< [  4:  4](R/W) Write 1 to disable pipelining when adjacent tasks have different
                                                                 channel modes. Note that this degrades throughput. */
        uint64_t phy_single_task_en    : 1;  /**< [  3:  3](R/W) Write 1 to disable pipelining when adjacent tasks have different
                                                                 PHY modes. Note that this degrades throughput. */
        uint64_t single_task_en        : 1;  /**< [  2:  2](R/W) Write 1 to disable all pipelining within the multiplexing,
                                                                 interleaving and scrambling sub-block. Note that this degrades throughput. */
        uint64_t dis_conf_chk          : 1;  /**< [  1:  1](R/W) Write 1 to disable job configuration parameter validation. When
                                                                 parameter validation is disabled, output is unpredictable for invalid
                                                                 configurations. */
        uint64_t clk_en                : 1;  /**< [  0:  0](R/W) Disables internal automatic clock gating when set to 1. */
#else /* Word 0 - Little Endian */
        uint64_t clk_en                : 1;  /**< [  0:  0](R/W) Disables internal automatic clock gating when set to 1. */
        uint64_t dis_conf_chk          : 1;  /**< [  1:  1](R/W) Write 1 to disable job configuration parameter validation. When
                                                                 parameter validation is disabled, output is unpredictable for invalid
                                                                 configurations. */
        uint64_t single_task_en        : 1;  /**< [  2:  2](R/W) Write 1 to disable all pipelining within the multiplexing,
                                                                 interleaving and scrambling sub-block. Note that this degrades throughput. */
        uint64_t phy_single_task_en    : 1;  /**< [  3:  3](R/W) Write 1 to disable pipelining when adjacent tasks have different
                                                                 PHY modes. Note that this degrades throughput. */
        uint64_t chn_single_task_en    : 1;  /**< [  4:  4](R/W) Write 1 to disable pipelining when adjacent tasks have different
                                                                 channel modes. Note that this degrades throughput. */
        uint64_t reserved_5_63         : 59;
#endif /* Word 0 - End */
    } s;
    struct cavm_rmapx_abx_tc_main_control_cn
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_32_63        : 32;
        uint64_t reserved_5_31         : 27;
        uint64_t chn_single_task_en    : 1;  /**< [  4:  4](R/W) Write 1 to disable pipelining when adjacent tasks have different
                                                                 channel modes. Note that this degrades throughput. */
        uint64_t phy_single_task_en    : 1;  /**< [  3:  3](R/W) Write 1 to disable pipelining when adjacent tasks have different
                                                                 PHY modes. Note that this degrades throughput. */
        uint64_t single_task_en        : 1;  /**< [  2:  2](R/W) Write 1 to disable all pipelining within the multiplexing,
                                                                 interleaving and scrambling sub-block. Note that this degrades throughput. */
        uint64_t dis_conf_chk          : 1;  /**< [  1:  1](R/W) Write 1 to disable job configuration parameter validation. When
                                                                 parameter validation is disabled, output is unpredictable for invalid
                                                                 configurations. */
        uint64_t clk_en                : 1;  /**< [  0:  0](R/W) Disables internal automatic clock gating when set to 1. */
#else /* Word 0 - Little Endian */
        uint64_t clk_en                : 1;  /**< [  0:  0](R/W) Disables internal automatic clock gating when set to 1. */
        uint64_t dis_conf_chk          : 1;  /**< [  1:  1](R/W) Write 1 to disable job configuration parameter validation. When
                                                                 parameter validation is disabled, output is unpredictable for invalid
                                                                 configurations. */
        uint64_t single_task_en        : 1;  /**< [  2:  2](R/W) Write 1 to disable all pipelining within the multiplexing,
                                                                 interleaving and scrambling sub-block. Note that this degrades throughput. */
        uint64_t phy_single_task_en    : 1;  /**< [  3:  3](R/W) Write 1 to disable pipelining when adjacent tasks have different
                                                                 PHY modes. Note that this degrades throughput. */
        uint64_t chn_single_task_en    : 1;  /**< [  4:  4](R/W) Write 1 to disable pipelining when adjacent tasks have different
                                                                 channel modes. Note that this degrades throughput. */
        uint64_t reserved_5_31         : 27;
        uint64_t reserved_32_63        : 32;
#endif /* Word 0 - End */
    } cn;
};
typedef union cavm_rmapx_abx_tc_main_control cavm_rmapx_abx_tc_main_control_t;

static inline uint64_t CAVM_RMAPX_ABX_TC_MAIN_CONTROL(uint64_t a, uint64_t b) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_RMAPX_ABX_TC_MAIN_CONTROL(uint64_t a, uint64_t b)
{
    if (cavm_is_model(OCTEONTX_CNF20KA) && ((a<=1) && (b<=1)))
        return 0x87e041a01010ll + 0x80000ll * ((a) & 0x1) + 0x10000ll * ((b) & 0x1);
    __cavm_csr_fatal("RMAPX_ABX_TC_MAIN_CONTROL", 2, a, b, 0, 0, 0, 0);
}

#define typedef_CAVM_RMAPX_ABX_TC_MAIN_CONTROL(a,b) cavm_rmapx_abx_tc_main_control_t
#define bustype_CAVM_RMAPX_ABX_TC_MAIN_CONTROL(a,b) CSR_TYPE_RSL
#define basename_CAVM_RMAPX_ABX_TC_MAIN_CONTROL(a,b) "RMAPX_ABX_TC_MAIN_CONTROL"
#define device_bar_CAVM_RMAPX_ABX_TC_MAIN_CONTROL(a,b) 0x2 /* PF_BAR2 */
#define busnum_CAVM_RMAPX_ABX_TC_MAIN_CONTROL(a,b) (a)
#define arguments_CAVM_RMAPX_ABX_TC_MAIN_CONTROL(a,b) (a),(b),-1,-1

/**
 * Register (RSL) rmap#_ab#_tc_main_reset
 *
 * Multiplexer, Interleaver, and Scrambler Reset Register
 */
union cavm_rmapx_abx_tc_main_reset
{
    uint64_t u;
    struct cavm_rmapx_abx_tc_main_reset_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_1_63         : 63;
        uint64_t soft_reset            : 1;  /**< [  0:  0](R/W) Any write to this bit (either 0 or 1) causes a soft reset of the
                                                                 multiplexing, channel interleaving, and scrambling sub-block.
                                                                 A soft reset of the decoder core is performed if a write to this register is
                                                                 performed whatever the actual value (even if a 0x0) written to this register. The register
                                                                 is automatically de-asserted to low. If no clock is available when a software reset is
                                                                 generated, the idle signal goes low to indicate that a valid ck_work clock is required and
                                                                 the the software reset is postpone until the rising edge of ck_work. */
#else /* Word 0 - Little Endian */
        uint64_t soft_reset            : 1;  /**< [  0:  0](R/W) Any write to this bit (either 0 or 1) causes a soft reset of the
                                                                 multiplexing, channel interleaving, and scrambling sub-block.
                                                                 A soft reset of the decoder core is performed if a write to this register is
                                                                 performed whatever the actual value (even if a 0x0) written to this register. The register
                                                                 is automatically de-asserted to low. If no clock is available when a software reset is
                                                                 generated, the idle signal goes low to indicate that a valid ck_work clock is required and
                                                                 the the software reset is postpone until the rising edge of ck_work. */
        uint64_t reserved_1_63         : 63;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_rmapx_abx_tc_main_reset_s cn; */
};
typedef union cavm_rmapx_abx_tc_main_reset cavm_rmapx_abx_tc_main_reset_t;

static inline uint64_t CAVM_RMAPX_ABX_TC_MAIN_RESET(uint64_t a, uint64_t b) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_RMAPX_ABX_TC_MAIN_RESET(uint64_t a, uint64_t b)
{
    if (cavm_is_model(OCTEONTX_CNF20KA) && ((a<=1) && (b<=1)))
        return 0x87e041a01000ll + 0x80000ll * ((a) & 0x1) + 0x10000ll * ((b) & 0x1);
    __cavm_csr_fatal("RMAPX_ABX_TC_MAIN_RESET", 2, a, b, 0, 0, 0, 0);
}

#define typedef_CAVM_RMAPX_ABX_TC_MAIN_RESET(a,b) cavm_rmapx_abx_tc_main_reset_t
#define bustype_CAVM_RMAPX_ABX_TC_MAIN_RESET(a,b) CSR_TYPE_RSL
#define basename_CAVM_RMAPX_ABX_TC_MAIN_RESET(a,b) "RMAPX_ABX_TC_MAIN_RESET"
#define device_bar_CAVM_RMAPX_ABX_TC_MAIN_RESET(a,b) 0x2 /* PF_BAR2 */
#define busnum_CAVM_RMAPX_ABX_TC_MAIN_RESET(a,b) (a)
#define arguments_CAVM_RMAPX_ABX_TC_MAIN_RESET(a,b) (a),(b),-1,-1

#endif /* __CAVM_CSRS_RMAP_H__ */
