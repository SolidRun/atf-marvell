#ifndef __CAVM_CSRS_LDEC_H__
#define __CAVM_CSRS_LDEC_H__
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
 * LDEC.
 *
 * This file is auto generated. Do not edit.
 *
 */

/**
 * Enumeration ldec_bar_e
 */
#define CAVM_LDEC_BAR_E_LDECX_PF_BAR2(a) (0x87e040c00000ll + 0x80000ll * (a))
#define CAVM_LDEC_BAR_E_LDECX_PF_BAR2_SIZE 0x40000ull

/**
 * Structure ldec_cb_cfg_s
 *
 * LDEC Code Block Configuration Structure
 * This structure specifies the code block configuration.
 */
union cavm_ldec_cb_cfg_s
{
    uint64_t u[3];
    struct cavm_ldec_cb_cfg_s_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t rm_e                  : 21; /**< [ 63: 43] Rate matching size, Er, as defined in section 5.4.2.1 of 38.212.

                                                                 Valid range [Qm: 0x168F00]. */
        uint64_t nfiller               : 14; /**< [ 42: 29] Number of filler bits, as defined in section 5.2.2 of 38.212. nfiller = K-K'. */
        uint64_t reserved_26_28        : 3;
        uint64_t cb_size               : 14; /**< [ 25: 12] Code block size including CB CRC, including filler bits.
                                                                 This corresponds to notation K in 38.212.
                                                                 K = 22*Z for BG1.
                                                                 K = 10*Z for BG2.
                                                                 The valid range is [0x28, 0x2100]. */
        uint64_t code_id               : 3;  /**< [ 11:  9] Reserved. */
        uint64_t num_cb                : 9;  /**< [  8:  0] Number of consecutive code blocks with this CB configuration Valid range [0x1, 0x98]. */
#else /* Word 0 - Little Endian */
        uint64_t num_cb                : 9;  /**< [  8:  0] Number of consecutive code blocks with this CB configuration Valid range [0x1, 0x98]. */
        uint64_t code_id               : 3;  /**< [ 11:  9] Reserved. */
        uint64_t cb_size               : 14; /**< [ 25: 12] Code block size including CB CRC, including filler bits.
                                                                 This corresponds to notation K in 38.212.
                                                                 K = 22*Z for BG1.
                                                                 K = 10*Z for BG2.
                                                                 The valid range is [0x28, 0x2100]. */
        uint64_t reserved_26_28        : 3;
        uint64_t nfiller               : 14; /**< [ 42: 29] Number of filler bits, as defined in section 5.2.2 of 38.212. nfiller = K-K'. */
        uint64_t rm_e                  : 21; /**< [ 63: 43] Rate matching size, Er, as defined in section 5.4.2.1 of 38.212.

                                                                 Valid range [Qm: 0x168F00]. */
#endif /* Word 0 - End */
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 1 - Big Endian */
        uint64_t reserved_112_127      : 16;
        uint64_t hcout_size1           : 16; /**< [111: 96] Length of second section of HARQ output starting from offset [HCOUT_OFFSET] in
                                                                 the pruned circular buffer.
                                                                 Must be an exact multiple of 16.
                                                                 The valid range is [ 0x0, [NCB_SIZE] ]. */
        uint64_t hcout_size0           : 16; /**< [ 95: 80] Length of first section of HARQ output starting from the beginning of the pruned circular buffer.
                                                                 Must be an exact multiple of 16.
                                                                 The valid range is [ 0x0, [NCB_SIZE] ]. */
        uint64_t hcout_offset          : 16; /**< [ 79: 64] Offset from the beginning of the pruned circular buffer to the
                                                                 starting point of [HCOUT_SIZE1], from which the second section of
                                                                 HARQ output is written out.
                                                                 Must be an exact multiple of 16.
                                                                 The valid range is [ 0x0, [NCB_SIZE] ]. */
#else /* Word 1 - Little Endian */
        uint64_t hcout_offset          : 16; /**< [ 79: 64] Offset from the beginning of the pruned circular buffer to the
                                                                 starting point of [HCOUT_SIZE1], from which the second section of
                                                                 HARQ output is written out.
                                                                 Must be an exact multiple of 16.
                                                                 The valid range is [ 0x0, [NCB_SIZE] ]. */
        uint64_t hcout_size0           : 16; /**< [ 95: 80] Length of first section of HARQ output starting from the beginning of the pruned circular buffer.
                                                                 Must be an exact multiple of 16.
                                                                 The valid range is [ 0x0, [NCB_SIZE] ]. */
        uint64_t hcout_size1           : 16; /**< [111: 96] Length of second section of HARQ output starting from offset [HCOUT_OFFSET] in
                                                                 the pruned circular buffer.
                                                                 Must be an exact multiple of 16.
                                                                 The valid range is [ 0x0, [NCB_SIZE] ]. */
        uint64_t reserved_112_127      : 16;
#endif /* Word 1 - End */
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 2 - Big Endian */
        uint64_t reserved_176_191      : 16;
        uint64_t hcin_size1            : 16; /**< [175:160] Length of the second section of HARQ input starting from offset [HCIN_OFFSET] in
                                                                 the pruned circular buffer.
                                                                 Must be an exact multiple of 16.
                                                                 The valid range is [ 0x0, [NCB_SIZE] ]. */
        uint64_t hcin_size0            : 16; /**< [159:144] Length of the first section of HARQ input starting from the beginning of the
                                                                 pruned circular buffer.
                                                                 Must be an exact multiple of 16.
                                                                 The valid range is [ 0x0, [NCB_SIZE] ]. */
        uint64_t hcin_offset           : 16; /**< [143:128] Offset from the beginning of the pruned circular buffer to the
                                                                 starting point of [HCIN_SIZE1], from which the second section of
                                                                 HARQ input is provided as input.
                                                                 Must be an exact multiple of 16.
                                                                 The valid range is [ 0x0, [NCB_SIZE] ]. */
#else /* Word 2 - Little Endian */
        uint64_t hcin_offset           : 16; /**< [143:128] Offset from the beginning of the pruned circular buffer to the
                                                                 starting point of [HCIN_SIZE1], from which the second section of
                                                                 HARQ input is provided as input.
                                                                 Must be an exact multiple of 16.
                                                                 The valid range is [ 0x0, [NCB_SIZE] ]. */
        uint64_t hcin_size0            : 16; /**< [159:144] Length of the first section of HARQ input starting from the beginning of the
                                                                 pruned circular buffer.
                                                                 Must be an exact multiple of 16.
                                                                 The valid range is [ 0x0, [NCB_SIZE] ]. */
        uint64_t hcin_size1            : 16; /**< [175:160] Length of the second section of HARQ input starting from offset [HCIN_OFFSET] in
                                                                 the pruned circular buffer.
                                                                 Must be an exact multiple of 16.
                                                                 The valid range is [ 0x0, [NCB_SIZE] ]. */
        uint64_t reserved_176_191      : 16;
#endif /* Word 2 - End */
    } s;
    /* struct cavm_ldec_cb_cfg_s_s cn; */
};

/**
 * Structure ldec_common_cfg_s
 *
 * LDEC Common Task Configuration Structure
 * This structure defines the first word of the job configuration for all
 * LDEC jobs.
 */
union cavm_ldec_common_cfg_s
{
    uint64_t u;
    struct cavm_ldec_common_cfg_s_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_28_63        : 36;
        uint64_t num_words_partial_tb_proc : 4;/**< [ 27: 24] Number of words for specification of parameters for partial TB processing, as
                                                                 defined in the LDEC_OPT_TASK_CFG_S structure.
                                                                 Must be 0x6. */
        uint64_t num_words_per_cb_cfg  : 8;  /**< [ 23: 16] Number of words for each CB configuration appended at the end of the task configuration.
                                                                 Must be 0x3. */
        uint64_t num_words_task_com_cfg : 8; /**< [ 15:  8] Number of mandatory task configuration words per task.
                                                                 Must be 0x0B, 0x0C, 0x10 or 0x11. */
        uint64_t reserved_6_7          : 2;
        uint64_t phy_mode              : 1;  /**< [  5:  5] The task type.
                                                                 0 = 3GPP 5G NR.
                                                                 1 = Reserved. */
        uint64_t num_bundled_tasks     : 5;  /**< [  4:  0] Number of tasks that are bundled in one job.  Range [0x1, 0x10]. */
#else /* Word 0 - Little Endian */
        uint64_t num_bundled_tasks     : 5;  /**< [  4:  0] Number of tasks that are bundled in one job.  Range [0x1, 0x10]. */
        uint64_t phy_mode              : 1;  /**< [  5:  5] The task type.
                                                                 0 = 3GPP 5G NR.
                                                                 1 = Reserved. */
        uint64_t reserved_6_7          : 2;
        uint64_t num_words_task_com_cfg : 8; /**< [ 15:  8] Number of mandatory task configuration words per task.
                                                                 Must be 0x0B, 0x0C, 0x10 or 0x11. */
        uint64_t num_words_per_cb_cfg  : 8;  /**< [ 23: 16] Number of words for each CB configuration appended at the end of the task configuration.
                                                                 Must be 0x3. */
        uint64_t num_words_partial_tb_proc : 4;/**< [ 27: 24] Number of words for specification of parameters for partial TB processing, as
                                                                 defined in the LDEC_OPT_TASK_CFG_S structure.
                                                                 Must be 0x6. */
        uint64_t reserved_28_63        : 36;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_ldec_common_cfg_s_s cn; */
};

/**
 * Structure ldec_layer_order_cfg_s
 *
 * LDEC Layer Order Configuration Structure
 * This structure specifies the layer order configuration for a task,
 * and is present following the LDEC_TASK_CFG_S when [LAYER_ORDER_SELECT]=1.
 */
union cavm_ldec_layer_order_cfg_s
{
    uint64_t u[5];
    struct cavm_ldec_layer_order_cfg_s_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_60_63        : 4;
        uint64_t layer_order_w0        : 60; /**< [ 59:  0] "Row numbers of layers 0 - 9.
                                                                 Bits 6*i:6*i+5 for row number of layer#i (0\<=i\<=9)." */
#else /* Word 0 - Little Endian */
        uint64_t layer_order_w0        : 60; /**< [ 59:  0] "Row numbers of layers 0 - 9.
                                                                 Bits 6*i:6*i+5 for row number of layer#i (0\<=i\<=9)." */
        uint64_t reserved_60_63        : 4;
#endif /* Word 0 - End */
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 1 - Big Endian */
        uint64_t reserved_124_127      : 4;
        uint64_t layer_order_w1        : 60; /**< [123: 64] "Row numbers of layers 10 - 19.
                                                                 Bits 6*i:6*i+5 for row number of layer #10+i (0\<=i\<=9)." */
#else /* Word 1 - Little Endian */
        uint64_t layer_order_w1        : 60; /**< [123: 64] "Row numbers of layers 10 - 19.
                                                                 Bits 6*i:6*i+5 for row number of layer #10+i (0\<=i\<=9)." */
        uint64_t reserved_124_127      : 4;
#endif /* Word 1 - End */
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 2 - Big Endian */
        uint64_t reserved_188_191      : 4;
        uint64_t layer_order_w2        : 60; /**< [187:128] "Row numbers of layers 20 - 29.
                                                                 Bits 6*i:6*i+5 for row number of layer #20+i (0\<=i\<=9)." */
#else /* Word 2 - Little Endian */
        uint64_t layer_order_w2        : 60; /**< [187:128] "Row numbers of layers 20 - 29.
                                                                 Bits 6*i:6*i+5 for row number of layer #20+i (0\<=i\<=9)." */
        uint64_t reserved_188_191      : 4;
#endif /* Word 2 - End */
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 3 - Big Endian */
        uint64_t reserved_252_255      : 4;
        uint64_t layer_order_w3        : 60; /**< [251:192] "Row numbers of layers 30 - 39.
                                                                 Bits 6*i:6*i+5 for row number of layer #30+i (0\<=i\<=9)." */
#else /* Word 3 - Little Endian */
        uint64_t layer_order_w3        : 60; /**< [251:192] "Row numbers of layers 30 - 39.
                                                                 Bits 6*i:6*i+5 for row number of layer #30+i (0\<=i\<=9)." */
        uint64_t reserved_252_255      : 4;
#endif /* Word 3 - End */
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 4 - Big Endian */
        uint64_t reserved_316_319      : 4;
        uint64_t layer_order_w4        : 60; /**< [315:256] "Row numbers of layers 40 - 49.
                                                                 Bits 6*i:6*i+5 for row number of layer #40+i (0\<=i\<=9).
                                                                 For BG1, only row numbers up to 46 are relevant.
                                                                 For BG2, only row numbers up to 42 are relevant." */
#else /* Word 4 - Little Endian */
        uint64_t layer_order_w4        : 60; /**< [315:256] "Row numbers of layers 40 - 49.
                                                                 Bits 6*i:6*i+5 for row number of layer #40+i (0\<=i\<=9).
                                                                 For BG1, only row numbers up to 46 are relevant.
                                                                 For BG2, only row numbers up to 42 are relevant." */
        uint64_t reserved_316_319      : 4;
#endif /* Word 4 - End */
    } s;
    /* struct cavm_ldec_layer_order_cfg_s_s cn; */
};

/**
 * Structure ldec_opt_task_cfg_s
 *
 * LDEC Optional Task Configuration Structure
 * This structure specifies the optional task configuration for a
 * task for partial TB processing.  It is present following the
 * LDEC_TASK_CFG_S, LDEC_TURBO_PIC_CFG_S and LDEC_LAYER_ORDER_CFG_S
 * when [BYPASS_PARTIAL_TB_PROC]=0.
 */
union cavm_ldec_opt_task_cfg_s
{
    uint64_t u[6];
    struct cavm_ldec_opt_task_cfg_s_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t hd_prefix_word        : 64; /**< [ 63:  0] 64-bit prefix word to be merged with the first part of decoded bits of the
                                                                 first CB if [HD_PREFIX_BIT_INDEX] \> 0x0 */
#else /* Word 0 - Little Endian */
        uint64_t hd_prefix_word        : 64; /**< [ 63:  0] 64-bit prefix word to be merged with the first part of decoded bits of the
                                                                 first CB if [HD_PREFIX_BIT_INDEX] \> 0x0 */
#endif /* Word 0 - End */
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 1 - Big Endian */
        uint64_t hd_suffix_word        : 64; /**< [127: 64] 64-bit suffix word to be merged with the end of decoded bits of the last CB in the task. */
#else /* Word 1 - Little Endian */
        uint64_t hd_suffix_word        : 64; /**< [127: 64] 64-bit suffix word to be merged with the end of decoded bits of the last CB in the task. */
#endif /* Word 1 - End */
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 2 - Big Endian */
        uint64_t reenc_prefix_word     : 64; /**< [191:128] Prefix word to be stitched to the beginning of the re-encoded output of the
                                                                 first CB if [REENC_PREFIX_BIT_INDEX] \> 0x0 */
#else /* Word 2 - Little Endian */
        uint64_t reenc_prefix_word     : 64; /**< [191:128] Prefix word to be stitched to the beginning of the re-encoded output of the
                                                                 first CB if [REENC_PREFIX_BIT_INDEX] \> 0x0 */
#endif /* Word 2 - End */
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 3 - Big Endian */
        uint64_t so_prefix_word0       : 64; /**< [255:192] 64 LSBs of prefix word to be stitched to the beginning of the re-encoded soft
                                                                 output of the first CB if [SO_PREFIX_LLR_INDEX] \> 0x0 */
#else /* Word 3 - Little Endian */
        uint64_t so_prefix_word0       : 64; /**< [255:192] 64 LSBs of prefix word to be stitched to the beginning of the re-encoded soft
                                                                 output of the first CB if [SO_PREFIX_LLR_INDEX] \> 0x0 */
#endif /* Word 3 - End */
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 4 - Big Endian */
        uint64_t so_prefix_word1       : 64; /**< [319:256] 64 MSBs of prefix word to be stitched to the beginning of the re-encoded soft
                                                                 output of the first CB if [SO_PREFIX_LLR_INDEX] \> 0x0 */
#else /* Word 4 - Little Endian */
        uint64_t so_prefix_word1       : 64; /**< [319:256] 64 MSBs of prefix word to be stitched to the beginning of the re-encoded soft
                                                                 output of the first CB if [SO_PREFIX_LLR_INDEX] \> 0x0 */
#endif /* Word 4 - End */
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 5 - Big Endian */
        uint64_t tb_crc_contrib_jump   : 32; /**< [383:352] Maximum 32 bits to represent the jump of TB CRC state from the beginning of the first CB
                                                                 in the task until the end of the TB.
                                                                 Valid range [0x0, TB size]. */
        uint64_t reserved_340_351      : 12;
        uint64_t so_prefix_llr_index   : 4;  /**< [339:336] Applicable only to CB processing mode.
                                                                 LLR index in the prefix word from which the soft output of the current CB task output is written.
                                                                 Valid range [0x0, 0xF].  A value of 0x0 indicates that prefix merge is bypassed. */
        uint64_t reserved_334_335      : 2;
        uint64_t reenc_prefix_bit_index : 6; /**< [333:328] Applicable only to CB processing mode.
                                                                 Bit index in the prefix word from which the re-encoded output of the current CB
                                                                 task output is written.
                                                                 Valid range [0x0, 0x3F].  A value of 0x0 indicates that prefix merge is bypassed. */
        uint64_t reserved_326_327      : 2;
        uint64_t hd_prefix_bit_index   : 6;  /**< [325:320] Bit position of first decoded bit of CBG in 64-bit prefix word provided.
                                                                 Valid range [0x0, 0x3F].  A value of 0x0 indicates that prefix merge is bypassed. */
#else /* Word 5 - Little Endian */
        uint64_t hd_prefix_bit_index   : 6;  /**< [325:320] Bit position of first decoded bit of CBG in 64-bit prefix word provided.
                                                                 Valid range [0x0, 0x3F].  A value of 0x0 indicates that prefix merge is bypassed. */
        uint64_t reserved_326_327      : 2;
        uint64_t reenc_prefix_bit_index : 6; /**< [333:328] Applicable only to CB processing mode.
                                                                 Bit index in the prefix word from which the re-encoded output of the current CB
                                                                 task output is written.
                                                                 Valid range [0x0, 0x3F].  A value of 0x0 indicates that prefix merge is bypassed. */
        uint64_t reserved_334_335      : 2;
        uint64_t so_prefix_llr_index   : 4;  /**< [339:336] Applicable only to CB processing mode.
                                                                 LLR index in the prefix word from which the soft output of the current CB task output is written.
                                                                 Valid range [0x0, 0xF].  A value of 0x0 indicates that prefix merge is bypassed. */
        uint64_t reserved_340_351      : 12;
        uint64_t tb_crc_contrib_jump   : 32; /**< [383:352] Maximum 32 bits to represent the jump of TB CRC state from the beginning of the first CB
                                                                 in the task until the end of the TB.
                                                                 Valid range [0x0, TB size]. */
#endif /* Word 5 - End */
    } s;
    /* struct cavm_ldec_opt_task_cfg_s_s cn; */
};

/**
 * Structure ldec_task_cfg_s
 *
 * LDEC Mandatory Task Configuration Structure
 * This structure specifies the configuration for a task.
 */
union cavm_ldec_task_cfg_s
{
    uint64_t u[11];
    struct cavm_ldec_task_cfg_s_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t negstop_th            : 16; /**< [ 63: 48] Negative stopping threshold. */
        uint64_t stop_it               : 2;  /**< [ 47: 46] Activates the early iteration stopping mechanism upon parity check pass.
                                                                 0 = No stop.
                                                                 1 = Syndrome check based stop. */
        uint64_t so_it                 : 7;  /**< [ 45: 39] Decoder iteration after which soft output shall be released.
                                                                 If decoder stops before, the soft output of the last iteration will be released.
                                                                 Valid range [0x1, 0x7F]. */
        uint64_t max_it                : 7;  /**< [ 38: 32] Maximum number of LDPC decoder iterations. Valid range [0x1, 0x7F]. */
        uint64_t tb_tail               : 1;  /**< [ 31: 31] 0 = Task does not contain the last CB of TB.
                                                                 1 = Task contains the last CB of TB. */
        uint64_t llr_sign_format       : 1;  /**< [ 30: 30] LLR sign format.
                                                                 0 = Zero sign bit indicates positive LLR.
                                                                 1 = One sign bit indicates positive LLR. */
        uint64_t mod_order             : 4;  /**< [ 29: 26] 5G Modulation order. Valid range:  {0x1, 0x2, 0x4, 0x6, 0x8, 0xA}. */
        uint64_t basegraph             : 2;  /**< [ 25: 24] 5G NR LDPC base graph.
                                                                 0 = BG1.
                                                                 1 = BG2. */
        uint64_t layer_order_select    : 1;  /**< [ 23: 23] 0 = Default layer order stored in ROM will be used.
                                                                 1 = User configured layer order in the task configuration.
                                                                 When [LAYER_ORDER_SELECT]=1 (user specified layer order is
                                                                 used), a LDEC_LAYER_ORDER_CFG_S configuration structure follows
                                                                 the LDEC_TASK_CFG_S structure. */
        uint64_t bypass_partial_tb_proc : 1; /**< [ 22: 22] 0 = Partial TB processing is enabled, with the
                                                                 LDEC_OPT_TASK_CFG_S configuration structure following the
                                                                 LDEC_TASK_CFG_S, LDEC_TURBO_PIC_CFG_S and LDEC_LAYER_ORDER_CFG_S
                                                                 structures.
                                                                 1 = Full TB processing.  The LDEC_OPT_TASK_CFG_S structure is
                                                                 not present following the mandatory task configuration structure. */
        uint64_t num_cb_cfg            : 6;  /**< [ 21: 16] Number of CB configurations appended to this task.
                                                                 Each configuration specifies a string of consecutive CBs sharing the same configuration.
                                                                 Valid range [0x1,0x8] */
        uint64_t task_id               : 16; /**< [ 15:  0] ID associated with this decoding task.
                                                                 Up to 16 tasks can be bundled within a job.
                                                                 SW shall make sure [TASK_ID] values assigned to different tasks bundled within a
                                                                 job do not collide.
                                                                 Valid range [0x0, 0xFFFF]. */
#else /* Word 0 - Little Endian */
        uint64_t task_id               : 16; /**< [ 15:  0] ID associated with this decoding task.
                                                                 Up to 16 tasks can be bundled within a job.
                                                                 SW shall make sure [TASK_ID] values assigned to different tasks bundled within a
                                                                 job do not collide.
                                                                 Valid range [0x0, 0xFFFF]. */
        uint64_t num_cb_cfg            : 6;  /**< [ 21: 16] Number of CB configurations appended to this task.
                                                                 Each configuration specifies a string of consecutive CBs sharing the same configuration.
                                                                 Valid range [0x1,0x8] */
        uint64_t bypass_partial_tb_proc : 1; /**< [ 22: 22] 0 = Partial TB processing is enabled, with the
                                                                 LDEC_OPT_TASK_CFG_S configuration structure following the
                                                                 LDEC_TASK_CFG_S, LDEC_TURBO_PIC_CFG_S and LDEC_LAYER_ORDER_CFG_S
                                                                 structures.
                                                                 1 = Full TB processing.  The LDEC_OPT_TASK_CFG_S structure is
                                                                 not present following the mandatory task configuration structure. */
        uint64_t layer_order_select    : 1;  /**< [ 23: 23] 0 = Default layer order stored in ROM will be used.
                                                                 1 = User configured layer order in the task configuration.
                                                                 When [LAYER_ORDER_SELECT]=1 (user specified layer order is
                                                                 used), a LDEC_LAYER_ORDER_CFG_S configuration structure follows
                                                                 the LDEC_TASK_CFG_S structure. */
        uint64_t basegraph             : 2;  /**< [ 25: 24] 5G NR LDPC base graph.
                                                                 0 = BG1.
                                                                 1 = BG2. */
        uint64_t mod_order             : 4;  /**< [ 29: 26] 5G Modulation order. Valid range:  {0x1, 0x2, 0x4, 0x6, 0x8, 0xA}. */
        uint64_t llr_sign_format       : 1;  /**< [ 30: 30] LLR sign format.
                                                                 0 = Zero sign bit indicates positive LLR.
                                                                 1 = One sign bit indicates positive LLR. */
        uint64_t tb_tail               : 1;  /**< [ 31: 31] 0 = Task does not contain the last CB of TB.
                                                                 1 = Task contains the last CB of TB. */
        uint64_t max_it                : 7;  /**< [ 38: 32] Maximum number of LDPC decoder iterations. Valid range [0x1, 0x7F]. */
        uint64_t so_it                 : 7;  /**< [ 45: 39] Decoder iteration after which soft output shall be released.
                                                                 If decoder stops before, the soft output of the last iteration will be released.
                                                                 Valid range [0x1, 0x7F]. */
        uint64_t stop_it               : 2;  /**< [ 47: 46] Activates the early iteration stopping mechanism upon parity check pass.
                                                                 0 = No stop.
                                                                 1 = Syndrome check based stop. */
        uint64_t negstop_th            : 16; /**< [ 63: 48] Negative stopping threshold. */
#endif /* Word 0 - End */
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 1 - Big Endian */
        uint64_t synd_postproc         : 1;  /**< [127:127] 1: postprocessing is performed to compute precoder syndrome
                                                                 on final LLR values available after regular decoding with
                                                                 syndok=0. Done only when syndok == 0.
                                                                 0: postprocessing disabled. Syndrome value at the end of
                                                                 regular decoding is reported in monitoring information. */
        uint64_t synd_precoder         : 1;  /**< [126:126] 1: syndrome computation and early stop criterion are
                                                                 based on precoder rows only (first 4 rows of H matrix).
                                                                 0: full matrix with L layers.
                                                                 L is number of layers used for decoding based on
                                                                 coding rate. L \>= 4 */
        uint64_t reenc_qm_with_synd_n_crc : 1;/**< [125:125] 1: Add 1-bit indicator to each set of [MOD_ORDER] bits re-encoded
                                                                 output where a value of 1 indicates a CRC error or syndrome failure
                                                                 and a value of 0 means both pass.  If syndrome post processing is
                                                                 enabled, final precoder syndrome is used. Otherwise, syndrome
                                                                 available at the end of regular decoding is used.
                                                                 0: bypass.

                                                                 Not possible to have this enabled when reencoding is disabled
                                                                 with [GENERATE_REENC] = 0.

                                                                 Not possible to have this enabled when [REENC_SYMB_BYTE_ALIGNED] = 1.

                                                                 Cannot be enabled simultaneously when [REENC_QM_WITH_CRC] = 1.

                                                                 When the task has more than one CB, the CB CRC is used.
                                                                 When the task has only one CB, the TB CRC is used, if available.

                                                                 When CB_CRC_SELECT = 0, a dummy CB CRC result 0 is used. */
        uint64_t bypass_monitor_words  : 1;  /**< [124:124] 0: All 13 monitoring words are appended to HD output.
                                                                 1: Only first 2 monitoring words are appended to HD output.
                                                                 Following TB CRC contribution words are sent or not depending on the flag [BYPASS_TB_CRC_CONTRIB]. */
        uint64_t tb_tx_bit_size        : 24; /**< [123:100] Total number of input LLR values across all CBS to be used by the task.
                                                                 These are LLRs excluding the ones dropped by the pre-processor.

                                                                 Valid range [0x1:0x168F00] is fully verified. Larger values have no known
                                                                 limitations but are not fully verified. */
        uint64_t hcout_llr_comp_mode   : 3;  /**< [ 99: 97] HARQ LLR output compression scheme.
                                                                 0x0: Bypass (do nothing).
                                                                 0x1: Saturate to 6 bits (8 to 6 bits).
                                                                 0x2: Right shift 1 bit with rounding and saturate to 6 bits (8 to 6 bits).
                                                                 0x3: Right shift 2 bits with rounding (8 to 6 bits).
                                                                 0x4: Round(log2)quantization (8 to 4 bits).
                                                                 Valid range [0x0, 0x4]. */
        uint64_t hcout_en              : 1;  /**< [ 96: 96] 1: HCout vector is released after HARQ combining.
                                                                 0: No HCout vector is released. HARQ combining can still be enabled.
                                                                 This feature can optionally be used when decoding the last transmission. */
        uint64_t hcin_llr_decomp_mode  : 3;  /**< [ 95: 93] HARQ LLR input decompression scheme.
                                                                 0x0: bypass (do nothing).
                                                                 0x1: Sign extension (6 to 8 bits).
                                                                 0x2: Left shift 1 bit and sign extend(6 to 8 bits).
                                                                 0x3: Left shift 2 bits(6 to 8 bits).
                                                                 0x4: Reverse the operation of round(log2)quantization (4 bits to 8 bits).
                                                                 Valid range [0x0, 0x4]. */
        uint64_t hcin_en               : 1;  /**< [ 92: 92] 0: Only input LLRs are expected to be received. HARQ is either disabled or this
                                                                 is the first transmission.
                                                                 1: HARQ input is enabled. The core expects to receive HCin stream once all input LLRs are received. */
        uint64_t reenc_data_order      : 3;  /**< [ 91: 89] Bit 25:
                                                                   0: DATA_BIT_MSB_FIRST.
                                                                   1: DATA_BIT_LSB_FIRST.
                                                                   See Baseband PHY (BPHY): Data Packing section for details.
                                                                 Bits 26:27:
                                                                   0x0: DATA_BYTE_ORDER_MODE_0.
                                                                   0x1: DATA_BYTE_ORDER_MODE_1.
                                                                   0x2: DATA_BYTE_ORDER_MODE_2.
                                                                   See Baseband PHY (BPHY): Data Packing section for details.
                                                                   For normal usage, it shall be set to DATA_BYTE_ORDER_MODE_0. */
        uint64_t reenc_qm_with_crc     : 1;  /**< [ 88: 88] 0 = No CRC addition.
                                                                 1 = Add 1-bit CB CRC result to each set of [MOD_ORDER] bits output.

                                                                 This feature can be enabled only when [REENC_SYMB_SYMB_ALIGNED] = 0x0. */
        uint64_t reenc_symb_byte_aligned : 2;/**< [ 87: 86] Alignment mode.

                                                                 _ 0x0 = No alignment. Data bits are written out back to back.

                                                                 _ 0x1 = Byte alignment. Every [MOD_ORDER] bits are mapped to one byte
                                                                 in little endian format, with zero padding in the upper bits in each
                                                                 byte. Can only be used when [MOD_ORDER] \< 0xA.

                                                                 _ 0x2 = Two-byte interleaved mode. Every 10 bits are mapped to a
                                                                 two-byte symbol, with even bits mapped to the first byte, and odd bits
                                                                 mapped to the second byte, with zero padding in the upper three bits of each
                                                                 byte. Can only be used when [MOD_ORDER] = 0xA.

                                                                 _ 0x3 = Two-byte consecutive mode. Every 10 bits are mapped to a
                                                                 two-byte symbol, with the first five bits mapped to the first byte, and the second five bits
                                                                 mapped to the second byte, with zero padding in the upper three bits of each
                                                                 byte. Can only be used when [MOD_ORDER] = 0xA. */
        uint64_t hd_data_order         : 3;  /**< [ 85: 83] Bit 19:
                                                                   0: DATA_BIT_MSB_FIRST.
                                                                   1: DATA_BIT_LSB_FIRST.
                                                                   See Baseband PHY (BPHY): Data Packing section for details.
                                                                   For normal usage, it shall be set to DATA_BIT_MSB_FIRST.
                                                                 Bits 21:20:
                                                                   0x0: DATA_BYTE_ORDER_MODE_0.
                                                                   0x1: DATA_BYTE_ORDER_MODE_1.
                                                                   0x2: DATA_BYTE_ORDER_MODE_2.
                                                                   See Baseband PHY (BPHY): Data Packing section for details.
                                                                   For normal usage, it shall be set to DATA_BYTE_ORDER_MODE_0. */
        uint64_t bypass_reenc_rm       : 1;  /**< [ 82: 82] 0: Rate matching is performed on re-encoded hard bits. The core generates Er bits for r-th CB.
                                                                 1: Rate matching is bypassed. */
        uint64_t generate_reenc        : 1;  /**< [ 81: 81] 1: Re-encoding is enabled.
                                                                 0: Re-encoding is bypassed. */
        uint64_t bypass_so_rm          : 1;  /**< [ 80: 80] Bypass the rate matching on soft output. */
        uint64_t generate_so           : 1;  /**< [ 79: 79] 0: Soft bit output generation is bypassed. Only hard decision outputs are generated and available.
                                                                 1: Soft bit output generation is enabled.
                                                                 If soft output generation is enabled, it will generate "num_llr" soft outputs. */
        uint64_t bypass_bit_intlv      : 1;  /**< [ 78: 78] 0 = Perform bit-level interleaving.
                                                                 1 = Bypass bit-level interleaving (applies on both Rx and soft-out streams). */
        uint64_t bypass_decoder        : 1;  /**< [ 77: 77] 0: LDPC decoding is enabled.
                                                                 1: LDPC decoding of the combined vector is bypassed.
                                                                 This mode can optionally be used for performing only HARQ combining,
                                                                 where the decoder only performs HARQ combining and generates HARQ output. */
        uint64_t bypass_tb_crc_contrib : 1;  /**< [ 76: 76] Bypass TB CRC contribution calculation from each CB.
                                                                 When bypassed, no TB CRC contribution words are appended to hard decision output. */
        uint64_t bypass_tb_crc         : 1;  /**< [ 75: 75] Bypass TB CRC calculation.
                                                                 When not bypassed, TB CRC is calculated and stripped off from hard output. */
        uint64_t tb_crc_select         : 2;  /**< [ 74: 73] CRC polynomial used for the calculation of TB CRC and CB level TB CRC contribution.
                                                                 0x0 : Reserved.
                                                                 0x1 : CRC-16.
                                                                 0x2 : CRC-24A.
                                                                 0x3 : Reserved. */
        uint64_t cb_crc_select         : 1;  /**< [ 72: 72] CB CRC polynomial select.
                                                                 0 = bypass.
                                                                 1 = gCRC24B. */
        uint64_t negstop_en            : 1;  /**< [ 71: 71] Activates the negative stopping mechanism, by which uncorrectable frames are discarded early. */
        uint64_t negstop_it            : 7;  /**< [ 70: 64] Sets the level at which iteration the negative stopping condition is evaluated.
                                                                 Valid range [0x1, 0x7F]. */
#else /* Word 1 - Little Endian */
        uint64_t negstop_it            : 7;  /**< [ 70: 64] Sets the level at which iteration the negative stopping condition is evaluated.
                                                                 Valid range [0x1, 0x7F]. */
        uint64_t negstop_en            : 1;  /**< [ 71: 71] Activates the negative stopping mechanism, by which uncorrectable frames are discarded early. */
        uint64_t cb_crc_select         : 1;  /**< [ 72: 72] CB CRC polynomial select.
                                                                 0 = bypass.
                                                                 1 = gCRC24B. */
        uint64_t tb_crc_select         : 2;  /**< [ 74: 73] CRC polynomial used for the calculation of TB CRC and CB level TB CRC contribution.
                                                                 0x0 : Reserved.
                                                                 0x1 : CRC-16.
                                                                 0x2 : CRC-24A.
                                                                 0x3 : Reserved. */
        uint64_t bypass_tb_crc         : 1;  /**< [ 75: 75] Bypass TB CRC calculation.
                                                                 When not bypassed, TB CRC is calculated and stripped off from hard output. */
        uint64_t bypass_tb_crc_contrib : 1;  /**< [ 76: 76] Bypass TB CRC contribution calculation from each CB.
                                                                 When bypassed, no TB CRC contribution words are appended to hard decision output. */
        uint64_t bypass_decoder        : 1;  /**< [ 77: 77] 0: LDPC decoding is enabled.
                                                                 1: LDPC decoding of the combined vector is bypassed.
                                                                 This mode can optionally be used for performing only HARQ combining,
                                                                 where the decoder only performs HARQ combining and generates HARQ output. */
        uint64_t bypass_bit_intlv      : 1;  /**< [ 78: 78] 0 = Perform bit-level interleaving.
                                                                 1 = Bypass bit-level interleaving (applies on both Rx and soft-out streams). */
        uint64_t generate_so           : 1;  /**< [ 79: 79] 0: Soft bit output generation is bypassed. Only hard decision outputs are generated and available.
                                                                 1: Soft bit output generation is enabled.
                                                                 If soft output generation is enabled, it will generate "num_llr" soft outputs. */
        uint64_t bypass_so_rm          : 1;  /**< [ 80: 80] Bypass the rate matching on soft output. */
        uint64_t generate_reenc        : 1;  /**< [ 81: 81] 1: Re-encoding is enabled.
                                                                 0: Re-encoding is bypassed. */
        uint64_t bypass_reenc_rm       : 1;  /**< [ 82: 82] 0: Rate matching is performed on re-encoded hard bits. The core generates Er bits for r-th CB.
                                                                 1: Rate matching is bypassed. */
        uint64_t hd_data_order         : 3;  /**< [ 85: 83] Bit 19:
                                                                   0: DATA_BIT_MSB_FIRST.
                                                                   1: DATA_BIT_LSB_FIRST.
                                                                   See Baseband PHY (BPHY): Data Packing section for details.
                                                                   For normal usage, it shall be set to DATA_BIT_MSB_FIRST.
                                                                 Bits 21:20:
                                                                   0x0: DATA_BYTE_ORDER_MODE_0.
                                                                   0x1: DATA_BYTE_ORDER_MODE_1.
                                                                   0x2: DATA_BYTE_ORDER_MODE_2.
                                                                   See Baseband PHY (BPHY): Data Packing section for details.
                                                                   For normal usage, it shall be set to DATA_BYTE_ORDER_MODE_0. */
        uint64_t reenc_symb_byte_aligned : 2;/**< [ 87: 86] Alignment mode.

                                                                 _ 0x0 = No alignment. Data bits are written out back to back.

                                                                 _ 0x1 = Byte alignment. Every [MOD_ORDER] bits are mapped to one byte
                                                                 in little endian format, with zero padding in the upper bits in each
                                                                 byte. Can only be used when [MOD_ORDER] \< 0xA.

                                                                 _ 0x2 = Two-byte interleaved mode. Every 10 bits are mapped to a
                                                                 two-byte symbol, with even bits mapped to the first byte, and odd bits
                                                                 mapped to the second byte, with zero padding in the upper three bits of each
                                                                 byte. Can only be used when [MOD_ORDER] = 0xA.

                                                                 _ 0x3 = Two-byte consecutive mode. Every 10 bits are mapped to a
                                                                 two-byte symbol, with the first five bits mapped to the first byte, and the second five bits
                                                                 mapped to the second byte, with zero padding in the upper three bits of each
                                                                 byte. Can only be used when [MOD_ORDER] = 0xA. */
        uint64_t reenc_qm_with_crc     : 1;  /**< [ 88: 88] 0 = No CRC addition.
                                                                 1 = Add 1-bit CB CRC result to each set of [MOD_ORDER] bits output.

                                                                 This feature can be enabled only when [REENC_SYMB_SYMB_ALIGNED] = 0x0. */
        uint64_t reenc_data_order      : 3;  /**< [ 91: 89] Bit 25:
                                                                   0: DATA_BIT_MSB_FIRST.
                                                                   1: DATA_BIT_LSB_FIRST.
                                                                   See Baseband PHY (BPHY): Data Packing section for details.
                                                                 Bits 26:27:
                                                                   0x0: DATA_BYTE_ORDER_MODE_0.
                                                                   0x1: DATA_BYTE_ORDER_MODE_1.
                                                                   0x2: DATA_BYTE_ORDER_MODE_2.
                                                                   See Baseband PHY (BPHY): Data Packing section for details.
                                                                   For normal usage, it shall be set to DATA_BYTE_ORDER_MODE_0. */
        uint64_t hcin_en               : 1;  /**< [ 92: 92] 0: Only input LLRs are expected to be received. HARQ is either disabled or this
                                                                 is the first transmission.
                                                                 1: HARQ input is enabled. The core expects to receive HCin stream once all input LLRs are received. */
        uint64_t hcin_llr_decomp_mode  : 3;  /**< [ 95: 93] HARQ LLR input decompression scheme.
                                                                 0x0: bypass (do nothing).
                                                                 0x1: Sign extension (6 to 8 bits).
                                                                 0x2: Left shift 1 bit and sign extend(6 to 8 bits).
                                                                 0x3: Left shift 2 bits(6 to 8 bits).
                                                                 0x4: Reverse the operation of round(log2)quantization (4 bits to 8 bits).
                                                                 Valid range [0x0, 0x4]. */
        uint64_t hcout_en              : 1;  /**< [ 96: 96] 1: HCout vector is released after HARQ combining.
                                                                 0: No HCout vector is released. HARQ combining can still be enabled.
                                                                 This feature can optionally be used when decoding the last transmission. */
        uint64_t hcout_llr_comp_mode   : 3;  /**< [ 99: 97] HARQ LLR output compression scheme.
                                                                 0x0: Bypass (do nothing).
                                                                 0x1: Saturate to 6 bits (8 to 6 bits).
                                                                 0x2: Right shift 1 bit with rounding and saturate to 6 bits (8 to 6 bits).
                                                                 0x3: Right shift 2 bits with rounding (8 to 6 bits).
                                                                 0x4: Round(log2)quantization (8 to 4 bits).
                                                                 Valid range [0x0, 0x4]. */
        uint64_t tb_tx_bit_size        : 24; /**< [123:100] Total number of input LLR values across all CBS to be used by the task.
                                                                 These are LLRs excluding the ones dropped by the pre-processor.

                                                                 Valid range [0x1:0x168F00] is fully verified. Larger values have no known
                                                                 limitations but are not fully verified. */
        uint64_t bypass_monitor_words  : 1;  /**< [124:124] 0: All 13 monitoring words are appended to HD output.
                                                                 1: Only first 2 monitoring words are appended to HD output.
                                                                 Following TB CRC contribution words are sent or not depending on the flag [BYPASS_TB_CRC_CONTRIB]. */
        uint64_t reenc_qm_with_synd_n_crc : 1;/**< [125:125] 1: Add 1-bit indicator to each set of [MOD_ORDER] bits re-encoded
                                                                 output where a value of 1 indicates a CRC error or syndrome failure
                                                                 and a value of 0 means both pass.  If syndrome post processing is
                                                                 enabled, final precoder syndrome is used. Otherwise, syndrome
                                                                 available at the end of regular decoding is used.
                                                                 0: bypass.

                                                                 Not possible to have this enabled when reencoding is disabled
                                                                 with [GENERATE_REENC] = 0.

                                                                 Not possible to have this enabled when [REENC_SYMB_BYTE_ALIGNED] = 1.

                                                                 Cannot be enabled simultaneously when [REENC_QM_WITH_CRC] = 1.

                                                                 When the task has more than one CB, the CB CRC is used.
                                                                 When the task has only one CB, the TB CRC is used, if available.

                                                                 When CB_CRC_SELECT = 0, a dummy CB CRC result 0 is used. */
        uint64_t synd_precoder         : 1;  /**< [126:126] 1: syndrome computation and early stop criterion are
                                                                 based on precoder rows only (first 4 rows of H matrix).
                                                                 0: full matrix with L layers.
                                                                 L is number of layers used for decoding based on
                                                                 coding rate. L \>= 4 */
        uint64_t synd_postproc         : 1;  /**< [127:127] 1: postprocessing is performed to compute precoder syndrome
                                                                 on final LLR values available after regular decoding with
                                                                 syndok=0. Done only when syndok == 0.
                                                                 0: postprocessing disabled. Syndrome value at the end of
                                                                 regular decoding is reported in monitoring information. */
#endif /* Word 1 - End */
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 2 - Big Endian */
        uint64_t reserved_189_191      : 3;
        uint64_t so_bit_sign_format    : 1;  /**< [188:188] 0 = "0p" format. 0 bit corresponds to positive LLR
                                                                 1 = "1p" format. 1 bit corresponds to positive LLR */
        uint64_t reenc_128b_align_en   : 1;  /**< [187:187] Flag to enable reencoded output of each code block aligned
                                                                 to 128-bit boundary.
                                                                 This mode can be used with either [REENC_OUT_TYPE]. */
        uint64_t reenc_out_type        : 1;  /**< [186:186] 0 = reencoded output of decoded data.
                                                                 No Extra header word added for each CB.
                                                                 1 = reenc stream source depends on CB CRC :
                                                                   -If CB CRC pass, from actual reencoding.
                                                                   -If CB CRC fails, from hard decision of rate matched
                                                                   soft output available at the end of [SO_IT] iterations.
                                                                 Extra header word added for each CB.
                                                                 When [REENC_OUT_TYPE]=1, rate matching of soft bits sent on
                                                                 the reenc port is based on [BYPASS_REENC_RM] field. When both
                                                                 soft and reenc ports are enabled, it is required to have
                                                                 [BYPASS_REENC_RM] == [BYPASS_SO_RM].
                                                                 When [REENC_OUT_TYPE]=1, a LDEC_TURBO_PIC_CFG_S configuration
                                                                 structure follows the LDEC_TASK_CFG_S and
                                                                 LDEC_LAYER_ORDER_CFG_S structures. */
        uint64_t cnu_algo_select       : 1;  /**< [185:185] Decoder algorithm used by the core.
                                                                 0 = FSPA.
                                                                 1 = Offset min-sum. */
        uint64_t harq_header_en        : 1;  /**< [184:184] 0 = No HARQ header word will be added.
                                                                 1 = header word will be added before HARQ output of each code block. */
        uint64_t k0                    : 16; /**< [183:168] k0 value representing offset of Rx data in unpruned circular buffer as defined
                                                                 in Table 5.4.2.1-2 in 38.212.  Must be less than [NCB_SIZE]. */
        uint64_t gain_h                : 8;  /**< [167:160] Scaling factor for HARQ input LLRs in HARQ combining (also called GH in this document).
                                                                 Valid range [0x0, 0xFF]. */
        uint64_t gain_i                : 8;  /**< [159:152] Scaling factor for Rx input LLRs in HARQ combining (also called GI in this document).
                                                                 Valid range [0x0, 0xFF]. */
        uint64_t hcout_llr_cnv         : 4;  /**< [151:148] Scaling applied to LLR samples between HARQ combining and HCout release.
                                                                 Samples have their amplitude right-shifted by [HCOUT_LLR_CNV] bits.
                                                                 Valid range [0x0, 0x8]. */
        uint64_t dec_llr_cnv           : 4;  /**< [147:144] Scaling applied to LLR samples between HARQ combining and LDPC decoding.
                                                                 Samples have their amplitude right-shifted by [DEC_LLR_CNV] bits.
                                                                 Valid range [0x0, 0x8]. */
        uint64_t ncb_size              : 16; /**< [143:128] Soft buffer size of each code block as defined in section 5.4.2.1 in 38.212. Maximum value 0x6300. */
#else /* Word 2 - Little Endian */
        uint64_t ncb_size              : 16; /**< [143:128] Soft buffer size of each code block as defined in section 5.4.2.1 in 38.212. Maximum value 0x6300. */
        uint64_t dec_llr_cnv           : 4;  /**< [147:144] Scaling applied to LLR samples between HARQ combining and LDPC decoding.
                                                                 Samples have their amplitude right-shifted by [DEC_LLR_CNV] bits.
                                                                 Valid range [0x0, 0x8]. */
        uint64_t hcout_llr_cnv         : 4;  /**< [151:148] Scaling applied to LLR samples between HARQ combining and HCout release.
                                                                 Samples have their amplitude right-shifted by [HCOUT_LLR_CNV] bits.
                                                                 Valid range [0x0, 0x8]. */
        uint64_t gain_i                : 8;  /**< [159:152] Scaling factor for Rx input LLRs in HARQ combining (also called GI in this document).
                                                                 Valid range [0x0, 0xFF]. */
        uint64_t gain_h                : 8;  /**< [167:160] Scaling factor for HARQ input LLRs in HARQ combining (also called GH in this document).
                                                                 Valid range [0x0, 0xFF]. */
        uint64_t k0                    : 16; /**< [183:168] k0 value representing offset of Rx data in unpruned circular buffer as defined
                                                                 in Table 5.4.2.1-2 in 38.212.  Must be less than [NCB_SIZE]. */
        uint64_t harq_header_en        : 1;  /**< [184:184] 0 = No HARQ header word will be added.
                                                                 1 = header word will be added before HARQ output of each code block. */
        uint64_t cnu_algo_select       : 1;  /**< [185:185] Decoder algorithm used by the core.
                                                                 0 = FSPA.
                                                                 1 = Offset min-sum. */
        uint64_t reenc_out_type        : 1;  /**< [186:186] 0 = reencoded output of decoded data.
                                                                 No Extra header word added for each CB.
                                                                 1 = reenc stream source depends on CB CRC :
                                                                   -If CB CRC pass, from actual reencoding.
                                                                   -If CB CRC fails, from hard decision of rate matched
                                                                   soft output available at the end of [SO_IT] iterations.
                                                                 Extra header word added for each CB.
                                                                 When [REENC_OUT_TYPE]=1, rate matching of soft bits sent on
                                                                 the reenc port is based on [BYPASS_REENC_RM] field. When both
                                                                 soft and reenc ports are enabled, it is required to have
                                                                 [BYPASS_REENC_RM] == [BYPASS_SO_RM].
                                                                 When [REENC_OUT_TYPE]=1, a LDEC_TURBO_PIC_CFG_S configuration
                                                                 structure follows the LDEC_TASK_CFG_S and
                                                                 LDEC_LAYER_ORDER_CFG_S structures. */
        uint64_t reenc_128b_align_en   : 1;  /**< [187:187] Flag to enable reencoded output of each code block aligned
                                                                 to 128-bit boundary.
                                                                 This mode can be used with either [REENC_OUT_TYPE]. */
        uint64_t so_bit_sign_format    : 1;  /**< [188:188] 0 = "0p" format. 0 bit corresponds to positive LLR
                                                                 1 = "1p" format. 1 bit corresponds to positive LLR */
        uint64_t reserved_189_191      : 3;
#endif /* Word 2 - End */
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 3 - Big Endian */
        uint64_t reserved_254_255      : 2;
        uint64_t preproc_p0_csi2_len2  : 19; /**< [253:235] Size of burst 2, CSI2 part0. Valid range is [0x0, 0x671FF]. */
        uint64_t preproc_p0_csi2_len1  : 19; /**< [234:216] Size of burst 1, CSI2 part0. Valid range is [0x0, 0x671FF]. */
        uint64_t preproc_p0_csi2_len0  : 19; /**< [215:197] Size of burst 0, CSI2 part0. Valid range is [0x0, 0x671FF]. */
        uint64_t reserved_194_196      : 3;
        uint64_t preproc_enable        : 1;  /**< [193:193] 0 = Disable pre-processor.
                                                                 1 = Enable pre-processor. */
        uint64_t preproc_mode          : 1;  /**< [192:192] Flag indicating the mode of LLR pre-processing block
                                                                 0 = Keep CSI2 LLRs.
                                                                 1 = Keep data LLR. */
#else /* Word 3 - Little Endian */
        uint64_t preproc_mode          : 1;  /**< [192:192] Flag indicating the mode of LLR pre-processing block
                                                                 0 = Keep CSI2 LLRs.
                                                                 1 = Keep data LLR. */
        uint64_t preproc_enable        : 1;  /**< [193:193] 0 = Disable pre-processor.
                                                                 1 = Enable pre-processor. */
        uint64_t reserved_194_196      : 3;
        uint64_t preproc_p0_csi2_len0  : 19; /**< [215:197] Size of burst 0, CSI2 part0. Valid range is [0x0, 0x671FF]. */
        uint64_t preproc_p0_csi2_len1  : 19; /**< [234:216] Size of burst 1, CSI2 part0. Valid range is [0x0, 0x671FF]. */
        uint64_t preproc_p0_csi2_len2  : 19; /**< [253:235] Size of burst 2, CSI2 part0. Valid range is [0x0, 0x671FF]. */
        uint64_t reserved_254_255      : 2;
#endif /* Word 3 - End */
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 4 - Big Endian */
        uint64_t reserved_319          : 1;
        uint64_t preproc_csi2_repeat_burst_size : 6;/**< [318:313] Burst size of CSI2 LLRs in each repeat of both part 0 and part 1.
                                                                 Valid range : {0x1, 0x2, 0x3, 0x4, 0x6, 0x8, 0xA, 0xC, 0x10, 0x12, 0x14, 0x18, 0x1E, 0x20, 0x28} */
        uint64_t preproc_p1_csi2_len2  : 19; /**< [312:294] Size of burst 2, CSI2 part1. Valid range is [0x0, 0x671FF]. */
        uint64_t preproc_p1_csi2_len1  : 19; /**< [293:275] Size of burst 1, CSI2 part1. Valid range is [0x0, 0x671FF]. */
        uint64_t preproc_p1_csi2_len0  : 19; /**< [274:256] Size of burst 0, CSI2 part1. Valid range is [0x0, 0x671FF]. */
#else /* Word 4 - Little Endian */
        uint64_t preproc_p1_csi2_len0  : 19; /**< [274:256] Size of burst 0, CSI2 part1. Valid range is [0x0, 0x671FF]. */
        uint64_t preproc_p1_csi2_len1  : 19; /**< [293:275] Size of burst 1, CSI2 part1. Valid range is [0x0, 0x671FF]. */
        uint64_t preproc_p1_csi2_len2  : 19; /**< [312:294] Size of burst 2, CSI2 part1. Valid range is [0x0, 0x671FF]. */
        uint64_t preproc_csi2_repeat_burst_size : 6;/**< [318:313] Burst size of CSI2 LLRs in each repeat of both part 0 and part 1.
                                                                 Valid range : {0x1, 0x2, 0x3, 0x4, 0x6, 0x8, 0xA, 0xC, 0x10, 0x12, 0x14, 0x18, 0x1E, 0x20, 0x28} */
        uint64_t reserved_319          : 1;
#endif /* Word 4 - End */
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 5 - Big Endian */
        uint64_t reserved_382_383      : 2;
        uint64_t preproc_p0_num_repeat : 11; /**< [381:371] Number of periodic repetitions in part 0. Valid range is [0x0, 0x7FF]. */
        uint64_t preproc_p1_data_len0  : 17; /**< [370:354] Size of burst 0, data part 1. Valid range is [0x0, 0x19C7F]. */
        uint64_t preproc_p0_data_len1  : 17; /**< [353:337] Size of burst 1, data part 0. Valid range is [0x0, 0x19C7F]. */
        uint64_t preproc_p0_data_len0  : 17; /**< [336:320] Size of burst 0, data part 0. Valid range is [0x0, 0x19C7F]. */
#else /* Word 5 - Little Endian */
        uint64_t preproc_p0_data_len0  : 17; /**< [336:320] Size of burst 0, data part 0. Valid range is [0x0, 0x19C7F]. */
        uint64_t preproc_p0_data_len1  : 17; /**< [353:337] Size of burst 1, data part 0. Valid range is [0x0, 0x19C7F]. */
        uint64_t preproc_p1_data_len0  : 17; /**< [370:354] Size of burst 0, data part 1. Valid range is [0x0, 0x19C7F]. */
        uint64_t preproc_p0_num_repeat : 11; /**< [381:371] Number of periodic repetitions in part 0. Valid range is [0x0, 0x7FF]. */
        uint64_t reserved_382_383      : 2;
#endif /* Word 5 - End */
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 6 - Big Endian */
        uint64_t reserved_444_447      : 4;
        uint64_t preproc_p1_num_repeat : 11; /**< [443:433] Number of periodic repetitions in part 1. Valid range is [0x0, 0x7FF]. */
        uint64_t preproc_p1_csi2_repeat_period : 16;/**< [432:417] Periodicity of Repeated CSI2 LLRs followed by part 1 (3 bursts of CSI2 and 2 bursts of data)
                                                                 LLRs. Represents number of LLRs of each period. Valid range is [0x0, 0xCE40]. */
        uint64_t preproc_p0_csi2_repeat_period : 16;/**< [416:401] Periodicity of Repeated CSI2 LLRs followed by part 0 (3 bursts of CSI2 and 2 bursts of data)
                                                                 LLRs. Represents number of LLRs of each period. Valid range is [0x0, 0xCE40]. */
        uint64_t preproc_p1_data_len1  : 17; /**< [400:384] Size of burst 1, data part 1. Valid range is [0x0, 0x19C7F]. */
#else /* Word 6 - Little Endian */
        uint64_t preproc_p1_data_len1  : 17; /**< [400:384] Size of burst 1, data part 1. Valid range is [0x0, 0x19C7F]. */
        uint64_t preproc_p0_csi2_repeat_period : 16;/**< [416:401] Periodicity of Repeated CSI2 LLRs followed by part 0 (3 bursts of CSI2 and 2 bursts of data)
                                                                 LLRs. Represents number of LLRs of each period. Valid range is [0x0, 0xCE40]. */
        uint64_t preproc_p1_csi2_repeat_period : 16;/**< [432:417] Periodicity of Repeated CSI2 LLRs followed by part 1 (3 bursts of CSI2 and 2 bursts of data)
                                                                 LLRs. Represents number of LLRs of each period. Valid range is [0x0, 0xCE40]. */
        uint64_t preproc_p1_num_repeat : 11; /**< [443:433] Number of periodic repetitions in part 1. Valid range is [0x0, 0x7FF]. */
        uint64_t reserved_444_447      : 4;
#endif /* Word 6 - End */
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 7 - Big Endian */
        uint64_t preproc_num_rd_dma_words_p1 : 32;/**< [511:480] Number of read DMA words for part 1.
                                                                 Must satisfy the following constraint:
                                                                 The read DMA parameters must satisfy the following constraint:
                                                                 _ [PREPROC_NUM_RD_DMA_WORDS_P0] + [PREPROC_NUM_RD_DMA_WORDS_P1] = [NUM_RD0_DMA_WORDS]

                                                                 Valid range [0x0:0x168F0] is fully verified. Values outside this range may
                                                                 be supported but are not verified. */
        uint64_t preproc_num_rd_dma_words_p0 : 32;/**< [479:448] Number of read DMA words for part 0.
                                                                 Must satisfy the following constraint:
                                                                 The read DMA parameters must satisfy the following constraint:
                                                                 _ [PREPROC_NUM_RD_DMA_WORDS_P0] + [PREPROC_NUM_RD_DMA_WORDS_P1] = [NUM_RD0_DMA_WORDS]

                                                                 Valid range [0x0:0x168F0] is fully verified. Values outside this range may
                                                                 be supported but are not verified. */
#else /* Word 7 - Little Endian */
        uint64_t preproc_num_rd_dma_words_p0 : 32;/**< [479:448] Number of read DMA words for part 0.
                                                                 Must satisfy the following constraint:
                                                                 The read DMA parameters must satisfy the following constraint:
                                                                 _ [PREPROC_NUM_RD_DMA_WORDS_P0] + [PREPROC_NUM_RD_DMA_WORDS_P1] = [NUM_RD0_DMA_WORDS]

                                                                 Valid range [0x0:0x168F0] is fully verified. Values outside this range may
                                                                 be supported but are not verified. */
        uint64_t preproc_num_rd_dma_words_p1 : 32;/**< [511:480] Number of read DMA words for part 1.
                                                                 Must satisfy the following constraint:
                                                                 The read DMA parameters must satisfy the following constraint:
                                                                 _ [PREPROC_NUM_RD_DMA_WORDS_P0] + [PREPROC_NUM_RD_DMA_WORDS_P1] = [NUM_RD0_DMA_WORDS]

                                                                 Valid range [0x0:0x168F0] is fully verified. Values outside this range may
                                                                 be supported but are not verified. */
#endif /* Word 7 - End */
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 8 - Big Endian */
        uint64_t num_rd1_dma_words     : 32; /**< [575:544] Number of 128-bit words read from Port1 input DMA. Valid range is [0x0, 0x3AC80]. */
        uint64_t num_rd0_dma_words     : 32; /**< [543:512] Number of 128-bit words read from Port0 input DMA. Please see Section 4.2.4
                                                                 for an example on how to set this field.

                                                                 Valid range [0x0:0x168F0] is fully verified. Values outside this range may
                                                                 be supported but are not verified. */
#else /* Word 8 - Little Endian */
        uint64_t num_rd0_dma_words     : 32; /**< [543:512] Number of 128-bit words read from Port0 input DMA. Please see Section 4.2.4
                                                                 for an example on how to set this field.

                                                                 Valid range [0x0:0x168F0] is fully verified. Values outside this range may
                                                                 be supported but are not verified. */
        uint64_t num_rd1_dma_words     : 32; /**< [575:544] Number of 128-bit words read from Port1 input DMA. Valid range is [0x0, 0x3AC80]. */
#endif /* Word 8 - End */
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 9 - Big Endian */
        uint64_t num_wr1_dma_words     : 32; /**< [639:608] Number of 128-bit words written to Port1 output DMA.

                                                                 Valid range [0:0x168F0] is fully verified. Values outside this range may be
                                                                 supported but are not verified. */
        uint64_t num_wr0_dma_words     : 32; /**< [607:576] Number of 128-bit words written to Port0 output DMA. Valid range is [0x0, 0x3AC80]. */
#else /* Word 9 - Little Endian */
        uint64_t num_wr0_dma_words     : 32; /**< [607:576] Number of 128-bit words written to Port0 output DMA. Valid range is [0x0, 0x3AC80]. */
        uint64_t num_wr1_dma_words     : 32; /**< [639:608] Number of 128-bit words written to Port1 output DMA.

                                                                 Valid range [0:0x168F0] is fully verified. Values outside this range may be
                                                                 supported but are not verified. */
#endif /* Word 9 - End */
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 10 - Big Endian */
        uint64_t num_wr3_dma_words     : 32; /**< [703:672] Number of 64-bit words written to Port3 output DMA. Valid range is [0x0, 0xEB20]. */
        uint64_t num_wr2_dma_words     : 32; /**< [671:640] Number of 64-bit words written to Port2 output DMA. Valid range is [0x0, 0x4E60]. */
#else /* Word 10 - Little Endian */
        uint64_t num_wr2_dma_words     : 32; /**< [671:640] Number of 64-bit words written to Port2 output DMA. Valid range is [0x0, 0x4E60]. */
        uint64_t num_wr3_dma_words     : 32; /**< [703:672] Number of 64-bit words written to Port3 output DMA. Valid range is [0x0, 0xEB20]. */
#endif /* Word 10 - End */
    } s;
    /* struct cavm_ldec_task_cfg_s_s cn; */
};

/**
 * Structure ldec_turbo_pic_cfg_s
 *
 * LDEC Turbo PIC Configuration Structure
 * This structure specifies the turbo PIC configuration for a task.  It
 * follows the LDEC_TASK_CFG_S and LDEC_LAYER_ORDER_CFG_S, when
 * [REENC_OUT_TYPE]=1.
 */
union cavm_ldec_turbo_pic_cfg_s
{
    uint64_t u;
    struct cavm_ldec_turbo_pic_cfg_s_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_44_63        : 20;
        uint64_t turbo_pic_q_rnd       : 4;  /**< [ 43: 40] Unsigned value. Number of bits to be rounded after application
                                                                 of scaling "A". */
        uint64_t turbo_pic_q_thrh      : 8;  /**< [ 39: 32] Signed upper saturation limit for final q value. Recommended
                                                                 to be 0x7F. */
        uint64_t turbo_pic_q_thrl      : 8;  /**< [ 31: 24] Signed lower saturation limit for final q value. Recommended
                                                                 to be 0x1, but 0x0 is also supported. */
        uint64_t turbo_pic_a_value     : 8;  /**< [ 23: 16] Scaling factor "A" applied over LUT value . */
        uint64_t turbo_pic_llr_scale_rnd : 8;/**< [ 15:  8] Number of bits to be rounded after application of LLR
                                                                 normalization scaling . */
        uint64_t turbo_pic_llr_scale   : 8;  /**< [  7:  0] 8-bit unsigned mean normalization scaling. */
#else /* Word 0 - Little Endian */
        uint64_t turbo_pic_llr_scale   : 8;  /**< [  7:  0] 8-bit unsigned mean normalization scaling. */
        uint64_t turbo_pic_llr_scale_rnd : 8;/**< [ 15:  8] Number of bits to be rounded after application of LLR
                                                                 normalization scaling . */
        uint64_t turbo_pic_a_value     : 8;  /**< [ 23: 16] Scaling factor "A" applied over LUT value . */
        uint64_t turbo_pic_q_thrl      : 8;  /**< [ 31: 24] Signed lower saturation limit for final q value. Recommended
                                                                 to be 0x1, but 0x0 is also supported. */
        uint64_t turbo_pic_q_thrh      : 8;  /**< [ 39: 32] Signed upper saturation limit for final q value. Recommended
                                                                 to be 0x7F. */
        uint64_t turbo_pic_q_rnd       : 4;  /**< [ 43: 40] Unsigned value. Number of bits to be rounded after application
                                                                 of scaling "A". */
        uint64_t reserved_44_63        : 20;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_ldec_turbo_pic_cfg_s_s cn; */
};

/**
 * Register (RSL) ldec#_ab#_control
 *
 * LDEC Control Register
 */
union cavm_ldecx_abx_control
{
    uint64_t u;
    struct cavm_ldecx_abx_control_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t jobid2                : 16; /**< [ 63: 48](R/W/H) Job ID for slot 2. */
        uint64_t jobid1                : 16; /**< [ 47: 32](R/W/H) Job ID for slot 1. */
        uint64_t jobid0                : 16; /**< [ 31: 16](R/W/H) Job ID for slot 0. */
        uint64_t reserved_3_15         : 13;
        uint64_t start2                : 1;  /**< [  2:  2](R/W/H) Start processing job in slot 2. */
        uint64_t start1                : 1;  /**< [  1:  1](R/W/H) Start processing job in slot 1. */
        uint64_t start0                : 1;  /**< [  0:  0](R/W/H) Start processing job in slot 0. */
#else /* Word 0 - Little Endian */
        uint64_t start0                : 1;  /**< [  0:  0](R/W/H) Start processing job in slot 0. */
        uint64_t start1                : 1;  /**< [  1:  1](R/W/H) Start processing job in slot 1. */
        uint64_t start2                : 1;  /**< [  2:  2](R/W/H) Start processing job in slot 2. */
        uint64_t reserved_3_15         : 13;
        uint64_t jobid0                : 16; /**< [ 31: 16](R/W/H) Job ID for slot 0. */
        uint64_t jobid1                : 16; /**< [ 47: 32](R/W/H) Job ID for slot 1. */
        uint64_t jobid2                : 16; /**< [ 63: 48](R/W/H) Job ID for slot 2. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_ldecx_abx_control_s cn; */
};
typedef union cavm_ldecx_abx_control cavm_ldecx_abx_control_t;

static inline uint64_t CAVM_LDECX_ABX_CONTROL(uint64_t a, uint64_t b) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_LDECX_ABX_CONTROL(uint64_t a, uint64_t b)
{
    if (cavm_is_model(OCTEONTX_CNF20KA) && ((a<=3) && (b<=2)))
        return 0x87e040c00000ll + 0x80000ll * ((a) & 0x3) + 0x10000ll * ((b) & 0x3);
    __cavm_csr_fatal("LDECX_ABX_CONTROL", 2, a, b, 0, 0, 0, 0);
}

#define typedef_CAVM_LDECX_ABX_CONTROL(a,b) cavm_ldecx_abx_control_t
#define bustype_CAVM_LDECX_ABX_CONTROL(a,b) CSR_TYPE_RSL
#define basename_CAVM_LDECX_ABX_CONTROL(a,b) "LDECX_ABX_CONTROL"
#define device_bar_CAVM_LDECX_ABX_CONTROL(a,b) 0x2 /* PF_BAR2 */
#define busnum_CAVM_LDECX_ABX_CONTROL(a,b) (a)
#define arguments_CAVM_LDECX_ABX_CONTROL(a,b) (a),(b),-1,-1

/**
 * Register (RSL) ldec#_ab#_error_enable0
 *
 * LDEC Error Enable 0 Register
 * This register enables error reporting for read overflow/underflow errors.
 */
union cavm_ldecx_abx_error_enable0
{
    uint64_t u;
    struct cavm_ldecx_abx_error_enable0_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_6_63         : 58;
        uint64_t rp1_of_en             : 1;  /**< [  5:  5](R/W) Read port 1 overflow enable. */
        uint64_t rp0_of_en             : 1;  /**< [  4:  4](R/W) Read port 0 overflow enable. */
        uint64_t reserved_2_3          : 2;
        uint64_t rp1_uf_en             : 1;  /**< [  1:  1](R/W) Read Port 1 underflow enable. */
        uint64_t rp0_uf_en             : 1;  /**< [  0:  0](R/W) Read Port 0 underflow enable. */
#else /* Word 0 - Little Endian */
        uint64_t rp0_uf_en             : 1;  /**< [  0:  0](R/W) Read Port 0 underflow enable. */
        uint64_t rp1_uf_en             : 1;  /**< [  1:  1](R/W) Read Port 1 underflow enable. */
        uint64_t reserved_2_3          : 2;
        uint64_t rp0_of_en             : 1;  /**< [  4:  4](R/W) Read port 0 overflow enable. */
        uint64_t rp1_of_en             : 1;  /**< [  5:  5](R/W) Read port 1 overflow enable. */
        uint64_t reserved_6_63         : 58;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_ldecx_abx_error_enable0_s cn; */
};
typedef union cavm_ldecx_abx_error_enable0 cavm_ldecx_abx_error_enable0_t;

static inline uint64_t CAVM_LDECX_ABX_ERROR_ENABLE0(uint64_t a, uint64_t b) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_LDECX_ABX_ERROR_ENABLE0(uint64_t a, uint64_t b)
{
    if (cavm_is_model(OCTEONTX_CNF20KA) && ((a<=3) && (b<=2)))
        return 0x87e040c00040ll + 0x80000ll * ((a) & 0x3) + 0x10000ll * ((b) & 0x3);
    __cavm_csr_fatal("LDECX_ABX_ERROR_ENABLE0", 2, a, b, 0, 0, 0, 0);
}

#define typedef_CAVM_LDECX_ABX_ERROR_ENABLE0(a,b) cavm_ldecx_abx_error_enable0_t
#define bustype_CAVM_LDECX_ABX_ERROR_ENABLE0(a,b) CSR_TYPE_RSL
#define basename_CAVM_LDECX_ABX_ERROR_ENABLE0(a,b) "LDECX_ABX_ERROR_ENABLE0"
#define device_bar_CAVM_LDECX_ABX_ERROR_ENABLE0(a,b) 0x2 /* PF_BAR2 */
#define busnum_CAVM_LDECX_ABX_ERROR_ENABLE0(a,b) (a)
#define arguments_CAVM_LDECX_ABX_ERROR_ENABLE0(a,b) (a),(b),-1,-1

/**
 * Register (RSL) ldec#_ab#_error_enable1
 *
 * LDEC Error Enable 1 Register
 * This register enables error reporting of ECC errors.
 */
union cavm_ldecx_abx_error_enable1
{
    uint64_t u;
    struct cavm_ldecx_abx_error_enable1_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_7_63         : 57;
        uint64_t jcfg2_ded_ecc         : 1;  /**< [  6:  6](R/W) Job configuration 2 double-bit ECC error enable. */
        uint64_t jcfg1_ded_ecc         : 1;  /**< [  5:  5](R/W) Job configuration 1 double-bit ECC error enable. */
        uint64_t jcfg0_ded_ecc         : 1;  /**< [  4:  4](R/W) Job configuration 0 double-bit ECC error enable. */
        uint64_t reserved_0_3          : 4;
#else /* Word 0 - Little Endian */
        uint64_t reserved_0_3          : 4;
        uint64_t jcfg0_ded_ecc         : 1;  /**< [  4:  4](R/W) Job configuration 0 double-bit ECC error enable. */
        uint64_t jcfg1_ded_ecc         : 1;  /**< [  5:  5](R/W) Job configuration 1 double-bit ECC error enable. */
        uint64_t jcfg2_ded_ecc         : 1;  /**< [  6:  6](R/W) Job configuration 2 double-bit ECC error enable. */
        uint64_t reserved_7_63         : 57;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_ldecx_abx_error_enable1_s cn; */
};
typedef union cavm_ldecx_abx_error_enable1 cavm_ldecx_abx_error_enable1_t;

static inline uint64_t CAVM_LDECX_ABX_ERROR_ENABLE1(uint64_t a, uint64_t b) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_LDECX_ABX_ERROR_ENABLE1(uint64_t a, uint64_t b)
{
    if (cavm_is_model(OCTEONTX_CNF20KA) && ((a<=3) && (b<=2)))
        return 0x87e040c00048ll + 0x80000ll * ((a) & 0x3) + 0x10000ll * ((b) & 0x3);
    __cavm_csr_fatal("LDECX_ABX_ERROR_ENABLE1", 2, a, b, 0, 0, 0, 0);
}

#define typedef_CAVM_LDECX_ABX_ERROR_ENABLE1(a,b) cavm_ldecx_abx_error_enable1_t
#define bustype_CAVM_LDECX_ABX_ERROR_ENABLE1(a,b) CSR_TYPE_RSL
#define basename_CAVM_LDECX_ABX_ERROR_ENABLE1(a,b) "LDECX_ABX_ERROR_ENABLE1"
#define device_bar_CAVM_LDECX_ABX_ERROR_ENABLE1(a,b) 0x2 /* PF_BAR2 */
#define busnum_CAVM_LDECX_ABX_ERROR_ENABLE1(a,b) (a)
#define arguments_CAVM_LDECX_ABX_ERROR_ENABLE1(a,b) (a),(b),-1,-1

/**
 * Register (RSL) ldec#_ab#_error_source0
 *
 * LDEC Error Source 0 Register
 * This register indicates the source of read overflow/underflow errors.
 */
union cavm_ldecx_abx_error_source0
{
    uint64_t u;
    struct cavm_ldecx_abx_error_source0_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_48_63        : 16;
        uint64_t rp1_jid               : 16; /**< [ 47: 32](RO/H) Job ID of the job which reported the overflow/underflow error on read
                                                                 port 1. */
        uint64_t rp0_jid               : 16; /**< [ 31: 16](RO/H) Job ID of the job which reported the overflow/underflow error on read
                                                                 port 0. */
        uint64_t reserved_6_15         : 10;
        uint64_t rp1_of                : 1;  /**< [  5:  5](R/W1C/H) Read port 1 overflow. */
        uint64_t rp0_of                : 1;  /**< [  4:  4](R/W1C/H) Read port 0 overflow. */
        uint64_t reserved_2_3          : 2;
        uint64_t rp1_uf                : 1;  /**< [  1:  1](R/W1C/H) Read port 1 underflow. */
        uint64_t rp0_uf                : 1;  /**< [  0:  0](R/W1C/H) Read port 0 underflow. */
#else /* Word 0 - Little Endian */
        uint64_t rp0_uf                : 1;  /**< [  0:  0](R/W1C/H) Read port 0 underflow. */
        uint64_t rp1_uf                : 1;  /**< [  1:  1](R/W1C/H) Read port 1 underflow. */
        uint64_t reserved_2_3          : 2;
        uint64_t rp0_of                : 1;  /**< [  4:  4](R/W1C/H) Read port 0 overflow. */
        uint64_t rp1_of                : 1;  /**< [  5:  5](R/W1C/H) Read port 1 overflow. */
        uint64_t reserved_6_15         : 10;
        uint64_t rp0_jid               : 16; /**< [ 31: 16](RO/H) Job ID of the job which reported the overflow/underflow error on read
                                                                 port 0. */
        uint64_t rp1_jid               : 16; /**< [ 47: 32](RO/H) Job ID of the job which reported the overflow/underflow error on read
                                                                 port 1. */
        uint64_t reserved_48_63        : 16;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_ldecx_abx_error_source0_s cn; */
};
typedef union cavm_ldecx_abx_error_source0 cavm_ldecx_abx_error_source0_t;

static inline uint64_t CAVM_LDECX_ABX_ERROR_SOURCE0(uint64_t a, uint64_t b) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_LDECX_ABX_ERROR_SOURCE0(uint64_t a, uint64_t b)
{
    if (cavm_is_model(OCTEONTX_CNF20KA) && ((a<=3) && (b<=2)))
        return 0x87e040c00030ll + 0x80000ll * ((a) & 0x3) + 0x10000ll * ((b) & 0x3);
    __cavm_csr_fatal("LDECX_ABX_ERROR_SOURCE0", 2, a, b, 0, 0, 0, 0);
}

#define typedef_CAVM_LDECX_ABX_ERROR_SOURCE0(a,b) cavm_ldecx_abx_error_source0_t
#define bustype_CAVM_LDECX_ABX_ERROR_SOURCE0(a,b) CSR_TYPE_RSL
#define basename_CAVM_LDECX_ABX_ERROR_SOURCE0(a,b) "LDECX_ABX_ERROR_SOURCE0"
#define device_bar_CAVM_LDECX_ABX_ERROR_SOURCE0(a,b) 0x2 /* PF_BAR2 */
#define busnum_CAVM_LDECX_ABX_ERROR_SOURCE0(a,b) (a)
#define arguments_CAVM_LDECX_ABX_ERROR_SOURCE0(a,b) (a),(b),-1,-1

/**
 * Register (RSL) ldec#_ab#_error_source1
 *
 * LDEC Error Source 1 Register
 * This register reports the source of ECC errors.
 */
union cavm_ldecx_abx_error_source1
{
    uint64_t u;
    struct cavm_ldecx_abx_error_source1_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_7_63         : 57;
        uint64_t jcfg2_ded_ecc         : 1;  /**< [  6:  6](R/W1C/H) Job configuration 2 double-bit error detected. */
        uint64_t jcfg1_ded_ecc         : 1;  /**< [  5:  5](R/W1C/H) Job configuration 1 double-bit error detected. */
        uint64_t jcfg0_ded_ecc         : 1;  /**< [  4:  4](R/W1C/H) Job configuration 0 double-bit error detected. */
        uint64_t reserved_0_3          : 4;
#else /* Word 0 - Little Endian */
        uint64_t reserved_0_3          : 4;
        uint64_t jcfg0_ded_ecc         : 1;  /**< [  4:  4](R/W1C/H) Job configuration 0 double-bit error detected. */
        uint64_t jcfg1_ded_ecc         : 1;  /**< [  5:  5](R/W1C/H) Job configuration 1 double-bit error detected. */
        uint64_t jcfg2_ded_ecc         : 1;  /**< [  6:  6](R/W1C/H) Job configuration 2 double-bit error detected. */
        uint64_t reserved_7_63         : 57;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_ldecx_abx_error_source1_s cn; */
};
typedef union cavm_ldecx_abx_error_source1 cavm_ldecx_abx_error_source1_t;

static inline uint64_t CAVM_LDECX_ABX_ERROR_SOURCE1(uint64_t a, uint64_t b) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_LDECX_ABX_ERROR_SOURCE1(uint64_t a, uint64_t b)
{
    if (cavm_is_model(OCTEONTX_CNF20KA) && ((a<=3) && (b<=2)))
        return 0x87e040c00038ll + 0x80000ll * ((a) & 0x3) + 0x10000ll * ((b) & 0x3);
    __cavm_csr_fatal("LDECX_ABX_ERROR_SOURCE1", 2, a, b, 0, 0, 0, 0);
}

#define typedef_CAVM_LDECX_ABX_ERROR_SOURCE1(a,b) cavm_ldecx_abx_error_source1_t
#define bustype_CAVM_LDECX_ABX_ERROR_SOURCE1(a,b) CSR_TYPE_RSL
#define basename_CAVM_LDECX_ABX_ERROR_SOURCE1(a,b) "LDECX_ABX_ERROR_SOURCE1"
#define device_bar_CAVM_LDECX_ABX_ERROR_SOURCE1(a,b) 0x2 /* PF_BAR2 */
#define busnum_CAVM_LDECX_ABX_ERROR_SOURCE1(a,b) (a)
#define arguments_CAVM_LDECX_ABX_ERROR_SOURCE1(a,b) (a),(b),-1,-1

/**
 * Register (RSL) ldec#_ab#_hab_jcfg0_ram#_data
 *
 * LDEC HAB Job Configuration 0 RAM Register
 * This register range stores the job configuration for slot 0.
 * Hardware loads the job configuration in these registers. Software should
 * never directly write to these registers.
 */
union cavm_ldecx_abx_hab_jcfg0_ramx_data
{
    uint64_t u;
    struct cavm_ldecx_abx_hab_jcfg0_ramx_data_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t entry                 : 64; /**< [ 63:  0](R/W/H) JCFG0 RAM CSRs */
#else /* Word 0 - Little Endian */
        uint64_t entry                 : 64; /**< [ 63:  0](R/W/H) JCFG0 RAM CSRs */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_ldecx_abx_hab_jcfg0_ramx_data_s cn; */
};
typedef union cavm_ldecx_abx_hab_jcfg0_ramx_data cavm_ldecx_abx_hab_jcfg0_ramx_data_t;

static inline uint64_t CAVM_LDECX_ABX_HAB_JCFG0_RAMX_DATA(uint64_t a, uint64_t b, uint64_t c) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_LDECX_ABX_HAB_JCFG0_RAMX_DATA(uint64_t a, uint64_t b, uint64_t c)
{
    if (cavm_is_model(OCTEONTX_CNF20KA) && ((a<=3) && (b<=2) && (c<=511)))
        return 0x87e040c02000ll + 0x80000ll * ((a) & 0x3) + 0x10000ll * ((b) & 0x3) + 8ll * ((c) & 0x1ff);
    __cavm_csr_fatal("LDECX_ABX_HAB_JCFG0_RAMX_DATA", 3, a, b, c, 0, 0, 0);
}

#define typedef_CAVM_LDECX_ABX_HAB_JCFG0_RAMX_DATA(a,b,c) cavm_ldecx_abx_hab_jcfg0_ramx_data_t
#define bustype_CAVM_LDECX_ABX_HAB_JCFG0_RAMX_DATA(a,b,c) CSR_TYPE_RSL
#define basename_CAVM_LDECX_ABX_HAB_JCFG0_RAMX_DATA(a,b,c) "LDECX_ABX_HAB_JCFG0_RAMX_DATA"
#define device_bar_CAVM_LDECX_ABX_HAB_JCFG0_RAMX_DATA(a,b,c) 0x2 /* PF_BAR2 */
#define busnum_CAVM_LDECX_ABX_HAB_JCFG0_RAMX_DATA(a,b,c) (a)
#define arguments_CAVM_LDECX_ABX_HAB_JCFG0_RAMX_DATA(a,b,c) (a),(b),(c),-1

/**
 * Register (RSL) ldec#_ab#_hab_jcfg1_ram#_data
 *
 * LDEC HAB Job Configuration 1 RAM Register
 * This register range stores the job configuration for slot 1.
 */
union cavm_ldecx_abx_hab_jcfg1_ramx_data
{
    uint64_t u;
    struct cavm_ldecx_abx_hab_jcfg1_ramx_data_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t entry                 : 64; /**< [ 63:  0](R/W/H) JCFG1 RAM CSRs */
#else /* Word 0 - Little Endian */
        uint64_t entry                 : 64; /**< [ 63:  0](R/W/H) JCFG1 RAM CSRs */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_ldecx_abx_hab_jcfg1_ramx_data_s cn; */
};
typedef union cavm_ldecx_abx_hab_jcfg1_ramx_data cavm_ldecx_abx_hab_jcfg1_ramx_data_t;

static inline uint64_t CAVM_LDECX_ABX_HAB_JCFG1_RAMX_DATA(uint64_t a, uint64_t b, uint64_t c) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_LDECX_ABX_HAB_JCFG1_RAMX_DATA(uint64_t a, uint64_t b, uint64_t c)
{
    if (cavm_is_model(OCTEONTX_CNF20KA) && ((a<=3) && (b<=2) && (c<=511)))
        return 0x87e040c04000ll + 0x80000ll * ((a) & 0x3) + 0x10000ll * ((b) & 0x3) + 8ll * ((c) & 0x1ff);
    __cavm_csr_fatal("LDECX_ABX_HAB_JCFG1_RAMX_DATA", 3, a, b, c, 0, 0, 0);
}

#define typedef_CAVM_LDECX_ABX_HAB_JCFG1_RAMX_DATA(a,b,c) cavm_ldecx_abx_hab_jcfg1_ramx_data_t
#define bustype_CAVM_LDECX_ABX_HAB_JCFG1_RAMX_DATA(a,b,c) CSR_TYPE_RSL
#define basename_CAVM_LDECX_ABX_HAB_JCFG1_RAMX_DATA(a,b,c) "LDECX_ABX_HAB_JCFG1_RAMX_DATA"
#define device_bar_CAVM_LDECX_ABX_HAB_JCFG1_RAMX_DATA(a,b,c) 0x2 /* PF_BAR2 */
#define busnum_CAVM_LDECX_ABX_HAB_JCFG1_RAMX_DATA(a,b,c) (a)
#define arguments_CAVM_LDECX_ABX_HAB_JCFG1_RAMX_DATA(a,b,c) (a),(b),(c),-1

/**
 * Register (RSL) ldec#_ab#_hab_jcfg2_ram#_data
 *
 * LDEC HAB Job Configuration 2 RAM Register
 * This register range stores the job configuration for slot 2.
 */
union cavm_ldecx_abx_hab_jcfg2_ramx_data
{
    uint64_t u;
    struct cavm_ldecx_abx_hab_jcfg2_ramx_data_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t entry                 : 64; /**< [ 63:  0](R/W/H) JCFG2 RAM CSRs */
#else /* Word 0 - Little Endian */
        uint64_t entry                 : 64; /**< [ 63:  0](R/W/H) JCFG2 RAM CSRs */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_ldecx_abx_hab_jcfg2_ramx_data_s cn; */
};
typedef union cavm_ldecx_abx_hab_jcfg2_ramx_data cavm_ldecx_abx_hab_jcfg2_ramx_data_t;

static inline uint64_t CAVM_LDECX_ABX_HAB_JCFG2_RAMX_DATA(uint64_t a, uint64_t b, uint64_t c) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_LDECX_ABX_HAB_JCFG2_RAMX_DATA(uint64_t a, uint64_t b, uint64_t c)
{
    if (cavm_is_model(OCTEONTX_CNF20KA) && ((a<=3) && (b<=2) && (c<=511)))
        return 0x87e040c06000ll + 0x80000ll * ((a) & 0x3) + 0x10000ll * ((b) & 0x3) + 8ll * ((c) & 0x1ff);
    __cavm_csr_fatal("LDECX_ABX_HAB_JCFG2_RAMX_DATA", 3, a, b, c, 0, 0, 0);
}

#define typedef_CAVM_LDECX_ABX_HAB_JCFG2_RAMX_DATA(a,b,c) cavm_ldecx_abx_hab_jcfg2_ramx_data_t
#define bustype_CAVM_LDECX_ABX_HAB_JCFG2_RAMX_DATA(a,b,c) CSR_TYPE_RSL
#define basename_CAVM_LDECX_ABX_HAB_JCFG2_RAMX_DATA(a,b,c) "LDECX_ABX_HAB_JCFG2_RAMX_DATA"
#define device_bar_CAVM_LDECX_ABX_HAB_JCFG2_RAMX_DATA(a,b,c) 0x2 /* PF_BAR2 */
#define busnum_CAVM_LDECX_ABX_HAB_JCFG2_RAMX_DATA(a,b,c) (a)
#define arguments_CAVM_LDECX_ABX_HAB_JCFG2_RAMX_DATA(a,b,c) (a),(b),(c),-1

/**
 * Register (RSL) ldec#_ab#_status
 *
 * LDEC Status Register
 */
union cavm_ldecx_abx_status
{
    uint64_t u;
    struct cavm_ldecx_abx_status_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_5_63         : 59;
        uint64_t ready                 : 1;  /**< [  4:  4](RO/H) When set, the LDEC HAB is ready to receive the next job. */
        uint64_t reserved_3            : 1;
        uint64_t cfg2_busy             : 1;  /**< [  2:  2](RO/H) When set, slot 2 is busy processing a job. */
        uint64_t cfg1_busy             : 1;  /**< [  1:  1](RO/H) When set, slot 1 is busy processing a job. */
        uint64_t cfg0_busy             : 1;  /**< [  0:  0](RO/H) When set, slot 0 is busy processing a job. */
#else /* Word 0 - Little Endian */
        uint64_t cfg0_busy             : 1;  /**< [  0:  0](RO/H) When set, slot 0 is busy processing a job. */
        uint64_t cfg1_busy             : 1;  /**< [  1:  1](RO/H) When set, slot 1 is busy processing a job. */
        uint64_t cfg2_busy             : 1;  /**< [  2:  2](RO/H) When set, slot 2 is busy processing a job. */
        uint64_t reserved_3            : 1;
        uint64_t ready                 : 1;  /**< [  4:  4](RO/H) When set, the LDEC HAB is ready to receive the next job. */
        uint64_t reserved_5_63         : 59;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_ldecx_abx_status_s cn; */
};
typedef union cavm_ldecx_abx_status cavm_ldecx_abx_status_t;

static inline uint64_t CAVM_LDECX_ABX_STATUS(uint64_t a, uint64_t b) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_LDECX_ABX_STATUS(uint64_t a, uint64_t b)
{
    if (cavm_is_model(OCTEONTX_CNF20KA) && ((a<=3) && (b<=2)))
        return 0x87e040c00018ll + 0x80000ll * ((a) & 0x3) + 0x10000ll * ((b) & 0x3);
    __cavm_csr_fatal("LDECX_ABX_STATUS", 2, a, b, 0, 0, 0, 0);
}

#define typedef_CAVM_LDECX_ABX_STATUS(a,b) cavm_ldecx_abx_status_t
#define bustype_CAVM_LDECX_ABX_STATUS(a,b) CSR_TYPE_RSL
#define basename_CAVM_LDECX_ABX_STATUS(a,b) "LDECX_ABX_STATUS"
#define device_bar_CAVM_LDECX_ABX_STATUS(a,b) 0x2 /* PF_BAR2 */
#define busnum_CAVM_LDECX_ABX_STATUS(a,b) (a)
#define arguments_CAVM_LDECX_ABX_STATUS(a,b) (a),(b),-1,-1

/**
 * Register (RSL) ldec#_ab#_tc_control
 *
 * LDEC Decoder Control Register
 * This register configures the LDEC internal decoder core.
 */
union cavm_ldecx_abx_tc_control
{
    uint64_t u;
    struct cavm_ldecx_abx_tc_control_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_5_63         : 59;
        uint64_t control_bus           : 5;  /**< [  4:  0](R/W) Decoder core static control inputs.
                                                                 [0] = clock gating disable.
                                                                 [1] = configuration check disable.
                                                                 [2] = wait until the core is idle before accepting the next task
                                                                       (degrades the throughput).
                                                                 [3] = wait until the core is idle before accepting the next task
                                                                       in case of changing phy_mode (degrades the throughput).
                                                                 [4] = wait until the core is idle before accepting the next task
                                                                       in case of changing channel_mode (degrades the throughput). */
#else /* Word 0 - Little Endian */
        uint64_t control_bus           : 5;  /**< [  4:  0](R/W) Decoder core static control inputs.
                                                                 [0] = clock gating disable.
                                                                 [1] = configuration check disable.
                                                                 [2] = wait until the core is idle before accepting the next task
                                                                       (degrades the throughput).
                                                                 [3] = wait until the core is idle before accepting the next task
                                                                       in case of changing phy_mode (degrades the throughput).
                                                                 [4] = wait until the core is idle before accepting the next task
                                                                       in case of changing channel_mode (degrades the throughput). */
        uint64_t reserved_5_63         : 59;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_ldecx_abx_tc_control_s cn; */
};
typedef union cavm_ldecx_abx_tc_control cavm_ldecx_abx_tc_control_t;

static inline uint64_t CAVM_LDECX_ABX_TC_CONTROL(uint64_t a, uint64_t b) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_LDECX_ABX_TC_CONTROL(uint64_t a, uint64_t b)
{
    if (cavm_is_model(OCTEONTX_CNF20KA) && ((a<=3) && (b<=2)))
        return 0x87e040c01010ll + 0x80000ll * ((a) & 0x3) + 0x10000ll * ((b) & 0x3);
    __cavm_csr_fatal("LDECX_ABX_TC_CONTROL", 2, a, b, 0, 0, 0, 0);
}

#define typedef_CAVM_LDECX_ABX_TC_CONTROL(a,b) cavm_ldecx_abx_tc_control_t
#define bustype_CAVM_LDECX_ABX_TC_CONTROL(a,b) CSR_TYPE_RSL
#define basename_CAVM_LDECX_ABX_TC_CONTROL(a,b) "LDECX_ABX_TC_CONTROL"
#define device_bar_CAVM_LDECX_ABX_TC_CONTROL(a,b) 0x2 /* PF_BAR2 */
#define busnum_CAVM_LDECX_ABX_TC_CONTROL(a,b) (a)
#define arguments_CAVM_LDECX_ABX_TC_CONTROL(a,b) (a),(b),-1,-1

/**
 * Register (RSL) ldec#_ab#_tc_error
 *
 * LDEC Decoder Error Register
 * This register reports various error conditions.
 *
 * All errors reported in this register are reported as FATAL errors, and the
 * MHBW registers can be inspected to determine the job tag(s) associated with
 * the error(s).
 */
union cavm_ldecx_abx_tc_error
{
    uint64_t u;
    struct cavm_ldecx_abx_tc_error_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_9_63         : 55;
        uint64_t inv_cfg               : 1;  /**< [  8:  8](R/W1C/H) Invalid task configuration -- aborted job. */
        uint64_t reserved_4_7          : 4;
        uint64_t ign_read              : 1;  /**< [  3:  3](R/W1C/H) Ignored a read access while another read was in process. */
        uint64_t inv_read              : 1;  /**< [  2:  2](R/W1C/H) Invalid read access to an out-of-range address. */
        uint64_t inv_write             : 1;  /**< [  1:  1](R/W1C/H) Invalid write access to an out-of-range address. */
        uint64_t inv_start             : 1;  /**< [  0:  0](R/W1C/H) Invalid task start. */
#else /* Word 0 - Little Endian */
        uint64_t inv_start             : 1;  /**< [  0:  0](R/W1C/H) Invalid task start. */
        uint64_t inv_write             : 1;  /**< [  1:  1](R/W1C/H) Invalid write access to an out-of-range address. */
        uint64_t inv_read              : 1;  /**< [  2:  2](R/W1C/H) Invalid read access to an out-of-range address. */
        uint64_t ign_read              : 1;  /**< [  3:  3](R/W1C/H) Ignored a read access while another read was in process. */
        uint64_t reserved_4_7          : 4;
        uint64_t inv_cfg               : 1;  /**< [  8:  8](R/W1C/H) Invalid task configuration -- aborted job. */
        uint64_t reserved_9_63         : 55;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_ldecx_abx_tc_error_s cn; */
};
typedef union cavm_ldecx_abx_tc_error cavm_ldecx_abx_tc_error_t;

static inline uint64_t CAVM_LDECX_ABX_TC_ERROR(uint64_t a, uint64_t b) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_LDECX_ABX_TC_ERROR(uint64_t a, uint64_t b)
{
    if (cavm_is_model(OCTEONTX_CNF20KA) && ((a<=3) && (b<=2)))
        return 0x87e040c01038ll + 0x80000ll * ((a) & 0x3) + 0x10000ll * ((b) & 0x3);
    __cavm_csr_fatal("LDECX_ABX_TC_ERROR", 2, a, b, 0, 0, 0, 0);
}

#define typedef_CAVM_LDECX_ABX_TC_ERROR(a,b) cavm_ldecx_abx_tc_error_t
#define bustype_CAVM_LDECX_ABX_TC_ERROR(a,b) CSR_TYPE_RSL
#define basename_CAVM_LDECX_ABX_TC_ERROR(a,b) "LDECX_ABX_TC_ERROR"
#define device_bar_CAVM_LDECX_ABX_TC_ERROR(a,b) 0x2 /* PF_BAR2 */
#define busnum_CAVM_LDECX_ABX_TC_ERROR(a,b) (a)
#define arguments_CAVM_LDECX_ABX_TC_ERROR(a,b) (a),(b),-1,-1

/**
 * Register (RSL) ldec#_ab#_tc_error_mask
 *
 * LDEC Decoder Core Error Mask Register
 * This register enables internal decoder errors. Errors reported in
 * LDEC()_AB()_TC_ERROR will generate an error signal only when the
 * corresponding bit is set in LDEC()_AB()_TC_ERROR_MASK[ERR_MASK].
 */
union cavm_ldecx_abx_tc_error_mask
{
    uint64_t u;
    struct cavm_ldecx_abx_tc_error_mask_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_32_63        : 32;
        uint64_t err_mask              : 32; /**< [ 31:  0](R/W) Error mask bits. */
#else /* Word 0 - Little Endian */
        uint64_t err_mask              : 32; /**< [ 31:  0](R/W) Error mask bits. */
        uint64_t reserved_32_63        : 32;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_ldecx_abx_tc_error_mask_s cn; */
};
typedef union cavm_ldecx_abx_tc_error_mask cavm_ldecx_abx_tc_error_mask_t;

static inline uint64_t CAVM_LDECX_ABX_TC_ERROR_MASK(uint64_t a, uint64_t b) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_LDECX_ABX_TC_ERROR_MASK(uint64_t a, uint64_t b)
{
    if (cavm_is_model(OCTEONTX_CNF20KA) && ((a<=3) && (b<=2)))
        return 0x87e040c01030ll + 0x80000ll * ((a) & 0x3) + 0x10000ll * ((b) & 0x3);
    __cavm_csr_fatal("LDECX_ABX_TC_ERROR_MASK", 2, a, b, 0, 0, 0, 0);
}

#define typedef_CAVM_LDECX_ABX_TC_ERROR_MASK(a,b) cavm_ldecx_abx_tc_error_mask_t
#define bustype_CAVM_LDECX_ABX_TC_ERROR_MASK(a,b) CSR_TYPE_RSL
#define basename_CAVM_LDECX_ABX_TC_ERROR_MASK(a,b) "LDECX_ABX_TC_ERROR_MASK"
#define device_bar_CAVM_LDECX_ABX_TC_ERROR_MASK(a,b) 0x2 /* PF_BAR2 */
#define busnum_CAVM_LDECX_ABX_TC_ERROR_MASK(a,b) (a)
#define arguments_CAVM_LDECX_ABX_TC_ERROR_MASK(a,b) (a),(b),-1,-1

/**
 * Register (RSL) ldec#_ab#_tc_main_reset
 *
 * LDEC Decoder Reset Register
 * Internal decoder core reset register.
 */
union cavm_ldecx_abx_tc_main_reset
{
    uint64_t u;
    struct cavm_ldecx_abx_tc_main_reset_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_1_63         : 63;
        uint64_t soft_reset            : 1;  /**< [  0:  0](R/W/H) Any write to this register will reset the internal decoder core. */
#else /* Word 0 - Little Endian */
        uint64_t soft_reset            : 1;  /**< [  0:  0](R/W/H) Any write to this register will reset the internal decoder core. */
        uint64_t reserved_1_63         : 63;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_ldecx_abx_tc_main_reset_s cn; */
};
typedef union cavm_ldecx_abx_tc_main_reset cavm_ldecx_abx_tc_main_reset_t;

static inline uint64_t CAVM_LDECX_ABX_TC_MAIN_RESET(uint64_t a, uint64_t b) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_LDECX_ABX_TC_MAIN_RESET(uint64_t a, uint64_t b)
{
    if (cavm_is_model(OCTEONTX_CNF20KA) && ((a<=3) && (b<=2)))
        return 0x87e040c01000ll + 0x80000ll * ((a) & 0x3) + 0x10000ll * ((b) & 0x3);
    __cavm_csr_fatal("LDECX_ABX_TC_MAIN_RESET", 2, a, b, 0, 0, 0, 0);
}

#define typedef_CAVM_LDECX_ABX_TC_MAIN_RESET(a,b) cavm_ldecx_abx_tc_main_reset_t
#define bustype_CAVM_LDECX_ABX_TC_MAIN_RESET(a,b) CSR_TYPE_RSL
#define basename_CAVM_LDECX_ABX_TC_MAIN_RESET(a,b) "LDECX_ABX_TC_MAIN_RESET"
#define device_bar_CAVM_LDECX_ABX_TC_MAIN_RESET(a,b) 0x2 /* PF_BAR2 */
#define busnum_CAVM_LDECX_ABX_TC_MAIN_RESET(a,b) (a)
#define arguments_CAVM_LDECX_ABX_TC_MAIN_RESET(a,b) (a),(b),-1,-1

/**
 * Register (RSL) ldec#_ab#_tc_status
 *
 * LDEC Decoder Status Register
 * This register reports status from the internal decoder core.
 */
union cavm_ldecx_abx_tc_status
{
    uint64_t u;
    struct cavm_ldecx_abx_tc_status_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t monitor_bus           : 32; /**< [ 63: 32](RO/H) core dependent */
        uint64_t reserved_1_31         : 31;
        uint64_t idle                  : 1;  /**< [  0:  0](RO/H) Idle status bit. High means core is idle. */
#else /* Word 0 - Little Endian */
        uint64_t idle                  : 1;  /**< [  0:  0](RO/H) Idle status bit. High means core is idle. */
        uint64_t reserved_1_31         : 31;
        uint64_t monitor_bus           : 32; /**< [ 63: 32](RO/H) core dependent */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_ldecx_abx_tc_status_s cn; */
};
typedef union cavm_ldecx_abx_tc_status cavm_ldecx_abx_tc_status_t;

static inline uint64_t CAVM_LDECX_ABX_TC_STATUS(uint64_t a, uint64_t b) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_LDECX_ABX_TC_STATUS(uint64_t a, uint64_t b)
{
    if (cavm_is_model(OCTEONTX_CNF20KA) && ((a<=3) && (b<=2)))
        return 0x87e040c01020ll + 0x80000ll * ((a) & 0x3) + 0x10000ll * ((b) & 0x3);
    __cavm_csr_fatal("LDECX_ABX_TC_STATUS", 2, a, b, 0, 0, 0, 0);
}

#define typedef_CAVM_LDECX_ABX_TC_STATUS(a,b) cavm_ldecx_abx_tc_status_t
#define bustype_CAVM_LDECX_ABX_TC_STATUS(a,b) CSR_TYPE_RSL
#define basename_CAVM_LDECX_ABX_TC_STATUS(a,b) "LDECX_ABX_TC_STATUS"
#define device_bar_CAVM_LDECX_ABX_TC_STATUS(a,b) 0x2 /* PF_BAR2 */
#define busnum_CAVM_LDECX_ABX_TC_STATUS(a,b) (a)
#define arguments_CAVM_LDECX_ABX_TC_STATUS(a,b) (a),(b),-1,-1

#endif /* __CAVM_CSRS_LDEC_H__ */
