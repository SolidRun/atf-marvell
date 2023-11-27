#ifndef __CAVM_CSRS_EDFT_H__
#define __CAVM_CSRS_EDFT_H__
/* This file is auto-generated. Do not edit */

/***********************license start***********************************
* Copyright (C) 2021-2023 Marvell.
* SPDX-License-Identifier: BSD-3-Clause
* https://spdx.org/licenses
***********************license end**************************************/


/**
 * @file
 *
 * Configuration and status register (CSR) address and type definitions for
 * EDFT.
 *
 * This file is auto generated. Do not edit.
 *
 */

/**
 * Enumeration edft_cp_type_e
 *
 * EDFT LTE Cyclic Prefix Enumeration
 */
#define CAVM_EDFT_CP_TYPE_E_EXTENDED (1)
#define CAVM_EDFT_CP_TYPE_E_NORMAL (0)

/**
 * Structure edft_common_cfg_s
 *
 * EDFT Common Job Configuration Structure
 */
union cavm_edft_common_cfg_s
{
    uint64_t u;
    struct cavm_edft_common_cfg_s_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t task_type             : 2;  /**< [ 63: 62] Type of task to be performed:
                                                                 0 = DFT/IDFT stand-alone task
                                                                 1 = Time Offset Estimation task
                                                                 2 = DMRS generation task
                                                                 3 = PTRS extraction task */
        uint64_t reserved_56_61        : 6;
        uint64_t num_tot_cfg_words     : 6;  /**< [ 55: 50] Number of configuration 64b words (including this common configuration word):
                                                                 For TASK_TYPE=0, NUM_TOT_CFG_WORDS=1
                                                                 For TASK_TYPE=1, if RS_COMB_ENABLE=1, NUM_TOT_CFG_WORDS=7, else NUM_TOT_CFG_WORDS=7+NUM_STREAMS/2
                                                                 For TASK_TYPE=2, NUM_TOT_CFG_WORDS=4
                                                                 For TASK_TYPE=3, NUM_TOT_CFG_WORDS=2 */
        uint64_t reserved_47_49        : 3;
        uint64_t num_streams           : 7;  /**< [ 46: 40] Number of streams
                                                                 For task_type = 1, it is number of antennas processed in one job. All Antennas of one symbol are
                                                                 recommended to be processed in one job. Up to 64 streams are supported
                                                                 For task_type = 3, it is number of layers * symbols processed in one job.
                                                                 All streams shall share the exact same configuration. Up to 64 streams are supported.
                                                                 For task_type = 0 or 2 SW shall always set to 1. */
        uint64_t reserved_34_39        : 6;
        uint64_t dft_enable            : 1;  /**< [ 33: 33] DFT processing enable control field.
                                                                 This field can be used for debugging purpose and DMRS gen mode with dft_enable=0.
                                                                 1 = The DFT engine is enabled.
                                                                 0 = The DFT engine is bypassed.
                                                                 Note: For TOE task this flag does the following:
                                                                 0 = Disable the IDFT block, Power Calculation block, Windowing block and Peak
                                                                 Search block for PUSCH and PUCCH.
                                                                 This bit should be set to 0 for DMRS Type 2 (see Figure 2 3).
                                                                 1 = Enable the IDFT block, Power Calculation block, Windowing block and Peak
                                                                 Search block for PUSCH and PUCCH.
                                                                 This bit should be set to 1 for DMRS Type 1. */
        uint64_t dft_idft_select       : 1;  /**< [ 32: 32] 0 = this block operates as a DFT.
                                                                 1 = this block operates as an IDFT. */
        uint64_t reserved_30_31        : 2;
        uint64_t idft_size_idx         : 6;  /**< [ 29: 24] Index that specifies desired IDFT size based on Table 2-1. See Table 2-1.
                                                                 Note: for TOE mode, idft_size_idx = 53 and 54 are not allowed. */
        uint64_t reserved_21_23        : 3;
        uint64_t dft_rs_last           : 5;  /**< [ 20: 16] DFT/IDFT shifting applied at last stage of DFT/IDFT:
                                                                 _ DFT/IDFT signal gain = 6*(15-dft_rs_last) dB.
                                                                 Recommended meaningful range is: [15,19].
                                                                 Signal output samples outside the 16-bit range (-32768, 32767) are saturated. */
        uint64_t reserved_0_15         : 16;
#else /* Word 0 - Little Endian */
        uint64_t reserved_0_15         : 16;
        uint64_t dft_rs_last           : 5;  /**< [ 20: 16] DFT/IDFT shifting applied at last stage of DFT/IDFT:
                                                                 _ DFT/IDFT signal gain = 6*(15-dft_rs_last) dB.
                                                                 Recommended meaningful range is: [15,19].
                                                                 Signal output samples outside the 16-bit range (-32768, 32767) are saturated. */
        uint64_t reserved_21_23        : 3;
        uint64_t idft_size_idx         : 6;  /**< [ 29: 24] Index that specifies desired IDFT size based on Table 2-1. See Table 2-1.
                                                                 Note: for TOE mode, idft_size_idx = 53 and 54 are not allowed. */
        uint64_t reserved_30_31        : 2;
        uint64_t dft_idft_select       : 1;  /**< [ 32: 32] 0 = this block operates as a DFT.
                                                                 1 = this block operates as an IDFT. */
        uint64_t dft_enable            : 1;  /**< [ 33: 33] DFT processing enable control field.
                                                                 This field can be used for debugging purpose and DMRS gen mode with dft_enable=0.
                                                                 1 = The DFT engine is enabled.
                                                                 0 = The DFT engine is bypassed.
                                                                 Note: For TOE task this flag does the following:
                                                                 0 = Disable the IDFT block, Power Calculation block, Windowing block and Peak
                                                                 Search block for PUSCH and PUCCH.
                                                                 This bit should be set to 0 for DMRS Type 2 (see Figure 2 3).
                                                                 1 = Enable the IDFT block, Power Calculation block, Windowing block and Peak
                                                                 Search block for PUSCH and PUCCH.
                                                                 This bit should be set to 1 for DMRS Type 1. */
        uint64_t reserved_34_39        : 6;
        uint64_t num_streams           : 7;  /**< [ 46: 40] Number of streams
                                                                 For task_type = 1, it is number of antennas processed in one job. All Antennas of one symbol are
                                                                 recommended to be processed in one job. Up to 64 streams are supported
                                                                 For task_type = 3, it is number of layers * symbols processed in one job.
                                                                 All streams shall share the exact same configuration. Up to 64 streams are supported.
                                                                 For task_type = 0 or 2 SW shall always set to 1. */
        uint64_t reserved_47_49        : 3;
        uint64_t num_tot_cfg_words     : 6;  /**< [ 55: 50] Number of configuration 64b words (including this common configuration word):
                                                                 For TASK_TYPE=0, NUM_TOT_CFG_WORDS=1
                                                                 For TASK_TYPE=1, if RS_COMB_ENABLE=1, NUM_TOT_CFG_WORDS=7, else NUM_TOT_CFG_WORDS=7+NUM_STREAMS/2
                                                                 For TASK_TYPE=2, NUM_TOT_CFG_WORDS=4
                                                                 For TASK_TYPE=3, NUM_TOT_CFG_WORDS=2 */
        uint64_t reserved_56_61        : 6;
        uint64_t task_type             : 2;  /**< [ 63: 62] Type of task to be performed:
                                                                 0 = DFT/IDFT stand-alone task
                                                                 1 = Time Offset Estimation task
                                                                 2 = DMRS generation task
                                                                 3 = PTRS extraction task */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_edft_common_cfg_s_s cn; */
};

/**
 * Structure edft_dmrs_cfg_s
 *
 * EDFT DMRS Configuration Structure
 */
union cavm_edft_dmrs_cfg_s
{
    uint64_t u[3];
    struct cavm_edft_dmrs_cfg_s_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_62_63        : 2;
        uint64_t base_seq              : 2;  /**< [ 61: 60] 0 = user-defined sequence
                                                                 1 = PRS + pi/2 BPSK (Low PAPR Type 2 (5.2.3 in [R1]))
                                                                 2 = PRS + QPSK (sec 5.2.1 in [R1])
                                                                 3 = ZC sequence (Low PAPR Type 1 (5.2.2 in [R1])) */
        uint64_t reserved_59           : 1;
        uint64_t length                : 11; /**< [ 58: 48] Number of base sequence sample pairs (even, odd) to be generated.

                                                                 For DMRS task:
                                                                 Length can be any value between 1 and 1650. Refer to sec 4.2.3.3 for details.

                                                                 For TOE task:
                                                                 length is given by equation in sec 2.3.1. */
        uint64_t reserved_47           : 1;
        uint64_t dmrs_pattern          : 3;  /**< [ 46: 44] DMRS RE mapping pattern
                                                                 3'b000 = reserved (unused)
                                                                 3'b001 = 111111111111
                                                                 3'b010 = 101010101010
                                                                 3'b011 = 010101010101
                                                                 3'b100 = 110000110000
                                                                 3'b101 = 001100001100
                                                                 3'b110 = 000011000011
                                                                 3'b111 = 010010010010  (PUCCH format 2) */
        uint64_t pre_dft_upsample      : 1;  /**< [ 43: 43] Zero insertion before DFT
                                                                 0 = no zeros are inserted.

                                                                 DMRS task:
                                                                 1 = A Zero sample is inserted in between every two RS symbols.
                                                                 Only when dft_enable=1, otherwise, ignored.
                                                                 When pre_dft_upsample=1, the first half of DFT output is sent to the RE mapping stage

                                                                 Set = 1 only when DFT size (length/2) is not supported by DFT engine but 2x DFT_size is supported.

                                                                 TOE task:
                                                                 Should be set = 0. */
        uint64_t signature             : 31; /**< [ 42: 12] c_init for base_seq 1, 2
                                                                 {dontcare(8b),adv(1b),q(11b),NZC(11b)} for base_seq 3
                                                                 Nzc should be a prime number less than Mzc (sec 5.2.2.1 in REF1. See the section 5.1.2).
                                                                 q value should be less than NZC */
        uint64_t start_sample_offset   : 12; /**< [ 11:  0] "Start sample offset = RB Offset x num_rs_re_per_rb
                                                                 only for the following 3 configurations:
                                                                 a) PUSCH CP-OFDM mode (max = 274*6 = 1644)
                                                                 b) PUCCH format 3 (including interlace mode). Max = 269*12 = 3228.
                                                                 c) PUSCH DFTs mode only for case of multi clusters.

                                                                 For all other modes:
                                                                 start_sample_offset = 0.
                                                                 Skips the first start_sample_offset samples.
                                                                 This must be an even number.
                                                                 Minimum output sample size after applying this offset: 12

                                                                 DMRS task:
                                                                 When base_seq \> 0 and dft is disabled, start_sample_offset is applied just after
                                                                 RS sequence generation before RE mapping.
                                                                 When DFT is enabled, the start_sample_offset is applied after the RE mapping.

                                                                 DMRS and TOE tasks:
                                                                 start_sample_offset should be less than # of total output samples - 12.

                                                                 TOE task:
                                                                 When dmrs_gen_enable = 0 value of start_sample_offset is ignored." */
#else /* Word 0 - Little Endian */
        uint64_t start_sample_offset   : 12; /**< [ 11:  0] "Start sample offset = RB Offset x num_rs_re_per_rb
                                                                 only for the following 3 configurations:
                                                                 a) PUSCH CP-OFDM mode (max = 274*6 = 1644)
                                                                 b) PUCCH format 3 (including interlace mode). Max = 269*12 = 3228.
                                                                 c) PUSCH DFTs mode only for case of multi clusters.

                                                                 For all other modes:
                                                                 start_sample_offset = 0.
                                                                 Skips the first start_sample_offset samples.
                                                                 This must be an even number.
                                                                 Minimum output sample size after applying this offset: 12

                                                                 DMRS task:
                                                                 When base_seq \> 0 and dft is disabled, start_sample_offset is applied just after
                                                                 RS sequence generation before RE mapping.
                                                                 When DFT is enabled, the start_sample_offset is applied after the RE mapping.

                                                                 DMRS and TOE tasks:
                                                                 start_sample_offset should be less than # of total output samples - 12.

                                                                 TOE task:
                                                                 When dmrs_gen_enable = 0 value of start_sample_offset is ignored." */
        uint64_t signature             : 31; /**< [ 42: 12] c_init for base_seq 1, 2
                                                                 {dontcare(8b),adv(1b),q(11b),NZC(11b)} for base_seq 3
                                                                 Nzc should be a prime number less than Mzc (sec 5.2.2.1 in REF1. See the section 5.1.2).
                                                                 q value should be less than NZC */
        uint64_t pre_dft_upsample      : 1;  /**< [ 43: 43] Zero insertion before DFT
                                                                 0 = no zeros are inserted.

                                                                 DMRS task:
                                                                 1 = A Zero sample is inserted in between every two RS symbols.
                                                                 Only when dft_enable=1, otherwise, ignored.
                                                                 When pre_dft_upsample=1, the first half of DFT output is sent to the RE mapping stage

                                                                 Set = 1 only when DFT size (length/2) is not supported by DFT engine but 2x DFT_size is supported.

                                                                 TOE task:
                                                                 Should be set = 0. */
        uint64_t dmrs_pattern          : 3;  /**< [ 46: 44] DMRS RE mapping pattern
                                                                 3'b000 = reserved (unused)
                                                                 3'b001 = 111111111111
                                                                 3'b010 = 101010101010
                                                                 3'b011 = 010101010101
                                                                 3'b100 = 110000110000
                                                                 3'b101 = 001100001100
                                                                 3'b110 = 000011000011
                                                                 3'b111 = 010010010010  (PUCCH format 2) */
        uint64_t reserved_47           : 1;
        uint64_t length                : 11; /**< [ 58: 48] Number of base sequence sample pairs (even, odd) to be generated.

                                                                 For DMRS task:
                                                                 Length can be any value between 1 and 1650. Refer to sec 4.2.3.3 for details.

                                                                 For TOE task:
                                                                 length is given by equation in sec 2.3.1. */
        uint64_t reserved_59           : 1;
        uint64_t base_seq              : 2;  /**< [ 61: 60] 0 = user-defined sequence
                                                                 1 = PRS + pi/2 BPSK (Low PAPR Type 2 (5.2.3 in [R1]))
                                                                 2 = PRS + QPSK (sec 5.2.1 in [R1])
                                                                 3 = ZC sequence (Low PAPR Type 1 (5.2.2 in [R1])) */
        uint64_t reserved_62_63        : 2;
#endif /* Word 0 - End */
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 1 - Big Endian */
        uint64_t spreading_factor      : 2;  /**< [127:126] Spreading factor: for PUCCH
                                                                 0 = SF1
                                                                 1 = SF2
                                                                 2 = SF4
                                                                 3 = reserved

                                                                 Valid when base_seq = 2. Otherwise spreading_factor should be set to 0.

                                                                 DMRS task:
                                                                 When dft_enable=1, spreading factor is disregarded.

                                                                 TOE task:
                                                                 Spreading factor always considered. */
        uint64_t n_idx                 : 2;  /**< [125:124] Orthogonal sequence index.
                                                                 n per clause 6.3.2.5.2A in [R1].
                                                                 When spreading_factor=0, n_idx is ignored (n_idx is forced to be 0 internally). */
        uint64_t cyclic_shift          : 12; /**< [123:112] Cyclic shift for rsgen_mode 1.
                                                                 Cyclic shift alpha = 2p cyclic_shift/4096. */
        uint64_t user_defined0         : 48; /**< [111: 64] User defined sequence for even numbered samples:
                                                                 Y(n) = exp (j*pi*x(n)/8)), for n even.
                                                                 x(n): 4 bit for each sample.
                                                                 x(n) starts from the lowest 4bits. */
#else /* Word 1 - Little Endian */
        uint64_t user_defined0         : 48; /**< [111: 64] User defined sequence for even numbered samples:
                                                                 Y(n) = exp (j*pi*x(n)/8)), for n even.
                                                                 x(n): 4 bit for each sample.
                                                                 x(n) starts from the lowest 4bits. */
        uint64_t cyclic_shift          : 12; /**< [123:112] Cyclic shift for rsgen_mode 1.
                                                                 Cyclic shift alpha = 2p cyclic_shift/4096. */
        uint64_t n_idx                 : 2;  /**< [125:124] Orthogonal sequence index.
                                                                 n per clause 6.3.2.5.2A in [R1].
                                                                 When spreading_factor=0, n_idx is ignored (n_idx is forced to be 0 internally). */
        uint64_t spreading_factor      : 2;  /**< [127:126] Spreading factor: for PUCCH
                                                                 0 = SF1
                                                                 1 = SF2
                                                                 2 = SF4
                                                                 3 = reserved

                                                                 Valid when base_seq = 2. Otherwise spreading_factor should be set to 0.

                                                                 DMRS task:
                                                                 When dft_enable=1, spreading factor is disregarded.

                                                                 TOE task:
                                                                 Spreading factor always considered. */
#endif /* Word 1 - End */
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 2 - Big Endian */
        uint64_t wt_1                  : 1;  /**< [191:191] OCC1 code bit wt(1) applied in frequency domain as specified in Table 6.4.1.1.3-1 [R1]..
                                                                 0 = corresponds to multiplying by +1.
                                                                 1 = corresponds to multiplying by -1.
                                                                 Note: To disable multiplying by OCC1 set wt_1 = 0.
                                                                 This applies to PUSCH and PUCCH. */
        uint64_t wf_1                  : 1;  /**< [190:190] OCC1 code bit wf(1) applied in frequency domain as specified in Table 6.4.1.1.3-1 [R1]..
                                                                 0 = corresponds to multiplying by +1.
                                                                 1 = corresponds to multiplying by -1.
                                                                 Note: To disable multiplying by OCC1 set wf_1 = 0.
                                                                 This applies to PUSCH and PUCCH. */
        uint64_t weight                : 14; /**< [189:176] Weight for ZC sequence generator round(262144/NZC) */
        uint64_t user_defined1         : 48; /**< [175:128] User defined sequence for even numbered samples:
                                                                 Y(n) = exp (j*pi*x(n)/8)), for n even.
                                                                 x(n): 4 bit for each sample.
                                                                 x(n) starts from the lowest 4bits. */
#else /* Word 2 - Little Endian */
        uint64_t user_defined1         : 48; /**< [175:128] User defined sequence for even numbered samples:
                                                                 Y(n) = exp (j*pi*x(n)/8)), for n even.
                                                                 x(n): 4 bit for each sample.
                                                                 x(n) starts from the lowest 4bits. */
        uint64_t weight                : 14; /**< [189:176] Weight for ZC sequence generator round(262144/NZC) */
        uint64_t wf_1                  : 1;  /**< [190:190] OCC1 code bit wf(1) applied in frequency domain as specified in Table 6.4.1.1.3-1 [R1]..
                                                                 0 = corresponds to multiplying by +1.
                                                                 1 = corresponds to multiplying by -1.
                                                                 Note: To disable multiplying by OCC1 set wf_1 = 0.
                                                                 This applies to PUSCH and PUCCH. */
        uint64_t wt_1                  : 1;  /**< [191:191] OCC1 code bit wt(1) applied in frequency domain as specified in Table 6.4.1.1.3-1 [R1]..
                                                                 0 = corresponds to multiplying by +1.
                                                                 1 = corresponds to multiplying by -1.
                                                                 Note: To disable multiplying by OCC1 set wt_1 = 0.
                                                                 This applies to PUSCH and PUCCH. */
#endif /* Word 2 - End */
    } s;
    /* struct cavm_edft_dmrs_cfg_s_s cn; */
};

/**
 * Structure edft_ptrs_cfg_s
 *
 * EDFT PTRS Configuration Structure
 */
union cavm_edft_ptrs_cfg_s
{
    uint64_t u;
    struct cavm_edft_ptrs_cfg_s_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_63           : 1;
        uint64_t ptrs_mapping_idx      : 3;  /**< [ 62: 60] Index that is used in Table 2 2 to specify number of PTRS groups and number of
                                                                 samples per PTRS group (0-6). */
        uint64_t reserved_0_59         : 60;
#else /* Word 0 - Little Endian */
        uint64_t reserved_0_59         : 60;
        uint64_t ptrs_mapping_idx      : 3;  /**< [ 62: 60] Index that is used in Table 2 2 to specify number of PTRS groups and number of
                                                                 samples per PTRS group (0-6). */
        uint64_t reserved_63           : 1;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_edft_ptrs_cfg_s_s cn; */
};

/**
 * Structure edft_toe_ant_phase_cfg_s
 *
 * EDFT TOE ANT PHASE Configuration Structure
 */
union cavm_edft_toe_ant_phase_cfg_s
{
    uint64_t u;
    struct cavm_edft_toe_ant_phase_cfg_s_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t rs_phase_i_0          : 16; /**< [ 63: 48] Cosine value of the compensation phase used by RS Combiner in Q14 format for antenna 0. */
        uint64_t rs_phase_q_0          : 16; /**< [ 47: 32] Sine value of the compensation phase used by RS Combiner in Q14 format for antenna 0. */
        uint64_t rs_phase_i_1          : 16; /**< [ 31: 16] Cosine value of the compensation phase used by RS Combiner in Q14 format for antenna 1. */
        uint64_t rs_phase_q_1          : 16; /**< [ 15:  0] Sine value of the compensation phase used by RS Combiner in Q14 format for antenna 1. */
#else /* Word 0 - Little Endian */
        uint64_t rs_phase_q_1          : 16; /**< [ 15:  0] Sine value of the compensation phase used by RS Combiner in Q14 format for antenna 1. */
        uint64_t rs_phase_i_1          : 16; /**< [ 31: 16] Cosine value of the compensation phase used by RS Combiner in Q14 format for antenna 1. */
        uint64_t rs_phase_q_0          : 16; /**< [ 47: 32] Sine value of the compensation phase used by RS Combiner in Q14 format for antenna 0. */
        uint64_t rs_phase_i_0          : 16; /**< [ 63: 48] Cosine value of the compensation phase used by RS Combiner in Q14 format for antenna 0. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_edft_toe_ant_phase_cfg_s_s cn; */
};

/**
 * Structure edft_toe_cfg_s
 *
 * EDFT TOE Configuration Structure
 */
union cavm_edft_toe_cfg_s
{
    uint64_t u[3];
    struct cavm_edft_toe_cfg_s_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t dmrs_gen_enable       : 1;  /**< [ 63: 63] Specifies if DMRS Sequence is generated internally inside the TOE task or externally.
                                                                 0 = Read DMRS sequence from SMEM.
                                                                 1 = Generate DMRS sequence internally. */
        uint64_t rs_comb_enable        : 1;  /**< [ 62: 62] RS Combiner Enable:
                                                                 0 = disable RS combiner and all blocks associated with the lower correlator. Refer to Figure 2-2.
                                                                 These blocks are: DMRS Extract, MUX, OCC1 and CORR.
                                                                 Applies only for single DMRS symbols.
                                                                 1 = enable RS combiner and all blocks associated with the lower correlator.
                                                                 Applies only for double DMRS symbols.
                                                                 When DMRS sequence is read from SMEM the user should make sure the samples are
                                                                 16 bits limited to +/-32767. */
        uint64_t fagc_gain_mode        : 1;  /**< [ 61: 61] 0 = F-AGC Gain Calc block computes internally the gain value g_f_agc.
                                                                 1 = F-AGC Gain Calc block  uses for its stage 2 computations the external
                                                                 gain shift value fagc_ext_gain provided as a configuration parameter vs. using g_f_agc. */
        uint64_t wt_1                  : 1;  /**< [ 60: 60] WT_1 for OCC1 block located inside the TOE block. */
        uint64_t reserved_57_59        : 3;
        uint64_t corr_rsh              : 5;  /**< [ 56: 52] Amount of shift at output of multiplier inside Correlator.Range 0-16 */
        uint64_t fagc_sh               : 4;  /**< [ 51: 48] Amount of right shifting from u43 to get u32. Range 0-15 */
        uint64_t reserved_45_47        : 3;
        uint64_t fagc_ext_gain         : 5;  /**< [ 44: 40] External gain value which specifies number of left shifts to be applied by the IDFT
                                                                 on input signal. A value = 0 indicated no gain is applied. Range -16 to 15 */
        uint64_t reserved_38_39        : 2;
        uint64_t fagc_back_off         : 6;  /**< [ 37: 32] Number of right shifts applied by F-AGC Gain Calc when computing its internal gain value g_f_agc. */
        uint64_t reserved_31           : 1;
        uint64_t num_rb                : 9;  /**< [ 30: 22] Number of RBs allocated for UE.
                                                                 For PUSCH in non-contiguous multi-cluster case, length (as number of RBs) of the largest cluster.
                                                                 Upper limit is bounded by DFT maximum size = 3240. */
        uint64_t reserved_0_21         : 22;
#else /* Word 0 - Little Endian */
        uint64_t reserved_0_21         : 22;
        uint64_t num_rb                : 9;  /**< [ 30: 22] Number of RBs allocated for UE.
                                                                 For PUSCH in non-contiguous multi-cluster case, length (as number of RBs) of the largest cluster.
                                                                 Upper limit is bounded by DFT maximum size = 3240. */
        uint64_t reserved_31           : 1;
        uint64_t fagc_back_off         : 6;  /**< [ 37: 32] Number of right shifts applied by F-AGC Gain Calc when computing its internal gain value g_f_agc. */
        uint64_t reserved_38_39        : 2;
        uint64_t fagc_ext_gain         : 5;  /**< [ 44: 40] External gain value which specifies number of left shifts to be applied by the IDFT
                                                                 on input signal. A value = 0 indicated no gain is applied. Range -16 to 15 */
        uint64_t reserved_45_47        : 3;
        uint64_t fagc_sh               : 4;  /**< [ 51: 48] Amount of right shifting from u43 to get u32. Range 0-15 */
        uint64_t corr_rsh              : 5;  /**< [ 56: 52] Amount of shift at output of multiplier inside Correlator.Range 0-16 */
        uint64_t reserved_57_59        : 3;
        uint64_t wt_1                  : 1;  /**< [ 60: 60] WT_1 for OCC1 block located inside the TOE block. */
        uint64_t fagc_gain_mode        : 1;  /**< [ 61: 61] 0 = F-AGC Gain Calc block computes internally the gain value g_f_agc.
                                                                 1 = F-AGC Gain Calc block  uses for its stage 2 computations the external
                                                                 gain shift value fagc_ext_gain provided as a configuration parameter vs. using g_f_agc. */
        uint64_t rs_comb_enable        : 1;  /**< [ 62: 62] RS Combiner Enable:
                                                                 0 = disable RS combiner and all blocks associated with the lower correlator. Refer to Figure 2-2.
                                                                 These blocks are: DMRS Extract, MUX, OCC1 and CORR.
                                                                 Applies only for single DMRS symbols.
                                                                 1 = enable RS combiner and all blocks associated with the lower correlator.
                                                                 Applies only for double DMRS symbols.
                                                                 When DMRS sequence is read from SMEM the user should make sure the samples are
                                                                 16 bits limited to +/-32767. */
        uint64_t dmrs_gen_enable       : 1;  /**< [ 63: 63] Specifies if DMRS Sequence is generated internally inside the TOE task or externally.
                                                                 0 = Read DMRS sequence from SMEM.
                                                                 1 = Generate DMRS sequence internally. */
#endif /* Word 0 - End */
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 1 - Big Endian */
        uint64_t sig_pwr_thresh        : 16; /**< [127:112] Power threshold to decide if a peak is present. */
        uint64_t reserved_110_111      : 2;
        uint64_t left_win_size         : 10; /**< [109:100] Size (in samples) of left window for peak search. Range 1-1023. */
        uint64_t reserved_98_99        : 2;
        uint64_t right_win_size        : 10; /**< [ 97: 88] Size (in samples) of right window for peak search. Range 1-1023. */
        uint64_t reserved_86_87        : 2;
        uint64_t w_ni_start            : 10; /**< [ 85: 76] Sample index of start of the window searching for noise peak. Range 0-1023. */
        uint64_t reserved_74_75        : 2;
        uint64_t w_ni_size             : 10; /**< [ 73: 64] Size, in number of samples, of the window searching for noise peak. Range 1-1023. */
#else /* Word 1 - Little Endian */
        uint64_t w_ni_size             : 10; /**< [ 73: 64] Size, in number of samples, of the window searching for noise peak. Range 1-1023. */
        uint64_t reserved_74_75        : 2;
        uint64_t w_ni_start            : 10; /**< [ 85: 76] Sample index of start of the window searching for noise peak. Range 0-1023. */
        uint64_t reserved_86_87        : 2;
        uint64_t right_win_size        : 10; /**< [ 97: 88] Size (in samples) of right window for peak search. Range 1-1023. */
        uint64_t reserved_98_99        : 2;
        uint64_t left_win_size         : 10; /**< [109:100] Size (in samples) of left window for peak search. Range 1-1023. */
        uint64_t reserved_110_111      : 2;
        uint64_t sig_pwr_thresh        : 16; /**< [127:112] Power threshold to decide if a peak is present. */
#endif /* Word 1 - End */
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 2 - Big Endian */
        uint64_t toe_detection_thresh  : 16; /**< [191:176] Detection threshold for stage 3 of peak search. */
        uint64_t cse_detection_thresh  : 16; /**< [175:160] Detection threshold for stage 3 of peak search. */
        uint64_t reserved_128_159      : 32;
#else /* Word 2 - Little Endian */
        uint64_t reserved_128_159      : 32;
        uint64_t cse_detection_thresh  : 16; /**< [175:160] Detection threshold for stage 3 of peak search. */
        uint64_t toe_detection_thresh  : 16; /**< [191:176] Detection threshold for stage 3 of peak search. */
#endif /* Word 2 - End */
    } s;
    struct cavm_edft_toe_cfg_s_cn
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t dmrs_gen_enable       : 1;  /**< [ 63: 63] Specifies if DMRS Sequence is generated internally inside the TOE task or externally.
                                                                 0 = Read DMRS sequence from SMEM.
                                                                 1 = Generate DMRS sequence internally. */
        uint64_t rs_comb_enable        : 1;  /**< [ 62: 62] RS Combiner Enable:
                                                                 0 = disable RS combiner and all blocks associated with the lower correlator. Refer to Figure 2-2.
                                                                 These blocks are: DMRS Extract, MUX, OCC1 and CORR.
                                                                 Applies only for single DMRS symbols.
                                                                 1 = enable RS combiner and all blocks associated with the lower correlator.
                                                                 Applies only for double DMRS symbols.
                                                                 When DMRS sequence is read from SMEM the user should make sure the samples are
                                                                 16 bits limited to +/-32767. */
        uint64_t fagc_gain_mode        : 1;  /**< [ 61: 61] 0 = F-AGC Gain Calc block computes internally the gain value g_f_agc.
                                                                 1 = F-AGC Gain Calc block  uses for its stage 2 computations the external
                                                                 gain shift value fagc_ext_gain provided as a configuration parameter vs. using g_f_agc. */
        uint64_t wt_1                  : 1;  /**< [ 60: 60] WT_1 for OCC1 block located inside the TOE block. */
        uint64_t reserved_59           : 1;
        uint64_t reserved_57_58        : 2;
        uint64_t corr_rsh              : 5;  /**< [ 56: 52] Amount of shift at output of multiplier inside Correlator.Range 0-16 */
        uint64_t fagc_sh               : 4;  /**< [ 51: 48] Amount of right shifting from u43 to get u32. Range 0-15 */
        uint64_t reserved_45_47        : 3;
        uint64_t fagc_ext_gain         : 5;  /**< [ 44: 40] External gain value which specifies number of left shifts to be applied by the IDFT
                                                                 on input signal. A value = 0 indicated no gain is applied. Range -16 to 15 */
        uint64_t reserved_38_39        : 2;
        uint64_t fagc_back_off         : 6;  /**< [ 37: 32] Number of right shifts applied by F-AGC Gain Calc when computing its internal gain value g_f_agc. */
        uint64_t reserved_31           : 1;
        uint64_t num_rb                : 9;  /**< [ 30: 22] Number of RBs allocated for UE.
                                                                 For PUSCH in non-contiguous multi-cluster case, length (as number of RBs) of the largest cluster.
                                                                 Upper limit is bounded by DFT maximum size = 3240. */
        uint64_t reserved_0_21         : 22;
#else /* Word 0 - Little Endian */
        uint64_t reserved_0_21         : 22;
        uint64_t num_rb                : 9;  /**< [ 30: 22] Number of RBs allocated for UE.
                                                                 For PUSCH in non-contiguous multi-cluster case, length (as number of RBs) of the largest cluster.
                                                                 Upper limit is bounded by DFT maximum size = 3240. */
        uint64_t reserved_31           : 1;
        uint64_t fagc_back_off         : 6;  /**< [ 37: 32] Number of right shifts applied by F-AGC Gain Calc when computing its internal gain value g_f_agc. */
        uint64_t reserved_38_39        : 2;
        uint64_t fagc_ext_gain         : 5;  /**< [ 44: 40] External gain value which specifies number of left shifts to be applied by the IDFT
                                                                 on input signal. A value = 0 indicated no gain is applied. Range -16 to 15 */
        uint64_t reserved_45_47        : 3;
        uint64_t fagc_sh               : 4;  /**< [ 51: 48] Amount of right shifting from u43 to get u32. Range 0-15 */
        uint64_t corr_rsh              : 5;  /**< [ 56: 52] Amount of shift at output of multiplier inside Correlator.Range 0-16 */
        uint64_t reserved_57_58        : 2;
        uint64_t reserved_59           : 1;
        uint64_t wt_1                  : 1;  /**< [ 60: 60] WT_1 for OCC1 block located inside the TOE block. */
        uint64_t fagc_gain_mode        : 1;  /**< [ 61: 61] 0 = F-AGC Gain Calc block computes internally the gain value g_f_agc.
                                                                 1 = F-AGC Gain Calc block  uses for its stage 2 computations the external
                                                                 gain shift value fagc_ext_gain provided as a configuration parameter vs. using g_f_agc. */
        uint64_t rs_comb_enable        : 1;  /**< [ 62: 62] RS Combiner Enable:
                                                                 0 = disable RS combiner and all blocks associated with the lower correlator. Refer to Figure 2-2.
                                                                 These blocks are: DMRS Extract, MUX, OCC1 and CORR.
                                                                 Applies only for single DMRS symbols.
                                                                 1 = enable RS combiner and all blocks associated with the lower correlator.
                                                                 Applies only for double DMRS symbols.
                                                                 When DMRS sequence is read from SMEM the user should make sure the samples are
                                                                 16 bits limited to +/-32767. */
        uint64_t dmrs_gen_enable       : 1;  /**< [ 63: 63] Specifies if DMRS Sequence is generated internally inside the TOE task or externally.
                                                                 0 = Read DMRS sequence from SMEM.
                                                                 1 = Generate DMRS sequence internally. */
#endif /* Word 0 - End */
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 1 - Big Endian */
        uint64_t sig_pwr_thresh        : 16; /**< [127:112] Power threshold to decide if a peak is present. */
        uint64_t reserved_110_111      : 2;
        uint64_t left_win_size         : 10; /**< [109:100] Size (in samples) of left window for peak search. Range 1-1023. */
        uint64_t reserved_98_99        : 2;
        uint64_t right_win_size        : 10; /**< [ 97: 88] Size (in samples) of right window for peak search. Range 1-1023. */
        uint64_t reserved_86_87        : 2;
        uint64_t w_ni_start            : 10; /**< [ 85: 76] Sample index of start of the window searching for noise peak. Range 0-1023. */
        uint64_t reserved_74_75        : 2;
        uint64_t w_ni_size             : 10; /**< [ 73: 64] Size, in number of samples, of the window searching for noise peak. Range 1-1023. */
#else /* Word 1 - Little Endian */
        uint64_t w_ni_size             : 10; /**< [ 73: 64] Size, in number of samples, of the window searching for noise peak. Range 1-1023. */
        uint64_t reserved_74_75        : 2;
        uint64_t w_ni_start            : 10; /**< [ 85: 76] Sample index of start of the window searching for noise peak. Range 0-1023. */
        uint64_t reserved_86_87        : 2;
        uint64_t right_win_size        : 10; /**< [ 97: 88] Size (in samples) of right window for peak search. Range 1-1023. */
        uint64_t reserved_98_99        : 2;
        uint64_t left_win_size         : 10; /**< [109:100] Size (in samples) of left window for peak search. Range 1-1023. */
        uint64_t reserved_110_111      : 2;
        uint64_t sig_pwr_thresh        : 16; /**< [127:112] Power threshold to decide if a peak is present. */
#endif /* Word 1 - End */
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 2 - Big Endian */
        uint64_t toe_detection_thresh  : 16; /**< [191:176] Detection threshold for stage 3 of peak search. */
        uint64_t cse_detection_thresh  : 16; /**< [175:160] Detection threshold for stage 3 of peak search. */
        uint64_t reserved_128_159      : 32;
#else /* Word 2 - Little Endian */
        uint64_t reserved_128_159      : 32;
        uint64_t cse_detection_thresh  : 16; /**< [175:160] Detection threshold for stage 3 of peak search. */
        uint64_t toe_detection_thresh  : 16; /**< [191:176] Detection threshold for stage 3 of peak search. */
#endif /* Word 2 - End */
    } cn;
};

/**
 * Register (RSL) edft#_ab#_control
 *
 * EDFT Control Register
 */
union cavm_edftx_abx_control
{
    uint64_t u;
    struct cavm_edftx_abx_control_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t jobid2                : 16; /**< [ 63: 48](R/W/H) Job ID for slot 2. */
        uint64_t jobid1                : 16; /**< [ 47: 32](R/W/H) Job ID for slot 1. */
        uint64_t jobid0                : 16; /**< [ 31: 16](R/W/H) Job ID for slot 0. */
        uint64_t reserved_4_15         : 12;
        uint64_t start3                : 1;  /**< [  3:  3](R/W/H) Start processing job in slot 3. */
        uint64_t start2                : 1;  /**< [  2:  2](R/W/H) Start processing job in slot 2. */
        uint64_t start1                : 1;  /**< [  1:  1](R/W/H) Start processing job in slot 1. */
        uint64_t start0                : 1;  /**< [  0:  0](R/W/H) Start processing job in slot 0. */
#else /* Word 0 - Little Endian */
        uint64_t start0                : 1;  /**< [  0:  0](R/W/H) Start processing job in slot 0. */
        uint64_t start1                : 1;  /**< [  1:  1](R/W/H) Start processing job in slot 1. */
        uint64_t start2                : 1;  /**< [  2:  2](R/W/H) Start processing job in slot 2. */
        uint64_t start3                : 1;  /**< [  3:  3](R/W/H) Start processing job in slot 3. */
        uint64_t reserved_4_15         : 12;
        uint64_t jobid0                : 16; /**< [ 31: 16](R/W/H) Job ID for slot 0. */
        uint64_t jobid1                : 16; /**< [ 47: 32](R/W/H) Job ID for slot 1. */
        uint64_t jobid2                : 16; /**< [ 63: 48](R/W/H) Job ID for slot 2. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_edftx_abx_control_s cn; */
};
typedef union cavm_edftx_abx_control cavm_edftx_abx_control_t;

static inline uint64_t CAVM_EDFTX_ABX_CONTROL(uint64_t a, uint64_t b) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_EDFTX_ABX_CONTROL(uint64_t a, uint64_t b)
{
    if ((a<=1) && (b<=1))
        return 0x87e041c00000ll + 0x80000ll * ((a) & 0x1) + 0x10000ll * ((b) & 0x1);
    __cavm_csr_fatal("EDFTX_ABX_CONTROL", 2, a, b, 0, 0, 0, 0);
}

#define typedef_CAVM_EDFTX_ABX_CONTROL(a,b) cavm_edftx_abx_control_t
#define bustype_CAVM_EDFTX_ABX_CONTROL(a,b) CSR_TYPE_RSL
#define basename_CAVM_EDFTX_ABX_CONTROL(a,b) "EDFTX_ABX_CONTROL"
#define busnum_CAVM_EDFTX_ABX_CONTROL(a,b) (a)
#define arguments_CAVM_EDFTX_ABX_CONTROL(a,b) (a),(b),-1,-1

/**
 * Register (RSL) edft#_ab#_control1
 *
 * EDFT Control1 Register
 */
union cavm_edftx_abx_control1
{
    uint64_t u;
    struct cavm_edftx_abx_control1_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_16_63        : 48;
        uint64_t jobid3                : 16; /**< [ 15:  0](R/W/H) Job ID for slot 3. */
#else /* Word 0 - Little Endian */
        uint64_t jobid3                : 16; /**< [ 15:  0](R/W/H) Job ID for slot 3. */
        uint64_t reserved_16_63        : 48;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_edftx_abx_control1_s cn; */
};
typedef union cavm_edftx_abx_control1 cavm_edftx_abx_control1_t;

static inline uint64_t CAVM_EDFTX_ABX_CONTROL1(uint64_t a, uint64_t b) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_EDFTX_ABX_CONTROL1(uint64_t a, uint64_t b)
{
    if ((a<=1) && (b<=1))
        return 0x87e041c00008ll + 0x80000ll * ((a) & 0x1) + 0x10000ll * ((b) & 0x1);
    __cavm_csr_fatal("EDFTX_ABX_CONTROL1", 2, a, b, 0, 0, 0, 0);
}

#define typedef_CAVM_EDFTX_ABX_CONTROL1(a,b) cavm_edftx_abx_control1_t
#define bustype_CAVM_EDFTX_ABX_CONTROL1(a,b) CSR_TYPE_RSL
#define basename_CAVM_EDFTX_ABX_CONTROL1(a,b) "EDFTX_ABX_CONTROL1"
#define busnum_CAVM_EDFTX_ABX_CONTROL1(a,b) (a)
#define arguments_CAVM_EDFTX_ABX_CONTROL1(a,b) (a),(b),-1,-1

/**
 * Register (RSL) edft#_ab#_error_enable0
 *
 * EDFT Error Enable 0 Register
 * This register enables error reporting for read overflow/underflow errors.
 */
union cavm_edftx_abx_error_enable0
{
    uint64_t u;
    struct cavm_edftx_abx_error_enable0_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_5_63         : 59;
        uint64_t rp0_of_en             : 1;  /**< [  4:  4](R/W) Read port 0 overflow enable. */
        uint64_t reserved_1_3          : 3;
        uint64_t rp0_uf_en             : 1;  /**< [  0:  0](R/W) Read Port 0 underflow enable. */
#else /* Word 0 - Little Endian */
        uint64_t rp0_uf_en             : 1;  /**< [  0:  0](R/W) Read Port 0 underflow enable. */
        uint64_t reserved_1_3          : 3;
        uint64_t rp0_of_en             : 1;  /**< [  4:  4](R/W) Read port 0 overflow enable. */
        uint64_t reserved_5_63         : 59;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_edftx_abx_error_enable0_s cn; */
};
typedef union cavm_edftx_abx_error_enable0 cavm_edftx_abx_error_enable0_t;

static inline uint64_t CAVM_EDFTX_ABX_ERROR_ENABLE0(uint64_t a, uint64_t b) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_EDFTX_ABX_ERROR_ENABLE0(uint64_t a, uint64_t b)
{
    if ((a<=1) && (b<=1))
        return 0x87e041c00040ll + 0x80000ll * ((a) & 0x1) + 0x10000ll * ((b) & 0x1);
    __cavm_csr_fatal("EDFTX_ABX_ERROR_ENABLE0", 2, a, b, 0, 0, 0, 0);
}

#define typedef_CAVM_EDFTX_ABX_ERROR_ENABLE0(a,b) cavm_edftx_abx_error_enable0_t
#define bustype_CAVM_EDFTX_ABX_ERROR_ENABLE0(a,b) CSR_TYPE_RSL
#define basename_CAVM_EDFTX_ABX_ERROR_ENABLE0(a,b) "EDFTX_ABX_ERROR_ENABLE0"
#define busnum_CAVM_EDFTX_ABX_ERROR_ENABLE0(a,b) (a)
#define arguments_CAVM_EDFTX_ABX_ERROR_ENABLE0(a,b) (a),(b),-1,-1

/**
 * Register (RSL) edft#_ab#_error_source0
 *
 * EDFT Error Source 0 Register
 * This register indicates the source of read overflow/underflow errors.
 */
union cavm_edftx_abx_error_source0
{
    uint64_t u;
    struct cavm_edftx_abx_error_source0_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_32_63        : 32;
        uint64_t rp0_jid               : 16; /**< [ 31: 16](RO/H) Job ID of the job which reported the overflow/underflow error on read
                                                                 port 0. */
        uint64_t reserved_5_15         : 11;
        uint64_t rp0_of                : 1;  /**< [  4:  4](R/W1C/H) Read port 0 overflow. */
        uint64_t reserved_1_3          : 3;
        uint64_t rp0_uf                : 1;  /**< [  0:  0](R/W1C/H) Read port 0 underflow. */
#else /* Word 0 - Little Endian */
        uint64_t rp0_uf                : 1;  /**< [  0:  0](R/W1C/H) Read port 0 underflow. */
        uint64_t reserved_1_3          : 3;
        uint64_t rp0_of                : 1;  /**< [  4:  4](R/W1C/H) Read port 0 overflow. */
        uint64_t reserved_5_15         : 11;
        uint64_t rp0_jid               : 16; /**< [ 31: 16](RO/H) Job ID of the job which reported the overflow/underflow error on read
                                                                 port 0. */
        uint64_t reserved_32_63        : 32;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_edftx_abx_error_source0_s cn; */
};
typedef union cavm_edftx_abx_error_source0 cavm_edftx_abx_error_source0_t;

static inline uint64_t CAVM_EDFTX_ABX_ERROR_SOURCE0(uint64_t a, uint64_t b) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_EDFTX_ABX_ERROR_SOURCE0(uint64_t a, uint64_t b)
{
    if ((a<=1) && (b<=1))
        return 0x87e041c00030ll + 0x80000ll * ((a) & 0x1) + 0x10000ll * ((b) & 0x1);
    __cavm_csr_fatal("EDFTX_ABX_ERROR_SOURCE0", 2, a, b, 0, 0, 0, 0);
}

#define typedef_CAVM_EDFTX_ABX_ERROR_SOURCE0(a,b) cavm_edftx_abx_error_source0_t
#define bustype_CAVM_EDFTX_ABX_ERROR_SOURCE0(a,b) CSR_TYPE_RSL
#define basename_CAVM_EDFTX_ABX_ERROR_SOURCE0(a,b) "EDFTX_ABX_ERROR_SOURCE0"
#define busnum_CAVM_EDFTX_ABX_ERROR_SOURCE0(a,b) (a)
#define arguments_CAVM_EDFTX_ABX_ERROR_SOURCE0(a,b) (a),(b),-1,-1

/**
 * Register (RSL) edft#_ab#_hab_jcfg0_ram#_data
 *
 * EDFT HAB Job Configuration 0 RAM Register
 * This register range accesses the job configuration RAM for slot 0.
 */
union cavm_edftx_abx_hab_jcfg0_ramx_data
{
    uint64_t u;
    struct cavm_edftx_abx_hab_jcfg0_ramx_data_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t entry                 : 64; /**< [ 63:  0](R/W/H) Job configuration RAM entry. */
#else /* Word 0 - Little Endian */
        uint64_t entry                 : 64; /**< [ 63:  0](R/W/H) Job configuration RAM entry. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_edftx_abx_hab_jcfg0_ramx_data_s cn; */
};
typedef union cavm_edftx_abx_hab_jcfg0_ramx_data cavm_edftx_abx_hab_jcfg0_ramx_data_t;

static inline uint64_t CAVM_EDFTX_ABX_HAB_JCFG0_RAMX_DATA(uint64_t a, uint64_t b, uint64_t c) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_EDFTX_ABX_HAB_JCFG0_RAMX_DATA(uint64_t a, uint64_t b, uint64_t c)
{
    if ((a<=1) && (b<=1) && (c<=47))
        return 0x87e041c02000ll + 0x80000ll * ((a) & 0x1) + 0x10000ll * ((b) & 0x1) + 8ll * ((c) & 0x3f);
    __cavm_csr_fatal("EDFTX_ABX_HAB_JCFG0_RAMX_DATA", 3, a, b, c, 0, 0, 0);
}

#define typedef_CAVM_EDFTX_ABX_HAB_JCFG0_RAMX_DATA(a,b,c) cavm_edftx_abx_hab_jcfg0_ramx_data_t
#define bustype_CAVM_EDFTX_ABX_HAB_JCFG0_RAMX_DATA(a,b,c) CSR_TYPE_RSL
#define basename_CAVM_EDFTX_ABX_HAB_JCFG0_RAMX_DATA(a,b,c) "EDFTX_ABX_HAB_JCFG0_RAMX_DATA"
#define busnum_CAVM_EDFTX_ABX_HAB_JCFG0_RAMX_DATA(a,b,c) (a)
#define arguments_CAVM_EDFTX_ABX_HAB_JCFG0_RAMX_DATA(a,b,c) (a),(b),(c),-1

/**
 * Register (RSL) edft#_ab#_hab_jcfg1_ram#_data
 *
 * EDFT HAB Job Configuration 1 RAM Register
 * This register range accesses the job configuration RAM for slot 1.
 */
union cavm_edftx_abx_hab_jcfg1_ramx_data
{
    uint64_t u;
    struct cavm_edftx_abx_hab_jcfg1_ramx_data_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t entry                 : 64; /**< [ 63:  0](R/W/H) Job configuration RAM entry. */
#else /* Word 0 - Little Endian */
        uint64_t entry                 : 64; /**< [ 63:  0](R/W/H) Job configuration RAM entry. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_edftx_abx_hab_jcfg1_ramx_data_s cn; */
};
typedef union cavm_edftx_abx_hab_jcfg1_ramx_data cavm_edftx_abx_hab_jcfg1_ramx_data_t;

static inline uint64_t CAVM_EDFTX_ABX_HAB_JCFG1_RAMX_DATA(uint64_t a, uint64_t b, uint64_t c) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_EDFTX_ABX_HAB_JCFG1_RAMX_DATA(uint64_t a, uint64_t b, uint64_t c)
{
    if ((a<=1) && (b<=1) && (c<=47))
        return 0x87e041c04000ll + 0x80000ll * ((a) & 0x1) + 0x10000ll * ((b) & 0x1) + 8ll * ((c) & 0x3f);
    __cavm_csr_fatal("EDFTX_ABX_HAB_JCFG1_RAMX_DATA", 3, a, b, c, 0, 0, 0);
}

#define typedef_CAVM_EDFTX_ABX_HAB_JCFG1_RAMX_DATA(a,b,c) cavm_edftx_abx_hab_jcfg1_ramx_data_t
#define bustype_CAVM_EDFTX_ABX_HAB_JCFG1_RAMX_DATA(a,b,c) CSR_TYPE_RSL
#define basename_CAVM_EDFTX_ABX_HAB_JCFG1_RAMX_DATA(a,b,c) "EDFTX_ABX_HAB_JCFG1_RAMX_DATA"
#define busnum_CAVM_EDFTX_ABX_HAB_JCFG1_RAMX_DATA(a,b,c) (a)
#define arguments_CAVM_EDFTX_ABX_HAB_JCFG1_RAMX_DATA(a,b,c) (a),(b),(c),-1

/**
 * Register (RSL) edft#_ab#_hab_jcfg2_ram#_data
 *
 * EDFT HAB Job Configuration 2 RAM Register
 * This register range accesses the job configuration RAM for slot 2.
 */
union cavm_edftx_abx_hab_jcfg2_ramx_data
{
    uint64_t u;
    struct cavm_edftx_abx_hab_jcfg2_ramx_data_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t entry                 : 64; /**< [ 63:  0](R/W/H) Job configuration RAM entry. */
#else /* Word 0 - Little Endian */
        uint64_t entry                 : 64; /**< [ 63:  0](R/W/H) Job configuration RAM entry. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_edftx_abx_hab_jcfg2_ramx_data_s cn; */
};
typedef union cavm_edftx_abx_hab_jcfg2_ramx_data cavm_edftx_abx_hab_jcfg2_ramx_data_t;

static inline uint64_t CAVM_EDFTX_ABX_HAB_JCFG2_RAMX_DATA(uint64_t a, uint64_t b, uint64_t c) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_EDFTX_ABX_HAB_JCFG2_RAMX_DATA(uint64_t a, uint64_t b, uint64_t c)
{
    if ((a<=1) && (b<=1) && (c<=47))
        return 0x87e041c06000ll + 0x80000ll * ((a) & 0x1) + 0x10000ll * ((b) & 0x1) + 8ll * ((c) & 0x3f);
    __cavm_csr_fatal("EDFTX_ABX_HAB_JCFG2_RAMX_DATA", 3, a, b, c, 0, 0, 0);
}

#define typedef_CAVM_EDFTX_ABX_HAB_JCFG2_RAMX_DATA(a,b,c) cavm_edftx_abx_hab_jcfg2_ramx_data_t
#define bustype_CAVM_EDFTX_ABX_HAB_JCFG2_RAMX_DATA(a,b,c) CSR_TYPE_RSL
#define basename_CAVM_EDFTX_ABX_HAB_JCFG2_RAMX_DATA(a,b,c) "EDFTX_ABX_HAB_JCFG2_RAMX_DATA"
#define busnum_CAVM_EDFTX_ABX_HAB_JCFG2_RAMX_DATA(a,b,c) (a)
#define arguments_CAVM_EDFTX_ABX_HAB_JCFG2_RAMX_DATA(a,b,c) (a),(b),(c),-1

/**
 * Register (RSL) edft#_ab#_hab_jcfg3_ram#_data
 *
 * EDFT HAB Job Configuration 3 RAM Register
 * This register range accesses the job configuration RAM for slot 3.
 */
union cavm_edftx_abx_hab_jcfg3_ramx_data
{
    uint64_t u;
    struct cavm_edftx_abx_hab_jcfg3_ramx_data_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t entry                 : 64; /**< [ 63:  0](R/W/H) Job configuration RAM entry. */
#else /* Word 0 - Little Endian */
        uint64_t entry                 : 64; /**< [ 63:  0](R/W/H) Job configuration RAM entry. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_edftx_abx_hab_jcfg3_ramx_data_s cn; */
};
typedef union cavm_edftx_abx_hab_jcfg3_ramx_data cavm_edftx_abx_hab_jcfg3_ramx_data_t;

static inline uint64_t CAVM_EDFTX_ABX_HAB_JCFG3_RAMX_DATA(uint64_t a, uint64_t b, uint64_t c) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_EDFTX_ABX_HAB_JCFG3_RAMX_DATA(uint64_t a, uint64_t b, uint64_t c)
{
    if ((a<=1) && (b<=1) && (c<=47))
        return 0x87e041c08000ll + 0x80000ll * ((a) & 0x1) + 0x10000ll * ((b) & 0x1) + 8ll * ((c) & 0x3f);
    __cavm_csr_fatal("EDFTX_ABX_HAB_JCFG3_RAMX_DATA", 3, a, b, c, 0, 0, 0);
}

#define typedef_CAVM_EDFTX_ABX_HAB_JCFG3_RAMX_DATA(a,b,c) cavm_edftx_abx_hab_jcfg3_ramx_data_t
#define bustype_CAVM_EDFTX_ABX_HAB_JCFG3_RAMX_DATA(a,b,c) CSR_TYPE_RSL
#define basename_CAVM_EDFTX_ABX_HAB_JCFG3_RAMX_DATA(a,b,c) "EDFTX_ABX_HAB_JCFG3_RAMX_DATA"
#define busnum_CAVM_EDFTX_ABX_HAB_JCFG3_RAMX_DATA(a,b,c) (a)
#define arguments_CAVM_EDFTX_ABX_HAB_JCFG3_RAMX_DATA(a,b,c) (a),(b),(c),-1

/**
 * Register (RSL) edft#_ab#_status
 *
 * EDFT Status Register
 */
union cavm_edftx_abx_status
{
    uint64_t u;
    struct cavm_edftx_abx_status_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_5_63         : 59;
        uint64_t ready                 : 1;  /**< [  4:  4](RO/H) When set, the TDEC HAB is ready to receive the next job. */
        uint64_t status3               : 1;  /**< [  3:  3](RO/H) When set, slot 3 is busy processing a job. */
        uint64_t status2               : 1;  /**< [  2:  2](RO/H) When set, slot 2 is busy processing a job. */
        uint64_t status1               : 1;  /**< [  1:  1](RO/H) When set, slot 1 is busy processing a job. */
        uint64_t status0               : 1;  /**< [  0:  0](RO/H) When set, slot 0 is busy processing a job. */
#else /* Word 0 - Little Endian */
        uint64_t status0               : 1;  /**< [  0:  0](RO/H) When set, slot 0 is busy processing a job. */
        uint64_t status1               : 1;  /**< [  1:  1](RO/H) When set, slot 1 is busy processing a job. */
        uint64_t status2               : 1;  /**< [  2:  2](RO/H) When set, slot 2 is busy processing a job. */
        uint64_t status3               : 1;  /**< [  3:  3](RO/H) When set, slot 3 is busy processing a job. */
        uint64_t ready                 : 1;  /**< [  4:  4](RO/H) When set, the TDEC HAB is ready to receive the next job. */
        uint64_t reserved_5_63         : 59;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_edftx_abx_status_s cn; */
};
typedef union cavm_edftx_abx_status cavm_edftx_abx_status_t;

static inline uint64_t CAVM_EDFTX_ABX_STATUS(uint64_t a, uint64_t b) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_EDFTX_ABX_STATUS(uint64_t a, uint64_t b)
{
    if ((a<=1) && (b<=1))
        return 0x87e041c00018ll + 0x80000ll * ((a) & 0x1) + 0x10000ll * ((b) & 0x1);
    __cavm_csr_fatal("EDFTX_ABX_STATUS", 2, a, b, 0, 0, 0, 0);
}

#define typedef_CAVM_EDFTX_ABX_STATUS(a,b) cavm_edftx_abx_status_t
#define bustype_CAVM_EDFTX_ABX_STATUS(a,b) CSR_TYPE_RSL
#define basename_CAVM_EDFTX_ABX_STATUS(a,b) "EDFTX_ABX_STATUS"
#define busnum_CAVM_EDFTX_ABX_STATUS(a,b) (a)
#define arguments_CAVM_EDFTX_ABX_STATUS(a,b) (a),(b),-1,-1

#endif /* __CAVM_CSRS_EDFT_H__ */
