#ifndef __CAVM_CSRS_RFOE_H__
#define __CAVM_CSRS_RFOE_H__
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
 * RFOE.
 *
 * This file is auto generated. Do not edit.
 *
 */

/**
 * Enumeration rfoe_ecpri_hdr_err_type_e
 *
 * RFOE eCPRI Error Type Enumeration
 * Enumerates the eCPRI header error info types.
 */
#define CAVM_RFOE_ECPRI_HDR_ERR_TYPE_E_CONCATENATION (1)
#define CAVM_RFOE_ECPRI_HDR_ERR_TYPE_E_ILLEGAL_RSVD (3)
#define CAVM_RFOE_ECPRI_HDR_ERR_TYPE_E_ILLEGAL_VERSION (2)
#define CAVM_RFOE_ECPRI_HDR_ERR_TYPE_E_NONE (0)
#define CAVM_RFOE_ECPRI_HDR_ERR_TYPE_E_PC_ID (4)

/**
 * Enumeration rfoe_ecpri_pcid_flowid_mode_e
 *
 * RFOE eCPRI PCID FLOWID Mode Enumeration
 * Enumerates values of RFOE()_RX_ECPRI_CFG()[PCID_FLOWID_MODE].
 */
#define CAVM_RFOE_ECPRI_PCID_FLOWID_MODE_E_BASE (1)
#define CAVM_RFOE_ECPRI_PCID_FLOWID_MODE_E_HASH (0)
#define CAVM_RFOE_ECPRI_PCID_FLOWID_MODE_E_LMAC_TRUNCATE (2)
#define CAVM_RFOE_ECPRI_PCID_FLOWID_MODE_E_SHIFT (3)

/**
 * Enumeration rfoe_order_info_type_e
 *
 * RFOE RoE Order Info Type Enumeration
 * Enumerates values of RFOE()_RX_IND_JDT_CFG1[ORDER_INFO_TYPE] and
 * RFOE()_AB()_SLOT()_CONFIGURATION[ORDERINFOTYPE].
 * See IEEE 1914.3-2018.
 */
#define CAVM_RFOE_ORDER_INFO_TYPE_E_SEQNUM (0)
#define CAVM_RFOE_ORDER_INFO_TYPE_E_TIMESTAMP (1)

/**
 * Enumeration rfoe_rx_dir_ctl_pkt_type_e
 *
 * RFOE Direction Control Packet Type Enumeration
 * Enumerates values of RFOE()_RX_DIRECTION_CTL()[DMA_TYPE] and RFOE()_RX_ERROR_INFO()[DIR_CTL_TYPE].
 */
#define CAVM_RFOE_RX_DIR_CTL_PKT_TYPE_E_ALT (2)
#define CAVM_RFOE_RX_DIR_CTL_PKT_TYPE_E_CHI (1)
#define CAVM_RFOE_RX_DIR_CTL_PKT_TYPE_E_ECPRI (4)
#define CAVM_RFOE_RX_DIR_CTL_PKT_TYPE_E_GENERICX(a) (8 + (a))
#define CAVM_RFOE_RX_DIR_CTL_PKT_TYPE_E_ROE (0)

/**
 * Enumeration rfoe_rx_fd_state_e
 *
 * RoE 0xFD Symbol Assembly State Enumeration
 * Enumerates RoE subType 0xFD symbol assembly flow states.
 */
#define CAVM_RFOE_RX_FD_STATE_E_FD_BUSY (3)
#define CAVM_RFOE_RX_FD_STATE_E_FD_ERR (1)
#define CAVM_RFOE_RX_FD_STATE_E_FD_IDLE (2)
#define CAVM_RFOE_RX_FD_STATE_E_FD_START (0)

/**
 * Enumeration rfoe_rx_pkt_err_e
 *
 * RFOE Receive Packet Error Enumeration
 */
#define CAVM_RFOE_RX_PKT_ERR_E_RE_FCS (7)
#define CAVM_RFOE_RX_PKT_ERR_E_RE_FCS_RCV (8)
#define CAVM_RFOE_RX_PKT_ERR_E_RE_JABBER (2)
#define CAVM_RFOE_RX_PKT_ERR_E_RE_NONE (0)
#define CAVM_RFOE_RX_PKT_ERR_E_RE_PARTIAL (1)
#define CAVM_RFOE_RX_PKT_ERR_E_RE_RX_CTL (0xb)
#define CAVM_RFOE_RX_PKT_ERR_E_RE_SKIP (0xc)
#define CAVM_RFOE_RX_PKT_ERR_E_RE_TERMINATE (9)

/**
 * Enumeration rfoe_rx_pkt_logger_idx_e
 *
 * RFOE Packet Logger Index Enumeration
 */
#define CAVM_RFOE_RX_PKT_LOGGER_IDX_E_RX_PKT (0)
#define CAVM_RFOE_RX_PKT_LOGGER_IDX_E_TX_PKT (1)

/**
 * Enumeration rfoe_rx_pswt_e
 *
 * RFOE RX Packet Status Word Type Enumeration
 * Enumerates the PROTOCOL_STS_WRD and RFOE_TIMESTAMP fields in RX packet status word
 */
#define CAVM_RFOE_RX_PSWT_E_ECPRI_BCN_TYPE (3)
#define CAVM_RFOE_RX_PSWT_E_ROE_BCN_TYPE (1)
#define CAVM_RFOE_RX_PSWT_E_RSVD5 (0)
#define CAVM_RFOE_RX_PSWT_E_RSVD6 (2)

/**
 * Enumeration rfoe_rx_sw_tbl_action_e
 *
 * RFOE RX Switch Table Action Enumeration
 * Enumerates the action to be performed on switch table entry match.
 */
#define CAVM_RFOE_RX_SW_TBL_ACTION_E_DROP (2)
#define CAVM_RFOE_RX_SW_TBL_ACTION_E_FORWARD (1)
#define CAVM_RFOE_RX_SW_TBL_ACTION_E_TERMINATE (0)

/**
 * Enumeration rfoe_rx_sw_tbl_term_flow_id_calc_e
 *
 * RFOE RX Switch Table Flow_ID Calculation Method for terminated flows Enumeration
 * Enumerates the flow_id calculation method for terminated flows.
 */
#define CAVM_RFOE_RX_SW_TBL_TERM_FLOW_ID_CALC_E_LEGACY (0)
#define CAVM_RFOE_RX_SW_TBL_TERM_FLOW_ID_CALC_E_PC_ID_HASH_SUBTABLE (2)
#define CAVM_RFOE_RX_SW_TBL_TERM_FLOW_ID_CALC_E_PC_ID_REMAP_SUBTABLE (1)
#define CAVM_RFOE_RX_SW_TBL_TERM_FLOW_ID_CALC_E_SW_TBL_ACT (3)

/**
 * Structure ecpri_hdr_s
 *
 * eCPRI Transport Header Structure
 * This structure defined the format of the eCPRI transport header as specified
 * by the eCPRI standard.
 */
union cavm_ecpri_hdr_s
{
    uint64_t u;
    struct cavm_ecpri_hdr_s_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t ver                   : 4;  /**< [ 63: 60] eCPRI version. */
        uint64_t reserved_57_59        : 3;
        uint64_t concatenation         : 1;  /**< [ 56: 56] Concatenation indicator. */
        uint64_t msg_type              : 8;  /**< [ 55: 48] Message type. */
        uint64_t pyld_size             : 16; /**< [ 47: 32] Payload size in bytes. */
        uint64_t pc_id                 : 16; /**< [ 31: 16] eAxC identifier. */
        uint64_t seq_id                : 16; /**< [ 15:  0] Sequence identifier. */
#else /* Word 0 - Little Endian */
        uint64_t seq_id                : 16; /**< [ 15:  0] Sequence identifier. */
        uint64_t pc_id                 : 16; /**< [ 31: 16] eAxC identifier. */
        uint64_t pyld_size             : 16; /**< [ 47: 32] Payload size in bytes. */
        uint64_t msg_type              : 8;  /**< [ 55: 48] Message type. */
        uint64_t concatenation         : 1;  /**< [ 56: 56] Concatenation indicator. */
        uint64_t reserved_57_59        : 3;
        uint64_t ver                   : 4;  /**< [ 63: 60] eCPRI version. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_ecpri_hdr_s_s cn; */
};

/**
 * Structure rfoe_ab_cfg_w3_s
 *
 * RFOE RX JD AB Config Word 3 Structure
 * Structure written to the JD Ring in memory. Writing is
 * enabled by RFOE()_RX_IND_FT()_CFG[AB_CFG_W_ENABLE] or
 * RFOE(0..6)_RX_IND_ECPRI_FT_CFG[AB_CFG_W_ENABLE]. Must match
 * RFOE(0..6)_AB(0..1)_SLOT(0..2)_CONFIGURATION3.
 */
union cavm_rfoe_ab_cfg_w3_s
{
    uint64_t u;
    struct cavm_rfoe_ab_cfg_w3_s_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_19_63        : 45;
        uint64_t tx_err                : 1;  /**< [ 18: 18] When set to 1, indicates the packet was sent to RPM with the error bit set. */
        uint64_t lmac_id               : 2;  /**< [ 17: 16] LMAC_ID. */
        uint64_t pkt_len               : 16; /**< [ 15:  0] Size of the packet payload written to the memory buffer in bytes. */
#else /* Word 0 - Little Endian */
        uint64_t pkt_len               : 16; /**< [ 15:  0] Size of the packet payload written to the memory buffer in bytes. */
        uint64_t lmac_id               : 2;  /**< [ 17: 16] LMAC_ID. */
        uint64_t tx_err                : 1;  /**< [ 18: 18] When set to 1, indicates the packet was sent to RPM with the error bit set. */
        uint64_t reserved_19_63        : 45;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_rfoe_ab_cfg_w3_s_s cn; */
};

/**
 * Structure rfoe_cstm_hdr_addr_s
 *
 * RFOE Custom Header Address Structure
 * RoE subtype 0xfc packets and custom header
 * ingress EtherType packets use this structure format when specifying write
 * addresses.
 */
union cavm_rfoe_cstm_hdr_addr_s
{
    uint64_t u;
    struct cavm_rfoe_cstm_hdr_addr_s_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t target_mem            : 1;  /**< [ 63: 63] Specifies the target memory for the address.
                                                                 0 = SMEM.
                                                                 1 = LLC/DRAM. */
        uint64_t reserved_62           : 1;
        uint64_t cmd_type              : 2;  /**< [ 61: 60] Command type for LLC/DRAM writes. The write operations are
                                                                 enumerated by MHBW_PNB_WR_CMD_E.

                                                                 Note:
                                                                 * Transfer to BPHY SMEM ignore this field.
                                                                 * Unaligned or partial cacheline writes always use
                                                                 MHBW_PNB_WR_CMD_E::STP. */
        uint64_t reserved_59           : 1;
        uint64_t dswap                 : 3;  /**< [ 58: 56] The byte swap mode for DMA to LLC/DRAM. Enumerated in MHBW_PNB_DSWAP_E.
                                                                 DMA to BPHY SMEM ignores this field. */
        uint64_t reserved_53_55        : 3;
        uint64_t start_addr            : 53; /**< [ 52:  0] Specifies the byte address of the start of the write DMA.
                                                                 The address must be 128-bit aligned, i.e., bits[3:0] must be 0. */
#else /* Word 0 - Little Endian */
        uint64_t start_addr            : 53; /**< [ 52:  0] Specifies the byte address of the start of the write DMA.
                                                                 The address must be 128-bit aligned, i.e., bits[3:0] must be 0. */
        uint64_t reserved_53_55        : 3;
        uint64_t dswap                 : 3;  /**< [ 58: 56] The byte swap mode for DMA to LLC/DRAM. Enumerated in MHBW_PNB_DSWAP_E.
                                                                 DMA to BPHY SMEM ignores this field. */
        uint64_t reserved_59           : 1;
        uint64_t cmd_type              : 2;  /**< [ 61: 60] Command type for LLC/DRAM writes. The write operations are
                                                                 enumerated by MHBW_PNB_WR_CMD_E.

                                                                 Note:
                                                                 * Transfer to BPHY SMEM ignore this field.
                                                                 * Unaligned or partial cacheline writes always use
                                                                 MHBW_PNB_WR_CMD_E::STP. */
        uint64_t reserved_62           : 1;
        uint64_t target_mem            : 1;  /**< [ 63: 63] Specifies the target memory for the address.
                                                                 0 = SMEM.
                                                                 1 = LLC/DRAM. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_rfoe_cstm_hdr_addr_s_s cn; */
};

/**
 * Structure rfoe_ecpri_seqid_rx_sync_s
 *
 * RFOE eCPRI SEQID RX Sync Configuration Structure
 */
union cavm_rfoe_ecpri_seqid_rx_sync_s
{
    uint32_t u;
    struct cavm_rfoe_ecpri_seqid_rx_sync_s_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t sof_match_value       : 16; /**< [ 31: 16] Value used to determine if SEQ_ID should trigger RX Sync. */
        uint32_t sof_mask              : 16; /**< [ 15:  0] Defines bit for comparison. For each bit:
                                                                 * 1 = Use bit for RX Sync comparison.
                                                                 * 0 = Ignore bit for RX Sync comparison. */
#else /* Word 0 - Little Endian */
        uint32_t sof_mask              : 16; /**< [ 15:  0] Defines bit for comparison. For each bit:
                                                                 * 1 = Use bit for RX Sync comparison.
                                                                 * 0 = Ignore bit for RX Sync comparison. */
        uint32_t sof_match_value       : 16; /**< [ 31: 16] Value used to determine if SEQ_ID should trigger RX Sync. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_rfoe_ecpri_seqid_rx_sync_s_s cn; */
};

/**
 * Structure rfoe_ecpri_seqid_s
 *
 * RFOE eCPRI SEQID Structure
 */
union cavm_rfoe_ecpri_seqid_s
{
    uint32_t u;
    struct cavm_rfoe_ecpri_seqid_s_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t reserved_16_31        : 16;
        uint32_t sequence_id           : 8;  /**< [ 15:  8] Sequence ID. */
        uint32_t e_bit                 : 1;  /**< [  7:  7] Indicates last message of subsequence. */
        uint32_t subsequence_id        : 7;  /**< [  6:  0] Subsequence ID. */
#else /* Word 0 - Little Endian */
        uint32_t subsequence_id        : 7;  /**< [  6:  0] Subsequence ID. */
        uint32_t e_bit                 : 1;  /**< [  7:  7] Indicates last message of subsequence. */
        uint32_t sequence_id           : 8;  /**< [ 15:  8] Sequence ID. */
        uint32_t reserved_16_31        : 16;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_rfoe_ecpri_seqid_s_s cn; */
};

/**
 * Structure rfoe_fd_cstm_hdr_s
 *
 * RFOE 0xFD Subtype Custom Header Structure
 * RoE packets with subtype 0xFD use this custom header structure.
 */
union cavm_rfoe_fd_cstm_hdr_s
{
    uint64_t u[2];
    struct cavm_rfoe_fd_cstm_hdr_s_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_0_63         : 64;
#else /* Word 0 - Little Endian */
        uint64_t reserved_0_63         : 64;
#endif /* Word 0 - End */
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 1 - Big Endian */
        uint64_t rfoe_timestamp        : 32; /**< [127: 96] Arrival timestamp, formatted according to RFOE_TIMESTAMP_S */
        uint64_t antenna               : 8;  /**< [ 95: 88] Antenna number. */
        uint64_t symbol                : 8;  /**< [ 87: 80] Symbol number. */
        uint64_t sos                   : 1;  /**< [ 79: 79] Start of symbol flag. Indicates first packet for current symbol. */
        uint64_t eos                   : 1;  /**< [ 78: 78] End of symbol flag. Indicates last packet for current symbol. */
        uint64_t reserved_65_77        : 13;
        uint64_t sof                   : 1;  /**< [ 64: 64] Start of frame. */
#else /* Word 1 - Little Endian */
        uint64_t sof                   : 1;  /**< [ 64: 64] Start of frame. */
        uint64_t reserved_65_77        : 13;
        uint64_t eos                   : 1;  /**< [ 78: 78] End of symbol flag. Indicates last packet for current symbol. */
        uint64_t sos                   : 1;  /**< [ 79: 79] Start of symbol flag. Indicates first packet for current symbol. */
        uint64_t symbol                : 8;  /**< [ 87: 80] Symbol number. */
        uint64_t antenna               : 8;  /**< [ 95: 88] Antenna number. */
        uint64_t rfoe_timestamp        : 32; /**< [127: 96] Arrival timestamp, formatted according to RFOE_TIMESTAMP_S */
#endif /* Word 1 - End */
    } s;
    /* struct cavm_rfoe_fd_cstm_hdr_s_s cn; */
};

/**
 * Structure rfoe_psw_s
 *
 * RFOE Packet Status Word Structure
 * RFOE packet status word structure used for all packets.
 */
union cavm_rfoe_psw_s
{
    uint64_t u[8];
    struct cavm_rfoe_psw_s_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t pswt                  : 2;  /**< [ 63: 62] PSW Type.  Enumerated by RFOE_RX_PSWT_E. */
        uint64_t reserved_59_61        : 3;
        uint64_t gmid                  : 3;  /**< [ 58: 56] Guest Machine ID for this packet. */
        uint64_t reserved_55           : 1;
        uint64_t mb_jd_type            : 1;  /**< [ 54: 54] Job descriptor pointer type. 0 = JDT address. 1 = Inline MBT address. */
        uint64_t ptr_tmem              : 1;  /**< [ 53: 53] Target memory selection for job descriptor used by this packet/symbol.
                                                                 0 = SMEM.
                                                                 1 = LLC/DRAM.
                                                                 Note that this will be zero for RoE subtype 0xFC packets. */
        uint64_t ptr                   : 53; /**< [ 52:  0] Pointer to job descriptor used by this packet/symbol.
                                                                 * All except RoE subtype = 0xFC, job descriptor pointer corresponding to this packet status.
                                                                 * If RoE subtype = 0xFC, this will be 0x0. */
#else /* Word 0 - Little Endian */
        uint64_t ptr                   : 53; /**< [ 52:  0] Pointer to job descriptor used by this packet/symbol.
                                                                 * All except RoE subtype = 0xFC, job descriptor pointer corresponding to this packet status.
                                                                 * If RoE subtype = 0xFC, this will be 0x0. */
        uint64_t ptr_tmem              : 1;  /**< [ 53: 53] Target memory selection for job descriptor used by this packet/symbol.
                                                                 0 = SMEM.
                                                                 1 = LLC/DRAM.
                                                                 Note that this will be zero for RoE subtype 0xFC packets. */
        uint64_t mb_jd_type            : 1;  /**< [ 54: 54] Job descriptor pointer type. 0 = JDT address. 1 = Inline MBT address. */
        uint64_t reserved_55           : 1;
        uint64_t gmid                  : 3;  /**< [ 58: 56] Guest Machine ID for this packet. */
        uint64_t reserved_59_61        : 3;
        uint64_t pswt                  : 2;  /**< [ 63: 62] PSW Type.  Enumerated by RFOE_RX_PSWT_E. */
#endif /* Word 0 - End */
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 1 - Big Endian */
        uint64_t reserved_124_127      : 4;
        uint64_t ptype                 : 4;  /**< [123:120] Type of processing applied to packet, as defined by RFOE_RX_DIR_CTL_PKT_TYPE_E. */
        uint64_t reserved_118_119      : 2;
        uint64_t mac_err_sts           : 6;  /**< [117:112] Packet error status; 0 = no errors detected.  For non-zero:
                                                                 * Bits(3..0) are the packet error status from MAC, enumerated by RFOE_RX_PKT_ERR_E.
                                                                 * Bit(4) is the DMA error status, indicating DMA or header processing error.
                                                                 Possible errors include:
                                                                 * Late aperture failure.
                                                                 * Attempted to write past the end of the buffer.
                                                                 * RoE length field did not match incoming packet.
                                                                 * Bit(5) is the eCPRI Sequence ID (ECPRI_HDR_S[SEQ_ID]) error status. Set
                                                                 when the packet's sequence and/or subsequence ID in ECPRI_HDR_S[SEQ_ID] do
                                                                 not match their expected values. */
        uint64_t mcs_err_sts           : 8;  /**< [111:104] MCS Packet Error Status from exception code err field.  0 = no error detected.
                                                                   Bit[7]    : punted_drop.
                                                                   Bits[6:2] : exception_code as enumerated in MCS_RX_EXCEPTION_CODE_E.
                                                                   Bits[1:0] : pkt_kind as enumerated in MCS_RX_PKT_KIND_E. */
        uint64_t pkt_len               : 16; /**< [103: 88] Size of the packet payload written to the memory buffer in bytes.
                                                                 - eCPRI, CHI packets: Packet Length value is taken from respective header.
                                                                 - RoE packets       : Unused.
                                                                 - other packets     : This indicates the total received length. */
        uint64_t reserved_85_87        : 3;
        uint64_t eindex                : 5;  /**< [ 84: 80] Byte index to MSB of EtherType used for rx_direction_ctl lookup (non-VLAN EtherType). */
        uint64_t ethertype             : 16; /**< [ 79: 64] EtherType pointed to by EINDEX */
#else /* Word 1 - Little Endian */
        uint64_t ethertype             : 16; /**< [ 79: 64] EtherType pointed to by EINDEX */
        uint64_t eindex                : 5;  /**< [ 84: 80] Byte index to MSB of EtherType used for rx_direction_ctl lookup (non-VLAN EtherType). */
        uint64_t reserved_85_87        : 3;
        uint64_t pkt_len               : 16; /**< [103: 88] Size of the packet payload written to the memory buffer in bytes.
                                                                 - eCPRI, CHI packets: Packet Length value is taken from respective header.
                                                                 - RoE packets       : Unused.
                                                                 - other packets     : This indicates the total received length. */
        uint64_t mcs_err_sts           : 8;  /**< [111:104] MCS Packet Error Status from exception code err field.  0 = no error detected.
                                                                   Bit[7]    : punted_drop.
                                                                   Bits[6:2] : exception_code as enumerated in MCS_RX_EXCEPTION_CODE_E.
                                                                   Bits[1:0] : pkt_kind as enumerated in MCS_RX_PKT_KIND_E. */
        uint64_t mac_err_sts           : 6;  /**< [117:112] Packet error status; 0 = no errors detected.  For non-zero:
                                                                 * Bits(3..0) are the packet error status from MAC, enumerated by RFOE_RX_PKT_ERR_E.
                                                                 * Bit(4) is the DMA error status, indicating DMA or header processing error.
                                                                 Possible errors include:
                                                                 * Late aperture failure.
                                                                 * Attempted to write past the end of the buffer.
                                                                 * RoE length field did not match incoming packet.
                                                                 * Bit(5) is the eCPRI Sequence ID (ECPRI_HDR_S[SEQ_ID]) error status. Set
                                                                 when the packet's sequence and/or subsequence ID in ECPRI_HDR_S[SEQ_ID] do
                                                                 not match their expected values. */
        uint64_t reserved_118_119      : 2;
        uint64_t ptype                 : 4;  /**< [123:120] Type of processing applied to packet, as defined by RFOE_RX_DIR_CTL_PKT_TYPE_E. */
        uint64_t reserved_124_127      : 4;
#endif /* Word 1 - End */
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 2 - Big Endian */
        uint64_t protocol_sts_wrd      : 64; /**< [191:128] Type of radio protocol applied to packet,
                                                                 as defined by RFOE_PSW_W2_ECPRI_S or RFOE_PSW_W2_ROE_S.
                                                                 This is dependent on the type of processing applied to packet,
                                                                 as defined by RFOE_RX_DIR_CTL_PKT_TYPE_E. */
#else /* Word 2 - Little Endian */
        uint64_t protocol_sts_wrd      : 64; /**< [191:128] Type of radio protocol applied to packet,
                                                                 as defined by RFOE_PSW_W2_ECPRI_S or RFOE_PSW_W2_ROE_S.
                                                                 This is dependent on the type of processing applied to packet,
                                                                 as defined by RFOE_RX_DIR_CTL_PKT_TYPE_E. */
#endif /* Word 2 - End */
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 3 - Big Endian */
        uint64_t rfoe_timestamp        : 64; /**< [255:192] The Timestamp field is defined based on the RFOE()_RX_CTRL[TSTAMP_FORMAT]
                                                                 configuration. */
#else /* Word 3 - Little Endian */
        uint64_t rfoe_timestamp        : 64; /**< [255:192] The Timestamp field is defined based on the RFOE()_RX_CTRL[TSTAMP_FORMAT]
                                                                 configuration. */
#endif /* Word 3 - End */
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 4 - Big Endian */
        uint64_t ptp_timestamp         : 64; /**< [319:256] PTP timestamp received from RPM when the LMAC's RFOE()_RX_CTRL[RX_PTP_MODE] bit is
                                                                 set, else 0x0. */
#else /* Word 4 - Little Endian */
        uint64_t ptp_timestamp         : 64; /**< [319:256] PTP timestamp received from RPM when the LMAC's RFOE()_RX_CTRL[RX_PTP_MODE] bit is
                                                                 set, else 0x0. */
#endif /* Word 4 - End */
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 5 - Big Endian */
        uint64_t reserved_320_383      : 64;
#else /* Word 5 - Little Endian */
        uint64_t reserved_320_383      : 64;
#endif /* Word 5 - End */
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 6 - Big Endian */
        uint64_t reserved_432_447      : 16;
        uint64_t dec_num_syminc        : 8;  /**< [431:424] EDEC block sets this field to the number of sections in the packet with
                                                                 ECPRI_SECTION_HDR_S[SYM_INC]==1 in the section header. */
        uint64_t dec_num_sections      : 8;  /**< [423:416] EDEC block sets this field to the total number of sections found in this packet. */
        uint64_t dec_error             : 8;  /**< [415:408] EDEC block sets this field. */
        uint64_t reserved_384_407      : 24;
#else /* Word 6 - Little Endian */
        uint64_t reserved_384_407      : 24;
        uint64_t dec_error             : 8;  /**< [415:408] EDEC block sets this field. */
        uint64_t dec_num_sections      : 8;  /**< [423:416] EDEC block sets this field to the total number of sections found in this packet. */
        uint64_t dec_num_syminc        : 8;  /**< [431:424] EDEC block sets this field to the number of sections in the packet with
                                                                 ECPRI_SECTION_HDR_S[SYM_INC]==1 in the section header. */
        uint64_t reserved_432_447      : 16;
#endif /* Word 6 - End */
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 7 - Big Endian */
        uint64_t reserved_448_511      : 64;
#else /* Word 7 - Little Endian */
        uint64_t reserved_448_511      : 64;
#endif /* Word 7 - End */
    } s;
    /* struct cavm_rfoe_psw_s_s cn; */
};

/**
 * Structure rfoe_psw_w0_s
 *
 * RFOE PSW W0 Word Structure
 * RFOE Packet Status Word Structure Used for all packets.
 */
union cavm_rfoe_psw_w0_s
{
    uint64_t u;
    struct cavm_rfoe_psw_w0_s_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t pswt                  : 2;  /**< [ 63: 62] PSW type.  Enumerated by RFOE_RX_PSWT_E. */
        uint64_t reserved_59_61        : 3;
        uint64_t gmid                  : 3;  /**< [ 58: 56] Guest Machine ID for this packet. */
        uint64_t reserved_55           : 1;
        uint64_t mb_jd_type            : 1;  /**< [ 54: 54] Job descriptor pointer type. 0 = JDT address. 1 = Inline MBT address. */
        uint64_t ptr_tmem              : 1;  /**< [ 53: 53] Target memory selection for job descriptor used by this packet/symbol.
                                                                 0 = SMEM.
                                                                 1 = LLC/DRAM.
                                                                 Note that this will be zero for RoE subtype 0xFC packets. */
        uint64_t ptr                   : 53; /**< [ 52:  0] Pointer to job descriptor used by this packet/symbol.
                                                                 * All except RoE subtype = 0xFC, job descriptor pointer corresponding to this packet status.
                                                                 * If RoE subtype = 0xFC, this will be 0x0. */
#else /* Word 0 - Little Endian */
        uint64_t ptr                   : 53; /**< [ 52:  0] Pointer to job descriptor used by this packet/symbol.
                                                                 * All except RoE subtype = 0xFC, job descriptor pointer corresponding to this packet status.
                                                                 * If RoE subtype = 0xFC, this will be 0x0. */
        uint64_t ptr_tmem              : 1;  /**< [ 53: 53] Target memory selection for job descriptor used by this packet/symbol.
                                                                 0 = SMEM.
                                                                 1 = LLC/DRAM.
                                                                 Note that this will be zero for RoE subtype 0xFC packets. */
        uint64_t mb_jd_type            : 1;  /**< [ 54: 54] Job descriptor pointer type. 0 = JDT address. 1 = Inline MBT address. */
        uint64_t reserved_55           : 1;
        uint64_t gmid                  : 3;  /**< [ 58: 56] Guest Machine ID for this packet. */
        uint64_t reserved_59_61        : 3;
        uint64_t pswt                  : 2;  /**< [ 63: 62] PSW type.  Enumerated by RFOE_RX_PSWT_E. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_rfoe_psw_w0_s_s cn; */
};

/**
 * Structure rfoe_psw_w1_s
 *
 * RFOE PSW W1 Word Structure
 * RFOE packet status word structure used for all packets.
 */
union cavm_rfoe_psw_w1_s
{
    uint64_t u;
    struct cavm_rfoe_psw_w1_s_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_60_63        : 4;
        uint64_t ptype                 : 4;  /**< [ 59: 56] Type of processing applied to packet, as defined by RFOE_RX_DIR_CTL_PKT_TYPE_E. */
        uint64_t reserved_54_55        : 2;
        uint64_t mac_err_sts           : 6;  /**< [ 53: 48] Packet error status, 0 = no errors detected.  For non-zero:
                                                                 * Bits(3..0) are the packet error status from MAC, enumerated by RFOE_RX_PKT_ERR_E.
                                                                 * Bit(4) is the DMA error status, indicating DMA or header processing error.
                                                                 Possible errors include:
                                                                 * Late aperture failure.
                                                                 * Attempted to write past the end of the buffer.
                                                                 * RoE length field did not match incoming packet.
                                                                 * Bit(5) is the eCPRI Sequence ID (ECPRI_HDR_S[SEQ_ID]) error status. Set
                                                                 when the packet's sequence and/or subsequence ID in ECPRI_HDR_S[SEQ_ID] do
                                                                 not match their expected values. */
        uint64_t mcs_err_sts           : 8;  /**< [ 47: 40] MCS Packet Error Status from exception code err field.  0 = no error detected.
                                                                   Bit[7]    : punted_drop.
                                                                   Bits[6:2] : exception_code as enumerated in MCS_RX_EXCEPTION_CODE_E.
                                                                   Bits[1:0] : pkt_kind as enumerated in MCS_RX_PKT_KIND_E. */
        uint64_t pkt_len               : 16; /**< [ 39: 24] Size of the packet payload written to the memory buffer in bytes.
                                                                 - eCPRI, CHI packets: Packet Length value is taken from respective header.
                                                                 - RoE packets       : Unused.
                                                                 - other packets     : This indicates the total received length. */
        uint64_t reserved_21_23        : 3;
        uint64_t eindex                : 5;  /**< [ 20: 16] Byte index to MSB of EtherType used for rx_direction_ctl lookup (non-VLAN EtherType). */
        uint64_t ethertype             : 16; /**< [ 15:  0] EtherType pointed to by EINDEX. */
#else /* Word 0 - Little Endian */
        uint64_t ethertype             : 16; /**< [ 15:  0] EtherType pointed to by EINDEX. */
        uint64_t eindex                : 5;  /**< [ 20: 16] Byte index to MSB of EtherType used for rx_direction_ctl lookup (non-VLAN EtherType). */
        uint64_t reserved_21_23        : 3;
        uint64_t pkt_len               : 16; /**< [ 39: 24] Size of the packet payload written to the memory buffer in bytes.
                                                                 - eCPRI, CHI packets: Packet Length value is taken from respective header.
                                                                 - RoE packets       : Unused.
                                                                 - other packets     : This indicates the total received length. */
        uint64_t mcs_err_sts           : 8;  /**< [ 47: 40] MCS Packet Error Status from exception code err field.  0 = no error detected.
                                                                   Bit[7]    : punted_drop.
                                                                   Bits[6:2] : exception_code as enumerated in MCS_RX_EXCEPTION_CODE_E.
                                                                   Bits[1:0] : pkt_kind as enumerated in MCS_RX_PKT_KIND_E. */
        uint64_t mac_err_sts           : 6;  /**< [ 53: 48] Packet error status, 0 = no errors detected.  For non-zero:
                                                                 * Bits(3..0) are the packet error status from MAC, enumerated by RFOE_RX_PKT_ERR_E.
                                                                 * Bit(4) is the DMA error status, indicating DMA or header processing error.
                                                                 Possible errors include:
                                                                 * Late aperture failure.
                                                                 * Attempted to write past the end of the buffer.
                                                                 * RoE length field did not match incoming packet.
                                                                 * Bit(5) is the eCPRI Sequence ID (ECPRI_HDR_S[SEQ_ID]) error status. Set
                                                                 when the packet's sequence and/or subsequence ID in ECPRI_HDR_S[SEQ_ID] do
                                                                 not match their expected values. */
        uint64_t reserved_54_55        : 2;
        uint64_t ptype                 : 4;  /**< [ 59: 56] Type of processing applied to packet, as defined by RFOE_RX_DIR_CTL_PKT_TYPE_E. */
        uint64_t reserved_60_63        : 4;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_rfoe_psw_w1_s_s cn; */
};

/**
 * Structure rfoe_psw_w2_ecpri_s
 *
 * RFOE PSW W2 ECPRI PROTOCOL STATUS Word Structure
 * PROTOCOL STATUS Word described by the eCRPI Protocol
 */
union cavm_rfoe_psw_w2_ecpri_s
{
    uint64_t u;
    struct cavm_rfoe_psw_w2_ecpri_s_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_63           : 1;
        uint64_t sa_table_index        : 7;  /**< [ 62: 56] Source Address Table Index. */
        uint64_t rfoe_id               : 4;  /**< [ 55: 52] RFOE Instance ID on which the packet was received. */
        uint64_t lmac_id               : 2;  /**< [ 51: 50] LMAC ID on which the packet was received. */
        uint64_t flow_id               : 10; /**< [ 49: 40] EDEC_FLOW_ID with subtable offset added. */
        uint64_t seq_id                : 16; /**< [ 39: 24] ECPRI_HDR_S[SEQ_ID] field from eCPRI header when ECPRI_HDR_S[MSG_TYPE] == 0, else 0x0. */
        uint64_t pc_id                 : 16; /**< [ 23:  8] Value of ECPRI_HDR_S[PC_ID] ID field from eCPRI header. */
        uint64_t msg_type              : 8;  /**< [  7:  0] eCPRI Message Type field from eCPRI header (ECPRI_HDR_S[MSG_TYPE]). */
#else /* Word 0 - Little Endian */
        uint64_t msg_type              : 8;  /**< [  7:  0] eCPRI Message Type field from eCPRI header (ECPRI_HDR_S[MSG_TYPE]). */
        uint64_t pc_id                 : 16; /**< [ 23:  8] Value of ECPRI_HDR_S[PC_ID] ID field from eCPRI header. */
        uint64_t seq_id                : 16; /**< [ 39: 24] ECPRI_HDR_S[SEQ_ID] field from eCPRI header when ECPRI_HDR_S[MSG_TYPE] == 0, else 0x0. */
        uint64_t flow_id               : 10; /**< [ 49: 40] EDEC_FLOW_ID with subtable offset added. */
        uint64_t lmac_id               : 2;  /**< [ 51: 50] LMAC ID on which the packet was received. */
        uint64_t rfoe_id               : 4;  /**< [ 55: 52] RFOE Instance ID on which the packet was received. */
        uint64_t sa_table_index        : 7;  /**< [ 62: 56] Source Address Table Index. */
        uint64_t reserved_63           : 1;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_rfoe_psw_w2_ecpri_s_s cn; */
};

/**
 * Structure rfoe_psw_w2_roe_s
 *
 * RFOE PSW W2 ROE PROTOCOL STATUS Word Structure
 * PROTOCOL STATUS Word described by the RoE Protocol
 */
union cavm_rfoe_psw_w2_roe_s
{
    uint64_t u;
    struct cavm_rfoe_psw_w2_roe_s_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_63           : 1;
        uint64_t sa_table_index        : 7;  /**< [ 62: 56] Source Address Table Index. */
        uint64_t rfoe_id               : 4;  /**< [ 55: 52] RFOE Instance ID on which the Packet was received */
        uint64_t lmac_id               : 2;  /**< [ 51: 50] LMAC ID on which the Packet was received */
        uint64_t reserved_48_49        : 2;
        uint64_t flowid                : 8;  /**< [ 47: 40] Flow ID field extracted from RoE packet header. Undefined for CHI and ALT
                                                                 packets. */
        uint64_t reserved_24_39        : 16;
        uint64_t fd_antid              : 8;  /**< [ 23: 16] For RoE subtype = 0xFD packets, this is the RFOE_FD_CSTM_HDR_S[ANTENNA]
                                                                 field from the custom header. For other packets, this field is reserved. */
        uint64_t fd_symbol             : 8;  /**< [ 15:  8] For RoE subtype = 0xFD packets, this is the RFOE_FD_CSTM_HDR_S[SYMBOL]
                                                                 field from the custom header. For other packets, this field is
                                                                 reserved. */
        uint64_t subtype               : 8;  /**< [  7:  0] RoE subtype field. Value is undefined for CHI, ALT, and Transparent packets. */
#else /* Word 0 - Little Endian */
        uint64_t subtype               : 8;  /**< [  7:  0] RoE subtype field. Value is undefined for CHI, ALT, and Transparent packets. */
        uint64_t fd_symbol             : 8;  /**< [ 15:  8] For RoE subtype = 0xFD packets, this is the RFOE_FD_CSTM_HDR_S[SYMBOL]
                                                                 field from the custom header. For other packets, this field is
                                                                 reserved. */
        uint64_t fd_antid              : 8;  /**< [ 23: 16] For RoE subtype = 0xFD packets, this is the RFOE_FD_CSTM_HDR_S[ANTENNA]
                                                                 field from the custom header. For other packets, this field is reserved. */
        uint64_t reserved_24_39        : 16;
        uint64_t flowid                : 8;  /**< [ 47: 40] Flow ID field extracted from RoE packet header. Undefined for CHI and ALT
                                                                 packets. */
        uint64_t reserved_48_49        : 2;
        uint64_t lmac_id               : 2;  /**< [ 51: 50] LMAC ID on which the Packet was received */
        uint64_t rfoe_id               : 4;  /**< [ 55: 52] RFOE Instance ID on which the Packet was received */
        uint64_t sa_table_index        : 7;  /**< [ 62: 56] Source Address Table Index. */
        uint64_t reserved_63           : 1;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_rfoe_psw_w2_roe_s_s cn; */
};

/**
 * Structure rfoe_psw_w3_bcn_s
 *
 * RFOE Timestamp BCN Structure
 * RFOE Timestamp field described in BCN format
 */
union cavm_rfoe_psw_w3_bcn_s
{
    uint64_t u;
    struct cavm_rfoe_psw_w3_bcn_s_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t n1                    : 40; /**< [ 63: 24] BCN N1 Timer value */
        uint64_t n2                    : 24; /**< [ 23:  0] BCN N2 Timer value */
#else /* Word 0 - Little Endian */
        uint64_t n2                    : 24; /**< [ 23:  0] BCN N2 Timer value */
        uint64_t n1                    : 40; /**< [ 63: 24] BCN N1 Timer value */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_rfoe_psw_w3_bcn_s_s cn; */
};

/**
 * Structure rfoe_psw_w4_s
 *
 * RFOE PSW W4 Word Structure
 * RFOE Packet Status Word Structure Used for all packets.
 */
union cavm_rfoe_psw_w4_s
{
    uint64_t u;
    struct cavm_rfoe_psw_w4_s_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t ptp_timestamp         : 64; /**< [ 63:  0] PTP timestamp received from RPM when the LMAC's RFOE()_RX_CTRL[RX_PTP_MODE] bit is
                                                                 set, else 0x0. */
#else /* Word 0 - Little Endian */
        uint64_t ptp_timestamp         : 64; /**< [ 63:  0] PTP timestamp received from RPM when the LMAC's RFOE()_RX_CTRL[RX_PTP_MODE] bit is
                                                                 set, else 0x0. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_rfoe_psw_w4_s_s cn; */
};

/**
 * Structure rfoe_rx_pkt_log_s
 *
 * RFOE RX ROE Packet Logger Structure
 * Structure written to the RX packet logger in memory for ROE packets. RX packet logging is
 * enabled by RFOE()_RX_PKT_LOGGER()_CFG[ENABLE].
 */
union cavm_rfoe_rx_pkt_log_s
{
    uint64_t u[4];
    struct cavm_rfoe_rx_pkt_log_s_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t psw_w0                : 64; /**< [ 63:  0] Contains RFOE_PSW_W0_S */
#else /* Word 0 - Little Endian */
        uint64_t psw_w0                : 64; /**< [ 63:  0] Contains RFOE_PSW_W0_S */
#endif /* Word 0 - End */
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 1 - Big Endian */
        uint64_t psw_w1                : 64; /**< [127: 64] Contains RFOE_PSW_W1_S */
#else /* Word 1 - Little Endian */
        uint64_t psw_w1                : 64; /**< [127: 64] Contains RFOE_PSW_W1_S */
#endif /* Word 1 - End */
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 2 - Big Endian */
        uint64_t psw_w2                : 64; /**< [191:128] Contains either RFOE_PSW_W2_ROE_S or RFOE_PSW_W2_ECPRI_S */
#else /* Word 2 - Little Endian */
        uint64_t psw_w2                : 64; /**< [191:128] Contains either RFOE_PSW_W2_ROE_S or RFOE_PSW_W2_ECPRI_S */
#endif /* Word 2 - End */
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 3 - Big Endian */
        uint64_t timestamp             : 64; /**< [255:192] Contains either RFOE_PSW_W4_S.PTP_TIMESTAMP if PTP is enabled, or according to
                                                                 RFOE()_RX_CTRL[TSTAMP_FORMAT]
                                                                 otherwise. */
#else /* Word 3 - Little Endian */
        uint64_t timestamp             : 64; /**< [255:192] Contains either RFOE_PSW_W4_S.PTP_TIMESTAMP if PTP is enabled, or according to
                                                                 RFOE()_RX_CTRL[TSTAMP_FORMAT]
                                                                 otherwise. */
#endif /* Word 3 - End */
    } s;
    /* struct cavm_rfoe_rx_pkt_log_s_s cn; */
};

/**
 * Structure rfoe_timestamp_s
 *
 * RFOE Custom Timestamp Structure
 * Specifies fields in RFOE timestamp.
 */
union cavm_rfoe_timestamp_s
{
    uint32_t u;
    struct cavm_rfoe_timestamp_s_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t bfn                   : 12; /**< [ 31: 20] Basic frame number. */
        uint32_t sf                    : 4;  /**< [ 19: 16] Subframe number. */
        uint32_t time_tick             : 16; /**< [ 15:  0] Time tick. */
#else /* Word 0 - Little Endian */
        uint32_t time_tick             : 16; /**< [ 15:  0] Time tick. */
        uint32_t sf                    : 4;  /**< [ 19: 16] Subframe number. */
        uint32_t bfn                   : 12; /**< [ 31: 20] Basic frame number. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_rfoe_timestamp_s_s cn; */
};

/**
 * Structure rfoe_tx_pkt_log_s
 *
 * RFOE TX Packet Logger Structure
 * Structure used by TX packet logger and TX PTP timestamp ring. TX packet logging is
 * enabled by RFOE()_TX_LMAC_CFG()[TX_PKT_LOG_EN]. TX PTP timestamp ring is
 * enabled by RFOE()_LINK()_TX_PTP_RING_CTL[ENABLE].
 */
union cavm_rfoe_tx_pkt_log_s
{
    uint64_t u[2];
    struct cavm_rfoe_tx_pkt_log_s_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t timestamp             : 64; /**< [ 63:  0] Timestamp value sampled when the packet was sent from the RFOE block.
                                                                 Timestamp format is based on RFOE()_TX_CTRL[TSTAMP_FORMAT] */
#else /* Word 0 - Little Endian */
        uint64_t timestamp             : 64; /**< [ 63:  0] Timestamp value sampled when the packet was sent from the RFOE block.
                                                                 Timestamp format is based on RFOE()_TX_CTRL[TSTAMP_FORMAT] */
#endif /* Word 0 - End */
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 1 - Big Endian */
        uint64_t reserved_88_127       : 40;
        uint64_t tx_err                : 1;  /**< [ 87: 87] When set to 1, indicates the packet was sent to RPM with the error bit set. */
        uint64_t drop                  : 1;  /**< [ 86: 86] When set to 1, indicates the packet was dropped by the RFOE block. */
        uint64_t jobid                 : 16; /**< [ 85: 70] The AB Job ID for this packet. */
        uint64_t rfoe_id               : 4;  /**< [ 69: 66] Instance of the RFOE block from which the packet was sent. */
        uint64_t lmac_id               : 2;  /**< [ 65: 64] LMAC to which the packet was sent. */
#else /* Word 1 - Little Endian */
        uint64_t lmac_id               : 2;  /**< [ 65: 64] LMAC to which the packet was sent. */
        uint64_t rfoe_id               : 4;  /**< [ 69: 66] Instance of the RFOE block from which the packet was sent. */
        uint64_t jobid                 : 16; /**< [ 85: 70] The AB Job ID for this packet. */
        uint64_t drop                  : 1;  /**< [ 86: 86] When set to 1, indicates the packet was dropped by the RFOE block. */
        uint64_t tx_err                : 1;  /**< [ 87: 87] When set to 1, indicates the packet was sent to RPM with the error bit set. */
        uint64_t reserved_88_127       : 40;
#endif /* Word 1 - End */
    } s;
    /* struct cavm_rfoe_tx_pkt_log_s_s cn; */
};

/**
 * Register (NCB) rfoe#_active_pc
 *
 * RFOE Active PC  Register
 * This register counts the conditional clocks for power management.
 */
union cavm_rfoex_active_pc
{
    uint64_t u;
    struct cavm_rfoex_active_pc_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t cnt                   : 64; /**< [ 63:  0](R/W/H) Count of conditional clock cycles since reset. */
#else /* Word 0 - Little Endian */
        uint64_t cnt                   : 64; /**< [ 63:  0](R/W/H) Count of conditional clock cycles since reset. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_rfoex_active_pc_s cn; */
};
typedef union cavm_rfoex_active_pc cavm_rfoex_active_pc_t;

static inline uint64_t CAVM_RFOEX_ACTIVE_PC(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_RFOEX_ACTIVE_PC(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_ODINMP) && (a<=6))
        return 0x861000001068ll + 0x1000000ll * ((a) & 0x7);
    __cavm_csr_fatal("RFOEX_ACTIVE_PC", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_RFOEX_ACTIVE_PC(a) cavm_rfoex_active_pc_t
#define bustype_CAVM_RFOEX_ACTIVE_PC(a) CSR_TYPE_NCB
#define basename_CAVM_RFOEX_ACTIVE_PC(a) "RFOEX_ACTIVE_PC"
#define busnum_CAVM_RFOEX_ACTIVE_PC(a) (a)
#define arguments_CAVM_RFOEX_ACTIVE_PC(a) (a),-1,-1,-1

/**
 * Register (NCB) rfoe#_link#_tx_ptp_ring_addr#
 *
 * RFOE TX PTP Timestamp Ring Address Register
 * This register holds the TX PTP timestamp ring address in memory.
 */
union cavm_rfoex_linkx_tx_ptp_ring_addrx
{
    uint64_t u;
    struct cavm_rfoex_linkx_tx_ptp_ring_addrx_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_53_63        : 11;
        uint64_t base_addr             : 53; /**< [ 52:  0](R/W) Base Address of TX PTP Timestamp Ring. */
#else /* Word 0 - Little Endian */
        uint64_t base_addr             : 53; /**< [ 52:  0](R/W) Base Address of TX PTP Timestamp Ring. */
        uint64_t reserved_53_63        : 11;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_rfoex_linkx_tx_ptp_ring_addrx_s cn; */
};
typedef union cavm_rfoex_linkx_tx_ptp_ring_addrx cavm_rfoex_linkx_tx_ptp_ring_addrx_t;

static inline uint64_t CAVM_RFOEX_LINKX_TX_PTP_RING_ADDRX(uint64_t a, uint64_t b, uint64_t c) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_RFOEX_LINKX_TX_PTP_RING_ADDRX(uint64_t a, uint64_t b, uint64_t c)
{
    if (cavm_is_model(OCTEONTX_ODINMP) && ((a<=6) && (b<=3) && (c<=3)))
        return 0x861000001920ll + 0x1000000ll * ((a) & 0x7) + 0x40ll * ((b) & 0x3) + 8ll * ((c) & 0x3);
    __cavm_csr_fatal("RFOEX_LINKX_TX_PTP_RING_ADDRX", 3, a, b, c, 0, 0, 0);
}

#define typedef_CAVM_RFOEX_LINKX_TX_PTP_RING_ADDRX(a,b,c) cavm_rfoex_linkx_tx_ptp_ring_addrx_t
#define bustype_CAVM_RFOEX_LINKX_TX_PTP_RING_ADDRX(a,b,c) CSR_TYPE_NCB
#define basename_CAVM_RFOEX_LINKX_TX_PTP_RING_ADDRX(a,b,c) "RFOEX_LINKX_TX_PTP_RING_ADDRX"
#define busnum_CAVM_RFOEX_LINKX_TX_PTP_RING_ADDRX(a,b,c) (a)
#define arguments_CAVM_RFOEX_LINKX_TX_PTP_RING_ADDRX(a,b,c) (a),(b),(c),-1

/**
 * Register (NCB) rfoe#_link#_tx_ptp_ring_ctl
 *
 * RFOE TX PTP Timestamp Ring Control Register
 * This register controls the TX PTP timestamp ring in memory.
 */
union cavm_rfoex_linkx_tx_ptp_ring_ctl
{
    uint64_t u;
    struct cavm_rfoex_linkx_tx_ptp_ring_ctl_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t tail_idx3             : 5;  /**< [ 63: 59](RO/H) Index of next entry to write. */
        uint64_t tail_idx2             : 5;  /**< [ 58: 54](RO/H) Index of next entry to write. */
        uint64_t tail_idx1             : 5;  /**< [ 53: 49](RO/H) Index of next entry to write. */
        uint64_t tail_idx0             : 5;  /**< [ 48: 44](RO/H) Index of next entry to write. */
        uint64_t reserved_36_43        : 8;
        uint64_t gmid3                 : 3;  /**< [ 35: 33](R/W) Guest Machine ID to select stream ID for writes to the ring when [TARGE_MEM]==1. */
        uint64_t gmid2                 : 3;  /**< [ 32: 30](R/W) Guest Machine ID to select stream ID for writes to the ring when [TARGE_MEM]==1. */
        uint64_t gmid1                 : 3;  /**< [ 29: 27](R/W) Guest Machine ID to select stream ID for writes to the ring when [TARGE_MEM]==1. */
        uint64_t gmid0                 : 3;  /**< [ 26: 24](R/W) Guest Machine ID to select stream ID for writes to the ring when [TARGE_MEM]==1. */
        uint64_t dswap3                : 2;  /**< [ 23: 22](R/W) Byte swap mode enumerated by MHBW_PNB_DSWAP_E. Ignored when TARGET_MEM is configured as BPHY SMEM. */
        uint64_t dswap2                : 2;  /**< [ 21: 20](R/W) Byte swap mode enumerated by MHBW_PNB_DSWAP_E. Ignored when TARGET_MEM is configured as BPHY SMEM. */
        uint64_t dswap1                : 2;  /**< [ 19: 18](R/W) Byte swap mode enumerated by MHBW_PNB_DSWAP_E. Ignored when TARGET_MEM is configured as BPHY SMEM. */
        uint64_t dswap0                : 2;  /**< [ 17: 16](R/W) Byte swap mode enumerated by MHBW_PNB_DSWAP_E. Ignored when TARGET_MEM is configured as BPHY SMEM. */
        uint64_t size3                 : 2;  /**< [ 15: 14](R/W) Number of TX PTP timestamp entries in Ring. 0x0 = 4 entries. 0x1 = 8 entries.
                                                                 0x2 = 16 entries. 0x3 = 32 entries. */
        uint64_t size2                 : 2;  /**< [ 13: 12](R/W) Number of TX PTP timestamp entries in Ring. 0x0 = 4 entries. 0x1 = 8 entries.
                                                                 0x2 = 16 entries. 0x3 = 32 entries. */
        uint64_t size1                 : 2;  /**< [ 11: 10](R/W) Number of TX PTP timestamp entries in Ring. 0x0 = 4 entries. 0x1 = 8 entries.
                                                                 0x2 = 16 entries. 0x3 = 32 entries. */
        uint64_t size0                 : 2;  /**< [  9:  8](R/W) Number of TX PTP timestamp entries in Ring. 0x0 = 4 entries. 0x1 = 8 entries.
                                                                 0x2 = 16 entries. 0x3 = 32 entries. */
        uint64_t target_mem            : 4;  /**< [  7:  4](R/W) TX PTP timestamp ring Target Memory Bit map. 0 = SMEM. 1 = LLC/DRAM. */
        uint64_t enable                : 4;  /**< [  3:  0](R/W) TX PTP timestamp ring enables. */
#else /* Word 0 - Little Endian */
        uint64_t enable                : 4;  /**< [  3:  0](R/W) TX PTP timestamp ring enables. */
        uint64_t target_mem            : 4;  /**< [  7:  4](R/W) TX PTP timestamp ring Target Memory Bit map. 0 = SMEM. 1 = LLC/DRAM. */
        uint64_t size0                 : 2;  /**< [  9:  8](R/W) Number of TX PTP timestamp entries in Ring. 0x0 = 4 entries. 0x1 = 8 entries.
                                                                 0x2 = 16 entries. 0x3 = 32 entries. */
        uint64_t size1                 : 2;  /**< [ 11: 10](R/W) Number of TX PTP timestamp entries in Ring. 0x0 = 4 entries. 0x1 = 8 entries.
                                                                 0x2 = 16 entries. 0x3 = 32 entries. */
        uint64_t size2                 : 2;  /**< [ 13: 12](R/W) Number of TX PTP timestamp entries in Ring. 0x0 = 4 entries. 0x1 = 8 entries.
                                                                 0x2 = 16 entries. 0x3 = 32 entries. */
        uint64_t size3                 : 2;  /**< [ 15: 14](R/W) Number of TX PTP timestamp entries in Ring. 0x0 = 4 entries. 0x1 = 8 entries.
                                                                 0x2 = 16 entries. 0x3 = 32 entries. */
        uint64_t dswap0                : 2;  /**< [ 17: 16](R/W) Byte swap mode enumerated by MHBW_PNB_DSWAP_E. Ignored when TARGET_MEM is configured as BPHY SMEM. */
        uint64_t dswap1                : 2;  /**< [ 19: 18](R/W) Byte swap mode enumerated by MHBW_PNB_DSWAP_E. Ignored when TARGET_MEM is configured as BPHY SMEM. */
        uint64_t dswap2                : 2;  /**< [ 21: 20](R/W) Byte swap mode enumerated by MHBW_PNB_DSWAP_E. Ignored when TARGET_MEM is configured as BPHY SMEM. */
        uint64_t dswap3                : 2;  /**< [ 23: 22](R/W) Byte swap mode enumerated by MHBW_PNB_DSWAP_E. Ignored when TARGET_MEM is configured as BPHY SMEM. */
        uint64_t gmid0                 : 3;  /**< [ 26: 24](R/W) Guest Machine ID to select stream ID for writes to the ring when [TARGE_MEM]==1. */
        uint64_t gmid1                 : 3;  /**< [ 29: 27](R/W) Guest Machine ID to select stream ID for writes to the ring when [TARGE_MEM]==1. */
        uint64_t gmid2                 : 3;  /**< [ 32: 30](R/W) Guest Machine ID to select stream ID for writes to the ring when [TARGE_MEM]==1. */
        uint64_t gmid3                 : 3;  /**< [ 35: 33](R/W) Guest Machine ID to select stream ID for writes to the ring when [TARGE_MEM]==1. */
        uint64_t reserved_36_43        : 8;
        uint64_t tail_idx0             : 5;  /**< [ 48: 44](RO/H) Index of next entry to write. */
        uint64_t tail_idx1             : 5;  /**< [ 53: 49](RO/H) Index of next entry to write. */
        uint64_t tail_idx2             : 5;  /**< [ 58: 54](RO/H) Index of next entry to write. */
        uint64_t tail_idx3             : 5;  /**< [ 63: 59](RO/H) Index of next entry to write. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_rfoex_linkx_tx_ptp_ring_ctl_s cn; */
};
typedef union cavm_rfoex_linkx_tx_ptp_ring_ctl cavm_rfoex_linkx_tx_ptp_ring_ctl_t;

static inline uint64_t CAVM_RFOEX_LINKX_TX_PTP_RING_CTL(uint64_t a, uint64_t b) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_RFOEX_LINKX_TX_PTP_RING_CTL(uint64_t a, uint64_t b)
{
    if (cavm_is_model(OCTEONTX_ODINMP) && ((a<=6) && (b<=3)))
        return 0x861000001900ll + 0x1000000ll * ((a) & 0x7) + 8ll * ((b) & 0x3);
    __cavm_csr_fatal("RFOEX_LINKX_TX_PTP_RING_CTL", 2, a, b, 0, 0, 0, 0);
}

#define typedef_CAVM_RFOEX_LINKX_TX_PTP_RING_CTL(a,b) cavm_rfoex_linkx_tx_ptp_ring_ctl_t
#define bustype_CAVM_RFOEX_LINKX_TX_PTP_RING_CTL(a,b) CSR_TYPE_NCB
#define basename_CAVM_RFOEX_LINKX_TX_PTP_RING_CTL(a,b) "RFOEX_LINKX_TX_PTP_RING_CTL"
#define busnum_CAVM_RFOEX_LINKX_TX_PTP_RING_CTL(a,b) (a)
#define arguments_CAVM_RFOEX_LINKX_TX_PTP_RING_CTL(a,b) (a),(b),-1,-1

/**
 * Register (NCB) rfoe#_rx_apert_ddr_max
 *
 * RFOE RX Aperture DDR Maximum Register
 * Maximum IOVA for DMA of RX packets.
 */
union cavm_rfoex_rx_apert_ddr_max
{
    uint64_t u;
    struct cavm_rfoex_rx_apert_ddr_max_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_53_63        : 11;
        uint64_t addr                  : 53; /**< [ 52:  0](R/W) Highest allowed IOVA for DMA of RX packets. If
                                                                 RFOE()_RX_APERT_DDR_MAX_ENA[ENABLE]=1, then DMA to LLC/DRAM is only allowed
                                                                 to IOVAs less than or equal to [ADDR]. Must be aligned to end of cache line--
                                                                 bottom seven bits ADDR\<6:0\> must be 0x7F. */
#else /* Word 0 - Little Endian */
        uint64_t addr                  : 53; /**< [ 52:  0](R/W) Highest allowed IOVA for DMA of RX packets. If
                                                                 RFOE()_RX_APERT_DDR_MAX_ENA[ENABLE]=1, then DMA to LLC/DRAM is only allowed
                                                                 to IOVAs less than or equal to [ADDR]. Must be aligned to end of cache line--
                                                                 bottom seven bits ADDR\<6:0\> must be 0x7F. */
        uint64_t reserved_53_63        : 11;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_rfoex_rx_apert_ddr_max_s cn; */
};
typedef union cavm_rfoex_rx_apert_ddr_max cavm_rfoex_rx_apert_ddr_max_t;

static inline uint64_t CAVM_RFOEX_RX_APERT_DDR_MAX(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_RFOEX_RX_APERT_DDR_MAX(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_ODINMP) && (a<=6))
        return 0x861000001838ll + 0x1000000ll * ((a) & 0x7);
    __cavm_csr_fatal("RFOEX_RX_APERT_DDR_MAX", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_RFOEX_RX_APERT_DDR_MAX(a) cavm_rfoex_rx_apert_ddr_max_t
#define bustype_CAVM_RFOEX_RX_APERT_DDR_MAX(a) CSR_TYPE_NCB
#define basename_CAVM_RFOEX_RX_APERT_DDR_MAX(a) "RFOEX_RX_APERT_DDR_MAX"
#define busnum_CAVM_RFOEX_RX_APERT_DDR_MAX(a) (a)
#define arguments_CAVM_RFOEX_RX_APERT_DDR_MAX(a) (a),-1,-1,-1

/**
 * Register (NCB) rfoe#_rx_apert_ddr_max_ena
 *
 * RFOE RX Aperture LLC/DRAM Maximum Address Enable Register
 * Enable LLC/DRAM maximum aperture check.
 */
union cavm_rfoex_rx_apert_ddr_max_ena
{
    uint64_t u;
    struct cavm_rfoex_rx_apert_ddr_max_ena_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t enable                : 1;  /**< [ 63: 63](R/W) Enable LLC/DRAM maximum aperture check, when set to 1. */
        uint64_t reserved_0_62         : 63;
#else /* Word 0 - Little Endian */
        uint64_t reserved_0_62         : 63;
        uint64_t enable                : 1;  /**< [ 63: 63](R/W) Enable LLC/DRAM maximum aperture check, when set to 1. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_rfoex_rx_apert_ddr_max_ena_s cn; */
};
typedef union cavm_rfoex_rx_apert_ddr_max_ena cavm_rfoex_rx_apert_ddr_max_ena_t;

static inline uint64_t CAVM_RFOEX_RX_APERT_DDR_MAX_ENA(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_RFOEX_RX_APERT_DDR_MAX_ENA(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_ODINMP) && (a<=6))
        return 0x861000001858ll + 0x1000000ll * ((a) & 0x7);
    __cavm_csr_fatal("RFOEX_RX_APERT_DDR_MAX_ENA", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_RFOEX_RX_APERT_DDR_MAX_ENA(a) cavm_rfoex_rx_apert_ddr_max_ena_t
#define bustype_CAVM_RFOEX_RX_APERT_DDR_MAX_ENA(a) CSR_TYPE_NCB
#define basename_CAVM_RFOEX_RX_APERT_DDR_MAX_ENA(a) "RFOEX_RX_APERT_DDR_MAX_ENA"
#define busnum_CAVM_RFOEX_RX_APERT_DDR_MAX_ENA(a) (a)
#define arguments_CAVM_RFOEX_RX_APERT_DDR_MAX_ENA(a) (a),-1,-1,-1

/**
 * Register (NCB) rfoe#_rx_apert_ddr_min
 *
 * RFOE RX Aperture LLC/DRAM Minimum Address Register
 * Minimum IOVA for DMA of RX packets.
 */
union cavm_rfoex_rx_apert_ddr_min
{
    uint64_t u;
    struct cavm_rfoex_rx_apert_ddr_min_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_53_63        : 11;
        uint64_t addr                  : 53; /**< [ 52:  0](R/W) Lowest allowed IOVA for DMA of RX packets. If
                                                                 RFOE()_RX_APERT_DDR_MIN_ENA[ENABLE]=1, then DMA to LLC/DRAM
                                                                 is only allowed to IOVAs greater than or equal to [ADDR]. Must be 128-bit
                                                                 aligned. */
#else /* Word 0 - Little Endian */
        uint64_t addr                  : 53; /**< [ 52:  0](R/W) Lowest allowed IOVA for DMA of RX packets. If
                                                                 RFOE()_RX_APERT_DDR_MIN_ENA[ENABLE]=1, then DMA to LLC/DRAM
                                                                 is only allowed to IOVAs greater than or equal to [ADDR]. Must be 128-bit
                                                                 aligned. */
        uint64_t reserved_53_63        : 11;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_rfoex_rx_apert_ddr_min_s cn; */
};
typedef union cavm_rfoex_rx_apert_ddr_min cavm_rfoex_rx_apert_ddr_min_t;

static inline uint64_t CAVM_RFOEX_RX_APERT_DDR_MIN(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_RFOEX_RX_APERT_DDR_MIN(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_ODINMP) && (a<=6))
        return 0x861000001830ll + 0x1000000ll * ((a) & 0x7);
    __cavm_csr_fatal("RFOEX_RX_APERT_DDR_MIN", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_RFOEX_RX_APERT_DDR_MIN(a) cavm_rfoex_rx_apert_ddr_min_t
#define bustype_CAVM_RFOEX_RX_APERT_DDR_MIN(a) CSR_TYPE_NCB
#define basename_CAVM_RFOEX_RX_APERT_DDR_MIN(a) "RFOEX_RX_APERT_DDR_MIN"
#define busnum_CAVM_RFOEX_RX_APERT_DDR_MIN(a) (a)
#define arguments_CAVM_RFOEX_RX_APERT_DDR_MIN(a) (a),-1,-1,-1

/**
 * Register (NCB) rfoe#_rx_apert_ddr_min_ena
 *
 * RFOE RX Aperture LLC/DRAM Minimum Address Enable Register
 * Enable LLC/DRAM minimum aperture check.
 */
union cavm_rfoex_rx_apert_ddr_min_ena
{
    uint64_t u;
    struct cavm_rfoex_rx_apert_ddr_min_ena_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t enable                : 1;  /**< [ 63: 63](R/W) Enable LLC/DRAM minimum aperture check, when set to 1. */
        uint64_t reserved_0_62         : 63;
#else /* Word 0 - Little Endian */
        uint64_t reserved_0_62         : 63;
        uint64_t enable                : 1;  /**< [ 63: 63](R/W) Enable LLC/DRAM minimum aperture check, when set to 1. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_rfoex_rx_apert_ddr_min_ena_s cn; */
};
typedef union cavm_rfoex_rx_apert_ddr_min_ena cavm_rfoex_rx_apert_ddr_min_ena_t;

static inline uint64_t CAVM_RFOEX_RX_APERT_DDR_MIN_ENA(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_RFOEX_RX_APERT_DDR_MIN_ENA(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_ODINMP) && (a<=6))
        return 0x861000001850ll + 0x1000000ll * ((a) & 0x7);
    __cavm_csr_fatal("RFOEX_RX_APERT_DDR_MIN_ENA", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_RFOEX_RX_APERT_DDR_MIN_ENA(a) cavm_rfoex_rx_apert_ddr_min_ena_t
#define bustype_CAVM_RFOEX_RX_APERT_DDR_MIN_ENA(a) CSR_TYPE_NCB
#define basename_CAVM_RFOEX_RX_APERT_DDR_MIN_ENA(a) "RFOEX_RX_APERT_DDR_MIN_ENA"
#define busnum_CAVM_RFOEX_RX_APERT_DDR_MIN_ENA(a) (a)
#define arguments_CAVM_RFOEX_RX_APERT_DDR_MIN_ENA(a) (a),-1,-1,-1

/**
 * Register (NCB) rfoe#_rx_apert_smem_max
 *
 * RFOE RX Aperture SMEM Maximum Address Register
 * Maximum address for SMEM DMA of RX packets.
 */
union cavm_rfoex_rx_apert_smem_max
{
    uint64_t u;
    struct cavm_rfoex_rx_apert_smem_max_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_26_63        : 38;
        uint64_t addr                  : 26; /**< [ 25:  0](R/W) Highest allowed SMEM byte address for DMA of RX packets. If
                                                                 RFOE()_RX_APERT_SMEM_MAX_ENA[ENABLE]=1, then DMA to SMEM must have
                                                                 an address less than or equal to [ADDR]. The bottom four bits
                                                                 ADDR\<3:0\> must be 0xF. */
#else /* Word 0 - Little Endian */
        uint64_t addr                  : 26; /**< [ 25:  0](R/W) Highest allowed SMEM byte address for DMA of RX packets. If
                                                                 RFOE()_RX_APERT_SMEM_MAX_ENA[ENABLE]=1, then DMA to SMEM must have
                                                                 an address less than or equal to [ADDR]. The bottom four bits
                                                                 ADDR\<3:0\> must be 0xF. */
        uint64_t reserved_26_63        : 38;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_rfoex_rx_apert_smem_max_s cn; */
};
typedef union cavm_rfoex_rx_apert_smem_max cavm_rfoex_rx_apert_smem_max_t;

static inline uint64_t CAVM_RFOEX_RX_APERT_SMEM_MAX(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_RFOEX_RX_APERT_SMEM_MAX(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_ODINMP) && (a<=6))
        return 0x861000001828ll + 0x1000000ll * ((a) & 0x7);
    __cavm_csr_fatal("RFOEX_RX_APERT_SMEM_MAX", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_RFOEX_RX_APERT_SMEM_MAX(a) cavm_rfoex_rx_apert_smem_max_t
#define bustype_CAVM_RFOEX_RX_APERT_SMEM_MAX(a) CSR_TYPE_NCB
#define basename_CAVM_RFOEX_RX_APERT_SMEM_MAX(a) "RFOEX_RX_APERT_SMEM_MAX"
#define busnum_CAVM_RFOEX_RX_APERT_SMEM_MAX(a) (a)
#define arguments_CAVM_RFOEX_RX_APERT_SMEM_MAX(a) (a),-1,-1,-1

/**
 * Register (NCB) rfoe#_rx_apert_smem_max_ena
 *
 * RFOE RX Aperture SMEM Maximum Address Enable Register
 * Enable SMEM maximum aperture check.
 */
union cavm_rfoex_rx_apert_smem_max_ena
{
    uint64_t u;
    struct cavm_rfoex_rx_apert_smem_max_ena_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t enable                : 1;  /**< [ 63: 63](R/W) Enable SMEM maximum aperture check, when set to 1. */
        uint64_t reserved_0_62         : 63;
#else /* Word 0 - Little Endian */
        uint64_t reserved_0_62         : 63;
        uint64_t enable                : 1;  /**< [ 63: 63](R/W) Enable SMEM maximum aperture check, when set to 1. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_rfoex_rx_apert_smem_max_ena_s cn; */
};
typedef union cavm_rfoex_rx_apert_smem_max_ena cavm_rfoex_rx_apert_smem_max_ena_t;

static inline uint64_t CAVM_RFOEX_RX_APERT_SMEM_MAX_ENA(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_RFOEX_RX_APERT_SMEM_MAX_ENA(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_ODINMP) && (a<=6))
        return 0x861000001848ll + 0x1000000ll * ((a) & 0x7);
    __cavm_csr_fatal("RFOEX_RX_APERT_SMEM_MAX_ENA", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_RFOEX_RX_APERT_SMEM_MAX_ENA(a) cavm_rfoex_rx_apert_smem_max_ena_t
#define bustype_CAVM_RFOEX_RX_APERT_SMEM_MAX_ENA(a) CSR_TYPE_NCB
#define basename_CAVM_RFOEX_RX_APERT_SMEM_MAX_ENA(a) "RFOEX_RX_APERT_SMEM_MAX_ENA"
#define busnum_CAVM_RFOEX_RX_APERT_SMEM_MAX_ENA(a) (a)
#define arguments_CAVM_RFOEX_RX_APERT_SMEM_MAX_ENA(a) (a),-1,-1,-1

/**
 * Register (NCB) rfoe#_rx_apert_smem_min
 *
 * RFOE RX Aperture SMEM Minimum Address Register
 * Minimum address for SMEM DMA of RX packets.
 */
union cavm_rfoex_rx_apert_smem_min
{
    uint64_t u;
    struct cavm_rfoex_rx_apert_smem_min_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_26_63        : 38;
        uint64_t addr                  : 26; /**< [ 25:  0](R/W) Lowest allowed SMEM byte address for DMA of RX packets. If
                                                                 RFOE()_RX_APERT_SMEM_MIN_ENA[ENABLE]=1, then DMA to SMEM must have
                                                                 an address greater than or equal to [ADDR]. Must be 128-bit
                                                                 aligned. */
#else /* Word 0 - Little Endian */
        uint64_t addr                  : 26; /**< [ 25:  0](R/W) Lowest allowed SMEM byte address for DMA of RX packets. If
                                                                 RFOE()_RX_APERT_SMEM_MIN_ENA[ENABLE]=1, then DMA to SMEM must have
                                                                 an address greater than or equal to [ADDR]. Must be 128-bit
                                                                 aligned. */
        uint64_t reserved_26_63        : 38;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_rfoex_rx_apert_smem_min_s cn; */
};
typedef union cavm_rfoex_rx_apert_smem_min cavm_rfoex_rx_apert_smem_min_t;

static inline uint64_t CAVM_RFOEX_RX_APERT_SMEM_MIN(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_RFOEX_RX_APERT_SMEM_MIN(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_ODINMP) && (a<=6))
        return 0x861000001820ll + 0x1000000ll * ((a) & 0x7);
    __cavm_csr_fatal("RFOEX_RX_APERT_SMEM_MIN", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_RFOEX_RX_APERT_SMEM_MIN(a) cavm_rfoex_rx_apert_smem_min_t
#define bustype_CAVM_RFOEX_RX_APERT_SMEM_MIN(a) CSR_TYPE_NCB
#define basename_CAVM_RFOEX_RX_APERT_SMEM_MIN(a) "RFOEX_RX_APERT_SMEM_MIN"
#define busnum_CAVM_RFOEX_RX_APERT_SMEM_MIN(a) (a)
#define arguments_CAVM_RFOEX_RX_APERT_SMEM_MIN(a) (a),-1,-1,-1

/**
 * Register (NCB) rfoe#_rx_apert_smem_min_ena
 *
 * RFOE RX Aperture SMEM Minimum Address Enable Register
 * Enable minimum SMEM aperture check.
 */
union cavm_rfoex_rx_apert_smem_min_ena
{
    uint64_t u;
    struct cavm_rfoex_rx_apert_smem_min_ena_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t enable                : 1;  /**< [ 63: 63](R/W) Enable SMEM minimum aperture check, when set to 1. */
        uint64_t reserved_0_62         : 63;
#else /* Word 0 - Little Endian */
        uint64_t reserved_0_62         : 63;
        uint64_t enable                : 1;  /**< [ 63: 63](R/W) Enable SMEM minimum aperture check, when set to 1. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_rfoex_rx_apert_smem_min_ena_s cn; */
};
typedef union cavm_rfoex_rx_apert_smem_min_ena cavm_rfoex_rx_apert_smem_min_ena_t;

static inline uint64_t CAVM_RFOEX_RX_APERT_SMEM_MIN_ENA(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_RFOEX_RX_APERT_SMEM_MIN_ENA(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_ODINMP) && (a<=6))
        return 0x861000001840ll + 0x1000000ll * ((a) & 0x7);
    __cavm_csr_fatal("RFOEX_RX_APERT_SMEM_MIN_ENA", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_RFOEX_RX_APERT_SMEM_MIN_ENA(a) cavm_rfoex_rx_apert_smem_min_ena_t
#define bustype_CAVM_RFOEX_RX_APERT_SMEM_MIN_ENA(a) CSR_TYPE_NCB
#define basename_CAVM_RFOEX_RX_APERT_SMEM_MIN_ENA(a) "RFOEX_RX_APERT_SMEM_MIN_ENA"
#define busnum_CAVM_RFOEX_RX_APERT_SMEM_MIN_ENA(a) (a)
#define arguments_CAVM_RFOEX_RX_APERT_SMEM_MIN_ENA(a) (a),-1,-1,-1

/**
 * Register (NCB) rfoe#_rx_cfg
 *
 * RFOE_RX General Configuration Register
 * General receive configuration.
 */
union cavm_rfoex_rx_cfg
{
    uint64_t u;
    struct cavm_rfoex_rx_cfg_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_21_63        : 43;
        uint64_t logger_hp             : 1;  /**< [ 20: 20](R/W) Logger writes are sent with high priority. */
        uint64_t wr_hp                 : 4;  /**< [ 19: 16](R/W) Write priority. One bit per LMAC. If a bit is set, writes associated
                                                                 with the given LMAC are marked high priority. Otherwise writes are
                                                                 low-priority. Does not apply to logger writes. */
        uint64_t reserved_3_15         : 13;
        uint64_t calibrate_x2p         : 1;  /**< [  2:  2](R/W) Calibrate X2P bus. Writing this bit from zero to one starts a calibration cycle.
                                                                 Software may then monitor the RFOE()_RX_STATUS[CALIBRATE_DONE] bit for completion,
                                                                 and clear this bit.
                                                                 * Initialization sequence must calibrate X2P.
                                                                 * Must calibrate only during post-reset initialization sequence while
                                                                 RFOE()_RX_CTRL[DATA_PKT_RX_EN]==0.
                                                                 * Must be 0 when RFOE()_RX_CTRL[DATA_PKT_RX_EN]==1. */
        uint64_t force_intf_clk_en     : 1;  /**< [  1:  1](R/W) Force the conditional clocks on interface signals between blocks. For diagnostic use only. */
        uint64_t force_cond_clk_en     : 1;  /**< [  0:  0](R/W) Force the conditional clocks active within the block. For diagnostic use only. */
#else /* Word 0 - Little Endian */
        uint64_t force_cond_clk_en     : 1;  /**< [  0:  0](R/W) Force the conditional clocks active within the block. For diagnostic use only. */
        uint64_t force_intf_clk_en     : 1;  /**< [  1:  1](R/W) Force the conditional clocks on interface signals between blocks. For diagnostic use only. */
        uint64_t calibrate_x2p         : 1;  /**< [  2:  2](R/W) Calibrate X2P bus. Writing this bit from zero to one starts a calibration cycle.
                                                                 Software may then monitor the RFOE()_RX_STATUS[CALIBRATE_DONE] bit for completion,
                                                                 and clear this bit.
                                                                 * Initialization sequence must calibrate X2P.
                                                                 * Must calibrate only during post-reset initialization sequence while
                                                                 RFOE()_RX_CTRL[DATA_PKT_RX_EN]==0.
                                                                 * Must be 0 when RFOE()_RX_CTRL[DATA_PKT_RX_EN]==1. */
        uint64_t reserved_3_15         : 13;
        uint64_t wr_hp                 : 4;  /**< [ 19: 16](R/W) Write priority. One bit per LMAC. If a bit is set, writes associated
                                                                 with the given LMAC are marked high priority. Otherwise writes are
                                                                 low-priority. Does not apply to logger writes. */
        uint64_t logger_hp             : 1;  /**< [ 20: 20](R/W) Logger writes are sent with high priority. */
        uint64_t reserved_21_63        : 43;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_rfoex_rx_cfg_s cn; */
};
typedef union cavm_rfoex_rx_cfg cavm_rfoex_rx_cfg_t;

static inline uint64_t CAVM_RFOEX_RX_CFG(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_RFOEX_RX_CFG(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_ODINMP) && (a<=6))
        return 0x861000001008ll + 0x1000000ll * ((a) & 0x7);
    __cavm_csr_fatal("RFOEX_RX_CFG", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_RFOEX_RX_CFG(a) cavm_rfoex_rx_cfg_t
#define bustype_CAVM_RFOEX_RX_CFG(a) CSR_TYPE_NCB
#define basename_CAVM_RFOEX_RX_CFG(a) "RFOEX_RX_CFG"
#define busnum_CAVM_RFOEX_RX_CFG(a) (a)
#define arguments_CAVM_RFOEX_RX_CFG(a) (a),-1,-1,-1

/**
 * Register (NCB) rfoe#_rx_ctrl
 *
 * RFOE RX Control Register
 * Control and status for doing BPHY/RFIF reset sequences, LMAC PTP handling, and
 * control handling of VLAN TPID matching errors.
 */
union cavm_rfoex_rx_ctrl
{
    uint64_t u;
    struct cavm_rfoex_rx_ctrl_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_32_63        : 32;
        uint64_t swe                   : 1;  /**< [ 31: 31](R/W) Enables Switch Table Look up for Ingress. Default is to skip lookup. */
        uint64_t reserved_20_30        : 11;
        uint64_t vlan_tpid_err_drop_ena : 4; /**< [ 19: 16](R/W) Per LMAC control of VLAN matching error handling. For error cases that set
                                                                 RFOE()_RX_ERROR_INT[VLAN_TPID]:
                                                                 *0 - treat packet as an ALT packet.
                                                                 *1 - clean drop packet.  Increment  RFOE()_RX_PKT_ERR_DROP_STAT. */
        uint64_t rx_sync_enhanced_mode : 1;  /**< [ 15: 15](R/W) Selects the RFOE RX_SYNC Action for ROE 0xFD subType:
                                                                 1: Enables sequence ID checking for RFOE()_RX_IND_JDT_CFG1.ORDERINFO_TYPE SEQNUM.
                                                                 0: Legacy behavior, uses TIMESTAMP sequence checking. */
        uint64_t reserved_12_14        : 3;
        uint64_t rx_ptp_mode           : 4;  /**< [ 11:  8](R/W) Per LMAC control of RX PTP.
                                                                 When set, causes RX to interpret first 8B of packet as PTP Timestamp. Normal
                                                                 packet data starts at byte 8.
                                                                 RX strips PTP and writes value in RFOE_PSW.PTP_TIMESTAMP and Packet logger.
                                                                 Packet traffic must be IDLE or disabled before changing the value of [RX_PTP_MODE] */
        uint64_t tstamp_format         : 1;  /**< [  7:  7](R/W) Selects the RFOE timestamp format:
                                                                 1: BCN format.
                                                                 0: Reserved. */
        uint64_t reserved_5_6          : 2;
        uint64_t rx_idle               : 1;  /**< [  4:  4](RO/H) When [DATA_PKT_RX_EN] = 0, [RX_IDLE]=1 indicates no in-flight RX
                                                                 packets and any new RX packets will be discarded. [RX_IDLE] = 1
                                                                 indicates that it is safe to do a BPHY and/or RFIF reset.
                                                                 For the reset domains:
                                                                 * BPHY domain DMA can still be active, but a BPHY reset will reset all these transactions.
                                                                 * RFIF domain is discarding all traffic.
                                                                 * Once [RX_IDLE] is set, it will stay set until [DATA_PKT_RX_EN] is set by software.
                                                                 [RX_IDLE] should be ignored when [DATA_PKT_RX_EN] = 1. */
        uint64_t data_pkt_rx_en        : 4;  /**< [  3:  0](R/W) Per-LMAC enables for RX traffic. Software must write to 1 to enable RX traffic for that LMAC.

                                                                 When [DATA_PKT_RX_EN] transitions from 1 to 0, RFOE completes any
                                                                 in-flight RX packets for that LMAC. At the next packet boundary, RFOE will
                                                                 begin discarding any subsequent packets for that LMAC. RFOE will set RX_IDLE
                                                                 when all LMACs have their respective [DATA_PKT_RX_EN] transition to 0 and all
                                                                 in-flight RX packets have completed.

                                                                 When [DATA_PKT_RX_EN] transitions from 0 to 1, RFOE will continue to
                                                                 discard any in-flight packets for that LMAC, and begin normal reception at the next
                                                                 start-of-packet boundary from RPM. */
#else /* Word 0 - Little Endian */
        uint64_t data_pkt_rx_en        : 4;  /**< [  3:  0](R/W) Per-LMAC enables for RX traffic. Software must write to 1 to enable RX traffic for that LMAC.

                                                                 When [DATA_PKT_RX_EN] transitions from 1 to 0, RFOE completes any
                                                                 in-flight RX packets for that LMAC. At the next packet boundary, RFOE will
                                                                 begin discarding any subsequent packets for that LMAC. RFOE will set RX_IDLE
                                                                 when all LMACs have their respective [DATA_PKT_RX_EN] transition to 0 and all
                                                                 in-flight RX packets have completed.

                                                                 When [DATA_PKT_RX_EN] transitions from 0 to 1, RFOE will continue to
                                                                 discard any in-flight packets for that LMAC, and begin normal reception at the next
                                                                 start-of-packet boundary from RPM. */
        uint64_t rx_idle               : 1;  /**< [  4:  4](RO/H) When [DATA_PKT_RX_EN] = 0, [RX_IDLE]=1 indicates no in-flight RX
                                                                 packets and any new RX packets will be discarded. [RX_IDLE] = 1
                                                                 indicates that it is safe to do a BPHY and/or RFIF reset.
                                                                 For the reset domains:
                                                                 * BPHY domain DMA can still be active, but a BPHY reset will reset all these transactions.
                                                                 * RFIF domain is discarding all traffic.
                                                                 * Once [RX_IDLE] is set, it will stay set until [DATA_PKT_RX_EN] is set by software.
                                                                 [RX_IDLE] should be ignored when [DATA_PKT_RX_EN] = 1. */
        uint64_t reserved_5_6          : 2;
        uint64_t tstamp_format         : 1;  /**< [  7:  7](R/W) Selects the RFOE timestamp format:
                                                                 1: BCN format.
                                                                 0: Reserved. */
        uint64_t rx_ptp_mode           : 4;  /**< [ 11:  8](R/W) Per LMAC control of RX PTP.
                                                                 When set, causes RX to interpret first 8B of packet as PTP Timestamp. Normal
                                                                 packet data starts at byte 8.
                                                                 RX strips PTP and writes value in RFOE_PSW.PTP_TIMESTAMP and Packet logger.
                                                                 Packet traffic must be IDLE or disabled before changing the value of [RX_PTP_MODE] */
        uint64_t reserved_12_14        : 3;
        uint64_t rx_sync_enhanced_mode : 1;  /**< [ 15: 15](R/W) Selects the RFOE RX_SYNC Action for ROE 0xFD subType:
                                                                 1: Enables sequence ID checking for RFOE()_RX_IND_JDT_CFG1.ORDERINFO_TYPE SEQNUM.
                                                                 0: Legacy behavior, uses TIMESTAMP sequence checking. */
        uint64_t vlan_tpid_err_drop_ena : 4; /**< [ 19: 16](R/W) Per LMAC control of VLAN matching error handling. For error cases that set
                                                                 RFOE()_RX_ERROR_INT[VLAN_TPID]:
                                                                 *0 - treat packet as an ALT packet.
                                                                 *1 - clean drop packet.  Increment  RFOE()_RX_PKT_ERR_DROP_STAT. */
        uint64_t reserved_20_30        : 11;
        uint64_t swe                   : 1;  /**< [ 31: 31](R/W) Enables Switch Table Look up for Ingress. Default is to skip lookup. */
        uint64_t reserved_32_63        : 32;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_rfoex_rx_ctrl_s cn; */
};
typedef union cavm_rfoex_rx_ctrl cavm_rfoex_rx_ctrl_t;

static inline uint64_t CAVM_RFOEX_RX_CTRL(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_RFOEX_RX_CTRL(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_ODINMP) && (a<=6))
        return 0x861000001018ll + 0x1000000ll * ((a) & 0x7);
    __cavm_csr_fatal("RFOEX_RX_CTRL", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_RFOEX_RX_CTRL(a) cavm_rfoex_rx_ctrl_t
#define bustype_CAVM_RFOEX_RX_CTRL(a) CSR_TYPE_NCB
#define basename_CAVM_RFOEX_RX_CTRL(a) "RFOEX_RX_CTRL"
#define busnum_CAVM_RFOEX_RX_CTRL(a) (a)
#define arguments_CAVM_RFOEX_RX_CTRL(a) (a),-1,-1,-1

/**
 * Register (NCB) rfoe#_rx_direction_ctl#
 *
 * RFOE RX Direction Control Registers
 * These registers control how packets received from RPM are routed and processed.
 *
 * Incoming packets search for these registers in-order to find the first one
 * with a matching [ETHERTYPE] and [VALID] = 1. The first match determines how
 * the packet is routed.
 *
 * The last register ({b} = 7) determines the routing for any packet with no
 * other match. Packets that have no match in 0..6 are handled in a transparent
 * manner as defined by the configuration selected by RFOE()_RX_IND_FT()_CFG.
 */
union cavm_rfoex_rx_direction_ctlx
{
    uint64_t u;
    struct cavm_rfoex_rx_direction_ctlx_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_36_63        : 28;
        uint64_t dma_type              : 4;  /**< [ 35: 32](R/W) Type of packet processing, as enumerated by RFOE_RX_DIR_CTL_PKT_TYPE_E. */
        uint64_t reserved_29_31        : 3;
        uint64_t valid                 : 1;  /**< [ 28: 28](R/W) Entry is valid. If [VALID] = 0, the register is ignored, except for the
                                                                 last register ({b} = 7) which ignores this field. */
        uint64_t ethertype             : 16; /**< [ 27: 12](R/W) EtherType to match against incoming packet from RPM.
                                                                 * For the last register ({b} = 7) this field is a don't care and all
                                                                 EtherTypes match (if they haven't already matched one of the other
                                                                 registers).

                                                                 EtherType from packet is the EtherType after all VLAN tags. */
        uint64_t reserved_8_11         : 4;
        uint64_t flowid                : 8;  /**< [  7:  0](R/W) FlowID for configuration lookup when processing packets other than RoE and
                                                                 eCPRI, i.e one of the following:
                                                                 * [DMA_TYPE] = RFOE_RX_DIR_CTL_PKT_TYPE_E::CHI.
                                                                 * [DMA_TYPE] = RFOE_RX_DIR_CTL_PKT_TYPE_E::GENERIC(0..7).
                                                                 * Last register ({b} = 7) is selected due to no EtherType match in
                                                                 preceding registers. [DMA_TYPE] is ignored and the packet is classified as
                                                                 RFOE_RX_DIR_CTL_PKT_TYPE_E::ALT.

                                                                 RoE and eCPRI packets do not use this field. */
#else /* Word 0 - Little Endian */
        uint64_t flowid                : 8;  /**< [  7:  0](R/W) FlowID for configuration lookup when processing packets other than RoE and
                                                                 eCPRI, i.e one of the following:
                                                                 * [DMA_TYPE] = RFOE_RX_DIR_CTL_PKT_TYPE_E::CHI.
                                                                 * [DMA_TYPE] = RFOE_RX_DIR_CTL_PKT_TYPE_E::GENERIC(0..7).
                                                                 * Last register ({b} = 7) is selected due to no EtherType match in
                                                                 preceding registers. [DMA_TYPE] is ignored and the packet is classified as
                                                                 RFOE_RX_DIR_CTL_PKT_TYPE_E::ALT.

                                                                 RoE and eCPRI packets do not use this field. */
        uint64_t reserved_8_11         : 4;
        uint64_t ethertype             : 16; /**< [ 27: 12](R/W) EtherType to match against incoming packet from RPM.
                                                                 * For the last register ({b} = 7) this field is a don't care and all
                                                                 EtherTypes match (if they haven't already matched one of the other
                                                                 registers).

                                                                 EtherType from packet is the EtherType after all VLAN tags. */
        uint64_t valid                 : 1;  /**< [ 28: 28](R/W) Entry is valid. If [VALID] = 0, the register is ignored, except for the
                                                                 last register ({b} = 7) which ignores this field. */
        uint64_t reserved_29_31        : 3;
        uint64_t dma_type              : 4;  /**< [ 35: 32](R/W) Type of packet processing, as enumerated by RFOE_RX_DIR_CTL_PKT_TYPE_E. */
        uint64_t reserved_36_63        : 28;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_rfoex_rx_direction_ctlx_s cn; */
};
typedef union cavm_rfoex_rx_direction_ctlx cavm_rfoex_rx_direction_ctlx_t;

static inline uint64_t CAVM_RFOEX_RX_DIRECTION_CTLX(uint64_t a, uint64_t b) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_RFOEX_RX_DIRECTION_CTLX(uint64_t a, uint64_t b)
{
    if (cavm_is_model(OCTEONTX_ODINMP) && ((a<=6) && (b<=7)))
        return 0x861000001780ll + 0x1000000ll * ((a) & 0x7) + 8ll * ((b) & 0x7);
    __cavm_csr_fatal("RFOEX_RX_DIRECTION_CTLX", 2, a, b, 0, 0, 0, 0);
}

#define typedef_CAVM_RFOEX_RX_DIRECTION_CTLX(a,b) cavm_rfoex_rx_direction_ctlx_t
#define bustype_CAVM_RFOEX_RX_DIRECTION_CTLX(a,b) CSR_TYPE_NCB
#define basename_CAVM_RFOEX_RX_DIRECTION_CTLX(a,b) "RFOEX_RX_DIRECTION_CTLX"
#define busnum_CAVM_RFOEX_RX_DIRECTION_CTLX(a,b) (a)
#define arguments_CAVM_RFOEX_RX_DIRECTION_CTLX(a,b) (a),(b),-1,-1

/**
 * Register (NCB) rfoe#_rx_dma_complete_stat#
 *
 * RFOE RX  DMA Completion Statistic Register
 * Number of DMA commands completed, indicated by requesting to send a JCA. One for each source LMAC.
 * * 0xFD: All responses for all packets segments have been received, plus  PSW and JDW responses.
 * * Others: All responses for DMA have been received, plus PSW and JDW responses.
 *
 * Does not include packet logger request/responses.
 *
 * Does not count completions for RFOE()_RX_IND_JDT_CFG0[JCA_ENABLE]==0.
 */
union cavm_rfoex_rx_dma_complete_statx
{
    uint64_t u;
    struct cavm_rfoex_rx_dma_complete_statx_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_48_63        : 16;
        uint64_t stat                  : 48; /**< [ 47:  0](R/W/H) The counter value. Wraps to zero at 2^48. */
#else /* Word 0 - Little Endian */
        uint64_t stat                  : 48; /**< [ 47:  0](R/W/H) The counter value. Wraps to zero at 2^48. */
        uint64_t reserved_48_63        : 16;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_rfoex_rx_dma_complete_statx_s cn; */
};
typedef union cavm_rfoex_rx_dma_complete_statx cavm_rfoex_rx_dma_complete_statx_t;

static inline uint64_t CAVM_RFOEX_RX_DMA_COMPLETE_STATX(uint64_t a, uint64_t b) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_RFOEX_RX_DMA_COMPLETE_STATX(uint64_t a, uint64_t b)
{
    if (cavm_is_model(OCTEONTX_ODINMP) && ((a<=6) && (b<=3)))
        return 0x861000001da0ll + 0x1000000ll * ((a) & 0x7) + 8ll * ((b) & 0x3);
    __cavm_csr_fatal("RFOEX_RX_DMA_COMPLETE_STATX", 2, a, b, 0, 0, 0, 0);
}

#define typedef_CAVM_RFOEX_RX_DMA_COMPLETE_STATX(a,b) cavm_rfoex_rx_dma_complete_statx_t
#define bustype_CAVM_RFOEX_RX_DMA_COMPLETE_STATX(a,b) CSR_TYPE_NCB
#define basename_CAVM_RFOEX_RX_DMA_COMPLETE_STATX(a,b) "RFOEX_RX_DMA_COMPLETE_STATX"
#define busnum_CAVM_RFOEX_RX_DMA_COMPLETE_STATX(a,b) (a)
#define arguments_CAVM_RFOEX_RX_DMA_COMPLETE_STATX(a,b) (a),(b),-1,-1

/**
 * Register (NCB) rfoe#_rx_dma_octs_stat#
 *
 * RFOE RX Packet DMA Byte Statistic Register
 * Number of octets written to memory. Since RFOE DMA writes are always 16B, this
 * counter increments by 16 for every write. Counter wraps to zero at 2^48.
 * One counter per LMAC. Does not include packet logger bytes.
 * Includes all bytes from packet DMA, including PSW and JDW.  Since all writes are 128-bit aligned,
 * counts are always incremented by 16 bytes.
 */
union cavm_rfoex_rx_dma_octs_statx
{
    uint64_t u;
    struct cavm_rfoex_rx_dma_octs_statx_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_48_63        : 16;
        uint64_t stat                  : 48; /**< [ 47:  0](R/W/H) Number of octets written. Wraps to zero at 2^48. */
#else /* Word 0 - Little Endian */
        uint64_t stat                  : 48; /**< [ 47:  0](R/W/H) Number of octets written. Wraps to zero at 2^48. */
        uint64_t reserved_48_63        : 16;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_rfoex_rx_dma_octs_statx_s cn; */
};
typedef union cavm_rfoex_rx_dma_octs_statx cavm_rfoex_rx_dma_octs_statx_t;

static inline uint64_t CAVM_RFOEX_RX_DMA_OCTS_STATX(uint64_t a, uint64_t b) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_RFOEX_RX_DMA_OCTS_STATX(uint64_t a, uint64_t b)
{
    if (cavm_is_model(OCTEONTX_ODINMP) && ((a<=6) && (b<=3)))
        return 0x861000001d80ll + 0x1000000ll * ((a) & 0x7) + 8ll * ((b) & 0x3);
    __cavm_csr_fatal("RFOEX_RX_DMA_OCTS_STATX", 2, a, b, 0, 0, 0, 0);
}

#define typedef_CAVM_RFOEX_RX_DMA_OCTS_STATX(a,b) cavm_rfoex_rx_dma_octs_statx_t
#define bustype_CAVM_RFOEX_RX_DMA_OCTS_STATX(a,b) CSR_TYPE_NCB
#define basename_CAVM_RFOEX_RX_DMA_OCTS_STATX(a,b) "RFOEX_RX_DMA_OCTS_STATX"
#define busnum_CAVM_RFOEX_RX_DMA_OCTS_STATX(a,b) (a)
#define arguments_CAVM_RFOEX_RX_DMA_OCTS_STATX(a,b) (a),(b),-1,-1

/**
 * Register (NCB) rfoe#_rx_dma_pkt_stat#
 *
 * RFOE RX Packet DMA Packet Count Statistic Register
 * Number of packets written to memory. One for each source LMAC.
 */
union cavm_rfoex_rx_dma_pkt_statx
{
    uint64_t u;
    struct cavm_rfoex_rx_dma_pkt_statx_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_48_63        : 16;
        uint64_t stat                  : 48; /**< [ 47:  0](R/W/H) The counter value. Wraps to zero at 2^48. */
#else /* Word 0 - Little Endian */
        uint64_t stat                  : 48; /**< [ 47:  0](R/W/H) The counter value. Wraps to zero at 2^48. */
        uint64_t reserved_48_63        : 16;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_rfoex_rx_dma_pkt_statx_s cn; */
};
typedef union cavm_rfoex_rx_dma_pkt_statx cavm_rfoex_rx_dma_pkt_statx_t;

static inline uint64_t CAVM_RFOEX_RX_DMA_PKT_STATX(uint64_t a, uint64_t b) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_RFOEX_RX_DMA_PKT_STATX(uint64_t a, uint64_t b)
{
    if (cavm_is_model(OCTEONTX_ODINMP) && ((a<=6) && (b<=3)))
        return 0x861000001d60ll + 0x1000000ll * ((a) & 0x7) + 8ll * ((b) & 0x3);
    __cavm_csr_fatal("RFOEX_RX_DMA_PKT_STATX", 2, a, b, 0, 0, 0, 0);
}

#define typedef_CAVM_RFOEX_RX_DMA_PKT_STATX(a,b) cavm_rfoex_rx_dma_pkt_statx_t
#define bustype_CAVM_RFOEX_RX_DMA_PKT_STATX(a,b) CSR_TYPE_NCB
#define basename_CAVM_RFOEX_RX_DMA_PKT_STATX(a,b) "RFOEX_RX_DMA_PKT_STATX"
#define busnum_CAVM_RFOEX_RX_DMA_PKT_STATX(a,b) (a)
#define arguments_CAVM_RFOEX_RX_DMA_PKT_STATX(a,b) (a),(b),-1,-1

/**
 * Register (NCB) rfoe#_rx_ecpri_cfg#
 *
 * RFOE RX eCPRI Miscellaneous Configuration Register
 * Per LMAC Configurations.
 */
union cavm_rfoex_rx_ecpri_cfgx
{
    uint64_t u;
    struct cavm_rfoex_rx_ecpri_cfgx_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_57_63        : 7;
        uint64_t msg_type_enable       : 17; /**< [ 56: 40](R/W) Enable for eCPRI message types. Similar to RFOE()_RX_IND_FT()_CFG[ENABLE]:
                                                                 _ bits \<15..0\> = enable for ECPRI_HDR_S[MSG_TYPE] values 15..0.
                                                                 _ bit \<16\> = enable for ECPRI_HDR_S[MSG_TYPE] values 16 and above.

                                                                 For each bit:
                                                                 0 = Drop packets and count as RFOE()_RX_IND_FT()_CFG[ENABLE] drop.
                                                                 1 = Process packets. */
        uint64_t reserved_38_39        : 2;
        uint64_t inst_id_mask          : 4;  /**< [ 37: 34](R/W) Used for [PCID_FLOWID_MODE]:

                                                                 * RFOE_ECPRI_PCID_FLOWID_MODE_E::BASE  - Calculate flow ID as:
                                                                 _ flowID = (ECPRI_HDR_S[PC_ID]-[PCID_BASE_MASK]) & 0x3ff.

                                                                 * RFOE_ECPRI_PCID_FLOWID_MODE_E::HASH  - Calculate flow ID as:
                                                                 _ flowID = hash({inst_id\<3:0\> & [INST_ID_MASK], lmac_id\<1:0\> & [LMAC_BASE_MASK],
                                                                 ECPRI_HDR_S[PC_ID] & [PCID_BASE_MASK]}).
                                                                 * RFOE_ECPRI_PCID_FLOWID_MODE_E::SHIFT - Calculate flow ID as:
                                                                 _ flowID = ((ECPRI_HDR_S[PC_ID] & [PCID_BASE_MASK]) \>\>  [PCID_MSK_SHFT]) & 0x3ff. */
        uint64_t lmac_base_mask        : 2;  /**< [ 33: 32](R/W) Used for [PCID_FLOWID_MODE]:

                                                                 * RFOE_ECPRI_PCID_FLOWID_MODE_E::BASE  - Calculate flow ID as:
                                                                 _ flowID = (ECPRI_HDR_S[PC_ID]-[PCID_BASE_MASK]) & 0x3ff.

                                                                 * RFOE_ECPRI_PCID_FLOWID_MODE_E::HASH  - Calculate flow ID as:
                                                                 _ flowID = hash({inst_id\<3:0\> & [INST_ID_MASK], lmac_id\<1:0\> & [LMAC_BASE_MASK],
                                                                 ECPRI_HDR_S[PC_ID] & [PCID_BASE_MASK]}).
                                                                 * RFOE_ECPRI_PCID_FLOWID_MODE_E::SHIFT - Calculate flow ID as:
                                                                 _ flowID = ((ECPRI_HDR_S[PC_ID] & [PCID_BASE_MASK]) \>\>  [PCID_MSK_SHFT]) & 0x3ff. */
        uint64_t pcid_base_mask        : 16; /**< [ 31: 16](R/W) Used for [PCID_FLOWID_MODE]:

                                                                 * RFOE_ECPRI_PCID_FLOWID_MODE_E::BASE  - Calculate flow ID as:
                                                                 _ flowID = (ECPRI_HDR_S[PC_ID]-[PCID_BASE_MASK]) & 0x3ff.

                                                                 * RFOE_ECPRI_PCID_FLOWID_MODE_E::HASH  - Calculate flow ID as:
                                                                 _ flowID = hash({inst_id\<3:0\> & [INST_ID_MASK], lmac_id\<1:0\> & [LMAC_BASE_MASK],
                                                                 ECPRI_HDR_S[PC_ID] & [PCID_BASE_MASK]}).

                                                                 * RFOE_ECPRI_PCID_FLOWID_MODE_E::SHIFT - Calculate flow ID as:
                                                                 _ flowID = ((ECPRI_HDR_S[PC_ID] & [PCID_BASE_MASK]) \>\>  [PCID_MSK_SHFT]) & 0x3ff. */
        uint64_t reserved_15           : 1;
        uint64_t pcid_msk_shft         : 3;  /**< [ 14: 12](R/W) Define base for PCID-\>FLOWID mapping when [PCID_FLOWID_MODE] =
                                                                 RFOE_ECPRI_PCID_FLOWID_MODE_E::SHIFT.

                                                                 flowID = ((ECPRI_HDR_S[PC_ID] & [PCID_BASE_MASK]) \>\>  [PCID_MSK_SHFT]) & 0x3ff. */
        uint64_t reserved_2_11         : 10;
        uint64_t pcid_flowid_mode      : 2;  /**< [  1:  0](R/W) Define PCID-\>FLOWID mapping, as enumerated by RFOE_ECPRI_PCID_FLOWID_MODE_E. */
#else /* Word 0 - Little Endian */
        uint64_t pcid_flowid_mode      : 2;  /**< [  1:  0](R/W) Define PCID-\>FLOWID mapping, as enumerated by RFOE_ECPRI_PCID_FLOWID_MODE_E. */
        uint64_t reserved_2_11         : 10;
        uint64_t pcid_msk_shft         : 3;  /**< [ 14: 12](R/W) Define base for PCID-\>FLOWID mapping when [PCID_FLOWID_MODE] =
                                                                 RFOE_ECPRI_PCID_FLOWID_MODE_E::SHIFT.

                                                                 flowID = ((ECPRI_HDR_S[PC_ID] & [PCID_BASE_MASK]) \>\>  [PCID_MSK_SHFT]) & 0x3ff. */
        uint64_t reserved_15           : 1;
        uint64_t pcid_base_mask        : 16; /**< [ 31: 16](R/W) Used for [PCID_FLOWID_MODE]:

                                                                 * RFOE_ECPRI_PCID_FLOWID_MODE_E::BASE  - Calculate flow ID as:
                                                                 _ flowID = (ECPRI_HDR_S[PC_ID]-[PCID_BASE_MASK]) & 0x3ff.

                                                                 * RFOE_ECPRI_PCID_FLOWID_MODE_E::HASH  - Calculate flow ID as:
                                                                 _ flowID = hash({inst_id\<3:0\> & [INST_ID_MASK], lmac_id\<1:0\> & [LMAC_BASE_MASK],
                                                                 ECPRI_HDR_S[PC_ID] & [PCID_BASE_MASK]}).

                                                                 * RFOE_ECPRI_PCID_FLOWID_MODE_E::SHIFT - Calculate flow ID as:
                                                                 _ flowID = ((ECPRI_HDR_S[PC_ID] & [PCID_BASE_MASK]) \>\>  [PCID_MSK_SHFT]) & 0x3ff. */
        uint64_t lmac_base_mask        : 2;  /**< [ 33: 32](R/W) Used for [PCID_FLOWID_MODE]:

                                                                 * RFOE_ECPRI_PCID_FLOWID_MODE_E::BASE  - Calculate flow ID as:
                                                                 _ flowID = (ECPRI_HDR_S[PC_ID]-[PCID_BASE_MASK]) & 0x3ff.

                                                                 * RFOE_ECPRI_PCID_FLOWID_MODE_E::HASH  - Calculate flow ID as:
                                                                 _ flowID = hash({inst_id\<3:0\> & [INST_ID_MASK], lmac_id\<1:0\> & [LMAC_BASE_MASK],
                                                                 ECPRI_HDR_S[PC_ID] & [PCID_BASE_MASK]}).
                                                                 * RFOE_ECPRI_PCID_FLOWID_MODE_E::SHIFT - Calculate flow ID as:
                                                                 _ flowID = ((ECPRI_HDR_S[PC_ID] & [PCID_BASE_MASK]) \>\>  [PCID_MSK_SHFT]) & 0x3ff. */
        uint64_t inst_id_mask          : 4;  /**< [ 37: 34](R/W) Used for [PCID_FLOWID_MODE]:

                                                                 * RFOE_ECPRI_PCID_FLOWID_MODE_E::BASE  - Calculate flow ID as:
                                                                 _ flowID = (ECPRI_HDR_S[PC_ID]-[PCID_BASE_MASK]) & 0x3ff.

                                                                 * RFOE_ECPRI_PCID_FLOWID_MODE_E::HASH  - Calculate flow ID as:
                                                                 _ flowID = hash({inst_id\<3:0\> & [INST_ID_MASK], lmac_id\<1:0\> & [LMAC_BASE_MASK],
                                                                 ECPRI_HDR_S[PC_ID] & [PCID_BASE_MASK]}).
                                                                 * RFOE_ECPRI_PCID_FLOWID_MODE_E::SHIFT - Calculate flow ID as:
                                                                 _ flowID = ((ECPRI_HDR_S[PC_ID] & [PCID_BASE_MASK]) \>\>  [PCID_MSK_SHFT]) & 0x3ff. */
        uint64_t reserved_38_39        : 2;
        uint64_t msg_type_enable       : 17; /**< [ 56: 40](R/W) Enable for eCPRI message types. Similar to RFOE()_RX_IND_FT()_CFG[ENABLE]:
                                                                 _ bits \<15..0\> = enable for ECPRI_HDR_S[MSG_TYPE] values 15..0.
                                                                 _ bit \<16\> = enable for ECPRI_HDR_S[MSG_TYPE] values 16 and above.

                                                                 For each bit:
                                                                 0 = Drop packets and count as RFOE()_RX_IND_FT()_CFG[ENABLE] drop.
                                                                 1 = Process packets. */
        uint64_t reserved_57_63        : 7;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_rfoex_rx_ecpri_cfgx_s cn; */
};
typedef union cavm_rfoex_rx_ecpri_cfgx cavm_rfoex_rx_ecpri_cfgx_t;

static inline uint64_t CAVM_RFOEX_RX_ECPRI_CFGX(uint64_t a, uint64_t b) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_RFOEX_RX_ECPRI_CFGX(uint64_t a, uint64_t b)
{
    if (cavm_is_model(OCTEONTX_ODINMP) && ((a<=6) && (b<=3)))
        return 0x8610000018c0ll + 0x1000000ll * ((a) & 0x7) + 8ll * ((b) & 0x3);
    __cavm_csr_fatal("RFOEX_RX_ECPRI_CFGX", 2, a, b, 0, 0, 0, 0);
}

#define typedef_CAVM_RFOEX_RX_ECPRI_CFGX(a,b) cavm_rfoex_rx_ecpri_cfgx_t
#define bustype_CAVM_RFOEX_RX_ECPRI_CFGX(a,b) CSR_TYPE_NCB
#define basename_CAVM_RFOEX_RX_ECPRI_CFGX(a,b) "RFOEX_RX_ECPRI_CFGX"
#define busnum_CAVM_RFOEX_RX_ECPRI_CFGX(a,b) (a)
#define arguments_CAVM_RFOEX_RX_ECPRI_CFGX(a,b) (a),(b),-1,-1

/**
 * Register (NCB) rfoe#_rx_ecpri_check_ena#
 *
 * RFOE Error eCPRI Error Check Enable Register
 * Per LMAC Enables error specified error checks.  When enabled, allows specific error
 * checks to set error flags and drop packets when checks fail.
 */
union cavm_rfoex_rx_ecpri_check_enax
{
    uint64_t u;
    struct cavm_rfoex_rx_ecpri_check_enax_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_4_63         : 60;
        uint64_t pc_id                 : 1;  /**< [  3:  3](R/W) Enable range check on ECPRI_HDR_S[PC_ID]. */
        uint64_t illegal_rsvd          : 1;  /**< [  2:  2](R/W) Enable check for RSVD!=0. */
        uint64_t illegal_version       : 1;  /**< [  1:  1](R/W) Enable eCPRI packet header Version != 1. */
        uint64_t concatenation         : 1;  /**< [  0:  0](R/W) Enable for eCPRI packet header C=1. */
#else /* Word 0 - Little Endian */
        uint64_t concatenation         : 1;  /**< [  0:  0](R/W) Enable for eCPRI packet header C=1. */
        uint64_t illegal_version       : 1;  /**< [  1:  1](R/W) Enable eCPRI packet header Version != 1. */
        uint64_t illegal_rsvd          : 1;  /**< [  2:  2](R/W) Enable check for RSVD!=0. */
        uint64_t pc_id                 : 1;  /**< [  3:  3](R/W) Enable range check on ECPRI_HDR_S[PC_ID]. */
        uint64_t reserved_4_63         : 60;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_rfoex_rx_ecpri_check_enax_s cn; */
};
typedef union cavm_rfoex_rx_ecpri_check_enax cavm_rfoex_rx_ecpri_check_enax_t;

static inline uint64_t CAVM_RFOEX_RX_ECPRI_CHECK_ENAX(uint64_t a, uint64_t b) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_RFOEX_RX_ECPRI_CHECK_ENAX(uint64_t a, uint64_t b)
{
    if (cavm_is_model(OCTEONTX_ODINMP) && ((a<=6) && (b<=3)))
        return 0x861000001e60ll + 0x1000000ll * ((a) & 0x7) + 8ll * ((b) & 0x3);
    __cavm_csr_fatal("RFOEX_RX_ECPRI_CHECK_ENAX", 2, a, b, 0, 0, 0, 0);
}

#define typedef_CAVM_RFOEX_RX_ECPRI_CHECK_ENAX(a,b) cavm_rfoex_rx_ecpri_check_enax_t
#define bustype_CAVM_RFOEX_RX_ECPRI_CHECK_ENAX(a,b) CSR_TYPE_NCB
#define basename_CAVM_RFOEX_RX_ECPRI_CHECK_ENAX(a,b) "RFOEX_RX_ECPRI_CHECK_ENAX"
#define busnum_CAVM_RFOEX_RX_ECPRI_CHECK_ENAX(a,b) (a)
#define arguments_CAVM_RFOEX_RX_ECPRI_CHECK_ENAX(a,b) (a),(b),-1,-1

/**
 * Register (NCB) rfoe#_rx_ecpri_err_drop_stat#
 *
 * RFOE RX  eCPRI Packet Drop Register
 * Number of eCPRI packets dropped, per LMAC, because of header error detected.
 */
union cavm_rfoex_rx_ecpri_err_drop_statx
{
    uint64_t u;
    struct cavm_rfoex_rx_ecpri_err_drop_statx_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_48_63        : 16;
        uint64_t stat                  : 48; /**< [ 47:  0](R/W/H) The counter value, increments on EOP transfers. Wraps to zero at 2^48.
                                                                 Excludes  RFOE()_RX_ERROR_INT[MALFORMED_X2P_PKT] packets.
                                                                 Excludes packets received when RX is disabled by RFOE()_RX_CTRL[DATA_PKT_RX_EN]=0 . */
#else /* Word 0 - Little Endian */
        uint64_t stat                  : 48; /**< [ 47:  0](R/W/H) The counter value, increments on EOP transfers. Wraps to zero at 2^48.
                                                                 Excludes  RFOE()_RX_ERROR_INT[MALFORMED_X2P_PKT] packets.
                                                                 Excludes packets received when RX is disabled by RFOE()_RX_CTRL[DATA_PKT_RX_EN]=0 . */
        uint64_t reserved_48_63        : 16;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_rfoex_rx_ecpri_err_drop_statx_s cn; */
};
typedef union cavm_rfoex_rx_ecpri_err_drop_statx cavm_rfoex_rx_ecpri_err_drop_statx_t;

static inline uint64_t CAVM_RFOEX_RX_ECPRI_ERR_DROP_STATX(uint64_t a, uint64_t b) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_RFOEX_RX_ECPRI_ERR_DROP_STATX(uint64_t a, uint64_t b)
{
    if (cavm_is_model(OCTEONTX_ODINMP) && ((a<=6) && (b<=3)))
        return 0x861000001e00ll + 0x1000000ll * ((a) & 0x7) + 8ll * ((b) & 0x3);
    __cavm_csr_fatal("RFOEX_RX_ECPRI_ERR_DROP_STATX", 2, a, b, 0, 0, 0, 0);
}

#define typedef_CAVM_RFOEX_RX_ECPRI_ERR_DROP_STATX(a,b) cavm_rfoex_rx_ecpri_err_drop_statx_t
#define bustype_CAVM_RFOEX_RX_ECPRI_ERR_DROP_STATX(a,b) CSR_TYPE_NCB
#define basename_CAVM_RFOEX_RX_ECPRI_ERR_DROP_STATX(a,b) "RFOEX_RX_ECPRI_ERR_DROP_STATX"
#define busnum_CAVM_RFOEX_RX_ECPRI_ERR_DROP_STATX(a,b) (a)
#define arguments_CAVM_RFOEX_RX_ECPRI_ERR_DROP_STATX(a,b) (a),(b),-1,-1

/**
 * Register (NCB) rfoe#_rx_ecpri_pc_id_apert#
 *
 * RFOE RX eCPRI Message Type 0 Range Check Register
 * Per LMAC{b} ECPRI_HDR_S[PC_ID] Aperture Error Range for packets with
 * ECPRI_HDR_S[MSG_TYPE]==0.
 */
union cavm_rfoex_rx_ecpri_pc_id_apertx
{
    uint64_t u;
    struct cavm_rfoex_rx_ecpri_pc_id_apertx_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_32_63        : 32;
        uint64_t pc_id_max             : 16; /**< [ 31: 16](R/W) ECPRI_HDR_S[PC_ID] must be \<= [PC_ID_MAX] */
        uint64_t pc_id_min             : 16; /**< [ 15:  0](R/W) ECPRI_HDR_S[PC_ID] must be \>= [PC_ID_MIN] */
#else /* Word 0 - Little Endian */
        uint64_t pc_id_min             : 16; /**< [ 15:  0](R/W) ECPRI_HDR_S[PC_ID] must be \>= [PC_ID_MIN] */
        uint64_t pc_id_max             : 16; /**< [ 31: 16](R/W) ECPRI_HDR_S[PC_ID] must be \<= [PC_ID_MAX] */
        uint64_t reserved_32_63        : 32;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_rfoex_rx_ecpri_pc_id_apertx_s cn; */
};
typedef union cavm_rfoex_rx_ecpri_pc_id_apertx cavm_rfoex_rx_ecpri_pc_id_apertx_t;

static inline uint64_t CAVM_RFOEX_RX_ECPRI_PC_ID_APERTX(uint64_t a, uint64_t b) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_RFOEX_RX_ECPRI_PC_ID_APERTX(uint64_t a, uint64_t b)
{
    if (cavm_is_model(OCTEONTX_ODINMP) && ((a<=6) && (b<=3)))
        return 0x861000001860ll + 0x1000000ll * ((a) & 0x7) + 8ll * ((b) & 0x3);
    __cavm_csr_fatal("RFOEX_RX_ECPRI_PC_ID_APERTX", 2, a, b, 0, 0, 0, 0);
}

#define typedef_CAVM_RFOEX_RX_ECPRI_PC_ID_APERTX(a,b) cavm_rfoex_rx_ecpri_pc_id_apertx_t
#define bustype_CAVM_RFOEX_RX_ECPRI_PC_ID_APERTX(a,b) CSR_TYPE_NCB
#define basename_CAVM_RFOEX_RX_ECPRI_PC_ID_APERTX(a,b) "RFOEX_RX_ECPRI_PC_ID_APERTX"
#define busnum_CAVM_RFOEX_RX_ECPRI_PC_ID_APERTX(a,b) (a)
#define arguments_CAVM_RFOEX_RX_ECPRI_PC_ID_APERTX(a,b) (a),(b),-1,-1

/**
 * Register (NCB) rfoe#_rx_error_ena_w1c
 *
 * RFOE Order Info Interrupt Error Message Enable Clear Registers
 * This register clears interrupt enable bits.
 */
union cavm_rfoex_rx_error_ena_w1c
{
    uint64_t u;
    struct cavm_rfoex_rx_error_ena_w1c_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_17_63        : 47;
        uint64_t full_drop             : 1;  /**< [ 16: 16](R/W1C/H) Reads or clears enable for RFOE(0..6)_RX_ERROR_INT[FULL_DROP]. */
        uint64_t vlan_tpid             : 1;  /**< [ 15: 15](R/W1C/H) Reads or clears enable for RFOE(0..6)_RX_ERROR_INT[VLAN_TPID]. */
        uint64_t ecpri_hdr             : 1;  /**< [ 14: 14](R/W1C/H) Reads or clears enable for RFOE(0..6)_RX_ERROR_INT[ECPRI_HDR]. */
        uint64_t pkt_len_range         : 1;  /**< [ 13: 13](R/W1C/H) Reads or clears enable for RFOE(0..6)_RX_ERROR_INT[PKT_LEN_RANGE]. */
        uint64_t wrrsp_nfat            : 1;  /**< [ 12: 12](R/W1C/H) Reads or clears enable for RFOE(0..6)_RX_ERROR_INT[WRRSP_NFAT]. */
        uint64_t wrrsp_fat             : 1;  /**< [ 11: 11](R/W1C/H) Reads or clears enable for RFOE(0..6)_RX_ERROR_INT[WRRSP_FAT]. */
        uint64_t fc_psm_opcode         : 1;  /**< [ 10: 10](R/W1C/H) Reads or clears enable for RFOE(0..6)_RX_ERROR_INT[FC_PSM_OPCODE]. */
        uint64_t malformed_x2p_pkt     : 1;  /**< [  9:  9](R/W1C/H) Reads or clears enable for RFOE(0..6)_RX_ERROR_INT[MALFORMED_X2P_PKT]. */
        uint64_t idx_range             : 1;  /**< [  8:  8](R/W1C/H) Reads or clears enable for RFOE(0..6)_RX_ERROR_INT[IDX_RANGE]. */
        uint64_t fd_malformed          : 1;  /**< [  7:  7](R/W1C/H) Reads or clears enable for RFOE(0..6)_RX_ERROR_INT[FD_MALFORMED]. */
        uint64_t fd_state              : 1;  /**< [  6:  6](R/W1C/H) Reads or clears enable for RFOE(0..6)_RX_ERROR_INT[FD_STATE]. */
        uint64_t nxm                   : 1;  /**< [  5:  5](R/W1C/H) Reads or clears enable for RFOE(0..6)_RX_ERROR_INT[NXM]. */
        uint64_t clean_aperture        : 1;  /**< [  4:  4](R/W1C/H) Reads or clears enable for RFOE(0..6)_RX_ERROR_INT[CLEAN_APERTURE]. */
        uint64_t dirty_aperture        : 1;  /**< [  3:  3](R/W1C/H) Reads or clears enable for RFOE(0..6)_RX_ERROR_INT[DIRTY_APERTURE]. */
        uint64_t buf_overflow          : 1;  /**< [  2:  2](R/W1C/H) Reads or clears enable for RFOE(0..6)_RX_ERROR_INT[BUF_OVERFLOW]. */
        uint64_t len_miscomp           : 1;  /**< [  1:  1](R/W1C/H) Reads or clears enable for RFOE(0..6)_RX_ERROR_INT[LEN_MISCOMP]. */
        uint64_t len_abnorm            : 1;  /**< [  0:  0](R/W1C/H) Reads or clears enable for RFOE(0..6)_RX_ERROR_INT[LEN_ABNORM]. */
#else /* Word 0 - Little Endian */
        uint64_t len_abnorm            : 1;  /**< [  0:  0](R/W1C/H) Reads or clears enable for RFOE(0..6)_RX_ERROR_INT[LEN_ABNORM]. */
        uint64_t len_miscomp           : 1;  /**< [  1:  1](R/W1C/H) Reads or clears enable for RFOE(0..6)_RX_ERROR_INT[LEN_MISCOMP]. */
        uint64_t buf_overflow          : 1;  /**< [  2:  2](R/W1C/H) Reads or clears enable for RFOE(0..6)_RX_ERROR_INT[BUF_OVERFLOW]. */
        uint64_t dirty_aperture        : 1;  /**< [  3:  3](R/W1C/H) Reads or clears enable for RFOE(0..6)_RX_ERROR_INT[DIRTY_APERTURE]. */
        uint64_t clean_aperture        : 1;  /**< [  4:  4](R/W1C/H) Reads or clears enable for RFOE(0..6)_RX_ERROR_INT[CLEAN_APERTURE]. */
        uint64_t nxm                   : 1;  /**< [  5:  5](R/W1C/H) Reads or clears enable for RFOE(0..6)_RX_ERROR_INT[NXM]. */
        uint64_t fd_state              : 1;  /**< [  6:  6](R/W1C/H) Reads or clears enable for RFOE(0..6)_RX_ERROR_INT[FD_STATE]. */
        uint64_t fd_malformed          : 1;  /**< [  7:  7](R/W1C/H) Reads or clears enable for RFOE(0..6)_RX_ERROR_INT[FD_MALFORMED]. */
        uint64_t idx_range             : 1;  /**< [  8:  8](R/W1C/H) Reads or clears enable for RFOE(0..6)_RX_ERROR_INT[IDX_RANGE]. */
        uint64_t malformed_x2p_pkt     : 1;  /**< [  9:  9](R/W1C/H) Reads or clears enable for RFOE(0..6)_RX_ERROR_INT[MALFORMED_X2P_PKT]. */
        uint64_t fc_psm_opcode         : 1;  /**< [ 10: 10](R/W1C/H) Reads or clears enable for RFOE(0..6)_RX_ERROR_INT[FC_PSM_OPCODE]. */
        uint64_t wrrsp_fat             : 1;  /**< [ 11: 11](R/W1C/H) Reads or clears enable for RFOE(0..6)_RX_ERROR_INT[WRRSP_FAT]. */
        uint64_t wrrsp_nfat            : 1;  /**< [ 12: 12](R/W1C/H) Reads or clears enable for RFOE(0..6)_RX_ERROR_INT[WRRSP_NFAT]. */
        uint64_t pkt_len_range         : 1;  /**< [ 13: 13](R/W1C/H) Reads or clears enable for RFOE(0..6)_RX_ERROR_INT[PKT_LEN_RANGE]. */
        uint64_t ecpri_hdr             : 1;  /**< [ 14: 14](R/W1C/H) Reads or clears enable for RFOE(0..6)_RX_ERROR_INT[ECPRI_HDR]. */
        uint64_t vlan_tpid             : 1;  /**< [ 15: 15](R/W1C/H) Reads or clears enable for RFOE(0..6)_RX_ERROR_INT[VLAN_TPID]. */
        uint64_t full_drop             : 1;  /**< [ 16: 16](R/W1C/H) Reads or clears enable for RFOE(0..6)_RX_ERROR_INT[FULL_DROP]. */
        uint64_t reserved_17_63        : 47;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_rfoex_rx_error_ena_w1c_s cn; */
};
typedef union cavm_rfoex_rx_error_ena_w1c cavm_rfoex_rx_error_ena_w1c_t;

static inline uint64_t CAVM_RFOEX_RX_ERROR_ENA_W1C(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_RFOEX_RX_ERROR_ENA_W1C(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_ODINMP) && (a<=6))
        return 0x861000001ea0ll + 0x1000000ll * ((a) & 0x7);
    __cavm_csr_fatal("RFOEX_RX_ERROR_ENA_W1C", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_RFOEX_RX_ERROR_ENA_W1C(a) cavm_rfoex_rx_error_ena_w1c_t
#define bustype_CAVM_RFOEX_RX_ERROR_ENA_W1C(a) CSR_TYPE_NCB
#define basename_CAVM_RFOEX_RX_ERROR_ENA_W1C(a) "RFOEX_RX_ERROR_ENA_W1C"
#define busnum_CAVM_RFOEX_RX_ERROR_ENA_W1C(a) (a)
#define arguments_CAVM_RFOEX_RX_ERROR_ENA_W1C(a) (a),-1,-1,-1

/**
 * Register (NCB) rfoe#_rx_error_ena_w1s
 *
 * RFOE Order Info Interrupt Enable Set Register
 * This register sets interrupt enable bits.
 */
union cavm_rfoex_rx_error_ena_w1s
{
    uint64_t u;
    struct cavm_rfoex_rx_error_ena_w1s_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_17_63        : 47;
        uint64_t full_drop             : 1;  /**< [ 16: 16](R/W1S/H) Reads or sets enable for RFOE(0..6)_RX_ERROR_INT[FULL_DROP]. */
        uint64_t vlan_tpid             : 1;  /**< [ 15: 15](R/W1S/H) Reads or sets enable for RFOE(0..6)_RX_ERROR_INT[VLAN_TPID]. */
        uint64_t ecpri_hdr             : 1;  /**< [ 14: 14](R/W1S/H) Reads or sets enable for RFOE(0..6)_RX_ERROR_INT[ECPRI_HDR]. */
        uint64_t pkt_len_range         : 1;  /**< [ 13: 13](R/W1S/H) Reads or sets enable for RFOE(0..6)_RX_ERROR_INT[PKT_LEN_RANGE]. */
        uint64_t wrrsp_nfat            : 1;  /**< [ 12: 12](R/W1S/H) Reads or sets enable for RFOE(0..6)_RX_ERROR_INT[WRRSP_NFAT]. */
        uint64_t wrrsp_fat             : 1;  /**< [ 11: 11](R/W1S/H) Reads or sets enable for RFOE(0..6)_RX_ERROR_INT[WRRSP_FAT]. */
        uint64_t fc_psm_opcode         : 1;  /**< [ 10: 10](R/W1S/H) Reads or sets enable for RFOE(0..6)_RX_ERROR_INT[FC_PSM_OPCODE]. */
        uint64_t malformed_x2p_pkt     : 1;  /**< [  9:  9](R/W1S/H) Reads or sets enable for RFOE(0..6)_RX_ERROR_INT[MALFORMED_X2P_PKT]. */
        uint64_t idx_range             : 1;  /**< [  8:  8](R/W1S/H) Reads or sets enable for RFOE(0..6)_RX_ERROR_INT[IDX_RANGE]. */
        uint64_t fd_malformed          : 1;  /**< [  7:  7](R/W1S/H) Reads or sets enable for RFOE(0..6)_RX_ERROR_INT[FD_MALFORMED]. */
        uint64_t fd_state              : 1;  /**< [  6:  6](R/W1S/H) Reads or sets enable for RFOE(0..6)_RX_ERROR_INT[FD_STATE]. */
        uint64_t nxm                   : 1;  /**< [  5:  5](R/W1S/H) Reads or sets enable for RFOE(0..6)_RX_ERROR_INT[NXM]. */
        uint64_t clean_aperture        : 1;  /**< [  4:  4](R/W1S/H) Reads or sets enable for RFOE(0..6)_RX_ERROR_INT[CLEAN_APERTURE]. */
        uint64_t dirty_aperture        : 1;  /**< [  3:  3](R/W1S/H) Reads or sets enable for RFOE(0..6)_RX_ERROR_INT[DIRTY_APERTURE]. */
        uint64_t buf_overflow          : 1;  /**< [  2:  2](R/W1S/H) Reads or sets enable for RFOE(0..6)_RX_ERROR_INT[BUF_OVERFLOW]. */
        uint64_t len_miscomp           : 1;  /**< [  1:  1](R/W1S/H) Reads or sets enable for RFOE(0..6)_RX_ERROR_INT[LEN_MISCOMP]. */
        uint64_t len_abnorm            : 1;  /**< [  0:  0](R/W1S/H) Reads or sets enable for RFOE(0..6)_RX_ERROR_INT[LEN_ABNORM]. */
#else /* Word 0 - Little Endian */
        uint64_t len_abnorm            : 1;  /**< [  0:  0](R/W1S/H) Reads or sets enable for RFOE(0..6)_RX_ERROR_INT[LEN_ABNORM]. */
        uint64_t len_miscomp           : 1;  /**< [  1:  1](R/W1S/H) Reads or sets enable for RFOE(0..6)_RX_ERROR_INT[LEN_MISCOMP]. */
        uint64_t buf_overflow          : 1;  /**< [  2:  2](R/W1S/H) Reads or sets enable for RFOE(0..6)_RX_ERROR_INT[BUF_OVERFLOW]. */
        uint64_t dirty_aperture        : 1;  /**< [  3:  3](R/W1S/H) Reads or sets enable for RFOE(0..6)_RX_ERROR_INT[DIRTY_APERTURE]. */
        uint64_t clean_aperture        : 1;  /**< [  4:  4](R/W1S/H) Reads or sets enable for RFOE(0..6)_RX_ERROR_INT[CLEAN_APERTURE]. */
        uint64_t nxm                   : 1;  /**< [  5:  5](R/W1S/H) Reads or sets enable for RFOE(0..6)_RX_ERROR_INT[NXM]. */
        uint64_t fd_state              : 1;  /**< [  6:  6](R/W1S/H) Reads or sets enable for RFOE(0..6)_RX_ERROR_INT[FD_STATE]. */
        uint64_t fd_malformed          : 1;  /**< [  7:  7](R/W1S/H) Reads or sets enable for RFOE(0..6)_RX_ERROR_INT[FD_MALFORMED]. */
        uint64_t idx_range             : 1;  /**< [  8:  8](R/W1S/H) Reads or sets enable for RFOE(0..6)_RX_ERROR_INT[IDX_RANGE]. */
        uint64_t malformed_x2p_pkt     : 1;  /**< [  9:  9](R/W1S/H) Reads or sets enable for RFOE(0..6)_RX_ERROR_INT[MALFORMED_X2P_PKT]. */
        uint64_t fc_psm_opcode         : 1;  /**< [ 10: 10](R/W1S/H) Reads or sets enable for RFOE(0..6)_RX_ERROR_INT[FC_PSM_OPCODE]. */
        uint64_t wrrsp_fat             : 1;  /**< [ 11: 11](R/W1S/H) Reads or sets enable for RFOE(0..6)_RX_ERROR_INT[WRRSP_FAT]. */
        uint64_t wrrsp_nfat            : 1;  /**< [ 12: 12](R/W1S/H) Reads or sets enable for RFOE(0..6)_RX_ERROR_INT[WRRSP_NFAT]. */
        uint64_t pkt_len_range         : 1;  /**< [ 13: 13](R/W1S/H) Reads or sets enable for RFOE(0..6)_RX_ERROR_INT[PKT_LEN_RANGE]. */
        uint64_t ecpri_hdr             : 1;  /**< [ 14: 14](R/W1S/H) Reads or sets enable for RFOE(0..6)_RX_ERROR_INT[ECPRI_HDR]. */
        uint64_t vlan_tpid             : 1;  /**< [ 15: 15](R/W1S/H) Reads or sets enable for RFOE(0..6)_RX_ERROR_INT[VLAN_TPID]. */
        uint64_t full_drop             : 1;  /**< [ 16: 16](R/W1S/H) Reads or sets enable for RFOE(0..6)_RX_ERROR_INT[FULL_DROP]. */
        uint64_t reserved_17_63        : 47;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_rfoex_rx_error_ena_w1s_s cn; */
};
typedef union cavm_rfoex_rx_error_ena_w1s cavm_rfoex_rx_error_ena_w1s_t;

static inline uint64_t CAVM_RFOEX_RX_ERROR_ENA_W1S(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_RFOEX_RX_ERROR_ENA_W1S(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_ODINMP) && (a<=6))
        return 0x861000001e98ll + 0x1000000ll * ((a) & 0x7);
    __cavm_csr_fatal("RFOEX_RX_ERROR_ENA_W1S", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_RFOEX_RX_ERROR_ENA_W1S(a) cavm_rfoex_rx_error_ena_w1s_t
#define bustype_CAVM_RFOEX_RX_ERROR_ENA_W1S(a) CSR_TYPE_NCB
#define basename_CAVM_RFOEX_RX_ERROR_ENA_W1S(a) "RFOEX_RX_ERROR_ENA_W1S"
#define busnum_CAVM_RFOEX_RX_ERROR_ENA_W1S(a) (a)
#define arguments_CAVM_RFOEX_RX_ERROR_ENA_W1S(a) (a),-1,-1,-1

/**
 * Register (NCB) rfoe#_rx_error_info#
 *
 * RFOE Error Interrupt Information Registers
 * Array of registers to capture error information for each of the errors reported
 * in RFOE()_RX_ERROR_INT. The register's {b} index corresponds to the error that
 * set bit {b} in RFOE()_RX_ERROR_INT.
 */
union cavm_rfoex_rx_error_infox
{
    uint64_t u;
    struct cavm_rfoex_rx_error_infox_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_60_63        : 4;
        uint64_t hdr_err_type          : 4;  /**< [ 59: 56](RO/H) Header error type for RFOE()_RX_ERROR_INT[ECPRI_HDR].  Enumerated by
                                                                 RFOE_ECPRI_HDR_ERR_TYPE_E.  Value will be NONE for all errors other than
                                                                 RFOE()_RX_ERROR_INT[ECPRI_HDR].
                                                                 Will be 0 for RFOE()_RX_ERROR_INT[NXM,WRRSP_FAT,WRRSP_NFAT,LEN_ABNORM, MALFORMED_X2P_PKT]. */
        uint64_t reserved_51_55        : 5;
        uint64_t logger                : 1;  /**< [ 50: 50](RO/H) Logger request caused the response error.
                                                                 For RFOE()_RX_ERROR_INT[NXM], RFOE()_RX_ERROR_INT[WRRSP_FAT], or
                                                                 RFOE()_RX_ERROR_INT[WRRSP_NFAT]. Will be 0 for all other errors. */
        uint64_t lmac_id               : 2;  /**< [ 49: 48](RO/H) LMAC identifier of packet that set RFOE()_RX_ERROR_INT bit {b}. */
        uint64_t reserved_42_47        : 6;
        uint64_t flow_id               : 10; /**< [ 41: 32](RO/H) Flow ID of packet that set RFOE()_RX_ERROR_INT bit {b}.  Will be 0 for
                                                                 RFOE()_RX_ERROR_INT[NXM,WRRSP_FAT,WRRSP_NFAT,LEN_ABNORM, MALFORMED_X2P_PKT].
                                                                 * [Dir_CTL_TYPE] == eCPRI && [MSG_TYPE]==0: Result of flow ID calculation.
                                                                 * [DIR_CTL_TYPE] == eCPRI && [MSG_TYPE]!=0: 0.
                                                                 * [DIR_CTL_TYPE] == RoE: 8-bit flowID field from RoE header.
                                                                 * [DIR_CTL_TYPE] == CHI or ALT or GENERIC: RFOE()_RX_DIRECTION_CTL()[FLOWID]. */
        uint64_t reserved_28_31        : 4;
        uint64_t dir_ctl_type          : 4;  /**< [ 27: 24](RO/H) Type of packet as defined by RFOE_RX_DIR_CTL_PKT_TYPE_E. Will be 0 for
                                                                 RFOE()_RX_ERROR_INT[NXM,WRRSP_FAT,WRRSP_NFAT,LEN_ABNORM, MALFORMED_X2P_PKT]. */
        uint64_t msg_type              : 8;  /**< [ 23: 16](RO/H) eCPRI Message Type or RoE subtype.
                                                                 * [DIR_CTL_TYPE] == eCPRI -  Message Type for first error that set
                                                                 RFOE()_RX_ERROR_INT bit {b}.
                                                                 * [DIR_CTL_TYPE] == RoE - RoE subtype for first error that set
                                                                 RFOE()_RX_ERROR_INT bit {b}.
                                                                 * Field will be 0 for other [DIR_CTL_TYPE] types or
                                                                 RFOE()_RX_ERROR_INT[NXM,WRRSP_FAT,WRRSP_NFAT, LEN_ABNORM, MALFORMED_X2P_PKT]. */
        uint64_t ecpri_id              : 16; /**< [ 15:  0](RO/H) For an eCPRI packet ([DIR_CTL_TYPE] = RFOE_RX_DIR_CTL_PKT_TYPE_E::ECPRI),
                                                                 value of ECPRI_HDR_S[PC_ID] when present in the eCPRI header, else first
                                                                 two bytes of eCPRI payload.

                                                                 Will be 0x0 for non-eCPRI packet types or for RFOE()_RX_ERROR_INT[NXM],
                                                                 RFOE()_RX_ERROR_INT[WRRSP_FAT], RFOE()_RX_ERROR_INT[WRRSP_NFAT],
                                                                 RFOE()_RX_ERROR_INT[LEN_ABNORM], RFOE()_RX_ERROR_INT[MALFORMED_X2P_PKT]. */
#else /* Word 0 - Little Endian */
        uint64_t ecpri_id              : 16; /**< [ 15:  0](RO/H) For an eCPRI packet ([DIR_CTL_TYPE] = RFOE_RX_DIR_CTL_PKT_TYPE_E::ECPRI),
                                                                 value of ECPRI_HDR_S[PC_ID] when present in the eCPRI header, else first
                                                                 two bytes of eCPRI payload.

                                                                 Will be 0x0 for non-eCPRI packet types or for RFOE()_RX_ERROR_INT[NXM],
                                                                 RFOE()_RX_ERROR_INT[WRRSP_FAT], RFOE()_RX_ERROR_INT[WRRSP_NFAT],
                                                                 RFOE()_RX_ERROR_INT[LEN_ABNORM], RFOE()_RX_ERROR_INT[MALFORMED_X2P_PKT]. */
        uint64_t msg_type              : 8;  /**< [ 23: 16](RO/H) eCPRI Message Type or RoE subtype.
                                                                 * [DIR_CTL_TYPE] == eCPRI -  Message Type for first error that set
                                                                 RFOE()_RX_ERROR_INT bit {b}.
                                                                 * [DIR_CTL_TYPE] == RoE - RoE subtype for first error that set
                                                                 RFOE()_RX_ERROR_INT bit {b}.
                                                                 * Field will be 0 for other [DIR_CTL_TYPE] types or
                                                                 RFOE()_RX_ERROR_INT[NXM,WRRSP_FAT,WRRSP_NFAT, LEN_ABNORM, MALFORMED_X2P_PKT]. */
        uint64_t dir_ctl_type          : 4;  /**< [ 27: 24](RO/H) Type of packet as defined by RFOE_RX_DIR_CTL_PKT_TYPE_E. Will be 0 for
                                                                 RFOE()_RX_ERROR_INT[NXM,WRRSP_FAT,WRRSP_NFAT,LEN_ABNORM, MALFORMED_X2P_PKT]. */
        uint64_t reserved_28_31        : 4;
        uint64_t flow_id               : 10; /**< [ 41: 32](RO/H) Flow ID of packet that set RFOE()_RX_ERROR_INT bit {b}.  Will be 0 for
                                                                 RFOE()_RX_ERROR_INT[NXM,WRRSP_FAT,WRRSP_NFAT,LEN_ABNORM, MALFORMED_X2P_PKT].
                                                                 * [Dir_CTL_TYPE] == eCPRI && [MSG_TYPE]==0: Result of flow ID calculation.
                                                                 * [DIR_CTL_TYPE] == eCPRI && [MSG_TYPE]!=0: 0.
                                                                 * [DIR_CTL_TYPE] == RoE: 8-bit flowID field from RoE header.
                                                                 * [DIR_CTL_TYPE] == CHI or ALT or GENERIC: RFOE()_RX_DIRECTION_CTL()[FLOWID]. */
        uint64_t reserved_42_47        : 6;
        uint64_t lmac_id               : 2;  /**< [ 49: 48](RO/H) LMAC identifier of packet that set RFOE()_RX_ERROR_INT bit {b}. */
        uint64_t logger                : 1;  /**< [ 50: 50](RO/H) Logger request caused the response error.
                                                                 For RFOE()_RX_ERROR_INT[NXM], RFOE()_RX_ERROR_INT[WRRSP_FAT], or
                                                                 RFOE()_RX_ERROR_INT[WRRSP_NFAT]. Will be 0 for all other errors. */
        uint64_t reserved_51_55        : 5;
        uint64_t hdr_err_type          : 4;  /**< [ 59: 56](RO/H) Header error type for RFOE()_RX_ERROR_INT[ECPRI_HDR].  Enumerated by
                                                                 RFOE_ECPRI_HDR_ERR_TYPE_E.  Value will be NONE for all errors other than
                                                                 RFOE()_RX_ERROR_INT[ECPRI_HDR].
                                                                 Will be 0 for RFOE()_RX_ERROR_INT[NXM,WRRSP_FAT,WRRSP_NFAT,LEN_ABNORM, MALFORMED_X2P_PKT]. */
        uint64_t reserved_60_63        : 4;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_rfoex_rx_error_infox_s cn; */
};
typedef union cavm_rfoex_rx_error_infox cavm_rfoex_rx_error_infox_t;

static inline uint64_t CAVM_RFOEX_RX_ERROR_INFOX(uint64_t a, uint64_t b) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_RFOEX_RX_ERROR_INFOX(uint64_t a, uint64_t b)
{
    if (cavm_is_model(OCTEONTX_ODINMP) && ((a<=6) && (b<=16)))
        return 0x861000013000ll + 0x1000000ll * ((a) & 0x7) + 8ll * ((b) & 0x1f);
    __cavm_csr_fatal("RFOEX_RX_ERROR_INFOX", 2, a, b, 0, 0, 0, 0);
}

#define typedef_CAVM_RFOEX_RX_ERROR_INFOX(a,b) cavm_rfoex_rx_error_infox_t
#define bustype_CAVM_RFOEX_RX_ERROR_INFOX(a,b) CSR_TYPE_NCB
#define basename_CAVM_RFOEX_RX_ERROR_INFOX(a,b) "RFOEX_RX_ERROR_INFOX"
#define busnum_CAVM_RFOEX_RX_ERROR_INFOX(a,b) (a)
#define arguments_CAVM_RFOEX_RX_ERROR_INFOX(a,b) (a),(b),-1,-1

/**
 * Register (NCB) rfoe#_rx_error_int
 *
 * RFOE Error Interrupt Register
 * These registers record normal errors across the RFOE RX.
 *
 * When an error occurs, the LMAC, the flow ID and other information are recorded
 * in the RFOE()_RX_ERROR_INFO() array. The array entry at index {b} contains
 * information about the error that first sets bit {b} of this register.
 *
 * When an error occurs, RFOE sends message to PSM defined by
 * RFOE()_RX_ERROR_PSM_MSG_W1,RFOE()_RX_ERROR_PSM_MSG_W0.
 */
union cavm_rfoex_rx_error_int
{
    uint64_t u;
    struct cavm_rfoex_rx_error_int_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_17_63        : 47;
        uint64_t full_drop             : 1;  /**< [ 16: 16](R/W1C/H) MBT Packet Ring Dropped-on-Full. Enabled only in drop-on-full mode.
                                                                 RFOE()_RX_MBT_CFG[FULL_DROP_EN]. */
        uint64_t vlan_tpid             : 1;  /**< [ 15: 15](R/W1C/H) Unsupported VLAN TPID match. Only support no VLAN tag, VLAN0 only tag,
                                                                 VLAN1,VLAN0 tag combinations. Packet is treated as an ALT packet. */
        uint64_t ecpri_hdr             : 1;  /**< [ 14: 14](R/W1C/H) Indicates an error in one or more of the following fields in the eCPRI header:
                                                                 _ ECPRI_HDR_S[CONCATENATION].
                                                                 _ ECPRI_HDR_S[VER].
                                                                 _ ECPRI_HDR_S[PC_ID].
                                                                 _ ECPRI_HDR_S[MSG_TYPE]. */
        uint64_t pkt_len_range         : 1;  /**< [ 13: 13](R/W1C/H) Packet length range violation. Incoming Ethernet packet length outside of
                                                                 range defined by RFOE()_RX_PKT_LEN_CFG(). */
        uint64_t wrrsp_nfat            : 1;  /**< [ 12: 12](R/W1C/H) Write response returned a non-fatal non-NXM error. */
        uint64_t wrrsp_fat             : 1;  /**< [ 11: 11](R/W1C/H) Write response returned a fatal non-NXM error. */
        uint64_t fc_psm_opcode         : 1;  /**< [ 10: 10](R/W1C/H) Received RoE packet, 0xfc subtype with a PSM command carrying a disabled OPCODE.
                                                                 Bit is set when RoE subtype 0xfc received with PSM command OPCODE is not enabled in
                                                                 RFOE()_RX_FC_PSM_OPCODE_ENA. */
        uint64_t malformed_x2p_pkt     : 1;  /**< [  9:  9](R/W1C/H) Corrupted packet arrived from MAC:
                                                                 * Missing SOP: a flit arrived that was not preceded by SOP.
                                                                 * Unexpected SOP: an SOP flit received while still processing a packet (no EOP
                                                                 for previous packet).
                                                                 Something bad happened in receive path to cause bad packets. */
        uint64_t idx_range             : 1;  /**< [  8:  8](R/W1C/H) MBT index or flow index range violation.
                                                                 * RoE Packet Outside of supported MBT index or flow index range. RoE must
                                                                 use IDX \< 1024.
                                                                 * CHI or GENERIC or ALT packet used IDX \> 1055. These types must use IDX \< 1056. */
        uint64_t fd_malformed          : 1;  /**< [  7:  7](R/W1C/H) 0xFD subtype SOS received for a MBT entry that is already busy:
                                                                 * Packet is dropped.
                                                                 * 0xFD packets using the same MBT entry through EOS are dropped.
                                                                 * 0xFD packets already received and in memory for the MBT entry are ignored.
                                                                 Packet data will be overwritten on next usage of the buffer.

                                                                 0xFD subtype received, but no SOS received for that MBT entry.
                                                                 * Packet is dropped.
                                                                 * 0xFD packets using the same MBT entry through EOS are dropped. */
        uint64_t fd_state              : 1;  /**< [  6:  6](R/W1C/H) At SOP a non 0xFD subtype is received for an MBT entry that is being used to assemble a symbol.
                                                                 New packet is dropped, and assembly continues for the symbol. */
        uint64_t nxm                   : 1;  /**< [  5:  5](R/W1C/H) Attempt to write to invalid SMEM address (i.e., address beyond current
                                                                 SMEM size). Writes to invalid addresses were dropped. Note that this
                                                                 may result from either a packet write or a logger write to
                                                                 RFOE()_RX_ERROR_INFO() ({b} = 5). */
        uint64_t clean_aperture        : 1;  /**< [  4:  4](R/W1C/H) For RoE 0xFC subtype and CHI packets. Starting address is outside of specified aperture range.
                                                                 When this happens:
                                                                 * Packet is cleanly dropped.
                                                                 * No data from packet is written to memory.
                                                                 * No JCA message. */
        uint64_t dirty_aperture        : 1;  /**< [  3:  3](R/W1C/H) For RoE 0xfc subtype and CHI packets. DMA started if the packet but packet
                                                                 length caused the DMA operation to go outside of the aperture range.
                                                                 When this happens:
                                                                 * All flits from the packet beyond the maximum aperture are dropped.
                                                                 * Packet status/logger sets RFOE_PSW_S[MAC_ERR_STS]\<4\>.
                                                                 * Normal Completion JCA message is sent at EOP. */
        uint64_t buf_overflow          : 1;  /**< [  2:  2](R/W1C/H) DMA operation of RoE type to a memory buffer exceeded the size of the buffer programmed in
                                                                 RFOE()_RX_IND_MBT_CFG[BUF_SIZE]. When this happens:
                                                                 * All flits from the packet beyond the buf_size limit are dropped.
                                                                 * Packet status/logger sets RFOE_PSW_S[MAC_ERR_STS]\<4\>.
                                                                 * Normal Completion JCA message is sent at EOP. */
        uint64_t len_miscomp           : 1;  /**< [  1:  1](R/W1C/H) Length field in packet header does not match payload.  For packets using DMA:
                                                                 * CHI packet header length field does not match data length.
                                                                 * RoE others. Length field does not match payload.
                                                                 * eCPRI.  Payload is less than length.  Payload greater than length is not an error.
                                                                 * Transparent, ALT: no length check for [LEN_MISCOMP]. */
        uint64_t len_abnorm            : 1;  /**< [  0:  0](R/W1C/H) Total packet length \<= 48 bytes. Packet is dropped.  Total length at x2p must be \> 48B. */
#else /* Word 0 - Little Endian */
        uint64_t len_abnorm            : 1;  /**< [  0:  0](R/W1C/H) Total packet length \<= 48 bytes. Packet is dropped.  Total length at x2p must be \> 48B. */
        uint64_t len_miscomp           : 1;  /**< [  1:  1](R/W1C/H) Length field in packet header does not match payload.  For packets using DMA:
                                                                 * CHI packet header length field does not match data length.
                                                                 * RoE others. Length field does not match payload.
                                                                 * eCPRI.  Payload is less than length.  Payload greater than length is not an error.
                                                                 * Transparent, ALT: no length check for [LEN_MISCOMP]. */
        uint64_t buf_overflow          : 1;  /**< [  2:  2](R/W1C/H) DMA operation of RoE type to a memory buffer exceeded the size of the buffer programmed in
                                                                 RFOE()_RX_IND_MBT_CFG[BUF_SIZE]. When this happens:
                                                                 * All flits from the packet beyond the buf_size limit are dropped.
                                                                 * Packet status/logger sets RFOE_PSW_S[MAC_ERR_STS]\<4\>.
                                                                 * Normal Completion JCA message is sent at EOP. */
        uint64_t dirty_aperture        : 1;  /**< [  3:  3](R/W1C/H) For RoE 0xfc subtype and CHI packets. DMA started if the packet but packet
                                                                 length caused the DMA operation to go outside of the aperture range.
                                                                 When this happens:
                                                                 * All flits from the packet beyond the maximum aperture are dropped.
                                                                 * Packet status/logger sets RFOE_PSW_S[MAC_ERR_STS]\<4\>.
                                                                 * Normal Completion JCA message is sent at EOP. */
        uint64_t clean_aperture        : 1;  /**< [  4:  4](R/W1C/H) For RoE 0xFC subtype and CHI packets. Starting address is outside of specified aperture range.
                                                                 When this happens:
                                                                 * Packet is cleanly dropped.
                                                                 * No data from packet is written to memory.
                                                                 * No JCA message. */
        uint64_t nxm                   : 1;  /**< [  5:  5](R/W1C/H) Attempt to write to invalid SMEM address (i.e., address beyond current
                                                                 SMEM size). Writes to invalid addresses were dropped. Note that this
                                                                 may result from either a packet write or a logger write to
                                                                 RFOE()_RX_ERROR_INFO() ({b} = 5). */
        uint64_t fd_state              : 1;  /**< [  6:  6](R/W1C/H) At SOP a non 0xFD subtype is received for an MBT entry that is being used to assemble a symbol.
                                                                 New packet is dropped, and assembly continues for the symbol. */
        uint64_t fd_malformed          : 1;  /**< [  7:  7](R/W1C/H) 0xFD subtype SOS received for a MBT entry that is already busy:
                                                                 * Packet is dropped.
                                                                 * 0xFD packets using the same MBT entry through EOS are dropped.
                                                                 * 0xFD packets already received and in memory for the MBT entry are ignored.
                                                                 Packet data will be overwritten on next usage of the buffer.

                                                                 0xFD subtype received, but no SOS received for that MBT entry.
                                                                 * Packet is dropped.
                                                                 * 0xFD packets using the same MBT entry through EOS are dropped. */
        uint64_t idx_range             : 1;  /**< [  8:  8](R/W1C/H) MBT index or flow index range violation.
                                                                 * RoE Packet Outside of supported MBT index or flow index range. RoE must
                                                                 use IDX \< 1024.
                                                                 * CHI or GENERIC or ALT packet used IDX \> 1055. These types must use IDX \< 1056. */
        uint64_t malformed_x2p_pkt     : 1;  /**< [  9:  9](R/W1C/H) Corrupted packet arrived from MAC:
                                                                 * Missing SOP: a flit arrived that was not preceded by SOP.
                                                                 * Unexpected SOP: an SOP flit received while still processing a packet (no EOP
                                                                 for previous packet).
                                                                 Something bad happened in receive path to cause bad packets. */
        uint64_t fc_psm_opcode         : 1;  /**< [ 10: 10](R/W1C/H) Received RoE packet, 0xfc subtype with a PSM command carrying a disabled OPCODE.
                                                                 Bit is set when RoE subtype 0xfc received with PSM command OPCODE is not enabled in
                                                                 RFOE()_RX_FC_PSM_OPCODE_ENA. */
        uint64_t wrrsp_fat             : 1;  /**< [ 11: 11](R/W1C/H) Write response returned a fatal non-NXM error. */
        uint64_t wrrsp_nfat            : 1;  /**< [ 12: 12](R/W1C/H) Write response returned a non-fatal non-NXM error. */
        uint64_t pkt_len_range         : 1;  /**< [ 13: 13](R/W1C/H) Packet length range violation. Incoming Ethernet packet length outside of
                                                                 range defined by RFOE()_RX_PKT_LEN_CFG(). */
        uint64_t ecpri_hdr             : 1;  /**< [ 14: 14](R/W1C/H) Indicates an error in one or more of the following fields in the eCPRI header:
                                                                 _ ECPRI_HDR_S[CONCATENATION].
                                                                 _ ECPRI_HDR_S[VER].
                                                                 _ ECPRI_HDR_S[PC_ID].
                                                                 _ ECPRI_HDR_S[MSG_TYPE]. */
        uint64_t vlan_tpid             : 1;  /**< [ 15: 15](R/W1C/H) Unsupported VLAN TPID match. Only support no VLAN tag, VLAN0 only tag,
                                                                 VLAN1,VLAN0 tag combinations. Packet is treated as an ALT packet. */
        uint64_t full_drop             : 1;  /**< [ 16: 16](R/W1C/H) MBT Packet Ring Dropped-on-Full. Enabled only in drop-on-full mode.
                                                                 RFOE()_RX_MBT_CFG[FULL_DROP_EN]. */
        uint64_t reserved_17_63        : 47;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_rfoex_rx_error_int_s cn; */
};
typedef union cavm_rfoex_rx_error_int cavm_rfoex_rx_error_int_t;

static inline uint64_t CAVM_RFOEX_RX_ERROR_INT(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_RFOEX_RX_ERROR_INT(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_ODINMP) && (a<=6))
        return 0x861000001e90ll + 0x1000000ll * ((a) & 0x7);
    __cavm_csr_fatal("RFOEX_RX_ERROR_INT", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_RFOEX_RX_ERROR_INT(a) cavm_rfoex_rx_error_int_t
#define bustype_CAVM_RFOEX_RX_ERROR_INT(a) CSR_TYPE_NCB
#define basename_CAVM_RFOEX_RX_ERROR_INT(a) "RFOEX_RX_ERROR_INT"
#define busnum_CAVM_RFOEX_RX_ERROR_INT(a) (a)
#define arguments_CAVM_RFOEX_RX_ERROR_INT(a) (a),-1,-1,-1

/**
 * Register (NCB) rfoe#_rx_error_int_w1s
 *
 * RFOE Order Info Interrupt  Error Interrupt Set Registers
 * This register sets interrupt bits.
 */
union cavm_rfoex_rx_error_int_w1s
{
    uint64_t u;
    struct cavm_rfoex_rx_error_int_w1s_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_17_63        : 47;
        uint64_t full_drop             : 1;  /**< [ 16: 16](R/W1S/H) Reads or sets RFOE(0..6)_RX_ERROR_INT[FULL_DROP]. */
        uint64_t vlan_tpid             : 1;  /**< [ 15: 15](R/W1S/H) Reads or sets RFOE(0..6)_RX_ERROR_INT[VLAN_TPID]. */
        uint64_t ecpri_hdr             : 1;  /**< [ 14: 14](R/W1S/H) Reads or sets RFOE(0..6)_RX_ERROR_INT[ECPRI_HDR]. */
        uint64_t pkt_len_range         : 1;  /**< [ 13: 13](R/W1S/H) Reads or sets RFOE(0..6)_RX_ERROR_INT[PKT_LEN_RANGE]. */
        uint64_t wrrsp_nfat            : 1;  /**< [ 12: 12](R/W1S/H) Reads or sets RFOE(0..6)_RX_ERROR_INT[WRRSP_NFAT]. */
        uint64_t wrrsp_fat             : 1;  /**< [ 11: 11](R/W1S/H) Reads or sets RFOE(0..6)_RX_ERROR_INT[WRRSP_FAT]. */
        uint64_t fc_psm_opcode         : 1;  /**< [ 10: 10](R/W1S/H) Reads or sets RFOE(0..6)_RX_ERROR_INT[FC_PSM_OPCODE]. */
        uint64_t malformed_x2p_pkt     : 1;  /**< [  9:  9](R/W1S/H) Reads or sets RFOE(0..6)_RX_ERROR_INT[MALFORMED_X2P_PKT]. */
        uint64_t idx_range             : 1;  /**< [  8:  8](R/W1S/H) Reads or sets RFOE(0..6)_RX_ERROR_INT[IDX_RANGE]. */
        uint64_t fd_malformed          : 1;  /**< [  7:  7](R/W1S/H) Reads or sets RFOE(0..6)_RX_ERROR_INT[FD_MALFORMED]. */
        uint64_t fd_state              : 1;  /**< [  6:  6](R/W1S/H) Reads or sets RFOE(0..6)_RX_ERROR_INT[FD_STATE]. */
        uint64_t nxm                   : 1;  /**< [  5:  5](R/W1S/H) Reads or sets RFOE(0..6)_RX_ERROR_INT[NXM]. */
        uint64_t clean_aperture        : 1;  /**< [  4:  4](R/W1S/H) Reads or sets RFOE(0..6)_RX_ERROR_INT[CLEAN_APERTURE]. */
        uint64_t dirty_aperture        : 1;  /**< [  3:  3](R/W1S/H) Reads or sets RFOE(0..6)_RX_ERROR_INT[DIRTY_APERTURE]. */
        uint64_t buf_overflow          : 1;  /**< [  2:  2](R/W1S/H) Reads or sets RFOE(0..6)_RX_ERROR_INT[BUF_OVERFLOW]. */
        uint64_t len_miscomp           : 1;  /**< [  1:  1](R/W1S/H) Reads or sets RFOE(0..6)_RX_ERROR_INT[LEN_MISCOMP]. */
        uint64_t len_abnorm            : 1;  /**< [  0:  0](R/W1S/H) Reads or sets RFOE(0..6)_RX_ERROR_INT[LEN_ABNORM]. */
#else /* Word 0 - Little Endian */
        uint64_t len_abnorm            : 1;  /**< [  0:  0](R/W1S/H) Reads or sets RFOE(0..6)_RX_ERROR_INT[LEN_ABNORM]. */
        uint64_t len_miscomp           : 1;  /**< [  1:  1](R/W1S/H) Reads or sets RFOE(0..6)_RX_ERROR_INT[LEN_MISCOMP]. */
        uint64_t buf_overflow          : 1;  /**< [  2:  2](R/W1S/H) Reads or sets RFOE(0..6)_RX_ERROR_INT[BUF_OVERFLOW]. */
        uint64_t dirty_aperture        : 1;  /**< [  3:  3](R/W1S/H) Reads or sets RFOE(0..6)_RX_ERROR_INT[DIRTY_APERTURE]. */
        uint64_t clean_aperture        : 1;  /**< [  4:  4](R/W1S/H) Reads or sets RFOE(0..6)_RX_ERROR_INT[CLEAN_APERTURE]. */
        uint64_t nxm                   : 1;  /**< [  5:  5](R/W1S/H) Reads or sets RFOE(0..6)_RX_ERROR_INT[NXM]. */
        uint64_t fd_state              : 1;  /**< [  6:  6](R/W1S/H) Reads or sets RFOE(0..6)_RX_ERROR_INT[FD_STATE]. */
        uint64_t fd_malformed          : 1;  /**< [  7:  7](R/W1S/H) Reads or sets RFOE(0..6)_RX_ERROR_INT[FD_MALFORMED]. */
        uint64_t idx_range             : 1;  /**< [  8:  8](R/W1S/H) Reads or sets RFOE(0..6)_RX_ERROR_INT[IDX_RANGE]. */
        uint64_t malformed_x2p_pkt     : 1;  /**< [  9:  9](R/W1S/H) Reads or sets RFOE(0..6)_RX_ERROR_INT[MALFORMED_X2P_PKT]. */
        uint64_t fc_psm_opcode         : 1;  /**< [ 10: 10](R/W1S/H) Reads or sets RFOE(0..6)_RX_ERROR_INT[FC_PSM_OPCODE]. */
        uint64_t wrrsp_fat             : 1;  /**< [ 11: 11](R/W1S/H) Reads or sets RFOE(0..6)_RX_ERROR_INT[WRRSP_FAT]. */
        uint64_t wrrsp_nfat            : 1;  /**< [ 12: 12](R/W1S/H) Reads or sets RFOE(0..6)_RX_ERROR_INT[WRRSP_NFAT]. */
        uint64_t pkt_len_range         : 1;  /**< [ 13: 13](R/W1S/H) Reads or sets RFOE(0..6)_RX_ERROR_INT[PKT_LEN_RANGE]. */
        uint64_t ecpri_hdr             : 1;  /**< [ 14: 14](R/W1S/H) Reads or sets RFOE(0..6)_RX_ERROR_INT[ECPRI_HDR]. */
        uint64_t vlan_tpid             : 1;  /**< [ 15: 15](R/W1S/H) Reads or sets RFOE(0..6)_RX_ERROR_INT[VLAN_TPID]. */
        uint64_t full_drop             : 1;  /**< [ 16: 16](R/W1S/H) Reads or sets RFOE(0..6)_RX_ERROR_INT[FULL_DROP]. */
        uint64_t reserved_17_63        : 47;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_rfoex_rx_error_int_w1s_s cn; */
};
typedef union cavm_rfoex_rx_error_int_w1s cavm_rfoex_rx_error_int_w1s_t;

static inline uint64_t CAVM_RFOEX_RX_ERROR_INT_W1S(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_RFOEX_RX_ERROR_INT_W1S(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_ODINMP) && (a<=6))
        return 0x861000001ea8ll + 0x1000000ll * ((a) & 0x7);
    __cavm_csr_fatal("RFOEX_RX_ERROR_INT_W1S", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_RFOEX_RX_ERROR_INT_W1S(a) cavm_rfoex_rx_error_int_w1s_t
#define bustype_CAVM_RFOEX_RX_ERROR_INT_W1S(a) CSR_TYPE_NCB
#define basename_CAVM_RFOEX_RX_ERROR_INT_W1S(a) "RFOEX_RX_ERROR_INT_W1S"
#define busnum_CAVM_RFOEX_RX_ERROR_INT_W1S(a) (a)
#define arguments_CAVM_RFOEX_RX_ERROR_INT_W1S(a) (a),-1,-1,-1

/**
 * Register (NCB) rfoe#_rx_error_psm_msg_w0
 *
 * RFOE Order Info Interrupt Message w0  Register
 * JCA word 0 message to send on enabled orderInfo error.
 */
union cavm_rfoex_rx_error_psm_msg_w0
{
    uint64_t u;
    struct cavm_rfoex_rx_error_psm_msg_w0_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t w0                    : 64; /**< [ 63:  0](R/W) w0 of JCA message */
#else /* Word 0 - Little Endian */
        uint64_t w0                    : 64; /**< [ 63:  0](R/W) w0 of JCA message */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_rfoex_rx_error_psm_msg_w0_s cn; */
};
typedef union cavm_rfoex_rx_error_psm_msg_w0 cavm_rfoex_rx_error_psm_msg_w0_t;

static inline uint64_t CAVM_RFOEX_RX_ERROR_PSM_MSG_W0(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_RFOEX_RX_ERROR_PSM_MSG_W0(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_ODINMP) && (a<=6))
        return 0x861000001eb0ll + 0x1000000ll * ((a) & 0x7);
    __cavm_csr_fatal("RFOEX_RX_ERROR_PSM_MSG_W0", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_RFOEX_RX_ERROR_PSM_MSG_W0(a) cavm_rfoex_rx_error_psm_msg_w0_t
#define bustype_CAVM_RFOEX_RX_ERROR_PSM_MSG_W0(a) CSR_TYPE_NCB
#define basename_CAVM_RFOEX_RX_ERROR_PSM_MSG_W0(a) "RFOEX_RX_ERROR_PSM_MSG_W0"
#define busnum_CAVM_RFOEX_RX_ERROR_PSM_MSG_W0(a) (a)
#define arguments_CAVM_RFOEX_RX_ERROR_PSM_MSG_W0(a) (a),-1,-1,-1

/**
 * Register (NCB) rfoe#_rx_error_psm_msg_w1
 *
 * RFOE Error Interrupt Message w1 Register
 * JCA word 1 message to send on enabled  error.
 */
union cavm_rfoex_rx_error_psm_msg_w1
{
    uint64_t u;
    struct cavm_rfoex_rx_error_psm_msg_w1_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t w1                    : 64; /**< [ 63:  0](R/W) w1 of JCA message */
#else /* Word 0 - Little Endian */
        uint64_t w1                    : 64; /**< [ 63:  0](R/W) w1 of JCA message */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_rfoex_rx_error_psm_msg_w1_s cn; */
};
typedef union cavm_rfoex_rx_error_psm_msg_w1 cavm_rfoex_rx_error_psm_msg_w1_t;

static inline uint64_t CAVM_RFOEX_RX_ERROR_PSM_MSG_W1(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_RFOEX_RX_ERROR_PSM_MSG_W1(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_ODINMP) && (a<=6))
        return 0x861000001eb8ll + 0x1000000ll * ((a) & 0x7);
    __cavm_csr_fatal("RFOEX_RX_ERROR_PSM_MSG_W1", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_RFOEX_RX_ERROR_PSM_MSG_W1(a) cavm_rfoex_rx_error_psm_msg_w1_t
#define bustype_CAVM_RFOEX_RX_ERROR_PSM_MSG_W1(a) CSR_TYPE_NCB
#define basename_CAVM_RFOEX_RX_ERROR_PSM_MSG_W1(a) "RFOEX_RX_ERROR_PSM_MSG_W1"
#define busnum_CAVM_RFOEX_RX_ERROR_PSM_MSG_W1(a) (a)
#define arguments_CAVM_RFOEX_RX_ERROR_PSM_MSG_W1(a) (a),-1,-1,-1

/**
 * Register (NCB) rfoe#_rx_fc_psm_opcode_ena
 *
 * RFOE RX RoE FC PSM Opcode Enable Register
 * Per-opcode enable.   If  RFOE()_RX_FC_PSM_OPCODE_ENA\<OPCODE\> = 0, then PSM MSG[OPCODE]
 * is disabled and the packet will dropped.
 */
union cavm_rfoex_rx_fc_psm_opcode_ena
{
    uint64_t u;
    struct cavm_rfoex_rx_fc_psm_opcode_ena_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t ena                   : 64; /**< [ 63:  0](R/W) Opcode enables. */
#else /* Word 0 - Little Endian */
        uint64_t ena                   : 64; /**< [ 63:  0](R/W) Opcode enables. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_rfoex_rx_fc_psm_opcode_ena_s cn; */
};
typedef union cavm_rfoex_rx_fc_psm_opcode_ena cavm_rfoex_rx_fc_psm_opcode_ena_t;

static inline uint64_t CAVM_RFOEX_RX_FC_PSM_OPCODE_ENA(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_RFOEX_RX_FC_PSM_OPCODE_ENA(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_ODINMP) && (a<=6))
        return 0x8610000018a0ll + 0x1000000ll * ((a) & 0x7);
    __cavm_csr_fatal("RFOEX_RX_FC_PSM_OPCODE_ENA", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_RFOEX_RX_FC_PSM_OPCODE_ENA(a) cavm_rfoex_rx_fc_psm_opcode_ena_t
#define bustype_CAVM_RFOEX_RX_FC_PSM_OPCODE_ENA(a) CSR_TYPE_NCB
#define basename_CAVM_RFOEX_RX_FC_PSM_OPCODE_ENA(a) "RFOEX_RX_FC_PSM_OPCODE_ENA"
#define busnum_CAVM_RFOEX_RX_FC_PSM_OPCODE_ENA(a) (a)
#define arguments_CAVM_RFOEX_RX_FC_PSM_OPCODE_ENA(a) (a),-1,-1,-1

/**
 * Register (NCB) rfoe#_rx_fd_reset#
 *
 * RFOE RX Sync State Register
 * Controls resetting of the 0xFD subtype reassembly state per MBT entry.
 */
union cavm_rfoex_rx_fd_resetx
{
    uint64_t u;
    struct cavm_rfoex_rx_fd_resetx_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reset                 : 64; /**< [ 63:  0](WO) One bit per MBT entry:
                                                                 _ RESET(0)[RESET]\<0\> for MBT index 0.
                                                                 _ RESET(0)[STATE]\<1\> for MBT index 1.
                                                                 _ ...
                                                                 _ RESET(1)[STATE]\<0\> for MBT index 64.
                                                                 _ Etc.

                                                                 For each bit:
                                                                 _ 0 = Don't reset 0xFD reassembly state.
                                                                 _ 1 = Reset the 0xFD reassembly state. */
#else /* Word 0 - Little Endian */
        uint64_t reset                 : 64; /**< [ 63:  0](WO) One bit per MBT entry:
                                                                 _ RESET(0)[RESET]\<0\> for MBT index 0.
                                                                 _ RESET(0)[STATE]\<1\> for MBT index 1.
                                                                 _ ...
                                                                 _ RESET(1)[STATE]\<0\> for MBT index 64.
                                                                 _ Etc.

                                                                 For each bit:
                                                                 _ 0 = Don't reset 0xFD reassembly state.
                                                                 _ 1 = Reset the 0xFD reassembly state. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_rfoex_rx_fd_resetx_s cn; */
};
typedef union cavm_rfoex_rx_fd_resetx cavm_rfoex_rx_fd_resetx_t;

static inline uint64_t CAVM_RFOEX_RX_FD_RESETX(uint64_t a, uint64_t b) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_RFOEX_RX_FD_RESETX(uint64_t a, uint64_t b)
{
    if (cavm_is_model(OCTEONTX_ODINMP) && ((a<=6) && (b<=15)))
        return 0x861000001300ll + 0x1000000ll * ((a) & 0x7) + 8ll * ((b) & 0xf);
    __cavm_csr_fatal("RFOEX_RX_FD_RESETX", 2, a, b, 0, 0, 0, 0);
}

#define typedef_CAVM_RFOEX_RX_FD_RESETX(a,b) cavm_rfoex_rx_fd_resetx_t
#define bustype_CAVM_RFOEX_RX_FD_RESETX(a,b) CSR_TYPE_NCB
#define basename_CAVM_RFOEX_RX_FD_RESETX(a,b) "RFOEX_RX_FD_RESETX"
#define busnum_CAVM_RFOEX_RX_FD_RESETX(a,b) (a)
#define arguments_CAVM_RFOEX_RX_FD_RESETX(a,b) (a),(b),-1,-1

/**
 * Register (NCB) rfoe#_rx_fd_sos_drop_stat
 *
 * RFOE RX FD subtype pre-SOS Packet Drop Statistic Register
 * Count of packets of 0xFD subtype dropped waiting for SOS (start of
 * symbol).  These can occur when a flow is reconfigured while receiving a
 * symbol.  RFOE drops the segments until it finds the start of a symbol and
 * then starts DMA at the beginning of the new symbol.
 */
union cavm_rfoex_rx_fd_sos_drop_stat
{
    uint64_t u;
    struct cavm_rfoex_rx_fd_sos_drop_stat_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_48_63        : 16;
        uint64_t stat                  : 48; /**< [ 47:  0](R/W/H) The counter value. Wraps to zero at 2^48. */
#else /* Word 0 - Little Endian */
        uint64_t stat                  : 48; /**< [ 47:  0](R/W/H) The counter value. Wraps to zero at 2^48. */
        uint64_t reserved_48_63        : 16;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_rfoex_rx_fd_sos_drop_stat_s cn; */
};
typedef union cavm_rfoex_rx_fd_sos_drop_stat cavm_rfoex_rx_fd_sos_drop_stat_t;

static inline uint64_t CAVM_RFOEX_RX_FD_SOS_DROP_STAT(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_RFOEX_RX_FD_SOS_DROP_STAT(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_ODINMP) && (a<=6))
        return 0x861000001d30ll + 0x1000000ll * ((a) & 0x7);
    __cavm_csr_fatal("RFOEX_RX_FD_SOS_DROP_STAT", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_RFOEX_RX_FD_SOS_DROP_STAT(a) cavm_rfoex_rx_fd_sos_drop_stat_t
#define bustype_CAVM_RFOEX_RX_FD_SOS_DROP_STAT(a) CSR_TYPE_NCB
#define basename_CAVM_RFOEX_RX_FD_SOS_DROP_STAT(a) "RFOEX_RX_FD_SOS_DROP_STAT"
#define busnum_CAVM_RFOEX_RX_FD_SOS_DROP_STAT(a) (a)
#define arguments_CAVM_RFOEX_RX_FD_SOS_DROP_STAT(a) (a),-1,-1,-1

/**
 * Register (NCB) rfoe#_rx_fd_state#
 *
 * RFOE RX Sync State Register
 * Debug register RoE subType 0xFD flow state.
 */
union cavm_rfoex_rx_fd_statex
{
    uint64_t u;
    struct cavm_rfoex_rx_fd_statex_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t state                 : 64; /**< [ 63:  0](RO/H) Vector of 2-bit state values enumerated by RFOE_RX_FD_STATE_E:
                                                                 _ STATE(0)[STATE]\<1:0\> for MBT index 0.
                                                                 _ STATE(0)[STATE]\<3:2\> for MBT index 1.
                                                                 _ ...
                                                                 _ STATE(1)[STATE]\<1:0\> for MBT index 32.
                                                                 _ Etc. */
#else /* Word 0 - Little Endian */
        uint64_t state                 : 64; /**< [ 63:  0](RO/H) Vector of 2-bit state values enumerated by RFOE_RX_FD_STATE_E:
                                                                 _ STATE(0)[STATE]\<1:0\> for MBT index 0.
                                                                 _ STATE(0)[STATE]\<3:2\> for MBT index 1.
                                                                 _ ...
                                                                 _ STATE(1)[STATE]\<1:0\> for MBT index 32.
                                                                 _ Etc. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_rfoex_rx_fd_statex_s cn; */
};
typedef union cavm_rfoex_rx_fd_statex cavm_rfoex_rx_fd_statex_t;

static inline uint64_t CAVM_RFOEX_RX_FD_STATEX(uint64_t a, uint64_t b) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_RFOEX_RX_FD_STATEX(uint64_t a, uint64_t b)
{
    if (cavm_is_model(OCTEONTX_ODINMP) && ((a<=6) && (b<=31)))
        return 0x861000001200ll + 0x1000000ll * ((a) & 0x7) + 8ll * ((b) & 0x1f);
    __cavm_csr_fatal("RFOEX_RX_FD_STATEX", 2, a, b, 0, 0, 0, 0);
}

#define typedef_CAVM_RFOEX_RX_FD_STATEX(a,b) cavm_rfoex_rx_fd_statex_t
#define bustype_CAVM_RFOEX_RX_FD_STATEX(a,b) CSR_TYPE_NCB
#define basename_CAVM_RFOEX_RX_FD_STATEX(a,b) "RFOEX_RX_FD_STATEX"
#define busnum_CAVM_RFOEX_RX_FD_STATEX(a,b) (a)
#define arguments_CAVM_RFOEX_RX_FD_STATEX(a,b) (a),(b),-1,-1

/**
 * Register (NCB) rfoe#_rx_ft_enable_drop_stat
 *
 * RFOE RX Flow Table Enable Packet Drop Statistic Register
 * Count of packets dropped because of disabled flow table entry or message type:
 * * RFOE()_RX_IND_FT()_CFG[ENABLE]=0 for RoE packets, or
 * * RFOE()_RX_IND_ECPRI_FT_CFG[ENABLE]=0 for eCPRI message type 0 packets, or
 * * RFOE()_RX_ECPRI_CFG()[MSG_TYPE_ENABLE]=0 for eCPRI non-zero message type packets.
 */
union cavm_rfoex_rx_ft_enable_drop_stat
{
    uint64_t u;
    struct cavm_rfoex_rx_ft_enable_drop_stat_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_48_63        : 16;
        uint64_t stat                  : 48; /**< [ 47:  0](R/W/H) The counter value. Wraps to zero at 2^48. */
#else /* Word 0 - Little Endian */
        uint64_t stat                  : 48; /**< [ 47:  0](R/W/H) The counter value. Wraps to zero at 2^48. */
        uint64_t reserved_48_63        : 16;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_rfoex_rx_ft_enable_drop_stat_s cn; */
};
typedef union cavm_rfoex_rx_ft_enable_drop_stat cavm_rfoex_rx_ft_enable_drop_stat_t;

static inline uint64_t CAVM_RFOEX_RX_FT_ENABLE_DROP_STAT(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_RFOEX_RX_FT_ENABLE_DROP_STAT(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_ODINMP) && (a<=6))
        return 0x861000001d28ll + 0x1000000ll * ((a) & 0x7);
    __cavm_csr_fatal("RFOEX_RX_FT_ENABLE_DROP_STAT", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_RFOEX_RX_FT_ENABLE_DROP_STAT(a) cavm_rfoex_rx_ft_enable_drop_stat_t
#define bustype_CAVM_RFOEX_RX_FT_ENABLE_DROP_STAT(a) CSR_TYPE_NCB
#define basename_CAVM_RFOEX_RX_FT_ENABLE_DROP_STAT(a) "RFOEX_RX_FT_ENABLE_DROP_STAT"
#define busnum_CAVM_RFOEX_RX_FT_ENABLE_DROP_STAT(a) (a)
#define arguments_CAVM_RFOEX_RX_FT_ENABLE_DROP_STAT(a) (a),-1,-1,-1

/**
 * Register (NCB) rfoe#_rx_full_drop_stat#
 *
 * RFOE RX Full Drop Register
 * Count of packets dropped per LMAC because of full packet ring.
 */
union cavm_rfoex_rx_full_drop_statx
{
    uint64_t u;
    struct cavm_rfoex_rx_full_drop_statx_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_48_63        : 16;
        uint64_t stat                  : 48; /**< [ 47:  0](R/W/H) The counter value increments on packets dropped when packet ring is full. Wraps to zero at 2^48. */
#else /* Word 0 - Little Endian */
        uint64_t stat                  : 48; /**< [ 47:  0](R/W/H) The counter value increments on packets dropped when packet ring is full. Wraps to zero at 2^48. */
        uint64_t reserved_48_63        : 16;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_rfoex_rx_full_drop_statx_s cn; */
};
typedef union cavm_rfoex_rx_full_drop_statx cavm_rfoex_rx_full_drop_statx_t;

static inline uint64_t CAVM_RFOEX_RX_FULL_DROP_STATX(uint64_t a, uint64_t b) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_RFOEX_RX_FULL_DROP_STATX(uint64_t a, uint64_t b)
{
    if (cavm_is_model(OCTEONTX_ODINMP) && ((a<=6) && (b<=3)))
        return 0x861000001e20ll + 0x1000000ll * ((a) & 0x7) + 8ll * ((b) & 0x3);
    __cavm_csr_fatal("RFOEX_RX_FULL_DROP_STATX", 2, a, b, 0, 0, 0, 0);
}

#define typedef_CAVM_RFOEX_RX_FULL_DROP_STATX(a,b) cavm_rfoex_rx_full_drop_statx_t
#define bustype_CAVM_RFOEX_RX_FULL_DROP_STATX(a,b) CSR_TYPE_NCB
#define basename_CAVM_RFOEX_RX_FULL_DROP_STATX(a,b) "RFOEX_RX_FULL_DROP_STATX"
#define busnum_CAVM_RFOEX_RX_FULL_DROP_STATX(a,b) (a)
#define arguments_CAVM_RFOEX_RX_FULL_DROP_STATX(a,b) (a),(b),-1,-1

/**
 * Register (NCB) rfoe#_rx_ind_ecpri_ft_cfg
 *
 * RFOE RX Indirect Flow Table Configuration Register
 * Flow table configuration for packets with ECPRI_HDR_S[MSG_TYPE]==0.
 *
 * This register indirectly accesses a flow configuration table with 1024
 * entries.
 *
 * Reads and writes to this register access the table entry specified by
 * RFOE()_RX_INDIRECT_INDEX[INDEX].
 *
 * Incoming packets with ECPRI_HDR_S[MSG_TYPE]==0 index the flow table as defined
 * by RFOE()_RX_ECPRI_CFG()[PCID_FLOWID_MODE].
 */
union cavm_rfoex_rx_ind_ecpri_ft_cfg
{
    uint64_t u;
    struct cavm_rfoex_rx_ind_ecpri_ft_cfg_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_29_63        : 35;
        uint64_t ab_cfg_w_enable       : 1;  /**< [ 28: 28](R/W) Configures whether AB_CFG_W3 will be written by RX to JD. If set, will write
                                                                 the AB_CFG_W3 consisting of pkt_len, destination lmac_id and tx_err. */
        uint64_t reserved_25_27        : 3;
        uint64_t enable                : 1;  /**< [ 24: 24](R/W) Enable this flow. Drop packets when clear. */
        uint64_t reserved_22_23        : 2;
        uint64_t mbt_idx               : 10; /**< [ 21: 12](R/W) MBT index. Pointer to MBT entry for DMA write buffer configurations. */
        uint64_t reserved_10_11        : 2;
        uint64_t flow_idx              : 10; /**< [  9:  0](R/W) Flow index. Pointer to JDT entry for job descriptor and flow configuration. */
#else /* Word 0 - Little Endian */
        uint64_t flow_idx              : 10; /**< [  9:  0](R/W) Flow index. Pointer to JDT entry for job descriptor and flow configuration. */
        uint64_t reserved_10_11        : 2;
        uint64_t mbt_idx               : 10; /**< [ 21: 12](R/W) MBT index. Pointer to MBT entry for DMA write buffer configurations. */
        uint64_t reserved_22_23        : 2;
        uint64_t enable                : 1;  /**< [ 24: 24](R/W) Enable this flow. Drop packets when clear. */
        uint64_t reserved_25_27        : 3;
        uint64_t ab_cfg_w_enable       : 1;  /**< [ 28: 28](R/W) Configures whether AB_CFG_W3 will be written by RX to JD. If set, will write
                                                                 the AB_CFG_W3 consisting of pkt_len, destination lmac_id and tx_err. */
        uint64_t reserved_29_63        : 35;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_rfoex_rx_ind_ecpri_ft_cfg_s cn; */
};
typedef union cavm_rfoex_rx_ind_ecpri_ft_cfg cavm_rfoex_rx_ind_ecpri_ft_cfg_t;

static inline uint64_t CAVM_RFOEX_RX_IND_ECPRI_FT_CFG(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_RFOEX_RX_IND_ECPRI_FT_CFG(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_ODINMP) && (a<=6))
        return 0x861000001cc0ll + 0x1000000ll * ((a) & 0x7);
    __cavm_csr_fatal("RFOEX_RX_IND_ECPRI_FT_CFG", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_RFOEX_RX_IND_ECPRI_FT_CFG(a) cavm_rfoex_rx_ind_ecpri_ft_cfg_t
#define bustype_CAVM_RFOEX_RX_IND_ECPRI_FT_CFG(a) CSR_TYPE_NCB
#define basename_CAVM_RFOEX_RX_IND_ECPRI_FT_CFG(a) "RFOEX_RX_IND_ECPRI_FT_CFG"
#define busnum_CAVM_RFOEX_RX_IND_ECPRI_FT_CFG(a) (a)
#define arguments_CAVM_RFOEX_RX_IND_ECPRI_FT_CFG(a) (a),-1,-1,-1

/**
 * Register (NCB) rfoe#_rx_ind_ecpri_hash_cfg
 *
 * RFOE RX Indirect eCPRI Hash Configuration Register
 * Configures hash for eCPRI packets with ECPRI_HDR_S[MSG_TYPE]==0. Result of hash
 * is flow_id that is used to
 * index into RFOE()_RX_IND_ECPRI_HASH_CFG.
 * This register indirectly accesses the eCPRI Hash Configuration Table with 22
 * entries, one for each bit in ECPRI_HDR_S[PC_ID]. The [XOR_CFG] values are XOR'd to map
 * the incoming ECPRI_HDR_S[PC_ID] to a flow ID, when
 * RFOE()_RX_ECPRI_CFG()[PCID_FLOWID_MODE] =
 * RFOE_ECPRI_PCID_FLOWID_MODE_E::HASH.
 *
 * On reset, the hash configuration is reset to
 * \<pre\>
 *   hash_cfg(0)  = 0x009
 *   hash_cfg(1)  = 0x012
 *   hash_cfg(2)  = 0x024
 *   hash_cfg(3)  = 0x048
 *   hash_cfg(4)  = 0x090
 *   hash_cfg(5)  = 0x120
 *   hash_cfg(6)  = 0x240
 *   hash_cfg(7)  = 0x089
 *   hash_cfg(8)  = 0x112
 *   hash_cfg(9)  = 0x224
 *   hash_cfg(10) = 0x041
 *   hash_cfg(11) = 0x082
 *   hash_cfg(12) = 0x104
 *   hash_cfg(13) = 0x208
 *   hash_cfg(14) = 0x019
 *   hash_cfg(15) = 0x032
 *   hash_cfg(16) = 0x064
 *   hash_cfg(17) = 0x0c8
 *   hash_cfg(18) = 0x190
 *   hash_cfg(19) = 0x320
 *   hash_cfg(20) = 0x249
 *   hash_cfg(21) = 0x09b
 * \</pre\>
 */
union cavm_rfoex_rx_ind_ecpri_hash_cfg
{
    uint64_t u;
    struct cavm_rfoex_rx_ind_ecpri_hash_cfg_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_10_63        : 54;
        uint64_t xor_cfg               : 10; /**< [  9:  0](R/W) XOR value to use for hash function for each bit of ECPRI_HDR_S[PC_ID]. */
#else /* Word 0 - Little Endian */
        uint64_t xor_cfg               : 10; /**< [  9:  0](R/W) XOR value to use for hash function for each bit of ECPRI_HDR_S[PC_ID]. */
        uint64_t reserved_10_63        : 54;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_rfoex_rx_ind_ecpri_hash_cfg_s cn; */
};
typedef union cavm_rfoex_rx_ind_ecpri_hash_cfg cavm_rfoex_rx_ind_ecpri_hash_cfg_t;

static inline uint64_t CAVM_RFOEX_RX_IND_ECPRI_HASH_CFG(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_RFOEX_RX_IND_ECPRI_HASH_CFG(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_ODINMP) && (a<=6))
        return 0x861000001ce0ll + 0x1000000ll * ((a) & 0x7);
    __cavm_csr_fatal("RFOEX_RX_IND_ECPRI_HASH_CFG", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_RFOEX_RX_IND_ECPRI_HASH_CFG(a) cavm_rfoex_rx_ind_ecpri_hash_cfg_t
#define bustype_CAVM_RFOEX_RX_IND_ECPRI_HASH_CFG(a) CSR_TYPE_NCB
#define basename_CAVM_RFOEX_RX_IND_ECPRI_HASH_CFG(a) "RFOEX_RX_IND_ECPRI_HASH_CFG"
#define busnum_CAVM_RFOEX_RX_IND_ECPRI_HASH_CFG(a) (a)
#define arguments_CAVM_RFOEX_RX_IND_ECPRI_HASH_CFG(a) (a),-1,-1,-1

/**
 * Register (NCB) rfoe#_rx_ind_ft#_cfg
 *
 * RFOE RX Indirect Flow Table Configuration Register
 * Flow table configuration for non-eCPRI packets.  LMAC {b}.
 *
 * This register indirectly accesses a flow configuration table with 1024
 * entries.
 *
 * Reads and writes to this register access the table entry specified by
 * RFOE()_RX_INDIRECT_INDEX[INDEX].
 *
 * Incoming non-eCPRI packets from LMAC {b} index the flow table using either the flow
 * ID extracted from an RoE header, or using
 * RFOE()_RX_DIRECTION_CTL()[FLOWID].
 */
union cavm_rfoex_rx_ind_ftx_cfg
{
    uint64_t u;
    struct cavm_rfoex_rx_ind_ftx_cfg_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_29_63        : 35;
        uint64_t ab_cfg_w_enable       : 1;  /**< [ 28: 28](R/W) Configures whether AB_CFG_W3 will be written by RX to JD. If set, will write
                                                                 the AB_CFG_W3 consisting of pkt_len, destination lmac_id and tx_err. */
        uint64_t reserved_25_27        : 3;
        uint64_t enable                : 1;  /**< [ 24: 24](R/W) Enable this flow. Drop packets when clear. */
        uint64_t reserved_23           : 1;
        uint64_t mbt_idx               : 11; /**< [ 22: 12](R/W) MBT index. Pointer to MBT entry for  DMA write buffer configurations.
                                                                 Valid range 0..1055.
                                                                 * 0..1023 - full mbt/jdt.
                                                                 * 1024..1039 - Illegal.  Used by RFOE_RX_DIR_CTL_PKT_TYPE_E::eCPRI with ECPRI_HDR_S[MSG_TYPE] \> 0.
                                                                 * 1040..1055 - only for RFOE_RX_DIR_CTL_PKT_TYPE_E::ALT and
                                                                 RFOE_RX_DIR_CTL_PKT_TYPE_E::GENERIC() types. Illegal for all other
                                                                 RFOE_RX_DIR_CTL_PKT_TYPE_E values. */
        uint64_t reserved_11           : 1;
        uint64_t flow_idx              : 11; /**< [ 10:  0](R/W) Flow index. Pointer to JDT entry for job descriptor and flow configuration.
                                                                 Valid range 0..1055.
                                                                 * 0..1023 - full mbt/jdt.
                                                                 * 1024..1039 - Illegal.  Used by RFOE_RX_DIR_CTL_PKT_TYPE_E::eCPRI with ECPRI_HDR_S[MSG_TYPE] \> 0.
                                                                 * 1040..1055 - only for RFOE_RX_DIR_CTL_PKT_TYPE_E::ALT and
                                                                 RFOE_RX_DIR_CTL_PKT_TYPE_E::GENERIC() types. Illegal for all other
                                                                 RFOE_RX_DIR_CTL_PKT_TYPE_E values. */
#else /* Word 0 - Little Endian */
        uint64_t flow_idx              : 11; /**< [ 10:  0](R/W) Flow index. Pointer to JDT entry for job descriptor and flow configuration.
                                                                 Valid range 0..1055.
                                                                 * 0..1023 - full mbt/jdt.
                                                                 * 1024..1039 - Illegal.  Used by RFOE_RX_DIR_CTL_PKT_TYPE_E::eCPRI with ECPRI_HDR_S[MSG_TYPE] \> 0.
                                                                 * 1040..1055 - only for RFOE_RX_DIR_CTL_PKT_TYPE_E::ALT and
                                                                 RFOE_RX_DIR_CTL_PKT_TYPE_E::GENERIC() types. Illegal for all other
                                                                 RFOE_RX_DIR_CTL_PKT_TYPE_E values. */
        uint64_t reserved_11           : 1;
        uint64_t mbt_idx               : 11; /**< [ 22: 12](R/W) MBT index. Pointer to MBT entry for  DMA write buffer configurations.
                                                                 Valid range 0..1055.
                                                                 * 0..1023 - full mbt/jdt.
                                                                 * 1024..1039 - Illegal.  Used by RFOE_RX_DIR_CTL_PKT_TYPE_E::eCPRI with ECPRI_HDR_S[MSG_TYPE] \> 0.
                                                                 * 1040..1055 - only for RFOE_RX_DIR_CTL_PKT_TYPE_E::ALT and
                                                                 RFOE_RX_DIR_CTL_PKT_TYPE_E::GENERIC() types. Illegal for all other
                                                                 RFOE_RX_DIR_CTL_PKT_TYPE_E values. */
        uint64_t reserved_23           : 1;
        uint64_t enable                : 1;  /**< [ 24: 24](R/W) Enable this flow. Drop packets when clear. */
        uint64_t reserved_25_27        : 3;
        uint64_t ab_cfg_w_enable       : 1;  /**< [ 28: 28](R/W) Configures whether AB_CFG_W3 will be written by RX to JD. If set, will write
                                                                 the AB_CFG_W3 consisting of pkt_len, destination lmac_id and tx_err. */
        uint64_t reserved_29_63        : 35;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_rfoex_rx_ind_ftx_cfg_s cn; */
};
typedef union cavm_rfoex_rx_ind_ftx_cfg cavm_rfoex_rx_ind_ftx_cfg_t;

static inline uint64_t CAVM_RFOEX_RX_IND_FTX_CFG(uint64_t a, uint64_t b) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_RFOEX_RX_IND_FTX_CFG(uint64_t a, uint64_t b)
{
    if (cavm_is_model(OCTEONTX_ODINMP) && ((a<=6) && (b<=3)))
        return 0x861000001c00ll + 0x1000000ll * ((a) & 0x7) + 8ll * ((b) & 0x3);
    __cavm_csr_fatal("RFOEX_RX_IND_FTX_CFG", 2, a, b, 0, 0, 0, 0);
}

#define typedef_CAVM_RFOEX_RX_IND_FTX_CFG(a,b) cavm_rfoex_rx_ind_ftx_cfg_t
#define bustype_CAVM_RFOEX_RX_IND_FTX_CFG(a,b) CSR_TYPE_NCB
#define basename_CAVM_RFOEX_RX_IND_FTX_CFG(a,b) "RFOEX_RX_IND_FTX_CFG"
#define busnum_CAVM_RFOEX_RX_IND_FTX_CFG(a,b) (a)
#define arguments_CAVM_RFOEX_RX_IND_FTX_CFG(a,b) (a),(b),-1,-1

/**
 * Register (NCB) rfoe#_rx_ind_jdt_cfg0
 *
 * RFOE RX Indirect Job Descriptor Table Configuration Zero Register
 * Job descriptor table, configuration register zero. This table determines
 * the format and location of job descriptors produced for incoming packets,
 * and controls some parameters of how packets are written to memory.
 *
 * This register indirectly accesses a table of 1040 entries.
 *
 * Reads and writes to this register access the table entry specified by
 * RFOE()_RX_INDIRECT_INDEX[INDEX].
 *
 * Incoming packets select an JDT entry based as follows:
 * * ECPRI_HDR_S[MSG_TYPE] == 0: index = RFOE()_RX_IND_ECPRI_FT_CFG[MBT_IDX].
 * * ECPRI_HDR_S[MSG_TYPE] == 1..15: index = 1023 + ECPRI_HDR_S[MSG_TYPE].
 * * ECPRI_HDR_S[MSG_TYPE] \> 15: index = 1039.
 * * Other: index = RFOE()_RX_IND_FT()_CFG[MBT_IDX].
 */
union cavm_rfoex_rx_ind_jdt_cfg0
{
    uint64_t u;
    struct cavm_rfoex_rx_ind_jdt_cfg0_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t target_mem            : 1;  /**< [ 63: 63](R/W) Specifies the target memory for the address for the DMA's job descriptor write (JDW):
                                                                  0 = SMEM.
                                                                  1 = LLC/DRAM. */
        uint64_t use_inline_mbt_addr   : 1;  /**< [ 62: 62](R/W) Specifies the JD to use the MBT Address (inline) instead of JDT Address. No
                                                                 checking or qualification of job command is done.
                                                                  0 = Use JDT Address.
                                                                  1 = Use MBT Address. */
        uint64_t cmd_type              : 2;  /**< [ 61: 60](R/W) Deprecated.  Hardware does not use. */
        uint64_t dswap                 : 3;  /**< [ 59: 57](R/W) The byte swap mode for JDW to LLC/DRAM. JDW to BPHY SMEM ignores this field.
                                                                 Enumerated by MHBW_PNB_DSWAP_E. */
        uint64_t pkt_offset            : 5;  /**< [ 56: 52](R/W) Packet offset in units of 128-bits. DMA operation starts at an offset of
                                                                 [PKT_OFFSET]*16 bytes from the start of the packet buffer.
                                                                 Must be \<= 24. If [PKT_STATUS_WRITE]=1, must be \>= 4 or the packet
                                                                 status write will over-write the packet data. */
        uint64_t jdw_enable            : 1;  /**< [ 51: 51](R/W) Enable JDW updates of job descriptor in memory.
                                                                 0 = Do not update job descriptor in memory.
                                                                 1 = Update job descriptor in memory.
                                                                 Used for standard RoE & 0xFD subtype RoE packets. Ignored by
                                                                 RoE subtype 0xFC. 0xFC subtype never writes the JD. */
        uint64_t pkt_status_write      : 1;  /**< [ 50: 50](R/W) When set, RFOE will write a packet status header at the start of each
                                                                 buffer, consisting of RFOE_PSW_S. */
        uint64_t jca_enable            : 1;  /**< [ 49: 49](R/W) Enable job completion action. When set, RFOE sends a JCA message on
                                                                 completion of each packet, or on the last segment for 0xFD subtype
                                                                 packets. */
        uint64_t num_jd                : 16; /**< [ 48: 33](R/W) Number of job descriptors in this circular buffer. Total size of the
                                                                 buffer is [NUM_JD]*[JD_SIZE]*8 bytes. Must be greater than 0. */
        uint64_t jd_rd_offset          : 6;  /**< [ 32: 27](R/W) Location of read DMA descriptor within each job descriptor, in units
                                                                 of 8 bytes.
                                                                 * Must be less than [JD_SIZE]-1.
                                                                 * ([JD_RD_OFFSET]*8)+RFOE()_RX_IND_JDT_PTR[PTR] must be 128-bit aligned. */
        uint64_t jd_size               : 6;  /**< [ 26: 21](R/W) Size of each job descriptor, in units of 8 bytes. Must be even (i.e.,
                                                                 total size must be a multiple of 16 bytes). [JD_SIZE] must be greater than 0. */
        uint64_t end_bswap_enable      : 1;  /**< [ 20: 20](R/W) For all byte-mode data,endianess byte swap enable . Does not change PSW, Logger, JDW writes.
                                                                 0 = Don't do endianess swap DMA write of packet data.
                                                                 1 = Do the byte swap for byte DMA data.  byte0-byte15, byte1-byte14, etc. */
        uint64_t sample_width          : 8;  /**< [ 19: 12](R/W) For [SAMPLE_MODE]=1, defines width in bits of I an Q samples in the packet
                                                                 data. */
        uint64_t sample_mode           : 1;  /**< [ 11: 11](R/W) Interpret RoE samples. When set, interpret the data following rbMap
                                                                 bytes as I,Q samples, and expand each [SAMPLE_WIDTH] I/Q sample to a 16-bit sample.

                                                                 Must be zero for eCPRI flows. */
        uint64_t sample_mode_width_option : 1;/**< [ 10: 10](R/W) I/Q sample format. When [SAMPLE_MODE]=1, this determines how samples
                                                                 are expanded to 16 bits.
                                                                 0 = Sign-extend left.
                                                                 1 = Zero pad right. */
        uint64_t transparent_mode      : 1;  /**< [  9:  9](R/W) Transparently write packet data to memory with no transformations.
                                                                 Overrides settings for [HEADER_DMA_MODE], [RBMAP_BYTES], and
                                                                 [SAMPLE_MODE]. RoE 0xFC subtype are never transparent and ignores this field. */
        uint64_t header_dma_mode       : 1;  /**< [  8:  8](R/W) Write header bytes out to memory if [HEADER_DMA_MODE] = 1.  Ignored when [TRANSPARENT_MODE] = 1. */
        uint64_t rbmap_bytes           : 8;  /**< [  7:  0](R/W) Number of rbMap bytes following the RoE header.
                                                                 *RoE subtype == 0xFD: [RBMAP_BYTES] are only in first, SOS segment only.
                                                                 *Transparent mode: ignored.  Transparent packets do not have rbMap.
                                                                 *RoE 0xFC subtype: ignored.  0xFC packets do not have rbMap.

                                                                 Must be zero for eCPRI flows. */
#else /* Word 0 - Little Endian */
        uint64_t rbmap_bytes           : 8;  /**< [  7:  0](R/W) Number of rbMap bytes following the RoE header.
                                                                 *RoE subtype == 0xFD: [RBMAP_BYTES] are only in first, SOS segment only.
                                                                 *Transparent mode: ignored.  Transparent packets do not have rbMap.
                                                                 *RoE 0xFC subtype: ignored.  0xFC packets do not have rbMap.

                                                                 Must be zero for eCPRI flows. */
        uint64_t header_dma_mode       : 1;  /**< [  8:  8](R/W) Write header bytes out to memory if [HEADER_DMA_MODE] = 1.  Ignored when [TRANSPARENT_MODE] = 1. */
        uint64_t transparent_mode      : 1;  /**< [  9:  9](R/W) Transparently write packet data to memory with no transformations.
                                                                 Overrides settings for [HEADER_DMA_MODE], [RBMAP_BYTES], and
                                                                 [SAMPLE_MODE]. RoE 0xFC subtype are never transparent and ignores this field. */
        uint64_t sample_mode_width_option : 1;/**< [ 10: 10](R/W) I/Q sample format. When [SAMPLE_MODE]=1, this determines how samples
                                                                 are expanded to 16 bits.
                                                                 0 = Sign-extend left.
                                                                 1 = Zero pad right. */
        uint64_t sample_mode           : 1;  /**< [ 11: 11](R/W) Interpret RoE samples. When set, interpret the data following rbMap
                                                                 bytes as I,Q samples, and expand each [SAMPLE_WIDTH] I/Q sample to a 16-bit sample.

                                                                 Must be zero for eCPRI flows. */
        uint64_t sample_width          : 8;  /**< [ 19: 12](R/W) For [SAMPLE_MODE]=1, defines width in bits of I an Q samples in the packet
                                                                 data. */
        uint64_t end_bswap_enable      : 1;  /**< [ 20: 20](R/W) For all byte-mode data,endianess byte swap enable . Does not change PSW, Logger, JDW writes.
                                                                 0 = Don't do endianess swap DMA write of packet data.
                                                                 1 = Do the byte swap for byte DMA data.  byte0-byte15, byte1-byte14, etc. */
        uint64_t jd_size               : 6;  /**< [ 26: 21](R/W) Size of each job descriptor, in units of 8 bytes. Must be even (i.e.,
                                                                 total size must be a multiple of 16 bytes). [JD_SIZE] must be greater than 0. */
        uint64_t jd_rd_offset          : 6;  /**< [ 32: 27](R/W) Location of read DMA descriptor within each job descriptor, in units
                                                                 of 8 bytes.
                                                                 * Must be less than [JD_SIZE]-1.
                                                                 * ([JD_RD_OFFSET]*8)+RFOE()_RX_IND_JDT_PTR[PTR] must be 128-bit aligned. */
        uint64_t num_jd                : 16; /**< [ 48: 33](R/W) Number of job descriptors in this circular buffer. Total size of the
                                                                 buffer is [NUM_JD]*[JD_SIZE]*8 bytes. Must be greater than 0. */
        uint64_t jca_enable            : 1;  /**< [ 49: 49](R/W) Enable job completion action. When set, RFOE sends a JCA message on
                                                                 completion of each packet, or on the last segment for 0xFD subtype
                                                                 packets. */
        uint64_t pkt_status_write      : 1;  /**< [ 50: 50](R/W) When set, RFOE will write a packet status header at the start of each
                                                                 buffer, consisting of RFOE_PSW_S. */
        uint64_t jdw_enable            : 1;  /**< [ 51: 51](R/W) Enable JDW updates of job descriptor in memory.
                                                                 0 = Do not update job descriptor in memory.
                                                                 1 = Update job descriptor in memory.
                                                                 Used for standard RoE & 0xFD subtype RoE packets. Ignored by
                                                                 RoE subtype 0xFC. 0xFC subtype never writes the JD. */
        uint64_t pkt_offset            : 5;  /**< [ 56: 52](R/W) Packet offset in units of 128-bits. DMA operation starts at an offset of
                                                                 [PKT_OFFSET]*16 bytes from the start of the packet buffer.
                                                                 Must be \<= 24. If [PKT_STATUS_WRITE]=1, must be \>= 4 or the packet
                                                                 status write will over-write the packet data. */
        uint64_t dswap                 : 3;  /**< [ 59: 57](R/W) The byte swap mode for JDW to LLC/DRAM. JDW to BPHY SMEM ignores this field.
                                                                 Enumerated by MHBW_PNB_DSWAP_E. */
        uint64_t cmd_type              : 2;  /**< [ 61: 60](R/W) Deprecated.  Hardware does not use. */
        uint64_t use_inline_mbt_addr   : 1;  /**< [ 62: 62](R/W) Specifies the JD to use the MBT Address (inline) instead of JDT Address. No
                                                                 checking or qualification of job command is done.
                                                                  0 = Use JDT Address.
                                                                  1 = Use MBT Address. */
        uint64_t target_mem            : 1;  /**< [ 63: 63](R/W) Specifies the target memory for the address for the DMA's job descriptor write (JDW):
                                                                  0 = SMEM.
                                                                  1 = LLC/DRAM. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_rfoex_rx_ind_jdt_cfg0_s cn; */
};
typedef union cavm_rfoex_rx_ind_jdt_cfg0 cavm_rfoex_rx_ind_jdt_cfg0_t;

static inline uint64_t CAVM_RFOEX_RX_IND_JDT_CFG0(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_RFOEX_RX_IND_JDT_CFG0(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_ODINMP) && (a<=6))
        return 0x861000001c40ll + 0x1000000ll * ((a) & 0x7);
    __cavm_csr_fatal("RFOEX_RX_IND_JDT_CFG0", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_RFOEX_RX_IND_JDT_CFG0(a) cavm_rfoex_rx_ind_jdt_cfg0_t
#define bustype_CAVM_RFOEX_RX_IND_JDT_CFG0(a) CSR_TYPE_NCB
#define basename_CAVM_RFOEX_RX_IND_JDT_CFG0(a) "RFOEX_RX_IND_JDT_CFG0"
#define busnum_CAVM_RFOEX_RX_IND_JDT_CFG0(a) (a)
#define arguments_CAVM_RFOEX_RX_IND_JDT_CFG0(a) (a),-1,-1,-1

/**
 * Register (NCB) rfoe#_rx_ind_jdt_cfg1
 *
 * RFOE RX Job Descriptor Table Configuration One Register
 * Job descriptor table, additional configuration register one. This table determines
 * some details of IEE 1914.3-2018 sequence number tracking.
 *
 * This register indirectly accesses a table of 1040 entries.
 *
 * Reads and writes to this register access the table entry specified by
 * RFOE()_RX_INDIRECT_INDEX[INDEX].
 *
 * Incoming packets select an JDT entry based as follows:
 * * ECPRI_HDR_S[MSG_TYPE] == 0: index = RFOE()_RX_IND_ECPRI_FT_CFG[MBT_IDX].
 * * ECPRI_HDR_S[MSG_TYPE] == 1..15: index = 1023 + ECPRI_HDR_S[MSG_TYPE].
 * * ECPRI_HDR_S[MSG_TYPE] \> 15: index = 1039.
 * * Other: index = RFOE()_RX_IND_FT()_CFG[MBT_IDX].
 */
union cavm_rfoex_rx_ind_jdt_cfg1
{
    uint64_t u;
    struct cavm_rfoex_rx_ind_jdt_cfg1_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t gmid                  : 3;  /**< [ 63: 61](R/W) Guest machine ID used for this JDT entry. Sent on RX DMA JDW writes. */
        uint64_t reserved_49_60        : 12;
        uint64_t seq_id_check_en       : 1;  /**< [ 48: 48](R/W) Enables ECPRI Seq_ID Check, when set to 1. */
        uint64_t reserved_43_47        : 5;
        uint64_t pinc_prop             : 3;  /**< [ 42: 40](R/W) IEEE 1914.3-2018 Table 5 seqNum configuration. */
        uint64_t reserved_39           : 1;
        uint64_t qinc_prop             : 3;  /**< [ 38: 36](R/W) IEEE 1914.3-2018 Table 5 seqNum configuration. */
        uint64_t reserved_33_35        : 3;
        uint64_t order_info_type       : 1;  /**< [ 32: 32](R/W) RoE Order info type enumerated by RFOE_ORDER_INFO_TYPE_E. */
        uint64_t reserved_29_31        : 3;
        uint64_t accept_time_window    : 29; /**< [ 28:  0](R/W) Accept time window used when [ORDER_INFO_TYPE]=1.
                                                                 See IEEE 1914.3-2018. */
#else /* Word 0 - Little Endian */
        uint64_t accept_time_window    : 29; /**< [ 28:  0](R/W) Accept time window used when [ORDER_INFO_TYPE]=1.
                                                                 See IEEE 1914.3-2018. */
        uint64_t reserved_29_31        : 3;
        uint64_t order_info_type       : 1;  /**< [ 32: 32](R/W) RoE Order info type enumerated by RFOE_ORDER_INFO_TYPE_E. */
        uint64_t reserved_33_35        : 3;
        uint64_t qinc_prop             : 3;  /**< [ 38: 36](R/W) IEEE 1914.3-2018 Table 5 seqNum configuration. */
        uint64_t reserved_39           : 1;
        uint64_t pinc_prop             : 3;  /**< [ 42: 40](R/W) IEEE 1914.3-2018 Table 5 seqNum configuration. */
        uint64_t reserved_43_47        : 5;
        uint64_t seq_id_check_en       : 1;  /**< [ 48: 48](R/W) Enables ECPRI Seq_ID Check, when set to 1. */
        uint64_t reserved_49_60        : 12;
        uint64_t gmid                  : 3;  /**< [ 63: 61](R/W) Guest machine ID used for this JDT entry. Sent on RX DMA JDW writes. */
#endif /* Word 0 - End */
    } s;
    struct cavm_rfoex_rx_ind_jdt_cfg1_cn
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t gmid                  : 3;  /**< [ 63: 61](R/W) Guest machine ID used for this JDT entry. Sent on RX DMA JDW writes. */
        uint64_t reserved_57_60        : 4;
        uint64_t reserved_52_56        : 5;
        uint64_t reserved_49_51        : 3;
        uint64_t seq_id_check_en       : 1;  /**< [ 48: 48](R/W) Enables ECPRI Seq_ID Check, when set to 1. */
        uint64_t reserved_44_47        : 4;
        uint64_t reserved_43           : 1;
        uint64_t pinc_prop             : 3;  /**< [ 42: 40](R/W) IEEE 1914.3-2018 Table 5 seqNum configuration. */
        uint64_t reserved_39           : 1;
        uint64_t qinc_prop             : 3;  /**< [ 38: 36](R/W) IEEE 1914.3-2018 Table 5 seqNum configuration. */
        uint64_t reserved_33_35        : 3;
        uint64_t order_info_type       : 1;  /**< [ 32: 32](R/W) RoE Order info type enumerated by RFOE_ORDER_INFO_TYPE_E. */
        uint64_t reserved_29_31        : 3;
        uint64_t accept_time_window    : 29; /**< [ 28:  0](R/W) Accept time window used when [ORDER_INFO_TYPE]=1.
                                                                 See IEEE 1914.3-2018. */
#else /* Word 0 - Little Endian */
        uint64_t accept_time_window    : 29; /**< [ 28:  0](R/W) Accept time window used when [ORDER_INFO_TYPE]=1.
                                                                 See IEEE 1914.3-2018. */
        uint64_t reserved_29_31        : 3;
        uint64_t order_info_type       : 1;  /**< [ 32: 32](R/W) RoE Order info type enumerated by RFOE_ORDER_INFO_TYPE_E. */
        uint64_t reserved_33_35        : 3;
        uint64_t qinc_prop             : 3;  /**< [ 38: 36](R/W) IEEE 1914.3-2018 Table 5 seqNum configuration. */
        uint64_t reserved_39           : 1;
        uint64_t pinc_prop             : 3;  /**< [ 42: 40](R/W) IEEE 1914.3-2018 Table 5 seqNum configuration. */
        uint64_t reserved_43           : 1;
        uint64_t reserved_44_47        : 4;
        uint64_t seq_id_check_en       : 1;  /**< [ 48: 48](R/W) Enables ECPRI Seq_ID Check, when set to 1. */
        uint64_t reserved_49_51        : 3;
        uint64_t reserved_52_56        : 5;
        uint64_t reserved_57_60        : 4;
        uint64_t gmid                  : 3;  /**< [ 63: 61](R/W) Guest machine ID used for this JDT entry. Sent on RX DMA JDW writes. */
#endif /* Word 0 - End */
    } cn;
};
typedef union cavm_rfoex_rx_ind_jdt_cfg1 cavm_rfoex_rx_ind_jdt_cfg1_t;

static inline uint64_t CAVM_RFOEX_RX_IND_JDT_CFG1(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_RFOEX_RX_IND_JDT_CFG1(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_ODINMP) && (a<=6))
        return 0x861000001c48ll + 0x1000000ll * ((a) & 0x7);
    __cavm_csr_fatal("RFOEX_RX_IND_JDT_CFG1", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_RFOEX_RX_IND_JDT_CFG1(a) cavm_rfoex_rx_ind_jdt_cfg1_t
#define bustype_CAVM_RFOEX_RX_IND_JDT_CFG1(a) CSR_TYPE_NCB
#define basename_CAVM_RFOEX_RX_IND_JDT_CFG1(a) "RFOEX_RX_IND_JDT_CFG1"
#define busnum_CAVM_RFOEX_RX_IND_JDT_CFG1(a) (a)
#define arguments_CAVM_RFOEX_RX_IND_JDT_CFG1(a) (a),-1,-1,-1

/**
 * Register (NCB) rfoe#_rx_ind_jdt_cfg2
 *
 * RFOE RX Indirect Job Descriptor Table Configuration Two Register
 * Job descriptor table, configuration register two. This table determines
 * the format and location of job descriptors produced for incoming routed packets,
 * and controls some parameters of how packets are written to memory.
 *
 * This register indirectly accesses a table of 1040 entries.
 *
 * Reads and writes to this register access the table entry specified by
 * RFOE()_RX_INDIRECT_INDEX[INDEX].
 *
 * Incoming packets select an JDT entry based as follows:
 * * ECPRI_HDR_S[MSG_TYPE] == 0: index = RFOE()_RX_IND_ECPRI_FT_CFG[MBT_IDX].
 * * ECPRI_HDR_S[MSG_TYPE] == 1..15: index = 1023 + ECPRI_HDR_S[MSG_TYPE].
 * * ECPRI_HDR_S[MSG_TYPE] \> 15: index = 1039.
 * * Other: index = RFOE()_RX_IND_FT()_CFG[MBT_IDX].
 */
union cavm_rfoex_rx_ind_jdt_cfg2
{
    uint64_t u;
    struct cavm_rfoex_rx_ind_jdt_cfg2_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_6_63         : 58;
        uint64_t ab_cfg_offset         : 6;  /**< [  5:  0](R/W) Location of AB Config descriptor Word 3 within each job descriptor, in units
                                                                 of 8 bytes.
                                                                 * Must be less than or equal to RFOE()_RX_IND_JDT_CFG0[JD_SIZE]-1.
                                                                 * ([AB_CFG_OFFSET]*8)+RFOE()_RX_IND_JDT_PTR[PTR] must be 128-bit aligned. */
#else /* Word 0 - Little Endian */
        uint64_t ab_cfg_offset         : 6;  /**< [  5:  0](R/W) Location of AB Config descriptor Word 3 within each job descriptor, in units
                                                                 of 8 bytes.
                                                                 * Must be less than or equal to RFOE()_RX_IND_JDT_CFG0[JD_SIZE]-1.
                                                                 * ([AB_CFG_OFFSET]*8)+RFOE()_RX_IND_JDT_PTR[PTR] must be 128-bit aligned. */
        uint64_t reserved_6_63         : 58;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_rfoex_rx_ind_jdt_cfg2_s cn; */
};
typedef union cavm_rfoex_rx_ind_jdt_cfg2 cavm_rfoex_rx_ind_jdt_cfg2_t;

static inline uint64_t CAVM_RFOEX_RX_IND_JDT_CFG2(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_RFOEX_RX_IND_JDT_CFG2(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_ODINMP) && (a<=6))
        return 0x861000001c90ll + 0x1000000ll * ((a) & 0x7);
    __cavm_csr_fatal("RFOEX_RX_IND_JDT_CFG2", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_RFOEX_RX_IND_JDT_CFG2(a) cavm_rfoex_rx_ind_jdt_cfg2_t
#define bustype_CAVM_RFOEX_RX_IND_JDT_CFG2(a) CSR_TYPE_NCB
#define basename_CAVM_RFOEX_RX_IND_JDT_CFG2(a) "RFOEX_RX_IND_JDT_CFG2"
#define busnum_CAVM_RFOEX_RX_IND_JDT_CFG2(a) (a)
#define arguments_CAVM_RFOEX_RX_IND_JDT_CFG2(a) (a),-1,-1,-1

/**
 * Register (NCB) rfoe#_rx_ind_jdt_psm_w0
 *
 * RFOE RX Job Descriptor Table PSM CMD Word0 Register
 * Job descriptor table, PSM command word.
 *
 * RFOE()_RX_IND_JDT_PSM_W0 and RFOE()_RX_IND_JDT_PSM_W1 store a 128-bit PSM
 * command that is submitted when an RX packet arrives, and
 * RFOE()_RX_IND_JDT_CFG0[JCA_ENABLE]=1.
 *
 * In addition, RFOE replaces some fields when the RoE packet subtype is not 0xFC.
 *
 * If the OPCODE is PSM_OPCODE_E::PSM_OP_ADDJOB or PSM_OPCODE_E::PSM_OP_CONTJOB, then RFOE
 * replaces PSM_CMD_ADDJOB_S[TMEM] with RFOE()_RX_IND_JDT_CFG0[TARGET_MEM], replaces
 * PSM_CMD_ADDJOB_S[JOBPTR] with a pointer to the job descriptor allocated
 * from the job descriptor buffer, and replaces PSM_CMD_ADDJOB_S[JOBTAG] with a
 * calculated jobtag defined by
 * RFOE()_RX_JCA_ADDJOB_JOBTAG.
 *
 * If the OPCODE is PSM_OPCODE_E::PSM_OP_ADDWORK, then RFOE will  replace
 * PSM_CMD_ADDWORK_S[WQEPTR] with a pointer to the job descriptor allocated
 * from the job descriptor buffer.
 *
 * For other OPCODE values, RFOE does no replacements for fields defined in the PSM CMD words.
 *
 * This register indirectly accesses a table of 1040 entries.
 *
 * Reads and writes to this register access the table entry specified by
 * RFOE()_RX_INDIRECT_INDEX[INDEX].
 *
 * Incoming packets select an JDT entry based as follows:
 * * ECPRI_HDR_S[MSG_TYPE] == 0: index = RFOE()_RX_IND_ECPRI_FT_CFG[MBT_IDX].
 * * ECPRI_HDR_S[MSG_TYPE] == 1..15: index = 1023 + ECPRI_HDR_S[MSG_TYPE].
 * * ECPRI_HDR_S[MSG_TYPE] \> 15: index = 1039.
 * * Other: index = RFOE()_RX_IND_FT()_CFG[MBT_IDX].
 */
union cavm_rfoex_rx_ind_jdt_psm_w0
{
    uint64_t u;
    struct cavm_rfoex_rx_ind_jdt_psm_w0_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t w0                    : 64; /**< [ 63:  0](R/W) PSM command word 0. See PSM_CMD_* structure definitions. */
#else /* Word 0 - Little Endian */
        uint64_t w0                    : 64; /**< [ 63:  0](R/W) PSM command word 0. See PSM_CMD_* structure definitions. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_rfoex_rx_ind_jdt_psm_w0_s cn; */
};
typedef union cavm_rfoex_rx_ind_jdt_psm_w0 cavm_rfoex_rx_ind_jdt_psm_w0_t;

static inline uint64_t CAVM_RFOEX_RX_IND_JDT_PSM_W0(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_RFOEX_RX_IND_JDT_PSM_W0(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_ODINMP) && (a<=6))
        return 0x861000001c58ll + 0x1000000ll * ((a) & 0x7);
    __cavm_csr_fatal("RFOEX_RX_IND_JDT_PSM_W0", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_RFOEX_RX_IND_JDT_PSM_W0(a) cavm_rfoex_rx_ind_jdt_psm_w0_t
#define bustype_CAVM_RFOEX_RX_IND_JDT_PSM_W0(a) CSR_TYPE_NCB
#define basename_CAVM_RFOEX_RX_IND_JDT_PSM_W0(a) "RFOEX_RX_IND_JDT_PSM_W0"
#define busnum_CAVM_RFOEX_RX_IND_JDT_PSM_W0(a) (a)
#define arguments_CAVM_RFOEX_RX_IND_JDT_PSM_W0(a) (a),-1,-1,-1

/**
 * Register (NCB) rfoe#_rx_ind_jdt_psm_w1
 *
 * RFOE RX Job Descriptor Table PSM CMD Word1 Register
 * See RFOE()_RX_IND_JDT_PSM_W0.
 */
union cavm_rfoex_rx_ind_jdt_psm_w1
{
    uint64_t u;
    struct cavm_rfoex_rx_ind_jdt_psm_w1_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t w1                    : 64; /**< [ 63:  0](R/W) PSM command word 1. See PSM_CMD_* structure definitions. */
#else /* Word 0 - Little Endian */
        uint64_t w1                    : 64; /**< [ 63:  0](R/W) PSM command word 1. See PSM_CMD_* structure definitions. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_rfoex_rx_ind_jdt_psm_w1_s cn; */
};
typedef union cavm_rfoex_rx_ind_jdt_psm_w1 cavm_rfoex_rx_ind_jdt_psm_w1_t;

static inline uint64_t CAVM_RFOEX_RX_IND_JDT_PSM_W1(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_RFOEX_RX_IND_JDT_PSM_W1(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_ODINMP) && (a<=6))
        return 0x861000001c60ll + 0x1000000ll * ((a) & 0x7);
    __cavm_csr_fatal("RFOEX_RX_IND_JDT_PSM_W1", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_RFOEX_RX_IND_JDT_PSM_W1(a) cavm_rfoex_rx_ind_jdt_psm_w1_t
#define bustype_CAVM_RFOEX_RX_IND_JDT_PSM_W1(a) CSR_TYPE_NCB
#define basename_CAVM_RFOEX_RX_IND_JDT_PSM_W1(a) "RFOEX_RX_IND_JDT_PSM_W1"
#define busnum_CAVM_RFOEX_RX_IND_JDT_PSM_W1(a) (a)
#define arguments_CAVM_RFOEX_RX_IND_JDT_PSM_W1(a) (a),-1,-1,-1

/**
 * Register (NCB) rfoe#_rx_ind_jdt_ptr
 *
 * RFOE RX Job Descriptor Table Pointer Register
 * Job descriptor table, job descriptor pointer register. This table
 * configures the location of job descriptors to submit when receiving packets.
 *
 * This register indirectly accesses a table of 1040 entries.
 *
 * Reads and writes to this register access the table entry specified by
 * RFOE()_RX_INDIRECT_INDEX[INDEX].
 *
 * Incoming packets select an JDT entry based as follows:
 * * ECPRI_HDR_S[MSG_TYPE] == 0: index = RFOE()_RX_IND_ECPRI_FT_CFG[MBT_IDX].
 * * ECPRI_HDR_S[MSG_TYPE] == 1..15: index = 1023 + ECPRI_HDR_S[MSG_TYPE].
 * * ECPRI_HDR_S[MSG_TYPE] \> 15: index = 1039.
 * * Other: index = RFOE()_RX_IND_FT()_CFG[MBT_IDX].
 */
union cavm_rfoex_rx_ind_jdt_ptr
{
    uint64_t u;
    struct cavm_rfoex_rx_ind_jdt_ptr_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_53_63        : 11;
        uint64_t ptr                   : 53; /**< [ 52:  0](R/W) Byte address of first job descriptor in job descriptor buffer.
                                                                 * [PTR]+(RFOE()_RX_IND_JDT_CFG0[JD_RD_OFFSET]*8) must be 128-bit aligned. */
#else /* Word 0 - Little Endian */
        uint64_t ptr                   : 53; /**< [ 52:  0](R/W) Byte address of first job descriptor in job descriptor buffer.
                                                                 * [PTR]+(RFOE()_RX_IND_JDT_CFG0[JD_RD_OFFSET]*8) must be 128-bit aligned. */
        uint64_t reserved_53_63        : 11;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_rfoex_rx_ind_jdt_ptr_s cn; */
};
typedef union cavm_rfoex_rx_ind_jdt_ptr cavm_rfoex_rx_ind_jdt_ptr_t;

static inline uint64_t CAVM_RFOEX_RX_IND_JDT_PTR(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_RFOEX_RX_IND_JDT_PTR(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_ODINMP) && (a<=6))
        return 0x861000001c50ll + 0x1000000ll * ((a) & 0x7);
    __cavm_csr_fatal("RFOEX_RX_IND_JDT_PTR", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_RFOEX_RX_IND_JDT_PTR(a) cavm_rfoex_rx_ind_jdt_ptr_t
#define bustype_CAVM_RFOEX_RX_IND_JDT_PTR(a) CSR_TYPE_NCB
#define basename_CAVM_RFOEX_RX_IND_JDT_PTR(a) "RFOEX_RX_IND_JDT_PTR"
#define busnum_CAVM_RFOEX_RX_IND_JDT_PTR(a) (a)
#define arguments_CAVM_RFOEX_RX_IND_JDT_PTR(a) (a),-1,-1,-1

/**
 * Register (NCB) rfoe#_rx_ind_jdt_seqnum_p_cfg
 *
 * RFOE RX Indirect Job Descriptor Table SeqNum P-Counter Configuration Register
 * Job descriptor table, RoE seqNum p-counter configuration. This table
 * configures the IEEE 1914.3-2018 seqNum p-counter parameters.
 *
 * This register indirectly accesses a table of 1024 entries.
 *
 * Reads and writes to this register access the table entry specified by
 * RFOE()_RX_INDIRECT_INDEX[INDEX].
 *
 * Incoming packets select an JDT entry based on
 * RFOE()_RX_IND_FT()_CFG[FLOW_IDX] or RFOE()_RX_IND_ECPRI_FT_CFG[FLOW_IDX].
 */
union cavm_rfoex_rx_ind_jdt_seqnum_p_cfg
{
    uint64_t u;
    struct cavm_rfoex_rx_ind_jdt_seqnum_p_cfg_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t pinc                  : 32; /**< [ 63: 32](R/W) Value to increment the p-counter by on each packet.
                                                                 The increment value must be less than RFOE()_TX_IND_SEQNUM_P_CFG[PMAX]. */
        uint64_t pmax                  : 32; /**< [ 31:  0](R/W) For RoE packets,seqNum PMax. Maximum numerical value of the p-counter field. Requirements:
                                                                 *[PMAX] \> [PINC] when RFOE()_RX_IND_JDT_CFG1[PINC_PROP] == 1.
                                                                 *[PMAX] \>= Initial RFOE()_RX_IND_JDT_SEQNUM_STATE[PVAL].
                                                                 *[PMAX] \> Maximum RoE length field when RFOE()_RX_IND_JDT_CFG1[PINC_PROP] == 2.
                                                                 *[PMAX] \<= 3 when (RFOE()_RX_IND_JDT_CFG1[ORDER_INFO_TYPE] == TIMESTAMP).

                                                                 For eCPRI packets, configures the RX syncrhonization start for eCPRI
                                                                 msg_type==0 packets. eCPRI [PMAX] usage is described by structure
                                                                 RFOE_ECPRI_SEQID_RX_SYNC_S */
#else /* Word 0 - Little Endian */
        uint64_t pmax                  : 32; /**< [ 31:  0](R/W) For RoE packets,seqNum PMax. Maximum numerical value of the p-counter field. Requirements:
                                                                 *[PMAX] \> [PINC] when RFOE()_RX_IND_JDT_CFG1[PINC_PROP] == 1.
                                                                 *[PMAX] \>= Initial RFOE()_RX_IND_JDT_SEQNUM_STATE[PVAL].
                                                                 *[PMAX] \> Maximum RoE length field when RFOE()_RX_IND_JDT_CFG1[PINC_PROP] == 2.
                                                                 *[PMAX] \<= 3 when (RFOE()_RX_IND_JDT_CFG1[ORDER_INFO_TYPE] == TIMESTAMP).

                                                                 For eCPRI packets, configures the RX syncrhonization start for eCPRI
                                                                 msg_type==0 packets. eCPRI [PMAX] usage is described by structure
                                                                 RFOE_ECPRI_SEQID_RX_SYNC_S */
        uint64_t pinc                  : 32; /**< [ 63: 32](R/W) Value to increment the p-counter by on each packet.
                                                                 The increment value must be less than RFOE()_TX_IND_SEQNUM_P_CFG[PMAX]. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_rfoex_rx_ind_jdt_seqnum_p_cfg_s cn; */
};
typedef union cavm_rfoex_rx_ind_jdt_seqnum_p_cfg cavm_rfoex_rx_ind_jdt_seqnum_p_cfg_t;

static inline uint64_t CAVM_RFOEX_RX_IND_JDT_SEQNUM_P_CFG(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_RFOEX_RX_IND_JDT_SEQNUM_P_CFG(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_ODINMP) && (a<=6))
        return 0x861000001c68ll + 0x1000000ll * ((a) & 0x7);
    __cavm_csr_fatal("RFOEX_RX_IND_JDT_SEQNUM_P_CFG", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_RFOEX_RX_IND_JDT_SEQNUM_P_CFG(a) cavm_rfoex_rx_ind_jdt_seqnum_p_cfg_t
#define bustype_CAVM_RFOEX_RX_IND_JDT_SEQNUM_P_CFG(a) CSR_TYPE_NCB
#define basename_CAVM_RFOEX_RX_IND_JDT_SEQNUM_P_CFG(a) "RFOEX_RX_IND_JDT_SEQNUM_P_CFG"
#define busnum_CAVM_RFOEX_RX_IND_JDT_SEQNUM_P_CFG(a) (a)
#define arguments_CAVM_RFOEX_RX_IND_JDT_SEQNUM_P_CFG(a) (a),-1,-1,-1

/**
 * Register (NCB) rfoe#_rx_ind_jdt_seqnum_q_cfg
 *
 * RFOE RX Indirect Job Descriptor Table SeqNum Q-Counter Configuration Register
 * Job descriptor table, RoE seqNum q-counter configuration. This table
 * configures the IEEE 1914.3-2018 seqNum q-counter parameters.
 *
 * This register indirectly accesses a table of 1024 entries.
 *
 * Reads and writes to this register access the table entry specified by
 * RFOE()_RX_INDIRECT_INDEX[INDEX].
 *
 * Incoming packets select an JDT entry based on
 * RFOE()_RX_IND_FT()_CFG[FLOW_IDX] or RFOE()_RX_IND_ECPRI_FT_CFG[FLOW_IDX].
 */
union cavm_rfoex_rx_ind_jdt_seqnum_q_cfg
{
    uint64_t u;
    struct cavm_rfoex_rx_ind_jdt_seqnum_q_cfg_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t qinc                  : 32; /**< [ 63: 32](R/W) Value to increment q-counter by on each p-counter wrap event.
                                                                 The increment value must be less than [QMAX]. */
        uint64_t qmax                  : 32; /**< [ 31:  0](R/W) seqNum QMax. Maximum numerical value of the q-counter field. Requirements:
                                                                 * [QMAX] \> [QINC] when RFOE()_RX_IND_JDT_CFG1[QINC_PROP] == 1.
                                                                 * [QMAX] \>= Initial RFOE()_RX_IND_JDT_SEQNUM_STATE[QVAL].
                                                                 * [QMAX] should be 0 when RFOE()_RX_IND_JDT_CFG1[ORDER_INFO_TYPE] == TIMESTAMP. */
#else /* Word 0 - Little Endian */
        uint64_t qmax                  : 32; /**< [ 31:  0](R/W) seqNum QMax. Maximum numerical value of the q-counter field. Requirements:
                                                                 * [QMAX] \> [QINC] when RFOE()_RX_IND_JDT_CFG1[QINC_PROP] == 1.
                                                                 * [QMAX] \>= Initial RFOE()_RX_IND_JDT_SEQNUM_STATE[QVAL].
                                                                 * [QMAX] should be 0 when RFOE()_RX_IND_JDT_CFG1[ORDER_INFO_TYPE] == TIMESTAMP. */
        uint64_t qinc                  : 32; /**< [ 63: 32](R/W) Value to increment q-counter by on each p-counter wrap event.
                                                                 The increment value must be less than [QMAX]. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_rfoex_rx_ind_jdt_seqnum_q_cfg_s cn; */
};
typedef union cavm_rfoex_rx_ind_jdt_seqnum_q_cfg cavm_rfoex_rx_ind_jdt_seqnum_q_cfg_t;

static inline uint64_t CAVM_RFOEX_RX_IND_JDT_SEQNUM_Q_CFG(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_RFOEX_RX_IND_JDT_SEQNUM_Q_CFG(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_ODINMP) && (a<=6))
        return 0x861000001c70ll + 0x1000000ll * ((a) & 0x7);
    __cavm_csr_fatal("RFOEX_RX_IND_JDT_SEQNUM_Q_CFG", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_RFOEX_RX_IND_JDT_SEQNUM_Q_CFG(a) cavm_rfoex_rx_ind_jdt_seqnum_q_cfg_t
#define bustype_CAVM_RFOEX_RX_IND_JDT_SEQNUM_Q_CFG(a) CSR_TYPE_NCB
#define basename_CAVM_RFOEX_RX_IND_JDT_SEQNUM_Q_CFG(a) "RFOEX_RX_IND_JDT_SEQNUM_Q_CFG"
#define busnum_CAVM_RFOEX_RX_IND_JDT_SEQNUM_Q_CFG(a) (a)
#define arguments_CAVM_RFOEX_RX_IND_JDT_SEQNUM_Q_CFG(a) (a),-1,-1,-1

/**
 * Register (NCB) rfoe#_rx_ind_jdt_seqnum_state
 *
 * RFOE RX Job Descriptor Table SEQNUM STATE Register
 * Job descriptor table, RoE seqNum state. This table
 * reports the current values of the IEEE 1914.3-2018 sequence numbers for
 * this flow.
 *
 * Also used for eCPRI SEQ_ID checking.
 *
 * This register indirectly accesses a table of 1040 entries.
 *
 * Reads and writes to this register access the table entry specified by
 * RFOE()_RX_INDIRECT_INDEX[INDEX].
 *
 * Incoming packets select an JDT entry based on
 * RFOE()_RX_IND_FT()_CFG[FLOW_IDX] or RFOE()_RX_IND_ECPRI_FT_CFG[FLOW_IDX].
 */
union cavm_rfoex_rx_ind_jdt_seqnum_state
{
    uint64_t u;
    struct cavm_rfoex_rx_ind_jdt_seqnum_state_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t pval                  : 32; /**< [ 63: 32](R/W/H) SeqNum p-counter value.
                                                                 The initial value must be less than or equal to RFOE()_RX_IND_JDT_SEQNUM_P_CFG[PMAX]. */
        uint64_t qval                  : 32; /**< [ 31:  0](R/W/H) SeqNum q-counter value.
                                                                 The initial value must be less than or equal to RFOE()_RX_IND_JDT_SEQNUM_Q_CFG[QMAX].
                                                                 Contents are valid for seqNum mode (RFOE()_RX_IND_JDT_CFG1[ORDER_INFO_TYPE] == SEQNUM). */
#else /* Word 0 - Little Endian */
        uint64_t qval                  : 32; /**< [ 31:  0](R/W/H) SeqNum q-counter value.
                                                                 The initial value must be less than or equal to RFOE()_RX_IND_JDT_SEQNUM_Q_CFG[QMAX].
                                                                 Contents are valid for seqNum mode (RFOE()_RX_IND_JDT_CFG1[ORDER_INFO_TYPE] == SEQNUM). */
        uint64_t pval                  : 32; /**< [ 63: 32](R/W/H) SeqNum p-counter value.
                                                                 The initial value must be less than or equal to RFOE()_RX_IND_JDT_SEQNUM_P_CFG[PMAX]. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_rfoex_rx_ind_jdt_seqnum_state_s cn; */
};
typedef union cavm_rfoex_rx_ind_jdt_seqnum_state cavm_rfoex_rx_ind_jdt_seqnum_state_t;

static inline uint64_t CAVM_RFOEX_RX_IND_JDT_SEQNUM_STATE(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_RFOEX_RX_IND_JDT_SEQNUM_STATE(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_ODINMP) && (a<=6))
        return 0x861000001c80ll + 0x1000000ll * ((a) & 0x7);
    __cavm_csr_fatal("RFOEX_RX_IND_JDT_SEQNUM_STATE", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_RFOEX_RX_IND_JDT_SEQNUM_STATE(a) cavm_rfoex_rx_ind_jdt_seqnum_state_t
#define bustype_CAVM_RFOEX_RX_IND_JDT_SEQNUM_STATE(a) CSR_TYPE_NCB
#define basename_CAVM_RFOEX_RX_IND_JDT_SEQNUM_STATE(a) "RFOEX_RX_IND_JDT_SEQNUM_STATE"
#define busnum_CAVM_RFOEX_RX_IND_JDT_SEQNUM_STATE(a) (a)
#define arguments_CAVM_RFOEX_RX_IND_JDT_SEQNUM_STATE(a) (a),-1,-1,-1

/**
 * Register (NCB) rfoe#_rx_ind_jdt_state
 *
 * RFOE RX Job Descriptor Table State Register
 * Job descriptor table, next job descriptor state. This table tracks the
 * location of the next job descriptor for the given flow.
 *
 * This register indirectly accesses a table of 1040 entries.
 *
 * Reads and writes to this register access the table entry specified by
 * RFOE()_RX_INDIRECT_INDEX[INDEX].
 *
 * Incoming packets select an JDT entry based as follows:
 * * ECPRI_HDR_S[MSG_TYPE] == 0: index = RFOE()_RX_IND_ECPRI_FT_CFG[MBT_IDX].
 * * ECPRI_HDR_S[MSG_TYPE] == 1..15: index = 1023 + ECPRI_HDR_S[MSG_TYPE].
 * * ECPRI_HDR_S[MSG_TYPE] \> 15: index = 1039.
 * * Other: index = RFOE()_RX_IND_FT()_CFG[MBT_IDX].
 */
union cavm_rfoex_rx_ind_jdt_state
{
    uint64_t u;
    struct cavm_rfoex_rx_ind_jdt_state_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_16_63        : 48;
        uint64_t nxt_jd                : 16; /**< [ 15:  0](R/W/H) Pointer to the next job descriptor in the circular buffer. */
#else /* Word 0 - Little Endian */
        uint64_t nxt_jd                : 16; /**< [ 15:  0](R/W/H) Pointer to the next job descriptor in the circular buffer. */
        uint64_t reserved_16_63        : 48;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_rfoex_rx_ind_jdt_state_s cn; */
};
typedef union cavm_rfoex_rx_ind_jdt_state cavm_rfoex_rx_ind_jdt_state_t;

static inline uint64_t CAVM_RFOEX_RX_IND_JDT_STATE(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_RFOEX_RX_IND_JDT_STATE(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_ODINMP) && (a<=6))
        return 0x861000001c78ll + 0x1000000ll * ((a) & 0x7);
    __cavm_csr_fatal("RFOEX_RX_IND_JDT_STATE", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_RFOEX_RX_IND_JDT_STATE(a) cavm_rfoex_rx_ind_jdt_state_t
#define bustype_CAVM_RFOEX_RX_IND_JDT_STATE(a) CSR_TYPE_NCB
#define basename_CAVM_RFOEX_RX_IND_JDT_STATE(a) "RFOEX_RX_IND_JDT_STATE"
#define busnum_CAVM_RFOEX_RX_IND_JDT_STATE(a) (a)
#define arguments_CAVM_RFOEX_RX_IND_JDT_STATE(a) (a),-1,-1,-1

/**
 * Register (NCB) rfoe#_rx_ind_mbt_addr
 *
 * RFOE RX Memory Buffer Table Address  Register
 * Memory buffer configuration table.
 *
 * This register indirectly accesses a table of 1040 entries.
 *
 * Reads and writes to this register access the table entry specified by
 * RFOE()_RX_INDIRECT_INDEX[INDEX].
 *
 * Incoming packets select an MBT entry based as follows:
 * * ECPRI_HDR_S[MSG_TYPE] == 0: index = RFOE()_RX_IND_ECPRI_FT_CFG[MBT_IDX].
 * * ECPRI_HDR_S[MSG_TYPE] == 1..15: index = 1023 + ECPRI_HDR_S[MSG_TYPE].
 * * ECPRI_HDR_S[MSG_TYPE] \> 15: index = 1039.
 * * Other: index = RFOE()_RX_IND_FT()_CFG[MBT_IDX].
 */
union cavm_rfoex_rx_ind_mbt_addr
{
    uint64_t u;
    struct cavm_rfoex_rx_ind_mbt_addr_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t gmid                  : 3;  /**< [ 63: 61](R/W) Guest machine ID used for this MBT entry. Sent on all RX DMA requests. */
        uint64_t reserved_53_60        : 8;
        uint64_t buf_addr              : 53; /**< [ 52:  0](R/W) Byte address of the start of the circular buffer for this MBT entry:

                                                                 Must be a multiple of 128 when RFOE()_RX_IND_MBT_CFG[TARGET_MEM] is set,
                                                                 else must be a multiple of 16. */
#else /* Word 0 - Little Endian */
        uint64_t buf_addr              : 53; /**< [ 52:  0](R/W) Byte address of the start of the circular buffer for this MBT entry:

                                                                 Must be a multiple of 128 when RFOE()_RX_IND_MBT_CFG[TARGET_MEM] is set,
                                                                 else must be a multiple of 16. */
        uint64_t reserved_53_60        : 8;
        uint64_t gmid                  : 3;  /**< [ 63: 61](R/W) Guest machine ID used for this MBT entry. Sent on all RX DMA requests. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_rfoex_rx_ind_mbt_addr_s cn; */
};
typedef union cavm_rfoex_rx_ind_mbt_addr cavm_rfoex_rx_ind_mbt_addr_t;

static inline uint64_t CAVM_RFOEX_RX_IND_MBT_ADDR(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_RFOEX_RX_IND_MBT_ADDR(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_ODINMP) && (a<=6))
        return 0x861000001c30ll + 0x1000000ll * ((a) & 0x7);
    __cavm_csr_fatal("RFOEX_RX_IND_MBT_ADDR", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_RFOEX_RX_IND_MBT_ADDR(a) cavm_rfoex_rx_ind_mbt_addr_t
#define bustype_CAVM_RFOEX_RX_IND_MBT_ADDR(a) CSR_TYPE_NCB
#define basename_CAVM_RFOEX_RX_IND_MBT_ADDR(a) "RFOEX_RX_IND_MBT_ADDR"
#define busnum_CAVM_RFOEX_RX_IND_MBT_ADDR(a) (a)
#define arguments_CAVM_RFOEX_RX_IND_MBT_ADDR(a) (a),-1,-1,-1

/**
 * Register (NCB) rfoe#_rx_ind_mbt_cfg
 *
 * RFOE RX Indirect Memory Buffer Table Configuration Register
 * Memory buffer configuration table.
 *
 * This register indirectly accesses a table of 1040 entries.
 *
 * Reads and writes to this register access the table entry specified by
 * RFOE()_RX_INDIRECT_INDEX[INDEX].
 *
 * Incoming packets select an MBT entry based as follows:
 * * ECPRI_HDR_S[MSG_TYPE] == 0: index = RFOE()_RX_IND_ECPRI_FT_CFG[MBT_IDX].
 * * ECPRI_HDR_S[MSG_TYPE] == 1..15: index = 1023 + ECPRI_HDR_S[MSG_TYPE].
 * * ECPRI_HDR_S[MSG_TYPE] \> 15: index = 1039.
 * * Other: index = RFOE()_RX_IND_FT()_CFG[MBT_IDX].
 */
union cavm_rfoex_rx_ind_mbt_cfg
{
    uint64_t u;
    struct cavm_rfoex_rx_ind_mbt_cfg_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t target_mem            : 1;  /**< [ 63: 63](R/W) Specifies the target memory for the address.
                                                                 0 = SMEM.
                                                                 1 = LLC/DRAM. */
        uint64_t reserved_62           : 1;
        uint64_t cmd_type              : 2;  /**< [ 61: 60](R/W) Command type for LLC/DRAM writes, enumerated by MHBW_PNB_WR_CMD_E.

                                                                 Note:
                                                                 * Writes to BPHY SMEM ignore this field.
                                                                 * Unaligned or partial cacheline writes use MHBW_PNB_WR_CMD_E::STP. */
        uint64_t full_drop_en          : 1;  /**< [ 59: 59](R/W) Controls drop-on-full mode per MBT entry/ packet ring.
                                                                 0 = No drop on full.
                                                                 1 = Drop received packets when ring is full. */
        uint64_t dswap                 : 3;  /**< [ 58: 56](R/W) The byte swap mode for DMA to LLC/DRAM. Enumerated in MHBW_PNB_DSWAP_E.
                                                                 DMA to BPHY SMEM ignores this field. */
        uint64_t reserved_48_55        : 8;
        uint64_t nxt_buf               : 16; /**< [ 47: 32](R/W/H) Buffer number that the next packet will use to write DMA.
                                                                 Address of this buffer is [NXT_BUF]*[BUF_SIZE] + RFOE(0..6)_RX_IND_MBT_ADDR[BUF_ADDR]
                                                                 Reset by BIST clear or writing 0. */
        uint64_t buf_size              : 16; /**< [ 31: 16](R/W) Size of each buffer, in units of 128 bits. Must be \<= 0x3FFF and \>= 0x0010.

                                                                 When [TARGET_MEM] is set, must be a multiple of 8 so that the buffer size
                                                                 is a cache line multiple. */
        uint64_t num_buf               : 16; /**< [ 15:  0](R/W) Number of buffers in circular buffer. Must be greater than 0.
                                                                 Additionally, when RFOE()_RX_IND_MBT_CFG[FULL_DROP_EN]=1, must be at least 2. */
#else /* Word 0 - Little Endian */
        uint64_t num_buf               : 16; /**< [ 15:  0](R/W) Number of buffers in circular buffer. Must be greater than 0.
                                                                 Additionally, when RFOE()_RX_IND_MBT_CFG[FULL_DROP_EN]=1, must be at least 2. */
        uint64_t buf_size              : 16; /**< [ 31: 16](R/W) Size of each buffer, in units of 128 bits. Must be \<= 0x3FFF and \>= 0x0010.

                                                                 When [TARGET_MEM] is set, must be a multiple of 8 so that the buffer size
                                                                 is a cache line multiple. */
        uint64_t nxt_buf               : 16; /**< [ 47: 32](R/W/H) Buffer number that the next packet will use to write DMA.
                                                                 Address of this buffer is [NXT_BUF]*[BUF_SIZE] + RFOE(0..6)_RX_IND_MBT_ADDR[BUF_ADDR]
                                                                 Reset by BIST clear or writing 0. */
        uint64_t reserved_48_55        : 8;
        uint64_t dswap                 : 3;  /**< [ 58: 56](R/W) The byte swap mode for DMA to LLC/DRAM. Enumerated in MHBW_PNB_DSWAP_E.
                                                                 DMA to BPHY SMEM ignores this field. */
        uint64_t full_drop_en          : 1;  /**< [ 59: 59](R/W) Controls drop-on-full mode per MBT entry/ packet ring.
                                                                 0 = No drop on full.
                                                                 1 = Drop received packets when ring is full. */
        uint64_t cmd_type              : 2;  /**< [ 61: 60](R/W) Command type for LLC/DRAM writes, enumerated by MHBW_PNB_WR_CMD_E.

                                                                 Note:
                                                                 * Writes to BPHY SMEM ignore this field.
                                                                 * Unaligned or partial cacheline writes use MHBW_PNB_WR_CMD_E::STP. */
        uint64_t reserved_62           : 1;
        uint64_t target_mem            : 1;  /**< [ 63: 63](R/W) Specifies the target memory for the address.
                                                                 0 = SMEM.
                                                                 1 = LLC/DRAM. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_rfoex_rx_ind_mbt_cfg_s cn; */
};
typedef union cavm_rfoex_rx_ind_mbt_cfg cavm_rfoex_rx_ind_mbt_cfg_t;

static inline uint64_t CAVM_RFOEX_RX_IND_MBT_CFG(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_RFOEX_RX_IND_MBT_CFG(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_ODINMP) && (a<=6))
        return 0x861000001c20ll + 0x1000000ll * ((a) & 0x7);
    __cavm_csr_fatal("RFOEX_RX_IND_MBT_CFG", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_RFOEX_RX_IND_MBT_CFG(a) cavm_rfoex_rx_ind_mbt_cfg_t
#define bustype_CAVM_RFOEX_RX_IND_MBT_CFG(a) CSR_TYPE_NCB
#define basename_CAVM_RFOEX_RX_IND_MBT_CFG(a) "RFOEX_RX_IND_MBT_CFG"
#define busnum_CAVM_RFOEX_RX_IND_MBT_CFG(a) (a)
#define arguments_CAVM_RFOEX_RX_IND_MBT_CFG(a) (a),-1,-1,-1

/**
 * Register (NCB) rfoe#_rx_ind_mbt_cfg2
 *
 * RFOE RX Indirect Memory Buffer Table Configuration Register 2
 * Memory buffer configuration table additional fields.
 *
 * This register indirectly accesses a table of 1040 entries.
 *
 * Reads and writes to this register access the table entry specified by
 * RFOE()_RX_INDIRECT_INDEX[INDEX].
 *
 * Incoming packets select an MBT entry based as follows:
 * * ECPRI_HDR_S[MSG_TYPE] == 0: index = RFOE()_RX_IND_ECPRI_FT_CFG[MBT_IDX].
 * * ECPRI_HDR_S[MSG_TYPE] == 1..15: index = 1023 + ECPRI_HDR_S[MSG_TYPE].
 * * ECPRI_HDR_S[MSG_TYPE] \> 15: index = 1039.
 * * Other: index = RFOE()_RX_IND_FT()_CFG[MBT_IDX].
 */
union cavm_rfoex_rx_ind_mbt_cfg2
{
    uint64_t u;
    struct cavm_rfoex_rx_ind_mbt_cfg2_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_16_63        : 48;
        uint64_t sw_buf                : 16; /**< [ 15:  0](R/W/H) Pointer to next buffer to be freed by software. */
#else /* Word 0 - Little Endian */
        uint64_t sw_buf                : 16; /**< [ 15:  0](R/W/H) Pointer to next buffer to be freed by software. */
        uint64_t reserved_16_63        : 48;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_rfoex_rx_ind_mbt_cfg2_s cn; */
};
typedef union cavm_rfoex_rx_ind_mbt_cfg2 cavm_rfoex_rx_ind_mbt_cfg2_t;

static inline uint64_t CAVM_RFOEX_RX_IND_MBT_CFG2(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_RFOEX_RX_IND_MBT_CFG2(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_ODINMP) && (a<=6))
        return 0x861000001c28ll + 0x1000000ll * ((a) & 0x7);
    __cavm_csr_fatal("RFOEX_RX_IND_MBT_CFG2", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_RFOEX_RX_IND_MBT_CFG2(a) cavm_rfoex_rx_ind_mbt_cfg2_t
#define bustype_CAVM_RFOEX_RX_IND_MBT_CFG2(a) CSR_TYPE_NCB
#define basename_CAVM_RFOEX_RX_IND_MBT_CFG2(a) "RFOEX_RX_IND_MBT_CFG2"
#define busnum_CAVM_RFOEX_RX_IND_MBT_CFG2(a) (a)
#define arguments_CAVM_RFOEX_RX_IND_MBT_CFG2(a) (a),-1,-1,-1

/**
 * Register (NCB) rfoe#_rx_ind_mbt_seg_state
 *
 * RFOE RX Indirect Memory Buffer Table Segmentation Register
 * Memory buffer table segmentation configuration and state.
 *
 * This register indirectly accesses a table of 1040 entries.
 *
 * Reads and writes to this register access the table entry specified by
 * RFOE()_RX_INDIRECT_INDEX[INDEX].
 *
 * Incoming packets select an MBT entry based as follows:
 * * ECPRI_HDR_S[MSG_TYPE] == 0: index = RFOE()_RX_IND_ECPRI_FT_CFG[MBT_IDX].
 * * ECPRI_HDR_S[MSG_TYPE] == 1..15: index = 1023 + ECPRI_HDR_S[MSG_TYPE].
 * * ECPRI_HDR_S[MSG_TYPE] \> 15: index = 1039.
 * * Other: index = RFOE()_RX_IND_FT()_CFG[MBT_IDX].
 */
union cavm_rfoex_rx_ind_mbt_seg_state
{
    uint64_t u;
    struct cavm_rfoex_rx_ind_mbt_seg_state_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_22_63        : 42;
        uint64_t orderinfo_status      : 1;  /**< [ 21: 21](R/W/H) Result of most recent orderInfo comparison.
                                                                 0 = Fail. Bad SeqNum or timestamp.
                                                                 1 = Pass. Good SeqNum or timestamp. */
        uint64_t dma_error             : 1;  /**< [ 20: 20](R/W/H) Error occurred during header processing or DMA. Possible errors
                                                                 include:
                                                                 * Late aperture failure.
                                                                 * Attempted to write past the end of the buffer (i.e., packet(s) larger
                                                                 than buffer size).
                                                                 * RoE length field didn't match incoming packet size. */
        uint64_t packet_status         : 4;  /**< [ 19: 16](R/W/H) Packet error status, enumerated by RFOE_RX_PKT_ERR_E. */
        uint64_t offset                : 16; /**< [ 15:  0](R/W/H) Offset within buffer where next segment will be stored, in units of
                                                                 128-bits. */
#else /* Word 0 - Little Endian */
        uint64_t offset                : 16; /**< [ 15:  0](R/W/H) Offset within buffer where next segment will be stored, in units of
                                                                 128-bits. */
        uint64_t packet_status         : 4;  /**< [ 19: 16](R/W/H) Packet error status, enumerated by RFOE_RX_PKT_ERR_E. */
        uint64_t dma_error             : 1;  /**< [ 20: 20](R/W/H) Error occurred during header processing or DMA. Possible errors
                                                                 include:
                                                                 * Late aperture failure.
                                                                 * Attempted to write past the end of the buffer (i.e., packet(s) larger
                                                                 than buffer size).
                                                                 * RoE length field didn't match incoming packet size. */
        uint64_t orderinfo_status      : 1;  /**< [ 21: 21](R/W/H) Result of most recent orderInfo comparison.
                                                                 0 = Fail. Bad SeqNum or timestamp.
                                                                 1 = Pass. Good SeqNum or timestamp. */
        uint64_t reserved_22_63        : 42;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_rfoex_rx_ind_mbt_seg_state_s cn; */
};
typedef union cavm_rfoex_rx_ind_mbt_seg_state cavm_rfoex_rx_ind_mbt_seg_state_t;

static inline uint64_t CAVM_RFOEX_RX_IND_MBT_SEG_STATE(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_RFOEX_RX_IND_MBT_SEG_STATE(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_ODINMP) && (a<=6))
        return 0x861000001c38ll + 0x1000000ll * ((a) & 0x7);
    __cavm_csr_fatal("RFOEX_RX_IND_MBT_SEG_STATE", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_RFOEX_RX_IND_MBT_SEG_STATE(a) cavm_rfoex_rx_ind_mbt_seg_state_t
#define bustype_CAVM_RFOEX_RX_IND_MBT_SEG_STATE(a) CSR_TYPE_NCB
#define basename_CAVM_RFOEX_RX_IND_MBT_SEG_STATE(a) "RFOEX_RX_IND_MBT_SEG_STATE"
#define busnum_CAVM_RFOEX_RX_IND_MBT_SEG_STATE(a) (a)
#define arguments_CAVM_RFOEX_RX_IND_MBT_SEG_STATE(a) (a),-1,-1,-1

/**
 * Register (NCB) rfoe#_rx_ind_sw_tbl_act_cfg1
 *
 * RFOE RX Indirect Switch Table Action Configuration Register1
 * Switch configuration table action configuration.
 *
 * This register indirectly accesses a table of 64 entries.
 *
 * Reads and writes to this register access the table entry specified by
 * RFOE()_RX_INDIRECT_INDEX[INDEX].
 *
 * Incoming packets select a Switch Table entry based on valid masked address matching.
 */
union cavm_rfoex_rx_ind_sw_tbl_act_cfg1
{
    uint64_t u;
    struct cavm_rfoex_rx_ind_sw_tbl_act_cfg1_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_22_63        : 42;
        uint64_t term_flow_id_calc     : 2;  /**< [ 21: 20](R/W) Specifies the Calculation method for flow_id. Used only
                                                                 when ACTION=RFOE_RX_SW_TBL_ACTION_E::TERMINATE. */
        uint64_t reserved_18_19        : 2;
        uint64_t dest_lmac_id          : 2;  /**< [ 17: 16](R/W) Destination LMAC_ID.
                                                                 Used only when ACTION=RFOE_RX_SW_TBL_ACTION_E::FORWARD. */
        uint64_t reserved_11_15        : 5;
        uint64_t rfoe_flow_id          : 7;  /**< [ 10:  4](R/W) Forwarding flow_id used to lookup MBT_IDX and JDT_IDX.
                                                                 Used when ACTION=RFOE_RX_SW_TBL_ACTION_E::FORWARD or
                                                                 when ACTION=RFOE_RX_SW_TBL_ACTION_E::TERMINATE and
                                                                 TERM_FLOW_ID_CALC=RFOE_RX_SW_TBL_TERM_FLOW_ID_CALC_E::PC_ID_REMAP_SUBTABLE or
                                                                 TERM_FLOW_ID_CALC=RFOE_RX_SW_TBL_TERM_FLOW_ID_CALC_E::PC_ID_HASH_SUBTABLE. */
        uint64_t reserved_2_3          : 2;
        uint64_t action                : 2;  /**< [  1:  0](R/W) Specifies Action on Match. */
#else /* Word 0 - Little Endian */
        uint64_t action                : 2;  /**< [  1:  0](R/W) Specifies Action on Match. */
        uint64_t reserved_2_3          : 2;
        uint64_t rfoe_flow_id          : 7;  /**< [ 10:  4](R/W) Forwarding flow_id used to lookup MBT_IDX and JDT_IDX.
                                                                 Used when ACTION=RFOE_RX_SW_TBL_ACTION_E::FORWARD or
                                                                 when ACTION=RFOE_RX_SW_TBL_ACTION_E::TERMINATE and
                                                                 TERM_FLOW_ID_CALC=RFOE_RX_SW_TBL_TERM_FLOW_ID_CALC_E::PC_ID_REMAP_SUBTABLE or
                                                                 TERM_FLOW_ID_CALC=RFOE_RX_SW_TBL_TERM_FLOW_ID_CALC_E::PC_ID_HASH_SUBTABLE. */
        uint64_t reserved_11_15        : 5;
        uint64_t dest_lmac_id          : 2;  /**< [ 17: 16](R/W) Destination LMAC_ID.
                                                                 Used only when ACTION=RFOE_RX_SW_TBL_ACTION_E::FORWARD. */
        uint64_t reserved_18_19        : 2;
        uint64_t term_flow_id_calc     : 2;  /**< [ 21: 20](R/W) Specifies the Calculation method for flow_id. Used only
                                                                 when ACTION=RFOE_RX_SW_TBL_ACTION_E::TERMINATE. */
        uint64_t reserved_22_63        : 42;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_rfoex_rx_ind_sw_tbl_act_cfg1_s cn; */
};
typedef union cavm_rfoex_rx_ind_sw_tbl_act_cfg1 cavm_rfoex_rx_ind_sw_tbl_act_cfg1_t;

static inline uint64_t CAVM_RFOEX_RX_IND_SW_TBL_ACT_CFG1(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_RFOEX_RX_IND_SW_TBL_ACT_CFG1(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_ODINMP) && (a<=6))
        return 0x861000013110ll + 0x1000000ll * ((a) & 0x7);
    __cavm_csr_fatal("RFOEX_RX_IND_SW_TBL_ACT_CFG1", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_RFOEX_RX_IND_SW_TBL_ACT_CFG1(a) cavm_rfoex_rx_ind_sw_tbl_act_cfg1_t
#define bustype_CAVM_RFOEX_RX_IND_SW_TBL_ACT_CFG1(a) CSR_TYPE_NCB
#define basename_CAVM_RFOEX_RX_IND_SW_TBL_ACT_CFG1(a) "RFOEX_RX_IND_SW_TBL_ACT_CFG1"
#define busnum_CAVM_RFOEX_RX_IND_SW_TBL_ACT_CFG1(a) (a)
#define arguments_CAVM_RFOEX_RX_IND_SW_TBL_ACT_CFG1(a) (a),-1,-1,-1

/**
 * Register (NCB) rfoe#_rx_ind_sw_tbl_act_cfg2
 *
 * RFOE RX Indirect Switch Table Action Configuration 2 Register
 * This register indirectly accesses a table of 64 entries.
 *
 * Reads and writes to this register access the table entry specified by
 * RFOE()_RX_INDIRECT_INDEX[INDEX].
 *
 * Incoming packets select a Switch Table entry based on valid masked address matching.
 */
union cavm_rfoex_rx_ind_sw_tbl_act_cfg2
{
    uint64_t u;
    struct cavm_rfoex_rx_ind_sw_tbl_act_cfg2_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_62_63        : 2;
        uint64_t subtable_offset       : 10; /**< [ 61: 52](R/W) EDEC Subtable offset.
                                                                 Used when ACTION=RFOE_RX_SW_TBL_ACTION_E::TERMINATE and
                                                                 TERM_FLOW_ID_CALC=RFOE_RX_SW_TBL_TERM_FLOW_ID_CALC_E::PC_ID_REMAP_SUBTABLE or
                                                                 TERM_FLOW_ID_CALC=RFOE_RX_SW_TBL_TERM_FLOW_ID_CALC_E::PC_ID_HASH_SUBTABLE. */
        uint64_t reserved_50_51        : 2;
        uint64_t pc_id_key_select      : 50; /**< [ 49:  0](R/W) Selectors for PC_ID_KEY[9:0].
                                                                 Used when ACTION=RFOE_RX_SW_TBL_ACTION_E::TERMINATE and
                                                                 TERM_FLOW_ID_CALC=RFOE_RX_SW_TBL_TERM_FLOW_ID_CALC_E::PC_ID_REMAP_SUBTABLE or
                                                                 TERM_FLOW_ID_CALC=RFOE_RX_SW_TBL_TERM_FLOW_ID_CALC_E::PC_ID_HASH_SUBTABLE.
                                                                 Only 9:0 used for PC_ID_HASH_SUBTABLE. */
#else /* Word 0 - Little Endian */
        uint64_t pc_id_key_select      : 50; /**< [ 49:  0](R/W) Selectors for PC_ID_KEY[9:0].
                                                                 Used when ACTION=RFOE_RX_SW_TBL_ACTION_E::TERMINATE and
                                                                 TERM_FLOW_ID_CALC=RFOE_RX_SW_TBL_TERM_FLOW_ID_CALC_E::PC_ID_REMAP_SUBTABLE or
                                                                 TERM_FLOW_ID_CALC=RFOE_RX_SW_TBL_TERM_FLOW_ID_CALC_E::PC_ID_HASH_SUBTABLE.
                                                                 Only 9:0 used for PC_ID_HASH_SUBTABLE. */
        uint64_t reserved_50_51        : 2;
        uint64_t subtable_offset       : 10; /**< [ 61: 52](R/W) EDEC Subtable offset.
                                                                 Used when ACTION=RFOE_RX_SW_TBL_ACTION_E::TERMINATE and
                                                                 TERM_FLOW_ID_CALC=RFOE_RX_SW_TBL_TERM_FLOW_ID_CALC_E::PC_ID_REMAP_SUBTABLE or
                                                                 TERM_FLOW_ID_CALC=RFOE_RX_SW_TBL_TERM_FLOW_ID_CALC_E::PC_ID_HASH_SUBTABLE. */
        uint64_t reserved_62_63        : 2;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_rfoex_rx_ind_sw_tbl_act_cfg2_s cn; */
};
typedef union cavm_rfoex_rx_ind_sw_tbl_act_cfg2 cavm_rfoex_rx_ind_sw_tbl_act_cfg2_t;

static inline uint64_t CAVM_RFOEX_RX_IND_SW_TBL_ACT_CFG2(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_RFOEX_RX_IND_SW_TBL_ACT_CFG2(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_ODINMP) && (a<=6))
        return 0x861000013118ll + 0x1000000ll * ((a) & 0x7);
    __cavm_csr_fatal("RFOEX_RX_IND_SW_TBL_ACT_CFG2", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_RFOEX_RX_IND_SW_TBL_ACT_CFG2(a) cavm_rfoex_rx_ind_sw_tbl_act_cfg2_t
#define bustype_CAVM_RFOEX_RX_IND_SW_TBL_ACT_CFG2(a) CSR_TYPE_NCB
#define basename_CAVM_RFOEX_RX_IND_SW_TBL_ACT_CFG2(a) "RFOEX_RX_IND_SW_TBL_ACT_CFG2"
#define busnum_CAVM_RFOEX_RX_IND_SW_TBL_ACT_CFG2(a) (a)
#define arguments_CAVM_RFOEX_RX_IND_SW_TBL_ACT_CFG2(a) (a),-1,-1,-1

/**
 * Register (NCB) rfoe#_rx_ind_sw_tbl_ft_cfg
 *
 * RFOE RX Indirect Flow Table Configuration Register
 * Flow table configuration for Switched packets.
 *
 * This register indirectly accesses a flow configuration table with 128
 * entries.
 *
 * Reads and writes to this register access the table entry specified by
 * RFOE()_RX_INDIRECT_INDEX[INDEX].
 *
 * Incoming packets with switch table lookup index the flow table using the
 * RFOE_FLOW_ID field configured
 * in RFOE()_RX_IND_SW_TBL_ACT_CFG1().
 */
union cavm_rfoex_rx_ind_sw_tbl_ft_cfg
{
    uint64_t u;
    struct cavm_rfoex_rx_ind_sw_tbl_ft_cfg_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_29_63        : 35;
        uint64_t ab_cfg_w_enable       : 1;  /**< [ 28: 28](R/W) Configures whether AB_CFG_W3 will be written by RX to JD. If set, will write
                                                                 the AB_CFG_W3 consisting of pkt_len, destination lmac_id and tx_err. */
        uint64_t reserved_25_27        : 3;
        uint64_t enable                : 1;  /**< [ 24: 24](R/W) Enable this flow. Drop packets when clear. */
        uint64_t reserved_23           : 1;
        uint64_t mbt_idx               : 11; /**< [ 22: 12](R/W) MBT index. Pointer to MBT entry for DMA write buffer configurations. */
        uint64_t reserved_11           : 1;
        uint64_t flow_idx              : 11; /**< [ 10:  0](R/W) Flow index. Pointer to JDT entry for job descriptor and flow configuration. */
#else /* Word 0 - Little Endian */
        uint64_t flow_idx              : 11; /**< [ 10:  0](R/W) Flow index. Pointer to JDT entry for job descriptor and flow configuration. */
        uint64_t reserved_11           : 1;
        uint64_t mbt_idx               : 11; /**< [ 22: 12](R/W) MBT index. Pointer to MBT entry for DMA write buffer configurations. */
        uint64_t reserved_23           : 1;
        uint64_t enable                : 1;  /**< [ 24: 24](R/W) Enable this flow. Drop packets when clear. */
        uint64_t reserved_25_27        : 3;
        uint64_t ab_cfg_w_enable       : 1;  /**< [ 28: 28](R/W) Configures whether AB_CFG_W3 will be written by RX to JD. If set, will write
                                                                 the AB_CFG_W3 consisting of pkt_len, destination lmac_id and tx_err. */
        uint64_t reserved_29_63        : 35;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_rfoex_rx_ind_sw_tbl_ft_cfg_s cn; */
};
typedef union cavm_rfoex_rx_ind_sw_tbl_ft_cfg cavm_rfoex_rx_ind_sw_tbl_ft_cfg_t;

static inline uint64_t CAVM_RFOEX_RX_IND_SW_TBL_FT_CFG(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_RFOEX_RX_IND_SW_TBL_FT_CFG(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_ODINMP) && (a<=6))
        return 0x861000013240ll + 0x1000000ll * ((a) & 0x7);
    __cavm_csr_fatal("RFOEX_RX_IND_SW_TBL_FT_CFG", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_RFOEX_RX_IND_SW_TBL_FT_CFG(a) cavm_rfoex_rx_ind_sw_tbl_ft_cfg_t
#define bustype_CAVM_RFOEX_RX_IND_SW_TBL_FT_CFG(a) CSR_TYPE_NCB
#define basename_CAVM_RFOEX_RX_IND_SW_TBL_FT_CFG(a) "RFOEX_RX_IND_SW_TBL_FT_CFG"
#define busnum_CAVM_RFOEX_RX_IND_SW_TBL_FT_CFG(a) (a)
#define arguments_CAVM_RFOEX_RX_IND_SW_TBL_FT_CFG(a) (a),-1,-1,-1

/**
 * Register (NCB) rfoe#_rx_ind_sw_tbl_key1
 *
 * RFOE RX Indirect Switch Table Search Key Register1
 * Switch configuration table Search Key MAC address.
 *
 * This register indirectly accesses a table of 64 entries.
 *
 * Reads and writes to this register access the table entry specified by
 * RFOE()_RX_INDIRECT_INDEX[INDEX].
 *
 * Incoming packets select a Switch Table entry based on valid masked address matching.
 */
union cavm_rfoex_rx_ind_sw_tbl_key1
{
    uint64_t u;
    struct cavm_rfoex_rx_ind_sw_tbl_key1_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_49_63        : 15;
        uint64_t sa                    : 1;  /**< [ 48: 48](R/W) Source Address.
                                                                 SA=0 Destination Address.
                                                                 SA=1 Source Address. */
        uint64_t mac_addr              : 48; /**< [ 47:  0](R/W) MAC Address. Can be source or destination, depending on SA field. */
#else /* Word 0 - Little Endian */
        uint64_t mac_addr              : 48; /**< [ 47:  0](R/W) MAC Address. Can be source or destination, depending on SA field. */
        uint64_t sa                    : 1;  /**< [ 48: 48](R/W) Source Address.
                                                                 SA=0 Destination Address.
                                                                 SA=1 Source Address. */
        uint64_t reserved_49_63        : 15;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_rfoex_rx_ind_sw_tbl_key1_s cn; */
};
typedef union cavm_rfoex_rx_ind_sw_tbl_key1 cavm_rfoex_rx_ind_sw_tbl_key1_t;

static inline uint64_t CAVM_RFOEX_RX_IND_SW_TBL_KEY1(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_RFOEX_RX_IND_SW_TBL_KEY1(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_ODINMP) && (a<=6))
        return 0x861000013100ll + 0x1000000ll * ((a) & 0x7);
    __cavm_csr_fatal("RFOEX_RX_IND_SW_TBL_KEY1", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_RFOEX_RX_IND_SW_TBL_KEY1(a) cavm_rfoex_rx_ind_sw_tbl_key1_t
#define bustype_CAVM_RFOEX_RX_IND_SW_TBL_KEY1(a) CSR_TYPE_NCB
#define basename_CAVM_RFOEX_RX_IND_SW_TBL_KEY1(a) "RFOEX_RX_IND_SW_TBL_KEY1"
#define busnum_CAVM_RFOEX_RX_IND_SW_TBL_KEY1(a) (a)
#define arguments_CAVM_RFOEX_RX_IND_SW_TBL_KEY1(a) (a),-1,-1,-1

/**
 * Register (NCB) rfoe#_rx_ind_sw_tbl_key2
 *
 * RFOE RX Indirect Switch Table Search Key 2 Register
 * This register indirectly accesses a table of 64 entries.
 *
 * Reads and writes to this register access the table entry specified by
 * RFOE()_RX_INDIRECT_INDEX[INDEX].
 *
 * Incoming packets select a Switch Table entry based on valid masked address matching.
 */
union cavm_rfoex_rx_ind_sw_tbl_key2
{
    uint64_t u;
    struct cavm_rfoex_rx_ind_sw_tbl_key2_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_41_63        : 23;
        uint64_t ecpri_mtz             : 1;  /**< [ 40: 40](R/W) Table entry for eCPRI Message Type 0 packets.
                                                                 ECPRI_MTZ=0 Disable match for eCPRI MTZ (Message Type 0) packets. Set
                                                                 RFOE()_RX_IND_SW_TBL_MSK.PC_ID_COMP_EN=0 to avoid unpredictable behavior when
                                                                 using for non-eCPRI messages or eCPRI messages with no PC_ID or no RTC_ID.
                                                                 ECPRI_MTZ=1 Enable match for eCPRI MTZ (Message Type 0) packets. PC_ID masked
                                                                 with RFOE()_RX_IND_SW_TBL_MSK.PC_ID_COMP_EN will be used for matching. */
        uint64_t pc_id                 : 16; /**< [ 39: 24](R/W) PC_ID (only for ECPRI). */
        uint64_t reserved_12_23        : 12;
        uint64_t vlan_id               : 12; /**< [ 11:  0](R/W) Inner VLAN_ID. */
#else /* Word 0 - Little Endian */
        uint64_t vlan_id               : 12; /**< [ 11:  0](R/W) Inner VLAN_ID. */
        uint64_t reserved_12_23        : 12;
        uint64_t pc_id                 : 16; /**< [ 39: 24](R/W) PC_ID (only for ECPRI). */
        uint64_t ecpri_mtz             : 1;  /**< [ 40: 40](R/W) Table entry for eCPRI Message Type 0 packets.
                                                                 ECPRI_MTZ=0 Disable match for eCPRI MTZ (Message Type 0) packets. Set
                                                                 RFOE()_RX_IND_SW_TBL_MSK.PC_ID_COMP_EN=0 to avoid unpredictable behavior when
                                                                 using for non-eCPRI messages or eCPRI messages with no PC_ID or no RTC_ID.
                                                                 ECPRI_MTZ=1 Enable match for eCPRI MTZ (Message Type 0) packets. PC_ID masked
                                                                 with RFOE()_RX_IND_SW_TBL_MSK.PC_ID_COMP_EN will be used for matching. */
        uint64_t reserved_41_63        : 23;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_rfoex_rx_ind_sw_tbl_key2_s cn; */
};
typedef union cavm_rfoex_rx_ind_sw_tbl_key2 cavm_rfoex_rx_ind_sw_tbl_key2_t;

static inline uint64_t CAVM_RFOEX_RX_IND_SW_TBL_KEY2(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_RFOEX_RX_IND_SW_TBL_KEY2(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_ODINMP) && (a<=6))
        return 0x861000013108ll + 0x1000000ll * ((a) & 0x7);
    __cavm_csr_fatal("RFOEX_RX_IND_SW_TBL_KEY2", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_RFOEX_RX_IND_SW_TBL_KEY2(a) cavm_rfoex_rx_ind_sw_tbl_key2_t
#define bustype_CAVM_RFOEX_RX_IND_SW_TBL_KEY2(a) CSR_TYPE_NCB
#define basename_CAVM_RFOEX_RX_IND_SW_TBL_KEY2(a) "RFOEX_RX_IND_SW_TBL_KEY2"
#define busnum_CAVM_RFOEX_RX_IND_SW_TBL_KEY2(a) (a)
#define arguments_CAVM_RFOEX_RX_IND_SW_TBL_KEY2(a) (a),-1,-1,-1

/**
 * Register (NCB) rfoe#_rx_ind_sw_tbl_msk
 *
 * RFOE RX Indirect Switch Table Mask Register
 * Switch configuration table action configuration.
 *
 * This register indirectly accesses a table of 64 entries.
 *
 * Reads and writes to this register access the table entry specified by
 * RFOE()_RX_INDIRECT_INDEX[INDEX].
 *
 * Incoming packets select a Switch Table entry based on valid masked address matching.
 */
union cavm_rfoex_rx_ind_sw_tbl_msk
{
    uint64_t u;
    struct cavm_rfoex_rx_ind_sw_tbl_msk_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t mac_addr_comp_en      : 1;  /**< [ 63: 63](R/W) Compare enable for MAC Address matching.
                                                                 MAC_ADDR_COMP_EN=0 Ignore RFOE()_RX_IND_SW_TBL_KEY1.MAC_ADDR at same index for matching.
                                                                 MAC_ADDR_COMP_EN=1 Enable Match of RFOE()_RX_IND_SW_TBL_KEY1.MAC_ADDR at same index for matching. */
        uint64_t reserved_33_62        : 30;
        uint64_t ecpri_mtz_comp_en     : 1;  /**< [ 32: 32](R/W) Compare enable for ECPRI Message Type 0 matching.
                                                                 ECPRI_MTZ_COMP_EN=0 Disable RFOE()_RX_IND_SW_TBL_KEY2.ECPRI_MTZ at same index.
                                                                 eCPRI MTZ packets will not be matched at this index.
                                                                 ECPRI_MTZ_COMP_EN=1, RFOE()_RX_IND_SW_TBL_KEY2.ECPRI_MTZ=0 at same index. eCPRI
                                                                 MTZ packets will not be matched at this index.
                                                                 ECPRI_MTZ_COMP_EN=1, RFOE()_RX_IND_SW_TBL_KEY2.ECPRI_MTZ=1 at same index. eCPRI
                                                                 MTZ packets will be matched at this index. */
        uint64_t pc_id_comp_en         : 16; /**< [ 31: 16](R/W) Bit-wise enable for PC_ID matching.
                                                                 Applicable only for ECPRI packets.
                                                                 Unpredictable behavior if PC_ID_COMP_EN=1 and (ECPRI_COMP_EN=0 or
                                                                 RFOE()_RX_IND_SW_TBL_KEY2.ECPRI=0). */
        uint64_t reserved_1_15         : 15;
        uint64_t vlan_comp_en          : 1;  /**< [  0:  0](R/W) Compare enable for VLAN matching. VLAN_COMP_EN=0 Ignore
                                                                 RFOE()_RX_IND_SW_TBL_KEY2.VLAN at same index for matching. VLAN_COMP_EN=1 Enable
                                                                 Match of RFOE()_RX_IND_SW_TBL_KEY2.VLAN at same index for matching. */
#else /* Word 0 - Little Endian */
        uint64_t vlan_comp_en          : 1;  /**< [  0:  0](R/W) Compare enable for VLAN matching. VLAN_COMP_EN=0 Ignore
                                                                 RFOE()_RX_IND_SW_TBL_KEY2.VLAN at same index for matching. VLAN_COMP_EN=1 Enable
                                                                 Match of RFOE()_RX_IND_SW_TBL_KEY2.VLAN at same index for matching. */
        uint64_t reserved_1_15         : 15;
        uint64_t pc_id_comp_en         : 16; /**< [ 31: 16](R/W) Bit-wise enable for PC_ID matching.
                                                                 Applicable only for ECPRI packets.
                                                                 Unpredictable behavior if PC_ID_COMP_EN=1 and (ECPRI_COMP_EN=0 or
                                                                 RFOE()_RX_IND_SW_TBL_KEY2.ECPRI=0). */
        uint64_t ecpri_mtz_comp_en     : 1;  /**< [ 32: 32](R/W) Compare enable for ECPRI Message Type 0 matching.
                                                                 ECPRI_MTZ_COMP_EN=0 Disable RFOE()_RX_IND_SW_TBL_KEY2.ECPRI_MTZ at same index.
                                                                 eCPRI MTZ packets will not be matched at this index.
                                                                 ECPRI_MTZ_COMP_EN=1, RFOE()_RX_IND_SW_TBL_KEY2.ECPRI_MTZ=0 at same index. eCPRI
                                                                 MTZ packets will not be matched at this index.
                                                                 ECPRI_MTZ_COMP_EN=1, RFOE()_RX_IND_SW_TBL_KEY2.ECPRI_MTZ=1 at same index. eCPRI
                                                                 MTZ packets will be matched at this index. */
        uint64_t reserved_33_62        : 30;
        uint64_t mac_addr_comp_en      : 1;  /**< [ 63: 63](R/W) Compare enable for MAC Address matching.
                                                                 MAC_ADDR_COMP_EN=0 Ignore RFOE()_RX_IND_SW_TBL_KEY1.MAC_ADDR at same index for matching.
                                                                 MAC_ADDR_COMP_EN=1 Enable Match of RFOE()_RX_IND_SW_TBL_KEY1.MAC_ADDR at same index for matching. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_rfoex_rx_ind_sw_tbl_msk_s cn; */
};
typedef union cavm_rfoex_rx_ind_sw_tbl_msk cavm_rfoex_rx_ind_sw_tbl_msk_t;

static inline uint64_t CAVM_RFOEX_RX_IND_SW_TBL_MSK(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_RFOEX_RX_IND_SW_TBL_MSK(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_ODINMP) && (a<=6))
        return 0x861000013290ll + 0x1000000ll * ((a) & 0x7);
    __cavm_csr_fatal("RFOEX_RX_IND_SW_TBL_MSK", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_RFOEX_RX_IND_SW_TBL_MSK(a) cavm_rfoex_rx_ind_sw_tbl_msk_t
#define bustype_CAVM_RFOEX_RX_IND_SW_TBL_MSK(a) CSR_TYPE_NCB
#define basename_CAVM_RFOEX_RX_IND_SW_TBL_MSK(a) "RFOEX_RX_IND_SW_TBL_MSK"
#define busnum_CAVM_RFOEX_RX_IND_SW_TBL_MSK(a) (a)
#define arguments_CAVM_RFOEX_RX_IND_SW_TBL_MSK(a) (a),-1,-1,-1

/**
 * Register (NCB) rfoe#_rx_ind_vlan#_fwd
 *
 * RFOE RX Indirect VLAN Forward Configuration Register
 * VLAN Forwarding Configuration for TPID VID configured by RFOE()_RX_VLAN()_CFG
 * ({b} = 0 for VLAN0, {b} = 1 for VLAN1).
 *
 * Reads and writes to this register access the table entry specified by
 * RFOE()_RX_INDIRECT_INDEX[INDEX].
 *
 * Incoming VLAN tagged packets:
 * *First select the word with service tag VID[11:6].
 * *Within the word, select the forward bit with service tag VID[5:0].
 * Forward:
 * *1 means process packet.
 * *0 means drop packet.
 */
union cavm_rfoex_rx_ind_vlanx_fwd
{
    uint64_t u;
    struct cavm_rfoex_rx_ind_vlanx_fwd_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t fwd                   : 64; /**< [ 63:  0](R/W) When FWD[VID[5:0]]==0, drop packet. */
#else /* Word 0 - Little Endian */
        uint64_t fwd                   : 64; /**< [ 63:  0](R/W) When FWD[VID[5:0]]==0, drop packet. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_rfoex_rx_ind_vlanx_fwd_s cn; */
};
typedef union cavm_rfoex_rx_ind_vlanx_fwd cavm_rfoex_rx_ind_vlanx_fwd_t;

static inline uint64_t CAVM_RFOEX_RX_IND_VLANX_FWD(uint64_t a, uint64_t b) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_RFOEX_RX_IND_VLANX_FWD(uint64_t a, uint64_t b)
{
    if (cavm_is_model(OCTEONTX_ODINMP) && ((a<=6) && (b<=1)))
        return 0x861000001cd0ll + 0x1000000ll * ((a) & 0x7) + 8ll * ((b) & 0x1);
    __cavm_csr_fatal("RFOEX_RX_IND_VLANX_FWD", 2, a, b, 0, 0, 0, 0);
}

#define typedef_CAVM_RFOEX_RX_IND_VLANX_FWD(a,b) cavm_rfoex_rx_ind_vlanx_fwd_t
#define bustype_CAVM_RFOEX_RX_IND_VLANX_FWD(a,b) CSR_TYPE_NCB
#define basename_CAVM_RFOEX_RX_IND_VLANX_FWD(a,b) "RFOEX_RX_IND_VLANX_FWD"
#define busnum_CAVM_RFOEX_RX_IND_VLANX_FWD(a,b) (a)
#define arguments_CAVM_RFOEX_RX_IND_VLANX_FWD(a,b) (a),(b),-1,-1

/**
 * Register (NCB) rfoe#_rx_indirect_index
 *
 * RFOE RX Indirect Index Register
 * Index for reading and writing RFOE RX configuration tables.
 */
union cavm_rfoex_rx_indirect_index
{
    uint64_t u;
    struct cavm_rfoex_rx_indirect_index_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_16_63        : 48;
        uint64_t index                 : 16; /**< [ 15:  0](R/W) Index used to select entry in RFOE()_RX_IND_* structures. */
#else /* Word 0 - Little Endian */
        uint64_t index                 : 16; /**< [ 15:  0](R/W) Index used to select entry in RFOE()_RX_IND_* structures. */
        uint64_t reserved_16_63        : 48;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_rfoex_rx_indirect_index_s cn; */
};
typedef union cavm_rfoex_rx_indirect_index cavm_rfoex_rx_indirect_index_t;

static inline uint64_t CAVM_RFOEX_RX_INDIRECT_INDEX(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_RFOEX_RX_INDIRECT_INDEX(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_ODINMP) && (a<=6))
        return 0x861000001bf8ll + 0x1000000ll * ((a) & 0x7);
    __cavm_csr_fatal("RFOEX_RX_INDIRECT_INDEX", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_RFOEX_RX_INDIRECT_INDEX(a) cavm_rfoex_rx_indirect_index_t
#define bustype_CAVM_RFOEX_RX_INDIRECT_INDEX(a) CSR_TYPE_NCB
#define basename_CAVM_RFOEX_RX_INDIRECT_INDEX(a) "RFOEX_RX_INDIRECT_INDEX"
#define busnum_CAVM_RFOEX_RX_INDIRECT_INDEX(a) (a)
#define arguments_CAVM_RFOEX_RX_INDIRECT_INDEX(a) (a),-1,-1,-1

/**
 * Register (NCB) rfoe#_rx_inst
 *
 * RFOE Instance ID Register
 * RFOE Instance ID Register.
 */
union cavm_rfoex_rx_inst
{
    uint64_t u;
    struct cavm_rfoex_rx_inst_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_4_63         : 60;
        uint64_t inst_id               : 4;  /**< [  3:  0](R/W) RFOE Instance ID. */
#else /* Word 0 - Little Endian */
        uint64_t inst_id               : 4;  /**< [  3:  0](R/W) RFOE Instance ID. */
        uint64_t reserved_4_63         : 60;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_rfoex_rx_inst_s cn; */
};
typedef union cavm_rfoex_rx_inst cavm_rfoex_rx_inst_t;

static inline uint64_t CAVM_RFOEX_RX_INST(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_RFOEX_RX_INST(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_ODINMP) && (a<=6))
        return 0x861000001cf0ll + 0x1000000ll * ((a) & 0x7);
    __cavm_csr_fatal("RFOEX_RX_INST", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_RFOEX_RX_INST(a) cavm_rfoex_rx_inst_t
#define bustype_CAVM_RFOEX_RX_INST(a) CSR_TYPE_NCB
#define basename_CAVM_RFOEX_RX_INST(a) "RFOEX_RX_INST"
#define busnum_CAVM_RFOEX_RX_INST(a) (a)
#define arguments_CAVM_RFOEX_RX_INST(a) (a),-1,-1,-1

/**
 * Register (NCB) rfoe#_rx_jca_addjob_jobtag
 *
 * RFOE RX JCA ADDJOB Message Jobtag Configuration  Register
 * Defines PSM_CMD_ADDJOB_S[JOBTAG] and PSM_CMD_CONTJOB_S[JOBTAG] values when
 * sending new job commands to PSM. Not used for RoE 0xfc subtypes.
 *
 * The job tag value computed as follows:
 * _ ([BASE] & (0xffff \<\< [MASK_WIDTH])) | ([COUNT] & ~(0xffff \<\< [MASK_WIDTH])).
 */
union cavm_rfoex_rx_jca_addjob_jobtag
{
    uint64_t u;
    struct cavm_rfoex_rx_jca_addjob_jobtag_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_48_63        : 16;
        uint64_t count                 : 16; /**< [ 47: 32](R/W/H) Current counter value.  Increments on every non-0xfc subtype ADDJOB
                                                                 and CONTJOB command sent to PSM. Counter increment wraps to 0 when current [COUNT] == 0xFFFF. */
        uint64_t reserved_21_31        : 11;
        uint64_t mask_width            : 5;  /**< [ 20: 16](R/W) Number of bits from counter to insert into lower bits of JOBTAG. */
        uint64_t base                  : 16; /**< [ 15:  0](R/W) Constant value part of the JOBTAG. */
#else /* Word 0 - Little Endian */
        uint64_t base                  : 16; /**< [ 15:  0](R/W) Constant value part of the JOBTAG. */
        uint64_t mask_width            : 5;  /**< [ 20: 16](R/W) Number of bits from counter to insert into lower bits of JOBTAG. */
        uint64_t reserved_21_31        : 11;
        uint64_t count                 : 16; /**< [ 47: 32](R/W/H) Current counter value.  Increments on every non-0xfc subtype ADDJOB
                                                                 and CONTJOB command sent to PSM. Counter increment wraps to 0 when current [COUNT] == 0xFFFF. */
        uint64_t reserved_48_63        : 16;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_rfoex_rx_jca_addjob_jobtag_s cn; */
};
typedef union cavm_rfoex_rx_jca_addjob_jobtag cavm_rfoex_rx_jca_addjob_jobtag_t;

static inline uint64_t CAVM_RFOEX_RX_JCA_ADDJOB_JOBTAG(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_RFOEX_RX_JCA_ADDJOB_JOBTAG(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_ODINMP) && (a<=6))
        return 0x861000001060ll + 0x1000000ll * ((a) & 0x7);
    __cavm_csr_fatal("RFOEX_RX_JCA_ADDJOB_JOBTAG", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_RFOEX_RX_JCA_ADDJOB_JOBTAG(a) cavm_rfoex_rx_jca_addjob_jobtag_t
#define bustype_CAVM_RFOEX_RX_JCA_ADDJOB_JOBTAG(a) CSR_TYPE_NCB
#define basename_CAVM_RFOEX_RX_JCA_ADDJOB_JOBTAG(a) "RFOEX_RX_JCA_ADDJOB_JOBTAG"
#define busnum_CAVM_RFOEX_RX_JCA_ADDJOB_JOBTAG(a) (a)
#define arguments_CAVM_RFOEX_RX_JCA_ADDJOB_JOBTAG(a) (a),-1,-1,-1

/**
 * Register (NCB) rfoe#_rx_mbt#_status
 *
 * RFOE RX Memory Buffer Table Status Register
 * Memory buffer status table.
 * This register directly accesses a table of 1056 entries.
 */
union cavm_rfoex_rx_mbtx_status
{
    uint64_t u;
    struct cavm_rfoex_rx_mbtx_status_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_32_63        : 32;
        uint64_t sw_buf                : 16; /**< [ 31: 16](R/W/H) Direct access copy of RFOE()_RX_IND_MBT_CFG2[SW_BUF] */
        uint64_t nxt_buf               : 16; /**< [ 15:  0](RO/H) Read-only access copy of RFOE()_RX_IND_MBT_CFG[NXT_BUF] */
#else /* Word 0 - Little Endian */
        uint64_t nxt_buf               : 16; /**< [ 15:  0](RO/H) Read-only access copy of RFOE()_RX_IND_MBT_CFG[NXT_BUF] */
        uint64_t sw_buf                : 16; /**< [ 31: 16](R/W/H) Direct access copy of RFOE()_RX_IND_MBT_CFG2[SW_BUF] */
        uint64_t reserved_32_63        : 32;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_rfoex_rx_mbtx_status_s cn; */
};
typedef union cavm_rfoex_rx_mbtx_status cavm_rfoex_rx_mbtx_status_t;

static inline uint64_t CAVM_RFOEX_RX_MBTX_STATUS(uint64_t a, uint64_t b) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_RFOEX_RX_MBTX_STATUS(uint64_t a, uint64_t b)
{
    if (cavm_is_model(OCTEONTX_ODINMP) && ((a<=6) && (b<=1055)))
        return 0x861000010000ll + 0x1000000ll * ((a) & 0x7) + 8ll * ((b) & 0x7ff);
    __cavm_csr_fatal("RFOEX_RX_MBTX_STATUS", 2, a, b, 0, 0, 0, 0);
}

#define typedef_CAVM_RFOEX_RX_MBTX_STATUS(a,b) cavm_rfoex_rx_mbtx_status_t
#define bustype_CAVM_RFOEX_RX_MBTX_STATUS(a,b) CSR_TYPE_NCB
#define basename_CAVM_RFOEX_RX_MBTX_STATUS(a,b) "RFOEX_RX_MBTX_STATUS"
#define busnum_CAVM_RFOEX_RX_MBTX_STATUS(a,b) (a)
#define arguments_CAVM_RFOEX_RX_MBTX_STATUS(a,b) (a),(b),-1,-1

/**
 * Register (NCB) rfoe#_rx_mcs_shunt_act_cfg1
 *
 * RFOE RX MCS Shunt Action Configuration Register1
 */
union cavm_rfoex_rx_mcs_shunt_act_cfg1
{
    uint64_t u;
    struct cavm_rfoex_rx_mcs_shunt_act_cfg1_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_22_63        : 42;
        uint64_t term_flow_id_calc     : 2;  /**< [ 21: 20](R/W) Specifies the Calculation method for flow_id. Used only
                                                                 when ACTION=RFOE_RX_SW_TBL_ACTION_E::TERMINATE. */
        uint64_t reserved_18_19        : 2;
        uint64_t dest_lmac_id          : 2;  /**< [ 17: 16](R/W) Destination LMAC_ID.
                                                                 Used only when ACTION=RFOE_RX_SW_TBL_ACTION_E::FORWARD. */
        uint64_t reserved_11_15        : 5;
        uint64_t rfoe_flow_id          : 7;  /**< [ 10:  4](R/W) Forwarding flow_id used to lookup MBT_IDX and JDT_IDX.
                                                                 Used when ACTION=RFOE_RX_SW_TBL_ACTION_E::FORWARD or
                                                                 when ACTION=RFOE_RX_SW_TBL_ACTION_E::TERMINATE and
                                                                 TERM_FLOW_ID_CALC=RFOE_RX_SW_TBL_TERM_FLOW_ID_CALC_E::PC_ID_REMAP_SUBTABLE or
                                                                 TERM_FLOW_ID_CALC=RFOE_RX_SW_TBL_TERM_FLOW_ID_CALC_E::PC_ID_HASH_SUBTABLE. */
        uint64_t reserved_2_3          : 2;
        uint64_t action                : 2;  /**< [  1:  0](R/W) Specifies Action on Match. */
#else /* Word 0 - Little Endian */
        uint64_t action                : 2;  /**< [  1:  0](R/W) Specifies Action on Match. */
        uint64_t reserved_2_3          : 2;
        uint64_t rfoe_flow_id          : 7;  /**< [ 10:  4](R/W) Forwarding flow_id used to lookup MBT_IDX and JDT_IDX.
                                                                 Used when ACTION=RFOE_RX_SW_TBL_ACTION_E::FORWARD or
                                                                 when ACTION=RFOE_RX_SW_TBL_ACTION_E::TERMINATE and
                                                                 TERM_FLOW_ID_CALC=RFOE_RX_SW_TBL_TERM_FLOW_ID_CALC_E::PC_ID_REMAP_SUBTABLE or
                                                                 TERM_FLOW_ID_CALC=RFOE_RX_SW_TBL_TERM_FLOW_ID_CALC_E::PC_ID_HASH_SUBTABLE. */
        uint64_t reserved_11_15        : 5;
        uint64_t dest_lmac_id          : 2;  /**< [ 17: 16](R/W) Destination LMAC_ID.
                                                                 Used only when ACTION=RFOE_RX_SW_TBL_ACTION_E::FORWARD. */
        uint64_t reserved_18_19        : 2;
        uint64_t term_flow_id_calc     : 2;  /**< [ 21: 20](R/W) Specifies the Calculation method for flow_id. Used only
                                                                 when ACTION=RFOE_RX_SW_TBL_ACTION_E::TERMINATE. */
        uint64_t reserved_22_63        : 42;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_rfoex_rx_mcs_shunt_act_cfg1_s cn; */
};
typedef union cavm_rfoex_rx_mcs_shunt_act_cfg1 cavm_rfoex_rx_mcs_shunt_act_cfg1_t;

static inline uint64_t CAVM_RFOEX_RX_MCS_SHUNT_ACT_CFG1(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_RFOEX_RX_MCS_SHUNT_ACT_CFG1(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_ODINMP) && (a<=6))
        return 0x8610000132a0ll + 0x1000000ll * ((a) & 0x7);
    __cavm_csr_fatal("RFOEX_RX_MCS_SHUNT_ACT_CFG1", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_RFOEX_RX_MCS_SHUNT_ACT_CFG1(a) cavm_rfoex_rx_mcs_shunt_act_cfg1_t
#define bustype_CAVM_RFOEX_RX_MCS_SHUNT_ACT_CFG1(a) CSR_TYPE_NCB
#define basename_CAVM_RFOEX_RX_MCS_SHUNT_ACT_CFG1(a) "RFOEX_RX_MCS_SHUNT_ACT_CFG1"
#define busnum_CAVM_RFOEX_RX_MCS_SHUNT_ACT_CFG1(a) (a)
#define arguments_CAVM_RFOEX_RX_MCS_SHUNT_ACT_CFG1(a) (a),-1,-1,-1

/**
 * Register (NCB) rfoe#_rx_mcs_shunt_act_cfg2
 *
 * RFOE RX MCS Shunt Action Configuration 2 Register
 */
union cavm_rfoex_rx_mcs_shunt_act_cfg2
{
    uint64_t u;
    struct cavm_rfoex_rx_mcs_shunt_act_cfg2_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_62_63        : 2;
        uint64_t subtable_offset       : 10; /**< [ 61: 52](R/W) EDEC Subtable offset.
                                                                 Used when ACTION=RFOE_RX_SW_TBL_ACTION_E::TERMINATE and
                                                                 TERM_FLOW_ID_CALC=RFOE_RX_SW_TBL_TERM_FLOW_ID_CALC_E::PC_ID_REMAP_SUBTABLE or
                                                                 TERM_FLOW_ID_CALC=RFOE_RX_SW_TBL_TERM_FLOW_ID_CALC_E::PC_ID_HASH_SUBTABLE. */
        uint64_t reserved_50_51        : 2;
        uint64_t pc_id_key_select      : 50; /**< [ 49:  0](R/W) Selectors for PC_ID_KEY[9:0].
                                                                 Used when ACTION=RFOE_RX_SW_TBL_ACTION_E::TERMINATE and
                                                                 TERM_FLOW_ID_CALC=RFOE_RX_SW_TBL_TERM_FLOW_ID_CALC_E::PC_ID_REMAP_SUBTABLE or
                                                                 TERM_FLOW_ID_CALC=RFOE_RX_SW_TBL_TERM_FLOW_ID_CALC_E::PC_ID_HASH_SUBTABLE.
                                                                 Only 9:0 used for PC_ID_HASH_SUBTABLE. */
#else /* Word 0 - Little Endian */
        uint64_t pc_id_key_select      : 50; /**< [ 49:  0](R/W) Selectors for PC_ID_KEY[9:0].
                                                                 Used when ACTION=RFOE_RX_SW_TBL_ACTION_E::TERMINATE and
                                                                 TERM_FLOW_ID_CALC=RFOE_RX_SW_TBL_TERM_FLOW_ID_CALC_E::PC_ID_REMAP_SUBTABLE or
                                                                 TERM_FLOW_ID_CALC=RFOE_RX_SW_TBL_TERM_FLOW_ID_CALC_E::PC_ID_HASH_SUBTABLE.
                                                                 Only 9:0 used for PC_ID_HASH_SUBTABLE. */
        uint64_t reserved_50_51        : 2;
        uint64_t subtable_offset       : 10; /**< [ 61: 52](R/W) EDEC Subtable offset.
                                                                 Used when ACTION=RFOE_RX_SW_TBL_ACTION_E::TERMINATE and
                                                                 TERM_FLOW_ID_CALC=RFOE_RX_SW_TBL_TERM_FLOW_ID_CALC_E::PC_ID_REMAP_SUBTABLE or
                                                                 TERM_FLOW_ID_CALC=RFOE_RX_SW_TBL_TERM_FLOW_ID_CALC_E::PC_ID_HASH_SUBTABLE. */
        uint64_t reserved_62_63        : 2;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_rfoex_rx_mcs_shunt_act_cfg2_s cn; */
};
typedef union cavm_rfoex_rx_mcs_shunt_act_cfg2 cavm_rfoex_rx_mcs_shunt_act_cfg2_t;

static inline uint64_t CAVM_RFOEX_RX_MCS_SHUNT_ACT_CFG2(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_RFOEX_RX_MCS_SHUNT_ACT_CFG2(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_ODINMP) && (a<=6))
        return 0x8610000132a8ll + 0x1000000ll * ((a) & 0x7);
    __cavm_csr_fatal("RFOEX_RX_MCS_SHUNT_ACT_CFG2", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_RFOEX_RX_MCS_SHUNT_ACT_CFG2(a) cavm_rfoex_rx_mcs_shunt_act_cfg2_t
#define bustype_CAVM_RFOEX_RX_MCS_SHUNT_ACT_CFG2(a) CSR_TYPE_NCB
#define basename_CAVM_RFOEX_RX_MCS_SHUNT_ACT_CFG2(a) "RFOEX_RX_MCS_SHUNT_ACT_CFG2"
#define busnum_CAVM_RFOEX_RX_MCS_SHUNT_ACT_CFG2(a) (a)
#define arguments_CAVM_RFOEX_RX_MCS_SHUNT_ACT_CFG2(a) (a),-1,-1,-1

/**
 * Register (NCB) rfoe#_rx_mcs_shunt_enable
 *
 * RFOE RX MCS Shunt Enable Register
 * X2P MCS Sideband Interface Shunt Enable configuration.
 */
union cavm_rfoex_rx_mcs_shunt_enable
{
    uint64_t u;
    struct cavm_rfoex_rx_mcs_shunt_enable_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_44_63        : 20;
        uint64_t pkt_kind_shunt_enable : 4;  /**< [ 43: 40](R/W) Packet Kind Shunt Enable bitmap.
                                                                 Look up bitmap for incoming packet MCS Exception code.
                                                                 SHUNT_ENABLE=0 MCS Packet Kind cannot be shunted to DSP.
                                                                 SHUNT_ENABLE=1 MCS Packet Kind can be shunted to DSP. */
        uint64_t reserved_32_39        : 8;
        uint64_t exc_code_shunt_enable : 32; /**< [ 31:  0](R/W) Exception Code Shunt enable bitmap.
                                                                 Look up bitmap for incoming packet MCS Exception code.
                                                                 SHUNT_ENABLE=0 MCS exception code cannot be shunted to DSP.
                                                                 SHUNT_ENABLE=1 MCS exception code can be shunted to DSP. */
#else /* Word 0 - Little Endian */
        uint64_t exc_code_shunt_enable : 32; /**< [ 31:  0](R/W) Exception Code Shunt enable bitmap.
                                                                 Look up bitmap for incoming packet MCS Exception code.
                                                                 SHUNT_ENABLE=0 MCS exception code cannot be shunted to DSP.
                                                                 SHUNT_ENABLE=1 MCS exception code can be shunted to DSP. */
        uint64_t reserved_32_39        : 8;
        uint64_t pkt_kind_shunt_enable : 4;  /**< [ 43: 40](R/W) Packet Kind Shunt Enable bitmap.
                                                                 Look up bitmap for incoming packet MCS Exception code.
                                                                 SHUNT_ENABLE=0 MCS Packet Kind cannot be shunted to DSP.
                                                                 SHUNT_ENABLE=1 MCS Packet Kind can be shunted to DSP. */
        uint64_t reserved_44_63        : 20;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_rfoex_rx_mcs_shunt_enable_s cn; */
};
typedef union cavm_rfoex_rx_mcs_shunt_enable cavm_rfoex_rx_mcs_shunt_enable_t;

static inline uint64_t CAVM_RFOEX_RX_MCS_SHUNT_ENABLE(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_RFOEX_RX_MCS_SHUNT_ENABLE(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_ODINMP) && (a<=6))
        return 0x861000013298ll + 0x1000000ll * ((a) & 0x7);
    __cavm_csr_fatal("RFOEX_RX_MCS_SHUNT_ENABLE", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_RFOEX_RX_MCS_SHUNT_ENABLE(a) cavm_rfoex_rx_mcs_shunt_enable_t
#define bustype_CAVM_RFOEX_RX_MCS_SHUNT_ENABLE(a) CSR_TYPE_NCB
#define basename_CAVM_RFOEX_RX_MCS_SHUNT_ENABLE(a) "RFOEX_RX_MCS_SHUNT_ENABLE"
#define busnum_CAVM_RFOEX_RX_MCS_SHUNT_ENABLE(a) (a)
#define arguments_CAVM_RFOEX_RX_MCS_SHUNT_ENABLE(a) (a),-1,-1,-1

/**
 * Register (NCB) rfoe#_rx_orderinfo_fail_stat
 *
 * RFOE RX Order Info Fail  Statistic Register
 * Count of seqNum or timestamp (from RoE orderInfo field)  failures. A failure is a
 * miscompare in seqNum or a time that is outside of the accepted time window.
 */
union cavm_rfoex_rx_orderinfo_fail_stat
{
    uint64_t u;
    struct cavm_rfoex_rx_orderinfo_fail_stat_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_48_63        : 16;
        uint64_t stat                  : 48; /**< [ 47:  0](R/W/H) The counter value. Wraps to zero at 2^48. */
#else /* Word 0 - Little Endian */
        uint64_t stat                  : 48; /**< [ 47:  0](R/W/H) The counter value. Wraps to zero at 2^48. */
        uint64_t reserved_48_63        : 16;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_rfoex_rx_orderinfo_fail_stat_s cn; */
};
typedef union cavm_rfoex_rx_orderinfo_fail_stat cavm_rfoex_rx_orderinfo_fail_stat_t;

static inline uint64_t CAVM_RFOEX_RX_ORDERINFO_FAIL_STAT(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_RFOEX_RX_ORDERINFO_FAIL_STAT(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_ODINMP) && (a<=6))
        return 0x861000001d40ll + 0x1000000ll * ((a) & 0x7);
    __cavm_csr_fatal("RFOEX_RX_ORDERINFO_FAIL_STAT", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_RFOEX_RX_ORDERINFO_FAIL_STAT(a) cavm_rfoex_rx_orderinfo_fail_stat_t
#define bustype_CAVM_RFOEX_RX_ORDERINFO_FAIL_STAT(a) CSR_TYPE_NCB
#define basename_CAVM_RFOEX_RX_ORDERINFO_FAIL_STAT(a) "RFOEX_RX_ORDERINFO_FAIL_STAT"
#define busnum_CAVM_RFOEX_RX_ORDERINFO_FAIL_STAT(a) (a)
#define arguments_CAVM_RFOEX_RX_ORDERINFO_FAIL_STAT(a) (a),-1,-1,-1

/**
 * Register (NCB) rfoe#_rx_ordinf_err_ena_w1c#
 *
 * RFOE RX Order Info/Sequence ID Error Interrupt Enable Clear Register
 * This register clears interrupt enable bits.
 */
union cavm_rfoex_rx_ordinf_err_ena_w1cx
{
    uint64_t u;
    struct cavm_rfoex_rx_ordinf_err_ena_w1cx_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t orderinfo_miscompare  : 64; /**< [ 63:  0](R/W1C/H) Reads or clears enable for RFOE(0..6)_RX_ORDINF_ERR_INT(0..15)[ORDERINFO_MISCOMPARE]. */
#else /* Word 0 - Little Endian */
        uint64_t orderinfo_miscompare  : 64; /**< [ 63:  0](R/W1C/H) Reads or clears enable for RFOE(0..6)_RX_ORDINF_ERR_INT(0..15)[ORDERINFO_MISCOMPARE]. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_rfoex_rx_ordinf_err_ena_w1cx_s cn; */
};
typedef union cavm_rfoex_rx_ordinf_err_ena_w1cx cavm_rfoex_rx_ordinf_err_ena_w1cx_t;

static inline uint64_t CAVM_RFOEX_RX_ORDINF_ERR_ENA_W1CX(uint64_t a, uint64_t b) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_RFOEX_RX_ORDINF_ERR_ENA_W1CX(uint64_t a, uint64_t b)
{
    if (cavm_is_model(OCTEONTX_ODINMP) && ((a<=6) && (b<=15)))
        return 0x861000001500ll + 0x1000000ll * ((a) & 0x7) + 8ll * ((b) & 0xf);
    __cavm_csr_fatal("RFOEX_RX_ORDINF_ERR_ENA_W1CX", 2, a, b, 0, 0, 0, 0);
}

#define typedef_CAVM_RFOEX_RX_ORDINF_ERR_ENA_W1CX(a,b) cavm_rfoex_rx_ordinf_err_ena_w1cx_t
#define bustype_CAVM_RFOEX_RX_ORDINF_ERR_ENA_W1CX(a,b) CSR_TYPE_NCB
#define basename_CAVM_RFOEX_RX_ORDINF_ERR_ENA_W1CX(a,b) "RFOEX_RX_ORDINF_ERR_ENA_W1CX"
#define busnum_CAVM_RFOEX_RX_ORDINF_ERR_ENA_W1CX(a,b) (a)
#define arguments_CAVM_RFOEX_RX_ORDINF_ERR_ENA_W1CX(a,b) (a),(b),-1,-1

/**
 * Register (NCB) rfoe#_rx_ordinf_err_ena_w1s#
 *
 * RFOE RX Order Info Error Interrupt Enable Set Register
 * This register sets interrupt enable bits.
 */
union cavm_rfoex_rx_ordinf_err_ena_w1sx
{
    uint64_t u;
    struct cavm_rfoex_rx_ordinf_err_ena_w1sx_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t orderinfo_miscompare  : 64; /**< [ 63:  0](R/W1S/H) Reads or sets enable for RFOE(0..6)_RX_ORDINF_ERR_INT(0..15)[ORDERINFO_MISCOMPARE]. */
#else /* Word 0 - Little Endian */
        uint64_t orderinfo_miscompare  : 64; /**< [ 63:  0](R/W1S/H) Reads or sets enable for RFOE(0..6)_RX_ORDINF_ERR_INT(0..15)[ORDERINFO_MISCOMPARE]. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_rfoex_rx_ordinf_err_ena_w1sx_s cn; */
};
typedef union cavm_rfoex_rx_ordinf_err_ena_w1sx cavm_rfoex_rx_ordinf_err_ena_w1sx_t;

static inline uint64_t CAVM_RFOEX_RX_ORDINF_ERR_ENA_W1SX(uint64_t a, uint64_t b) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_RFOEX_RX_ORDINF_ERR_ENA_W1SX(uint64_t a, uint64_t b)
{
    if (cavm_is_model(OCTEONTX_ODINMP) && ((a<=6) && (b<=15)))
        return 0x861000001480ll + 0x1000000ll * ((a) & 0x7) + 8ll * ((b) & 0xf);
    __cavm_csr_fatal("RFOEX_RX_ORDINF_ERR_ENA_W1SX", 2, a, b, 0, 0, 0, 0);
}

#define typedef_CAVM_RFOEX_RX_ORDINF_ERR_ENA_W1SX(a,b) cavm_rfoex_rx_ordinf_err_ena_w1sx_t
#define bustype_CAVM_RFOEX_RX_ORDINF_ERR_ENA_W1SX(a,b) CSR_TYPE_NCB
#define basename_CAVM_RFOEX_RX_ORDINF_ERR_ENA_W1SX(a,b) "RFOEX_RX_ORDINF_ERR_ENA_W1SX"
#define busnum_CAVM_RFOEX_RX_ORDINF_ERR_ENA_W1SX(a,b) (a)
#define arguments_CAVM_RFOEX_RX_ORDINF_ERR_ENA_W1SX(a,b) (a),(b),-1,-1

/**
 * Register (NCB) rfoe#_rx_ordinf_err_int#
 *
 * RFOE Order Info/Sequence ID Error Interrupt Register
 * These registers record RoE orderInfo or eCPRI Sequence ID miscompare for each flow.
 *
 * When an error occurs, RFOE sends message to PSM defined by
 * RFOE()_RX_ORDINF_PSM_MSG_W1, RFOE()_RX_ORDINF_PSM_MSG_W0.
 *
 * This is a bit-mask with one bit for each flow. The flow index for a given
 * bit is:
 *
 * _ flow index = bit + 64*{b}.
 */
union cavm_rfoex_rx_ordinf_err_intx
{
    uint64_t u;
    struct cavm_rfoex_rx_ordinf_err_intx_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t orderinfo_miscompare  : 64; /**< [ 63:  0](R/W1C/H) orderInfo.seqNum or orderInfo.timestamp miscompare from incoming RoE
                                                                 packet, or ECPRI_HDR_S[SEQ_ID] from incoming eCPRI packet. */
#else /* Word 0 - Little Endian */
        uint64_t orderinfo_miscompare  : 64; /**< [ 63:  0](R/W1C/H) orderInfo.seqNum or orderInfo.timestamp miscompare from incoming RoE
                                                                 packet, or ECPRI_HDR_S[SEQ_ID] from incoming eCPRI packet. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_rfoex_rx_ordinf_err_intx_s cn; */
};
typedef union cavm_rfoex_rx_ordinf_err_intx cavm_rfoex_rx_ordinf_err_intx_t;

static inline uint64_t CAVM_RFOEX_RX_ORDINF_ERR_INTX(uint64_t a, uint64_t b) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_RFOEX_RX_ORDINF_ERR_INTX(uint64_t a, uint64_t b)
{
    if (cavm_is_model(OCTEONTX_ODINMP) && ((a<=6) && (b<=15)))
        return 0x861000001400ll + 0x1000000ll * ((a) & 0x7) + 8ll * ((b) & 0xf);
    __cavm_csr_fatal("RFOEX_RX_ORDINF_ERR_INTX", 2, a, b, 0, 0, 0, 0);
}

#define typedef_CAVM_RFOEX_RX_ORDINF_ERR_INTX(a,b) cavm_rfoex_rx_ordinf_err_intx_t
#define bustype_CAVM_RFOEX_RX_ORDINF_ERR_INTX(a,b) CSR_TYPE_NCB
#define basename_CAVM_RFOEX_RX_ORDINF_ERR_INTX(a,b) "RFOEX_RX_ORDINF_ERR_INTX"
#define busnum_CAVM_RFOEX_RX_ORDINF_ERR_INTX(a,b) (a)
#define arguments_CAVM_RFOEX_RX_ORDINF_ERR_INTX(a,b) (a),(b),-1,-1

/**
 * Register (NCB) rfoe#_rx_ordinf_err_int_w1s#
 *
 * RFOE RX Order Info/Sequence ID Error Interrupt Set Register
 * This register sets interrupt bits.
 */
union cavm_rfoex_rx_ordinf_err_int_w1sx
{
    uint64_t u;
    struct cavm_rfoex_rx_ordinf_err_int_w1sx_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t orderinfo_miscompare  : 64; /**< [ 63:  0](R/W1S/H) Reads or sets RFOE(0..6)_RX_ORDINF_ERR_INT(0..15)[ORDERINFO_MISCOMPARE]. */
#else /* Word 0 - Little Endian */
        uint64_t orderinfo_miscompare  : 64; /**< [ 63:  0](R/W1S/H) Reads or sets RFOE(0..6)_RX_ORDINF_ERR_INT(0..15)[ORDERINFO_MISCOMPARE]. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_rfoex_rx_ordinf_err_int_w1sx_s cn; */
};
typedef union cavm_rfoex_rx_ordinf_err_int_w1sx cavm_rfoex_rx_ordinf_err_int_w1sx_t;

static inline uint64_t CAVM_RFOEX_RX_ORDINF_ERR_INT_W1SX(uint64_t a, uint64_t b) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_RFOEX_RX_ORDINF_ERR_INT_W1SX(uint64_t a, uint64_t b)
{
    if (cavm_is_model(OCTEONTX_ODINMP) && ((a<=6) && (b<=15)))
        return 0x861000001580ll + 0x1000000ll * ((a) & 0x7) + 8ll * ((b) & 0xf);
    __cavm_csr_fatal("RFOEX_RX_ORDINF_ERR_INT_W1SX", 2, a, b, 0, 0, 0, 0);
}

#define typedef_CAVM_RFOEX_RX_ORDINF_ERR_INT_W1SX(a,b) cavm_rfoex_rx_ordinf_err_int_w1sx_t
#define bustype_CAVM_RFOEX_RX_ORDINF_ERR_INT_W1SX(a,b) CSR_TYPE_NCB
#define basename_CAVM_RFOEX_RX_ORDINF_ERR_INT_W1SX(a,b) "RFOEX_RX_ORDINF_ERR_INT_W1SX"
#define busnum_CAVM_RFOEX_RX_ORDINF_ERR_INT_W1SX(a,b) (a)
#define arguments_CAVM_RFOEX_RX_ORDINF_ERR_INT_W1SX(a,b) (a),(b),-1,-1

/**
 * Register (NCB) rfoe#_rx_ordinf_psm_msg_w0
 *
 * RFOE RX Orderinfo Interrupt Message w0  Register
 * JCA word 0 message to send on enabled orderInfo error.
 */
union cavm_rfoex_rx_ordinf_psm_msg_w0
{
    uint64_t u;
    struct cavm_rfoex_rx_ordinf_psm_msg_w0_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t w0                    : 64; /**< [ 63:  0](R/W) Word 0 of JCA message. */
#else /* Word 0 - Little Endian */
        uint64_t w0                    : 64; /**< [ 63:  0](R/W) Word 0 of JCA message. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_rfoex_rx_ordinf_psm_msg_w0_s cn; */
};
typedef union cavm_rfoex_rx_ordinf_psm_msg_w0 cavm_rfoex_rx_ordinf_psm_msg_w0_t;

static inline uint64_t CAVM_RFOEX_RX_ORDINF_PSM_MSG_W0(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_RFOEX_RX_ORDINF_PSM_MSG_W0(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_ODINMP) && (a<=6))
        return 0x861000001600ll + 0x1000000ll * ((a) & 0x7);
    __cavm_csr_fatal("RFOEX_RX_ORDINF_PSM_MSG_W0", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_RFOEX_RX_ORDINF_PSM_MSG_W0(a) cavm_rfoex_rx_ordinf_psm_msg_w0_t
#define bustype_CAVM_RFOEX_RX_ORDINF_PSM_MSG_W0(a) CSR_TYPE_NCB
#define basename_CAVM_RFOEX_RX_ORDINF_PSM_MSG_W0(a) "RFOEX_RX_ORDINF_PSM_MSG_W0"
#define busnum_CAVM_RFOEX_RX_ORDINF_PSM_MSG_W0(a) (a)
#define arguments_CAVM_RFOEX_RX_ORDINF_PSM_MSG_W0(a) (a),-1,-1,-1

/**
 * Register (NCB) rfoe#_rx_ordinf_psm_msg_w1
 *
 * RFOE RX Orderinfo Interrupt Message w1 Register
 * JCA word 1 message to send on enabled orderInfo error.
 */
union cavm_rfoex_rx_ordinf_psm_msg_w1
{
    uint64_t u;
    struct cavm_rfoex_rx_ordinf_psm_msg_w1_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t w1                    : 64; /**< [ 63:  0](R/W) Word 0 of JCA message. */
#else /* Word 0 - Little Endian */
        uint64_t w1                    : 64; /**< [ 63:  0](R/W) Word 0 of JCA message. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_rfoex_rx_ordinf_psm_msg_w1_s cn; */
};
typedef union cavm_rfoex_rx_ordinf_psm_msg_w1 cavm_rfoex_rx_ordinf_psm_msg_w1_t;

static inline uint64_t CAVM_RFOEX_RX_ORDINF_PSM_MSG_W1(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_RFOEX_RX_ORDINF_PSM_MSG_W1(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_ODINMP) && (a<=6))
        return 0x861000001608ll + 0x1000000ll * ((a) & 0x7);
    __cavm_csr_fatal("RFOEX_RX_ORDINF_PSM_MSG_W1", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_RFOEX_RX_ORDINF_PSM_MSG_W1(a) cavm_rfoex_rx_ordinf_psm_msg_w1_t
#define bustype_CAVM_RFOEX_RX_ORDINF_PSM_MSG_W1(a) CSR_TYPE_NCB
#define basename_CAVM_RFOEX_RX_ORDINF_PSM_MSG_W1(a) "RFOEX_RX_ORDINF_PSM_MSG_W1"
#define busnum_CAVM_RFOEX_RX_ORDINF_PSM_MSG_W1(a) (a)
#define arguments_CAVM_RFOEX_RX_ORDINF_PSM_MSG_W1(a) (a),-1,-1,-1

/**
 * Register (NCB) rfoe#_rx_pkt_err_drop_stat
 *
 * RFOE RX Packet Error Packet Drop Statistic Register
 * Count of packets dropped for RFOE()_RX_ERROR_INT[CLEAN_APERTURE],
 * RFOE()_RX_ERROR_INT[LEN_ABNORM], RFOE()_RX_ERROR_INT[FD_MALFORMED],
 * RFOE()_RX_ERROR_INT[FC_PSM_OPCODE], RFOE()_RX_ERROR_INT[FD_STATE],
 * RFOE()_RX_ERROR_INT[VLAN_TPID] and RFOE()_RX_ERROR_INT[IDX_RANGE].
 */
union cavm_rfoex_rx_pkt_err_drop_stat
{
    uint64_t u;
    struct cavm_rfoex_rx_pkt_err_drop_stat_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_48_63        : 16;
        uint64_t stat                  : 48; /**< [ 47:  0](R/W/H) The counter value. Wraps to zero at 2^48. */
#else /* Word 0 - Little Endian */
        uint64_t stat                  : 48; /**< [ 47:  0](R/W/H) The counter value. Wraps to zero at 2^48. */
        uint64_t reserved_48_63        : 16;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_rfoex_rx_pkt_err_drop_stat_s cn; */
};
typedef union cavm_rfoex_rx_pkt_err_drop_stat cavm_rfoex_rx_pkt_err_drop_stat_t;

static inline uint64_t CAVM_RFOEX_RX_PKT_ERR_DROP_STAT(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_RFOEX_RX_PKT_ERR_DROP_STAT(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_ODINMP) && (a<=6))
        return 0x861000001d38ll + 0x1000000ll * ((a) & 0x7);
    __cavm_csr_fatal("RFOEX_RX_PKT_ERR_DROP_STAT", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_RFOEX_RX_PKT_ERR_DROP_STAT(a) cavm_rfoex_rx_pkt_err_drop_stat_t
#define bustype_CAVM_RFOEX_RX_PKT_ERR_DROP_STAT(a) CSR_TYPE_NCB
#define basename_CAVM_RFOEX_RX_PKT_ERR_DROP_STAT(a) "RFOEX_RX_PKT_ERR_DROP_STAT"
#define busnum_CAVM_RFOEX_RX_PKT_ERR_DROP_STAT(a) (a)
#define arguments_CAVM_RFOEX_RX_PKT_ERR_DROP_STAT(a) (a),-1,-1,-1

/**
 * Register (NCB) rfoe#_rx_pkt_len_cfg#
 *
 * RFOE RX  Min-Max Packet Length Configuration Register
 * Per LMAC MIN/MAX Packet Length Configuration for Error Check. Length check is number
 * of bytes received from MAC, excluding PTP.
 */
union cavm_rfoex_rx_pkt_len_cfgx
{
    uint64_t u;
    struct cavm_rfoex_rx_pkt_len_cfgx_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_32_63        : 32;
        uint64_t len_max               : 16; /**< [ 31: 16](R/W) Maximum packet length. If incoming packet length is greater than [LEN_MAX],
                                                                 set Interrupt RFOE()_RX_ERROR_INT[PKT_LEN_RANGE] and indicate error in
                                                                 RFOE_PSW_S[MAC_ERR_STS]\<4\>. */
        uint64_t len_min               : 16; /**< [ 15:  0](R/W) Minimum packet length. If incoming packet length is less than [LEN_MIN],
                                                                 set Interrupt RFOE()_RX_ERROR_INT[PKT_LEN_RANGE] and indicate error in
                                                                 RFOE_PSW_S[MAC_ERR_STS]\<4\>. */
#else /* Word 0 - Little Endian */
        uint64_t len_min               : 16; /**< [ 15:  0](R/W) Minimum packet length. If incoming packet length is less than [LEN_MIN],
                                                                 set Interrupt RFOE()_RX_ERROR_INT[PKT_LEN_RANGE] and indicate error in
                                                                 RFOE_PSW_S[MAC_ERR_STS]\<4\>. */
        uint64_t len_max               : 16; /**< [ 31: 16](R/W) Maximum packet length. If incoming packet length is greater than [LEN_MAX],
                                                                 set Interrupt RFOE()_RX_ERROR_INT[PKT_LEN_RANGE] and indicate error in
                                                                 RFOE_PSW_S[MAC_ERR_STS]\<4\>. */
        uint64_t reserved_32_63        : 32;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_rfoex_rx_pkt_len_cfgx_s cn; */
};
typedef union cavm_rfoex_rx_pkt_len_cfgx cavm_rfoex_rx_pkt_len_cfgx_t;

static inline uint64_t CAVM_RFOEX_RX_PKT_LEN_CFGX(uint64_t a, uint64_t b) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_RFOEX_RX_PKT_LEN_CFGX(uint64_t a, uint64_t b)
{
    if (cavm_is_model(OCTEONTX_ODINMP) && ((a<=6) && (b<=3)))
        return 0x861000001880ll + 0x1000000ll * ((a) & 0x7) + 8ll * ((b) & 0x3);
    __cavm_csr_fatal("RFOEX_RX_PKT_LEN_CFGX", 2, a, b, 0, 0, 0, 0);
}

#define typedef_CAVM_RFOEX_RX_PKT_LEN_CFGX(a,b) cavm_rfoex_rx_pkt_len_cfgx_t
#define bustype_CAVM_RFOEX_RX_PKT_LEN_CFGX(a,b) CSR_TYPE_NCB
#define basename_CAVM_RFOEX_RX_PKT_LEN_CFGX(a,b) "RFOEX_RX_PKT_LEN_CFGX"
#define busnum_CAVM_RFOEX_RX_PKT_LEN_CFGX(a,b) (a)
#define arguments_CAVM_RFOEX_RX_PKT_LEN_CFGX(a,b) (a),(b),-1,-1

/**
 * Register (NCB) rfoe#_rx_pkt_logger#_addr
 *
 * RFOE RX Packet Logger Buffer Address Register
 * Defines start address for packet logger circular buffer.
 * Index {b} enumerated by RFOE_RX_PKT_LOGGER_IDX_E.
 */
union cavm_rfoex_rx_pkt_loggerx_addr
{
    uint64_t u;
    struct cavm_rfoex_rx_pkt_loggerx_addr_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t gmid                  : 3;  /**< [ 63: 61](R/W) Guest machine ID used for this Packet Logger. Sent on all RX DMA requests. */
        uint64_t reserved_53_60        : 8;
        uint64_t start_addr            : 53; /**< [ 52:  0](R/W) Specifies the byte address of the start of the write DMA.
                                                                 * If RFOE()_RX_PKT_LOGGER()_CFG[TARGET_MEM] = 0, the address  must be
                                                                 128-bit aligned (i.e., bits[3:0] must be 0).
                                                                 * If RFOE()_RX_PKT_LOGGER()_CFG[TARGET_MEM] = 1, the address  must be
                                                                 128-byte aligned (i.e., bits[6:0] must be 0). */
#else /* Word 0 - Little Endian */
        uint64_t start_addr            : 53; /**< [ 52:  0](R/W) Specifies the byte address of the start of the write DMA.
                                                                 * If RFOE()_RX_PKT_LOGGER()_CFG[TARGET_MEM] = 0, the address  must be
                                                                 128-bit aligned (i.e., bits[3:0] must be 0).
                                                                 * If RFOE()_RX_PKT_LOGGER()_CFG[TARGET_MEM] = 1, the address  must be
                                                                 128-byte aligned (i.e., bits[6:0] must be 0). */
        uint64_t reserved_53_60        : 8;
        uint64_t gmid                  : 3;  /**< [ 63: 61](R/W) Guest machine ID used for this Packet Logger. Sent on all RX DMA requests. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_rfoex_rx_pkt_loggerx_addr_s cn; */
};
typedef union cavm_rfoex_rx_pkt_loggerx_addr cavm_rfoex_rx_pkt_loggerx_addr_t;

static inline uint64_t CAVM_RFOEX_RX_PKT_LOGGERX_ADDR(uint64_t a, uint64_t b) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_RFOEX_RX_PKT_LOGGERX_ADDR(uint64_t a, uint64_t b)
{
    if (cavm_is_model(OCTEONTX_ODINMP) && ((a<=6) && (b<=1)))
        return 0x861000001020ll + 0x1000000ll * ((a) & 0x7) + 8ll * ((b) & 0x1);
    __cavm_csr_fatal("RFOEX_RX_PKT_LOGGERX_ADDR", 2, a, b, 0, 0, 0, 0);
}

#define typedef_CAVM_RFOEX_RX_PKT_LOGGERX_ADDR(a,b) cavm_rfoex_rx_pkt_loggerx_addr_t
#define bustype_CAVM_RFOEX_RX_PKT_LOGGERX_ADDR(a,b) CSR_TYPE_NCB
#define basename_CAVM_RFOEX_RX_PKT_LOGGERX_ADDR(a,b) "RFOEX_RX_PKT_LOGGERX_ADDR"
#define busnum_CAVM_RFOEX_RX_PKT_LOGGERX_ADDR(a,b) (a)
#define arguments_CAVM_RFOEX_RX_PKT_LOGGERX_ADDR(a,b) (a),(b),-1,-1

/**
 * Register (NCB) rfoe#_rx_pkt_logger#_cfg
 *
 * RFOE RX Packet Logger Buffer Configuration  Register
 * Defines configuration for packet logger circular buffer.
 * Index {b} enumerated by RFOE_RX_PKT_LOGGER_IDX_E.
 */
union cavm_rfoex_rx_pkt_loggerx_cfg
{
    uint64_t u;
    struct cavm_rfoex_rx_pkt_loggerx_cfg_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t target_mem            : 1;  /**< [ 63: 63](R/W) Specifies the target memory for the log buffer.
                                                                 0 = SMEM.
                                                                 1 = LLC/DRAM. */
        uint64_t reserved_62           : 1;
        uint64_t cmd_type              : 2;  /**< [ 61: 60](R/W) Command type for LLC/DRAM write, as enumerated by MHBW_PNB_WR_CMD_E.

                                                                 Note:
                                                                 * Writes to BPHY SMEM ignore this field.
                                                                 * Unaligned or partial cacheline writes always use MHBW_PNB_WR_CMD_E::STP. */
        uint64_t reserved_59           : 1;
        uint64_t dswap                 : 3;  /**< [ 58: 56](R/W) The byte swap mode for DMA to LLC/DRAM. Enumerated in MHBW_PNB_DSWAP_E.
                                                                 DMA to BPHY SMEM ignores this field. */
        uint64_t reserved_53_55        : 3;
        uint64_t tail_idx              : 17; /**< [ 52: 36](RO/H) Index for the next logger status write, in units of 16 bytes.
                                                                 * Newest logger entry is at ([TAIL_IDX]-1) mod [SIZE].
                                                                 * Address in memory is RFOE()_RX_PKT_LOGGER()_ADDR +
                                                                 (([TAIL_IDX]-1) mod [SIZE])*16 bytes.
                                                                 * Newest is not valid after reset since nothing has been written to packet logger in memory. */
        uint64_t reserved_35           : 1;
        uint64_t flush_done            : 1;  /**< [ 34: 34](RO/H) Cleared on a write to[FLUSH]=1.  Set when the
                                                                 packet logger buffer has been flushed to memory.
                                                                 * Indicates that all logger write requests have been issued from RFOE.
                                                                 * Does not guarantee return of all commits. */
        uint64_t flush                 : 1;  /**< [ 33: 33](R/W/H) On a write with [FLUSH]=1, hardware flushes the internal packet log FIFO to
                                                                 memory. Hardware clears when flush operation completes as indicated by
                                                                 [FLUSH_DONE] == 1. */
        uint64_t enable                : 1;  /**< [ 32: 32](R/W) Enable receive packet logging.
                                                                 0 = Disabled.
                                                                 1 = Enable packet logging.

                                                                 When enabled, each RoE subtype 0xFD packet with EOS set generates a log
                                                                 entry. All other packets generate a log entry for each packet.

                                                                 Logger entries for packets already started will be completed and written
                                                                 normally.  If a flush is desired,
                                                                 write [FLUSH] = 1 to force all waiting entries to memory.

                                                                 Software should only change logger configuration when logger is idle, logger
                                                                 FIFO empty (ie. flushed) and [ENABLE] = 0.

                                                                 Ignored for the TX packet logger ({b} = RFOE_RX_PKT_LOGGER_IDX_E::TX_PKT).
                                                                 The TX packet logger is enabled by RFOE()_TX_LMAC_CFG()[TX_PKT_LOG_EN]. */
        uint64_t ddr_wait_cycles       : 12; /**< [ 31: 20](R/W) Used when [TARGET_MEM]=1.  No action when [TARGET_MEM]=0.
                                                                 Maximum time for coalescing log writes to LLC/DRAM. Up to 128 bytes of
                                                                 log entries are coalesced before writing to LLC/DRAM. After
                                                                 [DDR_WAIT_CYCLES]*16 cycles with no new log entries, any buffered
                                                                 entries are written to memory.

                                                                 The reset value of 0x80 results in a time of 2 us when BCLK is 1 GHz.

                                                                 Setting [DDR_WAIT_CYCLES]=0 disables the timer, and the logger will
                                                                 wait indefinitely to collect 128 bytes of log entries before writing
                                                                 to LLC/DRAM.

                                                                 Ignored when [TARGET_MEM]=0. */
        uint64_t reserved_17_19        : 3;
        uint64_t size                  : 17; /**< [ 16:  0](R/W) Total size of the log buffer in units of 128 bits. Must have [SIZE] \> 0.
                                                                 If RFOE()_RX_PKT_LOGGER()_CFG[TARGET_MEM]=1, [SIZE] must be a multiple
                                                                 of 8 (i.e., the size must be a multiple of 128 bytes). */
#else /* Word 0 - Little Endian */
        uint64_t size                  : 17; /**< [ 16:  0](R/W) Total size of the log buffer in units of 128 bits. Must have [SIZE] \> 0.
                                                                 If RFOE()_RX_PKT_LOGGER()_CFG[TARGET_MEM]=1, [SIZE] must be a multiple
                                                                 of 8 (i.e., the size must be a multiple of 128 bytes). */
        uint64_t reserved_17_19        : 3;
        uint64_t ddr_wait_cycles       : 12; /**< [ 31: 20](R/W) Used when [TARGET_MEM]=1.  No action when [TARGET_MEM]=0.
                                                                 Maximum time for coalescing log writes to LLC/DRAM. Up to 128 bytes of
                                                                 log entries are coalesced before writing to LLC/DRAM. After
                                                                 [DDR_WAIT_CYCLES]*16 cycles with no new log entries, any buffered
                                                                 entries are written to memory.

                                                                 The reset value of 0x80 results in a time of 2 us when BCLK is 1 GHz.

                                                                 Setting [DDR_WAIT_CYCLES]=0 disables the timer, and the logger will
                                                                 wait indefinitely to collect 128 bytes of log entries before writing
                                                                 to LLC/DRAM.

                                                                 Ignored when [TARGET_MEM]=0. */
        uint64_t enable                : 1;  /**< [ 32: 32](R/W) Enable receive packet logging.
                                                                 0 = Disabled.
                                                                 1 = Enable packet logging.

                                                                 When enabled, each RoE subtype 0xFD packet with EOS set generates a log
                                                                 entry. All other packets generate a log entry for each packet.

                                                                 Logger entries for packets already started will be completed and written
                                                                 normally.  If a flush is desired,
                                                                 write [FLUSH] = 1 to force all waiting entries to memory.

                                                                 Software should only change logger configuration when logger is idle, logger
                                                                 FIFO empty (ie. flushed) and [ENABLE] = 0.

                                                                 Ignored for the TX packet logger ({b} = RFOE_RX_PKT_LOGGER_IDX_E::TX_PKT).
                                                                 The TX packet logger is enabled by RFOE()_TX_LMAC_CFG()[TX_PKT_LOG_EN]. */
        uint64_t flush                 : 1;  /**< [ 33: 33](R/W/H) On a write with [FLUSH]=1, hardware flushes the internal packet log FIFO to
                                                                 memory. Hardware clears when flush operation completes as indicated by
                                                                 [FLUSH_DONE] == 1. */
        uint64_t flush_done            : 1;  /**< [ 34: 34](RO/H) Cleared on a write to[FLUSH]=1.  Set when the
                                                                 packet logger buffer has been flushed to memory.
                                                                 * Indicates that all logger write requests have been issued from RFOE.
                                                                 * Does not guarantee return of all commits. */
        uint64_t reserved_35           : 1;
        uint64_t tail_idx              : 17; /**< [ 52: 36](RO/H) Index for the next logger status write, in units of 16 bytes.
                                                                 * Newest logger entry is at ([TAIL_IDX]-1) mod [SIZE].
                                                                 * Address in memory is RFOE()_RX_PKT_LOGGER()_ADDR +
                                                                 (([TAIL_IDX]-1) mod [SIZE])*16 bytes.
                                                                 * Newest is not valid after reset since nothing has been written to packet logger in memory. */
        uint64_t reserved_53_55        : 3;
        uint64_t dswap                 : 3;  /**< [ 58: 56](R/W) The byte swap mode for DMA to LLC/DRAM. Enumerated in MHBW_PNB_DSWAP_E.
                                                                 DMA to BPHY SMEM ignores this field. */
        uint64_t reserved_59           : 1;
        uint64_t cmd_type              : 2;  /**< [ 61: 60](R/W) Command type for LLC/DRAM write, as enumerated by MHBW_PNB_WR_CMD_E.

                                                                 Note:
                                                                 * Writes to BPHY SMEM ignore this field.
                                                                 * Unaligned or partial cacheline writes always use MHBW_PNB_WR_CMD_E::STP. */
        uint64_t reserved_62           : 1;
        uint64_t target_mem            : 1;  /**< [ 63: 63](R/W) Specifies the target memory for the log buffer.
                                                                 0 = SMEM.
                                                                 1 = LLC/DRAM. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_rfoex_rx_pkt_loggerx_cfg_s cn; */
};
typedef union cavm_rfoex_rx_pkt_loggerx_cfg cavm_rfoex_rx_pkt_loggerx_cfg_t;

static inline uint64_t CAVM_RFOEX_RX_PKT_LOGGERX_CFG(uint64_t a, uint64_t b) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_RFOEX_RX_PKT_LOGGERX_CFG(uint64_t a, uint64_t b)
{
    if (cavm_is_model(OCTEONTX_ODINMP) && ((a<=6) && (b<=1)))
        return 0x861000001030ll + 0x1000000ll * ((a) & 0x7) + 8ll * ((b) & 0x1);
    __cavm_csr_fatal("RFOEX_RX_PKT_LOGGERX_CFG", 2, a, b, 0, 0, 0, 0);
}

#define typedef_CAVM_RFOEX_RX_PKT_LOGGERX_CFG(a,b) cavm_rfoex_rx_pkt_loggerx_cfg_t
#define bustype_CAVM_RFOEX_RX_PKT_LOGGERX_CFG(a,b) CSR_TYPE_NCB
#define basename_CAVM_RFOEX_RX_PKT_LOGGERX_CFG(a,b) "RFOEX_RX_PKT_LOGGERX_CFG"
#define busnum_CAVM_RFOEX_RX_PKT_LOGGERX_CFG(a,b) (a)
#define arguments_CAVM_RFOEX_RX_PKT_LOGGERX_CFG(a,b) (a),(b),-1,-1

/**
 * Register (NCB) rfoe#_rx_rpm_octs_stat#
 *
 * RFOE RX Received Byte Statistic Register
 * Number of octets received from RPM on enabled interface
 * (RFOE()_RX_CTRL[DATA_PKT_RX_EN]=1). Per LMAC.
 */
union cavm_rfoex_rx_rpm_octs_statx
{
    uint64_t u;
    struct cavm_rfoex_rx_rpm_octs_statx_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_48_63        : 16;
        uint64_t stat                  : 48; /**< [ 47:  0](R/W/H) Number of octets received from RPM. Wraps to zero at 2^48.
                                                                 Excludes RFOE()_RX_ERROR_INT[MALFORMED_X2P_PKT] bytes.
                                                                 Excludes bytes received when RX is disabled by RFOE()_RX_CTRL[DATA_PKT_RX_EN]=0. */
#else /* Word 0 - Little Endian */
        uint64_t stat                  : 48; /**< [ 47:  0](R/W/H) Number of octets received from RPM. Wraps to zero at 2^48.
                                                                 Excludes RFOE()_RX_ERROR_INT[MALFORMED_X2P_PKT] bytes.
                                                                 Excludes bytes received when RX is disabled by RFOE()_RX_CTRL[DATA_PKT_RX_EN]=0. */
        uint64_t reserved_48_63        : 16;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_rfoex_rx_rpm_octs_statx_s cn; */
};
typedef union cavm_rfoex_rx_rpm_octs_statx cavm_rfoex_rx_rpm_octs_statx_t;

static inline uint64_t CAVM_RFOEX_RX_RPM_OCTS_STATX(uint64_t a, uint64_t b) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_RFOEX_RX_RPM_OCTS_STATX(uint64_t a, uint64_t b)
{
    if (cavm_is_model(OCTEONTX_ODINMP) && ((a<=6) && (b<=3)))
        return 0x861000001de0ll + 0x1000000ll * ((a) & 0x7) + 8ll * ((b) & 0x3);
    __cavm_csr_fatal("RFOEX_RX_RPM_OCTS_STATX", 2, a, b, 0, 0, 0, 0);
}

#define typedef_CAVM_RFOEX_RX_RPM_OCTS_STATX(a,b) cavm_rfoex_rx_rpm_octs_statx_t
#define bustype_CAVM_RFOEX_RX_RPM_OCTS_STATX(a,b) CSR_TYPE_NCB
#define basename_CAVM_RFOEX_RX_RPM_OCTS_STATX(a,b) "RFOEX_RX_RPM_OCTS_STATX"
#define busnum_CAVM_RFOEX_RX_RPM_OCTS_STATX(a,b) (a)
#define arguments_CAVM_RFOEX_RX_RPM_OCTS_STATX(a,b) (a),(b),-1,-1

/**
 * Register (NCB) rfoe#_rx_rpm_pkt_stat#
 *
 * RFOE RX  Packet Received  Count Statistic Register
 * Number of packets received from MAC on enabled interface
 * (RFOE()_RX_CTRL[DATA_PKT_RX_EN]=1). One for each source LMAC.
 */
union cavm_rfoex_rx_rpm_pkt_statx
{
    uint64_t u;
    struct cavm_rfoex_rx_rpm_pkt_statx_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_48_63        : 16;
        uint64_t stat                  : 48; /**< [ 47:  0](R/W/H) The counter value, increments on EOP transfers. Wraps to zero at 2^48.
                                                                 Excludes  RFOE()_RX_ERROR_INT[MALFORMED_X2P_PKT] packets.
                                                                 Excludes packets received when RX is disabled by RFOE()_RX_CTRL[DATA_PKT_RX_EN]=0 . */
#else /* Word 0 - Little Endian */
        uint64_t stat                  : 48; /**< [ 47:  0](R/W/H) The counter value, increments on EOP transfers. Wraps to zero at 2^48.
                                                                 Excludes  RFOE()_RX_ERROR_INT[MALFORMED_X2P_PKT] packets.
                                                                 Excludes packets received when RX is disabled by RFOE()_RX_CTRL[DATA_PKT_RX_EN]=0 . */
        uint64_t reserved_48_63        : 16;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_rfoex_rx_rpm_pkt_statx_s cn; */
};
typedef union cavm_rfoex_rx_rpm_pkt_statx cavm_rfoex_rx_rpm_pkt_statx_t;

static inline uint64_t CAVM_RFOEX_RX_RPM_PKT_STATX(uint64_t a, uint64_t b) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_RFOEX_RX_RPM_PKT_STATX(uint64_t a, uint64_t b)
{
    if (cavm_is_model(OCTEONTX_ODINMP) && ((a<=6) && (b<=3)))
        return 0x861000001dc0ll + 0x1000000ll * ((a) & 0x7) + 8ll * ((b) & 0x3);
    __cavm_csr_fatal("RFOEX_RX_RPM_PKT_STATX", 2, a, b, 0, 0, 0, 0);
}

#define typedef_CAVM_RFOEX_RX_RPM_PKT_STATX(a,b) cavm_rfoex_rx_rpm_pkt_statx_t
#define bustype_CAVM_RFOEX_RX_RPM_PKT_STATX(a,b) CSR_TYPE_NCB
#define basename_CAVM_RFOEX_RX_RPM_PKT_STATX(a,b) "RFOEX_RX_RPM_PKT_STATX"
#define busnum_CAVM_RFOEX_RX_RPM_PKT_STATX(a,b) (a)
#define arguments_CAVM_RFOEX_RX_RPM_PKT_STATX(a,b) (a),(b),-1,-1

/**
 * Register (NCB) rfoe#_rx_status
 *
 * RFOE RX General Status Register
 * General receive status.
 */
union cavm_rfoex_rx_status
{
    uint64_t u;
    struct cavm_rfoex_rx_status_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_17_63        : 47;
        uint64_t calibrate_status      : 1;  /**< [ 16: 16](RO/H) X2P device calibration state bit per x2p interface.
                                                                 0 = Device inactive.
                                                                 1 = Device ready. */
        uint64_t reserved_11_15        : 5;
        uint64_t calibrate_done        : 1;  /**< [ 10: 10](RO/H) Calibrate cycle is complete. */
        uint64_t blk_active            : 10; /**< [  9:  0](RO/H) If nonzero, block is active. */
#else /* Word 0 - Little Endian */
        uint64_t blk_active            : 10; /**< [  9:  0](RO/H) If nonzero, block is active. */
        uint64_t calibrate_done        : 1;  /**< [ 10: 10](RO/H) Calibrate cycle is complete. */
        uint64_t reserved_11_15        : 5;
        uint64_t calibrate_status      : 1;  /**< [ 16: 16](RO/H) X2P device calibration state bit per x2p interface.
                                                                 0 = Device inactive.
                                                                 1 = Device ready. */
        uint64_t reserved_17_63        : 47;
#endif /* Word 0 - End */
    } s;
    struct cavm_rfoex_rx_status_cn
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_32_63        : 32;
        uint64_t reserved_17_31        : 15;
        uint64_t calibrate_status      : 1;  /**< [ 16: 16](RO/H) X2P device calibration state bit per x2p interface.
                                                                 0 = Device inactive.
                                                                 1 = Device ready. */
        uint64_t reserved_11_15        : 5;
        uint64_t calibrate_done        : 1;  /**< [ 10: 10](RO/H) Calibrate cycle is complete. */
        uint64_t blk_active            : 10; /**< [  9:  0](RO/H) If nonzero, block is active. */
#else /* Word 0 - Little Endian */
        uint64_t blk_active            : 10; /**< [  9:  0](RO/H) If nonzero, block is active. */
        uint64_t calibrate_done        : 1;  /**< [ 10: 10](RO/H) Calibrate cycle is complete. */
        uint64_t reserved_11_15        : 5;
        uint64_t calibrate_status      : 1;  /**< [ 16: 16](RO/H) X2P device calibration state bit per x2p interface.
                                                                 0 = Device inactive.
                                                                 1 = Device ready. */
        uint64_t reserved_17_31        : 15;
        uint64_t reserved_32_63        : 32;
#endif /* Word 0 - End */
    } cn;
};
typedef union cavm_rfoex_rx_status cavm_rfoex_rx_status_t;

static inline uint64_t CAVM_RFOEX_RX_STATUS(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_RFOEX_RX_STATUS(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_ODINMP) && (a<=6))
        return 0x861000001010ll + 0x1000000ll * ((a) & 0x7);
    __cavm_csr_fatal("RFOEX_RX_STATUS", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_RFOEX_RX_STATUS(a) cavm_rfoex_rx_status_t
#define bustype_CAVM_RFOEX_RX_STATUS(a) CSR_TYPE_NCB
#define basename_CAVM_RFOEX_RX_STATUS(a) "RFOEX_RX_STATUS"
#define busnum_CAVM_RFOEX_RX_STATUS(a) (a)
#define arguments_CAVM_RFOEX_RX_STATUS(a) (a),-1,-1,-1

/**
 * Register (NCB) rfoe#_rx_sw_tbl_bc_miss_sts#
 *
 * RFOE RX Switch Table Broadcast Miss Stats Register
 */
union cavm_rfoex_rx_sw_tbl_bc_miss_stsx
{
    uint64_t u;
    struct cavm_rfoex_rx_sw_tbl_bc_miss_stsx_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t count                 : 64; /**< [ 63:  0](R/W/H) Switch table broadcast miss count. */
#else /* Word 0 - Little Endian */
        uint64_t count                 : 64; /**< [ 63:  0](R/W/H) Switch table broadcast miss count. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_rfoex_rx_sw_tbl_bc_miss_stsx_s cn; */
};
typedef union cavm_rfoex_rx_sw_tbl_bc_miss_stsx cavm_rfoex_rx_sw_tbl_bc_miss_stsx_t;

static inline uint64_t CAVM_RFOEX_RX_SW_TBL_BC_MISS_STSX(uint64_t a, uint64_t b) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_RFOEX_RX_SW_TBL_BC_MISS_STSX(uint64_t a, uint64_t b)
{
    if (cavm_is_model(OCTEONTX_ODINMP) && ((a<=6) && (b<=3)))
        return 0x861000013220ll + 0x1000000ll * ((a) & 0x7) + 8ll * ((b) & 0x3);
    __cavm_csr_fatal("RFOEX_RX_SW_TBL_BC_MISS_STSX", 2, a, b, 0, 0, 0, 0);
}

#define typedef_CAVM_RFOEX_RX_SW_TBL_BC_MISS_STSX(a,b) cavm_rfoex_rx_sw_tbl_bc_miss_stsx_t
#define bustype_CAVM_RFOEX_RX_SW_TBL_BC_MISS_STSX(a,b) CSR_TYPE_NCB
#define basename_CAVM_RFOEX_RX_SW_TBL_BC_MISS_STSX(a,b) "RFOEX_RX_SW_TBL_BC_MISS_STSX"
#define busnum_CAVM_RFOEX_RX_SW_TBL_BC_MISS_STSX(a,b) (a)
#define arguments_CAVM_RFOEX_RX_SW_TBL_BC_MISS_STSX(a,b) (a),(b),-1,-1

/**
 * Register (NCB) rfoe#_rx_sw_tbl_cfg_hit_sts
 *
 * RFOE RX Switch Table Hit Status Aging Register
 * Switch Table Aging Hit Status Register.
 */
union cavm_rfoex_rx_sw_tbl_cfg_hit_sts
{
    uint64_t u;
    struct cavm_rfoex_rx_sw_tbl_cfg_hit_sts_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t hit                   : 64; /**< [ 63:  0](R/W1C/H) Switch Table entry hit status for entries 0-63.
                                                                 Hardware set to 1 to indicate that Switch Table Entry was matched.
                                                                 Software can clear the hit status for a switch table entry by writing a 1. */
#else /* Word 0 - Little Endian */
        uint64_t hit                   : 64; /**< [ 63:  0](R/W1C/H) Switch Table entry hit status for entries 0-63.
                                                                 Hardware set to 1 to indicate that Switch Table Entry was matched.
                                                                 Software can clear the hit status for a switch table entry by writing a 1. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_rfoex_rx_sw_tbl_cfg_hit_sts_s cn; */
};
typedef union cavm_rfoex_rx_sw_tbl_cfg_hit_sts cavm_rfoex_rx_sw_tbl_cfg_hit_sts_t;

static inline uint64_t CAVM_RFOEX_RX_SW_TBL_CFG_HIT_STS(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_RFOEX_RX_SW_TBL_CFG_HIT_STS(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_ODINMP) && (a<=6))
        return 0x861000013280ll + 0x1000000ll * ((a) & 0x7);
    __cavm_csr_fatal("RFOEX_RX_SW_TBL_CFG_HIT_STS", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_RFOEX_RX_SW_TBL_CFG_HIT_STS(a) cavm_rfoex_rx_sw_tbl_cfg_hit_sts_t
#define bustype_CAVM_RFOEX_RX_SW_TBL_CFG_HIT_STS(a) CSR_TYPE_NCB
#define basename_CAVM_RFOEX_RX_SW_TBL_CFG_HIT_STS(a) "RFOEX_RX_SW_TBL_CFG_HIT_STS"
#define busnum_CAVM_RFOEX_RX_SW_TBL_CFG_HIT_STS(a) (a)
#define arguments_CAVM_RFOEX_RX_SW_TBL_CFG_HIT_STS(a) (a),-1,-1,-1

/**
 * Register (NCB) rfoe#_rx_sw_tbl_cfg_vld#
 *
 * RFOE RX Switch Table Configuration Valid Register
 * Enables Switch Table entry for an LMAC for entries 0-63. One register per LMAC.
 */
union cavm_rfoex_rx_sw_tbl_cfg_vldx
{
    uint64_t u;
    struct cavm_rfoex_rx_sw_tbl_cfg_vldx_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t vld                   : 64; /**< [ 63:  0](R/W) Valid bits for Switch Table entries 0-63 for a particular LMAC. */
#else /* Word 0 - Little Endian */
        uint64_t vld                   : 64; /**< [ 63:  0](R/W) Valid bits for Switch Table entries 0-63 for a particular LMAC. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_rfoex_rx_sw_tbl_cfg_vldx_s cn; */
};
typedef union cavm_rfoex_rx_sw_tbl_cfg_vldx cavm_rfoex_rx_sw_tbl_cfg_vldx_t;

static inline uint64_t CAVM_RFOEX_RX_SW_TBL_CFG_VLDX(uint64_t a, uint64_t b) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_RFOEX_RX_SW_TBL_CFG_VLDX(uint64_t a, uint64_t b)
{
    if (cavm_is_model(OCTEONTX_ODINMP) && ((a<=6) && (b<=3)))
        return 0x861000013120ll + 0x1000000ll * ((a) & 0x7) + 8ll * ((b) & 0x3);
    __cavm_csr_fatal("RFOEX_RX_SW_TBL_CFG_VLDX", 2, a, b, 0, 0, 0, 0);
}

#define typedef_CAVM_RFOEX_RX_SW_TBL_CFG_VLDX(a,b) cavm_rfoex_rx_sw_tbl_cfg_vldx_t
#define bustype_CAVM_RFOEX_RX_SW_TBL_CFG_VLDX(a,b) CSR_TYPE_NCB
#define basename_CAVM_RFOEX_RX_SW_TBL_CFG_VLDX(a,b) "RFOEX_RX_SW_TBL_CFG_VLDX"
#define busnum_CAVM_RFOEX_RX_SW_TBL_CFG_VLDX(a,b) (a)
#define arguments_CAVM_RFOEX_RX_SW_TBL_CFG_VLDX(a,b) (a),(b),-1,-1

/**
 * Register (NCB) rfoe#_rx_sw_tbl_da_msk#
 *
 * RFOE RX Switch Table Destination Address Mask Register
 * Switch Table Destination Address Mask. One register per LMAC.
 */
union cavm_rfoex_rx_sw_tbl_da_mskx
{
    uint64_t u;
    struct cavm_rfoex_rx_sw_tbl_da_mskx_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t vid_mask              : 12; /**< [ 63: 52](R/W) Destination VLAN ID Switch Table Lookup match is Masked with VID_MASK.
                                                                 One mask per source LMAC. */
        uint64_t reserved_48_51        : 4;
        uint64_t addr_mask             : 48; /**< [ 47:  0](R/W) Destination Address Switch Table Lookup match is Masked with ADDR_MASK.
                                                                 One address mask per source LMAC. */
#else /* Word 0 - Little Endian */
        uint64_t addr_mask             : 48; /**< [ 47:  0](R/W) Destination Address Switch Table Lookup match is Masked with ADDR_MASK.
                                                                 One address mask per source LMAC. */
        uint64_t reserved_48_51        : 4;
        uint64_t vid_mask              : 12; /**< [ 63: 52](R/W) Destination VLAN ID Switch Table Lookup match is Masked with VID_MASK.
                                                                 One mask per source LMAC. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_rfoex_rx_sw_tbl_da_mskx_s cn; */
};
typedef union cavm_rfoex_rx_sw_tbl_da_mskx cavm_rfoex_rx_sw_tbl_da_mskx_t;

static inline uint64_t CAVM_RFOEX_RX_SW_TBL_DA_MSKX(uint64_t a, uint64_t b) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_RFOEX_RX_SW_TBL_DA_MSKX(uint64_t a, uint64_t b)
{
    if (cavm_is_model(OCTEONTX_ODINMP) && ((a<=6) && (b<=3)))
        return 0x861000013400ll + 0x1000000ll * ((a) & 0x7) + 8ll * ((b) & 0x3);
    __cavm_csr_fatal("RFOEX_RX_SW_TBL_DA_MSKX", 2, a, b, 0, 0, 0, 0);
}

#define typedef_CAVM_RFOEX_RX_SW_TBL_DA_MSKX(a,b) cavm_rfoex_rx_sw_tbl_da_mskx_t
#define bustype_CAVM_RFOEX_RX_SW_TBL_DA_MSKX(a,b) CSR_TYPE_NCB
#define basename_CAVM_RFOEX_RX_SW_TBL_DA_MSKX(a,b) "RFOEX_RX_SW_TBL_DA_MSKX"
#define busnum_CAVM_RFOEX_RX_SW_TBL_DA_MSKX(a,b) (a)
#define arguments_CAVM_RFOEX_RX_SW_TBL_DA_MSKX(a,b) (a),(b),-1,-1

/**
 * Register (NCB) rfoe#_rx_sw_tbl_mc_miss_sts#
 *
 * RFOE RX Switch Table Multicast Miss Stats Register
 */
union cavm_rfoex_rx_sw_tbl_mc_miss_stsx
{
    uint64_t u;
    struct cavm_rfoex_rx_sw_tbl_mc_miss_stsx_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t count                 : 64; /**< [ 63:  0](R/W/H) Switch table multicast miss count. One register per LMAC. */
#else /* Word 0 - Little Endian */
        uint64_t count                 : 64; /**< [ 63:  0](R/W/H) Switch table multicast miss count. One register per LMAC. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_rfoex_rx_sw_tbl_mc_miss_stsx_s cn; */
};
typedef union cavm_rfoex_rx_sw_tbl_mc_miss_stsx cavm_rfoex_rx_sw_tbl_mc_miss_stsx_t;

static inline uint64_t CAVM_RFOEX_RX_SW_TBL_MC_MISS_STSX(uint64_t a, uint64_t b) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_RFOEX_RX_SW_TBL_MC_MISS_STSX(uint64_t a, uint64_t b)
{
    if (cavm_is_model(OCTEONTX_ODINMP) && ((a<=6) && (b<=3)))
        return 0x861000013200ll + 0x1000000ll * ((a) & 0x7) + 8ll * ((b) & 0x3);
    __cavm_csr_fatal("RFOEX_RX_SW_TBL_MC_MISS_STSX", 2, a, b, 0, 0, 0, 0);
}

#define typedef_CAVM_RFOEX_RX_SW_TBL_MC_MISS_STSX(a,b) cavm_rfoex_rx_sw_tbl_mc_miss_stsx_t
#define bustype_CAVM_RFOEX_RX_SW_TBL_MC_MISS_STSX(a,b) CSR_TYPE_NCB
#define basename_CAVM_RFOEX_RX_SW_TBL_MC_MISS_STSX(a,b) "RFOEX_RX_SW_TBL_MC_MISS_STSX"
#define busnum_CAVM_RFOEX_RX_SW_TBL_MC_MISS_STSX(a,b) (a)
#define arguments_CAVM_RFOEX_RX_SW_TBL_MC_MISS_STSX(a,b) (a),(b),-1,-1

/**
 * Register (NCB) rfoe#_rx_sw_tbl_miss_def_act#
 *
 * RFOE RX Switch Table Miss Default Action Register
 * Switch Table Miss Default Actions. One register per LMAC.
 */
union cavm_rfoex_rx_sw_tbl_miss_def_actx
{
    uint64_t u;
    struct cavm_rfoex_rx_sw_tbl_miss_def_actx_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_60_63        : 4;
        uint64_t mc_miss_check_en      : 1;  /**< [ 59: 59](R/W) Enables checking for switch defaults for multicast misses when set.
                                                                 When BC_MISS_CHECK_EN==0 and MC_MISS_CHECK_EN==1, the broadcast address (all ones)
                                                                 is classified as MultiCast.
                                                                 When BC_MISS_CHECK_EN==0 and MC_MISS_CHECK_EN==0, all BC and MC addresses are looked up
                                                                 in the switch table, similar to UniCast packets, and UC Miss defaults apply for misses. */
        uint64_t reserved_56_58        : 3;
        uint64_t mc_miss_dest_lmac_id  : 2;  /**< [ 55: 54](R/W) Specifies the destination LMAC ID for multicast misses. */
        uint64_t reserved_51_53        : 3;
        uint64_t mc_miss_fwd_flow_id   : 7;  /**< [ 50: 44](R/W) Specifies the forwarding flow_id used to lookup MBT_IDX and JDT_IDX for multicast misses. */
        uint64_t reserved_42_43        : 2;
        uint64_t mc_miss_action        : 2;  /**< [ 41: 40](R/W) Specifies default action on Multicast Miss. */
        uint64_t bc_miss_check_en      : 1;  /**< [ 39: 39](R/W) Enables checking for switch defaults for broadcast misses when set.
                                                                 When BC_MISS_CHECK_EN==0 and MC_MISS_CHECK_EN==1, the broadcast address (all ones)
                                                                 is classified as MultiCast.
                                                                 When BC_MISS_CHECK_EN==0 and MC_MISS_CHECK_EN==0, all BC and MC addresses are looked up
                                                                 in the switch table, similar to UniCast packets, and UC Miss defaults apply for misses. */
        uint64_t reserved_36_38        : 3;
        uint64_t bc_miss_dest_lmac_id  : 2;  /**< [ 35: 34](R/W) Specifies the destination LMAC ID for broadcast misses. */
        uint64_t reserved_31_33        : 3;
        uint64_t bc_miss_fwd_flow_id   : 7;  /**< [ 30: 24](R/W) Specifies the forwarding flow_id used to lookup MBT_IDX and JDT_IDX for broadcast misses. */
        uint64_t reserved_22_23        : 2;
        uint64_t bc_miss_action        : 2;  /**< [ 21: 20](R/W) Specifies default action on Broadcast Miss. */
        uint64_t uc_miss_check_en      : 1;  /**< [ 19: 19](R/W) Enables checking for switch defaults for unicast misses when set. */
        uint64_t reserved_16_18        : 3;
        uint64_t uc_miss_dest_lmac_id  : 2;  /**< [ 15: 14](R/W) Specifies the destination LMAC ID for unicast misses. */
        uint64_t reserved_11_13        : 3;
        uint64_t uc_miss_fwd_flow_id   : 7;  /**< [ 10:  4](R/W) Specifies the forwarding flow_id used to lookup MBT_IDX and JDT_IDX for unicast misses. */
        uint64_t reserved_2_3          : 2;
        uint64_t uc_miss_action        : 2;  /**< [  1:  0](R/W) Specifies default action on Unicast Miss. */
#else /* Word 0 - Little Endian */
        uint64_t uc_miss_action        : 2;  /**< [  1:  0](R/W) Specifies default action on Unicast Miss. */
        uint64_t reserved_2_3          : 2;
        uint64_t uc_miss_fwd_flow_id   : 7;  /**< [ 10:  4](R/W) Specifies the forwarding flow_id used to lookup MBT_IDX and JDT_IDX for unicast misses. */
        uint64_t reserved_11_13        : 3;
        uint64_t uc_miss_dest_lmac_id  : 2;  /**< [ 15: 14](R/W) Specifies the destination LMAC ID for unicast misses. */
        uint64_t reserved_16_18        : 3;
        uint64_t uc_miss_check_en      : 1;  /**< [ 19: 19](R/W) Enables checking for switch defaults for unicast misses when set. */
        uint64_t bc_miss_action        : 2;  /**< [ 21: 20](R/W) Specifies default action on Broadcast Miss. */
        uint64_t reserved_22_23        : 2;
        uint64_t bc_miss_fwd_flow_id   : 7;  /**< [ 30: 24](R/W) Specifies the forwarding flow_id used to lookup MBT_IDX and JDT_IDX for broadcast misses. */
        uint64_t reserved_31_33        : 3;
        uint64_t bc_miss_dest_lmac_id  : 2;  /**< [ 35: 34](R/W) Specifies the destination LMAC ID for broadcast misses. */
        uint64_t reserved_36_38        : 3;
        uint64_t bc_miss_check_en      : 1;  /**< [ 39: 39](R/W) Enables checking for switch defaults for broadcast misses when set.
                                                                 When BC_MISS_CHECK_EN==0 and MC_MISS_CHECK_EN==1, the broadcast address (all ones)
                                                                 is classified as MultiCast.
                                                                 When BC_MISS_CHECK_EN==0 and MC_MISS_CHECK_EN==0, all BC and MC addresses are looked up
                                                                 in the switch table, similar to UniCast packets, and UC Miss defaults apply for misses. */
        uint64_t mc_miss_action        : 2;  /**< [ 41: 40](R/W) Specifies default action on Multicast Miss. */
        uint64_t reserved_42_43        : 2;
        uint64_t mc_miss_fwd_flow_id   : 7;  /**< [ 50: 44](R/W) Specifies the forwarding flow_id used to lookup MBT_IDX and JDT_IDX for multicast misses. */
        uint64_t reserved_51_53        : 3;
        uint64_t mc_miss_dest_lmac_id  : 2;  /**< [ 55: 54](R/W) Specifies the destination LMAC ID for multicast misses. */
        uint64_t reserved_56_58        : 3;
        uint64_t mc_miss_check_en      : 1;  /**< [ 59: 59](R/W) Enables checking for switch defaults for multicast misses when set.
                                                                 When BC_MISS_CHECK_EN==0 and MC_MISS_CHECK_EN==1, the broadcast address (all ones)
                                                                 is classified as MultiCast.
                                                                 When BC_MISS_CHECK_EN==0 and MC_MISS_CHECK_EN==0, all BC and MC addresses are looked up
                                                                 in the switch table, similar to UniCast packets, and UC Miss defaults apply for misses. */
        uint64_t reserved_60_63        : 4;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_rfoex_rx_sw_tbl_miss_def_actx_s cn; */
};
typedef union cavm_rfoex_rx_sw_tbl_miss_def_actx cavm_rfoex_rx_sw_tbl_miss_def_actx_t;

static inline uint64_t CAVM_RFOEX_RX_SW_TBL_MISS_DEF_ACTX(uint64_t a, uint64_t b) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_RFOEX_RX_SW_TBL_MISS_DEF_ACTX(uint64_t a, uint64_t b)
{
    if (cavm_is_model(OCTEONTX_ODINMP) && ((a<=6) && (b<=3)))
        return 0x861000013160ll + 0x1000000ll * ((a) & 0x7) + 8ll * ((b) & 0x3);
    __cavm_csr_fatal("RFOEX_RX_SW_TBL_MISS_DEF_ACTX", 2, a, b, 0, 0, 0, 0);
}

#define typedef_CAVM_RFOEX_RX_SW_TBL_MISS_DEF_ACTX(a,b) cavm_rfoex_rx_sw_tbl_miss_def_actx_t
#define bustype_CAVM_RFOEX_RX_SW_TBL_MISS_DEF_ACTX(a,b) CSR_TYPE_NCB
#define basename_CAVM_RFOEX_RX_SW_TBL_MISS_DEF_ACTX(a,b) "RFOEX_RX_SW_TBL_MISS_DEF_ACTX"
#define busnum_CAVM_RFOEX_RX_SW_TBL_MISS_DEF_ACTX(a,b) (a)
#define arguments_CAVM_RFOEX_RX_SW_TBL_MISS_DEF_ACTX(a,b) (a),(b),-1,-1

/**
 * Register (NCB) rfoe#_rx_sw_tbl_sa_msk#
 *
 * RFOE RX Switch Table Source Address Mask Register
 * Switch Table Source Address Mask. One register per LMAC.
 */
union cavm_rfoex_rx_sw_tbl_sa_mskx
{
    uint64_t u;
    struct cavm_rfoex_rx_sw_tbl_sa_mskx_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t vid_mask              : 12; /**< [ 63: 52](R/W) Source VLAN ID Switch Table Lookup match is Masked with VID_MASK.
                                                                 One mask per source LMAC. */
        uint64_t reserved_48_51        : 4;
        uint64_t addr_mask             : 48; /**< [ 47:  0](R/W) Source Address Switch Table Lookup match is Masked with ADDR_MASK.
                                                                 One address mask per source LMAC. */
#else /* Word 0 - Little Endian */
        uint64_t addr_mask             : 48; /**< [ 47:  0](R/W) Source Address Switch Table Lookup match is Masked with ADDR_MASK.
                                                                 One address mask per source LMAC. */
        uint64_t reserved_48_51        : 4;
        uint64_t vid_mask              : 12; /**< [ 63: 52](R/W) Source VLAN ID Switch Table Lookup match is Masked with VID_MASK.
                                                                 One mask per source LMAC. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_rfoex_rx_sw_tbl_sa_mskx_s cn; */
};
typedef union cavm_rfoex_rx_sw_tbl_sa_mskx cavm_rfoex_rx_sw_tbl_sa_mskx_t;

static inline uint64_t CAVM_RFOEX_RX_SW_TBL_SA_MSKX(uint64_t a, uint64_t b) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_RFOEX_RX_SW_TBL_SA_MSKX(uint64_t a, uint64_t b)
{
    if (cavm_is_model(OCTEONTX_ODINMP) && ((a<=6) && (b<=3)))
        return 0x861000013420ll + 0x1000000ll * ((a) & 0x7) + 8ll * ((b) & 0x3);
    __cavm_csr_fatal("RFOEX_RX_SW_TBL_SA_MSKX", 2, a, b, 0, 0, 0, 0);
}

#define typedef_CAVM_RFOEX_RX_SW_TBL_SA_MSKX(a,b) cavm_rfoex_rx_sw_tbl_sa_mskx_t
#define bustype_CAVM_RFOEX_RX_SW_TBL_SA_MSKX(a,b) CSR_TYPE_NCB
#define basename_CAVM_RFOEX_RX_SW_TBL_SA_MSKX(a,b) "RFOEX_RX_SW_TBL_SA_MSKX"
#define busnum_CAVM_RFOEX_RX_SW_TBL_SA_MSKX(a,b) (a)
#define arguments_CAVM_RFOEX_RX_SW_TBL_SA_MSKX(a,b) (a),(b),-1,-1

/**
 * Register (NCB) rfoe#_rx_sw_tbl_uc_drop_sts#
 *
 * RFOE RX Switch Table Unicast Drop Stats Register
 */
union cavm_rfoex_rx_sw_tbl_uc_drop_stsx
{
    uint64_t u;
    struct cavm_rfoex_rx_sw_tbl_uc_drop_stsx_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t count                 : 64; /**< [ 63:  0](R/W/H) Switch table unicast drop count. One register per LMAC. */
#else /* Word 0 - Little Endian */
        uint64_t count                 : 64; /**< [ 63:  0](R/W/H) Switch table unicast drop count. One register per LMAC. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_rfoex_rx_sw_tbl_uc_drop_stsx_s cn; */
};
typedef union cavm_rfoex_rx_sw_tbl_uc_drop_stsx cavm_rfoex_rx_sw_tbl_uc_drop_stsx_t;

static inline uint64_t CAVM_RFOEX_RX_SW_TBL_UC_DROP_STSX(uint64_t a, uint64_t b) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_RFOEX_RX_SW_TBL_UC_DROP_STSX(uint64_t a, uint64_t b)
{
    if (cavm_is_model(OCTEONTX_ODINMP) && ((a<=6) && (b<=3)))
        return 0x8610000131e0ll + 0x1000000ll * ((a) & 0x7) + 8ll * ((b) & 0x3);
    __cavm_csr_fatal("RFOEX_RX_SW_TBL_UC_DROP_STSX", 2, a, b, 0, 0, 0, 0);
}

#define typedef_CAVM_RFOEX_RX_SW_TBL_UC_DROP_STSX(a,b) cavm_rfoex_rx_sw_tbl_uc_drop_stsx_t
#define bustype_CAVM_RFOEX_RX_SW_TBL_UC_DROP_STSX(a,b) CSR_TYPE_NCB
#define basename_CAVM_RFOEX_RX_SW_TBL_UC_DROP_STSX(a,b) "RFOEX_RX_SW_TBL_UC_DROP_STSX"
#define busnum_CAVM_RFOEX_RX_SW_TBL_UC_DROP_STSX(a,b) (a)
#define arguments_CAVM_RFOEX_RX_SW_TBL_UC_DROP_STSX(a,b) (a),(b),-1,-1

/**
 * Register (NCB) rfoe#_rx_sw_tbl_uc_fwd_sts#
 *
 * RFOE RX Switch Table Unicast Forwarded Stats Register
 */
union cavm_rfoex_rx_sw_tbl_uc_fwd_stsx
{
    uint64_t u;
    struct cavm_rfoex_rx_sw_tbl_uc_fwd_stsx_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t count                 : 64; /**< [ 63:  0](R/W/H) Switch table unicast forwarded count. One register per LMAC. */
#else /* Word 0 - Little Endian */
        uint64_t count                 : 64; /**< [ 63:  0](R/W/H) Switch table unicast forwarded count. One register per LMAC. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_rfoex_rx_sw_tbl_uc_fwd_stsx_s cn; */
};
typedef union cavm_rfoex_rx_sw_tbl_uc_fwd_stsx cavm_rfoex_rx_sw_tbl_uc_fwd_stsx_t;

static inline uint64_t CAVM_RFOEX_RX_SW_TBL_UC_FWD_STSX(uint64_t a, uint64_t b) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_RFOEX_RX_SW_TBL_UC_FWD_STSX(uint64_t a, uint64_t b)
{
    if (cavm_is_model(OCTEONTX_ODINMP) && ((a<=6) && (b<=3)))
        return 0x8610000131c0ll + 0x1000000ll * ((a) & 0x7) + 8ll * ((b) & 0x3);
    __cavm_csr_fatal("RFOEX_RX_SW_TBL_UC_FWD_STSX", 2, a, b, 0, 0, 0, 0);
}

#define typedef_CAVM_RFOEX_RX_SW_TBL_UC_FWD_STSX(a,b) cavm_rfoex_rx_sw_tbl_uc_fwd_stsx_t
#define bustype_CAVM_RFOEX_RX_SW_TBL_UC_FWD_STSX(a,b) CSR_TYPE_NCB
#define basename_CAVM_RFOEX_RX_SW_TBL_UC_FWD_STSX(a,b) "RFOEX_RX_SW_TBL_UC_FWD_STSX"
#define busnum_CAVM_RFOEX_RX_SW_TBL_UC_FWD_STSX(a,b) (a)
#define arguments_CAVM_RFOEX_RX_SW_TBL_UC_FWD_STSX(a,b) (a),(b),-1,-1

/**
 * Register (NCB) rfoe#_rx_sw_tbl_uc_miss_sts#
 *
 * RFOE RX Switch Table Unicast Miss Stats Register
 */
union cavm_rfoex_rx_sw_tbl_uc_miss_stsx
{
    uint64_t u;
    struct cavm_rfoex_rx_sw_tbl_uc_miss_stsx_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t count                 : 64; /**< [ 63:  0](R/W/H) Switch table unicast miss count. One register per LMAC. */
#else /* Word 0 - Little Endian */
        uint64_t count                 : 64; /**< [ 63:  0](R/W/H) Switch table unicast miss count. One register per LMAC. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_rfoex_rx_sw_tbl_uc_miss_stsx_s cn; */
};
typedef union cavm_rfoex_rx_sw_tbl_uc_miss_stsx cavm_rfoex_rx_sw_tbl_uc_miss_stsx_t;

static inline uint64_t CAVM_RFOEX_RX_SW_TBL_UC_MISS_STSX(uint64_t a, uint64_t b) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_RFOEX_RX_SW_TBL_UC_MISS_STSX(uint64_t a, uint64_t b)
{
    if (cavm_is_model(OCTEONTX_ODINMP) && ((a<=6) && (b<=3)))
        return 0x861000013180ll + 0x1000000ll * ((a) & 0x7) + 8ll * ((b) & 0x3);
    __cavm_csr_fatal("RFOEX_RX_SW_TBL_UC_MISS_STSX", 2, a, b, 0, 0, 0, 0);
}

#define typedef_CAVM_RFOEX_RX_SW_TBL_UC_MISS_STSX(a,b) cavm_rfoex_rx_sw_tbl_uc_miss_stsx_t
#define bustype_CAVM_RFOEX_RX_SW_TBL_UC_MISS_STSX(a,b) CSR_TYPE_NCB
#define basename_CAVM_RFOEX_RX_SW_TBL_UC_MISS_STSX(a,b) "RFOEX_RX_SW_TBL_UC_MISS_STSX"
#define busnum_CAVM_RFOEX_RX_SW_TBL_UC_MISS_STSX(a,b) (a)
#define arguments_CAVM_RFOEX_RX_SW_TBL_UC_MISS_STSX(a,b) (a),(b),-1,-1

/**
 * Register (NCB) rfoe#_rx_sw_tbl_uc_term_sts#
 *
 * RFOE RX Switch Table Unicast Terminate Stats Register
 */
union cavm_rfoex_rx_sw_tbl_uc_term_stsx
{
    uint64_t u;
    struct cavm_rfoex_rx_sw_tbl_uc_term_stsx_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t count                 : 64; /**< [ 63:  0](R/W/H) Switch table unicast terminate count. One register per LMAC. */
#else /* Word 0 - Little Endian */
        uint64_t count                 : 64; /**< [ 63:  0](R/W/H) Switch table unicast terminate count. One register per LMAC. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_rfoex_rx_sw_tbl_uc_term_stsx_s cn; */
};
typedef union cavm_rfoex_rx_sw_tbl_uc_term_stsx cavm_rfoex_rx_sw_tbl_uc_term_stsx_t;

static inline uint64_t CAVM_RFOEX_RX_SW_TBL_UC_TERM_STSX(uint64_t a, uint64_t b) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_RFOEX_RX_SW_TBL_UC_TERM_STSX(uint64_t a, uint64_t b)
{
    if (cavm_is_model(OCTEONTX_ODINMP) && ((a<=6) && (b<=3)))
        return 0x8610000131a0ll + 0x1000000ll * ((a) & 0x7) + 8ll * ((b) & 0x3);
    __cavm_csr_fatal("RFOEX_RX_SW_TBL_UC_TERM_STSX", 2, a, b, 0, 0, 0, 0);
}

#define typedef_CAVM_RFOEX_RX_SW_TBL_UC_TERM_STSX(a,b) cavm_rfoex_rx_sw_tbl_uc_term_stsx_t
#define bustype_CAVM_RFOEX_RX_SW_TBL_UC_TERM_STSX(a,b) CSR_TYPE_NCB
#define basename_CAVM_RFOEX_RX_SW_TBL_UC_TERM_STSX(a,b) "RFOEX_RX_SW_TBL_UC_TERM_STSX"
#define busnum_CAVM_RFOEX_RX_SW_TBL_UC_TERM_STSX(a,b) (a)
#define arguments_CAVM_RFOEX_RX_SW_TBL_UC_TERM_STSX(a,b) (a),(b),-1,-1

/**
 * Register (NCB) rfoe#_rx_sync_discard_counter
 *
 * RFOE RX SYNC Packet Discard Counter Statistic Register
 * Count the number of packets discarded as a result of an RX sync drop.
 */
union cavm_rfoex_rx_sync_discard_counter
{
    uint64_t u;
    struct cavm_rfoex_rx_sync_discard_counter_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t stat                  : 64; /**< [ 63:  0](R/W/H) The counter value. Wraps to zero at 2^64. */
#else /* Word 0 - Little Endian */
        uint64_t stat                  : 64; /**< [ 63:  0](R/W/H) The counter value. Wraps to zero at 2^64. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_rfoex_rx_sync_discard_counter_s cn; */
};
typedef union cavm_rfoex_rx_sync_discard_counter cavm_rfoex_rx_sync_discard_counter_t;

static inline uint64_t CAVM_RFOEX_RX_SYNC_DISCARD_COUNTER(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_RFOEX_RX_SYNC_DISCARD_COUNTER(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_ODINMP) && (a<=6))
        return 0x861000001d20ll + 0x1000000ll * ((a) & 0x7);
    __cavm_csr_fatal("RFOEX_RX_SYNC_DISCARD_COUNTER", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_RFOEX_RX_SYNC_DISCARD_COUNTER(a) cavm_rfoex_rx_sync_discard_counter_t
#define bustype_CAVM_RFOEX_RX_SYNC_DISCARD_COUNTER(a) CSR_TYPE_NCB
#define basename_CAVM_RFOEX_RX_SYNC_DISCARD_COUNTER(a) "RFOEX_RX_SYNC_DISCARD_COUNTER"
#define busnum_CAVM_RFOEX_RX_SYNC_DISCARD_COUNTER(a) (a)
#define arguments_CAVM_RFOEX_RX_SYNC_DISCARD_COUNTER(a) (a),-1,-1,-1

/**
 * Register (NCB) rfoe#_rx_sync_flow#
 *
 * RFOE RX Sync Per Flow Antenna Identification Register
 * Identifies which RX flows are synchronized antenna flows.
 *
 * This is a bit-mask with one bit for each flow. The flow index for a given
 * bit is:
 *
 * _ flow index = bit + 64*{b}
 *
 * Set bits indicates synchronized antenna flows.
 */
union cavm_rfoex_rx_sync_flowx
{
    uint64_t u;
    struct cavm_rfoex_rx_sync_flowx_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t ant                   : 64; /**< [ 63:  0](R/W) Bit-mask indicated antenna flows. */
#else /* Word 0 - Little Endian */
        uint64_t ant                   : 64; /**< [ 63:  0](R/W) Bit-mask indicated antenna flows. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_rfoex_rx_sync_flowx_s cn; */
};
typedef union cavm_rfoex_rx_sync_flowx cavm_rfoex_rx_sync_flowx_t;

static inline uint64_t CAVM_RFOEX_RX_SYNC_FLOWX(uint64_t a, uint64_t b) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_RFOEX_RX_SYNC_FLOWX(uint64_t a, uint64_t b)
{
    if (cavm_is_model(OCTEONTX_ODINMP) && ((a<=6) && (b<=15)))
        return 0x861000001100ll + 0x1000000ll * ((a) & 0x7) + 8ll * ((b) & 0xf);
    __cavm_csr_fatal("RFOEX_RX_SYNC_FLOWX", 2, a, b, 0, 0, 0, 0);
}

#define typedef_CAVM_RFOEX_RX_SYNC_FLOWX(a,b) cavm_rfoex_rx_sync_flowx_t
#define bustype_CAVM_RFOEX_RX_SYNC_FLOWX(a,b) CSR_TYPE_NCB
#define basename_CAVM_RFOEX_RX_SYNC_FLOWX(a,b) "RFOEX_RX_SYNC_FLOWX"
#define busnum_CAVM_RFOEX_RX_SYNC_FLOWX(a,b) (a)
#define arguments_CAVM_RFOEX_RX_SYNC_FLOWX(a,b) (a),(b),-1,-1

/**
 * Register (NCB) rfoe#_rx_sync_state#
 *
 * RFOE RX Sync State Register
 * Indicates the state of each RX antenna flow.
 *
 * This is a bit-mask with one bit for each flow. The flow index for a given
 * bit is:
 *
 * _ flow index = bit + 64*{b}
 *
 * Writes of 1 to bit will reset the state to DISABLED.
 * RFOE()_RX_IND_FT()_CFG[ENABLE] must be 0 for all flow index values being reset.
 */
union cavm_rfoex_rx_sync_statex
{
    uint64_t u;
    struct cavm_rfoex_rx_sync_statex_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t state                 : 64; /**< [ 63:  0](R/W1C/H) Bit-mask of antenna flow state. For each bit:
                                                                 0 = DISABLED antenna flow, all packets will be dropped. Drops are counted in
                                                                 RFOE()_RX_SYNC_DISCARD_COUNTER.
                                                                 1 = ENABLED antenna flow, allow incoming packets. */
#else /* Word 0 - Little Endian */
        uint64_t state                 : 64; /**< [ 63:  0](R/W1C/H) Bit-mask of antenna flow state. For each bit:
                                                                 0 = DISABLED antenna flow, all packets will be dropped. Drops are counted in
                                                                 RFOE()_RX_SYNC_DISCARD_COUNTER.
                                                                 1 = ENABLED antenna flow, allow incoming packets. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_rfoex_rx_sync_statex_s cn; */
};
typedef union cavm_rfoex_rx_sync_statex cavm_rfoex_rx_sync_statex_t;

static inline uint64_t CAVM_RFOEX_RX_SYNC_STATEX(uint64_t a, uint64_t b) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_RFOEX_RX_SYNC_STATEX(uint64_t a, uint64_t b)
{
    if (cavm_is_model(OCTEONTX_ODINMP) && ((a<=6) && (b<=15)))
        return 0x861000001180ll + 0x1000000ll * ((a) & 0x7) + 8ll * ((b) & 0xf);
    __cavm_csr_fatal("RFOEX_RX_SYNC_STATEX", 2, a, b, 0, 0, 0, 0);
}

#define typedef_CAVM_RFOEX_RX_SYNC_STATEX(a,b) cavm_rfoex_rx_sync_statex_t
#define bustype_CAVM_RFOEX_RX_SYNC_STATEX(a,b) CSR_TYPE_NCB
#define basename_CAVM_RFOEX_RX_SYNC_STATEX(a,b) "RFOEX_RX_SYNC_STATEX"
#define busnum_CAVM_RFOEX_RX_SYNC_STATEX(a,b) (a)
#define arguments_CAVM_RFOEX_RX_SYNC_STATEX(a,b) (a),(b),-1,-1

/**
 * Register (NCB) rfoe#_rx_vlan#_cfg
 *
 * RFOE RX VLAN EtherType Match Configuration Register
 * Configures VLAN header processing.  Enables and EtherType for matching.
 */
union cavm_rfoex_rx_vlanx_cfg
{
    uint64_t u;
    struct cavm_rfoex_rx_vlanx_cfg_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_17_63        : 47;
        uint64_t ena                   : 1;  /**< [ 16: 16](R/W) Enable [TPID] match to packet EtherType, when set to 1. */
        uint64_t tpid                  : 16; /**< [ 15:  0](R/W) EtherType match value for VLAN processing. If both [ENA] is set for both
                                                                 VLAN registers, then the [TPID] values of the two registers must be
                                                                 different. */
#else /* Word 0 - Little Endian */
        uint64_t tpid                  : 16; /**< [ 15:  0](R/W) EtherType match value for VLAN processing. If both [ENA] is set for both
                                                                 VLAN registers, then the [TPID] values of the two registers must be
                                                                 different. */
        uint64_t ena                   : 1;  /**< [ 16: 16](R/W) Enable [TPID] match to packet EtherType, when set to 1. */
        uint64_t reserved_17_63        : 47;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_rfoex_rx_vlanx_cfg_s cn; */
};
typedef union cavm_rfoex_rx_vlanx_cfg cavm_rfoex_rx_vlanx_cfg_t;

static inline uint64_t CAVM_RFOEX_RX_VLANX_CFG(uint64_t a, uint64_t b) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_RFOEX_RX_VLANX_CFG(uint64_t a, uint64_t b)
{
    if (cavm_is_model(OCTEONTX_ODINMP) && ((a<=6) && (b<=1)))
        return 0x861000001070ll + 0x1000000ll * ((a) & 0x7) + 8ll * ((b) & 0x1);
    __cavm_csr_fatal("RFOEX_RX_VLANX_CFG", 2, a, b, 0, 0, 0, 0);
}

#define typedef_CAVM_RFOEX_RX_VLANX_CFG(a,b) cavm_rfoex_rx_vlanx_cfg_t
#define bustype_CAVM_RFOEX_RX_VLANX_CFG(a,b) CSR_TYPE_NCB
#define basename_CAVM_RFOEX_RX_VLANX_CFG(a,b) "RFOEX_RX_VLANX_CFG"
#define busnum_CAVM_RFOEX_RX_VLANX_CFG(a,b) (a)
#define arguments_CAVM_RFOEX_RX_VLANX_CFG(a,b) (a),(b),-1,-1

/**
 * Register (NCB) rfoe#_rx_vlan_drop_stat#
 *
 * RFOE RX  VLAN Drop Packet Count Register
 * Number of VLAN packets dropped because not being forwarded. Per LMAC.
 */
union cavm_rfoex_rx_vlan_drop_statx
{
    uint64_t u;
    struct cavm_rfoex_rx_vlan_drop_statx_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_48_63        : 16;
        uint64_t stat                  : 48; /**< [ 47:  0](R/W/H) The counter value. Wraps to zero at 2^48. */
#else /* Word 0 - Little Endian */
        uint64_t stat                  : 48; /**< [ 47:  0](R/W/H) The counter value. Wraps to zero at 2^48. */
        uint64_t reserved_48_63        : 16;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_rfoex_rx_vlan_drop_statx_s cn; */
};
typedef union cavm_rfoex_rx_vlan_drop_statx cavm_rfoex_rx_vlan_drop_statx_t;

static inline uint64_t CAVM_RFOEX_RX_VLAN_DROP_STATX(uint64_t a, uint64_t b) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_RFOEX_RX_VLAN_DROP_STATX(uint64_t a, uint64_t b)
{
    if (cavm_is_model(OCTEONTX_ODINMP) && ((a<=6) && (b<=3)))
        return 0x8610000010a0ll + 0x1000000ll * ((a) & 0x7) + 8ll * ((b) & 0x3);
    __cavm_csr_fatal("RFOEX_RX_VLAN_DROP_STATX", 2, a, b, 0, 0, 0, 0);
}

#define typedef_CAVM_RFOEX_RX_VLAN_DROP_STATX(a,b) cavm_rfoex_rx_vlan_drop_statx_t
#define bustype_CAVM_RFOEX_RX_VLAN_DROP_STATX(a,b) CSR_TYPE_NCB
#define basename_CAVM_RFOEX_RX_VLAN_DROP_STATX(a,b) "RFOEX_RX_VLAN_DROP_STATX"
#define busnum_CAVM_RFOEX_RX_VLAN_DROP_STATX(a,b) (a)
#define arguments_CAVM_RFOEX_RX_VLAN_DROP_STATX(a,b) (a),(b),-1,-1

/**
 * Register (NCB) rfoe#_rx_vlan_fwd_stat#
 *
 * RFOE RX  VLAN Drop Packet Count Register
 * Number of VLAN packets forwarded. Per LMAC.
 */
union cavm_rfoex_rx_vlan_fwd_statx
{
    uint64_t u;
    struct cavm_rfoex_rx_vlan_fwd_statx_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_48_63        : 16;
        uint64_t stat                  : 48; /**< [ 47:  0](R/W/H) The counter value. Wraps to zero at 2^48. */
#else /* Word 0 - Little Endian */
        uint64_t stat                  : 48; /**< [ 47:  0](R/W/H) The counter value. Wraps to zero at 2^48. */
        uint64_t reserved_48_63        : 16;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_rfoex_rx_vlan_fwd_statx_s cn; */
};
typedef union cavm_rfoex_rx_vlan_fwd_statx cavm_rfoex_rx_vlan_fwd_statx_t;

static inline uint64_t CAVM_RFOEX_RX_VLAN_FWD_STATX(uint64_t a, uint64_t b) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_RFOEX_RX_VLAN_FWD_STATX(uint64_t a, uint64_t b)
{
    if (cavm_is_model(OCTEONTX_ODINMP) && ((a<=6) && (b<=3)))
        return 0x8610000010c0ll + 0x1000000ll * ((a) & 0x7) + 8ll * ((b) & 0x3);
    __cavm_csr_fatal("RFOEX_RX_VLAN_FWD_STATX", 2, a, b, 0, 0, 0, 0);
}

#define typedef_CAVM_RFOEX_RX_VLAN_FWD_STATX(a,b) cavm_rfoex_rx_vlan_fwd_statx_t
#define bustype_CAVM_RFOEX_RX_VLAN_FWD_STATX(a,b) CSR_TYPE_NCB
#define basename_CAVM_RFOEX_RX_VLAN_FWD_STATX(a,b) "RFOEX_RX_VLAN_FWD_STATX"
#define busnum_CAVM_RFOEX_RX_VLAN_FWD_STATX(a,b) (a)
#define arguments_CAVM_RFOEX_RX_VLAN_FWD_STATX(a,b) (a),(b),-1,-1

/**
 * Register (NCB) rfoe#_rx_x2p_eop_err_sts#
 *
 * RFOE RX X2P EOP Error Stats Register
 * Count of X2P EOP errors per LMAC.
 */
union cavm_rfoex_rx_x2p_eop_err_stsx
{
    uint64_t u;
    struct cavm_rfoex_rx_x2p_eop_err_stsx_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_48_63        : 16;
        uint64_t stat                  : 48; /**< [ 47:  0](R/W/H) The counter value increments on X2P EOP Error. Wraps to zero at 2^48. */
#else /* Word 0 - Little Endian */
        uint64_t stat                  : 48; /**< [ 47:  0](R/W/H) The counter value increments on X2P EOP Error. Wraps to zero at 2^48. */
        uint64_t reserved_48_63        : 16;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_rfoex_rx_x2p_eop_err_stsx_s cn; */
};
typedef union cavm_rfoex_rx_x2p_eop_err_stsx cavm_rfoex_rx_x2p_eop_err_stsx_t;

static inline uint64_t CAVM_RFOEX_RX_X2P_EOP_ERR_STSX(uint64_t a, uint64_t b) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_RFOEX_RX_X2P_EOP_ERR_STSX(uint64_t a, uint64_t b)
{
    if (cavm_is_model(OCTEONTX_ODINMP) && ((a<=6) && (b<=3)))
        return 0x861000013260ll + 0x1000000ll * ((a) & 0x7) + 8ll * ((b) & 0x3);
    __cavm_csr_fatal("RFOEX_RX_X2P_EOP_ERR_STSX", 2, a, b, 0, 0, 0, 0);
}

#define typedef_CAVM_RFOEX_RX_X2P_EOP_ERR_STSX(a,b) cavm_rfoex_rx_x2p_eop_err_stsx_t
#define bustype_CAVM_RFOEX_RX_X2P_EOP_ERR_STSX(a,b) CSR_TYPE_NCB
#define basename_CAVM_RFOEX_RX_X2P_EOP_ERR_STSX(a,b) "RFOEX_RX_X2P_EOP_ERR_STSX"
#define busnum_CAVM_RFOEX_RX_X2P_EOP_ERR_STSX(a,b) (a)
#define arguments_CAVM_RFOEX_RX_X2P_EOP_ERR_STSX(a,b) (a),(b),-1,-1

/**
 * Register (NCB) rfoe#_tx_ctrl
 *
 * RFOE TX Control Register
 * Data path control and status for doing BPHY/RFIF reset sequences.
 */
union cavm_rfoex_tx_ctrl
{
    uint64_t u;
    struct cavm_rfoex_tx_ctrl_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_4_63         : 60;
        uint64_t tstamp_format         : 1;  /**< [  3:  3](R/W) Selects the timestamp format:
                                                                 1 = BCN format.
                                                                 0 = Reserved. */
        uint64_t force_intf_clk_en     : 1;  /**< [  2:  2](R/W) Force the clock enable on P2X interface signals between blocks. For diagnostic use only. */
        uint64_t tx_idle               : 1;  /**< [  1:  1](RO/H) Transmit path idle.
                                                                 When [DATA_PKT_TX_EN] = 0, [TX_IDLE] = 1 indicates that the in-flight packets are sent
                                                                 and that any new packets scheduled are discarded. [TX_IDLE]=1 means it's
                                                                 safe to do BPHY and/or RFIF reset. For the reset domains:
                                                                 * A BPHY reset will reset all pending transactions.
                                                                 * RFIF domain (RPM) can still be active, and a RFIF reset will reset all these transactions.
                                                                 *Once [TX_IDLE] is set, it will stay set until [DATA_PKT_TX_EN] is set to 0 by SW.
                                                                 [TX_IDLE] should be ignored when [DATA_PKT_TX_EN] == 1. */
        uint64_t data_pkt_tx_en        : 1;  /**< [  0:  0](R/W) Enable TX traffic. Software must write to 1
                                                                 RFOE()_TX_LMAC_CFG()[DATA_PKT_TX_LMAC_EN] and [DATA_PKT_TX_EN] to enable TX
                                                                 traffic.
                                                                 _ 0 = RFOE discards packets transmit packets to all LMAC.
                                                                 _ 1 = RFOE enables packet transmits to RPM.

                                                                 When [DATA_PKT_TX_EN] transitions from 1 to 0, RFOE completes any
                                                                 in-flight transmit packets. Once all in-flight packets are sent,
                                                                 RFOE sets [TX_IDLE], and discards and subsequent transmit packets. */
#else /* Word 0 - Little Endian */
        uint64_t data_pkt_tx_en        : 1;  /**< [  0:  0](R/W) Enable TX traffic. Software must write to 1
                                                                 RFOE()_TX_LMAC_CFG()[DATA_PKT_TX_LMAC_EN] and [DATA_PKT_TX_EN] to enable TX
                                                                 traffic.
                                                                 _ 0 = RFOE discards packets transmit packets to all LMAC.
                                                                 _ 1 = RFOE enables packet transmits to RPM.

                                                                 When [DATA_PKT_TX_EN] transitions from 1 to 0, RFOE completes any
                                                                 in-flight transmit packets. Once all in-flight packets are sent,
                                                                 RFOE sets [TX_IDLE], and discards and subsequent transmit packets. */
        uint64_t tx_idle               : 1;  /**< [  1:  1](RO/H) Transmit path idle.
                                                                 When [DATA_PKT_TX_EN] = 0, [TX_IDLE] = 1 indicates that the in-flight packets are sent
                                                                 and that any new packets scheduled are discarded. [TX_IDLE]=1 means it's
                                                                 safe to do BPHY and/or RFIF reset. For the reset domains:
                                                                 * A BPHY reset will reset all pending transactions.
                                                                 * RFIF domain (RPM) can still be active, and a RFIF reset will reset all these transactions.
                                                                 *Once [TX_IDLE] is set, it will stay set until [DATA_PKT_TX_EN] is set to 0 by SW.
                                                                 [TX_IDLE] should be ignored when [DATA_PKT_TX_EN] == 1. */
        uint64_t force_intf_clk_en     : 1;  /**< [  2:  2](R/W) Force the clock enable on P2X interface signals between blocks. For diagnostic use only. */
        uint64_t tstamp_format         : 1;  /**< [  3:  3](R/W) Selects the timestamp format:
                                                                 1 = BCN format.
                                                                 0 = Reserved. */
        uint64_t reserved_4_63         : 60;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_rfoex_tx_ctrl_s cn; */
};
typedef union cavm_rfoex_tx_ctrl cavm_rfoex_tx_ctrl_t;

static inline uint64_t CAVM_RFOEX_TX_CTRL(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_RFOEX_TX_CTRL(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_ODINMP) && (a<=6))
        return 0x861000000f08ll + 0x1000000ll * ((a) & 0x7);
    __cavm_csr_fatal("RFOEX_TX_CTRL", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_RFOEX_TX_CTRL(a) cavm_rfoex_tx_ctrl_t
#define bustype_CAVM_RFOEX_TX_CTRL(a) CSR_TYPE_NCB
#define basename_CAVM_RFOEX_TX_CTRL(a) "RFOEX_TX_CTRL"
#define busnum_CAVM_RFOEX_TX_CTRL(a) (a)
#define arguments_CAVM_RFOEX_TX_CTRL(a) (a),-1,-1,-1

/**
 * Register (NCB) rfoe#_tx_hdr_da#
 *
 * RFOE TX Ethernet Destination Address Register
 * Ethernet destination MAC address for TX packets sent with
 * RFOE()_AB()_SLOT()_CONFIGURATION[PKT_MODE]=0x1.
 *
 * The index {b} is selected by RFOE()_AB()_SLOT()_CONFIGURATION[DA_SEL].
 */
union cavm_rfoex_tx_hdr_dax
{
    uint64_t u;
    struct cavm_rfoex_tx_hdr_dax_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_48_63        : 16;
        uint64_t da                    : 48; /**< [ 47:  0](R/W) Destination Ethernet MAC address. The following ordering within the field \<7:0\>
                                                                 at byte address 0, \<15:8\> at address 1, ..., \<47:40\> at address 0x5.
                                                                 _ RFOE()_TX_HDR_DA()\<7:0\> = byte 0 of Ethernet packet.
                                                                 _ ...
                                                                 _ RFOE()_TX_HDR_DA()\<47:40\> = byte 5 of Ethernet packet. */
#else /* Word 0 - Little Endian */
        uint64_t da                    : 48; /**< [ 47:  0](R/W) Destination Ethernet MAC address. The following ordering within the field \<7:0\>
                                                                 at byte address 0, \<15:8\> at address 1, ..., \<47:40\> at address 0x5.
                                                                 _ RFOE()_TX_HDR_DA()\<7:0\> = byte 0 of Ethernet packet.
                                                                 _ ...
                                                                 _ RFOE()_TX_HDR_DA()\<47:40\> = byte 5 of Ethernet packet. */
        uint64_t reserved_48_63        : 16;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_rfoex_tx_hdr_dax_s cn; */
};
typedef union cavm_rfoex_tx_hdr_dax cavm_rfoex_tx_hdr_dax_t;

static inline uint64_t CAVM_RFOEX_TX_HDR_DAX(uint64_t a, uint64_t b) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_RFOEX_TX_HDR_DAX(uint64_t a, uint64_t b)
{
    if (cavm_is_model(OCTEONTX_ODINMP) && ((a<=6) && (b<=7)))
        return 0x861000000800ll + 0x1000000ll * ((a) & 0x7) + 8ll * ((b) & 0x7);
    __cavm_csr_fatal("RFOEX_TX_HDR_DAX", 2, a, b, 0, 0, 0, 0);
}

#define typedef_CAVM_RFOEX_TX_HDR_DAX(a,b) cavm_rfoex_tx_hdr_dax_t
#define bustype_CAVM_RFOEX_TX_HDR_DAX(a,b) CSR_TYPE_NCB
#define basename_CAVM_RFOEX_TX_HDR_DAX(a,b) "RFOEX_TX_HDR_DAX"
#define busnum_CAVM_RFOEX_TX_HDR_DAX(a,b) (a)
#define arguments_CAVM_RFOEX_TX_HDR_DAX(a,b) (a),(b),-1,-1

/**
 * Register (NCB) rfoe#_tx_hdr_ethertype#
 *
 * RFOE TX Ethernet EtherType Register
 * Ethernet header EtherType field for TX packets sent with
 * RFOE()_AB()_SLOT()_CONFIGURATION[PKT_MODE]=1.
 *
 * The index {b} is selected by RFOE()_AB()_SLOT()_CONFIGURATION[ETYPE_SEL].
 */
union cavm_rfoex_tx_hdr_ethertypex
{
    uint64_t u;
    struct cavm_rfoex_tx_hdr_ethertypex_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_16_63        : 48;
        uint64_t ethertype             : 16; /**< [ 15:  0](R/W) Ethernet EtherType. The following ordering within the field EtherType\<7:0\> at
                                                                 byte address 0, EtherType\<15:8\> at byte address 1. */
#else /* Word 0 - Little Endian */
        uint64_t ethertype             : 16; /**< [ 15:  0](R/W) Ethernet EtherType. The following ordering within the field EtherType\<7:0\> at
                                                                 byte address 0, EtherType\<15:8\> at byte address 1. */
        uint64_t reserved_16_63        : 48;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_rfoex_tx_hdr_ethertypex_s cn; */
};
typedef union cavm_rfoex_tx_hdr_ethertypex cavm_rfoex_tx_hdr_ethertypex_t;

static inline uint64_t CAVM_RFOEX_TX_HDR_ETHERTYPEX(uint64_t a, uint64_t b) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_RFOEX_TX_HDR_ETHERTYPEX(uint64_t a, uint64_t b)
{
    if (cavm_is_model(OCTEONTX_ODINMP) && ((a<=6) && (b<=7)))
        return 0x861000000880ll + 0x1000000ll * ((a) & 0x7) + 8ll * ((b) & 0x7);
    __cavm_csr_fatal("RFOEX_TX_HDR_ETHERTYPEX", 2, a, b, 0, 0, 0, 0);
}

#define typedef_CAVM_RFOEX_TX_HDR_ETHERTYPEX(a,b) cavm_rfoex_tx_hdr_ethertypex_t
#define bustype_CAVM_RFOEX_TX_HDR_ETHERTYPEX(a,b) CSR_TYPE_NCB
#define basename_CAVM_RFOEX_TX_HDR_ETHERTYPEX(a,b) "RFOEX_TX_HDR_ETHERTYPEX"
#define busnum_CAVM_RFOEX_TX_HDR_ETHERTYPEX(a,b) (a)
#define arguments_CAVM_RFOEX_TX_HDR_ETHERTYPEX(a,b) (a),(b),-1,-1

/**
 * Register (NCB) rfoe#_tx_hdr_sa#
 *
 * RFOE TX Ethernet Source Address Register
 * Ethernet source MAC address for TX packets sent with
 * RFOE()_AB()_SLOT()_CONFIGURATION[PKT_MODE]=0x1.
 *
 * The index {b} is selected by RFOE()_AB()_SLOT()_CONFIGURATION[SA_SEL].
 */
union cavm_rfoex_tx_hdr_sax
{
    uint64_t u;
    struct cavm_rfoex_tx_hdr_sax_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_48_63        : 16;
        uint64_t sa                    : 48; /**< [ 47:  0](R/W) Source Ethernet MAC address. The following ordering within the field \<7:0\>
                                                                 at byte address 0, \<15:8\> at address 1, ..., \<47:40\> at address 0x5.
                                                                 _ RFOE()_TX_HDR_SA()\<7:0\> = byte 6 of Ethernet packet.
                                                                 _ ...
                                                                 _ RFOE()_TX_HDR_SA()\<47:40\> = byte 11 of Ethernet packet. */
#else /* Word 0 - Little Endian */
        uint64_t sa                    : 48; /**< [ 47:  0](R/W) Source Ethernet MAC address. The following ordering within the field \<7:0\>
                                                                 at byte address 0, \<15:8\> at address 1, ..., \<47:40\> at address 0x5.
                                                                 _ RFOE()_TX_HDR_SA()\<7:0\> = byte 6 of Ethernet packet.
                                                                 _ ...
                                                                 _ RFOE()_TX_HDR_SA()\<47:40\> = byte 11 of Ethernet packet. */
        uint64_t reserved_48_63        : 16;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_rfoex_tx_hdr_sax_s cn; */
};
typedef union cavm_rfoex_tx_hdr_sax cavm_rfoex_tx_hdr_sax_t;

static inline uint64_t CAVM_RFOEX_TX_HDR_SAX(uint64_t a, uint64_t b) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_RFOEX_TX_HDR_SAX(uint64_t a, uint64_t b)
{
    if (cavm_is_model(OCTEONTX_ODINMP) && ((a<=6) && (b<=7)))
        return 0x861000000840ll + 0x1000000ll * ((a) & 0x7) + 8ll * ((b) & 0x7);
    __cavm_csr_fatal("RFOEX_TX_HDR_SAX", 2, a, b, 0, 0, 0, 0);
}

#define typedef_CAVM_RFOEX_TX_HDR_SAX(a,b) cavm_rfoex_tx_hdr_sax_t
#define bustype_CAVM_RFOEX_TX_HDR_SAX(a,b) CSR_TYPE_NCB
#define basename_CAVM_RFOEX_TX_HDR_SAX(a,b) "RFOEX_TX_HDR_SAX"
#define busnum_CAVM_RFOEX_TX_HDR_SAX(a,b) (a)
#define arguments_CAVM_RFOEX_TX_HDR_SAX(a,b) (a),(b),-1,-1

/**
 * Register (NCB) rfoe#_tx_hdr_vlan#
 *
 * RFOE TX Ethernet VLAN Register
 * Ethernet header VLAN field for TX packets sent with
 * RFOE()_AB()_SLOT()_CONFIGURATION[PKT_MODE]=1.
 *
 * The index {b} is selected by RFOE()_AB()_SLOT()_CONFIGURATION2[VLAN_SEL].
 */
union cavm_rfoex_tx_hdr_vlanx
{
    uint64_t u;
    struct cavm_rfoex_tx_hdr_vlanx_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t vlan_id1              : 16; /**< [ 63: 48](R/W) Ethernet VLAN ID 1. This is used for double VLAN tags. */
        uint64_t vlan_type1            : 16; /**< [ 47: 32](R/W) Ethernet VLAN Type 1. This is used for double VLAN tags. */
        uint64_t vlan_id0              : 16; /**< [ 31: 16](R/W) Ethernet VLAN ID 0. */
        uint64_t vlan_type0            : 16; /**< [ 15:  0](R/W) Ethernet VLAN Type 0. */
#else /* Word 0 - Little Endian */
        uint64_t vlan_type0            : 16; /**< [ 15:  0](R/W) Ethernet VLAN Type 0. */
        uint64_t vlan_id0              : 16; /**< [ 31: 16](R/W) Ethernet VLAN ID 0. */
        uint64_t vlan_type1            : 16; /**< [ 47: 32](R/W) Ethernet VLAN Type 1. This is used for double VLAN tags. */
        uint64_t vlan_id1              : 16; /**< [ 63: 48](R/W) Ethernet VLAN ID 1. This is used for double VLAN tags. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_rfoex_tx_hdr_vlanx_s cn; */
};
typedef union cavm_rfoex_tx_hdr_vlanx cavm_rfoex_tx_hdr_vlanx_t;

static inline uint64_t CAVM_RFOEX_TX_HDR_VLANX(uint64_t a, uint64_t b) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_RFOEX_TX_HDR_VLANX(uint64_t a, uint64_t b)
{
    if (cavm_is_model(OCTEONTX_ODINMP) && ((a<=6) && (b<=7)))
        return 0x8610000008c0ll + 0x1000000ll * ((a) & 0x7) + 8ll * ((b) & 0x7);
    __cavm_csr_fatal("RFOEX_TX_HDR_VLANX", 2, a, b, 0, 0, 0, 0);
}

#define typedef_CAVM_RFOEX_TX_HDR_VLANX(a,b) cavm_rfoex_tx_hdr_vlanx_t
#define bustype_CAVM_RFOEX_TX_HDR_VLANX(a,b) CSR_TYPE_NCB
#define basename_CAVM_RFOEX_TX_HDR_VLANX(a,b) "RFOEX_TX_HDR_VLANX"
#define busnum_CAVM_RFOEX_TX_HDR_VLANX(a,b) (a)
#define arguments_CAVM_RFOEX_TX_HDR_VLANX(a,b) (a),(b),-1,-1

/**
 * Register (NCB) rfoe#_tx_ind_seqnum_p_cfg
 *
 * RFOE TX Indirect SeqNum P-Counter Configuration Register
 * Transmit .seqNum p-counter configuration.  Refer to IEEE 1914.3-2018
 * Table 5 for details on p-counter configuration.
 *
 * This register indirectly accesses a table of 1024 entries with p-counter
 * configuration for each transmit flow.
 *
 * Reads and writes to this register access the table entry specified by
 * RFOE()_TX_INDIRECT_INDEX[INDEX].
 *
 * Packet transmissions access entries based on the flow specified by
 * RFOE()_AB()_SLOT()_CONFIGURATION[FLOWID].
 */
union cavm_rfoex_tx_ind_seqnum_p_cfg
{
    uint64_t u;
    struct cavm_rfoex_tx_ind_seqnum_p_cfg_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t pinc                  : 32; /**< [ 63: 32](R/W) SeqNumPInc. Value to increment p-counter by on every sent packet.
                                                                 The increment value must be less than [PMAX]. */
        uint64_t pmax                  : 32; /**< [ 31:  0](R/W) SeqNumPMax. Maximum numerical value of the p-counter field. Requirements:
                                                                 * [PMAX] \> [PINC] when RFOE()_TX_IND_SEQNUM_PROP_CFG[PINC_PROP] == 1.
                                                                 * [PMAX] \>= Initial RFOE()_TX_IND_SEQNUM_STATE[PVAL].
                                                                 * [PMAX] \> Maximum RoE length field when RFOE()_TX_IND_SEQNUM_PROP_CFG[PINC_PROP] == 2.
                                                                 * [PMAX] \<= 3 when (RFOE()_AB()_SLOT()_CONFIGURATION[ORDERINFOTYPE] == TIMESTAMP) */
#else /* Word 0 - Little Endian */
        uint64_t pmax                  : 32; /**< [ 31:  0](R/W) SeqNumPMax. Maximum numerical value of the p-counter field. Requirements:
                                                                 * [PMAX] \> [PINC] when RFOE()_TX_IND_SEQNUM_PROP_CFG[PINC_PROP] == 1.
                                                                 * [PMAX] \>= Initial RFOE()_TX_IND_SEQNUM_STATE[PVAL].
                                                                 * [PMAX] \> Maximum RoE length field when RFOE()_TX_IND_SEQNUM_PROP_CFG[PINC_PROP] == 2.
                                                                 * [PMAX] \<= 3 when (RFOE()_AB()_SLOT()_CONFIGURATION[ORDERINFOTYPE] == TIMESTAMP) */
        uint64_t pinc                  : 32; /**< [ 63: 32](R/W) SeqNumPInc. Value to increment p-counter by on every sent packet.
                                                                 The increment value must be less than [PMAX]. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_rfoex_tx_ind_seqnum_p_cfg_s cn; */
};
typedef union cavm_rfoex_tx_ind_seqnum_p_cfg cavm_rfoex_tx_ind_seqnum_p_cfg_t;

static inline uint64_t CAVM_RFOEX_TX_IND_SEQNUM_P_CFG(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_RFOEX_TX_IND_SEQNUM_P_CFG(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_ODINMP) && (a<=6))
        return 0x861000000c00ll + 0x1000000ll * ((a) & 0x7);
    __cavm_csr_fatal("RFOEX_TX_IND_SEQNUM_P_CFG", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_RFOEX_TX_IND_SEQNUM_P_CFG(a) cavm_rfoex_tx_ind_seqnum_p_cfg_t
#define bustype_CAVM_RFOEX_TX_IND_SEQNUM_P_CFG(a) CSR_TYPE_NCB
#define basename_CAVM_RFOEX_TX_IND_SEQNUM_P_CFG(a) "RFOEX_TX_IND_SEQNUM_P_CFG"
#define busnum_CAVM_RFOEX_TX_IND_SEQNUM_P_CFG(a) (a)
#define arguments_CAVM_RFOEX_TX_IND_SEQNUM_P_CFG(a) (a),-1,-1,-1

/**
 * Register (NCB) rfoe#_tx_ind_seqnum_prop_cfg
 *
 * RFOE TX Indirect SeqNum Property Configuration Register
 * Transmit .seqNum configuration.  Refer to IEEE 1914.3-2018
 * Table 5 for details on sequence number configuration.
 *
 * This register indirectly accesses a table of 1024 entries with p-counter
 * configuration for each transmit flow.
 *
 * Reads and writes to this register access the table entry specified by
 * RFOE()_TX_INDIRECT_INDEX[INDEX].
 *
 * Packet transmissions access entries based on the flow specified by
 * RFOE()_AB()_SLOT()_CONFIGURATION[FLOW_PTR].
 */
union cavm_rfoex_tx_ind_seqnum_prop_cfg
{
    uint64_t u;
    struct cavm_rfoex_tx_ind_seqnum_prop_cfg_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t seqnum_rsvd           : 32; /**< [ 63: 32](R/W) Static value for reserved field. */
        uint64_t reserved_7_31         : 25;
        uint64_t pinc_prop             : 3;  /**< [  6:  4](R/W) SeqNumPIncProp:
                                                                 0x0 = No increment.
                                                                 0x1 = Increment p-counter by RFOE()_TX_IND_SEQNUM_P_CFG[PINC] on each
                                                                 sent packet.
                                                                 0x2 = Increment by the RoE payload size on every sent packet.
                                                                 0x3 - 0x7 = Reserved. */
        uint64_t reserved_3            : 1;
        uint64_t qinc_prop             : 3;  /**< [  2:  0](R/W) SeqNumQIncProp:
                                                                 0x0 = No increment.
                                                                 0x1 = Increment q-counter by RFOE()_TX_IND_SEQNUM_Q_CFG[QINC] on each
                                                                 sent packet.
                                                                 0x2 - 0x7 = Reserved. */
#else /* Word 0 - Little Endian */
        uint64_t qinc_prop             : 3;  /**< [  2:  0](R/W) SeqNumQIncProp:
                                                                 0x0 = No increment.
                                                                 0x1 = Increment q-counter by RFOE()_TX_IND_SEQNUM_Q_CFG[QINC] on each
                                                                 sent packet.
                                                                 0x2 - 0x7 = Reserved. */
        uint64_t reserved_3            : 1;
        uint64_t pinc_prop             : 3;  /**< [  6:  4](R/W) SeqNumPIncProp:
                                                                 0x0 = No increment.
                                                                 0x1 = Increment p-counter by RFOE()_TX_IND_SEQNUM_P_CFG[PINC] on each
                                                                 sent packet.
                                                                 0x2 = Increment by the RoE payload size on every sent packet.
                                                                 0x3 - 0x7 = Reserved. */
        uint64_t reserved_7_31         : 25;
        uint64_t seqnum_rsvd           : 32; /**< [ 63: 32](R/W) Static value for reserved field. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_rfoex_tx_ind_seqnum_prop_cfg_s cn; */
};
typedef union cavm_rfoex_tx_ind_seqnum_prop_cfg cavm_rfoex_tx_ind_seqnum_prop_cfg_t;

static inline uint64_t CAVM_RFOEX_TX_IND_SEQNUM_PROP_CFG(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_RFOEX_TX_IND_SEQNUM_PROP_CFG(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_ODINMP) && (a<=6))
        return 0x861000000c10ll + 0x1000000ll * ((a) & 0x7);
    __cavm_csr_fatal("RFOEX_TX_IND_SEQNUM_PROP_CFG", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_RFOEX_TX_IND_SEQNUM_PROP_CFG(a) cavm_rfoex_tx_ind_seqnum_prop_cfg_t
#define bustype_CAVM_RFOEX_TX_IND_SEQNUM_PROP_CFG(a) CSR_TYPE_NCB
#define basename_CAVM_RFOEX_TX_IND_SEQNUM_PROP_CFG(a) "RFOEX_TX_IND_SEQNUM_PROP_CFG"
#define busnum_CAVM_RFOEX_TX_IND_SEQNUM_PROP_CFG(a) (a)
#define arguments_CAVM_RFOEX_TX_IND_SEQNUM_PROP_CFG(a) (a),-1,-1,-1

/**
 * Register (NCB) rfoe#_tx_ind_seqnum_q_cfg
 *
 * RFOE TX Indirect SeqNum Q-Counter Configuration Register
 * Transmit .seqNum q-counter configuration.  Refer to IEEE 1914.3-2018
 * Table 5 for details on q-counter configuration.
 *
 * This register indirectly accesses a table of 1024 entries with p-counter
 * configuration for each transmit flow.
 *
 * Reads and writes to this register access the table entry specified by
 * RFOE()_TX_INDIRECT_INDEX[INDEX].
 *
 * Packet transmissions access entries based on the flow specified by
 * RFOE()_AB()_SLOT()_CONFIGURATION[FLOW_PTR].
 */
union cavm_rfoex_tx_ind_seqnum_q_cfg
{
    uint64_t u;
    struct cavm_rfoex_tx_ind_seqnum_q_cfg_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t qinc                  : 32; /**< [ 63: 32](R/W) SeqNumQInc. Value to increment the q-counter by on every sent packet.
                                                                 The increment value must be less than RFOE()_TX_IND_SEQNUM_Q_CFG[QMAX]. */
        uint64_t qmax                  : 32; /**< [ 31:  0](R/W) SeqNumQMax. Maximum numerical value of the q-counter field. */
#else /* Word 0 - Little Endian */
        uint64_t qmax                  : 32; /**< [ 31:  0](R/W) SeqNumQMax. Maximum numerical value of the q-counter field. */
        uint64_t qinc                  : 32; /**< [ 63: 32](R/W) SeqNumQInc. Value to increment the q-counter by on every sent packet.
                                                                 The increment value must be less than RFOE()_TX_IND_SEQNUM_Q_CFG[QMAX]. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_rfoex_tx_ind_seqnum_q_cfg_s cn; */
};
typedef union cavm_rfoex_tx_ind_seqnum_q_cfg cavm_rfoex_tx_ind_seqnum_q_cfg_t;

static inline uint64_t CAVM_RFOEX_TX_IND_SEQNUM_Q_CFG(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_RFOEX_TX_IND_SEQNUM_Q_CFG(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_ODINMP) && (a<=6))
        return 0x861000000c08ll + 0x1000000ll * ((a) & 0x7);
    __cavm_csr_fatal("RFOEX_TX_IND_SEQNUM_Q_CFG", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_RFOEX_TX_IND_SEQNUM_Q_CFG(a) cavm_rfoex_tx_ind_seqnum_q_cfg_t
#define bustype_CAVM_RFOEX_TX_IND_SEQNUM_Q_CFG(a) CSR_TYPE_NCB
#define basename_CAVM_RFOEX_TX_IND_SEQNUM_Q_CFG(a) "RFOEX_TX_IND_SEQNUM_Q_CFG"
#define busnum_CAVM_RFOEX_TX_IND_SEQNUM_Q_CFG(a) (a)
#define arguments_CAVM_RFOEX_TX_IND_SEQNUM_Q_CFG(a) (a),-1,-1,-1

/**
 * Register (NCB) rfoe#_tx_ind_seqnum_state
 *
 * RFOE TX Job Descriptor Table  SEQNUM STATE Register
 * Transmit .seqNum configuration.  Refer to IEEE 1914.3-2018
 * Table 5 for details on RoE sequence numbers.
 *
 * This register indirectly accesses a table of 1024 entries with p-counter
 * configuration for each transmit flow.
 *
 * Reads and writes to this register access the table entry specified by
 * RFOE()_TX_INDIRECT_INDEX[INDEX].
 *
 * Packet transmissions access entries based on the flow specified by
 * RFOE()_AB()_SLOT()_CONFIGURATION[FLOW_PTR].
 */
union cavm_rfoex_tx_ind_seqnum_state
{
    uint64_t u;
    struct cavm_rfoex_tx_ind_seqnum_state_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t pval                  : 32; /**< [ 63: 32](R/W) Value of the p-counter.
                                                                 The initial value must be less than RFOE()_TX_IND_SEQNUM_P_CFG[PMAX]. */
        uint64_t qval                  : 32; /**< [ 31:  0](R/W) Value of the q-counter.
                                                                 The initial value must be less than RFOE()_TX_IND_SEQNUM_Q_CFG[QMAX]. */
#else /* Word 0 - Little Endian */
        uint64_t qval                  : 32; /**< [ 31:  0](R/W) Value of the q-counter.
                                                                 The initial value must be less than RFOE()_TX_IND_SEQNUM_Q_CFG[QMAX]. */
        uint64_t pval                  : 32; /**< [ 63: 32](R/W) Value of the p-counter.
                                                                 The initial value must be less than RFOE()_TX_IND_SEQNUM_P_CFG[PMAX]. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_rfoex_tx_ind_seqnum_state_s cn; */
};
typedef union cavm_rfoex_tx_ind_seqnum_state cavm_rfoex_tx_ind_seqnum_state_t;

static inline uint64_t CAVM_RFOEX_TX_IND_SEQNUM_STATE(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_RFOEX_TX_IND_SEQNUM_STATE(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_ODINMP) && (a<=6))
        return 0x861000000c18ll + 0x1000000ll * ((a) & 0x7);
    __cavm_csr_fatal("RFOEX_TX_IND_SEQNUM_STATE", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_RFOEX_TX_IND_SEQNUM_STATE(a) cavm_rfoex_tx_ind_seqnum_state_t
#define bustype_CAVM_RFOEX_TX_IND_SEQNUM_STATE(a) CSR_TYPE_NCB
#define basename_CAVM_RFOEX_TX_IND_SEQNUM_STATE(a) "RFOEX_TX_IND_SEQNUM_STATE"
#define busnum_CAVM_RFOEX_TX_IND_SEQNUM_STATE(a) (a)
#define arguments_CAVM_RFOEX_TX_IND_SEQNUM_STATE(a) (a),-1,-1,-1

/**
 * Register (NCB) rfoe#_tx_indirect_index
 *
 * RFOE TX Indirect Index Register
 * Index for reading and writing RFOE TX configuration tables.
 */
union cavm_rfoex_tx_indirect_index
{
    uint64_t u;
    struct cavm_rfoex_tx_indirect_index_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_8_63         : 56;
        uint64_t index                 : 8;  /**< [  7:  0](R/W) Index used to select entry in RFOE()_TX_IND_* tables. */
#else /* Word 0 - Little Endian */
        uint64_t index                 : 8;  /**< [  7:  0](R/W) Index used to select entry in RFOE()_TX_IND_* tables. */
        uint64_t reserved_8_63         : 56;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_rfoex_tx_indirect_index_s cn; */
};
typedef union cavm_rfoex_tx_indirect_index cavm_rfoex_tx_indirect_index_t;

static inline uint64_t CAVM_RFOEX_TX_INDIRECT_INDEX(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_RFOEX_TX_INDIRECT_INDEX(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_ODINMP) && (a<=6))
        return 0x861000000bf8ll + 0x1000000ll * ((a) & 0x7);
    __cavm_csr_fatal("RFOEX_TX_INDIRECT_INDEX", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_RFOEX_TX_INDIRECT_INDEX(a) cavm_rfoex_tx_indirect_index_t
#define bustype_CAVM_RFOEX_TX_INDIRECT_INDEX(a) CSR_TYPE_NCB
#define basename_CAVM_RFOEX_TX_INDIRECT_INDEX(a) "RFOEX_TX_INDIRECT_INDEX"
#define busnum_CAVM_RFOEX_TX_INDIRECT_INDEX(a) (a)
#define arguments_CAVM_RFOEX_TX_INDIRECT_INDEX(a) (a),-1,-1,-1

/**
 * Register (NCB) rfoe#_tx_inst
 *
 * RFOE Instance ID Register
 * RFOE Instance ID Register
 */
union cavm_rfoex_tx_inst
{
    uint64_t u;
    struct cavm_rfoex_tx_inst_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_16_63        : 48;
        uint64_t p2x_channel_id        : 12; /**< [ 15:  4](R/W) P2X Channel ID. Destination channel ID used on the P2X interface.
                                                                 The bit field [5:4] represent the LMAC ID of the packet sent and is
                                                                 replaced by the RFOE()_AB()_SLOT()_CONFIGURATION3[LMACID] */
        uint64_t inst_id               : 4;  /**< [  3:  0](R/W) RFOE Instance ID. */
#else /* Word 0 - Little Endian */
        uint64_t inst_id               : 4;  /**< [  3:  0](R/W) RFOE Instance ID. */
        uint64_t p2x_channel_id        : 12; /**< [ 15:  4](R/W) P2X Channel ID. Destination channel ID used on the P2X interface.
                                                                 The bit field [5:4] represent the LMAC ID of the packet sent and is
                                                                 replaced by the RFOE()_AB()_SLOT()_CONFIGURATION3[LMACID] */
        uint64_t reserved_16_63        : 48;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_rfoex_tx_inst_s cn; */
};
typedef union cavm_rfoex_tx_inst cavm_rfoex_tx_inst_t;

static inline uint64_t CAVM_RFOEX_TX_INST(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_RFOEX_TX_INST(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_ODINMP) && (a<=6))
        return 0x861000000908ll + 0x1000000ll * ((a) & 0x7);
    __cavm_csr_fatal("RFOEX_TX_INST", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_RFOEX_TX_INST(a) cavm_rfoex_tx_inst_t
#define bustype_CAVM_RFOEX_TX_INST(a) CSR_TYPE_NCB
#define basename_CAVM_RFOEX_TX_INST(a) "RFOEX_TX_INST"
#define busnum_CAVM_RFOEX_TX_INST(a) (a)
#define arguments_CAVM_RFOEX_TX_INST(a) (a),-1,-1,-1

/**
 * Register (NCB) rfoe#_tx_lmac_cfg#
 *
 * RFOE TX Packet LMAC Configuration Register
 * Configures channel credits per LMAC.
 */
union cavm_rfoex_tx_lmac_cfgx
{
    uint64_t u;
    struct cavm_rfoex_tx_lmac_cfgx_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_59_63        : 5;
        uint64_t ptp_wd_period         : 5;  /**< [ 58: 54](R/W) Watchdog timeout count for waiting for PTP commit from RPM.
                                                                 The timeout period is (2^[PTP_WD_PERIOD]) timer ticks, where each
                                                                 tick is 1 cycle of the BCLK. 10 = 1024 tick, 11 = 2048 ticks, ...
                                                                 Valid range = 10 to 21. */
        uint64_t cc_wd_period          : 20; /**< [ 53: 34](R/W) Watchdog timeout count for waiting for Channel Credits.
                                                                 The timeout period is [CC_WD_PERIOD] timer ticks, where each
                                                                 tick is 16 cycles of the BCLK. */
        uint64_t cc_count_stat         : 13; /**< [ 33: 21](RO/H) Channel-credit current count status.
                                                                 This value represents the current Channel credits available for this LMAC.
                                                                 The value gets reloaded when [DATA_PKT_TX_LMAC_EN] is set to 1 and
                                                                 the value is reloaded after reset is deasserted.
                                                                 This value is valid when [CC_ENABLE] is 0x2 or 0x3. */
        uint64_t cc_count              : 13; /**< [ 20:  8](R/W) Channel-credit unit count. This value indicates the maximum credit units allowed for
                                                                 this LMAC. One credit unit is one flit (up to 16 Bytes max) on the P2X bus.
                                                                 Packets are not allowed to flow when the current value of [CC_COUNT_STAT] is less
                                                                 than packet length.
                                                                 In order to prevent blocking between RPM LMACs, [CC_ENABLE] should be set to 0x2
                                                                 or 0x3 and [CC_COUNT] appropriately configured.
                                                                 The recommended configuration is based on the LMAC TX buffer size. The LMAC TX
                                                                 buffer size is defined by RPM()_CMR_TX_LMACS[LMACS]. For example, if
                                                                 RPM()_CMR_TX_LMACS[LMACS]=0x4 (16 KB per LMAC), then [CC_COUNT] = 0xfff.
                                                                 [CC_COUNT] cannot be changed after [CC_ENABLE] is set to 0x2 or 0x3.
                                                                 When [CC_ENABLE] is set to 0x2 or 0x3 and setting [CC_COUNT]=0 is nonsensical. */
        uint64_t reserved_5_7          : 3;
        uint64_t cc_wd_timeout_stat    : 1;  /**< [  4:  4](R/W1C/H) Watchdog timeout event status.
                                                                 When set to 1, it indicates a [CC_WD_PERIOD] timeout event occurred.
                                                                 Software can clear this by writing a 1. */
        uint64_t tx_pkt_log_en         : 1;  /**< [  3:  3](R/W) Transmit packet logging enable.
                                                                 When set to 1, enables packet logging for packets transmitted. */
        uint64_t cc_enable             : 2;  /**< [  2:  1](R/W) Channel credit check enable. Enables [CC_COUNT] channel credit processing for
                                                                 packets destined to this LMAC.
                                                                 _ [CC_ENABLE]=0 - Channel credit check is disabled.
                                                                 _ [CC_ENABLE]=1 - Channel credit check is disabled.
                                                                 _ [CC_ENABLE]=2 - Channel credit check is enabled.
                                                                 _                 The transmit state machine checks the packet length against the [CC_COUNT_STAT].
                                                                 _                 If the current packet length is \<= [CC_COUNT_STAT], the packet is sent to RPM.
                                                                 _                 If the current packet length is \> [CC_COUNT_STAT], the transmit state machine
                                                                 _                 stalls and waits until the required [CC_COUNT] is available before sending
                                                                 _                 the packet.
                                                                 _ [CC_ENABLE]=3 - Channel Credit Check is enabled.
                                                                 _                 The transmit state machine checks the packet length against the [CC_COUNT_STAT].
                                                                 _                 If the current packet length is \<= [CC_COUNT_STAT], the packet is sent to RPM.
                                                                 _                 If the current packet length is \> [CC_COUNT_STAT], the
                                                                 _                 transmit state machine drops the packet. */
        uint64_t data_pkt_tx_lmac_en   : 1;  /**< [  0:  0](R/W) Enable TX traffic to RPM LMAC.
                                                                 Software must write to 1 to [DATA_PKT_TX_LMAC_EN] and
                                                                 RFOE()_TX_CTRL[DATA_PKT_TX_EN] to enable TX traffic to this LMAC.
                                                                 When 0, RFOE discards transmit packets destined to this LMAC. */
#else /* Word 0 - Little Endian */
        uint64_t data_pkt_tx_lmac_en   : 1;  /**< [  0:  0](R/W) Enable TX traffic to RPM LMAC.
                                                                 Software must write to 1 to [DATA_PKT_TX_LMAC_EN] and
                                                                 RFOE()_TX_CTRL[DATA_PKT_TX_EN] to enable TX traffic to this LMAC.
                                                                 When 0, RFOE discards transmit packets destined to this LMAC. */
        uint64_t cc_enable             : 2;  /**< [  2:  1](R/W) Channel credit check enable. Enables [CC_COUNT] channel credit processing for
                                                                 packets destined to this LMAC.
                                                                 _ [CC_ENABLE]=0 - Channel credit check is disabled.
                                                                 _ [CC_ENABLE]=1 - Channel credit check is disabled.
                                                                 _ [CC_ENABLE]=2 - Channel credit check is enabled.
                                                                 _                 The transmit state machine checks the packet length against the [CC_COUNT_STAT].
                                                                 _                 If the current packet length is \<= [CC_COUNT_STAT], the packet is sent to RPM.
                                                                 _                 If the current packet length is \> [CC_COUNT_STAT], the transmit state machine
                                                                 _                 stalls and waits until the required [CC_COUNT] is available before sending
                                                                 _                 the packet.
                                                                 _ [CC_ENABLE]=3 - Channel Credit Check is enabled.
                                                                 _                 The transmit state machine checks the packet length against the [CC_COUNT_STAT].
                                                                 _                 If the current packet length is \<= [CC_COUNT_STAT], the packet is sent to RPM.
                                                                 _                 If the current packet length is \> [CC_COUNT_STAT], the
                                                                 _                 transmit state machine drops the packet. */
        uint64_t tx_pkt_log_en         : 1;  /**< [  3:  3](R/W) Transmit packet logging enable.
                                                                 When set to 1, enables packet logging for packets transmitted. */
        uint64_t cc_wd_timeout_stat    : 1;  /**< [  4:  4](R/W1C/H) Watchdog timeout event status.
                                                                 When set to 1, it indicates a [CC_WD_PERIOD] timeout event occurred.
                                                                 Software can clear this by writing a 1. */
        uint64_t reserved_5_7          : 3;
        uint64_t cc_count              : 13; /**< [ 20:  8](R/W) Channel-credit unit count. This value indicates the maximum credit units allowed for
                                                                 this LMAC. One credit unit is one flit (up to 16 Bytes max) on the P2X bus.
                                                                 Packets are not allowed to flow when the current value of [CC_COUNT_STAT] is less
                                                                 than packet length.
                                                                 In order to prevent blocking between RPM LMACs, [CC_ENABLE] should be set to 0x2
                                                                 or 0x3 and [CC_COUNT] appropriately configured.
                                                                 The recommended configuration is based on the LMAC TX buffer size. The LMAC TX
                                                                 buffer size is defined by RPM()_CMR_TX_LMACS[LMACS]. For example, if
                                                                 RPM()_CMR_TX_LMACS[LMACS]=0x4 (16 KB per LMAC), then [CC_COUNT] = 0xfff.
                                                                 [CC_COUNT] cannot be changed after [CC_ENABLE] is set to 0x2 or 0x3.
                                                                 When [CC_ENABLE] is set to 0x2 or 0x3 and setting [CC_COUNT]=0 is nonsensical. */
        uint64_t cc_count_stat         : 13; /**< [ 33: 21](RO/H) Channel-credit current count status.
                                                                 This value represents the current Channel credits available for this LMAC.
                                                                 The value gets reloaded when [DATA_PKT_TX_LMAC_EN] is set to 1 and
                                                                 the value is reloaded after reset is deasserted.
                                                                 This value is valid when [CC_ENABLE] is 0x2 or 0x3. */
        uint64_t cc_wd_period          : 20; /**< [ 53: 34](R/W) Watchdog timeout count for waiting for Channel Credits.
                                                                 The timeout period is [CC_WD_PERIOD] timer ticks, where each
                                                                 tick is 16 cycles of the BCLK. */
        uint64_t ptp_wd_period         : 5;  /**< [ 58: 54](R/W) Watchdog timeout count for waiting for PTP commit from RPM.
                                                                 The timeout period is (2^[PTP_WD_PERIOD]) timer ticks, where each
                                                                 tick is 1 cycle of the BCLK. 10 = 1024 tick, 11 = 2048 ticks, ...
                                                                 Valid range = 10 to 21. */
        uint64_t reserved_59_63        : 5;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_rfoex_tx_lmac_cfgx_s cn; */
};
typedef union cavm_rfoex_tx_lmac_cfgx cavm_rfoex_tx_lmac_cfgx_t;

static inline uint64_t CAVM_RFOEX_TX_LMAC_CFGX(uint64_t a, uint64_t b) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_RFOEX_TX_LMAC_CFGX(uint64_t a, uint64_t b)
{
    if (cavm_is_model(OCTEONTX_ODINMP) && ((a<=6) && (b<=3)))
        return 0x861000000f80ll + 0x1000000ll * ((a) & 0x7) + 8ll * ((b) & 0x3);
    __cavm_csr_fatal("RFOEX_TX_LMAC_CFGX", 2, a, b, 0, 0, 0, 0);
}

#define typedef_CAVM_RFOEX_TX_LMAC_CFGX(a,b) cavm_rfoex_tx_lmac_cfgx_t
#define bustype_CAVM_RFOEX_TX_LMAC_CFGX(a,b) CSR_TYPE_NCB
#define basename_CAVM_RFOEX_TX_LMAC_CFGX(a,b) "RFOEX_TX_LMAC_CFGX"
#define busnum_CAVM_RFOEX_TX_LMAC_CFGX(a,b) (a)
#define arguments_CAVM_RFOEX_TX_LMAC_CFGX(a,b) (a),(b),-1,-1

/**
 * Register (NCB) rfoe#_tx_octs_stat#
 *
 * RFOE TX Packet Statistic Register
 * Counts the number of octets sent. One counter per LMAC.
 */
union cavm_rfoex_tx_octs_statx
{
    uint64_t u;
    struct cavm_rfoex_tx_octs_statx_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_48_63        : 16;
        uint64_t stat                  : 48; /**< [ 47:  0](R/W/H) Number of octets sent. This excludes the FCS bytes. Wraps to zero at 2^48. */
#else /* Word 0 - Little Endian */
        uint64_t stat                  : 48; /**< [ 47:  0](R/W/H) Number of octets sent. This excludes the FCS bytes. Wraps to zero at 2^48. */
        uint64_t reserved_48_63        : 16;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_rfoex_tx_octs_statx_s cn; */
};
typedef union cavm_rfoex_tx_octs_statx cavm_rfoex_tx_octs_statx_t;

static inline uint64_t CAVM_RFOEX_TX_OCTS_STATX(uint64_t a, uint64_t b) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_RFOEX_TX_OCTS_STATX(uint64_t a, uint64_t b)
{
    if (cavm_is_model(OCTEONTX_ODINMP) && ((a<=6) && (b<=3)))
        return 0x861000000f40ll + 0x1000000ll * ((a) & 0x7) + 8ll * ((b) & 0x3);
    __cavm_csr_fatal("RFOEX_TX_OCTS_STATX", 2, a, b, 0, 0, 0, 0);
}

#define typedef_CAVM_RFOEX_TX_OCTS_STATX(a,b) cavm_rfoex_tx_octs_statx_t
#define bustype_CAVM_RFOEX_TX_OCTS_STATX(a,b) CSR_TYPE_NCB
#define basename_CAVM_RFOEX_TX_OCTS_STATX(a,b) "RFOEX_TX_OCTS_STATX"
#define busnum_CAVM_RFOEX_TX_OCTS_STATX(a,b) (a)
#define arguments_CAVM_RFOEX_TX_OCTS_STATX(a,b) (a),(b),-1,-1

/**
 * Register (NCB) rfoe#_tx_pkt_drop_stat#
 *
 * RFOE TX Packet Dropped Statistic Register
 * Counts the number of packets dropped. One counter per LMAC.
 */
union cavm_rfoex_tx_pkt_drop_statx
{
    uint64_t u;
    struct cavm_rfoex_tx_pkt_drop_statx_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_48_63        : 16;
        uint64_t stat                  : 48; /**< [ 47:  0](R/W/H) Number of packets dropped. Wraps to zero at 2^48. */
#else /* Word 0 - Little Endian */
        uint64_t stat                  : 48; /**< [ 47:  0](R/W/H) Number of packets dropped. Wraps to zero at 2^48. */
        uint64_t reserved_48_63        : 16;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_rfoex_tx_pkt_drop_statx_s cn; */
};
typedef union cavm_rfoex_tx_pkt_drop_statx cavm_rfoex_tx_pkt_drop_statx_t;

static inline uint64_t CAVM_RFOEX_TX_PKT_DROP_STATX(uint64_t a, uint64_t b) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_RFOEX_TX_PKT_DROP_STATX(uint64_t a, uint64_t b)
{
    if (cavm_is_model(OCTEONTX_ODINMP) && ((a<=6) && (b<=3)))
        return 0x861000000f60ll + 0x1000000ll * ((a) & 0x7) + 8ll * ((b) & 0x3);
    __cavm_csr_fatal("RFOEX_TX_PKT_DROP_STATX", 2, a, b, 0, 0, 0, 0);
}

#define typedef_CAVM_RFOEX_TX_PKT_DROP_STATX(a,b) cavm_rfoex_tx_pkt_drop_statx_t
#define bustype_CAVM_RFOEX_TX_PKT_DROP_STATX(a,b) CSR_TYPE_NCB
#define basename_CAVM_RFOEX_TX_PKT_DROP_STATX(a,b) "RFOEX_TX_PKT_DROP_STATX"
#define busnum_CAVM_RFOEX_TX_PKT_DROP_STATX(a,b) (a)
#define arguments_CAVM_RFOEX_TX_PKT_DROP_STATX(a,b) (a),(b),-1,-1

/**
 * Register (NCB) rfoe#_tx_pkt_stat#
 *
 * RFOE TX Packet Statistic Register
 * Counts the number of packets sent. One counter per LMAC.
 */
union cavm_rfoex_tx_pkt_statx
{
    uint64_t u;
    struct cavm_rfoex_tx_pkt_statx_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_48_63        : 16;
        uint64_t stat                  : 48; /**< [ 47:  0](R/W/H) Number of packets sent. Wraps to zero at 2^48. */
#else /* Word 0 - Little Endian */
        uint64_t stat                  : 48; /**< [ 47:  0](R/W/H) Number of packets sent. Wraps to zero at 2^48. */
        uint64_t reserved_48_63        : 16;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_rfoex_tx_pkt_statx_s cn; */
};
typedef union cavm_rfoex_tx_pkt_statx cavm_rfoex_tx_pkt_statx_t;

static inline uint64_t CAVM_RFOEX_TX_PKT_STATX(uint64_t a, uint64_t b) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_RFOEX_TX_PKT_STATX(uint64_t a, uint64_t b)
{
    if (cavm_is_model(OCTEONTX_ODINMP) && ((a<=6) && (b<=3)))
        return 0x861000000f20ll + 0x1000000ll * ((a) & 0x7) + 8ll * ((b) & 0x3);
    __cavm_csr_fatal("RFOEX_TX_PKT_STATX", 2, a, b, 0, 0, 0, 0);
}

#define typedef_CAVM_RFOEX_TX_PKT_STATX(a,b) cavm_rfoex_tx_pkt_statx_t
#define bustype_CAVM_RFOEX_TX_PKT_STATX(a,b) CSR_TYPE_NCB
#define basename_CAVM_RFOEX_TX_PKT_STATX(a,b) "RFOEX_TX_PKT_STATX"
#define busnum_CAVM_RFOEX_TX_PKT_STATX(a,b) (a)
#define arguments_CAVM_RFOEX_TX_PKT_STATX(a,b) (a),(b),-1,-1

/**
 * Register (NCB) rfoe#_tx_ptp_tstmp_w0#
 *
 * RFOE TX PTP Timestamp Commit W0 Register
 * This register captures the PTP timestamp of the last TX packet that
 * requested a PTP timestamp. This register is defined for each LMAC.
 */
union cavm_rfoex_tx_ptp_tstmp_w0x
{
    uint64_t u;
    struct cavm_rfoex_tx_ptp_tstmp_w0x_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t ptp_tstmp_commit      : 64; /**< [ 63:  0](RO/H) PTP commit time timestamp. */
#else /* Word 0 - Little Endian */
        uint64_t ptp_tstmp_commit      : 64; /**< [ 63:  0](RO/H) PTP commit time timestamp. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_rfoex_tx_ptp_tstmp_w0x_s cn; */
};
typedef union cavm_rfoex_tx_ptp_tstmp_w0x cavm_rfoex_tx_ptp_tstmp_w0x_t;

static inline uint64_t CAVM_RFOEX_TX_PTP_TSTMP_W0X(uint64_t a, uint64_t b) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_RFOEX_TX_PTP_TSTMP_W0X(uint64_t a, uint64_t b)
{
    if (cavm_is_model(OCTEONTX_ODINMP) && ((a<=6) && (b<=3)))
        return 0x861000000fa0ll + 0x1000000ll * ((a) & 0x7) + 8ll * ((b) & 0x3);
    __cavm_csr_fatal("RFOEX_TX_PTP_TSTMP_W0X", 2, a, b, 0, 0, 0, 0);
}

#define typedef_CAVM_RFOEX_TX_PTP_TSTMP_W0X(a,b) cavm_rfoex_tx_ptp_tstmp_w0x_t
#define bustype_CAVM_RFOEX_TX_PTP_TSTMP_W0X(a,b) CSR_TYPE_NCB
#define basename_CAVM_RFOEX_TX_PTP_TSTMP_W0X(a,b) "RFOEX_TX_PTP_TSTMP_W0X"
#define busnum_CAVM_RFOEX_TX_PTP_TSTMP_W0X(a,b) (a)
#define arguments_CAVM_RFOEX_TX_PTP_TSTMP_W0X(a,b) (a),(b),-1,-1

/**
 * Register (NCB) rfoe#_tx_ptp_tstmp_w1#
 *
 * RFOE TX PTP Timestamp Commit W1 Register
 * This register captures related info about the packet that requested a PTP timestamp.
 * This register is updated at the same time when RFOE()_TX_PTP_TSTMP_W0() is updated.
 * This register is defined for each LMAC.
 */
union cavm_rfoex_tx_ptp_tstmp_w1x
{
    uint64_t u;
    struct cavm_rfoex_tx_ptp_tstmp_w1x_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t valid                 : 1;  /**< [ 63: 63](RC/H) When set to 1, indicates RFOE()_TX_PTP_TSTMP_W0() and this register were updated. */
        uint64_t reserved_24_62        : 39;
        uint64_t tx_err                : 1;  /**< [ 23: 23](RO/H) When set to 1, indicates the packet was sent to RPM with error bit set. */
        uint64_t drop                  : 1;  /**< [ 22: 22](RO/H) When set to 1, indicates the packet was dropped by the RFOE block. */
        uint64_t jobid                 : 16; /**< [ 21:  6](RO/H) The AB Job ID for this packet. */
        uint64_t rfoe_id               : 4;  /**< [  5:  2](RO/H) Instance of the RFOE block from which the packet was sent. */
        uint64_t lmac_id               : 2;  /**< [  1:  0](RO/H) LMAC to which the packet was sent. */
#else /* Word 0 - Little Endian */
        uint64_t lmac_id               : 2;  /**< [  1:  0](RO/H) LMAC to which the packet was sent. */
        uint64_t rfoe_id               : 4;  /**< [  5:  2](RO/H) Instance of the RFOE block from which the packet was sent. */
        uint64_t jobid                 : 16; /**< [ 21:  6](RO/H) The AB Job ID for this packet. */
        uint64_t drop                  : 1;  /**< [ 22: 22](RO/H) When set to 1, indicates the packet was dropped by the RFOE block. */
        uint64_t tx_err                : 1;  /**< [ 23: 23](RO/H) When set to 1, indicates the packet was sent to RPM with error bit set. */
        uint64_t reserved_24_62        : 39;
        uint64_t valid                 : 1;  /**< [ 63: 63](RC/H) When set to 1, indicates RFOE()_TX_PTP_TSTMP_W0() and this register were updated. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_rfoex_tx_ptp_tstmp_w1x_s cn; */
};
typedef union cavm_rfoex_tx_ptp_tstmp_w1x cavm_rfoex_tx_ptp_tstmp_w1x_t;

static inline uint64_t CAVM_RFOEX_TX_PTP_TSTMP_W1X(uint64_t a, uint64_t b) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_RFOEX_TX_PTP_TSTMP_W1X(uint64_t a, uint64_t b)
{
    if (cavm_is_model(OCTEONTX_ODINMP) && ((a<=6) && (b<=3)))
        return 0x861000000fc0ll + 0x1000000ll * ((a) & 0x7) + 8ll * ((b) & 0x3);
    __cavm_csr_fatal("RFOEX_TX_PTP_TSTMP_W1X", 2, a, b, 0, 0, 0, 0);
}

#define typedef_CAVM_RFOEX_TX_PTP_TSTMP_W1X(a,b) cavm_rfoex_tx_ptp_tstmp_w1x_t
#define bustype_CAVM_RFOEX_TX_PTP_TSTMP_W1X(a,b) CSR_TYPE_NCB
#define basename_CAVM_RFOEX_TX_PTP_TSTMP_W1X(a,b) "RFOEX_TX_PTP_TSTMP_W1X"
#define busnum_CAVM_RFOEX_TX_PTP_TSTMP_W1X(a,b) (a)
#define arguments_CAVM_RFOEX_TX_PTP_TSTMP_W1X(a,b) (a),(b),-1,-1

#endif /* __CAVM_CSRS_RFOE_H__ */
