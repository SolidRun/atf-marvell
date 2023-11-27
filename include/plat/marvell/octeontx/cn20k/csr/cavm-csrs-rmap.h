#ifndef __CAVM_CSRS_RMAP_H__
#define __CAVM_CSRS_RMAP_H__
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
 * Structure rmap_tc_lte_config_err_s
 *
 * RMAP TC LTE Mode Configuration Error Structure
 * When RMAP_AB(0..1)_TC_ERROR[CORE_ERR] is set, this field indicates which
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
 * When RMAP_AB(0..1)_TC_ERROR[CORE_ERR] is set, this field indicates which
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
    if ((a<=1) && (b<=1))
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
    if ((a<=1) && (b<=1))
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
    if ((a<=1) && (b<=1))
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
    if ((a<=1) && (b<=1))
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
    if ((a<=1) && (b<=1))
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
    if ((a<=1) && (b<=1))
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
    if ((a<=1) && (b<=1))
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
    if ((a<=1) && (b<=1))
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
    if ((a<=1) && (b<=1))
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
    if ((a<=1) && (b<=1))
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
    if ((a<=1) && (b<=1))
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
    if ((a<=1) && (b<=1))
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
    if ((a<=1) && (b<=1))
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
    if ((a<=1) && (b<=1))
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
    if ((a<=1) && (b<=1))
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
    if ((a<=1) && (b<=1))
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
    if ((a<=1) && (b<=1))
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
    if ((a<=1) && (b<=1))
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
    if ((a<=1) && (b<=1))
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
    if ((a<=1) && (b<=1))
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
    if ((a<=1) && (b<=1))
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
    if ((a<=1) && (b<=1))
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
    if ((a<=1) && (b<=1))
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
    if ((a<=1) && (b<=1))
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
    if ((a<=1) && (b<=1))
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
    if ((a<=1) && (b<=1))
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
    if ((a<=1) && (b<=1))
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
    if ((a<=1) && (b<=1))
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
    if ((a<=1) && (b<=1))
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
    if ((a<=1) && (b<=1))
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
    if ((a<=1) && (b<=1))
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
    if ((a<=1) && (b<=1))
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
    if ((a<=1) && (b<=1))
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
    if ((a<=1) && (b<=1))
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
    if ((a<=1) && (b<=1))
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
    if ((a<=1) && (b<=1))
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
    if ((a<=1) && (b<=1))
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
    if ((a<=1) && (b<=1))
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
    if ((a<=1) && (b<=1))
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
    if ((a<=1) && (b<=1))
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
    if ((a<=1) && (b<=1))
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
    if ((a<=1) && (b<=1))
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
    if ((a<=1) && (b<=1))
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
    if ((a<=1) && (b<=1))
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
    if ((a<=1) && (b<=1))
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
    if ((a<=1) && (b<=1))
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
    if ((a<=1) && (b<=1))
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
    if ((a<=1) && (b<=1))
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
    if ((a<=1) && (b<=1))
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
    if ((a<=1) && (b<=1))
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
    if ((a<=1) && (b<=1))
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
    if ((a<=1) && (b<=1))
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
    if ((a<=1) && (b<=1))
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
    if ((a<=1) && (b<=1))
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
    if ((a<=1) && (b<=1))
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
    if ((a<=1) && (b<=1))
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
    if ((a<=1) && (b<=1))
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
    if ((a<=1) && (b<=1))
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
    if ((a<=1) && (b<=1))
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
    if ((a<=1) && (b<=1))
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
    if ((a<=1) && (b<=1))
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
    if ((a<=1) && (b<=1))
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
    if ((a<=1) && (b<=1))
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
    if ((a<=1) && (b<=1))
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
