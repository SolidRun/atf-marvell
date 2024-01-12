#ifndef __CAVM_CSRS_ECMP_H__
#define __CAVM_CSRS_ECMP_H__
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
 * ECMP.
 *
 * This file is auto generated. Do not edit.
 *
 */

/**
 * Enumeration ecmp_bar_e
 */
#define CAVM_ECMP_BAR_E_ECMPX_PF_BAR2(a) (0xc00840600000ll + 0x100000000ll * (a))
#define CAVM_ECMP_BAR_E_ECMPX_PF_BAR2_SIZE 0x40000ull

/**
 * Enumeration ecpri_comp_meth_e
 *
 * eCPRI Compression Method Enumeration
 * Enumerates values of ECPRI_SECTION_HDR_SW_S[UD_COMP_METH],
 * ECMP_JDX()_CFG[COMP_METH], and EDEC_JDX()_CFG[COMP_METH].
 */
#define CAVM_ECPRI_COMP_METH_E_BFP (1)
#define CAVM_ECPRI_COMP_METH_E_BFP_SRM (5)
#define CAVM_ECPRI_COMP_METH_E_MOD (4)
#define CAVM_ECPRI_COMP_METH_E_MOD_SRM (6)
#define CAVM_ECPRI_COMP_METH_E_MU_LAW (3)
#define CAVM_ECPRI_COMP_METH_E_NO_COMP (0)

/**
 * Structure ecmp_mu_law_hdr_s
 *
 * ECMP Mu-Law Compression Header Structure
 * One or more instances of this structure follow each section's
 * ECPRI_SECTION_HDR_SW_S in the packet header provided by software. Each
 * ECMP_MU_LAW_HDR_S provides the compressed bit width parameter (compBitWidth)
 * for up to eight PRBs. Thus, the number of instances of this structure is
 * ECPRI_SECTION_HDR_SW_S[NUM_PRB]/8, rounded up to the nearest integer.
 *
 * When the number of PRBs in the section is not a multiple of 8, unused
 * compBitWidth values in the last instance of this structure must be zero. For
 * example, if the number of PRBs is 14, ECPRI_SECTION_HDR_SW_S will be followed
 * by two instances of this structure, and [COMP_BIT_WIDTH6] and [COMP_BIT_WIDTH7]
 * in the second instance must be zero.
 */
union cavm_ecmp_mu_law_hdr_s
{
    uint64_t u;
    struct cavm_ecmp_mu_law_hdr_s_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_60_63        : 4;
        uint64_t comp_bit_width0       : 4;  /**< [ 59: 56] Compressed bit width of each I and Q sample in 1st PRB. */
        uint64_t reserved_52_55        : 4;
        uint64_t comp_bit_width1       : 4;  /**< [ 51: 48] Compressed bit width of each I and Q sample in 2nd PRB. */
        uint64_t reserved_44_47        : 4;
        uint64_t comp_bit_width2       : 4;  /**< [ 43: 40] Compressed bit width of each I and Q sample in 3rd PRB. */
        uint64_t reserved_36_39        : 4;
        uint64_t comp_bit_width3       : 4;  /**< [ 35: 32] Compressed bit width of each I and Q sample in 4th PRB. */
        uint64_t reserved_28_31        : 4;
        uint64_t comp_bit_width4       : 4;  /**< [ 27: 24] Compressed bit width of each I and Q sample in 5th PRB. */
        uint64_t reserved_20_23        : 4;
        uint64_t comp_bit_width5       : 4;  /**< [ 19: 16] Compressed bit width of each I and Q sample in 6th PRB. */
        uint64_t reserved_12_15        : 4;
        uint64_t comp_bit_width6       : 4;  /**< [ 11:  8] Compressed bit width of each I and Q sample in 7th PRB. */
        uint64_t reserved_4_7          : 4;
        uint64_t comp_bit_width7       : 4;  /**< [  3:  0] Compressed bit width of each I and Q sample in 8th PRB. */
#else /* Word 0 - Little Endian */
        uint64_t comp_bit_width7       : 4;  /**< [  3:  0] Compressed bit width of each I and Q sample in 8th PRB. */
        uint64_t reserved_4_7          : 4;
        uint64_t comp_bit_width6       : 4;  /**< [ 11:  8] Compressed bit width of each I and Q sample in 7th PRB. */
        uint64_t reserved_12_15        : 4;
        uint64_t comp_bit_width5       : 4;  /**< [ 19: 16] Compressed bit width of each I and Q sample in 6th PRB. */
        uint64_t reserved_20_23        : 4;
        uint64_t comp_bit_width4       : 4;  /**< [ 27: 24] Compressed bit width of each I and Q sample in 5th PRB. */
        uint64_t reserved_28_31        : 4;
        uint64_t comp_bit_width3       : 4;  /**< [ 35: 32] Compressed bit width of each I and Q sample in 4th PRB. */
        uint64_t reserved_36_39        : 4;
        uint64_t comp_bit_width2       : 4;  /**< [ 43: 40] Compressed bit width of each I and Q sample in 3rd PRB. */
        uint64_t reserved_44_47        : 4;
        uint64_t comp_bit_width1       : 4;  /**< [ 51: 48] Compressed bit width of each I and Q sample in 2nd PRB. */
        uint64_t reserved_52_55        : 4;
        uint64_t comp_bit_width0       : 4;  /**< [ 59: 56] Compressed bit width of each I and Q sample in 1st PRB. */
        uint64_t reserved_60_63        : 4;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_ecmp_mu_law_hdr_s_s cn; */
};

/**
 * Structure ecpri_hdr_sw_s
 *
 * eCPRI Transport Header Software Structure
 * This structure specifies the format of the eCPRI transport header used by
 * software for user plane packets processed by ECMP and EDEC.
 */
union cavm_ecpri_hdr_sw_s
{
    uint64_t u;
    struct cavm_ecpri_hdr_sw_s_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t seq_id                : 16; /**< [ 63: 48] Sequence identifier. */
        uint64_t pc_id                 : 16; /**< [ 47: 32] eAxC identifier. */
        uint64_t pyld_size             : 16; /**< [ 31: 16] Payload size in bytes. */
        uint64_t msg_type              : 8;  /**< [ 15:  8] Message type. */
        uint64_t concatenation         : 1;  /**< [  7:  7] Concatenation indicator. */
        uint64_t reserved_4_6          : 3;
        uint64_t ver                   : 4;  /**< [  3:  0] eCPRI version. */
#else /* Word 0 - Little Endian */
        uint64_t ver                   : 4;  /**< [  3:  0] eCPRI version. */
        uint64_t reserved_4_6          : 3;
        uint64_t concatenation         : 1;  /**< [  7:  7] Concatenation indicator. */
        uint64_t msg_type              : 8;  /**< [ 15:  8] Message type. */
        uint64_t pyld_size             : 16; /**< [ 31: 16] Payload size in bytes. */
        uint64_t pc_id                 : 16; /**< [ 47: 32] eAxC identifier. */
        uint64_t seq_id                : 16; /**< [ 63: 48] Sequence identifier. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_ecpri_hdr_sw_s_s cn; */
};

/**
 * Structure ecpri_mu_law_param_s
 *
 * eCPRI Mu-Law Compression Parameter Structure
 * This structure specifies the format of the user data compression parameter byte
 * of each PRB that uses the {mu}-Law compression method in an eCPRI user plane
 * packet, as specified by the ORAN standard.
 */
union cavm_ecpri_mu_law_param_s
{
    uint32_t u;
    struct cavm_ecpri_mu_law_param_s_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t reserved_8_31         : 24;
        uint32_t comp_bit_width        : 4;  /**< [  7:  4] Compressed bit width of each I and Q sample in the PRB. */
        uint32_t comp_shift            : 4;  /**< [  3:  0] Compression shift. Shift applied to each I and Q sample in the PRB. */
#else /* Word 0 - Little Endian */
        uint32_t comp_shift            : 4;  /**< [  3:  0] Compression shift. Shift applied to each I and Q sample in the PRB. */
        uint32_t comp_bit_width        : 4;  /**< [  7:  4] Compressed bit width of each I and Q sample in the PRB. */
        uint32_t reserved_8_31         : 24;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_ecpri_mu_law_param_s_s cn; */
};

/**
 * Structure ecpri_section_hdr_s
 *
 * eCPRI Section Header Structure
 * This structure specifies the format of the section header in eCPRI user plane
 * packets as specified by the ORAN standard. There is one ECPRI_SECTION_HDR_S for
 * each data section in the packet.
 */
union cavm_ecpri_section_hdr_s
{
    uint32_t u;
    struct cavm_ecpri_section_hdr_s_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t section_id            : 12; /**< [ 31: 20] Section identifier. */
        uint32_t rb                    : 1;  /**< [ 19: 19] Resource block indicator. When set, indicates every other PRB is used.

                                                                 Example from ORAN spec: If [RB]=1, [START_PRB]=1, [NUM_PRB]=3, then the
                                                                 PRBs used are 1, 3, and 5. */
        uint32_t sym_inc               : 1;  /**< [ 18: 18] Symbol number increment. */
        uint32_t start_prb             : 10; /**< [ 17:  8] Starting PRB in the associated data section. */
        uint32_t num_prb               : 8;  /**< [  7:  0] Number of PRBs within the associated data section.
                                                                 Zero indicates that the section contains all remaining PRBs of the antenna
                                                                 symbol, from [START_PRB] to the last PRB of the symbol, inclusive. */
#else /* Word 0 - Little Endian */
        uint32_t num_prb               : 8;  /**< [  7:  0] Number of PRBs within the associated data section.
                                                                 Zero indicates that the section contains all remaining PRBs of the antenna
                                                                 symbol, from [START_PRB] to the last PRB of the symbol, inclusive. */
        uint32_t start_prb             : 10; /**< [ 17:  8] Starting PRB in the associated data section. */
        uint32_t sym_inc               : 1;  /**< [ 18: 18] Symbol number increment. */
        uint32_t rb                    : 1;  /**< [ 19: 19] Resource block indicator. When set, indicates every other PRB is used.

                                                                 Example from ORAN spec: If [RB]=1, [START_PRB]=1, [NUM_PRB]=3, then the
                                                                 PRBs used are 1, 3, and 5. */
        uint32_t section_id            : 12; /**< [ 31: 20] Section identifier. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_ecpri_section_hdr_s_s cn; */
};

/**
 * Structure ecpri_section_hdr_sw_s
 *
 * eCPRI Section Header Software Structure
 * This structure specifies the format of the eCPRI section header used by
 * software for user plane packets processed by ECMP and EDEC.
 */
union cavm_ecpri_section_hdr_sw_s
{
    uint64_t u;
    struct cavm_ecpri_section_hdr_sw_s_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t ud_exponent           : 4;  /**< [ 63: 60] User Defined Exponent. Used when ECMP()_AB()_JDX()_CFG[DATA_FORMAT] = ECMP_DATA_FORMAT_E::EFXP. */
        uint64_t ud_iqwidth            : 4;  /**< [ 59: 56] User data I/Q width. Bit width of each compressed I and Q sample in the
                                                                 associated data section in flexible compression mode.
                                                                 Reserved in fixed compression mode.

                                                                 For ECMP, valid when ECMP()_AB()_JDX()_CFG[FIX_MODE_EN] is clear and
                                                                 [UD_COMP_METH] != ECPRI_COMP_METH_E::MU_LAW.
                                                                 If [UD_COMP_METH] = ECPRI_COMP_METH_E::MODULATION and [UD_IQWIDTH] = 0x0,
                                                                 indicates BPSK modulation compression with a compressed width of 2 bits for
                                                                 each I and Q sample. [UD_IQWIDTH] = 0x0 indicates a compressed width of 16
                                                                 bits for all other compression methods.

                                                                 Not valid when the section's compression method is {mu}-Law. */
        uint64_t reserved_52_55        : 4;
        uint64_t ud_comp_meth          : 4;  /**< [ 51: 48] User data compression method. Compression method for the associated data
                                                                 section in flexible compression mode, enumerated by ECPRI_COMP_METH_E.

                                                                 Invalid values default to ECPIR_COMP_METH_E::NO_COMP.

                                                                 Reserved in fixed compression mode, i.e., only valid when
                                                                 ECMP()_AB()_JDX()_CFG[FIX_MODE_EN] is clear. */
        uint64_t num_prb               : 16; /**< [ 47: 32] Number of PRBs within the associated data section.

                                                                 For ECMP, if [NUM_PRB]\<15\> is set, hardware will zero out the associated
                                                                 ECPRI_SECTION_HDR_S[NUM_PRB] in the outgoing packet, indicating that the section contains
                                                                 all remaining PRBs of the antenna symbol, from [START_PRB] to the last PRB of the symbol,
                                                                 inclusive. */
        uint64_t reserved_26_31        : 6;
        uint64_t start_prb             : 10; /**< [ 25: 16] Starting PRB in the associated data section. */
        uint64_t rb                    : 1;  /**< [ 15: 15] Resource block indicator. */
        uint64_t reserved_13_14        : 2;
        uint64_t sym_inc               : 1;  /**< [ 12: 12] Symbol number increment. */
        uint64_t section_id            : 12; /**< [ 11:  0] Section identifier. */
#else /* Word 0 - Little Endian */
        uint64_t section_id            : 12; /**< [ 11:  0] Section identifier. */
        uint64_t sym_inc               : 1;  /**< [ 12: 12] Symbol number increment. */
        uint64_t reserved_13_14        : 2;
        uint64_t rb                    : 1;  /**< [ 15: 15] Resource block indicator. */
        uint64_t start_prb             : 10; /**< [ 25: 16] Starting PRB in the associated data section. */
        uint64_t reserved_26_31        : 6;
        uint64_t num_prb               : 16; /**< [ 47: 32] Number of PRBs within the associated data section.

                                                                 For ECMP, if [NUM_PRB]\<15\> is set, hardware will zero out the associated
                                                                 ECPRI_SECTION_HDR_S[NUM_PRB] in the outgoing packet, indicating that the section contains
                                                                 all remaining PRBs of the antenna symbol, from [START_PRB] to the last PRB of the symbol,
                                                                 inclusive. */
        uint64_t ud_comp_meth          : 4;  /**< [ 51: 48] User data compression method. Compression method for the associated data
                                                                 section in flexible compression mode, enumerated by ECPRI_COMP_METH_E.

                                                                 Invalid values default to ECPIR_COMP_METH_E::NO_COMP.

                                                                 Reserved in fixed compression mode, i.e., only valid when
                                                                 ECMP()_AB()_JDX()_CFG[FIX_MODE_EN] is clear. */
        uint64_t reserved_52_55        : 4;
        uint64_t ud_iqwidth            : 4;  /**< [ 59: 56] User data I/Q width. Bit width of each compressed I and Q sample in the
                                                                 associated data section in flexible compression mode.
                                                                 Reserved in fixed compression mode.

                                                                 For ECMP, valid when ECMP()_AB()_JDX()_CFG[FIX_MODE_EN] is clear and
                                                                 [UD_COMP_METH] != ECPRI_COMP_METH_E::MU_LAW.
                                                                 If [UD_COMP_METH] = ECPRI_COMP_METH_E::MODULATION and [UD_IQWIDTH] = 0x0,
                                                                 indicates BPSK modulation compression with a compressed width of 2 bits for
                                                                 each I and Q sample. [UD_IQWIDTH] = 0x0 indicates a compressed width of 16
                                                                 bits for all other compression methods.

                                                                 Not valid when the section's compression method is {mu}-Law. */
        uint64_t ud_exponent           : 4;  /**< [ 63: 60] User Defined Exponent. Used when ECMP()_AB()_JDX()_CFG[DATA_FORMAT] = ECMP_DATA_FORMAT_E::EFXP. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_ecpri_section_hdr_sw_s_s cn; */
};

/**
 * Structure ecpri_timing_hdr_s
 *
 * eCPRI Timing Header Structure
 * This structure specifies the format of the eCPRI timing header as specified by
 * the ORAN standard.
 */
union cavm_ecpri_timing_hdr_s
{
    uint32_t u;
    struct cavm_ecpri_timing_hdr_s_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t data_direction        : 1;  /**< [ 31: 31] Data direction.
                                                                 0 = Receive (uplink).
                                                                 1 = Transmit (downlink). */
        uint32_t payload_version       : 3;  /**< [ 30: 28] Payload version. Must be 0x1. */
        uint32_t filter_index          : 4;  /**< [ 27: 24] Filter index. */
        uint32_t frame_id              : 8;  /**< [ 23: 16] Frame identifier. */
        uint32_t subframe_id           : 4;  /**< [ 15: 12] Subframe identifier. */
        uint32_t slot_id               : 6;  /**< [ 11:  6] Slot identifier. */
        uint32_t symbol_id             : 6;  /**< [  5:  0] Symbol identifier. */
#else /* Word 0 - Little Endian */
        uint32_t symbol_id             : 6;  /**< [  5:  0] Symbol identifier. */
        uint32_t slot_id               : 6;  /**< [ 11:  6] Slot identifier. */
        uint32_t subframe_id           : 4;  /**< [ 15: 12] Subframe identifier. */
        uint32_t frame_id              : 8;  /**< [ 23: 16] Frame identifier. */
        uint32_t filter_index          : 4;  /**< [ 27: 24] Filter index. */
        uint32_t payload_version       : 3;  /**< [ 30: 28] Payload version. Must be 0x1. */
        uint32_t data_direction        : 1;  /**< [ 31: 31] Data direction.
                                                                 0 = Receive (uplink).
                                                                 1 = Transmit (downlink). */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_ecpri_timing_hdr_s_s cn; */
};

/**
 * Structure ecpri_timing_hdr_sw_s
 *
 * eCPRI Timing Header Software Structure
 * This structure specifies the format of the eCPRI timing header used by software
 * for U-Plane packets processed by ECMP and EDEC.
 */
union cavm_ecpri_timing_hdr_sw_s
{
    uint64_t u;
    struct cavm_ecpri_timing_hdr_sw_s_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_54_63        : 10;
        uint64_t symbol_id             : 6;  /**< [ 53: 48] Symbol identifier. */
        uint64_t reserved_46_47        : 2;
        uint64_t slot_id               : 6;  /**< [ 45: 40] Slot identifier. */
        uint64_t reserved_36_39        : 4;
        uint64_t subframe_id           : 4;  /**< [ 35: 32] Subframe identifier. */
        uint64_t frame_id              : 8;  /**< [ 31: 24] Frame identifier. */
        uint64_t reserved_20_23        : 4;
        uint64_t filter_index          : 4;  /**< [ 19: 16] Filter index. */
        uint64_t reserved_11_15        : 5;
        uint64_t payload_version       : 3;  /**< [ 10:  8] Payload version. Must be 0x1. */
        uint64_t reserved_1_7          : 7;
        uint64_t data_direction        : 1;  /**< [  0:  0] Data direction.
                                                                 0 = Receive (uplink).
                                                                 1 = Transmit (downlink). */
#else /* Word 0 - Little Endian */
        uint64_t data_direction        : 1;  /**< [  0:  0] Data direction.
                                                                 0 = Receive (uplink).
                                                                 1 = Transmit (downlink). */
        uint64_t reserved_1_7          : 7;
        uint64_t payload_version       : 3;  /**< [ 10:  8] Payload version. Must be 0x1. */
        uint64_t reserved_11_15        : 5;
        uint64_t filter_index          : 4;  /**< [ 19: 16] Filter index. */
        uint64_t reserved_20_23        : 4;
        uint64_t frame_id              : 8;  /**< [ 31: 24] Frame identifier. */
        uint64_t subframe_id           : 4;  /**< [ 35: 32] Subframe identifier. */
        uint64_t reserved_36_39        : 4;
        uint64_t slot_id               : 6;  /**< [ 45: 40] Slot identifier. */
        uint64_t reserved_46_47        : 2;
        uint64_t symbol_id             : 6;  /**< [ 53: 48] Symbol identifier. */
        uint64_t reserved_54_63        : 10;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_ecpri_timing_hdr_sw_s_s cn; */
};

/**
 * Structure ecpri_ud_comp_hdr_nrsv_s
 *
 * eCPRI User Data Compression Header Non-Reserved Structure
 * Same as ECPRI_UD_COMP_HDR_S but without reserved field. Specifies format of
 * EDEC_LUT_CSR0_S[FIX_UDCOMP_HDR].
 */
union cavm_ecpri_ud_comp_hdr_nrsv_s
{
    uint32_t u;
    struct cavm_ecpri_ud_comp_hdr_nrsv_s_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t reserved_8_31         : 24;
        uint32_t ud_iqwidth            : 4;  /**< [  7:  4] See ECPRI_UD_COMP_HDR_S[UD_IQWIDTH]. */
        uint32_t ud_comp_meth          : 4;  /**< [  3:  0] User data compression method enumerated by ECPRI_COMP_METH_E. */
#else /* Word 0 - Little Endian */
        uint32_t ud_comp_meth          : 4;  /**< [  3:  0] User data compression method enumerated by ECPRI_COMP_METH_E. */
        uint32_t ud_iqwidth            : 4;  /**< [  7:  4] See ECPRI_UD_COMP_HDR_S[UD_IQWIDTH]. */
        uint32_t reserved_8_31         : 24;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_ecpri_ud_comp_hdr_nrsv_s_s cn; */
};

/**
 * Structure ecpri_ud_comp_hdr_s
 *
 * eCPRI User Data Compression Header Structure
 * This structure specifies the format of the user data compression header
 * (including reserved field) in eCPRI user plane packets as specified by the ORAN
 * standard. Not present in packets with fixed compression. In packets with
 * flexible compression, each packet section has a ECPRI_UD_COMP_HDR_S immediately
 * following the associated ECPRI_SECTION_HDR_S.
 */
union cavm_ecpri_ud_comp_hdr_s
{
    uint32_t u;
    struct cavm_ecpri_ud_comp_hdr_s_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t reserved_16_31        : 16;
        uint32_t ud_iqwidth            : 4;  /**< [ 15: 12] User data I/Q width. Bit width of each compressed I and Q sample in the
                                                                 associated data section.
                                                                 Not valid for {mu}-Law compression, where the compressed I and Q sample
                                                                 width for each PRB is specified by the associated
                                                                 ECPRI_MU_LAW_PARAM_S[COMP_BIT_WIDTH]. */
        uint32_t ud_comp_meth          : 4;  /**< [ 11:  8] User data compression method enumerated by ECPRI_COMP_METH_E. */
        uint32_t reserved_0_7          : 8;
#else /* Word 0 - Little Endian */
        uint32_t reserved_0_7          : 8;
        uint32_t ud_comp_meth          : 4;  /**< [ 11:  8] User data compression method enumerated by ECPRI_COMP_METH_E. */
        uint32_t ud_iqwidth            : 4;  /**< [ 15: 12] User data I/Q width. Bit width of each compressed I and Q sample in the
                                                                 associated data section.
                                                                 Not valid for {mu}-Law compression, where the compressed I and Q sample
                                                                 width for each PRB is specified by the associated
                                                                 ECPRI_MU_LAW_PARAM_S[COMP_BIT_WIDTH]. */
        uint32_t reserved_16_31        : 16;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_ecpri_ud_comp_hdr_s_s cn; */
};

/**
 * Register (RSL) ecmp#_ab#_bfp_user_exp_high
 *
 * ECMP BFP FXP User Exponent for IqWidth 9..16 Register
 */
union cavm_ecmpx_abx_bfp_user_exp_high
{
    uint64_t u;
    struct cavm_ecmpx_abx_bfp_user_exp_high_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_61_63        : 3;
        uint64_t user_exp15            : 5;  /**< [ 60: 56](R/W) BFP FXP user exp for IqWidth 15 */
        uint64_t reserved_53_55        : 3;
        uint64_t user_exp14            : 5;  /**< [ 52: 48](R/W) BFP FXP user exp for IqWidth 14 */
        uint64_t reserved_45_47        : 3;
        uint64_t user_exp13            : 5;  /**< [ 44: 40](R/W) BFP FXP user exp for IqWidth 13 */
        uint64_t reserved_37_39        : 3;
        uint64_t user_exp12            : 5;  /**< [ 36: 32](R/W) BFP FXP user exp for IqWidth 12 */
        uint64_t reserved_29_31        : 3;
        uint64_t user_exp11            : 5;  /**< [ 28: 24](R/W) BFP FXP user exp for IqWidth 11 */
        uint64_t reserved_21_23        : 3;
        uint64_t user_exp10            : 5;  /**< [ 20: 16](R/W) BFP FXP user exp for IqWidth 10 */
        uint64_t reserved_13_15        : 3;
        uint64_t user_exp9             : 5;  /**< [ 12:  8](R/W) BFP FXP user exp for IqWidth 9 */
        uint64_t reserved_5_7          : 3;
        uint64_t user_exp8             : 5;  /**< [  4:  0](R/W) BFP FXP user exp for IqWidth 8 */
#else /* Word 0 - Little Endian */
        uint64_t user_exp8             : 5;  /**< [  4:  0](R/W) BFP FXP user exp for IqWidth 8 */
        uint64_t reserved_5_7          : 3;
        uint64_t user_exp9             : 5;  /**< [ 12:  8](R/W) BFP FXP user exp for IqWidth 9 */
        uint64_t reserved_13_15        : 3;
        uint64_t user_exp10            : 5;  /**< [ 20: 16](R/W) BFP FXP user exp for IqWidth 10 */
        uint64_t reserved_21_23        : 3;
        uint64_t user_exp11            : 5;  /**< [ 28: 24](R/W) BFP FXP user exp for IqWidth 11 */
        uint64_t reserved_29_31        : 3;
        uint64_t user_exp12            : 5;  /**< [ 36: 32](R/W) BFP FXP user exp for IqWidth 12 */
        uint64_t reserved_37_39        : 3;
        uint64_t user_exp13            : 5;  /**< [ 44: 40](R/W) BFP FXP user exp for IqWidth 13 */
        uint64_t reserved_45_47        : 3;
        uint64_t user_exp14            : 5;  /**< [ 52: 48](R/W) BFP FXP user exp for IqWidth 14 */
        uint64_t reserved_53_55        : 3;
        uint64_t user_exp15            : 5;  /**< [ 60: 56](R/W) BFP FXP user exp for IqWidth 15 */
        uint64_t reserved_61_63        : 3;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_ecmpx_abx_bfp_user_exp_high_s cn; */
};
typedef union cavm_ecmpx_abx_bfp_user_exp_high cavm_ecmpx_abx_bfp_user_exp_high_t;

static inline uint64_t CAVM_ECMPX_ABX_BFP_USER_EXP_HIGH(uint64_t a, uint64_t b) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_ECMPX_ABX_BFP_USER_EXP_HIGH(uint64_t a, uint64_t b)
{
    if (cavm_is_model(OCTEONTX_CNF20KA) && ((a<=2) && (b<=1)))
        return 0xc00840600118ll + 0x100000000ll * ((a) & 0x3) + 0x10000ll * ((b) & 0x1);
    __cavm_csr_fatal("ECMPX_ABX_BFP_USER_EXP_HIGH", 2, a, b, 0, 0, 0, 0);
}

#define typedef_CAVM_ECMPX_ABX_BFP_USER_EXP_HIGH(a,b) cavm_ecmpx_abx_bfp_user_exp_high_t
#define bustype_CAVM_ECMPX_ABX_BFP_USER_EXP_HIGH(a,b) CSR_TYPE_RSL
#define basename_CAVM_ECMPX_ABX_BFP_USER_EXP_HIGH(a,b) "ECMPX_ABX_BFP_USER_EXP_HIGH"
#define device_bar_CAVM_ECMPX_ABX_BFP_USER_EXP_HIGH(a,b) 0x2 /* PF_BAR2 */
#define busnum_CAVM_ECMPX_ABX_BFP_USER_EXP_HIGH(a,b) (a)
#define arguments_CAVM_ECMPX_ABX_BFP_USER_EXP_HIGH(a,b) (a),(b),-1,-1

/**
 * Register (RSL) ecmp#_ab#_bfp_user_exp_low
 *
 * ECMP BFP FXP User Exponent for IqWidth 1..8 Register
 */
union cavm_ecmpx_abx_bfp_user_exp_low
{
    uint64_t u;
    struct cavm_ecmpx_abx_bfp_user_exp_low_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_61_63        : 3;
        uint64_t user_exp7             : 5;  /**< [ 60: 56](R/W) BFP FXP user exp for IqWidth 7 */
        uint64_t reserved_53_55        : 3;
        uint64_t user_exp6             : 5;  /**< [ 52: 48](R/W) BFP FXP user exp for IqWidth 6 */
        uint64_t reserved_45_47        : 3;
        uint64_t user_exp5             : 5;  /**< [ 44: 40](R/W) BFP FXP user exp for IqWidth 5 */
        uint64_t reserved_37_39        : 3;
        uint64_t user_exp4             : 5;  /**< [ 36: 32](R/W) BFP FXP user exp for IqWidth 4 */
        uint64_t reserved_29_31        : 3;
        uint64_t user_exp3             : 5;  /**< [ 28: 24](R/W) BFP FXP user exp for IqWidth 3 */
        uint64_t reserved_21_23        : 3;
        uint64_t user_exp2             : 5;  /**< [ 20: 16](R/W) BFP FXP user exp for IqWidth 2 */
        uint64_t reserved_13_15        : 3;
        uint64_t user_exp1             : 5;  /**< [ 12:  8](R/W) BFP FXP user exp for IqWidth 1 */
        uint64_t reserved_5_7          : 3;
        uint64_t user_exp0             : 5;  /**< [  4:  0](R/W) BFP FXP user exp for IqWidth 16 */
#else /* Word 0 - Little Endian */
        uint64_t user_exp0             : 5;  /**< [  4:  0](R/W) BFP FXP user exp for IqWidth 16 */
        uint64_t reserved_5_7          : 3;
        uint64_t user_exp1             : 5;  /**< [ 12:  8](R/W) BFP FXP user exp for IqWidth 1 */
        uint64_t reserved_13_15        : 3;
        uint64_t user_exp2             : 5;  /**< [ 20: 16](R/W) BFP FXP user exp for IqWidth 2 */
        uint64_t reserved_21_23        : 3;
        uint64_t user_exp3             : 5;  /**< [ 28: 24](R/W) BFP FXP user exp for IqWidth 3 */
        uint64_t reserved_29_31        : 3;
        uint64_t user_exp4             : 5;  /**< [ 36: 32](R/W) BFP FXP user exp for IqWidth 4 */
        uint64_t reserved_37_39        : 3;
        uint64_t user_exp5             : 5;  /**< [ 44: 40](R/W) BFP FXP user exp for IqWidth 5 */
        uint64_t reserved_45_47        : 3;
        uint64_t user_exp6             : 5;  /**< [ 52: 48](R/W) BFP FXP user exp for IqWidth 6 */
        uint64_t reserved_53_55        : 3;
        uint64_t user_exp7             : 5;  /**< [ 60: 56](R/W) BFP FXP user exp for IqWidth 7 */
        uint64_t reserved_61_63        : 3;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_ecmpx_abx_bfp_user_exp_low_s cn; */
};
typedef union cavm_ecmpx_abx_bfp_user_exp_low cavm_ecmpx_abx_bfp_user_exp_low_t;

static inline uint64_t CAVM_ECMPX_ABX_BFP_USER_EXP_LOW(uint64_t a, uint64_t b) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_ECMPX_ABX_BFP_USER_EXP_LOW(uint64_t a, uint64_t b)
{
    if (cavm_is_model(OCTEONTX_CNF20KA) && ((a<=2) && (b<=1)))
        return 0xc00840600110ll + 0x100000000ll * ((a) & 0x3) + 0x10000ll * ((b) & 0x1);
    __cavm_csr_fatal("ECMPX_ABX_BFP_USER_EXP_LOW", 2, a, b, 0, 0, 0, 0);
}

#define typedef_CAVM_ECMPX_ABX_BFP_USER_EXP_LOW(a,b) cavm_ecmpx_abx_bfp_user_exp_low_t
#define bustype_CAVM_ECMPX_ABX_BFP_USER_EXP_LOW(a,b) CSR_TYPE_RSL
#define basename_CAVM_ECMPX_ABX_BFP_USER_EXP_LOW(a,b) "ECMPX_ABX_BFP_USER_EXP_LOW"
#define device_bar_CAVM_ECMPX_ABX_BFP_USER_EXP_LOW(a,b) 0x2 /* PF_BAR2 */
#define busnum_CAVM_ECMPX_ABX_BFP_USER_EXP_LOW(a,b) (a)
#define arguments_CAVM_ECMPX_ABX_BFP_USER_EXP_LOW(a,b) (a),(b),-1,-1

/**
 * Register (RSL) ecmp#_ab#_bytes_pc
 *
 * ECMP Total Bytes Perfomcance Counter Register
 */
union cavm_ecmpx_abx_bytes_pc
{
    uint64_t u;
    struct cavm_ecmpx_abx_bytes_pc_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t cnt                   : 64; /**< [ 63:  0](R/W/H) Count total compressed bytes sent. */
#else /* Word 0 - Little Endian */
        uint64_t cnt                   : 64; /**< [ 63:  0](R/W/H) Count total compressed bytes sent. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_ecmpx_abx_bytes_pc_s cn; */
};
typedef union cavm_ecmpx_abx_bytes_pc cavm_ecmpx_abx_bytes_pc_t;

static inline uint64_t CAVM_ECMPX_ABX_BYTES_PC(uint64_t a, uint64_t b) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_ECMPX_ABX_BYTES_PC(uint64_t a, uint64_t b)
{
    if (cavm_is_model(OCTEONTX_CNF20KA) && ((a<=2) && (b<=1)))
        return 0xc008406000f0ll + 0x100000000ll * ((a) & 0x3) + 0x10000ll * ((b) & 0x1);
    __cavm_csr_fatal("ECMPX_ABX_BYTES_PC", 2, a, b, 0, 0, 0, 0);
}

#define typedef_CAVM_ECMPX_ABX_BYTES_PC(a,b) cavm_ecmpx_abx_bytes_pc_t
#define bustype_CAVM_ECMPX_ABX_BYTES_PC(a,b) CSR_TYPE_RSL
#define basename_CAVM_ECMPX_ABX_BYTES_PC(a,b) "ECMPX_ABX_BYTES_PC"
#define device_bar_CAVM_ECMPX_ABX_BYTES_PC(a,b) 0x2 /* PF_BAR2 */
#define busnum_CAVM_ECMPX_ABX_BYTES_PC(a,b) (a)
#define arguments_CAVM_ECMPX_ABX_BYTES_PC(a,b) (a),(b),-1,-1

/**
 * Register (RSL) ecmp#_ab#_config
 *
 * ECMP Configuration Register
 */
union cavm_ecmpx_abx_config
{
    uint64_t u;
    struct cavm_ecmpx_abx_config_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_44_63        : 20;
        uint64_t default_ulaw_compbitwidth : 4;/**< [ 43: 40](R/W) Default {mu}-Law compressed bit width. Compression width used for a PRB if
                                                                 the asociated width value in ECMP_MU_LAW_HDR_S is missing due to header underflow.
                                                                 Valid values for programming: 0..15. 0 means 16. */
        uint64_t reserved_36_39        : 4;
        uint64_t default_modc_iqwidth  : 4;  /**< [ 35: 32](R/W) Default Modulation Compression Iqwidth. Used if Iqwidth not supported as
                                                                 reported by ECMP()_AB()_ERROR_STATUS[MODC_IQWIDTH_ERR].
                                                                 Valid values for programming: 0..7. */
        uint64_t reserved_16_31        : 16;
        uint64_t pc_seq_id_len_1       : 2;  /**< [ 15: 14](R/W) Used if ECMP()_AB()_JDX()_CFG[ECPRI_HDR_PRESENT] is set.
                                                                 0 - Zero bytes are added to RFOE Packet Len calculation.
                                                                 1 - Four bytes are added to RFOE Packet Len calculation.
                                                                 2 - Eight bytes are added to RFOE Packet Len calculation.
                                                                 3 - Zero bytes are added to RFOE Packet Len calculation. */
        uint64_t pc_seq_id_len_0       : 2;  /**< [ 13: 12](R/W) Used if ECMP()_AB()_JDX()_CFG[ECPRI_HDR_PRESENT] is not set.
                                                                 0 - Zero bytes are added to RFOE Packet Len calculation.
                                                                 1 - Four bytes are added to RFOE Packet Len calculation.
                                                                 2 - Eight bytes are added to RFOE Packet Len calculation.
                                                                 3 - Zero bytes are added to RFOE Packet Len calculation. */
        uint64_t reserved_5_11         : 7;
        uint64_t force_cond_clk_en     : 1;  /**< [  4:  4](R/W) Force the conditional clocks active within the block. For diagnostic use only. */
        uint64_t symmetric_rounding_ulaw : 1;/**< [  3:  3](R/W) Defines Rounding method for compressions: ECPRI_COMP_METH_E::MU_LAW:
                                                                 0 = OR-ROUND.
                                                                 1 = Symmetric Rounding. */
        uint64_t symmetric_rounding_bfp : 1; /**< [  2:  2](R/W) Defines Rounding method for compressions: ECPRI_COMP_METH_E::BFP:
                                                                 and ECPRI_COMP_METH_E::BFP_SRM
                                                                 0 = OR-ROUND.
                                                                 1 = Symmetric Rounding. */
        uint64_t symmetric_rounding_no_comp : 1;/**< [  1:  1](R/W) Defines Rounding method for compressions: ECPRI_COMP_METH_E::NO_COMP:
                                                                 0 = OR-ROUND.
                                                                 1 = Symmetric Rounding. */
        uint64_t uncomp_shift_left     : 1;  /**< [  0:  0](R/W) Specifies shift direction when the compression method is
                                                                 ECPRI_COMP_METH_E::NO_COMP and the compressed I/Q width is less than 16:
                                                                 0 = Shift right.
                                                                 1 = Shift left. */
#else /* Word 0 - Little Endian */
        uint64_t uncomp_shift_left     : 1;  /**< [  0:  0](R/W) Specifies shift direction when the compression method is
                                                                 ECPRI_COMP_METH_E::NO_COMP and the compressed I/Q width is less than 16:
                                                                 0 = Shift right.
                                                                 1 = Shift left. */
        uint64_t symmetric_rounding_no_comp : 1;/**< [  1:  1](R/W) Defines Rounding method for compressions: ECPRI_COMP_METH_E::NO_COMP:
                                                                 0 = OR-ROUND.
                                                                 1 = Symmetric Rounding. */
        uint64_t symmetric_rounding_bfp : 1; /**< [  2:  2](R/W) Defines Rounding method for compressions: ECPRI_COMP_METH_E::BFP:
                                                                 and ECPRI_COMP_METH_E::BFP_SRM
                                                                 0 = OR-ROUND.
                                                                 1 = Symmetric Rounding. */
        uint64_t symmetric_rounding_ulaw : 1;/**< [  3:  3](R/W) Defines Rounding method for compressions: ECPRI_COMP_METH_E::MU_LAW:
                                                                 0 = OR-ROUND.
                                                                 1 = Symmetric Rounding. */
        uint64_t force_cond_clk_en     : 1;  /**< [  4:  4](R/W) Force the conditional clocks active within the block. For diagnostic use only. */
        uint64_t reserved_5_11         : 7;
        uint64_t pc_seq_id_len_0       : 2;  /**< [ 13: 12](R/W) Used if ECMP()_AB()_JDX()_CFG[ECPRI_HDR_PRESENT] is not set.
                                                                 0 - Zero bytes are added to RFOE Packet Len calculation.
                                                                 1 - Four bytes are added to RFOE Packet Len calculation.
                                                                 2 - Eight bytes are added to RFOE Packet Len calculation.
                                                                 3 - Zero bytes are added to RFOE Packet Len calculation. */
        uint64_t pc_seq_id_len_1       : 2;  /**< [ 15: 14](R/W) Used if ECMP()_AB()_JDX()_CFG[ECPRI_HDR_PRESENT] is set.
                                                                 0 - Zero bytes are added to RFOE Packet Len calculation.
                                                                 1 - Four bytes are added to RFOE Packet Len calculation.
                                                                 2 - Eight bytes are added to RFOE Packet Len calculation.
                                                                 3 - Zero bytes are added to RFOE Packet Len calculation. */
        uint64_t reserved_16_31        : 16;
        uint64_t default_modc_iqwidth  : 4;  /**< [ 35: 32](R/W) Default Modulation Compression Iqwidth. Used if Iqwidth not supported as
                                                                 reported by ECMP()_AB()_ERROR_STATUS[MODC_IQWIDTH_ERR].
                                                                 Valid values for programming: 0..7. */
        uint64_t reserved_36_39        : 4;
        uint64_t default_ulaw_compbitwidth : 4;/**< [ 43: 40](R/W) Default {mu}-Law compressed bit width. Compression width used for a PRB if
                                                                 the asociated width value in ECMP_MU_LAW_HDR_S is missing due to header underflow.
                                                                 Valid values for programming: 0..15. 0 means 16. */
        uint64_t reserved_44_63        : 20;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_ecmpx_abx_config_s cn; */
};
typedef union cavm_ecmpx_abx_config cavm_ecmpx_abx_config_t;

static inline uint64_t CAVM_ECMPX_ABX_CONFIG(uint64_t a, uint64_t b) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_ECMPX_ABX_CONFIG(uint64_t a, uint64_t b)
{
    if (cavm_is_model(OCTEONTX_CNF20KA) && ((a<=2) && (b<=1)))
        return 0xc00840600020ll + 0x100000000ll * ((a) & 0x3) + 0x10000ll * ((b) & 0x1);
    __cavm_csr_fatal("ECMPX_ABX_CONFIG", 2, a, b, 0, 0, 0, 0);
}

#define typedef_CAVM_ECMPX_ABX_CONFIG(a,b) cavm_ecmpx_abx_config_t
#define bustype_CAVM_ECMPX_ABX_CONFIG(a,b) CSR_TYPE_RSL
#define basename_CAVM_ECMPX_ABX_CONFIG(a,b) "ECMPX_ABX_CONFIG"
#define device_bar_CAVM_ECMPX_ABX_CONFIG(a,b) 0x2 /* PF_BAR2 */
#define busnum_CAVM_ECMPX_ABX_CONFIG(a,b) (a)
#define arguments_CAVM_ECMPX_ABX_CONFIG(a,b) (a),(b),-1,-1

/**
 * Register (RSL) ecmp#_ab#_control0
 *
 * ECMP AB Control Register
 */
union cavm_ecmpx_abx_control0
{
    uint64_t u;
    struct cavm_ecmpx_abx_control0_s
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
    /* struct cavm_ecmpx_abx_control0_s cn; */
};
typedef union cavm_ecmpx_abx_control0 cavm_ecmpx_abx_control0_t;

static inline uint64_t CAVM_ECMPX_ABX_CONTROL0(uint64_t a, uint64_t b) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_ECMPX_ABX_CONTROL0(uint64_t a, uint64_t b)
{
    if (cavm_is_model(OCTEONTX_CNF20KA) && ((a<=2) && (b<=1)))
        return 0xc00840600000ll + 0x100000000ll * ((a) & 0x3) + 0x10000ll * ((b) & 0x1);
    __cavm_csr_fatal("ECMPX_ABX_CONTROL0", 2, a, b, 0, 0, 0, 0);
}

#define typedef_CAVM_ECMPX_ABX_CONTROL0(a,b) cavm_ecmpx_abx_control0_t
#define bustype_CAVM_ECMPX_ABX_CONTROL0(a,b) CSR_TYPE_RSL
#define basename_CAVM_ECMPX_ABX_CONTROL0(a,b) "ECMPX_ABX_CONTROL0"
#define device_bar_CAVM_ECMPX_ABX_CONTROL0(a,b) 0x2 /* PF_BAR2 */
#define busnum_CAVM_ECMPX_ABX_CONTROL0(a,b) (a)
#define arguments_CAVM_ECMPX_ABX_CONTROL0(a,b) (a),(b),-1,-1

/**
 * Register (RSL) ecmp#_ab#_control1
 *
 * ECMP AB Control Register
 */
union cavm_ecmpx_abx_control1
{
    uint64_t u;
    struct cavm_ecmpx_abx_control1_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_16_63        : 48;
        uint64_t jobid3                : 16; /**< [ 15:  0](R/W) Job ID for slot 3. */
#else /* Word 0 - Little Endian */
        uint64_t jobid3                : 16; /**< [ 15:  0](R/W) Job ID for slot 3. */
        uint64_t reserved_16_63        : 48;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_ecmpx_abx_control1_s cn; */
};
typedef union cavm_ecmpx_abx_control1 cavm_ecmpx_abx_control1_t;

static inline uint64_t CAVM_ECMPX_ABX_CONTROL1(uint64_t a, uint64_t b) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_ECMPX_ABX_CONTROL1(uint64_t a, uint64_t b)
{
    if (cavm_is_model(OCTEONTX_CNF20KA) && ((a<=2) && (b<=1)))
        return 0xc00840600008ll + 0x100000000ll * ((a) & 0x3) + 0x10000ll * ((b) & 0x1);
    __cavm_csr_fatal("ECMPX_ABX_CONTROL1", 2, a, b, 0, 0, 0, 0);
}

#define typedef_CAVM_ECMPX_ABX_CONTROL1(a,b) cavm_ecmpx_abx_control1_t
#define bustype_CAVM_ECMPX_ABX_CONTROL1(a,b) CSR_TYPE_RSL
#define basename_CAVM_ECMPX_ABX_CONTROL1(a,b) "ECMPX_ABX_CONTROL1"
#define device_bar_CAVM_ECMPX_ABX_CONTROL1(a,b) 0x2 /* PF_BAR2 */
#define busnum_CAVM_ECMPX_ABX_CONTROL1(a,b) (a)
#define arguments_CAVM_ECMPX_ABX_CONTROL1(a,b) (a),(b),-1,-1

/**
 * Register (RSL) ecmp#_ab#_error_ena_w1c
 *
 * ECMP Error Enable Clear Registers
 * This register clears interrupt enable bits.
 */
union cavm_ecmpx_abx_error_ena_w1c
{
    uint64_t u;
    struct cavm_ecmpx_abx_error_ena_w1c_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_26_63        : 38;
        uint64_t efxp_format_but_c_meth_not_bfp : 1;/**< [ 25: 25](R/W1C/H) Reads or clears enable for ECMP(0..2)_AB(0..1)_ERROR_STATUS[EFXP_FORMAT_BUT_C_METH_NOT_BFP]. */
        uint64_t efxp_format_but_srm_sect_prsnt : 1;/**< [ 24: 24](R/W1C/H) Reads or clears enable for ECMP(0..2)_AB(0..1)_ERROR_STATUS[EFXP_FORMAT_BUT_SRM_SECT_PRSNT]. */
        uint64_t reserved_18_23        : 6;
        uint64_t syminc_not_zero       : 1;  /**< [ 17: 17](R/W1C/H) Reads or clears enable for ECMP(0..2)_AB(0..1)_ERROR_STATUS[SYMINC_NOT_ZERO]. */
        uint64_t num_prb_zero_but_rb_not : 1;/**< [ 16: 16](R/W1C/H) Reads or clears enable for ECMP(0..2)_AB(0..1)_ERROR_STATUS[NUM_PRB_ZERO_BUT_RB_NOT]. */
        uint64_t reserved_12_15        : 4;
        uint64_t hdr_underflow_err     : 1;  /**< [ 11: 11](R/W1C/H) Reads or clears enable for ECMP(0..2)_AB(0..1)_ERROR_STATUS[HDR_UNDERFLOW_ERR]. */
        uint64_t hdr_overflow_err      : 1;  /**< [ 10: 10](R/W1C/H) Reads or clears enable for ECMP(0..2)_AB(0..1)_ERROR_STATUS[HDR_OVERFLOW_ERR]. */
        uint64_t prb_underflow_err     : 1;  /**< [  9:  9](R/W1C/H) Reads or clears enable for ECMP(0..2)_AB(0..1)_ERROR_STATUS[PRB_UNDERFLOW_ERR]. */
        uint64_t prb_overflow_err      : 1;  /**< [  8:  8](R/W1C/H) Reads or clears enable for ECMP(0..2)_AB(0..1)_ERROR_STATUS[PRB_OVERFLOW_ERR]. */
        uint64_t srm_configured_but_not_found : 1;/**< [  7:  7](R/W1C/H) Reads or clears enable for ECMP(0..2)_AB(0..1)_ERROR_STATUS[SRM_CONFIGURED_BUT_NOT_FOUND]. */
        uint64_t srm_found_but_not_configured : 1;/**< [  6:  6](R/W1C/H) Reads or clears enable for ECMP(0..2)_AB(0..1)_ERROR_STATUS[SRM_FOUND_BUT_NOT_CONFIGURED]. */
        uint64_t pyld_size_err         : 1;  /**< [  5:  5](R/W1C/H) Reads or clears enable for ECMP(0..2)_AB(0..1)_ERROR_STATUS[PYLD_SIZE_ERR]. */
        uint64_t num_prb_zero_but_start_prb_not : 1;/**< [  4:  4](R/W1C/H) Reads or clears enable for ECMP(0..2)_AB(0..1)_ERROR_STATUS[NUM_PRB_ZERO_BUT_START_PRB_NOT]. */
        uint64_t ulaw_compbitwidth_err : 1;  /**< [  3:  3](R/W1C/H) Reads or clears enable for ECMP(0..2)_AB(0..1)_ERROR_STATUS[ULAW_COMPBITWIDTH_ERR]. */
        uint64_t modc_iqwidth_err      : 1;  /**< [  2:  2](R/W1C/H) Reads or clears enable for ECMP(0..2)_AB(0..1)_ERROR_STATUS[MODC_IQWIDTH_ERR]. */
        uint64_t reserved_1            : 1;
        uint64_t compmeth_err          : 1;  /**< [  0:  0](R/W1C/H) Reads or clears enable for ECMP(0..2)_AB(0..1)_ERROR_STATUS[COMPMETH_ERR]. */
#else /* Word 0 - Little Endian */
        uint64_t compmeth_err          : 1;  /**< [  0:  0](R/W1C/H) Reads or clears enable for ECMP(0..2)_AB(0..1)_ERROR_STATUS[COMPMETH_ERR]. */
        uint64_t reserved_1            : 1;
        uint64_t modc_iqwidth_err      : 1;  /**< [  2:  2](R/W1C/H) Reads or clears enable for ECMP(0..2)_AB(0..1)_ERROR_STATUS[MODC_IQWIDTH_ERR]. */
        uint64_t ulaw_compbitwidth_err : 1;  /**< [  3:  3](R/W1C/H) Reads or clears enable for ECMP(0..2)_AB(0..1)_ERROR_STATUS[ULAW_COMPBITWIDTH_ERR]. */
        uint64_t num_prb_zero_but_start_prb_not : 1;/**< [  4:  4](R/W1C/H) Reads or clears enable for ECMP(0..2)_AB(0..1)_ERROR_STATUS[NUM_PRB_ZERO_BUT_START_PRB_NOT]. */
        uint64_t pyld_size_err         : 1;  /**< [  5:  5](R/W1C/H) Reads or clears enable for ECMP(0..2)_AB(0..1)_ERROR_STATUS[PYLD_SIZE_ERR]. */
        uint64_t srm_found_but_not_configured : 1;/**< [  6:  6](R/W1C/H) Reads or clears enable for ECMP(0..2)_AB(0..1)_ERROR_STATUS[SRM_FOUND_BUT_NOT_CONFIGURED]. */
        uint64_t srm_configured_but_not_found : 1;/**< [  7:  7](R/W1C/H) Reads or clears enable for ECMP(0..2)_AB(0..1)_ERROR_STATUS[SRM_CONFIGURED_BUT_NOT_FOUND]. */
        uint64_t prb_overflow_err      : 1;  /**< [  8:  8](R/W1C/H) Reads or clears enable for ECMP(0..2)_AB(0..1)_ERROR_STATUS[PRB_OVERFLOW_ERR]. */
        uint64_t prb_underflow_err     : 1;  /**< [  9:  9](R/W1C/H) Reads or clears enable for ECMP(0..2)_AB(0..1)_ERROR_STATUS[PRB_UNDERFLOW_ERR]. */
        uint64_t hdr_overflow_err      : 1;  /**< [ 10: 10](R/W1C/H) Reads or clears enable for ECMP(0..2)_AB(0..1)_ERROR_STATUS[HDR_OVERFLOW_ERR]. */
        uint64_t hdr_underflow_err     : 1;  /**< [ 11: 11](R/W1C/H) Reads or clears enable for ECMP(0..2)_AB(0..1)_ERROR_STATUS[HDR_UNDERFLOW_ERR]. */
        uint64_t reserved_12_15        : 4;
        uint64_t num_prb_zero_but_rb_not : 1;/**< [ 16: 16](R/W1C/H) Reads or clears enable for ECMP(0..2)_AB(0..1)_ERROR_STATUS[NUM_PRB_ZERO_BUT_RB_NOT]. */
        uint64_t syminc_not_zero       : 1;  /**< [ 17: 17](R/W1C/H) Reads or clears enable for ECMP(0..2)_AB(0..1)_ERROR_STATUS[SYMINC_NOT_ZERO]. */
        uint64_t reserved_18_23        : 6;
        uint64_t efxp_format_but_srm_sect_prsnt : 1;/**< [ 24: 24](R/W1C/H) Reads or clears enable for ECMP(0..2)_AB(0..1)_ERROR_STATUS[EFXP_FORMAT_BUT_SRM_SECT_PRSNT]. */
        uint64_t efxp_format_but_c_meth_not_bfp : 1;/**< [ 25: 25](R/W1C/H) Reads or clears enable for ECMP(0..2)_AB(0..1)_ERROR_STATUS[EFXP_FORMAT_BUT_C_METH_NOT_BFP]. */
        uint64_t reserved_26_63        : 38;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_ecmpx_abx_error_ena_w1c_s cn; */
};
typedef union cavm_ecmpx_abx_error_ena_w1c cavm_ecmpx_abx_error_ena_w1c_t;

static inline uint64_t CAVM_ECMPX_ABX_ERROR_ENA_W1C(uint64_t a, uint64_t b) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_ECMPX_ABX_ERROR_ENA_W1C(uint64_t a, uint64_t b)
{
    if (cavm_is_model(OCTEONTX_CNF20KA) && ((a<=2) && (b<=1)))
        return 0xc008406000c0ll + 0x100000000ll * ((a) & 0x3) + 0x10000ll * ((b) & 0x1);
    __cavm_csr_fatal("ECMPX_ABX_ERROR_ENA_W1C", 2, a, b, 0, 0, 0, 0);
}

#define typedef_CAVM_ECMPX_ABX_ERROR_ENA_W1C(a,b) cavm_ecmpx_abx_error_ena_w1c_t
#define bustype_CAVM_ECMPX_ABX_ERROR_ENA_W1C(a,b) CSR_TYPE_RSL
#define basename_CAVM_ECMPX_ABX_ERROR_ENA_W1C(a,b) "ECMPX_ABX_ERROR_ENA_W1C"
#define device_bar_CAVM_ECMPX_ABX_ERROR_ENA_W1C(a,b) 0x2 /* PF_BAR2 */
#define busnum_CAVM_ECMPX_ABX_ERROR_ENA_W1C(a,b) (a)
#define arguments_CAVM_ECMPX_ABX_ERROR_ENA_W1C(a,b) (a),(b),-1,-1

/**
 * Register (RSL) ecmp#_ab#_error_ena_w1s
 *
 * ECMP Error Enable Set Register
 * This register sets interrupt enable bits.
 */
union cavm_ecmpx_abx_error_ena_w1s
{
    uint64_t u;
    struct cavm_ecmpx_abx_error_ena_w1s_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_26_63        : 38;
        uint64_t efxp_format_but_c_meth_not_bfp : 1;/**< [ 25: 25](R/W1S/H) Reads or sets enable for ECMP(0..2)_AB(0..1)_ERROR_STATUS[EFXP_FORMAT_BUT_C_METH_NOT_BFP]. */
        uint64_t efxp_format_but_srm_sect_prsnt : 1;/**< [ 24: 24](R/W1S/H) Reads or sets enable for ECMP(0..2)_AB(0..1)_ERROR_STATUS[EFXP_FORMAT_BUT_SRM_SECT_PRSNT]. */
        uint64_t reserved_18_23        : 6;
        uint64_t syminc_not_zero       : 1;  /**< [ 17: 17](R/W1S/H) Reads or sets enable for ECMP(0..2)_AB(0..1)_ERROR_STATUS[SYMINC_NOT_ZERO]. */
        uint64_t num_prb_zero_but_rb_not : 1;/**< [ 16: 16](R/W1S/H) Reads or sets enable for ECMP(0..2)_AB(0..1)_ERROR_STATUS[NUM_PRB_ZERO_BUT_RB_NOT]. */
        uint64_t reserved_12_15        : 4;
        uint64_t hdr_underflow_err     : 1;  /**< [ 11: 11](R/W1S/H) Reads or sets enable for ECMP(0..2)_AB(0..1)_ERROR_STATUS[HDR_UNDERFLOW_ERR]. */
        uint64_t hdr_overflow_err      : 1;  /**< [ 10: 10](R/W1S/H) Reads or sets enable for ECMP(0..2)_AB(0..1)_ERROR_STATUS[HDR_OVERFLOW_ERR]. */
        uint64_t prb_underflow_err     : 1;  /**< [  9:  9](R/W1S/H) Reads or sets enable for ECMP(0..2)_AB(0..1)_ERROR_STATUS[PRB_UNDERFLOW_ERR]. */
        uint64_t prb_overflow_err      : 1;  /**< [  8:  8](R/W1S/H) Reads or sets enable for ECMP(0..2)_AB(0..1)_ERROR_STATUS[PRB_OVERFLOW_ERR]. */
        uint64_t srm_configured_but_not_found : 1;/**< [  7:  7](R/W1S/H) Reads or sets enable for ECMP(0..2)_AB(0..1)_ERROR_STATUS[SRM_CONFIGURED_BUT_NOT_FOUND]. */
        uint64_t srm_found_but_not_configured : 1;/**< [  6:  6](R/W1S/H) Reads or sets enable for ECMP(0..2)_AB(0..1)_ERROR_STATUS[SRM_FOUND_BUT_NOT_CONFIGURED]. */
        uint64_t pyld_size_err         : 1;  /**< [  5:  5](R/W1S/H) Reads or sets enable for ECMP(0..2)_AB(0..1)_ERROR_STATUS[PYLD_SIZE_ERR]. */
        uint64_t num_prb_zero_but_start_prb_not : 1;/**< [  4:  4](R/W1S/H) Reads or sets enable for ECMP(0..2)_AB(0..1)_ERROR_STATUS[NUM_PRB_ZERO_BUT_START_PRB_NOT]. */
        uint64_t ulaw_compbitwidth_err : 1;  /**< [  3:  3](R/W1S/H) Reads or sets enable for ECMP(0..2)_AB(0..1)_ERROR_STATUS[ULAW_COMPBITWIDTH_ERR]. */
        uint64_t modc_iqwidth_err      : 1;  /**< [  2:  2](R/W1S/H) Reads or sets enable for ECMP(0..2)_AB(0..1)_ERROR_STATUS[MODC_IQWIDTH_ERR]. */
        uint64_t reserved_1            : 1;
        uint64_t compmeth_err          : 1;  /**< [  0:  0](R/W1S/H) Reads or sets enable for ECMP(0..2)_AB(0..1)_ERROR_STATUS[COMPMETH_ERR]. */
#else /* Word 0 - Little Endian */
        uint64_t compmeth_err          : 1;  /**< [  0:  0](R/W1S/H) Reads or sets enable for ECMP(0..2)_AB(0..1)_ERROR_STATUS[COMPMETH_ERR]. */
        uint64_t reserved_1            : 1;
        uint64_t modc_iqwidth_err      : 1;  /**< [  2:  2](R/W1S/H) Reads or sets enable for ECMP(0..2)_AB(0..1)_ERROR_STATUS[MODC_IQWIDTH_ERR]. */
        uint64_t ulaw_compbitwidth_err : 1;  /**< [  3:  3](R/W1S/H) Reads or sets enable for ECMP(0..2)_AB(0..1)_ERROR_STATUS[ULAW_COMPBITWIDTH_ERR]. */
        uint64_t num_prb_zero_but_start_prb_not : 1;/**< [  4:  4](R/W1S/H) Reads or sets enable for ECMP(0..2)_AB(0..1)_ERROR_STATUS[NUM_PRB_ZERO_BUT_START_PRB_NOT]. */
        uint64_t pyld_size_err         : 1;  /**< [  5:  5](R/W1S/H) Reads or sets enable for ECMP(0..2)_AB(0..1)_ERROR_STATUS[PYLD_SIZE_ERR]. */
        uint64_t srm_found_but_not_configured : 1;/**< [  6:  6](R/W1S/H) Reads or sets enable for ECMP(0..2)_AB(0..1)_ERROR_STATUS[SRM_FOUND_BUT_NOT_CONFIGURED]. */
        uint64_t srm_configured_but_not_found : 1;/**< [  7:  7](R/W1S/H) Reads or sets enable for ECMP(0..2)_AB(0..1)_ERROR_STATUS[SRM_CONFIGURED_BUT_NOT_FOUND]. */
        uint64_t prb_overflow_err      : 1;  /**< [  8:  8](R/W1S/H) Reads or sets enable for ECMP(0..2)_AB(0..1)_ERROR_STATUS[PRB_OVERFLOW_ERR]. */
        uint64_t prb_underflow_err     : 1;  /**< [  9:  9](R/W1S/H) Reads or sets enable for ECMP(0..2)_AB(0..1)_ERROR_STATUS[PRB_UNDERFLOW_ERR]. */
        uint64_t hdr_overflow_err      : 1;  /**< [ 10: 10](R/W1S/H) Reads or sets enable for ECMP(0..2)_AB(0..1)_ERROR_STATUS[HDR_OVERFLOW_ERR]. */
        uint64_t hdr_underflow_err     : 1;  /**< [ 11: 11](R/W1S/H) Reads or sets enable for ECMP(0..2)_AB(0..1)_ERROR_STATUS[HDR_UNDERFLOW_ERR]. */
        uint64_t reserved_12_15        : 4;
        uint64_t num_prb_zero_but_rb_not : 1;/**< [ 16: 16](R/W1S/H) Reads or sets enable for ECMP(0..2)_AB(0..1)_ERROR_STATUS[NUM_PRB_ZERO_BUT_RB_NOT]. */
        uint64_t syminc_not_zero       : 1;  /**< [ 17: 17](R/W1S/H) Reads or sets enable for ECMP(0..2)_AB(0..1)_ERROR_STATUS[SYMINC_NOT_ZERO]. */
        uint64_t reserved_18_23        : 6;
        uint64_t efxp_format_but_srm_sect_prsnt : 1;/**< [ 24: 24](R/W1S/H) Reads or sets enable for ECMP(0..2)_AB(0..1)_ERROR_STATUS[EFXP_FORMAT_BUT_SRM_SECT_PRSNT]. */
        uint64_t efxp_format_but_c_meth_not_bfp : 1;/**< [ 25: 25](R/W1S/H) Reads or sets enable for ECMP(0..2)_AB(0..1)_ERROR_STATUS[EFXP_FORMAT_BUT_C_METH_NOT_BFP]. */
        uint64_t reserved_26_63        : 38;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_ecmpx_abx_error_ena_w1s_s cn; */
};
typedef union cavm_ecmpx_abx_error_ena_w1s cavm_ecmpx_abx_error_ena_w1s_t;

static inline uint64_t CAVM_ECMPX_ABX_ERROR_ENA_W1S(uint64_t a, uint64_t b) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_ECMPX_ABX_ERROR_ENA_W1S(uint64_t a, uint64_t b)
{
    if (cavm_is_model(OCTEONTX_CNF20KA) && ((a<=2) && (b<=1)))
        return 0xc008406000b8ll + 0x100000000ll * ((a) & 0x3) + 0x10000ll * ((b) & 0x1);
    __cavm_csr_fatal("ECMPX_ABX_ERROR_ENA_W1S", 2, a, b, 0, 0, 0, 0);
}

#define typedef_CAVM_ECMPX_ABX_ERROR_ENA_W1S(a,b) cavm_ecmpx_abx_error_ena_w1s_t
#define bustype_CAVM_ECMPX_ABX_ERROR_ENA_W1S(a,b) CSR_TYPE_RSL
#define basename_CAVM_ECMPX_ABX_ERROR_ENA_W1S(a,b) "ECMPX_ABX_ERROR_ENA_W1S"
#define device_bar_CAVM_ECMPX_ABX_ERROR_ENA_W1S(a,b) 0x2 /* PF_BAR2 */
#define busnum_CAVM_ECMPX_ABX_ERROR_ENA_W1S(a,b) (a)
#define arguments_CAVM_ECMPX_ABX_ERROR_ENA_W1S(a,b) (a),(b),-1,-1

/**
 * Register (RSL) ecmp#_ab#_error_enable0
 *
 * ECMP Error Enable Register 0
 * This register enables reporting the source of read DMA overflow/underflow errors.
 */
union cavm_ecmpx_abx_error_enable0
{
    uint64_t u;
    struct cavm_ecmpx_abx_error_enable0_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_6_63         : 58;
        uint64_t rp1_of_en             : 1;  /**< [  5:  5](R/W) Read port 1 overflow. */
        uint64_t rp0_of_en             : 1;  /**< [  4:  4](R/W) Read port 0 overflow. */
        uint64_t reserved_2_3          : 2;
        uint64_t rp1_uf_en             : 1;  /**< [  1:  1](R/W) Read port 1 underflow. */
        uint64_t rp0_uf_en             : 1;  /**< [  0:  0](R/W) Read port 0 underflow. */
#else /* Word 0 - Little Endian */
        uint64_t rp0_uf_en             : 1;  /**< [  0:  0](R/W) Read port 0 underflow. */
        uint64_t rp1_uf_en             : 1;  /**< [  1:  1](R/W) Read port 1 underflow. */
        uint64_t reserved_2_3          : 2;
        uint64_t rp0_of_en             : 1;  /**< [  4:  4](R/W) Read port 0 overflow. */
        uint64_t rp1_of_en             : 1;  /**< [  5:  5](R/W) Read port 1 overflow. */
        uint64_t reserved_6_63         : 58;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_ecmpx_abx_error_enable0_s cn; */
};
typedef union cavm_ecmpx_abx_error_enable0 cavm_ecmpx_abx_error_enable0_t;

static inline uint64_t CAVM_ECMPX_ABX_ERROR_ENABLE0(uint64_t a, uint64_t b) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_ECMPX_ABX_ERROR_ENABLE0(uint64_t a, uint64_t b)
{
    if (cavm_is_model(OCTEONTX_CNF20KA) && ((a<=2) && (b<=1)))
        return 0xc00840600040ll + 0x100000000ll * ((a) & 0x3) + 0x10000ll * ((b) & 0x1);
    __cavm_csr_fatal("ECMPX_ABX_ERROR_ENABLE0", 2, a, b, 0, 0, 0, 0);
}

#define typedef_CAVM_ECMPX_ABX_ERROR_ENABLE0(a,b) cavm_ecmpx_abx_error_enable0_t
#define bustype_CAVM_ECMPX_ABX_ERROR_ENABLE0(a,b) CSR_TYPE_RSL
#define basename_CAVM_ECMPX_ABX_ERROR_ENABLE0(a,b) "ECMPX_ABX_ERROR_ENABLE0"
#define device_bar_CAVM_ECMPX_ABX_ERROR_ENABLE0(a,b) 0x2 /* PF_BAR2 */
#define busnum_CAVM_ECMPX_ABX_ERROR_ENABLE0(a,b) (a)
#define arguments_CAVM_ECMPX_ABX_ERROR_ENABLE0(a,b) (a),(b),-1,-1

/**
 * Register (RSL) ecmp#_ab#_error_fatal
 *
 * ECMP Error Fatal Reporting Registers
 */
union cavm_ecmpx_abx_error_fatal
{
    uint64_t u;
    struct cavm_ecmpx_abx_error_fatal_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_26_63        : 38;
        uint64_t efxp_format_but_c_meth_not_bfp : 1;/**< [ 25: 25](R/W) ECMP()_AB()_JDX()_CFG[DATA_FORMAT] is set to ECMP_DATA_FORMAT_E::EFXP and
                                                                 ECMP()_AB()_JDX()_CFG[COMP_METH] not set to ECPRI_COMP_METH_E::BFP and
                                                                 ECMP()_AB()_JDX()_CFG[FIX_MODE_EN] = 1 (Fixed mode). */
        uint64_t efxp_format_but_srm_sect_prsnt : 1;/**< [ 24: 24](R/W) ECMP()_AB()_JDX()_CFG[DATA_FORMAT] is set to ECMP_DATA_FORMAT_E::EFXP and
                                                                 ECMP()_AB()_JDX()_CFG[SRM_SECTION_PRESENT] and
                                                                 ECMP()_AB()_JDX()_CFG[FIX_MODE_EN] = 0 (Flexible mode). */
        uint64_t reserved_18_23        : 6;
        uint64_t syminc_not_zero       : 1;  /**< [ 17: 17](R/W) ECPRI_SECTION_HDR_SW_S[SYM_INC] is not zero. */
        uint64_t num_prb_zero_but_rb_not : 1;/**< [ 16: 16](R/W) ECPRI_SECTION_HDR_SW_S[NUM_PRB]\<15\> is set to indicate NUM_PRB zero feature, but
                                                                 ECPRI_SECTION_HDR_SW_S[RB] is non-zero. */
        uint64_t reserved_12_15        : 4;
        uint64_t hdr_underflow_err     : 1;  /**< [ 11: 11](R/W) Header (Port 0) underflow.
                                                                 0 = Reported as non-fatal.
                                                                 1 = Reported as fatal to PSM. */
        uint64_t hdr_overflow_err      : 1;  /**< [ 10: 10](R/W) Header (Port 0) overflow.
                                                                 0 = Reported as non-fatal.
                                                                 1 = Reported as fatal to PSM. */
        uint64_t prb_underflow_err     : 1;  /**< [  9:  9](R/W) PRB (Port 1) underflow.
                                                                 0 = Reported as non-fatal.
                                                                 1 = Reported as fatal to PSM. */
        uint64_t prb_overflow_err      : 1;  /**< [  8:  8](R/W) PRB (Port 1) overflow.
                                                                 0 = Reported as non-fatal.
                                                                 1 = Reported as fatal to PSM. */
        uint64_t srm_configured_but_not_found : 1;/**< [  7:  7](R/W) ECMP()_AB()_JDX()_CFG[SRM_SECTION_PRESENT] is set and ECMP()_AB()_JDX()_CFG[FIX_MODE_EN] =
                                                                 0 (Flexible mode), but hardware did not find any SRM section within the packet. Packet
                                                                 will be processed assuming it had SRM section in it.
                                                                 0 = Reported as non-fatal.
                                                                 1 = Reported as fatal to PSM. */
        uint64_t srm_found_but_not_configured : 1;/**< [  6:  6](R/W) When ECMP()_AB()_JDX()_CFG[SRM_SECTION_PRESENT] is clear and
                                                                 ECMP()_AB()_JDX()_CFG[FIX_MODE_EN] = 0 (Flexible mode), but hardware found at least one SRM
                                                                 section within the packet. Packet will be process assuming it had no SRM section in it.
                                                                 0 = Reported as non-fatal.
                                                                 1 = Reported as fatal to PSM. */
        uint64_t pyld_size_err         : 1;  /**< [  5:  5](R/W) Payload size reported in ECPRI_HDR_SW_S[PYLD_SIZE] does not match total
                                                                 payload size as driven by engine.
                                                                 If ECMP()_AB()_JDX()_CFG[ECPRI_HDR_PRESENT] is set, engine does not count ECPRI
                                                                 common header (4 bytes) as part of payload size, as defined by ORAN.
                                                                 0 = Reported as non-fatal.
                                                                 1 = Reported as fatal to PSM. */
        uint64_t num_prb_zero_but_start_prb_not : 1;/**< [  4:  4](R/W) ECPRI_SECTION_HDR_SW_S[NUM_PRB]\<15\> is set to indicate NUM_PRB zero feature, but
                                                                 ECPRI_SECTION_HDR_SW_S[START_PRB] is non-zero.
                                                                 0 = Reported as non-fatal.
                                                                 1 = Reported as fatal to PSM. */
        uint64_t ulaw_compbitwidth_err : 1;  /**< [  3:  3](R/W) {mu}-Law Compression bit width error. Set when the compressed bit width
                                                                 value specified in ECMP_MU_LAW_HDR_S for a PRB with {mu}-Law compression is
                                                                 not supported (compBitWdith=16 or compBitWdith\<6).
                                                                 0 = Reported as non-fatal.
                                                                 1 = Reported as fatal to PSM. */
        uint64_t modc_iqwidth_err      : 1;  /**< [  2:  2](R/W) Modulation Compression I/Q width error. Set when a section or packet with
                                                                 Modulation Compression has an unsupported I/Q width (iqWidth \> 7).
                                                                 Applicable to both ECPRI_COMP_METH_E[MOD] and ECPRI_COMP_METH_E[MOD_SRM].
                                                                 0 = Reported as non-fatal.
                                                                 1 = Reported as fatal to PSM. */
        uint64_t bfpc_iqwidth_err      : 1;  /**< [  1:  1](R/W) Block Floating Point compression I/Q width error. Set when a section or packet with
                                                                 BFP Compression has an unsupported I/Q width (iqWidth=16 or iqWidth\<6).
                                                                 0 = Reported as non-fatal.
                                                                 1 = Reported as fatal to PSM. */
        uint64_t compmeth_err          : 1;  /**< [  0:  0](R/W) Compression method error. Set when a packet's fixed compression method or a
                                                                 section's flexible compression method is not supported, i.e. is not
                                                                 enumerated by ECPRI_COMP_METH_E.
                                                                 0 = Reported as non-fatal.
                                                                 1 = Reported as fatal to PSM. */
#else /* Word 0 - Little Endian */
        uint64_t compmeth_err          : 1;  /**< [  0:  0](R/W) Compression method error. Set when a packet's fixed compression method or a
                                                                 section's flexible compression method is not supported, i.e. is not
                                                                 enumerated by ECPRI_COMP_METH_E.
                                                                 0 = Reported as non-fatal.
                                                                 1 = Reported as fatal to PSM. */
        uint64_t bfpc_iqwidth_err      : 1;  /**< [  1:  1](R/W) Block Floating Point compression I/Q width error. Set when a section or packet with
                                                                 BFP Compression has an unsupported I/Q width (iqWidth=16 or iqWidth\<6).
                                                                 0 = Reported as non-fatal.
                                                                 1 = Reported as fatal to PSM. */
        uint64_t modc_iqwidth_err      : 1;  /**< [  2:  2](R/W) Modulation Compression I/Q width error. Set when a section or packet with
                                                                 Modulation Compression has an unsupported I/Q width (iqWidth \> 7).
                                                                 Applicable to both ECPRI_COMP_METH_E[MOD] and ECPRI_COMP_METH_E[MOD_SRM].
                                                                 0 = Reported as non-fatal.
                                                                 1 = Reported as fatal to PSM. */
        uint64_t ulaw_compbitwidth_err : 1;  /**< [  3:  3](R/W) {mu}-Law Compression bit width error. Set when the compressed bit width
                                                                 value specified in ECMP_MU_LAW_HDR_S for a PRB with {mu}-Law compression is
                                                                 not supported (compBitWdith=16 or compBitWdith\<6).
                                                                 0 = Reported as non-fatal.
                                                                 1 = Reported as fatal to PSM. */
        uint64_t num_prb_zero_but_start_prb_not : 1;/**< [  4:  4](R/W) ECPRI_SECTION_HDR_SW_S[NUM_PRB]\<15\> is set to indicate NUM_PRB zero feature, but
                                                                 ECPRI_SECTION_HDR_SW_S[START_PRB] is non-zero.
                                                                 0 = Reported as non-fatal.
                                                                 1 = Reported as fatal to PSM. */
        uint64_t pyld_size_err         : 1;  /**< [  5:  5](R/W) Payload size reported in ECPRI_HDR_SW_S[PYLD_SIZE] does not match total
                                                                 payload size as driven by engine.
                                                                 If ECMP()_AB()_JDX()_CFG[ECPRI_HDR_PRESENT] is set, engine does not count ECPRI
                                                                 common header (4 bytes) as part of payload size, as defined by ORAN.
                                                                 0 = Reported as non-fatal.
                                                                 1 = Reported as fatal to PSM. */
        uint64_t srm_found_but_not_configured : 1;/**< [  6:  6](R/W) When ECMP()_AB()_JDX()_CFG[SRM_SECTION_PRESENT] is clear and
                                                                 ECMP()_AB()_JDX()_CFG[FIX_MODE_EN] = 0 (Flexible mode), but hardware found at least one SRM
                                                                 section within the packet. Packet will be process assuming it had no SRM section in it.
                                                                 0 = Reported as non-fatal.
                                                                 1 = Reported as fatal to PSM. */
        uint64_t srm_configured_but_not_found : 1;/**< [  7:  7](R/W) ECMP()_AB()_JDX()_CFG[SRM_SECTION_PRESENT] is set and ECMP()_AB()_JDX()_CFG[FIX_MODE_EN] =
                                                                 0 (Flexible mode), but hardware did not find any SRM section within the packet. Packet
                                                                 will be processed assuming it had SRM section in it.
                                                                 0 = Reported as non-fatal.
                                                                 1 = Reported as fatal to PSM. */
        uint64_t prb_overflow_err      : 1;  /**< [  8:  8](R/W) PRB (Port 1) overflow.
                                                                 0 = Reported as non-fatal.
                                                                 1 = Reported as fatal to PSM. */
        uint64_t prb_underflow_err     : 1;  /**< [  9:  9](R/W) PRB (Port 1) underflow.
                                                                 0 = Reported as non-fatal.
                                                                 1 = Reported as fatal to PSM. */
        uint64_t hdr_overflow_err      : 1;  /**< [ 10: 10](R/W) Header (Port 0) overflow.
                                                                 0 = Reported as non-fatal.
                                                                 1 = Reported as fatal to PSM. */
        uint64_t hdr_underflow_err     : 1;  /**< [ 11: 11](R/W) Header (Port 0) underflow.
                                                                 0 = Reported as non-fatal.
                                                                 1 = Reported as fatal to PSM. */
        uint64_t reserved_12_15        : 4;
        uint64_t num_prb_zero_but_rb_not : 1;/**< [ 16: 16](R/W) ECPRI_SECTION_HDR_SW_S[NUM_PRB]\<15\> is set to indicate NUM_PRB zero feature, but
                                                                 ECPRI_SECTION_HDR_SW_S[RB] is non-zero. */
        uint64_t syminc_not_zero       : 1;  /**< [ 17: 17](R/W) ECPRI_SECTION_HDR_SW_S[SYM_INC] is not zero. */
        uint64_t reserved_18_23        : 6;
        uint64_t efxp_format_but_srm_sect_prsnt : 1;/**< [ 24: 24](R/W) ECMP()_AB()_JDX()_CFG[DATA_FORMAT] is set to ECMP_DATA_FORMAT_E::EFXP and
                                                                 ECMP()_AB()_JDX()_CFG[SRM_SECTION_PRESENT] and
                                                                 ECMP()_AB()_JDX()_CFG[FIX_MODE_EN] = 0 (Flexible mode). */
        uint64_t efxp_format_but_c_meth_not_bfp : 1;/**< [ 25: 25](R/W) ECMP()_AB()_JDX()_CFG[DATA_FORMAT] is set to ECMP_DATA_FORMAT_E::EFXP and
                                                                 ECMP()_AB()_JDX()_CFG[COMP_METH] not set to ECPRI_COMP_METH_E::BFP and
                                                                 ECMP()_AB()_JDX()_CFG[FIX_MODE_EN] = 1 (Fixed mode). */
        uint64_t reserved_26_63        : 38;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_ecmpx_abx_error_fatal_s cn; */
};
typedef union cavm_ecmpx_abx_error_fatal cavm_ecmpx_abx_error_fatal_t;

static inline uint64_t CAVM_ECMPX_ABX_ERROR_FATAL(uint64_t a, uint64_t b) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_ECMPX_ABX_ERROR_FATAL(uint64_t a, uint64_t b)
{
    if (cavm_is_model(OCTEONTX_CNF20KA) && ((a<=2) && (b<=1)))
        return 0xc008406000c8ll + 0x100000000ll * ((a) & 0x3) + 0x10000ll * ((b) & 0x1);
    __cavm_csr_fatal("ECMPX_ABX_ERROR_FATAL", 2, a, b, 0, 0, 0, 0);
}

#define typedef_CAVM_ECMPX_ABX_ERROR_FATAL(a,b) cavm_ecmpx_abx_error_fatal_t
#define bustype_CAVM_ECMPX_ABX_ERROR_FATAL(a,b) CSR_TYPE_RSL
#define basename_CAVM_ECMPX_ABX_ERROR_FATAL(a,b) "ECMPX_ABX_ERROR_FATAL"
#define device_bar_CAVM_ECMPX_ABX_ERROR_FATAL(a,b) 0x2 /* PF_BAR2 */
#define busnum_CAVM_ECMPX_ABX_ERROR_FATAL(a,b) (a)
#define arguments_CAVM_ECMPX_ABX_ERROR_FATAL(a,b) (a),(b),-1,-1

/**
 * Register (RSL) ecmp#_ab#_error_source0
 *
 * ECMP Error Source Register 0
 * This register reports the source of read DMA overflow/underflow errors.
 */
union cavm_ecmpx_abx_error_source0
{
    uint64_t u;
    struct cavm_ecmpx_abx_error_source0_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_48_63        : 16;
        uint64_t rp1_jobid             : 16; /**< [ 47: 32](RO/H) Job ID for read port 1 overflow/underflow. */
        uint64_t rp0_jobid             : 16; /**< [ 31: 16](RO/H) Job ID for read port 0 overflow/underflow. */
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
        uint64_t rp0_jobid             : 16; /**< [ 31: 16](RO/H) Job ID for read port 0 overflow/underflow. */
        uint64_t rp1_jobid             : 16; /**< [ 47: 32](RO/H) Job ID for read port 1 overflow/underflow. */
        uint64_t reserved_48_63        : 16;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_ecmpx_abx_error_source0_s cn; */
};
typedef union cavm_ecmpx_abx_error_source0 cavm_ecmpx_abx_error_source0_t;

static inline uint64_t CAVM_ECMPX_ABX_ERROR_SOURCE0(uint64_t a, uint64_t b) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_ECMPX_ABX_ERROR_SOURCE0(uint64_t a, uint64_t b)
{
    if (cavm_is_model(OCTEONTX_CNF20KA) && ((a<=2) && (b<=1)))
        return 0xc00840600030ll + 0x100000000ll * ((a) & 0x3) + 0x10000ll * ((b) & 0x1);
    __cavm_csr_fatal("ECMPX_ABX_ERROR_SOURCE0", 2, a, b, 0, 0, 0, 0);
}

#define typedef_CAVM_ECMPX_ABX_ERROR_SOURCE0(a,b) cavm_ecmpx_abx_error_source0_t
#define bustype_CAVM_ECMPX_ABX_ERROR_SOURCE0(a,b) CSR_TYPE_RSL
#define basename_CAVM_ECMPX_ABX_ERROR_SOURCE0(a,b) "ECMPX_ABX_ERROR_SOURCE0"
#define device_bar_CAVM_ECMPX_ABX_ERROR_SOURCE0(a,b) 0x2 /* PF_BAR2 */
#define busnum_CAVM_ECMPX_ABX_ERROR_SOURCE0(a,b) (a)
#define arguments_CAVM_ECMPX_ABX_ERROR_SOURCE0(a,b) (a),(b),-1,-1

/**
 * Register (RSL) ecmp#_ab#_error_status
 *
 * ECMP Error Status Register
 * These registers record normal errors across the ECMP.
 * When an error occurs, ECMP sends  message to PSM.
 */
union cavm_ecmpx_abx_error_status
{
    uint64_t u;
    struct cavm_ecmpx_abx_error_status_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_26_63        : 38;
        uint64_t efxp_format_but_c_meth_not_bfp : 1;/**< [ 25: 25](R/W1C/H) ECMP()_AB()_JDX()_CFG[DATA_FORMAT] is set to ECMP_DATA_FORMAT_E::EFXP and
                                                                 ECMP()_AB()_JDX()_CFG[COMP_METH] not set to ECPRI_COMP_METH_E::BFP and
                                                                 ECMP()_AB()_JDX()_CFG[FIX_MODE_EN] = 1 (Fixed mode). */
        uint64_t efxp_format_but_srm_sect_prsnt : 1;/**< [ 24: 24](R/W1C/H) ECMP()_AB()_JDX()_CFG[DATA_FORMAT] is set to ECMP_DATA_FORMAT_E::EFXP and
                                                                 ECMP()_AB()_JDX()_CFG[SRM_SECTION_PRESENT] and
                                                                 ECMP()_AB()_JDX()_CFG[FIX_MODE_EN] = 0 (Flexible mode). */
        uint64_t reserved_18_23        : 6;
        uint64_t syminc_not_zero       : 1;  /**< [ 17: 17](R/W1C/H) ECPRI_SECTION_HDR_SW_S[SYM_INC] is not zero. */
        uint64_t num_prb_zero_but_rb_not : 1;/**< [ 16: 16](R/W1C/H) ECPRI_SECTION_HDR_SW_S[NUM_PRB]\<15\> is set to indicate NUM_PRB zero feature, but
                                                                 ECPRI_SECTION_HDR_SW_S[RB] is non-zero. */
        uint64_t reserved_12_15        : 4;
        uint64_t hdr_underflow_err     : 1;  /**< [ 11: 11](R/W1C/H) Header (Port 0) underflow. */
        uint64_t hdr_overflow_err      : 1;  /**< [ 10: 10](R/W1C/H) Header (Port 0) overflow. */
        uint64_t prb_underflow_err     : 1;  /**< [  9:  9](R/W1C/H) PRB (Port 1) underflow. */
        uint64_t prb_overflow_err      : 1;  /**< [  8:  8](R/W1C/H) PRB (Port 1) overflow. */
        uint64_t srm_configured_but_not_found : 1;/**< [  7:  7](R/W1C/H) ECMP()_AB()_JDX()_CFG[SRM_SECTION_PRESENT] is set and ECMP()_AB()_JDX()_CFG[FIX_MODE_EN] =
                                                                 0 (Flexible mode), but hardware did not find any SRM section within the packet. Packet
                                                                 will be processed assuming it had SRM section in it. */
        uint64_t srm_found_but_not_configured : 1;/**< [  6:  6](R/W1C/H) ECMP()_AB()_JDX()_CFG[SRM_SECTION_PRESENT] is clear and ECMP()_AB()_JDX()_CFG[FIX_MODE_EN]
                                                                 = 0 (Flexible mode), but hardware did find at least one SRM section within the packet.
                                                                 Packet will be process assuming it had no SRM section in it. */
        uint64_t pyld_size_err         : 1;  /**< [  5:  5](R/W1C/H) Payload size reported in ECPRI_HDR_SW_S[PYLD_SIZE] does not match total
                                                                 payload size as driven by engine. Engine does not count ECPRI common header (4 bytes)
                                                                 as part of payload size, as defined by ORAN.
                                                                 Not applicaple when ECMP()_AB()_JDX()_CFG[ECPRI_HDR_PRESENT] is not set.
                                                                 Not applicaple for compression methods ECPRI_COMP_METH_E[MOD_SRM] and ECPRI_COMP_METH_E[BFP_SRM] */
        uint64_t num_prb_zero_but_start_prb_not : 1;/**< [  4:  4](R/W1C/H) ECPRI_SECTION_HDR_SW_S[NUM_PRB]\<15\> is set to indicate NUM_PRB zero feature, but
                                                                 ECPRI_SECTION_HDR_SW_S[START_PRB] is non-zero. */
        uint64_t ulaw_compbitwidth_err : 1;  /**< [  3:  3](R/W1C/H) {mu}-Law Compression bit width error. Set when the compressed bit width
                                                                 value specified in ECMP_MU_LAW_HDR_S for a PRB with {mu}-Law compression is
                                                                 not supported (compBitWdith=1).
                                                                 Might be set as well when amount of ECMP_MU_LAW_HDR_S is not sufficient, which
                                                                 causes read port 0 underflow and will be reported as ECMP()_AB()_ERROR_SOURCE0[RP0_UF] */
        uint64_t modc_iqwidth_err      : 1;  /**< [  2:  2](R/W1C/H) Modulation Compression I/Q width error. Set when a section or packet with
                                                                 Modulation Compression has an unsupported I/Q width (iqWidth \> 7).
                                                                 Applicable to both ECPRI_COMP_METH_E[MOD] and ECPRI_COMP_METH_E[MOD_SRM]. */
        uint64_t reserved_1            : 1;
        uint64_t compmeth_err          : 1;  /**< [  0:  0](R/W1C/H) Compression method error. Set when a packet's fixed compression method or a
                                                                 section's flexible compression method is not supported, i.e. is not
                                                                 enumerated by ECPRI_COMP_METH_E. */
#else /* Word 0 - Little Endian */
        uint64_t compmeth_err          : 1;  /**< [  0:  0](R/W1C/H) Compression method error. Set when a packet's fixed compression method or a
                                                                 section's flexible compression method is not supported, i.e. is not
                                                                 enumerated by ECPRI_COMP_METH_E. */
        uint64_t reserved_1            : 1;
        uint64_t modc_iqwidth_err      : 1;  /**< [  2:  2](R/W1C/H) Modulation Compression I/Q width error. Set when a section or packet with
                                                                 Modulation Compression has an unsupported I/Q width (iqWidth \> 7).
                                                                 Applicable to both ECPRI_COMP_METH_E[MOD] and ECPRI_COMP_METH_E[MOD_SRM]. */
        uint64_t ulaw_compbitwidth_err : 1;  /**< [  3:  3](R/W1C/H) {mu}-Law Compression bit width error. Set when the compressed bit width
                                                                 value specified in ECMP_MU_LAW_HDR_S for a PRB with {mu}-Law compression is
                                                                 not supported (compBitWdith=1).
                                                                 Might be set as well when amount of ECMP_MU_LAW_HDR_S is not sufficient, which
                                                                 causes read port 0 underflow and will be reported as ECMP()_AB()_ERROR_SOURCE0[RP0_UF] */
        uint64_t num_prb_zero_but_start_prb_not : 1;/**< [  4:  4](R/W1C/H) ECPRI_SECTION_HDR_SW_S[NUM_PRB]\<15\> is set to indicate NUM_PRB zero feature, but
                                                                 ECPRI_SECTION_HDR_SW_S[START_PRB] is non-zero. */
        uint64_t pyld_size_err         : 1;  /**< [  5:  5](R/W1C/H) Payload size reported in ECPRI_HDR_SW_S[PYLD_SIZE] does not match total
                                                                 payload size as driven by engine. Engine does not count ECPRI common header (4 bytes)
                                                                 as part of payload size, as defined by ORAN.
                                                                 Not applicaple when ECMP()_AB()_JDX()_CFG[ECPRI_HDR_PRESENT] is not set.
                                                                 Not applicaple for compression methods ECPRI_COMP_METH_E[MOD_SRM] and ECPRI_COMP_METH_E[BFP_SRM] */
        uint64_t srm_found_but_not_configured : 1;/**< [  6:  6](R/W1C/H) ECMP()_AB()_JDX()_CFG[SRM_SECTION_PRESENT] is clear and ECMP()_AB()_JDX()_CFG[FIX_MODE_EN]
                                                                 = 0 (Flexible mode), but hardware did find at least one SRM section within the packet.
                                                                 Packet will be process assuming it had no SRM section in it. */
        uint64_t srm_configured_but_not_found : 1;/**< [  7:  7](R/W1C/H) ECMP()_AB()_JDX()_CFG[SRM_SECTION_PRESENT] is set and ECMP()_AB()_JDX()_CFG[FIX_MODE_EN] =
                                                                 0 (Flexible mode), but hardware did not find any SRM section within the packet. Packet
                                                                 will be processed assuming it had SRM section in it. */
        uint64_t prb_overflow_err      : 1;  /**< [  8:  8](R/W1C/H) PRB (Port 1) overflow. */
        uint64_t prb_underflow_err     : 1;  /**< [  9:  9](R/W1C/H) PRB (Port 1) underflow. */
        uint64_t hdr_overflow_err      : 1;  /**< [ 10: 10](R/W1C/H) Header (Port 0) overflow. */
        uint64_t hdr_underflow_err     : 1;  /**< [ 11: 11](R/W1C/H) Header (Port 0) underflow. */
        uint64_t reserved_12_15        : 4;
        uint64_t num_prb_zero_but_rb_not : 1;/**< [ 16: 16](R/W1C/H) ECPRI_SECTION_HDR_SW_S[NUM_PRB]\<15\> is set to indicate NUM_PRB zero feature, but
                                                                 ECPRI_SECTION_HDR_SW_S[RB] is non-zero. */
        uint64_t syminc_not_zero       : 1;  /**< [ 17: 17](R/W1C/H) ECPRI_SECTION_HDR_SW_S[SYM_INC] is not zero. */
        uint64_t reserved_18_23        : 6;
        uint64_t efxp_format_but_srm_sect_prsnt : 1;/**< [ 24: 24](R/W1C/H) ECMP()_AB()_JDX()_CFG[DATA_FORMAT] is set to ECMP_DATA_FORMAT_E::EFXP and
                                                                 ECMP()_AB()_JDX()_CFG[SRM_SECTION_PRESENT] and
                                                                 ECMP()_AB()_JDX()_CFG[FIX_MODE_EN] = 0 (Flexible mode). */
        uint64_t efxp_format_but_c_meth_not_bfp : 1;/**< [ 25: 25](R/W1C/H) ECMP()_AB()_JDX()_CFG[DATA_FORMAT] is set to ECMP_DATA_FORMAT_E::EFXP and
                                                                 ECMP()_AB()_JDX()_CFG[COMP_METH] not set to ECPRI_COMP_METH_E::BFP and
                                                                 ECMP()_AB()_JDX()_CFG[FIX_MODE_EN] = 1 (Fixed mode). */
        uint64_t reserved_26_63        : 38;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_ecmpx_abx_error_status_s cn; */
};
typedef union cavm_ecmpx_abx_error_status cavm_ecmpx_abx_error_status_t;

static inline uint64_t CAVM_ECMPX_ABX_ERROR_STATUS(uint64_t a, uint64_t b) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_ECMPX_ABX_ERROR_STATUS(uint64_t a, uint64_t b)
{
    if (cavm_is_model(OCTEONTX_CNF20KA) && ((a<=2) && (b<=1)))
        return 0xc008406000b0ll + 0x100000000ll * ((a) & 0x3) + 0x10000ll * ((b) & 0x1);
    __cavm_csr_fatal("ECMPX_ABX_ERROR_STATUS", 2, a, b, 0, 0, 0, 0);
}

#define typedef_CAVM_ECMPX_ABX_ERROR_STATUS(a,b) cavm_ecmpx_abx_error_status_t
#define bustype_CAVM_ECMPX_ABX_ERROR_STATUS(a,b) CSR_TYPE_RSL
#define basename_CAVM_ECMPX_ABX_ERROR_STATUS(a,b) "ECMPX_ABX_ERROR_STATUS"
#define device_bar_CAVM_ECMPX_ABX_ERROR_STATUS(a,b) 0x2 /* PF_BAR2 */
#define busnum_CAVM_ECMPX_ABX_ERROR_STATUS(a,b) (a)
#define arguments_CAVM_ECMPX_ABX_ERROR_STATUS(a,b) (a),(b),-1,-1

/**
 * Register (RSL) ecmp#_ab#_jdx#_cfg
 *
 * ECMP AB Job Configuration Register
 * This register space contains the ECMP job configuration data.
 * Software should not write this register directly, but instead use this
 * format when writing the job configuration section of the job descriptor.
 */
union cavm_ecmpx_abx_jdxx_cfg
{
    uint64_t u;
    struct cavm_ecmpx_abx_jdxx_cfg_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_34_63        : 30;
        uint64_t data_format           : 2;  /**< [ 33: 32](R/W) \<pre\>
                                                                 Input Data Format. Values are enumerated by ECMP_DATA_FORMAT_E. Invalid values are reserved.

                                                                 typedef enum logic [1:0] { // ECMP_DATA_FORMAT_E
                                                                    FXP   = 0x0,  // FXP Format.  Applicable for all supported compression methods.
                                                                    EFXP  = 0x1,  // eFXP Format. Applicable for ECPRI_COMP_METH_E::BFP.
                                                                    IQFP  = 0x2   // IQFP Format. Applicable for ECPRI_COMP_METH_E::BFP and
                                                                 ECPRI_COMP_METH_E::BFP_SRM.
                                                                 } ECMP_DATA_FORMAT_E;
                                                                 \</pre\> */
        uint64_t num_sections          : 8;  /**< [ 31: 24](R/W) Number of data sections in the packet. Must be non-zero. */
        uint64_t reserved_23           : 1;
        uint64_t bfp_iqfp_cfg_exp      : 4;  /**< [ 22: 19](R/W) Configured exponent for BFP with IQFP input format */
        uint64_t bfp_fxp_user_exp_en   : 1;  /**< [ 18: 18](R/W) If set and [DATA_FORMAT] = ECMP_DATA_FORMAT_E::FXP or [DATA_FORMAT] =
                                                                 ECMP_DATA_FORMAT_E::EFXP, USER_EXP is enabled for
                                                                 BFP with FXP input format */
        uint64_t nocomp_fxp_user_exp_en : 1; /**< [ 17: 17](R/W) If set and [DATA_FORMAT] = ECMP_DATA_FORMAT_E::FXP, USER_EXP is enabled for
                                                                 NO_COMP with FXP input format */
        uint64_t srm_section_present   : 1;  /**< [ 16: 16](R/W) When [FIX_MODE_EN] = 0 (Flexible mode), this shall be set if any section
                                                                 is with [COMP_METH] = ECPRI_COMP_METH_E::BFP_SRM or ECPRI_COMP_METH_E::MODULATION_SRM */
        uint64_t byte_swap_disable     : 1;  /**< [ 15: 15](R/W) Disables the byte swap toward MHBW. */
        uint64_t ecpri_hdr_present     : 1;  /**< [ 14: 14](R/W) eCPRI header present in input header buffer and assembled packet */
        uint64_t timing_hdr_present    : 1;  /**< [ 13: 13](R/W) Timing header present in input header buffer and assembled packet */
        uint64_t ud_exponent           : 4;  /**< [ 12:  9](R/W) When [FIX_MODE_EN]= 1 AND [DATA_FORMAT]= ECMP_DATA_FORMAT_E::EFXP AND
                                                                 compression method is ECPRI_COMP_METH_E::BFP this field is copied over
                                                                 to udCompParam[reserved] field. */
        uint64_t fix_mode_en           : 1;  /**< [  8:  8](R/W) When set, the compression mode is fixed. The compression method and width
                                                                 for the entire packet are specified by [COMP_METH] and [IQWIDTH], respectively.
                                                                 When clear, the compression method and width are flexible. For each data
                                                                 section in the packet, the compression method and width are specified by
                                                                 ECPRI_SECTION_HDR_SW_S[UD_COMP_METH] and
                                                                 ECPRI_SECTION_HDR_SW_S[UD_IQWIDTH] in the associated section header. */
        uint64_t iqwidth               : 4;  /**< [  7:  4](R/W) I/Q width. Bit width of each compressed I and Q sample in the packet in
                                                                 fixed compression mode. Valid when [FIX_MODE_EN] is set.

                                                                 If [FIX_MODE_EN] is set, [COMP_METH] = ECPRI_COMP_METH_E::MODULATION and
                                                                 [IQWIDTH] = 0, indicates BPSK modulation compression with a compressed
                                                                 width of 2 bits for each I and Q sample. [IQWIDTH] = 0x0 indicates a
                                                                 compressed width of 16 bits for all other compression methods. */
        uint64_t comp_meth             : 4;  /**< [  3:  0](R/W) Compression method enumerated by ECPRI_COMP_METH_E.
                                                                 Invalid values behave as [COMP_METH] = ECPRI_COMP_METH_E::NO_COMP.
                                                                 Valid when [FIX_MODE_EN] = 1. */
#else /* Word 0 - Little Endian */
        uint64_t comp_meth             : 4;  /**< [  3:  0](R/W) Compression method enumerated by ECPRI_COMP_METH_E.
                                                                 Invalid values behave as [COMP_METH] = ECPRI_COMP_METH_E::NO_COMP.
                                                                 Valid when [FIX_MODE_EN] = 1. */
        uint64_t iqwidth               : 4;  /**< [  7:  4](R/W) I/Q width. Bit width of each compressed I and Q sample in the packet in
                                                                 fixed compression mode. Valid when [FIX_MODE_EN] is set.

                                                                 If [FIX_MODE_EN] is set, [COMP_METH] = ECPRI_COMP_METH_E::MODULATION and
                                                                 [IQWIDTH] = 0, indicates BPSK modulation compression with a compressed
                                                                 width of 2 bits for each I and Q sample. [IQWIDTH] = 0x0 indicates a
                                                                 compressed width of 16 bits for all other compression methods. */
        uint64_t fix_mode_en           : 1;  /**< [  8:  8](R/W) When set, the compression mode is fixed. The compression method and width
                                                                 for the entire packet are specified by [COMP_METH] and [IQWIDTH], respectively.
                                                                 When clear, the compression method and width are flexible. For each data
                                                                 section in the packet, the compression method and width are specified by
                                                                 ECPRI_SECTION_HDR_SW_S[UD_COMP_METH] and
                                                                 ECPRI_SECTION_HDR_SW_S[UD_IQWIDTH] in the associated section header. */
        uint64_t ud_exponent           : 4;  /**< [ 12:  9](R/W) When [FIX_MODE_EN]= 1 AND [DATA_FORMAT]= ECMP_DATA_FORMAT_E::EFXP AND
                                                                 compression method is ECPRI_COMP_METH_E::BFP this field is copied over
                                                                 to udCompParam[reserved] field. */
        uint64_t timing_hdr_present    : 1;  /**< [ 13: 13](R/W) Timing header present in input header buffer and assembled packet */
        uint64_t ecpri_hdr_present     : 1;  /**< [ 14: 14](R/W) eCPRI header present in input header buffer and assembled packet */
        uint64_t byte_swap_disable     : 1;  /**< [ 15: 15](R/W) Disables the byte swap toward MHBW. */
        uint64_t srm_section_present   : 1;  /**< [ 16: 16](R/W) When [FIX_MODE_EN] = 0 (Flexible mode), this shall be set if any section
                                                                 is with [COMP_METH] = ECPRI_COMP_METH_E::BFP_SRM or ECPRI_COMP_METH_E::MODULATION_SRM */
        uint64_t nocomp_fxp_user_exp_en : 1; /**< [ 17: 17](R/W) If set and [DATA_FORMAT] = ECMP_DATA_FORMAT_E::FXP, USER_EXP is enabled for
                                                                 NO_COMP with FXP input format */
        uint64_t bfp_fxp_user_exp_en   : 1;  /**< [ 18: 18](R/W) If set and [DATA_FORMAT] = ECMP_DATA_FORMAT_E::FXP or [DATA_FORMAT] =
                                                                 ECMP_DATA_FORMAT_E::EFXP, USER_EXP is enabled for
                                                                 BFP with FXP input format */
        uint64_t bfp_iqfp_cfg_exp      : 4;  /**< [ 22: 19](R/W) Configured exponent for BFP with IQFP input format */
        uint64_t reserved_23           : 1;
        uint64_t num_sections          : 8;  /**< [ 31: 24](R/W) Number of data sections in the packet. Must be non-zero. */
        uint64_t data_format           : 2;  /**< [ 33: 32](R/W) \<pre\>
                                                                 Input Data Format. Values are enumerated by ECMP_DATA_FORMAT_E. Invalid values are reserved.

                                                                 typedef enum logic [1:0] { // ECMP_DATA_FORMAT_E
                                                                    FXP   = 0x0,  // FXP Format.  Applicable for all supported compression methods.
                                                                    EFXP  = 0x1,  // eFXP Format. Applicable for ECPRI_COMP_METH_E::BFP.
                                                                    IQFP  = 0x2   // IQFP Format. Applicable for ECPRI_COMP_METH_E::BFP and
                                                                 ECPRI_COMP_METH_E::BFP_SRM.
                                                                 } ECMP_DATA_FORMAT_E;
                                                                 \</pre\> */
        uint64_t reserved_34_63        : 30;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_ecmpx_abx_jdxx_cfg_s cn; */
};
typedef union cavm_ecmpx_abx_jdxx_cfg cavm_ecmpx_abx_jdxx_cfg_t;

static inline uint64_t CAVM_ECMPX_ABX_JDXX_CFG(uint64_t a, uint64_t b, uint64_t c) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_ECMPX_ABX_JDXX_CFG(uint64_t a, uint64_t b, uint64_t c)
{
    if (cavm_is_model(OCTEONTX_CNF20KA) && ((a<=2) && (b<=1) && (c<=3)))
        return 0xc00840602000ll + 0x100000000ll * ((a) & 0x3) + 0x10000ll * ((b) & 0x1) + 0x2000ll * ((c) & 0x3);
    __cavm_csr_fatal("ECMPX_ABX_JDXX_CFG", 3, a, b, c, 0, 0, 0);
}

#define typedef_CAVM_ECMPX_ABX_JDXX_CFG(a,b,c) cavm_ecmpx_abx_jdxx_cfg_t
#define bustype_CAVM_ECMPX_ABX_JDXX_CFG(a,b,c) CSR_TYPE_RSL
#define basename_CAVM_ECMPX_ABX_JDXX_CFG(a,b,c) "ECMPX_ABX_JDXX_CFG"
#define device_bar_CAVM_ECMPX_ABX_JDXX_CFG(a,b,c) 0x2 /* PF_BAR2 */
#define busnum_CAVM_ECMPX_ABX_JDXX_CFG(a,b,c) (a)
#define arguments_CAVM_ECMPX_ABX_JDXX_CFG(a,b,c) (a),(b),(c),-1

/**
 * Register (RSL) ecmp#_ab#_nocomp_user_exp_high
 *
 * ECMP NOCOMP FXP User Exponent for IqWidth 9..16 Register
 */
union cavm_ecmpx_abx_nocomp_user_exp_high
{
    uint64_t u;
    struct cavm_ecmpx_abx_nocomp_user_exp_high_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_61_63        : 3;
        uint64_t user_exp15            : 5;  /**< [ 60: 56](R/W) NOCOMP FXP user exp for IqWidth 15 */
        uint64_t reserved_53_55        : 3;
        uint64_t user_exp14            : 5;  /**< [ 52: 48](R/W) NOCOMP FXP user exp for IqWidth 14 */
        uint64_t reserved_45_47        : 3;
        uint64_t user_exp13            : 5;  /**< [ 44: 40](R/W) NOCOMP FXP user exp for IqWidth 13 */
        uint64_t reserved_37_39        : 3;
        uint64_t user_exp12            : 5;  /**< [ 36: 32](R/W) NOCOMP FXP user exp for IqWidth 12 */
        uint64_t reserved_29_31        : 3;
        uint64_t user_exp11            : 5;  /**< [ 28: 24](R/W) NOCOMP FXP user exp for IqWidth 11 */
        uint64_t reserved_21_23        : 3;
        uint64_t user_exp10            : 5;  /**< [ 20: 16](R/W) NOCOMP FXP user exp for IqWidth 10 */
        uint64_t reserved_13_15        : 3;
        uint64_t user_exp9             : 5;  /**< [ 12:  8](R/W) NOCOMP FXP user exp for IqWidth 9 */
        uint64_t reserved_5_7          : 3;
        uint64_t user_exp8             : 5;  /**< [  4:  0](R/W) NOCOMP FXP user exp for IqWidth 8 */
#else /* Word 0 - Little Endian */
        uint64_t user_exp8             : 5;  /**< [  4:  0](R/W) NOCOMP FXP user exp for IqWidth 8 */
        uint64_t reserved_5_7          : 3;
        uint64_t user_exp9             : 5;  /**< [ 12:  8](R/W) NOCOMP FXP user exp for IqWidth 9 */
        uint64_t reserved_13_15        : 3;
        uint64_t user_exp10            : 5;  /**< [ 20: 16](R/W) NOCOMP FXP user exp for IqWidth 10 */
        uint64_t reserved_21_23        : 3;
        uint64_t user_exp11            : 5;  /**< [ 28: 24](R/W) NOCOMP FXP user exp for IqWidth 11 */
        uint64_t reserved_29_31        : 3;
        uint64_t user_exp12            : 5;  /**< [ 36: 32](R/W) NOCOMP FXP user exp for IqWidth 12 */
        uint64_t reserved_37_39        : 3;
        uint64_t user_exp13            : 5;  /**< [ 44: 40](R/W) NOCOMP FXP user exp for IqWidth 13 */
        uint64_t reserved_45_47        : 3;
        uint64_t user_exp14            : 5;  /**< [ 52: 48](R/W) NOCOMP FXP user exp for IqWidth 14 */
        uint64_t reserved_53_55        : 3;
        uint64_t user_exp15            : 5;  /**< [ 60: 56](R/W) NOCOMP FXP user exp for IqWidth 15 */
        uint64_t reserved_61_63        : 3;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_ecmpx_abx_nocomp_user_exp_high_s cn; */
};
typedef union cavm_ecmpx_abx_nocomp_user_exp_high cavm_ecmpx_abx_nocomp_user_exp_high_t;

static inline uint64_t CAVM_ECMPX_ABX_NOCOMP_USER_EXP_HIGH(uint64_t a, uint64_t b) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_ECMPX_ABX_NOCOMP_USER_EXP_HIGH(uint64_t a, uint64_t b)
{
    if (cavm_is_model(OCTEONTX_CNF20KA) && ((a<=2) && (b<=1)))
        return 0xc00840600108ll + 0x100000000ll * ((a) & 0x3) + 0x10000ll * ((b) & 0x1);
    __cavm_csr_fatal("ECMPX_ABX_NOCOMP_USER_EXP_HIGH", 2, a, b, 0, 0, 0, 0);
}

#define typedef_CAVM_ECMPX_ABX_NOCOMP_USER_EXP_HIGH(a,b) cavm_ecmpx_abx_nocomp_user_exp_high_t
#define bustype_CAVM_ECMPX_ABX_NOCOMP_USER_EXP_HIGH(a,b) CSR_TYPE_RSL
#define basename_CAVM_ECMPX_ABX_NOCOMP_USER_EXP_HIGH(a,b) "ECMPX_ABX_NOCOMP_USER_EXP_HIGH"
#define device_bar_CAVM_ECMPX_ABX_NOCOMP_USER_EXP_HIGH(a,b) 0x2 /* PF_BAR2 */
#define busnum_CAVM_ECMPX_ABX_NOCOMP_USER_EXP_HIGH(a,b) (a)
#define arguments_CAVM_ECMPX_ABX_NOCOMP_USER_EXP_HIGH(a,b) (a),(b),-1,-1

/**
 * Register (RSL) ecmp#_ab#_nocomp_user_exp_low
 *
 * ECMP NOCOMP FXP User Exponent for IqWidth 1..8 Register
 */
union cavm_ecmpx_abx_nocomp_user_exp_low
{
    uint64_t u;
    struct cavm_ecmpx_abx_nocomp_user_exp_low_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_61_63        : 3;
        uint64_t user_exp7             : 5;  /**< [ 60: 56](R/W) NOCOMP FXP user exp for IqWidth 7 */
        uint64_t reserved_53_55        : 3;
        uint64_t user_exp6             : 5;  /**< [ 52: 48](R/W) NOCOMP FXP user exp for IqWidth 6 */
        uint64_t reserved_45_47        : 3;
        uint64_t user_exp5             : 5;  /**< [ 44: 40](R/W) NOCOMP FXP user exp for IqWidth 5 */
        uint64_t reserved_37_39        : 3;
        uint64_t user_exp4             : 5;  /**< [ 36: 32](R/W) NOCOMP FXP user exp for IqWidth 4 */
        uint64_t reserved_29_31        : 3;
        uint64_t user_exp3             : 5;  /**< [ 28: 24](R/W) NOCOMP FXP user exp for IqWidth 3 */
        uint64_t reserved_21_23        : 3;
        uint64_t user_exp2             : 5;  /**< [ 20: 16](R/W) NOCOMP FXP user exp for IqWidth 2 */
        uint64_t reserved_13_15        : 3;
        uint64_t user_exp1             : 5;  /**< [ 12:  8](R/W) NOCOMP FXP user exp for IqWidth 1 */
        uint64_t reserved_5_7          : 3;
        uint64_t user_exp0             : 5;  /**< [  4:  0](R/W) NOCOMP FXP user exp for IqWidth 16 */
#else /* Word 0 - Little Endian */
        uint64_t user_exp0             : 5;  /**< [  4:  0](R/W) NOCOMP FXP user exp for IqWidth 16 */
        uint64_t reserved_5_7          : 3;
        uint64_t user_exp1             : 5;  /**< [ 12:  8](R/W) NOCOMP FXP user exp for IqWidth 1 */
        uint64_t reserved_13_15        : 3;
        uint64_t user_exp2             : 5;  /**< [ 20: 16](R/W) NOCOMP FXP user exp for IqWidth 2 */
        uint64_t reserved_21_23        : 3;
        uint64_t user_exp3             : 5;  /**< [ 28: 24](R/W) NOCOMP FXP user exp for IqWidth 3 */
        uint64_t reserved_29_31        : 3;
        uint64_t user_exp4             : 5;  /**< [ 36: 32](R/W) NOCOMP FXP user exp for IqWidth 4 */
        uint64_t reserved_37_39        : 3;
        uint64_t user_exp5             : 5;  /**< [ 44: 40](R/W) NOCOMP FXP user exp for IqWidth 5 */
        uint64_t reserved_45_47        : 3;
        uint64_t user_exp6             : 5;  /**< [ 52: 48](R/W) NOCOMP FXP user exp for IqWidth 6 */
        uint64_t reserved_53_55        : 3;
        uint64_t user_exp7             : 5;  /**< [ 60: 56](R/W) NOCOMP FXP user exp for IqWidth 7 */
        uint64_t reserved_61_63        : 3;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_ecmpx_abx_nocomp_user_exp_low_s cn; */
};
typedef union cavm_ecmpx_abx_nocomp_user_exp_low cavm_ecmpx_abx_nocomp_user_exp_low_t;

static inline uint64_t CAVM_ECMPX_ABX_NOCOMP_USER_EXP_LOW(uint64_t a, uint64_t b) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_ECMPX_ABX_NOCOMP_USER_EXP_LOW(uint64_t a, uint64_t b)
{
    if (cavm_is_model(OCTEONTX_CNF20KA) && ((a<=2) && (b<=1)))
        return 0xc00840600100ll + 0x100000000ll * ((a) & 0x3) + 0x10000ll * ((b) & 0x1);
    __cavm_csr_fatal("ECMPX_ABX_NOCOMP_USER_EXP_LOW", 2, a, b, 0, 0, 0, 0);
}

#define typedef_CAVM_ECMPX_ABX_NOCOMP_USER_EXP_LOW(a,b) cavm_ecmpx_abx_nocomp_user_exp_low_t
#define bustype_CAVM_ECMPX_ABX_NOCOMP_USER_EXP_LOW(a,b) CSR_TYPE_RSL
#define basename_CAVM_ECMPX_ABX_NOCOMP_USER_EXP_LOW(a,b) "ECMPX_ABX_NOCOMP_USER_EXP_LOW"
#define device_bar_CAVM_ECMPX_ABX_NOCOMP_USER_EXP_LOW(a,b) 0x2 /* PF_BAR2 */
#define busnum_CAVM_ECMPX_ABX_NOCOMP_USER_EXP_LOW(a,b) (a)
#define arguments_CAVM_ECMPX_ABX_NOCOMP_USER_EXP_LOW(a,b) (a),(b),-1,-1

/**
 * Register (RSL) ecmp#_ab#_packets_pc
 *
 * ECMP Total Packets Perfomcance Counter Register
 */
union cavm_ecmpx_abx_packets_pc
{
    uint64_t u;
    struct cavm_ecmpx_abx_packets_pc_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t cnt                   : 64; /**< [ 63:  0](R/W/H) Count total compressed packets sent. */
#else /* Word 0 - Little Endian */
        uint64_t cnt                   : 64; /**< [ 63:  0](R/W/H) Count total compressed packets sent. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_ecmpx_abx_packets_pc_s cn; */
};
typedef union cavm_ecmpx_abx_packets_pc cavm_ecmpx_abx_packets_pc_t;

static inline uint64_t CAVM_ECMPX_ABX_PACKETS_PC(uint64_t a, uint64_t b) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_ECMPX_ABX_PACKETS_PC(uint64_t a, uint64_t b)
{
    if (cavm_is_model(OCTEONTX_CNF20KA) && ((a<=2) && (b<=1)))
        return 0xc008406000f8ll + 0x100000000ll * ((a) & 0x3) + 0x10000ll * ((b) & 0x1);
    __cavm_csr_fatal("ECMPX_ABX_PACKETS_PC", 2, a, b, 0, 0, 0, 0);
}

#define typedef_CAVM_ECMPX_ABX_PACKETS_PC(a,b) cavm_ecmpx_abx_packets_pc_t
#define bustype_CAVM_ECMPX_ABX_PACKETS_PC(a,b) CSR_TYPE_RSL
#define basename_CAVM_ECMPX_ABX_PACKETS_PC(a,b) "ECMPX_ABX_PACKETS_PC"
#define device_bar_CAVM_ECMPX_ABX_PACKETS_PC(a,b) 0x2 /* PF_BAR2 */
#define busnum_CAVM_ECMPX_ABX_PACKETS_PC(a,b) (a)
#define arguments_CAVM_ECMPX_ABX_PACKETS_PC(a,b) (a),(b),-1,-1

/**
 * Register (RSL) ecmp#_ab#_status
 *
 * ECMP Status Register
 */
union cavm_ecmpx_abx_status
{
    uint64_t u;
    struct cavm_ecmpx_abx_status_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_5_63         : 59;
        uint64_t ready                 : 1;  /**< [  4:  4](RO/H) When set, HAB is ready to receive the next job. */
        uint64_t cfg3_busy             : 1;  /**< [  3:  3](RO/H) When set, slot 3 is busy processing a job. */
        uint64_t cfg2_busy             : 1;  /**< [  2:  2](RO/H) When set, slot 2 is busy processing a job. */
        uint64_t cfg1_busy             : 1;  /**< [  1:  1](RO/H) When set, slot 1 is busy processing a job. */
        uint64_t cfg0_busy             : 1;  /**< [  0:  0](RO/H) When set, slot 0 is busy processing a job. */
#else /* Word 0 - Little Endian */
        uint64_t cfg0_busy             : 1;  /**< [  0:  0](RO/H) When set, slot 0 is busy processing a job. */
        uint64_t cfg1_busy             : 1;  /**< [  1:  1](RO/H) When set, slot 1 is busy processing a job. */
        uint64_t cfg2_busy             : 1;  /**< [  2:  2](RO/H) When set, slot 2 is busy processing a job. */
        uint64_t cfg3_busy             : 1;  /**< [  3:  3](RO/H) When set, slot 3 is busy processing a job. */
        uint64_t ready                 : 1;  /**< [  4:  4](RO/H) When set, HAB is ready to receive the next job. */
        uint64_t reserved_5_63         : 59;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_ecmpx_abx_status_s cn; */
};
typedef union cavm_ecmpx_abx_status cavm_ecmpx_abx_status_t;

static inline uint64_t CAVM_ECMPX_ABX_STATUS(uint64_t a, uint64_t b) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_ECMPX_ABX_STATUS(uint64_t a, uint64_t b)
{
    if (cavm_is_model(OCTEONTX_CNF20KA) && ((a<=2) && (b<=1)))
        return 0xc00840600018ll + 0x100000000ll * ((a) & 0x3) + 0x10000ll * ((b) & 0x1);
    __cavm_csr_fatal("ECMPX_ABX_STATUS", 2, a, b, 0, 0, 0, 0);
}

#define typedef_CAVM_ECMPX_ABX_STATUS(a,b) cavm_ecmpx_abx_status_t
#define bustype_CAVM_ECMPX_ABX_STATUS(a,b) CSR_TYPE_RSL
#define basename_CAVM_ECMPX_ABX_STATUS(a,b) "ECMPX_ABX_STATUS"
#define device_bar_CAVM_ECMPX_ABX_STATUS(a,b) 0x2 /* PF_BAR2 */
#define busnum_CAVM_ECMPX_ABX_STATUS(a,b) (a)
#define arguments_CAVM_ECMPX_ABX_STATUS(a,b) (a),(b),-1,-1

#endif /* __CAVM_CSRS_ECMP_H__ */
