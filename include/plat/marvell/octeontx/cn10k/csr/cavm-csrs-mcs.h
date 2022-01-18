#ifndef __CAVM_CSRS_MCS_H__
#define __CAVM_CSRS_MCS_H__
/* This file is auto-generated. Do not edit */

/***********************license start***********************************
* Copyright (C) 2020-2022 Marvell
* SPDX-License-Identifier: BSD-3-Clause
* https://spdx.org/licenses
***********************license end**************************************/


/**
 * @file
 *
 * Configuration and status register (CSR) address and type definitions for
 * OcteonTX MCS.
 *
 * This file is auto generated. Do not edit.
 *
 */

/**
 * Enumeration mcs_bar_e
 *
 * MCS Base Address Register Enumeration
 * Enumerates the base address registers.
 */
#define CAVM_MCS_BAR_E_MCSX_PF_BAR0(a) (0x87e080000000ll + 0x1000000ll * (a))
#define CAVM_MCS_BAR_E_MCSX_PF_BAR0_SIZE 0x100000ull
#define CAVM_MCS_BAR_E_MCSX_PF_BAR4(a) (0x87e080f00000ll + 0x1000000ll * (a))
#define CAVM_MCS_BAR_E_MCSX_PF_BAR4_SIZE 0x100000ull

/**
 * Enumeration mcs_egr_ctl_port_stats_e
 *
 * MCS Egress Controlled Port Statistics Enumeration
 * Enumerates the index into the egress controlled port
 * statistics.
 */
#define CAVM_MCS_EGR_CTL_PORT_STATS_E_IFOUTBCPKTS (3)
#define CAVM_MCS_EGR_CTL_PORT_STATS_E_IFOUTMCPKTS (2)
#define CAVM_MCS_EGR_CTL_PORT_STATS_E_IFOUTOCTETS (0)
#define CAVM_MCS_EGR_CTL_PORT_STATS_E_IFOUTUCPKTS (1)

/**
 * Enumeration mcs_egr_unctl_port_stats_e
 *
 * MCS Egress UnControlled Port Statistics Enumeration
 * Enumerates the index into the egress uncontrolled port
 * statistics.
 */
#define CAVM_MCS_EGR_UNCTL_PORT_STATS_E_IFOUTBCPKTS (3)
#define CAVM_MCS_EGR_UNCTL_PORT_STATS_E_IFOUTCTLPKTS (4)
#define CAVM_MCS_EGR_UNCTL_PORT_STATS_E_IFOUTMCPKTS (2)
#define CAVM_MCS_EGR_UNCTL_PORT_STATS_E_IFOUTOCTETS (0)
#define CAVM_MCS_EGR_UNCTL_PORT_STATS_E_IFOUTUCPKTS (1)

/**
 * Enumeration mcs_ing_ctl_port_stats_e
 *
 * MCS Ingress Controlled Port Statistics Enumeration
 * Enumerates the index into the ingress controlled port
 * statistics.
 */
#define CAVM_MCS_ING_CTL_PORT_STATS_E_IFINBCPKTS (3)
#define CAVM_MCS_ING_CTL_PORT_STATS_E_IFINMCPKTS (2)
#define CAVM_MCS_ING_CTL_PORT_STATS_E_IFINOCTETS (0)
#define CAVM_MCS_ING_CTL_PORT_STATS_E_IFINUCPKTS (1)

/**
 * Enumeration mcs_ing_unctl_port_stats_e
 *
 * MCS Ingress UnControlled Port Statistics Enumeration
 * Enumerates the index into the ingress uncontrolled port
 * statistics.
 */
#define CAVM_MCS_ING_UNCTL_PORT_STATS_E_IFINBCPKTS (3)
#define CAVM_MCS_ING_UNCTL_PORT_STATS_E_IFINCTLPKTS (4)
#define CAVM_MCS_ING_UNCTL_PORT_STATS_E_IFINMCPKTS (2)
#define CAVM_MCS_ING_UNCTL_PORT_STATS_E_IFINOCTETS (0)
#define CAVM_MCS_ING_UNCTL_PORT_STATS_E_IFINUCPKTS (1)

/**
 * Enumeration mcs_int_vec_e
 *
 * MCS MSI-X Vector Enumeration
 * Enumeration the MSI-X interrupt vectors.
 */
#define CAVM_MCS_INT_VEC_E_IP_INT (0x13)
#define CAVM_MCS_INT_VEC_E_MCS_HIL_RX_GBL_INT (9)
#define CAVM_MCS_INT_VEC_E_MCS_HIL_RX_LMACX_INT(a) (0xa + (a))
#define CAVM_MCS_INT_VEC_E_MCS_HIL_TX_GBL_INT (0xe)
#define CAVM_MCS_INT_VEC_E_MCS_HIL_TX_LMACX_INT(a) (0xf + (a))
#define CAVM_MCS_INT_VEC_E_MCS_MIL_RX_LMACX_INT(a) (1 + (a))
#define CAVM_MCS_INT_VEC_E_MCS_MIL_TX_LMACX_INT(a) (5 + (a))
#define CAVM_MCS_INT_VEC_E_MIL_RX_GBL_INT (0)

/**
 * Enumeration mcs_intf_e
 *
 * MCS Interface Number Enumeration
 * Enumerates the bit index of MCS_MIL[CALIBRATE_STATUS].
 */
#define CAVM_MCS_INTF_E_RPMX(a) (0 + (a))

/**
 * Enumeration mcs_rx_exception_code_e
 *
 * MCS Rx Exception Code Enumeration
 * Enumerates the exception code values.
 */
#define CAVM_MCS_RX_EXCEPTION_CODE_E_EOP_BAD_TAG_EXC (0xa)
#define CAVM_MCS_RX_EXCEPTION_CODE_E_EOP_DELAYED (0x12)
#define CAVM_MCS_RX_EXCEPTION_CODE_E_EOP_INVALID (0x11)
#define CAVM_MCS_RX_EXCEPTION_CODE_E_EOP_LATE_EXC (0xf)
#define CAVM_MCS_RX_EXCEPTION_CODE_E_EOP_NOT_VALID_EXC (0x10)
#define CAVM_MCS_RX_EXCEPTION_CODE_E_EOP_UNCHECKED (0x13)
#define CAVM_MCS_RX_EXCEPTION_CODE_E_NO_ERROR (0)
#define CAVM_MCS_RX_EXCEPTION_CODE_E_SOP_BAD_TAG_EXC (9)
#define CAVM_MCS_RX_EXCEPTION_CODE_E_SOP_CTRLD_PORT_DISABLED_EXC (4)
#define CAVM_MCS_RX_EXCEPTION_CODE_E_SOP_FLOW_ID_TCAM_MISS_EXC (3)
#define CAVM_MCS_RX_EXCEPTION_CODE_E_SOP_KAY_OR_CTRL_PKT_EXC (8)
#define CAVM_MCS_RX_EXCEPTION_CODE_E_SOP_NO_TAG_EXC (7)
#define CAVM_MCS_RX_EXCEPTION_CODE_E_SOP_PARSE_ERR_EXC (2)
#define CAVM_MCS_RX_EXCEPTION_CODE_E_SOP_PORT_IN_BYPASS (1)
#define CAVM_MCS_RX_EXCEPTION_CODE_E_SOP_SA_NOT_IN_USE (0xd)
#define CAVM_MCS_RX_EXCEPTION_CODE_E_SOP_SA_NOT_IN_USE_EXC (0xe)
#define CAVM_MCS_RX_EXCEPTION_CODE_E_SOP_SC_CAM_MISS (0xb)
#define CAVM_MCS_RX_EXCEPTION_CODE_E_SOP_SC_CAM_MISS_EXC (0xc)
#define CAVM_MCS_RX_EXCEPTION_CODE_E_SOP_UNTAGGED (6)
#define CAVM_MCS_RX_EXCEPTION_CODE_E_SOP_VALIDATE_FRAMES_NULL (5)

/**
 * Enumeration mcs_rx_pkt_kind_e
 *
 * MCS Rx Packet Kind Enumeration
 * Enumerates the Packet Kind values.
 */
#define CAVM_MCS_RX_PKT_KIND_E_CTRL_KAY (2)
#define CAVM_MCS_RX_PKT_KIND_E_CTRL_NON_KAY (1)
#define CAVM_MCS_RX_PKT_KIND_E_DATA (0)
#define CAVM_MCS_RX_PKT_KIND_E_UNDETERMINED (3)

/**
 * Enumeration mcs_rx_sc_stats_e
 *
 * MCS Rx SC Statistics Enumeration
 * Enumerates the index into the RxSCStats Table.
 */
#define CAVM_MCS_RX_SC_STATS_E_INPKTSDELAYED (3)
#define CAVM_MCS_RX_SC_STATS_E_INPKTSINVALID (2)
#define CAVM_MCS_RX_SC_STATS_E_INPKTSLATE (0)
#define CAVM_MCS_RX_SC_STATS_E_INPKTSNOTVALID (1)
#define CAVM_MCS_RX_SC_STATS_E_INPKTSOK (5)
#define CAVM_MCS_RX_SC_STATS_E_INPKTSUNCHECKED (4)

/**
 * Enumeration mcs_rx_secy_stats_e
 *
 * MCS Rx SecY Statistics Enumeration
 * Enumerates the index into the RxSecyStats Table.
 */
#define CAVM_MCS_RX_SECY_STATS_E_INOCTETSDECRYPTED (6)
#define CAVM_MCS_RX_SECY_STATS_E_INOCTETSVALIDATE (5)
#define CAVM_MCS_RX_SECY_STATS_E_INPKTSBAGTAG (2)
#define CAVM_MCS_RX_SECY_STATS_E_INPKTSNOSA (3)
#define CAVM_MCS_RX_SECY_STATS_E_INPKTSNOSAERROR (4)
#define CAVM_MCS_RX_SECY_STATS_E_INPKTSNOTAG (1)
#define CAVM_MCS_RX_SECY_STATS_E_INPKTSUNTAGGED (0)

/**
 * Enumeration mcs_tx_sc_stats_e
 *
 * MCS Tx SC Statistics Enumeration
 * Enumerates the index into the TxSCStats Table.
 */
#define CAVM_MCS_TX_SC_STATS_E_OUTOCTETSENCRYPTED (2)
#define CAVM_MCS_TX_SC_STATS_E_OUTPKTSENCRYPTED (1)
#define CAVM_MCS_TX_SC_STATS_E_OUTPKTSPROTECTED (0)

/**
 * Enumeration mcs_tx_secy_stats_e
 *
 * MCS Tx SecY Statistics Enumeration
 * Enumerates the index into the TxSecyStats Table.
 */
#define CAVM_MCS_TX_SECY_STATS_E_OUTOCTETSENCRYPTED (3)
#define CAVM_MCS_TX_SECY_STATS_E_OUTOCTETSPROTECTED (2)
#define CAVM_MCS_TX_SECY_STATS_E_OUTPKTSTOOLONG (1)
#define CAVM_MCS_TX_SECY_STATS_E_OUTPKTSUNTAGGED (0)

/**
 * Register (RSL) mcs#_bbe_rx_slave_bbe_int
 *
 * MCS Bbe Rx Slave Bbe Int Register
 * Bbe_slave interrupt register
 */
union cavm_mcsx_bbe_rx_slave_bbe_int
{
    uint64_t u;
    struct cavm_mcsx_bbe_rx_slave_bbe_int_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_8_63         : 56;
        uint64_t plfifo_overflow       : 4;  /**< [  7:  4](R/W1C) Policy FIFO (port 0 to 3 for bit 0 to 3 respectively) experienced an overflow, a
                                                                 reset to that channel is required.  Note that for Tx, only the least significant
                                                                 bit is used due to Full-packet mode. */
        uint64_t dfifo_overflow        : 4;  /**< [  3:  0](R/W1C) Data FIFO (port 0 to 3 for bit 0 to 3 respectively) experienced an overflow, a
                                                                 reset to that channel is required.  Note that for Tx, only the least significant
                                                                 bit is used due to Full-packet mode. */
#else /* Word 0 - Little Endian */
        uint64_t dfifo_overflow        : 4;  /**< [  3:  0](R/W1C) Data FIFO (port 0 to 3 for bit 0 to 3 respectively) experienced an overflow, a
                                                                 reset to that channel is required.  Note that for Tx, only the least significant
                                                                 bit is used due to Full-packet mode. */
        uint64_t plfifo_overflow       : 4;  /**< [  7:  4](R/W1C) Policy FIFO (port 0 to 3 for bit 0 to 3 respectively) experienced an overflow, a
                                                                 reset to that channel is required.  Note that for Tx, only the least significant
                                                                 bit is used due to Full-packet mode. */
        uint64_t reserved_8_63         : 56;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_mcsx_bbe_rx_slave_bbe_int_s cn; */
};
typedef union cavm_mcsx_bbe_rx_slave_bbe_int cavm_mcsx_bbe_rx_slave_bbe_int_t;

static inline uint64_t CAVM_MCSX_BBE_RX_SLAVE_BBE_INT(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_MCSX_BBE_RX_SLAVE_BBE_INT(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CNF10KB) && (a<=6))
        return 0x87e080000160ll + 0x1000000ll * ((a) & 0x7);
    __cavm_csr_fatal("MCSX_BBE_RX_SLAVE_BBE_INT", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_MCSX_BBE_RX_SLAVE_BBE_INT(a) cavm_mcsx_bbe_rx_slave_bbe_int_t
#define bustype_CAVM_MCSX_BBE_RX_SLAVE_BBE_INT(a) CSR_TYPE_RSL
#define basename_CAVM_MCSX_BBE_RX_SLAVE_BBE_INT(a) "MCSX_BBE_RX_SLAVE_BBE_INT"
#define device_bar_CAVM_MCSX_BBE_RX_SLAVE_BBE_INT(a) 0x0 /* PF_BAR0 */
#define busnum_CAVM_MCSX_BBE_RX_SLAVE_BBE_INT(a) (a)
#define arguments_CAVM_MCSX_BBE_RX_SLAVE_BBE_INT(a) (a),-1,-1,-1

/**
 * Register (RSL) mcs#_bbe_rx_slave_bbe_int_enb
 *
 * MCS Bbe Rx Slave Bbe Int Enb Register
 * ENB register for bbe_int
 */
union cavm_mcsx_bbe_rx_slave_bbe_int_enb
{
    uint64_t u;
    struct cavm_mcsx_bbe_rx_slave_bbe_int_enb_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_8_63         : 56;
        uint64_t plfifo_overflow_enb   : 4;  /**< [  7:  4](R/W) Policy FIFO (port 0 to 3 for bit 0 to 3 respectively) experienced an overflow, a
                                                                 reset to that channel is required.  Note that for Tx, only the least significant
                                                                 bit is used due to Full-packet mode. */
        uint64_t dfifo_overflow_enb    : 4;  /**< [  3:  0](R/W) Data FIFO (port 0 to 3 for bit 0 to 3 respectively) experienced an overflow, a
                                                                 reset to that channel is required.  Note that for Tx, only the least significant
                                                                 bit is used due to Full-packet mode. */
#else /* Word 0 - Little Endian */
        uint64_t dfifo_overflow_enb    : 4;  /**< [  3:  0](R/W) Data FIFO (port 0 to 3 for bit 0 to 3 respectively) experienced an overflow, a
                                                                 reset to that channel is required.  Note that for Tx, only the least significant
                                                                 bit is used due to Full-packet mode. */
        uint64_t plfifo_overflow_enb   : 4;  /**< [  7:  4](R/W) Policy FIFO (port 0 to 3 for bit 0 to 3 respectively) experienced an overflow, a
                                                                 reset to that channel is required.  Note that for Tx, only the least significant
                                                                 bit is used due to Full-packet mode. */
        uint64_t reserved_8_63         : 56;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_mcsx_bbe_rx_slave_bbe_int_enb_s cn; */
};
typedef union cavm_mcsx_bbe_rx_slave_bbe_int_enb cavm_mcsx_bbe_rx_slave_bbe_int_enb_t;

static inline uint64_t CAVM_MCSX_BBE_RX_SLAVE_BBE_INT_ENB(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_MCSX_BBE_RX_SLAVE_BBE_INT_ENB(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CNF10KB) && (a<=6))
        return 0x87e080000168ll + 0x1000000ll * ((a) & 0x7);
    __cavm_csr_fatal("MCSX_BBE_RX_SLAVE_BBE_INT_ENB", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_MCSX_BBE_RX_SLAVE_BBE_INT_ENB(a) cavm_mcsx_bbe_rx_slave_bbe_int_enb_t
#define bustype_CAVM_MCSX_BBE_RX_SLAVE_BBE_INT_ENB(a) CSR_TYPE_RSL
#define basename_CAVM_MCSX_BBE_RX_SLAVE_BBE_INT_ENB(a) "MCSX_BBE_RX_SLAVE_BBE_INT_ENB"
#define device_bar_CAVM_MCSX_BBE_RX_SLAVE_BBE_INT_ENB(a) 0x0 /* PF_BAR0 */
#define busnum_CAVM_MCSX_BBE_RX_SLAVE_BBE_INT_ENB(a) (a)
#define arguments_CAVM_MCSX_BBE_RX_SLAVE_BBE_INT_ENB(a) (a),-1,-1,-1

/**
 * Register (RSL) mcs#_bbe_rx_slave_bbe_int_intr_rw
 *
 * MCS Bbe Rx Slave Bbe Int Intr Rw Register
 * Read/write register for bbe_int
 */
union cavm_mcsx_bbe_rx_slave_bbe_int_intr_rw
{
    uint64_t u;
    struct cavm_mcsx_bbe_rx_slave_bbe_int_intr_rw_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_8_63         : 56;
        uint64_t plfifo_overflow       : 4;  /**< [  7:  4](R/W) Policy FIFO (port 0 to 3 for bit 0 to 3 respectively) experienced an overflow, a
                                                                 reset to that channel is required.  Note that for Tx, only the least significant
                                                                 bit is used due to Full-packet mode. */
        uint64_t dfifo_overflow        : 4;  /**< [  3:  0](R/W) Data FIFO (port 0 to 3 for bit 0 to 3 respectively) experienced an overflow, a
                                                                 reset to that channel is required.  Note that for Tx, only the least significant
                                                                 bit is used due to Full-packet mode. */
#else /* Word 0 - Little Endian */
        uint64_t dfifo_overflow        : 4;  /**< [  3:  0](R/W) Data FIFO (port 0 to 3 for bit 0 to 3 respectively) experienced an overflow, a
                                                                 reset to that channel is required.  Note that for Tx, only the least significant
                                                                 bit is used due to Full-packet mode. */
        uint64_t plfifo_overflow       : 4;  /**< [  7:  4](R/W) Policy FIFO (port 0 to 3 for bit 0 to 3 respectively) experienced an overflow, a
                                                                 reset to that channel is required.  Note that for Tx, only the least significant
                                                                 bit is used due to Full-packet mode. */
        uint64_t reserved_8_63         : 56;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_mcsx_bbe_rx_slave_bbe_int_intr_rw_s cn; */
};
typedef union cavm_mcsx_bbe_rx_slave_bbe_int_intr_rw cavm_mcsx_bbe_rx_slave_bbe_int_intr_rw_t;

static inline uint64_t CAVM_MCSX_BBE_RX_SLAVE_BBE_INT_INTR_RW(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_MCSX_BBE_RX_SLAVE_BBE_INT_INTR_RW(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CNF10KB) && (a<=6))
        return 0x87e080000178ll + 0x1000000ll * ((a) & 0x7);
    __cavm_csr_fatal("MCSX_BBE_RX_SLAVE_BBE_INT_INTR_RW", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_MCSX_BBE_RX_SLAVE_BBE_INT_INTR_RW(a) cavm_mcsx_bbe_rx_slave_bbe_int_intr_rw_t
#define bustype_CAVM_MCSX_BBE_RX_SLAVE_BBE_INT_INTR_RW(a) CSR_TYPE_RSL
#define basename_CAVM_MCSX_BBE_RX_SLAVE_BBE_INT_INTR_RW(a) "MCSX_BBE_RX_SLAVE_BBE_INT_INTR_RW"
#define device_bar_CAVM_MCSX_BBE_RX_SLAVE_BBE_INT_INTR_RW(a) 0x0 /* PF_BAR0 */
#define busnum_CAVM_MCSX_BBE_RX_SLAVE_BBE_INT_INTR_RW(a) (a)
#define arguments_CAVM_MCSX_BBE_RX_SLAVE_BBE_INT_INTR_RW(a) (a),-1,-1,-1

/**
 * Register (RSL) mcs#_bbe_rx_slave_bbe_int_raw
 *
 * MCS Bbe Rx Slave Bbe Int Raw Register
 * Raw register for bbe_int
 */
union cavm_mcsx_bbe_rx_slave_bbe_int_raw
{
    uint64_t u;
    struct cavm_mcsx_bbe_rx_slave_bbe_int_raw_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_8_63         : 56;
        uint64_t plfifo_overflow       : 4;  /**< [  7:  4](RO) Policy FIFO (port 0 to 3 for bit 0 to 3 respectively) experienced an overflow, a
                                                                 reset to that channel is required.  Note that for Tx, only the least significant
                                                                 bit is used due to Full-packet mode. */
        uint64_t dfifo_overflow        : 4;  /**< [  3:  0](RO) Data FIFO (port 0 to 3 for bit 0 to 3 respectively) experienced an overflow, a
                                                                 reset to that channel is required.  Note that for Tx, only the least significant
                                                                 bit is used due to Full-packet mode. */
#else /* Word 0 - Little Endian */
        uint64_t dfifo_overflow        : 4;  /**< [  3:  0](RO) Data FIFO (port 0 to 3 for bit 0 to 3 respectively) experienced an overflow, a
                                                                 reset to that channel is required.  Note that for Tx, only the least significant
                                                                 bit is used due to Full-packet mode. */
        uint64_t plfifo_overflow       : 4;  /**< [  7:  4](RO) Policy FIFO (port 0 to 3 for bit 0 to 3 respectively) experienced an overflow, a
                                                                 reset to that channel is required.  Note that for Tx, only the least significant
                                                                 bit is used due to Full-packet mode. */
        uint64_t reserved_8_63         : 56;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_mcsx_bbe_rx_slave_bbe_int_raw_s cn; */
};
typedef union cavm_mcsx_bbe_rx_slave_bbe_int_raw cavm_mcsx_bbe_rx_slave_bbe_int_raw_t;

static inline uint64_t CAVM_MCSX_BBE_RX_SLAVE_BBE_INT_RAW(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_MCSX_BBE_RX_SLAVE_BBE_INT_RAW(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CNF10KB) && (a<=6))
        return 0x87e080000170ll + 0x1000000ll * ((a) & 0x7);
    __cavm_csr_fatal("MCSX_BBE_RX_SLAVE_BBE_INT_RAW", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_MCSX_BBE_RX_SLAVE_BBE_INT_RAW(a) cavm_mcsx_bbe_rx_slave_bbe_int_raw_t
#define bustype_CAVM_MCSX_BBE_RX_SLAVE_BBE_INT_RAW(a) CSR_TYPE_RSL
#define basename_CAVM_MCSX_BBE_RX_SLAVE_BBE_INT_RAW(a) "MCSX_BBE_RX_SLAVE_BBE_INT_RAW"
#define device_bar_CAVM_MCSX_BBE_RX_SLAVE_BBE_INT_RAW(a) 0x0 /* PF_BAR0 */
#define busnum_CAVM_MCSX_BBE_RX_SLAVE_BBE_INT_RAW(a) (a)
#define arguments_CAVM_MCSX_BBE_RX_SLAVE_BBE_INT_RAW(a) (a),-1,-1,-1

/**
 * Register (RSL) mcs#_bbe_rx_slave_cal_entry
 *
 * MCS Bbe Rx Slave Cal Entry Register
 * Calendar entries
 */
union cavm_mcsx_bbe_rx_slave_cal_entry
{
    uint64_t u;
    struct cavm_mcsx_bbe_rx_slave_cal_entry_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_32_63        : 32;
        uint64_t cal_entry             : 32; /**< [ 31:  0](R/W) Control the sequence of Data FIFO associated with each port that the arbiter will read data from. There are 16 entries of 2 bits each (in a format of {entry15, entry14, ..., entry1, entry0}; totaling 16*2 = 32 bits). Each entry points to one set of FIFOs associated with a port. The arbiter will read FIFO in an order from entry #0 to entry #[CAL_LEN] and then repeat.  Note that for Tx this register is not used due to Full-packet mode. */
#else /* Word 0 - Little Endian */
        uint64_t cal_entry             : 32; /**< [ 31:  0](R/W) Control the sequence of Data FIFO associated with each port that the arbiter will read data from. There are 16 entries of 2 bits each (in a format of {entry15, entry14, ..., entry1, entry0}; totaling 16*2 = 32 bits). Each entry points to one set of FIFOs associated with a port. The arbiter will read FIFO in an order from entry #0 to entry #[CAL_LEN] and then repeat.  Note that for Tx this register is not used due to Full-packet mode. */
        uint64_t reserved_32_63        : 32;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_mcsx_bbe_rx_slave_cal_entry_s cn; */
};
typedef union cavm_mcsx_bbe_rx_slave_cal_entry cavm_mcsx_bbe_rx_slave_cal_entry_t;

static inline uint64_t CAVM_MCSX_BBE_RX_SLAVE_CAL_ENTRY(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_MCSX_BBE_RX_SLAVE_CAL_ENTRY(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CNF10KB) && (a<=6))
        return 0x87e080000180ll + 0x1000000ll * ((a) & 0x7);
    __cavm_csr_fatal("MCSX_BBE_RX_SLAVE_CAL_ENTRY", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_MCSX_BBE_RX_SLAVE_CAL_ENTRY(a) cavm_mcsx_bbe_rx_slave_cal_entry_t
#define bustype_CAVM_MCSX_BBE_RX_SLAVE_CAL_ENTRY(a) CSR_TYPE_RSL
#define basename_CAVM_MCSX_BBE_RX_SLAVE_CAL_ENTRY(a) "MCSX_BBE_RX_SLAVE_CAL_ENTRY"
#define device_bar_CAVM_MCSX_BBE_RX_SLAVE_CAL_ENTRY(a) 0x0 /* PF_BAR0 */
#define busnum_CAVM_MCSX_BBE_RX_SLAVE_CAL_ENTRY(a) (a)
#define arguments_CAVM_MCSX_BBE_RX_SLAVE_CAL_ENTRY(a) (a),-1,-1,-1

/**
 * Register (RSL) mcs#_bbe_rx_slave_cal_len
 *
 * MCS Bbe Rx Slave Cal Len Register
 * Calendar length
 */
union cavm_mcsx_bbe_rx_slave_cal_len
{
    uint64_t u;
    struct cavm_mcsx_bbe_rx_slave_cal_len_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_4_63         : 60;
        uint64_t cal_len               : 4;  /**< [  3:  0](R/W) The max index in calendar used in arbitration. Arbiter uses the port number from
                                                                 calendar entry 0, 1, ... cal_len, then repeat from entry 0, ... to read
                                                                 Data/Policy FIFO being pointed to in each clock cycle. Setting up the cal_entry
                                                                 registers and this register will control how often the arbiter allows each FIFO
                                                                 to be read. Ports with higher bandwidth should normally be allowed more often.
                                                                 Note that for Tx this register is not used due to Full-packet mode. */
#else /* Word 0 - Little Endian */
        uint64_t cal_len               : 4;  /**< [  3:  0](R/W) The max index in calendar used in arbitration. Arbiter uses the port number from
                                                                 calendar entry 0, 1, ... cal_len, then repeat from entry 0, ... to read
                                                                 Data/Policy FIFO being pointed to in each clock cycle. Setting up the cal_entry
                                                                 registers and this register will control how often the arbiter allows each FIFO
                                                                 to be read. Ports with higher bandwidth should normally be allowed more often.
                                                                 Note that for Tx this register is not used due to Full-packet mode. */
        uint64_t reserved_4_63         : 60;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_mcsx_bbe_rx_slave_cal_len_s cn; */
};
typedef union cavm_mcsx_bbe_rx_slave_cal_len cavm_mcsx_bbe_rx_slave_cal_len_t;

static inline uint64_t CAVM_MCSX_BBE_RX_SLAVE_CAL_LEN(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_MCSX_BBE_RX_SLAVE_CAL_LEN(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CNF10KB) && (a<=6))
        return 0x87e080000188ll + 0x1000000ll * ((a) & 0x7);
    __cavm_csr_fatal("MCSX_BBE_RX_SLAVE_CAL_LEN", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_MCSX_BBE_RX_SLAVE_CAL_LEN(a) cavm_mcsx_bbe_rx_slave_cal_len_t
#define bustype_CAVM_MCSX_BBE_RX_SLAVE_CAL_LEN(a) CSR_TYPE_RSL
#define basename_CAVM_MCSX_BBE_RX_SLAVE_CAL_LEN(a) "MCSX_BBE_RX_SLAVE_CAL_LEN"
#define device_bar_CAVM_MCSX_BBE_RX_SLAVE_CAL_LEN(a) 0x0 /* PF_BAR0 */
#define busnum_CAVM_MCSX_BBE_RX_SLAVE_CAL_LEN(a) (a)
#define arguments_CAVM_MCSX_BBE_RX_SLAVE_CAL_LEN(a) (a),-1,-1,-1

/**
 * Register (RSL) mcs#_bbe_rx_slave_dbg_mux_sel
 *
 * MCS Bbe Rx Slave Dbg Mux Sel Register
 * Per segment mux control for the debug_mux.  Configuration of this register will
 * affect which debug set is output on the corresponding debug mux logic for the BBE.
 */
union cavm_mcsx_bbe_rx_slave_dbg_mux_sel
{
    uint64_t u;
    struct cavm_mcsx_bbe_rx_slave_dbg_mux_sel_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_31_63        : 33;
        uint64_t seg3                  : 7;  /**< [ 30: 24](R/W) Select which debug set is output on the segment3 of the debug mux for the BBE.
                                                                 Note that a higher level dbg_mux_sel also exists to select which block's debug
                                                                 sets are to be output of the IP */
        uint64_t reserved_23           : 1;
        uint64_t seg2                  : 7;  /**< [ 22: 16](R/W) Select which debug set is output on the segment2 of the debug mux for the BBE.
                                                                 Note that a higher level dbg_mux_sel also exists to select which block's debug
                                                                 sets are to be output of the IP */
        uint64_t reserved_15           : 1;
        uint64_t seg1                  : 7;  /**< [ 14:  8](R/W) Select which debug set is output on the segment1 of the debug mux for the BBE.
                                                                 Note that a higher level dbg_mux_sel also exists to select which block's debug
                                                                 sets are to be output of the IP */
        uint64_t reserved_7            : 1;
        uint64_t seg0                  : 7;  /**< [  6:  0](R/W) Select which debug set is output on the segment0 of the debug mux for the BBE.
                                                                 Note that a higher level dbg_mux_sel also exists to select which block's debug
                                                                 sets are to be output of the IP */
#else /* Word 0 - Little Endian */
        uint64_t seg0                  : 7;  /**< [  6:  0](R/W) Select which debug set is output on the segment0 of the debug mux for the BBE.
                                                                 Note that a higher level dbg_mux_sel also exists to select which block's debug
                                                                 sets are to be output of the IP */
        uint64_t reserved_7            : 1;
        uint64_t seg1                  : 7;  /**< [ 14:  8](R/W) Select which debug set is output on the segment1 of the debug mux for the BBE.
                                                                 Note that a higher level dbg_mux_sel also exists to select which block's debug
                                                                 sets are to be output of the IP */
        uint64_t reserved_15           : 1;
        uint64_t seg2                  : 7;  /**< [ 22: 16](R/W) Select which debug set is output on the segment2 of the debug mux for the BBE.
                                                                 Note that a higher level dbg_mux_sel also exists to select which block's debug
                                                                 sets are to be output of the IP */
        uint64_t reserved_23           : 1;
        uint64_t seg3                  : 7;  /**< [ 30: 24](R/W) Select which debug set is output on the segment3 of the debug mux for the BBE.
                                                                 Note that a higher level dbg_mux_sel also exists to select which block's debug
                                                                 sets are to be output of the IP */
        uint64_t reserved_31_63        : 33;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_mcsx_bbe_rx_slave_dbg_mux_sel_s cn; */
};
typedef union cavm_mcsx_bbe_rx_slave_dbg_mux_sel cavm_mcsx_bbe_rx_slave_dbg_mux_sel_t;

static inline uint64_t CAVM_MCSX_BBE_RX_SLAVE_DBG_MUX_SEL(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_MCSX_BBE_RX_SLAVE_DBG_MUX_SEL(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CNF10KB) && (a<=6))
        return 0x87e0800001d0ll + 0x1000000ll * ((a) & 0x7);
    __cavm_csr_fatal("MCSX_BBE_RX_SLAVE_DBG_MUX_SEL", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_MCSX_BBE_RX_SLAVE_DBG_MUX_SEL(a) cavm_mcsx_bbe_rx_slave_dbg_mux_sel_t
#define bustype_CAVM_MCSX_BBE_RX_SLAVE_DBG_MUX_SEL(a) CSR_TYPE_RSL
#define basename_CAVM_MCSX_BBE_RX_SLAVE_DBG_MUX_SEL(a) "MCSX_BBE_RX_SLAVE_DBG_MUX_SEL"
#define device_bar_CAVM_MCSX_BBE_RX_SLAVE_DBG_MUX_SEL(a) 0x0 /* PF_BAR0 */
#define busnum_CAVM_MCSX_BBE_RX_SLAVE_DBG_MUX_SEL(a) (a)
#define arguments_CAVM_MCSX_BBE_RX_SLAVE_DBG_MUX_SEL(a) (a),-1,-1,-1

/**
 * Register (RSL) mcs#_bbe_rx_slave_debug_status
 *
 * MCS Bbe Rx Slave Debug Status Register
 * Debug status register:  Captures the debug set selected by dbg_mux_sel.
 */
union cavm_mcsx_bbe_rx_slave_debug_status
{
    uint64_t u;
    struct cavm_mcsx_bbe_rx_slave_debug_status_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t seg3                  : 16; /**< [ 63: 48](RO) Debug set status for segment3. */
        uint64_t seg2                  : 16; /**< [ 47: 32](RO) Debug set status for segment2. */
        uint64_t seg1                  : 16; /**< [ 31: 16](RO) Debug set status for segment1. */
        uint64_t seg0                  : 16; /**< [ 15:  0](RO) Debug set status for segment0. */
#else /* Word 0 - Little Endian */
        uint64_t seg0                  : 16; /**< [ 15:  0](RO) Debug set status for segment0. */
        uint64_t seg1                  : 16; /**< [ 31: 16](RO) Debug set status for segment1. */
        uint64_t seg2                  : 16; /**< [ 47: 32](RO) Debug set status for segment2. */
        uint64_t seg3                  : 16; /**< [ 63: 48](RO) Debug set status for segment3. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_mcsx_bbe_rx_slave_debug_status_s cn; */
};
typedef union cavm_mcsx_bbe_rx_slave_debug_status cavm_mcsx_bbe_rx_slave_debug_status_t;

static inline uint64_t CAVM_MCSX_BBE_RX_SLAVE_DEBUG_STATUS(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_MCSX_BBE_RX_SLAVE_DEBUG_STATUS(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CNF10KB) && (a<=6))
        return 0x87e0800001d8ll + 0x1000000ll * ((a) & 0x7);
    __cavm_csr_fatal("MCSX_BBE_RX_SLAVE_DEBUG_STATUS", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_MCSX_BBE_RX_SLAVE_DEBUG_STATUS(a) cavm_mcsx_bbe_rx_slave_debug_status_t
#define bustype_CAVM_MCSX_BBE_RX_SLAVE_DEBUG_STATUS(a) CSR_TYPE_RSL
#define basename_CAVM_MCSX_BBE_RX_SLAVE_DEBUG_STATUS(a) "MCSX_BBE_RX_SLAVE_DEBUG_STATUS"
#define device_bar_CAVM_MCSX_BBE_RX_SLAVE_DEBUG_STATUS(a) 0x0 /* PF_BAR0 */
#define busnum_CAVM_MCSX_BBE_RX_SLAVE_DEBUG_STATUS(a) (a)
#define arguments_CAVM_MCSX_BBE_RX_SLAVE_DEBUG_STATUS(a) (a),-1,-1,-1

/**
 * Register (RSL) mcs#_bbe_rx_slave_padding_ctl_rsvd
 *
 * INTERNAL: MCS Bbe Rx Slave Padding Ctl Register
 *
 * Padding control
 */
union cavm_mcsx_bbe_rx_slave_padding_ctl_rsvd
{
    uint64_t u;
    struct cavm_mcsx_bbe_rx_slave_padding_ctl_rsvd_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_5_63         : 59;
        uint64_t padding_en            : 1;  /**< [  4:  4](R/W) Reserved. */
        uint64_t min_pkt_size          : 4;  /**< [  3:  0](R/W) Reserved. */
#else /* Word 0 - Little Endian */
        uint64_t min_pkt_size          : 4;  /**< [  3:  0](R/W) Reserved. */
        uint64_t padding_en            : 1;  /**< [  4:  4](R/W) Reserved. */
        uint64_t reserved_5_63         : 59;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_mcsx_bbe_rx_slave_padding_ctl_rsvd_s cn; */
};
typedef union cavm_mcsx_bbe_rx_slave_padding_ctl_rsvd cavm_mcsx_bbe_rx_slave_padding_ctl_rsvd_t;

static inline uint64_t CAVM_MCSX_BBE_RX_SLAVE_PADDING_CTL_RSVD(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_MCSX_BBE_RX_SLAVE_PADDING_CTL_RSVD(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CNF10KB) && (a<=6))
        return 0x87e080000190ll + 0x1000000ll * ((a) & 0x7);
    __cavm_csr_fatal("MCSX_BBE_RX_SLAVE_PADDING_CTL_RSVD", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_MCSX_BBE_RX_SLAVE_PADDING_CTL_RSVD(a) cavm_mcsx_bbe_rx_slave_padding_ctl_rsvd_t
#define bustype_CAVM_MCSX_BBE_RX_SLAVE_PADDING_CTL_RSVD(a) CSR_TYPE_RSL
#define basename_CAVM_MCSX_BBE_RX_SLAVE_PADDING_CTL_RSVD(a) "MCSX_BBE_RX_SLAVE_PADDING_CTL_RSVD"
#define device_bar_CAVM_MCSX_BBE_RX_SLAVE_PADDING_CTL_RSVD(a) 0x0 /* PF_BAR0 */
#define busnum_CAVM_MCSX_BBE_RX_SLAVE_PADDING_CTL_RSVD(a) (a)
#define arguments_CAVM_MCSX_BBE_RX_SLAVE_PADDING_CTL_RSVD(a) (a),-1,-1,-1

/**
 * Register (RSL) mcs#_bbe_rx_slave_reserved_0#_rsvd
 *
 * INTERNAL: MCS Bbe Rx Slave Reserved 0 Register
 *
 * Reserved.
 */
union cavm_mcsx_bbe_rx_slave_reserved_0x_rsvd
{
    uint64_t u;
    struct cavm_mcsx_bbe_rx_slave_reserved_0x_rsvd_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_0_63         : 64;
#else /* Word 0 - Little Endian */
        uint64_t reserved_0_63         : 64;
#endif /* Word 0 - End */
    } s;
    struct cavm_mcsx_bbe_rx_slave_reserved_0x_rsvd_cn
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_6_63         : 58;
        uint64_t reserved_0_5          : 6;
#else /* Word 0 - Little Endian */
        uint64_t reserved_0_5          : 6;
        uint64_t reserved_6_63         : 58;
#endif /* Word 0 - End */
    } cn;
};
typedef union cavm_mcsx_bbe_rx_slave_reserved_0x_rsvd cavm_mcsx_bbe_rx_slave_reserved_0x_rsvd_t;

static inline uint64_t CAVM_MCSX_BBE_RX_SLAVE_RESERVED_0X_RSVD(uint64_t a, uint64_t b) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_MCSX_BBE_RX_SLAVE_RESERVED_0X_RSVD(uint64_t a, uint64_t b)
{
    if (cavm_is_model(OCTEONTX_CNF10KB) && ((a<=6) && (b<=3)))
        return 0x87e080000198ll + 0x1000000ll * ((a) & 0x7) + 0x10ll * ((b) & 0x3);
    __cavm_csr_fatal("MCSX_BBE_RX_SLAVE_RESERVED_0X_RSVD", 2, a, b, 0, 0, 0, 0);
}

#define typedef_CAVM_MCSX_BBE_RX_SLAVE_RESERVED_0X_RSVD(a,b) cavm_mcsx_bbe_rx_slave_reserved_0x_rsvd_t
#define bustype_CAVM_MCSX_BBE_RX_SLAVE_RESERVED_0X_RSVD(a,b) CSR_TYPE_RSL
#define basename_CAVM_MCSX_BBE_RX_SLAVE_RESERVED_0X_RSVD(a,b) "MCSX_BBE_RX_SLAVE_RESERVED_0X_RSVD"
#define device_bar_CAVM_MCSX_BBE_RX_SLAVE_RESERVED_0X_RSVD(a,b) 0x0 /* PF_BAR0 */
#define busnum_CAVM_MCSX_BBE_RX_SLAVE_RESERVED_0X_RSVD(a,b) (a)
#define arguments_CAVM_MCSX_BBE_RX_SLAVE_RESERVED_0X_RSVD(a,b) (a),(b),-1,-1

/**
 * Register (RSL) mcs#_bbe_tx_slave_bbe_int
 *
 * MCS Bbe Tx Slave Bbe Int Register
 * Bbe_slave interrupt register
 */
union cavm_mcsx_bbe_tx_slave_bbe_int
{
    uint64_t u;
    struct cavm_mcsx_bbe_tx_slave_bbe_int_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_8_63         : 56;
        uint64_t plfifo_overflow       : 4;  /**< [  7:  4](R/W1C) Policy FIFO (port 0 to 3 for bit 0 to 3 respectively) experienced an overflow, a
                                                                 reset to that channel is required.  Note that for Tx, only the least significant
                                                                 bit is used due to Full-packet mode. */
        uint64_t dfifo_overflow        : 4;  /**< [  3:  0](R/W1C) Data FIFO (port 0 to 3 for bit 0 to 3 respectively) experienced an overflow, a
                                                                 reset to that channel is required.  Note that for Tx, only the least significant
                                                                 bit is used due to Full-packet mode. */
#else /* Word 0 - Little Endian */
        uint64_t dfifo_overflow        : 4;  /**< [  3:  0](R/W1C) Data FIFO (port 0 to 3 for bit 0 to 3 respectively) experienced an overflow, a
                                                                 reset to that channel is required.  Note that for Tx, only the least significant
                                                                 bit is used due to Full-packet mode. */
        uint64_t plfifo_overflow       : 4;  /**< [  7:  4](R/W1C) Policy FIFO (port 0 to 3 for bit 0 to 3 respectively) experienced an overflow, a
                                                                 reset to that channel is required.  Note that for Tx, only the least significant
                                                                 bit is used due to Full-packet mode. */
        uint64_t reserved_8_63         : 56;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_mcsx_bbe_tx_slave_bbe_int_s cn; */
};
typedef union cavm_mcsx_bbe_tx_slave_bbe_int cavm_mcsx_bbe_tx_slave_bbe_int_t;

static inline uint64_t CAVM_MCSX_BBE_TX_SLAVE_BBE_INT(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_MCSX_BBE_TX_SLAVE_BBE_INT(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CNF10KB) && (a<=6))
        return 0x87e0800001e0ll + 0x1000000ll * ((a) & 0x7);
    __cavm_csr_fatal("MCSX_BBE_TX_SLAVE_BBE_INT", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_MCSX_BBE_TX_SLAVE_BBE_INT(a) cavm_mcsx_bbe_tx_slave_bbe_int_t
#define bustype_CAVM_MCSX_BBE_TX_SLAVE_BBE_INT(a) CSR_TYPE_RSL
#define basename_CAVM_MCSX_BBE_TX_SLAVE_BBE_INT(a) "MCSX_BBE_TX_SLAVE_BBE_INT"
#define device_bar_CAVM_MCSX_BBE_TX_SLAVE_BBE_INT(a) 0x0 /* PF_BAR0 */
#define busnum_CAVM_MCSX_BBE_TX_SLAVE_BBE_INT(a) (a)
#define arguments_CAVM_MCSX_BBE_TX_SLAVE_BBE_INT(a) (a),-1,-1,-1

/**
 * Register (RSL) mcs#_bbe_tx_slave_bbe_int_enb
 *
 * MCS Bbe Tx Slave Bbe Int Enb Register
 * ENB register for bbe_int
 */
union cavm_mcsx_bbe_tx_slave_bbe_int_enb
{
    uint64_t u;
    struct cavm_mcsx_bbe_tx_slave_bbe_int_enb_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_8_63         : 56;
        uint64_t plfifo_overflow_enb   : 4;  /**< [  7:  4](R/W) Policy FIFO (port 0 to 3 for bit 0 to 3 respectively) experienced an overflow, a
                                                                 reset to that channel is required.  Note that for Tx, only the least significant
                                                                 bit is used due to Full-packet mode. */
        uint64_t dfifo_overflow_enb    : 4;  /**< [  3:  0](R/W) Data FIFO (port 0 to 3 for bit 0 to 3 respectively) experienced an overflow, a
                                                                 reset to that channel is required.  Note that for Tx, only the least significant
                                                                 bit is used due to Full-packet mode. */
#else /* Word 0 - Little Endian */
        uint64_t dfifo_overflow_enb    : 4;  /**< [  3:  0](R/W) Data FIFO (port 0 to 3 for bit 0 to 3 respectively) experienced an overflow, a
                                                                 reset to that channel is required.  Note that for Tx, only the least significant
                                                                 bit is used due to Full-packet mode. */
        uint64_t plfifo_overflow_enb   : 4;  /**< [  7:  4](R/W) Policy FIFO (port 0 to 3 for bit 0 to 3 respectively) experienced an overflow, a
                                                                 reset to that channel is required.  Note that for Tx, only the least significant
                                                                 bit is used due to Full-packet mode. */
        uint64_t reserved_8_63         : 56;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_mcsx_bbe_tx_slave_bbe_int_enb_s cn; */
};
typedef union cavm_mcsx_bbe_tx_slave_bbe_int_enb cavm_mcsx_bbe_tx_slave_bbe_int_enb_t;

static inline uint64_t CAVM_MCSX_BBE_TX_SLAVE_BBE_INT_ENB(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_MCSX_BBE_TX_SLAVE_BBE_INT_ENB(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CNF10KB) && (a<=6))
        return 0x87e0800001e8ll + 0x1000000ll * ((a) & 0x7);
    __cavm_csr_fatal("MCSX_BBE_TX_SLAVE_BBE_INT_ENB", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_MCSX_BBE_TX_SLAVE_BBE_INT_ENB(a) cavm_mcsx_bbe_tx_slave_bbe_int_enb_t
#define bustype_CAVM_MCSX_BBE_TX_SLAVE_BBE_INT_ENB(a) CSR_TYPE_RSL
#define basename_CAVM_MCSX_BBE_TX_SLAVE_BBE_INT_ENB(a) "MCSX_BBE_TX_SLAVE_BBE_INT_ENB"
#define device_bar_CAVM_MCSX_BBE_TX_SLAVE_BBE_INT_ENB(a) 0x0 /* PF_BAR0 */
#define busnum_CAVM_MCSX_BBE_TX_SLAVE_BBE_INT_ENB(a) (a)
#define arguments_CAVM_MCSX_BBE_TX_SLAVE_BBE_INT_ENB(a) (a),-1,-1,-1

/**
 * Register (RSL) mcs#_bbe_tx_slave_bbe_int_intr_rw
 *
 * MCS Bbe Tx Slave Bbe Int Intr Rw Register
 * Read/write register for bbe_int
 */
union cavm_mcsx_bbe_tx_slave_bbe_int_intr_rw
{
    uint64_t u;
    struct cavm_mcsx_bbe_tx_slave_bbe_int_intr_rw_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_8_63         : 56;
        uint64_t plfifo_overflow       : 4;  /**< [  7:  4](R/W) Policy FIFO (port 0 to 3 for bit 0 to 3 respectively) experienced an overflow, a
                                                                 reset to that channel is required.  Note that for Tx, only the least significant
                                                                 bit is used due to Full-packet mode. */
        uint64_t dfifo_overflow        : 4;  /**< [  3:  0](R/W) Data FIFO (port 0 to 3 for bit 0 to 3 respectively) experienced an overflow, a
                                                                 reset to that channel is required.  Note that for Tx, only the least significant
                                                                 bit is used due to Full-packet mode. */
#else /* Word 0 - Little Endian */
        uint64_t dfifo_overflow        : 4;  /**< [  3:  0](R/W) Data FIFO (port 0 to 3 for bit 0 to 3 respectively) experienced an overflow, a
                                                                 reset to that channel is required.  Note that for Tx, only the least significant
                                                                 bit is used due to Full-packet mode. */
        uint64_t plfifo_overflow       : 4;  /**< [  7:  4](R/W) Policy FIFO (port 0 to 3 for bit 0 to 3 respectively) experienced an overflow, a
                                                                 reset to that channel is required.  Note that for Tx, only the least significant
                                                                 bit is used due to Full-packet mode. */
        uint64_t reserved_8_63         : 56;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_mcsx_bbe_tx_slave_bbe_int_intr_rw_s cn; */
};
typedef union cavm_mcsx_bbe_tx_slave_bbe_int_intr_rw cavm_mcsx_bbe_tx_slave_bbe_int_intr_rw_t;

static inline uint64_t CAVM_MCSX_BBE_TX_SLAVE_BBE_INT_INTR_RW(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_MCSX_BBE_TX_SLAVE_BBE_INT_INTR_RW(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CNF10KB) && (a<=6))
        return 0x87e0800001f8ll + 0x1000000ll * ((a) & 0x7);
    __cavm_csr_fatal("MCSX_BBE_TX_SLAVE_BBE_INT_INTR_RW", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_MCSX_BBE_TX_SLAVE_BBE_INT_INTR_RW(a) cavm_mcsx_bbe_tx_slave_bbe_int_intr_rw_t
#define bustype_CAVM_MCSX_BBE_TX_SLAVE_BBE_INT_INTR_RW(a) CSR_TYPE_RSL
#define basename_CAVM_MCSX_BBE_TX_SLAVE_BBE_INT_INTR_RW(a) "MCSX_BBE_TX_SLAVE_BBE_INT_INTR_RW"
#define device_bar_CAVM_MCSX_BBE_TX_SLAVE_BBE_INT_INTR_RW(a) 0x0 /* PF_BAR0 */
#define busnum_CAVM_MCSX_BBE_TX_SLAVE_BBE_INT_INTR_RW(a) (a)
#define arguments_CAVM_MCSX_BBE_TX_SLAVE_BBE_INT_INTR_RW(a) (a),-1,-1,-1

/**
 * Register (RSL) mcs#_bbe_tx_slave_bbe_int_raw
 *
 * MCS Bbe Tx Slave Bbe Int Raw Register
 * Raw register for bbe_int
 */
union cavm_mcsx_bbe_tx_slave_bbe_int_raw
{
    uint64_t u;
    struct cavm_mcsx_bbe_tx_slave_bbe_int_raw_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_8_63         : 56;
        uint64_t plfifo_overflow       : 4;  /**< [  7:  4](RO) Policy FIFO (port 0 to 3 for bit 0 to 3 respectively) experienced an overflow, a
                                                                 reset to that channel is required.  Note that for Tx, only the least significant
                                                                 bit is used due to Full-packet mode. */
        uint64_t dfifo_overflow        : 4;  /**< [  3:  0](RO) Data FIFO (port 0 to 3 for bit 0 to 3 respectively) experienced an overflow, a
                                                                 reset to that channel is required.  Note that for Tx, only the least significant
                                                                 bit is used due to Full-packet mode. */
#else /* Word 0 - Little Endian */
        uint64_t dfifo_overflow        : 4;  /**< [  3:  0](RO) Data FIFO (port 0 to 3 for bit 0 to 3 respectively) experienced an overflow, a
                                                                 reset to that channel is required.  Note that for Tx, only the least significant
                                                                 bit is used due to Full-packet mode. */
        uint64_t plfifo_overflow       : 4;  /**< [  7:  4](RO) Policy FIFO (port 0 to 3 for bit 0 to 3 respectively) experienced an overflow, a
                                                                 reset to that channel is required.  Note that for Tx, only the least significant
                                                                 bit is used due to Full-packet mode. */
        uint64_t reserved_8_63         : 56;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_mcsx_bbe_tx_slave_bbe_int_raw_s cn; */
};
typedef union cavm_mcsx_bbe_tx_slave_bbe_int_raw cavm_mcsx_bbe_tx_slave_bbe_int_raw_t;

static inline uint64_t CAVM_MCSX_BBE_TX_SLAVE_BBE_INT_RAW(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_MCSX_BBE_TX_SLAVE_BBE_INT_RAW(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CNF10KB) && (a<=6))
        return 0x87e0800001f0ll + 0x1000000ll * ((a) & 0x7);
    __cavm_csr_fatal("MCSX_BBE_TX_SLAVE_BBE_INT_RAW", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_MCSX_BBE_TX_SLAVE_BBE_INT_RAW(a) cavm_mcsx_bbe_tx_slave_bbe_int_raw_t
#define bustype_CAVM_MCSX_BBE_TX_SLAVE_BBE_INT_RAW(a) CSR_TYPE_RSL
#define basename_CAVM_MCSX_BBE_TX_SLAVE_BBE_INT_RAW(a) "MCSX_BBE_TX_SLAVE_BBE_INT_RAW"
#define device_bar_CAVM_MCSX_BBE_TX_SLAVE_BBE_INT_RAW(a) 0x0 /* PF_BAR0 */
#define busnum_CAVM_MCSX_BBE_TX_SLAVE_BBE_INT_RAW(a) (a)
#define arguments_CAVM_MCSX_BBE_TX_SLAVE_BBE_INT_RAW(a) (a),-1,-1,-1

/**
 * Register (RSL) mcs#_bbe_tx_slave_dbg_mux_sel
 *
 * MCS Bbe Tx Slave Dbg Mux Sel Register
 * Per segment mux control for the debug_mux.  Configuration of this register will
 * affect which debug set is output on the corresponding debug mux logic for the BBE.
 */
union cavm_mcsx_bbe_tx_slave_dbg_mux_sel
{
    uint64_t u;
    struct cavm_mcsx_bbe_tx_slave_dbg_mux_sel_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_31_63        : 33;
        uint64_t seg3                  : 7;  /**< [ 30: 24](R/W) Select which debug set is output on the segment3 of the debug mux for the BBE.
                                                                 Note that a higher level dbg_mux_sel also exists to select which block's debug
                                                                 sets are to be output of the IP */
        uint64_t reserved_23           : 1;
        uint64_t seg2                  : 7;  /**< [ 22: 16](R/W) Select which debug set is output on the segment2 of the debug mux for the BBE.
                                                                 Note that a higher level dbg_mux_sel also exists to select which block's debug
                                                                 sets are to be output of the IP */
        uint64_t reserved_15           : 1;
        uint64_t seg1                  : 7;  /**< [ 14:  8](R/W) Select which debug set is output on the segment1 of the debug mux for the BBE.
                                                                 Note that a higher level dbg_mux_sel also exists to select which block's debug
                                                                 sets are to be output of the IP */
        uint64_t reserved_7            : 1;
        uint64_t seg0                  : 7;  /**< [  6:  0](R/W) Select which debug set is output on the segment0 of the debug mux for the BBE.
                                                                 Note that a higher level dbg_mux_sel also exists to select which block's debug
                                                                 sets are to be output of the IP */
#else /* Word 0 - Little Endian */
        uint64_t seg0                  : 7;  /**< [  6:  0](R/W) Select which debug set is output on the segment0 of the debug mux for the BBE.
                                                                 Note that a higher level dbg_mux_sel also exists to select which block's debug
                                                                 sets are to be output of the IP */
        uint64_t reserved_7            : 1;
        uint64_t seg1                  : 7;  /**< [ 14:  8](R/W) Select which debug set is output on the segment1 of the debug mux for the BBE.
                                                                 Note that a higher level dbg_mux_sel also exists to select which block's debug
                                                                 sets are to be output of the IP */
        uint64_t reserved_15           : 1;
        uint64_t seg2                  : 7;  /**< [ 22: 16](R/W) Select which debug set is output on the segment2 of the debug mux for the BBE.
                                                                 Note that a higher level dbg_mux_sel also exists to select which block's debug
                                                                 sets are to be output of the IP */
        uint64_t reserved_23           : 1;
        uint64_t seg3                  : 7;  /**< [ 30: 24](R/W) Select which debug set is output on the segment3 of the debug mux for the BBE.
                                                                 Note that a higher level dbg_mux_sel also exists to select which block's debug
                                                                 sets are to be output of the IP */
        uint64_t reserved_31_63        : 33;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_mcsx_bbe_tx_slave_dbg_mux_sel_s cn; */
};
typedef union cavm_mcsx_bbe_tx_slave_dbg_mux_sel cavm_mcsx_bbe_tx_slave_dbg_mux_sel_t;

static inline uint64_t CAVM_MCSX_BBE_TX_SLAVE_DBG_MUX_SEL(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_MCSX_BBE_TX_SLAVE_DBG_MUX_SEL(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CNF10KB) && (a<=6))
        return 0x87e080000250ll + 0x1000000ll * ((a) & 0x7);
    __cavm_csr_fatal("MCSX_BBE_TX_SLAVE_DBG_MUX_SEL", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_MCSX_BBE_TX_SLAVE_DBG_MUX_SEL(a) cavm_mcsx_bbe_tx_slave_dbg_mux_sel_t
#define bustype_CAVM_MCSX_BBE_TX_SLAVE_DBG_MUX_SEL(a) CSR_TYPE_RSL
#define basename_CAVM_MCSX_BBE_TX_SLAVE_DBG_MUX_SEL(a) "MCSX_BBE_TX_SLAVE_DBG_MUX_SEL"
#define device_bar_CAVM_MCSX_BBE_TX_SLAVE_DBG_MUX_SEL(a) 0x0 /* PF_BAR0 */
#define busnum_CAVM_MCSX_BBE_TX_SLAVE_DBG_MUX_SEL(a) (a)
#define arguments_CAVM_MCSX_BBE_TX_SLAVE_DBG_MUX_SEL(a) (a),-1,-1,-1

/**
 * Register (RSL) mcs#_bbe_tx_slave_debug_status
 *
 * MCS Bbe Tx Slave Debug Status Register
 * Debug status register:  Captures the debug set selected by dbg_mux_sel.
 */
union cavm_mcsx_bbe_tx_slave_debug_status
{
    uint64_t u;
    struct cavm_mcsx_bbe_tx_slave_debug_status_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t seg3                  : 16; /**< [ 63: 48](RO) Debug set status for segment3. */
        uint64_t seg2                  : 16; /**< [ 47: 32](RO) Debug set status for segment2. */
        uint64_t seg1                  : 16; /**< [ 31: 16](RO) Debug set status for segment1. */
        uint64_t seg0                  : 16; /**< [ 15:  0](RO) Debug set status for segment0. */
#else /* Word 0 - Little Endian */
        uint64_t seg0                  : 16; /**< [ 15:  0](RO) Debug set status for segment0. */
        uint64_t seg1                  : 16; /**< [ 31: 16](RO) Debug set status for segment1. */
        uint64_t seg2                  : 16; /**< [ 47: 32](RO) Debug set status for segment2. */
        uint64_t seg3                  : 16; /**< [ 63: 48](RO) Debug set status for segment3. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_mcsx_bbe_tx_slave_debug_status_s cn; */
};
typedef union cavm_mcsx_bbe_tx_slave_debug_status cavm_mcsx_bbe_tx_slave_debug_status_t;

static inline uint64_t CAVM_MCSX_BBE_TX_SLAVE_DEBUG_STATUS(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_MCSX_BBE_TX_SLAVE_DEBUG_STATUS(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CNF10KB) && (a<=6))
        return 0x87e080000258ll + 0x1000000ll * ((a) & 0x7);
    __cavm_csr_fatal("MCSX_BBE_TX_SLAVE_DEBUG_STATUS", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_MCSX_BBE_TX_SLAVE_DEBUG_STATUS(a) cavm_mcsx_bbe_tx_slave_debug_status_t
#define bustype_CAVM_MCSX_BBE_TX_SLAVE_DEBUG_STATUS(a) CSR_TYPE_RSL
#define basename_CAVM_MCSX_BBE_TX_SLAVE_DEBUG_STATUS(a) "MCSX_BBE_TX_SLAVE_DEBUG_STATUS"
#define device_bar_CAVM_MCSX_BBE_TX_SLAVE_DEBUG_STATUS(a) 0x0 /* PF_BAR0 */
#define busnum_CAVM_MCSX_BBE_TX_SLAVE_DEBUG_STATUS(a) (a)
#define arguments_CAVM_MCSX_BBE_TX_SLAVE_DEBUG_STATUS(a) (a),-1,-1,-1

/**
 * Register (RSL) mcs#_bbe_tx_slave_padding_ctl_rsvd
 *
 * INTERNAL: MCS Bbe Tx Slave Padding Ctl Register
 *
 * Padding control
 */
union cavm_mcsx_bbe_tx_slave_padding_ctl_rsvd
{
    uint64_t u;
    struct cavm_mcsx_bbe_tx_slave_padding_ctl_rsvd_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_5_63         : 59;
        uint64_t padding_en            : 1;  /**< [  4:  4](R/W) Reserved. */
        uint64_t min_pkt_size          : 4;  /**< [  3:  0](R/W) Reserved. */
#else /* Word 0 - Little Endian */
        uint64_t min_pkt_size          : 4;  /**< [  3:  0](R/W) Reserved. */
        uint64_t padding_en            : 1;  /**< [  4:  4](R/W) Reserved. */
        uint64_t reserved_5_63         : 59;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_mcsx_bbe_tx_slave_padding_ctl_rsvd_s cn; */
};
typedef union cavm_mcsx_bbe_tx_slave_padding_ctl_rsvd cavm_mcsx_bbe_tx_slave_padding_ctl_rsvd_t;

static inline uint64_t CAVM_MCSX_BBE_TX_SLAVE_PADDING_CTL_RSVD(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_MCSX_BBE_TX_SLAVE_PADDING_CTL_RSVD(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CNF10KB) && (a<=6))
        return 0x87e080000210ll + 0x1000000ll * ((a) & 0x7);
    __cavm_csr_fatal("MCSX_BBE_TX_SLAVE_PADDING_CTL_RSVD", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_MCSX_BBE_TX_SLAVE_PADDING_CTL_RSVD(a) cavm_mcsx_bbe_tx_slave_padding_ctl_rsvd_t
#define bustype_CAVM_MCSX_BBE_TX_SLAVE_PADDING_CTL_RSVD(a) CSR_TYPE_RSL
#define basename_CAVM_MCSX_BBE_TX_SLAVE_PADDING_CTL_RSVD(a) "MCSX_BBE_TX_SLAVE_PADDING_CTL_RSVD"
#define device_bar_CAVM_MCSX_BBE_TX_SLAVE_PADDING_CTL_RSVD(a) 0x0 /* PF_BAR0 */
#define busnum_CAVM_MCSX_BBE_TX_SLAVE_PADDING_CTL_RSVD(a) (a)
#define arguments_CAVM_MCSX_BBE_TX_SLAVE_PADDING_CTL_RSVD(a) (a),-1,-1,-1

/**
 * Register (RSL) mcs#_bbe_tx_slave_reserved_0#_rsvd
 *
 * INTERNAL: MCS Bbe Tx Slave Reserved 0 Register
 *
 * Reserved.
 */
union cavm_mcsx_bbe_tx_slave_reserved_0x_rsvd
{
    uint64_t u;
    struct cavm_mcsx_bbe_tx_slave_reserved_0x_rsvd_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_0_63         : 64;
#else /* Word 0 - Little Endian */
        uint64_t reserved_0_63         : 64;
#endif /* Word 0 - End */
    } s;
    struct cavm_mcsx_bbe_tx_slave_reserved_0x_rsvd_cn
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_6_63         : 58;
        uint64_t reserved_0_5          : 6;
#else /* Word 0 - Little Endian */
        uint64_t reserved_0_5          : 6;
        uint64_t reserved_6_63         : 58;
#endif /* Word 0 - End */
    } cn;
};
typedef union cavm_mcsx_bbe_tx_slave_reserved_0x_rsvd cavm_mcsx_bbe_tx_slave_reserved_0x_rsvd_t;

static inline uint64_t CAVM_MCSX_BBE_TX_SLAVE_RESERVED_0X_RSVD(uint64_t a, uint64_t b) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_MCSX_BBE_TX_SLAVE_RESERVED_0X_RSVD(uint64_t a, uint64_t b)
{
    if (cavm_is_model(OCTEONTX_CNF10KB) && ((a<=6) && (b<=3)))
        return 0x87e080000218ll + 0x1000000ll * ((a) & 0x7) + 0x10ll * ((b) & 0x3);
    __cavm_csr_fatal("MCSX_BBE_TX_SLAVE_RESERVED_0X_RSVD", 2, a, b, 0, 0, 0, 0);
}

#define typedef_CAVM_MCSX_BBE_TX_SLAVE_RESERVED_0X_RSVD(a,b) cavm_mcsx_bbe_tx_slave_reserved_0x_rsvd_t
#define bustype_CAVM_MCSX_BBE_TX_SLAVE_RESERVED_0X_RSVD(a,b) CSR_TYPE_RSL
#define basename_CAVM_MCSX_BBE_TX_SLAVE_RESERVED_0X_RSVD(a,b) "MCSX_BBE_TX_SLAVE_RESERVED_0X_RSVD"
#define device_bar_CAVM_MCSX_BBE_TX_SLAVE_RESERVED_0X_RSVD(a,b) 0x0 /* PF_BAR0 */
#define busnum_CAVM_MCSX_BBE_TX_SLAVE_RESERVED_0X_RSVD(a,b) (a)
#define arguments_CAVM_MCSX_BBE_TX_SLAVE_RESERVED_0X_RSVD(a,b) (a),(b),-1,-1

/**
 * Register (RSL) mcs#_clk_active_pc
 *
 * MCS Clk Domain ACTIVE PC Register
 * Counts the conditional clocks under netclk domain for power management.
 */
union cavm_mcsx_clk_active_pc
{
    uint64_t u;
    struct cavm_mcsx_clk_active_pc_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t cnt                   : 64; /**< [ 63:  0](R/W/H) Count conditional clock cycles after reset for netclk domain. */
#else /* Word 0 - Little Endian */
        uint64_t cnt                   : 64; /**< [ 63:  0](R/W/H) Count conditional clock cycles after reset for netclk domain. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_mcsx_clk_active_pc_s cn; */
};
typedef union cavm_mcsx_clk_active_pc cavm_mcsx_clk_active_pc_t;

static inline uint64_t CAVM_MCSX_CLK_ACTIVE_PC(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_MCSX_CLK_ACTIVE_PC(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CNF10KB) && (a<=6))
        return 0x87e0800600a8ll + 0x1000000ll * ((a) & 0x7);
    __cavm_csr_fatal("MCSX_CLK_ACTIVE_PC", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_MCSX_CLK_ACTIVE_PC(a) cavm_mcsx_clk_active_pc_t
#define bustype_CAVM_MCSX_CLK_ACTIVE_PC(a) CSR_TYPE_RSL
#define basename_CAVM_MCSX_CLK_ACTIVE_PC(a) "MCSX_CLK_ACTIVE_PC"
#define device_bar_CAVM_MCSX_CLK_ACTIVE_PC(a) 0x0 /* PF_BAR0 */
#define busnum_CAVM_MCSX_CLK_ACTIVE_PC(a) (a)
#define arguments_CAVM_MCSX_CLK_ACTIVE_PC(a) (a),-1,-1,-1

/**
 * Register (RSL) mcs#_const
 *
 * MCS Const Register
 */
union cavm_mcsx_const
{
    uint64_t u;
    struct cavm_mcsx_const_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_3_63         : 61;
        uint64_t macsec_mode           : 2;  /**< [  2:  1](RO) Fuse the operational mode of MCS. Disabled on MACSEC_DISABLE.
                                                                   0x0 - EXTENDED IEEE802.1AE 2018 (Marvell mode), support up to 4 MPLS tags with
                                                                         or without up to 6 preceding custom tags in the clear.
                                                                   0x1 - IEEE802.1AE 2018 - up to Two VLANS in the clear.
                                                                   0x2 - IEEE802.1AE 2006 - No tags in the clear.
                                                                   0x3 - RESERVED. */
        uint64_t macsec_disable        : 1;  /**< [  0:  0](RO) Disable L2 MAC security. */
#else /* Word 0 - Little Endian */
        uint64_t macsec_disable        : 1;  /**< [  0:  0](RO) Disable L2 MAC security. */
        uint64_t macsec_mode           : 2;  /**< [  2:  1](RO) Fuse the operational mode of MCS. Disabled on MACSEC_DISABLE.
                                                                   0x0 - EXTENDED IEEE802.1AE 2018 (Marvell mode), support up to 4 MPLS tags with
                                                                         or without up to 6 preceding custom tags in the clear.
                                                                   0x1 - IEEE802.1AE 2018 - up to Two VLANS in the clear.
                                                                   0x2 - IEEE802.1AE 2006 - No tags in the clear.
                                                                   0x3 - RESERVED. */
        uint64_t reserved_3_63         : 61;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_mcsx_const_s cn; */
};
typedef union cavm_mcsx_const cavm_mcsx_const_t;

static inline uint64_t CAVM_MCSX_CONST(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_MCSX_CONST(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CNF10KB) && (a<=6))
        return 0x87e0800600d8ll + 0x1000000ll * ((a) & 0x7);
    __cavm_csr_fatal("MCSX_CONST", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_MCSX_CONST(a) cavm_mcsx_const_t
#define bustype_CAVM_MCSX_CONST(a) CSR_TYPE_RSL
#define basename_CAVM_MCSX_CONST(a) "MCSX_CONST"
#define device_bar_CAVM_MCSX_CONST(a) 0x0 /* PF_BAR0 */
#define busnum_CAVM_MCSX_CONST(a) (a)
#define arguments_CAVM_MCSX_CONST(a) (a),-1,-1,-1

/**
 * Register (RSL) mcs#_cpm_rx_slave_cpm_rx_int
 *
 * MCS Cpm Rx Slave Cpm Rx Int Register
 * CPM Interrupt Register
 */
union cavm_mcsx_cpm_rx_slave_cpm_rx_int
{
    uint64_t u;
    struct cavm_mcsx_cpm_rx_slave_cpm_rx_int_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_9_63         : 55;
        uint64_t sc_expiry_actual_timeout : 1;/**< [  8:  8](R/W1C) Reserved.
                                                                 Internal:
                                                                 An active SC/SA has reached its sc_actual_timeout threshold.  See the leaf
                                                                 interrupt register to determine which SC fired. */
        uint64_t sc_expiry_pre_timeout : 1;  /**< [  7:  7](R/W1C) Reserved.
                                                                 Internal:
                                                                 An active SC/SA has reached its sc_pre_timeout threshold.  See the leaf
                                                                 interrupt register to determine which SC fired. */
        uint64_t pn_thresh_reached     : 1;  /**< [  6:  6](R/W1C) Received a packet whose current PN is greater than or equal to the configurable threshold. */
        uint64_t packet_xpn_eq0        : 1;  /**< [  5:  5](R/W1C) Received a packet whose (X)PN is equal to zero. */
        uint64_t sectag_sc_eq1_scb_eq1 : 1;  /**< [  4:  4](R/W1C) (SecTag.SC == 1) and (SecTag.SCB == 1) detected. */
        uint64_t sectag_es_eq1_sc_eq1  : 1;  /**< [  3:  3](R/W1C) (SecTag.ES == 1) and (SecTag.SC == 1) detected. */
        uint64_t sectag_sl_gte48       : 1;  /**< [  2:  2](R/W1C) SecTag.SL greater than= 48 detected. */
        uint64_t sectag_e_eq0_c_eq1    : 1;  /**< [  1:  1](R/W1C) (SecTag.E == 0) and (SecTag.C == 1) detected. */
        uint64_t sectag_v_eq1          : 1;  /**< [  0:  0](R/W1C) SecTag.V == 1 detected. */
#else /* Word 0 - Little Endian */
        uint64_t sectag_v_eq1          : 1;  /**< [  0:  0](R/W1C) SecTag.V == 1 detected. */
        uint64_t sectag_e_eq0_c_eq1    : 1;  /**< [  1:  1](R/W1C) (SecTag.E == 0) and (SecTag.C == 1) detected. */
        uint64_t sectag_sl_gte48       : 1;  /**< [  2:  2](R/W1C) SecTag.SL greater than= 48 detected. */
        uint64_t sectag_es_eq1_sc_eq1  : 1;  /**< [  3:  3](R/W1C) (SecTag.ES == 1) and (SecTag.SC == 1) detected. */
        uint64_t sectag_sc_eq1_scb_eq1 : 1;  /**< [  4:  4](R/W1C) (SecTag.SC == 1) and (SecTag.SCB == 1) detected. */
        uint64_t packet_xpn_eq0        : 1;  /**< [  5:  5](R/W1C) Received a packet whose (X)PN is equal to zero. */
        uint64_t pn_thresh_reached     : 1;  /**< [  6:  6](R/W1C) Received a packet whose current PN is greater than or equal to the configurable threshold. */
        uint64_t sc_expiry_pre_timeout : 1;  /**< [  7:  7](R/W1C) Reserved.
                                                                 Internal:
                                                                 An active SC/SA has reached its sc_pre_timeout threshold.  See the leaf
                                                                 interrupt register to determine which SC fired. */
        uint64_t sc_expiry_actual_timeout : 1;/**< [  8:  8](R/W1C) Reserved.
                                                                 Internal:
                                                                 An active SC/SA has reached its sc_actual_timeout threshold.  See the leaf
                                                                 interrupt register to determine which SC fired. */
        uint64_t reserved_9_63         : 55;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_mcsx_cpm_rx_slave_cpm_rx_int_s cn; */
};
typedef union cavm_mcsx_cpm_rx_slave_cpm_rx_int cavm_mcsx_cpm_rx_slave_cpm_rx_int_t;

static inline uint64_t CAVM_MCSX_CPM_RX_SLAVE_CPM_RX_INT(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_MCSX_CPM_RX_SLAVE_CPM_RX_INT(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CNF10KB) && (a<=6))
        return 0x87e080000ad8ll + 0x1000000ll * ((a) & 0x7);
    __cavm_csr_fatal("MCSX_CPM_RX_SLAVE_CPM_RX_INT", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_MCSX_CPM_RX_SLAVE_CPM_RX_INT(a) cavm_mcsx_cpm_rx_slave_cpm_rx_int_t
#define bustype_CAVM_MCSX_CPM_RX_SLAVE_CPM_RX_INT(a) CSR_TYPE_RSL
#define basename_CAVM_MCSX_CPM_RX_SLAVE_CPM_RX_INT(a) "MCSX_CPM_RX_SLAVE_CPM_RX_INT"
#define device_bar_CAVM_MCSX_CPM_RX_SLAVE_CPM_RX_INT(a) 0x0 /* PF_BAR0 */
#define busnum_CAVM_MCSX_CPM_RX_SLAVE_CPM_RX_INT(a) (a)
#define arguments_CAVM_MCSX_CPM_RX_SLAVE_CPM_RX_INT(a) (a),-1,-1,-1

/**
 * Register (RSL) mcs#_cpm_rx_slave_cpm_rx_int_enb
 *
 * MCS Cpm Rx Slave Cpm Rx Int Enb Register
 * ENB register for cpm_rx_int
 */
union cavm_mcsx_cpm_rx_slave_cpm_rx_int_enb
{
    uint64_t u;
    struct cavm_mcsx_cpm_rx_slave_cpm_rx_int_enb_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_9_63         : 55;
        uint64_t sc_expiry_actual_timeout_enb : 1;/**< [  8:  8](R/W) Reserved.
                                                                 Internal:
                                                                 An active SC/SA has reached its sc_actual_timeout threshold.  See the leaf
                                                                 interrupt register to determine which SC fired. */
        uint64_t sc_expiry_pre_timeout_enb : 1;/**< [  7:  7](R/W) Reserved.
                                                                 Internal:
                                                                 An active SC/SA has reached its sc_pre_timeout threshold.  See the leaf
                                                                 interrupt register to determine which SC fired. */
        uint64_t pn_thresh_reached_enb : 1;  /**< [  6:  6](R/W) Received a packet whose current PN is greater than or equal to the configurable threshold. */
        uint64_t packet_xpn_eq0_enb    : 1;  /**< [  5:  5](R/W) Received a packet whose (X)PN is equal to zero. */
        uint64_t sectag_sc_eq1_scb_eq1_enb : 1;/**< [  4:  4](R/W) (SecTag.SC == 1) and (SecTag.SCB == 1) detected. */
        uint64_t sectag_es_eq1_sc_eq1_enb : 1;/**< [  3:  3](R/W) (SecTag.ES == 1) and (SecTag.SC == 1) detected. */
        uint64_t sectag_sl_gte48_enb   : 1;  /**< [  2:  2](R/W) SecTag.SL greater than= 48 detected. */
        uint64_t sectag_e_eq0_c_eq1_enb : 1; /**< [  1:  1](R/W) (SecTag.E == 0) and (SecTag.C == 1) detected. */
        uint64_t sectag_v_eq1_enb      : 1;  /**< [  0:  0](R/W) SecTag.V == 1 detected. */
#else /* Word 0 - Little Endian */
        uint64_t sectag_v_eq1_enb      : 1;  /**< [  0:  0](R/W) SecTag.V == 1 detected. */
        uint64_t sectag_e_eq0_c_eq1_enb : 1; /**< [  1:  1](R/W) (SecTag.E == 0) and (SecTag.C == 1) detected. */
        uint64_t sectag_sl_gte48_enb   : 1;  /**< [  2:  2](R/W) SecTag.SL greater than= 48 detected. */
        uint64_t sectag_es_eq1_sc_eq1_enb : 1;/**< [  3:  3](R/W) (SecTag.ES == 1) and (SecTag.SC == 1) detected. */
        uint64_t sectag_sc_eq1_scb_eq1_enb : 1;/**< [  4:  4](R/W) (SecTag.SC == 1) and (SecTag.SCB == 1) detected. */
        uint64_t packet_xpn_eq0_enb    : 1;  /**< [  5:  5](R/W) Received a packet whose (X)PN is equal to zero. */
        uint64_t pn_thresh_reached_enb : 1;  /**< [  6:  6](R/W) Received a packet whose current PN is greater than or equal to the configurable threshold. */
        uint64_t sc_expiry_pre_timeout_enb : 1;/**< [  7:  7](R/W) Reserved.
                                                                 Internal:
                                                                 An active SC/SA has reached its sc_pre_timeout threshold.  See the leaf
                                                                 interrupt register to determine which SC fired. */
        uint64_t sc_expiry_actual_timeout_enb : 1;/**< [  8:  8](R/W) Reserved.
                                                                 Internal:
                                                                 An active SC/SA has reached its sc_actual_timeout threshold.  See the leaf
                                                                 interrupt register to determine which SC fired. */
        uint64_t reserved_9_63         : 55;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_mcsx_cpm_rx_slave_cpm_rx_int_enb_s cn; */
};
typedef union cavm_mcsx_cpm_rx_slave_cpm_rx_int_enb cavm_mcsx_cpm_rx_slave_cpm_rx_int_enb_t;

static inline uint64_t CAVM_MCSX_CPM_RX_SLAVE_CPM_RX_INT_ENB(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_MCSX_CPM_RX_SLAVE_CPM_RX_INT_ENB(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CNF10KB) && (a<=6))
        return 0x87e080000ae0ll + 0x1000000ll * ((a) & 0x7);
    __cavm_csr_fatal("MCSX_CPM_RX_SLAVE_CPM_RX_INT_ENB", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_MCSX_CPM_RX_SLAVE_CPM_RX_INT_ENB(a) cavm_mcsx_cpm_rx_slave_cpm_rx_int_enb_t
#define bustype_CAVM_MCSX_CPM_RX_SLAVE_CPM_RX_INT_ENB(a) CSR_TYPE_RSL
#define basename_CAVM_MCSX_CPM_RX_SLAVE_CPM_RX_INT_ENB(a) "MCSX_CPM_RX_SLAVE_CPM_RX_INT_ENB"
#define device_bar_CAVM_MCSX_CPM_RX_SLAVE_CPM_RX_INT_ENB(a) 0x0 /* PF_BAR0 */
#define busnum_CAVM_MCSX_CPM_RX_SLAVE_CPM_RX_INT_ENB(a) (a)
#define arguments_CAVM_MCSX_CPM_RX_SLAVE_CPM_RX_INT_ENB(a) (a),-1,-1,-1

/**
 * Register (RSL) mcs#_cpm_rx_slave_cpm_rx_int_intr_rw
 *
 * MCS Cpm Rx Slave Cpm Rx Int Intr Rw Register
 * Read/write register for cpm_rx_int
 */
union cavm_mcsx_cpm_rx_slave_cpm_rx_int_intr_rw
{
    uint64_t u;
    struct cavm_mcsx_cpm_rx_slave_cpm_rx_int_intr_rw_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_9_63         : 55;
        uint64_t sc_expiry_actual_timeout : 1;/**< [  8:  8](R/W) Reserved.
                                                                 Internal:
                                                                 An active SC/SA has reached its sc_actual_timeout threshold.  See the leaf
                                                                 interrupt register to determine which SC fired. */
        uint64_t sc_expiry_pre_timeout : 1;  /**< [  7:  7](R/W) Reserved.
                                                                 Internal:
                                                                 An active SC/SA has reached its sc_pre_timeout threshold.  See the leaf
                                                                 interrupt register to determine which SC fired. */
        uint64_t pn_thresh_reached     : 1;  /**< [  6:  6](R/W) Received a packet whose current PN is greater than or equal to the configurable threshold. */
        uint64_t packet_xpn_eq0        : 1;  /**< [  5:  5](R/W) Received a packet whose (X)PN is equal to zero. */
        uint64_t sectag_sc_eq1_scb_eq1 : 1;  /**< [  4:  4](R/W) (SecTag.SC == 1) and (SecTag.SCB == 1) detected. */
        uint64_t sectag_es_eq1_sc_eq1  : 1;  /**< [  3:  3](R/W) (SecTag.ES == 1) and (SecTag.SC == 1) detected. */
        uint64_t sectag_sl_gte48       : 1;  /**< [  2:  2](R/W) SecTag.SL greater than= 48 detected. */
        uint64_t sectag_e_eq0_c_eq1    : 1;  /**< [  1:  1](R/W) (SecTag.E == 0) and (SecTag.C == 1) detected. */
        uint64_t sectag_v_eq1          : 1;  /**< [  0:  0](R/W) SecTag.V == 1 detected. */
#else /* Word 0 - Little Endian */
        uint64_t sectag_v_eq1          : 1;  /**< [  0:  0](R/W) SecTag.V == 1 detected. */
        uint64_t sectag_e_eq0_c_eq1    : 1;  /**< [  1:  1](R/W) (SecTag.E == 0) and (SecTag.C == 1) detected. */
        uint64_t sectag_sl_gte48       : 1;  /**< [  2:  2](R/W) SecTag.SL greater than= 48 detected. */
        uint64_t sectag_es_eq1_sc_eq1  : 1;  /**< [  3:  3](R/W) (SecTag.ES == 1) and (SecTag.SC == 1) detected. */
        uint64_t sectag_sc_eq1_scb_eq1 : 1;  /**< [  4:  4](R/W) (SecTag.SC == 1) and (SecTag.SCB == 1) detected. */
        uint64_t packet_xpn_eq0        : 1;  /**< [  5:  5](R/W) Received a packet whose (X)PN is equal to zero. */
        uint64_t pn_thresh_reached     : 1;  /**< [  6:  6](R/W) Received a packet whose current PN is greater than or equal to the configurable threshold. */
        uint64_t sc_expiry_pre_timeout : 1;  /**< [  7:  7](R/W) Reserved.
                                                                 Internal:
                                                                 An active SC/SA has reached its sc_pre_timeout threshold.  See the leaf
                                                                 interrupt register to determine which SC fired. */
        uint64_t sc_expiry_actual_timeout : 1;/**< [  8:  8](R/W) Reserved.
                                                                 Internal:
                                                                 An active SC/SA has reached its sc_actual_timeout threshold.  See the leaf
                                                                 interrupt register to determine which SC fired. */
        uint64_t reserved_9_63         : 55;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_mcsx_cpm_rx_slave_cpm_rx_int_intr_rw_s cn; */
};
typedef union cavm_mcsx_cpm_rx_slave_cpm_rx_int_intr_rw cavm_mcsx_cpm_rx_slave_cpm_rx_int_intr_rw_t;

static inline uint64_t CAVM_MCSX_CPM_RX_SLAVE_CPM_RX_INT_INTR_RW(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_MCSX_CPM_RX_SLAVE_CPM_RX_INT_INTR_RW(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CNF10KB) && (a<=6))
        return 0x87e080000af0ll + 0x1000000ll * ((a) & 0x7);
    __cavm_csr_fatal("MCSX_CPM_RX_SLAVE_CPM_RX_INT_INTR_RW", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_MCSX_CPM_RX_SLAVE_CPM_RX_INT_INTR_RW(a) cavm_mcsx_cpm_rx_slave_cpm_rx_int_intr_rw_t
#define bustype_CAVM_MCSX_CPM_RX_SLAVE_CPM_RX_INT_INTR_RW(a) CSR_TYPE_RSL
#define basename_CAVM_MCSX_CPM_RX_SLAVE_CPM_RX_INT_INTR_RW(a) "MCSX_CPM_RX_SLAVE_CPM_RX_INT_INTR_RW"
#define device_bar_CAVM_MCSX_CPM_RX_SLAVE_CPM_RX_INT_INTR_RW(a) 0x0 /* PF_BAR0 */
#define busnum_CAVM_MCSX_CPM_RX_SLAVE_CPM_RX_INT_INTR_RW(a) (a)
#define arguments_CAVM_MCSX_CPM_RX_SLAVE_CPM_RX_INT_INTR_RW(a) (a),-1,-1,-1

/**
 * Register (RSL) mcs#_cpm_rx_slave_cpm_rx_int_raw
 *
 * MCS Cpm Rx Slave Cpm Rx Int Raw Register
 * Raw register for cpm_rx_int
 */
union cavm_mcsx_cpm_rx_slave_cpm_rx_int_raw
{
    uint64_t u;
    struct cavm_mcsx_cpm_rx_slave_cpm_rx_int_raw_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_9_63         : 55;
        uint64_t sc_expiry_actual_timeout : 1;/**< [  8:  8](RO) Reserved.
                                                                 Internal:
                                                                 An active SC/SA has reached its sc_actual_timeout threshold.  See the leaf
                                                                 interrupt register to determine which SC fired. */
        uint64_t sc_expiry_pre_timeout : 1;  /**< [  7:  7](RO) Reserved.
                                                                 Internal:
                                                                 An active SC/SA has reached its sc_pre_timeout threshold.  See the leaf
                                                                 interrupt register to determine which SC fired. */
        uint64_t pn_thresh_reached     : 1;  /**< [  6:  6](RO) Received a packet whose current PN is greater than or equal to the configurable threshold. */
        uint64_t packet_xpn_eq0        : 1;  /**< [  5:  5](RO) Received a packet whose (X)PN is equal to zero. */
        uint64_t sectag_sc_eq1_scb_eq1 : 1;  /**< [  4:  4](RO) (SecTag.SC == 1) and (SecTag.SCB == 1) detected. */
        uint64_t sectag_es_eq1_sc_eq1  : 1;  /**< [  3:  3](RO) (SecTag.ES == 1) and (SecTag.SC == 1) detected. */
        uint64_t sectag_sl_gte48       : 1;  /**< [  2:  2](RO) SecTag.SL greater than= 48 detected. */
        uint64_t sectag_e_eq0_c_eq1    : 1;  /**< [  1:  1](RO) (SecTag.E == 0) and (SecTag.C == 1) detected. */
        uint64_t sectag_v_eq1          : 1;  /**< [  0:  0](RO) SecTag.V == 1 detected. */
#else /* Word 0 - Little Endian */
        uint64_t sectag_v_eq1          : 1;  /**< [  0:  0](RO) SecTag.V == 1 detected. */
        uint64_t sectag_e_eq0_c_eq1    : 1;  /**< [  1:  1](RO) (SecTag.E == 0) and (SecTag.C == 1) detected. */
        uint64_t sectag_sl_gte48       : 1;  /**< [  2:  2](RO) SecTag.SL greater than= 48 detected. */
        uint64_t sectag_es_eq1_sc_eq1  : 1;  /**< [  3:  3](RO) (SecTag.ES == 1) and (SecTag.SC == 1) detected. */
        uint64_t sectag_sc_eq1_scb_eq1 : 1;  /**< [  4:  4](RO) (SecTag.SC == 1) and (SecTag.SCB == 1) detected. */
        uint64_t packet_xpn_eq0        : 1;  /**< [  5:  5](RO) Received a packet whose (X)PN is equal to zero. */
        uint64_t pn_thresh_reached     : 1;  /**< [  6:  6](RO) Received a packet whose current PN is greater than or equal to the configurable threshold. */
        uint64_t sc_expiry_pre_timeout : 1;  /**< [  7:  7](RO) Reserved.
                                                                 Internal:
                                                                 An active SC/SA has reached its sc_pre_timeout threshold.  See the leaf
                                                                 interrupt register to determine which SC fired. */
        uint64_t sc_expiry_actual_timeout : 1;/**< [  8:  8](RO) Reserved.
                                                                 Internal:
                                                                 An active SC/SA has reached its sc_actual_timeout threshold.  See the leaf
                                                                 interrupt register to determine which SC fired. */
        uint64_t reserved_9_63         : 55;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_mcsx_cpm_rx_slave_cpm_rx_int_raw_s cn; */
};
typedef union cavm_mcsx_cpm_rx_slave_cpm_rx_int_raw cavm_mcsx_cpm_rx_slave_cpm_rx_int_raw_t;

static inline uint64_t CAVM_MCSX_CPM_RX_SLAVE_CPM_RX_INT_RAW(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_MCSX_CPM_RX_SLAVE_CPM_RX_INT_RAW(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CNF10KB) && (a<=6))
        return 0x87e080000ae8ll + 0x1000000ll * ((a) & 0x7);
    __cavm_csr_fatal("MCSX_CPM_RX_SLAVE_CPM_RX_INT_RAW", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_MCSX_CPM_RX_SLAVE_CPM_RX_INT_RAW(a) cavm_mcsx_cpm_rx_slave_cpm_rx_int_raw_t
#define bustype_CAVM_MCSX_CPM_RX_SLAVE_CPM_RX_INT_RAW(a) CSR_TYPE_RSL
#define basename_CAVM_MCSX_CPM_RX_SLAVE_CPM_RX_INT_RAW(a) "MCSX_CPM_RX_SLAVE_CPM_RX_INT_RAW"
#define device_bar_CAVM_MCSX_CPM_RX_SLAVE_CPM_RX_INT_RAW(a) 0x0 /* PF_BAR0 */
#define busnum_CAVM_MCSX_CPM_RX_SLAVE_CPM_RX_INT_RAW(a) (a)
#define arguments_CAVM_MCSX_CPM_RX_SLAVE_CPM_RX_INT_RAW(a) (a),-1,-1,-1

/**
 * Register (RSL) mcs#_cpm_rx_slave_cpu_punt_enable
 *
 * MCS Cpm Rx Slave Cpu Punt Enable Register
 * Punt enable: Each bit corresponds to a particular error or exception case which when
 * enabled and detected will cause the packet to be punted downstream instead of being
 * dropped.  If not enabled for punt, then the errored or exception packet would be SOP
 * dropped in the PAB. A punted packet can also have a 4B Rx-MCS header inserted
 * through the corresponding ENABLE_RX_MCS_INSERTION config register.
 */
union cavm_mcsx_cpm_rx_slave_cpu_punt_enable
{
    uint64_t u;
    struct cavm_mcsx_cpm_rx_slave_cpu_punt_enable_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_7_63         : 57;
        uint64_t punt_sa_not_in_use    : 1;  /**< [  6:  6](R/W) Enables punting of packet to CPU if the packet SA is not in use. */
        uint64_t punt_sc_cam_miss      : 1;  /**< [  5:  5](R/W) Enables punting of packet to CPU if the packet encounters an SC CAM miss. */
        uint64_t punt_bad_tag          : 1;  /**< [  4:  4](R/W) Enables punting of packet to CPU if the packet's SecTag validation failed on one
                                                                 or more validation checks. */
        uint64_t punt_untagged         : 1;  /**< [  3:  3](R/W) Enables punting of packet to CPU if the packet is untagged. */
        uint64_t punt_ctrl_port_disabled : 1;/**< [  2:  2](R/W) Enables punting of packet if the packet is received and the controlled port is disabled. */
        uint64_t punt_flowid_tcam_miss : 1;  /**< [  1:  1](R/W) Enables punting of packet to CPU if a packet encounters a FlowID TCAM miss. */
        uint64_t punt_parse_error      : 1;  /**< [  0:  0](R/W) Enables punting of packet to CPU if the packet experienced a parsing eror. */
#else /* Word 0 - Little Endian */
        uint64_t punt_parse_error      : 1;  /**< [  0:  0](R/W) Enables punting of packet to CPU if the packet experienced a parsing eror. */
        uint64_t punt_flowid_tcam_miss : 1;  /**< [  1:  1](R/W) Enables punting of packet to CPU if a packet encounters a FlowID TCAM miss. */
        uint64_t punt_ctrl_port_disabled : 1;/**< [  2:  2](R/W) Enables punting of packet if the packet is received and the controlled port is disabled. */
        uint64_t punt_untagged         : 1;  /**< [  3:  3](R/W) Enables punting of packet to CPU if the packet is untagged. */
        uint64_t punt_bad_tag          : 1;  /**< [  4:  4](R/W) Enables punting of packet to CPU if the packet's SecTag validation failed on one
                                                                 or more validation checks. */
        uint64_t punt_sc_cam_miss      : 1;  /**< [  5:  5](R/W) Enables punting of packet to CPU if the packet encounters an SC CAM miss. */
        uint64_t punt_sa_not_in_use    : 1;  /**< [  6:  6](R/W) Enables punting of packet to CPU if the packet SA is not in use. */
        uint64_t reserved_7_63         : 57;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_mcsx_cpm_rx_slave_cpu_punt_enable_s cn; */
};
typedef union cavm_mcsx_cpm_rx_slave_cpu_punt_enable cavm_mcsx_cpm_rx_slave_cpu_punt_enable_t;

static inline uint64_t CAVM_MCSX_CPM_RX_SLAVE_CPU_PUNT_ENABLE(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_MCSX_CPM_RX_SLAVE_CPU_PUNT_ENABLE(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CNF10KB) && (a<=6))
        return 0x87e080000b40ll + 0x1000000ll * ((a) & 0x7);
    __cavm_csr_fatal("MCSX_CPM_RX_SLAVE_CPU_PUNT_ENABLE", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_MCSX_CPM_RX_SLAVE_CPU_PUNT_ENABLE(a) cavm_mcsx_cpm_rx_slave_cpu_punt_enable_t
#define bustype_CAVM_MCSX_CPM_RX_SLAVE_CPU_PUNT_ENABLE(a) CSR_TYPE_RSL
#define basename_CAVM_MCSX_CPM_RX_SLAVE_CPU_PUNT_ENABLE(a) "MCSX_CPM_RX_SLAVE_CPU_PUNT_ENABLE"
#define device_bar_CAVM_MCSX_CPM_RX_SLAVE_CPU_PUNT_ENABLE(a) 0x0 /* PF_BAR0 */
#define busnum_CAVM_MCSX_CPM_RX_SLAVE_CPU_PUNT_ENABLE(a) (a)
#define arguments_CAVM_MCSX_CPM_RX_SLAVE_CPU_PUNT_ENABLE(a) (a),-1,-1,-1

/**
 * Register (RSL) mcs#_cpm_rx_slave_dbg_mux_sel
 *
 * MCS Cpm Rx Slave Dbg Mux Sel Register
 * Per segment mux control for the debug_mux.  Configuration of this register will
 * affect which debug set is output on the corresponding debug mux logic for the CPM.
 */
union cavm_mcsx_cpm_rx_slave_dbg_mux_sel
{
    uint64_t u;
    struct cavm_mcsx_cpm_rx_slave_dbg_mux_sel_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_30_63        : 34;
        uint64_t seg3                  : 6;  /**< [ 29: 24](R/W) Select which debug set is output on the segment3 of the debug mux for the CPM.
                                                                 Note that a higher level dbg_mux_sel also exists to select which block's debug
                                                                 sets are to be output of the IP */
        uint64_t reserved_22_23        : 2;
        uint64_t seg2                  : 6;  /**< [ 21: 16](R/W) Select which debug set is output on the segment2 of the debug mux for the CPM.
                                                                 Note that a higher level dbg_mux_sel also exists to select which block's debug
                                                                 sets are to be output of the IP */
        uint64_t reserved_14_15        : 2;
        uint64_t seg1                  : 6;  /**< [ 13:  8](R/W) Select which debug set is output on the segment1 of the debug mux for the CPM.
                                                                 Note that a higher level dbg_mux_sel also exists to select which block's debug
                                                                 sets are to be output of the IP */
        uint64_t reserved_6_7          : 2;
        uint64_t seg0                  : 6;  /**< [  5:  0](R/W) Select which debug set is output on the segment0 of the debug mux for the CPM.
                                                                 Note that a higher level dbg_mux_sel also exists to select which block's debug
                                                                 sets are to be output of the IP */
#else /* Word 0 - Little Endian */
        uint64_t seg0                  : 6;  /**< [  5:  0](R/W) Select which debug set is output on the segment0 of the debug mux for the CPM.
                                                                 Note that a higher level dbg_mux_sel also exists to select which block's debug
                                                                 sets are to be output of the IP */
        uint64_t reserved_6_7          : 2;
        uint64_t seg1                  : 6;  /**< [ 13:  8](R/W) Select which debug set is output on the segment1 of the debug mux for the CPM.
                                                                 Note that a higher level dbg_mux_sel also exists to select which block's debug
                                                                 sets are to be output of the IP */
        uint64_t reserved_14_15        : 2;
        uint64_t seg2                  : 6;  /**< [ 21: 16](R/W) Select which debug set is output on the segment2 of the debug mux for the CPM.
                                                                 Note that a higher level dbg_mux_sel also exists to select which block's debug
                                                                 sets are to be output of the IP */
        uint64_t reserved_22_23        : 2;
        uint64_t seg3                  : 6;  /**< [ 29: 24](R/W) Select which debug set is output on the segment3 of the debug mux for the CPM.
                                                                 Note that a higher level dbg_mux_sel also exists to select which block's debug
                                                                 sets are to be output of the IP */
        uint64_t reserved_30_63        : 34;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_mcsx_cpm_rx_slave_dbg_mux_sel_s cn; */
};
typedef union cavm_mcsx_cpm_rx_slave_dbg_mux_sel cavm_mcsx_cpm_rx_slave_dbg_mux_sel_t;

static inline uint64_t CAVM_MCSX_CPM_RX_SLAVE_DBG_MUX_SEL(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_MCSX_CPM_RX_SLAVE_DBG_MUX_SEL(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CNF10KB) && (a<=6))
        return 0x87e080005490ll + 0x1000000ll * ((a) & 0x7);
    __cavm_csr_fatal("MCSX_CPM_RX_SLAVE_DBG_MUX_SEL", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_MCSX_CPM_RX_SLAVE_DBG_MUX_SEL(a) cavm_mcsx_cpm_rx_slave_dbg_mux_sel_t
#define bustype_CAVM_MCSX_CPM_RX_SLAVE_DBG_MUX_SEL(a) CSR_TYPE_RSL
#define basename_CAVM_MCSX_CPM_RX_SLAVE_DBG_MUX_SEL(a) "MCSX_CPM_RX_SLAVE_DBG_MUX_SEL"
#define device_bar_CAVM_MCSX_CPM_RX_SLAVE_DBG_MUX_SEL(a) 0x0 /* PF_BAR0 */
#define busnum_CAVM_MCSX_CPM_RX_SLAVE_DBG_MUX_SEL(a) (a)
#define arguments_CAVM_MCSX_CPM_RX_SLAVE_DBG_MUX_SEL(a) (a),-1,-1,-1

/**
 * Register (RSL) mcs#_cpm_rx_slave_debug_status
 *
 * MCS Cpm Rx Slave Debug Status Register
 * Debug status register:  Captures the debug set selected by dbg_mux_sel.
 */
union cavm_mcsx_cpm_rx_slave_debug_status
{
    uint64_t u;
    struct cavm_mcsx_cpm_rx_slave_debug_status_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t seg3                  : 16; /**< [ 63: 48](RO) Debug set status for segment3. */
        uint64_t seg2                  : 16; /**< [ 47: 32](RO) Debug set status for segment2. */
        uint64_t seg1                  : 16; /**< [ 31: 16](RO) Debug set status for segment1. */
        uint64_t seg0                  : 16; /**< [ 15:  0](RO) Debug set status for segment0. */
#else /* Word 0 - Little Endian */
        uint64_t seg0                  : 16; /**< [ 15:  0](RO) Debug set status for segment0. */
        uint64_t seg1                  : 16; /**< [ 31: 16](RO) Debug set status for segment1. */
        uint64_t seg2                  : 16; /**< [ 47: 32](RO) Debug set status for segment2. */
        uint64_t seg3                  : 16; /**< [ 63: 48](RO) Debug set status for segment3. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_mcsx_cpm_rx_slave_debug_status_s cn; */
};
typedef union cavm_mcsx_cpm_rx_slave_debug_status cavm_mcsx_cpm_rx_slave_debug_status_t;

static inline uint64_t CAVM_MCSX_CPM_RX_SLAVE_DEBUG_STATUS(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_MCSX_CPM_RX_SLAVE_DEBUG_STATUS(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CNF10KB) && (a<=6))
        return 0x87e080005498ll + 0x1000000ll * ((a) & 0x7);
    __cavm_csr_fatal("MCSX_CPM_RX_SLAVE_DEBUG_STATUS", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_MCSX_CPM_RX_SLAVE_DEBUG_STATUS(a) cavm_mcsx_cpm_rx_slave_debug_status_t
#define bustype_CAVM_MCSX_CPM_RX_SLAVE_DEBUG_STATUS(a) CSR_TYPE_RSL
#define basename_CAVM_MCSX_CPM_RX_SLAVE_DEBUG_STATUS(a) "MCSX_CPM_RX_SLAVE_DEBUG_STATUS"
#define device_bar_CAVM_MCSX_CPM_RX_SLAVE_DEBUG_STATUS(a) 0x0 /* PF_BAR0 */
#define busnum_CAVM_MCSX_CPM_RX_SLAVE_DEBUG_STATUS(a) (a)
#define arguments_CAVM_MCSX_CPM_RX_SLAVE_DEBUG_STATUS(a) (a),-1,-1,-1

/**
 * Register (RSL) mcs#_cpm_rx_slave_enable_rxmcs_insertion#_rsvd
 *
 * INTERNAL: MCS Cpm Rx Slave Enable Rxmcs Insertion Register
 *
 * Per port enable for inserting a 4B Rx-MCS header when a packet encounters an
 * error/exception that is enabled in the cpu_punt_enable register or if the packet is
 * a Kay or non-Kay control packet.
 */
union cavm_mcsx_cpm_rx_slave_enable_rxmcs_insertionx_rsvd
{
    uint64_t u;
    struct cavm_mcsx_cpm_rx_slave_enable_rxmcs_insertionx_rsvd_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_2_63         : 62;
        uint64_t insert_on_kay_ctrl    : 1;  /**< [  1:  1](R/W) Reserved. */
        uint64_t insert_on_err         : 1;  /**< [  0:  0](R/W) Reserved. */
#else /* Word 0 - Little Endian */
        uint64_t insert_on_err         : 1;  /**< [  0:  0](R/W) Reserved. */
        uint64_t insert_on_kay_ctrl    : 1;  /**< [  1:  1](R/W) Reserved. */
        uint64_t reserved_2_63         : 62;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_mcsx_cpm_rx_slave_enable_rxmcs_insertionx_rsvd_s cn; */
};
typedef union cavm_mcsx_cpm_rx_slave_enable_rxmcs_insertionx_rsvd cavm_mcsx_cpm_rx_slave_enable_rxmcs_insertionx_rsvd_t;

static inline uint64_t CAVM_MCSX_CPM_RX_SLAVE_ENABLE_RXMCS_INSERTIONX_RSVD(uint64_t a, uint64_t b) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_MCSX_CPM_RX_SLAVE_ENABLE_RXMCS_INSERTIONX_RSVD(uint64_t a, uint64_t b)
{
    if (cavm_is_model(OCTEONTX_CNF10KB) && ((a<=6) && (b<=3)))
        return 0x87e080000b48ll + 0x1000000ll * ((a) & 0x7) + 0x10ll * ((b) & 0x3);
    __cavm_csr_fatal("MCSX_CPM_RX_SLAVE_ENABLE_RXMCS_INSERTIONX_RSVD", 2, a, b, 0, 0, 0, 0);
}

#define typedef_CAVM_MCSX_CPM_RX_SLAVE_ENABLE_RXMCS_INSERTIONX_RSVD(a,b) cavm_mcsx_cpm_rx_slave_enable_rxmcs_insertionx_rsvd_t
#define bustype_CAVM_MCSX_CPM_RX_SLAVE_ENABLE_RXMCS_INSERTIONX_RSVD(a,b) CSR_TYPE_RSL
#define basename_CAVM_MCSX_CPM_RX_SLAVE_ENABLE_RXMCS_INSERTIONX_RSVD(a,b) "MCSX_CPM_RX_SLAVE_ENABLE_RXMCS_INSERTIONX_RSVD"
#define device_bar_CAVM_MCSX_CPM_RX_SLAVE_ENABLE_RXMCS_INSERTIONX_RSVD(a,b) 0x0 /* PF_BAR0 */
#define busnum_CAVM_MCSX_CPM_RX_SLAVE_ENABLE_RXMCS_INSERTIONX_RSVD(a,b) (a)
#define arguments_CAVM_MCSX_CPM_RX_SLAVE_ENABLE_RXMCS_INSERTIONX_RSVD(a,b) (a),(b),-1,-1

/**
 * Register (RSL) mcs#_cpm_rx_slave_flowid_tcam_data_0#
 *
 * MCS Cpm Rx Slave Flowid Tcam Data 0 Register
 * Flow ID TCAM - 64x208: With standard MACsec, a Security Association can only be
 * associated with a port.  WAN based MACsec allows different flows on the same port to
 * support different SecYs and Security Associations (SA) greatly expanding upon its
 * usefulness.  The first step in the classification process involves performing a
 * lookup in the Flow-ID TCAM based on the information extracted by the Packet
 * Extractor block to determine the Flow-ID index.  All packets including control
 * packets trigger a lookup in this TCAM. Note that there is also 64 entries of per bit
 * masks (flowid_tcam_mask).  The lookup key consists of the following sub-fields.
 */
union cavm_mcsx_cpm_rx_slave_flowid_tcam_data_0x
{
    uint64_t u;
    struct cavm_mcsx_cpm_rx_slave_flowid_tcam_data_0x_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t mac_sa                : 16; /**< [ 63: 48](R/W) MAC SA field extracted from the packet */
        uint64_t mac_da                : 48; /**< [ 47:  0](R/W) MAC DA field extracted from the packet */
#else /* Word 0 - Little Endian */
        uint64_t mac_da                : 48; /**< [ 47:  0](R/W) MAC DA field extracted from the packet */
        uint64_t mac_sa                : 16; /**< [ 63: 48](R/W) MAC SA field extracted from the packet */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_mcsx_cpm_rx_slave_flowid_tcam_data_0x_s cn; */
};
typedef union cavm_mcsx_cpm_rx_slave_flowid_tcam_data_0x cavm_mcsx_cpm_rx_slave_flowid_tcam_data_0x_t;

static inline uint64_t CAVM_MCSX_CPM_RX_SLAVE_FLOWID_TCAM_DATA_0X(uint64_t a, uint64_t b) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_MCSX_CPM_RX_SLAVE_FLOWID_TCAM_DATA_0X(uint64_t a, uint64_t b)
{
    if (cavm_is_model(OCTEONTX_CNF10KB) && ((a<=6) && (b<=63)))
        return 0x87e080003bf8ll + 0x1000000ll * ((a) & 0x7) + 0x20ll * ((b) & 0x3f);
    __cavm_csr_fatal("MCSX_CPM_RX_SLAVE_FLOWID_TCAM_DATA_0X", 2, a, b, 0, 0, 0, 0);
}

#define typedef_CAVM_MCSX_CPM_RX_SLAVE_FLOWID_TCAM_DATA_0X(a,b) cavm_mcsx_cpm_rx_slave_flowid_tcam_data_0x_t
#define bustype_CAVM_MCSX_CPM_RX_SLAVE_FLOWID_TCAM_DATA_0X(a,b) CSR_TYPE_RSL
#define basename_CAVM_MCSX_CPM_RX_SLAVE_FLOWID_TCAM_DATA_0X(a,b) "MCSX_CPM_RX_SLAVE_FLOWID_TCAM_DATA_0X"
#define device_bar_CAVM_MCSX_CPM_RX_SLAVE_FLOWID_TCAM_DATA_0X(a,b) 0x0 /* PF_BAR0 */
#define busnum_CAVM_MCSX_CPM_RX_SLAVE_FLOWID_TCAM_DATA_0X(a,b) (a)
#define arguments_CAVM_MCSX_CPM_RX_SLAVE_FLOWID_TCAM_DATA_0X(a,b) (a),(b),-1,-1

/**
 * Register (RSL) mcs#_cpm_rx_slave_flowid_tcam_data_1#
 *
 * MCS Cpm Rx Slave Flowid Tcam Data 1 Register
 * Flow ID TCAM - 64x208: With standard MACsec, a Security Association can only be
 * associated with a port.  WAN based MACsec allows different flows on the same port to
 * support different SecYs and Security Associations (SA) greatly expanding upon its
 * usefulness.  The first step in the classification process involves performing a
 * lookup in the Flow-ID TCAM based on the information extracted by the Packet
 * Extractor block to determine the Flow-ID index.  All packets including control
 * packets trigger a lookup in this TCAM. Note that there is also 64 entries of per bit
 * masks (flowid_tcam_mask).  The lookup key consists of the following sub-fields.
 */
union cavm_mcsx_cpm_rx_slave_flowid_tcam_data_1x
{
    uint64_t u;
    struct cavm_mcsx_cpm_rx_slave_flowid_tcam_data_1x_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t outer_tag_id          : 16; /**< [ 63: 48](R/W) Outermost VLAN ID {8'd0, VLAN_ID[11:0]} */
        uint64_t ether_type            : 16; /**< [ 47: 32](R/W) First E-Type found in the packet that doesn't match one of the preconfigured VLAN values. */
        uint64_t mac_sa                : 32; /**< [ 31:  0](R/W) MAC SA field extracted from the packet */
#else /* Word 0 - Little Endian */
        uint64_t mac_sa                : 32; /**< [ 31:  0](R/W) MAC SA field extracted from the packet */
        uint64_t ether_type            : 16; /**< [ 47: 32](R/W) First E-Type found in the packet that doesn't match one of the preconfigured VLAN values. */
        uint64_t outer_tag_id          : 16; /**< [ 63: 48](R/W) Outermost VLAN ID {8'd0, VLAN_ID[11:0]} */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_mcsx_cpm_rx_slave_flowid_tcam_data_1x_s cn; */
};
typedef union cavm_mcsx_cpm_rx_slave_flowid_tcam_data_1x cavm_mcsx_cpm_rx_slave_flowid_tcam_data_1x_t;

static inline uint64_t CAVM_MCSX_CPM_RX_SLAVE_FLOWID_TCAM_DATA_1X(uint64_t a, uint64_t b) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_MCSX_CPM_RX_SLAVE_FLOWID_TCAM_DATA_1X(uint64_t a, uint64_t b)
{
    if (cavm_is_model(OCTEONTX_CNF10KB) && ((a<=6) && (b<=63)))
        return 0x87e080003c00ll + 0x1000000ll * ((a) & 0x7) + 0x20ll * ((b) & 0x3f);
    __cavm_csr_fatal("MCSX_CPM_RX_SLAVE_FLOWID_TCAM_DATA_1X", 2, a, b, 0, 0, 0, 0);
}

#define typedef_CAVM_MCSX_CPM_RX_SLAVE_FLOWID_TCAM_DATA_1X(a,b) cavm_mcsx_cpm_rx_slave_flowid_tcam_data_1x_t
#define bustype_CAVM_MCSX_CPM_RX_SLAVE_FLOWID_TCAM_DATA_1X(a,b) CSR_TYPE_RSL
#define basename_CAVM_MCSX_CPM_RX_SLAVE_FLOWID_TCAM_DATA_1X(a,b) "MCSX_CPM_RX_SLAVE_FLOWID_TCAM_DATA_1X"
#define device_bar_CAVM_MCSX_CPM_RX_SLAVE_FLOWID_TCAM_DATA_1X(a,b) 0x0 /* PF_BAR0 */
#define busnum_CAVM_MCSX_CPM_RX_SLAVE_FLOWID_TCAM_DATA_1X(a,b) (a)
#define arguments_CAVM_MCSX_CPM_RX_SLAVE_FLOWID_TCAM_DATA_1X(a,b) (a),(b),-1,-1

/**
 * Register (RSL) mcs#_cpm_rx_slave_flowid_tcam_data_2#
 *
 * MCS Cpm Rx Slave Flowid Tcam Data 2 Register
 * Flow ID TCAM - 64x208: With standard MACsec, a Security Association can only be
 * associated with a port.  WAN based MACsec allows different flows on the same port to
 * support different SecYs and Security Associations (SA) greatly expanding upon its
 * usefulness.  The first step in the classification process involves performing a
 * lookup in the Flow-ID TCAM based on the information extracted by the Packet
 * Extractor block to determine the Flow-ID index.  All packets including control
 * packets trigger a lookup in this TCAM. Note that there is also 64 entries of per bit
 * masks (flowid_tcam_mask).  The lookup key consists of the following sub-fields.
 */
union cavm_mcsx_cpm_rx_slave_flowid_tcam_data_2x
{
    uint64_t u;
    struct cavm_mcsx_cpm_rx_slave_flowid_tcam_data_2x_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t inner_vlan_type       : 1;  /**< [ 63: 63](R/W) Encoded value indicating which VLAN TPID value matched for the second outermost VLAN Tag. */
        uint64_t outer_vlan_type       : 3;  /**< [ 62: 60](R/W) Encoded value indicating which VLAN TPID value matched for the outermost VLAN Tag. */
        uint64_t packet_type           : 4;  /**< [ 59: 56](R/W) Encoded Packet Type from the parser:
                                                                 0: No VLAN
                                                                 1: Single VLAN
                                                                 2: Two or more VLAN
                                                                 3-15: Reserved for future use */
        uint64_t tag_match_bitmap      : 8;  /**< [ 55: 48](R/W) Maps 1 to 1 with the set of configurable Etype CSRs and set when the associated
                                                                 E-Type (or TPID) was found in the packet. */
        uint64_t bonus_data            : 16; /**< [ 47: 32](R/W) Reserved.
                                                                 Internal:
                                                                 2 bytes of additional bonus data extracted from one of the custom tags. */
        uint64_t second_outer_priority : 4;  /**< [ 31: 28](R/W) 2nd Outermost VLAN {PCP/Pbits, DE/CFI} */
        uint64_t second_outer_tag_id   : 20; /**< [ 27:  8](R/W) 2nd Outermost VLAN ID {8'd0, VLAN_ID[11:0]} */
        uint64_t outer_priority        : 4;  /**< [  7:  4](R/W) Outermost VLAN {PCP/Pbits, DE/CFI} */
        uint64_t outer_tag_id          : 4;  /**< [  3:  0](R/W) Outermost VLAN ID {8'd0, VLAN_ID[11:0]} */
#else /* Word 0 - Little Endian */
        uint64_t outer_tag_id          : 4;  /**< [  3:  0](R/W) Outermost VLAN ID {8'd0, VLAN_ID[11:0]} */
        uint64_t outer_priority        : 4;  /**< [  7:  4](R/W) Outermost VLAN {PCP/Pbits, DE/CFI} */
        uint64_t second_outer_tag_id   : 20; /**< [ 27:  8](R/W) 2nd Outermost VLAN ID {8'd0, VLAN_ID[11:0]} */
        uint64_t second_outer_priority : 4;  /**< [ 31: 28](R/W) 2nd Outermost VLAN {PCP/Pbits, DE/CFI} */
        uint64_t bonus_data            : 16; /**< [ 47: 32](R/W) Reserved.
                                                                 Internal:
                                                                 2 bytes of additional bonus data extracted from one of the custom tags. */
        uint64_t tag_match_bitmap      : 8;  /**< [ 55: 48](R/W) Maps 1 to 1 with the set of configurable Etype CSRs and set when the associated
                                                                 E-Type (or TPID) was found in the packet. */
        uint64_t packet_type           : 4;  /**< [ 59: 56](R/W) Encoded Packet Type from the parser:
                                                                 0: No VLAN
                                                                 1: Single VLAN
                                                                 2: Two or more VLAN
                                                                 3-15: Reserved for future use */
        uint64_t outer_vlan_type       : 3;  /**< [ 62: 60](R/W) Encoded value indicating which VLAN TPID value matched for the outermost VLAN Tag. */
        uint64_t inner_vlan_type       : 1;  /**< [ 63: 63](R/W) Encoded value indicating which VLAN TPID value matched for the second outermost VLAN Tag. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_mcsx_cpm_rx_slave_flowid_tcam_data_2x_s cn; */
};
typedef union cavm_mcsx_cpm_rx_slave_flowid_tcam_data_2x cavm_mcsx_cpm_rx_slave_flowid_tcam_data_2x_t;

static inline uint64_t CAVM_MCSX_CPM_RX_SLAVE_FLOWID_TCAM_DATA_2X(uint64_t a, uint64_t b) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_MCSX_CPM_RX_SLAVE_FLOWID_TCAM_DATA_2X(uint64_t a, uint64_t b)
{
    if (cavm_is_model(OCTEONTX_CNF10KB) && ((a<=6) && (b<=63)))
        return 0x87e080003c08ll + 0x1000000ll * ((a) & 0x7) + 0x20ll * ((b) & 0x3f);
    __cavm_csr_fatal("MCSX_CPM_RX_SLAVE_FLOWID_TCAM_DATA_2X", 2, a, b, 0, 0, 0, 0);
}

#define typedef_CAVM_MCSX_CPM_RX_SLAVE_FLOWID_TCAM_DATA_2X(a,b) cavm_mcsx_cpm_rx_slave_flowid_tcam_data_2x_t
#define bustype_CAVM_MCSX_CPM_RX_SLAVE_FLOWID_TCAM_DATA_2X(a,b) CSR_TYPE_RSL
#define basename_CAVM_MCSX_CPM_RX_SLAVE_FLOWID_TCAM_DATA_2X(a,b) "MCSX_CPM_RX_SLAVE_FLOWID_TCAM_DATA_2X"
#define device_bar_CAVM_MCSX_CPM_RX_SLAVE_FLOWID_TCAM_DATA_2X(a,b) 0x0 /* PF_BAR0 */
#define busnum_CAVM_MCSX_CPM_RX_SLAVE_FLOWID_TCAM_DATA_2X(a,b) (a)
#define arguments_CAVM_MCSX_CPM_RX_SLAVE_FLOWID_TCAM_DATA_2X(a,b) (a),(b),-1,-1

/**
 * Register (RSL) mcs#_cpm_rx_slave_flowid_tcam_data_3#
 *
 * MCS Cpm Rx Slave Flowid Tcam Data 3 Register
 * Flow ID TCAM - 64x208: With standard MACsec, a Security Association can only be
 * associated with a port.  WAN based MACsec allows different flows on the same port to
 * support different SecYs and Security Associations (SA) greatly expanding upon its
 * usefulness.  The first step in the classification process involves performing a
 * lookup in the Flow-ID TCAM based on the information extracted by the Packet
 * Extractor block to determine the Flow-ID index.  All packets including control
 * packets trigger a lookup in this TCAM. Note that there is also 64 entries of per bit
 * masks (flowid_tcam_mask).  The lookup key consists of the following sub-fields.
 */
union cavm_mcsx_cpm_rx_slave_flowid_tcam_data_3x
{
    uint64_t u;
    struct cavm_mcsx_cpm_rx_slave_flowid_tcam_data_3x_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_16_63        : 48;
        uint64_t flowid_user_field     : 4;  /**< [ 15: 12](R/W) User-Defined Flow_ID */
        uint64_t port                  : 2;  /**< [ 11: 10](R/W) Port number, 0-3 */
        uint64_t express               : 1;  /**< [  9:  9](R/W) Reserved.
                                                                 Internal:
                                                                 Express packet. */
        uint64_t num_tags              : 7;  /**< [  8:  2](R/W) Number of VLAN tags before the SecTAG, excluding the Rx/Tx-MCS header tags.
                                                                 Bit 0: no tags before SecTAG
                                                                 Bit 1: 1 tag before SecTAG
                                                                 Bit 2: 2 tags before SecTAG
                                                                 Bit 3-6: Reserved. */
        uint64_t inner_vlan_type       : 2;  /**< [  1:  0](R/W) Encoded value indicating which VLAN TPID value matched for the second outermost VLAN Tag. */
#else /* Word 0 - Little Endian */
        uint64_t inner_vlan_type       : 2;  /**< [  1:  0](R/W) Encoded value indicating which VLAN TPID value matched for the second outermost VLAN Tag. */
        uint64_t num_tags              : 7;  /**< [  8:  2](R/W) Number of VLAN tags before the SecTAG, excluding the Rx/Tx-MCS header tags.
                                                                 Bit 0: no tags before SecTAG
                                                                 Bit 1: 1 tag before SecTAG
                                                                 Bit 2: 2 tags before SecTAG
                                                                 Bit 3-6: Reserved. */
        uint64_t express               : 1;  /**< [  9:  9](R/W) Reserved.
                                                                 Internal:
                                                                 Express packet. */
        uint64_t port                  : 2;  /**< [ 11: 10](R/W) Port number, 0-3 */
        uint64_t flowid_user_field     : 4;  /**< [ 15: 12](R/W) User-Defined Flow_ID */
        uint64_t reserved_16_63        : 48;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_mcsx_cpm_rx_slave_flowid_tcam_data_3x_s cn; */
};
typedef union cavm_mcsx_cpm_rx_slave_flowid_tcam_data_3x cavm_mcsx_cpm_rx_slave_flowid_tcam_data_3x_t;

static inline uint64_t CAVM_MCSX_CPM_RX_SLAVE_FLOWID_TCAM_DATA_3X(uint64_t a, uint64_t b) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_MCSX_CPM_RX_SLAVE_FLOWID_TCAM_DATA_3X(uint64_t a, uint64_t b)
{
    if (cavm_is_model(OCTEONTX_CNF10KB) && ((a<=6) && (b<=63)))
        return 0x87e080003c10ll + 0x1000000ll * ((a) & 0x7) + 0x20ll * ((b) & 0x3f);
    __cavm_csr_fatal("MCSX_CPM_RX_SLAVE_FLOWID_TCAM_DATA_3X", 2, a, b, 0, 0, 0, 0);
}

#define typedef_CAVM_MCSX_CPM_RX_SLAVE_FLOWID_TCAM_DATA_3X(a,b) cavm_mcsx_cpm_rx_slave_flowid_tcam_data_3x_t
#define bustype_CAVM_MCSX_CPM_RX_SLAVE_FLOWID_TCAM_DATA_3X(a,b) CSR_TYPE_RSL
#define basename_CAVM_MCSX_CPM_RX_SLAVE_FLOWID_TCAM_DATA_3X(a,b) "MCSX_CPM_RX_SLAVE_FLOWID_TCAM_DATA_3X"
#define device_bar_CAVM_MCSX_CPM_RX_SLAVE_FLOWID_TCAM_DATA_3X(a,b) 0x0 /* PF_BAR0 */
#define busnum_CAVM_MCSX_CPM_RX_SLAVE_FLOWID_TCAM_DATA_3X(a,b) (a)
#define arguments_CAVM_MCSX_CPM_RX_SLAVE_FLOWID_TCAM_DATA_3X(a,b) (a),(b),-1,-1

/**
 * Register (RSL) mcs#_cpm_rx_slave_flowid_tcam_mask_0#
 *
 * MCS Cpm Rx Slave Flowid Tcam Mask 0 Register
 * Flow ID TCAM_MASK - 64x208 : Set mask bit to 1 to mask/exclude corresponding
 * flowid_tcam_data bit from compare.  ie. that bit will result in a match.
 */
union cavm_mcsx_cpm_rx_slave_flowid_tcam_mask_0x
{
    uint64_t u;
    struct cavm_mcsx_cpm_rx_slave_flowid_tcam_mask_0x_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t mask_mac_sa           : 16; /**< [ 63: 48](R/W) Set bits to 1 to mask/exclude corresponding flowid_tcam_data bit from compare. */
        uint64_t mask_mac_da           : 48; /**< [ 47:  0](R/W) Set bits to 1 to mask/exclude corresponding flowid_tcam_data bit from compare. */
#else /* Word 0 - Little Endian */
        uint64_t mask_mac_da           : 48; /**< [ 47:  0](R/W) Set bits to 1 to mask/exclude corresponding flowid_tcam_data bit from compare. */
        uint64_t mask_mac_sa           : 16; /**< [ 63: 48](R/W) Set bits to 1 to mask/exclude corresponding flowid_tcam_data bit from compare. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_mcsx_cpm_rx_slave_flowid_tcam_mask_0x_s cn; */
};
typedef union cavm_mcsx_cpm_rx_slave_flowid_tcam_mask_0x cavm_mcsx_cpm_rx_slave_flowid_tcam_mask_0x_t;

static inline uint64_t CAVM_MCSX_CPM_RX_SLAVE_FLOWID_TCAM_MASK_0X(uint64_t a, uint64_t b) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_MCSX_CPM_RX_SLAVE_FLOWID_TCAM_MASK_0X(uint64_t a, uint64_t b)
{
    if (cavm_is_model(OCTEONTX_CNF10KB) && ((a<=6) && (b<=63)))
        return 0x87e0800043f8ll + 0x1000000ll * ((a) & 0x7) + 0x20ll * ((b) & 0x3f);
    __cavm_csr_fatal("MCSX_CPM_RX_SLAVE_FLOWID_TCAM_MASK_0X", 2, a, b, 0, 0, 0, 0);
}

#define typedef_CAVM_MCSX_CPM_RX_SLAVE_FLOWID_TCAM_MASK_0X(a,b) cavm_mcsx_cpm_rx_slave_flowid_tcam_mask_0x_t
#define bustype_CAVM_MCSX_CPM_RX_SLAVE_FLOWID_TCAM_MASK_0X(a,b) CSR_TYPE_RSL
#define basename_CAVM_MCSX_CPM_RX_SLAVE_FLOWID_TCAM_MASK_0X(a,b) "MCSX_CPM_RX_SLAVE_FLOWID_TCAM_MASK_0X"
#define device_bar_CAVM_MCSX_CPM_RX_SLAVE_FLOWID_TCAM_MASK_0X(a,b) 0x0 /* PF_BAR0 */
#define busnum_CAVM_MCSX_CPM_RX_SLAVE_FLOWID_TCAM_MASK_0X(a,b) (a)
#define arguments_CAVM_MCSX_CPM_RX_SLAVE_FLOWID_TCAM_MASK_0X(a,b) (a),(b),-1,-1

/**
 * Register (RSL) mcs#_cpm_rx_slave_flowid_tcam_mask_1#
 *
 * MCS Cpm Rx Slave Flowid Tcam Mask 1 Register
 * Flow ID TCAM_MASK - 64x208 : Set mask bit to 1 to mask/exclude corresponding
 * flowid_tcam_data bit from compare.  ie. that bit will result in a match.
 */
union cavm_mcsx_cpm_rx_slave_flowid_tcam_mask_1x
{
    uint64_t u;
    struct cavm_mcsx_cpm_rx_slave_flowid_tcam_mask_1x_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t mask_outer_tag_id     : 16; /**< [ 63: 48](R/W) Set bits to 1 to mask/exclude corresponding flowid_tcam_data bit from compare. */
        uint64_t mask_ether_type       : 16; /**< [ 47: 32](R/W) Set bits to 1 to mask/exclude corresponding flowid_tcam_data bit from compare. */
        uint64_t mask_mac_sa           : 32; /**< [ 31:  0](R/W) Set bits to 1 to mask/exclude corresponding flowid_tcam_data bit from compare. */
#else /* Word 0 - Little Endian */
        uint64_t mask_mac_sa           : 32; /**< [ 31:  0](R/W) Set bits to 1 to mask/exclude corresponding flowid_tcam_data bit from compare. */
        uint64_t mask_ether_type       : 16; /**< [ 47: 32](R/W) Set bits to 1 to mask/exclude corresponding flowid_tcam_data bit from compare. */
        uint64_t mask_outer_tag_id     : 16; /**< [ 63: 48](R/W) Set bits to 1 to mask/exclude corresponding flowid_tcam_data bit from compare. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_mcsx_cpm_rx_slave_flowid_tcam_mask_1x_s cn; */
};
typedef union cavm_mcsx_cpm_rx_slave_flowid_tcam_mask_1x cavm_mcsx_cpm_rx_slave_flowid_tcam_mask_1x_t;

static inline uint64_t CAVM_MCSX_CPM_RX_SLAVE_FLOWID_TCAM_MASK_1X(uint64_t a, uint64_t b) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_MCSX_CPM_RX_SLAVE_FLOWID_TCAM_MASK_1X(uint64_t a, uint64_t b)
{
    if (cavm_is_model(OCTEONTX_CNF10KB) && ((a<=6) && (b<=63)))
        return 0x87e080004400ll + 0x1000000ll * ((a) & 0x7) + 0x20ll * ((b) & 0x3f);
    __cavm_csr_fatal("MCSX_CPM_RX_SLAVE_FLOWID_TCAM_MASK_1X", 2, a, b, 0, 0, 0, 0);
}

#define typedef_CAVM_MCSX_CPM_RX_SLAVE_FLOWID_TCAM_MASK_1X(a,b) cavm_mcsx_cpm_rx_slave_flowid_tcam_mask_1x_t
#define bustype_CAVM_MCSX_CPM_RX_SLAVE_FLOWID_TCAM_MASK_1X(a,b) CSR_TYPE_RSL
#define basename_CAVM_MCSX_CPM_RX_SLAVE_FLOWID_TCAM_MASK_1X(a,b) "MCSX_CPM_RX_SLAVE_FLOWID_TCAM_MASK_1X"
#define device_bar_CAVM_MCSX_CPM_RX_SLAVE_FLOWID_TCAM_MASK_1X(a,b) 0x0 /* PF_BAR0 */
#define busnum_CAVM_MCSX_CPM_RX_SLAVE_FLOWID_TCAM_MASK_1X(a,b) (a)
#define arguments_CAVM_MCSX_CPM_RX_SLAVE_FLOWID_TCAM_MASK_1X(a,b) (a),(b),-1,-1

/**
 * Register (RSL) mcs#_cpm_rx_slave_flowid_tcam_mask_2#
 *
 * MCS Cpm Rx Slave Flowid Tcam Mask 2 Register
 * Flow ID TCAM_MASK - 64x208 : Set mask bit to 1 to mask/exclude corresponding
 * flowid_tcam_data bit from compare.  ie. that bit will result in a match.
 */
union cavm_mcsx_cpm_rx_slave_flowid_tcam_mask_2x
{
    uint64_t u;
    struct cavm_mcsx_cpm_rx_slave_flowid_tcam_mask_2x_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t mask_inner_vlan_type  : 1;  /**< [ 63: 63](R/W) Set bits to 1 to mask/exclude corresponding flowid_tcam_data bit from compare. */
        uint64_t mask_outer_vlan_type  : 3;  /**< [ 62: 60](R/W) Set bits to 1 to mask/exclude corresponding flowid_tcam_data bit from compare. */
        uint64_t mask_packet_type      : 4;  /**< [ 59: 56](R/W) Set bits to 1 to mask/exclude corresponding flowid_tcam_data bit from compare. */
        uint64_t mask_tag_match_bitmap : 8;  /**< [ 55: 48](R/W) Set bits to 1 to mask/exclude corresponding flowid_tcam_data bit from compare. */
        uint64_t mask_bonus_data       : 16; /**< [ 47: 32](R/W) Reserved.
                                                                 Internal:
                                                                 Set bits to 1 to mask/exclude corresponding flowid_tcam_data bit from compare. */
        uint64_t mask_second_outer_priority : 4;/**< [ 31: 28](R/W) Set bits to 1 to mask/exclude corresponding flowid_tcam_data bit from compare. */
        uint64_t mask_second_outer_tag_id : 20;/**< [ 27:  8](R/W) Set bits to 1 to mask/exclude corresponding flowid_tcam_data bit from compare. */
        uint64_t mask_outer_priority   : 4;  /**< [  7:  4](R/W) Set bits to 1 to mask/exclude corresponding flowid_tcam_data bit from compare. */
        uint64_t mask_outer_tag_id     : 4;  /**< [  3:  0](R/W) Set bits to 1 to mask/exclude corresponding flowid_tcam_data bit from compare. */
#else /* Word 0 - Little Endian */
        uint64_t mask_outer_tag_id     : 4;  /**< [  3:  0](R/W) Set bits to 1 to mask/exclude corresponding flowid_tcam_data bit from compare. */
        uint64_t mask_outer_priority   : 4;  /**< [  7:  4](R/W) Set bits to 1 to mask/exclude corresponding flowid_tcam_data bit from compare. */
        uint64_t mask_second_outer_tag_id : 20;/**< [ 27:  8](R/W) Set bits to 1 to mask/exclude corresponding flowid_tcam_data bit from compare. */
        uint64_t mask_second_outer_priority : 4;/**< [ 31: 28](R/W) Set bits to 1 to mask/exclude corresponding flowid_tcam_data bit from compare. */
        uint64_t mask_bonus_data       : 16; /**< [ 47: 32](R/W) Reserved.
                                                                 Internal:
                                                                 Set bits to 1 to mask/exclude corresponding flowid_tcam_data bit from compare. */
        uint64_t mask_tag_match_bitmap : 8;  /**< [ 55: 48](R/W) Set bits to 1 to mask/exclude corresponding flowid_tcam_data bit from compare. */
        uint64_t mask_packet_type      : 4;  /**< [ 59: 56](R/W) Set bits to 1 to mask/exclude corresponding flowid_tcam_data bit from compare. */
        uint64_t mask_outer_vlan_type  : 3;  /**< [ 62: 60](R/W) Set bits to 1 to mask/exclude corresponding flowid_tcam_data bit from compare. */
        uint64_t mask_inner_vlan_type  : 1;  /**< [ 63: 63](R/W) Set bits to 1 to mask/exclude corresponding flowid_tcam_data bit from compare. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_mcsx_cpm_rx_slave_flowid_tcam_mask_2x_s cn; */
};
typedef union cavm_mcsx_cpm_rx_slave_flowid_tcam_mask_2x cavm_mcsx_cpm_rx_slave_flowid_tcam_mask_2x_t;

static inline uint64_t CAVM_MCSX_CPM_RX_SLAVE_FLOWID_TCAM_MASK_2X(uint64_t a, uint64_t b) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_MCSX_CPM_RX_SLAVE_FLOWID_TCAM_MASK_2X(uint64_t a, uint64_t b)
{
    if (cavm_is_model(OCTEONTX_CNF10KB) && ((a<=6) && (b<=63)))
        return 0x87e080004408ll + 0x1000000ll * ((a) & 0x7) + 0x20ll * ((b) & 0x3f);
    __cavm_csr_fatal("MCSX_CPM_RX_SLAVE_FLOWID_TCAM_MASK_2X", 2, a, b, 0, 0, 0, 0);
}

#define typedef_CAVM_MCSX_CPM_RX_SLAVE_FLOWID_TCAM_MASK_2X(a,b) cavm_mcsx_cpm_rx_slave_flowid_tcam_mask_2x_t
#define bustype_CAVM_MCSX_CPM_RX_SLAVE_FLOWID_TCAM_MASK_2X(a,b) CSR_TYPE_RSL
#define basename_CAVM_MCSX_CPM_RX_SLAVE_FLOWID_TCAM_MASK_2X(a,b) "MCSX_CPM_RX_SLAVE_FLOWID_TCAM_MASK_2X"
#define device_bar_CAVM_MCSX_CPM_RX_SLAVE_FLOWID_TCAM_MASK_2X(a,b) 0x0 /* PF_BAR0 */
#define busnum_CAVM_MCSX_CPM_RX_SLAVE_FLOWID_TCAM_MASK_2X(a,b) (a)
#define arguments_CAVM_MCSX_CPM_RX_SLAVE_FLOWID_TCAM_MASK_2X(a,b) (a),(b),-1,-1

/**
 * Register (RSL) mcs#_cpm_rx_slave_flowid_tcam_mask_3#
 *
 * MCS Cpm Rx Slave Flowid Tcam Mask 3 Register
 * Flow ID TCAM_MASK - 64x208 : Set mask bit to 1 to mask/exclude corresponding
 * flowid_tcam_data bit from compare.  ie. that bit will result in a match.
 */
union cavm_mcsx_cpm_rx_slave_flowid_tcam_mask_3x
{
    uint64_t u;
    struct cavm_mcsx_cpm_rx_slave_flowid_tcam_mask_3x_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_16_63        : 48;
        uint64_t mask_flowid_user_field : 4; /**< [ 15: 12](R/W) Set bits to 1 to mask/exclude corresponding flowid_tcam_data bit from compare. */
        uint64_t mask_port             : 2;  /**< [ 11: 10](R/W) Set bits to 1 to mask/exclude corresponding flowid_tcam_data bit from compare. */
        uint64_t mask_express          : 1;  /**< [  9:  9](R/W) Reserved.
                                                                 Internal:
                                                                 Set bits to 1 to mask/exclude corresponding flowid_tcam_data bit from compare. */
        uint64_t mask_num_tags         : 7;  /**< [  8:  2](R/W) Set bits to 1 to mask/exclude corresponding flowid_tcam_data bit from compare. */
        uint64_t mask_inner_vlan_type  : 2;  /**< [  1:  0](R/W) Set bits to 1 to mask/exclude corresponding flowid_tcam_data bit from compare. */
#else /* Word 0 - Little Endian */
        uint64_t mask_inner_vlan_type  : 2;  /**< [  1:  0](R/W) Set bits to 1 to mask/exclude corresponding flowid_tcam_data bit from compare. */
        uint64_t mask_num_tags         : 7;  /**< [  8:  2](R/W) Set bits to 1 to mask/exclude corresponding flowid_tcam_data bit from compare. */
        uint64_t mask_express          : 1;  /**< [  9:  9](R/W) Reserved.
                                                                 Internal:
                                                                 Set bits to 1 to mask/exclude corresponding flowid_tcam_data bit from compare. */
        uint64_t mask_port             : 2;  /**< [ 11: 10](R/W) Set bits to 1 to mask/exclude corresponding flowid_tcam_data bit from compare. */
        uint64_t mask_flowid_user_field : 4; /**< [ 15: 12](R/W) Set bits to 1 to mask/exclude corresponding flowid_tcam_data bit from compare. */
        uint64_t reserved_16_63        : 48;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_mcsx_cpm_rx_slave_flowid_tcam_mask_3x_s cn; */
};
typedef union cavm_mcsx_cpm_rx_slave_flowid_tcam_mask_3x cavm_mcsx_cpm_rx_slave_flowid_tcam_mask_3x_t;

static inline uint64_t CAVM_MCSX_CPM_RX_SLAVE_FLOWID_TCAM_MASK_3X(uint64_t a, uint64_t b) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_MCSX_CPM_RX_SLAVE_FLOWID_TCAM_MASK_3X(uint64_t a, uint64_t b)
{
    if (cavm_is_model(OCTEONTX_CNF10KB) && ((a<=6) && (b<=63)))
        return 0x87e080004410ll + 0x1000000ll * ((a) & 0x7) + 0x20ll * ((b) & 0x3f);
    __cavm_csr_fatal("MCSX_CPM_RX_SLAVE_FLOWID_TCAM_MASK_3X", 2, a, b, 0, 0, 0, 0);
}

#define typedef_CAVM_MCSX_CPM_RX_SLAVE_FLOWID_TCAM_MASK_3X(a,b) cavm_mcsx_cpm_rx_slave_flowid_tcam_mask_3x_t
#define bustype_CAVM_MCSX_CPM_RX_SLAVE_FLOWID_TCAM_MASK_3X(a,b) CSR_TYPE_RSL
#define basename_CAVM_MCSX_CPM_RX_SLAVE_FLOWID_TCAM_MASK_3X(a,b) "MCSX_CPM_RX_SLAVE_FLOWID_TCAM_MASK_3X"
#define device_bar_CAVM_MCSX_CPM_RX_SLAVE_FLOWID_TCAM_MASK_3X(a,b) 0x0 /* PF_BAR0 */
#define busnum_CAVM_MCSX_CPM_RX_SLAVE_FLOWID_TCAM_MASK_3X(a,b) (a)
#define arguments_CAVM_MCSX_CPM_RX_SLAVE_FLOWID_TCAM_MASK_3X(a,b) (a),(b),-1,-1

/**
 * Register (RSL) mcs#_cpm_rx_slave_packet_seen_rw_an#_0
 *
 * MCS Cpm Rx Slave Packet Seen Rw An 0 Register
 * Per SC packet seen status for each SC.
 */
union cavm_mcsx_cpm_rx_slave_packet_seen_rw_anx_0
{
    uint64_t u;
    struct cavm_mcsx_cpm_rx_slave_packet_seen_rw_anx_0_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t sc                    : 64; /**< [ 63:  0](R/W) Each bit corresponds to an SC for a given sectag.AN.  If the bit is set then
                                                                 that SC has seen a packet since the bit was last cleared by SW.  Clearing by SW
                                                                 is done through the packet_seen_w1c_an[0..3] registers.  The significance of a
                                                                 bit getting set is that packets are being received on a new AN (which also maps
                                                                 to a new SA).  At some point, the old AN (old SA) should be invalidated.  This
                                                                 register notifies SW that a new AN (new SA) is active and as such SW can
                                                                 configure the timeout for the old AN (old SA) to invalidate after some fixed
                                                                 amount of time. */
#else /* Word 0 - Little Endian */
        uint64_t sc                    : 64; /**< [ 63:  0](R/W) Each bit corresponds to an SC for a given sectag.AN.  If the bit is set then
                                                                 that SC has seen a packet since the bit was last cleared by SW.  Clearing by SW
                                                                 is done through the packet_seen_w1c_an[0..3] registers.  The significance of a
                                                                 bit getting set is that packets are being received on a new AN (which also maps
                                                                 to a new SA).  At some point, the old AN (old SA) should be invalidated.  This
                                                                 register notifies SW that a new AN (new SA) is active and as such SW can
                                                                 configure the timeout for the old AN (old SA) to invalidate after some fixed
                                                                 amount of time. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_mcsx_cpm_rx_slave_packet_seen_rw_anx_0_s cn; */
};
typedef union cavm_mcsx_cpm_rx_slave_packet_seen_rw_anx_0 cavm_mcsx_cpm_rx_slave_packet_seen_rw_anx_0_t;

static inline uint64_t CAVM_MCSX_CPM_RX_SLAVE_PACKET_SEEN_RW_ANX_0(uint64_t a, uint64_t b) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_MCSX_CPM_RX_SLAVE_PACKET_SEEN_RW_ANX_0(uint64_t a, uint64_t b)
{
    if (cavm_is_model(OCTEONTX_CNF10KB) && ((a<=6) && (b<=3)))
        return 0x87e080005450ll + 0x1000000ll * ((a) & 0x7) + 8ll * ((b) & 0x3);
    __cavm_csr_fatal("MCSX_CPM_RX_SLAVE_PACKET_SEEN_RW_ANX_0", 2, a, b, 0, 0, 0, 0);
}

#define typedef_CAVM_MCSX_CPM_RX_SLAVE_PACKET_SEEN_RW_ANX_0(a,b) cavm_mcsx_cpm_rx_slave_packet_seen_rw_anx_0_t
#define bustype_CAVM_MCSX_CPM_RX_SLAVE_PACKET_SEEN_RW_ANX_0(a,b) CSR_TYPE_RSL
#define basename_CAVM_MCSX_CPM_RX_SLAVE_PACKET_SEEN_RW_ANX_0(a,b) "MCSX_CPM_RX_SLAVE_PACKET_SEEN_RW_ANX_0"
#define device_bar_CAVM_MCSX_CPM_RX_SLAVE_PACKET_SEEN_RW_ANX_0(a,b) 0x0 /* PF_BAR0 */
#define busnum_CAVM_MCSX_CPM_RX_SLAVE_PACKET_SEEN_RW_ANX_0(a,b) (a)
#define arguments_CAVM_MCSX_CPM_RX_SLAVE_PACKET_SEEN_RW_ANX_0(a,b) (a),(b),-1,-1

/**
 * Register (RSL) mcs#_cpm_rx_slave_packet_seen_w1c_an#_0
 *
 * MCS Cpm Rx Slave Packet Seen W1c An 0 Register
 * Per SC packet seen write-one-to-clear (W1C)
 */
union cavm_mcsx_cpm_rx_slave_packet_seen_w1c_anx_0
{
    uint64_t u;
    struct cavm_mcsx_cpm_rx_slave_packet_seen_w1c_anx_0_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t sc                    : 64; /**< [ 63:  0](R/W1C/H) Each bit in packet_seen_w1c_an[0..3], when written to 1, will clear the
                                                                 corresponding bit in packet_seen_rw_an[0..3] register.  Writing a 0 to the bit
                                                                 has no effect on packet_seen_rw_an.  Note also that this register will always
                                                                 read back 0s. */
#else /* Word 0 - Little Endian */
        uint64_t sc                    : 64; /**< [ 63:  0](R/W1C/H) Each bit in packet_seen_w1c_an[0..3], when written to 1, will clear the
                                                                 corresponding bit in packet_seen_rw_an[0..3] register.  Writing a 0 to the bit
                                                                 has no effect on packet_seen_rw_an.  Note also that this register will always
                                                                 read back 0s. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_mcsx_cpm_rx_slave_packet_seen_w1c_anx_0_s cn; */
};
typedef union cavm_mcsx_cpm_rx_slave_packet_seen_w1c_anx_0 cavm_mcsx_cpm_rx_slave_packet_seen_w1c_anx_0_t;

static inline uint64_t CAVM_MCSX_CPM_RX_SLAVE_PACKET_SEEN_W1C_ANX_0(uint64_t a, uint64_t b) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_MCSX_CPM_RX_SLAVE_PACKET_SEEN_W1C_ANX_0(uint64_t a, uint64_t b)
{
    if (cavm_is_model(OCTEONTX_CNF10KB) && ((a<=6) && (b<=3)))
        return 0x87e080005470ll + 0x1000000ll * ((a) & 0x7) + 8ll * ((b) & 0x3);
    __cavm_csr_fatal("MCSX_CPM_RX_SLAVE_PACKET_SEEN_W1C_ANX_0", 2, a, b, 0, 0, 0, 0);
}

#define typedef_CAVM_MCSX_CPM_RX_SLAVE_PACKET_SEEN_W1C_ANX_0(a,b) cavm_mcsx_cpm_rx_slave_packet_seen_w1c_anx_0_t
#define bustype_CAVM_MCSX_CPM_RX_SLAVE_PACKET_SEEN_W1C_ANX_0(a,b) CSR_TYPE_RSL
#define basename_CAVM_MCSX_CPM_RX_SLAVE_PACKET_SEEN_W1C_ANX_0(a,b) "MCSX_CPM_RX_SLAVE_PACKET_SEEN_W1C_ANX_0"
#define device_bar_CAVM_MCSX_CPM_RX_SLAVE_PACKET_SEEN_W1C_ANX_0(a,b) 0x0 /* PF_BAR0 */
#define busnum_CAVM_MCSX_CPM_RX_SLAVE_PACKET_SEEN_W1C_ANX_0(a,b) (a)
#define arguments_CAVM_MCSX_CPM_RX_SLAVE_PACKET_SEEN_W1C_ANX_0(a,b) (a),(b),-1,-1

/**
 * Register (RSL) mcs#_cpm_rx_slave_pn_thresh_reached#
 *
 * MCS Cpm Rx Slave Pn Thresh Reached Register
 * Combined pn_thresh_reached registers: The corresponding bit (per SA) is set when a
 * MACSec packet passes all the secure frame verification checks and its recovered PN
 * is greater than or equal to the configured pn_threshold or xpn_threshold.  The
 * corresponding bit is automatically cleared when SW clears the corresponding SA's
 * sa_in_use bit (sa_map_mem).
 */
union cavm_mcsx_cpm_rx_slave_pn_thresh_reachedx
{
    uint64_t u;
    struct cavm_mcsx_cpm_rx_slave_pn_thresh_reachedx_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t sa                    : 64; /**< [ 63:  0](RO) When set, indicates that corresponding SA has reached or exceeded its associated
                                                                 pn_threshold or xpn_threshold. */
#else /* Word 0 - Little Endian */
        uint64_t sa                    : 64; /**< [ 63:  0](RO) When set, indicates that corresponding SA has reached or exceeded its associated
                                                                 pn_threshold or xpn_threshold. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_mcsx_cpm_rx_slave_pn_thresh_reachedx_s cn; */
};
typedef union cavm_mcsx_cpm_rx_slave_pn_thresh_reachedx cavm_mcsx_cpm_rx_slave_pn_thresh_reachedx_t;

static inline uint64_t CAVM_MCSX_CPM_RX_SLAVE_PN_THRESH_REACHEDX(uint64_t a, uint64_t b) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_MCSX_CPM_RX_SLAVE_PN_THRESH_REACHEDX(uint64_t a, uint64_t b)
{
    if (cavm_is_model(OCTEONTX_CNF10KB) && ((a<=6) && (b<=1)))
        return 0x87e080000ba0ll + 0x1000000ll * ((a) & 0x7) + 8ll * ((b) & 0x1);
    __cavm_csr_fatal("MCSX_CPM_RX_SLAVE_PN_THRESH_REACHEDX", 2, a, b, 0, 0, 0, 0);
}

#define typedef_CAVM_MCSX_CPM_RX_SLAVE_PN_THRESH_REACHEDX(a,b) cavm_mcsx_cpm_rx_slave_pn_thresh_reachedx_t
#define bustype_CAVM_MCSX_CPM_RX_SLAVE_PN_THRESH_REACHEDX(a,b) CSR_TYPE_RSL
#define basename_CAVM_MCSX_CPM_RX_SLAVE_PN_THRESH_REACHEDX(a,b) "MCSX_CPM_RX_SLAVE_PN_THRESH_REACHEDX"
#define device_bar_CAVM_MCSX_CPM_RX_SLAVE_PN_THRESH_REACHEDX(a,b) 0x0 /* PF_BAR0 */
#define busnum_CAVM_MCSX_CPM_RX_SLAVE_PN_THRESH_REACHEDX(a,b) (a)
#define arguments_CAVM_MCSX_CPM_RX_SLAVE_PN_THRESH_REACHEDX(a,b) (a),(b),-1,-1

/**
 * Register (RSL) mcs#_cpm_rx_slave_pn_threshold
 *
 * MCS Cpm Rx Slave Pn Threshold Register
 * PN Mode Threshold: 32b PN threshold to trigger interrupt if enabled.  The interrupt
 * fires when the received packet uses 32b PN and is classed as an InPktsOK (refer to
 * Secure Frame Validation 10-4 ieee.802.1) and whose 32b PN greater than=
 * {pn_threshold}.
 */
union cavm_mcsx_cpm_rx_slave_pn_threshold
{
    uint64_t u;
    struct cavm_mcsx_cpm_rx_slave_pn_threshold_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_32_63        : 32;
        uint64_t pn_threshold          : 32; /**< [ 31:  0](R/W) 32b pn_threshold */
#else /* Word 0 - Little Endian */
        uint64_t pn_threshold          : 32; /**< [ 31:  0](R/W) 32b pn_threshold */
        uint64_t reserved_32_63        : 32;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_mcsx_cpm_rx_slave_pn_threshold_s cn; */
};
typedef union cavm_mcsx_cpm_rx_slave_pn_threshold cavm_mcsx_cpm_rx_slave_pn_threshold_t;

static inline uint64_t CAVM_MCSX_CPM_RX_SLAVE_PN_THRESHOLD(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_MCSX_CPM_RX_SLAVE_PN_THRESHOLD(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CNF10KB) && (a<=6))
        return 0x87e080000b98ll + 0x1000000ll * ((a) & 0x7);
    __cavm_csr_fatal("MCSX_CPM_RX_SLAVE_PN_THRESHOLD", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_MCSX_CPM_RX_SLAVE_PN_THRESHOLD(a) cavm_mcsx_cpm_rx_slave_pn_threshold_t
#define bustype_CAVM_MCSX_CPM_RX_SLAVE_PN_THRESHOLD(a) CSR_TYPE_RSL
#define basename_CAVM_MCSX_CPM_RX_SLAVE_PN_THRESHOLD(a) "MCSX_CPM_RX_SLAVE_PN_THRESHOLD"
#define device_bar_CAVM_MCSX_CPM_RX_SLAVE_PN_THRESHOLD(a) 0x0 /* PF_BAR0 */
#define busnum_CAVM_MCSX_CPM_RX_SLAVE_PN_THRESHOLD(a) (a)
#define arguments_CAVM_MCSX_CPM_RX_SLAVE_PN_THRESHOLD(a) (a),-1,-1,-1

/**
 * Register (RSL) mcs#_cpm_rx_slave_rx_default_sci
 *
 * MCS Cpm Rx Slave Rx Default Sci Register
 * A 64b default SCI is required for the case when the incoming SecTag.TCI.SC==SecTag.TCI.ES==0.
 */
union cavm_mcsx_cpm_rx_slave_rx_default_sci
{
    uint64_t u;
    struct cavm_mcsx_cpm_rx_slave_rx_default_sci_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t rx_default_sci_msb    : 32; /**< [ 63: 32](R/W) Default SCI[63:32]. */
        uint64_t rx_default_sci_lsb    : 32; /**< [ 31:  0](R/W) Default SCI[31:0]. */
#else /* Word 0 - Little Endian */
        uint64_t rx_default_sci_lsb    : 32; /**< [ 31:  0](R/W) Default SCI[31:0]. */
        uint64_t rx_default_sci_msb    : 32; /**< [ 63: 32](R/W) Default SCI[63:32]. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_mcsx_cpm_rx_slave_rx_default_sci_s cn; */
};
typedef union cavm_mcsx_cpm_rx_slave_rx_default_sci cavm_mcsx_cpm_rx_slave_rx_default_sci_t;

static inline uint64_t CAVM_MCSX_CPM_RX_SLAVE_RX_DEFAULT_SCI(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_MCSX_CPM_RX_SLAVE_RX_DEFAULT_SCI(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CNF10KB) && (a<=6))
        return 0x87e080000b88ll + 0x1000000ll * ((a) & 0x7);
    __cavm_csr_fatal("MCSX_CPM_RX_SLAVE_RX_DEFAULT_SCI", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_MCSX_CPM_RX_SLAVE_RX_DEFAULT_SCI(a) cavm_mcsx_cpm_rx_slave_rx_default_sci_t
#define bustype_CAVM_MCSX_CPM_RX_SLAVE_RX_DEFAULT_SCI(a) CSR_TYPE_RSL
#define basename_CAVM_MCSX_CPM_RX_SLAVE_RX_DEFAULT_SCI(a) "MCSX_CPM_RX_SLAVE_RX_DEFAULT_SCI"
#define device_bar_CAVM_MCSX_CPM_RX_SLAVE_RX_DEFAULT_SCI(a) 0x0 /* PF_BAR0 */
#define busnum_CAVM_MCSX_CPM_RX_SLAVE_RX_DEFAULT_SCI(a) (a)
#define arguments_CAVM_MCSX_CPM_RX_SLAVE_RX_DEFAULT_SCI(a) (a),-1,-1,-1

/**
 * Register (RSL) mcs#_cpm_rx_slave_rx_etype
 *
 * MCS Cpm Rx Slave Rx Etype Register
 * Configuration of ETYPE register.  Valid MACSec SecTag ETYPE match patterns: 2
 * configurable patterns that are considered valid MACSec SecTag ETYPEs.  If the
 * incoming packet SecTag ETYPE does not match either of these 2 field values then the
 * packet is classified to be an untagged packet.
 */
union cavm_mcsx_cpm_rx_slave_rx_etype
{
    uint64_t u;
    struct cavm_mcsx_cpm_rx_slave_rx_etype_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_48_63        : 16;
        uint64_t rx_mcs_hdr_etype      : 16; /**< [ 47: 32](R/W) Reserved.
                                                                 Internal:
                                                                 MCS header E-type to insert. */
        uint64_t rx_sectag_etype2      : 16; /**< [ 31: 16](R/W) SecTag ETYPE pattern 2 to match on.  This field needs to match the PEX's sectag_cfg.sectag_etype */
        uint64_t rx_sectag_etype1      : 16; /**< [ 15:  0](R/W) SecTag ETYPE pattern 1 to match on.  This field needs to match the PEX's sectag_cfg.sectag_etype */
#else /* Word 0 - Little Endian */
        uint64_t rx_sectag_etype1      : 16; /**< [ 15:  0](R/W) SecTag ETYPE pattern 1 to match on.  This field needs to match the PEX's sectag_cfg.sectag_etype */
        uint64_t rx_sectag_etype2      : 16; /**< [ 31: 16](R/W) SecTag ETYPE pattern 2 to match on.  This field needs to match the PEX's sectag_cfg.sectag_etype */
        uint64_t rx_mcs_hdr_etype      : 16; /**< [ 47: 32](R/W) Reserved.
                                                                 Internal:
                                                                 MCS header E-type to insert. */
        uint64_t reserved_48_63        : 16;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_mcsx_cpm_rx_slave_rx_etype_s cn; */
};
typedef union cavm_mcsx_cpm_rx_slave_rx_etype cavm_mcsx_cpm_rx_slave_rx_etype_t;

static inline uint64_t CAVM_MCSX_CPM_RX_SLAVE_RX_ETYPE(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_MCSX_CPM_RX_SLAVE_RX_ETYPE(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CNF10KB) && (a<=6))
        return 0x87e080000b80ll + 0x1000000ll * ((a) & 0x7);
    __cavm_csr_fatal("MCSX_CPM_RX_SLAVE_RX_ETYPE", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_MCSX_CPM_RX_SLAVE_RX_ETYPE(a) cavm_mcsx_cpm_rx_slave_rx_etype_t
#define bustype_CAVM_MCSX_CPM_RX_SLAVE_RX_ETYPE(a) CSR_TYPE_RSL
#define basename_CAVM_MCSX_CPM_RX_SLAVE_RX_ETYPE(a) "MCSX_CPM_RX_SLAVE_RX_ETYPE"
#define device_bar_CAVM_MCSX_CPM_RX_SLAVE_RX_ETYPE(a) 0x0 /* PF_BAR0 */
#define busnum_CAVM_MCSX_CPM_RX_SLAVE_RX_ETYPE(a) (a)
#define arguments_CAVM_MCSX_CPM_RX_SLAVE_RX_ETYPE(a) (a),-1,-1,-1

/**
 * Register (RSL) mcs#_cpm_rx_slave_rx_flowid_tcam_enable_0
 *
 * MCS Cpm Rx Slave Rx Flowid Tcam Enable 0 Register
 * Flow ID TCAM enable: For a TCAM entry to be considered in the search/compare
 * function, the corresponding TCAM entry must be enabled (set to 1).  When disabled,
 * the corresponding TCAM entry is ignored in the search/compare.
 */
union cavm_mcsx_cpm_rx_slave_rx_flowid_tcam_enable_0
{
    uint64_t u;
    struct cavm_mcsx_cpm_rx_slave_rx_flowid_tcam_enable_0_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t enable                : 64; /**< [ 63:  0](R/W) Set to 1 to enable the corresponding TCAM entry to be part of the TCAM search/compare. */
#else /* Word 0 - Little Endian */
        uint64_t enable                : 64; /**< [ 63:  0](R/W) Set to 1 to enable the corresponding TCAM entry to be part of the TCAM search/compare. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_mcsx_cpm_rx_slave_rx_flowid_tcam_enable_0_s cn; */
};
typedef union cavm_mcsx_cpm_rx_slave_rx_flowid_tcam_enable_0 cavm_mcsx_cpm_rx_slave_rx_flowid_tcam_enable_0_t;

static inline uint64_t CAVM_MCSX_CPM_RX_SLAVE_RX_FLOWID_TCAM_ENABLE_0(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_MCSX_CPM_RX_SLAVE_RX_FLOWID_TCAM_ENABLE_0(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CNF10KB) && (a<=6))
        return 0x87e080003bd8ll + 0x1000000ll * ((a) & 0x7);
    __cavm_csr_fatal("MCSX_CPM_RX_SLAVE_RX_FLOWID_TCAM_ENABLE_0", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_MCSX_CPM_RX_SLAVE_RX_FLOWID_TCAM_ENABLE_0(a) cavm_mcsx_cpm_rx_slave_rx_flowid_tcam_enable_0_t
#define bustype_CAVM_MCSX_CPM_RX_SLAVE_RX_FLOWID_TCAM_ENABLE_0(a) CSR_TYPE_RSL
#define basename_CAVM_MCSX_CPM_RX_SLAVE_RX_FLOWID_TCAM_ENABLE_0(a) "MCSX_CPM_RX_SLAVE_RX_FLOWID_TCAM_ENABLE_0"
#define device_bar_CAVM_MCSX_CPM_RX_SLAVE_RX_FLOWID_TCAM_ENABLE_0(a) 0x0 /* PF_BAR0 */
#define busnum_CAVM_MCSX_CPM_RX_SLAVE_RX_FLOWID_TCAM_ENABLE_0(a) (a)
#define arguments_CAVM_MCSX_CPM_RX_SLAVE_RX_FLOWID_TCAM_ENABLE_0(a) (a),-1,-1,-1

/**
 * Register (RSL) mcs#_cpm_rx_slave_rx_mcs_base_port_rsvd
 *
 * INTERNAL: MCS Cpm Rx Slave Rx Mcs Base Port Register
 *
 * RX MCS header base port: This register value is added to the packet's port number;
 * the result is placed in the RX MCS header port field for punt packets.
 */
union cavm_mcsx_cpm_rx_slave_rx_mcs_base_port_rsvd
{
    uint64_t u;
    struct cavm_mcsx_cpm_rx_slave_rx_mcs_base_port_rsvd_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_8_63         : 56;
        uint64_t rx_mcs_base_port      : 8;  /**< [  7:  0](R/W) Reserved. */
#else /* Word 0 - Little Endian */
        uint64_t rx_mcs_base_port      : 8;  /**< [  7:  0](R/W) Reserved. */
        uint64_t reserved_8_63         : 56;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_mcsx_cpm_rx_slave_rx_mcs_base_port_rsvd_s cn; */
};
typedef union cavm_mcsx_cpm_rx_slave_rx_mcs_base_port_rsvd cavm_mcsx_cpm_rx_slave_rx_mcs_base_port_rsvd_t;

static inline uint64_t CAVM_MCSX_CPM_RX_SLAVE_RX_MCS_BASE_PORT_RSVD(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_MCSX_CPM_RX_SLAVE_RX_MCS_BASE_PORT_RSVD(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CNF10KB) && (a<=6))
        return 0x87e080000bc0ll + 0x1000000ll * ((a) & 0x7);
    __cavm_csr_fatal("MCSX_CPM_RX_SLAVE_RX_MCS_BASE_PORT_RSVD", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_MCSX_CPM_RX_SLAVE_RX_MCS_BASE_PORT_RSVD(a) cavm_mcsx_cpm_rx_slave_rx_mcs_base_port_rsvd_t
#define bustype_CAVM_MCSX_CPM_RX_SLAVE_RX_MCS_BASE_PORT_RSVD(a) CSR_TYPE_RSL
#define basename_CAVM_MCSX_CPM_RX_SLAVE_RX_MCS_BASE_PORT_RSVD(a) "MCSX_CPM_RX_SLAVE_RX_MCS_BASE_PORT_RSVD"
#define device_bar_CAVM_MCSX_CPM_RX_SLAVE_RX_MCS_BASE_PORT_RSVD(a) 0x0 /* PF_BAR0 */
#define busnum_CAVM_MCSX_CPM_RX_SLAVE_RX_MCS_BASE_PORT_RSVD(a) (a)
#define arguments_CAVM_MCSX_CPM_RX_SLAVE_RX_MCS_BASE_PORT_RSVD(a) (a),-1,-1,-1

/**
 * Register (RSL) mcs#_cpm_rx_slave_sa_key_lockout#
 *
 * MCS Cpm Rx Slave Sa Key Lockout Register
 * SAK/HashKey Lockout: When set, makes the corresponding SA Policy memory entry's
 * SAK/HashKey values unreadable by SW.  A SW read to that SAK/HashKey entry will
 * return 0s.  Only after the SAK/HashKey is written while this corresponding bit is
 * low, will the entry's SAK/HashKey slices(64b) that were written, become readable for
 * as long as the corresponding lockout bit remains low.  For example, SW writting
 * entry 5's sak[63:0] while entry 5's lockout bit is low, makes entry 5's sak[63:0]
 * readable, however reads to hashkey[127:0] and sak[255:64] of entry 5 will still
 * return 0s until those respective 64b slices are written to by SW while the lockout
 * bit is low.  This ensures that the SAK/HashKey in its entirety remain confidential
 * once the lockout bit is set.  As soon as the lockout bit goes high for an entry, all
 * slices of the SAK/HashKey will return 0s on SW read.  Note that unlocking one entry
 * has no impact on any other entry.
 */
union cavm_mcsx_cpm_rx_slave_sa_key_lockoutx
{
    uint64_t u;
    struct cavm_mcsx_cpm_rx_slave_sa_key_lockoutx_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t sa                    : 64; /**< [ 63:  0](R/W) SAK/HashKey Lockout: When set, makes the corresponding SA Policy memory entry's
                                                                 SAK/HashKey values unreadable by SW.  A SW read to that SAK/HashKey entry will
                                                                 return 0s.  Only after the SAK/HashKey is written while this corresponding bit
                                                                 is low, will the entry's SAK/HashKey slices(64b) that were written, become
                                                                 readable for as long as the corresponding lockout bit remains low.  For example,
                                                                 SW writting entry 5's sak[63:0] while entry 5's lockout bit is low, makes entry
                                                                 5's sak[63:0] readable, however reads to hashkey[127:0] and sak[255:64] of entry
                                                                 5 will still return 0s until those respective 64b slices are written to by SW
                                                                 while the lockout bit is low.  This ensures that the SAK/HashKey in its entirety
                                                                 remain confidential once the lockout bit is set.  As soon as the lockout bit
                                                                 goes high for an entry, all slices of the SAK/HashKey will return 0s on SW read.
                                                                 Note that unlocking one entry has no impact on any other entry. */
#else /* Word 0 - Little Endian */
        uint64_t sa                    : 64; /**< [ 63:  0](R/W) SAK/HashKey Lockout: When set, makes the corresponding SA Policy memory entry's
                                                                 SAK/HashKey values unreadable by SW.  A SW read to that SAK/HashKey entry will
                                                                 return 0s.  Only after the SAK/HashKey is written while this corresponding bit
                                                                 is low, will the entry's SAK/HashKey slices(64b) that were written, become
                                                                 readable for as long as the corresponding lockout bit remains low.  For example,
                                                                 SW writting entry 5's sak[63:0] while entry 5's lockout bit is low, makes entry
                                                                 5's sak[63:0] readable, however reads to hashkey[127:0] and sak[255:64] of entry
                                                                 5 will still return 0s until those respective 64b slices are written to by SW
                                                                 while the lockout bit is low.  This ensures that the SAK/HashKey in its entirety
                                                                 remain confidential once the lockout bit is set.  As soon as the lockout bit
                                                                 goes high for an entry, all slices of the SAK/HashKey will return 0s on SW read.
                                                                 Note that unlocking one entry has no impact on any other entry. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_mcsx_cpm_rx_slave_sa_key_lockoutx_s cn; */
};
typedef union cavm_mcsx_cpm_rx_slave_sa_key_lockoutx cavm_mcsx_cpm_rx_slave_sa_key_lockoutx_t;

static inline uint64_t CAVM_MCSX_CPM_RX_SLAVE_SA_KEY_LOCKOUTX(uint64_t a, uint64_t b) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_MCSX_CPM_RX_SLAVE_SA_KEY_LOCKOUTX(uint64_t a, uint64_t b)
{
    if (cavm_is_model(OCTEONTX_CNF10KB) && ((a<=6) && (b<=1)))
        return 0x87e080000bb0ll + 0x1000000ll * ((a) & 0x7) + 8ll * ((b) & 0x1);
    __cavm_csr_fatal("MCSX_CPM_RX_SLAVE_SA_KEY_LOCKOUTX", 2, a, b, 0, 0, 0, 0);
}

#define typedef_CAVM_MCSX_CPM_RX_SLAVE_SA_KEY_LOCKOUTX(a,b) cavm_mcsx_cpm_rx_slave_sa_key_lockoutx_t
#define bustype_CAVM_MCSX_CPM_RX_SLAVE_SA_KEY_LOCKOUTX(a,b) CSR_TYPE_RSL
#define basename_CAVM_MCSX_CPM_RX_SLAVE_SA_KEY_LOCKOUTX(a,b) "MCSX_CPM_RX_SLAVE_SA_KEY_LOCKOUTX"
#define device_bar_CAVM_MCSX_CPM_RX_SLAVE_SA_KEY_LOCKOUTX(a,b) 0x0 /* PF_BAR0 */
#define busnum_CAVM_MCSX_CPM_RX_SLAVE_SA_KEY_LOCKOUTX(a,b) (a)
#define arguments_CAVM_MCSX_CPM_RX_SLAVE_SA_KEY_LOCKOUTX(a,b) (a),(b),-1,-1

/**
 * Register (RSL) mcs#_cpm_rx_slave_sa_map_mem#
 *
 * MCS Cpm Rx Slave Sa Map Mem Register
 * SA MAP Memory - 256x8 : The SC CAM hit index is concatenated with the SecTag.AN
 * value extracted from the incoming packet and used as an index into a table mapping
 * this {SC Index, AN} value to an SA index.  The table also contains an enable bit per
 * SA to indicate if this SA is in use.
 */
union cavm_mcsx_cpm_rx_slave_sa_map_memx
{
    uint64_t u;
    struct cavm_mcsx_cpm_rx_slave_sa_map_memx_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_8_63         : 56;
        uint64_t sa_in_use             : 1;  /**< [  7:  7](R/W) Specifies whether this SA is in use or not. If a packet matches on an SA which
                                                                 is not in use, a policy violation is triggered and the packet is either
                                                                 permitted or denied based on the SecY Policy table. */
        uint64_t sa_index              : 7;  /**< [  6:  0](R/W) Defines the SA to use for this packet */
#else /* Word 0 - Little Endian */
        uint64_t sa_index              : 7;  /**< [  6:  0](R/W) Defines the SA to use for this packet */
        uint64_t sa_in_use             : 1;  /**< [  7:  7](R/W) Specifies whether this SA is in use or not. If a packet matches on an SA which
                                                                 is not in use, a policy violation is triggered and the packet is either
                                                                 permitted or denied based on the SecY Policy table. */
        uint64_t reserved_8_63         : 56;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_mcsx_cpm_rx_slave_sa_map_memx_s cn; */
};
typedef union cavm_mcsx_cpm_rx_slave_sa_map_memx cavm_mcsx_cpm_rx_slave_sa_map_memx_t;

static inline uint64_t CAVM_MCSX_CPM_RX_SLAVE_SA_MAP_MEMX(uint64_t a, uint64_t b) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_MCSX_CPM_RX_SLAVE_SA_MAP_MEMX(uint64_t a, uint64_t b)
{
    if (cavm_is_model(OCTEONTX_CNF10KB) && ((a<=6) && (b<=255)))
        return 0x87e080000fd0ll + 0x1000000ll * ((a) & 0x7) + 8ll * ((b) & 0xff);
    __cavm_csr_fatal("MCSX_CPM_RX_SLAVE_SA_MAP_MEMX", 2, a, b, 0, 0, 0, 0);
}

#define typedef_CAVM_MCSX_CPM_RX_SLAVE_SA_MAP_MEMX(a,b) cavm_mcsx_cpm_rx_slave_sa_map_memx_t
#define bustype_CAVM_MCSX_CPM_RX_SLAVE_SA_MAP_MEMX(a,b) CSR_TYPE_RSL
#define basename_CAVM_MCSX_CPM_RX_SLAVE_SA_MAP_MEMX(a,b) "MCSX_CPM_RX_SLAVE_SA_MAP_MEMX"
#define device_bar_CAVM_MCSX_CPM_RX_SLAVE_SA_MAP_MEMX(a,b) 0x0 /* PF_BAR0 */
#define busnum_CAVM_MCSX_CPM_RX_SLAVE_SA_MAP_MEMX(a,b) (a)
#define arguments_CAVM_MCSX_CPM_RX_SLAVE_SA_MAP_MEMX(a,b) (a),(b),-1,-1

/**
 * Register (RSL) mcs#_cpm_rx_slave_sa_plcy_mem_0#
 *
 * MCS Cpm Rx Slave Sa Plcy Mem 0 Register
 * SA Policy (SAK) Memory - 128x512: The SA Policy (SAK) table provides the various Key
 * and Salt values required to decrypt the packet.  The table is indexed by the SA
 * Index read from the SA Map.
 */
union cavm_mcsx_cpm_rx_slave_sa_plcy_mem_0x
{
    uint64_t u;
    struct cavm_mcsx_cpm_rx_slave_sa_plcy_mem_0x_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t sak_63_0              : 64; /**< [ 63:  0](R/W) 256b SAK: Defines the encryption key to be used to decrypt this packet. The
                                                                 lower 128 bits are used for 128-bit ciphers. */
#else /* Word 0 - Little Endian */
        uint64_t sak_63_0              : 64; /**< [ 63:  0](R/W) 256b SAK: Defines the encryption key to be used to decrypt this packet. The
                                                                 lower 128 bits are used for 128-bit ciphers. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_mcsx_cpm_rx_slave_sa_plcy_mem_0x_s cn; */
};
typedef union cavm_mcsx_cpm_rx_slave_sa_plcy_mem_0x cavm_mcsx_cpm_rx_slave_sa_plcy_mem_0x_t;

static inline uint64_t CAVM_MCSX_CPM_RX_SLAVE_SA_PLCY_MEM_0X(uint64_t a, uint64_t b) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_MCSX_CPM_RX_SLAVE_SA_PLCY_MEM_0X(uint64_t a, uint64_t b)
{
    if (cavm_is_model(OCTEONTX_CNF10KB) && ((a<=6) && (b<=127)))
        return 0x87e0800017d8ll + 0x1000000ll * ((a) & 0x7) + 0x40ll * ((b) & 0x7f);
    __cavm_csr_fatal("MCSX_CPM_RX_SLAVE_SA_PLCY_MEM_0X", 2, a, b, 0, 0, 0, 0);
}

#define typedef_CAVM_MCSX_CPM_RX_SLAVE_SA_PLCY_MEM_0X(a,b) cavm_mcsx_cpm_rx_slave_sa_plcy_mem_0x_t
#define bustype_CAVM_MCSX_CPM_RX_SLAVE_SA_PLCY_MEM_0X(a,b) CSR_TYPE_RSL
#define basename_CAVM_MCSX_CPM_RX_SLAVE_SA_PLCY_MEM_0X(a,b) "MCSX_CPM_RX_SLAVE_SA_PLCY_MEM_0X"
#define device_bar_CAVM_MCSX_CPM_RX_SLAVE_SA_PLCY_MEM_0X(a,b) 0x0 /* PF_BAR0 */
#define busnum_CAVM_MCSX_CPM_RX_SLAVE_SA_PLCY_MEM_0X(a,b) (a)
#define arguments_CAVM_MCSX_CPM_RX_SLAVE_SA_PLCY_MEM_0X(a,b) (a),(b),-1,-1

/**
 * Register (RSL) mcs#_cpm_rx_slave_sa_plcy_mem_1#
 *
 * MCS Cpm Rx Slave Sa Plcy Mem 1 Register
 * SA Policy (SAK) Memory - 128x512: The SA Policy (SAK) table provides the various Key
 * and Salt values required to decrypt the packet.  The table is indexed by the SA
 * Index read from the SA Map.
 */
union cavm_mcsx_cpm_rx_slave_sa_plcy_mem_1x
{
    uint64_t u;
    struct cavm_mcsx_cpm_rx_slave_sa_plcy_mem_1x_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t sak_127_64            : 64; /**< [ 63:  0](R/W) 256b SAK: Defines the encryption key to be used to decrypt this packet. The
                                                                 lower 128 bits are used for 128-bit ciphers. */
#else /* Word 0 - Little Endian */
        uint64_t sak_127_64            : 64; /**< [ 63:  0](R/W) 256b SAK: Defines the encryption key to be used to decrypt this packet. The
                                                                 lower 128 bits are used for 128-bit ciphers. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_mcsx_cpm_rx_slave_sa_plcy_mem_1x_s cn; */
};
typedef union cavm_mcsx_cpm_rx_slave_sa_plcy_mem_1x cavm_mcsx_cpm_rx_slave_sa_plcy_mem_1x_t;

static inline uint64_t CAVM_MCSX_CPM_RX_SLAVE_SA_PLCY_MEM_1X(uint64_t a, uint64_t b) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_MCSX_CPM_RX_SLAVE_SA_PLCY_MEM_1X(uint64_t a, uint64_t b)
{
    if (cavm_is_model(OCTEONTX_CNF10KB) && ((a<=6) && (b<=127)))
        return 0x87e0800017e0ll + 0x1000000ll * ((a) & 0x7) + 0x40ll * ((b) & 0x7f);
    __cavm_csr_fatal("MCSX_CPM_RX_SLAVE_SA_PLCY_MEM_1X", 2, a, b, 0, 0, 0, 0);
}

#define typedef_CAVM_MCSX_CPM_RX_SLAVE_SA_PLCY_MEM_1X(a,b) cavm_mcsx_cpm_rx_slave_sa_plcy_mem_1x_t
#define bustype_CAVM_MCSX_CPM_RX_SLAVE_SA_PLCY_MEM_1X(a,b) CSR_TYPE_RSL
#define basename_CAVM_MCSX_CPM_RX_SLAVE_SA_PLCY_MEM_1X(a,b) "MCSX_CPM_RX_SLAVE_SA_PLCY_MEM_1X"
#define device_bar_CAVM_MCSX_CPM_RX_SLAVE_SA_PLCY_MEM_1X(a,b) 0x0 /* PF_BAR0 */
#define busnum_CAVM_MCSX_CPM_RX_SLAVE_SA_PLCY_MEM_1X(a,b) (a)
#define arguments_CAVM_MCSX_CPM_RX_SLAVE_SA_PLCY_MEM_1X(a,b) (a),(b),-1,-1

/**
 * Register (RSL) mcs#_cpm_rx_slave_sa_plcy_mem_2#
 *
 * MCS Cpm Rx Slave Sa Plcy Mem 2 Register
 * SA Policy (SAK) Memory - 128x512: The SA Policy (SAK) table provides the various Key
 * and Salt values required to decrypt the packet.  The table is indexed by the SA
 * Index read from the SA Map.
 */
union cavm_mcsx_cpm_rx_slave_sa_plcy_mem_2x
{
    uint64_t u;
    struct cavm_mcsx_cpm_rx_slave_sa_plcy_mem_2x_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t sak_191_128           : 64; /**< [ 63:  0](R/W) 256b SAK: Defines the encryption key to be used to decrypt this packet. The
                                                                 lower 128 bits are used for 128-bit ciphers. */
#else /* Word 0 - Little Endian */
        uint64_t sak_191_128           : 64; /**< [ 63:  0](R/W) 256b SAK: Defines the encryption key to be used to decrypt this packet. The
                                                                 lower 128 bits are used for 128-bit ciphers. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_mcsx_cpm_rx_slave_sa_plcy_mem_2x_s cn; */
};
typedef union cavm_mcsx_cpm_rx_slave_sa_plcy_mem_2x cavm_mcsx_cpm_rx_slave_sa_plcy_mem_2x_t;

static inline uint64_t CAVM_MCSX_CPM_RX_SLAVE_SA_PLCY_MEM_2X(uint64_t a, uint64_t b) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_MCSX_CPM_RX_SLAVE_SA_PLCY_MEM_2X(uint64_t a, uint64_t b)
{
    if (cavm_is_model(OCTEONTX_CNF10KB) && ((a<=6) && (b<=127)))
        return 0x87e0800017e8ll + 0x1000000ll * ((a) & 0x7) + 0x40ll * ((b) & 0x7f);
    __cavm_csr_fatal("MCSX_CPM_RX_SLAVE_SA_PLCY_MEM_2X", 2, a, b, 0, 0, 0, 0);
}

#define typedef_CAVM_MCSX_CPM_RX_SLAVE_SA_PLCY_MEM_2X(a,b) cavm_mcsx_cpm_rx_slave_sa_plcy_mem_2x_t
#define bustype_CAVM_MCSX_CPM_RX_SLAVE_SA_PLCY_MEM_2X(a,b) CSR_TYPE_RSL
#define basename_CAVM_MCSX_CPM_RX_SLAVE_SA_PLCY_MEM_2X(a,b) "MCSX_CPM_RX_SLAVE_SA_PLCY_MEM_2X"
#define device_bar_CAVM_MCSX_CPM_RX_SLAVE_SA_PLCY_MEM_2X(a,b) 0x0 /* PF_BAR0 */
#define busnum_CAVM_MCSX_CPM_RX_SLAVE_SA_PLCY_MEM_2X(a,b) (a)
#define arguments_CAVM_MCSX_CPM_RX_SLAVE_SA_PLCY_MEM_2X(a,b) (a),(b),-1,-1

/**
 * Register (RSL) mcs#_cpm_rx_slave_sa_plcy_mem_3#
 *
 * MCS Cpm Rx Slave Sa Plcy Mem 3 Register
 * SA Policy (SAK) Memory - 128x512: The SA Policy (SAK) table provides the various Key
 * and Salt values required to decrypt the packet.  The table is indexed by the SA
 * Index read from the SA Map.
 */
union cavm_mcsx_cpm_rx_slave_sa_plcy_mem_3x
{
    uint64_t u;
    struct cavm_mcsx_cpm_rx_slave_sa_plcy_mem_3x_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t sak_255_192           : 64; /**< [ 63:  0](R/W) 256b SAK: Defines the encryption key to be used to decrypt this packet. The
                                                                 lower 128 bits are used for 128-bit ciphers. */
#else /* Word 0 - Little Endian */
        uint64_t sak_255_192           : 64; /**< [ 63:  0](R/W) 256b SAK: Defines the encryption key to be used to decrypt this packet. The
                                                                 lower 128 bits are used for 128-bit ciphers. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_mcsx_cpm_rx_slave_sa_plcy_mem_3x_s cn; */
};
typedef union cavm_mcsx_cpm_rx_slave_sa_plcy_mem_3x cavm_mcsx_cpm_rx_slave_sa_plcy_mem_3x_t;

static inline uint64_t CAVM_MCSX_CPM_RX_SLAVE_SA_PLCY_MEM_3X(uint64_t a, uint64_t b) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_MCSX_CPM_RX_SLAVE_SA_PLCY_MEM_3X(uint64_t a, uint64_t b)
{
    if (cavm_is_model(OCTEONTX_CNF10KB) && ((a<=6) && (b<=127)))
        return 0x87e0800017f0ll + 0x1000000ll * ((a) & 0x7) + 0x40ll * ((b) & 0x7f);
    __cavm_csr_fatal("MCSX_CPM_RX_SLAVE_SA_PLCY_MEM_3X", 2, a, b, 0, 0, 0, 0);
}

#define typedef_CAVM_MCSX_CPM_RX_SLAVE_SA_PLCY_MEM_3X(a,b) cavm_mcsx_cpm_rx_slave_sa_plcy_mem_3x_t
#define bustype_CAVM_MCSX_CPM_RX_SLAVE_SA_PLCY_MEM_3X(a,b) CSR_TYPE_RSL
#define basename_CAVM_MCSX_CPM_RX_SLAVE_SA_PLCY_MEM_3X(a,b) "MCSX_CPM_RX_SLAVE_SA_PLCY_MEM_3X"
#define device_bar_CAVM_MCSX_CPM_RX_SLAVE_SA_PLCY_MEM_3X(a,b) 0x0 /* PF_BAR0 */
#define busnum_CAVM_MCSX_CPM_RX_SLAVE_SA_PLCY_MEM_3X(a,b) (a)
#define arguments_CAVM_MCSX_CPM_RX_SLAVE_SA_PLCY_MEM_3X(a,b) (a),(b),-1,-1

/**
 * Register (RSL) mcs#_cpm_rx_slave_sa_plcy_mem_4#
 *
 * MCS Cpm Rx Slave Sa Plcy Mem 4 Register
 * SA Policy (SAK) Memory - 128x512: The SA Policy (SAK) table provides the various Key
 * and Salt values required to decrypt the packet.  The table is indexed by the SA
 * Index read from the SA Map.
 */
union cavm_mcsx_cpm_rx_slave_sa_plcy_mem_4x
{
    uint64_t u;
    struct cavm_mcsx_cpm_rx_slave_sa_plcy_mem_4x_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t hashkey_63_0          : 64; /**< [ 63:  0](R/W) 128b Hash Key: Key used for authentication. This is derived by performing a
                                                                 128/256 bit AES-ECB block encryption of an all 0s block with the SAK;
                                                                 E(SAK, 128'h0). The cipher text result of this operation is the H Key software
                                                                 needs to configure in this entry. */
#else /* Word 0 - Little Endian */
        uint64_t hashkey_63_0          : 64; /**< [ 63:  0](R/W) 128b Hash Key: Key used for authentication. This is derived by performing a
                                                                 128/256 bit AES-ECB block encryption of an all 0s block with the SAK;
                                                                 E(SAK, 128'h0). The cipher text result of this operation is the H Key software
                                                                 needs to configure in this entry. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_mcsx_cpm_rx_slave_sa_plcy_mem_4x_s cn; */
};
typedef union cavm_mcsx_cpm_rx_slave_sa_plcy_mem_4x cavm_mcsx_cpm_rx_slave_sa_plcy_mem_4x_t;

static inline uint64_t CAVM_MCSX_CPM_RX_SLAVE_SA_PLCY_MEM_4X(uint64_t a, uint64_t b) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_MCSX_CPM_RX_SLAVE_SA_PLCY_MEM_4X(uint64_t a, uint64_t b)
{
    if (cavm_is_model(OCTEONTX_CNF10KB) && ((a<=6) && (b<=127)))
        return 0x87e0800017f8ll + 0x1000000ll * ((a) & 0x7) + 0x40ll * ((b) & 0x7f);
    __cavm_csr_fatal("MCSX_CPM_RX_SLAVE_SA_PLCY_MEM_4X", 2, a, b, 0, 0, 0, 0);
}

#define typedef_CAVM_MCSX_CPM_RX_SLAVE_SA_PLCY_MEM_4X(a,b) cavm_mcsx_cpm_rx_slave_sa_plcy_mem_4x_t
#define bustype_CAVM_MCSX_CPM_RX_SLAVE_SA_PLCY_MEM_4X(a,b) CSR_TYPE_RSL
#define basename_CAVM_MCSX_CPM_RX_SLAVE_SA_PLCY_MEM_4X(a,b) "MCSX_CPM_RX_SLAVE_SA_PLCY_MEM_4X"
#define device_bar_CAVM_MCSX_CPM_RX_SLAVE_SA_PLCY_MEM_4X(a,b) 0x0 /* PF_BAR0 */
#define busnum_CAVM_MCSX_CPM_RX_SLAVE_SA_PLCY_MEM_4X(a,b) (a)
#define arguments_CAVM_MCSX_CPM_RX_SLAVE_SA_PLCY_MEM_4X(a,b) (a),(b),-1,-1

/**
 * Register (RSL) mcs#_cpm_rx_slave_sa_plcy_mem_5#
 *
 * MCS Cpm Rx Slave Sa Plcy Mem 5 Register
 * SA Policy (SAK) Memory - 128x512: The SA Policy (SAK) table provides the various Key
 * and Salt values required to decrypt the packet.  The table is indexed by the SA
 * Index read from the SA Map.
 */
union cavm_mcsx_cpm_rx_slave_sa_plcy_mem_5x
{
    uint64_t u;
    struct cavm_mcsx_cpm_rx_slave_sa_plcy_mem_5x_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t hashkey_127_64        : 64; /**< [ 63:  0](R/W) 128b Hash Key: Key used for authentication. This is derived by performing a
                                                                 128/256 bit AES-ECB block encryption of an all 0s block with the SAK;
                                                                 E(SAK, 128'h0). The cipher text result of this operation is the H Key software
                                                                 needs to configure in this entry. */
#else /* Word 0 - Little Endian */
        uint64_t hashkey_127_64        : 64; /**< [ 63:  0](R/W) 128b Hash Key: Key used for authentication. This is derived by performing a
                                                                 128/256 bit AES-ECB block encryption of an all 0s block with the SAK;
                                                                 E(SAK, 128'h0). The cipher text result of this operation is the H Key software
                                                                 needs to configure in this entry. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_mcsx_cpm_rx_slave_sa_plcy_mem_5x_s cn; */
};
typedef union cavm_mcsx_cpm_rx_slave_sa_plcy_mem_5x cavm_mcsx_cpm_rx_slave_sa_plcy_mem_5x_t;

static inline uint64_t CAVM_MCSX_CPM_RX_SLAVE_SA_PLCY_MEM_5X(uint64_t a, uint64_t b) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_MCSX_CPM_RX_SLAVE_SA_PLCY_MEM_5X(uint64_t a, uint64_t b)
{
    if (cavm_is_model(OCTEONTX_CNF10KB) && ((a<=6) && (b<=127)))
        return 0x87e080001800ll + 0x1000000ll * ((a) & 0x7) + 0x40ll * ((b) & 0x7f);
    __cavm_csr_fatal("MCSX_CPM_RX_SLAVE_SA_PLCY_MEM_5X", 2, a, b, 0, 0, 0, 0);
}

#define typedef_CAVM_MCSX_CPM_RX_SLAVE_SA_PLCY_MEM_5X(a,b) cavm_mcsx_cpm_rx_slave_sa_plcy_mem_5x_t
#define bustype_CAVM_MCSX_CPM_RX_SLAVE_SA_PLCY_MEM_5X(a,b) CSR_TYPE_RSL
#define basename_CAVM_MCSX_CPM_RX_SLAVE_SA_PLCY_MEM_5X(a,b) "MCSX_CPM_RX_SLAVE_SA_PLCY_MEM_5X"
#define device_bar_CAVM_MCSX_CPM_RX_SLAVE_SA_PLCY_MEM_5X(a,b) 0x0 /* PF_BAR0 */
#define busnum_CAVM_MCSX_CPM_RX_SLAVE_SA_PLCY_MEM_5X(a,b) (a)
#define arguments_CAVM_MCSX_CPM_RX_SLAVE_SA_PLCY_MEM_5X(a,b) (a),(b),-1,-1

/**
 * Register (RSL) mcs#_cpm_rx_slave_sa_plcy_mem_6#
 *
 * MCS Cpm Rx Slave Sa Plcy Mem 6 Register
 * SA Policy (SAK) Memory - 128x512: The SA Policy (SAK) table provides the various Key
 * and Salt values required to decrypt the packet.  The table is indexed by the SA
 * Index read from the SA Map.
 */
union cavm_mcsx_cpm_rx_slave_sa_plcy_mem_6x
{
    uint64_t u;
    struct cavm_mcsx_cpm_rx_slave_sa_plcy_mem_6x_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t salt_63_0             : 64; /**< [ 63:  0](R/W) 96b Salt value: Salt value used in XPN ciphers. */
#else /* Word 0 - Little Endian */
        uint64_t salt_63_0             : 64; /**< [ 63:  0](R/W) 96b Salt value: Salt value used in XPN ciphers. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_mcsx_cpm_rx_slave_sa_plcy_mem_6x_s cn; */
};
typedef union cavm_mcsx_cpm_rx_slave_sa_plcy_mem_6x cavm_mcsx_cpm_rx_slave_sa_plcy_mem_6x_t;

static inline uint64_t CAVM_MCSX_CPM_RX_SLAVE_SA_PLCY_MEM_6X(uint64_t a, uint64_t b) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_MCSX_CPM_RX_SLAVE_SA_PLCY_MEM_6X(uint64_t a, uint64_t b)
{
    if (cavm_is_model(OCTEONTX_CNF10KB) && ((a<=6) && (b<=127)))
        return 0x87e080001808ll + 0x1000000ll * ((a) & 0x7) + 0x40ll * ((b) & 0x7f);
    __cavm_csr_fatal("MCSX_CPM_RX_SLAVE_SA_PLCY_MEM_6X", 2, a, b, 0, 0, 0, 0);
}

#define typedef_CAVM_MCSX_CPM_RX_SLAVE_SA_PLCY_MEM_6X(a,b) cavm_mcsx_cpm_rx_slave_sa_plcy_mem_6x_t
#define bustype_CAVM_MCSX_CPM_RX_SLAVE_SA_PLCY_MEM_6X(a,b) CSR_TYPE_RSL
#define basename_CAVM_MCSX_CPM_RX_SLAVE_SA_PLCY_MEM_6X(a,b) "MCSX_CPM_RX_SLAVE_SA_PLCY_MEM_6X"
#define device_bar_CAVM_MCSX_CPM_RX_SLAVE_SA_PLCY_MEM_6X(a,b) 0x0 /* PF_BAR0 */
#define busnum_CAVM_MCSX_CPM_RX_SLAVE_SA_PLCY_MEM_6X(a,b) (a)
#define arguments_CAVM_MCSX_CPM_RX_SLAVE_SA_PLCY_MEM_6X(a,b) (a),(b),-1,-1

/**
 * Register (RSL) mcs#_cpm_rx_slave_sa_plcy_mem_7#
 *
 * MCS Cpm Rx Slave Sa Plcy Mem 7 Register
 * SA Policy (SAK) Memory - 128x512: The SA Policy (SAK) table provides the various Key
 * and Salt values required to decrypt the packet.  The table is indexed by the SA
 * Index read from the SA Map.
 */
union cavm_mcsx_cpm_rx_slave_sa_plcy_mem_7x
{
    uint64_t u;
    struct cavm_mcsx_cpm_rx_slave_sa_plcy_mem_7x_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t ssci                  : 32; /**< [ 63: 32](R/W) 32b SSCI value: Short Secure Channel Identifier, used in XPN ciphers. */
        uint64_t salt_95_64            : 32; /**< [ 31:  0](R/W) 96b Salt value: Salt value used in XPN ciphers. */
#else /* Word 0 - Little Endian */
        uint64_t salt_95_64            : 32; /**< [ 31:  0](R/W) 96b Salt value: Salt value used in XPN ciphers. */
        uint64_t ssci                  : 32; /**< [ 63: 32](R/W) 32b SSCI value: Short Secure Channel Identifier, used in XPN ciphers. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_mcsx_cpm_rx_slave_sa_plcy_mem_7x_s cn; */
};
typedef union cavm_mcsx_cpm_rx_slave_sa_plcy_mem_7x cavm_mcsx_cpm_rx_slave_sa_plcy_mem_7x_t;

static inline uint64_t CAVM_MCSX_CPM_RX_SLAVE_SA_PLCY_MEM_7X(uint64_t a, uint64_t b) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_MCSX_CPM_RX_SLAVE_SA_PLCY_MEM_7X(uint64_t a, uint64_t b)
{
    if (cavm_is_model(OCTEONTX_CNF10KB) && ((a<=6) && (b<=127)))
        return 0x87e080001810ll + 0x1000000ll * ((a) & 0x7) + 0x40ll * ((b) & 0x7f);
    __cavm_csr_fatal("MCSX_CPM_RX_SLAVE_SA_PLCY_MEM_7X", 2, a, b, 0, 0, 0, 0);
}

#define typedef_CAVM_MCSX_CPM_RX_SLAVE_SA_PLCY_MEM_7X(a,b) cavm_mcsx_cpm_rx_slave_sa_plcy_mem_7x_t
#define bustype_CAVM_MCSX_CPM_RX_SLAVE_SA_PLCY_MEM_7X(a,b) CSR_TYPE_RSL
#define basename_CAVM_MCSX_CPM_RX_SLAVE_SA_PLCY_MEM_7X(a,b) "MCSX_CPM_RX_SLAVE_SA_PLCY_MEM_7X"
#define device_bar_CAVM_MCSX_CPM_RX_SLAVE_SA_PLCY_MEM_7X(a,b) 0x0 /* PF_BAR0 */
#define busnum_CAVM_MCSX_CPM_RX_SLAVE_SA_PLCY_MEM_7X(a,b) (a)
#define arguments_CAVM_MCSX_CPM_RX_SLAVE_SA_PLCY_MEM_7X(a,b) (a),(b),-1,-1

/**
 * Register (RSL) mcs#_cpm_rx_slave_sa_pn_table_mem#
 *
 * MCS Cpm Rx Slave Sa Pn Table Mem Register
 * PN Table Memory - 128x64: The Ingress PN Table keeps track of next_pn which is +1 on
 * the highest valued PN accepted from a validated packet.  The PN table is read every
 * time the SA Policy table is read using the same SA index.
 */
union cavm_mcsx_cpm_rx_slave_sa_pn_table_memx
{
    uint64_t u;
    struct cavm_mcsx_cpm_rx_slave_sa_pn_table_memx_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t next_pn               : 64; /**< [ 63:  0](R/W) 64b next_pn value: Next packet number expected. */
#else /* Word 0 - Little Endian */
        uint64_t next_pn               : 64; /**< [ 63:  0](R/W) 64b next_pn value: Next packet number expected. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_mcsx_cpm_rx_slave_sa_pn_table_memx_s cn; */
};
typedef union cavm_mcsx_cpm_rx_slave_sa_pn_table_memx cavm_mcsx_cpm_rx_slave_sa_pn_table_memx_t;

static inline uint64_t CAVM_MCSX_CPM_RX_SLAVE_SA_PN_TABLE_MEMX(uint64_t a, uint64_t b) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_MCSX_CPM_RX_SLAVE_SA_PN_TABLE_MEMX(uint64_t a, uint64_t b)
{
    if (cavm_is_model(OCTEONTX_CNF10KB) && ((a<=6) && (b<=127)))
        return 0x87e0800037d8ll + 0x1000000ll * ((a) & 0x7) + 8ll * ((b) & 0x7f);
    __cavm_csr_fatal("MCSX_CPM_RX_SLAVE_SA_PN_TABLE_MEMX", 2, a, b, 0, 0, 0, 0);
}

#define typedef_CAVM_MCSX_CPM_RX_SLAVE_SA_PN_TABLE_MEMX(a,b) cavm_mcsx_cpm_rx_slave_sa_pn_table_memx_t
#define bustype_CAVM_MCSX_CPM_RX_SLAVE_SA_PN_TABLE_MEMX(a,b) CSR_TYPE_RSL
#define basename_CAVM_MCSX_CPM_RX_SLAVE_SA_PN_TABLE_MEMX(a,b) "MCSX_CPM_RX_SLAVE_SA_PN_TABLE_MEMX"
#define device_bar_CAVM_MCSX_CPM_RX_SLAVE_SA_PN_TABLE_MEMX(a,b) 0x0 /* PF_BAR0 */
#define busnum_CAVM_MCSX_CPM_RX_SLAVE_SA_PN_TABLE_MEMX(a,b) (a)
#define arguments_CAVM_MCSX_CPM_RX_SLAVE_SA_PN_TABLE_MEMX(a,b) (a),(b),-1,-1

/**
 * Register (RSL) mcs#_cpm_rx_slave_sa_pn_table_update
 *
 * MCS Cpm Rx Slave Sa Pn Table Update Register
 * This register is used to control the SW write to the PN table (sa_pn_table_mem).
 */
union cavm_mcsx_cpm_rx_slave_sa_pn_table_update
{
    uint64_t u;
    struct cavm_mcsx_cpm_rx_slave_sa_pn_table_update_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_1_63         : 63;
        uint64_t max_update            : 1;  /**< [  0:  0](R/W) Setting this bit means that when writing the PN table (sa_pn_table_mem), the
                                                                 larger of the CPU write value or the existing PN is written to the PN table.
                                                                 See section 10.7.15 Receive SA control of the IEEE macsec spec.  When this bit
                                                                 is 0, a write access to the PN table will be a regular write, meaning the CPU
                                                                 write value will clobber whatever is stored in the memory. */
#else /* Word 0 - Little Endian */
        uint64_t max_update            : 1;  /**< [  0:  0](R/W) Setting this bit means that when writing the PN table (sa_pn_table_mem), the
                                                                 larger of the CPU write value or the existing PN is written to the PN table.
                                                                 See section 10.7.15 Receive SA control of the IEEE macsec spec.  When this bit
                                                                 is 0, a write access to the PN table will be a regular write, meaning the CPU
                                                                 write value will clobber whatever is stored in the memory. */
        uint64_t reserved_1_63         : 63;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_mcsx_cpm_rx_slave_sa_pn_table_update_s cn; */
};
typedef union cavm_mcsx_cpm_rx_slave_sa_pn_table_update cavm_mcsx_cpm_rx_slave_sa_pn_table_update_t;

static inline uint64_t CAVM_MCSX_CPM_RX_SLAVE_SA_PN_TABLE_UPDATE(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_MCSX_CPM_RX_SLAVE_SA_PN_TABLE_UPDATE(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CNF10KB) && (a<=6))
        return 0x87e080000bc8ll + 0x1000000ll * ((a) & 0x7);
    __cavm_csr_fatal("MCSX_CPM_RX_SLAVE_SA_PN_TABLE_UPDATE", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_MCSX_CPM_RX_SLAVE_SA_PN_TABLE_UPDATE(a) cavm_mcsx_cpm_rx_slave_sa_pn_table_update_t
#define bustype_CAVM_MCSX_CPM_RX_SLAVE_SA_PN_TABLE_UPDATE(a) CSR_TYPE_RSL
#define basename_CAVM_MCSX_CPM_RX_SLAVE_SA_PN_TABLE_UPDATE(a) "MCSX_CPM_RX_SLAVE_SA_PN_TABLE_UPDATE"
#define device_bar_CAVM_MCSX_CPM_RX_SLAVE_SA_PN_TABLE_UPDATE(a) 0x0 /* PF_BAR0 */
#define busnum_CAVM_MCSX_CPM_RX_SLAVE_SA_PN_TABLE_UPDATE(a) (a)
#define arguments_CAVM_MCSX_CPM_RX_SLAVE_SA_PN_TABLE_UPDATE(a) (a),-1,-1,-1

/**
 * Register (RSL) mcs#_cpm_rx_slave_sc_cam_0#
 *
 * MCS Cpm Rx Slave Sc Cam 0 Register
 * SC TCAM - 64x70: When a valid SecTag is found in a packet, the SecY associated with
 * this packet and it's SCI are looked up in the SC CAM to identify the SC.  The SC CAM
 * consists of 64 entries with the following fields per entry:
 */
union cavm_mcsx_cpm_rx_slave_sc_cam_0x
{
    uint64_t u;
    struct cavm_mcsx_cpm_rx_slave_sc_cam_0x_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t sci                   : 64; /**< [ 63:  0](R/W) The Secure Channel Identifier associated with this packet. */
#else /* Word 0 - Little Endian */
        uint64_t sci                   : 64; /**< [ 63:  0](R/W) The Secure Channel Identifier associated with this packet. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_mcsx_cpm_rx_slave_sc_cam_0x_s cn; */
};
typedef union cavm_mcsx_cpm_rx_slave_sc_cam_0x cavm_mcsx_cpm_rx_slave_sc_cam_0x_t;

static inline uint64_t CAVM_MCSX_CPM_RX_SLAVE_SC_CAM_0X(uint64_t a, uint64_t b) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_MCSX_CPM_RX_SLAVE_SC_CAM_0X(uint64_t a, uint64_t b)
{
    if (cavm_is_model(OCTEONTX_CNF10KB) && ((a<=6) && (b<=63)))
        return 0x87e080004c08ll + 0x1000000ll * ((a) & 0x7) + 0x10ll * ((b) & 0x3f);
    __cavm_csr_fatal("MCSX_CPM_RX_SLAVE_SC_CAM_0X", 2, a, b, 0, 0, 0, 0);
}

#define typedef_CAVM_MCSX_CPM_RX_SLAVE_SC_CAM_0X(a,b) cavm_mcsx_cpm_rx_slave_sc_cam_0x_t
#define bustype_CAVM_MCSX_CPM_RX_SLAVE_SC_CAM_0X(a,b) CSR_TYPE_RSL
#define basename_CAVM_MCSX_CPM_RX_SLAVE_SC_CAM_0X(a,b) "MCSX_CPM_RX_SLAVE_SC_CAM_0X"
#define device_bar_CAVM_MCSX_CPM_RX_SLAVE_SC_CAM_0X(a,b) 0x0 /* PF_BAR0 */
#define busnum_CAVM_MCSX_CPM_RX_SLAVE_SC_CAM_0X(a,b) (a)
#define arguments_CAVM_MCSX_CPM_RX_SLAVE_SC_CAM_0X(a,b) (a),(b),-1,-1

/**
 * Register (RSL) mcs#_cpm_rx_slave_sc_cam_1#
 *
 * MCS Cpm Rx Slave Sc Cam 1 Register
 * SC TCAM - 64x70: When a valid SecTag is found in a packet, the SecY associated with
 * this packet and it's SCI are looked up in the SC CAM to identify the SC.  The SC CAM
 * consists of 64 entries with the following fields per entry:
 */
union cavm_mcsx_cpm_rx_slave_sc_cam_1x
{
    uint64_t u;
    struct cavm_mcsx_cpm_rx_slave_sc_cam_1x_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_6_63         : 58;
        uint64_t secy                  : 6;  /**< [  5:  0](R/W) SecY associated with this packet. */
#else /* Word 0 - Little Endian */
        uint64_t secy                  : 6;  /**< [  5:  0](R/W) SecY associated with this packet. */
        uint64_t reserved_6_63         : 58;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_mcsx_cpm_rx_slave_sc_cam_1x_s cn; */
};
typedef union cavm_mcsx_cpm_rx_slave_sc_cam_1x cavm_mcsx_cpm_rx_slave_sc_cam_1x_t;

static inline uint64_t CAVM_MCSX_CPM_RX_SLAVE_SC_CAM_1X(uint64_t a, uint64_t b) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_MCSX_CPM_RX_SLAVE_SC_CAM_1X(uint64_t a, uint64_t b)
{
    if (cavm_is_model(OCTEONTX_CNF10KB) && ((a<=6) && (b<=63)))
        return 0x87e080004c10ll + 0x1000000ll * ((a) & 0x7) + 0x10ll * ((b) & 0x3f);
    __cavm_csr_fatal("MCSX_CPM_RX_SLAVE_SC_CAM_1X", 2, a, b, 0, 0, 0, 0);
}

#define typedef_CAVM_MCSX_CPM_RX_SLAVE_SC_CAM_1X(a,b) cavm_mcsx_cpm_rx_slave_sc_cam_1x_t
#define bustype_CAVM_MCSX_CPM_RX_SLAVE_SC_CAM_1X(a,b) CSR_TYPE_RSL
#define basename_CAVM_MCSX_CPM_RX_SLAVE_SC_CAM_1X(a,b) "MCSX_CPM_RX_SLAVE_SC_CAM_1X"
#define device_bar_CAVM_MCSX_CPM_RX_SLAVE_SC_CAM_1X(a,b) 0x0 /* PF_BAR0 */
#define busnum_CAVM_MCSX_CPM_RX_SLAVE_SC_CAM_1X(a,b) (a)
#define arguments_CAVM_MCSX_CPM_RX_SLAVE_SC_CAM_1X(a,b) (a),(b),-1,-1

/**
 * Register (RSL) mcs#_cpm_rx_slave_sc_cam_enable_0
 *
 * MCS Cpm Rx Slave Sc Cam Enable 0 Register
 * SC CAM enable: For a CAM entry to be considered in the search/compare function, the
 * corresponding CAM entry must be enabled (set to 1).  When disabled, the
 * corresponding CAM entry is ignored in the search/compare.
 */
union cavm_mcsx_cpm_rx_slave_sc_cam_enable_0
{
    uint64_t u;
    struct cavm_mcsx_cpm_rx_slave_sc_cam_enable_0_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t enable                : 64; /**< [ 63:  0](R/W) Set to 1 to enable the corresponding CAM entry to be part of the CAM search/compare. */
#else /* Word 0 - Little Endian */
        uint64_t enable                : 64; /**< [ 63:  0](R/W) Set to 1 to enable the corresponding CAM entry to be part of the CAM search/compare. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_mcsx_cpm_rx_slave_sc_cam_enable_0_s cn; */
};
typedef union cavm_mcsx_cpm_rx_slave_sc_cam_enable_0 cavm_mcsx_cpm_rx_slave_sc_cam_enable_0_t;

static inline uint64_t CAVM_MCSX_CPM_RX_SLAVE_SC_CAM_ENABLE_0(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_MCSX_CPM_RX_SLAVE_SC_CAM_ENABLE_0(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CNF10KB) && (a<=6))
        return 0x87e080004bf8ll + 0x1000000ll * ((a) & 0x7);
    __cavm_csr_fatal("MCSX_CPM_RX_SLAVE_SC_CAM_ENABLE_0", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_MCSX_CPM_RX_SLAVE_SC_CAM_ENABLE_0(a) cavm_mcsx_cpm_rx_slave_sc_cam_enable_0_t
#define bustype_CAVM_MCSX_CPM_RX_SLAVE_SC_CAM_ENABLE_0(a) CSR_TYPE_RSL
#define basename_CAVM_MCSX_CPM_RX_SLAVE_SC_CAM_ENABLE_0(a) "MCSX_CPM_RX_SLAVE_SC_CAM_ENABLE_0"
#define device_bar_CAVM_MCSX_CPM_RX_SLAVE_SC_CAM_ENABLE_0(a) 0x0 /* PF_BAR0 */
#define busnum_CAVM_MCSX_CPM_RX_SLAVE_SC_CAM_ENABLE_0(a) (a)
#define arguments_CAVM_MCSX_CPM_RX_SLAVE_SC_CAM_ENABLE_0(a) (a),-1,-1,-1

/**
 * Register (RSL) mcs#_cpm_rx_slave_sc_expiry_actual_timeout_0_rsvd
 *
 * INTERNAL: MCS Cpm Rx Slave Sc Expiry Actual Timeout 0 Register
 *
 * CPM SC/SA actual-timeout Leaf Interrupt Register
 */
union cavm_mcsx_cpm_rx_slave_sc_expiry_actual_timeout_0_rsvd
{
    uint64_t u;
    struct cavm_mcsx_cpm_rx_slave_sc_expiry_actual_timeout_0_rsvd_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t sc_expiry_actual_timeout_int : 64;/**< [ 63:  0](R/W1C) Reserved. */
#else /* Word 0 - Little Endian */
        uint64_t sc_expiry_actual_timeout_int : 64;/**< [ 63:  0](R/W1C) Reserved. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_mcsx_cpm_rx_slave_sc_expiry_actual_timeout_0_rsvd_s cn; */
};
typedef union cavm_mcsx_cpm_rx_slave_sc_expiry_actual_timeout_0_rsvd cavm_mcsx_cpm_rx_slave_sc_expiry_actual_timeout_0_rsvd_t;

static inline uint64_t CAVM_MCSX_CPM_RX_SLAVE_SC_EXPIRY_ACTUAL_TIMEOUT_0_RSVD(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_MCSX_CPM_RX_SLAVE_SC_EXPIRY_ACTUAL_TIMEOUT_0_RSVD(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CNF10KB) && (a<=6))
        return 0x87e080000b18ll + 0x1000000ll * ((a) & 0x7);
    __cavm_csr_fatal("MCSX_CPM_RX_SLAVE_SC_EXPIRY_ACTUAL_TIMEOUT_0_RSVD", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_MCSX_CPM_RX_SLAVE_SC_EXPIRY_ACTUAL_TIMEOUT_0_RSVD(a) cavm_mcsx_cpm_rx_slave_sc_expiry_actual_timeout_0_rsvd_t
#define bustype_CAVM_MCSX_CPM_RX_SLAVE_SC_EXPIRY_ACTUAL_TIMEOUT_0_RSVD(a) CSR_TYPE_RSL
#define basename_CAVM_MCSX_CPM_RX_SLAVE_SC_EXPIRY_ACTUAL_TIMEOUT_0_RSVD(a) "MCSX_CPM_RX_SLAVE_SC_EXPIRY_ACTUAL_TIMEOUT_0_RSVD"
#define device_bar_CAVM_MCSX_CPM_RX_SLAVE_SC_EXPIRY_ACTUAL_TIMEOUT_0_RSVD(a) 0x0 /* PF_BAR0 */
#define busnum_CAVM_MCSX_CPM_RX_SLAVE_SC_EXPIRY_ACTUAL_TIMEOUT_0_RSVD(a) (a)
#define arguments_CAVM_MCSX_CPM_RX_SLAVE_SC_EXPIRY_ACTUAL_TIMEOUT_0_RSVD(a) (a),-1,-1,-1

/**
 * Register (RSL) mcs#_cpm_rx_slave_sc_expiry_actual_timeout_enb_0_rsvd
 *
 * INTERNAL: MCS Cpm Rx Slave Sc Expiry Actual Timeout Enb 0 Register
 *
 * ENB register for sc_expiry_actual_timeout
 */
union cavm_mcsx_cpm_rx_slave_sc_expiry_actual_timeout_enb_0_rsvd
{
    uint64_t u;
    struct cavm_mcsx_cpm_rx_slave_sc_expiry_actual_timeout_enb_0_rsvd_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t sc_expiry_actual_timeout_int_enb : 64;/**< [ 63:  0](R/W) Reserved. */
#else /* Word 0 - Little Endian */
        uint64_t sc_expiry_actual_timeout_int_enb : 64;/**< [ 63:  0](R/W) Reserved. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_mcsx_cpm_rx_slave_sc_expiry_actual_timeout_enb_0_rsvd_s cn; */
};
typedef union cavm_mcsx_cpm_rx_slave_sc_expiry_actual_timeout_enb_0_rsvd cavm_mcsx_cpm_rx_slave_sc_expiry_actual_timeout_enb_0_rsvd_t;

static inline uint64_t CAVM_MCSX_CPM_RX_SLAVE_SC_EXPIRY_ACTUAL_TIMEOUT_ENB_0_RSVD(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_MCSX_CPM_RX_SLAVE_SC_EXPIRY_ACTUAL_TIMEOUT_ENB_0_RSVD(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CNF10KB) && (a<=6))
        return 0x87e080000b20ll + 0x1000000ll * ((a) & 0x7);
    __cavm_csr_fatal("MCSX_CPM_RX_SLAVE_SC_EXPIRY_ACTUAL_TIMEOUT_ENB_0_RSVD", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_MCSX_CPM_RX_SLAVE_SC_EXPIRY_ACTUAL_TIMEOUT_ENB_0_RSVD(a) cavm_mcsx_cpm_rx_slave_sc_expiry_actual_timeout_enb_0_rsvd_t
#define bustype_CAVM_MCSX_CPM_RX_SLAVE_SC_EXPIRY_ACTUAL_TIMEOUT_ENB_0_RSVD(a) CSR_TYPE_RSL
#define basename_CAVM_MCSX_CPM_RX_SLAVE_SC_EXPIRY_ACTUAL_TIMEOUT_ENB_0_RSVD(a) "MCSX_CPM_RX_SLAVE_SC_EXPIRY_ACTUAL_TIMEOUT_ENB_0_RSVD"
#define device_bar_CAVM_MCSX_CPM_RX_SLAVE_SC_EXPIRY_ACTUAL_TIMEOUT_ENB_0_RSVD(a) 0x0 /* PF_BAR0 */
#define busnum_CAVM_MCSX_CPM_RX_SLAVE_SC_EXPIRY_ACTUAL_TIMEOUT_ENB_0_RSVD(a) (a)
#define arguments_CAVM_MCSX_CPM_RX_SLAVE_SC_EXPIRY_ACTUAL_TIMEOUT_ENB_0_RSVD(a) (a),-1,-1,-1

/**
 * Register (RSL) mcs#_cpm_rx_slave_sc_expiry_actual_timeout_intr_rw_0_rsvd
 *
 * INTERNAL: MCS Cpm Rx Slave Sc Expiry Actual Timeout Intr Rw 0 Register
 *
 * Read/write register for sc_expiry_actual_timeout
 */
union cavm_mcsx_cpm_rx_slave_sc_expiry_actual_timeout_intr_rw_0_rsvd
{
    uint64_t u;
    struct cavm_mcsx_cpm_rx_slave_sc_expiry_actual_timeout_intr_rw_0_rsvd_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t sc_expiry_actual_timeout_int : 64;/**< [ 63:  0](R/W) Reserved. */
#else /* Word 0 - Little Endian */
        uint64_t sc_expiry_actual_timeout_int : 64;/**< [ 63:  0](R/W) Reserved. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_mcsx_cpm_rx_slave_sc_expiry_actual_timeout_intr_rw_0_rsvd_s cn; */
};
typedef union cavm_mcsx_cpm_rx_slave_sc_expiry_actual_timeout_intr_rw_0_rsvd cavm_mcsx_cpm_rx_slave_sc_expiry_actual_timeout_intr_rw_0_rsvd_t;

static inline uint64_t CAVM_MCSX_CPM_RX_SLAVE_SC_EXPIRY_ACTUAL_TIMEOUT_INTR_RW_0_RSVD(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_MCSX_CPM_RX_SLAVE_SC_EXPIRY_ACTUAL_TIMEOUT_INTR_RW_0_RSVD(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CNF10KB) && (a<=6))
        return 0x87e080000b30ll + 0x1000000ll * ((a) & 0x7);
    __cavm_csr_fatal("MCSX_CPM_RX_SLAVE_SC_EXPIRY_ACTUAL_TIMEOUT_INTR_RW_0_RSVD", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_MCSX_CPM_RX_SLAVE_SC_EXPIRY_ACTUAL_TIMEOUT_INTR_RW_0_RSVD(a) cavm_mcsx_cpm_rx_slave_sc_expiry_actual_timeout_intr_rw_0_rsvd_t
#define bustype_CAVM_MCSX_CPM_RX_SLAVE_SC_EXPIRY_ACTUAL_TIMEOUT_INTR_RW_0_RSVD(a) CSR_TYPE_RSL
#define basename_CAVM_MCSX_CPM_RX_SLAVE_SC_EXPIRY_ACTUAL_TIMEOUT_INTR_RW_0_RSVD(a) "MCSX_CPM_RX_SLAVE_SC_EXPIRY_ACTUAL_TIMEOUT_INTR_RW_0_RSVD"
#define device_bar_CAVM_MCSX_CPM_RX_SLAVE_SC_EXPIRY_ACTUAL_TIMEOUT_INTR_RW_0_RSVD(a) 0x0 /* PF_BAR0 */
#define busnum_CAVM_MCSX_CPM_RX_SLAVE_SC_EXPIRY_ACTUAL_TIMEOUT_INTR_RW_0_RSVD(a) (a)
#define arguments_CAVM_MCSX_CPM_RX_SLAVE_SC_EXPIRY_ACTUAL_TIMEOUT_INTR_RW_0_RSVD(a) (a),-1,-1,-1

/**
 * Register (RSL) mcs#_cpm_rx_slave_sc_expiry_actual_timeout_raw_0_rsvd
 *
 * INTERNAL: MCS Cpm Rx Slave Sc Expiry Actual Timeout Raw 0 Register
 *
 * Raw register for sc_expiry_actual_timeout
 */
union cavm_mcsx_cpm_rx_slave_sc_expiry_actual_timeout_raw_0_rsvd
{
    uint64_t u;
    struct cavm_mcsx_cpm_rx_slave_sc_expiry_actual_timeout_raw_0_rsvd_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t sc_expiry_actual_timeout_int : 64;/**< [ 63:  0](RO) Reserved. */
#else /* Word 0 - Little Endian */
        uint64_t sc_expiry_actual_timeout_int : 64;/**< [ 63:  0](RO) Reserved. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_mcsx_cpm_rx_slave_sc_expiry_actual_timeout_raw_0_rsvd_s cn; */
};
typedef union cavm_mcsx_cpm_rx_slave_sc_expiry_actual_timeout_raw_0_rsvd cavm_mcsx_cpm_rx_slave_sc_expiry_actual_timeout_raw_0_rsvd_t;

static inline uint64_t CAVM_MCSX_CPM_RX_SLAVE_SC_EXPIRY_ACTUAL_TIMEOUT_RAW_0_RSVD(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_MCSX_CPM_RX_SLAVE_SC_EXPIRY_ACTUAL_TIMEOUT_RAW_0_RSVD(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CNF10KB) && (a<=6))
        return 0x87e080000b28ll + 0x1000000ll * ((a) & 0x7);
    __cavm_csr_fatal("MCSX_CPM_RX_SLAVE_SC_EXPIRY_ACTUAL_TIMEOUT_RAW_0_RSVD", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_MCSX_CPM_RX_SLAVE_SC_EXPIRY_ACTUAL_TIMEOUT_RAW_0_RSVD(a) cavm_mcsx_cpm_rx_slave_sc_expiry_actual_timeout_raw_0_rsvd_t
#define bustype_CAVM_MCSX_CPM_RX_SLAVE_SC_EXPIRY_ACTUAL_TIMEOUT_RAW_0_RSVD(a) CSR_TYPE_RSL
#define basename_CAVM_MCSX_CPM_RX_SLAVE_SC_EXPIRY_ACTUAL_TIMEOUT_RAW_0_RSVD(a) "MCSX_CPM_RX_SLAVE_SC_EXPIRY_ACTUAL_TIMEOUT_RAW_0_RSVD"
#define device_bar_CAVM_MCSX_CPM_RX_SLAVE_SC_EXPIRY_ACTUAL_TIMEOUT_RAW_0_RSVD(a) 0x0 /* PF_BAR0 */
#define busnum_CAVM_MCSX_CPM_RX_SLAVE_SC_EXPIRY_ACTUAL_TIMEOUT_RAW_0_RSVD(a) (a)
#define arguments_CAVM_MCSX_CPM_RX_SLAVE_SC_EXPIRY_ACTUAL_TIMEOUT_RAW_0_RSVD(a) (a),-1,-1,-1

/**
 * Register (RSL) mcs#_cpm_rx_slave_sc_expiry_pre_timeout_0_rsvd
 *
 * INTERNAL: MCS Cpm Rx Slave Sc Expiry Pre Timeout 0 Register
 *
 * CPM SC/SA pre-timeout Leaf Interrupt Register
 */
union cavm_mcsx_cpm_rx_slave_sc_expiry_pre_timeout_0_rsvd
{
    uint64_t u;
    struct cavm_mcsx_cpm_rx_slave_sc_expiry_pre_timeout_0_rsvd_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t sa_expiry_pre_timeout_int : 64;/**< [ 63:  0](R/W1C) Reserved. */
#else /* Word 0 - Little Endian */
        uint64_t sa_expiry_pre_timeout_int : 64;/**< [ 63:  0](R/W1C) Reserved. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_mcsx_cpm_rx_slave_sc_expiry_pre_timeout_0_rsvd_s cn; */
};
typedef union cavm_mcsx_cpm_rx_slave_sc_expiry_pre_timeout_0_rsvd cavm_mcsx_cpm_rx_slave_sc_expiry_pre_timeout_0_rsvd_t;

static inline uint64_t CAVM_MCSX_CPM_RX_SLAVE_SC_EXPIRY_PRE_TIMEOUT_0_RSVD(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_MCSX_CPM_RX_SLAVE_SC_EXPIRY_PRE_TIMEOUT_0_RSVD(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CNF10KB) && (a<=6))
        return 0x87e080000af8ll + 0x1000000ll * ((a) & 0x7);
    __cavm_csr_fatal("MCSX_CPM_RX_SLAVE_SC_EXPIRY_PRE_TIMEOUT_0_RSVD", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_MCSX_CPM_RX_SLAVE_SC_EXPIRY_PRE_TIMEOUT_0_RSVD(a) cavm_mcsx_cpm_rx_slave_sc_expiry_pre_timeout_0_rsvd_t
#define bustype_CAVM_MCSX_CPM_RX_SLAVE_SC_EXPIRY_PRE_TIMEOUT_0_RSVD(a) CSR_TYPE_RSL
#define basename_CAVM_MCSX_CPM_RX_SLAVE_SC_EXPIRY_PRE_TIMEOUT_0_RSVD(a) "MCSX_CPM_RX_SLAVE_SC_EXPIRY_PRE_TIMEOUT_0_RSVD"
#define device_bar_CAVM_MCSX_CPM_RX_SLAVE_SC_EXPIRY_PRE_TIMEOUT_0_RSVD(a) 0x0 /* PF_BAR0 */
#define busnum_CAVM_MCSX_CPM_RX_SLAVE_SC_EXPIRY_PRE_TIMEOUT_0_RSVD(a) (a)
#define arguments_CAVM_MCSX_CPM_RX_SLAVE_SC_EXPIRY_PRE_TIMEOUT_0_RSVD(a) (a),-1,-1,-1

/**
 * Register (RSL) mcs#_cpm_rx_slave_sc_expiry_pre_timeout_enb_0_rsvd
 *
 * INTERNAL: MCS Cpm Rx Slave Sc Expiry Pre Timeout Enb 0 Register
 *
 * ENB register for sc_expiry_pre_timeout
 */
union cavm_mcsx_cpm_rx_slave_sc_expiry_pre_timeout_enb_0_rsvd
{
    uint64_t u;
    struct cavm_mcsx_cpm_rx_slave_sc_expiry_pre_timeout_enb_0_rsvd_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t sa_expiry_pre_timeout_int_enb : 64;/**< [ 63:  0](R/W) Reserved. */
#else /* Word 0 - Little Endian */
        uint64_t sa_expiry_pre_timeout_int_enb : 64;/**< [ 63:  0](R/W) Reserved. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_mcsx_cpm_rx_slave_sc_expiry_pre_timeout_enb_0_rsvd_s cn; */
};
typedef union cavm_mcsx_cpm_rx_slave_sc_expiry_pre_timeout_enb_0_rsvd cavm_mcsx_cpm_rx_slave_sc_expiry_pre_timeout_enb_0_rsvd_t;

static inline uint64_t CAVM_MCSX_CPM_RX_SLAVE_SC_EXPIRY_PRE_TIMEOUT_ENB_0_RSVD(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_MCSX_CPM_RX_SLAVE_SC_EXPIRY_PRE_TIMEOUT_ENB_0_RSVD(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CNF10KB) && (a<=6))
        return 0x87e080000b00ll + 0x1000000ll * ((a) & 0x7);
    __cavm_csr_fatal("MCSX_CPM_RX_SLAVE_SC_EXPIRY_PRE_TIMEOUT_ENB_0_RSVD", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_MCSX_CPM_RX_SLAVE_SC_EXPIRY_PRE_TIMEOUT_ENB_0_RSVD(a) cavm_mcsx_cpm_rx_slave_sc_expiry_pre_timeout_enb_0_rsvd_t
#define bustype_CAVM_MCSX_CPM_RX_SLAVE_SC_EXPIRY_PRE_TIMEOUT_ENB_0_RSVD(a) CSR_TYPE_RSL
#define basename_CAVM_MCSX_CPM_RX_SLAVE_SC_EXPIRY_PRE_TIMEOUT_ENB_0_RSVD(a) "MCSX_CPM_RX_SLAVE_SC_EXPIRY_PRE_TIMEOUT_ENB_0_RSVD"
#define device_bar_CAVM_MCSX_CPM_RX_SLAVE_SC_EXPIRY_PRE_TIMEOUT_ENB_0_RSVD(a) 0x0 /* PF_BAR0 */
#define busnum_CAVM_MCSX_CPM_RX_SLAVE_SC_EXPIRY_PRE_TIMEOUT_ENB_0_RSVD(a) (a)
#define arguments_CAVM_MCSX_CPM_RX_SLAVE_SC_EXPIRY_PRE_TIMEOUT_ENB_0_RSVD(a) (a),-1,-1,-1

/**
 * Register (RSL) mcs#_cpm_rx_slave_sc_expiry_pre_timeout_intr_rw_0_rsvd
 *
 * INTERNAL: MCS Cpm Rx Slave Sc Expiry Pre Timeout Intr Rw 0 Register
 *
 * Read/write register for sc_expiry_pre_timeout
 */
union cavm_mcsx_cpm_rx_slave_sc_expiry_pre_timeout_intr_rw_0_rsvd
{
    uint64_t u;
    struct cavm_mcsx_cpm_rx_slave_sc_expiry_pre_timeout_intr_rw_0_rsvd_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t sa_expiry_pre_timeout_int : 64;/**< [ 63:  0](R/W) Reserved. */
#else /* Word 0 - Little Endian */
        uint64_t sa_expiry_pre_timeout_int : 64;/**< [ 63:  0](R/W) Reserved. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_mcsx_cpm_rx_slave_sc_expiry_pre_timeout_intr_rw_0_rsvd_s cn; */
};
typedef union cavm_mcsx_cpm_rx_slave_sc_expiry_pre_timeout_intr_rw_0_rsvd cavm_mcsx_cpm_rx_slave_sc_expiry_pre_timeout_intr_rw_0_rsvd_t;

static inline uint64_t CAVM_MCSX_CPM_RX_SLAVE_SC_EXPIRY_PRE_TIMEOUT_INTR_RW_0_RSVD(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_MCSX_CPM_RX_SLAVE_SC_EXPIRY_PRE_TIMEOUT_INTR_RW_0_RSVD(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CNF10KB) && (a<=6))
        return 0x87e080000b10ll + 0x1000000ll * ((a) & 0x7);
    __cavm_csr_fatal("MCSX_CPM_RX_SLAVE_SC_EXPIRY_PRE_TIMEOUT_INTR_RW_0_RSVD", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_MCSX_CPM_RX_SLAVE_SC_EXPIRY_PRE_TIMEOUT_INTR_RW_0_RSVD(a) cavm_mcsx_cpm_rx_slave_sc_expiry_pre_timeout_intr_rw_0_rsvd_t
#define bustype_CAVM_MCSX_CPM_RX_SLAVE_SC_EXPIRY_PRE_TIMEOUT_INTR_RW_0_RSVD(a) CSR_TYPE_RSL
#define basename_CAVM_MCSX_CPM_RX_SLAVE_SC_EXPIRY_PRE_TIMEOUT_INTR_RW_0_RSVD(a) "MCSX_CPM_RX_SLAVE_SC_EXPIRY_PRE_TIMEOUT_INTR_RW_0_RSVD"
#define device_bar_CAVM_MCSX_CPM_RX_SLAVE_SC_EXPIRY_PRE_TIMEOUT_INTR_RW_0_RSVD(a) 0x0 /* PF_BAR0 */
#define busnum_CAVM_MCSX_CPM_RX_SLAVE_SC_EXPIRY_PRE_TIMEOUT_INTR_RW_0_RSVD(a) (a)
#define arguments_CAVM_MCSX_CPM_RX_SLAVE_SC_EXPIRY_PRE_TIMEOUT_INTR_RW_0_RSVD(a) (a),-1,-1,-1

/**
 * Register (RSL) mcs#_cpm_rx_slave_sc_expiry_pre_timeout_raw_0_rsvd
 *
 * INTERNAL: MCS Cpm Rx Slave Sc Expiry Pre Timeout Raw 0 Register
 *
 * Raw register for sc_expiry_pre_timeout
 */
union cavm_mcsx_cpm_rx_slave_sc_expiry_pre_timeout_raw_0_rsvd
{
    uint64_t u;
    struct cavm_mcsx_cpm_rx_slave_sc_expiry_pre_timeout_raw_0_rsvd_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t sa_expiry_pre_timeout_int : 64;/**< [ 63:  0](RO) Reserved. */
#else /* Word 0 - Little Endian */
        uint64_t sa_expiry_pre_timeout_int : 64;/**< [ 63:  0](RO) Reserved. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_mcsx_cpm_rx_slave_sc_expiry_pre_timeout_raw_0_rsvd_s cn; */
};
typedef union cavm_mcsx_cpm_rx_slave_sc_expiry_pre_timeout_raw_0_rsvd cavm_mcsx_cpm_rx_slave_sc_expiry_pre_timeout_raw_0_rsvd_t;

static inline uint64_t CAVM_MCSX_CPM_RX_SLAVE_SC_EXPIRY_PRE_TIMEOUT_RAW_0_RSVD(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_MCSX_CPM_RX_SLAVE_SC_EXPIRY_PRE_TIMEOUT_RAW_0_RSVD(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CNF10KB) && (a<=6))
        return 0x87e080000b08ll + 0x1000000ll * ((a) & 0x7);
    __cavm_csr_fatal("MCSX_CPM_RX_SLAVE_SC_EXPIRY_PRE_TIMEOUT_RAW_0_RSVD", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_MCSX_CPM_RX_SLAVE_SC_EXPIRY_PRE_TIMEOUT_RAW_0_RSVD(a) cavm_mcsx_cpm_rx_slave_sc_expiry_pre_timeout_raw_0_rsvd_t
#define bustype_CAVM_MCSX_CPM_RX_SLAVE_SC_EXPIRY_PRE_TIMEOUT_RAW_0_RSVD(a) CSR_TYPE_RSL
#define basename_CAVM_MCSX_CPM_RX_SLAVE_SC_EXPIRY_PRE_TIMEOUT_RAW_0_RSVD(a) "MCSX_CPM_RX_SLAVE_SC_EXPIRY_PRE_TIMEOUT_RAW_0_RSVD"
#define device_bar_CAVM_MCSX_CPM_RX_SLAVE_SC_EXPIRY_PRE_TIMEOUT_RAW_0_RSVD(a) 0x0 /* PF_BAR0 */
#define busnum_CAVM_MCSX_CPM_RX_SLAVE_SC_EXPIRY_PRE_TIMEOUT_RAW_0_RSVD(a) (a)
#define arguments_CAVM_MCSX_CPM_RX_SLAVE_SC_EXPIRY_PRE_TIMEOUT_RAW_0_RSVD(a) (a),-1,-1,-1

/**
 * Register (RSL) mcs#_cpm_rx_slave_sc_timer_mem#_rsvd
 *
 * INTERNAL: MCS Cpm Rx Slave Sc Timer Mem Register
 *
 * SC Timer Memory - 64x32 : The per SC timers used in determining if an SA should be invalidated.
 */
union cavm_mcsx_cpm_rx_slave_sc_timer_memx_rsvd
{
    uint64_t u;
    struct cavm_mcsx_cpm_rx_slave_sc_timer_memx_rsvd_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_32_63        : 32;
        uint64_t timer                 : 32; /**< [ 31:  0](R/W) Reserved. */
#else /* Word 0 - Little Endian */
        uint64_t timer                 : 32; /**< [ 31:  0](R/W) Reserved. */
        uint64_t reserved_32_63        : 32;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_mcsx_cpm_rx_slave_sc_timer_memx_rsvd_s cn; */
};
typedef union cavm_mcsx_cpm_rx_slave_sc_timer_memx_rsvd cavm_mcsx_cpm_rx_slave_sc_timer_memx_rsvd_t;

static inline uint64_t CAVM_MCSX_CPM_RX_SLAVE_SC_TIMER_MEMX_RSVD(uint64_t a, uint64_t b) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_MCSX_CPM_RX_SLAVE_SC_TIMER_MEMX_RSVD(uint64_t a, uint64_t b)
{
    if (cavm_is_model(OCTEONTX_CNF10KB) && ((a<=6) && (b<=63)))
        return 0x87e080005250ll + 0x1000000ll * ((a) & 0x7) + 8ll * ((b) & 0x3f);
    __cavm_csr_fatal("MCSX_CPM_RX_SLAVE_SC_TIMER_MEMX_RSVD", 2, a, b, 0, 0, 0, 0);
}

#define typedef_CAVM_MCSX_CPM_RX_SLAVE_SC_TIMER_MEMX_RSVD(a,b) cavm_mcsx_cpm_rx_slave_sc_timer_memx_rsvd_t
#define bustype_CAVM_MCSX_CPM_RX_SLAVE_SC_TIMER_MEMX_RSVD(a,b) CSR_TYPE_RSL
#define basename_CAVM_MCSX_CPM_RX_SLAVE_SC_TIMER_MEMX_RSVD(a,b) "MCSX_CPM_RX_SLAVE_SC_TIMER_MEMX_RSVD"
#define device_bar_CAVM_MCSX_CPM_RX_SLAVE_SC_TIMER_MEMX_RSVD(a,b) 0x0 /* PF_BAR0 */
#define busnum_CAVM_MCSX_CPM_RX_SLAVE_SC_TIMER_MEMX_RSVD(a,b) (a)
#define arguments_CAVM_MCSX_CPM_RX_SLAVE_SC_TIMER_MEMX_RSVD(a,b) (a),(b),-1,-1

/**
 * Register (RSL) mcs#_cpm_rx_slave_sc_timer_rsvd1_rsvd
 *
 * INTERNAL: MCS Cpm Rx Slave Sc Timer Rsvd1 Register
 *
 * Reserved CSR.
 */
union cavm_mcsx_cpm_rx_slave_sc_timer_rsvd1_rsvd
{
    uint64_t u;
    struct cavm_mcsx_cpm_rx_slave_sc_timer_rsvd1_rsvd_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_0_63         : 64;
#else /* Word 0 - Little Endian */
        uint64_t reserved_0_63         : 64;
#endif /* Word 0 - End */
    } s;
    struct cavm_mcsx_cpm_rx_slave_sc_timer_rsvd1_rsvd_cn
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_32_63        : 32;
        uint64_t reserved_0_31         : 32;
#else /* Word 0 - Little Endian */
        uint64_t reserved_0_31         : 32;
        uint64_t reserved_32_63        : 32;
#endif /* Word 0 - End */
    } cn;
};
typedef union cavm_mcsx_cpm_rx_slave_sc_timer_rsvd1_rsvd cavm_mcsx_cpm_rx_slave_sc_timer_rsvd1_rsvd_t;

static inline uint64_t CAVM_MCSX_CPM_RX_SLAVE_SC_TIMER_RSVD1_RSVD(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_MCSX_CPM_RX_SLAVE_SC_TIMER_RSVD1_RSVD(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CNF10KB) && (a<=6))
        return 0x87e080005020ll + 0x1000000ll * ((a) & 0x7);
    __cavm_csr_fatal("MCSX_CPM_RX_SLAVE_SC_TIMER_RSVD1_RSVD", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_MCSX_CPM_RX_SLAVE_SC_TIMER_RSVD1_RSVD(a) cavm_mcsx_cpm_rx_slave_sc_timer_rsvd1_rsvd_t
#define bustype_CAVM_MCSX_CPM_RX_SLAVE_SC_TIMER_RSVD1_RSVD(a) CSR_TYPE_RSL
#define basename_CAVM_MCSX_CPM_RX_SLAVE_SC_TIMER_RSVD1_RSVD(a) "MCSX_CPM_RX_SLAVE_SC_TIMER_RSVD1_RSVD"
#define device_bar_CAVM_MCSX_CPM_RX_SLAVE_SC_TIMER_RSVD1_RSVD(a) 0x0 /* PF_BAR0 */
#define busnum_CAVM_MCSX_CPM_RX_SLAVE_SC_TIMER_RSVD1_RSVD(a) (a)
#define arguments_CAVM_MCSX_CPM_RX_SLAVE_SC_TIMER_RSVD1_RSVD(a) (a),-1,-1,-1

/**
 * Register (RSL) mcs#_cpm_rx_slave_sc_timer_rsvd2_rsvd
 *
 * INTERNAL: MCS Cpm Rx Slave Sc Timer Rsvd2 Register
 *
 * Reserved CSR.
 */
union cavm_mcsx_cpm_rx_slave_sc_timer_rsvd2_rsvd
{
    uint64_t u;
    struct cavm_mcsx_cpm_rx_slave_sc_timer_rsvd2_rsvd_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_0_63         : 64;
#else /* Word 0 - Little Endian */
        uint64_t reserved_0_63         : 64;
#endif /* Word 0 - End */
    } s;
    struct cavm_mcsx_cpm_rx_slave_sc_timer_rsvd2_rsvd_cn
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_32_63        : 32;
        uint64_t reserved_0_31         : 32;
#else /* Word 0 - Little Endian */
        uint64_t reserved_0_31         : 32;
        uint64_t reserved_32_63        : 32;
#endif /* Word 0 - End */
    } cn;
};
typedef union cavm_mcsx_cpm_rx_slave_sc_timer_rsvd2_rsvd cavm_mcsx_cpm_rx_slave_sc_timer_rsvd2_rsvd_t;

static inline uint64_t CAVM_MCSX_CPM_RX_SLAVE_SC_TIMER_RSVD2_RSVD(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_MCSX_CPM_RX_SLAVE_SC_TIMER_RSVD2_RSVD(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CNF10KB) && (a<=6))
        return 0x87e080005028ll + 0x1000000ll * ((a) & 0x7);
    __cavm_csr_fatal("MCSX_CPM_RX_SLAVE_SC_TIMER_RSVD2_RSVD", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_MCSX_CPM_RX_SLAVE_SC_TIMER_RSVD2_RSVD(a) cavm_mcsx_cpm_rx_slave_sc_timer_rsvd2_rsvd_t
#define bustype_CAVM_MCSX_CPM_RX_SLAVE_SC_TIMER_RSVD2_RSVD(a) CSR_TYPE_RSL
#define basename_CAVM_MCSX_CPM_RX_SLAVE_SC_TIMER_RSVD2_RSVD(a) "MCSX_CPM_RX_SLAVE_SC_TIMER_RSVD2_RSVD"
#define device_bar_CAVM_MCSX_CPM_RX_SLAVE_SC_TIMER_RSVD2_RSVD(a) 0x0 /* PF_BAR0 */
#define busnum_CAVM_MCSX_CPM_RX_SLAVE_SC_TIMER_RSVD2_RSVD(a) (a)
#define arguments_CAVM_MCSX_CPM_RX_SLAVE_SC_TIMER_RSVD2_RSVD(a) (a),-1,-1,-1

/**
 * Register (RSL) mcs#_cpm_rx_slave_sc_timer_timeout_thresh#_rsvd
 *
 * INTERNAL: MCS Cpm Rx Slave Sc Timer Timeout Thresh Register
 *
 * One of 4 configurable thresholds which can be used to generate an interrupt if the
 * corresponding SC's timer reaches the selected threshold.
 * This register is used in the SC/SA timer expiry mechanism.
 */
union cavm_mcsx_cpm_rx_slave_sc_timer_timeout_threshx_rsvd
{
    uint64_t u;
    struct cavm_mcsx_cpm_rx_slave_sc_timer_timeout_threshx_rsvd_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_32_63        : 32;
        uint64_t threshold             : 32; /**< [ 31:  0](R/W) Reserved. */
#else /* Word 0 - Little Endian */
        uint64_t threshold             : 32; /**< [ 31:  0](R/W) Reserved. */
        uint64_t reserved_32_63        : 32;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_mcsx_cpm_rx_slave_sc_timer_timeout_threshx_rsvd_s cn; */
};
typedef union cavm_mcsx_cpm_rx_slave_sc_timer_timeout_threshx_rsvd cavm_mcsx_cpm_rx_slave_sc_timer_timeout_threshx_rsvd_t;

static inline uint64_t CAVM_MCSX_CPM_RX_SLAVE_SC_TIMER_TIMEOUT_THRESHX_RSVD(uint64_t a, uint64_t b) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_MCSX_CPM_RX_SLAVE_SC_TIMER_TIMEOUT_THRESHX_RSVD(uint64_t a, uint64_t b)
{
    if (cavm_is_model(OCTEONTX_CNF10KB) && ((a<=6) && (b<=3)))
        return 0x87e080005030ll + 0x1000000ll * ((a) & 0x7) + 8ll * ((b) & 0x3);
    __cavm_csr_fatal("MCSX_CPM_RX_SLAVE_SC_TIMER_TIMEOUT_THRESHX_RSVD", 2, a, b, 0, 0, 0, 0);
}

#define typedef_CAVM_MCSX_CPM_RX_SLAVE_SC_TIMER_TIMEOUT_THRESHX_RSVD(a,b) cavm_mcsx_cpm_rx_slave_sc_timer_timeout_threshx_rsvd_t
#define bustype_CAVM_MCSX_CPM_RX_SLAVE_SC_TIMER_TIMEOUT_THRESHX_RSVD(a,b) CSR_TYPE_RSL
#define basename_CAVM_MCSX_CPM_RX_SLAVE_SC_TIMER_TIMEOUT_THRESHX_RSVD(a,b) "MCSX_CPM_RX_SLAVE_SC_TIMER_TIMEOUT_THRESHX_RSVD"
#define device_bar_CAVM_MCSX_CPM_RX_SLAVE_SC_TIMER_TIMEOUT_THRESHX_RSVD(a,b) 0x0 /* PF_BAR0 */
#define busnum_CAVM_MCSX_CPM_RX_SLAVE_SC_TIMER_TIMEOUT_THRESHX_RSVD(a,b) (a)
#define arguments_CAVM_MCSX_CPM_RX_SLAVE_SC_TIMER_TIMEOUT_THRESHX_RSVD(a,b) (a),(b),-1,-1

/**
 * Register (RSL) mcs#_cpm_rx_slave_sectag_rule_chk_enable
 *
 * MCS Cpm Rx Slave Sectag Rule Chk Enable Register
 * SecTag Rule Check enables:  Each bit enables a specific rule check to be performed.
 * If the check fails then the SecTag is deemed to be in error and the corresponding
 * rule check interrupt will fire.
 */
union cavm_mcsx_cpm_rx_slave_sectag_rule_chk_enable
{
    uint64_t u;
    struct cavm_mcsx_cpm_rx_slave_sectag_rule_chk_enable_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_4_63         : 60;
        uint64_t sectag_pn_eq0_ena     : 1;  /**< [  3:  3](R/W) When set enables the SecTag Rule checker to deem the SecTag errored if (SecTag.PN == 0). */
        uint64_t sectag_sc_eq1_scb_eq1_ena : 1;/**< [  2:  2](R/W) When set enables the SecTag Rule checker to deem the SecTag errored if
                                                                 (SecTag.SC == 1 and SecTag.SCB == 1). */
        uint64_t sectag_es_eq1_sc_eq1_ena : 1;/**< [  1:  1](R/W) When set enables the SecTag Rule checker to deem the SecTag errored if
                                                                 (SecTag.ES == 1 and SecTag.SC == 1). */
        uint64_t sectag_v_eq1_ena      : 1;  /**< [  0:  0](R/W) When set enables the SecTag Rule checker to deem the SecTag errored if (SecTag.V == 1). */
#else /* Word 0 - Little Endian */
        uint64_t sectag_v_eq1_ena      : 1;  /**< [  0:  0](R/W) When set enables the SecTag Rule checker to deem the SecTag errored if (SecTag.V == 1). */
        uint64_t sectag_es_eq1_sc_eq1_ena : 1;/**< [  1:  1](R/W) When set enables the SecTag Rule checker to deem the SecTag errored if
                                                                 (SecTag.ES == 1 and SecTag.SC == 1). */
        uint64_t sectag_sc_eq1_scb_eq1_ena : 1;/**< [  2:  2](R/W) When set enables the SecTag Rule checker to deem the SecTag errored if
                                                                 (SecTag.SC == 1 and SecTag.SCB == 1). */
        uint64_t sectag_pn_eq0_ena     : 1;  /**< [  3:  3](R/W) When set enables the SecTag Rule checker to deem the SecTag errored if (SecTag.PN == 0). */
        uint64_t reserved_4_63         : 60;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_mcsx_cpm_rx_slave_sectag_rule_chk_enable_s cn; */
};
typedef union cavm_mcsx_cpm_rx_slave_sectag_rule_chk_enable cavm_mcsx_cpm_rx_slave_sectag_rule_chk_enable_t;

static inline uint64_t CAVM_MCSX_CPM_RX_SLAVE_SECTAG_RULE_CHK_ENABLE(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_MCSX_CPM_RX_SLAVE_SECTAG_RULE_CHK_ENABLE(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CNF10KB) && (a<=6))
        return 0x87e080000b38ll + 0x1000000ll * ((a) & 0x7);
    __cavm_csr_fatal("MCSX_CPM_RX_SLAVE_SECTAG_RULE_CHK_ENABLE", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_MCSX_CPM_RX_SLAVE_SECTAG_RULE_CHK_ENABLE(a) cavm_mcsx_cpm_rx_slave_sectag_rule_chk_enable_t
#define bustype_CAVM_MCSX_CPM_RX_SLAVE_SECTAG_RULE_CHK_ENABLE(a) CSR_TYPE_RSL
#define basename_CAVM_MCSX_CPM_RX_SLAVE_SECTAG_RULE_CHK_ENABLE(a) "MCSX_CPM_RX_SLAVE_SECTAG_RULE_CHK_ENABLE"
#define device_bar_CAVM_MCSX_CPM_RX_SLAVE_SECTAG_RULE_CHK_ENABLE(a) 0x0 /* PF_BAR0 */
#define busnum_CAVM_MCSX_CPM_RX_SLAVE_SECTAG_RULE_CHK_ENABLE(a) (a)
#define arguments_CAVM_MCSX_CPM_RX_SLAVE_SECTAG_RULE_CHK_ENABLE(a) (a),-1,-1,-1

/**
 * Register (RSL) mcs#_cpm_rx_slave_secy_map_mem#
 *
 * MCS Cpm Rx Slave Secy Map Mem Register
 * SecY MAP Memory - 64x7 : (aka Flow-ID policy/map).  The matching index obtained from
 * the Flow-ID TCAM lookup is used to obtain a corresponding Flow-ID policy from this
 * memory.  This table supports an N:1 mapping of Flow-IDs to SecY policies. The Flow-
 * ID Map is also used to identify control packets per Flow-ID based on a more
 * complicated set of lookups than is provided by the rules based control packet
 * classifier.
 */
union cavm_mcsx_cpm_rx_slave_secy_map_memx
{
    uint64_t u;
    struct cavm_mcsx_cpm_rx_slave_secy_map_memx_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_7_63         : 57;
        uint64_t ctrl_pkt              : 1;  /**< [  6:  6](R/W) Identifies all packets matching the associated Flow-ID lookup as control packets. */
        uint64_t secy                  : 6;  /**< [  5:  0](R/W) Identifies the SecY for this Flow. */
#else /* Word 0 - Little Endian */
        uint64_t secy                  : 6;  /**< [  5:  0](R/W) Identifies the SecY for this Flow. */
        uint64_t ctrl_pkt              : 1;  /**< [  6:  6](R/W) Identifies all packets matching the associated Flow-ID lookup as control packets. */
        uint64_t reserved_7_63         : 57;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_mcsx_cpm_rx_slave_secy_map_memx_s cn; */
};
typedef union cavm_mcsx_cpm_rx_slave_secy_map_memx cavm_mcsx_cpm_rx_slave_secy_map_memx_t;

static inline uint64_t CAVM_MCSX_CPM_RX_SLAVE_SECY_MAP_MEMX(uint64_t a, uint64_t b) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_MCSX_CPM_RX_SLAVE_SECY_MAP_MEMX(uint64_t a, uint64_t b)
{
    if (cavm_is_model(OCTEONTX_CNF10KB) && ((a<=6) && (b<=63)))
        return 0x87e080000bd0ll + 0x1000000ll * ((a) & 0x7) + 8ll * ((b) & 0x3f);
    __cavm_csr_fatal("MCSX_CPM_RX_SLAVE_SECY_MAP_MEMX", 2, a, b, 0, 0, 0, 0);
}

#define typedef_CAVM_MCSX_CPM_RX_SLAVE_SECY_MAP_MEMX(a,b) cavm_mcsx_cpm_rx_slave_secy_map_memx_t
#define bustype_CAVM_MCSX_CPM_RX_SLAVE_SECY_MAP_MEMX(a,b) CSR_TYPE_RSL
#define basename_CAVM_MCSX_CPM_RX_SLAVE_SECY_MAP_MEMX(a,b) "MCSX_CPM_RX_SLAVE_SECY_MAP_MEMX"
#define device_bar_CAVM_MCSX_CPM_RX_SLAVE_SECY_MAP_MEMX(a,b) 0x0 /* PF_BAR0 */
#define busnum_CAVM_MCSX_CPM_RX_SLAVE_SECY_MAP_MEMX(a,b) (a)
#define arguments_CAVM_MCSX_CPM_RX_SLAVE_SECY_MAP_MEMX(a,b) (a),(b),-1,-1

/**
 * Register (RSL) mcs#_cpm_rx_slave_secy_plcy_mem#
 *
 * MCS Cpm Rx Slave Secy Plcy Mem Register
 * SecY Policy Memory - 64x50 : The SecY Policy Table is indexed by the SecY obtained
 * from the SecY Map table (aka Flow-ID policy/map) above.  Each entry consists of the
 * following information:
 */
union cavm_mcsx_cpm_rx_slave_secy_plcy_memx
{
    uint64_t u;
    struct cavm_mcsx_cpm_rx_slave_secy_plcy_memx_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t replay_window         : 32; /**< [ 63: 32](R/W) Unsigned value indicating the size of the anti-replay window. The incoming
                                                                 packet PN must be greater than or equal to  the associated next_pn
                                                                 (sa_pn_table_mem) minus this value or the packet must be dropped. */
        uint64_t reserved_31           : 1;
        uint64_t replay_protect        : 1;  /**< [ 30: 30](R/W) Enables Anti-Replay protection */
        uint64_t reserved_29           : 1;
        uint64_t icv_includes_da_sa    : 1;  /**< [ 28: 28](R/W) When set, the outer DA/SA bytes are included in the authentication GHASH calculation.
                                                                 Both standard MACsec and WAN based MACsec with VLAN tags in the clear require
                                                                 the DA+SA to be included in the authentication.
                                                                 WAN based MPLS MACsec would typically have the DA+SA excluded from
                                                                 authentication since these fields can be modified by the NextHop lookup in MPLS
                                                                 routers. */
        uint64_t reserved_27           : 1;
        uint64_t confidentiality_offset : 7; /**< [ 26: 20](R/W) Defines the number of bytes that are unencrypted following the SecTag. */
        uint64_t reserved_16_19        : 4;
        uint64_t cipher                : 4;  /**< [ 15: 12](R/W) Defines the cipher suite to use for this SecY
                                                                 This is an enum with the following supported options:
                                                                 0= GCM-AES-128
                                                                 1= GCM-AES-256
                                                                 2= GCM-AES-XPN-128
                                                                 3= GCM-AES-XPN-256 */
        uint64_t reserved_10_11        : 2;
        uint64_t strip_sectag_icv      : 2;  /**< [  9:  8](R/W) 2'b00 = Strip both SecTag and ICV from packet
                                                                 2'b01 = Reserved.
                                                                 2'b10 = Preserve SecTag, Strip ICV.
                                                                 2'b11 = Preserve both SecTag and ICV. */
        uint64_t reserved_6_7          : 2;
        uint64_t validate_frames       : 2;  /**< [  5:  4](R/W) Defines the permit policy for frames as defined in 802.1ae. Encoded as follows:
                                                                 0 = DISABLED: Disable validation.
                                                                 1 = CHECK: Enable validation, do not discard invalid frames.
                                                                 2 = STRICT: Enable validation and discard invalid frames.
                                                                 3 = NULL: No processing or accounting. */
        uint64_t reserved_1_3          : 3;
        uint64_t controlled_port_enabled : 1;/**< [  0:  0](R/W) Enable (or disable) operation of the Controlled port associated with this SecY.
                                                                 This can be used to disable the Controlled port and drop all data packets until
                                                                 the secure connectivity has been fully established. */
#else /* Word 0 - Little Endian */
        uint64_t controlled_port_enabled : 1;/**< [  0:  0](R/W) Enable (or disable) operation of the Controlled port associated with this SecY.
                                                                 This can be used to disable the Controlled port and drop all data packets until
                                                                 the secure connectivity has been fully established. */
        uint64_t reserved_1_3          : 3;
        uint64_t validate_frames       : 2;  /**< [  5:  4](R/W) Defines the permit policy for frames as defined in 802.1ae. Encoded as follows:
                                                                 0 = DISABLED: Disable validation.
                                                                 1 = CHECK: Enable validation, do not discard invalid frames.
                                                                 2 = STRICT: Enable validation and discard invalid frames.
                                                                 3 = NULL: No processing or accounting. */
        uint64_t reserved_6_7          : 2;
        uint64_t strip_sectag_icv      : 2;  /**< [  9:  8](R/W) 2'b00 = Strip both SecTag and ICV from packet
                                                                 2'b01 = Reserved.
                                                                 2'b10 = Preserve SecTag, Strip ICV.
                                                                 2'b11 = Preserve both SecTag and ICV. */
        uint64_t reserved_10_11        : 2;
        uint64_t cipher                : 4;  /**< [ 15: 12](R/W) Defines the cipher suite to use for this SecY
                                                                 This is an enum with the following supported options:
                                                                 0= GCM-AES-128
                                                                 1= GCM-AES-256
                                                                 2= GCM-AES-XPN-128
                                                                 3= GCM-AES-XPN-256 */
        uint64_t reserved_16_19        : 4;
        uint64_t confidentiality_offset : 7; /**< [ 26: 20](R/W) Defines the number of bytes that are unencrypted following the SecTag. */
        uint64_t reserved_27           : 1;
        uint64_t icv_includes_da_sa    : 1;  /**< [ 28: 28](R/W) When set, the outer DA/SA bytes are included in the authentication GHASH calculation.
                                                                 Both standard MACsec and WAN based MACsec with VLAN tags in the clear require
                                                                 the DA+SA to be included in the authentication.
                                                                 WAN based MPLS MACsec would typically have the DA+SA excluded from
                                                                 authentication since these fields can be modified by the NextHop lookup in MPLS
                                                                 routers. */
        uint64_t reserved_29           : 1;
        uint64_t replay_protect        : 1;  /**< [ 30: 30](R/W) Enables Anti-Replay protection */
        uint64_t reserved_31           : 1;
        uint64_t replay_window         : 32; /**< [ 63: 32](R/W) Unsigned value indicating the size of the anti-replay window. The incoming
                                                                 packet PN must be greater than or equal to  the associated next_pn
                                                                 (sa_pn_table_mem) minus this value or the packet must be dropped. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_mcsx_cpm_rx_slave_secy_plcy_memx_s cn; */
};
typedef union cavm_mcsx_cpm_rx_slave_secy_plcy_memx cavm_mcsx_cpm_rx_slave_secy_plcy_memx_t;

static inline uint64_t CAVM_MCSX_CPM_RX_SLAVE_SECY_PLCY_MEMX(uint64_t a, uint64_t b) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_MCSX_CPM_RX_SLAVE_SECY_PLCY_MEMX(uint64_t a, uint64_t b)
{
    if (cavm_is_model(OCTEONTX_CNF10KB) && ((a<=6) && (b<=63)))
        return 0x87e080000dd0ll + 0x1000000ll * ((a) & 0x7) + 8ll * ((b) & 0x3f);
    __cavm_csr_fatal("MCSX_CPM_RX_SLAVE_SECY_PLCY_MEMX", 2, a, b, 0, 0, 0, 0);
}

#define typedef_CAVM_MCSX_CPM_RX_SLAVE_SECY_PLCY_MEMX(a,b) cavm_mcsx_cpm_rx_slave_secy_plcy_memx_t
#define bustype_CAVM_MCSX_CPM_RX_SLAVE_SECY_PLCY_MEMX(a,b) CSR_TYPE_RSL
#define basename_CAVM_MCSX_CPM_RX_SLAVE_SECY_PLCY_MEMX(a,b) "MCSX_CPM_RX_SLAVE_SECY_PLCY_MEMX"
#define device_bar_CAVM_MCSX_CPM_RX_SLAVE_SECY_PLCY_MEMX(a,b) 0x0 /* PF_BAR0 */
#define busnum_CAVM_MCSX_CPM_RX_SLAVE_SECY_PLCY_MEMX(a,b) (a)
#define arguments_CAVM_MCSX_CPM_RX_SLAVE_SECY_PLCY_MEMX(a,b) (a),(b),-1,-1

/**
 * Register (RSL) mcs#_cpm_rx_slave_time_unit_tick_rsvd
 *
 * INTERNAL: MCS Cpm Rx Slave Time Unit Tick Register
 *
 * Configures the duration of the time unit tick in terms of the number of core clock cycles.
 * This register is used in the SC/SA timer expiry mechanism.
 */
union cavm_mcsx_cpm_rx_slave_time_unit_tick_rsvd
{
    uint64_t u;
    struct cavm_mcsx_cpm_rx_slave_time_unit_tick_rsvd_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_32_63        : 32;
        uint64_t num_cycles            : 32; /**< [ 31:  0](R/W) Reserved. */
#else /* Word 0 - Little Endian */
        uint64_t num_cycles            : 32; /**< [ 31:  0](R/W) Reserved. */
        uint64_t reserved_32_63        : 32;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_mcsx_cpm_rx_slave_time_unit_tick_rsvd_s cn; */
};
typedef union cavm_mcsx_cpm_rx_slave_time_unit_tick_rsvd cavm_mcsx_cpm_rx_slave_time_unit_tick_rsvd_t;

static inline uint64_t CAVM_MCSX_CPM_RX_SLAVE_TIME_UNIT_TICK_RSVD(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_MCSX_CPM_RX_SLAVE_TIME_UNIT_TICK_RSVD(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CNF10KB) && (a<=6))
        return 0x87e080005008ll + 0x1000000ll * ((a) & 0x7);
    __cavm_csr_fatal("MCSX_CPM_RX_SLAVE_TIME_UNIT_TICK_RSVD", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_MCSX_CPM_RX_SLAVE_TIME_UNIT_TICK_RSVD(a) cavm_mcsx_cpm_rx_slave_time_unit_tick_rsvd_t
#define bustype_CAVM_MCSX_CPM_RX_SLAVE_TIME_UNIT_TICK_RSVD(a) CSR_TYPE_RSL
#define basename_CAVM_MCSX_CPM_RX_SLAVE_TIME_UNIT_TICK_RSVD(a) "MCSX_CPM_RX_SLAVE_TIME_UNIT_TICK_RSVD"
#define device_bar_CAVM_MCSX_CPM_RX_SLAVE_TIME_UNIT_TICK_RSVD(a) 0x0 /* PF_BAR0 */
#define busnum_CAVM_MCSX_CPM_RX_SLAVE_TIME_UNIT_TICK_RSVD(a) (a)
#define arguments_CAVM_MCSX_CPM_RX_SLAVE_TIME_UNIT_TICK_RSVD(a) (a),-1,-1,-1

/**
 * Register (RSL) mcs#_cpm_rx_slave_xpn_threshold
 *
 * MCS Cpm Rx Slave Xpn Threshold Register
 * XPN Mode Threshold: 64b XPN threshold to trigger interrupt if enabled.  The
 * interrupt fires when the received packet uses 64b XPN and is classed as an InPktsOK
 * (refer to Secure Frame Validation 10-4 ieee.802.1) and whose 64b recovered XPN
 * greater than= {xpn_threshold_msb, xpn_threshold_lsb}.
 */
union cavm_mcsx_cpm_rx_slave_xpn_threshold
{
    uint64_t u;
    struct cavm_mcsx_cpm_rx_slave_xpn_threshold_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t xpn_threshold_msb     : 32; /**< [ 63: 32](R/W) 32 MSB of the 64b xpn_threshold. */
        uint64_t xpn_threshold_lsb     : 32; /**< [ 31:  0](R/W) 32 LSB of the 64b xpn_threshold. */
#else /* Word 0 - Little Endian */
        uint64_t xpn_threshold_lsb     : 32; /**< [ 31:  0](R/W) 32 LSB of the 64b xpn_threshold. */
        uint64_t xpn_threshold_msb     : 32; /**< [ 63: 32](R/W) 32 MSB of the 64b xpn_threshold. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_mcsx_cpm_rx_slave_xpn_threshold_s cn; */
};
typedef union cavm_mcsx_cpm_rx_slave_xpn_threshold cavm_mcsx_cpm_rx_slave_xpn_threshold_t;

static inline uint64_t CAVM_MCSX_CPM_RX_SLAVE_XPN_THRESHOLD(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_MCSX_CPM_RX_SLAVE_XPN_THRESHOLD(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CNF10KB) && (a<=6))
        return 0x87e080000b90ll + 0x1000000ll * ((a) & 0x7);
    __cavm_csr_fatal("MCSX_CPM_RX_SLAVE_XPN_THRESHOLD", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_MCSX_CPM_RX_SLAVE_XPN_THRESHOLD(a) cavm_mcsx_cpm_rx_slave_xpn_threshold_t
#define bustype_CAVM_MCSX_CPM_RX_SLAVE_XPN_THRESHOLD(a) CSR_TYPE_RSL
#define basename_CAVM_MCSX_CPM_RX_SLAVE_XPN_THRESHOLD(a) "MCSX_CPM_RX_SLAVE_XPN_THRESHOLD"
#define device_bar_CAVM_MCSX_CPM_RX_SLAVE_XPN_THRESHOLD(a) 0x0 /* PF_BAR0 */
#define busnum_CAVM_MCSX_CPM_RX_SLAVE_XPN_THRESHOLD(a) (a)
#define arguments_CAVM_MCSX_CPM_RX_SLAVE_XPN_THRESHOLD(a) (a),-1,-1,-1

/**
 * Register (RSL) mcs#_cpm_tx_slave_auto_rekey_enable_0
 *
 * MCS Cpm Tx Slave Auto Rekey Enable 0 Register
 * Per SC auto rekey enable: If enabled, then once the pn_threshold is reached, auto
 * rekey will happen.  On rekey, the inactive SA becomes the active SA.  The old SA
 * becomes invalidated (tx_sa_vld bit is cleared).  Note that when Auto-Rekey reaches
 * the PN Rekey threshold, it can consume up to 3 more PN's (i.e., 3 more packets)
 * before re-keying to the next SA.
 */
union cavm_mcsx_cpm_tx_slave_auto_rekey_enable_0
{
    uint64_t u;
    struct cavm_mcsx_cpm_tx_slave_auto_rekey_enable_0_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t auto_rekey_enable     : 64; /**< [ 63:  0](R/W) Per SC auto rekey enable. 1'b1 means enabled. */
#else /* Word 0 - Little Endian */
        uint64_t auto_rekey_enable     : 64; /**< [ 63:  0](R/W) Per SC auto rekey enable. 1'b1 means enabled. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_mcsx_cpm_tx_slave_auto_rekey_enable_0_s cn; */
};
typedef union cavm_mcsx_cpm_tx_slave_auto_rekey_enable_0 cavm_mcsx_cpm_tx_slave_auto_rekey_enable_0_t;

static inline uint64_t CAVM_MCSX_CPM_TX_SLAVE_AUTO_REKEY_ENABLE_0(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_MCSX_CPM_TX_SLAVE_AUTO_REKEY_ENABLE_0(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CNF10KB) && (a<=6))
        return 0x87e080005500ll + 0x1000000ll * ((a) & 0x7);
    __cavm_csr_fatal("MCSX_CPM_TX_SLAVE_AUTO_REKEY_ENABLE_0", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_MCSX_CPM_TX_SLAVE_AUTO_REKEY_ENABLE_0(a) cavm_mcsx_cpm_tx_slave_auto_rekey_enable_0_t
#define bustype_CAVM_MCSX_CPM_TX_SLAVE_AUTO_REKEY_ENABLE_0(a) CSR_TYPE_RSL
#define basename_CAVM_MCSX_CPM_TX_SLAVE_AUTO_REKEY_ENABLE_0(a) "MCSX_CPM_TX_SLAVE_AUTO_REKEY_ENABLE_0"
#define device_bar_CAVM_MCSX_CPM_TX_SLAVE_AUTO_REKEY_ENABLE_0(a) 0x0 /* PF_BAR0 */
#define busnum_CAVM_MCSX_CPM_TX_SLAVE_AUTO_REKEY_ENABLE_0(a) (a)
#define arguments_CAVM_MCSX_CPM_TX_SLAVE_AUTO_REKEY_ENABLE_0(a) (a),-1,-1,-1

/**
 * Register (RSL) mcs#_cpm_tx_slave_cpm_tx_int
 *
 * MCS Cpm Tx Slave Cpm Tx Int Register
 * CPM Interrupt Register
 */
union cavm_mcsx_cpm_tx_slave_cpm_tx_int
{
    uint64_t u;
    struct cavm_mcsx_cpm_tx_slave_cpm_tx_int_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_5_63         : 59;
        uint64_t sc_expiry_actual_timeout : 1;/**< [  4:  4](R/W1C) Reserved.
                                                                 Internal:
                                                                 An active SC/SA has reached its sc_actual_timeout threshold.  See the leaf
                                                                 interrupt register to determine which SC fired. */
        uint64_t sc_expiry_pre_timeout : 1;  /**< [  3:  3](R/W1C) Reserved.
                                                                 Internal:
                                                                 An active SC/SA has reached its sc_pre_timeout threshold.  See the leaf
                                                                 interrupt register to determine which SC fired. */
        uint64_t sa_not_valid          : 1;  /**< [  2:  2](R/W1C) The SA corresponding to the packet is not valid.  The packet will not be sent. */
        uint64_t pn_thresh_reached     : 1;  /**< [  1:  1](R/W1C) Current PN is greater than or equal to the configurable threshold. */
        uint64_t packet_xpn_eq0        : 1;  /**< [  0:  0](R/W1C) The current packet (X)PN is equal to zero. The packet will not be sent. */
#else /* Word 0 - Little Endian */
        uint64_t packet_xpn_eq0        : 1;  /**< [  0:  0](R/W1C) The current packet (X)PN is equal to zero. The packet will not be sent. */
        uint64_t pn_thresh_reached     : 1;  /**< [  1:  1](R/W1C) Current PN is greater than or equal to the configurable threshold. */
        uint64_t sa_not_valid          : 1;  /**< [  2:  2](R/W1C) The SA corresponding to the packet is not valid.  The packet will not be sent. */
        uint64_t sc_expiry_pre_timeout : 1;  /**< [  3:  3](R/W1C) Reserved.
                                                                 Internal:
                                                                 An active SC/SA has reached its sc_pre_timeout threshold.  See the leaf
                                                                 interrupt register to determine which SC fired. */
        uint64_t sc_expiry_actual_timeout : 1;/**< [  4:  4](R/W1C) Reserved.
                                                                 Internal:
                                                                 An active SC/SA has reached its sc_actual_timeout threshold.  See the leaf
                                                                 interrupt register to determine which SC fired. */
        uint64_t reserved_5_63         : 59;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_mcsx_cpm_tx_slave_cpm_tx_int_s cn; */
};
typedef union cavm_mcsx_cpm_tx_slave_cpm_tx_int cavm_mcsx_cpm_tx_slave_cpm_tx_int_t;

static inline uint64_t CAVM_MCSX_CPM_TX_SLAVE_CPM_TX_INT(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_MCSX_CPM_TX_SLAVE_CPM_TX_INT(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CNF10KB) && (a<=6))
        return 0x87e0800054a0ll + 0x1000000ll * ((a) & 0x7);
    __cavm_csr_fatal("MCSX_CPM_TX_SLAVE_CPM_TX_INT", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_MCSX_CPM_TX_SLAVE_CPM_TX_INT(a) cavm_mcsx_cpm_tx_slave_cpm_tx_int_t
#define bustype_CAVM_MCSX_CPM_TX_SLAVE_CPM_TX_INT(a) CSR_TYPE_RSL
#define basename_CAVM_MCSX_CPM_TX_SLAVE_CPM_TX_INT(a) "MCSX_CPM_TX_SLAVE_CPM_TX_INT"
#define device_bar_CAVM_MCSX_CPM_TX_SLAVE_CPM_TX_INT(a) 0x0 /* PF_BAR0 */
#define busnum_CAVM_MCSX_CPM_TX_SLAVE_CPM_TX_INT(a) (a)
#define arguments_CAVM_MCSX_CPM_TX_SLAVE_CPM_TX_INT(a) (a),-1,-1,-1

/**
 * Register (RSL) mcs#_cpm_tx_slave_cpm_tx_int_enb
 *
 * MCS Cpm Tx Slave Cpm Tx Int Enb Register
 * ENB register for cpm_tx_int
 */
union cavm_mcsx_cpm_tx_slave_cpm_tx_int_enb
{
    uint64_t u;
    struct cavm_mcsx_cpm_tx_slave_cpm_tx_int_enb_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_5_63         : 59;
        uint64_t sc_expiry_actual_timeout_enb : 1;/**< [  4:  4](R/W) Reserved.
                                                                 Internal:
                                                                 An active SC/SA has reached its sc_actual_timeout threshold.  See the leaf
                                                                 interrupt register to determine which SC fired. */
        uint64_t sc_expiry_pre_timeout_enb : 1;/**< [  3:  3](R/W) Reserved.
                                                                 Internal:
                                                                 An active SC/SA has reached its sc_pre_timeout threshold.  See the leaf
                                                                 interrupt register to determine which SC fired. */
        uint64_t sa_not_valid_enb      : 1;  /**< [  2:  2](R/W) The SA corresponding to the packet is not valid.  The packet will not be sent. */
        uint64_t pn_thresh_reached_enb : 1;  /**< [  1:  1](R/W) Current PN is greater than or equal to the configurable threshold. */
        uint64_t packet_xpn_eq0_enb    : 1;  /**< [  0:  0](R/W) The current packet (X)PN is equal to zero. The packet will not be sent. */
#else /* Word 0 - Little Endian */
        uint64_t packet_xpn_eq0_enb    : 1;  /**< [  0:  0](R/W) The current packet (X)PN is equal to zero. The packet will not be sent. */
        uint64_t pn_thresh_reached_enb : 1;  /**< [  1:  1](R/W) Current PN is greater than or equal to the configurable threshold. */
        uint64_t sa_not_valid_enb      : 1;  /**< [  2:  2](R/W) The SA corresponding to the packet is not valid.  The packet will not be sent. */
        uint64_t sc_expiry_pre_timeout_enb : 1;/**< [  3:  3](R/W) Reserved.
                                                                 Internal:
                                                                 An active SC/SA has reached its sc_pre_timeout threshold.  See the leaf
                                                                 interrupt register to determine which SC fired. */
        uint64_t sc_expiry_actual_timeout_enb : 1;/**< [  4:  4](R/W) Reserved.
                                                                 Internal:
                                                                 An active SC/SA has reached its sc_actual_timeout threshold.  See the leaf
                                                                 interrupt register to determine which SC fired. */
        uint64_t reserved_5_63         : 59;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_mcsx_cpm_tx_slave_cpm_tx_int_enb_s cn; */
};
typedef union cavm_mcsx_cpm_tx_slave_cpm_tx_int_enb cavm_mcsx_cpm_tx_slave_cpm_tx_int_enb_t;

static inline uint64_t CAVM_MCSX_CPM_TX_SLAVE_CPM_TX_INT_ENB(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_MCSX_CPM_TX_SLAVE_CPM_TX_INT_ENB(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CNF10KB) && (a<=6))
        return 0x87e0800054a8ll + 0x1000000ll * ((a) & 0x7);
    __cavm_csr_fatal("MCSX_CPM_TX_SLAVE_CPM_TX_INT_ENB", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_MCSX_CPM_TX_SLAVE_CPM_TX_INT_ENB(a) cavm_mcsx_cpm_tx_slave_cpm_tx_int_enb_t
#define bustype_CAVM_MCSX_CPM_TX_SLAVE_CPM_TX_INT_ENB(a) CSR_TYPE_RSL
#define basename_CAVM_MCSX_CPM_TX_SLAVE_CPM_TX_INT_ENB(a) "MCSX_CPM_TX_SLAVE_CPM_TX_INT_ENB"
#define device_bar_CAVM_MCSX_CPM_TX_SLAVE_CPM_TX_INT_ENB(a) 0x0 /* PF_BAR0 */
#define busnum_CAVM_MCSX_CPM_TX_SLAVE_CPM_TX_INT_ENB(a) (a)
#define arguments_CAVM_MCSX_CPM_TX_SLAVE_CPM_TX_INT_ENB(a) (a),-1,-1,-1

/**
 * Register (RSL) mcs#_cpm_tx_slave_cpm_tx_int_intr_rw
 *
 * MCS Cpm Tx Slave Cpm Tx Int Intr Rw Register
 * Read/write register for cpm_tx_int
 */
union cavm_mcsx_cpm_tx_slave_cpm_tx_int_intr_rw
{
    uint64_t u;
    struct cavm_mcsx_cpm_tx_slave_cpm_tx_int_intr_rw_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_5_63         : 59;
        uint64_t sc_expiry_actual_timeout : 1;/**< [  4:  4](R/W) Reserved.
                                                                 Internal:
                                                                 An active SC/SA has reached its sc_actual_timeout threshold.  See the leaf
                                                                 interrupt register to determine which SC fired. */
        uint64_t sc_expiry_pre_timeout : 1;  /**< [  3:  3](R/W) Reserved.
                                                                 Internal:
                                                                 An active SC/SA has reached its sc_pre_timeout threshold.  See the leaf
                                                                 interrupt register to determine which SC fired. */
        uint64_t sa_not_valid          : 1;  /**< [  2:  2](R/W) The SA corresponding to the packet is not valid.  The packet will not be sent. */
        uint64_t pn_thresh_reached     : 1;  /**< [  1:  1](R/W) Current PN is greater than or equal to the configurable threshold. */
        uint64_t packet_xpn_eq0        : 1;  /**< [  0:  0](R/W) The current packet (X)PN is equal to zero. The packet will not be sent. */
#else /* Word 0 - Little Endian */
        uint64_t packet_xpn_eq0        : 1;  /**< [  0:  0](R/W) The current packet (X)PN is equal to zero. The packet will not be sent. */
        uint64_t pn_thresh_reached     : 1;  /**< [  1:  1](R/W) Current PN is greater than or equal to the configurable threshold. */
        uint64_t sa_not_valid          : 1;  /**< [  2:  2](R/W) The SA corresponding to the packet is not valid.  The packet will not be sent. */
        uint64_t sc_expiry_pre_timeout : 1;  /**< [  3:  3](R/W) Reserved.
                                                                 Internal:
                                                                 An active SC/SA has reached its sc_pre_timeout threshold.  See the leaf
                                                                 interrupt register to determine which SC fired. */
        uint64_t sc_expiry_actual_timeout : 1;/**< [  4:  4](R/W) Reserved.
                                                                 Internal:
                                                                 An active SC/SA has reached its sc_actual_timeout threshold.  See the leaf
                                                                 interrupt register to determine which SC fired. */
        uint64_t reserved_5_63         : 59;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_mcsx_cpm_tx_slave_cpm_tx_int_intr_rw_s cn; */
};
typedef union cavm_mcsx_cpm_tx_slave_cpm_tx_int_intr_rw cavm_mcsx_cpm_tx_slave_cpm_tx_int_intr_rw_t;

static inline uint64_t CAVM_MCSX_CPM_TX_SLAVE_CPM_TX_INT_INTR_RW(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_MCSX_CPM_TX_SLAVE_CPM_TX_INT_INTR_RW(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CNF10KB) && (a<=6))
        return 0x87e0800054b8ll + 0x1000000ll * ((a) & 0x7);
    __cavm_csr_fatal("MCSX_CPM_TX_SLAVE_CPM_TX_INT_INTR_RW", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_MCSX_CPM_TX_SLAVE_CPM_TX_INT_INTR_RW(a) cavm_mcsx_cpm_tx_slave_cpm_tx_int_intr_rw_t
#define bustype_CAVM_MCSX_CPM_TX_SLAVE_CPM_TX_INT_INTR_RW(a) CSR_TYPE_RSL
#define basename_CAVM_MCSX_CPM_TX_SLAVE_CPM_TX_INT_INTR_RW(a) "MCSX_CPM_TX_SLAVE_CPM_TX_INT_INTR_RW"
#define device_bar_CAVM_MCSX_CPM_TX_SLAVE_CPM_TX_INT_INTR_RW(a) 0x0 /* PF_BAR0 */
#define busnum_CAVM_MCSX_CPM_TX_SLAVE_CPM_TX_INT_INTR_RW(a) (a)
#define arguments_CAVM_MCSX_CPM_TX_SLAVE_CPM_TX_INT_INTR_RW(a) (a),-1,-1,-1

/**
 * Register (RSL) mcs#_cpm_tx_slave_cpm_tx_int_raw
 *
 * MCS Cpm Tx Slave Cpm Tx Int Raw Register
 * Raw register for cpm_tx_int
 */
union cavm_mcsx_cpm_tx_slave_cpm_tx_int_raw
{
    uint64_t u;
    struct cavm_mcsx_cpm_tx_slave_cpm_tx_int_raw_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_5_63         : 59;
        uint64_t sc_expiry_actual_timeout : 1;/**< [  4:  4](RO) Reserved.
                                                                 Internal:
                                                                 An active SC/SA has reached its sc_actual_timeout threshold.  See the leaf
                                                                 interrupt register to determine which SC fired. */
        uint64_t sc_expiry_pre_timeout : 1;  /**< [  3:  3](RO) Reserved.
                                                                 Internal:
                                                                 An active SC/SA has reached its sc_pre_timeout threshold.  See the leaf
                                                                 interrupt register to determine which SC fired. */
        uint64_t sa_not_valid          : 1;  /**< [  2:  2](RO) The SA corresponding to the packet is not valid.  The packet will not be sent. */
        uint64_t pn_thresh_reached     : 1;  /**< [  1:  1](RO) Current PN is greater than or equal to the configurable threshold. */
        uint64_t packet_xpn_eq0        : 1;  /**< [  0:  0](RO) The current packet (X)PN is equal to zero. The packet will not be sent. */
#else /* Word 0 - Little Endian */
        uint64_t packet_xpn_eq0        : 1;  /**< [  0:  0](RO) The current packet (X)PN is equal to zero. The packet will not be sent. */
        uint64_t pn_thresh_reached     : 1;  /**< [  1:  1](RO) Current PN is greater than or equal to the configurable threshold. */
        uint64_t sa_not_valid          : 1;  /**< [  2:  2](RO) The SA corresponding to the packet is not valid.  The packet will not be sent. */
        uint64_t sc_expiry_pre_timeout : 1;  /**< [  3:  3](RO) Reserved.
                                                                 Internal:
                                                                 An active SC/SA has reached its sc_pre_timeout threshold.  See the leaf
                                                                 interrupt register to determine which SC fired. */
        uint64_t sc_expiry_actual_timeout : 1;/**< [  4:  4](RO) Reserved.
                                                                 Internal:
                                                                 An active SC/SA has reached its sc_actual_timeout threshold.  See the leaf
                                                                 interrupt register to determine which SC fired. */
        uint64_t reserved_5_63         : 59;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_mcsx_cpm_tx_slave_cpm_tx_int_raw_s cn; */
};
typedef union cavm_mcsx_cpm_tx_slave_cpm_tx_int_raw cavm_mcsx_cpm_tx_slave_cpm_tx_int_raw_t;

static inline uint64_t CAVM_MCSX_CPM_TX_SLAVE_CPM_TX_INT_RAW(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_MCSX_CPM_TX_SLAVE_CPM_TX_INT_RAW(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CNF10KB) && (a<=6))
        return 0x87e0800054b0ll + 0x1000000ll * ((a) & 0x7);
    __cavm_csr_fatal("MCSX_CPM_TX_SLAVE_CPM_TX_INT_RAW", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_MCSX_CPM_TX_SLAVE_CPM_TX_INT_RAW(a) cavm_mcsx_cpm_tx_slave_cpm_tx_int_raw_t
#define bustype_CAVM_MCSX_CPM_TX_SLAVE_CPM_TX_INT_RAW(a) CSR_TYPE_RSL
#define basename_CAVM_MCSX_CPM_TX_SLAVE_CPM_TX_INT_RAW(a) "MCSX_CPM_TX_SLAVE_CPM_TX_INT_RAW"
#define device_bar_CAVM_MCSX_CPM_TX_SLAVE_CPM_TX_INT_RAW(a) 0x0 /* PF_BAR0 */
#define busnum_CAVM_MCSX_CPM_TX_SLAVE_CPM_TX_INT_RAW(a) (a)
#define arguments_CAVM_MCSX_CPM_TX_SLAVE_CPM_TX_INT_RAW(a) (a),-1,-1,-1

/**
 * Register (RSL) mcs#_cpm_tx_slave_dbg_mux_sel
 *
 * MCS Cpm Tx Slave Dbg Mux Sel Register
 * Per segment mux control for the debug_mux.  Configuration of this register will
 * affect which debug set is output on the corresponding debug mux logic for the CPM.
 */
union cavm_mcsx_cpm_tx_slave_dbg_mux_sel
{
    uint64_t u;
    struct cavm_mcsx_cpm_tx_slave_dbg_mux_sel_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_30_63        : 34;
        uint64_t seg3                  : 6;  /**< [ 29: 24](R/W) Select which debug set is output on the segment3 of the debug mux for the CPM.
                                                                 Note that a higher level dbg_mux_sel also exists to select which block's debug
                                                                 sets are to be output of the IP */
        uint64_t reserved_22_23        : 2;
        uint64_t seg2                  : 6;  /**< [ 21: 16](R/W) Select which debug set is output on the segment2 of the debug mux for the CPM.
                                                                 Note that a higher level dbg_mux_sel also exists to select which block's debug
                                                                 sets are to be output of the IP */
        uint64_t reserved_14_15        : 2;
        uint64_t seg1                  : 6;  /**< [ 13:  8](R/W) Select which debug set is output on the segment1 of the debug mux for the CPM.
                                                                 Note that a higher level dbg_mux_sel also exists to select which block's debug
                                                                 sets are to be output of the IP */
        uint64_t reserved_6_7          : 2;
        uint64_t seg0                  : 6;  /**< [  5:  0](R/W) Select which debug set is output on the segment0 of the debug mux for the CPM.
                                                                 Note that a higher level dbg_mux_sel also exists to select which block's debug
                                                                 sets are to be output of the IP */
#else /* Word 0 - Little Endian */
        uint64_t seg0                  : 6;  /**< [  5:  0](R/W) Select which debug set is output on the segment0 of the debug mux for the CPM.
                                                                 Note that a higher level dbg_mux_sel also exists to select which block's debug
                                                                 sets are to be output of the IP */
        uint64_t reserved_6_7          : 2;
        uint64_t seg1                  : 6;  /**< [ 13:  8](R/W) Select which debug set is output on the segment1 of the debug mux for the CPM.
                                                                 Note that a higher level dbg_mux_sel also exists to select which block's debug
                                                                 sets are to be output of the IP */
        uint64_t reserved_14_15        : 2;
        uint64_t seg2                  : 6;  /**< [ 21: 16](R/W) Select which debug set is output on the segment2 of the debug mux for the CPM.
                                                                 Note that a higher level dbg_mux_sel also exists to select which block's debug
                                                                 sets are to be output of the IP */
        uint64_t reserved_22_23        : 2;
        uint64_t seg3                  : 6;  /**< [ 29: 24](R/W) Select which debug set is output on the segment3 of the debug mux for the CPM.
                                                                 Note that a higher level dbg_mux_sel also exists to select which block's debug
                                                                 sets are to be output of the IP */
        uint64_t reserved_30_63        : 34;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_mcsx_cpm_tx_slave_dbg_mux_sel_s cn; */
};
typedef union cavm_mcsx_cpm_tx_slave_dbg_mux_sel cavm_mcsx_cpm_tx_slave_dbg_mux_sel_t;

static inline uint64_t CAVM_MCSX_CPM_TX_SLAVE_DBG_MUX_SEL(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_MCSX_CPM_TX_SLAVE_DBG_MUX_SEL(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CNF10KB) && (a<=6))
        return 0x87e08000bc08ll + 0x1000000ll * ((a) & 0x7);
    __cavm_csr_fatal("MCSX_CPM_TX_SLAVE_DBG_MUX_SEL", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_MCSX_CPM_TX_SLAVE_DBG_MUX_SEL(a) cavm_mcsx_cpm_tx_slave_dbg_mux_sel_t
#define bustype_CAVM_MCSX_CPM_TX_SLAVE_DBG_MUX_SEL(a) CSR_TYPE_RSL
#define basename_CAVM_MCSX_CPM_TX_SLAVE_DBG_MUX_SEL(a) "MCSX_CPM_TX_SLAVE_DBG_MUX_SEL"
#define device_bar_CAVM_MCSX_CPM_TX_SLAVE_DBG_MUX_SEL(a) 0x0 /* PF_BAR0 */
#define busnum_CAVM_MCSX_CPM_TX_SLAVE_DBG_MUX_SEL(a) (a)
#define arguments_CAVM_MCSX_CPM_TX_SLAVE_DBG_MUX_SEL(a) (a),-1,-1,-1

/**
 * Register (RSL) mcs#_cpm_tx_slave_debug_status
 *
 * MCS Cpm Tx Slave Debug Status Register
 * Debug status register:  Captures the debug set selected by dbg_mux_sel.
 */
union cavm_mcsx_cpm_tx_slave_debug_status
{
    uint64_t u;
    struct cavm_mcsx_cpm_tx_slave_debug_status_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t seg3                  : 16; /**< [ 63: 48](RO) Debug set status for segment3. */
        uint64_t seg2                  : 16; /**< [ 47: 32](RO) Debug set status for segment2. */
        uint64_t seg1                  : 16; /**< [ 31: 16](RO) Debug set status for segment1. */
        uint64_t seg0                  : 16; /**< [ 15:  0](RO) Debug set status for segment0. */
#else /* Word 0 - Little Endian */
        uint64_t seg0                  : 16; /**< [ 15:  0](RO) Debug set status for segment0. */
        uint64_t seg1                  : 16; /**< [ 31: 16](RO) Debug set status for segment1. */
        uint64_t seg2                  : 16; /**< [ 47: 32](RO) Debug set status for segment2. */
        uint64_t seg3                  : 16; /**< [ 63: 48](RO) Debug set status for segment3. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_mcsx_cpm_tx_slave_debug_status_s cn; */
};
typedef union cavm_mcsx_cpm_tx_slave_debug_status cavm_mcsx_cpm_tx_slave_debug_status_t;

static inline uint64_t CAVM_MCSX_CPM_TX_SLAVE_DEBUG_STATUS(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_MCSX_CPM_TX_SLAVE_DEBUG_STATUS(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CNF10KB) && (a<=6))
        return 0x87e08000bc10ll + 0x1000000ll * ((a) & 0x7);
    __cavm_csr_fatal("MCSX_CPM_TX_SLAVE_DEBUG_STATUS", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_MCSX_CPM_TX_SLAVE_DEBUG_STATUS(a) cavm_mcsx_cpm_tx_slave_debug_status_t
#define bustype_CAVM_MCSX_CPM_TX_SLAVE_DEBUG_STATUS(a) CSR_TYPE_RSL
#define basename_CAVM_MCSX_CPM_TX_SLAVE_DEBUG_STATUS(a) "MCSX_CPM_TX_SLAVE_DEBUG_STATUS"
#define device_bar_CAVM_MCSX_CPM_TX_SLAVE_DEBUG_STATUS(a) 0x0 /* PF_BAR0 */
#define busnum_CAVM_MCSX_CPM_TX_SLAVE_DEBUG_STATUS(a) (a)
#define arguments_CAVM_MCSX_CPM_TX_SLAVE_DEBUG_STATUS(a) (a),-1,-1,-1

/**
 * Register (RSL) mcs#_cpm_tx_slave_flowid_tcam_data_0#
 *
 * MCS Cpm Tx Slave Flowid Tcam Data 0 Register
 * Flow ID TCAM - 64x208: With standard MACsec, a Security Association can only be
 * associated with a port.  WAN based MACsec allows different flows on the same port to
 * support different SecYs and Security Associations (SA) greatly expanding upon its
 * usefulness.  The first step in the classification process involves performing a
 * lookup in the Flow-ID TCAM based on the information extracted by the Packet
 * Extractor block to determine the Flow-ID index.  All packets including control
 * packets trigger a lookup in this TCAM. Note that there is also 64 entries of per bit
 * masks (flowid_tcam_mask).  The lookup key consists of the following sub-fields.
 */
union cavm_mcsx_cpm_tx_slave_flowid_tcam_data_0x
{
    uint64_t u;
    struct cavm_mcsx_cpm_tx_slave_flowid_tcam_data_0x_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t mac_sa                : 16; /**< [ 63: 48](R/W) MAC SA field extracted from the packet */
        uint64_t mac_da                : 48; /**< [ 47:  0](R/W) MAC DA field extracted from the packet */
#else /* Word 0 - Little Endian */
        uint64_t mac_da                : 48; /**< [ 47:  0](R/W) MAC DA field extracted from the packet */
        uint64_t mac_sa                : 16; /**< [ 63: 48](R/W) MAC SA field extracted from the packet */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_mcsx_cpm_tx_slave_flowid_tcam_data_0x_s cn; */
};
typedef union cavm_mcsx_cpm_tx_slave_flowid_tcam_data_0x cavm_mcsx_cpm_tx_slave_flowid_tcam_data_0x_t;

static inline uint64_t CAVM_MCSX_CPM_TX_SLAVE_FLOWID_TCAM_DATA_0X(uint64_t a, uint64_t b) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_MCSX_CPM_TX_SLAVE_FLOWID_TCAM_DATA_0X(uint64_t a, uint64_t b)
{
    if (cavm_is_model(OCTEONTX_CNF10KB) && ((a<=6) && (b<=63)))
        return 0x87e08000a7c0ll + 0x1000000ll * ((a) & 0x7) + 0x20ll * ((b) & 0x3f);
    __cavm_csr_fatal("MCSX_CPM_TX_SLAVE_FLOWID_TCAM_DATA_0X", 2, a, b, 0, 0, 0, 0);
}

#define typedef_CAVM_MCSX_CPM_TX_SLAVE_FLOWID_TCAM_DATA_0X(a,b) cavm_mcsx_cpm_tx_slave_flowid_tcam_data_0x_t
#define bustype_CAVM_MCSX_CPM_TX_SLAVE_FLOWID_TCAM_DATA_0X(a,b) CSR_TYPE_RSL
#define basename_CAVM_MCSX_CPM_TX_SLAVE_FLOWID_TCAM_DATA_0X(a,b) "MCSX_CPM_TX_SLAVE_FLOWID_TCAM_DATA_0X"
#define device_bar_CAVM_MCSX_CPM_TX_SLAVE_FLOWID_TCAM_DATA_0X(a,b) 0x0 /* PF_BAR0 */
#define busnum_CAVM_MCSX_CPM_TX_SLAVE_FLOWID_TCAM_DATA_0X(a,b) (a)
#define arguments_CAVM_MCSX_CPM_TX_SLAVE_FLOWID_TCAM_DATA_0X(a,b) (a),(b),-1,-1

/**
 * Register (RSL) mcs#_cpm_tx_slave_flowid_tcam_data_1#
 *
 * MCS Cpm Tx Slave Flowid Tcam Data 1 Register
 * Flow ID TCAM - 64x208: With standard MACsec, a Security Association can only be
 * associated with a port.  WAN based MACsec allows different flows on the same port to
 * support different SecYs and Security Associations (SA) greatly expanding upon its
 * usefulness.  The first step in the classification process involves performing a
 * lookup in the Flow-ID TCAM based on the information extracted by the Packet
 * Extractor block to determine the Flow-ID index.  All packets including control
 * packets trigger a lookup in this TCAM. Note that there is also 64 entries of per bit
 * masks (flowid_tcam_mask).  The lookup key consists of the following sub-fields.
 */
union cavm_mcsx_cpm_tx_slave_flowid_tcam_data_1x
{
    uint64_t u;
    struct cavm_mcsx_cpm_tx_slave_flowid_tcam_data_1x_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t outer_tag_id          : 16; /**< [ 63: 48](R/W) Outermost VLAN ID {8'd0, VLAN_ID[11:0]} */
        uint64_t ether_type            : 16; /**< [ 47: 32](R/W) First E-Type found in the packet that doesn't match one of the preconfigured VLAN values. */
        uint64_t mac_sa                : 32; /**< [ 31:  0](R/W) MAC SA field extracted from the packet */
#else /* Word 0 - Little Endian */
        uint64_t mac_sa                : 32; /**< [ 31:  0](R/W) MAC SA field extracted from the packet */
        uint64_t ether_type            : 16; /**< [ 47: 32](R/W) First E-Type found in the packet that doesn't match one of the preconfigured VLAN values. */
        uint64_t outer_tag_id          : 16; /**< [ 63: 48](R/W) Outermost VLAN ID {8'd0, VLAN_ID[11:0]} */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_mcsx_cpm_tx_slave_flowid_tcam_data_1x_s cn; */
};
typedef union cavm_mcsx_cpm_tx_slave_flowid_tcam_data_1x cavm_mcsx_cpm_tx_slave_flowid_tcam_data_1x_t;

static inline uint64_t CAVM_MCSX_CPM_TX_SLAVE_FLOWID_TCAM_DATA_1X(uint64_t a, uint64_t b) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_MCSX_CPM_TX_SLAVE_FLOWID_TCAM_DATA_1X(uint64_t a, uint64_t b)
{
    if (cavm_is_model(OCTEONTX_CNF10KB) && ((a<=6) && (b<=63)))
        return 0x87e08000a7c8ll + 0x1000000ll * ((a) & 0x7) + 0x20ll * ((b) & 0x3f);
    __cavm_csr_fatal("MCSX_CPM_TX_SLAVE_FLOWID_TCAM_DATA_1X", 2, a, b, 0, 0, 0, 0);
}

#define typedef_CAVM_MCSX_CPM_TX_SLAVE_FLOWID_TCAM_DATA_1X(a,b) cavm_mcsx_cpm_tx_slave_flowid_tcam_data_1x_t
#define bustype_CAVM_MCSX_CPM_TX_SLAVE_FLOWID_TCAM_DATA_1X(a,b) CSR_TYPE_RSL
#define basename_CAVM_MCSX_CPM_TX_SLAVE_FLOWID_TCAM_DATA_1X(a,b) "MCSX_CPM_TX_SLAVE_FLOWID_TCAM_DATA_1X"
#define device_bar_CAVM_MCSX_CPM_TX_SLAVE_FLOWID_TCAM_DATA_1X(a,b) 0x0 /* PF_BAR0 */
#define busnum_CAVM_MCSX_CPM_TX_SLAVE_FLOWID_TCAM_DATA_1X(a,b) (a)
#define arguments_CAVM_MCSX_CPM_TX_SLAVE_FLOWID_TCAM_DATA_1X(a,b) (a),(b),-1,-1

/**
 * Register (RSL) mcs#_cpm_tx_slave_flowid_tcam_data_2#
 *
 * MCS Cpm Tx Slave Flowid Tcam Data 2 Register
 * Flow ID TCAM - 64x208: With standard MACsec, a Security Association can only be
 * associated with a port.  WAN based MACsec allows different flows on the same port to
 * support different SecYs and Security Associations (SA) greatly expanding upon its
 * usefulness.  The first step in the classification process involves performing a
 * lookup in the Flow-ID TCAM based on the information extracted by the Packet
 * Extractor block to determine the Flow-ID index.  All packets including control
 * packets trigger a lookup in this TCAM. Note that there is also 64 entries of per bit
 * masks (flowid_tcam_mask).  The lookup key consists of the following sub-fields.
 */
union cavm_mcsx_cpm_tx_slave_flowid_tcam_data_2x
{
    uint64_t u;
    struct cavm_mcsx_cpm_tx_slave_flowid_tcam_data_2x_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t inner_vlan_type       : 1;  /**< [ 63: 63](R/W) Encoded value indicating which VLAN TPID value matched for the second outermost VLAN Tag. */
        uint64_t outer_vlan_type       : 3;  /**< [ 62: 60](R/W) Encoded value indicating which VLAN TPID value matched for the outermost VLAN Tag. */
        uint64_t packet_type           : 4;  /**< [ 59: 56](R/W) Encoded Packet Type from the parser:
                                                                 0: No VLAN
                                                                 1: Single VLAN
                                                                 2: Two or more VLAN
                                                                 3-15: Reserved for future use */
        uint64_t tag_match_bitmap      : 8;  /**< [ 55: 48](R/W) Maps 1 to 1 with the set of configurable Etype CSRs and set when the associated
                                                                 E-Type (or TPID) was found in the packet. */
        uint64_t bonus_data            : 16; /**< [ 47: 32](R/W) Reserved.
                                                                 Internal:
                                                                 2 bytes of additional bonus data extracted from one of the custom tags. */
        uint64_t second_outer_priority : 4;  /**< [ 31: 28](R/W) 2nd Outermost VLAN {PCP/Pbits, DE/CFI} */
        uint64_t second_outer_tag_id   : 20; /**< [ 27:  8](R/W) 2nd Outermost VLAN ID {8'd0, VLAN_ID[11:0]} */
        uint64_t outer_priority        : 4;  /**< [  7:  4](R/W) Outermost VLAN {PCP/Pbits, DE/CFI} */
        uint64_t outer_tag_id          : 4;  /**< [  3:  0](R/W) Outermost VLAN ID {8'd0, VLAN_ID[11:0]} */
#else /* Word 0 - Little Endian */
        uint64_t outer_tag_id          : 4;  /**< [  3:  0](R/W) Outermost VLAN ID {8'd0, VLAN_ID[11:0]} */
        uint64_t outer_priority        : 4;  /**< [  7:  4](R/W) Outermost VLAN {PCP/Pbits, DE/CFI} */
        uint64_t second_outer_tag_id   : 20; /**< [ 27:  8](R/W) 2nd Outermost VLAN ID {8'd0, VLAN_ID[11:0]} */
        uint64_t second_outer_priority : 4;  /**< [ 31: 28](R/W) 2nd Outermost VLAN {PCP/Pbits, DE/CFI} */
        uint64_t bonus_data            : 16; /**< [ 47: 32](R/W) Reserved.
                                                                 Internal:
                                                                 2 bytes of additional bonus data extracted from one of the custom tags. */
        uint64_t tag_match_bitmap      : 8;  /**< [ 55: 48](R/W) Maps 1 to 1 with the set of configurable Etype CSRs and set when the associated
                                                                 E-Type (or TPID) was found in the packet. */
        uint64_t packet_type           : 4;  /**< [ 59: 56](R/W) Encoded Packet Type from the parser:
                                                                 0: No VLAN
                                                                 1: Single VLAN
                                                                 2: Two or more VLAN
                                                                 3-15: Reserved for future use */
        uint64_t outer_vlan_type       : 3;  /**< [ 62: 60](R/W) Encoded value indicating which VLAN TPID value matched for the outermost VLAN Tag. */
        uint64_t inner_vlan_type       : 1;  /**< [ 63: 63](R/W) Encoded value indicating which VLAN TPID value matched for the second outermost VLAN Tag. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_mcsx_cpm_tx_slave_flowid_tcam_data_2x_s cn; */
};
typedef union cavm_mcsx_cpm_tx_slave_flowid_tcam_data_2x cavm_mcsx_cpm_tx_slave_flowid_tcam_data_2x_t;

static inline uint64_t CAVM_MCSX_CPM_TX_SLAVE_FLOWID_TCAM_DATA_2X(uint64_t a, uint64_t b) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_MCSX_CPM_TX_SLAVE_FLOWID_TCAM_DATA_2X(uint64_t a, uint64_t b)
{
    if (cavm_is_model(OCTEONTX_CNF10KB) && ((a<=6) && (b<=63)))
        return 0x87e08000a7d0ll + 0x1000000ll * ((a) & 0x7) + 0x20ll * ((b) & 0x3f);
    __cavm_csr_fatal("MCSX_CPM_TX_SLAVE_FLOWID_TCAM_DATA_2X", 2, a, b, 0, 0, 0, 0);
}

#define typedef_CAVM_MCSX_CPM_TX_SLAVE_FLOWID_TCAM_DATA_2X(a,b) cavm_mcsx_cpm_tx_slave_flowid_tcam_data_2x_t
#define bustype_CAVM_MCSX_CPM_TX_SLAVE_FLOWID_TCAM_DATA_2X(a,b) CSR_TYPE_RSL
#define basename_CAVM_MCSX_CPM_TX_SLAVE_FLOWID_TCAM_DATA_2X(a,b) "MCSX_CPM_TX_SLAVE_FLOWID_TCAM_DATA_2X"
#define device_bar_CAVM_MCSX_CPM_TX_SLAVE_FLOWID_TCAM_DATA_2X(a,b) 0x0 /* PF_BAR0 */
#define busnum_CAVM_MCSX_CPM_TX_SLAVE_FLOWID_TCAM_DATA_2X(a,b) (a)
#define arguments_CAVM_MCSX_CPM_TX_SLAVE_FLOWID_TCAM_DATA_2X(a,b) (a),(b),-1,-1

/**
 * Register (RSL) mcs#_cpm_tx_slave_flowid_tcam_data_3#
 *
 * MCS Cpm Tx Slave Flowid Tcam Data 3 Register
 * Flow ID TCAM - 64x208: With standard MACsec, a Security Association can only be
 * associated with a port.  WAN based MACsec allows different flows on the same port to
 * support different SecYs and Security Associations (SA) greatly expanding upon its
 * usefulness.  The first step in the classification process involves performing a
 * lookup in the Flow-ID TCAM based on the information extracted by the Packet
 * Extractor block to determine the Flow-ID index.  All packets including control
 * packets trigger a lookup in this TCAM. Note that there is also 64 entries of per bit
 * masks (flowid_tcam_mask).  The lookup key consists of the following sub-fields.
 */
union cavm_mcsx_cpm_tx_slave_flowid_tcam_data_3x
{
    uint64_t u;
    struct cavm_mcsx_cpm_tx_slave_flowid_tcam_data_3x_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_16_63        : 48;
        uint64_t flowid_user_field     : 4;  /**< [ 15: 12](R/W) User-Defined Flow_ID */
        uint64_t port                  : 2;  /**< [ 11: 10](R/W) Port number, 0-3. */
        uint64_t express               : 1;  /**< [  9:  9](R/W) Reserved.
                                                                 Internal:
                                                                 Express packet. */
        uint64_t num_tags              : 7;  /**< [  8:  2](R/W) Number of VLAN tags before the SecTAG, excluding the Rx/Tx-MCS header tags.
                                                                 Bit 0: no tags before SecTAG
                                                                 Bit 1: 1 tag before SecTAG
                                                                 Bit 2: 2 tags before SecTAG
                                                                 Bit 3-6: Reserved */
        uint64_t inner_vlan_type       : 2;  /**< [  1:  0](R/W) Encoded value indicating which VLAN TPID value matched for the second outermost VLAN Tag. */
#else /* Word 0 - Little Endian */
        uint64_t inner_vlan_type       : 2;  /**< [  1:  0](R/W) Encoded value indicating which VLAN TPID value matched for the second outermost VLAN Tag. */
        uint64_t num_tags              : 7;  /**< [  8:  2](R/W) Number of VLAN tags before the SecTAG, excluding the Rx/Tx-MCS header tags.
                                                                 Bit 0: no tags before SecTAG
                                                                 Bit 1: 1 tag before SecTAG
                                                                 Bit 2: 2 tags before SecTAG
                                                                 Bit 3-6: Reserved */
        uint64_t express               : 1;  /**< [  9:  9](R/W) Reserved.
                                                                 Internal:
                                                                 Express packet. */
        uint64_t port                  : 2;  /**< [ 11: 10](R/W) Port number, 0-3. */
        uint64_t flowid_user_field     : 4;  /**< [ 15: 12](R/W) User-Defined Flow_ID */
        uint64_t reserved_16_63        : 48;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_mcsx_cpm_tx_slave_flowid_tcam_data_3x_s cn; */
};
typedef union cavm_mcsx_cpm_tx_slave_flowid_tcam_data_3x cavm_mcsx_cpm_tx_slave_flowid_tcam_data_3x_t;

static inline uint64_t CAVM_MCSX_CPM_TX_SLAVE_FLOWID_TCAM_DATA_3X(uint64_t a, uint64_t b) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_MCSX_CPM_TX_SLAVE_FLOWID_TCAM_DATA_3X(uint64_t a, uint64_t b)
{
    if (cavm_is_model(OCTEONTX_CNF10KB) && ((a<=6) && (b<=63)))
        return 0x87e08000a7d8ll + 0x1000000ll * ((a) & 0x7) + 0x20ll * ((b) & 0x3f);
    __cavm_csr_fatal("MCSX_CPM_TX_SLAVE_FLOWID_TCAM_DATA_3X", 2, a, b, 0, 0, 0, 0);
}

#define typedef_CAVM_MCSX_CPM_TX_SLAVE_FLOWID_TCAM_DATA_3X(a,b) cavm_mcsx_cpm_tx_slave_flowid_tcam_data_3x_t
#define bustype_CAVM_MCSX_CPM_TX_SLAVE_FLOWID_TCAM_DATA_3X(a,b) CSR_TYPE_RSL
#define basename_CAVM_MCSX_CPM_TX_SLAVE_FLOWID_TCAM_DATA_3X(a,b) "MCSX_CPM_TX_SLAVE_FLOWID_TCAM_DATA_3X"
#define device_bar_CAVM_MCSX_CPM_TX_SLAVE_FLOWID_TCAM_DATA_3X(a,b) 0x0 /* PF_BAR0 */
#define busnum_CAVM_MCSX_CPM_TX_SLAVE_FLOWID_TCAM_DATA_3X(a,b) (a)
#define arguments_CAVM_MCSX_CPM_TX_SLAVE_FLOWID_TCAM_DATA_3X(a,b) (a),(b),-1,-1

/**
 * Register (RSL) mcs#_cpm_tx_slave_flowid_tcam_mask_0#
 *
 * MCS Cpm Tx Slave Flowid Tcam Mask 0 Register
 * Flow ID TCAM_MASK - 64x208 : Set mask bit to 1 to mask/exclude corresponding
 * flowid_tcam_data bit from compare.  ie. that bit will result in a match.
 */
union cavm_mcsx_cpm_tx_slave_flowid_tcam_mask_0x
{
    uint64_t u;
    struct cavm_mcsx_cpm_tx_slave_flowid_tcam_mask_0x_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t mask_mac_sa           : 16; /**< [ 63: 48](R/W) Set bits to 1 to mask/exclude corresponding flowid_tcam_data bit from compare. */
        uint64_t mask_mac_da           : 48; /**< [ 47:  0](R/W) Set bits to 1 to mask/exclude corresponding flowid_tcam_data bit from compare. */
#else /* Word 0 - Little Endian */
        uint64_t mask_mac_da           : 48; /**< [ 47:  0](R/W) Set bits to 1 to mask/exclude corresponding flowid_tcam_data bit from compare. */
        uint64_t mask_mac_sa           : 16; /**< [ 63: 48](R/W) Set bits to 1 to mask/exclude corresponding flowid_tcam_data bit from compare. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_mcsx_cpm_tx_slave_flowid_tcam_mask_0x_s cn; */
};
typedef union cavm_mcsx_cpm_tx_slave_flowid_tcam_mask_0x cavm_mcsx_cpm_tx_slave_flowid_tcam_mask_0x_t;

static inline uint64_t CAVM_MCSX_CPM_TX_SLAVE_FLOWID_TCAM_MASK_0X(uint64_t a, uint64_t b) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_MCSX_CPM_TX_SLAVE_FLOWID_TCAM_MASK_0X(uint64_t a, uint64_t b)
{
    if (cavm_is_model(OCTEONTX_CNF10KB) && ((a<=6) && (b<=63)))
        return 0x87e08000afc0ll + 0x1000000ll * ((a) & 0x7) + 0x20ll * ((b) & 0x3f);
    __cavm_csr_fatal("MCSX_CPM_TX_SLAVE_FLOWID_TCAM_MASK_0X", 2, a, b, 0, 0, 0, 0);
}

#define typedef_CAVM_MCSX_CPM_TX_SLAVE_FLOWID_TCAM_MASK_0X(a,b) cavm_mcsx_cpm_tx_slave_flowid_tcam_mask_0x_t
#define bustype_CAVM_MCSX_CPM_TX_SLAVE_FLOWID_TCAM_MASK_0X(a,b) CSR_TYPE_RSL
#define basename_CAVM_MCSX_CPM_TX_SLAVE_FLOWID_TCAM_MASK_0X(a,b) "MCSX_CPM_TX_SLAVE_FLOWID_TCAM_MASK_0X"
#define device_bar_CAVM_MCSX_CPM_TX_SLAVE_FLOWID_TCAM_MASK_0X(a,b) 0x0 /* PF_BAR0 */
#define busnum_CAVM_MCSX_CPM_TX_SLAVE_FLOWID_TCAM_MASK_0X(a,b) (a)
#define arguments_CAVM_MCSX_CPM_TX_SLAVE_FLOWID_TCAM_MASK_0X(a,b) (a),(b),-1,-1

/**
 * Register (RSL) mcs#_cpm_tx_slave_flowid_tcam_mask_1#
 *
 * MCS Cpm Tx Slave Flowid Tcam Mask 1 Register
 * Flow ID TCAM_MASK - 64x208 : Set mask bit to 1 to mask/exclude corresponding
 * flowid_tcam_data bit from compare.  ie. that bit will result in a match.
 */
union cavm_mcsx_cpm_tx_slave_flowid_tcam_mask_1x
{
    uint64_t u;
    struct cavm_mcsx_cpm_tx_slave_flowid_tcam_mask_1x_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t mask_outer_tag_id     : 16; /**< [ 63: 48](R/W) Set bits to 1 to mask/exclude corresponding flowid_tcam_data bit from compare. */
        uint64_t mask_ether_type       : 16; /**< [ 47: 32](R/W) Set bits to 1 to mask/exclude corresponding flowid_tcam_data bit from compare. */
        uint64_t mask_mac_sa           : 32; /**< [ 31:  0](R/W) Set bits to 1 to mask/exclude corresponding flowid_tcam_data bit from compare. */
#else /* Word 0 - Little Endian */
        uint64_t mask_mac_sa           : 32; /**< [ 31:  0](R/W) Set bits to 1 to mask/exclude corresponding flowid_tcam_data bit from compare. */
        uint64_t mask_ether_type       : 16; /**< [ 47: 32](R/W) Set bits to 1 to mask/exclude corresponding flowid_tcam_data bit from compare. */
        uint64_t mask_outer_tag_id     : 16; /**< [ 63: 48](R/W) Set bits to 1 to mask/exclude corresponding flowid_tcam_data bit from compare. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_mcsx_cpm_tx_slave_flowid_tcam_mask_1x_s cn; */
};
typedef union cavm_mcsx_cpm_tx_slave_flowid_tcam_mask_1x cavm_mcsx_cpm_tx_slave_flowid_tcam_mask_1x_t;

static inline uint64_t CAVM_MCSX_CPM_TX_SLAVE_FLOWID_TCAM_MASK_1X(uint64_t a, uint64_t b) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_MCSX_CPM_TX_SLAVE_FLOWID_TCAM_MASK_1X(uint64_t a, uint64_t b)
{
    if (cavm_is_model(OCTEONTX_CNF10KB) && ((a<=6) && (b<=63)))
        return 0x87e08000afc8ll + 0x1000000ll * ((a) & 0x7) + 0x20ll * ((b) & 0x3f);
    __cavm_csr_fatal("MCSX_CPM_TX_SLAVE_FLOWID_TCAM_MASK_1X", 2, a, b, 0, 0, 0, 0);
}

#define typedef_CAVM_MCSX_CPM_TX_SLAVE_FLOWID_TCAM_MASK_1X(a,b) cavm_mcsx_cpm_tx_slave_flowid_tcam_mask_1x_t
#define bustype_CAVM_MCSX_CPM_TX_SLAVE_FLOWID_TCAM_MASK_1X(a,b) CSR_TYPE_RSL
#define basename_CAVM_MCSX_CPM_TX_SLAVE_FLOWID_TCAM_MASK_1X(a,b) "MCSX_CPM_TX_SLAVE_FLOWID_TCAM_MASK_1X"
#define device_bar_CAVM_MCSX_CPM_TX_SLAVE_FLOWID_TCAM_MASK_1X(a,b) 0x0 /* PF_BAR0 */
#define busnum_CAVM_MCSX_CPM_TX_SLAVE_FLOWID_TCAM_MASK_1X(a,b) (a)
#define arguments_CAVM_MCSX_CPM_TX_SLAVE_FLOWID_TCAM_MASK_1X(a,b) (a),(b),-1,-1

/**
 * Register (RSL) mcs#_cpm_tx_slave_flowid_tcam_mask_2#
 *
 * MCS Cpm Tx Slave Flowid Tcam Mask 2 Register
 * Flow ID TCAM_MASK - 64x208 : Set mask bit to 1 to mask/exclude corresponding
 * flowid_tcam_data bit from compare.  ie. that bit will result in a match.
 */
union cavm_mcsx_cpm_tx_slave_flowid_tcam_mask_2x
{
    uint64_t u;
    struct cavm_mcsx_cpm_tx_slave_flowid_tcam_mask_2x_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t mask_inner_vlan_type  : 1;  /**< [ 63: 63](R/W) Set bits to 1 to mask/exclude corresponding flowid_tcam_data bit from compare. */
        uint64_t mask_outer_vlan_type  : 3;  /**< [ 62: 60](R/W) Set bits to 1 to mask/exclude corresponding flowid_tcam_data bit from compare. */
        uint64_t mask_packet_type      : 4;  /**< [ 59: 56](R/W) Set bits to 1 to mask/exclude corresponding flowid_tcam_data bit from compare. */
        uint64_t mask_tag_match_bitmap : 8;  /**< [ 55: 48](R/W) Set bits to 1 to mask/exclude corresponding flowid_tcam_data bit from compare. */
        uint64_t mask_bonus_data       : 16; /**< [ 47: 32](R/W) Reserved.
                                                                 Internal:
                                                                 Set bits to 1 to mask/exclude corresponding flowid_tcam_data bit from compare. */
        uint64_t mask_second_outer_priority : 4;/**< [ 31: 28](R/W) Set bits to 1 to mask/exclude corresponding flowid_tcam_data bit from compare. */
        uint64_t mask_second_outer_tag_id : 20;/**< [ 27:  8](R/W) Set bits to 1 to mask/exclude corresponding flowid_tcam_data bit from compare. */
        uint64_t mask_outer_priority   : 4;  /**< [  7:  4](R/W) Set bits to 1 to mask/exclude corresponding flowid_tcam_data bit from compare. */
        uint64_t mask_outer_tag_id     : 4;  /**< [  3:  0](R/W) Set bits to 1 to mask/exclude corresponding flowid_tcam_data bit from compare. */
#else /* Word 0 - Little Endian */
        uint64_t mask_outer_tag_id     : 4;  /**< [  3:  0](R/W) Set bits to 1 to mask/exclude corresponding flowid_tcam_data bit from compare. */
        uint64_t mask_outer_priority   : 4;  /**< [  7:  4](R/W) Set bits to 1 to mask/exclude corresponding flowid_tcam_data bit from compare. */
        uint64_t mask_second_outer_tag_id : 20;/**< [ 27:  8](R/W) Set bits to 1 to mask/exclude corresponding flowid_tcam_data bit from compare. */
        uint64_t mask_second_outer_priority : 4;/**< [ 31: 28](R/W) Set bits to 1 to mask/exclude corresponding flowid_tcam_data bit from compare. */
        uint64_t mask_bonus_data       : 16; /**< [ 47: 32](R/W) Reserved.
                                                                 Internal:
                                                                 Set bits to 1 to mask/exclude corresponding flowid_tcam_data bit from compare. */
        uint64_t mask_tag_match_bitmap : 8;  /**< [ 55: 48](R/W) Set bits to 1 to mask/exclude corresponding flowid_tcam_data bit from compare. */
        uint64_t mask_packet_type      : 4;  /**< [ 59: 56](R/W) Set bits to 1 to mask/exclude corresponding flowid_tcam_data bit from compare. */
        uint64_t mask_outer_vlan_type  : 3;  /**< [ 62: 60](R/W) Set bits to 1 to mask/exclude corresponding flowid_tcam_data bit from compare. */
        uint64_t mask_inner_vlan_type  : 1;  /**< [ 63: 63](R/W) Set bits to 1 to mask/exclude corresponding flowid_tcam_data bit from compare. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_mcsx_cpm_tx_slave_flowid_tcam_mask_2x_s cn; */
};
typedef union cavm_mcsx_cpm_tx_slave_flowid_tcam_mask_2x cavm_mcsx_cpm_tx_slave_flowid_tcam_mask_2x_t;

static inline uint64_t CAVM_MCSX_CPM_TX_SLAVE_FLOWID_TCAM_MASK_2X(uint64_t a, uint64_t b) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_MCSX_CPM_TX_SLAVE_FLOWID_TCAM_MASK_2X(uint64_t a, uint64_t b)
{
    if (cavm_is_model(OCTEONTX_CNF10KB) && ((a<=6) && (b<=63)))
        return 0x87e08000afd0ll + 0x1000000ll * ((a) & 0x7) + 0x20ll * ((b) & 0x3f);
    __cavm_csr_fatal("MCSX_CPM_TX_SLAVE_FLOWID_TCAM_MASK_2X", 2, a, b, 0, 0, 0, 0);
}

#define typedef_CAVM_MCSX_CPM_TX_SLAVE_FLOWID_TCAM_MASK_2X(a,b) cavm_mcsx_cpm_tx_slave_flowid_tcam_mask_2x_t
#define bustype_CAVM_MCSX_CPM_TX_SLAVE_FLOWID_TCAM_MASK_2X(a,b) CSR_TYPE_RSL
#define basename_CAVM_MCSX_CPM_TX_SLAVE_FLOWID_TCAM_MASK_2X(a,b) "MCSX_CPM_TX_SLAVE_FLOWID_TCAM_MASK_2X"
#define device_bar_CAVM_MCSX_CPM_TX_SLAVE_FLOWID_TCAM_MASK_2X(a,b) 0x0 /* PF_BAR0 */
#define busnum_CAVM_MCSX_CPM_TX_SLAVE_FLOWID_TCAM_MASK_2X(a,b) (a)
#define arguments_CAVM_MCSX_CPM_TX_SLAVE_FLOWID_TCAM_MASK_2X(a,b) (a),(b),-1,-1

/**
 * Register (RSL) mcs#_cpm_tx_slave_flowid_tcam_mask_3#
 *
 * MCS Cpm Tx Slave Flowid Tcam Mask 3 Register
 * Flow ID TCAM_MASK - 64x208 : Set mask bit to 1 to mask/exclude corresponding
 * flowid_tcam_data bit from compare.  ie. that bit will result in a match.
 */
union cavm_mcsx_cpm_tx_slave_flowid_tcam_mask_3x
{
    uint64_t u;
    struct cavm_mcsx_cpm_tx_slave_flowid_tcam_mask_3x_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_16_63        : 48;
        uint64_t mask_flowid_user_field : 4; /**< [ 15: 12](R/W) Set bits to 1 to mask/exclude corresponding flowid_tcam_data bit from compare. */
        uint64_t mask_port             : 2;  /**< [ 11: 10](R/W) Set bits to 1 to mask/exclude corresponding flowid_tcam_data bit from compare. */
        uint64_t mask_express          : 1;  /**< [  9:  9](R/W) Reserved.
                                                                 Internal:
                                                                 Set bits to 1 to mask/exclude corresponding flowid_tcam_data bit from compare. */
        uint64_t mask_num_tags         : 7;  /**< [  8:  2](R/W) Set bits to 1 to mask/exclude corresponding flowid_tcam_data bit from compare. */
        uint64_t mask_inner_vlan_type  : 2;  /**< [  1:  0](R/W) Set bits to 1 to mask/exclude corresponding flowid_tcam_data bit from compare. */
#else /* Word 0 - Little Endian */
        uint64_t mask_inner_vlan_type  : 2;  /**< [  1:  0](R/W) Set bits to 1 to mask/exclude corresponding flowid_tcam_data bit from compare. */
        uint64_t mask_num_tags         : 7;  /**< [  8:  2](R/W) Set bits to 1 to mask/exclude corresponding flowid_tcam_data bit from compare. */
        uint64_t mask_express          : 1;  /**< [  9:  9](R/W) Reserved.
                                                                 Internal:
                                                                 Set bits to 1 to mask/exclude corresponding flowid_tcam_data bit from compare. */
        uint64_t mask_port             : 2;  /**< [ 11: 10](R/W) Set bits to 1 to mask/exclude corresponding flowid_tcam_data bit from compare. */
        uint64_t mask_flowid_user_field : 4; /**< [ 15: 12](R/W) Set bits to 1 to mask/exclude corresponding flowid_tcam_data bit from compare. */
        uint64_t reserved_16_63        : 48;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_mcsx_cpm_tx_slave_flowid_tcam_mask_3x_s cn; */
};
typedef union cavm_mcsx_cpm_tx_slave_flowid_tcam_mask_3x cavm_mcsx_cpm_tx_slave_flowid_tcam_mask_3x_t;

static inline uint64_t CAVM_MCSX_CPM_TX_SLAVE_FLOWID_TCAM_MASK_3X(uint64_t a, uint64_t b) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_MCSX_CPM_TX_SLAVE_FLOWID_TCAM_MASK_3X(uint64_t a, uint64_t b)
{
    if (cavm_is_model(OCTEONTX_CNF10KB) && ((a<=6) && (b<=63)))
        return 0x87e08000afd8ll + 0x1000000ll * ((a) & 0x7) + 0x20ll * ((b) & 0x3f);
    __cavm_csr_fatal("MCSX_CPM_TX_SLAVE_FLOWID_TCAM_MASK_3X", 2, a, b, 0, 0, 0, 0);
}

#define typedef_CAVM_MCSX_CPM_TX_SLAVE_FLOWID_TCAM_MASK_3X(a,b) cavm_mcsx_cpm_tx_slave_flowid_tcam_mask_3x_t
#define bustype_CAVM_MCSX_CPM_TX_SLAVE_FLOWID_TCAM_MASK_3X(a,b) CSR_TYPE_RSL
#define basename_CAVM_MCSX_CPM_TX_SLAVE_FLOWID_TCAM_MASK_3X(a,b) "MCSX_CPM_TX_SLAVE_FLOWID_TCAM_MASK_3X"
#define device_bar_CAVM_MCSX_CPM_TX_SLAVE_FLOWID_TCAM_MASK_3X(a,b) 0x0 /* PF_BAR0 */
#define busnum_CAVM_MCSX_CPM_TX_SLAVE_FLOWID_TCAM_MASK_3X(a,b) (a)
#define arguments_CAVM_MCSX_CPM_TX_SLAVE_FLOWID_TCAM_MASK_3X(a,b) (a),(b),-1,-1

/**
 * Register (RSL) mcs#_cpm_tx_slave_pn_threshold
 *
 * MCS Cpm Tx Slave Pn Threshold Register
 * PN Mode Threshold: 32b PN threshold to trigger interrupt if enabled.  The interrupt
 * fires when the transmitted packet's 32b PN greater than= {pn_threshold}.
 */
union cavm_mcsx_cpm_tx_slave_pn_threshold
{
    uint64_t u;
    struct cavm_mcsx_cpm_tx_slave_pn_threshold_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_32_63        : 32;
        uint64_t pn_threshold          : 32; /**< [ 31:  0](R/W) 32b pn_threshold. */
#else /* Word 0 - Little Endian */
        uint64_t pn_threshold          : 32; /**< [ 31:  0](R/W) 32b pn_threshold. */
        uint64_t reserved_32_63        : 32;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_mcsx_cpm_tx_slave_pn_threshold_s cn; */
};
typedef union cavm_mcsx_cpm_tx_slave_pn_threshold cavm_mcsx_cpm_tx_slave_pn_threshold_t;

static inline uint64_t CAVM_MCSX_CPM_TX_SLAVE_PN_THRESHOLD(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_MCSX_CPM_TX_SLAVE_PN_THRESHOLD(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CNF10KB) && (a<=6))
        return 0x87e080005530ll + 0x1000000ll * ((a) & 0x7);
    __cavm_csr_fatal("MCSX_CPM_TX_SLAVE_PN_THRESHOLD", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_MCSX_CPM_TX_SLAVE_PN_THRESHOLD(a) cavm_mcsx_cpm_tx_slave_pn_threshold_t
#define bustype_CAVM_MCSX_CPM_TX_SLAVE_PN_THRESHOLD(a) CSR_TYPE_RSL
#define basename_CAVM_MCSX_CPM_TX_SLAVE_PN_THRESHOLD(a) "MCSX_CPM_TX_SLAVE_PN_THRESHOLD"
#define device_bar_CAVM_MCSX_CPM_TX_SLAVE_PN_THRESHOLD(a) 0x0 /* PF_BAR0 */
#define busnum_CAVM_MCSX_CPM_TX_SLAVE_PN_THRESHOLD(a) (a)
#define arguments_CAVM_MCSX_CPM_TX_SLAVE_PN_THRESHOLD(a) (a),-1,-1,-1

/**
 * Register (RSL) mcs#_cpm_tx_slave_reserved_0_rsvd
 *
 * INTERNAL: MCS Cpm Tx Slave Reserved 0 Register
 *
 * Reserved.
 */
union cavm_mcsx_cpm_tx_slave_reserved_0_rsvd
{
    uint64_t u;
    struct cavm_mcsx_cpm_tx_slave_reserved_0_rsvd_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_0_63         : 64;
#else /* Word 0 - Little Endian */
        uint64_t reserved_0_63         : 64;
#endif /* Word 0 - End */
    } s;
    struct cavm_mcsx_cpm_tx_slave_reserved_0_rsvd_cn
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_5_63         : 59;
        uint64_t reserved_0_4          : 5;
#else /* Word 0 - Little Endian */
        uint64_t reserved_0_4          : 5;
        uint64_t reserved_5_63         : 59;
#endif /* Word 0 - End */
    } cn;
};
typedef union cavm_mcsx_cpm_tx_slave_reserved_0_rsvd cavm_mcsx_cpm_tx_slave_reserved_0_rsvd_t;

static inline uint64_t CAVM_MCSX_CPM_TX_SLAVE_RESERVED_0_RSVD(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_MCSX_CPM_TX_SLAVE_RESERVED_0_RSVD(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CNF10KB) && (a<=6))
        return 0x87e080005548ll + 0x1000000ll * ((a) & 0x7);
    __cavm_csr_fatal("MCSX_CPM_TX_SLAVE_RESERVED_0_RSVD", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_MCSX_CPM_TX_SLAVE_RESERVED_0_RSVD(a) cavm_mcsx_cpm_tx_slave_reserved_0_rsvd_t
#define bustype_CAVM_MCSX_CPM_TX_SLAVE_RESERVED_0_RSVD(a) CSR_TYPE_RSL
#define basename_CAVM_MCSX_CPM_TX_SLAVE_RESERVED_0_RSVD(a) "MCSX_CPM_TX_SLAVE_RESERVED_0_RSVD"
#define device_bar_CAVM_MCSX_CPM_TX_SLAVE_RESERVED_0_RSVD(a) 0x0 /* PF_BAR0 */
#define busnum_CAVM_MCSX_CPM_TX_SLAVE_RESERVED_0_RSVD(a) (a)
#define arguments_CAVM_MCSX_CPM_TX_SLAVE_RESERVED_0_RSVD(a) (a),-1,-1,-1

/**
 * Register (RSL) mcs#_cpm_tx_slave_sa_index0_vld#
 *
 * MCS Cpm Tx Slave Sa Index0 Vld Register
 * Per SC, SA index0 valid.  The  valid in this register qualifies the corresponding
 * SC's SA index0 in each SA MAP memory entry.  Although these bits can only be set by
 * SW, each valid bit can be automatically cleared by HW when either 1) auto-rekey is
 * enabled and the PN threshold for the SA index has been reached, meaning that current
 * SA index0 is no longer valid or 2) when the PN rolls over to all-zeroes or 3) the
 * SC/SA timer was enabled and has expired.  Note that these registers are programmed
 * per SC just like the TX SA MAP memory.
 */
union cavm_mcsx_cpm_tx_slave_sa_index0_vldx
{
    uint64_t u;
    struct cavm_mcsx_cpm_tx_slave_sa_index0_vldx_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_1_63         : 63;
        uint64_t sa_index0_vld         : 1;  /**< [  0:  0](R/W) When set, indicates that the corresponding SC's SA index0 (SA MAP memory) is valid. */
#else /* Word 0 - Little Endian */
        uint64_t sa_index0_vld         : 1;  /**< [  0:  0](R/W) When set, indicates that the corresponding SC's SA index0 (SA MAP memory) is valid. */
        uint64_t reserved_1_63         : 63;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_mcsx_cpm_tx_slave_sa_index0_vldx_s cn; */
};
typedef union cavm_mcsx_cpm_tx_slave_sa_index0_vldx cavm_mcsx_cpm_tx_slave_sa_index0_vldx_t;

static inline uint64_t CAVM_MCSX_CPM_TX_SLAVE_SA_INDEX0_VLDX(uint64_t a, uint64_t b) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_MCSX_CPM_TX_SLAVE_SA_INDEX0_VLDX(uint64_t a, uint64_t b)
{
    if (cavm_is_model(OCTEONTX_CNF10KB) && ((a<=6) && (b<=63)))
        return 0x87e080005d50ll + 0x1000000ll * ((a) & 0x7) + 8ll * ((b) & 0x3f);
    __cavm_csr_fatal("MCSX_CPM_TX_SLAVE_SA_INDEX0_VLDX", 2, a, b, 0, 0, 0, 0);
}

#define typedef_CAVM_MCSX_CPM_TX_SLAVE_SA_INDEX0_VLDX(a,b) cavm_mcsx_cpm_tx_slave_sa_index0_vldx_t
#define bustype_CAVM_MCSX_CPM_TX_SLAVE_SA_INDEX0_VLDX(a,b) CSR_TYPE_RSL
#define basename_CAVM_MCSX_CPM_TX_SLAVE_SA_INDEX0_VLDX(a,b) "MCSX_CPM_TX_SLAVE_SA_INDEX0_VLDX"
#define device_bar_CAVM_MCSX_CPM_TX_SLAVE_SA_INDEX0_VLDX(a,b) 0x0 /* PF_BAR0 */
#define busnum_CAVM_MCSX_CPM_TX_SLAVE_SA_INDEX0_VLDX(a,b) (a)
#define arguments_CAVM_MCSX_CPM_TX_SLAVE_SA_INDEX0_VLDX(a,b) (a),(b),-1,-1

/**
 * Register (RSL) mcs#_cpm_tx_slave_sa_index1_vld#
 *
 * MCS Cpm Tx Slave Sa Index1 Vld Register
 * Per SC, SA index1 valid.  The  valid in this register qualify the corresponding SC's
 * SA index1 in each SA MAP memory entry.  Although these bits can only be set by SW,
 * each valid bit can be automatically cleared by HW when either 1) auto-rekey is
 * enabled and the PN threshold for the SA index has been reached, meaning that current
 * SA index1 is no longer valid or 2) when the PN rolls over to all-zeroes or 3) the
 * SC/SA timer was enabled and has expired.  Note that these registers are programmed
 * per SC just like the TX SA MAP memory.
 */
union cavm_mcsx_cpm_tx_slave_sa_index1_vldx
{
    uint64_t u;
    struct cavm_mcsx_cpm_tx_slave_sa_index1_vldx_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_1_63         : 63;
        uint64_t sa_index1_vld         : 1;  /**< [  0:  0](R/W) When set, indicates that the corresponding SC's SA index1 (SA MAP memory) is valid. */
#else /* Word 0 - Little Endian */
        uint64_t sa_index1_vld         : 1;  /**< [  0:  0](R/W) When set, indicates that the corresponding SC's SA index1 (SA MAP memory) is valid. */
        uint64_t reserved_1_63         : 63;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_mcsx_cpm_tx_slave_sa_index1_vldx_s cn; */
};
typedef union cavm_mcsx_cpm_tx_slave_sa_index1_vldx cavm_mcsx_cpm_tx_slave_sa_index1_vldx_t;

static inline uint64_t CAVM_MCSX_CPM_TX_SLAVE_SA_INDEX1_VLDX(uint64_t a, uint64_t b) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_MCSX_CPM_TX_SLAVE_SA_INDEX1_VLDX(uint64_t a, uint64_t b)
{
    if (cavm_is_model(OCTEONTX_CNF10KB) && ((a<=6) && (b<=63)))
        return 0x87e080005f50ll + 0x1000000ll * ((a) & 0x7) + 8ll * ((b) & 0x3f);
    __cavm_csr_fatal("MCSX_CPM_TX_SLAVE_SA_INDEX1_VLDX", 2, a, b, 0, 0, 0, 0);
}

#define typedef_CAVM_MCSX_CPM_TX_SLAVE_SA_INDEX1_VLDX(a,b) cavm_mcsx_cpm_tx_slave_sa_index1_vldx_t
#define bustype_CAVM_MCSX_CPM_TX_SLAVE_SA_INDEX1_VLDX(a,b) CSR_TYPE_RSL
#define basename_CAVM_MCSX_CPM_TX_SLAVE_SA_INDEX1_VLDX(a,b) "MCSX_CPM_TX_SLAVE_SA_INDEX1_VLDX"
#define device_bar_CAVM_MCSX_CPM_TX_SLAVE_SA_INDEX1_VLDX(a,b) 0x0 /* PF_BAR0 */
#define busnum_CAVM_MCSX_CPM_TX_SLAVE_SA_INDEX1_VLDX(a,b) (a)
#define arguments_CAVM_MCSX_CPM_TX_SLAVE_SA_INDEX1_VLDX(a,b) (a),(b),-1,-1

/**
 * Register (RSL) mcs#_cpm_tx_slave_sa_key_lockout#
 *
 * MCS Cpm Tx Slave Sa Key Lockout Register
 * SAK/HashKey Lockout: When set, makes the corresponding SA Policy memory entry's
 * SAK/HashKey values unreadable by SW.  A SW read to that SAK/HashKey entry will
 * return 0s.  Only after the SAK/HashKey is written while this corresponding bit is
 * low, will the entry's SAK/HashKey slices(64b) that were written, become readable for
 * as long as the corresponding lockout bit remains low.  For example, SW writting
 * entry 5's sak[63:0] while entry 5's lockout bit is low, makes entry 5's sak[63:0]
 * readable, however reads to hashkey[127:0] and sak[255:64] of entry 5 will still
 * return 0s until those respective 64b slices are written to by SW while the lockout
 * bit is low.  This ensures that the SAK/HashKey in its entirety remain confidential
 * once the lockout bit is set.  As soon as the lockout bit goes high for an entry, all
 * slices of the SAK/HashKey will return 0s on SW read.  Note that unlocking one entry
 * has no impact on any other entry.
 */
union cavm_mcsx_cpm_tx_slave_sa_key_lockoutx
{
    uint64_t u;
    struct cavm_mcsx_cpm_tx_slave_sa_key_lockoutx_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t sa                    : 64; /**< [ 63:  0](R/W) SAK/HashKey Lockout: When set, makes the corresponding SA Policy memory entry's
                                                                 SAK/HashKey values unreadable by SW.  A SW read to that SAK/HashKey entry will
                                                                 return 0s.  Only after the SAK/HashKey is written while this corresponding bit
                                                                 is low, will the entry's SAK/HashKey slices(64b) that were written, become
                                                                 readable for as long as the corresponding lockout bit remains low.  For example,
                                                                 SW writting entry 5's sak[63:0] while entry 5's lockout bit is low, makes entry
                                                                 5's sak[63:0] readable, however reads to hashkey[127:0] and sak[255:64] of entry
                                                                 5 will still return 0s until those respective 64b slices are written to by SW
                                                                 while the lockout bit is low.  This ensures that the SAK/HashKey in its entirety
                                                                 remain confidential once the lockout bit is set.  As soon as the lockout bit
                                                                 goes high for an entry, all slices of the SAK/HashKey will return 0s on SW read.
                                                                 Note that unlocking one entry has no impact on any other entry. */
#else /* Word 0 - Little Endian */
        uint64_t sa                    : 64; /**< [ 63:  0](R/W) SAK/HashKey Lockout: When set, makes the corresponding SA Policy memory entry's
                                                                 SAK/HashKey values unreadable by SW.  A SW read to that SAK/HashKey entry will
                                                                 return 0s.  Only after the SAK/HashKey is written while this corresponding bit
                                                                 is low, will the entry's SAK/HashKey slices(64b) that were written, become
                                                                 readable for as long as the corresponding lockout bit remains low.  For example,
                                                                 SW writting entry 5's sak[63:0] while entry 5's lockout bit is low, makes entry
                                                                 5's sak[63:0] readable, however reads to hashkey[127:0] and sak[255:64] of entry
                                                                 5 will still return 0s until those respective 64b slices are written to by SW
                                                                 while the lockout bit is low.  This ensures that the SAK/HashKey in its entirety
                                                                 remain confidential once the lockout bit is set.  As soon as the lockout bit
                                                                 goes high for an entry, all slices of the SAK/HashKey will return 0s on SW read.
                                                                 Note that unlocking one entry has no impact on any other entry. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_mcsx_cpm_tx_slave_sa_key_lockoutx_s cn; */
};
typedef union cavm_mcsx_cpm_tx_slave_sa_key_lockoutx cavm_mcsx_cpm_tx_slave_sa_key_lockoutx_t;

static inline uint64_t CAVM_MCSX_CPM_TX_SLAVE_SA_KEY_LOCKOUTX(uint64_t a, uint64_t b) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_MCSX_CPM_TX_SLAVE_SA_KEY_LOCKOUTX(uint64_t a, uint64_t b)
{
    if (cavm_is_model(OCTEONTX_CNF10KB) && ((a<=6) && (b<=1)))
        return 0x87e080005538ll + 0x1000000ll * ((a) & 0x7) + 8ll * ((b) & 0x1);
    __cavm_csr_fatal("MCSX_CPM_TX_SLAVE_SA_KEY_LOCKOUTX", 2, a, b, 0, 0, 0, 0);
}

#define typedef_CAVM_MCSX_CPM_TX_SLAVE_SA_KEY_LOCKOUTX(a,b) cavm_mcsx_cpm_tx_slave_sa_key_lockoutx_t
#define bustype_CAVM_MCSX_CPM_TX_SLAVE_SA_KEY_LOCKOUTX(a,b) CSR_TYPE_RSL
#define basename_CAVM_MCSX_CPM_TX_SLAVE_SA_KEY_LOCKOUTX(a,b) "MCSX_CPM_TX_SLAVE_SA_KEY_LOCKOUTX"
#define device_bar_CAVM_MCSX_CPM_TX_SLAVE_SA_KEY_LOCKOUTX(a,b) 0x0 /* PF_BAR0 */
#define busnum_CAVM_MCSX_CPM_TX_SLAVE_SA_KEY_LOCKOUTX(a,b) (a)
#define arguments_CAVM_MCSX_CPM_TX_SLAVE_SA_KEY_LOCKOUTX(a,b) (a),(b),-1,-1

/**
 * Register (RSL) mcs#_cpm_tx_slave_sa_map_mem#
 *
 * MCS Cpm Tx Slave Sa Map Mem Register
 * SA MAP Memory - 64x14 : The SC index is used to address this memory to obtain 2
 * possible SA indices to use.  The one to use is determined by tx_sa_active[SC].
 * Associated with each sa_index0 and sa_index1 is a corresponding sa_index0_vld
 * (registers) and sa_index1_vld (registers).
 */
union cavm_mcsx_cpm_tx_slave_sa_map_memx
{
    uint64_t u;
    struct cavm_mcsx_cpm_tx_slave_sa_map_memx_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_14_63        : 50;
        uint64_t sa_index1             : 7;  /**< [ 13:  7](R/W) SA index1 to use for this packet */
        uint64_t sa_index0             : 7;  /**< [  6:  0](R/W) SA index0 to use for this packet */
#else /* Word 0 - Little Endian */
        uint64_t sa_index0             : 7;  /**< [  6:  0](R/W) SA index0 to use for this packet */
        uint64_t sa_index1             : 7;  /**< [ 13:  7](R/W) SA index1 to use for this packet */
        uint64_t reserved_14_63        : 50;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_mcsx_cpm_tx_slave_sa_map_memx_s cn; */
};
typedef union cavm_mcsx_cpm_tx_slave_sa_map_memx cavm_mcsx_cpm_tx_slave_sa_map_memx_t;

static inline uint64_t CAVM_MCSX_CPM_TX_SLAVE_SA_MAP_MEMX(uint64_t a, uint64_t b) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_MCSX_CPM_TX_SLAVE_SA_MAP_MEMX(uint64_t a, uint64_t b)
{
    if (cavm_is_model(OCTEONTX_CNF10KB) && ((a<=6) && (b<=63)))
        return 0x87e080006150ll + 0x1000000ll * ((a) & 0x7) + 8ll * ((b) & 0x3f);
    __cavm_csr_fatal("MCSX_CPM_TX_SLAVE_SA_MAP_MEMX", 2, a, b, 0, 0, 0, 0);
}

#define typedef_CAVM_MCSX_CPM_TX_SLAVE_SA_MAP_MEMX(a,b) cavm_mcsx_cpm_tx_slave_sa_map_memx_t
#define bustype_CAVM_MCSX_CPM_TX_SLAVE_SA_MAP_MEMX(a,b) CSR_TYPE_RSL
#define basename_CAVM_MCSX_CPM_TX_SLAVE_SA_MAP_MEMX(a,b) "MCSX_CPM_TX_SLAVE_SA_MAP_MEMX"
#define device_bar_CAVM_MCSX_CPM_TX_SLAVE_SA_MAP_MEMX(a,b) 0x0 /* PF_BAR0 */
#define busnum_CAVM_MCSX_CPM_TX_SLAVE_SA_MAP_MEMX(a,b) (a)
#define arguments_CAVM_MCSX_CPM_TX_SLAVE_SA_MAP_MEMX(a,b) (a),(b),-1,-1

/**
 * Register (RSL) mcs#_cpm_tx_slave_sa_plcy_mem_0#
 *
 * MCS Cpm Tx Slave Sa Plcy Mem 0 Register
 * SA Policy (SAK) Memory - 128x514 : The SA Policy (SAK) table provides the various
 * Key and Salt values required to decrypt the packet.  The table is indexed by the SA
 * Index read from the SA Map.
 */
union cavm_mcsx_cpm_tx_slave_sa_plcy_mem_0x
{
    uint64_t u;
    struct cavm_mcsx_cpm_tx_slave_sa_plcy_mem_0x_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t sak_63_0              : 64; /**< [ 63:  0](R/W) 256b SAK: Defines the encryption key to be used to decrypt this packet. The
                                                                 lower 128 bits are used for 128-bit ciphers. */
#else /* Word 0 - Little Endian */
        uint64_t sak_63_0              : 64; /**< [ 63:  0](R/W) 256b SAK: Defines the encryption key to be used to decrypt this packet. The
                                                                 lower 128 bits are used for 128-bit ciphers. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_mcsx_cpm_tx_slave_sa_plcy_mem_0x_s cn; */
};
typedef union cavm_mcsx_cpm_tx_slave_sa_plcy_mem_0x cavm_mcsx_cpm_tx_slave_sa_plcy_mem_0x_t;

static inline uint64_t CAVM_MCSX_CPM_TX_SLAVE_SA_PLCY_MEM_0X(uint64_t a, uint64_t b) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_MCSX_CPM_TX_SLAVE_SA_PLCY_MEM_0X(uint64_t a, uint64_t b)
{
    if (cavm_is_model(OCTEONTX_CNF10KB) && ((a<=6) && (b<=127)))
        return 0x87e0800063a0ll + 0x1000000ll * ((a) & 0x7) + 0x80ll * ((b) & 0x7f);
    __cavm_csr_fatal("MCSX_CPM_TX_SLAVE_SA_PLCY_MEM_0X", 2, a, b, 0, 0, 0, 0);
}

#define typedef_CAVM_MCSX_CPM_TX_SLAVE_SA_PLCY_MEM_0X(a,b) cavm_mcsx_cpm_tx_slave_sa_plcy_mem_0x_t
#define bustype_CAVM_MCSX_CPM_TX_SLAVE_SA_PLCY_MEM_0X(a,b) CSR_TYPE_RSL
#define basename_CAVM_MCSX_CPM_TX_SLAVE_SA_PLCY_MEM_0X(a,b) "MCSX_CPM_TX_SLAVE_SA_PLCY_MEM_0X"
#define device_bar_CAVM_MCSX_CPM_TX_SLAVE_SA_PLCY_MEM_0X(a,b) 0x0 /* PF_BAR0 */
#define busnum_CAVM_MCSX_CPM_TX_SLAVE_SA_PLCY_MEM_0X(a,b) (a)
#define arguments_CAVM_MCSX_CPM_TX_SLAVE_SA_PLCY_MEM_0X(a,b) (a),(b),-1,-1

/**
 * Register (RSL) mcs#_cpm_tx_slave_sa_plcy_mem_1#
 *
 * MCS Cpm Tx Slave Sa Plcy Mem 1 Register
 * SA Policy (SAK) Memory - 128x514 : The SA Policy (SAK) table provides the various
 * Key and Salt values required to decrypt the packet.  The table is indexed by the SA
 * Index read from the SA Map.
 */
union cavm_mcsx_cpm_tx_slave_sa_plcy_mem_1x
{
    uint64_t u;
    struct cavm_mcsx_cpm_tx_slave_sa_plcy_mem_1x_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t sak_127_64            : 64; /**< [ 63:  0](R/W) 256b SAK: Defines the encryption key to be used to decrypt this packet. The
                                                                 lower 128 bits are used for 128-bit ciphers. */
#else /* Word 0 - Little Endian */
        uint64_t sak_127_64            : 64; /**< [ 63:  0](R/W) 256b SAK: Defines the encryption key to be used to decrypt this packet. The
                                                                 lower 128 bits are used for 128-bit ciphers. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_mcsx_cpm_tx_slave_sa_plcy_mem_1x_s cn; */
};
typedef union cavm_mcsx_cpm_tx_slave_sa_plcy_mem_1x cavm_mcsx_cpm_tx_slave_sa_plcy_mem_1x_t;

static inline uint64_t CAVM_MCSX_CPM_TX_SLAVE_SA_PLCY_MEM_1X(uint64_t a, uint64_t b) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_MCSX_CPM_TX_SLAVE_SA_PLCY_MEM_1X(uint64_t a, uint64_t b)
{
    if (cavm_is_model(OCTEONTX_CNF10KB) && ((a<=6) && (b<=127)))
        return 0x87e0800063a8ll + 0x1000000ll * ((a) & 0x7) + 0x80ll * ((b) & 0x7f);
    __cavm_csr_fatal("MCSX_CPM_TX_SLAVE_SA_PLCY_MEM_1X", 2, a, b, 0, 0, 0, 0);
}

#define typedef_CAVM_MCSX_CPM_TX_SLAVE_SA_PLCY_MEM_1X(a,b) cavm_mcsx_cpm_tx_slave_sa_plcy_mem_1x_t
#define bustype_CAVM_MCSX_CPM_TX_SLAVE_SA_PLCY_MEM_1X(a,b) CSR_TYPE_RSL
#define basename_CAVM_MCSX_CPM_TX_SLAVE_SA_PLCY_MEM_1X(a,b) "MCSX_CPM_TX_SLAVE_SA_PLCY_MEM_1X"
#define device_bar_CAVM_MCSX_CPM_TX_SLAVE_SA_PLCY_MEM_1X(a,b) 0x0 /* PF_BAR0 */
#define busnum_CAVM_MCSX_CPM_TX_SLAVE_SA_PLCY_MEM_1X(a,b) (a)
#define arguments_CAVM_MCSX_CPM_TX_SLAVE_SA_PLCY_MEM_1X(a,b) (a),(b),-1,-1

/**
 * Register (RSL) mcs#_cpm_tx_slave_sa_plcy_mem_2#
 *
 * MCS Cpm Tx Slave Sa Plcy Mem 2 Register
 * SA Policy (SAK) Memory - 128x514 : The SA Policy (SAK) table provides the various
 * Key and Salt values required to decrypt the packet.  The table is indexed by the SA
 * Index read from the SA Map.
 */
union cavm_mcsx_cpm_tx_slave_sa_plcy_mem_2x
{
    uint64_t u;
    struct cavm_mcsx_cpm_tx_slave_sa_plcy_mem_2x_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t sak_191_128           : 64; /**< [ 63:  0](R/W) 256b SAK: Defines the encryption key to be used to decrypt this packet. The
                                                                 lower 128 bits are used for 128-bit ciphers. */
#else /* Word 0 - Little Endian */
        uint64_t sak_191_128           : 64; /**< [ 63:  0](R/W) 256b SAK: Defines the encryption key to be used to decrypt this packet. The
                                                                 lower 128 bits are used for 128-bit ciphers. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_mcsx_cpm_tx_slave_sa_plcy_mem_2x_s cn; */
};
typedef union cavm_mcsx_cpm_tx_slave_sa_plcy_mem_2x cavm_mcsx_cpm_tx_slave_sa_plcy_mem_2x_t;

static inline uint64_t CAVM_MCSX_CPM_TX_SLAVE_SA_PLCY_MEM_2X(uint64_t a, uint64_t b) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_MCSX_CPM_TX_SLAVE_SA_PLCY_MEM_2X(uint64_t a, uint64_t b)
{
    if (cavm_is_model(OCTEONTX_CNF10KB) && ((a<=6) && (b<=127)))
        return 0x87e0800063b0ll + 0x1000000ll * ((a) & 0x7) + 0x80ll * ((b) & 0x7f);
    __cavm_csr_fatal("MCSX_CPM_TX_SLAVE_SA_PLCY_MEM_2X", 2, a, b, 0, 0, 0, 0);
}

#define typedef_CAVM_MCSX_CPM_TX_SLAVE_SA_PLCY_MEM_2X(a,b) cavm_mcsx_cpm_tx_slave_sa_plcy_mem_2x_t
#define bustype_CAVM_MCSX_CPM_TX_SLAVE_SA_PLCY_MEM_2X(a,b) CSR_TYPE_RSL
#define basename_CAVM_MCSX_CPM_TX_SLAVE_SA_PLCY_MEM_2X(a,b) "MCSX_CPM_TX_SLAVE_SA_PLCY_MEM_2X"
#define device_bar_CAVM_MCSX_CPM_TX_SLAVE_SA_PLCY_MEM_2X(a,b) 0x0 /* PF_BAR0 */
#define busnum_CAVM_MCSX_CPM_TX_SLAVE_SA_PLCY_MEM_2X(a,b) (a)
#define arguments_CAVM_MCSX_CPM_TX_SLAVE_SA_PLCY_MEM_2X(a,b) (a),(b),-1,-1

/**
 * Register (RSL) mcs#_cpm_tx_slave_sa_plcy_mem_3#
 *
 * MCS Cpm Tx Slave Sa Plcy Mem 3 Register
 * SA Policy (SAK) Memory - 128x514 : The SA Policy (SAK) table provides the various
 * Key and Salt values required to decrypt the packet.  The table is indexed by the SA
 * Index read from the SA Map.
 */
union cavm_mcsx_cpm_tx_slave_sa_plcy_mem_3x
{
    uint64_t u;
    struct cavm_mcsx_cpm_tx_slave_sa_plcy_mem_3x_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t sak_255_192           : 64; /**< [ 63:  0](R/W) 256b SAK: Defines the encryption key to be used to decrypt this packet. The
                                                                 lower 128 bits are used for 128-bit ciphers. */
#else /* Word 0 - Little Endian */
        uint64_t sak_255_192           : 64; /**< [ 63:  0](R/W) 256b SAK: Defines the encryption key to be used to decrypt this packet. The
                                                                 lower 128 bits are used for 128-bit ciphers. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_mcsx_cpm_tx_slave_sa_plcy_mem_3x_s cn; */
};
typedef union cavm_mcsx_cpm_tx_slave_sa_plcy_mem_3x cavm_mcsx_cpm_tx_slave_sa_plcy_mem_3x_t;

static inline uint64_t CAVM_MCSX_CPM_TX_SLAVE_SA_PLCY_MEM_3X(uint64_t a, uint64_t b) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_MCSX_CPM_TX_SLAVE_SA_PLCY_MEM_3X(uint64_t a, uint64_t b)
{
    if (cavm_is_model(OCTEONTX_CNF10KB) && ((a<=6) && (b<=127)))
        return 0x87e0800063b8ll + 0x1000000ll * ((a) & 0x7) + 0x80ll * ((b) & 0x7f);
    __cavm_csr_fatal("MCSX_CPM_TX_SLAVE_SA_PLCY_MEM_3X", 2, a, b, 0, 0, 0, 0);
}

#define typedef_CAVM_MCSX_CPM_TX_SLAVE_SA_PLCY_MEM_3X(a,b) cavm_mcsx_cpm_tx_slave_sa_plcy_mem_3x_t
#define bustype_CAVM_MCSX_CPM_TX_SLAVE_SA_PLCY_MEM_3X(a,b) CSR_TYPE_RSL
#define basename_CAVM_MCSX_CPM_TX_SLAVE_SA_PLCY_MEM_3X(a,b) "MCSX_CPM_TX_SLAVE_SA_PLCY_MEM_3X"
#define device_bar_CAVM_MCSX_CPM_TX_SLAVE_SA_PLCY_MEM_3X(a,b) 0x0 /* PF_BAR0 */
#define busnum_CAVM_MCSX_CPM_TX_SLAVE_SA_PLCY_MEM_3X(a,b) (a)
#define arguments_CAVM_MCSX_CPM_TX_SLAVE_SA_PLCY_MEM_3X(a,b) (a),(b),-1,-1

/**
 * Register (RSL) mcs#_cpm_tx_slave_sa_plcy_mem_4#
 *
 * MCS Cpm Tx Slave Sa Plcy Mem 4 Register
 * SA Policy (SAK) Memory - 128x514 : The SA Policy (SAK) table provides the various
 * Key and Salt values required to decrypt the packet.  The table is indexed by the SA
 * Index read from the SA Map.
 */
union cavm_mcsx_cpm_tx_slave_sa_plcy_mem_4x
{
    uint64_t u;
    struct cavm_mcsx_cpm_tx_slave_sa_plcy_mem_4x_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t hashkey_63_0          : 64; /**< [ 63:  0](R/W) 128b Hash Key: Key used for authentication. This is derived by performing a
                                                                 128/256 bit AES-ECB block encryption of an all 0s block with the SAK;
                                                                 E(SAK, 128'h0). The cipher text result of this operation is the H Key software
                                                                 needs to configure in this entry. */
#else /* Word 0 - Little Endian */
        uint64_t hashkey_63_0          : 64; /**< [ 63:  0](R/W) 128b Hash Key: Key used for authentication. This is derived by performing a
                                                                 128/256 bit AES-ECB block encryption of an all 0s block with the SAK;
                                                                 E(SAK, 128'h0). The cipher text result of this operation is the H Key software
                                                                 needs to configure in this entry. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_mcsx_cpm_tx_slave_sa_plcy_mem_4x_s cn; */
};
typedef union cavm_mcsx_cpm_tx_slave_sa_plcy_mem_4x cavm_mcsx_cpm_tx_slave_sa_plcy_mem_4x_t;

static inline uint64_t CAVM_MCSX_CPM_TX_SLAVE_SA_PLCY_MEM_4X(uint64_t a, uint64_t b) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_MCSX_CPM_TX_SLAVE_SA_PLCY_MEM_4X(uint64_t a, uint64_t b)
{
    if (cavm_is_model(OCTEONTX_CNF10KB) && ((a<=6) && (b<=127)))
        return 0x87e0800063c0ll + 0x1000000ll * ((a) & 0x7) + 0x80ll * ((b) & 0x7f);
    __cavm_csr_fatal("MCSX_CPM_TX_SLAVE_SA_PLCY_MEM_4X", 2, a, b, 0, 0, 0, 0);
}

#define typedef_CAVM_MCSX_CPM_TX_SLAVE_SA_PLCY_MEM_4X(a,b) cavm_mcsx_cpm_tx_slave_sa_plcy_mem_4x_t
#define bustype_CAVM_MCSX_CPM_TX_SLAVE_SA_PLCY_MEM_4X(a,b) CSR_TYPE_RSL
#define basename_CAVM_MCSX_CPM_TX_SLAVE_SA_PLCY_MEM_4X(a,b) "MCSX_CPM_TX_SLAVE_SA_PLCY_MEM_4X"
#define device_bar_CAVM_MCSX_CPM_TX_SLAVE_SA_PLCY_MEM_4X(a,b) 0x0 /* PF_BAR0 */
#define busnum_CAVM_MCSX_CPM_TX_SLAVE_SA_PLCY_MEM_4X(a,b) (a)
#define arguments_CAVM_MCSX_CPM_TX_SLAVE_SA_PLCY_MEM_4X(a,b) (a),(b),-1,-1

/**
 * Register (RSL) mcs#_cpm_tx_slave_sa_plcy_mem_5#
 *
 * MCS Cpm Tx Slave Sa Plcy Mem 5 Register
 * SA Policy (SAK) Memory - 128x514 : The SA Policy (SAK) table provides the various
 * Key and Salt values required to decrypt the packet.  The table is indexed by the SA
 * Index read from the SA Map.
 */
union cavm_mcsx_cpm_tx_slave_sa_plcy_mem_5x
{
    uint64_t u;
    struct cavm_mcsx_cpm_tx_slave_sa_plcy_mem_5x_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t hashkey_127_64        : 64; /**< [ 63:  0](R/W) 128b Hash Key: Key used for authentication. This is derived by performing a
                                                                 128/256 bit AES-ECB block encryption of an all 0s block with the SAK;
                                                                 E(SAK, 128'h0). The cipher text result of this operation is the H Key software
                                                                 needs to configure in this entry. */
#else /* Word 0 - Little Endian */
        uint64_t hashkey_127_64        : 64; /**< [ 63:  0](R/W) 128b Hash Key: Key used for authentication. This is derived by performing a
                                                                 128/256 bit AES-ECB block encryption of an all 0s block with the SAK;
                                                                 E(SAK, 128'h0). The cipher text result of this operation is the H Key software
                                                                 needs to configure in this entry. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_mcsx_cpm_tx_slave_sa_plcy_mem_5x_s cn; */
};
typedef union cavm_mcsx_cpm_tx_slave_sa_plcy_mem_5x cavm_mcsx_cpm_tx_slave_sa_plcy_mem_5x_t;

static inline uint64_t CAVM_MCSX_CPM_TX_SLAVE_SA_PLCY_MEM_5X(uint64_t a, uint64_t b) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_MCSX_CPM_TX_SLAVE_SA_PLCY_MEM_5X(uint64_t a, uint64_t b)
{
    if (cavm_is_model(OCTEONTX_CNF10KB) && ((a<=6) && (b<=127)))
        return 0x87e0800063c8ll + 0x1000000ll * ((a) & 0x7) + 0x80ll * ((b) & 0x7f);
    __cavm_csr_fatal("MCSX_CPM_TX_SLAVE_SA_PLCY_MEM_5X", 2, a, b, 0, 0, 0, 0);
}

#define typedef_CAVM_MCSX_CPM_TX_SLAVE_SA_PLCY_MEM_5X(a,b) cavm_mcsx_cpm_tx_slave_sa_plcy_mem_5x_t
#define bustype_CAVM_MCSX_CPM_TX_SLAVE_SA_PLCY_MEM_5X(a,b) CSR_TYPE_RSL
#define basename_CAVM_MCSX_CPM_TX_SLAVE_SA_PLCY_MEM_5X(a,b) "MCSX_CPM_TX_SLAVE_SA_PLCY_MEM_5X"
#define device_bar_CAVM_MCSX_CPM_TX_SLAVE_SA_PLCY_MEM_5X(a,b) 0x0 /* PF_BAR0 */
#define busnum_CAVM_MCSX_CPM_TX_SLAVE_SA_PLCY_MEM_5X(a,b) (a)
#define arguments_CAVM_MCSX_CPM_TX_SLAVE_SA_PLCY_MEM_5X(a,b) (a),(b),-1,-1

/**
 * Register (RSL) mcs#_cpm_tx_slave_sa_plcy_mem_6#
 *
 * MCS Cpm Tx Slave Sa Plcy Mem 6 Register
 * SA Policy (SAK) Memory - 128x514 : The SA Policy (SAK) table provides the various
 * Key and Salt values required to decrypt the packet.  The table is indexed by the SA
 * Index read from the SA Map.
 */
union cavm_mcsx_cpm_tx_slave_sa_plcy_mem_6x
{
    uint64_t u;
    struct cavm_mcsx_cpm_tx_slave_sa_plcy_mem_6x_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t salt_63_0             : 64; /**< [ 63:  0](R/W) 96b Salt value: Salt value used in XPN ciphers. */
#else /* Word 0 - Little Endian */
        uint64_t salt_63_0             : 64; /**< [ 63:  0](R/W) 96b Salt value: Salt value used in XPN ciphers. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_mcsx_cpm_tx_slave_sa_plcy_mem_6x_s cn; */
};
typedef union cavm_mcsx_cpm_tx_slave_sa_plcy_mem_6x cavm_mcsx_cpm_tx_slave_sa_plcy_mem_6x_t;

static inline uint64_t CAVM_MCSX_CPM_TX_SLAVE_SA_PLCY_MEM_6X(uint64_t a, uint64_t b) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_MCSX_CPM_TX_SLAVE_SA_PLCY_MEM_6X(uint64_t a, uint64_t b)
{
    if (cavm_is_model(OCTEONTX_CNF10KB) && ((a<=6) && (b<=127)))
        return 0x87e0800063d0ll + 0x1000000ll * ((a) & 0x7) + 0x80ll * ((b) & 0x7f);
    __cavm_csr_fatal("MCSX_CPM_TX_SLAVE_SA_PLCY_MEM_6X", 2, a, b, 0, 0, 0, 0);
}

#define typedef_CAVM_MCSX_CPM_TX_SLAVE_SA_PLCY_MEM_6X(a,b) cavm_mcsx_cpm_tx_slave_sa_plcy_mem_6x_t
#define bustype_CAVM_MCSX_CPM_TX_SLAVE_SA_PLCY_MEM_6X(a,b) CSR_TYPE_RSL
#define basename_CAVM_MCSX_CPM_TX_SLAVE_SA_PLCY_MEM_6X(a,b) "MCSX_CPM_TX_SLAVE_SA_PLCY_MEM_6X"
#define device_bar_CAVM_MCSX_CPM_TX_SLAVE_SA_PLCY_MEM_6X(a,b) 0x0 /* PF_BAR0 */
#define busnum_CAVM_MCSX_CPM_TX_SLAVE_SA_PLCY_MEM_6X(a,b) (a)
#define arguments_CAVM_MCSX_CPM_TX_SLAVE_SA_PLCY_MEM_6X(a,b) (a),(b),-1,-1

/**
 * Register (RSL) mcs#_cpm_tx_slave_sa_plcy_mem_7#
 *
 * MCS Cpm Tx Slave Sa Plcy Mem 7 Register
 * SA Policy (SAK) Memory - 128x514 : The SA Policy (SAK) table provides the various
 * Key and Salt values required to decrypt the packet.  The table is indexed by the SA
 * Index read from the SA Map.
 */
union cavm_mcsx_cpm_tx_slave_sa_plcy_mem_7x
{
    uint64_t u;
    struct cavm_mcsx_cpm_tx_slave_sa_plcy_mem_7x_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t ssci                  : 32; /**< [ 63: 32](R/W) 32b SSCI value: Short Secure Channel Identifier, used in XPN ciphers. */
        uint64_t salt_95_64            : 32; /**< [ 31:  0](R/W) 96b Salt value: Salt value used in XPN ciphers. */
#else /* Word 0 - Little Endian */
        uint64_t salt_95_64            : 32; /**< [ 31:  0](R/W) 96b Salt value: Salt value used in XPN ciphers. */
        uint64_t ssci                  : 32; /**< [ 63: 32](R/W) 32b SSCI value: Short Secure Channel Identifier, used in XPN ciphers. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_mcsx_cpm_tx_slave_sa_plcy_mem_7x_s cn; */
};
typedef union cavm_mcsx_cpm_tx_slave_sa_plcy_mem_7x cavm_mcsx_cpm_tx_slave_sa_plcy_mem_7x_t;

static inline uint64_t CAVM_MCSX_CPM_TX_SLAVE_SA_PLCY_MEM_7X(uint64_t a, uint64_t b) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_MCSX_CPM_TX_SLAVE_SA_PLCY_MEM_7X(uint64_t a, uint64_t b)
{
    if (cavm_is_model(OCTEONTX_CNF10KB) && ((a<=6) && (b<=127)))
        return 0x87e0800063d8ll + 0x1000000ll * ((a) & 0x7) + 0x80ll * ((b) & 0x7f);
    __cavm_csr_fatal("MCSX_CPM_TX_SLAVE_SA_PLCY_MEM_7X", 2, a, b, 0, 0, 0, 0);
}

#define typedef_CAVM_MCSX_CPM_TX_SLAVE_SA_PLCY_MEM_7X(a,b) cavm_mcsx_cpm_tx_slave_sa_plcy_mem_7x_t
#define bustype_CAVM_MCSX_CPM_TX_SLAVE_SA_PLCY_MEM_7X(a,b) CSR_TYPE_RSL
#define basename_CAVM_MCSX_CPM_TX_SLAVE_SA_PLCY_MEM_7X(a,b) "MCSX_CPM_TX_SLAVE_SA_PLCY_MEM_7X"
#define device_bar_CAVM_MCSX_CPM_TX_SLAVE_SA_PLCY_MEM_7X(a,b) 0x0 /* PF_BAR0 */
#define busnum_CAVM_MCSX_CPM_TX_SLAVE_SA_PLCY_MEM_7X(a,b) (a)
#define arguments_CAVM_MCSX_CPM_TX_SLAVE_SA_PLCY_MEM_7X(a,b) (a),(b),-1,-1

/**
 * Register (RSL) mcs#_cpm_tx_slave_sa_plcy_mem_8#
 *
 * MCS Cpm Tx Slave Sa Plcy Mem 8 Register
 * SA Policy (SAK) Memory - 128x514 : The SA Policy (SAK) table provides the various
 * Key and Salt values required to decrypt the packet.  The table is indexed by the SA
 * Index read from the SA Map.
 */
union cavm_mcsx_cpm_tx_slave_sa_plcy_mem_8x
{
    uint64_t u;
    struct cavm_mcsx_cpm_tx_slave_sa_plcy_mem_8x_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_2_63         : 62;
        uint64_t sectag_an             : 2;  /**< [  1:  0](R/W) 2b SecTag Association Number (AN): . */
#else /* Word 0 - Little Endian */
        uint64_t sectag_an             : 2;  /**< [  1:  0](R/W) 2b SecTag Association Number (AN): . */
        uint64_t reserved_2_63         : 62;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_mcsx_cpm_tx_slave_sa_plcy_mem_8x_s cn; */
};
typedef union cavm_mcsx_cpm_tx_slave_sa_plcy_mem_8x cavm_mcsx_cpm_tx_slave_sa_plcy_mem_8x_t;

static inline uint64_t CAVM_MCSX_CPM_TX_SLAVE_SA_PLCY_MEM_8X(uint64_t a, uint64_t b) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_MCSX_CPM_TX_SLAVE_SA_PLCY_MEM_8X(uint64_t a, uint64_t b)
{
    if (cavm_is_model(OCTEONTX_CNF10KB) && ((a<=6) && (b<=127)))
        return 0x87e0800063e0ll + 0x1000000ll * ((a) & 0x7) + 0x80ll * ((b) & 0x7f);
    __cavm_csr_fatal("MCSX_CPM_TX_SLAVE_SA_PLCY_MEM_8X", 2, a, b, 0, 0, 0, 0);
}

#define typedef_CAVM_MCSX_CPM_TX_SLAVE_SA_PLCY_MEM_8X(a,b) cavm_mcsx_cpm_tx_slave_sa_plcy_mem_8x_t
#define bustype_CAVM_MCSX_CPM_TX_SLAVE_SA_PLCY_MEM_8X(a,b) CSR_TYPE_RSL
#define basename_CAVM_MCSX_CPM_TX_SLAVE_SA_PLCY_MEM_8X(a,b) "MCSX_CPM_TX_SLAVE_SA_PLCY_MEM_8X"
#define device_bar_CAVM_MCSX_CPM_TX_SLAVE_SA_PLCY_MEM_8X(a,b) 0x0 /* PF_BAR0 */
#define busnum_CAVM_MCSX_CPM_TX_SLAVE_SA_PLCY_MEM_8X(a,b) (a)
#define arguments_CAVM_MCSX_CPM_TX_SLAVE_SA_PLCY_MEM_8X(a,b) (a),(b),-1,-1

/**
 * Register (RSL) mcs#_cpm_tx_slave_sa_pn_table_mem#
 *
 * MCS Cpm Tx Slave Sa Pn Table Mem Register
 * PN Table Memory - 128x64 : The Egress PN Table keeps track of the next PN value to
 * insert into an outgoing packet on the corresponding SA.  The next_PN must be
 * configured by SW prior to it being used.  However HW will update it as a packet is
 * transmitted on that SA.
 */
union cavm_mcsx_cpm_tx_slave_sa_pn_table_memx
{
    uint64_t u;
    struct cavm_mcsx_cpm_tx_slave_sa_pn_table_memx_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t next_pn               : 64; /**< [ 63:  0](R/W) 64b next_pn value: Next packet number to insert into outgoing packet on a particular SA. */
#else /* Word 0 - Little Endian */
        uint64_t next_pn               : 64; /**< [ 63:  0](R/W) 64b next_pn value: Next packet number to insert into outgoing packet on a particular SA. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_mcsx_cpm_tx_slave_sa_pn_table_memx_s cn; */
};
typedef union cavm_mcsx_cpm_tx_slave_sa_pn_table_memx cavm_mcsx_cpm_tx_slave_sa_pn_table_memx_t;

static inline uint64_t CAVM_MCSX_CPM_TX_SLAVE_SA_PN_TABLE_MEMX(uint64_t a, uint64_t b) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_MCSX_CPM_TX_SLAVE_SA_PN_TABLE_MEMX(uint64_t a, uint64_t b)
{
    if (cavm_is_model(OCTEONTX_CNF10KB) && ((a<=6) && (b<=127)))
        return 0x87e08000a3a0ll + 0x1000000ll * ((a) & 0x7) + 8ll * ((b) & 0x7f);
    __cavm_csr_fatal("MCSX_CPM_TX_SLAVE_SA_PN_TABLE_MEMX", 2, a, b, 0, 0, 0, 0);
}

#define typedef_CAVM_MCSX_CPM_TX_SLAVE_SA_PN_TABLE_MEMX(a,b) cavm_mcsx_cpm_tx_slave_sa_pn_table_memx_t
#define bustype_CAVM_MCSX_CPM_TX_SLAVE_SA_PN_TABLE_MEMX(a,b) CSR_TYPE_RSL
#define basename_CAVM_MCSX_CPM_TX_SLAVE_SA_PN_TABLE_MEMX(a,b) "MCSX_CPM_TX_SLAVE_SA_PN_TABLE_MEMX"
#define device_bar_CAVM_MCSX_CPM_TX_SLAVE_SA_PN_TABLE_MEMX(a,b) 0x0 /* PF_BAR0 */
#define busnum_CAVM_MCSX_CPM_TX_SLAVE_SA_PN_TABLE_MEMX(a,b) (a)
#define arguments_CAVM_MCSX_CPM_TX_SLAVE_SA_PN_TABLE_MEMX(a,b) (a),(b),-1,-1

/**
 * Register (RSL) mcs#_cpm_tx_slave_sc_expiry_actual_timeout_0_rsvd
 *
 * INTERNAL: MCS Cpm Tx Slave Sc Expiry Actual Timeout 0 Register
 *
 * CPM SC/SA actual-timeout Leaf Interrupt Register
 */
union cavm_mcsx_cpm_tx_slave_sc_expiry_actual_timeout_0_rsvd
{
    uint64_t u;
    struct cavm_mcsx_cpm_tx_slave_sc_expiry_actual_timeout_0_rsvd_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t sc_expiry_actual_timeout_int : 64;/**< [ 63:  0](R/W1C) Reserved. */
#else /* Word 0 - Little Endian */
        uint64_t sc_expiry_actual_timeout_int : 64;/**< [ 63:  0](R/W1C) Reserved. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_mcsx_cpm_tx_slave_sc_expiry_actual_timeout_0_rsvd_s cn; */
};
typedef union cavm_mcsx_cpm_tx_slave_sc_expiry_actual_timeout_0_rsvd cavm_mcsx_cpm_tx_slave_sc_expiry_actual_timeout_0_rsvd_t;

static inline uint64_t CAVM_MCSX_CPM_TX_SLAVE_SC_EXPIRY_ACTUAL_TIMEOUT_0_RSVD(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_MCSX_CPM_TX_SLAVE_SC_EXPIRY_ACTUAL_TIMEOUT_0_RSVD(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CNF10KB) && (a<=6))
        return 0x87e0800054e0ll + 0x1000000ll * ((a) & 0x7);
    __cavm_csr_fatal("MCSX_CPM_TX_SLAVE_SC_EXPIRY_ACTUAL_TIMEOUT_0_RSVD", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_MCSX_CPM_TX_SLAVE_SC_EXPIRY_ACTUAL_TIMEOUT_0_RSVD(a) cavm_mcsx_cpm_tx_slave_sc_expiry_actual_timeout_0_rsvd_t
#define bustype_CAVM_MCSX_CPM_TX_SLAVE_SC_EXPIRY_ACTUAL_TIMEOUT_0_RSVD(a) CSR_TYPE_RSL
#define basename_CAVM_MCSX_CPM_TX_SLAVE_SC_EXPIRY_ACTUAL_TIMEOUT_0_RSVD(a) "MCSX_CPM_TX_SLAVE_SC_EXPIRY_ACTUAL_TIMEOUT_0_RSVD"
#define device_bar_CAVM_MCSX_CPM_TX_SLAVE_SC_EXPIRY_ACTUAL_TIMEOUT_0_RSVD(a) 0x0 /* PF_BAR0 */
#define busnum_CAVM_MCSX_CPM_TX_SLAVE_SC_EXPIRY_ACTUAL_TIMEOUT_0_RSVD(a) (a)
#define arguments_CAVM_MCSX_CPM_TX_SLAVE_SC_EXPIRY_ACTUAL_TIMEOUT_0_RSVD(a) (a),-1,-1,-1

/**
 * Register (RSL) mcs#_cpm_tx_slave_sc_expiry_actual_timeout_enb_0_rsvd
 *
 * INTERNAL: MCS Cpm Tx Slave Sc Expiry Actual Timeout Enb 0 Register
 *
 * ENB register for sc_expiry_actual_timeout
 */
union cavm_mcsx_cpm_tx_slave_sc_expiry_actual_timeout_enb_0_rsvd
{
    uint64_t u;
    struct cavm_mcsx_cpm_tx_slave_sc_expiry_actual_timeout_enb_0_rsvd_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t sc_expiry_actual_timeout_int_enb : 64;/**< [ 63:  0](R/W) Reserved. */
#else /* Word 0 - Little Endian */
        uint64_t sc_expiry_actual_timeout_int_enb : 64;/**< [ 63:  0](R/W) Reserved. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_mcsx_cpm_tx_slave_sc_expiry_actual_timeout_enb_0_rsvd_s cn; */
};
typedef union cavm_mcsx_cpm_tx_slave_sc_expiry_actual_timeout_enb_0_rsvd cavm_mcsx_cpm_tx_slave_sc_expiry_actual_timeout_enb_0_rsvd_t;

static inline uint64_t CAVM_MCSX_CPM_TX_SLAVE_SC_EXPIRY_ACTUAL_TIMEOUT_ENB_0_RSVD(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_MCSX_CPM_TX_SLAVE_SC_EXPIRY_ACTUAL_TIMEOUT_ENB_0_RSVD(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CNF10KB) && (a<=6))
        return 0x87e0800054e8ll + 0x1000000ll * ((a) & 0x7);
    __cavm_csr_fatal("MCSX_CPM_TX_SLAVE_SC_EXPIRY_ACTUAL_TIMEOUT_ENB_0_RSVD", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_MCSX_CPM_TX_SLAVE_SC_EXPIRY_ACTUAL_TIMEOUT_ENB_0_RSVD(a) cavm_mcsx_cpm_tx_slave_sc_expiry_actual_timeout_enb_0_rsvd_t
#define bustype_CAVM_MCSX_CPM_TX_SLAVE_SC_EXPIRY_ACTUAL_TIMEOUT_ENB_0_RSVD(a) CSR_TYPE_RSL
#define basename_CAVM_MCSX_CPM_TX_SLAVE_SC_EXPIRY_ACTUAL_TIMEOUT_ENB_0_RSVD(a) "MCSX_CPM_TX_SLAVE_SC_EXPIRY_ACTUAL_TIMEOUT_ENB_0_RSVD"
#define device_bar_CAVM_MCSX_CPM_TX_SLAVE_SC_EXPIRY_ACTUAL_TIMEOUT_ENB_0_RSVD(a) 0x0 /* PF_BAR0 */
#define busnum_CAVM_MCSX_CPM_TX_SLAVE_SC_EXPIRY_ACTUAL_TIMEOUT_ENB_0_RSVD(a) (a)
#define arguments_CAVM_MCSX_CPM_TX_SLAVE_SC_EXPIRY_ACTUAL_TIMEOUT_ENB_0_RSVD(a) (a),-1,-1,-1

/**
 * Register (RSL) mcs#_cpm_tx_slave_sc_expiry_actual_timeout_intr_rw_0_rsvd
 *
 * INTERNAL: MCS Cpm Tx Slave Sc Expiry Actual Timeout Intr Rw 0 Register
 *
 * Read/write register for sc_expiry_actual_timeout
 */
union cavm_mcsx_cpm_tx_slave_sc_expiry_actual_timeout_intr_rw_0_rsvd
{
    uint64_t u;
    struct cavm_mcsx_cpm_tx_slave_sc_expiry_actual_timeout_intr_rw_0_rsvd_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t sc_expiry_actual_timeout_int : 64;/**< [ 63:  0](R/W) Reserved. */
#else /* Word 0 - Little Endian */
        uint64_t sc_expiry_actual_timeout_int : 64;/**< [ 63:  0](R/W) Reserved. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_mcsx_cpm_tx_slave_sc_expiry_actual_timeout_intr_rw_0_rsvd_s cn; */
};
typedef union cavm_mcsx_cpm_tx_slave_sc_expiry_actual_timeout_intr_rw_0_rsvd cavm_mcsx_cpm_tx_slave_sc_expiry_actual_timeout_intr_rw_0_rsvd_t;

static inline uint64_t CAVM_MCSX_CPM_TX_SLAVE_SC_EXPIRY_ACTUAL_TIMEOUT_INTR_RW_0_RSVD(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_MCSX_CPM_TX_SLAVE_SC_EXPIRY_ACTUAL_TIMEOUT_INTR_RW_0_RSVD(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CNF10KB) && (a<=6))
        return 0x87e0800054f8ll + 0x1000000ll * ((a) & 0x7);
    __cavm_csr_fatal("MCSX_CPM_TX_SLAVE_SC_EXPIRY_ACTUAL_TIMEOUT_INTR_RW_0_RSVD", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_MCSX_CPM_TX_SLAVE_SC_EXPIRY_ACTUAL_TIMEOUT_INTR_RW_0_RSVD(a) cavm_mcsx_cpm_tx_slave_sc_expiry_actual_timeout_intr_rw_0_rsvd_t
#define bustype_CAVM_MCSX_CPM_TX_SLAVE_SC_EXPIRY_ACTUAL_TIMEOUT_INTR_RW_0_RSVD(a) CSR_TYPE_RSL
#define basename_CAVM_MCSX_CPM_TX_SLAVE_SC_EXPIRY_ACTUAL_TIMEOUT_INTR_RW_0_RSVD(a) "MCSX_CPM_TX_SLAVE_SC_EXPIRY_ACTUAL_TIMEOUT_INTR_RW_0_RSVD"
#define device_bar_CAVM_MCSX_CPM_TX_SLAVE_SC_EXPIRY_ACTUAL_TIMEOUT_INTR_RW_0_RSVD(a) 0x0 /* PF_BAR0 */
#define busnum_CAVM_MCSX_CPM_TX_SLAVE_SC_EXPIRY_ACTUAL_TIMEOUT_INTR_RW_0_RSVD(a) (a)
#define arguments_CAVM_MCSX_CPM_TX_SLAVE_SC_EXPIRY_ACTUAL_TIMEOUT_INTR_RW_0_RSVD(a) (a),-1,-1,-1

/**
 * Register (RSL) mcs#_cpm_tx_slave_sc_expiry_actual_timeout_raw_0_rsvd
 *
 * INTERNAL: MCS Cpm Tx Slave Sc Expiry Actual Timeout Raw 0 Register
 *
 * Raw register for sc_expiry_actual_timeout
 */
union cavm_mcsx_cpm_tx_slave_sc_expiry_actual_timeout_raw_0_rsvd
{
    uint64_t u;
    struct cavm_mcsx_cpm_tx_slave_sc_expiry_actual_timeout_raw_0_rsvd_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t sc_expiry_actual_timeout_int : 64;/**< [ 63:  0](RO) Reserved. */
#else /* Word 0 - Little Endian */
        uint64_t sc_expiry_actual_timeout_int : 64;/**< [ 63:  0](RO) Reserved. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_mcsx_cpm_tx_slave_sc_expiry_actual_timeout_raw_0_rsvd_s cn; */
};
typedef union cavm_mcsx_cpm_tx_slave_sc_expiry_actual_timeout_raw_0_rsvd cavm_mcsx_cpm_tx_slave_sc_expiry_actual_timeout_raw_0_rsvd_t;

static inline uint64_t CAVM_MCSX_CPM_TX_SLAVE_SC_EXPIRY_ACTUAL_TIMEOUT_RAW_0_RSVD(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_MCSX_CPM_TX_SLAVE_SC_EXPIRY_ACTUAL_TIMEOUT_RAW_0_RSVD(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CNF10KB) && (a<=6))
        return 0x87e0800054f0ll + 0x1000000ll * ((a) & 0x7);
    __cavm_csr_fatal("MCSX_CPM_TX_SLAVE_SC_EXPIRY_ACTUAL_TIMEOUT_RAW_0_RSVD", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_MCSX_CPM_TX_SLAVE_SC_EXPIRY_ACTUAL_TIMEOUT_RAW_0_RSVD(a) cavm_mcsx_cpm_tx_slave_sc_expiry_actual_timeout_raw_0_rsvd_t
#define bustype_CAVM_MCSX_CPM_TX_SLAVE_SC_EXPIRY_ACTUAL_TIMEOUT_RAW_0_RSVD(a) CSR_TYPE_RSL
#define basename_CAVM_MCSX_CPM_TX_SLAVE_SC_EXPIRY_ACTUAL_TIMEOUT_RAW_0_RSVD(a) "MCSX_CPM_TX_SLAVE_SC_EXPIRY_ACTUAL_TIMEOUT_RAW_0_RSVD"
#define device_bar_CAVM_MCSX_CPM_TX_SLAVE_SC_EXPIRY_ACTUAL_TIMEOUT_RAW_0_RSVD(a) 0x0 /* PF_BAR0 */
#define busnum_CAVM_MCSX_CPM_TX_SLAVE_SC_EXPIRY_ACTUAL_TIMEOUT_RAW_0_RSVD(a) (a)
#define arguments_CAVM_MCSX_CPM_TX_SLAVE_SC_EXPIRY_ACTUAL_TIMEOUT_RAW_0_RSVD(a) (a),-1,-1,-1

/**
 * Register (RSL) mcs#_cpm_tx_slave_sc_expiry_pre_timeout_0_rsvd
 *
 * INTERNAL: MCS Cpm Tx Slave Sc Expiry Pre Timeout 0 Register
 *
 * CPM SC/SA pre-timeout Leaf Interrupt Register
 */
union cavm_mcsx_cpm_tx_slave_sc_expiry_pre_timeout_0_rsvd
{
    uint64_t u;
    struct cavm_mcsx_cpm_tx_slave_sc_expiry_pre_timeout_0_rsvd_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t sa_expiry_pre_timeout_int : 64;/**< [ 63:  0](R/W1C) Reserved. */
#else /* Word 0 - Little Endian */
        uint64_t sa_expiry_pre_timeout_int : 64;/**< [ 63:  0](R/W1C) Reserved. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_mcsx_cpm_tx_slave_sc_expiry_pre_timeout_0_rsvd_s cn; */
};
typedef union cavm_mcsx_cpm_tx_slave_sc_expiry_pre_timeout_0_rsvd cavm_mcsx_cpm_tx_slave_sc_expiry_pre_timeout_0_rsvd_t;

static inline uint64_t CAVM_MCSX_CPM_TX_SLAVE_SC_EXPIRY_PRE_TIMEOUT_0_RSVD(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_MCSX_CPM_TX_SLAVE_SC_EXPIRY_PRE_TIMEOUT_0_RSVD(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CNF10KB) && (a<=6))
        return 0x87e0800054c0ll + 0x1000000ll * ((a) & 0x7);
    __cavm_csr_fatal("MCSX_CPM_TX_SLAVE_SC_EXPIRY_PRE_TIMEOUT_0_RSVD", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_MCSX_CPM_TX_SLAVE_SC_EXPIRY_PRE_TIMEOUT_0_RSVD(a) cavm_mcsx_cpm_tx_slave_sc_expiry_pre_timeout_0_rsvd_t
#define bustype_CAVM_MCSX_CPM_TX_SLAVE_SC_EXPIRY_PRE_TIMEOUT_0_RSVD(a) CSR_TYPE_RSL
#define basename_CAVM_MCSX_CPM_TX_SLAVE_SC_EXPIRY_PRE_TIMEOUT_0_RSVD(a) "MCSX_CPM_TX_SLAVE_SC_EXPIRY_PRE_TIMEOUT_0_RSVD"
#define device_bar_CAVM_MCSX_CPM_TX_SLAVE_SC_EXPIRY_PRE_TIMEOUT_0_RSVD(a) 0x0 /* PF_BAR0 */
#define busnum_CAVM_MCSX_CPM_TX_SLAVE_SC_EXPIRY_PRE_TIMEOUT_0_RSVD(a) (a)
#define arguments_CAVM_MCSX_CPM_TX_SLAVE_SC_EXPIRY_PRE_TIMEOUT_0_RSVD(a) (a),-1,-1,-1

/**
 * Register (RSL) mcs#_cpm_tx_slave_sc_expiry_pre_timeout_enb_0_rsvd
 *
 * INTERNAL: MCS Cpm Tx Slave Sc Expiry Pre Timeout Enb 0 Register
 *
 * ENB register for sc_expiry_pre_timeout
 */
union cavm_mcsx_cpm_tx_slave_sc_expiry_pre_timeout_enb_0_rsvd
{
    uint64_t u;
    struct cavm_mcsx_cpm_tx_slave_sc_expiry_pre_timeout_enb_0_rsvd_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t sa_expiry_pre_timeout_int_enb : 64;/**< [ 63:  0](R/W) Reserved. */
#else /* Word 0 - Little Endian */
        uint64_t sa_expiry_pre_timeout_int_enb : 64;/**< [ 63:  0](R/W) Reserved. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_mcsx_cpm_tx_slave_sc_expiry_pre_timeout_enb_0_rsvd_s cn; */
};
typedef union cavm_mcsx_cpm_tx_slave_sc_expiry_pre_timeout_enb_0_rsvd cavm_mcsx_cpm_tx_slave_sc_expiry_pre_timeout_enb_0_rsvd_t;

static inline uint64_t CAVM_MCSX_CPM_TX_SLAVE_SC_EXPIRY_PRE_TIMEOUT_ENB_0_RSVD(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_MCSX_CPM_TX_SLAVE_SC_EXPIRY_PRE_TIMEOUT_ENB_0_RSVD(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CNF10KB) && (a<=6))
        return 0x87e0800054c8ll + 0x1000000ll * ((a) & 0x7);
    __cavm_csr_fatal("MCSX_CPM_TX_SLAVE_SC_EXPIRY_PRE_TIMEOUT_ENB_0_RSVD", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_MCSX_CPM_TX_SLAVE_SC_EXPIRY_PRE_TIMEOUT_ENB_0_RSVD(a) cavm_mcsx_cpm_tx_slave_sc_expiry_pre_timeout_enb_0_rsvd_t
#define bustype_CAVM_MCSX_CPM_TX_SLAVE_SC_EXPIRY_PRE_TIMEOUT_ENB_0_RSVD(a) CSR_TYPE_RSL
#define basename_CAVM_MCSX_CPM_TX_SLAVE_SC_EXPIRY_PRE_TIMEOUT_ENB_0_RSVD(a) "MCSX_CPM_TX_SLAVE_SC_EXPIRY_PRE_TIMEOUT_ENB_0_RSVD"
#define device_bar_CAVM_MCSX_CPM_TX_SLAVE_SC_EXPIRY_PRE_TIMEOUT_ENB_0_RSVD(a) 0x0 /* PF_BAR0 */
#define busnum_CAVM_MCSX_CPM_TX_SLAVE_SC_EXPIRY_PRE_TIMEOUT_ENB_0_RSVD(a) (a)
#define arguments_CAVM_MCSX_CPM_TX_SLAVE_SC_EXPIRY_PRE_TIMEOUT_ENB_0_RSVD(a) (a),-1,-1,-1

/**
 * Register (RSL) mcs#_cpm_tx_slave_sc_expiry_pre_timeout_intr_rw_0_rsvd
 *
 * INTERNAL: MCS Cpm Tx Slave Sc Expiry Pre Timeout Intr Rw 0 Register
 *
 * Read/write register for sc_expiry_pre_timeout
 */
union cavm_mcsx_cpm_tx_slave_sc_expiry_pre_timeout_intr_rw_0_rsvd
{
    uint64_t u;
    struct cavm_mcsx_cpm_tx_slave_sc_expiry_pre_timeout_intr_rw_0_rsvd_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t sa_expiry_pre_timeout_int : 64;/**< [ 63:  0](R/W) Reserved. */
#else /* Word 0 - Little Endian */
        uint64_t sa_expiry_pre_timeout_int : 64;/**< [ 63:  0](R/W) Reserved. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_mcsx_cpm_tx_slave_sc_expiry_pre_timeout_intr_rw_0_rsvd_s cn; */
};
typedef union cavm_mcsx_cpm_tx_slave_sc_expiry_pre_timeout_intr_rw_0_rsvd cavm_mcsx_cpm_tx_slave_sc_expiry_pre_timeout_intr_rw_0_rsvd_t;

static inline uint64_t CAVM_MCSX_CPM_TX_SLAVE_SC_EXPIRY_PRE_TIMEOUT_INTR_RW_0_RSVD(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_MCSX_CPM_TX_SLAVE_SC_EXPIRY_PRE_TIMEOUT_INTR_RW_0_RSVD(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CNF10KB) && (a<=6))
        return 0x87e0800054d8ll + 0x1000000ll * ((a) & 0x7);
    __cavm_csr_fatal("MCSX_CPM_TX_SLAVE_SC_EXPIRY_PRE_TIMEOUT_INTR_RW_0_RSVD", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_MCSX_CPM_TX_SLAVE_SC_EXPIRY_PRE_TIMEOUT_INTR_RW_0_RSVD(a) cavm_mcsx_cpm_tx_slave_sc_expiry_pre_timeout_intr_rw_0_rsvd_t
#define bustype_CAVM_MCSX_CPM_TX_SLAVE_SC_EXPIRY_PRE_TIMEOUT_INTR_RW_0_RSVD(a) CSR_TYPE_RSL
#define basename_CAVM_MCSX_CPM_TX_SLAVE_SC_EXPIRY_PRE_TIMEOUT_INTR_RW_0_RSVD(a) "MCSX_CPM_TX_SLAVE_SC_EXPIRY_PRE_TIMEOUT_INTR_RW_0_RSVD"
#define device_bar_CAVM_MCSX_CPM_TX_SLAVE_SC_EXPIRY_PRE_TIMEOUT_INTR_RW_0_RSVD(a) 0x0 /* PF_BAR0 */
#define busnum_CAVM_MCSX_CPM_TX_SLAVE_SC_EXPIRY_PRE_TIMEOUT_INTR_RW_0_RSVD(a) (a)
#define arguments_CAVM_MCSX_CPM_TX_SLAVE_SC_EXPIRY_PRE_TIMEOUT_INTR_RW_0_RSVD(a) (a),-1,-1,-1

/**
 * Register (RSL) mcs#_cpm_tx_slave_sc_expiry_pre_timeout_raw_0_rsvd
 *
 * INTERNAL: MCS Cpm Tx Slave Sc Expiry Pre Timeout Raw 0 Register
 *
 * Raw register for sc_expiry_pre_timeout
 */
union cavm_mcsx_cpm_tx_slave_sc_expiry_pre_timeout_raw_0_rsvd
{
    uint64_t u;
    struct cavm_mcsx_cpm_tx_slave_sc_expiry_pre_timeout_raw_0_rsvd_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t sa_expiry_pre_timeout_int : 64;/**< [ 63:  0](RO) Reserved. */
#else /* Word 0 - Little Endian */
        uint64_t sa_expiry_pre_timeout_int : 64;/**< [ 63:  0](RO) Reserved. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_mcsx_cpm_tx_slave_sc_expiry_pre_timeout_raw_0_rsvd_s cn; */
};
typedef union cavm_mcsx_cpm_tx_slave_sc_expiry_pre_timeout_raw_0_rsvd cavm_mcsx_cpm_tx_slave_sc_expiry_pre_timeout_raw_0_rsvd_t;

static inline uint64_t CAVM_MCSX_CPM_TX_SLAVE_SC_EXPIRY_PRE_TIMEOUT_RAW_0_RSVD(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_MCSX_CPM_TX_SLAVE_SC_EXPIRY_PRE_TIMEOUT_RAW_0_RSVD(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CNF10KB) && (a<=6))
        return 0x87e0800054d0ll + 0x1000000ll * ((a) & 0x7);
    __cavm_csr_fatal("MCSX_CPM_TX_SLAVE_SC_EXPIRY_PRE_TIMEOUT_RAW_0_RSVD", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_MCSX_CPM_TX_SLAVE_SC_EXPIRY_PRE_TIMEOUT_RAW_0_RSVD(a) cavm_mcsx_cpm_tx_slave_sc_expiry_pre_timeout_raw_0_rsvd_t
#define bustype_CAVM_MCSX_CPM_TX_SLAVE_SC_EXPIRY_PRE_TIMEOUT_RAW_0_RSVD(a) CSR_TYPE_RSL
#define basename_CAVM_MCSX_CPM_TX_SLAVE_SC_EXPIRY_PRE_TIMEOUT_RAW_0_RSVD(a) "MCSX_CPM_TX_SLAVE_SC_EXPIRY_PRE_TIMEOUT_RAW_0_RSVD"
#define device_bar_CAVM_MCSX_CPM_TX_SLAVE_SC_EXPIRY_PRE_TIMEOUT_RAW_0_RSVD(a) 0x0 /* PF_BAR0 */
#define busnum_CAVM_MCSX_CPM_TX_SLAVE_SC_EXPIRY_PRE_TIMEOUT_RAW_0_RSVD(a) (a)
#define arguments_CAVM_MCSX_CPM_TX_SLAVE_SC_EXPIRY_PRE_TIMEOUT_RAW_0_RSVD(a) (a),-1,-1,-1

/**
 * Register (RSL) mcs#_cpm_tx_slave_sc_timer_mem#_rsvd
 *
 * INTERNAL: MCS Cpm Tx Slave Sc Timer Mem Register
 *
 * SC Timer Memory - 64x32 : The per SC timers used in determining if an SA should be invaliated..
 */
union cavm_mcsx_cpm_tx_slave_sc_timer_memx_rsvd
{
    uint64_t u;
    struct cavm_mcsx_cpm_tx_slave_sc_timer_memx_rsvd_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_32_63        : 32;
        uint64_t timer                 : 32; /**< [ 31:  0](R/W) Reserved. */
#else /* Word 0 - Little Endian */
        uint64_t timer                 : 32; /**< [ 31:  0](R/W) Reserved. */
        uint64_t reserved_32_63        : 32;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_mcsx_cpm_tx_slave_sc_timer_memx_rsvd_s cn; */
};
typedef union cavm_mcsx_cpm_tx_slave_sc_timer_memx_rsvd cavm_mcsx_cpm_tx_slave_sc_timer_memx_rsvd_t;

static inline uint64_t CAVM_MCSX_CPM_TX_SLAVE_SC_TIMER_MEMX_RSVD(uint64_t a, uint64_t b) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_MCSX_CPM_TX_SLAVE_SC_TIMER_MEMX_RSVD(uint64_t a, uint64_t b)
{
    if (cavm_is_model(OCTEONTX_CNF10KB) && ((a<=6) && (b<=63)))
        return 0x87e08000ba08ll + 0x1000000ll * ((a) & 0x7) + 8ll * ((b) & 0x3f);
    __cavm_csr_fatal("MCSX_CPM_TX_SLAVE_SC_TIMER_MEMX_RSVD", 2, a, b, 0, 0, 0, 0);
}

#define typedef_CAVM_MCSX_CPM_TX_SLAVE_SC_TIMER_MEMX_RSVD(a,b) cavm_mcsx_cpm_tx_slave_sc_timer_memx_rsvd_t
#define bustype_CAVM_MCSX_CPM_TX_SLAVE_SC_TIMER_MEMX_RSVD(a,b) CSR_TYPE_RSL
#define basename_CAVM_MCSX_CPM_TX_SLAVE_SC_TIMER_MEMX_RSVD(a,b) "MCSX_CPM_TX_SLAVE_SC_TIMER_MEMX_RSVD"
#define device_bar_CAVM_MCSX_CPM_TX_SLAVE_SC_TIMER_MEMX_RSVD(a,b) 0x0 /* PF_BAR0 */
#define busnum_CAVM_MCSX_CPM_TX_SLAVE_SC_TIMER_MEMX_RSVD(a,b) (a)
#define arguments_CAVM_MCSX_CPM_TX_SLAVE_SC_TIMER_MEMX_RSVD(a,b) (a),(b),-1,-1

/**
 * Register (RSL) mcs#_cpm_tx_slave_sc_timer_rsvd1_rsvd
 *
 * INTERNAL: MCS Cpm Tx Slave Sc Timer Rsvd1 Register
 *
 * Reserved CSR.
 */
union cavm_mcsx_cpm_tx_slave_sc_timer_rsvd1_rsvd
{
    uint64_t u;
    struct cavm_mcsx_cpm_tx_slave_sc_timer_rsvd1_rsvd_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_0_63         : 64;
#else /* Word 0 - Little Endian */
        uint64_t reserved_0_63         : 64;
#endif /* Word 0 - End */
    } s;
    struct cavm_mcsx_cpm_tx_slave_sc_timer_rsvd1_rsvd_cn
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_32_63        : 32;
        uint64_t reserved_0_31         : 32;
#else /* Word 0 - Little Endian */
        uint64_t reserved_0_31         : 32;
        uint64_t reserved_32_63        : 32;
#endif /* Word 0 - End */
    } cn;
};
typedef union cavm_mcsx_cpm_tx_slave_sc_timer_rsvd1_rsvd cavm_mcsx_cpm_tx_slave_sc_timer_rsvd1_rsvd_t;

static inline uint64_t CAVM_MCSX_CPM_TX_SLAVE_SC_TIMER_RSVD1_RSVD(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_MCSX_CPM_TX_SLAVE_SC_TIMER_RSVD1_RSVD(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CNF10KB) && (a<=6))
        return 0x87e08000b7d8ll + 0x1000000ll * ((a) & 0x7);
    __cavm_csr_fatal("MCSX_CPM_TX_SLAVE_SC_TIMER_RSVD1_RSVD", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_MCSX_CPM_TX_SLAVE_SC_TIMER_RSVD1_RSVD(a) cavm_mcsx_cpm_tx_slave_sc_timer_rsvd1_rsvd_t
#define bustype_CAVM_MCSX_CPM_TX_SLAVE_SC_TIMER_RSVD1_RSVD(a) CSR_TYPE_RSL
#define basename_CAVM_MCSX_CPM_TX_SLAVE_SC_TIMER_RSVD1_RSVD(a) "MCSX_CPM_TX_SLAVE_SC_TIMER_RSVD1_RSVD"
#define device_bar_CAVM_MCSX_CPM_TX_SLAVE_SC_TIMER_RSVD1_RSVD(a) 0x0 /* PF_BAR0 */
#define busnum_CAVM_MCSX_CPM_TX_SLAVE_SC_TIMER_RSVD1_RSVD(a) (a)
#define arguments_CAVM_MCSX_CPM_TX_SLAVE_SC_TIMER_RSVD1_RSVD(a) (a),-1,-1,-1

/**
 * Register (RSL) mcs#_cpm_tx_slave_sc_timer_rsvd2_rsvd
 *
 * INTERNAL: MCS Cpm Tx Slave Sc Timer Rsvd2 Register
 *
 * Reserved CSR.
 */
union cavm_mcsx_cpm_tx_slave_sc_timer_rsvd2_rsvd
{
    uint64_t u;
    struct cavm_mcsx_cpm_tx_slave_sc_timer_rsvd2_rsvd_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_0_63         : 64;
#else /* Word 0 - Little Endian */
        uint64_t reserved_0_63         : 64;
#endif /* Word 0 - End */
    } s;
    struct cavm_mcsx_cpm_tx_slave_sc_timer_rsvd2_rsvd_cn
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_32_63        : 32;
        uint64_t reserved_0_31         : 32;
#else /* Word 0 - Little Endian */
        uint64_t reserved_0_31         : 32;
        uint64_t reserved_32_63        : 32;
#endif /* Word 0 - End */
    } cn;
};
typedef union cavm_mcsx_cpm_tx_slave_sc_timer_rsvd2_rsvd cavm_mcsx_cpm_tx_slave_sc_timer_rsvd2_rsvd_t;

static inline uint64_t CAVM_MCSX_CPM_TX_SLAVE_SC_TIMER_RSVD2_RSVD(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_MCSX_CPM_TX_SLAVE_SC_TIMER_RSVD2_RSVD(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CNF10KB) && (a<=6))
        return 0x87e08000b7e0ll + 0x1000000ll * ((a) & 0x7);
    __cavm_csr_fatal("MCSX_CPM_TX_SLAVE_SC_TIMER_RSVD2_RSVD", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_MCSX_CPM_TX_SLAVE_SC_TIMER_RSVD2_RSVD(a) cavm_mcsx_cpm_tx_slave_sc_timer_rsvd2_rsvd_t
#define bustype_CAVM_MCSX_CPM_TX_SLAVE_SC_TIMER_RSVD2_RSVD(a) CSR_TYPE_RSL
#define basename_CAVM_MCSX_CPM_TX_SLAVE_SC_TIMER_RSVD2_RSVD(a) "MCSX_CPM_TX_SLAVE_SC_TIMER_RSVD2_RSVD"
#define device_bar_CAVM_MCSX_CPM_TX_SLAVE_SC_TIMER_RSVD2_RSVD(a) 0x0 /* PF_BAR0 */
#define busnum_CAVM_MCSX_CPM_TX_SLAVE_SC_TIMER_RSVD2_RSVD(a) (a)
#define arguments_CAVM_MCSX_CPM_TX_SLAVE_SC_TIMER_RSVD2_RSVD(a) (a),-1,-1,-1

/**
 * Register (RSL) mcs#_cpm_tx_slave_sc_timer_timeout_thresh#_rsvd
 *
 * INTERNAL: MCS Cpm Tx Slave Sc Timer Timeout Thresh Register
 *
 * One of 4 configurable thresholds which can be used to generate an interrupt if the
 * corresponding SC's timer reaches the selected threshold.
 * This register is used in the SC/SA timer expiry mechanism.
 */
union cavm_mcsx_cpm_tx_slave_sc_timer_timeout_threshx_rsvd
{
    uint64_t u;
    struct cavm_mcsx_cpm_tx_slave_sc_timer_timeout_threshx_rsvd_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_32_63        : 32;
        uint64_t threshold             : 32; /**< [ 31:  0](R/W) Reserved. */
#else /* Word 0 - Little Endian */
        uint64_t threshold             : 32; /**< [ 31:  0](R/W) Reserved. */
        uint64_t reserved_32_63        : 32;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_mcsx_cpm_tx_slave_sc_timer_timeout_threshx_rsvd_s cn; */
};
typedef union cavm_mcsx_cpm_tx_slave_sc_timer_timeout_threshx_rsvd cavm_mcsx_cpm_tx_slave_sc_timer_timeout_threshx_rsvd_t;

static inline uint64_t CAVM_MCSX_CPM_TX_SLAVE_SC_TIMER_TIMEOUT_THRESHX_RSVD(uint64_t a, uint64_t b) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_MCSX_CPM_TX_SLAVE_SC_TIMER_TIMEOUT_THRESHX_RSVD(uint64_t a, uint64_t b)
{
    if (cavm_is_model(OCTEONTX_CNF10KB) && ((a<=6) && (b<=3)))
        return 0x87e08000b7e8ll + 0x1000000ll * ((a) & 0x7) + 8ll * ((b) & 0x3);
    __cavm_csr_fatal("MCSX_CPM_TX_SLAVE_SC_TIMER_TIMEOUT_THRESHX_RSVD", 2, a, b, 0, 0, 0, 0);
}

#define typedef_CAVM_MCSX_CPM_TX_SLAVE_SC_TIMER_TIMEOUT_THRESHX_RSVD(a,b) cavm_mcsx_cpm_tx_slave_sc_timer_timeout_threshx_rsvd_t
#define bustype_CAVM_MCSX_CPM_TX_SLAVE_SC_TIMER_TIMEOUT_THRESHX_RSVD(a,b) CSR_TYPE_RSL
#define basename_CAVM_MCSX_CPM_TX_SLAVE_SC_TIMER_TIMEOUT_THRESHX_RSVD(a,b) "MCSX_CPM_TX_SLAVE_SC_TIMER_TIMEOUT_THRESHX_RSVD"
#define device_bar_CAVM_MCSX_CPM_TX_SLAVE_SC_TIMER_TIMEOUT_THRESHX_RSVD(a,b) 0x0 /* PF_BAR0 */
#define busnum_CAVM_MCSX_CPM_TX_SLAVE_SC_TIMER_TIMEOUT_THRESHX_RSVD(a,b) (a)
#define arguments_CAVM_MCSX_CPM_TX_SLAVE_SC_TIMER_TIMEOUT_THRESHX_RSVD(a,b) (a),(b),-1,-1

/**
 * Register (RSL) mcs#_cpm_tx_slave_secy_map_mem_0#
 *
 * MCS Cpm Tx Slave Secy Map Mem 0 Register
 * SecY MAP Memory - 64x78 : (aka Flow-ID policy/map).  The matching index obtained
 * from the Flow-ID TCAM is used to obtain a corresponding Flow-ID policy from this
 * memory.  This table supports an N:1 mapping of Flow-IDs to SecY policies. The Flow-
 * ID Map is also used to identify control packets per Flow-ID based on a more
 * complicated set of lookups than is provided by the rules based control packet
 * classifier.
 */
union cavm_mcsx_cpm_tx_slave_secy_map_mem_0x
{
    uint64_t u;
    struct cavm_mcsx_cpm_tx_slave_secy_map_mem_0x_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t sectag_sci            : 64; /**< [ 63:  0](R/W) Identifies the SecTAG SCI for this Flow. */
#else /* Word 0 - Little Endian */
        uint64_t sectag_sci            : 64; /**< [ 63:  0](R/W) Identifies the SecTAG SCI for this Flow. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_mcsx_cpm_tx_slave_secy_map_mem_0x_s cn; */
};
typedef union cavm_mcsx_cpm_tx_slave_secy_map_mem_0x cavm_mcsx_cpm_tx_slave_secy_map_mem_0x_t;

static inline uint64_t CAVM_MCSX_CPM_TX_SLAVE_SECY_MAP_MEM_0X(uint64_t a, uint64_t b) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_MCSX_CPM_TX_SLAVE_SECY_MAP_MEM_0X(uint64_t a, uint64_t b)
{
    if (cavm_is_model(OCTEONTX_CNF10KB) && ((a<=6) && (b<=63)))
        return 0x87e080005550ll + 0x1000000ll * ((a) & 0x7) + 0x10ll * ((b) & 0x3f);
    __cavm_csr_fatal("MCSX_CPM_TX_SLAVE_SECY_MAP_MEM_0X", 2, a, b, 0, 0, 0, 0);
}

#define typedef_CAVM_MCSX_CPM_TX_SLAVE_SECY_MAP_MEM_0X(a,b) cavm_mcsx_cpm_tx_slave_secy_map_mem_0x_t
#define bustype_CAVM_MCSX_CPM_TX_SLAVE_SECY_MAP_MEM_0X(a,b) CSR_TYPE_RSL
#define basename_CAVM_MCSX_CPM_TX_SLAVE_SECY_MAP_MEM_0X(a,b) "MCSX_CPM_TX_SLAVE_SECY_MAP_MEM_0X"
#define device_bar_CAVM_MCSX_CPM_TX_SLAVE_SECY_MAP_MEM_0X(a,b) 0x0 /* PF_BAR0 */
#define busnum_CAVM_MCSX_CPM_TX_SLAVE_SECY_MAP_MEM_0X(a,b) (a)
#define arguments_CAVM_MCSX_CPM_TX_SLAVE_SECY_MAP_MEM_0X(a,b) (a),(b),-1,-1

/**
 * Register (RSL) mcs#_cpm_tx_slave_secy_map_mem_1#
 *
 * MCS Cpm Tx Slave Secy Map Mem 1 Register
 * SecY MAP Memory - 64x78 : (aka Flow-ID policy/map).  The matching index obtained
 * from the Flow-ID TCAM is used to obtain a corresponding Flow-ID policy from this
 * memory.  This table supports an N:1 mapping of Flow-IDs to SecY policies. The Flow-
 * ID Map is also used to identify control packets per Flow-ID based on a more
 * complicated set of lookups than is provided by the rules based control packet
 * classifier.
 */
union cavm_mcsx_cpm_tx_slave_secy_map_mem_1x
{
    uint64_t u;
    struct cavm_mcsx_cpm_tx_slave_secy_map_mem_1x_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_14_63        : 50;
        uint64_t auxiliary_plcy        : 1;  /**< [ 13: 13](R/W) Auxiliary policy bits.  MCS outputs the auxiliary bits to downstream for
                                                                 external functions such as Non-Disruptive Loopback (NDL). */
        uint64_t sc                    : 6;  /**< [ 12:  7](R/W) Identifies the SC for this Flow. */
        uint64_t ctrl_pkt              : 1;  /**< [  6:  6](R/W) Identifies all packets matching the associated Flow-ID lookup as control packets. */
        uint64_t secy                  : 6;  /**< [  5:  0](R/W) Identifies the SecY for this Flow. */
#else /* Word 0 - Little Endian */
        uint64_t secy                  : 6;  /**< [  5:  0](R/W) Identifies the SecY for this Flow. */
        uint64_t ctrl_pkt              : 1;  /**< [  6:  6](R/W) Identifies all packets matching the associated Flow-ID lookup as control packets. */
        uint64_t sc                    : 6;  /**< [ 12:  7](R/W) Identifies the SC for this Flow. */
        uint64_t auxiliary_plcy        : 1;  /**< [ 13: 13](R/W) Auxiliary policy bits.  MCS outputs the auxiliary bits to downstream for
                                                                 external functions such as Non-Disruptive Loopback (NDL). */
        uint64_t reserved_14_63        : 50;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_mcsx_cpm_tx_slave_secy_map_mem_1x_s cn; */
};
typedef union cavm_mcsx_cpm_tx_slave_secy_map_mem_1x cavm_mcsx_cpm_tx_slave_secy_map_mem_1x_t;

static inline uint64_t CAVM_MCSX_CPM_TX_SLAVE_SECY_MAP_MEM_1X(uint64_t a, uint64_t b) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_MCSX_CPM_TX_SLAVE_SECY_MAP_MEM_1X(uint64_t a, uint64_t b)
{
    if (cavm_is_model(OCTEONTX_CNF10KB) && ((a<=6) && (b<=63)))
        return 0x87e080005558ll + 0x1000000ll * ((a) & 0x7) + 0x10ll * ((b) & 0x3f);
    __cavm_csr_fatal("MCSX_CPM_TX_SLAVE_SECY_MAP_MEM_1X", 2, a, b, 0, 0, 0, 0);
}

#define typedef_CAVM_MCSX_CPM_TX_SLAVE_SECY_MAP_MEM_1X(a,b) cavm_mcsx_cpm_tx_slave_secy_map_mem_1x_t
#define bustype_CAVM_MCSX_CPM_TX_SLAVE_SECY_MAP_MEM_1X(a,b) CSR_TYPE_RSL
#define basename_CAVM_MCSX_CPM_TX_SLAVE_SECY_MAP_MEM_1X(a,b) "MCSX_CPM_TX_SLAVE_SECY_MAP_MEM_1X"
#define device_bar_CAVM_MCSX_CPM_TX_SLAVE_SECY_MAP_MEM_1X(a,b) 0x0 /* PF_BAR0 */
#define busnum_CAVM_MCSX_CPM_TX_SLAVE_SECY_MAP_MEM_1X(a,b) (a)
#define arguments_CAVM_MCSX_CPM_TX_SLAVE_SECY_MAP_MEM_1X(a,b) (a),(b),-1,-1

/**
 * Register (RSL) mcs#_cpm_tx_slave_secy_plcy_mem#
 *
 * MCS Cpm Tx Slave Secy Plcy Mem Register
 * SecY Policy Memory - 64x44 : The SecY Policy Table is indexed by the SecY obtained
 * from the SecY Map table (aka Flow-ID policy/map) above.  Each entry consists of the
 * following information:
 */
union cavm_mcsx_cpm_tx_slave_secy_plcy_memx
{
    uint64_t u;
    struct cavm_mcsx_cpm_tx_slave_secy_plcy_memx_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t mtu                   : 16; /**< [ 63: 48](R/W) Reserved.
                                                                 Internal:
                                                                 Specifies the outgoing maximum transmission unit (MTU) in bytes for this SecY.
                                                                 The MTU must be checked on egress to ensure compliance with the configured MTU
                                                                 due to the expansion that occurs because of inserting the SecTag and ICV into
                                                                 the frame. MTU violation causes CRC corruption in the outgoing frame. The MTU is
                                                                 checked on EOP by comparing this value against the actual computed packet
                                                                 length. Violation causes the packet to be truncated and EOP-errored.  Note that
                                                                 the maximum legal value is (2^16)-1 */
        uint64_t reserved_46_47        : 2;
        uint64_t sectag_tci            : 6;  /**< [ 45: 40](R/W) Tag Control Information excluding the AN field which originates from the SA
                                                                 Policy table. This field is inserted into the SecTag of the outgoing packet. */
        uint64_t reserved_39           : 1;
        uint64_t sectag_offset         : 7;  /**< [ 38: 32](R/W) SecTag can only be inserted into the first 128B of the frame.
                                                                 If sectag_insert_mode is set to "Relative Offset Mode":
                                                                    This field defines the offset in bytes from a matching Etype
                                                                 If sectag_insert_mode is set to "Fixed Offset Mode":
                                                                    This field defines the offset in bytes from from the start of the MAC_DA of the packet.
                                                                    If an 8B prepended header is present, then the CPM will add the 8 to this
                                                                 field before sending to the BBE. */
        uint64_t reserved_31           : 1;
        uint64_t sectag_insert_mode    : 1;  /**< [ 30: 30](R/W) Defines how to handle SecTag insertion on egress. 0= SecTag is inserted at
                                                                 SecTag_Offset bytes following an E-Type matching a special E-Type value
                                                                 (Relative Offset Mode).
                                                                 1= SecTag is inserted at SecTag_Offset bytes from the first byte of the outer DA
                                                                 (Fixed Offset Mode). */
        uint64_t reserved_29           : 1;
        uint64_t icv_includes_da_sa    : 1;  /**< [ 28: 28](R/W) When set, the outer DA/SA bytes are included in the authentication GHASH calculation.
                                                                 Both standard MACsec and WAN based MACsec with VLAN tags in the clear require
                                                                 the DA+SA to be included in the authentication.
                                                                 WAN based MPLS MACsec would typically have the DA+SA excluded from
                                                                 authentication since these fields can be modified by the NextHop lookup in MPLS
                                                                 routers. */
        uint64_t reserved_27           : 1;
        uint64_t confidentiality_offset : 7; /**< [ 26: 20](R/W) Defines the number of bytes that are unencrypted following the SecTag. */
        uint64_t reserved_16_19        : 4;
        uint64_t cipher                : 4;  /**< [ 15: 12](R/W) Defines the cipher suite to use for this SecY
                                                                 This is an enum with the following supported options:
                                                                 0= GCM-AES-128
                                                                 1= GCM-AES-256
                                                                 2= GCM-AES-XPN-128
                                                                 3= GCM-AES-XPN-256 */
        uint64_t reserved_5_11         : 7;
        uint64_t protect_frames        : 1;  /**< [  4:  4](R/W) 0 = do not encrypt or authenticate this packet
                                                                 1 = always Authenticate frame and if SecTag.TCI.E = 1 encrypt the packet as well. */
        uint64_t reserved_1_3          : 3;
        uint64_t controlled_port_enabled : 1;/**< [  0:  0](R/W) Enable (or disable) operation of the Controlled port associated with this SecY.
                                                                 This can be used to disable the Controlled port and drop all data packets until
                                                                 the secure connectivity has been fully established. */
#else /* Word 0 - Little Endian */
        uint64_t controlled_port_enabled : 1;/**< [  0:  0](R/W) Enable (or disable) operation of the Controlled port associated with this SecY.
                                                                 This can be used to disable the Controlled port and drop all data packets until
                                                                 the secure connectivity has been fully established. */
        uint64_t reserved_1_3          : 3;
        uint64_t protect_frames        : 1;  /**< [  4:  4](R/W) 0 = do not encrypt or authenticate this packet
                                                                 1 = always Authenticate frame and if SecTag.TCI.E = 1 encrypt the packet as well. */
        uint64_t reserved_5_11         : 7;
        uint64_t cipher                : 4;  /**< [ 15: 12](R/W) Defines the cipher suite to use for this SecY
                                                                 This is an enum with the following supported options:
                                                                 0= GCM-AES-128
                                                                 1= GCM-AES-256
                                                                 2= GCM-AES-XPN-128
                                                                 3= GCM-AES-XPN-256 */
        uint64_t reserved_16_19        : 4;
        uint64_t confidentiality_offset : 7; /**< [ 26: 20](R/W) Defines the number of bytes that are unencrypted following the SecTag. */
        uint64_t reserved_27           : 1;
        uint64_t icv_includes_da_sa    : 1;  /**< [ 28: 28](R/W) When set, the outer DA/SA bytes are included in the authentication GHASH calculation.
                                                                 Both standard MACsec and WAN based MACsec with VLAN tags in the clear require
                                                                 the DA+SA to be included in the authentication.
                                                                 WAN based MPLS MACsec would typically have the DA+SA excluded from
                                                                 authentication since these fields can be modified by the NextHop lookup in MPLS
                                                                 routers. */
        uint64_t reserved_29           : 1;
        uint64_t sectag_insert_mode    : 1;  /**< [ 30: 30](R/W) Defines how to handle SecTag insertion on egress. 0= SecTag is inserted at
                                                                 SecTag_Offset bytes following an E-Type matching a special E-Type value
                                                                 (Relative Offset Mode).
                                                                 1= SecTag is inserted at SecTag_Offset bytes from the first byte of the outer DA
                                                                 (Fixed Offset Mode). */
        uint64_t reserved_31           : 1;
        uint64_t sectag_offset         : 7;  /**< [ 38: 32](R/W) SecTag can only be inserted into the first 128B of the frame.
                                                                 If sectag_insert_mode is set to "Relative Offset Mode":
                                                                    This field defines the offset in bytes from a matching Etype
                                                                 If sectag_insert_mode is set to "Fixed Offset Mode":
                                                                    This field defines the offset in bytes from from the start of the MAC_DA of the packet.
                                                                    If an 8B prepended header is present, then the CPM will add the 8 to this
                                                                 field before sending to the BBE. */
        uint64_t reserved_39           : 1;
        uint64_t sectag_tci            : 6;  /**< [ 45: 40](R/W) Tag Control Information excluding the AN field which originates from the SA
                                                                 Policy table. This field is inserted into the SecTag of the outgoing packet. */
        uint64_t reserved_46_47        : 2;
        uint64_t mtu                   : 16; /**< [ 63: 48](R/W) Reserved.
                                                                 Internal:
                                                                 Specifies the outgoing maximum transmission unit (MTU) in bytes for this SecY.
                                                                 The MTU must be checked on egress to ensure compliance with the configured MTU
                                                                 due to the expansion that occurs because of inserting the SecTag and ICV into
                                                                 the frame. MTU violation causes CRC corruption in the outgoing frame. The MTU is
                                                                 checked on EOP by comparing this value against the actual computed packet
                                                                 length. Violation causes the packet to be truncated and EOP-errored.  Note that
                                                                 the maximum legal value is (2^16)-1 */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_mcsx_cpm_tx_slave_secy_plcy_memx_s cn; */
};
typedef union cavm_mcsx_cpm_tx_slave_secy_plcy_memx cavm_mcsx_cpm_tx_slave_secy_plcy_memx_t;

static inline uint64_t CAVM_MCSX_CPM_TX_SLAVE_SECY_PLCY_MEMX(uint64_t a, uint64_t b) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_MCSX_CPM_TX_SLAVE_SECY_PLCY_MEMX(uint64_t a, uint64_t b)
{
    if (cavm_is_model(OCTEONTX_CNF10KB) && ((a<=6) && (b<=63)))
        return 0x87e080005950ll + 0x1000000ll * ((a) & 0x7) + 8ll * ((b) & 0x3f);
    __cavm_csr_fatal("MCSX_CPM_TX_SLAVE_SECY_PLCY_MEMX", 2, a, b, 0, 0, 0, 0);
}

#define typedef_CAVM_MCSX_CPM_TX_SLAVE_SECY_PLCY_MEMX(a,b) cavm_mcsx_cpm_tx_slave_secy_plcy_memx_t
#define bustype_CAVM_MCSX_CPM_TX_SLAVE_SECY_PLCY_MEMX(a,b) CSR_TYPE_RSL
#define basename_CAVM_MCSX_CPM_TX_SLAVE_SECY_PLCY_MEMX(a,b) "MCSX_CPM_TX_SLAVE_SECY_PLCY_MEMX"
#define device_bar_CAVM_MCSX_CPM_TX_SLAVE_SECY_PLCY_MEMX(a,b) 0x0 /* PF_BAR0 */
#define busnum_CAVM_MCSX_CPM_TX_SLAVE_SECY_PLCY_MEMX(a,b) (a)
#define arguments_CAVM_MCSX_CPM_TX_SLAVE_SECY_PLCY_MEMX(a,b) (a),(b),-1,-1

/**
 * Register (RSL) mcs#_cpm_tx_slave_time_unit_tick_rsvd
 *
 * INTERNAL: MCS Cpm Tx Slave Time Unit Tick Register
 *
 * Configures the duration of the time unit tick in terms of the number of core clock cycles.
 * This register is used in the SC/SA timer expiry mechanism.
 */
union cavm_mcsx_cpm_tx_slave_time_unit_tick_rsvd
{
    uint64_t u;
    struct cavm_mcsx_cpm_tx_slave_time_unit_tick_rsvd_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_32_63        : 32;
        uint64_t num_cycles            : 32; /**< [ 31:  0](R/W) Reserved. */
#else /* Word 0 - Little Endian */
        uint64_t num_cycles            : 32; /**< [ 31:  0](R/W) Reserved. */
        uint64_t reserved_32_63        : 32;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_mcsx_cpm_tx_slave_time_unit_tick_rsvd_s cn; */
};
typedef union cavm_mcsx_cpm_tx_slave_time_unit_tick_rsvd cavm_mcsx_cpm_tx_slave_time_unit_tick_rsvd_t;

static inline uint64_t CAVM_MCSX_CPM_TX_SLAVE_TIME_UNIT_TICK_RSVD(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_MCSX_CPM_TX_SLAVE_TIME_UNIT_TICK_RSVD(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CNF10KB) && (a<=6))
        return 0x87e08000b7c0ll + 0x1000000ll * ((a) & 0x7);
    __cavm_csr_fatal("MCSX_CPM_TX_SLAVE_TIME_UNIT_TICK_RSVD", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_MCSX_CPM_TX_SLAVE_TIME_UNIT_TICK_RSVD(a) cavm_mcsx_cpm_tx_slave_time_unit_tick_rsvd_t
#define bustype_CAVM_MCSX_CPM_TX_SLAVE_TIME_UNIT_TICK_RSVD(a) CSR_TYPE_RSL
#define basename_CAVM_MCSX_CPM_TX_SLAVE_TIME_UNIT_TICK_RSVD(a) "MCSX_CPM_TX_SLAVE_TIME_UNIT_TICK_RSVD"
#define device_bar_CAVM_MCSX_CPM_TX_SLAVE_TIME_UNIT_TICK_RSVD(a) 0x0 /* PF_BAR0 */
#define busnum_CAVM_MCSX_CPM_TX_SLAVE_TIME_UNIT_TICK_RSVD(a) (a)
#define arguments_CAVM_MCSX_CPM_TX_SLAVE_TIME_UNIT_TICK_RSVD(a) (a),-1,-1,-1

/**
 * Register (RSL) mcs#_cpm_tx_slave_tx_flowid_tcam_enable_0
 *
 * MCS Cpm Tx Slave Tx Flowid Tcam Enable 0 Register
 * Flow ID TCAM enable: For a TCAM entry to be considered in the search/compare
 * function, the corresponding TCAM entry must be enabled (set to 1).  When disabled,
 * the corresponding TCAM entry is ignored in the search/compare.
 */
union cavm_mcsx_cpm_tx_slave_tx_flowid_tcam_enable_0
{
    uint64_t u;
    struct cavm_mcsx_cpm_tx_slave_tx_flowid_tcam_enable_0_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t enable                : 64; /**< [ 63:  0](R/W) Set to 1 to enable the corresponding TCAM entry to be part of the TCAM search/compare. */
#else /* Word 0 - Little Endian */
        uint64_t enable                : 64; /**< [ 63:  0](R/W) Set to 1 to enable the corresponding TCAM entry to be part of the TCAM search/compare. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_mcsx_cpm_tx_slave_tx_flowid_tcam_enable_0_s cn; */
};
typedef union cavm_mcsx_cpm_tx_slave_tx_flowid_tcam_enable_0 cavm_mcsx_cpm_tx_slave_tx_flowid_tcam_enable_0_t;

static inline uint64_t CAVM_MCSX_CPM_TX_SLAVE_TX_FLOWID_TCAM_ENABLE_0(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_MCSX_CPM_TX_SLAVE_TX_FLOWID_TCAM_ENABLE_0(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CNF10KB) && (a<=6))
        return 0x87e08000a7a0ll + 0x1000000ll * ((a) & 0x7);
    __cavm_csr_fatal("MCSX_CPM_TX_SLAVE_TX_FLOWID_TCAM_ENABLE_0", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_MCSX_CPM_TX_SLAVE_TX_FLOWID_TCAM_ENABLE_0(a) cavm_mcsx_cpm_tx_slave_tx_flowid_tcam_enable_0_t
#define bustype_CAVM_MCSX_CPM_TX_SLAVE_TX_FLOWID_TCAM_ENABLE_0(a) CSR_TYPE_RSL
#define basename_CAVM_MCSX_CPM_TX_SLAVE_TX_FLOWID_TCAM_ENABLE_0(a) "MCSX_CPM_TX_SLAVE_TX_FLOWID_TCAM_ENABLE_0"
#define device_bar_CAVM_MCSX_CPM_TX_SLAVE_TX_FLOWID_TCAM_ENABLE_0(a) 0x0 /* PF_BAR0 */
#define busnum_CAVM_MCSX_CPM_TX_SLAVE_TX_FLOWID_TCAM_ENABLE_0(a) (a)
#define arguments_CAVM_MCSX_CPM_TX_SLAVE_TX_FLOWID_TCAM_ENABLE_0(a) (a),-1,-1,-1

/**
 * Register (RSL) mcs#_cpm_tx_slave_tx_port_cfg#
 *
 * MCS Cpm Tx Slave Tx Port Cfg Register
 * Port specific configuration.
 */
union cavm_mcsx_cpm_tx_slave_tx_port_cfgx
{
    uint64_t u;
    struct cavm_mcsx_cpm_tx_slave_tx_port_cfgx_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_16_63        : 48;
        uint64_t sectag_etype          : 16; /**< [ 15:  0](R/W) MACSec SecTag ETYPE for insertion on corresponding port. */
#else /* Word 0 - Little Endian */
        uint64_t sectag_etype          : 16; /**< [ 15:  0](R/W) MACSec SecTag ETYPE for insertion on corresponding port. */
        uint64_t reserved_16_63        : 48;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_mcsx_cpm_tx_slave_tx_port_cfgx_s cn; */
};
typedef union cavm_mcsx_cpm_tx_slave_tx_port_cfgx cavm_mcsx_cpm_tx_slave_tx_port_cfgx_t;

static inline uint64_t CAVM_MCSX_CPM_TX_SLAVE_TX_PORT_CFGX(uint64_t a, uint64_t b) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_MCSX_CPM_TX_SLAVE_TX_PORT_CFGX(uint64_t a, uint64_t b)
{
    if (cavm_is_model(OCTEONTX_CNF10KB) && ((a<=6) && (b<=3)))
        return 0x87e080005508ll + 0x1000000ll * ((a) & 0x7) + 8ll * ((b) & 0x3);
    __cavm_csr_fatal("MCSX_CPM_TX_SLAVE_TX_PORT_CFGX", 2, a, b, 0, 0, 0, 0);
}

#define typedef_CAVM_MCSX_CPM_TX_SLAVE_TX_PORT_CFGX(a,b) cavm_mcsx_cpm_tx_slave_tx_port_cfgx_t
#define bustype_CAVM_MCSX_CPM_TX_SLAVE_TX_PORT_CFGX(a,b) CSR_TYPE_RSL
#define basename_CAVM_MCSX_CPM_TX_SLAVE_TX_PORT_CFGX(a,b) "MCSX_CPM_TX_SLAVE_TX_PORT_CFGX"
#define device_bar_CAVM_MCSX_CPM_TX_SLAVE_TX_PORT_CFGX(a,b) 0x0 /* PF_BAR0 */
#define busnum_CAVM_MCSX_CPM_TX_SLAVE_TX_PORT_CFGX(a,b) (a)
#define arguments_CAVM_MCSX_CPM_TX_SLAVE_TX_PORT_CFGX(a,b) (a),(b),-1,-1

/**
 * Register (RSL) mcs#_cpm_tx_slave_tx_sa_active#
 *
 * MCS Cpm Tx Slave Tx Sa Active Register
 * Per SC, SA Active indicator determines which of 2 possible SAs associated to the
 * corresponding SC is currently the active SA. If set, then sa_index1 (SA MAP memory)
 * is the currently active SA index.  If cleared, the sa_index0 (SA MAP memory) is the
 * currently active SA index).
 */
union cavm_mcsx_cpm_tx_slave_tx_sa_activex
{
    uint64_t u;
    struct cavm_mcsx_cpm_tx_slave_tx_sa_activex_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_1_63         : 63;
        uint64_t tx_sa_active          : 1;  /**< [  0:  0](R/W) Per SC, SA Active indicator determines which of 2 possible SAs associated to the
                                                                 corresponding SC is currently the active SA. If set, then sa_index1 (SA MAP
                                                                 memory) is the currently active SA index.  If cleared, the sa_index0 (SA MAP
                                                                 memory) is the currently active SA index). */
#else /* Word 0 - Little Endian */
        uint64_t tx_sa_active          : 1;  /**< [  0:  0](R/W) Per SC, SA Active indicator determines which of 2 possible SAs associated to the
                                                                 corresponding SC is currently the active SA. If set, then sa_index1 (SA MAP
                                                                 memory) is the currently active SA index.  If cleared, the sa_index0 (SA MAP
                                                                 memory) is the currently active SA index). */
        uint64_t reserved_1_63         : 63;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_mcsx_cpm_tx_slave_tx_sa_activex_s cn; */
};
typedef union cavm_mcsx_cpm_tx_slave_tx_sa_activex cavm_mcsx_cpm_tx_slave_tx_sa_activex_t;

static inline uint64_t CAVM_MCSX_CPM_TX_SLAVE_TX_SA_ACTIVEX(uint64_t a, uint64_t b) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_MCSX_CPM_TX_SLAVE_TX_SA_ACTIVEX(uint64_t a, uint64_t b)
{
    if (cavm_is_model(OCTEONTX_CNF10KB) && ((a<=6) && (b<=63)))
        return 0x87e080005b50ll + 0x1000000ll * ((a) & 0x7) + 8ll * ((b) & 0x3f);
    __cavm_csr_fatal("MCSX_CPM_TX_SLAVE_TX_SA_ACTIVEX", 2, a, b, 0, 0, 0, 0);
}

#define typedef_CAVM_MCSX_CPM_TX_SLAVE_TX_SA_ACTIVEX(a,b) cavm_mcsx_cpm_tx_slave_tx_sa_activex_t
#define bustype_CAVM_MCSX_CPM_TX_SLAVE_TX_SA_ACTIVEX(a,b) CSR_TYPE_RSL
#define basename_CAVM_MCSX_CPM_TX_SLAVE_TX_SA_ACTIVEX(a,b) "MCSX_CPM_TX_SLAVE_TX_SA_ACTIVEX"
#define device_bar_CAVM_MCSX_CPM_TX_SLAVE_TX_SA_ACTIVEX(a,b) 0x0 /* PF_BAR0 */
#define busnum_CAVM_MCSX_CPM_TX_SLAVE_TX_SA_ACTIVEX(a,b) (a)
#define arguments_CAVM_MCSX_CPM_TX_SLAVE_TX_SA_ACTIVEX(a,b) (a),(b),-1,-1

/**
 * Register (RSL) mcs#_cpm_tx_slave_xpn_threshold
 *
 * MCS Cpm Tx Slave Xpn Threshold Register
 * XPN Mode Threshold: 64b XPN threshold to trigger interrupt if enabled.  The
 * interrupt fires when the transmitted packet's 64b XPN greater than=
 * {xpn_threshold_msb, xpn_threshold_lsb}.
 */
union cavm_mcsx_cpm_tx_slave_xpn_threshold
{
    uint64_t u;
    struct cavm_mcsx_cpm_tx_slave_xpn_threshold_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t xpn_threshold_msb     : 32; /**< [ 63: 32](R/W) 32 MSB of the 64b xpn_threshold. */
        uint64_t xpn_threshold_lsb     : 32; /**< [ 31:  0](R/W) 32 LSB of the 64b xpn_threshold. */
#else /* Word 0 - Little Endian */
        uint64_t xpn_threshold_lsb     : 32; /**< [ 31:  0](R/W) 32 LSB of the 64b xpn_threshold. */
        uint64_t xpn_threshold_msb     : 32; /**< [ 63: 32](R/W) 32 MSB of the 64b xpn_threshold. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_mcsx_cpm_tx_slave_xpn_threshold_s cn; */
};
typedef union cavm_mcsx_cpm_tx_slave_xpn_threshold cavm_mcsx_cpm_tx_slave_xpn_threshold_t;

static inline uint64_t CAVM_MCSX_CPM_TX_SLAVE_XPN_THRESHOLD(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_MCSX_CPM_TX_SLAVE_XPN_THRESHOLD(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CNF10KB) && (a<=6))
        return 0x87e080005528ll + 0x1000000ll * ((a) & 0x7);
    __cavm_csr_fatal("MCSX_CPM_TX_SLAVE_XPN_THRESHOLD", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_MCSX_CPM_TX_SLAVE_XPN_THRESHOLD(a) cavm_mcsx_cpm_tx_slave_xpn_threshold_t
#define bustype_CAVM_MCSX_CPM_TX_SLAVE_XPN_THRESHOLD(a) CSR_TYPE_RSL
#define basename_CAVM_MCSX_CPM_TX_SLAVE_XPN_THRESHOLD(a) "MCSX_CPM_TX_SLAVE_XPN_THRESHOLD"
#define device_bar_CAVM_MCSX_CPM_TX_SLAVE_XPN_THRESHOLD(a) 0x0 /* PF_BAR0 */
#define busnum_CAVM_MCSX_CPM_TX_SLAVE_XPN_THRESHOLD(a) (a)
#define arguments_CAVM_MCSX_CPM_TX_SLAVE_XPN_THRESHOLD(a) (a),-1,-1,-1

/**
 * Register (RSL) mcs#_cse_rx_mem_slave_ifinctlbcpkts#
 *
 * MCS Cse Rx Mem Slave Ifinctlbcpkts Register
 * Broadcast packets permitted by the controlled port policies of this SecY
 */
union cavm_mcsx_cse_rx_mem_slave_ifinctlbcpktsx
{
    uint64_t u;
    struct cavm_mcsx_cse_rx_mem_slave_ifinctlbcpktsx_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t rx_ctl_pkt_bcast_cnt  : 64; /**< [ 63:  0](R/W) Ingress Broadcast packet count value for controlled ports of this SecY. */
#else /* Word 0 - Little Endian */
        uint64_t rx_ctl_pkt_bcast_cnt  : 64; /**< [ 63:  0](R/W) Ingress Broadcast packet count value for controlled ports of this SecY. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_mcsx_cse_rx_mem_slave_ifinctlbcpktsx_s cn; */
};
typedef union cavm_mcsx_cse_rx_mem_slave_ifinctlbcpktsx cavm_mcsx_cse_rx_mem_slave_ifinctlbcpktsx_t;

static inline uint64_t CAVM_MCSX_CSE_RX_MEM_SLAVE_IFINCTLBCPKTSX(uint64_t a, uint64_t b) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_MCSX_CSE_RX_MEM_SLAVE_IFINCTLBCPKTSX(uint64_t a, uint64_t b)
{
    if (cavm_is_model(OCTEONTX_CNF10KB) && ((a<=6) && (b<=63)))
        return 0x87e08000c218ll + 0x1000000ll * ((a) & 0x7) + 8ll * ((b) & 0x3f);
    __cavm_csr_fatal("MCSX_CSE_RX_MEM_SLAVE_IFINCTLBCPKTSX", 2, a, b, 0, 0, 0, 0);
}

#define typedef_CAVM_MCSX_CSE_RX_MEM_SLAVE_IFINCTLBCPKTSX(a,b) cavm_mcsx_cse_rx_mem_slave_ifinctlbcpktsx_t
#define bustype_CAVM_MCSX_CSE_RX_MEM_SLAVE_IFINCTLBCPKTSX(a,b) CSR_TYPE_RSL
#define basename_CAVM_MCSX_CSE_RX_MEM_SLAVE_IFINCTLBCPKTSX(a,b) "MCSX_CSE_RX_MEM_SLAVE_IFINCTLBCPKTSX"
#define device_bar_CAVM_MCSX_CSE_RX_MEM_SLAVE_IFINCTLBCPKTSX(a,b) 0x0 /* PF_BAR0 */
#define busnum_CAVM_MCSX_CSE_RX_MEM_SLAVE_IFINCTLBCPKTSX(a,b) (a)
#define arguments_CAVM_MCSX_CSE_RX_MEM_SLAVE_IFINCTLBCPKTSX(a,b) (a),(b),-1,-1

/**
 * Register (RSL) mcs#_cse_rx_mem_slave_ifinctlmcpkts#
 *
 * MCS Cse Rx Mem Slave Ifinctlmcpkts Register
 * Multicast packets permitted by the controlled port policies of this SecY
 */
union cavm_mcsx_cse_rx_mem_slave_ifinctlmcpktsx
{
    uint64_t u;
    struct cavm_mcsx_cse_rx_mem_slave_ifinctlmcpktsx_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t rx_ctl_pkt_mcast_cnt  : 64; /**< [ 63:  0](R/W) Ingress Multicast packet count value for controlled ports of this SecY. */
#else /* Word 0 - Little Endian */
        uint64_t rx_ctl_pkt_mcast_cnt  : 64; /**< [ 63:  0](R/W) Ingress Multicast packet count value for controlled ports of this SecY. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_mcsx_cse_rx_mem_slave_ifinctlmcpktsx_s cn; */
};
typedef union cavm_mcsx_cse_rx_mem_slave_ifinctlmcpktsx cavm_mcsx_cse_rx_mem_slave_ifinctlmcpktsx_t;

static inline uint64_t CAVM_MCSX_CSE_RX_MEM_SLAVE_IFINCTLMCPKTSX(uint64_t a, uint64_t b) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_MCSX_CSE_RX_MEM_SLAVE_IFINCTLMCPKTSX(uint64_t a, uint64_t b)
{
    if (cavm_is_model(OCTEONTX_CNF10KB) && ((a<=6) && (b<=63)))
        return 0x87e08000c018ll + 0x1000000ll * ((a) & 0x7) + 8ll * ((b) & 0x3f);
    __cavm_csr_fatal("MCSX_CSE_RX_MEM_SLAVE_IFINCTLMCPKTSX", 2, a, b, 0, 0, 0, 0);
}

#define typedef_CAVM_MCSX_CSE_RX_MEM_SLAVE_IFINCTLMCPKTSX(a,b) cavm_mcsx_cse_rx_mem_slave_ifinctlmcpktsx_t
#define bustype_CAVM_MCSX_CSE_RX_MEM_SLAVE_IFINCTLMCPKTSX(a,b) CSR_TYPE_RSL
#define basename_CAVM_MCSX_CSE_RX_MEM_SLAVE_IFINCTLMCPKTSX(a,b) "MCSX_CSE_RX_MEM_SLAVE_IFINCTLMCPKTSX"
#define device_bar_CAVM_MCSX_CSE_RX_MEM_SLAVE_IFINCTLMCPKTSX(a,b) 0x0 /* PF_BAR0 */
#define busnum_CAVM_MCSX_CSE_RX_MEM_SLAVE_IFINCTLMCPKTSX(a,b) (a)
#define arguments_CAVM_MCSX_CSE_RX_MEM_SLAVE_IFINCTLMCPKTSX(a,b) (a),(b),-1,-1

/**
 * Register (RSL) mcs#_cse_rx_mem_slave_ifinctloctets#
 *
 * MCS Cse Rx Mem Slave Ifinctloctets Register
 * Total MSDU and MAC-DA/SA Octets that are permitted by the controlled port policies of this SecY.
 */
union cavm_mcsx_cse_rx_mem_slave_ifinctloctetsx
{
    uint64_t u;
    struct cavm_mcsx_cse_rx_mem_slave_ifinctloctetsx_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t rx_ctl_octet_cnt      : 64; /**< [ 63:  0](R/W) Ingress Total MSDU and MAC-DA/SA Octets that are permitted by the controlled
                                                                 port policies of this SecY. */
#else /* Word 0 - Little Endian */
        uint64_t rx_ctl_octet_cnt      : 64; /**< [ 63:  0](R/W) Ingress Total MSDU and MAC-DA/SA Octets that are permitted by the controlled
                                                                 port policies of this SecY. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_mcsx_cse_rx_mem_slave_ifinctloctetsx_s cn; */
};
typedef union cavm_mcsx_cse_rx_mem_slave_ifinctloctetsx cavm_mcsx_cse_rx_mem_slave_ifinctloctetsx_t;

static inline uint64_t CAVM_MCSX_CSE_RX_MEM_SLAVE_IFINCTLOCTETSX(uint64_t a, uint64_t b) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_MCSX_CSE_RX_MEM_SLAVE_IFINCTLOCTETSX(uint64_t a, uint64_t b)
{
    if (cavm_is_model(OCTEONTX_CNF10KB) && ((a<=6) && (b<=63)))
        return 0x87e08000bc18ll + 0x1000000ll * ((a) & 0x7) + 8ll * ((b) & 0x3f);
    __cavm_csr_fatal("MCSX_CSE_RX_MEM_SLAVE_IFINCTLOCTETSX", 2, a, b, 0, 0, 0, 0);
}

#define typedef_CAVM_MCSX_CSE_RX_MEM_SLAVE_IFINCTLOCTETSX(a,b) cavm_mcsx_cse_rx_mem_slave_ifinctloctetsx_t
#define bustype_CAVM_MCSX_CSE_RX_MEM_SLAVE_IFINCTLOCTETSX(a,b) CSR_TYPE_RSL
#define basename_CAVM_MCSX_CSE_RX_MEM_SLAVE_IFINCTLOCTETSX(a,b) "MCSX_CSE_RX_MEM_SLAVE_IFINCTLOCTETSX"
#define device_bar_CAVM_MCSX_CSE_RX_MEM_SLAVE_IFINCTLOCTETSX(a,b) 0x0 /* PF_BAR0 */
#define busnum_CAVM_MCSX_CSE_RX_MEM_SLAVE_IFINCTLOCTETSX(a,b) (a)
#define arguments_CAVM_MCSX_CSE_RX_MEM_SLAVE_IFINCTLOCTETSX(a,b) (a),(b),-1,-1

/**
 * Register (RSL) mcs#_cse_rx_mem_slave_ifinctlucpkts#
 *
 * MCS Cse Rx Mem Slave Ifinctlucpkts Register
 * Unicast packets permitted by the controlled port policies of this SecY
 */
union cavm_mcsx_cse_rx_mem_slave_ifinctlucpktsx
{
    uint64_t u;
    struct cavm_mcsx_cse_rx_mem_slave_ifinctlucpktsx_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t rx_ctl_pkt_ucast_cnt  : 64; /**< [ 63:  0](R/W) Ingress Unicast packet count value for controlled ports of this SecY. */
#else /* Word 0 - Little Endian */
        uint64_t rx_ctl_pkt_ucast_cnt  : 64; /**< [ 63:  0](R/W) Ingress Unicast packet count value for controlled ports of this SecY. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_mcsx_cse_rx_mem_slave_ifinctlucpktsx_s cn; */
};
typedef union cavm_mcsx_cse_rx_mem_slave_ifinctlucpktsx cavm_mcsx_cse_rx_mem_slave_ifinctlucpktsx_t;

static inline uint64_t CAVM_MCSX_CSE_RX_MEM_SLAVE_IFINCTLUCPKTSX(uint64_t a, uint64_t b) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_MCSX_CSE_RX_MEM_SLAVE_IFINCTLUCPKTSX(uint64_t a, uint64_t b)
{
    if (cavm_is_model(OCTEONTX_CNF10KB) && ((a<=6) && (b<=63)))
        return 0x87e08000be18ll + 0x1000000ll * ((a) & 0x7) + 8ll * ((b) & 0x3f);
    __cavm_csr_fatal("MCSX_CSE_RX_MEM_SLAVE_IFINCTLUCPKTSX", 2, a, b, 0, 0, 0, 0);
}

#define typedef_CAVM_MCSX_CSE_RX_MEM_SLAVE_IFINCTLUCPKTSX(a,b) cavm_mcsx_cse_rx_mem_slave_ifinctlucpktsx_t
#define bustype_CAVM_MCSX_CSE_RX_MEM_SLAVE_IFINCTLUCPKTSX(a,b) CSR_TYPE_RSL
#define basename_CAVM_MCSX_CSE_RX_MEM_SLAVE_IFINCTLUCPKTSX(a,b) "MCSX_CSE_RX_MEM_SLAVE_IFINCTLUCPKTSX"
#define device_bar_CAVM_MCSX_CSE_RX_MEM_SLAVE_IFINCTLUCPKTSX(a,b) 0x0 /* PF_BAR0 */
#define busnum_CAVM_MCSX_CSE_RX_MEM_SLAVE_IFINCTLUCPKTSX(a,b) (a)
#define arguments_CAVM_MCSX_CSE_RX_MEM_SLAVE_IFINCTLUCPKTSX(a,b) (a),(b),-1,-1

/**
 * Register (RSL) mcs#_cse_rx_mem_slave_ifinunctlbcpkts#
 *
 * MCS Cse Rx Mem Slave Ifinunctlbcpkts Register
 * Broadcast packets permitted by the uncontrolled port policies of this SecY
 */
union cavm_mcsx_cse_rx_mem_slave_ifinunctlbcpktsx
{
    uint64_t u;
    struct cavm_mcsx_cse_rx_mem_slave_ifinunctlbcpktsx_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t rx_unctl_pkt_bcast_cnt : 64;/**< [ 63:  0](R/W) Ingress Broadcast packet count value for uncontrolled ports of this SecY. */
#else /* Word 0 - Little Endian */
        uint64_t rx_unctl_pkt_bcast_cnt : 64;/**< [ 63:  0](R/W) Ingress Broadcast packet count value for uncontrolled ports of this SecY. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_mcsx_cse_rx_mem_slave_ifinunctlbcpktsx_s cn; */
};
typedef union cavm_mcsx_cse_rx_mem_slave_ifinunctlbcpktsx cavm_mcsx_cse_rx_mem_slave_ifinunctlbcpktsx_t;

static inline uint64_t CAVM_MCSX_CSE_RX_MEM_SLAVE_IFINUNCTLBCPKTSX(uint64_t a, uint64_t b) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_MCSX_CSE_RX_MEM_SLAVE_IFINUNCTLBCPKTSX(uint64_t a, uint64_t b)
{
    if (cavm_is_model(OCTEONTX_CNF10KB) && ((a<=6) && (b<=63)))
        return 0x87e08000ca18ll + 0x1000000ll * ((a) & 0x7) + 8ll * ((b) & 0x3f);
    __cavm_csr_fatal("MCSX_CSE_RX_MEM_SLAVE_IFINUNCTLBCPKTSX", 2, a, b, 0, 0, 0, 0);
}

#define typedef_CAVM_MCSX_CSE_RX_MEM_SLAVE_IFINUNCTLBCPKTSX(a,b) cavm_mcsx_cse_rx_mem_slave_ifinunctlbcpktsx_t
#define bustype_CAVM_MCSX_CSE_RX_MEM_SLAVE_IFINUNCTLBCPKTSX(a,b) CSR_TYPE_RSL
#define basename_CAVM_MCSX_CSE_RX_MEM_SLAVE_IFINUNCTLBCPKTSX(a,b) "MCSX_CSE_RX_MEM_SLAVE_IFINUNCTLBCPKTSX"
#define device_bar_CAVM_MCSX_CSE_RX_MEM_SLAVE_IFINUNCTLBCPKTSX(a,b) 0x0 /* PF_BAR0 */
#define busnum_CAVM_MCSX_CSE_RX_MEM_SLAVE_IFINUNCTLBCPKTSX(a,b) (a)
#define arguments_CAVM_MCSX_CSE_RX_MEM_SLAVE_IFINUNCTLBCPKTSX(a,b) (a),(b),-1,-1

/**
 * Register (RSL) mcs#_cse_rx_mem_slave_ifinunctlmcpkts#
 *
 * MCS Cse Rx Mem Slave Ifinunctlmcpkts Register
 * Multicast packets permitted by the uncontrolled port policies of this SecY
 */
union cavm_mcsx_cse_rx_mem_slave_ifinunctlmcpktsx
{
    uint64_t u;
    struct cavm_mcsx_cse_rx_mem_slave_ifinunctlmcpktsx_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t rx_unctl_pkt_mcast_cnt : 64;/**< [ 63:  0](R/W) Ingress Multicast packet count value for uncontrolled ports of this SecY. */
#else /* Word 0 - Little Endian */
        uint64_t rx_unctl_pkt_mcast_cnt : 64;/**< [ 63:  0](R/W) Ingress Multicast packet count value for uncontrolled ports of this SecY. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_mcsx_cse_rx_mem_slave_ifinunctlmcpktsx_s cn; */
};
typedef union cavm_mcsx_cse_rx_mem_slave_ifinunctlmcpktsx cavm_mcsx_cse_rx_mem_slave_ifinunctlmcpktsx_t;

static inline uint64_t CAVM_MCSX_CSE_RX_MEM_SLAVE_IFINUNCTLMCPKTSX(uint64_t a, uint64_t b) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_MCSX_CSE_RX_MEM_SLAVE_IFINUNCTLMCPKTSX(uint64_t a, uint64_t b)
{
    if (cavm_is_model(OCTEONTX_CNF10KB) && ((a<=6) && (b<=63)))
        return 0x87e08000c818ll + 0x1000000ll * ((a) & 0x7) + 8ll * ((b) & 0x3f);
    __cavm_csr_fatal("MCSX_CSE_RX_MEM_SLAVE_IFINUNCTLMCPKTSX", 2, a, b, 0, 0, 0, 0);
}

#define typedef_CAVM_MCSX_CSE_RX_MEM_SLAVE_IFINUNCTLMCPKTSX(a,b) cavm_mcsx_cse_rx_mem_slave_ifinunctlmcpktsx_t
#define bustype_CAVM_MCSX_CSE_RX_MEM_SLAVE_IFINUNCTLMCPKTSX(a,b) CSR_TYPE_RSL
#define basename_CAVM_MCSX_CSE_RX_MEM_SLAVE_IFINUNCTLMCPKTSX(a,b) "MCSX_CSE_RX_MEM_SLAVE_IFINUNCTLMCPKTSX"
#define device_bar_CAVM_MCSX_CSE_RX_MEM_SLAVE_IFINUNCTLMCPKTSX(a,b) 0x0 /* PF_BAR0 */
#define busnum_CAVM_MCSX_CSE_RX_MEM_SLAVE_IFINUNCTLMCPKTSX(a,b) (a)
#define arguments_CAVM_MCSX_CSE_RX_MEM_SLAVE_IFINUNCTLMCPKTSX(a,b) (a),(b),-1,-1

/**
 * Register (RSL) mcs#_cse_rx_mem_slave_ifinunctloctets#
 *
 * MCS Cse Rx Mem Slave Ifinunctloctets Register
 * Total MSDU and MAC-DA/SA Octets that are permitted by the uncontrolled port policies of this SecY.
 */
union cavm_mcsx_cse_rx_mem_slave_ifinunctloctetsx
{
    uint64_t u;
    struct cavm_mcsx_cse_rx_mem_slave_ifinunctloctetsx_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t rx_unctl_octet_cnt    : 64; /**< [ 63:  0](R/W) Ingress Total MSDU and MAC-DA/SA Octets that are permitted by the uncontrolled
                                                                 port policies of this SecY. */
#else /* Word 0 - Little Endian */
        uint64_t rx_unctl_octet_cnt    : 64; /**< [ 63:  0](R/W) Ingress Total MSDU and MAC-DA/SA Octets that are permitted by the uncontrolled
                                                                 port policies of this SecY. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_mcsx_cse_rx_mem_slave_ifinunctloctetsx_s cn; */
};
typedef union cavm_mcsx_cse_rx_mem_slave_ifinunctloctetsx cavm_mcsx_cse_rx_mem_slave_ifinunctloctetsx_t;

static inline uint64_t CAVM_MCSX_CSE_RX_MEM_SLAVE_IFINUNCTLOCTETSX(uint64_t a, uint64_t b) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_MCSX_CSE_RX_MEM_SLAVE_IFINUNCTLOCTETSX(uint64_t a, uint64_t b)
{
    if (cavm_is_model(OCTEONTX_CNF10KB) && ((a<=6) && (b<=63)))
        return 0x87e08000c418ll + 0x1000000ll * ((a) & 0x7) + 8ll * ((b) & 0x3f);
    __cavm_csr_fatal("MCSX_CSE_RX_MEM_SLAVE_IFINUNCTLOCTETSX", 2, a, b, 0, 0, 0, 0);
}

#define typedef_CAVM_MCSX_CSE_RX_MEM_SLAVE_IFINUNCTLOCTETSX(a,b) cavm_mcsx_cse_rx_mem_slave_ifinunctloctetsx_t
#define bustype_CAVM_MCSX_CSE_RX_MEM_SLAVE_IFINUNCTLOCTETSX(a,b) CSR_TYPE_RSL
#define basename_CAVM_MCSX_CSE_RX_MEM_SLAVE_IFINUNCTLOCTETSX(a,b) "MCSX_CSE_RX_MEM_SLAVE_IFINUNCTLOCTETSX"
#define device_bar_CAVM_MCSX_CSE_RX_MEM_SLAVE_IFINUNCTLOCTETSX(a,b) 0x0 /* PF_BAR0 */
#define busnum_CAVM_MCSX_CSE_RX_MEM_SLAVE_IFINUNCTLOCTETSX(a,b) (a)
#define arguments_CAVM_MCSX_CSE_RX_MEM_SLAVE_IFINUNCTLOCTETSX(a,b) (a),(b),-1,-1

/**
 * Register (RSL) mcs#_cse_rx_mem_slave_ifinunctlucpkts#
 *
 * MCS Cse Rx Mem Slave Ifinunctlucpkts Register
 * Unicast packets permitted by the uncontrolled port policies of this SecY
 */
union cavm_mcsx_cse_rx_mem_slave_ifinunctlucpktsx
{
    uint64_t u;
    struct cavm_mcsx_cse_rx_mem_slave_ifinunctlucpktsx_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t rx_unctl_pkt_ucast_cnt : 64;/**< [ 63:  0](R/W) Ingress Unicast packet count value for uncontrolled ports of this SecY. */
#else /* Word 0 - Little Endian */
        uint64_t rx_unctl_pkt_ucast_cnt : 64;/**< [ 63:  0](R/W) Ingress Unicast packet count value for uncontrolled ports of this SecY. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_mcsx_cse_rx_mem_slave_ifinunctlucpktsx_s cn; */
};
typedef union cavm_mcsx_cse_rx_mem_slave_ifinunctlucpktsx cavm_mcsx_cse_rx_mem_slave_ifinunctlucpktsx_t;

static inline uint64_t CAVM_MCSX_CSE_RX_MEM_SLAVE_IFINUNCTLUCPKTSX(uint64_t a, uint64_t b) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_MCSX_CSE_RX_MEM_SLAVE_IFINUNCTLUCPKTSX(uint64_t a, uint64_t b)
{
    if (cavm_is_model(OCTEONTX_CNF10KB) && ((a<=6) && (b<=63)))
        return 0x87e08000c618ll + 0x1000000ll * ((a) & 0x7) + 8ll * ((b) & 0x3f);
    __cavm_csr_fatal("MCSX_CSE_RX_MEM_SLAVE_IFINUNCTLUCPKTSX", 2, a, b, 0, 0, 0, 0);
}

#define typedef_CAVM_MCSX_CSE_RX_MEM_SLAVE_IFINUNCTLUCPKTSX(a,b) cavm_mcsx_cse_rx_mem_slave_ifinunctlucpktsx_t
#define bustype_CAVM_MCSX_CSE_RX_MEM_SLAVE_IFINUNCTLUCPKTSX(a,b) CSR_TYPE_RSL
#define basename_CAVM_MCSX_CSE_RX_MEM_SLAVE_IFINUNCTLUCPKTSX(a,b) "MCSX_CSE_RX_MEM_SLAVE_IFINUNCTLUCPKTSX"
#define device_bar_CAVM_MCSX_CSE_RX_MEM_SLAVE_IFINUNCTLUCPKTSX(a,b) 0x0 /* PF_BAR0 */
#define busnum_CAVM_MCSX_CSE_RX_MEM_SLAVE_IFINUNCTLUCPKTSX(a,b) (a)
#define arguments_CAVM_MCSX_CSE_RX_MEM_SLAVE_IFINUNCTLUCPKTSX(a,b) (a),(b),-1,-1

/**
 * Register (RSL) mcs#_cse_rx_mem_slave_inoctetssecydecrypted#
 *
 * MCS Cse Rx Mem Slave Inoctetssecydecrypted Register
 * The number of plaintext octets recovered from packets that were integrity protected and encrypted.
 */
union cavm_mcsx_cse_rx_mem_slave_inoctetssecydecryptedx
{
    uint64_t u;
    struct cavm_mcsx_cse_rx_mem_slave_inoctetssecydecryptedx_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t rx_secy_octet_decrypted_cnt : 64;/**< [ 63:  0](R/W) The number of plaintext octets recovered from packets that were integrity protected and encrypted. */
#else /* Word 0 - Little Endian */
        uint64_t rx_secy_octet_decrypted_cnt : 64;/**< [ 63:  0](R/W) The number of plaintext octets recovered from packets that were integrity protected and encrypted. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_mcsx_cse_rx_mem_slave_inoctetssecydecryptedx_s cn; */
};
typedef union cavm_mcsx_cse_rx_mem_slave_inoctetssecydecryptedx cavm_mcsx_cse_rx_mem_slave_inoctetssecydecryptedx_t;

static inline uint64_t CAVM_MCSX_CSE_RX_MEM_SLAVE_INOCTETSSECYDECRYPTEDX(uint64_t a, uint64_t b) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_MCSX_CSE_RX_MEM_SLAVE_INOCTETSSECYDECRYPTEDX(uint64_t a, uint64_t b)
{
    if (cavm_is_model(OCTEONTX_CNF10KB) && ((a<=6) && (b<=63)))
        return 0x87e08000dc18ll + 0x1000000ll * ((a) & 0x7) + 8ll * ((b) & 0x3f);
    __cavm_csr_fatal("MCSX_CSE_RX_MEM_SLAVE_INOCTETSSECYDECRYPTEDX", 2, a, b, 0, 0, 0, 0);
}

#define typedef_CAVM_MCSX_CSE_RX_MEM_SLAVE_INOCTETSSECYDECRYPTEDX(a,b) cavm_mcsx_cse_rx_mem_slave_inoctetssecydecryptedx_t
#define bustype_CAVM_MCSX_CSE_RX_MEM_SLAVE_INOCTETSSECYDECRYPTEDX(a,b) CSR_TYPE_RSL
#define basename_CAVM_MCSX_CSE_RX_MEM_SLAVE_INOCTETSSECYDECRYPTEDX(a,b) "MCSX_CSE_RX_MEM_SLAVE_INOCTETSSECYDECRYPTEDX"
#define device_bar_CAVM_MCSX_CSE_RX_MEM_SLAVE_INOCTETSSECYDECRYPTEDX(a,b) 0x0 /* PF_BAR0 */
#define busnum_CAVM_MCSX_CSE_RX_MEM_SLAVE_INOCTETSSECYDECRYPTEDX(a,b) (a)
#define arguments_CAVM_MCSX_CSE_RX_MEM_SLAVE_INOCTETSSECYDECRYPTEDX(a,b) (a),(b),-1,-1

/**
 * Register (RSL) mcs#_cse_rx_mem_slave_inoctetssecyvalidate#
 *
 * MCS Cse Rx Mem Slave Inoctetssecyvalidate Register
 * The number of plaintext octets recovered from packets that were integrity protected
 * but not encrypted.
 */
union cavm_mcsx_cse_rx_mem_slave_inoctetssecyvalidatex
{
    uint64_t u;
    struct cavm_mcsx_cse_rx_mem_slave_inoctetssecyvalidatex_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t rx_secy_octet_validated_cnt : 64;/**< [ 63:  0](R/W) The number of plaintext octets recovered from packets that were integrity
                                                                 protected but not encrypted. */
#else /* Word 0 - Little Endian */
        uint64_t rx_secy_octet_validated_cnt : 64;/**< [ 63:  0](R/W) The number of plaintext octets recovered from packets that were integrity
                                                                 protected but not encrypted. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_mcsx_cse_rx_mem_slave_inoctetssecyvalidatex_s cn; */
};
typedef union cavm_mcsx_cse_rx_mem_slave_inoctetssecyvalidatex cavm_mcsx_cse_rx_mem_slave_inoctetssecyvalidatex_t;

static inline uint64_t CAVM_MCSX_CSE_RX_MEM_SLAVE_INOCTETSSECYVALIDATEX(uint64_t a, uint64_t b) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_MCSX_CSE_RX_MEM_SLAVE_INOCTETSSECYVALIDATEX(uint64_t a, uint64_t b)
{
    if (cavm_is_model(OCTEONTX_CNF10KB) && ((a<=6) && (b<=63)))
        return 0x87e08000da18ll + 0x1000000ll * ((a) & 0x7) + 8ll * ((b) & 0x3f);
    __cavm_csr_fatal("MCSX_CSE_RX_MEM_SLAVE_INOCTETSSECYVALIDATEX", 2, a, b, 0, 0, 0, 0);
}

#define typedef_CAVM_MCSX_CSE_RX_MEM_SLAVE_INOCTETSSECYVALIDATEX(a,b) cavm_mcsx_cse_rx_mem_slave_inoctetssecyvalidatex_t
#define bustype_CAVM_MCSX_CSE_RX_MEM_SLAVE_INOCTETSSECYVALIDATEX(a,b) CSR_TYPE_RSL
#define basename_CAVM_MCSX_CSE_RX_MEM_SLAVE_INOCTETSSECYVALIDATEX(a,b) "MCSX_CSE_RX_MEM_SLAVE_INOCTETSSECYVALIDATEX"
#define device_bar_CAVM_MCSX_CSE_RX_MEM_SLAVE_INOCTETSSECYVALIDATEX(a,b) 0x0 /* PF_BAR0 */
#define busnum_CAVM_MCSX_CSE_RX_MEM_SLAVE_INOCTETSSECYVALIDATEX(a,b) (a)
#define arguments_CAVM_MCSX_CSE_RX_MEM_SLAVE_INOCTETSSECYVALIDATEX(a,b) (a),(b),-1,-1

/**
 * Register (RSL) mcs#_cse_rx_mem_slave_inpktsctrlportdisabled#
 *
 * MCS Cse Rx Mem Slave Inpktsctrlportdisabled Register
 * The number of packets received which are dropped on disabled SecY.
 */
union cavm_mcsx_cse_rx_mem_slave_inpktsctrlportdisabledx
{
    uint64_t u;
    struct cavm_mcsx_cse_rx_mem_slave_inpktsctrlportdisabledx_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t rx_secy_pkt_ctrl_port_disabled_cnt : 64;/**< [ 63:  0](R/W) The number of packets received which are dropped on disabled SecY. */
#else /* Word 0 - Little Endian */
        uint64_t rx_secy_pkt_ctrl_port_disabled_cnt : 64;/**< [ 63:  0](R/W) The number of packets received which are dropped on disabled SecY. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_mcsx_cse_rx_mem_slave_inpktsctrlportdisabledx_s cn; */
};
typedef union cavm_mcsx_cse_rx_mem_slave_inpktsctrlportdisabledx cavm_mcsx_cse_rx_mem_slave_inpktsctrlportdisabledx_t;

static inline uint64_t CAVM_MCSX_CSE_RX_MEM_SLAVE_INPKTSCTRLPORTDISABLEDX(uint64_t a, uint64_t b) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_MCSX_CSE_RX_MEM_SLAVE_INPKTSCTRLPORTDISABLEDX(uint64_t a, uint64_t b)
{
    if (cavm_is_model(OCTEONTX_CNF10KB) && ((a<=6) && (b<=63)))
        return 0x87e08000ce18ll + 0x1000000ll * ((a) & 0x7) + 8ll * ((b) & 0x3f);
    __cavm_csr_fatal("MCSX_CSE_RX_MEM_SLAVE_INPKTSCTRLPORTDISABLEDX", 2, a, b, 0, 0, 0, 0);
}

#define typedef_CAVM_MCSX_CSE_RX_MEM_SLAVE_INPKTSCTRLPORTDISABLEDX(a,b) cavm_mcsx_cse_rx_mem_slave_inpktsctrlportdisabledx_t
#define bustype_CAVM_MCSX_CSE_RX_MEM_SLAVE_INPKTSCTRLPORTDISABLEDX(a,b) CSR_TYPE_RSL
#define basename_CAVM_MCSX_CSE_RX_MEM_SLAVE_INPKTSCTRLPORTDISABLEDX(a,b) "MCSX_CSE_RX_MEM_SLAVE_INPKTSCTRLPORTDISABLEDX"
#define device_bar_CAVM_MCSX_CSE_RX_MEM_SLAVE_INPKTSCTRLPORTDISABLEDX(a,b) 0x0 /* PF_BAR0 */
#define busnum_CAVM_MCSX_CSE_RX_MEM_SLAVE_INPKTSCTRLPORTDISABLEDX(a,b) (a)
#define arguments_CAVM_MCSX_CSE_RX_MEM_SLAVE_INPKTSCTRLPORTDISABLEDX(a,b) (a),(b),-1,-1

/**
 * Register (RSL) mcs#_cse_rx_mem_slave_inpktsearlypreempterr#
 *
 * MCS Cse Rx Mem Slave Inpktsearlypreempterr Register
 * The number of packets with Early Preemption violations detected per port.
 */
union cavm_mcsx_cse_rx_mem_slave_inpktsearlypreempterrx
{
    uint64_t u;
    struct cavm_mcsx_cse_rx_mem_slave_inpktsearlypreempterrx_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t rx_port_pkt_early_preempt_err_cnt : 64;/**< [ 63:  0](R/W) The number of packets with Early Preemption violations detected per port. */
#else /* Word 0 - Little Endian */
        uint64_t rx_port_pkt_early_preempt_err_cnt : 64;/**< [ 63:  0](R/W) The number of packets with Early Preemption violations detected per port. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_mcsx_cse_rx_mem_slave_inpktsearlypreempterrx_s cn; */
};
typedef union cavm_mcsx_cse_rx_mem_slave_inpktsearlypreempterrx cavm_mcsx_cse_rx_mem_slave_inpktsearlypreempterrx_t;

static inline uint64_t CAVM_MCSX_CSE_RX_MEM_SLAVE_INPKTSEARLYPREEMPTERRX(uint64_t a, uint64_t b) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_MCSX_CSE_RX_MEM_SLAVE_INPKTSEARLYPREEMPTERRX(uint64_t a, uint64_t b)
{
    if (cavm_is_model(OCTEONTX_CNF10KB) && ((a<=6) && (b<=3)))
        return 0x87e08000ec58ll + 0x1000000ll * ((a) & 0x7) + 8ll * ((b) & 0x3);
    __cavm_csr_fatal("MCSX_CSE_RX_MEM_SLAVE_INPKTSEARLYPREEMPTERRX", 2, a, b, 0, 0, 0, 0);
}

#define typedef_CAVM_MCSX_CSE_RX_MEM_SLAVE_INPKTSEARLYPREEMPTERRX(a,b) cavm_mcsx_cse_rx_mem_slave_inpktsearlypreempterrx_t
#define bustype_CAVM_MCSX_CSE_RX_MEM_SLAVE_INPKTSEARLYPREEMPTERRX(a,b) CSR_TYPE_RSL
#define basename_CAVM_MCSX_CSE_RX_MEM_SLAVE_INPKTSEARLYPREEMPTERRX(a,b) "MCSX_CSE_RX_MEM_SLAVE_INPKTSEARLYPREEMPTERRX"
#define device_bar_CAVM_MCSX_CSE_RX_MEM_SLAVE_INPKTSEARLYPREEMPTERRX(a,b) 0x0 /* PF_BAR0 */
#define busnum_CAVM_MCSX_CSE_RX_MEM_SLAVE_INPKTSEARLYPREEMPTERRX(a,b) (a)
#define arguments_CAVM_MCSX_CSE_RX_MEM_SLAVE_INPKTSEARLYPREEMPTERRX(a,b) (a),(b),-1,-1

/**
 * Register (RSL) mcs#_cse_rx_mem_slave_inpktsflowidtcamhit#
 *
 * MCS Cse Rx Mem Slave Inpktsflowidtcamhit Register
 * The number of Packets which hit an entry in the Flow-ID TCAM.  Only 1 counter
 * increments per packet.
 */
union cavm_mcsx_cse_rx_mem_slave_inpktsflowidtcamhitx
{
    uint64_t u;
    struct cavm_mcsx_cse_rx_mem_slave_inpktsflowidtcamhitx_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t rx_flowid_pkt_flowid_tcam_hit_cnt : 64;/**< [ 63:  0](R/W) The number of Packets which hit an entry in the Flow-ID TCAM.  Only 1 counter
                                                                 increments per packet. */
#else /* Word 0 - Little Endian */
        uint64_t rx_flowid_pkt_flowid_tcam_hit_cnt : 64;/**< [ 63:  0](R/W) The number of Packets which hit an entry in the Flow-ID TCAM.  Only 1 counter
                                                                 increments per packet. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_mcsx_cse_rx_mem_slave_inpktsflowidtcamhitx_s cn; */
};
typedef union cavm_mcsx_cse_rx_mem_slave_inpktsflowidtcamhitx cavm_mcsx_cse_rx_mem_slave_inpktsflowidtcamhitx_t;

static inline uint64_t CAVM_MCSX_CSE_RX_MEM_SLAVE_INPKTSFLOWIDTCAMHITX(uint64_t a, uint64_t b) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_MCSX_CSE_RX_MEM_SLAVE_INPKTSFLOWIDTCAMHITX(uint64_t a, uint64_t b)
{
    if (cavm_is_model(OCTEONTX_CNF10KB) && ((a<=6) && (b<=63)))
        return 0x87e08000ec78ll + 0x1000000ll * ((a) & 0x7) + 8ll * ((b) & 0x3f);
    __cavm_csr_fatal("MCSX_CSE_RX_MEM_SLAVE_INPKTSFLOWIDTCAMHITX", 2, a, b, 0, 0, 0, 0);
}

#define typedef_CAVM_MCSX_CSE_RX_MEM_SLAVE_INPKTSFLOWIDTCAMHITX(a,b) cavm_mcsx_cse_rx_mem_slave_inpktsflowidtcamhitx_t
#define bustype_CAVM_MCSX_CSE_RX_MEM_SLAVE_INPKTSFLOWIDTCAMHITX(a,b) CSR_TYPE_RSL
#define basename_CAVM_MCSX_CSE_RX_MEM_SLAVE_INPKTSFLOWIDTCAMHITX(a,b) "MCSX_CSE_RX_MEM_SLAVE_INPKTSFLOWIDTCAMHITX"
#define device_bar_CAVM_MCSX_CSE_RX_MEM_SLAVE_INPKTSFLOWIDTCAMHITX(a,b) 0x0 /* PF_BAR0 */
#define busnum_CAVM_MCSX_CSE_RX_MEM_SLAVE_INPKTSFLOWIDTCAMHITX(a,b) (a)
#define arguments_CAVM_MCSX_CSE_RX_MEM_SLAVE_INPKTSFLOWIDTCAMHITX(a,b) (a),(b),-1,-1

/**
 * Register (RSL) mcs#_cse_rx_mem_slave_inpktsflowidtcammiss#
 *
 * MCS Cse Rx Mem Slave Inpktsflowidtcammiss Register
 * The number of Flow ID TCAM misses per port.
 */
union cavm_mcsx_cse_rx_mem_slave_inpktsflowidtcammissx
{
    uint64_t u;
    struct cavm_mcsx_cse_rx_mem_slave_inpktsflowidtcammissx_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t rx_port_pkt_flowid_tcam_miss_cnt : 64;/**< [ 63:  0](R/W) The number of Flow ID TCAM misses per port. */
#else /* Word 0 - Little Endian */
        uint64_t rx_port_pkt_flowid_tcam_miss_cnt : 64;/**< [ 63:  0](R/W) The number of Flow ID TCAM misses per port. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_mcsx_cse_rx_mem_slave_inpktsflowidtcammissx_s cn; */
};
typedef union cavm_mcsx_cse_rx_mem_slave_inpktsflowidtcammissx cavm_mcsx_cse_rx_mem_slave_inpktsflowidtcammissx_t;

static inline uint64_t CAVM_MCSX_CSE_RX_MEM_SLAVE_INPKTSFLOWIDTCAMMISSX(uint64_t a, uint64_t b) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_MCSX_CSE_RX_MEM_SLAVE_INPKTSFLOWIDTCAMMISSX(uint64_t a, uint64_t b)
{
    if (cavm_is_model(OCTEONTX_CNF10KB) && ((a<=6) && (b<=3)))
        return 0x87e08000ec38ll + 0x1000000ll * ((a) & 0x7) + 8ll * ((b) & 0x3);
    __cavm_csr_fatal("MCSX_CSE_RX_MEM_SLAVE_INPKTSFLOWIDTCAMMISSX", 2, a, b, 0, 0, 0, 0);
}

#define typedef_CAVM_MCSX_CSE_RX_MEM_SLAVE_INPKTSFLOWIDTCAMMISSX(a,b) cavm_mcsx_cse_rx_mem_slave_inpktsflowidtcammissx_t
#define bustype_CAVM_MCSX_CSE_RX_MEM_SLAVE_INPKTSFLOWIDTCAMMISSX(a,b) CSR_TYPE_RSL
#define basename_CAVM_MCSX_CSE_RX_MEM_SLAVE_INPKTSFLOWIDTCAMMISSX(a,b) "MCSX_CSE_RX_MEM_SLAVE_INPKTSFLOWIDTCAMMISSX"
#define device_bar_CAVM_MCSX_CSE_RX_MEM_SLAVE_INPKTSFLOWIDTCAMMISSX(a,b) 0x0 /* PF_BAR0 */
#define busnum_CAVM_MCSX_CSE_RX_MEM_SLAVE_INPKTSFLOWIDTCAMMISSX(a,b) (a)
#define arguments_CAVM_MCSX_CSE_RX_MEM_SLAVE_INPKTSFLOWIDTCAMMISSX(a,b) (a),(b),-1,-1

/**
 * Register (RSL) mcs#_cse_rx_mem_slave_inpktsparseerr#
 *
 * MCS Cse Rx Mem Slave Inpktsparseerr Register
 * The number of packets that have a parse error as indicated by PEX per port.
 */
union cavm_mcsx_cse_rx_mem_slave_inpktsparseerrx
{
    uint64_t u;
    struct cavm_mcsx_cse_rx_mem_slave_inpktsparseerrx_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t rx_port_pkt_parse_err_cnt : 64;/**< [ 63:  0](R/W) The number of packets that have a parse error as indicated by PEX per port. */
#else /* Word 0 - Little Endian */
        uint64_t rx_port_pkt_parse_err_cnt : 64;/**< [ 63:  0](R/W) The number of packets that have a parse error as indicated by PEX per port. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_mcsx_cse_rx_mem_slave_inpktsparseerrx_s cn; */
};
typedef union cavm_mcsx_cse_rx_mem_slave_inpktsparseerrx cavm_mcsx_cse_rx_mem_slave_inpktsparseerrx_t;

static inline uint64_t CAVM_MCSX_CSE_RX_MEM_SLAVE_INPKTSPARSEERRX(uint64_t a, uint64_t b) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_MCSX_CSE_RX_MEM_SLAVE_INPKTSPARSEERRX(uint64_t a, uint64_t b)
{
    if (cavm_is_model(OCTEONTX_CNF10KB) && ((a<=6) && (b<=3)))
        return 0x87e08000ec18ll + 0x1000000ll * ((a) & 0x7) + 8ll * ((b) & 0x3);
    __cavm_csr_fatal("MCSX_CSE_RX_MEM_SLAVE_INPKTSPARSEERRX", 2, a, b, 0, 0, 0, 0);
}

#define typedef_CAVM_MCSX_CSE_RX_MEM_SLAVE_INPKTSPARSEERRX(a,b) cavm_mcsx_cse_rx_mem_slave_inpktsparseerrx_t
#define bustype_CAVM_MCSX_CSE_RX_MEM_SLAVE_INPKTSPARSEERRX(a,b) CSR_TYPE_RSL
#define basename_CAVM_MCSX_CSE_RX_MEM_SLAVE_INPKTSPARSEERRX(a,b) "MCSX_CSE_RX_MEM_SLAVE_INPKTSPARSEERRX"
#define device_bar_CAVM_MCSX_CSE_RX_MEM_SLAVE_INPKTSPARSEERRX(a,b) 0x0 /* PF_BAR0 */
#define busnum_CAVM_MCSX_CSE_RX_MEM_SLAVE_INPKTSPARSEERRX(a,b) (a)
#define arguments_CAVM_MCSX_CSE_RX_MEM_SLAVE_INPKTSPARSEERRX(a,b) (a),(b),-1,-1

/**
 * Register (RSL) mcs#_cse_rx_mem_slave_inpktssccamhit#
 *
 * MCS Cse Rx Mem Slave Inpktssccamhit Register
 * The number of Packets which hit an entry in the SC TCAM.  Only 1 counter increments per packet.
 */
union cavm_mcsx_cse_rx_mem_slave_inpktssccamhitx
{
    uint64_t u;
    struct cavm_mcsx_cse_rx_mem_slave_inpktssccamhitx_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t rx_sc_pkt_sc_cam_hit_cnt : 64;/**< [ 63:  0](R/W) The number of Packets which hit an entry in the SC TCAM.  Only 1 counter increments per packet. */
#else /* Word 0 - Little Endian */
        uint64_t rx_sc_pkt_sc_cam_hit_cnt : 64;/**< [ 63:  0](R/W) The number of Packets which hit an entry in the SC TCAM.  Only 1 counter increments per packet. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_mcsx_cse_rx_mem_slave_inpktssccamhitx_s cn; */
};
typedef union cavm_mcsx_cse_rx_mem_slave_inpktssccamhitx cavm_mcsx_cse_rx_mem_slave_inpktssccamhitx_t;

static inline uint64_t CAVM_MCSX_CSE_RX_MEM_SLAVE_INPKTSSCCAMHITX(uint64_t a, uint64_t b) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_MCSX_CSE_RX_MEM_SLAVE_INPKTSSCCAMHITX(uint64_t a, uint64_t b)
{
    if (cavm_is_model(OCTEONTX_CNF10KB) && ((a<=6) && (b<=63)))
        return 0x87e08000de18ll + 0x1000000ll * ((a) & 0x7) + 8ll * ((b) & 0x3f);
    __cavm_csr_fatal("MCSX_CSE_RX_MEM_SLAVE_INPKTSSCCAMHITX", 2, a, b, 0, 0, 0, 0);
}

#define typedef_CAVM_MCSX_CSE_RX_MEM_SLAVE_INPKTSSCCAMHITX(a,b) cavm_mcsx_cse_rx_mem_slave_inpktssccamhitx_t
#define bustype_CAVM_MCSX_CSE_RX_MEM_SLAVE_INPKTSSCCAMHITX(a,b) CSR_TYPE_RSL
#define basename_CAVM_MCSX_CSE_RX_MEM_SLAVE_INPKTSSCCAMHITX(a,b) "MCSX_CSE_RX_MEM_SLAVE_INPKTSSCCAMHITX"
#define device_bar_CAVM_MCSX_CSE_RX_MEM_SLAVE_INPKTSSCCAMHITX(a,b) 0x0 /* PF_BAR0 */
#define busnum_CAVM_MCSX_CSE_RX_MEM_SLAVE_INPKTSSCCAMHITX(a,b) (a)
#define arguments_CAVM_MCSX_CSE_RX_MEM_SLAVE_INPKTSSCCAMHITX(a,b) (a),(b),-1,-1

/**
 * Register (RSL) mcs#_cse_rx_mem_slave_inpktsscdelayed#
 *
 * MCS Cse Rx Mem Slave Inpktsscdelayed Register
 * The number of received packets, for this SC, with PN lower than the lowest
 * acceptable PN and replay protect is false.
 */
union cavm_mcsx_cse_rx_mem_slave_inpktsscdelayedx
{
    uint64_t u;
    struct cavm_mcsx_cse_rx_mem_slave_inpktsscdelayedx_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t rx_sc_pkt_delayed_cnt : 64; /**< [ 63:  0](R/W) The number of received packets, for this SC, with PN lower than the lowest
                                                                 acceptable PN and replay protect is false. */
#else /* Word 0 - Little Endian */
        uint64_t rx_sc_pkt_delayed_cnt : 64; /**< [ 63:  0](R/W) The number of received packets, for this SC, with PN lower than the lowest
                                                                 acceptable PN and replay protect is false. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_mcsx_cse_rx_mem_slave_inpktsscdelayedx_s cn; */
};
typedef union cavm_mcsx_cse_rx_mem_slave_inpktsscdelayedx cavm_mcsx_cse_rx_mem_slave_inpktsscdelayedx_t;

static inline uint64_t CAVM_MCSX_CSE_RX_MEM_SLAVE_INPKTSSCDELAYEDX(uint64_t a, uint64_t b) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_MCSX_CSE_RX_MEM_SLAVE_INPKTSSCDELAYEDX(uint64_t a, uint64_t b)
{
    if (cavm_is_model(OCTEONTX_CNF10KB) && ((a<=6) && (b<=63)))
        return 0x87e08000e618ll + 0x1000000ll * ((a) & 0x7) + 8ll * ((b) & 0x3f);
    __cavm_csr_fatal("MCSX_CSE_RX_MEM_SLAVE_INPKTSSCDELAYEDX", 2, a, b, 0, 0, 0, 0);
}

#define typedef_CAVM_MCSX_CSE_RX_MEM_SLAVE_INPKTSSCDELAYEDX(a,b) cavm_mcsx_cse_rx_mem_slave_inpktsscdelayedx_t
#define bustype_CAVM_MCSX_CSE_RX_MEM_SLAVE_INPKTSSCDELAYEDX(a,b) CSR_TYPE_RSL
#define basename_CAVM_MCSX_CSE_RX_MEM_SLAVE_INPKTSSCDELAYEDX(a,b) "MCSX_CSE_RX_MEM_SLAVE_INPKTSSCDELAYEDX"
#define device_bar_CAVM_MCSX_CSE_RX_MEM_SLAVE_INPKTSSCDELAYEDX(a,b) 0x0 /* PF_BAR0 */
#define busnum_CAVM_MCSX_CSE_RX_MEM_SLAVE_INPKTSSCDELAYEDX(a,b) (a)
#define arguments_CAVM_MCSX_CSE_RX_MEM_SLAVE_INPKTSSCDELAYEDX(a,b) (a),(b),-1,-1

/**
 * Register (RSL) mcs#_cse_rx_mem_slave_inpktsscinvalid#
 *
 * MCS Cse Rx Mem Slave Inpktsscinvalid Register
 * The number of packets, for this SC, that failed validation but could be received
 * because SecY.Validate_Frames was 'CHECK' and the data was not encrypted so the
 * original frame could be recovered.
 */
union cavm_mcsx_cse_rx_mem_slave_inpktsscinvalidx
{
    uint64_t u;
    struct cavm_mcsx_cse_rx_mem_slave_inpktsscinvalidx_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t rx_sc_pkt_invalid_cnt : 64; /**< [ 63:  0](R/W) The number of packets, for this SC, that failed validation but could be received
                                                                 because SecY.Validate_Frames was 'CHECK' and the data was not encrypted so the
                                                                 original frame could be recovered. */
#else /* Word 0 - Little Endian */
        uint64_t rx_sc_pkt_invalid_cnt : 64; /**< [ 63:  0](R/W) The number of packets, for this SC, that failed validation but could be received
                                                                 because SecY.Validate_Frames was 'CHECK' and the data was not encrypted so the
                                                                 original frame could be recovered. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_mcsx_cse_rx_mem_slave_inpktsscinvalidx_s cn; */
};
typedef union cavm_mcsx_cse_rx_mem_slave_inpktsscinvalidx cavm_mcsx_cse_rx_mem_slave_inpktsscinvalidx_t;

static inline uint64_t CAVM_MCSX_CSE_RX_MEM_SLAVE_INPKTSSCINVALIDX(uint64_t a, uint64_t b) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_MCSX_CSE_RX_MEM_SLAVE_INPKTSSCINVALIDX(uint64_t a, uint64_t b)
{
    if (cavm_is_model(OCTEONTX_CNF10KB) && ((a<=6) && (b<=63)))
        return 0x87e08000e418ll + 0x1000000ll * ((a) & 0x7) + 8ll * ((b) & 0x3f);
    __cavm_csr_fatal("MCSX_CSE_RX_MEM_SLAVE_INPKTSSCINVALIDX", 2, a, b, 0, 0, 0, 0);
}

#define typedef_CAVM_MCSX_CSE_RX_MEM_SLAVE_INPKTSSCINVALIDX(a,b) cavm_mcsx_cse_rx_mem_slave_inpktsscinvalidx_t
#define bustype_CAVM_MCSX_CSE_RX_MEM_SLAVE_INPKTSSCINVALIDX(a,b) CSR_TYPE_RSL
#define basename_CAVM_MCSX_CSE_RX_MEM_SLAVE_INPKTSSCINVALIDX(a,b) "MCSX_CSE_RX_MEM_SLAVE_INPKTSSCINVALIDX"
#define device_bar_CAVM_MCSX_CSE_RX_MEM_SLAVE_INPKTSSCINVALIDX(a,b) 0x0 /* PF_BAR0 */
#define busnum_CAVM_MCSX_CSE_RX_MEM_SLAVE_INPKTSSCINVALIDX(a,b) (a)
#define arguments_CAVM_MCSX_CSE_RX_MEM_SLAVE_INPKTSSCINVALIDX(a,b) (a),(b),-1,-1

/**
 * Register (RSL) mcs#_cse_rx_mem_slave_inpktssclate#
 *
 * MCS Cse Rx Mem Slave Inpktssclate Register
 * The number of packets discarded, for this SC, because the received PN was lower than
 * the lowest acceptable PN and with replay protect true.
 */
union cavm_mcsx_cse_rx_mem_slave_inpktssclatex
{
    uint64_t u;
    struct cavm_mcsx_cse_rx_mem_slave_inpktssclatex_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t rx_sc_pkt_late_cnt    : 64; /**< [ 63:  0](R/W) The number of packets discarded, for this SC, because the received PN was lower
                                                                 than the lowest acceptable PN and with replay protect true. */
#else /* Word 0 - Little Endian */
        uint64_t rx_sc_pkt_late_cnt    : 64; /**< [ 63:  0](R/W) The number of packets discarded, for this SC, because the received PN was lower
                                                                 than the lowest acceptable PN and with replay protect true. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_mcsx_cse_rx_mem_slave_inpktssclatex_s cn; */
};
typedef union cavm_mcsx_cse_rx_mem_slave_inpktssclatex cavm_mcsx_cse_rx_mem_slave_inpktssclatex_t;

static inline uint64_t CAVM_MCSX_CSE_RX_MEM_SLAVE_INPKTSSCLATEX(uint64_t a, uint64_t b) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_MCSX_CSE_RX_MEM_SLAVE_INPKTSSCLATEX(uint64_t a, uint64_t b)
{
    if (cavm_is_model(OCTEONTX_CNF10KB) && ((a<=6) && (b<=63)))
        return 0x87e08000e018ll + 0x1000000ll * ((a) & 0x7) + 8ll * ((b) & 0x3f);
    __cavm_csr_fatal("MCSX_CSE_RX_MEM_SLAVE_INPKTSSCLATEX", 2, a, b, 0, 0, 0, 0);
}

#define typedef_CAVM_MCSX_CSE_RX_MEM_SLAVE_INPKTSSCLATEX(a,b) cavm_mcsx_cse_rx_mem_slave_inpktssclatex_t
#define bustype_CAVM_MCSX_CSE_RX_MEM_SLAVE_INPKTSSCLATEX(a,b) CSR_TYPE_RSL
#define basename_CAVM_MCSX_CSE_RX_MEM_SLAVE_INPKTSSCLATEX(a,b) "MCSX_CSE_RX_MEM_SLAVE_INPKTSSCLATEX"
#define device_bar_CAVM_MCSX_CSE_RX_MEM_SLAVE_INPKTSSCLATEX(a,b) 0x0 /* PF_BAR0 */
#define busnum_CAVM_MCSX_CSE_RX_MEM_SLAVE_INPKTSSCLATEX(a,b) (a)
#define arguments_CAVM_MCSX_CSE_RX_MEM_SLAVE_INPKTSSCLATEX(a,b) (a),(b),-1,-1

/**
 * Register (RSL) mcs#_cse_rx_mem_slave_inpktsscnotvalid#
 *
 * MCS Cse Rx Mem Slave Inpktsscnotvalid Register
 * The number of packets discarded for this SC because validation failed and
 * SecY.Validate_Frames is 'STRICT' or the data was encrypted so the original frame
 * could not be recovered.
 */
union cavm_mcsx_cse_rx_mem_slave_inpktsscnotvalidx
{
    uint64_t u;
    struct cavm_mcsx_cse_rx_mem_slave_inpktsscnotvalidx_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t rx_sc_pkt_notvalid_cnt : 64;/**< [ 63:  0](R/W) The number of packets discarded for this SC because validation failed and
                                                                 SecY.Validate_Frames is 'STRICT' or the data was encrypted so the original frame
                                                                 could not be recovered. */
#else /* Word 0 - Little Endian */
        uint64_t rx_sc_pkt_notvalid_cnt : 64;/**< [ 63:  0](R/W) The number of packets discarded for this SC because validation failed and
                                                                 SecY.Validate_Frames is 'STRICT' or the data was encrypted so the original frame
                                                                 could not be recovered. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_mcsx_cse_rx_mem_slave_inpktsscnotvalidx_s cn; */
};
typedef union cavm_mcsx_cse_rx_mem_slave_inpktsscnotvalidx cavm_mcsx_cse_rx_mem_slave_inpktsscnotvalidx_t;

static inline uint64_t CAVM_MCSX_CSE_RX_MEM_SLAVE_INPKTSSCNOTVALIDX(uint64_t a, uint64_t b) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_MCSX_CSE_RX_MEM_SLAVE_INPKTSSCNOTVALIDX(uint64_t a, uint64_t b)
{
    if (cavm_is_model(OCTEONTX_CNF10KB) && ((a<=6) && (b<=63)))
        return 0x87e08000e218ll + 0x1000000ll * ((a) & 0x7) + 8ll * ((b) & 0x3f);
    __cavm_csr_fatal("MCSX_CSE_RX_MEM_SLAVE_INPKTSSCNOTVALIDX", 2, a, b, 0, 0, 0, 0);
}

#define typedef_CAVM_MCSX_CSE_RX_MEM_SLAVE_INPKTSSCNOTVALIDX(a,b) cavm_mcsx_cse_rx_mem_slave_inpktsscnotvalidx_t
#define bustype_CAVM_MCSX_CSE_RX_MEM_SLAVE_INPKTSSCNOTVALIDX(a,b) CSR_TYPE_RSL
#define basename_CAVM_MCSX_CSE_RX_MEM_SLAVE_INPKTSSCNOTVALIDX(a,b) "MCSX_CSE_RX_MEM_SLAVE_INPKTSSCNOTVALIDX"
#define device_bar_CAVM_MCSX_CSE_RX_MEM_SLAVE_INPKTSSCNOTVALIDX(a,b) 0x0 /* PF_BAR0 */
#define busnum_CAVM_MCSX_CSE_RX_MEM_SLAVE_INPKTSSCNOTVALIDX(a,b) (a)
#define arguments_CAVM_MCSX_CSE_RX_MEM_SLAVE_INPKTSSCNOTVALIDX(a,b) (a),(b),-1,-1

/**
 * Register (RSL) mcs#_cse_rx_mem_slave_inpktsscok#
 *
 * MCS Cse Rx Mem Slave Inpktsscok Register
 * The number of packets received for this SC successfully validated and within the replay window.
 */
union cavm_mcsx_cse_rx_mem_slave_inpktsscokx
{
    uint64_t u;
    struct cavm_mcsx_cse_rx_mem_slave_inpktsscokx_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t rx_sc_pkt_ok_cnt      : 64; /**< [ 63:  0](R/W) The number of packets received for this SC successfully validated and within the replay window. */
#else /* Word 0 - Little Endian */
        uint64_t rx_sc_pkt_ok_cnt      : 64; /**< [ 63:  0](R/W) The number of packets received for this SC successfully validated and within the replay window. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_mcsx_cse_rx_mem_slave_inpktsscokx_s cn; */
};
typedef union cavm_mcsx_cse_rx_mem_slave_inpktsscokx cavm_mcsx_cse_rx_mem_slave_inpktsscokx_t;

static inline uint64_t CAVM_MCSX_CSE_RX_MEM_SLAVE_INPKTSSCOKX(uint64_t a, uint64_t b) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_MCSX_CSE_RX_MEM_SLAVE_INPKTSSCOKX(uint64_t a, uint64_t b)
{
    if (cavm_is_model(OCTEONTX_CNF10KB) && ((a<=6) && (b<=63)))
        return 0x87e08000ea18ll + 0x1000000ll * ((a) & 0x7) + 8ll * ((b) & 0x3f);
    __cavm_csr_fatal("MCSX_CSE_RX_MEM_SLAVE_INPKTSSCOKX", 2, a, b, 0, 0, 0, 0);
}

#define typedef_CAVM_MCSX_CSE_RX_MEM_SLAVE_INPKTSSCOKX(a,b) cavm_mcsx_cse_rx_mem_slave_inpktsscokx_t
#define bustype_CAVM_MCSX_CSE_RX_MEM_SLAVE_INPKTSSCOKX(a,b) CSR_TYPE_RSL
#define basename_CAVM_MCSX_CSE_RX_MEM_SLAVE_INPKTSSCOKX(a,b) "MCSX_CSE_RX_MEM_SLAVE_INPKTSSCOKX"
#define device_bar_CAVM_MCSX_CSE_RX_MEM_SLAVE_INPKTSSCOKX(a,b) 0x0 /* PF_BAR0 */
#define busnum_CAVM_MCSX_CSE_RX_MEM_SLAVE_INPKTSSCOKX(a,b) (a)
#define arguments_CAVM_MCSX_CSE_RX_MEM_SLAVE_INPKTSSCOKX(a,b) (a),(b),-1,-1

/**
 * Register (RSL) mcs#_cse_rx_mem_slave_inpktsscunchecked#
 *
 * MCS Cse Rx Mem Slave Inpktsscunchecked Register
 * The number of packets received for this SC, while Validate_Frames was disabled.
 */
union cavm_mcsx_cse_rx_mem_slave_inpktsscuncheckedx
{
    uint64_t u;
    struct cavm_mcsx_cse_rx_mem_slave_inpktsscuncheckedx_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t rx_sc_pkt_unchecked_cnt : 64;/**< [ 63:  0](R/W) The number of packets received for this SC, while Validate_Frames was disabled. */
#else /* Word 0 - Little Endian */
        uint64_t rx_sc_pkt_unchecked_cnt : 64;/**< [ 63:  0](R/W) The number of packets received for this SC, while Validate_Frames was disabled. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_mcsx_cse_rx_mem_slave_inpktsscuncheckedx_s cn; */
};
typedef union cavm_mcsx_cse_rx_mem_slave_inpktsscuncheckedx cavm_mcsx_cse_rx_mem_slave_inpktsscuncheckedx_t;

static inline uint64_t CAVM_MCSX_CSE_RX_MEM_SLAVE_INPKTSSCUNCHECKEDX(uint64_t a, uint64_t b) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_MCSX_CSE_RX_MEM_SLAVE_INPKTSSCUNCHECKEDX(uint64_t a, uint64_t b)
{
    if (cavm_is_model(OCTEONTX_CNF10KB) && ((a<=6) && (b<=63)))
        return 0x87e08000e818ll + 0x1000000ll * ((a) & 0x7) + 8ll * ((b) & 0x3f);
    __cavm_csr_fatal("MCSX_CSE_RX_MEM_SLAVE_INPKTSSCUNCHECKEDX", 2, a, b, 0, 0, 0, 0);
}

#define typedef_CAVM_MCSX_CSE_RX_MEM_SLAVE_INPKTSSCUNCHECKEDX(a,b) cavm_mcsx_cse_rx_mem_slave_inpktsscuncheckedx_t
#define bustype_CAVM_MCSX_CSE_RX_MEM_SLAVE_INPKTSSCUNCHECKEDX(a,b) CSR_TYPE_RSL
#define basename_CAVM_MCSX_CSE_RX_MEM_SLAVE_INPKTSSCUNCHECKEDX(a,b) "MCSX_CSE_RX_MEM_SLAVE_INPKTSSCUNCHECKEDX"
#define device_bar_CAVM_MCSX_CSE_RX_MEM_SLAVE_INPKTSSCUNCHECKEDX(a,b) 0x0 /* PF_BAR0 */
#define busnum_CAVM_MCSX_CSE_RX_MEM_SLAVE_INPKTSSCUNCHECKEDX(a,b) (a)
#define arguments_CAVM_MCSX_CSE_RX_MEM_SLAVE_INPKTSSCUNCHECKEDX(a,b) (a),(b),-1,-1

/**
 * Register (RSL) mcs#_cse_rx_mem_slave_inpktssecybadtag#
 *
 * MCS Cse Rx Mem Slave Inpktssecybadtag Register
 * The number of received packets discarded with an invalid SecTag, zero value PN, or invalid ICV.
 */
union cavm_mcsx_cse_rx_mem_slave_inpktssecybadtagx
{
    uint64_t u;
    struct cavm_mcsx_cse_rx_mem_slave_inpktssecybadtagx_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t rx_secy_pkt_badtag_cnt : 64;/**< [ 63:  0](R/W) The number of received packets discarded with an invalid SecTag, zero value PN, or invalid ICV. */
#else /* Word 0 - Little Endian */
        uint64_t rx_secy_pkt_badtag_cnt : 64;/**< [ 63:  0](R/W) The number of received packets discarded with an invalid SecTag, zero value PN, or invalid ICV. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_mcsx_cse_rx_mem_slave_inpktssecybadtagx_s cn; */
};
typedef union cavm_mcsx_cse_rx_mem_slave_inpktssecybadtagx cavm_mcsx_cse_rx_mem_slave_inpktssecybadtagx_t;

static inline uint64_t CAVM_MCSX_CSE_RX_MEM_SLAVE_INPKTSSECYBADTAGX(uint64_t a, uint64_t b) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_MCSX_CSE_RX_MEM_SLAVE_INPKTSSECYBADTAGX(uint64_t a, uint64_t b)
{
    if (cavm_is_model(OCTEONTX_CNF10KB) && ((a<=6) && (b<=63)))
        return 0x87e08000d418ll + 0x1000000ll * ((a) & 0x7) + 8ll * ((b) & 0x3f);
    __cavm_csr_fatal("MCSX_CSE_RX_MEM_SLAVE_INPKTSSECYBADTAGX", 2, a, b, 0, 0, 0, 0);
}

#define typedef_CAVM_MCSX_CSE_RX_MEM_SLAVE_INPKTSSECYBADTAGX(a,b) cavm_mcsx_cse_rx_mem_slave_inpktssecybadtagx_t
#define bustype_CAVM_MCSX_CSE_RX_MEM_SLAVE_INPKTSSECYBADTAGX(a,b) CSR_TYPE_RSL
#define basename_CAVM_MCSX_CSE_RX_MEM_SLAVE_INPKTSSECYBADTAGX(a,b) "MCSX_CSE_RX_MEM_SLAVE_INPKTSSECYBADTAGX"
#define device_bar_CAVM_MCSX_CSE_RX_MEM_SLAVE_INPKTSSECYBADTAGX(a,b) 0x0 /* PF_BAR0 */
#define busnum_CAVM_MCSX_CSE_RX_MEM_SLAVE_INPKTSSECYBADTAGX(a,b) (a)
#define arguments_CAVM_MCSX_CSE_RX_MEM_SLAVE_INPKTSSECYBADTAGX(a,b) (a),(b),-1,-1

/**
 * Register (RSL) mcs#_cse_rx_mem_slave_inpktssecynosa#
 *
 * MCS Cse Rx Mem Slave Inpktssecynosa Register
 * The number of received packets with an unknown SA or an unused SA.
 */
union cavm_mcsx_cse_rx_mem_slave_inpktssecynosax
{
    uint64_t u;
    struct cavm_mcsx_cse_rx_mem_slave_inpktssecynosax_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t rx_secy_pkt_nosa_cnt  : 64; /**< [ 63:  0](R/W) The number of received packets with an unknown SA or an unused SA. */
#else /* Word 0 - Little Endian */
        uint64_t rx_secy_pkt_nosa_cnt  : 64; /**< [ 63:  0](R/W) The number of received packets with an unknown SA or an unused SA. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_mcsx_cse_rx_mem_slave_inpktssecynosax_s cn; */
};
typedef union cavm_mcsx_cse_rx_mem_slave_inpktssecynosax cavm_mcsx_cse_rx_mem_slave_inpktssecynosax_t;

static inline uint64_t CAVM_MCSX_CSE_RX_MEM_SLAVE_INPKTSSECYNOSAX(uint64_t a, uint64_t b) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_MCSX_CSE_RX_MEM_SLAVE_INPKTSSECYNOSAX(uint64_t a, uint64_t b)
{
    if (cavm_is_model(OCTEONTX_CNF10KB) && ((a<=6) && (b<=63)))
        return 0x87e08000d618ll + 0x1000000ll * ((a) & 0x7) + 8ll * ((b) & 0x3f);
    __cavm_csr_fatal("MCSX_CSE_RX_MEM_SLAVE_INPKTSSECYNOSAX", 2, a, b, 0, 0, 0, 0);
}

#define typedef_CAVM_MCSX_CSE_RX_MEM_SLAVE_INPKTSSECYNOSAX(a,b) cavm_mcsx_cse_rx_mem_slave_inpktssecynosax_t
#define bustype_CAVM_MCSX_CSE_RX_MEM_SLAVE_INPKTSSECYNOSAX(a,b) CSR_TYPE_RSL
#define basename_CAVM_MCSX_CSE_RX_MEM_SLAVE_INPKTSSECYNOSAX(a,b) "MCSX_CSE_RX_MEM_SLAVE_INPKTSSECYNOSAX"
#define device_bar_CAVM_MCSX_CSE_RX_MEM_SLAVE_INPKTSSECYNOSAX(a,b) 0x0 /* PF_BAR0 */
#define busnum_CAVM_MCSX_CSE_RX_MEM_SLAVE_INPKTSSECYNOSAX(a,b) (a)
#define arguments_CAVM_MCSX_CSE_RX_MEM_SLAVE_INPKTSSECYNOSAX(a,b) (a),(b),-1,-1

/**
 * Register (RSL) mcs#_cse_rx_mem_slave_inpktssecynosaerror#
 *
 * MCS Cse Rx Mem Slave Inpktssecynosaerror Register
 * The number of received packets discarded because the received SCI is unknown or the
 * SA is not in use.
 */
union cavm_mcsx_cse_rx_mem_slave_inpktssecynosaerrorx
{
    uint64_t u;
    struct cavm_mcsx_cse_rx_mem_slave_inpktssecynosaerrorx_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t rx_secy_pkt_nosaerror_cnt : 64;/**< [ 63:  0](R/W) The number of received packets discarded because the received SCI is unknown or
                                                                 the SA is not in use. */
#else /* Word 0 - Little Endian */
        uint64_t rx_secy_pkt_nosaerror_cnt : 64;/**< [ 63:  0](R/W) The number of received packets discarded because the received SCI is unknown or
                                                                 the SA is not in use. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_mcsx_cse_rx_mem_slave_inpktssecynosaerrorx_s cn; */
};
typedef union cavm_mcsx_cse_rx_mem_slave_inpktssecynosaerrorx cavm_mcsx_cse_rx_mem_slave_inpktssecynosaerrorx_t;

static inline uint64_t CAVM_MCSX_CSE_RX_MEM_SLAVE_INPKTSSECYNOSAERRORX(uint64_t a, uint64_t b) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_MCSX_CSE_RX_MEM_SLAVE_INPKTSSECYNOSAERRORX(uint64_t a, uint64_t b)
{
    if (cavm_is_model(OCTEONTX_CNF10KB) && ((a<=6) && (b<=63)))
        return 0x87e08000d818ll + 0x1000000ll * ((a) & 0x7) + 8ll * ((b) & 0x3f);
    __cavm_csr_fatal("MCSX_CSE_RX_MEM_SLAVE_INPKTSSECYNOSAERRORX", 2, a, b, 0, 0, 0, 0);
}

#define typedef_CAVM_MCSX_CSE_RX_MEM_SLAVE_INPKTSSECYNOSAERRORX(a,b) cavm_mcsx_cse_rx_mem_slave_inpktssecynosaerrorx_t
#define bustype_CAVM_MCSX_CSE_RX_MEM_SLAVE_INPKTSSECYNOSAERRORX(a,b) CSR_TYPE_RSL
#define basename_CAVM_MCSX_CSE_RX_MEM_SLAVE_INPKTSSECYNOSAERRORX(a,b) "MCSX_CSE_RX_MEM_SLAVE_INPKTSSECYNOSAERRORX"
#define device_bar_CAVM_MCSX_CSE_RX_MEM_SLAVE_INPKTSSECYNOSAERRORX(a,b) 0x0 /* PF_BAR0 */
#define busnum_CAVM_MCSX_CSE_RX_MEM_SLAVE_INPKTSSECYNOSAERRORX(a,b) (a)
#define arguments_CAVM_MCSX_CSE_RX_MEM_SLAVE_INPKTSSECYNOSAERRORX(a,b) (a),(b),-1,-1

/**
 * Register (RSL) mcs#_cse_rx_mem_slave_inpktssecynotag#
 *
 * MCS Cse Rx Mem Slave Inpktssecynotag Register
 * The number of received packets without a SecTag discarded because SecY.Validate_Frames was STRICT.
 */
union cavm_mcsx_cse_rx_mem_slave_inpktssecynotagx
{
    uint64_t u;
    struct cavm_mcsx_cse_rx_mem_slave_inpktssecynotagx_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t rx_secy_pkt_notag_cnt : 64; /**< [ 63:  0](R/W) The number of received packets without a SecTag discarded because SecY.Validate_Frames was STRICT. */
#else /* Word 0 - Little Endian */
        uint64_t rx_secy_pkt_notag_cnt : 64; /**< [ 63:  0](R/W) The number of received packets without a SecTag discarded because SecY.Validate_Frames was STRICT. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_mcsx_cse_rx_mem_slave_inpktssecynotagx_s cn; */
};
typedef union cavm_mcsx_cse_rx_mem_slave_inpktssecynotagx cavm_mcsx_cse_rx_mem_slave_inpktssecynotagx_t;

static inline uint64_t CAVM_MCSX_CSE_RX_MEM_SLAVE_INPKTSSECYNOTAGX(uint64_t a, uint64_t b) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_MCSX_CSE_RX_MEM_SLAVE_INPKTSSECYNOTAGX(uint64_t a, uint64_t b)
{
    if (cavm_is_model(OCTEONTX_CNF10KB) && ((a<=6) && (b<=63)))
        return 0x87e08000d218ll + 0x1000000ll * ((a) & 0x7) + 8ll * ((b) & 0x3f);
    __cavm_csr_fatal("MCSX_CSE_RX_MEM_SLAVE_INPKTSSECYNOTAGX", 2, a, b, 0, 0, 0, 0);
}

#define typedef_CAVM_MCSX_CSE_RX_MEM_SLAVE_INPKTSSECYNOTAGX(a,b) cavm_mcsx_cse_rx_mem_slave_inpktssecynotagx_t
#define bustype_CAVM_MCSX_CSE_RX_MEM_SLAVE_INPKTSSECYNOTAGX(a,b) CSR_TYPE_RSL
#define basename_CAVM_MCSX_CSE_RX_MEM_SLAVE_INPKTSSECYNOTAGX(a,b) "MCSX_CSE_RX_MEM_SLAVE_INPKTSSECYNOTAGX"
#define device_bar_CAVM_MCSX_CSE_RX_MEM_SLAVE_INPKTSSECYNOTAGX(a,b) 0x0 /* PF_BAR0 */
#define busnum_CAVM_MCSX_CSE_RX_MEM_SLAVE_INPKTSSECYNOTAGX(a,b) (a)
#define arguments_CAVM_MCSX_CSE_RX_MEM_SLAVE_INPKTSSECYNOTAGX(a,b) (a),(b),-1,-1

/**
 * Register (RSL) mcs#_cse_rx_mem_slave_inpktssecytaggedctl#
 *
 * MCS Cse Rx Mem Slave Inpktssecytaggedctl Register
 * Number of control packets received by the SecY
 */
union cavm_mcsx_cse_rx_mem_slave_inpktssecytaggedctlx
{
    uint64_t u;
    struct cavm_mcsx_cse_rx_mem_slave_inpktssecytaggedctlx_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t rx_secy_pkt_tagged_ctl_cnt : 64;/**< [ 63:  0](R/W) Number of tagged control packets received by the SecY. */
#else /* Word 0 - Little Endian */
        uint64_t rx_secy_pkt_tagged_ctl_cnt : 64;/**< [ 63:  0](R/W) Number of tagged control packets received by the SecY. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_mcsx_cse_rx_mem_slave_inpktssecytaggedctlx_s cn; */
};
typedef union cavm_mcsx_cse_rx_mem_slave_inpktssecytaggedctlx cavm_mcsx_cse_rx_mem_slave_inpktssecytaggedctlx_t;

static inline uint64_t CAVM_MCSX_CSE_RX_MEM_SLAVE_INPKTSSECYTAGGEDCTLX(uint64_t a, uint64_t b) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_MCSX_CSE_RX_MEM_SLAVE_INPKTSSECYTAGGEDCTLX(uint64_t a, uint64_t b)
{
    if (cavm_is_model(OCTEONTX_CNF10KB) && ((a<=6) && (b<=63)))
        return 0x87e08000cc18ll + 0x1000000ll * ((a) & 0x7) + 8ll * ((b) & 0x3f);
    __cavm_csr_fatal("MCSX_CSE_RX_MEM_SLAVE_INPKTSSECYTAGGEDCTLX", 2, a, b, 0, 0, 0, 0);
}

#define typedef_CAVM_MCSX_CSE_RX_MEM_SLAVE_INPKTSSECYTAGGEDCTLX(a,b) cavm_mcsx_cse_rx_mem_slave_inpktssecytaggedctlx_t
#define bustype_CAVM_MCSX_CSE_RX_MEM_SLAVE_INPKTSSECYTAGGEDCTLX(a,b) CSR_TYPE_RSL
#define basename_CAVM_MCSX_CSE_RX_MEM_SLAVE_INPKTSSECYTAGGEDCTLX(a,b) "MCSX_CSE_RX_MEM_SLAVE_INPKTSSECYTAGGEDCTLX"
#define device_bar_CAVM_MCSX_CSE_RX_MEM_SLAVE_INPKTSSECYTAGGEDCTLX(a,b) 0x0 /* PF_BAR0 */
#define busnum_CAVM_MCSX_CSE_RX_MEM_SLAVE_INPKTSSECYTAGGEDCTLX(a,b) (a)
#define arguments_CAVM_MCSX_CSE_RX_MEM_SLAVE_INPKTSSECYTAGGEDCTLX(a,b) (a),(b),-1,-1

/**
 * Register (RSL) mcs#_cse_rx_mem_slave_inpktssecyuntagged#
 *
 * MCS Cse Rx Mem Slave Inpktssecyuntagged Register
 * The number of packets without a SecTag received while SecY.Validate_Frames was not STRICT.
 */
union cavm_mcsx_cse_rx_mem_slave_inpktssecyuntaggedx
{
    uint64_t u;
    struct cavm_mcsx_cse_rx_mem_slave_inpktssecyuntaggedx_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t rx_secy_pkt_untagged_cnt : 64;/**< [ 63:  0](R/W) The number of packets without a SecTag received while SecY.Validate_Frames was not STRICT. */
#else /* Word 0 - Little Endian */
        uint64_t rx_secy_pkt_untagged_cnt : 64;/**< [ 63:  0](R/W) The number of packets without a SecTag received while SecY.Validate_Frames was not STRICT. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_mcsx_cse_rx_mem_slave_inpktssecyuntaggedx_s cn; */
};
typedef union cavm_mcsx_cse_rx_mem_slave_inpktssecyuntaggedx cavm_mcsx_cse_rx_mem_slave_inpktssecyuntaggedx_t;

static inline uint64_t CAVM_MCSX_CSE_RX_MEM_SLAVE_INPKTSSECYUNTAGGEDX(uint64_t a, uint64_t b) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_MCSX_CSE_RX_MEM_SLAVE_INPKTSSECYUNTAGGEDX(uint64_t a, uint64_t b)
{
    if (cavm_is_model(OCTEONTX_CNF10KB) && ((a<=6) && (b<=63)))
        return 0x87e08000d018ll + 0x1000000ll * ((a) & 0x7) + 8ll * ((b) & 0x3f);
    __cavm_csr_fatal("MCSX_CSE_RX_MEM_SLAVE_INPKTSSECYUNTAGGEDX", 2, a, b, 0, 0, 0, 0);
}

#define typedef_CAVM_MCSX_CSE_RX_MEM_SLAVE_INPKTSSECYUNTAGGEDX(a,b) cavm_mcsx_cse_rx_mem_slave_inpktssecyuntaggedx_t
#define bustype_CAVM_MCSX_CSE_RX_MEM_SLAVE_INPKTSSECYUNTAGGEDX(a,b) CSR_TYPE_RSL
#define basename_CAVM_MCSX_CSE_RX_MEM_SLAVE_INPKTSSECYUNTAGGEDX(a,b) "MCSX_CSE_RX_MEM_SLAVE_INPKTSSECYUNTAGGEDX"
#define device_bar_CAVM_MCSX_CSE_RX_MEM_SLAVE_INPKTSSECYUNTAGGEDX(a,b) 0x0 /* PF_BAR0 */
#define busnum_CAVM_MCSX_CSE_RX_MEM_SLAVE_INPKTSSECYUNTAGGEDX(a,b) (a)
#define arguments_CAVM_MCSX_CSE_RX_MEM_SLAVE_INPKTSSECYUNTAGGEDX(a,b) (a),(b),-1,-1

/**
 * Register (RSL) mcs#_cse_rx_slave_ctrl
 *
 * MCS Cse Rx Slave Ctrl Register
 * Control for Common Statistics Engine
 */
union cavm_mcsx_cse_rx_slave_ctrl
{
    uint64_t u;
    struct cavm_mcsx_cse_rx_slave_ctrl_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_1_63         : 63;
        uint64_t cpu_cse_clr_on_rd     : 1;  /**< [  0:  0](R/W) When set to 1, counter memory will be cleared when it is read. */
#else /* Word 0 - Little Endian */
        uint64_t cpu_cse_clr_on_rd     : 1;  /**< [  0:  0](R/W) When set to 1, counter memory will be cleared when it is read. */
        uint64_t reserved_1_63         : 63;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_mcsx_cse_rx_slave_ctrl_s cn; */
};
typedef union cavm_mcsx_cse_rx_slave_ctrl cavm_mcsx_cse_rx_slave_ctrl_t;

static inline uint64_t CAVM_MCSX_CSE_RX_SLAVE_CTRL(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_MCSX_CSE_RX_SLAVE_CTRL(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CNF10KB) && (a<=6))
        return 0x87e0800009c0ll + 0x1000000ll * ((a) & 0x7);
    __cavm_csr_fatal("MCSX_CSE_RX_SLAVE_CTRL", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_MCSX_CSE_RX_SLAVE_CTRL(a) cavm_mcsx_cse_rx_slave_ctrl_t
#define bustype_CAVM_MCSX_CSE_RX_SLAVE_CTRL(a) CSR_TYPE_RSL
#define basename_CAVM_MCSX_CSE_RX_SLAVE_CTRL(a) "MCSX_CSE_RX_SLAVE_CTRL"
#define device_bar_CAVM_MCSX_CSE_RX_SLAVE_CTRL(a) 0x0 /* PF_BAR0 */
#define busnum_CAVM_MCSX_CSE_RX_SLAVE_CTRL(a) (a)
#define arguments_CAVM_MCSX_CSE_RX_SLAVE_CTRL(a) (a),-1,-1,-1

/**
 * Register (RSL) mcs#_cse_rx_slave_dbg_mux_sel
 *
 * MCS Cse Rx Slave Dbg Mux Sel Register
 * Per segment mux control for the debug_mux.  Configuration of this register will
 * affect which debug set is output on the corresponding debug mux logic for the CSE.
 */
union cavm_mcsx_cse_rx_slave_dbg_mux_sel
{
    uint64_t u;
    struct cavm_mcsx_cse_rx_slave_dbg_mux_sel_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_29_63        : 35;
        uint64_t seg3                  : 5;  /**< [ 28: 24](R/W) Select which debug set is output on the segment3 of the debug mux for the Rx
                                                                 CSE.  Note that a higher level dbg_mux_sel also exists to select which block's
                                                                 debug sets are to be output of the IP */
        uint64_t reserved_21_23        : 3;
        uint64_t seg2                  : 5;  /**< [ 20: 16](R/W) Select which debug set is output on the segment2 of the debug mux for the Rx
                                                                 CSE.  Note that a higher level dbg_mux_sel also exists to select which block's
                                                                 debug sets are to be output of the IP */
        uint64_t reserved_13_15        : 3;
        uint64_t seg1                  : 5;  /**< [ 12:  8](R/W) Select which debug set is output on the segment1 of the debug mux for the Rx
                                                                 CSE.  Note that a higher level dbg_mux_sel also exists to select which block's
                                                                 debug sets are to be output of the IP */
        uint64_t reserved_5_7          : 3;
        uint64_t seg0                  : 5;  /**< [  4:  0](R/W) Select which debug set is output on the segment0 of the debug mux for the Rx
                                                                 CSE.  Note that a higher level dbg_mux_sel also exists to select which block's
                                                                 debug sets are to be output of the IP */
#else /* Word 0 - Little Endian */
        uint64_t seg0                  : 5;  /**< [  4:  0](R/W) Select which debug set is output on the segment0 of the debug mux for the Rx
                                                                 CSE.  Note that a higher level dbg_mux_sel also exists to select which block's
                                                                 debug sets are to be output of the IP */
        uint64_t reserved_5_7          : 3;
        uint64_t seg1                  : 5;  /**< [ 12:  8](R/W) Select which debug set is output on the segment1 of the debug mux for the Rx
                                                                 CSE.  Note that a higher level dbg_mux_sel also exists to select which block's
                                                                 debug sets are to be output of the IP */
        uint64_t reserved_13_15        : 3;
        uint64_t seg2                  : 5;  /**< [ 20: 16](R/W) Select which debug set is output on the segment2 of the debug mux for the Rx
                                                                 CSE.  Note that a higher level dbg_mux_sel also exists to select which block's
                                                                 debug sets are to be output of the IP */
        uint64_t reserved_21_23        : 3;
        uint64_t seg3                  : 5;  /**< [ 28: 24](R/W) Select which debug set is output on the segment3 of the debug mux for the Rx
                                                                 CSE.  Note that a higher level dbg_mux_sel also exists to select which block's
                                                                 debug sets are to be output of the IP */
        uint64_t reserved_29_63        : 35;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_mcsx_cse_rx_slave_dbg_mux_sel_s cn; */
};
typedef union cavm_mcsx_cse_rx_slave_dbg_mux_sel cavm_mcsx_cse_rx_slave_dbg_mux_sel_t;

static inline uint64_t CAVM_MCSX_CSE_RX_SLAVE_DBG_MUX_SEL(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_MCSX_CSE_RX_SLAVE_DBG_MUX_SEL(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CNF10KB) && (a<=6))
        return 0x87e0800009c8ll + 0x1000000ll * ((a) & 0x7);
    __cavm_csr_fatal("MCSX_CSE_RX_SLAVE_DBG_MUX_SEL", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_MCSX_CSE_RX_SLAVE_DBG_MUX_SEL(a) cavm_mcsx_cse_rx_slave_dbg_mux_sel_t
#define bustype_CAVM_MCSX_CSE_RX_SLAVE_DBG_MUX_SEL(a) CSR_TYPE_RSL
#define basename_CAVM_MCSX_CSE_RX_SLAVE_DBG_MUX_SEL(a) "MCSX_CSE_RX_SLAVE_DBG_MUX_SEL"
#define device_bar_CAVM_MCSX_CSE_RX_SLAVE_DBG_MUX_SEL(a) 0x0 /* PF_BAR0 */
#define busnum_CAVM_MCSX_CSE_RX_SLAVE_DBG_MUX_SEL(a) (a)
#define arguments_CAVM_MCSX_CSE_RX_SLAVE_DBG_MUX_SEL(a) (a),-1,-1,-1

/**
 * Register (RSL) mcs#_cse_rx_slave_debug_status
 *
 * MCS Cse Rx Slave Debug Status Register
 * Debug status register:  Captures the debug set selected by dbg_mux_sel.
 */
union cavm_mcsx_cse_rx_slave_debug_status
{
    uint64_t u;
    struct cavm_mcsx_cse_rx_slave_debug_status_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t seg3                  : 16; /**< [ 63: 48](RO) Debug set status for segment3. */
        uint64_t seg2                  : 16; /**< [ 47: 32](RO) Debug set status for segment2. */
        uint64_t seg1                  : 16; /**< [ 31: 16](RO) Debug set status for segment1. */
        uint64_t seg0                  : 16; /**< [ 15:  0](RO) Debug set status for segment0. */
#else /* Word 0 - Little Endian */
        uint64_t seg0                  : 16; /**< [ 15:  0](RO) Debug set status for segment0. */
        uint64_t seg1                  : 16; /**< [ 31: 16](RO) Debug set status for segment1. */
        uint64_t seg2                  : 16; /**< [ 47: 32](RO) Debug set status for segment2. */
        uint64_t seg3                  : 16; /**< [ 63: 48](RO) Debug set status for segment3. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_mcsx_cse_rx_slave_debug_status_s cn; */
};
typedef union cavm_mcsx_cse_rx_slave_debug_status cavm_mcsx_cse_rx_slave_debug_status_t;

static inline uint64_t CAVM_MCSX_CSE_RX_SLAVE_DEBUG_STATUS(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_MCSX_CSE_RX_SLAVE_DEBUG_STATUS(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CNF10KB) && (a<=6))
        return 0x87e0800009d0ll + 0x1000000ll * ((a) & 0x7);
    __cavm_csr_fatal("MCSX_CSE_RX_SLAVE_DEBUG_STATUS", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_MCSX_CSE_RX_SLAVE_DEBUG_STATUS(a) cavm_mcsx_cse_rx_slave_debug_status_t
#define bustype_CAVM_MCSX_CSE_RX_SLAVE_DEBUG_STATUS(a) CSR_TYPE_RSL
#define basename_CAVM_MCSX_CSE_RX_SLAVE_DEBUG_STATUS(a) "MCSX_CSE_RX_SLAVE_DEBUG_STATUS"
#define device_bar_CAVM_MCSX_CSE_RX_SLAVE_DEBUG_STATUS(a) 0x0 /* PF_BAR0 */
#define busnum_CAVM_MCSX_CSE_RX_SLAVE_DEBUG_STATUS(a) (a)
#define arguments_CAVM_MCSX_CSE_RX_SLAVE_DEBUG_STATUS(a) (a),-1,-1,-1

/**
 * Register (RSL) mcs#_cse_rx_slave_reserved0#_rsvd
 *
 * INTERNAL: MCS Cse Rx Slave Reserved0 Register
 *
 * This register is reserved.
 */
union cavm_mcsx_cse_rx_slave_reserved0x_rsvd
{
    uint64_t u;
    struct cavm_mcsx_cse_rx_slave_reserved0x_rsvd_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_0_63         : 64;
#else /* Word 0 - Little Endian */
        uint64_t reserved_0_63         : 64;
#endif /* Word 0 - End */
    } s;
    struct cavm_mcsx_cse_rx_slave_reserved0x_rsvd_cn
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_1_63         : 63;
        uint64_t reserved_0            : 1;
#else /* Word 0 - Little Endian */
        uint64_t reserved_0            : 1;
        uint64_t reserved_1_63         : 63;
#endif /* Word 0 - End */
    } cn;
};
typedef union cavm_mcsx_cse_rx_slave_reserved0x_rsvd cavm_mcsx_cse_rx_slave_reserved0x_rsvd_t;

static inline uint64_t CAVM_MCSX_CSE_RX_SLAVE_RESERVED0X_RSVD(uint64_t a, uint64_t b) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_MCSX_CSE_RX_SLAVE_RESERVED0X_RSVD(uint64_t a, uint64_t b)
{
    if (cavm_is_model(OCTEONTX_CNF10KB) && ((a<=6) && (b<=3)))
        return 0x87e0800009a0ll + 0x1000000ll * ((a) & 0x7) + 8ll * ((b) & 0x3);
    __cavm_csr_fatal("MCSX_CSE_RX_SLAVE_RESERVED0X_RSVD", 2, a, b, 0, 0, 0, 0);
}

#define typedef_CAVM_MCSX_CSE_RX_SLAVE_RESERVED0X_RSVD(a,b) cavm_mcsx_cse_rx_slave_reserved0x_rsvd_t
#define bustype_CAVM_MCSX_CSE_RX_SLAVE_RESERVED0X_RSVD(a,b) CSR_TYPE_RSL
#define basename_CAVM_MCSX_CSE_RX_SLAVE_RESERVED0X_RSVD(a,b) "MCSX_CSE_RX_SLAVE_RESERVED0X_RSVD"
#define device_bar_CAVM_MCSX_CSE_RX_SLAVE_RESERVED0X_RSVD(a,b) 0x0 /* PF_BAR0 */
#define busnum_CAVM_MCSX_CSE_RX_SLAVE_RESERVED0X_RSVD(a,b) (a)
#define arguments_CAVM_MCSX_CSE_RX_SLAVE_RESERVED0X_RSVD(a,b) (a),(b),-1,-1

/**
 * Register (RSL) mcs#_cse_rx_slave_stats_clear
 *
 * MCS Cse Rx Slave Stats Clear Register
 * Tell the HW to start initialization of the stats memory within CSE
 */
union cavm_mcsx_cse_rx_slave_stats_clear
{
    uint64_t u;
    struct cavm_mcsx_cse_rx_slave_stats_clear_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_4_63         : 60;
        uint64_t rx_flowid_go          : 1;  /**< [  3:  3](R/W) When set to 1, the stats related to ingress FlowID value in CSE will start
                                                                 initialization sequence (clearing all counters to 0).
                                                                 This bit will read 1 until initialization is complete, at which time it will
                                                                 turn 0 to indicate initialization done. */
        uint64_t rx_port_go            : 1;  /**< [  2:  2](R/W) When set to 1, the stats related to ingress Port value in CSE will start
                                                                 initialization sequence (clearing all counters to 0).
                                                                 This bit will read 1 until initialization is complete, at which time it will
                                                                 turn 0 to indicate initialization done. */
        uint64_t rx_sc_go              : 1;  /**< [  1:  1](R/W) When set to 1, the stats related to ingress SC value in CSE will start
                                                                 initialization sequence (clearing all counters to 0).
                                                                 This bit will read 1 until initialization is complete, at which time it will
                                                                 turn 0 to indicate initialization done. */
        uint64_t rx_secy_go            : 1;  /**< [  0:  0](R/W) When set to 1, the stats related to ingress SecY value in CSE will start
                                                                 initialization sequence (clearing all counters to 0).
                                                                 This bit will read 1 until initialization is complete, at which time it will
                                                                 turn 0 to indicate initialization done. */
#else /* Word 0 - Little Endian */
        uint64_t rx_secy_go            : 1;  /**< [  0:  0](R/W) When set to 1, the stats related to ingress SecY value in CSE will start
                                                                 initialization sequence (clearing all counters to 0).
                                                                 This bit will read 1 until initialization is complete, at which time it will
                                                                 turn 0 to indicate initialization done. */
        uint64_t rx_sc_go              : 1;  /**< [  1:  1](R/W) When set to 1, the stats related to ingress SC value in CSE will start
                                                                 initialization sequence (clearing all counters to 0).
                                                                 This bit will read 1 until initialization is complete, at which time it will
                                                                 turn 0 to indicate initialization done. */
        uint64_t rx_port_go            : 1;  /**< [  2:  2](R/W) When set to 1, the stats related to ingress Port value in CSE will start
                                                                 initialization sequence (clearing all counters to 0).
                                                                 This bit will read 1 until initialization is complete, at which time it will
                                                                 turn 0 to indicate initialization done. */
        uint64_t rx_flowid_go          : 1;  /**< [  3:  3](R/W) When set to 1, the stats related to ingress FlowID value in CSE will start
                                                                 initialization sequence (clearing all counters to 0).
                                                                 This bit will read 1 until initialization is complete, at which time it will
                                                                 turn 0 to indicate initialization done. */
        uint64_t reserved_4_63         : 60;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_mcsx_cse_rx_slave_stats_clear_s cn; */
};
typedef union cavm_mcsx_cse_rx_slave_stats_clear cavm_mcsx_cse_rx_slave_stats_clear_t;

static inline uint64_t CAVM_MCSX_CSE_RX_SLAVE_STATS_CLEAR(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_MCSX_CSE_RX_SLAVE_STATS_CLEAR(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CNF10KB) && (a<=6))
        return 0x87e0800009d8ll + 0x1000000ll * ((a) & 0x7);
    __cavm_csr_fatal("MCSX_CSE_RX_SLAVE_STATS_CLEAR", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_MCSX_CSE_RX_SLAVE_STATS_CLEAR(a) cavm_mcsx_cse_rx_slave_stats_clear_t
#define bustype_CAVM_MCSX_CSE_RX_SLAVE_STATS_CLEAR(a) CSR_TYPE_RSL
#define basename_CAVM_MCSX_CSE_RX_SLAVE_STATS_CLEAR(a) "MCSX_CSE_RX_SLAVE_STATS_CLEAR"
#define device_bar_CAVM_MCSX_CSE_RX_SLAVE_STATS_CLEAR(a) 0x0 /* PF_BAR0 */
#define busnum_CAVM_MCSX_CSE_RX_SLAVE_STATS_CLEAR(a) (a)
#define arguments_CAVM_MCSX_CSE_RX_SLAVE_STATS_CLEAR(a) (a),-1,-1,-1

/**
 * Register (RSL) mcs#_cse_tx_mem_slave_ifoutctlbcpkts#
 *
 * MCS Cse Tx Mem Slave Ifoutctlbcpkts Register
 * Broadcast packets permitted by the controlled port policies of this SecY
 */
union cavm_mcsx_cse_tx_mem_slave_ifoutctlbcpktsx
{
    uint64_t u;
    struct cavm_mcsx_cse_tx_mem_slave_ifoutctlbcpktsx_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t tx_ctl_pkt_bcast_cnt  : 64; /**< [ 63:  0](R/W) Egress Broadcast packet count value for controlled ports of this SecY. */
#else /* Word 0 - Little Endian */
        uint64_t tx_ctl_pkt_bcast_cnt  : 64; /**< [ 63:  0](R/W) Egress Broadcast packet count value for controlled ports of this SecY. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_mcsx_cse_tx_mem_slave_ifoutctlbcpktsx_s cn; */
};
typedef union cavm_mcsx_cse_tx_mem_slave_ifoutctlbcpktsx cavm_mcsx_cse_tx_mem_slave_ifoutctlbcpktsx_t;

static inline uint64_t CAVM_MCSX_CSE_TX_MEM_SLAVE_IFOUTCTLBCPKTSX(uint64_t a, uint64_t b) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_MCSX_CSE_TX_MEM_SLAVE_IFOUTCTLBCPKTSX(uint64_t a, uint64_t b)
{
    if (cavm_is_model(OCTEONTX_CNF10KB) && ((a<=6) && (b<=63)))
        return 0x87e08000f478ll + 0x1000000ll * ((a) & 0x7) + 8ll * ((b) & 0x3f);
    __cavm_csr_fatal("MCSX_CSE_TX_MEM_SLAVE_IFOUTCTLBCPKTSX", 2, a, b, 0, 0, 0, 0);
}

#define typedef_CAVM_MCSX_CSE_TX_MEM_SLAVE_IFOUTCTLBCPKTSX(a,b) cavm_mcsx_cse_tx_mem_slave_ifoutctlbcpktsx_t
#define bustype_CAVM_MCSX_CSE_TX_MEM_SLAVE_IFOUTCTLBCPKTSX(a,b) CSR_TYPE_RSL
#define basename_CAVM_MCSX_CSE_TX_MEM_SLAVE_IFOUTCTLBCPKTSX(a,b) "MCSX_CSE_TX_MEM_SLAVE_IFOUTCTLBCPKTSX"
#define device_bar_CAVM_MCSX_CSE_TX_MEM_SLAVE_IFOUTCTLBCPKTSX(a,b) 0x0 /* PF_BAR0 */
#define busnum_CAVM_MCSX_CSE_TX_MEM_SLAVE_IFOUTCTLBCPKTSX(a,b) (a)
#define arguments_CAVM_MCSX_CSE_TX_MEM_SLAVE_IFOUTCTLBCPKTSX(a,b) (a),(b),-1,-1

/**
 * Register (RSL) mcs#_cse_tx_mem_slave_ifoutctlmcpkts#
 *
 * MCS Cse Tx Mem Slave Ifoutctlmcpkts Register
 * Multicast packets permitted by the controlled port policies of this SecY
 */
union cavm_mcsx_cse_tx_mem_slave_ifoutctlmcpktsx
{
    uint64_t u;
    struct cavm_mcsx_cse_tx_mem_slave_ifoutctlmcpktsx_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t tx_ctl_pkt_mcast_cnt  : 64; /**< [ 63:  0](R/W) Egress Multicast packet count value for controlled ports of this SecY. */
#else /* Word 0 - Little Endian */
        uint64_t tx_ctl_pkt_mcast_cnt  : 64; /**< [ 63:  0](R/W) Egress Multicast packet count value for controlled ports of this SecY. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_mcsx_cse_tx_mem_slave_ifoutctlmcpktsx_s cn; */
};
typedef union cavm_mcsx_cse_tx_mem_slave_ifoutctlmcpktsx cavm_mcsx_cse_tx_mem_slave_ifoutctlmcpktsx_t;

static inline uint64_t CAVM_MCSX_CSE_TX_MEM_SLAVE_IFOUTCTLMCPKTSX(uint64_t a, uint64_t b) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_MCSX_CSE_TX_MEM_SLAVE_IFOUTCTLMCPKTSX(uint64_t a, uint64_t b)
{
    if (cavm_is_model(OCTEONTX_CNF10KB) && ((a<=6) && (b<=63)))
        return 0x87e08000f278ll + 0x1000000ll * ((a) & 0x7) + 8ll * ((b) & 0x3f);
    __cavm_csr_fatal("MCSX_CSE_TX_MEM_SLAVE_IFOUTCTLMCPKTSX", 2, a, b, 0, 0, 0, 0);
}

#define typedef_CAVM_MCSX_CSE_TX_MEM_SLAVE_IFOUTCTLMCPKTSX(a,b) cavm_mcsx_cse_tx_mem_slave_ifoutctlmcpktsx_t
#define bustype_CAVM_MCSX_CSE_TX_MEM_SLAVE_IFOUTCTLMCPKTSX(a,b) CSR_TYPE_RSL
#define basename_CAVM_MCSX_CSE_TX_MEM_SLAVE_IFOUTCTLMCPKTSX(a,b) "MCSX_CSE_TX_MEM_SLAVE_IFOUTCTLMCPKTSX"
#define device_bar_CAVM_MCSX_CSE_TX_MEM_SLAVE_IFOUTCTLMCPKTSX(a,b) 0x0 /* PF_BAR0 */
#define busnum_CAVM_MCSX_CSE_TX_MEM_SLAVE_IFOUTCTLMCPKTSX(a,b) (a)
#define arguments_CAVM_MCSX_CSE_TX_MEM_SLAVE_IFOUTCTLMCPKTSX(a,b) (a),(b),-1,-1

/**
 * Register (RSL) mcs#_cse_tx_mem_slave_ifoutctloctets#
 *
 * MCS Cse Tx Mem Slave Ifoutctloctets Register
 * Total MSDU and MAC-DA/SA Octets that are permitted by the controlled port policies of this SecY.
 */
union cavm_mcsx_cse_tx_mem_slave_ifoutctloctetsx
{
    uint64_t u;
    struct cavm_mcsx_cse_tx_mem_slave_ifoutctloctetsx_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t tx_ctl_octet_cnt      : 64; /**< [ 63:  0](R/W) Egress Total MSDU and MAC-DA/SA Octets that are permitted by the controlled port
                                                                 policies of this SecY. */
#else /* Word 0 - Little Endian */
        uint64_t tx_ctl_octet_cnt      : 64; /**< [ 63:  0](R/W) Egress Total MSDU and MAC-DA/SA Octets that are permitted by the controlled port
                                                                 policies of this SecY. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_mcsx_cse_tx_mem_slave_ifoutctloctetsx_s cn; */
};
typedef union cavm_mcsx_cse_tx_mem_slave_ifoutctloctetsx cavm_mcsx_cse_tx_mem_slave_ifoutctloctetsx_t;

static inline uint64_t CAVM_MCSX_CSE_TX_MEM_SLAVE_IFOUTCTLOCTETSX(uint64_t a, uint64_t b) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_MCSX_CSE_TX_MEM_SLAVE_IFOUTCTLOCTETSX(uint64_t a, uint64_t b)
{
    if (cavm_is_model(OCTEONTX_CNF10KB) && ((a<=6) && (b<=63)))
        return 0x87e08000ee78ll + 0x1000000ll * ((a) & 0x7) + 8ll * ((b) & 0x3f);
    __cavm_csr_fatal("MCSX_CSE_TX_MEM_SLAVE_IFOUTCTLOCTETSX", 2, a, b, 0, 0, 0, 0);
}

#define typedef_CAVM_MCSX_CSE_TX_MEM_SLAVE_IFOUTCTLOCTETSX(a,b) cavm_mcsx_cse_tx_mem_slave_ifoutctloctetsx_t
#define bustype_CAVM_MCSX_CSE_TX_MEM_SLAVE_IFOUTCTLOCTETSX(a,b) CSR_TYPE_RSL
#define basename_CAVM_MCSX_CSE_TX_MEM_SLAVE_IFOUTCTLOCTETSX(a,b) "MCSX_CSE_TX_MEM_SLAVE_IFOUTCTLOCTETSX"
#define device_bar_CAVM_MCSX_CSE_TX_MEM_SLAVE_IFOUTCTLOCTETSX(a,b) 0x0 /* PF_BAR0 */
#define busnum_CAVM_MCSX_CSE_TX_MEM_SLAVE_IFOUTCTLOCTETSX(a,b) (a)
#define arguments_CAVM_MCSX_CSE_TX_MEM_SLAVE_IFOUTCTLOCTETSX(a,b) (a),(b),-1,-1

/**
 * Register (RSL) mcs#_cse_tx_mem_slave_ifoutctlucpkts#
 *
 * MCS Cse Tx Mem Slave Ifoutctlucpkts Register
 * Unicast packets permitted by the controlled port policies of this SecY
 */
union cavm_mcsx_cse_tx_mem_slave_ifoutctlucpktsx
{
    uint64_t u;
    struct cavm_mcsx_cse_tx_mem_slave_ifoutctlucpktsx_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t tx_ctl_pkt_ucast_cnt  : 64; /**< [ 63:  0](R/W) Egress Unicast packet count value for controlled ports of this SecY. */
#else /* Word 0 - Little Endian */
        uint64_t tx_ctl_pkt_ucast_cnt  : 64; /**< [ 63:  0](R/W) Egress Unicast packet count value for controlled ports of this SecY. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_mcsx_cse_tx_mem_slave_ifoutctlucpktsx_s cn; */
};
typedef union cavm_mcsx_cse_tx_mem_slave_ifoutctlucpktsx cavm_mcsx_cse_tx_mem_slave_ifoutctlucpktsx_t;

static inline uint64_t CAVM_MCSX_CSE_TX_MEM_SLAVE_IFOUTCTLUCPKTSX(uint64_t a, uint64_t b) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_MCSX_CSE_TX_MEM_SLAVE_IFOUTCTLUCPKTSX(uint64_t a, uint64_t b)
{
    if (cavm_is_model(OCTEONTX_CNF10KB) && ((a<=6) && (b<=63)))
        return 0x87e08000f078ll + 0x1000000ll * ((a) & 0x7) + 8ll * ((b) & 0x3f);
    __cavm_csr_fatal("MCSX_CSE_TX_MEM_SLAVE_IFOUTCTLUCPKTSX", 2, a, b, 0, 0, 0, 0);
}

#define typedef_CAVM_MCSX_CSE_TX_MEM_SLAVE_IFOUTCTLUCPKTSX(a,b) cavm_mcsx_cse_tx_mem_slave_ifoutctlucpktsx_t
#define bustype_CAVM_MCSX_CSE_TX_MEM_SLAVE_IFOUTCTLUCPKTSX(a,b) CSR_TYPE_RSL
#define basename_CAVM_MCSX_CSE_TX_MEM_SLAVE_IFOUTCTLUCPKTSX(a,b) "MCSX_CSE_TX_MEM_SLAVE_IFOUTCTLUCPKTSX"
#define device_bar_CAVM_MCSX_CSE_TX_MEM_SLAVE_IFOUTCTLUCPKTSX(a,b) 0x0 /* PF_BAR0 */
#define busnum_CAVM_MCSX_CSE_TX_MEM_SLAVE_IFOUTCTLUCPKTSX(a,b) (a)
#define arguments_CAVM_MCSX_CSE_TX_MEM_SLAVE_IFOUTCTLUCPKTSX(a,b) (a),(b),-1,-1

/**
 * Register (RSL) mcs#_cse_tx_mem_slave_ifoutunctlbcpkts#
 *
 * MCS Cse Tx Mem Slave Ifoutunctlbcpkts Register
 * Broadcast packets permitted by the uncontrolled port policies of this SecY
 */
union cavm_mcsx_cse_tx_mem_slave_ifoutunctlbcpktsx
{
    uint64_t u;
    struct cavm_mcsx_cse_tx_mem_slave_ifoutunctlbcpktsx_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t tx_unctl_pkt_bcast_cnt : 64;/**< [ 63:  0](R/W) Egress Broadcast packet count value for uncontrolled ports of this SecY. */
#else /* Word 0 - Little Endian */
        uint64_t tx_unctl_pkt_bcast_cnt : 64;/**< [ 63:  0](R/W) Egress Broadcast packet count value for uncontrolled ports of this SecY. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_mcsx_cse_tx_mem_slave_ifoutunctlbcpktsx_s cn; */
};
typedef union cavm_mcsx_cse_tx_mem_slave_ifoutunctlbcpktsx cavm_mcsx_cse_tx_mem_slave_ifoutunctlbcpktsx_t;

static inline uint64_t CAVM_MCSX_CSE_TX_MEM_SLAVE_IFOUTUNCTLBCPKTSX(uint64_t a, uint64_t b) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_MCSX_CSE_TX_MEM_SLAVE_IFOUTUNCTLBCPKTSX(uint64_t a, uint64_t b)
{
    if (cavm_is_model(OCTEONTX_CNF10KB) && ((a<=6) && (b<=63)))
        return 0x87e08000fc78ll + 0x1000000ll * ((a) & 0x7) + 8ll * ((b) & 0x3f);
    __cavm_csr_fatal("MCSX_CSE_TX_MEM_SLAVE_IFOUTUNCTLBCPKTSX", 2, a, b, 0, 0, 0, 0);
}

#define typedef_CAVM_MCSX_CSE_TX_MEM_SLAVE_IFOUTUNCTLBCPKTSX(a,b) cavm_mcsx_cse_tx_mem_slave_ifoutunctlbcpktsx_t
#define bustype_CAVM_MCSX_CSE_TX_MEM_SLAVE_IFOUTUNCTLBCPKTSX(a,b) CSR_TYPE_RSL
#define basename_CAVM_MCSX_CSE_TX_MEM_SLAVE_IFOUTUNCTLBCPKTSX(a,b) "MCSX_CSE_TX_MEM_SLAVE_IFOUTUNCTLBCPKTSX"
#define device_bar_CAVM_MCSX_CSE_TX_MEM_SLAVE_IFOUTUNCTLBCPKTSX(a,b) 0x0 /* PF_BAR0 */
#define busnum_CAVM_MCSX_CSE_TX_MEM_SLAVE_IFOUTUNCTLBCPKTSX(a,b) (a)
#define arguments_CAVM_MCSX_CSE_TX_MEM_SLAVE_IFOUTUNCTLBCPKTSX(a,b) (a),(b),-1,-1

/**
 * Register (RSL) mcs#_cse_tx_mem_slave_ifoutunctlmcpkts#
 *
 * MCS Cse Tx Mem Slave Ifoutunctlmcpkts Register
 * Multicast packets permitted by the uncontrolled port policies of this SecY
 */
union cavm_mcsx_cse_tx_mem_slave_ifoutunctlmcpktsx
{
    uint64_t u;
    struct cavm_mcsx_cse_tx_mem_slave_ifoutunctlmcpktsx_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t tx_unctl_pkt_mcast_cnt : 64;/**< [ 63:  0](R/W) Egress Multicast packet count value for uncontrolled ports of this SecY. */
#else /* Word 0 - Little Endian */
        uint64_t tx_unctl_pkt_mcast_cnt : 64;/**< [ 63:  0](R/W) Egress Multicast packet count value for uncontrolled ports of this SecY. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_mcsx_cse_tx_mem_slave_ifoutunctlmcpktsx_s cn; */
};
typedef union cavm_mcsx_cse_tx_mem_slave_ifoutunctlmcpktsx cavm_mcsx_cse_tx_mem_slave_ifoutunctlmcpktsx_t;

static inline uint64_t CAVM_MCSX_CSE_TX_MEM_SLAVE_IFOUTUNCTLMCPKTSX(uint64_t a, uint64_t b) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_MCSX_CSE_TX_MEM_SLAVE_IFOUTUNCTLMCPKTSX(uint64_t a, uint64_t b)
{
    if (cavm_is_model(OCTEONTX_CNF10KB) && ((a<=6) && (b<=63)))
        return 0x87e08000fa78ll + 0x1000000ll * ((a) & 0x7) + 8ll * ((b) & 0x3f);
    __cavm_csr_fatal("MCSX_CSE_TX_MEM_SLAVE_IFOUTUNCTLMCPKTSX", 2, a, b, 0, 0, 0, 0);
}

#define typedef_CAVM_MCSX_CSE_TX_MEM_SLAVE_IFOUTUNCTLMCPKTSX(a,b) cavm_mcsx_cse_tx_mem_slave_ifoutunctlmcpktsx_t
#define bustype_CAVM_MCSX_CSE_TX_MEM_SLAVE_IFOUTUNCTLMCPKTSX(a,b) CSR_TYPE_RSL
#define basename_CAVM_MCSX_CSE_TX_MEM_SLAVE_IFOUTUNCTLMCPKTSX(a,b) "MCSX_CSE_TX_MEM_SLAVE_IFOUTUNCTLMCPKTSX"
#define device_bar_CAVM_MCSX_CSE_TX_MEM_SLAVE_IFOUTUNCTLMCPKTSX(a,b) 0x0 /* PF_BAR0 */
#define busnum_CAVM_MCSX_CSE_TX_MEM_SLAVE_IFOUTUNCTLMCPKTSX(a,b) (a)
#define arguments_CAVM_MCSX_CSE_TX_MEM_SLAVE_IFOUTUNCTLMCPKTSX(a,b) (a),(b),-1,-1

/**
 * Register (RSL) mcs#_cse_tx_mem_slave_ifoutunctloctets#
 *
 * MCS Cse Tx Mem Slave Ifoutunctloctets Register
 * Total MSDU and MAC-DA/SA Octets that are permitted by the uncontrolled port policies of this SecY.
 */
union cavm_mcsx_cse_tx_mem_slave_ifoutunctloctetsx
{
    uint64_t u;
    struct cavm_mcsx_cse_tx_mem_slave_ifoutunctloctetsx_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t tx_unctl_octet_cnt    : 64; /**< [ 63:  0](R/W) Egress Total MSDU and MAC-DA/SA Octets that are permitted by the uncontrolled
                                                                 port policies of this SecY. */
#else /* Word 0 - Little Endian */
        uint64_t tx_unctl_octet_cnt    : 64; /**< [ 63:  0](R/W) Egress Total MSDU and MAC-DA/SA Octets that are permitted by the uncontrolled
                                                                 port policies of this SecY. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_mcsx_cse_tx_mem_slave_ifoutunctloctetsx_s cn; */
};
typedef union cavm_mcsx_cse_tx_mem_slave_ifoutunctloctetsx cavm_mcsx_cse_tx_mem_slave_ifoutunctloctetsx_t;

static inline uint64_t CAVM_MCSX_CSE_TX_MEM_SLAVE_IFOUTUNCTLOCTETSX(uint64_t a, uint64_t b) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_MCSX_CSE_TX_MEM_SLAVE_IFOUTUNCTLOCTETSX(uint64_t a, uint64_t b)
{
    if (cavm_is_model(OCTEONTX_CNF10KB) && ((a<=6) && (b<=63)))
        return 0x87e08000f678ll + 0x1000000ll * ((a) & 0x7) + 8ll * ((b) & 0x3f);
    __cavm_csr_fatal("MCSX_CSE_TX_MEM_SLAVE_IFOUTUNCTLOCTETSX", 2, a, b, 0, 0, 0, 0);
}

#define typedef_CAVM_MCSX_CSE_TX_MEM_SLAVE_IFOUTUNCTLOCTETSX(a,b) cavm_mcsx_cse_tx_mem_slave_ifoutunctloctetsx_t
#define bustype_CAVM_MCSX_CSE_TX_MEM_SLAVE_IFOUTUNCTLOCTETSX(a,b) CSR_TYPE_RSL
#define basename_CAVM_MCSX_CSE_TX_MEM_SLAVE_IFOUTUNCTLOCTETSX(a,b) "MCSX_CSE_TX_MEM_SLAVE_IFOUTUNCTLOCTETSX"
#define device_bar_CAVM_MCSX_CSE_TX_MEM_SLAVE_IFOUTUNCTLOCTETSX(a,b) 0x0 /* PF_BAR0 */
#define busnum_CAVM_MCSX_CSE_TX_MEM_SLAVE_IFOUTUNCTLOCTETSX(a,b) (a)
#define arguments_CAVM_MCSX_CSE_TX_MEM_SLAVE_IFOUTUNCTLOCTETSX(a,b) (a),(b),-1,-1

/**
 * Register (RSL) mcs#_cse_tx_mem_slave_ifoutunctlucpkts#
 *
 * MCS Cse Tx Mem Slave Ifoutunctlucpkts Register
 * Unicast packets permitted by the uncontrolled port policies of this SecY
 */
union cavm_mcsx_cse_tx_mem_slave_ifoutunctlucpktsx
{
    uint64_t u;
    struct cavm_mcsx_cse_tx_mem_slave_ifoutunctlucpktsx_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t tx_unctl_pkt_ucast_cnt : 64;/**< [ 63:  0](R/W) Egress Unicast packet count value for uncontrolled ports of this SecY. */
#else /* Word 0 - Little Endian */
        uint64_t tx_unctl_pkt_ucast_cnt : 64;/**< [ 63:  0](R/W) Egress Unicast packet count value for uncontrolled ports of this SecY. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_mcsx_cse_tx_mem_slave_ifoutunctlucpktsx_s cn; */
};
typedef union cavm_mcsx_cse_tx_mem_slave_ifoutunctlucpktsx cavm_mcsx_cse_tx_mem_slave_ifoutunctlucpktsx_t;

static inline uint64_t CAVM_MCSX_CSE_TX_MEM_SLAVE_IFOUTUNCTLUCPKTSX(uint64_t a, uint64_t b) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_MCSX_CSE_TX_MEM_SLAVE_IFOUTUNCTLUCPKTSX(uint64_t a, uint64_t b)
{
    if (cavm_is_model(OCTEONTX_CNF10KB) && ((a<=6) && (b<=63)))
        return 0x87e08000f878ll + 0x1000000ll * ((a) & 0x7) + 8ll * ((b) & 0x3f);
    __cavm_csr_fatal("MCSX_CSE_TX_MEM_SLAVE_IFOUTUNCTLUCPKTSX", 2, a, b, 0, 0, 0, 0);
}

#define typedef_CAVM_MCSX_CSE_TX_MEM_SLAVE_IFOUTUNCTLUCPKTSX(a,b) cavm_mcsx_cse_tx_mem_slave_ifoutunctlucpktsx_t
#define bustype_CAVM_MCSX_CSE_TX_MEM_SLAVE_IFOUTUNCTLUCPKTSX(a,b) CSR_TYPE_RSL
#define basename_CAVM_MCSX_CSE_TX_MEM_SLAVE_IFOUTUNCTLUCPKTSX(a,b) "MCSX_CSE_TX_MEM_SLAVE_IFOUTUNCTLUCPKTSX"
#define device_bar_CAVM_MCSX_CSE_TX_MEM_SLAVE_IFOUTUNCTLUCPKTSX(a,b) 0x0 /* PF_BAR0 */
#define busnum_CAVM_MCSX_CSE_TX_MEM_SLAVE_IFOUTUNCTLUCPKTSX(a,b) (a)
#define arguments_CAVM_MCSX_CSE_TX_MEM_SLAVE_IFOUTUNCTLUCPKTSX(a,b) (a),(b),-1,-1

/**
 * Register (RSL) mcs#_cse_tx_mem_slave_outoctetssecyencrypted#
 *
 * MCS Cse Tx Mem Slave Outoctetssecyencrypted Register
 * The number of plain text octets integrity protected and encrypted in transmitted frames.
 */
union cavm_mcsx_cse_tx_mem_slave_outoctetssecyencryptedx
{
    uint64_t u;
    struct cavm_mcsx_cse_tx_mem_slave_outoctetssecyencryptedx_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t tx_secy_octet_encrypted_cnt : 64;/**< [ 63:  0](R/W) The number of plain text octets integrity protected and encrypted in transmitted frames. */
#else /* Word 0 - Little Endian */
        uint64_t tx_secy_octet_encrypted_cnt : 64;/**< [ 63:  0](R/W) The number of plain text octets integrity protected and encrypted in transmitted frames. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_mcsx_cse_tx_mem_slave_outoctetssecyencryptedx_s cn; */
};
typedef union cavm_mcsx_cse_tx_mem_slave_outoctetssecyencryptedx cavm_mcsx_cse_tx_mem_slave_outoctetssecyencryptedx_t;

static inline uint64_t CAVM_MCSX_CSE_TX_MEM_SLAVE_OUTOCTETSSECYENCRYPTEDX(uint64_t a, uint64_t b) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_MCSX_CSE_TX_MEM_SLAVE_OUTOCTETSSECYENCRYPTEDX(uint64_t a, uint64_t b)
{
    if (cavm_is_model(OCTEONTX_CNF10KB) && ((a<=6) && (b<=63)))
        return 0x87e080010878ll + 0x1000000ll * ((a) & 0x7) + 8ll * ((b) & 0x3f);
    __cavm_csr_fatal("MCSX_CSE_TX_MEM_SLAVE_OUTOCTETSSECYENCRYPTEDX", 2, a, b, 0, 0, 0, 0);
}

#define typedef_CAVM_MCSX_CSE_TX_MEM_SLAVE_OUTOCTETSSECYENCRYPTEDX(a,b) cavm_mcsx_cse_tx_mem_slave_outoctetssecyencryptedx_t
#define bustype_CAVM_MCSX_CSE_TX_MEM_SLAVE_OUTOCTETSSECYENCRYPTEDX(a,b) CSR_TYPE_RSL
#define basename_CAVM_MCSX_CSE_TX_MEM_SLAVE_OUTOCTETSSECYENCRYPTEDX(a,b) "MCSX_CSE_TX_MEM_SLAVE_OUTOCTETSSECYENCRYPTEDX"
#define device_bar_CAVM_MCSX_CSE_TX_MEM_SLAVE_OUTOCTETSSECYENCRYPTEDX(a,b) 0x0 /* PF_BAR0 */
#define busnum_CAVM_MCSX_CSE_TX_MEM_SLAVE_OUTOCTETSSECYENCRYPTEDX(a,b) (a)
#define arguments_CAVM_MCSX_CSE_TX_MEM_SLAVE_OUTOCTETSSECYENCRYPTEDX(a,b) (a),(b),-1,-1

/**
 * Register (RSL) mcs#_cse_tx_mem_slave_outoctetssecyprotected#
 *
 * MCS Cse Tx Mem Slave Outoctetssecyprotected Register
 * The number of plain text octets integrity protected but not encrypted in transmitted frames.
 */
union cavm_mcsx_cse_tx_mem_slave_outoctetssecyprotectedx
{
    uint64_t u;
    struct cavm_mcsx_cse_tx_mem_slave_outoctetssecyprotectedx_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t tx_secy_octet_protected_cnt : 64;/**< [ 63:  0](R/W) The number of plain text octets integrity protected but not encrypted in transmitted frames. */
#else /* Word 0 - Little Endian */
        uint64_t tx_secy_octet_protected_cnt : 64;/**< [ 63:  0](R/W) The number of plain text octets integrity protected but not encrypted in transmitted frames. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_mcsx_cse_tx_mem_slave_outoctetssecyprotectedx_s cn; */
};
typedef union cavm_mcsx_cse_tx_mem_slave_outoctetssecyprotectedx cavm_mcsx_cse_tx_mem_slave_outoctetssecyprotectedx_t;

static inline uint64_t CAVM_MCSX_CSE_TX_MEM_SLAVE_OUTOCTETSSECYPROTECTEDX(uint64_t a, uint64_t b) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_MCSX_CSE_TX_MEM_SLAVE_OUTOCTETSSECYPROTECTEDX(uint64_t a, uint64_t b)
{
    if (cavm_is_model(OCTEONTX_CNF10KB) && ((a<=6) && (b<=63)))
        return 0x87e080010678ll + 0x1000000ll * ((a) & 0x7) + 8ll * ((b) & 0x3f);
    __cavm_csr_fatal("MCSX_CSE_TX_MEM_SLAVE_OUTOCTETSSECYPROTECTEDX", 2, a, b, 0, 0, 0, 0);
}

#define typedef_CAVM_MCSX_CSE_TX_MEM_SLAVE_OUTOCTETSSECYPROTECTEDX(a,b) cavm_mcsx_cse_tx_mem_slave_outoctetssecyprotectedx_t
#define bustype_CAVM_MCSX_CSE_TX_MEM_SLAVE_OUTOCTETSSECYPROTECTEDX(a,b) CSR_TYPE_RSL
#define basename_CAVM_MCSX_CSE_TX_MEM_SLAVE_OUTOCTETSSECYPROTECTEDX(a,b) "MCSX_CSE_TX_MEM_SLAVE_OUTOCTETSSECYPROTECTEDX"
#define device_bar_CAVM_MCSX_CSE_TX_MEM_SLAVE_OUTOCTETSSECYPROTECTEDX(a,b) 0x0 /* PF_BAR0 */
#define busnum_CAVM_MCSX_CSE_TX_MEM_SLAVE_OUTOCTETSSECYPROTECTEDX(a,b) (a)
#define arguments_CAVM_MCSX_CSE_TX_MEM_SLAVE_OUTOCTETSSECYPROTECTEDX(a,b) (a),(b),-1,-1

/**
 * Register (RSL) mcs#_cse_tx_mem_slave_outpktsctrlportdisabled#
 *
 * MCS Cse Tx Mem Slave Outpktsctrlportdisabled Register
 * The number of packets received on disabled SecY.
 */
union cavm_mcsx_cse_tx_mem_slave_outpktsctrlportdisabledx
{
    uint64_t u;
    struct cavm_mcsx_cse_tx_mem_slave_outpktsctrlportdisabledx_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t tx_secy_pkt_ctrl_port_disabled_cnt : 64;/**< [ 63:  0](R/W) The number of packets received on disabled SecY. */
#else /* Word 0 - Little Endian */
        uint64_t tx_secy_pkt_ctrl_port_disabled_cnt : 64;/**< [ 63:  0](R/W) The number of packets received on disabled SecY. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_mcsx_cse_tx_mem_slave_outpktsctrlportdisabledx_s cn; */
};
typedef union cavm_mcsx_cse_tx_mem_slave_outpktsctrlportdisabledx cavm_mcsx_cse_tx_mem_slave_outpktsctrlportdisabledx_t;

static inline uint64_t CAVM_MCSX_CSE_TX_MEM_SLAVE_OUTPKTSCTRLPORTDISABLEDX(uint64_t a, uint64_t b) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_MCSX_CSE_TX_MEM_SLAVE_OUTPKTSCTRLPORTDISABLEDX(uint64_t a, uint64_t b)
{
    if (cavm_is_model(OCTEONTX_CNF10KB) && ((a<=6) && (b<=63)))
        return 0x87e08000fe78ll + 0x1000000ll * ((a) & 0x7) + 8ll * ((b) & 0x3f);
    __cavm_csr_fatal("MCSX_CSE_TX_MEM_SLAVE_OUTPKTSCTRLPORTDISABLEDX", 2, a, b, 0, 0, 0, 0);
}

#define typedef_CAVM_MCSX_CSE_TX_MEM_SLAVE_OUTPKTSCTRLPORTDISABLEDX(a,b) cavm_mcsx_cse_tx_mem_slave_outpktsctrlportdisabledx_t
#define bustype_CAVM_MCSX_CSE_TX_MEM_SLAVE_OUTPKTSCTRLPORTDISABLEDX(a,b) CSR_TYPE_RSL
#define basename_CAVM_MCSX_CSE_TX_MEM_SLAVE_OUTPKTSCTRLPORTDISABLEDX(a,b) "MCSX_CSE_TX_MEM_SLAVE_OUTPKTSCTRLPORTDISABLEDX"
#define device_bar_CAVM_MCSX_CSE_TX_MEM_SLAVE_OUTPKTSCTRLPORTDISABLEDX(a,b) 0x0 /* PF_BAR0 */
#define busnum_CAVM_MCSX_CSE_TX_MEM_SLAVE_OUTPKTSCTRLPORTDISABLEDX(a,b) (a)
#define arguments_CAVM_MCSX_CSE_TX_MEM_SLAVE_OUTPKTSCTRLPORTDISABLEDX(a,b) (a),(b),-1,-1

/**
 * Register (RSL) mcs#_cse_tx_mem_slave_outpktsearlypreempterr#
 *
 * MCS Cse Tx Mem Slave Outpktsearlypreempterr Register
 * The number of packets with Early Preemption violations detected per port.
 */
union cavm_mcsx_cse_tx_mem_slave_outpktsearlypreempterrx
{
    uint64_t u;
    struct cavm_mcsx_cse_tx_mem_slave_outpktsearlypreempterrx_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t tx_port_pkt_early_preempt_err_cnt : 64;/**< [ 63:  0](R/W) The number of packets with Early Preemption violations detected per port. */
#else /* Word 0 - Little Endian */
        uint64_t tx_port_pkt_early_preempt_err_cnt : 64;/**< [ 63:  0](R/W) The number of packets with Early Preemption violations detected per port. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_mcsx_cse_tx_mem_slave_outpktsearlypreempterrx_s cn; */
};
typedef union cavm_mcsx_cse_tx_mem_slave_outpktsearlypreempterrx cavm_mcsx_cse_tx_mem_slave_outpktsearlypreempterrx_t;

static inline uint64_t CAVM_MCSX_CSE_TX_MEM_SLAVE_OUTPKTSEARLYPREEMPTERRX(uint64_t a, uint64_t b) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_MCSX_CSE_TX_MEM_SLAVE_OUTPKTSEARLYPREEMPTERRX(uint64_t a, uint64_t b)
{
    if (cavm_is_model(OCTEONTX_CNF10KB) && ((a<=6) && (b<=3)))
        return 0x87e080010eb8ll + 0x1000000ll * ((a) & 0x7) + 8ll * ((b) & 0x3);
    __cavm_csr_fatal("MCSX_CSE_TX_MEM_SLAVE_OUTPKTSEARLYPREEMPTERRX", 2, a, b, 0, 0, 0, 0);
}

#define typedef_CAVM_MCSX_CSE_TX_MEM_SLAVE_OUTPKTSEARLYPREEMPTERRX(a,b) cavm_mcsx_cse_tx_mem_slave_outpktsearlypreempterrx_t
#define bustype_CAVM_MCSX_CSE_TX_MEM_SLAVE_OUTPKTSEARLYPREEMPTERRX(a,b) CSR_TYPE_RSL
#define basename_CAVM_MCSX_CSE_TX_MEM_SLAVE_OUTPKTSEARLYPREEMPTERRX(a,b) "MCSX_CSE_TX_MEM_SLAVE_OUTPKTSEARLYPREEMPTERRX"
#define device_bar_CAVM_MCSX_CSE_TX_MEM_SLAVE_OUTPKTSEARLYPREEMPTERRX(a,b) 0x0 /* PF_BAR0 */
#define busnum_CAVM_MCSX_CSE_TX_MEM_SLAVE_OUTPKTSEARLYPREEMPTERRX(a,b) (a)
#define arguments_CAVM_MCSX_CSE_TX_MEM_SLAVE_OUTPKTSEARLYPREEMPTERRX(a,b) (a),(b),-1,-1

/**
 * Register (RSL) mcs#_cse_tx_mem_slave_outpktsflowidtcamhit#
 *
 * MCS Cse Tx Mem Slave Outpktsflowidtcamhit Register
 * The number of Flow ID TCAM hits per flow id entry.
 */
union cavm_mcsx_cse_tx_mem_slave_outpktsflowidtcamhitx
{
    uint64_t u;
    struct cavm_mcsx_cse_tx_mem_slave_outpktsflowidtcamhitx_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t tx_flowid_pkt_flowid_tcam_hit_cnt : 64;/**< [ 63:  0](R/W) The number of Flow ID TCAM hits per flow id entry. */
#else /* Word 0 - Little Endian */
        uint64_t tx_flowid_pkt_flowid_tcam_hit_cnt : 64;/**< [ 63:  0](R/W) The number of Flow ID TCAM hits per flow id entry. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_mcsx_cse_tx_mem_slave_outpktsflowidtcamhitx_s cn; */
};
typedef union cavm_mcsx_cse_tx_mem_slave_outpktsflowidtcamhitx cavm_mcsx_cse_tx_mem_slave_outpktsflowidtcamhitx_t;

static inline uint64_t CAVM_MCSX_CSE_TX_MEM_SLAVE_OUTPKTSFLOWIDTCAMHITX(uint64_t a, uint64_t b) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_MCSX_CSE_TX_MEM_SLAVE_OUTPKTSFLOWIDTCAMHITX(uint64_t a, uint64_t b)
{
    if (cavm_is_model(OCTEONTX_CNF10KB) && ((a<=6) && (b<=63)))
        return 0x87e080010ed8ll + 0x1000000ll * ((a) & 0x7) + 8ll * ((b) & 0x3f);
    __cavm_csr_fatal("MCSX_CSE_TX_MEM_SLAVE_OUTPKTSFLOWIDTCAMHITX", 2, a, b, 0, 0, 0, 0);
}

#define typedef_CAVM_MCSX_CSE_TX_MEM_SLAVE_OUTPKTSFLOWIDTCAMHITX(a,b) cavm_mcsx_cse_tx_mem_slave_outpktsflowidtcamhitx_t
#define bustype_CAVM_MCSX_CSE_TX_MEM_SLAVE_OUTPKTSFLOWIDTCAMHITX(a,b) CSR_TYPE_RSL
#define basename_CAVM_MCSX_CSE_TX_MEM_SLAVE_OUTPKTSFLOWIDTCAMHITX(a,b) "MCSX_CSE_TX_MEM_SLAVE_OUTPKTSFLOWIDTCAMHITX"
#define device_bar_CAVM_MCSX_CSE_TX_MEM_SLAVE_OUTPKTSFLOWIDTCAMHITX(a,b) 0x0 /* PF_BAR0 */
#define busnum_CAVM_MCSX_CSE_TX_MEM_SLAVE_OUTPKTSFLOWIDTCAMHITX(a,b) (a)
#define arguments_CAVM_MCSX_CSE_TX_MEM_SLAVE_OUTPKTSFLOWIDTCAMHITX(a,b) (a),(b),-1,-1

/**
 * Register (RSL) mcs#_cse_tx_mem_slave_outpktsflowidtcammiss#
 *
 * MCS Cse Tx Mem Slave Outpktsflowidtcammiss Register
 * The number of Flow ID TCAM misses per port.
 */
union cavm_mcsx_cse_tx_mem_slave_outpktsflowidtcammissx
{
    uint64_t u;
    struct cavm_mcsx_cse_tx_mem_slave_outpktsflowidtcammissx_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t tx_port_pkt_flowid_tcam_miss_cnt : 64;/**< [ 63:  0](R/W) The number of Flow ID TCAM misses per port. */
#else /* Word 0 - Little Endian */
        uint64_t tx_port_pkt_flowid_tcam_miss_cnt : 64;/**< [ 63:  0](R/W) The number of Flow ID TCAM misses per port. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_mcsx_cse_tx_mem_slave_outpktsflowidtcammissx_s cn; */
};
typedef union cavm_mcsx_cse_tx_mem_slave_outpktsflowidtcammissx cavm_mcsx_cse_tx_mem_slave_outpktsflowidtcammissx_t;

static inline uint64_t CAVM_MCSX_CSE_TX_MEM_SLAVE_OUTPKTSFLOWIDTCAMMISSX(uint64_t a, uint64_t b) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_MCSX_CSE_TX_MEM_SLAVE_OUTPKTSFLOWIDTCAMMISSX(uint64_t a, uint64_t b)
{
    if (cavm_is_model(OCTEONTX_CNF10KB) && ((a<=6) && (b<=3)))
        return 0x87e080010e98ll + 0x1000000ll * ((a) & 0x7) + 8ll * ((b) & 0x3);
    __cavm_csr_fatal("MCSX_CSE_TX_MEM_SLAVE_OUTPKTSFLOWIDTCAMMISSX", 2, a, b, 0, 0, 0, 0);
}

#define typedef_CAVM_MCSX_CSE_TX_MEM_SLAVE_OUTPKTSFLOWIDTCAMMISSX(a,b) cavm_mcsx_cse_tx_mem_slave_outpktsflowidtcammissx_t
#define bustype_CAVM_MCSX_CSE_TX_MEM_SLAVE_OUTPKTSFLOWIDTCAMMISSX(a,b) CSR_TYPE_RSL
#define basename_CAVM_MCSX_CSE_TX_MEM_SLAVE_OUTPKTSFLOWIDTCAMMISSX(a,b) "MCSX_CSE_TX_MEM_SLAVE_OUTPKTSFLOWIDTCAMMISSX"
#define device_bar_CAVM_MCSX_CSE_TX_MEM_SLAVE_OUTPKTSFLOWIDTCAMMISSX(a,b) 0x0 /* PF_BAR0 */
#define busnum_CAVM_MCSX_CSE_TX_MEM_SLAVE_OUTPKTSFLOWIDTCAMMISSX(a,b) (a)
#define arguments_CAVM_MCSX_CSE_TX_MEM_SLAVE_OUTPKTSFLOWIDTCAMMISSX(a,b) (a),(b),-1,-1

/**
 * Register (RSL) mcs#_cse_tx_mem_slave_outpktsparseerr#
 *
 * MCS Cse Tx Mem Slave Outpktsparseerr Register
 * The number of packets that have a parse error as indicated by PEX per port.
 */
union cavm_mcsx_cse_tx_mem_slave_outpktsparseerrx
{
    uint64_t u;
    struct cavm_mcsx_cse_tx_mem_slave_outpktsparseerrx_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t tx_port_pkt_parse_err_cnt : 64;/**< [ 63:  0](R/W) The number of packets that have a parse error as indicated by PEX per port. */
#else /* Word 0 - Little Endian */
        uint64_t tx_port_pkt_parse_err_cnt : 64;/**< [ 63:  0](R/W) The number of packets that have a parse error as indicated by PEX per port. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_mcsx_cse_tx_mem_slave_outpktsparseerrx_s cn; */
};
typedef union cavm_mcsx_cse_tx_mem_slave_outpktsparseerrx cavm_mcsx_cse_tx_mem_slave_outpktsparseerrx_t;

static inline uint64_t CAVM_MCSX_CSE_TX_MEM_SLAVE_OUTPKTSPARSEERRX(uint64_t a, uint64_t b) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_MCSX_CSE_TX_MEM_SLAVE_OUTPKTSPARSEERRX(uint64_t a, uint64_t b)
{
    if (cavm_is_model(OCTEONTX_CNF10KB) && ((a<=6) && (b<=3)))
        return 0x87e080010e78ll + 0x1000000ll * ((a) & 0x7) + 8ll * ((b) & 0x3);
    __cavm_csr_fatal("MCSX_CSE_TX_MEM_SLAVE_OUTPKTSPARSEERRX", 2, a, b, 0, 0, 0, 0);
}

#define typedef_CAVM_MCSX_CSE_TX_MEM_SLAVE_OUTPKTSPARSEERRX(a,b) cavm_mcsx_cse_tx_mem_slave_outpktsparseerrx_t
#define bustype_CAVM_MCSX_CSE_TX_MEM_SLAVE_OUTPKTSPARSEERRX(a,b) CSR_TYPE_RSL
#define basename_CAVM_MCSX_CSE_TX_MEM_SLAVE_OUTPKTSPARSEERRX(a,b) "MCSX_CSE_TX_MEM_SLAVE_OUTPKTSPARSEERRX"
#define device_bar_CAVM_MCSX_CSE_TX_MEM_SLAVE_OUTPKTSPARSEERRX(a,b) 0x0 /* PF_BAR0 */
#define busnum_CAVM_MCSX_CSE_TX_MEM_SLAVE_OUTPKTSPARSEERRX(a,b) (a)
#define arguments_CAVM_MCSX_CSE_TX_MEM_SLAVE_OUTPKTSPARSEERRX(a,b) (a),(b),-1,-1

/**
 * Register (RSL) mcs#_cse_tx_mem_slave_outpktsscencrypted#
 *
 * MCS Cse Tx Mem Slave Outpktsscencrypted Register
 * The number of integrity protected and encrypted packets for this transmit SC.
 */
union cavm_mcsx_cse_tx_mem_slave_outpktsscencryptedx
{
    uint64_t u;
    struct cavm_mcsx_cse_tx_mem_slave_outpktsscencryptedx_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t tx_sc_pkt_encrypted_cnt : 64;/**< [ 63:  0](R/W) The number of integrity protected and encrypted packets for this transmit SC. */
#else /* Word 0 - Little Endian */
        uint64_t tx_sc_pkt_encrypted_cnt : 64;/**< [ 63:  0](R/W) The number of integrity protected and encrypted packets for this transmit SC. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_mcsx_cse_tx_mem_slave_outpktsscencryptedx_s cn; */
};
typedef union cavm_mcsx_cse_tx_mem_slave_outpktsscencryptedx cavm_mcsx_cse_tx_mem_slave_outpktsscencryptedx_t;

static inline uint64_t CAVM_MCSX_CSE_TX_MEM_SLAVE_OUTPKTSSCENCRYPTEDX(uint64_t a, uint64_t b) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_MCSX_CSE_TX_MEM_SLAVE_OUTPKTSSCENCRYPTEDX(uint64_t a, uint64_t b)
{
    if (cavm_is_model(OCTEONTX_CNF10KB) && ((a<=6) && (b<=63)))
        return 0x87e080010c78ll + 0x1000000ll * ((a) & 0x7) + 8ll * ((b) & 0x3f);
    __cavm_csr_fatal("MCSX_CSE_TX_MEM_SLAVE_OUTPKTSSCENCRYPTEDX", 2, a, b, 0, 0, 0, 0);
}

#define typedef_CAVM_MCSX_CSE_TX_MEM_SLAVE_OUTPKTSSCENCRYPTEDX(a,b) cavm_mcsx_cse_tx_mem_slave_outpktsscencryptedx_t
#define bustype_CAVM_MCSX_CSE_TX_MEM_SLAVE_OUTPKTSSCENCRYPTEDX(a,b) CSR_TYPE_RSL
#define basename_CAVM_MCSX_CSE_TX_MEM_SLAVE_OUTPKTSSCENCRYPTEDX(a,b) "MCSX_CSE_TX_MEM_SLAVE_OUTPKTSSCENCRYPTEDX"
#define device_bar_CAVM_MCSX_CSE_TX_MEM_SLAVE_OUTPKTSSCENCRYPTEDX(a,b) 0x0 /* PF_BAR0 */
#define busnum_CAVM_MCSX_CSE_TX_MEM_SLAVE_OUTPKTSSCENCRYPTEDX(a,b) (a)
#define arguments_CAVM_MCSX_CSE_TX_MEM_SLAVE_OUTPKTSSCENCRYPTEDX(a,b) (a),(b),-1,-1

/**
 * Register (RSL) mcs#_cse_tx_mem_slave_outpktsscprotected#
 *
 * MCS Cse Tx Mem Slave Outpktsscprotected Register
 * The number of integrity protected but not encrypted packets for this transmit SC.
 */
union cavm_mcsx_cse_tx_mem_slave_outpktsscprotectedx
{
    uint64_t u;
    struct cavm_mcsx_cse_tx_mem_slave_outpktsscprotectedx_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t tx_sc_pkt_protected_cnt : 64;/**< [ 63:  0](R/W) The number of integrity protected but not encrypted packets for this transmit SC. */
#else /* Word 0 - Little Endian */
        uint64_t tx_sc_pkt_protected_cnt : 64;/**< [ 63:  0](R/W) The number of integrity protected but not encrypted packets for this transmit SC. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_mcsx_cse_tx_mem_slave_outpktsscprotectedx_s cn; */
};
typedef union cavm_mcsx_cse_tx_mem_slave_outpktsscprotectedx cavm_mcsx_cse_tx_mem_slave_outpktsscprotectedx_t;

static inline uint64_t CAVM_MCSX_CSE_TX_MEM_SLAVE_OUTPKTSSCPROTECTEDX(uint64_t a, uint64_t b) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_MCSX_CSE_TX_MEM_SLAVE_OUTPKTSSCPROTECTEDX(uint64_t a, uint64_t b)
{
    if (cavm_is_model(OCTEONTX_CNF10KB) && ((a<=6) && (b<=63)))
        return 0x87e080010a78ll + 0x1000000ll * ((a) & 0x7) + 8ll * ((b) & 0x3f);
    __cavm_csr_fatal("MCSX_CSE_TX_MEM_SLAVE_OUTPKTSSCPROTECTEDX", 2, a, b, 0, 0, 0, 0);
}

#define typedef_CAVM_MCSX_CSE_TX_MEM_SLAVE_OUTPKTSSCPROTECTEDX(a,b) cavm_mcsx_cse_tx_mem_slave_outpktsscprotectedx_t
#define bustype_CAVM_MCSX_CSE_TX_MEM_SLAVE_OUTPKTSSCPROTECTEDX(a,b) CSR_TYPE_RSL
#define basename_CAVM_MCSX_CSE_TX_MEM_SLAVE_OUTPKTSSCPROTECTEDX(a,b) "MCSX_CSE_TX_MEM_SLAVE_OUTPKTSSCPROTECTEDX"
#define device_bar_CAVM_MCSX_CSE_TX_MEM_SLAVE_OUTPKTSSCPROTECTEDX(a,b) 0x0 /* PF_BAR0 */
#define busnum_CAVM_MCSX_CSE_TX_MEM_SLAVE_OUTPKTSSCPROTECTEDX(a,b) (a)
#define arguments_CAVM_MCSX_CSE_TX_MEM_SLAVE_OUTPKTSSCPROTECTEDX(a,b) (a),(b),-1,-1

/**
 * Register (RSL) mcs#_cse_tx_mem_slave_outpktssectaginsertionerr#
 *
 * MCS Cse Tx Mem Slave Outpktssectaginsertionerr Register
 * The number of transmit packets discarded because their associated policy attempted
 * to insert a SecTAG at an offset beyond the EOP of the packet.
 */
union cavm_mcsx_cse_tx_mem_slave_outpktssectaginsertionerrx
{
    uint64_t u;
    struct cavm_mcsx_cse_tx_mem_slave_outpktssectaginsertionerrx_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t tx_port_pkt_sectag_insertion_err_cnt : 64;/**< [ 63:  0](R/W) The number of transmit packets discarded because their associated policy
                                                                 attempted to insert a SecTAG at an offset beyond the EOP of the packet. */
#else /* Word 0 - Little Endian */
        uint64_t tx_port_pkt_sectag_insertion_err_cnt : 64;/**< [ 63:  0](R/W) The number of transmit packets discarded because their associated policy
                                                                 attempted to insert a SecTAG at an offset beyond the EOP of the packet. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_mcsx_cse_tx_mem_slave_outpktssectaginsertionerrx_s cn; */
};
typedef union cavm_mcsx_cse_tx_mem_slave_outpktssectaginsertionerrx cavm_mcsx_cse_tx_mem_slave_outpktssectaginsertionerrx_t;

static inline uint64_t CAVM_MCSX_CSE_TX_MEM_SLAVE_OUTPKTSSECTAGINSERTIONERRX(uint64_t a, uint64_t b) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_MCSX_CSE_TX_MEM_SLAVE_OUTPKTSSECTAGINSERTIONERRX(uint64_t a, uint64_t b)
{
    if (cavm_is_model(OCTEONTX_CNF10KB) && ((a<=6) && (b<=3)))
        return 0x87e0800110d8ll + 0x1000000ll * ((a) & 0x7) + 8ll * ((b) & 0x3);
    __cavm_csr_fatal("MCSX_CSE_TX_MEM_SLAVE_OUTPKTSSECTAGINSERTIONERRX", 2, a, b, 0, 0, 0, 0);
}

#define typedef_CAVM_MCSX_CSE_TX_MEM_SLAVE_OUTPKTSSECTAGINSERTIONERRX(a,b) cavm_mcsx_cse_tx_mem_slave_outpktssectaginsertionerrx_t
#define bustype_CAVM_MCSX_CSE_TX_MEM_SLAVE_OUTPKTSSECTAGINSERTIONERRX(a,b) CSR_TYPE_RSL
#define basename_CAVM_MCSX_CSE_TX_MEM_SLAVE_OUTPKTSSECTAGINSERTIONERRX(a,b) "MCSX_CSE_TX_MEM_SLAVE_OUTPKTSSECTAGINSERTIONERRX"
#define device_bar_CAVM_MCSX_CSE_TX_MEM_SLAVE_OUTPKTSSECTAGINSERTIONERRX(a,b) 0x0 /* PF_BAR0 */
#define busnum_CAVM_MCSX_CSE_TX_MEM_SLAVE_OUTPKTSSECTAGINSERTIONERRX(a,b) (a)
#define arguments_CAVM_MCSX_CSE_TX_MEM_SLAVE_OUTPKTSSECTAGINSERTIONERRX(a,b) (a),(b),-1,-1

/**
 * Register (RSL) mcs#_cse_tx_mem_slave_outpktssecynoactivesa#
 *
 * MCS Cse Tx Mem Slave Outpktssecynoactivesa Register
 * The number of data packets with SA value not matching any active SA value configured.
 */
union cavm_mcsx_cse_tx_mem_slave_outpktssecynoactivesax
{
    uint64_t u;
    struct cavm_mcsx_cse_tx_mem_slave_outpktssecynoactivesax_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t tx_secy_pkt_noactivesa_cnt : 64;/**< [ 63:  0](R/W) The number of data packets with SA value not matching any active SA value configured. */
#else /* Word 0 - Little Endian */
        uint64_t tx_secy_pkt_noactivesa_cnt : 64;/**< [ 63:  0](R/W) The number of data packets with SA value not matching any active SA value configured. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_mcsx_cse_tx_mem_slave_outpktssecynoactivesax_s cn; */
};
typedef union cavm_mcsx_cse_tx_mem_slave_outpktssecynoactivesax cavm_mcsx_cse_tx_mem_slave_outpktssecynoactivesax_t;

static inline uint64_t CAVM_MCSX_CSE_TX_MEM_SLAVE_OUTPKTSSECYNOACTIVESAX(uint64_t a, uint64_t b) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_MCSX_CSE_TX_MEM_SLAVE_OUTPKTSSECYNOACTIVESAX(uint64_t a, uint64_t b)
{
    if (cavm_is_model(OCTEONTX_CNF10KB) && ((a<=6) && (b<=63)))
        return 0x87e080010278ll + 0x1000000ll * ((a) & 0x7) + 8ll * ((b) & 0x3f);
    __cavm_csr_fatal("MCSX_CSE_TX_MEM_SLAVE_OUTPKTSSECYNOACTIVESAX", 2, a, b, 0, 0, 0, 0);
}

#define typedef_CAVM_MCSX_CSE_TX_MEM_SLAVE_OUTPKTSSECYNOACTIVESAX(a,b) cavm_mcsx_cse_tx_mem_slave_outpktssecynoactivesax_t
#define bustype_CAVM_MCSX_CSE_TX_MEM_SLAVE_OUTPKTSSECYNOACTIVESAX(a,b) CSR_TYPE_RSL
#define basename_CAVM_MCSX_CSE_TX_MEM_SLAVE_OUTPKTSSECYNOACTIVESAX(a,b) "MCSX_CSE_TX_MEM_SLAVE_OUTPKTSSECYNOACTIVESAX"
#define device_bar_CAVM_MCSX_CSE_TX_MEM_SLAVE_OUTPKTSSECYNOACTIVESAX(a,b) 0x0 /* PF_BAR0 */
#define busnum_CAVM_MCSX_CSE_TX_MEM_SLAVE_OUTPKTSSECYNOACTIVESAX(a,b) (a)
#define arguments_CAVM_MCSX_CSE_TX_MEM_SLAVE_OUTPKTSSECYNOACTIVESAX(a,b) (a),(b),-1,-1

/**
 * Register (RSL) mcs#_cse_tx_mem_slave_outpktssecytoolong#
 *
 * MCS Cse Tx Mem Slave Outpktssecytoolong Register
 * The number of transmit packets discarded because their length is greater than the
 * configured MTU after SecTag/ICV insertion.
 */
union cavm_mcsx_cse_tx_mem_slave_outpktssecytoolongx
{
    uint64_t u;
    struct cavm_mcsx_cse_tx_mem_slave_outpktssecytoolongx_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t tx_secy_pkt_toolong_cnt : 64;/**< [ 63:  0](R/W) The number of transmit packets discarded because their length is greater than
                                                                 the configured MTU after SecTag/ICV insertion. */
#else /* Word 0 - Little Endian */
        uint64_t tx_secy_pkt_toolong_cnt : 64;/**< [ 63:  0](R/W) The number of transmit packets discarded because their length is greater than
                                                                 the configured MTU after SecTag/ICV insertion. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_mcsx_cse_tx_mem_slave_outpktssecytoolongx_s cn; */
};
typedef union cavm_mcsx_cse_tx_mem_slave_outpktssecytoolongx cavm_mcsx_cse_tx_mem_slave_outpktssecytoolongx_t;

static inline uint64_t CAVM_MCSX_CSE_TX_MEM_SLAVE_OUTPKTSSECYTOOLONGX(uint64_t a, uint64_t b) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_MCSX_CSE_TX_MEM_SLAVE_OUTPKTSSECYTOOLONGX(uint64_t a, uint64_t b)
{
    if (cavm_is_model(OCTEONTX_CNF10KB) && ((a<=6) && (b<=63)))
        return 0x87e080010478ll + 0x1000000ll * ((a) & 0x7) + 8ll * ((b) & 0x3f);
    __cavm_csr_fatal("MCSX_CSE_TX_MEM_SLAVE_OUTPKTSSECYTOOLONGX", 2, a, b, 0, 0, 0, 0);
}

#define typedef_CAVM_MCSX_CSE_TX_MEM_SLAVE_OUTPKTSSECYTOOLONGX(a,b) cavm_mcsx_cse_tx_mem_slave_outpktssecytoolongx_t
#define bustype_CAVM_MCSX_CSE_TX_MEM_SLAVE_OUTPKTSSECYTOOLONGX(a,b) CSR_TYPE_RSL
#define basename_CAVM_MCSX_CSE_TX_MEM_SLAVE_OUTPKTSSECYTOOLONGX(a,b) "MCSX_CSE_TX_MEM_SLAVE_OUTPKTSSECYTOOLONGX"
#define device_bar_CAVM_MCSX_CSE_TX_MEM_SLAVE_OUTPKTSSECYTOOLONGX(a,b) 0x0 /* PF_BAR0 */
#define busnum_CAVM_MCSX_CSE_TX_MEM_SLAVE_OUTPKTSSECYTOOLONGX(a,b) (a)
#define arguments_CAVM_MCSX_CSE_TX_MEM_SLAVE_OUTPKTSSECYTOOLONGX(a,b) (a),(b),-1,-1

/**
 * Register (RSL) mcs#_cse_tx_mem_slave_outpktssecyuntagged#
 *
 * MCS Cse Tx Mem Slave Outpktssecyuntagged Register
 * The number of data packets (excluding control packets) transmitted without a SecTag
 * because Protect Frames is false.
 */
union cavm_mcsx_cse_tx_mem_slave_outpktssecyuntaggedx
{
    uint64_t u;
    struct cavm_mcsx_cse_tx_mem_slave_outpktssecyuntaggedx_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t tx_secy_pkt_untagged_cnt : 64;/**< [ 63:  0](R/W) The number of data packets (excluding control packets) transmitted without a
                                                                 SecTag because Protect Frames is false. */
#else /* Word 0 - Little Endian */
        uint64_t tx_secy_pkt_untagged_cnt : 64;/**< [ 63:  0](R/W) The number of data packets (excluding control packets) transmitted without a
                                                                 SecTag because Protect Frames is false. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_mcsx_cse_tx_mem_slave_outpktssecyuntaggedx_s cn; */
};
typedef union cavm_mcsx_cse_tx_mem_slave_outpktssecyuntaggedx cavm_mcsx_cse_tx_mem_slave_outpktssecyuntaggedx_t;

static inline uint64_t CAVM_MCSX_CSE_TX_MEM_SLAVE_OUTPKTSSECYUNTAGGEDX(uint64_t a, uint64_t b) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_MCSX_CSE_TX_MEM_SLAVE_OUTPKTSSECYUNTAGGEDX(uint64_t a, uint64_t b)
{
    if (cavm_is_model(OCTEONTX_CNF10KB) && ((a<=6) && (b<=63)))
        return 0x87e080010078ll + 0x1000000ll * ((a) & 0x7) + 8ll * ((b) & 0x3f);
    __cavm_csr_fatal("MCSX_CSE_TX_MEM_SLAVE_OUTPKTSSECYUNTAGGEDX", 2, a, b, 0, 0, 0, 0);
}

#define typedef_CAVM_MCSX_CSE_TX_MEM_SLAVE_OUTPKTSSECYUNTAGGEDX(a,b) cavm_mcsx_cse_tx_mem_slave_outpktssecyuntaggedx_t
#define bustype_CAVM_MCSX_CSE_TX_MEM_SLAVE_OUTPKTSSECYUNTAGGEDX(a,b) CSR_TYPE_RSL
#define basename_CAVM_MCSX_CSE_TX_MEM_SLAVE_OUTPKTSSECYUNTAGGEDX(a,b) "MCSX_CSE_TX_MEM_SLAVE_OUTPKTSSECYUNTAGGEDX"
#define device_bar_CAVM_MCSX_CSE_TX_MEM_SLAVE_OUTPKTSSECYUNTAGGEDX(a,b) 0x0 /* PF_BAR0 */
#define busnum_CAVM_MCSX_CSE_TX_MEM_SLAVE_OUTPKTSSECYUNTAGGEDX(a,b) (a)
#define arguments_CAVM_MCSX_CSE_TX_MEM_SLAVE_OUTPKTSSECYUNTAGGEDX(a,b) (a),(b),-1,-1

/**
 * Register (RSL) mcs#_cse_tx_slave_ctrl
 *
 * MCS Cse Tx Slave Ctrl Register
 * Control for Common Statistics Engine
 */
union cavm_mcsx_cse_tx_slave_ctrl
{
    uint64_t u;
    struct cavm_mcsx_cse_tx_slave_ctrl_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_1_63         : 63;
        uint64_t cpu_cse_clr_on_rd     : 1;  /**< [  0:  0](R/W) When set to 1, counter memory will be cleared when it is read. */
#else /* Word 0 - Little Endian */
        uint64_t cpu_cse_clr_on_rd     : 1;  /**< [  0:  0](R/W) When set to 1, counter memory will be cleared when it is read. */
        uint64_t reserved_1_63         : 63;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_mcsx_cse_tx_slave_ctrl_s cn; */
};
typedef union cavm_mcsx_cse_tx_slave_ctrl cavm_mcsx_cse_tx_slave_ctrl_t;

static inline uint64_t CAVM_MCSX_CSE_TX_SLAVE_CTRL(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_MCSX_CSE_TX_SLAVE_CTRL(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CNF10KB) && (a<=6))
        return 0x87e080000a00ll + 0x1000000ll * ((a) & 0x7);
    __cavm_csr_fatal("MCSX_CSE_TX_SLAVE_CTRL", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_MCSX_CSE_TX_SLAVE_CTRL(a) cavm_mcsx_cse_tx_slave_ctrl_t
#define bustype_CAVM_MCSX_CSE_TX_SLAVE_CTRL(a) CSR_TYPE_RSL
#define basename_CAVM_MCSX_CSE_TX_SLAVE_CTRL(a) "MCSX_CSE_TX_SLAVE_CTRL"
#define device_bar_CAVM_MCSX_CSE_TX_SLAVE_CTRL(a) 0x0 /* PF_BAR0 */
#define busnum_CAVM_MCSX_CSE_TX_SLAVE_CTRL(a) (a)
#define arguments_CAVM_MCSX_CSE_TX_SLAVE_CTRL(a) (a),-1,-1,-1

/**
 * Register (RSL) mcs#_cse_tx_slave_dbg_mux_sel
 *
 * MCS Cse Tx Slave Dbg Mux Sel Register
 * Per segment mux control for the debug_mux.  Configuration of this register will
 * affect which debug set is output on the corresponding debug mux logic for the CSE.
 */
union cavm_mcsx_cse_tx_slave_dbg_mux_sel
{
    uint64_t u;
    struct cavm_mcsx_cse_tx_slave_dbg_mux_sel_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_29_63        : 35;
        uint64_t seg3                  : 5;  /**< [ 28: 24](R/W) Select which debug set is output on the segment3 of the debug mux for the Tx
                                                                 CSE.  Note that a higher level dbg_mux_sel also exists to select which block's
                                                                 debug sets are to be output of the IP */
        uint64_t reserved_21_23        : 3;
        uint64_t seg2                  : 5;  /**< [ 20: 16](R/W) Select which debug set is output on the segment2 of the debug mux for the Tx
                                                                 CSE.  Note that a higher level dbg_mux_sel also exists to select which block's
                                                                 debug sets are to be output of the IP */
        uint64_t reserved_13_15        : 3;
        uint64_t seg1                  : 5;  /**< [ 12:  8](R/W) Select which debug set is output on the segment1 of the debug mux for the Tx
                                                                 CSE.  Note that a higher level dbg_mux_sel also exists to select which block's
                                                                 debug sets are to be output of the IP */
        uint64_t reserved_5_7          : 3;
        uint64_t seg0                  : 5;  /**< [  4:  0](R/W) Select which debug set is output on the segment0 of the debug mux for the Tx
                                                                 CSE.  Note that a higher level dbg_mux_sel also exists to select which block's
                                                                 debug sets are to be output of the IP */
#else /* Word 0 - Little Endian */
        uint64_t seg0                  : 5;  /**< [  4:  0](R/W) Select which debug set is output on the segment0 of the debug mux for the Tx
                                                                 CSE.  Note that a higher level dbg_mux_sel also exists to select which block's
                                                                 debug sets are to be output of the IP */
        uint64_t reserved_5_7          : 3;
        uint64_t seg1                  : 5;  /**< [ 12:  8](R/W) Select which debug set is output on the segment1 of the debug mux for the Tx
                                                                 CSE.  Note that a higher level dbg_mux_sel also exists to select which block's
                                                                 debug sets are to be output of the IP */
        uint64_t reserved_13_15        : 3;
        uint64_t seg2                  : 5;  /**< [ 20: 16](R/W) Select which debug set is output on the segment2 of the debug mux for the Tx
                                                                 CSE.  Note that a higher level dbg_mux_sel also exists to select which block's
                                                                 debug sets are to be output of the IP */
        uint64_t reserved_21_23        : 3;
        uint64_t seg3                  : 5;  /**< [ 28: 24](R/W) Select which debug set is output on the segment3 of the debug mux for the Tx
                                                                 CSE.  Note that a higher level dbg_mux_sel also exists to select which block's
                                                                 debug sets are to be output of the IP */
        uint64_t reserved_29_63        : 35;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_mcsx_cse_tx_slave_dbg_mux_sel_s cn; */
};
typedef union cavm_mcsx_cse_tx_slave_dbg_mux_sel cavm_mcsx_cse_tx_slave_dbg_mux_sel_t;

static inline uint64_t CAVM_MCSX_CSE_TX_SLAVE_DBG_MUX_SEL(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_MCSX_CSE_TX_SLAVE_DBG_MUX_SEL(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CNF10KB) && (a<=6))
        return 0x87e080000a08ll + 0x1000000ll * ((a) & 0x7);
    __cavm_csr_fatal("MCSX_CSE_TX_SLAVE_DBG_MUX_SEL", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_MCSX_CSE_TX_SLAVE_DBG_MUX_SEL(a) cavm_mcsx_cse_tx_slave_dbg_mux_sel_t
#define bustype_CAVM_MCSX_CSE_TX_SLAVE_DBG_MUX_SEL(a) CSR_TYPE_RSL
#define basename_CAVM_MCSX_CSE_TX_SLAVE_DBG_MUX_SEL(a) "MCSX_CSE_TX_SLAVE_DBG_MUX_SEL"
#define device_bar_CAVM_MCSX_CSE_TX_SLAVE_DBG_MUX_SEL(a) 0x0 /* PF_BAR0 */
#define busnum_CAVM_MCSX_CSE_TX_SLAVE_DBG_MUX_SEL(a) (a)
#define arguments_CAVM_MCSX_CSE_TX_SLAVE_DBG_MUX_SEL(a) (a),-1,-1,-1

/**
 * Register (RSL) mcs#_cse_tx_slave_debug_status
 *
 * MCS Cse Tx Slave Debug Status Register
 * Debug status register:  Captures the debug set selected by dbg_mux_sel.
 */
union cavm_mcsx_cse_tx_slave_debug_status
{
    uint64_t u;
    struct cavm_mcsx_cse_tx_slave_debug_status_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t seg3                  : 16; /**< [ 63: 48](RO) Debug set status for segment3. */
        uint64_t seg2                  : 16; /**< [ 47: 32](RO) Debug set status for segment2. */
        uint64_t seg1                  : 16; /**< [ 31: 16](RO) Debug set status for segment1. */
        uint64_t seg0                  : 16; /**< [ 15:  0](RO) Debug set status for segment0. */
#else /* Word 0 - Little Endian */
        uint64_t seg0                  : 16; /**< [ 15:  0](RO) Debug set status for segment0. */
        uint64_t seg1                  : 16; /**< [ 31: 16](RO) Debug set status for segment1. */
        uint64_t seg2                  : 16; /**< [ 47: 32](RO) Debug set status for segment2. */
        uint64_t seg3                  : 16; /**< [ 63: 48](RO) Debug set status for segment3. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_mcsx_cse_tx_slave_debug_status_s cn; */
};
typedef union cavm_mcsx_cse_tx_slave_debug_status cavm_mcsx_cse_tx_slave_debug_status_t;

static inline uint64_t CAVM_MCSX_CSE_TX_SLAVE_DEBUG_STATUS(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_MCSX_CSE_TX_SLAVE_DEBUG_STATUS(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CNF10KB) && (a<=6))
        return 0x87e080000a10ll + 0x1000000ll * ((a) & 0x7);
    __cavm_csr_fatal("MCSX_CSE_TX_SLAVE_DEBUG_STATUS", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_MCSX_CSE_TX_SLAVE_DEBUG_STATUS(a) cavm_mcsx_cse_tx_slave_debug_status_t
#define bustype_CAVM_MCSX_CSE_TX_SLAVE_DEBUG_STATUS(a) CSR_TYPE_RSL
#define basename_CAVM_MCSX_CSE_TX_SLAVE_DEBUG_STATUS(a) "MCSX_CSE_TX_SLAVE_DEBUG_STATUS"
#define device_bar_CAVM_MCSX_CSE_TX_SLAVE_DEBUG_STATUS(a) 0x0 /* PF_BAR0 */
#define busnum_CAVM_MCSX_CSE_TX_SLAVE_DEBUG_STATUS(a) (a)
#define arguments_CAVM_MCSX_CSE_TX_SLAVE_DEBUG_STATUS(a) (a),-1,-1,-1

/**
 * Register (RSL) mcs#_cse_tx_slave_reserved0#_rsvd
 *
 * INTERNAL: MCS Cse Tx Slave Reserved0 Register
 *
 * This register is reserved.
 */
union cavm_mcsx_cse_tx_slave_reserved0x_rsvd
{
    uint64_t u;
    struct cavm_mcsx_cse_tx_slave_reserved0x_rsvd_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_0_63         : 64;
#else /* Word 0 - Little Endian */
        uint64_t reserved_0_63         : 64;
#endif /* Word 0 - End */
    } s;
    struct cavm_mcsx_cse_tx_slave_reserved0x_rsvd_cn
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_1_63         : 63;
        uint64_t reserved_0            : 1;
#else /* Word 0 - Little Endian */
        uint64_t reserved_0            : 1;
        uint64_t reserved_1_63         : 63;
#endif /* Word 0 - End */
    } cn;
};
typedef union cavm_mcsx_cse_tx_slave_reserved0x_rsvd cavm_mcsx_cse_tx_slave_reserved0x_rsvd_t;

static inline uint64_t CAVM_MCSX_CSE_TX_SLAVE_RESERVED0X_RSVD(uint64_t a, uint64_t b) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_MCSX_CSE_TX_SLAVE_RESERVED0X_RSVD(uint64_t a, uint64_t b)
{
    if (cavm_is_model(OCTEONTX_CNF10KB) && ((a<=6) && (b<=3)))
        return 0x87e0800009e0ll + 0x1000000ll * ((a) & 0x7) + 8ll * ((b) & 0x3);
    __cavm_csr_fatal("MCSX_CSE_TX_SLAVE_RESERVED0X_RSVD", 2, a, b, 0, 0, 0, 0);
}

#define typedef_CAVM_MCSX_CSE_TX_SLAVE_RESERVED0X_RSVD(a,b) cavm_mcsx_cse_tx_slave_reserved0x_rsvd_t
#define bustype_CAVM_MCSX_CSE_TX_SLAVE_RESERVED0X_RSVD(a,b) CSR_TYPE_RSL
#define basename_CAVM_MCSX_CSE_TX_SLAVE_RESERVED0X_RSVD(a,b) "MCSX_CSE_TX_SLAVE_RESERVED0X_RSVD"
#define device_bar_CAVM_MCSX_CSE_TX_SLAVE_RESERVED0X_RSVD(a,b) 0x0 /* PF_BAR0 */
#define busnum_CAVM_MCSX_CSE_TX_SLAVE_RESERVED0X_RSVD(a,b) (a)
#define arguments_CAVM_MCSX_CSE_TX_SLAVE_RESERVED0X_RSVD(a,b) (a),(b),-1,-1

/**
 * Register (RSL) mcs#_cse_tx_slave_stats_clear
 *
 * MCS Cse Tx Slave Stats Clear Register
 * Tell the HW to start initialization of the stats memory within Tx CSE
 */
union cavm_mcsx_cse_tx_slave_stats_clear
{
    uint64_t u;
    struct cavm_mcsx_cse_tx_slave_stats_clear_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_4_63         : 60;
        uint64_t tx_flowid_go          : 1;  /**< [  3:  3](R/W) When set to 1, the stats related to egress FlowID value in CSE will start
                                                                 initialization sequence (clearing all counters to 0).
                                                                 This bit will read 1 until initialization is complete, at which time it will
                                                                 turn 0 to indicate initialization done. */
        uint64_t tx_port_go            : 1;  /**< [  2:  2](R/W) When set to 1, the stats related to egress Port value in CSE will start
                                                                 initialization sequence (clearing all counters to 0).
                                                                 This bit will read 1 until initialization is complete, at which time it will
                                                                 turn 0 to indicate initialization done. */
        uint64_t tx_sc_go              : 1;  /**< [  1:  1](R/W) When set to 1, the stats related to egress SC value in CSE will start
                                                                 initialization sequence (clearing all counters to 0).
                                                                 This bit will read 1 until initialization is complete, at which time it will
                                                                 turn 0 to indicate initialization done. */
        uint64_t tx_secy_go            : 1;  /**< [  0:  0](R/W) When set to 1, the stats related to egress SecY value in CSE will start
                                                                 initialization sequence (clearing all counters to 0).
                                                                 This bit will read 1 until initialization is complete, at which time it will
                                                                 turn 0 to indicate initialization done. */
#else /* Word 0 - Little Endian */
        uint64_t tx_secy_go            : 1;  /**< [  0:  0](R/W) When set to 1, the stats related to egress SecY value in CSE will start
                                                                 initialization sequence (clearing all counters to 0).
                                                                 This bit will read 1 until initialization is complete, at which time it will
                                                                 turn 0 to indicate initialization done. */
        uint64_t tx_sc_go              : 1;  /**< [  1:  1](R/W) When set to 1, the stats related to egress SC value in CSE will start
                                                                 initialization sequence (clearing all counters to 0).
                                                                 This bit will read 1 until initialization is complete, at which time it will
                                                                 turn 0 to indicate initialization done. */
        uint64_t tx_port_go            : 1;  /**< [  2:  2](R/W) When set to 1, the stats related to egress Port value in CSE will start
                                                                 initialization sequence (clearing all counters to 0).
                                                                 This bit will read 1 until initialization is complete, at which time it will
                                                                 turn 0 to indicate initialization done. */
        uint64_t tx_flowid_go          : 1;  /**< [  3:  3](R/W) When set to 1, the stats related to egress FlowID value in CSE will start
                                                                 initialization sequence (clearing all counters to 0).
                                                                 This bit will read 1 until initialization is complete, at which time it will
                                                                 turn 0 to indicate initialization done. */
        uint64_t reserved_4_63         : 60;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_mcsx_cse_tx_slave_stats_clear_s cn; */
};
typedef union cavm_mcsx_cse_tx_slave_stats_clear cavm_mcsx_cse_tx_slave_stats_clear_t;

static inline uint64_t CAVM_MCSX_CSE_TX_SLAVE_STATS_CLEAR(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_MCSX_CSE_TX_SLAVE_STATS_CLEAR(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CNF10KB) && (a<=6))
        return 0x87e080000a18ll + 0x1000000ll * ((a) & 0x7);
    __cavm_csr_fatal("MCSX_CSE_TX_SLAVE_STATS_CLEAR", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_MCSX_CSE_TX_SLAVE_STATS_CLEAR(a) cavm_mcsx_cse_tx_slave_stats_clear_t
#define bustype_CAVM_MCSX_CSE_TX_SLAVE_STATS_CLEAR(a) CSR_TYPE_RSL
#define basename_CAVM_MCSX_CSE_TX_SLAVE_STATS_CLEAR(a) "MCSX_CSE_TX_SLAVE_STATS_CLEAR"
#define device_bar_CAVM_MCSX_CSE_TX_SLAVE_STATS_CLEAR(a) 0x0 /* PF_BAR0 */
#define busnum_CAVM_MCSX_CSE_TX_SLAVE_STATS_CLEAR(a) (a)
#define arguments_CAVM_MCSX_CSE_TX_SLAVE_STATS_CLEAR(a) (a),-1,-1,-1

/**
 * Register (RSL) mcs#_eco
 *
 * INTERNAL: MCS ECO Register
 */
union cavm_mcsx_eco
{
    uint64_t u;
    struct cavm_mcsx_eco_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t eco_rw                : 64; /**< [ 63:  0](R/W) Reserved. */
#else /* Word 0 - Little Endian */
        uint64_t eco_rw                : 64; /**< [ 63:  0](R/W) Reserved. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_mcsx_eco_s cn; */
};
typedef union cavm_mcsx_eco cavm_mcsx_eco_t;

static inline uint64_t CAVM_MCSX_ECO(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_MCSX_ECO(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CNF10KB) && (a<=6))
        return 0x87e080060010ll + 0x1000000ll * ((a) & 0x7);
    __cavm_csr_fatal("MCSX_ECO", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_MCSX_ECO(a) cavm_mcsx_eco_t
#define bustype_CAVM_MCSX_ECO(a) CSR_TYPE_RSL
#define basename_CAVM_MCSX_ECO(a) "MCSX_ECO"
#define device_bar_CAVM_MCSX_ECO(a) 0x0 /* PF_BAR0 */
#define busnum_CAVM_MCSX_ECO(a) (a)
#define arguments_CAVM_MCSX_ECO(a) (a),-1,-1,-1

/**
 * Register (RSL) mcs#_gae_rx_slave_dbg_mux_sel
 *
 * MCS Gae Rx Slave Dbg Mux Sel Register
 * Per segment mux control for the debug_mux.  Configuration of this register will
 * affect which debug set is output on the corresponding debug mux logic for the GAE.
 */
union cavm_mcsx_gae_rx_slave_dbg_mux_sel
{
    uint64_t u;
    struct cavm_mcsx_gae_rx_slave_dbg_mux_sel_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_29_63        : 35;
        uint64_t seg3                  : 5;  /**< [ 28: 24](R/W) Select which debug set is output on the segment3 of the debug mux for the GAE.
                                                                 Note that a higher level dbg_mux_sel also exists to select which block's debug
                                                                 sets are to be output of the IP */
        uint64_t reserved_21_23        : 3;
        uint64_t seg2                  : 5;  /**< [ 20: 16](R/W) Select which debug set is output on the segment2 of the debug mux for the GAE.
                                                                 Note that a higher level dbg_mux_sel also exists to select which block's debug
                                                                 sets are to be output of the IP */
        uint64_t reserved_13_15        : 3;
        uint64_t seg1                  : 5;  /**< [ 12:  8](R/W) Select which debug set is output on the segment1 of the debug mux for the GAE.
                                                                 Note that a higher level dbg_mux_sel also exists to select which block's debug
                                                                 sets are to be output of the IP */
        uint64_t reserved_5_7          : 3;
        uint64_t seg0                  : 5;  /**< [  4:  0](R/W) Select which debug set is output on the segment0 of the debug mux for the GAE.
                                                                 Note that a higher level dbg_mux_sel also exists to select which block's debug
                                                                 sets are to be output of the IP */
#else /* Word 0 - Little Endian */
        uint64_t seg0                  : 5;  /**< [  4:  0](R/W) Select which debug set is output on the segment0 of the debug mux for the GAE.
                                                                 Note that a higher level dbg_mux_sel also exists to select which block's debug
                                                                 sets are to be output of the IP */
        uint64_t reserved_5_7          : 3;
        uint64_t seg1                  : 5;  /**< [ 12:  8](R/W) Select which debug set is output on the segment1 of the debug mux for the GAE.
                                                                 Note that a higher level dbg_mux_sel also exists to select which block's debug
                                                                 sets are to be output of the IP */
        uint64_t reserved_13_15        : 3;
        uint64_t seg2                  : 5;  /**< [ 20: 16](R/W) Select which debug set is output on the segment2 of the debug mux for the GAE.
                                                                 Note that a higher level dbg_mux_sel also exists to select which block's debug
                                                                 sets are to be output of the IP */
        uint64_t reserved_21_23        : 3;
        uint64_t seg3                  : 5;  /**< [ 28: 24](R/W) Select which debug set is output on the segment3 of the debug mux for the GAE.
                                                                 Note that a higher level dbg_mux_sel also exists to select which block's debug
                                                                 sets are to be output of the IP */
        uint64_t reserved_29_63        : 35;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_mcsx_gae_rx_slave_dbg_mux_sel_s cn; */
};
typedef union cavm_mcsx_gae_rx_slave_dbg_mux_sel cavm_mcsx_gae_rx_slave_dbg_mux_sel_t;

static inline uint64_t CAVM_MCSX_GAE_RX_SLAVE_DBG_MUX_SEL(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_MCSX_GAE_RX_SLAVE_DBG_MUX_SEL(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CNF10KB) && (a<=6))
        return 0x87e0800000a0ll + 0x1000000ll * ((a) & 0x7);
    __cavm_csr_fatal("MCSX_GAE_RX_SLAVE_DBG_MUX_SEL", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_MCSX_GAE_RX_SLAVE_DBG_MUX_SEL(a) cavm_mcsx_gae_rx_slave_dbg_mux_sel_t
#define bustype_CAVM_MCSX_GAE_RX_SLAVE_DBG_MUX_SEL(a) CSR_TYPE_RSL
#define basename_CAVM_MCSX_GAE_RX_SLAVE_DBG_MUX_SEL(a) "MCSX_GAE_RX_SLAVE_DBG_MUX_SEL"
#define device_bar_CAVM_MCSX_GAE_RX_SLAVE_DBG_MUX_SEL(a) 0x0 /* PF_BAR0 */
#define busnum_CAVM_MCSX_GAE_RX_SLAVE_DBG_MUX_SEL(a) (a)
#define arguments_CAVM_MCSX_GAE_RX_SLAVE_DBG_MUX_SEL(a) (a),-1,-1,-1

/**
 * Register (RSL) mcs#_gae_rx_slave_debug_status
 *
 * MCS Gae Rx Slave Debug Status Register
 * Debug status register:  Captures the debug set selected by dbg_mux_sel.
 */
union cavm_mcsx_gae_rx_slave_debug_status
{
    uint64_t u;
    struct cavm_mcsx_gae_rx_slave_debug_status_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t seg3                  : 16; /**< [ 63: 48](RO) Debug set status for segment3. */
        uint64_t seg2                  : 16; /**< [ 47: 32](RO) Debug set status for segment2. */
        uint64_t seg1                  : 16; /**< [ 31: 16](RO) Debug set status for segment1. */
        uint64_t seg0                  : 16; /**< [ 15:  0](RO) Debug set status for segment0. */
#else /* Word 0 - Little Endian */
        uint64_t seg0                  : 16; /**< [ 15:  0](RO) Debug set status for segment0. */
        uint64_t seg1                  : 16; /**< [ 31: 16](RO) Debug set status for segment1. */
        uint64_t seg2                  : 16; /**< [ 47: 32](RO) Debug set status for segment2. */
        uint64_t seg3                  : 16; /**< [ 63: 48](RO) Debug set status for segment3. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_mcsx_gae_rx_slave_debug_status_s cn; */
};
typedef union cavm_mcsx_gae_rx_slave_debug_status cavm_mcsx_gae_rx_slave_debug_status_t;

static inline uint64_t CAVM_MCSX_GAE_RX_SLAVE_DEBUG_STATUS(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_MCSX_GAE_RX_SLAVE_DEBUG_STATUS(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CNF10KB) && (a<=6))
        return 0x87e0800000a8ll + 0x1000000ll * ((a) & 0x7);
    __cavm_csr_fatal("MCSX_GAE_RX_SLAVE_DEBUG_STATUS", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_MCSX_GAE_RX_SLAVE_DEBUG_STATUS(a) cavm_mcsx_gae_rx_slave_debug_status_t
#define bustype_CAVM_MCSX_GAE_RX_SLAVE_DEBUG_STATUS(a) CSR_TYPE_RSL
#define basename_CAVM_MCSX_GAE_RX_SLAVE_DEBUG_STATUS(a) "MCSX_GAE_RX_SLAVE_DEBUG_STATUS"
#define device_bar_CAVM_MCSX_GAE_RX_SLAVE_DEBUG_STATUS(a) 0x0 /* PF_BAR0 */
#define busnum_CAVM_MCSX_GAE_RX_SLAVE_DEBUG_STATUS(a) (a)
#define arguments_CAVM_MCSX_GAE_RX_SLAVE_DEBUG_STATUS(a) (a),-1,-1,-1

/**
 * Register (RSL) mcs#_gae_rx_slave_fips_block_bits127_64
 *
 * MCS Gae Rx Slave Fips Block Bits127 64 Register
 * FIPS Input Block (AAD or Text) bits 127 to 64.
 */
union cavm_mcsx_gae_rx_slave_fips_block_bits127_64
{
    uint64_t u;
    struct cavm_mcsx_gae_rx_slave_fips_block_bits127_64_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t data_msb              : 32; /**< [ 63: 32](R/W) Input Block[127:96] (AAD or Text/ICV).  For ICV (ingress only), it can straddle across 2 rounds. */
        uint64_t data_lsb              : 32; /**< [ 31:  0](R/W) Input Block[95:64] (AAD or Text/ICV).  For ICV (ingress only), it can straddle across 2 rounds. */
#else /* Word 0 - Little Endian */
        uint64_t data_lsb              : 32; /**< [ 31:  0](R/W) Input Block[95:64] (AAD or Text/ICV).  For ICV (ingress only), it can straddle across 2 rounds. */
        uint64_t data_msb              : 32; /**< [ 63: 32](R/W) Input Block[127:96] (AAD or Text/ICV).  For ICV (ingress only), it can straddle across 2 rounds. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_mcsx_gae_rx_slave_fips_block_bits127_64_s cn; */
};
typedef union cavm_mcsx_gae_rx_slave_fips_block_bits127_64 cavm_mcsx_gae_rx_slave_fips_block_bits127_64_t;

static inline uint64_t CAVM_MCSX_GAE_RX_SLAVE_FIPS_BLOCK_BITS127_64(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_MCSX_GAE_RX_SLAVE_FIPS_BLOCK_BITS127_64(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CNF10KB) && (a<=6))
        return 0x87e080000060ll + 0x1000000ll * ((a) & 0x7);
    __cavm_csr_fatal("MCSX_GAE_RX_SLAVE_FIPS_BLOCK_BITS127_64", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_MCSX_GAE_RX_SLAVE_FIPS_BLOCK_BITS127_64(a) cavm_mcsx_gae_rx_slave_fips_block_bits127_64_t
#define bustype_CAVM_MCSX_GAE_RX_SLAVE_FIPS_BLOCK_BITS127_64(a) CSR_TYPE_RSL
#define basename_CAVM_MCSX_GAE_RX_SLAVE_FIPS_BLOCK_BITS127_64(a) "MCSX_GAE_RX_SLAVE_FIPS_BLOCK_BITS127_64"
#define device_bar_CAVM_MCSX_GAE_RX_SLAVE_FIPS_BLOCK_BITS127_64(a) 0x0 /* PF_BAR0 */
#define busnum_CAVM_MCSX_GAE_RX_SLAVE_FIPS_BLOCK_BITS127_64(a) (a)
#define arguments_CAVM_MCSX_GAE_RX_SLAVE_FIPS_BLOCK_BITS127_64(a) (a),-1,-1,-1

/**
 * Register (RSL) mcs#_gae_rx_slave_fips_block_bits63_0
 *
 * MCS Gae Rx Slave Fips Block Bits63 0 Register
 * FIPS Input Block (AAD or Text) bits 63 to 0.
 */
union cavm_mcsx_gae_rx_slave_fips_block_bits63_0
{
    uint64_t u;
    struct cavm_mcsx_gae_rx_slave_fips_block_bits63_0_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t data_msb              : 32; /**< [ 63: 32](R/W) Input Block[63:32] (AAD or Text/ICV).  For ICV (ingress only), it can straddle across 2 rounds. */
        uint64_t data_lsb              : 32; /**< [ 31:  0](R/W) Input Block[31:0] (AAD or Text/ICV).  For ICV (ingress only), it can straddle across 2 rounds. */
#else /* Word 0 - Little Endian */
        uint64_t data_lsb              : 32; /**< [ 31:  0](R/W) Input Block[31:0] (AAD or Text/ICV).  For ICV (ingress only), it can straddle across 2 rounds. */
        uint64_t data_msb              : 32; /**< [ 63: 32](R/W) Input Block[63:32] (AAD or Text/ICV).  For ICV (ingress only), it can straddle across 2 rounds. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_mcsx_gae_rx_slave_fips_block_bits63_0_s cn; */
};
typedef union cavm_mcsx_gae_rx_slave_fips_block_bits63_0 cavm_mcsx_gae_rx_slave_fips_block_bits63_0_t;

static inline uint64_t CAVM_MCSX_GAE_RX_SLAVE_FIPS_BLOCK_BITS63_0(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_MCSX_GAE_RX_SLAVE_FIPS_BLOCK_BITS63_0(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CNF10KB) && (a<=6))
        return 0x87e080000068ll + 0x1000000ll * ((a) & 0x7);
    __cavm_csr_fatal("MCSX_GAE_RX_SLAVE_FIPS_BLOCK_BITS63_0", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_MCSX_GAE_RX_SLAVE_FIPS_BLOCK_BITS63_0(a) cavm_mcsx_gae_rx_slave_fips_block_bits63_0_t
#define bustype_CAVM_MCSX_GAE_RX_SLAVE_FIPS_BLOCK_BITS63_0(a) CSR_TYPE_RSL
#define basename_CAVM_MCSX_GAE_RX_SLAVE_FIPS_BLOCK_BITS63_0(a) "MCSX_GAE_RX_SLAVE_FIPS_BLOCK_BITS63_0"
#define device_bar_CAVM_MCSX_GAE_RX_SLAVE_FIPS_BLOCK_BITS63_0(a) 0x0 /* PF_BAR0 */
#define busnum_CAVM_MCSX_GAE_RX_SLAVE_FIPS_BLOCK_BITS63_0(a) (a)
#define arguments_CAVM_MCSX_GAE_RX_SLAVE_FIPS_BLOCK_BITS63_0(a) (a),-1,-1,-1

/**
 * Register (RSL) mcs#_gae_rx_slave_fips_ctl
 *
 * MCS Gae Rx Slave Fips Ctl Register
 * FIPS control
 */
union cavm_mcsx_gae_rx_slave_fips_ctl
{
    uint64_t u;
    struct cavm_mcsx_gae_rx_slave_fips_ctl_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_9_63         : 55;
        uint64_t vld                   : 1;  /**< [  8:  8](R/W) Qualify the following fields.  If not set, neither AAD nor Text is valid.  When
                                                                 there is no AAD, the first round must deassert vld in order to generate E(K,Y0)
                                                                 properly.  vld is irrelevant if len_round=1.  For ingress, must be asserted for
                                                                 ICV cycle. */
        uint64_t block_size            : 4;  /**< [  7:  4](R/W) Valid at every cycle of the current message. A value of 0 indicates all 16B is
                                                                 valid. Value can be 0 to 15 to indicate size of the last AAD block. If icv_start
                                                                 is asserted (ingress only), value indicates size of the last message block
                                                                 (ICV). For egress, value can be 0 to 15 to indicate size of the EOP block (eop
                                                                 is asserted). */
        uint64_t eop                   : 1;  /**< [  3:  3](R/W) Asserted at last cycle of the current message. Message can be single or multi-block. */
        uint64_t block_is_aad          : 1;  /**< [  2:  2](R/W) Fips_block CSR contains an AAD block. Default to 1. This bit must be asserted at
                                                                 SOP (ie. at least 1 block of AAD present) in order to generate a valid ICV on
                                                                 egress. */
        uint64_t len_round             : 1;  /**< [  1:  1](R/W) Only for egress (encryption). Asserted at the next round after EOP. This allows
                                                                 Length block to be hashed and generates ICV. */
        uint64_t next_icv              : 1;  /**< [  0:  0](R/W) Only for ingress (decryption).  Asserted at the last round of data (AAD or CT).
                                                                 Next round will be the full 16B ICV. */
#else /* Word 0 - Little Endian */
        uint64_t next_icv              : 1;  /**< [  0:  0](R/W) Only for ingress (decryption).  Asserted at the last round of data (AAD or CT).
                                                                 Next round will be the full 16B ICV. */
        uint64_t len_round             : 1;  /**< [  1:  1](R/W) Only for egress (encryption). Asserted at the next round after EOP. This allows
                                                                 Length block to be hashed and generates ICV. */
        uint64_t block_is_aad          : 1;  /**< [  2:  2](R/W) Fips_block CSR contains an AAD block. Default to 1. This bit must be asserted at
                                                                 SOP (ie. at least 1 block of AAD present) in order to generate a valid ICV on
                                                                 egress. */
        uint64_t eop                   : 1;  /**< [  3:  3](R/W) Asserted at last cycle of the current message. Message can be single or multi-block. */
        uint64_t block_size            : 4;  /**< [  7:  4](R/W) Valid at every cycle of the current message. A value of 0 indicates all 16B is
                                                                 valid. Value can be 0 to 15 to indicate size of the last AAD block. If icv_start
                                                                 is asserted (ingress only), value indicates size of the last message block
                                                                 (ICV). For egress, value can be 0 to 15 to indicate size of the EOP block (eop
                                                                 is asserted). */
        uint64_t vld                   : 1;  /**< [  8:  8](R/W) Qualify the following fields.  If not set, neither AAD nor Text is valid.  When
                                                                 there is no AAD, the first round must deassert vld in order to generate E(K,Y0)
                                                                 properly.  vld is irrelevant if len_round=1.  For ingress, must be asserted for
                                                                 ICV cycle. */
        uint64_t reserved_9_63         : 55;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_mcsx_gae_rx_slave_fips_ctl_s cn; */
};
typedef union cavm_mcsx_gae_rx_slave_fips_ctl cavm_mcsx_gae_rx_slave_fips_ctl_t;

static inline uint64_t CAVM_MCSX_GAE_RX_SLAVE_FIPS_CTL(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_MCSX_GAE_RX_SLAVE_FIPS_CTL(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CNF10KB) && (a<=6))
        return 0x87e080000010ll + 0x1000000ll * ((a) & 0x7);
    __cavm_csr_fatal("MCSX_GAE_RX_SLAVE_FIPS_CTL", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_MCSX_GAE_RX_SLAVE_FIPS_CTL(a) cavm_mcsx_gae_rx_slave_fips_ctl_t
#define bustype_CAVM_MCSX_GAE_RX_SLAVE_FIPS_CTL(a) CSR_TYPE_RSL
#define basename_CAVM_MCSX_GAE_RX_SLAVE_FIPS_CTL(a) "MCSX_GAE_RX_SLAVE_FIPS_CTL"
#define device_bar_CAVM_MCSX_GAE_RX_SLAVE_FIPS_CTL(a) 0x0 /* PF_BAR0 */
#define busnum_CAVM_MCSX_GAE_RX_SLAVE_FIPS_CTL(a) (a)
#define arguments_CAVM_MCSX_GAE_RX_SLAVE_FIPS_CTL(a) (a),-1,-1,-1

/**
 * Register (RSL) mcs#_gae_rx_slave_fips_ctr
 *
 * MCS Gae Rx Slave Fips Ctr Register
 * FIPS GCM Counter
 */
union cavm_mcsx_gae_rx_slave_fips_ctr
{
    uint64_t u;
    struct cavm_mcsx_gae_rx_slave_fips_ctr_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_32_63        : 32;
        uint64_t fips_ctr              : 32; /**< [ 31:  0](R/W) FIPS GCM Counter. Used only when ctr_mode == 1 (Manual programming). Otherwise
                                                                 GCM counter is incremented automatically. */
#else /* Word 0 - Little Endian */
        uint64_t fips_ctr              : 32; /**< [ 31:  0](R/W) FIPS GCM Counter. Used only when ctr_mode == 1 (Manual programming). Otherwise
                                                                 GCM counter is incremented automatically. */
        uint64_t reserved_32_63        : 32;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_mcsx_gae_rx_slave_fips_ctr_s cn; */
};
typedef union cavm_mcsx_gae_rx_slave_fips_ctr cavm_mcsx_gae_rx_slave_fips_ctr_t;

static inline uint64_t CAVM_MCSX_GAE_RX_SLAVE_FIPS_CTR(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_MCSX_GAE_RX_SLAVE_FIPS_CTR(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CNF10KB) && (a<=6))
        return 0x87e080000028ll + 0x1000000ll * ((a) & 0x7);
    __cavm_csr_fatal("MCSX_GAE_RX_SLAVE_FIPS_CTR", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_MCSX_GAE_RX_SLAVE_FIPS_CTR(a) cavm_mcsx_gae_rx_slave_fips_ctr_t
#define bustype_CAVM_MCSX_GAE_RX_SLAVE_FIPS_CTR(a) CSR_TYPE_RSL
#define basename_CAVM_MCSX_GAE_RX_SLAVE_FIPS_CTR(a) "MCSX_GAE_RX_SLAVE_FIPS_CTR"
#define device_bar_CAVM_MCSX_GAE_RX_SLAVE_FIPS_CTR(a) 0x0 /* PF_BAR0 */
#define busnum_CAVM_MCSX_GAE_RX_SLAVE_FIPS_CTR(a) (a)
#define arguments_CAVM_MCSX_GAE_RX_SLAVE_FIPS_CTR(a) (a),-1,-1,-1

/**
 * Register (RSL) mcs#_gae_rx_slave_fips_hashkey_bits127_64
 *
 * MCS Gae Rx Slave Fips Hashkey Bits127 64 Register
 * FIPS HashKey bits 127 to 64.  Key used for authentication. This is derived by
 * performing a 128/256 bit AES-ECB block encryption of an all 0s block with the SAK:
 * E(SAK, 128'h0).  The cipher text result of this operation is the H Key software
 * needs to configure in this entry.
 */
union cavm_mcsx_gae_rx_slave_fips_hashkey_bits127_64
{
    uint64_t u;
    struct cavm_mcsx_gae_rx_slave_fips_hashkey_bits127_64_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t data_msb              : 32; /**< [ 63: 32](R/W) Default HashKey[127:96]. */
        uint64_t data_lsb              : 32; /**< [ 31:  0](R/W) Default HashKey[95:64]. */
#else /* Word 0 - Little Endian */
        uint64_t data_lsb              : 32; /**< [ 31:  0](R/W) Default HashKey[95:64]. */
        uint64_t data_msb              : 32; /**< [ 63: 32](R/W) Default HashKey[127:96]. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_mcsx_gae_rx_slave_fips_hashkey_bits127_64_s cn; */
};
typedef union cavm_mcsx_gae_rx_slave_fips_hashkey_bits127_64 cavm_mcsx_gae_rx_slave_fips_hashkey_bits127_64_t;

static inline uint64_t CAVM_MCSX_GAE_RX_SLAVE_FIPS_HASHKEY_BITS127_64(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_MCSX_GAE_RX_SLAVE_FIPS_HASHKEY_BITS127_64(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CNF10KB) && (a<=6))
        return 0x87e080000050ll + 0x1000000ll * ((a) & 0x7);
    __cavm_csr_fatal("MCSX_GAE_RX_SLAVE_FIPS_HASHKEY_BITS127_64", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_MCSX_GAE_RX_SLAVE_FIPS_HASHKEY_BITS127_64(a) cavm_mcsx_gae_rx_slave_fips_hashkey_bits127_64_t
#define bustype_CAVM_MCSX_GAE_RX_SLAVE_FIPS_HASHKEY_BITS127_64(a) CSR_TYPE_RSL
#define basename_CAVM_MCSX_GAE_RX_SLAVE_FIPS_HASHKEY_BITS127_64(a) "MCSX_GAE_RX_SLAVE_FIPS_HASHKEY_BITS127_64"
#define device_bar_CAVM_MCSX_GAE_RX_SLAVE_FIPS_HASHKEY_BITS127_64(a) 0x0 /* PF_BAR0 */
#define busnum_CAVM_MCSX_GAE_RX_SLAVE_FIPS_HASHKEY_BITS127_64(a) (a)
#define arguments_CAVM_MCSX_GAE_RX_SLAVE_FIPS_HASHKEY_BITS127_64(a) (a),-1,-1,-1

/**
 * Register (RSL) mcs#_gae_rx_slave_fips_hashkey_bits63_0
 *
 * MCS Gae Rx Slave Fips Hashkey Bits63 0 Register
 * FIPS HashKey bits 63 to 0.  Key used for authentication. This is derived by
 * performing a 128/256 bit AES-ECB block encryption of an all 0s block with the SAK:
 * E(SAK, 128'h0).  The cipher text result of this operation is the H Key software
 * needs to configure in this entry.
 */
union cavm_mcsx_gae_rx_slave_fips_hashkey_bits63_0
{
    uint64_t u;
    struct cavm_mcsx_gae_rx_slave_fips_hashkey_bits63_0_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t data_msb              : 32; /**< [ 63: 32](R/W) Default HashKey[63:32]. */
        uint64_t data_lsb              : 32; /**< [ 31:  0](R/W) Default HashKey[31:0]. */
#else /* Word 0 - Little Endian */
        uint64_t data_lsb              : 32; /**< [ 31:  0](R/W) Default HashKey[31:0]. */
        uint64_t data_msb              : 32; /**< [ 63: 32](R/W) Default HashKey[63:32]. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_mcsx_gae_rx_slave_fips_hashkey_bits63_0_s cn; */
};
typedef union cavm_mcsx_gae_rx_slave_fips_hashkey_bits63_0 cavm_mcsx_gae_rx_slave_fips_hashkey_bits63_0_t;

static inline uint64_t CAVM_MCSX_GAE_RX_SLAVE_FIPS_HASHKEY_BITS63_0(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_MCSX_GAE_RX_SLAVE_FIPS_HASHKEY_BITS63_0(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CNF10KB) && (a<=6))
        return 0x87e080000058ll + 0x1000000ll * ((a) & 0x7);
    __cavm_csr_fatal("MCSX_GAE_RX_SLAVE_FIPS_HASHKEY_BITS63_0", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_MCSX_GAE_RX_SLAVE_FIPS_HASHKEY_BITS63_0(a) cavm_mcsx_gae_rx_slave_fips_hashkey_bits63_0_t
#define bustype_CAVM_MCSX_GAE_RX_SLAVE_FIPS_HASHKEY_BITS63_0(a) CSR_TYPE_RSL
#define basename_CAVM_MCSX_GAE_RX_SLAVE_FIPS_HASHKEY_BITS63_0(a) "MCSX_GAE_RX_SLAVE_FIPS_HASHKEY_BITS63_0"
#define device_bar_CAVM_MCSX_GAE_RX_SLAVE_FIPS_HASHKEY_BITS63_0(a) 0x0 /* PF_BAR0 */
#define busnum_CAVM_MCSX_GAE_RX_SLAVE_FIPS_HASHKEY_BITS63_0(a) (a)
#define arguments_CAVM_MCSX_GAE_RX_SLAVE_FIPS_HASHKEY_BITS63_0(a) (a),-1,-1,-1

/**
 * Register (RSL) mcs#_gae_rx_slave_fips_iv_bits63_0
 *
 * MCS Gae Rx Slave Fips Iv Bits63 0 Register
 * FIPS IV bits 63-0
 */
union cavm_mcsx_gae_rx_slave_fips_iv_bits63_0
{
    uint64_t u;
    struct cavm_mcsx_gae_rx_slave_fips_iv_bits63_0_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t data_msb              : 32; /**< [ 63: 32](R/W) Default IV[63:32]. */
        uint64_t data_lsb              : 32; /**< [ 31:  0](R/W) Default IV[31:0]. */
#else /* Word 0 - Little Endian */
        uint64_t data_lsb              : 32; /**< [ 31:  0](R/W) Default IV[31:0]. */
        uint64_t data_msb              : 32; /**< [ 63: 32](R/W) Default IV[63:32]. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_mcsx_gae_rx_slave_fips_iv_bits63_0_s cn; */
};
typedef union cavm_mcsx_gae_rx_slave_fips_iv_bits63_0 cavm_mcsx_gae_rx_slave_fips_iv_bits63_0_t;

static inline uint64_t CAVM_MCSX_GAE_RX_SLAVE_FIPS_IV_BITS63_0(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_MCSX_GAE_RX_SLAVE_FIPS_IV_BITS63_0(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CNF10KB) && (a<=6))
        return 0x87e080000020ll + 0x1000000ll * ((a) & 0x7);
    __cavm_csr_fatal("MCSX_GAE_RX_SLAVE_FIPS_IV_BITS63_0", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_MCSX_GAE_RX_SLAVE_FIPS_IV_BITS63_0(a) cavm_mcsx_gae_rx_slave_fips_iv_bits63_0_t
#define bustype_CAVM_MCSX_GAE_RX_SLAVE_FIPS_IV_BITS63_0(a) CSR_TYPE_RSL
#define basename_CAVM_MCSX_GAE_RX_SLAVE_FIPS_IV_BITS63_0(a) "MCSX_GAE_RX_SLAVE_FIPS_IV_BITS63_0"
#define device_bar_CAVM_MCSX_GAE_RX_SLAVE_FIPS_IV_BITS63_0(a) 0x0 /* PF_BAR0 */
#define busnum_CAVM_MCSX_GAE_RX_SLAVE_FIPS_IV_BITS63_0(a) (a)
#define arguments_CAVM_MCSX_GAE_RX_SLAVE_FIPS_IV_BITS63_0(a) (a),-1,-1,-1

/**
 * Register (RSL) mcs#_gae_rx_slave_fips_iv_bits95_64
 *
 * MCS Gae Rx Slave Fips Iv Bits95 64 Register
 * FIPS IV bits 95-64
 */
union cavm_mcsx_gae_rx_slave_fips_iv_bits95_64
{
    uint64_t u;
    struct cavm_mcsx_gae_rx_slave_fips_iv_bits95_64_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_32_63        : 32;
        uint64_t data                  : 32; /**< [ 31:  0](R/W) FIPS IV bits 95-64. */
#else /* Word 0 - Little Endian */
        uint64_t data                  : 32; /**< [ 31:  0](R/W) FIPS IV bits 95-64. */
        uint64_t reserved_32_63        : 32;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_mcsx_gae_rx_slave_fips_iv_bits95_64_s cn; */
};
typedef union cavm_mcsx_gae_rx_slave_fips_iv_bits95_64 cavm_mcsx_gae_rx_slave_fips_iv_bits95_64_t;

static inline uint64_t CAVM_MCSX_GAE_RX_SLAVE_FIPS_IV_BITS95_64(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_MCSX_GAE_RX_SLAVE_FIPS_IV_BITS95_64(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CNF10KB) && (a<=6))
        return 0x87e080000018ll + 0x1000000ll * ((a) & 0x7);
    __cavm_csr_fatal("MCSX_GAE_RX_SLAVE_FIPS_IV_BITS95_64", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_MCSX_GAE_RX_SLAVE_FIPS_IV_BITS95_64(a) cavm_mcsx_gae_rx_slave_fips_iv_bits95_64_t
#define bustype_CAVM_MCSX_GAE_RX_SLAVE_FIPS_IV_BITS95_64(a) CSR_TYPE_RSL
#define basename_CAVM_MCSX_GAE_RX_SLAVE_FIPS_IV_BITS95_64(a) "MCSX_GAE_RX_SLAVE_FIPS_IV_BITS95_64"
#define device_bar_CAVM_MCSX_GAE_RX_SLAVE_FIPS_IV_BITS95_64(a) 0x0 /* PF_BAR0 */
#define busnum_CAVM_MCSX_GAE_RX_SLAVE_FIPS_IV_BITS95_64(a) (a)
#define arguments_CAVM_MCSX_GAE_RX_SLAVE_FIPS_IV_BITS95_64(a) (a),-1,-1,-1

/**
 * Register (RSL) mcs#_gae_rx_slave_fips_mode
 *
 * MCS Gae Rx Slave Fips Mode Register
 * FIPS Mode CSR
 */
union cavm_mcsx_gae_rx_slave_fips_mode
{
    uint64_t u;
    struct cavm_mcsx_gae_rx_slave_fips_mode_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_7_63         : 57;
        uint64_t ecb                   : 1;  /**< [  6:  6](R/W) If set, AES-ECB mode is used */
        uint64_t channel               : 4;  /**< [  5:  2](R/W) Channel to run FIPS on. Default to 8 (dedicated channel for FIPS) */
        uint64_t keylen                : 1;  /**< [  1:  1](R/W) If set, Key length is 256bit. Default to 128bits (0) */
        uint64_t ctr_mode              : 1;  /**< [  0:  0](R/W) If set, GCM ctr is programmed manually. By default (0), ctr will increment
                                                                 automatically (starting from 1) */
#else /* Word 0 - Little Endian */
        uint64_t ctr_mode              : 1;  /**< [  0:  0](R/W) If set, GCM ctr is programmed manually. By default (0), ctr will increment
                                                                 automatically (starting from 1) */
        uint64_t keylen                : 1;  /**< [  1:  1](R/W) If set, Key length is 256bit. Default to 128bits (0) */
        uint64_t channel               : 4;  /**< [  5:  2](R/W) Channel to run FIPS on. Default to 8 (dedicated channel for FIPS) */
        uint64_t ecb                   : 1;  /**< [  6:  6](R/W) If set, AES-ECB mode is used */
        uint64_t reserved_7_63         : 57;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_mcsx_gae_rx_slave_fips_mode_s cn; */
};
typedef union cavm_mcsx_gae_rx_slave_fips_mode cavm_mcsx_gae_rx_slave_fips_mode_t;

static inline uint64_t CAVM_MCSX_GAE_RX_SLAVE_FIPS_MODE(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_MCSX_GAE_RX_SLAVE_FIPS_MODE(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CNF10KB) && (a<=6))
        return 0x87e080000008ll + 0x1000000ll * ((a) & 0x7);
    __cavm_csr_fatal("MCSX_GAE_RX_SLAVE_FIPS_MODE", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_MCSX_GAE_RX_SLAVE_FIPS_MODE(a) cavm_mcsx_gae_rx_slave_fips_mode_t
#define bustype_CAVM_MCSX_GAE_RX_SLAVE_FIPS_MODE(a) CSR_TYPE_RSL
#define basename_CAVM_MCSX_GAE_RX_SLAVE_FIPS_MODE(a) "MCSX_GAE_RX_SLAVE_FIPS_MODE"
#define device_bar_CAVM_MCSX_GAE_RX_SLAVE_FIPS_MODE(a) 0x0 /* PF_BAR0 */
#define busnum_CAVM_MCSX_GAE_RX_SLAVE_FIPS_MODE(a) (a)
#define arguments_CAVM_MCSX_GAE_RX_SLAVE_FIPS_MODE(a) (a),-1,-1,-1

/**
 * Register (RSL) mcs#_gae_rx_slave_fips_reset
 *
 * MCS Gae Rx Slave Fips Reset Register
 * FIPS Reset
 */
union cavm_mcsx_gae_rx_slave_fips_reset
{
    uint64_t u;
    struct cavm_mcsx_gae_rx_slave_fips_reset_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_1_63         : 63;
        uint64_t fips_reset            : 1;  /**< [  0:  0](R/W) SW should write this bit before populating any FIPS CSRs for each new multi-
                                                                 block message. This bit is self-cleared after write. */
#else /* Word 0 - Little Endian */
        uint64_t fips_reset            : 1;  /**< [  0:  0](R/W) SW should write this bit before populating any FIPS CSRs for each new multi-
                                                                 block message. This bit is self-cleared after write. */
        uint64_t reserved_1_63         : 63;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_mcsx_gae_rx_slave_fips_reset_s cn; */
};
typedef union cavm_mcsx_gae_rx_slave_fips_reset cavm_mcsx_gae_rx_slave_fips_reset_t;

static inline uint64_t CAVM_MCSX_GAE_RX_SLAVE_FIPS_RESET(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_MCSX_GAE_RX_SLAVE_FIPS_RESET(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CNF10KB) && (a<=6))
        return 0x87e080000000ll + 0x1000000ll * ((a) & 0x7);
    __cavm_csr_fatal("MCSX_GAE_RX_SLAVE_FIPS_RESET", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_MCSX_GAE_RX_SLAVE_FIPS_RESET(a) cavm_mcsx_gae_rx_slave_fips_reset_t
#define bustype_CAVM_MCSX_GAE_RX_SLAVE_FIPS_RESET(a) CSR_TYPE_RSL
#define basename_CAVM_MCSX_GAE_RX_SLAVE_FIPS_RESET(a) "MCSX_GAE_RX_SLAVE_FIPS_RESET"
#define device_bar_CAVM_MCSX_GAE_RX_SLAVE_FIPS_RESET(a) 0x0 /* PF_BAR0 */
#define busnum_CAVM_MCSX_GAE_RX_SLAVE_FIPS_RESET(a) (a)
#define arguments_CAVM_MCSX_GAE_RX_SLAVE_FIPS_RESET(a) (a),-1,-1,-1

/**
 * Register (RSL) mcs#_gae_rx_slave_fips_result_block_bits127_64
 *
 * MCS Gae Rx Slave Fips Result Block Bits127 64 Register
 * FIPS Result Block (AAD or Text) bits 127 to 64.  Result is valid only if
 * fips_ctl.block_is_aad == 0.
 */
union cavm_mcsx_gae_rx_slave_fips_result_block_bits127_64
{
    uint64_t u;
    struct cavm_mcsx_gae_rx_slave_fips_result_block_bits127_64_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t data_msb              : 32; /**< [ 63: 32](RO) Result Block[127:96] (AAD or Text). */
        uint64_t data_lsb              : 32; /**< [ 31:  0](RO) Result Block[95:64] (AAD or Text). */
#else /* Word 0 - Little Endian */
        uint64_t data_lsb              : 32; /**< [ 31:  0](RO) Result Block[95:64] (AAD or Text). */
        uint64_t data_msb              : 32; /**< [ 63: 32](RO) Result Block[127:96] (AAD or Text). */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_mcsx_gae_rx_slave_fips_result_block_bits127_64_s cn; */
};
typedef union cavm_mcsx_gae_rx_slave_fips_result_block_bits127_64 cavm_mcsx_gae_rx_slave_fips_result_block_bits127_64_t;

static inline uint64_t CAVM_MCSX_GAE_RX_SLAVE_FIPS_RESULT_BLOCK_BITS127_64(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_MCSX_GAE_RX_SLAVE_FIPS_RESULT_BLOCK_BITS127_64(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CNF10KB) && (a<=6))
        return 0x87e080000078ll + 0x1000000ll * ((a) & 0x7);
    __cavm_csr_fatal("MCSX_GAE_RX_SLAVE_FIPS_RESULT_BLOCK_BITS127_64", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_MCSX_GAE_RX_SLAVE_FIPS_RESULT_BLOCK_BITS127_64(a) cavm_mcsx_gae_rx_slave_fips_result_block_bits127_64_t
#define bustype_CAVM_MCSX_GAE_RX_SLAVE_FIPS_RESULT_BLOCK_BITS127_64(a) CSR_TYPE_RSL
#define basename_CAVM_MCSX_GAE_RX_SLAVE_FIPS_RESULT_BLOCK_BITS127_64(a) "MCSX_GAE_RX_SLAVE_FIPS_RESULT_BLOCK_BITS127_64"
#define device_bar_CAVM_MCSX_GAE_RX_SLAVE_FIPS_RESULT_BLOCK_BITS127_64(a) 0x0 /* PF_BAR0 */
#define busnum_CAVM_MCSX_GAE_RX_SLAVE_FIPS_RESULT_BLOCK_BITS127_64(a) (a)
#define arguments_CAVM_MCSX_GAE_RX_SLAVE_FIPS_RESULT_BLOCK_BITS127_64(a) (a),-1,-1,-1

/**
 * Register (RSL) mcs#_gae_rx_slave_fips_result_block_bits63_0
 *
 * MCS Gae Rx Slave Fips Result Block Bits63 0 Register
 * FIPS Result Block (AAD or Text) bits 63 to 0.  Result is valid only if fips_ctl.block_is_aad == 0.
 */
union cavm_mcsx_gae_rx_slave_fips_result_block_bits63_0
{
    uint64_t u;
    struct cavm_mcsx_gae_rx_slave_fips_result_block_bits63_0_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t data_msb              : 32; /**< [ 63: 32](RO) Result Block[63:32] (AAD or Text). */
        uint64_t data_lsb              : 32; /**< [ 31:  0](RO) Result Block[31:0] (AAD or Text). */
#else /* Word 0 - Little Endian */
        uint64_t data_lsb              : 32; /**< [ 31:  0](RO) Result Block[31:0] (AAD or Text). */
        uint64_t data_msb              : 32; /**< [ 63: 32](RO) Result Block[63:32] (AAD or Text). */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_mcsx_gae_rx_slave_fips_result_block_bits63_0_s cn; */
};
typedef union cavm_mcsx_gae_rx_slave_fips_result_block_bits63_0 cavm_mcsx_gae_rx_slave_fips_result_block_bits63_0_t;

static inline uint64_t CAVM_MCSX_GAE_RX_SLAVE_FIPS_RESULT_BLOCK_BITS63_0(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_MCSX_GAE_RX_SLAVE_FIPS_RESULT_BLOCK_BITS63_0(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CNF10KB) && (a<=6))
        return 0x87e080000080ll + 0x1000000ll * ((a) & 0x7);
    __cavm_csr_fatal("MCSX_GAE_RX_SLAVE_FIPS_RESULT_BLOCK_BITS63_0", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_MCSX_GAE_RX_SLAVE_FIPS_RESULT_BLOCK_BITS63_0(a) cavm_mcsx_gae_rx_slave_fips_result_block_bits63_0_t
#define bustype_CAVM_MCSX_GAE_RX_SLAVE_FIPS_RESULT_BLOCK_BITS63_0(a) CSR_TYPE_RSL
#define basename_CAVM_MCSX_GAE_RX_SLAVE_FIPS_RESULT_BLOCK_BITS63_0(a) "MCSX_GAE_RX_SLAVE_FIPS_RESULT_BLOCK_BITS63_0"
#define device_bar_CAVM_MCSX_GAE_RX_SLAVE_FIPS_RESULT_BLOCK_BITS63_0(a) 0x0 /* PF_BAR0 */
#define busnum_CAVM_MCSX_GAE_RX_SLAVE_FIPS_RESULT_BLOCK_BITS63_0(a) (a)
#define arguments_CAVM_MCSX_GAE_RX_SLAVE_FIPS_RESULT_BLOCK_BITS63_0(a) (a),-1,-1,-1

/**
 * Register (RSL) mcs#_gae_rx_slave_fips_result_icv_bits127_64
 *
 * MCS Gae Rx Slave Fips Result Icv Bits127 64 Register
 * FIPS Result ICV bits 127 to 64.  Only for egress (encryption).  Result is valid only
 * if fips_ctl.len_round == 1.
 */
union cavm_mcsx_gae_rx_slave_fips_result_icv_bits127_64
{
    uint64_t u;
    struct cavm_mcsx_gae_rx_slave_fips_result_icv_bits127_64_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t data_msb              : 32; /**< [ 63: 32](RO) Result ICV[127:96] */
        uint64_t data_lsb              : 32; /**< [ 31:  0](RO) Result ICV[95:64] */
#else /* Word 0 - Little Endian */
        uint64_t data_lsb              : 32; /**< [ 31:  0](RO) Result ICV[95:64] */
        uint64_t data_msb              : 32; /**< [ 63: 32](RO) Result ICV[127:96] */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_mcsx_gae_rx_slave_fips_result_icv_bits127_64_s cn; */
};
typedef union cavm_mcsx_gae_rx_slave_fips_result_icv_bits127_64 cavm_mcsx_gae_rx_slave_fips_result_icv_bits127_64_t;

static inline uint64_t CAVM_MCSX_GAE_RX_SLAVE_FIPS_RESULT_ICV_BITS127_64(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_MCSX_GAE_RX_SLAVE_FIPS_RESULT_ICV_BITS127_64(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CNF10KB) && (a<=6))
        return 0x87e080000090ll + 0x1000000ll * ((a) & 0x7);
    __cavm_csr_fatal("MCSX_GAE_RX_SLAVE_FIPS_RESULT_ICV_BITS127_64", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_MCSX_GAE_RX_SLAVE_FIPS_RESULT_ICV_BITS127_64(a) cavm_mcsx_gae_rx_slave_fips_result_icv_bits127_64_t
#define bustype_CAVM_MCSX_GAE_RX_SLAVE_FIPS_RESULT_ICV_BITS127_64(a) CSR_TYPE_RSL
#define basename_CAVM_MCSX_GAE_RX_SLAVE_FIPS_RESULT_ICV_BITS127_64(a) "MCSX_GAE_RX_SLAVE_FIPS_RESULT_ICV_BITS127_64"
#define device_bar_CAVM_MCSX_GAE_RX_SLAVE_FIPS_RESULT_ICV_BITS127_64(a) 0x0 /* PF_BAR0 */
#define busnum_CAVM_MCSX_GAE_RX_SLAVE_FIPS_RESULT_ICV_BITS127_64(a) (a)
#define arguments_CAVM_MCSX_GAE_RX_SLAVE_FIPS_RESULT_ICV_BITS127_64(a) (a),-1,-1,-1

/**
 * Register (RSL) mcs#_gae_rx_slave_fips_result_icv_bits63_0
 *
 * MCS Gae Rx Slave Fips Result Icv Bits63 0 Register
 * FIPS Result ICV bits 63 to 0.  Only for egress (encryption).  Result is valid only
 * if fips_ctl.len_round == 1.
 */
union cavm_mcsx_gae_rx_slave_fips_result_icv_bits63_0
{
    uint64_t u;
    struct cavm_mcsx_gae_rx_slave_fips_result_icv_bits63_0_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t data_msb              : 32; /**< [ 63: 32](RO) Result ICV[63:32] */
        uint64_t data_lsb              : 32; /**< [ 31:  0](RO) Result ICV[31:0] */
#else /* Word 0 - Little Endian */
        uint64_t data_lsb              : 32; /**< [ 31:  0](RO) Result ICV[31:0] */
        uint64_t data_msb              : 32; /**< [ 63: 32](RO) Result ICV[63:32] */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_mcsx_gae_rx_slave_fips_result_icv_bits63_0_s cn; */
};
typedef union cavm_mcsx_gae_rx_slave_fips_result_icv_bits63_0 cavm_mcsx_gae_rx_slave_fips_result_icv_bits63_0_t;

static inline uint64_t CAVM_MCSX_GAE_RX_SLAVE_FIPS_RESULT_ICV_BITS63_0(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_MCSX_GAE_RX_SLAVE_FIPS_RESULT_ICV_BITS63_0(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CNF10KB) && (a<=6))
        return 0x87e080000098ll + 0x1000000ll * ((a) & 0x7);
    __cavm_csr_fatal("MCSX_GAE_RX_SLAVE_FIPS_RESULT_ICV_BITS63_0", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_MCSX_GAE_RX_SLAVE_FIPS_RESULT_ICV_BITS63_0(a) cavm_mcsx_gae_rx_slave_fips_result_icv_bits63_0_t
#define bustype_CAVM_MCSX_GAE_RX_SLAVE_FIPS_RESULT_ICV_BITS63_0(a) CSR_TYPE_RSL
#define basename_CAVM_MCSX_GAE_RX_SLAVE_FIPS_RESULT_ICV_BITS63_0(a) "MCSX_GAE_RX_SLAVE_FIPS_RESULT_ICV_BITS63_0"
#define device_bar_CAVM_MCSX_GAE_RX_SLAVE_FIPS_RESULT_ICV_BITS63_0(a) 0x0 /* PF_BAR0 */
#define busnum_CAVM_MCSX_GAE_RX_SLAVE_FIPS_RESULT_ICV_BITS63_0(a) (a)
#define arguments_CAVM_MCSX_GAE_RX_SLAVE_FIPS_RESULT_ICV_BITS63_0(a) (a),-1,-1,-1

/**
 * Register (RSL) mcs#_gae_rx_slave_fips_result_pass
 *
 * MCS Gae Rx Slave Fips Result Pass Register
 * FIPS Results Pass
 */
union cavm_mcsx_gae_rx_slave_fips_result_pass
{
    uint64_t u;
    struct cavm_mcsx_gae_rx_slave_fips_result_pass_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_1_63         : 63;
        uint64_t fips_result_pass      : 1;  /**< [  0:  0](RO) Only for ingress (decryption). Set to 1 if generated ICV matches incoming ICV
                                                                 provided through the Input Block CSR. */
#else /* Word 0 - Little Endian */
        uint64_t fips_result_pass      : 1;  /**< [  0:  0](RO) Only for ingress (decryption). Set to 1 if generated ICV matches incoming ICV
                                                                 provided through the Input Block CSR. */
        uint64_t reserved_1_63         : 63;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_mcsx_gae_rx_slave_fips_result_pass_s cn; */
};
typedef union cavm_mcsx_gae_rx_slave_fips_result_pass cavm_mcsx_gae_rx_slave_fips_result_pass_t;

static inline uint64_t CAVM_MCSX_GAE_RX_SLAVE_FIPS_RESULT_PASS(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_MCSX_GAE_RX_SLAVE_FIPS_RESULT_PASS(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CNF10KB) && (a<=6))
        return 0x87e080000088ll + 0x1000000ll * ((a) & 0x7);
    __cavm_csr_fatal("MCSX_GAE_RX_SLAVE_FIPS_RESULT_PASS", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_MCSX_GAE_RX_SLAVE_FIPS_RESULT_PASS(a) cavm_mcsx_gae_rx_slave_fips_result_pass_t
#define bustype_CAVM_MCSX_GAE_RX_SLAVE_FIPS_RESULT_PASS(a) CSR_TYPE_RSL
#define basename_CAVM_MCSX_GAE_RX_SLAVE_FIPS_RESULT_PASS(a) "MCSX_GAE_RX_SLAVE_FIPS_RESULT_PASS"
#define device_bar_CAVM_MCSX_GAE_RX_SLAVE_FIPS_RESULT_PASS(a) 0x0 /* PF_BAR0 */
#define busnum_CAVM_MCSX_GAE_RX_SLAVE_FIPS_RESULT_PASS(a) (a)
#define arguments_CAVM_MCSX_GAE_RX_SLAVE_FIPS_RESULT_PASS(a) (a),-1,-1,-1

/**
 * Register (RSL) mcs#_gae_rx_slave_fips_sak_bits127_64
 *
 * MCS Gae Rx Slave Fips Sak Bits127 64 Register
 * FIPS SAK bits 127 to 64
 */
union cavm_mcsx_gae_rx_slave_fips_sak_bits127_64
{
    uint64_t u;
    struct cavm_mcsx_gae_rx_slave_fips_sak_bits127_64_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t data_msb              : 32; /**< [ 63: 32](R/W) Default SAK[127:96]. */
        uint64_t data_lsb              : 32; /**< [ 31:  0](R/W) Default SAK[95:64]. */
#else /* Word 0 - Little Endian */
        uint64_t data_lsb              : 32; /**< [ 31:  0](R/W) Default SAK[95:64]. */
        uint64_t data_msb              : 32; /**< [ 63: 32](R/W) Default SAK[127:96]. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_mcsx_gae_rx_slave_fips_sak_bits127_64_s cn; */
};
typedef union cavm_mcsx_gae_rx_slave_fips_sak_bits127_64 cavm_mcsx_gae_rx_slave_fips_sak_bits127_64_t;

static inline uint64_t CAVM_MCSX_GAE_RX_SLAVE_FIPS_SAK_BITS127_64(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_MCSX_GAE_RX_SLAVE_FIPS_SAK_BITS127_64(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CNF10KB) && (a<=6))
        return 0x87e080000040ll + 0x1000000ll * ((a) & 0x7);
    __cavm_csr_fatal("MCSX_GAE_RX_SLAVE_FIPS_SAK_BITS127_64", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_MCSX_GAE_RX_SLAVE_FIPS_SAK_BITS127_64(a) cavm_mcsx_gae_rx_slave_fips_sak_bits127_64_t
#define bustype_CAVM_MCSX_GAE_RX_SLAVE_FIPS_SAK_BITS127_64(a) CSR_TYPE_RSL
#define basename_CAVM_MCSX_GAE_RX_SLAVE_FIPS_SAK_BITS127_64(a) "MCSX_GAE_RX_SLAVE_FIPS_SAK_BITS127_64"
#define device_bar_CAVM_MCSX_GAE_RX_SLAVE_FIPS_SAK_BITS127_64(a) 0x0 /* PF_BAR0 */
#define busnum_CAVM_MCSX_GAE_RX_SLAVE_FIPS_SAK_BITS127_64(a) (a)
#define arguments_CAVM_MCSX_GAE_RX_SLAVE_FIPS_SAK_BITS127_64(a) (a),-1,-1,-1

/**
 * Register (RSL) mcs#_gae_rx_slave_fips_sak_bits191_128
 *
 * MCS Gae Rx Slave Fips Sak Bits191 128 Register
 * FIPS SAK bits 191 to 128
 */
union cavm_mcsx_gae_rx_slave_fips_sak_bits191_128
{
    uint64_t u;
    struct cavm_mcsx_gae_rx_slave_fips_sak_bits191_128_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t data_msb              : 32; /**< [ 63: 32](R/W) Default SAK[191:160]. */
        uint64_t data_lsb              : 32; /**< [ 31:  0](R/W) Default SAK[159:128]. */
#else /* Word 0 - Little Endian */
        uint64_t data_lsb              : 32; /**< [ 31:  0](R/W) Default SAK[159:128]. */
        uint64_t data_msb              : 32; /**< [ 63: 32](R/W) Default SAK[191:160]. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_mcsx_gae_rx_slave_fips_sak_bits191_128_s cn; */
};
typedef union cavm_mcsx_gae_rx_slave_fips_sak_bits191_128 cavm_mcsx_gae_rx_slave_fips_sak_bits191_128_t;

static inline uint64_t CAVM_MCSX_GAE_RX_SLAVE_FIPS_SAK_BITS191_128(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_MCSX_GAE_RX_SLAVE_FIPS_SAK_BITS191_128(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CNF10KB) && (a<=6))
        return 0x87e080000038ll + 0x1000000ll * ((a) & 0x7);
    __cavm_csr_fatal("MCSX_GAE_RX_SLAVE_FIPS_SAK_BITS191_128", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_MCSX_GAE_RX_SLAVE_FIPS_SAK_BITS191_128(a) cavm_mcsx_gae_rx_slave_fips_sak_bits191_128_t
#define bustype_CAVM_MCSX_GAE_RX_SLAVE_FIPS_SAK_BITS191_128(a) CSR_TYPE_RSL
#define basename_CAVM_MCSX_GAE_RX_SLAVE_FIPS_SAK_BITS191_128(a) "MCSX_GAE_RX_SLAVE_FIPS_SAK_BITS191_128"
#define device_bar_CAVM_MCSX_GAE_RX_SLAVE_FIPS_SAK_BITS191_128(a) 0x0 /* PF_BAR0 */
#define busnum_CAVM_MCSX_GAE_RX_SLAVE_FIPS_SAK_BITS191_128(a) (a)
#define arguments_CAVM_MCSX_GAE_RX_SLAVE_FIPS_SAK_BITS191_128(a) (a),-1,-1,-1

/**
 * Register (RSL) mcs#_gae_rx_slave_fips_sak_bits255_192
 *
 * MCS Gae Rx Slave Fips Sak Bits255 192 Register
 * FIPS SAK bits 255 to 192
 */
union cavm_mcsx_gae_rx_slave_fips_sak_bits255_192
{
    uint64_t u;
    struct cavm_mcsx_gae_rx_slave_fips_sak_bits255_192_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t data_msb              : 32; /**< [ 63: 32](R/W) Default SAK[255:224]. */
        uint64_t data_lsb              : 32; /**< [ 31:  0](R/W) Default SAK[223:192]. */
#else /* Word 0 - Little Endian */
        uint64_t data_lsb              : 32; /**< [ 31:  0](R/W) Default SAK[223:192]. */
        uint64_t data_msb              : 32; /**< [ 63: 32](R/W) Default SAK[255:224]. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_mcsx_gae_rx_slave_fips_sak_bits255_192_s cn; */
};
typedef union cavm_mcsx_gae_rx_slave_fips_sak_bits255_192 cavm_mcsx_gae_rx_slave_fips_sak_bits255_192_t;

static inline uint64_t CAVM_MCSX_GAE_RX_SLAVE_FIPS_SAK_BITS255_192(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_MCSX_GAE_RX_SLAVE_FIPS_SAK_BITS255_192(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CNF10KB) && (a<=6))
        return 0x87e080000030ll + 0x1000000ll * ((a) & 0x7);
    __cavm_csr_fatal("MCSX_GAE_RX_SLAVE_FIPS_SAK_BITS255_192", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_MCSX_GAE_RX_SLAVE_FIPS_SAK_BITS255_192(a) cavm_mcsx_gae_rx_slave_fips_sak_bits255_192_t
#define bustype_CAVM_MCSX_GAE_RX_SLAVE_FIPS_SAK_BITS255_192(a) CSR_TYPE_RSL
#define basename_CAVM_MCSX_GAE_RX_SLAVE_FIPS_SAK_BITS255_192(a) "MCSX_GAE_RX_SLAVE_FIPS_SAK_BITS255_192"
#define device_bar_CAVM_MCSX_GAE_RX_SLAVE_FIPS_SAK_BITS255_192(a) 0x0 /* PF_BAR0 */
#define busnum_CAVM_MCSX_GAE_RX_SLAVE_FIPS_SAK_BITS255_192(a) (a)
#define arguments_CAVM_MCSX_GAE_RX_SLAVE_FIPS_SAK_BITS255_192(a) (a),-1,-1,-1

/**
 * Register (RSL) mcs#_gae_rx_slave_fips_sak_bits63_0
 *
 * MCS Gae Rx Slave Fips Sak Bits63 0 Register
 * FIPS SAK bits 63 to 0
 */
union cavm_mcsx_gae_rx_slave_fips_sak_bits63_0
{
    uint64_t u;
    struct cavm_mcsx_gae_rx_slave_fips_sak_bits63_0_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t data_msb              : 32; /**< [ 63: 32](R/W) Default SAK[63:32]. */
        uint64_t data_lsb              : 32; /**< [ 31:  0](R/W) Default SAK[31:0]. */
#else /* Word 0 - Little Endian */
        uint64_t data_lsb              : 32; /**< [ 31:  0](R/W) Default SAK[31:0]. */
        uint64_t data_msb              : 32; /**< [ 63: 32](R/W) Default SAK[63:32]. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_mcsx_gae_rx_slave_fips_sak_bits63_0_s cn; */
};
typedef union cavm_mcsx_gae_rx_slave_fips_sak_bits63_0 cavm_mcsx_gae_rx_slave_fips_sak_bits63_0_t;

static inline uint64_t CAVM_MCSX_GAE_RX_SLAVE_FIPS_SAK_BITS63_0(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_MCSX_GAE_RX_SLAVE_FIPS_SAK_BITS63_0(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CNF10KB) && (a<=6))
        return 0x87e080000048ll + 0x1000000ll * ((a) & 0x7);
    __cavm_csr_fatal("MCSX_GAE_RX_SLAVE_FIPS_SAK_BITS63_0", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_MCSX_GAE_RX_SLAVE_FIPS_SAK_BITS63_0(a) cavm_mcsx_gae_rx_slave_fips_sak_bits63_0_t
#define bustype_CAVM_MCSX_GAE_RX_SLAVE_FIPS_SAK_BITS63_0(a) CSR_TYPE_RSL
#define basename_CAVM_MCSX_GAE_RX_SLAVE_FIPS_SAK_BITS63_0(a) "MCSX_GAE_RX_SLAVE_FIPS_SAK_BITS63_0"
#define device_bar_CAVM_MCSX_GAE_RX_SLAVE_FIPS_SAK_BITS63_0(a) 0x0 /* PF_BAR0 */
#define busnum_CAVM_MCSX_GAE_RX_SLAVE_FIPS_SAK_BITS63_0(a) (a)
#define arguments_CAVM_MCSX_GAE_RX_SLAVE_FIPS_SAK_BITS63_0(a) (a),-1,-1,-1

/**
 * Register (RSL) mcs#_gae_rx_slave_fips_start
 *
 * MCS Gae Rx Slave Fips Start Register
 * FIPS Start: User sets this bit after all CSRs are populated.  It will trigger FIPS
 * operation to start (using values setup in the CSRs).
 */
union cavm_mcsx_gae_rx_slave_fips_start
{
    uint64_t u;
    struct cavm_mcsx_gae_rx_slave_fips_start_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_1_63         : 63;
        uint64_t fips_start            : 1;  /**< [  0:  0](R/W) When set, it will trigger FIPS operation to start. The bit will be cleared by
                                                                 hardware when results are returned to the FIPS Result CSRs. */
#else /* Word 0 - Little Endian */
        uint64_t fips_start            : 1;  /**< [  0:  0](R/W) When set, it will trigger FIPS operation to start. The bit will be cleared by
                                                                 hardware when results are returned to the FIPS Result CSRs. */
        uint64_t reserved_1_63         : 63;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_mcsx_gae_rx_slave_fips_start_s cn; */
};
typedef union cavm_mcsx_gae_rx_slave_fips_start cavm_mcsx_gae_rx_slave_fips_start_t;

static inline uint64_t CAVM_MCSX_GAE_RX_SLAVE_FIPS_START(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_MCSX_GAE_RX_SLAVE_FIPS_START(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CNF10KB) && (a<=6))
        return 0x87e080000070ll + 0x1000000ll * ((a) & 0x7);
    __cavm_csr_fatal("MCSX_GAE_RX_SLAVE_FIPS_START", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_MCSX_GAE_RX_SLAVE_FIPS_START(a) cavm_mcsx_gae_rx_slave_fips_start_t
#define bustype_CAVM_MCSX_GAE_RX_SLAVE_FIPS_START(a) CSR_TYPE_RSL
#define basename_CAVM_MCSX_GAE_RX_SLAVE_FIPS_START(a) "MCSX_GAE_RX_SLAVE_FIPS_START"
#define device_bar_CAVM_MCSX_GAE_RX_SLAVE_FIPS_START(a) 0x0 /* PF_BAR0 */
#define busnum_CAVM_MCSX_GAE_RX_SLAVE_FIPS_START(a) (a)
#define arguments_CAVM_MCSX_GAE_RX_SLAVE_FIPS_START(a) (a),-1,-1,-1

/**
 * Register (RSL) mcs#_gae_tx_slave_dbg_mux_sel
 *
 * MCS Gae Tx Slave Dbg Mux Sel Register
 * Per segment mux control for the debug_mux.  Configuration of this register will
 * affect which debug set is output on the corresponding debug mux logic for the GAE.
 */
union cavm_mcsx_gae_tx_slave_dbg_mux_sel
{
    uint64_t u;
    struct cavm_mcsx_gae_tx_slave_dbg_mux_sel_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_29_63        : 35;
        uint64_t seg3                  : 5;  /**< [ 28: 24](R/W) Select which debug set is output on the segment3 of the debug mux for the GAE.
                                                                 Note that a higher level dbg_mux_sel also exists to select which block's debug
                                                                 sets are to be output of the IP */
        uint64_t reserved_21_23        : 3;
        uint64_t seg2                  : 5;  /**< [ 20: 16](R/W) Select which debug set is output on the segment2 of the debug mux for the GAE.
                                                                 Note that a higher level dbg_mux_sel also exists to select which block's debug
                                                                 sets are to be output of the IP */
        uint64_t reserved_13_15        : 3;
        uint64_t seg1                  : 5;  /**< [ 12:  8](R/W) Select which debug set is output on the segment1 of the debug mux for the GAE.
                                                                 Note that a higher level dbg_mux_sel also exists to select which block's debug
                                                                 sets are to be output of the IP */
        uint64_t reserved_5_7          : 3;
        uint64_t seg0                  : 5;  /**< [  4:  0](R/W) Select which debug set is output on the segment0 of the debug mux for the GAE.
                                                                 Note that a higher level dbg_mux_sel also exists to select which block's debug
                                                                 sets are to be output of the IP */
#else /* Word 0 - Little Endian */
        uint64_t seg0                  : 5;  /**< [  4:  0](R/W) Select which debug set is output on the segment0 of the debug mux for the GAE.
                                                                 Note that a higher level dbg_mux_sel also exists to select which block's debug
                                                                 sets are to be output of the IP */
        uint64_t reserved_5_7          : 3;
        uint64_t seg1                  : 5;  /**< [ 12:  8](R/W) Select which debug set is output on the segment1 of the debug mux for the GAE.
                                                                 Note that a higher level dbg_mux_sel also exists to select which block's debug
                                                                 sets are to be output of the IP */
        uint64_t reserved_13_15        : 3;
        uint64_t seg2                  : 5;  /**< [ 20: 16](R/W) Select which debug set is output on the segment2 of the debug mux for the GAE.
                                                                 Note that a higher level dbg_mux_sel also exists to select which block's debug
                                                                 sets are to be output of the IP */
        uint64_t reserved_21_23        : 3;
        uint64_t seg3                  : 5;  /**< [ 28: 24](R/W) Select which debug set is output on the segment3 of the debug mux for the GAE.
                                                                 Note that a higher level dbg_mux_sel also exists to select which block's debug
                                                                 sets are to be output of the IP */
        uint64_t reserved_29_63        : 35;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_mcsx_gae_tx_slave_dbg_mux_sel_s cn; */
};
typedef union cavm_mcsx_gae_tx_slave_dbg_mux_sel cavm_mcsx_gae_tx_slave_dbg_mux_sel_t;

static inline uint64_t CAVM_MCSX_GAE_TX_SLAVE_DBG_MUX_SEL(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_MCSX_GAE_TX_SLAVE_DBG_MUX_SEL(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CNF10KB) && (a<=6))
        return 0x87e080000150ll + 0x1000000ll * ((a) & 0x7);
    __cavm_csr_fatal("MCSX_GAE_TX_SLAVE_DBG_MUX_SEL", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_MCSX_GAE_TX_SLAVE_DBG_MUX_SEL(a) cavm_mcsx_gae_tx_slave_dbg_mux_sel_t
#define bustype_CAVM_MCSX_GAE_TX_SLAVE_DBG_MUX_SEL(a) CSR_TYPE_RSL
#define basename_CAVM_MCSX_GAE_TX_SLAVE_DBG_MUX_SEL(a) "MCSX_GAE_TX_SLAVE_DBG_MUX_SEL"
#define device_bar_CAVM_MCSX_GAE_TX_SLAVE_DBG_MUX_SEL(a) 0x0 /* PF_BAR0 */
#define busnum_CAVM_MCSX_GAE_TX_SLAVE_DBG_MUX_SEL(a) (a)
#define arguments_CAVM_MCSX_GAE_TX_SLAVE_DBG_MUX_SEL(a) (a),-1,-1,-1

/**
 * Register (RSL) mcs#_gae_tx_slave_debug_status
 *
 * MCS Gae Tx Slave Debug Status Register
 * Debug status register:  Captures the debug set selected by dbg_mux_sel.
 */
union cavm_mcsx_gae_tx_slave_debug_status
{
    uint64_t u;
    struct cavm_mcsx_gae_tx_slave_debug_status_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t seg3                  : 16; /**< [ 63: 48](RO) Debug set status for segment3. */
        uint64_t seg2                  : 16; /**< [ 47: 32](RO) Debug set status for segment2. */
        uint64_t seg1                  : 16; /**< [ 31: 16](RO) Debug set status for segment1. */
        uint64_t seg0                  : 16; /**< [ 15:  0](RO) Debug set status for segment0. */
#else /* Word 0 - Little Endian */
        uint64_t seg0                  : 16; /**< [ 15:  0](RO) Debug set status for segment0. */
        uint64_t seg1                  : 16; /**< [ 31: 16](RO) Debug set status for segment1. */
        uint64_t seg2                  : 16; /**< [ 47: 32](RO) Debug set status for segment2. */
        uint64_t seg3                  : 16; /**< [ 63: 48](RO) Debug set status for segment3. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_mcsx_gae_tx_slave_debug_status_s cn; */
};
typedef union cavm_mcsx_gae_tx_slave_debug_status cavm_mcsx_gae_tx_slave_debug_status_t;

static inline uint64_t CAVM_MCSX_GAE_TX_SLAVE_DEBUG_STATUS(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_MCSX_GAE_TX_SLAVE_DEBUG_STATUS(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CNF10KB) && (a<=6))
        return 0x87e080000158ll + 0x1000000ll * ((a) & 0x7);
    __cavm_csr_fatal("MCSX_GAE_TX_SLAVE_DEBUG_STATUS", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_MCSX_GAE_TX_SLAVE_DEBUG_STATUS(a) cavm_mcsx_gae_tx_slave_debug_status_t
#define bustype_CAVM_MCSX_GAE_TX_SLAVE_DEBUG_STATUS(a) CSR_TYPE_RSL
#define basename_CAVM_MCSX_GAE_TX_SLAVE_DEBUG_STATUS(a) "MCSX_GAE_TX_SLAVE_DEBUG_STATUS"
#define device_bar_CAVM_MCSX_GAE_TX_SLAVE_DEBUG_STATUS(a) 0x0 /* PF_BAR0 */
#define busnum_CAVM_MCSX_GAE_TX_SLAVE_DEBUG_STATUS(a) (a)
#define arguments_CAVM_MCSX_GAE_TX_SLAVE_DEBUG_STATUS(a) (a),-1,-1,-1

/**
 * Register (RSL) mcs#_gae_tx_slave_fips_block_bits127_64
 *
 * MCS Gae Tx Slave Fips Block Bits127 64 Register
 * FIPS Input Block (AAD or Text) bits 127 to 64.
 */
union cavm_mcsx_gae_tx_slave_fips_block_bits127_64
{
    uint64_t u;
    struct cavm_mcsx_gae_tx_slave_fips_block_bits127_64_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t data_msb              : 32; /**< [ 63: 32](R/W) Input Block[127:96] (AAD or Text/ICV).  For ICV (ingress only), it can straddle across 2 rounds. */
        uint64_t data_lsb              : 32; /**< [ 31:  0](R/W) Input Block[95:64] (AAD or Text/ICV).  For ICV (ingress only), it can straddle across 2 rounds. */
#else /* Word 0 - Little Endian */
        uint64_t data_lsb              : 32; /**< [ 31:  0](R/W) Input Block[95:64] (AAD or Text/ICV).  For ICV (ingress only), it can straddle across 2 rounds. */
        uint64_t data_msb              : 32; /**< [ 63: 32](R/W) Input Block[127:96] (AAD or Text/ICV).  For ICV (ingress only), it can straddle across 2 rounds. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_mcsx_gae_tx_slave_fips_block_bits127_64_s cn; */
};
typedef union cavm_mcsx_gae_tx_slave_fips_block_bits127_64 cavm_mcsx_gae_tx_slave_fips_block_bits127_64_t;

static inline uint64_t CAVM_MCSX_GAE_TX_SLAVE_FIPS_BLOCK_BITS127_64(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_MCSX_GAE_TX_SLAVE_FIPS_BLOCK_BITS127_64(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CNF10KB) && (a<=6))
        return 0x87e080000110ll + 0x1000000ll * ((a) & 0x7);
    __cavm_csr_fatal("MCSX_GAE_TX_SLAVE_FIPS_BLOCK_BITS127_64", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_MCSX_GAE_TX_SLAVE_FIPS_BLOCK_BITS127_64(a) cavm_mcsx_gae_tx_slave_fips_block_bits127_64_t
#define bustype_CAVM_MCSX_GAE_TX_SLAVE_FIPS_BLOCK_BITS127_64(a) CSR_TYPE_RSL
#define basename_CAVM_MCSX_GAE_TX_SLAVE_FIPS_BLOCK_BITS127_64(a) "MCSX_GAE_TX_SLAVE_FIPS_BLOCK_BITS127_64"
#define device_bar_CAVM_MCSX_GAE_TX_SLAVE_FIPS_BLOCK_BITS127_64(a) 0x0 /* PF_BAR0 */
#define busnum_CAVM_MCSX_GAE_TX_SLAVE_FIPS_BLOCK_BITS127_64(a) (a)
#define arguments_CAVM_MCSX_GAE_TX_SLAVE_FIPS_BLOCK_BITS127_64(a) (a),-1,-1,-1

/**
 * Register (RSL) mcs#_gae_tx_slave_fips_block_bits63_0
 *
 * MCS Gae Tx Slave Fips Block Bits63 0 Register
 * FIPS Input Block (AAD or Text) bits 63 to 0.
 */
union cavm_mcsx_gae_tx_slave_fips_block_bits63_0
{
    uint64_t u;
    struct cavm_mcsx_gae_tx_slave_fips_block_bits63_0_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t data_msb              : 32; /**< [ 63: 32](R/W) Input Block[63:32] (AAD or Text/ICV).  For ICV (ingress only), it can straddle across 2 rounds. */
        uint64_t data_lsb              : 32; /**< [ 31:  0](R/W) Input Block[31:0] (AAD or Text/ICV).  For ICV (ingress only), it can straddle across 2 rounds. */
#else /* Word 0 - Little Endian */
        uint64_t data_lsb              : 32; /**< [ 31:  0](R/W) Input Block[31:0] (AAD or Text/ICV).  For ICV (ingress only), it can straddle across 2 rounds. */
        uint64_t data_msb              : 32; /**< [ 63: 32](R/W) Input Block[63:32] (AAD or Text/ICV).  For ICV (ingress only), it can straddle across 2 rounds. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_mcsx_gae_tx_slave_fips_block_bits63_0_s cn; */
};
typedef union cavm_mcsx_gae_tx_slave_fips_block_bits63_0 cavm_mcsx_gae_tx_slave_fips_block_bits63_0_t;

static inline uint64_t CAVM_MCSX_GAE_TX_SLAVE_FIPS_BLOCK_BITS63_0(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_MCSX_GAE_TX_SLAVE_FIPS_BLOCK_BITS63_0(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CNF10KB) && (a<=6))
        return 0x87e080000118ll + 0x1000000ll * ((a) & 0x7);
    __cavm_csr_fatal("MCSX_GAE_TX_SLAVE_FIPS_BLOCK_BITS63_0", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_MCSX_GAE_TX_SLAVE_FIPS_BLOCK_BITS63_0(a) cavm_mcsx_gae_tx_slave_fips_block_bits63_0_t
#define bustype_CAVM_MCSX_GAE_TX_SLAVE_FIPS_BLOCK_BITS63_0(a) CSR_TYPE_RSL
#define basename_CAVM_MCSX_GAE_TX_SLAVE_FIPS_BLOCK_BITS63_0(a) "MCSX_GAE_TX_SLAVE_FIPS_BLOCK_BITS63_0"
#define device_bar_CAVM_MCSX_GAE_TX_SLAVE_FIPS_BLOCK_BITS63_0(a) 0x0 /* PF_BAR0 */
#define busnum_CAVM_MCSX_GAE_TX_SLAVE_FIPS_BLOCK_BITS63_0(a) (a)
#define arguments_CAVM_MCSX_GAE_TX_SLAVE_FIPS_BLOCK_BITS63_0(a) (a),-1,-1,-1

/**
 * Register (RSL) mcs#_gae_tx_slave_fips_ctl
 *
 * MCS Gae Tx Slave Fips Ctl Register
 * FIPS control
 */
union cavm_mcsx_gae_tx_slave_fips_ctl
{
    uint64_t u;
    struct cavm_mcsx_gae_tx_slave_fips_ctl_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_9_63         : 55;
        uint64_t vld                   : 1;  /**< [  8:  8](R/W) Qualify the following fields.  If not set, neither AAD nor Text is valid.  When
                                                                 there is no AAD, the first round must deassert vld in order to generate E(K,Y0)
                                                                 properly.  vld is irrelevant if len_round=1.  For ingress, must be asserted for
                                                                 ICV cycle. */
        uint64_t block_size            : 4;  /**< [  7:  4](R/W) Valid at every cycle of the current message. A value of 0 indicates all 16B is
                                                                 valid. Value can be 0 to 15 to indicate size of the last AAD block. If icv_start
                                                                 is asserted (ingress only), value indicates size of the last message block
                                                                 (ICV). For egress, value can be 0 to 15 to indicate size of the EOP block (eop
                                                                 is asserted). */
        uint64_t eop                   : 1;  /**< [  3:  3](R/W) Asserted at last cycle of the current message. Message can be single or multi-block. */
        uint64_t block_is_aad          : 1;  /**< [  2:  2](R/W) Fips_block CSR contains an AAD block. Default to 1. This bit must be asserted at
                                                                 SOP (ie. at least 1 block of AAD present) in order to generate a valid ICV on
                                                                 egress. */
        uint64_t len_round             : 1;  /**< [  1:  1](R/W) Only for egress (encryption). Asserted at the next round after EOP. This allows
                                                                 Length block to be hashed and generates ICV. */
        uint64_t next_icv              : 1;  /**< [  0:  0](R/W) Only for ingress (decryption).  Asserted at the last round of data (AAD or CT).
                                                                 Next round will be the full 16B ICV. */
#else /* Word 0 - Little Endian */
        uint64_t next_icv              : 1;  /**< [  0:  0](R/W) Only for ingress (decryption).  Asserted at the last round of data (AAD or CT).
                                                                 Next round will be the full 16B ICV. */
        uint64_t len_round             : 1;  /**< [  1:  1](R/W) Only for egress (encryption). Asserted at the next round after EOP. This allows
                                                                 Length block to be hashed and generates ICV. */
        uint64_t block_is_aad          : 1;  /**< [  2:  2](R/W) Fips_block CSR contains an AAD block. Default to 1. This bit must be asserted at
                                                                 SOP (ie. at least 1 block of AAD present) in order to generate a valid ICV on
                                                                 egress. */
        uint64_t eop                   : 1;  /**< [  3:  3](R/W) Asserted at last cycle of the current message. Message can be single or multi-block. */
        uint64_t block_size            : 4;  /**< [  7:  4](R/W) Valid at every cycle of the current message. A value of 0 indicates all 16B is
                                                                 valid. Value can be 0 to 15 to indicate size of the last AAD block. If icv_start
                                                                 is asserted (ingress only), value indicates size of the last message block
                                                                 (ICV). For egress, value can be 0 to 15 to indicate size of the EOP block (eop
                                                                 is asserted). */
        uint64_t vld                   : 1;  /**< [  8:  8](R/W) Qualify the following fields.  If not set, neither AAD nor Text is valid.  When
                                                                 there is no AAD, the first round must deassert vld in order to generate E(K,Y0)
                                                                 properly.  vld is irrelevant if len_round=1.  For ingress, must be asserted for
                                                                 ICV cycle. */
        uint64_t reserved_9_63         : 55;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_mcsx_gae_tx_slave_fips_ctl_s cn; */
};
typedef union cavm_mcsx_gae_tx_slave_fips_ctl cavm_mcsx_gae_tx_slave_fips_ctl_t;

static inline uint64_t CAVM_MCSX_GAE_TX_SLAVE_FIPS_CTL(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_MCSX_GAE_TX_SLAVE_FIPS_CTL(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CNF10KB) && (a<=6))
        return 0x87e0800000c0ll + 0x1000000ll * ((a) & 0x7);
    __cavm_csr_fatal("MCSX_GAE_TX_SLAVE_FIPS_CTL", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_MCSX_GAE_TX_SLAVE_FIPS_CTL(a) cavm_mcsx_gae_tx_slave_fips_ctl_t
#define bustype_CAVM_MCSX_GAE_TX_SLAVE_FIPS_CTL(a) CSR_TYPE_RSL
#define basename_CAVM_MCSX_GAE_TX_SLAVE_FIPS_CTL(a) "MCSX_GAE_TX_SLAVE_FIPS_CTL"
#define device_bar_CAVM_MCSX_GAE_TX_SLAVE_FIPS_CTL(a) 0x0 /* PF_BAR0 */
#define busnum_CAVM_MCSX_GAE_TX_SLAVE_FIPS_CTL(a) (a)
#define arguments_CAVM_MCSX_GAE_TX_SLAVE_FIPS_CTL(a) (a),-1,-1,-1

/**
 * Register (RSL) mcs#_gae_tx_slave_fips_ctr
 *
 * MCS Gae Tx Slave Fips Ctr Register
 * FIPS GCM Counter
 */
union cavm_mcsx_gae_tx_slave_fips_ctr
{
    uint64_t u;
    struct cavm_mcsx_gae_tx_slave_fips_ctr_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_32_63        : 32;
        uint64_t fips_ctr              : 32; /**< [ 31:  0](R/W) FIPS GCM Counter. Used only when ctr_mode == 1 (Manual programming). Otherwise
                                                                 GCM counter is incremented automatically. */
#else /* Word 0 - Little Endian */
        uint64_t fips_ctr              : 32; /**< [ 31:  0](R/W) FIPS GCM Counter. Used only when ctr_mode == 1 (Manual programming). Otherwise
                                                                 GCM counter is incremented automatically. */
        uint64_t reserved_32_63        : 32;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_mcsx_gae_tx_slave_fips_ctr_s cn; */
};
typedef union cavm_mcsx_gae_tx_slave_fips_ctr cavm_mcsx_gae_tx_slave_fips_ctr_t;

static inline uint64_t CAVM_MCSX_GAE_TX_SLAVE_FIPS_CTR(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_MCSX_GAE_TX_SLAVE_FIPS_CTR(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CNF10KB) && (a<=6))
        return 0x87e0800000d8ll + 0x1000000ll * ((a) & 0x7);
    __cavm_csr_fatal("MCSX_GAE_TX_SLAVE_FIPS_CTR", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_MCSX_GAE_TX_SLAVE_FIPS_CTR(a) cavm_mcsx_gae_tx_slave_fips_ctr_t
#define bustype_CAVM_MCSX_GAE_TX_SLAVE_FIPS_CTR(a) CSR_TYPE_RSL
#define basename_CAVM_MCSX_GAE_TX_SLAVE_FIPS_CTR(a) "MCSX_GAE_TX_SLAVE_FIPS_CTR"
#define device_bar_CAVM_MCSX_GAE_TX_SLAVE_FIPS_CTR(a) 0x0 /* PF_BAR0 */
#define busnum_CAVM_MCSX_GAE_TX_SLAVE_FIPS_CTR(a) (a)
#define arguments_CAVM_MCSX_GAE_TX_SLAVE_FIPS_CTR(a) (a),-1,-1,-1

/**
 * Register (RSL) mcs#_gae_tx_slave_fips_hashkey_bits127_64
 *
 * MCS Gae Tx Slave Fips Hashkey Bits127 64 Register
 * FIPS HashKey bits 127 to 64.  Key used for authentication. This is derived by
 * performing a 128/256 bit AES-ECB block encryption of an all 0s block with the SAK:
 * E(SAK, 128'h0).  The cipher text result of this operation is the H Key software
 * needs to configure in this entry.
 */
union cavm_mcsx_gae_tx_slave_fips_hashkey_bits127_64
{
    uint64_t u;
    struct cavm_mcsx_gae_tx_slave_fips_hashkey_bits127_64_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t data_msb              : 32; /**< [ 63: 32](R/W) Default HashKey[127:96]. */
        uint64_t data_lsb              : 32; /**< [ 31:  0](R/W) Default HashKey[95:64]. */
#else /* Word 0 - Little Endian */
        uint64_t data_lsb              : 32; /**< [ 31:  0](R/W) Default HashKey[95:64]. */
        uint64_t data_msb              : 32; /**< [ 63: 32](R/W) Default HashKey[127:96]. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_mcsx_gae_tx_slave_fips_hashkey_bits127_64_s cn; */
};
typedef union cavm_mcsx_gae_tx_slave_fips_hashkey_bits127_64 cavm_mcsx_gae_tx_slave_fips_hashkey_bits127_64_t;

static inline uint64_t CAVM_MCSX_GAE_TX_SLAVE_FIPS_HASHKEY_BITS127_64(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_MCSX_GAE_TX_SLAVE_FIPS_HASHKEY_BITS127_64(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CNF10KB) && (a<=6))
        return 0x87e080000100ll + 0x1000000ll * ((a) & 0x7);
    __cavm_csr_fatal("MCSX_GAE_TX_SLAVE_FIPS_HASHKEY_BITS127_64", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_MCSX_GAE_TX_SLAVE_FIPS_HASHKEY_BITS127_64(a) cavm_mcsx_gae_tx_slave_fips_hashkey_bits127_64_t
#define bustype_CAVM_MCSX_GAE_TX_SLAVE_FIPS_HASHKEY_BITS127_64(a) CSR_TYPE_RSL
#define basename_CAVM_MCSX_GAE_TX_SLAVE_FIPS_HASHKEY_BITS127_64(a) "MCSX_GAE_TX_SLAVE_FIPS_HASHKEY_BITS127_64"
#define device_bar_CAVM_MCSX_GAE_TX_SLAVE_FIPS_HASHKEY_BITS127_64(a) 0x0 /* PF_BAR0 */
#define busnum_CAVM_MCSX_GAE_TX_SLAVE_FIPS_HASHKEY_BITS127_64(a) (a)
#define arguments_CAVM_MCSX_GAE_TX_SLAVE_FIPS_HASHKEY_BITS127_64(a) (a),-1,-1,-1

/**
 * Register (RSL) mcs#_gae_tx_slave_fips_hashkey_bits63_0
 *
 * MCS Gae Tx Slave Fips Hashkey Bits63 0 Register
 * FIPS HashKey bits 63 to 0.  Key used for authentication. This is derived by
 * performing a 128/256 bit AES-ECB block encryption of an all 0s block with the SAK:
 * E(SAK, 128'h0).  The cipher text result of this operation is the H Key software
 * needs to configure in this entry.
 */
union cavm_mcsx_gae_tx_slave_fips_hashkey_bits63_0
{
    uint64_t u;
    struct cavm_mcsx_gae_tx_slave_fips_hashkey_bits63_0_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t data_msb              : 32; /**< [ 63: 32](R/W) Default HashKey[63:32]. */
        uint64_t data_lsb              : 32; /**< [ 31:  0](R/W) Default HashKey[31:0]. */
#else /* Word 0 - Little Endian */
        uint64_t data_lsb              : 32; /**< [ 31:  0](R/W) Default HashKey[31:0]. */
        uint64_t data_msb              : 32; /**< [ 63: 32](R/W) Default HashKey[63:32]. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_mcsx_gae_tx_slave_fips_hashkey_bits63_0_s cn; */
};
typedef union cavm_mcsx_gae_tx_slave_fips_hashkey_bits63_0 cavm_mcsx_gae_tx_slave_fips_hashkey_bits63_0_t;

static inline uint64_t CAVM_MCSX_GAE_TX_SLAVE_FIPS_HASHKEY_BITS63_0(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_MCSX_GAE_TX_SLAVE_FIPS_HASHKEY_BITS63_0(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CNF10KB) && (a<=6))
        return 0x87e080000108ll + 0x1000000ll * ((a) & 0x7);
    __cavm_csr_fatal("MCSX_GAE_TX_SLAVE_FIPS_HASHKEY_BITS63_0", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_MCSX_GAE_TX_SLAVE_FIPS_HASHKEY_BITS63_0(a) cavm_mcsx_gae_tx_slave_fips_hashkey_bits63_0_t
#define bustype_CAVM_MCSX_GAE_TX_SLAVE_FIPS_HASHKEY_BITS63_0(a) CSR_TYPE_RSL
#define basename_CAVM_MCSX_GAE_TX_SLAVE_FIPS_HASHKEY_BITS63_0(a) "MCSX_GAE_TX_SLAVE_FIPS_HASHKEY_BITS63_0"
#define device_bar_CAVM_MCSX_GAE_TX_SLAVE_FIPS_HASHKEY_BITS63_0(a) 0x0 /* PF_BAR0 */
#define busnum_CAVM_MCSX_GAE_TX_SLAVE_FIPS_HASHKEY_BITS63_0(a) (a)
#define arguments_CAVM_MCSX_GAE_TX_SLAVE_FIPS_HASHKEY_BITS63_0(a) (a),-1,-1,-1

/**
 * Register (RSL) mcs#_gae_tx_slave_fips_iv_bits63_0
 *
 * MCS Gae Tx Slave Fips Iv Bits63 0 Register
 * FIPS IV bits 63-0
 */
union cavm_mcsx_gae_tx_slave_fips_iv_bits63_0
{
    uint64_t u;
    struct cavm_mcsx_gae_tx_slave_fips_iv_bits63_0_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t data_msb              : 32; /**< [ 63: 32](R/W) Default IV[63:32]. */
        uint64_t data_lsb              : 32; /**< [ 31:  0](R/W) Default IV[31:0]. */
#else /* Word 0 - Little Endian */
        uint64_t data_lsb              : 32; /**< [ 31:  0](R/W) Default IV[31:0]. */
        uint64_t data_msb              : 32; /**< [ 63: 32](R/W) Default IV[63:32]. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_mcsx_gae_tx_slave_fips_iv_bits63_0_s cn; */
};
typedef union cavm_mcsx_gae_tx_slave_fips_iv_bits63_0 cavm_mcsx_gae_tx_slave_fips_iv_bits63_0_t;

static inline uint64_t CAVM_MCSX_GAE_TX_SLAVE_FIPS_IV_BITS63_0(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_MCSX_GAE_TX_SLAVE_FIPS_IV_BITS63_0(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CNF10KB) && (a<=6))
        return 0x87e0800000d0ll + 0x1000000ll * ((a) & 0x7);
    __cavm_csr_fatal("MCSX_GAE_TX_SLAVE_FIPS_IV_BITS63_0", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_MCSX_GAE_TX_SLAVE_FIPS_IV_BITS63_0(a) cavm_mcsx_gae_tx_slave_fips_iv_bits63_0_t
#define bustype_CAVM_MCSX_GAE_TX_SLAVE_FIPS_IV_BITS63_0(a) CSR_TYPE_RSL
#define basename_CAVM_MCSX_GAE_TX_SLAVE_FIPS_IV_BITS63_0(a) "MCSX_GAE_TX_SLAVE_FIPS_IV_BITS63_0"
#define device_bar_CAVM_MCSX_GAE_TX_SLAVE_FIPS_IV_BITS63_0(a) 0x0 /* PF_BAR0 */
#define busnum_CAVM_MCSX_GAE_TX_SLAVE_FIPS_IV_BITS63_0(a) (a)
#define arguments_CAVM_MCSX_GAE_TX_SLAVE_FIPS_IV_BITS63_0(a) (a),-1,-1,-1

/**
 * Register (RSL) mcs#_gae_tx_slave_fips_iv_bits95_64
 *
 * MCS Gae Tx Slave Fips Iv Bits95 64 Register
 * FIPS IV bits 95-64
 */
union cavm_mcsx_gae_tx_slave_fips_iv_bits95_64
{
    uint64_t u;
    struct cavm_mcsx_gae_tx_slave_fips_iv_bits95_64_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_32_63        : 32;
        uint64_t data                  : 32; /**< [ 31:  0](R/W) FIPS IV bits 95-64. */
#else /* Word 0 - Little Endian */
        uint64_t data                  : 32; /**< [ 31:  0](R/W) FIPS IV bits 95-64. */
        uint64_t reserved_32_63        : 32;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_mcsx_gae_tx_slave_fips_iv_bits95_64_s cn; */
};
typedef union cavm_mcsx_gae_tx_slave_fips_iv_bits95_64 cavm_mcsx_gae_tx_slave_fips_iv_bits95_64_t;

static inline uint64_t CAVM_MCSX_GAE_TX_SLAVE_FIPS_IV_BITS95_64(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_MCSX_GAE_TX_SLAVE_FIPS_IV_BITS95_64(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CNF10KB) && (a<=6))
        return 0x87e0800000c8ll + 0x1000000ll * ((a) & 0x7);
    __cavm_csr_fatal("MCSX_GAE_TX_SLAVE_FIPS_IV_BITS95_64", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_MCSX_GAE_TX_SLAVE_FIPS_IV_BITS95_64(a) cavm_mcsx_gae_tx_slave_fips_iv_bits95_64_t
#define bustype_CAVM_MCSX_GAE_TX_SLAVE_FIPS_IV_BITS95_64(a) CSR_TYPE_RSL
#define basename_CAVM_MCSX_GAE_TX_SLAVE_FIPS_IV_BITS95_64(a) "MCSX_GAE_TX_SLAVE_FIPS_IV_BITS95_64"
#define device_bar_CAVM_MCSX_GAE_TX_SLAVE_FIPS_IV_BITS95_64(a) 0x0 /* PF_BAR0 */
#define busnum_CAVM_MCSX_GAE_TX_SLAVE_FIPS_IV_BITS95_64(a) (a)
#define arguments_CAVM_MCSX_GAE_TX_SLAVE_FIPS_IV_BITS95_64(a) (a),-1,-1,-1

/**
 * Register (RSL) mcs#_gae_tx_slave_fips_mode
 *
 * MCS Gae Tx Slave Fips Mode Register
 * FIPS Mode CSR
 */
union cavm_mcsx_gae_tx_slave_fips_mode
{
    uint64_t u;
    struct cavm_mcsx_gae_tx_slave_fips_mode_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_7_63         : 57;
        uint64_t ecb                   : 1;  /**< [  6:  6](R/W) If set, AES-ECB mode is used */
        uint64_t channel               : 4;  /**< [  5:  2](R/W) Channel to run FIPS on. Default to 8 (dedicated channel for FIPS) */
        uint64_t keylen                : 1;  /**< [  1:  1](R/W) If set, Key length is 256bit. Default to 128bits (0) */
        uint64_t ctr_mode              : 1;  /**< [  0:  0](R/W) If set, GCM ctr is programmed manually. By default (0), ctr will increment
                                                                 automatically (starting from 1) */
#else /* Word 0 - Little Endian */
        uint64_t ctr_mode              : 1;  /**< [  0:  0](R/W) If set, GCM ctr is programmed manually. By default (0), ctr will increment
                                                                 automatically (starting from 1) */
        uint64_t keylen                : 1;  /**< [  1:  1](R/W) If set, Key length is 256bit. Default to 128bits (0) */
        uint64_t channel               : 4;  /**< [  5:  2](R/W) Channel to run FIPS on. Default to 8 (dedicated channel for FIPS) */
        uint64_t ecb                   : 1;  /**< [  6:  6](R/W) If set, AES-ECB mode is used */
        uint64_t reserved_7_63         : 57;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_mcsx_gae_tx_slave_fips_mode_s cn; */
};
typedef union cavm_mcsx_gae_tx_slave_fips_mode cavm_mcsx_gae_tx_slave_fips_mode_t;

static inline uint64_t CAVM_MCSX_GAE_TX_SLAVE_FIPS_MODE(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_MCSX_GAE_TX_SLAVE_FIPS_MODE(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CNF10KB) && (a<=6))
        return 0x87e0800000b8ll + 0x1000000ll * ((a) & 0x7);
    __cavm_csr_fatal("MCSX_GAE_TX_SLAVE_FIPS_MODE", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_MCSX_GAE_TX_SLAVE_FIPS_MODE(a) cavm_mcsx_gae_tx_slave_fips_mode_t
#define bustype_CAVM_MCSX_GAE_TX_SLAVE_FIPS_MODE(a) CSR_TYPE_RSL
#define basename_CAVM_MCSX_GAE_TX_SLAVE_FIPS_MODE(a) "MCSX_GAE_TX_SLAVE_FIPS_MODE"
#define device_bar_CAVM_MCSX_GAE_TX_SLAVE_FIPS_MODE(a) 0x0 /* PF_BAR0 */
#define busnum_CAVM_MCSX_GAE_TX_SLAVE_FIPS_MODE(a) (a)
#define arguments_CAVM_MCSX_GAE_TX_SLAVE_FIPS_MODE(a) (a),-1,-1,-1

/**
 * Register (RSL) mcs#_gae_tx_slave_fips_reset
 *
 * MCS Gae Tx Slave Fips Reset Register
 * FIPS Reset
 */
union cavm_mcsx_gae_tx_slave_fips_reset
{
    uint64_t u;
    struct cavm_mcsx_gae_tx_slave_fips_reset_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_1_63         : 63;
        uint64_t fips_reset            : 1;  /**< [  0:  0](R/W) SW should write this bit before populating any FIPS CSRs for each new multi-
                                                                 block message. This bit is self-cleared after write. */
#else /* Word 0 - Little Endian */
        uint64_t fips_reset            : 1;  /**< [  0:  0](R/W) SW should write this bit before populating any FIPS CSRs for each new multi-
                                                                 block message. This bit is self-cleared after write. */
        uint64_t reserved_1_63         : 63;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_mcsx_gae_tx_slave_fips_reset_s cn; */
};
typedef union cavm_mcsx_gae_tx_slave_fips_reset cavm_mcsx_gae_tx_slave_fips_reset_t;

static inline uint64_t CAVM_MCSX_GAE_TX_SLAVE_FIPS_RESET(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_MCSX_GAE_TX_SLAVE_FIPS_RESET(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CNF10KB) && (a<=6))
        return 0x87e0800000b0ll + 0x1000000ll * ((a) & 0x7);
    __cavm_csr_fatal("MCSX_GAE_TX_SLAVE_FIPS_RESET", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_MCSX_GAE_TX_SLAVE_FIPS_RESET(a) cavm_mcsx_gae_tx_slave_fips_reset_t
#define bustype_CAVM_MCSX_GAE_TX_SLAVE_FIPS_RESET(a) CSR_TYPE_RSL
#define basename_CAVM_MCSX_GAE_TX_SLAVE_FIPS_RESET(a) "MCSX_GAE_TX_SLAVE_FIPS_RESET"
#define device_bar_CAVM_MCSX_GAE_TX_SLAVE_FIPS_RESET(a) 0x0 /* PF_BAR0 */
#define busnum_CAVM_MCSX_GAE_TX_SLAVE_FIPS_RESET(a) (a)
#define arguments_CAVM_MCSX_GAE_TX_SLAVE_FIPS_RESET(a) (a),-1,-1,-1

/**
 * Register (RSL) mcs#_gae_tx_slave_fips_result_block_bits127_64
 *
 * MCS Gae Tx Slave Fips Result Block Bits127 64 Register
 * FIPS Result Block (AAD or Text) bits 127 to 64.  Result is valid only if
 * fips_ctl.block_is_aad == 0.
 */
union cavm_mcsx_gae_tx_slave_fips_result_block_bits127_64
{
    uint64_t u;
    struct cavm_mcsx_gae_tx_slave_fips_result_block_bits127_64_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t data_msb              : 32; /**< [ 63: 32](RO) Result Block[127:96] (AAD or Text). */
        uint64_t data_lsb              : 32; /**< [ 31:  0](RO) Result Block[95:64] (AAD or Text). */
#else /* Word 0 - Little Endian */
        uint64_t data_lsb              : 32; /**< [ 31:  0](RO) Result Block[95:64] (AAD or Text). */
        uint64_t data_msb              : 32; /**< [ 63: 32](RO) Result Block[127:96] (AAD or Text). */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_mcsx_gae_tx_slave_fips_result_block_bits127_64_s cn; */
};
typedef union cavm_mcsx_gae_tx_slave_fips_result_block_bits127_64 cavm_mcsx_gae_tx_slave_fips_result_block_bits127_64_t;

static inline uint64_t CAVM_MCSX_GAE_TX_SLAVE_FIPS_RESULT_BLOCK_BITS127_64(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_MCSX_GAE_TX_SLAVE_FIPS_RESULT_BLOCK_BITS127_64(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CNF10KB) && (a<=6))
        return 0x87e080000128ll + 0x1000000ll * ((a) & 0x7);
    __cavm_csr_fatal("MCSX_GAE_TX_SLAVE_FIPS_RESULT_BLOCK_BITS127_64", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_MCSX_GAE_TX_SLAVE_FIPS_RESULT_BLOCK_BITS127_64(a) cavm_mcsx_gae_tx_slave_fips_result_block_bits127_64_t
#define bustype_CAVM_MCSX_GAE_TX_SLAVE_FIPS_RESULT_BLOCK_BITS127_64(a) CSR_TYPE_RSL
#define basename_CAVM_MCSX_GAE_TX_SLAVE_FIPS_RESULT_BLOCK_BITS127_64(a) "MCSX_GAE_TX_SLAVE_FIPS_RESULT_BLOCK_BITS127_64"
#define device_bar_CAVM_MCSX_GAE_TX_SLAVE_FIPS_RESULT_BLOCK_BITS127_64(a) 0x0 /* PF_BAR0 */
#define busnum_CAVM_MCSX_GAE_TX_SLAVE_FIPS_RESULT_BLOCK_BITS127_64(a) (a)
#define arguments_CAVM_MCSX_GAE_TX_SLAVE_FIPS_RESULT_BLOCK_BITS127_64(a) (a),-1,-1,-1

/**
 * Register (RSL) mcs#_gae_tx_slave_fips_result_block_bits63_0
 *
 * MCS Gae Tx Slave Fips Result Block Bits63 0 Register
 * FIPS Result Block (AAD or Text) bits 63 to 0.  Result is valid only if fips_ctl.block_is_aad == 0.
 */
union cavm_mcsx_gae_tx_slave_fips_result_block_bits63_0
{
    uint64_t u;
    struct cavm_mcsx_gae_tx_slave_fips_result_block_bits63_0_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t data_msb              : 32; /**< [ 63: 32](RO) Result Block[63:32] (AAD or Text). */
        uint64_t data_lsb              : 32; /**< [ 31:  0](RO) Result Block[31:0] (AAD or Text). */
#else /* Word 0 - Little Endian */
        uint64_t data_lsb              : 32; /**< [ 31:  0](RO) Result Block[31:0] (AAD or Text). */
        uint64_t data_msb              : 32; /**< [ 63: 32](RO) Result Block[63:32] (AAD or Text). */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_mcsx_gae_tx_slave_fips_result_block_bits63_0_s cn; */
};
typedef union cavm_mcsx_gae_tx_slave_fips_result_block_bits63_0 cavm_mcsx_gae_tx_slave_fips_result_block_bits63_0_t;

static inline uint64_t CAVM_MCSX_GAE_TX_SLAVE_FIPS_RESULT_BLOCK_BITS63_0(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_MCSX_GAE_TX_SLAVE_FIPS_RESULT_BLOCK_BITS63_0(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CNF10KB) && (a<=6))
        return 0x87e080000130ll + 0x1000000ll * ((a) & 0x7);
    __cavm_csr_fatal("MCSX_GAE_TX_SLAVE_FIPS_RESULT_BLOCK_BITS63_0", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_MCSX_GAE_TX_SLAVE_FIPS_RESULT_BLOCK_BITS63_0(a) cavm_mcsx_gae_tx_slave_fips_result_block_bits63_0_t
#define bustype_CAVM_MCSX_GAE_TX_SLAVE_FIPS_RESULT_BLOCK_BITS63_0(a) CSR_TYPE_RSL
#define basename_CAVM_MCSX_GAE_TX_SLAVE_FIPS_RESULT_BLOCK_BITS63_0(a) "MCSX_GAE_TX_SLAVE_FIPS_RESULT_BLOCK_BITS63_0"
#define device_bar_CAVM_MCSX_GAE_TX_SLAVE_FIPS_RESULT_BLOCK_BITS63_0(a) 0x0 /* PF_BAR0 */
#define busnum_CAVM_MCSX_GAE_TX_SLAVE_FIPS_RESULT_BLOCK_BITS63_0(a) (a)
#define arguments_CAVM_MCSX_GAE_TX_SLAVE_FIPS_RESULT_BLOCK_BITS63_0(a) (a),-1,-1,-1

/**
 * Register (RSL) mcs#_gae_tx_slave_fips_result_icv_bits127_64
 *
 * MCS Gae Tx Slave Fips Result Icv Bits127 64 Register
 * FIPS Result ICV bits 127 to 64.  Only for egress (encryption).  Result is valid only
 * if fips_ctl.len_round == 1.
 */
union cavm_mcsx_gae_tx_slave_fips_result_icv_bits127_64
{
    uint64_t u;
    struct cavm_mcsx_gae_tx_slave_fips_result_icv_bits127_64_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t data_msb              : 32; /**< [ 63: 32](RO) Result ICV[127:96] */
        uint64_t data_lsb              : 32; /**< [ 31:  0](RO) Result ICV[95:64] */
#else /* Word 0 - Little Endian */
        uint64_t data_lsb              : 32; /**< [ 31:  0](RO) Result ICV[95:64] */
        uint64_t data_msb              : 32; /**< [ 63: 32](RO) Result ICV[127:96] */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_mcsx_gae_tx_slave_fips_result_icv_bits127_64_s cn; */
};
typedef union cavm_mcsx_gae_tx_slave_fips_result_icv_bits127_64 cavm_mcsx_gae_tx_slave_fips_result_icv_bits127_64_t;

static inline uint64_t CAVM_MCSX_GAE_TX_SLAVE_FIPS_RESULT_ICV_BITS127_64(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_MCSX_GAE_TX_SLAVE_FIPS_RESULT_ICV_BITS127_64(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CNF10KB) && (a<=6))
        return 0x87e080000140ll + 0x1000000ll * ((a) & 0x7);
    __cavm_csr_fatal("MCSX_GAE_TX_SLAVE_FIPS_RESULT_ICV_BITS127_64", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_MCSX_GAE_TX_SLAVE_FIPS_RESULT_ICV_BITS127_64(a) cavm_mcsx_gae_tx_slave_fips_result_icv_bits127_64_t
#define bustype_CAVM_MCSX_GAE_TX_SLAVE_FIPS_RESULT_ICV_BITS127_64(a) CSR_TYPE_RSL
#define basename_CAVM_MCSX_GAE_TX_SLAVE_FIPS_RESULT_ICV_BITS127_64(a) "MCSX_GAE_TX_SLAVE_FIPS_RESULT_ICV_BITS127_64"
#define device_bar_CAVM_MCSX_GAE_TX_SLAVE_FIPS_RESULT_ICV_BITS127_64(a) 0x0 /* PF_BAR0 */
#define busnum_CAVM_MCSX_GAE_TX_SLAVE_FIPS_RESULT_ICV_BITS127_64(a) (a)
#define arguments_CAVM_MCSX_GAE_TX_SLAVE_FIPS_RESULT_ICV_BITS127_64(a) (a),-1,-1,-1

/**
 * Register (RSL) mcs#_gae_tx_slave_fips_result_icv_bits63_0
 *
 * MCS Gae Tx Slave Fips Result Icv Bits63 0 Register
 * FIPS Result ICV bits 63 to 0.  Only for egress (encryption).  Result is valid only
 * if fips_ctl.len_round == 1.
 */
union cavm_mcsx_gae_tx_slave_fips_result_icv_bits63_0
{
    uint64_t u;
    struct cavm_mcsx_gae_tx_slave_fips_result_icv_bits63_0_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t data_msb              : 32; /**< [ 63: 32](RO) Result ICV[63:32] */
        uint64_t data_lsb              : 32; /**< [ 31:  0](RO) Result ICV[31:0] */
#else /* Word 0 - Little Endian */
        uint64_t data_lsb              : 32; /**< [ 31:  0](RO) Result ICV[31:0] */
        uint64_t data_msb              : 32; /**< [ 63: 32](RO) Result ICV[63:32] */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_mcsx_gae_tx_slave_fips_result_icv_bits63_0_s cn; */
};
typedef union cavm_mcsx_gae_tx_slave_fips_result_icv_bits63_0 cavm_mcsx_gae_tx_slave_fips_result_icv_bits63_0_t;

static inline uint64_t CAVM_MCSX_GAE_TX_SLAVE_FIPS_RESULT_ICV_BITS63_0(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_MCSX_GAE_TX_SLAVE_FIPS_RESULT_ICV_BITS63_0(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CNF10KB) && (a<=6))
        return 0x87e080000148ll + 0x1000000ll * ((a) & 0x7);
    __cavm_csr_fatal("MCSX_GAE_TX_SLAVE_FIPS_RESULT_ICV_BITS63_0", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_MCSX_GAE_TX_SLAVE_FIPS_RESULT_ICV_BITS63_0(a) cavm_mcsx_gae_tx_slave_fips_result_icv_bits63_0_t
#define bustype_CAVM_MCSX_GAE_TX_SLAVE_FIPS_RESULT_ICV_BITS63_0(a) CSR_TYPE_RSL
#define basename_CAVM_MCSX_GAE_TX_SLAVE_FIPS_RESULT_ICV_BITS63_0(a) "MCSX_GAE_TX_SLAVE_FIPS_RESULT_ICV_BITS63_0"
#define device_bar_CAVM_MCSX_GAE_TX_SLAVE_FIPS_RESULT_ICV_BITS63_0(a) 0x0 /* PF_BAR0 */
#define busnum_CAVM_MCSX_GAE_TX_SLAVE_FIPS_RESULT_ICV_BITS63_0(a) (a)
#define arguments_CAVM_MCSX_GAE_TX_SLAVE_FIPS_RESULT_ICV_BITS63_0(a) (a),-1,-1,-1

/**
 * Register (RSL) mcs#_gae_tx_slave_fips_result_pass
 *
 * MCS Gae Tx Slave Fips Result Pass Register
 * FIPS Results Pass
 */
union cavm_mcsx_gae_tx_slave_fips_result_pass
{
    uint64_t u;
    struct cavm_mcsx_gae_tx_slave_fips_result_pass_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_1_63         : 63;
        uint64_t fips_result_pass      : 1;  /**< [  0:  0](RO) Only for ingress (decryption). Set to 1 if generated ICV matches incoming ICV
                                                                 provided through the Input Block CSR. */
#else /* Word 0 - Little Endian */
        uint64_t fips_result_pass      : 1;  /**< [  0:  0](RO) Only for ingress (decryption). Set to 1 if generated ICV matches incoming ICV
                                                                 provided through the Input Block CSR. */
        uint64_t reserved_1_63         : 63;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_mcsx_gae_tx_slave_fips_result_pass_s cn; */
};
typedef union cavm_mcsx_gae_tx_slave_fips_result_pass cavm_mcsx_gae_tx_slave_fips_result_pass_t;

static inline uint64_t CAVM_MCSX_GAE_TX_SLAVE_FIPS_RESULT_PASS(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_MCSX_GAE_TX_SLAVE_FIPS_RESULT_PASS(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CNF10KB) && (a<=6))
        return 0x87e080000138ll + 0x1000000ll * ((a) & 0x7);
    __cavm_csr_fatal("MCSX_GAE_TX_SLAVE_FIPS_RESULT_PASS", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_MCSX_GAE_TX_SLAVE_FIPS_RESULT_PASS(a) cavm_mcsx_gae_tx_slave_fips_result_pass_t
#define bustype_CAVM_MCSX_GAE_TX_SLAVE_FIPS_RESULT_PASS(a) CSR_TYPE_RSL
#define basename_CAVM_MCSX_GAE_TX_SLAVE_FIPS_RESULT_PASS(a) "MCSX_GAE_TX_SLAVE_FIPS_RESULT_PASS"
#define device_bar_CAVM_MCSX_GAE_TX_SLAVE_FIPS_RESULT_PASS(a) 0x0 /* PF_BAR0 */
#define busnum_CAVM_MCSX_GAE_TX_SLAVE_FIPS_RESULT_PASS(a) (a)
#define arguments_CAVM_MCSX_GAE_TX_SLAVE_FIPS_RESULT_PASS(a) (a),-1,-1,-1

/**
 * Register (RSL) mcs#_gae_tx_slave_fips_sak_bits127_64
 *
 * MCS Gae Tx Slave Fips Sak Bits127 64 Register
 * FIPS SAK bits 127 to 64
 */
union cavm_mcsx_gae_tx_slave_fips_sak_bits127_64
{
    uint64_t u;
    struct cavm_mcsx_gae_tx_slave_fips_sak_bits127_64_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t data_msb              : 32; /**< [ 63: 32](R/W) Default SAK[127:96]. */
        uint64_t data_lsb              : 32; /**< [ 31:  0](R/W) Default SAK[95:64]. */
#else /* Word 0 - Little Endian */
        uint64_t data_lsb              : 32; /**< [ 31:  0](R/W) Default SAK[95:64]. */
        uint64_t data_msb              : 32; /**< [ 63: 32](R/W) Default SAK[127:96]. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_mcsx_gae_tx_slave_fips_sak_bits127_64_s cn; */
};
typedef union cavm_mcsx_gae_tx_slave_fips_sak_bits127_64 cavm_mcsx_gae_tx_slave_fips_sak_bits127_64_t;

static inline uint64_t CAVM_MCSX_GAE_TX_SLAVE_FIPS_SAK_BITS127_64(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_MCSX_GAE_TX_SLAVE_FIPS_SAK_BITS127_64(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CNF10KB) && (a<=6))
        return 0x87e0800000f0ll + 0x1000000ll * ((a) & 0x7);
    __cavm_csr_fatal("MCSX_GAE_TX_SLAVE_FIPS_SAK_BITS127_64", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_MCSX_GAE_TX_SLAVE_FIPS_SAK_BITS127_64(a) cavm_mcsx_gae_tx_slave_fips_sak_bits127_64_t
#define bustype_CAVM_MCSX_GAE_TX_SLAVE_FIPS_SAK_BITS127_64(a) CSR_TYPE_RSL
#define basename_CAVM_MCSX_GAE_TX_SLAVE_FIPS_SAK_BITS127_64(a) "MCSX_GAE_TX_SLAVE_FIPS_SAK_BITS127_64"
#define device_bar_CAVM_MCSX_GAE_TX_SLAVE_FIPS_SAK_BITS127_64(a) 0x0 /* PF_BAR0 */
#define busnum_CAVM_MCSX_GAE_TX_SLAVE_FIPS_SAK_BITS127_64(a) (a)
#define arguments_CAVM_MCSX_GAE_TX_SLAVE_FIPS_SAK_BITS127_64(a) (a),-1,-1,-1

/**
 * Register (RSL) mcs#_gae_tx_slave_fips_sak_bits191_128
 *
 * MCS Gae Tx Slave Fips Sak Bits191 128 Register
 * FIPS SAK bits 191 to 128
 */
union cavm_mcsx_gae_tx_slave_fips_sak_bits191_128
{
    uint64_t u;
    struct cavm_mcsx_gae_tx_slave_fips_sak_bits191_128_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t data_msb              : 32; /**< [ 63: 32](R/W) Default SAK[191:160]. */
        uint64_t data_lsb              : 32; /**< [ 31:  0](R/W) Default SAK[159:128]. */
#else /* Word 0 - Little Endian */
        uint64_t data_lsb              : 32; /**< [ 31:  0](R/W) Default SAK[159:128]. */
        uint64_t data_msb              : 32; /**< [ 63: 32](R/W) Default SAK[191:160]. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_mcsx_gae_tx_slave_fips_sak_bits191_128_s cn; */
};
typedef union cavm_mcsx_gae_tx_slave_fips_sak_bits191_128 cavm_mcsx_gae_tx_slave_fips_sak_bits191_128_t;

static inline uint64_t CAVM_MCSX_GAE_TX_SLAVE_FIPS_SAK_BITS191_128(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_MCSX_GAE_TX_SLAVE_FIPS_SAK_BITS191_128(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CNF10KB) && (a<=6))
        return 0x87e0800000e8ll + 0x1000000ll * ((a) & 0x7);
    __cavm_csr_fatal("MCSX_GAE_TX_SLAVE_FIPS_SAK_BITS191_128", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_MCSX_GAE_TX_SLAVE_FIPS_SAK_BITS191_128(a) cavm_mcsx_gae_tx_slave_fips_sak_bits191_128_t
#define bustype_CAVM_MCSX_GAE_TX_SLAVE_FIPS_SAK_BITS191_128(a) CSR_TYPE_RSL
#define basename_CAVM_MCSX_GAE_TX_SLAVE_FIPS_SAK_BITS191_128(a) "MCSX_GAE_TX_SLAVE_FIPS_SAK_BITS191_128"
#define device_bar_CAVM_MCSX_GAE_TX_SLAVE_FIPS_SAK_BITS191_128(a) 0x0 /* PF_BAR0 */
#define busnum_CAVM_MCSX_GAE_TX_SLAVE_FIPS_SAK_BITS191_128(a) (a)
#define arguments_CAVM_MCSX_GAE_TX_SLAVE_FIPS_SAK_BITS191_128(a) (a),-1,-1,-1

/**
 * Register (RSL) mcs#_gae_tx_slave_fips_sak_bits255_192
 *
 * MCS Gae Tx Slave Fips Sak Bits255 192 Register
 * FIPS SAK bits 255 to 192
 */
union cavm_mcsx_gae_tx_slave_fips_sak_bits255_192
{
    uint64_t u;
    struct cavm_mcsx_gae_tx_slave_fips_sak_bits255_192_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t data_msb              : 32; /**< [ 63: 32](R/W) Default SAK[255:224]. */
        uint64_t data_lsb              : 32; /**< [ 31:  0](R/W) Default SAK[223:192]. */
#else /* Word 0 - Little Endian */
        uint64_t data_lsb              : 32; /**< [ 31:  0](R/W) Default SAK[223:192]. */
        uint64_t data_msb              : 32; /**< [ 63: 32](R/W) Default SAK[255:224]. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_mcsx_gae_tx_slave_fips_sak_bits255_192_s cn; */
};
typedef union cavm_mcsx_gae_tx_slave_fips_sak_bits255_192 cavm_mcsx_gae_tx_slave_fips_sak_bits255_192_t;

static inline uint64_t CAVM_MCSX_GAE_TX_SLAVE_FIPS_SAK_BITS255_192(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_MCSX_GAE_TX_SLAVE_FIPS_SAK_BITS255_192(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CNF10KB) && (a<=6))
        return 0x87e0800000e0ll + 0x1000000ll * ((a) & 0x7);
    __cavm_csr_fatal("MCSX_GAE_TX_SLAVE_FIPS_SAK_BITS255_192", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_MCSX_GAE_TX_SLAVE_FIPS_SAK_BITS255_192(a) cavm_mcsx_gae_tx_slave_fips_sak_bits255_192_t
#define bustype_CAVM_MCSX_GAE_TX_SLAVE_FIPS_SAK_BITS255_192(a) CSR_TYPE_RSL
#define basename_CAVM_MCSX_GAE_TX_SLAVE_FIPS_SAK_BITS255_192(a) "MCSX_GAE_TX_SLAVE_FIPS_SAK_BITS255_192"
#define device_bar_CAVM_MCSX_GAE_TX_SLAVE_FIPS_SAK_BITS255_192(a) 0x0 /* PF_BAR0 */
#define busnum_CAVM_MCSX_GAE_TX_SLAVE_FIPS_SAK_BITS255_192(a) (a)
#define arguments_CAVM_MCSX_GAE_TX_SLAVE_FIPS_SAK_BITS255_192(a) (a),-1,-1,-1

/**
 * Register (RSL) mcs#_gae_tx_slave_fips_sak_bits63_0
 *
 * MCS Gae Tx Slave Fips Sak Bits63 0 Register
 * FIPS SAK bits 63 to 0
 */
union cavm_mcsx_gae_tx_slave_fips_sak_bits63_0
{
    uint64_t u;
    struct cavm_mcsx_gae_tx_slave_fips_sak_bits63_0_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t data_msb              : 32; /**< [ 63: 32](R/W) Default SAK[63:32]. */
        uint64_t data_lsb              : 32; /**< [ 31:  0](R/W) Default SAK[31:0]. */
#else /* Word 0 - Little Endian */
        uint64_t data_lsb              : 32; /**< [ 31:  0](R/W) Default SAK[31:0]. */
        uint64_t data_msb              : 32; /**< [ 63: 32](R/W) Default SAK[63:32]. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_mcsx_gae_tx_slave_fips_sak_bits63_0_s cn; */
};
typedef union cavm_mcsx_gae_tx_slave_fips_sak_bits63_0 cavm_mcsx_gae_tx_slave_fips_sak_bits63_0_t;

static inline uint64_t CAVM_MCSX_GAE_TX_SLAVE_FIPS_SAK_BITS63_0(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_MCSX_GAE_TX_SLAVE_FIPS_SAK_BITS63_0(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CNF10KB) && (a<=6))
        return 0x87e0800000f8ll + 0x1000000ll * ((a) & 0x7);
    __cavm_csr_fatal("MCSX_GAE_TX_SLAVE_FIPS_SAK_BITS63_0", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_MCSX_GAE_TX_SLAVE_FIPS_SAK_BITS63_0(a) cavm_mcsx_gae_tx_slave_fips_sak_bits63_0_t
#define bustype_CAVM_MCSX_GAE_TX_SLAVE_FIPS_SAK_BITS63_0(a) CSR_TYPE_RSL
#define basename_CAVM_MCSX_GAE_TX_SLAVE_FIPS_SAK_BITS63_0(a) "MCSX_GAE_TX_SLAVE_FIPS_SAK_BITS63_0"
#define device_bar_CAVM_MCSX_GAE_TX_SLAVE_FIPS_SAK_BITS63_0(a) 0x0 /* PF_BAR0 */
#define busnum_CAVM_MCSX_GAE_TX_SLAVE_FIPS_SAK_BITS63_0(a) (a)
#define arguments_CAVM_MCSX_GAE_TX_SLAVE_FIPS_SAK_BITS63_0(a) (a),-1,-1,-1

/**
 * Register (RSL) mcs#_gae_tx_slave_fips_start
 *
 * MCS Gae Tx Slave Fips Start Register
 * FIPS Start: User sets this bit after all CSRs are populated.  It will trigger FIPS
 * operation to start (using values setup in the CSRs).
 */
union cavm_mcsx_gae_tx_slave_fips_start
{
    uint64_t u;
    struct cavm_mcsx_gae_tx_slave_fips_start_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_1_63         : 63;
        uint64_t fips_start            : 1;  /**< [  0:  0](R/W) When set, it will trigger FIPS operation to start. The bit will be cleared by
                                                                 hardware when results are returned to the FIPS Result CSRs. */
#else /* Word 0 - Little Endian */
        uint64_t fips_start            : 1;  /**< [  0:  0](R/W) When set, it will trigger FIPS operation to start. The bit will be cleared by
                                                                 hardware when results are returned to the FIPS Result CSRs. */
        uint64_t reserved_1_63         : 63;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_mcsx_gae_tx_slave_fips_start_s cn; */
};
typedef union cavm_mcsx_gae_tx_slave_fips_start cavm_mcsx_gae_tx_slave_fips_start_t;

static inline uint64_t CAVM_MCSX_GAE_TX_SLAVE_FIPS_START(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_MCSX_GAE_TX_SLAVE_FIPS_START(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CNF10KB) && (a<=6))
        return 0x87e080000120ll + 0x1000000ll * ((a) & 0x7);
    __cavm_csr_fatal("MCSX_GAE_TX_SLAVE_FIPS_START", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_MCSX_GAE_TX_SLAVE_FIPS_START(a) cavm_mcsx_gae_tx_slave_fips_start_t
#define bustype_CAVM_MCSX_GAE_TX_SLAVE_FIPS_START(a) CSR_TYPE_RSL
#define basename_CAVM_MCSX_GAE_TX_SLAVE_FIPS_START(a) "MCSX_GAE_TX_SLAVE_FIPS_START"
#define device_bar_CAVM_MCSX_GAE_TX_SLAVE_FIPS_START(a) 0x0 /* PF_BAR0 */
#define busnum_CAVM_MCSX_GAE_TX_SLAVE_FIPS_START(a) (a)
#define arguments_CAVM_MCSX_GAE_TX_SLAVE_FIPS_START(a) (a),-1,-1,-1

/**
 * Register (RSL) mcs#_hil_global
 *
 * HIL Global Configurations Register
 */
union cavm_mcsx_hil_global
{
    uint64_t u;
    struct cavm_mcsx_hil_global_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_9_63         : 55;
        uint64_t one_step_ptp_offset   : 7;  /**< [  8:  2](R/W) One step PTP bit offset in first data beat */
        uint64_t en_one_step_ptp_parse : 1;  /**< [  1:  1](R/W) Connect one step ptp logic to TCAM, valid only if EN_TX_TS_HEADER_SKIP is enabled */
        uint64_t en_tx_ts_header_skip  : 1;  /**< [  0:  0](R/W) Enable 8 bytes skip of prepended timestamp. */
#else /* Word 0 - Little Endian */
        uint64_t en_tx_ts_header_skip  : 1;  /**< [  0:  0](R/W) Enable 8 bytes skip of prepended timestamp. */
        uint64_t en_one_step_ptp_parse : 1;  /**< [  1:  1](R/W) Connect one step ptp logic to TCAM, valid only if EN_TX_TS_HEADER_SKIP is enabled */
        uint64_t one_step_ptp_offset   : 7;  /**< [  8:  2](R/W) One step PTP bit offset in first data beat */
        uint64_t reserved_9_63         : 55;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_mcsx_hil_global_s cn; */
};
typedef union cavm_mcsx_hil_global cavm_mcsx_hil_global_t;

static inline uint64_t CAVM_MCSX_HIL_GLOBAL(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_MCSX_HIL_GLOBAL(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CNF10KB) && (a<=6))
        return 0x87e0800a0000ll + 0x1000000ll * ((a) & 0x7);
    __cavm_csr_fatal("MCSX_HIL_GLOBAL", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_MCSX_HIL_GLOBAL(a) cavm_mcsx_hil_global_t
#define bustype_CAVM_MCSX_HIL_GLOBAL(a) CSR_TYPE_RSL
#define basename_CAVM_MCSX_HIL_GLOBAL(a) "MCSX_HIL_GLOBAL"
#define device_bar_CAVM_MCSX_HIL_GLOBAL(a) 0x0 /* PF_BAR0 */
#define busnum_CAVM_MCSX_HIL_GLOBAL(a) (a)
#define arguments_CAVM_MCSX_HIL_GLOBAL(a) (a),-1,-1,-1

/**
 * Register (RSL) mcs#_hil_p2x_bp_test
 *
 * INTERNAL: MCS HIL P2X Backpressure Test Register
 */
union cavm_mcsx_hil_p2x_bp_test
{
    uint64_t u;
    struct cavm_mcsx_hil_p2x_bp_test_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_49_63        : 15;
        uint64_t enable                : 1;  /**< [ 48: 48](R/W) Enable test mode. For diagnostic use only.
                                                                 Internal:
                                                                 Once a bit is set, random backpressure is generated
                                                                 at the corresponding point to allow for more frequent backpressure.
                                                                 \<48\> = Stop popping P2X data from FIFO towards MIL-TX. */
        uint64_t reserved_18_47        : 30;
        uint64_t bp_cfg                : 2;  /**< [ 17: 16](R/W) Backpressure weight. For diagnostic use only.
                                                                 Internal:
                                                                 There are 2 backpressure configuration bits per enable, with the two bits
                                                                 defined as 0x0=100% of the time, 0x1=75% of the time, 0x2=50% of the time,
                                                                 0x3=25% of the time.
                                                                    \<17:16\> = Config 0.

                                                                  When using 0x0, the constant backpressure means the testbench must toggle the
                                                                  corresponding [ENABLE] bit to keep traffic flowing. */
        uint64_t reserved_12_15        : 4;
        uint64_t lfsr_freq             : 12; /**< [ 11:  0](R/W) Test LFSR update frequency in coprocessor-clocks minus one. */
#else /* Word 0 - Little Endian */
        uint64_t lfsr_freq             : 12; /**< [ 11:  0](R/W) Test LFSR update frequency in coprocessor-clocks minus one. */
        uint64_t reserved_12_15        : 4;
        uint64_t bp_cfg                : 2;  /**< [ 17: 16](R/W) Backpressure weight. For diagnostic use only.
                                                                 Internal:
                                                                 There are 2 backpressure configuration bits per enable, with the two bits
                                                                 defined as 0x0=100% of the time, 0x1=75% of the time, 0x2=50% of the time,
                                                                 0x3=25% of the time.
                                                                    \<17:16\> = Config 0.

                                                                  When using 0x0, the constant backpressure means the testbench must toggle the
                                                                  corresponding [ENABLE] bit to keep traffic flowing. */
        uint64_t reserved_18_47        : 30;
        uint64_t enable                : 1;  /**< [ 48: 48](R/W) Enable test mode. For diagnostic use only.
                                                                 Internal:
                                                                 Once a bit is set, random backpressure is generated
                                                                 at the corresponding point to allow for more frequent backpressure.
                                                                 \<48\> = Stop popping P2X data from FIFO towards MIL-TX. */
        uint64_t reserved_49_63        : 15;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_mcsx_hil_p2x_bp_test_s cn; */
};
typedef union cavm_mcsx_hil_p2x_bp_test cavm_mcsx_hil_p2x_bp_test_t;

static inline uint64_t CAVM_MCSX_HIL_P2X_BP_TEST(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_MCSX_HIL_P2X_BP_TEST(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CNF10KB) && (a<=6))
        return 0x87e0800a0020ll + 0x1000000ll * ((a) & 0x7);
    __cavm_csr_fatal("MCSX_HIL_P2X_BP_TEST", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_MCSX_HIL_P2X_BP_TEST(a) cavm_mcsx_hil_p2x_bp_test_t
#define bustype_CAVM_MCSX_HIL_P2X_BP_TEST(a) CSR_TYPE_RSL
#define basename_CAVM_MCSX_HIL_P2X_BP_TEST(a) "MCSX_HIL_P2X_BP_TEST"
#define device_bar_CAVM_MCSX_HIL_P2X_BP_TEST(a) 0x0 /* PF_BAR0 */
#define busnum_CAVM_MCSX_HIL_P2X_BP_TEST(a) (a)
#define arguments_CAVM_MCSX_HIL_P2X_BP_TEST(a) (a),-1,-1,-1

/**
 * Register (RSL) mcs#_hil_rx_gbl_int
 *
 * MCS HIL RX Interrupt Register
 * Contains the different interrupt bits of the MCS HIL RX. All interrupts are handled by MIL.
 */
union cavm_mcsx_hil_rx_gbl_int
{
    uint64_t u;
    struct cavm_mcsx_hil_rx_gbl_int_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_1_63         : 63;
        uint64_t hil_rx_req_fifo_ovf   : 1;  /**< [  0:  0](R/W1C/H) HIL RX REQ FIFO overflow. */
#else /* Word 0 - Little Endian */
        uint64_t hil_rx_req_fifo_ovf   : 1;  /**< [  0:  0](R/W1C/H) HIL RX REQ FIFO overflow. */
        uint64_t reserved_1_63         : 63;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_mcsx_hil_rx_gbl_int_s cn; */
};
typedef union cavm_mcsx_hil_rx_gbl_int cavm_mcsx_hil_rx_gbl_int_t;

static inline uint64_t CAVM_MCSX_HIL_RX_GBL_INT(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_MCSX_HIL_RX_GBL_INT(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CNF10KB) && (a<=6))
        return 0x87e080060068ll + 0x1000000ll * ((a) & 0x7);
    __cavm_csr_fatal("MCSX_HIL_RX_GBL_INT", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_MCSX_HIL_RX_GBL_INT(a) cavm_mcsx_hil_rx_gbl_int_t
#define bustype_CAVM_MCSX_HIL_RX_GBL_INT(a) CSR_TYPE_RSL
#define basename_CAVM_MCSX_HIL_RX_GBL_INT(a) "MCSX_HIL_RX_GBL_INT"
#define device_bar_CAVM_MCSX_HIL_RX_GBL_INT(a) 0x0 /* PF_BAR0 */
#define busnum_CAVM_MCSX_HIL_RX_GBL_INT(a) (a)
#define arguments_CAVM_MCSX_HIL_RX_GBL_INT(a) (a),-1,-1,-1

/**
 * Register (RSL) mcs#_hil_rx_gbl_int_ena_w1c
 *
 * MCS MIL TX Interrupt Enable Clear Register
 * This register clears interrupt enable bits.
 */
union cavm_mcsx_hil_rx_gbl_int_ena_w1c
{
    uint64_t u;
    struct cavm_mcsx_hil_rx_gbl_int_ena_w1c_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_1_63         : 63;
        uint64_t hil_rx_req_fifo_ovf   : 1;  /**< [  0:  0](R/W1C/H) Reads or clears enable for MCS(0..6)_HIL_RX_GBL_INT[HIL_RX_REQ_FIFO_OVF]. */
#else /* Word 0 - Little Endian */
        uint64_t hil_rx_req_fifo_ovf   : 1;  /**< [  0:  0](R/W1C/H) Reads or clears enable for MCS(0..6)_HIL_RX_GBL_INT[HIL_RX_REQ_FIFO_OVF]. */
        uint64_t reserved_1_63         : 63;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_mcsx_hil_rx_gbl_int_ena_w1c_s cn; */
};
typedef union cavm_mcsx_hil_rx_gbl_int_ena_w1c cavm_mcsx_hil_rx_gbl_int_ena_w1c_t;

static inline uint64_t CAVM_MCSX_HIL_RX_GBL_INT_ENA_W1C(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_MCSX_HIL_RX_GBL_INT_ENA_W1C(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CNF10KB) && (a<=6))
        return 0x87e080060078ll + 0x1000000ll * ((a) & 0x7);
    __cavm_csr_fatal("MCSX_HIL_RX_GBL_INT_ENA_W1C", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_MCSX_HIL_RX_GBL_INT_ENA_W1C(a) cavm_mcsx_hil_rx_gbl_int_ena_w1c_t
#define bustype_CAVM_MCSX_HIL_RX_GBL_INT_ENA_W1C(a) CSR_TYPE_RSL
#define basename_CAVM_MCSX_HIL_RX_GBL_INT_ENA_W1C(a) "MCSX_HIL_RX_GBL_INT_ENA_W1C"
#define device_bar_CAVM_MCSX_HIL_RX_GBL_INT_ENA_W1C(a) 0x0 /* PF_BAR0 */
#define busnum_CAVM_MCSX_HIL_RX_GBL_INT_ENA_W1C(a) (a)
#define arguments_CAVM_MCSX_HIL_RX_GBL_INT_ENA_W1C(a) (a),-1,-1,-1

/**
 * Register (RSL) mcs#_hil_rx_gbl_int_ena_w1s
 *
 * MCS MIL TX Interrupt Enable Set Register
 * This register sets interrupt enable bits.
 */
union cavm_mcsx_hil_rx_gbl_int_ena_w1s
{
    uint64_t u;
    struct cavm_mcsx_hil_rx_gbl_int_ena_w1s_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_1_63         : 63;
        uint64_t hil_rx_req_fifo_ovf   : 1;  /**< [  0:  0](R/W1S/H) Reads or sets enable for MCS(0..6)_HIL_RX_GBL_INT[HIL_RX_REQ_FIFO_OVF]. */
#else /* Word 0 - Little Endian */
        uint64_t hil_rx_req_fifo_ovf   : 1;  /**< [  0:  0](R/W1S/H) Reads or sets enable for MCS(0..6)_HIL_RX_GBL_INT[HIL_RX_REQ_FIFO_OVF]. */
        uint64_t reserved_1_63         : 63;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_mcsx_hil_rx_gbl_int_ena_w1s_s cn; */
};
typedef union cavm_mcsx_hil_rx_gbl_int_ena_w1s cavm_mcsx_hil_rx_gbl_int_ena_w1s_t;

static inline uint64_t CAVM_MCSX_HIL_RX_GBL_INT_ENA_W1S(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_MCSX_HIL_RX_GBL_INT_ENA_W1S(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CNF10KB) && (a<=6))
        return 0x87e080060080ll + 0x1000000ll * ((a) & 0x7);
    __cavm_csr_fatal("MCSX_HIL_RX_GBL_INT_ENA_W1S", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_MCSX_HIL_RX_GBL_INT_ENA_W1S(a) cavm_mcsx_hil_rx_gbl_int_ena_w1s_t
#define bustype_CAVM_MCSX_HIL_RX_GBL_INT_ENA_W1S(a) CSR_TYPE_RSL
#define basename_CAVM_MCSX_HIL_RX_GBL_INT_ENA_W1S(a) "MCSX_HIL_RX_GBL_INT_ENA_W1S"
#define device_bar_CAVM_MCSX_HIL_RX_GBL_INT_ENA_W1S(a) 0x0 /* PF_BAR0 */
#define busnum_CAVM_MCSX_HIL_RX_GBL_INT_ENA_W1S(a) (a)
#define arguments_CAVM_MCSX_HIL_RX_GBL_INT_ENA_W1S(a) (a),-1,-1,-1

/**
 * Register (RSL) mcs#_hil_rx_gbl_int_w1s
 *
 * MCS MIL TX Interrupt Set Register
 * This register sets interrupt bits.
 */
union cavm_mcsx_hil_rx_gbl_int_w1s
{
    uint64_t u;
    struct cavm_mcsx_hil_rx_gbl_int_w1s_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_1_63         : 63;
        uint64_t hil_rx_req_fifo_ovf   : 1;  /**< [  0:  0](R/W1S/H) Reads or sets MCS(0..6)_HIL_RX_GBL_INT[HIL_RX_REQ_FIFO_OVF]. */
#else /* Word 0 - Little Endian */
        uint64_t hil_rx_req_fifo_ovf   : 1;  /**< [  0:  0](R/W1S/H) Reads or sets MCS(0..6)_HIL_RX_GBL_INT[HIL_RX_REQ_FIFO_OVF]. */
        uint64_t reserved_1_63         : 63;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_mcsx_hil_rx_gbl_int_w1s_s cn; */
};
typedef union cavm_mcsx_hil_rx_gbl_int_w1s cavm_mcsx_hil_rx_gbl_int_w1s_t;

static inline uint64_t CAVM_MCSX_HIL_RX_GBL_INT_W1S(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_MCSX_HIL_RX_GBL_INT_W1S(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CNF10KB) && (a<=6))
        return 0x87e080060070ll + 0x1000000ll * ((a) & 0x7);
    __cavm_csr_fatal("MCSX_HIL_RX_GBL_INT_W1S", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_MCSX_HIL_RX_GBL_INT_W1S(a) cavm_mcsx_hil_rx_gbl_int_w1s_t
#define bustype_CAVM_MCSX_HIL_RX_GBL_INT_W1S(a) CSR_TYPE_RSL
#define basename_CAVM_MCSX_HIL_RX_GBL_INT_W1S(a) "MCSX_HIL_RX_GBL_INT_W1S"
#define device_bar_CAVM_MCSX_HIL_RX_GBL_INT_W1S(a) 0x0 /* PF_BAR0 */
#define busnum_CAVM_MCSX_HIL_RX_GBL_INT_W1S(a) (a)
#define arguments_CAVM_MCSX_HIL_RX_GBL_INT_W1S(a) (a),-1,-1,-1

/**
 * Register (RSL) mcs#_hil_rx_gbl_status
 *
 * INTERNAL: MCS HIL RX Status Register
 */
union cavm_mcsx_hil_rx_gbl_status
{
    uint64_t u;
    struct cavm_mcsx_hil_rx_gbl_status_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_9_63         : 55;
        uint64_t x2p_req_fifo_cnt      : 9;  /**< [  8:  0](RO/H) HIL RX X2P request FIFO fill level (a single async data FIFO, 64 entries per LMAC). */
#else /* Word 0 - Little Endian */
        uint64_t x2p_req_fifo_cnt      : 9;  /**< [  8:  0](RO/H) HIL RX X2P request FIFO fill level (a single async data FIFO, 64 entries per LMAC). */
        uint64_t reserved_9_63         : 55;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_mcsx_hil_rx_gbl_status_s cn; */
};
typedef union cavm_mcsx_hil_rx_gbl_status cavm_mcsx_hil_rx_gbl_status_t;

static inline uint64_t CAVM_MCSX_HIL_RX_GBL_STATUS(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_MCSX_HIL_RX_GBL_STATUS(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CNF10KB) && (a<=6))
        return 0x87e0800a0028ll + 0x1000000ll * ((a) & 0x7);
    __cavm_csr_fatal("MCSX_HIL_RX_GBL_STATUS", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_MCSX_HIL_RX_GBL_STATUS(a) cavm_mcsx_hil_rx_gbl_status_t
#define bustype_CAVM_MCSX_HIL_RX_GBL_STATUS(a) CSR_TYPE_RSL
#define basename_CAVM_MCSX_HIL_RX_GBL_STATUS(a) "MCSX_HIL_RX_GBL_STATUS"
#define device_bar_CAVM_MCSX_HIL_RX_GBL_STATUS(a) 0x0 /* PF_BAR0 */
#define busnum_CAVM_MCSX_HIL_RX_GBL_STATUS(a) (a)
#define arguments_CAVM_MCSX_HIL_RX_GBL_STATUS(a) (a),-1,-1,-1

/**
 * Register (RSL) mcs#_hil_rx_grnt_lmac#_bp_test
 *
 * INTERNAL: MCS HIL RX Per LMAC Backpressure Test Register
 *
 * Applicable for bypass mode only.
 */
union cavm_mcsx_hil_rx_grnt_lmacx_bp_test
{
    uint64_t u;
    struct cavm_mcsx_hil_rx_grnt_lmacx_bp_test_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_49_63        : 15;
        uint64_t enable                : 1;  /**< [ 48: 48](R/W) Enable test mode. For diagnostic use only.
                                                                 Internal:
                                                                 Once a bit is set, random backpressure is generated
                                                                 at the corresponding point to allow for more frequent backpressure.
                                                                 \<48\> = On bypass,Stop granting X2P requests to MIL-RX. */
        uint64_t reserved_18_47        : 30;
        uint64_t bp_cfg                : 2;  /**< [ 17: 16](R/W) Backpressure weight. For diagnostic use only.
                                                                 Internal:
                                                                 There are 2 backpressure configuration bits per enable, with the two bits
                                                                 defined as 0x0=100% of the time, 0x1=75% of the time, 0x2=50% of the time,
                                                                 0x3=25% of the time.
                                                                    \<17:16\> = Config 0.

                                                                  When using 0x0, the constant backpressure means the testbench must toggle the
                                                                  corresponding [ENABLE] bit to keep traffic flowing. */
        uint64_t reserved_12_15        : 4;
        uint64_t lfsr_freq             : 12; /**< [ 11:  0](R/W) Test LFSR update frequency in coprocessor-clocks minus one. */
#else /* Word 0 - Little Endian */
        uint64_t lfsr_freq             : 12; /**< [ 11:  0](R/W) Test LFSR update frequency in coprocessor-clocks minus one. */
        uint64_t reserved_12_15        : 4;
        uint64_t bp_cfg                : 2;  /**< [ 17: 16](R/W) Backpressure weight. For diagnostic use only.
                                                                 Internal:
                                                                 There are 2 backpressure configuration bits per enable, with the two bits
                                                                 defined as 0x0=100% of the time, 0x1=75% of the time, 0x2=50% of the time,
                                                                 0x3=25% of the time.
                                                                    \<17:16\> = Config 0.

                                                                  When using 0x0, the constant backpressure means the testbench must toggle the
                                                                  corresponding [ENABLE] bit to keep traffic flowing. */
        uint64_t reserved_18_47        : 30;
        uint64_t enable                : 1;  /**< [ 48: 48](R/W) Enable test mode. For diagnostic use only.
                                                                 Internal:
                                                                 Once a bit is set, random backpressure is generated
                                                                 at the corresponding point to allow for more frequent backpressure.
                                                                 \<48\> = On bypass,Stop granting X2P requests to MIL-RX. */
        uint64_t reserved_49_63        : 15;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_mcsx_hil_rx_grnt_lmacx_bp_test_s cn; */
};
typedef union cavm_mcsx_hil_rx_grnt_lmacx_bp_test cavm_mcsx_hil_rx_grnt_lmacx_bp_test_t;

static inline uint64_t CAVM_MCSX_HIL_RX_GRNT_LMACX_BP_TEST(uint64_t a, uint64_t b) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_MCSX_HIL_RX_GRNT_LMACX_BP_TEST(uint64_t a, uint64_t b)
{
    if (cavm_is_model(OCTEONTX_CNF10KB) && ((a<=6) && (b<=3)))
        return 0x87e0800b0010ll + 0x1000000ll * ((a) & 0x7) + 0x800ll * ((b) & 0x3);
    __cavm_csr_fatal("MCSX_HIL_RX_GRNT_LMACX_BP_TEST", 2, a, b, 0, 0, 0, 0);
}

#define typedef_CAVM_MCSX_HIL_RX_GRNT_LMACX_BP_TEST(a,b) cavm_mcsx_hil_rx_grnt_lmacx_bp_test_t
#define bustype_CAVM_MCSX_HIL_RX_GRNT_LMACX_BP_TEST(a,b) CSR_TYPE_RSL
#define basename_CAVM_MCSX_HIL_RX_GRNT_LMACX_BP_TEST(a,b) "MCSX_HIL_RX_GRNT_LMACX_BP_TEST"
#define device_bar_CAVM_MCSX_HIL_RX_GRNT_LMACX_BP_TEST(a,b) 0x0 /* PF_BAR0 */
#define busnum_CAVM_MCSX_HIL_RX_GRNT_LMACX_BP_TEST(a,b) (a)
#define arguments_CAVM_MCSX_HIL_RX_GRNT_LMACX_BP_TEST(a,b) (a),(b),-1,-1

/**
 * Register (RSL) mcs#_hil_rx_lmac#_int
 *
 * MCS HIL RX Per LMAC Interrupt Register
 * Contains the different interrupt bits of the MCS RX HIL.
 */
union cavm_mcsx_hil_rx_lmacx_int
{
    uint64_t u;
    struct cavm_mcsx_hil_rx_lmacx_int_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_3_63         : 61;
        uint64_t hil_rx_gnt_fifo_ovf   : 1;  /**< [  2:  2](R/W1C/H) HIL RX GNT FIFO overflow. */
        uint64_t hil_rx_skid_fifo_unf  : 1;  /**< [  1:  1](R/W1C/H) HIL RX SKID FIFO underflow. */
        uint64_t hil_rx_skid_fifo_ovf  : 1;  /**< [  0:  0](R/W1C/H) HIL RX SKID FIFO overflow. */
#else /* Word 0 - Little Endian */
        uint64_t hil_rx_skid_fifo_ovf  : 1;  /**< [  0:  0](R/W1C/H) HIL RX SKID FIFO overflow. */
        uint64_t hil_rx_skid_fifo_unf  : 1;  /**< [  1:  1](R/W1C/H) HIL RX SKID FIFO underflow. */
        uint64_t hil_rx_gnt_fifo_ovf   : 1;  /**< [  2:  2](R/W1C/H) HIL RX GNT FIFO overflow. */
        uint64_t reserved_3_63         : 61;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_mcsx_hil_rx_lmacx_int_s cn; */
};
typedef union cavm_mcsx_hil_rx_lmacx_int cavm_mcsx_hil_rx_lmacx_int_t;

static inline uint64_t CAVM_MCSX_HIL_RX_LMACX_INT(uint64_t a, uint64_t b) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_MCSX_HIL_RX_LMACX_INT(uint64_t a, uint64_t b)
{
    if (cavm_is_model(OCTEONTX_CNF10KB) && ((a<=6) && (b<=3)))
        return 0x87e080070048ll + 0x1000000ll * ((a) & 0x7) + 0x800ll * ((b) & 0x3);
    __cavm_csr_fatal("MCSX_HIL_RX_LMACX_INT", 2, a, b, 0, 0, 0, 0);
}

#define typedef_CAVM_MCSX_HIL_RX_LMACX_INT(a,b) cavm_mcsx_hil_rx_lmacx_int_t
#define bustype_CAVM_MCSX_HIL_RX_LMACX_INT(a,b) CSR_TYPE_RSL
#define basename_CAVM_MCSX_HIL_RX_LMACX_INT(a,b) "MCSX_HIL_RX_LMACX_INT"
#define device_bar_CAVM_MCSX_HIL_RX_LMACX_INT(a,b) 0x0 /* PF_BAR0 */
#define busnum_CAVM_MCSX_HIL_RX_LMACX_INT(a,b) (a)
#define arguments_CAVM_MCSX_HIL_RX_LMACX_INT(a,b) (a),(b),-1,-1

/**
 * Register (RSL) mcs#_hil_rx_lmac#_int_ena_w1c
 *
 * MCS HIL RX Interrupt Enable Clear Register
 * This register clears interrupt enable bits.
 */
union cavm_mcsx_hil_rx_lmacx_int_ena_w1c
{
    uint64_t u;
    struct cavm_mcsx_hil_rx_lmacx_int_ena_w1c_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_3_63         : 61;
        uint64_t hil_rx_gnt_fifo_ovf   : 1;  /**< [  2:  2](R/W1C/H) Reads or clears enable for MCS(0..6)_HIL_RX_LMAC(0..3)_INT[HIL_RX_GNT_FIFO_OVF]. */
        uint64_t hil_rx_skid_fifo_unf  : 1;  /**< [  1:  1](R/W1C/H) Reads or clears enable for MCS(0..6)_HIL_RX_LMAC(0..3)_INT[HIL_RX_SKID_FIFO_UNF]. */
        uint64_t hil_rx_skid_fifo_ovf  : 1;  /**< [  0:  0](R/W1C/H) Reads or clears enable for MCS(0..6)_HIL_RX_LMAC(0..3)_INT[HIL_RX_SKID_FIFO_OVF]. */
#else /* Word 0 - Little Endian */
        uint64_t hil_rx_skid_fifo_ovf  : 1;  /**< [  0:  0](R/W1C/H) Reads or clears enable for MCS(0..6)_HIL_RX_LMAC(0..3)_INT[HIL_RX_SKID_FIFO_OVF]. */
        uint64_t hil_rx_skid_fifo_unf  : 1;  /**< [  1:  1](R/W1C/H) Reads or clears enable for MCS(0..6)_HIL_RX_LMAC(0..3)_INT[HIL_RX_SKID_FIFO_UNF]. */
        uint64_t hil_rx_gnt_fifo_ovf   : 1;  /**< [  2:  2](R/W1C/H) Reads or clears enable for MCS(0..6)_HIL_RX_LMAC(0..3)_INT[HIL_RX_GNT_FIFO_OVF]. */
        uint64_t reserved_3_63         : 61;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_mcsx_hil_rx_lmacx_int_ena_w1c_s cn; */
};
typedef union cavm_mcsx_hil_rx_lmacx_int_ena_w1c cavm_mcsx_hil_rx_lmacx_int_ena_w1c_t;

static inline uint64_t CAVM_MCSX_HIL_RX_LMACX_INT_ENA_W1C(uint64_t a, uint64_t b) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_MCSX_HIL_RX_LMACX_INT_ENA_W1C(uint64_t a, uint64_t b)
{
    if (cavm_is_model(OCTEONTX_CNF10KB) && ((a<=6) && (b<=3)))
        return 0x87e080070058ll + 0x1000000ll * ((a) & 0x7) + 0x800ll * ((b) & 0x3);
    __cavm_csr_fatal("MCSX_HIL_RX_LMACX_INT_ENA_W1C", 2, a, b, 0, 0, 0, 0);
}

#define typedef_CAVM_MCSX_HIL_RX_LMACX_INT_ENA_W1C(a,b) cavm_mcsx_hil_rx_lmacx_int_ena_w1c_t
#define bustype_CAVM_MCSX_HIL_RX_LMACX_INT_ENA_W1C(a,b) CSR_TYPE_RSL
#define basename_CAVM_MCSX_HIL_RX_LMACX_INT_ENA_W1C(a,b) "MCSX_HIL_RX_LMACX_INT_ENA_W1C"
#define device_bar_CAVM_MCSX_HIL_RX_LMACX_INT_ENA_W1C(a,b) 0x0 /* PF_BAR0 */
#define busnum_CAVM_MCSX_HIL_RX_LMACX_INT_ENA_W1C(a,b) (a)
#define arguments_CAVM_MCSX_HIL_RX_LMACX_INT_ENA_W1C(a,b) (a),(b),-1,-1

/**
 * Register (RSL) mcs#_hil_rx_lmac#_int_ena_w1s
 *
 * MCS HIL RX Interrupt Enable Set Register
 * This register sets interrupt enable bits.
 */
union cavm_mcsx_hil_rx_lmacx_int_ena_w1s
{
    uint64_t u;
    struct cavm_mcsx_hil_rx_lmacx_int_ena_w1s_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_3_63         : 61;
        uint64_t hil_rx_gnt_fifo_ovf   : 1;  /**< [  2:  2](R/W1S/H) Reads or sets enable for MCS(0..6)_HIL_RX_LMAC(0..3)_INT[HIL_RX_GNT_FIFO_OVF]. */
        uint64_t hil_rx_skid_fifo_unf  : 1;  /**< [  1:  1](R/W1S/H) Reads or sets enable for MCS(0..6)_HIL_RX_LMAC(0..3)_INT[HIL_RX_SKID_FIFO_UNF]. */
        uint64_t hil_rx_skid_fifo_ovf  : 1;  /**< [  0:  0](R/W1S/H) Reads or sets enable for MCS(0..6)_HIL_RX_LMAC(0..3)_INT[HIL_RX_SKID_FIFO_OVF]. */
#else /* Word 0 - Little Endian */
        uint64_t hil_rx_skid_fifo_ovf  : 1;  /**< [  0:  0](R/W1S/H) Reads or sets enable for MCS(0..6)_HIL_RX_LMAC(0..3)_INT[HIL_RX_SKID_FIFO_OVF]. */
        uint64_t hil_rx_skid_fifo_unf  : 1;  /**< [  1:  1](R/W1S/H) Reads or sets enable for MCS(0..6)_HIL_RX_LMAC(0..3)_INT[HIL_RX_SKID_FIFO_UNF]. */
        uint64_t hil_rx_gnt_fifo_ovf   : 1;  /**< [  2:  2](R/W1S/H) Reads or sets enable for MCS(0..6)_HIL_RX_LMAC(0..3)_INT[HIL_RX_GNT_FIFO_OVF]. */
        uint64_t reserved_3_63         : 61;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_mcsx_hil_rx_lmacx_int_ena_w1s_s cn; */
};
typedef union cavm_mcsx_hil_rx_lmacx_int_ena_w1s cavm_mcsx_hil_rx_lmacx_int_ena_w1s_t;

static inline uint64_t CAVM_MCSX_HIL_RX_LMACX_INT_ENA_W1S(uint64_t a, uint64_t b) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_MCSX_HIL_RX_LMACX_INT_ENA_W1S(uint64_t a, uint64_t b)
{
    if (cavm_is_model(OCTEONTX_CNF10KB) && ((a<=6) && (b<=3)))
        return 0x87e080070060ll + 0x1000000ll * ((a) & 0x7) + 0x800ll * ((b) & 0x3);
    __cavm_csr_fatal("MCSX_HIL_RX_LMACX_INT_ENA_W1S", 2, a, b, 0, 0, 0, 0);
}

#define typedef_CAVM_MCSX_HIL_RX_LMACX_INT_ENA_W1S(a,b) cavm_mcsx_hil_rx_lmacx_int_ena_w1s_t
#define bustype_CAVM_MCSX_HIL_RX_LMACX_INT_ENA_W1S(a,b) CSR_TYPE_RSL
#define basename_CAVM_MCSX_HIL_RX_LMACX_INT_ENA_W1S(a,b) "MCSX_HIL_RX_LMACX_INT_ENA_W1S"
#define device_bar_CAVM_MCSX_HIL_RX_LMACX_INT_ENA_W1S(a,b) 0x0 /* PF_BAR0 */
#define busnum_CAVM_MCSX_HIL_RX_LMACX_INT_ENA_W1S(a,b) (a)
#define arguments_CAVM_MCSX_HIL_RX_LMACX_INT_ENA_W1S(a,b) (a),(b),-1,-1

/**
 * Register (RSL) mcs#_hil_rx_lmac#_int_w1s
 *
 * MCS HIL RX Interrupt Set Register
 * This register sets interrupt bits.
 */
union cavm_mcsx_hil_rx_lmacx_int_w1s
{
    uint64_t u;
    struct cavm_mcsx_hil_rx_lmacx_int_w1s_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_3_63         : 61;
        uint64_t hil_rx_gnt_fifo_ovf   : 1;  /**< [  2:  2](R/W1S/H) Reads or sets MCS(0..6)_HIL_RX_LMAC(0..3)_INT[HIL_RX_GNT_FIFO_OVF]. */
        uint64_t hil_rx_skid_fifo_unf  : 1;  /**< [  1:  1](R/W1S/H) Reads or sets MCS(0..6)_HIL_RX_LMAC(0..3)_INT[HIL_RX_SKID_FIFO_UNF]. */
        uint64_t hil_rx_skid_fifo_ovf  : 1;  /**< [  0:  0](R/W1S/H) Reads or sets MCS(0..6)_HIL_RX_LMAC(0..3)_INT[HIL_RX_SKID_FIFO_OVF]. */
#else /* Word 0 - Little Endian */
        uint64_t hil_rx_skid_fifo_ovf  : 1;  /**< [  0:  0](R/W1S/H) Reads or sets MCS(0..6)_HIL_RX_LMAC(0..3)_INT[HIL_RX_SKID_FIFO_OVF]. */
        uint64_t hil_rx_skid_fifo_unf  : 1;  /**< [  1:  1](R/W1S/H) Reads or sets MCS(0..6)_HIL_RX_LMAC(0..3)_INT[HIL_RX_SKID_FIFO_UNF]. */
        uint64_t hil_rx_gnt_fifo_ovf   : 1;  /**< [  2:  2](R/W1S/H) Reads or sets MCS(0..6)_HIL_RX_LMAC(0..3)_INT[HIL_RX_GNT_FIFO_OVF]. */
        uint64_t reserved_3_63         : 61;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_mcsx_hil_rx_lmacx_int_w1s_s cn; */
};
typedef union cavm_mcsx_hil_rx_lmacx_int_w1s cavm_mcsx_hil_rx_lmacx_int_w1s_t;

static inline uint64_t CAVM_MCSX_HIL_RX_LMACX_INT_W1S(uint64_t a, uint64_t b) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_MCSX_HIL_RX_LMACX_INT_W1S(uint64_t a, uint64_t b)
{
    if (cavm_is_model(OCTEONTX_CNF10KB) && ((a<=6) && (b<=3)))
        return 0x87e080070050ll + 0x1000000ll * ((a) & 0x7) + 0x800ll * ((b) & 0x3);
    __cavm_csr_fatal("MCSX_HIL_RX_LMACX_INT_W1S", 2, a, b, 0, 0, 0, 0);
}

#define typedef_CAVM_MCSX_HIL_RX_LMACX_INT_W1S(a,b) cavm_mcsx_hil_rx_lmacx_int_w1s_t
#define bustype_CAVM_MCSX_HIL_RX_LMACX_INT_W1S(a,b) CSR_TYPE_RSL
#define basename_CAVM_MCSX_HIL_RX_LMACX_INT_W1S(a,b) "MCSX_HIL_RX_LMACX_INT_W1S"
#define device_bar_CAVM_MCSX_HIL_RX_LMACX_INT_W1S(a,b) 0x0 /* PF_BAR0 */
#define busnum_CAVM_MCSX_HIL_RX_LMACX_INT_W1S(a,b) (a)
#define arguments_CAVM_MCSX_HIL_RX_LMACX_INT_W1S(a,b) (a),(b),-1,-1

/**
 * Register (RSL) mcs#_hil_rx_lmac#_skid_thresh
 *
 * INTERNAL: MCS HIL Per LMAC RX SKID Thresh Configuration Register
 */
union cavm_mcsx_hil_rx_lmacx_skid_thresh
{
    uint64_t u;
    struct cavm_mcsx_hil_rx_lmacx_skid_thresh_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_7_63         : 57;
        uint64_t rx_skid_full_thresh   : 7;  /**< [  6:  0](R/W) HIL RX SKID FIFO full threshold (Based on x2p2_p2x2_defs::X2P2_SKID_CREDIT) */
#else /* Word 0 - Little Endian */
        uint64_t rx_skid_full_thresh   : 7;  /**< [  6:  0](R/W) HIL RX SKID FIFO full threshold (Based on x2p2_p2x2_defs::X2P2_SKID_CREDIT) */
        uint64_t reserved_7_63         : 57;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_mcsx_hil_rx_lmacx_skid_thresh_s cn; */
};
typedef union cavm_mcsx_hil_rx_lmacx_skid_thresh cavm_mcsx_hil_rx_lmacx_skid_thresh_t;

static inline uint64_t CAVM_MCSX_HIL_RX_LMACX_SKID_THRESH(uint64_t a, uint64_t b) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_MCSX_HIL_RX_LMACX_SKID_THRESH(uint64_t a, uint64_t b)
{
    if (cavm_is_model(OCTEONTX_CNF10KB) && ((a<=6) && (b<=3)))
        return 0x87e0800b0000ll + 0x1000000ll * ((a) & 0x7) + 0x800ll * ((b) & 0x3);
    __cavm_csr_fatal("MCSX_HIL_RX_LMACX_SKID_THRESH", 2, a, b, 0, 0, 0, 0);
}

#define typedef_CAVM_MCSX_HIL_RX_LMACX_SKID_THRESH(a,b) cavm_mcsx_hil_rx_lmacx_skid_thresh_t
#define bustype_CAVM_MCSX_HIL_RX_LMACX_SKID_THRESH(a,b) CSR_TYPE_RSL
#define basename_CAVM_MCSX_HIL_RX_LMACX_SKID_THRESH(a,b) "MCSX_HIL_RX_LMACX_SKID_THRESH"
#define device_bar_CAVM_MCSX_HIL_RX_LMACX_SKID_THRESH(a,b) 0x0 /* PF_BAR0 */
#define busnum_CAVM_MCSX_HIL_RX_LMACX_SKID_THRESH(a,b) (a)
#define arguments_CAVM_MCSX_HIL_RX_LMACX_SKID_THRESH(a,b) (a),(b),-1,-1

/**
 * Register (RSL) mcs#_hil_rx_lmac#_status
 *
 * INTERNAL: MCS HIL RX Status Register
 */
union cavm_mcsx_hil_rx_lmacx_status
{
    uint64_t u;
    struct cavm_mcsx_hil_rx_lmacx_status_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_15_63        : 49;
        uint64_t skid_data_fifo_cnt    : 7;  /**< [ 14:  8](RO/H) HIL RX SKID data FIFO fill level. */
        uint64_t pab_bp                : 1;  /**< [  7:  7](RO/H) RX PAB back pressure status. */
        uint64_t x2p_gnt_fifo_cnt      : 7;  /**< [  6:  0](RO/H) HIL RX X2P grant FIFO fill level, used only in External bypass mode. */
#else /* Word 0 - Little Endian */
        uint64_t x2p_gnt_fifo_cnt      : 7;  /**< [  6:  0](RO/H) HIL RX X2P grant FIFO fill level, used only in External bypass mode. */
        uint64_t pab_bp                : 1;  /**< [  7:  7](RO/H) RX PAB back pressure status. */
        uint64_t skid_data_fifo_cnt    : 7;  /**< [ 14:  8](RO/H) HIL RX SKID data FIFO fill level. */
        uint64_t reserved_15_63        : 49;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_mcsx_hil_rx_lmacx_status_s cn; */
};
typedef union cavm_mcsx_hil_rx_lmacx_status cavm_mcsx_hil_rx_lmacx_status_t;

static inline uint64_t CAVM_MCSX_HIL_RX_LMACX_STATUS(uint64_t a, uint64_t b) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_MCSX_HIL_RX_LMACX_STATUS(uint64_t a, uint64_t b)
{
    if (cavm_is_model(OCTEONTX_CNF10KB) && ((a<=6) && (b<=3)))
        return 0x87e0800b0018ll + 0x1000000ll * ((a) & 0x7) + 0x800ll * ((b) & 0x3);
    __cavm_csr_fatal("MCSX_HIL_RX_LMACX_STATUS", 2, a, b, 0, 0, 0, 0);
}

#define typedef_CAVM_MCSX_HIL_RX_LMACX_STATUS(a,b) cavm_mcsx_hil_rx_lmacx_status_t
#define bustype_CAVM_MCSX_HIL_RX_LMACX_STATUS(a,b) CSR_TYPE_RSL
#define basename_CAVM_MCSX_HIL_RX_LMACX_STATUS(a,b) "MCSX_HIL_RX_LMACX_STATUS"
#define device_bar_CAVM_MCSX_HIL_RX_LMACX_STATUS(a,b) 0x0 /* PF_BAR0 */
#define busnum_CAVM_MCSX_HIL_RX_LMACX_STATUS(a,b) (a)
#define arguments_CAVM_MCSX_HIL_RX_LMACX_STATUS(a,b) (a),(b),-1,-1

/**
 * Register (RSL) mcs#_hil_rx_pab_lmac#_bp_test
 *
 * INTERNAL: MCS HIL RX Backpressure Test Register
 */
union cavm_mcsx_hil_rx_pab_lmacx_bp_test
{
    uint64_t u;
    struct cavm_mcsx_hil_rx_pab_lmacx_bp_test_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_49_63        : 15;
        uint64_t enable                : 1;  /**< [ 48: 48](R/W) Enable test mode. For diagnostic use only.
                                                                 Internal:
                                                                 Once a bit is set, random backpressure is generated
                                                                 at the corresponding point to allow for more frequent backpressure.
                                                                 \<48\> = Set back-pressure from HIL-RX towards PAB. Valid only in non-bypass mode. */
        uint64_t reserved_18_47        : 30;
        uint64_t bp_cfg                : 2;  /**< [ 17: 16](R/W) Backpressure weight. For diagnostic use only.
                                                                 Internal:
                                                                 There are 2 backpressure configuration bits per enable, with the two bits
                                                                 defined as 0x0=100% of the time, 0x1=75% of the time, 0x2=50% of the time,
                                                                 0x3=25% of the time.
                                                                    \<17:16\> = Config 0.

                                                                  When using 0x0, the constant backpressure means the testbench must toggle the
                                                                  corresponding [ENABLE] bit to keep traffic flowing. */
        uint64_t reserved_12_15        : 4;
        uint64_t lfsr_freq             : 12; /**< [ 11:  0](R/W) Test LFSR update frequency in coprocessor-clocks minus one. */
#else /* Word 0 - Little Endian */
        uint64_t lfsr_freq             : 12; /**< [ 11:  0](R/W) Test LFSR update frequency in coprocessor-clocks minus one. */
        uint64_t reserved_12_15        : 4;
        uint64_t bp_cfg                : 2;  /**< [ 17: 16](R/W) Backpressure weight. For diagnostic use only.
                                                                 Internal:
                                                                 There are 2 backpressure configuration bits per enable, with the two bits
                                                                 defined as 0x0=100% of the time, 0x1=75% of the time, 0x2=50% of the time,
                                                                 0x3=25% of the time.
                                                                    \<17:16\> = Config 0.

                                                                  When using 0x0, the constant backpressure means the testbench must toggle the
                                                                  corresponding [ENABLE] bit to keep traffic flowing. */
        uint64_t reserved_18_47        : 30;
        uint64_t enable                : 1;  /**< [ 48: 48](R/W) Enable test mode. For diagnostic use only.
                                                                 Internal:
                                                                 Once a bit is set, random backpressure is generated
                                                                 at the corresponding point to allow for more frequent backpressure.
                                                                 \<48\> = Set back-pressure from HIL-RX towards PAB. Valid only in non-bypass mode. */
        uint64_t reserved_49_63        : 15;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_mcsx_hil_rx_pab_lmacx_bp_test_s cn; */
};
typedef union cavm_mcsx_hil_rx_pab_lmacx_bp_test cavm_mcsx_hil_rx_pab_lmacx_bp_test_t;

static inline uint64_t CAVM_MCSX_HIL_RX_PAB_LMACX_BP_TEST(uint64_t a, uint64_t b) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_MCSX_HIL_RX_PAB_LMACX_BP_TEST(uint64_t a, uint64_t b)
{
    if (cavm_is_model(OCTEONTX_CNF10KB) && ((a<=6) && (b<=3)))
        return 0x87e0800b0008ll + 0x1000000ll * ((a) & 0x7) + 0x800ll * ((b) & 0x3);
    __cavm_csr_fatal("MCSX_HIL_RX_PAB_LMACX_BP_TEST", 2, a, b, 0, 0, 0, 0);
}

#define typedef_CAVM_MCSX_HIL_RX_PAB_LMACX_BP_TEST(a,b) cavm_mcsx_hil_rx_pab_lmacx_bp_test_t
#define bustype_CAVM_MCSX_HIL_RX_PAB_LMACX_BP_TEST(a,b) CSR_TYPE_RSL
#define basename_CAVM_MCSX_HIL_RX_PAB_LMACX_BP_TEST(a,b) "MCSX_HIL_RX_PAB_LMACX_BP_TEST"
#define device_bar_CAVM_MCSX_HIL_RX_PAB_LMACX_BP_TEST(a,b) 0x0 /* PF_BAR0 */
#define busnum_CAVM_MCSX_HIL_RX_PAB_LMACX_BP_TEST(a,b) (a)
#define arguments_CAVM_MCSX_HIL_RX_PAB_LMACX_BP_TEST(a,b) (a),(b),-1,-1

/**
 * Register (RSL) mcs#_hil_rx_x2p_err
 *
 * MCS HIL RX X2P Errors Register
 */
union cavm_mcsx_hil_rx_x2p_err
{
    uint64_t u;
    struct cavm_mcsx_hil_rx_x2p_err_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_24_63        : 40;
        uint64_t mcs_exception_to_x2p_err : 20;/**< [ 23:  4](R/W) Bit enable per RX out exception_code value. See MCS_RX_EXCEPTION_CODE_E.
                                                                 In case of X2P.err value greater than 0, this error takes precedence over
                                                                 MCS_MIL_RX_ERR_CFG.RX_X2P_ERR_INPUT. */
        uint64_t x2p_err_enum          : 4;  /**< [  3:  0](R/W) X2P ERR enum in x2p2_err field. */
#else /* Word 0 - Little Endian */
        uint64_t x2p_err_enum          : 4;  /**< [  3:  0](R/W) X2P ERR enum in x2p2_err field. */
        uint64_t mcs_exception_to_x2p_err : 20;/**< [ 23:  4](R/W) Bit enable per RX out exception_code value. See MCS_RX_EXCEPTION_CODE_E.
                                                                 In case of X2P.err value greater than 0, this error takes precedence over
                                                                 MCS_MIL_RX_ERR_CFG.RX_X2P_ERR_INPUT. */
        uint64_t reserved_24_63        : 40;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_mcsx_hil_rx_x2p_err_s cn; */
};
typedef union cavm_mcsx_hil_rx_x2p_err cavm_mcsx_hil_rx_x2p_err_t;

static inline uint64_t CAVM_MCSX_HIL_RX_X2P_ERR(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_MCSX_HIL_RX_X2P_ERR(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CNF10KB) && (a<=6))
        return 0x87e0800a0010ll + 0x1000000ll * ((a) & 0x7);
    __cavm_csr_fatal("MCSX_HIL_RX_X2P_ERR", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_MCSX_HIL_RX_X2P_ERR(a) cavm_mcsx_hil_rx_x2p_err_t
#define bustype_CAVM_MCSX_HIL_RX_X2P_ERR(a) CSR_TYPE_RSL
#define basename_CAVM_MCSX_HIL_RX_X2P_ERR(a) "MCSX_HIL_RX_X2P_ERR"
#define device_bar_CAVM_MCSX_HIL_RX_X2P_ERR(a) 0x0 /* PF_BAR0 */
#define busnum_CAVM_MCSX_HIL_RX_X2P_ERR(a) (a)
#define arguments_CAVM_MCSX_HIL_RX_X2P_ERR(a) (a),-1,-1,-1

/**
 * Register (RSL) mcs#_hil_tx_crdt_thresh
 *
 * INTERNAL: MCS HIL TX BBE Credits Thresh Configuration Register
 */
union cavm_mcsx_hil_tx_crdt_thresh
{
    uint64_t u;
    struct cavm_mcsx_hil_tx_crdt_thresh_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_12_63        : 52;
        uint64_t tx_bbe_plcy_credits   : 5;  /**< [ 11:  7](R/W) HIL TX BBE POLICY credits initial value (based on BBE POLICY FIFO depth). */
        uint64_t tx_bbe_data_credits   : 7;  /**< [  6:  0](R/W) HIL TX BBE data credits initial value (based on BBE data FIFO depth). */
#else /* Word 0 - Little Endian */
        uint64_t tx_bbe_data_credits   : 7;  /**< [  6:  0](R/W) HIL TX BBE data credits initial value (based on BBE data FIFO depth). */
        uint64_t tx_bbe_plcy_credits   : 5;  /**< [ 11:  7](R/W) HIL TX BBE POLICY credits initial value (based on BBE POLICY FIFO depth). */
        uint64_t reserved_12_63        : 52;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_mcsx_hil_tx_crdt_thresh_s cn; */
};
typedef union cavm_mcsx_hil_tx_crdt_thresh cavm_mcsx_hil_tx_crdt_thresh_t;

static inline uint64_t CAVM_MCSX_HIL_TX_CRDT_THRESH(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_MCSX_HIL_TX_CRDT_THRESH(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CNF10KB) && (a<=6))
        return 0x87e0800a0008ll + 0x1000000ll * ((a) & 0x7);
    __cavm_csr_fatal("MCSX_HIL_TX_CRDT_THRESH", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_MCSX_HIL_TX_CRDT_THRESH(a) cavm_mcsx_hil_tx_crdt_thresh_t
#define bustype_CAVM_MCSX_HIL_TX_CRDT_THRESH(a) CSR_TYPE_RSL
#define basename_CAVM_MCSX_HIL_TX_CRDT_THRESH(a) "MCSX_HIL_TX_CRDT_THRESH"
#define device_bar_CAVM_MCSX_HIL_TX_CRDT_THRESH(a) 0x0 /* PF_BAR0 */
#define busnum_CAVM_MCSX_HIL_TX_CRDT_THRESH(a) (a)
#define arguments_CAVM_MCSX_HIL_TX_CRDT_THRESH(a) (a),-1,-1,-1

/**
 * Register (RSL) mcs#_hil_tx_gbl_int
 *
 * MCS HIL TX Per LMAC Interrupt Register
 * Contains the different interrupt bits of the MCS HIL.
 */
union cavm_mcsx_hil_tx_gbl_int
{
    uint64_t u;
    struct cavm_mcsx_hil_tx_gbl_int_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_8_63         : 56;
        uint64_t hil_tx_plcn_mismatch  : 1;  /**< [  7:  7](R/W1C/H) HIL TX packet sideband field P2X.pkt_bus.chan doesn't match any of the
                                                                 MCS_LINK_LMAC(0..3)_CFG registers or match more than one register.
                                                                 cycle is dropped and SKID credits are not returned to HOST. */
        uint64_t hil_tx_bbe_plcy_cred_ovf : 1;/**< [  6:  6](R/W1C/H) HIL TX BBE POLICY credits overflow. */
        uint64_t hil_tx_bbe_plcy_cred_unf : 1;/**< [  5:  5](R/W1C/H) New data beat from HIL TX SKID data, no credits in BBE POLICY counter. */
        uint64_t hil_tx_bbe_data_cred_ovf : 1;/**< [  4:  4](R/W1C/H) HIL TX BBE data credits overflow. */
        uint64_t hil_tx_bbe_data_cred_unf : 1;/**< [  3:  3](R/W1C/H) HIL TX new data beat from HIL TX SKID FIFO, no credits in BBE data counter. */
        uint64_t hil_tx_bbe_invld_port_credit : 1;/**< [  2:  2](R/W1C/H) HIL TX BBE to HIL credit interface port not zero. */
        uint64_t hil_tx_skid_data_fifo_unf : 1;/**< [  1:  1](R/W1C/H) HIL TX SKID data FIFO underflow. */
        uint64_t hil_tx_skid_data_fifo_ovf : 1;/**< [  0:  0](R/W1C/H) HIL TX SKID data FIFO overflow. */
#else /* Word 0 - Little Endian */
        uint64_t hil_tx_skid_data_fifo_ovf : 1;/**< [  0:  0](R/W1C/H) HIL TX SKID data FIFO overflow. */
        uint64_t hil_tx_skid_data_fifo_unf : 1;/**< [  1:  1](R/W1C/H) HIL TX SKID data FIFO underflow. */
        uint64_t hil_tx_bbe_invld_port_credit : 1;/**< [  2:  2](R/W1C/H) HIL TX BBE to HIL credit interface port not zero. */
        uint64_t hil_tx_bbe_data_cred_unf : 1;/**< [  3:  3](R/W1C/H) HIL TX new data beat from HIL TX SKID FIFO, no credits in BBE data counter. */
        uint64_t hil_tx_bbe_data_cred_ovf : 1;/**< [  4:  4](R/W1C/H) HIL TX BBE data credits overflow. */
        uint64_t hil_tx_bbe_plcy_cred_unf : 1;/**< [  5:  5](R/W1C/H) New data beat from HIL TX SKID data, no credits in BBE POLICY counter. */
        uint64_t hil_tx_bbe_plcy_cred_ovf : 1;/**< [  6:  6](R/W1C/H) HIL TX BBE POLICY credits overflow. */
        uint64_t hil_tx_plcn_mismatch  : 1;  /**< [  7:  7](R/W1C/H) HIL TX packet sideband field P2X.pkt_bus.chan doesn't match any of the
                                                                 MCS_LINK_LMAC(0..3)_CFG registers or match more than one register.
                                                                 cycle is dropped and SKID credits are not returned to HOST. */
        uint64_t reserved_8_63         : 56;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_mcsx_hil_tx_gbl_int_s cn; */
};
typedef union cavm_mcsx_hil_tx_gbl_int cavm_mcsx_hil_tx_gbl_int_t;

static inline uint64_t CAVM_MCSX_HIL_TX_GBL_INT(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_MCSX_HIL_TX_GBL_INT(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CNF10KB) && (a<=6))
        return 0x87e080060088ll + 0x1000000ll * ((a) & 0x7);
    __cavm_csr_fatal("MCSX_HIL_TX_GBL_INT", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_MCSX_HIL_TX_GBL_INT(a) cavm_mcsx_hil_tx_gbl_int_t
#define bustype_CAVM_MCSX_HIL_TX_GBL_INT(a) CSR_TYPE_RSL
#define basename_CAVM_MCSX_HIL_TX_GBL_INT(a) "MCSX_HIL_TX_GBL_INT"
#define device_bar_CAVM_MCSX_HIL_TX_GBL_INT(a) 0x0 /* PF_BAR0 */
#define busnum_CAVM_MCSX_HIL_TX_GBL_INT(a) (a)
#define arguments_CAVM_MCSX_HIL_TX_GBL_INT(a) (a),-1,-1,-1

/**
 * Register (RSL) mcs#_hil_tx_gbl_int_ena_w1c
 *
 * MCS HIL TX Interrupt Enable Clear Register
 * This register clears interrupt enable bits.
 */
union cavm_mcsx_hil_tx_gbl_int_ena_w1c
{
    uint64_t u;
    struct cavm_mcsx_hil_tx_gbl_int_ena_w1c_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_8_63         : 56;
        uint64_t hil_tx_plcn_mismatch  : 1;  /**< [  7:  7](R/W1C/H) Reads or clears enable for MCS(0..6)_HIL_TX_GBL_INT[HIL_TX_PLCN_MISMATCH]. */
        uint64_t hil_tx_bbe_plcy_cred_ovf : 1;/**< [  6:  6](R/W1C/H) Reads or clears enable for MCS(0..6)_HIL_TX_GBL_INT[HIL_TX_BBE_PLCY_CRED_OVF]. */
        uint64_t hil_tx_bbe_plcy_cred_unf : 1;/**< [  5:  5](R/W1C/H) Reads or clears enable for MCS(0..6)_HIL_TX_GBL_INT[HIL_TX_BBE_PLCY_CRED_UNF]. */
        uint64_t hil_tx_bbe_data_cred_ovf : 1;/**< [  4:  4](R/W1C/H) Reads or clears enable for MCS(0..6)_HIL_TX_GBL_INT[HIL_TX_BBE_DATA_CRED_OVF]. */
        uint64_t hil_tx_bbe_data_cred_unf : 1;/**< [  3:  3](R/W1C/H) Reads or clears enable for MCS(0..6)_HIL_TX_GBL_INT[HIL_TX_BBE_DATA_CRED_UNF]. */
        uint64_t hil_tx_bbe_invld_port_credit : 1;/**< [  2:  2](R/W1C/H) Reads or clears enable for MCS(0..6)_HIL_TX_GBL_INT[HIL_TX_BBE_INVLD_PORT_CREDIT]. */
        uint64_t hil_tx_skid_data_fifo_unf : 1;/**< [  1:  1](R/W1C/H) Reads or clears enable for MCS(0..6)_HIL_TX_GBL_INT[HIL_TX_SKID_DATA_FIFO_UNF]. */
        uint64_t hil_tx_skid_data_fifo_ovf : 1;/**< [  0:  0](R/W1C/H) Reads or clears enable for MCS(0..6)_HIL_TX_GBL_INT[HIL_TX_SKID_DATA_FIFO_OVF]. */
#else /* Word 0 - Little Endian */
        uint64_t hil_tx_skid_data_fifo_ovf : 1;/**< [  0:  0](R/W1C/H) Reads or clears enable for MCS(0..6)_HIL_TX_GBL_INT[HIL_TX_SKID_DATA_FIFO_OVF]. */
        uint64_t hil_tx_skid_data_fifo_unf : 1;/**< [  1:  1](R/W1C/H) Reads or clears enable for MCS(0..6)_HIL_TX_GBL_INT[HIL_TX_SKID_DATA_FIFO_UNF]. */
        uint64_t hil_tx_bbe_invld_port_credit : 1;/**< [  2:  2](R/W1C/H) Reads or clears enable for MCS(0..6)_HIL_TX_GBL_INT[HIL_TX_BBE_INVLD_PORT_CREDIT]. */
        uint64_t hil_tx_bbe_data_cred_unf : 1;/**< [  3:  3](R/W1C/H) Reads or clears enable for MCS(0..6)_HIL_TX_GBL_INT[HIL_TX_BBE_DATA_CRED_UNF]. */
        uint64_t hil_tx_bbe_data_cred_ovf : 1;/**< [  4:  4](R/W1C/H) Reads or clears enable for MCS(0..6)_HIL_TX_GBL_INT[HIL_TX_BBE_DATA_CRED_OVF]. */
        uint64_t hil_tx_bbe_plcy_cred_unf : 1;/**< [  5:  5](R/W1C/H) Reads or clears enable for MCS(0..6)_HIL_TX_GBL_INT[HIL_TX_BBE_PLCY_CRED_UNF]. */
        uint64_t hil_tx_bbe_plcy_cred_ovf : 1;/**< [  6:  6](R/W1C/H) Reads or clears enable for MCS(0..6)_HIL_TX_GBL_INT[HIL_TX_BBE_PLCY_CRED_OVF]. */
        uint64_t hil_tx_plcn_mismatch  : 1;  /**< [  7:  7](R/W1C/H) Reads or clears enable for MCS(0..6)_HIL_TX_GBL_INT[HIL_TX_PLCN_MISMATCH]. */
        uint64_t reserved_8_63         : 56;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_mcsx_hil_tx_gbl_int_ena_w1c_s cn; */
};
typedef union cavm_mcsx_hil_tx_gbl_int_ena_w1c cavm_mcsx_hil_tx_gbl_int_ena_w1c_t;

static inline uint64_t CAVM_MCSX_HIL_TX_GBL_INT_ENA_W1C(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_MCSX_HIL_TX_GBL_INT_ENA_W1C(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CNF10KB) && (a<=6))
        return 0x87e080060098ll + 0x1000000ll * ((a) & 0x7);
    __cavm_csr_fatal("MCSX_HIL_TX_GBL_INT_ENA_W1C", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_MCSX_HIL_TX_GBL_INT_ENA_W1C(a) cavm_mcsx_hil_tx_gbl_int_ena_w1c_t
#define bustype_CAVM_MCSX_HIL_TX_GBL_INT_ENA_W1C(a) CSR_TYPE_RSL
#define basename_CAVM_MCSX_HIL_TX_GBL_INT_ENA_W1C(a) "MCSX_HIL_TX_GBL_INT_ENA_W1C"
#define device_bar_CAVM_MCSX_HIL_TX_GBL_INT_ENA_W1C(a) 0x0 /* PF_BAR0 */
#define busnum_CAVM_MCSX_HIL_TX_GBL_INT_ENA_W1C(a) (a)
#define arguments_CAVM_MCSX_HIL_TX_GBL_INT_ENA_W1C(a) (a),-1,-1,-1

/**
 * Register (RSL) mcs#_hil_tx_gbl_int_ena_w1s
 *
 * MCS HIL TX Interrupt Enable Set Register
 * This register sets interrupt enable bits.
 */
union cavm_mcsx_hil_tx_gbl_int_ena_w1s
{
    uint64_t u;
    struct cavm_mcsx_hil_tx_gbl_int_ena_w1s_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_8_63         : 56;
        uint64_t hil_tx_plcn_mismatch  : 1;  /**< [  7:  7](R/W1S/H) Reads or sets enable for MCS(0..6)_HIL_TX_GBL_INT[HIL_TX_PLCN_MISMATCH]. */
        uint64_t hil_tx_bbe_plcy_cred_ovf : 1;/**< [  6:  6](R/W1S/H) Reads or sets enable for MCS(0..6)_HIL_TX_GBL_INT[HIL_TX_BBE_PLCY_CRED_OVF]. */
        uint64_t hil_tx_bbe_plcy_cred_unf : 1;/**< [  5:  5](R/W1S/H) Reads or sets enable for MCS(0..6)_HIL_TX_GBL_INT[HIL_TX_BBE_PLCY_CRED_UNF]. */
        uint64_t hil_tx_bbe_data_cred_ovf : 1;/**< [  4:  4](R/W1S/H) Reads or sets enable for MCS(0..6)_HIL_TX_GBL_INT[HIL_TX_BBE_DATA_CRED_OVF]. */
        uint64_t hil_tx_bbe_data_cred_unf : 1;/**< [  3:  3](R/W1S/H) Reads or sets enable for MCS(0..6)_HIL_TX_GBL_INT[HIL_TX_BBE_DATA_CRED_UNF]. */
        uint64_t hil_tx_bbe_invld_port_credit : 1;/**< [  2:  2](R/W1S/H) Reads or sets enable for MCS(0..6)_HIL_TX_GBL_INT[HIL_TX_BBE_INVLD_PORT_CREDIT]. */
        uint64_t hil_tx_skid_data_fifo_unf : 1;/**< [  1:  1](R/W1S/H) Reads or sets enable for MCS(0..6)_HIL_TX_GBL_INT[HIL_TX_SKID_DATA_FIFO_UNF]. */
        uint64_t hil_tx_skid_data_fifo_ovf : 1;/**< [  0:  0](R/W1S/H) Reads or sets enable for MCS(0..6)_HIL_TX_GBL_INT[HIL_TX_SKID_DATA_FIFO_OVF]. */
#else /* Word 0 - Little Endian */
        uint64_t hil_tx_skid_data_fifo_ovf : 1;/**< [  0:  0](R/W1S/H) Reads or sets enable for MCS(0..6)_HIL_TX_GBL_INT[HIL_TX_SKID_DATA_FIFO_OVF]. */
        uint64_t hil_tx_skid_data_fifo_unf : 1;/**< [  1:  1](R/W1S/H) Reads or sets enable for MCS(0..6)_HIL_TX_GBL_INT[HIL_TX_SKID_DATA_FIFO_UNF]. */
        uint64_t hil_tx_bbe_invld_port_credit : 1;/**< [  2:  2](R/W1S/H) Reads or sets enable for MCS(0..6)_HIL_TX_GBL_INT[HIL_TX_BBE_INVLD_PORT_CREDIT]. */
        uint64_t hil_tx_bbe_data_cred_unf : 1;/**< [  3:  3](R/W1S/H) Reads or sets enable for MCS(0..6)_HIL_TX_GBL_INT[HIL_TX_BBE_DATA_CRED_UNF]. */
        uint64_t hil_tx_bbe_data_cred_ovf : 1;/**< [  4:  4](R/W1S/H) Reads or sets enable for MCS(0..6)_HIL_TX_GBL_INT[HIL_TX_BBE_DATA_CRED_OVF]. */
        uint64_t hil_tx_bbe_plcy_cred_unf : 1;/**< [  5:  5](R/W1S/H) Reads or sets enable for MCS(0..6)_HIL_TX_GBL_INT[HIL_TX_BBE_PLCY_CRED_UNF]. */
        uint64_t hil_tx_bbe_plcy_cred_ovf : 1;/**< [  6:  6](R/W1S/H) Reads or sets enable for MCS(0..6)_HIL_TX_GBL_INT[HIL_TX_BBE_PLCY_CRED_OVF]. */
        uint64_t hil_tx_plcn_mismatch  : 1;  /**< [  7:  7](R/W1S/H) Reads or sets enable for MCS(0..6)_HIL_TX_GBL_INT[HIL_TX_PLCN_MISMATCH]. */
        uint64_t reserved_8_63         : 56;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_mcsx_hil_tx_gbl_int_ena_w1s_s cn; */
};
typedef union cavm_mcsx_hil_tx_gbl_int_ena_w1s cavm_mcsx_hil_tx_gbl_int_ena_w1s_t;

static inline uint64_t CAVM_MCSX_HIL_TX_GBL_INT_ENA_W1S(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_MCSX_HIL_TX_GBL_INT_ENA_W1S(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CNF10KB) && (a<=6))
        return 0x87e0800600a0ll + 0x1000000ll * ((a) & 0x7);
    __cavm_csr_fatal("MCSX_HIL_TX_GBL_INT_ENA_W1S", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_MCSX_HIL_TX_GBL_INT_ENA_W1S(a) cavm_mcsx_hil_tx_gbl_int_ena_w1s_t
#define bustype_CAVM_MCSX_HIL_TX_GBL_INT_ENA_W1S(a) CSR_TYPE_RSL
#define basename_CAVM_MCSX_HIL_TX_GBL_INT_ENA_W1S(a) "MCSX_HIL_TX_GBL_INT_ENA_W1S"
#define device_bar_CAVM_MCSX_HIL_TX_GBL_INT_ENA_W1S(a) 0x0 /* PF_BAR0 */
#define busnum_CAVM_MCSX_HIL_TX_GBL_INT_ENA_W1S(a) (a)
#define arguments_CAVM_MCSX_HIL_TX_GBL_INT_ENA_W1S(a) (a),-1,-1,-1

/**
 * Register (RSL) mcs#_hil_tx_gbl_int_w1s
 *
 * MCS HIL TX Interrupt Set Register
 * This register sets interrupt bits.
 */
union cavm_mcsx_hil_tx_gbl_int_w1s
{
    uint64_t u;
    struct cavm_mcsx_hil_tx_gbl_int_w1s_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_8_63         : 56;
        uint64_t hil_tx_plcn_mismatch  : 1;  /**< [  7:  7](R/W1S/H) Reads or sets MCS(0..6)_HIL_TX_GBL_INT[HIL_TX_PLCN_MISMATCH]. */
        uint64_t hil_tx_bbe_plcy_cred_ovf : 1;/**< [  6:  6](R/W1S/H) Reads or sets MCS(0..6)_HIL_TX_GBL_INT[HIL_TX_BBE_PLCY_CRED_OVF]. */
        uint64_t hil_tx_bbe_plcy_cred_unf : 1;/**< [  5:  5](R/W1S/H) Reads or sets MCS(0..6)_HIL_TX_GBL_INT[HIL_TX_BBE_PLCY_CRED_UNF]. */
        uint64_t hil_tx_bbe_data_cred_ovf : 1;/**< [  4:  4](R/W1S/H) Reads or sets MCS(0..6)_HIL_TX_GBL_INT[HIL_TX_BBE_DATA_CRED_OVF]. */
        uint64_t hil_tx_bbe_data_cred_unf : 1;/**< [  3:  3](R/W1S/H) Reads or sets MCS(0..6)_HIL_TX_GBL_INT[HIL_TX_BBE_DATA_CRED_UNF]. */
        uint64_t hil_tx_bbe_invld_port_credit : 1;/**< [  2:  2](R/W1S/H) Reads or sets MCS(0..6)_HIL_TX_GBL_INT[HIL_TX_BBE_INVLD_PORT_CREDIT]. */
        uint64_t hil_tx_skid_data_fifo_unf : 1;/**< [  1:  1](R/W1S/H) Reads or sets MCS(0..6)_HIL_TX_GBL_INT[HIL_TX_SKID_DATA_FIFO_UNF]. */
        uint64_t hil_tx_skid_data_fifo_ovf : 1;/**< [  0:  0](R/W1S/H) Reads or sets MCS(0..6)_HIL_TX_GBL_INT[HIL_TX_SKID_DATA_FIFO_OVF]. */
#else /* Word 0 - Little Endian */
        uint64_t hil_tx_skid_data_fifo_ovf : 1;/**< [  0:  0](R/W1S/H) Reads or sets MCS(0..6)_HIL_TX_GBL_INT[HIL_TX_SKID_DATA_FIFO_OVF]. */
        uint64_t hil_tx_skid_data_fifo_unf : 1;/**< [  1:  1](R/W1S/H) Reads or sets MCS(0..6)_HIL_TX_GBL_INT[HIL_TX_SKID_DATA_FIFO_UNF]. */
        uint64_t hil_tx_bbe_invld_port_credit : 1;/**< [  2:  2](R/W1S/H) Reads or sets MCS(0..6)_HIL_TX_GBL_INT[HIL_TX_BBE_INVLD_PORT_CREDIT]. */
        uint64_t hil_tx_bbe_data_cred_unf : 1;/**< [  3:  3](R/W1S/H) Reads or sets MCS(0..6)_HIL_TX_GBL_INT[HIL_TX_BBE_DATA_CRED_UNF]. */
        uint64_t hil_tx_bbe_data_cred_ovf : 1;/**< [  4:  4](R/W1S/H) Reads or sets MCS(0..6)_HIL_TX_GBL_INT[HIL_TX_BBE_DATA_CRED_OVF]. */
        uint64_t hil_tx_bbe_plcy_cred_unf : 1;/**< [  5:  5](R/W1S/H) Reads or sets MCS(0..6)_HIL_TX_GBL_INT[HIL_TX_BBE_PLCY_CRED_UNF]. */
        uint64_t hil_tx_bbe_plcy_cred_ovf : 1;/**< [  6:  6](R/W1S/H) Reads or sets MCS(0..6)_HIL_TX_GBL_INT[HIL_TX_BBE_PLCY_CRED_OVF]. */
        uint64_t hil_tx_plcn_mismatch  : 1;  /**< [  7:  7](R/W1S/H) Reads or sets MCS(0..6)_HIL_TX_GBL_INT[HIL_TX_PLCN_MISMATCH]. */
        uint64_t reserved_8_63         : 56;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_mcsx_hil_tx_gbl_int_w1s_s cn; */
};
typedef union cavm_mcsx_hil_tx_gbl_int_w1s cavm_mcsx_hil_tx_gbl_int_w1s_t;

static inline uint64_t CAVM_MCSX_HIL_TX_GBL_INT_W1S(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_MCSX_HIL_TX_GBL_INT_W1S(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CNF10KB) && (a<=6))
        return 0x87e080060090ll + 0x1000000ll * ((a) & 0x7);
    __cavm_csr_fatal("MCSX_HIL_TX_GBL_INT_W1S", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_MCSX_HIL_TX_GBL_INT_W1S(a) cavm_mcsx_hil_tx_gbl_int_w1s_t
#define bustype_CAVM_MCSX_HIL_TX_GBL_INT_W1S(a) CSR_TYPE_RSL
#define basename_CAVM_MCSX_HIL_TX_GBL_INT_W1S(a) "MCSX_HIL_TX_GBL_INT_W1S"
#define device_bar_CAVM_MCSX_HIL_TX_GBL_INT_W1S(a) 0x0 /* PF_BAR0 */
#define busnum_CAVM_MCSX_HIL_TX_GBL_INT_W1S(a) (a)
#define arguments_CAVM_MCSX_HIL_TX_GBL_INT_W1S(a) (a),-1,-1,-1

/**
 * Register (RSL) mcs#_hil_tx_gbl_status
 *
 * INTERNAL: MCS HIL TX Global Status Register
 */
union cavm_mcsx_hil_tx_gbl_status
{
    uint64_t u;
    struct cavm_mcsx_hil_tx_gbl_status_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_33_63        : 31;
        uint64_t p2x_pkt_cnt           : 12; /**< [ 32: 21](RO/H) Reserved.
                                                                 Internal:
                                                                 Dynamically counts the P2X packets in MCS at any given time. */
        uint64_t skid_data_cnt         : 9;  /**< [ 20: 12](RO/H) HIL TX SKID data FIFO fill level (a single async data FIFO, 64 entries per LMAC). */
        uint64_t bbe_plcy_crdt         : 5;  /**< [ 11:  7](RO/H) HIL TX BBE POLICY credits counter. */
        uint64_t bbe_data_crdt         : 7;  /**< [  6:  0](RO/H) HIL TX BBE data credits counter. */
#else /* Word 0 - Little Endian */
        uint64_t bbe_data_crdt         : 7;  /**< [  6:  0](RO/H) HIL TX BBE data credits counter. */
        uint64_t bbe_plcy_crdt         : 5;  /**< [ 11:  7](RO/H) HIL TX BBE POLICY credits counter. */
        uint64_t skid_data_cnt         : 9;  /**< [ 20: 12](RO/H) HIL TX SKID data FIFO fill level (a single async data FIFO, 64 entries per LMAC). */
        uint64_t p2x_pkt_cnt           : 12; /**< [ 32: 21](RO/H) Reserved.
                                                                 Internal:
                                                                 Dynamically counts the P2X packets in MCS at any given time. */
        uint64_t reserved_33_63        : 31;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_mcsx_hil_tx_gbl_status_s cn; */
};
typedef union cavm_mcsx_hil_tx_gbl_status cavm_mcsx_hil_tx_gbl_status_t;

static inline uint64_t CAVM_MCSX_HIL_TX_GBL_STATUS(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_MCSX_HIL_TX_GBL_STATUS(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CNF10KB) && (a<=6))
        return 0x87e0800a0030ll + 0x1000000ll * ((a) & 0x7);
    __cavm_csr_fatal("MCSX_HIL_TX_GBL_STATUS", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_MCSX_HIL_TX_GBL_STATUS(a) cavm_mcsx_hil_tx_gbl_status_t
#define bustype_CAVM_MCSX_HIL_TX_GBL_STATUS(a) CSR_TYPE_RSL
#define basename_CAVM_MCSX_HIL_TX_GBL_STATUS(a) "MCSX_HIL_TX_GBL_STATUS"
#define device_bar_CAVM_MCSX_HIL_TX_GBL_STATUS(a) 0x0 /* PF_BAR0 */
#define busnum_CAVM_MCSX_HIL_TX_GBL_STATUS(a) (a)
#define arguments_CAVM_MCSX_HIL_TX_GBL_STATUS(a) (a),-1,-1,-1

/**
 * Register (RSL) mcs#_hil_tx_lmac#_int
 *
 * MCS HIL TX Interrupt Register
 * Contains the different interrupt bits of MCS TX HIL.
 */
union cavm_mcsx_hil_tx_lmacx_int
{
    uint64_t u;
    struct cavm_mcsx_hil_tx_lmacx_int_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_7_63         : 57;
        uint64_t hil_tx_bypass_skid_crdt_unf : 1;/**< [  6:  6](R/W1C/H) HIL TX BYPASS SKID credits underflow, only in external bypass mode. */
        uint64_t hil_tx_bypass_skid_crdt_ovf : 1;/**< [  5:  5](R/W1C/H) HIL TX BYPASS SKID credits overflow, only in external bypass mode. */
        uint64_t hil_tx_cc_message_invalid : 1;/**< [  4:  4](R/W1C/H) CC received from MIL is invalid. The first word received is less than 4 cycles. */
        uint64_t hil_tx_ack_fifo_ovf   : 1;  /**< [  3:  3](R/W1C/H) HIL TX ack FIFO overflow. */
        uint64_t hil_tx_cc_fifo_unf    : 1;  /**< [  2:  2](R/W1C/H) HIL TX channel credit FIFO underflow. */
        uint64_t hil_tx_cc_fifo_ovf    : 1;  /**< [  1:  1](R/W1C/H) HIL TX channel credit FIFO overflow. */
        uint64_t hil_tx_skid_crdt_fifo_ovf : 1;/**< [  0:  0](R/W1C/H) HIL TX SKID credit FIFO overflow. */
#else /* Word 0 - Little Endian */
        uint64_t hil_tx_skid_crdt_fifo_ovf : 1;/**< [  0:  0](R/W1C/H) HIL TX SKID credit FIFO overflow. */
        uint64_t hil_tx_cc_fifo_ovf    : 1;  /**< [  1:  1](R/W1C/H) HIL TX channel credit FIFO overflow. */
        uint64_t hil_tx_cc_fifo_unf    : 1;  /**< [  2:  2](R/W1C/H) HIL TX channel credit FIFO underflow. */
        uint64_t hil_tx_ack_fifo_ovf   : 1;  /**< [  3:  3](R/W1C/H) HIL TX ack FIFO overflow. */
        uint64_t hil_tx_cc_message_invalid : 1;/**< [  4:  4](R/W1C/H) CC received from MIL is invalid. The first word received is less than 4 cycles. */
        uint64_t hil_tx_bypass_skid_crdt_ovf : 1;/**< [  5:  5](R/W1C/H) HIL TX BYPASS SKID credits overflow, only in external bypass mode. */
        uint64_t hil_tx_bypass_skid_crdt_unf : 1;/**< [  6:  6](R/W1C/H) HIL TX BYPASS SKID credits underflow, only in external bypass mode. */
        uint64_t reserved_7_63         : 57;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_mcsx_hil_tx_lmacx_int_s cn; */
};
typedef union cavm_mcsx_hil_tx_lmacx_int cavm_mcsx_hil_tx_lmacx_int_t;

static inline uint64_t CAVM_MCSX_HIL_TX_LMACX_INT(uint64_t a, uint64_t b) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_MCSX_HIL_TX_LMACX_INT(uint64_t a, uint64_t b)
{
    if (cavm_is_model(OCTEONTX_CNF10KB) && ((a<=6) && (b<=3)))
        return 0x87e080070088ll + 0x1000000ll * ((a) & 0x7) + 0x800ll * ((b) & 0x3);
    __cavm_csr_fatal("MCSX_HIL_TX_LMACX_INT", 2, a, b, 0, 0, 0, 0);
}

#define typedef_CAVM_MCSX_HIL_TX_LMACX_INT(a,b) cavm_mcsx_hil_tx_lmacx_int_t
#define bustype_CAVM_MCSX_HIL_TX_LMACX_INT(a,b) CSR_TYPE_RSL
#define basename_CAVM_MCSX_HIL_TX_LMACX_INT(a,b) "MCSX_HIL_TX_LMACX_INT"
#define device_bar_CAVM_MCSX_HIL_TX_LMACX_INT(a,b) 0x0 /* PF_BAR0 */
#define busnum_CAVM_MCSX_HIL_TX_LMACX_INT(a,b) (a)
#define arguments_CAVM_MCSX_HIL_TX_LMACX_INT(a,b) (a),(b),-1,-1

/**
 * Register (RSL) mcs#_hil_tx_lmac#_int_ena_w1c
 *
 * MCS HIL TX Interrupt Enable Clear Register
 * This register clears interrupt enable bits.
 */
union cavm_mcsx_hil_tx_lmacx_int_ena_w1c
{
    uint64_t u;
    struct cavm_mcsx_hil_tx_lmacx_int_ena_w1c_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_7_63         : 57;
        uint64_t hil_tx_bypass_skid_crdt_unf : 1;/**< [  6:  6](R/W1C/H) Reads or clears enable for MCS(0..6)_HIL_TX_LMAC(0..3)_INT[HIL_TX_BYPASS_SKID_CRDT_UNF]. */
        uint64_t hil_tx_bypass_skid_crdt_ovf : 1;/**< [  5:  5](R/W1C/H) Reads or clears enable for MCS(0..6)_HIL_TX_LMAC(0..3)_INT[HIL_TX_BYPASS_SKID_CRDT_OVF]. */
        uint64_t hil_tx_cc_message_invalid : 1;/**< [  4:  4](R/W1C/H) Reads or clears enable for MCS(0..6)_HIL_TX_LMAC(0..3)_INT[HIL_TX_CC_MESSAGE_INVALID]. */
        uint64_t hil_tx_ack_fifo_ovf   : 1;  /**< [  3:  3](R/W1C/H) Reads or clears enable for MCS(0..6)_HIL_TX_LMAC(0..3)_INT[HIL_TX_ACK_FIFO_OVF]. */
        uint64_t hil_tx_cc_fifo_unf    : 1;  /**< [  2:  2](R/W1C/H) Reads or clears enable for MCS(0..6)_HIL_TX_LMAC(0..3)_INT[HIL_TX_CC_FIFO_UNF]. */
        uint64_t hil_tx_cc_fifo_ovf    : 1;  /**< [  1:  1](R/W1C/H) Reads or clears enable for MCS(0..6)_HIL_TX_LMAC(0..3)_INT[HIL_TX_CC_FIFO_OVF]. */
        uint64_t hil_tx_skid_crdt_fifo_ovf : 1;/**< [  0:  0](R/W1C/H) Reads or clears enable for MCS(0..6)_HIL_TX_LMAC(0..3)_INT[HIL_TX_SKID_CRDT_FIFO_OVF]. */
#else /* Word 0 - Little Endian */
        uint64_t hil_tx_skid_crdt_fifo_ovf : 1;/**< [  0:  0](R/W1C/H) Reads or clears enable for MCS(0..6)_HIL_TX_LMAC(0..3)_INT[HIL_TX_SKID_CRDT_FIFO_OVF]. */
        uint64_t hil_tx_cc_fifo_ovf    : 1;  /**< [  1:  1](R/W1C/H) Reads or clears enable for MCS(0..6)_HIL_TX_LMAC(0..3)_INT[HIL_TX_CC_FIFO_OVF]. */
        uint64_t hil_tx_cc_fifo_unf    : 1;  /**< [  2:  2](R/W1C/H) Reads or clears enable for MCS(0..6)_HIL_TX_LMAC(0..3)_INT[HIL_TX_CC_FIFO_UNF]. */
        uint64_t hil_tx_ack_fifo_ovf   : 1;  /**< [  3:  3](R/W1C/H) Reads or clears enable for MCS(0..6)_HIL_TX_LMAC(0..3)_INT[HIL_TX_ACK_FIFO_OVF]. */
        uint64_t hil_tx_cc_message_invalid : 1;/**< [  4:  4](R/W1C/H) Reads or clears enable for MCS(0..6)_HIL_TX_LMAC(0..3)_INT[HIL_TX_CC_MESSAGE_INVALID]. */
        uint64_t hil_tx_bypass_skid_crdt_ovf : 1;/**< [  5:  5](R/W1C/H) Reads or clears enable for MCS(0..6)_HIL_TX_LMAC(0..3)_INT[HIL_TX_BYPASS_SKID_CRDT_OVF]. */
        uint64_t hil_tx_bypass_skid_crdt_unf : 1;/**< [  6:  6](R/W1C/H) Reads or clears enable for MCS(0..6)_HIL_TX_LMAC(0..3)_INT[HIL_TX_BYPASS_SKID_CRDT_UNF]. */
        uint64_t reserved_7_63         : 57;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_mcsx_hil_tx_lmacx_int_ena_w1c_s cn; */
};
typedef union cavm_mcsx_hil_tx_lmacx_int_ena_w1c cavm_mcsx_hil_tx_lmacx_int_ena_w1c_t;

static inline uint64_t CAVM_MCSX_HIL_TX_LMACX_INT_ENA_W1C(uint64_t a, uint64_t b) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_MCSX_HIL_TX_LMACX_INT_ENA_W1C(uint64_t a, uint64_t b)
{
    if (cavm_is_model(OCTEONTX_CNF10KB) && ((a<=6) && (b<=3)))
        return 0x87e080070098ll + 0x1000000ll * ((a) & 0x7) + 0x800ll * ((b) & 0x3);
    __cavm_csr_fatal("MCSX_HIL_TX_LMACX_INT_ENA_W1C", 2, a, b, 0, 0, 0, 0);
}

#define typedef_CAVM_MCSX_HIL_TX_LMACX_INT_ENA_W1C(a,b) cavm_mcsx_hil_tx_lmacx_int_ena_w1c_t
#define bustype_CAVM_MCSX_HIL_TX_LMACX_INT_ENA_W1C(a,b) CSR_TYPE_RSL
#define basename_CAVM_MCSX_HIL_TX_LMACX_INT_ENA_W1C(a,b) "MCSX_HIL_TX_LMACX_INT_ENA_W1C"
#define device_bar_CAVM_MCSX_HIL_TX_LMACX_INT_ENA_W1C(a,b) 0x0 /* PF_BAR0 */
#define busnum_CAVM_MCSX_HIL_TX_LMACX_INT_ENA_W1C(a,b) (a)
#define arguments_CAVM_MCSX_HIL_TX_LMACX_INT_ENA_W1C(a,b) (a),(b),-1,-1

/**
 * Register (RSL) mcs#_hil_tx_lmac#_int_ena_w1s
 *
 * MCS HIL TX Interrupt Enable Set Register
 * This register sets interrupt enable bits.
 */
union cavm_mcsx_hil_tx_lmacx_int_ena_w1s
{
    uint64_t u;
    struct cavm_mcsx_hil_tx_lmacx_int_ena_w1s_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_7_63         : 57;
        uint64_t hil_tx_bypass_skid_crdt_unf : 1;/**< [  6:  6](R/W1S/H) Reads or sets enable for MCS(0..6)_HIL_TX_LMAC(0..3)_INT[HIL_TX_BYPASS_SKID_CRDT_UNF]. */
        uint64_t hil_tx_bypass_skid_crdt_ovf : 1;/**< [  5:  5](R/W1S/H) Reads or sets enable for MCS(0..6)_HIL_TX_LMAC(0..3)_INT[HIL_TX_BYPASS_SKID_CRDT_OVF]. */
        uint64_t hil_tx_cc_message_invalid : 1;/**< [  4:  4](R/W1S/H) Reads or sets enable for MCS(0..6)_HIL_TX_LMAC(0..3)_INT[HIL_TX_CC_MESSAGE_INVALID]. */
        uint64_t hil_tx_ack_fifo_ovf   : 1;  /**< [  3:  3](R/W1S/H) Reads or sets enable for MCS(0..6)_HIL_TX_LMAC(0..3)_INT[HIL_TX_ACK_FIFO_OVF]. */
        uint64_t hil_tx_cc_fifo_unf    : 1;  /**< [  2:  2](R/W1S/H) Reads or sets enable for MCS(0..6)_HIL_TX_LMAC(0..3)_INT[HIL_TX_CC_FIFO_UNF]. */
        uint64_t hil_tx_cc_fifo_ovf    : 1;  /**< [  1:  1](R/W1S/H) Reads or sets enable for MCS(0..6)_HIL_TX_LMAC(0..3)_INT[HIL_TX_CC_FIFO_OVF]. */
        uint64_t hil_tx_skid_crdt_fifo_ovf : 1;/**< [  0:  0](R/W1S/H) Reads or sets enable for MCS(0..6)_HIL_TX_LMAC(0..3)_INT[HIL_TX_SKID_CRDT_FIFO_OVF]. */
#else /* Word 0 - Little Endian */
        uint64_t hil_tx_skid_crdt_fifo_ovf : 1;/**< [  0:  0](R/W1S/H) Reads or sets enable for MCS(0..6)_HIL_TX_LMAC(0..3)_INT[HIL_TX_SKID_CRDT_FIFO_OVF]. */
        uint64_t hil_tx_cc_fifo_ovf    : 1;  /**< [  1:  1](R/W1S/H) Reads or sets enable for MCS(0..6)_HIL_TX_LMAC(0..3)_INT[HIL_TX_CC_FIFO_OVF]. */
        uint64_t hil_tx_cc_fifo_unf    : 1;  /**< [  2:  2](R/W1S/H) Reads or sets enable for MCS(0..6)_HIL_TX_LMAC(0..3)_INT[HIL_TX_CC_FIFO_UNF]. */
        uint64_t hil_tx_ack_fifo_ovf   : 1;  /**< [  3:  3](R/W1S/H) Reads or sets enable for MCS(0..6)_HIL_TX_LMAC(0..3)_INT[HIL_TX_ACK_FIFO_OVF]. */
        uint64_t hil_tx_cc_message_invalid : 1;/**< [  4:  4](R/W1S/H) Reads or sets enable for MCS(0..6)_HIL_TX_LMAC(0..3)_INT[HIL_TX_CC_MESSAGE_INVALID]. */
        uint64_t hil_tx_bypass_skid_crdt_ovf : 1;/**< [  5:  5](R/W1S/H) Reads or sets enable for MCS(0..6)_HIL_TX_LMAC(0..3)_INT[HIL_TX_BYPASS_SKID_CRDT_OVF]. */
        uint64_t hil_tx_bypass_skid_crdt_unf : 1;/**< [  6:  6](R/W1S/H) Reads or sets enable for MCS(0..6)_HIL_TX_LMAC(0..3)_INT[HIL_TX_BYPASS_SKID_CRDT_UNF]. */
        uint64_t reserved_7_63         : 57;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_mcsx_hil_tx_lmacx_int_ena_w1s_s cn; */
};
typedef union cavm_mcsx_hil_tx_lmacx_int_ena_w1s cavm_mcsx_hil_tx_lmacx_int_ena_w1s_t;

static inline uint64_t CAVM_MCSX_HIL_TX_LMACX_INT_ENA_W1S(uint64_t a, uint64_t b) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_MCSX_HIL_TX_LMACX_INT_ENA_W1S(uint64_t a, uint64_t b)
{
    if (cavm_is_model(OCTEONTX_CNF10KB) && ((a<=6) && (b<=3)))
        return 0x87e0800700a0ll + 0x1000000ll * ((a) & 0x7) + 0x800ll * ((b) & 0x3);
    __cavm_csr_fatal("MCSX_HIL_TX_LMACX_INT_ENA_W1S", 2, a, b, 0, 0, 0, 0);
}

#define typedef_CAVM_MCSX_HIL_TX_LMACX_INT_ENA_W1S(a,b) cavm_mcsx_hil_tx_lmacx_int_ena_w1s_t
#define bustype_CAVM_MCSX_HIL_TX_LMACX_INT_ENA_W1S(a,b) CSR_TYPE_RSL
#define basename_CAVM_MCSX_HIL_TX_LMACX_INT_ENA_W1S(a,b) "MCSX_HIL_TX_LMACX_INT_ENA_W1S"
#define device_bar_CAVM_MCSX_HIL_TX_LMACX_INT_ENA_W1S(a,b) 0x0 /* PF_BAR0 */
#define busnum_CAVM_MCSX_HIL_TX_LMACX_INT_ENA_W1S(a,b) (a)
#define arguments_CAVM_MCSX_HIL_TX_LMACX_INT_ENA_W1S(a,b) (a),(b),-1,-1

/**
 * Register (RSL) mcs#_hil_tx_lmac#_int_w1s
 *
 * MCS HIL TX Interrupt Set Register
 * This register sets interrupt bits.
 */
union cavm_mcsx_hil_tx_lmacx_int_w1s
{
    uint64_t u;
    struct cavm_mcsx_hil_tx_lmacx_int_w1s_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_7_63         : 57;
        uint64_t hil_tx_bypass_skid_crdt_unf : 1;/**< [  6:  6](R/W1S/H) Reads or sets MCS(0..6)_HIL_TX_LMAC(0..3)_INT[HIL_TX_BYPASS_SKID_CRDT_UNF]. */
        uint64_t hil_tx_bypass_skid_crdt_ovf : 1;/**< [  5:  5](R/W1S/H) Reads or sets MCS(0..6)_HIL_TX_LMAC(0..3)_INT[HIL_TX_BYPASS_SKID_CRDT_OVF]. */
        uint64_t hil_tx_cc_message_invalid : 1;/**< [  4:  4](R/W1S/H) Reads or sets MCS(0..6)_HIL_TX_LMAC(0..3)_INT[HIL_TX_CC_MESSAGE_INVALID]. */
        uint64_t hil_tx_ack_fifo_ovf   : 1;  /**< [  3:  3](R/W1S/H) Reads or sets MCS(0..6)_HIL_TX_LMAC(0..3)_INT[HIL_TX_ACK_FIFO_OVF]. */
        uint64_t hil_tx_cc_fifo_unf    : 1;  /**< [  2:  2](R/W1S/H) Reads or sets MCS(0..6)_HIL_TX_LMAC(0..3)_INT[HIL_TX_CC_FIFO_UNF]. */
        uint64_t hil_tx_cc_fifo_ovf    : 1;  /**< [  1:  1](R/W1S/H) Reads or sets MCS(0..6)_HIL_TX_LMAC(0..3)_INT[HIL_TX_CC_FIFO_OVF]. */
        uint64_t hil_tx_skid_crdt_fifo_ovf : 1;/**< [  0:  0](R/W1S/H) Reads or sets MCS(0..6)_HIL_TX_LMAC(0..3)_INT[HIL_TX_SKID_CRDT_FIFO_OVF]. */
#else /* Word 0 - Little Endian */
        uint64_t hil_tx_skid_crdt_fifo_ovf : 1;/**< [  0:  0](R/W1S/H) Reads or sets MCS(0..6)_HIL_TX_LMAC(0..3)_INT[HIL_TX_SKID_CRDT_FIFO_OVF]. */
        uint64_t hil_tx_cc_fifo_ovf    : 1;  /**< [  1:  1](R/W1S/H) Reads or sets MCS(0..6)_HIL_TX_LMAC(0..3)_INT[HIL_TX_CC_FIFO_OVF]. */
        uint64_t hil_tx_cc_fifo_unf    : 1;  /**< [  2:  2](R/W1S/H) Reads or sets MCS(0..6)_HIL_TX_LMAC(0..3)_INT[HIL_TX_CC_FIFO_UNF]. */
        uint64_t hil_tx_ack_fifo_ovf   : 1;  /**< [  3:  3](R/W1S/H) Reads or sets MCS(0..6)_HIL_TX_LMAC(0..3)_INT[HIL_TX_ACK_FIFO_OVF]. */
        uint64_t hil_tx_cc_message_invalid : 1;/**< [  4:  4](R/W1S/H) Reads or sets MCS(0..6)_HIL_TX_LMAC(0..3)_INT[HIL_TX_CC_MESSAGE_INVALID]. */
        uint64_t hil_tx_bypass_skid_crdt_ovf : 1;/**< [  5:  5](R/W1S/H) Reads or sets MCS(0..6)_HIL_TX_LMAC(0..3)_INT[HIL_TX_BYPASS_SKID_CRDT_OVF]. */
        uint64_t hil_tx_bypass_skid_crdt_unf : 1;/**< [  6:  6](R/W1S/H) Reads or sets MCS(0..6)_HIL_TX_LMAC(0..3)_INT[HIL_TX_BYPASS_SKID_CRDT_UNF]. */
        uint64_t reserved_7_63         : 57;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_mcsx_hil_tx_lmacx_int_w1s_s cn; */
};
typedef union cavm_mcsx_hil_tx_lmacx_int_w1s cavm_mcsx_hil_tx_lmacx_int_w1s_t;

static inline uint64_t CAVM_MCSX_HIL_TX_LMACX_INT_W1S(uint64_t a, uint64_t b) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_MCSX_HIL_TX_LMACX_INT_W1S(uint64_t a, uint64_t b)
{
    if (cavm_is_model(OCTEONTX_CNF10KB) && ((a<=6) && (b<=3)))
        return 0x87e080070090ll + 0x1000000ll * ((a) & 0x7) + 0x800ll * ((b) & 0x3);
    __cavm_csr_fatal("MCSX_HIL_TX_LMACX_INT_W1S", 2, a, b, 0, 0, 0, 0);
}

#define typedef_CAVM_MCSX_HIL_TX_LMACX_INT_W1S(a,b) cavm_mcsx_hil_tx_lmacx_int_w1s_t
#define bustype_CAVM_MCSX_HIL_TX_LMACX_INT_W1S(a,b) CSR_TYPE_RSL
#define basename_CAVM_MCSX_HIL_TX_LMACX_INT_W1S(a,b) "MCSX_HIL_TX_LMACX_INT_W1S"
#define device_bar_CAVM_MCSX_HIL_TX_LMACX_INT_W1S(a,b) 0x0 /* PF_BAR0 */
#define busnum_CAVM_MCSX_HIL_TX_LMACX_INT_W1S(a,b) (a)
#define arguments_CAVM_MCSX_HIL_TX_LMACX_INT_W1S(a,b) (a),(b),-1,-1

/**
 * Register (RSL) mcs#_hil_tx_lmac#_status
 *
 * INTERNAL: MCS HIL TX Per LMAC Status Register
 */
union cavm_mcsx_hil_tx_lmacx_status
{
    uint64_t u;
    struct cavm_mcsx_hil_tx_lmacx_status_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_29_63        : 35;
        uint64_t mac_skid_crdt         : 7;  /**< [ 28: 22](RO/H) MAC P2X SKID counter. Used only in external bypass mode. */
        uint64_t cc_fifo_cnt           : 7;  /**< [ 21: 15](RO/H) HIL TX channel credits FIFO fill level. */
        uint64_t cc_ack_fifo_cnt       : 5;  /**< [ 14: 10](RO/H) HIL TX channel credits ack FIFO fill level. */
        uint64_t skid_crdt_fifo_cnt    : 7;  /**< [  9:  3](RO/H) HIL TX SKID credit FIFO fill level. */
        uint64_t cc_tx_sm              : 3;  /**< [  2:  0](RO/H) HIL TX channel credits state machine. */
#else /* Word 0 - Little Endian */
        uint64_t cc_tx_sm              : 3;  /**< [  2:  0](RO/H) HIL TX channel credits state machine. */
        uint64_t skid_crdt_fifo_cnt    : 7;  /**< [  9:  3](RO/H) HIL TX SKID credit FIFO fill level. */
        uint64_t cc_ack_fifo_cnt       : 5;  /**< [ 14: 10](RO/H) HIL TX channel credits ack FIFO fill level. */
        uint64_t cc_fifo_cnt           : 7;  /**< [ 21: 15](RO/H) HIL TX channel credits FIFO fill level. */
        uint64_t mac_skid_crdt         : 7;  /**< [ 28: 22](RO/H) MAC P2X SKID counter. Used only in external bypass mode. */
        uint64_t reserved_29_63        : 35;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_mcsx_hil_tx_lmacx_status_s cn; */
};
typedef union cavm_mcsx_hil_tx_lmacx_status cavm_mcsx_hil_tx_lmacx_status_t;

static inline uint64_t CAVM_MCSX_HIL_TX_LMACX_STATUS(uint64_t a, uint64_t b) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_MCSX_HIL_TX_LMACX_STATUS(uint64_t a, uint64_t b)
{
    if (cavm_is_model(OCTEONTX_CNF10KB) && ((a<=6) && (b<=3)))
        return 0x87e0800b0020ll + 0x1000000ll * ((a) & 0x7) + 0x800ll * ((b) & 0x3);
    __cavm_csr_fatal("MCSX_HIL_TX_LMACX_STATUS", 2, a, b, 0, 0, 0, 0);
}

#define typedef_CAVM_MCSX_HIL_TX_LMACX_STATUS(a,b) cavm_mcsx_hil_tx_lmacx_status_t
#define bustype_CAVM_MCSX_HIL_TX_LMACX_STATUS(a,b) CSR_TYPE_RSL
#define basename_CAVM_MCSX_HIL_TX_LMACX_STATUS(a,b) "MCSX_HIL_TX_LMACX_STATUS"
#define device_bar_CAVM_MCSX_HIL_TX_LMACX_STATUS(a,b) 0x0 /* PF_BAR0 */
#define busnum_CAVM_MCSX_HIL_TX_LMACX_STATUS(a,b) (a)
#define arguments_CAVM_MCSX_HIL_TX_LMACX_STATUS(a,b) (a),(b),-1,-1

/**
 * Register (RSL) mcs#_hil_x2p_req_bp_test
 *
 * INTERNAL: MCS HIL X2P Request Backpressure Test Register
 */
union cavm_mcsx_hil_x2p_req_bp_test
{
    uint64_t u;
    struct cavm_mcsx_hil_x2p_req_bp_test_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_49_63        : 15;
        uint64_t enable                : 1;  /**< [ 48: 48](R/W) Enable test mode. For diagnostic use only.
                                                                 Internal:
                                                                 Once a bit is set, random backpressure is generated
                                                                 at the corresponding point to allow for more frequent backpressure.
                                                                 \<48\> = Stop sending X2P requests from HIL-RX to HOST. */
        uint64_t reserved_18_47        : 30;
        uint64_t bp_cfg                : 2;  /**< [ 17: 16](R/W) Backpressure weight. For diagnostic use only.
                                                                 Internal:
                                                                 There are 2 backpressure configuration bits per enable, with the two bits
                                                                 defined as 0x0=100% of the time, 0x1=75% of the time, 0x2=50% of the time,
                                                                 0x3=25% of the time.
                                                                    \<17:16\> = Config 0.

                                                                  When using 0x0, the constant backpressure means the testbench must toggle the
                                                                  corresponding [ENABLE] bit to keep traffic flowing. */
        uint64_t reserved_12_15        : 4;
        uint64_t lfsr_freq             : 12; /**< [ 11:  0](R/W) Test LFSR update frequency in coprocessor-clocks minus one. */
#else /* Word 0 - Little Endian */
        uint64_t lfsr_freq             : 12; /**< [ 11:  0](R/W) Test LFSR update frequency in coprocessor-clocks minus one. */
        uint64_t reserved_12_15        : 4;
        uint64_t bp_cfg                : 2;  /**< [ 17: 16](R/W) Backpressure weight. For diagnostic use only.
                                                                 Internal:
                                                                 There are 2 backpressure configuration bits per enable, with the two bits
                                                                 defined as 0x0=100% of the time, 0x1=75% of the time, 0x2=50% of the time,
                                                                 0x3=25% of the time.
                                                                    \<17:16\> = Config 0.

                                                                  When using 0x0, the constant backpressure means the testbench must toggle the
                                                                  corresponding [ENABLE] bit to keep traffic flowing. */
        uint64_t reserved_18_47        : 30;
        uint64_t enable                : 1;  /**< [ 48: 48](R/W) Enable test mode. For diagnostic use only.
                                                                 Internal:
                                                                 Once a bit is set, random backpressure is generated
                                                                 at the corresponding point to allow for more frequent backpressure.
                                                                 \<48\> = Stop sending X2P requests from HIL-RX to HOST. */
        uint64_t reserved_49_63        : 15;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_mcsx_hil_x2p_req_bp_test_s cn; */
};
typedef union cavm_mcsx_hil_x2p_req_bp_test cavm_mcsx_hil_x2p_req_bp_test_t;

static inline uint64_t CAVM_MCSX_HIL_X2P_REQ_BP_TEST(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_MCSX_HIL_X2P_REQ_BP_TEST(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CNF10KB) && (a<=6))
        return 0x87e0800a0018ll + 0x1000000ll * ((a) & 0x7);
    __cavm_csr_fatal("MCSX_HIL_X2P_REQ_BP_TEST", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_MCSX_HIL_X2P_REQ_BP_TEST(a) cavm_mcsx_hil_x2p_req_bp_test_t
#define bustype_CAVM_MCSX_HIL_X2P_REQ_BP_TEST(a) CSR_TYPE_RSL
#define basename_CAVM_MCSX_HIL_X2P_REQ_BP_TEST(a) "MCSX_HIL_X2P_REQ_BP_TEST"
#define device_bar_CAVM_MCSX_HIL_X2P_REQ_BP_TEST(a) 0x0 /* PF_BAR0 */
#define busnum_CAVM_MCSX_HIL_X2P_REQ_BP_TEST(a) (a)
#define arguments_CAVM_MCSX_HIL_X2P_REQ_BP_TEST(a) (a),-1,-1,-1

/**
 * Register (RSL) mcs#_ip_clk_active_pc
 *
 * MCS sclk Domain ACTIVE PC Register
 * Counts the conditional clocks for IP under netclk domain for power management.
 */
union cavm_mcsx_ip_clk_active_pc
{
    uint64_t u;
    struct cavm_mcsx_ip_clk_active_pc_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t cnt                   : 64; /**< [ 63:  0](R/W/H) Count conditional clock cycles after reset for netclk domain. */
#else /* Word 0 - Little Endian */
        uint64_t cnt                   : 64; /**< [ 63:  0](R/W/H) Count conditional clock cycles after reset for netclk domain. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_mcsx_ip_clk_active_pc_s cn; */
};
typedef union cavm_mcsx_ip_clk_active_pc cavm_mcsx_ip_clk_active_pc_t;

static inline uint64_t CAVM_MCSX_IP_CLK_ACTIVE_PC(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_MCSX_IP_CLK_ACTIVE_PC(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CNF10KB) && (a<=6))
        return 0x87e0800600b8ll + 0x1000000ll * ((a) & 0x7);
    __cavm_csr_fatal("MCSX_IP_CLK_ACTIVE_PC", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_MCSX_IP_CLK_ACTIVE_PC(a) cavm_mcsx_ip_clk_active_pc_t
#define bustype_CAVM_MCSX_IP_CLK_ACTIVE_PC(a) CSR_TYPE_RSL
#define basename_CAVM_MCSX_IP_CLK_ACTIVE_PC(a) "MCSX_IP_CLK_ACTIVE_PC"
#define device_bar_CAVM_MCSX_IP_CLK_ACTIVE_PC(a) 0x0 /* PF_BAR0 */
#define busnum_CAVM_MCSX_IP_CLK_ACTIVE_PC(a) (a)
#define arguments_CAVM_MCSX_IP_CLK_ACTIVE_PC(a) (a),-1,-1,-1

/**
 * Register (RSL) mcs#_ip_int
 *
 * MCS IP Interrupt Register
 * Contains the various interrupt bits of the MCS IP.
 */
union cavm_mcsx_ip_int
{
    uint64_t u;
    struct cavm_mcsx_ip_int_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_1_63         : 63;
        uint64_t mcs_ip_int_apb        : 1;  /**< [  0:  0](R/W1C/H) MCS_IP interrupts. */
#else /* Word 0 - Little Endian */
        uint64_t mcs_ip_int_apb        : 1;  /**< [  0:  0](R/W1C/H) MCS_IP interrupts. */
        uint64_t reserved_1_63         : 63;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_mcsx_ip_int_s cn; */
};
typedef union cavm_mcsx_ip_int cavm_mcsx_ip_int_t;

static inline uint64_t CAVM_MCSX_IP_INT(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_MCSX_IP_INT(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CNF10KB) && (a<=6))
        return 0x87e080060028ll + 0x1000000ll * ((a) & 0x7);
    __cavm_csr_fatal("MCSX_IP_INT", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_MCSX_IP_INT(a) cavm_mcsx_ip_int_t
#define bustype_CAVM_MCSX_IP_INT(a) CSR_TYPE_RSL
#define basename_CAVM_MCSX_IP_INT(a) "MCSX_IP_INT"
#define device_bar_CAVM_MCSX_IP_INT(a) 0x0 /* PF_BAR0 */
#define busnum_CAVM_MCSX_IP_INT(a) (a)
#define arguments_CAVM_MCSX_IP_INT(a) (a),-1,-1,-1

/**
 * Register (RSL) mcs#_ip_int_ena_w1c
 *
 * MCS IP TX Interrupt Enable Clear Register
 * This register clears interrupt enable bits.
 */
union cavm_mcsx_ip_int_ena_w1c
{
    uint64_t u;
    struct cavm_mcsx_ip_int_ena_w1c_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_1_63         : 63;
        uint64_t mcs_ip_int_apb        : 1;  /**< [  0:  0](R/W1C/H) Reads or clears enable for MCS(0..6)_IP_INT[MCS_IP_INT_APB]. */
#else /* Word 0 - Little Endian */
        uint64_t mcs_ip_int_apb        : 1;  /**< [  0:  0](R/W1C/H) Reads or clears enable for MCS(0..6)_IP_INT[MCS_IP_INT_APB]. */
        uint64_t reserved_1_63         : 63;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_mcsx_ip_int_ena_w1c_s cn; */
};
typedef union cavm_mcsx_ip_int_ena_w1c cavm_mcsx_ip_int_ena_w1c_t;

static inline uint64_t CAVM_MCSX_IP_INT_ENA_W1C(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_MCSX_IP_INT_ENA_W1C(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CNF10KB) && (a<=6))
        return 0x87e080060038ll + 0x1000000ll * ((a) & 0x7);
    __cavm_csr_fatal("MCSX_IP_INT_ENA_W1C", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_MCSX_IP_INT_ENA_W1C(a) cavm_mcsx_ip_int_ena_w1c_t
#define bustype_CAVM_MCSX_IP_INT_ENA_W1C(a) CSR_TYPE_RSL
#define basename_CAVM_MCSX_IP_INT_ENA_W1C(a) "MCSX_IP_INT_ENA_W1C"
#define device_bar_CAVM_MCSX_IP_INT_ENA_W1C(a) 0x0 /* PF_BAR0 */
#define busnum_CAVM_MCSX_IP_INT_ENA_W1C(a) (a)
#define arguments_CAVM_MCSX_IP_INT_ENA_W1C(a) (a),-1,-1,-1

/**
 * Register (RSL) mcs#_ip_int_ena_w1s
 *
 * MCS IP TX Interrupt Enable Set Register
 * This register sets interrupt enable bits.
 */
union cavm_mcsx_ip_int_ena_w1s
{
    uint64_t u;
    struct cavm_mcsx_ip_int_ena_w1s_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_1_63         : 63;
        uint64_t mcs_ip_int_apb        : 1;  /**< [  0:  0](R/W1S/H) Reads or sets enable for MCS(0..6)_IP_INT[MCS_IP_INT_APB]. */
#else /* Word 0 - Little Endian */
        uint64_t mcs_ip_int_apb        : 1;  /**< [  0:  0](R/W1S/H) Reads or sets enable for MCS(0..6)_IP_INT[MCS_IP_INT_APB]. */
        uint64_t reserved_1_63         : 63;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_mcsx_ip_int_ena_w1s_s cn; */
};
typedef union cavm_mcsx_ip_int_ena_w1s cavm_mcsx_ip_int_ena_w1s_t;

static inline uint64_t CAVM_MCSX_IP_INT_ENA_W1S(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_MCSX_IP_INT_ENA_W1S(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CNF10KB) && (a<=6))
        return 0x87e080060040ll + 0x1000000ll * ((a) & 0x7);
    __cavm_csr_fatal("MCSX_IP_INT_ENA_W1S", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_MCSX_IP_INT_ENA_W1S(a) cavm_mcsx_ip_int_ena_w1s_t
#define bustype_CAVM_MCSX_IP_INT_ENA_W1S(a) CSR_TYPE_RSL
#define basename_CAVM_MCSX_IP_INT_ENA_W1S(a) "MCSX_IP_INT_ENA_W1S"
#define device_bar_CAVM_MCSX_IP_INT_ENA_W1S(a) 0x0 /* PF_BAR0 */
#define busnum_CAVM_MCSX_IP_INT_ENA_W1S(a) (a)
#define arguments_CAVM_MCSX_IP_INT_ENA_W1S(a) (a),-1,-1,-1

/**
 * Register (RSL) mcs#_ip_int_w1s
 *
 * MCS IP TX Interrupt Set Register
 * This register sets interrupt bits.
 */
union cavm_mcsx_ip_int_w1s
{
    uint64_t u;
    struct cavm_mcsx_ip_int_w1s_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_1_63         : 63;
        uint64_t mcs_ip_int_apb        : 1;  /**< [  0:  0](R/W1S/H) Reads or sets MCS(0..6)_IP_INT[MCS_IP_INT_APB]. */
#else /* Word 0 - Little Endian */
        uint64_t mcs_ip_int_apb        : 1;  /**< [  0:  0](R/W1S/H) Reads or sets MCS(0..6)_IP_INT[MCS_IP_INT_APB]. */
        uint64_t reserved_1_63         : 63;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_mcsx_ip_int_w1s_s cn; */
};
typedef union cavm_mcsx_ip_int_w1s cavm_mcsx_ip_int_w1s_t;

static inline uint64_t CAVM_MCSX_IP_INT_W1S(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_MCSX_IP_INT_W1S(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CNF10KB) && (a<=6))
        return 0x87e080060030ll + 0x1000000ll * ((a) & 0x7);
    __cavm_csr_fatal("MCSX_IP_INT_W1S", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_MCSX_IP_INT_W1S(a) cavm_mcsx_ip_int_w1s_t
#define bustype_CAVM_MCSX_IP_INT_W1S(a) CSR_TYPE_RSL
#define basename_CAVM_MCSX_IP_INT_W1S(a) "MCSX_IP_INT_W1S"
#define device_bar_CAVM_MCSX_IP_INT_W1S(a) 0x0 /* PF_BAR0 */
#define busnum_CAVM_MCSX_IP_INT_W1S(a) (a)
#define arguments_CAVM_MCSX_IP_INT_W1S(a) (a),-1,-1,-1

/**
 * Register (RSL) mcs#_link_lmac#_cfg
 *
 * MCS Programmable Link Channel Number Array Registers
 * Programmable link channel number per LMAC.
 */
union cavm_mcsx_link_lmacx_cfg
{
    uint64_t u;
    struct cavm_mcsx_link_lmacx_cfg_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_20_63        : 44;
        uint64_t log2_range            : 4;  /**< [ 19: 16](R/W) Range is 2^LOG2_RANGE , 0 means that link isn't valid. */
        uint64_t reserved_12_15        : 4;
        uint64_t base_chan             : 12; /**< [ 11:  0](R/W) Base channel number, Must be a multiple of the range, i.e. log2_range default
                                                                 value is 4, then BASE_CHAN 4 lsbs must be 0.
                                                                 MSBs (12-LOG2_RANGE) of BASE_CHAN are compared to P2X.chan/X2P.pnum, if there's
                                                                 a match then MCS LMAC_ID is set according to matching register number.
                                                                 In case of no match or match to more than a single lmac, packet is dropped and
                                                                 interrupt is triggered.
                                                                 Reset value is {4'ha,4'h{LMAC_ID},4'h0}. */
#else /* Word 0 - Little Endian */
        uint64_t base_chan             : 12; /**< [ 11:  0](R/W) Base channel number, Must be a multiple of the range, i.e. log2_range default
                                                                 value is 4, then BASE_CHAN 4 lsbs must be 0.
                                                                 MSBs (12-LOG2_RANGE) of BASE_CHAN are compared to P2X.chan/X2P.pnum, if there's
                                                                 a match then MCS LMAC_ID is set according to matching register number.
                                                                 In case of no match or match to more than a single lmac, packet is dropped and
                                                                 interrupt is triggered.
                                                                 Reset value is {4'ha,4'h{LMAC_ID},4'h0}. */
        uint64_t reserved_12_15        : 4;
        uint64_t log2_range            : 4;  /**< [ 19: 16](R/W) Range is 2^LOG2_RANGE , 0 means that link isn't valid. */
        uint64_t reserved_20_63        : 44;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_mcsx_link_lmacx_cfg_s cn; */
};
typedef union cavm_mcsx_link_lmacx_cfg cavm_mcsx_link_lmacx_cfg_t;

static inline uint64_t CAVM_MCSX_LINK_LMACX_CFG(uint64_t a, uint64_t b) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_MCSX_LINK_LMACX_CFG(uint64_t a, uint64_t b)
{
    if (cavm_is_model(OCTEONTX_CNF10KB) && ((a<=6) && (b<=3)))
        return 0x87e080070000ll + 0x1000000ll * ((a) & 0x7) + 0x800ll * ((b) & 0x3);
    __cavm_csr_fatal("MCSX_LINK_LMACX_CFG", 2, a, b, 0, 0, 0, 0);
}

#define typedef_CAVM_MCSX_LINK_LMACX_CFG(a,b) cavm_mcsx_link_lmacx_cfg_t
#define bustype_CAVM_MCSX_LINK_LMACX_CFG(a,b) CSR_TYPE_RSL
#define basename_CAVM_MCSX_LINK_LMACX_CFG(a,b) "MCSX_LINK_LMACX_CFG"
#define device_bar_CAVM_MCSX_LINK_LMACX_CFG(a,b) 0x0 /* PF_BAR0 */
#define busnum_CAVM_MCSX_LINK_LMACX_CFG(a,b) (a)
#define arguments_CAVM_MCSX_LINK_LMACX_CFG(a,b) (a),(b),-1,-1

/**
 * Register (RSL) mcs#_mcs_top_slave_channel_config#
 *
 * MCS Mcs Top Slave Channel Config Register
 * Per Channel Config
 */
union cavm_mcsx_mcs_top_slave_channel_configx
{
    uint64_t u;
    struct cavm_mcsx_mcs_top_slave_channel_configx_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_1_63         : 63;
        uint64_t ch_bypass             : 1;  /**< [  0:  0](R/W) Per channel bypass indication. When set, packets in the channel are not parsed and extracted */
#else /* Word 0 - Little Endian */
        uint64_t ch_bypass             : 1;  /**< [  0:  0](R/W) Per channel bypass indication. When set, packets in the channel are not parsed and extracted */
        uint64_t reserved_1_63         : 63;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_mcsx_mcs_top_slave_channel_configx_s cn; */
};
typedef union cavm_mcsx_mcs_top_slave_channel_configx cavm_mcsx_mcs_top_slave_channel_configx_t;

static inline uint64_t CAVM_MCSX_MCS_TOP_SLAVE_CHANNEL_CONFIGX(uint64_t a, uint64_t b) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_MCSX_MCS_TOP_SLAVE_CHANNEL_CONFIGX(uint64_t a, uint64_t b)
{
    if (cavm_is_model(OCTEONTX_CNF10KB) && ((a<=6) && (b<=7)))
        return 0x87e080000a68ll + 0x1000000ll * ((a) & 0x7) + 8ll * ((b) & 0x7);
    __cavm_csr_fatal("MCSX_MCS_TOP_SLAVE_CHANNEL_CONFIGX", 2, a, b, 0, 0, 0, 0);
}

#define typedef_CAVM_MCSX_MCS_TOP_SLAVE_CHANNEL_CONFIGX(a,b) cavm_mcsx_mcs_top_slave_channel_configx_t
#define bustype_CAVM_MCSX_MCS_TOP_SLAVE_CHANNEL_CONFIGX(a,b) CSR_TYPE_RSL
#define basename_CAVM_MCSX_MCS_TOP_SLAVE_CHANNEL_CONFIGX(a,b) "MCSX_MCS_TOP_SLAVE_CHANNEL_CONFIGX"
#define device_bar_CAVM_MCSX_MCS_TOP_SLAVE_CHANNEL_CONFIGX(a,b) 0x0 /* PF_BAR0 */
#define busnum_CAVM_MCSX_MCS_TOP_SLAVE_CHANNEL_CONFIGX(a,b) (a)
#define arguments_CAVM_MCSX_MCS_TOP_SLAVE_CHANNEL_CONFIGX(a,b) (a),(b),-1,-1

/**
 * Register (RSL) mcs#_mcs_top_slave_dbg_mux_sel
 *
 * MCS Mcs Top Slave Dbg Mux Sel Register
 * Per segment mux control for the debug_mux.  Configuration of this register will
 * affect which block outputs its debug set on the corresponding debug mux segment.
 * 0 - RX PEX, 1 - RX CPM, 2 - RX BBE, 3 - RX GAE, 4 - RX PAB, 5 - RX CSE, 6 - TX PEX,
 * 7 - TX CPM, 8 - TX BBE, 9 - TX GAE, 10 - TX PAB, 11 - TX CSE
 */
union cavm_mcsx_mcs_top_slave_dbg_mux_sel
{
    uint64_t u;
    struct cavm_mcsx_mcs_top_slave_dbg_mux_sel_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_32_63        : 32;
        uint64_t en                    : 1;  /**< [ 31: 31](R/W) Enables debug logic. */
        uint64_t reserved_28_30        : 3;
        uint64_t seg3                  : 4;  /**< [ 27: 24](R/W) Selects which block outputs its debug set on segment3 of the top-level debug mux. */
        uint64_t reserved_20_23        : 4;
        uint64_t seg2                  : 4;  /**< [ 19: 16](R/W) Selects which block outputs its debug set on segment2 of the top-level debug mux. */
        uint64_t reserved_12_15        : 4;
        uint64_t seg1                  : 4;  /**< [ 11:  8](R/W) Selects which block outputs its debug set on segment1 of the top-level debug mux. */
        uint64_t reserved_4_7          : 4;
        uint64_t seg0                  : 4;  /**< [  3:  0](R/W) Selects which block outputs its debug set on segment0 of the top-level debug mux. */
#else /* Word 0 - Little Endian */
        uint64_t seg0                  : 4;  /**< [  3:  0](R/W) Selects which block outputs its debug set on segment0 of the top-level debug mux. */
        uint64_t reserved_4_7          : 4;
        uint64_t seg1                  : 4;  /**< [ 11:  8](R/W) Selects which block outputs its debug set on segment1 of the top-level debug mux. */
        uint64_t reserved_12_15        : 4;
        uint64_t seg2                  : 4;  /**< [ 19: 16](R/W) Selects which block outputs its debug set on segment2 of the top-level debug mux. */
        uint64_t reserved_20_23        : 4;
        uint64_t seg3                  : 4;  /**< [ 27: 24](R/W) Selects which block outputs its debug set on segment3 of the top-level debug mux. */
        uint64_t reserved_28_30        : 3;
        uint64_t en                    : 1;  /**< [ 31: 31](R/W) Enables debug logic. */
        uint64_t reserved_32_63        : 32;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_mcsx_mcs_top_slave_dbg_mux_sel_s cn; */
};
typedef union cavm_mcsx_mcs_top_slave_dbg_mux_sel cavm_mcsx_mcs_top_slave_dbg_mux_sel_t;

static inline uint64_t CAVM_MCSX_MCS_TOP_SLAVE_DBG_MUX_SEL(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_MCSX_MCS_TOP_SLAVE_DBG_MUX_SEL(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CNF10KB) && (a<=6))
        return 0x87e080000ab0ll + 0x1000000ll * ((a) & 0x7);
    __cavm_csr_fatal("MCSX_MCS_TOP_SLAVE_DBG_MUX_SEL", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_MCSX_MCS_TOP_SLAVE_DBG_MUX_SEL(a) cavm_mcsx_mcs_top_slave_dbg_mux_sel_t
#define bustype_CAVM_MCSX_MCS_TOP_SLAVE_DBG_MUX_SEL(a) CSR_TYPE_RSL
#define basename_CAVM_MCSX_MCS_TOP_SLAVE_DBG_MUX_SEL(a) "MCSX_MCS_TOP_SLAVE_DBG_MUX_SEL"
#define device_bar_CAVM_MCSX_MCS_TOP_SLAVE_DBG_MUX_SEL(a) 0x0 /* PF_BAR0 */
#define busnum_CAVM_MCSX_MCS_TOP_SLAVE_DBG_MUX_SEL(a) (a)
#define arguments_CAVM_MCSX_MCS_TOP_SLAVE_DBG_MUX_SEL(a) (a),-1,-1,-1

/**
 * Register (RSL) mcs#_mcs_top_slave_mcs_top_slave_int_sum
 *
 * MCS Mcs Top Slave Mcs Top Slave Int Sum Register
 * Mcs_top_slave interrupt summary
 */
union cavm_mcsx_mcs_top_slave_mcs_top_slave_int_sum
{
    uint64_t u;
    struct cavm_mcsx_mcs_top_slave_mcs_top_slave_int_sum_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_6_63         : 58;
        uint64_t pab_slave_interrupt   : 2;  /**< [  5:  4](RO) This bit is set to '1' whenever pab_slave has an interrupt */
        uint64_t cpm_tx_slave_interrupt : 1; /**< [  3:  3](RO) This bit is set to '1' whenever cpm_tx_slave has an interrupt */
        uint64_t cpm_rx_slave_interrupt : 1; /**< [  2:  2](RO) This bit is set to '1' whenever cpm_rx_slave has an interrupt */
        uint64_t bbe_slave_interrupt   : 2;  /**< [  1:  0](RO) This bit is set to '1' whenever bbe_slave has an interrupt */
#else /* Word 0 - Little Endian */
        uint64_t bbe_slave_interrupt   : 2;  /**< [  1:  0](RO) This bit is set to '1' whenever bbe_slave has an interrupt */
        uint64_t cpm_rx_slave_interrupt : 1; /**< [  2:  2](RO) This bit is set to '1' whenever cpm_rx_slave has an interrupt */
        uint64_t cpm_tx_slave_interrupt : 1; /**< [  3:  3](RO) This bit is set to '1' whenever cpm_tx_slave has an interrupt */
        uint64_t pab_slave_interrupt   : 2;  /**< [  5:  4](RO) This bit is set to '1' whenever pab_slave has an interrupt */
        uint64_t reserved_6_63         : 58;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_mcsx_mcs_top_slave_mcs_top_slave_int_sum_s cn; */
};
typedef union cavm_mcsx_mcs_top_slave_mcs_top_slave_int_sum cavm_mcsx_mcs_top_slave_mcs_top_slave_int_sum_t;

static inline uint64_t CAVM_MCSX_MCS_TOP_SLAVE_MCS_TOP_SLAVE_INT_SUM(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_MCSX_MCS_TOP_SLAVE_MCS_TOP_SLAVE_INT_SUM(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CNF10KB) && (a<=6))
        return 0x87e080000ab8ll + 0x1000000ll * ((a) & 0x7);
    __cavm_csr_fatal("MCSX_MCS_TOP_SLAVE_MCS_TOP_SLAVE_INT_SUM", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_MCSX_MCS_TOP_SLAVE_MCS_TOP_SLAVE_INT_SUM(a) cavm_mcsx_mcs_top_slave_mcs_top_slave_int_sum_t
#define bustype_CAVM_MCSX_MCS_TOP_SLAVE_MCS_TOP_SLAVE_INT_SUM(a) CSR_TYPE_RSL
#define basename_CAVM_MCSX_MCS_TOP_SLAVE_MCS_TOP_SLAVE_INT_SUM(a) "MCSX_MCS_TOP_SLAVE_MCS_TOP_SLAVE_INT_SUM"
#define device_bar_CAVM_MCSX_MCS_TOP_SLAVE_MCS_TOP_SLAVE_INT_SUM(a) 0x0 /* PF_BAR0 */
#define busnum_CAVM_MCSX_MCS_TOP_SLAVE_MCS_TOP_SLAVE_INT_SUM(a) (a)
#define arguments_CAVM_MCSX_MCS_TOP_SLAVE_MCS_TOP_SLAVE_INT_SUM(a) (a),-1,-1,-1

/**
 * Register (RSL) mcs#_mcs_top_slave_mcs_top_slave_int_sum_enb
 *
 * MCS Mcs Top Slave Mcs Top Slave Int Sum Enb Register
 * ENB register for mcs_top_slave_int_sum
 */
union cavm_mcsx_mcs_top_slave_mcs_top_slave_int_sum_enb
{
    uint64_t u;
    struct cavm_mcsx_mcs_top_slave_mcs_top_slave_int_sum_enb_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_6_63         : 58;
        uint64_t pab_slave_interrupt_enb : 2;/**< [  5:  4](R/W) This bit is set to '1' whenever pab_slave has an interrupt */
        uint64_t cpm_tx_slave_interrupt_enb : 1;/**< [  3:  3](R/W) This bit is set to '1' whenever cpm_tx_slave has an interrupt */
        uint64_t cpm_rx_slave_interrupt_enb : 1;/**< [  2:  2](R/W) This bit is set to '1' whenever cpm_rx_slave has an interrupt */
        uint64_t bbe_slave_interrupt_enb : 2;/**< [  1:  0](R/W) This bit is set to '1' whenever bbe_slave has an interrupt */
#else /* Word 0 - Little Endian */
        uint64_t bbe_slave_interrupt_enb : 2;/**< [  1:  0](R/W) This bit is set to '1' whenever bbe_slave has an interrupt */
        uint64_t cpm_rx_slave_interrupt_enb : 1;/**< [  2:  2](R/W) This bit is set to '1' whenever cpm_rx_slave has an interrupt */
        uint64_t cpm_tx_slave_interrupt_enb : 1;/**< [  3:  3](R/W) This bit is set to '1' whenever cpm_tx_slave has an interrupt */
        uint64_t pab_slave_interrupt_enb : 2;/**< [  5:  4](R/W) This bit is set to '1' whenever pab_slave has an interrupt */
        uint64_t reserved_6_63         : 58;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_mcsx_mcs_top_slave_mcs_top_slave_int_sum_enb_s cn; */
};
typedef union cavm_mcsx_mcs_top_slave_mcs_top_slave_int_sum_enb cavm_mcsx_mcs_top_slave_mcs_top_slave_int_sum_enb_t;

static inline uint64_t CAVM_MCSX_MCS_TOP_SLAVE_MCS_TOP_SLAVE_INT_SUM_ENB(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_MCSX_MCS_TOP_SLAVE_MCS_TOP_SLAVE_INT_SUM_ENB(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CNF10KB) && (a<=6))
        return 0x87e080000ac0ll + 0x1000000ll * ((a) & 0x7);
    __cavm_csr_fatal("MCSX_MCS_TOP_SLAVE_MCS_TOP_SLAVE_INT_SUM_ENB", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_MCSX_MCS_TOP_SLAVE_MCS_TOP_SLAVE_INT_SUM_ENB(a) cavm_mcsx_mcs_top_slave_mcs_top_slave_int_sum_enb_t
#define bustype_CAVM_MCSX_MCS_TOP_SLAVE_MCS_TOP_SLAVE_INT_SUM_ENB(a) CSR_TYPE_RSL
#define basename_CAVM_MCSX_MCS_TOP_SLAVE_MCS_TOP_SLAVE_INT_SUM_ENB(a) "MCSX_MCS_TOP_SLAVE_MCS_TOP_SLAVE_INT_SUM_ENB"
#define device_bar_CAVM_MCSX_MCS_TOP_SLAVE_MCS_TOP_SLAVE_INT_SUM_ENB(a) 0x0 /* PF_BAR0 */
#define busnum_CAVM_MCSX_MCS_TOP_SLAVE_MCS_TOP_SLAVE_INT_SUM_ENB(a) (a)
#define arguments_CAVM_MCSX_MCS_TOP_SLAVE_MCS_TOP_SLAVE_INT_SUM_ENB(a) (a),-1,-1,-1

/**
 * Register (RSL) mcs#_mcs_top_slave_mcs_top_slave_int_sum_intr_rw
 *
 * MCS Mcs Top Slave Mcs Top Slave Int Sum Intr Rw Register
 * Read/write register for mcs_top_slave_int_sum
 */
union cavm_mcsx_mcs_top_slave_mcs_top_slave_int_sum_intr_rw
{
    uint64_t u;
    struct cavm_mcsx_mcs_top_slave_mcs_top_slave_int_sum_intr_rw_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_6_63         : 58;
        uint64_t pab_slave_interrupt   : 2;  /**< [  5:  4](R/W) This bit is set to '1' whenever pab_slave has an interrupt */
        uint64_t cpm_tx_slave_interrupt : 1; /**< [  3:  3](R/W) This bit is set to '1' whenever cpm_tx_slave has an interrupt */
        uint64_t cpm_rx_slave_interrupt : 1; /**< [  2:  2](R/W) This bit is set to '1' whenever cpm_rx_slave has an interrupt */
        uint64_t bbe_slave_interrupt   : 2;  /**< [  1:  0](R/W) This bit is set to '1' whenever bbe_slave has an interrupt */
#else /* Word 0 - Little Endian */
        uint64_t bbe_slave_interrupt   : 2;  /**< [  1:  0](R/W) This bit is set to '1' whenever bbe_slave has an interrupt */
        uint64_t cpm_rx_slave_interrupt : 1; /**< [  2:  2](R/W) This bit is set to '1' whenever cpm_rx_slave has an interrupt */
        uint64_t cpm_tx_slave_interrupt : 1; /**< [  3:  3](R/W) This bit is set to '1' whenever cpm_tx_slave has an interrupt */
        uint64_t pab_slave_interrupt   : 2;  /**< [  5:  4](R/W) This bit is set to '1' whenever pab_slave has an interrupt */
        uint64_t reserved_6_63         : 58;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_mcsx_mcs_top_slave_mcs_top_slave_int_sum_intr_rw_s cn; */
};
typedef union cavm_mcsx_mcs_top_slave_mcs_top_slave_int_sum_intr_rw cavm_mcsx_mcs_top_slave_mcs_top_slave_int_sum_intr_rw_t;

static inline uint64_t CAVM_MCSX_MCS_TOP_SLAVE_MCS_TOP_SLAVE_INT_SUM_INTR_RW(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_MCSX_MCS_TOP_SLAVE_MCS_TOP_SLAVE_INT_SUM_INTR_RW(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CNF10KB) && (a<=6))
        return 0x87e080000ad0ll + 0x1000000ll * ((a) & 0x7);
    __cavm_csr_fatal("MCSX_MCS_TOP_SLAVE_MCS_TOP_SLAVE_INT_SUM_INTR_RW", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_MCSX_MCS_TOP_SLAVE_MCS_TOP_SLAVE_INT_SUM_INTR_RW(a) cavm_mcsx_mcs_top_slave_mcs_top_slave_int_sum_intr_rw_t
#define bustype_CAVM_MCSX_MCS_TOP_SLAVE_MCS_TOP_SLAVE_INT_SUM_INTR_RW(a) CSR_TYPE_RSL
#define basename_CAVM_MCSX_MCS_TOP_SLAVE_MCS_TOP_SLAVE_INT_SUM_INTR_RW(a) "MCSX_MCS_TOP_SLAVE_MCS_TOP_SLAVE_INT_SUM_INTR_RW"
#define device_bar_CAVM_MCSX_MCS_TOP_SLAVE_MCS_TOP_SLAVE_INT_SUM_INTR_RW(a) 0x0 /* PF_BAR0 */
#define busnum_CAVM_MCSX_MCS_TOP_SLAVE_MCS_TOP_SLAVE_INT_SUM_INTR_RW(a) (a)
#define arguments_CAVM_MCSX_MCS_TOP_SLAVE_MCS_TOP_SLAVE_INT_SUM_INTR_RW(a) (a),-1,-1,-1

/**
 * Register (RSL) mcs#_mcs_top_slave_mcs_top_slave_int_sum_raw
 *
 * MCS Mcs Top Slave Mcs Top Slave Int Sum Raw Register
 * Raw register for mcs_top_slave_int_sum
 */
union cavm_mcsx_mcs_top_slave_mcs_top_slave_int_sum_raw
{
    uint64_t u;
    struct cavm_mcsx_mcs_top_slave_mcs_top_slave_int_sum_raw_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_6_63         : 58;
        uint64_t pab_slave_interrupt   : 2;  /**< [  5:  4](RO) This bit is set to '1' whenever pab_slave has an interrupt */
        uint64_t cpm_tx_slave_interrupt : 1; /**< [  3:  3](RO) This bit is set to '1' whenever cpm_tx_slave has an interrupt */
        uint64_t cpm_rx_slave_interrupt : 1; /**< [  2:  2](RO) This bit is set to '1' whenever cpm_rx_slave has an interrupt */
        uint64_t bbe_slave_interrupt   : 2;  /**< [  1:  0](RO) This bit is set to '1' whenever bbe_slave has an interrupt */
#else /* Word 0 - Little Endian */
        uint64_t bbe_slave_interrupt   : 2;  /**< [  1:  0](RO) This bit is set to '1' whenever bbe_slave has an interrupt */
        uint64_t cpm_rx_slave_interrupt : 1; /**< [  2:  2](RO) This bit is set to '1' whenever cpm_rx_slave has an interrupt */
        uint64_t cpm_tx_slave_interrupt : 1; /**< [  3:  3](RO) This bit is set to '1' whenever cpm_tx_slave has an interrupt */
        uint64_t pab_slave_interrupt   : 2;  /**< [  5:  4](RO) This bit is set to '1' whenever pab_slave has an interrupt */
        uint64_t reserved_6_63         : 58;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_mcsx_mcs_top_slave_mcs_top_slave_int_sum_raw_s cn; */
};
typedef union cavm_mcsx_mcs_top_slave_mcs_top_slave_int_sum_raw cavm_mcsx_mcs_top_slave_mcs_top_slave_int_sum_raw_t;

static inline uint64_t CAVM_MCSX_MCS_TOP_SLAVE_MCS_TOP_SLAVE_INT_SUM_RAW(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_MCSX_MCS_TOP_SLAVE_MCS_TOP_SLAVE_INT_SUM_RAW(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CNF10KB) && (a<=6))
        return 0x87e080000ac8ll + 0x1000000ll * ((a) & 0x7);
    __cavm_csr_fatal("MCSX_MCS_TOP_SLAVE_MCS_TOP_SLAVE_INT_SUM_RAW", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_MCSX_MCS_TOP_SLAVE_MCS_TOP_SLAVE_INT_SUM_RAW(a) cavm_mcsx_mcs_top_slave_mcs_top_slave_int_sum_raw_t
#define bustype_CAVM_MCSX_MCS_TOP_SLAVE_MCS_TOP_SLAVE_INT_SUM_RAW(a) CSR_TYPE_RSL
#define basename_CAVM_MCSX_MCS_TOP_SLAVE_MCS_TOP_SLAVE_INT_SUM_RAW(a) "MCSX_MCS_TOP_SLAVE_MCS_TOP_SLAVE_INT_SUM_RAW"
#define device_bar_CAVM_MCSX_MCS_TOP_SLAVE_MCS_TOP_SLAVE_INT_SUM_RAW(a) 0x0 /* PF_BAR0 */
#define busnum_CAVM_MCSX_MCS_TOP_SLAVE_MCS_TOP_SLAVE_INT_SUM_RAW(a) (a)
#define arguments_CAVM_MCSX_MCS_TOP_SLAVE_MCS_TOP_SLAVE_INT_SUM_RAW(a) (a),-1,-1,-1

/**
 * Register (RSL) mcs#_mcs_top_slave_port_config#
 *
 * MCS Mcs Top Slave Port Config Register
 * Per Port Config
 */
union cavm_mcsx_mcs_top_slave_port_configx
{
    uint64_t u;
    struct cavm_mcsx_mcs_top_slave_port_configx_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_3_63         : 61;
        uint64_t parse_depth           : 3;  /**< [  2:  0](R/W) Number of packet header bytes to parse, expressed in units of 16 bytes (i.e., 1
                                                                 means 16 bytes, 2 means 32 bytes, etc.) and counted from the first byte on SOP
                                                                 (which means that, if there is an 8B custom header, then the latter is part of
                                                                 the parse_depth). Value of zero specifies 128 bytes. */
#else /* Word 0 - Little Endian */
        uint64_t parse_depth           : 3;  /**< [  2:  0](R/W) Number of packet header bytes to parse, expressed in units of 16 bytes (i.e., 1
                                                                 means 16 bytes, 2 means 32 bytes, etc.) and counted from the first byte on SOP
                                                                 (which means that, if there is an 8B custom header, then the latter is part of
                                                                 the parse_depth). Value of zero specifies 128 bytes. */
        uint64_t reserved_3_63         : 61;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_mcsx_mcs_top_slave_port_configx_s cn; */
};
typedef union cavm_mcsx_mcs_top_slave_port_configx cavm_mcsx_mcs_top_slave_port_configx_t;

static inline uint64_t CAVM_MCSX_MCS_TOP_SLAVE_PORT_CONFIGX(uint64_t a, uint64_t b) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_MCSX_MCS_TOP_SLAVE_PORT_CONFIGX(uint64_t a, uint64_t b)
{
    if (cavm_is_model(OCTEONTX_CNF10KB) && ((a<=6) && (b<=3)))
        return 0x87e080000a48ll + 0x1000000ll * ((a) & 0x7) + 8ll * ((b) & 0x3);
    __cavm_csr_fatal("MCSX_MCS_TOP_SLAVE_PORT_CONFIGX", 2, a, b, 0, 0, 0, 0);
}

#define typedef_CAVM_MCSX_MCS_TOP_SLAVE_PORT_CONFIGX(a,b) cavm_mcsx_mcs_top_slave_port_configx_t
#define bustype_CAVM_MCSX_MCS_TOP_SLAVE_PORT_CONFIGX(a,b) CSR_TYPE_RSL
#define basename_CAVM_MCSX_MCS_TOP_SLAVE_PORT_CONFIGX(a,b) "MCSX_MCS_TOP_SLAVE_PORT_CONFIGX"
#define device_bar_CAVM_MCSX_MCS_TOP_SLAVE_PORT_CONFIGX(a,b) 0x0 /* PF_BAR0 */
#define busnum_CAVM_MCSX_MCS_TOP_SLAVE_PORT_CONFIGX(a,b) (a)
#define arguments_CAVM_MCSX_MCS_TOP_SLAVE_PORT_CONFIGX(a,b) (a),(b),-1,-1

/**
 * Register (RSL) mcs#_mcs_top_slave_port_reset#
 *
 * MCS Mcs Top Slave Port Reset Register
 * RX Port Reset
 */
union cavm_mcsx_mcs_top_slave_port_resetx
{
    uint64_t u;
    struct cavm_mcsx_mcs_top_slave_port_resetx_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_1_63         : 63;
        uint64_t port_reset            : 1;  /**< [  0:  0](R/W) Write 1 to reset the corresponding port.  Note that Per-Port Reset is *NOT*
                                                                 operational in Tx with Full-packet mode (settings will be ignored in Tx). */
#else /* Word 0 - Little Endian */
        uint64_t port_reset            : 1;  /**< [  0:  0](R/W) Write 1 to reset the corresponding port.  Note that Per-Port Reset is *NOT*
                                                                 operational in Tx with Full-packet mode (settings will be ignored in Tx). */
        uint64_t reserved_1_63         : 63;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_mcsx_mcs_top_slave_port_resetx_s cn; */
};
typedef union cavm_mcsx_mcs_top_slave_port_resetx cavm_mcsx_mcs_top_slave_port_resetx_t;

static inline uint64_t CAVM_MCSX_MCS_TOP_SLAVE_PORT_RESETX(uint64_t a, uint64_t b) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_MCSX_MCS_TOP_SLAVE_PORT_RESETX(uint64_t a, uint64_t b)
{
    if (cavm_is_model(OCTEONTX_CNF10KB) && ((a<=6) && (b<=3)))
        return 0x87e080000a28ll + 0x1000000ll * ((a) & 0x7) + 8ll * ((b) & 0x3);
    __cavm_csr_fatal("MCSX_MCS_TOP_SLAVE_PORT_RESETX", 2, a, b, 0, 0, 0, 0);
}

#define typedef_CAVM_MCSX_MCS_TOP_SLAVE_PORT_RESETX(a,b) cavm_mcsx_mcs_top_slave_port_resetx_t
#define bustype_CAVM_MCSX_MCS_TOP_SLAVE_PORT_RESETX(a,b) CSR_TYPE_RSL
#define basename_CAVM_MCSX_MCS_TOP_SLAVE_PORT_RESETX(a,b) "MCSX_MCS_TOP_SLAVE_PORT_RESETX"
#define device_bar_CAVM_MCSX_MCS_TOP_SLAVE_PORT_RESETX(a,b) 0x0 /* PF_BAR0 */
#define busnum_CAVM_MCSX_MCS_TOP_SLAVE_PORT_RESETX(a,b) (a)
#define arguments_CAVM_MCSX_MCS_TOP_SLAVE_PORT_RESETX(a,b) (a),(b),-1,-1

/**
 * Register (RSL) mcs#_mcs_top_slave_scratch
 *
 * MCS Mcs Top Slave Scratch Register
 * Scratch register.  You can write and read to this register without affecting any
 * logic in the design.
 */
union cavm_mcsx_mcs_top_slave_scratch
{
    uint64_t u;
    struct cavm_mcsx_mcs_top_slave_scratch_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_32_63        : 32;
        uint64_t scratch               : 32; /**< [ 31:  0](R/W) Scratch register. */
#else /* Word 0 - Little Endian */
        uint64_t scratch               : 32; /**< [ 31:  0](R/W) Scratch register. */
        uint64_t reserved_32_63        : 32;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_mcsx_mcs_top_slave_scratch_s cn; */
};
typedef union cavm_mcsx_mcs_top_slave_scratch cavm_mcsx_mcs_top_slave_scratch_t;

static inline uint64_t CAVM_MCSX_MCS_TOP_SLAVE_SCRATCH(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_MCSX_MCS_TOP_SLAVE_SCRATCH(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CNF10KB) && (a<=6))
        return 0x87e080000aa8ll + 0x1000000ll * ((a) & 0x7);
    __cavm_csr_fatal("MCSX_MCS_TOP_SLAVE_SCRATCH", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_MCSX_MCS_TOP_SLAVE_SCRATCH(a) cavm_mcsx_mcs_top_slave_scratch_t
#define bustype_CAVM_MCSX_MCS_TOP_SLAVE_SCRATCH(a) CSR_TYPE_RSL
#define basename_CAVM_MCSX_MCS_TOP_SLAVE_SCRATCH(a) "MCSX_MCS_TOP_SLAVE_SCRATCH"
#define device_bar_CAVM_MCSX_MCS_TOP_SLAVE_SCRATCH(a) 0x0 /* PF_BAR0 */
#define busnum_CAVM_MCSX_MCS_TOP_SLAVE_SCRATCH(a) (a)
#define arguments_CAVM_MCSX_MCS_TOP_SLAVE_SCRATCH(a) (a),-1,-1,-1

/**
 * Register (RSL) mcs#_mcs_top_slave_version
 *
 * MCS Mcs Top Slave Version Register
 * RCE version
 */
union cavm_mcsx_mcs_top_slave_version
{
    uint64_t u;
    struct cavm_mcsx_mcs_top_slave_version_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_24_63        : 40;
        uint64_t patch                 : 8;  /**< [ 23: 16](RO) Missing register field description. */
        uint64_t minor                 : 8;  /**< [ 15:  8](RO) Missing register field description. */
        uint64_t major                 : 8;  /**< [  7:  0](RO) Missing register field description. */
#else /* Word 0 - Little Endian */
        uint64_t major                 : 8;  /**< [  7:  0](RO) Missing register field description. */
        uint64_t minor                 : 8;  /**< [ 15:  8](RO) Missing register field description. */
        uint64_t patch                 : 8;  /**< [ 23: 16](RO) Missing register field description. */
        uint64_t reserved_24_63        : 40;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_mcsx_mcs_top_slave_version_s cn; */
};
typedef union cavm_mcsx_mcs_top_slave_version cavm_mcsx_mcs_top_slave_version_t;

static inline uint64_t CAVM_MCSX_MCS_TOP_SLAVE_VERSION(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_MCSX_MCS_TOP_SLAVE_VERSION(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CNF10KB) && (a<=6))
        return 0x87e080000a20ll + 0x1000000ll * ((a) & 0x7);
    __cavm_csr_fatal("MCSX_MCS_TOP_SLAVE_VERSION", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_MCSX_MCS_TOP_SLAVE_VERSION(a) cavm_mcsx_mcs_top_slave_version_t
#define bustype_CAVM_MCSX_MCS_TOP_SLAVE_VERSION(a) CSR_TYPE_RSL
#define basename_CAVM_MCSX_MCS_TOP_SLAVE_VERSION(a) "MCSX_MCS_TOP_SLAVE_VERSION"
#define device_bar_CAVM_MCSX_MCS_TOP_SLAVE_VERSION(a) 0x0 /* PF_BAR0 */
#define busnum_CAVM_MCSX_MCS_TOP_SLAVE_VERSION(a) (a)
#define arguments_CAVM_MCSX_MCS_TOP_SLAVE_VERSION(a) (a),-1,-1,-1

/**
 * Register (RSL) mcs#_mil_global
 *
 * MIL Global Configurations Register
 */
union cavm_mcsx_mil_global
{
    uint64_t u;
    struct cavm_mcsx_mil_global_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_13_63        : 51;
        uint64_t pab_bp_latency        : 5;  /**< [ 12:  8](R/W) Reserved.
                                                                 Internal:
                                                                 PAB backpressure latency. Number of cycles from PAB BP input triggered to cease PAB out traffic.
                                                                 IP latency is 7 cycles, additional 1 cycle delay for sampling.
                                                                 Default value (0x9) includes 1 cycle for margin. */
        uint64_t soft_reset            : 1;  /**< [  7:  7](R/W) Reset MCS Datapath, no impact on CSR. */
        uint64_t external_bypass       : 1;  /**< [  6:  6](R/W) This is the very basic mode of MCS, functioning as a Clock Domain Cross block.
                                                                 MCS_IP is totally bypassed so there is no packet analysis or modification,
                                                                 except X2P filtering features (X2P protocol violation and SMALL_PACKET_DROP_EN)
                                                                 and dropped cycles due to channel mismatch to MCS_LINK_LMAC(0..3)_CFG registers. */
        uint64_t calibrate_x2p         : 1;  /**< [  5:  5](R/W) Calibrate X2P bus. Writing this bit from zero to one starts a calibration cycle MIL-MAC.
                                                                 Software may then monitor the MCS_MIL_RX_GBL_STATUS[CALIBRATE_DONE] bit for
                                                                 completion, and clear this bit. */
        uint64_t force_clk_en_ip       : 1;  /**< [  4:  4](R/W) Force clock enable for internal MCS_IP block. */
        uint64_t force_clk_en_sclk     : 1;  /**< [  3:  3](R/W) Force clock enable in sclk domain. */
        uint64_t force_clk_en_clk      : 1;  /**< [  2:  2](R/W) Force clock enable in netclk domain. */
        uint64_t x2p_clk_en            : 1;  /**< [  1:  1](R/W) Force clock enable in X2P channel flops. (X2P Data + Grant). */
        uint64_t p2x_clk_en            : 1;  /**< [  0:  0](R/W) Force clock enable in P2X channel flops. */
#else /* Word 0 - Little Endian */
        uint64_t p2x_clk_en            : 1;  /**< [  0:  0](R/W) Force clock enable in P2X channel flops. */
        uint64_t x2p_clk_en            : 1;  /**< [  1:  1](R/W) Force clock enable in X2P channel flops. (X2P Data + Grant). */
        uint64_t force_clk_en_clk      : 1;  /**< [  2:  2](R/W) Force clock enable in netclk domain. */
        uint64_t force_clk_en_sclk     : 1;  /**< [  3:  3](R/W) Force clock enable in sclk domain. */
        uint64_t force_clk_en_ip       : 1;  /**< [  4:  4](R/W) Force clock enable for internal MCS_IP block. */
        uint64_t calibrate_x2p         : 1;  /**< [  5:  5](R/W) Calibrate X2P bus. Writing this bit from zero to one starts a calibration cycle MIL-MAC.
                                                                 Software may then monitor the MCS_MIL_RX_GBL_STATUS[CALIBRATE_DONE] bit for
                                                                 completion, and clear this bit. */
        uint64_t external_bypass       : 1;  /**< [  6:  6](R/W) This is the very basic mode of MCS, functioning as a Clock Domain Cross block.
                                                                 MCS_IP is totally bypassed so there is no packet analysis or modification,
                                                                 except X2P filtering features (X2P protocol violation and SMALL_PACKET_DROP_EN)
                                                                 and dropped cycles due to channel mismatch to MCS_LINK_LMAC(0..3)_CFG registers. */
        uint64_t soft_reset            : 1;  /**< [  7:  7](R/W) Reset MCS Datapath, no impact on CSR. */
        uint64_t pab_bp_latency        : 5;  /**< [ 12:  8](R/W) Reserved.
                                                                 Internal:
                                                                 PAB backpressure latency. Number of cycles from PAB BP input triggered to cease PAB out traffic.
                                                                 IP latency is 7 cycles, additional 1 cycle delay for sampling.
                                                                 Default value (0x9) includes 1 cycle for margin. */
        uint64_t reserved_13_63        : 51;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_mcsx_mil_global_s cn; */
};
typedef union cavm_mcsx_mil_global cavm_mcsx_mil_global_t;

static inline uint64_t CAVM_MCSX_MIL_GLOBAL(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_MCSX_MIL_GLOBAL(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CNF10KB) && (a<=6))
        return 0x87e080060000ll + 0x1000000ll * ((a) & 0x7);
    __cavm_csr_fatal("MCSX_MIL_GLOBAL", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_MCSX_MIL_GLOBAL(a) cavm_mcsx_mil_global_t
#define bustype_CAVM_MCSX_MIL_GLOBAL(a) CSR_TYPE_RSL
#define basename_CAVM_MCSX_MIL_GLOBAL(a) "MCSX_MIL_GLOBAL"
#define device_bar_CAVM_MCSX_MIL_GLOBAL(a) 0x0 /* PF_BAR0 */
#define busnum_CAVM_MCSX_MIL_GLOBAL(a) (a)
#define arguments_CAVM_MCSX_MIL_GLOBAL(a) (a),-1,-1,-1

/**
 * Register (RSL) mcs#_mil_ip_cfg
 *
 * MCS IP Configuration Register
 * IP configurations
 */
union cavm_mcsx_mil_ip_cfg
{
    uint64_t u;
    struct cavm_mcsx_mil_ip_cfg_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_14_63        : 50;
        uint64_t ip_cnt_cfg            : 14; /**< [ 13:  0](R/W) Statistics countdown counter for MCS MIL IP GLOBAL STATUS.MCS_IP_STATS_READY mechanism. */
#else /* Word 0 - Little Endian */
        uint64_t ip_cnt_cfg            : 14; /**< [ 13:  0](R/W) Statistics countdown counter for MCS MIL IP GLOBAL STATUS.MCS_IP_STATS_READY mechanism. */
        uint64_t reserved_14_63        : 50;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_mcsx_mil_ip_cfg_s cn; */
};
typedef union cavm_mcsx_mil_ip_cfg cavm_mcsx_mil_ip_cfg_t;

static inline uint64_t CAVM_MCSX_MIL_IP_CFG(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_MCSX_MIL_IP_CFG(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CNF10KB) && (a<=6))
        return 0x87e0800600c0ll + 0x1000000ll * ((a) & 0x7);
    __cavm_csr_fatal("MCSX_MIL_IP_CFG", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_MCSX_MIL_IP_CFG(a) cavm_mcsx_mil_ip_cfg_t
#define bustype_CAVM_MCSX_MIL_IP_CFG(a) CSR_TYPE_RSL
#define basename_CAVM_MCSX_MIL_IP_CFG(a) "MCSX_MIL_IP_CFG"
#define device_bar_CAVM_MCSX_MIL_IP_CFG(a) 0x0 /* PF_BAR0 */
#define busnum_CAVM_MCSX_MIL_IP_CFG(a) (a)
#define arguments_CAVM_MCSX_MIL_IP_CFG(a) (a),-1,-1,-1

/**
 * Register (RSL) mcs#_mil_ip_gbl_status
 *
 * MCS MIL IP Status Register
 */
union cavm_mcsx_mil_ip_gbl_status
{
    uint64_t u;
    struct cavm_mcsx_mil_ip_gbl_status_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_3_63         : 61;
        uint64_t apb_bridge_sm         : 2;  /**< [  2:  1](RO/H) Reserved.
                                                                 Internal:
                                                                 APB bridge state machine. */
        uint64_t mcs_ip_stats_ready    : 1;  /**< [  0:  0](RO/H) Before SW reads statistics from IP:
                                                                 1.When MCS_MIL_GLOBAL.FORCE_CLK_EN_CLK is set, the IP statistics counter counts
                                                                 MCS_MIL_IP_CFG.IP_CNT_CFG.
                                                                 2.When done, this field is set to 1'b1 indicating IP statistics are valid and ready to be read. */
#else /* Word 0 - Little Endian */
        uint64_t mcs_ip_stats_ready    : 1;  /**< [  0:  0](RO/H) Before SW reads statistics from IP:
                                                                 1.When MCS_MIL_GLOBAL.FORCE_CLK_EN_CLK is set, the IP statistics counter counts
                                                                 MCS_MIL_IP_CFG.IP_CNT_CFG.
                                                                 2.When done, this field is set to 1'b1 indicating IP statistics are valid and ready to be read. */
        uint64_t apb_bridge_sm         : 2;  /**< [  2:  1](RO/H) Reserved.
                                                                 Internal:
                                                                 APB bridge state machine. */
        uint64_t reserved_3_63         : 61;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_mcsx_mil_ip_gbl_status_s cn; */
};
typedef union cavm_mcsx_mil_ip_gbl_status cavm_mcsx_mil_ip_gbl_status_t;

static inline uint64_t CAVM_MCSX_MIL_IP_GBL_STATUS(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_MCSX_MIL_IP_GBL_STATUS(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CNF10KB) && (a<=6))
        return 0x87e0800600d0ll + 0x1000000ll * ((a) & 0x7);
    __cavm_csr_fatal("MCSX_MIL_IP_GBL_STATUS", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_MCSX_MIL_IP_GBL_STATUS(a) cavm_mcsx_mil_ip_gbl_status_t
#define bustype_CAVM_MCSX_MIL_IP_GBL_STATUS(a) CSR_TYPE_RSL
#define basename_CAVM_MCSX_MIL_IP_GBL_STATUS(a) "MCSX_MIL_IP_GBL_STATUS"
#define device_bar_CAVM_MCSX_MIL_IP_GBL_STATUS(a) 0x0 /* PF_BAR0 */
#define busnum_CAVM_MCSX_MIL_IP_GBL_STATUS(a) (a)
#define arguments_CAVM_MCSX_MIL_IP_GBL_STATUS(a) (a),-1,-1,-1

/**
 * Register (RSL) mcs#_mil_rx_arb_lmac#_bp_test
 *
 * INTERNAL: MCS MIL RX Backpressure Test Register
 */
union cavm_mcsx_mil_rx_arb_lmacx_bp_test
{
    uint64_t u;
    struct cavm_mcsx_mil_rx_arb_lmacx_bp_test_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_49_63        : 15;
        uint64_t enable                : 1;  /**< [ 48: 48](R/W) Enable test mode. For diagnostic use only.
                                                                 Internal:
                                                                 Once a bit is set, random backpressure is generated
                                                                 at the corresponding point to allow for more frequent backpressure.
                                                                 \<48\> = Avoiding paritcipating in arbitration for poping data from SKID FIFO towards PEX. */
        uint64_t reserved_18_47        : 30;
        uint64_t bp_cfg                : 2;  /**< [ 17: 16](R/W) Backpressure weight. For diagnostic use only.
                                                                 Internal:
                                                                 There are 2 backpressure configuration bits per enable, with the two bits
                                                                 defined as 0x0=100% of the time, 0x1=75% of the time, 0x2=50% of the time,
                                                                 0x3=25% of the time.
                                                                    \<17:16\> = Config 0.

                                                                  When using 0x0, the constant backpressure means the testbench must toggle the
                                                                  corresponding [ENABLE] bit to keep traffic flowing. */
        uint64_t reserved_12_15        : 4;
        uint64_t lfsr_freq             : 12; /**< [ 11:  0](R/W) Test LFSR update frequency in coprocessor-clocks minus one. */
#else /* Word 0 - Little Endian */
        uint64_t lfsr_freq             : 12; /**< [ 11:  0](R/W) Test LFSR update frequency in coprocessor-clocks minus one. */
        uint64_t reserved_12_15        : 4;
        uint64_t bp_cfg                : 2;  /**< [ 17: 16](R/W) Backpressure weight. For diagnostic use only.
                                                                 Internal:
                                                                 There are 2 backpressure configuration bits per enable, with the two bits
                                                                 defined as 0x0=100% of the time, 0x1=75% of the time, 0x2=50% of the time,
                                                                 0x3=25% of the time.
                                                                    \<17:16\> = Config 0.

                                                                  When using 0x0, the constant backpressure means the testbench must toggle the
                                                                  corresponding [ENABLE] bit to keep traffic flowing. */
        uint64_t reserved_18_47        : 30;
        uint64_t enable                : 1;  /**< [ 48: 48](R/W) Enable test mode. For diagnostic use only.
                                                                 Internal:
                                                                 Once a bit is set, random backpressure is generated
                                                                 at the corresponding point to allow for more frequent backpressure.
                                                                 \<48\> = Avoiding paritcipating in arbitration for poping data from SKID FIFO towards PEX. */
        uint64_t reserved_49_63        : 15;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_mcsx_mil_rx_arb_lmacx_bp_test_s cn; */
};
typedef union cavm_mcsx_mil_rx_arb_lmacx_bp_test cavm_mcsx_mil_rx_arb_lmacx_bp_test_t;

static inline uint64_t CAVM_MCSX_MIL_RX_ARB_LMACX_BP_TEST(uint64_t a, uint64_t b) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_MCSX_MIL_RX_ARB_LMACX_BP_TEST(uint64_t a, uint64_t b)
{
    if (cavm_is_model(OCTEONTX_CNF10KB) && ((a<=6) && (b<=3)))
        return 0x87e080070018ll + 0x1000000ll * ((a) & 0x7) + 0x800ll * ((b) & 0x3);
    __cavm_csr_fatal("MCSX_MIL_RX_ARB_LMACX_BP_TEST", 2, a, b, 0, 0, 0, 0);
}

#define typedef_CAVM_MCSX_MIL_RX_ARB_LMACX_BP_TEST(a,b) cavm_mcsx_mil_rx_arb_lmacx_bp_test_t
#define bustype_CAVM_MCSX_MIL_RX_ARB_LMACX_BP_TEST(a,b) CSR_TYPE_RSL
#define basename_CAVM_MCSX_MIL_RX_ARB_LMACX_BP_TEST(a,b) "MCSX_MIL_RX_ARB_LMACX_BP_TEST"
#define device_bar_CAVM_MCSX_MIL_RX_ARB_LMACX_BP_TEST(a,b) 0x0 /* PF_BAR0 */
#define busnum_CAVM_MCSX_MIL_RX_ARB_LMACX_BP_TEST(a,b) (a)
#define arguments_CAVM_MCSX_MIL_RX_ARB_LMACX_BP_TEST(a,b) (a),(b),-1,-1

/**
 * Register (RSL) mcs#_mil_rx_err_cfg
 *
 * MCS MIL RX BBE Credits Configuration Register
 */
union cavm_mcsx_mil_rx_err_cfg
{
    uint64_t u;
    struct cavm_mcsx_mil_rx_err_cfg_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_34_63        : 30;
        uint64_t x2p_protocol_protect_en : 1;/**< [ 33: 33](R/W) Enable X2P Protocol protection, drop invalid data cycles and trigger MIL_RX_X2P_PRT_VLT Interrupt. */
        uint64_t small_packet_drop_en  : 1;  /**< [ 32: 32](R/W) Drop smaller packets than SMALL_PACKET_DROP_THRESH */
        uint64_t small_packet_size     : 15; /**< [ 31: 17](R/W) Inject error to MCS_IP for packet smaller than SMALL_PACKET_SIZE, Valid only if
                                                                 SMALL_PACKET_ERR_EN is set. */
        uint64_t small_packet_err_en   : 1;  /**< [ 16: 16](R/W) Enable error injection to MCS_IP based on SMALL_PACKET_SIZE. */
        uint64_t rx_x2p_err_input      : 16; /**< [ 15:  0](R/W) Inject error to MCS_IP per x2p2_p2x2_defs::x2p2_pkt_err_t X2P enum.
                                                                 Each bit represents a corresponding enum value, i.e - bit 2,5 are set, X2P
                                                                 packets with X2P.pkt_bus.err equal 2 or 5 are sent to MCS_IP with input error indication. */
#else /* Word 0 - Little Endian */
        uint64_t rx_x2p_err_input      : 16; /**< [ 15:  0](R/W) Inject error to MCS_IP per x2p2_p2x2_defs::x2p2_pkt_err_t X2P enum.
                                                                 Each bit represents a corresponding enum value, i.e - bit 2,5 are set, X2P
                                                                 packets with X2P.pkt_bus.err equal 2 or 5 are sent to MCS_IP with input error indication. */
        uint64_t small_packet_err_en   : 1;  /**< [ 16: 16](R/W) Enable error injection to MCS_IP based on SMALL_PACKET_SIZE. */
        uint64_t small_packet_size     : 15; /**< [ 31: 17](R/W) Inject error to MCS_IP for packet smaller than SMALL_PACKET_SIZE, Valid only if
                                                                 SMALL_PACKET_ERR_EN is set. */
        uint64_t small_packet_drop_en  : 1;  /**< [ 32: 32](R/W) Drop smaller packets than SMALL_PACKET_DROP_THRESH */
        uint64_t x2p_protocol_protect_en : 1;/**< [ 33: 33](R/W) Enable X2P Protocol protection, drop invalid data cycles and trigger MIL_RX_X2P_PRT_VLT Interrupt. */
        uint64_t reserved_34_63        : 30;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_mcsx_mil_rx_err_cfg_s cn; */
};
typedef union cavm_mcsx_mil_rx_err_cfg cavm_mcsx_mil_rx_err_cfg_t;

static inline uint64_t CAVM_MCSX_MIL_RX_ERR_CFG(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_MCSX_MIL_RX_ERR_CFG(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CNF10KB) && (a<=6))
        return 0x87e080060008ll + 0x1000000ll * ((a) & 0x7);
    __cavm_csr_fatal("MCSX_MIL_RX_ERR_CFG", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_MCSX_MIL_RX_ERR_CFG(a) cavm_mcsx_mil_rx_err_cfg_t
#define bustype_CAVM_MCSX_MIL_RX_ERR_CFG(a) CSR_TYPE_RSL
#define basename_CAVM_MCSX_MIL_RX_ERR_CFG(a) "MCSX_MIL_RX_ERR_CFG"
#define device_bar_CAVM_MCSX_MIL_RX_ERR_CFG(a) 0x0 /* PF_BAR0 */
#define busnum_CAVM_MCSX_MIL_RX_ERR_CFG(a) (a)
#define arguments_CAVM_MCSX_MIL_RX_ERR_CFG(a) (a),-1,-1,-1

/**
 * Register (RSL) mcs#_mil_rx_gbl_int
 *
 * MCS MIL RX Interrupt Global Register
 * Contains the different interrupt bits of the MCS RX MIL.
 */
union cavm_mcsx_mil_rx_gbl_int
{
    uint64_t u;
    struct cavm_mcsx_mil_rx_gbl_int_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_2_63         : 62;
        uint64_t mil_rx_plcn_mismatch  : 1;  /**< [  1:  1](R/W1C/H) MIL RX packet sideband field X2P.pkt_bus.pnum doesn't match any of the
                                                                 MCS_LINK_LMAC(0..3)_CFG registers or match more than one register, cycle is dropped. */
        uint64_t mil_rx_grant_fail     : 1;  /**< [  0:  0](R/W1C/H) MIL RX calibration grant failure. */
#else /* Word 0 - Little Endian */
        uint64_t mil_rx_grant_fail     : 1;  /**< [  0:  0](R/W1C/H) MIL RX calibration grant failure. */
        uint64_t mil_rx_plcn_mismatch  : 1;  /**< [  1:  1](R/W1C/H) MIL RX packet sideband field X2P.pkt_bus.pnum doesn't match any of the
                                                                 MCS_LINK_LMAC(0..3)_CFG registers or match more than one register, cycle is dropped. */
        uint64_t reserved_2_63         : 62;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_mcsx_mil_rx_gbl_int_s cn; */
};
typedef union cavm_mcsx_mil_rx_gbl_int cavm_mcsx_mil_rx_gbl_int_t;

static inline uint64_t CAVM_MCSX_MIL_RX_GBL_INT(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_MCSX_MIL_RX_GBL_INT(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CNF10KB) && (a<=6))
        return 0x87e080060048ll + 0x1000000ll * ((a) & 0x7);
    __cavm_csr_fatal("MCSX_MIL_RX_GBL_INT", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_MCSX_MIL_RX_GBL_INT(a) cavm_mcsx_mil_rx_gbl_int_t
#define bustype_CAVM_MCSX_MIL_RX_GBL_INT(a) CSR_TYPE_RSL
#define basename_CAVM_MCSX_MIL_RX_GBL_INT(a) "MCSX_MIL_RX_GBL_INT"
#define device_bar_CAVM_MCSX_MIL_RX_GBL_INT(a) 0x0 /* PF_BAR0 */
#define busnum_CAVM_MCSX_MIL_RX_GBL_INT(a) (a)
#define arguments_CAVM_MCSX_MIL_RX_GBL_INT(a) (a),-1,-1,-1

/**
 * Register (RSL) mcs#_mil_rx_gbl_int_ena_w1c
 *
 * MCS MIL RX Interrupt Enable Clear Register
 * This register clears interrupt enable bits.
 */
union cavm_mcsx_mil_rx_gbl_int_ena_w1c
{
    uint64_t u;
    struct cavm_mcsx_mil_rx_gbl_int_ena_w1c_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_2_63         : 62;
        uint64_t mil_rx_plcn_mismatch  : 1;  /**< [  1:  1](R/W1C/H) Reads or clears enable for MCS(0..6)_MIL_RX_GBL_INT[MIL_RX_PLCN_MISMATCH]. */
        uint64_t mil_rx_grant_fail     : 1;  /**< [  0:  0](R/W1C/H) Reads or clears enable for MCS(0..6)_MIL_RX_GBL_INT[MIL_RX_GRANT_FAIL]. */
#else /* Word 0 - Little Endian */
        uint64_t mil_rx_grant_fail     : 1;  /**< [  0:  0](R/W1C/H) Reads or clears enable for MCS(0..6)_MIL_RX_GBL_INT[MIL_RX_GRANT_FAIL]. */
        uint64_t mil_rx_plcn_mismatch  : 1;  /**< [  1:  1](R/W1C/H) Reads or clears enable for MCS(0..6)_MIL_RX_GBL_INT[MIL_RX_PLCN_MISMATCH]. */
        uint64_t reserved_2_63         : 62;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_mcsx_mil_rx_gbl_int_ena_w1c_s cn; */
};
typedef union cavm_mcsx_mil_rx_gbl_int_ena_w1c cavm_mcsx_mil_rx_gbl_int_ena_w1c_t;

static inline uint64_t CAVM_MCSX_MIL_RX_GBL_INT_ENA_W1C(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_MCSX_MIL_RX_GBL_INT_ENA_W1C(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CNF10KB) && (a<=6))
        return 0x87e080060058ll + 0x1000000ll * ((a) & 0x7);
    __cavm_csr_fatal("MCSX_MIL_RX_GBL_INT_ENA_W1C", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_MCSX_MIL_RX_GBL_INT_ENA_W1C(a) cavm_mcsx_mil_rx_gbl_int_ena_w1c_t
#define bustype_CAVM_MCSX_MIL_RX_GBL_INT_ENA_W1C(a) CSR_TYPE_RSL
#define basename_CAVM_MCSX_MIL_RX_GBL_INT_ENA_W1C(a) "MCSX_MIL_RX_GBL_INT_ENA_W1C"
#define device_bar_CAVM_MCSX_MIL_RX_GBL_INT_ENA_W1C(a) 0x0 /* PF_BAR0 */
#define busnum_CAVM_MCSX_MIL_RX_GBL_INT_ENA_W1C(a) (a)
#define arguments_CAVM_MCSX_MIL_RX_GBL_INT_ENA_W1C(a) (a),-1,-1,-1

/**
 * Register (RSL) mcs#_mil_rx_gbl_int_ena_w1s
 *
 * MCS MIL RX Interrupt Enable Set Register
 * This register sets interrupt enable bits.
 */
union cavm_mcsx_mil_rx_gbl_int_ena_w1s
{
    uint64_t u;
    struct cavm_mcsx_mil_rx_gbl_int_ena_w1s_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_2_63         : 62;
        uint64_t mil_rx_plcn_mismatch  : 1;  /**< [  1:  1](R/W1S/H) Reads or sets enable for MCS(0..6)_MIL_RX_GBL_INT[MIL_RX_PLCN_MISMATCH]. */
        uint64_t mil_rx_grant_fail     : 1;  /**< [  0:  0](R/W1S/H) Reads or sets enable for MCS(0..6)_MIL_RX_GBL_INT[MIL_RX_GRANT_FAIL]. */
#else /* Word 0 - Little Endian */
        uint64_t mil_rx_grant_fail     : 1;  /**< [  0:  0](R/W1S/H) Reads or sets enable for MCS(0..6)_MIL_RX_GBL_INT[MIL_RX_GRANT_FAIL]. */
        uint64_t mil_rx_plcn_mismatch  : 1;  /**< [  1:  1](R/W1S/H) Reads or sets enable for MCS(0..6)_MIL_RX_GBL_INT[MIL_RX_PLCN_MISMATCH]. */
        uint64_t reserved_2_63         : 62;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_mcsx_mil_rx_gbl_int_ena_w1s_s cn; */
};
typedef union cavm_mcsx_mil_rx_gbl_int_ena_w1s cavm_mcsx_mil_rx_gbl_int_ena_w1s_t;

static inline uint64_t CAVM_MCSX_MIL_RX_GBL_INT_ENA_W1S(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_MCSX_MIL_RX_GBL_INT_ENA_W1S(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CNF10KB) && (a<=6))
        return 0x87e080060060ll + 0x1000000ll * ((a) & 0x7);
    __cavm_csr_fatal("MCSX_MIL_RX_GBL_INT_ENA_W1S", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_MCSX_MIL_RX_GBL_INT_ENA_W1S(a) cavm_mcsx_mil_rx_gbl_int_ena_w1s_t
#define bustype_CAVM_MCSX_MIL_RX_GBL_INT_ENA_W1S(a) CSR_TYPE_RSL
#define basename_CAVM_MCSX_MIL_RX_GBL_INT_ENA_W1S(a) "MCSX_MIL_RX_GBL_INT_ENA_W1S"
#define device_bar_CAVM_MCSX_MIL_RX_GBL_INT_ENA_W1S(a) 0x0 /* PF_BAR0 */
#define busnum_CAVM_MCSX_MIL_RX_GBL_INT_ENA_W1S(a) (a)
#define arguments_CAVM_MCSX_MIL_RX_GBL_INT_ENA_W1S(a) (a),-1,-1,-1

/**
 * Register (RSL) mcs#_mil_rx_gbl_int_w1s
 *
 * MCS MIL RX Interrupt Set Register
 * This register sets interrupt bits.
 */
union cavm_mcsx_mil_rx_gbl_int_w1s
{
    uint64_t u;
    struct cavm_mcsx_mil_rx_gbl_int_w1s_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_2_63         : 62;
        uint64_t mil_rx_plcn_mismatch  : 1;  /**< [  1:  1](R/W1S/H) Reads or sets MCS(0..6)_MIL_RX_GBL_INT[MIL_RX_PLCN_MISMATCH]. */
        uint64_t mil_rx_grant_fail     : 1;  /**< [  0:  0](R/W1S/H) Reads or sets MCS(0..6)_MIL_RX_GBL_INT[MIL_RX_GRANT_FAIL]. */
#else /* Word 0 - Little Endian */
        uint64_t mil_rx_grant_fail     : 1;  /**< [  0:  0](R/W1S/H) Reads or sets MCS(0..6)_MIL_RX_GBL_INT[MIL_RX_GRANT_FAIL]. */
        uint64_t mil_rx_plcn_mismatch  : 1;  /**< [  1:  1](R/W1S/H) Reads or sets MCS(0..6)_MIL_RX_GBL_INT[MIL_RX_PLCN_MISMATCH]. */
        uint64_t reserved_2_63         : 62;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_mcsx_mil_rx_gbl_int_w1s_s cn; */
};
typedef union cavm_mcsx_mil_rx_gbl_int_w1s cavm_mcsx_mil_rx_gbl_int_w1s_t;

static inline uint64_t CAVM_MCSX_MIL_RX_GBL_INT_W1S(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_MCSX_MIL_RX_GBL_INT_W1S(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CNF10KB) && (a<=6))
        return 0x87e080060050ll + 0x1000000ll * ((a) & 0x7);
    __cavm_csr_fatal("MCSX_MIL_RX_GBL_INT_W1S", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_MCSX_MIL_RX_GBL_INT_W1S(a) cavm_mcsx_mil_rx_gbl_int_w1s_t
#define bustype_CAVM_MCSX_MIL_RX_GBL_INT_W1S(a) CSR_TYPE_RSL
#define basename_CAVM_MCSX_MIL_RX_GBL_INT_W1S(a) "MCSX_MIL_RX_GBL_INT_W1S"
#define device_bar_CAVM_MCSX_MIL_RX_GBL_INT_W1S(a) 0x0 /* PF_BAR0 */
#define busnum_CAVM_MCSX_MIL_RX_GBL_INT_W1S(a) (a)
#define arguments_CAVM_MCSX_MIL_RX_GBL_INT_W1S(a) (a),-1,-1,-1

/**
 * Register (RSL) mcs#_mil_rx_gbl_status
 *
 * MCS MIL RX Status Register
 */
union cavm_mcsx_mil_rx_gbl_status
{
    uint64_t u;
    struct cavm_mcsx_mil_rx_gbl_status_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_29_63        : 35;
        uint64_t x2p_pkt_cnt           : 12; /**< [ 28: 17](RO/H) Reserved.
                                                                 Internal:
                                                                 Dynamically counts the X2P packets in MCS at any given time. */
        uint64_t calibrate_status      : 16; /**< [ 16:  1](RO/H) X2P device calibration state bit per MCS interface.
                                                                 0 = Device inactive.
                                                                 1 = Device ready.

                                                                 Bits are enumerated by MCS_INTF_E.

                                                                 Internal:
                                                                 A device inactive status means that the X2P agent did not respond to the calibration
                                                                 cycle.
                                                                 This is most likely caused because the X2P agents (RPM) was in reset during the
                                                                 calibration cycle. */
        uint64_t calibrate_done        : 1;  /**< [  0:  0](RO/H) Calibrate cycle is complete. */
#else /* Word 0 - Little Endian */
        uint64_t calibrate_done        : 1;  /**< [  0:  0](RO/H) Calibrate cycle is complete. */
        uint64_t calibrate_status      : 16; /**< [ 16:  1](RO/H) X2P device calibration state bit per MCS interface.
                                                                 0 = Device inactive.
                                                                 1 = Device ready.

                                                                 Bits are enumerated by MCS_INTF_E.

                                                                 Internal:
                                                                 A device inactive status means that the X2P agent did not respond to the calibration
                                                                 cycle.
                                                                 This is most likely caused because the X2P agents (RPM) was in reset during the
                                                                 calibration cycle. */
        uint64_t x2p_pkt_cnt           : 12; /**< [ 28: 17](RO/H) Reserved.
                                                                 Internal:
                                                                 Dynamically counts the X2P packets in MCS at any given time. */
        uint64_t reserved_29_63        : 35;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_mcsx_mil_rx_gbl_status_s cn; */
};
typedef union cavm_mcsx_mil_rx_gbl_status cavm_mcsx_mil_rx_gbl_status_t;

static inline uint64_t CAVM_MCSX_MIL_RX_GBL_STATUS(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_MCSX_MIL_RX_GBL_STATUS(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CNF10KB) && (a<=6))
        return 0x87e0800600c8ll + 0x1000000ll * ((a) & 0x7);
    __cavm_csr_fatal("MCSX_MIL_RX_GBL_STATUS", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_MCSX_MIL_RX_GBL_STATUS(a) cavm_mcsx_mil_rx_gbl_status_t
#define bustype_CAVM_MCSX_MIL_RX_GBL_STATUS(a) CSR_TYPE_RSL
#define basename_CAVM_MCSX_MIL_RX_GBL_STATUS(a) "MCSX_MIL_RX_GBL_STATUS"
#define device_bar_CAVM_MCSX_MIL_RX_GBL_STATUS(a) 0x0 /* PF_BAR0 */
#define busnum_CAVM_MCSX_MIL_RX_GBL_STATUS(a) (a)
#define arguments_CAVM_MCSX_MIL_RX_GBL_STATUS(a) (a),-1,-1,-1

/**
 * Register (RSL) mcs#_mil_rx_lmac#_bbe_credits
 *
 * INTERNAL: MCS MIL RX Per LMAC BBE Credits Configuration Register
 */
union cavm_mcsx_mil_rx_lmacx_bbe_credits
{
    uint64_t u;
    struct cavm_mcsx_mil_rx_lmacx_bbe_credits_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_12_63        : 52;
        uint64_t rx_bbe_policy_credit_init : 5;/**< [ 11:  7](R/W) MIL RX BBE POLICY credit initialization (based on BBE POLICY FIFO depth). */
        uint64_t rx_bbe_data_credit_init : 7;/**< [  6:  0](R/W) MIL RX BBE DATA credit initialization (based on BBE data FIFO depth). */
#else /* Word 0 - Little Endian */
        uint64_t rx_bbe_data_credit_init : 7;/**< [  6:  0](R/W) MIL RX BBE DATA credit initialization (based on BBE data FIFO depth). */
        uint64_t rx_bbe_policy_credit_init : 5;/**< [ 11:  7](R/W) MIL RX BBE POLICY credit initialization (based on BBE POLICY FIFO depth). */
        uint64_t reserved_12_63        : 52;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_mcsx_mil_rx_lmacx_bbe_credits_s cn; */
};
typedef union cavm_mcsx_mil_rx_lmacx_bbe_credits cavm_mcsx_mil_rx_lmacx_bbe_credits_t;

static inline uint64_t CAVM_MCSX_MIL_RX_LMACX_BBE_CREDITS(uint64_t a, uint64_t b) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_MCSX_MIL_RX_LMACX_BBE_CREDITS(uint64_t a, uint64_t b)
{
    if (cavm_is_model(OCTEONTX_CNF10KB) && ((a<=6) && (b<=3)))
        return 0x87e080070020ll + 0x1000000ll * ((a) & 0x7) + 0x800ll * ((b) & 0x3);
    __cavm_csr_fatal("MCSX_MIL_RX_LMACX_BBE_CREDITS", 2, a, b, 0, 0, 0, 0);
}

#define typedef_CAVM_MCSX_MIL_RX_LMACX_BBE_CREDITS(a,b) cavm_mcsx_mil_rx_lmacx_bbe_credits_t
#define bustype_CAVM_MCSX_MIL_RX_LMACX_BBE_CREDITS(a,b) CSR_TYPE_RSL
#define basename_CAVM_MCSX_MIL_RX_LMACX_BBE_CREDITS(a,b) "MCSX_MIL_RX_LMACX_BBE_CREDITS"
#define device_bar_CAVM_MCSX_MIL_RX_LMACX_BBE_CREDITS(a,b) 0x0 /* PF_BAR0 */
#define busnum_CAVM_MCSX_MIL_RX_LMACX_BBE_CREDITS(a,b) (a)
#define arguments_CAVM_MCSX_MIL_RX_LMACX_BBE_CREDITS(a,b) (a),(b),-1,-1

/**
 * Register (RSL) mcs#_mil_rx_lmac#_cfg
 *
 * MCS MIL RX Configurations Registers
 * Port priority for X2P request arbitration.
 */
union cavm_mcsx_mil_rx_lmacx_cfg
{
    uint64_t u;
    struct cavm_mcsx_mil_rx_lmacx_cfg_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_10_63        : 54;
        uint64_t port_prio             : 4;  /**< [  9:  6](R/W) Reserved.
                                                                 Internal:
                                                                 Port priority for X2P request arbitration. */
        uint64_t small_packet_drop_thresh : 6;/**< [  5:  0](R/W) Drop packet size equal or smaller than threshold, used only when SMALL_PACKET_DROP_EN is set.
                                                                 Max threshold value is 0x20, correlative to 2 full data beats. */
#else /* Word 0 - Little Endian */
        uint64_t small_packet_drop_thresh : 6;/**< [  5:  0](R/W) Drop packet size equal or smaller than threshold, used only when SMALL_PACKET_DROP_EN is set.
                                                                 Max threshold value is 0x20, correlative to 2 full data beats. */
        uint64_t port_prio             : 4;  /**< [  9:  6](R/W) Reserved.
                                                                 Internal:
                                                                 Port priority for X2P request arbitration. */
        uint64_t reserved_10_63        : 54;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_mcsx_mil_rx_lmacx_cfg_s cn; */
};
typedef union cavm_mcsx_mil_rx_lmacx_cfg cavm_mcsx_mil_rx_lmacx_cfg_t;

static inline uint64_t CAVM_MCSX_MIL_RX_LMACX_CFG(uint64_t a, uint64_t b) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_MCSX_MIL_RX_LMACX_CFG(uint64_t a, uint64_t b)
{
    if (cavm_is_model(OCTEONTX_CNF10KB) && ((a<=6) && (b<=3)))
        return 0x87e0800700a8ll + 0x1000000ll * ((a) & 0x7) + 0x800ll * ((b) & 0x3);
    __cavm_csr_fatal("MCSX_MIL_RX_LMACX_CFG", 2, a, b, 0, 0, 0, 0);
}

#define typedef_CAVM_MCSX_MIL_RX_LMACX_CFG(a,b) cavm_mcsx_mil_rx_lmacx_cfg_t
#define bustype_CAVM_MCSX_MIL_RX_LMACX_CFG(a,b) CSR_TYPE_RSL
#define basename_CAVM_MCSX_MIL_RX_LMACX_CFG(a,b) "MCSX_MIL_RX_LMACX_CFG"
#define device_bar_CAVM_MCSX_MIL_RX_LMACX_CFG(a,b) 0x0 /* PF_BAR0 */
#define busnum_CAVM_MCSX_MIL_RX_LMACX_CFG(a,b) (a)
#define arguments_CAVM_MCSX_MIL_RX_LMACX_CFG(a,b) (a),(b),-1,-1

/**
 * Register (RSL) mcs#_mil_rx_lmac#_int
 *
 * MCS MIL RX Per LMAC Interrupt Register
 * Contains the different interrupt bits of the MCS RX MIL.
 */
union cavm_mcsx_mil_rx_lmacx_int
{
    uint64_t u;
    struct cavm_mcsx_mil_rx_lmacx_int_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_11_63        : 53;
        uint64_t mil_rx_x2p_small_packet_drop : 1;/**< [ 10: 10](R/W1C/H) MIL RX X2P Small packet drop, based on SMALL_PACKET_DROP_EN/THRESH */
        uint64_t mil_rx_x2p_prt_vlt    : 1;  /**< [  9:  9](R/W1C/H) MIL RX X2P protocol violation, i.e consecutive SOP's w/o EOP, valid data w/o preliminary SOP, etc..
                                                                 In this case the X2P cycle is silently dropped.
                                                                 for additional diagnostic see X2P in OCLA. */
        uint64_t mil_rx_bbe_plcy_cnt_unf : 1;/**< [  8:  8](R/W1C/H) MIL BBE POLICY credit counter underflow, unused in external bypass mode. */
        uint64_t mil_rx_bbe_plcy_cnt_ovf : 1;/**< [  7:  7](R/W1C/H) MIL BBE POLICY credit counter overflow, unused in external bypass mode. */
        uint64_t mil_rx_bbe_data_cnt_unf : 1;/**< [  6:  6](R/W1C/H) MIL BBE data credit counter underflow. */
        uint64_t mil_rx_bbe_data_cnt_ovf : 1;/**< [  5:  5](R/W1C/H) MIL BBE data credit counter overflow. */
        uint64_t mil_rx_singular_grant : 1;  /**< [  4:  4](R/W1C/H) MIL X2P grant while REQ heap empty or SKID credit empty. */
        uint64_t mil_rx_req_heap_ovf   : 1;  /**< [  3:  3](R/W1C/H) MIL X2P request heap overflow. */
        uint64_t mil_rx_skid_crdt_cnt_ovf : 1;/**< [  2:  2](R/W1C/H) MIL X2P SKID credit counter overflow. */
        uint64_t mil_rx_skid_fifo_unf  : 1;  /**< [  1:  1](R/W1C/H) MIL X2P SKID FIFO underflow. */
        uint64_t mil_rx_skid_fifo_ovf  : 1;  /**< [  0:  0](R/W1C/H) MIL X2P SKID FIFO overflow. */
#else /* Word 0 - Little Endian */
        uint64_t mil_rx_skid_fifo_ovf  : 1;  /**< [  0:  0](R/W1C/H) MIL X2P SKID FIFO overflow. */
        uint64_t mil_rx_skid_fifo_unf  : 1;  /**< [  1:  1](R/W1C/H) MIL X2P SKID FIFO underflow. */
        uint64_t mil_rx_skid_crdt_cnt_ovf : 1;/**< [  2:  2](R/W1C/H) MIL X2P SKID credit counter overflow. */
        uint64_t mil_rx_req_heap_ovf   : 1;  /**< [  3:  3](R/W1C/H) MIL X2P request heap overflow. */
        uint64_t mil_rx_singular_grant : 1;  /**< [  4:  4](R/W1C/H) MIL X2P grant while REQ heap empty or SKID credit empty. */
        uint64_t mil_rx_bbe_data_cnt_ovf : 1;/**< [  5:  5](R/W1C/H) MIL BBE data credit counter overflow. */
        uint64_t mil_rx_bbe_data_cnt_unf : 1;/**< [  6:  6](R/W1C/H) MIL BBE data credit counter underflow. */
        uint64_t mil_rx_bbe_plcy_cnt_ovf : 1;/**< [  7:  7](R/W1C/H) MIL BBE POLICY credit counter overflow, unused in external bypass mode. */
        uint64_t mil_rx_bbe_plcy_cnt_unf : 1;/**< [  8:  8](R/W1C/H) MIL BBE POLICY credit counter underflow, unused in external bypass mode. */
        uint64_t mil_rx_x2p_prt_vlt    : 1;  /**< [  9:  9](R/W1C/H) MIL RX X2P protocol violation, i.e consecutive SOP's w/o EOP, valid data w/o preliminary SOP, etc..
                                                                 In this case the X2P cycle is silently dropped.
                                                                 for additional diagnostic see X2P in OCLA. */
        uint64_t mil_rx_x2p_small_packet_drop : 1;/**< [ 10: 10](R/W1C/H) MIL RX X2P Small packet drop, based on SMALL_PACKET_DROP_EN/THRESH */
        uint64_t reserved_11_63        : 53;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_mcsx_mil_rx_lmacx_int_s cn; */
};
typedef union cavm_mcsx_mil_rx_lmacx_int cavm_mcsx_mil_rx_lmacx_int_t;

static inline uint64_t CAVM_MCSX_MIL_RX_LMACX_INT(uint64_t a, uint64_t b) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_MCSX_MIL_RX_LMACX_INT(uint64_t a, uint64_t b)
{
    if (cavm_is_model(OCTEONTX_CNF10KB) && ((a<=6) && (b<=3)))
        return 0x87e080070028ll + 0x1000000ll * ((a) & 0x7) + 0x800ll * ((b) & 0x3);
    __cavm_csr_fatal("MCSX_MIL_RX_LMACX_INT", 2, a, b, 0, 0, 0, 0);
}

#define typedef_CAVM_MCSX_MIL_RX_LMACX_INT(a,b) cavm_mcsx_mil_rx_lmacx_int_t
#define bustype_CAVM_MCSX_MIL_RX_LMACX_INT(a,b) CSR_TYPE_RSL
#define basename_CAVM_MCSX_MIL_RX_LMACX_INT(a,b) "MCSX_MIL_RX_LMACX_INT"
#define device_bar_CAVM_MCSX_MIL_RX_LMACX_INT(a,b) 0x0 /* PF_BAR0 */
#define busnum_CAVM_MCSX_MIL_RX_LMACX_INT(a,b) (a)
#define arguments_CAVM_MCSX_MIL_RX_LMACX_INT(a,b) (a),(b),-1,-1

/**
 * Register (RSL) mcs#_mil_rx_lmac#_int_ena_w1c
 *
 * MCS MIL RX Interrupt Enable Clear Register
 * This register clears interrupt enable bits.
 */
union cavm_mcsx_mil_rx_lmacx_int_ena_w1c
{
    uint64_t u;
    struct cavm_mcsx_mil_rx_lmacx_int_ena_w1c_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_11_63        : 53;
        uint64_t mil_rx_x2p_small_packet_drop : 1;/**< [ 10: 10](R/W1C/H) Reads or clears enable for MCS(0..6)_MIL_RX_LMAC(0..3)_INT[MIL_RX_X2P_SMALL_PACKET_DROP]. */
        uint64_t mil_rx_x2p_prt_vlt    : 1;  /**< [  9:  9](R/W1C/H) Reads or clears enable for MCS(0..6)_MIL_RX_LMAC(0..3)_INT[MIL_RX_X2P_PRT_VLT]. */
        uint64_t mil_rx_bbe_plcy_cnt_unf : 1;/**< [  8:  8](R/W1C/H) Reads or clears enable for MCS(0..6)_MIL_RX_LMAC(0..3)_INT[MIL_RX_BBE_PLCY_CNT_UNF]. */
        uint64_t mil_rx_bbe_plcy_cnt_ovf : 1;/**< [  7:  7](R/W1C/H) Reads or clears enable for MCS(0..6)_MIL_RX_LMAC(0..3)_INT[MIL_RX_BBE_PLCY_CNT_OVF]. */
        uint64_t mil_rx_bbe_data_cnt_unf : 1;/**< [  6:  6](R/W1C/H) Reads or clears enable for MCS(0..6)_MIL_RX_LMAC(0..3)_INT[MIL_RX_BBE_DATA_CNT_UNF]. */
        uint64_t mil_rx_bbe_data_cnt_ovf : 1;/**< [  5:  5](R/W1C/H) Reads or clears enable for MCS(0..6)_MIL_RX_LMAC(0..3)_INT[MIL_RX_BBE_DATA_CNT_OVF]. */
        uint64_t mil_rx_singular_grant : 1;  /**< [  4:  4](R/W1C/H) Reads or clears enable for MCS(0..6)_MIL_RX_LMAC(0..3)_INT[MIL_RX_SINGULAR_GRANT]. */
        uint64_t mil_rx_req_heap_ovf   : 1;  /**< [  3:  3](R/W1C/H) Reads or clears enable for MCS(0..6)_MIL_RX_LMAC(0..3)_INT[MIL_RX_REQ_HEAP_OVF]. */
        uint64_t mil_rx_skid_crdt_cnt_ovf : 1;/**< [  2:  2](R/W1C/H) Reads or clears enable for MCS(0..6)_MIL_RX_LMAC(0..3)_INT[MIL_RX_SKID_CRDT_CNT_OVF]. */
        uint64_t mil_rx_skid_fifo_unf  : 1;  /**< [  1:  1](R/W1C/H) Reads or clears enable for MCS(0..6)_MIL_RX_LMAC(0..3)_INT[MIL_RX_SKID_FIFO_UNF]. */
        uint64_t mil_rx_skid_fifo_ovf  : 1;  /**< [  0:  0](R/W1C/H) Reads or clears enable for MCS(0..6)_MIL_RX_LMAC(0..3)_INT[MIL_RX_SKID_FIFO_OVF]. */
#else /* Word 0 - Little Endian */
        uint64_t mil_rx_skid_fifo_ovf  : 1;  /**< [  0:  0](R/W1C/H) Reads or clears enable for MCS(0..6)_MIL_RX_LMAC(0..3)_INT[MIL_RX_SKID_FIFO_OVF]. */
        uint64_t mil_rx_skid_fifo_unf  : 1;  /**< [  1:  1](R/W1C/H) Reads or clears enable for MCS(0..6)_MIL_RX_LMAC(0..3)_INT[MIL_RX_SKID_FIFO_UNF]. */
        uint64_t mil_rx_skid_crdt_cnt_ovf : 1;/**< [  2:  2](R/W1C/H) Reads or clears enable for MCS(0..6)_MIL_RX_LMAC(0..3)_INT[MIL_RX_SKID_CRDT_CNT_OVF]. */
        uint64_t mil_rx_req_heap_ovf   : 1;  /**< [  3:  3](R/W1C/H) Reads or clears enable for MCS(0..6)_MIL_RX_LMAC(0..3)_INT[MIL_RX_REQ_HEAP_OVF]. */
        uint64_t mil_rx_singular_grant : 1;  /**< [  4:  4](R/W1C/H) Reads or clears enable for MCS(0..6)_MIL_RX_LMAC(0..3)_INT[MIL_RX_SINGULAR_GRANT]. */
        uint64_t mil_rx_bbe_data_cnt_ovf : 1;/**< [  5:  5](R/W1C/H) Reads or clears enable for MCS(0..6)_MIL_RX_LMAC(0..3)_INT[MIL_RX_BBE_DATA_CNT_OVF]. */
        uint64_t mil_rx_bbe_data_cnt_unf : 1;/**< [  6:  6](R/W1C/H) Reads or clears enable for MCS(0..6)_MIL_RX_LMAC(0..3)_INT[MIL_RX_BBE_DATA_CNT_UNF]. */
        uint64_t mil_rx_bbe_plcy_cnt_ovf : 1;/**< [  7:  7](R/W1C/H) Reads or clears enable for MCS(0..6)_MIL_RX_LMAC(0..3)_INT[MIL_RX_BBE_PLCY_CNT_OVF]. */
        uint64_t mil_rx_bbe_plcy_cnt_unf : 1;/**< [  8:  8](R/W1C/H) Reads or clears enable for MCS(0..6)_MIL_RX_LMAC(0..3)_INT[MIL_RX_BBE_PLCY_CNT_UNF]. */
        uint64_t mil_rx_x2p_prt_vlt    : 1;  /**< [  9:  9](R/W1C/H) Reads or clears enable for MCS(0..6)_MIL_RX_LMAC(0..3)_INT[MIL_RX_X2P_PRT_VLT]. */
        uint64_t mil_rx_x2p_small_packet_drop : 1;/**< [ 10: 10](R/W1C/H) Reads or clears enable for MCS(0..6)_MIL_RX_LMAC(0..3)_INT[MIL_RX_X2P_SMALL_PACKET_DROP]. */
        uint64_t reserved_11_63        : 53;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_mcsx_mil_rx_lmacx_int_ena_w1c_s cn; */
};
typedef union cavm_mcsx_mil_rx_lmacx_int_ena_w1c cavm_mcsx_mil_rx_lmacx_int_ena_w1c_t;

static inline uint64_t CAVM_MCSX_MIL_RX_LMACX_INT_ENA_W1C(uint64_t a, uint64_t b) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_MCSX_MIL_RX_LMACX_INT_ENA_W1C(uint64_t a, uint64_t b)
{
    if (cavm_is_model(OCTEONTX_CNF10KB) && ((a<=6) && (b<=3)))
        return 0x87e080070038ll + 0x1000000ll * ((a) & 0x7) + 0x800ll * ((b) & 0x3);
    __cavm_csr_fatal("MCSX_MIL_RX_LMACX_INT_ENA_W1C", 2, a, b, 0, 0, 0, 0);
}

#define typedef_CAVM_MCSX_MIL_RX_LMACX_INT_ENA_W1C(a,b) cavm_mcsx_mil_rx_lmacx_int_ena_w1c_t
#define bustype_CAVM_MCSX_MIL_RX_LMACX_INT_ENA_W1C(a,b) CSR_TYPE_RSL
#define basename_CAVM_MCSX_MIL_RX_LMACX_INT_ENA_W1C(a,b) "MCSX_MIL_RX_LMACX_INT_ENA_W1C"
#define device_bar_CAVM_MCSX_MIL_RX_LMACX_INT_ENA_W1C(a,b) 0x0 /* PF_BAR0 */
#define busnum_CAVM_MCSX_MIL_RX_LMACX_INT_ENA_W1C(a,b) (a)
#define arguments_CAVM_MCSX_MIL_RX_LMACX_INT_ENA_W1C(a,b) (a),(b),-1,-1

/**
 * Register (RSL) mcs#_mil_rx_lmac#_int_ena_w1s
 *
 * MCS MIL RX Interrupt Enable Set Register
 * This register sets interrupt enable bits.
 */
union cavm_mcsx_mil_rx_lmacx_int_ena_w1s
{
    uint64_t u;
    struct cavm_mcsx_mil_rx_lmacx_int_ena_w1s_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_11_63        : 53;
        uint64_t mil_rx_x2p_small_packet_drop : 1;/**< [ 10: 10](R/W1S/H) Reads or sets enable for MCS(0..6)_MIL_RX_LMAC(0..3)_INT[MIL_RX_X2P_SMALL_PACKET_DROP]. */
        uint64_t mil_rx_x2p_prt_vlt    : 1;  /**< [  9:  9](R/W1S/H) Reads or sets enable for MCS(0..6)_MIL_RX_LMAC(0..3)_INT[MIL_RX_X2P_PRT_VLT]. */
        uint64_t mil_rx_bbe_plcy_cnt_unf : 1;/**< [  8:  8](R/W1S/H) Reads or sets enable for MCS(0..6)_MIL_RX_LMAC(0..3)_INT[MIL_RX_BBE_PLCY_CNT_UNF]. */
        uint64_t mil_rx_bbe_plcy_cnt_ovf : 1;/**< [  7:  7](R/W1S/H) Reads or sets enable for MCS(0..6)_MIL_RX_LMAC(0..3)_INT[MIL_RX_BBE_PLCY_CNT_OVF]. */
        uint64_t mil_rx_bbe_data_cnt_unf : 1;/**< [  6:  6](R/W1S/H) Reads or sets enable for MCS(0..6)_MIL_RX_LMAC(0..3)_INT[MIL_RX_BBE_DATA_CNT_UNF]. */
        uint64_t mil_rx_bbe_data_cnt_ovf : 1;/**< [  5:  5](R/W1S/H) Reads or sets enable for MCS(0..6)_MIL_RX_LMAC(0..3)_INT[MIL_RX_BBE_DATA_CNT_OVF]. */
        uint64_t mil_rx_singular_grant : 1;  /**< [  4:  4](R/W1S/H) Reads or sets enable for MCS(0..6)_MIL_RX_LMAC(0..3)_INT[MIL_RX_SINGULAR_GRANT]. */
        uint64_t mil_rx_req_heap_ovf   : 1;  /**< [  3:  3](R/W1S/H) Reads or sets enable for MCS(0..6)_MIL_RX_LMAC(0..3)_INT[MIL_RX_REQ_HEAP_OVF]. */
        uint64_t mil_rx_skid_crdt_cnt_ovf : 1;/**< [  2:  2](R/W1S/H) Reads or sets enable for MCS(0..6)_MIL_RX_LMAC(0..3)_INT[MIL_RX_SKID_CRDT_CNT_OVF]. */
        uint64_t mil_rx_skid_fifo_unf  : 1;  /**< [  1:  1](R/W1S/H) Reads or sets enable for MCS(0..6)_MIL_RX_LMAC(0..3)_INT[MIL_RX_SKID_FIFO_UNF]. */
        uint64_t mil_rx_skid_fifo_ovf  : 1;  /**< [  0:  0](R/W1S/H) Reads or sets enable for MCS(0..6)_MIL_RX_LMAC(0..3)_INT[MIL_RX_SKID_FIFO_OVF]. */
#else /* Word 0 - Little Endian */
        uint64_t mil_rx_skid_fifo_ovf  : 1;  /**< [  0:  0](R/W1S/H) Reads or sets enable for MCS(0..6)_MIL_RX_LMAC(0..3)_INT[MIL_RX_SKID_FIFO_OVF]. */
        uint64_t mil_rx_skid_fifo_unf  : 1;  /**< [  1:  1](R/W1S/H) Reads or sets enable for MCS(0..6)_MIL_RX_LMAC(0..3)_INT[MIL_RX_SKID_FIFO_UNF]. */
        uint64_t mil_rx_skid_crdt_cnt_ovf : 1;/**< [  2:  2](R/W1S/H) Reads or sets enable for MCS(0..6)_MIL_RX_LMAC(0..3)_INT[MIL_RX_SKID_CRDT_CNT_OVF]. */
        uint64_t mil_rx_req_heap_ovf   : 1;  /**< [  3:  3](R/W1S/H) Reads or sets enable for MCS(0..6)_MIL_RX_LMAC(0..3)_INT[MIL_RX_REQ_HEAP_OVF]. */
        uint64_t mil_rx_singular_grant : 1;  /**< [  4:  4](R/W1S/H) Reads or sets enable for MCS(0..6)_MIL_RX_LMAC(0..3)_INT[MIL_RX_SINGULAR_GRANT]. */
        uint64_t mil_rx_bbe_data_cnt_ovf : 1;/**< [  5:  5](R/W1S/H) Reads or sets enable for MCS(0..6)_MIL_RX_LMAC(0..3)_INT[MIL_RX_BBE_DATA_CNT_OVF]. */
        uint64_t mil_rx_bbe_data_cnt_unf : 1;/**< [  6:  6](R/W1S/H) Reads or sets enable for MCS(0..6)_MIL_RX_LMAC(0..3)_INT[MIL_RX_BBE_DATA_CNT_UNF]. */
        uint64_t mil_rx_bbe_plcy_cnt_ovf : 1;/**< [  7:  7](R/W1S/H) Reads or sets enable for MCS(0..6)_MIL_RX_LMAC(0..3)_INT[MIL_RX_BBE_PLCY_CNT_OVF]. */
        uint64_t mil_rx_bbe_plcy_cnt_unf : 1;/**< [  8:  8](R/W1S/H) Reads or sets enable for MCS(0..6)_MIL_RX_LMAC(0..3)_INT[MIL_RX_BBE_PLCY_CNT_UNF]. */
        uint64_t mil_rx_x2p_prt_vlt    : 1;  /**< [  9:  9](R/W1S/H) Reads or sets enable for MCS(0..6)_MIL_RX_LMAC(0..3)_INT[MIL_RX_X2P_PRT_VLT]. */
        uint64_t mil_rx_x2p_small_packet_drop : 1;/**< [ 10: 10](R/W1S/H) Reads or sets enable for MCS(0..6)_MIL_RX_LMAC(0..3)_INT[MIL_RX_X2P_SMALL_PACKET_DROP]. */
        uint64_t reserved_11_63        : 53;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_mcsx_mil_rx_lmacx_int_ena_w1s_s cn; */
};
typedef union cavm_mcsx_mil_rx_lmacx_int_ena_w1s cavm_mcsx_mil_rx_lmacx_int_ena_w1s_t;

static inline uint64_t CAVM_MCSX_MIL_RX_LMACX_INT_ENA_W1S(uint64_t a, uint64_t b) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_MCSX_MIL_RX_LMACX_INT_ENA_W1S(uint64_t a, uint64_t b)
{
    if (cavm_is_model(OCTEONTX_CNF10KB) && ((a<=6) && (b<=3)))
        return 0x87e080070040ll + 0x1000000ll * ((a) & 0x7) + 0x800ll * ((b) & 0x3);
    __cavm_csr_fatal("MCSX_MIL_RX_LMACX_INT_ENA_W1S", 2, a, b, 0, 0, 0, 0);
}

#define typedef_CAVM_MCSX_MIL_RX_LMACX_INT_ENA_W1S(a,b) cavm_mcsx_mil_rx_lmacx_int_ena_w1s_t
#define bustype_CAVM_MCSX_MIL_RX_LMACX_INT_ENA_W1S(a,b) CSR_TYPE_RSL
#define basename_CAVM_MCSX_MIL_RX_LMACX_INT_ENA_W1S(a,b) "MCSX_MIL_RX_LMACX_INT_ENA_W1S"
#define device_bar_CAVM_MCSX_MIL_RX_LMACX_INT_ENA_W1S(a,b) 0x0 /* PF_BAR0 */
#define busnum_CAVM_MCSX_MIL_RX_LMACX_INT_ENA_W1S(a,b) (a)
#define arguments_CAVM_MCSX_MIL_RX_LMACX_INT_ENA_W1S(a,b) (a),(b),-1,-1

/**
 * Register (RSL) mcs#_mil_rx_lmac#_int_w1s
 *
 * MCS MIL RX Interrupt Set Register
 * This register sets interrupt bits.
 */
union cavm_mcsx_mil_rx_lmacx_int_w1s
{
    uint64_t u;
    struct cavm_mcsx_mil_rx_lmacx_int_w1s_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_11_63        : 53;
        uint64_t mil_rx_x2p_small_packet_drop : 1;/**< [ 10: 10](R/W1S/H) Reads or sets MCS(0..6)_MIL_RX_LMAC(0..3)_INT[MIL_RX_X2P_SMALL_PACKET_DROP]. */
        uint64_t mil_rx_x2p_prt_vlt    : 1;  /**< [  9:  9](R/W1S/H) Reads or sets MCS(0..6)_MIL_RX_LMAC(0..3)_INT[MIL_RX_X2P_PRT_VLT]. */
        uint64_t mil_rx_bbe_plcy_cnt_unf : 1;/**< [  8:  8](R/W1S/H) Reads or sets MCS(0..6)_MIL_RX_LMAC(0..3)_INT[MIL_RX_BBE_PLCY_CNT_UNF]. */
        uint64_t mil_rx_bbe_plcy_cnt_ovf : 1;/**< [  7:  7](R/W1S/H) Reads or sets MCS(0..6)_MIL_RX_LMAC(0..3)_INT[MIL_RX_BBE_PLCY_CNT_OVF]. */
        uint64_t mil_rx_bbe_data_cnt_unf : 1;/**< [  6:  6](R/W1S/H) Reads or sets MCS(0..6)_MIL_RX_LMAC(0..3)_INT[MIL_RX_BBE_DATA_CNT_UNF]. */
        uint64_t mil_rx_bbe_data_cnt_ovf : 1;/**< [  5:  5](R/W1S/H) Reads or sets MCS(0..6)_MIL_RX_LMAC(0..3)_INT[MIL_RX_BBE_DATA_CNT_OVF]. */
        uint64_t mil_rx_singular_grant : 1;  /**< [  4:  4](R/W1S/H) Reads or sets MCS(0..6)_MIL_RX_LMAC(0..3)_INT[MIL_RX_SINGULAR_GRANT]. */
        uint64_t mil_rx_req_heap_ovf   : 1;  /**< [  3:  3](R/W1S/H) Reads or sets MCS(0..6)_MIL_RX_LMAC(0..3)_INT[MIL_RX_REQ_HEAP_OVF]. */
        uint64_t mil_rx_skid_crdt_cnt_ovf : 1;/**< [  2:  2](R/W1S/H) Reads or sets MCS(0..6)_MIL_RX_LMAC(0..3)_INT[MIL_RX_SKID_CRDT_CNT_OVF]. */
        uint64_t mil_rx_skid_fifo_unf  : 1;  /**< [  1:  1](R/W1S/H) Reads or sets MCS(0..6)_MIL_RX_LMAC(0..3)_INT[MIL_RX_SKID_FIFO_UNF]. */
        uint64_t mil_rx_skid_fifo_ovf  : 1;  /**< [  0:  0](R/W1S/H) Reads or sets MCS(0..6)_MIL_RX_LMAC(0..3)_INT[MIL_RX_SKID_FIFO_OVF]. */
#else /* Word 0 - Little Endian */
        uint64_t mil_rx_skid_fifo_ovf  : 1;  /**< [  0:  0](R/W1S/H) Reads or sets MCS(0..6)_MIL_RX_LMAC(0..3)_INT[MIL_RX_SKID_FIFO_OVF]. */
        uint64_t mil_rx_skid_fifo_unf  : 1;  /**< [  1:  1](R/W1S/H) Reads or sets MCS(0..6)_MIL_RX_LMAC(0..3)_INT[MIL_RX_SKID_FIFO_UNF]. */
        uint64_t mil_rx_skid_crdt_cnt_ovf : 1;/**< [  2:  2](R/W1S/H) Reads or sets MCS(0..6)_MIL_RX_LMAC(0..3)_INT[MIL_RX_SKID_CRDT_CNT_OVF]. */
        uint64_t mil_rx_req_heap_ovf   : 1;  /**< [  3:  3](R/W1S/H) Reads or sets MCS(0..6)_MIL_RX_LMAC(0..3)_INT[MIL_RX_REQ_HEAP_OVF]. */
        uint64_t mil_rx_singular_grant : 1;  /**< [  4:  4](R/W1S/H) Reads or sets MCS(0..6)_MIL_RX_LMAC(0..3)_INT[MIL_RX_SINGULAR_GRANT]. */
        uint64_t mil_rx_bbe_data_cnt_ovf : 1;/**< [  5:  5](R/W1S/H) Reads or sets MCS(0..6)_MIL_RX_LMAC(0..3)_INT[MIL_RX_BBE_DATA_CNT_OVF]. */
        uint64_t mil_rx_bbe_data_cnt_unf : 1;/**< [  6:  6](R/W1S/H) Reads or sets MCS(0..6)_MIL_RX_LMAC(0..3)_INT[MIL_RX_BBE_DATA_CNT_UNF]. */
        uint64_t mil_rx_bbe_plcy_cnt_ovf : 1;/**< [  7:  7](R/W1S/H) Reads or sets MCS(0..6)_MIL_RX_LMAC(0..3)_INT[MIL_RX_BBE_PLCY_CNT_OVF]. */
        uint64_t mil_rx_bbe_plcy_cnt_unf : 1;/**< [  8:  8](R/W1S/H) Reads or sets MCS(0..6)_MIL_RX_LMAC(0..3)_INT[MIL_RX_BBE_PLCY_CNT_UNF]. */
        uint64_t mil_rx_x2p_prt_vlt    : 1;  /**< [  9:  9](R/W1S/H) Reads or sets MCS(0..6)_MIL_RX_LMAC(0..3)_INT[MIL_RX_X2P_PRT_VLT]. */
        uint64_t mil_rx_x2p_small_packet_drop : 1;/**< [ 10: 10](R/W1S/H) Reads or sets MCS(0..6)_MIL_RX_LMAC(0..3)_INT[MIL_RX_X2P_SMALL_PACKET_DROP]. */
        uint64_t reserved_11_63        : 53;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_mcsx_mil_rx_lmacx_int_w1s_s cn; */
};
typedef union cavm_mcsx_mil_rx_lmacx_int_w1s cavm_mcsx_mil_rx_lmacx_int_w1s_t;

static inline uint64_t CAVM_MCSX_MIL_RX_LMACX_INT_W1S(uint64_t a, uint64_t b) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_MCSX_MIL_RX_LMACX_INT_W1S(uint64_t a, uint64_t b)
{
    if (cavm_is_model(OCTEONTX_CNF10KB) && ((a<=6) && (b<=3)))
        return 0x87e080070030ll + 0x1000000ll * ((a) & 0x7) + 0x800ll * ((b) & 0x3);
    __cavm_csr_fatal("MCSX_MIL_RX_LMACX_INT_W1S", 2, a, b, 0, 0, 0, 0);
}

#define typedef_CAVM_MCSX_MIL_RX_LMACX_INT_W1S(a,b) cavm_mcsx_mil_rx_lmacx_int_w1s_t
#define bustype_CAVM_MCSX_MIL_RX_LMACX_INT_W1S(a,b) CSR_TYPE_RSL
#define basename_CAVM_MCSX_MIL_RX_LMACX_INT_W1S(a,b) "MCSX_MIL_RX_LMACX_INT_W1S"
#define device_bar_CAVM_MCSX_MIL_RX_LMACX_INT_W1S(a,b) 0x0 /* PF_BAR0 */
#define busnum_CAVM_MCSX_MIL_RX_LMACX_INT_W1S(a,b) (a)
#define arguments_CAVM_MCSX_MIL_RX_LMACX_INT_W1S(a,b) (a),(b),-1,-1

/**
 * Register (RSL) mcs#_mil_rx_lmac#_skd_crd_init
 *
 * INTERNAL: MCS MIL RX SKID CREDIT Configuration Register
 */
union cavm_mcsx_mil_rx_lmacx_skd_crd_init
{
    uint64_t u;
    struct cavm_mcsx_mil_rx_lmacx_skd_crd_init_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_7_63         : 57;
        uint64_t rx_skid_credit_init   : 7;  /**< [  6:  0](R/W) RX SKID credit initialization (Init value based on x2p2_p2x2_defs::X2P2_SKID_CREDIT). */
#else /* Word 0 - Little Endian */
        uint64_t rx_skid_credit_init   : 7;  /**< [  6:  0](R/W) RX SKID credit initialization (Init value based on x2p2_p2x2_defs::X2P2_SKID_CREDIT). */
        uint64_t reserved_7_63         : 57;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_mcsx_mil_rx_lmacx_skd_crd_init_s cn; */
};
typedef union cavm_mcsx_mil_rx_lmacx_skd_crd_init cavm_mcsx_mil_rx_lmacx_skd_crd_init_t;

static inline uint64_t CAVM_MCSX_MIL_RX_LMACX_SKD_CRD_INIT(uint64_t a, uint64_t b) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_MCSX_MIL_RX_LMACX_SKD_CRD_INIT(uint64_t a, uint64_t b)
{
    if (cavm_is_model(OCTEONTX_CNF10KB) && ((a<=6) && (b<=3)))
        return 0x87e080070010ll + 0x1000000ll * ((a) & 0x7) + 0x800ll * ((b) & 0x3);
    __cavm_csr_fatal("MCSX_MIL_RX_LMACX_SKD_CRD_INIT", 2, a, b, 0, 0, 0, 0);
}

#define typedef_CAVM_MCSX_MIL_RX_LMACX_SKD_CRD_INIT(a,b) cavm_mcsx_mil_rx_lmacx_skd_crd_init_t
#define bustype_CAVM_MCSX_MIL_RX_LMACX_SKD_CRD_INIT(a,b) CSR_TYPE_RSL
#define basename_CAVM_MCSX_MIL_RX_LMACX_SKD_CRD_INIT(a,b) "MCSX_MIL_RX_LMACX_SKD_CRD_INIT"
#define device_bar_CAVM_MCSX_MIL_RX_LMACX_SKD_CRD_INIT(a,b) 0x0 /* PF_BAR0 */
#define busnum_CAVM_MCSX_MIL_RX_LMACX_SKD_CRD_INIT(a,b) (a)
#define arguments_CAVM_MCSX_MIL_RX_LMACX_SKD_CRD_INIT(a,b) (a),(b),-1,-1

/**
 * Register (RSL) mcs#_mil_rx_lmac#_status
 *
 * INTERNAL: MCS MIL RX Per LMAC Status Register
 */
union cavm_mcsx_mil_rx_lmacx_status
{
    uint64_t u;
    struct cavm_mcsx_mil_rx_lmacx_status_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_33_63        : 31;
        uint64_t bbe_data_crdt         : 7;  /**< [ 32: 26](RO/H) MIL RX BBE data credits (based on BBE data FIFO depth). */
        uint64_t bbe_plcy_crdt         : 5;  /**< [ 25: 21](RO/H) MIL RX BBE POLICY credits (based on BBE POLICY FIFO depth). */
        uint64_t req_heap              : 7;  /**< [ 20: 14](RO/H) MIL RX requests heap fill level. */
        uint64_t skid_crdt             : 7;  /**< [ 13:  7](RO/H) MIL RX SKID credit count (Init value based on x2p2_p2x2_defs::X2P2_SKID_CREDIT). */
        uint64_t skid_fifo_cnt         : 7;  /**< [  6:  0](RO/H) MIL RX SKID FIFO fill level. */
#else /* Word 0 - Little Endian */
        uint64_t skid_fifo_cnt         : 7;  /**< [  6:  0](RO/H) MIL RX SKID FIFO fill level. */
        uint64_t skid_crdt             : 7;  /**< [ 13:  7](RO/H) MIL RX SKID credit count (Init value based on x2p2_p2x2_defs::X2P2_SKID_CREDIT). */
        uint64_t req_heap              : 7;  /**< [ 20: 14](RO/H) MIL RX requests heap fill level. */
        uint64_t bbe_plcy_crdt         : 5;  /**< [ 25: 21](RO/H) MIL RX BBE POLICY credits (based on BBE POLICY FIFO depth). */
        uint64_t bbe_data_crdt         : 7;  /**< [ 32: 26](RO/H) MIL RX BBE data credits (based on BBE data FIFO depth). */
        uint64_t reserved_33_63        : 31;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_mcsx_mil_rx_lmacx_status_s cn; */
};
typedef union cavm_mcsx_mil_rx_lmacx_status cavm_mcsx_mil_rx_lmacx_status_t;

static inline uint64_t CAVM_MCSX_MIL_RX_LMACX_STATUS(uint64_t a, uint64_t b) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_MCSX_MIL_RX_LMACX_STATUS(uint64_t a, uint64_t b)
{
    if (cavm_is_model(OCTEONTX_CNF10KB) && ((a<=6) && (b<=3)))
        return 0x87e0800700b0ll + 0x1000000ll * ((a) & 0x7) + 0x800ll * ((b) & 0x3);
    __cavm_csr_fatal("MCSX_MIL_RX_LMACX_STATUS", 2, a, b, 0, 0, 0, 0);
}

#define typedef_CAVM_MCSX_MIL_RX_LMACX_STATUS(a,b) cavm_mcsx_mil_rx_lmacx_status_t
#define bustype_CAVM_MCSX_MIL_RX_LMACX_STATUS(a,b) CSR_TYPE_RSL
#define basename_CAVM_MCSX_MIL_RX_LMACX_STATUS(a,b) "MCSX_MIL_RX_LMACX_STATUS"
#define device_bar_CAVM_MCSX_MIL_RX_LMACX_STATUS(a,b) 0x0 /* PF_BAR0 */
#define busnum_CAVM_MCSX_MIL_RX_LMACX_STATUS(a,b) (a)
#define arguments_CAVM_MCSX_MIL_RX_LMACX_STATUS(a,b) (a),(b),-1,-1

/**
 * Register (RSL) mcs#_mil_tx_bp_test
 *
 * INTERNAL: MCS MIL TX Backpressure Test Register
 */
union cavm_mcsx_mil_tx_bp_test
{
    uint64_t u;
    struct cavm_mcsx_mil_tx_bp_test_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_49_63        : 15;
        uint64_t enable                : 1;  /**< [ 48: 48](R/W) Enable test mode. For diagnostic use only.
                                                                 Internal:
                                                                 Once a bit is set, random backpressure is generated
                                                                 at the corresponding point to allow for more frequent backpressure.
                                                                 \<48\> = Sending BP from MIL-TX to PAB. */
        uint64_t reserved_18_47        : 30;
        uint64_t bp_cfg                : 2;  /**< [ 17: 16](R/W) Backpressure weight. For diagnostic use only.
                                                                 Internal:
                                                                 There are 2 backpressure configuration bits per enable, with the two bits
                                                                 defined as 0x0=100% of the time, 0x1=75% of the time, 0x2=50% of the time,
                                                                 0x3=25% of the time.
                                                                    \<17:16\> = Config 0.

                                                                  When using 0x0, the constant backpressure means the testbench must toggle the
                                                                  corresponding [ENABLE] bit to keep traffic flowing. */
        uint64_t reserved_12_15        : 4;
        uint64_t lfsr_freq             : 12; /**< [ 11:  0](R/W) Test LFSR update frequency in coprocessor-clocks minus one. */
#else /* Word 0 - Little Endian */
        uint64_t lfsr_freq             : 12; /**< [ 11:  0](R/W) Test LFSR update frequency in coprocessor-clocks minus one. */
        uint64_t reserved_12_15        : 4;
        uint64_t bp_cfg                : 2;  /**< [ 17: 16](R/W) Backpressure weight. For diagnostic use only.
                                                                 Internal:
                                                                 There are 2 backpressure configuration bits per enable, with the two bits
                                                                 defined as 0x0=100% of the time, 0x1=75% of the time, 0x2=50% of the time,
                                                                 0x3=25% of the time.
                                                                    \<17:16\> = Config 0.

                                                                  When using 0x0, the constant backpressure means the testbench must toggle the
                                                                  corresponding [ENABLE] bit to keep traffic flowing. */
        uint64_t reserved_18_47        : 30;
        uint64_t enable                : 1;  /**< [ 48: 48](R/W) Enable test mode. For diagnostic use only.
                                                                 Internal:
                                                                 Once a bit is set, random backpressure is generated
                                                                 at the corresponding point to allow for more frequent backpressure.
                                                                 \<48\> = Sending BP from MIL-TX to PAB. */
        uint64_t reserved_49_63        : 15;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_mcsx_mil_tx_bp_test_s cn; */
};
typedef union cavm_mcsx_mil_tx_bp_test cavm_mcsx_mil_tx_bp_test_t;

static inline uint64_t CAVM_MCSX_MIL_TX_BP_TEST(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_MCSX_MIL_TX_BP_TEST(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CNF10KB) && (a<=6))
        return 0x87e080060018ll + 0x1000000ll * ((a) & 0x7);
    __cavm_csr_fatal("MCSX_MIL_TX_BP_TEST", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_MCSX_MIL_TX_BP_TEST(a) cavm_mcsx_mil_tx_bp_test_t
#define bustype_CAVM_MCSX_MIL_TX_BP_TEST(a) CSR_TYPE_RSL
#define basename_CAVM_MCSX_MIL_TX_BP_TEST(a) "MCSX_MIL_TX_BP_TEST"
#define device_bar_CAVM_MCSX_MIL_TX_BP_TEST(a) 0x0 /* PF_BAR0 */
#define busnum_CAVM_MCSX_MIL_TX_BP_TEST(a) (a)
#define arguments_CAVM_MCSX_MIL_TX_BP_TEST(a) (a),-1,-1,-1

/**
 * Register (RSL) mcs#_mil_tx_lmac#_cfg
 *
 * INTERNAL: RPM Buffer Size Configurations Register
 */
union cavm_mcsx_mil_tx_lmacx_cfg
{
    uint64_t u;
    struct cavm_mcsx_mil_tx_lmacx_cfg_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_16_63        : 48;
        uint64_t rpm_buffer_size       : 16; /**< [ 15:  0](R/W) RPM buffer size in 16B resolution per LMAC. Used for
                                                                 MIL_TX_CC_CNT_OVF/MIL_TX_CC_EOP_CNT_OVF Interrupts threshold. */
#else /* Word 0 - Little Endian */
        uint64_t rpm_buffer_size       : 16; /**< [ 15:  0](R/W) RPM buffer size in 16B resolution per LMAC. Used for
                                                                 MIL_TX_CC_CNT_OVF/MIL_TX_CC_EOP_CNT_OVF Interrupts threshold. */
        uint64_t reserved_16_63        : 48;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_mcsx_mil_tx_lmacx_cfg_s cn; */
};
typedef union cavm_mcsx_mil_tx_lmacx_cfg cavm_mcsx_mil_tx_lmacx_cfg_t;

static inline uint64_t CAVM_MCSX_MIL_TX_LMACX_CFG(uint64_t a, uint64_t b) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_MCSX_MIL_TX_LMACX_CFG(uint64_t a, uint64_t b)
{
    if (cavm_is_model(OCTEONTX_CNF10KB) && ((a<=6) && (b<=3)))
        return 0x87e080070008ll + 0x1000000ll * ((a) & 0x7) + 0x800ll * ((b) & 0x3);
    __cavm_csr_fatal("MCSX_MIL_TX_LMACX_CFG", 2, a, b, 0, 0, 0, 0);
}

#define typedef_CAVM_MCSX_MIL_TX_LMACX_CFG(a,b) cavm_mcsx_mil_tx_lmacx_cfg_t
#define bustype_CAVM_MCSX_MIL_TX_LMACX_CFG(a,b) CSR_TYPE_RSL
#define basename_CAVM_MCSX_MIL_TX_LMACX_CFG(a,b) "MCSX_MIL_TX_LMACX_CFG"
#define device_bar_CAVM_MCSX_MIL_TX_LMACX_CFG(a,b) 0x0 /* PF_BAR0 */
#define busnum_CAVM_MCSX_MIL_TX_LMACX_CFG(a,b) (a)
#define arguments_CAVM_MCSX_MIL_TX_LMACX_CFG(a,b) (a),(b),-1,-1

/**
 * Register (RSL) mcs#_mil_tx_lmac#_int
 *
 * MCS MIL TX Per LMAC Interrupt Register
 * Contains the different interrupt bits of the MCS MIL TX.
 */
union cavm_mcsx_mil_tx_lmacx_int
{
    uint64_t u;
    struct cavm_mcsx_mil_tx_lmacx_int_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_6_63         : 58;
        uint64_t mil_tx_illegal_cc_from_pab : 1;/**< [  5:  5](R/W1C/H) MIL TX illegal number of CCs from PAB, range is 0-4. */
        uint64_t mil_tx_cc_ack_cnt_ovf : 1;  /**< [  4:  4](R/W1C/H) MIL TX MAC CC ACK counter overflow. */
        uint64_t mil_tx_cc_eop_cnt_ovf : 1;  /**< [  3:  3](R/W1C/H) MIL TX MAC CC EOP counter overflow. */
        uint64_t mil_tx_cc_cnt_ovf     : 1;  /**< [  2:  2](R/W1C/H) MIL TX MAC CC counter overflow. */
        uint64_t mil_tx_skid_cnt_unf   : 1;  /**< [  1:  1](R/W1C/H) MIL TX SKID counter underflow. */
        uint64_t mil_tx_skid_cnt_ovf   : 1;  /**< [  0:  0](R/W1C/H) MIL TX SKID counter overflow. */
#else /* Word 0 - Little Endian */
        uint64_t mil_tx_skid_cnt_ovf   : 1;  /**< [  0:  0](R/W1C/H) MIL TX SKID counter overflow. */
        uint64_t mil_tx_skid_cnt_unf   : 1;  /**< [  1:  1](R/W1C/H) MIL TX SKID counter underflow. */
        uint64_t mil_tx_cc_cnt_ovf     : 1;  /**< [  2:  2](R/W1C/H) MIL TX MAC CC counter overflow. */
        uint64_t mil_tx_cc_eop_cnt_ovf : 1;  /**< [  3:  3](R/W1C/H) MIL TX MAC CC EOP counter overflow. */
        uint64_t mil_tx_cc_ack_cnt_ovf : 1;  /**< [  4:  4](R/W1C/H) MIL TX MAC CC ACK counter overflow. */
        uint64_t mil_tx_illegal_cc_from_pab : 1;/**< [  5:  5](R/W1C/H) MIL TX illegal number of CCs from PAB, range is 0-4. */
        uint64_t reserved_6_63         : 58;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_mcsx_mil_tx_lmacx_int_s cn; */
};
typedef union cavm_mcsx_mil_tx_lmacx_int cavm_mcsx_mil_tx_lmacx_int_t;

static inline uint64_t CAVM_MCSX_MIL_TX_LMACX_INT(uint64_t a, uint64_t b) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_MCSX_MIL_TX_LMACX_INT(uint64_t a, uint64_t b)
{
    if (cavm_is_model(OCTEONTX_CNF10KB) && ((a<=6) && (b<=3)))
        return 0x87e080070068ll + 0x1000000ll * ((a) & 0x7) + 0x800ll * ((b) & 0x3);
    __cavm_csr_fatal("MCSX_MIL_TX_LMACX_INT", 2, a, b, 0, 0, 0, 0);
}

#define typedef_CAVM_MCSX_MIL_TX_LMACX_INT(a,b) cavm_mcsx_mil_tx_lmacx_int_t
#define bustype_CAVM_MCSX_MIL_TX_LMACX_INT(a,b) CSR_TYPE_RSL
#define basename_CAVM_MCSX_MIL_TX_LMACX_INT(a,b) "MCSX_MIL_TX_LMACX_INT"
#define device_bar_CAVM_MCSX_MIL_TX_LMACX_INT(a,b) 0x0 /* PF_BAR0 */
#define busnum_CAVM_MCSX_MIL_TX_LMACX_INT(a,b) (a)
#define arguments_CAVM_MCSX_MIL_TX_LMACX_INT(a,b) (a),(b),-1,-1

/**
 * Register (RSL) mcs#_mil_tx_lmac#_int_ena_w1c
 *
 * MCS MIL TX Interrupt Enable Clear Register
 * This register clears interrupt enable bits.
 */
union cavm_mcsx_mil_tx_lmacx_int_ena_w1c
{
    uint64_t u;
    struct cavm_mcsx_mil_tx_lmacx_int_ena_w1c_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_6_63         : 58;
        uint64_t mil_tx_illegal_cc_from_pab : 1;/**< [  5:  5](R/W1C/H) Reads or clears enable for MCS(0..6)_MIL_TX_LMAC(0..3)_INT[MIL_TX_ILLEGAL_CC_FROM_PAB]. */
        uint64_t mil_tx_cc_ack_cnt_ovf : 1;  /**< [  4:  4](R/W1C/H) Reads or clears enable for MCS(0..6)_MIL_TX_LMAC(0..3)_INT[MIL_TX_CC_ACK_CNT_OVF]. */
        uint64_t mil_tx_cc_eop_cnt_ovf : 1;  /**< [  3:  3](R/W1C/H) Reads or clears enable for MCS(0..6)_MIL_TX_LMAC(0..3)_INT[MIL_TX_CC_EOP_CNT_OVF]. */
        uint64_t mil_tx_cc_cnt_ovf     : 1;  /**< [  2:  2](R/W1C/H) Reads or clears enable for MCS(0..6)_MIL_TX_LMAC(0..3)_INT[MIL_TX_CC_CNT_OVF]. */
        uint64_t mil_tx_skid_cnt_unf   : 1;  /**< [  1:  1](R/W1C/H) Reads or clears enable for MCS(0..6)_MIL_TX_LMAC(0..3)_INT[MIL_TX_SKID_CNT_UNF]. */
        uint64_t mil_tx_skid_cnt_ovf   : 1;  /**< [  0:  0](R/W1C/H) Reads or clears enable for MCS(0..6)_MIL_TX_LMAC(0..3)_INT[MIL_TX_SKID_CNT_OVF]. */
#else /* Word 0 - Little Endian */
        uint64_t mil_tx_skid_cnt_ovf   : 1;  /**< [  0:  0](R/W1C/H) Reads or clears enable for MCS(0..6)_MIL_TX_LMAC(0..3)_INT[MIL_TX_SKID_CNT_OVF]. */
        uint64_t mil_tx_skid_cnt_unf   : 1;  /**< [  1:  1](R/W1C/H) Reads or clears enable for MCS(0..6)_MIL_TX_LMAC(0..3)_INT[MIL_TX_SKID_CNT_UNF]. */
        uint64_t mil_tx_cc_cnt_ovf     : 1;  /**< [  2:  2](R/W1C/H) Reads or clears enable for MCS(0..6)_MIL_TX_LMAC(0..3)_INT[MIL_TX_CC_CNT_OVF]. */
        uint64_t mil_tx_cc_eop_cnt_ovf : 1;  /**< [  3:  3](R/W1C/H) Reads or clears enable for MCS(0..6)_MIL_TX_LMAC(0..3)_INT[MIL_TX_CC_EOP_CNT_OVF]. */
        uint64_t mil_tx_cc_ack_cnt_ovf : 1;  /**< [  4:  4](R/W1C/H) Reads or clears enable for MCS(0..6)_MIL_TX_LMAC(0..3)_INT[MIL_TX_CC_ACK_CNT_OVF]. */
        uint64_t mil_tx_illegal_cc_from_pab : 1;/**< [  5:  5](R/W1C/H) Reads or clears enable for MCS(0..6)_MIL_TX_LMAC(0..3)_INT[MIL_TX_ILLEGAL_CC_FROM_PAB]. */
        uint64_t reserved_6_63         : 58;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_mcsx_mil_tx_lmacx_int_ena_w1c_s cn; */
};
typedef union cavm_mcsx_mil_tx_lmacx_int_ena_w1c cavm_mcsx_mil_tx_lmacx_int_ena_w1c_t;

static inline uint64_t CAVM_MCSX_MIL_TX_LMACX_INT_ENA_W1C(uint64_t a, uint64_t b) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_MCSX_MIL_TX_LMACX_INT_ENA_W1C(uint64_t a, uint64_t b)
{
    if (cavm_is_model(OCTEONTX_CNF10KB) && ((a<=6) && (b<=3)))
        return 0x87e080070078ll + 0x1000000ll * ((a) & 0x7) + 0x800ll * ((b) & 0x3);
    __cavm_csr_fatal("MCSX_MIL_TX_LMACX_INT_ENA_W1C", 2, a, b, 0, 0, 0, 0);
}

#define typedef_CAVM_MCSX_MIL_TX_LMACX_INT_ENA_W1C(a,b) cavm_mcsx_mil_tx_lmacx_int_ena_w1c_t
#define bustype_CAVM_MCSX_MIL_TX_LMACX_INT_ENA_W1C(a,b) CSR_TYPE_RSL
#define basename_CAVM_MCSX_MIL_TX_LMACX_INT_ENA_W1C(a,b) "MCSX_MIL_TX_LMACX_INT_ENA_W1C"
#define device_bar_CAVM_MCSX_MIL_TX_LMACX_INT_ENA_W1C(a,b) 0x0 /* PF_BAR0 */
#define busnum_CAVM_MCSX_MIL_TX_LMACX_INT_ENA_W1C(a,b) (a)
#define arguments_CAVM_MCSX_MIL_TX_LMACX_INT_ENA_W1C(a,b) (a),(b),-1,-1

/**
 * Register (RSL) mcs#_mil_tx_lmac#_int_ena_w1s
 *
 * MCS MIL TX Interrupt Enable Set Register
 * This register sets interrupt enable bits.
 */
union cavm_mcsx_mil_tx_lmacx_int_ena_w1s
{
    uint64_t u;
    struct cavm_mcsx_mil_tx_lmacx_int_ena_w1s_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_6_63         : 58;
        uint64_t mil_tx_illegal_cc_from_pab : 1;/**< [  5:  5](R/W1S/H) Reads or sets enable for MCS(0..6)_MIL_TX_LMAC(0..3)_INT[MIL_TX_ILLEGAL_CC_FROM_PAB]. */
        uint64_t mil_tx_cc_ack_cnt_ovf : 1;  /**< [  4:  4](R/W1S/H) Reads or sets enable for MCS(0..6)_MIL_TX_LMAC(0..3)_INT[MIL_TX_CC_ACK_CNT_OVF]. */
        uint64_t mil_tx_cc_eop_cnt_ovf : 1;  /**< [  3:  3](R/W1S/H) Reads or sets enable for MCS(0..6)_MIL_TX_LMAC(0..3)_INT[MIL_TX_CC_EOP_CNT_OVF]. */
        uint64_t mil_tx_cc_cnt_ovf     : 1;  /**< [  2:  2](R/W1S/H) Reads or sets enable for MCS(0..6)_MIL_TX_LMAC(0..3)_INT[MIL_TX_CC_CNT_OVF]. */
        uint64_t mil_tx_skid_cnt_unf   : 1;  /**< [  1:  1](R/W1S/H) Reads or sets enable for MCS(0..6)_MIL_TX_LMAC(0..3)_INT[MIL_TX_SKID_CNT_UNF]. */
        uint64_t mil_tx_skid_cnt_ovf   : 1;  /**< [  0:  0](R/W1S/H) Reads or sets enable for MCS(0..6)_MIL_TX_LMAC(0..3)_INT[MIL_TX_SKID_CNT_OVF]. */
#else /* Word 0 - Little Endian */
        uint64_t mil_tx_skid_cnt_ovf   : 1;  /**< [  0:  0](R/W1S/H) Reads or sets enable for MCS(0..6)_MIL_TX_LMAC(0..3)_INT[MIL_TX_SKID_CNT_OVF]. */
        uint64_t mil_tx_skid_cnt_unf   : 1;  /**< [  1:  1](R/W1S/H) Reads or sets enable for MCS(0..6)_MIL_TX_LMAC(0..3)_INT[MIL_TX_SKID_CNT_UNF]. */
        uint64_t mil_tx_cc_cnt_ovf     : 1;  /**< [  2:  2](R/W1S/H) Reads or sets enable for MCS(0..6)_MIL_TX_LMAC(0..3)_INT[MIL_TX_CC_CNT_OVF]. */
        uint64_t mil_tx_cc_eop_cnt_ovf : 1;  /**< [  3:  3](R/W1S/H) Reads or sets enable for MCS(0..6)_MIL_TX_LMAC(0..3)_INT[MIL_TX_CC_EOP_CNT_OVF]. */
        uint64_t mil_tx_cc_ack_cnt_ovf : 1;  /**< [  4:  4](R/W1S/H) Reads or sets enable for MCS(0..6)_MIL_TX_LMAC(0..3)_INT[MIL_TX_CC_ACK_CNT_OVF]. */
        uint64_t mil_tx_illegal_cc_from_pab : 1;/**< [  5:  5](R/W1S/H) Reads or sets enable for MCS(0..6)_MIL_TX_LMAC(0..3)_INT[MIL_TX_ILLEGAL_CC_FROM_PAB]. */
        uint64_t reserved_6_63         : 58;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_mcsx_mil_tx_lmacx_int_ena_w1s_s cn; */
};
typedef union cavm_mcsx_mil_tx_lmacx_int_ena_w1s cavm_mcsx_mil_tx_lmacx_int_ena_w1s_t;

static inline uint64_t CAVM_MCSX_MIL_TX_LMACX_INT_ENA_W1S(uint64_t a, uint64_t b) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_MCSX_MIL_TX_LMACX_INT_ENA_W1S(uint64_t a, uint64_t b)
{
    if (cavm_is_model(OCTEONTX_CNF10KB) && ((a<=6) && (b<=3)))
        return 0x87e080070080ll + 0x1000000ll * ((a) & 0x7) + 0x800ll * ((b) & 0x3);
    __cavm_csr_fatal("MCSX_MIL_TX_LMACX_INT_ENA_W1S", 2, a, b, 0, 0, 0, 0);
}

#define typedef_CAVM_MCSX_MIL_TX_LMACX_INT_ENA_W1S(a,b) cavm_mcsx_mil_tx_lmacx_int_ena_w1s_t
#define bustype_CAVM_MCSX_MIL_TX_LMACX_INT_ENA_W1S(a,b) CSR_TYPE_RSL
#define basename_CAVM_MCSX_MIL_TX_LMACX_INT_ENA_W1S(a,b) "MCSX_MIL_TX_LMACX_INT_ENA_W1S"
#define device_bar_CAVM_MCSX_MIL_TX_LMACX_INT_ENA_W1S(a,b) 0x0 /* PF_BAR0 */
#define busnum_CAVM_MCSX_MIL_TX_LMACX_INT_ENA_W1S(a,b) (a)
#define arguments_CAVM_MCSX_MIL_TX_LMACX_INT_ENA_W1S(a,b) (a),(b),-1,-1

/**
 * Register (RSL) mcs#_mil_tx_lmac#_int_w1s
 *
 * MCS MIL TX Interrupt Set Register
 * This register sets interrupt bits.
 */
union cavm_mcsx_mil_tx_lmacx_int_w1s
{
    uint64_t u;
    struct cavm_mcsx_mil_tx_lmacx_int_w1s_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_6_63         : 58;
        uint64_t mil_tx_illegal_cc_from_pab : 1;/**< [  5:  5](R/W1S/H) Reads or sets MCS(0..6)_MIL_TX_LMAC(0..3)_INT[MIL_TX_ILLEGAL_CC_FROM_PAB]. */
        uint64_t mil_tx_cc_ack_cnt_ovf : 1;  /**< [  4:  4](R/W1S/H) Reads or sets MCS(0..6)_MIL_TX_LMAC(0..3)_INT[MIL_TX_CC_ACK_CNT_OVF]. */
        uint64_t mil_tx_cc_eop_cnt_ovf : 1;  /**< [  3:  3](R/W1S/H) Reads or sets MCS(0..6)_MIL_TX_LMAC(0..3)_INT[MIL_TX_CC_EOP_CNT_OVF]. */
        uint64_t mil_tx_cc_cnt_ovf     : 1;  /**< [  2:  2](R/W1S/H) Reads or sets MCS(0..6)_MIL_TX_LMAC(0..3)_INT[MIL_TX_CC_CNT_OVF]. */
        uint64_t mil_tx_skid_cnt_unf   : 1;  /**< [  1:  1](R/W1S/H) Reads or sets MCS(0..6)_MIL_TX_LMAC(0..3)_INT[MIL_TX_SKID_CNT_UNF]. */
        uint64_t mil_tx_skid_cnt_ovf   : 1;  /**< [  0:  0](R/W1S/H) Reads or sets MCS(0..6)_MIL_TX_LMAC(0..3)_INT[MIL_TX_SKID_CNT_OVF]. */
#else /* Word 0 - Little Endian */
        uint64_t mil_tx_skid_cnt_ovf   : 1;  /**< [  0:  0](R/W1S/H) Reads or sets MCS(0..6)_MIL_TX_LMAC(0..3)_INT[MIL_TX_SKID_CNT_OVF]. */
        uint64_t mil_tx_skid_cnt_unf   : 1;  /**< [  1:  1](R/W1S/H) Reads or sets MCS(0..6)_MIL_TX_LMAC(0..3)_INT[MIL_TX_SKID_CNT_UNF]. */
        uint64_t mil_tx_cc_cnt_ovf     : 1;  /**< [  2:  2](R/W1S/H) Reads or sets MCS(0..6)_MIL_TX_LMAC(0..3)_INT[MIL_TX_CC_CNT_OVF]. */
        uint64_t mil_tx_cc_eop_cnt_ovf : 1;  /**< [  3:  3](R/W1S/H) Reads or sets MCS(0..6)_MIL_TX_LMAC(0..3)_INT[MIL_TX_CC_EOP_CNT_OVF]. */
        uint64_t mil_tx_cc_ack_cnt_ovf : 1;  /**< [  4:  4](R/W1S/H) Reads or sets MCS(0..6)_MIL_TX_LMAC(0..3)_INT[MIL_TX_CC_ACK_CNT_OVF]. */
        uint64_t mil_tx_illegal_cc_from_pab : 1;/**< [  5:  5](R/W1S/H) Reads or sets MCS(0..6)_MIL_TX_LMAC(0..3)_INT[MIL_TX_ILLEGAL_CC_FROM_PAB]. */
        uint64_t reserved_6_63         : 58;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_mcsx_mil_tx_lmacx_int_w1s_s cn; */
};
typedef union cavm_mcsx_mil_tx_lmacx_int_w1s cavm_mcsx_mil_tx_lmacx_int_w1s_t;

static inline uint64_t CAVM_MCSX_MIL_TX_LMACX_INT_W1S(uint64_t a, uint64_t b) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_MCSX_MIL_TX_LMACX_INT_W1S(uint64_t a, uint64_t b)
{
    if (cavm_is_model(OCTEONTX_CNF10KB) && ((a<=6) && (b<=3)))
        return 0x87e080070070ll + 0x1000000ll * ((a) & 0x7) + 0x800ll * ((b) & 0x3);
    __cavm_csr_fatal("MCSX_MIL_TX_LMACX_INT_W1S", 2, a, b, 0, 0, 0, 0);
}

#define typedef_CAVM_MCSX_MIL_TX_LMACX_INT_W1S(a,b) cavm_mcsx_mil_tx_lmacx_int_w1s_t
#define bustype_CAVM_MCSX_MIL_TX_LMACX_INT_W1S(a,b) CSR_TYPE_RSL
#define basename_CAVM_MCSX_MIL_TX_LMACX_INT_W1S(a,b) "MCSX_MIL_TX_LMACX_INT_W1S"
#define device_bar_CAVM_MCSX_MIL_TX_LMACX_INT_W1S(a,b) 0x0 /* PF_BAR0 */
#define busnum_CAVM_MCSX_MIL_TX_LMACX_INT_W1S(a,b) (a)
#define arguments_CAVM_MCSX_MIL_TX_LMACX_INT_W1S(a,b) (a),(b),-1,-1

/**
 * Register (RSL) mcs#_mil_tx_lmac#_status
 *
 * INTERNAL: MCS MIL TX Per LMAC Status Register
 */
union cavm_mcsx_mil_tx_lmacx_status
{
    uint64_t u;
    struct cavm_mcsx_mil_tx_lmacx_status_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_44_63        : 20;
        uint64_t mil_ch_crdt_sm        : 2;  /**< [ 43: 42](RO/H) TX channel credit state machine. */
        uint64_t accumulate_eop        : 17; /**< [ 41: 25](RO/H) MIL TX channel credit PAB/MAC eop accumulator. */
        uint64_t accumulate_crdt       : 17; /**< [ 24:  8](RO/H) MIL TX channel credit PAB/MAC credits accumulator. */
        uint64_t pab_bp                : 1;  /**< [  7:  7](RO/H) TX PAB back pressure status. */
        uint64_t skid_crdt             : 7;  /**< [  6:  0](RO/H) MIL TX SKID credits counter (init value based on x2p2_p2x2_defs::P2X2_SKID_CREDIT). */
#else /* Word 0 - Little Endian */
        uint64_t skid_crdt             : 7;  /**< [  6:  0](RO/H) MIL TX SKID credits counter (init value based on x2p2_p2x2_defs::P2X2_SKID_CREDIT). */
        uint64_t pab_bp                : 1;  /**< [  7:  7](RO/H) TX PAB back pressure status. */
        uint64_t accumulate_crdt       : 17; /**< [ 24:  8](RO/H) MIL TX channel credit PAB/MAC credits accumulator. */
        uint64_t accumulate_eop        : 17; /**< [ 41: 25](RO/H) MIL TX channel credit PAB/MAC eop accumulator. */
        uint64_t mil_ch_crdt_sm        : 2;  /**< [ 43: 42](RO/H) TX channel credit state machine. */
        uint64_t reserved_44_63        : 20;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_mcsx_mil_tx_lmacx_status_s cn; */
};
typedef union cavm_mcsx_mil_tx_lmacx_status cavm_mcsx_mil_tx_lmacx_status_t;

static inline uint64_t CAVM_MCSX_MIL_TX_LMACX_STATUS(uint64_t a, uint64_t b) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_MCSX_MIL_TX_LMACX_STATUS(uint64_t a, uint64_t b)
{
    if (cavm_is_model(OCTEONTX_CNF10KB) && ((a<=6) && (b<=3)))
        return 0x87e0800700b8ll + 0x1000000ll * ((a) & 0x7) + 0x800ll * ((b) & 0x3);
    __cavm_csr_fatal("MCSX_MIL_TX_LMACX_STATUS", 2, a, b, 0, 0, 0, 0);
}

#define typedef_CAVM_MCSX_MIL_TX_LMACX_STATUS(a,b) cavm_mcsx_mil_tx_lmacx_status_t
#define bustype_CAVM_MCSX_MIL_TX_LMACX_STATUS(a,b) CSR_TYPE_RSL
#define basename_CAVM_MCSX_MIL_TX_LMACX_STATUS(a,b) "MCSX_MIL_TX_LMACX_STATUS"
#define device_bar_CAVM_MCSX_MIL_TX_LMACX_STATUS(a,b) 0x0 /* PF_BAR0 */
#define busnum_CAVM_MCSX_MIL_TX_LMACX_STATUS(a,b) (a)
#define arguments_CAVM_MCSX_MIL_TX_LMACX_STATUS(a,b) (a),(b),-1,-1

/**
 * Register (RSL) mcs#_mil_tx_skid_credit_init
 *
 * INTERNAL: MCS MIL TX SKID Credit Configuration Register
 */
union cavm_mcsx_mil_tx_skid_credit_init
{
    uint64_t u;
    struct cavm_mcsx_mil_tx_skid_credit_init_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_7_63         : 57;
        uint64_t tx_skid_credit_init   : 7;  /**< [  6:  0](R/W) TX SKID credit initialization (Init value based on x2p2_p2x2_defs::P2X2_SKID_CREDIT). */
#else /* Word 0 - Little Endian */
        uint64_t tx_skid_credit_init   : 7;  /**< [  6:  0](R/W) TX SKID credit initialization (Init value based on x2p2_p2x2_defs::P2X2_SKID_CREDIT). */
        uint64_t reserved_7_63         : 57;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_mcsx_mil_tx_skid_credit_init_s cn; */
};
typedef union cavm_mcsx_mil_tx_skid_credit_init cavm_mcsx_mil_tx_skid_credit_init_t;

static inline uint64_t CAVM_MCSX_MIL_TX_SKID_CREDIT_INIT(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_MCSX_MIL_TX_SKID_CREDIT_INIT(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CNF10KB) && (a<=6))
        return 0x87e080060020ll + 0x1000000ll * ((a) & 0x7);
    __cavm_csr_fatal("MCSX_MIL_TX_SKID_CREDIT_INIT", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_MCSX_MIL_TX_SKID_CREDIT_INIT(a) cavm_mcsx_mil_tx_skid_credit_init_t
#define bustype_CAVM_MCSX_MIL_TX_SKID_CREDIT_INIT(a) CSR_TYPE_RSL
#define basename_CAVM_MCSX_MIL_TX_SKID_CREDIT_INIT(a) "MCSX_MIL_TX_SKID_CREDIT_INIT"
#define device_bar_CAVM_MCSX_MIL_TX_SKID_CREDIT_INIT(a) 0x0 /* PF_BAR0 */
#define busnum_CAVM_MCSX_MIL_TX_SKID_CREDIT_INIT(a) (a)
#define arguments_CAVM_MCSX_MIL_TX_SKID_CREDIT_INIT(a) (a),-1,-1,-1

/**
 * Register (RSL) mcs#_msix_pba#
 *
 * MCS MSI-X Pending Bit Array Registers
 * This register is the MSI-X PBA table, the bit number is indexed by the MCS_INT_VEC_E
 * enumeration.
 */
union cavm_mcsx_msix_pbax
{
    uint64_t u;
    struct cavm_mcsx_msix_pbax_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t pend                  : 64; /**< [ 63:  0](RO/H) Pending message for the associated MCS()_MSIX_VEC()_CTL, enumerated by MCS_INT_VEC_E.
                                                                 Bits that have no associated MCS_INT_VEC_E are zero. */
#else /* Word 0 - Little Endian */
        uint64_t pend                  : 64; /**< [ 63:  0](RO/H) Pending message for the associated MCS()_MSIX_VEC()_CTL, enumerated by MCS_INT_VEC_E.
                                                                 Bits that have no associated MCS_INT_VEC_E are zero. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_mcsx_msix_pbax_s cn; */
};
typedef union cavm_mcsx_msix_pbax cavm_mcsx_msix_pbax_t;

static inline uint64_t CAVM_MCSX_MSIX_PBAX(uint64_t a, uint64_t b) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_MCSX_MSIX_PBAX(uint64_t a, uint64_t b)
{
    if (cavm_is_model(OCTEONTX_CNF10KB) && ((a<=6) && (b==0)))
        return 0x87e080ff0000ll + 0x1000000ll * ((a) & 0x7) + 8ll * ((b) & 0x0);
    __cavm_csr_fatal("MCSX_MSIX_PBAX", 2, a, b, 0, 0, 0, 0);
}

#define typedef_CAVM_MCSX_MSIX_PBAX(a,b) cavm_mcsx_msix_pbax_t
#define bustype_CAVM_MCSX_MSIX_PBAX(a,b) CSR_TYPE_RSL
#define basename_CAVM_MCSX_MSIX_PBAX(a,b) "MCSX_MSIX_PBAX"
#define device_bar_CAVM_MCSX_MSIX_PBAX(a,b) 0x4 /* PF_BAR4 */
#define busnum_CAVM_MCSX_MSIX_PBAX(a,b) (a)
#define arguments_CAVM_MCSX_MSIX_PBAX(a,b) (a),(b),-1,-1

/**
 * Register (RSL) mcs#_msix_vec#_addr
 *
 * MCS MSI-X Vector Table Address Registers
 * This register is the MSI-X vector table, indexed by the MCS_INT_VEC_E enumeration.
 */
union cavm_mcsx_msix_vecx_addr
{
    uint64_t u;
    struct cavm_mcsx_msix_vecx_addr_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_53_63        : 11;
        uint64_t addr                  : 51; /**< [ 52:  2](R/W) IOVA to use for MSI-X delivery of this vector. */
        uint64_t reserved_1            : 1;
        uint64_t secvec                : 1;  /**< [  0:  0](SR/W) Secure vector.
                                                                 0 = This vector may be read or written by either secure or nonsecure states.
                                                                 1 = This vector's MCS()_MSIX_VEC()_ADDR, MCS()_MSIX_VEC()_CTL, and corresponding
                                                                 bit of MCS()_MSIX_PBA() are RAZ/WI and does not cause a fault when accessed
                                                                 by the nonsecure world.

                                                                 If PCCPF_MCS()_VSEC_SCTL[MSIX_SEC] (for documentation, see PCCPF_XXX_VSEC_SCTL[MSIX_SEC])
                                                                 is set, all vectors are secure and function as if [SECVEC] was set. */
#else /* Word 0 - Little Endian */
        uint64_t secvec                : 1;  /**< [  0:  0](SR/W) Secure vector.
                                                                 0 = This vector may be read or written by either secure or nonsecure states.
                                                                 1 = This vector's MCS()_MSIX_VEC()_ADDR, MCS()_MSIX_VEC()_CTL, and corresponding
                                                                 bit of MCS()_MSIX_PBA() are RAZ/WI and does not cause a fault when accessed
                                                                 by the nonsecure world.

                                                                 If PCCPF_MCS()_VSEC_SCTL[MSIX_SEC] (for documentation, see PCCPF_XXX_VSEC_SCTL[MSIX_SEC])
                                                                 is set, all vectors are secure and function as if [SECVEC] was set. */
        uint64_t reserved_1            : 1;
        uint64_t addr                  : 51; /**< [ 52:  2](R/W) IOVA to use for MSI-X delivery of this vector. */
        uint64_t reserved_53_63        : 11;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_mcsx_msix_vecx_addr_s cn; */
};
typedef union cavm_mcsx_msix_vecx_addr cavm_mcsx_msix_vecx_addr_t;

static inline uint64_t CAVM_MCSX_MSIX_VECX_ADDR(uint64_t a, uint64_t b) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_MCSX_MSIX_VECX_ADDR(uint64_t a, uint64_t b)
{
    if (cavm_is_model(OCTEONTX_CNF10KB) && ((a<=6) && (b<=19)))
        return 0x87e080f00000ll + 0x1000000ll * ((a) & 0x7) + 0x10ll * ((b) & 0x1f);
    __cavm_csr_fatal("MCSX_MSIX_VECX_ADDR", 2, a, b, 0, 0, 0, 0);
}

#define typedef_CAVM_MCSX_MSIX_VECX_ADDR(a,b) cavm_mcsx_msix_vecx_addr_t
#define bustype_CAVM_MCSX_MSIX_VECX_ADDR(a,b) CSR_TYPE_RSL
#define basename_CAVM_MCSX_MSIX_VECX_ADDR(a,b) "MCSX_MSIX_VECX_ADDR"
#define device_bar_CAVM_MCSX_MSIX_VECX_ADDR(a,b) 0x4 /* PF_BAR4 */
#define busnum_CAVM_MCSX_MSIX_VECX_ADDR(a,b) (a)
#define arguments_CAVM_MCSX_MSIX_VECX_ADDR(a,b) (a),(b),-1,-1

/**
 * Register (RSL) mcs#_msix_vec#_ctl
 *
 * MCS MSI-X Vector Table Control and Data Registers
 * This register is the MSI-X vector table, indexed by the MCS_INT_VEC_E enumeration.
 */
union cavm_mcsx_msix_vecx_ctl
{
    uint64_t u;
    struct cavm_mcsx_msix_vecx_ctl_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_33_63        : 31;
        uint64_t mask                  : 1;  /**< [ 32: 32](R/W) When set, no MSI-X interrupts will be sent to this vector. */
        uint64_t data                  : 32; /**< [ 31:  0](R/W) Data to use for MSI-X delivery of this vector. */
#else /* Word 0 - Little Endian */
        uint64_t data                  : 32; /**< [ 31:  0](R/W) Data to use for MSI-X delivery of this vector. */
        uint64_t mask                  : 1;  /**< [ 32: 32](R/W) When set, no MSI-X interrupts will be sent to this vector. */
        uint64_t reserved_33_63        : 31;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_mcsx_msix_vecx_ctl_s cn; */
};
typedef union cavm_mcsx_msix_vecx_ctl cavm_mcsx_msix_vecx_ctl_t;

static inline uint64_t CAVM_MCSX_MSIX_VECX_CTL(uint64_t a, uint64_t b) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_MCSX_MSIX_VECX_CTL(uint64_t a, uint64_t b)
{
    if (cavm_is_model(OCTEONTX_CNF10KB) && ((a<=6) && (b<=19)))
        return 0x87e080f00008ll + 0x1000000ll * ((a) & 0x7) + 0x10ll * ((b) & 0x1f);
    __cavm_csr_fatal("MCSX_MSIX_VECX_CTL", 2, a, b, 0, 0, 0, 0);
}

#define typedef_CAVM_MCSX_MSIX_VECX_CTL(a,b) cavm_mcsx_msix_vecx_ctl_t
#define bustype_CAVM_MCSX_MSIX_VECX_CTL(a,b) CSR_TYPE_RSL
#define basename_CAVM_MCSX_MSIX_VECX_CTL(a,b) "MCSX_MSIX_VECX_CTL"
#define device_bar_CAVM_MCSX_MSIX_VECX_CTL(a,b) 0x4 /* PF_BAR4 */
#define busnum_CAVM_MCSX_MSIX_VECX_CTL(a,b) (a)
#define arguments_CAVM_MCSX_MSIX_VECX_CTL(a,b) (a),(b),-1,-1

/**
 * Register (RSL) mcs#_pab_rx_slave_dbg_mux_sel
 *
 * MCS Pab Rx Slave Dbg Mux Sel Register
 * Per segment mux control for the debug_mux.  Configuration of this register will
 * affect which debug set is output on the corresponding debug mux logic for the PAB.
 */
union cavm_mcsx_pab_rx_slave_dbg_mux_sel
{
    uint64_t u;
    struct cavm_mcsx_pab_rx_slave_dbg_mux_sel_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_30_63        : 34;
        uint64_t seg3                  : 6;  /**< [ 29: 24](R/W) Select which debug set is output on the segment3 of the debug mux for the PAB.
                                                                 Note that a higher level dbg_mux_sel also exists to select which block's debug
                                                                 sets are to be output of the IP */
        uint64_t reserved_22_23        : 2;
        uint64_t seg2                  : 6;  /**< [ 21: 16](R/W) Select which debug set is output on the segment2 of the debug mux for the PAB.
                                                                 Note that a higher level dbg_mux_sel also exists to select which block's debug
                                                                 sets are to be output of the IP */
        uint64_t reserved_14_15        : 2;
        uint64_t seg1                  : 6;  /**< [ 13:  8](R/W) Select which debug set is output on the segment1 of the debug mux for the PAB.
                                                                 Note that a higher level dbg_mux_sel also exists to select which block's debug
                                                                 sets are to be output of the IP */
        uint64_t reserved_6_7          : 2;
        uint64_t seg0                  : 6;  /**< [  5:  0](R/W) Select which debug set is output on the segment0 of the debug mux for the PAB.
                                                                 Note that a higher level dbg_mux_sel also exists to select which block's debug
                                                                 sets are to be output of the IP */
#else /* Word 0 - Little Endian */
        uint64_t seg0                  : 6;  /**< [  5:  0](R/W) Select which debug set is output on the segment0 of the debug mux for the PAB.
                                                                 Note that a higher level dbg_mux_sel also exists to select which block's debug
                                                                 sets are to be output of the IP */
        uint64_t reserved_6_7          : 2;
        uint64_t seg1                  : 6;  /**< [ 13:  8](R/W) Select which debug set is output on the segment1 of the debug mux for the PAB.
                                                                 Note that a higher level dbg_mux_sel also exists to select which block's debug
                                                                 sets are to be output of the IP */
        uint64_t reserved_14_15        : 2;
        uint64_t seg2                  : 6;  /**< [ 21: 16](R/W) Select which debug set is output on the segment2 of the debug mux for the PAB.
                                                                 Note that a higher level dbg_mux_sel also exists to select which block's debug
                                                                 sets are to be output of the IP */
        uint64_t reserved_22_23        : 2;
        uint64_t seg3                  : 6;  /**< [ 29: 24](R/W) Select which debug set is output on the segment3 of the debug mux for the PAB.
                                                                 Note that a higher level dbg_mux_sel also exists to select which block's debug
                                                                 sets are to be output of the IP */
        uint64_t reserved_30_63        : 34;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_mcsx_pab_rx_slave_dbg_mux_sel_s cn; */
};
typedef union cavm_mcsx_pab_rx_slave_dbg_mux_sel cavm_mcsx_pab_rx_slave_dbg_mux_sel_t;

static inline uint64_t CAVM_MCSX_PAB_RX_SLAVE_DBG_MUX_SEL(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_MCSX_PAB_RX_SLAVE_DBG_MUX_SEL(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CNF10KB) && (a<=6))
        return 0x87e080000368ll + 0x1000000ll * ((a) & 0x7);
    __cavm_csr_fatal("MCSX_PAB_RX_SLAVE_DBG_MUX_SEL", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_MCSX_PAB_RX_SLAVE_DBG_MUX_SEL(a) cavm_mcsx_pab_rx_slave_dbg_mux_sel_t
#define bustype_CAVM_MCSX_PAB_RX_SLAVE_DBG_MUX_SEL(a) CSR_TYPE_RSL
#define basename_CAVM_MCSX_PAB_RX_SLAVE_DBG_MUX_SEL(a) "MCSX_PAB_RX_SLAVE_DBG_MUX_SEL"
#define device_bar_CAVM_MCSX_PAB_RX_SLAVE_DBG_MUX_SEL(a) 0x0 /* PF_BAR0 */
#define busnum_CAVM_MCSX_PAB_RX_SLAVE_DBG_MUX_SEL(a) (a)
#define arguments_CAVM_MCSX_PAB_RX_SLAVE_DBG_MUX_SEL(a) (a),-1,-1,-1

/**
 * Register (RSL) mcs#_pab_rx_slave_debug_status
 *
 * MCS Pab Rx Slave Debug Status Register
 * Debug status register:  Captures the debug set selected by dbg_mux_sel.
 */
union cavm_mcsx_pab_rx_slave_debug_status
{
    uint64_t u;
    struct cavm_mcsx_pab_rx_slave_debug_status_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t seg3                  : 16; /**< [ 63: 48](RO) Debug set status for segment3. */
        uint64_t seg2                  : 16; /**< [ 47: 32](RO) Debug set status for segment2. */
        uint64_t seg1                  : 16; /**< [ 31: 16](RO) Debug set status for segment1. */
        uint64_t seg0                  : 16; /**< [ 15:  0](RO) Debug set status for segment0. */
#else /* Word 0 - Little Endian */
        uint64_t seg0                  : 16; /**< [ 15:  0](RO) Debug set status for segment0. */
        uint64_t seg1                  : 16; /**< [ 31: 16](RO) Debug set status for segment1. */
        uint64_t seg2                  : 16; /**< [ 47: 32](RO) Debug set status for segment2. */
        uint64_t seg3                  : 16; /**< [ 63: 48](RO) Debug set status for segment3. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_mcsx_pab_rx_slave_debug_status_s cn; */
};
typedef union cavm_mcsx_pab_rx_slave_debug_status cavm_mcsx_pab_rx_slave_debug_status_t;

static inline uint64_t CAVM_MCSX_PAB_RX_SLAVE_DEBUG_STATUS(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_MCSX_PAB_RX_SLAVE_DEBUG_STATUS(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CNF10KB) && (a<=6))
        return 0x87e080000370ll + 0x1000000ll * ((a) & 0x7);
    __cavm_csr_fatal("MCSX_PAB_RX_SLAVE_DEBUG_STATUS", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_MCSX_PAB_RX_SLAVE_DEBUG_STATUS(a) cavm_mcsx_pab_rx_slave_debug_status_t
#define bustype_CAVM_MCSX_PAB_RX_SLAVE_DEBUG_STATUS(a) CSR_TYPE_RSL
#define basename_CAVM_MCSX_PAB_RX_SLAVE_DEBUG_STATUS(a) "MCSX_PAB_RX_SLAVE_DEBUG_STATUS"
#define device_bar_CAVM_MCSX_PAB_RX_SLAVE_DEBUG_STATUS(a) 0x0 /* PF_BAR0 */
#define busnum_CAVM_MCSX_PAB_RX_SLAVE_DEBUG_STATUS(a) (a)
#define arguments_CAVM_MCSX_PAB_RX_SLAVE_DEBUG_STATUS(a) (a),-1,-1,-1

/**
 * Register (RSL) mcs#_pab_rx_slave_fifo_skid_cfg#
 *
 * MCS Pab Rx Slave Fifo Skid Cfg Register
 * Per port FIFO configuration.  Each port has 2 FIFOs, one for its Express and one for
 * its Preempt channels.
 * These FIFOS need to be configured based on the corresponding port_cfg.port_mode.
 * Note that in Single FIFO per port use, only the Preempt FIFOs are in use.
 */
union cavm_mcsx_pab_rx_slave_fifo_skid_cfgx
{
    uint64_t u;
    struct cavm_mcsx_pab_rx_slave_fifo_skid_cfgx_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_23_63        : 41;
        uint64_t bbe_pab_skid_pre      : 7;  /**< [ 22: 16](R/W) Preempt channel BBE to PAB skid.  This amount affects when the PAB FIFO asserts
                                                                 backpressure to the BBE.
                                                                 The skid is the maximum amount of data that the PAB FIFO needs to accept from
                                                                 the BBE while backpressure is asserted.
                                                                 For TX, set this register to XXX for port0.  Config for other TX ports are a don't care.
                                                                 For RX, set this register based on the port_cfg.mode register setting.
                                                                    25G: 14
                                                                    50G: 28
                                                                   100G: 56 */
        uint64_t reserved_7_15         : 9;
        uint64_t bbe_pab_skid_exp      : 7;  /**< [  6:  0](R/W) Express channel BBE to PAB skid.  This amount affects when the PAB FIFO asserts
                                                                 backpressure to the BBE.
                                                                 The skid is the maximum amount of data that the PAB FIFO needs to accept from
                                                                 the BBE while backpressure is asserted.
                                                                 For TX, set this register to XXX for port0.  Config for other TX ports are a don't care.
                                                                 For RX, set this register based on the port_cfg.mode register setting.
                                                                    25G: 14
                                                                    50G: 28
                                                                   100G: 56 */
#else /* Word 0 - Little Endian */
        uint64_t bbe_pab_skid_exp      : 7;  /**< [  6:  0](R/W) Express channel BBE to PAB skid.  This amount affects when the PAB FIFO asserts
                                                                 backpressure to the BBE.
                                                                 The skid is the maximum amount of data that the PAB FIFO needs to accept from
                                                                 the BBE while backpressure is asserted.
                                                                 For TX, set this register to XXX for port0.  Config for other TX ports are a don't care.
                                                                 For RX, set this register based on the port_cfg.mode register setting.
                                                                    25G: 14
                                                                    50G: 28
                                                                   100G: 56 */
        uint64_t reserved_7_15         : 9;
        uint64_t bbe_pab_skid_pre      : 7;  /**< [ 22: 16](R/W) Preempt channel BBE to PAB skid.  This amount affects when the PAB FIFO asserts
                                                                 backpressure to the BBE.
                                                                 The skid is the maximum amount of data that the PAB FIFO needs to accept from
                                                                 the BBE while backpressure is asserted.
                                                                 For TX, set this register to XXX for port0.  Config for other TX ports are a don't care.
                                                                 For RX, set this register based on the port_cfg.mode register setting.
                                                                    25G: 14
                                                                    50G: 28
                                                                   100G: 56 */
        uint64_t reserved_23_63        : 41;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_mcsx_pab_rx_slave_fifo_skid_cfgx_s cn; */
};
typedef union cavm_mcsx_pab_rx_slave_fifo_skid_cfgx cavm_mcsx_pab_rx_slave_fifo_skid_cfgx_t;

static inline uint64_t CAVM_MCSX_PAB_RX_SLAVE_FIFO_SKID_CFGX(uint64_t a, uint64_t b) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_MCSX_PAB_RX_SLAVE_FIFO_SKID_CFGX(uint64_t a, uint64_t b)
{
    if (cavm_is_model(OCTEONTX_CNF10KB) && ((a<=6) && (b<=3)))
        return 0x87e080000290ll + 0x1000000ll * ((a) & 0x7) + 0x40ll * ((b) & 0x3);
    __cavm_csr_fatal("MCSX_PAB_RX_SLAVE_FIFO_SKID_CFGX", 2, a, b, 0, 0, 0, 0);
}

#define typedef_CAVM_MCSX_PAB_RX_SLAVE_FIFO_SKID_CFGX(a,b) cavm_mcsx_pab_rx_slave_fifo_skid_cfgx_t
#define bustype_CAVM_MCSX_PAB_RX_SLAVE_FIFO_SKID_CFGX(a,b) CSR_TYPE_RSL
#define basename_CAVM_MCSX_PAB_RX_SLAVE_FIFO_SKID_CFGX(a,b) "MCSX_PAB_RX_SLAVE_FIFO_SKID_CFGX"
#define device_bar_CAVM_MCSX_PAB_RX_SLAVE_FIFO_SKID_CFGX(a,b) 0x0 /* PF_BAR0 */
#define busnum_CAVM_MCSX_PAB_RX_SLAVE_FIFO_SKID_CFGX(a,b) (a)
#define arguments_CAVM_MCSX_PAB_RX_SLAVE_FIFO_SKID_CFGX(a,b) (a),(b),-1,-1

/**
 * Register (RSL) mcs#_pab_rx_slave_include_tag_cnt
 *
 * MCS Pab Rx Slave Include Tag Cnt Register
 * When this bit is set, the VLAN and MPLS bytes that preceed the SecTag are also
 * included in the Octet counts (ifInOctets/ifOutOctets).  If this bit is not set, then
 * we only count the MSDU and the SA and DA bytes. Note that this bit is a global
 * setting and affects all channels.  This does not affect untagged packets (ie.
 * packets without a sectag).
 */
union cavm_mcsx_pab_rx_slave_include_tag_cnt
{
    uint64_t u;
    struct cavm_mcsx_pab_rx_slave_include_tag_cnt_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_1_63         : 63;
        uint64_t include_tag_cnt       : 1;  /**< [  0:  0](R/W) Include the VLAN and MPLS tags preceeding the SecTag in the Octet count. */
#else /* Word 0 - Little Endian */
        uint64_t include_tag_cnt       : 1;  /**< [  0:  0](R/W) Include the VLAN and MPLS tags preceeding the SecTag in the Octet count. */
        uint64_t reserved_1_63         : 63;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_mcsx_pab_rx_slave_include_tag_cnt_s cn; */
};
typedef union cavm_mcsx_pab_rx_slave_include_tag_cnt cavm_mcsx_pab_rx_slave_include_tag_cnt_t;

static inline uint64_t CAVM_MCSX_PAB_RX_SLAVE_INCLUDE_TAG_CNT(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_MCSX_PAB_RX_SLAVE_INCLUDE_TAG_CNT(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CNF10KB) && (a<=6))
        return 0x87e080000358ll + 0x1000000ll * ((a) & 0x7);
    __cavm_csr_fatal("MCSX_PAB_RX_SLAVE_INCLUDE_TAG_CNT", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_MCSX_PAB_RX_SLAVE_INCLUDE_TAG_CNT(a) cavm_mcsx_pab_rx_slave_include_tag_cnt_t
#define bustype_CAVM_MCSX_PAB_RX_SLAVE_INCLUDE_TAG_CNT(a) CSR_TYPE_RSL
#define basename_CAVM_MCSX_PAB_RX_SLAVE_INCLUDE_TAG_CNT(a) "MCSX_PAB_RX_SLAVE_INCLUDE_TAG_CNT"
#define device_bar_CAVM_MCSX_PAB_RX_SLAVE_INCLUDE_TAG_CNT(a) 0x0 /* PF_BAR0 */
#define busnum_CAVM_MCSX_PAB_RX_SLAVE_INCLUDE_TAG_CNT(a) (a)
#define arguments_CAVM_MCSX_PAB_RX_SLAVE_INCLUDE_TAG_CNT(a) (a),-1,-1,-1

/**
 * Register (RSL) mcs#_pab_rx_slave_pab_int
 *
 * MCS Pab Rx Slave Pab Int Register
 * PAB Interrupt Register
 */
union cavm_mcsx_pab_rx_slave_pab_int
{
    uint64_t u;
    struct cavm_mcsx_pab_rx_slave_pab_int_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_8_63         : 56;
        uint64_t overflow              : 8;  /**< [  7:  0](R/W1C) Corresponding channel experienced an overflow, a reset to that channel is
                                                                 required. This particular design variant of the MACsec has only even channels
                                                                 active, odd channels are unused. Note that for TX, only channel 0 is in use. */
#else /* Word 0 - Little Endian */
        uint64_t overflow              : 8;  /**< [  7:  0](R/W1C) Corresponding channel experienced an overflow, a reset to that channel is
                                                                 required. This particular design variant of the MACsec has only even channels
                                                                 active, odd channels are unused. Note that for TX, only channel 0 is in use. */
        uint64_t reserved_8_63         : 56;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_mcsx_pab_rx_slave_pab_int_s cn; */
};
typedef union cavm_mcsx_pab_rx_slave_pab_int cavm_mcsx_pab_rx_slave_pab_int_t;

static inline uint64_t CAVM_MCSX_PAB_RX_SLAVE_PAB_INT(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_MCSX_PAB_RX_SLAVE_PAB_INT(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CNF10KB) && (a<=6))
        return 0x87e080000260ll + 0x1000000ll * ((a) & 0x7);
    __cavm_csr_fatal("MCSX_PAB_RX_SLAVE_PAB_INT", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_MCSX_PAB_RX_SLAVE_PAB_INT(a) cavm_mcsx_pab_rx_slave_pab_int_t
#define bustype_CAVM_MCSX_PAB_RX_SLAVE_PAB_INT(a) CSR_TYPE_RSL
#define basename_CAVM_MCSX_PAB_RX_SLAVE_PAB_INT(a) "MCSX_PAB_RX_SLAVE_PAB_INT"
#define device_bar_CAVM_MCSX_PAB_RX_SLAVE_PAB_INT(a) 0x0 /* PF_BAR0 */
#define busnum_CAVM_MCSX_PAB_RX_SLAVE_PAB_INT(a) (a)
#define arguments_CAVM_MCSX_PAB_RX_SLAVE_PAB_INT(a) (a),-1,-1,-1

/**
 * Register (RSL) mcs#_pab_rx_slave_pab_int_enb
 *
 * MCS Pab Rx Slave Pab Int Enb Register
 * ENB register for pab_int
 */
union cavm_mcsx_pab_rx_slave_pab_int_enb
{
    uint64_t u;
    struct cavm_mcsx_pab_rx_slave_pab_int_enb_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_8_63         : 56;
        uint64_t overflow_enb          : 8;  /**< [  7:  0](R/W) Corresponding channel experienced an overflow, a reset to that channel is
                                                                 required. This particular design variant of the MACsec has only even channels
                                                                 active, odd channels are unused. Note that for TX, only channel 0 is in use. */
#else /* Word 0 - Little Endian */
        uint64_t overflow_enb          : 8;  /**< [  7:  0](R/W) Corresponding channel experienced an overflow, a reset to that channel is
                                                                 required. This particular design variant of the MACsec has only even channels
                                                                 active, odd channels are unused. Note that for TX, only channel 0 is in use. */
        uint64_t reserved_8_63         : 56;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_mcsx_pab_rx_slave_pab_int_enb_s cn; */
};
typedef union cavm_mcsx_pab_rx_slave_pab_int_enb cavm_mcsx_pab_rx_slave_pab_int_enb_t;

static inline uint64_t CAVM_MCSX_PAB_RX_SLAVE_PAB_INT_ENB(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_MCSX_PAB_RX_SLAVE_PAB_INT_ENB(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CNF10KB) && (a<=6))
        return 0x87e080000268ll + 0x1000000ll * ((a) & 0x7);
    __cavm_csr_fatal("MCSX_PAB_RX_SLAVE_PAB_INT_ENB", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_MCSX_PAB_RX_SLAVE_PAB_INT_ENB(a) cavm_mcsx_pab_rx_slave_pab_int_enb_t
#define bustype_CAVM_MCSX_PAB_RX_SLAVE_PAB_INT_ENB(a) CSR_TYPE_RSL
#define basename_CAVM_MCSX_PAB_RX_SLAVE_PAB_INT_ENB(a) "MCSX_PAB_RX_SLAVE_PAB_INT_ENB"
#define device_bar_CAVM_MCSX_PAB_RX_SLAVE_PAB_INT_ENB(a) 0x0 /* PF_BAR0 */
#define busnum_CAVM_MCSX_PAB_RX_SLAVE_PAB_INT_ENB(a) (a)
#define arguments_CAVM_MCSX_PAB_RX_SLAVE_PAB_INT_ENB(a) (a),-1,-1,-1

/**
 * Register (RSL) mcs#_pab_rx_slave_pab_int_intr_rw
 *
 * MCS Pab Rx Slave Pab Int Intr Rw Register
 * Read/write register for pab_int
 */
union cavm_mcsx_pab_rx_slave_pab_int_intr_rw
{
    uint64_t u;
    struct cavm_mcsx_pab_rx_slave_pab_int_intr_rw_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_8_63         : 56;
        uint64_t overflow              : 8;  /**< [  7:  0](R/W) Corresponding channel experienced an overflow, a reset to that channel is
                                                                 required. This particular design variant of the MACsec has only even channels
                                                                 active, odd channels are unused. Note that for TX, only channel 0 is in use. */
#else /* Word 0 - Little Endian */
        uint64_t overflow              : 8;  /**< [  7:  0](R/W) Corresponding channel experienced an overflow, a reset to that channel is
                                                                 required. This particular design variant of the MACsec has only even channels
                                                                 active, odd channels are unused. Note that for TX, only channel 0 is in use. */
        uint64_t reserved_8_63         : 56;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_mcsx_pab_rx_slave_pab_int_intr_rw_s cn; */
};
typedef union cavm_mcsx_pab_rx_slave_pab_int_intr_rw cavm_mcsx_pab_rx_slave_pab_int_intr_rw_t;

static inline uint64_t CAVM_MCSX_PAB_RX_SLAVE_PAB_INT_INTR_RW(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_MCSX_PAB_RX_SLAVE_PAB_INT_INTR_RW(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CNF10KB) && (a<=6))
        return 0x87e080000278ll + 0x1000000ll * ((a) & 0x7);
    __cavm_csr_fatal("MCSX_PAB_RX_SLAVE_PAB_INT_INTR_RW", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_MCSX_PAB_RX_SLAVE_PAB_INT_INTR_RW(a) cavm_mcsx_pab_rx_slave_pab_int_intr_rw_t
#define bustype_CAVM_MCSX_PAB_RX_SLAVE_PAB_INT_INTR_RW(a) CSR_TYPE_RSL
#define basename_CAVM_MCSX_PAB_RX_SLAVE_PAB_INT_INTR_RW(a) "MCSX_PAB_RX_SLAVE_PAB_INT_INTR_RW"
#define device_bar_CAVM_MCSX_PAB_RX_SLAVE_PAB_INT_INTR_RW(a) 0x0 /* PF_BAR0 */
#define busnum_CAVM_MCSX_PAB_RX_SLAVE_PAB_INT_INTR_RW(a) (a)
#define arguments_CAVM_MCSX_PAB_RX_SLAVE_PAB_INT_INTR_RW(a) (a),-1,-1,-1

/**
 * Register (RSL) mcs#_pab_rx_slave_pab_int_raw
 *
 * MCS Pab Rx Slave Pab Int Raw Register
 * Raw register for pab_int
 */
union cavm_mcsx_pab_rx_slave_pab_int_raw
{
    uint64_t u;
    struct cavm_mcsx_pab_rx_slave_pab_int_raw_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_8_63         : 56;
        uint64_t overflow              : 8;  /**< [  7:  0](RO) Corresponding channel experienced an overflow, a reset to that channel is
                                                                 required. This particular design variant of the MACsec has only even channels
                                                                 active, odd channels are unused. Note that for TX, only channel 0 is in use. */
#else /* Word 0 - Little Endian */
        uint64_t overflow              : 8;  /**< [  7:  0](RO) Corresponding channel experienced an overflow, a reset to that channel is
                                                                 required. This particular design variant of the MACsec has only even channels
                                                                 active, odd channels are unused. Note that for TX, only channel 0 is in use. */
        uint64_t reserved_8_63         : 56;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_mcsx_pab_rx_slave_pab_int_raw_s cn; */
};
typedef union cavm_mcsx_pab_rx_slave_pab_int_raw cavm_mcsx_pab_rx_slave_pab_int_raw_t;

static inline uint64_t CAVM_MCSX_PAB_RX_SLAVE_PAB_INT_RAW(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_MCSX_PAB_RX_SLAVE_PAB_INT_RAW(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CNF10KB) && (a<=6))
        return 0x87e080000270ll + 0x1000000ll * ((a) & 0x7);
    __cavm_csr_fatal("MCSX_PAB_RX_SLAVE_PAB_INT_RAW", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_MCSX_PAB_RX_SLAVE_PAB_INT_RAW(a) cavm_mcsx_pab_rx_slave_pab_int_raw_t
#define bustype_CAVM_MCSX_PAB_RX_SLAVE_PAB_INT_RAW(a) CSR_TYPE_RSL
#define basename_CAVM_MCSX_PAB_RX_SLAVE_PAB_INT_RAW(a) "MCSX_PAB_RX_SLAVE_PAB_INT_RAW"
#define device_bar_CAVM_MCSX_PAB_RX_SLAVE_PAB_INT_RAW(a) 0x0 /* PF_BAR0 */
#define busnum_CAVM_MCSX_PAB_RX_SLAVE_PAB_INT_RAW(a) (a)
#define arguments_CAVM_MCSX_PAB_RX_SLAVE_PAB_INT_RAW(a) (a),-1,-1,-1

/**
 * Register (RSL) mcs#_pab_rx_slave_port_cfg#
 *
 * MCS Pab Rx Slave Port Cfg Register
 * Port specific configuration.
 */
union cavm_mcsx_pab_rx_slave_port_cfgx
{
    uint64_t u;
    struct cavm_mcsx_pab_rx_slave_port_cfgx_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_2_63         : 62;
        uint64_t mode                  : 2;  /**< [  1:  0](R/W) Port mode controls how the shared resources (Data FIFO memory, etc.) are
                                                                 allocated to the active channels.
                                                                 RX: Note that for only port0 can be configured to 100G. Only ports 0 and 2 can
                                                                 be configured to 50G. Any port can be configured to 25G or less.
                                                                 TX: Only port 0 is active and it must always be configured as a 100G port
                                                                 regardless of how many ports are actually active.  All other port configurations
                                                                 for TX are a don't care.
                                                                 2'b00 - 25G or less;
                                                                 2'b01 - 50G;
                                                                 2'b10 - 100G;
                                                                 2'b11 - RESERVED. */
#else /* Word 0 - Little Endian */
        uint64_t mode                  : 2;  /**< [  1:  0](R/W) Port mode controls how the shared resources (Data FIFO memory, etc.) are
                                                                 allocated to the active channels.
                                                                 RX: Note that for only port0 can be configured to 100G. Only ports 0 and 2 can
                                                                 be configured to 50G. Any port can be configured to 25G or less.
                                                                 TX: Only port 0 is active and it must always be configured as a 100G port
                                                                 regardless of how many ports are actually active.  All other port configurations
                                                                 for TX are a don't care.
                                                                 2'b00 - 25G or less;
                                                                 2'b01 - 50G;
                                                                 2'b10 - 100G;
                                                                 2'b11 - RESERVED. */
        uint64_t reserved_2_63         : 62;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_mcsx_pab_rx_slave_port_cfgx_s cn; */
};
typedef union cavm_mcsx_pab_rx_slave_port_cfgx cavm_mcsx_pab_rx_slave_port_cfgx_t;

static inline uint64_t CAVM_MCSX_PAB_RX_SLAVE_PORT_CFGX(uint64_t a, uint64_t b) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_MCSX_PAB_RX_SLAVE_PORT_CFGX(uint64_t a, uint64_t b)
{
    if (cavm_is_model(OCTEONTX_CNF10KB) && ((a<=6) && (b<=3)))
        return 0x87e080000280ll + 0x1000000ll * ((a) & 0x7) + 0x40ll * ((b) & 0x3);
    __cavm_csr_fatal("MCSX_PAB_RX_SLAVE_PORT_CFGX", 2, a, b, 0, 0, 0, 0);
}

#define typedef_CAVM_MCSX_PAB_RX_SLAVE_PORT_CFGX(a,b) cavm_mcsx_pab_rx_slave_port_cfgx_t
#define bustype_CAVM_MCSX_PAB_RX_SLAVE_PORT_CFGX(a,b) CSR_TYPE_RSL
#define basename_CAVM_MCSX_PAB_RX_SLAVE_PORT_CFGX(a,b) "MCSX_PAB_RX_SLAVE_PORT_CFGX"
#define device_bar_CAVM_MCSX_PAB_RX_SLAVE_PORT_CFGX(a,b) 0x0 /* PF_BAR0 */
#define busnum_CAVM_MCSX_PAB_RX_SLAVE_PORT_CFGX(a,b) (a)
#define arguments_CAVM_MCSX_PAB_RX_SLAVE_PORT_CFGX(a,b) (a),(b),-1,-1

/**
 * Register (RSL) mcs#_pab_rx_slave_tx_trunc
 *
 * MCS Pab Rx Slave Tx Trunc Register
 * When this bit is set, enables packet truncation to occur on tagged packets (packets
 * with a SecTag) based on the corresponding MTU setting in the
 * CPM_TX_SLAVE.SECY_PLCY_MEM. Otherwise the packet is not truncated however it is EOP
 * errored if the size excceeds the configured MTU.
 */
union cavm_mcsx_pab_rx_slave_tx_trunc
{
    uint64_t u;
    struct cavm_mcsx_pab_rx_slave_tx_trunc_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_1_63         : 63;
        uint64_t enable_trunc          : 1;  /**< [  0:  0](R/W) Enables truncation of a packet to the MTU size when set.  Any packet that
                                                                 exceeds the configured MTU will be EOP errored.
                                                                 The enable_trunc should remain 0 (no truncation) when the incoming traffic is
                                                                 fragmented (SOF/EOF), otherwise truncation may lead to very small fragments
                                                                 (protocol violation) exiting the MACsec. */
#else /* Word 0 - Little Endian */
        uint64_t enable_trunc          : 1;  /**< [  0:  0](R/W) Enables truncation of a packet to the MTU size when set.  Any packet that
                                                                 exceeds the configured MTU will be EOP errored.
                                                                 The enable_trunc should remain 0 (no truncation) when the incoming traffic is
                                                                 fragmented (SOF/EOF), otherwise truncation may lead to very small fragments
                                                                 (protocol violation) exiting the MACsec. */
        uint64_t reserved_1_63         : 63;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_mcsx_pab_rx_slave_tx_trunc_s cn; */
};
typedef union cavm_mcsx_pab_rx_slave_tx_trunc cavm_mcsx_pab_rx_slave_tx_trunc_t;

static inline uint64_t CAVM_MCSX_PAB_RX_SLAVE_TX_TRUNC(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_MCSX_PAB_RX_SLAVE_TX_TRUNC(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CNF10KB) && (a<=6))
        return 0x87e080000360ll + 0x1000000ll * ((a) & 0x7);
    __cavm_csr_fatal("MCSX_PAB_RX_SLAVE_TX_TRUNC", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_MCSX_PAB_RX_SLAVE_TX_TRUNC(a) cavm_mcsx_pab_rx_slave_tx_trunc_t
#define bustype_CAVM_MCSX_PAB_RX_SLAVE_TX_TRUNC(a) CSR_TYPE_RSL
#define basename_CAVM_MCSX_PAB_RX_SLAVE_TX_TRUNC(a) "MCSX_PAB_RX_SLAVE_TX_TRUNC"
#define device_bar_CAVM_MCSX_PAB_RX_SLAVE_TX_TRUNC(a) 0x0 /* PF_BAR0 */
#define busnum_CAVM_MCSX_PAB_RX_SLAVE_TX_TRUNC(a) (a)
#define arguments_CAVM_MCSX_PAB_RX_SLAVE_TX_TRUNC(a) (a),-1,-1,-1

/**
 * Register (RSL) mcs#_pab_tx_slave_dbg_mux_sel
 *
 * MCS Pab Tx Slave Dbg Mux Sel Register
 * Per segment mux control for the debug_mux.  Configuration of this register will
 * affect which debug set is output on the corresponding debug mux logic for the PAB.
 */
union cavm_mcsx_pab_tx_slave_dbg_mux_sel
{
    uint64_t u;
    struct cavm_mcsx_pab_tx_slave_dbg_mux_sel_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_30_63        : 34;
        uint64_t seg3                  : 6;  /**< [ 29: 24](R/W) Select which debug set is output on the segment3 of the debug mux for the PAB.
                                                                 Note that a higher level dbg_mux_sel also exists to select which block's debug
                                                                 sets are to be output of the IP */
        uint64_t reserved_22_23        : 2;
        uint64_t seg2                  : 6;  /**< [ 21: 16](R/W) Select which debug set is output on the segment2 of the debug mux for the PAB.
                                                                 Note that a higher level dbg_mux_sel also exists to select which block's debug
                                                                 sets are to be output of the IP */
        uint64_t reserved_14_15        : 2;
        uint64_t seg1                  : 6;  /**< [ 13:  8](R/W) Select which debug set is output on the segment1 of the debug mux for the PAB.
                                                                 Note that a higher level dbg_mux_sel also exists to select which block's debug
                                                                 sets are to be output of the IP */
        uint64_t reserved_6_7          : 2;
        uint64_t seg0                  : 6;  /**< [  5:  0](R/W) Select which debug set is output on the segment0 of the debug mux for the PAB.
                                                                 Note that a higher level dbg_mux_sel also exists to select which block's debug
                                                                 sets are to be output of the IP */
#else /* Word 0 - Little Endian */
        uint64_t seg0                  : 6;  /**< [  5:  0](R/W) Select which debug set is output on the segment0 of the debug mux for the PAB.
                                                                 Note that a higher level dbg_mux_sel also exists to select which block's debug
                                                                 sets are to be output of the IP */
        uint64_t reserved_6_7          : 2;
        uint64_t seg1                  : 6;  /**< [ 13:  8](R/W) Select which debug set is output on the segment1 of the debug mux for the PAB.
                                                                 Note that a higher level dbg_mux_sel also exists to select which block's debug
                                                                 sets are to be output of the IP */
        uint64_t reserved_14_15        : 2;
        uint64_t seg2                  : 6;  /**< [ 21: 16](R/W) Select which debug set is output on the segment2 of the debug mux for the PAB.
                                                                 Note that a higher level dbg_mux_sel also exists to select which block's debug
                                                                 sets are to be output of the IP */
        uint64_t reserved_22_23        : 2;
        uint64_t seg3                  : 6;  /**< [ 29: 24](R/W) Select which debug set is output on the segment3 of the debug mux for the PAB.
                                                                 Note that a higher level dbg_mux_sel also exists to select which block's debug
                                                                 sets are to be output of the IP */
        uint64_t reserved_30_63        : 34;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_mcsx_pab_tx_slave_dbg_mux_sel_s cn; */
};
typedef union cavm_mcsx_pab_tx_slave_dbg_mux_sel cavm_mcsx_pab_tx_slave_dbg_mux_sel_t;

static inline uint64_t CAVM_MCSX_PAB_TX_SLAVE_DBG_MUX_SEL(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_MCSX_PAB_TX_SLAVE_DBG_MUX_SEL(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CNF10KB) && (a<=6))
        return 0x87e080000488ll + 0x1000000ll * ((a) & 0x7);
    __cavm_csr_fatal("MCSX_PAB_TX_SLAVE_DBG_MUX_SEL", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_MCSX_PAB_TX_SLAVE_DBG_MUX_SEL(a) cavm_mcsx_pab_tx_slave_dbg_mux_sel_t
#define bustype_CAVM_MCSX_PAB_TX_SLAVE_DBG_MUX_SEL(a) CSR_TYPE_RSL
#define basename_CAVM_MCSX_PAB_TX_SLAVE_DBG_MUX_SEL(a) "MCSX_PAB_TX_SLAVE_DBG_MUX_SEL"
#define device_bar_CAVM_MCSX_PAB_TX_SLAVE_DBG_MUX_SEL(a) 0x0 /* PF_BAR0 */
#define busnum_CAVM_MCSX_PAB_TX_SLAVE_DBG_MUX_SEL(a) (a)
#define arguments_CAVM_MCSX_PAB_TX_SLAVE_DBG_MUX_SEL(a) (a),-1,-1,-1

/**
 * Register (RSL) mcs#_pab_tx_slave_debug_status
 *
 * MCS Pab Tx Slave Debug Status Register
 * Debug status register:  Captures the debug set selected by dbg_mux_sel.
 */
union cavm_mcsx_pab_tx_slave_debug_status
{
    uint64_t u;
    struct cavm_mcsx_pab_tx_slave_debug_status_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t seg3                  : 16; /**< [ 63: 48](RO) Debug set status for segment3. */
        uint64_t seg2                  : 16; /**< [ 47: 32](RO) Debug set status for segment2. */
        uint64_t seg1                  : 16; /**< [ 31: 16](RO) Debug set status for segment1. */
        uint64_t seg0                  : 16; /**< [ 15:  0](RO) Debug set status for segment0. */
#else /* Word 0 - Little Endian */
        uint64_t seg0                  : 16; /**< [ 15:  0](RO) Debug set status for segment0. */
        uint64_t seg1                  : 16; /**< [ 31: 16](RO) Debug set status for segment1. */
        uint64_t seg2                  : 16; /**< [ 47: 32](RO) Debug set status for segment2. */
        uint64_t seg3                  : 16; /**< [ 63: 48](RO) Debug set status for segment3. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_mcsx_pab_tx_slave_debug_status_s cn; */
};
typedef union cavm_mcsx_pab_tx_slave_debug_status cavm_mcsx_pab_tx_slave_debug_status_t;

static inline uint64_t CAVM_MCSX_PAB_TX_SLAVE_DEBUG_STATUS(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_MCSX_PAB_TX_SLAVE_DEBUG_STATUS(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CNF10KB) && (a<=6))
        return 0x87e080000490ll + 0x1000000ll * ((a) & 0x7);
    __cavm_csr_fatal("MCSX_PAB_TX_SLAVE_DEBUG_STATUS", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_MCSX_PAB_TX_SLAVE_DEBUG_STATUS(a) cavm_mcsx_pab_tx_slave_debug_status_t
#define bustype_CAVM_MCSX_PAB_TX_SLAVE_DEBUG_STATUS(a) CSR_TYPE_RSL
#define basename_CAVM_MCSX_PAB_TX_SLAVE_DEBUG_STATUS(a) "MCSX_PAB_TX_SLAVE_DEBUG_STATUS"
#define device_bar_CAVM_MCSX_PAB_TX_SLAVE_DEBUG_STATUS(a) 0x0 /* PF_BAR0 */
#define busnum_CAVM_MCSX_PAB_TX_SLAVE_DEBUG_STATUS(a) (a)
#define arguments_CAVM_MCSX_PAB_TX_SLAVE_DEBUG_STATUS(a) (a),-1,-1,-1

/**
 * Register (RSL) mcs#_pab_tx_slave_include_tag_cnt
 *
 * MCS Pab Tx Slave Include Tag Cnt Register
 * When this bit is set, the VLAN and MPLS bytes that preceed the SecTag are also
 * included in the Octet counts (ifInOctets/ifOutOctets).  If this bit is not set, then
 * we only count the MSDU and the SA and DA bytes. Note that this bit is a global
 * setting and affects all channels.  This does not affect untagged packets (ie.
 * packets without a sectag).
 */
union cavm_mcsx_pab_tx_slave_include_tag_cnt
{
    uint64_t u;
    struct cavm_mcsx_pab_tx_slave_include_tag_cnt_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_1_63         : 63;
        uint64_t include_tag_cnt       : 1;  /**< [  0:  0](R/W) Include the VLAN and MPLS tags preceeding the SecTag in the Octet count. */
#else /* Word 0 - Little Endian */
        uint64_t include_tag_cnt       : 1;  /**< [  0:  0](R/W) Include the VLAN and MPLS tags preceeding the SecTag in the Octet count. */
        uint64_t reserved_1_63         : 63;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_mcsx_pab_tx_slave_include_tag_cnt_s cn; */
};
typedef union cavm_mcsx_pab_tx_slave_include_tag_cnt cavm_mcsx_pab_tx_slave_include_tag_cnt_t;

static inline uint64_t CAVM_MCSX_PAB_TX_SLAVE_INCLUDE_TAG_CNT(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_MCSX_PAB_TX_SLAVE_INCLUDE_TAG_CNT(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CNF10KB) && (a<=6))
        return 0x87e080000478ll + 0x1000000ll * ((a) & 0x7);
    __cavm_csr_fatal("MCSX_PAB_TX_SLAVE_INCLUDE_TAG_CNT", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_MCSX_PAB_TX_SLAVE_INCLUDE_TAG_CNT(a) cavm_mcsx_pab_tx_slave_include_tag_cnt_t
#define bustype_CAVM_MCSX_PAB_TX_SLAVE_INCLUDE_TAG_CNT(a) CSR_TYPE_RSL
#define basename_CAVM_MCSX_PAB_TX_SLAVE_INCLUDE_TAG_CNT(a) "MCSX_PAB_TX_SLAVE_INCLUDE_TAG_CNT"
#define device_bar_CAVM_MCSX_PAB_TX_SLAVE_INCLUDE_TAG_CNT(a) 0x0 /* PF_BAR0 */
#define busnum_CAVM_MCSX_PAB_TX_SLAVE_INCLUDE_TAG_CNT(a) (a)
#define arguments_CAVM_MCSX_PAB_TX_SLAVE_INCLUDE_TAG_CNT(a) (a),-1,-1,-1

/**
 * Register (RSL) mcs#_pab_tx_slave_pab_int
 *
 * MCS Pab Tx Slave Pab Int Register
 * PAB Interrupt Register
 */
union cavm_mcsx_pab_tx_slave_pab_int
{
    uint64_t u;
    struct cavm_mcsx_pab_tx_slave_pab_int_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_8_63         : 56;
        uint64_t overflow              : 8;  /**< [  7:  0](R/W1C) Corresponding channel experienced an overflow, a reset to that channel is
                                                                 required. This particular design variant of the MACsec has only even channels
                                                                 active, odd channels are unused. Note that for TX, only channel 0 is in use. */
#else /* Word 0 - Little Endian */
        uint64_t overflow              : 8;  /**< [  7:  0](R/W1C) Corresponding channel experienced an overflow, a reset to that channel is
                                                                 required. This particular design variant of the MACsec has only even channels
                                                                 active, odd channels are unused. Note that for TX, only channel 0 is in use. */
        uint64_t reserved_8_63         : 56;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_mcsx_pab_tx_slave_pab_int_s cn; */
};
typedef union cavm_mcsx_pab_tx_slave_pab_int cavm_mcsx_pab_tx_slave_pab_int_t;

static inline uint64_t CAVM_MCSX_PAB_TX_SLAVE_PAB_INT(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_MCSX_PAB_TX_SLAVE_PAB_INT(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CNF10KB) && (a<=6))
        return 0x87e080000380ll + 0x1000000ll * ((a) & 0x7);
    __cavm_csr_fatal("MCSX_PAB_TX_SLAVE_PAB_INT", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_MCSX_PAB_TX_SLAVE_PAB_INT(a) cavm_mcsx_pab_tx_slave_pab_int_t
#define bustype_CAVM_MCSX_PAB_TX_SLAVE_PAB_INT(a) CSR_TYPE_RSL
#define basename_CAVM_MCSX_PAB_TX_SLAVE_PAB_INT(a) "MCSX_PAB_TX_SLAVE_PAB_INT"
#define device_bar_CAVM_MCSX_PAB_TX_SLAVE_PAB_INT(a) 0x0 /* PF_BAR0 */
#define busnum_CAVM_MCSX_PAB_TX_SLAVE_PAB_INT(a) (a)
#define arguments_CAVM_MCSX_PAB_TX_SLAVE_PAB_INT(a) (a),-1,-1,-1

/**
 * Register (RSL) mcs#_pab_tx_slave_pab_int_enb
 *
 * MCS Pab Tx Slave Pab Int Enb Register
 * ENB register for pab_int
 */
union cavm_mcsx_pab_tx_slave_pab_int_enb
{
    uint64_t u;
    struct cavm_mcsx_pab_tx_slave_pab_int_enb_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_8_63         : 56;
        uint64_t overflow_enb          : 8;  /**< [  7:  0](R/W) Corresponding channel experienced an overflow, a reset to that channel is
                                                                 required. This particular design variant of the MACsec has only even channels
                                                                 active, odd channels are unused. Note that for TX, only channel 0 is in use. */
#else /* Word 0 - Little Endian */
        uint64_t overflow_enb          : 8;  /**< [  7:  0](R/W) Corresponding channel experienced an overflow, a reset to that channel is
                                                                 required. This particular design variant of the MACsec has only even channels
                                                                 active, odd channels are unused. Note that for TX, only channel 0 is in use. */
        uint64_t reserved_8_63         : 56;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_mcsx_pab_tx_slave_pab_int_enb_s cn; */
};
typedef union cavm_mcsx_pab_tx_slave_pab_int_enb cavm_mcsx_pab_tx_slave_pab_int_enb_t;

static inline uint64_t CAVM_MCSX_PAB_TX_SLAVE_PAB_INT_ENB(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_MCSX_PAB_TX_SLAVE_PAB_INT_ENB(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CNF10KB) && (a<=6))
        return 0x87e080000388ll + 0x1000000ll * ((a) & 0x7);
    __cavm_csr_fatal("MCSX_PAB_TX_SLAVE_PAB_INT_ENB", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_MCSX_PAB_TX_SLAVE_PAB_INT_ENB(a) cavm_mcsx_pab_tx_slave_pab_int_enb_t
#define bustype_CAVM_MCSX_PAB_TX_SLAVE_PAB_INT_ENB(a) CSR_TYPE_RSL
#define basename_CAVM_MCSX_PAB_TX_SLAVE_PAB_INT_ENB(a) "MCSX_PAB_TX_SLAVE_PAB_INT_ENB"
#define device_bar_CAVM_MCSX_PAB_TX_SLAVE_PAB_INT_ENB(a) 0x0 /* PF_BAR0 */
#define busnum_CAVM_MCSX_PAB_TX_SLAVE_PAB_INT_ENB(a) (a)
#define arguments_CAVM_MCSX_PAB_TX_SLAVE_PAB_INT_ENB(a) (a),-1,-1,-1

/**
 * Register (RSL) mcs#_pab_tx_slave_pab_int_intr_rw
 *
 * MCS Pab Tx Slave Pab Int Intr Rw Register
 * Read/write register for pab_int
 */
union cavm_mcsx_pab_tx_slave_pab_int_intr_rw
{
    uint64_t u;
    struct cavm_mcsx_pab_tx_slave_pab_int_intr_rw_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_8_63         : 56;
        uint64_t overflow              : 8;  /**< [  7:  0](R/W) Corresponding channel experienced an overflow, a reset to that channel is
                                                                 required. This particular design variant of the MACsec has only even channels
                                                                 active, odd channels are unused. Note that for TX, only channel 0 is in use. */
#else /* Word 0 - Little Endian */
        uint64_t overflow              : 8;  /**< [  7:  0](R/W) Corresponding channel experienced an overflow, a reset to that channel is
                                                                 required. This particular design variant of the MACsec has only even channels
                                                                 active, odd channels are unused. Note that for TX, only channel 0 is in use. */
        uint64_t reserved_8_63         : 56;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_mcsx_pab_tx_slave_pab_int_intr_rw_s cn; */
};
typedef union cavm_mcsx_pab_tx_slave_pab_int_intr_rw cavm_mcsx_pab_tx_slave_pab_int_intr_rw_t;

static inline uint64_t CAVM_MCSX_PAB_TX_SLAVE_PAB_INT_INTR_RW(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_MCSX_PAB_TX_SLAVE_PAB_INT_INTR_RW(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CNF10KB) && (a<=6))
        return 0x87e080000398ll + 0x1000000ll * ((a) & 0x7);
    __cavm_csr_fatal("MCSX_PAB_TX_SLAVE_PAB_INT_INTR_RW", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_MCSX_PAB_TX_SLAVE_PAB_INT_INTR_RW(a) cavm_mcsx_pab_tx_slave_pab_int_intr_rw_t
#define bustype_CAVM_MCSX_PAB_TX_SLAVE_PAB_INT_INTR_RW(a) CSR_TYPE_RSL
#define basename_CAVM_MCSX_PAB_TX_SLAVE_PAB_INT_INTR_RW(a) "MCSX_PAB_TX_SLAVE_PAB_INT_INTR_RW"
#define device_bar_CAVM_MCSX_PAB_TX_SLAVE_PAB_INT_INTR_RW(a) 0x0 /* PF_BAR0 */
#define busnum_CAVM_MCSX_PAB_TX_SLAVE_PAB_INT_INTR_RW(a) (a)
#define arguments_CAVM_MCSX_PAB_TX_SLAVE_PAB_INT_INTR_RW(a) (a),-1,-1,-1

/**
 * Register (RSL) mcs#_pab_tx_slave_pab_int_raw
 *
 * MCS Pab Tx Slave Pab Int Raw Register
 * Raw register for pab_int
 */
union cavm_mcsx_pab_tx_slave_pab_int_raw
{
    uint64_t u;
    struct cavm_mcsx_pab_tx_slave_pab_int_raw_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_8_63         : 56;
        uint64_t overflow              : 8;  /**< [  7:  0](RO) Corresponding channel experienced an overflow, a reset to that channel is
                                                                 required. This particular design variant of the MACsec has only even channels
                                                                 active, odd channels are unused. Note that for TX, only channel 0 is in use. */
#else /* Word 0 - Little Endian */
        uint64_t overflow              : 8;  /**< [  7:  0](RO) Corresponding channel experienced an overflow, a reset to that channel is
                                                                 required. This particular design variant of the MACsec has only even channels
                                                                 active, odd channels are unused. Note that for TX, only channel 0 is in use. */
        uint64_t reserved_8_63         : 56;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_mcsx_pab_tx_slave_pab_int_raw_s cn; */
};
typedef union cavm_mcsx_pab_tx_slave_pab_int_raw cavm_mcsx_pab_tx_slave_pab_int_raw_t;

static inline uint64_t CAVM_MCSX_PAB_TX_SLAVE_PAB_INT_RAW(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_MCSX_PAB_TX_SLAVE_PAB_INT_RAW(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CNF10KB) && (a<=6))
        return 0x87e080000390ll + 0x1000000ll * ((a) & 0x7);
    __cavm_csr_fatal("MCSX_PAB_TX_SLAVE_PAB_INT_RAW", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_MCSX_PAB_TX_SLAVE_PAB_INT_RAW(a) cavm_mcsx_pab_tx_slave_pab_int_raw_t
#define bustype_CAVM_MCSX_PAB_TX_SLAVE_PAB_INT_RAW(a) CSR_TYPE_RSL
#define basename_CAVM_MCSX_PAB_TX_SLAVE_PAB_INT_RAW(a) "MCSX_PAB_TX_SLAVE_PAB_INT_RAW"
#define device_bar_CAVM_MCSX_PAB_TX_SLAVE_PAB_INT_RAW(a) 0x0 /* PF_BAR0 */
#define busnum_CAVM_MCSX_PAB_TX_SLAVE_PAB_INT_RAW(a) (a)
#define arguments_CAVM_MCSX_PAB_TX_SLAVE_PAB_INT_RAW(a) (a),-1,-1,-1

/**
 * Register (RSL) mcs#_pab_tx_slave_tx_trunc
 *
 * MCS Pab Tx Slave Tx Trunc Register
 * When this bit is set, enables packet truncation to occur on tagged packets (packets
 * with a SecTag) based on the corresponding MTU setting in the
 * CPM_TX_SLAVE.SECY_PLCY_MEM. Otherwise the packet is not truncated however it is EOP
 * errored if the size excceeds the configured MTU.
 */
union cavm_mcsx_pab_tx_slave_tx_trunc
{
    uint64_t u;
    struct cavm_mcsx_pab_tx_slave_tx_trunc_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_1_63         : 63;
        uint64_t enable_trunc          : 1;  /**< [  0:  0](R/W) Enables truncation of a packet to the MTU size when set.  Any packet that
                                                                 exceeds the configured MTU will be EOP errored.
                                                                 The enable_trunc should remain 0 (no truncation) when the incoming traffic is
                                                                 fragmented (SOF/EOF), otherwise truncation may lead to very small fragments
                                                                 (protocol violation) exiting the MACsec. */
#else /* Word 0 - Little Endian */
        uint64_t enable_trunc          : 1;  /**< [  0:  0](R/W) Enables truncation of a packet to the MTU size when set.  Any packet that
                                                                 exceeds the configured MTU will be EOP errored.
                                                                 The enable_trunc should remain 0 (no truncation) when the incoming traffic is
                                                                 fragmented (SOF/EOF), otherwise truncation may lead to very small fragments
                                                                 (protocol violation) exiting the MACsec. */
        uint64_t reserved_1_63         : 63;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_mcsx_pab_tx_slave_tx_trunc_s cn; */
};
typedef union cavm_mcsx_pab_tx_slave_tx_trunc cavm_mcsx_pab_tx_slave_tx_trunc_t;

static inline uint64_t CAVM_MCSX_PAB_TX_SLAVE_TX_TRUNC(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_MCSX_PAB_TX_SLAVE_TX_TRUNC(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CNF10KB) && (a<=6))
        return 0x87e080000480ll + 0x1000000ll * ((a) & 0x7);
    __cavm_csr_fatal("MCSX_PAB_TX_SLAVE_TX_TRUNC", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_MCSX_PAB_TX_SLAVE_TX_TRUNC(a) cavm_mcsx_pab_tx_slave_tx_trunc_t
#define bustype_CAVM_MCSX_PAB_TX_SLAVE_TX_TRUNC(a) CSR_TYPE_RSL
#define basename_CAVM_MCSX_PAB_TX_SLAVE_TX_TRUNC(a) "MCSX_PAB_TX_SLAVE_TX_TRUNC"
#define device_bar_CAVM_MCSX_PAB_TX_SLAVE_TX_TRUNC(a) 0x0 /* PF_BAR0 */
#define busnum_CAVM_MCSX_PAB_TX_SLAVE_TX_TRUNC(a) (a)
#define arguments_CAVM_MCSX_PAB_TX_SLAVE_TX_TRUNC(a) (a),-1,-1,-1

/**
 * Register (RSL) mcs#_pab_tx_slave_word_add_if
 *
 * MCS Pab Tx Slave Word Add If Register
 * Extra words are allocated to each packet based on potential worst case packet growth
 * in terms of word count.
 * For example on egress, a packet can grow by 32B due to addition of a 16B sectag and a 16B ICV.
 * A scheduler ahead of the MCS can not know ahead of time the exact growth of the
 * packet and must assume the worst case growth to avoid potentially overflowing any
 * downstream buffers.  This speculative amount allocated is 2 word (up to 32B) for
 * each packet.
 * On ingress, a packet can grow by 4B due to the insertion of the 4B RX MCS header,
 * which could make the number of words required to be buffered downstream increase by
 * 1.
 * The correction value (ie. unused credits) is provided by the MCS (on the
 * pab_out_pkt_word_added.word_add) after the incoming packet is transformed and thus
 * the exact difference between the extra words speculatively allocated to each packet
 * versus the transformed packet's true growth.
 */
union cavm_mcsx_pab_tx_slave_word_add_if
{
    uint64_t u;
    struct cavm_mcsx_pab_tx_slave_word_add_if_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_2_63         : 62;
        uint64_t extra_words           : 2;  /**< [  1:  0](R/W) Extra words per packet that an upstream scheduler must take into account to
                                                                 potentially not underflow downstream buffering.
                                                                 Value of 3 is reserved. */
#else /* Word 0 - Little Endian */
        uint64_t extra_words           : 2;  /**< [  1:  0](R/W) Extra words per packet that an upstream scheduler must take into account to
                                                                 potentially not underflow downstream buffering.
                                                                 Value of 3 is reserved. */
        uint64_t reserved_2_63         : 62;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_mcsx_pab_tx_slave_word_add_if_s cn; */
};
typedef union cavm_mcsx_pab_tx_slave_word_add_if cavm_mcsx_pab_tx_slave_word_add_if_t;

static inline uint64_t CAVM_MCSX_PAB_TX_SLAVE_WORD_ADD_IF(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_MCSX_PAB_TX_SLAVE_WORD_ADD_IF(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CNF10KB) && (a<=6))
        return 0x87e080000498ll + 0x1000000ll * ((a) & 0x7);
    __cavm_csr_fatal("MCSX_PAB_TX_SLAVE_WORD_ADD_IF", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_MCSX_PAB_TX_SLAVE_WORD_ADD_IF(a) cavm_mcsx_pab_tx_slave_word_add_if_t
#define bustype_CAVM_MCSX_PAB_TX_SLAVE_WORD_ADD_IF(a) CSR_TYPE_RSL
#define basename_CAVM_MCSX_PAB_TX_SLAVE_WORD_ADD_IF(a) "MCSX_PAB_TX_SLAVE_WORD_ADD_IF"
#define device_bar_CAVM_MCSX_PAB_TX_SLAVE_WORD_ADD_IF(a) 0x0 /* PF_BAR0 */
#define busnum_CAVM_MCSX_PAB_TX_SLAVE_WORD_ADD_IF(a) (a)
#define arguments_CAVM_MCSX_PAB_TX_SLAVE_WORD_ADD_IF(a) (a),-1,-1,-1

/**
 * Register (RSL) mcs#_pex_rx_slave_custom_tag#
 *
 * MCS Pex Rx Slave Custom Tag Register
 * Custom tag configuration
 */
union cavm_mcsx_pex_rx_slave_custom_tagx
{
    uint64_t u;
    struct cavm_mcsx_pex_rx_slave_custom_tagx_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_25_63        : 39;
        uint64_t cstm_indx             : 3;  /**< [ 24: 22](R/W) Custom tag index used to identify the VLAN etype when match is found (used to
                                                                 generate pex_cpm.outer_vlan_type and pex_cpm.inner_vlan_type). */
        uint64_t reserved_21           : 1;
        uint64_t cstm_vlan             : 1;  /**< [ 20: 20](R/W) Must be set to 1 */
        uint64_t reserved_16_19        : 4;
        uint64_t cstm_etype            : 16; /**< [ 15:  0](R/W) EthType/TPID; typical TPID for C-Tag is 0x8100, and S-Tag is 0x88a8. */
#else /* Word 0 - Little Endian */
        uint64_t cstm_etype            : 16; /**< [ 15:  0](R/W) EthType/TPID; typical TPID for C-Tag is 0x8100, and S-Tag is 0x88a8. */
        uint64_t reserved_16_19        : 4;
        uint64_t cstm_vlan             : 1;  /**< [ 20: 20](R/W) Must be set to 1 */
        uint64_t reserved_21           : 1;
        uint64_t cstm_indx             : 3;  /**< [ 24: 22](R/W) Custom tag index used to identify the VLAN etype when match is found (used to
                                                                 generate pex_cpm.outer_vlan_type and pex_cpm.inner_vlan_type). */
        uint64_t reserved_25_63        : 39;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_mcsx_pex_rx_slave_custom_tagx_s cn; */
};
typedef union cavm_mcsx_pex_rx_slave_custom_tagx cavm_mcsx_pex_rx_slave_custom_tagx_t;

static inline uint64_t CAVM_MCSX_PEX_RX_SLAVE_CUSTOM_TAGX(uint64_t a, uint64_t b) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_MCSX_PEX_RX_SLAVE_CUSTOM_TAGX(uint64_t a, uint64_t b)
{
    if (cavm_is_model(OCTEONTX_CNF10KB) && ((a<=6) && (b<=7)))
        return 0x87e0800004c8ll + 0x1000000ll * ((a) & 0x7) + 8ll * ((b) & 0x7);
    __cavm_csr_fatal("MCSX_PEX_RX_SLAVE_CUSTOM_TAGX", 2, a, b, 0, 0, 0, 0);
}

#define typedef_CAVM_MCSX_PEX_RX_SLAVE_CUSTOM_TAGX(a,b) cavm_mcsx_pex_rx_slave_custom_tagx_t
#define bustype_CAVM_MCSX_PEX_RX_SLAVE_CUSTOM_TAGX(a,b) CSR_TYPE_RSL
#define basename_CAVM_MCSX_PEX_RX_SLAVE_CUSTOM_TAGX(a,b) "MCSX_PEX_RX_SLAVE_CUSTOM_TAGX"
#define device_bar_CAVM_MCSX_PEX_RX_SLAVE_CUSTOM_TAGX(a,b) 0x0 /* PF_BAR0 */
#define busnum_CAVM_MCSX_PEX_RX_SLAVE_CUSTOM_TAGX(a,b) (a)
#define arguments_CAVM_MCSX_PEX_RX_SLAVE_CUSTOM_TAGX(a,b) (a),(b),-1,-1

/**
 * Register (RSL) mcs#_pex_rx_slave_custom_tag_rel_mode_sel#
 *
 * MCS Pex Rx Slave Custom Tag Rel Mode Sel Register
 * VLAN/Custom tag selection per port for relative SecTAG insertion mode (applicable to egress only).
 */
union cavm_mcsx_pex_rx_slave_custom_tag_rel_mode_selx
{
    uint64_t u;
    struct cavm_mcsx_pex_rx_slave_custom_tag_rel_mode_selx_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_3_63         : 61;
        uint64_t cstm_sel              : 3;  /**< [  2:  0](R/W) Selection for the custom tag to be used for SecTAG offset calculation in
                                                                 relative insertion mode.  Value 0 to 7 selects the corresponding instance of the
                                                                 custom_tag registers which defines the tag. */
#else /* Word 0 - Little Endian */
        uint64_t cstm_sel              : 3;  /**< [  2:  0](R/W) Selection for the custom tag to be used for SecTAG offset calculation in
                                                                 relative insertion mode.  Value 0 to 7 selects the corresponding instance of the
                                                                 custom_tag registers which defines the tag. */
        uint64_t reserved_3_63         : 61;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_mcsx_pex_rx_slave_custom_tag_rel_mode_selx_s cn; */
};
typedef union cavm_mcsx_pex_rx_slave_custom_tag_rel_mode_selx cavm_mcsx_pex_rx_slave_custom_tag_rel_mode_selx_t;

static inline uint64_t CAVM_MCSX_PEX_RX_SLAVE_CUSTOM_TAG_REL_MODE_SELX(uint64_t a, uint64_t b) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_MCSX_PEX_RX_SLAVE_CUSTOM_TAG_REL_MODE_SELX(uint64_t a, uint64_t b)
{
    if (cavm_is_model(OCTEONTX_CNF10KB) && ((a<=6) && (b<=3)))
        return 0x87e080000508ll + 0x1000000ll * ((a) & 0x7) + 8ll * ((b) & 0x3);
    __cavm_csr_fatal("MCSX_PEX_RX_SLAVE_CUSTOM_TAG_REL_MODE_SELX", 2, a, b, 0, 0, 0, 0);
}

#define typedef_CAVM_MCSX_PEX_RX_SLAVE_CUSTOM_TAG_REL_MODE_SELX(a,b) cavm_mcsx_pex_rx_slave_custom_tag_rel_mode_selx_t
#define bustype_CAVM_MCSX_PEX_RX_SLAVE_CUSTOM_TAG_REL_MODE_SELX(a,b) CSR_TYPE_RSL
#define basename_CAVM_MCSX_PEX_RX_SLAVE_CUSTOM_TAG_REL_MODE_SELX(a,b) "MCSX_PEX_RX_SLAVE_CUSTOM_TAG_REL_MODE_SELX"
#define device_bar_CAVM_MCSX_PEX_RX_SLAVE_CUSTOM_TAG_REL_MODE_SELX(a,b) 0x0 /* PF_BAR0 */
#define busnum_CAVM_MCSX_PEX_RX_SLAVE_CUSTOM_TAG_REL_MODE_SELX(a,b) (a)
#define arguments_CAVM_MCSX_PEX_RX_SLAVE_CUSTOM_TAG_REL_MODE_SELX(a,b) (a),(b),-1,-1

/**
 * Register (RSL) mcs#_pex_rx_slave_dbg_mux_sel
 *
 * MCS Pex Rx Slave Dbg Mux Sel Register
 * Per segment mux control for the debug_mux.  Configuration of this register will
 * affect which debug set is output on the corresponding debug mux logic for the PEX.
 */
union cavm_mcsx_pex_rx_slave_dbg_mux_sel
{
    uint64_t u;
    struct cavm_mcsx_pex_rx_slave_dbg_mux_sel_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_31_63        : 33;
        uint64_t seg3                  : 7;  /**< [ 30: 24](R/W) Select which debug set is output on the segment3 of the debug mux for the PEX.
                                                                 Note that a higher level dbg_mux_sel also exists to select which block's debug
                                                                 sets are to be output of the IP */
        uint64_t reserved_23           : 1;
        uint64_t seg2                  : 7;  /**< [ 22: 16](R/W) Select which debug set is output on the segment2 of the debug mux for the PEX.
                                                                 Note that a higher level dbg_mux_sel also exists to select which block's debug
                                                                 sets are to be output of the IP */
        uint64_t reserved_15           : 1;
        uint64_t seg1                  : 7;  /**< [ 14:  8](R/W) Select which debug set is output on the segment1 of the debug mux for the PEX.
                                                                 Note that a higher level dbg_mux_sel also exists to select which block's debug
                                                                 sets are to be output of the IP */
        uint64_t reserved_7            : 1;
        uint64_t seg0                  : 7;  /**< [  6:  0](R/W) Select which debug set is output on the segment0 of the debug mux for the PEX.
                                                                 Note that a higher level dbg_mux_sel also exists to select which block's debug
                                                                 sets are to be output of the IP */
#else /* Word 0 - Little Endian */
        uint64_t seg0                  : 7;  /**< [  6:  0](R/W) Select which debug set is output on the segment0 of the debug mux for the PEX.
                                                                 Note that a higher level dbg_mux_sel also exists to select which block's debug
                                                                 sets are to be output of the IP */
        uint64_t reserved_7            : 1;
        uint64_t seg1                  : 7;  /**< [ 14:  8](R/W) Select which debug set is output on the segment1 of the debug mux for the PEX.
                                                                 Note that a higher level dbg_mux_sel also exists to select which block's debug
                                                                 sets are to be output of the IP */
        uint64_t reserved_15           : 1;
        uint64_t seg2                  : 7;  /**< [ 22: 16](R/W) Select which debug set is output on the segment2 of the debug mux for the PEX.
                                                                 Note that a higher level dbg_mux_sel also exists to select which block's debug
                                                                 sets are to be output of the IP */
        uint64_t reserved_23           : 1;
        uint64_t seg3                  : 7;  /**< [ 30: 24](R/W) Select which debug set is output on the segment3 of the debug mux for the PEX.
                                                                 Note that a higher level dbg_mux_sel also exists to select which block's debug
                                                                 sets are to be output of the IP */
        uint64_t reserved_31_63        : 33;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_mcsx_pex_rx_slave_dbg_mux_sel_s cn; */
};
typedef union cavm_mcsx_pex_rx_slave_dbg_mux_sel cavm_mcsx_pex_rx_slave_dbg_mux_sel_t;

static inline uint64_t CAVM_MCSX_PEX_RX_SLAVE_DBG_MUX_SEL(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_MCSX_PEX_RX_SLAVE_DBG_MUX_SEL(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CNF10KB) && (a<=6))
        return 0x87e080000710ll + 0x1000000ll * ((a) & 0x7);
    __cavm_csr_fatal("MCSX_PEX_RX_SLAVE_DBG_MUX_SEL", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_MCSX_PEX_RX_SLAVE_DBG_MUX_SEL(a) cavm_mcsx_pex_rx_slave_dbg_mux_sel_t
#define bustype_CAVM_MCSX_PEX_RX_SLAVE_DBG_MUX_SEL(a) CSR_TYPE_RSL
#define basename_CAVM_MCSX_PEX_RX_SLAVE_DBG_MUX_SEL(a) "MCSX_PEX_RX_SLAVE_DBG_MUX_SEL"
#define device_bar_CAVM_MCSX_PEX_RX_SLAVE_DBG_MUX_SEL(a) 0x0 /* PF_BAR0 */
#define busnum_CAVM_MCSX_PEX_RX_SLAVE_DBG_MUX_SEL(a) (a)
#define arguments_CAVM_MCSX_PEX_RX_SLAVE_DBG_MUX_SEL(a) (a),-1,-1,-1

/**
 * Register (RSL) mcs#_pex_rx_slave_debug_status
 *
 * MCS Pex Rx Slave Debug Status Register
 * Debug status register:  Captures the debug set selected by dbg_mux_sel.
 */
union cavm_mcsx_pex_rx_slave_debug_status
{
    uint64_t u;
    struct cavm_mcsx_pex_rx_slave_debug_status_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t seg3                  : 16; /**< [ 63: 48](RO) Debug set status for segment3. */
        uint64_t seg2                  : 16; /**< [ 47: 32](RO) Debug set status for segment2. */
        uint64_t seg1                  : 16; /**< [ 31: 16](RO) Debug set status for segment1. */
        uint64_t seg0                  : 16; /**< [ 15:  0](RO) Debug set status for segment0. */
#else /* Word 0 - Little Endian */
        uint64_t seg0                  : 16; /**< [ 15:  0](RO) Debug set status for segment0. */
        uint64_t seg1                  : 16; /**< [ 31: 16](RO) Debug set status for segment1. */
        uint64_t seg2                  : 16; /**< [ 47: 32](RO) Debug set status for segment2. */
        uint64_t seg3                  : 16; /**< [ 63: 48](RO) Debug set status for segment3. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_mcsx_pex_rx_slave_debug_status_s cn; */
};
typedef union cavm_mcsx_pex_rx_slave_debug_status cavm_mcsx_pex_rx_slave_debug_status_t;

static inline uint64_t CAVM_MCSX_PEX_RX_SLAVE_DEBUG_STATUS(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_MCSX_PEX_RX_SLAVE_DEBUG_STATUS(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CNF10KB) && (a<=6))
        return 0x87e080000718ll + 0x1000000ll * ((a) & 0x7);
    __cavm_csr_fatal("MCSX_PEX_RX_SLAVE_DEBUG_STATUS", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_MCSX_PEX_RX_SLAVE_DEBUG_STATUS(a) cavm_mcsx_pex_rx_slave_debug_status_t
#define bustype_CAVM_MCSX_PEX_RX_SLAVE_DEBUG_STATUS(a) CSR_TYPE_RSL
#define basename_CAVM_MCSX_PEX_RX_SLAVE_DEBUG_STATUS(a) "MCSX_PEX_RX_SLAVE_DEBUG_STATUS"
#define device_bar_CAVM_MCSX_PEX_RX_SLAVE_DEBUG_STATUS(a) 0x0 /* PF_BAR0 */
#define busnum_CAVM_MCSX_PEX_RX_SLAVE_DEBUG_STATUS(a) (a)
#define arguments_CAVM_MCSX_PEX_RX_SLAVE_DEBUG_STATUS(a) (a),-1,-1,-1

/**
 * Register (RSL) mcs#_pex_rx_slave_etype_enable
 *
 * MCS Pex Rx Slave Etype Enable Register
 * Enable bits for etypes for parsing purpose
 */
union cavm_mcsx_pex_rx_slave_etype_enable
{
    uint64_t u;
    struct cavm_mcsx_pex_rx_slave_etype_enable_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_15_63        : 49;
        uint64_t txmcs_etype_en        : 1;  /**< [ 14: 14](R/W) Reserved.
                                                                 Internal:
                                                                 Enable EthType stored in the field tx_mcs_header in the opt_header_cfg register.
                                                                 Set to 1 to enable the EthTypes, or 0 to disable. */
        uint64_t rxmcs_etype_en        : 1;  /**< [ 13: 13](R/W) Reserved.
                                                                 Internal:
                                                                 Enable EthType stored in the field rx_mcs_header in the opt_header_cfg register.
                                                                 Set to 1 to enable the EthType, or 0 to disable. */
        uint64_t st_etype_en           : 1;  /**< [ 12: 12](R/W) Enable EthType stored in the sectag_cfg registers.  Set to 1 to enable the
                                                                 EthType, or 0 to disable. */
        uint64_t reserved_8_11         : 4;
        uint64_t cstm_etype_en         : 8;  /**< [  7:  0](R/W) Enable EthTypes/TPID stored in the 8 VLAN tags registers, where bit 0-7 enable
                                                                 registers 0-7 respectively.  Set to 1 to enable the EthTypes, or 0 to disable. */
#else /* Word 0 - Little Endian */
        uint64_t cstm_etype_en         : 8;  /**< [  7:  0](R/W) Enable EthTypes/TPID stored in the 8 VLAN tags registers, where bit 0-7 enable
                                                                 registers 0-7 respectively.  Set to 1 to enable the EthTypes, or 0 to disable. */
        uint64_t reserved_8_11         : 4;
        uint64_t st_etype_en           : 1;  /**< [ 12: 12](R/W) Enable EthType stored in the sectag_cfg registers.  Set to 1 to enable the
                                                                 EthType, or 0 to disable. */
        uint64_t rxmcs_etype_en        : 1;  /**< [ 13: 13](R/W) Reserved.
                                                                 Internal:
                                                                 Enable EthType stored in the field rx_mcs_header in the opt_header_cfg register.
                                                                 Set to 1 to enable the EthType, or 0 to disable. */
        uint64_t txmcs_etype_en        : 1;  /**< [ 14: 14](R/W) Reserved.
                                                                 Internal:
                                                                 Enable EthType stored in the field tx_mcs_header in the opt_header_cfg register.
                                                                 Set to 1 to enable the EthTypes, or 0 to disable. */
        uint64_t reserved_15_63        : 49;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_mcsx_pex_rx_slave_etype_enable_s cn; */
};
typedef union cavm_mcsx_pex_rx_slave_etype_enable cavm_mcsx_pex_rx_slave_etype_enable_t;

static inline uint64_t CAVM_MCSX_PEX_RX_SLAVE_ETYPE_ENABLE(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_MCSX_PEX_RX_SLAVE_ETYPE_ENABLE(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CNF10KB) && (a<=6))
        return 0x87e0800006e8ll + 0x1000000ll * ((a) & 0x7);
    __cavm_csr_fatal("MCSX_PEX_RX_SLAVE_ETYPE_ENABLE", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_MCSX_PEX_RX_SLAVE_ETYPE_ENABLE(a) cavm_mcsx_pex_rx_slave_etype_enable_t
#define bustype_CAVM_MCSX_PEX_RX_SLAVE_ETYPE_ENABLE(a) CSR_TYPE_RSL
#define basename_CAVM_MCSX_PEX_RX_SLAVE_ETYPE_ENABLE(a) "MCSX_PEX_RX_SLAVE_ETYPE_ENABLE"
#define device_bar_CAVM_MCSX_PEX_RX_SLAVE_ETYPE_ENABLE(a) 0x0 /* PF_BAR0 */
#define busnum_CAVM_MCSX_PEX_RX_SLAVE_ETYPE_ENABLE(a) (a)
#define arguments_CAVM_MCSX_PEX_RX_SLAVE_ETYPE_ENABLE(a) (a),-1,-1,-1

/**
 * Register (RSL) mcs#_pex_rx_slave_opt_header_cfg_rsvd
 *
 * INTERNAL: MCS Pex Rx Slave Opt Header Cfg Register
 *
 * E-Type/TPID configuration for optional Rx-MCS and Tx-MCS headers tags
 */
union cavm_mcsx_pex_rx_slave_opt_header_cfg_rsvd
{
    uint64_t u;
    struct cavm_mcsx_pex_rx_slave_opt_header_cfg_rsvd_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_32_63        : 32;
        uint64_t tx_mcs_header         : 16; /**< [ 31: 16](R/W) Reserved. */
        uint64_t rx_mcs_header         : 16; /**< [ 15:  0](R/W) Reserved. */
#else /* Word 0 - Little Endian */
        uint64_t rx_mcs_header         : 16; /**< [ 15:  0](R/W) Reserved. */
        uint64_t tx_mcs_header         : 16; /**< [ 31: 16](R/W) Reserved. */
        uint64_t reserved_32_63        : 32;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_mcsx_pex_rx_slave_opt_header_cfg_rsvd_s cn; */
};
typedef union cavm_mcsx_pex_rx_slave_opt_header_cfg_rsvd cavm_mcsx_pex_rx_slave_opt_header_cfg_rsvd_t;

static inline uint64_t CAVM_MCSX_PEX_RX_SLAVE_OPT_HEADER_CFG_RSVD(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_MCSX_PEX_RX_SLAVE_OPT_HEADER_CFG_RSVD(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CNF10KB) && (a<=6))
        return 0x87e080000550ll + 0x1000000ll * ((a) & 0x7);
    __cavm_csr_fatal("MCSX_PEX_RX_SLAVE_OPT_HEADER_CFG_RSVD", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_MCSX_PEX_RX_SLAVE_OPT_HEADER_CFG_RSVD(a) cavm_mcsx_pex_rx_slave_opt_header_cfg_rsvd_t
#define bustype_CAVM_MCSX_PEX_RX_SLAVE_OPT_HEADER_CFG_RSVD(a) CSR_TYPE_RSL
#define basename_CAVM_MCSX_PEX_RX_SLAVE_OPT_HEADER_CFG_RSVD(a) "MCSX_PEX_RX_SLAVE_OPT_HEADER_CFG_RSVD"
#define device_bar_CAVM_MCSX_PEX_RX_SLAVE_OPT_HEADER_CFG_RSVD(a) 0x0 /* PF_BAR0 */
#define busnum_CAVM_MCSX_PEX_RX_SLAVE_OPT_HEADER_CFG_RSVD(a) (a)
#define arguments_CAVM_MCSX_PEX_RX_SLAVE_OPT_HEADER_CFG_RSVD(a) (a),-1,-1,-1

/**
 * Register (RSL) mcs#_pex_rx_slave_pex_configuration
 *
 * MCS Pex Rx Slave Pex Configuration Register
 * Packet parser and extractor configuration
 */
union cavm_mcsx_pex_rx_slave_pex_configuration
{
    uint64_t u;
    struct cavm_mcsx_pex_rx_slave_pex_configuration_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_6_63         : 58;
        uint64_t non_dix_err           : 1;  /**< [  5:  5](R/W) Set to 1 to trigger a parse error when non-DIX frames are received */
        uint64_t reserved_4            : 1;
        uint64_t custom_header         : 4;  /**< [  3:  0](R/W) Per-port custom header enable. Port number 'i' packets are expected to have 8B
                                                                 custom header before DA/SA if bit 'i' is set. */
#else /* Word 0 - Little Endian */
        uint64_t custom_header         : 4;  /**< [  3:  0](R/W) Per-port custom header enable. Port number 'i' packets are expected to have 8B
                                                                 custom header before DA/SA if bit 'i' is set. */
        uint64_t reserved_4            : 1;
        uint64_t non_dix_err           : 1;  /**< [  5:  5](R/W) Set to 1 to trigger a parse error when non-DIX frames are received */
        uint64_t reserved_6_63         : 58;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_mcsx_pex_rx_slave_pex_configuration_s cn; */
};
typedef union cavm_mcsx_pex_rx_slave_pex_configuration cavm_mcsx_pex_rx_slave_pex_configuration_t;

static inline uint64_t CAVM_MCSX_PEX_RX_SLAVE_PEX_CONFIGURATION(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_MCSX_PEX_RX_SLAVE_PEX_CONFIGURATION(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CNF10KB) && (a<=6))
        return 0x87e0800004c0ll + 0x1000000ll * ((a) & 0x7);
    __cavm_csr_fatal("MCSX_PEX_RX_SLAVE_PEX_CONFIGURATION", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_MCSX_PEX_RX_SLAVE_PEX_CONFIGURATION(a) cavm_mcsx_pex_rx_slave_pex_configuration_t
#define bustype_CAVM_MCSX_PEX_RX_SLAVE_PEX_CONFIGURATION(a) CSR_TYPE_RSL
#define basename_CAVM_MCSX_PEX_RX_SLAVE_PEX_CONFIGURATION(a) "MCSX_PEX_RX_SLAVE_PEX_CONFIGURATION"
#define device_bar_CAVM_MCSX_PEX_RX_SLAVE_PEX_CONFIGURATION(a) 0x0 /* PF_BAR0 */
#define busnum_CAVM_MCSX_PEX_RX_SLAVE_PEX_CONFIGURATION(a) (a)
#define arguments_CAVM_MCSX_PEX_RX_SLAVE_PEX_CONFIGURATION(a) (a),-1,-1,-1

/**
 * Register (RSL) mcs#_pex_rx_slave_reserved0#_rsvd
 *
 * INTERNAL: MCS Pex Rx Slave Reserved0 Register
 *
 * This register is reserved.
 */
union cavm_mcsx_pex_rx_slave_reserved0x_rsvd
{
    uint64_t u;
    struct cavm_mcsx_pex_rx_slave_reserved0x_rsvd_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_0_63         : 64;
#else /* Word 0 - Little Endian */
        uint64_t reserved_0_63         : 64;
#endif /* Word 0 - End */
    } s;
    struct cavm_mcsx_pex_rx_slave_reserved0x_rsvd_cn
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_1_63         : 63;
        uint64_t reserved_0            : 1;
#else /* Word 0 - Little Endian */
        uint64_t reserved_0            : 1;
        uint64_t reserved_1_63         : 63;
#endif /* Word 0 - End */
    } cn;
};
typedef union cavm_mcsx_pex_rx_slave_reserved0x_rsvd cavm_mcsx_pex_rx_slave_reserved0x_rsvd_t;

static inline uint64_t CAVM_MCSX_PEX_RX_SLAVE_RESERVED0X_RSVD(uint64_t a, uint64_t b) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_MCSX_PEX_RX_SLAVE_RESERVED0X_RSVD(uint64_t a, uint64_t b)
{
    if (cavm_is_model(OCTEONTX_CNF10KB) && ((a<=6) && (b<=3)))
        return 0x87e0800004a0ll + 0x1000000ll * ((a) & 0x7) + 8ll * ((b) & 0x3);
    __cavm_csr_fatal("MCSX_PEX_RX_SLAVE_RESERVED0X_RSVD", 2, a, b, 0, 0, 0, 0);
}

#define typedef_CAVM_MCSX_PEX_RX_SLAVE_RESERVED0X_RSVD(a,b) cavm_mcsx_pex_rx_slave_reserved0x_rsvd_t
#define bustype_CAVM_MCSX_PEX_RX_SLAVE_RESERVED0X_RSVD(a,b) CSR_TYPE_RSL
#define basename_CAVM_MCSX_PEX_RX_SLAVE_RESERVED0X_RSVD(a,b) "MCSX_PEX_RX_SLAVE_RESERVED0X_RSVD"
#define device_bar_CAVM_MCSX_PEX_RX_SLAVE_RESERVED0X_RSVD(a,b) 0x0 /* PF_BAR0 */
#define busnum_CAVM_MCSX_PEX_RX_SLAVE_RESERVED0X_RSVD(a,b) (a)
#define arguments_CAVM_MCSX_PEX_RX_SLAVE_RESERVED0X_RSVD(a,b) (a),(b),-1,-1

/**
 * Register (RSL) mcs#_pex_rx_slave_reserved1#_rsvd
 *
 * INTERNAL: MCS Pex Rx Slave Reserved1 Register
 *
 * This register is reserved.
 */
union cavm_mcsx_pex_rx_slave_reserved1x_rsvd
{
    uint64_t u;
    struct cavm_mcsx_pex_rx_slave_reserved1x_rsvd_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_0_63         : 64;
#else /* Word 0 - Little Endian */
        uint64_t reserved_0_63         : 64;
#endif /* Word 0 - End */
    } s;
    struct cavm_mcsx_pex_rx_slave_reserved1x_rsvd_cn
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_1_63         : 63;
        uint64_t reserved_0            : 1;
#else /* Word 0 - Little Endian */
        uint64_t reserved_0            : 1;
        uint64_t reserved_1_63         : 63;
#endif /* Word 0 - End */
    } cn;
};
typedef union cavm_mcsx_pex_rx_slave_reserved1x_rsvd cavm_mcsx_pex_rx_slave_reserved1x_rsvd_t;

static inline uint64_t CAVM_MCSX_PEX_RX_SLAVE_RESERVED1X_RSVD(uint64_t a, uint64_t b) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_MCSX_PEX_RX_SLAVE_RESERVED1X_RSVD(uint64_t a, uint64_t b)
{
    if (cavm_is_model(OCTEONTX_CNF10KB) && ((a<=6) && (b<=3)))
        return 0x87e0800006f0ll + 0x1000000ll * ((a) & 0x7) + 8ll * ((b) & 0x3);
    __cavm_csr_fatal("MCSX_PEX_RX_SLAVE_RESERVED1X_RSVD", 2, a, b, 0, 0, 0, 0);
}

#define typedef_CAVM_MCSX_PEX_RX_SLAVE_RESERVED1X_RSVD(a,b) cavm_mcsx_pex_rx_slave_reserved1x_rsvd_t
#define bustype_CAVM_MCSX_PEX_RX_SLAVE_RESERVED1X_RSVD(a,b) CSR_TYPE_RSL
#define basename_CAVM_MCSX_PEX_RX_SLAVE_RESERVED1X_RSVD(a,b) "MCSX_PEX_RX_SLAVE_RESERVED1X_RSVD"
#define device_bar_CAVM_MCSX_PEX_RX_SLAVE_RESERVED1X_RSVD(a,b) 0x0 /* PF_BAR0 */
#define busnum_CAVM_MCSX_PEX_RX_SLAVE_RESERVED1X_RSVD(a,b) (a)
#define arguments_CAVM_MCSX_PEX_RX_SLAVE_RESERVED1X_RSVD(a,b) (a),(b),-1,-1

/**
 * Register (RSL) mcs#_pex_rx_slave_reserved_0#_rsvd
 *
 * INTERNAL: MCS Pex Rx Slave Reserved 0 Register
 *
 * Reserved.
 */
union cavm_mcsx_pex_rx_slave_reserved_0x_rsvd
{
    uint64_t u;
    struct cavm_mcsx_pex_rx_slave_reserved_0x_rsvd_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_0_63         : 64;
#else /* Word 0 - Little Endian */
        uint64_t reserved_0_63         : 64;
#endif /* Word 0 - End */
    } s;
    struct cavm_mcsx_pex_rx_slave_reserved_0x_rsvd_cn
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_16_63        : 48;
        uint64_t reserved_0_15         : 16;
#else /* Word 0 - Little Endian */
        uint64_t reserved_0_15         : 16;
        uint64_t reserved_16_63        : 48;
#endif /* Word 0 - End */
    } cn;
};
typedef union cavm_mcsx_pex_rx_slave_reserved_0x_rsvd cavm_mcsx_pex_rx_slave_reserved_0x_rsvd_t;

static inline uint64_t CAVM_MCSX_PEX_RX_SLAVE_RESERVED_0X_RSVD(uint64_t a, uint64_t b) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_MCSX_PEX_RX_SLAVE_RESERVED_0X_RSVD(uint64_t a, uint64_t b)
{
    if (cavm_is_model(OCTEONTX_CNF10KB) && ((a<=6) && (b<=3)))
        return 0x87e080000528ll + 0x1000000ll * ((a) & 0x7) + 8ll * ((b) & 0x3);
    __cavm_csr_fatal("MCSX_PEX_RX_SLAVE_RESERVED_0X_RSVD", 2, a, b, 0, 0, 0, 0);
}

#define typedef_CAVM_MCSX_PEX_RX_SLAVE_RESERVED_0X_RSVD(a,b) cavm_mcsx_pex_rx_slave_reserved_0x_rsvd_t
#define bustype_CAVM_MCSX_PEX_RX_SLAVE_RESERVED_0X_RSVD(a,b) CSR_TYPE_RSL
#define basename_CAVM_MCSX_PEX_RX_SLAVE_RESERVED_0X_RSVD(a,b) "MCSX_PEX_RX_SLAVE_RESERVED_0X_RSVD"
#define device_bar_CAVM_MCSX_PEX_RX_SLAVE_RESERVED_0X_RSVD(a,b) 0x0 /* PF_BAR0 */
#define busnum_CAVM_MCSX_PEX_RX_SLAVE_RESERVED_0X_RSVD(a,b) (a)
#define arguments_CAVM_MCSX_PEX_RX_SLAVE_RESERVED_0X_RSVD(a,b) (a),(b),-1,-1

/**
 * Register (RSL) mcs#_pex_rx_slave_rule_combo_et#
 *
 * MCS Pex Rx Slave Rule Combo Et Register
 * EthType for combo control packet matching
 */
union cavm_mcsx_pex_rx_slave_rule_combo_etx
{
    uint64_t u;
    struct cavm_mcsx_pex_rx_slave_rule_combo_etx_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_16_63        : 48;
        uint64_t rule_combo_et         : 16; /**< [ 15:  0](R/W) EthType for combo control packet matching */
#else /* Word 0 - Little Endian */
        uint64_t rule_combo_et         : 16; /**< [ 15:  0](R/W) EthType for combo control packet matching */
        uint64_t reserved_16_63        : 48;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_mcsx_pex_rx_slave_rule_combo_etx_s cn; */
};
typedef union cavm_mcsx_pex_rx_slave_rule_combo_etx cavm_mcsx_pex_rx_slave_rule_combo_etx_t;

static inline uint64_t CAVM_MCSX_PEX_RX_SLAVE_RULE_COMBO_ETX(uint64_t a, uint64_t b) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_MCSX_PEX_RX_SLAVE_RULE_COMBO_ETX(uint64_t a, uint64_t b)
{
    if (cavm_is_model(OCTEONTX_CNF10KB) && ((a<=6) && (b<=3)))
        return 0x87e080000658ll + 0x1000000ll * ((a) & 0x7) + 0x28ll * ((b) & 0x3);
    __cavm_csr_fatal("MCSX_PEX_RX_SLAVE_RULE_COMBO_ETX", 2, a, b, 0, 0, 0, 0);
}

#define typedef_CAVM_MCSX_PEX_RX_SLAVE_RULE_COMBO_ETX(a,b) cavm_mcsx_pex_rx_slave_rule_combo_etx_t
#define bustype_CAVM_MCSX_PEX_RX_SLAVE_RULE_COMBO_ETX(a,b) CSR_TYPE_RSL
#define basename_CAVM_MCSX_PEX_RX_SLAVE_RULE_COMBO_ETX(a,b) "MCSX_PEX_RX_SLAVE_RULE_COMBO_ETX"
#define device_bar_CAVM_MCSX_PEX_RX_SLAVE_RULE_COMBO_ETX(a,b) 0x0 /* PF_BAR0 */
#define busnum_CAVM_MCSX_PEX_RX_SLAVE_RULE_COMBO_ETX(a,b) (a)
#define arguments_CAVM_MCSX_PEX_RX_SLAVE_RULE_COMBO_ETX(a,b) (a),(b),-1,-1

/**
 * Register (RSL) mcs#_pex_rx_slave_rule_combo_max#
 *
 * MCS Pex Rx Slave Rule Combo Max Register
 * Maximum DA address for control packet matching
 */
union cavm_mcsx_pex_rx_slave_rule_combo_maxx
{
    uint64_t u;
    struct cavm_mcsx_pex_rx_slave_rule_combo_maxx_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t rule_combo_max_msb    : 32; /**< [ 63: 32](R/W) MSB of minimum DA address for control packet matching */
        uint64_t rule_combo_max_lsb    : 32; /**< [ 31:  0](R/W) LSB of maximum DA address for control packet matching */
#else /* Word 0 - Little Endian */
        uint64_t rule_combo_max_lsb    : 32; /**< [ 31:  0](R/W) LSB of maximum DA address for control packet matching */
        uint64_t rule_combo_max_msb    : 32; /**< [ 63: 32](R/W) MSB of minimum DA address for control packet matching */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_mcsx_pex_rx_slave_rule_combo_maxx_s cn; */
};
typedef union cavm_mcsx_pex_rx_slave_rule_combo_maxx cavm_mcsx_pex_rx_slave_rule_combo_maxx_t;

static inline uint64_t CAVM_MCSX_PEX_RX_SLAVE_RULE_COMBO_MAXX(uint64_t a, uint64_t b) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_MCSX_PEX_RX_SLAVE_RULE_COMBO_MAXX(uint64_t a, uint64_t b)
{
    if (cavm_is_model(OCTEONTX_CNF10KB) && ((a<=6) && (b<=3)))
        return 0x87e080000650ll + 0x1000000ll * ((a) & 0x7) + 0x28ll * ((b) & 0x3);
    __cavm_csr_fatal("MCSX_PEX_RX_SLAVE_RULE_COMBO_MAXX", 2, a, b, 0, 0, 0, 0);
}

#define typedef_CAVM_MCSX_PEX_RX_SLAVE_RULE_COMBO_MAXX(a,b) cavm_mcsx_pex_rx_slave_rule_combo_maxx_t
#define bustype_CAVM_MCSX_PEX_RX_SLAVE_RULE_COMBO_MAXX(a,b) CSR_TYPE_RSL
#define basename_CAVM_MCSX_PEX_RX_SLAVE_RULE_COMBO_MAXX(a,b) "MCSX_PEX_RX_SLAVE_RULE_COMBO_MAXX"
#define device_bar_CAVM_MCSX_PEX_RX_SLAVE_RULE_COMBO_MAXX(a,b) 0x0 /* PF_BAR0 */
#define busnum_CAVM_MCSX_PEX_RX_SLAVE_RULE_COMBO_MAXX(a,b) (a)
#define arguments_CAVM_MCSX_PEX_RX_SLAVE_RULE_COMBO_MAXX(a,b) (a),(b),-1,-1

/**
 * Register (RSL) mcs#_pex_rx_slave_rule_combo_min#
 *
 * MCS Pex Rx Slave Rule Combo Min Register
 * Minimum DA address for control packet matching
 */
union cavm_mcsx_pex_rx_slave_rule_combo_minx
{
    uint64_t u;
    struct cavm_mcsx_pex_rx_slave_rule_combo_minx_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t rule_combo_min_msb    : 32; /**< [ 63: 32](R/W) MSB of minimum DA address for control packet matching */
        uint64_t rule_combo_min_lsb    : 32; /**< [ 31:  0](R/W) LSB of minimum DA address for control packet matching */
#else /* Word 0 - Little Endian */
        uint64_t rule_combo_min_lsb    : 32; /**< [ 31:  0](R/W) LSB of minimum DA address for control packet matching */
        uint64_t rule_combo_min_msb    : 32; /**< [ 63: 32](R/W) MSB of minimum DA address for control packet matching */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_mcsx_pex_rx_slave_rule_combo_minx_s cn; */
};
typedef union cavm_mcsx_pex_rx_slave_rule_combo_minx cavm_mcsx_pex_rx_slave_rule_combo_minx_t;

static inline uint64_t CAVM_MCSX_PEX_RX_SLAVE_RULE_COMBO_MINX(uint64_t a, uint64_t b) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_MCSX_PEX_RX_SLAVE_RULE_COMBO_MINX(uint64_t a, uint64_t b)
{
    if (cavm_is_model(OCTEONTX_CNF10KB) && ((a<=6) && (b<=3)))
        return 0x87e080000648ll + 0x1000000ll * ((a) & 0x7) + 0x28ll * ((b) & 0x3);
    __cavm_csr_fatal("MCSX_PEX_RX_SLAVE_RULE_COMBO_MINX", 2, a, b, 0, 0, 0, 0);
}

#define typedef_CAVM_MCSX_PEX_RX_SLAVE_RULE_COMBO_MINX(a,b) cavm_mcsx_pex_rx_slave_rule_combo_minx_t
#define bustype_CAVM_MCSX_PEX_RX_SLAVE_RULE_COMBO_MINX(a,b) CSR_TYPE_RSL
#define basename_CAVM_MCSX_PEX_RX_SLAVE_RULE_COMBO_MINX(a,b) "MCSX_PEX_RX_SLAVE_RULE_COMBO_MINX"
#define device_bar_CAVM_MCSX_PEX_RX_SLAVE_RULE_COMBO_MINX(a,b) 0x0 /* PF_BAR0 */
#define busnum_CAVM_MCSX_PEX_RX_SLAVE_RULE_COMBO_MINX(a,b) (a)
#define arguments_CAVM_MCSX_PEX_RX_SLAVE_RULE_COMBO_MINX(a,b) (a),(b),-1,-1

/**
 * Register (RSL) mcs#_pex_rx_slave_rule_da#
 *
 * MCS Pex Rx Slave Rule Da Register
 * DA address for control packet matching
 */
union cavm_mcsx_pex_rx_slave_rule_dax
{
    uint64_t u;
    struct cavm_mcsx_pex_rx_slave_rule_dax_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_48_63        : 16;
        uint64_t rule_da_msb           : 16; /**< [ 47: 32](R/W) MSB of DA address for control packet matching */
        uint64_t rule_da_lsb           : 32; /**< [ 31:  0](R/W) LSB of DA address for control packet matching */
#else /* Word 0 - Little Endian */
        uint64_t rule_da_lsb           : 32; /**< [ 31:  0](R/W) LSB of DA address for control packet matching */
        uint64_t rule_da_msb           : 16; /**< [ 47: 32](R/W) MSB of DA address for control packet matching */
        uint64_t reserved_48_63        : 16;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_mcsx_pex_rx_slave_rule_dax_s cn; */
};
typedef union cavm_mcsx_pex_rx_slave_rule_dax cavm_mcsx_pex_rx_slave_rule_dax_t;

static inline uint64_t CAVM_MCSX_PEX_RX_SLAVE_RULE_DAX(uint64_t a, uint64_t b) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_MCSX_PEX_RX_SLAVE_RULE_DAX(uint64_t a, uint64_t b)
{
    if (cavm_is_model(OCTEONTX_CNF10KB) && ((a<=6) && (b<=7)))
        return 0x87e080000598ll + 0x1000000ll * ((a) & 0x7) + 8ll * ((b) & 0x7);
    __cavm_csr_fatal("MCSX_PEX_RX_SLAVE_RULE_DAX", 2, a, b, 0, 0, 0, 0);
}

#define typedef_CAVM_MCSX_PEX_RX_SLAVE_RULE_DAX(a,b) cavm_mcsx_pex_rx_slave_rule_dax_t
#define bustype_CAVM_MCSX_PEX_RX_SLAVE_RULE_DAX(a,b) CSR_TYPE_RSL
#define basename_CAVM_MCSX_PEX_RX_SLAVE_RULE_DAX(a,b) "MCSX_PEX_RX_SLAVE_RULE_DAX"
#define device_bar_CAVM_MCSX_PEX_RX_SLAVE_RULE_DAX(a,b) 0x0 /* PF_BAR0 */
#define busnum_CAVM_MCSX_PEX_RX_SLAVE_RULE_DAX(a,b) (a)
#define arguments_CAVM_MCSX_PEX_RX_SLAVE_RULE_DAX(a,b) (a),(b),-1,-1

/**
 * Register (RSL) mcs#_pex_rx_slave_rule_da_range_max#
 *
 * MCS Pex Rx Slave Rule Da Range Max Register
 * Maximum DA address for control packet matching
 */
union cavm_mcsx_pex_rx_slave_rule_da_range_maxx
{
    uint64_t u;
    struct cavm_mcsx_pex_rx_slave_rule_da_range_maxx_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_48_63        : 16;
        uint64_t rule_range_max_msb    : 16; /**< [ 47: 32](R/W) MSB of maximum DA address for DA range control packet matching */
        uint64_t rule_range_max_lsb    : 32; /**< [ 31:  0](R/W) LSB of maximum DA address for DA range control packet matching */
#else /* Word 0 - Little Endian */
        uint64_t rule_range_max_lsb    : 32; /**< [ 31:  0](R/W) LSB of maximum DA address for DA range control packet matching */
        uint64_t rule_range_max_msb    : 16; /**< [ 47: 32](R/W) MSB of maximum DA address for DA range control packet matching */
        uint64_t reserved_48_63        : 16;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_mcsx_pex_rx_slave_rule_da_range_maxx_s cn; */
};
typedef union cavm_mcsx_pex_rx_slave_rule_da_range_maxx cavm_mcsx_pex_rx_slave_rule_da_range_maxx_t;

static inline uint64_t CAVM_MCSX_PEX_RX_SLAVE_RULE_DA_RANGE_MAXX(uint64_t a, uint64_t b) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_MCSX_PEX_RX_SLAVE_RULE_DA_RANGE_MAXX(uint64_t a, uint64_t b)
{
    if (cavm_is_model(OCTEONTX_CNF10KB) && ((a<=6) && (b<=3)))
        return 0x87e0800005e0ll + 0x1000000ll * ((a) & 0x7) + 0x20ll * ((b) & 0x3);
    __cavm_csr_fatal("MCSX_PEX_RX_SLAVE_RULE_DA_RANGE_MAXX", 2, a, b, 0, 0, 0, 0);
}

#define typedef_CAVM_MCSX_PEX_RX_SLAVE_RULE_DA_RANGE_MAXX(a,b) cavm_mcsx_pex_rx_slave_rule_da_range_maxx_t
#define bustype_CAVM_MCSX_PEX_RX_SLAVE_RULE_DA_RANGE_MAXX(a,b) CSR_TYPE_RSL
#define basename_CAVM_MCSX_PEX_RX_SLAVE_RULE_DA_RANGE_MAXX(a,b) "MCSX_PEX_RX_SLAVE_RULE_DA_RANGE_MAXX"
#define device_bar_CAVM_MCSX_PEX_RX_SLAVE_RULE_DA_RANGE_MAXX(a,b) 0x0 /* PF_BAR0 */
#define busnum_CAVM_MCSX_PEX_RX_SLAVE_RULE_DA_RANGE_MAXX(a,b) (a)
#define arguments_CAVM_MCSX_PEX_RX_SLAVE_RULE_DA_RANGE_MAXX(a,b) (a),(b),-1,-1

/**
 * Register (RSL) mcs#_pex_rx_slave_rule_da_range_min#
 *
 * MCS Pex Rx Slave Rule Da Range Min Register
 * Minimum DA address for control packet matching
 */
union cavm_mcsx_pex_rx_slave_rule_da_range_minx
{
    uint64_t u;
    struct cavm_mcsx_pex_rx_slave_rule_da_range_minx_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_48_63        : 16;
        uint64_t rule_range_min_msb    : 16; /**< [ 47: 32](R/W) MSB of minimum DA address for DA range control packet matching */
        uint64_t rule_range_min_lsb    : 32; /**< [ 31:  0](R/W) LSB of minimum DA address for DA range control packet matching */
#else /* Word 0 - Little Endian */
        uint64_t rule_range_min_lsb    : 32; /**< [ 31:  0](R/W) LSB of minimum DA address for DA range control packet matching */
        uint64_t rule_range_min_msb    : 16; /**< [ 47: 32](R/W) MSB of minimum DA address for DA range control packet matching */
        uint64_t reserved_48_63        : 16;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_mcsx_pex_rx_slave_rule_da_range_minx_s cn; */
};
typedef union cavm_mcsx_pex_rx_slave_rule_da_range_minx cavm_mcsx_pex_rx_slave_rule_da_range_minx_t;

static inline uint64_t CAVM_MCSX_PEX_RX_SLAVE_RULE_DA_RANGE_MINX(uint64_t a, uint64_t b) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_MCSX_PEX_RX_SLAVE_RULE_DA_RANGE_MINX(uint64_t a, uint64_t b)
{
    if (cavm_is_model(OCTEONTX_CNF10KB) && ((a<=6) && (b<=3)))
        return 0x87e0800005d8ll + 0x1000000ll * ((a) & 0x7) + 0x20ll * ((b) & 0x3);
    __cavm_csr_fatal("MCSX_PEX_RX_SLAVE_RULE_DA_RANGE_MINX", 2, a, b, 0, 0, 0, 0);
}

#define typedef_CAVM_MCSX_PEX_RX_SLAVE_RULE_DA_RANGE_MINX(a,b) cavm_mcsx_pex_rx_slave_rule_da_range_minx_t
#define bustype_CAVM_MCSX_PEX_RX_SLAVE_RULE_DA_RANGE_MINX(a,b) CSR_TYPE_RSL
#define basename_CAVM_MCSX_PEX_RX_SLAVE_RULE_DA_RANGE_MINX(a,b) "MCSX_PEX_RX_SLAVE_RULE_DA_RANGE_MINX"
#define device_bar_CAVM_MCSX_PEX_RX_SLAVE_RULE_DA_RANGE_MINX(a,b) 0x0 /* PF_BAR0 */
#define busnum_CAVM_MCSX_PEX_RX_SLAVE_RULE_DA_RANGE_MINX(a,b) (a)
#define arguments_CAVM_MCSX_PEX_RX_SLAVE_RULE_DA_RANGE_MINX(a,b) (a),(b),-1,-1

/**
 * Register (RSL) mcs#_pex_rx_slave_rule_enable
 *
 * MCS Pex Rx Slave Rule Enable Register
 * Enable bits for rule based control packet matching
 */
union cavm_mcsx_pex_rx_slave_rule_enable
{
    uint64_t u;
    struct cavm_mcsx_pex_rx_slave_rule_enable_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_25_63        : 39;
        uint64_t rule_mac_en           : 1;  /**< [ 24: 24](R/W) Enable MAC addresses for control packet matching */
        uint64_t rule_combo_en         : 4;  /**< [ 23: 20](R/W) Enable combos for control packet matching */
        uint64_t rule_range_en         : 4;  /**< [ 19: 16](R/W) Enable DA range for control packet matching */
        uint64_t rule_ad_en            : 8;  /**< [ 15:  8](R/W) Enable DAs for control packet matching */
        uint64_t rule_etyp_en          : 8;  /**< [  7:  0](R/W) Enable EthTypes for control packet matching */
#else /* Word 0 - Little Endian */
        uint64_t rule_etyp_en          : 8;  /**< [  7:  0](R/W) Enable EthTypes for control packet matching */
        uint64_t rule_ad_en            : 8;  /**< [ 15:  8](R/W) Enable DAs for control packet matching */
        uint64_t rule_range_en         : 4;  /**< [ 19: 16](R/W) Enable DA range for control packet matching */
        uint64_t rule_combo_en         : 4;  /**< [ 23: 20](R/W) Enable combos for control packet matching */
        uint64_t rule_mac_en           : 1;  /**< [ 24: 24](R/W) Enable MAC addresses for control packet matching */
        uint64_t reserved_25_63        : 39;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_mcsx_pex_rx_slave_rule_enable_s cn; */
};
typedef union cavm_mcsx_pex_rx_slave_rule_enable cavm_mcsx_pex_rx_slave_rule_enable_t;

static inline uint64_t CAVM_MCSX_PEX_RX_SLAVE_RULE_ENABLE(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_MCSX_PEX_RX_SLAVE_RULE_ENABLE(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CNF10KB) && (a<=6))
        return 0x87e0800006e0ll + 0x1000000ll * ((a) & 0x7);
    __cavm_csr_fatal("MCSX_PEX_RX_SLAVE_RULE_ENABLE", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_MCSX_PEX_RX_SLAVE_RULE_ENABLE(a) cavm_mcsx_pex_rx_slave_rule_enable_t
#define bustype_CAVM_MCSX_PEX_RX_SLAVE_RULE_ENABLE(a) CSR_TYPE_RSL
#define basename_CAVM_MCSX_PEX_RX_SLAVE_RULE_ENABLE(a) "MCSX_PEX_RX_SLAVE_RULE_ENABLE"
#define device_bar_CAVM_MCSX_PEX_RX_SLAVE_RULE_ENABLE(a) 0x0 /* PF_BAR0 */
#define busnum_CAVM_MCSX_PEX_RX_SLAVE_RULE_ENABLE(a) (a)
#define arguments_CAVM_MCSX_PEX_RX_SLAVE_RULE_ENABLE(a) (a),-1,-1,-1

/**
 * Register (RSL) mcs#_pex_rx_slave_rule_etype_cfg#
 *
 * MCS Pex Rx Slave Rule Etype Cfg Register
 * EthType for control packet matching
 */
union cavm_mcsx_pex_rx_slave_rule_etype_cfgx
{
    uint64_t u;
    struct cavm_mcsx_pex_rx_slave_rule_etype_cfgx_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_16_63        : 48;
        uint64_t rule_etype            : 16; /**< [ 15:  0](R/W) EthType for control packet matching */
#else /* Word 0 - Little Endian */
        uint64_t rule_etype            : 16; /**< [ 15:  0](R/W) EthType for control packet matching */
        uint64_t reserved_16_63        : 48;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_mcsx_pex_rx_slave_rule_etype_cfgx_s cn; */
};
typedef union cavm_mcsx_pex_rx_slave_rule_etype_cfgx cavm_mcsx_pex_rx_slave_rule_etype_cfgx_t;

static inline uint64_t CAVM_MCSX_PEX_RX_SLAVE_RULE_ETYPE_CFGX(uint64_t a, uint64_t b) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_MCSX_PEX_RX_SLAVE_RULE_ETYPE_CFGX(uint64_t a, uint64_t b)
{
    if (cavm_is_model(OCTEONTX_CNF10KB) && ((a<=6) && (b<=7)))
        return 0x87e080000558ll + 0x1000000ll * ((a) & 0x7) + 8ll * ((b) & 0x7);
    __cavm_csr_fatal("MCSX_PEX_RX_SLAVE_RULE_ETYPE_CFGX", 2, a, b, 0, 0, 0, 0);
}

#define typedef_CAVM_MCSX_PEX_RX_SLAVE_RULE_ETYPE_CFGX(a,b) cavm_mcsx_pex_rx_slave_rule_etype_cfgx_t
#define bustype_CAVM_MCSX_PEX_RX_SLAVE_RULE_ETYPE_CFGX(a,b) CSR_TYPE_RSL
#define basename_CAVM_MCSX_PEX_RX_SLAVE_RULE_ETYPE_CFGX(a,b) "MCSX_PEX_RX_SLAVE_RULE_ETYPE_CFGX"
#define device_bar_CAVM_MCSX_PEX_RX_SLAVE_RULE_ETYPE_CFGX(a,b) 0x0 /* PF_BAR0 */
#define busnum_CAVM_MCSX_PEX_RX_SLAVE_RULE_ETYPE_CFGX(a,b) (a)
#define arguments_CAVM_MCSX_PEX_RX_SLAVE_RULE_ETYPE_CFGX(a,b) (a),(b),-1,-1

/**
 * Register (RSL) mcs#_pex_rx_slave_rule_mac
 *
 * MCS Pex Rx Slave Rule Mac Register
 * MAC address for MAC-specific protocol matching
 */
union cavm_mcsx_pex_rx_slave_rule_mac
{
    uint64_t u;
    struct cavm_mcsx_pex_rx_slave_rule_mac_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_44_63        : 20;
        uint64_t rule_mac_msb          : 12; /**< [ 43: 32](R/W) MSB of MAC address */
        uint64_t rule_mac_lsb          : 32; /**< [ 31:  0](R/W) LSB of MAC address */
#else /* Word 0 - Little Endian */
        uint64_t rule_mac_lsb          : 32; /**< [ 31:  0](R/W) LSB of MAC address */
        uint64_t rule_mac_msb          : 12; /**< [ 43: 32](R/W) MSB of MAC address */
        uint64_t reserved_44_63        : 20;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_mcsx_pex_rx_slave_rule_mac_s cn; */
};
typedef union cavm_mcsx_pex_rx_slave_rule_mac cavm_mcsx_pex_rx_slave_rule_mac_t;

static inline uint64_t CAVM_MCSX_PEX_RX_SLAVE_RULE_MAC(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_MCSX_PEX_RX_SLAVE_RULE_MAC(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CNF10KB) && (a<=6))
        return 0x87e0800006d8ll + 0x1000000ll * ((a) & 0x7);
    __cavm_csr_fatal("MCSX_PEX_RX_SLAVE_RULE_MAC", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_MCSX_PEX_RX_SLAVE_RULE_MAC(a) cavm_mcsx_pex_rx_slave_rule_mac_t
#define bustype_CAVM_MCSX_PEX_RX_SLAVE_RULE_MAC(a) CSR_TYPE_RSL
#define basename_CAVM_MCSX_PEX_RX_SLAVE_RULE_MAC(a) "MCSX_PEX_RX_SLAVE_RULE_MAC"
#define device_bar_CAVM_MCSX_PEX_RX_SLAVE_RULE_MAC(a) 0x0 /* PF_BAR0 */
#define busnum_CAVM_MCSX_PEX_RX_SLAVE_RULE_MAC(a) (a)
#define arguments_CAVM_MCSX_PEX_RX_SLAVE_RULE_MAC(a) (a),-1,-1,-1

/**
 * Register (RSL) mcs#_pex_rx_slave_sectag_cfg
 *
 * MCS Pex Rx Slave Sectag Cfg Register
 * Configuration for SecTAG tags
 */
union cavm_mcsx_pex_rx_slave_sectag_cfg
{
    uint64_t u;
    struct cavm_mcsx_pex_rx_slave_sectag_cfg_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_16_63        : 48;
        uint64_t sectag_etype          : 16; /**< [ 15:  0](R/W) SecTAG EthType */
#else /* Word 0 - Little Endian */
        uint64_t sectag_etype          : 16; /**< [ 15:  0](R/W) SecTAG EthType */
        uint64_t reserved_16_63        : 48;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_mcsx_pex_rx_slave_sectag_cfg_s cn; */
};
typedef union cavm_mcsx_pex_rx_slave_sectag_cfg cavm_mcsx_pex_rx_slave_sectag_cfg_t;

static inline uint64_t CAVM_MCSX_PEX_RX_SLAVE_SECTAG_CFG(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_MCSX_PEX_RX_SLAVE_SECTAG_CFG(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CNF10KB) && (a<=6))
        return 0x87e080000548ll + 0x1000000ll * ((a) & 0x7);
    __cavm_csr_fatal("MCSX_PEX_RX_SLAVE_SECTAG_CFG", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_MCSX_PEX_RX_SLAVE_SECTAG_CFG(a) cavm_mcsx_pex_rx_slave_sectag_cfg_t
#define bustype_CAVM_MCSX_PEX_RX_SLAVE_SECTAG_CFG(a) CSR_TYPE_RSL
#define basename_CAVM_MCSX_PEX_RX_SLAVE_SECTAG_CFG(a) "MCSX_PEX_RX_SLAVE_SECTAG_CFG"
#define device_bar_CAVM_MCSX_PEX_RX_SLAVE_SECTAG_CFG(a) 0x0 /* PF_BAR0 */
#define busnum_CAVM_MCSX_PEX_RX_SLAVE_SECTAG_CFG(a) (a)
#define arguments_CAVM_MCSX_PEX_RX_SLAVE_SECTAG_CFG(a) (a),-1,-1,-1

/**
 * Register (RSL) mcs#_pex_tx_slave_custom_tag#
 *
 * MCS Pex Tx Slave Custom Tag Register
 * Custom tag configuration
 */
union cavm_mcsx_pex_tx_slave_custom_tagx
{
    uint64_t u;
    struct cavm_mcsx_pex_tx_slave_custom_tagx_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_25_63        : 39;
        uint64_t cstm_indx             : 3;  /**< [ 24: 22](R/W) Custom tag index used to identify the VLAN etype when match is found (used to
                                                                 generate pex_cpm.outer_vlan_type and pex_cpm.inner_vlan_type). */
        uint64_t reserved_21           : 1;
        uint64_t cstm_vlan             : 1;  /**< [ 20: 20](R/W) Must be set to 1 */
        uint64_t reserved_16_19        : 4;
        uint64_t cstm_etype            : 16; /**< [ 15:  0](R/W) EthType/TPID; typical TPID for C-Tag is 0x8100, and S-Tag is 0x88a8. */
#else /* Word 0 - Little Endian */
        uint64_t cstm_etype            : 16; /**< [ 15:  0](R/W) EthType/TPID; typical TPID for C-Tag is 0x8100, and S-Tag is 0x88a8. */
        uint64_t reserved_16_19        : 4;
        uint64_t cstm_vlan             : 1;  /**< [ 20: 20](R/W) Must be set to 1 */
        uint64_t reserved_21           : 1;
        uint64_t cstm_indx             : 3;  /**< [ 24: 22](R/W) Custom tag index used to identify the VLAN etype when match is found (used to
                                                                 generate pex_cpm.outer_vlan_type and pex_cpm.inner_vlan_type). */
        uint64_t reserved_25_63        : 39;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_mcsx_pex_tx_slave_custom_tagx_s cn; */
};
typedef union cavm_mcsx_pex_tx_slave_custom_tagx cavm_mcsx_pex_tx_slave_custom_tagx_t;

static inline uint64_t CAVM_MCSX_PEX_TX_SLAVE_CUSTOM_TAGX(uint64_t a, uint64_t b) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_MCSX_PEX_TX_SLAVE_CUSTOM_TAGX(uint64_t a, uint64_t b)
{
    if (cavm_is_model(OCTEONTX_CNF10KB) && ((a<=6) && (b<=7)))
        return 0x87e080000748ll + 0x1000000ll * ((a) & 0x7) + 8ll * ((b) & 0x7);
    __cavm_csr_fatal("MCSX_PEX_TX_SLAVE_CUSTOM_TAGX", 2, a, b, 0, 0, 0, 0);
}

#define typedef_CAVM_MCSX_PEX_TX_SLAVE_CUSTOM_TAGX(a,b) cavm_mcsx_pex_tx_slave_custom_tagx_t
#define bustype_CAVM_MCSX_PEX_TX_SLAVE_CUSTOM_TAGX(a,b) CSR_TYPE_RSL
#define basename_CAVM_MCSX_PEX_TX_SLAVE_CUSTOM_TAGX(a,b) "MCSX_PEX_TX_SLAVE_CUSTOM_TAGX"
#define device_bar_CAVM_MCSX_PEX_TX_SLAVE_CUSTOM_TAGX(a,b) 0x0 /* PF_BAR0 */
#define busnum_CAVM_MCSX_PEX_TX_SLAVE_CUSTOM_TAGX(a,b) (a)
#define arguments_CAVM_MCSX_PEX_TX_SLAVE_CUSTOM_TAGX(a,b) (a),(b),-1,-1

/**
 * Register (RSL) mcs#_pex_tx_slave_custom_tag_rel_mode_sel#
 *
 * MCS Pex Tx Slave Custom Tag Rel Mode Sel Register
 * VLAN/Custom tag selection per port for relative SecTAG insertion mode (applicable to egress only).
 */
union cavm_mcsx_pex_tx_slave_custom_tag_rel_mode_selx
{
    uint64_t u;
    struct cavm_mcsx_pex_tx_slave_custom_tag_rel_mode_selx_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_3_63         : 61;
        uint64_t cstm_sel              : 3;  /**< [  2:  0](R/W) Selection for the custom tag to be used for SecTAG offset calculation in
                                                                 relative insertion mode.  Value 0 to 7 selects the corresponding instance of the
                                                                 custom_tag registers which defines the tag. */
#else /* Word 0 - Little Endian */
        uint64_t cstm_sel              : 3;  /**< [  2:  0](R/W) Selection for the custom tag to be used for SecTAG offset calculation in
                                                                 relative insertion mode.  Value 0 to 7 selects the corresponding instance of the
                                                                 custom_tag registers which defines the tag. */
        uint64_t reserved_3_63         : 61;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_mcsx_pex_tx_slave_custom_tag_rel_mode_selx_s cn; */
};
typedef union cavm_mcsx_pex_tx_slave_custom_tag_rel_mode_selx cavm_mcsx_pex_tx_slave_custom_tag_rel_mode_selx_t;

static inline uint64_t CAVM_MCSX_PEX_TX_SLAVE_CUSTOM_TAG_REL_MODE_SELX(uint64_t a, uint64_t b) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_MCSX_PEX_TX_SLAVE_CUSTOM_TAG_REL_MODE_SELX(uint64_t a, uint64_t b)
{
    if (cavm_is_model(OCTEONTX_CNF10KB) && ((a<=6) && (b<=3)))
        return 0x87e080000788ll + 0x1000000ll * ((a) & 0x7) + 8ll * ((b) & 0x3);
    __cavm_csr_fatal("MCSX_PEX_TX_SLAVE_CUSTOM_TAG_REL_MODE_SELX", 2, a, b, 0, 0, 0, 0);
}

#define typedef_CAVM_MCSX_PEX_TX_SLAVE_CUSTOM_TAG_REL_MODE_SELX(a,b) cavm_mcsx_pex_tx_slave_custom_tag_rel_mode_selx_t
#define bustype_CAVM_MCSX_PEX_TX_SLAVE_CUSTOM_TAG_REL_MODE_SELX(a,b) CSR_TYPE_RSL
#define basename_CAVM_MCSX_PEX_TX_SLAVE_CUSTOM_TAG_REL_MODE_SELX(a,b) "MCSX_PEX_TX_SLAVE_CUSTOM_TAG_REL_MODE_SELX"
#define device_bar_CAVM_MCSX_PEX_TX_SLAVE_CUSTOM_TAG_REL_MODE_SELX(a,b) 0x0 /* PF_BAR0 */
#define busnum_CAVM_MCSX_PEX_TX_SLAVE_CUSTOM_TAG_REL_MODE_SELX(a,b) (a)
#define arguments_CAVM_MCSX_PEX_TX_SLAVE_CUSTOM_TAG_REL_MODE_SELX(a,b) (a),(b),-1,-1

/**
 * Register (RSL) mcs#_pex_tx_slave_dbg_mux_sel
 *
 * MCS Pex Tx Slave Dbg Mux Sel Register
 * Per segment mux control for the debug_mux.  Configuration of this register will
 * affect which debug set is output on the corresponding debug mux logic for the PEX.
 */
union cavm_mcsx_pex_tx_slave_dbg_mux_sel
{
    uint64_t u;
    struct cavm_mcsx_pex_tx_slave_dbg_mux_sel_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_31_63        : 33;
        uint64_t seg3                  : 7;  /**< [ 30: 24](R/W) Select which debug set is output on the segment3 of the debug mux for the PEX.
                                                                 Note that a higher level dbg_mux_sel also exists to select which block's debug
                                                                 sets are to be output of the IP */
        uint64_t reserved_23           : 1;
        uint64_t seg2                  : 7;  /**< [ 22: 16](R/W) Select which debug set is output on the segment2 of the debug mux for the PEX.
                                                                 Note that a higher level dbg_mux_sel also exists to select which block's debug
                                                                 sets are to be output of the IP */
        uint64_t reserved_15           : 1;
        uint64_t seg1                  : 7;  /**< [ 14:  8](R/W) Select which debug set is output on the segment1 of the debug mux for the PEX.
                                                                 Note that a higher level dbg_mux_sel also exists to select which block's debug
                                                                 sets are to be output of the IP */
        uint64_t reserved_7            : 1;
        uint64_t seg0                  : 7;  /**< [  6:  0](R/W) Select which debug set is output on the segment0 of the debug mux for the PEX.
                                                                 Note that a higher level dbg_mux_sel also exists to select which block's debug
                                                                 sets are to be output of the IP */
#else /* Word 0 - Little Endian */
        uint64_t seg0                  : 7;  /**< [  6:  0](R/W) Select which debug set is output on the segment0 of the debug mux for the PEX.
                                                                 Note that a higher level dbg_mux_sel also exists to select which block's debug
                                                                 sets are to be output of the IP */
        uint64_t reserved_7            : 1;
        uint64_t seg1                  : 7;  /**< [ 14:  8](R/W) Select which debug set is output on the segment1 of the debug mux for the PEX.
                                                                 Note that a higher level dbg_mux_sel also exists to select which block's debug
                                                                 sets are to be output of the IP */
        uint64_t reserved_15           : 1;
        uint64_t seg2                  : 7;  /**< [ 22: 16](R/W) Select which debug set is output on the segment2 of the debug mux for the PEX.
                                                                 Note that a higher level dbg_mux_sel also exists to select which block's debug
                                                                 sets are to be output of the IP */
        uint64_t reserved_23           : 1;
        uint64_t seg3                  : 7;  /**< [ 30: 24](R/W) Select which debug set is output on the segment3 of the debug mux for the PEX.
                                                                 Note that a higher level dbg_mux_sel also exists to select which block's debug
                                                                 sets are to be output of the IP */
        uint64_t reserved_31_63        : 33;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_mcsx_pex_tx_slave_dbg_mux_sel_s cn; */
};
typedef union cavm_mcsx_pex_tx_slave_dbg_mux_sel cavm_mcsx_pex_tx_slave_dbg_mux_sel_t;

static inline uint64_t CAVM_MCSX_PEX_TX_SLAVE_DBG_MUX_SEL(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_MCSX_PEX_TX_SLAVE_DBG_MUX_SEL(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CNF10KB) && (a<=6))
        return 0x87e080000990ll + 0x1000000ll * ((a) & 0x7);
    __cavm_csr_fatal("MCSX_PEX_TX_SLAVE_DBG_MUX_SEL", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_MCSX_PEX_TX_SLAVE_DBG_MUX_SEL(a) cavm_mcsx_pex_tx_slave_dbg_mux_sel_t
#define bustype_CAVM_MCSX_PEX_TX_SLAVE_DBG_MUX_SEL(a) CSR_TYPE_RSL
#define basename_CAVM_MCSX_PEX_TX_SLAVE_DBG_MUX_SEL(a) "MCSX_PEX_TX_SLAVE_DBG_MUX_SEL"
#define device_bar_CAVM_MCSX_PEX_TX_SLAVE_DBG_MUX_SEL(a) 0x0 /* PF_BAR0 */
#define busnum_CAVM_MCSX_PEX_TX_SLAVE_DBG_MUX_SEL(a) (a)
#define arguments_CAVM_MCSX_PEX_TX_SLAVE_DBG_MUX_SEL(a) (a),-1,-1,-1

/**
 * Register (RSL) mcs#_pex_tx_slave_debug_status
 *
 * MCS Pex Tx Slave Debug Status Register
 * Debug status register:  Captures the debug set selected by dbg_mux_sel.
 */
union cavm_mcsx_pex_tx_slave_debug_status
{
    uint64_t u;
    struct cavm_mcsx_pex_tx_slave_debug_status_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t seg3                  : 16; /**< [ 63: 48](RO) Debug set status for segment3. */
        uint64_t seg2                  : 16; /**< [ 47: 32](RO) Debug set status for segment2. */
        uint64_t seg1                  : 16; /**< [ 31: 16](RO) Debug set status for segment1. */
        uint64_t seg0                  : 16; /**< [ 15:  0](RO) Debug set status for segment0. */
#else /* Word 0 - Little Endian */
        uint64_t seg0                  : 16; /**< [ 15:  0](RO) Debug set status for segment0. */
        uint64_t seg1                  : 16; /**< [ 31: 16](RO) Debug set status for segment1. */
        uint64_t seg2                  : 16; /**< [ 47: 32](RO) Debug set status for segment2. */
        uint64_t seg3                  : 16; /**< [ 63: 48](RO) Debug set status for segment3. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_mcsx_pex_tx_slave_debug_status_s cn; */
};
typedef union cavm_mcsx_pex_tx_slave_debug_status cavm_mcsx_pex_tx_slave_debug_status_t;

static inline uint64_t CAVM_MCSX_PEX_TX_SLAVE_DEBUG_STATUS(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_MCSX_PEX_TX_SLAVE_DEBUG_STATUS(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CNF10KB) && (a<=6))
        return 0x87e080000998ll + 0x1000000ll * ((a) & 0x7);
    __cavm_csr_fatal("MCSX_PEX_TX_SLAVE_DEBUG_STATUS", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_MCSX_PEX_TX_SLAVE_DEBUG_STATUS(a) cavm_mcsx_pex_tx_slave_debug_status_t
#define bustype_CAVM_MCSX_PEX_TX_SLAVE_DEBUG_STATUS(a) CSR_TYPE_RSL
#define basename_CAVM_MCSX_PEX_TX_SLAVE_DEBUG_STATUS(a) "MCSX_PEX_TX_SLAVE_DEBUG_STATUS"
#define device_bar_CAVM_MCSX_PEX_TX_SLAVE_DEBUG_STATUS(a) 0x0 /* PF_BAR0 */
#define busnum_CAVM_MCSX_PEX_TX_SLAVE_DEBUG_STATUS(a) (a)
#define arguments_CAVM_MCSX_PEX_TX_SLAVE_DEBUG_STATUS(a) (a),-1,-1,-1

/**
 * Register (RSL) mcs#_pex_tx_slave_etype_enable
 *
 * MCS Pex Tx Slave Etype Enable Register
 * Enable bits for etypes for parsing purpose
 */
union cavm_mcsx_pex_tx_slave_etype_enable
{
    uint64_t u;
    struct cavm_mcsx_pex_tx_slave_etype_enable_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_15_63        : 49;
        uint64_t txmcs_etype_en        : 1;  /**< [ 14: 14](R/W) Reserved.
                                                                 Internal:
                                                                 Enable EthType stored in the field tx_mcs_header in the opt_header_cfg register.
                                                                 Set to 1 to enable the EthTypes, or 0 to disable. */
        uint64_t rxmcs_etype_en        : 1;  /**< [ 13: 13](R/W) Reserved.
                                                                 Internal:
                                                                 Enable EthType stored in the field rx_mcs_header in the opt_header_cfg register.
                                                                 Set to 1 to enable the EthType, or 0 to disable. */
        uint64_t st_etype_en           : 1;  /**< [ 12: 12](R/W) Enable EthType stored in the sectag_cfg registers.  Set to 1 to enable the
                                                                 EthType, or 0 to disable. */
        uint64_t reserved_8_11         : 4;
        uint64_t cstm_etype_en         : 8;  /**< [  7:  0](R/W) Enable EthTypes/TPID stored in the 8 VLAN tags registers, where bit 0-7 enable
                                                                 registers 0-7 respectively.  Set to 1 to enable the EthTypes, or 0 to disable. */
#else /* Word 0 - Little Endian */
        uint64_t cstm_etype_en         : 8;  /**< [  7:  0](R/W) Enable EthTypes/TPID stored in the 8 VLAN tags registers, where bit 0-7 enable
                                                                 registers 0-7 respectively.  Set to 1 to enable the EthTypes, or 0 to disable. */
        uint64_t reserved_8_11         : 4;
        uint64_t st_etype_en           : 1;  /**< [ 12: 12](R/W) Enable EthType stored in the sectag_cfg registers.  Set to 1 to enable the
                                                                 EthType, or 0 to disable. */
        uint64_t rxmcs_etype_en        : 1;  /**< [ 13: 13](R/W) Reserved.
                                                                 Internal:
                                                                 Enable EthType stored in the field rx_mcs_header in the opt_header_cfg register.
                                                                 Set to 1 to enable the EthType, or 0 to disable. */
        uint64_t txmcs_etype_en        : 1;  /**< [ 14: 14](R/W) Reserved.
                                                                 Internal:
                                                                 Enable EthType stored in the field tx_mcs_header in the opt_header_cfg register.
                                                                 Set to 1 to enable the EthTypes, or 0 to disable. */
        uint64_t reserved_15_63        : 49;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_mcsx_pex_tx_slave_etype_enable_s cn; */
};
typedef union cavm_mcsx_pex_tx_slave_etype_enable cavm_mcsx_pex_tx_slave_etype_enable_t;

static inline uint64_t CAVM_MCSX_PEX_TX_SLAVE_ETYPE_ENABLE(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_MCSX_PEX_TX_SLAVE_ETYPE_ENABLE(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CNF10KB) && (a<=6))
        return 0x87e080000968ll + 0x1000000ll * ((a) & 0x7);
    __cavm_csr_fatal("MCSX_PEX_TX_SLAVE_ETYPE_ENABLE", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_MCSX_PEX_TX_SLAVE_ETYPE_ENABLE(a) cavm_mcsx_pex_tx_slave_etype_enable_t
#define bustype_CAVM_MCSX_PEX_TX_SLAVE_ETYPE_ENABLE(a) CSR_TYPE_RSL
#define basename_CAVM_MCSX_PEX_TX_SLAVE_ETYPE_ENABLE(a) "MCSX_PEX_TX_SLAVE_ETYPE_ENABLE"
#define device_bar_CAVM_MCSX_PEX_TX_SLAVE_ETYPE_ENABLE(a) 0x0 /* PF_BAR0 */
#define busnum_CAVM_MCSX_PEX_TX_SLAVE_ETYPE_ENABLE(a) (a)
#define arguments_CAVM_MCSX_PEX_TX_SLAVE_ETYPE_ENABLE(a) (a),-1,-1,-1

/**
 * Register (RSL) mcs#_pex_tx_slave_opt_header_cfg_rsvd
 *
 * INTERNAL: MCS Pex Tx Slave Opt Header Cfg Register
 *
 * E-Type/TPID configuration for optional Rx-MCS and Tx-MCS headers tags
 */
union cavm_mcsx_pex_tx_slave_opt_header_cfg_rsvd
{
    uint64_t u;
    struct cavm_mcsx_pex_tx_slave_opt_header_cfg_rsvd_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_32_63        : 32;
        uint64_t tx_mcs_header         : 16; /**< [ 31: 16](R/W) Reserved. */
        uint64_t rx_mcs_header         : 16; /**< [ 15:  0](R/W) Reserved. */
#else /* Word 0 - Little Endian */
        uint64_t rx_mcs_header         : 16; /**< [ 15:  0](R/W) Reserved. */
        uint64_t tx_mcs_header         : 16; /**< [ 31: 16](R/W) Reserved. */
        uint64_t reserved_32_63        : 32;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_mcsx_pex_tx_slave_opt_header_cfg_rsvd_s cn; */
};
typedef union cavm_mcsx_pex_tx_slave_opt_header_cfg_rsvd cavm_mcsx_pex_tx_slave_opt_header_cfg_rsvd_t;

static inline uint64_t CAVM_MCSX_PEX_TX_SLAVE_OPT_HEADER_CFG_RSVD(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_MCSX_PEX_TX_SLAVE_OPT_HEADER_CFG_RSVD(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CNF10KB) && (a<=6))
        return 0x87e0800007d0ll + 0x1000000ll * ((a) & 0x7);
    __cavm_csr_fatal("MCSX_PEX_TX_SLAVE_OPT_HEADER_CFG_RSVD", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_MCSX_PEX_TX_SLAVE_OPT_HEADER_CFG_RSVD(a) cavm_mcsx_pex_tx_slave_opt_header_cfg_rsvd_t
#define bustype_CAVM_MCSX_PEX_TX_SLAVE_OPT_HEADER_CFG_RSVD(a) CSR_TYPE_RSL
#define basename_CAVM_MCSX_PEX_TX_SLAVE_OPT_HEADER_CFG_RSVD(a) "MCSX_PEX_TX_SLAVE_OPT_HEADER_CFG_RSVD"
#define device_bar_CAVM_MCSX_PEX_TX_SLAVE_OPT_HEADER_CFG_RSVD(a) 0x0 /* PF_BAR0 */
#define busnum_CAVM_MCSX_PEX_TX_SLAVE_OPT_HEADER_CFG_RSVD(a) (a)
#define arguments_CAVM_MCSX_PEX_TX_SLAVE_OPT_HEADER_CFG_RSVD(a) (a),-1,-1,-1

/**
 * Register (RSL) mcs#_pex_tx_slave_pex_configuration
 *
 * MCS Pex Tx Slave Pex Configuration Register
 * Packet parser and extractor configuration
 */
union cavm_mcsx_pex_tx_slave_pex_configuration
{
    uint64_t u;
    struct cavm_mcsx_pex_tx_slave_pex_configuration_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_6_63         : 58;
        uint64_t non_dix_err           : 1;  /**< [  5:  5](R/W) Set to 1 to trigger a parse error when non-DIX frames are received */
        uint64_t reserved_4            : 1;
        uint64_t custom_header         : 4;  /**< [  3:  0](R/W) Reserved.
                                                                 Internal:
                                                                 Per-port custom header enable. Port number 'i' packets are expected to have 8B
                                                                 custom header before DA/SA if bit 'i' is set. */
#else /* Word 0 - Little Endian */
        uint64_t custom_header         : 4;  /**< [  3:  0](R/W) Reserved.
                                                                 Internal:
                                                                 Per-port custom header enable. Port number 'i' packets are expected to have 8B
                                                                 custom header before DA/SA if bit 'i' is set. */
        uint64_t reserved_4            : 1;
        uint64_t non_dix_err           : 1;  /**< [  5:  5](R/W) Set to 1 to trigger a parse error when non-DIX frames are received */
        uint64_t reserved_6_63         : 58;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_mcsx_pex_tx_slave_pex_configuration_s cn; */
};
typedef union cavm_mcsx_pex_tx_slave_pex_configuration cavm_mcsx_pex_tx_slave_pex_configuration_t;

static inline uint64_t CAVM_MCSX_PEX_TX_SLAVE_PEX_CONFIGURATION(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_MCSX_PEX_TX_SLAVE_PEX_CONFIGURATION(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CNF10KB) && (a<=6))
        return 0x87e080000740ll + 0x1000000ll * ((a) & 0x7);
    __cavm_csr_fatal("MCSX_PEX_TX_SLAVE_PEX_CONFIGURATION", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_MCSX_PEX_TX_SLAVE_PEX_CONFIGURATION(a) cavm_mcsx_pex_tx_slave_pex_configuration_t
#define bustype_CAVM_MCSX_PEX_TX_SLAVE_PEX_CONFIGURATION(a) CSR_TYPE_RSL
#define basename_CAVM_MCSX_PEX_TX_SLAVE_PEX_CONFIGURATION(a) "MCSX_PEX_TX_SLAVE_PEX_CONFIGURATION"
#define device_bar_CAVM_MCSX_PEX_TX_SLAVE_PEX_CONFIGURATION(a) 0x0 /* PF_BAR0 */
#define busnum_CAVM_MCSX_PEX_TX_SLAVE_PEX_CONFIGURATION(a) (a)
#define arguments_CAVM_MCSX_PEX_TX_SLAVE_PEX_CONFIGURATION(a) (a),-1,-1,-1

/**
 * Register (RSL) mcs#_pex_tx_slave_reserved0#_rsvd
 *
 * INTERNAL: MCS Pex Tx Slave Reserved0 Register
 *
 * This register is reserved.
 */
union cavm_mcsx_pex_tx_slave_reserved0x_rsvd
{
    uint64_t u;
    struct cavm_mcsx_pex_tx_slave_reserved0x_rsvd_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_0_63         : 64;
#else /* Word 0 - Little Endian */
        uint64_t reserved_0_63         : 64;
#endif /* Word 0 - End */
    } s;
    struct cavm_mcsx_pex_tx_slave_reserved0x_rsvd_cn
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_1_63         : 63;
        uint64_t reserved_0            : 1;
#else /* Word 0 - Little Endian */
        uint64_t reserved_0            : 1;
        uint64_t reserved_1_63         : 63;
#endif /* Word 0 - End */
    } cn;
};
typedef union cavm_mcsx_pex_tx_slave_reserved0x_rsvd cavm_mcsx_pex_tx_slave_reserved0x_rsvd_t;

static inline uint64_t CAVM_MCSX_PEX_TX_SLAVE_RESERVED0X_RSVD(uint64_t a, uint64_t b) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_MCSX_PEX_TX_SLAVE_RESERVED0X_RSVD(uint64_t a, uint64_t b)
{
    if (cavm_is_model(OCTEONTX_CNF10KB) && ((a<=6) && (b<=3)))
        return 0x87e080000720ll + 0x1000000ll * ((a) & 0x7) + 8ll * ((b) & 0x3);
    __cavm_csr_fatal("MCSX_PEX_TX_SLAVE_RESERVED0X_RSVD", 2, a, b, 0, 0, 0, 0);
}

#define typedef_CAVM_MCSX_PEX_TX_SLAVE_RESERVED0X_RSVD(a,b) cavm_mcsx_pex_tx_slave_reserved0x_rsvd_t
#define bustype_CAVM_MCSX_PEX_TX_SLAVE_RESERVED0X_RSVD(a,b) CSR_TYPE_RSL
#define basename_CAVM_MCSX_PEX_TX_SLAVE_RESERVED0X_RSVD(a,b) "MCSX_PEX_TX_SLAVE_RESERVED0X_RSVD"
#define device_bar_CAVM_MCSX_PEX_TX_SLAVE_RESERVED0X_RSVD(a,b) 0x0 /* PF_BAR0 */
#define busnum_CAVM_MCSX_PEX_TX_SLAVE_RESERVED0X_RSVD(a,b) (a)
#define arguments_CAVM_MCSX_PEX_TX_SLAVE_RESERVED0X_RSVD(a,b) (a),(b),-1,-1

/**
 * Register (RSL) mcs#_pex_tx_slave_reserved1#_rsvd
 *
 * INTERNAL: MCS Pex Tx Slave Reserved1 Register
 *
 * This register is reserved.
 */
union cavm_mcsx_pex_tx_slave_reserved1x_rsvd
{
    uint64_t u;
    struct cavm_mcsx_pex_tx_slave_reserved1x_rsvd_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_0_63         : 64;
#else /* Word 0 - Little Endian */
        uint64_t reserved_0_63         : 64;
#endif /* Word 0 - End */
    } s;
    struct cavm_mcsx_pex_tx_slave_reserved1x_rsvd_cn
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_1_63         : 63;
        uint64_t reserved_0            : 1;
#else /* Word 0 - Little Endian */
        uint64_t reserved_0            : 1;
        uint64_t reserved_1_63         : 63;
#endif /* Word 0 - End */
    } cn;
};
typedef union cavm_mcsx_pex_tx_slave_reserved1x_rsvd cavm_mcsx_pex_tx_slave_reserved1x_rsvd_t;

static inline uint64_t CAVM_MCSX_PEX_TX_SLAVE_RESERVED1X_RSVD(uint64_t a, uint64_t b) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_MCSX_PEX_TX_SLAVE_RESERVED1X_RSVD(uint64_t a, uint64_t b)
{
    if (cavm_is_model(OCTEONTX_CNF10KB) && ((a<=6) && (b<=3)))
        return 0x87e080000970ll + 0x1000000ll * ((a) & 0x7) + 8ll * ((b) & 0x3);
    __cavm_csr_fatal("MCSX_PEX_TX_SLAVE_RESERVED1X_RSVD", 2, a, b, 0, 0, 0, 0);
}

#define typedef_CAVM_MCSX_PEX_TX_SLAVE_RESERVED1X_RSVD(a,b) cavm_mcsx_pex_tx_slave_reserved1x_rsvd_t
#define bustype_CAVM_MCSX_PEX_TX_SLAVE_RESERVED1X_RSVD(a,b) CSR_TYPE_RSL
#define basename_CAVM_MCSX_PEX_TX_SLAVE_RESERVED1X_RSVD(a,b) "MCSX_PEX_TX_SLAVE_RESERVED1X_RSVD"
#define device_bar_CAVM_MCSX_PEX_TX_SLAVE_RESERVED1X_RSVD(a,b) 0x0 /* PF_BAR0 */
#define busnum_CAVM_MCSX_PEX_TX_SLAVE_RESERVED1X_RSVD(a,b) (a)
#define arguments_CAVM_MCSX_PEX_TX_SLAVE_RESERVED1X_RSVD(a,b) (a),(b),-1,-1

/**
 * Register (RSL) mcs#_pex_tx_slave_reserved_0#_rsvd
 *
 * INTERNAL: MCS Pex Tx Slave Reserved 0 Register
 *
 * Reserved.
 */
union cavm_mcsx_pex_tx_slave_reserved_0x_rsvd
{
    uint64_t u;
    struct cavm_mcsx_pex_tx_slave_reserved_0x_rsvd_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_0_63         : 64;
#else /* Word 0 - Little Endian */
        uint64_t reserved_0_63         : 64;
#endif /* Word 0 - End */
    } s;
    struct cavm_mcsx_pex_tx_slave_reserved_0x_rsvd_cn
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_16_63        : 48;
        uint64_t reserved_0_15         : 16;
#else /* Word 0 - Little Endian */
        uint64_t reserved_0_15         : 16;
        uint64_t reserved_16_63        : 48;
#endif /* Word 0 - End */
    } cn;
};
typedef union cavm_mcsx_pex_tx_slave_reserved_0x_rsvd cavm_mcsx_pex_tx_slave_reserved_0x_rsvd_t;

static inline uint64_t CAVM_MCSX_PEX_TX_SLAVE_RESERVED_0X_RSVD(uint64_t a, uint64_t b) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_MCSX_PEX_TX_SLAVE_RESERVED_0X_RSVD(uint64_t a, uint64_t b)
{
    if (cavm_is_model(OCTEONTX_CNF10KB) && ((a<=6) && (b<=3)))
        return 0x87e0800007a8ll + 0x1000000ll * ((a) & 0x7) + 8ll * ((b) & 0x3);
    __cavm_csr_fatal("MCSX_PEX_TX_SLAVE_RESERVED_0X_RSVD", 2, a, b, 0, 0, 0, 0);
}

#define typedef_CAVM_MCSX_PEX_TX_SLAVE_RESERVED_0X_RSVD(a,b) cavm_mcsx_pex_tx_slave_reserved_0x_rsvd_t
#define bustype_CAVM_MCSX_PEX_TX_SLAVE_RESERVED_0X_RSVD(a,b) CSR_TYPE_RSL
#define basename_CAVM_MCSX_PEX_TX_SLAVE_RESERVED_0X_RSVD(a,b) "MCSX_PEX_TX_SLAVE_RESERVED_0X_RSVD"
#define device_bar_CAVM_MCSX_PEX_TX_SLAVE_RESERVED_0X_RSVD(a,b) 0x0 /* PF_BAR0 */
#define busnum_CAVM_MCSX_PEX_TX_SLAVE_RESERVED_0X_RSVD(a,b) (a)
#define arguments_CAVM_MCSX_PEX_TX_SLAVE_RESERVED_0X_RSVD(a,b) (a),(b),-1,-1

/**
 * Register (RSL) mcs#_pex_tx_slave_rule_combo_et#
 *
 * MCS Pex Tx Slave Rule Combo Et Register
 * EthType for combo control packet matching
 */
union cavm_mcsx_pex_tx_slave_rule_combo_etx
{
    uint64_t u;
    struct cavm_mcsx_pex_tx_slave_rule_combo_etx_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_16_63        : 48;
        uint64_t rule_combo_et         : 16; /**< [ 15:  0](R/W) EthType for combo control packet matching */
#else /* Word 0 - Little Endian */
        uint64_t rule_combo_et         : 16; /**< [ 15:  0](R/W) EthType for combo control packet matching */
        uint64_t reserved_16_63        : 48;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_mcsx_pex_tx_slave_rule_combo_etx_s cn; */
};
typedef union cavm_mcsx_pex_tx_slave_rule_combo_etx cavm_mcsx_pex_tx_slave_rule_combo_etx_t;

static inline uint64_t CAVM_MCSX_PEX_TX_SLAVE_RULE_COMBO_ETX(uint64_t a, uint64_t b) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_MCSX_PEX_TX_SLAVE_RULE_COMBO_ETX(uint64_t a, uint64_t b)
{
    if (cavm_is_model(OCTEONTX_CNF10KB) && ((a<=6) && (b<=3)))
        return 0x87e0800008d8ll + 0x1000000ll * ((a) & 0x7) + 0x28ll * ((b) & 0x3);
    __cavm_csr_fatal("MCSX_PEX_TX_SLAVE_RULE_COMBO_ETX", 2, a, b, 0, 0, 0, 0);
}

#define typedef_CAVM_MCSX_PEX_TX_SLAVE_RULE_COMBO_ETX(a,b) cavm_mcsx_pex_tx_slave_rule_combo_etx_t
#define bustype_CAVM_MCSX_PEX_TX_SLAVE_RULE_COMBO_ETX(a,b) CSR_TYPE_RSL
#define basename_CAVM_MCSX_PEX_TX_SLAVE_RULE_COMBO_ETX(a,b) "MCSX_PEX_TX_SLAVE_RULE_COMBO_ETX"
#define device_bar_CAVM_MCSX_PEX_TX_SLAVE_RULE_COMBO_ETX(a,b) 0x0 /* PF_BAR0 */
#define busnum_CAVM_MCSX_PEX_TX_SLAVE_RULE_COMBO_ETX(a,b) (a)
#define arguments_CAVM_MCSX_PEX_TX_SLAVE_RULE_COMBO_ETX(a,b) (a),(b),-1,-1

/**
 * Register (RSL) mcs#_pex_tx_slave_rule_combo_max#
 *
 * MCS Pex Tx Slave Rule Combo Max Register
 * Maximum DA address for control packet matching
 */
union cavm_mcsx_pex_tx_slave_rule_combo_maxx
{
    uint64_t u;
    struct cavm_mcsx_pex_tx_slave_rule_combo_maxx_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t rule_combo_max_msb    : 32; /**< [ 63: 32](R/W) MSB of minimum DA address for control packet matching */
        uint64_t rule_combo_max_lsb    : 32; /**< [ 31:  0](R/W) LSB of maximum DA address for control packet matching */
#else /* Word 0 - Little Endian */
        uint64_t rule_combo_max_lsb    : 32; /**< [ 31:  0](R/W) LSB of maximum DA address for control packet matching */
        uint64_t rule_combo_max_msb    : 32; /**< [ 63: 32](R/W) MSB of minimum DA address for control packet matching */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_mcsx_pex_tx_slave_rule_combo_maxx_s cn; */
};
typedef union cavm_mcsx_pex_tx_slave_rule_combo_maxx cavm_mcsx_pex_tx_slave_rule_combo_maxx_t;

static inline uint64_t CAVM_MCSX_PEX_TX_SLAVE_RULE_COMBO_MAXX(uint64_t a, uint64_t b) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_MCSX_PEX_TX_SLAVE_RULE_COMBO_MAXX(uint64_t a, uint64_t b)
{
    if (cavm_is_model(OCTEONTX_CNF10KB) && ((a<=6) && (b<=3)))
        return 0x87e0800008d0ll + 0x1000000ll * ((a) & 0x7) + 0x28ll * ((b) & 0x3);
    __cavm_csr_fatal("MCSX_PEX_TX_SLAVE_RULE_COMBO_MAXX", 2, a, b, 0, 0, 0, 0);
}

#define typedef_CAVM_MCSX_PEX_TX_SLAVE_RULE_COMBO_MAXX(a,b) cavm_mcsx_pex_tx_slave_rule_combo_maxx_t
#define bustype_CAVM_MCSX_PEX_TX_SLAVE_RULE_COMBO_MAXX(a,b) CSR_TYPE_RSL
#define basename_CAVM_MCSX_PEX_TX_SLAVE_RULE_COMBO_MAXX(a,b) "MCSX_PEX_TX_SLAVE_RULE_COMBO_MAXX"
#define device_bar_CAVM_MCSX_PEX_TX_SLAVE_RULE_COMBO_MAXX(a,b) 0x0 /* PF_BAR0 */
#define busnum_CAVM_MCSX_PEX_TX_SLAVE_RULE_COMBO_MAXX(a,b) (a)
#define arguments_CAVM_MCSX_PEX_TX_SLAVE_RULE_COMBO_MAXX(a,b) (a),(b),-1,-1

/**
 * Register (RSL) mcs#_pex_tx_slave_rule_combo_min#
 *
 * MCS Pex Tx Slave Rule Combo Min Register
 * Minimum DA address for control packet matching
 */
union cavm_mcsx_pex_tx_slave_rule_combo_minx
{
    uint64_t u;
    struct cavm_mcsx_pex_tx_slave_rule_combo_minx_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t rule_combo_min_msb    : 32; /**< [ 63: 32](R/W) MSB of minimum DA address for control packet matching */
        uint64_t rule_combo_min_lsb    : 32; /**< [ 31:  0](R/W) LSB of minimum DA address for control packet matching */
#else /* Word 0 - Little Endian */
        uint64_t rule_combo_min_lsb    : 32; /**< [ 31:  0](R/W) LSB of minimum DA address for control packet matching */
        uint64_t rule_combo_min_msb    : 32; /**< [ 63: 32](R/W) MSB of minimum DA address for control packet matching */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_mcsx_pex_tx_slave_rule_combo_minx_s cn; */
};
typedef union cavm_mcsx_pex_tx_slave_rule_combo_minx cavm_mcsx_pex_tx_slave_rule_combo_minx_t;

static inline uint64_t CAVM_MCSX_PEX_TX_SLAVE_RULE_COMBO_MINX(uint64_t a, uint64_t b) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_MCSX_PEX_TX_SLAVE_RULE_COMBO_MINX(uint64_t a, uint64_t b)
{
    if (cavm_is_model(OCTEONTX_CNF10KB) && ((a<=6) && (b<=3)))
        return 0x87e0800008c8ll + 0x1000000ll * ((a) & 0x7) + 0x28ll * ((b) & 0x3);
    __cavm_csr_fatal("MCSX_PEX_TX_SLAVE_RULE_COMBO_MINX", 2, a, b, 0, 0, 0, 0);
}

#define typedef_CAVM_MCSX_PEX_TX_SLAVE_RULE_COMBO_MINX(a,b) cavm_mcsx_pex_tx_slave_rule_combo_minx_t
#define bustype_CAVM_MCSX_PEX_TX_SLAVE_RULE_COMBO_MINX(a,b) CSR_TYPE_RSL
#define basename_CAVM_MCSX_PEX_TX_SLAVE_RULE_COMBO_MINX(a,b) "MCSX_PEX_TX_SLAVE_RULE_COMBO_MINX"
#define device_bar_CAVM_MCSX_PEX_TX_SLAVE_RULE_COMBO_MINX(a,b) 0x0 /* PF_BAR0 */
#define busnum_CAVM_MCSX_PEX_TX_SLAVE_RULE_COMBO_MINX(a,b) (a)
#define arguments_CAVM_MCSX_PEX_TX_SLAVE_RULE_COMBO_MINX(a,b) (a),(b),-1,-1

/**
 * Register (RSL) mcs#_pex_tx_slave_rule_da#
 *
 * MCS Pex Tx Slave Rule Da Register
 * DA address for control packet matching
 */
union cavm_mcsx_pex_tx_slave_rule_dax
{
    uint64_t u;
    struct cavm_mcsx_pex_tx_slave_rule_dax_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_48_63        : 16;
        uint64_t rule_da_msb           : 16; /**< [ 47: 32](R/W) MSB of DA address for control packet matching */
        uint64_t rule_da_lsb           : 32; /**< [ 31:  0](R/W) LSB of DA address for control packet matching */
#else /* Word 0 - Little Endian */
        uint64_t rule_da_lsb           : 32; /**< [ 31:  0](R/W) LSB of DA address for control packet matching */
        uint64_t rule_da_msb           : 16; /**< [ 47: 32](R/W) MSB of DA address for control packet matching */
        uint64_t reserved_48_63        : 16;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_mcsx_pex_tx_slave_rule_dax_s cn; */
};
typedef union cavm_mcsx_pex_tx_slave_rule_dax cavm_mcsx_pex_tx_slave_rule_dax_t;

static inline uint64_t CAVM_MCSX_PEX_TX_SLAVE_RULE_DAX(uint64_t a, uint64_t b) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_MCSX_PEX_TX_SLAVE_RULE_DAX(uint64_t a, uint64_t b)
{
    if (cavm_is_model(OCTEONTX_CNF10KB) && ((a<=6) && (b<=7)))
        return 0x87e080000818ll + 0x1000000ll * ((a) & 0x7) + 8ll * ((b) & 0x7);
    __cavm_csr_fatal("MCSX_PEX_TX_SLAVE_RULE_DAX", 2, a, b, 0, 0, 0, 0);
}

#define typedef_CAVM_MCSX_PEX_TX_SLAVE_RULE_DAX(a,b) cavm_mcsx_pex_tx_slave_rule_dax_t
#define bustype_CAVM_MCSX_PEX_TX_SLAVE_RULE_DAX(a,b) CSR_TYPE_RSL
#define basename_CAVM_MCSX_PEX_TX_SLAVE_RULE_DAX(a,b) "MCSX_PEX_TX_SLAVE_RULE_DAX"
#define device_bar_CAVM_MCSX_PEX_TX_SLAVE_RULE_DAX(a,b) 0x0 /* PF_BAR0 */
#define busnum_CAVM_MCSX_PEX_TX_SLAVE_RULE_DAX(a,b) (a)
#define arguments_CAVM_MCSX_PEX_TX_SLAVE_RULE_DAX(a,b) (a),(b),-1,-1

/**
 * Register (RSL) mcs#_pex_tx_slave_rule_da_range_max#
 *
 * MCS Pex Tx Slave Rule Da Range Max Register
 * Maximum DA address for control packet matching
 */
union cavm_mcsx_pex_tx_slave_rule_da_range_maxx
{
    uint64_t u;
    struct cavm_mcsx_pex_tx_slave_rule_da_range_maxx_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_48_63        : 16;
        uint64_t rule_range_max_msb    : 16; /**< [ 47: 32](R/W) MSB of maximum DA address for DA range control packet matching */
        uint64_t rule_range_max_lsb    : 32; /**< [ 31:  0](R/W) LSB of maximum DA address for DA range control packet matching */
#else /* Word 0 - Little Endian */
        uint64_t rule_range_max_lsb    : 32; /**< [ 31:  0](R/W) LSB of maximum DA address for DA range control packet matching */
        uint64_t rule_range_max_msb    : 16; /**< [ 47: 32](R/W) MSB of maximum DA address for DA range control packet matching */
        uint64_t reserved_48_63        : 16;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_mcsx_pex_tx_slave_rule_da_range_maxx_s cn; */
};
typedef union cavm_mcsx_pex_tx_slave_rule_da_range_maxx cavm_mcsx_pex_tx_slave_rule_da_range_maxx_t;

static inline uint64_t CAVM_MCSX_PEX_TX_SLAVE_RULE_DA_RANGE_MAXX(uint64_t a, uint64_t b) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_MCSX_PEX_TX_SLAVE_RULE_DA_RANGE_MAXX(uint64_t a, uint64_t b)
{
    if (cavm_is_model(OCTEONTX_CNF10KB) && ((a<=6) && (b<=3)))
        return 0x87e080000860ll + 0x1000000ll * ((a) & 0x7) + 0x20ll * ((b) & 0x3);
    __cavm_csr_fatal("MCSX_PEX_TX_SLAVE_RULE_DA_RANGE_MAXX", 2, a, b, 0, 0, 0, 0);
}

#define typedef_CAVM_MCSX_PEX_TX_SLAVE_RULE_DA_RANGE_MAXX(a,b) cavm_mcsx_pex_tx_slave_rule_da_range_maxx_t
#define bustype_CAVM_MCSX_PEX_TX_SLAVE_RULE_DA_RANGE_MAXX(a,b) CSR_TYPE_RSL
#define basename_CAVM_MCSX_PEX_TX_SLAVE_RULE_DA_RANGE_MAXX(a,b) "MCSX_PEX_TX_SLAVE_RULE_DA_RANGE_MAXX"
#define device_bar_CAVM_MCSX_PEX_TX_SLAVE_RULE_DA_RANGE_MAXX(a,b) 0x0 /* PF_BAR0 */
#define busnum_CAVM_MCSX_PEX_TX_SLAVE_RULE_DA_RANGE_MAXX(a,b) (a)
#define arguments_CAVM_MCSX_PEX_TX_SLAVE_RULE_DA_RANGE_MAXX(a,b) (a),(b),-1,-1

/**
 * Register (RSL) mcs#_pex_tx_slave_rule_da_range_min#
 *
 * MCS Pex Tx Slave Rule Da Range Min Register
 * Minimum DA address for control packet matching
 */
union cavm_mcsx_pex_tx_slave_rule_da_range_minx
{
    uint64_t u;
    struct cavm_mcsx_pex_tx_slave_rule_da_range_minx_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_48_63        : 16;
        uint64_t rule_range_min_msb    : 16; /**< [ 47: 32](R/W) MSB of minimum DA address for DA range control packet matching */
        uint64_t rule_range_min_lsb    : 32; /**< [ 31:  0](R/W) LSB of minimum DA address for DA range control packet matching */
#else /* Word 0 - Little Endian */
        uint64_t rule_range_min_lsb    : 32; /**< [ 31:  0](R/W) LSB of minimum DA address for DA range control packet matching */
        uint64_t rule_range_min_msb    : 16; /**< [ 47: 32](R/W) MSB of minimum DA address for DA range control packet matching */
        uint64_t reserved_48_63        : 16;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_mcsx_pex_tx_slave_rule_da_range_minx_s cn; */
};
typedef union cavm_mcsx_pex_tx_slave_rule_da_range_minx cavm_mcsx_pex_tx_slave_rule_da_range_minx_t;

static inline uint64_t CAVM_MCSX_PEX_TX_SLAVE_RULE_DA_RANGE_MINX(uint64_t a, uint64_t b) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_MCSX_PEX_TX_SLAVE_RULE_DA_RANGE_MINX(uint64_t a, uint64_t b)
{
    if (cavm_is_model(OCTEONTX_CNF10KB) && ((a<=6) && (b<=3)))
        return 0x87e080000858ll + 0x1000000ll * ((a) & 0x7) + 0x20ll * ((b) & 0x3);
    __cavm_csr_fatal("MCSX_PEX_TX_SLAVE_RULE_DA_RANGE_MINX", 2, a, b, 0, 0, 0, 0);
}

#define typedef_CAVM_MCSX_PEX_TX_SLAVE_RULE_DA_RANGE_MINX(a,b) cavm_mcsx_pex_tx_slave_rule_da_range_minx_t
#define bustype_CAVM_MCSX_PEX_TX_SLAVE_RULE_DA_RANGE_MINX(a,b) CSR_TYPE_RSL
#define basename_CAVM_MCSX_PEX_TX_SLAVE_RULE_DA_RANGE_MINX(a,b) "MCSX_PEX_TX_SLAVE_RULE_DA_RANGE_MINX"
#define device_bar_CAVM_MCSX_PEX_TX_SLAVE_RULE_DA_RANGE_MINX(a,b) 0x0 /* PF_BAR0 */
#define busnum_CAVM_MCSX_PEX_TX_SLAVE_RULE_DA_RANGE_MINX(a,b) (a)
#define arguments_CAVM_MCSX_PEX_TX_SLAVE_RULE_DA_RANGE_MINX(a,b) (a),(b),-1,-1

/**
 * Register (RSL) mcs#_pex_tx_slave_rule_enable
 *
 * MCS Pex Tx Slave Rule Enable Register
 * Enable bits for rule based control packet matching
 */
union cavm_mcsx_pex_tx_slave_rule_enable
{
    uint64_t u;
    struct cavm_mcsx_pex_tx_slave_rule_enable_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_25_63        : 39;
        uint64_t rule_mac_en           : 1;  /**< [ 24: 24](R/W) Enable MAC addresses for control packet matching */
        uint64_t rule_combo_en         : 4;  /**< [ 23: 20](R/W) Enable combos for control packet matching */
        uint64_t rule_range_en         : 4;  /**< [ 19: 16](R/W) Enable DA range for control packet matching */
        uint64_t rule_ad_en            : 8;  /**< [ 15:  8](R/W) Enable DAs for control packet matching */
        uint64_t rule_etyp_en          : 8;  /**< [  7:  0](R/W) Enable EthTypes for control packet matching */
#else /* Word 0 - Little Endian */
        uint64_t rule_etyp_en          : 8;  /**< [  7:  0](R/W) Enable EthTypes for control packet matching */
        uint64_t rule_ad_en            : 8;  /**< [ 15:  8](R/W) Enable DAs for control packet matching */
        uint64_t rule_range_en         : 4;  /**< [ 19: 16](R/W) Enable DA range for control packet matching */
        uint64_t rule_combo_en         : 4;  /**< [ 23: 20](R/W) Enable combos for control packet matching */
        uint64_t rule_mac_en           : 1;  /**< [ 24: 24](R/W) Enable MAC addresses for control packet matching */
        uint64_t reserved_25_63        : 39;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_mcsx_pex_tx_slave_rule_enable_s cn; */
};
typedef union cavm_mcsx_pex_tx_slave_rule_enable cavm_mcsx_pex_tx_slave_rule_enable_t;

static inline uint64_t CAVM_MCSX_PEX_TX_SLAVE_RULE_ENABLE(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_MCSX_PEX_TX_SLAVE_RULE_ENABLE(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CNF10KB) && (a<=6))
        return 0x87e080000960ll + 0x1000000ll * ((a) & 0x7);
    __cavm_csr_fatal("MCSX_PEX_TX_SLAVE_RULE_ENABLE", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_MCSX_PEX_TX_SLAVE_RULE_ENABLE(a) cavm_mcsx_pex_tx_slave_rule_enable_t
#define bustype_CAVM_MCSX_PEX_TX_SLAVE_RULE_ENABLE(a) CSR_TYPE_RSL
#define basename_CAVM_MCSX_PEX_TX_SLAVE_RULE_ENABLE(a) "MCSX_PEX_TX_SLAVE_RULE_ENABLE"
#define device_bar_CAVM_MCSX_PEX_TX_SLAVE_RULE_ENABLE(a) 0x0 /* PF_BAR0 */
#define busnum_CAVM_MCSX_PEX_TX_SLAVE_RULE_ENABLE(a) (a)
#define arguments_CAVM_MCSX_PEX_TX_SLAVE_RULE_ENABLE(a) (a),-1,-1,-1

/**
 * Register (RSL) mcs#_pex_tx_slave_rule_etype_cfg#
 *
 * MCS Pex Tx Slave Rule Etype Cfg Register
 * EthType for control packet matching
 */
union cavm_mcsx_pex_tx_slave_rule_etype_cfgx
{
    uint64_t u;
    struct cavm_mcsx_pex_tx_slave_rule_etype_cfgx_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_16_63        : 48;
        uint64_t rule_etype            : 16; /**< [ 15:  0](R/W) EthType for control packet matching */
#else /* Word 0 - Little Endian */
        uint64_t rule_etype            : 16; /**< [ 15:  0](R/W) EthType for control packet matching */
        uint64_t reserved_16_63        : 48;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_mcsx_pex_tx_slave_rule_etype_cfgx_s cn; */
};
typedef union cavm_mcsx_pex_tx_slave_rule_etype_cfgx cavm_mcsx_pex_tx_slave_rule_etype_cfgx_t;

static inline uint64_t CAVM_MCSX_PEX_TX_SLAVE_RULE_ETYPE_CFGX(uint64_t a, uint64_t b) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_MCSX_PEX_TX_SLAVE_RULE_ETYPE_CFGX(uint64_t a, uint64_t b)
{
    if (cavm_is_model(OCTEONTX_CNF10KB) && ((a<=6) && (b<=7)))
        return 0x87e0800007d8ll + 0x1000000ll * ((a) & 0x7) + 8ll * ((b) & 0x7);
    __cavm_csr_fatal("MCSX_PEX_TX_SLAVE_RULE_ETYPE_CFGX", 2, a, b, 0, 0, 0, 0);
}

#define typedef_CAVM_MCSX_PEX_TX_SLAVE_RULE_ETYPE_CFGX(a,b) cavm_mcsx_pex_tx_slave_rule_etype_cfgx_t
#define bustype_CAVM_MCSX_PEX_TX_SLAVE_RULE_ETYPE_CFGX(a,b) CSR_TYPE_RSL
#define basename_CAVM_MCSX_PEX_TX_SLAVE_RULE_ETYPE_CFGX(a,b) "MCSX_PEX_TX_SLAVE_RULE_ETYPE_CFGX"
#define device_bar_CAVM_MCSX_PEX_TX_SLAVE_RULE_ETYPE_CFGX(a,b) 0x0 /* PF_BAR0 */
#define busnum_CAVM_MCSX_PEX_TX_SLAVE_RULE_ETYPE_CFGX(a,b) (a)
#define arguments_CAVM_MCSX_PEX_TX_SLAVE_RULE_ETYPE_CFGX(a,b) (a),(b),-1,-1

/**
 * Register (RSL) mcs#_pex_tx_slave_rule_mac
 *
 * MCS Pex Tx Slave Rule Mac Register
 * MAC address for MAC-specific protocol matching
 */
union cavm_mcsx_pex_tx_slave_rule_mac
{
    uint64_t u;
    struct cavm_mcsx_pex_tx_slave_rule_mac_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_44_63        : 20;
        uint64_t rule_mac_msb          : 12; /**< [ 43: 32](R/W) MSB of MAC address */
        uint64_t rule_mac_lsb          : 32; /**< [ 31:  0](R/W) LSB of MAC address */
#else /* Word 0 - Little Endian */
        uint64_t rule_mac_lsb          : 32; /**< [ 31:  0](R/W) LSB of MAC address */
        uint64_t rule_mac_msb          : 12; /**< [ 43: 32](R/W) MSB of MAC address */
        uint64_t reserved_44_63        : 20;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_mcsx_pex_tx_slave_rule_mac_s cn; */
};
typedef union cavm_mcsx_pex_tx_slave_rule_mac cavm_mcsx_pex_tx_slave_rule_mac_t;

static inline uint64_t CAVM_MCSX_PEX_TX_SLAVE_RULE_MAC(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_MCSX_PEX_TX_SLAVE_RULE_MAC(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CNF10KB) && (a<=6))
        return 0x87e080000958ll + 0x1000000ll * ((a) & 0x7);
    __cavm_csr_fatal("MCSX_PEX_TX_SLAVE_RULE_MAC", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_MCSX_PEX_TX_SLAVE_RULE_MAC(a) cavm_mcsx_pex_tx_slave_rule_mac_t
#define bustype_CAVM_MCSX_PEX_TX_SLAVE_RULE_MAC(a) CSR_TYPE_RSL
#define basename_CAVM_MCSX_PEX_TX_SLAVE_RULE_MAC(a) "MCSX_PEX_TX_SLAVE_RULE_MAC"
#define device_bar_CAVM_MCSX_PEX_TX_SLAVE_RULE_MAC(a) 0x0 /* PF_BAR0 */
#define busnum_CAVM_MCSX_PEX_TX_SLAVE_RULE_MAC(a) (a)
#define arguments_CAVM_MCSX_PEX_TX_SLAVE_RULE_MAC(a) (a),-1,-1,-1

/**
 * Register (RSL) mcs#_pex_tx_slave_sectag_cfg
 *
 * MCS Pex Tx Slave Sectag Cfg Register
 * Configuration for SecTAG tags
 */
union cavm_mcsx_pex_tx_slave_sectag_cfg
{
    uint64_t u;
    struct cavm_mcsx_pex_tx_slave_sectag_cfg_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_16_63        : 48;
        uint64_t sectag_etype          : 16; /**< [ 15:  0](R/W) SecTAG EthType */
#else /* Word 0 - Little Endian */
        uint64_t sectag_etype          : 16; /**< [ 15:  0](R/W) SecTAG EthType */
        uint64_t reserved_16_63        : 48;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_mcsx_pex_tx_slave_sectag_cfg_s cn; */
};
typedef union cavm_mcsx_pex_tx_slave_sectag_cfg cavm_mcsx_pex_tx_slave_sectag_cfg_t;

static inline uint64_t CAVM_MCSX_PEX_TX_SLAVE_SECTAG_CFG(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_MCSX_PEX_TX_SLAVE_SECTAG_CFG(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CNF10KB) && (a<=6))
        return 0x87e0800007c8ll + 0x1000000ll * ((a) & 0x7);
    __cavm_csr_fatal("MCSX_PEX_TX_SLAVE_SECTAG_CFG", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_MCSX_PEX_TX_SLAVE_SECTAG_CFG(a) cavm_mcsx_pex_tx_slave_sectag_cfg_t
#define bustype_CAVM_MCSX_PEX_TX_SLAVE_SECTAG_CFG(a) CSR_TYPE_RSL
#define basename_CAVM_MCSX_PEX_TX_SLAVE_SECTAG_CFG(a) "MCSX_PEX_TX_SLAVE_SECTAG_CFG"
#define device_bar_CAVM_MCSX_PEX_TX_SLAVE_SECTAG_CFG(a) 0x0 /* PF_BAR0 */
#define busnum_CAVM_MCSX_PEX_TX_SLAVE_SECTAG_CFG(a) (a)
#define arguments_CAVM_MCSX_PEX_TX_SLAVE_SECTAG_CFG(a) (a),-1,-1,-1

/**
 * Register (RSL) mcs#_sclk_active_pc
 *
 * MCS sclk Domain ACTIVE PC Register
 * Counts the conditional clocks under sclk domain for power management.
 */
union cavm_mcsx_sclk_active_pc
{
    uint64_t u;
    struct cavm_mcsx_sclk_active_pc_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t cnt                   : 64; /**< [ 63:  0](R/W/H) Count conditional clock cycles after reset for sclk domain. */
#else /* Word 0 - Little Endian */
        uint64_t cnt                   : 64; /**< [ 63:  0](R/W/H) Count conditional clock cycles after reset for sclk domain. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_mcsx_sclk_active_pc_s cn; */
};
typedef union cavm_mcsx_sclk_active_pc cavm_mcsx_sclk_active_pc_t;

static inline uint64_t CAVM_MCSX_SCLK_ACTIVE_PC(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_MCSX_SCLK_ACTIVE_PC(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CNF10KB) && (a<=6))
        return 0x87e0800600b0ll + 0x1000000ll * ((a) & 0x7);
    __cavm_csr_fatal("MCSX_SCLK_ACTIVE_PC", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_MCSX_SCLK_ACTIVE_PC(a) cavm_mcsx_sclk_active_pc_t
#define bustype_CAVM_MCSX_SCLK_ACTIVE_PC(a) CSR_TYPE_RSL
#define basename_CAVM_MCSX_SCLK_ACTIVE_PC(a) "MCSX_SCLK_ACTIVE_PC"
#define device_bar_CAVM_MCSX_SCLK_ACTIVE_PC(a) 0x0 /* PF_BAR0 */
#define busnum_CAVM_MCSX_SCLK_ACTIVE_PC(a) (a)
#define arguments_CAVM_MCSX_SCLK_ACTIVE_PC(a) (a),-1,-1,-1

#endif /* __CAVM_CSRS_MCS_H__ */
