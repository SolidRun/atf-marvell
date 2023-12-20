#ifndef __CAVM_CSRS_CPRI_H__
#define __CAVM_CSRS_CPRI_H__
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
 * CPRI.
 *
 * This file is auto generated. Do not edit.
 *
 */

/**
 * Structure cpri_pkt_dl_wqe_hdr_flit1_s
 *
 * CPRI Packet Downlink WQE Header 1st Flit Structure
 * Specifies 1st flit structure for WQE header of a DownLink Ethernet Packet Buffer.
 */
union cavm_cpri_pkt_dl_wqe_hdr_flit1_s
{
    uint64_t u[2];
    struct cavm_cpri_pkt_dl_wqe_hdr_flit1_s_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_19_63        : 45;
        uint64_t pkt_length            : 11; /**< [ 18:  8] Packet Length in bytes for transmission. The Length starts from the 1st byte of
                                                                 the MAC Destination Address, and until the last Ethernet byte excluding the FCS. */
        uint64_t reserved_6_7          : 2;
        uint64_t mhab_id               : 2;  /**< [  5:  4] Destination CPRI MHAB ID in RFIF. */
        uint64_t reserved_2_3          : 2;
        uint64_t lane_id               : 2;  /**< [  1:  0] Destination lane ID within the CPRI MHAB. Lanes 0,1 belong to CPRI MAC 0 and
                                                                 lanes 2,3 belong to CPRI MAC 1. */
#else /* Word 0 - Little Endian */
        uint64_t lane_id               : 2;  /**< [  1:  0] Destination lane ID within the CPRI MHAB. Lanes 0,1 belong to CPRI MAC 0 and
                                                                 lanes 2,3 belong to CPRI MAC 1. */
        uint64_t reserved_2_3          : 2;
        uint64_t mhab_id               : 2;  /**< [  5:  4] Destination CPRI MHAB ID in RFIF. */
        uint64_t reserved_6_7          : 2;
        uint64_t pkt_length            : 11; /**< [ 18:  8] Packet Length in bytes for transmission. The Length starts from the 1st byte of
                                                                 the MAC Destination Address, and until the last Ethernet byte excluding the FCS. */
        uint64_t reserved_19_63        : 45;
#endif /* Word 0 - End */
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 1 - Big Endian */
        uint64_t reserved_64_127       : 64;
#else /* Word 1 - Little Endian */
        uint64_t reserved_64_127       : 64;
#endif /* Word 1 - End */
    } s;
    /* struct cavm_cpri_pkt_dl_wqe_hdr_flit1_s_s cn; */
};

/**
 * Structure cpri_pkt_ul_wqe_hdr_flit1_s
 *
 * CPRI Packet Uplink WQE Header 1st Flit Structure
 * Specifies 1st Flit structure for WQE Header of a UpLink Ethernet Packet Buffer
 */
union cavm_cpri_pkt_ul_wqe_hdr_flit1_s
{
    uint64_t u[2];
    struct cavm_cpri_pkt_ul_wqe_hdr_flit1_s_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_27_63        : 37;
        uint64_t rsp_nferr             : 1;  /**< [ 26: 26] Received Non-Fatal Error Response when writing the packet to memory. */
        uint64_t rsp_ferr              : 1;  /**< [ 25: 25] Received Fatal Error Response when writing the packet to memory. */
        uint64_t fcserr                : 1;  /**< [ 24: 24] Received Packet has FCS Error. */
        uint64_t reserved_19_23        : 5;
        uint64_t pkt_length            : 11; /**< [ 18:  8] Received Packet Length in bytes. The Length starts from the 1st byte of the MAC
                                                                 Destination Address, and until the last Ethernet byte excluding the FCS. */
        uint64_t reserved_6_7          : 2;
        uint64_t mhab_id               : 2;  /**< [  5:  4] Source CPRI MHAB ID in RFIF. */
        uint64_t reserved_2_3          : 2;
        uint64_t lane_id               : 2;  /**< [  1:  0] Source Lane ID within the CPRI MHAB. Values 0,1 belong to CPRI MAC 0 and values
                                                                 2,3 belong to CPRI MAC 1. */
#else /* Word 0 - Little Endian */
        uint64_t lane_id               : 2;  /**< [  1:  0] Source Lane ID within the CPRI MHAB. Values 0,1 belong to CPRI MAC 0 and values
                                                                 2,3 belong to CPRI MAC 1. */
        uint64_t reserved_2_3          : 2;
        uint64_t mhab_id               : 2;  /**< [  5:  4] Source CPRI MHAB ID in RFIF. */
        uint64_t reserved_6_7          : 2;
        uint64_t pkt_length            : 11; /**< [ 18:  8] Received Packet Length in bytes. The Length starts from the 1st byte of the MAC
                                                                 Destination Address, and until the last Ethernet byte excluding the FCS. */
        uint64_t reserved_19_23        : 5;
        uint64_t fcserr                : 1;  /**< [ 24: 24] Received Packet has FCS Error. */
        uint64_t rsp_ferr              : 1;  /**< [ 25: 25] Received Fatal Error Response when writing the packet to memory. */
        uint64_t rsp_nferr             : 1;  /**< [ 26: 26] Received Non-Fatal Error Response when writing the packet to memory. */
        uint64_t reserved_27_63        : 37;
#endif /* Word 0 - End */
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 1 - Big Endian */
        uint64_t reserved_64_127       : 64;
#else /* Word 1 - Little Endian */
        uint64_t reserved_64_127       : 64;
#endif /* Word 1 - End */
    } s;
    /* struct cavm_cpri_pkt_ul_wqe_hdr_flit1_s_s cn; */
};

/**
 * Structure cpri_rp3_ul_ctrl_msg_flit2_s
 *
 * CPRI RP3 Uplink Control Message 2nd Flit Structure
 * Specifies 2nd Flit structure for RP3 Control Uplink Message when writing to Memory.
 * First flit has the RP3 payload but is not included in this structure.
 */
union cavm_cpri_rp3_ul_ctrl_msg_flit2_s
{
    uint64_t u[2];
    struct cavm_cpri_rp3_ul_ctrl_msg_flit2_s_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t bcn_n1                : 4;  /**< [ 63: 60] BCN N1 of the received RP3 control message */
        uint64_t bcn_n2                : 24; /**< [ 59: 36] BCN N2 of the received RP3 control message */
        uint64_t reserved_35           : 1;
        uint64_t gip_id                : 3;  /**< [ 34: 32] Lowest signficant bit has the cpri_id or the CPRI MAC ID within the CPRI MHAB,
                                                                 and upper two bits has the rfif_id or the CPRI MHAB ID within the RFIF. */
        uint64_t reserved_30_31        : 2;
        uint64_t time_stamp            : 6;  /**< [ 29: 24] RP3 Timestamp Field. */
        uint64_t reserved_21_23        : 3;
        uint64_t ftype                 : 5;  /**< [ 20: 16] Field type carried forward for routed control messages. */
        uint64_t reserved_13_15        : 3;
        uint64_t addr                  : 13; /**< [ 12:  0] RP3 Message Address Field. */
#else /* Word 0 - Little Endian */
        uint64_t addr                  : 13; /**< [ 12:  0] RP3 Message Address Field. */
        uint64_t reserved_13_15        : 3;
        uint64_t ftype                 : 5;  /**< [ 20: 16] Field type carried forward for routed control messages. */
        uint64_t reserved_21_23        : 3;
        uint64_t time_stamp            : 6;  /**< [ 29: 24] RP3 Timestamp Field. */
        uint64_t reserved_30_31        : 2;
        uint64_t gip_id                : 3;  /**< [ 34: 32] Lowest signficant bit has the cpri_id or the CPRI MAC ID within the CPRI MHAB,
                                                                 and upper two bits has the rfif_id or the CPRI MHAB ID within the RFIF. */
        uint64_t reserved_35           : 1;
        uint64_t bcn_n2                : 24; /**< [ 59: 36] BCN N2 of the received RP3 control message */
        uint64_t bcn_n1                : 4;  /**< [ 63: 60] BCN N1 of the received RP3 control message */
#endif /* Word 0 - End */
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 1 - Big Endian */
        uint64_t reserved_64_127       : 64;
#else /* Word 1 - Little Endian */
        uint64_t reserved_64_127       : 64;
#endif /* Word 1 - End */
    } s;
    /* struct cavm_cpri_rp3_ul_ctrl_msg_flit2_s_s cn; */
};

/**
 * Register (NCB) cpri#_clk_div_cfg
 *
 * CPRI Clock Divider Configuration Register
 */
union cavm_cprix_clk_div_cfg
{
    uint64_t u;
    struct cavm_cprix_clk_div_cfg_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_13_63        : 51;
        uint64_t gmii_div_ratio        : 5;  /**< [ 12:  8](R/W) GMII bphy clock divider ratio. The value should be configured such that the resulting
                                                                 GMII clock frequency is below 130MHz.The reset value of 0xa assumes a maximum bphy
                                                                 clock frequency of 1.3Ghz. */
        uint64_t reserved_5_7          : 3;
        uint64_t pss_div_ratio         : 5;  /**< [  4:  0](R/W) PSS bphy clock divider ratio. The value should be configured such that the resulting
                                                                 PSS clock frequency is below 260MHz.The reset value of 0x6 assumes a maximum bphy
                                                                 clock frequency of 1.3Ghz. */
#else /* Word 0 - Little Endian */
        uint64_t pss_div_ratio         : 5;  /**< [  4:  0](R/W) PSS bphy clock divider ratio. The value should be configured such that the resulting
                                                                 PSS clock frequency is below 260MHz.The reset value of 0x6 assumes a maximum bphy
                                                                 clock frequency of 1.3Ghz. */
        uint64_t reserved_5_7          : 3;
        uint64_t gmii_div_ratio        : 5;  /**< [ 12:  8](R/W) GMII bphy clock divider ratio. The value should be configured such that the resulting
                                                                 GMII clock frequency is below 130MHz.The reset value of 0xa assumes a maximum bphy
                                                                 clock frequency of 1.3Ghz. */
        uint64_t reserved_13_63        : 51;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_cprix_clk_div_cfg_s cn; */
};
typedef union cavm_cprix_clk_div_cfg cavm_cprix_clk_div_cfg_t;

static inline uint64_t CAVM_CPRIX_CLK_DIV_CFG(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_CPRIX_CLK_DIV_CFG(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CNF20KA) && (a<=2))
        return 0x87e027800030ll + 0x100000ll * ((a) & 0x3);
    __cavm_csr_fatal("CPRIX_CLK_DIV_CFG", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_CPRIX_CLK_DIV_CFG(a) cavm_cprix_clk_div_cfg_t
#define bustype_CAVM_CPRIX_CLK_DIV_CFG(a) CSR_TYPE_NCB
#define basename_CAVM_CPRIX_CLK_DIV_CFG(a) "CPRIX_CLK_DIV_CFG"
#define busnum_CAVM_CPRIX_CLK_DIV_CFG(a) (a)
#define arguments_CAVM_CPRIX_CLK_DIV_CFG(a) (a),-1,-1,-1

/**
 * Register (NCB) cpri#_clock_control
 *
 * CPRI Clock Control Register
 */
union cavm_cprix_clock_control
{
    uint64_t u;
    struct cavm_cprix_clock_control_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_51_63        : 13;
        uint64_t mac1_clk_dis          : 1;  /**< [ 50: 50](R/W) When set, disables CK_CORE, CK_PSS and CK_GMII going to CONN005_IP1.
                                                                 In case the clock is disabled when the IP is processing any information, one
                                                                 must reset the IP before disabling the clock using
                                                                 CPRI(0..2)_CONTROL[CPRI_RESET\<1\>]. */
        uint64_t mac0_clk_dis          : 1;  /**< [ 49: 49](R/W) When set, disables CK_CORE, CK_PSS and CK_GMII going to CONN005_IP0.
                                                                 In case the clock is disabled when the IP is processing any information, one
                                                                 must reset the IP before disabling the clock using
                                                                 CPRI(0..2)_CONTROL[CPRI_RESET\<0\>]. */
        uint64_t cpri_clk_dis          : 1;  /**< [ 48: 48](R/W) When set, disables CPRI clocks (both DMA and MACs disabled). */
        uint64_t reserved_40_47        : 8;
        uint64_t stx3_clk_status       : 1;  /**< [ 39: 39](RO/H) Indicates whether the SERDES TX clock is valid. */
        uint64_t stx2_clk_status       : 1;  /**< [ 38: 38](RO/H) Indicates whether the SERDES TX clock is valid. */
        uint64_t stx1_clk_status       : 1;  /**< [ 37: 37](RO/H) Indicates whether the SERDES TX clock is valid. */
        uint64_t stx0_clk_status       : 1;  /**< [ 36: 36](RO/H) Indicates whether the SERDES TX clock is valid. */
        uint64_t srx3_clk_status       : 1;  /**< [ 35: 35](RO/H) Indicates whether the SERDES RX clock is valid. */
        uint64_t srx2_clk_status       : 1;  /**< [ 34: 34](RO/H) Indicates whether the SERDES RX clock is valid. */
        uint64_t srx1_clk_status       : 1;  /**< [ 33: 33](RO/H) Indicates whether the SERDES RX clock is valid. */
        uint64_t srx0_clk_status       : 1;  /**< [ 32: 32](RO/H) Indicates whether the SERDES RX clock is valid. */
        uint64_t reserved_16_31        : 16;
        uint64_t stx3_clk_mux_ctrl     : 2;  /**< [ 15: 14](R/W) Select for the serial TX interface clock feed to the CPRI IP.
                                                                 The CPRI clock is feed upon POR and must be replaced by the SERDES clock for normal operation.
                                                                 0 = CPRI clock is feed to the CPRI IP.
                                                                 1 = SERDES TX clock is feed to the CPRI IP.
                                                                 2 = SERDES TX clock is feed to the CPRI IP if the SERDES indicates the TX clock
                                                                 is valid, else CPRI clock is used.
                                                                 3 = NA */
        uint64_t stx2_clk_mux_ctrl     : 2;  /**< [ 13: 12](R/W) Select for the serial TX interface clock feed to the CPRI IP.
                                                                 The CPRI clock is feed upon POR and must be replaced by the SERDES clock for normal operation.
                                                                 0 = CPRI clock is feed to the CPRI IP.
                                                                 1 = SERDES TX clock is feed to the CPRI IP.
                                                                 2 = SERDES TX clock is feed to the CPRI IP if the SERDES indicates the TX clock
                                                                 is valid, else CPRI clock is used.
                                                                 3 = NA */
        uint64_t stx1_clk_mux_ctrl     : 2;  /**< [ 11: 10](R/W) Select for the serial TX interface clock feed to the CPRI IP.
                                                                 The CPRI clock is feed upon POR and must be replaced by the SERDES clock for normal operation.
                                                                 0 = CPRI clock is feed to the CPRI IP.
                                                                 1 = SERDES TX clock is feed to the CPRI IP.
                                                                 2 = SERDES TX clock is feed to the CPRI IP if the SERDES indicates the TX clock
                                                                 is valid, else CPRI clock is used.
                                                                 3 = NA */
        uint64_t stx0_clk_mux_ctrl     : 2;  /**< [  9:  8](R/W) Select for the serial TX interface clock feed to the CPRI IP.
                                                                 The CPRI clock is feed upon POR and must be replaced by the SERDES clock for normal operation.
                                                                 0 = CPRI clock is feed to the CPRI IP.
                                                                 1 = SERDES TX clock is feed to the CPRI IP.
                                                                 2 = SERDES TX clock is feed to the CPRI IP if the SERDES indicates the TX clock
                                                                 is valid, else CPRI clock is used.
                                                                 3 = NA */
        uint64_t srx3_clk_mux_ctrl     : 2;  /**< [  7:  6](R/W) Select for the serial RX interface clock feed to the CPRI IP.
                                                                 The CPRI clock is feed upon POR and must be replaced by the SERDES clock for normal operation.
                                                                 0 = CPRI clock is feed to the CPRI IP.
                                                                 1 = SERDES RX clock is feed to the CPRI IP.
                                                                 2 = SERDES RX clock is feed to the CPRI IP if the SERDES indicates the RX clock
                                                                 is valid, else CPRI clock is used.
                                                                 3 = NA */
        uint64_t srx2_clk_mux_ctrl     : 2;  /**< [  5:  4](R/W) Select for the serial RX interface clock feed to the CPRI IP.
                                                                 The CPRI clock is feed upon POR and must be replaced by the SERDES clock for normal operation.
                                                                 0 = CPRI clock is feed to the CPRI IP.
                                                                 1 = SERDES RX clock is feed to the CPRI IP.
                                                                 2 = SERDES RX clock is feed to the CPRI IP if the SERDES indicates the RX clock
                                                                 is valid, else CPRI clock is used.
                                                                 3 = NA */
        uint64_t srx1_clk_mux_ctrl     : 2;  /**< [  3:  2](R/W) Select for the serial RX interface clock feed to the CPRI IP.
                                                                 The CPRI clock is feed upon POR and must be replaced by the SERDES clock for normal operation.
                                                                 0 = CPRI clock is feed to the CPRI IP.
                                                                 1 = SERDES RX clock is feed to the CPRI IP.
                                                                 2 = SERDES RX clock is feed to the CPRI IP if the SERDES indicates the RX clock
                                                                 is valid, else CPRI clock is used.
                                                                 3 = NA */
        uint64_t srx0_clk_mux_ctrl     : 2;  /**< [  1:  0](R/W) Select for the serial RX interface clock feed to the CPRI IP.
                                                                 The CPRI clock is feed upon POR and must be replaced by the SERDES clock for normal operation.
                                                                 0 = CPRI clock is feed to the CPRI IP.
                                                                 1 = SERDES clock is feed to the CPRI IP.
                                                                 2 = SERDES clock is feed to the CPRI IP if the SERDES indicates the RX clock is
                                                                 valid, else CPRI clock is used.
                                                                 3 = NA */
#else /* Word 0 - Little Endian */
        uint64_t srx0_clk_mux_ctrl     : 2;  /**< [  1:  0](R/W) Select for the serial RX interface clock feed to the CPRI IP.
                                                                 The CPRI clock is feed upon POR and must be replaced by the SERDES clock for normal operation.
                                                                 0 = CPRI clock is feed to the CPRI IP.
                                                                 1 = SERDES clock is feed to the CPRI IP.
                                                                 2 = SERDES clock is feed to the CPRI IP if the SERDES indicates the RX clock is
                                                                 valid, else CPRI clock is used.
                                                                 3 = NA */
        uint64_t srx1_clk_mux_ctrl     : 2;  /**< [  3:  2](R/W) Select for the serial RX interface clock feed to the CPRI IP.
                                                                 The CPRI clock is feed upon POR and must be replaced by the SERDES clock for normal operation.
                                                                 0 = CPRI clock is feed to the CPRI IP.
                                                                 1 = SERDES RX clock is feed to the CPRI IP.
                                                                 2 = SERDES RX clock is feed to the CPRI IP if the SERDES indicates the RX clock
                                                                 is valid, else CPRI clock is used.
                                                                 3 = NA */
        uint64_t srx2_clk_mux_ctrl     : 2;  /**< [  5:  4](R/W) Select for the serial RX interface clock feed to the CPRI IP.
                                                                 The CPRI clock is feed upon POR and must be replaced by the SERDES clock for normal operation.
                                                                 0 = CPRI clock is feed to the CPRI IP.
                                                                 1 = SERDES RX clock is feed to the CPRI IP.
                                                                 2 = SERDES RX clock is feed to the CPRI IP if the SERDES indicates the RX clock
                                                                 is valid, else CPRI clock is used.
                                                                 3 = NA */
        uint64_t srx3_clk_mux_ctrl     : 2;  /**< [  7:  6](R/W) Select for the serial RX interface clock feed to the CPRI IP.
                                                                 The CPRI clock is feed upon POR and must be replaced by the SERDES clock for normal operation.
                                                                 0 = CPRI clock is feed to the CPRI IP.
                                                                 1 = SERDES RX clock is feed to the CPRI IP.
                                                                 2 = SERDES RX clock is feed to the CPRI IP if the SERDES indicates the RX clock
                                                                 is valid, else CPRI clock is used.
                                                                 3 = NA */
        uint64_t stx0_clk_mux_ctrl     : 2;  /**< [  9:  8](R/W) Select for the serial TX interface clock feed to the CPRI IP.
                                                                 The CPRI clock is feed upon POR and must be replaced by the SERDES clock for normal operation.
                                                                 0 = CPRI clock is feed to the CPRI IP.
                                                                 1 = SERDES TX clock is feed to the CPRI IP.
                                                                 2 = SERDES TX clock is feed to the CPRI IP if the SERDES indicates the TX clock
                                                                 is valid, else CPRI clock is used.
                                                                 3 = NA */
        uint64_t stx1_clk_mux_ctrl     : 2;  /**< [ 11: 10](R/W) Select for the serial TX interface clock feed to the CPRI IP.
                                                                 The CPRI clock is feed upon POR and must be replaced by the SERDES clock for normal operation.
                                                                 0 = CPRI clock is feed to the CPRI IP.
                                                                 1 = SERDES TX clock is feed to the CPRI IP.
                                                                 2 = SERDES TX clock is feed to the CPRI IP if the SERDES indicates the TX clock
                                                                 is valid, else CPRI clock is used.
                                                                 3 = NA */
        uint64_t stx2_clk_mux_ctrl     : 2;  /**< [ 13: 12](R/W) Select for the serial TX interface clock feed to the CPRI IP.
                                                                 The CPRI clock is feed upon POR and must be replaced by the SERDES clock for normal operation.
                                                                 0 = CPRI clock is feed to the CPRI IP.
                                                                 1 = SERDES TX clock is feed to the CPRI IP.
                                                                 2 = SERDES TX clock is feed to the CPRI IP if the SERDES indicates the TX clock
                                                                 is valid, else CPRI clock is used.
                                                                 3 = NA */
        uint64_t stx3_clk_mux_ctrl     : 2;  /**< [ 15: 14](R/W) Select for the serial TX interface clock feed to the CPRI IP.
                                                                 The CPRI clock is feed upon POR and must be replaced by the SERDES clock for normal operation.
                                                                 0 = CPRI clock is feed to the CPRI IP.
                                                                 1 = SERDES TX clock is feed to the CPRI IP.
                                                                 2 = SERDES TX clock is feed to the CPRI IP if the SERDES indicates the TX clock
                                                                 is valid, else CPRI clock is used.
                                                                 3 = NA */
        uint64_t reserved_16_31        : 16;
        uint64_t srx0_clk_status       : 1;  /**< [ 32: 32](RO/H) Indicates whether the SERDES RX clock is valid. */
        uint64_t srx1_clk_status       : 1;  /**< [ 33: 33](RO/H) Indicates whether the SERDES RX clock is valid. */
        uint64_t srx2_clk_status       : 1;  /**< [ 34: 34](RO/H) Indicates whether the SERDES RX clock is valid. */
        uint64_t srx3_clk_status       : 1;  /**< [ 35: 35](RO/H) Indicates whether the SERDES RX clock is valid. */
        uint64_t stx0_clk_status       : 1;  /**< [ 36: 36](RO/H) Indicates whether the SERDES TX clock is valid. */
        uint64_t stx1_clk_status       : 1;  /**< [ 37: 37](RO/H) Indicates whether the SERDES TX clock is valid. */
        uint64_t stx2_clk_status       : 1;  /**< [ 38: 38](RO/H) Indicates whether the SERDES TX clock is valid. */
        uint64_t stx3_clk_status       : 1;  /**< [ 39: 39](RO/H) Indicates whether the SERDES TX clock is valid. */
        uint64_t reserved_40_47        : 8;
        uint64_t cpri_clk_dis          : 1;  /**< [ 48: 48](R/W) When set, disables CPRI clocks (both DMA and MACs disabled). */
        uint64_t mac0_clk_dis          : 1;  /**< [ 49: 49](R/W) When set, disables CK_CORE, CK_PSS and CK_GMII going to CONN005_IP0.
                                                                 In case the clock is disabled when the IP is processing any information, one
                                                                 must reset the IP before disabling the clock using
                                                                 CPRI(0..2)_CONTROL[CPRI_RESET\<0\>]. */
        uint64_t mac1_clk_dis          : 1;  /**< [ 50: 50](R/W) When set, disables CK_CORE, CK_PSS and CK_GMII going to CONN005_IP1.
                                                                 In case the clock is disabled when the IP is processing any information, one
                                                                 must reset the IP before disabling the clock using
                                                                 CPRI(0..2)_CONTROL[CPRI_RESET\<1\>]. */
        uint64_t reserved_51_63        : 13;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_cprix_clock_control_s cn; */
};
typedef union cavm_cprix_clock_control cavm_cprix_clock_control_t;

static inline uint64_t CAVM_CPRIX_CLOCK_CONTROL(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_CPRIX_CLOCK_CONTROL(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CNF20KA) && (a<=2))
        return 0x87e027800028ll + 0x100000ll * ((a) & 0x3);
    __cavm_csr_fatal("CPRIX_CLOCK_CONTROL", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_CPRIX_CLOCK_CONTROL(a) cavm_cprix_clock_control_t
#define bustype_CAVM_CPRIX_CLOCK_CONTROL(a) CSR_TYPE_NCB
#define basename_CAVM_CPRIX_CLOCK_CONTROL(a) "CPRIX_CLOCK_CONTROL"
#define busnum_CAVM_CPRIX_CLOCK_CONTROL(a) (a)
#define arguments_CAVM_CPRIX_CLOCK_CONTROL(a) (a),-1,-1,-1

/**
 * Register (NCB) cpri#_control
 *
 * CPRI Control Register
 */
union cavm_cprix_control
{
    uint64_t u;
    struct cavm_cprix_control_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_34_63        : 30;
        uint64_t cpri_reset            : 2;  /**< [ 33: 32](R/W) Resets the CN4IPs 0 and/or 1 and the associated wrapper logic, similar to a power on reset. */
        uint64_t reserved_25_31        : 7;
        uint64_t flush_done            : 1;  /**< [ 24: 24](RO/H) When CPRI is reset, this bit will go low for some time during which it will try
                                                                 to flush all internal state
                                                                 and return all credits. When resetting the CPRI, software must wait until this
                                                                 bit is set. */
        uint64_t reserved_18_23        : 6;
        uint64_t cn4ip_reset_done      : 2;  /**< [ 17: 16](RO/H) CN4IP reset done. Bit \<0\> is for IP0, bit \<1\> is for IP1.  When a bit is 0,
                                                                 it indicates the corresponding CN4IP is in reset state. */
        uint64_t reserved_9_15         : 7;
        uint64_t cpri_ena              : 1;  /**< [  8:  8](RO) Reserved. */
        uint64_t reserved_0_7          : 8;
#else /* Word 0 - Little Endian */
        uint64_t reserved_0_7          : 8;
        uint64_t cpri_ena              : 1;  /**< [  8:  8](RO) Reserved. */
        uint64_t reserved_9_15         : 7;
        uint64_t cn4ip_reset_done      : 2;  /**< [ 17: 16](RO/H) CN4IP reset done. Bit \<0\> is for IP0, bit \<1\> is for IP1.  When a bit is 0,
                                                                 it indicates the corresponding CN4IP is in reset state. */
        uint64_t reserved_18_23        : 6;
        uint64_t flush_done            : 1;  /**< [ 24: 24](RO/H) When CPRI is reset, this bit will go low for some time during which it will try
                                                                 to flush all internal state
                                                                 and return all credits. When resetting the CPRI, software must wait until this
                                                                 bit is set. */
        uint64_t reserved_25_31        : 7;
        uint64_t cpri_reset            : 2;  /**< [ 33: 32](R/W) Resets the CN4IPs 0 and/or 1 and the associated wrapper logic, similar to a power on reset. */
        uint64_t reserved_34_63        : 30;
#endif /* Word 0 - End */
    } s;
    struct cavm_cprix_control_cn
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_40_63        : 24;
        uint64_t reserved_37_39        : 3;
        uint64_t reserved_34_36        : 3;
        uint64_t cpri_reset            : 2;  /**< [ 33: 32](R/W) Resets the CN4IPs 0 and/or 1 and the associated wrapper logic, similar to a power on reset. */
        uint64_t reserved_25_31        : 7;
        uint64_t flush_done            : 1;  /**< [ 24: 24](RO/H) When CPRI is reset, this bit will go low for some time during which it will try
                                                                 to flush all internal state
                                                                 and return all credits. When resetting the CPRI, software must wait until this
                                                                 bit is set. */
        uint64_t reserved_18_23        : 6;
        uint64_t cn4ip_reset_done      : 2;  /**< [ 17: 16](RO/H) CN4IP reset done. Bit \<0\> is for IP0, bit \<1\> is for IP1.  When a bit is 0,
                                                                 it indicates the corresponding CN4IP is in reset state. */
        uint64_t reserved_9_15         : 7;
        uint64_t cpri_ena              : 1;  /**< [  8:  8](RO) Reserved. */
        uint64_t reserved_6_7          : 2;
        uint64_t reserved_0_5          : 6;
#else /* Word 0 - Little Endian */
        uint64_t reserved_0_5          : 6;
        uint64_t reserved_6_7          : 2;
        uint64_t cpri_ena              : 1;  /**< [  8:  8](RO) Reserved. */
        uint64_t reserved_9_15         : 7;
        uint64_t cn4ip_reset_done      : 2;  /**< [ 17: 16](RO/H) CN4IP reset done. Bit \<0\> is for IP0, bit \<1\> is for IP1.  When a bit is 0,
                                                                 it indicates the corresponding CN4IP is in reset state. */
        uint64_t reserved_18_23        : 6;
        uint64_t flush_done            : 1;  /**< [ 24: 24](RO/H) When CPRI is reset, this bit will go low for some time during which it will try
                                                                 to flush all internal state
                                                                 and return all credits. When resetting the CPRI, software must wait until this
                                                                 bit is set. */
        uint64_t reserved_25_31        : 7;
        uint64_t cpri_reset            : 2;  /**< [ 33: 32](R/W) Resets the CN4IPs 0 and/or 1 and the associated wrapper logic, similar to a power on reset. */
        uint64_t reserved_34_36        : 3;
        uint64_t reserved_37_39        : 3;
        uint64_t reserved_40_63        : 24;
#endif /* Word 0 - End */
    } cn;
};
typedef union cavm_cprix_control cavm_cprix_control_t;

static inline uint64_t CAVM_CPRIX_CONTROL(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_CPRIX_CONTROL(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CNF20KA) && (a<=2))
        return 0x87e027800000ll + 0x100000ll * ((a) & 0x3);
    __cavm_csr_fatal("CPRIX_CONTROL", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_CPRIX_CONTROL(a) cavm_cprix_control_t
#define bustype_CAVM_CPRIX_CONTROL(a) CSR_TYPE_NCB
#define basename_CAVM_CPRIX_CONTROL(a) "CPRIX_CONTROL"
#define busnum_CAVM_CPRIX_CONTROL(a) (a)
#define arguments_CAVM_CPRIX_CONTROL(a) (a),-1,-1,-1

/**
 * Register (NCB) cpri#_dl_gmii_control
 *
 * CPRI DL GMII_CONTROL Register
 * Contains config bits to configure GMII handling on DL side
 */
union cavm_cprix_dl_gmii_control
{
    uint64_t u;
    struct cavm_cprix_dl_gmii_control_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_12_63        : 52;
        uint64_t dl_preamble_bytes_lane3 : 3;/**< [ 11:  9](R/W) Number of  Preamble bytes sent out before SFD for Lane 3. */
        uint64_t dl_preamble_bytes_lane2 : 3;/**< [  8:  6](R/W) Number of  Preamble bytes sent out before SFD for Lane 2. */
        uint64_t dl_preamble_bytes_lane1 : 3;/**< [  5:  3](R/W) Number of  Preamble bytes sent out before SFD for Lane 1. */
        uint64_t dl_preamble_bytes_lane0 : 3;/**< [  2:  0](R/W) Number of  Preamble bytes sent out before SFD for Lane 0. */
#else /* Word 0 - Little Endian */
        uint64_t dl_preamble_bytes_lane0 : 3;/**< [  2:  0](R/W) Number of  Preamble bytes sent out before SFD for Lane 0. */
        uint64_t dl_preamble_bytes_lane1 : 3;/**< [  5:  3](R/W) Number of  Preamble bytes sent out before SFD for Lane 1. */
        uint64_t dl_preamble_bytes_lane2 : 3;/**< [  8:  6](R/W) Number of  Preamble bytes sent out before SFD for Lane 2. */
        uint64_t dl_preamble_bytes_lane3 : 3;/**< [ 11:  9](R/W) Number of  Preamble bytes sent out before SFD for Lane 3. */
        uint64_t reserved_12_63        : 52;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_cprix_dl_gmii_control_s cn; */
};
typedef union cavm_cprix_dl_gmii_control cavm_cprix_dl_gmii_control_t;

static inline uint64_t CAVM_CPRIX_DL_GMII_CONTROL(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_CPRIX_DL_GMII_CONTROL(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CNF20KA) && (a<=2))
        return 0x87e027802008ll + 0x100000ll * ((a) & 0x3);
    __cavm_csr_fatal("CPRIX_DL_GMII_CONTROL", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_CPRIX_DL_GMII_CONTROL(a) cavm_cprix_dl_gmii_control_t
#define bustype_CAVM_CPRIX_DL_GMII_CONTROL(a) CSR_TYPE_NCB
#define basename_CAVM_CPRIX_DL_GMII_CONTROL(a) "CPRIX_DL_GMII_CONTROL"
#define busnum_CAVM_CPRIX_DL_GMII_CONTROL(a) (a)
#define arguments_CAVM_CPRIX_DL_GMII_CONTROL(a) (a),-1,-1,-1

/**
 * Register (NCB) cpri#_eth#_bad_crc_cnt
 *
 * CPRI Ethernet Bad CRC Count Register
 */
union cavm_cprix_ethx_bad_crc_cnt
{
    uint64_t u;
    struct cavm_cprix_ethx_bad_crc_cnt_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_32_63        : 32;
        uint64_t bad_crc_cnt           : 32; /**< [ 31:  0](RC/H) Count of CRC error events detected. */
#else /* Word 0 - Little Endian */
        uint64_t bad_crc_cnt           : 32; /**< [ 31:  0](RC/H) Count of CRC error events detected. */
        uint64_t reserved_32_63        : 32;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_cprix_ethx_bad_crc_cnt_s cn; */
};
typedef union cavm_cprix_ethx_bad_crc_cnt cavm_cprix_ethx_bad_crc_cnt_t;

static inline uint64_t CAVM_CPRIX_ETHX_BAD_CRC_CNT(uint64_t a, uint64_t b) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_CPRIX_ETHX_BAD_CRC_CNT(uint64_t a, uint64_t b)
{
    if (cavm_is_model(OCTEONTX_CNF20KA) && ((a<=2) && (b<=3)))
        return 0x87e027800400ll + 0x100000ll * ((a) & 0x3) + 0x800ll * ((b) & 0x3);
    __cavm_csr_fatal("CPRIX_ETHX_BAD_CRC_CNT", 2, a, b, 0, 0, 0, 0);
}

#define typedef_CAVM_CPRIX_ETHX_BAD_CRC_CNT(a,b) cavm_cprix_ethx_bad_crc_cnt_t
#define bustype_CAVM_CPRIX_ETHX_BAD_CRC_CNT(a,b) CSR_TYPE_NCB
#define basename_CAVM_CPRIX_ETHX_BAD_CRC_CNT(a,b) "CPRIX_ETHX_BAD_CRC_CNT"
#define busnum_CAVM_CPRIX_ETHX_BAD_CRC_CNT(a,b) (a)
#define arguments_CAVM_CPRIX_ETHX_BAD_CRC_CNT(a,b) (a),(b),-1,-1

/**
 * Register (NCB) cpri#_eth#_dl_goctets_cnt
 *
 * CPRI Ethernet Downlink Good Octets Count Register
 */
union cavm_cprix_ethx_dl_goctets_cnt
{
    uint64_t u;
    struct cavm_cprix_ethx_dl_goctets_cnt_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_32_63        : 32;
        uint64_t dl_goctets_cnt        : 32; /**< [ 31:  0](RC/H) Number of Ethernet good octets sent to CONN005 IP for this link including FCS
                                                                 but excluding Preamble and SFD. */
#else /* Word 0 - Little Endian */
        uint64_t dl_goctets_cnt        : 32; /**< [ 31:  0](RC/H) Number of Ethernet good octets sent to CONN005 IP for this link including FCS
                                                                 but excluding Preamble and SFD. */
        uint64_t reserved_32_63        : 32;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_cprix_ethx_dl_goctets_cnt_s cn; */
};
typedef union cavm_cprix_ethx_dl_goctets_cnt cavm_cprix_ethx_dl_goctets_cnt_t;

static inline uint64_t CAVM_CPRIX_ETHX_DL_GOCTETS_CNT(uint64_t a, uint64_t b) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_CPRIX_ETHX_DL_GOCTETS_CNT(uint64_t a, uint64_t b)
{
    if (cavm_is_model(OCTEONTX_CNF20KA) && ((a<=2) && (b<=3)))
        return 0x87e027800450ll + 0x100000ll * ((a) & 0x3) + 0x800ll * ((b) & 0x3);
    __cavm_csr_fatal("CPRIX_ETHX_DL_GOCTETS_CNT", 2, a, b, 0, 0, 0, 0);
}

#define typedef_CAVM_CPRIX_ETHX_DL_GOCTETS_CNT(a,b) cavm_cprix_ethx_dl_goctets_cnt_t
#define bustype_CAVM_CPRIX_ETHX_DL_GOCTETS_CNT(a,b) CSR_TYPE_NCB
#define basename_CAVM_CPRIX_ETHX_DL_GOCTETS_CNT(a,b) "CPRIX_ETHX_DL_GOCTETS_CNT"
#define busnum_CAVM_CPRIX_ETHX_DL_GOCTETS_CNT(a,b) (a)
#define arguments_CAVM_CPRIX_ETHX_DL_GOCTETS_CNT(a,b) (a),(b),-1,-1

/**
 * Register (NCB) cpri#_eth#_dl_gpkts_cnt
 *
 * CPRI Ethernet Downlink Good Packets Count Register
 */
union cavm_cprix_ethx_dl_gpkts_cnt
{
    uint64_t u;
    struct cavm_cprix_ethx_dl_gpkts_cnt_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_32_63        : 32;
        uint64_t dl_gpkts_cnt          : 32; /**< [ 31:  0](RC/H) Number of Ethernet good packets sent. */
#else /* Word 0 - Little Endian */
        uint64_t dl_gpkts_cnt          : 32; /**< [ 31:  0](RC/H) Number of Ethernet good packets sent. */
        uint64_t reserved_32_63        : 32;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_cprix_ethx_dl_gpkts_cnt_s cn; */
};
typedef union cavm_cprix_ethx_dl_gpkts_cnt cavm_cprix_ethx_dl_gpkts_cnt_t;

static inline uint64_t CAVM_CPRIX_ETHX_DL_GPKTS_CNT(uint64_t a, uint64_t b) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_CPRIX_ETHX_DL_GPKTS_CNT(uint64_t a, uint64_t b)
{
    if (cavm_is_model(OCTEONTX_CNF20KA) && ((a<=2) && (b<=3)))
        return 0x87e027800458ll + 0x100000ll * ((a) & 0x3) + 0x800ll * ((b) & 0x3);
    __cavm_csr_fatal("CPRIX_ETHX_DL_GPKTS_CNT", 2, a, b, 0, 0, 0, 0);
}

#define typedef_CAVM_CPRIX_ETHX_DL_GPKTS_CNT(a,b) cavm_cprix_ethx_dl_gpkts_cnt_t
#define bustype_CAVM_CPRIX_ETHX_DL_GPKTS_CNT(a,b) CSR_TYPE_NCB
#define basename_CAVM_CPRIX_ETHX_DL_GPKTS_CNT(a,b) "CPRIX_ETHX_DL_GPKTS_CNT"
#define busnum_CAVM_CPRIX_ETHX_DL_GPKTS_CNT(a,b) (a)
#define arguments_CAVM_CPRIX_ETHX_DL_GPKTS_CNT(a,b) (a),(b),-1,-1

/**
 * Register (NCB) cpri#_eth#_ul_boct_cnt
 *
 * CPRI Ethernet Receive Bad Octets Count Register
 */
union cavm_cprix_ethx_ul_boct_cnt
{
    uint64_t u;
    struct cavm_cprix_ethx_ul_boct_cnt_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_32_63        : 32;
        uint64_t ul_boct_cnt           : 32; /**< [ 31:  0](RC/H) Number of Ethernet bad octets received including FCS but excluding Preamble and
                                                                 SFD. This includes frames with bad
                                                                 FCS and undersize,oversize, and overrun frames. */
#else /* Word 0 - Little Endian */
        uint64_t ul_boct_cnt           : 32; /**< [ 31:  0](RC/H) Number of Ethernet bad octets received including FCS but excluding Preamble and
                                                                 SFD. This includes frames with bad
                                                                 FCS and undersize,oversize, and overrun frames. */
        uint64_t reserved_32_63        : 32;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_cprix_ethx_ul_boct_cnt_s cn; */
};
typedef union cavm_cprix_ethx_ul_boct_cnt cavm_cprix_ethx_ul_boct_cnt_t;

static inline uint64_t CAVM_CPRIX_ETHX_UL_BOCT_CNT(uint64_t a, uint64_t b) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_CPRIX_ETHX_UL_BOCT_CNT(uint64_t a, uint64_t b)
{
    if (cavm_is_model(OCTEONTX_CNF20KA) && ((a<=2) && (b<=3)))
        return 0x87e027800430ll + 0x100000ll * ((a) & 0x3) + 0x800ll * ((b) & 0x3);
    __cavm_csr_fatal("CPRIX_ETHX_UL_BOCT_CNT", 2, a, b, 0, 0, 0, 0);
}

#define typedef_CAVM_CPRIX_ETHX_UL_BOCT_CNT(a,b) cavm_cprix_ethx_ul_boct_cnt_t
#define bustype_CAVM_CPRIX_ETHX_UL_BOCT_CNT(a,b) CSR_TYPE_NCB
#define basename_CAVM_CPRIX_ETHX_UL_BOCT_CNT(a,b) "CPRIX_ETHX_UL_BOCT_CNT"
#define busnum_CAVM_CPRIX_ETHX_UL_BOCT_CNT(a,b) (a)
#define arguments_CAVM_CPRIX_ETHX_UL_BOCT_CNT(a,b) (a),(b),-1,-1

/**
 * Register (NCB) cpri#_eth#_ul_err_cnt
 *
 * CPRI Ethernet Uplink Error Count Register
 */
union cavm_cprix_ethx_ul_err_cnt
{
    uint64_t u;
    struct cavm_cprix_ethx_ul_err_cnt_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_32_63        : 32;
        uint64_t ul_err_cnt            : 32; /**< [ 31:  0](RC/H) Count of Ethernet uplink error events detected. This counts all frames that were
                                                                 dropped due to bad CRC, overflow, undersize, or oversize. */
#else /* Word 0 - Little Endian */
        uint64_t ul_err_cnt            : 32; /**< [ 31:  0](RC/H) Count of Ethernet uplink error events detected. This counts all frames that were
                                                                 dropped due to bad CRC, overflow, undersize, or oversize. */
        uint64_t reserved_32_63        : 32;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_cprix_ethx_ul_err_cnt_s cn; */
};
typedef union cavm_cprix_ethx_ul_err_cnt cavm_cprix_ethx_ul_err_cnt_t;

static inline uint64_t CAVM_CPRIX_ETHX_UL_ERR_CNT(uint64_t a, uint64_t b) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_CPRIX_ETHX_UL_ERR_CNT(uint64_t a, uint64_t b)
{
    if (cavm_is_model(OCTEONTX_CNF20KA) && ((a<=2) && (b<=3)))
        return 0x87e027800408ll + 0x100000ll * ((a) & 0x3) + 0x800ll * ((b) & 0x3);
    __cavm_csr_fatal("CPRIX_ETHX_UL_ERR_CNT", 2, a, b, 0, 0, 0, 0);
}

#define typedef_CAVM_CPRIX_ETHX_UL_ERR_CNT(a,b) cavm_cprix_ethx_ul_err_cnt_t
#define bustype_CAVM_CPRIX_ETHX_UL_ERR_CNT(a,b) CSR_TYPE_NCB
#define basename_CAVM_CPRIX_ETHX_UL_ERR_CNT(a,b) "CPRIX_ETHX_UL_ERR_CNT"
#define busnum_CAVM_CPRIX_ETHX_UL_ERR_CNT(a,b) (a)
#define arguments_CAVM_CPRIX_ETHX_UL_ERR_CNT(a,b) (a),(b),-1,-1

/**
 * Register (NCB) cpri#_eth#_ul_fifo_orun_cnt
 *
 * CPRI Ethernet Receive FIFO Overrun Count Register
 */
union cavm_cprix_ethx_ul_fifo_orun_cnt
{
    uint64_t u;
    struct cavm_cprix_ethx_ul_fifo_orun_cnt_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_32_63        : 32;
        uint64_t ff_orun_cnt           : 32; /**< [ 31:  0](RC/H) Number of times the Ethernet receive FIFO has overrun. */
#else /* Word 0 - Little Endian */
        uint64_t ff_orun_cnt           : 32; /**< [ 31:  0](RC/H) Number of times the Ethernet receive FIFO has overrun. */
        uint64_t reserved_32_63        : 32;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_cprix_ethx_ul_fifo_orun_cnt_s cn; */
};
typedef union cavm_cprix_ethx_ul_fifo_orun_cnt cavm_cprix_ethx_ul_fifo_orun_cnt_t;

static inline uint64_t CAVM_CPRIX_ETHX_UL_FIFO_ORUN_CNT(uint64_t a, uint64_t b) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_CPRIX_ETHX_UL_FIFO_ORUN_CNT(uint64_t a, uint64_t b)
{
    if (cavm_is_model(OCTEONTX_CNF20KA) && ((a<=2) && (b<=3)))
        return 0x87e027800420ll + 0x100000ll * ((a) & 0x3) + 0x800ll * ((b) & 0x3);
    __cavm_csr_fatal("CPRIX_ETHX_UL_FIFO_ORUN_CNT", 2, a, b, 0, 0, 0, 0);
}

#define typedef_CAVM_CPRIX_ETHX_UL_FIFO_ORUN_CNT(a,b) cavm_cprix_ethx_ul_fifo_orun_cnt_t
#define bustype_CAVM_CPRIX_ETHX_UL_FIFO_ORUN_CNT(a,b) CSR_TYPE_NCB
#define basename_CAVM_CPRIX_ETHX_UL_FIFO_ORUN_CNT(a,b) "CPRIX_ETHX_UL_FIFO_ORUN_CNT"
#define busnum_CAVM_CPRIX_ETHX_UL_FIFO_ORUN_CNT(a,b) (a)
#define arguments_CAVM_CPRIX_ETHX_UL_FIFO_ORUN_CNT(a,b) (a),(b),-1,-1

/**
 * Register (NCB) cpri#_eth#_ul_goct_cnt
 *
 * CPRI Ethernet Receive Good Octets Count Register
 */
union cavm_cprix_ethx_ul_goct_cnt
{
    uint64_t u;
    struct cavm_cprix_ethx_ul_goct_cnt_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_32_63        : 32;
        uint64_t ul_goct_cnt           : 32; /**< [ 31:  0](RC/H) Number of Ethernet good octets received including FCS but excluding Preamble and
                                                                 SFD. This excludes Frames with bad
                                                                 FCS and undersize, oversize, and overrun frames. */
#else /* Word 0 - Little Endian */
        uint64_t ul_goct_cnt           : 32; /**< [ 31:  0](RC/H) Number of Ethernet good octets received including FCS but excluding Preamble and
                                                                 SFD. This excludes Frames with bad
                                                                 FCS and undersize, oversize, and overrun frames. */
        uint64_t reserved_32_63        : 32;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_cprix_ethx_ul_goct_cnt_s cn; */
};
typedef union cavm_cprix_ethx_ul_goct_cnt cavm_cprix_ethx_ul_goct_cnt_t;

static inline uint64_t CAVM_CPRIX_ETHX_UL_GOCT_CNT(uint64_t a, uint64_t b) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_CPRIX_ETHX_UL_GOCT_CNT(uint64_t a, uint64_t b)
{
    if (cavm_is_model(OCTEONTX_CNF20KA) && ((a<=2) && (b<=3)))
        return 0x87e027800438ll + 0x100000ll * ((a) & 0x3) + 0x800ll * ((b) & 0x3);
    __cavm_csr_fatal("CPRIX_ETHX_UL_GOCT_CNT", 2, a, b, 0, 0, 0, 0);
}

#define typedef_CAVM_CPRIX_ETHX_UL_GOCT_CNT(a,b) cavm_cprix_ethx_ul_goct_cnt_t
#define bustype_CAVM_CPRIX_ETHX_UL_GOCT_CNT(a,b) CSR_TYPE_NCB
#define basename_CAVM_CPRIX_ETHX_UL_GOCT_CNT(a,b) "CPRIX_ETHX_UL_GOCT_CNT"
#define busnum_CAVM_CPRIX_ETHX_UL_GOCT_CNT(a,b) (a)
#define arguments_CAVM_CPRIX_ETHX_UL_GOCT_CNT(a,b) (a),(b),-1,-1

/**
 * Register (NCB) cpri#_eth#_ul_gpkts_cnt
 *
 * CPRI Ethernet Uplink Good Packets Count Register
 */
union cavm_cprix_ethx_ul_gpkts_cnt
{
    uint64_t u;
    struct cavm_cprix_ethx_ul_gpkts_cnt_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_32_63        : 32;
        uint64_t ul_gpkts_cnt          : 32; /**< [ 31:  0](RC/H) Number of Ethernet good packets received from CONN005 IP for this link. This
                                                                 excludes undersize or oversize frames and frames with overrun. */
#else /* Word 0 - Little Endian */
        uint64_t ul_gpkts_cnt          : 32; /**< [ 31:  0](RC/H) Number of Ethernet good packets received from CONN005 IP for this link. This
                                                                 excludes undersize or oversize frames and frames with overrun. */
        uint64_t reserved_32_63        : 32;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_cprix_ethx_ul_gpkts_cnt_s cn; */
};
typedef union cavm_cprix_ethx_ul_gpkts_cnt cavm_cprix_ethx_ul_gpkts_cnt_t;

static inline uint64_t CAVM_CPRIX_ETHX_UL_GPKTS_CNT(uint64_t a, uint64_t b) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_CPRIX_ETHX_UL_GPKTS_CNT(uint64_t a, uint64_t b)
{
    if (cavm_is_model(OCTEONTX_CNF20KA) && ((a<=2) && (b<=3)))
        return 0x87e027800428ll + 0x100000ll * ((a) & 0x3) + 0x800ll * ((b) & 0x3);
    __cavm_csr_fatal("CPRIX_ETHX_UL_GPKTS_CNT", 2, a, b, 0, 0, 0, 0);
}

#define typedef_CAVM_CPRIX_ETHX_UL_GPKTS_CNT(a,b) cavm_cprix_ethx_ul_gpkts_cnt_t
#define bustype_CAVM_CPRIX_ETHX_UL_GPKTS_CNT(a,b) CSR_TYPE_NCB
#define basename_CAVM_CPRIX_ETHX_UL_GPKTS_CNT(a,b) "CPRIX_ETHX_UL_GPKTS_CNT"
#define busnum_CAVM_CPRIX_ETHX_UL_GPKTS_CNT(a,b) (a)
#define arguments_CAVM_CPRIX_ETHX_UL_GPKTS_CNT(a,b) (a),(b),-1,-1

/**
 * Register (NCB) cpri#_eth#_ul_malformed_cnt
 *
 * CPRI Ethernet Receive Malformed Frames Count Register
 */
union cavm_cprix_ethx_ul_malformed_cnt
{
    uint64_t u;
    struct cavm_cprix_ethx_ul_malformed_cnt_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_32_63        : 32;
        uint64_t ul_malformed_cnt      : 32; /**< [ 31:  0](RC/H) Number of Ethernet frames received with no SFD preceded by 0..7 bytes of
                                                                 Preamble. A frame with No data is also counted here. If this counter is incremented,
                                                                 other statistics counters are not incremented. */
#else /* Word 0 - Little Endian */
        uint64_t ul_malformed_cnt      : 32; /**< [ 31:  0](RC/H) Number of Ethernet frames received with no SFD preceded by 0..7 bytes of
                                                                 Preamble. A frame with No data is also counted here. If this counter is incremented,
                                                                 other statistics counters are not incremented. */
        uint64_t reserved_32_63        : 32;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_cprix_ethx_ul_malformed_cnt_s cn; */
};
typedef union cavm_cprix_ethx_ul_malformed_cnt cavm_cprix_ethx_ul_malformed_cnt_t;

static inline uint64_t CAVM_CPRIX_ETHX_UL_MALFORMED_CNT(uint64_t a, uint64_t b) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_CPRIX_ETHX_UL_MALFORMED_CNT(uint64_t a, uint64_t b)
{
    if (cavm_is_model(OCTEONTX_CNF20KA) && ((a<=2) && (b<=3)))
        return 0x87e027800440ll + 0x100000ll * ((a) & 0x3) + 0x800ll * ((b) & 0x3);
    __cavm_csr_fatal("CPRIX_ETHX_UL_MALFORMED_CNT", 2, a, b, 0, 0, 0, 0);
}

#define typedef_CAVM_CPRIX_ETHX_UL_MALFORMED_CNT(a,b) cavm_cprix_ethx_ul_malformed_cnt_t
#define bustype_CAVM_CPRIX_ETHX_UL_MALFORMED_CNT(a,b) CSR_TYPE_NCB
#define basename_CAVM_CPRIX_ETHX_UL_MALFORMED_CNT(a,b) "CPRIX_ETHX_UL_MALFORMED_CNT"
#define busnum_CAVM_CPRIX_ETHX_UL_MALFORMED_CNT(a,b) (a)
#define arguments_CAVM_CPRIX_ETHX_UL_MALFORMED_CNT(a,b) (a),(b),-1,-1

/**
 * Register (NCB) cpri#_eth#_ul_osize_cnt
 *
 * CPRI Ethernet Uplink Oversized Packet Count Register
 */
union cavm_cprix_ethx_ul_osize_cnt
{
    uint64_t u;
    struct cavm_cprix_ethx_ul_osize_cnt_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_32_63        : 32;
        uint64_t osize_cnt             : 32; /**< [ 31:  0](RC/H) Number of oversized Ethernet packets received. */
#else /* Word 0 - Little Endian */
        uint64_t osize_cnt             : 32; /**< [ 31:  0](RC/H) Number of oversized Ethernet packets received. */
        uint64_t reserved_32_63        : 32;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_cprix_ethx_ul_osize_cnt_s cn; */
};
typedef union cavm_cprix_ethx_ul_osize_cnt cavm_cprix_ethx_ul_osize_cnt_t;

static inline uint64_t CAVM_CPRIX_ETHX_UL_OSIZE_CNT(uint64_t a, uint64_t b) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_CPRIX_ETHX_UL_OSIZE_CNT(uint64_t a, uint64_t b)
{
    if (cavm_is_model(OCTEONTX_CNF20KA) && ((a<=2) && (b<=3)))
        return 0x87e027800410ll + 0x100000ll * ((a) & 0x3) + 0x800ll * ((b) & 0x3);
    __cavm_csr_fatal("CPRIX_ETHX_UL_OSIZE_CNT", 2, a, b, 0, 0, 0, 0);
}

#define typedef_CAVM_CPRIX_ETHX_UL_OSIZE_CNT(a,b) cavm_cprix_ethx_ul_osize_cnt_t
#define bustype_CAVM_CPRIX_ETHX_UL_OSIZE_CNT(a,b) CSR_TYPE_NCB
#define basename_CAVM_CPRIX_ETHX_UL_OSIZE_CNT(a,b) "CPRIX_ETHX_UL_OSIZE_CNT"
#define busnum_CAVM_CPRIX_ETHX_UL_OSIZE_CNT(a,b) (a)
#define arguments_CAVM_CPRIX_ETHX_UL_OSIZE_CNT(a,b) (a),(b),-1,-1

/**
 * Register (NCB) cpri#_eth#_ul_usize_cnt
 *
 * CPRI Ethernet Uplink Undersized Packet Count Register
 */
union cavm_cprix_ethx_ul_usize_cnt
{
    uint64_t u;
    struct cavm_cprix_ethx_ul_usize_cnt_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_32_63        : 32;
        uint64_t usize_cnt             : 32; /**< [ 31:  0](RC/H) Number of undersized Ethernet packets received. */
#else /* Word 0 - Little Endian */
        uint64_t usize_cnt             : 32; /**< [ 31:  0](RC/H) Number of undersized Ethernet packets received. */
        uint64_t reserved_32_63        : 32;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_cprix_ethx_ul_usize_cnt_s cn; */
};
typedef union cavm_cprix_ethx_ul_usize_cnt cavm_cprix_ethx_ul_usize_cnt_t;

static inline uint64_t CAVM_CPRIX_ETHX_UL_USIZE_CNT(uint64_t a, uint64_t b) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_CPRIX_ETHX_UL_USIZE_CNT(uint64_t a, uint64_t b)
{
    if (cavm_is_model(OCTEONTX_CNF20KA) && ((a<=2) && (b<=3)))
        return 0x87e027800418ll + 0x100000ll * ((a) & 0x3) + 0x800ll * ((b) & 0x3);
    __cavm_csr_fatal("CPRIX_ETHX_UL_USIZE_CNT", 2, a, b, 0, 0, 0, 0);
}

#define typedef_CAVM_CPRIX_ETHX_UL_USIZE_CNT(a,b) cavm_cprix_ethx_ul_usize_cnt_t
#define bustype_CAVM_CPRIX_ETHX_UL_USIZE_CNT(a,b) CSR_TYPE_NCB
#define basename_CAVM_CPRIX_ETHX_UL_USIZE_CNT(a,b) "CPRIX_ETHX_UL_USIZE_CNT"
#define busnum_CAVM_CPRIX_ETHX_UL_USIZE_CNT(a,b) (a)
#define arguments_CAVM_CPRIX_ETHX_UL_USIZE_CNT(a,b) (a),(b),-1,-1

/**
 * Register (NCB) cpri#_eth_ul_int
 *
 * CPRI MHB Error Interrupt Register
 * These registers record interrupt due to notification sent when the packets received
 * on all 4 lanes exceed threshold
 */
union cavm_cprix_eth_ul_int
{
    uint64_t u;
    struct cavm_cprix_eth_ul_int_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_1_63         : 63;
        uint64_t gmii_ul_pkts_rcvd     : 1;  /**< [  0:  0](R/W1C/H) NOTIFICATION for Packets received when the packets received on all 4 lanes exceed threshold */
#else /* Word 0 - Little Endian */
        uint64_t gmii_ul_pkts_rcvd     : 1;  /**< [  0:  0](R/W1C/H) NOTIFICATION for Packets received when the packets received on all 4 lanes exceed threshold */
        uint64_t reserved_1_63         : 63;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_cprix_eth_ul_int_s cn; */
};
typedef union cavm_cprix_eth_ul_int cavm_cprix_eth_ul_int_t;

static inline uint64_t CAVM_CPRIX_ETH_UL_INT(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_CPRIX_ETH_UL_INT(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CNF20KA) && (a<=2))
        return 0x87e027800280ll + 0x100000ll * ((a) & 0x3);
    __cavm_csr_fatal("CPRIX_ETH_UL_INT", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_CPRIX_ETH_UL_INT(a) cavm_cprix_eth_ul_int_t
#define bustype_CAVM_CPRIX_ETH_UL_INT(a) CSR_TYPE_NCB
#define basename_CAVM_CPRIX_ETH_UL_INT(a) "CPRIX_ETH_UL_INT"
#define busnum_CAVM_CPRIX_ETH_UL_INT(a) (a)
#define arguments_CAVM_CPRIX_ETH_UL_INT(a) (a),-1,-1,-1

/**
 * Register (NCB) cpri#_eth_ul_int_ena_w1c
 *
 * CPRI MHB Interrupt Enable Clear Register
 * This register clears interrupt enable bits.
 */
union cavm_cprix_eth_ul_int_ena_w1c
{
    uint64_t u;
    struct cavm_cprix_eth_ul_int_ena_w1c_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_1_63         : 63;
        uint64_t gmii_ul_pkts_rcvd     : 1;  /**< [  0:  0](R/W1C/H) Reads or clears enable for CPRI(0..2)_ETH_UL_INT[GMII_UL_PKTS_RCVD]. */
#else /* Word 0 - Little Endian */
        uint64_t gmii_ul_pkts_rcvd     : 1;  /**< [  0:  0](R/W1C/H) Reads or clears enable for CPRI(0..2)_ETH_UL_INT[GMII_UL_PKTS_RCVD]. */
        uint64_t reserved_1_63         : 63;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_cprix_eth_ul_int_ena_w1c_s cn; */
};
typedef union cavm_cprix_eth_ul_int_ena_w1c cavm_cprix_eth_ul_int_ena_w1c_t;

static inline uint64_t CAVM_CPRIX_ETH_UL_INT_ENA_W1C(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_CPRIX_ETH_UL_INT_ENA_W1C(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CNF20KA) && (a<=2))
        return 0x87e027800290ll + 0x100000ll * ((a) & 0x3);
    __cavm_csr_fatal("CPRIX_ETH_UL_INT_ENA_W1C", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_CPRIX_ETH_UL_INT_ENA_W1C(a) cavm_cprix_eth_ul_int_ena_w1c_t
#define bustype_CAVM_CPRIX_ETH_UL_INT_ENA_W1C(a) CSR_TYPE_NCB
#define basename_CAVM_CPRIX_ETH_UL_INT_ENA_W1C(a) "CPRIX_ETH_UL_INT_ENA_W1C"
#define busnum_CAVM_CPRIX_ETH_UL_INT_ENA_W1C(a) (a)
#define arguments_CAVM_CPRIX_ETH_UL_INT_ENA_W1C(a) (a),-1,-1,-1

/**
 * Register (NCB) cpri#_eth_ul_int_ena_w1s
 *
 * CPRI MHB Interrupt Enable Set Register
 * This register sets interrupt enable bits.
 */
union cavm_cprix_eth_ul_int_ena_w1s
{
    uint64_t u;
    struct cavm_cprix_eth_ul_int_ena_w1s_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_1_63         : 63;
        uint64_t gmii_ul_pkts_rcvd     : 1;  /**< [  0:  0](R/W1S/H) Reads or sets enable for CPRI(0..2)_ETH_UL_INT[GMII_UL_PKTS_RCVD]. */
#else /* Word 0 - Little Endian */
        uint64_t gmii_ul_pkts_rcvd     : 1;  /**< [  0:  0](R/W1S/H) Reads or sets enable for CPRI(0..2)_ETH_UL_INT[GMII_UL_PKTS_RCVD]. */
        uint64_t reserved_1_63         : 63;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_cprix_eth_ul_int_ena_w1s_s cn; */
};
typedef union cavm_cprix_eth_ul_int_ena_w1s cavm_cprix_eth_ul_int_ena_w1s_t;

static inline uint64_t CAVM_CPRIX_ETH_UL_INT_ENA_W1S(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_CPRIX_ETH_UL_INT_ENA_W1S(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CNF20KA) && (a<=2))
        return 0x87e027800288ll + 0x100000ll * ((a) & 0x3);
    __cavm_csr_fatal("CPRIX_ETH_UL_INT_ENA_W1S", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_CPRIX_ETH_UL_INT_ENA_W1S(a) cavm_cprix_eth_ul_int_ena_w1s_t
#define bustype_CAVM_CPRIX_ETH_UL_INT_ENA_W1S(a) CSR_TYPE_NCB
#define basename_CAVM_CPRIX_ETH_UL_INT_ENA_W1S(a) "CPRIX_ETH_UL_INT_ENA_W1S"
#define busnum_CAVM_CPRIX_ETH_UL_INT_ENA_W1S(a) (a)
#define arguments_CAVM_CPRIX_ETH_UL_INT_ENA_W1S(a) (a),-1,-1,-1

/**
 * Register (NCB) cpri#_eth_ul_int_psm_msg_w0
 *
 * CPRI GMII_UL Notification Interrupt Message w0  Register
 * JCA word 0 message to send interrupt notification for receiving GMII packets.
 */
union cavm_cprix_eth_ul_int_psm_msg_w0
{
    uint64_t u;
    struct cavm_cprix_eth_ul_int_psm_msg_w0_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t w0                    : 64; /**< [ 63:  0](R/W) Word 0 of JCA message. */
#else /* Word 0 - Little Endian */
        uint64_t w0                    : 64; /**< [ 63:  0](R/W) Word 0 of JCA message. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_cprix_eth_ul_int_psm_msg_w0_s cn; */
};
typedef union cavm_cprix_eth_ul_int_psm_msg_w0 cavm_cprix_eth_ul_int_psm_msg_w0_t;

static inline uint64_t CAVM_CPRIX_ETH_UL_INT_PSM_MSG_W0(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_CPRIX_ETH_UL_INT_PSM_MSG_W0(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CNF20KA) && (a<=2))
        return 0x87e0278002a0ll + 0x100000ll * ((a) & 0x3);
    __cavm_csr_fatal("CPRIX_ETH_UL_INT_PSM_MSG_W0", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_CPRIX_ETH_UL_INT_PSM_MSG_W0(a) cavm_cprix_eth_ul_int_psm_msg_w0_t
#define bustype_CAVM_CPRIX_ETH_UL_INT_PSM_MSG_W0(a) CSR_TYPE_NCB
#define basename_CAVM_CPRIX_ETH_UL_INT_PSM_MSG_W0(a) "CPRIX_ETH_UL_INT_PSM_MSG_W0"
#define busnum_CAVM_CPRIX_ETH_UL_INT_PSM_MSG_W0(a) (a)
#define arguments_CAVM_CPRIX_ETH_UL_INT_PSM_MSG_W0(a) (a),-1,-1,-1

/**
 * Register (NCB) cpri#_eth_ul_int_psm_msg_w1
 *
 * CPRI GMII_UL Notification Interrupt Message w1 Register
 * JCA word 1 message to send interrupt notification for receiving GMII packets.
 */
union cavm_cprix_eth_ul_int_psm_msg_w1
{
    uint64_t u;
    struct cavm_cprix_eth_ul_int_psm_msg_w1_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t w1                    : 64; /**< [ 63:  0](R/W) Word 1 of JCA message. */
#else /* Word 0 - Little Endian */
        uint64_t w1                    : 64; /**< [ 63:  0](R/W) Word 1 of JCA message. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_cprix_eth_ul_int_psm_msg_w1_s cn; */
};
typedef union cavm_cprix_eth_ul_int_psm_msg_w1 cavm_cprix_eth_ul_int_psm_msg_w1_t;

static inline uint64_t CAVM_CPRIX_ETH_UL_INT_PSM_MSG_W1(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_CPRIX_ETH_UL_INT_PSM_MSG_W1(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CNF20KA) && (a<=2))
        return 0x87e0278002a8ll + 0x100000ll * ((a) & 0x3);
    __cavm_csr_fatal("CPRIX_ETH_UL_INT_PSM_MSG_W1", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_CPRIX_ETH_UL_INT_PSM_MSG_W1(a) cavm_cprix_eth_ul_int_psm_msg_w1_t
#define bustype_CAVM_CPRIX_ETH_UL_INT_PSM_MSG_W1(a) CSR_TYPE_NCB
#define basename_CAVM_CPRIX_ETH_UL_INT_PSM_MSG_W1(a) "CPRIX_ETH_UL_INT_PSM_MSG_W1"
#define busnum_CAVM_CPRIX_ETH_UL_INT_PSM_MSG_W1(a) (a)
#define arguments_CAVM_CPRIX_ETH_UL_INT_PSM_MSG_W1(a) (a),-1,-1,-1

/**
 * Register (NCB) cpri#_eth_ul_int_w1s
 *
 * CPRI MHB Interrupt Set Register
 * This register sets interrupt bits.
 */
union cavm_cprix_eth_ul_int_w1s
{
    uint64_t u;
    struct cavm_cprix_eth_ul_int_w1s_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_1_63         : 63;
        uint64_t gmii_ul_pkts_rcvd     : 1;  /**< [  0:  0](R/W1S/H) Reads or sets CPRI(0..2)_ETH_UL_INT[GMII_UL_PKTS_RCVD]. */
#else /* Word 0 - Little Endian */
        uint64_t gmii_ul_pkts_rcvd     : 1;  /**< [  0:  0](R/W1S/H) Reads or sets CPRI(0..2)_ETH_UL_INT[GMII_UL_PKTS_RCVD]. */
        uint64_t reserved_1_63         : 63;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_cprix_eth_ul_int_w1s_s cn; */
};
typedef union cavm_cprix_eth_ul_int_w1s cavm_cprix_eth_ul_int_w1s_t;

static inline uint64_t CAVM_CPRIX_ETH_UL_INT_W1S(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_CPRIX_ETH_UL_INT_W1S(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CNF20KA) && (a<=2))
        return 0x87e027800298ll + 0x100000ll * ((a) & 0x3);
    __cavm_csr_fatal("CPRIX_ETH_UL_INT_W1S", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_CPRIX_ETH_UL_INT_W1S(a) cavm_cprix_eth_ul_int_w1s_t
#define bustype_CAVM_CPRIX_ETH_UL_INT_W1S(a) CSR_TYPE_NCB
#define basename_CAVM_CPRIX_ETH_UL_INT_W1S(a) "CPRIX_ETH_UL_INT_W1S"
#define busnum_CAVM_CPRIX_ETH_UL_INT_W1S(a) (a)
#define arguments_CAVM_CPRIX_ETH_UL_INT_W1S(a) (a),-1,-1,-1

/**
 * Register (NCB) cpri#_ghb_control
 *
 * CPRI GHB_CONTROL Register
 * Contains WRR config bits for GAA interface; and also HP for GAA write interface
 */
union cavm_cprix_ghb_control
{
    uint64_t u;
    struct cavm_cprix_ghb_control_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_23_63        : 41;
        uint64_t gmid_rp3_ul_axc       : 3;  /**< [ 22: 20](R/W) GMI (Guest Machine ID) for RP3 UL AXC writes. */
        uint64_t reserved_19           : 1;
        uint64_t gmid_rp3_dl           : 3;  /**< [ 18: 16](R/W) GMI (Guest Machine ID) for RP3 DL transactions. */
        uint64_t reserved_13_15        : 3;
        uint64_t hp                    : 1;  /**< [ 12: 12](R/W) High Priority selection sent along with the GAA write request for both GMII and AXC traffic */
        uint64_t ghb_rd_weight         : 6;  /**< [ 11:  6](R/W) The weighted round-robin arbitration weight used in the GHAB when
                                                                 arbitrating for read requests from this MHAB. A value of zero will
                                                                 only allow requests when there are no competing requests from other
                                                                 MHABs in the same GHAB, or when all competing MHABs have an effective
                                                                 weight of zero. A higher weight guarantees a greater share of the GHAB
                                                                 bandwidth. */
        uint64_t ghb_wr_weight         : 6;  /**< [  5:  0](R/W) The weighted round-robin arbitration weight used in the GHAB when
                                                                 arbitrating for read requests from this MHAB. A value of zero will
                                                                 only allow requests when there are no competing requests from other
                                                                 MHABs in the same GHAB, or when all competing MHABs have an effective
                                                                 weight of zero. A higher weight guarantees a greater share of the GHAB
                                                                 bandwidth. */
#else /* Word 0 - Little Endian */
        uint64_t ghb_wr_weight         : 6;  /**< [  5:  0](R/W) The weighted round-robin arbitration weight used in the GHAB when
                                                                 arbitrating for read requests from this MHAB. A value of zero will
                                                                 only allow requests when there are no competing requests from other
                                                                 MHABs in the same GHAB, or when all competing MHABs have an effective
                                                                 weight of zero. A higher weight guarantees a greater share of the GHAB
                                                                 bandwidth. */
        uint64_t ghb_rd_weight         : 6;  /**< [ 11:  6](R/W) The weighted round-robin arbitration weight used in the GHAB when
                                                                 arbitrating for read requests from this MHAB. A value of zero will
                                                                 only allow requests when there are no competing requests from other
                                                                 MHABs in the same GHAB, or when all competing MHABs have an effective
                                                                 weight of zero. A higher weight guarantees a greater share of the GHAB
                                                                 bandwidth. */
        uint64_t hp                    : 1;  /**< [ 12: 12](R/W) High Priority selection sent along with the GAA write request for both GMII and AXC traffic */
        uint64_t reserved_13_15        : 3;
        uint64_t gmid_rp3_dl           : 3;  /**< [ 18: 16](R/W) GMI (Guest Machine ID) for RP3 DL transactions. */
        uint64_t reserved_19           : 1;
        uint64_t gmid_rp3_ul_axc       : 3;  /**< [ 22: 20](R/W) GMI (Guest Machine ID) for RP3 UL AXC writes. */
        uint64_t reserved_23_63        : 41;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_cprix_ghb_control_s cn; */
};
typedef union cavm_cprix_ghb_control cavm_cprix_ghb_control_t;

static inline uint64_t CAVM_CPRIX_GHB_CONTROL(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_CPRIX_GHB_CONTROL(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CNF20KA) && (a<=2))
        return 0x87e0278001f8ll + 0x100000ll * ((a) & 0x3);
    __cavm_csr_fatal("CPRIX_GHB_CONTROL", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_CPRIX_GHB_CONTROL(a) cavm_cprix_ghb_control_t
#define bustype_CAVM_CPRIX_GHB_CONTROL(a) CSR_TYPE_NCB
#define basename_CAVM_CPRIX_GHB_CONTROL(a) "CPRIX_GHB_CONTROL"
#define busnum_CAVM_CPRIX_GHB_CONTROL(a) (a)
#define arguments_CAVM_CPRIX_GHB_CONTROL(a) (a),-1,-1,-1

/**
 * Register (NCB) cpri#_ip#_axi_int
 *
 * CPRI AXI Interrupt and INT EVENT CLEAR Register
 * These registers record interrupts due to AXI interface, captured from the
 * PSS_INT information of CPRI MAC.
 */
union cavm_cprix_ipx_axi_int
{
    uint64_t u;
    struct cavm_cprix_ipx_axi_int_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_32_63        : 32;
        uint64_t pss_int               : 32; /**< [ 31:  0](R/W1C/H) PSS_INT information */
#else /* Word 0 - Little Endian */
        uint64_t pss_int               : 32; /**< [ 31:  0](R/W1C/H) PSS_INT information */
        uint64_t reserved_32_63        : 32;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_cprix_ipx_axi_int_s cn; */
};
typedef union cavm_cprix_ipx_axi_int cavm_cprix_ipx_axi_int_t;

static inline uint64_t CAVM_CPRIX_IPX_AXI_INT(uint64_t a, uint64_t b) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_CPRIX_IPX_AXI_INT(uint64_t a, uint64_t b)
{
    if (cavm_is_model(OCTEONTX_CNF20KA) && ((a<=2) && (b<=1)))
        return 0x87e027800108ll + 0x100000ll * ((a) & 0x3) + 0x400ll * ((b) & 0x1);
    __cavm_csr_fatal("CPRIX_IPX_AXI_INT", 2, a, b, 0, 0, 0, 0);
}

#define typedef_CAVM_CPRIX_IPX_AXI_INT(a,b) cavm_cprix_ipx_axi_int_t
#define bustype_CAVM_CPRIX_IPX_AXI_INT(a,b) CSR_TYPE_NCB
#define basename_CAVM_CPRIX_IPX_AXI_INT(a,b) "CPRIX_IPX_AXI_INT"
#define busnum_CAVM_CPRIX_IPX_AXI_INT(a,b) (a)
#define arguments_CAVM_CPRIX_IPX_AXI_INT(a,b) (a),(b),-1,-1

/**
 * Register (NCB) cpri#_ip#_axi_int_ena_w1c
 *
 * CPRI AXI Interrupt Mask Set Register
 * This register clears interrupt enable bits.
 */
union cavm_cprix_ipx_axi_int_ena_w1c
{
    uint64_t u;
    struct cavm_cprix_ipx_axi_int_ena_w1c_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_32_63        : 32;
        uint64_t pss_int               : 32; /**< [ 31:  0](R/W1C/H) Reads or clears enable for CPRI(0..2)_IP(0..1)_AXI_INT[PSS_INT]. */
#else /* Word 0 - Little Endian */
        uint64_t pss_int               : 32; /**< [ 31:  0](R/W1C/H) Reads or clears enable for CPRI(0..2)_IP(0..1)_AXI_INT[PSS_INT]. */
        uint64_t reserved_32_63        : 32;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_cprix_ipx_axi_int_ena_w1c_s cn; */
};
typedef union cavm_cprix_ipx_axi_int_ena_w1c cavm_cprix_ipx_axi_int_ena_w1c_t;

static inline uint64_t CAVM_CPRIX_IPX_AXI_INT_ENA_W1C(uint64_t a, uint64_t b) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_CPRIX_IPX_AXI_INT_ENA_W1C(uint64_t a, uint64_t b)
{
    if (cavm_is_model(OCTEONTX_CNF20KA) && ((a<=2) && (b<=1)))
        return 0x87e027800130ll + 0x100000ll * ((a) & 0x3) + 0x400ll * ((b) & 0x1);
    __cavm_csr_fatal("CPRIX_IPX_AXI_INT_ENA_W1C", 2, a, b, 0, 0, 0, 0);
}

#define typedef_CAVM_CPRIX_IPX_AXI_INT_ENA_W1C(a,b) cavm_cprix_ipx_axi_int_ena_w1c_t
#define bustype_CAVM_CPRIX_IPX_AXI_INT_ENA_W1C(a,b) CSR_TYPE_NCB
#define basename_CAVM_CPRIX_IPX_AXI_INT_ENA_W1C(a,b) "CPRIX_IPX_AXI_INT_ENA_W1C"
#define busnum_CAVM_CPRIX_IPX_AXI_INT_ENA_W1C(a,b) (a)
#define arguments_CAVM_CPRIX_IPX_AXI_INT_ENA_W1C(a,b) (a),(b),-1,-1

/**
 * Register (NCB) cpri#_ip#_axi_int_ena_w1s
 *
 * CPRI AXI Interrupt Mask Clear Register
 * This register sets interrupt enable bits.
 */
union cavm_cprix_ipx_axi_int_ena_w1s
{
    uint64_t u;
    struct cavm_cprix_ipx_axi_int_ena_w1s_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_32_63        : 32;
        uint64_t pss_int               : 32; /**< [ 31:  0](R/W1S/H) Reads or sets enable for CPRI(0..2)_IP(0..1)_AXI_INT[PSS_INT]. */
#else /* Word 0 - Little Endian */
        uint64_t pss_int               : 32; /**< [ 31:  0](R/W1S/H) Reads or sets enable for CPRI(0..2)_IP(0..1)_AXI_INT[PSS_INT]. */
        uint64_t reserved_32_63        : 32;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_cprix_ipx_axi_int_ena_w1s_s cn; */
};
typedef union cavm_cprix_ipx_axi_int_ena_w1s cavm_cprix_ipx_axi_int_ena_w1s_t;

static inline uint64_t CAVM_CPRIX_IPX_AXI_INT_ENA_W1S(uint64_t a, uint64_t b) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_CPRIX_IPX_AXI_INT_ENA_W1S(uint64_t a, uint64_t b)
{
    if (cavm_is_model(OCTEONTX_CNF20KA) && ((a<=2) && (b<=1)))
        return 0x87e027800128ll + 0x100000ll * ((a) & 0x3) + 0x400ll * ((b) & 0x1);
    __cavm_csr_fatal("CPRIX_IPX_AXI_INT_ENA_W1S", 2, a, b, 0, 0, 0, 0);
}

#define typedef_CAVM_CPRIX_IPX_AXI_INT_ENA_W1S(a,b) cavm_cprix_ipx_axi_int_ena_w1s_t
#define bustype_CAVM_CPRIX_IPX_AXI_INT_ENA_W1S(a,b) CSR_TYPE_NCB
#define basename_CAVM_CPRIX_IPX_AXI_INT_ENA_W1S(a,b) "CPRIX_IPX_AXI_INT_ENA_W1S"
#define busnum_CAVM_CPRIX_IPX_AXI_INT_ENA_W1S(a,b) (a)
#define arguments_CAVM_CPRIX_IPX_AXI_INT_ENA_W1S(a,b) (a),(b),-1,-1

/**
 * Register (NCB) cpri#_ip#_axi_int_mask
 *
 * CPRI AXI Interrupt Mask Register
 */
union cavm_cprix_ipx_axi_int_mask
{
    uint64_t u;
    struct cavm_cprix_ipx_axi_int_mask_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_32_63        : 32;
        uint64_t pss_int               : 32; /**< [ 31:  0](R/W) PSS_INT Mask information */
#else /* Word 0 - Little Endian */
        uint64_t pss_int               : 32; /**< [ 31:  0](R/W) PSS_INT Mask information */
        uint64_t reserved_32_63        : 32;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_cprix_ipx_axi_int_mask_s cn; */
};
typedef union cavm_cprix_ipx_axi_int_mask cavm_cprix_ipx_axi_int_mask_t;

static inline uint64_t CAVM_CPRIX_IPX_AXI_INT_MASK(uint64_t a, uint64_t b) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_CPRIX_IPX_AXI_INT_MASK(uint64_t a, uint64_t b)
{
    if (cavm_is_model(OCTEONTX_CNF20KA) && ((a<=2) && (b<=1)))
        return 0x87e027800120ll + 0x100000ll * ((a) & 0x3) + 0x400ll * ((b) & 0x1);
    __cavm_csr_fatal("CPRIX_IPX_AXI_INT_MASK", 2, a, b, 0, 0, 0, 0);
}

#define typedef_CAVM_CPRIX_IPX_AXI_INT_MASK(a,b) cavm_cprix_ipx_axi_int_mask_t
#define bustype_CAVM_CPRIX_IPX_AXI_INT_MASK(a,b) CSR_TYPE_NCB
#define basename_CAVM_CPRIX_IPX_AXI_INT_MASK(a,b) "CPRIX_IPX_AXI_INT_MASK"
#define busnum_CAVM_CPRIX_IPX_AXI_INT_MASK(a,b) (a)
#define arguments_CAVM_CPRIX_IPX_AXI_INT_MASK(a,b) (a),(b),-1,-1

/**
 * Register (NCB) cpri#_ip#_axi_int_psm_msg_w0
 *
 * CPRI AXI Interrupt Message w0  Register
 * JCA word 0 message to send on enabled AXI interrupt
 */
union cavm_cprix_ipx_axi_int_psm_msg_w0
{
    uint64_t u;
    struct cavm_cprix_ipx_axi_int_psm_msg_w0_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t w0                    : 64; /**< [ 63:  0](R/W) Word 0 of JCA message. */
#else /* Word 0 - Little Endian */
        uint64_t w0                    : 64; /**< [ 63:  0](R/W) Word 0 of JCA message. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_cprix_ipx_axi_int_psm_msg_w0_s cn; */
};
typedef union cavm_cprix_ipx_axi_int_psm_msg_w0 cavm_cprix_ipx_axi_int_psm_msg_w0_t;

static inline uint64_t CAVM_CPRIX_IPX_AXI_INT_PSM_MSG_W0(uint64_t a, uint64_t b) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_CPRIX_IPX_AXI_INT_PSM_MSG_W0(uint64_t a, uint64_t b)
{
    if (cavm_is_model(OCTEONTX_CNF20KA) && ((a<=2) && (b<=1)))
        return 0x87e027800180ll + 0x100000ll * ((a) & 0x3) + 0x400ll * ((b) & 0x1);
    __cavm_csr_fatal("CPRIX_IPX_AXI_INT_PSM_MSG_W0", 2, a, b, 0, 0, 0, 0);
}

#define typedef_CAVM_CPRIX_IPX_AXI_INT_PSM_MSG_W0(a,b) cavm_cprix_ipx_axi_int_psm_msg_w0_t
#define bustype_CAVM_CPRIX_IPX_AXI_INT_PSM_MSG_W0(a,b) CSR_TYPE_NCB
#define basename_CAVM_CPRIX_IPX_AXI_INT_PSM_MSG_W0(a,b) "CPRIX_IPX_AXI_INT_PSM_MSG_W0"
#define busnum_CAVM_CPRIX_IPX_AXI_INT_PSM_MSG_W0(a,b) (a)
#define arguments_CAVM_CPRIX_IPX_AXI_INT_PSM_MSG_W0(a,b) (a),(b),-1,-1

/**
 * Register (NCB) cpri#_ip#_axi_int_psm_msg_w1
 *
 * CPRI AXI Interrupt Message w1 Register
 * JCA word 1 message to send on enabled AXI interrupt
 */
union cavm_cprix_ipx_axi_int_psm_msg_w1
{
    uint64_t u;
    struct cavm_cprix_ipx_axi_int_psm_msg_w1_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t w1                    : 64; /**< [ 63:  0](R/W) Word 1 of JCA message. */
#else /* Word 0 - Little Endian */
        uint64_t w1                    : 64; /**< [ 63:  0](R/W) Word 1 of JCA message. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_cprix_ipx_axi_int_psm_msg_w1_s cn; */
};
typedef union cavm_cprix_ipx_axi_int_psm_msg_w1 cavm_cprix_ipx_axi_int_psm_msg_w1_t;

static inline uint64_t CAVM_CPRIX_IPX_AXI_INT_PSM_MSG_W1(uint64_t a, uint64_t b) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_CPRIX_IPX_AXI_INT_PSM_MSG_W1(uint64_t a, uint64_t b)
{
    if (cavm_is_model(OCTEONTX_CNF20KA) && ((a<=2) && (b<=1)))
        return 0x87e027800188ll + 0x100000ll * ((a) & 0x3) + 0x400ll * ((b) & 0x1);
    __cavm_csr_fatal("CPRIX_IPX_AXI_INT_PSM_MSG_W1", 2, a, b, 0, 0, 0, 0);
}

#define typedef_CAVM_CPRIX_IPX_AXI_INT_PSM_MSG_W1(a,b) cavm_cprix_ipx_axi_int_psm_msg_w1_t
#define bustype_CAVM_CPRIX_IPX_AXI_INT_PSM_MSG_W1(a,b) CSR_TYPE_NCB
#define basename_CAVM_CPRIX_IPX_AXI_INT_PSM_MSG_W1(a,b) "CPRIX_IPX_AXI_INT_PSM_MSG_W1"
#define busnum_CAVM_CPRIX_IPX_AXI_INT_PSM_MSG_W1(a,b) (a)
#define arguments_CAVM_CPRIX_IPX_AXI_INT_PSM_MSG_W1(a,b) (a),(b),-1,-1

/**
 * Register (NCB) cpri#_ip#_axi_int_status
 *
 * CPRI AXI Interrupt Status after Mask Register
 */
union cavm_cprix_ipx_axi_int_status
{
    uint64_t u;
    struct cavm_cprix_ipx_axi_int_status_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_32_63        : 32;
        uint64_t pss_int               : 32; /**< [ 31:  0](RO/H) PSS_INT Status information, after gating with Interrupt Mask */
#else /* Word 0 - Little Endian */
        uint64_t pss_int               : 32; /**< [ 31:  0](RO/H) PSS_INT Status information, after gating with Interrupt Mask */
        uint64_t reserved_32_63        : 32;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_cprix_ipx_axi_int_status_s cn; */
};
typedef union cavm_cprix_ipx_axi_int_status cavm_cprix_ipx_axi_int_status_t;

static inline uint64_t CAVM_CPRIX_IPX_AXI_INT_STATUS(uint64_t a, uint64_t b) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_CPRIX_IPX_AXI_INT_STATUS(uint64_t a, uint64_t b)
{
    if (cavm_is_model(OCTEONTX_CNF20KA) && ((a<=2) && (b<=1)))
        return 0x87e027800100ll + 0x100000ll * ((a) & 0x3) + 0x400ll * ((b) & 0x1);
    __cavm_csr_fatal("CPRIX_IPX_AXI_INT_STATUS", 2, a, b, 0, 0, 0, 0);
}

#define typedef_CAVM_CPRIX_IPX_AXI_INT_STATUS(a,b) cavm_cprix_ipx_axi_int_status_t
#define bustype_CAVM_CPRIX_IPX_AXI_INT_STATUS(a,b) CSR_TYPE_NCB
#define basename_CAVM_CPRIX_IPX_AXI_INT_STATUS(a,b) "CPRIX_IPX_AXI_INT_STATUS"
#define busnum_CAVM_CPRIX_IPX_AXI_INT_STATUS(a,b) (a)
#define arguments_CAVM_CPRIX_IPX_AXI_INT_STATUS(a,b) (a),(b),-1,-1

/**
 * Register (NCB) cpri#_ip#_axi_int_w1s
 *
 * CPRI AXI Interrupt Set Register
 * This register sets interrupt bits.
 */
union cavm_cprix_ipx_axi_int_w1s
{
    uint64_t u;
    struct cavm_cprix_ipx_axi_int_w1s_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_32_63        : 32;
        uint64_t pss_int               : 32; /**< [ 31:  0](R/W1S/H) Reads or sets CPRI(0..2)_IP(0..1)_AXI_INT[PSS_INT]. */
#else /* Word 0 - Little Endian */
        uint64_t pss_int               : 32; /**< [ 31:  0](R/W1S/H) Reads or sets CPRI(0..2)_IP(0..1)_AXI_INT[PSS_INT]. */
        uint64_t reserved_32_63        : 32;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_cprix_ipx_axi_int_w1s_s cn; */
};
typedef union cavm_cprix_ipx_axi_int_w1s cavm_cprix_ipx_axi_int_w1s_t;

static inline uint64_t CAVM_CPRIX_IPX_AXI_INT_W1S(uint64_t a, uint64_t b) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_CPRIX_IPX_AXI_INT_W1S(uint64_t a, uint64_t b)
{
    if (cavm_is_model(OCTEONTX_CNF20KA) && ((a<=2) && (b<=1)))
        return 0x87e027800110ll + 0x100000ll * ((a) & 0x3) + 0x400ll * ((b) & 0x1);
    __cavm_csr_fatal("CPRIX_IPX_AXI_INT_W1S", 2, a, b, 0, 0, 0, 0);
}

#define typedef_CAVM_CPRIX_IPX_AXI_INT_W1S(a,b) cavm_cprix_ipx_axi_int_w1s_t
#define bustype_CAVM_CPRIX_IPX_AXI_INT_W1S(a,b) CSR_TYPE_NCB
#define basename_CAVM_CPRIX_IPX_AXI_INT_W1S(a,b) "CPRIX_IPX_AXI_INT_W1S"
#define busnum_CAVM_CPRIX_IPX_AXI_INT_W1S(a,b) (a)
#define arguments_CAVM_CPRIX_IPX_AXI_INT_W1S(a,b) (a),(b),-1,-1

/**
 * Register (NCB) cpri#_mhb_err_int
 *
 * CPRI MHB Error Interrupt Register
 * These registers record interrupts due to different error events that occur in the
 * MHAB outside of the CONN005 IPs.
 */
union cavm_cprix_mhb_err_int
{
    uint64_t u;
    struct cavm_cprix_mhb_err_int_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_35_63        : 29;
        uint64_t rp3_dl_strm_msg_dis   : 1;  /**< [ 34: 34](R/W1C/H) The RP3 DL received a message for a stream that is not enabled. The Error
                                                                 status is recorded in CPRI()_RP3_DL_ERR_STATUS. Interrupt status in the
                                                                 CPRI()_RP3_DL_IP()_STRM_INTR() bitmap. */
        uint64_t rp3_dl_buf_overflow   : 1;  /**< [ 33: 33](R/W1C/H) The RP3 DL received too many messages for a streamID before they could be processed
                                                                 by the RP3 DL pipeline. This could occur either if too many messages are received
                                                                 from the Switch, or from tag corruption in the DMA response path to RP3 DL. The Error
                                                                 status is recorded in CPRI()_RP3_DL_ERR_STATUS and interrupt status in the
                                                                 CPRI()_RP3_DL_IP()_STRM_INTR() bitmap. */
        uint64_t rp3_dl_strm_pop_underflow : 1;/**< [ 32: 32](R/W1C/H) The RP3 DL received a pop from the CPRI MAC for a streamID when the RP3 DL stream
                                                                 buffer is empty. This can arise either due to inconsistent configuration between
                                                                 the RP3 DL and the CPRI MAC, or if the DMA read by the RP3 DL is delayed beyond its
                                                                 required time. The streamID and the CPRI MAC ID are stored in CPRI()_RP3_DL_ERR_STATUS.
                                                                 Interrupt status for the AxC/stream is recorded in the
                                                                 CPRI()_RP3_DL_IP()_STRM_INTR() bitmap. */
        uint64_t reserved_31           : 1;
        uint64_t rp3_ul_axc_nenabled   : 1;  /**< [ 30: 30](R/W1C/H) AXC is not enabled. */
        uint64_t rp3_ul_axc_nfound     : 1;  /**< [ 29: 29](R/W1C/H) AXC is not found. */
        uint64_t reserved_28           : 1;
        uint64_t rp3_ul_fifo_ovfl      : 2;  /**< [ 27: 26](R/W1C/H) FIFO Overflow. */
        uint64_t rp3_ul_sw_msg_ovfl    : 1;  /**< [ 25: 25](R/W1C/H) SW Message Overflow. */
        uint64_t rp3_ul_jd_notif_ovfl  : 1;  /**< [ 24: 24](R/W1C/H) SW Message Overflow. */
        uint64_t rp3_ul_wr_drop_cntx_late : 1;/**< [ 23: 23](R/W1C/H) An RP3 message write DMA was dropped, because the memory access latency was too
                                                                 large and the logic ran out of context. */
        uint64_t reserved_20_22        : 3;
        uint64_t dgmii_async_fifo_full_3 : 1;/**< [ 19: 19](R/W1C/H) Async fifo in transmit path of GMII got full for Lane 1 of IP 1. */
        uint64_t dgmii_async_fifo_full_2 : 1;/**< [ 18: 18](R/W1C/H) Async fifo in transmit path of GMII got full for Lane 0 of IP 1. */
        uint64_t dgmii_async_fifo_full_1 : 1;/**< [ 17: 17](R/W1C/H) Async fifo in transmit path of GMII got full for Lane 1 of IP 0. */
        uint64_t dgmii_async_fifo_full_0 : 1;/**< [ 16: 16](R/W1C/H) Async fifo in transmit path of GMII got full for Lane 0 of IP 0. */
        uint64_t dma_dl_rp3_fifo_ovfl  : 1;  /**< [ 15: 15](R/W1C/H) RP3 DL Request Fifo overflow inside TXDMA module. */
        uint64_t dma_dl_rp3_dma_ferr   : 1;  /**< [ 14: 14](R/W1C/H) Fatal error detected during RP3 DMA. */
        uint64_t dma_dl_rp3_dma_nferr  : 1;  /**< [ 13: 13](R/W1C/H) Non-fatal error detected during RP3 DMA. */
        uint64_t dma_dl_pkt_ferr       : 1;  /**< [ 12: 12](R/W1C/H) Fatal error detected during packet DMA. */
        uint64_t dma_dl_pkt_nferr      : 1;  /**< [ 11: 11](R/W1C/H) Non-fatal error detected during packet DMA. */
        uint64_t dma_ul_rp3_fifo_ovfl  : 1;  /**< [ 10: 10](R/W1C/H) RP3 UL FIFO overflow error inside RXDMA module */
        uint64_t dma_ul_pkt_fifo_ovfl  : 1;  /**< [  9:  9](R/W1C/H) GMII UL FIFO overflow err inside RXDMA module */
        uint64_t dma_ul_rp3_ferr       : 1;  /**< [  8:  8](R/W1C/H) Fatal Error detected during RP3 DMA */
        uint64_t dma_ul_rp3_nferr      : 1;  /**< [  7:  7](R/W1C/H) Non-Fatal Error detected during RP3 DMA */
        uint64_t dma_ul_pkt_ferr       : 1;  /**< [  6:  6](R/W1C/H) Fatal Error detected during Packet DMA */
        uint64_t dma_ul_pkt_nferr      : 1;  /**< [  5:  5](R/W1C/H) Non-Fatal Error detected during Packet DMA */
        uint64_t reserved_4            : 1;
        uint64_t axi_bad_wr_response_1 : 1;  /**< [  3:  3](R/W1C/H) Bad write response received from CONN005 IP 1 */
        uint64_t axi_bad_rd_response_1 : 1;  /**< [  2:  2](R/W1C/H) Bad read response received from IP#1 */
        uint64_t axi_bad_wr_response_0 : 1;  /**< [  1:  1](R/W1C/H) Bad write response received from CONN005 IP 0 */
        uint64_t axi_bad_rd_response_0 : 1;  /**< [  0:  0](R/W1C/H) Bad read response received from IP#0 */
#else /* Word 0 - Little Endian */
        uint64_t axi_bad_rd_response_0 : 1;  /**< [  0:  0](R/W1C/H) Bad read response received from IP#0 */
        uint64_t axi_bad_wr_response_0 : 1;  /**< [  1:  1](R/W1C/H) Bad write response received from CONN005 IP 0 */
        uint64_t axi_bad_rd_response_1 : 1;  /**< [  2:  2](R/W1C/H) Bad read response received from IP#1 */
        uint64_t axi_bad_wr_response_1 : 1;  /**< [  3:  3](R/W1C/H) Bad write response received from CONN005 IP 1 */
        uint64_t reserved_4            : 1;
        uint64_t dma_ul_pkt_nferr      : 1;  /**< [  5:  5](R/W1C/H) Non-Fatal Error detected during Packet DMA */
        uint64_t dma_ul_pkt_ferr       : 1;  /**< [  6:  6](R/W1C/H) Fatal Error detected during Packet DMA */
        uint64_t dma_ul_rp3_nferr      : 1;  /**< [  7:  7](R/W1C/H) Non-Fatal Error detected during RP3 DMA */
        uint64_t dma_ul_rp3_ferr       : 1;  /**< [  8:  8](R/W1C/H) Fatal Error detected during RP3 DMA */
        uint64_t dma_ul_pkt_fifo_ovfl  : 1;  /**< [  9:  9](R/W1C/H) GMII UL FIFO overflow err inside RXDMA module */
        uint64_t dma_ul_rp3_fifo_ovfl  : 1;  /**< [ 10: 10](R/W1C/H) RP3 UL FIFO overflow error inside RXDMA module */
        uint64_t dma_dl_pkt_nferr      : 1;  /**< [ 11: 11](R/W1C/H) Non-fatal error detected during packet DMA. */
        uint64_t dma_dl_pkt_ferr       : 1;  /**< [ 12: 12](R/W1C/H) Fatal error detected during packet DMA. */
        uint64_t dma_dl_rp3_dma_nferr  : 1;  /**< [ 13: 13](R/W1C/H) Non-fatal error detected during RP3 DMA. */
        uint64_t dma_dl_rp3_dma_ferr   : 1;  /**< [ 14: 14](R/W1C/H) Fatal error detected during RP3 DMA. */
        uint64_t dma_dl_rp3_fifo_ovfl  : 1;  /**< [ 15: 15](R/W1C/H) RP3 DL Request Fifo overflow inside TXDMA module. */
        uint64_t dgmii_async_fifo_full_0 : 1;/**< [ 16: 16](R/W1C/H) Async fifo in transmit path of GMII got full for Lane 0 of IP 0. */
        uint64_t dgmii_async_fifo_full_1 : 1;/**< [ 17: 17](R/W1C/H) Async fifo in transmit path of GMII got full for Lane 1 of IP 0. */
        uint64_t dgmii_async_fifo_full_2 : 1;/**< [ 18: 18](R/W1C/H) Async fifo in transmit path of GMII got full for Lane 0 of IP 1. */
        uint64_t dgmii_async_fifo_full_3 : 1;/**< [ 19: 19](R/W1C/H) Async fifo in transmit path of GMII got full for Lane 1 of IP 1. */
        uint64_t reserved_20_22        : 3;
        uint64_t rp3_ul_wr_drop_cntx_late : 1;/**< [ 23: 23](R/W1C/H) An RP3 message write DMA was dropped, because the memory access latency was too
                                                                 large and the logic ran out of context. */
        uint64_t rp3_ul_jd_notif_ovfl  : 1;  /**< [ 24: 24](R/W1C/H) SW Message Overflow. */
        uint64_t rp3_ul_sw_msg_ovfl    : 1;  /**< [ 25: 25](R/W1C/H) SW Message Overflow. */
        uint64_t rp3_ul_fifo_ovfl      : 2;  /**< [ 27: 26](R/W1C/H) FIFO Overflow. */
        uint64_t reserved_28           : 1;
        uint64_t rp3_ul_axc_nfound     : 1;  /**< [ 29: 29](R/W1C/H) AXC is not found. */
        uint64_t rp3_ul_axc_nenabled   : 1;  /**< [ 30: 30](R/W1C/H) AXC is not enabled. */
        uint64_t reserved_31           : 1;
        uint64_t rp3_dl_strm_pop_underflow : 1;/**< [ 32: 32](R/W1C/H) The RP3 DL received a pop from the CPRI MAC for a streamID when the RP3 DL stream
                                                                 buffer is empty. This can arise either due to inconsistent configuration between
                                                                 the RP3 DL and the CPRI MAC, or if the DMA read by the RP3 DL is delayed beyond its
                                                                 required time. The streamID and the CPRI MAC ID are stored in CPRI()_RP3_DL_ERR_STATUS.
                                                                 Interrupt status for the AxC/stream is recorded in the
                                                                 CPRI()_RP3_DL_IP()_STRM_INTR() bitmap. */
        uint64_t rp3_dl_buf_overflow   : 1;  /**< [ 33: 33](R/W1C/H) The RP3 DL received too many messages for a streamID before they could be processed
                                                                 by the RP3 DL pipeline. This could occur either if too many messages are received
                                                                 from the Switch, or from tag corruption in the DMA response path to RP3 DL. The Error
                                                                 status is recorded in CPRI()_RP3_DL_ERR_STATUS and interrupt status in the
                                                                 CPRI()_RP3_DL_IP()_STRM_INTR() bitmap. */
        uint64_t rp3_dl_strm_msg_dis   : 1;  /**< [ 34: 34](R/W1C/H) The RP3 DL received a message for a stream that is not enabled. The Error
                                                                 status is recorded in CPRI()_RP3_DL_ERR_STATUS. Interrupt status in the
                                                                 CPRI()_RP3_DL_IP()_STRM_INTR() bitmap. */
        uint64_t reserved_35_63        : 29;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_cprix_mhb_err_int_s cn; */
};
typedef union cavm_cprix_mhb_err_int cavm_cprix_mhb_err_int_t;

static inline uint64_t CAVM_CPRIX_MHB_ERR_INT(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_CPRIX_MHB_ERR_INT(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CNF20KA) && (a<=2))
        return 0x87e027800200ll + 0x100000ll * ((a) & 0x3);
    __cavm_csr_fatal("CPRIX_MHB_ERR_INT", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_CPRIX_MHB_ERR_INT(a) cavm_cprix_mhb_err_int_t
#define bustype_CAVM_CPRIX_MHB_ERR_INT(a) CSR_TYPE_NCB
#define basename_CAVM_CPRIX_MHB_ERR_INT(a) "CPRIX_MHB_ERR_INT"
#define busnum_CAVM_CPRIX_MHB_ERR_INT(a) (a)
#define arguments_CAVM_CPRIX_MHB_ERR_INT(a) (a),-1,-1,-1

/**
 * Register (NCB) cpri#_mhb_err_int_ena_w1c
 *
 * CPRI MHB Interrupt Enable Clear Register
 * This register clears interrupt enable bits.
 */
union cavm_cprix_mhb_err_int_ena_w1c
{
    uint64_t u;
    struct cavm_cprix_mhb_err_int_ena_w1c_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_35_63        : 29;
        uint64_t rp3_dl_strm_msg_dis   : 1;  /**< [ 34: 34](R/W1C/H) Reads or clears enable for CPRI(0..2)_MHB_ERR_INT[RP3_DL_STRM_MSG_DIS]. */
        uint64_t rp3_dl_buf_overflow   : 1;  /**< [ 33: 33](R/W1C/H) Reads or clears enable for CPRI(0..2)_MHB_ERR_INT[RP3_DL_BUF_OVERFLOW]. */
        uint64_t rp3_dl_strm_pop_underflow : 1;/**< [ 32: 32](R/W1C/H) Reads or clears enable for CPRI(0..2)_MHB_ERR_INT[RP3_DL_STRM_POP_UNDERFLOW]. */
        uint64_t reserved_31           : 1;
        uint64_t rp3_ul_axc_nenabled   : 1;  /**< [ 30: 30](R/W1C/H) Reads or clears enable for CPRI(0..2)_MHB_ERR_INT[RP3_UL_AXC_NENABLED]. */
        uint64_t rp3_ul_axc_nfound     : 1;  /**< [ 29: 29](R/W1C/H) Reads or clears enable for CPRI(0..2)_MHB_ERR_INT[RP3_UL_AXC_NFOUND]. */
        uint64_t reserved_28           : 1;
        uint64_t rp3_ul_fifo_ovfl      : 2;  /**< [ 27: 26](R/W1C/H) Reads or clears enable for CPRI(0..2)_MHB_ERR_INT[RP3_UL_FIFO_OVFL]. */
        uint64_t rp3_ul_sw_msg_ovfl    : 1;  /**< [ 25: 25](R/W1C/H) Reads or clears enable for CPRI(0..2)_MHB_ERR_INT[RP3_UL_SW_MSG_OVFL]. */
        uint64_t rp3_ul_jd_notif_ovfl  : 1;  /**< [ 24: 24](R/W1C/H) Reads or clears enable for CPRI(0..2)_MHB_ERR_INT[RP3_UL_JD_NOTIF_OVFL]. */
        uint64_t rp3_ul_wr_drop_cntx_late : 1;/**< [ 23: 23](R/W1C/H) Reads or clears enable for CPRI(0..2)_MHB_ERR_INT[RP3_UL_WR_DROP_CNTX_LATE]. */
        uint64_t reserved_20_22        : 3;
        uint64_t dgmii_async_fifo_full_3 : 1;/**< [ 19: 19](R/W1C/H) Reads or clears enable for CPRI(0..2)_MHB_ERR_INT[DGMII_ASYNC_FIFO_FULL_3]. */
        uint64_t dgmii_async_fifo_full_2 : 1;/**< [ 18: 18](R/W1C/H) Reads or clears enable for CPRI(0..2)_MHB_ERR_INT[DGMII_ASYNC_FIFO_FULL_2]. */
        uint64_t dgmii_async_fifo_full_1 : 1;/**< [ 17: 17](R/W1C/H) Reads or clears enable for CPRI(0..2)_MHB_ERR_INT[DGMII_ASYNC_FIFO_FULL_1]. */
        uint64_t dgmii_async_fifo_full_0 : 1;/**< [ 16: 16](R/W1C/H) Reads or clears enable for CPRI(0..2)_MHB_ERR_INT[DGMII_ASYNC_FIFO_FULL_0]. */
        uint64_t dma_dl_rp3_fifo_ovfl  : 1;  /**< [ 15: 15](R/W1C/H) Reads or clears enable for CPRI(0..2)_MHB_ERR_INT[DMA_DL_RP3_FIFO_OVFL]. */
        uint64_t dma_dl_rp3_dma_ferr   : 1;  /**< [ 14: 14](R/W1C/H) Reads or clears enable for CPRI(0..2)_MHB_ERR_INT[DMA_DL_RP3_DMA_FERR]. */
        uint64_t dma_dl_rp3_dma_nferr  : 1;  /**< [ 13: 13](R/W1C/H) Reads or clears enable for CPRI(0..2)_MHB_ERR_INT[DMA_DL_RP3_DMA_NFERR]. */
        uint64_t dma_dl_pkt_ferr       : 1;  /**< [ 12: 12](R/W1C/H) Reads or clears enable for CPRI(0..2)_MHB_ERR_INT[DMA_DL_PKT_FERR]. */
        uint64_t dma_dl_pkt_nferr      : 1;  /**< [ 11: 11](R/W1C/H) Reads or clears enable for CPRI(0..2)_MHB_ERR_INT[DMA_DL_PKT_NFERR]. */
        uint64_t dma_ul_rp3_fifo_ovfl  : 1;  /**< [ 10: 10](R/W1C/H) Reads or clears enable for CPRI(0..2)_MHB_ERR_INT[DMA_UL_RP3_FIFO_OVFL]. */
        uint64_t dma_ul_pkt_fifo_ovfl  : 1;  /**< [  9:  9](R/W1C/H) Reads or clears enable for CPRI(0..2)_MHB_ERR_INT[DMA_UL_PKT_FIFO_OVFL]. */
        uint64_t dma_ul_rp3_ferr       : 1;  /**< [  8:  8](R/W1C/H) Reads or clears enable for CPRI(0..2)_MHB_ERR_INT[DMA_UL_RP3_FERR]. */
        uint64_t dma_ul_rp3_nferr      : 1;  /**< [  7:  7](R/W1C/H) Reads or clears enable for CPRI(0..2)_MHB_ERR_INT[DMA_UL_RP3_NFERR]. */
        uint64_t dma_ul_pkt_ferr       : 1;  /**< [  6:  6](R/W1C/H) Reads or clears enable for CPRI(0..2)_MHB_ERR_INT[DMA_UL_PKT_FERR]. */
        uint64_t dma_ul_pkt_nferr      : 1;  /**< [  5:  5](R/W1C/H) Reads or clears enable for CPRI(0..2)_MHB_ERR_INT[DMA_UL_PKT_NFERR]. */
        uint64_t reserved_4            : 1;
        uint64_t axi_bad_wr_response_1 : 1;  /**< [  3:  3](R/W1C/H) Reads or clears enable for CPRI(0..2)_MHB_ERR_INT[AXI_BAD_WR_RESPONSE_1]. */
        uint64_t axi_bad_rd_response_1 : 1;  /**< [  2:  2](R/W1C/H) Reads or clears enable for CPRI(0..2)_MHB_ERR_INT[AXI_BAD_RD_RESPONSE_1]. */
        uint64_t axi_bad_wr_response_0 : 1;  /**< [  1:  1](R/W1C/H) Reads or clears enable for CPRI(0..2)_MHB_ERR_INT[AXI_BAD_WR_RESPONSE_0]. */
        uint64_t axi_bad_rd_response_0 : 1;  /**< [  0:  0](R/W1C/H) Reads or clears enable for CPRI(0..2)_MHB_ERR_INT[AXI_BAD_RD_RESPONSE_0]. */
#else /* Word 0 - Little Endian */
        uint64_t axi_bad_rd_response_0 : 1;  /**< [  0:  0](R/W1C/H) Reads or clears enable for CPRI(0..2)_MHB_ERR_INT[AXI_BAD_RD_RESPONSE_0]. */
        uint64_t axi_bad_wr_response_0 : 1;  /**< [  1:  1](R/W1C/H) Reads or clears enable for CPRI(0..2)_MHB_ERR_INT[AXI_BAD_WR_RESPONSE_0]. */
        uint64_t axi_bad_rd_response_1 : 1;  /**< [  2:  2](R/W1C/H) Reads or clears enable for CPRI(0..2)_MHB_ERR_INT[AXI_BAD_RD_RESPONSE_1]. */
        uint64_t axi_bad_wr_response_1 : 1;  /**< [  3:  3](R/W1C/H) Reads or clears enable for CPRI(0..2)_MHB_ERR_INT[AXI_BAD_WR_RESPONSE_1]. */
        uint64_t reserved_4            : 1;
        uint64_t dma_ul_pkt_nferr      : 1;  /**< [  5:  5](R/W1C/H) Reads or clears enable for CPRI(0..2)_MHB_ERR_INT[DMA_UL_PKT_NFERR]. */
        uint64_t dma_ul_pkt_ferr       : 1;  /**< [  6:  6](R/W1C/H) Reads or clears enable for CPRI(0..2)_MHB_ERR_INT[DMA_UL_PKT_FERR]. */
        uint64_t dma_ul_rp3_nferr      : 1;  /**< [  7:  7](R/W1C/H) Reads or clears enable for CPRI(0..2)_MHB_ERR_INT[DMA_UL_RP3_NFERR]. */
        uint64_t dma_ul_rp3_ferr       : 1;  /**< [  8:  8](R/W1C/H) Reads or clears enable for CPRI(0..2)_MHB_ERR_INT[DMA_UL_RP3_FERR]. */
        uint64_t dma_ul_pkt_fifo_ovfl  : 1;  /**< [  9:  9](R/W1C/H) Reads or clears enable for CPRI(0..2)_MHB_ERR_INT[DMA_UL_PKT_FIFO_OVFL]. */
        uint64_t dma_ul_rp3_fifo_ovfl  : 1;  /**< [ 10: 10](R/W1C/H) Reads or clears enable for CPRI(0..2)_MHB_ERR_INT[DMA_UL_RP3_FIFO_OVFL]. */
        uint64_t dma_dl_pkt_nferr      : 1;  /**< [ 11: 11](R/W1C/H) Reads or clears enable for CPRI(0..2)_MHB_ERR_INT[DMA_DL_PKT_NFERR]. */
        uint64_t dma_dl_pkt_ferr       : 1;  /**< [ 12: 12](R/W1C/H) Reads or clears enable for CPRI(0..2)_MHB_ERR_INT[DMA_DL_PKT_FERR]. */
        uint64_t dma_dl_rp3_dma_nferr  : 1;  /**< [ 13: 13](R/W1C/H) Reads or clears enable for CPRI(0..2)_MHB_ERR_INT[DMA_DL_RP3_DMA_NFERR]. */
        uint64_t dma_dl_rp3_dma_ferr   : 1;  /**< [ 14: 14](R/W1C/H) Reads or clears enable for CPRI(0..2)_MHB_ERR_INT[DMA_DL_RP3_DMA_FERR]. */
        uint64_t dma_dl_rp3_fifo_ovfl  : 1;  /**< [ 15: 15](R/W1C/H) Reads or clears enable for CPRI(0..2)_MHB_ERR_INT[DMA_DL_RP3_FIFO_OVFL]. */
        uint64_t dgmii_async_fifo_full_0 : 1;/**< [ 16: 16](R/W1C/H) Reads or clears enable for CPRI(0..2)_MHB_ERR_INT[DGMII_ASYNC_FIFO_FULL_0]. */
        uint64_t dgmii_async_fifo_full_1 : 1;/**< [ 17: 17](R/W1C/H) Reads or clears enable for CPRI(0..2)_MHB_ERR_INT[DGMII_ASYNC_FIFO_FULL_1]. */
        uint64_t dgmii_async_fifo_full_2 : 1;/**< [ 18: 18](R/W1C/H) Reads or clears enable for CPRI(0..2)_MHB_ERR_INT[DGMII_ASYNC_FIFO_FULL_2]. */
        uint64_t dgmii_async_fifo_full_3 : 1;/**< [ 19: 19](R/W1C/H) Reads or clears enable for CPRI(0..2)_MHB_ERR_INT[DGMII_ASYNC_FIFO_FULL_3]. */
        uint64_t reserved_20_22        : 3;
        uint64_t rp3_ul_wr_drop_cntx_late : 1;/**< [ 23: 23](R/W1C/H) Reads or clears enable for CPRI(0..2)_MHB_ERR_INT[RP3_UL_WR_DROP_CNTX_LATE]. */
        uint64_t rp3_ul_jd_notif_ovfl  : 1;  /**< [ 24: 24](R/W1C/H) Reads or clears enable for CPRI(0..2)_MHB_ERR_INT[RP3_UL_JD_NOTIF_OVFL]. */
        uint64_t rp3_ul_sw_msg_ovfl    : 1;  /**< [ 25: 25](R/W1C/H) Reads or clears enable for CPRI(0..2)_MHB_ERR_INT[RP3_UL_SW_MSG_OVFL]. */
        uint64_t rp3_ul_fifo_ovfl      : 2;  /**< [ 27: 26](R/W1C/H) Reads or clears enable for CPRI(0..2)_MHB_ERR_INT[RP3_UL_FIFO_OVFL]. */
        uint64_t reserved_28           : 1;
        uint64_t rp3_ul_axc_nfound     : 1;  /**< [ 29: 29](R/W1C/H) Reads or clears enable for CPRI(0..2)_MHB_ERR_INT[RP3_UL_AXC_NFOUND]. */
        uint64_t rp3_ul_axc_nenabled   : 1;  /**< [ 30: 30](R/W1C/H) Reads or clears enable for CPRI(0..2)_MHB_ERR_INT[RP3_UL_AXC_NENABLED]. */
        uint64_t reserved_31           : 1;
        uint64_t rp3_dl_strm_pop_underflow : 1;/**< [ 32: 32](R/W1C/H) Reads or clears enable for CPRI(0..2)_MHB_ERR_INT[RP3_DL_STRM_POP_UNDERFLOW]. */
        uint64_t rp3_dl_buf_overflow   : 1;  /**< [ 33: 33](R/W1C/H) Reads or clears enable for CPRI(0..2)_MHB_ERR_INT[RP3_DL_BUF_OVERFLOW]. */
        uint64_t rp3_dl_strm_msg_dis   : 1;  /**< [ 34: 34](R/W1C/H) Reads or clears enable for CPRI(0..2)_MHB_ERR_INT[RP3_DL_STRM_MSG_DIS]. */
        uint64_t reserved_35_63        : 29;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_cprix_mhb_err_int_ena_w1c_s cn; */
};
typedef union cavm_cprix_mhb_err_int_ena_w1c cavm_cprix_mhb_err_int_ena_w1c_t;

static inline uint64_t CAVM_CPRIX_MHB_ERR_INT_ENA_W1C(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_CPRIX_MHB_ERR_INT_ENA_W1C(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CNF20KA) && (a<=2))
        return 0x87e027800210ll + 0x100000ll * ((a) & 0x3);
    __cavm_csr_fatal("CPRIX_MHB_ERR_INT_ENA_W1C", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_CPRIX_MHB_ERR_INT_ENA_W1C(a) cavm_cprix_mhb_err_int_ena_w1c_t
#define bustype_CAVM_CPRIX_MHB_ERR_INT_ENA_W1C(a) CSR_TYPE_NCB
#define basename_CAVM_CPRIX_MHB_ERR_INT_ENA_W1C(a) "CPRIX_MHB_ERR_INT_ENA_W1C"
#define busnum_CAVM_CPRIX_MHB_ERR_INT_ENA_W1C(a) (a)
#define arguments_CAVM_CPRIX_MHB_ERR_INT_ENA_W1C(a) (a),-1,-1,-1

/**
 * Register (NCB) cpri#_mhb_err_int_ena_w1s
 *
 * CPRI MHB Interrupt Enable Set Register
 * This register sets interrupt enable bits.
 */
union cavm_cprix_mhb_err_int_ena_w1s
{
    uint64_t u;
    struct cavm_cprix_mhb_err_int_ena_w1s_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_35_63        : 29;
        uint64_t rp3_dl_strm_msg_dis   : 1;  /**< [ 34: 34](R/W1S/H) Reads or sets enable for CPRI(0..2)_MHB_ERR_INT[RP3_DL_STRM_MSG_DIS]. */
        uint64_t rp3_dl_buf_overflow   : 1;  /**< [ 33: 33](R/W1S/H) Reads or sets enable for CPRI(0..2)_MHB_ERR_INT[RP3_DL_BUF_OVERFLOW]. */
        uint64_t rp3_dl_strm_pop_underflow : 1;/**< [ 32: 32](R/W1S/H) Reads or sets enable for CPRI(0..2)_MHB_ERR_INT[RP3_DL_STRM_POP_UNDERFLOW]. */
        uint64_t reserved_31           : 1;
        uint64_t rp3_ul_axc_nenabled   : 1;  /**< [ 30: 30](R/W1S/H) Reads or sets enable for CPRI(0..2)_MHB_ERR_INT[RP3_UL_AXC_NENABLED]. */
        uint64_t rp3_ul_axc_nfound     : 1;  /**< [ 29: 29](R/W1S/H) Reads or sets enable for CPRI(0..2)_MHB_ERR_INT[RP3_UL_AXC_NFOUND]. */
        uint64_t reserved_28           : 1;
        uint64_t rp3_ul_fifo_ovfl      : 2;  /**< [ 27: 26](R/W1S/H) Reads or sets enable for CPRI(0..2)_MHB_ERR_INT[RP3_UL_FIFO_OVFL]. */
        uint64_t rp3_ul_sw_msg_ovfl    : 1;  /**< [ 25: 25](R/W1S/H) Reads or sets enable for CPRI(0..2)_MHB_ERR_INT[RP3_UL_SW_MSG_OVFL]. */
        uint64_t rp3_ul_jd_notif_ovfl  : 1;  /**< [ 24: 24](R/W1S/H) Reads or sets enable for CPRI(0..2)_MHB_ERR_INT[RP3_UL_JD_NOTIF_OVFL]. */
        uint64_t rp3_ul_wr_drop_cntx_late : 1;/**< [ 23: 23](R/W1S/H) Reads or sets enable for CPRI(0..2)_MHB_ERR_INT[RP3_UL_WR_DROP_CNTX_LATE]. */
        uint64_t reserved_20_22        : 3;
        uint64_t dgmii_async_fifo_full_3 : 1;/**< [ 19: 19](R/W1S/H) Reads or sets enable for CPRI(0..2)_MHB_ERR_INT[DGMII_ASYNC_FIFO_FULL_3]. */
        uint64_t dgmii_async_fifo_full_2 : 1;/**< [ 18: 18](R/W1S/H) Reads or sets enable for CPRI(0..2)_MHB_ERR_INT[DGMII_ASYNC_FIFO_FULL_2]. */
        uint64_t dgmii_async_fifo_full_1 : 1;/**< [ 17: 17](R/W1S/H) Reads or sets enable for CPRI(0..2)_MHB_ERR_INT[DGMII_ASYNC_FIFO_FULL_1]. */
        uint64_t dgmii_async_fifo_full_0 : 1;/**< [ 16: 16](R/W1S/H) Reads or sets enable for CPRI(0..2)_MHB_ERR_INT[DGMII_ASYNC_FIFO_FULL_0]. */
        uint64_t dma_dl_rp3_fifo_ovfl  : 1;  /**< [ 15: 15](R/W1S/H) Reads or sets enable for CPRI(0..2)_MHB_ERR_INT[DMA_DL_RP3_FIFO_OVFL]. */
        uint64_t dma_dl_rp3_dma_ferr   : 1;  /**< [ 14: 14](R/W1S/H) Reads or sets enable for CPRI(0..2)_MHB_ERR_INT[DMA_DL_RP3_DMA_FERR]. */
        uint64_t dma_dl_rp3_dma_nferr  : 1;  /**< [ 13: 13](R/W1S/H) Reads or sets enable for CPRI(0..2)_MHB_ERR_INT[DMA_DL_RP3_DMA_NFERR]. */
        uint64_t dma_dl_pkt_ferr       : 1;  /**< [ 12: 12](R/W1S/H) Reads or sets enable for CPRI(0..2)_MHB_ERR_INT[DMA_DL_PKT_FERR]. */
        uint64_t dma_dl_pkt_nferr      : 1;  /**< [ 11: 11](R/W1S/H) Reads or sets enable for CPRI(0..2)_MHB_ERR_INT[DMA_DL_PKT_NFERR]. */
        uint64_t dma_ul_rp3_fifo_ovfl  : 1;  /**< [ 10: 10](R/W1S/H) Reads or sets enable for CPRI(0..2)_MHB_ERR_INT[DMA_UL_RP3_FIFO_OVFL]. */
        uint64_t dma_ul_pkt_fifo_ovfl  : 1;  /**< [  9:  9](R/W1S/H) Reads or sets enable for CPRI(0..2)_MHB_ERR_INT[DMA_UL_PKT_FIFO_OVFL]. */
        uint64_t dma_ul_rp3_ferr       : 1;  /**< [  8:  8](R/W1S/H) Reads or sets enable for CPRI(0..2)_MHB_ERR_INT[DMA_UL_RP3_FERR]. */
        uint64_t dma_ul_rp3_nferr      : 1;  /**< [  7:  7](R/W1S/H) Reads or sets enable for CPRI(0..2)_MHB_ERR_INT[DMA_UL_RP3_NFERR]. */
        uint64_t dma_ul_pkt_ferr       : 1;  /**< [  6:  6](R/W1S/H) Reads or sets enable for CPRI(0..2)_MHB_ERR_INT[DMA_UL_PKT_FERR]. */
        uint64_t dma_ul_pkt_nferr      : 1;  /**< [  5:  5](R/W1S/H) Reads or sets enable for CPRI(0..2)_MHB_ERR_INT[DMA_UL_PKT_NFERR]. */
        uint64_t reserved_4            : 1;
        uint64_t axi_bad_wr_response_1 : 1;  /**< [  3:  3](R/W1S/H) Reads or sets enable for CPRI(0..2)_MHB_ERR_INT[AXI_BAD_WR_RESPONSE_1]. */
        uint64_t axi_bad_rd_response_1 : 1;  /**< [  2:  2](R/W1S/H) Reads or sets enable for CPRI(0..2)_MHB_ERR_INT[AXI_BAD_RD_RESPONSE_1]. */
        uint64_t axi_bad_wr_response_0 : 1;  /**< [  1:  1](R/W1S/H) Reads or sets enable for CPRI(0..2)_MHB_ERR_INT[AXI_BAD_WR_RESPONSE_0]. */
        uint64_t axi_bad_rd_response_0 : 1;  /**< [  0:  0](R/W1S/H) Reads or sets enable for CPRI(0..2)_MHB_ERR_INT[AXI_BAD_RD_RESPONSE_0]. */
#else /* Word 0 - Little Endian */
        uint64_t axi_bad_rd_response_0 : 1;  /**< [  0:  0](R/W1S/H) Reads or sets enable for CPRI(0..2)_MHB_ERR_INT[AXI_BAD_RD_RESPONSE_0]. */
        uint64_t axi_bad_wr_response_0 : 1;  /**< [  1:  1](R/W1S/H) Reads or sets enable for CPRI(0..2)_MHB_ERR_INT[AXI_BAD_WR_RESPONSE_0]. */
        uint64_t axi_bad_rd_response_1 : 1;  /**< [  2:  2](R/W1S/H) Reads or sets enable for CPRI(0..2)_MHB_ERR_INT[AXI_BAD_RD_RESPONSE_1]. */
        uint64_t axi_bad_wr_response_1 : 1;  /**< [  3:  3](R/W1S/H) Reads or sets enable for CPRI(0..2)_MHB_ERR_INT[AXI_BAD_WR_RESPONSE_1]. */
        uint64_t reserved_4            : 1;
        uint64_t dma_ul_pkt_nferr      : 1;  /**< [  5:  5](R/W1S/H) Reads or sets enable for CPRI(0..2)_MHB_ERR_INT[DMA_UL_PKT_NFERR]. */
        uint64_t dma_ul_pkt_ferr       : 1;  /**< [  6:  6](R/W1S/H) Reads or sets enable for CPRI(0..2)_MHB_ERR_INT[DMA_UL_PKT_FERR]. */
        uint64_t dma_ul_rp3_nferr      : 1;  /**< [  7:  7](R/W1S/H) Reads or sets enable for CPRI(0..2)_MHB_ERR_INT[DMA_UL_RP3_NFERR]. */
        uint64_t dma_ul_rp3_ferr       : 1;  /**< [  8:  8](R/W1S/H) Reads or sets enable for CPRI(0..2)_MHB_ERR_INT[DMA_UL_RP3_FERR]. */
        uint64_t dma_ul_pkt_fifo_ovfl  : 1;  /**< [  9:  9](R/W1S/H) Reads or sets enable for CPRI(0..2)_MHB_ERR_INT[DMA_UL_PKT_FIFO_OVFL]. */
        uint64_t dma_ul_rp3_fifo_ovfl  : 1;  /**< [ 10: 10](R/W1S/H) Reads or sets enable for CPRI(0..2)_MHB_ERR_INT[DMA_UL_RP3_FIFO_OVFL]. */
        uint64_t dma_dl_pkt_nferr      : 1;  /**< [ 11: 11](R/W1S/H) Reads or sets enable for CPRI(0..2)_MHB_ERR_INT[DMA_DL_PKT_NFERR]. */
        uint64_t dma_dl_pkt_ferr       : 1;  /**< [ 12: 12](R/W1S/H) Reads or sets enable for CPRI(0..2)_MHB_ERR_INT[DMA_DL_PKT_FERR]. */
        uint64_t dma_dl_rp3_dma_nferr  : 1;  /**< [ 13: 13](R/W1S/H) Reads or sets enable for CPRI(0..2)_MHB_ERR_INT[DMA_DL_RP3_DMA_NFERR]. */
        uint64_t dma_dl_rp3_dma_ferr   : 1;  /**< [ 14: 14](R/W1S/H) Reads or sets enable for CPRI(0..2)_MHB_ERR_INT[DMA_DL_RP3_DMA_FERR]. */
        uint64_t dma_dl_rp3_fifo_ovfl  : 1;  /**< [ 15: 15](R/W1S/H) Reads or sets enable for CPRI(0..2)_MHB_ERR_INT[DMA_DL_RP3_FIFO_OVFL]. */
        uint64_t dgmii_async_fifo_full_0 : 1;/**< [ 16: 16](R/W1S/H) Reads or sets enable for CPRI(0..2)_MHB_ERR_INT[DGMII_ASYNC_FIFO_FULL_0]. */
        uint64_t dgmii_async_fifo_full_1 : 1;/**< [ 17: 17](R/W1S/H) Reads or sets enable for CPRI(0..2)_MHB_ERR_INT[DGMII_ASYNC_FIFO_FULL_1]. */
        uint64_t dgmii_async_fifo_full_2 : 1;/**< [ 18: 18](R/W1S/H) Reads or sets enable for CPRI(0..2)_MHB_ERR_INT[DGMII_ASYNC_FIFO_FULL_2]. */
        uint64_t dgmii_async_fifo_full_3 : 1;/**< [ 19: 19](R/W1S/H) Reads or sets enable for CPRI(0..2)_MHB_ERR_INT[DGMII_ASYNC_FIFO_FULL_3]. */
        uint64_t reserved_20_22        : 3;
        uint64_t rp3_ul_wr_drop_cntx_late : 1;/**< [ 23: 23](R/W1S/H) Reads or sets enable for CPRI(0..2)_MHB_ERR_INT[RP3_UL_WR_DROP_CNTX_LATE]. */
        uint64_t rp3_ul_jd_notif_ovfl  : 1;  /**< [ 24: 24](R/W1S/H) Reads or sets enable for CPRI(0..2)_MHB_ERR_INT[RP3_UL_JD_NOTIF_OVFL]. */
        uint64_t rp3_ul_sw_msg_ovfl    : 1;  /**< [ 25: 25](R/W1S/H) Reads or sets enable for CPRI(0..2)_MHB_ERR_INT[RP3_UL_SW_MSG_OVFL]. */
        uint64_t rp3_ul_fifo_ovfl      : 2;  /**< [ 27: 26](R/W1S/H) Reads or sets enable for CPRI(0..2)_MHB_ERR_INT[RP3_UL_FIFO_OVFL]. */
        uint64_t reserved_28           : 1;
        uint64_t rp3_ul_axc_nfound     : 1;  /**< [ 29: 29](R/W1S/H) Reads or sets enable for CPRI(0..2)_MHB_ERR_INT[RP3_UL_AXC_NFOUND]. */
        uint64_t rp3_ul_axc_nenabled   : 1;  /**< [ 30: 30](R/W1S/H) Reads or sets enable for CPRI(0..2)_MHB_ERR_INT[RP3_UL_AXC_NENABLED]. */
        uint64_t reserved_31           : 1;
        uint64_t rp3_dl_strm_pop_underflow : 1;/**< [ 32: 32](R/W1S/H) Reads or sets enable for CPRI(0..2)_MHB_ERR_INT[RP3_DL_STRM_POP_UNDERFLOW]. */
        uint64_t rp3_dl_buf_overflow   : 1;  /**< [ 33: 33](R/W1S/H) Reads or sets enable for CPRI(0..2)_MHB_ERR_INT[RP3_DL_BUF_OVERFLOW]. */
        uint64_t rp3_dl_strm_msg_dis   : 1;  /**< [ 34: 34](R/W1S/H) Reads or sets enable for CPRI(0..2)_MHB_ERR_INT[RP3_DL_STRM_MSG_DIS]. */
        uint64_t reserved_35_63        : 29;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_cprix_mhb_err_int_ena_w1s_s cn; */
};
typedef union cavm_cprix_mhb_err_int_ena_w1s cavm_cprix_mhb_err_int_ena_w1s_t;

static inline uint64_t CAVM_CPRIX_MHB_ERR_INT_ENA_W1S(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_CPRIX_MHB_ERR_INT_ENA_W1S(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CNF20KA) && (a<=2))
        return 0x87e027800208ll + 0x100000ll * ((a) & 0x3);
    __cavm_csr_fatal("CPRIX_MHB_ERR_INT_ENA_W1S", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_CPRIX_MHB_ERR_INT_ENA_W1S(a) cavm_cprix_mhb_err_int_ena_w1s_t
#define bustype_CAVM_CPRIX_MHB_ERR_INT_ENA_W1S(a) CSR_TYPE_NCB
#define basename_CAVM_CPRIX_MHB_ERR_INT_ENA_W1S(a) "CPRIX_MHB_ERR_INT_ENA_W1S"
#define busnum_CAVM_CPRIX_MHB_ERR_INT_ENA_W1S(a) (a)
#define arguments_CAVM_CPRIX_MHB_ERR_INT_ENA_W1S(a) (a),-1,-1,-1

/**
 * Register (NCB) cpri#_mhb_err_int_psm_msg_w0
 *
 * CPRI MHB Error Interrupt Message w0  Register
 * JCA word 0 message to send on enabled MHB interrupt for any error related
 * interrupts. This excludes interrupts due to notifications.
 */
union cavm_cprix_mhb_err_int_psm_msg_w0
{
    uint64_t u;
    struct cavm_cprix_mhb_err_int_psm_msg_w0_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t w0                    : 64; /**< [ 63:  0](R/W) Word 0 of JCA message. */
#else /* Word 0 - Little Endian */
        uint64_t w0                    : 64; /**< [ 63:  0](R/W) Word 0 of JCA message. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_cprix_mhb_err_int_psm_msg_w0_s cn; */
};
typedef union cavm_cprix_mhb_err_int_psm_msg_w0 cavm_cprix_mhb_err_int_psm_msg_w0_t;

static inline uint64_t CAVM_CPRIX_MHB_ERR_INT_PSM_MSG_W0(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_CPRIX_MHB_ERR_INT_PSM_MSG_W0(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CNF20KA) && (a<=2))
        return 0x87e027800220ll + 0x100000ll * ((a) & 0x3);
    __cavm_csr_fatal("CPRIX_MHB_ERR_INT_PSM_MSG_W0", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_CPRIX_MHB_ERR_INT_PSM_MSG_W0(a) cavm_cprix_mhb_err_int_psm_msg_w0_t
#define bustype_CAVM_CPRIX_MHB_ERR_INT_PSM_MSG_W0(a) CSR_TYPE_NCB
#define basename_CAVM_CPRIX_MHB_ERR_INT_PSM_MSG_W0(a) "CPRIX_MHB_ERR_INT_PSM_MSG_W0"
#define busnum_CAVM_CPRIX_MHB_ERR_INT_PSM_MSG_W0(a) (a)
#define arguments_CAVM_CPRIX_MHB_ERR_INT_PSM_MSG_W0(a) (a),-1,-1,-1

/**
 * Register (NCB) cpri#_mhb_err_int_psm_msg_w1
 *
 * CPRI MHB Error Interrupt Message w1 Register
 * JCA word 1 message to send on enabled MHB interrupt for any error related
 * interrupts. This excludes interrupts due to notifications.
 */
union cavm_cprix_mhb_err_int_psm_msg_w1
{
    uint64_t u;
    struct cavm_cprix_mhb_err_int_psm_msg_w1_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t w1                    : 64; /**< [ 63:  0](R/W) Word 1 of JCA message. */
#else /* Word 0 - Little Endian */
        uint64_t w1                    : 64; /**< [ 63:  0](R/W) Word 1 of JCA message. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_cprix_mhb_err_int_psm_msg_w1_s cn; */
};
typedef union cavm_cprix_mhb_err_int_psm_msg_w1 cavm_cprix_mhb_err_int_psm_msg_w1_t;

static inline uint64_t CAVM_CPRIX_MHB_ERR_INT_PSM_MSG_W1(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_CPRIX_MHB_ERR_INT_PSM_MSG_W1(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CNF20KA) && (a<=2))
        return 0x87e027800228ll + 0x100000ll * ((a) & 0x3);
    __cavm_csr_fatal("CPRIX_MHB_ERR_INT_PSM_MSG_W1", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_CPRIX_MHB_ERR_INT_PSM_MSG_W1(a) cavm_cprix_mhb_err_int_psm_msg_w1_t
#define bustype_CAVM_CPRIX_MHB_ERR_INT_PSM_MSG_W1(a) CSR_TYPE_NCB
#define basename_CAVM_CPRIX_MHB_ERR_INT_PSM_MSG_W1(a) "CPRIX_MHB_ERR_INT_PSM_MSG_W1"
#define busnum_CAVM_CPRIX_MHB_ERR_INT_PSM_MSG_W1(a) (a)
#define arguments_CAVM_CPRIX_MHB_ERR_INT_PSM_MSG_W1(a) (a),-1,-1,-1

/**
 * Register (NCB) cpri#_mhb_err_int_w1s
 *
 * CPRI MHB Interrupt Set Register
 * This register sets interrupt bits.
 */
union cavm_cprix_mhb_err_int_w1s
{
    uint64_t u;
    struct cavm_cprix_mhb_err_int_w1s_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_35_63        : 29;
        uint64_t rp3_dl_strm_msg_dis   : 1;  /**< [ 34: 34](R/W1S/H) Reads or sets CPRI(0..2)_MHB_ERR_INT[RP3_DL_STRM_MSG_DIS]. */
        uint64_t rp3_dl_buf_overflow   : 1;  /**< [ 33: 33](R/W1S/H) Reads or sets CPRI(0..2)_MHB_ERR_INT[RP3_DL_BUF_OVERFLOW]. */
        uint64_t rp3_dl_strm_pop_underflow : 1;/**< [ 32: 32](R/W1S/H) Reads or sets CPRI(0..2)_MHB_ERR_INT[RP3_DL_STRM_POP_UNDERFLOW]. */
        uint64_t reserved_31           : 1;
        uint64_t rp3_ul_axc_nenabled   : 1;  /**< [ 30: 30](R/W1S/H) Reads or sets CPRI(0..2)_MHB_ERR_INT[RP3_UL_AXC_NENABLED]. */
        uint64_t rp3_ul_axc_nfound     : 1;  /**< [ 29: 29](R/W1S/H) Reads or sets CPRI(0..2)_MHB_ERR_INT[RP3_UL_AXC_NFOUND]. */
        uint64_t reserved_28           : 1;
        uint64_t rp3_ul_fifo_ovfl      : 2;  /**< [ 27: 26](R/W1S/H) Reads or sets CPRI(0..2)_MHB_ERR_INT[RP3_UL_FIFO_OVFL]. */
        uint64_t rp3_ul_sw_msg_ovfl    : 1;  /**< [ 25: 25](R/W1S/H) Reads or sets CPRI(0..2)_MHB_ERR_INT[RP3_UL_SW_MSG_OVFL]. */
        uint64_t rp3_ul_jd_notif_ovfl  : 1;  /**< [ 24: 24](R/W1S/H) Reads or sets CPRI(0..2)_MHB_ERR_INT[RP3_UL_JD_NOTIF_OVFL]. */
        uint64_t rp3_ul_wr_drop_cntx_late : 1;/**< [ 23: 23](R/W1S/H) Reads or sets CPRI(0..2)_MHB_ERR_INT[RP3_UL_WR_DROP_CNTX_LATE]. */
        uint64_t reserved_20_22        : 3;
        uint64_t dgmii_async_fifo_full_3 : 1;/**< [ 19: 19](R/W1S/H) Reads or sets CPRI(0..2)_MHB_ERR_INT[DGMII_ASYNC_FIFO_FULL_3]. */
        uint64_t dgmii_async_fifo_full_2 : 1;/**< [ 18: 18](R/W1S/H) Reads or sets CPRI(0..2)_MHB_ERR_INT[DGMII_ASYNC_FIFO_FULL_2]. */
        uint64_t dgmii_async_fifo_full_1 : 1;/**< [ 17: 17](R/W1S/H) Reads or sets CPRI(0..2)_MHB_ERR_INT[DGMII_ASYNC_FIFO_FULL_1]. */
        uint64_t dgmii_async_fifo_full_0 : 1;/**< [ 16: 16](R/W1S/H) Reads or sets CPRI(0..2)_MHB_ERR_INT[DGMII_ASYNC_FIFO_FULL_0]. */
        uint64_t dma_dl_rp3_fifo_ovfl  : 1;  /**< [ 15: 15](R/W1S/H) Reads or sets CPRI(0..2)_MHB_ERR_INT[DMA_DL_RP3_FIFO_OVFL]. */
        uint64_t dma_dl_rp3_dma_ferr   : 1;  /**< [ 14: 14](R/W1S/H) Reads or sets CPRI(0..2)_MHB_ERR_INT[DMA_DL_RP3_DMA_FERR]. */
        uint64_t dma_dl_rp3_dma_nferr  : 1;  /**< [ 13: 13](R/W1S/H) Reads or sets CPRI(0..2)_MHB_ERR_INT[DMA_DL_RP3_DMA_NFERR]. */
        uint64_t dma_dl_pkt_ferr       : 1;  /**< [ 12: 12](R/W1S/H) Reads or sets CPRI(0..2)_MHB_ERR_INT[DMA_DL_PKT_FERR]. */
        uint64_t dma_dl_pkt_nferr      : 1;  /**< [ 11: 11](R/W1S/H) Reads or sets CPRI(0..2)_MHB_ERR_INT[DMA_DL_PKT_NFERR]. */
        uint64_t dma_ul_rp3_fifo_ovfl  : 1;  /**< [ 10: 10](R/W1S/H) Reads or sets CPRI(0..2)_MHB_ERR_INT[DMA_UL_RP3_FIFO_OVFL]. */
        uint64_t dma_ul_pkt_fifo_ovfl  : 1;  /**< [  9:  9](R/W1S/H) Reads or sets CPRI(0..2)_MHB_ERR_INT[DMA_UL_PKT_FIFO_OVFL]. */
        uint64_t dma_ul_rp3_ferr       : 1;  /**< [  8:  8](R/W1S/H) Reads or sets CPRI(0..2)_MHB_ERR_INT[DMA_UL_RP3_FERR]. */
        uint64_t dma_ul_rp3_nferr      : 1;  /**< [  7:  7](R/W1S/H) Reads or sets CPRI(0..2)_MHB_ERR_INT[DMA_UL_RP3_NFERR]. */
        uint64_t dma_ul_pkt_ferr       : 1;  /**< [  6:  6](R/W1S/H) Reads or sets CPRI(0..2)_MHB_ERR_INT[DMA_UL_PKT_FERR]. */
        uint64_t dma_ul_pkt_nferr      : 1;  /**< [  5:  5](R/W1S/H) Reads or sets CPRI(0..2)_MHB_ERR_INT[DMA_UL_PKT_NFERR]. */
        uint64_t reserved_4            : 1;
        uint64_t axi_bad_wr_response_1 : 1;  /**< [  3:  3](R/W1S/H) Reads or sets CPRI(0..2)_MHB_ERR_INT[AXI_BAD_WR_RESPONSE_1]. */
        uint64_t axi_bad_rd_response_1 : 1;  /**< [  2:  2](R/W1S/H) Reads or sets CPRI(0..2)_MHB_ERR_INT[AXI_BAD_RD_RESPONSE_1]. */
        uint64_t axi_bad_wr_response_0 : 1;  /**< [  1:  1](R/W1S/H) Reads or sets CPRI(0..2)_MHB_ERR_INT[AXI_BAD_WR_RESPONSE_0]. */
        uint64_t axi_bad_rd_response_0 : 1;  /**< [  0:  0](R/W1S/H) Reads or sets CPRI(0..2)_MHB_ERR_INT[AXI_BAD_RD_RESPONSE_0]. */
#else /* Word 0 - Little Endian */
        uint64_t axi_bad_rd_response_0 : 1;  /**< [  0:  0](R/W1S/H) Reads or sets CPRI(0..2)_MHB_ERR_INT[AXI_BAD_RD_RESPONSE_0]. */
        uint64_t axi_bad_wr_response_0 : 1;  /**< [  1:  1](R/W1S/H) Reads or sets CPRI(0..2)_MHB_ERR_INT[AXI_BAD_WR_RESPONSE_0]. */
        uint64_t axi_bad_rd_response_1 : 1;  /**< [  2:  2](R/W1S/H) Reads or sets CPRI(0..2)_MHB_ERR_INT[AXI_BAD_RD_RESPONSE_1]. */
        uint64_t axi_bad_wr_response_1 : 1;  /**< [  3:  3](R/W1S/H) Reads or sets CPRI(0..2)_MHB_ERR_INT[AXI_BAD_WR_RESPONSE_1]. */
        uint64_t reserved_4            : 1;
        uint64_t dma_ul_pkt_nferr      : 1;  /**< [  5:  5](R/W1S/H) Reads or sets CPRI(0..2)_MHB_ERR_INT[DMA_UL_PKT_NFERR]. */
        uint64_t dma_ul_pkt_ferr       : 1;  /**< [  6:  6](R/W1S/H) Reads or sets CPRI(0..2)_MHB_ERR_INT[DMA_UL_PKT_FERR]. */
        uint64_t dma_ul_rp3_nferr      : 1;  /**< [  7:  7](R/W1S/H) Reads or sets CPRI(0..2)_MHB_ERR_INT[DMA_UL_RP3_NFERR]. */
        uint64_t dma_ul_rp3_ferr       : 1;  /**< [  8:  8](R/W1S/H) Reads or sets CPRI(0..2)_MHB_ERR_INT[DMA_UL_RP3_FERR]. */
        uint64_t dma_ul_pkt_fifo_ovfl  : 1;  /**< [  9:  9](R/W1S/H) Reads or sets CPRI(0..2)_MHB_ERR_INT[DMA_UL_PKT_FIFO_OVFL]. */
        uint64_t dma_ul_rp3_fifo_ovfl  : 1;  /**< [ 10: 10](R/W1S/H) Reads or sets CPRI(0..2)_MHB_ERR_INT[DMA_UL_RP3_FIFO_OVFL]. */
        uint64_t dma_dl_pkt_nferr      : 1;  /**< [ 11: 11](R/W1S/H) Reads or sets CPRI(0..2)_MHB_ERR_INT[DMA_DL_PKT_NFERR]. */
        uint64_t dma_dl_pkt_ferr       : 1;  /**< [ 12: 12](R/W1S/H) Reads or sets CPRI(0..2)_MHB_ERR_INT[DMA_DL_PKT_FERR]. */
        uint64_t dma_dl_rp3_dma_nferr  : 1;  /**< [ 13: 13](R/W1S/H) Reads or sets CPRI(0..2)_MHB_ERR_INT[DMA_DL_RP3_DMA_NFERR]. */
        uint64_t dma_dl_rp3_dma_ferr   : 1;  /**< [ 14: 14](R/W1S/H) Reads or sets CPRI(0..2)_MHB_ERR_INT[DMA_DL_RP3_DMA_FERR]. */
        uint64_t dma_dl_rp3_fifo_ovfl  : 1;  /**< [ 15: 15](R/W1S/H) Reads or sets CPRI(0..2)_MHB_ERR_INT[DMA_DL_RP3_FIFO_OVFL]. */
        uint64_t dgmii_async_fifo_full_0 : 1;/**< [ 16: 16](R/W1S/H) Reads or sets CPRI(0..2)_MHB_ERR_INT[DGMII_ASYNC_FIFO_FULL_0]. */
        uint64_t dgmii_async_fifo_full_1 : 1;/**< [ 17: 17](R/W1S/H) Reads or sets CPRI(0..2)_MHB_ERR_INT[DGMII_ASYNC_FIFO_FULL_1]. */
        uint64_t dgmii_async_fifo_full_2 : 1;/**< [ 18: 18](R/W1S/H) Reads or sets CPRI(0..2)_MHB_ERR_INT[DGMII_ASYNC_FIFO_FULL_2]. */
        uint64_t dgmii_async_fifo_full_3 : 1;/**< [ 19: 19](R/W1S/H) Reads or sets CPRI(0..2)_MHB_ERR_INT[DGMII_ASYNC_FIFO_FULL_3]. */
        uint64_t reserved_20_22        : 3;
        uint64_t rp3_ul_wr_drop_cntx_late : 1;/**< [ 23: 23](R/W1S/H) Reads or sets CPRI(0..2)_MHB_ERR_INT[RP3_UL_WR_DROP_CNTX_LATE]. */
        uint64_t rp3_ul_jd_notif_ovfl  : 1;  /**< [ 24: 24](R/W1S/H) Reads or sets CPRI(0..2)_MHB_ERR_INT[RP3_UL_JD_NOTIF_OVFL]. */
        uint64_t rp3_ul_sw_msg_ovfl    : 1;  /**< [ 25: 25](R/W1S/H) Reads or sets CPRI(0..2)_MHB_ERR_INT[RP3_UL_SW_MSG_OVFL]. */
        uint64_t rp3_ul_fifo_ovfl      : 2;  /**< [ 27: 26](R/W1S/H) Reads or sets CPRI(0..2)_MHB_ERR_INT[RP3_UL_FIFO_OVFL]. */
        uint64_t reserved_28           : 1;
        uint64_t rp3_ul_axc_nfound     : 1;  /**< [ 29: 29](R/W1S/H) Reads or sets CPRI(0..2)_MHB_ERR_INT[RP3_UL_AXC_NFOUND]. */
        uint64_t rp3_ul_axc_nenabled   : 1;  /**< [ 30: 30](R/W1S/H) Reads or sets CPRI(0..2)_MHB_ERR_INT[RP3_UL_AXC_NENABLED]. */
        uint64_t reserved_31           : 1;
        uint64_t rp3_dl_strm_pop_underflow : 1;/**< [ 32: 32](R/W1S/H) Reads or sets CPRI(0..2)_MHB_ERR_INT[RP3_DL_STRM_POP_UNDERFLOW]. */
        uint64_t rp3_dl_buf_overflow   : 1;  /**< [ 33: 33](R/W1S/H) Reads or sets CPRI(0..2)_MHB_ERR_INT[RP3_DL_BUF_OVERFLOW]. */
        uint64_t rp3_dl_strm_msg_dis   : 1;  /**< [ 34: 34](R/W1S/H) Reads or sets CPRI(0..2)_MHB_ERR_INT[RP3_DL_STRM_MSG_DIS]. */
        uint64_t reserved_35_63        : 29;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_cprix_mhb_err_int_w1s_s cn; */
};
typedef union cavm_cprix_mhb_err_int_w1s cavm_cprix_mhb_err_int_w1s_t;

static inline uint64_t CAVM_CPRIX_MHB_ERR_INT_W1S(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_CPRIX_MHB_ERR_INT_W1S(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CNF20KA) && (a<=2))
        return 0x87e027800218ll + 0x100000ll * ((a) & 0x3);
    __cavm_csr_fatal("CPRIX_MHB_ERR_INT_W1S", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_CPRIX_MHB_ERR_INT_W1S(a) cavm_cprix_mhb_err_int_w1s_t
#define bustype_CAVM_CPRIX_MHB_ERR_INT_W1S(a) CSR_TYPE_NCB
#define basename_CAVM_CPRIX_MHB_ERR_INT_W1S(a) "CPRIX_MHB_ERR_INT_W1S"
#define busnum_CAVM_CPRIX_MHB_ERR_INT_W1S(a) (a)
#define arguments_CAVM_CPRIX_MHB_ERR_INT_W1S(a) (a),-1,-1,-1

/**
 * Register (NCB) cpri#_reset
 *
 * CPRI Reset Register
 */
union cavm_cprix_reset
{
    uint64_t u;
    struct cavm_cprix_reset_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_1_63         : 63;
        uint64_t srst                  : 1;  /**< [  0:  0](R/W) When set, it resets CPRI as well as the IPs.
                                                                 Note: This also resets all the CSRs including this bit. */
#else /* Word 0 - Little Endian */
        uint64_t srst                  : 1;  /**< [  0:  0](R/W) When set, it resets CPRI as well as the IPs.
                                                                 Note: This also resets all the CSRs including this bit. */
        uint64_t reserved_1_63         : 63;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_cprix_reset_s cn; */
};
typedef union cavm_cprix_reset cavm_cprix_reset_t;

static inline uint64_t CAVM_CPRIX_RESET(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_CPRIX_RESET(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CNF20KA) && (a<=2))
        return 0x87e027800008ll + 0x100000ll * ((a) & 0x3);
    __cavm_csr_fatal("CPRIX_RESET", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_CPRIX_RESET(a) cavm_cprix_reset_t
#define bustype_CAVM_CPRIX_RESET(a) CSR_TYPE_NCB
#define basename_CAVM_CPRIX_RESET(a) "CPRIX_RESET"
#define busnum_CAVM_CPRIX_RESET(a) (a)
#define arguments_CAVM_CPRIX_RESET(a) (a),-1,-1,-1

/**
 * Register (NCB) cpri#_rp3_dl_ctrl_cfg0
 *
 * CPRI RP3 DL Control Configuration Register
 */
union cavm_cprix_rp3_dl_ctrl_cfg0
{
    uint64_t u;
    struct cavm_cprix_rp3_dl_ctrl_cfg0_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_32_63        : 32;
        uint64_t buf_idx               : 8;  /**< [ 31: 24](R/W) AXC buffer index. Must be in the range [128:191]. Otherwise, will result in unpredictable behavior. */
        uint64_t reserved_9_23         : 15;
        uint64_t dest_cpri_ip          : 1;  /**< [  8:  8](R/W) Indicates to send the RP3 messages for a given AXC to the CPRI IP 0 or 1. */
        uint64_t reserved_1_7          : 7;
        uint64_t buf_enable            : 1;  /**< [  0:  0](R/W) Enable buffering the DL RP3 messages to send to CPRI MAC. */
#else /* Word 0 - Little Endian */
        uint64_t buf_enable            : 1;  /**< [  0:  0](R/W) Enable buffering the DL RP3 messages to send to CPRI MAC. */
        uint64_t reserved_1_7          : 7;
        uint64_t dest_cpri_ip          : 1;  /**< [  8:  8](R/W) Indicates to send the RP3 messages for a given AXC to the CPRI IP 0 or 1. */
        uint64_t reserved_9_23         : 15;
        uint64_t buf_idx               : 8;  /**< [ 31: 24](R/W) AXC buffer index. Must be in the range [128:191]. Otherwise, will result in unpredictable behavior. */
        uint64_t reserved_32_63        : 32;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_cprix_rp3_dl_ctrl_cfg0_s cn; */
};
typedef union cavm_cprix_rp3_dl_ctrl_cfg0 cavm_cprix_rp3_dl_ctrl_cfg0_t;

static inline uint64_t CAVM_CPRIX_RP3_DL_CTRL_CFG0(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_CPRIX_RP3_DL_CTRL_CFG0(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CNF20KA) && (a<=2))
        return 0x87e027810080ll + 0x100000ll * ((a) & 0x3);
    __cavm_csr_fatal("CPRIX_RP3_DL_CTRL_CFG0", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_CPRIX_RP3_DL_CTRL_CFG0(a) cavm_cprix_rp3_dl_ctrl_cfg0_t
#define bustype_CAVM_CPRIX_RP3_DL_CTRL_CFG0(a) CSR_TYPE_NCB
#define basename_CAVM_CPRIX_RP3_DL_CTRL_CFG0(a) "CPRIX_RP3_DL_CTRL_CFG0"
#define busnum_CAVM_CPRIX_RP3_DL_CTRL_CFG0(a) (a)
#define arguments_CAVM_CPRIX_RP3_DL_CTRL_CFG0(a) (a),-1,-1,-1

/**
 * Register (NCB) cpri#_rp3_dl_ctrl_data0
 *
 * CPRI RP3 DL Control Data0 Register
 */
union cavm_cprix_rp3_dl_ctrl_data0
{
    uint64_t u;
    struct cavm_cprix_rp3_dl_ctrl_data0_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t data                  : 64; /**< [ 63:  0](R/W) RP3 DL CSR Control Message Data[63:0]. */
#else /* Word 0 - Little Endian */
        uint64_t data                  : 64; /**< [ 63:  0](R/W) RP3 DL CSR Control Message Data[63:0]. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_cprix_rp3_dl_ctrl_data0_s cn; */
};
typedef union cavm_cprix_rp3_dl_ctrl_data0 cavm_cprix_rp3_dl_ctrl_data0_t;

static inline uint64_t CAVM_CPRIX_RP3_DL_CTRL_DATA0(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_CPRIX_RP3_DL_CTRL_DATA0(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CNF20KA) && (a<=2))
        return 0x87e027810088ll + 0x100000ll * ((a) & 0x3);
    __cavm_csr_fatal("CPRIX_RP3_DL_CTRL_DATA0", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_CPRIX_RP3_DL_CTRL_DATA0(a) cavm_cprix_rp3_dl_ctrl_data0_t
#define bustype_CAVM_CPRIX_RP3_DL_CTRL_DATA0(a) CSR_TYPE_NCB
#define basename_CAVM_CPRIX_RP3_DL_CTRL_DATA0(a) "CPRIX_RP3_DL_CTRL_DATA0"
#define busnum_CAVM_CPRIX_RP3_DL_CTRL_DATA0(a) (a)
#define arguments_CAVM_CPRIX_RP3_DL_CTRL_DATA0(a) (a),-1,-1,-1

/**
 * Register (NCB) cpri#_rp3_dl_ctrl_data1
 *
 * CPRI RP3 DL Control Data1 Register
 */
union cavm_cprix_rp3_dl_ctrl_data1
{
    uint64_t u;
    struct cavm_cprix_rp3_dl_ctrl_data1_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t data                  : 64; /**< [ 63:  0](R/W) RP3 DL CSR Control Message Data[127:64]. */
#else /* Word 0 - Little Endian */
        uint64_t data                  : 64; /**< [ 63:  0](R/W) RP3 DL CSR Control Message Data[127:64]. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_cprix_rp3_dl_ctrl_data1_s cn; */
};
typedef union cavm_cprix_rp3_dl_ctrl_data1 cavm_cprix_rp3_dl_ctrl_data1_t;

static inline uint64_t CAVM_CPRIX_RP3_DL_CTRL_DATA1(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_CPRIX_RP3_DL_CTRL_DATA1(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CNF20KA) && (a<=2))
        return 0x87e027810090ll + 0x100000ll * ((a) & 0x3);
    __cavm_csr_fatal("CPRIX_RP3_DL_CTRL_DATA1", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_CPRIX_RP3_DL_CTRL_DATA1(a) cavm_cprix_rp3_dl_ctrl_data1_t
#define bustype_CAVM_CPRIX_RP3_DL_CTRL_DATA1(a) CSR_TYPE_NCB
#define basename_CAVM_CPRIX_RP3_DL_CTRL_DATA1(a) "CPRIX_RP3_DL_CTRL_DATA1"
#define busnum_CAVM_CPRIX_RP3_DL_CTRL_DATA1(a) (a)
#define arguments_CAVM_CPRIX_RP3_DL_CTRL_DATA1(a) (a),-1,-1,-1

/**
 * Register (NCB) cpri#_rp3_dl_ctrl_data2
 *
 * CPRI RP3 DL Control Data2 Register
 */
union cavm_cprix_rp3_dl_ctrl_data2
{
    uint64_t u;
    struct cavm_cprix_rp3_dl_ctrl_data2_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_24_63        : 40;
        uint64_t data                  : 24; /**< [ 23:  0](R/W) RP3 DL CSR Control Message Data[151:128]. */
#else /* Word 0 - Little Endian */
        uint64_t data                  : 24; /**< [ 23:  0](R/W) RP3 DL CSR Control Message Data[151:128]. */
        uint64_t reserved_24_63        : 40;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_cprix_rp3_dl_ctrl_data2_s cn; */
};
typedef union cavm_cprix_rp3_dl_ctrl_data2 cavm_cprix_rp3_dl_ctrl_data2_t;

static inline uint64_t CAVM_CPRIX_RP3_DL_CTRL_DATA2(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_CPRIX_RP3_DL_CTRL_DATA2(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CNF20KA) && (a<=2))
        return 0x87e027810098ll + 0x100000ll * ((a) & 0x3);
    __cavm_csr_fatal("CPRIX_RP3_DL_CTRL_DATA2", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_CPRIX_RP3_DL_CTRL_DATA2(a) cavm_cprix_rp3_dl_ctrl_data2_t
#define bustype_CAVM_CPRIX_RP3_DL_CTRL_DATA2(a) CSR_TYPE_NCB
#define basename_CAVM_CPRIX_RP3_DL_CTRL_DATA2(a) "CPRIX_RP3_DL_CTRL_DATA2"
#define busnum_CAVM_CPRIX_RP3_DL_CTRL_DATA2(a) (a)
#define arguments_CAVM_CPRIX_RP3_DL_CTRL_DATA2(a) (a),-1,-1,-1

/**
 * Register (NCB) cpri#_rp3_dl_err_status
 *
 * CPRI RP3 DL Error Status Register
 */
union cavm_cprix_rp3_dl_err_status
{
    uint64_t u;
    struct cavm_cprix_rp3_dl_err_status_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_10_63        : 54;
        uint64_t sw_en                 : 1;  /**< [  9:  9](RO/H) RP3 DL Message Source. Set if message received from Switch. */
        uint64_t ip_id                 : 1;  /**< [  8:  8](RO/H) RP3 DL IP ID. */
        uint64_t strm_idx              : 8;  /**< [  7:  0](RO/H) RP3 DL Stream ID. */
#else /* Word 0 - Little Endian */
        uint64_t strm_idx              : 8;  /**< [  7:  0](RO/H) RP3 DL Stream ID. */
        uint64_t ip_id                 : 1;  /**< [  8:  8](RO/H) RP3 DL IP ID. */
        uint64_t sw_en                 : 1;  /**< [  9:  9](RO/H) RP3 DL Message Source. Set if message received from Switch. */
        uint64_t reserved_10_63        : 54;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_cprix_rp3_dl_err_status_s cn; */
};
typedef union cavm_cprix_rp3_dl_err_status cavm_cprix_rp3_dl_err_status_t;

static inline uint64_t CAVM_CPRIX_RP3_DL_ERR_STATUS(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_CPRIX_RP3_DL_ERR_STATUS(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CNF20KA) && (a<=2))
        return 0x87e0278100a8ll + 0x100000ll * ((a) & 0x3);
    __cavm_csr_fatal("CPRIX_RP3_DL_ERR_STATUS", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_CPRIX_RP3_DL_ERR_STATUS(a) cavm_cprix_rp3_dl_err_status_t
#define bustype_CAVM_CPRIX_RP3_DL_ERR_STATUS(a) CSR_TYPE_NCB
#define basename_CAVM_CPRIX_RP3_DL_ERR_STATUS(a) "CPRIX_RP3_DL_ERR_STATUS"
#define busnum_CAVM_CPRIX_RP3_DL_ERR_STATUS(a) (a)
#define arguments_CAVM_CPRIX_RP3_DL_ERR_STATUS(a) (a),-1,-1,-1

/**
 * Register (NCB) cpri#_rp3_dl_ip#_axc_cfg0#
 *
 * CPRI RP3 DL AXC Configuration Registers
 * RP3 Downlink AxC Configuration 0 registers for CPRI MACs 0 and 1.
 */
union cavm_cprix_rp3_dl_ipx_axc_cfg0x
{
    uint64_t u;
    struct cavm_cprix_rp3_dl_ipx_axc_cfg0x_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_58_63        : 6;
        uint64_t ts_store              : 6;  /**< [ 57: 52](RO/H) Stored timestamp value to be used.in next message if needed. */
        uint64_t reserved_49_51        : 3;
        uint64_t repl_type             : 5;  /**< [ 48: 44](R/W) Replacement RP3 message type field. */
        uint64_t reserved_41_43        : 3;
        uint64_t repl_addr             : 13; /**< [ 40: 28](R/W) Replacement RP3 message address field. */
        uint64_t reserved_11_27        : 17;
        uint64_t rp3_iq_data_swap      : 1;  /**< [ 10: 10](R/W) Swap the RP3 message IQ data. Enable to convert from SMEM to IP IQ data format. */
        uint64_t rp3_mode              : 2;  /**< [  9:  8](R/W) Specifies RP3 Mode for Stream.
                                                                 0x0 = Control or GSM Message type with no DMA and no header address replacement.
                                                                 0x1 = Reserved.
                                                                 0x2 = GSM/Other Data Message or control message type with no DMA but
                                                                 requiring Header Address Replacement.
                                                                 0x3 = LTE data, 5G data or other data message type requiring DMA and header generation. */
        uint64_t data_swap             : 3;  /**< [  7:  5](R/W) Reserved. */
        uint64_t dest_mem              : 1;  /**< [  4:  4](R/W) Destination memory:
                                                                 0 = SMEM.
                                                                 1 = Reserved. */
        uint64_t cmd_type              : 2;  /**< [  3:  2](R/W) Read DMA command type. */
        uint64_t reserved_1            : 1;
        uint64_t buf_enable            : 1;  /**< [  0:  0](R/W) Enable reading the DL RP3 messages to memory. */
#else /* Word 0 - Little Endian */
        uint64_t buf_enable            : 1;  /**< [  0:  0](R/W) Enable reading the DL RP3 messages to memory. */
        uint64_t reserved_1            : 1;
        uint64_t cmd_type              : 2;  /**< [  3:  2](R/W) Read DMA command type. */
        uint64_t dest_mem              : 1;  /**< [  4:  4](R/W) Destination memory:
                                                                 0 = SMEM.
                                                                 1 = Reserved. */
        uint64_t data_swap             : 3;  /**< [  7:  5](R/W) Reserved. */
        uint64_t rp3_mode              : 2;  /**< [  9:  8](R/W) Specifies RP3 Mode for Stream.
                                                                 0x0 = Control or GSM Message type with no DMA and no header address replacement.
                                                                 0x1 = Reserved.
                                                                 0x2 = GSM/Other Data Message or control message type with no DMA but
                                                                 requiring Header Address Replacement.
                                                                 0x3 = LTE data, 5G data or other data message type requiring DMA and header generation. */
        uint64_t rp3_iq_data_swap      : 1;  /**< [ 10: 10](R/W) Swap the RP3 message IQ data. Enable to convert from SMEM to IP IQ data format. */
        uint64_t reserved_11_27        : 17;
        uint64_t repl_addr             : 13; /**< [ 40: 28](R/W) Replacement RP3 message address field. */
        uint64_t reserved_41_43        : 3;
        uint64_t repl_type             : 5;  /**< [ 48: 44](R/W) Replacement RP3 message type field. */
        uint64_t reserved_49_51        : 3;
        uint64_t ts_store              : 6;  /**< [ 57: 52](RO/H) Stored timestamp value to be used.in next message if needed. */
        uint64_t reserved_58_63        : 6;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_cprix_rp3_dl_ipx_axc_cfg0x_s cn; */
};
typedef union cavm_cprix_rp3_dl_ipx_axc_cfg0x cavm_cprix_rp3_dl_ipx_axc_cfg0x_t;

static inline uint64_t CAVM_CPRIX_RP3_DL_IPX_AXC_CFG0X(uint64_t a, uint64_t b, uint64_t c) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_CPRIX_RP3_DL_IPX_AXC_CFG0X(uint64_t a, uint64_t b, uint64_t c)
{
    if (cavm_is_model(OCTEONTX_CNF20KA) && ((a<=2) && (b<=1) && (c<=127)))
        return 0x87e027810040ll + 0x100000ll * ((a) & 0x3) + 0x8000ll * ((b) & 0x1) + 0x100ll * ((c) & 0x7f);
    __cavm_csr_fatal("CPRIX_RP3_DL_IPX_AXC_CFG0X", 3, a, b, c, 0, 0, 0);
}

#define typedef_CAVM_CPRIX_RP3_DL_IPX_AXC_CFG0X(a,b,c) cavm_cprix_rp3_dl_ipx_axc_cfg0x_t
#define bustype_CAVM_CPRIX_RP3_DL_IPX_AXC_CFG0X(a,b,c) CSR_TYPE_NCB
#define basename_CAVM_CPRIX_RP3_DL_IPX_AXC_CFG0X(a,b,c) "CPRIX_RP3_DL_IPX_AXC_CFG0X"
#define busnum_CAVM_CPRIX_RP3_DL_IPX_AXC_CFG0X(a,b,c) (a)
#define arguments_CAVM_CPRIX_RP3_DL_IPX_AXC_CFG0X(a,b,c) (a),(b),(c),-1

/**
 * Register (NCB) cpri#_rp3_dl_ip#_axc_cfg1#
 *
 * CPRI RP3 DL AXC Configuration Register
 * RP3 Downlink AxC Configuration Register1 For CPRI MACs 0 and 1.
 */
union cavm_cprix_rp3_dl_ipx_axc_cfg1x
{
    uint64_t u;
    struct cavm_cprix_rp3_dl_ipx_axc_cfg1x_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_61_63        : 3;
        uint64_t flush_done            : 1;  /**< [ 60: 60](RO/H) AxC Reset Flush Done. Software needs to wait until this field is set before re-enabling AxC. */
        uint64_t fifo_cred             : 4;  /**< [ 59: 56](RO/H) AXC FIFO credits available to CPRI MAC. */
        uint64_t bcn_n1_st             : 4;  /**< [ 55: 52](R/W) BCN_N1 Start Time. Contains [BCN_ST]\<27:24\> to match against the BCN\<27:24\> value. */
        uint64_t fifo_count            : 4;  /**< [ 51: 48](RO/H) AXC FIFO Count. */
        uint64_t buf_rptr_offset       : 16; /**< [ 47: 32](R/W) AXC buffer read pointer offset in the buffer indicated by [BUF_IDX]. Must
                                                                 be even (32-byte aligned). */
        uint64_t buf_idx               : 8;  /**< [ 31: 24](R/W) AXC buffer index. */
        uint64_t bcn_st                : 24; /**< [ 23:  0](R/W) BCN start time to fetch the first AXC sample from memory. */
#else /* Word 0 - Little Endian */
        uint64_t bcn_st                : 24; /**< [ 23:  0](R/W) BCN start time to fetch the first AXC sample from memory. */
        uint64_t buf_idx               : 8;  /**< [ 31: 24](R/W) AXC buffer index. */
        uint64_t buf_rptr_offset       : 16; /**< [ 47: 32](R/W) AXC buffer read pointer offset in the buffer indicated by [BUF_IDX]. Must
                                                                 be even (32-byte aligned). */
        uint64_t fifo_count            : 4;  /**< [ 51: 48](RO/H) AXC FIFO Count. */
        uint64_t bcn_n1_st             : 4;  /**< [ 55: 52](R/W) BCN_N1 Start Time. Contains [BCN_ST]\<27:24\> to match against the BCN\<27:24\> value. */
        uint64_t fifo_cred             : 4;  /**< [ 59: 56](RO/H) AXC FIFO credits available to CPRI MAC. */
        uint64_t flush_done            : 1;  /**< [ 60: 60](RO/H) AxC Reset Flush Done. Software needs to wait until this field is set before re-enabling AxC. */
        uint64_t reserved_61_63        : 3;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_cprix_rp3_dl_ipx_axc_cfg1x_s cn; */
};
typedef union cavm_cprix_rp3_dl_ipx_axc_cfg1x cavm_cprix_rp3_dl_ipx_axc_cfg1x_t;

static inline uint64_t CAVM_CPRIX_RP3_DL_IPX_AXC_CFG1X(uint64_t a, uint64_t b, uint64_t c) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_CPRIX_RP3_DL_IPX_AXC_CFG1X(uint64_t a, uint64_t b, uint64_t c)
{
    if (cavm_is_model(OCTEONTX_CNF20KA) && ((a<=2) && (b<=1) && (c<=127)))
        return 0x87e027810048ll + 0x100000ll * ((a) & 0x3) + 0x8000ll * ((b) & 0x1) + 0x100ll * ((c) & 0x7f);
    __cavm_csr_fatal("CPRIX_RP3_DL_IPX_AXC_CFG1X", 3, a, b, c, 0, 0, 0);
}

#define typedef_CAVM_CPRIX_RP3_DL_IPX_AXC_CFG1X(a,b,c) cavm_cprix_rp3_dl_ipx_axc_cfg1x_t
#define bustype_CAVM_CPRIX_RP3_DL_IPX_AXC_CFG1X(a,b,c) CSR_TYPE_NCB
#define basename_CAVM_CPRIX_RP3_DL_IPX_AXC_CFG1X(a,b,c) "CPRIX_RP3_DL_IPX_AXC_CFG1X"
#define busnum_CAVM_CPRIX_RP3_DL_IPX_AXC_CFG1X(a,b,c) (a)
#define arguments_CAVM_CPRIX_RP3_DL_IPX_AXC_CFG1X(a,b,c) (a),(b),(c),-1

/**
 * Register (NCB) cpri#_rp3_dl_ip#_axc_cfg2#
 *
 * CPRI RP3 DL AXC Configuration Register 2
 * RP3 Downlink AxC Configuration Register2 For CPRI MACs 0 and 1.
 */
union cavm_cprix_rp3_dl_ipx_axc_cfg2x
{
    uint64_t u;
    struct cavm_cprix_rp3_dl_ipx_axc_cfg2x_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_61_63        : 3;
        uint64_t num_msg               : 1;  /**< [ 60: 60](R/W) Selects number of RP3 messges fetched from SMEM before skipping for 5G NR.
                                                                    0 =  2 RP3 messages are fetched. This AxC is 20 MHz carrier.
                                                                    1 =  1 RP3 message is fetched. This AxC is 10 MHz carrier.
                                                                  NOTE: This should be set only when SKIP_COUNT is non-zero. */
        uint64_t reserved_57_59        : 3;
        uint64_t skip_count            : 5;  /**< [ 56: 52](R/W) "Skip count in DMA address generation to support multiple AxCs per buffer for 5G.
                                                                 When [NUM_MSG] = 0, Skip Count = (AxC# - 1) x 2 where AxC# is the number of
                                                                 LTE20 AxCs paired together to realize NR.
                                                                                     The DL DMA request buffer address will increment by
                                                                 [SKIP_COUNT] + 1 16B slots after reading from 2 successive buffer slots.
                                                                 When [NUM_MSG] = 1, Skip Count = (AxC# - 1) x 1 where AxC# is the number of
                                                                 LTE10 AxCs paired together to realize NR.
                                                                                     The DL DMA request buffer address will increment by
                                                                 [SKIP_COUNT] + 1 16B slots after reading from each buffer slot.

                                                                 For example, if there are four LTE20 AxCs assigned to an NR buffer in SMEM,
                                                                 [SKIP_COUNT] = (4 - 1) x 2 = 6.
                                                                 -   Buffer entries 0,1 are assigned to AxC0
                                                                 -   Buffer entries 2,3 are assigned to AxC1
                                                                 -   Buffer entries 4,5 are assigned to AxC2
                                                                 -   Buffer entries 6,7 are assigned to AxC3
                                                                 -   Buffer entries 8,9 are assigned to AxC0
                                                                 -   Buffer entries 10,11 are assigned to AxC1
                                                                 -   Buffer entries 12,13 are assigned to AxC2
                                                                 -   Buffer entries 14,15 are assigned to AxC3
                                                                 This sequence repeats. To make sure, when the buffer wraps around, that the
                                                                 first buffer is again assigned to AxC0, we need [BUF_SIZE] in this example to be
                                                                 a multiple of 8, i.e. a multiple of [SKIP_COUNT] + 2.

                                                                 Another example, if there are three LTE10 AxCs assigned to an NR buffer in SMEM,
                                                                 [SKIP_COUNT] = (3 - 1 ) x 1 = 2.
                                                                 -   Buffer entries 0 are assigned to AxC0
                                                                 -   Buffer entries 1 are assigned to AxC1
                                                                 -   Buffer entries 2 are assigned to AxC2
                                                                 -   Buffer entries 3 are assigned to AxC0
                                                                 -   Buffer entries 4 are assigned to AxC1
                                                                 -   Buffer entries 5 are assigned to AxC2
                                                                 This sequence repeats. To make sure, when the buffer wraps around, that the
                                                                 first buffer is again assigned to AxC0, we need [BUF_SIZE] in this example to be
                                                                 a multiple of 3, i.e. a multiple of [SKIP_COUNT] + 1." */
        uint64_t reserved_48_51        : 4;
        uint64_t buf_size              : 16; /**< [ 47: 32](R/W) Buffer Size of the memory buffer assigned to the stream. Number of 16B lines.
                                                                 NOTE: This field must have an even number (i.e. buffer is 32B aligned) when
                                                                 [NUM_MSG] = 0.
                                                                 If [SKIP_COUNT] is not zero and [NUM_MSG] = 0, it should be a multiple of ([SKIP_COUNT] + 2)
                                                                 If [SKIP_COUNT] is not zero and [NUM_MSG] = 1, it should be a multiple of ([SKIP_COUNT] + 1)
                                                                 [BUF_SIZE] must be a minimum of 8 flits. */
        uint64_t reserved_22_31        : 10;
        uint64_t buf_addr_base         : 22; /**< [ 21:  0](R/W) Base Address of the AxC Circular Buffer in SMEM in 16B units. */
#else /* Word 0 - Little Endian */
        uint64_t buf_addr_base         : 22; /**< [ 21:  0](R/W) Base Address of the AxC Circular Buffer in SMEM in 16B units. */
        uint64_t reserved_22_31        : 10;
        uint64_t buf_size              : 16; /**< [ 47: 32](R/W) Buffer Size of the memory buffer assigned to the stream. Number of 16B lines.
                                                                 NOTE: This field must have an even number (i.e. buffer is 32B aligned) when
                                                                 [NUM_MSG] = 0.
                                                                 If [SKIP_COUNT] is not zero and [NUM_MSG] = 0, it should be a multiple of ([SKIP_COUNT] + 2)
                                                                 If [SKIP_COUNT] is not zero and [NUM_MSG] = 1, it should be a multiple of ([SKIP_COUNT] + 1)
                                                                 [BUF_SIZE] must be a minimum of 8 flits. */
        uint64_t reserved_48_51        : 4;
        uint64_t skip_count            : 5;  /**< [ 56: 52](R/W) "Skip count in DMA address generation to support multiple AxCs per buffer for 5G.
                                                                 When [NUM_MSG] = 0, Skip Count = (AxC# - 1) x 2 where AxC# is the number of
                                                                 LTE20 AxCs paired together to realize NR.
                                                                                     The DL DMA request buffer address will increment by
                                                                 [SKIP_COUNT] + 1 16B slots after reading from 2 successive buffer slots.
                                                                 When [NUM_MSG] = 1, Skip Count = (AxC# - 1) x 1 where AxC# is the number of
                                                                 LTE10 AxCs paired together to realize NR.
                                                                                     The DL DMA request buffer address will increment by
                                                                 [SKIP_COUNT] + 1 16B slots after reading from each buffer slot.

                                                                 For example, if there are four LTE20 AxCs assigned to an NR buffer in SMEM,
                                                                 [SKIP_COUNT] = (4 - 1) x 2 = 6.
                                                                 -   Buffer entries 0,1 are assigned to AxC0
                                                                 -   Buffer entries 2,3 are assigned to AxC1
                                                                 -   Buffer entries 4,5 are assigned to AxC2
                                                                 -   Buffer entries 6,7 are assigned to AxC3
                                                                 -   Buffer entries 8,9 are assigned to AxC0
                                                                 -   Buffer entries 10,11 are assigned to AxC1
                                                                 -   Buffer entries 12,13 are assigned to AxC2
                                                                 -   Buffer entries 14,15 are assigned to AxC3
                                                                 This sequence repeats. To make sure, when the buffer wraps around, that the
                                                                 first buffer is again assigned to AxC0, we need [BUF_SIZE] in this example to be
                                                                 a multiple of 8, i.e. a multiple of [SKIP_COUNT] + 2.

                                                                 Another example, if there are three LTE10 AxCs assigned to an NR buffer in SMEM,
                                                                 [SKIP_COUNT] = (3 - 1 ) x 1 = 2.
                                                                 -   Buffer entries 0 are assigned to AxC0
                                                                 -   Buffer entries 1 are assigned to AxC1
                                                                 -   Buffer entries 2 are assigned to AxC2
                                                                 -   Buffer entries 3 are assigned to AxC0
                                                                 -   Buffer entries 4 are assigned to AxC1
                                                                 -   Buffer entries 5 are assigned to AxC2
                                                                 This sequence repeats. To make sure, when the buffer wraps around, that the
                                                                 first buffer is again assigned to AxC0, we need [BUF_SIZE] in this example to be
                                                                 a multiple of 3, i.e. a multiple of [SKIP_COUNT] + 1." */
        uint64_t reserved_57_59        : 3;
        uint64_t num_msg               : 1;  /**< [ 60: 60](R/W) Selects number of RP3 messges fetched from SMEM before skipping for 5G NR.
                                                                    0 =  2 RP3 messages are fetched. This AxC is 20 MHz carrier.
                                                                    1 =  1 RP3 message is fetched. This AxC is 10 MHz carrier.
                                                                  NOTE: This should be set only when SKIP_COUNT is non-zero. */
        uint64_t reserved_61_63        : 3;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_cprix_rp3_dl_ipx_axc_cfg2x_s cn; */
};
typedef union cavm_cprix_rp3_dl_ipx_axc_cfg2x cavm_cprix_rp3_dl_ipx_axc_cfg2x_t;

static inline uint64_t CAVM_CPRIX_RP3_DL_IPX_AXC_CFG2X(uint64_t a, uint64_t b, uint64_t c) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_CPRIX_RP3_DL_IPX_AXC_CFG2X(uint64_t a, uint64_t b, uint64_t c)
{
    if (cavm_is_model(OCTEONTX_CNF20KA) && ((a<=2) && (b<=1) && (c<=127)))
        return 0x87e0278100b0ll + 0x100000ll * ((a) & 0x3) + 0x8000ll * ((b) & 0x1) + 0x100ll * ((c) & 0x7f);
    __cavm_csr_fatal("CPRIX_RP3_DL_IPX_AXC_CFG2X", 3, a, b, c, 0, 0, 0);
}

#define typedef_CAVM_CPRIX_RP3_DL_IPX_AXC_CFG2X(a,b,c) cavm_cprix_rp3_dl_ipx_axc_cfg2x_t
#define bustype_CAVM_CPRIX_RP3_DL_IPX_AXC_CFG2X(a,b,c) CSR_TYPE_NCB
#define basename_CAVM_CPRIX_RP3_DL_IPX_AXC_CFG2X(a,b,c) "CPRIX_RP3_DL_IPX_AXC_CFG2X"
#define busnum_CAVM_CPRIX_RP3_DL_IPX_AXC_CFG2X(a,b,c) (a)
#define arguments_CAVM_CPRIX_RP3_DL_IPX_AXC_CFG2X(a,b,c) (a),(b),(c),-1

/**
 * Register (NCB) cpri#_rp3_dl_ip#_ctrl_cfg1#
 *
 * CPRI RP3 DL AXC Configuration Register
 * RP3 Downlink Control AxC Configuration Register1 for CPRI MACs 0 and 1.
 */
union cavm_cprix_rp3_dl_ipx_ctrl_cfg1x
{
    uint64_t u;
    struct cavm_cprix_rp3_dl_ipx_ctrl_cfg1x_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_60_63        : 4;
        uint64_t fifo_cred             : 4;  /**< [ 59: 56](RO/H) CTRL Stream FIFO Credits to CPRI MAC. */
        uint64_t reserved_52_55        : 4;
        uint64_t fifo_count            : 4;  /**< [ 51: 48](RO/H) CTRL Stream FIFO Count. */
        uint64_t reserved_41_47        : 7;
        uint64_t repl_addr             : 13; /**< [ 40: 28](R/W) Replacement RP3 message address field. */
        uint64_t reserved_10_27        : 18;
        uint64_t rp3_mode              : 2;  /**< [  9:  8](R/W) Specifies RP3 Mode for Stream.
                                                                 0x0 Control Message type with no DMA and no header address replacement
                                                                 0x1 Reserved
                                                                 0x2 GSM data or other Data Message or control message type with no DMA but
                                                                 requiring Header Address Replacement.
                                                                 0x3 LTE data, 5G data or other data message type requiring DMA and header
                                                                 generation. Not supported for CPRI()_RP3_DL_IP()_CTRL_CFG1(). */
        uint64_t reserved_1_7          : 7;
        uint64_t buf_enable            : 1;  /**< [  0:  0](R/W) Enable the IP StreamID. */
#else /* Word 0 - Little Endian */
        uint64_t buf_enable            : 1;  /**< [  0:  0](R/W) Enable the IP StreamID. */
        uint64_t reserved_1_7          : 7;
        uint64_t rp3_mode              : 2;  /**< [  9:  8](R/W) Specifies RP3 Mode for Stream.
                                                                 0x0 Control Message type with no DMA and no header address replacement
                                                                 0x1 Reserved
                                                                 0x2 GSM data or other Data Message or control message type with no DMA but
                                                                 requiring Header Address Replacement.
                                                                 0x3 LTE data, 5G data or other data message type requiring DMA and header
                                                                 generation. Not supported for CPRI()_RP3_DL_IP()_CTRL_CFG1(). */
        uint64_t reserved_10_27        : 18;
        uint64_t repl_addr             : 13; /**< [ 40: 28](R/W) Replacement RP3 message address field. */
        uint64_t reserved_41_47        : 7;
        uint64_t fifo_count            : 4;  /**< [ 51: 48](RO/H) CTRL Stream FIFO Count. */
        uint64_t reserved_52_55        : 4;
        uint64_t fifo_cred             : 4;  /**< [ 59: 56](RO/H) CTRL Stream FIFO Credits to CPRI MAC. */
        uint64_t reserved_60_63        : 4;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_cprix_rp3_dl_ipx_ctrl_cfg1x_s cn; */
};
typedef union cavm_cprix_rp3_dl_ipx_ctrl_cfg1x cavm_cprix_rp3_dl_ipx_ctrl_cfg1x_t;

static inline uint64_t CAVM_CPRIX_RP3_DL_IPX_CTRL_CFG1X(uint64_t a, uint64_t b, uint64_t c) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_CPRIX_RP3_DL_IPX_CTRL_CFG1X(uint64_t a, uint64_t b, uint64_t c)
{
    if (cavm_is_model(OCTEONTX_CNF20KA) && ((a<=2) && (b<=1) && (c<=63)))
        return 0x87e0278100c0ll + 0x100000ll * ((a) & 0x3) + 0x8000ll * ((b) & 0x1) + 0x100ll * ((c) & 0x3f);
    __cavm_csr_fatal("CPRIX_RP3_DL_IPX_CTRL_CFG1X", 3, a, b, c, 0, 0, 0);
}

#define typedef_CAVM_CPRIX_RP3_DL_IPX_CTRL_CFG1X(a,b,c) cavm_cprix_rp3_dl_ipx_ctrl_cfg1x_t
#define bustype_CAVM_CPRIX_RP3_DL_IPX_CTRL_CFG1X(a,b,c) CSR_TYPE_NCB
#define basename_CAVM_CPRIX_RP3_DL_IPX_CTRL_CFG1X(a,b,c) "CPRIX_RP3_DL_IPX_CTRL_CFG1X"
#define busnum_CAVM_CPRIX_RP3_DL_IPX_CTRL_CFG1X(a,b,c) (a)
#define arguments_CAVM_CPRIX_RP3_DL_IPX_CTRL_CFG1X(a,b,c) (a),(b),(c),-1

/**
 * Register (NCB) cpri#_rp3_dl_ip#_strm_intr#
 *
 * CPRI RP3 DL Stream Interrupt Flag Register
 * RP3 Downlink Stream Interrupt Flag Registers for CPRI MACs 0 and 1.
 */
union cavm_cprix_rp3_dl_ipx_strm_intrx
{
    uint64_t u;
    struct cavm_cprix_rp3_dl_ipx_strm_intrx_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t bitmap                : 64; /**< [ 63:  0](R/W1C/H) Stream Interrupt Bitmap. Each bit corresponds to Stream for which interrupt has
                                                                 been signaled. STRM_INTR(0) has streams in the range 0 to 63. STRM_INTR(1) has
                                                                 streams in the range 64 to 127. STRM_INTR(2) has streams in the range 128 to
                                                                 191. */
#else /* Word 0 - Little Endian */
        uint64_t bitmap                : 64; /**< [ 63:  0](R/W1C/H) Stream Interrupt Bitmap. Each bit corresponds to Stream for which interrupt has
                                                                 been signaled. STRM_INTR(0) has streams in the range 0 to 63. STRM_INTR(1) has
                                                                 streams in the range 64 to 127. STRM_INTR(2) has streams in the range 128 to
                                                                 191. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_cprix_rp3_dl_ipx_strm_intrx_s cn; */
};
typedef union cavm_cprix_rp3_dl_ipx_strm_intrx cavm_cprix_rp3_dl_ipx_strm_intrx_t;

static inline uint64_t CAVM_CPRIX_RP3_DL_IPX_STRM_INTRX(uint64_t a, uint64_t b, uint64_t c) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_CPRIX_RP3_DL_IPX_STRM_INTRX(uint64_t a, uint64_t b, uint64_t c)
{
    if (cavm_is_model(OCTEONTX_CNF20KA) && ((a<=2) && (b<=1) && (c<=2)))
        return 0x87e027820040ll + 0x100000ll * ((a) & 0x3) + 0x8000ll * ((b) & 0x1) + 0x100ll * ((c) & 0x3);
    __cavm_csr_fatal("CPRIX_RP3_DL_IPX_STRM_INTRX", 3, a, b, c, 0, 0, 0);
}

#define typedef_CAVM_CPRIX_RP3_DL_IPX_STRM_INTRX(a,b,c) cavm_cprix_rp3_dl_ipx_strm_intrx_t
#define bustype_CAVM_CPRIX_RP3_DL_IPX_STRM_INTRX(a,b,c) CSR_TYPE_NCB
#define basename_CAVM_CPRIX_RP3_DL_IPX_STRM_INTRX(a,b,c) "CPRIX_RP3_DL_IPX_STRM_INTRX"
#define busnum_CAVM_CPRIX_RP3_DL_IPX_STRM_INTRX(a,b,c) (a)
#define arguments_CAVM_CPRIX_RP3_DL_IPX_STRM_INTRX(a,b,c) (a),(b),(c),-1

/**
 * Register (NCB) cpri#_rp3_dl_ip#_uflow_ign#
 *
 * CPRI RP3 DL Stream Ignore Undeflow Register
 * RP3 Downlink Stream Ignore Underflow Registers for CPRI MACs 0 and 1.
 */
union cavm_cprix_rp3_dl_ipx_uflow_ignx
{
    uint64_t u;
    struct cavm_cprix_rp3_dl_ipx_uflow_ignx_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t bitmap                : 64; /**< [ 63:  0](R/W) Stream Ignore Underflow Bitmap. Each bit corresponds to the Stream for which no underflow
                                                                 interrupt should be signaled. UFLOW_IGN(0) has streams in the range 0 to 63. UFLOW_IGN(1) has
                                                                 streams in the range 64 to 127. UFLOW_IGN(2) has streams in the range 128 to
                                                                 191. Default is to generate interrupt on underflow. */
#else /* Word 0 - Little Endian */
        uint64_t bitmap                : 64; /**< [ 63:  0](R/W) Stream Ignore Underflow Bitmap. Each bit corresponds to the Stream for which no underflow
                                                                 interrupt should be signaled. UFLOW_IGN(0) has streams in the range 0 to 63. UFLOW_IGN(1) has
                                                                 streams in the range 64 to 127. UFLOW_IGN(2) has streams in the range 128 to
                                                                 191. Default is to generate interrupt on underflow. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_cprix_rp3_dl_ipx_uflow_ignx_s cn; */
};
typedef union cavm_cprix_rp3_dl_ipx_uflow_ignx cavm_cprix_rp3_dl_ipx_uflow_ignx_t;

static inline uint64_t CAVM_CPRIX_RP3_DL_IPX_UFLOW_IGNX(uint64_t a, uint64_t b, uint64_t c) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_CPRIX_RP3_DL_IPX_UFLOW_IGNX(uint64_t a, uint64_t b, uint64_t c)
{
    if (cavm_is_model(OCTEONTX_CNF20KA) && ((a<=2) && (b<=1) && (c<=2)))
        return 0x87e027820048ll + 0x100000ll * ((a) & 0x3) + 0x8000ll * ((b) & 0x1) + 0x100ll * ((c) & 0x3);
    __cavm_csr_fatal("CPRIX_RP3_DL_IPX_UFLOW_IGNX", 3, a, b, c, 0, 0, 0);
}

#define typedef_CAVM_CPRIX_RP3_DL_IPX_UFLOW_IGNX(a,b,c) cavm_cprix_rp3_dl_ipx_uflow_ignx_t
#define bustype_CAVM_CPRIX_RP3_DL_IPX_UFLOW_IGNX(a,b,c) CSR_TYPE_NCB
#define basename_CAVM_CPRIX_RP3_DL_IPX_UFLOW_IGNX(a,b,c) "CPRIX_RP3_DL_IPX_UFLOW_IGNX"
#define busnum_CAVM_CPRIX_RP3_DL_IPX_UFLOW_IGNX(a,b,c) (a)
#define arguments_CAVM_CPRIX_RP3_DL_IPX_UFLOW_IGNX(a,b,c) (a),(b),(c),-1

/**
 * Register (NCB) cpri#_rp3_ul_axc_cfg0#
 *
 * CPRI RP3 UL AXC Configuration Register
 */
union cavm_cprix_rp3_ul_axc_cfg0x
{
    uint64_t u;
    struct cavm_cprix_rp3_ul_axc_cfg0x_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t data_format           : 2;  /**< [ 63: 62](R/W) The data can be reformatted from two/four bytes big-endian with IQ
                                                                 positioned as {I, Q}, to:
                                                                 0 = No endianness change.
                                                                 1 = Reformat to two bytes little-endian with 8-bit I and Q swapped.
                                                                 2 = Reformat to four bytes little-endian with 16-bit I and Q swapped.
                                                                 3 = Reserved.
                                                                 This field is ignored for routed AXCs to another CPRI IP and no reformatting is
                                                                 performed for that case. */
        uint64_t msg_cnt               : 14; /**< [ 61: 48](R/W/H) Current message count sent. A notification is sent when the message count
                                                                 reaches [NOTIF_THRES0]/[NOTIF_THRES1] and the count is reset at that time. */
        uint64_t notif_period          : 8;  /**< [ 47: 40](R/W) Notification period. The notification pattern is as follows:
                                                                 * Send a notification after [NOTIF_THRES0] messages are received.
                                                                 * Send [NOTIF_PERIOD]-1 notifications, each after [NOTIF_THRES1] messages are received.

                                                                 The pattern then repeats itself.

                                                                 Notifications are always sent after [NOTIF_THRES0] if [NOTIF_PERIOD]=1.
                                                                 Notifications are disabled if [NOTIF_PERIOD]=0; */
        uint64_t notif_thres1          : 14; /**< [ 39: 26](R/W) Message count threshold at which a notification is issued. See
                                                                 [NOTIF_PERIOD]. */
        uint64_t notif_thres0          : 14; /**< [ 25: 12](R/W) Message count threshold at which a notification is issued. See
                                                                 [NOTIF_PERIOD]. */
        uint64_t buf_type              : 2;  /**< [ 11: 10](R/W) RP3 UL AXC buffer type.
                                                                 0 = GSM messages, these messages can be directly routed to other CPRI ports when [SW_ENABLE]=1.
                                                                 1 = LTE messages.
                                                                 2 = 5G messages.
                                                                 3 = Other message types, only the data ready notifications are routed to other
                                                                 CPRI ports when [SW_ENABLE]=1. */
        uint64_t sw_enable             : 1;  /**< [  9:  9](R/W) Enable switching the UL RP3 messages to another CPRI lane.
                                                                 0 = No switching.
                                                                 1 = Enables AXC messages ready notifications transfer to the DL side via the
                                                                 switch when [NOTIF_THRES0]/[NOTIF_THRES1] is reached. */
        uint64_t notif_type            : 1;  /**< [  8:  8](R/W) The notification type sent after the message count threshold is reached. Must be 1.
                                                                 0 = Reserved.
                                                                 1 = Job descriptor. */
        uint64_t data_swap             : 3;  /**< [  7:  5](R/W) Byte swap enable. */
        uint64_t dest_mem              : 1;  /**< [  4:  4](R/W) Destination memory:
                                                                 0 = SMEM.
                                                                 1 = Reserved. */
        uint64_t cmd_type              : 2;  /**< [  3:  2](R/W) Write DMA command type. */
        uint64_t reserved_1            : 1;
        uint64_t buf_enable            : 1;  /**< [  0:  0](R/W) Enable buffering the UL RP3 messages to memory. */
#else /* Word 0 - Little Endian */
        uint64_t buf_enable            : 1;  /**< [  0:  0](R/W) Enable buffering the UL RP3 messages to memory. */
        uint64_t reserved_1            : 1;
        uint64_t cmd_type              : 2;  /**< [  3:  2](R/W) Write DMA command type. */
        uint64_t dest_mem              : 1;  /**< [  4:  4](R/W) Destination memory:
                                                                 0 = SMEM.
                                                                 1 = Reserved. */
        uint64_t data_swap             : 3;  /**< [  7:  5](R/W) Byte swap enable. */
        uint64_t notif_type            : 1;  /**< [  8:  8](R/W) The notification type sent after the message count threshold is reached. Must be 1.
                                                                 0 = Reserved.
                                                                 1 = Job descriptor. */
        uint64_t sw_enable             : 1;  /**< [  9:  9](R/W) Enable switching the UL RP3 messages to another CPRI lane.
                                                                 0 = No switching.
                                                                 1 = Enables AXC messages ready notifications transfer to the DL side via the
                                                                 switch when [NOTIF_THRES0]/[NOTIF_THRES1] is reached. */
        uint64_t buf_type              : 2;  /**< [ 11: 10](R/W) RP3 UL AXC buffer type.
                                                                 0 = GSM messages, these messages can be directly routed to other CPRI ports when [SW_ENABLE]=1.
                                                                 1 = LTE messages.
                                                                 2 = 5G messages.
                                                                 3 = Other message types, only the data ready notifications are routed to other
                                                                 CPRI ports when [SW_ENABLE]=1. */
        uint64_t notif_thres0          : 14; /**< [ 25: 12](R/W) Message count threshold at which a notification is issued. See
                                                                 [NOTIF_PERIOD]. */
        uint64_t notif_thres1          : 14; /**< [ 39: 26](R/W) Message count threshold at which a notification is issued. See
                                                                 [NOTIF_PERIOD]. */
        uint64_t notif_period          : 8;  /**< [ 47: 40](R/W) Notification period. The notification pattern is as follows:
                                                                 * Send a notification after [NOTIF_THRES0] messages are received.
                                                                 * Send [NOTIF_PERIOD]-1 notifications, each after [NOTIF_THRES1] messages are received.

                                                                 The pattern then repeats itself.

                                                                 Notifications are always sent after [NOTIF_THRES0] if [NOTIF_PERIOD]=1.
                                                                 Notifications are disabled if [NOTIF_PERIOD]=0; */
        uint64_t msg_cnt               : 14; /**< [ 61: 48](R/W/H) Current message count sent. A notification is sent when the message count
                                                                 reaches [NOTIF_THRES0]/[NOTIF_THRES1] and the count is reset at that time. */
        uint64_t data_format           : 2;  /**< [ 63: 62](R/W) The data can be reformatted from two/four bytes big-endian with IQ
                                                                 positioned as {I, Q}, to:
                                                                 0 = No endianness change.
                                                                 1 = Reformat to two bytes little-endian with 8-bit I and Q swapped.
                                                                 2 = Reformat to four bytes little-endian with 16-bit I and Q swapped.
                                                                 3 = Reserved.
                                                                 This field is ignored for routed AXCs to another CPRI IP and no reformatting is
                                                                 performed for that case. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_cprix_rp3_ul_axc_cfg0x_s cn; */
};
typedef union cavm_cprix_rp3_ul_axc_cfg0x cavm_cprix_rp3_ul_axc_cfg0x_t;

static inline uint64_t CAVM_CPRIX_RP3_UL_AXC_CFG0X(uint64_t a, uint64_t b) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_CPRIX_RP3_UL_AXC_CFG0X(uint64_t a, uint64_t b)
{
    if (cavm_is_model(OCTEONTX_CNF20KA) && ((a<=2) && (b<=255)))
        return 0x87e027810000ll + 0x100000ll * ((a) & 0x3) + 0x100ll * ((b) & 0xff);
    __cavm_csr_fatal("CPRIX_RP3_UL_AXC_CFG0X", 2, a, b, 0, 0, 0, 0);
}

#define typedef_CAVM_CPRIX_RP3_UL_AXC_CFG0X(a,b) cavm_cprix_rp3_ul_axc_cfg0x_t
#define bustype_CAVM_CPRIX_RP3_UL_AXC_CFG0X(a,b) CSR_TYPE_NCB
#define basename_CAVM_CPRIX_RP3_UL_AXC_CFG0X(a,b) "CPRIX_RP3_UL_AXC_CFG0X"
#define busnum_CAVM_CPRIX_RP3_UL_AXC_CFG0X(a,b) (a)
#define arguments_CAVM_CPRIX_RP3_UL_AXC_CFG0X(a,b) (a),(b),-1,-1

/**
 * Register (NCB) cpri#_rp3_ul_axc_cfg1#
 *
 * CPRI RP3 UL AXC Configuration Register
 */
union cavm_cprix_rp3_ul_axc_cfg1x
{
    uint64_t u;
    struct cavm_cprix_rp3_ul_axc_cfg1x_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t period_cnt            : 8;  /**< [ 63: 56](R/W/H) Indicates the number of notifications that were sent modulo
                                                                 CPRI()_RP3_UL_AXC_CFG0()[NOTIF_PERIOD]. */
        uint64_t reserved_54_55        : 2;
        uint64_t buf_addr              : 22; /**< [ 53: 32](R/W) Base Address of the AxC Circular Buffer in SMEM in 16B units. */
        uint64_t buf_size              : 16; /**< [ 31: 16](R/W) Indicates the buffer size used for a given AXC, in terms of 16 bytes increments.
                                                                 This value must be an integer fraction
                                                                 of the number of RP3 messages per radio frame for that AXC. */
        uint64_t buf_wptr_offset       : 16; /**< [ 15:  0](R/W/H) Reserved. AXC buffer write pointer offset in the circular buffer.
                                                                 Note: This field has been deprecated and must be 0x0. */
#else /* Word 0 - Little Endian */
        uint64_t buf_wptr_offset       : 16; /**< [ 15:  0](R/W/H) Reserved. AXC buffer write pointer offset in the circular buffer.
                                                                 Note: This field has been deprecated and must be 0x0. */
        uint64_t buf_size              : 16; /**< [ 31: 16](R/W) Indicates the buffer size used for a given AXC, in terms of 16 bytes increments.
                                                                 This value must be an integer fraction
                                                                 of the number of RP3 messages per radio frame for that AXC. */
        uint64_t buf_addr              : 22; /**< [ 53: 32](R/W) Base Address of the AxC Circular Buffer in SMEM in 16B units. */
        uint64_t reserved_54_55        : 2;
        uint64_t period_cnt            : 8;  /**< [ 63: 56](R/W/H) Indicates the number of notifications that were sent modulo
                                                                 CPRI()_RP3_UL_AXC_CFG0()[NOTIF_PERIOD]. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_cprix_rp3_ul_axc_cfg1x_s cn; */
};
typedef union cavm_cprix_rp3_ul_axc_cfg1x cavm_cprix_rp3_ul_axc_cfg1x_t;

static inline uint64_t CAVM_CPRIX_RP3_UL_AXC_CFG1X(uint64_t a, uint64_t b) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_CPRIX_RP3_UL_AXC_CFG1X(uint64_t a, uint64_t b)
{
    if (cavm_is_model(OCTEONTX_CNF20KA) && ((a<=2) && (b<=255)))
        return 0x87e027810008ll + 0x100000ll * ((a) & 0x3) + 0x100ll * ((b) & 0xff);
    __cavm_csr_fatal("CPRIX_RP3_UL_AXC_CFG1X", 2, a, b, 0, 0, 0, 0);
}

#define typedef_CAVM_CPRIX_RP3_UL_AXC_CFG1X(a,b) cavm_cprix_rp3_ul_axc_cfg1x_t
#define bustype_CAVM_CPRIX_RP3_UL_AXC_CFG1X(a,b) CSR_TYPE_NCB
#define basename_CAVM_CPRIX_RP3_UL_AXC_CFG1X(a,b) "CPRIX_RP3_UL_AXC_CFG1X"
#define busnum_CAVM_CPRIX_RP3_UL_AXC_CFG1X(a,b) (a)
#define arguments_CAVM_CPRIX_RP3_UL_AXC_CFG1X(a,b) (a),(b),-1,-1

/**
 * Register (NCB) cpri#_rp3_ul_axc_jd_ba_cfg#
 *
 * CPRI RP3 UL AXC Job Descriptor Buffer Base Address Configuration Register
 */
union cavm_cprix_rp3_ul_axc_jd_ba_cfgx
{
    uint64_t u;
    struct cavm_cprix_rp3_ul_axc_jd_ba_cfgx_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_53_63        : 11;
        uint64_t buf_addr              : 53; /**< [ 52:  0](R/W) Job descriptor buffer base address. Note this is a byte address and the 4 LSB
                                                                 are always considered as 0. */
#else /* Word 0 - Little Endian */
        uint64_t buf_addr              : 53; /**< [ 52:  0](R/W) Job descriptor buffer base address. Note this is a byte address and the 4 LSB
                                                                 are always considered as 0. */
        uint64_t reserved_53_63        : 11;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_cprix_rp3_ul_axc_jd_ba_cfgx_s cn; */
};
typedef union cavm_cprix_rp3_ul_axc_jd_ba_cfgx cavm_cprix_rp3_ul_axc_jd_ba_cfgx_t;

static inline uint64_t CAVM_CPRIX_RP3_UL_AXC_JD_BA_CFGX(uint64_t a, uint64_t b) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_CPRIX_RP3_UL_AXC_JD_BA_CFGX(uint64_t a, uint64_t b)
{
    if (cavm_is_model(OCTEONTX_CNF20KA) && ((a<=2) && (b<=255)))
        return 0x87e0278100f0ll + 0x100000ll * ((a) & 0x3) + 0x100ll * ((b) & 0xff);
    __cavm_csr_fatal("CPRIX_RP3_UL_AXC_JD_BA_CFGX", 2, a, b, 0, 0, 0, 0);
}

#define typedef_CAVM_CPRIX_RP3_UL_AXC_JD_BA_CFGX(a,b) cavm_cprix_rp3_ul_axc_jd_ba_cfgx_t
#define bustype_CAVM_CPRIX_RP3_UL_AXC_JD_BA_CFGX(a,b) CSR_TYPE_NCB
#define basename_CAVM_CPRIX_RP3_UL_AXC_JD_BA_CFGX(a,b) "CPRIX_RP3_UL_AXC_JD_BA_CFGX"
#define busnum_CAVM_CPRIX_RP3_UL_AXC_JD_BA_CFGX(a,b) (a)
#define arguments_CAVM_CPRIX_RP3_UL_AXC_JD_BA_CFGX(a,b) (a),(b),-1,-1

/**
 * Register (NCB) cpri#_rp3_ul_axc_jd_bs_cfg#
 *
 * CPRI RP3 UL AXC Job Descriptor Buffer Base Size Configuration Register
 */
union cavm_cprix_rp3_ul_axc_jd_bs_cfgx
{
    uint64_t u;
    struct cavm_cprix_rp3_ul_axc_jd_bs_cfgx_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_29_63        : 35;
        uint64_t num_jd                : 13; /**< [ 28: 16](R/W) Number of Job descritor buffers per AXC. */
        uint64_t jd_size               : 16; /**< [ 15:  0](R/W) Size of each job descriptor buffer dedicated to a given AXC. */
#else /* Word 0 - Little Endian */
        uint64_t jd_size               : 16; /**< [ 15:  0](R/W) Size of each job descriptor buffer dedicated to a given AXC. */
        uint64_t num_jd                : 13; /**< [ 28: 16](R/W) Number of Job descritor buffers per AXC. */
        uint64_t reserved_29_63        : 35;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_cprix_rp3_ul_axc_jd_bs_cfgx_s cn; */
};
typedef union cavm_cprix_rp3_ul_axc_jd_bs_cfgx cavm_cprix_rp3_ul_axc_jd_bs_cfgx_t;

static inline uint64_t CAVM_CPRIX_RP3_UL_AXC_JD_BS_CFGX(uint64_t a, uint64_t b) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_CPRIX_RP3_UL_AXC_JD_BS_CFGX(uint64_t a, uint64_t b)
{
    if (cavm_is_model(OCTEONTX_CNF20KA) && ((a<=2) && (b<=255)))
        return 0x87e0278100f8ll + 0x100000ll * ((a) & 0x3) + 0x100ll * ((b) & 0xff);
    __cavm_csr_fatal("CPRIX_RP3_UL_AXC_JD_BS_CFGX", 2, a, b, 0, 0, 0, 0);
}

#define typedef_CAVM_CPRIX_RP3_UL_AXC_JD_BS_CFGX(a,b) cavm_cprix_rp3_ul_axc_jd_bs_cfgx_t
#define bustype_CAVM_CPRIX_RP3_UL_AXC_JD_BS_CFGX(a,b) CSR_TYPE_NCB
#define basename_CAVM_CPRIX_RP3_UL_AXC_JD_BS_CFGX(a,b) "CPRIX_RP3_UL_AXC_JD_BS_CFGX"
#define busnum_CAVM_CPRIX_RP3_UL_AXC_JD_BS_CFGX(a,b) (a)
#define arguments_CAVM_CPRIX_RP3_UL_AXC_JD_BS_CFGX(a,b) (a),(b),-1,-1

/**
 * Register (NCB) cpri#_rp3_ul_axc_jd_cfg#
 *
 * CPRI RP3 AXC UL Job Descriptor Configuration Register
 */
union cavm_cprix_rp3_ul_axc_jd_cfgx
{
    uint64_t u;
    struct cavm_cprix_rp3_ul_axc_jd_cfgx_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_51_63        : 13;
        uint64_t gmid                  : 3;  /**< [ 50: 48](R/W) Guest Machine ID. */
        uint64_t reserved_47           : 1;
        uint64_t cmd_type              : 2;  /**< [ 46: 45](R/W) AXC JD write DMA command type. */
        uint64_t dest_mem              : 1;  /**< [ 44: 44](R/W) Destination memory:
                                                                 0 = SMEM.
                                                                 1 = LLC/DRAM.
                                                                 Note the JD destination memory must match the one configured in the
                                                                 CPRI(0..2)_RP3_UL_JA_PARAMS_AXC(0..255) CSR. */
        uint64_t reserved_41_43        : 3;
        uint64_t jd_buf_ptr            : 13; /**< [ 40: 28](R/W/H) Indicates the current job descriptor buffer being written. This field auto
                                                                 increments and wraps around at CPRI()_RP3_UL_AXC_JD_BS_CFG()[NUM_JD]. */
        uint64_t jd_wptr_offset        : 16; /**< [ 27: 12](R/W) Indicates the 128-bit offset used for the write within a job descriptor buffer. */
        uint64_t reserved_1_11         : 11;
        uint64_t jd_enable             : 1;  /**< [  0:  0](R/W) Job descriptor enable. This register is meant to be configured during initialization and
                                                                 then static during normal operation. */
#else /* Word 0 - Little Endian */
        uint64_t jd_enable             : 1;  /**< [  0:  0](R/W) Job descriptor enable. This register is meant to be configured during initialization and
                                                                 then static during normal operation. */
        uint64_t reserved_1_11         : 11;
        uint64_t jd_wptr_offset        : 16; /**< [ 27: 12](R/W) Indicates the 128-bit offset used for the write within a job descriptor buffer. */
        uint64_t jd_buf_ptr            : 13; /**< [ 40: 28](R/W/H) Indicates the current job descriptor buffer being written. This field auto
                                                                 increments and wraps around at CPRI()_RP3_UL_AXC_JD_BS_CFG()[NUM_JD]. */
        uint64_t reserved_41_43        : 3;
        uint64_t dest_mem              : 1;  /**< [ 44: 44](R/W) Destination memory:
                                                                 0 = SMEM.
                                                                 1 = LLC/DRAM.
                                                                 Note the JD destination memory must match the one configured in the
                                                                 CPRI(0..2)_RP3_UL_JA_PARAMS_AXC(0..255) CSR. */
        uint64_t cmd_type              : 2;  /**< [ 46: 45](R/W) AXC JD write DMA command type. */
        uint64_t reserved_47           : 1;
        uint64_t gmid                  : 3;  /**< [ 50: 48](R/W) Guest Machine ID. */
        uint64_t reserved_51_63        : 13;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_cprix_rp3_ul_axc_jd_cfgx_s cn; */
};
typedef union cavm_cprix_rp3_ul_axc_jd_cfgx cavm_cprix_rp3_ul_axc_jd_cfgx_t;

static inline uint64_t CAVM_CPRIX_RP3_UL_AXC_JD_CFGX(uint64_t a, uint64_t b) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_CPRIX_RP3_UL_AXC_JD_CFGX(uint64_t a, uint64_t b)
{
    if (cavm_is_model(OCTEONTX_CNF20KA) && ((a<=2) && (b<=255)))
        return 0x87e027810018ll + 0x100000ll * ((a) & 0x3) + 0x100ll * ((b) & 0xff);
    __cavm_csr_fatal("CPRIX_RP3_UL_AXC_JD_CFGX", 2, a, b, 0, 0, 0, 0);
}

#define typedef_CAVM_CPRIX_RP3_UL_AXC_JD_CFGX(a,b) cavm_cprix_rp3_ul_axc_jd_cfgx_t
#define bustype_CAVM_CPRIX_RP3_UL_AXC_JD_CFGX(a,b) CSR_TYPE_NCB
#define basename_CAVM_CPRIX_RP3_UL_AXC_JD_CFGX(a,b) "CPRIX_RP3_UL_AXC_JD_CFGX"
#define busnum_CAVM_CPRIX_RP3_UL_AXC_JD_CFGX(a,b) (a)
#define arguments_CAVM_CPRIX_RP3_UL_AXC_JD_CFGX(a,b) (a),(b),-1,-1

/**
 * Register (NCB) cpri#_rp3_ul_axc_map0#
 *
 * CPRI RP3 UL AXC Map for CPRI MAC 0 Registers
 */
union cavm_cprix_rp3_ul_axc_map0x
{
    uint64_t u;
    struct cavm_cprix_rp3_ul_axc_map0x_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_24_63        : 40;
        uint64_t axc_id                : 8;  /**< [ 23: 16](R/W) AXC ID associated wit the RP3 UL address [ADDR]. */
        uint64_t reserved_13_15        : 3;
        uint64_t addr                  : 13; /**< [ 12:  0](R/W) RP3 UL address associated with [AXC_ID]. */
#else /* Word 0 - Little Endian */
        uint64_t addr                  : 13; /**< [ 12:  0](R/W) RP3 UL address associated with [AXC_ID]. */
        uint64_t reserved_13_15        : 3;
        uint64_t axc_id                : 8;  /**< [ 23: 16](R/W) AXC ID associated wit the RP3 UL address [ADDR]. */
        uint64_t reserved_24_63        : 40;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_cprix_rp3_ul_axc_map0x_s cn; */
};
typedef union cavm_cprix_rp3_ul_axc_map0x cavm_cprix_rp3_ul_axc_map0x_t;

static inline uint64_t CAVM_CPRIX_RP3_UL_AXC_MAP0X(uint64_t a, uint64_t b) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_CPRIX_RP3_UL_AXC_MAP0X(uint64_t a, uint64_t b)
{
    if (cavm_is_model(OCTEONTX_CNF20KA) && ((a<=2) && (b<=127)))
        return 0x87e027810050ll + 0x100000ll * ((a) & 0x3) + 0x100ll * ((b) & 0x7f);
    __cavm_csr_fatal("CPRIX_RP3_UL_AXC_MAP0X", 2, a, b, 0, 0, 0, 0);
}

#define typedef_CAVM_CPRIX_RP3_UL_AXC_MAP0X(a,b) cavm_cprix_rp3_ul_axc_map0x_t
#define bustype_CAVM_CPRIX_RP3_UL_AXC_MAP0X(a,b) CSR_TYPE_NCB
#define basename_CAVM_CPRIX_RP3_UL_AXC_MAP0X(a,b) "CPRIX_RP3_UL_AXC_MAP0X"
#define busnum_CAVM_CPRIX_RP3_UL_AXC_MAP0X(a,b) (a)
#define arguments_CAVM_CPRIX_RP3_UL_AXC_MAP0X(a,b) (a),(b),-1,-1

/**
 * Register (NCB) cpri#_rp3_ul_axc_map1#
 *
 * CPRI RP3 UL AXC Map for CPRI MAC 1 Registers
 */
union cavm_cprix_rp3_ul_axc_map1x
{
    uint64_t u;
    struct cavm_cprix_rp3_ul_axc_map1x_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_24_63        : 40;
        uint64_t axc_id                : 8;  /**< [ 23: 16](R/W) AXC ID associated wit the RP3 UL address [ADDR]. */
        uint64_t reserved_13_15        : 3;
        uint64_t addr                  : 13; /**< [ 12:  0](R/W) RP3 UL address associated with [AXC_ID]. */
#else /* Word 0 - Little Endian */
        uint64_t addr                  : 13; /**< [ 12:  0](R/W) RP3 UL address associated with [AXC_ID]. */
        uint64_t reserved_13_15        : 3;
        uint64_t axc_id                : 8;  /**< [ 23: 16](R/W) AXC ID associated wit the RP3 UL address [ADDR]. */
        uint64_t reserved_24_63        : 40;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_cprix_rp3_ul_axc_map1x_s cn; */
};
typedef union cavm_cprix_rp3_ul_axc_map1x cavm_cprix_rp3_ul_axc_map1x_t;

static inline uint64_t CAVM_CPRIX_RP3_UL_AXC_MAP1X(uint64_t a, uint64_t b) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_CPRIX_RP3_UL_AXC_MAP1X(uint64_t a, uint64_t b)
{
    if (cavm_is_model(OCTEONTX_CNF20KA) && ((a<=2) && (b<=127)))
        return 0x87e027810058ll + 0x100000ll * ((a) & 0x3) + 0x100ll * ((b) & 0x7f);
    __cavm_csr_fatal("CPRIX_RP3_UL_AXC_MAP1X", 2, a, b, 0, 0, 0, 0);
}

#define typedef_CAVM_CPRIX_RP3_UL_AXC_MAP1X(a,b) cavm_cprix_rp3_ul_axc_map1x_t
#define bustype_CAVM_CPRIX_RP3_UL_AXC_MAP1X(a,b) CSR_TYPE_NCB
#define basename_CAVM_CPRIX_RP3_UL_AXC_MAP1X(a,b) "CPRIX_RP3_UL_AXC_MAP1X"
#define busnum_CAVM_CPRIX_RP3_UL_AXC_MAP1X(a,b) (a)
#define arguments_CAVM_CPRIX_RP3_UL_AXC_MAP1X(a,b) (a),(b),-1,-1

/**
 * Register (NCB) cpri#_rp3_ul_axc_sw_cfg#
 *
 * CPRI RP3 UL AXC Configuration Register
 */
union cavm_cprix_rp3_ul_axc_sw_cfgx
{
    uint64_t u;
    struct cavm_cprix_rp3_ul_axc_sw_cfgx_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_49_63        : 15;
        uint64_t bcn_start_time_vld    : 1;  /**< [ 48: 48](RO/H) Set set, indicate that [BCN_START_TIME] has been captured and is valid.
                                                                 Cleared when the AXC buffer is disabled. */
        uint64_t reserved_44_47        : 4;
        uint64_t bcn_start_time        : 28; /**< [ 43: 16](RO/H) Start of 10ms radio frame BCN time snapshot for routed LTE messages only.
                                                                 This BCN start time corresponds to the time at which the first message of a
                                                                 radio frame is received, after the UL buffer is enabled. This field is cleared
                                                                 when the buffer is disabled. */
        uint64_t reserved_12_15        : 4;
        uint64_t sw_msg_axc            : 8;  /**< [ 11:  4](R/W) Switched GSM message AXC ID (0-255). */
        uint64_t sw_msg_dest           : 4;  /**< [  3:  0](R/W) "Switched GSM AXC message destination core (0-5).
                                                                   Bit[0]   : Selects between CPRI MAC#0 and CPRI MAC#1 within each CPRI Instance.
                                                                   Bit[2:1] : Selects CPRI Instance. (Three instances supported: 0, 1 and 2).
                                                                   Bit[3]   : Reserved." */
#else /* Word 0 - Little Endian */
        uint64_t sw_msg_dest           : 4;  /**< [  3:  0](R/W) "Switched GSM AXC message destination core (0-5).
                                                                   Bit[0]   : Selects between CPRI MAC#0 and CPRI MAC#1 within each CPRI Instance.
                                                                   Bit[2:1] : Selects CPRI Instance. (Three instances supported: 0, 1 and 2).
                                                                   Bit[3]   : Reserved." */
        uint64_t sw_msg_axc            : 8;  /**< [ 11:  4](R/W) Switched GSM message AXC ID (0-255). */
        uint64_t reserved_12_15        : 4;
        uint64_t bcn_start_time        : 28; /**< [ 43: 16](RO/H) Start of 10ms radio frame BCN time snapshot for routed LTE messages only.
                                                                 This BCN start time corresponds to the time at which the first message of a
                                                                 radio frame is received, after the UL buffer is enabled. This field is cleared
                                                                 when the buffer is disabled. */
        uint64_t reserved_44_47        : 4;
        uint64_t bcn_start_time_vld    : 1;  /**< [ 48: 48](RO/H) Set set, indicate that [BCN_START_TIME] has been captured and is valid.
                                                                 Cleared when the AXC buffer is disabled. */
        uint64_t reserved_49_63        : 15;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_cprix_rp3_ul_axc_sw_cfgx_s cn; */
};
typedef union cavm_cprix_rp3_ul_axc_sw_cfgx cavm_cprix_rp3_ul_axc_sw_cfgx_t;

static inline uint64_t CAVM_CPRIX_RP3_UL_AXC_SW_CFGX(uint64_t a, uint64_t b) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_CPRIX_RP3_UL_AXC_SW_CFGX(uint64_t a, uint64_t b)
{
    if (cavm_is_model(OCTEONTX_CNF20KA) && ((a<=2) && (b<=255)))
        return 0x87e027810010ll + 0x100000ll * ((a) & 0x3) + 0x100ll * ((b) & 0xff);
    __cavm_csr_fatal("CPRIX_RP3_UL_AXC_SW_CFGX", 2, a, b, 0, 0, 0, 0);
}

#define typedef_CAVM_CPRIX_RP3_UL_AXC_SW_CFGX(a,b) cavm_cprix_rp3_ul_axc_sw_cfgx_t
#define bustype_CAVM_CPRIX_RP3_UL_AXC_SW_CFGX(a,b) CSR_TYPE_NCB
#define basename_CAVM_CPRIX_RP3_UL_AXC_SW_CFGX(a,b) "CPRIX_RP3_UL_AXC_SW_CFGX"
#define busnum_CAVM_CPRIX_RP3_UL_AXC_SW_CFGX(a,b) (a)
#define arguments_CAVM_CPRIX_RP3_UL_AXC_SW_CFGX(a,b) (a),(b),-1,-1

/**
 * Register (NCB) cpri#_rp3_ul_ctrl_ba_cfg
 *
 * CPRI RP3 UL Control Buffer Address Configuration Register
 */
union cavm_cprix_rp3_ul_ctrl_ba_cfg
{
    uint64_t u;
    struct cavm_cprix_rp3_ul_ctrl_ba_cfg_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_53_63        : 11;
        uint64_t buf_addr              : 53; /**< [ 52:  0](R/W) UL AXC buffer base address. Note this is a byte address and the 4 LSB are always considered as 0. */
#else /* Word 0 - Little Endian */
        uint64_t buf_addr              : 53; /**< [ 52:  0](R/W) UL AXC buffer base address. Note this is a byte address and the 4 LSB are always considered as 0. */
        uint64_t reserved_53_63        : 11;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_cprix_rp3_ul_ctrl_ba_cfg_s cn; */
};
typedef union cavm_cprix_rp3_ul_ctrl_ba_cfg cavm_cprix_rp3_ul_ctrl_ba_cfg_t;

static inline uint64_t CAVM_CPRIX_RP3_UL_CTRL_BA_CFG(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_CPRIX_RP3_UL_CTRL_BA_CFG(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CNF20KA) && (a<=2))
        return 0x87e0278100d8ll + 0x100000ll * ((a) & 0x3);
    __cavm_csr_fatal("CPRIX_RP3_UL_CTRL_BA_CFG", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_CPRIX_RP3_UL_CTRL_BA_CFG(a) cavm_cprix_rp3_ul_ctrl_ba_cfg_t
#define bustype_CAVM_CPRIX_RP3_UL_CTRL_BA_CFG(a) CSR_TYPE_NCB
#define basename_CAVM_CPRIX_RP3_UL_CTRL_BA_CFG(a) "CPRIX_RP3_UL_CTRL_BA_CFG"
#define busnum_CAVM_CPRIX_RP3_UL_CTRL_BA_CFG(a) (a)
#define arguments_CAVM_CPRIX_RP3_UL_CTRL_BA_CFG(a) (a),-1,-1,-1

/**
 * Register (NCB) cpri#_rp3_ul_ctrl_bs_cfg
 *
 * CPRI RP3 UL Control Buffer Size Configuration Register
 */
union cavm_cprix_rp3_ul_ctrl_bs_cfg
{
    uint64_t u;
    struct cavm_cprix_rp3_ul_ctrl_bs_cfg_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_16_63        : 48;
        uint64_t buf_size              : 16; /**< [ 15:  0](R/W) UL AXC buffer base size. */
#else /* Word 0 - Little Endian */
        uint64_t buf_size              : 16; /**< [ 15:  0](R/W) UL AXC buffer base size. */
        uint64_t reserved_16_63        : 48;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_cprix_rp3_ul_ctrl_bs_cfg_s cn; */
};
typedef union cavm_cprix_rp3_ul_ctrl_bs_cfg cavm_cprix_rp3_ul_ctrl_bs_cfg_t;

static inline uint64_t CAVM_CPRIX_RP3_UL_CTRL_BS_CFG(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_CPRIX_RP3_UL_CTRL_BS_CFG(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CNF20KA) && (a<=2))
        return 0x87e0278100e0ll + 0x100000ll * ((a) & 0x3);
    __cavm_csr_fatal("CPRIX_RP3_UL_CTRL_BS_CFG", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_CPRIX_RP3_UL_CTRL_BS_CFG(a) cavm_cprix_rp3_ul_ctrl_bs_cfg_t
#define bustype_CAVM_CPRIX_RP3_UL_CTRL_BS_CFG(a) CSR_TYPE_NCB
#define basename_CAVM_CPRIX_RP3_UL_CTRL_BS_CFG(a) "CPRIX_RP3_UL_CTRL_BS_CFG"
#define busnum_CAVM_CPRIX_RP3_UL_CTRL_BS_CFG(a) (a)
#define arguments_CAVM_CPRIX_RP3_UL_CTRL_BS_CFG(a) (a),-1,-1,-1

/**
 * Register (NCB) cpri#_rp3_ul_ctrl_cfg
 *
 * CPRI RP3 UL CTRL Configuration Register
 */
union cavm_cprix_rp3_ul_ctrl_cfg
{
    uint64_t u;
    struct cavm_cprix_rp3_ul_ctrl_cfg_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t buf_wptr_offset       : 16; /**< [ 63: 48](R/W/H) Reserved. AXC buffer write pointer offset in the circular buffer.
                                                                 Note: This field has been deprecated and must be 0x0. */
        uint64_t reserved_42_47        : 6;
        uint64_t msg_cnt               : 14; /**< [ 41: 28](R/W/H) Current message count sent. A notification is sent when the message count
                                                                 reaches [NOTIF_THRES] and the count is reset at that time. */
        uint64_t reserved_26_27        : 2;
        uint64_t notif_thres           : 14; /**< [ 25: 12](R/W) Message count threshold at which a notification is issued. The notification sent
                                                                 can be either an interrupt or a job descriptor.
                                                                 A value of 0 indicates that notifications are disabled. */
        uint64_t gmid                  : 3;  /**< [ 11:  9](R/W) Guest Machine ID. */
        uint64_t notif_type            : 1;  /**< [  8:  8](R/W) The notification type sent after the message count threshold is reached.
                                                                 0x0 = interrupt.
                                                                 0x1 = job descriptor. */
        uint64_t data_swap             : 3;  /**< [  7:  5](R/W) Byte swap enable. */
        uint64_t dest_mem              : 1;  /**< [  4:  4](R/W) Destination memory:
                                                                 0 = SMEM.
                                                                 1 = LLC/DRAM. */
        uint64_t cmd_type              : 2;  /**< [  3:  2](R/W) Write DMA command type. */
        uint64_t reserved_1            : 1;
        uint64_t buf_enable            : 1;  /**< [  0:  0](R/W) Enable buffering the UL RP3 messages to memory. */
#else /* Word 0 - Little Endian */
        uint64_t buf_enable            : 1;  /**< [  0:  0](R/W) Enable buffering the UL RP3 messages to memory. */
        uint64_t reserved_1            : 1;
        uint64_t cmd_type              : 2;  /**< [  3:  2](R/W) Write DMA command type. */
        uint64_t dest_mem              : 1;  /**< [  4:  4](R/W) Destination memory:
                                                                 0 = SMEM.
                                                                 1 = LLC/DRAM. */
        uint64_t data_swap             : 3;  /**< [  7:  5](R/W) Byte swap enable. */
        uint64_t notif_type            : 1;  /**< [  8:  8](R/W) The notification type sent after the message count threshold is reached.
                                                                 0x0 = interrupt.
                                                                 0x1 = job descriptor. */
        uint64_t gmid                  : 3;  /**< [ 11:  9](R/W) Guest Machine ID. */
        uint64_t notif_thres           : 14; /**< [ 25: 12](R/W) Message count threshold at which a notification is issued. The notification sent
                                                                 can be either an interrupt or a job descriptor.
                                                                 A value of 0 indicates that notifications are disabled. */
        uint64_t reserved_26_27        : 2;
        uint64_t msg_cnt               : 14; /**< [ 41: 28](R/W/H) Current message count sent. A notification is sent when the message count
                                                                 reaches [NOTIF_THRES] and the count is reset at that time. */
        uint64_t reserved_42_47        : 6;
        uint64_t buf_wptr_offset       : 16; /**< [ 63: 48](R/W/H) Reserved. AXC buffer write pointer offset in the circular buffer.
                                                                 Note: This field has been deprecated and must be 0x0. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_cprix_rp3_ul_ctrl_cfg_s cn; */
};
typedef union cavm_cprix_rp3_ul_ctrl_cfg cavm_cprix_rp3_ul_ctrl_cfg_t;

static inline uint64_t CAVM_CPRIX_RP3_UL_CTRL_CFG(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_CPRIX_RP3_UL_CTRL_CFG(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CNF20KA) && (a<=2))
        return 0x87e0278100e8ll + 0x100000ll * ((a) & 0x3);
    __cavm_csr_fatal("CPRIX_RP3_UL_CTRL_CFG", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_CPRIX_RP3_UL_CTRL_CFG(a) cavm_cprix_rp3_ul_ctrl_cfg_t
#define bustype_CAVM_CPRIX_RP3_UL_CTRL_CFG(a) CSR_TYPE_NCB
#define basename_CAVM_CPRIX_RP3_UL_CTRL_CFG(a) "CPRIX_RP3_UL_CTRL_CFG"
#define busnum_CAVM_CPRIX_RP3_UL_CTRL_CFG(a) (a)
#define arguments_CAVM_CPRIX_RP3_UL_CTRL_CFG(a) (a),-1,-1,-1

/**
 * Register (NCB) cpri#_rp3_ul_ctrl_jd_ba_cfg
 *
 * CPRI RP3 UL Control Job Descriptor Buffer Base Address Configuration Register
 */
union cavm_cprix_rp3_ul_ctrl_jd_ba_cfg
{
    uint64_t u;
    struct cavm_cprix_rp3_ul_ctrl_jd_ba_cfg_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_53_63        : 11;
        uint64_t buf_addr              : 53; /**< [ 52:  0](R/W) Job descriptor buffer base address. Note this is a byte address and the 4 LSB
                                                                 are always considered as 0. */
#else /* Word 0 - Little Endian */
        uint64_t buf_addr              : 53; /**< [ 52:  0](R/W) Job descriptor buffer base address. Note this is a byte address and the 4 LSB
                                                                 are always considered as 0. */
        uint64_t reserved_53_63        : 11;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_cprix_rp3_ul_ctrl_jd_ba_cfg_s cn; */
};
typedef union cavm_cprix_rp3_ul_ctrl_jd_ba_cfg cavm_cprix_rp3_ul_ctrl_jd_ba_cfg_t;

static inline uint64_t CAVM_CPRIX_RP3_UL_CTRL_JD_BA_CFG(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_CPRIX_RP3_UL_CTRL_JD_BA_CFG(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CNF20KA) && (a<=2))
        return 0x87e027820000ll + 0x100000ll * ((a) & 0x3);
    __cavm_csr_fatal("CPRIX_RP3_UL_CTRL_JD_BA_CFG", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_CPRIX_RP3_UL_CTRL_JD_BA_CFG(a) cavm_cprix_rp3_ul_ctrl_jd_ba_cfg_t
#define bustype_CAVM_CPRIX_RP3_UL_CTRL_JD_BA_CFG(a) CSR_TYPE_NCB
#define basename_CAVM_CPRIX_RP3_UL_CTRL_JD_BA_CFG(a) "CPRIX_RP3_UL_CTRL_JD_BA_CFG"
#define busnum_CAVM_CPRIX_RP3_UL_CTRL_JD_BA_CFG(a) (a)
#define arguments_CAVM_CPRIX_RP3_UL_CTRL_JD_BA_CFG(a) (a),-1,-1,-1

/**
 * Register (NCB) cpri#_rp3_ul_ctrl_jd_bs_cfg
 *
 * CPRI RP3 UL Control Job Descriptor Buffer Base Size Configuration Register
 */
union cavm_cprix_rp3_ul_ctrl_jd_bs_cfg
{
    uint64_t u;
    struct cavm_cprix_rp3_ul_ctrl_jd_bs_cfg_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_29_63        : 35;
        uint64_t num_jd                : 13; /**< [ 28: 16](R/W) Number of Job descriptor buffers. */
        uint64_t jd_size               : 16; /**< [ 15:  0](R/W) Size of each job descriptor buffer for control massages. */
#else /* Word 0 - Little Endian */
        uint64_t jd_size               : 16; /**< [ 15:  0](R/W) Size of each job descriptor buffer for control massages. */
        uint64_t num_jd                : 13; /**< [ 28: 16](R/W) Number of Job descriptor buffers. */
        uint64_t reserved_29_63        : 35;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_cprix_rp3_ul_ctrl_jd_bs_cfg_s cn; */
};
typedef union cavm_cprix_rp3_ul_ctrl_jd_bs_cfg cavm_cprix_rp3_ul_ctrl_jd_bs_cfg_t;

static inline uint64_t CAVM_CPRIX_RP3_UL_CTRL_JD_BS_CFG(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_CPRIX_RP3_UL_CTRL_JD_BS_CFG(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CNF20KA) && (a<=2))
        return 0x87e027820008ll + 0x100000ll * ((a) & 0x3);
    __cavm_csr_fatal("CPRIX_RP3_UL_CTRL_JD_BS_CFG", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_CPRIX_RP3_UL_CTRL_JD_BS_CFG(a) cavm_cprix_rp3_ul_ctrl_jd_bs_cfg_t
#define bustype_CAVM_CPRIX_RP3_UL_CTRL_JD_BS_CFG(a) CSR_TYPE_NCB
#define basename_CAVM_CPRIX_RP3_UL_CTRL_JD_BS_CFG(a) "CPRIX_RP3_UL_CTRL_JD_BS_CFG"
#define busnum_CAVM_CPRIX_RP3_UL_CTRL_JD_BS_CFG(a) (a)
#define arguments_CAVM_CPRIX_RP3_UL_CTRL_JD_BS_CFG(a) (a),-1,-1,-1

/**
 * Register (NCB) cpri#_rp3_ul_ctrl_jd_cfg
 *
 * CPRI RP3 UL CTRL Job Descriptor Configuration Register
 */
union cavm_cprix_rp3_ul_ctrl_jd_cfg
{
    uint64_t u;
    struct cavm_cprix_rp3_ul_ctrl_jd_cfg_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_51_63        : 13;
        uint64_t gmid                  : 3;  /**< [ 50: 48](R/W) Guest Machine ID. */
        uint64_t reserved_47           : 1;
        uint64_t cmd_type              : 2;  /**< [ 46: 45](R/W) CTRL JD write DMA command type. */
        uint64_t dest_mem              : 1;  /**< [ 44: 44](R/W) Destination memory:
                                                                 0 = SMEM.
                                                                 1 = LLC/DRAM.
                                                                 Note the JD destination memory must match the one configured in the
                                                                 CPRI(0..2)_RP3_UL_JA_PARAMS_CTRL CSR. */
        uint64_t reserved_41_43        : 3;
        uint64_t jd_buf_ptr            : 13; /**< [ 40: 28](R/W/H) Indicates the current job descriptor buffer being written. This field auto
                                                                 increments and wraps around at CPRI()_RP3_UL_CTRL_JD_BS_CFG[NUM_JD]. */
        uint64_t jd_wptr_offset        : 16; /**< [ 27: 12](R/W) Indicates the 128-bit offset used for the first write within a job descriptor buffer. */
        uint64_t reserved_1_11         : 11;
        uint64_t jd_enable             : 1;  /**< [  0:  0](R/W) Job descriptor enable. */
#else /* Word 0 - Little Endian */
        uint64_t jd_enable             : 1;  /**< [  0:  0](R/W) Job descriptor enable. */
        uint64_t reserved_1_11         : 11;
        uint64_t jd_wptr_offset        : 16; /**< [ 27: 12](R/W) Indicates the 128-bit offset used for the first write within a job descriptor buffer. */
        uint64_t jd_buf_ptr            : 13; /**< [ 40: 28](R/W/H) Indicates the current job descriptor buffer being written. This field auto
                                                                 increments and wraps around at CPRI()_RP3_UL_CTRL_JD_BS_CFG[NUM_JD]. */
        uint64_t reserved_41_43        : 3;
        uint64_t dest_mem              : 1;  /**< [ 44: 44](R/W) Destination memory:
                                                                 0 = SMEM.
                                                                 1 = LLC/DRAM.
                                                                 Note the JD destination memory must match the one configured in the
                                                                 CPRI(0..2)_RP3_UL_JA_PARAMS_CTRL CSR. */
        uint64_t cmd_type              : 2;  /**< [ 46: 45](R/W) CTRL JD write DMA command type. */
        uint64_t reserved_47           : 1;
        uint64_t gmid                  : 3;  /**< [ 50: 48](R/W) Guest Machine ID. */
        uint64_t reserved_51_63        : 13;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_cprix_rp3_ul_ctrl_jd_cfg_s cn; */
};
typedef union cavm_cprix_rp3_ul_ctrl_jd_cfg cavm_cprix_rp3_ul_ctrl_jd_cfg_t;

static inline uint64_t CAVM_CPRIX_RP3_UL_CTRL_JD_CFG(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_CPRIX_RP3_UL_CTRL_JD_CFG(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CNF20KA) && (a<=2))
        return 0x87e027810038ll + 0x100000ll * ((a) & 0x3);
    __cavm_csr_fatal("CPRIX_RP3_UL_CTRL_JD_CFG", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_CPRIX_RP3_UL_CTRL_JD_CFG(a) cavm_cprix_rp3_ul_ctrl_jd_cfg_t
#define bustype_CAVM_CPRIX_RP3_UL_CTRL_JD_CFG(a) CSR_TYPE_NCB
#define basename_CAVM_CPRIX_RP3_UL_CTRL_JD_CFG(a) "CPRIX_RP3_UL_CTRL_JD_CFG"
#define busnum_CAVM_CPRIX_RP3_UL_CTRL_JD_CFG(a) (a)
#define arguments_CAVM_CPRIX_RP3_UL_CTRL_JD_CFG(a) (a),-1,-1,-1

/**
 * Register (NCB) cpri#_rp3_ul_ctrl_map0#
 *
 * CPRI RP3 UL Control Map for CPRI MAC 0 Registers
 */
union cavm_cprix_rp3_ul_ctrl_map0x
{
    uint64_t u;
    struct cavm_cprix_rp3_ul_ctrl_map0x_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_25_63        : 39;
        uint64_t map_enable            : 1;  /**< [ 24: 24](R/W) When set, enables mapping of RP3 messages with address field value [ADDR]
                                                                 to the control identifier [CTRL_ID].
                                                                 Should be clear if such mapping is not desired. */
        uint64_t reserved_22_23        : 2;
        uint64_t ctrl_id               : 6;  /**< [ 21: 16](R/W) CTRL ID associated with the RP3 UL address [ADDR]. */
        uint64_t reserved_13_15        : 3;
        uint64_t addr                  : 13; /**< [ 12:  0](R/W) RP3 UL message address field value mapped to [CTRL_ID] when [MAP_ENABLE] is set. */
#else /* Word 0 - Little Endian */
        uint64_t addr                  : 13; /**< [ 12:  0](R/W) RP3 UL message address field value mapped to [CTRL_ID] when [MAP_ENABLE] is set. */
        uint64_t reserved_13_15        : 3;
        uint64_t ctrl_id               : 6;  /**< [ 21: 16](R/W) CTRL ID associated with the RP3 UL address [ADDR]. */
        uint64_t reserved_22_23        : 2;
        uint64_t map_enable            : 1;  /**< [ 24: 24](R/W) When set, enables mapping of RP3 messages with address field value [ADDR]
                                                                 to the control identifier [CTRL_ID].
                                                                 Should be clear if such mapping is not desired. */
        uint64_t reserved_25_63        : 39;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_cprix_rp3_ul_ctrl_map0x_s cn; */
};
typedef union cavm_cprix_rp3_ul_ctrl_map0x cavm_cprix_rp3_ul_ctrl_map0x_t;

static inline uint64_t CAVM_CPRIX_RP3_UL_CTRL_MAP0X(uint64_t a, uint64_t b) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_CPRIX_RP3_UL_CTRL_MAP0X(uint64_t a, uint64_t b)
{
    if (cavm_is_model(OCTEONTX_CNF20KA) && ((a<=2) && (b<=63)))
        return 0x87e027810060ll + 0x100000ll * ((a) & 0x3) + 0x100ll * ((b) & 0x3f);
    __cavm_csr_fatal("CPRIX_RP3_UL_CTRL_MAP0X", 2, a, b, 0, 0, 0, 0);
}

#define typedef_CAVM_CPRIX_RP3_UL_CTRL_MAP0X(a,b) cavm_cprix_rp3_ul_ctrl_map0x_t
#define bustype_CAVM_CPRIX_RP3_UL_CTRL_MAP0X(a,b) CSR_TYPE_NCB
#define basename_CAVM_CPRIX_RP3_UL_CTRL_MAP0X(a,b) "CPRIX_RP3_UL_CTRL_MAP0X"
#define busnum_CAVM_CPRIX_RP3_UL_CTRL_MAP0X(a,b) (a)
#define arguments_CAVM_CPRIX_RP3_UL_CTRL_MAP0X(a,b) (a),(b),-1,-1

/**
 * Register (NCB) cpri#_rp3_ul_ctrl_map1#
 *
 * CPRI RP3 UL Control Map for CPRI MAC 1 Registers
 */
union cavm_cprix_rp3_ul_ctrl_map1x
{
    uint64_t u;
    struct cavm_cprix_rp3_ul_ctrl_map1x_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_25_63        : 39;
        uint64_t map_enable            : 1;  /**< [ 24: 24](R/W) When set, enables mapping of RP3 messages with address field value [ADDR]
                                                                 to the control identifier [CTRL_ID].
                                                                 Should be clear if such mapping is not desired. */
        uint64_t reserved_22_23        : 2;
        uint64_t ctrl_id               : 6;  /**< [ 21: 16](R/W) CTRL ID associated with the RP3 UL address [ADDR]. */
        uint64_t reserved_13_15        : 3;
        uint64_t addr                  : 13; /**< [ 12:  0](R/W) RP3 UL message address field value mapped to [CTRL_ID] when [MAP_ENABLE] is set. */
#else /* Word 0 - Little Endian */
        uint64_t addr                  : 13; /**< [ 12:  0](R/W) RP3 UL message address field value mapped to [CTRL_ID] when [MAP_ENABLE] is set. */
        uint64_t reserved_13_15        : 3;
        uint64_t ctrl_id               : 6;  /**< [ 21: 16](R/W) CTRL ID associated with the RP3 UL address [ADDR]. */
        uint64_t reserved_22_23        : 2;
        uint64_t map_enable            : 1;  /**< [ 24: 24](R/W) When set, enables mapping of RP3 messages with address field value [ADDR]
                                                                 to the control identifier [CTRL_ID].
                                                                 Should be clear if such mapping is not desired. */
        uint64_t reserved_25_63        : 39;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_cprix_rp3_ul_ctrl_map1x_s cn; */
};
typedef union cavm_cprix_rp3_ul_ctrl_map1x cavm_cprix_rp3_ul_ctrl_map1x_t;

static inline uint64_t CAVM_CPRIX_RP3_UL_CTRL_MAP1X(uint64_t a, uint64_t b) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_CPRIX_RP3_UL_CTRL_MAP1X(uint64_t a, uint64_t b)
{
    if (cavm_is_model(OCTEONTX_CNF20KA) && ((a<=2) && (b<=63)))
        return 0x87e027810068ll + 0x100000ll * ((a) & 0x3) + 0x100ll * ((b) & 0x3f);
    __cavm_csr_fatal("CPRIX_RP3_UL_CTRL_MAP1X", 2, a, b, 0, 0, 0, 0);
}

#define typedef_CAVM_CPRIX_RP3_UL_CTRL_MAP1X(a,b) cavm_cprix_rp3_ul_ctrl_map1x_t
#define bustype_CAVM_CPRIX_RP3_UL_CTRL_MAP1X(a,b) CSR_TYPE_NCB
#define basename_CAVM_CPRIX_RP3_UL_CTRL_MAP1X(a,b) "CPRIX_RP3_UL_CTRL_MAP1X"
#define busnum_CAVM_CPRIX_RP3_UL_CTRL_MAP1X(a,b) (a)
#define arguments_CAVM_CPRIX_RP3_UL_CTRL_MAP1X(a,b) (a),(b),-1,-1

/**
 * Register (NCB) cpri#_rp3_ul_ctrl_sw_cfg0#
 *
 * CPRI RP3 UL Control Switch Configuration Register
 */
union cavm_cprix_rp3_ul_ctrl_sw_cfg0x
{
    uint64_t u;
    struct cavm_cprix_rp3_ul_ctrl_sw_cfg0x_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_12_63        : 52;
        uint64_t sw_msg_axc            : 8;  /**< [ 11:  4](R/W) Switched message CTRL ID (0-255). */
        uint64_t sw_msg_dest           : 4;  /**< [  3:  0](R/W) Switched control message destination core (0-5). */
#else /* Word 0 - Little Endian */
        uint64_t sw_msg_dest           : 4;  /**< [  3:  0](R/W) Switched control message destination core (0-5). */
        uint64_t sw_msg_axc            : 8;  /**< [ 11:  4](R/W) Switched message CTRL ID (0-255). */
        uint64_t reserved_12_63        : 52;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_cprix_rp3_ul_ctrl_sw_cfg0x_s cn; */
};
typedef union cavm_cprix_rp3_ul_ctrl_sw_cfg0x cavm_cprix_rp3_ul_ctrl_sw_cfg0x_t;

static inline uint64_t CAVM_CPRIX_RP3_UL_CTRL_SW_CFG0X(uint64_t a, uint64_t b) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_CPRIX_RP3_UL_CTRL_SW_CFG0X(uint64_t a, uint64_t b)
{
    if (cavm_is_model(OCTEONTX_CNF20KA) && ((a<=2) && (b<=63)))
        return 0x87e027810028ll + 0x100000ll * ((a) & 0x3) + 0x100ll * ((b) & 0x3f);
    __cavm_csr_fatal("CPRIX_RP3_UL_CTRL_SW_CFG0X", 2, a, b, 0, 0, 0, 0);
}

#define typedef_CAVM_CPRIX_RP3_UL_CTRL_SW_CFG0X(a,b) cavm_cprix_rp3_ul_ctrl_sw_cfg0x_t
#define bustype_CAVM_CPRIX_RP3_UL_CTRL_SW_CFG0X(a,b) CSR_TYPE_NCB
#define basename_CAVM_CPRIX_RP3_UL_CTRL_SW_CFG0X(a,b) "CPRIX_RP3_UL_CTRL_SW_CFG0X"
#define busnum_CAVM_CPRIX_RP3_UL_CTRL_SW_CFG0X(a,b) (a)
#define arguments_CAVM_CPRIX_RP3_UL_CTRL_SW_CFG0X(a,b) (a),(b),-1,-1

/**
 * Register (NCB) cpri#_rp3_ul_ctrl_sw_cfg1#
 *
 * CPRI RP3 UL Control Switch Configuration Register
 */
union cavm_cprix_rp3_ul_ctrl_sw_cfg1x
{
    uint64_t u;
    struct cavm_cprix_rp3_ul_ctrl_sw_cfg1x_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_12_63        : 52;
        uint64_t sw_msg_axc            : 8;  /**< [ 11:  4](R/W) Switched message CTRL ID (0-255). */
        uint64_t sw_msg_dest           : 4;  /**< [  3:  0](R/W) Switched control message destination core (0-5). */
#else /* Word 0 - Little Endian */
        uint64_t sw_msg_dest           : 4;  /**< [  3:  0](R/W) Switched control message destination core (0-5). */
        uint64_t sw_msg_axc            : 8;  /**< [ 11:  4](R/W) Switched message CTRL ID (0-255). */
        uint64_t reserved_12_63        : 52;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_cprix_rp3_ul_ctrl_sw_cfg1x_s cn; */
};
typedef union cavm_cprix_rp3_ul_ctrl_sw_cfg1x cavm_cprix_rp3_ul_ctrl_sw_cfg1x_t;

static inline uint64_t CAVM_CPRIX_RP3_UL_CTRL_SW_CFG1X(uint64_t a, uint64_t b) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_CPRIX_RP3_UL_CTRL_SW_CFG1X(uint64_t a, uint64_t b)
{
    if (cavm_is_model(OCTEONTX_CNF20KA) && ((a<=2) && (b<=63)))
        return 0x87e027810030ll + 0x100000ll * ((a) & 0x3) + 0x100ll * ((b) & 0x3f);
    __cavm_csr_fatal("CPRIX_RP3_UL_CTRL_SW_CFG1X", 2, a, b, 0, 0, 0, 0);
}

#define typedef_CAVM_CPRIX_RP3_UL_CTRL_SW_CFG1X(a,b) cavm_cprix_rp3_ul_ctrl_sw_cfg1x_t
#define bustype_CAVM_CPRIX_RP3_UL_CTRL_SW_CFG1X(a,b) CSR_TYPE_NCB
#define basename_CAVM_CPRIX_RP3_UL_CTRL_SW_CFG1X(a,b) "CPRIX_RP3_UL_CTRL_SW_CFG1X"
#define busnum_CAVM_CPRIX_RP3_UL_CTRL_SW_CFG1X(a,b) (a)
#define arguments_CAVM_CPRIX_RP3_UL_CTRL_SW_CFG1X(a,b) (a),(b),-1,-1

/**
 * Register (NCB) cpri#_rp3_ul_int
 *
 * CPRI MHB Error Interrupt Register
 * These registers record interrupts due to Notifications sent on reception of RP3 messages
 */
union cavm_cprix_rp3_ul_int
{
    uint64_t u;
    struct cavm_cprix_rp3_ul_int_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_2_63         : 62;
        uint64_t rp3_ul_axc_msg_rdy    : 1;  /**< [  1:  1](R/W1C/H) Reserved. */
        uint64_t rp3_ul_ctrl_msg_rdy   : 1;  /**< [  0:  0](R/W1C/H) Control Message Ready Notification. */
#else /* Word 0 - Little Endian */
        uint64_t rp3_ul_ctrl_msg_rdy   : 1;  /**< [  0:  0](R/W1C/H) Control Message Ready Notification. */
        uint64_t rp3_ul_axc_msg_rdy    : 1;  /**< [  1:  1](R/W1C/H) Reserved. */
        uint64_t reserved_2_63         : 62;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_cprix_rp3_ul_int_s cn; */
};
typedef union cavm_cprix_rp3_ul_int cavm_cprix_rp3_ul_int_t;

static inline uint64_t CAVM_CPRIX_RP3_UL_INT(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_CPRIX_RP3_UL_INT(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CNF20KA) && (a<=2))
        return 0x87e027800240ll + 0x100000ll * ((a) & 0x3);
    __cavm_csr_fatal("CPRIX_RP3_UL_INT", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_CPRIX_RP3_UL_INT(a) cavm_cprix_rp3_ul_int_t
#define bustype_CAVM_CPRIX_RP3_UL_INT(a) CSR_TYPE_NCB
#define basename_CAVM_CPRIX_RP3_UL_INT(a) "CPRIX_RP3_UL_INT"
#define busnum_CAVM_CPRIX_RP3_UL_INT(a) (a)
#define arguments_CAVM_CPRIX_RP3_UL_INT(a) (a),-1,-1,-1

/**
 * Register (NCB) cpri#_rp3_ul_int_ena_w1c
 *
 * CPRI MHB Interrupt Enable Clear Register
 * This register clears interrupt enable bits.
 */
union cavm_cprix_rp3_ul_int_ena_w1c
{
    uint64_t u;
    struct cavm_cprix_rp3_ul_int_ena_w1c_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_2_63         : 62;
        uint64_t rp3_ul_axc_msg_rdy    : 1;  /**< [  1:  1](R/W1C/H) Reserved. */
        uint64_t rp3_ul_ctrl_msg_rdy   : 1;  /**< [  0:  0](R/W1C/H) Reads or clears enable for CPRI(0..2)_RP3_UL_INT[RP3_UL_CTRL_MSG_RDY]. */
#else /* Word 0 - Little Endian */
        uint64_t rp3_ul_ctrl_msg_rdy   : 1;  /**< [  0:  0](R/W1C/H) Reads or clears enable for CPRI(0..2)_RP3_UL_INT[RP3_UL_CTRL_MSG_RDY]. */
        uint64_t rp3_ul_axc_msg_rdy    : 1;  /**< [  1:  1](R/W1C/H) Reserved. */
        uint64_t reserved_2_63         : 62;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_cprix_rp3_ul_int_ena_w1c_s cn; */
};
typedef union cavm_cprix_rp3_ul_int_ena_w1c cavm_cprix_rp3_ul_int_ena_w1c_t;

static inline uint64_t CAVM_CPRIX_RP3_UL_INT_ENA_W1C(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_CPRIX_RP3_UL_INT_ENA_W1C(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CNF20KA) && (a<=2))
        return 0x87e027800250ll + 0x100000ll * ((a) & 0x3);
    __cavm_csr_fatal("CPRIX_RP3_UL_INT_ENA_W1C", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_CPRIX_RP3_UL_INT_ENA_W1C(a) cavm_cprix_rp3_ul_int_ena_w1c_t
#define bustype_CAVM_CPRIX_RP3_UL_INT_ENA_W1C(a) CSR_TYPE_NCB
#define basename_CAVM_CPRIX_RP3_UL_INT_ENA_W1C(a) "CPRIX_RP3_UL_INT_ENA_W1C"
#define busnum_CAVM_CPRIX_RP3_UL_INT_ENA_W1C(a) (a)
#define arguments_CAVM_CPRIX_RP3_UL_INT_ENA_W1C(a) (a),-1,-1,-1

/**
 * Register (NCB) cpri#_rp3_ul_int_ena_w1s
 *
 * CPRI MHB Interrupt Enable Set Register
 * This register sets interrupt enable bits.
 */
union cavm_cprix_rp3_ul_int_ena_w1s
{
    uint64_t u;
    struct cavm_cprix_rp3_ul_int_ena_w1s_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_2_63         : 62;
        uint64_t rp3_ul_axc_msg_rdy    : 1;  /**< [  1:  1](R/W1S/H) Reserved. */
        uint64_t rp3_ul_ctrl_msg_rdy   : 1;  /**< [  0:  0](R/W1S/H) Reads or sets enable for CPRI(0..2)_RP3_UL_INT[RP3_UL_CTRL_MSG_RDY]. */
#else /* Word 0 - Little Endian */
        uint64_t rp3_ul_ctrl_msg_rdy   : 1;  /**< [  0:  0](R/W1S/H) Reads or sets enable for CPRI(0..2)_RP3_UL_INT[RP3_UL_CTRL_MSG_RDY]. */
        uint64_t rp3_ul_axc_msg_rdy    : 1;  /**< [  1:  1](R/W1S/H) Reserved. */
        uint64_t reserved_2_63         : 62;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_cprix_rp3_ul_int_ena_w1s_s cn; */
};
typedef union cavm_cprix_rp3_ul_int_ena_w1s cavm_cprix_rp3_ul_int_ena_w1s_t;

static inline uint64_t CAVM_CPRIX_RP3_UL_INT_ENA_W1S(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_CPRIX_RP3_UL_INT_ENA_W1S(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CNF20KA) && (a<=2))
        return 0x87e027800248ll + 0x100000ll * ((a) & 0x3);
    __cavm_csr_fatal("CPRIX_RP3_UL_INT_ENA_W1S", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_CPRIX_RP3_UL_INT_ENA_W1S(a) cavm_cprix_rp3_ul_int_ena_w1s_t
#define bustype_CAVM_CPRIX_RP3_UL_INT_ENA_W1S(a) CSR_TYPE_NCB
#define basename_CAVM_CPRIX_RP3_UL_INT_ENA_W1S(a) "CPRIX_RP3_UL_INT_ENA_W1S"
#define busnum_CAVM_CPRIX_RP3_UL_INT_ENA_W1S(a) (a)
#define arguments_CAVM_CPRIX_RP3_UL_INT_ENA_W1S(a) (a),-1,-1,-1

/**
 * Register (NCB) cpri#_rp3_ul_int_psm_msg_w0
 *
 * CPRI RP3_UL Notification Interrupt Message w0  Register
 * JCA word 0 message to send interrupt notification for receiving RP3 messages.
 */
union cavm_cprix_rp3_ul_int_psm_msg_w0
{
    uint64_t u;
    struct cavm_cprix_rp3_ul_int_psm_msg_w0_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t w0                    : 64; /**< [ 63:  0](R/W) Word 0 of JCA message. */
#else /* Word 0 - Little Endian */
        uint64_t w0                    : 64; /**< [ 63:  0](R/W) Word 0 of JCA message. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_cprix_rp3_ul_int_psm_msg_w0_s cn; */
};
typedef union cavm_cprix_rp3_ul_int_psm_msg_w0 cavm_cprix_rp3_ul_int_psm_msg_w0_t;

static inline uint64_t CAVM_CPRIX_RP3_UL_INT_PSM_MSG_W0(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_CPRIX_RP3_UL_INT_PSM_MSG_W0(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CNF20KA) && (a<=2))
        return 0x87e027800260ll + 0x100000ll * ((a) & 0x3);
    __cavm_csr_fatal("CPRIX_RP3_UL_INT_PSM_MSG_W0", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_CPRIX_RP3_UL_INT_PSM_MSG_W0(a) cavm_cprix_rp3_ul_int_psm_msg_w0_t
#define bustype_CAVM_CPRIX_RP3_UL_INT_PSM_MSG_W0(a) CSR_TYPE_NCB
#define basename_CAVM_CPRIX_RP3_UL_INT_PSM_MSG_W0(a) "CPRIX_RP3_UL_INT_PSM_MSG_W0"
#define busnum_CAVM_CPRIX_RP3_UL_INT_PSM_MSG_W0(a) (a)
#define arguments_CAVM_CPRIX_RP3_UL_INT_PSM_MSG_W0(a) (a),-1,-1,-1

/**
 * Register (NCB) cpri#_rp3_ul_int_psm_msg_w1
 *
 * CPRI RP3_UL Notification Interrupt Message w1 Register
 * JCA word 1 message to send interrupt notification for receiving RP3 messages.
 */
union cavm_cprix_rp3_ul_int_psm_msg_w1
{
    uint64_t u;
    struct cavm_cprix_rp3_ul_int_psm_msg_w1_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t w1                    : 64; /**< [ 63:  0](R/W) Word 1 of JCA message. */
#else /* Word 0 - Little Endian */
        uint64_t w1                    : 64; /**< [ 63:  0](R/W) Word 1 of JCA message. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_cprix_rp3_ul_int_psm_msg_w1_s cn; */
};
typedef union cavm_cprix_rp3_ul_int_psm_msg_w1 cavm_cprix_rp3_ul_int_psm_msg_w1_t;

static inline uint64_t CAVM_CPRIX_RP3_UL_INT_PSM_MSG_W1(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_CPRIX_RP3_UL_INT_PSM_MSG_W1(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CNF20KA) && (a<=2))
        return 0x87e027800268ll + 0x100000ll * ((a) & 0x3);
    __cavm_csr_fatal("CPRIX_RP3_UL_INT_PSM_MSG_W1", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_CPRIX_RP3_UL_INT_PSM_MSG_W1(a) cavm_cprix_rp3_ul_int_psm_msg_w1_t
#define bustype_CAVM_CPRIX_RP3_UL_INT_PSM_MSG_W1(a) CSR_TYPE_NCB
#define basename_CAVM_CPRIX_RP3_UL_INT_PSM_MSG_W1(a) "CPRIX_RP3_UL_INT_PSM_MSG_W1"
#define busnum_CAVM_CPRIX_RP3_UL_INT_PSM_MSG_W1(a) (a)
#define arguments_CAVM_CPRIX_RP3_UL_INT_PSM_MSG_W1(a) (a),-1,-1,-1

/**
 * Register (NCB) cpri#_rp3_ul_int_w1s
 *
 * CPRI MHB Interrupt Set Register
 * This register sets interrupt bits.
 */
union cavm_cprix_rp3_ul_int_w1s
{
    uint64_t u;
    struct cavm_cprix_rp3_ul_int_w1s_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_2_63         : 62;
        uint64_t rp3_ul_axc_msg_rdy    : 1;  /**< [  1:  1](R/W1S/H) Reserved. */
        uint64_t rp3_ul_ctrl_msg_rdy   : 1;  /**< [  0:  0](R/W1S/H) Reads or sets CPRI(0..2)_RP3_UL_INT[RP3_UL_CTRL_MSG_RDY]. */
#else /* Word 0 - Little Endian */
        uint64_t rp3_ul_ctrl_msg_rdy   : 1;  /**< [  0:  0](R/W1S/H) Reads or sets CPRI(0..2)_RP3_UL_INT[RP3_UL_CTRL_MSG_RDY]. */
        uint64_t rp3_ul_axc_msg_rdy    : 1;  /**< [  1:  1](R/W1S/H) Reserved. */
        uint64_t reserved_2_63         : 62;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_cprix_rp3_ul_int_w1s_s cn; */
};
typedef union cavm_cprix_rp3_ul_int_w1s cavm_cprix_rp3_ul_int_w1s_t;

static inline uint64_t CAVM_CPRIX_RP3_UL_INT_W1S(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_CPRIX_RP3_UL_INT_W1S(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CNF20KA) && (a<=2))
        return 0x87e027800258ll + 0x100000ll * ((a) & 0x3);
    __cavm_csr_fatal("CPRIX_RP3_UL_INT_W1S", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_CPRIX_RP3_UL_INT_W1S(a) cavm_cprix_rp3_ul_int_w1s_t
#define bustype_CAVM_CPRIX_RP3_UL_INT_W1S(a) CSR_TYPE_NCB
#define basename_CAVM_CPRIX_RP3_UL_INT_W1S(a) "CPRIX_RP3_UL_INT_W1S"
#define busnum_CAVM_CPRIX_RP3_UL_INT_W1S(a) (a)
#define arguments_CAVM_CPRIX_RP3_UL_INT_W1S(a) (a),-1,-1,-1

/**
 * Register (NCB) cpri#_rp3_ul_ja_params_axc#
 *
 * CPRI RP3 UL PSM AXC Job Addition word 0 Register
 */
union cavm_cprix_rp3_ul_ja_params_axcx
{
    uint64_t u;
    struct cavm_cprix_rp3_ul_ja_params_axcx_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t w0                    : 64; /**< [ 63:  0](R/W) The PSM command word 0. See PSM_CMD_* structure definitions.  Note the word
                                                                 1 is derived from the CPRI()_RP3_UL_AXC_JD_BS_CFG(),
                                                                 CPRI()_RP3_UL_AXC_JD_BA_CFG() and CPRI()_RP3_UL_AXC_JD_CFG() registers. */
#else /* Word 0 - Little Endian */
        uint64_t w0                    : 64; /**< [ 63:  0](R/W) The PSM command word 0. See PSM_CMD_* structure definitions.  Note the word
                                                                 1 is derived from the CPRI()_RP3_UL_AXC_JD_BS_CFG(),
                                                                 CPRI()_RP3_UL_AXC_JD_BA_CFG() and CPRI()_RP3_UL_AXC_JD_CFG() registers. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_cprix_rp3_ul_ja_params_axcx_s cn; */
};
typedef union cavm_cprix_rp3_ul_ja_params_axcx cavm_cprix_rp3_ul_ja_params_axcx_t;

static inline uint64_t CAVM_CPRIX_RP3_UL_JA_PARAMS_AXCX(uint64_t a, uint64_t b) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_CPRIX_RP3_UL_JA_PARAMS_AXCX(uint64_t a, uint64_t b)
{
    if (cavm_is_model(OCTEONTX_CNF20KA) && ((a<=2) && (b<=255)))
        return 0x87e027810078ll + 0x100000ll * ((a) & 0x3) + 0x100ll * ((b) & 0xff);
    __cavm_csr_fatal("CPRIX_RP3_UL_JA_PARAMS_AXCX", 2, a, b, 0, 0, 0, 0);
}

#define typedef_CAVM_CPRIX_RP3_UL_JA_PARAMS_AXCX(a,b) cavm_cprix_rp3_ul_ja_params_axcx_t
#define bustype_CAVM_CPRIX_RP3_UL_JA_PARAMS_AXCX(a,b) CSR_TYPE_NCB
#define basename_CAVM_CPRIX_RP3_UL_JA_PARAMS_AXCX(a,b) "CPRIX_RP3_UL_JA_PARAMS_AXCX"
#define busnum_CAVM_CPRIX_RP3_UL_JA_PARAMS_AXCX(a,b) (a)
#define arguments_CAVM_CPRIX_RP3_UL_JA_PARAMS_AXCX(a,b) (a),(b),-1,-1

/**
 * Register (NCB) cpri#_rp3_ul_ja_params_ctrl
 *
 * CPRI RP3 UL PSM CRTL Job Addition word 0 Register
 */
union cavm_cprix_rp3_ul_ja_params_ctrl
{
    uint64_t u;
    struct cavm_cprix_rp3_ul_ja_params_ctrl_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t w0                    : 64; /**< [ 63:  0](R/W) The PSM command word 0. See PSM_CMD_* structure definitions.  Note the word
                                                                 1 is derived from the CPRI()_RP3_UL_CTRL_JD_BS_CFG,
                                                                 CPRI()_RP3_UL_CTRL_JD_BA_CFG and CPRI()_RP3_UL_CTRL_JD_CFG registers. */
#else /* Word 0 - Little Endian */
        uint64_t w0                    : 64; /**< [ 63:  0](R/W) The PSM command word 0. See PSM_CMD_* structure definitions.  Note the word
                                                                 1 is derived from the CPRI()_RP3_UL_CTRL_JD_BS_CFG,
                                                                 CPRI()_RP3_UL_CTRL_JD_BA_CFG and CPRI()_RP3_UL_CTRL_JD_CFG registers. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_cprix_rp3_ul_ja_params_ctrl_s cn; */
};
typedef union cavm_cprix_rp3_ul_ja_params_ctrl cavm_cprix_rp3_ul_ja_params_ctrl_t;

static inline uint64_t CAVM_CPRIX_RP3_UL_JA_PARAMS_CTRL(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_CPRIX_RP3_UL_JA_PARAMS_CTRL(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CNF20KA) && (a<=2))
        return 0x87e027810070ll + 0x100000ll * ((a) & 0x3);
    __cavm_csr_fatal("CPRIX_RP3_UL_JA_PARAMS_CTRL", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_CPRIX_RP3_UL_JA_PARAMS_CTRL(a) cavm_cprix_rp3_ul_ja_params_ctrl_t
#define bustype_CAVM_CPRIX_RP3_UL_JA_PARAMS_CTRL(a) CSR_TYPE_NCB
#define basename_CAVM_CPRIX_RP3_UL_JA_PARAMS_CTRL(a) "CPRIX_RP3_UL_JA_PARAMS_CTRL"
#define busnum_CAVM_CPRIX_RP3_UL_JA_PARAMS_CTRL(a) (a)
#define arguments_CAVM_CPRIX_RP3_UL_JA_PARAMS_CTRL(a) (a),-1,-1,-1

/**
 * Register (NCB) cpri#_rp3_ul_type_lut
 *
 * CPRI RP3 UL Type Lookup Table Register
 */
union cavm_cprix_rp3_ul_type_lut
{
    uint64_t u;
    struct cavm_cprix_rp3_ul_type_lut_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_32_63        : 32;
        uint64_t lut                   : 32; /**< [ 31:  0](R/W) RP3 message type lookup table. The Type field value of an incoming UL RP3
                                                                 message is used as a bit index to this field. The selected bit specifies
                                                                 the message type:
                                                                 0 = Control message.
                                                                 1 = AxC data message. */
#else /* Word 0 - Little Endian */
        uint64_t lut                   : 32; /**< [ 31:  0](R/W) RP3 message type lookup table. The Type field value of an incoming UL RP3
                                                                 message is used as a bit index to this field. The selected bit specifies
                                                                 the message type:
                                                                 0 = Control message.
                                                                 1 = AxC data message. */
        uint64_t reserved_32_63        : 32;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_cprix_rp3_ul_type_lut_s cn; */
};
typedef union cavm_cprix_rp3_ul_type_lut cavm_cprix_rp3_ul_type_lut_t;

static inline uint64_t CAVM_CPRIX_RP3_UL_TYPE_LUT(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_CPRIX_RP3_UL_TYPE_LUT(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CNF20KA) && (a<=2))
        return 0x87e027820018ll + 0x100000ll * ((a) & 0x3);
    __cavm_csr_fatal("CPRIX_RP3_UL_TYPE_LUT", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_CPRIX_RP3_UL_TYPE_LUT(a) cavm_cprix_rp3_ul_type_lut_t
#define bustype_CAVM_CPRIX_RP3_UL_TYPE_LUT(a) CSR_TYPE_NCB
#define basename_CAVM_CPRIX_RP3_UL_TYPE_LUT(a) "CPRIX_RP3_UL_TYPE_LUT"
#define busnum_CAVM_CPRIX_RP3_UL_TYPE_LUT(a) (a)
#define arguments_CAVM_CPRIX_RP3_UL_TYPE_LUT(a) (a),-1,-1,-1

/**
 * Register (NCB) cpri#_rxd_gmii_ul_cbuf_cfg1
 *
 * CPRI GMII UL Circular Buffer Configuration Register 1
 */
union cavm_cprix_rxd_gmii_ul_cbuf_cfg1
{
    uint64_t u;
    struct cavm_cprix_rxd_gmii_ul_cbuf_cfg1_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t buf_enable            : 1;  /**< [ 63: 63](R/W) Enables DMA of Ethernet packets to the circular buffer. When written
                                                                 to zero, it also resets the RXDMA logic for GMII and associated registers. */
        uint64_t reserved_32_62        : 31;
        uint64_t ul_cbuf_size          : 16; /**< [ 31: 16](R/W) Size of the GMII UL Circular Buffer in 128 bit entries. The size has to be a
                                                                 multiple of 104 (1664/16). */
        uint64_t reserved_8_15         : 8;
        uint64_t ul_int_pkt_threshold  : 8;  /**< [  7:  0](R/W) Threshold on when to send interrupt based on number of packets written. */
#else /* Word 0 - Little Endian */
        uint64_t ul_int_pkt_threshold  : 8;  /**< [  7:  0](R/W) Threshold on when to send interrupt based on number of packets written. */
        uint64_t reserved_8_15         : 8;
        uint64_t ul_cbuf_size          : 16; /**< [ 31: 16](R/W) Size of the GMII UL Circular Buffer in 128 bit entries. The size has to be a
                                                                 multiple of 104 (1664/16). */
        uint64_t reserved_32_62        : 31;
        uint64_t buf_enable            : 1;  /**< [ 63: 63](R/W) Enables DMA of Ethernet packets to the circular buffer. When written
                                                                 to zero, it also resets the RXDMA logic for GMII and associated registers. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_cprix_rxd_gmii_ul_cbuf_cfg1_s cn; */
};
typedef union cavm_cprix_rxd_gmii_ul_cbuf_cfg1 cavm_cprix_rxd_gmii_ul_cbuf_cfg1_t;

static inline uint64_t CAVM_CPRIX_RXD_GMII_UL_CBUF_CFG1(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_CPRIX_RXD_GMII_UL_CBUF_CFG1(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CNF20KA) && (a<=2))
        return 0x87e027801000ll + 0x100000ll * ((a) & 0x3);
    __cavm_csr_fatal("CPRIX_RXD_GMII_UL_CBUF_CFG1", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_CPRIX_RXD_GMII_UL_CBUF_CFG1(a) cavm_cprix_rxd_gmii_ul_cbuf_cfg1_t
#define bustype_CAVM_CPRIX_RXD_GMII_UL_CBUF_CFG1(a) CSR_TYPE_NCB
#define basename_CAVM_CPRIX_RXD_GMII_UL_CBUF_CFG1(a) "CPRIX_RXD_GMII_UL_CBUF_CFG1"
#define busnum_CAVM_CPRIX_RXD_GMII_UL_CBUF_CFG1(a) (a)
#define arguments_CAVM_CPRIX_RXD_GMII_UL_CBUF_CFG1(a) (a),-1,-1,-1

/**
 * Register (NCB) cpri#_rxd_gmii_ul_cbuf_cfg2
 *
 * CPRI GMII UL Circular Buffer Configuration Register 2
 */
union cavm_cprix_rxd_gmii_ul_cbuf_cfg2
{
    uint64_t u;
    struct cavm_cprix_rxd_gmii_ul_cbuf_cfg2_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t target_mem            : 1;  /**< [ 63: 63](R/W) Specifies the target memory for the address.
                                                                 0 = SMEM.
                                                                 1 = LLC/DRAM. */
        uint64_t reserved_62           : 1;
        uint64_t cmd_type              : 2;  /**< [ 61: 60](R/W) Command type for LLC/DRAM writes. The write operations are
                                                                 enumerated by MHBW_PNB_WR_CMD_E. */
        uint64_t reserved_59           : 1;
        uint64_t dswap                 : 3;  /**< [ 58: 56](R/W) The byte swap mode for DMA to LLC/DRAM. Enumerated in MHBW_PNB_DSWAP_E.
                                                                 DMA to BPHY SMEM ignores this field. */
        uint64_t gmid                  : 3;  /**< [ 55: 53](R/W) Guest Machine ID. */
        uint64_t cbuf_ptr              : 53; /**< [ 52:  0](R/W) GMII UL circular buffer base address (byte address). This should be 256 bit
                                                                 aligned address for SMEM; and 256 byte aligned address for DRAM/LLC. */
#else /* Word 0 - Little Endian */
        uint64_t cbuf_ptr              : 53; /**< [ 52:  0](R/W) GMII UL circular buffer base address (byte address). This should be 256 bit
                                                                 aligned address for SMEM; and 256 byte aligned address for DRAM/LLC. */
        uint64_t gmid                  : 3;  /**< [ 55: 53](R/W) Guest Machine ID. */
        uint64_t dswap                 : 3;  /**< [ 58: 56](R/W) The byte swap mode for DMA to LLC/DRAM. Enumerated in MHBW_PNB_DSWAP_E.
                                                                 DMA to BPHY SMEM ignores this field. */
        uint64_t reserved_59           : 1;
        uint64_t cmd_type              : 2;  /**< [ 61: 60](R/W) Command type for LLC/DRAM writes. The write operations are
                                                                 enumerated by MHBW_PNB_WR_CMD_E. */
        uint64_t reserved_62           : 1;
        uint64_t target_mem            : 1;  /**< [ 63: 63](R/W) Specifies the target memory for the address.
                                                                 0 = SMEM.
                                                                 1 = LLC/DRAM. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_cprix_rxd_gmii_ul_cbuf_cfg2_s cn; */
};
typedef union cavm_cprix_rxd_gmii_ul_cbuf_cfg2 cavm_cprix_rxd_gmii_ul_cbuf_cfg2_t;

static inline uint64_t CAVM_CPRIX_RXD_GMII_UL_CBUF_CFG2(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_CPRIX_RXD_GMII_UL_CBUF_CFG2(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CNF20KA) && (a<=2))
        return 0x87e027801008ll + 0x100000ll * ((a) & 0x3);
    __cavm_csr_fatal("CPRIX_RXD_GMII_UL_CBUF_CFG2", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_CPRIX_RXD_GMII_UL_CBUF_CFG2(a) cavm_cprix_rxd_gmii_ul_cbuf_cfg2_t
#define bustype_CAVM_CPRIX_RXD_GMII_UL_CBUF_CFG2(a) CSR_TYPE_NCB
#define basename_CAVM_CPRIX_RXD_GMII_UL_CBUF_CFG2(a) "CPRIX_RXD_GMII_UL_CBUF_CFG2"
#define busnum_CAVM_CPRIX_RXD_GMII_UL_CBUF_CFG2(a) (a)
#define arguments_CAVM_CPRIX_RXD_GMII_UL_CBUF_CFG2(a) (a),-1,-1,-1

/**
 * Register (NCB) cpri#_rxd_gmii_ul_nxt_wr_ptr
 *
 * CPRI GMII UL CIRCULAR BUFFER NEXT WRITE POINTER Register
 */
union cavm_cprix_rxd_gmii_ul_nxt_wr_ptr
{
    uint64_t u;
    struct cavm_cprix_rxd_gmii_ul_nxt_wr_ptr_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_16_63        : 48;
        uint64_t nxt_wr_ptr            : 16; /**< [ 15:  0](RO/H) Circular Buffer next write pointer. 1 unit per 16 bytes. It always points to the
                                                                 start of WQE and increments by 0x68 per packet. */
#else /* Word 0 - Little Endian */
        uint64_t nxt_wr_ptr            : 16; /**< [ 15:  0](RO/H) Circular Buffer next write pointer. 1 unit per 16 bytes. It always points to the
                                                                 start of WQE and increments by 0x68 per packet. */
        uint64_t reserved_16_63        : 48;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_cprix_rxd_gmii_ul_nxt_wr_ptr_s cn; */
};
typedef union cavm_cprix_rxd_gmii_ul_nxt_wr_ptr cavm_cprix_rxd_gmii_ul_nxt_wr_ptr_t;

static inline uint64_t CAVM_CPRIX_RXD_GMII_UL_NXT_WR_PTR(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_CPRIX_RXD_GMII_UL_NXT_WR_PTR(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CNF20KA) && (a<=2))
        return 0x87e027801020ll + 0x100000ll * ((a) & 0x3);
    __cavm_csr_fatal("CPRIX_RXD_GMII_UL_NXT_WR_PTR", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_CPRIX_RXD_GMII_UL_NXT_WR_PTR(a) cavm_cprix_rxd_gmii_ul_nxt_wr_ptr_t
#define bustype_CAVM_CPRIX_RXD_GMII_UL_NXT_WR_PTR(a) CSR_TYPE_NCB
#define basename_CAVM_CPRIX_RXD_GMII_UL_NXT_WR_PTR(a) "CPRIX_RXD_GMII_UL_NXT_WR_PTR"
#define busnum_CAVM_CPRIX_RXD_GMII_UL_NXT_WR_PTR(a) (a)
#define arguments_CAVM_CPRIX_RXD_GMII_UL_NXT_WR_PTR(a) (a),-1,-1,-1

/**
 * Register (NCB) cpri#_rxd_gmii_ul_pkt_count
 *
 * CPRI GMII UL CIRCULAR BUFFER PACKET COUNT Register
 */
union cavm_cprix_rxd_gmii_ul_pkt_count
{
    uint64_t u;
    struct cavm_cprix_rxd_gmii_ul_pkt_count_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_8_63         : 56;
        uint64_t pkt_count             : 8;  /**< [  7:  0](RO/H) Count of packets to track sending of Interrupt. The entry is cleared when the interrupt is sent. */
#else /* Word 0 - Little Endian */
        uint64_t pkt_count             : 8;  /**< [  7:  0](RO/H) Count of packets to track sending of Interrupt. The entry is cleared when the interrupt is sent. */
        uint64_t reserved_8_63         : 56;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_cprix_rxd_gmii_ul_pkt_count_s cn; */
};
typedef union cavm_cprix_rxd_gmii_ul_pkt_count cavm_cprix_rxd_gmii_ul_pkt_count_t;

static inline uint64_t CAVM_CPRIX_RXD_GMII_UL_PKT_COUNT(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_CPRIX_RXD_GMII_UL_PKT_COUNT(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CNF20KA) && (a<=2))
        return 0x87e027801028ll + 0x100000ll * ((a) & 0x3);
    __cavm_csr_fatal("CPRIX_RXD_GMII_UL_PKT_COUNT", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_CPRIX_RXD_GMII_UL_PKT_COUNT(a) cavm_cprix_rxd_gmii_ul_pkt_count_t
#define bustype_CAVM_CPRIX_RXD_GMII_UL_PKT_COUNT(a) CSR_TYPE_NCB
#define basename_CAVM_CPRIX_RXD_GMII_UL_PKT_COUNT(a) "CPRIX_RXD_GMII_UL_PKT_COUNT"
#define busnum_CAVM_CPRIX_RXD_GMII_UL_PKT_COUNT(a) (a)
#define arguments_CAVM_CPRIX_RXD_GMII_UL_PKT_COUNT(a) (a),-1,-1,-1

/**
 * Register (NCB) cpri#_rxd_gmii_ul_rd_doorbell
 *
 * CPRI GMII UL CBUF SOFTWARE READ DOORBELL Register
 */
union cavm_cprix_rxd_gmii_ul_rd_doorbell
{
    uint64_t u;
    struct cavm_cprix_rxd_gmii_ul_rd_doorbell_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_8_63         : 56;
        uint64_t sw_rd_doorbell        : 8;  /**< [  7:  0](R/W/H) Written by software to indicate the number of packets read from the circular
                                                                 buffer. The register is automatically cleared after the software read pointer
                                                                 has been updated. */
#else /* Word 0 - Little Endian */
        uint64_t sw_rd_doorbell        : 8;  /**< [  7:  0](R/W/H) Written by software to indicate the number of packets read from the circular
                                                                 buffer. The register is automatically cleared after the software read pointer
                                                                 has been updated. */
        uint64_t reserved_8_63         : 56;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_cprix_rxd_gmii_ul_rd_doorbell_s cn; */
};
typedef union cavm_cprix_rxd_gmii_ul_rd_doorbell cavm_cprix_rxd_gmii_ul_rd_doorbell_t;

static inline uint64_t CAVM_CPRIX_RXD_GMII_UL_RD_DOORBELL(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_CPRIX_RXD_GMII_UL_RD_DOORBELL(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CNF20KA) && (a<=2))
        return 0x87e027801010ll + 0x100000ll * ((a) & 0x3);
    __cavm_csr_fatal("CPRIX_RXD_GMII_UL_RD_DOORBELL", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_CPRIX_RXD_GMII_UL_RD_DOORBELL(a) cavm_cprix_rxd_gmii_ul_rd_doorbell_t
#define bustype_CAVM_CPRIX_RXD_GMII_UL_RD_DOORBELL(a) CSR_TYPE_NCB
#define basename_CAVM_CPRIX_RXD_GMII_UL_RD_DOORBELL(a) "CPRIX_RXD_GMII_UL_RD_DOORBELL"
#define busnum_CAVM_CPRIX_RXD_GMII_UL_RD_DOORBELL(a) (a)
#define arguments_CAVM_CPRIX_RXD_GMII_UL_RD_DOORBELL(a) (a),-1,-1,-1

/**
 * Register (NCB) cpri#_rxd_gmii_ul_sw_rd_ptr
 *
 * CPRI GMII UL CBUF SOFTWARE READ POINTER Register
 */
union cavm_cprix_rxd_gmii_ul_sw_rd_ptr
{
    uint64_t u;
    struct cavm_cprix_rxd_gmii_ul_sw_rd_ptr_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_16_63        : 48;
        uint64_t sw_rd_ptr             : 16; /**< [ 15:  0](RO/H) Software read pointer. 1 unit per 16 bytes. It always points to the start of
                                                                 Payload and increments by 0x68 per packet. */
#else /* Word 0 - Little Endian */
        uint64_t sw_rd_ptr             : 16; /**< [ 15:  0](RO/H) Software read pointer. 1 unit per 16 bytes. It always points to the start of
                                                                 Payload and increments by 0x68 per packet. */
        uint64_t reserved_16_63        : 48;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_cprix_rxd_gmii_ul_sw_rd_ptr_s cn; */
};
typedef union cavm_cprix_rxd_gmii_ul_sw_rd_ptr cavm_cprix_rxd_gmii_ul_sw_rd_ptr_t;

static inline uint64_t CAVM_CPRIX_RXD_GMII_UL_SW_RD_PTR(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_CPRIX_RXD_GMII_UL_SW_RD_PTR(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CNF20KA) && (a<=2))
        return 0x87e027801018ll + 0x100000ll * ((a) & 0x3);
    __cavm_csr_fatal("CPRIX_RXD_GMII_UL_SW_RD_PTR", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_CPRIX_RXD_GMII_UL_SW_RD_PTR(a) cavm_cprix_rxd_gmii_ul_sw_rd_ptr_t
#define bustype_CAVM_CPRIX_RXD_GMII_UL_SW_RD_PTR(a) CSR_TYPE_NCB
#define basename_CAVM_CPRIX_RXD_GMII_UL_SW_RD_PTR(a) "CPRIX_RXD_GMII_UL_SW_RD_PTR"
#define busnum_CAVM_CPRIX_RXD_GMII_UL_SW_RD_PTR(a) (a)
#define arguments_CAVM_CPRIX_RXD_GMII_UL_SW_RD_PTR(a) (a),-1,-1,-1

/**
 * Register (NCB) cpri#_status
 *
 * CPRI Status Register
 */
union cavm_cprix_status
{
    uint64_t u;
    struct cavm_cprix_status_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_7_63         : 57;
        uint64_t psm_idle              : 1;  /**< [  6:  6](RO/H) When set, this indicates there are no PSM transactions outstanding. */
        uint64_t reserved_5            : 1;
        uint64_t rp3_ul_idle           : 1;  /**< [  4:  4](RO/H) When set, this indicates there are no RP3 UL messages are being processed or stored */
        uint64_t ugmii_idle            : 1;  /**< [  3:  3](RO/H) When set, this indicates there are no UL GMII packets being processed or stored */
        uint64_t dgmii_idle            : 1;  /**< [  2:  2](RO/H) When set, this indicates there are no DL GMII packets being processed or stored */
        uint64_t rxdma_idle            : 1;  /**< [  1:  1](RO/H) When set, this indicates there are no pending write responses and there are no
                                                                 pending RP3 or GMII write requests. */
        uint64_t txdma_idle            : 1;  /**< [  0:  0](RO/H) When set, this indicates there are no pending read responses and there are no
                                                                 pending RP3 or GMII read requests. */
#else /* Word 0 - Little Endian */
        uint64_t txdma_idle            : 1;  /**< [  0:  0](RO/H) When set, this indicates there are no pending read responses and there are no
                                                                 pending RP3 or GMII read requests. */
        uint64_t rxdma_idle            : 1;  /**< [  1:  1](RO/H) When set, this indicates there are no pending write responses and there are no
                                                                 pending RP3 or GMII write requests. */
        uint64_t dgmii_idle            : 1;  /**< [  2:  2](RO/H) When set, this indicates there are no DL GMII packets being processed or stored */
        uint64_t ugmii_idle            : 1;  /**< [  3:  3](RO/H) When set, this indicates there are no UL GMII packets being processed or stored */
        uint64_t rp3_ul_idle           : 1;  /**< [  4:  4](RO/H) When set, this indicates there are no RP3 UL messages are being processed or stored */
        uint64_t reserved_5            : 1;
        uint64_t psm_idle              : 1;  /**< [  6:  6](RO/H) When set, this indicates there are no PSM transactions outstanding. */
        uint64_t reserved_7_63         : 57;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_cprix_status_s cn; */
};
typedef union cavm_cprix_status cavm_cprix_status_t;

static inline uint64_t CAVM_CPRIX_STATUS(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_CPRIX_STATUS(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CNF20KA) && (a<=2))
        return 0x87e027800020ll + 0x100000ll * ((a) & 0x3);
    __cavm_csr_fatal("CPRIX_STATUS", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_CPRIX_STATUS(a) cavm_cprix_status_t
#define bustype_CAVM_CPRIX_STATUS(a) CSR_TYPE_NCB
#define basename_CAVM_CPRIX_STATUS(a) "CPRIX_STATUS"
#define busnum_CAVM_CPRIX_STATUS(a) (a)
#define arguments_CAVM_CPRIX_STATUS(a) (a),-1,-1,-1

/**
 * Register (NCB) cpri#_txd_gmii_dl_cbuf_cfg1
 *
 * CPRI GMII DL Circular Buffer Configuration Register 1
 */
union cavm_cprix_txd_gmii_dl_cbuf_cfg1
{
    uint64_t u;
    struct cavm_cprix_txd_gmii_dl_cbuf_cfg1_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t buf_enable            : 1;  /**< [ 63: 63](R/W) Enables DMA of Ethernet packets to the circular buffer. When written
                                                                 to zero, it also resets the TXDMA logic for GMII and associated registers. */
        uint64_t reserved_32_62        : 31;
        uint64_t dl_cbuf_size          : 16; /**< [ 31: 16](R/W) Size of the GMII DL Circular Buffer in 128 bit entries.  The size has to be a
                                                                 multiple of 104 (1664/16). */
        uint64_t reserved_0_15         : 16;
#else /* Word 0 - Little Endian */
        uint64_t reserved_0_15         : 16;
        uint64_t dl_cbuf_size          : 16; /**< [ 31: 16](R/W) Size of the GMII DL Circular Buffer in 128 bit entries.  The size has to be a
                                                                 multiple of 104 (1664/16). */
        uint64_t reserved_32_62        : 31;
        uint64_t buf_enable            : 1;  /**< [ 63: 63](R/W) Enables DMA of Ethernet packets to the circular buffer. When written
                                                                 to zero, it also resets the TXDMA logic for GMII and associated registers. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_cprix_txd_gmii_dl_cbuf_cfg1_s cn; */
};
typedef union cavm_cprix_txd_gmii_dl_cbuf_cfg1 cavm_cprix_txd_gmii_dl_cbuf_cfg1_t;

static inline uint64_t CAVM_CPRIX_TXD_GMII_DL_CBUF_CFG1(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_CPRIX_TXD_GMII_DL_CBUF_CFG1(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CNF20KA) && (a<=2))
        return 0x87e027801100ll + 0x100000ll * ((a) & 0x3);
    __cavm_csr_fatal("CPRIX_TXD_GMII_DL_CBUF_CFG1", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_CPRIX_TXD_GMII_DL_CBUF_CFG1(a) cavm_cprix_txd_gmii_dl_cbuf_cfg1_t
#define bustype_CAVM_CPRIX_TXD_GMII_DL_CBUF_CFG1(a) CSR_TYPE_NCB
#define basename_CAVM_CPRIX_TXD_GMII_DL_CBUF_CFG1(a) "CPRIX_TXD_GMII_DL_CBUF_CFG1"
#define busnum_CAVM_CPRIX_TXD_GMII_DL_CBUF_CFG1(a) (a)
#define arguments_CAVM_CPRIX_TXD_GMII_DL_CBUF_CFG1(a) (a),-1,-1,-1

/**
 * Register (NCB) cpri#_txd_gmii_dl_cbuf_cfg2
 *
 * CPRI GMII DL Circular Buffer Configuration Register 2
 */
union cavm_cprix_txd_gmii_dl_cbuf_cfg2
{
    uint64_t u;
    struct cavm_cprix_txd_gmii_dl_cbuf_cfg2_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t target_mem            : 1;  /**< [ 63: 63](R/W) Specifies the target memory for the address.
                                                                 0 = SMEM.
                                                                 1 = LLC/DRAM. */
        uint64_t reserved_62           : 1;
        uint64_t cmd_type              : 2;  /**< [ 61: 60](R/W) Command type for LLC/DRAM writes. The write operations are
                                                                 enumerated by MHBW_PNB_WR_CMD_E. */
        uint64_t hp                    : 1;  /**< [ 59: 59](R/W) Read Priority sent along with the read request */
        uint64_t dswap                 : 3;  /**< [ 58: 56](R/W) The byte swap mode for DMA to LLC/DRAM. Enumerated in MHBW_PNB_DSWAP_E.
                                                                 DMA to BPHY SMEM ignores this field. */
        uint64_t gmid                  : 3;  /**< [ 55: 53](R/W) Guest Machine ID. */
        uint64_t cbuf_ptr              : 53; /**< [ 52:  0](R/W) GMII DL Circular Buffer base address (byte address). This should be 256 bit
                                                                 aligned address for SMEM; and 256 byte aligned address for DDR. */
#else /* Word 0 - Little Endian */
        uint64_t cbuf_ptr              : 53; /**< [ 52:  0](R/W) GMII DL Circular Buffer base address (byte address). This should be 256 bit
                                                                 aligned address for SMEM; and 256 byte aligned address for DDR. */
        uint64_t gmid                  : 3;  /**< [ 55: 53](R/W) Guest Machine ID. */
        uint64_t dswap                 : 3;  /**< [ 58: 56](R/W) The byte swap mode for DMA to LLC/DRAM. Enumerated in MHBW_PNB_DSWAP_E.
                                                                 DMA to BPHY SMEM ignores this field. */
        uint64_t hp                    : 1;  /**< [ 59: 59](R/W) Read Priority sent along with the read request */
        uint64_t cmd_type              : 2;  /**< [ 61: 60](R/W) Command type for LLC/DRAM writes. The write operations are
                                                                 enumerated by MHBW_PNB_WR_CMD_E. */
        uint64_t reserved_62           : 1;
        uint64_t target_mem            : 1;  /**< [ 63: 63](R/W) Specifies the target memory for the address.
                                                                 0 = SMEM.
                                                                 1 = LLC/DRAM. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_cprix_txd_gmii_dl_cbuf_cfg2_s cn; */
};
typedef union cavm_cprix_txd_gmii_dl_cbuf_cfg2 cavm_cprix_txd_gmii_dl_cbuf_cfg2_t;

static inline uint64_t CAVM_CPRIX_TXD_GMII_DL_CBUF_CFG2(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_CPRIX_TXD_GMII_DL_CBUF_CFG2(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CNF20KA) && (a<=2))
        return 0x87e027801108ll + 0x100000ll * ((a) & 0x3);
    __cavm_csr_fatal("CPRIX_TXD_GMII_DL_CBUF_CFG2", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_CPRIX_TXD_GMII_DL_CBUF_CFG2(a) cavm_cprix_txd_gmii_dl_cbuf_cfg2_t
#define bustype_CAVM_CPRIX_TXD_GMII_DL_CBUF_CFG2(a) CSR_TYPE_NCB
#define basename_CAVM_CPRIX_TXD_GMII_DL_CBUF_CFG2(a) "CPRIX_TXD_GMII_DL_CBUF_CFG2"
#define busnum_CAVM_CPRIX_TXD_GMII_DL_CBUF_CFG2(a) (a)
#define arguments_CAVM_CPRIX_TXD_GMII_DL_CBUF_CFG2(a) (a),-1,-1,-1

/**
 * Register (NCB) cpri#_txd_gmii_dl_nxt_rd_ptr
 *
 * CPRI GMII DL CIRCULAR BUFFER NEXT READ POINTER Register
 */
union cavm_cprix_txd_gmii_dl_nxt_rd_ptr
{
    uint64_t u;
    struct cavm_cprix_txd_gmii_dl_nxt_rd_ptr_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_16_63        : 48;
        uint64_t nxt_rd_ptr            : 16; /**< [ 15:  0](RO/H) Circular Buffer next read pointer. 1 unit per 16 bytes */
#else /* Word 0 - Little Endian */
        uint64_t nxt_rd_ptr            : 16; /**< [ 15:  0](RO/H) Circular Buffer next read pointer. 1 unit per 16 bytes */
        uint64_t reserved_16_63        : 48;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_cprix_txd_gmii_dl_nxt_rd_ptr_s cn; */
};
typedef union cavm_cprix_txd_gmii_dl_nxt_rd_ptr cavm_cprix_txd_gmii_dl_nxt_rd_ptr_t;

static inline uint64_t CAVM_CPRIX_TXD_GMII_DL_NXT_RD_PTR(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_CPRIX_TXD_GMII_DL_NXT_RD_PTR(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CNF20KA) && (a<=2))
        return 0x87e027801120ll + 0x100000ll * ((a) & 0x3);
    __cavm_csr_fatal("CPRIX_TXD_GMII_DL_NXT_RD_PTR", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_CPRIX_TXD_GMII_DL_NXT_RD_PTR(a) cavm_cprix_txd_gmii_dl_nxt_rd_ptr_t
#define bustype_CAVM_CPRIX_TXD_GMII_DL_NXT_RD_PTR(a) CSR_TYPE_NCB
#define basename_CAVM_CPRIX_TXD_GMII_DL_NXT_RD_PTR(a) "CPRIX_TXD_GMII_DL_NXT_RD_PTR"
#define busnum_CAVM_CPRIX_TXD_GMII_DL_NXT_RD_PTR(a) (a)
#define arguments_CAVM_CPRIX_TXD_GMII_DL_NXT_RD_PTR(a) (a),-1,-1,-1

/**
 * Register (NCB) cpri#_txd_gmii_dl_sw_wr_ptr
 *
 * CPRI GMII DL CBUF SOFTWARE WRITE POINTER Register
 */
union cavm_cprix_txd_gmii_dl_sw_wr_ptr
{
    uint64_t u;
    struct cavm_cprix_txd_gmii_dl_sw_wr_ptr_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_16_63        : 48;
        uint64_t sw_wr_ptr             : 16; /**< [ 15:  0](RO/H) Software write pointer. 1 unit per 16 bytes */
#else /* Word 0 - Little Endian */
        uint64_t sw_wr_ptr             : 16; /**< [ 15:  0](RO/H) Software write pointer. 1 unit per 16 bytes */
        uint64_t reserved_16_63        : 48;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_cprix_txd_gmii_dl_sw_wr_ptr_s cn; */
};
typedef union cavm_cprix_txd_gmii_dl_sw_wr_ptr cavm_cprix_txd_gmii_dl_sw_wr_ptr_t;

static inline uint64_t CAVM_CPRIX_TXD_GMII_DL_SW_WR_PTR(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_CPRIX_TXD_GMII_DL_SW_WR_PTR(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CNF20KA) && (a<=2))
        return 0x87e027801118ll + 0x100000ll * ((a) & 0x3);
    __cavm_csr_fatal("CPRIX_TXD_GMII_DL_SW_WR_PTR", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_CPRIX_TXD_GMII_DL_SW_WR_PTR(a) cavm_cprix_txd_gmii_dl_sw_wr_ptr_t
#define bustype_CAVM_CPRIX_TXD_GMII_DL_SW_WR_PTR(a) CSR_TYPE_NCB
#define basename_CAVM_CPRIX_TXD_GMII_DL_SW_WR_PTR(a) "CPRIX_TXD_GMII_DL_SW_WR_PTR"
#define busnum_CAVM_CPRIX_TXD_GMII_DL_SW_WR_PTR(a) (a)
#define arguments_CAVM_CPRIX_TXD_GMII_DL_SW_WR_PTR(a) (a),-1,-1,-1

/**
 * Register (NCB) cpri#_txd_gmii_dl_wr_doorbell
 *
 * CPRI GMII DL CBUF SOFTWARE WRITE DOORBELL Register
 */
union cavm_cprix_txd_gmii_dl_wr_doorbell
{
    uint64_t u;
    struct cavm_cprix_txd_gmii_dl_wr_doorbell_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_8_63         : 56;
        uint64_t sw_wr_doorbell        : 8;  /**< [  7:  0](R/W/H) Written by software to indicate the number of packets written to the circular
                                                                 buffer. The register is automatically cleared after the software write pointer
                                                                 has been updated.
                                                                 NOTE: When updating, software must have the number of packets 1 less than the available
                                                                 space in the circular buffer. */
#else /* Word 0 - Little Endian */
        uint64_t sw_wr_doorbell        : 8;  /**< [  7:  0](R/W/H) Written by software to indicate the number of packets written to the circular
                                                                 buffer. The register is automatically cleared after the software write pointer
                                                                 has been updated.
                                                                 NOTE: When updating, software must have the number of packets 1 less than the available
                                                                 space in the circular buffer. */
        uint64_t reserved_8_63         : 56;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_cprix_txd_gmii_dl_wr_doorbell_s cn; */
};
typedef union cavm_cprix_txd_gmii_dl_wr_doorbell cavm_cprix_txd_gmii_dl_wr_doorbell_t;

static inline uint64_t CAVM_CPRIX_TXD_GMII_DL_WR_DOORBELL(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_CPRIX_TXD_GMII_DL_WR_DOORBELL(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CNF20KA) && (a<=2))
        return 0x87e027801110ll + 0x100000ll * ((a) & 0x3);
    __cavm_csr_fatal("CPRIX_TXD_GMII_DL_WR_DOORBELL", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_CPRIX_TXD_GMII_DL_WR_DOORBELL(a) cavm_cprix_txd_gmii_dl_wr_doorbell_t
#define bustype_CAVM_CPRIX_TXD_GMII_DL_WR_DOORBELL(a) CSR_TYPE_NCB
#define basename_CAVM_CPRIX_TXD_GMII_DL_WR_DOORBELL(a) "CPRIX_TXD_GMII_DL_WR_DOORBELL"
#define busnum_CAVM_CPRIX_TXD_GMII_DL_WR_DOORBELL(a) (a)
#define arguments_CAVM_CPRIX_TXD_GMII_DL_WR_DOORBELL(a) (a),-1,-1,-1

/**
 * Register (NCB) cpri#_ul_gmii_control
 *
 * CPRI UL GMII_CONTROL Register
 * Contains config bits to configure GMII handling on UL side
 */
union cavm_cprix_ul_gmii_control
{
    uint64_t u;
    struct cavm_cprix_ul_gmii_control_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_2_63         : 62;
        uint64_t ul_preamble_strict    : 1;  /**< [  1:  1](R/W) Enables Strict handling of 7 Preambles.
                                                                   0 = Allows 0-7 Preamble bytes before SFD to accept a packet on UL GMII.
                                                                   1 = Allows exactly 7 Preamble bytes before SFD to accept a packet on UL GMII. */
        uint64_t axi_gmii_bad_crc_drop_disable : 1;/**< [  0:  0](R/W) Disables dropping of UL GMII frames on Bad CRC. */
#else /* Word 0 - Little Endian */
        uint64_t axi_gmii_bad_crc_drop_disable : 1;/**< [  0:  0](R/W) Disables dropping of UL GMII frames on Bad CRC. */
        uint64_t ul_preamble_strict    : 1;  /**< [  1:  1](R/W) Enables Strict handling of 7 Preambles.
                                                                   0 = Allows 0-7 Preamble bytes before SFD to accept a packet on UL GMII.
                                                                   1 = Allows exactly 7 Preamble bytes before SFD to accept a packet on UL GMII. */
        uint64_t reserved_2_63         : 62;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_cprix_ul_gmii_control_s cn; */
};
typedef union cavm_cprix_ul_gmii_control cavm_cprix_ul_gmii_control_t;

static inline uint64_t CAVM_CPRIX_UL_GMII_CONTROL(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_CPRIX_UL_GMII_CONTROL(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CNF20KA) && (a<=2))
        return 0x87e027802000ll + 0x100000ll * ((a) & 0x3);
    __cavm_csr_fatal("CPRIX_UL_GMII_CONTROL", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_CPRIX_UL_GMII_CONTROL(a) cavm_cprix_ul_gmii_control_t
#define bustype_CAVM_CPRIX_UL_GMII_CONTROL(a) CSR_TYPE_NCB
#define basename_CAVM_CPRIX_UL_GMII_CONTROL(a) "CPRIX_UL_GMII_CONTROL"
#define busnum_CAVM_CPRIX_UL_GMII_CONTROL(a) (a)
#define arguments_CAVM_CPRIX_UL_GMII_CONTROL(a) (a),-1,-1,-1

/**
 * Register (NCB) cpri#_ul_jca_addjob_jobtag
 *
 * CPRI RX JCA ADDJOB Message Jobtag Configuration  Register
 * Defines PSM_CMD_ADDJOB_S[JOBTAG] and PSM_CMD_CONTJOB_S[JOBTAG] values when
 * sending new job commands to PSM.
 *
 * The job tag value computed as follows:
 * _ ([BASE] & (0xffff \<\< [MASK_WIDTH])) | ([COUNT] & ~(0xffff \<\< [MASK_WIDTH]))
 */
union cavm_cprix_ul_jca_addjob_jobtag
{
    uint64_t u;
    struct cavm_cprix_ul_jca_addjob_jobtag_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_48_63        : 16;
        uint64_t count                 : 16; /**< [ 47: 32](R/W/H) Current counter value.  ADDJOB and CONTJOB command sent to PSM. Counter
                                                                 increment wraps to 0 when current [COUNT] == 0xFFFF. */
        uint64_t reserved_21_31        : 11;
        uint64_t mask_width            : 5;  /**< [ 20: 16](R/W) Number of bits from counter to insert into lower bits of JOBTAG. */
        uint64_t base                  : 16; /**< [ 15:  0](R/W) Constant value part of the JOBTAG. */
#else /* Word 0 - Little Endian */
        uint64_t base                  : 16; /**< [ 15:  0](R/W) Constant value part of the JOBTAG. */
        uint64_t mask_width            : 5;  /**< [ 20: 16](R/W) Number of bits from counter to insert into lower bits of JOBTAG. */
        uint64_t reserved_21_31        : 11;
        uint64_t count                 : 16; /**< [ 47: 32](R/W/H) Current counter value.  ADDJOB and CONTJOB command sent to PSM. Counter
                                                                 increment wraps to 0 when current [COUNT] == 0xFFFF. */
        uint64_t reserved_48_63        : 16;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_cprix_ul_jca_addjob_jobtag_s cn; */
};
typedef union cavm_cprix_ul_jca_addjob_jobtag cavm_cprix_ul_jca_addjob_jobtag_t;

static inline uint64_t CAVM_CPRIX_UL_JCA_ADDJOB_JOBTAG(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_CPRIX_UL_JCA_ADDJOB_JOBTAG(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CNF20KA) && (a<=2))
        return 0x87e0278100c8ll + 0x100000ll * ((a) & 0x3);
    __cavm_csr_fatal("CPRIX_UL_JCA_ADDJOB_JOBTAG", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_CPRIX_UL_JCA_ADDJOB_JOBTAG(a) cavm_cprix_ul_jca_addjob_jobtag_t
#define bustype_CAVM_CPRIX_UL_JCA_ADDJOB_JOBTAG(a) CSR_TYPE_NCB
#define basename_CAVM_CPRIX_UL_JCA_ADDJOB_JOBTAG(a) "CPRIX_UL_JCA_ADDJOB_JOBTAG"
#define busnum_CAVM_CPRIX_UL_JCA_ADDJOB_JOBTAG(a) (a)
#define arguments_CAVM_CPRIX_UL_JCA_ADDJOB_JOBTAG(a) (a),-1,-1,-1

#endif /* __CAVM_CSRS_CPRI_H__ */
