#ifndef __CAVM_CSRS_ARXE_H__
#define __CAVM_CSRS_ARXE_H__
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
 * ARXE.
 *
 * This file is auto generated. Do not edit.
 *
 */

/**
 * Enumeration arxe_bar_e
 */
#define CAVM_ARXE_BAR_E_ARXEX_PF_BAR2(a) (0x87e041400000ll + 0x80000ll * (a))
#define CAVM_ARXE_BAR_E_ARXEX_PF_BAR2_SIZE 0x40000ull

/**
 * Structure arxe_cfg0_s
 *
 * ARXE CFG0 Structure
 * This structure specifies the task configuration format for
 * ARXE_COMMON_CFG_S[PROCESSING_MODE] = 0x0, 0x1, 0x2.
 */
union cavm_arxe_cfg0_s
{
    uint64_t u[8];
    struct cavm_arxe_cfg0_s_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_48_63        : 16;
        uint64_t q_threshold           : 4;  /**< [ 47: 44] Threshold for the Q value in XQFX format.
                                                                 Q is replaced with the following value after floating point conversion if the
                                                                 floating representation (ARFP) is smaller:
                                                                   0x0 = bypass (no threshold applied).
                                                                   0x1 = 1/(2^8).
                                                                   0x2 = 1/(2^9).
                                                                   0x3 = 1/(2^10).
                                                                   0x4 = 1/2(^11).
                                                                   0x5 = 1/2(^12). */
        uint64_t reserved_41_43        : 3;
        uint64_t num_prb               : 9;  /**< [ 40: 32] Number of PRB per data symbol (DS). */
        uint64_t reserved_14_31        : 18;
        uint64_t rhh_mode              : 2;  /**< [ 13: 12] R_(hh,i) generation mode. It is only applicable for ARXE_COMMON_CFG_S[PROCESSING_MODE] = 0x2.
                                                                 0x0 = R_(hh,i) is generated for every symbol.
                                                                 0x1 = R_(hh,i) is generated only for the first symbol.
                                                                 0x2 = R_(hh,i) is not generated. */
        uint64_t reserved_4_11         : 8;
        uint64_t wtdi_start_sym_idx    : 4;  /**< [  3:  0] Starting index for the interpolation weights. ARXE_COMMON_CFG_S[NUM_DS] +
                                                                 [WTDI_START_SYM_IDX] \<= 14. */
#else /* Word 0 - Little Endian */
        uint64_t wtdi_start_sym_idx    : 4;  /**< [  3:  0] Starting index for the interpolation weights. ARXE_COMMON_CFG_S[NUM_DS] +
                                                                 [WTDI_START_SYM_IDX] \<= 14. */
        uint64_t reserved_4_11         : 8;
        uint64_t rhh_mode              : 2;  /**< [ 13: 12] R_(hh,i) generation mode. It is only applicable for ARXE_COMMON_CFG_S[PROCESSING_MODE] = 0x2.
                                                                 0x0 = R_(hh,i) is generated for every symbol.
                                                                 0x1 = R_(hh,i) is generated only for the first symbol.
                                                                 0x2 = R_(hh,i) is not generated. */
        uint64_t reserved_14_31        : 18;
        uint64_t num_prb               : 9;  /**< [ 40: 32] Number of PRB per data symbol (DS). */
        uint64_t reserved_41_43        : 3;
        uint64_t q_threshold           : 4;  /**< [ 47: 44] Threshold for the Q value in XQFX format.
                                                                 Q is replaced with the following value after floating point conversion if the
                                                                 floating representation (ARFP) is smaller:
                                                                   0x0 = bypass (no threshold applied).
                                                                   0x1 = 1/(2^8).
                                                                   0x2 = 1/(2^9).
                                                                   0x3 = 1/(2^10).
                                                                   0x4 = 1/2(^11).
                                                                   0x5 = 1/2(^12). */
        uint64_t reserved_48_63        : 16;
#endif /* Word 0 - End */
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 1 - Big Endian */
        uint64_t wbf_e                 : 8;  /**< [127:120] Exponent for W_(B,i) in eFXP.
                                                                 W_(B,i) in eFXP is translated into ARFP as Mantissa * 2^([WBF_E]).
                                                                 Valid only for ARXE_COMMON_CFG_S[PROCESSING_MODE] = 0x2.
                                                                 Typical expected range is [-12, -15]. Verified range is [-16:0]. */
        uint64_t wtdi_e                : 8;  /**< [119:112] Exponent for W_(TDI0,sym) and W_(TDI1,sym) in eFXP
                                                                 W_(TDI,sym) in eFXP is translated into ARFP as Mantissa * 2^([WTDI_E])
                                                                 Typical expected range is [-12, -15]. Verified range is [-16,0]. */
        uint64_t xreg_e                : 8;  /**< [111:104] Exponent for Xreg (12bit I and Q) in XQFX.
                                                                 Xreg in eFXP is translated into ARFP as Mantissa * 2^([XREG_E]).
                                                                 Valid only for ARXE_COMMON_CFG_S[PROCESSING_MODE] = 0x1.
                                                                 Verified range is [-10,-7]. */
        uint64_t reserved_96_103       : 8;
        uint64_t rinv_ec               : 8;  /**< [ 95: 88] Configured Exponent for R^_d^(-1). Verified range is [0,-128]. */
        uint64_t reserved_80_87        : 8;
        uint64_t x_ec                  : 8;  /**< [ 79: 72] Configured exponent for output X. Verified range is [0,50]. */
        uint64_t beta_rhh_ec           : 8;  /**< [ 71: 64] For ARXE_COMMON_CFG_S[PROCESSING_MODE] = 0x0 and 0x1, it is the
                                                                 configured exponent for output Beta (beta_irc or beta_(pic,i))
                                                                 For ARXE_COMMON_CFG_S[PROCESSING_MODE] = 0x2, it is the
                                                                 configured exponent for output R_(hh,i).
                                                                 Verified range is [0,25]. */
#else /* Word 1 - Little Endian */
        uint64_t beta_rhh_ec           : 8;  /**< [ 71: 64] For ARXE_COMMON_CFG_S[PROCESSING_MODE] = 0x0 and 0x1, it is the
                                                                 configured exponent for output Beta (beta_irc or beta_(pic,i))
                                                                 For ARXE_COMMON_CFG_S[PROCESSING_MODE] = 0x2, it is the
                                                                 configured exponent for output R_(hh,i).
                                                                 Verified range is [0,25]. */
        uint64_t x_ec                  : 8;  /**< [ 79: 72] Configured exponent for output X. Verified range is [0,50]. */
        uint64_t reserved_80_87        : 8;
        uint64_t rinv_ec               : 8;  /**< [ 95: 88] Configured Exponent for R^_d^(-1). Verified range is [0,-128]. */
        uint64_t reserved_96_103       : 8;
        uint64_t xreg_e                : 8;  /**< [111:104] Exponent for Xreg (12bit I and Q) in XQFX.
                                                                 Xreg in eFXP is translated into ARFP as Mantissa * 2^([XREG_E]).
                                                                 Valid only for ARXE_COMMON_CFG_S[PROCESSING_MODE] = 0x1.
                                                                 Verified range is [-10,-7]. */
        uint64_t wtdi_e                : 8;  /**< [119:112] Exponent for W_(TDI0,sym) and W_(TDI1,sym) in eFXP
                                                                 W_(TDI,sym) in eFXP is translated into ARFP as Mantissa * 2^([WTDI_E])
                                                                 Typical expected range is [-12, -15]. Verified range is [-16,0]. */
        uint64_t wbf_e                 : 8;  /**< [127:120] Exponent for W_(B,i) in eFXP.
                                                                 W_(B,i) in eFXP is translated into ARFP as Mantissa * 2^([WBF_E]).
                                                                 Valid only for ARXE_COMMON_CFG_S[PROCESSING_MODE] = 0x2.
                                                                 Typical expected range is [-12, -15]. Verified range is [-16:0]. */
#endif /* Word 1 - End */
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 2 - Big Endian */
        uint64_t reserved_190_191      : 2;
        uint64_t rinv_prb_offset       : 6;  /**< [189:184] PRB offset for Rinv_d matrix.
                                                                 Same as the number of 512b words for each Rinv_d matrix in PMEM (compact format).
                                                                 For ARXE_COMMON_CFG_S[PROCESSING_MODE] = 0x0 and 0x1:
                                                                   ARXE_COMMON_CFG_S[NUM_BEAM] = 0x2 or 0x4: must be 1.
                                                                   ARXE_COMMON_CFG_S[NUM_BEAM] = 0x8: must be 3.
                                                                   ARXE_COMMON_CFG_S[NUM_BEAM] = 0xC: must be 5.
                                                                   ARXE_COMMON_CFG_S[NUM_BEAM] = 0x10: must be 9.
                                                                 For ARXE_COMMON_CFG_S[PROCESSING_MODE] = 0x2:
                                                                   ARXE_COMMON_CFG_S[NUM_BEAM] = 0x8: must be 3 * ARXE_COMMON_CFG_S[NUM_LAYER].
                                                                   ARXE_COMMON_CFG_S[NUM_BEAM] = 0xC: must be 5 * ARXE_COMMON_CFG_S[NUM_LAYER]. */
        uint64_t reserved_177_183      : 7;
        uint64_t rinv_base_addr        : 17; /**< [176:160] Base PMEM address in 512b of Rinv. It indicates the location of Rinv for the first RB of the job.
                                                                 Only for ARXE_COMMON_CFG_S[PROCESSING_MODE] = 0x0, 0x1 and 0x2. */
        uint64_t fdi_to_q              : 16; /**< [159:144] Imaginary part of the complex value (1/2 * exp(j*teta_TO)) used for Time Offset
                                                                 compensation/reapplication in FDI processing on weights.
                                                                 Only for ARXE_COMMON_CFG_S[PROCESSING_MODE] = 0x2. */
        uint64_t fdi_to_i              : 16; /**< [143:128] Real part of the complex value (1/2 * exp[(j*teta_TO))] used for Time Offset
                                                                 compensation/reapplication in FDI processing on weights.
                                                                 Same as phase rotation from subcarrier (n) to subcarrier (n+1) with the given TO.
                                                                 Two I/Q values for each data symbol are applied as follows:
                                                                 weight[k] = ([FDI_TO_I] - j*[FDI_TO_Q])*weight[k-1]+([FDI_TO_I] + j*[FDI_TO_Q])*weight[k+1].
                                                                 Only for ARXE_COMMON_CFG_S[PROCESSING_MODE] = 0x2. */
#else /* Word 2 - Little Endian */
        uint64_t fdi_to_i              : 16; /**< [143:128] Real part of the complex value (1/2 * exp[(j*teta_TO))] used for Time Offset
                                                                 compensation/reapplication in FDI processing on weights.
                                                                 Same as phase rotation from subcarrier (n) to subcarrier (n+1) with the given TO.
                                                                 Two I/Q values for each data symbol are applied as follows:
                                                                 weight[k] = ([FDI_TO_I] - j*[FDI_TO_Q])*weight[k-1]+([FDI_TO_I] + j*[FDI_TO_Q])*weight[k+1].
                                                                 Only for ARXE_COMMON_CFG_S[PROCESSING_MODE] = 0x2. */
        uint64_t fdi_to_q              : 16; /**< [159:144] Imaginary part of the complex value (1/2 * exp(j*teta_TO)) used for Time Offset
                                                                 compensation/reapplication in FDI processing on weights.
                                                                 Only for ARXE_COMMON_CFG_S[PROCESSING_MODE] = 0x2. */
        uint64_t rinv_base_addr        : 17; /**< [176:160] Base PMEM address in 512b of Rinv. It indicates the location of Rinv for the first RB of the job.
                                                                 Only for ARXE_COMMON_CFG_S[PROCESSING_MODE] = 0x0, 0x1 and 0x2. */
        uint64_t reserved_177_183      : 7;
        uint64_t rinv_prb_offset       : 6;  /**< [189:184] PRB offset for Rinv_d matrix.
                                                                 Same as the number of 512b words for each Rinv_d matrix in PMEM (compact format).
                                                                 For ARXE_COMMON_CFG_S[PROCESSING_MODE] = 0x0 and 0x1:
                                                                   ARXE_COMMON_CFG_S[NUM_BEAM] = 0x2 or 0x4: must be 1.
                                                                   ARXE_COMMON_CFG_S[NUM_BEAM] = 0x8: must be 3.
                                                                   ARXE_COMMON_CFG_S[NUM_BEAM] = 0xC: must be 5.
                                                                   ARXE_COMMON_CFG_S[NUM_BEAM] = 0x10: must be 9.
                                                                 For ARXE_COMMON_CFG_S[PROCESSING_MODE] = 0x2:
                                                                   ARXE_COMMON_CFG_S[NUM_BEAM] = 0x8: must be 3 * ARXE_COMMON_CFG_S[NUM_LAYER].
                                                                   ARXE_COMMON_CFG_S[NUM_BEAM] = 0xC: must be 5 * ARXE_COMMON_CFG_S[NUM_LAYER]. */
        uint64_t reserved_190_191      : 2;
#endif /* Word 2 - End */
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 3 - Big Endian */
        uint64_t hrs_e                 : 8;  /**< [255:248] exponent for HRS in eFXP format. It is common for all layers and all antennas of HRS0 and HRS1. */
        uint64_t reserved_244_247      : 4;
        uint64_t hrs_layer_offset      : 12; /**< [243:232] Layer offset in 512b words. It is common for HRS0 and HRS1.
                                                                 Same as the number of 512b words between two adjacent layers of the same PRB. */
        uint64_t reserved_229_231      : 3;
        uint64_t hrs1_base_addr        : 17; /**< [228:212] Base PMEM address in 512b for indicating the location of HRS1 for the first PRB of the job. */
        uint64_t reserved_209_211      : 3;
        uint64_t hrs0_base_addr        : 17; /**< [208:192] Base PMEM address in 512b for indicating the location of HRS0 for the first PRB
                                                                 of the job. For ARXE_COMMON_CFG_S[NUM_BEAM] = 0x2, -[HRS0_BASE_ADDR] will be
                                                                 equal to [HRS1_BASE_ADDR]. */
#else /* Word 3 - Little Endian */
        uint64_t hrs0_base_addr        : 17; /**< [208:192] Base PMEM address in 512b for indicating the location of HRS0 for the first PRB
                                                                 of the job. For ARXE_COMMON_CFG_S[NUM_BEAM] = 0x2, -[HRS0_BASE_ADDR] will be
                                                                 equal to [HRS1_BASE_ADDR]. */
        uint64_t reserved_209_211      : 3;
        uint64_t hrs1_base_addr        : 17; /**< [228:212] Base PMEM address in 512b for indicating the location of HRS1 for the first PRB of the job. */
        uint64_t reserved_229_231      : 3;
        uint64_t hrs_layer_offset      : 12; /**< [243:232] Layer offset in 512b words. It is common for HRS0 and HRS1.
                                                                 Same as the number of 512b words between two adjacent layers of the same PRB. */
        uint64_t reserved_244_247      : 4;
        uint64_t hrs_e                 : 8;  /**< [255:248] exponent for HRS in eFXP format. It is common for all layers and all antennas of HRS0 and HRS1. */
#endif /* Word 3 - End */
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 4 - Big Endian */
        uint64_t wbf_addr_layer_3      : 16; /**< [319:304] Refer to [WBF_ADDR_LAYER_0]. */
        uint64_t wbf_addr_layer_2      : 16; /**< [303:288] Refer to [WBF_ADDR_LAYER_0]. */
        uint64_t wbf_addr_layer_1      : 16; /**< [287:272] Refer to [WBF_ADDR_LAYER_0]. */
        uint64_t wbf_addr_layer_0      : 16; /**< [271:256] WBF_addr_layer_X, where X is layer index (X in [0,7]).
                                                                 PMEM address in 512b of the W_(B,i) used for layer X.
                                                                 Address must be limited to the first 4MB in byte address of the PMEM.
                                                                 Valid only for ARXE_COMMON_CFG_S[PROCESSING_MODE] = 0x2. */
#else /* Word 4 - Little Endian */
        uint64_t wbf_addr_layer_0      : 16; /**< [271:256] WBF_addr_layer_X, where X is layer index (X in [0,7]).
                                                                 PMEM address in 512b of the W_(B,i) used for layer X.
                                                                 Address must be limited to the first 4MB in byte address of the PMEM.
                                                                 Valid only for ARXE_COMMON_CFG_S[PROCESSING_MODE] = 0x2. */
        uint64_t wbf_addr_layer_1      : 16; /**< [287:272] Refer to [WBF_ADDR_LAYER_0]. */
        uint64_t wbf_addr_layer_2      : 16; /**< [303:288] Refer to [WBF_ADDR_LAYER_0]. */
        uint64_t wbf_addr_layer_3      : 16; /**< [319:304] Refer to [WBF_ADDR_LAYER_0]. */
#endif /* Word 4 - End */
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 5 - Big Endian */
        uint64_t wbf_addr_layer_7      : 16; /**< [383:368] Refer to [WBF_ADDR_LAYER_0]. */
        uint64_t wbf_addr_layer_6      : 16; /**< [367:352] Refer to [WBF_ADDR_LAYER_0]. */
        uint64_t wbf_addr_layer_5      : 16; /**< [351:336] Refer to [WBF_ADDR_LAYER_0]. */
        uint64_t wbf_addr_layer_4      : 16; /**< [335:320] Refer to [WBF_ADDR_LAYER_0]. */
#else /* Word 5 - Little Endian */
        uint64_t wbf_addr_layer_4      : 16; /**< [335:320] Refer to [WBF_ADDR_LAYER_0]. */
        uint64_t wbf_addr_layer_5      : 16; /**< [351:336] Refer to [WBF_ADDR_LAYER_0]. */
        uint64_t wbf_addr_layer_6      : 16; /**< [367:352] Refer to [WBF_ADDR_LAYER_0]. */
        uint64_t wbf_addr_layer_7      : 16; /**< [383:368] Refer to [WBF_ADDR_LAYER_0]. */
#endif /* Word 5 - End */
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 6 - Big Endian */
        uint64_t wtdi_addr_layer_3     : 16; /**< [447:432] Refer to [WTDI_ADDR_LAYER_0]. */
        uint64_t wtdi_addr_layer_2     : 16; /**< [431:416] Refer to [WTDI_ADDR_LAYER_0] */
        uint64_t wtdi_addr_layer_1     : 16; /**< [415:400] Refer to [WTDI_ADDR_LAYER_0] */
        uint64_t wtdi_addr_layer_0     : 16; /**< [399:384] WTDI_addr_layer_X, where X is the layer index (X in [0,7].
                                                                 PMEM address in 512b of the WTDI used for layer X.
                                                                 Address must be limited to the first 4MB in byte address of the PMEM. */
#else /* Word 6 - Little Endian */
        uint64_t wtdi_addr_layer_0     : 16; /**< [399:384] WTDI_addr_layer_X, where X is the layer index (X in [0,7].
                                                                 PMEM address in 512b of the WTDI used for layer X.
                                                                 Address must be limited to the first 4MB in byte address of the PMEM. */
        uint64_t wtdi_addr_layer_1     : 16; /**< [415:400] Refer to [WTDI_ADDR_LAYER_0] */
        uint64_t wtdi_addr_layer_2     : 16; /**< [431:416] Refer to [WTDI_ADDR_LAYER_0] */
        uint64_t wtdi_addr_layer_3     : 16; /**< [447:432] Refer to [WTDI_ADDR_LAYER_0]. */
#endif /* Word 6 - End */
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 7 - Big Endian */
        uint64_t wtdi_addr_layer_7     : 16; /**< [511:496] Refer to [WTDI_ADDR_LAYER_0] */
        uint64_t wtdi_addr_layer_6     : 16; /**< [495:480] Refer to [WTDI_ADDR_LAYER_0] */
        uint64_t wtdi_addr_layer_5     : 16; /**< [479:464] Refer to [WTDI_ADDR_LAYER_0] */
        uint64_t wtdi_addr_layer_4     : 16; /**< [463:448] Refer to [WTDI_ADDR_LAYER_0] */
#else /* Word 7 - Little Endian */
        uint64_t wtdi_addr_layer_4     : 16; /**< [463:448] Refer to [WTDI_ADDR_LAYER_0] */
        uint64_t wtdi_addr_layer_5     : 16; /**< [479:464] Refer to [WTDI_ADDR_LAYER_0] */
        uint64_t wtdi_addr_layer_6     : 16; /**< [495:480] Refer to [WTDI_ADDR_LAYER_0] */
        uint64_t wtdi_addr_layer_7     : 16; /**< [511:496] Refer to [WTDI_ADDR_LAYER_0] */
#endif /* Word 7 - End */
    } s;
    /* struct cavm_arxe_cfg0_s_s cn; */
};

/**
 * Structure arxe_cfg1_s
 *
 * ARXE CFG1 Structure
 * This structure specifies the task configuration format forARXE_COMMON_CFG_S[PROCESSING_MODE] = 0x3.
 */
union cavm_arxe_cfg1_s
{
    uint64_t u[2];
    struct cavm_arxe_cfg1_s_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_53_63        : 11;
        uint64_t output_format         : 1;  /**< [ 52: 52] Output data format.
                                                                 0x0: IQFP.
                                                                 0x1: eFXP. */
        uint64_t reserved_49_51        : 3;
        uint64_t whitening_mode        : 1;  /**< [ 48: 48] 0x0: H whitening.
                                                                 0x1: y_ds whitening. */
        uint64_t reserved_33_47        : 15;
        uint64_t num_prb               : 9;  /**< [ 32: 24] Number of PRB per a data symbol (DS). */
        uint64_t reserved_0_23         : 24;
#else /* Word 0 - Little Endian */
        uint64_t reserved_0_23         : 24;
        uint64_t num_prb               : 9;  /**< [ 32: 24] Number of PRB per a data symbol (DS). */
        uint64_t reserved_33_47        : 15;
        uint64_t whitening_mode        : 1;  /**< [ 48: 48] 0x0: H whitening.
                                                                 0x1: y_ds whitening. */
        uint64_t reserved_49_51        : 3;
        uint64_t output_format         : 1;  /**< [ 52: 52] Output data format.
                                                                 0x0: IQFP.
                                                                 0x1: eFXP. */
        uint64_t reserved_53_63        : 11;
#endif /* Word 0 - End */
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 1 - Big Endian */
        uint64_t input_e               : 8;  /**< [127:120] Exponent (E) for input H_RS in eFXP format. It is common for all layers and all
                                                                 antennas. only valid for ARXE_CFG1_S[WHITENING_MODE] = 0x0. */
        uint64_t reserved_112_119      : 8;
        uint64_t rinv_ec               : 8;  /**< [111:104] Configured Exponent (E) for  Rinv_d.
                                                                 Verification range is [0,-128]. */
        uint64_t output_ec             : 8;  /**< [103: 96] Configured Exponent (E) for output data H_w or y_(DS,w).
                                                                 verification range is [0,25]. */
        uint64_t reserved_92_95        : 4;
        uint64_t rinv_prb_offset       : 4;  /**< [ 91: 88] PRB offset for Rinv_d^.
                                                                 Same as the number of 512b words for each R matrix in PMEM (compact format).
                                                                 ARXE_COMMON_CFG_S[NUM_BEAM] = 0x2 and 0x4: 1.
                                                                 ARXE_COMMON_CFG_S[NUM_BEAM] = 0x8: 3.
                                                                 ARXE_COMMON_CFG_S[NUM_BEAM] = 0xC: 5.
                                                                 ARXE_COMMON_CFG_S[NUM_BEAM] = 0x10: 9. */
        uint64_t reserved_81_87        : 7;
        uint64_t rinv_base_addr        : 17; /**< [ 80: 64] Base PMEM address in 512b of Rinv_d indicating the location of Rinv_d for the first PRB of the job.
                                                                 Rinv_d matrix of the n-th PRB of a job is located at ([RINV_BASE_ADDR] + [RINV_PRB_OFFSET] * n). */
#else /* Word 1 - Little Endian */
        uint64_t rinv_base_addr        : 17; /**< [ 80: 64] Base PMEM address in 512b of Rinv_d indicating the location of Rinv_d for the first PRB of the job.
                                                                 Rinv_d matrix of the n-th PRB of a job is located at ([RINV_BASE_ADDR] + [RINV_PRB_OFFSET] * n). */
        uint64_t reserved_81_87        : 7;
        uint64_t rinv_prb_offset       : 4;  /**< [ 91: 88] PRB offset for Rinv_d^.
                                                                 Same as the number of 512b words for each R matrix in PMEM (compact format).
                                                                 ARXE_COMMON_CFG_S[NUM_BEAM] = 0x2 and 0x4: 1.
                                                                 ARXE_COMMON_CFG_S[NUM_BEAM] = 0x8: 3.
                                                                 ARXE_COMMON_CFG_S[NUM_BEAM] = 0xC: 5.
                                                                 ARXE_COMMON_CFG_S[NUM_BEAM] = 0x10: 9. */
        uint64_t reserved_92_95        : 4;
        uint64_t output_ec             : 8;  /**< [103: 96] Configured Exponent (E) for output data H_w or y_(DS,w).
                                                                 verification range is [0,25]. */
        uint64_t rinv_ec               : 8;  /**< [111:104] Configured Exponent (E) for  Rinv_d.
                                                                 Verification range is [0,-128]. */
        uint64_t reserved_112_119      : 8;
        uint64_t input_e               : 8;  /**< [127:120] Exponent (E) for input H_RS in eFXP format. It is common for all layers and all
                                                                 antennas. only valid for ARXE_CFG1_S[WHITENING_MODE] = 0x0. */
#endif /* Word 1 - End */
    } s;
    /* struct cavm_arxe_cfg1_s_s cn; */
};

/**
 * Structure arxe_cfg2_s
 *
 * ARXE CFG2 W1 to W4 Structure
 * This structure specifies words 2-4 of Configuration for ARXE_COMMON_CFG_S[PROCESSING_MODE] = 0x4.
 */
union cavm_arxe_cfg2_s
{
    uint64_t u[4];
    struct cavm_arxe_cfg2_s_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t wbf_addr_beam_3       : 16; /**< [ 63: 48] Refer to [WBF_ADDR_BEAM_0]. */
        uint64_t wbf_addr_beam_2       : 16; /**< [ 47: 32] Refer to [WBF_ADDR_BEAM_0]. */
        uint64_t wbf_addr_beam_1       : 16; /**< [ 31: 16] Refer to [WBF_ADDR_BEAM_0]. */
        uint64_t wbf_addr_beam_0       : 16; /**< [ 15:  0] WBF_ADDR_BEAM_X, where x is the beam index (X in[0,7]).
                                                                 PMEM address in 512b of the W_BF used for beam X.
                                                                 Address must be limited to the first 4MB in byte address of the PMEM.

                                                                 If address is A in this configuration, the corresponding byte address would be ( A \<\< 6 ). */
#else /* Word 0 - Little Endian */
        uint64_t wbf_addr_beam_0       : 16; /**< [ 15:  0] WBF_ADDR_BEAM_X, where x is the beam index (X in[0,7]).
                                                                 PMEM address in 512b of the W_BF used for beam X.
                                                                 Address must be limited to the first 4MB in byte address of the PMEM.

                                                                 If address is A in this configuration, the corresponding byte address would be ( A \<\< 6 ). */
        uint64_t wbf_addr_beam_1       : 16; /**< [ 31: 16] Refer to [WBF_ADDR_BEAM_0]. */
        uint64_t wbf_addr_beam_2       : 16; /**< [ 47: 32] Refer to [WBF_ADDR_BEAM_0]. */
        uint64_t wbf_addr_beam_3       : 16; /**< [ 63: 48] Refer to [WBF_ADDR_BEAM_0]. */
#endif /* Word 0 - End */
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 1 - Big Endian */
        uint64_t wbf_addr_beam_7       : 16; /**< [127:112] Refer to [WBF_ADDR_BEAM_0]. */
        uint64_t wbf_addr_beam_6       : 16; /**< [111: 96] Refer to [WBF_ADDR_BEAM_0]. */
        uint64_t wbf_addr_beam_5       : 16; /**< [ 95: 80] Refer to [WBF_ADDR_BEAM_0]. */
        uint64_t wbf_addr_beam_4       : 16; /**< [ 79: 64] Refer to [WBF_ADDR_BEAM_0]. */
#else /* Word 1 - Little Endian */
        uint64_t wbf_addr_beam_4       : 16; /**< [ 79: 64] Refer to [WBF_ADDR_BEAM_0]. */
        uint64_t wbf_addr_beam_5       : 16; /**< [ 95: 80] Refer to [WBF_ADDR_BEAM_0]. */
        uint64_t wbf_addr_beam_6       : 16; /**< [111: 96] Refer to [WBF_ADDR_BEAM_0]. */
        uint64_t wbf_addr_beam_7       : 16; /**< [127:112] Refer to [WBF_ADDR_BEAM_0]. */
#endif /* Word 1 - End */
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 2 - Big Endian */
        uint64_t wbf_addr_beam_11      : 16; /**< [191:176] Refer to [WBF_ADDR_BEAM_0]. */
        uint64_t wbf_addr_beam_10      : 16; /**< [175:160] Refer to [WBF_ADDR_BEAM_0]. */
        uint64_t wbf_addr_beam_9       : 16; /**< [159:144] Refer to [WBF_ADDR_BEAM_0]. */
        uint64_t wbf_addr_beam_8       : 16; /**< [143:128] Refer to [WBF_ADDR_BEAM_0]. */
#else /* Word 2 - Little Endian */
        uint64_t wbf_addr_beam_8       : 16; /**< [143:128] Refer to [WBF_ADDR_BEAM_0]. */
        uint64_t wbf_addr_beam_9       : 16; /**< [159:144] Refer to [WBF_ADDR_BEAM_0]. */
        uint64_t wbf_addr_beam_10      : 16; /**< [175:160] Refer to [WBF_ADDR_BEAM_0]. */
        uint64_t wbf_addr_beam_11      : 16; /**< [191:176] Refer to [WBF_ADDR_BEAM_0]. */
#endif /* Word 2 - End */
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 3 - Big Endian */
        uint64_t wbf_addr_beam_15      : 16; /**< [255:240] Refer to [WBF_ADDR_BEAM_0]. */
        uint64_t wbf_addr_beam_14      : 16; /**< [239:224] Refer to [WBF_ADDR_BEAM_0]. */
        uint64_t wbf_addr_beam_13      : 16; /**< [223:208] Refer to [WBF_ADDR_BEAM_0]. */
        uint64_t wbf_addr_beam_12      : 16; /**< [207:192] Refer to [WBF_ADDR_BEAM_0]. */
#else /* Word 3 - Little Endian */
        uint64_t wbf_addr_beam_12      : 16; /**< [207:192] Refer to [WBF_ADDR_BEAM_0]. */
        uint64_t wbf_addr_beam_13      : 16; /**< [223:208] Refer to [WBF_ADDR_BEAM_0]. */
        uint64_t wbf_addr_beam_14      : 16; /**< [239:224] Refer to [WBF_ADDR_BEAM_0]. */
        uint64_t wbf_addr_beam_15      : 16; /**< [255:240] Refer to [WBF_ADDR_BEAM_0]. */
#endif /* Word 3 - End */
    } s;
    /* struct cavm_arxe_cfg2_s_s cn; */
};

/**
 * Structure arxe_cfg2_w0_s
 *
 * ARXE CFG2 W0 Structure
 * This structure specifies Job Configuration for ARXE_COMMON_CFG_S[PROCESSING_MODE] = 0x4.
 */
union cavm_arxe_cfg2_w0_s
{
    uint64_t u;
    struct cavm_arxe_cfg2_w0_s_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_41_63        : 23;
        uint64_t num_prb               : 9;  /**< [ 40: 32] Number of PRB per data symbol (DS).
                                                                 ARXE_COMMON_CFG_S[NUM_BEAM] = 0x10: it must be \<= 40.
                                                                 ARXE_COMMON_CFG_S[NUM_BEAM] = 0x8: it must be \<= 80. */
        uint64_t reserved_24_31        : 8;
        uint64_t wbf_e                 : 8;  /**< [ 23: 16] Exponent (E) for W_BF in eFXP.
                                                                 W_BF in eFXP is translated into ARFP as Mantissa * 2^([WBF_E]). */
        uint64_t reserved_0_15         : 16;
#else /* Word 0 - Little Endian */
        uint64_t reserved_0_15         : 16;
        uint64_t wbf_e                 : 8;  /**< [ 23: 16] Exponent (E) for W_BF in eFXP.
                                                                 W_BF in eFXP is translated into ARFP as Mantissa * 2^([WBF_E]). */
        uint64_t reserved_24_31        : 8;
        uint64_t num_prb               : 9;  /**< [ 40: 32] Number of PRB per data symbol (DS).
                                                                 ARXE_COMMON_CFG_S[NUM_BEAM] = 0x10: it must be \<= 40.
                                                                 ARXE_COMMON_CFG_S[NUM_BEAM] = 0x8: it must be \<= 80. */
        uint64_t reserved_41_63        : 23;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_arxe_cfg2_w0_s_s cn; */
};

/**
 * Structure arxe_cfg3_s
 *
 * ARXE CFG3 Structure
 * This structure specifies words for ARXE_COMMON_CFG_S[PROCESSING_MODE] = 0x4.
 */
union cavm_arxe_cfg3_s
{
    uint64_t u[2];
    struct cavm_arxe_cfg3_s_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t wbf_addr_beam_3       : 16; /**< [ 63: 48] Refer to [WBF_ADDR_BEAM_0]. */
        uint64_t wbf_addr_beam_2       : 16; /**< [ 47: 32] Refer to [WBF_ADDR_BEAM_0]. */
        uint64_t wbf_addr_beam_1       : 16; /**< [ 31: 16] Refer to [WBF_ADDR_BEAM_0]. */
        uint64_t wbf_addr_beam_0       : 16; /**< [ 15:  0] WBF_ADDR_BEAM_X, where x is the beam index (X in[0,7]).
                                                                 PMEM address in 512b of the W_BF used for beam X.
                                                                 Address must be limited to the first 4MB in byte address of the PMEM.

                                                                 If address is A in this configuration, the corresponding byte address would be ( A \<\< 6 ). */
#else /* Word 0 - Little Endian */
        uint64_t wbf_addr_beam_0       : 16; /**< [ 15:  0] WBF_ADDR_BEAM_X, where x is the beam index (X in[0,7]).
                                                                 PMEM address in 512b of the W_BF used for beam X.
                                                                 Address must be limited to the first 4MB in byte address of the PMEM.

                                                                 If address is A in this configuration, the corresponding byte address would be ( A \<\< 6 ). */
        uint64_t wbf_addr_beam_1       : 16; /**< [ 31: 16] Refer to [WBF_ADDR_BEAM_0]. */
        uint64_t wbf_addr_beam_2       : 16; /**< [ 47: 32] Refer to [WBF_ADDR_BEAM_0]. */
        uint64_t wbf_addr_beam_3       : 16; /**< [ 63: 48] Refer to [WBF_ADDR_BEAM_0]. */
#endif /* Word 0 - End */
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 1 - Big Endian */
        uint64_t wbf_addr_beam_7       : 16; /**< [127:112] Refer to [WBF_ADDR_BEAM_0]. */
        uint64_t wbf_addr_beam_6       : 16; /**< [111: 96] Refer to [WBF_ADDR_BEAM_0]. */
        uint64_t wbf_addr_beam_5       : 16; /**< [ 95: 80] Refer to [WBF_ADDR_BEAM_0]. */
        uint64_t wbf_addr_beam_4       : 16; /**< [ 79: 64] Refer to [WBF_ADDR_BEAM_0]. */
#else /* Word 1 - Little Endian */
        uint64_t wbf_addr_beam_4       : 16; /**< [ 79: 64] Refer to [WBF_ADDR_BEAM_0]. */
        uint64_t wbf_addr_beam_5       : 16; /**< [ 95: 80] Refer to [WBF_ADDR_BEAM_0]. */
        uint64_t wbf_addr_beam_6       : 16; /**< [111: 96] Refer to [WBF_ADDR_BEAM_0]. */
        uint64_t wbf_addr_beam_7       : 16; /**< [127:112] Refer to [WBF_ADDR_BEAM_0]. */
#endif /* Word 1 - End */
    } s;
    /* struct cavm_arxe_cfg3_s_s cn; */
};

/**
 * Structure arxe_common_cfg_s
 *
 * ARXE COMMON Structure
 * This structure specifies the single 64b word ARXE CFG COMMON format which is common
 * to all processing modes (PROCESSING_MODE] = 0x0,0x1,0x2,0x3,0x4).
 */
union cavm_arxe_common_cfg_s
{
    uint64_t u;
    struct cavm_arxe_common_cfg_s_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_63           : 1;
        uint64_t processing_mode       : 3;  /**< [ 62: 60] 0x0 = Mode 11.
                                                                 0x1 = Mode 12.
                                                                 0x2 = Mode 2.
                                                                 0x3 = Mode 3.
                                                                 0x4 = Mode 4. */
        uint64_t reserved_40_59        : 20;
        uint64_t num_ds                : 4;  /**< [ 39: 36] Number of data symbols to be processed by ARXE.
                                                                 This includes Reference Symbols (RS) in cases where data is mapped on RS in NR CP-OFDM.
                                                                   [NUM_BEAM] = 0x8,0x4,0x2: supports up to 14 symbols.
                                                                   [NUM_BEAM] = 0x10,0xC: supports up to 7 symbols.

                                                                 For mode 3:
                                                                   Number of data symbols to be processed by ARXE for ARXE_CFG1_S[WHITENING_MODE] = 1.
                                                                   This includes Reference Symbols (RS) in cases where data is mapped on RS in NR
                                                                 CP-OFDM for ARXE_CFG1_S[WHITENING_MODE] = 1.

                                                                 For mode 4:
                                                                   This field is ignored and assumed to be 1.
                                                                   Setting NUM_DS=1 is recommended but not required for proper mode 4 functionality. */
        uint64_t reserved_29_35        : 7;
        uint64_t rx_mode               : 1;  /**< [ 28: 28] Number of RX antennas for [PROCESSING_MODE] = 0x2 and 0x4.
                                                                 0x0 = 32.
                                                                 0x1 = 64. */
        uint64_t reserved_25_27        : 3;
        uint64_t num_beam              : 5;  /**< [ 24: 20] Number of Beams.
                                                                 [PROCESSING_MODE] = 0x0 and 0x1: 2, 4, 8, 12, 16.
                                                                 [PROCESSING_MODE] = 0x2: 8, 12.
                                                                 [PROCESSING_MODE] = 0x3: 2, 4, 8, 12, 16.
                                                                 [PROCESSING_MODE] = 0x4: 8, 16.
                                                                 [PROCESSING_MODE] = 0x2 and 0x4 can support [NUM_BEAM] = 0x2 and 0x4 by using
                                                                 [NUM_BEAM] = 0x8 configuration. */
        uint64_t reserved_16_19        : 4;
        uint64_t num_layer             : 4;  /**< [ 15: 12] Number of layers. valid range is described in the chapter.
                                                                 For [PROCESSING_MODE] = 0x3, it specifies number of layers for ARXE_CFG1_S[WHITENING_MODE] = 0.
                                                                 For [PROCESSING_MODE] = 0x4, it is not used and will be ignored. */
        uint64_t reserved_5_11         : 7;
        uint64_t num_tasks             : 5;  /**< [  4:  0] Number of bundled tasks.
                                                                 [PROCESSING_MODE] = 0x0, 0x1, 0x2: the maximum number of descriptor words
                                                                 for the MHBW DMA is 1023.
                                                                 Number of bundles tasks must be chosen taking the above limitation into account.
                                                                 [PROCESSING_MODE] = 0x3 and 0x4: It must be 1. */
#else /* Word 0 - Little Endian */
        uint64_t num_tasks             : 5;  /**< [  4:  0] Number of bundled tasks.
                                                                 [PROCESSING_MODE] = 0x0, 0x1, 0x2: the maximum number of descriptor words
                                                                 for the MHBW DMA is 1023.
                                                                 Number of bundles tasks must be chosen taking the above limitation into account.
                                                                 [PROCESSING_MODE] = 0x3 and 0x4: It must be 1. */
        uint64_t reserved_5_11         : 7;
        uint64_t num_layer             : 4;  /**< [ 15: 12] Number of layers. valid range is described in the chapter.
                                                                 For [PROCESSING_MODE] = 0x3, it specifies number of layers for ARXE_CFG1_S[WHITENING_MODE] = 0.
                                                                 For [PROCESSING_MODE] = 0x4, it is not used and will be ignored. */
        uint64_t reserved_16_19        : 4;
        uint64_t num_beam              : 5;  /**< [ 24: 20] Number of Beams.
                                                                 [PROCESSING_MODE] = 0x0 and 0x1: 2, 4, 8, 12, 16.
                                                                 [PROCESSING_MODE] = 0x2: 8, 12.
                                                                 [PROCESSING_MODE] = 0x3: 2, 4, 8, 12, 16.
                                                                 [PROCESSING_MODE] = 0x4: 8, 16.
                                                                 [PROCESSING_MODE] = 0x2 and 0x4 can support [NUM_BEAM] = 0x2 and 0x4 by using
                                                                 [NUM_BEAM] = 0x8 configuration. */
        uint64_t reserved_25_27        : 3;
        uint64_t rx_mode               : 1;  /**< [ 28: 28] Number of RX antennas for [PROCESSING_MODE] = 0x2 and 0x4.
                                                                 0x0 = 32.
                                                                 0x1 = 64. */
        uint64_t reserved_29_35        : 7;
        uint64_t num_ds                : 4;  /**< [ 39: 36] Number of data symbols to be processed by ARXE.
                                                                 This includes Reference Symbols (RS) in cases where data is mapped on RS in NR CP-OFDM.
                                                                   [NUM_BEAM] = 0x8,0x4,0x2: supports up to 14 symbols.
                                                                   [NUM_BEAM] = 0x10,0xC: supports up to 7 symbols.

                                                                 For mode 3:
                                                                   Number of data symbols to be processed by ARXE for ARXE_CFG1_S[WHITENING_MODE] = 1.
                                                                   This includes Reference Symbols (RS) in cases where data is mapped on RS in NR
                                                                 CP-OFDM for ARXE_CFG1_S[WHITENING_MODE] = 1.

                                                                 For mode 4:
                                                                   This field is ignored and assumed to be 1.
                                                                   Setting NUM_DS=1 is recommended but not required for proper mode 4 functionality. */
        uint64_t reserved_40_59        : 20;
        uint64_t processing_mode       : 3;  /**< [ 62: 60] 0x0 = Mode 11.
                                                                 0x1 = Mode 12.
                                                                 0x2 = Mode 2.
                                                                 0x3 = Mode 3.
                                                                 0x4 = Mode 4. */
        uint64_t reserved_63           : 1;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_arxe_common_cfg_s_s cn; */
};

/**
 * Register (RSL) arxe#_ab#_control
 *
 * ARXE Control Register
 */
union cavm_arxex_abx_control
{
    uint64_t u;
    struct cavm_arxex_abx_control_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_48_63        : 16;
        uint64_t jobid1                : 16; /**< [ 47: 32](R/W/H) Job ID for slot 1. */
        uint64_t jobid0                : 16; /**< [ 31: 16](R/W/H) Job ID for slot 0. */
        uint64_t reserved_2_15         : 14;
        uint64_t start1                : 1;  /**< [  1:  1](R/W/H) Start processing job in slot 1. */
        uint64_t start0                : 1;  /**< [  0:  0](R/W/H) Start processing job in slot 0. */
#else /* Word 0 - Little Endian */
        uint64_t start0                : 1;  /**< [  0:  0](R/W/H) Start processing job in slot 0. */
        uint64_t start1                : 1;  /**< [  1:  1](R/W/H) Start processing job in slot 1. */
        uint64_t reserved_2_15         : 14;
        uint64_t jobid0                : 16; /**< [ 31: 16](R/W/H) Job ID for slot 0. */
        uint64_t jobid1                : 16; /**< [ 47: 32](R/W/H) Job ID for slot 1. */
        uint64_t reserved_48_63        : 16;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_arxex_abx_control_s cn; */
};
typedef union cavm_arxex_abx_control cavm_arxex_abx_control_t;

static inline uint64_t CAVM_ARXEX_ABX_CONTROL(uint64_t a, uint64_t b) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_ARXEX_ABX_CONTROL(uint64_t a, uint64_t b)
{
    if (cavm_is_model(OCTEONTX_CNF20KA) && ((a<=3) && (b<=1)))
        return 0x87e041400000ll + 0x80000ll * ((a) & 0x3) + 0x10000ll * ((b) & 0x1);
    __cavm_csr_fatal("ARXEX_ABX_CONTROL", 2, a, b, 0, 0, 0, 0);
}

#define typedef_CAVM_ARXEX_ABX_CONTROL(a,b) cavm_arxex_abx_control_t
#define bustype_CAVM_ARXEX_ABX_CONTROL(a,b) CSR_TYPE_RSL
#define basename_CAVM_ARXEX_ABX_CONTROL(a,b) "ARXEX_ABX_CONTROL"
#define device_bar_CAVM_ARXEX_ABX_CONTROL(a,b) 0x2 /* PF_BAR2 */
#define busnum_CAVM_ARXEX_ABX_CONTROL(a,b) (a)
#define arguments_CAVM_ARXEX_ABX_CONTROL(a,b) (a),(b),-1,-1

/**
 * Register (RSL) arxe#_ab#_error_enable0
 *
 * ARXE Error Enable 0 Register
 * This register enables error reporting for ARXE_ERROR_SOURCE0 register.
 */
union cavm_arxex_abx_error_enable0
{
    uint64_t u;
    struct cavm_arxex_abx_error_enable0_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_52_63        : 12;
        uint64_t overflow_process_en   : 1;  /**< [ 51: 51](R/W) This enables the check for the maximum internal range of +-1.99996948x2^127 is exceeded
                                                                 when performing a calculation. */
        uint64_t overflow_out_en       : 1;  /**< [ 50: 50](R/W) This enables the check for the results for output conversion to IQFP/EXFP if
                                                                 its out range. The particular output data will be set to the maximum(saturated)
                                                                 value. */
        uint64_t neg_sqrt_en           : 1;  /**< [ 49: 49](R/W) This enables the check for negative square root when performing a calculation. */
        uint64_t overflow_happened_in_en : 1;/**< [ 48: 48](R/W) This enables the check for the maximum range of +-1.99996948x2^127 is exceeded when
                                                                 converting input data. */
        uint64_t wbf_e_en              : 1;  /**< [ 47: 47](R/W) wbf_e error check enable. */
        uint64_t hrs_e_en              : 1;  /**< [ 46: 46](R/W) hrs_e error check enable. */
        uint64_t hrs1_base_addr_en     : 1;  /**< [ 45: 45](R/W) hrs1_base_addr error check enable. */
        uint64_t hrs0_base_addr_en     : 1;  /**< [ 44: 44](R/W) hrs0_base_addr error check enable. */
        uint64_t rinv_prb_offset_en    : 1;  /**< [ 43: 43](R/W) rinv_prb_offset error check enable. */
        uint64_t rinv_base_addr_en     : 1;  /**< [ 42: 42](R/W) rinv_base_addr error check enable. */
        uint64_t q_threshold_en        : 1;  /**< [ 41: 41](R/W) q_threshold error check enable. */
        uint64_t num_prb_en            : 1;  /**< [ 40: 40](R/W) num_prb error check enable. */
        uint64_t rhh_mode_en           : 1;  /**< [ 39: 39](R/W) rhh_mode error check enable. */
        uint64_t wtdi_start_sym_idx_en : 1;  /**< [ 38: 38](R/W) wtdi_start_sym_idx error check enable. */
        uint64_t input_e_en            : 1;  /**< [ 37: 37](R/W) input_e error check enable. */
        uint64_t processing_mode_en    : 1;  /**< [ 36: 36](R/W) processing_mode error check enable. */
        uint64_t num_ds_en             : 1;  /**< [ 35: 35](R/W) num_ds error check enable. */
        uint64_t num_beam_en           : 1;  /**< [ 34: 34](R/W) num_beam error check enable. */
        uint64_t num_layer_en          : 1;  /**< [ 33: 33](R/W) num_layer error check enable. */
        uint64_t num_tasks_en          : 1;  /**< [ 32: 32](R/W) num_tasks error check enable. */
        uint64_t reserved_8_31         : 24;
        uint64_t pmem_intf_en          : 1;  /**< [  7:  7](R/W) PMEM Interface error check enable. */
        uint64_t bad_cholesky_err_en   : 1;  /**< [  6:  6](R/W) 0 : sqrt(abs(x)) is used. No error reported for a bad Cholesky Decomposition.
                                                                 1 : x\<=0 ? NaN : sqrt(x) A non-positive square root result in an error. Output
                                                                 will be forced to zero. */
        uint64_t reserved_5            : 1;
        uint64_t rp0_of_en             : 1;  /**< [  4:  4](R/W) Read port 0 overflow enable. */
        uint64_t reserved_1_3          : 3;
        uint64_t rp0_uf_en             : 1;  /**< [  0:  0](R/W) Read port 0 underflow enable. */
#else /* Word 0 - Little Endian */
        uint64_t rp0_uf_en             : 1;  /**< [  0:  0](R/W) Read port 0 underflow enable. */
        uint64_t reserved_1_3          : 3;
        uint64_t rp0_of_en             : 1;  /**< [  4:  4](R/W) Read port 0 overflow enable. */
        uint64_t reserved_5            : 1;
        uint64_t bad_cholesky_err_en   : 1;  /**< [  6:  6](R/W) 0 : sqrt(abs(x)) is used. No error reported for a bad Cholesky Decomposition.
                                                                 1 : x\<=0 ? NaN : sqrt(x) A non-positive square root result in an error. Output
                                                                 will be forced to zero. */
        uint64_t pmem_intf_en          : 1;  /**< [  7:  7](R/W) PMEM Interface error check enable. */
        uint64_t reserved_8_31         : 24;
        uint64_t num_tasks_en          : 1;  /**< [ 32: 32](R/W) num_tasks error check enable. */
        uint64_t num_layer_en          : 1;  /**< [ 33: 33](R/W) num_layer error check enable. */
        uint64_t num_beam_en           : 1;  /**< [ 34: 34](R/W) num_beam error check enable. */
        uint64_t num_ds_en             : 1;  /**< [ 35: 35](R/W) num_ds error check enable. */
        uint64_t processing_mode_en    : 1;  /**< [ 36: 36](R/W) processing_mode error check enable. */
        uint64_t input_e_en            : 1;  /**< [ 37: 37](R/W) input_e error check enable. */
        uint64_t wtdi_start_sym_idx_en : 1;  /**< [ 38: 38](R/W) wtdi_start_sym_idx error check enable. */
        uint64_t rhh_mode_en           : 1;  /**< [ 39: 39](R/W) rhh_mode error check enable. */
        uint64_t num_prb_en            : 1;  /**< [ 40: 40](R/W) num_prb error check enable. */
        uint64_t q_threshold_en        : 1;  /**< [ 41: 41](R/W) q_threshold error check enable. */
        uint64_t rinv_base_addr_en     : 1;  /**< [ 42: 42](R/W) rinv_base_addr error check enable. */
        uint64_t rinv_prb_offset_en    : 1;  /**< [ 43: 43](R/W) rinv_prb_offset error check enable. */
        uint64_t hrs0_base_addr_en     : 1;  /**< [ 44: 44](R/W) hrs0_base_addr error check enable. */
        uint64_t hrs1_base_addr_en     : 1;  /**< [ 45: 45](R/W) hrs1_base_addr error check enable. */
        uint64_t hrs_e_en              : 1;  /**< [ 46: 46](R/W) hrs_e error check enable. */
        uint64_t wbf_e_en              : 1;  /**< [ 47: 47](R/W) wbf_e error check enable. */
        uint64_t overflow_happened_in_en : 1;/**< [ 48: 48](R/W) This enables the check for the maximum range of +-1.99996948x2^127 is exceeded when
                                                                 converting input data. */
        uint64_t neg_sqrt_en           : 1;  /**< [ 49: 49](R/W) This enables the check for negative square root when performing a calculation. */
        uint64_t overflow_out_en       : 1;  /**< [ 50: 50](R/W) This enables the check for the results for output conversion to IQFP/EXFP if
                                                                 its out range. The particular output data will be set to the maximum(saturated)
                                                                 value. */
        uint64_t overflow_process_en   : 1;  /**< [ 51: 51](R/W) This enables the check for the maximum internal range of +-1.99996948x2^127 is exceeded
                                                                 when performing a calculation. */
        uint64_t reserved_52_63        : 12;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_arxex_abx_error_enable0_s cn; */
};
typedef union cavm_arxex_abx_error_enable0 cavm_arxex_abx_error_enable0_t;

static inline uint64_t CAVM_ARXEX_ABX_ERROR_ENABLE0(uint64_t a, uint64_t b) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_ARXEX_ABX_ERROR_ENABLE0(uint64_t a, uint64_t b)
{
    if (cavm_is_model(OCTEONTX_CNF20KA) && ((a<=3) && (b<=1)))
        return 0x87e041400040ll + 0x80000ll * ((a) & 0x3) + 0x10000ll * ((b) & 0x1);
    __cavm_csr_fatal("ARXEX_ABX_ERROR_ENABLE0", 2, a, b, 0, 0, 0, 0);
}

#define typedef_CAVM_ARXEX_ABX_ERROR_ENABLE0(a,b) cavm_arxex_abx_error_enable0_t
#define bustype_CAVM_ARXEX_ABX_ERROR_ENABLE0(a,b) CSR_TYPE_RSL
#define basename_CAVM_ARXEX_ABX_ERROR_ENABLE0(a,b) "ARXEX_ABX_ERROR_ENABLE0"
#define device_bar_CAVM_ARXEX_ABX_ERROR_ENABLE0(a,b) 0x2 /* PF_BAR2 */
#define busnum_CAVM_ARXEX_ABX_ERROR_ENABLE0(a,b) (a)
#define arguments_CAVM_ARXEX_ABX_ERROR_ENABLE0(a,b) (a),(b),-1,-1

/**
 * Register (RSL) arxe#_ab#_error_source0
 *
 * ARXE Error Source Register 0
 * This register reports the source of read DMA overflow/underflow errors.
 */
union cavm_arxex_abx_error_source0
{
    uint64_t u;
    struct cavm_arxex_abx_error_source0_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_52_63        : 12;
        uint64_t overflow_process      : 1;  /**< [ 51: 51](R/W1C/H) This is set whenever the maximum internal range of +-1.99996948x2^127 when
                                                                 performing a calculation. */
        uint64_t overflow_out          : 1;  /**< [ 50: 50](R/W1C/H) This is set whenever the output conversion to IQFP/EXFP results in an out of
                                                                 range value. The particular output data will be set to the maximum(saturated)
                                                                 value. This error may indicate a bad exponent configuration. */
        uint64_t neg_sqrt              : 1;  /**< [ 49: 49](R/W1C/H) This is set whenever a negative square root is encountered AND bad_cholesky_error_enable=1 */
        uint64_t overflow_happened_in  : 1;  /**< [ 48: 48](R/W1C/H) This is set whenever the maximum range of +-1.99996948x2^127 is exceed when
                                                                 converting input data. This indicates a bad exponent configuration. */
        uint64_t wbf_e                 : 1;  /**< [ 47: 47](R/W1C/H) wbf_e error status. */
        uint64_t hrs_e                 : 1;  /**< [ 46: 46](R/W1C/H) hrs_e error status. */
        uint64_t hrs1_base_addr        : 1;  /**< [ 45: 45](R/W1C/H) hrs1_base_addr error status. */
        uint64_t hrs0_base_addr        : 1;  /**< [ 44: 44](R/W1C/H) hrs0_base_addr error status. */
        uint64_t rinv_prb_offset       : 1;  /**< [ 43: 43](R/W1C/H) rinv_prb_offset error status. */
        uint64_t rinv_base_addr        : 1;  /**< [ 42: 42](R/W1C/H) rinv_base_addr error status. */
        uint64_t q_threshold           : 1;  /**< [ 41: 41](R/W1C/H) q_threshold error status. */
        uint64_t num_prb               : 1;  /**< [ 40: 40](R/W1C/H) num_prb error status. */
        uint64_t rhh_mode              : 1;  /**< [ 39: 39](R/W1C/H) rhh_mode error status. */
        uint64_t wtdi_start_sym_idx    : 1;  /**< [ 38: 38](R/W1C/H) wtdi_start_sym_idx error status. */
        uint64_t input_e               : 1;  /**< [ 37: 37](R/W1C/H) input_e error status. */
        uint64_t processing_mode       : 1;  /**< [ 36: 36](R/W1C/H) processing_mode error status. */
        uint64_t num_ds                : 1;  /**< [ 35: 35](R/W1C/H) num_ds error status. */
        uint64_t num_beam              : 1;  /**< [ 34: 34](R/W1C/H) num_beam error status. */
        uint64_t num_layer             : 1;  /**< [ 33: 33](R/W1C/H) num_layer error status. */
        uint64_t num_tasks             : 1;  /**< [ 32: 32](R/W1C/H) num_tasks error status. */
        uint64_t rp0_jobid             : 16; /**< [ 31: 16](RO/H) Job ID for read port 0. */
        uint64_t reserved_5_15         : 11;
        uint64_t rp0_of                : 1;  /**< [  4:  4](R/W1C/H) Read port 0 overflow. */
        uint64_t reserved_1_3          : 3;
        uint64_t rp0_uf                : 1;  /**< [  0:  0](R/W1C/H) Read port 0 underflow. */
#else /* Word 0 - Little Endian */
        uint64_t rp0_uf                : 1;  /**< [  0:  0](R/W1C/H) Read port 0 underflow. */
        uint64_t reserved_1_3          : 3;
        uint64_t rp0_of                : 1;  /**< [  4:  4](R/W1C/H) Read port 0 overflow. */
        uint64_t reserved_5_15         : 11;
        uint64_t rp0_jobid             : 16; /**< [ 31: 16](RO/H) Job ID for read port 0. */
        uint64_t num_tasks             : 1;  /**< [ 32: 32](R/W1C/H) num_tasks error status. */
        uint64_t num_layer             : 1;  /**< [ 33: 33](R/W1C/H) num_layer error status. */
        uint64_t num_beam              : 1;  /**< [ 34: 34](R/W1C/H) num_beam error status. */
        uint64_t num_ds                : 1;  /**< [ 35: 35](R/W1C/H) num_ds error status. */
        uint64_t processing_mode       : 1;  /**< [ 36: 36](R/W1C/H) processing_mode error status. */
        uint64_t input_e               : 1;  /**< [ 37: 37](R/W1C/H) input_e error status. */
        uint64_t wtdi_start_sym_idx    : 1;  /**< [ 38: 38](R/W1C/H) wtdi_start_sym_idx error status. */
        uint64_t rhh_mode              : 1;  /**< [ 39: 39](R/W1C/H) rhh_mode error status. */
        uint64_t num_prb               : 1;  /**< [ 40: 40](R/W1C/H) num_prb error status. */
        uint64_t q_threshold           : 1;  /**< [ 41: 41](R/W1C/H) q_threshold error status. */
        uint64_t rinv_base_addr        : 1;  /**< [ 42: 42](R/W1C/H) rinv_base_addr error status. */
        uint64_t rinv_prb_offset       : 1;  /**< [ 43: 43](R/W1C/H) rinv_prb_offset error status. */
        uint64_t hrs0_base_addr        : 1;  /**< [ 44: 44](R/W1C/H) hrs0_base_addr error status. */
        uint64_t hrs1_base_addr        : 1;  /**< [ 45: 45](R/W1C/H) hrs1_base_addr error status. */
        uint64_t hrs_e                 : 1;  /**< [ 46: 46](R/W1C/H) hrs_e error status. */
        uint64_t wbf_e                 : 1;  /**< [ 47: 47](R/W1C/H) wbf_e error status. */
        uint64_t overflow_happened_in  : 1;  /**< [ 48: 48](R/W1C/H) This is set whenever the maximum range of +-1.99996948x2^127 is exceed when
                                                                 converting input data. This indicates a bad exponent configuration. */
        uint64_t neg_sqrt              : 1;  /**< [ 49: 49](R/W1C/H) This is set whenever a negative square root is encountered AND bad_cholesky_error_enable=1 */
        uint64_t overflow_out          : 1;  /**< [ 50: 50](R/W1C/H) This is set whenever the output conversion to IQFP/EXFP results in an out of
                                                                 range value. The particular output data will be set to the maximum(saturated)
                                                                 value. This error may indicate a bad exponent configuration. */
        uint64_t overflow_process      : 1;  /**< [ 51: 51](R/W1C/H) This is set whenever the maximum internal range of +-1.99996948x2^127 when
                                                                 performing a calculation. */
        uint64_t reserved_52_63        : 12;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_arxex_abx_error_source0_s cn; */
};
typedef union cavm_arxex_abx_error_source0 cavm_arxex_abx_error_source0_t;

static inline uint64_t CAVM_ARXEX_ABX_ERROR_SOURCE0(uint64_t a, uint64_t b) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_ARXEX_ABX_ERROR_SOURCE0(uint64_t a, uint64_t b)
{
    if (cavm_is_model(OCTEONTX_CNF20KA) && ((a<=3) && (b<=1)))
        return 0x87e041400030ll + 0x80000ll * ((a) & 0x3) + 0x10000ll * ((b) & 0x1);
    __cavm_csr_fatal("ARXEX_ABX_ERROR_SOURCE0", 2, a, b, 0, 0, 0, 0);
}

#define typedef_CAVM_ARXEX_ABX_ERROR_SOURCE0(a,b) cavm_arxex_abx_error_source0_t
#define bustype_CAVM_ARXEX_ABX_ERROR_SOURCE0(a,b) CSR_TYPE_RSL
#define basename_CAVM_ARXEX_ABX_ERROR_SOURCE0(a,b) "ARXEX_ABX_ERROR_SOURCE0"
#define device_bar_CAVM_ARXEX_ABX_ERROR_SOURCE0(a,b) 0x2 /* PF_BAR2 */
#define busnum_CAVM_ARXEX_ABX_ERROR_SOURCE0(a,b) (a)
#define arguments_CAVM_ARXEX_ABX_ERROR_SOURCE0(a,b) (a),(b),-1,-1

/**
 * Register (RSL) arxe#_ab#_slot#_jcfg#
 *
 * ARXE JOB Configuration Register
 * ARXE job configuration registers.
 */
union cavm_arxex_abx_slotx_jcfgx
{
    uint64_t u;
    struct cavm_arxex_abx_slotx_jcfgx_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t entry                 : 64; /**< [ 63:  0](R/W/H) Config bits. */
#else /* Word 0 - Little Endian */
        uint64_t entry                 : 64; /**< [ 63:  0](R/W/H) Config bits. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_arxex_abx_slotx_jcfgx_s cn; */
};
typedef union cavm_arxex_abx_slotx_jcfgx cavm_arxex_abx_slotx_jcfgx_t;

static inline uint64_t CAVM_ARXEX_ABX_SLOTX_JCFGX(uint64_t a, uint64_t b, uint64_t c, uint64_t d) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_ARXEX_ABX_SLOTX_JCFGX(uint64_t a, uint64_t b, uint64_t c, uint64_t d)
{
    if (cavm_is_model(OCTEONTX_CNF20KA) && ((a<=3) && (b<=1) && (c<=1) && (d<=161)))
        return 0x87e041402000ll + 0x80000ll * ((a) & 0x3) + 0x10000ll * ((b) & 0x1) + 0x2000ll * ((c) & 0x1) + 8ll * ((d) & 0xff);
    __cavm_csr_fatal("ARXEX_ABX_SLOTX_JCFGX", 4, a, b, c, d, 0, 0);
}

#define typedef_CAVM_ARXEX_ABX_SLOTX_JCFGX(a,b,c,d) cavm_arxex_abx_slotx_jcfgx_t
#define bustype_CAVM_ARXEX_ABX_SLOTX_JCFGX(a,b,c,d) CSR_TYPE_RSL
#define basename_CAVM_ARXEX_ABX_SLOTX_JCFGX(a,b,c,d) "ARXEX_ABX_SLOTX_JCFGX"
#define device_bar_CAVM_ARXEX_ABX_SLOTX_JCFGX(a,b,c,d) 0x2 /* PF_BAR2 */
#define busnum_CAVM_ARXEX_ABX_SLOTX_JCFGX(a,b,c,d) (a)
#define arguments_CAVM_ARXEX_ABX_SLOTX_JCFGX(a,b,c,d) (a),(b),(c),(d)

/**
 * Register (RSL) arxe#_ab#_status
 *
 * ARXE Status Register
 * ARXE Status Register.
 */
union cavm_arxex_abx_status
{
    uint64_t u;
    struct cavm_arxex_abx_status_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_5_63         : 59;
        uint64_t ready                 : 1;  /**< [  4:  4](RO/H) When set, indicates the ARXE is ready to receive next job. */
        uint64_t reserved_2_3          : 2;
        uint64_t status1               : 1;  /**< [  1:  1](RO/H) When set, slot 1 is busy processing a job. */
        uint64_t status0               : 1;  /**< [  0:  0](RO/H) When set, slot 0 is busy processing a job. */
#else /* Word 0 - Little Endian */
        uint64_t status0               : 1;  /**< [  0:  0](RO/H) When set, slot 0 is busy processing a job. */
        uint64_t status1               : 1;  /**< [  1:  1](RO/H) When set, slot 1 is busy processing a job. */
        uint64_t reserved_2_3          : 2;
        uint64_t ready                 : 1;  /**< [  4:  4](RO/H) When set, indicates the ARXE is ready to receive next job. */
        uint64_t reserved_5_63         : 59;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_arxex_abx_status_s cn; */
};
typedef union cavm_arxex_abx_status cavm_arxex_abx_status_t;

static inline uint64_t CAVM_ARXEX_ABX_STATUS(uint64_t a, uint64_t b) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_ARXEX_ABX_STATUS(uint64_t a, uint64_t b)
{
    if (cavm_is_model(OCTEONTX_CNF20KA) && ((a<=3) && (b<=1)))
        return 0x87e041400018ll + 0x80000ll * ((a) & 0x3) + 0x10000ll * ((b) & 0x1);
    __cavm_csr_fatal("ARXEX_ABX_STATUS", 2, a, b, 0, 0, 0, 0);
}

#define typedef_CAVM_ARXEX_ABX_STATUS(a,b) cavm_arxex_abx_status_t
#define bustype_CAVM_ARXEX_ABX_STATUS(a,b) CSR_TYPE_RSL
#define basename_CAVM_ARXEX_ABX_STATUS(a,b) "ARXEX_ABX_STATUS"
#define device_bar_CAVM_ARXEX_ABX_STATUS(a,b) 0x2 /* PF_BAR2 */
#define busnum_CAVM_ARXEX_ABX_STATUS(a,b) (a)
#define arguments_CAVM_ARXEX_ABX_STATUS(a,b) (a),(b),-1,-1

#endif /* __CAVM_CSRS_ARXE_H__ */
