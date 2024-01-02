#ifndef __CAVM_CSRS_EDEC_H__
#define __CAVM_CSRS_EDEC_H__
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
 * EDEC.
 *
 * This file is auto generated. Do not edit.
 *
 */

/**
 * Enumeration edec_bar_e
 */
#define CAVM_EDEC_BAR_E_EDECX_PF_BAR2(a) (0x87e040400000ll + 0x80000ll * (a))
#define CAVM_EDEC_BAR_E_EDECX_PF_BAR2_SIZE 0x40000ull

/**
 * Enumeration edec_psw1_error_e
 *
 * EDEC PSW1 Error Encodings Enumeration
 * Enumerates error encodings reported on RFOE_PSW_S[DEC_ERROR].
 */
#define CAVM_EDEC_PSW1_ERROR_E_DBE_ERR (0x96)
#define CAVM_EDEC_PSW1_ERROR_E_DMA_OVERFLOW (0x90)
#define CAVM_EDEC_PSW1_ERROR_E_DMA_PRB_UNDERFLOW (0x91)
#define CAVM_EDEC_PSW1_ERROR_E_ECPRI_CONCAT (0x10)
#define CAVM_EDEC_PSW1_ERROR_E_ECPRI_EBIT_CLR (0x16)
#define CAVM_EDEC_PSW1_ERROR_E_ECPRI_MSG_TYPE (0x13)
#define CAVM_EDEC_PSW1_ERROR_E_ECPRI_PAYLOAD_OVERRUN (0x14)
#define CAVM_EDEC_PSW1_ERROR_E_ECPRI_PCID (0x12)
#define CAVM_EDEC_PSW1_ERROR_E_ECPRI_RSVD (0x11)
#define CAVM_EDEC_PSW1_ERROR_E_ECPRI_SEQID_ORDER (0x20)
#define CAVM_EDEC_PSW1_ERROR_E_EFXP_FORMAT_BUT_C_METH_NOT_BFP (0x56)
#define CAVM_EDEC_PSW1_ERROR_E_GHB_HDR_FATAL (0xa2)
#define CAVM_EDEC_PSW1_ERROR_E_GHB_HDR_NON_FATAL (0xa3)
#define CAVM_EDEC_PSW1_ERROR_E_GHB_PRB_FATAL (0xa0)
#define CAVM_EDEC_PSW1_ERROR_E_GHB_PRB_NON_FATAL (0xa1)
#define CAVM_EDEC_PSW1_ERROR_E_HDR_MAX_ADDR_ERROR (0x74)
#define CAVM_EDEC_PSW1_ERROR_E_HDR_MIN_ADDR_ERROR (0x73)
#define CAVM_EDEC_PSW1_ERROR_E_LUT_FLOW_DISABLED (0x70)
#define CAVM_EDEC_PSW1_ERROR_E_LUT_HDR_BUFFER_OVERRUN (0x77)
#define CAVM_EDEC_PSW1_ERROR_E_LUT_PRB_BUFFER_OVERRUN (0x76)
#define CAVM_EDEC_PSW1_ERROR_E_LUT_PRB_BUF_OVRN_ADD_CALC_ERR (0x78)
#define CAVM_EDEC_PSW1_ERROR_E_NO_ERR (0)
#define CAVM_EDEC_PSW1_ERROR_E_NUM_PRB_ZERO_BUT_RB_NOT (0x54)
#define CAVM_EDEC_PSW1_ERROR_E_NUM_PRB_ZERO_BUT_START_PRB_NOT (0x55)
#define CAVM_EDEC_PSW1_ERROR_E_PRB_MAX_ADDR_ERROR (0x72)
#define CAVM_EDEC_PSW1_ERROR_E_PRB_MIN_ADDR_ERROR (0x71)
#define CAVM_EDEC_PSW1_ERROR_E_PSM_CMD_OPCODE_ERR (0x95)
#define CAVM_EDEC_PSW1_ERROR_E_PSW_RFOE (1)
#define CAVM_EDEC_PSW1_ERROR_E_SECTION_METH (0x50)
#define CAVM_EDEC_PSW1_ERROR_E_SECTION_MOD_IQWIDTH (0x51)
#define CAVM_EDEC_PSW1_ERROR_E_SECTION_ULAW_IQWIDTH (0x52)
#define CAVM_EDEC_PSW1_ERROR_E_SYM_INC_NOT_ZERO (0x53)
#define CAVM_EDEC_PSW1_ERROR_E_TIMING_DATA_DIRECTION (0x30)
#define CAVM_EDEC_PSW1_ERROR_E_TIMING_SLOT_ID (0x32)
#define CAVM_EDEC_PSW1_ERROR_E_TIMING_VER (0x31)
#define CAVM_EDEC_PSW1_ERROR_E_WRMSG_ADD_ERR (0x94)

/**
 * Structure edec_lut_csr0_s
 *
 * EDEC LUT CSR0 Structure
 * This defines the fields of the first (of 5) 64-bit structures used to read and write the EDEC LUT.
 */
union cavm_edec_lut_csr0_s
{
    uint64_t u;
    struct cavm_edec_lut_csr0_s_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t num_slot_exp_1ms      : 3;  /**< [ 63: 61] Log base two of the number of slots per 1 ms.
                                                                 LTE: 0 or 1 (for 1 or 2 slots).
                                                                 5G-NR: 0, 1, 2, 3, or 4 (for 1, 2, 4, 8, or 16 slots). */
        uint64_t reserved_45_60        : 16;
        uint64_t rx_wnd_idx            : 4;  /**< [ 44: 41] Specifies which of the 16 sets of RX Window registers and counters will be used. */
        uint64_t next_buf_idx          : 8;  /**< [ 40: 33] Next available buffer index. This field is managed by hardware. Should be
                                                                 initialized to zero. Hardware increments this field by one (modulo
                                                                 [NUM_BUFFERS+1]) after each packet. */
        uint64_t fix_udcomp_hdr        : 8;  /**< [ 32: 25] Compression method and width when [FIX_MODE_EN] is set. Format is specified
                                                                 by ECPRI_UD_COMP_HDR_NRSV_S. */
        uint64_t fix_mode_en           : 1;  /**< [ 24: 24] When set, the compression mode is fixed. The compression method and width
                                                                 for the entire packet are specified by [FIX_UDCOMP_HDR].

                                                                 When clear, the compression method and width are flexible. For each data
                                                                 section in the packet, the compression method and width are specified by
                                                                 ECPRI_UD_COMP_HDR_S[UD_COMP_METH] and
                                                                 ECPRI_UD_COMP_HDR_S[UD_IQWIDTH] in the associated compression header. */
        uint64_t data_format           : 2;  /**< [ 23: 22] \<pre\>
                                                                 Output Data Format. Values are enumerated by EDEC_DATA_FORMAT_E. Invalid values are reserved.

                                                                 typedef enum logic [1:0] { // EDEC_DATA_FORMAT_E
                                                                    FXP   = 0x0,  // FXP Format.  Applicable for all supported compression methods.
                                                                    EFXP  = 0x1,  // eFXP Format. Applicable for ECPRI_COMP_METH_E::BFP.
                                                                    IQFP  = 0x2   // IQFP Format. Applicable for ECPRI_COMP_METH_E::BFP and
                                                                 ECPRI_COMP_METH_E::BFP_SRM.
                                                                 } EDEC_DATA_FORMAT_E;
                                                                 \</pre\> */
        uint64_t num_sym_per_slot      : 6;  /**< [ 21: 16] Number of symbols per slot minus 1. */
        uint64_t num_buffers           : 8;  /**< [ 15:  8] Number of buffers minus 1. Applies to both data buffers specified by
                                                                 EDEC_LUT_CSR1_S and header buffers specified by EDEC_LUT_CSR2_S. */
        uint64_t num_symbols           : 6;  /**< [  7:  2] Number of symbols minus 1. */
        uint64_t en_addr_calc          : 1;  /**< [  1:  1] Address calculation type.
                                                                 0 = Based on sequence ID.
                                                                 1 = Based on address calculation.

                                                                 When sequence ID is used, the header and PRB (data) address calculations
                                                                 are solely based on the base addresses, buffer sizes and buffer indexes
                                                                 specified for each FLOW_ID in the LUT.

                                                                 When the address calculation is used, the PRB (data) address calculation
                                                                 takes into account the subfrm_id, slot_id, and symbol_id from each timing header,
                                                                 symInc and rb from the section header
                                                                 as well as num_slot_exp_1ms, num_sym_per_slot, num_symbols, num_buffers,
                                                                 next_buf_id specified for each FLOW_ID in the LUT. The header address calculation
                                                                 remains the same as for the sequence ID case. */
        uint64_t flow_en               : 1;  /**< [  0:  0] Flow enable.
                                                                 0 = Flow is disabled.
                                                                 1 = Flow is enabled. */
#else /* Word 0 - Little Endian */
        uint64_t flow_en               : 1;  /**< [  0:  0] Flow enable.
                                                                 0 = Flow is disabled.
                                                                 1 = Flow is enabled. */
        uint64_t en_addr_calc          : 1;  /**< [  1:  1] Address calculation type.
                                                                 0 = Based on sequence ID.
                                                                 1 = Based on address calculation.

                                                                 When sequence ID is used, the header and PRB (data) address calculations
                                                                 are solely based on the base addresses, buffer sizes and buffer indexes
                                                                 specified for each FLOW_ID in the LUT.

                                                                 When the address calculation is used, the PRB (data) address calculation
                                                                 takes into account the subfrm_id, slot_id, and symbol_id from each timing header,
                                                                 symInc and rb from the section header
                                                                 as well as num_slot_exp_1ms, num_sym_per_slot, num_symbols, num_buffers,
                                                                 next_buf_id specified for each FLOW_ID in the LUT. The header address calculation
                                                                 remains the same as for the sequence ID case. */
        uint64_t num_symbols           : 6;  /**< [  7:  2] Number of symbols minus 1. */
        uint64_t num_buffers           : 8;  /**< [ 15:  8] Number of buffers minus 1. Applies to both data buffers specified by
                                                                 EDEC_LUT_CSR1_S and header buffers specified by EDEC_LUT_CSR2_S. */
        uint64_t num_sym_per_slot      : 6;  /**< [ 21: 16] Number of symbols per slot minus 1. */
        uint64_t data_format           : 2;  /**< [ 23: 22] \<pre\>
                                                                 Output Data Format. Values are enumerated by EDEC_DATA_FORMAT_E. Invalid values are reserved.

                                                                 typedef enum logic [1:0] { // EDEC_DATA_FORMAT_E
                                                                    FXP   = 0x0,  // FXP Format.  Applicable for all supported compression methods.
                                                                    EFXP  = 0x1,  // eFXP Format. Applicable for ECPRI_COMP_METH_E::BFP.
                                                                    IQFP  = 0x2   // IQFP Format. Applicable for ECPRI_COMP_METH_E::BFP and
                                                                 ECPRI_COMP_METH_E::BFP_SRM.
                                                                 } EDEC_DATA_FORMAT_E;
                                                                 \</pre\> */
        uint64_t fix_mode_en           : 1;  /**< [ 24: 24] When set, the compression mode is fixed. The compression method and width
                                                                 for the entire packet are specified by [FIX_UDCOMP_HDR].

                                                                 When clear, the compression method and width are flexible. For each data
                                                                 section in the packet, the compression method and width are specified by
                                                                 ECPRI_UD_COMP_HDR_S[UD_COMP_METH] and
                                                                 ECPRI_UD_COMP_HDR_S[UD_IQWIDTH] in the associated compression header. */
        uint64_t fix_udcomp_hdr        : 8;  /**< [ 32: 25] Compression method and width when [FIX_MODE_EN] is set. Format is specified
                                                                 by ECPRI_UD_COMP_HDR_NRSV_S. */
        uint64_t next_buf_idx          : 8;  /**< [ 40: 33] Next available buffer index. This field is managed by hardware. Should be
                                                                 initialized to zero. Hardware increments this field by one (modulo
                                                                 [NUM_BUFFERS+1]) after each packet. */
        uint64_t rx_wnd_idx            : 4;  /**< [ 44: 41] Specifies which of the 16 sets of RX Window registers and counters will be used. */
        uint64_t reserved_45_60        : 16;
        uint64_t num_slot_exp_1ms      : 3;  /**< [ 63: 61] Log base two of the number of slots per 1 ms.
                                                                 LTE: 0 or 1 (for 1 or 2 slots).
                                                                 5G-NR: 0, 1, 2, 3, or 4 (for 1, 2, 4, 8, or 16 slots). */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_edec_lut_csr0_s_s cn; */
};

/**
 * Structure edec_lut_csr1_s
 *
 * EDEC LUT CSR1 Structure
 * This defines the fields of the second (of 5) 64-bit structures used to read and write the EDEC LUT.
 */
union cavm_edec_lut_csr1_s
{
    uint64_t u;
    struct cavm_edec_lut_csr1_s_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_63           : 1;
        uint64_t data_write_hp         : 1;  /**< [ 62: 62] Send data write command with high priority when set. */
        uint64_t data_write_cmd_type   : 2;  /**< [ 61: 60] Command to send when writing data to GHB.
                                                                 Enumerated by MHBW_PNB_WR_CMD_E. */
        uint64_t num_tot_prb           : 10; /**< [ 59: 50] Size of data buffers, expressed as number of 48-byte uncompressed PRBs minus 1. */
        uint64_t data_target_mem       : 1;  /**< [ 49: 49] Specifies the target memory for the address.
                                                                 Enumerated by MHBW_TMEM_SEL_E. */
        uint64_t base_addr_data        : 49; /**< [ 48:  0] 32-byte aligned base address for data.
                                                                 BASE_ADDR_DATA[0] must be zero. */
#else /* Word 0 - Little Endian */
        uint64_t base_addr_data        : 49; /**< [ 48:  0] 32-byte aligned base address for data.
                                                                 BASE_ADDR_DATA[0] must be zero. */
        uint64_t data_target_mem       : 1;  /**< [ 49: 49] Specifies the target memory for the address.
                                                                 Enumerated by MHBW_TMEM_SEL_E. */
        uint64_t num_tot_prb           : 10; /**< [ 59: 50] Size of data buffers, expressed as number of 48-byte uncompressed PRBs minus 1. */
        uint64_t data_write_cmd_type   : 2;  /**< [ 61: 60] Command to send when writing data to GHB.
                                                                 Enumerated by MHBW_PNB_WR_CMD_E. */
        uint64_t data_write_hp         : 1;  /**< [ 62: 62] Send data write command with high priority when set. */
        uint64_t reserved_63           : 1;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_edec_lut_csr1_s_s cn; */
};

/**
 * Structure edec_lut_csr2_s
 *
 * EDEC LUT CSR2 Structure
 * This defines the fields of the third (of 5) 64-bit structures used to read and write the EDEC LUT.
 */
union cavm_edec_lut_csr2_s
{
    uint64_t u;
    struct cavm_edec_lut_csr2_s_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_63           : 1;
        uint64_t hdr_write_hp          : 1;  /**< [ 62: 62] Send header write command with high priority when set. */
        uint64_t hdr_read_cmd_type     : 2;  /**< [ 61: 60] Command to put in RD_RMA_CFGWORD0.
                                                                 Enumerated by MHBW_PNB_RD_CMD_E. */
        uint64_t hdr_write_cmd_type    : 2;  /**< [ 59: 58] Command to send when writing headers to GHB.
                                                                 Enumerated by MHBW_PNB_WR_CMD_E. */
        uint64_t hdr_buffer_size       : 8;  /**< [ 57: 50] Size of header buffers in 64 byte words minus 1. */
        uint64_t hdr_target_mem        : 1;  /**< [ 49: 49] Specifies the target memory for the address.
                                                                 Enumerated by MHBW_TMEM_SEL_E. */
        uint64_t base_addr_hdr         : 49; /**< [ 48:  0] 32-byte aligned base address for headers.
                                                                 BASE_ADDR_HDR[0] must be zero. */
#else /* Word 0 - Little Endian */
        uint64_t base_addr_hdr         : 49; /**< [ 48:  0] 32-byte aligned base address for headers.
                                                                 BASE_ADDR_HDR[0] must be zero. */
        uint64_t hdr_target_mem        : 1;  /**< [ 49: 49] Specifies the target memory for the address.
                                                                 Enumerated by MHBW_TMEM_SEL_E. */
        uint64_t hdr_buffer_size       : 8;  /**< [ 57: 50] Size of header buffers in 64 byte words minus 1. */
        uint64_t hdr_write_cmd_type    : 2;  /**< [ 59: 58] Command to send when writing headers to GHB.
                                                                 Enumerated by MHBW_PNB_WR_CMD_E. */
        uint64_t hdr_read_cmd_type     : 2;  /**< [ 61: 60] Command to put in RD_RMA_CFGWORD0.
                                                                 Enumerated by MHBW_PNB_RD_CMD_E. */
        uint64_t hdr_write_hp          : 1;  /**< [ 62: 62] Send header write command with high priority when set. */
        uint64_t reserved_63           : 1;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_edec_lut_csr2_s_s cn; */
};

/**
 * Structure edec_lut_csr3_s
 *
 * EDEC LUT CSR3 Structure
 * This defines the fields of the fourth (of 5) 64-bit structures used to read and write the EDEC LUT.
 */
union cavm_edec_lut_csr3_s
{
    uint64_t u;
    struct cavm_edec_lut_csr3_s_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t psm_job_cmd_word0     : 64; /**< [ 63:  0] PSM job command word 0. */
#else /* Word 0 - Little Endian */
        uint64_t psm_job_cmd_word0     : 64; /**< [ 63:  0] PSM job command word 0. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_edec_lut_csr3_s_s cn; */
};

/**
 * Structure edec_lut_csr4_s
 *
 * EDEC LUT CSR4 Structure
 * This defines the fields of the fifth (of 5) 64-bit structures used to read and write the EDEC LUT.
 */
union cavm_edec_lut_csr4_s
{
    uint64_t u;
    struct cavm_edec_lut_csr4_s_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_18_63        : 46;
        uint64_t seq_id_hw_check_en    : 1;  /**< [ 17: 17] Enables the ECPRI Sequence ID check. This should be set to zero to skip sequence
                                                                 ID checking for the
                                                                 next packet (typically the first packet after reset, after soft reset, or after enabling flow_en).
                                                                 Hardware will set this bit 1 at the end of each packet to enable checking of subsequent packets. */
        uint64_t seq_id_check_en       : 1;  /**< [ 16: 16] Enables the ECPRI Sequence ID check. When enabled, the sequence ID of the incoming packet
                                                                 (ECPRI_HDR_SW_S[SEQ_ID][7:0]) is compared to the expected value in the
                                                                 table (EDEC_LUT_CSR4_S[ECPRI_SEQUENCE_ID]).

                                                                 Error (SEQID_ERR) is generated when EDEC_LUT_CSR0_S[FLOW_EN]=1 and
                                                                 EDEC_LUT_CSR4_S[SEQ_ID_CHECK_EN]=1 and EDEC_LUT_CSR4_S[SEQ_ID_HW_CHECK_EN]=1 and
                                                                 the received packed sequence ID does not match the expected value
                                                                 (EDEC_LUT_CSR4_S[ECPRI_SEQUENCE_ID] != ECPRI_HDR_SW_S[SEQ_ID][7:0]). */
        uint64_t ecpri_sequence_id     : 8;  /**< [ 15:  8] Expected Sequence ID sub-field of eCPRI SEQ_ID. Initialized by software to the
                                                                 first expected sequence ID.

                                                                 The table entry is updated by hardware at the end of job to the next expected sequence ID based on
                                                                 the received packet (ECPRI_HDR_SW_S[SEQ_ID][7:0]+1) when EDEC_LUT_CSR0_S[FLOW_EN]=1.
                                                                 This table update occurs even if the check is disabled (EDEC_LUT_CSR4_S[SEQ_ID_CHECK_EN]=0).

                                                                 Error (SEQID_ERR) is generated when EDEC_LUT_CSR0_S[FLOW_EN]=1 and
                                                                 EDEC_LUT_CSR4_S[SEQ_ID_CHECK_EN]=1 and EDEC_LUT_CSR4_S[SEQ_ID_HW_CHECK_EN]=1 and
                                                                 the received packed sequence ID does not match the expected value
                                                                 (EDEC_LUT_CSR4_S[ECPRI_SEQUENCE_ID] != ECPRI_HDR_SW_S[SEQ_ID][7:0]). */
        uint64_t gmid                  : 3;  /**< [  7:  5] Guest Machine ID. */
        uint64_t psm_cmd_no_action     : 1;  /**< [  4:  4] 0x0 : Send PSM command as per OPCODE in LUT
                                                                 0x1 : Ignore OPCODE in LUT and don't send PSM command */
        uint64_t bfp_iqfp_dl_zero_pad  : 1;  /**< [  3:  3] Used when EDEC_LUT_CSR0_S[DATA_FORMAT] = EDEC_DATA_FORMAT_E::IQFP and
                                                                 compression method is BFP or BFP_SRM.
                                                                 _ 0: IQ samples are normalized.
                                                                 _ 1: IQ samples are zero padded to 14 bits while exponent is kept. */
        uint64_t num_slot_exp_1ms_max_mu : 3;/**< [  2:  0] Log base two of the number of slots per 1 ms for max mu. */
#else /* Word 0 - Little Endian */
        uint64_t num_slot_exp_1ms_max_mu : 3;/**< [  2:  0] Log base two of the number of slots per 1 ms for max mu. */
        uint64_t bfp_iqfp_dl_zero_pad  : 1;  /**< [  3:  3] Used when EDEC_LUT_CSR0_S[DATA_FORMAT] = EDEC_DATA_FORMAT_E::IQFP and
                                                                 compression method is BFP or BFP_SRM.
                                                                 _ 0: IQ samples are normalized.
                                                                 _ 1: IQ samples are zero padded to 14 bits while exponent is kept. */
        uint64_t psm_cmd_no_action     : 1;  /**< [  4:  4] 0x0 : Send PSM command as per OPCODE in LUT
                                                                 0x1 : Ignore OPCODE in LUT and don't send PSM command */
        uint64_t gmid                  : 3;  /**< [  7:  5] Guest Machine ID. */
        uint64_t ecpri_sequence_id     : 8;  /**< [ 15:  8] Expected Sequence ID sub-field of eCPRI SEQ_ID. Initialized by software to the
                                                                 first expected sequence ID.

                                                                 The table entry is updated by hardware at the end of job to the next expected sequence ID based on
                                                                 the received packet (ECPRI_HDR_SW_S[SEQ_ID][7:0]+1) when EDEC_LUT_CSR0_S[FLOW_EN]=1.
                                                                 This table update occurs even if the check is disabled (EDEC_LUT_CSR4_S[SEQ_ID_CHECK_EN]=0).

                                                                 Error (SEQID_ERR) is generated when EDEC_LUT_CSR0_S[FLOW_EN]=1 and
                                                                 EDEC_LUT_CSR4_S[SEQ_ID_CHECK_EN]=1 and EDEC_LUT_CSR4_S[SEQ_ID_HW_CHECK_EN]=1 and
                                                                 the received packed sequence ID does not match the expected value
                                                                 (EDEC_LUT_CSR4_S[ECPRI_SEQUENCE_ID] != ECPRI_HDR_SW_S[SEQ_ID][7:0]). */
        uint64_t seq_id_check_en       : 1;  /**< [ 16: 16] Enables the ECPRI Sequence ID check. When enabled, the sequence ID of the incoming packet
                                                                 (ECPRI_HDR_SW_S[SEQ_ID][7:0]) is compared to the expected value in the
                                                                 table (EDEC_LUT_CSR4_S[ECPRI_SEQUENCE_ID]).

                                                                 Error (SEQID_ERR) is generated when EDEC_LUT_CSR0_S[FLOW_EN]=1 and
                                                                 EDEC_LUT_CSR4_S[SEQ_ID_CHECK_EN]=1 and EDEC_LUT_CSR4_S[SEQ_ID_HW_CHECK_EN]=1 and
                                                                 the received packed sequence ID does not match the expected value
                                                                 (EDEC_LUT_CSR4_S[ECPRI_SEQUENCE_ID] != ECPRI_HDR_SW_S[SEQ_ID][7:0]). */
        uint64_t seq_id_hw_check_en    : 1;  /**< [ 17: 17] Enables the ECPRI Sequence ID check. This should be set to zero to skip sequence
                                                                 ID checking for the
                                                                 next packet (typically the first packet after reset, after soft reset, or after enabling flow_en).
                                                                 Hardware will set this bit 1 at the end of each packet to enable checking of subsequent packets. */
        uint64_t reserved_18_63        : 46;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_edec_lut_csr4_s_s cn; */
};

/**
 * Register (RSL) edec#_ab#_bfp_user_exp_high
 *
 * EDEC BFP FXP User Exponent for IqWidth 9..16 Register
 */
union cavm_edecx_abx_bfp_user_exp_high
{
    uint64_t u;
    struct cavm_edecx_abx_bfp_user_exp_high_s
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
    /* struct cavm_edecx_abx_bfp_user_exp_high_s cn; */
};
typedef union cavm_edecx_abx_bfp_user_exp_high cavm_edecx_abx_bfp_user_exp_high_t;

static inline uint64_t CAVM_EDECX_ABX_BFP_USER_EXP_HIGH(uint64_t a, uint64_t b) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_EDECX_ABX_BFP_USER_EXP_HIGH(uint64_t a, uint64_t b)
{
    if (cavm_is_model(OCTEONTX_CNF20KA) && ((a<=2) && (b<=1)))
        return 0x87e040400238ll + 0x80000ll * ((a) & 0x3) + 0x10000ll * ((b) & 0x1);
    __cavm_csr_fatal("EDECX_ABX_BFP_USER_EXP_HIGH", 2, a, b, 0, 0, 0, 0);
}

#define typedef_CAVM_EDECX_ABX_BFP_USER_EXP_HIGH(a,b) cavm_edecx_abx_bfp_user_exp_high_t
#define bustype_CAVM_EDECX_ABX_BFP_USER_EXP_HIGH(a,b) CSR_TYPE_RSL
#define basename_CAVM_EDECX_ABX_BFP_USER_EXP_HIGH(a,b) "EDECX_ABX_BFP_USER_EXP_HIGH"
#define device_bar_CAVM_EDECX_ABX_BFP_USER_EXP_HIGH(a,b) 0x2 /* PF_BAR2 */
#define busnum_CAVM_EDECX_ABX_BFP_USER_EXP_HIGH(a,b) (a)
#define arguments_CAVM_EDECX_ABX_BFP_USER_EXP_HIGH(a,b) (a),(b),-1,-1

/**
 * Register (RSL) edec#_ab#_bfp_user_exp_low
 *
 * EDEC BFP FXP User Exponent for IqWidth 1..8 Register
 */
union cavm_edecx_abx_bfp_user_exp_low
{
    uint64_t u;
    struct cavm_edecx_abx_bfp_user_exp_low_s
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
        uint64_t user_exp0             : 5;  /**< [  4:  0](R/W) BFP FXP user exp for IqWidth 16. Legal values [-15..15] */
#else /* Word 0 - Little Endian */
        uint64_t user_exp0             : 5;  /**< [  4:  0](R/W) BFP FXP user exp for IqWidth 16. Legal values [-15..15] */
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
    /* struct cavm_edecx_abx_bfp_user_exp_low_s cn; */
};
typedef union cavm_edecx_abx_bfp_user_exp_low cavm_edecx_abx_bfp_user_exp_low_t;

static inline uint64_t CAVM_EDECX_ABX_BFP_USER_EXP_LOW(uint64_t a, uint64_t b) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_EDECX_ABX_BFP_USER_EXP_LOW(uint64_t a, uint64_t b)
{
    if (cavm_is_model(OCTEONTX_CNF20KA) && ((a<=2) && (b<=1)))
        return 0x87e040400230ll + 0x80000ll * ((a) & 0x3) + 0x10000ll * ((b) & 0x1);
    __cavm_csr_fatal("EDECX_ABX_BFP_USER_EXP_LOW", 2, a, b, 0, 0, 0, 0);
}

#define typedef_CAVM_EDECX_ABX_BFP_USER_EXP_LOW(a,b) cavm_edecx_abx_bfp_user_exp_low_t
#define bustype_CAVM_EDECX_ABX_BFP_USER_EXP_LOW(a,b) CSR_TYPE_RSL
#define basename_CAVM_EDECX_ABX_BFP_USER_EXP_LOW(a,b) "EDECX_ABX_BFP_USER_EXP_LOW"
#define device_bar_CAVM_EDECX_ABX_BFP_USER_EXP_LOW(a,b) 0x2 /* PF_BAR2 */
#define busnum_CAVM_EDECX_ABX_BFP_USER_EXP_LOW(a,b) (a)
#define arguments_CAVM_EDECX_ABX_BFP_USER_EXP_LOW(a,b) (a),(b),-1,-1

/**
 * Register (RSL) edec#_ab#_config
 *
 * EDEC Configuration Register
 */
union cavm_edecx_abx_config
{
    uint64_t u;
    struct cavm_edecx_abx_config_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t pcid_base_mask        : 16; /**< [ 63: 48](R/W) Used for [PCID_FLOWID_MODE] = 0x0, 0x1, 0x3. */
        uint64_t lmac_base_mask        : 2;  /**< [ 47: 46](R/W) Used for [PCID_FLOWID_MODE] = 0x0, 0x1, 0x3. */
        uint64_t pcid_msk_shft         : 3;  /**< [ 45: 43](R/W) Used for [PCID_FLOWID_MODE] = 0x0, 0x1, 0x3. */
        uint64_t pcid_flowid_mode      : 3;  /**< [ 42: 40](R/W) Update description based on supported modes.
                                                                 _ 0x0: Hash -
                                                                      Use defined hash function to calculate flow ID
                                                                      FlowID = hash({RFOE_PSW_W2_ECPRI_S[RFOE_INST_ID]\<2:0\>,
                                                                 RFOE_PSW_W2_ECPRI_S[LMAC_ID]\<1:0\> & EDEC_CONFIG[LMAC_ID_MASK],
                                                                 RFOE_ECPRI_PSW2_S[pc_id] & EDEC_CONFIG[PC_ID_BASE_MASK]}).
                                                                 _ 0x1: Base -
                                                                      FlowID = RFOE_PSW_W2_ECPRI_S[PC_ID] - EDEC_CONFIG[PCID_BASE_MASK].
                                                                 _ 0x2: LMAC_TRUNCATE -
                                                                      FlowID = {RFOE_PSW_W2_ECPRI_S[LMAC_ID]\<1:0\>, RFOE_PSW_W2_ECPRI_S[PC_ID]\<7:0\>}.
                                                                 _ 0x3: SHIFT -
                                                                      FlowID = RFOE_PSW_W2_ECPRI_S[PC_ID] & EDEC_CONFIG[PCID_BASE_MASK]) \>\>
                                                                 EDEC_CONFIG[PCID_MSK_SHFT] & 0x3ff
                                                                 _ 0x4: Use flowID= RFOE_PSW_W2_ECPRI_[FLOW_ID].
                                                                 _ 0x5-0x7: reserved */
        uint64_t n2_step               : 8;  /**< [ 39: 32](R/W) Value at which N2 counter increments for each 307.2MHz clock.
                                                                 Default value is 4 which means N2 is running at 1.2288MHz clock.
                                                                 If TSTAMP_FORMAT = 0, this value shall be set to 4 (default value). */
        uint64_t tstamp_format         : 1;  /**< [ 31: 31](R/W) Define Timestamp format in RFOE_PSW_S:
                                                                 0: Timestamp is BFN format defined as  RFOE_PSW_W3_BFN_S.
                                                                 1: Timestamp is BCN format defined as  RFOE_PSW_W3_BCN_S. */
        uint64_t rb_ind_clr_en         : 1;  /**< [ 30: 30](R/W) When set and ECPRI_SECTION_HDR_S[RB] != 0, clears ECPRI_SECTION_HDR_S[RB]. */
        uint64_t start_prb_clr_en      : 1;  /**< [ 29: 29](R/W) When set and ECPRI_SECTION_HDR_S[NUM_PRB] == 0 and ECPRI_SECTION_HDR_S[START_PRB] != 0,
                                                                 clears ECPRI_SECTION_HDR_S[START_PRB]. */
        uint64_t bfp_fxp_user_exp_en   : 1;  /**< [ 28: 28](R/W) If set, USER_EXP is enabled for BFP with FXP input format */
        uint64_t nocomp_fxp_user_exp_en : 1; /**< [ 27: 27](R/W) If set, USER_EXP is enabled for NO_COMP with FXP input format */
        uint64_t mod_comp_csf_ind_en   : 1;  /**< [ 26: 26](R/W) If set, Modulation Compression CSF (Constellation Shift Flag) is enabled. */
        uint64_t mod_comp_msb          : 1;  /**< [ 25: 25](R/W) If set, eDEC composes output sample by zero padding each I and Q */
        uint64_t addwork_jobtag_incr   : 1;  /**< [ 24: 24](R/W) If EDEC_LUT_CSR3_S[PSM_JOB_CMD_WORD0] contains a command of type
                                                                 PSM_CMD_ADDWORK_S, EDEC()_AB()_CONFIG[JOBTAG_COUNT] will only increment if
                                                                 this bit is set. */
        uint64_t jobtag_count          : 16; /**< [ 23:  8](R/W) On LUT initialization or modification, for each initialized or modified
                                                                 flow ID, the flow ID's internal JOBTAG[FLOW_ID] counter (maintained by
                                                                 EDEC) is set to JOBTAG_INIT[FLOW_ID] = PSM_CMD_ADDJOB_S[JOBTAG] (where
                                                                 word 0 of PSM_CMD_ADDJOB_S is the flow ID's
                                                                 EDEC_LUT_CSR3_S[PSM_JOB_CMD_WORD0]).

                                                                 For each processed job, the associated flow ID's JOBTAG[FLOW_ID] counter
                                                                 is incremented until it reaches JOBTAG_INIT[FLOW_ID] + JOBTAG_COUNT or
                                                                 0xffff, whichever is smaller. A subsequent job for that flow ID will
                                                                 cause JOBTAG[FLOW_ID] counter to reset to the JOBTAG_INIT[FLOW_ID]
                                                                 value from EDEC_LUT_CSR3_S[PSM_JOB_CMD_WORD0].

                                                                 The incrementation described above always takes place when the command in
                                                                 EDEC_LUT_CSR3_S[PSM_JOB_CMD_WORD0] is PSM_CMD_ADDJOB_S or PSM_CMD_WRSTS_S. If the command is
                                                                 PSM_CMD_ADDWORK_S, the incrementation only takes place if
                                                                 EDEC()_AB()_CONFIG[ADDWORK_JOBTAG_INCR] is set. */
        uint64_t ul_sign_ext           : 1;  /**< [  7:  7](R/W) 0x0 - Sign Extension.
                                                                 0x1 - Zero pad. */
        uint64_t dl_sign_ext           : 1;  /**< [  6:  6](R/W) 0x0 - Sign Extension.
                                                                 0x1 - Zero pad. */
        uint64_t rx_window_check_en    : 1;  /**< [  5:  5](R/W) If set, enables the rx window check mechanism. */
        uint64_t force_cond_clk_en     : 1;  /**< [  4:  4](R/W) Force the conditional clocks active within the block. For diagnostic use only. */
        uint64_t symmetric_rounding_ulaw : 1;/**< [  3:  3](R/W) Defines Rounding method for compressions: ECPRI_COMP_METH_E::MU_LAW:
                                                                 _ 0: OR-ROUND.
                                                                 _ 1: Symmetric Rounding. */
        uint64_t symmetric_rounding_bfp : 1; /**< [  2:  2](R/W) Defines Rounding method for compressions: ECPRI_COMP_METH_E::BFP:
                                                                 and ECPRI_COMP_METH_E::BFP_SRM:
                                                                 _ 0: OR-ROUND.
                                                                 _ 1: Symmetric Rounding. */
        uint64_t symmetric_rounding    : 1;  /**< [  1:  1](R/W) Defines Rounding method for compressions: ECPRI_COMP_METH_E::NO_COMP:
                                                                 _ 0 - OR ROUND.
                                                                 _ 1 - Symmetric Rounding. */
        uint64_t comp_sign_ext         : 1;  /**< [  0:  0](R/W) Valid when the compression method is No Compression
                                                                 (ECPRI_COMP_METH_E::NO_COMP).
                                                                 If set, decompression sign-extends each I/Q sample to 16 bits.
                                                                 If clear and the compressed I/Q width is less than 16, decompression zero
                                                                 pads the lower bits of each I/Q sample with zeros.

                                                                 This bit is EDEC's counterpart to ECMP_CONFIG[UNCOMP_SHIFT_LEFT].
                                                                 Software should set both bits to the same value. */
#else /* Word 0 - Little Endian */
        uint64_t comp_sign_ext         : 1;  /**< [  0:  0](R/W) Valid when the compression method is No Compression
                                                                 (ECPRI_COMP_METH_E::NO_COMP).
                                                                 If set, decompression sign-extends each I/Q sample to 16 bits.
                                                                 If clear and the compressed I/Q width is less than 16, decompression zero
                                                                 pads the lower bits of each I/Q sample with zeros.

                                                                 This bit is EDEC's counterpart to ECMP_CONFIG[UNCOMP_SHIFT_LEFT].
                                                                 Software should set both bits to the same value. */
        uint64_t symmetric_rounding    : 1;  /**< [  1:  1](R/W) Defines Rounding method for compressions: ECPRI_COMP_METH_E::NO_COMP:
                                                                 _ 0 - OR ROUND.
                                                                 _ 1 - Symmetric Rounding. */
        uint64_t symmetric_rounding_bfp : 1; /**< [  2:  2](R/W) Defines Rounding method for compressions: ECPRI_COMP_METH_E::BFP:
                                                                 and ECPRI_COMP_METH_E::BFP_SRM:
                                                                 _ 0: OR-ROUND.
                                                                 _ 1: Symmetric Rounding. */
        uint64_t symmetric_rounding_ulaw : 1;/**< [  3:  3](R/W) Defines Rounding method for compressions: ECPRI_COMP_METH_E::MU_LAW:
                                                                 _ 0: OR-ROUND.
                                                                 _ 1: Symmetric Rounding. */
        uint64_t force_cond_clk_en     : 1;  /**< [  4:  4](R/W) Force the conditional clocks active within the block. For diagnostic use only. */
        uint64_t rx_window_check_en    : 1;  /**< [  5:  5](R/W) If set, enables the rx window check mechanism. */
        uint64_t dl_sign_ext           : 1;  /**< [  6:  6](R/W) 0x0 - Sign Extension.
                                                                 0x1 - Zero pad. */
        uint64_t ul_sign_ext           : 1;  /**< [  7:  7](R/W) 0x0 - Sign Extension.
                                                                 0x1 - Zero pad. */
        uint64_t jobtag_count          : 16; /**< [ 23:  8](R/W) On LUT initialization or modification, for each initialized or modified
                                                                 flow ID, the flow ID's internal JOBTAG[FLOW_ID] counter (maintained by
                                                                 EDEC) is set to JOBTAG_INIT[FLOW_ID] = PSM_CMD_ADDJOB_S[JOBTAG] (where
                                                                 word 0 of PSM_CMD_ADDJOB_S is the flow ID's
                                                                 EDEC_LUT_CSR3_S[PSM_JOB_CMD_WORD0]).

                                                                 For each processed job, the associated flow ID's JOBTAG[FLOW_ID] counter
                                                                 is incremented until it reaches JOBTAG_INIT[FLOW_ID] + JOBTAG_COUNT or
                                                                 0xffff, whichever is smaller. A subsequent job for that flow ID will
                                                                 cause JOBTAG[FLOW_ID] counter to reset to the JOBTAG_INIT[FLOW_ID]
                                                                 value from EDEC_LUT_CSR3_S[PSM_JOB_CMD_WORD0].

                                                                 The incrementation described above always takes place when the command in
                                                                 EDEC_LUT_CSR3_S[PSM_JOB_CMD_WORD0] is PSM_CMD_ADDJOB_S or PSM_CMD_WRSTS_S. If the command is
                                                                 PSM_CMD_ADDWORK_S, the incrementation only takes place if
                                                                 EDEC()_AB()_CONFIG[ADDWORK_JOBTAG_INCR] is set. */
        uint64_t addwork_jobtag_incr   : 1;  /**< [ 24: 24](R/W) If EDEC_LUT_CSR3_S[PSM_JOB_CMD_WORD0] contains a command of type
                                                                 PSM_CMD_ADDWORK_S, EDEC()_AB()_CONFIG[JOBTAG_COUNT] will only increment if
                                                                 this bit is set. */
        uint64_t mod_comp_msb          : 1;  /**< [ 25: 25](R/W) If set, eDEC composes output sample by zero padding each I and Q */
        uint64_t mod_comp_csf_ind_en   : 1;  /**< [ 26: 26](R/W) If set, Modulation Compression CSF (Constellation Shift Flag) is enabled. */
        uint64_t nocomp_fxp_user_exp_en : 1; /**< [ 27: 27](R/W) If set, USER_EXP is enabled for NO_COMP with FXP input format */
        uint64_t bfp_fxp_user_exp_en   : 1;  /**< [ 28: 28](R/W) If set, USER_EXP is enabled for BFP with FXP input format */
        uint64_t start_prb_clr_en      : 1;  /**< [ 29: 29](R/W) When set and ECPRI_SECTION_HDR_S[NUM_PRB] == 0 and ECPRI_SECTION_HDR_S[START_PRB] != 0,
                                                                 clears ECPRI_SECTION_HDR_S[START_PRB]. */
        uint64_t rb_ind_clr_en         : 1;  /**< [ 30: 30](R/W) When set and ECPRI_SECTION_HDR_S[RB] != 0, clears ECPRI_SECTION_HDR_S[RB]. */
        uint64_t tstamp_format         : 1;  /**< [ 31: 31](R/W) Define Timestamp format in RFOE_PSW_S:
                                                                 0: Timestamp is BFN format defined as  RFOE_PSW_W3_BFN_S.
                                                                 1: Timestamp is BCN format defined as  RFOE_PSW_W3_BCN_S. */
        uint64_t n2_step               : 8;  /**< [ 39: 32](R/W) Value at which N2 counter increments for each 307.2MHz clock.
                                                                 Default value is 4 which means N2 is running at 1.2288MHz clock.
                                                                 If TSTAMP_FORMAT = 0, this value shall be set to 4 (default value). */
        uint64_t pcid_flowid_mode      : 3;  /**< [ 42: 40](R/W) Update description based on supported modes.
                                                                 _ 0x0: Hash -
                                                                      Use defined hash function to calculate flow ID
                                                                      FlowID = hash({RFOE_PSW_W2_ECPRI_S[RFOE_INST_ID]\<2:0\>,
                                                                 RFOE_PSW_W2_ECPRI_S[LMAC_ID]\<1:0\> & EDEC_CONFIG[LMAC_ID_MASK],
                                                                 RFOE_ECPRI_PSW2_S[pc_id] & EDEC_CONFIG[PC_ID_BASE_MASK]}).
                                                                 _ 0x1: Base -
                                                                      FlowID = RFOE_PSW_W2_ECPRI_S[PC_ID] - EDEC_CONFIG[PCID_BASE_MASK].
                                                                 _ 0x2: LMAC_TRUNCATE -
                                                                      FlowID = {RFOE_PSW_W2_ECPRI_S[LMAC_ID]\<1:0\>, RFOE_PSW_W2_ECPRI_S[PC_ID]\<7:0\>}.
                                                                 _ 0x3: SHIFT -
                                                                      FlowID = RFOE_PSW_W2_ECPRI_S[PC_ID] & EDEC_CONFIG[PCID_BASE_MASK]) \>\>
                                                                 EDEC_CONFIG[PCID_MSK_SHFT] & 0x3ff
                                                                 _ 0x4: Use flowID= RFOE_PSW_W2_ECPRI_[FLOW_ID].
                                                                 _ 0x5-0x7: reserved */
        uint64_t pcid_msk_shft         : 3;  /**< [ 45: 43](R/W) Used for [PCID_FLOWID_MODE] = 0x0, 0x1, 0x3. */
        uint64_t lmac_base_mask        : 2;  /**< [ 47: 46](R/W) Used for [PCID_FLOWID_MODE] = 0x0, 0x1, 0x3. */
        uint64_t pcid_base_mask        : 16; /**< [ 63: 48](R/W) Used for [PCID_FLOWID_MODE] = 0x0, 0x1, 0x3. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_edecx_abx_config_s cn; */
};
typedef union cavm_edecx_abx_config cavm_edecx_abx_config_t;

static inline uint64_t CAVM_EDECX_ABX_CONFIG(uint64_t a, uint64_t b) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_EDECX_ABX_CONFIG(uint64_t a, uint64_t b)
{
    if (cavm_is_model(OCTEONTX_CNF20KA) && ((a<=2) && (b<=1)))
        return 0x87e040400020ll + 0x80000ll * ((a) & 0x3) + 0x10000ll * ((b) & 0x1);
    __cavm_csr_fatal("EDECX_ABX_CONFIG", 2, a, b, 0, 0, 0, 0);
}

#define typedef_CAVM_EDECX_ABX_CONFIG(a,b) cavm_edecx_abx_config_t
#define bustype_CAVM_EDECX_ABX_CONFIG(a,b) CSR_TYPE_RSL
#define basename_CAVM_EDECX_ABX_CONFIG(a,b) "EDECX_ABX_CONFIG"
#define device_bar_CAVM_EDECX_ABX_CONFIG(a,b) 0x2 /* PF_BAR2 */
#define busnum_CAVM_EDECX_ABX_CONFIG(a,b) (a)
#define arguments_CAVM_EDECX_ABX_CONFIG(a,b) (a),(b),-1,-1

/**
 * Register (RSL) edec#_ab#_config1
 *
 * EDEC Configuration Register
 */
union cavm_edecx_abx_config1
{
    uint64_t u;
    struct cavm_edecx_abx_config1_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t bts_tick_per_1_2288_ghz : 16;/**< [ 63: 48](R/W) Number of BTS Tick per 1.2288GHz Tick in Q5 format.
                                                                 (1.2288GHz * 2^5) / BTS_TICK_CLK */
        uint64_t reserved_1_47         : 47;
        uint64_t rx_wnd_algo_ver       : 1;  /**< [  0:  0](R/W) _ 0: RX window algorithm ignores frame number
                                                                 _ 1: RX window algorithm uses frame number */
#else /* Word 0 - Little Endian */
        uint64_t rx_wnd_algo_ver       : 1;  /**< [  0:  0](R/W) _ 0: RX window algorithm ignores frame number
                                                                 _ 1: RX window algorithm uses frame number */
        uint64_t reserved_1_47         : 47;
        uint64_t bts_tick_per_1_2288_ghz : 16;/**< [ 63: 48](R/W) Number of BTS Tick per 1.2288GHz Tick in Q5 format.
                                                                 (1.2288GHz * 2^5) / BTS_TICK_CLK */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_edecx_abx_config1_s cn; */
};
typedef union cavm_edecx_abx_config1 cavm_edecx_abx_config1_t;

static inline uint64_t CAVM_EDECX_ABX_CONFIG1(uint64_t a, uint64_t b) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_EDECX_ABX_CONFIG1(uint64_t a, uint64_t b)
{
    if (cavm_is_model(OCTEONTX_CNF20KA) && ((a<=2) && (b<=1)))
        return 0x87e040400028ll + 0x80000ll * ((a) & 0x3) + 0x10000ll * ((b) & 0x1);
    __cavm_csr_fatal("EDECX_ABX_CONFIG1", 2, a, b, 0, 0, 0, 0);
}

#define typedef_CAVM_EDECX_ABX_CONFIG1(a,b) cavm_edecx_abx_config1_t
#define bustype_CAVM_EDECX_ABX_CONFIG1(a,b) CSR_TYPE_RSL
#define basename_CAVM_EDECX_ABX_CONFIG1(a,b) "EDECX_ABX_CONFIG1"
#define device_bar_CAVM_EDECX_ABX_CONFIG1(a,b) 0x2 /* PF_BAR2 */
#define busnum_CAVM_EDECX_ABX_CONFIG1(a,b) (a)
#define arguments_CAVM_EDECX_ABX_CONFIG1(a,b) (a),(b),-1,-1

/**
 * Register (RSL) edec#_ab#_control0
 *
 * EDEC Control Register
 */
union cavm_edecx_abx_control0
{
    uint64_t u;
    struct cavm_edecx_abx_control0_s
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
    /* struct cavm_edecx_abx_control0_s cn; */
};
typedef union cavm_edecx_abx_control0 cavm_edecx_abx_control0_t;

static inline uint64_t CAVM_EDECX_ABX_CONTROL0(uint64_t a, uint64_t b) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_EDECX_ABX_CONTROL0(uint64_t a, uint64_t b)
{
    if (cavm_is_model(OCTEONTX_CNF20KA) && ((a<=2) && (b<=1)))
        return 0x87e040400000ll + 0x80000ll * ((a) & 0x3) + 0x10000ll * ((b) & 0x1);
    __cavm_csr_fatal("EDECX_ABX_CONTROL0", 2, a, b, 0, 0, 0, 0);
}

#define typedef_CAVM_EDECX_ABX_CONTROL0(a,b) cavm_edecx_abx_control0_t
#define bustype_CAVM_EDECX_ABX_CONTROL0(a,b) CSR_TYPE_RSL
#define basename_CAVM_EDECX_ABX_CONTROL0(a,b) "EDECX_ABX_CONTROL0"
#define device_bar_CAVM_EDECX_ABX_CONTROL0(a,b) 0x2 /* PF_BAR2 */
#define busnum_CAVM_EDECX_ABX_CONTROL0(a,b) (a)
#define arguments_CAVM_EDECX_ABX_CONTROL0(a,b) (a),(b),-1,-1

/**
 * Register (RSL) edec#_ab#_control1
 *
 * EDEC AB Control Register
 */
union cavm_edecx_abx_control1
{
    uint64_t u;
    struct cavm_edecx_abx_control1_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_16_63        : 48;
        uint64_t jobid3                : 16; /**< [ 15:  0](R/W) Job ID for slot 3. */
#else /* Word 0 - Little Endian */
        uint64_t jobid3                : 16; /**< [ 15:  0](R/W) Job ID for slot 3. */
        uint64_t reserved_16_63        : 48;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_edecx_abx_control1_s cn; */
};
typedef union cavm_edecx_abx_control1 cavm_edecx_abx_control1_t;

static inline uint64_t CAVM_EDECX_ABX_CONTROL1(uint64_t a, uint64_t b) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_EDECX_ABX_CONTROL1(uint64_t a, uint64_t b)
{
    if (cavm_is_model(OCTEONTX_CNF20KA) && ((a<=2) && (b<=1)))
        return 0x87e040400008ll + 0x80000ll * ((a) & 0x3) + 0x10000ll * ((b) & 0x1);
    __cavm_csr_fatal("EDECX_ABX_CONTROL1", 2, a, b, 0, 0, 0, 0);
}

#define typedef_CAVM_EDECX_ABX_CONTROL1(a,b) cavm_edecx_abx_control1_t
#define bustype_CAVM_EDECX_ABX_CONTROL1(a,b) CSR_TYPE_RSL
#define basename_CAVM_EDECX_ABX_CONTROL1(a,b) "EDECX_ABX_CONTROL1"
#define device_bar_CAVM_EDECX_ABX_CONTROL1(a,b) 0x2 /* PF_BAR2 */
#define busnum_CAVM_EDECX_ABX_CONTROL1(a,b) (a)
#define arguments_CAVM_EDECX_ABX_CONTROL1(a,b) (a),(b),-1,-1

/**
 * Register (RSL) edec#_ab#_drop_cnt
 *
 * EDEC Drop Error Count Register
 */
union cavm_edecx_abx_drop_cnt
{
    uint64_t u;
    struct cavm_edecx_abx_drop_cnt_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t cnt                   : 64; /**< [ 63:  0](R/W/H) Number of packets dropped due to errors. Write to clear. */
#else /* Word 0 - Little Endian */
        uint64_t cnt                   : 64; /**< [ 63:  0](R/W/H) Number of packets dropped due to errors. Write to clear. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_edecx_abx_drop_cnt_s cn; */
};
typedef union cavm_edecx_abx_drop_cnt cavm_edecx_abx_drop_cnt_t;

static inline uint64_t CAVM_EDECX_ABX_DROP_CNT(uint64_t a, uint64_t b) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_EDECX_ABX_DROP_CNT(uint64_t a, uint64_t b)
{
    if (cavm_is_model(OCTEONTX_CNF20KA) && ((a<=2) && (b<=1)))
        return 0x87e0404000f8ll + 0x80000ll * ((a) & 0x3) + 0x10000ll * ((b) & 0x1);
    __cavm_csr_fatal("EDECX_ABX_DROP_CNT", 2, a, b, 0, 0, 0, 0);
}

#define typedef_CAVM_EDECX_ABX_DROP_CNT(a,b) cavm_edecx_abx_drop_cnt_t
#define bustype_CAVM_EDECX_ABX_DROP_CNT(a,b) CSR_TYPE_RSL
#define basename_CAVM_EDECX_ABX_DROP_CNT(a,b) "EDECX_ABX_DROP_CNT"
#define device_bar_CAVM_EDECX_ABX_DROP_CNT(a,b) 0x2 /* PF_BAR2 */
#define busnum_CAVM_EDECX_ABX_DROP_CNT(a,b) (a)
#define arguments_CAVM_EDECX_ABX_DROP_CNT(a,b) (a),(b),-1,-1

/**
 * Register (RSL) edec#_ab#_ecpri_error_cond
 *
 * EDEC eCPRI Header Error Conditions Register
 * This register contains criteria for reporting certain error conditions
 * detected while parsing eCPRI headers.
 */
union cavm_edecx_abx_ecpri_error_cond
{
    uint64_t u;
    struct cavm_edecx_abx_ecpri_error_cond_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_17_63        : 47;
        uint64_t max_payload_size      : 16; /**< [ 16:  1](R/W) ECPRI header maximum payload size. See EDEC()_AB()_ERROR_STATUS[PYLD_MAX_ERR] error. */
        uint64_t reserved_0            : 1;
#else /* Word 0 - Little Endian */
        uint64_t reserved_0            : 1;
        uint64_t max_payload_size      : 16; /**< [ 16:  1](R/W) ECPRI header maximum payload size. See EDEC()_AB()_ERROR_STATUS[PYLD_MAX_ERR] error. */
        uint64_t reserved_17_63        : 47;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_edecx_abx_ecpri_error_cond_s cn; */
};
typedef union cavm_edecx_abx_ecpri_error_cond cavm_edecx_abx_ecpri_error_cond_t;

static inline uint64_t CAVM_EDECX_ABX_ECPRI_ERROR_COND(uint64_t a, uint64_t b) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_EDECX_ABX_ECPRI_ERROR_COND(uint64_t a, uint64_t b)
{
    if (cavm_is_model(OCTEONTX_CNF20KA) && ((a<=2) && (b<=1)))
        return 0x87e040400080ll + 0x80000ll * ((a) & 0x3) + 0x10000ll * ((b) & 0x1);
    __cavm_csr_fatal("EDECX_ABX_ECPRI_ERROR_COND", 2, a, b, 0, 0, 0, 0);
}

#define typedef_CAVM_EDECX_ABX_ECPRI_ERROR_COND(a,b) cavm_edecx_abx_ecpri_error_cond_t
#define bustype_CAVM_EDECX_ABX_ECPRI_ERROR_COND(a,b) CSR_TYPE_RSL
#define basename_CAVM_EDECX_ABX_ECPRI_ERROR_COND(a,b) "EDECX_ABX_ECPRI_ERROR_COND"
#define device_bar_CAVM_EDECX_ABX_ECPRI_ERROR_COND(a,b) 0x2 /* PF_BAR2 */
#define busnum_CAVM_EDECX_ABX_ECPRI_ERROR_COND(a,b) (a)
#define arguments_CAVM_EDECX_ABX_ECPRI_ERROR_COND(a,b) (a),(b),-1,-1

/**
 * Register (RSL) edec#_ab#_error_cnt
 *
 * EDEC Error Count Register
 */
union cavm_edecx_abx_error_cnt
{
    uint64_t u;
    struct cavm_edecx_abx_error_cnt_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t cnt                   : 64; /**< [ 63:  0](R/W/H) Number of errors encountered. Write to clear. */
#else /* Word 0 - Little Endian */
        uint64_t cnt                   : 64; /**< [ 63:  0](R/W/H) Number of errors encountered. Write to clear. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_edecx_abx_error_cnt_s cn; */
};
typedef union cavm_edecx_abx_error_cnt cavm_edecx_abx_error_cnt_t;

static inline uint64_t CAVM_EDECX_ABX_ERROR_CNT(uint64_t a, uint64_t b) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_EDECX_ABX_ERROR_CNT(uint64_t a, uint64_t b)
{
    if (cavm_is_model(OCTEONTX_CNF20KA) && ((a<=2) && (b<=1)))
        return 0x87e0404000f0ll + 0x80000ll * ((a) & 0x3) + 0x10000ll * ((b) & 0x1);
    __cavm_csr_fatal("EDECX_ABX_ERROR_CNT", 2, a, b, 0, 0, 0, 0);
}

#define typedef_CAVM_EDECX_ABX_ERROR_CNT(a,b) cavm_edecx_abx_error_cnt_t
#define bustype_CAVM_EDECX_ABX_ERROR_CNT(a,b) CSR_TYPE_RSL
#define basename_CAVM_EDECX_ABX_ERROR_CNT(a,b) "EDECX_ABX_ERROR_CNT"
#define device_bar_CAVM_EDECX_ABX_ERROR_CNT(a,b) 0x2 /* PF_BAR2 */
#define busnum_CAVM_EDECX_ABX_ERROR_CNT(a,b) (a)
#define arguments_CAVM_EDECX_ABX_ERROR_CNT(a,b) (a),(b),-1,-1

/**
 * Register (RSL) edec#_ab#_error_drop_en
 *
 * EDEC Error Drop En Register
 * Any cleared bit will prevent dropping the packet when the corresponding error in
 * EDEC()_AB()_ERROR_STATUS occurs.
 */
union cavm_edecx_abx_error_drop_en
{
    uint64_t u;
    struct cavm_edecx_abx_error_drop_en_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_29_63        : 35;
        uint64_t rfoe_mcs_err_2        : 1;  /**< [ 28: 28](R/W) Drop Enable for EDEC()_AB()_ERROR_STATUS[RFOE_MCS_ERR_2] */
        uint64_t rfoe_mcs_err_1        : 1;  /**< [ 27: 27](R/W) Drop Enable for EDEC()_AB()_ERROR_STATUS[RFOE_MCS_ERR_1] */
        uint64_t rfoe_mcs_err_0        : 1;  /**< [ 26: 26](R/W) Drop Enable for EDEC()_AB()_ERROR_STATUS[RFOE_MCS_ERR_0] */
        uint64_t rfoe_mac_err_2        : 1;  /**< [ 25: 25](R/W) Drop Enable for EDEC()_AB()_ERROR_STATUS[RFOE_MAC_ERR_2] */
        uint64_t rfoe_mac_err_1        : 1;  /**< [ 24: 24](R/W) Drop Enable for EDEC()_AB()_ERROR_STATUS[RFOE_MAC_ERR_1] */
        uint64_t rfoe_mac_err_0        : 1;  /**< [ 23: 23](R/W) Drop Enable for EDEC()_AB()_ERROR_STATUS[RFOE_MAC_ERR_0] */
        uint64_t reserved_11_22        : 12;
        uint64_t slot_id_err           : 1;  /**< [ 10: 10](R/W) Drop Enable for EDEC()_AB()_ERROR_STATUS[SLOT_ID_ERR] */
        uint64_t reserved_9            : 1;
        uint64_t data_dir_err          : 1;  /**< [  8:  8](R/W) Drop Enable for EDEC()_AB()_ERROR_STATUS[DATA_DIR_ERR] */
        uint64_t pyld_max_err          : 1;  /**< [  7:  7](R/W) Drop Enable for EDEC()_AB()_ERROR_STATUS[PYLD_MAX_ERR] */
        uint64_t reserved_6            : 1;
        uint64_t msg_typ_err           : 1;  /**< [  5:  5](R/W) Drop Enable for EDEC()_AB()_ERROR_STATUS[MSG_TYP_ERR] */
        uint64_t concat_err            : 1;  /**< [  4:  4](R/W) Drop Enable for EDEC()_AB()_ERROR_STATUS[CONCAT_ERR] */
        uint64_t pcid_err              : 1;  /**< [  3:  3](R/W) Drop Enable for EDEC()_AB()_ERROR_STATUS[PCID_ERR] */
        uint64_t reserved_0_2          : 3;
#else /* Word 0 - Little Endian */
        uint64_t reserved_0_2          : 3;
        uint64_t pcid_err              : 1;  /**< [  3:  3](R/W) Drop Enable for EDEC()_AB()_ERROR_STATUS[PCID_ERR] */
        uint64_t concat_err            : 1;  /**< [  4:  4](R/W) Drop Enable for EDEC()_AB()_ERROR_STATUS[CONCAT_ERR] */
        uint64_t msg_typ_err           : 1;  /**< [  5:  5](R/W) Drop Enable for EDEC()_AB()_ERROR_STATUS[MSG_TYP_ERR] */
        uint64_t reserved_6            : 1;
        uint64_t pyld_max_err          : 1;  /**< [  7:  7](R/W) Drop Enable for EDEC()_AB()_ERROR_STATUS[PYLD_MAX_ERR] */
        uint64_t data_dir_err          : 1;  /**< [  8:  8](R/W) Drop Enable for EDEC()_AB()_ERROR_STATUS[DATA_DIR_ERR] */
        uint64_t reserved_9            : 1;
        uint64_t slot_id_err           : 1;  /**< [ 10: 10](R/W) Drop Enable for EDEC()_AB()_ERROR_STATUS[SLOT_ID_ERR] */
        uint64_t reserved_11_22        : 12;
        uint64_t rfoe_mac_err_0        : 1;  /**< [ 23: 23](R/W) Drop Enable for EDEC()_AB()_ERROR_STATUS[RFOE_MAC_ERR_0] */
        uint64_t rfoe_mac_err_1        : 1;  /**< [ 24: 24](R/W) Drop Enable for EDEC()_AB()_ERROR_STATUS[RFOE_MAC_ERR_1] */
        uint64_t rfoe_mac_err_2        : 1;  /**< [ 25: 25](R/W) Drop Enable for EDEC()_AB()_ERROR_STATUS[RFOE_MAC_ERR_2] */
        uint64_t rfoe_mcs_err_0        : 1;  /**< [ 26: 26](R/W) Drop Enable for EDEC()_AB()_ERROR_STATUS[RFOE_MCS_ERR_0] */
        uint64_t rfoe_mcs_err_1        : 1;  /**< [ 27: 27](R/W) Drop Enable for EDEC()_AB()_ERROR_STATUS[RFOE_MCS_ERR_1] */
        uint64_t rfoe_mcs_err_2        : 1;  /**< [ 28: 28](R/W) Drop Enable for EDEC()_AB()_ERROR_STATUS[RFOE_MCS_ERR_2] */
        uint64_t reserved_29_63        : 35;
#endif /* Word 0 - End */
    } s;
    struct cavm_edecx_abx_error_drop_en_cn
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_29_63        : 35;
        uint64_t rfoe_mcs_err_2        : 1;  /**< [ 28: 28](R/W) Drop Enable for EDEC()_AB()_ERROR_STATUS[RFOE_MCS_ERR_2] */
        uint64_t rfoe_mcs_err_1        : 1;  /**< [ 27: 27](R/W) Drop Enable for EDEC()_AB()_ERROR_STATUS[RFOE_MCS_ERR_1] */
        uint64_t rfoe_mcs_err_0        : 1;  /**< [ 26: 26](R/W) Drop Enable for EDEC()_AB()_ERROR_STATUS[RFOE_MCS_ERR_0] */
        uint64_t rfoe_mac_err_2        : 1;  /**< [ 25: 25](R/W) Drop Enable for EDEC()_AB()_ERROR_STATUS[RFOE_MAC_ERR_2] */
        uint64_t rfoe_mac_err_1        : 1;  /**< [ 24: 24](R/W) Drop Enable for EDEC()_AB()_ERROR_STATUS[RFOE_MAC_ERR_1] */
        uint64_t rfoe_mac_err_0        : 1;  /**< [ 23: 23](R/W) Drop Enable for EDEC()_AB()_ERROR_STATUS[RFOE_MAC_ERR_0] */
        uint64_t reserved_16_22        : 7;
        uint64_t reserved_13_15        : 3;
        uint64_t reserved_12           : 1;
        uint64_t reserved_11           : 1;
        uint64_t slot_id_err           : 1;  /**< [ 10: 10](R/W) Drop Enable for EDEC()_AB()_ERROR_STATUS[SLOT_ID_ERR] */
        uint64_t reserved_9            : 1;
        uint64_t data_dir_err          : 1;  /**< [  8:  8](R/W) Drop Enable for EDEC()_AB()_ERROR_STATUS[DATA_DIR_ERR] */
        uint64_t pyld_max_err          : 1;  /**< [  7:  7](R/W) Drop Enable for EDEC()_AB()_ERROR_STATUS[PYLD_MAX_ERR] */
        uint64_t reserved_6            : 1;
        uint64_t msg_typ_err           : 1;  /**< [  5:  5](R/W) Drop Enable for EDEC()_AB()_ERROR_STATUS[MSG_TYP_ERR] */
        uint64_t concat_err            : 1;  /**< [  4:  4](R/W) Drop Enable for EDEC()_AB()_ERROR_STATUS[CONCAT_ERR] */
        uint64_t pcid_err              : 1;  /**< [  3:  3](R/W) Drop Enable for EDEC()_AB()_ERROR_STATUS[PCID_ERR] */
        uint64_t reserved_0_2          : 3;
#else /* Word 0 - Little Endian */
        uint64_t reserved_0_2          : 3;
        uint64_t pcid_err              : 1;  /**< [  3:  3](R/W) Drop Enable for EDEC()_AB()_ERROR_STATUS[PCID_ERR] */
        uint64_t concat_err            : 1;  /**< [  4:  4](R/W) Drop Enable for EDEC()_AB()_ERROR_STATUS[CONCAT_ERR] */
        uint64_t msg_typ_err           : 1;  /**< [  5:  5](R/W) Drop Enable for EDEC()_AB()_ERROR_STATUS[MSG_TYP_ERR] */
        uint64_t reserved_6            : 1;
        uint64_t pyld_max_err          : 1;  /**< [  7:  7](R/W) Drop Enable for EDEC()_AB()_ERROR_STATUS[PYLD_MAX_ERR] */
        uint64_t data_dir_err          : 1;  /**< [  8:  8](R/W) Drop Enable for EDEC()_AB()_ERROR_STATUS[DATA_DIR_ERR] */
        uint64_t reserved_9            : 1;
        uint64_t slot_id_err           : 1;  /**< [ 10: 10](R/W) Drop Enable for EDEC()_AB()_ERROR_STATUS[SLOT_ID_ERR] */
        uint64_t reserved_11           : 1;
        uint64_t reserved_12           : 1;
        uint64_t reserved_13_15        : 3;
        uint64_t reserved_16_22        : 7;
        uint64_t rfoe_mac_err_0        : 1;  /**< [ 23: 23](R/W) Drop Enable for EDEC()_AB()_ERROR_STATUS[RFOE_MAC_ERR_0] */
        uint64_t rfoe_mac_err_1        : 1;  /**< [ 24: 24](R/W) Drop Enable for EDEC()_AB()_ERROR_STATUS[RFOE_MAC_ERR_1] */
        uint64_t rfoe_mac_err_2        : 1;  /**< [ 25: 25](R/W) Drop Enable for EDEC()_AB()_ERROR_STATUS[RFOE_MAC_ERR_2] */
        uint64_t rfoe_mcs_err_0        : 1;  /**< [ 26: 26](R/W) Drop Enable for EDEC()_AB()_ERROR_STATUS[RFOE_MCS_ERR_0] */
        uint64_t rfoe_mcs_err_1        : 1;  /**< [ 27: 27](R/W) Drop Enable for EDEC()_AB()_ERROR_STATUS[RFOE_MCS_ERR_1] */
        uint64_t rfoe_mcs_err_2        : 1;  /**< [ 28: 28](R/W) Drop Enable for EDEC()_AB()_ERROR_STATUS[RFOE_MCS_ERR_2] */
        uint64_t reserved_29_63        : 35;
#endif /* Word 0 - End */
    } cn;
};
typedef union cavm_edecx_abx_error_drop_en cavm_edecx_abx_error_drop_en_t;

static inline uint64_t CAVM_EDECX_ABX_ERROR_DROP_EN(uint64_t a, uint64_t b) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_EDECX_ABX_ERROR_DROP_EN(uint64_t a, uint64_t b)
{
    if (cavm_is_model(OCTEONTX_CNF20KA) && ((a<=2) && (b<=1)))
        return 0x87e040400050ll + 0x80000ll * ((a) & 0x3) + 0x10000ll * ((b) & 0x1);
    __cavm_csr_fatal("EDECX_ABX_ERROR_DROP_EN", 2, a, b, 0, 0, 0, 0);
}

#define typedef_CAVM_EDECX_ABX_ERROR_DROP_EN(a,b) cavm_edecx_abx_error_drop_en_t
#define bustype_CAVM_EDECX_ABX_ERROR_DROP_EN(a,b) CSR_TYPE_RSL
#define basename_CAVM_EDECX_ABX_ERROR_DROP_EN(a,b) "EDECX_ABX_ERROR_DROP_EN"
#define device_bar_CAVM_EDECX_ABX_ERROR_DROP_EN(a,b) 0x2 /* PF_BAR2 */
#define busnum_CAVM_EDECX_ABX_ERROR_DROP_EN(a,b) (a)
#define arguments_CAVM_EDECX_ABX_ERROR_DROP_EN(a,b) (a),(b),-1,-1

/**
 * Register (RSL) edec#_ab#_error_ena_w1c
 *
 * EDEC Error Enable Register 0
 * This register clears interrupt enable bits.
 */
union cavm_edecx_abx_error_ena_w1c
{
    uint64_t u;
    struct cavm_edecx_abx_error_ena_w1c_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_42_63        : 22;
        uint64_t seqid_err             : 1;  /**< [ 41: 41](R/W1C/H) Reads or clears enable for EDEC(0..2)_AB(0..1)_ERROR_STATUS[SEQID_ERR]. */
        uint64_t efxp_format_but_c_meth_not_bfp : 1;/**< [ 40: 40](R/W1C/H) Reads or clears enable for EDEC(0..2)_AB(0..1)_ERROR_STATUS[EFXP_FORMAT_BUT_C_METH_NOT_BFP]. */
        uint64_t sym_inc_not_zero      : 1;  /**< [ 39: 39](R/W1C/H) Reads or clears enable for EDEC(0..2)_AB(0..1)_ERROR_STATUS[SYM_INC_NOT_ZERO]. */
        uint64_t num_prb_zero_but_rb_not : 1;/**< [ 38: 38](R/W1C/H) Reads or clears enable for EDEC(0..2)_AB(0..1)_ERROR_STATUS[NUM_PRB_ZERO_BUT_RB_NOT]. */
        uint64_t wrmsgsts_add_err      : 1;  /**< [ 37: 37](R/W1C/H) Reads or clears enable for EDEC(0..2)_AB(0..1)_ERROR_STATUS[WRMSGSTS_ADD_ERR]. */
        uint64_t psm_cmd_opcode_err    : 1;  /**< [ 36: 36](R/W1C/H) Reads or clears enable for EDEC(0..2)_AB(0..1)_ERROR_STATUS[PSM_CMD_OPCODE_ERR]. */
        uint64_t ghb_prb_fatal_err     : 1;  /**< [ 35: 35](R/W1C/H) Reads or clears enable for EDEC(0..2)_AB(0..1)_ERROR_STATUS[GHB_PRB_FATAL_ERR]. */
        uint64_t ghb_prb_non_fatal_err : 1;  /**< [ 34: 34](R/W1C/H) Reads or clears enable for EDEC(0..2)_AB(0..1)_ERROR_STATUS[GHB_PRB_NON_FATAL_ERR]. */
        uint64_t ghb_hdr_fatal_err     : 1;  /**< [ 33: 33](R/W1C/H) Reads or clears enable for EDEC(0..2)_AB(0..1)_ERROR_STATUS[GHB_HDR_FATAL_ERR]. */
        uint64_t ghb_hdr_non_fatal_err : 1;  /**< [ 32: 32](R/W1C/H) Reads or clears enable for EDEC(0..2)_AB(0..1)_ERROR_STATUS[GHB_HDR_NON_FATAL_ERR]. */
        uint64_t lut_prb_buf_ovrn_add_calc_err : 1;/**< [ 31: 31](R/W1C/H) Reads or clears enable for EDEC(0..2)_AB(0..1)_ERROR_STATUS[LUT_PRB_BUF_OVRN_ADD_CALC_ERR]. */
        uint64_t num_prb_zero_but_start_prb_not : 1;/**< [ 30: 30](R/W1C/H) Reads or clears enable for EDEC(0..2)_AB(0..1)_ERROR_STATUS[NUM_PRB_ZERO_BUT_START_PRB_NOT]. */
        uint64_t ulaw_iqw_err          : 1;  /**< [ 29: 29](R/W1C/H) Reads or clears enable for EDEC(0..2)_AB(0..1)_ERROR_STATUS[ULAW_IQW_ERR]. */
        uint64_t rfoe_mcs_err_2        : 1;  /**< [ 28: 28](R/W1C/H) Reads or clears enable for EDEC(0..2)_AB(0..1)_ERROR_STATUS[RFOE_MCS_ERR_2]. */
        uint64_t rfoe_mcs_err_1        : 1;  /**< [ 27: 27](R/W1C/H) Reads or clears enable for EDEC(0..2)_AB(0..1)_ERROR_STATUS[RFOE_MCS_ERR_1]. */
        uint64_t rfoe_mcs_err_0        : 1;  /**< [ 26: 26](R/W1C/H) Reads or clears enable for EDEC(0..2)_AB(0..1)_ERROR_STATUS[RFOE_MCS_ERR_0]. */
        uint64_t rfoe_mac_err_2        : 1;  /**< [ 25: 25](R/W1C/H) Reads or clears enable for EDEC(0..2)_AB(0..1)_ERROR_STATUS[RFOE_MAC_ERR_2]. */
        uint64_t rfoe_mac_err_1        : 1;  /**< [ 24: 24](R/W1C/H) Reads or clears enable for EDEC(0..2)_AB(0..1)_ERROR_STATUS[RFOE_MAC_ERR_1]. */
        uint64_t rfoe_mac_err_0        : 1;  /**< [ 23: 23](R/W1C/H) Reads or clears enable for EDEC(0..2)_AB(0..1)_ERROR_STATUS[RFOE_MAC_ERR_0]. */
        uint64_t lut_prb_buf_ovrn_err  : 1;  /**< [ 22: 22](R/W1C/H) Reads or clears enable for EDEC(0..2)_AB(0..1)_ERROR_STATUS[LUT_PRB_BUF_OVRN_ERR]. */
        uint64_t lut_hdr_buf_ovrn_err  : 1;  /**< [ 21: 21](R/W1C/H) Reads or clears enable for EDEC(0..2)_AB(0..1)_ERROR_STATUS[LUT_HDR_BUF_OVRN_ERR]. */
        uint64_t hdr_max_addr_err      : 1;  /**< [ 20: 20](R/W1C/H) Reads or clears enable for EDEC(0..2)_AB(0..1)_ERROR_STATUS[HDR_MAX_ADDR_ERR]. */
        uint64_t hdr_min_addr_err      : 1;  /**< [ 19: 19](R/W1C/H) Reads or clears enable for EDEC(0..2)_AB(0..1)_ERROR_STATUS[HDR_MIN_ADDR_ERR]. */
        uint64_t prb_max_addr_err      : 1;  /**< [ 18: 18](R/W1C/H) Reads or clears enable for EDEC(0..2)_AB(0..1)_ERROR_STATUS[PRB_MAX_ADDR_ERR]. */
        uint64_t prb_min_addr_err      : 1;  /**< [ 17: 17](R/W1C/H) Reads or clears enable for EDEC(0..2)_AB(0..1)_ERROR_STATUS[PRB_MIN_ADDR_ERR]. */
        uint64_t dbe_err               : 1;  /**< [ 16: 16](R/W1C/H) Reads or clears enable for EDEC(0..2)_AB(0..1)_ERROR_STATUS[DBE_ERR]. */
        uint64_t mod_iqw_err           : 1;  /**< [ 15: 15](R/W1C/H) Reads or clears enable for EDEC(0..2)_AB(0..1)_ERROR_STATUS[MOD_IQW_ERR]. */
        uint64_t reserved_14           : 1;
        uint64_t sec_meth_err          : 1;  /**< [ 13: 13](R/W1C/H) Reads or clears enable for EDEC(0..2)_AB(0..1)_ERROR_STATUS[SEC_METH_ERR]. */
        uint64_t reserved_12           : 1;
        uint64_t rsvd_err              : 1;  /**< [ 11: 11](R/W1C/H) Reads or clears enable for EDEC(0..2)_AB(0..1)_ERROR_STATUS[RSVD_ERR]. */
        uint64_t slot_id_err           : 1;  /**< [ 10: 10](R/W1C/H) Reads or clears enable for EDEC(0..2)_AB(0..1)_ERROR_STATUS[SLOT_ID_ERR]. */
        uint64_t pyld_ver_err          : 1;  /**< [  9:  9](R/W1C/H) Reads or clears enable for EDEC(0..2)_AB(0..1)_ERROR_STATUS[PYLD_VER_ERR]. */
        uint64_t data_dir_err          : 1;  /**< [  8:  8](R/W1C/H) Reads or clears enable for EDEC(0..2)_AB(0..1)_ERROR_STATUS[DATA_DIR_ERR]. */
        uint64_t pyld_max_err          : 1;  /**< [  7:  7](R/W1C/H) Reads or clears enable for EDEC(0..2)_AB(0..1)_ERROR_STATUS[PYLD_MAX_ERR]. */
        uint64_t ebit_err              : 1;  /**< [  6:  6](R/W1C/H) Reads or clears enable for EDEC(0..2)_AB(0..1)_ERROR_STATUS[EBIT_ERR]. */
        uint64_t msg_typ_err           : 1;  /**< [  5:  5](R/W1C/H) Reads or clears enable for EDEC(0..2)_AB(0..1)_ERROR_STATUS[MSG_TYP_ERR]. */
        uint64_t concat_err            : 1;  /**< [  4:  4](R/W1C/H) Reads or clears enable for EDEC(0..2)_AB(0..1)_ERROR_STATUS[CONCAT_ERR]. */
        uint64_t pcid_err              : 1;  /**< [  3:  3](R/W1C/H) Reads or clears enable for EDEC(0..2)_AB(0..1)_ERROR_STATUS[PCID_ERR]. */
        uint64_t flow_en_err           : 1;  /**< [  2:  2](R/W1C/H) Reads or clears enable for EDEC(0..2)_AB(0..1)_ERROR_STATUS[FLOW_EN_ERR]. */
        uint64_t underflow_err         : 1;  /**< [  1:  1](R/W1C/H) Reads or clears enable for EDEC(0..2)_AB(0..1)_ERROR_STATUS[UNDERFLOW_ERR]. */
        uint64_t overflow_err          : 1;  /**< [  0:  0](R/W1C/H) Reads or clears enable for EDEC(0..2)_AB(0..1)_ERROR_STATUS[OVERFLOW_ERR]. */
#else /* Word 0 - Little Endian */
        uint64_t overflow_err          : 1;  /**< [  0:  0](R/W1C/H) Reads or clears enable for EDEC(0..2)_AB(0..1)_ERROR_STATUS[OVERFLOW_ERR]. */
        uint64_t underflow_err         : 1;  /**< [  1:  1](R/W1C/H) Reads or clears enable for EDEC(0..2)_AB(0..1)_ERROR_STATUS[UNDERFLOW_ERR]. */
        uint64_t flow_en_err           : 1;  /**< [  2:  2](R/W1C/H) Reads or clears enable for EDEC(0..2)_AB(0..1)_ERROR_STATUS[FLOW_EN_ERR]. */
        uint64_t pcid_err              : 1;  /**< [  3:  3](R/W1C/H) Reads or clears enable for EDEC(0..2)_AB(0..1)_ERROR_STATUS[PCID_ERR]. */
        uint64_t concat_err            : 1;  /**< [  4:  4](R/W1C/H) Reads or clears enable for EDEC(0..2)_AB(0..1)_ERROR_STATUS[CONCAT_ERR]. */
        uint64_t msg_typ_err           : 1;  /**< [  5:  5](R/W1C/H) Reads or clears enable for EDEC(0..2)_AB(0..1)_ERROR_STATUS[MSG_TYP_ERR]. */
        uint64_t ebit_err              : 1;  /**< [  6:  6](R/W1C/H) Reads or clears enable for EDEC(0..2)_AB(0..1)_ERROR_STATUS[EBIT_ERR]. */
        uint64_t pyld_max_err          : 1;  /**< [  7:  7](R/W1C/H) Reads or clears enable for EDEC(0..2)_AB(0..1)_ERROR_STATUS[PYLD_MAX_ERR]. */
        uint64_t data_dir_err          : 1;  /**< [  8:  8](R/W1C/H) Reads or clears enable for EDEC(0..2)_AB(0..1)_ERROR_STATUS[DATA_DIR_ERR]. */
        uint64_t pyld_ver_err          : 1;  /**< [  9:  9](R/W1C/H) Reads or clears enable for EDEC(0..2)_AB(0..1)_ERROR_STATUS[PYLD_VER_ERR]. */
        uint64_t slot_id_err           : 1;  /**< [ 10: 10](R/W1C/H) Reads or clears enable for EDEC(0..2)_AB(0..1)_ERROR_STATUS[SLOT_ID_ERR]. */
        uint64_t rsvd_err              : 1;  /**< [ 11: 11](R/W1C/H) Reads or clears enable for EDEC(0..2)_AB(0..1)_ERROR_STATUS[RSVD_ERR]. */
        uint64_t reserved_12           : 1;
        uint64_t sec_meth_err          : 1;  /**< [ 13: 13](R/W1C/H) Reads or clears enable for EDEC(0..2)_AB(0..1)_ERROR_STATUS[SEC_METH_ERR]. */
        uint64_t reserved_14           : 1;
        uint64_t mod_iqw_err           : 1;  /**< [ 15: 15](R/W1C/H) Reads or clears enable for EDEC(0..2)_AB(0..1)_ERROR_STATUS[MOD_IQW_ERR]. */
        uint64_t dbe_err               : 1;  /**< [ 16: 16](R/W1C/H) Reads or clears enable for EDEC(0..2)_AB(0..1)_ERROR_STATUS[DBE_ERR]. */
        uint64_t prb_min_addr_err      : 1;  /**< [ 17: 17](R/W1C/H) Reads or clears enable for EDEC(0..2)_AB(0..1)_ERROR_STATUS[PRB_MIN_ADDR_ERR]. */
        uint64_t prb_max_addr_err      : 1;  /**< [ 18: 18](R/W1C/H) Reads or clears enable for EDEC(0..2)_AB(0..1)_ERROR_STATUS[PRB_MAX_ADDR_ERR]. */
        uint64_t hdr_min_addr_err      : 1;  /**< [ 19: 19](R/W1C/H) Reads or clears enable for EDEC(0..2)_AB(0..1)_ERROR_STATUS[HDR_MIN_ADDR_ERR]. */
        uint64_t hdr_max_addr_err      : 1;  /**< [ 20: 20](R/W1C/H) Reads or clears enable for EDEC(0..2)_AB(0..1)_ERROR_STATUS[HDR_MAX_ADDR_ERR]. */
        uint64_t lut_hdr_buf_ovrn_err  : 1;  /**< [ 21: 21](R/W1C/H) Reads or clears enable for EDEC(0..2)_AB(0..1)_ERROR_STATUS[LUT_HDR_BUF_OVRN_ERR]. */
        uint64_t lut_prb_buf_ovrn_err  : 1;  /**< [ 22: 22](R/W1C/H) Reads or clears enable for EDEC(0..2)_AB(0..1)_ERROR_STATUS[LUT_PRB_BUF_OVRN_ERR]. */
        uint64_t rfoe_mac_err_0        : 1;  /**< [ 23: 23](R/W1C/H) Reads or clears enable for EDEC(0..2)_AB(0..1)_ERROR_STATUS[RFOE_MAC_ERR_0]. */
        uint64_t rfoe_mac_err_1        : 1;  /**< [ 24: 24](R/W1C/H) Reads or clears enable for EDEC(0..2)_AB(0..1)_ERROR_STATUS[RFOE_MAC_ERR_1]. */
        uint64_t rfoe_mac_err_2        : 1;  /**< [ 25: 25](R/W1C/H) Reads or clears enable for EDEC(0..2)_AB(0..1)_ERROR_STATUS[RFOE_MAC_ERR_2]. */
        uint64_t rfoe_mcs_err_0        : 1;  /**< [ 26: 26](R/W1C/H) Reads or clears enable for EDEC(0..2)_AB(0..1)_ERROR_STATUS[RFOE_MCS_ERR_0]. */
        uint64_t rfoe_mcs_err_1        : 1;  /**< [ 27: 27](R/W1C/H) Reads or clears enable for EDEC(0..2)_AB(0..1)_ERROR_STATUS[RFOE_MCS_ERR_1]. */
        uint64_t rfoe_mcs_err_2        : 1;  /**< [ 28: 28](R/W1C/H) Reads or clears enable for EDEC(0..2)_AB(0..1)_ERROR_STATUS[RFOE_MCS_ERR_2]. */
        uint64_t ulaw_iqw_err          : 1;  /**< [ 29: 29](R/W1C/H) Reads or clears enable for EDEC(0..2)_AB(0..1)_ERROR_STATUS[ULAW_IQW_ERR]. */
        uint64_t num_prb_zero_but_start_prb_not : 1;/**< [ 30: 30](R/W1C/H) Reads or clears enable for EDEC(0..2)_AB(0..1)_ERROR_STATUS[NUM_PRB_ZERO_BUT_START_PRB_NOT]. */
        uint64_t lut_prb_buf_ovrn_add_calc_err : 1;/**< [ 31: 31](R/W1C/H) Reads or clears enable for EDEC(0..2)_AB(0..1)_ERROR_STATUS[LUT_PRB_BUF_OVRN_ADD_CALC_ERR]. */
        uint64_t ghb_hdr_non_fatal_err : 1;  /**< [ 32: 32](R/W1C/H) Reads or clears enable for EDEC(0..2)_AB(0..1)_ERROR_STATUS[GHB_HDR_NON_FATAL_ERR]. */
        uint64_t ghb_hdr_fatal_err     : 1;  /**< [ 33: 33](R/W1C/H) Reads or clears enable for EDEC(0..2)_AB(0..1)_ERROR_STATUS[GHB_HDR_FATAL_ERR]. */
        uint64_t ghb_prb_non_fatal_err : 1;  /**< [ 34: 34](R/W1C/H) Reads or clears enable for EDEC(0..2)_AB(0..1)_ERROR_STATUS[GHB_PRB_NON_FATAL_ERR]. */
        uint64_t ghb_prb_fatal_err     : 1;  /**< [ 35: 35](R/W1C/H) Reads or clears enable for EDEC(0..2)_AB(0..1)_ERROR_STATUS[GHB_PRB_FATAL_ERR]. */
        uint64_t psm_cmd_opcode_err    : 1;  /**< [ 36: 36](R/W1C/H) Reads or clears enable for EDEC(0..2)_AB(0..1)_ERROR_STATUS[PSM_CMD_OPCODE_ERR]. */
        uint64_t wrmsgsts_add_err      : 1;  /**< [ 37: 37](R/W1C/H) Reads or clears enable for EDEC(0..2)_AB(0..1)_ERROR_STATUS[WRMSGSTS_ADD_ERR]. */
        uint64_t num_prb_zero_but_rb_not : 1;/**< [ 38: 38](R/W1C/H) Reads or clears enable for EDEC(0..2)_AB(0..1)_ERROR_STATUS[NUM_PRB_ZERO_BUT_RB_NOT]. */
        uint64_t sym_inc_not_zero      : 1;  /**< [ 39: 39](R/W1C/H) Reads or clears enable for EDEC(0..2)_AB(0..1)_ERROR_STATUS[SYM_INC_NOT_ZERO]. */
        uint64_t efxp_format_but_c_meth_not_bfp : 1;/**< [ 40: 40](R/W1C/H) Reads or clears enable for EDEC(0..2)_AB(0..1)_ERROR_STATUS[EFXP_FORMAT_BUT_C_METH_NOT_BFP]. */
        uint64_t seqid_err             : 1;  /**< [ 41: 41](R/W1C/H) Reads or clears enable for EDEC(0..2)_AB(0..1)_ERROR_STATUS[SEQID_ERR]. */
        uint64_t reserved_42_63        : 22;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_edecx_abx_error_ena_w1c_s cn; */
};
typedef union cavm_edecx_abx_error_ena_w1c cavm_edecx_abx_error_ena_w1c_t;

static inline uint64_t CAVM_EDECX_ABX_ERROR_ENA_W1C(uint64_t a, uint64_t b) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_EDECX_ABX_ERROR_ENA_W1C(uint64_t a, uint64_t b)
{
    if (cavm_is_model(OCTEONTX_CNF20KA) && ((a<=2) && (b<=1)))
        return 0x87e040400048ll + 0x80000ll * ((a) & 0x3) + 0x10000ll * ((b) & 0x1);
    __cavm_csr_fatal("EDECX_ABX_ERROR_ENA_W1C", 2, a, b, 0, 0, 0, 0);
}

#define typedef_CAVM_EDECX_ABX_ERROR_ENA_W1C(a,b) cavm_edecx_abx_error_ena_w1c_t
#define bustype_CAVM_EDECX_ABX_ERROR_ENA_W1C(a,b) CSR_TYPE_RSL
#define basename_CAVM_EDECX_ABX_ERROR_ENA_W1C(a,b) "EDECX_ABX_ERROR_ENA_W1C"
#define device_bar_CAVM_EDECX_ABX_ERROR_ENA_W1C(a,b) 0x2 /* PF_BAR2 */
#define busnum_CAVM_EDECX_ABX_ERROR_ENA_W1C(a,b) (a)
#define arguments_CAVM_EDECX_ABX_ERROR_ENA_W1C(a,b) (a),(b),-1,-1

/**
 * Register (RSL) edec#_ab#_error_ena_w1s
 *
 * EDEC Error Enable Register 0
 * This register sets interrupt enable bits.
 */
union cavm_edecx_abx_error_ena_w1s
{
    uint64_t u;
    struct cavm_edecx_abx_error_ena_w1s_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_42_63        : 22;
        uint64_t seqid_err             : 1;  /**< [ 41: 41](R/W1S/H) Reads or sets enable for EDEC(0..2)_AB(0..1)_ERROR_STATUS[SEQID_ERR]. */
        uint64_t efxp_format_but_c_meth_not_bfp : 1;/**< [ 40: 40](R/W1S/H) Reads or sets enable for EDEC(0..2)_AB(0..1)_ERROR_STATUS[EFXP_FORMAT_BUT_C_METH_NOT_BFP]. */
        uint64_t sym_inc_not_zero      : 1;  /**< [ 39: 39](R/W1S/H) Reads or sets enable for EDEC(0..2)_AB(0..1)_ERROR_STATUS[SYM_INC_NOT_ZERO]. */
        uint64_t num_prb_zero_but_rb_not : 1;/**< [ 38: 38](R/W1S/H) Reads or sets enable for EDEC(0..2)_AB(0..1)_ERROR_STATUS[NUM_PRB_ZERO_BUT_RB_NOT]. */
        uint64_t wrmsgsts_add_err      : 1;  /**< [ 37: 37](R/W1S/H) Reads or sets enable for EDEC(0..2)_AB(0..1)_ERROR_STATUS[WRMSGSTS_ADD_ERR]. */
        uint64_t psm_cmd_opcode_err    : 1;  /**< [ 36: 36](R/W1S/H) Reads or sets enable for EDEC(0..2)_AB(0..1)_ERROR_STATUS[PSM_CMD_OPCODE_ERR]. */
        uint64_t ghb_prb_fatal_err     : 1;  /**< [ 35: 35](R/W1S/H) Reads or sets enable for EDEC(0..2)_AB(0..1)_ERROR_STATUS[GHB_PRB_FATAL_ERR]. */
        uint64_t ghb_prb_non_fatal_err : 1;  /**< [ 34: 34](R/W1S/H) Reads or sets enable for EDEC(0..2)_AB(0..1)_ERROR_STATUS[GHB_PRB_NON_FATAL_ERR]. */
        uint64_t ghb_hdr_fatal_err     : 1;  /**< [ 33: 33](R/W1S/H) Reads or sets enable for EDEC(0..2)_AB(0..1)_ERROR_STATUS[GHB_HDR_FATAL_ERR]. */
        uint64_t ghb_hdr_non_fatal_err : 1;  /**< [ 32: 32](R/W1S/H) Reads or sets enable for EDEC(0..2)_AB(0..1)_ERROR_STATUS[GHB_HDR_NON_FATAL_ERR]. */
        uint64_t lut_prb_buf_ovrn_add_calc_err : 1;/**< [ 31: 31](R/W1S/H) Reads or sets enable for EDEC(0..2)_AB(0..1)_ERROR_STATUS[LUT_PRB_BUF_OVRN_ADD_CALC_ERR]. */
        uint64_t num_prb_zero_but_start_prb_not : 1;/**< [ 30: 30](R/W1S/H) Reads or sets enable for EDEC(0..2)_AB(0..1)_ERROR_STATUS[NUM_PRB_ZERO_BUT_START_PRB_NOT]. */
        uint64_t ulaw_iqw_err          : 1;  /**< [ 29: 29](R/W1S/H) Reads or sets enable for EDEC(0..2)_AB(0..1)_ERROR_STATUS[ULAW_IQW_ERR]. */
        uint64_t rfoe_mcs_err_2        : 1;  /**< [ 28: 28](R/W1S/H) Reads or sets enable for EDEC(0..2)_AB(0..1)_ERROR_STATUS[RFOE_MCS_ERR_2]. */
        uint64_t rfoe_mcs_err_1        : 1;  /**< [ 27: 27](R/W1S/H) Reads or sets enable for EDEC(0..2)_AB(0..1)_ERROR_STATUS[RFOE_MCS_ERR_1]. */
        uint64_t rfoe_mcs_err_0        : 1;  /**< [ 26: 26](R/W1S/H) Reads or sets enable for EDEC(0..2)_AB(0..1)_ERROR_STATUS[RFOE_MCS_ERR_0]. */
        uint64_t rfoe_mac_err_2        : 1;  /**< [ 25: 25](R/W1S/H) Reads or sets enable for EDEC(0..2)_AB(0..1)_ERROR_STATUS[RFOE_MAC_ERR_2]. */
        uint64_t rfoe_mac_err_1        : 1;  /**< [ 24: 24](R/W1S/H) Reads or sets enable for EDEC(0..2)_AB(0..1)_ERROR_STATUS[RFOE_MAC_ERR_1]. */
        uint64_t rfoe_mac_err_0        : 1;  /**< [ 23: 23](R/W1S/H) Reads or sets enable for EDEC(0..2)_AB(0..1)_ERROR_STATUS[RFOE_MAC_ERR_0]. */
        uint64_t lut_prb_buf_ovrn_err  : 1;  /**< [ 22: 22](R/W1S/H) Reads or sets enable for EDEC(0..2)_AB(0..1)_ERROR_STATUS[LUT_PRB_BUF_OVRN_ERR]. */
        uint64_t lut_hdr_buf_ovrn_err  : 1;  /**< [ 21: 21](R/W1S/H) Reads or sets enable for EDEC(0..2)_AB(0..1)_ERROR_STATUS[LUT_HDR_BUF_OVRN_ERR]. */
        uint64_t hdr_max_addr_err      : 1;  /**< [ 20: 20](R/W1S/H) Reads or sets enable for EDEC(0..2)_AB(0..1)_ERROR_STATUS[HDR_MAX_ADDR_ERR]. */
        uint64_t hdr_min_addr_err      : 1;  /**< [ 19: 19](R/W1S/H) Reads or sets enable for EDEC(0..2)_AB(0..1)_ERROR_STATUS[HDR_MIN_ADDR_ERR]. */
        uint64_t prb_max_addr_err      : 1;  /**< [ 18: 18](R/W1S/H) Reads or sets enable for EDEC(0..2)_AB(0..1)_ERROR_STATUS[PRB_MAX_ADDR_ERR]. */
        uint64_t prb_min_addr_err      : 1;  /**< [ 17: 17](R/W1S/H) Reads or sets enable for EDEC(0..2)_AB(0..1)_ERROR_STATUS[PRB_MIN_ADDR_ERR]. */
        uint64_t dbe_err               : 1;  /**< [ 16: 16](R/W1S/H) Reads or sets enable for EDEC(0..2)_AB(0..1)_ERROR_STATUS[DBE_ERR]. */
        uint64_t mod_iqw_err           : 1;  /**< [ 15: 15](R/W1S/H) Reads or sets enable for EDEC(0..2)_AB(0..1)_ERROR_STATUS[MOD_IQW_ERR]. */
        uint64_t reserved_14           : 1;
        uint64_t sec_meth_err          : 1;  /**< [ 13: 13](R/W1S/H) Reads or sets enable for EDEC(0..2)_AB(0..1)_ERROR_STATUS[SEC_METH_ERR]. */
        uint64_t reserved_12           : 1;
        uint64_t rsvd_err              : 1;  /**< [ 11: 11](R/W1S/H) Reads or sets enable for EDEC(0..2)_AB(0..1)_ERROR_STATUS[RSVD_ERR]. */
        uint64_t slot_id_err           : 1;  /**< [ 10: 10](R/W1S/H) Reads or sets enable for EDEC(0..2)_AB(0..1)_ERROR_STATUS[SLOT_ID_ERR]. */
        uint64_t pyld_ver_err          : 1;  /**< [  9:  9](R/W1S/H) Reads or sets enable for EDEC(0..2)_AB(0..1)_ERROR_STATUS[PYLD_VER_ERR]. */
        uint64_t data_dir_err          : 1;  /**< [  8:  8](R/W1S/H) Reads or sets enable for EDEC(0..2)_AB(0..1)_ERROR_STATUS[DATA_DIR_ERR]. */
        uint64_t pyld_max_err          : 1;  /**< [  7:  7](R/W1S/H) Reads or sets enable for EDEC(0..2)_AB(0..1)_ERROR_STATUS[PYLD_MAX_ERR]. */
        uint64_t ebit_err              : 1;  /**< [  6:  6](R/W1S/H) Reads or sets enable for EDEC(0..2)_AB(0..1)_ERROR_STATUS[EBIT_ERR]. */
        uint64_t msg_typ_err           : 1;  /**< [  5:  5](R/W1S/H) Reads or sets enable for EDEC(0..2)_AB(0..1)_ERROR_STATUS[MSG_TYP_ERR]. */
        uint64_t concat_err            : 1;  /**< [  4:  4](R/W1S/H) Reads or sets enable for EDEC(0..2)_AB(0..1)_ERROR_STATUS[CONCAT_ERR]. */
        uint64_t pcid_err              : 1;  /**< [  3:  3](R/W1S/H) Reads or sets enable for EDEC(0..2)_AB(0..1)_ERROR_STATUS[PCID_ERR]. */
        uint64_t flow_en_err           : 1;  /**< [  2:  2](R/W1S/H) Reads or sets enable for EDEC(0..2)_AB(0..1)_ERROR_STATUS[FLOW_EN_ERR]. */
        uint64_t underflow_err         : 1;  /**< [  1:  1](R/W1S/H) Reads or sets enable for EDEC(0..2)_AB(0..1)_ERROR_STATUS[UNDERFLOW_ERR]. */
        uint64_t overflow_err          : 1;  /**< [  0:  0](R/W1S/H) Reads or sets enable for EDEC(0..2)_AB(0..1)_ERROR_STATUS[OVERFLOW_ERR]. */
#else /* Word 0 - Little Endian */
        uint64_t overflow_err          : 1;  /**< [  0:  0](R/W1S/H) Reads or sets enable for EDEC(0..2)_AB(0..1)_ERROR_STATUS[OVERFLOW_ERR]. */
        uint64_t underflow_err         : 1;  /**< [  1:  1](R/W1S/H) Reads or sets enable for EDEC(0..2)_AB(0..1)_ERROR_STATUS[UNDERFLOW_ERR]. */
        uint64_t flow_en_err           : 1;  /**< [  2:  2](R/W1S/H) Reads or sets enable for EDEC(0..2)_AB(0..1)_ERROR_STATUS[FLOW_EN_ERR]. */
        uint64_t pcid_err              : 1;  /**< [  3:  3](R/W1S/H) Reads or sets enable for EDEC(0..2)_AB(0..1)_ERROR_STATUS[PCID_ERR]. */
        uint64_t concat_err            : 1;  /**< [  4:  4](R/W1S/H) Reads or sets enable for EDEC(0..2)_AB(0..1)_ERROR_STATUS[CONCAT_ERR]. */
        uint64_t msg_typ_err           : 1;  /**< [  5:  5](R/W1S/H) Reads or sets enable for EDEC(0..2)_AB(0..1)_ERROR_STATUS[MSG_TYP_ERR]. */
        uint64_t ebit_err              : 1;  /**< [  6:  6](R/W1S/H) Reads or sets enable for EDEC(0..2)_AB(0..1)_ERROR_STATUS[EBIT_ERR]. */
        uint64_t pyld_max_err          : 1;  /**< [  7:  7](R/W1S/H) Reads or sets enable for EDEC(0..2)_AB(0..1)_ERROR_STATUS[PYLD_MAX_ERR]. */
        uint64_t data_dir_err          : 1;  /**< [  8:  8](R/W1S/H) Reads or sets enable for EDEC(0..2)_AB(0..1)_ERROR_STATUS[DATA_DIR_ERR]. */
        uint64_t pyld_ver_err          : 1;  /**< [  9:  9](R/W1S/H) Reads or sets enable for EDEC(0..2)_AB(0..1)_ERROR_STATUS[PYLD_VER_ERR]. */
        uint64_t slot_id_err           : 1;  /**< [ 10: 10](R/W1S/H) Reads or sets enable for EDEC(0..2)_AB(0..1)_ERROR_STATUS[SLOT_ID_ERR]. */
        uint64_t rsvd_err              : 1;  /**< [ 11: 11](R/W1S/H) Reads or sets enable for EDEC(0..2)_AB(0..1)_ERROR_STATUS[RSVD_ERR]. */
        uint64_t reserved_12           : 1;
        uint64_t sec_meth_err          : 1;  /**< [ 13: 13](R/W1S/H) Reads or sets enable for EDEC(0..2)_AB(0..1)_ERROR_STATUS[SEC_METH_ERR]. */
        uint64_t reserved_14           : 1;
        uint64_t mod_iqw_err           : 1;  /**< [ 15: 15](R/W1S/H) Reads or sets enable for EDEC(0..2)_AB(0..1)_ERROR_STATUS[MOD_IQW_ERR]. */
        uint64_t dbe_err               : 1;  /**< [ 16: 16](R/W1S/H) Reads or sets enable for EDEC(0..2)_AB(0..1)_ERROR_STATUS[DBE_ERR]. */
        uint64_t prb_min_addr_err      : 1;  /**< [ 17: 17](R/W1S/H) Reads or sets enable for EDEC(0..2)_AB(0..1)_ERROR_STATUS[PRB_MIN_ADDR_ERR]. */
        uint64_t prb_max_addr_err      : 1;  /**< [ 18: 18](R/W1S/H) Reads or sets enable for EDEC(0..2)_AB(0..1)_ERROR_STATUS[PRB_MAX_ADDR_ERR]. */
        uint64_t hdr_min_addr_err      : 1;  /**< [ 19: 19](R/W1S/H) Reads or sets enable for EDEC(0..2)_AB(0..1)_ERROR_STATUS[HDR_MIN_ADDR_ERR]. */
        uint64_t hdr_max_addr_err      : 1;  /**< [ 20: 20](R/W1S/H) Reads or sets enable for EDEC(0..2)_AB(0..1)_ERROR_STATUS[HDR_MAX_ADDR_ERR]. */
        uint64_t lut_hdr_buf_ovrn_err  : 1;  /**< [ 21: 21](R/W1S/H) Reads or sets enable for EDEC(0..2)_AB(0..1)_ERROR_STATUS[LUT_HDR_BUF_OVRN_ERR]. */
        uint64_t lut_prb_buf_ovrn_err  : 1;  /**< [ 22: 22](R/W1S/H) Reads or sets enable for EDEC(0..2)_AB(0..1)_ERROR_STATUS[LUT_PRB_BUF_OVRN_ERR]. */
        uint64_t rfoe_mac_err_0        : 1;  /**< [ 23: 23](R/W1S/H) Reads or sets enable for EDEC(0..2)_AB(0..1)_ERROR_STATUS[RFOE_MAC_ERR_0]. */
        uint64_t rfoe_mac_err_1        : 1;  /**< [ 24: 24](R/W1S/H) Reads or sets enable for EDEC(0..2)_AB(0..1)_ERROR_STATUS[RFOE_MAC_ERR_1]. */
        uint64_t rfoe_mac_err_2        : 1;  /**< [ 25: 25](R/W1S/H) Reads or sets enable for EDEC(0..2)_AB(0..1)_ERROR_STATUS[RFOE_MAC_ERR_2]. */
        uint64_t rfoe_mcs_err_0        : 1;  /**< [ 26: 26](R/W1S/H) Reads or sets enable for EDEC(0..2)_AB(0..1)_ERROR_STATUS[RFOE_MCS_ERR_0]. */
        uint64_t rfoe_mcs_err_1        : 1;  /**< [ 27: 27](R/W1S/H) Reads or sets enable for EDEC(0..2)_AB(0..1)_ERROR_STATUS[RFOE_MCS_ERR_1]. */
        uint64_t rfoe_mcs_err_2        : 1;  /**< [ 28: 28](R/W1S/H) Reads or sets enable for EDEC(0..2)_AB(0..1)_ERROR_STATUS[RFOE_MCS_ERR_2]. */
        uint64_t ulaw_iqw_err          : 1;  /**< [ 29: 29](R/W1S/H) Reads or sets enable for EDEC(0..2)_AB(0..1)_ERROR_STATUS[ULAW_IQW_ERR]. */
        uint64_t num_prb_zero_but_start_prb_not : 1;/**< [ 30: 30](R/W1S/H) Reads or sets enable for EDEC(0..2)_AB(0..1)_ERROR_STATUS[NUM_PRB_ZERO_BUT_START_PRB_NOT]. */
        uint64_t lut_prb_buf_ovrn_add_calc_err : 1;/**< [ 31: 31](R/W1S/H) Reads or sets enable for EDEC(0..2)_AB(0..1)_ERROR_STATUS[LUT_PRB_BUF_OVRN_ADD_CALC_ERR]. */
        uint64_t ghb_hdr_non_fatal_err : 1;  /**< [ 32: 32](R/W1S/H) Reads or sets enable for EDEC(0..2)_AB(0..1)_ERROR_STATUS[GHB_HDR_NON_FATAL_ERR]. */
        uint64_t ghb_hdr_fatal_err     : 1;  /**< [ 33: 33](R/W1S/H) Reads or sets enable for EDEC(0..2)_AB(0..1)_ERROR_STATUS[GHB_HDR_FATAL_ERR]. */
        uint64_t ghb_prb_non_fatal_err : 1;  /**< [ 34: 34](R/W1S/H) Reads or sets enable for EDEC(0..2)_AB(0..1)_ERROR_STATUS[GHB_PRB_NON_FATAL_ERR]. */
        uint64_t ghb_prb_fatal_err     : 1;  /**< [ 35: 35](R/W1S/H) Reads or sets enable for EDEC(0..2)_AB(0..1)_ERROR_STATUS[GHB_PRB_FATAL_ERR]. */
        uint64_t psm_cmd_opcode_err    : 1;  /**< [ 36: 36](R/W1S/H) Reads or sets enable for EDEC(0..2)_AB(0..1)_ERROR_STATUS[PSM_CMD_OPCODE_ERR]. */
        uint64_t wrmsgsts_add_err      : 1;  /**< [ 37: 37](R/W1S/H) Reads or sets enable for EDEC(0..2)_AB(0..1)_ERROR_STATUS[WRMSGSTS_ADD_ERR]. */
        uint64_t num_prb_zero_but_rb_not : 1;/**< [ 38: 38](R/W1S/H) Reads or sets enable for EDEC(0..2)_AB(0..1)_ERROR_STATUS[NUM_PRB_ZERO_BUT_RB_NOT]. */
        uint64_t sym_inc_not_zero      : 1;  /**< [ 39: 39](R/W1S/H) Reads or sets enable for EDEC(0..2)_AB(0..1)_ERROR_STATUS[SYM_INC_NOT_ZERO]. */
        uint64_t efxp_format_but_c_meth_not_bfp : 1;/**< [ 40: 40](R/W1S/H) Reads or sets enable for EDEC(0..2)_AB(0..1)_ERROR_STATUS[EFXP_FORMAT_BUT_C_METH_NOT_BFP]. */
        uint64_t seqid_err             : 1;  /**< [ 41: 41](R/W1S/H) Reads or sets enable for EDEC(0..2)_AB(0..1)_ERROR_STATUS[SEQID_ERR]. */
        uint64_t reserved_42_63        : 22;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_edecx_abx_error_ena_w1s_s cn; */
};
typedef union cavm_edecx_abx_error_ena_w1s cavm_edecx_abx_error_ena_w1s_t;

static inline uint64_t CAVM_EDECX_ABX_ERROR_ENA_W1S(uint64_t a, uint64_t b) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_EDECX_ABX_ERROR_ENA_W1S(uint64_t a, uint64_t b)
{
    if (cavm_is_model(OCTEONTX_CNF20KA) && ((a<=2) && (b<=1)))
        return 0x87e040400040ll + 0x80000ll * ((a) & 0x3) + 0x10000ll * ((b) & 0x1);
    __cavm_csr_fatal("EDECX_ABX_ERROR_ENA_W1S", 2, a, b, 0, 0, 0, 0);
}

#define typedef_CAVM_EDECX_ABX_ERROR_ENA_W1S(a,b) cavm_edecx_abx_error_ena_w1s_t
#define bustype_CAVM_EDECX_ABX_ERROR_ENA_W1S(a,b) CSR_TYPE_RSL
#define basename_CAVM_EDECX_ABX_ERROR_ENA_W1S(a,b) "EDECX_ABX_ERROR_ENA_W1S"
#define device_bar_CAVM_EDECX_ABX_ERROR_ENA_W1S(a,b) 0x2 /* PF_BAR2 */
#define busnum_CAVM_EDECX_ABX_ERROR_ENA_W1S(a,b) (a)
#define arguments_CAVM_EDECX_ABX_ERROR_ENA_W1S(a,b) (a),(b),-1,-1

/**
 * Register (RSL) edec#_ab#_error_source0
 *
 * EDEC Error Source Register 0
 * This register reports the source of EDEC errors.
 */
union cavm_edecx_abx_error_source0
{
    uint64_t u;
    struct cavm_edecx_abx_error_source0_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_32_63        : 32;
        uint64_t rp0_jobid             : 16; /**< [ 31: 16](RO/H) Job ID for EDEC read port 0 errors.
                                                                 Job ID will be latched for any error in EDEC()_AB()_ERROR_STATUS. */
        uint64_t reserved_5_15         : 11;
        uint64_t rp0_of                : 1;  /**< [  4:  4](RO/H) Read port 0 overflow.
                                                                 Set and cleared based on EDEC()_AB()_ERROR_STATUS.OVERFLOW_ERR */
        uint64_t reserved_1_3          : 3;
        uint64_t rp0_uf                : 1;  /**< [  0:  0](RO/H) Read port 0 underflow.
                                                                 Set and cleared based on EDEC()_AB()_ERROR_STATUS.UNDERFLOW_ERR */
#else /* Word 0 - Little Endian */
        uint64_t rp0_uf                : 1;  /**< [  0:  0](RO/H) Read port 0 underflow.
                                                                 Set and cleared based on EDEC()_AB()_ERROR_STATUS.UNDERFLOW_ERR */
        uint64_t reserved_1_3          : 3;
        uint64_t rp0_of                : 1;  /**< [  4:  4](RO/H) Read port 0 overflow.
                                                                 Set and cleared based on EDEC()_AB()_ERROR_STATUS.OVERFLOW_ERR */
        uint64_t reserved_5_15         : 11;
        uint64_t rp0_jobid             : 16; /**< [ 31: 16](RO/H) Job ID for EDEC read port 0 errors.
                                                                 Job ID will be latched for any error in EDEC()_AB()_ERROR_STATUS. */
        uint64_t reserved_32_63        : 32;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_edecx_abx_error_source0_s cn; */
};
typedef union cavm_edecx_abx_error_source0 cavm_edecx_abx_error_source0_t;

static inline uint64_t CAVM_EDECX_ABX_ERROR_SOURCE0(uint64_t a, uint64_t b) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_EDECX_ABX_ERROR_SOURCE0(uint64_t a, uint64_t b)
{
    if (cavm_is_model(OCTEONTX_CNF20KA) && ((a<=2) && (b<=1)))
        return 0x87e040400030ll + 0x80000ll * ((a) & 0x3) + 0x10000ll * ((b) & 0x1);
    __cavm_csr_fatal("EDECX_ABX_ERROR_SOURCE0", 2, a, b, 0, 0, 0, 0);
}

#define typedef_CAVM_EDECX_ABX_ERROR_SOURCE0(a,b) cavm_edecx_abx_error_source0_t
#define bustype_CAVM_EDECX_ABX_ERROR_SOURCE0(a,b) CSR_TYPE_RSL
#define basename_CAVM_EDECX_ABX_ERROR_SOURCE0(a,b) "EDECX_ABX_ERROR_SOURCE0"
#define device_bar_CAVM_EDECX_ABX_ERROR_SOURCE0(a,b) 0x2 /* PF_BAR2 */
#define busnum_CAVM_EDECX_ABX_ERROR_SOURCE0(a,b) (a)
#define arguments_CAVM_EDECX_ABX_ERROR_SOURCE0(a,b) (a),(b),-1,-1

/**
 * Register (RSL) edec#_ab#_error_status
 *
 * EDEC Error Status Register 0
 * This register reports fatal/non-fatal errors.
 * For enabling each of the errors see EDEC()_AB()_ERROR_ENA_W1S
 */
union cavm_edecx_abx_error_status
{
    uint64_t u;
    struct cavm_edecx_abx_error_status_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_42_63        : 22;
        uint64_t seqid_err             : 1;  /**< [ 41: 41](R/W1C/H) Received packet sequence ID does not match expected value in table
                                                                 (EDEC_LUT_CSR4_S[ECPRI_SEQUENCE_ID] != ECPRI_HDR_SW_S[SEQ_ID][7:0]) and
                                                                 EDEC_LUT_CSR0_S[FLOW_EN]=1 and EDEC_LUT_CSR4_S[SEQ_ID_CHECK_EN]=1 and
                                                                 and EDEC_LUT_CSR4_S[SEQ_ID_HW_CHECK_EN]=1.
                                                                 Non Fatal signaled. */
        uint64_t efxp_format_but_c_meth_not_bfp : 1;/**< [ 40: 40](R/W1C/H) EDEC_LUT_CSR0_S[DATA_FORMAT] is set to EDEC_DATA_FORMAT_E::eFXP and method is
                                                                 not ECPRI_COMP_METH_E::BFP
                                                                 Non Fatal signaled. */
        uint64_t sym_inc_not_zero      : 1;  /**< [ 39: 39](R/W1C/H) ECPRI_SECTION_HDR_S[SYM_INC] is set.
                                                                 Non Fatal signaled. */
        uint64_t num_prb_zero_but_rb_not : 1;/**< [ 38: 38](R/W1C/H) ECPRI_SECTION_HDR_S[NUM_PRB] == 0 but ECPRI_SECTION_HDR_S[RB] != 0.
                                                                 If EDEC()_AB()_CONFIG[RB_IND_CLR_EN] is set ECPRI_SECTION_HDR_S[RB] is cleared.
                                                                 Non Fatal signaled. */
        uint64_t wrmsgsts_add_err      : 1;  /**< [ 37: 37](R/W1C/H) EDEC_LUT_CSR4_S[PSM_CMD_NO_ACT]=0,
                                                                 EDEC_LUT_CSR3_S[PSM_JOB_CMD_WORD0]\<5:0\> == WRSTS or WRMSG,
                                                                 and the calculated write address is greater than
                                                                 EDEC()_AB()_HDR_[DDR|SMEM]_MAX_ADDR[ADDR] or less than
                                                                 EDEC()_AB()_HDR_[DDR|SMEM]_MIN_ADDR[ADDR].
                                                                 Fatal signaled. */
        uint64_t psm_cmd_opcode_err    : 1;  /**< [ 36: 36](R/W1C/H) When EDEC_LUT_CSR4_S[PSM_CMD_NO_ACT]=0 and EDEC_LUT_CSR3_S[PSM_JOB_CMD_WORD0]\<5:0\>
                                                                 (PSM command OPCODE) is not one of the following values:
                                                                  * NOP    (0).
                                                                  * AddJob (0x01).
                                                                  * DJCNT  (0x10).
                                                                  * GPINT  (0x11).
                                                                  * AddWork(0x13).
                                                                  * WRSTS  (0x15).
                                                                  * WRMSG  (0x16).

                                                                 Fatal signaled. */
        uint64_t ghb_prb_fatal_err     : 1;  /**< [ 35: 35](R/W1C/H) EDEC received a GHB PRB write fatal error response.
                                                                 Fatal signaled. */
        uint64_t ghb_prb_non_fatal_err : 1;  /**< [ 34: 34](R/W1C/H) EDEC received a GHB PRB write non-fatal error response.
                                                                 Non Fatal signaled. */
        uint64_t ghb_hdr_fatal_err     : 1;  /**< [ 33: 33](R/W1C/H) EDEC received a GHB header write fatal error response.
                                                                 Fatal signaled. */
        uint64_t ghb_hdr_non_fatal_err : 1;  /**< [ 32: 32](R/W1C/H) EDEC received a GHB header write non-fatal error response.
                                                                 Non Fatal signaled. */
        uint64_t lut_prb_buf_ovrn_add_calc_err : 1;/**< [ 31: 31](R/W1C/H) EDEC_LUT_CSR0_S[EN_ADDR_CALC] is set and write address exceeds
                                                                 EDEC_LUT_CSR1_S[BASE_ADDR_DATA] + EDEC_LUT_CSR1_S[NUM_TOT_PRB].
                                                                 Fatal signaled.
                                                                 Packet dropped. */
        uint64_t num_prb_zero_but_start_prb_not : 1;/**< [ 30: 30](R/W1C/H) ECPRI_SECTION_HDR_S[NUM_PRB] == 0 but ECPRI_SECTION_HDR_S[RB] != 0.
                                                                 If EDEC()_AB()_CONFIG[RB_IND_CLR_EN] is set ECPRI_SECTION_HDR_S[RB] is cleared.
                                                                 Non Fatal signaled. */
        uint64_t ulaw_iqw_err          : 1;  /**< [ 29: 29](R/W1C/H) Set if uLAW compbitwidth equal 1. Supported values [0], [2..15]
                                                                 Fatal signaled.
                                                                 Packet dropped. */
        uint64_t rfoe_mcs_err_2        : 1;  /**< [ 28: 28](R/W1C/H) RFOE_PSW_S[MCS_ERR_STS]\<7\> is set (RFOE MCS_ERR_PUNTED_DROP).
                                                                 Fatal signaled.
                                                                 Packet dropped if EDEC()_AB()_ERROR_DROP_EN[RFOE_MCS_ERR_2] is set. */
        uint64_t rfoe_mcs_err_1        : 1;  /**< [ 27: 27](R/W1C/H) Any bits of RFOE_PSW_S[MCS_ERR_STS]\<6:2\> are set (RFOE MCS_ERR_EXCEPTION_CODE).
                                                                 Packet dropped if the corresponding bit at EDEC()_AB()_ERROR_DROP_EN is set and the specific
                                                                 decoded error value bit at EDEC()_AB()_RFOE_ERR_DROP_EN[MCS_EXCEPTION_CODE_ERR] is set.
                                                                 Fatal signaled.
                                                                 Packet dropped if EDEC()_AB()_ERROR_DROP_EN[RFOE_MCS_ERR_1] is set. */
        uint64_t rfoe_mcs_err_0        : 1;  /**< [ 26: 26](R/W1C/H) Any bits of RFOE_PSW_S[MCS_ERR_STS]\<1:0\> are set (RFOE MCS_ERR_PKT_KIND).
                                                                 Fatal signaled.
                                                                 Packet dropped if EDEC()_AB()_ERROR_DROP_EN[RFOE_MCS_ERR_0] is set. */
        uint64_t rfoe_mac_err_2        : 1;  /**< [ 25: 25](R/W1C/H) RFOE_PSW_S[MAC_ERR_STS]\<5\> is set (RFOE MAC_ERR_SEQ_ID_ERR).
                                                                 Fatal signaled.
                                                                 Packet dropped if EDEC()_AB()_ERROR_DROP_EN[RFOE_MAC_ERR_2] is set. */
        uint64_t rfoe_mac_err_1        : 1;  /**< [ 24: 24](R/W1C/H) RFOE_PSW_S[MAC_ERR_STS]\<4\> is set (RFOE MAC_ERR_DMA_ERROR).
                                                                 Fatal signaled.
                                                                 Packet dropped if EDEC()_AB()_ERROR_DROP_EN[RFOE_MAC_ERR_1] is set. */
        uint64_t rfoe_mac_err_0        : 1;  /**< [ 23: 23](R/W1C/H) Any of RFOE_PSW_S[MAC_ERR_STS]\<3:0\> bits are set (RFOE MAC_ERR_PKT_ERROR).
                                                                 Packet dropped if the corresponding bit at EDEC()_AB()_ERROR_DROP_EN is set and the specific
                                                                 decoded error value bit at EDEC()_AB()_RFOE_ERR_DROP_EN[MAC_ERR_PKT_ERR] is set.
                                                                 Fatal signaled.
                                                                 Packet dropped if EDEC()_AB()_ERROR_DROP_EN[RFOE_MAC_ERR_0] is set. */
        uint64_t lut_prb_buf_ovrn_err  : 1;  /**< [ 22: 22](R/W1C/H) EN_ADDR_CALC=0 and PRB header buffer overrun error.
                                                                 Fatal signaled.
                                                                 Packet dropped. */
        uint64_t lut_hdr_buf_ovrn_err  : 1;  /**< [ 21: 21](R/W1C/H) Amount of header data written exceeds EDEC_LUT_CSR2_S[HDR_BUFFER_SIZE].
                                                                 Fatal signaled.
                                                                 Packet dropped. */
        uint64_t hdr_max_addr_err      : 1;  /**< [ 20: 20](R/W1C/H) Header max address error. Write header address \>
                                                                 EDEC()_AB()_HDR_[DDR|SMEM]_MAX_ADDR[ADDR]. Fatal signaled.
                                                                 Packet dropped. */
        uint64_t hdr_min_addr_err      : 1;  /**< [ 19: 19](R/W1C/H) Attempted to write header data at address \< EDEC()_AB()_HDR_[DDR|SMEM]_MIN_ADDR[ADDR].
                                                                 Fatal signaled.
                                                                 Packet dropped. */
        uint64_t prb_max_addr_err      : 1;  /**< [ 18: 18](R/W1C/H) Attempted to write PRB data at address \> EDEC()_AB()_PRB_[DDR|SMEM]_MAX_ADDR[ADDR].
                                                                 Fatal signaled.
                                                                 Packet dropped. */
        uint64_t prb_min_addr_err      : 1;  /**< [ 17: 17](R/W1C/H) Attempted to write PRB data at address \< EDEC()_AB()_PRB_[DDR|SMEM]_MIN_ADDR[ADDR].
                                                                 Fatal signaled.
                                                                 Packet dropped. */
        uint64_t dbe_err               : 1;  /**< [ 16: 16](R/W1C/H) LUT DBE error. */
        uint64_t mod_iqw_err           : 1;  /**< [ 15: 15](R/W1C/H) Modulation iqwidth error. Supported range 1..7.
                                                                 Fatal signaled.
                                                                 Packet dropped. */
        uint64_t reserved_14           : 1;
        uint64_t sec_meth_err          : 1;  /**< [ 13: 13](R/W1C/H) For flexible mode ECPRI_UD_COMP_HDR_S[UD_COMP_METH] or for fixed mode
                                                                 EDEC_LUT_CSR0_S[FIX_UDCOMP_HDR] encodes
                                                                 an unsupported decompression method. Supported decompression methods described below:
                                                                  \<pre\>
                                                                 Encoding | Method               |
                                                                 ---------+----------------------+
                                                                    0     | No Compression       |
                                                                    1     | Block Floating Point |
                                                                    3     | u-Law                |
                                                                    4     | Modulation           |
                                                                    5     | BFP_SRM              |
                                                                    6     | MOD_SRM              |
                                                                 \</pre\>
                                                                 Fatal signaled.
                                                                 Packet dropped. */
        uint64_t reserved_12           : 1;
        uint64_t rsvd_err              : 1;  /**< [ 11: 11](R/W1C/H) ECPRI_HDR_SW_S[RESERVED] is not zero.
                                                                 Non Fatal signaled. */
        uint64_t slot_id_err           : 1;  /**< [ 10: 10](R/W1C/H) ECPRI_TIMING_HDR_S[SLOT_ID] greater than MAX_SLOT_ID expected in 1ms. Fatal
                                                                 signaled. Packet dropped if EDEC()_AB()_ERROR_DROP_EN[SLOT_ID_ERR] is set.
                                                                 \<pre\>
                                                                 The MAX_SLOT_ID is calculated as below:

                                                                       slot_id_ratio_exp = EDEC_LUT_CSR4_S[NUM_SLOT_EXP_1MS_MAX_MU] -
                                                                 EDEC_LUT_CSR0_S[NUM_SLOT_EXP_1MS]
                                                                       max_slot_id_1ms   = (1 \<\< EDEC_LUT_CSR0_S[NUM_SLOT_EXP_1MS]) - 1

                                                                       if ((ECPRI_TIMING_HDR_S[SLOT_ID] \> (max_slot_id_1ms \<\< slot_id_ratio_exp)) ||
                                                                           (ECPRI_TIMING_HDR_S[SLOT_ID] & ((1 \<\< slot_id_ratio_exp]) - 1)))) {
                                                                             signal SLOT_ID_ERR
                                                                       }
                                                                 \</pre\> */
        uint64_t pyld_ver_err          : 1;  /**< [  9:  9](R/W1C/H) ECPRI_TIMING_HDR_SW_S[PAYLOAD_VERSION] mismatched EDEC()_AB()_TIMING_ERROR_COND[VER].
                                                                 Non Fatal signaled. */
        uint64_t data_dir_err          : 1;  /**< [  8:  8](R/W1C/H) EDEC()_AB()_TIMING_ERROR_COND[DATA_DIRECTION]\<1\> = 0 (check is enabled) and
                                                                 ECPRI_TIMING_HDR_S[DATA_DIRECTION] not equal EDEC()_AB()_TIMING_ERROR_COND[DATA_DIRECTION]\<0\>.
                                                                 Non Fatal signaled.
                                                                 Packet dropped if EDEC()_AB()_ERROR_DROP_EN[DATA_DIR_ERR] is set. */
        uint64_t pyld_max_err          : 1;  /**< [  7:  7](R/W1C/H) ECPRI_HDR_SW_S[PYLD_SIZE] larger than
                                                                 EDEC()_AB()_ECPRI_ERROR_COND[MAX_PAYLOAD_SIZE].
                                                                 Fatal signaled.
                                                                 Packet dropped if EDEC()_AB()_ERROR_DROP_EN[PYLD_MAX_ERR] is set. */
        uint64_t ebit_err              : 1;  /**< [  6:  6](R/W1C/H) ECPRI_HDR_SW_S[SEQ_ID]\<8\> is clear.
                                                                 Non Fatal signaled. */
        uint64_t msg_typ_err           : 1;  /**< [  5:  5](R/W1C/H) ECPRI_HDR_SW_S[MSG_TYPE] is not zero.
                                                                 Fatal signaled.
                                                                 Packet dropped if EDEC()_AB()_ERROR_DROP_EN[MSG_TYP_ERR] is set. */
        uint64_t concat_err            : 1;  /**< [  4:  4](R/W1C/H) ECPRI_HDR_SW_S[CONCATENATION] is set.
                                                                 Non Fatal signaled.
                                                                 Packet dropped if EDEC()_AB()_ERROR_DROP_EN[CONCAT_ERR] is set. */
        uint64_t pcid_err              : 1;  /**< [  3:  3](R/W1C/H) ECPRI_HDR_SW_S[PC_ID] different than RFOE_PSW_W2_ECPRI_S[PC_ID].
                                                                 Non Fatal signaled.
                                                                 Packet dropped if EDEC()_AB()_ERROR_DROP_EN[PCID_ERR] is set. */
        uint64_t flow_en_err           : 1;  /**< [  2:  2](R/W1C/H) EDEC_LUT_CSR0_S[FLOW_EN] cleared.
                                                                 Fatal signaled.
                                                                 Packet dropped. */
        uint64_t underflow_err         : 1;  /**< [  1:  1](R/W1C/H) Packet received smaller than ECPRI_HDR_SW_S[PYLD_SIZE].
                                                                 Fatal signaled.
                                                                 Packet dropped. */
        uint64_t overflow_err          : 1;  /**< [  0:  0](R/W1C/H) Packet received larger than ECPRI_HDR_SW_S[PYLD_SIZE].
                                                                 Fatal signaled. */
#else /* Word 0 - Little Endian */
        uint64_t overflow_err          : 1;  /**< [  0:  0](R/W1C/H) Packet received larger than ECPRI_HDR_SW_S[PYLD_SIZE].
                                                                 Fatal signaled. */
        uint64_t underflow_err         : 1;  /**< [  1:  1](R/W1C/H) Packet received smaller than ECPRI_HDR_SW_S[PYLD_SIZE].
                                                                 Fatal signaled.
                                                                 Packet dropped. */
        uint64_t flow_en_err           : 1;  /**< [  2:  2](R/W1C/H) EDEC_LUT_CSR0_S[FLOW_EN] cleared.
                                                                 Fatal signaled.
                                                                 Packet dropped. */
        uint64_t pcid_err              : 1;  /**< [  3:  3](R/W1C/H) ECPRI_HDR_SW_S[PC_ID] different than RFOE_PSW_W2_ECPRI_S[PC_ID].
                                                                 Non Fatal signaled.
                                                                 Packet dropped if EDEC()_AB()_ERROR_DROP_EN[PCID_ERR] is set. */
        uint64_t concat_err            : 1;  /**< [  4:  4](R/W1C/H) ECPRI_HDR_SW_S[CONCATENATION] is set.
                                                                 Non Fatal signaled.
                                                                 Packet dropped if EDEC()_AB()_ERROR_DROP_EN[CONCAT_ERR] is set. */
        uint64_t msg_typ_err           : 1;  /**< [  5:  5](R/W1C/H) ECPRI_HDR_SW_S[MSG_TYPE] is not zero.
                                                                 Fatal signaled.
                                                                 Packet dropped if EDEC()_AB()_ERROR_DROP_EN[MSG_TYP_ERR] is set. */
        uint64_t ebit_err              : 1;  /**< [  6:  6](R/W1C/H) ECPRI_HDR_SW_S[SEQ_ID]\<8\> is clear.
                                                                 Non Fatal signaled. */
        uint64_t pyld_max_err          : 1;  /**< [  7:  7](R/W1C/H) ECPRI_HDR_SW_S[PYLD_SIZE] larger than
                                                                 EDEC()_AB()_ECPRI_ERROR_COND[MAX_PAYLOAD_SIZE].
                                                                 Fatal signaled.
                                                                 Packet dropped if EDEC()_AB()_ERROR_DROP_EN[PYLD_MAX_ERR] is set. */
        uint64_t data_dir_err          : 1;  /**< [  8:  8](R/W1C/H) EDEC()_AB()_TIMING_ERROR_COND[DATA_DIRECTION]\<1\> = 0 (check is enabled) and
                                                                 ECPRI_TIMING_HDR_S[DATA_DIRECTION] not equal EDEC()_AB()_TIMING_ERROR_COND[DATA_DIRECTION]\<0\>.
                                                                 Non Fatal signaled.
                                                                 Packet dropped if EDEC()_AB()_ERROR_DROP_EN[DATA_DIR_ERR] is set. */
        uint64_t pyld_ver_err          : 1;  /**< [  9:  9](R/W1C/H) ECPRI_TIMING_HDR_SW_S[PAYLOAD_VERSION] mismatched EDEC()_AB()_TIMING_ERROR_COND[VER].
                                                                 Non Fatal signaled. */
        uint64_t slot_id_err           : 1;  /**< [ 10: 10](R/W1C/H) ECPRI_TIMING_HDR_S[SLOT_ID] greater than MAX_SLOT_ID expected in 1ms. Fatal
                                                                 signaled. Packet dropped if EDEC()_AB()_ERROR_DROP_EN[SLOT_ID_ERR] is set.
                                                                 \<pre\>
                                                                 The MAX_SLOT_ID is calculated as below:

                                                                       slot_id_ratio_exp = EDEC_LUT_CSR4_S[NUM_SLOT_EXP_1MS_MAX_MU] -
                                                                 EDEC_LUT_CSR0_S[NUM_SLOT_EXP_1MS]
                                                                       max_slot_id_1ms   = (1 \<\< EDEC_LUT_CSR0_S[NUM_SLOT_EXP_1MS]) - 1

                                                                       if ((ECPRI_TIMING_HDR_S[SLOT_ID] \> (max_slot_id_1ms \<\< slot_id_ratio_exp)) ||
                                                                           (ECPRI_TIMING_HDR_S[SLOT_ID] & ((1 \<\< slot_id_ratio_exp]) - 1)))) {
                                                                             signal SLOT_ID_ERR
                                                                       }
                                                                 \</pre\> */
        uint64_t rsvd_err              : 1;  /**< [ 11: 11](R/W1C/H) ECPRI_HDR_SW_S[RESERVED] is not zero.
                                                                 Non Fatal signaled. */
        uint64_t reserved_12           : 1;
        uint64_t sec_meth_err          : 1;  /**< [ 13: 13](R/W1C/H) For flexible mode ECPRI_UD_COMP_HDR_S[UD_COMP_METH] or for fixed mode
                                                                 EDEC_LUT_CSR0_S[FIX_UDCOMP_HDR] encodes
                                                                 an unsupported decompression method. Supported decompression methods described below:
                                                                  \<pre\>
                                                                 Encoding | Method               |
                                                                 ---------+----------------------+
                                                                    0     | No Compression       |
                                                                    1     | Block Floating Point |
                                                                    3     | u-Law                |
                                                                    4     | Modulation           |
                                                                    5     | BFP_SRM              |
                                                                    6     | MOD_SRM              |
                                                                 \</pre\>
                                                                 Fatal signaled.
                                                                 Packet dropped. */
        uint64_t reserved_14           : 1;
        uint64_t mod_iqw_err           : 1;  /**< [ 15: 15](R/W1C/H) Modulation iqwidth error. Supported range 1..7.
                                                                 Fatal signaled.
                                                                 Packet dropped. */
        uint64_t dbe_err               : 1;  /**< [ 16: 16](R/W1C/H) LUT DBE error. */
        uint64_t prb_min_addr_err      : 1;  /**< [ 17: 17](R/W1C/H) Attempted to write PRB data at address \< EDEC()_AB()_PRB_[DDR|SMEM]_MIN_ADDR[ADDR].
                                                                 Fatal signaled.
                                                                 Packet dropped. */
        uint64_t prb_max_addr_err      : 1;  /**< [ 18: 18](R/W1C/H) Attempted to write PRB data at address \> EDEC()_AB()_PRB_[DDR|SMEM]_MAX_ADDR[ADDR].
                                                                 Fatal signaled.
                                                                 Packet dropped. */
        uint64_t hdr_min_addr_err      : 1;  /**< [ 19: 19](R/W1C/H) Attempted to write header data at address \< EDEC()_AB()_HDR_[DDR|SMEM]_MIN_ADDR[ADDR].
                                                                 Fatal signaled.
                                                                 Packet dropped. */
        uint64_t hdr_max_addr_err      : 1;  /**< [ 20: 20](R/W1C/H) Header max address error. Write header address \>
                                                                 EDEC()_AB()_HDR_[DDR|SMEM]_MAX_ADDR[ADDR]. Fatal signaled.
                                                                 Packet dropped. */
        uint64_t lut_hdr_buf_ovrn_err  : 1;  /**< [ 21: 21](R/W1C/H) Amount of header data written exceeds EDEC_LUT_CSR2_S[HDR_BUFFER_SIZE].
                                                                 Fatal signaled.
                                                                 Packet dropped. */
        uint64_t lut_prb_buf_ovrn_err  : 1;  /**< [ 22: 22](R/W1C/H) EN_ADDR_CALC=0 and PRB header buffer overrun error.
                                                                 Fatal signaled.
                                                                 Packet dropped. */
        uint64_t rfoe_mac_err_0        : 1;  /**< [ 23: 23](R/W1C/H) Any of RFOE_PSW_S[MAC_ERR_STS]\<3:0\> bits are set (RFOE MAC_ERR_PKT_ERROR).
                                                                 Packet dropped if the corresponding bit at EDEC()_AB()_ERROR_DROP_EN is set and the specific
                                                                 decoded error value bit at EDEC()_AB()_RFOE_ERR_DROP_EN[MAC_ERR_PKT_ERR] is set.
                                                                 Fatal signaled.
                                                                 Packet dropped if EDEC()_AB()_ERROR_DROP_EN[RFOE_MAC_ERR_0] is set. */
        uint64_t rfoe_mac_err_1        : 1;  /**< [ 24: 24](R/W1C/H) RFOE_PSW_S[MAC_ERR_STS]\<4\> is set (RFOE MAC_ERR_DMA_ERROR).
                                                                 Fatal signaled.
                                                                 Packet dropped if EDEC()_AB()_ERROR_DROP_EN[RFOE_MAC_ERR_1] is set. */
        uint64_t rfoe_mac_err_2        : 1;  /**< [ 25: 25](R/W1C/H) RFOE_PSW_S[MAC_ERR_STS]\<5\> is set (RFOE MAC_ERR_SEQ_ID_ERR).
                                                                 Fatal signaled.
                                                                 Packet dropped if EDEC()_AB()_ERROR_DROP_EN[RFOE_MAC_ERR_2] is set. */
        uint64_t rfoe_mcs_err_0        : 1;  /**< [ 26: 26](R/W1C/H) Any bits of RFOE_PSW_S[MCS_ERR_STS]\<1:0\> are set (RFOE MCS_ERR_PKT_KIND).
                                                                 Fatal signaled.
                                                                 Packet dropped if EDEC()_AB()_ERROR_DROP_EN[RFOE_MCS_ERR_0] is set. */
        uint64_t rfoe_mcs_err_1        : 1;  /**< [ 27: 27](R/W1C/H) Any bits of RFOE_PSW_S[MCS_ERR_STS]\<6:2\> are set (RFOE MCS_ERR_EXCEPTION_CODE).
                                                                 Packet dropped if the corresponding bit at EDEC()_AB()_ERROR_DROP_EN is set and the specific
                                                                 decoded error value bit at EDEC()_AB()_RFOE_ERR_DROP_EN[MCS_EXCEPTION_CODE_ERR] is set.
                                                                 Fatal signaled.
                                                                 Packet dropped if EDEC()_AB()_ERROR_DROP_EN[RFOE_MCS_ERR_1] is set. */
        uint64_t rfoe_mcs_err_2        : 1;  /**< [ 28: 28](R/W1C/H) RFOE_PSW_S[MCS_ERR_STS]\<7\> is set (RFOE MCS_ERR_PUNTED_DROP).
                                                                 Fatal signaled.
                                                                 Packet dropped if EDEC()_AB()_ERROR_DROP_EN[RFOE_MCS_ERR_2] is set. */
        uint64_t ulaw_iqw_err          : 1;  /**< [ 29: 29](R/W1C/H) Set if uLAW compbitwidth equal 1. Supported values [0], [2..15]
                                                                 Fatal signaled.
                                                                 Packet dropped. */
        uint64_t num_prb_zero_but_start_prb_not : 1;/**< [ 30: 30](R/W1C/H) ECPRI_SECTION_HDR_S[NUM_PRB] == 0 but ECPRI_SECTION_HDR_S[RB] != 0.
                                                                 If EDEC()_AB()_CONFIG[RB_IND_CLR_EN] is set ECPRI_SECTION_HDR_S[RB] is cleared.
                                                                 Non Fatal signaled. */
        uint64_t lut_prb_buf_ovrn_add_calc_err : 1;/**< [ 31: 31](R/W1C/H) EDEC_LUT_CSR0_S[EN_ADDR_CALC] is set and write address exceeds
                                                                 EDEC_LUT_CSR1_S[BASE_ADDR_DATA] + EDEC_LUT_CSR1_S[NUM_TOT_PRB].
                                                                 Fatal signaled.
                                                                 Packet dropped. */
        uint64_t ghb_hdr_non_fatal_err : 1;  /**< [ 32: 32](R/W1C/H) EDEC received a GHB header write non-fatal error response.
                                                                 Non Fatal signaled. */
        uint64_t ghb_hdr_fatal_err     : 1;  /**< [ 33: 33](R/W1C/H) EDEC received a GHB header write fatal error response.
                                                                 Fatal signaled. */
        uint64_t ghb_prb_non_fatal_err : 1;  /**< [ 34: 34](R/W1C/H) EDEC received a GHB PRB write non-fatal error response.
                                                                 Non Fatal signaled. */
        uint64_t ghb_prb_fatal_err     : 1;  /**< [ 35: 35](R/W1C/H) EDEC received a GHB PRB write fatal error response.
                                                                 Fatal signaled. */
        uint64_t psm_cmd_opcode_err    : 1;  /**< [ 36: 36](R/W1C/H) When EDEC_LUT_CSR4_S[PSM_CMD_NO_ACT]=0 and EDEC_LUT_CSR3_S[PSM_JOB_CMD_WORD0]\<5:0\>
                                                                 (PSM command OPCODE) is not one of the following values:
                                                                  * NOP    (0).
                                                                  * AddJob (0x01).
                                                                  * DJCNT  (0x10).
                                                                  * GPINT  (0x11).
                                                                  * AddWork(0x13).
                                                                  * WRSTS  (0x15).
                                                                  * WRMSG  (0x16).

                                                                 Fatal signaled. */
        uint64_t wrmsgsts_add_err      : 1;  /**< [ 37: 37](R/W1C/H) EDEC_LUT_CSR4_S[PSM_CMD_NO_ACT]=0,
                                                                 EDEC_LUT_CSR3_S[PSM_JOB_CMD_WORD0]\<5:0\> == WRSTS or WRMSG,
                                                                 and the calculated write address is greater than
                                                                 EDEC()_AB()_HDR_[DDR|SMEM]_MAX_ADDR[ADDR] or less than
                                                                 EDEC()_AB()_HDR_[DDR|SMEM]_MIN_ADDR[ADDR].
                                                                 Fatal signaled. */
        uint64_t num_prb_zero_but_rb_not : 1;/**< [ 38: 38](R/W1C/H) ECPRI_SECTION_HDR_S[NUM_PRB] == 0 but ECPRI_SECTION_HDR_S[RB] != 0.
                                                                 If EDEC()_AB()_CONFIG[RB_IND_CLR_EN] is set ECPRI_SECTION_HDR_S[RB] is cleared.
                                                                 Non Fatal signaled. */
        uint64_t sym_inc_not_zero      : 1;  /**< [ 39: 39](R/W1C/H) ECPRI_SECTION_HDR_S[SYM_INC] is set.
                                                                 Non Fatal signaled. */
        uint64_t efxp_format_but_c_meth_not_bfp : 1;/**< [ 40: 40](R/W1C/H) EDEC_LUT_CSR0_S[DATA_FORMAT] is set to EDEC_DATA_FORMAT_E::eFXP and method is
                                                                 not ECPRI_COMP_METH_E::BFP
                                                                 Non Fatal signaled. */
        uint64_t seqid_err             : 1;  /**< [ 41: 41](R/W1C/H) Received packet sequence ID does not match expected value in table
                                                                 (EDEC_LUT_CSR4_S[ECPRI_SEQUENCE_ID] != ECPRI_HDR_SW_S[SEQ_ID][7:0]) and
                                                                 EDEC_LUT_CSR0_S[FLOW_EN]=1 and EDEC_LUT_CSR4_S[SEQ_ID_CHECK_EN]=1 and
                                                                 and EDEC_LUT_CSR4_S[SEQ_ID_HW_CHECK_EN]=1.
                                                                 Non Fatal signaled. */
        uint64_t reserved_42_63        : 22;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_edecx_abx_error_status_s cn; */
};
typedef union cavm_edecx_abx_error_status cavm_edecx_abx_error_status_t;

static inline uint64_t CAVM_EDECX_ABX_ERROR_STATUS(uint64_t a, uint64_t b) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_EDECX_ABX_ERROR_STATUS(uint64_t a, uint64_t b)
{
    if (cavm_is_model(OCTEONTX_CNF20KA) && ((a<=2) && (b<=1)))
        return 0x87e040400038ll + 0x80000ll * ((a) & 0x3) + 0x10000ll * ((b) & 0x1);
    __cavm_csr_fatal("EDECX_ABX_ERROR_STATUS", 2, a, b, 0, 0, 0, 0);
}

#define typedef_CAVM_EDECX_ABX_ERROR_STATUS(a,b) cavm_edecx_abx_error_status_t
#define bustype_CAVM_EDECX_ABX_ERROR_STATUS(a,b) CSR_TYPE_RSL
#define basename_CAVM_EDECX_ABX_ERROR_STATUS(a,b) "EDECX_ABX_ERROR_STATUS"
#define device_bar_CAVM_EDECX_ABX_ERROR_STATUS(a,b) 0x2 /* PF_BAR2 */
#define busnum_CAVM_EDECX_ABX_ERROR_STATUS(a,b) (a)
#define arguments_CAVM_EDECX_ABX_ERROR_STATUS(a,b) (a),(b),-1,-1

/**
 * Register (RSL) edec#_ab#_hash_cfg0
 *
 * EDEC AB Hash Config 0 Register
 */
union cavm_edecx_abx_hash_cfg0
{
    uint64_t u;
    struct cavm_edecx_abx_hash_cfg0_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_58_63        : 6;
        uint64_t xor_cfg3              : 10; /**< [ 57: 48](R/W) XOR values to be used for Hash function for bit ECPRI_HDR_S[PC_ID]\<3\>. */
        uint64_t reserved_42_47        : 6;
        uint64_t xor_cfg2              : 10; /**< [ 41: 32](R/W) XOR values to be used for Hash function for bit ECPRI_HDR_S[PC_ID]\<2\>. */
        uint64_t reserved_26_31        : 6;
        uint64_t xor_cfg1              : 10; /**< [ 25: 16](R/W) XOR values to be used for Hash function for bit ECPRI_HDR_S[PC_ID]\<1\>. */
        uint64_t reserved_10_15        : 6;
        uint64_t xor_cfg0              : 10; /**< [  9:  0](R/W) XOR values to be used for Hash function for bit ECPRI_HDR_S[PC_ID]\<0\>. */
#else /* Word 0 - Little Endian */
        uint64_t xor_cfg0              : 10; /**< [  9:  0](R/W) XOR values to be used for Hash function for bit ECPRI_HDR_S[PC_ID]\<0\>. */
        uint64_t reserved_10_15        : 6;
        uint64_t xor_cfg1              : 10; /**< [ 25: 16](R/W) XOR values to be used for Hash function for bit ECPRI_HDR_S[PC_ID]\<1\>. */
        uint64_t reserved_26_31        : 6;
        uint64_t xor_cfg2              : 10; /**< [ 41: 32](R/W) XOR values to be used for Hash function for bit ECPRI_HDR_S[PC_ID]\<2\>. */
        uint64_t reserved_42_47        : 6;
        uint64_t xor_cfg3              : 10; /**< [ 57: 48](R/W) XOR values to be used for Hash function for bit ECPRI_HDR_S[PC_ID]\<3\>. */
        uint64_t reserved_58_63        : 6;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_edecx_abx_hash_cfg0_s cn; */
};
typedef union cavm_edecx_abx_hash_cfg0 cavm_edecx_abx_hash_cfg0_t;

static inline uint64_t CAVM_EDECX_ABX_HASH_CFG0(uint64_t a, uint64_t b) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_EDECX_ABX_HASH_CFG0(uint64_t a, uint64_t b)
{
    if (cavm_is_model(OCTEONTX_CNF20KA) && ((a<=2) && (b<=1)))
        return 0x87e040400260ll + 0x80000ll * ((a) & 0x3) + 0x10000ll * ((b) & 0x1);
    __cavm_csr_fatal("EDECX_ABX_HASH_CFG0", 2, a, b, 0, 0, 0, 0);
}

#define typedef_CAVM_EDECX_ABX_HASH_CFG0(a,b) cavm_edecx_abx_hash_cfg0_t
#define bustype_CAVM_EDECX_ABX_HASH_CFG0(a,b) CSR_TYPE_RSL
#define basename_CAVM_EDECX_ABX_HASH_CFG0(a,b) "EDECX_ABX_HASH_CFG0"
#define device_bar_CAVM_EDECX_ABX_HASH_CFG0(a,b) 0x2 /* PF_BAR2 */
#define busnum_CAVM_EDECX_ABX_HASH_CFG0(a,b) (a)
#define arguments_CAVM_EDECX_ABX_HASH_CFG0(a,b) (a),(b),-1,-1

/**
 * Register (RSL) edec#_ab#_hash_cfg1
 *
 * EDEC AB Hash Config 1 Register
 */
union cavm_edecx_abx_hash_cfg1
{
    uint64_t u;
    struct cavm_edecx_abx_hash_cfg1_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_58_63        : 6;
        uint64_t xor_cfg7              : 10; /**< [ 57: 48](R/W) XOR values to be used for Hash function for bit ECPRI_HDR_S[PC_ID]\<7\>. */
        uint64_t reserved_42_47        : 6;
        uint64_t xor_cfg6              : 10; /**< [ 41: 32](R/W) XOR values to be used for Hash function for bit ECPRI_HDR_S[PC_ID]\<6\>. */
        uint64_t reserved_26_31        : 6;
        uint64_t xor_cfg5              : 10; /**< [ 25: 16](R/W) XOR values to be used for Hash function for bit ECPRI_HDR_S[PC_ID]\<5\>. */
        uint64_t reserved_10_15        : 6;
        uint64_t xor_cfg4              : 10; /**< [  9:  0](R/W) XOR values to be used for Hash function for bit ECPRI_HDR_S[PC_ID]\<4\>. */
#else /* Word 0 - Little Endian */
        uint64_t xor_cfg4              : 10; /**< [  9:  0](R/W) XOR values to be used for Hash function for bit ECPRI_HDR_S[PC_ID]\<4\>. */
        uint64_t reserved_10_15        : 6;
        uint64_t xor_cfg5              : 10; /**< [ 25: 16](R/W) XOR values to be used for Hash function for bit ECPRI_HDR_S[PC_ID]\<5\>. */
        uint64_t reserved_26_31        : 6;
        uint64_t xor_cfg6              : 10; /**< [ 41: 32](R/W) XOR values to be used for Hash function for bit ECPRI_HDR_S[PC_ID]\<6\>. */
        uint64_t reserved_42_47        : 6;
        uint64_t xor_cfg7              : 10; /**< [ 57: 48](R/W) XOR values to be used for Hash function for bit ECPRI_HDR_S[PC_ID]\<7\>. */
        uint64_t reserved_58_63        : 6;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_edecx_abx_hash_cfg1_s cn; */
};
typedef union cavm_edecx_abx_hash_cfg1 cavm_edecx_abx_hash_cfg1_t;

static inline uint64_t CAVM_EDECX_ABX_HASH_CFG1(uint64_t a, uint64_t b) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_EDECX_ABX_HASH_CFG1(uint64_t a, uint64_t b)
{
    if (cavm_is_model(OCTEONTX_CNF20KA) && ((a<=2) && (b<=1)))
        return 0x87e040400268ll + 0x80000ll * ((a) & 0x3) + 0x10000ll * ((b) & 0x1);
    __cavm_csr_fatal("EDECX_ABX_HASH_CFG1", 2, a, b, 0, 0, 0, 0);
}

#define typedef_CAVM_EDECX_ABX_HASH_CFG1(a,b) cavm_edecx_abx_hash_cfg1_t
#define bustype_CAVM_EDECX_ABX_HASH_CFG1(a,b) CSR_TYPE_RSL
#define basename_CAVM_EDECX_ABX_HASH_CFG1(a,b) "EDECX_ABX_HASH_CFG1"
#define device_bar_CAVM_EDECX_ABX_HASH_CFG1(a,b) 0x2 /* PF_BAR2 */
#define busnum_CAVM_EDECX_ABX_HASH_CFG1(a,b) (a)
#define arguments_CAVM_EDECX_ABX_HASH_CFG1(a,b) (a),(b),-1,-1

/**
 * Register (RSL) edec#_ab#_hash_cfg2
 *
 * EDEC AB Hash Config 2 Register
 */
union cavm_edecx_abx_hash_cfg2
{
    uint64_t u;
    struct cavm_edecx_abx_hash_cfg2_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_58_63        : 6;
        uint64_t xor_cfg11             : 10; /**< [ 57: 48](R/W) XOR values to be used for Hash function for bit ECPRI_HDR_S[PC_ID]\<11\>. */
        uint64_t reserved_42_47        : 6;
        uint64_t xor_cfg10             : 10; /**< [ 41: 32](R/W) XOR values to be used for Hash function for bit ECPRI_HDR_S[PC_ID]\<10\>. */
        uint64_t reserved_26_31        : 6;
        uint64_t xor_cfg9              : 10; /**< [ 25: 16](R/W) XOR values to be used for Hash function for bit ECPRI_HDR_S[PC_ID]\<9\>. */
        uint64_t reserved_10_15        : 6;
        uint64_t xor_cfg8              : 10; /**< [  9:  0](R/W) XOR values to be used for Hash function for bit ECPRI_HDR_S[PC_ID]\<8\>. */
#else /* Word 0 - Little Endian */
        uint64_t xor_cfg8              : 10; /**< [  9:  0](R/W) XOR values to be used for Hash function for bit ECPRI_HDR_S[PC_ID]\<8\>. */
        uint64_t reserved_10_15        : 6;
        uint64_t xor_cfg9              : 10; /**< [ 25: 16](R/W) XOR values to be used for Hash function for bit ECPRI_HDR_S[PC_ID]\<9\>. */
        uint64_t reserved_26_31        : 6;
        uint64_t xor_cfg10             : 10; /**< [ 41: 32](R/W) XOR values to be used for Hash function for bit ECPRI_HDR_S[PC_ID]\<10\>. */
        uint64_t reserved_42_47        : 6;
        uint64_t xor_cfg11             : 10; /**< [ 57: 48](R/W) XOR values to be used for Hash function for bit ECPRI_HDR_S[PC_ID]\<11\>. */
        uint64_t reserved_58_63        : 6;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_edecx_abx_hash_cfg2_s cn; */
};
typedef union cavm_edecx_abx_hash_cfg2 cavm_edecx_abx_hash_cfg2_t;

static inline uint64_t CAVM_EDECX_ABX_HASH_CFG2(uint64_t a, uint64_t b) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_EDECX_ABX_HASH_CFG2(uint64_t a, uint64_t b)
{
    if (cavm_is_model(OCTEONTX_CNF20KA) && ((a<=2) && (b<=1)))
        return 0x87e040400270ll + 0x80000ll * ((a) & 0x3) + 0x10000ll * ((b) & 0x1);
    __cavm_csr_fatal("EDECX_ABX_HASH_CFG2", 2, a, b, 0, 0, 0, 0);
}

#define typedef_CAVM_EDECX_ABX_HASH_CFG2(a,b) cavm_edecx_abx_hash_cfg2_t
#define bustype_CAVM_EDECX_ABX_HASH_CFG2(a,b) CSR_TYPE_RSL
#define basename_CAVM_EDECX_ABX_HASH_CFG2(a,b) "EDECX_ABX_HASH_CFG2"
#define device_bar_CAVM_EDECX_ABX_HASH_CFG2(a,b) 0x2 /* PF_BAR2 */
#define busnum_CAVM_EDECX_ABX_HASH_CFG2(a,b) (a)
#define arguments_CAVM_EDECX_ABX_HASH_CFG2(a,b) (a),(b),-1,-1

/**
 * Register (RSL) edec#_ab#_hash_cfg3
 *
 * EDEC AB Hash Config 3 Register
 */
union cavm_edecx_abx_hash_cfg3
{
    uint64_t u;
    struct cavm_edecx_abx_hash_cfg3_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_58_63        : 6;
        uint64_t xor_cfg15             : 10; /**< [ 57: 48](R/W) XOR values to be used for Hash function for bit ECPRI_HDR_S[PC_ID]\<15\>. */
        uint64_t reserved_42_47        : 6;
        uint64_t xor_cfg14             : 10; /**< [ 41: 32](R/W) XOR values to be used for Hash function for bit ECPRI_HDR_S[PC_ID]\<14\>. */
        uint64_t reserved_26_31        : 6;
        uint64_t xor_cfg13             : 10; /**< [ 25: 16](R/W) XOR values to be used for Hash function for bit ECPRI_HDR_S[PC_ID]\<13\>. */
        uint64_t reserved_10_15        : 6;
        uint64_t xor_cfg12             : 10; /**< [  9:  0](R/W) XOR values to be used for Hash function for bit ECPRI_HDR_S[PC_ID]\<12\>. */
#else /* Word 0 - Little Endian */
        uint64_t xor_cfg12             : 10; /**< [  9:  0](R/W) XOR values to be used for Hash function for bit ECPRI_HDR_S[PC_ID]\<12\>. */
        uint64_t reserved_10_15        : 6;
        uint64_t xor_cfg13             : 10; /**< [ 25: 16](R/W) XOR values to be used for Hash function for bit ECPRI_HDR_S[PC_ID]\<13\>. */
        uint64_t reserved_26_31        : 6;
        uint64_t xor_cfg14             : 10; /**< [ 41: 32](R/W) XOR values to be used for Hash function for bit ECPRI_HDR_S[PC_ID]\<14\>. */
        uint64_t reserved_42_47        : 6;
        uint64_t xor_cfg15             : 10; /**< [ 57: 48](R/W) XOR values to be used for Hash function for bit ECPRI_HDR_S[PC_ID]\<15\>. */
        uint64_t reserved_58_63        : 6;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_edecx_abx_hash_cfg3_s cn; */
};
typedef union cavm_edecx_abx_hash_cfg3 cavm_edecx_abx_hash_cfg3_t;

static inline uint64_t CAVM_EDECX_ABX_HASH_CFG3(uint64_t a, uint64_t b) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_EDECX_ABX_HASH_CFG3(uint64_t a, uint64_t b)
{
    if (cavm_is_model(OCTEONTX_CNF20KA) && ((a<=2) && (b<=1)))
        return 0x87e040400278ll + 0x80000ll * ((a) & 0x3) + 0x10000ll * ((b) & 0x1);
    __cavm_csr_fatal("EDECX_ABX_HASH_CFG3", 2, a, b, 0, 0, 0, 0);
}

#define typedef_CAVM_EDECX_ABX_HASH_CFG3(a,b) cavm_edecx_abx_hash_cfg3_t
#define bustype_CAVM_EDECX_ABX_HASH_CFG3(a,b) CSR_TYPE_RSL
#define basename_CAVM_EDECX_ABX_HASH_CFG3(a,b) "EDECX_ABX_HASH_CFG3"
#define device_bar_CAVM_EDECX_ABX_HASH_CFG3(a,b) 0x2 /* PF_BAR2 */
#define busnum_CAVM_EDECX_ABX_HASH_CFG3(a,b) (a)
#define arguments_CAVM_EDECX_ABX_HASH_CFG3(a,b) (a),(b),-1,-1

/**
 * Register (RSL) edec#_ab#_hash_cfg4
 *
 * EDEC AB Hash Config 4 Register
 */
union cavm_edecx_abx_hash_cfg4
{
    uint64_t u;
    struct cavm_edecx_abx_hash_cfg4_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_58_63        : 6;
        uint64_t xor_cfg19             : 10; /**< [ 57: 48](R/W) XOR values to be used for Hash function for bit ECPRI_HDR_S[PC_ID]\<19\>. */
        uint64_t reserved_42_47        : 6;
        uint64_t xor_cfg18             : 10; /**< [ 41: 32](R/W) XOR values to be used for Hash function for bit ECPRI_HDR_S[PC_ID]\<18\>. */
        uint64_t reserved_26_31        : 6;
        uint64_t xor_cfg17             : 10; /**< [ 25: 16](R/W) XOR values to be used for Hash function for bit ECPRI_HDR_S[PC_ID]\<17\>. */
        uint64_t reserved_10_15        : 6;
        uint64_t xor_cfg16             : 10; /**< [  9:  0](R/W) XOR values to be used for Hash function for bit ECPRI_HDR_S[PC_ID]\<16\>. */
#else /* Word 0 - Little Endian */
        uint64_t xor_cfg16             : 10; /**< [  9:  0](R/W) XOR values to be used for Hash function for bit ECPRI_HDR_S[PC_ID]\<16\>. */
        uint64_t reserved_10_15        : 6;
        uint64_t xor_cfg17             : 10; /**< [ 25: 16](R/W) XOR values to be used for Hash function for bit ECPRI_HDR_S[PC_ID]\<17\>. */
        uint64_t reserved_26_31        : 6;
        uint64_t xor_cfg18             : 10; /**< [ 41: 32](R/W) XOR values to be used for Hash function for bit ECPRI_HDR_S[PC_ID]\<18\>. */
        uint64_t reserved_42_47        : 6;
        uint64_t xor_cfg19             : 10; /**< [ 57: 48](R/W) XOR values to be used for Hash function for bit ECPRI_HDR_S[PC_ID]\<19\>. */
        uint64_t reserved_58_63        : 6;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_edecx_abx_hash_cfg4_s cn; */
};
typedef union cavm_edecx_abx_hash_cfg4 cavm_edecx_abx_hash_cfg4_t;

static inline uint64_t CAVM_EDECX_ABX_HASH_CFG4(uint64_t a, uint64_t b) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_EDECX_ABX_HASH_CFG4(uint64_t a, uint64_t b)
{
    if (cavm_is_model(OCTEONTX_CNF20KA) && ((a<=2) && (b<=1)))
        return 0x87e040400280ll + 0x80000ll * ((a) & 0x3) + 0x10000ll * ((b) & 0x1);
    __cavm_csr_fatal("EDECX_ABX_HASH_CFG4", 2, a, b, 0, 0, 0, 0);
}

#define typedef_CAVM_EDECX_ABX_HASH_CFG4(a,b) cavm_edecx_abx_hash_cfg4_t
#define bustype_CAVM_EDECX_ABX_HASH_CFG4(a,b) CSR_TYPE_RSL
#define basename_CAVM_EDECX_ABX_HASH_CFG4(a,b) "EDECX_ABX_HASH_CFG4"
#define device_bar_CAVM_EDECX_ABX_HASH_CFG4(a,b) 0x2 /* PF_BAR2 */
#define busnum_CAVM_EDECX_ABX_HASH_CFG4(a,b) (a)
#define arguments_CAVM_EDECX_ABX_HASH_CFG4(a,b) (a),(b),-1,-1

/**
 * Register (RSL) edec#_ab#_hash_cfg5
 *
 * EDEC AB Hash Config 0 Register
 */
union cavm_edecx_abx_hash_cfg5
{
    uint64_t u;
    struct cavm_edecx_abx_hash_cfg5_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_26_63        : 38;
        uint64_t xor_cfg21             : 10; /**< [ 25: 16](R/W) XOR values to be used for Hash function for bit ECPRI_HDR_S[PC_ID]\<21\>. */
        uint64_t reserved_10_15        : 6;
        uint64_t xor_cfg20             : 10; /**< [  9:  0](R/W) XOR values to be used for Hash function for bit ECPRI_HDR_S[PC_ID]\<20\>. */
#else /* Word 0 - Little Endian */
        uint64_t xor_cfg20             : 10; /**< [  9:  0](R/W) XOR values to be used for Hash function for bit ECPRI_HDR_S[PC_ID]\<20\>. */
        uint64_t reserved_10_15        : 6;
        uint64_t xor_cfg21             : 10; /**< [ 25: 16](R/W) XOR values to be used for Hash function for bit ECPRI_HDR_S[PC_ID]\<21\>. */
        uint64_t reserved_26_63        : 38;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_edecx_abx_hash_cfg5_s cn; */
};
typedef union cavm_edecx_abx_hash_cfg5 cavm_edecx_abx_hash_cfg5_t;

static inline uint64_t CAVM_EDECX_ABX_HASH_CFG5(uint64_t a, uint64_t b) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_EDECX_ABX_HASH_CFG5(uint64_t a, uint64_t b)
{
    if (cavm_is_model(OCTEONTX_CNF20KA) && ((a<=2) && (b<=1)))
        return 0x87e040400288ll + 0x80000ll * ((a) & 0x3) + 0x10000ll * ((b) & 0x1);
    __cavm_csr_fatal("EDECX_ABX_HASH_CFG5", 2, a, b, 0, 0, 0, 0);
}

#define typedef_CAVM_EDECX_ABX_HASH_CFG5(a,b) cavm_edecx_abx_hash_cfg5_t
#define bustype_CAVM_EDECX_ABX_HASH_CFG5(a,b) CSR_TYPE_RSL
#define basename_CAVM_EDECX_ABX_HASH_CFG5(a,b) "EDECX_ABX_HASH_CFG5"
#define device_bar_CAVM_EDECX_ABX_HASH_CFG5(a,b) 0x2 /* PF_BAR2 */
#define busnum_CAVM_EDECX_ABX_HASH_CFG5(a,b) (a)
#define arguments_CAVM_EDECX_ABX_HASH_CFG5(a,b) (a),(b),-1,-1

/**
 * Register (RSL) edec#_ab#_hdr_buf_attr
 *
 * EDEC Global Headr Buffer Attributes Register
 * Register used to adjust the values written to HDR memory section.
 */
union cavm_edecx_abx_hdr_buf_attr
{
    uint64_t u;
    struct cavm_edecx_abx_hdr_buf_attr_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_16_63        : 48;
        uint64_t offset                : 16; /**< [ 15:  0](R/W) RD_DMA_CFG_WORD1.START_ADDR computed as header buffer address + OFFSET.
                                                                 The OFFSET is expressed as 16-byte word count. */
#else /* Word 0 - Little Endian */
        uint64_t offset                : 16; /**< [ 15:  0](R/W) RD_DMA_CFG_WORD1.START_ADDR computed as header buffer address + OFFSET.
                                                                 The OFFSET is expressed as 16-byte word count. */
        uint64_t reserved_16_63        : 48;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_edecx_abx_hdr_buf_attr_s cn; */
};
typedef union cavm_edecx_abx_hdr_buf_attr cavm_edecx_abx_hdr_buf_attr_t;

static inline uint64_t CAVM_EDECX_ABX_HDR_BUF_ATTR(uint64_t a, uint64_t b) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_EDECX_ABX_HDR_BUF_ATTR(uint64_t a, uint64_t b)
{
    if (cavm_is_model(OCTEONTX_CNF20KA) && ((a<=2) && (b<=1)))
        return 0x87e040400200ll + 0x80000ll * ((a) & 0x3) + 0x10000ll * ((b) & 0x1);
    __cavm_csr_fatal("EDECX_ABX_HDR_BUF_ATTR", 2, a, b, 0, 0, 0, 0);
}

#define typedef_CAVM_EDECX_ABX_HDR_BUF_ATTR(a,b) cavm_edecx_abx_hdr_buf_attr_t
#define bustype_CAVM_EDECX_ABX_HDR_BUF_ATTR(a,b) CSR_TYPE_RSL
#define basename_CAVM_EDECX_ABX_HDR_BUF_ATTR(a,b) "EDECX_ABX_HDR_BUF_ATTR"
#define device_bar_CAVM_EDECX_ABX_HDR_BUF_ATTR(a,b) 0x2 /* PF_BAR2 */
#define busnum_CAVM_EDECX_ABX_HDR_BUF_ATTR(a,b) (a)
#define arguments_CAVM_EDECX_ABX_HDR_BUF_ATTR(a,b) (a),(b),-1,-1

/**
 * Register (RSL) edec#_ab#_hdr_ddr_max_addr
 *
 * EDEC Header Maximum Address Register
 * This register contains the top of the address range usable for
 * header data writes to DDR.
 */
union cavm_edecx_abx_hdr_ddr_max_addr
{
    uint64_t u;
    struct cavm_edecx_abx_hdr_ddr_max_addr_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_53_63        : 11;
        uint64_t addr                  : 53; /**< [ 52:  0](R/W) Highest address at which EDEC may write header data to DDR. Bottom 4
                                                                 bits are ignored.
                                                                 Report error when EDEC attempts to write headers to an address \> [ADDR]. */
#else /* Word 0 - Little Endian */
        uint64_t addr                  : 53; /**< [ 52:  0](R/W) Highest address at which EDEC may write header data to DDR. Bottom 4
                                                                 bits are ignored.
                                                                 Report error when EDEC attempts to write headers to an address \> [ADDR]. */
        uint64_t reserved_53_63        : 11;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_edecx_abx_hdr_ddr_max_addr_s cn; */
};
typedef union cavm_edecx_abx_hdr_ddr_max_addr cavm_edecx_abx_hdr_ddr_max_addr_t;

static inline uint64_t CAVM_EDECX_ABX_HDR_DDR_MAX_ADDR(uint64_t a, uint64_t b) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_EDECX_ABX_HDR_DDR_MAX_ADDR(uint64_t a, uint64_t b)
{
    if (cavm_is_model(OCTEONTX_CNF20KA) && ((a<=2) && (b<=1)))
        return 0x87e0404000d0ll + 0x80000ll * ((a) & 0x3) + 0x10000ll * ((b) & 0x1);
    __cavm_csr_fatal("EDECX_ABX_HDR_DDR_MAX_ADDR", 2, a, b, 0, 0, 0, 0);
}

#define typedef_CAVM_EDECX_ABX_HDR_DDR_MAX_ADDR(a,b) cavm_edecx_abx_hdr_ddr_max_addr_t
#define bustype_CAVM_EDECX_ABX_HDR_DDR_MAX_ADDR(a,b) CSR_TYPE_RSL
#define basename_CAVM_EDECX_ABX_HDR_DDR_MAX_ADDR(a,b) "EDECX_ABX_HDR_DDR_MAX_ADDR"
#define device_bar_CAVM_EDECX_ABX_HDR_DDR_MAX_ADDR(a,b) 0x2 /* PF_BAR2 */
#define busnum_CAVM_EDECX_ABX_HDR_DDR_MAX_ADDR(a,b) (a)
#define arguments_CAVM_EDECX_ABX_HDR_DDR_MAX_ADDR(a,b) (a),(b),-1,-1

/**
 * Register (RSL) edec#_ab#_hdr_ddr_min_addr
 *
 * EDEC Header Minimum Address Register
 * This register contains the bottom of the address range usable for
 * header data writes to DDR.
 */
union cavm_edecx_abx_hdr_ddr_min_addr
{
    uint64_t u;
    struct cavm_edecx_abx_hdr_ddr_min_addr_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_53_63        : 11;
        uint64_t addr                  : 53; /**< [ 52:  0](R/W) Lowest address at which EDEC may write header data to DDR. Bottom 4
                                                                 bits are ignored.
                                                                 Report error when EDEC attempts to write headers to an address \< [ADDR]. */
#else /* Word 0 - Little Endian */
        uint64_t addr                  : 53; /**< [ 52:  0](R/W) Lowest address at which EDEC may write header data to DDR. Bottom 4
                                                                 bits are ignored.
                                                                 Report error when EDEC attempts to write headers to an address \< [ADDR]. */
        uint64_t reserved_53_63        : 11;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_edecx_abx_hdr_ddr_min_addr_s cn; */
};
typedef union cavm_edecx_abx_hdr_ddr_min_addr cavm_edecx_abx_hdr_ddr_min_addr_t;

static inline uint64_t CAVM_EDECX_ABX_HDR_DDR_MIN_ADDR(uint64_t a, uint64_t b) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_EDECX_ABX_HDR_DDR_MIN_ADDR(uint64_t a, uint64_t b)
{
    if (cavm_is_model(OCTEONTX_CNF20KA) && ((a<=2) && (b<=1)))
        return 0x87e0404000c8ll + 0x80000ll * ((a) & 0x3) + 0x10000ll * ((b) & 0x1);
    __cavm_csr_fatal("EDECX_ABX_HDR_DDR_MIN_ADDR", 2, a, b, 0, 0, 0, 0);
}

#define typedef_CAVM_EDECX_ABX_HDR_DDR_MIN_ADDR(a,b) cavm_edecx_abx_hdr_ddr_min_addr_t
#define bustype_CAVM_EDECX_ABX_HDR_DDR_MIN_ADDR(a,b) CSR_TYPE_RSL
#define basename_CAVM_EDECX_ABX_HDR_DDR_MIN_ADDR(a,b) "EDECX_ABX_HDR_DDR_MIN_ADDR"
#define device_bar_CAVM_EDECX_ABX_HDR_DDR_MIN_ADDR(a,b) 0x2 /* PF_BAR2 */
#define busnum_CAVM_EDECX_ABX_HDR_DDR_MIN_ADDR(a,b) (a)
#define arguments_CAVM_EDECX_ABX_HDR_DDR_MIN_ADDR(a,b) (a),(b),-1,-1

/**
 * Register (RSL) edec#_ab#_hdr_smem_max_addr
 *
 * EDEC Header Maximum Address Register
 * This register contains the top of the address range usable for
 * header data writes to SMEM.
 */
union cavm_edecx_abx_hdr_smem_max_addr
{
    uint64_t u;
    struct cavm_edecx_abx_hdr_smem_max_addr_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_26_63        : 38;
        uint64_t addr                  : 26; /**< [ 25:  0](R/W) Highest address at which EDEC may write header data to SMEM. Bottom 4
                                                                 bits are ignored.
                                                                 Report error when EDEC attempts to write headers to an address \>
                                                                 [ADDR]. */
#else /* Word 0 - Little Endian */
        uint64_t addr                  : 26; /**< [ 25:  0](R/W) Highest address at which EDEC may write header data to SMEM. Bottom 4
                                                                 bits are ignored.
                                                                 Report error when EDEC attempts to write headers to an address \>
                                                                 [ADDR]. */
        uint64_t reserved_26_63        : 38;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_edecx_abx_hdr_smem_max_addr_s cn; */
};
typedef union cavm_edecx_abx_hdr_smem_max_addr cavm_edecx_abx_hdr_smem_max_addr_t;

static inline uint64_t CAVM_EDECX_ABX_HDR_SMEM_MAX_ADDR(uint64_t a, uint64_t b) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_EDECX_ABX_HDR_SMEM_MAX_ADDR(uint64_t a, uint64_t b)
{
    if (cavm_is_model(OCTEONTX_CNF20KA) && ((a<=2) && (b<=1)))
        return 0x87e0404000b0ll + 0x80000ll * ((a) & 0x3) + 0x10000ll * ((b) & 0x1);
    __cavm_csr_fatal("EDECX_ABX_HDR_SMEM_MAX_ADDR", 2, a, b, 0, 0, 0, 0);
}

#define typedef_CAVM_EDECX_ABX_HDR_SMEM_MAX_ADDR(a,b) cavm_edecx_abx_hdr_smem_max_addr_t
#define bustype_CAVM_EDECX_ABX_HDR_SMEM_MAX_ADDR(a,b) CSR_TYPE_RSL
#define basename_CAVM_EDECX_ABX_HDR_SMEM_MAX_ADDR(a,b) "EDECX_ABX_HDR_SMEM_MAX_ADDR"
#define device_bar_CAVM_EDECX_ABX_HDR_SMEM_MAX_ADDR(a,b) 0x2 /* PF_BAR2 */
#define busnum_CAVM_EDECX_ABX_HDR_SMEM_MAX_ADDR(a,b) (a)
#define arguments_CAVM_EDECX_ABX_HDR_SMEM_MAX_ADDR(a,b) (a),(b),-1,-1

/**
 * Register (RSL) edec#_ab#_hdr_smem_min_addr
 *
 * EDEC Header Minimum Address Register
 * This register contains the bottom of the address range usable for
 * header data writes to SMEM.
 */
union cavm_edecx_abx_hdr_smem_min_addr
{
    uint64_t u;
    struct cavm_edecx_abx_hdr_smem_min_addr_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_26_63        : 38;
        uint64_t addr                  : 26; /**< [ 25:  0](R/W) Lowest address at which EDEC may write header data to SMEM. Bottom 4
                                                                 bits are ignored.
                                                                 Report error when EDEC attempts to write headers to an address \<
                                                                 [ADDR]. */
#else /* Word 0 - Little Endian */
        uint64_t addr                  : 26; /**< [ 25:  0](R/W) Lowest address at which EDEC may write header data to SMEM. Bottom 4
                                                                 bits are ignored.
                                                                 Report error when EDEC attempts to write headers to an address \<
                                                                 [ADDR]. */
        uint64_t reserved_26_63        : 38;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_edecx_abx_hdr_smem_min_addr_s cn; */
};
typedef union cavm_edecx_abx_hdr_smem_min_addr cavm_edecx_abx_hdr_smem_min_addr_t;

static inline uint64_t CAVM_EDECX_ABX_HDR_SMEM_MIN_ADDR(uint64_t a, uint64_t b) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_EDECX_ABX_HDR_SMEM_MIN_ADDR(uint64_t a, uint64_t b)
{
    if (cavm_is_model(OCTEONTX_CNF20KA) && ((a<=2) && (b<=1)))
        return 0x87e0404000a8ll + 0x80000ll * ((a) & 0x3) + 0x10000ll * ((b) & 0x1);
    __cavm_csr_fatal("EDECX_ABX_HDR_SMEM_MIN_ADDR", 2, a, b, 0, 0, 0, 0);
}

#define typedef_CAVM_EDECX_ABX_HDR_SMEM_MIN_ADDR(a,b) cavm_edecx_abx_hdr_smem_min_addr_t
#define bustype_CAVM_EDECX_ABX_HDR_SMEM_MIN_ADDR(a,b) CSR_TYPE_RSL
#define basename_CAVM_EDECX_ABX_HDR_SMEM_MIN_ADDR(a,b) "EDECX_ABX_HDR_SMEM_MIN_ADDR"
#define device_bar_CAVM_EDECX_ABX_HDR_SMEM_MIN_ADDR(a,b) 0x2 /* PF_BAR2 */
#define busnum_CAVM_EDECX_ABX_HDR_SMEM_MIN_ADDR(a,b) (a)
#define arguments_CAVM_EDECX_ABX_HDR_SMEM_MIN_ADDR(a,b) (a),(b),-1,-1

/**
 * Register (RSL) edec#_ab#_lut_access
 *
 * EDEC LUT Access Register
 * This register allows software to toggle between incremental LUT programming mode
 * where all LUT entries are written consecutively without specifying addresses,
 * and random R/W mode where data can be read/written from/to arbitrary FLOW_ID entries.
 * LUT entries for FLOW_ID values corresponding to active jobs should
 * not be modified.
 * Modifying the LUT entry of an active job will cause unpredictable
 * behavior.
 */
union cavm_edecx_abx_lut_access
{
    uint64_t u;
    struct cavm_edecx_abx_lut_access_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_2_63         : 62;
        uint64_t mode_change           : 1;  /**< [  1:  1](RO/H) Set by hardware when [MODE] was changed. */
        uint64_t mode                  : 1;  /**< [  0:  0](R/W/H) LUT access mode. Setting this bit:
                                                                 * Enables the incremental LUT programming mode.
                                                                 * Resets the internal counters FLOW_ID_IDX and FLOW_ID_WORD_IDX used
                                                                 by the incremental LUT programming mode.

                                                                 In incremental programming mode, writes to EDEC()_AB()_LUT_INCR_WRITE[DATA]
                                                                 will populate the LUT and increment pointers till the table fills at
                                                                 which point this bit is reset by EDEC and subsequent writes to
                                                                 EDEC()_AB()_LUT_INCR_WRITE[DATA] are ignored. In this mode, writes to all
                                                                 EDEC()_AB()_LUT_RND_WRITE* registers are ignored and values in all
                                                                 EDEC()_AB()_LUT_RND_READ* registers are undefined.

                                                                 Incremental programming can be aborted by setting [MODE]
                                                                 to 0 which will cause the pointers to reset but will leave LUT
                                                                 in the state it was after the last complete FLOW_ID write (each FLOW_ID
                                                                 entry contains four 64-bit words and is deemed completely written only
                                                                 when all four new words are written; aborted incomplete flow writes are
                                                                 not committed to LUT).

                                                                 When this bit is 0 (at end of incremental programming or from software write),
                                                                 the LUT is in random read/write access mode.

                                                                 In random R/W, to read a FLOW_ID entry software shall write the address to
                                                                 EDEC()_AB()_LUT_RND_READ_CMD[FLOW_ID] and set EDEC()_AB()_LUT_RND_READ_CMD[EN],
                                                                 (writing to EN will cause EDEC()_AB()_LUT_RND_READ_CMD[VLD] to clear) and poll
                                                                 EDEC()_AB()_LUT_RND_READ_CMD[VLD] till set. The valid FLOW_ID values can then
                                                                 be read from EDEC()_AB()_LUT_RND_READ_DATA0 ... EDEC()_AB()_LUT_RND_READ_DATA4.

                                                                 To write a FLOW_ID entry in random R/W mode, software needs to first write
                                                                 the 5 data entries to EDEC()_AB()_LUT_RND_WRITE_DATA0 ... EDEC()_AB()_LUT_RND_WRITE_DATA4
                                                                 then write EDEC()_AB()_LUT_RND_WRITE_CMD[FLOW_ID] with the FLOW_ID, and set
                                                                 EDEC()_AB()_LUT_RND_WRITE_CMD[EN] in the same CSR write (the writing of FLOW_ID
                                                                 and EN fields of register EDEC()_AB()_LUT_RND_WRITE_CMD have to be part of the same
                                                                 CSR write).

                                                                 In random R/W, writes to EDEC()_AB()_LUT_INCR_WRITE[DATA] are ignored. */
#else /* Word 0 - Little Endian */
        uint64_t mode                  : 1;  /**< [  0:  0](R/W/H) LUT access mode. Setting this bit:
                                                                 * Enables the incremental LUT programming mode.
                                                                 * Resets the internal counters FLOW_ID_IDX and FLOW_ID_WORD_IDX used
                                                                 by the incremental LUT programming mode.

                                                                 In incremental programming mode, writes to EDEC()_AB()_LUT_INCR_WRITE[DATA]
                                                                 will populate the LUT and increment pointers till the table fills at
                                                                 which point this bit is reset by EDEC and subsequent writes to
                                                                 EDEC()_AB()_LUT_INCR_WRITE[DATA] are ignored. In this mode, writes to all
                                                                 EDEC()_AB()_LUT_RND_WRITE* registers are ignored and values in all
                                                                 EDEC()_AB()_LUT_RND_READ* registers are undefined.

                                                                 Incremental programming can be aborted by setting [MODE]
                                                                 to 0 which will cause the pointers to reset but will leave LUT
                                                                 in the state it was after the last complete FLOW_ID write (each FLOW_ID
                                                                 entry contains four 64-bit words and is deemed completely written only
                                                                 when all four new words are written; aborted incomplete flow writes are
                                                                 not committed to LUT).

                                                                 When this bit is 0 (at end of incremental programming or from software write),
                                                                 the LUT is in random read/write access mode.

                                                                 In random R/W, to read a FLOW_ID entry software shall write the address to
                                                                 EDEC()_AB()_LUT_RND_READ_CMD[FLOW_ID] and set EDEC()_AB()_LUT_RND_READ_CMD[EN],
                                                                 (writing to EN will cause EDEC()_AB()_LUT_RND_READ_CMD[VLD] to clear) and poll
                                                                 EDEC()_AB()_LUT_RND_READ_CMD[VLD] till set. The valid FLOW_ID values can then
                                                                 be read from EDEC()_AB()_LUT_RND_READ_DATA0 ... EDEC()_AB()_LUT_RND_READ_DATA4.

                                                                 To write a FLOW_ID entry in random R/W mode, software needs to first write
                                                                 the 5 data entries to EDEC()_AB()_LUT_RND_WRITE_DATA0 ... EDEC()_AB()_LUT_RND_WRITE_DATA4
                                                                 then write EDEC()_AB()_LUT_RND_WRITE_CMD[FLOW_ID] with the FLOW_ID, and set
                                                                 EDEC()_AB()_LUT_RND_WRITE_CMD[EN] in the same CSR write (the writing of FLOW_ID
                                                                 and EN fields of register EDEC()_AB()_LUT_RND_WRITE_CMD have to be part of the same
                                                                 CSR write).

                                                                 In random R/W, writes to EDEC()_AB()_LUT_INCR_WRITE[DATA] are ignored. */
        uint64_t mode_change           : 1;  /**< [  1:  1](RO/H) Set by hardware when [MODE] was changed. */
        uint64_t reserved_2_63         : 62;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_edecx_abx_lut_access_s cn; */
};
typedef union cavm_edecx_abx_lut_access cavm_edecx_abx_lut_access_t;

static inline uint64_t CAVM_EDECX_ABX_LUT_ACCESS(uint64_t a, uint64_t b) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_EDECX_ABX_LUT_ACCESS(uint64_t a, uint64_t b)
{
    if (cavm_is_model(OCTEONTX_CNF20KA) && ((a<=2) && (b<=1)))
        return 0x87e040400100ll + 0x80000ll * ((a) & 0x3) + 0x10000ll * ((b) & 0x1);
    __cavm_csr_fatal("EDECX_ABX_LUT_ACCESS", 2, a, b, 0, 0, 0, 0);
}

#define typedef_CAVM_EDECX_ABX_LUT_ACCESS(a,b) cavm_edecx_abx_lut_access_t
#define bustype_CAVM_EDECX_ABX_LUT_ACCESS(a,b) CSR_TYPE_RSL
#define basename_CAVM_EDECX_ABX_LUT_ACCESS(a,b) "EDECX_ABX_LUT_ACCESS"
#define device_bar_CAVM_EDECX_ABX_LUT_ACCESS(a,b) 0x2 /* PF_BAR2 */
#define busnum_CAVM_EDECX_ABX_LUT_ACCESS(a,b) (a)
#define arguments_CAVM_EDECX_ABX_LUT_ACCESS(a,b) (a),(b),-1,-1

/**
 * Register (RSL) edec#_ab#_lut_incr_write
 *
 * EDEC LUT Incremental Data Write Register
 * Register used for writing LUT data.
 */
union cavm_edecx_abx_lut_incr_write
{
    uint64_t u;
    struct cavm_edecx_abx_lut_incr_write_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t data                  : 64; /**< [ 63:  0](WO) Value written to LUT in incremental programming mode.
                                                                 Formatted according to EDEC_LUT_CSR0_S, EDEC_LUT_CSR1_S, EDEC_LUT_CSR2_S
                                                                 or EDEC_LUT_CSR3_S depending on the
                                                                 the number of writes to this register since writing
                                                                 EDEC()_AB()_LUT_ACCESS[MODE]=1, modulo 4.

                                                                 See also EDEC()_AB()_LUT_ACCESS[MODE]. */
#else /* Word 0 - Little Endian */
        uint64_t data                  : 64; /**< [ 63:  0](WO) Value written to LUT in incremental programming mode.
                                                                 Formatted according to EDEC_LUT_CSR0_S, EDEC_LUT_CSR1_S, EDEC_LUT_CSR2_S
                                                                 or EDEC_LUT_CSR3_S depending on the
                                                                 the number of writes to this register since writing
                                                                 EDEC()_AB()_LUT_ACCESS[MODE]=1, modulo 4.

                                                                 See also EDEC()_AB()_LUT_ACCESS[MODE]. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_edecx_abx_lut_incr_write_s cn; */
};
typedef union cavm_edecx_abx_lut_incr_write cavm_edecx_abx_lut_incr_write_t;

static inline uint64_t CAVM_EDECX_ABX_LUT_INCR_WRITE(uint64_t a, uint64_t b) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_EDECX_ABX_LUT_INCR_WRITE(uint64_t a, uint64_t b)
{
    if (cavm_is_model(OCTEONTX_CNF20KA) && ((a<=2) && (b<=1)))
        return 0x87e040400108ll + 0x80000ll * ((a) & 0x3) + 0x10000ll * ((b) & 0x1);
    __cavm_csr_fatal("EDECX_ABX_LUT_INCR_WRITE", 2, a, b, 0, 0, 0, 0);
}

#define typedef_CAVM_EDECX_ABX_LUT_INCR_WRITE(a,b) cavm_edecx_abx_lut_incr_write_t
#define bustype_CAVM_EDECX_ABX_LUT_INCR_WRITE(a,b) CSR_TYPE_RSL
#define basename_CAVM_EDECX_ABX_LUT_INCR_WRITE(a,b) "EDECX_ABX_LUT_INCR_WRITE"
#define device_bar_CAVM_EDECX_ABX_LUT_INCR_WRITE(a,b) 0x2 /* PF_BAR2 */
#define busnum_CAVM_EDECX_ABX_LUT_INCR_WRITE(a,b) (a)
#define arguments_CAVM_EDECX_ABX_LUT_INCR_WRITE(a,b) (a),(b),-1,-1

/**
 * Register (RSL) edec#_ab#_lut_rnd_read_cmd
 *
 * EDEC LUT Random Read Command Register
 * Register used for randomly reading LUT data.
 */
union cavm_edecx_abx_lut_rnd_read_cmd
{
    uint64_t u;
    struct cavm_edecx_abx_lut_rnd_read_cmd_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_12_63        : 52;
        uint64_t flow_id               : 10; /**< [ 11:  2](R/W) LUT access FLOW_ID. See also EDEC()_AB()_LUT_ACCESS[MODE]. */
        uint64_t vld                   : 1;  /**< [  1:  1](RO/H) LUT read entry is valid when set.
                                                                 See also EDEC()_AB()_LUT_ACCESS[MODE]. */
        uint64_t en                    : 1;  /**< [  0:  0](WO) Causes hardware to look-up LUT at EDEC()_AB()_LUT_RND_READ_CMD[FLOW_ID] */
#else /* Word 0 - Little Endian */
        uint64_t en                    : 1;  /**< [  0:  0](WO) Causes hardware to look-up LUT at EDEC()_AB()_LUT_RND_READ_CMD[FLOW_ID] */
        uint64_t vld                   : 1;  /**< [  1:  1](RO/H) LUT read entry is valid when set.
                                                                 See also EDEC()_AB()_LUT_ACCESS[MODE]. */
        uint64_t flow_id               : 10; /**< [ 11:  2](R/W) LUT access FLOW_ID. See also EDEC()_AB()_LUT_ACCESS[MODE]. */
        uint64_t reserved_12_63        : 52;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_edecx_abx_lut_rnd_read_cmd_s cn; */
};
typedef union cavm_edecx_abx_lut_rnd_read_cmd cavm_edecx_abx_lut_rnd_read_cmd_t;

static inline uint64_t CAVM_EDECX_ABX_LUT_RND_READ_CMD(uint64_t a, uint64_t b) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_EDECX_ABX_LUT_RND_READ_CMD(uint64_t a, uint64_t b)
{
    if (cavm_is_model(OCTEONTX_CNF20KA) && ((a<=2) && (b<=1)))
        return 0x87e040400110ll + 0x80000ll * ((a) & 0x3) + 0x10000ll * ((b) & 0x1);
    __cavm_csr_fatal("EDECX_ABX_LUT_RND_READ_CMD", 2, a, b, 0, 0, 0, 0);
}

#define typedef_CAVM_EDECX_ABX_LUT_RND_READ_CMD(a,b) cavm_edecx_abx_lut_rnd_read_cmd_t
#define bustype_CAVM_EDECX_ABX_LUT_RND_READ_CMD(a,b) CSR_TYPE_RSL
#define basename_CAVM_EDECX_ABX_LUT_RND_READ_CMD(a,b) "EDECX_ABX_LUT_RND_READ_CMD"
#define device_bar_CAVM_EDECX_ABX_LUT_RND_READ_CMD(a,b) 0x2 /* PF_BAR2 */
#define busnum_CAVM_EDECX_ABX_LUT_RND_READ_CMD(a,b) (a)
#define arguments_CAVM_EDECX_ABX_LUT_RND_READ_CMD(a,b) (a),(b),-1,-1

/**
 * Register (RSL) edec#_ab#_lut_rnd_read_data0
 *
 * EDEC LUT Random Read Data Register0
 * Register used for randomly reading LUT data.
 */
union cavm_edecx_abx_lut_rnd_read_data0
{
    uint64_t u;
    struct cavm_edecx_abx_lut_rnd_read_data0_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t data                  : 64; /**< [ 63:  0](RO/H) Value read from LUT. See also EDEC()_AB()_LUT_ACCESS[MODE].
                                                                 Formatted according to EDEC_LUT_CSR0_S. */
#else /* Word 0 - Little Endian */
        uint64_t data                  : 64; /**< [ 63:  0](RO/H) Value read from LUT. See also EDEC()_AB()_LUT_ACCESS[MODE].
                                                                 Formatted according to EDEC_LUT_CSR0_S. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_edecx_abx_lut_rnd_read_data0_s cn; */
};
typedef union cavm_edecx_abx_lut_rnd_read_data0 cavm_edecx_abx_lut_rnd_read_data0_t;

static inline uint64_t CAVM_EDECX_ABX_LUT_RND_READ_DATA0(uint64_t a, uint64_t b) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_EDECX_ABX_LUT_RND_READ_DATA0(uint64_t a, uint64_t b)
{
    if (cavm_is_model(OCTEONTX_CNF20KA) && ((a<=2) && (b<=1)))
        return 0x87e040400118ll + 0x80000ll * ((a) & 0x3) + 0x10000ll * ((b) & 0x1);
    __cavm_csr_fatal("EDECX_ABX_LUT_RND_READ_DATA0", 2, a, b, 0, 0, 0, 0);
}

#define typedef_CAVM_EDECX_ABX_LUT_RND_READ_DATA0(a,b) cavm_edecx_abx_lut_rnd_read_data0_t
#define bustype_CAVM_EDECX_ABX_LUT_RND_READ_DATA0(a,b) CSR_TYPE_RSL
#define basename_CAVM_EDECX_ABX_LUT_RND_READ_DATA0(a,b) "EDECX_ABX_LUT_RND_READ_DATA0"
#define device_bar_CAVM_EDECX_ABX_LUT_RND_READ_DATA0(a,b) 0x2 /* PF_BAR2 */
#define busnum_CAVM_EDECX_ABX_LUT_RND_READ_DATA0(a,b) (a)
#define arguments_CAVM_EDECX_ABX_LUT_RND_READ_DATA0(a,b) (a),(b),-1,-1

/**
 * Register (RSL) edec#_ab#_lut_rnd_read_data1
 *
 * EDEC LUT Random Read Data Register1
 * Register used for randomly reading LUT data.
 */
union cavm_edecx_abx_lut_rnd_read_data1
{
    uint64_t u;
    struct cavm_edecx_abx_lut_rnd_read_data1_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t data                  : 64; /**< [ 63:  0](RO/H) Value read from LUT. See also EDEC()_AB()_LUT_ACCESS[MODE].
                                                                 Formatted according to EDEC_LUT_CSR1_S. */
#else /* Word 0 - Little Endian */
        uint64_t data                  : 64; /**< [ 63:  0](RO/H) Value read from LUT. See also EDEC()_AB()_LUT_ACCESS[MODE].
                                                                 Formatted according to EDEC_LUT_CSR1_S. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_edecx_abx_lut_rnd_read_data1_s cn; */
};
typedef union cavm_edecx_abx_lut_rnd_read_data1 cavm_edecx_abx_lut_rnd_read_data1_t;

static inline uint64_t CAVM_EDECX_ABX_LUT_RND_READ_DATA1(uint64_t a, uint64_t b) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_EDECX_ABX_LUT_RND_READ_DATA1(uint64_t a, uint64_t b)
{
    if (cavm_is_model(OCTEONTX_CNF20KA) && ((a<=2) && (b<=1)))
        return 0x87e040400120ll + 0x80000ll * ((a) & 0x3) + 0x10000ll * ((b) & 0x1);
    __cavm_csr_fatal("EDECX_ABX_LUT_RND_READ_DATA1", 2, a, b, 0, 0, 0, 0);
}

#define typedef_CAVM_EDECX_ABX_LUT_RND_READ_DATA1(a,b) cavm_edecx_abx_lut_rnd_read_data1_t
#define bustype_CAVM_EDECX_ABX_LUT_RND_READ_DATA1(a,b) CSR_TYPE_RSL
#define basename_CAVM_EDECX_ABX_LUT_RND_READ_DATA1(a,b) "EDECX_ABX_LUT_RND_READ_DATA1"
#define device_bar_CAVM_EDECX_ABX_LUT_RND_READ_DATA1(a,b) 0x2 /* PF_BAR2 */
#define busnum_CAVM_EDECX_ABX_LUT_RND_READ_DATA1(a,b) (a)
#define arguments_CAVM_EDECX_ABX_LUT_RND_READ_DATA1(a,b) (a),(b),-1,-1

/**
 * Register (RSL) edec#_ab#_lut_rnd_read_data2
 *
 * EDEC LUT Random Read Data Register2
 * Register used for randomly reading LUT data.
 */
union cavm_edecx_abx_lut_rnd_read_data2
{
    uint64_t u;
    struct cavm_edecx_abx_lut_rnd_read_data2_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t data                  : 64; /**< [ 63:  0](RO/H) Value read from LUT. See also EDEC()_AB()_LUT_ACCESS[MODE].
                                                                 Formatted according to EDEC_LUT_CSR2_S. */
#else /* Word 0 - Little Endian */
        uint64_t data                  : 64; /**< [ 63:  0](RO/H) Value read from LUT. See also EDEC()_AB()_LUT_ACCESS[MODE].
                                                                 Formatted according to EDEC_LUT_CSR2_S. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_edecx_abx_lut_rnd_read_data2_s cn; */
};
typedef union cavm_edecx_abx_lut_rnd_read_data2 cavm_edecx_abx_lut_rnd_read_data2_t;

static inline uint64_t CAVM_EDECX_ABX_LUT_RND_READ_DATA2(uint64_t a, uint64_t b) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_EDECX_ABX_LUT_RND_READ_DATA2(uint64_t a, uint64_t b)
{
    if (cavm_is_model(OCTEONTX_CNF20KA) && ((a<=2) && (b<=1)))
        return 0x87e040400128ll + 0x80000ll * ((a) & 0x3) + 0x10000ll * ((b) & 0x1);
    __cavm_csr_fatal("EDECX_ABX_LUT_RND_READ_DATA2", 2, a, b, 0, 0, 0, 0);
}

#define typedef_CAVM_EDECX_ABX_LUT_RND_READ_DATA2(a,b) cavm_edecx_abx_lut_rnd_read_data2_t
#define bustype_CAVM_EDECX_ABX_LUT_RND_READ_DATA2(a,b) CSR_TYPE_RSL
#define basename_CAVM_EDECX_ABX_LUT_RND_READ_DATA2(a,b) "EDECX_ABX_LUT_RND_READ_DATA2"
#define device_bar_CAVM_EDECX_ABX_LUT_RND_READ_DATA2(a,b) 0x2 /* PF_BAR2 */
#define busnum_CAVM_EDECX_ABX_LUT_RND_READ_DATA2(a,b) (a)
#define arguments_CAVM_EDECX_ABX_LUT_RND_READ_DATA2(a,b) (a),(b),-1,-1

/**
 * Register (RSL) edec#_ab#_lut_rnd_read_data3
 *
 * EDEC LUT Random Read Data Register3
 * Register used for randomly reading LUT data.
 */
union cavm_edecx_abx_lut_rnd_read_data3
{
    uint64_t u;
    struct cavm_edecx_abx_lut_rnd_read_data3_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t data                  : 64; /**< [ 63:  0](RO/H) Value read from LUT. See also EDEC()_AB()_LUT_ACCESS[MODE].
                                                                 Formatted according to EDEC_LUT_CSR3_S. */
#else /* Word 0 - Little Endian */
        uint64_t data                  : 64; /**< [ 63:  0](RO/H) Value read from LUT. See also EDEC()_AB()_LUT_ACCESS[MODE].
                                                                 Formatted according to EDEC_LUT_CSR3_S. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_edecx_abx_lut_rnd_read_data3_s cn; */
};
typedef union cavm_edecx_abx_lut_rnd_read_data3 cavm_edecx_abx_lut_rnd_read_data3_t;

static inline uint64_t CAVM_EDECX_ABX_LUT_RND_READ_DATA3(uint64_t a, uint64_t b) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_EDECX_ABX_LUT_RND_READ_DATA3(uint64_t a, uint64_t b)
{
    if (cavm_is_model(OCTEONTX_CNF20KA) && ((a<=2) && (b<=1)))
        return 0x87e040400130ll + 0x80000ll * ((a) & 0x3) + 0x10000ll * ((b) & 0x1);
    __cavm_csr_fatal("EDECX_ABX_LUT_RND_READ_DATA3", 2, a, b, 0, 0, 0, 0);
}

#define typedef_CAVM_EDECX_ABX_LUT_RND_READ_DATA3(a,b) cavm_edecx_abx_lut_rnd_read_data3_t
#define bustype_CAVM_EDECX_ABX_LUT_RND_READ_DATA3(a,b) CSR_TYPE_RSL
#define basename_CAVM_EDECX_ABX_LUT_RND_READ_DATA3(a,b) "EDECX_ABX_LUT_RND_READ_DATA3"
#define device_bar_CAVM_EDECX_ABX_LUT_RND_READ_DATA3(a,b) 0x2 /* PF_BAR2 */
#define busnum_CAVM_EDECX_ABX_LUT_RND_READ_DATA3(a,b) (a)
#define arguments_CAVM_EDECX_ABX_LUT_RND_READ_DATA3(a,b) (a),(b),-1,-1

/**
 * Register (RSL) edec#_ab#_lut_rnd_read_data4
 *
 * EDEC LUT Random Read Data Register4
 * Register used for randomly reading LUT data.
 */
union cavm_edecx_abx_lut_rnd_read_data4
{
    uint64_t u;
    struct cavm_edecx_abx_lut_rnd_read_data4_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t data                  : 64; /**< [ 63:  0](RO/H) Value read from LUT. See also EDEC()_AB()_LUT_ACCESS[MODE].
                                                                 Formatted according to EDEC_LUT_CSR4_S. */
#else /* Word 0 - Little Endian */
        uint64_t data                  : 64; /**< [ 63:  0](RO/H) Value read from LUT. See also EDEC()_AB()_LUT_ACCESS[MODE].
                                                                 Formatted according to EDEC_LUT_CSR4_S. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_edecx_abx_lut_rnd_read_data4_s cn; */
};
typedef union cavm_edecx_abx_lut_rnd_read_data4 cavm_edecx_abx_lut_rnd_read_data4_t;

static inline uint64_t CAVM_EDECX_ABX_LUT_RND_READ_DATA4(uint64_t a, uint64_t b) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_EDECX_ABX_LUT_RND_READ_DATA4(uint64_t a, uint64_t b)
{
    if (cavm_is_model(OCTEONTX_CNF20KA) && ((a<=2) && (b<=1)))
        return 0x87e040400138ll + 0x80000ll * ((a) & 0x3) + 0x10000ll * ((b) & 0x1);
    __cavm_csr_fatal("EDECX_ABX_LUT_RND_READ_DATA4", 2, a, b, 0, 0, 0, 0);
}

#define typedef_CAVM_EDECX_ABX_LUT_RND_READ_DATA4(a,b) cavm_edecx_abx_lut_rnd_read_data4_t
#define bustype_CAVM_EDECX_ABX_LUT_RND_READ_DATA4(a,b) CSR_TYPE_RSL
#define basename_CAVM_EDECX_ABX_LUT_RND_READ_DATA4(a,b) "EDECX_ABX_LUT_RND_READ_DATA4"
#define device_bar_CAVM_EDECX_ABX_LUT_RND_READ_DATA4(a,b) 0x2 /* PF_BAR2 */
#define busnum_CAVM_EDECX_ABX_LUT_RND_READ_DATA4(a,b) (a)
#define arguments_CAVM_EDECX_ABX_LUT_RND_READ_DATA4(a,b) (a),(b),-1,-1

/**
 * Register (RSL) edec#_ab#_lut_rnd_write_cmd
 *
 * EDEC LUT Random Write Command Register
 * Register used for randomly writing LUT data.
 * LUT entries for FLOW_ID values corresponding to active jobs should
 * not be modified.
 * Modifying the LUT entry of an active job will cause unpredictable
 * behavior.
 */
union cavm_edecx_abx_lut_rnd_write_cmd
{
    uint64_t u;
    struct cavm_edecx_abx_lut_rnd_write_cmd_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_11_63        : 53;
        uint64_t flow_id               : 10; /**< [ 10:  1](R/W) LUT access FLOW_ID. See also EDEC()_AB()_LUT_ACCESS[MODE]. */
        uint64_t en                    : 1;  /**< [  0:  0](WO) Causes hardware to write LUT at EDEC()_AB()_LUT_RND_WRITE_CMD[FLOW_ID] with
                                                                 values in EDEC()_AB()_LUT_RND_WRITE_DATA0 ... EDEC()_AB()_LUT_RND_WRITE_DATA4.
                                                                 See also EDEC()_AB()_LUT_ACCESS[MODE]. */
#else /* Word 0 - Little Endian */
        uint64_t en                    : 1;  /**< [  0:  0](WO) Causes hardware to write LUT at EDEC()_AB()_LUT_RND_WRITE_CMD[FLOW_ID] with
                                                                 values in EDEC()_AB()_LUT_RND_WRITE_DATA0 ... EDEC()_AB()_LUT_RND_WRITE_DATA4.
                                                                 See also EDEC()_AB()_LUT_ACCESS[MODE]. */
        uint64_t flow_id               : 10; /**< [ 10:  1](R/W) LUT access FLOW_ID. See also EDEC()_AB()_LUT_ACCESS[MODE]. */
        uint64_t reserved_11_63        : 53;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_edecx_abx_lut_rnd_write_cmd_s cn; */
};
typedef union cavm_edecx_abx_lut_rnd_write_cmd cavm_edecx_abx_lut_rnd_write_cmd_t;

static inline uint64_t CAVM_EDECX_ABX_LUT_RND_WRITE_CMD(uint64_t a, uint64_t b) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_EDECX_ABX_LUT_RND_WRITE_CMD(uint64_t a, uint64_t b)
{
    if (cavm_is_model(OCTEONTX_CNF20KA) && ((a<=2) && (b<=1)))
        return 0x87e040400140ll + 0x80000ll * ((a) & 0x3) + 0x10000ll * ((b) & 0x1);
    __cavm_csr_fatal("EDECX_ABX_LUT_RND_WRITE_CMD", 2, a, b, 0, 0, 0, 0);
}

#define typedef_CAVM_EDECX_ABX_LUT_RND_WRITE_CMD(a,b) cavm_edecx_abx_lut_rnd_write_cmd_t
#define bustype_CAVM_EDECX_ABX_LUT_RND_WRITE_CMD(a,b) CSR_TYPE_RSL
#define basename_CAVM_EDECX_ABX_LUT_RND_WRITE_CMD(a,b) "EDECX_ABX_LUT_RND_WRITE_CMD"
#define device_bar_CAVM_EDECX_ABX_LUT_RND_WRITE_CMD(a,b) 0x2 /* PF_BAR2 */
#define busnum_CAVM_EDECX_ABX_LUT_RND_WRITE_CMD(a,b) (a)
#define arguments_CAVM_EDECX_ABX_LUT_RND_WRITE_CMD(a,b) (a),(b),-1,-1

/**
 * Register (RSL) edec#_ab#_lut_rnd_write_data0
 *
 * EDEC LUT Random Write Data Register0
 * Register used for randomly writing LUT data.
 */
union cavm_edecx_abx_lut_rnd_write_data0
{
    uint64_t u;
    struct cavm_edecx_abx_lut_rnd_write_data0_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t data                  : 64; /**< [ 63:  0](R/W) Value written to LUT. See also EDEC()_AB()_LUT_ACCESS[MODE].
                                                                 Formatted according to EDEC_LUT_CSR0_S. */
#else /* Word 0 - Little Endian */
        uint64_t data                  : 64; /**< [ 63:  0](R/W) Value written to LUT. See also EDEC()_AB()_LUT_ACCESS[MODE].
                                                                 Formatted according to EDEC_LUT_CSR0_S. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_edecx_abx_lut_rnd_write_data0_s cn; */
};
typedef union cavm_edecx_abx_lut_rnd_write_data0 cavm_edecx_abx_lut_rnd_write_data0_t;

static inline uint64_t CAVM_EDECX_ABX_LUT_RND_WRITE_DATA0(uint64_t a, uint64_t b) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_EDECX_ABX_LUT_RND_WRITE_DATA0(uint64_t a, uint64_t b)
{
    if (cavm_is_model(OCTEONTX_CNF20KA) && ((a<=2) && (b<=1)))
        return 0x87e040400148ll + 0x80000ll * ((a) & 0x3) + 0x10000ll * ((b) & 0x1);
    __cavm_csr_fatal("EDECX_ABX_LUT_RND_WRITE_DATA0", 2, a, b, 0, 0, 0, 0);
}

#define typedef_CAVM_EDECX_ABX_LUT_RND_WRITE_DATA0(a,b) cavm_edecx_abx_lut_rnd_write_data0_t
#define bustype_CAVM_EDECX_ABX_LUT_RND_WRITE_DATA0(a,b) CSR_TYPE_RSL
#define basename_CAVM_EDECX_ABX_LUT_RND_WRITE_DATA0(a,b) "EDECX_ABX_LUT_RND_WRITE_DATA0"
#define device_bar_CAVM_EDECX_ABX_LUT_RND_WRITE_DATA0(a,b) 0x2 /* PF_BAR2 */
#define busnum_CAVM_EDECX_ABX_LUT_RND_WRITE_DATA0(a,b) (a)
#define arguments_CAVM_EDECX_ABX_LUT_RND_WRITE_DATA0(a,b) (a),(b),-1,-1

/**
 * Register (RSL) edec#_ab#_lut_rnd_write_data1
 *
 * EDEC LUT Random Write Data Register1
 * Register used for randomly writing LUT data.
 */
union cavm_edecx_abx_lut_rnd_write_data1
{
    uint64_t u;
    struct cavm_edecx_abx_lut_rnd_write_data1_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t data                  : 64; /**< [ 63:  0](R/W) Value written to LUT. See also EDEC()_AB()_LUT_ACCESS[MODE].
                                                                 Formatted according to EDEC_LUT_CSR1_S. */
#else /* Word 0 - Little Endian */
        uint64_t data                  : 64; /**< [ 63:  0](R/W) Value written to LUT. See also EDEC()_AB()_LUT_ACCESS[MODE].
                                                                 Formatted according to EDEC_LUT_CSR1_S. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_edecx_abx_lut_rnd_write_data1_s cn; */
};
typedef union cavm_edecx_abx_lut_rnd_write_data1 cavm_edecx_abx_lut_rnd_write_data1_t;

static inline uint64_t CAVM_EDECX_ABX_LUT_RND_WRITE_DATA1(uint64_t a, uint64_t b) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_EDECX_ABX_LUT_RND_WRITE_DATA1(uint64_t a, uint64_t b)
{
    if (cavm_is_model(OCTEONTX_CNF20KA) && ((a<=2) && (b<=1)))
        return 0x87e040400150ll + 0x80000ll * ((a) & 0x3) + 0x10000ll * ((b) & 0x1);
    __cavm_csr_fatal("EDECX_ABX_LUT_RND_WRITE_DATA1", 2, a, b, 0, 0, 0, 0);
}

#define typedef_CAVM_EDECX_ABX_LUT_RND_WRITE_DATA1(a,b) cavm_edecx_abx_lut_rnd_write_data1_t
#define bustype_CAVM_EDECX_ABX_LUT_RND_WRITE_DATA1(a,b) CSR_TYPE_RSL
#define basename_CAVM_EDECX_ABX_LUT_RND_WRITE_DATA1(a,b) "EDECX_ABX_LUT_RND_WRITE_DATA1"
#define device_bar_CAVM_EDECX_ABX_LUT_RND_WRITE_DATA1(a,b) 0x2 /* PF_BAR2 */
#define busnum_CAVM_EDECX_ABX_LUT_RND_WRITE_DATA1(a,b) (a)
#define arguments_CAVM_EDECX_ABX_LUT_RND_WRITE_DATA1(a,b) (a),(b),-1,-1

/**
 * Register (RSL) edec#_ab#_lut_rnd_write_data2
 *
 * EDEC LUT Random Write Data Register2
 * Register used for randomly writing LUT data.
 */
union cavm_edecx_abx_lut_rnd_write_data2
{
    uint64_t u;
    struct cavm_edecx_abx_lut_rnd_write_data2_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t data                  : 64; /**< [ 63:  0](R/W) Value written to LUT. See also EDEC()_AB()_LUT_ACCESS[MODE].
                                                                 Formatted according to EDEC_LUT_CSR2_S. */
#else /* Word 0 - Little Endian */
        uint64_t data                  : 64; /**< [ 63:  0](R/W) Value written to LUT. See also EDEC()_AB()_LUT_ACCESS[MODE].
                                                                 Formatted according to EDEC_LUT_CSR2_S. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_edecx_abx_lut_rnd_write_data2_s cn; */
};
typedef union cavm_edecx_abx_lut_rnd_write_data2 cavm_edecx_abx_lut_rnd_write_data2_t;

static inline uint64_t CAVM_EDECX_ABX_LUT_RND_WRITE_DATA2(uint64_t a, uint64_t b) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_EDECX_ABX_LUT_RND_WRITE_DATA2(uint64_t a, uint64_t b)
{
    if (cavm_is_model(OCTEONTX_CNF20KA) && ((a<=2) && (b<=1)))
        return 0x87e040400158ll + 0x80000ll * ((a) & 0x3) + 0x10000ll * ((b) & 0x1);
    __cavm_csr_fatal("EDECX_ABX_LUT_RND_WRITE_DATA2", 2, a, b, 0, 0, 0, 0);
}

#define typedef_CAVM_EDECX_ABX_LUT_RND_WRITE_DATA2(a,b) cavm_edecx_abx_lut_rnd_write_data2_t
#define bustype_CAVM_EDECX_ABX_LUT_RND_WRITE_DATA2(a,b) CSR_TYPE_RSL
#define basename_CAVM_EDECX_ABX_LUT_RND_WRITE_DATA2(a,b) "EDECX_ABX_LUT_RND_WRITE_DATA2"
#define device_bar_CAVM_EDECX_ABX_LUT_RND_WRITE_DATA2(a,b) 0x2 /* PF_BAR2 */
#define busnum_CAVM_EDECX_ABX_LUT_RND_WRITE_DATA2(a,b) (a)
#define arguments_CAVM_EDECX_ABX_LUT_RND_WRITE_DATA2(a,b) (a),(b),-1,-1

/**
 * Register (RSL) edec#_ab#_lut_rnd_write_data3
 *
 * EDEC LUT Random Write Data Register3
 * Register used for randomly writing LUT data.
 */
union cavm_edecx_abx_lut_rnd_write_data3
{
    uint64_t u;
    struct cavm_edecx_abx_lut_rnd_write_data3_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t data                  : 64; /**< [ 63:  0](R/W) Value written to LUT. See also EDEC()_AB()_LUT_ACCESS[MODE].
                                                                 Formatted according to EDEC_LUT_CSR3_S. */
#else /* Word 0 - Little Endian */
        uint64_t data                  : 64; /**< [ 63:  0](R/W) Value written to LUT. See also EDEC()_AB()_LUT_ACCESS[MODE].
                                                                 Formatted according to EDEC_LUT_CSR3_S. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_edecx_abx_lut_rnd_write_data3_s cn; */
};
typedef union cavm_edecx_abx_lut_rnd_write_data3 cavm_edecx_abx_lut_rnd_write_data3_t;

static inline uint64_t CAVM_EDECX_ABX_LUT_RND_WRITE_DATA3(uint64_t a, uint64_t b) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_EDECX_ABX_LUT_RND_WRITE_DATA3(uint64_t a, uint64_t b)
{
    if (cavm_is_model(OCTEONTX_CNF20KA) && ((a<=2) && (b<=1)))
        return 0x87e040400160ll + 0x80000ll * ((a) & 0x3) + 0x10000ll * ((b) & 0x1);
    __cavm_csr_fatal("EDECX_ABX_LUT_RND_WRITE_DATA3", 2, a, b, 0, 0, 0, 0);
}

#define typedef_CAVM_EDECX_ABX_LUT_RND_WRITE_DATA3(a,b) cavm_edecx_abx_lut_rnd_write_data3_t
#define bustype_CAVM_EDECX_ABX_LUT_RND_WRITE_DATA3(a,b) CSR_TYPE_RSL
#define basename_CAVM_EDECX_ABX_LUT_RND_WRITE_DATA3(a,b) "EDECX_ABX_LUT_RND_WRITE_DATA3"
#define device_bar_CAVM_EDECX_ABX_LUT_RND_WRITE_DATA3(a,b) 0x2 /* PF_BAR2 */
#define busnum_CAVM_EDECX_ABX_LUT_RND_WRITE_DATA3(a,b) (a)
#define arguments_CAVM_EDECX_ABX_LUT_RND_WRITE_DATA3(a,b) (a),(b),-1,-1

/**
 * Register (RSL) edec#_ab#_lut_rnd_write_data4
 *
 * EDEC LUT Random Write Data Register4
 * Register used for randomly writing LUT data.
 */
union cavm_edecx_abx_lut_rnd_write_data4
{
    uint64_t u;
    struct cavm_edecx_abx_lut_rnd_write_data4_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t data                  : 64; /**< [ 63:  0](R/W) Value written to LUT. See also EDEC()_AB()_LUT_ACCESS[MODE].
                                                                 Formatted according to EDEC_LUT_CSR4_S. */
#else /* Word 0 - Little Endian */
        uint64_t data                  : 64; /**< [ 63:  0](R/W) Value written to LUT. See also EDEC()_AB()_LUT_ACCESS[MODE].
                                                                 Formatted according to EDEC_LUT_CSR4_S. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_edecx_abx_lut_rnd_write_data4_s cn; */
};
typedef union cavm_edecx_abx_lut_rnd_write_data4 cavm_edecx_abx_lut_rnd_write_data4_t;

static inline uint64_t CAVM_EDECX_ABX_LUT_RND_WRITE_DATA4(uint64_t a, uint64_t b) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_EDECX_ABX_LUT_RND_WRITE_DATA4(uint64_t a, uint64_t b)
{
    if (cavm_is_model(OCTEONTX_CNF20KA) && ((a<=2) && (b<=1)))
        return 0x87e040400168ll + 0x80000ll * ((a) & 0x3) + 0x10000ll * ((b) & 0x1);
    __cavm_csr_fatal("EDECX_ABX_LUT_RND_WRITE_DATA4", 2, a, b, 0, 0, 0, 0);
}

#define typedef_CAVM_EDECX_ABX_LUT_RND_WRITE_DATA4(a,b) cavm_edecx_abx_lut_rnd_write_data4_t
#define bustype_CAVM_EDECX_ABX_LUT_RND_WRITE_DATA4(a,b) CSR_TYPE_RSL
#define basename_CAVM_EDECX_ABX_LUT_RND_WRITE_DATA4(a,b) "EDECX_ABX_LUT_RND_WRITE_DATA4"
#define device_bar_CAVM_EDECX_ABX_LUT_RND_WRITE_DATA4(a,b) 0x2 /* PF_BAR2 */
#define busnum_CAVM_EDECX_ABX_LUT_RND_WRITE_DATA4(a,b) (a)
#define arguments_CAVM_EDECX_ABX_LUT_RND_WRITE_DATA4(a,b) (a),(b),-1,-1

/**
 * Register (RSL) edec#_ab#_nocomp_user_exp_high
 *
 * EDEC NOCOMP FXP User Exponent for IqWidth 9..16 Register
 */
union cavm_edecx_abx_nocomp_user_exp_high
{
    uint64_t u;
    struct cavm_edecx_abx_nocomp_user_exp_high_s
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
        uint64_t user_exp8             : 5;  /**< [  4:  0](R/W) NOCOMP FXP user exp for IqWidth 8. Legal values [-15..15] */
#else /* Word 0 - Little Endian */
        uint64_t user_exp8             : 5;  /**< [  4:  0](R/W) NOCOMP FXP user exp for IqWidth 8. Legal values [-15..15] */
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
    /* struct cavm_edecx_abx_nocomp_user_exp_high_s cn; */
};
typedef union cavm_edecx_abx_nocomp_user_exp_high cavm_edecx_abx_nocomp_user_exp_high_t;

static inline uint64_t CAVM_EDECX_ABX_NOCOMP_USER_EXP_HIGH(uint64_t a, uint64_t b) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_EDECX_ABX_NOCOMP_USER_EXP_HIGH(uint64_t a, uint64_t b)
{
    if (cavm_is_model(OCTEONTX_CNF20KA) && ((a<=2) && (b<=1)))
        return 0x87e040400228ll + 0x80000ll * ((a) & 0x3) + 0x10000ll * ((b) & 0x1);
    __cavm_csr_fatal("EDECX_ABX_NOCOMP_USER_EXP_HIGH", 2, a, b, 0, 0, 0, 0);
}

#define typedef_CAVM_EDECX_ABX_NOCOMP_USER_EXP_HIGH(a,b) cavm_edecx_abx_nocomp_user_exp_high_t
#define bustype_CAVM_EDECX_ABX_NOCOMP_USER_EXP_HIGH(a,b) CSR_TYPE_RSL
#define basename_CAVM_EDECX_ABX_NOCOMP_USER_EXP_HIGH(a,b) "EDECX_ABX_NOCOMP_USER_EXP_HIGH"
#define device_bar_CAVM_EDECX_ABX_NOCOMP_USER_EXP_HIGH(a,b) 0x2 /* PF_BAR2 */
#define busnum_CAVM_EDECX_ABX_NOCOMP_USER_EXP_HIGH(a,b) (a)
#define arguments_CAVM_EDECX_ABX_NOCOMP_USER_EXP_HIGH(a,b) (a),(b),-1,-1

/**
 * Register (RSL) edec#_ab#_nocomp_user_exp_low
 *
 * EDEC NOCOMP FXP User Exponent for IqWidth 1..8 Register
 */
union cavm_edecx_abx_nocomp_user_exp_low
{
    uint64_t u;
    struct cavm_edecx_abx_nocomp_user_exp_low_s
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
    /* struct cavm_edecx_abx_nocomp_user_exp_low_s cn; */
};
typedef union cavm_edecx_abx_nocomp_user_exp_low cavm_edecx_abx_nocomp_user_exp_low_t;

static inline uint64_t CAVM_EDECX_ABX_NOCOMP_USER_EXP_LOW(uint64_t a, uint64_t b) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_EDECX_ABX_NOCOMP_USER_EXP_LOW(uint64_t a, uint64_t b)
{
    if (cavm_is_model(OCTEONTX_CNF20KA) && ((a<=2) && (b<=1)))
        return 0x87e040400220ll + 0x80000ll * ((a) & 0x3) + 0x10000ll * ((b) & 0x1);
    __cavm_csr_fatal("EDECX_ABX_NOCOMP_USER_EXP_LOW", 2, a, b, 0, 0, 0, 0);
}

#define typedef_CAVM_EDECX_ABX_NOCOMP_USER_EXP_LOW(a,b) cavm_edecx_abx_nocomp_user_exp_low_t
#define bustype_CAVM_EDECX_ABX_NOCOMP_USER_EXP_LOW(a,b) CSR_TYPE_RSL
#define basename_CAVM_EDECX_ABX_NOCOMP_USER_EXP_LOW(a,b) "EDECX_ABX_NOCOMP_USER_EXP_LOW"
#define device_bar_CAVM_EDECX_ABX_NOCOMP_USER_EXP_LOW(a,b) 0x2 /* PF_BAR2 */
#define busnum_CAVM_EDECX_ABX_NOCOMP_USER_EXP_LOW(a,b) (a)
#define arguments_CAVM_EDECX_ABX_NOCOMP_USER_EXP_LOW(a,b) (a),(b),-1,-1

/**
 * Register (RSL) edec#_ab#_prb_ddr_max_addr
 *
 * EDEC PRB Maximum Address Register
 * This register contains the top of the address range usable for
 * PRB data writes to DDR.
 */
union cavm_edecx_abx_prb_ddr_max_addr
{
    uint64_t u;
    struct cavm_edecx_abx_prb_ddr_max_addr_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_53_63        : 11;
        uint64_t addr                  : 53; /**< [ 52:  0](R/W) Highest address at which EDEC may write PRB data to DDR. Bottom 4
                                                                 bits are ignored.
                                                                 Report error when EDEC attempts to write PRBs to an address \> [ADDR]. */
#else /* Word 0 - Little Endian */
        uint64_t addr                  : 53; /**< [ 52:  0](R/W) Highest address at which EDEC may write PRB data to DDR. Bottom 4
                                                                 bits are ignored.
                                                                 Report error when EDEC attempts to write PRBs to an address \> [ADDR]. */
        uint64_t reserved_53_63        : 11;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_edecx_abx_prb_ddr_max_addr_s cn; */
};
typedef union cavm_edecx_abx_prb_ddr_max_addr cavm_edecx_abx_prb_ddr_max_addr_t;

static inline uint64_t CAVM_EDECX_ABX_PRB_DDR_MAX_ADDR(uint64_t a, uint64_t b) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_EDECX_ABX_PRB_DDR_MAX_ADDR(uint64_t a, uint64_t b)
{
    if (cavm_is_model(OCTEONTX_CNF20KA) && ((a<=2) && (b<=1)))
        return 0x87e0404000c0ll + 0x80000ll * ((a) & 0x3) + 0x10000ll * ((b) & 0x1);
    __cavm_csr_fatal("EDECX_ABX_PRB_DDR_MAX_ADDR", 2, a, b, 0, 0, 0, 0);
}

#define typedef_CAVM_EDECX_ABX_PRB_DDR_MAX_ADDR(a,b) cavm_edecx_abx_prb_ddr_max_addr_t
#define bustype_CAVM_EDECX_ABX_PRB_DDR_MAX_ADDR(a,b) CSR_TYPE_RSL
#define basename_CAVM_EDECX_ABX_PRB_DDR_MAX_ADDR(a,b) "EDECX_ABX_PRB_DDR_MAX_ADDR"
#define device_bar_CAVM_EDECX_ABX_PRB_DDR_MAX_ADDR(a,b) 0x2 /* PF_BAR2 */
#define busnum_CAVM_EDECX_ABX_PRB_DDR_MAX_ADDR(a,b) (a)
#define arguments_CAVM_EDECX_ABX_PRB_DDR_MAX_ADDR(a,b) (a),(b),-1,-1

/**
 * Register (RSL) edec#_ab#_prb_ddr_min_addr
 *
 * EDEC PRB Minimum Address Register
 * This register contains the bottom of the address range usable for
 * PRB data writes to DDR.
 */
union cavm_edecx_abx_prb_ddr_min_addr
{
    uint64_t u;
    struct cavm_edecx_abx_prb_ddr_min_addr_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_53_63        : 11;
        uint64_t addr                  : 53; /**< [ 52:  0](R/W) Lowest address at which EDEC may write PRB data to DDR. Bottom 4
                                                                 bits are ignored.
                                                                 Report error when EDEC attempts to write PRBs to an address \< [ADDR]. */
#else /* Word 0 - Little Endian */
        uint64_t addr                  : 53; /**< [ 52:  0](R/W) Lowest address at which EDEC may write PRB data to DDR. Bottom 4
                                                                 bits are ignored.
                                                                 Report error when EDEC attempts to write PRBs to an address \< [ADDR]. */
        uint64_t reserved_53_63        : 11;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_edecx_abx_prb_ddr_min_addr_s cn; */
};
typedef union cavm_edecx_abx_prb_ddr_min_addr cavm_edecx_abx_prb_ddr_min_addr_t;

static inline uint64_t CAVM_EDECX_ABX_PRB_DDR_MIN_ADDR(uint64_t a, uint64_t b) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_EDECX_ABX_PRB_DDR_MIN_ADDR(uint64_t a, uint64_t b)
{
    if (cavm_is_model(OCTEONTX_CNF20KA) && ((a<=2) && (b<=1)))
        return 0x87e0404000b8ll + 0x80000ll * ((a) & 0x3) + 0x10000ll * ((b) & 0x1);
    __cavm_csr_fatal("EDECX_ABX_PRB_DDR_MIN_ADDR", 2, a, b, 0, 0, 0, 0);
}

#define typedef_CAVM_EDECX_ABX_PRB_DDR_MIN_ADDR(a,b) cavm_edecx_abx_prb_ddr_min_addr_t
#define bustype_CAVM_EDECX_ABX_PRB_DDR_MIN_ADDR(a,b) CSR_TYPE_RSL
#define basename_CAVM_EDECX_ABX_PRB_DDR_MIN_ADDR(a,b) "EDECX_ABX_PRB_DDR_MIN_ADDR"
#define device_bar_CAVM_EDECX_ABX_PRB_DDR_MIN_ADDR(a,b) 0x2 /* PF_BAR2 */
#define busnum_CAVM_EDECX_ABX_PRB_DDR_MIN_ADDR(a,b) (a)
#define arguments_CAVM_EDECX_ABX_PRB_DDR_MIN_ADDR(a,b) (a),(b),-1,-1

/**
 * Register (RSL) edec#_ab#_prb_smem_max_addr
 *
 * EDEC PRB Maximum Address Register
 * This register contains the top of the address range usable for
 * PRB data writes to SMEM.
 */
union cavm_edecx_abx_prb_smem_max_addr
{
    uint64_t u;
    struct cavm_edecx_abx_prb_smem_max_addr_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_26_63        : 38;
        uint64_t addr                  : 26; /**< [ 25:  0](R/W) Highest address at which EDEC may write PRB data to SMEM. Bottom 4
                                                                 bits are ignored.
                                                                 Report error when EDEC attempts to write PRBs to an address \> [ADDR]. */
#else /* Word 0 - Little Endian */
        uint64_t addr                  : 26; /**< [ 25:  0](R/W) Highest address at which EDEC may write PRB data to SMEM. Bottom 4
                                                                 bits are ignored.
                                                                 Report error when EDEC attempts to write PRBs to an address \> [ADDR]. */
        uint64_t reserved_26_63        : 38;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_edecx_abx_prb_smem_max_addr_s cn; */
};
typedef union cavm_edecx_abx_prb_smem_max_addr cavm_edecx_abx_prb_smem_max_addr_t;

static inline uint64_t CAVM_EDECX_ABX_PRB_SMEM_MAX_ADDR(uint64_t a, uint64_t b) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_EDECX_ABX_PRB_SMEM_MAX_ADDR(uint64_t a, uint64_t b)
{
    if (cavm_is_model(OCTEONTX_CNF20KA) && ((a<=2) && (b<=1)))
        return 0x87e0404000a0ll + 0x80000ll * ((a) & 0x3) + 0x10000ll * ((b) & 0x1);
    __cavm_csr_fatal("EDECX_ABX_PRB_SMEM_MAX_ADDR", 2, a, b, 0, 0, 0, 0);
}

#define typedef_CAVM_EDECX_ABX_PRB_SMEM_MAX_ADDR(a,b) cavm_edecx_abx_prb_smem_max_addr_t
#define bustype_CAVM_EDECX_ABX_PRB_SMEM_MAX_ADDR(a,b) CSR_TYPE_RSL
#define basename_CAVM_EDECX_ABX_PRB_SMEM_MAX_ADDR(a,b) "EDECX_ABX_PRB_SMEM_MAX_ADDR"
#define device_bar_CAVM_EDECX_ABX_PRB_SMEM_MAX_ADDR(a,b) 0x2 /* PF_BAR2 */
#define busnum_CAVM_EDECX_ABX_PRB_SMEM_MAX_ADDR(a,b) (a)
#define arguments_CAVM_EDECX_ABX_PRB_SMEM_MAX_ADDR(a,b) (a),(b),-1,-1

/**
 * Register (RSL) edec#_ab#_prb_smem_min_addr
 *
 * EDEC PRB Minimum Address Register
 * This register contains the bottom of the address range usable for
 * PRB data writes to SMEM.
 */
union cavm_edecx_abx_prb_smem_min_addr
{
    uint64_t u;
    struct cavm_edecx_abx_prb_smem_min_addr_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_26_63        : 38;
        uint64_t addr                  : 26; /**< [ 25:  0](R/W) Lowest address at which EDEC may write PRB data to SMEM. Bottom 4
                                                                 bits are ignored.
                                                                 Report error when EDEC attempts to write PRBs to an address \< [ADDR]. */
#else /* Word 0 - Little Endian */
        uint64_t addr                  : 26; /**< [ 25:  0](R/W) Lowest address at which EDEC may write PRB data to SMEM. Bottom 4
                                                                 bits are ignored.
                                                                 Report error when EDEC attempts to write PRBs to an address \< [ADDR]. */
        uint64_t reserved_26_63        : 38;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_edecx_abx_prb_smem_min_addr_s cn; */
};
typedef union cavm_edecx_abx_prb_smem_min_addr cavm_edecx_abx_prb_smem_min_addr_t;

static inline uint64_t CAVM_EDECX_ABX_PRB_SMEM_MIN_ADDR(uint64_t a, uint64_t b) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_EDECX_ABX_PRB_SMEM_MIN_ADDR(uint64_t a, uint64_t b)
{
    if (cavm_is_model(OCTEONTX_CNF20KA) && ((a<=2) && (b<=1)))
        return 0x87e040400098ll + 0x80000ll * ((a) & 0x3) + 0x10000ll * ((b) & 0x1);
    __cavm_csr_fatal("EDECX_ABX_PRB_SMEM_MIN_ADDR", 2, a, b, 0, 0, 0, 0);
}

#define typedef_CAVM_EDECX_ABX_PRB_SMEM_MIN_ADDR(a,b) cavm_edecx_abx_prb_smem_min_addr_t
#define bustype_CAVM_EDECX_ABX_PRB_SMEM_MIN_ADDR(a,b) CSR_TYPE_RSL
#define basename_CAVM_EDECX_ABX_PRB_SMEM_MIN_ADDR(a,b) "EDECX_ABX_PRB_SMEM_MIN_ADDR"
#define device_bar_CAVM_EDECX_ABX_PRB_SMEM_MIN_ADDR(a,b) 0x2 /* PF_BAR2 */
#define busnum_CAVM_EDECX_ABX_PRB_SMEM_MIN_ADDR(a,b) (a)
#define arguments_CAVM_EDECX_ABX_PRB_SMEM_MIN_ADDR(a,b) (a),(b),-1,-1

/**
 * Register (RSL) edec#_ab#_rfoe_err_drop_en
 *
 * EDEC RFOE Error Drop En Register
 */
union cavm_edecx_abx_rfoe_err_drop_en
{
    uint64_t u;
    struct cavm_edecx_abx_rfoe_err_drop_en_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_48_63        : 16;
        uint64_t mac_err_pkt_err       : 16; /**< [ 47: 32](R/W) Any set bit will cause the packet to drop if the corresponding encoded
                                                                 value is reported by RFOE_PSW_S[MAC_ERR_STS]\<3:0\>. */
        uint64_t mcs_exception_code_err : 32;/**< [ 31:  0](R/W) Any set bit will cause the packet to drop if the corresponding encoded
                                                                 value is reported by RFOE_PSW_S[MCS_ERR_STS]\<6:2\>. */
#else /* Word 0 - Little Endian */
        uint64_t mcs_exception_code_err : 32;/**< [ 31:  0](R/W) Any set bit will cause the packet to drop if the corresponding encoded
                                                                 value is reported by RFOE_PSW_S[MCS_ERR_STS]\<6:2\>. */
        uint64_t mac_err_pkt_err       : 16; /**< [ 47: 32](R/W) Any set bit will cause the packet to drop if the corresponding encoded
                                                                 value is reported by RFOE_PSW_S[MAC_ERR_STS]\<3:0\>. */
        uint64_t reserved_48_63        : 16;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_edecx_abx_rfoe_err_drop_en_s cn; */
};
typedef union cavm_edecx_abx_rfoe_err_drop_en cavm_edecx_abx_rfoe_err_drop_en_t;

static inline uint64_t CAVM_EDECX_ABX_RFOE_ERR_DROP_EN(uint64_t a, uint64_t b) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_EDECX_ABX_RFOE_ERR_DROP_EN(uint64_t a, uint64_t b)
{
    if (cavm_is_model(OCTEONTX_CNF20KA) && ((a<=2) && (b<=1)))
        return 0x87e040400070ll + 0x80000ll * ((a) & 0x3) + 0x10000ll * ((b) & 0x1);
    __cavm_csr_fatal("EDECX_ABX_RFOE_ERR_DROP_EN", 2, a, b, 0, 0, 0, 0);
}

#define typedef_CAVM_EDECX_ABX_RFOE_ERR_DROP_EN(a,b) cavm_edecx_abx_rfoe_err_drop_en_t
#define bustype_CAVM_EDECX_ABX_RFOE_ERR_DROP_EN(a,b) CSR_TYPE_RSL
#define basename_CAVM_EDECX_ABX_RFOE_ERR_DROP_EN(a,b) "EDECX_ABX_RFOE_ERR_DROP_EN"
#define device_bar_CAVM_EDECX_ABX_RFOE_ERR_DROP_EN(a,b) 0x2 /* PF_BAR2 */
#define busnum_CAVM_EDECX_ABX_RFOE_ERR_DROP_EN(a,b) (a)
#define arguments_CAVM_EDECX_ABX_RFOE_ERR_DROP_EN(a,b) (a),(b),-1,-1

/**
 * Register (RSL) edec#_ab#_rx#_early
 *
 * EDEC RX Window Early Count Registers
 */
union cavm_edecx_abx_rxx_early
{
    uint64_t u;
    struct cavm_edecx_abx_rxx_early_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_32_63        : 32;
        uint64_t cnt                   : 32; /**< [ 31:  0](R/W/H) The number of inbound U-Plane (eCPRI type 0) messages which were detected
                                                                 to have arrived before the start of their designated receive window time.
                                                                 EDEC_LUT_CSR0_S[RX_WND_IDX] defines which counter to increment out of the array. */
#else /* Word 0 - Little Endian */
        uint64_t cnt                   : 32; /**< [ 31:  0](R/W/H) The number of inbound U-Plane (eCPRI type 0) messages which were detected
                                                                 to have arrived before the start of their designated receive window time.
                                                                 EDEC_LUT_CSR0_S[RX_WND_IDX] defines which counter to increment out of the array. */
        uint64_t reserved_32_63        : 32;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_edecx_abx_rxx_early_s cn; */
};
typedef union cavm_edecx_abx_rxx_early cavm_edecx_abx_rxx_early_t;

static inline uint64_t CAVM_EDECX_ABX_RXX_EARLY(uint64_t a, uint64_t b, uint64_t c) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_EDECX_ABX_RXX_EARLY(uint64_t a, uint64_t b, uint64_t c)
{
    if (cavm_is_model(OCTEONTX_CNF20KA) && ((a<=2) && (b<=1) && (c<=15)))
        return 0x87e040400500ll + 0x80000ll * ((a) & 0x3) + 0x10000ll * ((b) & 0x1) + 8ll * ((c) & 0xf);
    __cavm_csr_fatal("EDECX_ABX_RXX_EARLY", 3, a, b, c, 0, 0, 0);
}

#define typedef_CAVM_EDECX_ABX_RXX_EARLY(a,b,c) cavm_edecx_abx_rxx_early_t
#define bustype_CAVM_EDECX_ABX_RXX_EARLY(a,b,c) CSR_TYPE_RSL
#define basename_CAVM_EDECX_ABX_RXX_EARLY(a,b,c) "EDECX_ABX_RXX_EARLY"
#define device_bar_CAVM_EDECX_ABX_RXX_EARLY(a,b,c) 0x2 /* PF_BAR2 */
#define busnum_CAVM_EDECX_ABX_RXX_EARLY(a,b,c) (a)
#define arguments_CAVM_EDECX_ABX_RXX_EARLY(a,b,c) (a),(b),(c),-1

/**
 * Register (RSL) edec#_ab#_rx#_late
 *
 * EDEC RX Window Late Count Registers
 */
union cavm_edecx_abx_rxx_late
{
    uint64_t u;
    struct cavm_edecx_abx_rxx_late_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_32_63        : 32;
        uint64_t cnt                   : 32; /**< [ 31:  0](R/W/H) The number of inbound U-Plane (eCPRI type 0) messages which were detected
                                                                 to have arrived after the end of their designated receive window time.
                                                                 EDEC_LUT_CSR0_S[RX_WND_IDX] defines which counter to increment out of the array. */
#else /* Word 0 - Little Endian */
        uint64_t cnt                   : 32; /**< [ 31:  0](R/W/H) The number of inbound U-Plane (eCPRI type 0) messages which were detected
                                                                 to have arrived after the end of their designated receive window time.
                                                                 EDEC_LUT_CSR0_S[RX_WND_IDX] defines which counter to increment out of the array. */
        uint64_t reserved_32_63        : 32;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_edecx_abx_rxx_late_s cn; */
};
typedef union cavm_edecx_abx_rxx_late cavm_edecx_abx_rxx_late_t;

static inline uint64_t CAVM_EDECX_ABX_RXX_LATE(uint64_t a, uint64_t b, uint64_t c) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_EDECX_ABX_RXX_LATE(uint64_t a, uint64_t b, uint64_t c)
{
    if (cavm_is_model(OCTEONTX_CNF20KA) && ((a<=2) && (b<=1) && (c<=15)))
        return 0x87e040400600ll + 0x80000ll * ((a) & 0x3) + 0x10000ll * ((b) & 0x1) + 8ll * ((c) & 0xf);
    __cavm_csr_fatal("EDECX_ABX_RXX_LATE", 3, a, b, c, 0, 0, 0);
}

#define typedef_CAVM_EDECX_ABX_RXX_LATE(a,b,c) cavm_edecx_abx_rxx_late_t
#define bustype_CAVM_EDECX_ABX_RXX_LATE(a,b,c) CSR_TYPE_RSL
#define basename_CAVM_EDECX_ABX_RXX_LATE(a,b,c) "EDECX_ABX_RXX_LATE"
#define device_bar_CAVM_EDECX_ABX_RXX_LATE(a,b,c) 0x2 /* PF_BAR2 */
#define busnum_CAVM_EDECX_ABX_RXX_LATE(a,b,c) (a)
#define arguments_CAVM_EDECX_ABX_RXX_LATE(a,b,c) (a),(b),(c),-1

/**
 * Register (RSL) edec#_ab#_rx#_on_time
 *
 * EDEC RX Window On Time Count Registers
 */
union cavm_edecx_abx_rxx_on_time
{
    uint64_t u;
    struct cavm_edecx_abx_rxx_on_time_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_32_63        : 32;
        uint64_t cnt                   : 32; /**< [ 31:  0](R/W/H) The number of inbound U-Plane (eCPRI type 0) messages that arrived within
                                                                 the specified time window.
                                                                 EDEC_LUT_CSR0_S[RX_WND_IDX] defines which counter to increment out of the array. */
#else /* Word 0 - Little Endian */
        uint64_t cnt                   : 32; /**< [ 31:  0](R/W/H) The number of inbound U-Plane (eCPRI type 0) messages that arrived within
                                                                 the specified time window.
                                                                 EDEC_LUT_CSR0_S[RX_WND_IDX] defines which counter to increment out of the array. */
        uint64_t reserved_32_63        : 32;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_edecx_abx_rxx_on_time_s cn; */
};
typedef union cavm_edecx_abx_rxx_on_time cavm_edecx_abx_rxx_on_time_t;

static inline uint64_t CAVM_EDECX_ABX_RXX_ON_TIME(uint64_t a, uint64_t b, uint64_t c) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_EDECX_ABX_RXX_ON_TIME(uint64_t a, uint64_t b, uint64_t c)
{
    if (cavm_is_model(OCTEONTX_CNF20KA) && ((a<=2) && (b<=1) && (c<=15)))
        return 0x87e040400400ll + 0x80000ll * ((a) & 0x3) + 0x10000ll * ((b) & 0x1) + 8ll * ((c) & 0xf);
    __cavm_csr_fatal("EDECX_ABX_RXX_ON_TIME", 3, a, b, c, 0, 0, 0);
}

#define typedef_CAVM_EDECX_ABX_RXX_ON_TIME(a,b,c) cavm_edecx_abx_rxx_on_time_t
#define bustype_CAVM_EDECX_ABX_RXX_ON_TIME(a,b,c) CSR_TYPE_RSL
#define basename_CAVM_EDECX_ABX_RXX_ON_TIME(a,b,c) "EDECX_ABX_RXX_ON_TIME"
#define device_bar_CAVM_EDECX_ABX_RXX_ON_TIME(a,b,c) 0x2 /* PF_BAR2 */
#define busnum_CAVM_EDECX_ABX_RXX_ON_TIME(a,b,c) (a)
#define arguments_CAVM_EDECX_ABX_RXX_ON_TIME(a,b,c) (a),(b),(c),-1

/**
 * Register (RSL) edec#_ab#_rx_corrupt_cnt
 *
 * EDEC Packets With eCPRI Errors Count Registers
 */
union cavm_edecx_abx_rx_corrupt_cnt
{
    uint64_t u;
    struct cavm_edecx_abx_rx_corrupt_cnt_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t cnt                   : 64; /**< [ 63:  0](R/W/H) Protocol errors are defined as when eCPRI/1914.3/ORAN defined fields contain
                                                                 invalid values or indicate unsupported capabilities.
                                                                 1. Wrong reserved field values (Reserved != 0)
                                                                 2. Unexpected use of C bit (C = 1).
                                                                 3. Unconfigured or Unsupported udCompHdr setting.
                                                                    a) Invalid compression method   b) Invalid IQ width
                                                                 4. Wrong ecpriVersion and/or payloadVersion in timining headerinformation.
                                                                 5. Wrong ecpriMessage field does not contain 0, 2, or 5 (Message Type != 0).
                                                                 6. Wrong dataDirection in Timing header */
#else /* Word 0 - Little Endian */
        uint64_t cnt                   : 64; /**< [ 63:  0](R/W/H) Protocol errors are defined as when eCPRI/1914.3/ORAN defined fields contain
                                                                 invalid values or indicate unsupported capabilities.
                                                                 1. Wrong reserved field values (Reserved != 0)
                                                                 2. Unexpected use of C bit (C = 1).
                                                                 3. Unconfigured or Unsupported udCompHdr setting.
                                                                    a) Invalid compression method   b) Invalid IQ width
                                                                 4. Wrong ecpriVersion and/or payloadVersion in timining headerinformation.
                                                                 5. Wrong ecpriMessage field does not contain 0, 2, or 5 (Message Type != 0).
                                                                 6. Wrong dataDirection in Timing header */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_edecx_abx_rx_corrupt_cnt_s cn; */
};
typedef union cavm_edecx_abx_rx_corrupt_cnt cavm_edecx_abx_rx_corrupt_cnt_t;

static inline uint64_t CAVM_EDECX_ABX_RX_CORRUPT_CNT(uint64_t a, uint64_t b) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_EDECX_ABX_RX_CORRUPT_CNT(uint64_t a, uint64_t b)
{
    if (cavm_is_model(OCTEONTX_CNF20KA) && ((a<=2) && (b<=1)))
        return 0x87e040400170ll + 0x80000ll * ((a) & 0x3) + 0x10000ll * ((b) & 0x1);
    __cavm_csr_fatal("EDECX_ABX_RX_CORRUPT_CNT", 2, a, b, 0, 0, 0, 0);
}

#define typedef_CAVM_EDECX_ABX_RX_CORRUPT_CNT(a,b) cavm_edecx_abx_rx_corrupt_cnt_t
#define bustype_CAVM_EDECX_ABX_RX_CORRUPT_CNT(a,b) CSR_TYPE_RSL
#define basename_CAVM_EDECX_ABX_RX_CORRUPT_CNT(a,b) "EDECX_ABX_RX_CORRUPT_CNT"
#define device_bar_CAVM_EDECX_ABX_RX_CORRUPT_CNT(a,b) 0x2 /* PF_BAR2 */
#define busnum_CAVM_EDECX_ABX_RX_CORRUPT_CNT(a,b) (a)
#define arguments_CAVM_EDECX_ABX_RX_CORRUPT_CNT(a,b) (a),(b),-1,-1

/**
 * Register (RSL) edec#_ab#_rx_corrupt_cnt_en
 *
 * EDEC Error RX Corrupt Enable Register
 * Any set bit will enable incrementing EDEC()_AB()_RX_CORRUPT_CNT
 * when corresponding error occurs.
 */
union cavm_edecx_abx_rx_corrupt_cnt_en
{
    uint64_t u;
    struct cavm_edecx_abx_rx_corrupt_cnt_en_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_9_63         : 55;
        uint64_t rsvd_err              : 1;  /**< [  8:  8](R/W) Rx corrupt count enable for EDEC()_AB()_ERROR_STATUS[RSVD_ERR] */
        uint64_t data_dir_err          : 1;  /**< [  7:  7](R/W) Rx corrupt count enable for EDEC()_AB()_ERROR_STATUS[DATA_DIR_ERR] */
        uint64_t pyld_ver_err          : 1;  /**< [  6:  6](R/W) Rx corrupt count enable for EDEC()_AB()_ERROR_STATUS[PYLD_VER_ERR] */
        uint64_t sec_meth_err          : 1;  /**< [  5:  5](R/W) Rx corrupt count enable for EDEC()_AB()_ERROR_STATUS[SEC_METH_ERR] */
        uint64_t mod_iqw_err           : 1;  /**< [  4:  4](R/W) Rx corrupt count enable for EDEC()_AB()_ERROR_STATUS[MOD_IQW_ERR] */
        uint64_t ulaw_iqw_err          : 1;  /**< [  3:  3](R/W) Rx corrupt count enable for EDEC()_AB()_ERROR_STATUS[ULAW_IQW_ERR] */
        uint64_t num_prb_zero_but_start_prb_not : 1;/**< [  2:  2](R/W) Rx corrupt count enable for EDEC()_AB()_ERROR_STATUS[NUM_PRB_ZERO_BUT_START_PRB_NOT] */
        uint64_t sym_inc_not_zero      : 1;  /**< [  1:  1](R/W) Rx corrupt count enable for EDEC()_AB()_ERROR_STATUS[SYM_INC_NOT_ZERO] */
        uint64_t num_prb_zero_but_rb_not : 1;/**< [  0:  0](R/W) Rx corrupt count enable for EDEC()_AB()_ERROR_STATUS[NUM_PRB_ZERO_BUT_RB_NOT] */
#else /* Word 0 - Little Endian */
        uint64_t num_prb_zero_but_rb_not : 1;/**< [  0:  0](R/W) Rx corrupt count enable for EDEC()_AB()_ERROR_STATUS[NUM_PRB_ZERO_BUT_RB_NOT] */
        uint64_t sym_inc_not_zero      : 1;  /**< [  1:  1](R/W) Rx corrupt count enable for EDEC()_AB()_ERROR_STATUS[SYM_INC_NOT_ZERO] */
        uint64_t num_prb_zero_but_start_prb_not : 1;/**< [  2:  2](R/W) Rx corrupt count enable for EDEC()_AB()_ERROR_STATUS[NUM_PRB_ZERO_BUT_START_PRB_NOT] */
        uint64_t ulaw_iqw_err          : 1;  /**< [  3:  3](R/W) Rx corrupt count enable for EDEC()_AB()_ERROR_STATUS[ULAW_IQW_ERR] */
        uint64_t mod_iqw_err           : 1;  /**< [  4:  4](R/W) Rx corrupt count enable for EDEC()_AB()_ERROR_STATUS[MOD_IQW_ERR] */
        uint64_t sec_meth_err          : 1;  /**< [  5:  5](R/W) Rx corrupt count enable for EDEC()_AB()_ERROR_STATUS[SEC_METH_ERR] */
        uint64_t pyld_ver_err          : 1;  /**< [  6:  6](R/W) Rx corrupt count enable for EDEC()_AB()_ERROR_STATUS[PYLD_VER_ERR] */
        uint64_t data_dir_err          : 1;  /**< [  7:  7](R/W) Rx corrupt count enable for EDEC()_AB()_ERROR_STATUS[DATA_DIR_ERR] */
        uint64_t rsvd_err              : 1;  /**< [  8:  8](R/W) Rx corrupt count enable for EDEC()_AB()_ERROR_STATUS[RSVD_ERR] */
        uint64_t reserved_9_63         : 55;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_edecx_abx_rx_corrupt_cnt_en_s cn; */
};
typedef union cavm_edecx_abx_rx_corrupt_cnt_en cavm_edecx_abx_rx_corrupt_cnt_en_t;

static inline uint64_t CAVM_EDECX_ABX_RX_CORRUPT_CNT_EN(uint64_t a, uint64_t b) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_EDECX_ABX_RX_CORRUPT_CNT_EN(uint64_t a, uint64_t b)
{
    if (cavm_is_model(OCTEONTX_CNF20KA) && ((a<=2) && (b<=1)))
        return 0x87e040400058ll + 0x80000ll * ((a) & 0x3) + 0x10000ll * ((b) & 0x1);
    __cavm_csr_fatal("EDECX_ABX_RX_CORRUPT_CNT_EN", 2, a, b, 0, 0, 0, 0);
}

#define typedef_CAVM_EDECX_ABX_RX_CORRUPT_CNT_EN(a,b) cavm_edecx_abx_rx_corrupt_cnt_en_t
#define bustype_CAVM_EDECX_ABX_RX_CORRUPT_CNT_EN(a,b) CSR_TYPE_RSL
#define basename_CAVM_EDECX_ABX_RX_CORRUPT_CNT_EN(a,b) "EDECX_ABX_RX_CORRUPT_CNT_EN"
#define device_bar_CAVM_EDECX_ABX_RX_CORRUPT_CNT_EN(a,b) 0x2 /* PF_BAR2 */
#define busnum_CAVM_EDECX_ABX_RX_CORRUPT_CNT_EN(a,b) (a)
#define arguments_CAVM_EDECX_ABX_RX_CORRUPT_CNT_EN(a,b) (a),(b),-1,-1

/**
 * Register (RSL) edec#_ab#_rx_total
 *
 * EDEC RX Total Packet Count Registers
 */
union cavm_edecx_abx_rx_total
{
    uint64_t u;
    struct cavm_edecx_abx_rx_total_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t cnt                   : 64; /**< [ 63:  0](R/W/H) Total number of packets received. */
#else /* Word 0 - Little Endian */
        uint64_t cnt                   : 64; /**< [ 63:  0](R/W/H) Total number of packets received. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_edecx_abx_rx_total_s cn; */
};
typedef union cavm_edecx_abx_rx_total cavm_edecx_abx_rx_total_t;

static inline uint64_t CAVM_EDECX_ABX_RX_TOTAL(uint64_t a, uint64_t b) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_EDECX_ABX_RX_TOTAL(uint64_t a, uint64_t b)
{
    if (cavm_is_model(OCTEONTX_CNF20KA) && ((a<=2) && (b<=1)))
        return 0x87e040400180ll + 0x80000ll * ((a) & 0x3) + 0x10000ll * ((b) & 0x1);
    __cavm_csr_fatal("EDECX_ABX_RX_TOTAL", 2, a, b, 0, 0, 0, 0);
}

#define typedef_CAVM_EDECX_ABX_RX_TOTAL(a,b) cavm_edecx_abx_rx_total_t
#define bustype_CAVM_EDECX_ABX_RX_TOTAL(a,b) CSR_TYPE_RSL
#define basename_CAVM_EDECX_ABX_RX_TOTAL(a,b) "EDECX_ABX_RX_TOTAL"
#define device_bar_CAVM_EDECX_ABX_RX_TOTAL(a,b) 0x2 /* PF_BAR2 */
#define busnum_CAVM_EDECX_ABX_RX_TOTAL(a,b) (a)
#define arguments_CAVM_EDECX_ABX_RX_TOTAL(a,b) (a),(b),-1,-1

/**
 * Register (RSL) edec#_ab#_rx_wnd#_config
 *
 * EDEC RX Window Configuration Register
 */
union cavm_edecx_abx_rx_wndx_config
{
    uint64_t u;
    struct cavm_edecx_abx_rx_wndx_config_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_48_63        : 16;
        uint64_t fh_delay              : 16; /**< [ 47: 32](R/W) Fronthaul delay used to define RX window at (307.2/256) MHz = 1.2MHz */
        uint64_t rx_wnd_start          : 16; /**< [ 31: 16](R/W) Rx Window Start used to define RX window at (307.2/16) MHz = 19.2MHz ~= 52.083 ns.
                                                                 Up to 3.4ms */
        uint64_t rx_wnd_end            : 16; /**< [ 15:  0](R/W) Rx Window End used to define RX window at (307.2/16) MHz = 19.2MHz ~= 52.083 ns.
                                                                 Up to 3.4ms */
#else /* Word 0 - Little Endian */
        uint64_t rx_wnd_end            : 16; /**< [ 15:  0](R/W) Rx Window End used to define RX window at (307.2/16) MHz = 19.2MHz ~= 52.083 ns.
                                                                 Up to 3.4ms */
        uint64_t rx_wnd_start          : 16; /**< [ 31: 16](R/W) Rx Window Start used to define RX window at (307.2/16) MHz = 19.2MHz ~= 52.083 ns.
                                                                 Up to 3.4ms */
        uint64_t fh_delay              : 16; /**< [ 47: 32](R/W) Fronthaul delay used to define RX window at (307.2/256) MHz = 1.2MHz */
        uint64_t reserved_48_63        : 16;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_edecx_abx_rx_wndx_config_s cn; */
};
typedef union cavm_edecx_abx_rx_wndx_config cavm_edecx_abx_rx_wndx_config_t;

static inline uint64_t CAVM_EDECX_ABX_RX_WNDX_CONFIG(uint64_t a, uint64_t b, uint64_t c) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_EDECX_ABX_RX_WNDX_CONFIG(uint64_t a, uint64_t b, uint64_t c)
{
    if (cavm_is_model(OCTEONTX_CNF20KA) && ((a<=2) && (b<=1) && (c<=15)))
        return 0x87e040400300ll + 0x80000ll * ((a) & 0x3) + 0x10000ll * ((b) & 0x1) + 8ll * ((c) & 0xf);
    __cavm_csr_fatal("EDECX_ABX_RX_WNDX_CONFIG", 3, a, b, c, 0, 0, 0);
}

#define typedef_CAVM_EDECX_ABX_RX_WNDX_CONFIG(a,b,c) cavm_edecx_abx_rx_wndx_config_t
#define bustype_CAVM_EDECX_ABX_RX_WNDX_CONFIG(a,b,c) CSR_TYPE_RSL
#define basename_CAVM_EDECX_ABX_RX_WNDX_CONFIG(a,b,c) "EDECX_ABX_RX_WNDX_CONFIG"
#define device_bar_CAVM_EDECX_ABX_RX_WNDX_CONFIG(a,b,c) 0x2 /* PF_BAR2 */
#define busnum_CAVM_EDECX_ABX_RX_WNDX_CONFIG(a,b,c) (a)
#define arguments_CAVM_EDECX_ABX_RX_WNDX_CONFIG(a,b,c) (a),(b),(c),-1

/**
 * Register (RSL) edec#_ab#_seqid_error_cnt
 *
 * EDEC Sequence ID Error Count Register
 */
union cavm_edecx_abx_seqid_error_cnt
{
    uint64_t u;
    struct cavm_edecx_abx_seqid_error_cnt_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t cnt                   : 64; /**< [ 63:  0](R/W/H) Number of sequence ID check errors encountered. Write to clear. The count is
                                                                 incremented even if the SEQID_ERR error reporting is disabled in
                                                                 EDEC()_AB()_ERROR_ENA_W1S. */
#else /* Word 0 - Little Endian */
        uint64_t cnt                   : 64; /**< [ 63:  0](R/W/H) Number of sequence ID check errors encountered. Write to clear. The count is
                                                                 incremented even if the SEQID_ERR error reporting is disabled in
                                                                 EDEC()_AB()_ERROR_ENA_W1S. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_edecx_abx_seqid_error_cnt_s cn; */
};
typedef union cavm_edecx_abx_seqid_error_cnt cavm_edecx_abx_seqid_error_cnt_t;

static inline uint64_t CAVM_EDECX_ABX_SEQID_ERROR_CNT(uint64_t a, uint64_t b) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_EDECX_ABX_SEQID_ERROR_CNT(uint64_t a, uint64_t b)
{
    if (cavm_is_model(OCTEONTX_CNF20KA) && ((a<=2) && (b<=1)))
        return 0x87e0404000e8ll + 0x80000ll * ((a) & 0x3) + 0x10000ll * ((b) & 0x1);
    __cavm_csr_fatal("EDECX_ABX_SEQID_ERROR_CNT", 2, a, b, 0, 0, 0, 0);
}

#define typedef_CAVM_EDECX_ABX_SEQID_ERROR_CNT(a,b) cavm_edecx_abx_seqid_error_cnt_t
#define bustype_CAVM_EDECX_ABX_SEQID_ERROR_CNT(a,b) CSR_TYPE_RSL
#define basename_CAVM_EDECX_ABX_SEQID_ERROR_CNT(a,b) "EDECX_ABX_SEQID_ERROR_CNT"
#define device_bar_CAVM_EDECX_ABX_SEQID_ERROR_CNT(a,b) 0x2 /* PF_BAR2 */
#define busnum_CAVM_EDECX_ABX_SEQID_ERROR_CNT(a,b) (a)
#define arguments_CAVM_EDECX_ABX_SEQID_ERROR_CNT(a,b) (a),(b),-1,-1

/**
 * Register (RSL) edec#_ab#_seqid_error_status
 *
 * EDEC Sequence ID Error Status Register
 * This register reports the PSW values for the sequence ID check error. The values are updated only
 * if the SEQID_ERR error is enabled in EDEC()_AB()_ERROR_ENA_W1S.
 *
 * The register captures the first seqid error occurence. To re-arm capture,
 * EDEC()_AB()_ERROR_STATUS[SEQID_ERR]
 * must be cleared.
 */
union cavm_edecx_abx_seqid_error_status
{
    uint64_t u;
    struct cavm_edecx_abx_seqid_error_status_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_26_63        : 38;
        uint64_t psw_flow_id           : 10; /**< [ 25: 16](RO/H) PSW FLOW_ID value for sequence ID check error */
        uint64_t psw_pc_id             : 16; /**< [ 15:  0](RO/H) PSW PC_ID value for sequence ID check error */
#else /* Word 0 - Little Endian */
        uint64_t psw_pc_id             : 16; /**< [ 15:  0](RO/H) PSW PC_ID value for sequence ID check error */
        uint64_t psw_flow_id           : 10; /**< [ 25: 16](RO/H) PSW FLOW_ID value for sequence ID check error */
        uint64_t reserved_26_63        : 38;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_edecx_abx_seqid_error_status_s cn; */
};
typedef union cavm_edecx_abx_seqid_error_status cavm_edecx_abx_seqid_error_status_t;

static inline uint64_t CAVM_EDECX_ABX_SEQID_ERROR_STATUS(uint64_t a, uint64_t b) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_EDECX_ABX_SEQID_ERROR_STATUS(uint64_t a, uint64_t b)
{
    if (cavm_is_model(OCTEONTX_CNF20KA) && ((a<=2) && (b<=1)))
        return 0x87e0404000e0ll + 0x80000ll * ((a) & 0x3) + 0x10000ll * ((b) & 0x1);
    __cavm_csr_fatal("EDECX_ABX_SEQID_ERROR_STATUS", 2, a, b, 0, 0, 0, 0);
}

#define typedef_CAVM_EDECX_ABX_SEQID_ERROR_STATUS(a,b) cavm_edecx_abx_seqid_error_status_t
#define bustype_CAVM_EDECX_ABX_SEQID_ERROR_STATUS(a,b) CSR_TYPE_RSL
#define basename_CAVM_EDECX_ABX_SEQID_ERROR_STATUS(a,b) "EDECX_ABX_SEQID_ERROR_STATUS"
#define device_bar_CAVM_EDECX_ABX_SEQID_ERROR_STATUS(a,b) 0x2 /* PF_BAR2 */
#define busnum_CAVM_EDECX_ABX_SEQID_ERROR_STATUS(a,b) (a)
#define arguments_CAVM_EDECX_ABX_SEQID_ERROR_STATUS(a,b) (a),(b),-1,-1

/**
 * Register (RSL) edec#_ab#_slot#_cfg
 *
 * EDEC AB Job Configuration Register
 * This register space contains the EDEC job configuration data.
 * Software should not write this register directly, but instead use this
 * format when writing the job configuration section of the job descriptor.
 */
union cavm_edecx_abx_slotx_cfg
{
    uint64_t u;
    struct cavm_edecx_abx_slotx_cfg_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_16_63        : 48;
        uint64_t byte_swap_disable     : 1;  /**< [ 15: 15](R/W) Disables the byte swap of data read from memory */
        uint64_t reserved_0_14         : 15;
#else /* Word 0 - Little Endian */
        uint64_t reserved_0_14         : 15;
        uint64_t byte_swap_disable     : 1;  /**< [ 15: 15](R/W) Disables the byte swap of data read from memory */
        uint64_t reserved_16_63        : 48;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_edecx_abx_slotx_cfg_s cn; */
};
typedef union cavm_edecx_abx_slotx_cfg cavm_edecx_abx_slotx_cfg_t;

static inline uint64_t CAVM_EDECX_ABX_SLOTX_CFG(uint64_t a, uint64_t b, uint64_t c) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_EDECX_ABX_SLOTX_CFG(uint64_t a, uint64_t b, uint64_t c)
{
    if (cavm_is_model(OCTEONTX_CNF20KA) && ((a<=2) && (b<=1) && (c<=3)))
        return 0x87e040402000ll + 0x80000ll * ((a) & 0x3) + 0x10000ll * ((b) & 0x1) + 0x2000ll * ((c) & 0x3);
    __cavm_csr_fatal("EDECX_ABX_SLOTX_CFG", 3, a, b, c, 0, 0, 0);
}

#define typedef_CAVM_EDECX_ABX_SLOTX_CFG(a,b,c) cavm_edecx_abx_slotx_cfg_t
#define bustype_CAVM_EDECX_ABX_SLOTX_CFG(a,b,c) CSR_TYPE_RSL
#define basename_CAVM_EDECX_ABX_SLOTX_CFG(a,b,c) "EDECX_ABX_SLOTX_CFG"
#define device_bar_CAVM_EDECX_ABX_SLOTX_CFG(a,b,c) 0x2 /* PF_BAR2 */
#define busnum_CAVM_EDECX_ABX_SLOTX_CFG(a,b,c) (a)
#define arguments_CAVM_EDECX_ABX_SLOTX_CFG(a,b,c) (a),(b),(c),-1

/**
 * Register (RSL) edec#_ab#_slot#_hdr_out_dsp_jd
 *
 * EDEC Output DSP Job Descriptor Register
 * This register contains data EDEC uses to form an MDAB job descriptor when the
 * PSM command OPCODE in the associated flow ID's
 * EDEC_LUT_CSR3_S[PSM_JOB_CMD_WORD0]\<5:0\> is PSM_OPCODE_E::PSM_OP_ADDJOB.
 */
union cavm_edecx_abx_slotx_hdr_out_dsp_jd
{
    uint64_t u;
    struct cavm_edecx_abx_slotx_hdr_out_dsp_jd_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_8_63         : 56;
        uint64_t toth                  : 4;  /**< [  7:  4](R/W) Value written to PSM_CMD_ADDJOB_S[TOTH]. */
        uint64_t toth_tick             : 4;  /**< [  3:  0](R/W) Value written to PSM_CMD_ADDJOB_S[TOTH_TICK]. */
#else /* Word 0 - Little Endian */
        uint64_t toth_tick             : 4;  /**< [  3:  0](R/W) Value written to PSM_CMD_ADDJOB_S[TOTH_TICK]. */
        uint64_t toth                  : 4;  /**< [  7:  4](R/W) Value written to PSM_CMD_ADDJOB_S[TOTH]. */
        uint64_t reserved_8_63         : 56;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_edecx_abx_slotx_hdr_out_dsp_jd_s cn; */
};
typedef union cavm_edecx_abx_slotx_hdr_out_dsp_jd cavm_edecx_abx_slotx_hdr_out_dsp_jd_t;

static inline uint64_t CAVM_EDECX_ABX_SLOTX_HDR_OUT_DSP_JD(uint64_t a, uint64_t b, uint64_t c) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_EDECX_ABX_SLOTX_HDR_OUT_DSP_JD(uint64_t a, uint64_t b, uint64_t c)
{
    if (cavm_is_model(OCTEONTX_CNF20KA) && ((a<=2) && (b<=1) && (c<=3)))
        return 0x87e040402008ll + 0x80000ll * ((a) & 0x3) + 0x10000ll * ((b) & 0x1) + 0x2000ll * ((c) & 0x3);
    __cavm_csr_fatal("EDECX_ABX_SLOTX_HDR_OUT_DSP_JD", 3, a, b, c, 0, 0, 0);
}

#define typedef_CAVM_EDECX_ABX_SLOTX_HDR_OUT_DSP_JD(a,b,c) cavm_edecx_abx_slotx_hdr_out_dsp_jd_t
#define bustype_CAVM_EDECX_ABX_SLOTX_HDR_OUT_DSP_JD(a,b,c) CSR_TYPE_RSL
#define basename_CAVM_EDECX_ABX_SLOTX_HDR_OUT_DSP_JD(a,b,c) "EDECX_ABX_SLOTX_HDR_OUT_DSP_JD"
#define device_bar_CAVM_EDECX_ABX_SLOTX_HDR_OUT_DSP_JD(a,b,c) 0x2 /* PF_BAR2 */
#define busnum_CAVM_EDECX_ABX_SLOTX_HDR_OUT_DSP_JD(a,b,c) (a)
#define arguments_CAVM_EDECX_ABX_SLOTX_HDR_OUT_DSP_JD(a,b,c) (a),(b),(c),-1

/**
 * Register (RSL) edec#_ab#_slot#_hdr_out_word0
 *
 * EDEC Output Configuration Word0 Register
 * This register contains data EDEC uses to form an MDAB job descriptor when the
 * PSM command OPCODE in the associated flow ID's
 * EDEC_LUT_CSR3_S[PSM_JOB_CMD_WORD0]\<5:0\> is PSM_OPCODE_E::PSM_OP_ADDJOB.
 */
union cavm_edecx_abx_slotx_hdr_out_word0
{
    uint64_t u;
    struct cavm_edecx_abx_slotx_hdr_out_word0_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t data                  : 64; /**< [ 63:  0](R/W) Data written to Configuration Section Word 0 in the MDAB job descriptor. */
#else /* Word 0 - Little Endian */
        uint64_t data                  : 64; /**< [ 63:  0](R/W) Data written to Configuration Section Word 0 in the MDAB job descriptor. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_edecx_abx_slotx_hdr_out_word0_s cn; */
};
typedef union cavm_edecx_abx_slotx_hdr_out_word0 cavm_edecx_abx_slotx_hdr_out_word0_t;

static inline uint64_t CAVM_EDECX_ABX_SLOTX_HDR_OUT_WORD0(uint64_t a, uint64_t b, uint64_t c) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_EDECX_ABX_SLOTX_HDR_OUT_WORD0(uint64_t a, uint64_t b, uint64_t c)
{
    if (cavm_is_model(OCTEONTX_CNF20KA) && ((a<=2) && (b<=1) && (c<=3)))
        return 0x87e040402010ll + 0x80000ll * ((a) & 0x3) + 0x10000ll * ((b) & 0x1) + 0x2000ll * ((c) & 0x3);
    __cavm_csr_fatal("EDECX_ABX_SLOTX_HDR_OUT_WORD0", 3, a, b, c, 0, 0, 0);
}

#define typedef_CAVM_EDECX_ABX_SLOTX_HDR_OUT_WORD0(a,b,c) cavm_edecx_abx_slotx_hdr_out_word0_t
#define bustype_CAVM_EDECX_ABX_SLOTX_HDR_OUT_WORD0(a,b,c) CSR_TYPE_RSL
#define basename_CAVM_EDECX_ABX_SLOTX_HDR_OUT_WORD0(a,b,c) "EDECX_ABX_SLOTX_HDR_OUT_WORD0"
#define device_bar_CAVM_EDECX_ABX_SLOTX_HDR_OUT_WORD0(a,b,c) 0x2 /* PF_BAR2 */
#define busnum_CAVM_EDECX_ABX_SLOTX_HDR_OUT_WORD0(a,b,c) (a)
#define arguments_CAVM_EDECX_ABX_SLOTX_HDR_OUT_WORD0(a,b,c) (a),(b),(c),-1

/**
 * Register (RSL) edec#_ab#_slot#_hdr_out_word1
 *
 * EDEC Output Configuration Word1 Register
 * This register contains data EDEC uses to form an MDAB job descriptor when the
 * PSM command OPCODE in the associated flow ID's
 * EDEC_LUT_CSR3_S[PSM_JOB_CMD_WORD0]\<5:0\> is PSM_OPCODE_E::PSM_OP_ADDJOB.
 */
union cavm_edecx_abx_slotx_hdr_out_word1
{
    uint64_t u;
    struct cavm_edecx_abx_slotx_hdr_out_word1_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t data                  : 56; /**< [ 63:  8](R/W) Data written to Configuration Section Word 1 in the MDAB job descriptor. */
        uint64_t reserved_0_7          : 8;
#else /* Word 0 - Little Endian */
        uint64_t reserved_0_7          : 8;
        uint64_t data                  : 56; /**< [ 63:  8](R/W) Data written to Configuration Section Word 1 in the MDAB job descriptor. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_edecx_abx_slotx_hdr_out_word1_s cn; */
};
typedef union cavm_edecx_abx_slotx_hdr_out_word1 cavm_edecx_abx_slotx_hdr_out_word1_t;

static inline uint64_t CAVM_EDECX_ABX_SLOTX_HDR_OUT_WORD1(uint64_t a, uint64_t b, uint64_t c) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_EDECX_ABX_SLOTX_HDR_OUT_WORD1(uint64_t a, uint64_t b, uint64_t c)
{
    if (cavm_is_model(OCTEONTX_CNF20KA) && ((a<=2) && (b<=1) && (c<=3)))
        return 0x87e040402018ll + 0x80000ll * ((a) & 0x3) + 0x10000ll * ((b) & 0x1) + 0x2000ll * ((c) & 0x3);
    __cavm_csr_fatal("EDECX_ABX_SLOTX_HDR_OUT_WORD1", 3, a, b, c, 0, 0, 0);
}

#define typedef_CAVM_EDECX_ABX_SLOTX_HDR_OUT_WORD1(a,b,c) cavm_edecx_abx_slotx_hdr_out_word1_t
#define bustype_CAVM_EDECX_ABX_SLOTX_HDR_OUT_WORD1(a,b,c) CSR_TYPE_RSL
#define basename_CAVM_EDECX_ABX_SLOTX_HDR_OUT_WORD1(a,b,c) "EDECX_ABX_SLOTX_HDR_OUT_WORD1"
#define device_bar_CAVM_EDECX_ABX_SLOTX_HDR_OUT_WORD1(a,b,c) 0x2 /* PF_BAR2 */
#define busnum_CAVM_EDECX_ABX_SLOTX_HDR_OUT_WORD1(a,b,c) (a)
#define arguments_CAVM_EDECX_ABX_SLOTX_HDR_OUT_WORD1(a,b,c) (a),(b),(c),-1

/**
 * Register (RSL) edec#_ab#_status
 *
 * EDEC Status Register
 */
union cavm_edecx_abx_status
{
    uint64_t u;
    struct cavm_edecx_abx_status_s
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
    /* struct cavm_edecx_abx_status_s cn; */
};
typedef union cavm_edecx_abx_status cavm_edecx_abx_status_t;

static inline uint64_t CAVM_EDECX_ABX_STATUS(uint64_t a, uint64_t b) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_EDECX_ABX_STATUS(uint64_t a, uint64_t b)
{
    if (cavm_is_model(OCTEONTX_CNF20KA) && ((a<=2) && (b<=1)))
        return 0x87e040400018ll + 0x80000ll * ((a) & 0x3) + 0x10000ll * ((b) & 0x1);
    __cavm_csr_fatal("EDECX_ABX_STATUS", 2, a, b, 0, 0, 0, 0);
}

#define typedef_CAVM_EDECX_ABX_STATUS(a,b) cavm_edecx_abx_status_t
#define bustype_CAVM_EDECX_ABX_STATUS(a,b) CSR_TYPE_RSL
#define basename_CAVM_EDECX_ABX_STATUS(a,b) "EDECX_ABX_STATUS"
#define device_bar_CAVM_EDECX_ABX_STATUS(a,b) 0x2 /* PF_BAR2 */
#define busnum_CAVM_EDECX_ABX_STATUS(a,b) (a)
#define arguments_CAVM_EDECX_ABX_STATUS(a,b) (a),(b),-1,-1

/**
 * Register (RSL) edec#_ab#_timing_error_cond
 *
 * EDEC Timing Header Error Conditions Register
 * This register contains criteria for reporting certain error conditions
 * detected while parsing timing headers.
 */
union cavm_edecx_abx_timing_error_cond
{
    uint64_t u;
    struct cavm_edecx_abx_timing_error_cond_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_5_63         : 59;
        uint64_t ver                   : 3;  /**< [  4:  2](R/W) Configured value for ECPRI_TIMING_HDR_SW_S[PAYLOAD_VERSION] */
        uint64_t data_direction        : 2;  /**< [  1:  0](R/W) Bit \<0\>:
                                                                 0 = for up-link (UL)
                                                                 1 = for down-link (DL).
                                                                 Bit \<1\>:
                                                                 0 = Data direction check is enabled.
                                                                 1 = Data direction check is disabled. */
#else /* Word 0 - Little Endian */
        uint64_t data_direction        : 2;  /**< [  1:  0](R/W) Bit \<0\>:
                                                                 0 = for up-link (UL)
                                                                 1 = for down-link (DL).
                                                                 Bit \<1\>:
                                                                 0 = Data direction check is enabled.
                                                                 1 = Data direction check is disabled. */
        uint64_t ver                   : 3;  /**< [  4:  2](R/W) Configured value for ECPRI_TIMING_HDR_SW_S[PAYLOAD_VERSION] */
        uint64_t reserved_5_63         : 59;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_edecx_abx_timing_error_cond_s cn; */
};
typedef union cavm_edecx_abx_timing_error_cond cavm_edecx_abx_timing_error_cond_t;

static inline uint64_t CAVM_EDECX_ABX_TIMING_ERROR_COND(uint64_t a, uint64_t b) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_EDECX_ABX_TIMING_ERROR_COND(uint64_t a, uint64_t b)
{
    if (cavm_is_model(OCTEONTX_CNF20KA) && ((a<=2) && (b<=1)))
        return 0x87e040400088ll + 0x80000ll * ((a) & 0x3) + 0x10000ll * ((b) & 0x1);
    __cavm_csr_fatal("EDECX_ABX_TIMING_ERROR_COND", 2, a, b, 0, 0, 0, 0);
}

#define typedef_CAVM_EDECX_ABX_TIMING_ERROR_COND(a,b) cavm_edecx_abx_timing_error_cond_t
#define bustype_CAVM_EDECX_ABX_TIMING_ERROR_COND(a,b) CSR_TYPE_RSL
#define basename_CAVM_EDECX_ABX_TIMING_ERROR_COND(a,b) "EDECX_ABX_TIMING_ERROR_COND"
#define device_bar_CAVM_EDECX_ABX_TIMING_ERROR_COND(a,b) 0x2 /* PF_BAR2 */
#define busnum_CAVM_EDECX_ABX_TIMING_ERROR_COND(a,b) (a)
#define arguments_CAVM_EDECX_ABX_TIMING_ERROR_COND(a,b) (a),(b),-1,-1

/**
 * Register (RSL) edec#_ab#_wrmsgsts
 *
 * EDEC AB Config for WRMSG and WRSTS Register
 */
union cavm_edecx_abx_wrmsgsts
{
    uint64_t u;
    struct cavm_edecx_abx_wrmsgsts_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_53_63        : 11;
        uint64_t base_addr_sptr        : 53; /**< [ 52:  0](R/W) 16-byte aligned base address for headers (byte address divided by 16) */
#else /* Word 0 - Little Endian */
        uint64_t base_addr_sptr        : 53; /**< [ 52:  0](R/W) 16-byte aligned base address for headers (byte address divided by 16) */
        uint64_t reserved_53_63        : 11;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_edecx_abx_wrmsgsts_s cn; */
};
typedef union cavm_edecx_abx_wrmsgsts cavm_edecx_abx_wrmsgsts_t;

static inline uint64_t CAVM_EDECX_ABX_WRMSGSTS(uint64_t a, uint64_t b) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_EDECX_ABX_WRMSGSTS(uint64_t a, uint64_t b)
{
    if (cavm_is_model(OCTEONTX_CNF20KA) && ((a<=2) && (b<=1)))
        return 0x87e040400240ll + 0x80000ll * ((a) & 0x3) + 0x10000ll * ((b) & 0x1);
    __cavm_csr_fatal("EDECX_ABX_WRMSGSTS", 2, a, b, 0, 0, 0, 0);
}

#define typedef_CAVM_EDECX_ABX_WRMSGSTS(a,b) cavm_edecx_abx_wrmsgsts_t
#define bustype_CAVM_EDECX_ABX_WRMSGSTS(a,b) CSR_TYPE_RSL
#define basename_CAVM_EDECX_ABX_WRMSGSTS(a,b) "EDECX_ABX_WRMSGSTS"
#define device_bar_CAVM_EDECX_ABX_WRMSGSTS(a,b) 0x2 /* PF_BAR2 */
#define busnum_CAVM_EDECX_ABX_WRMSGSTS(a,b) (a)
#define arguments_CAVM_EDECX_ABX_WRMSGSTS(a,b) (a),(b),-1,-1

#endif /* __CAVM_CSRS_EDEC_H__ */
