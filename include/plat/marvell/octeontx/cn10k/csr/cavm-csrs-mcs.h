#ifndef __CAVM_CSRS_MCS_H__
#define __CAVM_CSRS_MCS_H__
/* This file is auto-generated. Do not edit */

/***********************license start***********************************
* Copyright (C) 2020-2021 Marvell
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
#define CAVM_MCS_BAR_E_MCSX_PF_BAR0_SIZE 0x400000ull
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
 */
union cavm_mcsx_bbe_rx_slave_bbe_int
{
    uint64_t u;
    struct cavm_mcsx_bbe_rx_slave_bbe_int_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_8_63         : 56;
        uint64_t plfifo_overflow       : 4;  /**< [  7:  4](R/W) Policy FIFO (port 0 to 3 for bit 0 to 3 respectively) experienced an overflow, a
                                                                 reset to that channel is required. */
        uint64_t dfifo_overflow        : 4;  /**< [  3:  0](R/W) Data FIFO (port 0 to 3 for bit 0 to 3 respectively) experienced an overflow, a
                                                                 reset to that channel is required. */
#else /* Word 0 - Little Endian */
        uint64_t dfifo_overflow        : 4;  /**< [  3:  0](R/W) Data FIFO (port 0 to 3 for bit 0 to 3 respectively) experienced an overflow, a
                                                                 reset to that channel is required. */
        uint64_t plfifo_overflow       : 4;  /**< [  7:  4](R/W) Policy FIFO (port 0 to 3 for bit 0 to 3 respectively) experienced an overflow, a
                                                                 reset to that channel is required. */
        uint64_t reserved_8_63         : 56;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_mcsx_bbe_rx_slave_bbe_int_s cn; */
};
typedef union cavm_mcsx_bbe_rx_slave_bbe_int cavm_mcsx_bbe_rx_slave_bbe_int_t;

static inline uint64_t CAVM_MCSX_BBE_RX_SLAVE_BBE_INT(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_MCSX_BBE_RX_SLAVE_BBE_INT(uint64_t a)
{
    if (a<=6)
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
 */
union cavm_mcsx_bbe_rx_slave_bbe_int_enb
{
    uint64_t u;
    struct cavm_mcsx_bbe_rx_slave_bbe_int_enb_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_8_63         : 56;
        uint64_t plfifo_overflow_enb   : 4;  /**< [  7:  4](R/W) Policy FIFO (port 0 to 3 for bit 0 to 3 respectively) experienced an overflow, a
                                                                 reset to that channel is required. */
        uint64_t dfifo_overflow_enb    : 4;  /**< [  3:  0](R/W) Data FIFO (port 0 to 3 for bit 0 to 3 respectively) experienced an overflow, a
                                                                 reset to that channel is required. */
#else /* Word 0 - Little Endian */
        uint64_t dfifo_overflow_enb    : 4;  /**< [  3:  0](R/W) Data FIFO (port 0 to 3 for bit 0 to 3 respectively) experienced an overflow, a
                                                                 reset to that channel is required. */
        uint64_t plfifo_overflow_enb   : 4;  /**< [  7:  4](R/W) Policy FIFO (port 0 to 3 for bit 0 to 3 respectively) experienced an overflow, a
                                                                 reset to that channel is required. */
        uint64_t reserved_8_63         : 56;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_mcsx_bbe_rx_slave_bbe_int_enb_s cn; */
};
typedef union cavm_mcsx_bbe_rx_slave_bbe_int_enb cavm_mcsx_bbe_rx_slave_bbe_int_enb_t;

static inline uint64_t CAVM_MCSX_BBE_RX_SLAVE_BBE_INT_ENB(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_MCSX_BBE_RX_SLAVE_BBE_INT_ENB(uint64_t a)
{
    if (a<=6)
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
 */
union cavm_mcsx_bbe_rx_slave_bbe_int_intr_rw
{
    uint64_t u;
    struct cavm_mcsx_bbe_rx_slave_bbe_int_intr_rw_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_8_63         : 56;
        uint64_t plfifo_overflow       : 4;  /**< [  7:  4](R/W) Policy FIFO (port 0 to 3 for bit 0 to 3 respectively) experienced an overflow, a
                                                                 reset to that channel is required. */
        uint64_t dfifo_overflow        : 4;  /**< [  3:  0](R/W) Data FIFO (port 0 to 3 for bit 0 to 3 respectively) experienced an overflow, a
                                                                 reset to that channel is required. */
#else /* Word 0 - Little Endian */
        uint64_t dfifo_overflow        : 4;  /**< [  3:  0](R/W) Data FIFO (port 0 to 3 for bit 0 to 3 respectively) experienced an overflow, a
                                                                 reset to that channel is required. */
        uint64_t plfifo_overflow       : 4;  /**< [  7:  4](R/W) Policy FIFO (port 0 to 3 for bit 0 to 3 respectively) experienced an overflow, a
                                                                 reset to that channel is required. */
        uint64_t reserved_8_63         : 56;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_mcsx_bbe_rx_slave_bbe_int_intr_rw_s cn; */
};
typedef union cavm_mcsx_bbe_rx_slave_bbe_int_intr_rw cavm_mcsx_bbe_rx_slave_bbe_int_intr_rw_t;

static inline uint64_t CAVM_MCSX_BBE_RX_SLAVE_BBE_INT_INTR_RW(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_MCSX_BBE_RX_SLAVE_BBE_INT_INTR_RW(uint64_t a)
{
    if (a<=6)
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
 */
union cavm_mcsx_bbe_rx_slave_bbe_int_raw
{
    uint64_t u;
    struct cavm_mcsx_bbe_rx_slave_bbe_int_raw_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_8_63         : 56;
        uint64_t plfifo_overflow       : 4;  /**< [  7:  4](RO) Policy FIFO (port 0 to 3 for bit 0 to 3 respectively) experienced an overflow, a
                                                                 reset to that channel is required. */
        uint64_t dfifo_overflow        : 4;  /**< [  3:  0](RO) Data FIFO (port 0 to 3 for bit 0 to 3 respectively) experienced an overflow, a
                                                                 reset to that channel is required. */
#else /* Word 0 - Little Endian */
        uint64_t dfifo_overflow        : 4;  /**< [  3:  0](RO) Data FIFO (port 0 to 3 for bit 0 to 3 respectively) experienced an overflow, a
                                                                 reset to that channel is required. */
        uint64_t plfifo_overflow       : 4;  /**< [  7:  4](RO) Policy FIFO (port 0 to 3 for bit 0 to 3 respectively) experienced an overflow, a
                                                                 reset to that channel is required. */
        uint64_t reserved_8_63         : 56;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_mcsx_bbe_rx_slave_bbe_int_raw_s cn; */
};
typedef union cavm_mcsx_bbe_rx_slave_bbe_int_raw cavm_mcsx_bbe_rx_slave_bbe_int_raw_t;

static inline uint64_t CAVM_MCSX_BBE_RX_SLAVE_BBE_INT_RAW(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_MCSX_BBE_RX_SLAVE_BBE_INT_RAW(uint64_t a)
{
    if (a<=6)
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
 */
union cavm_mcsx_bbe_rx_slave_cal_entry
{
    uint64_t u;
    struct cavm_mcsx_bbe_rx_slave_cal_entry_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_32_63        : 32;
        uint64_t cal_entry             : 32; /**< [ 31:  0](R/W) Control the sequence of Data FIFO associated with each port that the arbiter will read data from. There are 16 entries of 2 bits each (in a format of {entry15, entry14, ..., entry1, entry0}; totaling 16*2 = 32 bits). Each entry points to one set of FIFOs associated with a port. The arbiter will read FIFO in an order from entry #0 to entry #[CAL_LEN] and then repeat. */
#else /* Word 0 - Little Endian */
        uint64_t cal_entry             : 32; /**< [ 31:  0](R/W) Control the sequence of Data FIFO associated with each port that the arbiter will read data from. There are 16 entries of 2 bits each (in a format of {entry15, entry14, ..., entry1, entry0}; totaling 16*2 = 32 bits). Each entry points to one set of FIFOs associated with a port. The arbiter will read FIFO in an order from entry #0 to entry #[CAL_LEN] and then repeat. */
        uint64_t reserved_32_63        : 32;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_mcsx_bbe_rx_slave_cal_entry_s cn; */
};
typedef union cavm_mcsx_bbe_rx_slave_cal_entry cavm_mcsx_bbe_rx_slave_cal_entry_t;

static inline uint64_t CAVM_MCSX_BBE_RX_SLAVE_CAL_ENTRY(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_MCSX_BBE_RX_SLAVE_CAL_ENTRY(uint64_t a)
{
    if (a<=6)
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
 */
union cavm_mcsx_bbe_rx_slave_cal_len
{
    uint64_t u;
    struct cavm_mcsx_bbe_rx_slave_cal_len_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_4_63         : 60;
        uint64_t cal_len               : 4;  /**< [  3:  0](R/W) Length of calendar used in arbitration. Arbiter goes from calendar entry 0, 1,
                                                                 ... cal_len, then repeat from entry 0, ... to read Data FIFO pointed to in each
                                                                 clock cycle. Setting up the cal_entry registers and the length of the calendar
                                                                 will control how often the arbiter allows each FIFO to be read. Ports with
                                                                 higher bandwidth should normally be allowed more often. */
#else /* Word 0 - Little Endian */
        uint64_t cal_len               : 4;  /**< [  3:  0](R/W) Length of calendar used in arbitration. Arbiter goes from calendar entry 0, 1,
                                                                 ... cal_len, then repeat from entry 0, ... to read Data FIFO pointed to in each
                                                                 clock cycle. Setting up the cal_entry registers and the length of the calendar
                                                                 will control how often the arbiter allows each FIFO to be read. Ports with
                                                                 higher bandwidth should normally be allowed more often. */
        uint64_t reserved_4_63         : 60;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_mcsx_bbe_rx_slave_cal_len_s cn; */
};
typedef union cavm_mcsx_bbe_rx_slave_cal_len cavm_mcsx_bbe_rx_slave_cal_len_t;

static inline uint64_t CAVM_MCSX_BBE_RX_SLAVE_CAL_LEN(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_MCSX_BBE_RX_SLAVE_CAL_LEN(uint64_t a)
{
    if (a<=6)
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
    if (a<=6)
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
    if (a<=6)
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
 * Register (RSL) mcs#_bbe_rx_slave_padding_ctl
 *
 * MCS Bbe Rx Slave Padding Ctl Register
 */
union cavm_mcsx_bbe_rx_slave_padding_ctl
{
    uint64_t u;
    struct cavm_mcsx_bbe_rx_slave_padding_ctl_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_5_63         : 59;
        uint64_t padding_en            : 1;  /**< [  4:  4](R/W) When set to 1, enable padding of zeroes at the end of packets if the size of
                                                                 output packet less than [MIN_PKT_SIZE]. */
        uint64_t min_pkt_size          : 4;  /**< [  3:  0](R/W) Define the minimum packet size = (4*[MIN_PKT_SIZE]+16)B, with [MIN_PKT_SIZE]
                                                                 ranges from 0x0 to 0xB to support a minimum packet size of 16, 20, 24, ..., 60
                                                                 bytes (values 0xC to 0xF are reserved). If the output packet size is less than
                                                                 the specified minimum and the padding_en bit is set, null bytes will be inserted
                                                                 to the end of the packet to make the packet size equal the minimum. */
#else /* Word 0 - Little Endian */
        uint64_t min_pkt_size          : 4;  /**< [  3:  0](R/W) Define the minimum packet size = (4*[MIN_PKT_SIZE]+16)B, with [MIN_PKT_SIZE]
                                                                 ranges from 0x0 to 0xB to support a minimum packet size of 16, 20, 24, ..., 60
                                                                 bytes (values 0xC to 0xF are reserved). If the output packet size is less than
                                                                 the specified minimum and the padding_en bit is set, null bytes will be inserted
                                                                 to the end of the packet to make the packet size equal the minimum. */
        uint64_t padding_en            : 1;  /**< [  4:  4](R/W) When set to 1, enable padding of zeroes at the end of packets if the size of
                                                                 output packet less than [MIN_PKT_SIZE]. */
        uint64_t reserved_5_63         : 59;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_mcsx_bbe_rx_slave_padding_ctl_s cn; */
};
typedef union cavm_mcsx_bbe_rx_slave_padding_ctl cavm_mcsx_bbe_rx_slave_padding_ctl_t;

static inline uint64_t CAVM_MCSX_BBE_RX_SLAVE_PADDING_CTL(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_MCSX_BBE_RX_SLAVE_PADDING_CTL(uint64_t a)
{
    if (a<=6)
        return 0x87e080000190ll + 0x1000000ll * ((a) & 0x7);
    __cavm_csr_fatal("MCSX_BBE_RX_SLAVE_PADDING_CTL", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_MCSX_BBE_RX_SLAVE_PADDING_CTL(a) cavm_mcsx_bbe_rx_slave_padding_ctl_t
#define bustype_CAVM_MCSX_BBE_RX_SLAVE_PADDING_CTL(a) CSR_TYPE_RSL
#define basename_CAVM_MCSX_BBE_RX_SLAVE_PADDING_CTL(a) "MCSX_BBE_RX_SLAVE_PADDING_CTL"
#define device_bar_CAVM_MCSX_BBE_RX_SLAVE_PADDING_CTL(a) 0x0 /* PF_BAR0 */
#define busnum_CAVM_MCSX_BBE_RX_SLAVE_PADDING_CTL(a) (a)
#define arguments_CAVM_MCSX_BBE_RX_SLAVE_PADDING_CTL(a) (a),-1,-1,-1

/**
 * Register (RSL) mcs#_bbe_rx_slave_preempt_filter_credit_corr_count#
 *
 * MCS Bbe Rx Slave Preempt Filter Credit Corr Count Register
 */
union cavm_mcsx_bbe_rx_slave_preempt_filter_credit_corr_countx
{
    uint64_t u;
    struct cavm_mcsx_bbe_rx_slave_preempt_filter_credit_corr_countx_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_6_63         : 58;
        uint64_t credit_corr_count     : 6;  /**< [  5:  0](RO) Credit correction count from the Early Preempt Filter when it removes data due
                                                                 to violation of Early Preemption Rule. */
#else /* Word 0 - Little Endian */
        uint64_t credit_corr_count     : 6;  /**< [  5:  0](RO) Credit correction count from the Early Preempt Filter when it removes data due
                                                                 to violation of Early Preemption Rule. */
        uint64_t reserved_6_63         : 58;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_mcsx_bbe_rx_slave_preempt_filter_credit_corr_countx_s cn; */
};
typedef union cavm_mcsx_bbe_rx_slave_preempt_filter_credit_corr_countx cavm_mcsx_bbe_rx_slave_preempt_filter_credit_corr_countx_t;

static inline uint64_t CAVM_MCSX_BBE_RX_SLAVE_PREEMPT_FILTER_CREDIT_CORR_COUNTX(uint64_t a, uint64_t b) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_MCSX_BBE_RX_SLAVE_PREEMPT_FILTER_CREDIT_CORR_COUNTX(uint64_t a, uint64_t b)
{
    if ((a<=6) && (b<=3))
        return 0x87e080000198ll + 0x1000000ll * ((a) & 0x7) + 0x10ll * ((b) & 0x3);
    __cavm_csr_fatal("MCSX_BBE_RX_SLAVE_PREEMPT_FILTER_CREDIT_CORR_COUNTX", 2, a, b, 0, 0, 0, 0);
}

#define typedef_CAVM_MCSX_BBE_RX_SLAVE_PREEMPT_FILTER_CREDIT_CORR_COUNTX(a,b) cavm_mcsx_bbe_rx_slave_preempt_filter_credit_corr_countx_t
#define bustype_CAVM_MCSX_BBE_RX_SLAVE_PREEMPT_FILTER_CREDIT_CORR_COUNTX(a,b) CSR_TYPE_RSL
#define basename_CAVM_MCSX_BBE_RX_SLAVE_PREEMPT_FILTER_CREDIT_CORR_COUNTX(a,b) "MCSX_BBE_RX_SLAVE_PREEMPT_FILTER_CREDIT_CORR_COUNTX"
#define device_bar_CAVM_MCSX_BBE_RX_SLAVE_PREEMPT_FILTER_CREDIT_CORR_COUNTX(a,b) 0x0 /* PF_BAR0 */
#define busnum_CAVM_MCSX_BBE_RX_SLAVE_PREEMPT_FILTER_CREDIT_CORR_COUNTX(a,b) (a)
#define arguments_CAVM_MCSX_BBE_RX_SLAVE_PREEMPT_FILTER_CREDIT_CORR_COUNTX(a,b) (a),(b),-1,-1

/**
 * Register (RSL) mcs#_bbe_tx_slave_bbe_int
 *
 * MCS Bbe Tx Slave Bbe Int Register
 */
union cavm_mcsx_bbe_tx_slave_bbe_int
{
    uint64_t u;
    struct cavm_mcsx_bbe_tx_slave_bbe_int_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_8_63         : 56;
        uint64_t plfifo_overflow       : 4;  /**< [  7:  4](R/W) Policy FIFO (port 0 to 3 for bit 0 to 3 respectively) experienced an overflow, a
                                                                 reset to that channel is required. */
        uint64_t dfifo_overflow        : 4;  /**< [  3:  0](R/W) Data FIFO (port 0 to 3 for bit 0 to 3 respectively) experienced an overflow, a
                                                                 reset to that channel is required. */
#else /* Word 0 - Little Endian */
        uint64_t dfifo_overflow        : 4;  /**< [  3:  0](R/W) Data FIFO (port 0 to 3 for bit 0 to 3 respectively) experienced an overflow, a
                                                                 reset to that channel is required. */
        uint64_t plfifo_overflow       : 4;  /**< [  7:  4](R/W) Policy FIFO (port 0 to 3 for bit 0 to 3 respectively) experienced an overflow, a
                                                                 reset to that channel is required. */
        uint64_t reserved_8_63         : 56;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_mcsx_bbe_tx_slave_bbe_int_s cn; */
};
typedef union cavm_mcsx_bbe_tx_slave_bbe_int cavm_mcsx_bbe_tx_slave_bbe_int_t;

static inline uint64_t CAVM_MCSX_BBE_TX_SLAVE_BBE_INT(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_MCSX_BBE_TX_SLAVE_BBE_INT(uint64_t a)
{
    if (a<=6)
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
 */
union cavm_mcsx_bbe_tx_slave_bbe_int_enb
{
    uint64_t u;
    struct cavm_mcsx_bbe_tx_slave_bbe_int_enb_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_8_63         : 56;
        uint64_t plfifo_overflow_enb   : 4;  /**< [  7:  4](R/W) Policy FIFO (port 0 to 3 for bit 0 to 3 respectively) experienced an overflow, a
                                                                 reset to that channel is required. */
        uint64_t dfifo_overflow_enb    : 4;  /**< [  3:  0](R/W) Data FIFO (port 0 to 3 for bit 0 to 3 respectively) experienced an overflow, a
                                                                 reset to that channel is required. */
#else /* Word 0 - Little Endian */
        uint64_t dfifo_overflow_enb    : 4;  /**< [  3:  0](R/W) Data FIFO (port 0 to 3 for bit 0 to 3 respectively) experienced an overflow, a
                                                                 reset to that channel is required. */
        uint64_t plfifo_overflow_enb   : 4;  /**< [  7:  4](R/W) Policy FIFO (port 0 to 3 for bit 0 to 3 respectively) experienced an overflow, a
                                                                 reset to that channel is required. */
        uint64_t reserved_8_63         : 56;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_mcsx_bbe_tx_slave_bbe_int_enb_s cn; */
};
typedef union cavm_mcsx_bbe_tx_slave_bbe_int_enb cavm_mcsx_bbe_tx_slave_bbe_int_enb_t;

static inline uint64_t CAVM_MCSX_BBE_TX_SLAVE_BBE_INT_ENB(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_MCSX_BBE_TX_SLAVE_BBE_INT_ENB(uint64_t a)
{
    if (a<=6)
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
 */
union cavm_mcsx_bbe_tx_slave_bbe_int_intr_rw
{
    uint64_t u;
    struct cavm_mcsx_bbe_tx_slave_bbe_int_intr_rw_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_8_63         : 56;
        uint64_t plfifo_overflow       : 4;  /**< [  7:  4](R/W) Policy FIFO (port 0 to 3 for bit 0 to 3 respectively) experienced an overflow, a
                                                                 reset to that channel is required. */
        uint64_t dfifo_overflow        : 4;  /**< [  3:  0](R/W) Data FIFO (port 0 to 3 for bit 0 to 3 respectively) experienced an overflow, a
                                                                 reset to that channel is required. */
#else /* Word 0 - Little Endian */
        uint64_t dfifo_overflow        : 4;  /**< [  3:  0](R/W) Data FIFO (port 0 to 3 for bit 0 to 3 respectively) experienced an overflow, a
                                                                 reset to that channel is required. */
        uint64_t plfifo_overflow       : 4;  /**< [  7:  4](R/W) Policy FIFO (port 0 to 3 for bit 0 to 3 respectively) experienced an overflow, a
                                                                 reset to that channel is required. */
        uint64_t reserved_8_63         : 56;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_mcsx_bbe_tx_slave_bbe_int_intr_rw_s cn; */
};
typedef union cavm_mcsx_bbe_tx_slave_bbe_int_intr_rw cavm_mcsx_bbe_tx_slave_bbe_int_intr_rw_t;

static inline uint64_t CAVM_MCSX_BBE_TX_SLAVE_BBE_INT_INTR_RW(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_MCSX_BBE_TX_SLAVE_BBE_INT_INTR_RW(uint64_t a)
{
    if (a<=6)
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
 */
union cavm_mcsx_bbe_tx_slave_bbe_int_raw
{
    uint64_t u;
    struct cavm_mcsx_bbe_tx_slave_bbe_int_raw_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_8_63         : 56;
        uint64_t plfifo_overflow       : 4;  /**< [  7:  4](RO) Policy FIFO (port 0 to 3 for bit 0 to 3 respectively) experienced an overflow, a
                                                                 reset to that channel is required. */
        uint64_t dfifo_overflow        : 4;  /**< [  3:  0](RO) Data FIFO (port 0 to 3 for bit 0 to 3 respectively) experienced an overflow, a
                                                                 reset to that channel is required. */
#else /* Word 0 - Little Endian */
        uint64_t dfifo_overflow        : 4;  /**< [  3:  0](RO) Data FIFO (port 0 to 3 for bit 0 to 3 respectively) experienced an overflow, a
                                                                 reset to that channel is required. */
        uint64_t plfifo_overflow       : 4;  /**< [  7:  4](RO) Policy FIFO (port 0 to 3 for bit 0 to 3 respectively) experienced an overflow, a
                                                                 reset to that channel is required. */
        uint64_t reserved_8_63         : 56;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_mcsx_bbe_tx_slave_bbe_int_raw_s cn; */
};
typedef union cavm_mcsx_bbe_tx_slave_bbe_int_raw cavm_mcsx_bbe_tx_slave_bbe_int_raw_t;

static inline uint64_t CAVM_MCSX_BBE_TX_SLAVE_BBE_INT_RAW(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_MCSX_BBE_TX_SLAVE_BBE_INT_RAW(uint64_t a)
{
    if (a<=6)
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
 * Register (RSL) mcs#_bbe_tx_slave_cal_entry
 *
 * MCS Bbe Tx Slave Cal Entry Register
 */
union cavm_mcsx_bbe_tx_slave_cal_entry
{
    uint64_t u;
    struct cavm_mcsx_bbe_tx_slave_cal_entry_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_32_63        : 32;
        uint64_t cal_entry             : 32; /**< [ 31:  0](R/W) Control the sequence of Data FIFO associated with each port that the arbiter will read data from. There are 16 entries of 2 bits each (in a format of {entry15, entry14, ..., entry1, entry0}; totaling 16*2 = 32 bits). Each entry points to one set of FIFOs associated with a port. The arbiter will read FIFO in an order from entry #0 to entry #[CAL_LEN] and then repeat. */
#else /* Word 0 - Little Endian */
        uint64_t cal_entry             : 32; /**< [ 31:  0](R/W) Control the sequence of Data FIFO associated with each port that the arbiter will read data from. There are 16 entries of 2 bits each (in a format of {entry15, entry14, ..., entry1, entry0}; totaling 16*2 = 32 bits). Each entry points to one set of FIFOs associated with a port. The arbiter will read FIFO in an order from entry #0 to entry #[CAL_LEN] and then repeat. */
        uint64_t reserved_32_63        : 32;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_mcsx_bbe_tx_slave_cal_entry_s cn; */
};
typedef union cavm_mcsx_bbe_tx_slave_cal_entry cavm_mcsx_bbe_tx_slave_cal_entry_t;

static inline uint64_t CAVM_MCSX_BBE_TX_SLAVE_CAL_ENTRY(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_MCSX_BBE_TX_SLAVE_CAL_ENTRY(uint64_t a)
{
    if (a<=6)
        return 0x87e080000200ll + 0x1000000ll * ((a) & 0x7);
    __cavm_csr_fatal("MCSX_BBE_TX_SLAVE_CAL_ENTRY", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_MCSX_BBE_TX_SLAVE_CAL_ENTRY(a) cavm_mcsx_bbe_tx_slave_cal_entry_t
#define bustype_CAVM_MCSX_BBE_TX_SLAVE_CAL_ENTRY(a) CSR_TYPE_RSL
#define basename_CAVM_MCSX_BBE_TX_SLAVE_CAL_ENTRY(a) "MCSX_BBE_TX_SLAVE_CAL_ENTRY"
#define device_bar_CAVM_MCSX_BBE_TX_SLAVE_CAL_ENTRY(a) 0x0 /* PF_BAR0 */
#define busnum_CAVM_MCSX_BBE_TX_SLAVE_CAL_ENTRY(a) (a)
#define arguments_CAVM_MCSX_BBE_TX_SLAVE_CAL_ENTRY(a) (a),-1,-1,-1

/**
 * Register (RSL) mcs#_bbe_tx_slave_cal_len
 *
 * MCS Bbe Tx Slave Cal Len Register
 */
union cavm_mcsx_bbe_tx_slave_cal_len
{
    uint64_t u;
    struct cavm_mcsx_bbe_tx_slave_cal_len_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_4_63         : 60;
        uint64_t cal_len               : 4;  /**< [  3:  0](R/W) Length of calendar used in arbitration. Arbiter goes from calendar entry 0, 1,
                                                                 ... cal_len, then repeat from entry 0, ... to read Data FIFO pointed to in each
                                                                 clock cycle. Setting up the cal_entry registers and the length of the calendar
                                                                 will control how often the arbiter allows each FIFO to be read. Ports with
                                                                 higher bandwidth should normally be allowed more often. */
#else /* Word 0 - Little Endian */
        uint64_t cal_len               : 4;  /**< [  3:  0](R/W) Length of calendar used in arbitration. Arbiter goes from calendar entry 0, 1,
                                                                 ... cal_len, then repeat from entry 0, ... to read Data FIFO pointed to in each
                                                                 clock cycle. Setting up the cal_entry registers and the length of the calendar
                                                                 will control how often the arbiter allows each FIFO to be read. Ports with
                                                                 higher bandwidth should normally be allowed more often. */
        uint64_t reserved_4_63         : 60;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_mcsx_bbe_tx_slave_cal_len_s cn; */
};
typedef union cavm_mcsx_bbe_tx_slave_cal_len cavm_mcsx_bbe_tx_slave_cal_len_t;

static inline uint64_t CAVM_MCSX_BBE_TX_SLAVE_CAL_LEN(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_MCSX_BBE_TX_SLAVE_CAL_LEN(uint64_t a)
{
    if (a<=6)
        return 0x87e080000208ll + 0x1000000ll * ((a) & 0x7);
    __cavm_csr_fatal("MCSX_BBE_TX_SLAVE_CAL_LEN", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_MCSX_BBE_TX_SLAVE_CAL_LEN(a) cavm_mcsx_bbe_tx_slave_cal_len_t
#define bustype_CAVM_MCSX_BBE_TX_SLAVE_CAL_LEN(a) CSR_TYPE_RSL
#define basename_CAVM_MCSX_BBE_TX_SLAVE_CAL_LEN(a) "MCSX_BBE_TX_SLAVE_CAL_LEN"
#define device_bar_CAVM_MCSX_BBE_TX_SLAVE_CAL_LEN(a) 0x0 /* PF_BAR0 */
#define busnum_CAVM_MCSX_BBE_TX_SLAVE_CAL_LEN(a) (a)
#define arguments_CAVM_MCSX_BBE_TX_SLAVE_CAL_LEN(a) (a),-1,-1,-1

/**
 * Register (RSL) mcs#_bbe_tx_slave_dbg_mux_sel
 *
 * MCS Bbe Tx Slave Dbg Mux Sel Register
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
    if (a<=6)
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
    if (a<=6)
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
 * Register (RSL) mcs#_bbe_tx_slave_padding_ctl
 *
 * MCS Bbe Tx Slave Padding Ctl Register
 */
union cavm_mcsx_bbe_tx_slave_padding_ctl
{
    uint64_t u;
    struct cavm_mcsx_bbe_tx_slave_padding_ctl_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_5_63         : 59;
        uint64_t padding_en            : 1;  /**< [  4:  4](R/W) When set to 1, enable padding of zeroes at the end of packets if the size of
                                                                 output packet less than [MIN_PKT_SIZE]. */
        uint64_t min_pkt_size          : 4;  /**< [  3:  0](R/W) Define the minimum packet size = (4*[MIN_PKT_SIZE]+16)B, with [MIN_PKT_SIZE]
                                                                 ranges from 0x0 to 0xB to support a minimum packet size of 16, 20, 24, ..., 60
                                                                 bytes (values 0xC to 0xF are reserved). If the output packet size is less than
                                                                 the specified minimum and the padding_en bit is set, null bytes will be inserted
                                                                 to the end of the packet to make the packet size equal the minimum. */
#else /* Word 0 - Little Endian */
        uint64_t min_pkt_size          : 4;  /**< [  3:  0](R/W) Define the minimum packet size = (4*[MIN_PKT_SIZE]+16)B, with [MIN_PKT_SIZE]
                                                                 ranges from 0x0 to 0xB to support a minimum packet size of 16, 20, 24, ..., 60
                                                                 bytes (values 0xC to 0xF are reserved). If the output packet size is less than
                                                                 the specified minimum and the padding_en bit is set, null bytes will be inserted
                                                                 to the end of the packet to make the packet size equal the minimum. */
        uint64_t padding_en            : 1;  /**< [  4:  4](R/W) When set to 1, enable padding of zeroes at the end of packets if the size of
                                                                 output packet less than [MIN_PKT_SIZE]. */
        uint64_t reserved_5_63         : 59;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_mcsx_bbe_tx_slave_padding_ctl_s cn; */
};
typedef union cavm_mcsx_bbe_tx_slave_padding_ctl cavm_mcsx_bbe_tx_slave_padding_ctl_t;

static inline uint64_t CAVM_MCSX_BBE_TX_SLAVE_PADDING_CTL(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_MCSX_BBE_TX_SLAVE_PADDING_CTL(uint64_t a)
{
    if (a<=6)
        return 0x87e080000210ll + 0x1000000ll * ((a) & 0x7);
    __cavm_csr_fatal("MCSX_BBE_TX_SLAVE_PADDING_CTL", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_MCSX_BBE_TX_SLAVE_PADDING_CTL(a) cavm_mcsx_bbe_tx_slave_padding_ctl_t
#define bustype_CAVM_MCSX_BBE_TX_SLAVE_PADDING_CTL(a) CSR_TYPE_RSL
#define basename_CAVM_MCSX_BBE_TX_SLAVE_PADDING_CTL(a) "MCSX_BBE_TX_SLAVE_PADDING_CTL"
#define device_bar_CAVM_MCSX_BBE_TX_SLAVE_PADDING_CTL(a) 0x0 /* PF_BAR0 */
#define busnum_CAVM_MCSX_BBE_TX_SLAVE_PADDING_CTL(a) (a)
#define arguments_CAVM_MCSX_BBE_TX_SLAVE_PADDING_CTL(a) (a),-1,-1,-1

/**
 * Register (RSL) mcs#_bbe_tx_slave_preempt_filter_credit_corr_count#
 *
 * MCS Bbe Tx Slave Preempt Filter Credit Corr Count Register
 */
union cavm_mcsx_bbe_tx_slave_preempt_filter_credit_corr_countx
{
    uint64_t u;
    struct cavm_mcsx_bbe_tx_slave_preempt_filter_credit_corr_countx_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_6_63         : 58;
        uint64_t credit_corr_count     : 6;  /**< [  5:  0](RO) Credit correction count from the Early Preempt Filter when it removes data due
                                                                 to violation of Early Preemption Rule. */
#else /* Word 0 - Little Endian */
        uint64_t credit_corr_count     : 6;  /**< [  5:  0](RO) Credit correction count from the Early Preempt Filter when it removes data due
                                                                 to violation of Early Preemption Rule. */
        uint64_t reserved_6_63         : 58;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_mcsx_bbe_tx_slave_preempt_filter_credit_corr_countx_s cn; */
};
typedef union cavm_mcsx_bbe_tx_slave_preempt_filter_credit_corr_countx cavm_mcsx_bbe_tx_slave_preempt_filter_credit_corr_countx_t;

static inline uint64_t CAVM_MCSX_BBE_TX_SLAVE_PREEMPT_FILTER_CREDIT_CORR_COUNTX(uint64_t a, uint64_t b) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_MCSX_BBE_TX_SLAVE_PREEMPT_FILTER_CREDIT_CORR_COUNTX(uint64_t a, uint64_t b)
{
    if ((a<=6) && (b<=3))
        return 0x87e080000218ll + 0x1000000ll * ((a) & 0x7) + 0x10ll * ((b) & 0x3);
    __cavm_csr_fatal("MCSX_BBE_TX_SLAVE_PREEMPT_FILTER_CREDIT_CORR_COUNTX", 2, a, b, 0, 0, 0, 0);
}

#define typedef_CAVM_MCSX_BBE_TX_SLAVE_PREEMPT_FILTER_CREDIT_CORR_COUNTX(a,b) cavm_mcsx_bbe_tx_slave_preempt_filter_credit_corr_countx_t
#define bustype_CAVM_MCSX_BBE_TX_SLAVE_PREEMPT_FILTER_CREDIT_CORR_COUNTX(a,b) CSR_TYPE_RSL
#define basename_CAVM_MCSX_BBE_TX_SLAVE_PREEMPT_FILTER_CREDIT_CORR_COUNTX(a,b) "MCSX_BBE_TX_SLAVE_PREEMPT_FILTER_CREDIT_CORR_COUNTX"
#define device_bar_CAVM_MCSX_BBE_TX_SLAVE_PREEMPT_FILTER_CREDIT_CORR_COUNTX(a,b) 0x0 /* PF_BAR0 */
#define busnum_CAVM_MCSX_BBE_TX_SLAVE_PREEMPT_FILTER_CREDIT_CORR_COUNTX(a,b) (a)
#define arguments_CAVM_MCSX_BBE_TX_SLAVE_PREEMPT_FILTER_CREDIT_CORR_COUNTX(a,b) (a),(b),-1,-1

/**
 * Register (RSL) mcs#_clk_active_pc
 *
 * MCS clk domain ACTIVE PC Register
 * Counts the conditional clocks under clk domain for power management.
 */
union cavm_mcsx_clk_active_pc
{
    uint64_t u;
    struct cavm_mcsx_clk_active_pc_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t cnt                   : 64; /**< [ 63:  0](R/W/H) Count of conditional clock cycles since reset for clk domain. */
#else /* Word 0 - Little Endian */
        uint64_t cnt                   : 64; /**< [ 63:  0](R/W/H) Count of conditional clock cycles since reset for clk domain. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_mcsx_clk_active_pc_s cn; */
};
typedef union cavm_mcsx_clk_active_pc cavm_mcsx_clk_active_pc_t;

static inline uint64_t CAVM_MCSX_CLK_ACTIVE_PC(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_MCSX_CLK_ACTIVE_PC(uint64_t a)
{
    if (a<=6)
        return 0x87e080020170ll + 0x1000000ll * ((a) & 0x7);
    __cavm_csr_fatal("MCSX_CLK_ACTIVE_PC", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_MCSX_CLK_ACTIVE_PC(a) cavm_mcsx_clk_active_pc_t
#define bustype_CAVM_MCSX_CLK_ACTIVE_PC(a) CSR_TYPE_RSL
#define basename_CAVM_MCSX_CLK_ACTIVE_PC(a) "MCSX_CLK_ACTIVE_PC"
#define device_bar_CAVM_MCSX_CLK_ACTIVE_PC(a) 0x0 /* PF_BAR0 */
#define busnum_CAVM_MCSX_CLK_ACTIVE_PC(a) (a)
#define arguments_CAVM_MCSX_CLK_ACTIVE_PC(a) (a),-1,-1,-1

/**
 * Register (RSL) mcs#_cpm_rx_slave_cpm_rx_int
 *
 * MCS Cpm Rx Slave Cpm Rx Int Register
 */
union cavm_mcsx_cpm_rx_slave_cpm_rx_int
{
    uint64_t u;
    struct cavm_mcsx_cpm_rx_slave_cpm_rx_int_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_9_63         : 55;
        uint64_t sc_expiry_actual_timeout : 1;/**< [  8:  8](R/W) An active SC/SA has reached its sc_actual_timeout threshold.  See the leaf
                                                                 interrupt register to determine which SC fired. */
        uint64_t sc_expiry_pre_timeout : 1;  /**< [  7:  7](R/W) An active SC/SA has reached its sc_pre_timeout threshold.  See the leaf
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
        uint64_t sc_expiry_pre_timeout : 1;  /**< [  7:  7](R/W) An active SC/SA has reached its sc_pre_timeout threshold.  See the leaf
                                                                 interrupt register to determine which SC fired. */
        uint64_t sc_expiry_actual_timeout : 1;/**< [  8:  8](R/W) An active SC/SA has reached its sc_actual_timeout threshold.  See the leaf
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
    if (a<=6)
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
 */
union cavm_mcsx_cpm_rx_slave_cpm_rx_int_enb
{
    uint64_t u;
    struct cavm_mcsx_cpm_rx_slave_cpm_rx_int_enb_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_9_63         : 55;
        uint64_t sc_expiry_actual_timeout_enb : 1;/**< [  8:  8](R/W) An active SC/SA has reached its sc_actual_timeout threshold.  See the leaf
                                                                 interrupt register to determine which SC fired. */
        uint64_t sc_expiry_pre_timeout_enb : 1;/**< [  7:  7](R/W) An active SC/SA has reached its sc_pre_timeout threshold.  See the leaf
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
        uint64_t sc_expiry_pre_timeout_enb : 1;/**< [  7:  7](R/W) An active SC/SA has reached its sc_pre_timeout threshold.  See the leaf
                                                                 interrupt register to determine which SC fired. */
        uint64_t sc_expiry_actual_timeout_enb : 1;/**< [  8:  8](R/W) An active SC/SA has reached its sc_actual_timeout threshold.  See the leaf
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
    if (a<=6)
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
 */
union cavm_mcsx_cpm_rx_slave_cpm_rx_int_intr_rw
{
    uint64_t u;
    struct cavm_mcsx_cpm_rx_slave_cpm_rx_int_intr_rw_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_9_63         : 55;
        uint64_t sc_expiry_actual_timeout : 1;/**< [  8:  8](R/W) An active SC/SA has reached its sc_actual_timeout threshold.  See the leaf
                                                                 interrupt register to determine which SC fired. */
        uint64_t sc_expiry_pre_timeout : 1;  /**< [  7:  7](R/W) An active SC/SA has reached its sc_pre_timeout threshold.  See the leaf
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
        uint64_t sc_expiry_pre_timeout : 1;  /**< [  7:  7](R/W) An active SC/SA has reached its sc_pre_timeout threshold.  See the leaf
                                                                 interrupt register to determine which SC fired. */
        uint64_t sc_expiry_actual_timeout : 1;/**< [  8:  8](R/W) An active SC/SA has reached its sc_actual_timeout threshold.  See the leaf
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
    if (a<=6)
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
 */
union cavm_mcsx_cpm_rx_slave_cpm_rx_int_raw
{
    uint64_t u;
    struct cavm_mcsx_cpm_rx_slave_cpm_rx_int_raw_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_9_63         : 55;
        uint64_t sc_expiry_actual_timeout : 1;/**< [  8:  8](RO) An active SC/SA has reached its sc_actual_timeout threshold.  See the leaf
                                                                 interrupt register to determine which SC fired. */
        uint64_t sc_expiry_pre_timeout : 1;  /**< [  7:  7](RO) An active SC/SA has reached its sc_pre_timeout threshold.  See the leaf
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
        uint64_t sc_expiry_pre_timeout : 1;  /**< [  7:  7](RO) An active SC/SA has reached its sc_pre_timeout threshold.  See the leaf
                                                                 interrupt register to determine which SC fired. */
        uint64_t sc_expiry_actual_timeout : 1;/**< [  8:  8](RO) An active SC/SA has reached its sc_actual_timeout threshold.  See the leaf
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
    if (a<=6)
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
    if (a<=6)
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
    if (a<=6)
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
    if (a<=6)
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
 * Register (RSL) mcs#_cpm_rx_slave_enable_rxmcs_insertion#
 *
 * MCS Cpm Rx Slave Enable Rxmcs Insertion Register
 */
union cavm_mcsx_cpm_rx_slave_enable_rxmcs_insertionx
{
    uint64_t u;
    struct cavm_mcsx_cpm_rx_slave_enable_rxmcs_insertionx_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_2_63         : 62;
        uint64_t insert_on_kay_ctrl    : 1;  /**< [  1:  1](R/W) Enables insertion of 4B Rx-MCS header into KaY packet or non-Kay control packet. */
        uint64_t insert_on_err         : 1;  /**< [  0:  0](R/W) Enables insertion of 4B Rx-MCS header into error/exception packet if the
                                                                 error/exception condition is enabled for punt. */
#else /* Word 0 - Little Endian */
        uint64_t insert_on_err         : 1;  /**< [  0:  0](R/W) Enables insertion of 4B Rx-MCS header into error/exception packet if the
                                                                 error/exception condition is enabled for punt. */
        uint64_t insert_on_kay_ctrl    : 1;  /**< [  1:  1](R/W) Enables insertion of 4B Rx-MCS header into KaY packet or non-Kay control packet. */
        uint64_t reserved_2_63         : 62;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_mcsx_cpm_rx_slave_enable_rxmcs_insertionx_s cn; */
};
typedef union cavm_mcsx_cpm_rx_slave_enable_rxmcs_insertionx cavm_mcsx_cpm_rx_slave_enable_rxmcs_insertionx_t;

static inline uint64_t CAVM_MCSX_CPM_RX_SLAVE_ENABLE_RXMCS_INSERTIONX(uint64_t a, uint64_t b) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_MCSX_CPM_RX_SLAVE_ENABLE_RXMCS_INSERTIONX(uint64_t a, uint64_t b)
{
    if ((a<=6) && (b<=3))
        return 0x87e080000b48ll + 0x1000000ll * ((a) & 0x7) + 0x10ll * ((b) & 0x3);
    __cavm_csr_fatal("MCSX_CPM_RX_SLAVE_ENABLE_RXMCS_INSERTIONX", 2, a, b, 0, 0, 0, 0);
}

#define typedef_CAVM_MCSX_CPM_RX_SLAVE_ENABLE_RXMCS_INSERTIONX(a,b) cavm_mcsx_cpm_rx_slave_enable_rxmcs_insertionx_t
#define bustype_CAVM_MCSX_CPM_RX_SLAVE_ENABLE_RXMCS_INSERTIONX(a,b) CSR_TYPE_RSL
#define basename_CAVM_MCSX_CPM_RX_SLAVE_ENABLE_RXMCS_INSERTIONX(a,b) "MCSX_CPM_RX_SLAVE_ENABLE_RXMCS_INSERTIONX"
#define device_bar_CAVM_MCSX_CPM_RX_SLAVE_ENABLE_RXMCS_INSERTIONX(a,b) 0x0 /* PF_BAR0 */
#define busnum_CAVM_MCSX_CPM_RX_SLAVE_ENABLE_RXMCS_INSERTIONX(a,b) (a)
#define arguments_CAVM_MCSX_CPM_RX_SLAVE_ENABLE_RXMCS_INSERTIONX(a,b) (a),(b),-1,-1

/**
 * Register (RSL) mcs#_cpm_rx_slave_flowid_tcam_data_0#
 *
 * MCS Cpm Rx Slave Flowid Tcam Data 0 Register
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
    if ((a<=6) && (b<=63))
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
 */
union cavm_mcsx_cpm_rx_slave_flowid_tcam_data_1x
{
    uint64_t u;
    struct cavm_mcsx_cpm_rx_slave_flowid_tcam_data_1x_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t outer_tag_id          : 16; /**< [ 63: 48](R/W) Outermost VLAN ID {8'd0, VLAN_ID[11:0]}, or 20-bit MPLS label. */
        uint64_t ether_type            : 16; /**< [ 47: 32](R/W) First E-Type found in the packet that doesn't match one of the preconfigured
                                                                 Custom, VLAN, or MPLS values. */
        uint64_t mac_sa                : 32; /**< [ 31:  0](R/W) MAC SA field extracted from the packet */
#else /* Word 0 - Little Endian */
        uint64_t mac_sa                : 32; /**< [ 31:  0](R/W) MAC SA field extracted from the packet */
        uint64_t ether_type            : 16; /**< [ 47: 32](R/W) First E-Type found in the packet that doesn't match one of the preconfigured
                                                                 Custom, VLAN, or MPLS values. */
        uint64_t outer_tag_id          : 16; /**< [ 63: 48](R/W) Outermost VLAN ID {8'd0, VLAN_ID[11:0]}, or 20-bit MPLS label. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_mcsx_cpm_rx_slave_flowid_tcam_data_1x_s cn; */
};
typedef union cavm_mcsx_cpm_rx_slave_flowid_tcam_data_1x cavm_mcsx_cpm_rx_slave_flowid_tcam_data_1x_t;

static inline uint64_t CAVM_MCSX_CPM_RX_SLAVE_FLOWID_TCAM_DATA_1X(uint64_t a, uint64_t b) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_MCSX_CPM_RX_SLAVE_FLOWID_TCAM_DATA_1X(uint64_t a, uint64_t b)
{
    if ((a<=6) && (b<=63))
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
                                                                 0: No VLAN or MPLS
                                                                 1: Single VLAN
                                                                 2: Dual VLAN
                                                                 3: MPLS
                                                                 4: Single VLAN followed by MPLS
                                                                 5: Dual VLAN followed by MPLS
                                                                 6: Unsupported type (greater than2 VLAN or greater than4 MPLS)
                                                                 7-14: Reserved for future use
                                                                 15: Invalid (any parsing error) */
        uint64_t tag_match_bitmap      : 8;  /**< [ 55: 48](R/W) Maps 1 to 1 with the set of configurable Etype CSRs and set when the associated
                                                                 E-Type (or TPID) was found in the first 6 tags of the packet. */
        uint64_t bonus_data            : 16; /**< [ 47: 32](R/W) 2 bytes of additional bonus data extracted from one of the custom tags. */
        uint64_t second_outer_priority : 4;  /**< [ 31: 28](R/W) 2nd Outermost VLAN {PCP/Pbits, DE/CFI} or {1'b0, EXP} for MPLS. */
        uint64_t second_outer_tag_id   : 20; /**< [ 27:  8](R/W) 2nd Outermost VLAN ID {8'd0, VLAN_ID[11:0]}, or 20-bit MPLS label. */
        uint64_t outer_priority        : 4;  /**< [  7:  4](R/W) Outermost VLAN {PCP/Pbits, DE/CFI} or {1'b0, EXP} for MPLS. */
        uint64_t outer_tag_id          : 4;  /**< [  3:  0](R/W) Outermost VLAN ID {8'd0, VLAN_ID[11:0]}, or 20-bit MPLS label. */
#else /* Word 0 - Little Endian */
        uint64_t outer_tag_id          : 4;  /**< [  3:  0](R/W) Outermost VLAN ID {8'd0, VLAN_ID[11:0]}, or 20-bit MPLS label. */
        uint64_t outer_priority        : 4;  /**< [  7:  4](R/W) Outermost VLAN {PCP/Pbits, DE/CFI} or {1'b0, EXP} for MPLS. */
        uint64_t second_outer_tag_id   : 20; /**< [ 27:  8](R/W) 2nd Outermost VLAN ID {8'd0, VLAN_ID[11:0]}, or 20-bit MPLS label. */
        uint64_t second_outer_priority : 4;  /**< [ 31: 28](R/W) 2nd Outermost VLAN {PCP/Pbits, DE/CFI} or {1'b0, EXP} for MPLS. */
        uint64_t bonus_data            : 16; /**< [ 47: 32](R/W) 2 bytes of additional bonus data extracted from one of the custom tags. */
        uint64_t tag_match_bitmap      : 8;  /**< [ 55: 48](R/W) Maps 1 to 1 with the set of configurable Etype CSRs and set when the associated
                                                                 E-Type (or TPID) was found in the first 6 tags of the packet. */
        uint64_t packet_type           : 4;  /**< [ 59: 56](R/W) Encoded Packet Type from the parser:
                                                                 0: No VLAN or MPLS
                                                                 1: Single VLAN
                                                                 2: Dual VLAN
                                                                 3: MPLS
                                                                 4: Single VLAN followed by MPLS
                                                                 5: Dual VLAN followed by MPLS
                                                                 6: Unsupported type (greater than2 VLAN or greater than4 MPLS)
                                                                 7-14: Reserved for future use
                                                                 15: Invalid (any parsing error) */
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
    if ((a<=6) && (b<=63))
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
        uint64_t express               : 1;  /**< [  9:  9](R/W) Express packet. */
        uint64_t num_tags              : 7;  /**< [  8:  2](R/W) Number of VLAN tags, CUSTOM tags, or MPLS labels before the SecTAG, excluding
                                                                 the Rx/Tx-MCS header tags.
                                                                 Bit 0: no tags/labels before SecTAG
                                                                 Bit 1: 1 tag/label before SecTAG
                                                                 Bit 2: 2 tags/labels before SecTAG
                                                                 ...
                                                                 Bit 6: 6 or more tags/labels before SecTAG. */
        uint64_t inner_vlan_type       : 2;  /**< [  1:  0](R/W) Encoded value indicating which VLAN TPID value matched for the second outermost VLAN Tag. */
#else /* Word 0 - Little Endian */
        uint64_t inner_vlan_type       : 2;  /**< [  1:  0](R/W) Encoded value indicating which VLAN TPID value matched for the second outermost VLAN Tag. */
        uint64_t num_tags              : 7;  /**< [  8:  2](R/W) Number of VLAN tags, CUSTOM tags, or MPLS labels before the SecTAG, excluding
                                                                 the Rx/Tx-MCS header tags.
                                                                 Bit 0: no tags/labels before SecTAG
                                                                 Bit 1: 1 tag/label before SecTAG
                                                                 Bit 2: 2 tags/labels before SecTAG
                                                                 ...
                                                                 Bit 6: 6 or more tags/labels before SecTAG. */
        uint64_t express               : 1;  /**< [  9:  9](R/W) Express packet. */
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
    if ((a<=6) && (b<=63))
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
 */
union cavm_mcsx_cpm_rx_slave_flowid_tcam_mask_0x
{
    uint64_t u;
    struct cavm_mcsx_cpm_rx_slave_flowid_tcam_mask_0x_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t mac_sa                : 16; /**< [ 63: 48](R/W) Set bits to 1 to mask/exclude corresponding flowid_tcam_data bit from compare. */
        uint64_t mac_da                : 48; /**< [ 47:  0](R/W) Set bits to 1 to mask/exclude corresponding flowid_tcam_data bit from compare. */
#else /* Word 0 - Little Endian */
        uint64_t mac_da                : 48; /**< [ 47:  0](R/W) Set bits to 1 to mask/exclude corresponding flowid_tcam_data bit from compare. */
        uint64_t mac_sa                : 16; /**< [ 63: 48](R/W) Set bits to 1 to mask/exclude corresponding flowid_tcam_data bit from compare. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_mcsx_cpm_rx_slave_flowid_tcam_mask_0x_s cn; */
};
typedef union cavm_mcsx_cpm_rx_slave_flowid_tcam_mask_0x cavm_mcsx_cpm_rx_slave_flowid_tcam_mask_0x_t;

static inline uint64_t CAVM_MCSX_CPM_RX_SLAVE_FLOWID_TCAM_MASK_0X(uint64_t a, uint64_t b) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_MCSX_CPM_RX_SLAVE_FLOWID_TCAM_MASK_0X(uint64_t a, uint64_t b)
{
    if ((a<=6) && (b<=63))
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
 */
union cavm_mcsx_cpm_rx_slave_flowid_tcam_mask_1x
{
    uint64_t u;
    struct cavm_mcsx_cpm_rx_slave_flowid_tcam_mask_1x_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t outer_tag_id          : 16; /**< [ 63: 48](R/W) Set bits to 1 to mask/exclude corresponding flowid_tcam_data bit from compare. */
        uint64_t ether_type            : 16; /**< [ 47: 32](R/W) Set bits to 1 to mask/exclude corresponding flowid_tcam_data bit from compare. */
        uint64_t mac_sa                : 32; /**< [ 31:  0](R/W) Set bits to 1 to mask/exclude corresponding flowid_tcam_data bit from compare. */
#else /* Word 0 - Little Endian */
        uint64_t mac_sa                : 32; /**< [ 31:  0](R/W) Set bits to 1 to mask/exclude corresponding flowid_tcam_data bit from compare. */
        uint64_t ether_type            : 16; /**< [ 47: 32](R/W) Set bits to 1 to mask/exclude corresponding flowid_tcam_data bit from compare. */
        uint64_t outer_tag_id          : 16; /**< [ 63: 48](R/W) Set bits to 1 to mask/exclude corresponding flowid_tcam_data bit from compare. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_mcsx_cpm_rx_slave_flowid_tcam_mask_1x_s cn; */
};
typedef union cavm_mcsx_cpm_rx_slave_flowid_tcam_mask_1x cavm_mcsx_cpm_rx_slave_flowid_tcam_mask_1x_t;

static inline uint64_t CAVM_MCSX_CPM_RX_SLAVE_FLOWID_TCAM_MASK_1X(uint64_t a, uint64_t b) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_MCSX_CPM_RX_SLAVE_FLOWID_TCAM_MASK_1X(uint64_t a, uint64_t b)
{
    if ((a<=6) && (b<=63))
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
 */
union cavm_mcsx_cpm_rx_slave_flowid_tcam_mask_2x
{
    uint64_t u;
    struct cavm_mcsx_cpm_rx_slave_flowid_tcam_mask_2x_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t inner_vlan_type       : 1;  /**< [ 63: 63](R/W) Set bits to 1 to mask/exclude corresponding flowid_tcam_data bit from compare. */
        uint64_t outer_vlan_type       : 3;  /**< [ 62: 60](R/W) Set bits to 1 to mask/exclude corresponding flowid_tcam_data bit from compare. */
        uint64_t packet_type           : 4;  /**< [ 59: 56](R/W) Set bits to 1 to mask/exclude corresponding flowid_tcam_data bit from compare. */
        uint64_t tag_match_bitmap      : 8;  /**< [ 55: 48](R/W) Set bits to 1 to mask/exclude corresponding flowid_tcam_data bit from compare. */
        uint64_t bonus_data            : 16; /**< [ 47: 32](R/W) Set bits to 1 to mask/exclude corresponding flowid_tcam_data bit from compare. */
        uint64_t second_outer_priority : 4;  /**< [ 31: 28](R/W) Set bits to 1 to mask/exclude corresponding flowid_tcam_data bit from compare. */
        uint64_t second_outer_tag_id   : 20; /**< [ 27:  8](R/W) Set bits to 1 to mask/exclude corresponding flowid_tcam_data bit from compare. */
        uint64_t outer_priority        : 4;  /**< [  7:  4](R/W) Set bits to 1 to mask/exclude corresponding flowid_tcam_data bit from compare. */
        uint64_t outer_tag_id          : 4;  /**< [  3:  0](R/W) Set bits to 1 to mask/exclude corresponding flowid_tcam_data bit from compare. */
#else /* Word 0 - Little Endian */
        uint64_t outer_tag_id          : 4;  /**< [  3:  0](R/W) Set bits to 1 to mask/exclude corresponding flowid_tcam_data bit from compare. */
        uint64_t outer_priority        : 4;  /**< [  7:  4](R/W) Set bits to 1 to mask/exclude corresponding flowid_tcam_data bit from compare. */
        uint64_t second_outer_tag_id   : 20; /**< [ 27:  8](R/W) Set bits to 1 to mask/exclude corresponding flowid_tcam_data bit from compare. */
        uint64_t second_outer_priority : 4;  /**< [ 31: 28](R/W) Set bits to 1 to mask/exclude corresponding flowid_tcam_data bit from compare. */
        uint64_t bonus_data            : 16; /**< [ 47: 32](R/W) Set bits to 1 to mask/exclude corresponding flowid_tcam_data bit from compare. */
        uint64_t tag_match_bitmap      : 8;  /**< [ 55: 48](R/W) Set bits to 1 to mask/exclude corresponding flowid_tcam_data bit from compare. */
        uint64_t packet_type           : 4;  /**< [ 59: 56](R/W) Set bits to 1 to mask/exclude corresponding flowid_tcam_data bit from compare. */
        uint64_t outer_vlan_type       : 3;  /**< [ 62: 60](R/W) Set bits to 1 to mask/exclude corresponding flowid_tcam_data bit from compare. */
        uint64_t inner_vlan_type       : 1;  /**< [ 63: 63](R/W) Set bits to 1 to mask/exclude corresponding flowid_tcam_data bit from compare. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_mcsx_cpm_rx_slave_flowid_tcam_mask_2x_s cn; */
};
typedef union cavm_mcsx_cpm_rx_slave_flowid_tcam_mask_2x cavm_mcsx_cpm_rx_slave_flowid_tcam_mask_2x_t;

static inline uint64_t CAVM_MCSX_CPM_RX_SLAVE_FLOWID_TCAM_MASK_2X(uint64_t a, uint64_t b) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_MCSX_CPM_RX_SLAVE_FLOWID_TCAM_MASK_2X(uint64_t a, uint64_t b)
{
    if ((a<=6) && (b<=63))
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
 */
union cavm_mcsx_cpm_rx_slave_flowid_tcam_mask_3x
{
    uint64_t u;
    struct cavm_mcsx_cpm_rx_slave_flowid_tcam_mask_3x_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_16_63        : 48;
        uint64_t flowid_user_field     : 4;  /**< [ 15: 12](R/W) Set bits to 1 to mask/exclude corresponding flowid_tcam_data bit from compare. */
        uint64_t port                  : 2;  /**< [ 11: 10](R/W) Set bits to 1 to mask/exclude corresponding flowid_tcam_data bit from compare. */
        uint64_t express               : 1;  /**< [  9:  9](R/W) Set bits to 1 to mask/exclude corresponding flowid_tcam_data bit from compare. */
        uint64_t num_tags              : 7;  /**< [  8:  2](R/W) Set bits to 1 to mask/exclude corresponding flowid_tcam_data bit from compare. */
        uint64_t inner_vlan_type       : 2;  /**< [  1:  0](R/W) Set bits to 1 to mask/exclude corresponding flowid_tcam_data bit from compare. */
#else /* Word 0 - Little Endian */
        uint64_t inner_vlan_type       : 2;  /**< [  1:  0](R/W) Set bits to 1 to mask/exclude corresponding flowid_tcam_data bit from compare. */
        uint64_t num_tags              : 7;  /**< [  8:  2](R/W) Set bits to 1 to mask/exclude corresponding flowid_tcam_data bit from compare. */
        uint64_t express               : 1;  /**< [  9:  9](R/W) Set bits to 1 to mask/exclude corresponding flowid_tcam_data bit from compare. */
        uint64_t port                  : 2;  /**< [ 11: 10](R/W) Set bits to 1 to mask/exclude corresponding flowid_tcam_data bit from compare. */
        uint64_t flowid_user_field     : 4;  /**< [ 15: 12](R/W) Set bits to 1 to mask/exclude corresponding flowid_tcam_data bit from compare. */
        uint64_t reserved_16_63        : 48;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_mcsx_cpm_rx_slave_flowid_tcam_mask_3x_s cn; */
};
typedef union cavm_mcsx_cpm_rx_slave_flowid_tcam_mask_3x cavm_mcsx_cpm_rx_slave_flowid_tcam_mask_3x_t;

static inline uint64_t CAVM_MCSX_CPM_RX_SLAVE_FLOWID_TCAM_MASK_3X(uint64_t a, uint64_t b) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_MCSX_CPM_RX_SLAVE_FLOWID_TCAM_MASK_3X(uint64_t a, uint64_t b)
{
    if ((a<=6) && (b<=63))
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
    if ((a<=6) && (b<=3))
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
    if ((a<=6) && (b<=3))
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
    if ((a<=6) && (b<=1))
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
    if (a<=6)
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
    if (a<=6)
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
 */
union cavm_mcsx_cpm_rx_slave_rx_etype
{
    uint64_t u;
    struct cavm_mcsx_cpm_rx_slave_rx_etype_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_48_63        : 16;
        uint64_t rx_mcs_hdr_etype      : 16; /**< [ 47: 32](R/W) MCS header E-type to insert. */
        uint64_t rx_sectag_etype2      : 16; /**< [ 31: 16](R/W) SecTag ETYPE pattern 2 to match on. */
        uint64_t rx_sectag_etype1      : 16; /**< [ 15:  0](R/W) SecTag ETYPE pattern 1 to match on. */
#else /* Word 0 - Little Endian */
        uint64_t rx_sectag_etype1      : 16; /**< [ 15:  0](R/W) SecTag ETYPE pattern 1 to match on. */
        uint64_t rx_sectag_etype2      : 16; /**< [ 31: 16](R/W) SecTag ETYPE pattern 2 to match on. */
        uint64_t rx_mcs_hdr_etype      : 16; /**< [ 47: 32](R/W) MCS header E-type to insert. */
        uint64_t reserved_48_63        : 16;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_mcsx_cpm_rx_slave_rx_etype_s cn; */
};
typedef union cavm_mcsx_cpm_rx_slave_rx_etype cavm_mcsx_cpm_rx_slave_rx_etype_t;

static inline uint64_t CAVM_MCSX_CPM_RX_SLAVE_RX_ETYPE(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_MCSX_CPM_RX_SLAVE_RX_ETYPE(uint64_t a)
{
    if (a<=6)
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
    if (a<=6)
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
 * Register (RSL) mcs#_cpm_rx_slave_rx_mcs_base_port
 *
 * MCS Cpm Rx Slave Rx Mcs Base Port Register
 */
union cavm_mcsx_cpm_rx_slave_rx_mcs_base_port
{
    uint64_t u;
    struct cavm_mcsx_cpm_rx_slave_rx_mcs_base_port_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_8_63         : 56;
        uint64_t rx_mcs_base_port      : 8;  /**< [  7:  0](R/W) Rx MCS header base port. */
#else /* Word 0 - Little Endian */
        uint64_t rx_mcs_base_port      : 8;  /**< [  7:  0](R/W) Rx MCS header base port. */
        uint64_t reserved_8_63         : 56;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_mcsx_cpm_rx_slave_rx_mcs_base_port_s cn; */
};
typedef union cavm_mcsx_cpm_rx_slave_rx_mcs_base_port cavm_mcsx_cpm_rx_slave_rx_mcs_base_port_t;

static inline uint64_t CAVM_MCSX_CPM_RX_SLAVE_RX_MCS_BASE_PORT(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_MCSX_CPM_RX_SLAVE_RX_MCS_BASE_PORT(uint64_t a)
{
    if (a<=6)
        return 0x87e080000bc0ll + 0x1000000ll * ((a) & 0x7);
    __cavm_csr_fatal("MCSX_CPM_RX_SLAVE_RX_MCS_BASE_PORT", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_MCSX_CPM_RX_SLAVE_RX_MCS_BASE_PORT(a) cavm_mcsx_cpm_rx_slave_rx_mcs_base_port_t
#define bustype_CAVM_MCSX_CPM_RX_SLAVE_RX_MCS_BASE_PORT(a) CSR_TYPE_RSL
#define basename_CAVM_MCSX_CPM_RX_SLAVE_RX_MCS_BASE_PORT(a) "MCSX_CPM_RX_SLAVE_RX_MCS_BASE_PORT"
#define device_bar_CAVM_MCSX_CPM_RX_SLAVE_RX_MCS_BASE_PORT(a) 0x0 /* PF_BAR0 */
#define busnum_CAVM_MCSX_CPM_RX_SLAVE_RX_MCS_BASE_PORT(a) (a)
#define arguments_CAVM_MCSX_CPM_RX_SLAVE_RX_MCS_BASE_PORT(a) (a),-1,-1,-1

/**
 * Register (RSL) mcs#_cpm_rx_slave_sa_key_lockout#
 *
 * MCS Cpm Rx Slave Sa Key Lockout Register
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
    if ((a<=6) && (b<=1))
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
    if ((a<=6) && (b<=255))
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
    if ((a<=6) && (b<=127))
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
    if ((a<=6) && (b<=127))
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
    if ((a<=6) && (b<=127))
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
    if ((a<=6) && (b<=127))
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
    if ((a<=6) && (b<=127))
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
    if ((a<=6) && (b<=127))
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
    if ((a<=6) && (b<=127))
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
    if ((a<=6) && (b<=127))
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
    if ((a<=6) && (b<=127))
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
    if (a<=6)
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
    if ((a<=6) && (b<=63))
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
    if ((a<=6) && (b<=63))
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
    if (a<=6)
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
 * Register (RSL) mcs#_cpm_rx_slave_sc_expiry_actual_timeout_0
 *
 * MCS Cpm Rx Slave Sc Expiry Actual Timeout 0 Register
 */
union cavm_mcsx_cpm_rx_slave_sc_expiry_actual_timeout_0
{
    uint64_t u;
    struct cavm_mcsx_cpm_rx_slave_sc_expiry_actual_timeout_0_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t sc_expiry_actual_timeout_int : 64;/**< [ 63:  0](R/W) The corresponding SC indicated by the bit that is set has reached its configured
                                                                 actual-timeout threshold. */
#else /* Word 0 - Little Endian */
        uint64_t sc_expiry_actual_timeout_int : 64;/**< [ 63:  0](R/W) The corresponding SC indicated by the bit that is set has reached its configured
                                                                 actual-timeout threshold. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_mcsx_cpm_rx_slave_sc_expiry_actual_timeout_0_s cn; */
};
typedef union cavm_mcsx_cpm_rx_slave_sc_expiry_actual_timeout_0 cavm_mcsx_cpm_rx_slave_sc_expiry_actual_timeout_0_t;

static inline uint64_t CAVM_MCSX_CPM_RX_SLAVE_SC_EXPIRY_ACTUAL_TIMEOUT_0(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_MCSX_CPM_RX_SLAVE_SC_EXPIRY_ACTUAL_TIMEOUT_0(uint64_t a)
{
    if (a<=6)
        return 0x87e080000b18ll + 0x1000000ll * ((a) & 0x7);
    __cavm_csr_fatal("MCSX_CPM_RX_SLAVE_SC_EXPIRY_ACTUAL_TIMEOUT_0", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_MCSX_CPM_RX_SLAVE_SC_EXPIRY_ACTUAL_TIMEOUT_0(a) cavm_mcsx_cpm_rx_slave_sc_expiry_actual_timeout_0_t
#define bustype_CAVM_MCSX_CPM_RX_SLAVE_SC_EXPIRY_ACTUAL_TIMEOUT_0(a) CSR_TYPE_RSL
#define basename_CAVM_MCSX_CPM_RX_SLAVE_SC_EXPIRY_ACTUAL_TIMEOUT_0(a) "MCSX_CPM_RX_SLAVE_SC_EXPIRY_ACTUAL_TIMEOUT_0"
#define device_bar_CAVM_MCSX_CPM_RX_SLAVE_SC_EXPIRY_ACTUAL_TIMEOUT_0(a) 0x0 /* PF_BAR0 */
#define busnum_CAVM_MCSX_CPM_RX_SLAVE_SC_EXPIRY_ACTUAL_TIMEOUT_0(a) (a)
#define arguments_CAVM_MCSX_CPM_RX_SLAVE_SC_EXPIRY_ACTUAL_TIMEOUT_0(a) (a),-1,-1,-1

/**
 * Register (RSL) mcs#_cpm_rx_slave_sc_expiry_actual_timeout_enb_0
 *
 * MCS Cpm Rx Slave Sc Expiry Actual Timeout Enb 0 Register
 */
union cavm_mcsx_cpm_rx_slave_sc_expiry_actual_timeout_enb_0
{
    uint64_t u;
    struct cavm_mcsx_cpm_rx_slave_sc_expiry_actual_timeout_enb_0_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t sc_expiry_actual_timeout_int_enb : 64;/**< [ 63:  0](R/W) The corresponding SC indicated by the bit that is set has reached its configured
                                                                 actual-timeout threshold. */
#else /* Word 0 - Little Endian */
        uint64_t sc_expiry_actual_timeout_int_enb : 64;/**< [ 63:  0](R/W) The corresponding SC indicated by the bit that is set has reached its configured
                                                                 actual-timeout threshold. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_mcsx_cpm_rx_slave_sc_expiry_actual_timeout_enb_0_s cn; */
};
typedef union cavm_mcsx_cpm_rx_slave_sc_expiry_actual_timeout_enb_0 cavm_mcsx_cpm_rx_slave_sc_expiry_actual_timeout_enb_0_t;

static inline uint64_t CAVM_MCSX_CPM_RX_SLAVE_SC_EXPIRY_ACTUAL_TIMEOUT_ENB_0(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_MCSX_CPM_RX_SLAVE_SC_EXPIRY_ACTUAL_TIMEOUT_ENB_0(uint64_t a)
{
    if (a<=6)
        return 0x87e080000b20ll + 0x1000000ll * ((a) & 0x7);
    __cavm_csr_fatal("MCSX_CPM_RX_SLAVE_SC_EXPIRY_ACTUAL_TIMEOUT_ENB_0", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_MCSX_CPM_RX_SLAVE_SC_EXPIRY_ACTUAL_TIMEOUT_ENB_0(a) cavm_mcsx_cpm_rx_slave_sc_expiry_actual_timeout_enb_0_t
#define bustype_CAVM_MCSX_CPM_RX_SLAVE_SC_EXPIRY_ACTUAL_TIMEOUT_ENB_0(a) CSR_TYPE_RSL
#define basename_CAVM_MCSX_CPM_RX_SLAVE_SC_EXPIRY_ACTUAL_TIMEOUT_ENB_0(a) "MCSX_CPM_RX_SLAVE_SC_EXPIRY_ACTUAL_TIMEOUT_ENB_0"
#define device_bar_CAVM_MCSX_CPM_RX_SLAVE_SC_EXPIRY_ACTUAL_TIMEOUT_ENB_0(a) 0x0 /* PF_BAR0 */
#define busnum_CAVM_MCSX_CPM_RX_SLAVE_SC_EXPIRY_ACTUAL_TIMEOUT_ENB_0(a) (a)
#define arguments_CAVM_MCSX_CPM_RX_SLAVE_SC_EXPIRY_ACTUAL_TIMEOUT_ENB_0(a) (a),-1,-1,-1

/**
 * Register (RSL) mcs#_cpm_rx_slave_sc_expiry_actual_timeout_intr_rw_0
 *
 * MCS Cpm Rx Slave Sc Expiry Actual Timeout Intr Rw 0 Register
 */
union cavm_mcsx_cpm_rx_slave_sc_expiry_actual_timeout_intr_rw_0
{
    uint64_t u;
    struct cavm_mcsx_cpm_rx_slave_sc_expiry_actual_timeout_intr_rw_0_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t sc_expiry_actual_timeout_int : 64;/**< [ 63:  0](R/W) The corresponding SC indicated by the bit that is set has reached its configured
                                                                 actual-timeout threshold. */
#else /* Word 0 - Little Endian */
        uint64_t sc_expiry_actual_timeout_int : 64;/**< [ 63:  0](R/W) The corresponding SC indicated by the bit that is set has reached its configured
                                                                 actual-timeout threshold. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_mcsx_cpm_rx_slave_sc_expiry_actual_timeout_intr_rw_0_s cn; */
};
typedef union cavm_mcsx_cpm_rx_slave_sc_expiry_actual_timeout_intr_rw_0 cavm_mcsx_cpm_rx_slave_sc_expiry_actual_timeout_intr_rw_0_t;

static inline uint64_t CAVM_MCSX_CPM_RX_SLAVE_SC_EXPIRY_ACTUAL_TIMEOUT_INTR_RW_0(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_MCSX_CPM_RX_SLAVE_SC_EXPIRY_ACTUAL_TIMEOUT_INTR_RW_0(uint64_t a)
{
    if (a<=6)
        return 0x87e080000b30ll + 0x1000000ll * ((a) & 0x7);
    __cavm_csr_fatal("MCSX_CPM_RX_SLAVE_SC_EXPIRY_ACTUAL_TIMEOUT_INTR_RW_0", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_MCSX_CPM_RX_SLAVE_SC_EXPIRY_ACTUAL_TIMEOUT_INTR_RW_0(a) cavm_mcsx_cpm_rx_slave_sc_expiry_actual_timeout_intr_rw_0_t
#define bustype_CAVM_MCSX_CPM_RX_SLAVE_SC_EXPIRY_ACTUAL_TIMEOUT_INTR_RW_0(a) CSR_TYPE_RSL
#define basename_CAVM_MCSX_CPM_RX_SLAVE_SC_EXPIRY_ACTUAL_TIMEOUT_INTR_RW_0(a) "MCSX_CPM_RX_SLAVE_SC_EXPIRY_ACTUAL_TIMEOUT_INTR_RW_0"
#define device_bar_CAVM_MCSX_CPM_RX_SLAVE_SC_EXPIRY_ACTUAL_TIMEOUT_INTR_RW_0(a) 0x0 /* PF_BAR0 */
#define busnum_CAVM_MCSX_CPM_RX_SLAVE_SC_EXPIRY_ACTUAL_TIMEOUT_INTR_RW_0(a) (a)
#define arguments_CAVM_MCSX_CPM_RX_SLAVE_SC_EXPIRY_ACTUAL_TIMEOUT_INTR_RW_0(a) (a),-1,-1,-1

/**
 * Register (RSL) mcs#_cpm_rx_slave_sc_expiry_actual_timeout_raw_0
 *
 * MCS Cpm Rx Slave Sc Expiry Actual Timeout Raw 0 Register
 */
union cavm_mcsx_cpm_rx_slave_sc_expiry_actual_timeout_raw_0
{
    uint64_t u;
    struct cavm_mcsx_cpm_rx_slave_sc_expiry_actual_timeout_raw_0_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t sc_expiry_actual_timeout_int : 64;/**< [ 63:  0](RO) The corresponding SC indicated by the bit that is set has reached its configured
                                                                 actual-timeout threshold. */
#else /* Word 0 - Little Endian */
        uint64_t sc_expiry_actual_timeout_int : 64;/**< [ 63:  0](RO) The corresponding SC indicated by the bit that is set has reached its configured
                                                                 actual-timeout threshold. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_mcsx_cpm_rx_slave_sc_expiry_actual_timeout_raw_0_s cn; */
};
typedef union cavm_mcsx_cpm_rx_slave_sc_expiry_actual_timeout_raw_0 cavm_mcsx_cpm_rx_slave_sc_expiry_actual_timeout_raw_0_t;

static inline uint64_t CAVM_MCSX_CPM_RX_SLAVE_SC_EXPIRY_ACTUAL_TIMEOUT_RAW_0(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_MCSX_CPM_RX_SLAVE_SC_EXPIRY_ACTUAL_TIMEOUT_RAW_0(uint64_t a)
{
    if (a<=6)
        return 0x87e080000b28ll + 0x1000000ll * ((a) & 0x7);
    __cavm_csr_fatal("MCSX_CPM_RX_SLAVE_SC_EXPIRY_ACTUAL_TIMEOUT_RAW_0", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_MCSX_CPM_RX_SLAVE_SC_EXPIRY_ACTUAL_TIMEOUT_RAW_0(a) cavm_mcsx_cpm_rx_slave_sc_expiry_actual_timeout_raw_0_t
#define bustype_CAVM_MCSX_CPM_RX_SLAVE_SC_EXPIRY_ACTUAL_TIMEOUT_RAW_0(a) CSR_TYPE_RSL
#define basename_CAVM_MCSX_CPM_RX_SLAVE_SC_EXPIRY_ACTUAL_TIMEOUT_RAW_0(a) "MCSX_CPM_RX_SLAVE_SC_EXPIRY_ACTUAL_TIMEOUT_RAW_0"
#define device_bar_CAVM_MCSX_CPM_RX_SLAVE_SC_EXPIRY_ACTUAL_TIMEOUT_RAW_0(a) 0x0 /* PF_BAR0 */
#define busnum_CAVM_MCSX_CPM_RX_SLAVE_SC_EXPIRY_ACTUAL_TIMEOUT_RAW_0(a) (a)
#define arguments_CAVM_MCSX_CPM_RX_SLAVE_SC_EXPIRY_ACTUAL_TIMEOUT_RAW_0(a) (a),-1,-1,-1

/**
 * Register (RSL) mcs#_cpm_rx_slave_sc_expiry_pre_timeout_0
 *
 * MCS Cpm Rx Slave Sc Expiry Pre Timeout 0 Register
 */
union cavm_mcsx_cpm_rx_slave_sc_expiry_pre_timeout_0
{
    uint64_t u;
    struct cavm_mcsx_cpm_rx_slave_sc_expiry_pre_timeout_0_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t sa_expiry_pre_timeout_int : 64;/**< [ 63:  0](R/W) The corresponding SC indicated by the bit that is set has reached its configured
                                                                 pre-timeout threshold. */
#else /* Word 0 - Little Endian */
        uint64_t sa_expiry_pre_timeout_int : 64;/**< [ 63:  0](R/W) The corresponding SC indicated by the bit that is set has reached its configured
                                                                 pre-timeout threshold. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_mcsx_cpm_rx_slave_sc_expiry_pre_timeout_0_s cn; */
};
typedef union cavm_mcsx_cpm_rx_slave_sc_expiry_pre_timeout_0 cavm_mcsx_cpm_rx_slave_sc_expiry_pre_timeout_0_t;

static inline uint64_t CAVM_MCSX_CPM_RX_SLAVE_SC_EXPIRY_PRE_TIMEOUT_0(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_MCSX_CPM_RX_SLAVE_SC_EXPIRY_PRE_TIMEOUT_0(uint64_t a)
{
    if (a<=6)
        return 0x87e080000af8ll + 0x1000000ll * ((a) & 0x7);
    __cavm_csr_fatal("MCSX_CPM_RX_SLAVE_SC_EXPIRY_PRE_TIMEOUT_0", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_MCSX_CPM_RX_SLAVE_SC_EXPIRY_PRE_TIMEOUT_0(a) cavm_mcsx_cpm_rx_slave_sc_expiry_pre_timeout_0_t
#define bustype_CAVM_MCSX_CPM_RX_SLAVE_SC_EXPIRY_PRE_TIMEOUT_0(a) CSR_TYPE_RSL
#define basename_CAVM_MCSX_CPM_RX_SLAVE_SC_EXPIRY_PRE_TIMEOUT_0(a) "MCSX_CPM_RX_SLAVE_SC_EXPIRY_PRE_TIMEOUT_0"
#define device_bar_CAVM_MCSX_CPM_RX_SLAVE_SC_EXPIRY_PRE_TIMEOUT_0(a) 0x0 /* PF_BAR0 */
#define busnum_CAVM_MCSX_CPM_RX_SLAVE_SC_EXPIRY_PRE_TIMEOUT_0(a) (a)
#define arguments_CAVM_MCSX_CPM_RX_SLAVE_SC_EXPIRY_PRE_TIMEOUT_0(a) (a),-1,-1,-1

/**
 * Register (RSL) mcs#_cpm_rx_slave_sc_expiry_pre_timeout_enb_0
 *
 * MCS Cpm Rx Slave Sc Expiry Pre Timeout Enb 0 Register
 */
union cavm_mcsx_cpm_rx_slave_sc_expiry_pre_timeout_enb_0
{
    uint64_t u;
    struct cavm_mcsx_cpm_rx_slave_sc_expiry_pre_timeout_enb_0_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t sa_expiry_pre_timeout_int_enb : 64;/**< [ 63:  0](R/W) The corresponding SC indicated by the bit that is set has reached its configured
                                                                 pre-timeout threshold. */
#else /* Word 0 - Little Endian */
        uint64_t sa_expiry_pre_timeout_int_enb : 64;/**< [ 63:  0](R/W) The corresponding SC indicated by the bit that is set has reached its configured
                                                                 pre-timeout threshold. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_mcsx_cpm_rx_slave_sc_expiry_pre_timeout_enb_0_s cn; */
};
typedef union cavm_mcsx_cpm_rx_slave_sc_expiry_pre_timeout_enb_0 cavm_mcsx_cpm_rx_slave_sc_expiry_pre_timeout_enb_0_t;

static inline uint64_t CAVM_MCSX_CPM_RX_SLAVE_SC_EXPIRY_PRE_TIMEOUT_ENB_0(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_MCSX_CPM_RX_SLAVE_SC_EXPIRY_PRE_TIMEOUT_ENB_0(uint64_t a)
{
    if (a<=6)
        return 0x87e080000b00ll + 0x1000000ll * ((a) & 0x7);
    __cavm_csr_fatal("MCSX_CPM_RX_SLAVE_SC_EXPIRY_PRE_TIMEOUT_ENB_0", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_MCSX_CPM_RX_SLAVE_SC_EXPIRY_PRE_TIMEOUT_ENB_0(a) cavm_mcsx_cpm_rx_slave_sc_expiry_pre_timeout_enb_0_t
#define bustype_CAVM_MCSX_CPM_RX_SLAVE_SC_EXPIRY_PRE_TIMEOUT_ENB_0(a) CSR_TYPE_RSL
#define basename_CAVM_MCSX_CPM_RX_SLAVE_SC_EXPIRY_PRE_TIMEOUT_ENB_0(a) "MCSX_CPM_RX_SLAVE_SC_EXPIRY_PRE_TIMEOUT_ENB_0"
#define device_bar_CAVM_MCSX_CPM_RX_SLAVE_SC_EXPIRY_PRE_TIMEOUT_ENB_0(a) 0x0 /* PF_BAR0 */
#define busnum_CAVM_MCSX_CPM_RX_SLAVE_SC_EXPIRY_PRE_TIMEOUT_ENB_0(a) (a)
#define arguments_CAVM_MCSX_CPM_RX_SLAVE_SC_EXPIRY_PRE_TIMEOUT_ENB_0(a) (a),-1,-1,-1

/**
 * Register (RSL) mcs#_cpm_rx_slave_sc_expiry_pre_timeout_intr_rw_0
 *
 * MCS Cpm Rx Slave Sc Expiry Pre Timeout Intr Rw 0 Register
 */
union cavm_mcsx_cpm_rx_slave_sc_expiry_pre_timeout_intr_rw_0
{
    uint64_t u;
    struct cavm_mcsx_cpm_rx_slave_sc_expiry_pre_timeout_intr_rw_0_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t sa_expiry_pre_timeout_int : 64;/**< [ 63:  0](R/W) The corresponding SC indicated by the bit that is set has reached its configured
                                                                 pre-timeout threshold. */
#else /* Word 0 - Little Endian */
        uint64_t sa_expiry_pre_timeout_int : 64;/**< [ 63:  0](R/W) The corresponding SC indicated by the bit that is set has reached its configured
                                                                 pre-timeout threshold. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_mcsx_cpm_rx_slave_sc_expiry_pre_timeout_intr_rw_0_s cn; */
};
typedef union cavm_mcsx_cpm_rx_slave_sc_expiry_pre_timeout_intr_rw_0 cavm_mcsx_cpm_rx_slave_sc_expiry_pre_timeout_intr_rw_0_t;

static inline uint64_t CAVM_MCSX_CPM_RX_SLAVE_SC_EXPIRY_PRE_TIMEOUT_INTR_RW_0(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_MCSX_CPM_RX_SLAVE_SC_EXPIRY_PRE_TIMEOUT_INTR_RW_0(uint64_t a)
{
    if (a<=6)
        return 0x87e080000b10ll + 0x1000000ll * ((a) & 0x7);
    __cavm_csr_fatal("MCSX_CPM_RX_SLAVE_SC_EXPIRY_PRE_TIMEOUT_INTR_RW_0", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_MCSX_CPM_RX_SLAVE_SC_EXPIRY_PRE_TIMEOUT_INTR_RW_0(a) cavm_mcsx_cpm_rx_slave_sc_expiry_pre_timeout_intr_rw_0_t
#define bustype_CAVM_MCSX_CPM_RX_SLAVE_SC_EXPIRY_PRE_TIMEOUT_INTR_RW_0(a) CSR_TYPE_RSL
#define basename_CAVM_MCSX_CPM_RX_SLAVE_SC_EXPIRY_PRE_TIMEOUT_INTR_RW_0(a) "MCSX_CPM_RX_SLAVE_SC_EXPIRY_PRE_TIMEOUT_INTR_RW_0"
#define device_bar_CAVM_MCSX_CPM_RX_SLAVE_SC_EXPIRY_PRE_TIMEOUT_INTR_RW_0(a) 0x0 /* PF_BAR0 */
#define busnum_CAVM_MCSX_CPM_RX_SLAVE_SC_EXPIRY_PRE_TIMEOUT_INTR_RW_0(a) (a)
#define arguments_CAVM_MCSX_CPM_RX_SLAVE_SC_EXPIRY_PRE_TIMEOUT_INTR_RW_0(a) (a),-1,-1,-1

/**
 * Register (RSL) mcs#_cpm_rx_slave_sc_expiry_pre_timeout_raw_0
 *
 * MCS Cpm Rx Slave Sc Expiry Pre Timeout Raw 0 Register
 */
union cavm_mcsx_cpm_rx_slave_sc_expiry_pre_timeout_raw_0
{
    uint64_t u;
    struct cavm_mcsx_cpm_rx_slave_sc_expiry_pre_timeout_raw_0_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t sa_expiry_pre_timeout_int : 64;/**< [ 63:  0](RO) The corresponding SC indicated by the bit that is set has reached its configured
                                                                 pre-timeout threshold. */
#else /* Word 0 - Little Endian */
        uint64_t sa_expiry_pre_timeout_int : 64;/**< [ 63:  0](RO) The corresponding SC indicated by the bit that is set has reached its configured
                                                                 pre-timeout threshold. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_mcsx_cpm_rx_slave_sc_expiry_pre_timeout_raw_0_s cn; */
};
typedef union cavm_mcsx_cpm_rx_slave_sc_expiry_pre_timeout_raw_0 cavm_mcsx_cpm_rx_slave_sc_expiry_pre_timeout_raw_0_t;

static inline uint64_t CAVM_MCSX_CPM_RX_SLAVE_SC_EXPIRY_PRE_TIMEOUT_RAW_0(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_MCSX_CPM_RX_SLAVE_SC_EXPIRY_PRE_TIMEOUT_RAW_0(uint64_t a)
{
    if (a<=6)
        return 0x87e080000b08ll + 0x1000000ll * ((a) & 0x7);
    __cavm_csr_fatal("MCSX_CPM_RX_SLAVE_SC_EXPIRY_PRE_TIMEOUT_RAW_0", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_MCSX_CPM_RX_SLAVE_SC_EXPIRY_PRE_TIMEOUT_RAW_0(a) cavm_mcsx_cpm_rx_slave_sc_expiry_pre_timeout_raw_0_t
#define bustype_CAVM_MCSX_CPM_RX_SLAVE_SC_EXPIRY_PRE_TIMEOUT_RAW_0(a) CSR_TYPE_RSL
#define basename_CAVM_MCSX_CPM_RX_SLAVE_SC_EXPIRY_PRE_TIMEOUT_RAW_0(a) "MCSX_CPM_RX_SLAVE_SC_EXPIRY_PRE_TIMEOUT_RAW_0"
#define device_bar_CAVM_MCSX_CPM_RX_SLAVE_SC_EXPIRY_PRE_TIMEOUT_RAW_0(a) 0x0 /* PF_BAR0 */
#define busnum_CAVM_MCSX_CPM_RX_SLAVE_SC_EXPIRY_PRE_TIMEOUT_RAW_0(a) (a)
#define arguments_CAVM_MCSX_CPM_RX_SLAVE_SC_EXPIRY_PRE_TIMEOUT_RAW_0(a) (a),-1,-1,-1

/**
 * Register (RSL) mcs#_cpm_rx_slave_sc_timer_config#
 *
 * MCS Cpm Rx Slave Sc Timer Config Register
 */
union cavm_mcsx_cpm_rx_slave_sc_timer_configx
{
    uint64_t u;
    struct cavm_mcsx_cpm_rx_slave_sc_timer_configx_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_13_63        : 51;
        uint64_t enable                : 1;  /**< [ 12: 12](R/W) Configures if the corresponding SC is enabled for SC timer expiry.
                                                                 If the corresponding SC bit is set, then that SC is enabled for SC timer expiry.
                                                                 If not set, then the SC timer will not increment, nor generate any interrupts. */
        uint64_t reserved_6_11         : 6;
        uint64_t actual_timeout_thresh_select : 2;/**< [  5:  4](R/W) Configures which of the 4 possible sc_timer_timeout_thresh[] values is used to
                                                                 generate the corresponding SC's actual_timeout_threshold interrupt. */
        uint64_t reserved_2_3          : 2;
        uint64_t pre_timeout_thresh_select : 2;/**< [  1:  0](R/W) Configures which of the 4 possible sc_timer_timeout_thresh[] values is used to
                                                                 generate the corresponding SC's pre_timeout_threshold interrupt. */
#else /* Word 0 - Little Endian */
        uint64_t pre_timeout_thresh_select : 2;/**< [  1:  0](R/W) Configures which of the 4 possible sc_timer_timeout_thresh[] values is used to
                                                                 generate the corresponding SC's pre_timeout_threshold interrupt. */
        uint64_t reserved_2_3          : 2;
        uint64_t actual_timeout_thresh_select : 2;/**< [  5:  4](R/W) Configures which of the 4 possible sc_timer_timeout_thresh[] values is used to
                                                                 generate the corresponding SC's actual_timeout_threshold interrupt. */
        uint64_t reserved_6_11         : 6;
        uint64_t enable                : 1;  /**< [ 12: 12](R/W) Configures if the corresponding SC is enabled for SC timer expiry.
                                                                 If the corresponding SC bit is set, then that SC is enabled for SC timer expiry.
                                                                 If not set, then the SC timer will not increment, nor generate any interrupts. */
        uint64_t reserved_13_63        : 51;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_mcsx_cpm_rx_slave_sc_timer_configx_s cn; */
};
typedef union cavm_mcsx_cpm_rx_slave_sc_timer_configx cavm_mcsx_cpm_rx_slave_sc_timer_configx_t;

static inline uint64_t CAVM_MCSX_CPM_RX_SLAVE_SC_TIMER_CONFIGX(uint64_t a, uint64_t b) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_MCSX_CPM_RX_SLAVE_SC_TIMER_CONFIGX(uint64_t a, uint64_t b)
{
    if ((a<=6) && (b<=63))
        return 0x87e080005050ll + 0x1000000ll * ((a) & 0x7) + 8ll * ((b) & 0x3f);
    __cavm_csr_fatal("MCSX_CPM_RX_SLAVE_SC_TIMER_CONFIGX", 2, a, b, 0, 0, 0, 0);
}

#define typedef_CAVM_MCSX_CPM_RX_SLAVE_SC_TIMER_CONFIGX(a,b) cavm_mcsx_cpm_rx_slave_sc_timer_configx_t
#define bustype_CAVM_MCSX_CPM_RX_SLAVE_SC_TIMER_CONFIGX(a,b) CSR_TYPE_RSL
#define basename_CAVM_MCSX_CPM_RX_SLAVE_SC_TIMER_CONFIGX(a,b) "MCSX_CPM_RX_SLAVE_SC_TIMER_CONFIGX"
#define device_bar_CAVM_MCSX_CPM_RX_SLAVE_SC_TIMER_CONFIGX(a,b) 0x0 /* PF_BAR0 */
#define busnum_CAVM_MCSX_CPM_RX_SLAVE_SC_TIMER_CONFIGX(a,b) (a)
#define arguments_CAVM_MCSX_CPM_RX_SLAVE_SC_TIMER_CONFIGX(a,b) (a),(b),-1,-1

/**
 * Register (RSL) mcs#_cpm_rx_slave_sc_timer_mem#
 *
 * MCS Cpm Rx Slave Sc Timer Mem Register
 */
union cavm_mcsx_cpm_rx_slave_sc_timer_memx
{
    uint64_t u;
    struct cavm_mcsx_cpm_rx_slave_sc_timer_memx_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_32_63        : 32;
        uint64_t timer                 : 32; /**< [ 31:  0](R/W) 32b per SC timer. */
#else /* Word 0 - Little Endian */
        uint64_t timer                 : 32; /**< [ 31:  0](R/W) 32b per SC timer. */
        uint64_t reserved_32_63        : 32;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_mcsx_cpm_rx_slave_sc_timer_memx_s cn; */
};
typedef union cavm_mcsx_cpm_rx_slave_sc_timer_memx cavm_mcsx_cpm_rx_slave_sc_timer_memx_t;

static inline uint64_t CAVM_MCSX_CPM_RX_SLAVE_SC_TIMER_MEMX(uint64_t a, uint64_t b) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_MCSX_CPM_RX_SLAVE_SC_TIMER_MEMX(uint64_t a, uint64_t b)
{
    if ((a<=6) && (b<=63))
        return 0x87e080005250ll + 0x1000000ll * ((a) & 0x7) + 8ll * ((b) & 0x3f);
    __cavm_csr_fatal("MCSX_CPM_RX_SLAVE_SC_TIMER_MEMX", 2, a, b, 0, 0, 0, 0);
}

#define typedef_CAVM_MCSX_CPM_RX_SLAVE_SC_TIMER_MEMX(a,b) cavm_mcsx_cpm_rx_slave_sc_timer_memx_t
#define bustype_CAVM_MCSX_CPM_RX_SLAVE_SC_TIMER_MEMX(a,b) CSR_TYPE_RSL
#define basename_CAVM_MCSX_CPM_RX_SLAVE_SC_TIMER_MEMX(a,b) "MCSX_CPM_RX_SLAVE_SC_TIMER_MEMX"
#define device_bar_CAVM_MCSX_CPM_RX_SLAVE_SC_TIMER_MEMX(a,b) 0x0 /* PF_BAR0 */
#define busnum_CAVM_MCSX_CPM_RX_SLAVE_SC_TIMER_MEMX(a,b) (a)
#define arguments_CAVM_MCSX_CPM_RX_SLAVE_SC_TIMER_MEMX(a,b) (a),(b),-1,-1

/**
 * Register (RSL) mcs#_cpm_rx_slave_sc_timer_reset_all_go
 *
 * MCS Cpm Rx Slave Sc Timer Reset All Go Register
 */
union cavm_mcsx_cpm_rx_slave_sc_timer_reset_all_go
{
    uint64_t u;
    struct cavm_mcsx_cpm_rx_slave_sc_timer_reset_all_go_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_1_63         : 63;
        uint64_t reset                 : 1;  /**< [  0:  0](R/W) If the corresponding SC bit is set, then all the SC timers will be zeroed out.
                                                                 This bit is cleared by HW once all the corresponding SC timers are cleared. */
#else /* Word 0 - Little Endian */
        uint64_t reset                 : 1;  /**< [  0:  0](R/W) If the corresponding SC bit is set, then all the SC timers will be zeroed out.
                                                                 This bit is cleared by HW once all the corresponding SC timers are cleared. */
        uint64_t reserved_1_63         : 63;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_mcsx_cpm_rx_slave_sc_timer_reset_all_go_s cn; */
};
typedef union cavm_mcsx_cpm_rx_slave_sc_timer_reset_all_go cavm_mcsx_cpm_rx_slave_sc_timer_reset_all_go_t;

static inline uint64_t CAVM_MCSX_CPM_RX_SLAVE_SC_TIMER_RESET_ALL_GO(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_MCSX_CPM_RX_SLAVE_SC_TIMER_RESET_ALL_GO(uint64_t a)
{
    if (a<=6)
        return 0x87e080005010ll + 0x1000000ll * ((a) & 0x7);
    __cavm_csr_fatal("MCSX_CPM_RX_SLAVE_SC_TIMER_RESET_ALL_GO", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_MCSX_CPM_RX_SLAVE_SC_TIMER_RESET_ALL_GO(a) cavm_mcsx_cpm_rx_slave_sc_timer_reset_all_go_t
#define bustype_CAVM_MCSX_CPM_RX_SLAVE_SC_TIMER_RESET_ALL_GO(a) CSR_TYPE_RSL
#define basename_CAVM_MCSX_CPM_RX_SLAVE_SC_TIMER_RESET_ALL_GO(a) "MCSX_CPM_RX_SLAVE_SC_TIMER_RESET_ALL_GO"
#define device_bar_CAVM_MCSX_CPM_RX_SLAVE_SC_TIMER_RESET_ALL_GO(a) 0x0 /* PF_BAR0 */
#define busnum_CAVM_MCSX_CPM_RX_SLAVE_SC_TIMER_RESET_ALL_GO(a) (a)
#define arguments_CAVM_MCSX_CPM_RX_SLAVE_SC_TIMER_RESET_ALL_GO(a) (a),-1,-1,-1

/**
 * Register (RSL) mcs#_cpm_rx_slave_sc_timer_rsvd1
 *
 * MCS Cpm Rx Slave Sc Timer Rsvd1 Register
 */
union cavm_mcsx_cpm_rx_slave_sc_timer_rsvd1
{
    uint64_t u;
    struct cavm_mcsx_cpm_rx_slave_sc_timer_rsvd1_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_0_63         : 64;
#else /* Word 0 - Little Endian */
        uint64_t reserved_0_63         : 64;
#endif /* Word 0 - End */
    } s;
    struct cavm_mcsx_cpm_rx_slave_sc_timer_rsvd1_cn
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
typedef union cavm_mcsx_cpm_rx_slave_sc_timer_rsvd1 cavm_mcsx_cpm_rx_slave_sc_timer_rsvd1_t;

static inline uint64_t CAVM_MCSX_CPM_RX_SLAVE_SC_TIMER_RSVD1(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_MCSX_CPM_RX_SLAVE_SC_TIMER_RSVD1(uint64_t a)
{
    if (a<=6)
        return 0x87e080005020ll + 0x1000000ll * ((a) & 0x7);
    __cavm_csr_fatal("MCSX_CPM_RX_SLAVE_SC_TIMER_RSVD1", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_MCSX_CPM_RX_SLAVE_SC_TIMER_RSVD1(a) cavm_mcsx_cpm_rx_slave_sc_timer_rsvd1_t
#define bustype_CAVM_MCSX_CPM_RX_SLAVE_SC_TIMER_RSVD1(a) CSR_TYPE_RSL
#define basename_CAVM_MCSX_CPM_RX_SLAVE_SC_TIMER_RSVD1(a) "MCSX_CPM_RX_SLAVE_SC_TIMER_RSVD1"
#define device_bar_CAVM_MCSX_CPM_RX_SLAVE_SC_TIMER_RSVD1(a) 0x0 /* PF_BAR0 */
#define busnum_CAVM_MCSX_CPM_RX_SLAVE_SC_TIMER_RSVD1(a) (a)
#define arguments_CAVM_MCSX_CPM_RX_SLAVE_SC_TIMER_RSVD1(a) (a),-1,-1,-1

/**
 * Register (RSL) mcs#_cpm_rx_slave_sc_timer_rsvd2
 *
 * MCS Cpm Rx Slave Sc Timer Rsvd2 Register
 */
union cavm_mcsx_cpm_rx_slave_sc_timer_rsvd2
{
    uint64_t u;
    struct cavm_mcsx_cpm_rx_slave_sc_timer_rsvd2_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_0_63         : 64;
#else /* Word 0 - Little Endian */
        uint64_t reserved_0_63         : 64;
#endif /* Word 0 - End */
    } s;
    struct cavm_mcsx_cpm_rx_slave_sc_timer_rsvd2_cn
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
typedef union cavm_mcsx_cpm_rx_slave_sc_timer_rsvd2 cavm_mcsx_cpm_rx_slave_sc_timer_rsvd2_t;

static inline uint64_t CAVM_MCSX_CPM_RX_SLAVE_SC_TIMER_RSVD2(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_MCSX_CPM_RX_SLAVE_SC_TIMER_RSVD2(uint64_t a)
{
    if (a<=6)
        return 0x87e080005028ll + 0x1000000ll * ((a) & 0x7);
    __cavm_csr_fatal("MCSX_CPM_RX_SLAVE_SC_TIMER_RSVD2", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_MCSX_CPM_RX_SLAVE_SC_TIMER_RSVD2(a) cavm_mcsx_cpm_rx_slave_sc_timer_rsvd2_t
#define bustype_CAVM_MCSX_CPM_RX_SLAVE_SC_TIMER_RSVD2(a) CSR_TYPE_RSL
#define basename_CAVM_MCSX_CPM_RX_SLAVE_SC_TIMER_RSVD2(a) "MCSX_CPM_RX_SLAVE_SC_TIMER_RSVD2"
#define device_bar_CAVM_MCSX_CPM_RX_SLAVE_SC_TIMER_RSVD2(a) 0x0 /* PF_BAR0 */
#define busnum_CAVM_MCSX_CPM_RX_SLAVE_SC_TIMER_RSVD2(a) (a)
#define arguments_CAVM_MCSX_CPM_RX_SLAVE_SC_TIMER_RSVD2(a) (a),-1,-1,-1

/**
 * Register (RSL) mcs#_cpm_rx_slave_sc_timer_start_go_0
 *
 * MCS Cpm Rx Slave Sc Timer Start Go 0 Register
 */
union cavm_mcsx_cpm_rx_slave_sc_timer_start_go_0
{
    uint64_t u;
    struct cavm_mcsx_cpm_rx_slave_sc_timer_start_go_0_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t sc                    : 64; /**< [ 63:  0](R/W) If the corresponding SC bit is set, then the SC timer process will begin
                                                                 execution according to its configuration settings.
                                                                 This bit is cleared by HW once the corresponding SC timer is cleared and is ready for counting. */
#else /* Word 0 - Little Endian */
        uint64_t sc                    : 64; /**< [ 63:  0](R/W) If the corresponding SC bit is set, then the SC timer process will begin
                                                                 execution according to its configuration settings.
                                                                 This bit is cleared by HW once the corresponding SC timer is cleared and is ready for counting. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_mcsx_cpm_rx_slave_sc_timer_start_go_0_s cn; */
};
typedef union cavm_mcsx_cpm_rx_slave_sc_timer_start_go_0 cavm_mcsx_cpm_rx_slave_sc_timer_start_go_0_t;

static inline uint64_t CAVM_MCSX_CPM_RX_SLAVE_SC_TIMER_START_GO_0(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_MCSX_CPM_RX_SLAVE_SC_TIMER_START_GO_0(uint64_t a)
{
    if (a<=6)
        return 0x87e080005018ll + 0x1000000ll * ((a) & 0x7);
    __cavm_csr_fatal("MCSX_CPM_RX_SLAVE_SC_TIMER_START_GO_0", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_MCSX_CPM_RX_SLAVE_SC_TIMER_START_GO_0(a) cavm_mcsx_cpm_rx_slave_sc_timer_start_go_0_t
#define bustype_CAVM_MCSX_CPM_RX_SLAVE_SC_TIMER_START_GO_0(a) CSR_TYPE_RSL
#define basename_CAVM_MCSX_CPM_RX_SLAVE_SC_TIMER_START_GO_0(a) "MCSX_CPM_RX_SLAVE_SC_TIMER_START_GO_0"
#define device_bar_CAVM_MCSX_CPM_RX_SLAVE_SC_TIMER_START_GO_0(a) 0x0 /* PF_BAR0 */
#define busnum_CAVM_MCSX_CPM_RX_SLAVE_SC_TIMER_START_GO_0(a) (a)
#define arguments_CAVM_MCSX_CPM_RX_SLAVE_SC_TIMER_START_GO_0(a) (a),-1,-1,-1

/**
 * Register (RSL) mcs#_cpm_rx_slave_sc_timer_timeout_thresh#
 *
 * MCS Cpm Rx Slave Sc Timer Timeout Thresh Register
 */
union cavm_mcsx_cpm_rx_slave_sc_timer_timeout_threshx
{
    uint64_t u;
    struct cavm_mcsx_cpm_rx_slave_sc_timer_timeout_threshx_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_32_63        : 32;
        uint64_t threshold             : 32; /**< [ 31:  0](R/W) One of 4 configurable thresholds which can be used to generate an interrupt if
                                                                 the corresponding SC's timer reaches the selected threshold. */
#else /* Word 0 - Little Endian */
        uint64_t threshold             : 32; /**< [ 31:  0](R/W) One of 4 configurable thresholds which can be used to generate an interrupt if
                                                                 the corresponding SC's timer reaches the selected threshold. */
        uint64_t reserved_32_63        : 32;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_mcsx_cpm_rx_slave_sc_timer_timeout_threshx_s cn; */
};
typedef union cavm_mcsx_cpm_rx_slave_sc_timer_timeout_threshx cavm_mcsx_cpm_rx_slave_sc_timer_timeout_threshx_t;

static inline uint64_t CAVM_MCSX_CPM_RX_SLAVE_SC_TIMER_TIMEOUT_THRESHX(uint64_t a, uint64_t b) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_MCSX_CPM_RX_SLAVE_SC_TIMER_TIMEOUT_THRESHX(uint64_t a, uint64_t b)
{
    if ((a<=6) && (b<=3))
        return 0x87e080005030ll + 0x1000000ll * ((a) & 0x7) + 8ll * ((b) & 0x3);
    __cavm_csr_fatal("MCSX_CPM_RX_SLAVE_SC_TIMER_TIMEOUT_THRESHX", 2, a, b, 0, 0, 0, 0);
}

#define typedef_CAVM_MCSX_CPM_RX_SLAVE_SC_TIMER_TIMEOUT_THRESHX(a,b) cavm_mcsx_cpm_rx_slave_sc_timer_timeout_threshx_t
#define bustype_CAVM_MCSX_CPM_RX_SLAVE_SC_TIMER_TIMEOUT_THRESHX(a,b) CSR_TYPE_RSL
#define basename_CAVM_MCSX_CPM_RX_SLAVE_SC_TIMER_TIMEOUT_THRESHX(a,b) "MCSX_CPM_RX_SLAVE_SC_TIMER_TIMEOUT_THRESHX"
#define device_bar_CAVM_MCSX_CPM_RX_SLAVE_SC_TIMER_TIMEOUT_THRESHX(a,b) 0x0 /* PF_BAR0 */
#define busnum_CAVM_MCSX_CPM_RX_SLAVE_SC_TIMER_TIMEOUT_THRESHX(a,b) (a)
#define arguments_CAVM_MCSX_CPM_RX_SLAVE_SC_TIMER_TIMEOUT_THRESHX(a,b) (a),(b),-1,-1

/**
 * Register (RSL) mcs#_cpm_rx_slave_sectag_rule_chk_enable
 *
 * MCS Cpm Rx Slave Sectag Rule Chk Enable Register
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
    if (a<=6)
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
    if ((a<=6) && (b<=63))
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
        uint64_t icv_includes_da_sa    : 1;  /**< [ 28: 28](R/W) When set, the outer DA/SA bytes are included in the authentication GHASH
                                                                 calculation. Both standard MACsec and WAN based MACsec with VLAN tags in the
                                                                 clear require the DA+SA to be included in the authentication. WAN based MPLS
                                                                 MACsec would typically have the DA+SA excluded from authentication since these
                                                                 fields can be modified by the NextHop lookup in MPLS routers. */
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
        uint64_t icv_includes_da_sa    : 1;  /**< [ 28: 28](R/W) When set, the outer DA/SA bytes are included in the authentication GHASH
                                                                 calculation. Both standard MACsec and WAN based MACsec with VLAN tags in the
                                                                 clear require the DA+SA to be included in the authentication. WAN based MPLS
                                                                 MACsec would typically have the DA+SA excluded from authentication since these
                                                                 fields can be modified by the NextHop lookup in MPLS routers. */
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
    if ((a<=6) && (b<=63))
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
 * Register (RSL) mcs#_cpm_rx_slave_time_unit_tick
 *
 * MCS Cpm Rx Slave Time Unit Tick Register
 */
union cavm_mcsx_cpm_rx_slave_time_unit_tick
{
    uint64_t u;
    struct cavm_mcsx_cpm_rx_slave_time_unit_tick_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_32_63        : 32;
        uint64_t num_cycles            : 32; /**< [ 31:  0](R/W) Num_cycles*(core_clk period) is the period of the time_unit_tick. */
#else /* Word 0 - Little Endian */
        uint64_t num_cycles            : 32; /**< [ 31:  0](R/W) Num_cycles*(core_clk period) is the period of the time_unit_tick. */
        uint64_t reserved_32_63        : 32;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_mcsx_cpm_rx_slave_time_unit_tick_s cn; */
};
typedef union cavm_mcsx_cpm_rx_slave_time_unit_tick cavm_mcsx_cpm_rx_slave_time_unit_tick_t;

static inline uint64_t CAVM_MCSX_CPM_RX_SLAVE_TIME_UNIT_TICK(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_MCSX_CPM_RX_SLAVE_TIME_UNIT_TICK(uint64_t a)
{
    if (a<=6)
        return 0x87e080005008ll + 0x1000000ll * ((a) & 0x7);
    __cavm_csr_fatal("MCSX_CPM_RX_SLAVE_TIME_UNIT_TICK", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_MCSX_CPM_RX_SLAVE_TIME_UNIT_TICK(a) cavm_mcsx_cpm_rx_slave_time_unit_tick_t
#define bustype_CAVM_MCSX_CPM_RX_SLAVE_TIME_UNIT_TICK(a) CSR_TYPE_RSL
#define basename_CAVM_MCSX_CPM_RX_SLAVE_TIME_UNIT_TICK(a) "MCSX_CPM_RX_SLAVE_TIME_UNIT_TICK"
#define device_bar_CAVM_MCSX_CPM_RX_SLAVE_TIME_UNIT_TICK(a) 0x0 /* PF_BAR0 */
#define busnum_CAVM_MCSX_CPM_RX_SLAVE_TIME_UNIT_TICK(a) (a)
#define arguments_CAVM_MCSX_CPM_RX_SLAVE_TIME_UNIT_TICK(a) (a),-1,-1,-1

/**
 * Register (RSL) mcs#_cpm_rx_slave_xpn_threshold
 *
 * MCS Cpm Rx Slave Xpn Threshold Register
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
    if (a<=6)
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
    if (a<=6)
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
 */
union cavm_mcsx_cpm_tx_slave_cpm_tx_int
{
    uint64_t u;
    struct cavm_mcsx_cpm_tx_slave_cpm_tx_int_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_5_63         : 59;
        uint64_t sc_expiry_actual_timeout : 1;/**< [  4:  4](R/W) An active SC/SA has reached its sc_actual_timeout threshold.  See the leaf
                                                                 interrupt register to determine which SC fired. */
        uint64_t sc_expiry_pre_timeout : 1;  /**< [  3:  3](R/W) An active SC/SA has reached its sc_pre_timeout threshold.  See the leaf
                                                                 interrupt register to determine which SC fired. */
        uint64_t sa_not_valid          : 1;  /**< [  2:  2](R/W) The SA corresponding to the packet is not valid.  The packet will not be sent. */
        uint64_t pn_thresh_reached     : 1;  /**< [  1:  1](R/W) Current PN is greater than or equal to the configurable threshold. */
        uint64_t packet_xpn_eq0        : 1;  /**< [  0:  0](R/W) The current packet (X)PN is equal to zero. The packet will not be sent. */
#else /* Word 0 - Little Endian */
        uint64_t packet_xpn_eq0        : 1;  /**< [  0:  0](R/W) The current packet (X)PN is equal to zero. The packet will not be sent. */
        uint64_t pn_thresh_reached     : 1;  /**< [  1:  1](R/W) Current PN is greater than or equal to the configurable threshold. */
        uint64_t sa_not_valid          : 1;  /**< [  2:  2](R/W) The SA corresponding to the packet is not valid.  The packet will not be sent. */
        uint64_t sc_expiry_pre_timeout : 1;  /**< [  3:  3](R/W) An active SC/SA has reached its sc_pre_timeout threshold.  See the leaf
                                                                 interrupt register to determine which SC fired. */
        uint64_t sc_expiry_actual_timeout : 1;/**< [  4:  4](R/W) An active SC/SA has reached its sc_actual_timeout threshold.  See the leaf
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
    if (a<=6)
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
 */
union cavm_mcsx_cpm_tx_slave_cpm_tx_int_enb
{
    uint64_t u;
    struct cavm_mcsx_cpm_tx_slave_cpm_tx_int_enb_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_5_63         : 59;
        uint64_t sc_expiry_actual_timeout_enb : 1;/**< [  4:  4](R/W) An active SC/SA has reached its sc_actual_timeout threshold.  See the leaf
                                                                 interrupt register to determine which SC fired. */
        uint64_t sc_expiry_pre_timeout_enb : 1;/**< [  3:  3](R/W) An active SC/SA has reached its sc_pre_timeout threshold.  See the leaf
                                                                 interrupt register to determine which SC fired. */
        uint64_t sa_not_valid_enb      : 1;  /**< [  2:  2](R/W) The SA corresponding to the packet is not valid.  The packet will not be sent. */
        uint64_t pn_thresh_reached_enb : 1;  /**< [  1:  1](R/W) Current PN is greater than or equal to the configurable threshold. */
        uint64_t packet_xpn_eq0_enb    : 1;  /**< [  0:  0](R/W) The current packet (X)PN is equal to zero. The packet will not be sent. */
#else /* Word 0 - Little Endian */
        uint64_t packet_xpn_eq0_enb    : 1;  /**< [  0:  0](R/W) The current packet (X)PN is equal to zero. The packet will not be sent. */
        uint64_t pn_thresh_reached_enb : 1;  /**< [  1:  1](R/W) Current PN is greater than or equal to the configurable threshold. */
        uint64_t sa_not_valid_enb      : 1;  /**< [  2:  2](R/W) The SA corresponding to the packet is not valid.  The packet will not be sent. */
        uint64_t sc_expiry_pre_timeout_enb : 1;/**< [  3:  3](R/W) An active SC/SA has reached its sc_pre_timeout threshold.  See the leaf
                                                                 interrupt register to determine which SC fired. */
        uint64_t sc_expiry_actual_timeout_enb : 1;/**< [  4:  4](R/W) An active SC/SA has reached its sc_actual_timeout threshold.  See the leaf
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
    if (a<=6)
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
 */
union cavm_mcsx_cpm_tx_slave_cpm_tx_int_intr_rw
{
    uint64_t u;
    struct cavm_mcsx_cpm_tx_slave_cpm_tx_int_intr_rw_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_5_63         : 59;
        uint64_t sc_expiry_actual_timeout : 1;/**< [  4:  4](R/W) An active SC/SA has reached its sc_actual_timeout threshold.  See the leaf
                                                                 interrupt register to determine which SC fired. */
        uint64_t sc_expiry_pre_timeout : 1;  /**< [  3:  3](R/W) An active SC/SA has reached its sc_pre_timeout threshold.  See the leaf
                                                                 interrupt register to determine which SC fired. */
        uint64_t sa_not_valid          : 1;  /**< [  2:  2](R/W) The SA corresponding to the packet is not valid.  The packet will not be sent. */
        uint64_t pn_thresh_reached     : 1;  /**< [  1:  1](R/W) Current PN is greater than or equal to the configurable threshold. */
        uint64_t packet_xpn_eq0        : 1;  /**< [  0:  0](R/W) The current packet (X)PN is equal to zero. The packet will not be sent. */
#else /* Word 0 - Little Endian */
        uint64_t packet_xpn_eq0        : 1;  /**< [  0:  0](R/W) The current packet (X)PN is equal to zero. The packet will not be sent. */
        uint64_t pn_thresh_reached     : 1;  /**< [  1:  1](R/W) Current PN is greater than or equal to the configurable threshold. */
        uint64_t sa_not_valid          : 1;  /**< [  2:  2](R/W) The SA corresponding to the packet is not valid.  The packet will not be sent. */
        uint64_t sc_expiry_pre_timeout : 1;  /**< [  3:  3](R/W) An active SC/SA has reached its sc_pre_timeout threshold.  See the leaf
                                                                 interrupt register to determine which SC fired. */
        uint64_t sc_expiry_actual_timeout : 1;/**< [  4:  4](R/W) An active SC/SA has reached its sc_actual_timeout threshold.  See the leaf
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
    if (a<=6)
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
 */
union cavm_mcsx_cpm_tx_slave_cpm_tx_int_raw
{
    uint64_t u;
    struct cavm_mcsx_cpm_tx_slave_cpm_tx_int_raw_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_5_63         : 59;
        uint64_t sc_expiry_actual_timeout : 1;/**< [  4:  4](RO) An active SC/SA has reached its sc_actual_timeout threshold.  See the leaf
                                                                 interrupt register to determine which SC fired. */
        uint64_t sc_expiry_pre_timeout : 1;  /**< [  3:  3](RO) An active SC/SA has reached its sc_pre_timeout threshold.  See the leaf
                                                                 interrupt register to determine which SC fired. */
        uint64_t sa_not_valid          : 1;  /**< [  2:  2](RO) The SA corresponding to the packet is not valid.  The packet will not be sent. */
        uint64_t pn_thresh_reached     : 1;  /**< [  1:  1](RO) Current PN is greater than or equal to the configurable threshold. */
        uint64_t packet_xpn_eq0        : 1;  /**< [  0:  0](RO) The current packet (X)PN is equal to zero. The packet will not be sent. */
#else /* Word 0 - Little Endian */
        uint64_t packet_xpn_eq0        : 1;  /**< [  0:  0](RO) The current packet (X)PN is equal to zero. The packet will not be sent. */
        uint64_t pn_thresh_reached     : 1;  /**< [  1:  1](RO) Current PN is greater than or equal to the configurable threshold. */
        uint64_t sa_not_valid          : 1;  /**< [  2:  2](RO) The SA corresponding to the packet is not valid.  The packet will not be sent. */
        uint64_t sc_expiry_pre_timeout : 1;  /**< [  3:  3](RO) An active SC/SA has reached its sc_pre_timeout threshold.  See the leaf
                                                                 interrupt register to determine which SC fired. */
        uint64_t sc_expiry_actual_timeout : 1;/**< [  4:  4](RO) An active SC/SA has reached its sc_actual_timeout threshold.  See the leaf
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
    if (a<=6)
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
    if (a<=6)
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
    if (a<=6)
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
 * Register (RSL) mcs#_cpm_tx_slave_fixed_offset_adjust
 *
 * MCS Cpm Tx Slave Fixed Offset Adjust Register
 */
union cavm_mcsx_cpm_tx_slave_fixed_offset_adjust
{
    uint64_t u;
    struct cavm_mcsx_cpm_tx_slave_fixed_offset_adjust_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_5_63         : 59;
        uint64_t fixed_offset_adjust   : 5;  /**< [  4:  0](R/W) SecTag Fixed Offset Mode adjustment to compensate for Tx-MCS header size. */
#else /* Word 0 - Little Endian */
        uint64_t fixed_offset_adjust   : 5;  /**< [  4:  0](R/W) SecTag Fixed Offset Mode adjustment to compensate for Tx-MCS header size. */
        uint64_t reserved_5_63         : 59;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_mcsx_cpm_tx_slave_fixed_offset_adjust_s cn; */
};
typedef union cavm_mcsx_cpm_tx_slave_fixed_offset_adjust cavm_mcsx_cpm_tx_slave_fixed_offset_adjust_t;

static inline uint64_t CAVM_MCSX_CPM_TX_SLAVE_FIXED_OFFSET_ADJUST(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_MCSX_CPM_TX_SLAVE_FIXED_OFFSET_ADJUST(uint64_t a)
{
    if (a<=6)
        return 0x87e080005548ll + 0x1000000ll * ((a) & 0x7);
    __cavm_csr_fatal("MCSX_CPM_TX_SLAVE_FIXED_OFFSET_ADJUST", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_MCSX_CPM_TX_SLAVE_FIXED_OFFSET_ADJUST(a) cavm_mcsx_cpm_tx_slave_fixed_offset_adjust_t
#define bustype_CAVM_MCSX_CPM_TX_SLAVE_FIXED_OFFSET_ADJUST(a) CSR_TYPE_RSL
#define basename_CAVM_MCSX_CPM_TX_SLAVE_FIXED_OFFSET_ADJUST(a) "MCSX_CPM_TX_SLAVE_FIXED_OFFSET_ADJUST"
#define device_bar_CAVM_MCSX_CPM_TX_SLAVE_FIXED_OFFSET_ADJUST(a) 0x0 /* PF_BAR0 */
#define busnum_CAVM_MCSX_CPM_TX_SLAVE_FIXED_OFFSET_ADJUST(a) (a)
#define arguments_CAVM_MCSX_CPM_TX_SLAVE_FIXED_OFFSET_ADJUST(a) (a),-1,-1,-1

/**
 * Register (RSL) mcs#_cpm_tx_slave_flowid_tcam_data_0#
 *
 * MCS Cpm Tx Slave Flowid Tcam Data 0 Register
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
    if ((a<=6) && (b<=63))
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
 */
union cavm_mcsx_cpm_tx_slave_flowid_tcam_data_1x
{
    uint64_t u;
    struct cavm_mcsx_cpm_tx_slave_flowid_tcam_data_1x_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t outer_tag_id          : 16; /**< [ 63: 48](R/W) Outermost VLAN ID {8'd0, VLAN_ID[11:0]}, or 20-bit MPLS label. */
        uint64_t ether_type            : 16; /**< [ 47: 32](R/W) First E-Type found in the packet that doesn't match one of the preconfigured
                                                                 Custom, VLAN, or MPLS values. */
        uint64_t mac_sa                : 32; /**< [ 31:  0](R/W) MAC SA field extracted from the packet */
#else /* Word 0 - Little Endian */
        uint64_t mac_sa                : 32; /**< [ 31:  0](R/W) MAC SA field extracted from the packet */
        uint64_t ether_type            : 16; /**< [ 47: 32](R/W) First E-Type found in the packet that doesn't match one of the preconfigured
                                                                 Custom, VLAN, or MPLS values. */
        uint64_t outer_tag_id          : 16; /**< [ 63: 48](R/W) Outermost VLAN ID {8'd0, VLAN_ID[11:0]}, or 20-bit MPLS label. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_mcsx_cpm_tx_slave_flowid_tcam_data_1x_s cn; */
};
typedef union cavm_mcsx_cpm_tx_slave_flowid_tcam_data_1x cavm_mcsx_cpm_tx_slave_flowid_tcam_data_1x_t;

static inline uint64_t CAVM_MCSX_CPM_TX_SLAVE_FLOWID_TCAM_DATA_1X(uint64_t a, uint64_t b) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_MCSX_CPM_TX_SLAVE_FLOWID_TCAM_DATA_1X(uint64_t a, uint64_t b)
{
    if ((a<=6) && (b<=63))
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
                                                                 0: No VLAN or MPLS
                                                                 1: Single VLAN
                                                                 2: Dual VLAN
                                                                 3: MPLS
                                                                 4: Single VLAN followed by MPLS
                                                                 5: Dual VLAN followed by MPLS
                                                                 6: Unsupported type (greater than2 VLAN or greater than4 MPLS)
                                                                 7-14: Reserved for future use
                                                                 15: Invalid (any parsing error) */
        uint64_t tag_match_bitmap      : 8;  /**< [ 55: 48](R/W) Maps 1 to 1 with the set of configurable Etype CSRs and set when the associated
                                                                 E-Type (or TPID) was found in the first 6 tags of the packet. */
        uint64_t bonus_data            : 16; /**< [ 47: 32](R/W) 2 bytes of additional bonus data extracted from one of the custom tags. */
        uint64_t second_outer_priority : 4;  /**< [ 31: 28](R/W) 2nd Outermost VLAN {PCP/Pbits, DE/CFI} or {1'b0, EXP} for MPLS. */
        uint64_t second_outer_tag_id   : 20; /**< [ 27:  8](R/W) 2nd Outermost VLAN ID {8'd0, VLAN_ID[11:0]}, or 20-bit MPLS label. */
        uint64_t outer_priority        : 4;  /**< [  7:  4](R/W) Outermost VLAN {PCP/Pbits, DE/CFI} or {1'b0, EXP} for MPLS. */
        uint64_t outer_tag_id          : 4;  /**< [  3:  0](R/W) Outermost VLAN ID {8'd0, VLAN_ID[11:0]}, or 20-bit MPLS label. */
#else /* Word 0 - Little Endian */
        uint64_t outer_tag_id          : 4;  /**< [  3:  0](R/W) Outermost VLAN ID {8'd0, VLAN_ID[11:0]}, or 20-bit MPLS label. */
        uint64_t outer_priority        : 4;  /**< [  7:  4](R/W) Outermost VLAN {PCP/Pbits, DE/CFI} or {1'b0, EXP} for MPLS. */
        uint64_t second_outer_tag_id   : 20; /**< [ 27:  8](R/W) 2nd Outermost VLAN ID {8'd0, VLAN_ID[11:0]}, or 20-bit MPLS label. */
        uint64_t second_outer_priority : 4;  /**< [ 31: 28](R/W) 2nd Outermost VLAN {PCP/Pbits, DE/CFI} or {1'b0, EXP} for MPLS. */
        uint64_t bonus_data            : 16; /**< [ 47: 32](R/W) 2 bytes of additional bonus data extracted from one of the custom tags. */
        uint64_t tag_match_bitmap      : 8;  /**< [ 55: 48](R/W) Maps 1 to 1 with the set of configurable Etype CSRs and set when the associated
                                                                 E-Type (or TPID) was found in the first 6 tags of the packet. */
        uint64_t packet_type           : 4;  /**< [ 59: 56](R/W) Encoded Packet Type from the parser:
                                                                 0: No VLAN or MPLS
                                                                 1: Single VLAN
                                                                 2: Dual VLAN
                                                                 3: MPLS
                                                                 4: Single VLAN followed by MPLS
                                                                 5: Dual VLAN followed by MPLS
                                                                 6: Unsupported type (greater than2 VLAN or greater than4 MPLS)
                                                                 7-14: Reserved for future use
                                                                 15: Invalid (any parsing error) */
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
    if ((a<=6) && (b<=63))
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
 */
union cavm_mcsx_cpm_tx_slave_flowid_tcam_data_3x
{
    uint64_t u;
    struct cavm_mcsx_cpm_tx_slave_flowid_tcam_data_3x_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_16_63        : 48;
        uint64_t flowid_user_field     : 4;  /**< [ 15: 12](R/W) User-Defined Flow_ID */
        uint64_t port                  : 2;  /**< [ 11: 10](R/W) Port number, 0-3 */
        uint64_t express               : 1;  /**< [  9:  9](R/W) Express packet. */
        uint64_t num_tags              : 7;  /**< [  8:  2](R/W) Number of VLAN tags, CUSTOM tags, or MPLS labels before the SecTAG, excluding
                                                                 the Rx/Tx-MCS header tags.
                                                                 Bit 0: no tags/labels before SecTAG
                                                                 Bit 1: 1 tag/label before SecTAG
                                                                 Bit 2: 2 tags/labels before SecTAG
                                                                 ...
                                                                 Bit 6: 6 or more tags/labels before SecTAG. */
        uint64_t inner_vlan_type       : 2;  /**< [  1:  0](R/W) Encoded value indicating which VLAN TPID value matched for the second outermost VLAN Tag. */
#else /* Word 0 - Little Endian */
        uint64_t inner_vlan_type       : 2;  /**< [  1:  0](R/W) Encoded value indicating which VLAN TPID value matched for the second outermost VLAN Tag. */
        uint64_t num_tags              : 7;  /**< [  8:  2](R/W) Number of VLAN tags, CUSTOM tags, or MPLS labels before the SecTAG, excluding
                                                                 the Rx/Tx-MCS header tags.
                                                                 Bit 0: no tags/labels before SecTAG
                                                                 Bit 1: 1 tag/label before SecTAG
                                                                 Bit 2: 2 tags/labels before SecTAG
                                                                 ...
                                                                 Bit 6: 6 or more tags/labels before SecTAG. */
        uint64_t express               : 1;  /**< [  9:  9](R/W) Express packet. */
        uint64_t port                  : 2;  /**< [ 11: 10](R/W) Port number, 0-3 */
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
    if ((a<=6) && (b<=63))
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
 */
union cavm_mcsx_cpm_tx_slave_flowid_tcam_mask_0x
{
    uint64_t u;
    struct cavm_mcsx_cpm_tx_slave_flowid_tcam_mask_0x_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t mac_sa                : 16; /**< [ 63: 48](R/W) Set bits to 1 to mask/exclude corresponding flowid_tcam_data bit from compare. */
        uint64_t mac_da                : 48; /**< [ 47:  0](R/W) Set bits to 1 to mask/exclude corresponding flowid_tcam_data bit from compare. */
#else /* Word 0 - Little Endian */
        uint64_t mac_da                : 48; /**< [ 47:  0](R/W) Set bits to 1 to mask/exclude corresponding flowid_tcam_data bit from compare. */
        uint64_t mac_sa                : 16; /**< [ 63: 48](R/W) Set bits to 1 to mask/exclude corresponding flowid_tcam_data bit from compare. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_mcsx_cpm_tx_slave_flowid_tcam_mask_0x_s cn; */
};
typedef union cavm_mcsx_cpm_tx_slave_flowid_tcam_mask_0x cavm_mcsx_cpm_tx_slave_flowid_tcam_mask_0x_t;

static inline uint64_t CAVM_MCSX_CPM_TX_SLAVE_FLOWID_TCAM_MASK_0X(uint64_t a, uint64_t b) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_MCSX_CPM_TX_SLAVE_FLOWID_TCAM_MASK_0X(uint64_t a, uint64_t b)
{
    if ((a<=6) && (b<=63))
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
 */
union cavm_mcsx_cpm_tx_slave_flowid_tcam_mask_1x
{
    uint64_t u;
    struct cavm_mcsx_cpm_tx_slave_flowid_tcam_mask_1x_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t outer_tag_id          : 16; /**< [ 63: 48](R/W) Set bits to 1 to mask/exclude corresponding flowid_tcam_data bit from compare. */
        uint64_t ether_type            : 16; /**< [ 47: 32](R/W) Set bits to 1 to mask/exclude corresponding flowid_tcam_data bit from compare. */
        uint64_t mac_sa                : 32; /**< [ 31:  0](R/W) Set bits to 1 to mask/exclude corresponding flowid_tcam_data bit from compare. */
#else /* Word 0 - Little Endian */
        uint64_t mac_sa                : 32; /**< [ 31:  0](R/W) Set bits to 1 to mask/exclude corresponding flowid_tcam_data bit from compare. */
        uint64_t ether_type            : 16; /**< [ 47: 32](R/W) Set bits to 1 to mask/exclude corresponding flowid_tcam_data bit from compare. */
        uint64_t outer_tag_id          : 16; /**< [ 63: 48](R/W) Set bits to 1 to mask/exclude corresponding flowid_tcam_data bit from compare. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_mcsx_cpm_tx_slave_flowid_tcam_mask_1x_s cn; */
};
typedef union cavm_mcsx_cpm_tx_slave_flowid_tcam_mask_1x cavm_mcsx_cpm_tx_slave_flowid_tcam_mask_1x_t;

static inline uint64_t CAVM_MCSX_CPM_TX_SLAVE_FLOWID_TCAM_MASK_1X(uint64_t a, uint64_t b) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_MCSX_CPM_TX_SLAVE_FLOWID_TCAM_MASK_1X(uint64_t a, uint64_t b)
{
    if ((a<=6) && (b<=63))
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
 */
union cavm_mcsx_cpm_tx_slave_flowid_tcam_mask_2x
{
    uint64_t u;
    struct cavm_mcsx_cpm_tx_slave_flowid_tcam_mask_2x_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t inner_vlan_type       : 1;  /**< [ 63: 63](R/W) Set bits to 1 to mask/exclude corresponding flowid_tcam_data bit from compare. */
        uint64_t outer_vlan_type       : 3;  /**< [ 62: 60](R/W) Set bits to 1 to mask/exclude corresponding flowid_tcam_data bit from compare. */
        uint64_t packet_type           : 4;  /**< [ 59: 56](R/W) Set bits to 1 to mask/exclude corresponding flowid_tcam_data bit from compare. */
        uint64_t tag_match_bitmap      : 8;  /**< [ 55: 48](R/W) Set bits to 1 to mask/exclude corresponding flowid_tcam_data bit from compare. */
        uint64_t bonus_data            : 16; /**< [ 47: 32](R/W) Set bits to 1 to mask/exclude corresponding flowid_tcam_data bit from compare. */
        uint64_t second_outer_priority : 4;  /**< [ 31: 28](R/W) Set bits to 1 to mask/exclude corresponding flowid_tcam_data bit from compare. */
        uint64_t second_outer_tag_id   : 20; /**< [ 27:  8](R/W) Set bits to 1 to mask/exclude corresponding flowid_tcam_data bit from compare. */
        uint64_t outer_priority        : 4;  /**< [  7:  4](R/W) Set bits to 1 to mask/exclude corresponding flowid_tcam_data bit from compare. */
        uint64_t outer_tag_id          : 4;  /**< [  3:  0](R/W) Set bits to 1 to mask/exclude corresponding flowid_tcam_data bit from compare. */
#else /* Word 0 - Little Endian */
        uint64_t outer_tag_id          : 4;  /**< [  3:  0](R/W) Set bits to 1 to mask/exclude corresponding flowid_tcam_data bit from compare. */
        uint64_t outer_priority        : 4;  /**< [  7:  4](R/W) Set bits to 1 to mask/exclude corresponding flowid_tcam_data bit from compare. */
        uint64_t second_outer_tag_id   : 20; /**< [ 27:  8](R/W) Set bits to 1 to mask/exclude corresponding flowid_tcam_data bit from compare. */
        uint64_t second_outer_priority : 4;  /**< [ 31: 28](R/W) Set bits to 1 to mask/exclude corresponding flowid_tcam_data bit from compare. */
        uint64_t bonus_data            : 16; /**< [ 47: 32](R/W) Set bits to 1 to mask/exclude corresponding flowid_tcam_data bit from compare. */
        uint64_t tag_match_bitmap      : 8;  /**< [ 55: 48](R/W) Set bits to 1 to mask/exclude corresponding flowid_tcam_data bit from compare. */
        uint64_t packet_type           : 4;  /**< [ 59: 56](R/W) Set bits to 1 to mask/exclude corresponding flowid_tcam_data bit from compare. */
        uint64_t outer_vlan_type       : 3;  /**< [ 62: 60](R/W) Set bits to 1 to mask/exclude corresponding flowid_tcam_data bit from compare. */
        uint64_t inner_vlan_type       : 1;  /**< [ 63: 63](R/W) Set bits to 1 to mask/exclude corresponding flowid_tcam_data bit from compare. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_mcsx_cpm_tx_slave_flowid_tcam_mask_2x_s cn; */
};
typedef union cavm_mcsx_cpm_tx_slave_flowid_tcam_mask_2x cavm_mcsx_cpm_tx_slave_flowid_tcam_mask_2x_t;

static inline uint64_t CAVM_MCSX_CPM_TX_SLAVE_FLOWID_TCAM_MASK_2X(uint64_t a, uint64_t b) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_MCSX_CPM_TX_SLAVE_FLOWID_TCAM_MASK_2X(uint64_t a, uint64_t b)
{
    if ((a<=6) && (b<=63))
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
 */
union cavm_mcsx_cpm_tx_slave_flowid_tcam_mask_3x
{
    uint64_t u;
    struct cavm_mcsx_cpm_tx_slave_flowid_tcam_mask_3x_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_16_63        : 48;
        uint64_t flowid_user_field     : 4;  /**< [ 15: 12](R/W) Set bits to 1 to mask/exclude corresponding flowid_tcam_data bit from compare. */
        uint64_t port                  : 2;  /**< [ 11: 10](R/W) Set bits to 1 to mask/exclude corresponding flowid_tcam_data bit from compare. */
        uint64_t express               : 1;  /**< [  9:  9](R/W) Set bits to 1 to mask/exclude corresponding flowid_tcam_data bit from compare. */
        uint64_t num_tags              : 7;  /**< [  8:  2](R/W) Set bits to 1 to mask/exclude corresponding flowid_tcam_data bit from compare. */
        uint64_t inner_vlan_type       : 2;  /**< [  1:  0](R/W) Set bits to 1 to mask/exclude corresponding flowid_tcam_data bit from compare. */
#else /* Word 0 - Little Endian */
        uint64_t inner_vlan_type       : 2;  /**< [  1:  0](R/W) Set bits to 1 to mask/exclude corresponding flowid_tcam_data bit from compare. */
        uint64_t num_tags              : 7;  /**< [  8:  2](R/W) Set bits to 1 to mask/exclude corresponding flowid_tcam_data bit from compare. */
        uint64_t express               : 1;  /**< [  9:  9](R/W) Set bits to 1 to mask/exclude corresponding flowid_tcam_data bit from compare. */
        uint64_t port                  : 2;  /**< [ 11: 10](R/W) Set bits to 1 to mask/exclude corresponding flowid_tcam_data bit from compare. */
        uint64_t flowid_user_field     : 4;  /**< [ 15: 12](R/W) Set bits to 1 to mask/exclude corresponding flowid_tcam_data bit from compare. */
        uint64_t reserved_16_63        : 48;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_mcsx_cpm_tx_slave_flowid_tcam_mask_3x_s cn; */
};
typedef union cavm_mcsx_cpm_tx_slave_flowid_tcam_mask_3x cavm_mcsx_cpm_tx_slave_flowid_tcam_mask_3x_t;

static inline uint64_t CAVM_MCSX_CPM_TX_SLAVE_FLOWID_TCAM_MASK_3X(uint64_t a, uint64_t b) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_MCSX_CPM_TX_SLAVE_FLOWID_TCAM_MASK_3X(uint64_t a, uint64_t b)
{
    if ((a<=6) && (b<=63))
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
    if (a<=6)
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
 * Register (RSL) mcs#_cpm_tx_slave_sa_index0_vld#
 *
 * MCS Cpm Tx Slave Sa Index0 Vld Register
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
    if ((a<=6) && (b<=63))
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
    if ((a<=6) && (b<=63))
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
    if ((a<=6) && (b<=1))
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
    if ((a<=6) && (b<=63))
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
    if ((a<=6) && (b<=127))
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
    if ((a<=6) && (b<=127))
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
    if ((a<=6) && (b<=127))
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
    if ((a<=6) && (b<=127))
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
    if ((a<=6) && (b<=127))
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
    if ((a<=6) && (b<=127))
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
    if ((a<=6) && (b<=127))
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
    if ((a<=6) && (b<=127))
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
    if ((a<=6) && (b<=127))
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
 */
union cavm_mcsx_cpm_tx_slave_sa_pn_table_memx
{
    uint64_t u;
    struct cavm_mcsx_cpm_tx_slave_sa_pn_table_memx_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t next_pn               : 64; /**< [ 63:  0](R/W) 64b next_pn value: Next packet number expected. */
#else /* Word 0 - Little Endian */
        uint64_t next_pn               : 64; /**< [ 63:  0](R/W) 64b next_pn value: Next packet number expected. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_mcsx_cpm_tx_slave_sa_pn_table_memx_s cn; */
};
typedef union cavm_mcsx_cpm_tx_slave_sa_pn_table_memx cavm_mcsx_cpm_tx_slave_sa_pn_table_memx_t;

static inline uint64_t CAVM_MCSX_CPM_TX_SLAVE_SA_PN_TABLE_MEMX(uint64_t a, uint64_t b) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_MCSX_CPM_TX_SLAVE_SA_PN_TABLE_MEMX(uint64_t a, uint64_t b)
{
    if ((a<=6) && (b<=127))
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
 * Register (RSL) mcs#_cpm_tx_slave_sc_expiry_actual_timeout_0
 *
 * MCS Cpm Tx Slave Sc Expiry Actual Timeout 0 Register
 */
union cavm_mcsx_cpm_tx_slave_sc_expiry_actual_timeout_0
{
    uint64_t u;
    struct cavm_mcsx_cpm_tx_slave_sc_expiry_actual_timeout_0_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t sc_expiry_actual_timeout_int : 64;/**< [ 63:  0](R/W) The corresponding SC indicated by the bit that is set has reached its configured
                                                                 actual-timeout threshold. */
#else /* Word 0 - Little Endian */
        uint64_t sc_expiry_actual_timeout_int : 64;/**< [ 63:  0](R/W) The corresponding SC indicated by the bit that is set has reached its configured
                                                                 actual-timeout threshold. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_mcsx_cpm_tx_slave_sc_expiry_actual_timeout_0_s cn; */
};
typedef union cavm_mcsx_cpm_tx_slave_sc_expiry_actual_timeout_0 cavm_mcsx_cpm_tx_slave_sc_expiry_actual_timeout_0_t;

static inline uint64_t CAVM_MCSX_CPM_TX_SLAVE_SC_EXPIRY_ACTUAL_TIMEOUT_0(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_MCSX_CPM_TX_SLAVE_SC_EXPIRY_ACTUAL_TIMEOUT_0(uint64_t a)
{
    if (a<=6)
        return 0x87e0800054e0ll + 0x1000000ll * ((a) & 0x7);
    __cavm_csr_fatal("MCSX_CPM_TX_SLAVE_SC_EXPIRY_ACTUAL_TIMEOUT_0", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_MCSX_CPM_TX_SLAVE_SC_EXPIRY_ACTUAL_TIMEOUT_0(a) cavm_mcsx_cpm_tx_slave_sc_expiry_actual_timeout_0_t
#define bustype_CAVM_MCSX_CPM_TX_SLAVE_SC_EXPIRY_ACTUAL_TIMEOUT_0(a) CSR_TYPE_RSL
#define basename_CAVM_MCSX_CPM_TX_SLAVE_SC_EXPIRY_ACTUAL_TIMEOUT_0(a) "MCSX_CPM_TX_SLAVE_SC_EXPIRY_ACTUAL_TIMEOUT_0"
#define device_bar_CAVM_MCSX_CPM_TX_SLAVE_SC_EXPIRY_ACTUAL_TIMEOUT_0(a) 0x0 /* PF_BAR0 */
#define busnum_CAVM_MCSX_CPM_TX_SLAVE_SC_EXPIRY_ACTUAL_TIMEOUT_0(a) (a)
#define arguments_CAVM_MCSX_CPM_TX_SLAVE_SC_EXPIRY_ACTUAL_TIMEOUT_0(a) (a),-1,-1,-1

/**
 * Register (RSL) mcs#_cpm_tx_slave_sc_expiry_actual_timeout_enb_0
 *
 * MCS Cpm Tx Slave Sc Expiry Actual Timeout Enb 0 Register
 */
union cavm_mcsx_cpm_tx_slave_sc_expiry_actual_timeout_enb_0
{
    uint64_t u;
    struct cavm_mcsx_cpm_tx_slave_sc_expiry_actual_timeout_enb_0_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t sc_expiry_actual_timeout_int_enb : 64;/**< [ 63:  0](R/W) The corresponding SC indicated by the bit that is set has reached its configured
                                                                 actual-timeout threshold. */
#else /* Word 0 - Little Endian */
        uint64_t sc_expiry_actual_timeout_int_enb : 64;/**< [ 63:  0](R/W) The corresponding SC indicated by the bit that is set has reached its configured
                                                                 actual-timeout threshold. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_mcsx_cpm_tx_slave_sc_expiry_actual_timeout_enb_0_s cn; */
};
typedef union cavm_mcsx_cpm_tx_slave_sc_expiry_actual_timeout_enb_0 cavm_mcsx_cpm_tx_slave_sc_expiry_actual_timeout_enb_0_t;

static inline uint64_t CAVM_MCSX_CPM_TX_SLAVE_SC_EXPIRY_ACTUAL_TIMEOUT_ENB_0(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_MCSX_CPM_TX_SLAVE_SC_EXPIRY_ACTUAL_TIMEOUT_ENB_0(uint64_t a)
{
    if (a<=6)
        return 0x87e0800054e8ll + 0x1000000ll * ((a) & 0x7);
    __cavm_csr_fatal("MCSX_CPM_TX_SLAVE_SC_EXPIRY_ACTUAL_TIMEOUT_ENB_0", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_MCSX_CPM_TX_SLAVE_SC_EXPIRY_ACTUAL_TIMEOUT_ENB_0(a) cavm_mcsx_cpm_tx_slave_sc_expiry_actual_timeout_enb_0_t
#define bustype_CAVM_MCSX_CPM_TX_SLAVE_SC_EXPIRY_ACTUAL_TIMEOUT_ENB_0(a) CSR_TYPE_RSL
#define basename_CAVM_MCSX_CPM_TX_SLAVE_SC_EXPIRY_ACTUAL_TIMEOUT_ENB_0(a) "MCSX_CPM_TX_SLAVE_SC_EXPIRY_ACTUAL_TIMEOUT_ENB_0"
#define device_bar_CAVM_MCSX_CPM_TX_SLAVE_SC_EXPIRY_ACTUAL_TIMEOUT_ENB_0(a) 0x0 /* PF_BAR0 */
#define busnum_CAVM_MCSX_CPM_TX_SLAVE_SC_EXPIRY_ACTUAL_TIMEOUT_ENB_0(a) (a)
#define arguments_CAVM_MCSX_CPM_TX_SLAVE_SC_EXPIRY_ACTUAL_TIMEOUT_ENB_0(a) (a),-1,-1,-1

/**
 * Register (RSL) mcs#_cpm_tx_slave_sc_expiry_actual_timeout_intr_rw_0
 *
 * MCS Cpm Tx Slave Sc Expiry Actual Timeout Intr Rw 0 Register
 */
union cavm_mcsx_cpm_tx_slave_sc_expiry_actual_timeout_intr_rw_0
{
    uint64_t u;
    struct cavm_mcsx_cpm_tx_slave_sc_expiry_actual_timeout_intr_rw_0_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t sc_expiry_actual_timeout_int : 64;/**< [ 63:  0](R/W) The corresponding SC indicated by the bit that is set has reached its configured
                                                                 actual-timeout threshold. */
#else /* Word 0 - Little Endian */
        uint64_t sc_expiry_actual_timeout_int : 64;/**< [ 63:  0](R/W) The corresponding SC indicated by the bit that is set has reached its configured
                                                                 actual-timeout threshold. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_mcsx_cpm_tx_slave_sc_expiry_actual_timeout_intr_rw_0_s cn; */
};
typedef union cavm_mcsx_cpm_tx_slave_sc_expiry_actual_timeout_intr_rw_0 cavm_mcsx_cpm_tx_slave_sc_expiry_actual_timeout_intr_rw_0_t;

static inline uint64_t CAVM_MCSX_CPM_TX_SLAVE_SC_EXPIRY_ACTUAL_TIMEOUT_INTR_RW_0(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_MCSX_CPM_TX_SLAVE_SC_EXPIRY_ACTUAL_TIMEOUT_INTR_RW_0(uint64_t a)
{
    if (a<=6)
        return 0x87e0800054f8ll + 0x1000000ll * ((a) & 0x7);
    __cavm_csr_fatal("MCSX_CPM_TX_SLAVE_SC_EXPIRY_ACTUAL_TIMEOUT_INTR_RW_0", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_MCSX_CPM_TX_SLAVE_SC_EXPIRY_ACTUAL_TIMEOUT_INTR_RW_0(a) cavm_mcsx_cpm_tx_slave_sc_expiry_actual_timeout_intr_rw_0_t
#define bustype_CAVM_MCSX_CPM_TX_SLAVE_SC_EXPIRY_ACTUAL_TIMEOUT_INTR_RW_0(a) CSR_TYPE_RSL
#define basename_CAVM_MCSX_CPM_TX_SLAVE_SC_EXPIRY_ACTUAL_TIMEOUT_INTR_RW_0(a) "MCSX_CPM_TX_SLAVE_SC_EXPIRY_ACTUAL_TIMEOUT_INTR_RW_0"
#define device_bar_CAVM_MCSX_CPM_TX_SLAVE_SC_EXPIRY_ACTUAL_TIMEOUT_INTR_RW_0(a) 0x0 /* PF_BAR0 */
#define busnum_CAVM_MCSX_CPM_TX_SLAVE_SC_EXPIRY_ACTUAL_TIMEOUT_INTR_RW_0(a) (a)
#define arguments_CAVM_MCSX_CPM_TX_SLAVE_SC_EXPIRY_ACTUAL_TIMEOUT_INTR_RW_0(a) (a),-1,-1,-1

/**
 * Register (RSL) mcs#_cpm_tx_slave_sc_expiry_actual_timeout_raw_0
 *
 * MCS Cpm Tx Slave Sc Expiry Actual Timeout Raw 0 Register
 */
union cavm_mcsx_cpm_tx_slave_sc_expiry_actual_timeout_raw_0
{
    uint64_t u;
    struct cavm_mcsx_cpm_tx_slave_sc_expiry_actual_timeout_raw_0_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t sc_expiry_actual_timeout_int : 64;/**< [ 63:  0](RO) The corresponding SC indicated by the bit that is set has reached its configured
                                                                 actual-timeout threshold. */
#else /* Word 0 - Little Endian */
        uint64_t sc_expiry_actual_timeout_int : 64;/**< [ 63:  0](RO) The corresponding SC indicated by the bit that is set has reached its configured
                                                                 actual-timeout threshold. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_mcsx_cpm_tx_slave_sc_expiry_actual_timeout_raw_0_s cn; */
};
typedef union cavm_mcsx_cpm_tx_slave_sc_expiry_actual_timeout_raw_0 cavm_mcsx_cpm_tx_slave_sc_expiry_actual_timeout_raw_0_t;

static inline uint64_t CAVM_MCSX_CPM_TX_SLAVE_SC_EXPIRY_ACTUAL_TIMEOUT_RAW_0(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_MCSX_CPM_TX_SLAVE_SC_EXPIRY_ACTUAL_TIMEOUT_RAW_0(uint64_t a)
{
    if (a<=6)
        return 0x87e0800054f0ll + 0x1000000ll * ((a) & 0x7);
    __cavm_csr_fatal("MCSX_CPM_TX_SLAVE_SC_EXPIRY_ACTUAL_TIMEOUT_RAW_0", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_MCSX_CPM_TX_SLAVE_SC_EXPIRY_ACTUAL_TIMEOUT_RAW_0(a) cavm_mcsx_cpm_tx_slave_sc_expiry_actual_timeout_raw_0_t
#define bustype_CAVM_MCSX_CPM_TX_SLAVE_SC_EXPIRY_ACTUAL_TIMEOUT_RAW_0(a) CSR_TYPE_RSL
#define basename_CAVM_MCSX_CPM_TX_SLAVE_SC_EXPIRY_ACTUAL_TIMEOUT_RAW_0(a) "MCSX_CPM_TX_SLAVE_SC_EXPIRY_ACTUAL_TIMEOUT_RAW_0"
#define device_bar_CAVM_MCSX_CPM_TX_SLAVE_SC_EXPIRY_ACTUAL_TIMEOUT_RAW_0(a) 0x0 /* PF_BAR0 */
#define busnum_CAVM_MCSX_CPM_TX_SLAVE_SC_EXPIRY_ACTUAL_TIMEOUT_RAW_0(a) (a)
#define arguments_CAVM_MCSX_CPM_TX_SLAVE_SC_EXPIRY_ACTUAL_TIMEOUT_RAW_0(a) (a),-1,-1,-1

/**
 * Register (RSL) mcs#_cpm_tx_slave_sc_expiry_pre_timeout_0
 *
 * MCS Cpm Tx Slave Sc Expiry Pre Timeout 0 Register
 */
union cavm_mcsx_cpm_tx_slave_sc_expiry_pre_timeout_0
{
    uint64_t u;
    struct cavm_mcsx_cpm_tx_slave_sc_expiry_pre_timeout_0_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t sa_expiry_pre_timeout_int : 64;/**< [ 63:  0](R/W) The corresponding SC indicated by the bit that is set has reached its configured
                                                                 pre-timeout threshold. */
#else /* Word 0 - Little Endian */
        uint64_t sa_expiry_pre_timeout_int : 64;/**< [ 63:  0](R/W) The corresponding SC indicated by the bit that is set has reached its configured
                                                                 pre-timeout threshold. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_mcsx_cpm_tx_slave_sc_expiry_pre_timeout_0_s cn; */
};
typedef union cavm_mcsx_cpm_tx_slave_sc_expiry_pre_timeout_0 cavm_mcsx_cpm_tx_slave_sc_expiry_pre_timeout_0_t;

static inline uint64_t CAVM_MCSX_CPM_TX_SLAVE_SC_EXPIRY_PRE_TIMEOUT_0(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_MCSX_CPM_TX_SLAVE_SC_EXPIRY_PRE_TIMEOUT_0(uint64_t a)
{
    if (a<=6)
        return 0x87e0800054c0ll + 0x1000000ll * ((a) & 0x7);
    __cavm_csr_fatal("MCSX_CPM_TX_SLAVE_SC_EXPIRY_PRE_TIMEOUT_0", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_MCSX_CPM_TX_SLAVE_SC_EXPIRY_PRE_TIMEOUT_0(a) cavm_mcsx_cpm_tx_slave_sc_expiry_pre_timeout_0_t
#define bustype_CAVM_MCSX_CPM_TX_SLAVE_SC_EXPIRY_PRE_TIMEOUT_0(a) CSR_TYPE_RSL
#define basename_CAVM_MCSX_CPM_TX_SLAVE_SC_EXPIRY_PRE_TIMEOUT_0(a) "MCSX_CPM_TX_SLAVE_SC_EXPIRY_PRE_TIMEOUT_0"
#define device_bar_CAVM_MCSX_CPM_TX_SLAVE_SC_EXPIRY_PRE_TIMEOUT_0(a) 0x0 /* PF_BAR0 */
#define busnum_CAVM_MCSX_CPM_TX_SLAVE_SC_EXPIRY_PRE_TIMEOUT_0(a) (a)
#define arguments_CAVM_MCSX_CPM_TX_SLAVE_SC_EXPIRY_PRE_TIMEOUT_0(a) (a),-1,-1,-1

/**
 * Register (RSL) mcs#_cpm_tx_slave_sc_expiry_pre_timeout_enb_0
 *
 * MCS Cpm Tx Slave Sc Expiry Pre Timeout Enb 0 Register
 */
union cavm_mcsx_cpm_tx_slave_sc_expiry_pre_timeout_enb_0
{
    uint64_t u;
    struct cavm_mcsx_cpm_tx_slave_sc_expiry_pre_timeout_enb_0_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t sa_expiry_pre_timeout_int_enb : 64;/**< [ 63:  0](R/W) The corresponding SC indicated by the bit that is set has reached its configured
                                                                 pre-timeout threshold. */
#else /* Word 0 - Little Endian */
        uint64_t sa_expiry_pre_timeout_int_enb : 64;/**< [ 63:  0](R/W) The corresponding SC indicated by the bit that is set has reached its configured
                                                                 pre-timeout threshold. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_mcsx_cpm_tx_slave_sc_expiry_pre_timeout_enb_0_s cn; */
};
typedef union cavm_mcsx_cpm_tx_slave_sc_expiry_pre_timeout_enb_0 cavm_mcsx_cpm_tx_slave_sc_expiry_pre_timeout_enb_0_t;

static inline uint64_t CAVM_MCSX_CPM_TX_SLAVE_SC_EXPIRY_PRE_TIMEOUT_ENB_0(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_MCSX_CPM_TX_SLAVE_SC_EXPIRY_PRE_TIMEOUT_ENB_0(uint64_t a)
{
    if (a<=6)
        return 0x87e0800054c8ll + 0x1000000ll * ((a) & 0x7);
    __cavm_csr_fatal("MCSX_CPM_TX_SLAVE_SC_EXPIRY_PRE_TIMEOUT_ENB_0", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_MCSX_CPM_TX_SLAVE_SC_EXPIRY_PRE_TIMEOUT_ENB_0(a) cavm_mcsx_cpm_tx_slave_sc_expiry_pre_timeout_enb_0_t
#define bustype_CAVM_MCSX_CPM_TX_SLAVE_SC_EXPIRY_PRE_TIMEOUT_ENB_0(a) CSR_TYPE_RSL
#define basename_CAVM_MCSX_CPM_TX_SLAVE_SC_EXPIRY_PRE_TIMEOUT_ENB_0(a) "MCSX_CPM_TX_SLAVE_SC_EXPIRY_PRE_TIMEOUT_ENB_0"
#define device_bar_CAVM_MCSX_CPM_TX_SLAVE_SC_EXPIRY_PRE_TIMEOUT_ENB_0(a) 0x0 /* PF_BAR0 */
#define busnum_CAVM_MCSX_CPM_TX_SLAVE_SC_EXPIRY_PRE_TIMEOUT_ENB_0(a) (a)
#define arguments_CAVM_MCSX_CPM_TX_SLAVE_SC_EXPIRY_PRE_TIMEOUT_ENB_0(a) (a),-1,-1,-1

/**
 * Register (RSL) mcs#_cpm_tx_slave_sc_expiry_pre_timeout_intr_rw_0
 *
 * MCS Cpm Tx Slave Sc Expiry Pre Timeout Intr Rw 0 Register
 */
union cavm_mcsx_cpm_tx_slave_sc_expiry_pre_timeout_intr_rw_0
{
    uint64_t u;
    struct cavm_mcsx_cpm_tx_slave_sc_expiry_pre_timeout_intr_rw_0_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t sa_expiry_pre_timeout_int : 64;/**< [ 63:  0](R/W) The corresponding SC indicated by the bit that is set has reached its configured
                                                                 pre-timeout threshold. */
#else /* Word 0 - Little Endian */
        uint64_t sa_expiry_pre_timeout_int : 64;/**< [ 63:  0](R/W) The corresponding SC indicated by the bit that is set has reached its configured
                                                                 pre-timeout threshold. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_mcsx_cpm_tx_slave_sc_expiry_pre_timeout_intr_rw_0_s cn; */
};
typedef union cavm_mcsx_cpm_tx_slave_sc_expiry_pre_timeout_intr_rw_0 cavm_mcsx_cpm_tx_slave_sc_expiry_pre_timeout_intr_rw_0_t;

static inline uint64_t CAVM_MCSX_CPM_TX_SLAVE_SC_EXPIRY_PRE_TIMEOUT_INTR_RW_0(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_MCSX_CPM_TX_SLAVE_SC_EXPIRY_PRE_TIMEOUT_INTR_RW_0(uint64_t a)
{
    if (a<=6)
        return 0x87e0800054d8ll + 0x1000000ll * ((a) & 0x7);
    __cavm_csr_fatal("MCSX_CPM_TX_SLAVE_SC_EXPIRY_PRE_TIMEOUT_INTR_RW_0", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_MCSX_CPM_TX_SLAVE_SC_EXPIRY_PRE_TIMEOUT_INTR_RW_0(a) cavm_mcsx_cpm_tx_slave_sc_expiry_pre_timeout_intr_rw_0_t
#define bustype_CAVM_MCSX_CPM_TX_SLAVE_SC_EXPIRY_PRE_TIMEOUT_INTR_RW_0(a) CSR_TYPE_RSL
#define basename_CAVM_MCSX_CPM_TX_SLAVE_SC_EXPIRY_PRE_TIMEOUT_INTR_RW_0(a) "MCSX_CPM_TX_SLAVE_SC_EXPIRY_PRE_TIMEOUT_INTR_RW_0"
#define device_bar_CAVM_MCSX_CPM_TX_SLAVE_SC_EXPIRY_PRE_TIMEOUT_INTR_RW_0(a) 0x0 /* PF_BAR0 */
#define busnum_CAVM_MCSX_CPM_TX_SLAVE_SC_EXPIRY_PRE_TIMEOUT_INTR_RW_0(a) (a)
#define arguments_CAVM_MCSX_CPM_TX_SLAVE_SC_EXPIRY_PRE_TIMEOUT_INTR_RW_0(a) (a),-1,-1,-1

/**
 * Register (RSL) mcs#_cpm_tx_slave_sc_expiry_pre_timeout_raw_0
 *
 * MCS Cpm Tx Slave Sc Expiry Pre Timeout Raw 0 Register
 */
union cavm_mcsx_cpm_tx_slave_sc_expiry_pre_timeout_raw_0
{
    uint64_t u;
    struct cavm_mcsx_cpm_tx_slave_sc_expiry_pre_timeout_raw_0_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t sa_expiry_pre_timeout_int : 64;/**< [ 63:  0](RO) The corresponding SC indicated by the bit that is set has reached its configured
                                                                 pre-timeout threshold. */
#else /* Word 0 - Little Endian */
        uint64_t sa_expiry_pre_timeout_int : 64;/**< [ 63:  0](RO) The corresponding SC indicated by the bit that is set has reached its configured
                                                                 pre-timeout threshold. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_mcsx_cpm_tx_slave_sc_expiry_pre_timeout_raw_0_s cn; */
};
typedef union cavm_mcsx_cpm_tx_slave_sc_expiry_pre_timeout_raw_0 cavm_mcsx_cpm_tx_slave_sc_expiry_pre_timeout_raw_0_t;

static inline uint64_t CAVM_MCSX_CPM_TX_SLAVE_SC_EXPIRY_PRE_TIMEOUT_RAW_0(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_MCSX_CPM_TX_SLAVE_SC_EXPIRY_PRE_TIMEOUT_RAW_0(uint64_t a)
{
    if (a<=6)
        return 0x87e0800054d0ll + 0x1000000ll * ((a) & 0x7);
    __cavm_csr_fatal("MCSX_CPM_TX_SLAVE_SC_EXPIRY_PRE_TIMEOUT_RAW_0", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_MCSX_CPM_TX_SLAVE_SC_EXPIRY_PRE_TIMEOUT_RAW_0(a) cavm_mcsx_cpm_tx_slave_sc_expiry_pre_timeout_raw_0_t
#define bustype_CAVM_MCSX_CPM_TX_SLAVE_SC_EXPIRY_PRE_TIMEOUT_RAW_0(a) CSR_TYPE_RSL
#define basename_CAVM_MCSX_CPM_TX_SLAVE_SC_EXPIRY_PRE_TIMEOUT_RAW_0(a) "MCSX_CPM_TX_SLAVE_SC_EXPIRY_PRE_TIMEOUT_RAW_0"
#define device_bar_CAVM_MCSX_CPM_TX_SLAVE_SC_EXPIRY_PRE_TIMEOUT_RAW_0(a) 0x0 /* PF_BAR0 */
#define busnum_CAVM_MCSX_CPM_TX_SLAVE_SC_EXPIRY_PRE_TIMEOUT_RAW_0(a) (a)
#define arguments_CAVM_MCSX_CPM_TX_SLAVE_SC_EXPIRY_PRE_TIMEOUT_RAW_0(a) (a),-1,-1,-1

/**
 * Register (RSL) mcs#_cpm_tx_slave_sc_timer_config#
 *
 * MCS Cpm Tx Slave Sc Timer Config Register
 */
union cavm_mcsx_cpm_tx_slave_sc_timer_configx
{
    uint64_t u;
    struct cavm_mcsx_cpm_tx_slave_sc_timer_configx_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_13_63        : 51;
        uint64_t enable                : 1;  /**< [ 12: 12](R/W) Configures if the corresponding SC is enabled for SC timer expiry.
                                                                 If the corresponding SC bit is set, then that SC is enabled for SC timer expiry.
                                                                 If not set, then the SC timer will not increment, nor generate any interrupts. */
        uint64_t reserved_9_11         : 3;
        uint64_t start_mode            : 1;  /**< [  8:  8](R/W) Configures what starts the corresponding SC's timer. 0 -greater than
                                                                 START_ON_FIRST_PKT; 1 -greater than START_ON_REKEY;
                                                                 It can be either a) when the first packet on that SC is received
                                                                 (START_ON_FIRST_PKT) or b) when a rekey event occurs (START_ON_REKEY).
                                                                 If the corresponding SC bit is set, then that SC is configured for
                                                                 StartOnFirstPkt, else it is configured for START_ON_REKEY. */
        uint64_t reserved_6_7          : 2;
        uint64_t actual_timeout_thresh_select : 2;/**< [  5:  4](R/W) Configures which of the 4 possible sc_timer_timeout_thresh[] values is used to
                                                                 generate the corresponding SC's actual_timeout_threshold interrupt. */
        uint64_t reserved_2_3          : 2;
        uint64_t pre_timeout_thresh_select : 2;/**< [  1:  0](R/W) Configures which of the 4 possible sc_timer_timeout_thresh[] values is used to
                                                                 generate the corresponding SC's pre_timeout_threshold interrupt. */
#else /* Word 0 - Little Endian */
        uint64_t pre_timeout_thresh_select : 2;/**< [  1:  0](R/W) Configures which of the 4 possible sc_timer_timeout_thresh[] values is used to
                                                                 generate the corresponding SC's pre_timeout_threshold interrupt. */
        uint64_t reserved_2_3          : 2;
        uint64_t actual_timeout_thresh_select : 2;/**< [  5:  4](R/W) Configures which of the 4 possible sc_timer_timeout_thresh[] values is used to
                                                                 generate the corresponding SC's actual_timeout_threshold interrupt. */
        uint64_t reserved_6_7          : 2;
        uint64_t start_mode            : 1;  /**< [  8:  8](R/W) Configures what starts the corresponding SC's timer. 0 -greater than
                                                                 START_ON_FIRST_PKT; 1 -greater than START_ON_REKEY;
                                                                 It can be either a) when the first packet on that SC is received
                                                                 (START_ON_FIRST_PKT) or b) when a rekey event occurs (START_ON_REKEY).
                                                                 If the corresponding SC bit is set, then that SC is configured for
                                                                 StartOnFirstPkt, else it is configured for START_ON_REKEY. */
        uint64_t reserved_9_11         : 3;
        uint64_t enable                : 1;  /**< [ 12: 12](R/W) Configures if the corresponding SC is enabled for SC timer expiry.
                                                                 If the corresponding SC bit is set, then that SC is enabled for SC timer expiry.
                                                                 If not set, then the SC timer will not increment, nor generate any interrupts. */
        uint64_t reserved_13_63        : 51;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_mcsx_cpm_tx_slave_sc_timer_configx_s cn; */
};
typedef union cavm_mcsx_cpm_tx_slave_sc_timer_configx cavm_mcsx_cpm_tx_slave_sc_timer_configx_t;

static inline uint64_t CAVM_MCSX_CPM_TX_SLAVE_SC_TIMER_CONFIGX(uint64_t a, uint64_t b) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_MCSX_CPM_TX_SLAVE_SC_TIMER_CONFIGX(uint64_t a, uint64_t b)
{
    if ((a<=6) && (b<=63))
        return 0x87e08000b808ll + 0x1000000ll * ((a) & 0x7) + 8ll * ((b) & 0x3f);
    __cavm_csr_fatal("MCSX_CPM_TX_SLAVE_SC_TIMER_CONFIGX", 2, a, b, 0, 0, 0, 0);
}

#define typedef_CAVM_MCSX_CPM_TX_SLAVE_SC_TIMER_CONFIGX(a,b) cavm_mcsx_cpm_tx_slave_sc_timer_configx_t
#define bustype_CAVM_MCSX_CPM_TX_SLAVE_SC_TIMER_CONFIGX(a,b) CSR_TYPE_RSL
#define basename_CAVM_MCSX_CPM_TX_SLAVE_SC_TIMER_CONFIGX(a,b) "MCSX_CPM_TX_SLAVE_SC_TIMER_CONFIGX"
#define device_bar_CAVM_MCSX_CPM_TX_SLAVE_SC_TIMER_CONFIGX(a,b) 0x0 /* PF_BAR0 */
#define busnum_CAVM_MCSX_CPM_TX_SLAVE_SC_TIMER_CONFIGX(a,b) (a)
#define arguments_CAVM_MCSX_CPM_TX_SLAVE_SC_TIMER_CONFIGX(a,b) (a),(b),-1,-1

/**
 * Register (RSL) mcs#_cpm_tx_slave_sc_timer_mem#
 *
 * MCS Cpm Tx Slave Sc Timer Mem Register
 */
union cavm_mcsx_cpm_tx_slave_sc_timer_memx
{
    uint64_t u;
    struct cavm_mcsx_cpm_tx_slave_sc_timer_memx_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_32_63        : 32;
        uint64_t timer                 : 32; /**< [ 31:  0](R/W) 32b per SC timer. */
#else /* Word 0 - Little Endian */
        uint64_t timer                 : 32; /**< [ 31:  0](R/W) 32b per SC timer. */
        uint64_t reserved_32_63        : 32;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_mcsx_cpm_tx_slave_sc_timer_memx_s cn; */
};
typedef union cavm_mcsx_cpm_tx_slave_sc_timer_memx cavm_mcsx_cpm_tx_slave_sc_timer_memx_t;

static inline uint64_t CAVM_MCSX_CPM_TX_SLAVE_SC_TIMER_MEMX(uint64_t a, uint64_t b) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_MCSX_CPM_TX_SLAVE_SC_TIMER_MEMX(uint64_t a, uint64_t b)
{
    if ((a<=6) && (b<=63))
        return 0x87e08000ba08ll + 0x1000000ll * ((a) & 0x7) + 8ll * ((b) & 0x3f);
    __cavm_csr_fatal("MCSX_CPM_TX_SLAVE_SC_TIMER_MEMX", 2, a, b, 0, 0, 0, 0);
}

#define typedef_CAVM_MCSX_CPM_TX_SLAVE_SC_TIMER_MEMX(a,b) cavm_mcsx_cpm_tx_slave_sc_timer_memx_t
#define bustype_CAVM_MCSX_CPM_TX_SLAVE_SC_TIMER_MEMX(a,b) CSR_TYPE_RSL
#define basename_CAVM_MCSX_CPM_TX_SLAVE_SC_TIMER_MEMX(a,b) "MCSX_CPM_TX_SLAVE_SC_TIMER_MEMX"
#define device_bar_CAVM_MCSX_CPM_TX_SLAVE_SC_TIMER_MEMX(a,b) 0x0 /* PF_BAR0 */
#define busnum_CAVM_MCSX_CPM_TX_SLAVE_SC_TIMER_MEMX(a,b) (a)
#define arguments_CAVM_MCSX_CPM_TX_SLAVE_SC_TIMER_MEMX(a,b) (a),(b),-1,-1

/**
 * Register (RSL) mcs#_cpm_tx_slave_sc_timer_reset_all_go
 *
 * MCS Cpm Tx Slave Sc Timer Reset All Go Register
 */
union cavm_mcsx_cpm_tx_slave_sc_timer_reset_all_go
{
    uint64_t u;
    struct cavm_mcsx_cpm_tx_slave_sc_timer_reset_all_go_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_1_63         : 63;
        uint64_t reset                 : 1;  /**< [  0:  0](R/W) If the corresponding SC bit is set, then all the SC timers will be zeroed out.
                                                                 This bit is cleared by HW once all the corresponding SC timers are cleared. */
#else /* Word 0 - Little Endian */
        uint64_t reset                 : 1;  /**< [  0:  0](R/W) If the corresponding SC bit is set, then all the SC timers will be zeroed out.
                                                                 This bit is cleared by HW once all the corresponding SC timers are cleared. */
        uint64_t reserved_1_63         : 63;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_mcsx_cpm_tx_slave_sc_timer_reset_all_go_s cn; */
};
typedef union cavm_mcsx_cpm_tx_slave_sc_timer_reset_all_go cavm_mcsx_cpm_tx_slave_sc_timer_reset_all_go_t;

static inline uint64_t CAVM_MCSX_CPM_TX_SLAVE_SC_TIMER_RESET_ALL_GO(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_MCSX_CPM_TX_SLAVE_SC_TIMER_RESET_ALL_GO(uint64_t a)
{
    if (a<=6)
        return 0x87e08000b7c8ll + 0x1000000ll * ((a) & 0x7);
    __cavm_csr_fatal("MCSX_CPM_TX_SLAVE_SC_TIMER_RESET_ALL_GO", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_MCSX_CPM_TX_SLAVE_SC_TIMER_RESET_ALL_GO(a) cavm_mcsx_cpm_tx_slave_sc_timer_reset_all_go_t
#define bustype_CAVM_MCSX_CPM_TX_SLAVE_SC_TIMER_RESET_ALL_GO(a) CSR_TYPE_RSL
#define basename_CAVM_MCSX_CPM_TX_SLAVE_SC_TIMER_RESET_ALL_GO(a) "MCSX_CPM_TX_SLAVE_SC_TIMER_RESET_ALL_GO"
#define device_bar_CAVM_MCSX_CPM_TX_SLAVE_SC_TIMER_RESET_ALL_GO(a) 0x0 /* PF_BAR0 */
#define busnum_CAVM_MCSX_CPM_TX_SLAVE_SC_TIMER_RESET_ALL_GO(a) (a)
#define arguments_CAVM_MCSX_CPM_TX_SLAVE_SC_TIMER_RESET_ALL_GO(a) (a),-1,-1,-1

/**
 * Register (RSL) mcs#_cpm_tx_slave_sc_timer_rsvd1
 *
 * MCS Cpm Tx Slave Sc Timer Rsvd1 Register
 */
union cavm_mcsx_cpm_tx_slave_sc_timer_rsvd1
{
    uint64_t u;
    struct cavm_mcsx_cpm_tx_slave_sc_timer_rsvd1_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_0_63         : 64;
#else /* Word 0 - Little Endian */
        uint64_t reserved_0_63         : 64;
#endif /* Word 0 - End */
    } s;
    struct cavm_mcsx_cpm_tx_slave_sc_timer_rsvd1_cn
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
typedef union cavm_mcsx_cpm_tx_slave_sc_timer_rsvd1 cavm_mcsx_cpm_tx_slave_sc_timer_rsvd1_t;

static inline uint64_t CAVM_MCSX_CPM_TX_SLAVE_SC_TIMER_RSVD1(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_MCSX_CPM_TX_SLAVE_SC_TIMER_RSVD1(uint64_t a)
{
    if (a<=6)
        return 0x87e08000b7d8ll + 0x1000000ll * ((a) & 0x7);
    __cavm_csr_fatal("MCSX_CPM_TX_SLAVE_SC_TIMER_RSVD1", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_MCSX_CPM_TX_SLAVE_SC_TIMER_RSVD1(a) cavm_mcsx_cpm_tx_slave_sc_timer_rsvd1_t
#define bustype_CAVM_MCSX_CPM_TX_SLAVE_SC_TIMER_RSVD1(a) CSR_TYPE_RSL
#define basename_CAVM_MCSX_CPM_TX_SLAVE_SC_TIMER_RSVD1(a) "MCSX_CPM_TX_SLAVE_SC_TIMER_RSVD1"
#define device_bar_CAVM_MCSX_CPM_TX_SLAVE_SC_TIMER_RSVD1(a) 0x0 /* PF_BAR0 */
#define busnum_CAVM_MCSX_CPM_TX_SLAVE_SC_TIMER_RSVD1(a) (a)
#define arguments_CAVM_MCSX_CPM_TX_SLAVE_SC_TIMER_RSVD1(a) (a),-1,-1,-1

/**
 * Register (RSL) mcs#_cpm_tx_slave_sc_timer_rsvd2
 *
 * MCS Cpm Tx Slave Sc Timer Rsvd2 Register
 */
union cavm_mcsx_cpm_tx_slave_sc_timer_rsvd2
{
    uint64_t u;
    struct cavm_mcsx_cpm_tx_slave_sc_timer_rsvd2_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_0_63         : 64;
#else /* Word 0 - Little Endian */
        uint64_t reserved_0_63         : 64;
#endif /* Word 0 - End */
    } s;
    struct cavm_mcsx_cpm_tx_slave_sc_timer_rsvd2_cn
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
typedef union cavm_mcsx_cpm_tx_slave_sc_timer_rsvd2 cavm_mcsx_cpm_tx_slave_sc_timer_rsvd2_t;

static inline uint64_t CAVM_MCSX_CPM_TX_SLAVE_SC_TIMER_RSVD2(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_MCSX_CPM_TX_SLAVE_SC_TIMER_RSVD2(uint64_t a)
{
    if (a<=6)
        return 0x87e08000b7e0ll + 0x1000000ll * ((a) & 0x7);
    __cavm_csr_fatal("MCSX_CPM_TX_SLAVE_SC_TIMER_RSVD2", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_MCSX_CPM_TX_SLAVE_SC_TIMER_RSVD2(a) cavm_mcsx_cpm_tx_slave_sc_timer_rsvd2_t
#define bustype_CAVM_MCSX_CPM_TX_SLAVE_SC_TIMER_RSVD2(a) CSR_TYPE_RSL
#define basename_CAVM_MCSX_CPM_TX_SLAVE_SC_TIMER_RSVD2(a) "MCSX_CPM_TX_SLAVE_SC_TIMER_RSVD2"
#define device_bar_CAVM_MCSX_CPM_TX_SLAVE_SC_TIMER_RSVD2(a) 0x0 /* PF_BAR0 */
#define busnum_CAVM_MCSX_CPM_TX_SLAVE_SC_TIMER_RSVD2(a) (a)
#define arguments_CAVM_MCSX_CPM_TX_SLAVE_SC_TIMER_RSVD2(a) (a),-1,-1,-1

/**
 * Register (RSL) mcs#_cpm_tx_slave_sc_timer_start_go_0
 *
 * MCS Cpm Tx Slave Sc Timer Start Go 0 Register
 */
union cavm_mcsx_cpm_tx_slave_sc_timer_start_go_0
{
    uint64_t u;
    struct cavm_mcsx_cpm_tx_slave_sc_timer_start_go_0_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t sc                    : 64; /**< [ 63:  0](R/W) If the corresponding SC bit is set, then the SC timer process will begin
                                                                 execution according to its configuration settings.
                                                                 This bit is cleared by HW once the corresponding SC timer is cleared and is ready for counting. */
#else /* Word 0 - Little Endian */
        uint64_t sc                    : 64; /**< [ 63:  0](R/W) If the corresponding SC bit is set, then the SC timer process will begin
                                                                 execution according to its configuration settings.
                                                                 This bit is cleared by HW once the corresponding SC timer is cleared and is ready for counting. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_mcsx_cpm_tx_slave_sc_timer_start_go_0_s cn; */
};
typedef union cavm_mcsx_cpm_tx_slave_sc_timer_start_go_0 cavm_mcsx_cpm_tx_slave_sc_timer_start_go_0_t;

static inline uint64_t CAVM_MCSX_CPM_TX_SLAVE_SC_TIMER_START_GO_0(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_MCSX_CPM_TX_SLAVE_SC_TIMER_START_GO_0(uint64_t a)
{
    if (a<=6)
        return 0x87e08000b7d0ll + 0x1000000ll * ((a) & 0x7);
    __cavm_csr_fatal("MCSX_CPM_TX_SLAVE_SC_TIMER_START_GO_0", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_MCSX_CPM_TX_SLAVE_SC_TIMER_START_GO_0(a) cavm_mcsx_cpm_tx_slave_sc_timer_start_go_0_t
#define bustype_CAVM_MCSX_CPM_TX_SLAVE_SC_TIMER_START_GO_0(a) CSR_TYPE_RSL
#define basename_CAVM_MCSX_CPM_TX_SLAVE_SC_TIMER_START_GO_0(a) "MCSX_CPM_TX_SLAVE_SC_TIMER_START_GO_0"
#define device_bar_CAVM_MCSX_CPM_TX_SLAVE_SC_TIMER_START_GO_0(a) 0x0 /* PF_BAR0 */
#define busnum_CAVM_MCSX_CPM_TX_SLAVE_SC_TIMER_START_GO_0(a) (a)
#define arguments_CAVM_MCSX_CPM_TX_SLAVE_SC_TIMER_START_GO_0(a) (a),-1,-1,-1

/**
 * Register (RSL) mcs#_cpm_tx_slave_sc_timer_timeout_thresh#
 *
 * MCS Cpm Tx Slave Sc Timer Timeout Thresh Register
 */
union cavm_mcsx_cpm_tx_slave_sc_timer_timeout_threshx
{
    uint64_t u;
    struct cavm_mcsx_cpm_tx_slave_sc_timer_timeout_threshx_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_32_63        : 32;
        uint64_t threshold             : 32; /**< [ 31:  0](R/W) One of 4 configurable thresholds which can be used to generate an interrupt if
                                                                 the corresponding SC's timer reaches the selected threshold. */
#else /* Word 0 - Little Endian */
        uint64_t threshold             : 32; /**< [ 31:  0](R/W) One of 4 configurable thresholds which can be used to generate an interrupt if
                                                                 the corresponding SC's timer reaches the selected threshold. */
        uint64_t reserved_32_63        : 32;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_mcsx_cpm_tx_slave_sc_timer_timeout_threshx_s cn; */
};
typedef union cavm_mcsx_cpm_tx_slave_sc_timer_timeout_threshx cavm_mcsx_cpm_tx_slave_sc_timer_timeout_threshx_t;

static inline uint64_t CAVM_MCSX_CPM_TX_SLAVE_SC_TIMER_TIMEOUT_THRESHX(uint64_t a, uint64_t b) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_MCSX_CPM_TX_SLAVE_SC_TIMER_TIMEOUT_THRESHX(uint64_t a, uint64_t b)
{
    if ((a<=6) && (b<=3))
        return 0x87e08000b7e8ll + 0x1000000ll * ((a) & 0x7) + 8ll * ((b) & 0x3);
    __cavm_csr_fatal("MCSX_CPM_TX_SLAVE_SC_TIMER_TIMEOUT_THRESHX", 2, a, b, 0, 0, 0, 0);
}

#define typedef_CAVM_MCSX_CPM_TX_SLAVE_SC_TIMER_TIMEOUT_THRESHX(a,b) cavm_mcsx_cpm_tx_slave_sc_timer_timeout_threshx_t
#define bustype_CAVM_MCSX_CPM_TX_SLAVE_SC_TIMER_TIMEOUT_THRESHX(a,b) CSR_TYPE_RSL
#define basename_CAVM_MCSX_CPM_TX_SLAVE_SC_TIMER_TIMEOUT_THRESHX(a,b) "MCSX_CPM_TX_SLAVE_SC_TIMER_TIMEOUT_THRESHX"
#define device_bar_CAVM_MCSX_CPM_TX_SLAVE_SC_TIMER_TIMEOUT_THRESHX(a,b) 0x0 /* PF_BAR0 */
#define busnum_CAVM_MCSX_CPM_TX_SLAVE_SC_TIMER_TIMEOUT_THRESHX(a,b) (a)
#define arguments_CAVM_MCSX_CPM_TX_SLAVE_SC_TIMER_TIMEOUT_THRESHX(a,b) (a),(b),-1,-1

/**
 * Register (RSL) mcs#_cpm_tx_slave_secy_map_mem_0#
 *
 * MCS Cpm Tx Slave Secy Map Mem 0 Register
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
    if ((a<=6) && (b<=63))
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
    if ((a<=6) && (b<=63))
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
 */
union cavm_mcsx_cpm_tx_slave_secy_plcy_memx
{
    uint64_t u;
    struct cavm_mcsx_cpm_tx_slave_secy_plcy_memx_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t mtu                   : 16; /**< [ 63: 48](R/W) Specifies the outgoing MTU for this SecY. The MTU must be checked on egress to
                                                                 ensure compliance with the configured MTU due to the expansion that occurs
                                                                 because of inserting the SecTag and ICV into the frame. MTU violation causes CRC
                                                                 corruption in the outgoing frame. The MTU is checked on EOP by comparing this
                                                                 value against the actual computed packet length. Violation causes the packet to
                                                                 be truncated and EOP-errored. */
        uint64_t reserved_46_47        : 2;
        uint64_t sectag_tci            : 6;  /**< [ 45: 40](R/W) Tag Control Information excluding the AN field which originates from the SA
                                                                 Policy table. This field is inserted into the SecTag of the outgoing packet. */
        uint64_t reserved_39           : 1;
        uint64_t sectag_offset         : 7;  /**< [ 38: 32](R/W) Defines the offset in bytes from either the start of the packet or a matching
                                                                 Etype depending on SecTag_Insertion_Mode.
                                                                 SecTag can only be inserted into the first 128B of the frame. */
        uint64_t reserved_31           : 1;
        uint64_t sectag_insert_mode    : 1;  /**< [ 30: 30](R/W) Defines how to handle SecTag insertion on egress. 0= SecTag is inserted at
                                                                 SecTag_Offset bytes following an E-Type matching a special E-Type value
                                                                 (Relative Offset Mode).
                                                                 1= SecTag is inserted at SecTag_Offset bytes from the first byte of the outer DA
                                                                 (Fixed Offset Mode). */
        uint64_t reserved_29           : 1;
        uint64_t icv_includes_da_sa    : 1;  /**< [ 28: 28](R/W) When set, the outer DA/SA bytes are included in the authentication GHASH
                                                                 calculation. Both standard MACsec and WAN based MACsec with VLAN tags in the
                                                                 clear require the DA+SA to be included in the authentication. WAN based MPLS
                                                                 MACsec would typically have the DA+SA excluded from authentication since these
                                                                 fields can be modified by the NextHop lookup in MPLS routers. */
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
        uint64_t icv_includes_da_sa    : 1;  /**< [ 28: 28](R/W) When set, the outer DA/SA bytes are included in the authentication GHASH
                                                                 calculation. Both standard MACsec and WAN based MACsec with VLAN tags in the
                                                                 clear require the DA+SA to be included in the authentication. WAN based MPLS
                                                                 MACsec would typically have the DA+SA excluded from authentication since these
                                                                 fields can be modified by the NextHop lookup in MPLS routers. */
        uint64_t reserved_29           : 1;
        uint64_t sectag_insert_mode    : 1;  /**< [ 30: 30](R/W) Defines how to handle SecTag insertion on egress. 0= SecTag is inserted at
                                                                 SecTag_Offset bytes following an E-Type matching a special E-Type value
                                                                 (Relative Offset Mode).
                                                                 1= SecTag is inserted at SecTag_Offset bytes from the first byte of the outer DA
                                                                 (Fixed Offset Mode). */
        uint64_t reserved_31           : 1;
        uint64_t sectag_offset         : 7;  /**< [ 38: 32](R/W) Defines the offset in bytes from either the start of the packet or a matching
                                                                 Etype depending on SecTag_Insertion_Mode.
                                                                 SecTag can only be inserted into the first 128B of the frame. */
        uint64_t reserved_39           : 1;
        uint64_t sectag_tci            : 6;  /**< [ 45: 40](R/W) Tag Control Information excluding the AN field which originates from the SA
                                                                 Policy table. This field is inserted into the SecTag of the outgoing packet. */
        uint64_t reserved_46_47        : 2;
        uint64_t mtu                   : 16; /**< [ 63: 48](R/W) Specifies the outgoing MTU for this SecY. The MTU must be checked on egress to
                                                                 ensure compliance with the configured MTU due to the expansion that occurs
                                                                 because of inserting the SecTag and ICV into the frame. MTU violation causes CRC
                                                                 corruption in the outgoing frame. The MTU is checked on EOP by comparing this
                                                                 value against the actual computed packet length. Violation causes the packet to
                                                                 be truncated and EOP-errored. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_mcsx_cpm_tx_slave_secy_plcy_memx_s cn; */
};
typedef union cavm_mcsx_cpm_tx_slave_secy_plcy_memx cavm_mcsx_cpm_tx_slave_secy_plcy_memx_t;

static inline uint64_t CAVM_MCSX_CPM_TX_SLAVE_SECY_PLCY_MEMX(uint64_t a, uint64_t b) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_MCSX_CPM_TX_SLAVE_SECY_PLCY_MEMX(uint64_t a, uint64_t b)
{
    if ((a<=6) && (b<=63))
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
 * Register (RSL) mcs#_cpm_tx_slave_time_unit_tick
 *
 * MCS Cpm Tx Slave Time Unit Tick Register
 */
union cavm_mcsx_cpm_tx_slave_time_unit_tick
{
    uint64_t u;
    struct cavm_mcsx_cpm_tx_slave_time_unit_tick_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_32_63        : 32;
        uint64_t num_cycles            : 32; /**< [ 31:  0](R/W) Num_cycles*(core_clk period) is the period of the time_unit_tick. */
#else /* Word 0 - Little Endian */
        uint64_t num_cycles            : 32; /**< [ 31:  0](R/W) Num_cycles*(core_clk period) is the period of the time_unit_tick. */
        uint64_t reserved_32_63        : 32;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_mcsx_cpm_tx_slave_time_unit_tick_s cn; */
};
typedef union cavm_mcsx_cpm_tx_slave_time_unit_tick cavm_mcsx_cpm_tx_slave_time_unit_tick_t;

static inline uint64_t CAVM_MCSX_CPM_TX_SLAVE_TIME_UNIT_TICK(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_MCSX_CPM_TX_SLAVE_TIME_UNIT_TICK(uint64_t a)
{
    if (a<=6)
        return 0x87e08000b7c0ll + 0x1000000ll * ((a) & 0x7);
    __cavm_csr_fatal("MCSX_CPM_TX_SLAVE_TIME_UNIT_TICK", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_MCSX_CPM_TX_SLAVE_TIME_UNIT_TICK(a) cavm_mcsx_cpm_tx_slave_time_unit_tick_t
#define bustype_CAVM_MCSX_CPM_TX_SLAVE_TIME_UNIT_TICK(a) CSR_TYPE_RSL
#define basename_CAVM_MCSX_CPM_TX_SLAVE_TIME_UNIT_TICK(a) "MCSX_CPM_TX_SLAVE_TIME_UNIT_TICK"
#define device_bar_CAVM_MCSX_CPM_TX_SLAVE_TIME_UNIT_TICK(a) 0x0 /* PF_BAR0 */
#define busnum_CAVM_MCSX_CPM_TX_SLAVE_TIME_UNIT_TICK(a) (a)
#define arguments_CAVM_MCSX_CPM_TX_SLAVE_TIME_UNIT_TICK(a) (a),-1,-1,-1

/**
 * Register (RSL) mcs#_cpm_tx_slave_tx_flowid_tcam_enable_0
 *
 * MCS Cpm Tx Slave Tx Flowid Tcam Enable 0 Register
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
    if (a<=6)
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
    if ((a<=6) && (b<=3))
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
    if ((a<=6) && (b<=63))
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
    if (a<=6)
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
    if ((a<=6) && (b<=63))
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
    if ((a<=6) && (b<=63))
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
    if ((a<=6) && (b<=63))
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
    if ((a<=6) && (b<=63))
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
    if ((a<=6) && (b<=63))
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
    if ((a<=6) && (b<=63))
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
    if ((a<=6) && (b<=63))
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
    if ((a<=6) && (b<=63))
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
    if ((a<=6) && (b<=63))
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
    if ((a<=6) && (b<=63))
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
    if ((a<=6) && (b<=63))
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
    if ((a<=6) && (b<=3))
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
    if ((a<=6) && (b<=63))
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
    if ((a<=6) && (b<=3))
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
    if ((a<=6) && (b<=3))
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
    if ((a<=6) && (b<=63))
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
    if ((a<=6) && (b<=63))
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
    if ((a<=6) && (b<=63))
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
    if ((a<=6) && (b<=63))
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
    if ((a<=6) && (b<=63))
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
    if ((a<=6) && (b<=63))
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
    if ((a<=6) && (b<=63))
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
    if ((a<=6) && (b<=63))
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
    if ((a<=6) && (b<=63))
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
    if ((a<=6) && (b<=63))
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
 */
union cavm_mcsx_cse_rx_mem_slave_inpktssecynotagx
{
    uint64_t u;
    struct cavm_mcsx_cse_rx_mem_slave_inpktssecynotagx_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t rx_secy_pkt_notag_cnt : 64; /**< [ 63:  0](R/W) The number of received packets without a SecTag received discarded because
                                                                 SecY.Validate_Frames was STRICT. */
#else /* Word 0 - Little Endian */
        uint64_t rx_secy_pkt_notag_cnt : 64; /**< [ 63:  0](R/W) The number of received packets without a SecTag received discarded because
                                                                 SecY.Validate_Frames was STRICT. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_mcsx_cse_rx_mem_slave_inpktssecynotagx_s cn; */
};
typedef union cavm_mcsx_cse_rx_mem_slave_inpktssecynotagx cavm_mcsx_cse_rx_mem_slave_inpktssecynotagx_t;

static inline uint64_t CAVM_MCSX_CSE_RX_MEM_SLAVE_INPKTSSECYNOTAGX(uint64_t a, uint64_t b) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_MCSX_CSE_RX_MEM_SLAVE_INPKTSSECYNOTAGX(uint64_t a, uint64_t b)
{
    if ((a<=6) && (b<=63))
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
    if ((a<=6) && (b<=63))
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
    if ((a<=6) && (b<=63))
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
    if (a<=6)
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
    if (a<=6)
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
    if (a<=6)
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
 * Register (RSL) mcs#_cse_rx_slave_reserved0_0
 *
 * MCS Cse Rx Slave Reserved0 0 Register
 */
union cavm_mcsx_cse_rx_slave_reserved0_0
{
    uint64_t u;
    struct cavm_mcsx_cse_rx_slave_reserved0_0_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_0_63         : 64;
#else /* Word 0 - Little Endian */
        uint64_t reserved_0_63         : 64;
#endif /* Word 0 - End */
    } s;
    struct cavm_mcsx_cse_rx_slave_reserved0_0_cn
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
typedef union cavm_mcsx_cse_rx_slave_reserved0_0 cavm_mcsx_cse_rx_slave_reserved0_0_t;

static inline uint64_t CAVM_MCSX_CSE_RX_SLAVE_RESERVED0_0(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_MCSX_CSE_RX_SLAVE_RESERVED0_0(uint64_t a)
{
    if (a<=6)
        return 0x87e0800009a0ll + 0x1000000ll * ((a) & 0x7);
    __cavm_csr_fatal("MCSX_CSE_RX_SLAVE_RESERVED0_0", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_MCSX_CSE_RX_SLAVE_RESERVED0_0(a) cavm_mcsx_cse_rx_slave_reserved0_0_t
#define bustype_CAVM_MCSX_CSE_RX_SLAVE_RESERVED0_0(a) CSR_TYPE_RSL
#define basename_CAVM_MCSX_CSE_RX_SLAVE_RESERVED0_0(a) "MCSX_CSE_RX_SLAVE_RESERVED0_0"
#define device_bar_CAVM_MCSX_CSE_RX_SLAVE_RESERVED0_0(a) 0x0 /* PF_BAR0 */
#define busnum_CAVM_MCSX_CSE_RX_SLAVE_RESERVED0_0(a) (a)
#define arguments_CAVM_MCSX_CSE_RX_SLAVE_RESERVED0_0(a) (a),-1,-1,-1

/**
 * Register (RSL) mcs#_cse_rx_slave_reserved0_1
 *
 * MCS Cse Rx Slave Reserved0 1 Register
 */
union cavm_mcsx_cse_rx_slave_reserved0_1
{
    uint64_t u;
    struct cavm_mcsx_cse_rx_slave_reserved0_1_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_0_63         : 64;
#else /* Word 0 - Little Endian */
        uint64_t reserved_0_63         : 64;
#endif /* Word 0 - End */
    } s;
    struct cavm_mcsx_cse_rx_slave_reserved0_1_cn
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
typedef union cavm_mcsx_cse_rx_slave_reserved0_1 cavm_mcsx_cse_rx_slave_reserved0_1_t;

static inline uint64_t CAVM_MCSX_CSE_RX_SLAVE_RESERVED0_1(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_MCSX_CSE_RX_SLAVE_RESERVED0_1(uint64_t a)
{
    if (a<=6)
        return 0x87e0800009a8ll + 0x1000000ll * ((a) & 0x7);
    __cavm_csr_fatal("MCSX_CSE_RX_SLAVE_RESERVED0_1", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_MCSX_CSE_RX_SLAVE_RESERVED0_1(a) cavm_mcsx_cse_rx_slave_reserved0_1_t
#define bustype_CAVM_MCSX_CSE_RX_SLAVE_RESERVED0_1(a) CSR_TYPE_RSL
#define basename_CAVM_MCSX_CSE_RX_SLAVE_RESERVED0_1(a) "MCSX_CSE_RX_SLAVE_RESERVED0_1"
#define device_bar_CAVM_MCSX_CSE_RX_SLAVE_RESERVED0_1(a) 0x0 /* PF_BAR0 */
#define busnum_CAVM_MCSX_CSE_RX_SLAVE_RESERVED0_1(a) (a)
#define arguments_CAVM_MCSX_CSE_RX_SLAVE_RESERVED0_1(a) (a),-1,-1,-1

/**
 * Register (RSL) mcs#_cse_rx_slave_reserved0_2
 *
 * MCS Cse Rx Slave Reserved0 2 Register
 */
union cavm_mcsx_cse_rx_slave_reserved0_2
{
    uint64_t u;
    struct cavm_mcsx_cse_rx_slave_reserved0_2_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_0_63         : 64;
#else /* Word 0 - Little Endian */
        uint64_t reserved_0_63         : 64;
#endif /* Word 0 - End */
    } s;
    struct cavm_mcsx_cse_rx_slave_reserved0_2_cn
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
typedef union cavm_mcsx_cse_rx_slave_reserved0_2 cavm_mcsx_cse_rx_slave_reserved0_2_t;

static inline uint64_t CAVM_MCSX_CSE_RX_SLAVE_RESERVED0_2(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_MCSX_CSE_RX_SLAVE_RESERVED0_2(uint64_t a)
{
    if (a<=6)
        return 0x87e0800009b0ll + 0x1000000ll * ((a) & 0x7);
    __cavm_csr_fatal("MCSX_CSE_RX_SLAVE_RESERVED0_2", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_MCSX_CSE_RX_SLAVE_RESERVED0_2(a) cavm_mcsx_cse_rx_slave_reserved0_2_t
#define bustype_CAVM_MCSX_CSE_RX_SLAVE_RESERVED0_2(a) CSR_TYPE_RSL
#define basename_CAVM_MCSX_CSE_RX_SLAVE_RESERVED0_2(a) "MCSX_CSE_RX_SLAVE_RESERVED0_2"
#define device_bar_CAVM_MCSX_CSE_RX_SLAVE_RESERVED0_2(a) 0x0 /* PF_BAR0 */
#define busnum_CAVM_MCSX_CSE_RX_SLAVE_RESERVED0_2(a) (a)
#define arguments_CAVM_MCSX_CSE_RX_SLAVE_RESERVED0_2(a) (a),-1,-1,-1

/**
 * Register (RSL) mcs#_cse_rx_slave_reserved0_3
 *
 * MCS Cse Rx Slave Reserved0 3 Register
 */
union cavm_mcsx_cse_rx_slave_reserved0_3
{
    uint64_t u;
    struct cavm_mcsx_cse_rx_slave_reserved0_3_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_0_63         : 64;
#else /* Word 0 - Little Endian */
        uint64_t reserved_0_63         : 64;
#endif /* Word 0 - End */
    } s;
    struct cavm_mcsx_cse_rx_slave_reserved0_3_cn
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
typedef union cavm_mcsx_cse_rx_slave_reserved0_3 cavm_mcsx_cse_rx_slave_reserved0_3_t;

static inline uint64_t CAVM_MCSX_CSE_RX_SLAVE_RESERVED0_3(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_MCSX_CSE_RX_SLAVE_RESERVED0_3(uint64_t a)
{
    if (a<=6)
        return 0x87e0800009b8ll + 0x1000000ll * ((a) & 0x7);
    __cavm_csr_fatal("MCSX_CSE_RX_SLAVE_RESERVED0_3", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_MCSX_CSE_RX_SLAVE_RESERVED0_3(a) cavm_mcsx_cse_rx_slave_reserved0_3_t
#define bustype_CAVM_MCSX_CSE_RX_SLAVE_RESERVED0_3(a) CSR_TYPE_RSL
#define basename_CAVM_MCSX_CSE_RX_SLAVE_RESERVED0_3(a) "MCSX_CSE_RX_SLAVE_RESERVED0_3"
#define device_bar_CAVM_MCSX_CSE_RX_SLAVE_RESERVED0_3(a) 0x0 /* PF_BAR0 */
#define busnum_CAVM_MCSX_CSE_RX_SLAVE_RESERVED0_3(a) (a)
#define arguments_CAVM_MCSX_CSE_RX_SLAVE_RESERVED0_3(a) (a),-1,-1,-1

/**
 * Register (RSL) mcs#_cse_rx_slave_stats_clear
 *
 * MCS Cse Rx Slave Stats Clear Register
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
    if (a<=6)
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
    if ((a<=6) && (b<=63))
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
    if ((a<=6) && (b<=63))
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
    if ((a<=6) && (b<=63))
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
    if ((a<=6) && (b<=63))
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
    if ((a<=6) && (b<=63))
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
    if ((a<=6) && (b<=63))
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
    if ((a<=6) && (b<=63))
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
    if ((a<=6) && (b<=63))
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
    if ((a<=6) && (b<=63))
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
    if ((a<=6) && (b<=63))
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
    if ((a<=6) && (b<=63))
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
    if ((a<=6) && (b<=3))
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
    if ((a<=6) && (b<=63))
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
    if ((a<=6) && (b<=3))
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
    if ((a<=6) && (b<=3))
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
    if ((a<=6) && (b<=63))
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
    if ((a<=6) && (b<=63))
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
    if ((a<=6) && (b<=3))
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
    if ((a<=6) && (b<=63))
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
    if ((a<=6) && (b<=63))
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
    if ((a<=6) && (b<=63))
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
    if (a<=6)
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
    if (a<=6)
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
    if (a<=6)
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
 * Register (RSL) mcs#_cse_tx_slave_reserved0_0
 *
 * MCS Cse Tx Slave Reserved0 0 Register
 */
union cavm_mcsx_cse_tx_slave_reserved0_0
{
    uint64_t u;
    struct cavm_mcsx_cse_tx_slave_reserved0_0_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_0_63         : 64;
#else /* Word 0 - Little Endian */
        uint64_t reserved_0_63         : 64;
#endif /* Word 0 - End */
    } s;
    struct cavm_mcsx_cse_tx_slave_reserved0_0_cn
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
typedef union cavm_mcsx_cse_tx_slave_reserved0_0 cavm_mcsx_cse_tx_slave_reserved0_0_t;

static inline uint64_t CAVM_MCSX_CSE_TX_SLAVE_RESERVED0_0(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_MCSX_CSE_TX_SLAVE_RESERVED0_0(uint64_t a)
{
    if (a<=6)
        return 0x87e0800009e0ll + 0x1000000ll * ((a) & 0x7);
    __cavm_csr_fatal("MCSX_CSE_TX_SLAVE_RESERVED0_0", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_MCSX_CSE_TX_SLAVE_RESERVED0_0(a) cavm_mcsx_cse_tx_slave_reserved0_0_t
#define bustype_CAVM_MCSX_CSE_TX_SLAVE_RESERVED0_0(a) CSR_TYPE_RSL
#define basename_CAVM_MCSX_CSE_TX_SLAVE_RESERVED0_0(a) "MCSX_CSE_TX_SLAVE_RESERVED0_0"
#define device_bar_CAVM_MCSX_CSE_TX_SLAVE_RESERVED0_0(a) 0x0 /* PF_BAR0 */
#define busnum_CAVM_MCSX_CSE_TX_SLAVE_RESERVED0_0(a) (a)
#define arguments_CAVM_MCSX_CSE_TX_SLAVE_RESERVED0_0(a) (a),-1,-1,-1

/**
 * Register (RSL) mcs#_cse_tx_slave_reserved0_1
 *
 * MCS Cse Tx Slave Reserved0 1 Register
 */
union cavm_mcsx_cse_tx_slave_reserved0_1
{
    uint64_t u;
    struct cavm_mcsx_cse_tx_slave_reserved0_1_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_0_63         : 64;
#else /* Word 0 - Little Endian */
        uint64_t reserved_0_63         : 64;
#endif /* Word 0 - End */
    } s;
    struct cavm_mcsx_cse_tx_slave_reserved0_1_cn
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
typedef union cavm_mcsx_cse_tx_slave_reserved0_1 cavm_mcsx_cse_tx_slave_reserved0_1_t;

static inline uint64_t CAVM_MCSX_CSE_TX_SLAVE_RESERVED0_1(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_MCSX_CSE_TX_SLAVE_RESERVED0_1(uint64_t a)
{
    if (a<=6)
        return 0x87e0800009e8ll + 0x1000000ll * ((a) & 0x7);
    __cavm_csr_fatal("MCSX_CSE_TX_SLAVE_RESERVED0_1", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_MCSX_CSE_TX_SLAVE_RESERVED0_1(a) cavm_mcsx_cse_tx_slave_reserved0_1_t
#define bustype_CAVM_MCSX_CSE_TX_SLAVE_RESERVED0_1(a) CSR_TYPE_RSL
#define basename_CAVM_MCSX_CSE_TX_SLAVE_RESERVED0_1(a) "MCSX_CSE_TX_SLAVE_RESERVED0_1"
#define device_bar_CAVM_MCSX_CSE_TX_SLAVE_RESERVED0_1(a) 0x0 /* PF_BAR0 */
#define busnum_CAVM_MCSX_CSE_TX_SLAVE_RESERVED0_1(a) (a)
#define arguments_CAVM_MCSX_CSE_TX_SLAVE_RESERVED0_1(a) (a),-1,-1,-1

/**
 * Register (RSL) mcs#_cse_tx_slave_reserved0_2
 *
 * MCS Cse Tx Slave Reserved0 2 Register
 */
union cavm_mcsx_cse_tx_slave_reserved0_2
{
    uint64_t u;
    struct cavm_mcsx_cse_tx_slave_reserved0_2_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_0_63         : 64;
#else /* Word 0 - Little Endian */
        uint64_t reserved_0_63         : 64;
#endif /* Word 0 - End */
    } s;
    struct cavm_mcsx_cse_tx_slave_reserved0_2_cn
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
typedef union cavm_mcsx_cse_tx_slave_reserved0_2 cavm_mcsx_cse_tx_slave_reserved0_2_t;

static inline uint64_t CAVM_MCSX_CSE_TX_SLAVE_RESERVED0_2(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_MCSX_CSE_TX_SLAVE_RESERVED0_2(uint64_t a)
{
    if (a<=6)
        return 0x87e0800009f0ll + 0x1000000ll * ((a) & 0x7);
    __cavm_csr_fatal("MCSX_CSE_TX_SLAVE_RESERVED0_2", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_MCSX_CSE_TX_SLAVE_RESERVED0_2(a) cavm_mcsx_cse_tx_slave_reserved0_2_t
#define bustype_CAVM_MCSX_CSE_TX_SLAVE_RESERVED0_2(a) CSR_TYPE_RSL
#define basename_CAVM_MCSX_CSE_TX_SLAVE_RESERVED0_2(a) "MCSX_CSE_TX_SLAVE_RESERVED0_2"
#define device_bar_CAVM_MCSX_CSE_TX_SLAVE_RESERVED0_2(a) 0x0 /* PF_BAR0 */
#define busnum_CAVM_MCSX_CSE_TX_SLAVE_RESERVED0_2(a) (a)
#define arguments_CAVM_MCSX_CSE_TX_SLAVE_RESERVED0_2(a) (a),-1,-1,-1

/**
 * Register (RSL) mcs#_cse_tx_slave_reserved0_3
 *
 * MCS Cse Tx Slave Reserved0 3 Register
 */
union cavm_mcsx_cse_tx_slave_reserved0_3
{
    uint64_t u;
    struct cavm_mcsx_cse_tx_slave_reserved0_3_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_0_63         : 64;
#else /* Word 0 - Little Endian */
        uint64_t reserved_0_63         : 64;
#endif /* Word 0 - End */
    } s;
    struct cavm_mcsx_cse_tx_slave_reserved0_3_cn
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
typedef union cavm_mcsx_cse_tx_slave_reserved0_3 cavm_mcsx_cse_tx_slave_reserved0_3_t;

static inline uint64_t CAVM_MCSX_CSE_TX_SLAVE_RESERVED0_3(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_MCSX_CSE_TX_SLAVE_RESERVED0_3(uint64_t a)
{
    if (a<=6)
        return 0x87e0800009f8ll + 0x1000000ll * ((a) & 0x7);
    __cavm_csr_fatal("MCSX_CSE_TX_SLAVE_RESERVED0_3", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_MCSX_CSE_TX_SLAVE_RESERVED0_3(a) cavm_mcsx_cse_tx_slave_reserved0_3_t
#define bustype_CAVM_MCSX_CSE_TX_SLAVE_RESERVED0_3(a) CSR_TYPE_RSL
#define basename_CAVM_MCSX_CSE_TX_SLAVE_RESERVED0_3(a) "MCSX_CSE_TX_SLAVE_RESERVED0_3"
#define device_bar_CAVM_MCSX_CSE_TX_SLAVE_RESERVED0_3(a) 0x0 /* PF_BAR0 */
#define busnum_CAVM_MCSX_CSE_TX_SLAVE_RESERVED0_3(a) (a)
#define arguments_CAVM_MCSX_CSE_TX_SLAVE_RESERVED0_3(a) (a),-1,-1,-1

/**
 * Register (RSL) mcs#_cse_tx_slave_stats_clear
 *
 * MCS Cse Tx Slave Stats Clear Register
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
    if (a<=6)
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
        uint64_t reserved_32_63        : 32;
        uint64_t eco_rw                : 32; /**< [ 31:  0](R/W) Reserved. */
#else /* Word 0 - Little Endian */
        uint64_t eco_rw                : 32; /**< [ 31:  0](R/W) Reserved. */
        uint64_t reserved_32_63        : 32;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_mcsx_eco_s cn; */
};
typedef union cavm_mcsx_eco cavm_mcsx_eco_t;

static inline uint64_t CAVM_MCSX_ECO(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_MCSX_ECO(uint64_t a)
{
    if (a<=6)
        return 0x87e080020128ll + 0x1000000ll * ((a) & 0x7);
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
    if (a<=6)
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
    if (a<=6)
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
    if (a<=6)
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
    if (a<=6)
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
    if (a<=6)
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
    if (a<=6)
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
    if (a<=6)
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
    if (a<=6)
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
    if (a<=6)
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
    if (a<=6)
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
    if (a<=6)
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
    if (a<=6)
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
    if (a<=6)
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
    if (a<=6)
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
    if (a<=6)
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
    if (a<=6)
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
    if (a<=6)
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
    if (a<=6)
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
    if (a<=6)
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
    if (a<=6)
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
    if (a<=6)
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
    if (a<=6)
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
    if (a<=6)
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
    if (a<=6)
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
    if (a<=6)
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
    if (a<=6)
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
    if (a<=6)
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
    if (a<=6)
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
    if (a<=6)
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
    if (a<=6)
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
    if (a<=6)
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
    if (a<=6)
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
    if (a<=6)
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
    if (a<=6)
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
    if (a<=6)
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
    if (a<=6)
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
    if (a<=6)
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
    if (a<=6)
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
    if (a<=6)
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
    if (a<=6)
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
    if (a<=6)
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
    if (a<=6)
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
    if (a<=6)
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
    if (a<=6)
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
 * Register (RSL) mcs#_hil_p2x_bp_test
 *
 * INTERNAL: MCS HIL P2X backpressure test Register
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
                                                                 \<48\> = Stop popping P2X data from fifo towards MIL-TX. */
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
                                                                 \<48\> = Stop popping P2X data from fifo towards MIL-TX. */
        uint64_t reserved_49_63        : 15;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_mcsx_hil_p2x_bp_test_s cn; */
};
typedef union cavm_mcsx_hil_p2x_bp_test cavm_mcsx_hil_p2x_bp_test_t;

static inline uint64_t CAVM_MCSX_HIL_P2X_BP_TEST(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_MCSX_HIL_P2X_BP_TEST(uint64_t a)
{
    if (a<=6)
        return 0x87e080060020ll + 0x1000000ll * ((a) & 0x7);
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
 * MCS HIL RX ingress Interrupt Register
 * Contains the different interrupt bits of MCS HIL RX. All interrupts are handled by MIL.
 */
union cavm_mcsx_hil_rx_gbl_int
{
    uint64_t u;
    struct cavm_mcsx_hil_rx_gbl_int_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_1_63         : 63;
        uint64_t hil_rx_req_fifo_ovf   : 1;  /**< [  0:  0](R/W1C/H) HIL RX REQ fifo overflow. */
#else /* Word 0 - Little Endian */
        uint64_t hil_rx_req_fifo_ovf   : 1;  /**< [  0:  0](R/W1C/H) HIL RX REQ fifo overflow. */
        uint64_t reserved_1_63         : 63;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_mcsx_hil_rx_gbl_int_s cn; */
};
typedef union cavm_mcsx_hil_rx_gbl_int cavm_mcsx_hil_rx_gbl_int_t;

static inline uint64_t CAVM_MCSX_HIL_RX_GBL_INT(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_MCSX_HIL_RX_GBL_INT(uint64_t a)
{
    if (a<=6)
        return 0x87e080020080ll + 0x1000000ll * ((a) & 0x7);
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
 * MCS MIL Egress Interrupt Enable Clear Register
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
    if (a<=6)
        return 0x87e080020090ll + 0x1000000ll * ((a) & 0x7);
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
 * MCS MIL Egress Interrupt Enable Set Register
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
    if (a<=6)
        return 0x87e080020098ll + 0x1000000ll * ((a) & 0x7);
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
 * MCS MIL Egress Interrupt Set Register
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
    if (a<=6)
        return 0x87e080020088ll + 0x1000000ll * ((a) & 0x7);
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
 * INTERNAL: MCS HIL RX status Register
 */
union cavm_mcsx_hil_rx_gbl_status
{
    uint64_t u;
    struct cavm_mcsx_hil_rx_gbl_status_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_9_63         : 55;
        uint64_t x2p_req_fifo_cnt      : 9;  /**< [  8:  0](RO/H) HIL RX X2P request fifo fill level (a single async data fifo, 64 entries per LMAC). */
#else /* Word 0 - Little Endian */
        uint64_t x2p_req_fifo_cnt      : 9;  /**< [  8:  0](RO/H) HIL RX X2P request fifo fill level (a single async data fifo, 64 entries per LMAC). */
        uint64_t reserved_9_63         : 55;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_mcsx_hil_rx_gbl_status_s cn; */
};
typedef union cavm_mcsx_hil_rx_gbl_status cavm_mcsx_hil_rx_gbl_status_t;

static inline uint64_t CAVM_MCSX_HIL_RX_GBL_STATUS(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_MCSX_HIL_RX_GBL_STATUS(uint64_t a)
{
    if (a<=6)
        return 0x87e080060030ll + 0x1000000ll * ((a) & 0x7);
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
 * INTERNAL: MCS HIL RX per LMAC backpressure test Register
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
    if ((a<=6) && (b<=3))
        return 0x87e080060028ll + 0x1000000ll * ((a) & 0x7) + 0x1000ll * ((b) & 0x3);
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
 * MCS HIL per LMAC ingress Interrupt Register
 * Contains The Different Interrupt Bits Of The MCS RX HIL.
 */
union cavm_mcsx_hil_rx_lmacx_int
{
    uint64_t u;
    struct cavm_mcsx_hil_rx_lmacx_int_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_3_63         : 61;
        uint64_t hil_rx_gnt_fifo_ovf   : 1;  /**< [  2:  2](R/W1C/H) HIL RX GNT fifo overflow. */
        uint64_t hil_rx_skid_fifo_unf  : 1;  /**< [  1:  1](R/W1C/H) HIL RX SKID fifo underflow */
        uint64_t hil_rx_skid_fifo_ovf  : 1;  /**< [  0:  0](R/W1C/H) HIL RX SKID fifo overflow. */
#else /* Word 0 - Little Endian */
        uint64_t hil_rx_skid_fifo_ovf  : 1;  /**< [  0:  0](R/W1C/H) HIL RX SKID fifo overflow. */
        uint64_t hil_rx_skid_fifo_unf  : 1;  /**< [  1:  1](R/W1C/H) HIL RX SKID fifo underflow */
        uint64_t hil_rx_gnt_fifo_ovf   : 1;  /**< [  2:  2](R/W1C/H) HIL RX GNT fifo overflow. */
        uint64_t reserved_3_63         : 61;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_mcsx_hil_rx_lmacx_int_s cn; */
};
typedef union cavm_mcsx_hil_rx_lmacx_int cavm_mcsx_hil_rx_lmacx_int_t;

static inline uint64_t CAVM_MCSX_HIL_RX_LMACX_INT(uint64_t a, uint64_t b) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_MCSX_HIL_RX_LMACX_INT(uint64_t a, uint64_t b)
{
    if ((a<=6) && (b<=3))
        return 0x87e0800200a0ll + 0x1000000ll * ((a) & 0x7) + 0x1000ll * ((b) & 0x3);
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
 * MCS HIL Ingress Interrupt Enable Clear Register
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
    if ((a<=6) && (b<=3))
        return 0x87e0800200b0ll + 0x1000000ll * ((a) & 0x7) + 0x1000ll * ((b) & 0x3);
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
 * MCS HIL Ingress Interrupt Enable Set Register
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
    if ((a<=6) && (b<=3))
        return 0x87e0800200b8ll + 0x1000000ll * ((a) & 0x7) + 0x1000ll * ((b) & 0x3);
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
 * MCS HIL Ingress Interrupt Set Register
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
    if ((a<=6) && (b<=3))
        return 0x87e0800200a8ll + 0x1000000ll * ((a) & 0x7) + 0x1000ll * ((b) & 0x3);
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
 * INTERNAL: MCS HIL Per LMAC RX SKID THRESH Configuration Register
 */
union cavm_mcsx_hil_rx_lmacx_skid_thresh
{
    uint64_t u;
    struct cavm_mcsx_hil_rx_lmacx_skid_thresh_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_7_63         : 57;
        uint64_t rx_skid_full_thresh   : 7;  /**< [  6:  0](R/W) HIL RX SKID fifo full threshold (Based on x2p2_p2x2_defs::X2P2_SKID_CREDIT) */
#else /* Word 0 - Little Endian */
        uint64_t rx_skid_full_thresh   : 7;  /**< [  6:  0](R/W) HIL RX SKID fifo full threshold (Based on x2p2_p2x2_defs::X2P2_SKID_CREDIT) */
        uint64_t reserved_7_63         : 57;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_mcsx_hil_rx_lmacx_skid_thresh_s cn; */
};
typedef union cavm_mcsx_hil_rx_lmacx_skid_thresh cavm_mcsx_hil_rx_lmacx_skid_thresh_t;

static inline uint64_t CAVM_MCSX_HIL_RX_LMACX_SKID_THRESH(uint64_t a, uint64_t b) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_MCSX_HIL_RX_LMACX_SKID_THRESH(uint64_t a, uint64_t b)
{
    if ((a<=6) && (b<=3))
        return 0x87e080060000ll + 0x1000000ll * ((a) & 0x7) + 0x1000ll * ((b) & 0x3);
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
 * INTERNAL: MCS HIL RX status Register
 */
union cavm_mcsx_hil_rx_lmacx_status
{
    uint64_t u;
    struct cavm_mcsx_hil_rx_lmacx_status_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_15_63        : 49;
        uint64_t skid_data_fifo_cnt    : 7;  /**< [ 14:  8](RO/H) HIL RX SKID data fifo fill level. */
        uint64_t pab_bp                : 1;  /**< [  7:  7](RO/H) RX PAB back pressure status. */
        uint64_t x2p_gnt_fifo_cnt      : 7;  /**< [  6:  0](RO/H) HIL RX X2P grant fifo fill level, used only in External bypass mode. */
#else /* Word 0 - Little Endian */
        uint64_t x2p_gnt_fifo_cnt      : 7;  /**< [  6:  0](RO/H) HIL RX X2P grant fifo fill level, used only in External bypass mode. */
        uint64_t pab_bp                : 1;  /**< [  7:  7](RO/H) RX PAB back pressure status. */
        uint64_t skid_data_fifo_cnt    : 7;  /**< [ 14:  8](RO/H) HIL RX SKID data fifo fill level. */
        uint64_t reserved_15_63        : 49;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_mcsx_hil_rx_lmacx_status_s cn; */
};
typedef union cavm_mcsx_hil_rx_lmacx_status cavm_mcsx_hil_rx_lmacx_status_t;

static inline uint64_t CAVM_MCSX_HIL_RX_LMACX_STATUS(uint64_t a, uint64_t b) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_MCSX_HIL_RX_LMACX_STATUS(uint64_t a, uint64_t b)
{
    if ((a<=6) && (b<=3))
        return 0x87e080060038ll + 0x1000000ll * ((a) & 0x7) + 0x1000ll * ((b) & 0x3);
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
 * INTERNAL: MCS HIL RX backpressure test Register
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
                                                                 \<48\> = Stop sending X2P requests from HIL-RX to host. */
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
                                                                 \<48\> = Stop sending X2P requests from HIL-RX to host. */
        uint64_t reserved_49_63        : 15;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_mcsx_hil_rx_pab_lmacx_bp_test_s cn; */
};
typedef union cavm_mcsx_hil_rx_pab_lmacx_bp_test cavm_mcsx_hil_rx_pab_lmacx_bp_test_t;

static inline uint64_t CAVM_MCSX_HIL_RX_PAB_LMACX_BP_TEST(uint64_t a, uint64_t b) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_MCSX_HIL_RX_PAB_LMACX_BP_TEST(uint64_t a, uint64_t b)
{
    if ((a<=6) && (b<=3))
        return 0x87e080060018ll + 0x1000000ll * ((a) & 0x7) + 0x1000ll * ((b) & 0x3);
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
 * MCS HIL RX X2P errors status Register
 */
union cavm_mcsx_hil_rx_x2p_err
{
    uint64_t u;
    struct cavm_mcsx_hil_rx_x2p_err_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_24_63        : 40;
        uint64_t mcs_exception_to_x2p_err : 20;/**< [ 23:  4](R/W) Bit enable per RX out exception_code value. see MCS_RX_EXCEPTION_CODE_E */
        uint64_t x2p_err_enum          : 4;  /**< [  3:  0](R/W) X2P ERR enum in x2p2_err field. */
#else /* Word 0 - Little Endian */
        uint64_t x2p_err_enum          : 4;  /**< [  3:  0](R/W) X2P ERR enum in x2p2_err field. */
        uint64_t mcs_exception_to_x2p_err : 20;/**< [ 23:  4](R/W) Bit enable per RX out exception_code value. see MCS_RX_EXCEPTION_CODE_E */
        uint64_t reserved_24_63        : 40;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_mcsx_hil_rx_x2p_err_s cn; */
};
typedef union cavm_mcsx_hil_rx_x2p_err cavm_mcsx_hil_rx_x2p_err_t;

static inline uint64_t CAVM_MCSX_HIL_RX_X2P_ERR(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_MCSX_HIL_RX_X2P_ERR(uint64_t a)
{
    if (a<=6)
        return 0x87e080060050ll + 0x1000000ll * ((a) & 0x7);
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
 * INTERNAL: MCS HIL TX BBE credits thresh configuration Register
 */
union cavm_mcsx_hil_tx_crdt_thresh
{
    uint64_t u;
    struct cavm_mcsx_hil_tx_crdt_thresh_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_12_63        : 52;
        uint64_t tx_bbe_plcy_credits   : 5;  /**< [ 11:  7](R/W) HIL TX POLICY fifo full threshold (Based on BBE POLICY fifo depth). */
        uint64_t tx_bbe_data_credits   : 7;  /**< [  6:  0](R/W) HIL TX SKID fifo full threshold (Based on BBE DATA fifo depth). */
#else /* Word 0 - Little Endian */
        uint64_t tx_bbe_data_credits   : 7;  /**< [  6:  0](R/W) HIL TX SKID fifo full threshold (Based on BBE DATA fifo depth). */
        uint64_t tx_bbe_plcy_credits   : 5;  /**< [ 11:  7](R/W) HIL TX POLICY fifo full threshold (Based on BBE POLICY fifo depth). */
        uint64_t reserved_12_63        : 52;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_mcsx_hil_tx_crdt_thresh_s cn; */
};
typedef union cavm_mcsx_hil_tx_crdt_thresh cavm_mcsx_hil_tx_crdt_thresh_t;

static inline uint64_t CAVM_MCSX_HIL_TX_CRDT_THRESH(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_MCSX_HIL_TX_CRDT_THRESH(uint64_t a)
{
    if (a<=6)
        return 0x87e080060008ll + 0x1000000ll * ((a) & 0x7);
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
 * MCS HIL per LMAC egress Interrupt Register
 * Contains the different interrupt bits of the MCS HIL.
 */
union cavm_mcsx_hil_tx_gbl_int
{
    uint64_t u;
    struct cavm_mcsx_hil_tx_gbl_int_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_9_63         : 55;
        uint64_t hil_tx_skid_plcn_mismatch : 1;/**< [  8:  8](R/W1C/H) HIL TX SKID channel out to PLCN configuration mismatch, SKID credits are not returned to HOST. */
        uint64_t hil_tx_plcn_mismatch  : 1;  /**< [  7:  7](R/W1C/H) HIL TX packet P2X chan to PLCN configuration mismatch, packets are dropped. */
        uint64_t hil_tx_bbe_plcy_heap_ovf : 1;/**< [  6:  6](R/W1C/H) HIL_TX_BBE_PLCY_HEAP_OVERFLOW. */
        uint64_t hil_tx_bbe_plcy_cred_out : 1;/**< [  5:  5](R/W1C/H) New data beat from HIL TX SKID DATA, no credits in BBE policy heap. */
        uint64_t hil_tx_bbe_data_heap_ovf : 1;/**< [  4:  4](R/W1C/H) HIL_TX_BBE_DATA_HEAP_OVERFLOW. */
        uint64_t hil_tx_bbe_data_cred_out : 1;/**< [  3:  3](R/W1C/H) HIL TX New data beat from HIL TX SKID fifo, no credits in BBE data heap. */
        uint64_t hil_tx_bbe_invld_port_credit : 1;/**< [  2:  2](R/W1C/H) HIL TX BBE to HIL credit interface port not zero. */
        uint64_t hil_tx_skid_data_fifo_unf : 1;/**< [  1:  1](R/W1C/H) HIL TX SKID DATA fifo underflow. */
        uint64_t hil_tx_skid_data_fifo_ovf : 1;/**< [  0:  0](R/W1C/H) HIL TX SKID DATA fifo overflow. */
#else /* Word 0 - Little Endian */
        uint64_t hil_tx_skid_data_fifo_ovf : 1;/**< [  0:  0](R/W1C/H) HIL TX SKID DATA fifo overflow. */
        uint64_t hil_tx_skid_data_fifo_unf : 1;/**< [  1:  1](R/W1C/H) HIL TX SKID DATA fifo underflow. */
        uint64_t hil_tx_bbe_invld_port_credit : 1;/**< [  2:  2](R/W1C/H) HIL TX BBE to HIL credit interface port not zero. */
        uint64_t hil_tx_bbe_data_cred_out : 1;/**< [  3:  3](R/W1C/H) HIL TX New data beat from HIL TX SKID fifo, no credits in BBE data heap. */
        uint64_t hil_tx_bbe_data_heap_ovf : 1;/**< [  4:  4](R/W1C/H) HIL_TX_BBE_DATA_HEAP_OVERFLOW. */
        uint64_t hil_tx_bbe_plcy_cred_out : 1;/**< [  5:  5](R/W1C/H) New data beat from HIL TX SKID DATA, no credits in BBE policy heap. */
        uint64_t hil_tx_bbe_plcy_heap_ovf : 1;/**< [  6:  6](R/W1C/H) HIL_TX_BBE_PLCY_HEAP_OVERFLOW. */
        uint64_t hil_tx_plcn_mismatch  : 1;  /**< [  7:  7](R/W1C/H) HIL TX packet P2X chan to PLCN configuration mismatch, packets are dropped. */
        uint64_t hil_tx_skid_plcn_mismatch : 1;/**< [  8:  8](R/W1C/H) HIL TX SKID channel out to PLCN configuration mismatch, SKID credits are not returned to HOST. */
        uint64_t reserved_9_63         : 55;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_mcsx_hil_tx_gbl_int_s cn; */
};
typedef union cavm_mcsx_hil_tx_gbl_int cavm_mcsx_hil_tx_gbl_int_t;

static inline uint64_t CAVM_MCSX_HIL_TX_GBL_INT(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_MCSX_HIL_TX_GBL_INT(uint64_t a)
{
    if (a<=6)
        return 0x87e0800200c0ll + 0x1000000ll * ((a) & 0x7);
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
 * MCS HIL Egress Interrupt Enable Clear Register
 * This register clears interrupt enable bits.
 */
union cavm_mcsx_hil_tx_gbl_int_ena_w1c
{
    uint64_t u;
    struct cavm_mcsx_hil_tx_gbl_int_ena_w1c_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_9_63         : 55;
        uint64_t hil_tx_skid_plcn_mismatch : 1;/**< [  8:  8](R/W1C/H) Reads or clears enable for MCS(0..6)_HIL_TX_GBL_INT[HIL_TX_SKID_PLCN_MISMATCH]. */
        uint64_t hil_tx_plcn_mismatch  : 1;  /**< [  7:  7](R/W1C/H) Reads or clears enable for MCS(0..6)_HIL_TX_GBL_INT[HIL_TX_PLCN_MISMATCH]. */
        uint64_t hil_tx_bbe_plcy_heap_ovf : 1;/**< [  6:  6](R/W1C/H) Reads or clears enable for MCS(0..6)_HIL_TX_GBL_INT[HIL_TX_BBE_PLCY_HEAP_OVF]. */
        uint64_t hil_tx_bbe_plcy_cred_out : 1;/**< [  5:  5](R/W1C/H) Reads or clears enable for MCS(0..6)_HIL_TX_GBL_INT[HIL_TX_BBE_PLCY_CRED_OUT]. */
        uint64_t hil_tx_bbe_data_heap_ovf : 1;/**< [  4:  4](R/W1C/H) Reads or clears enable for MCS(0..6)_HIL_TX_GBL_INT[HIL_TX_BBE_DATA_HEAP_OVF]. */
        uint64_t hil_tx_bbe_data_cred_out : 1;/**< [  3:  3](R/W1C/H) Reads or clears enable for MCS(0..6)_HIL_TX_GBL_INT[HIL_TX_BBE_DATA_CRED_OUT]. */
        uint64_t hil_tx_bbe_invld_port_credit : 1;/**< [  2:  2](R/W1C/H) Reads or clears enable for MCS(0..6)_HIL_TX_GBL_INT[HIL_TX_BBE_INVLD_PORT_CREDIT]. */
        uint64_t hil_tx_skid_data_fifo_unf : 1;/**< [  1:  1](R/W1C/H) Reads or clears enable for MCS(0..6)_HIL_TX_GBL_INT[HIL_TX_SKID_DATA_FIFO_UNF]. */
        uint64_t hil_tx_skid_data_fifo_ovf : 1;/**< [  0:  0](R/W1C/H) Reads or clears enable for MCS(0..6)_HIL_TX_GBL_INT[HIL_TX_SKID_DATA_FIFO_OVF]. */
#else /* Word 0 - Little Endian */
        uint64_t hil_tx_skid_data_fifo_ovf : 1;/**< [  0:  0](R/W1C/H) Reads or clears enable for MCS(0..6)_HIL_TX_GBL_INT[HIL_TX_SKID_DATA_FIFO_OVF]. */
        uint64_t hil_tx_skid_data_fifo_unf : 1;/**< [  1:  1](R/W1C/H) Reads or clears enable for MCS(0..6)_HIL_TX_GBL_INT[HIL_TX_SKID_DATA_FIFO_UNF]. */
        uint64_t hil_tx_bbe_invld_port_credit : 1;/**< [  2:  2](R/W1C/H) Reads or clears enable for MCS(0..6)_HIL_TX_GBL_INT[HIL_TX_BBE_INVLD_PORT_CREDIT]. */
        uint64_t hil_tx_bbe_data_cred_out : 1;/**< [  3:  3](R/W1C/H) Reads or clears enable for MCS(0..6)_HIL_TX_GBL_INT[HIL_TX_BBE_DATA_CRED_OUT]. */
        uint64_t hil_tx_bbe_data_heap_ovf : 1;/**< [  4:  4](R/W1C/H) Reads or clears enable for MCS(0..6)_HIL_TX_GBL_INT[HIL_TX_BBE_DATA_HEAP_OVF]. */
        uint64_t hil_tx_bbe_plcy_cred_out : 1;/**< [  5:  5](R/W1C/H) Reads or clears enable for MCS(0..6)_HIL_TX_GBL_INT[HIL_TX_BBE_PLCY_CRED_OUT]. */
        uint64_t hil_tx_bbe_plcy_heap_ovf : 1;/**< [  6:  6](R/W1C/H) Reads or clears enable for MCS(0..6)_HIL_TX_GBL_INT[HIL_TX_BBE_PLCY_HEAP_OVF]. */
        uint64_t hil_tx_plcn_mismatch  : 1;  /**< [  7:  7](R/W1C/H) Reads or clears enable for MCS(0..6)_HIL_TX_GBL_INT[HIL_TX_PLCN_MISMATCH]. */
        uint64_t hil_tx_skid_plcn_mismatch : 1;/**< [  8:  8](R/W1C/H) Reads or clears enable for MCS(0..6)_HIL_TX_GBL_INT[HIL_TX_SKID_PLCN_MISMATCH]. */
        uint64_t reserved_9_63         : 55;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_mcsx_hil_tx_gbl_int_ena_w1c_s cn; */
};
typedef union cavm_mcsx_hil_tx_gbl_int_ena_w1c cavm_mcsx_hil_tx_gbl_int_ena_w1c_t;

static inline uint64_t CAVM_MCSX_HIL_TX_GBL_INT_ENA_W1C(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_MCSX_HIL_TX_GBL_INT_ENA_W1C(uint64_t a)
{
    if (a<=6)
        return 0x87e0800200d0ll + 0x1000000ll * ((a) & 0x7);
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
 * MCS HIL Egress Interrupt Enable Set Register
 * This register sets interrupt enable bits.
 */
union cavm_mcsx_hil_tx_gbl_int_ena_w1s
{
    uint64_t u;
    struct cavm_mcsx_hil_tx_gbl_int_ena_w1s_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_9_63         : 55;
        uint64_t hil_tx_skid_plcn_mismatch : 1;/**< [  8:  8](R/W1S/H) Reads or sets enable for MCS(0..6)_HIL_TX_GBL_INT[HIL_TX_SKID_PLCN_MISMATCH]. */
        uint64_t hil_tx_plcn_mismatch  : 1;  /**< [  7:  7](R/W1S/H) Reads or sets enable for MCS(0..6)_HIL_TX_GBL_INT[HIL_TX_PLCN_MISMATCH]. */
        uint64_t hil_tx_bbe_plcy_heap_ovf : 1;/**< [  6:  6](R/W1S/H) Reads or sets enable for MCS(0..6)_HIL_TX_GBL_INT[HIL_TX_BBE_PLCY_HEAP_OVF]. */
        uint64_t hil_tx_bbe_plcy_cred_out : 1;/**< [  5:  5](R/W1S/H) Reads or sets enable for MCS(0..6)_HIL_TX_GBL_INT[HIL_TX_BBE_PLCY_CRED_OUT]. */
        uint64_t hil_tx_bbe_data_heap_ovf : 1;/**< [  4:  4](R/W1S/H) Reads or sets enable for MCS(0..6)_HIL_TX_GBL_INT[HIL_TX_BBE_DATA_HEAP_OVF]. */
        uint64_t hil_tx_bbe_data_cred_out : 1;/**< [  3:  3](R/W1S/H) Reads or sets enable for MCS(0..6)_HIL_TX_GBL_INT[HIL_TX_BBE_DATA_CRED_OUT]. */
        uint64_t hil_tx_bbe_invld_port_credit : 1;/**< [  2:  2](R/W1S/H) Reads or sets enable for MCS(0..6)_HIL_TX_GBL_INT[HIL_TX_BBE_INVLD_PORT_CREDIT]. */
        uint64_t hil_tx_skid_data_fifo_unf : 1;/**< [  1:  1](R/W1S/H) Reads or sets enable for MCS(0..6)_HIL_TX_GBL_INT[HIL_TX_SKID_DATA_FIFO_UNF]. */
        uint64_t hil_tx_skid_data_fifo_ovf : 1;/**< [  0:  0](R/W1S/H) Reads or sets enable for MCS(0..6)_HIL_TX_GBL_INT[HIL_TX_SKID_DATA_FIFO_OVF]. */
#else /* Word 0 - Little Endian */
        uint64_t hil_tx_skid_data_fifo_ovf : 1;/**< [  0:  0](R/W1S/H) Reads or sets enable for MCS(0..6)_HIL_TX_GBL_INT[HIL_TX_SKID_DATA_FIFO_OVF]. */
        uint64_t hil_tx_skid_data_fifo_unf : 1;/**< [  1:  1](R/W1S/H) Reads or sets enable for MCS(0..6)_HIL_TX_GBL_INT[HIL_TX_SKID_DATA_FIFO_UNF]. */
        uint64_t hil_tx_bbe_invld_port_credit : 1;/**< [  2:  2](R/W1S/H) Reads or sets enable for MCS(0..6)_HIL_TX_GBL_INT[HIL_TX_BBE_INVLD_PORT_CREDIT]. */
        uint64_t hil_tx_bbe_data_cred_out : 1;/**< [  3:  3](R/W1S/H) Reads or sets enable for MCS(0..6)_HIL_TX_GBL_INT[HIL_TX_BBE_DATA_CRED_OUT]. */
        uint64_t hil_tx_bbe_data_heap_ovf : 1;/**< [  4:  4](R/W1S/H) Reads or sets enable for MCS(0..6)_HIL_TX_GBL_INT[HIL_TX_BBE_DATA_HEAP_OVF]. */
        uint64_t hil_tx_bbe_plcy_cred_out : 1;/**< [  5:  5](R/W1S/H) Reads or sets enable for MCS(0..6)_HIL_TX_GBL_INT[HIL_TX_BBE_PLCY_CRED_OUT]. */
        uint64_t hil_tx_bbe_plcy_heap_ovf : 1;/**< [  6:  6](R/W1S/H) Reads or sets enable for MCS(0..6)_HIL_TX_GBL_INT[HIL_TX_BBE_PLCY_HEAP_OVF]. */
        uint64_t hil_tx_plcn_mismatch  : 1;  /**< [  7:  7](R/W1S/H) Reads or sets enable for MCS(0..6)_HIL_TX_GBL_INT[HIL_TX_PLCN_MISMATCH]. */
        uint64_t hil_tx_skid_plcn_mismatch : 1;/**< [  8:  8](R/W1S/H) Reads or sets enable for MCS(0..6)_HIL_TX_GBL_INT[HIL_TX_SKID_PLCN_MISMATCH]. */
        uint64_t reserved_9_63         : 55;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_mcsx_hil_tx_gbl_int_ena_w1s_s cn; */
};
typedef union cavm_mcsx_hil_tx_gbl_int_ena_w1s cavm_mcsx_hil_tx_gbl_int_ena_w1s_t;

static inline uint64_t CAVM_MCSX_HIL_TX_GBL_INT_ENA_W1S(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_MCSX_HIL_TX_GBL_INT_ENA_W1S(uint64_t a)
{
    if (a<=6)
        return 0x87e0800200d8ll + 0x1000000ll * ((a) & 0x7);
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
 * MCS HIL Egress Interrupt Set Register
 * This register sets interrupt bits.
 */
union cavm_mcsx_hil_tx_gbl_int_w1s
{
    uint64_t u;
    struct cavm_mcsx_hil_tx_gbl_int_w1s_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_9_63         : 55;
        uint64_t hil_tx_skid_plcn_mismatch : 1;/**< [  8:  8](R/W1S/H) Reads or sets MCS(0..6)_HIL_TX_GBL_INT[HIL_TX_SKID_PLCN_MISMATCH]. */
        uint64_t hil_tx_plcn_mismatch  : 1;  /**< [  7:  7](R/W1S/H) Reads or sets MCS(0..6)_HIL_TX_GBL_INT[HIL_TX_PLCN_MISMATCH]. */
        uint64_t hil_tx_bbe_plcy_heap_ovf : 1;/**< [  6:  6](R/W1S/H) Reads or sets MCS(0..6)_HIL_TX_GBL_INT[HIL_TX_BBE_PLCY_HEAP_OVF]. */
        uint64_t hil_tx_bbe_plcy_cred_out : 1;/**< [  5:  5](R/W1S/H) Reads or sets MCS(0..6)_HIL_TX_GBL_INT[HIL_TX_BBE_PLCY_CRED_OUT]. */
        uint64_t hil_tx_bbe_data_heap_ovf : 1;/**< [  4:  4](R/W1S/H) Reads or sets MCS(0..6)_HIL_TX_GBL_INT[HIL_TX_BBE_DATA_HEAP_OVF]. */
        uint64_t hil_tx_bbe_data_cred_out : 1;/**< [  3:  3](R/W1S/H) Reads or sets MCS(0..6)_HIL_TX_GBL_INT[HIL_TX_BBE_DATA_CRED_OUT]. */
        uint64_t hil_tx_bbe_invld_port_credit : 1;/**< [  2:  2](R/W1S/H) Reads or sets MCS(0..6)_HIL_TX_GBL_INT[HIL_TX_BBE_INVLD_PORT_CREDIT]. */
        uint64_t hil_tx_skid_data_fifo_unf : 1;/**< [  1:  1](R/W1S/H) Reads or sets MCS(0..6)_HIL_TX_GBL_INT[HIL_TX_SKID_DATA_FIFO_UNF]. */
        uint64_t hil_tx_skid_data_fifo_ovf : 1;/**< [  0:  0](R/W1S/H) Reads or sets MCS(0..6)_HIL_TX_GBL_INT[HIL_TX_SKID_DATA_FIFO_OVF]. */
#else /* Word 0 - Little Endian */
        uint64_t hil_tx_skid_data_fifo_ovf : 1;/**< [  0:  0](R/W1S/H) Reads or sets MCS(0..6)_HIL_TX_GBL_INT[HIL_TX_SKID_DATA_FIFO_OVF]. */
        uint64_t hil_tx_skid_data_fifo_unf : 1;/**< [  1:  1](R/W1S/H) Reads or sets MCS(0..6)_HIL_TX_GBL_INT[HIL_TX_SKID_DATA_FIFO_UNF]. */
        uint64_t hil_tx_bbe_invld_port_credit : 1;/**< [  2:  2](R/W1S/H) Reads or sets MCS(0..6)_HIL_TX_GBL_INT[HIL_TX_BBE_INVLD_PORT_CREDIT]. */
        uint64_t hil_tx_bbe_data_cred_out : 1;/**< [  3:  3](R/W1S/H) Reads or sets MCS(0..6)_HIL_TX_GBL_INT[HIL_TX_BBE_DATA_CRED_OUT]. */
        uint64_t hil_tx_bbe_data_heap_ovf : 1;/**< [  4:  4](R/W1S/H) Reads or sets MCS(0..6)_HIL_TX_GBL_INT[HIL_TX_BBE_DATA_HEAP_OVF]. */
        uint64_t hil_tx_bbe_plcy_cred_out : 1;/**< [  5:  5](R/W1S/H) Reads or sets MCS(0..6)_HIL_TX_GBL_INT[HIL_TX_BBE_PLCY_CRED_OUT]. */
        uint64_t hil_tx_bbe_plcy_heap_ovf : 1;/**< [  6:  6](R/W1S/H) Reads or sets MCS(0..6)_HIL_TX_GBL_INT[HIL_TX_BBE_PLCY_HEAP_OVF]. */
        uint64_t hil_tx_plcn_mismatch  : 1;  /**< [  7:  7](R/W1S/H) Reads or sets MCS(0..6)_HIL_TX_GBL_INT[HIL_TX_PLCN_MISMATCH]. */
        uint64_t hil_tx_skid_plcn_mismatch : 1;/**< [  8:  8](R/W1S/H) Reads or sets MCS(0..6)_HIL_TX_GBL_INT[HIL_TX_SKID_PLCN_MISMATCH]. */
        uint64_t reserved_9_63         : 55;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_mcsx_hil_tx_gbl_int_w1s_s cn; */
};
typedef union cavm_mcsx_hil_tx_gbl_int_w1s cavm_mcsx_hil_tx_gbl_int_w1s_t;

static inline uint64_t CAVM_MCSX_HIL_TX_GBL_INT_W1S(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_MCSX_HIL_TX_GBL_INT_W1S(uint64_t a)
{
    if (a<=6)
        return 0x87e0800200c8ll + 0x1000000ll * ((a) & 0x7);
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
 * INTERNAL: MCS HIL TX status Register
 */
union cavm_mcsx_hil_tx_gbl_status
{
    uint64_t u;
    struct cavm_mcsx_hil_tx_gbl_status_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_21_63        : 43;
        uint64_t skid_data_cnt         : 9;  /**< [ 20: 12](RO/H) HIL TX SKID Data fifo fill level (a single async data fifo, 64 entries per LMAC). */
        uint64_t bbe_plcy_crdt         : 5;  /**< [ 11:  7](RO/H) HIL TX BBE policy credits heap. */
        uint64_t bbe_data_crdt         : 7;  /**< [  6:  0](RO/H) HIL TX BBE data credits heap. */
#else /* Word 0 - Little Endian */
        uint64_t bbe_data_crdt         : 7;  /**< [  6:  0](RO/H) HIL TX BBE data credits heap. */
        uint64_t bbe_plcy_crdt         : 5;  /**< [ 11:  7](RO/H) HIL TX BBE policy credits heap. */
        uint64_t skid_data_cnt         : 9;  /**< [ 20: 12](RO/H) HIL TX SKID Data fifo fill level (a single async data fifo, 64 entries per LMAC). */
        uint64_t reserved_21_63        : 43;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_mcsx_hil_tx_gbl_status_s cn; */
};
typedef union cavm_mcsx_hil_tx_gbl_status cavm_mcsx_hil_tx_gbl_status_t;

static inline uint64_t CAVM_MCSX_HIL_TX_GBL_STATUS(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_MCSX_HIL_TX_GBL_STATUS(uint64_t a)
{
    if (a<=6)
        return 0x87e080060040ll + 0x1000000ll * ((a) & 0x7);
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
 * MCS HIL egress Interrupt Register
 * Contains the different interrupt bits of MCS HIL.
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
        uint64_t hil_tx_cc_message_invalid : 1;/**< [  4:  4](R/W1C/H) CC received from MIL is invalid. The first word is received is less than 4 cycles. */
        uint64_t hil_tx_ack_fifo_ovf   : 1;  /**< [  3:  3](R/W1C/H) HIL TX ack fifo overflow. */
        uint64_t hil_tx_cc_fifo_unf    : 1;  /**< [  2:  2](R/W1C/H) HIL TX channel credit fifo underflow. */
        uint64_t hil_tx_cc_fifo_ovf    : 1;  /**< [  1:  1](R/W1C/H) HIL TX channel credit fifo overflow. */
        uint64_t hil_tx_skid_crdt_fifo_ovf : 1;/**< [  0:  0](R/W1C/H) HIL TX SKID credit fifo overflow. */
#else /* Word 0 - Little Endian */
        uint64_t hil_tx_skid_crdt_fifo_ovf : 1;/**< [  0:  0](R/W1C/H) HIL TX SKID credit fifo overflow. */
        uint64_t hil_tx_cc_fifo_ovf    : 1;  /**< [  1:  1](R/W1C/H) HIL TX channel credit fifo overflow. */
        uint64_t hil_tx_cc_fifo_unf    : 1;  /**< [  2:  2](R/W1C/H) HIL TX channel credit fifo underflow. */
        uint64_t hil_tx_ack_fifo_ovf   : 1;  /**< [  3:  3](R/W1C/H) HIL TX ack fifo overflow. */
        uint64_t hil_tx_cc_message_invalid : 1;/**< [  4:  4](R/W1C/H) CC received from MIL is invalid. The first word is received is less than 4 cycles. */
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
    if ((a<=6) && (b<=3))
        return 0x87e0800200e0ll + 0x1000000ll * ((a) & 0x7) + 0x1000ll * ((b) & 0x3);
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
 * MCS HIL Egress Interrupt Enable Clear Register
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
    if ((a<=6) && (b<=3))
        return 0x87e0800200f0ll + 0x1000000ll * ((a) & 0x7) + 0x1000ll * ((b) & 0x3);
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
 * MCS HIL Egress Interrupt Enable Set Register
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
    if ((a<=6) && (b<=3))
        return 0x87e0800200f8ll + 0x1000000ll * ((a) & 0x7) + 0x1000ll * ((b) & 0x3);
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
 * MCS HIL Egress Interrupt Set Register
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
    if ((a<=6) && (b<=3))
        return 0x87e0800200e8ll + 0x1000000ll * ((a) & 0x7) + 0x1000ll * ((b) & 0x3);
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
 * INTERNAL: MCS HIL TX per LMAC status Register
 */
union cavm_mcsx_hil_tx_lmacx_status
{
    uint64_t u;
    struct cavm_mcsx_hil_tx_lmacx_status_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_22_63        : 42;
        uint64_t cc_fifo_cnt           : 7;  /**< [ 21: 15](RO/H) HIL TX channel credits fifo fill level. */
        uint64_t cc_ack_fifo_cnt       : 5;  /**< [ 14: 10](RO/H) HIL TX channel credits ack fifo fill level. */
        uint64_t cc_tx_sm              : 3;  /**< [  9:  7](RO/H) HIL TX channel credits state machine. */
        uint64_t skid_crdt_fifo_cnt    : 7;  /**< [  6:  0](RO/H) HIL TX SKID Credit fifo fill level. */
#else /* Word 0 - Little Endian */
        uint64_t skid_crdt_fifo_cnt    : 7;  /**< [  6:  0](RO/H) HIL TX SKID Credit fifo fill level. */
        uint64_t cc_tx_sm              : 3;  /**< [  9:  7](RO/H) HIL TX channel credits state machine. */
        uint64_t cc_ack_fifo_cnt       : 5;  /**< [ 14: 10](RO/H) HIL TX channel credits ack fifo fill level. */
        uint64_t cc_fifo_cnt           : 7;  /**< [ 21: 15](RO/H) HIL TX channel credits fifo fill level. */
        uint64_t reserved_22_63        : 42;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_mcsx_hil_tx_lmacx_status_s cn; */
};
typedef union cavm_mcsx_hil_tx_lmacx_status cavm_mcsx_hil_tx_lmacx_status_t;

static inline uint64_t CAVM_MCSX_HIL_TX_LMACX_STATUS(uint64_t a, uint64_t b) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_MCSX_HIL_TX_LMACX_STATUS(uint64_t a, uint64_t b)
{
    if ((a<=6) && (b<=3))
        return 0x87e080060048ll + 0x1000000ll * ((a) & 0x7) + 0x1000ll * ((b) & 0x3);
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
 * INTERNAL: MCS HIL X2P request backpressure test Register
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
                                                                 \<48\> = Stop sending X2P requests from HIL-RX to host. */
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
                                                                 \<48\> = Stop sending X2P requests from HIL-RX to host. */
        uint64_t reserved_49_63        : 15;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_mcsx_hil_x2p_req_bp_test_s cn; */
};
typedef union cavm_mcsx_hil_x2p_req_bp_test cavm_mcsx_hil_x2p_req_bp_test_t;

static inline uint64_t CAVM_MCSX_HIL_X2P_REQ_BP_TEST(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_MCSX_HIL_X2P_REQ_BP_TEST(uint64_t a)
{
    if (a<=6)
        return 0x87e080060010ll + 0x1000000ll * ((a) & 0x7);
    __cavm_csr_fatal("MCSX_HIL_X2P_REQ_BP_TEST", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_MCSX_HIL_X2P_REQ_BP_TEST(a) cavm_mcsx_hil_x2p_req_bp_test_t
#define bustype_CAVM_MCSX_HIL_X2P_REQ_BP_TEST(a) CSR_TYPE_RSL
#define basename_CAVM_MCSX_HIL_X2P_REQ_BP_TEST(a) "MCSX_HIL_X2P_REQ_BP_TEST"
#define device_bar_CAVM_MCSX_HIL_X2P_REQ_BP_TEST(a) 0x0 /* PF_BAR0 */
#define busnum_CAVM_MCSX_HIL_X2P_REQ_BP_TEST(a) (a)
#define arguments_CAVM_MCSX_HIL_X2P_REQ_BP_TEST(a) (a),-1,-1,-1

/**
 * Register (RSL) mcs#_ip_int
 *
 * MCS IP Interrupt Register
 * Contains the different interrupt bits of the MCS IP.
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
    if (a<=6)
        return 0x87e080020000ll + 0x1000000ll * ((a) & 0x7);
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
 * MCS IP egress Interrupt Enable Clear Register
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
    if (a<=6)
        return 0x87e080020010ll + 0x1000000ll * ((a) & 0x7);
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
 * MCS IP Egress Interrupt Enable Set Register
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
    if (a<=6)
        return 0x87e080020018ll + 0x1000000ll * ((a) & 0x7);
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
 * MCS IP egress Interrupt Set Register
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
    if (a<=6)
        return 0x87e080020008ll + 0x1000000ll * ((a) & 0x7);
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
 * Programmable Link Channel Number per LMAC.
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
        uint64_t base_chan             : 12; /**< [ 11:  0](R/W) Base channel number, MSBs (12-LOG2_RANGE) of BASE_CHAN are compared to P2X.chan/X2P.pnum.
                                                                 packet is mapped to the corresponding LMAC_ID in MCS.
                                                                 In case of no match or match to more than a single lmac, packet is dropped and
                                                                 interrupt is triggered. */
#else /* Word 0 - Little Endian */
        uint64_t base_chan             : 12; /**< [ 11:  0](R/W) Base channel number, MSBs (12-LOG2_RANGE) of BASE_CHAN are compared to P2X.chan/X2P.pnum.
                                                                 packet is mapped to the corresponding LMAC_ID in MCS.
                                                                 In case of no match or match to more than a single lmac, packet is dropped and
                                                                 interrupt is triggered. */
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
    if ((a<=6) && (b<=3))
        return 0x87e080020130ll + 0x1000000ll * ((a) & 0x7) + 0x1000ll * ((b) & 0x3);
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
    if ((a<=6) && (b<=7))
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
 */
union cavm_mcsx_mcs_top_slave_dbg_mux_sel
{
    uint64_t u;
    struct cavm_mcsx_mcs_top_slave_dbg_mux_sel_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_28_63        : 36;
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
        uint64_t reserved_28_63        : 36;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_mcsx_mcs_top_slave_dbg_mux_sel_s cn; */
};
typedef union cavm_mcsx_mcs_top_slave_dbg_mux_sel cavm_mcsx_mcs_top_slave_dbg_mux_sel_t;

static inline uint64_t CAVM_MCSX_MCS_TOP_SLAVE_DBG_MUX_SEL(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_MCSX_MCS_TOP_SLAVE_DBG_MUX_SEL(uint64_t a)
{
    if (a<=6)
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
    if (a<=6)
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
    if (a<=6)
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
    if (a<=6)
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
    if (a<=6)
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
 */
union cavm_mcsx_mcs_top_slave_port_configx
{
    uint64_t u;
    struct cavm_mcsx_mcs_top_slave_port_configx_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_3_63         : 61;
        uint64_t parse_depth           : 3;  /**< [  2:  0](R/W) Number of packet header bytes to parse.
                                                                 The field value is the result of the integer division of the number of
                                                                 bytes to parse and the number of input data bytes. Value of zero specifies 128 bytes. */
#else /* Word 0 - Little Endian */
        uint64_t parse_depth           : 3;  /**< [  2:  0](R/W) Number of packet header bytes to parse.
                                                                 The field value is the result of the integer division of the number of
                                                                 bytes to parse and the number of input data bytes. Value of zero specifies 128 bytes. */
        uint64_t reserved_3_63         : 61;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_mcsx_mcs_top_slave_port_configx_s cn; */
};
typedef union cavm_mcsx_mcs_top_slave_port_configx cavm_mcsx_mcs_top_slave_port_configx_t;

static inline uint64_t CAVM_MCSX_MCS_TOP_SLAVE_PORT_CONFIGX(uint64_t a, uint64_t b) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_MCSX_MCS_TOP_SLAVE_PORT_CONFIGX(uint64_t a, uint64_t b)
{
    if ((a<=6) && (b<=3))
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
    if ((a<=6) && (b<=3))
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
    if (a<=6)
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
    if (a<=6)
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
 * MIL global configurations Register
 */
union cavm_mcsx_mil_global
{
    uint64_t u;
    struct cavm_mcsx_mil_global_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_18_63        : 46;
        uint64_t rpm_buffer_size       : 13; /**< [ 17:  5](RO) RPM buffer size in 16B resolution per LMAC. Used for
                                                                 MIL_TX_CC_CNT_OVF/MIL_TX_CC_EOP_CNT_OVF Interrupts threshold . */
        uint64_t gbl_bypass            : 1;  /**< [  4:  4](R/W) Bypass MCS IP. */
        uint64_t calibrate_x2p         : 1;  /**< [  3:  3](R/W) Calibrate X2P bus. Writing this bit from zero to one starts a calibration cycle.
                                                                 Software may then monitor the NIX_AF_STATUS[CALIBRATE_DONE] bit for completion,
                                                                 and clear this bit. */
        uint64_t global_clk_en         : 1;  /**< [  2:  2](R/W) Force clock enable in CSR cores & bridge under clk domain. */
        uint64_t x2p_clk_en            : 1;  /**< [  1:  1](R/W) Force clock enable in X2P channel flops. (X2P Data + Grant). */
        uint64_t p2x_clk_en            : 1;  /**< [  0:  0](R/W) Force clock enable in P2X channel flops. */
#else /* Word 0 - Little Endian */
        uint64_t p2x_clk_en            : 1;  /**< [  0:  0](R/W) Force clock enable in P2X channel flops. */
        uint64_t x2p_clk_en            : 1;  /**< [  1:  1](R/W) Force clock enable in X2P channel flops. (X2P Data + Grant). */
        uint64_t global_clk_en         : 1;  /**< [  2:  2](R/W) Force clock enable in CSR cores & bridge under clk domain. */
        uint64_t calibrate_x2p         : 1;  /**< [  3:  3](R/W) Calibrate X2P bus. Writing this bit from zero to one starts a calibration cycle.
                                                                 Software may then monitor the NIX_AF_STATUS[CALIBRATE_DONE] bit for completion,
                                                                 and clear this bit. */
        uint64_t gbl_bypass            : 1;  /**< [  4:  4](R/W) Bypass MCS IP. */
        uint64_t rpm_buffer_size       : 13; /**< [ 17:  5](RO) RPM buffer size in 16B resolution per LMAC. Used for
                                                                 MIL_TX_CC_CNT_OVF/MIL_TX_CC_EOP_CNT_OVF Interrupts threshold . */
        uint64_t reserved_18_63        : 46;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_mcsx_mil_global_s cn; */
};
typedef union cavm_mcsx_mil_global cavm_mcsx_mil_global_t;

static inline uint64_t CAVM_MCSX_MIL_GLOBAL(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_MCSX_MIL_GLOBAL(uint64_t a)
{
    if (a<=6)
        return 0x87e080020160ll + 0x1000000ll * ((a) & 0x7);
    __cavm_csr_fatal("MCSX_MIL_GLOBAL", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_MCSX_MIL_GLOBAL(a) cavm_mcsx_mil_global_t
#define bustype_CAVM_MCSX_MIL_GLOBAL(a) CSR_TYPE_RSL
#define basename_CAVM_MCSX_MIL_GLOBAL(a) "MCSX_MIL_GLOBAL"
#define device_bar_CAVM_MCSX_MIL_GLOBAL(a) 0x0 /* PF_BAR0 */
#define busnum_CAVM_MCSX_MIL_GLOBAL(a) (a)
#define arguments_CAVM_MCSX_MIL_GLOBAL(a) (a),-1,-1,-1

/**
 * Register (RSL) mcs#_mil_port#_prio
 *
 * INTERNAL: MCS MIL PORT PRIORITY Registers
 *
 * Port priority for access request arbitration.
 */
union cavm_mcsx_mil_portx_prio
{
    uint64_t u;
    struct cavm_mcsx_mil_portx_prio_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_4_63         : 60;
        uint64_t port_prio             : 4;  /**< [  3:  0](R/W) Port priority for access request arbitration. */
#else /* Word 0 - Little Endian */
        uint64_t port_prio             : 4;  /**< [  3:  0](R/W) Port priority for access request arbitration. */
        uint64_t reserved_4_63         : 60;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_mcsx_mil_portx_prio_s cn; */
};
typedef union cavm_mcsx_mil_portx_prio cavm_mcsx_mil_portx_prio_t;

static inline uint64_t CAVM_MCSX_MIL_PORTX_PRIO(uint64_t a, uint64_t b) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_MCSX_MIL_PORTX_PRIO(uint64_t a, uint64_t b)
{
    if ((a<=6) && (b<=3))
        return 0x87e080020100ll + 0x1000000ll * ((a) & 0x7) + 0x1000ll * ((b) & 0x3);
    __cavm_csr_fatal("MCSX_MIL_PORTX_PRIO", 2, a, b, 0, 0, 0, 0);
}

#define typedef_CAVM_MCSX_MIL_PORTX_PRIO(a,b) cavm_mcsx_mil_portx_prio_t
#define bustype_CAVM_MCSX_MIL_PORTX_PRIO(a,b) CSR_TYPE_RSL
#define basename_CAVM_MCSX_MIL_PORTX_PRIO(a,b) "MCSX_MIL_PORTX_PRIO"
#define device_bar_CAVM_MCSX_MIL_PORTX_PRIO(a,b) 0x0 /* PF_BAR0 */
#define busnum_CAVM_MCSX_MIL_PORTX_PRIO(a,b) (a)
#define arguments_CAVM_MCSX_MIL_PORTX_PRIO(a,b) (a),(b),-1,-1

/**
 * Register (RSL) mcs#_mil_rx_arb_lmac#_bp_test
 *
 * INTERNAL: MCS MIL RX backpressure test Register
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
                                                                 \<48\> = Avoiding paritcipating in arbitration for poping data from SKID fifo towards PEX. */
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
                                                                 \<48\> = Avoiding paritcipating in arbitration for poping data from SKID fifo towards PEX. */
        uint64_t reserved_49_63        : 15;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_mcsx_mil_rx_arb_lmacx_bp_test_s cn; */
};
typedef union cavm_mcsx_mil_rx_arb_lmacx_bp_test cavm_mcsx_mil_rx_arb_lmacx_bp_test_t;

static inline uint64_t CAVM_MCSX_MIL_RX_ARB_LMACX_BP_TEST(uint64_t a, uint64_t b) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_MCSX_MIL_RX_ARB_LMACX_BP_TEST(uint64_t a, uint64_t b)
{
    if ((a<=6) && (b<=3))
        return 0x87e080020120ll + 0x1000000ll * ((a) & 0x7) + 0x1000ll * ((b) & 0x3);
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
 * MCS MIL RX BBE credits configuration Register
 */
union cavm_mcsx_mil_rx_err_cfg
{
    uint64_t u;
    struct cavm_mcsx_mil_rx_err_cfg_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_32_63        : 32;
        uint64_t small_packet_size     : 15; /**< [ 31: 17](R/W) Inject error to MCS_IP for packet smaller than SMALL_PACKET_SIZE. */
        uint64_t small_packet_err_en   : 1;  /**< [ 16: 16](R/W) Enable error injection to MCS_IP based on SMALL_PACKET_SIZE. */
        uint64_t rx_x2p_err_input      : 16; /**< [ 15:  0](R/W) Inject error to MCS_IP per X2P error enum. */
#else /* Word 0 - Little Endian */
        uint64_t rx_x2p_err_input      : 16; /**< [ 15:  0](R/W) Inject error to MCS_IP per X2P error enum. */
        uint64_t small_packet_err_en   : 1;  /**< [ 16: 16](R/W) Enable error injection to MCS_IP based on SMALL_PACKET_SIZE. */
        uint64_t small_packet_size     : 15; /**< [ 31: 17](R/W) Inject error to MCS_IP for packet smaller than SMALL_PACKET_SIZE. */
        uint64_t reserved_32_63        : 32;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_mcsx_mil_rx_err_cfg_s cn; */
};
typedef union cavm_mcsx_mil_rx_err_cfg cavm_mcsx_mil_rx_err_cfg_t;

static inline uint64_t CAVM_MCSX_MIL_RX_ERR_CFG(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_MCSX_MIL_RX_ERR_CFG(uint64_t a)
{
    if (a<=6)
        return 0x87e080020140ll + 0x1000000ll * ((a) & 0x7);
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
 * MCS MIL Ingress Interrupt Global Register
 * Contains the different interrupt bits of the MCS RX MIL.
 */
union cavm_mcsx_mil_rx_gbl_int
{
    uint64_t u;
    struct cavm_mcsx_mil_rx_gbl_int_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_2_63         : 62;
        uint64_t mil_rx_plcn_mismatch  : 1;  /**< [  1:  1](R/W1C/H) MIL RX packet X2P PNUM to PLCN configuration mismatch. */
        uint64_t mil_rx_grant_fail     : 1;  /**< [  0:  0](R/W1C/H) MIL RX calibration grant failure. */
#else /* Word 0 - Little Endian */
        uint64_t mil_rx_grant_fail     : 1;  /**< [  0:  0](R/W1C/H) MIL RX calibration grant failure. */
        uint64_t mil_rx_plcn_mismatch  : 1;  /**< [  1:  1](R/W1C/H) MIL RX packet X2P PNUM to PLCN configuration mismatch. */
        uint64_t reserved_2_63         : 62;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_mcsx_mil_rx_gbl_int_s cn; */
};
typedef union cavm_mcsx_mil_rx_gbl_int cavm_mcsx_mil_rx_gbl_int_t;

static inline uint64_t CAVM_MCSX_MIL_RX_GBL_INT(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_MCSX_MIL_RX_GBL_INT(uint64_t a)
{
    if (a<=6)
        return 0x87e080020020ll + 0x1000000ll * ((a) & 0x7);
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
 * MCS MIL Ingress Interrupt Enable Clear Register
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
    if (a<=6)
        return 0x87e080020030ll + 0x1000000ll * ((a) & 0x7);
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
 * MCS MIL Ingress Interrupt Enable Set Register
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
    if (a<=6)
        return 0x87e080020038ll + 0x1000000ll * ((a) & 0x7);
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
 * MCS MIL Ingress Interrupt Set Register
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
    if (a<=6)
        return 0x87e080020028ll + 0x1000000ll * ((a) & 0x7);
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
 * MCS MIL RX status Register
 */
union cavm_mcsx_mil_rx_gbl_status
{
    uint64_t u;
    struct cavm_mcsx_mil_rx_gbl_status_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_19_63        : 45;
        uint64_t apb_bridge_sm         : 2;  /**< [ 18: 17](RO/H) APB bridge state machine. */
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
        uint64_t apb_bridge_sm         : 2;  /**< [ 18: 17](RO/H) APB bridge state machine. */
        uint64_t reserved_19_63        : 45;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_mcsx_mil_rx_gbl_status_s cn; */
};
typedef union cavm_mcsx_mil_rx_gbl_status cavm_mcsx_mil_rx_gbl_status_t;

static inline uint64_t CAVM_MCSX_MIL_RX_GBL_STATUS(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_MCSX_MIL_RX_GBL_STATUS(uint64_t a)
{
    if (a<=6)
        return 0x87e080020148ll + 0x1000000ll * ((a) & 0x7);
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
        uint64_t rx_bbe_policy_credit_init : 5;/**< [ 11:  7](R/W) MIL RX BBE POLICY credit initialization (Based on BBE POLICY fifo depth). */
        uint64_t rx_bbe_data_credit_init : 7;/**< [  6:  0](R/W) MIL RX BBE DATA credit initialization (Based on BBE DATA fifo depth). */
#else /* Word 0 - Little Endian */
        uint64_t rx_bbe_data_credit_init : 7;/**< [  6:  0](R/W) MIL RX BBE DATA credit initialization (Based on BBE DATA fifo depth). */
        uint64_t rx_bbe_policy_credit_init : 5;/**< [ 11:  7](R/W) MIL RX BBE POLICY credit initialization (Based on BBE POLICY fifo depth). */
        uint64_t reserved_12_63        : 52;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_mcsx_mil_rx_lmacx_bbe_credits_s cn; */
};
typedef union cavm_mcsx_mil_rx_lmacx_bbe_credits cavm_mcsx_mil_rx_lmacx_bbe_credits_t;

static inline uint64_t CAVM_MCSX_MIL_RX_LMACX_BBE_CREDITS(uint64_t a, uint64_t b) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_MCSX_MIL_RX_LMACX_BBE_CREDITS(uint64_t a, uint64_t b)
{
    if ((a<=6) && (b<=3))
        return 0x87e080020138ll + 0x1000000ll * ((a) & 0x7) + 0x1000ll * ((b) & 0x3);
    __cavm_csr_fatal("MCSX_MIL_RX_LMACX_BBE_CREDITS", 2, a, b, 0, 0, 0, 0);
}

#define typedef_CAVM_MCSX_MIL_RX_LMACX_BBE_CREDITS(a,b) cavm_mcsx_mil_rx_lmacx_bbe_credits_t
#define bustype_CAVM_MCSX_MIL_RX_LMACX_BBE_CREDITS(a,b) CSR_TYPE_RSL
#define basename_CAVM_MCSX_MIL_RX_LMACX_BBE_CREDITS(a,b) "MCSX_MIL_RX_LMACX_BBE_CREDITS"
#define device_bar_CAVM_MCSX_MIL_RX_LMACX_BBE_CREDITS(a,b) 0x0 /* PF_BAR0 */
#define busnum_CAVM_MCSX_MIL_RX_LMACX_BBE_CREDITS(a,b) (a)
#define arguments_CAVM_MCSX_MIL_RX_LMACX_BBE_CREDITS(a,b) (a),(b),-1,-1

/**
 * Register (RSL) mcs#_mil_rx_lmac#_int
 *
 * MCS MIL per LMAC ingress Interrupt Register
 * Contains the different interrupt bits of the MCS RX MIL.
 */
union cavm_mcsx_mil_rx_lmacx_int
{
    uint64_t u;
    struct cavm_mcsx_mil_rx_lmacx_int_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_9_63         : 55;
        uint64_t mil_rx_bbe_plcy_cntr_unf : 1;/**< [  8:  8](R/W1C/H) MIL BBE policy credit counter underflow, unused in external bypass mode. */
        uint64_t mil_rx_bbe_plcy_cntr_ovf : 1;/**< [  7:  7](R/W1C/H) MIL BBE policy credit counter overflow, unused in external bypass mode. */
        uint64_t mil_rx_bbe_data_cntr_unf : 1;/**< [  6:  6](R/W1C/H) MIL BBE data credit counter underflow. */
        uint64_t mil_rx_bbe_data_cntr_ovf : 1;/**< [  5:  5](R/W1C/H) MIL BBE data credit counter overflow. */
        uint64_t mil_rx_singular_grant : 1;  /**< [  4:  4](R/W1C/H) MIL X2P grant while REQ heap empty or SKID credit empty. */
        uint64_t mil_rx_req_heap_ovf   : 1;  /**< [  3:  3](R/W1C/H) MIL X2P request heap overflow. */
        uint64_t mil_rx_skid_crdt_cntr_ovf : 1;/**< [  2:  2](R/W1C/H) MIL X2P SKID credit counter overflow. */
        uint64_t mil_rx_skid_fifo_unf  : 1;  /**< [  1:  1](R/W1C/H) MIL X2P SKID fifo underflow. */
        uint64_t mil_rx_skid_fifo_ovf  : 1;  /**< [  0:  0](R/W1C/H) MIL X2P SKID fifo overflow. */
#else /* Word 0 - Little Endian */
        uint64_t mil_rx_skid_fifo_ovf  : 1;  /**< [  0:  0](R/W1C/H) MIL X2P SKID fifo overflow. */
        uint64_t mil_rx_skid_fifo_unf  : 1;  /**< [  1:  1](R/W1C/H) MIL X2P SKID fifo underflow. */
        uint64_t mil_rx_skid_crdt_cntr_ovf : 1;/**< [  2:  2](R/W1C/H) MIL X2P SKID credit counter overflow. */
        uint64_t mil_rx_req_heap_ovf   : 1;  /**< [  3:  3](R/W1C/H) MIL X2P request heap overflow. */
        uint64_t mil_rx_singular_grant : 1;  /**< [  4:  4](R/W1C/H) MIL X2P grant while REQ heap empty or SKID credit empty. */
        uint64_t mil_rx_bbe_data_cntr_ovf : 1;/**< [  5:  5](R/W1C/H) MIL BBE data credit counter overflow. */
        uint64_t mil_rx_bbe_data_cntr_unf : 1;/**< [  6:  6](R/W1C/H) MIL BBE data credit counter underflow. */
        uint64_t mil_rx_bbe_plcy_cntr_ovf : 1;/**< [  7:  7](R/W1C/H) MIL BBE policy credit counter overflow, unused in external bypass mode. */
        uint64_t mil_rx_bbe_plcy_cntr_unf : 1;/**< [  8:  8](R/W1C/H) MIL BBE policy credit counter underflow, unused in external bypass mode. */
        uint64_t reserved_9_63         : 55;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_mcsx_mil_rx_lmacx_int_s cn; */
};
typedef union cavm_mcsx_mil_rx_lmacx_int cavm_mcsx_mil_rx_lmacx_int_t;

static inline uint64_t CAVM_MCSX_MIL_RX_LMACX_INT(uint64_t a, uint64_t b) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_MCSX_MIL_RX_LMACX_INT(uint64_t a, uint64_t b)
{
    if ((a<=6) && (b<=3))
        return 0x87e080020040ll + 0x1000000ll * ((a) & 0x7) + 0x1000ll * ((b) & 0x3);
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
 * MCS MIL Ingress Interrupt Enable Clear Register
 * This register clears interrupt enable bits.
 */
union cavm_mcsx_mil_rx_lmacx_int_ena_w1c
{
    uint64_t u;
    struct cavm_mcsx_mil_rx_lmacx_int_ena_w1c_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_9_63         : 55;
        uint64_t mil_rx_bbe_plcy_cntr_unf : 1;/**< [  8:  8](R/W1C/H) Reads or clears enable for MCS(0..6)_MIL_RX_LMAC(0..3)_INT[MIL_RX_BBE_PLCY_CNTR_UNF]. */
        uint64_t mil_rx_bbe_plcy_cntr_ovf : 1;/**< [  7:  7](R/W1C/H) Reads or clears enable for MCS(0..6)_MIL_RX_LMAC(0..3)_INT[MIL_RX_BBE_PLCY_CNTR_OVF]. */
        uint64_t mil_rx_bbe_data_cntr_unf : 1;/**< [  6:  6](R/W1C/H) Reads or clears enable for MCS(0..6)_MIL_RX_LMAC(0..3)_INT[MIL_RX_BBE_DATA_CNTR_UNF]. */
        uint64_t mil_rx_bbe_data_cntr_ovf : 1;/**< [  5:  5](R/W1C/H) Reads or clears enable for MCS(0..6)_MIL_RX_LMAC(0..3)_INT[MIL_RX_BBE_DATA_CNTR_OVF]. */
        uint64_t mil_rx_singular_grant : 1;  /**< [  4:  4](R/W1C/H) Reads or clears enable for MCS(0..6)_MIL_RX_LMAC(0..3)_INT[MIL_RX_SINGULAR_GRANT]. */
        uint64_t mil_rx_req_heap_ovf   : 1;  /**< [  3:  3](R/W1C/H) Reads or clears enable for MCS(0..6)_MIL_RX_LMAC(0..3)_INT[MIL_RX_REQ_HEAP_OVF]. */
        uint64_t mil_rx_skid_crdt_cntr_ovf : 1;/**< [  2:  2](R/W1C/H) Reads or clears enable for MCS(0..6)_MIL_RX_LMAC(0..3)_INT[MIL_RX_SKID_CRDT_CNTR_OVF]. */
        uint64_t mil_rx_skid_fifo_unf  : 1;  /**< [  1:  1](R/W1C/H) Reads or clears enable for MCS(0..6)_MIL_RX_LMAC(0..3)_INT[MIL_RX_SKID_FIFO_UNF]. */
        uint64_t mil_rx_skid_fifo_ovf  : 1;  /**< [  0:  0](R/W1C/H) Reads or clears enable for MCS(0..6)_MIL_RX_LMAC(0..3)_INT[MIL_RX_SKID_FIFO_OVF]. */
#else /* Word 0 - Little Endian */
        uint64_t mil_rx_skid_fifo_ovf  : 1;  /**< [  0:  0](R/W1C/H) Reads or clears enable for MCS(0..6)_MIL_RX_LMAC(0..3)_INT[MIL_RX_SKID_FIFO_OVF]. */
        uint64_t mil_rx_skid_fifo_unf  : 1;  /**< [  1:  1](R/W1C/H) Reads or clears enable for MCS(0..6)_MIL_RX_LMAC(0..3)_INT[MIL_RX_SKID_FIFO_UNF]. */
        uint64_t mil_rx_skid_crdt_cntr_ovf : 1;/**< [  2:  2](R/W1C/H) Reads or clears enable for MCS(0..6)_MIL_RX_LMAC(0..3)_INT[MIL_RX_SKID_CRDT_CNTR_OVF]. */
        uint64_t mil_rx_req_heap_ovf   : 1;  /**< [  3:  3](R/W1C/H) Reads or clears enable for MCS(0..6)_MIL_RX_LMAC(0..3)_INT[MIL_RX_REQ_HEAP_OVF]. */
        uint64_t mil_rx_singular_grant : 1;  /**< [  4:  4](R/W1C/H) Reads or clears enable for MCS(0..6)_MIL_RX_LMAC(0..3)_INT[MIL_RX_SINGULAR_GRANT]. */
        uint64_t mil_rx_bbe_data_cntr_ovf : 1;/**< [  5:  5](R/W1C/H) Reads or clears enable for MCS(0..6)_MIL_RX_LMAC(0..3)_INT[MIL_RX_BBE_DATA_CNTR_OVF]. */
        uint64_t mil_rx_bbe_data_cntr_unf : 1;/**< [  6:  6](R/W1C/H) Reads or clears enable for MCS(0..6)_MIL_RX_LMAC(0..3)_INT[MIL_RX_BBE_DATA_CNTR_UNF]. */
        uint64_t mil_rx_bbe_plcy_cntr_ovf : 1;/**< [  7:  7](R/W1C/H) Reads or clears enable for MCS(0..6)_MIL_RX_LMAC(0..3)_INT[MIL_RX_BBE_PLCY_CNTR_OVF]. */
        uint64_t mil_rx_bbe_plcy_cntr_unf : 1;/**< [  8:  8](R/W1C/H) Reads or clears enable for MCS(0..6)_MIL_RX_LMAC(0..3)_INT[MIL_RX_BBE_PLCY_CNTR_UNF]. */
        uint64_t reserved_9_63         : 55;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_mcsx_mil_rx_lmacx_int_ena_w1c_s cn; */
};
typedef union cavm_mcsx_mil_rx_lmacx_int_ena_w1c cavm_mcsx_mil_rx_lmacx_int_ena_w1c_t;

static inline uint64_t CAVM_MCSX_MIL_RX_LMACX_INT_ENA_W1C(uint64_t a, uint64_t b) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_MCSX_MIL_RX_LMACX_INT_ENA_W1C(uint64_t a, uint64_t b)
{
    if ((a<=6) && (b<=3))
        return 0x87e080020050ll + 0x1000000ll * ((a) & 0x7) + 0x1000ll * ((b) & 0x3);
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
 * MCS MIL Ingress Interrupt Enable Set Register
 * This register sets interrupt enable bits.
 */
union cavm_mcsx_mil_rx_lmacx_int_ena_w1s
{
    uint64_t u;
    struct cavm_mcsx_mil_rx_lmacx_int_ena_w1s_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_9_63         : 55;
        uint64_t mil_rx_bbe_plcy_cntr_unf : 1;/**< [  8:  8](R/W1S/H) Reads or sets enable for MCS(0..6)_MIL_RX_LMAC(0..3)_INT[MIL_RX_BBE_PLCY_CNTR_UNF]. */
        uint64_t mil_rx_bbe_plcy_cntr_ovf : 1;/**< [  7:  7](R/W1S/H) Reads or sets enable for MCS(0..6)_MIL_RX_LMAC(0..3)_INT[MIL_RX_BBE_PLCY_CNTR_OVF]. */
        uint64_t mil_rx_bbe_data_cntr_unf : 1;/**< [  6:  6](R/W1S/H) Reads or sets enable for MCS(0..6)_MIL_RX_LMAC(0..3)_INT[MIL_RX_BBE_DATA_CNTR_UNF]. */
        uint64_t mil_rx_bbe_data_cntr_ovf : 1;/**< [  5:  5](R/W1S/H) Reads or sets enable for MCS(0..6)_MIL_RX_LMAC(0..3)_INT[MIL_RX_BBE_DATA_CNTR_OVF]. */
        uint64_t mil_rx_singular_grant : 1;  /**< [  4:  4](R/W1S/H) Reads or sets enable for MCS(0..6)_MIL_RX_LMAC(0..3)_INT[MIL_RX_SINGULAR_GRANT]. */
        uint64_t mil_rx_req_heap_ovf   : 1;  /**< [  3:  3](R/W1S/H) Reads or sets enable for MCS(0..6)_MIL_RX_LMAC(0..3)_INT[MIL_RX_REQ_HEAP_OVF]. */
        uint64_t mil_rx_skid_crdt_cntr_ovf : 1;/**< [  2:  2](R/W1S/H) Reads or sets enable for MCS(0..6)_MIL_RX_LMAC(0..3)_INT[MIL_RX_SKID_CRDT_CNTR_OVF]. */
        uint64_t mil_rx_skid_fifo_unf  : 1;  /**< [  1:  1](R/W1S/H) Reads or sets enable for MCS(0..6)_MIL_RX_LMAC(0..3)_INT[MIL_RX_SKID_FIFO_UNF]. */
        uint64_t mil_rx_skid_fifo_ovf  : 1;  /**< [  0:  0](R/W1S/H) Reads or sets enable for MCS(0..6)_MIL_RX_LMAC(0..3)_INT[MIL_RX_SKID_FIFO_OVF]. */
#else /* Word 0 - Little Endian */
        uint64_t mil_rx_skid_fifo_ovf  : 1;  /**< [  0:  0](R/W1S/H) Reads or sets enable for MCS(0..6)_MIL_RX_LMAC(0..3)_INT[MIL_RX_SKID_FIFO_OVF]. */
        uint64_t mil_rx_skid_fifo_unf  : 1;  /**< [  1:  1](R/W1S/H) Reads or sets enable for MCS(0..6)_MIL_RX_LMAC(0..3)_INT[MIL_RX_SKID_FIFO_UNF]. */
        uint64_t mil_rx_skid_crdt_cntr_ovf : 1;/**< [  2:  2](R/W1S/H) Reads or sets enable for MCS(0..6)_MIL_RX_LMAC(0..3)_INT[MIL_RX_SKID_CRDT_CNTR_OVF]. */
        uint64_t mil_rx_req_heap_ovf   : 1;  /**< [  3:  3](R/W1S/H) Reads or sets enable for MCS(0..6)_MIL_RX_LMAC(0..3)_INT[MIL_RX_REQ_HEAP_OVF]. */
        uint64_t mil_rx_singular_grant : 1;  /**< [  4:  4](R/W1S/H) Reads or sets enable for MCS(0..6)_MIL_RX_LMAC(0..3)_INT[MIL_RX_SINGULAR_GRANT]. */
        uint64_t mil_rx_bbe_data_cntr_ovf : 1;/**< [  5:  5](R/W1S/H) Reads or sets enable for MCS(0..6)_MIL_RX_LMAC(0..3)_INT[MIL_RX_BBE_DATA_CNTR_OVF]. */
        uint64_t mil_rx_bbe_data_cntr_unf : 1;/**< [  6:  6](R/W1S/H) Reads or sets enable for MCS(0..6)_MIL_RX_LMAC(0..3)_INT[MIL_RX_BBE_DATA_CNTR_UNF]. */
        uint64_t mil_rx_bbe_plcy_cntr_ovf : 1;/**< [  7:  7](R/W1S/H) Reads or sets enable for MCS(0..6)_MIL_RX_LMAC(0..3)_INT[MIL_RX_BBE_PLCY_CNTR_OVF]. */
        uint64_t mil_rx_bbe_plcy_cntr_unf : 1;/**< [  8:  8](R/W1S/H) Reads or sets enable for MCS(0..6)_MIL_RX_LMAC(0..3)_INT[MIL_RX_BBE_PLCY_CNTR_UNF]. */
        uint64_t reserved_9_63         : 55;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_mcsx_mil_rx_lmacx_int_ena_w1s_s cn; */
};
typedef union cavm_mcsx_mil_rx_lmacx_int_ena_w1s cavm_mcsx_mil_rx_lmacx_int_ena_w1s_t;

static inline uint64_t CAVM_MCSX_MIL_RX_LMACX_INT_ENA_W1S(uint64_t a, uint64_t b) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_MCSX_MIL_RX_LMACX_INT_ENA_W1S(uint64_t a, uint64_t b)
{
    if ((a<=6) && (b<=3))
        return 0x87e080020058ll + 0x1000000ll * ((a) & 0x7) + 0x1000ll * ((b) & 0x3);
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
 * MCS MIL Ingress Interrupt Set Register
 * This register sets interrupt bits.
 */
union cavm_mcsx_mil_rx_lmacx_int_w1s
{
    uint64_t u;
    struct cavm_mcsx_mil_rx_lmacx_int_w1s_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_9_63         : 55;
        uint64_t mil_rx_bbe_plcy_cntr_unf : 1;/**< [  8:  8](R/W1S/H) Reads or sets MCS(0..6)_MIL_RX_LMAC(0..3)_INT[MIL_RX_BBE_PLCY_CNTR_UNF]. */
        uint64_t mil_rx_bbe_plcy_cntr_ovf : 1;/**< [  7:  7](R/W1S/H) Reads or sets MCS(0..6)_MIL_RX_LMAC(0..3)_INT[MIL_RX_BBE_PLCY_CNTR_OVF]. */
        uint64_t mil_rx_bbe_data_cntr_unf : 1;/**< [  6:  6](R/W1S/H) Reads or sets MCS(0..6)_MIL_RX_LMAC(0..3)_INT[MIL_RX_BBE_DATA_CNTR_UNF]. */
        uint64_t mil_rx_bbe_data_cntr_ovf : 1;/**< [  5:  5](R/W1S/H) Reads or sets MCS(0..6)_MIL_RX_LMAC(0..3)_INT[MIL_RX_BBE_DATA_CNTR_OVF]. */
        uint64_t mil_rx_singular_grant : 1;  /**< [  4:  4](R/W1S/H) Reads or sets MCS(0..6)_MIL_RX_LMAC(0..3)_INT[MIL_RX_SINGULAR_GRANT]. */
        uint64_t mil_rx_req_heap_ovf   : 1;  /**< [  3:  3](R/W1S/H) Reads or sets MCS(0..6)_MIL_RX_LMAC(0..3)_INT[MIL_RX_REQ_HEAP_OVF]. */
        uint64_t mil_rx_skid_crdt_cntr_ovf : 1;/**< [  2:  2](R/W1S/H) Reads or sets MCS(0..6)_MIL_RX_LMAC(0..3)_INT[MIL_RX_SKID_CRDT_CNTR_OVF]. */
        uint64_t mil_rx_skid_fifo_unf  : 1;  /**< [  1:  1](R/W1S/H) Reads or sets MCS(0..6)_MIL_RX_LMAC(0..3)_INT[MIL_RX_SKID_FIFO_UNF]. */
        uint64_t mil_rx_skid_fifo_ovf  : 1;  /**< [  0:  0](R/W1S/H) Reads or sets MCS(0..6)_MIL_RX_LMAC(0..3)_INT[MIL_RX_SKID_FIFO_OVF]. */
#else /* Word 0 - Little Endian */
        uint64_t mil_rx_skid_fifo_ovf  : 1;  /**< [  0:  0](R/W1S/H) Reads or sets MCS(0..6)_MIL_RX_LMAC(0..3)_INT[MIL_RX_SKID_FIFO_OVF]. */
        uint64_t mil_rx_skid_fifo_unf  : 1;  /**< [  1:  1](R/W1S/H) Reads or sets MCS(0..6)_MIL_RX_LMAC(0..3)_INT[MIL_RX_SKID_FIFO_UNF]. */
        uint64_t mil_rx_skid_crdt_cntr_ovf : 1;/**< [  2:  2](R/W1S/H) Reads or sets MCS(0..6)_MIL_RX_LMAC(0..3)_INT[MIL_RX_SKID_CRDT_CNTR_OVF]. */
        uint64_t mil_rx_req_heap_ovf   : 1;  /**< [  3:  3](R/W1S/H) Reads or sets MCS(0..6)_MIL_RX_LMAC(0..3)_INT[MIL_RX_REQ_HEAP_OVF]. */
        uint64_t mil_rx_singular_grant : 1;  /**< [  4:  4](R/W1S/H) Reads or sets MCS(0..6)_MIL_RX_LMAC(0..3)_INT[MIL_RX_SINGULAR_GRANT]. */
        uint64_t mil_rx_bbe_data_cntr_ovf : 1;/**< [  5:  5](R/W1S/H) Reads or sets MCS(0..6)_MIL_RX_LMAC(0..3)_INT[MIL_RX_BBE_DATA_CNTR_OVF]. */
        uint64_t mil_rx_bbe_data_cntr_unf : 1;/**< [  6:  6](R/W1S/H) Reads or sets MCS(0..6)_MIL_RX_LMAC(0..3)_INT[MIL_RX_BBE_DATA_CNTR_UNF]. */
        uint64_t mil_rx_bbe_plcy_cntr_ovf : 1;/**< [  7:  7](R/W1S/H) Reads or sets MCS(0..6)_MIL_RX_LMAC(0..3)_INT[MIL_RX_BBE_PLCY_CNTR_OVF]. */
        uint64_t mil_rx_bbe_plcy_cntr_unf : 1;/**< [  8:  8](R/W1S/H) Reads or sets MCS(0..6)_MIL_RX_LMAC(0..3)_INT[MIL_RX_BBE_PLCY_CNTR_UNF]. */
        uint64_t reserved_9_63         : 55;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_mcsx_mil_rx_lmacx_int_w1s_s cn; */
};
typedef union cavm_mcsx_mil_rx_lmacx_int_w1s cavm_mcsx_mil_rx_lmacx_int_w1s_t;

static inline uint64_t CAVM_MCSX_MIL_RX_LMACX_INT_W1S(uint64_t a, uint64_t b) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_MCSX_MIL_RX_LMACX_INT_W1S(uint64_t a, uint64_t b)
{
    if ((a<=6) && (b<=3))
        return 0x87e080020048ll + 0x1000000ll * ((a) & 0x7) + 0x1000ll * ((b) & 0x3);
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
        uint64_t rx_skid_credit_init   : 7;  /**< [  6:  0](R/W) Ingress SKID credit initialization (Init value based on x2p2_p2x2_defs::X2P2_SKID_CREDIT). */
#else /* Word 0 - Little Endian */
        uint64_t rx_skid_credit_init   : 7;  /**< [  6:  0](R/W) Ingress SKID credit initialization (Init value based on x2p2_p2x2_defs::X2P2_SKID_CREDIT). */
        uint64_t reserved_7_63         : 57;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_mcsx_mil_rx_lmacx_skd_crd_init_s cn; */
};
typedef union cavm_mcsx_mil_rx_lmacx_skd_crd_init cavm_mcsx_mil_rx_lmacx_skd_crd_init_t;

static inline uint64_t CAVM_MCSX_MIL_RX_LMACX_SKD_CRD_INIT(uint64_t a, uint64_t b) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_MCSX_MIL_RX_LMACX_SKD_CRD_INIT(uint64_t a, uint64_t b)
{
    if ((a<=6) && (b<=3))
        return 0x87e080020110ll + 0x1000000ll * ((a) & 0x7) + 0x1000ll * ((b) & 0x3);
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
        uint64_t bbe_data_crdt         : 7;  /**< [ 32: 26](RO/H) MIL RX BBE data credits (Based on BBE DATA fifo depth). */
        uint64_t bbe_plcy_crdt         : 5;  /**< [ 25: 21](RO/H) MIL RX BBE policy credits (Based on BBE POLICY fifo depth). */
        uint64_t req_heap              : 7;  /**< [ 20: 14](RO/H) MIL RX requests heap fill level. */
        uint64_t skid_crdt             : 7;  /**< [ 13:  7](RO/H) MIL RX SKID credit count (Init value based on x2p2_p2x2_defs::X2P2_SKID_CREDIT). */
        uint64_t skid_fifo_cnt         : 7;  /**< [  6:  0](RO/H) MIL RX SKID fifo fill level. */
#else /* Word 0 - Little Endian */
        uint64_t skid_fifo_cnt         : 7;  /**< [  6:  0](RO/H) MIL RX SKID fifo fill level. */
        uint64_t skid_crdt             : 7;  /**< [ 13:  7](RO/H) MIL RX SKID credit count (Init value based on x2p2_p2x2_defs::X2P2_SKID_CREDIT). */
        uint64_t req_heap              : 7;  /**< [ 20: 14](RO/H) MIL RX requests heap fill level. */
        uint64_t bbe_plcy_crdt         : 5;  /**< [ 25: 21](RO/H) MIL RX BBE policy credits (Based on BBE POLICY fifo depth). */
        uint64_t bbe_data_crdt         : 7;  /**< [ 32: 26](RO/H) MIL RX BBE data credits (Based on BBE DATA fifo depth). */
        uint64_t reserved_33_63        : 31;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_mcsx_mil_rx_lmacx_status_s cn; */
};
typedef union cavm_mcsx_mil_rx_lmacx_status cavm_mcsx_mil_rx_lmacx_status_t;

static inline uint64_t CAVM_MCSX_MIL_RX_LMACX_STATUS(uint64_t a, uint64_t b) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_MCSX_MIL_RX_LMACX_STATUS(uint64_t a, uint64_t b)
{
    if ((a<=6) && (b<=3))
        return 0x87e080020150ll + 0x1000000ll * ((a) & 0x7) + 0x1000ll * ((b) & 0x3);
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
 * INTERNAL: MCS MIL TX backpressure test Register
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
    if (a<=6)
        return 0x87e080020118ll + 0x1000000ll * ((a) & 0x7);
    __cavm_csr_fatal("MCSX_MIL_TX_BP_TEST", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_MCSX_MIL_TX_BP_TEST(a) cavm_mcsx_mil_tx_bp_test_t
#define bustype_CAVM_MCSX_MIL_TX_BP_TEST(a) CSR_TYPE_RSL
#define basename_CAVM_MCSX_MIL_TX_BP_TEST(a) "MCSX_MIL_TX_BP_TEST"
#define device_bar_CAVM_MCSX_MIL_TX_BP_TEST(a) 0x0 /* PF_BAR0 */
#define busnum_CAVM_MCSX_MIL_TX_BP_TEST(a) (a)
#define arguments_CAVM_MCSX_MIL_TX_BP_TEST(a) (a),-1,-1,-1

/**
 * Register (RSL) mcs#_mil_tx_lmac#_int
 *
 * MCS MIL TX Per LMAC egress Interrupt Register
 * Contains the different interrupt bits of the MCS MIL TX.
 */
union cavm_mcsx_mil_tx_lmacx_int
{
    uint64_t u;
    struct cavm_mcsx_mil_tx_lmacx_int_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_6_63         : 58;
        uint64_t mil_tx_illegal_cc_from_pab : 1;/**< [  5:  5](R/W1C/H) MIL TX ILLEGAL NUMBER OF CCs from PAB, range is 0-4 */
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
        uint64_t mil_tx_illegal_cc_from_pab : 1;/**< [  5:  5](R/W1C/H) MIL TX ILLEGAL NUMBER OF CCs from PAB, range is 0-4 */
        uint64_t reserved_6_63         : 58;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_mcsx_mil_tx_lmacx_int_s cn; */
};
typedef union cavm_mcsx_mil_tx_lmacx_int cavm_mcsx_mil_tx_lmacx_int_t;

static inline uint64_t CAVM_MCSX_MIL_TX_LMACX_INT(uint64_t a, uint64_t b) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_MCSX_MIL_TX_LMACX_INT(uint64_t a, uint64_t b)
{
    if ((a<=6) && (b<=3))
        return 0x87e080020060ll + 0x1000000ll * ((a) & 0x7) + 0x1000ll * ((b) & 0x3);
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
 * MCS MIL Egress Interrupt Enable Clear Register
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
    if ((a<=6) && (b<=3))
        return 0x87e080020070ll + 0x1000000ll * ((a) & 0x7) + 0x1000ll * ((b) & 0x3);
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
 * MCS MIL Egress Interrupt Enable Set Register
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
    if ((a<=6) && (b<=3))
        return 0x87e080020078ll + 0x1000000ll * ((a) & 0x7) + 0x1000ll * ((b) & 0x3);
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
 * MCS MIL Egress Interrupt Set Register
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
    if ((a<=6) && (b<=3))
        return 0x87e080020068ll + 0x1000000ll * ((a) & 0x7) + 0x1000ll * ((b) & 0x3);
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
        uint64_t reserved_38_63        : 26;
        uint64_t mil_ch_crdt_sm        : 2;  /**< [ 37: 36](RO/H) TX channel credit state machine. */
        uint64_t accumulate_eop        : 14; /**< [ 35: 22](RO/H) MIL TX channel credit PAB eop accumulator. */
        uint64_t accumulate_crdt       : 14; /**< [ 21:  8](RO/H) MIL TX channel credit PAB credits accumulator. */
        uint64_t pab_bp                : 1;  /**< [  7:  7](RO/H) TX PAB back pressure status. */
        uint64_t skid_crdt             : 7;  /**< [  6:  0](RO/H) MIL TX SKID credits counter (Init value based on x2p2_p2x2_defs::P2X2_SKID_CREDIT). */
#else /* Word 0 - Little Endian */
        uint64_t skid_crdt             : 7;  /**< [  6:  0](RO/H) MIL TX SKID credits counter (Init value based on x2p2_p2x2_defs::P2X2_SKID_CREDIT). */
        uint64_t pab_bp                : 1;  /**< [  7:  7](RO/H) TX PAB back pressure status. */
        uint64_t accumulate_crdt       : 14; /**< [ 21:  8](RO/H) MIL TX channel credit PAB credits accumulator. */
        uint64_t accumulate_eop        : 14; /**< [ 35: 22](RO/H) MIL TX channel credit PAB eop accumulator. */
        uint64_t mil_ch_crdt_sm        : 2;  /**< [ 37: 36](RO/H) TX channel credit state machine. */
        uint64_t reserved_38_63        : 26;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_mcsx_mil_tx_lmacx_status_s cn; */
};
typedef union cavm_mcsx_mil_tx_lmacx_status cavm_mcsx_mil_tx_lmacx_status_t;

static inline uint64_t CAVM_MCSX_MIL_TX_LMACX_STATUS(uint64_t a, uint64_t b) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_MCSX_MIL_TX_LMACX_STATUS(uint64_t a, uint64_t b)
{
    if ((a<=6) && (b<=3))
        return 0x87e080020158ll + 0x1000000ll * ((a) & 0x7) + 0x1000ll * ((b) & 0x3);
    __cavm_csr_fatal("MCSX_MIL_TX_LMACX_STATUS", 2, a, b, 0, 0, 0, 0);
}

#define typedef_CAVM_MCSX_MIL_TX_LMACX_STATUS(a,b) cavm_mcsx_mil_tx_lmacx_status_t
#define bustype_CAVM_MCSX_MIL_TX_LMACX_STATUS(a,b) CSR_TYPE_RSL
#define basename_CAVM_MCSX_MIL_TX_LMACX_STATUS(a,b) "MCSX_MIL_TX_LMACX_STATUS"
#define device_bar_CAVM_MCSX_MIL_TX_LMACX_STATUS(a,b) 0x0 /* PF_BAR0 */
#define busnum_CAVM_MCSX_MIL_TX_LMACX_STATUS(a,b) (a)
#define arguments_CAVM_MCSX_MIL_TX_LMACX_STATUS(a,b) (a),(b),-1,-1

/**
 * Register (RSL) mcs#_mil_tx_pab_latency
 *
 * INTERNAL: MIL PAB BP configurations Register
 */
union cavm_mcsx_mil_tx_pab_latency
{
    uint64_t u;
    struct cavm_mcsx_mil_tx_pab_latency_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_5_63         : 59;
        uint64_t pab_bp_latency        : 5;  /**< [  4:  0](R/W) Reserved.
                                                                 Internal:
                                                                 PAB backpressure latency. Number of cycles from PAB BP input trigger to cease PAB out traffic.
                                                                 IP latency is 7 cycles, add 1 cycle for margin. */
#else /* Word 0 - Little Endian */
        uint64_t pab_bp_latency        : 5;  /**< [  4:  0](R/W) Reserved.
                                                                 Internal:
                                                                 PAB backpressure latency. Number of cycles from PAB BP input trigger to cease PAB out traffic.
                                                                 IP latency is 7 cycles, add 1 cycle for margin. */
        uint64_t reserved_5_63         : 59;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_mcsx_mil_tx_pab_latency_s cn; */
};
typedef union cavm_mcsx_mil_tx_pab_latency cavm_mcsx_mil_tx_pab_latency_t;

static inline uint64_t CAVM_MCSX_MIL_TX_PAB_LATENCY(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_MCSX_MIL_TX_PAB_LATENCY(uint64_t a)
{
    if (a<=6)
        return 0x87e080020168ll + 0x1000000ll * ((a) & 0x7);
    __cavm_csr_fatal("MCSX_MIL_TX_PAB_LATENCY", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_MCSX_MIL_TX_PAB_LATENCY(a) cavm_mcsx_mil_tx_pab_latency_t
#define bustype_CAVM_MCSX_MIL_TX_PAB_LATENCY(a) CSR_TYPE_RSL
#define basename_CAVM_MCSX_MIL_TX_PAB_LATENCY(a) "MCSX_MIL_TX_PAB_LATENCY"
#define device_bar_CAVM_MCSX_MIL_TX_PAB_LATENCY(a) 0x0 /* PF_BAR0 */
#define busnum_CAVM_MCSX_MIL_TX_PAB_LATENCY(a) (a)
#define arguments_CAVM_MCSX_MIL_TX_PAB_LATENCY(a) (a),-1,-1,-1

/**
 * Register (RSL) mcs#_mil_tx_skid_credit_init
 *
 * INTERNAL: MCS MIL TX SKID CREDIT Configuration Register
 */
union cavm_mcsx_mil_tx_skid_credit_init
{
    uint64_t u;
    struct cavm_mcsx_mil_tx_skid_credit_init_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_7_63         : 57;
        uint64_t tx_skid_credit_init   : 7;  /**< [  6:  0](R/W) Egress SKID credit initialization. */
#else /* Word 0 - Little Endian */
        uint64_t tx_skid_credit_init   : 7;  /**< [  6:  0](R/W) Egress SKID credit initialization. */
        uint64_t reserved_7_63         : 57;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_mcsx_mil_tx_skid_credit_init_s cn; */
};
typedef union cavm_mcsx_mil_tx_skid_credit_init cavm_mcsx_mil_tx_skid_credit_init_t;

static inline uint64_t CAVM_MCSX_MIL_TX_SKID_CREDIT_INIT(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_MCSX_MIL_TX_SKID_CREDIT_INIT(uint64_t a)
{
    if (a<=6)
        return 0x87e080020108ll + 0x1000000ll * ((a) & 0x7);
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
    if ((a<=6) && (b==0))
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
    if ((a<=6) && (b<=19))
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
    if ((a<=6) && (b<=19))
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
    if (a<=6)
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
    if (a<=6)
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
 * Register (RSL) mcs#_pab_rx_slave_fifo_cfg#
 *
 * MCS Pab Rx Slave Fifo Cfg Register
 */
union cavm_mcsx_pab_rx_slave_fifo_cfgx
{
    uint64_t u;
    struct cavm_mcsx_pab_rx_slave_fifo_cfgx_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_23_63        : 41;
        uint64_t ae_th_pre             : 7;  /**< [ 22: 16](R/W) Preempt channel almost empty threshold setting.
                                                                 (actual FIFO fill level which will assert its aempty flag for this channel, ie
                                                                 if the FIFO fill is [0-ae_th_pre] inclusive, then aempty will assert). This
                                                                 register affects the PAB arbiter. The user should not need to change the default
                                                                 setting. */
        uint64_t reserved_7_15         : 9;
        uint64_t ae_th_exp             : 7;  /**< [  6:  0](R/W) Express channel almost empty threshold setting.
                                                                 (actual FIFO fill level which will assert its aempty flag for this channel, ie
                                                                 if the FIFO fill is [0-ae_th_exp] inclusive, then aempty will assert). This
                                                                 register affects the PAB arbiter. The user should not need to change the default
                                                                 setting. */
#else /* Word 0 - Little Endian */
        uint64_t ae_th_exp             : 7;  /**< [  6:  0](R/W) Express channel almost empty threshold setting.
                                                                 (actual FIFO fill level which will assert its aempty flag for this channel, ie
                                                                 if the FIFO fill is [0-ae_th_exp] inclusive, then aempty will assert). This
                                                                 register affects the PAB arbiter. The user should not need to change the default
                                                                 setting. */
        uint64_t reserved_7_15         : 9;
        uint64_t ae_th_pre             : 7;  /**< [ 22: 16](R/W) Preempt channel almost empty threshold setting.
                                                                 (actual FIFO fill level which will assert its aempty flag for this channel, ie
                                                                 if the FIFO fill is [0-ae_th_pre] inclusive, then aempty will assert). This
                                                                 register affects the PAB arbiter. The user should not need to change the default
                                                                 setting. */
        uint64_t reserved_23_63        : 41;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_mcsx_pab_rx_slave_fifo_cfgx_s cn; */
};
typedef union cavm_mcsx_pab_rx_slave_fifo_cfgx cavm_mcsx_pab_rx_slave_fifo_cfgx_t;

static inline uint64_t CAVM_MCSX_PAB_RX_SLAVE_FIFO_CFGX(uint64_t a, uint64_t b) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_MCSX_PAB_RX_SLAVE_FIFO_CFGX(uint64_t a, uint64_t b)
{
    if ((a<=6) && (b<=3))
        return 0x87e080000288ll + 0x1000000ll * ((a) & 0x7) + 0x40ll * ((b) & 0x3);
    __cavm_csr_fatal("MCSX_PAB_RX_SLAVE_FIFO_CFGX", 2, a, b, 0, 0, 0, 0);
}

#define typedef_CAVM_MCSX_PAB_RX_SLAVE_FIFO_CFGX(a,b) cavm_mcsx_pab_rx_slave_fifo_cfgx_t
#define bustype_CAVM_MCSX_PAB_RX_SLAVE_FIFO_CFGX(a,b) CSR_TYPE_RSL
#define basename_CAVM_MCSX_PAB_RX_SLAVE_FIFO_CFGX(a,b) "MCSX_PAB_RX_SLAVE_FIFO_CFGX"
#define device_bar_CAVM_MCSX_PAB_RX_SLAVE_FIFO_CFGX(a,b) 0x0 /* PF_BAR0 */
#define busnum_CAVM_MCSX_PAB_RX_SLAVE_FIFO_CFGX(a,b) (a)
#define arguments_CAVM_MCSX_PAB_RX_SLAVE_FIFO_CFGX(a,b) (a),(b),-1,-1

/**
 * Register (RSL) mcs#_pab_rx_slave_fifo_skid_cfg#
 *
 * MCS Pab Rx Slave Fifo Skid Cfg Register
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
                                                                 The user should not need to change the default setting. */
        uint64_t reserved_7_15         : 9;
        uint64_t bbe_pab_skid_exp      : 7;  /**< [  6:  0](R/W) Express channel BBE to PAB skid.  This amount affects when the PAB FIFO asserts
                                                                 backpressure to the BBE.
                                                                 The skid is the maximum amount of data that the PAB FIFO needs to accept from
                                                                 the BBE while backpressure is asserted.
                                                                 The user should not need to change the default setting. */
#else /* Word 0 - Little Endian */
        uint64_t bbe_pab_skid_exp      : 7;  /**< [  6:  0](R/W) Express channel BBE to PAB skid.  This amount affects when the PAB FIFO asserts
                                                                 backpressure to the BBE.
                                                                 The skid is the maximum amount of data that the PAB FIFO needs to accept from
                                                                 the BBE while backpressure is asserted.
                                                                 The user should not need to change the default setting. */
        uint64_t reserved_7_15         : 9;
        uint64_t bbe_pab_skid_pre      : 7;  /**< [ 22: 16](R/W) Preempt channel BBE to PAB skid.  This amount affects when the PAB FIFO asserts
                                                                 backpressure to the BBE.
                                                                 The skid is the maximum amount of data that the PAB FIFO needs to accept from
                                                                 the BBE while backpressure is asserted.
                                                                 The user should not need to change the default setting. */
        uint64_t reserved_23_63        : 41;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_mcsx_pab_rx_slave_fifo_skid_cfgx_s cn; */
};
typedef union cavm_mcsx_pab_rx_slave_fifo_skid_cfgx cavm_mcsx_pab_rx_slave_fifo_skid_cfgx_t;

static inline uint64_t CAVM_MCSX_PAB_RX_SLAVE_FIFO_SKID_CFGX(uint64_t a, uint64_t b) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_MCSX_PAB_RX_SLAVE_FIFO_SKID_CFGX(uint64_t a, uint64_t b)
{
    if ((a<=6) && (b<=3))
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
    if (a<=6)
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
 */
union cavm_mcsx_pab_rx_slave_pab_int
{
    uint64_t u;
    struct cavm_mcsx_pab_rx_slave_pab_int_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_8_63         : 56;
        uint64_t overflow              : 8;  /**< [  7:  0](R/W) Corresponding channel experienced an overflow, a reset to that channel is required. */
#else /* Word 0 - Little Endian */
        uint64_t overflow              : 8;  /**< [  7:  0](R/W) Corresponding channel experienced an overflow, a reset to that channel is required. */
        uint64_t reserved_8_63         : 56;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_mcsx_pab_rx_slave_pab_int_s cn; */
};
typedef union cavm_mcsx_pab_rx_slave_pab_int cavm_mcsx_pab_rx_slave_pab_int_t;

static inline uint64_t CAVM_MCSX_PAB_RX_SLAVE_PAB_INT(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_MCSX_PAB_RX_SLAVE_PAB_INT(uint64_t a)
{
    if (a<=6)
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
 */
union cavm_mcsx_pab_rx_slave_pab_int_enb
{
    uint64_t u;
    struct cavm_mcsx_pab_rx_slave_pab_int_enb_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_8_63         : 56;
        uint64_t overflow_enb          : 8;  /**< [  7:  0](R/W) Corresponding channel experienced an overflow, a reset to that channel is required. */
#else /* Word 0 - Little Endian */
        uint64_t overflow_enb          : 8;  /**< [  7:  0](R/W) Corresponding channel experienced an overflow, a reset to that channel is required. */
        uint64_t reserved_8_63         : 56;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_mcsx_pab_rx_slave_pab_int_enb_s cn; */
};
typedef union cavm_mcsx_pab_rx_slave_pab_int_enb cavm_mcsx_pab_rx_slave_pab_int_enb_t;

static inline uint64_t CAVM_MCSX_PAB_RX_SLAVE_PAB_INT_ENB(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_MCSX_PAB_RX_SLAVE_PAB_INT_ENB(uint64_t a)
{
    if (a<=6)
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
 */
union cavm_mcsx_pab_rx_slave_pab_int_intr_rw
{
    uint64_t u;
    struct cavm_mcsx_pab_rx_slave_pab_int_intr_rw_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_8_63         : 56;
        uint64_t overflow              : 8;  /**< [  7:  0](R/W) Corresponding channel experienced an overflow, a reset to that channel is required. */
#else /* Word 0 - Little Endian */
        uint64_t overflow              : 8;  /**< [  7:  0](R/W) Corresponding channel experienced an overflow, a reset to that channel is required. */
        uint64_t reserved_8_63         : 56;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_mcsx_pab_rx_slave_pab_int_intr_rw_s cn; */
};
typedef union cavm_mcsx_pab_rx_slave_pab_int_intr_rw cavm_mcsx_pab_rx_slave_pab_int_intr_rw_t;

static inline uint64_t CAVM_MCSX_PAB_RX_SLAVE_PAB_INT_INTR_RW(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_MCSX_PAB_RX_SLAVE_PAB_INT_INTR_RW(uint64_t a)
{
    if (a<=6)
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
 */
union cavm_mcsx_pab_rx_slave_pab_int_raw
{
    uint64_t u;
    struct cavm_mcsx_pab_rx_slave_pab_int_raw_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_8_63         : 56;
        uint64_t overflow              : 8;  /**< [  7:  0](RO) Corresponding channel experienced an overflow, a reset to that channel is required. */
#else /* Word 0 - Little Endian */
        uint64_t overflow              : 8;  /**< [  7:  0](RO) Corresponding channel experienced an overflow, a reset to that channel is required. */
        uint64_t reserved_8_63         : 56;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_mcsx_pab_rx_slave_pab_int_raw_s cn; */
};
typedef union cavm_mcsx_pab_rx_slave_pab_int_raw cavm_mcsx_pab_rx_slave_pab_int_raw_t;

static inline uint64_t CAVM_MCSX_PAB_RX_SLAVE_PAB_INT_RAW(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_MCSX_PAB_RX_SLAVE_PAB_INT_RAW(uint64_t a)
{
    if (a<=6)
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
                                                                 Note that only port0 can be configured to 100G. Only ports 0 and 2 can be
                                                                 configured to 50G. Any port can be configured to 25G or less.
                                                                 2'b00 - 25G or less;
                                                                 2'b01 - 50G;
                                                                 2'b10 - 100G;
                                                                 2'b11 - RESERVED. */
#else /* Word 0 - Little Endian */
        uint64_t mode                  : 2;  /**< [  1:  0](R/W) Port mode controls how the shared resources (Data FIFO memory, etc.) are
                                                                 allocated to the active channels.
                                                                 Note that only port0 can be configured to 100G. Only ports 0 and 2 can be
                                                                 configured to 50G. Any port can be configured to 25G or less.
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
    if ((a<=6) && (b<=3))
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
 */
union cavm_mcsx_pab_rx_slave_tx_trunc
{
    uint64_t u;
    struct cavm_mcsx_pab_rx_slave_tx_trunc_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_1_63         : 63;
        uint64_t enable_trunc          : 1;  /**< [  0:  0](R/W) Enables truncation of a packet to the MTU size when set.  Any packet that
                                                                 exceeds the configured MTU will be EOP errored. */
#else /* Word 0 - Little Endian */
        uint64_t enable_trunc          : 1;  /**< [  0:  0](R/W) Enables truncation of a packet to the MTU size when set.  Any packet that
                                                                 exceeds the configured MTU will be EOP errored. */
        uint64_t reserved_1_63         : 63;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_mcsx_pab_rx_slave_tx_trunc_s cn; */
};
typedef union cavm_mcsx_pab_rx_slave_tx_trunc cavm_mcsx_pab_rx_slave_tx_trunc_t;

static inline uint64_t CAVM_MCSX_PAB_RX_SLAVE_TX_TRUNC(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_MCSX_PAB_RX_SLAVE_TX_TRUNC(uint64_t a)
{
    if (a<=6)
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
 * Register (RSL) mcs#_pab_rx_slave_word_add_if
 *
 * MCS Pab Rx Slave Word Add If Register
 */
union cavm_mcsx_pab_rx_slave_word_add_if
{
    uint64_t u;
    struct cavm_mcsx_pab_rx_slave_word_add_if_s
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
    /* struct cavm_mcsx_pab_rx_slave_word_add_if_s cn; */
};
typedef union cavm_mcsx_pab_rx_slave_word_add_if cavm_mcsx_pab_rx_slave_word_add_if_t;

static inline uint64_t CAVM_MCSX_PAB_RX_SLAVE_WORD_ADD_IF(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_MCSX_PAB_RX_SLAVE_WORD_ADD_IF(uint64_t a)
{
    if (a<=6)
        return 0x87e080000378ll + 0x1000000ll * ((a) & 0x7);
    __cavm_csr_fatal("MCSX_PAB_RX_SLAVE_WORD_ADD_IF", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_MCSX_PAB_RX_SLAVE_WORD_ADD_IF(a) cavm_mcsx_pab_rx_slave_word_add_if_t
#define bustype_CAVM_MCSX_PAB_RX_SLAVE_WORD_ADD_IF(a) CSR_TYPE_RSL
#define basename_CAVM_MCSX_PAB_RX_SLAVE_WORD_ADD_IF(a) "MCSX_PAB_RX_SLAVE_WORD_ADD_IF"
#define device_bar_CAVM_MCSX_PAB_RX_SLAVE_WORD_ADD_IF(a) 0x0 /* PF_BAR0 */
#define busnum_CAVM_MCSX_PAB_RX_SLAVE_WORD_ADD_IF(a) (a)
#define arguments_CAVM_MCSX_PAB_RX_SLAVE_WORD_ADD_IF(a) (a),-1,-1,-1

/**
 * Register (RSL) mcs#_pab_tx_slave_dbg_mux_sel
 *
 * MCS Pab Tx Slave Dbg Mux Sel Register
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
    if (a<=6)
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
    if (a<=6)
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
 * Register (RSL) mcs#_pab_tx_slave_fifo_cfg#
 *
 * MCS Pab Tx Slave Fifo Cfg Register
 */
union cavm_mcsx_pab_tx_slave_fifo_cfgx
{
    uint64_t u;
    struct cavm_mcsx_pab_tx_slave_fifo_cfgx_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_23_63        : 41;
        uint64_t ae_th_pre             : 7;  /**< [ 22: 16](R/W) Preempt channel almost empty threshold setting.
                                                                 (actual FIFO fill level which will assert its aempty flag for this channel, ie
                                                                 if the FIFO fill is [0-ae_th_pre] inclusive, then aempty will assert). This
                                                                 register affects the PAB arbiter. The user should not need to change the default
                                                                 setting. */
        uint64_t reserved_7_15         : 9;
        uint64_t ae_th_exp             : 7;  /**< [  6:  0](R/W) Express channel almost empty threshold setting.
                                                                 (actual FIFO fill level which will assert its aempty flag for this channel, ie
                                                                 if the FIFO fill is [0-ae_th_exp] inclusive, then aempty will assert). This
                                                                 register affects the PAB arbiter. The user should not need to change the default
                                                                 setting. */
#else /* Word 0 - Little Endian */
        uint64_t ae_th_exp             : 7;  /**< [  6:  0](R/W) Express channel almost empty threshold setting.
                                                                 (actual FIFO fill level which will assert its aempty flag for this channel, ie
                                                                 if the FIFO fill is [0-ae_th_exp] inclusive, then aempty will assert). This
                                                                 register affects the PAB arbiter. The user should not need to change the default
                                                                 setting. */
        uint64_t reserved_7_15         : 9;
        uint64_t ae_th_pre             : 7;  /**< [ 22: 16](R/W) Preempt channel almost empty threshold setting.
                                                                 (actual FIFO fill level which will assert its aempty flag for this channel, ie
                                                                 if the FIFO fill is [0-ae_th_pre] inclusive, then aempty will assert). This
                                                                 register affects the PAB arbiter. The user should not need to change the default
                                                                 setting. */
        uint64_t reserved_23_63        : 41;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_mcsx_pab_tx_slave_fifo_cfgx_s cn; */
};
typedef union cavm_mcsx_pab_tx_slave_fifo_cfgx cavm_mcsx_pab_tx_slave_fifo_cfgx_t;

static inline uint64_t CAVM_MCSX_PAB_TX_SLAVE_FIFO_CFGX(uint64_t a, uint64_t b) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_MCSX_PAB_TX_SLAVE_FIFO_CFGX(uint64_t a, uint64_t b)
{
    if ((a<=6) && (b<=3))
        return 0x87e0800003a8ll + 0x1000000ll * ((a) & 0x7) + 0x40ll * ((b) & 0x3);
    __cavm_csr_fatal("MCSX_PAB_TX_SLAVE_FIFO_CFGX", 2, a, b, 0, 0, 0, 0);
}

#define typedef_CAVM_MCSX_PAB_TX_SLAVE_FIFO_CFGX(a,b) cavm_mcsx_pab_tx_slave_fifo_cfgx_t
#define bustype_CAVM_MCSX_PAB_TX_SLAVE_FIFO_CFGX(a,b) CSR_TYPE_RSL
#define basename_CAVM_MCSX_PAB_TX_SLAVE_FIFO_CFGX(a,b) "MCSX_PAB_TX_SLAVE_FIFO_CFGX"
#define device_bar_CAVM_MCSX_PAB_TX_SLAVE_FIFO_CFGX(a,b) 0x0 /* PF_BAR0 */
#define busnum_CAVM_MCSX_PAB_TX_SLAVE_FIFO_CFGX(a,b) (a)
#define arguments_CAVM_MCSX_PAB_TX_SLAVE_FIFO_CFGX(a,b) (a),(b),-1,-1

/**
 * Register (RSL) mcs#_pab_tx_slave_fifo_skid_cfg#
 *
 * MCS Pab Tx Slave Fifo Skid Cfg Register
 */
union cavm_mcsx_pab_tx_slave_fifo_skid_cfgx
{
    uint64_t u;
    struct cavm_mcsx_pab_tx_slave_fifo_skid_cfgx_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_23_63        : 41;
        uint64_t bbe_pab_skid_pre      : 7;  /**< [ 22: 16](R/W) Preempt channel BBE to PAB skid.  This amount affects when the PAB FIFO asserts
                                                                 backpressure to the BBE.
                                                                 The skid is the maximum amount of data that the PAB FIFO needs to accept from
                                                                 the BBE while backpressure is asserted.
                                                                 The user should not need to change the default setting. */
        uint64_t reserved_7_15         : 9;
        uint64_t bbe_pab_skid_exp      : 7;  /**< [  6:  0](R/W) Express channel BBE to PAB skid.  This amount affects when the PAB FIFO asserts
                                                                 backpressure to the BBE.
                                                                 The skid is the maximum amount of data that the PAB FIFO needs to accept from
                                                                 the BBE while backpressure is asserted.
                                                                 The user should not need to change the default setting. */
#else /* Word 0 - Little Endian */
        uint64_t bbe_pab_skid_exp      : 7;  /**< [  6:  0](R/W) Express channel BBE to PAB skid.  This amount affects when the PAB FIFO asserts
                                                                 backpressure to the BBE.
                                                                 The skid is the maximum amount of data that the PAB FIFO needs to accept from
                                                                 the BBE while backpressure is asserted.
                                                                 The user should not need to change the default setting. */
        uint64_t reserved_7_15         : 9;
        uint64_t bbe_pab_skid_pre      : 7;  /**< [ 22: 16](R/W) Preempt channel BBE to PAB skid.  This amount affects when the PAB FIFO asserts
                                                                 backpressure to the BBE.
                                                                 The skid is the maximum amount of data that the PAB FIFO needs to accept from
                                                                 the BBE while backpressure is asserted.
                                                                 The user should not need to change the default setting. */
        uint64_t reserved_23_63        : 41;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_mcsx_pab_tx_slave_fifo_skid_cfgx_s cn; */
};
typedef union cavm_mcsx_pab_tx_slave_fifo_skid_cfgx cavm_mcsx_pab_tx_slave_fifo_skid_cfgx_t;

static inline uint64_t CAVM_MCSX_PAB_TX_SLAVE_FIFO_SKID_CFGX(uint64_t a, uint64_t b) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_MCSX_PAB_TX_SLAVE_FIFO_SKID_CFGX(uint64_t a, uint64_t b)
{
    if ((a<=6) && (b<=3))
        return 0x87e0800003b0ll + 0x1000000ll * ((a) & 0x7) + 0x40ll * ((b) & 0x3);
    __cavm_csr_fatal("MCSX_PAB_TX_SLAVE_FIFO_SKID_CFGX", 2, a, b, 0, 0, 0, 0);
}

#define typedef_CAVM_MCSX_PAB_TX_SLAVE_FIFO_SKID_CFGX(a,b) cavm_mcsx_pab_tx_slave_fifo_skid_cfgx_t
#define bustype_CAVM_MCSX_PAB_TX_SLAVE_FIFO_SKID_CFGX(a,b) CSR_TYPE_RSL
#define basename_CAVM_MCSX_PAB_TX_SLAVE_FIFO_SKID_CFGX(a,b) "MCSX_PAB_TX_SLAVE_FIFO_SKID_CFGX"
#define device_bar_CAVM_MCSX_PAB_TX_SLAVE_FIFO_SKID_CFGX(a,b) 0x0 /* PF_BAR0 */
#define busnum_CAVM_MCSX_PAB_TX_SLAVE_FIFO_SKID_CFGX(a,b) (a)
#define arguments_CAVM_MCSX_PAB_TX_SLAVE_FIFO_SKID_CFGX(a,b) (a),(b),-1,-1

/**
 * Register (RSL) mcs#_pab_tx_slave_include_tag_cnt
 *
 * MCS Pab Tx Slave Include Tag Cnt Register
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
    if (a<=6)
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
 */
union cavm_mcsx_pab_tx_slave_pab_int
{
    uint64_t u;
    struct cavm_mcsx_pab_tx_slave_pab_int_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_8_63         : 56;
        uint64_t overflow              : 8;  /**< [  7:  0](R/W) Corresponding channel experienced an overflow, a reset to that channel is required. */
#else /* Word 0 - Little Endian */
        uint64_t overflow              : 8;  /**< [  7:  0](R/W) Corresponding channel experienced an overflow, a reset to that channel is required. */
        uint64_t reserved_8_63         : 56;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_mcsx_pab_tx_slave_pab_int_s cn; */
};
typedef union cavm_mcsx_pab_tx_slave_pab_int cavm_mcsx_pab_tx_slave_pab_int_t;

static inline uint64_t CAVM_MCSX_PAB_TX_SLAVE_PAB_INT(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_MCSX_PAB_TX_SLAVE_PAB_INT(uint64_t a)
{
    if (a<=6)
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
 */
union cavm_mcsx_pab_tx_slave_pab_int_enb
{
    uint64_t u;
    struct cavm_mcsx_pab_tx_slave_pab_int_enb_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_8_63         : 56;
        uint64_t overflow_enb          : 8;  /**< [  7:  0](R/W) Corresponding channel experienced an overflow, a reset to that channel is required. */
#else /* Word 0 - Little Endian */
        uint64_t overflow_enb          : 8;  /**< [  7:  0](R/W) Corresponding channel experienced an overflow, a reset to that channel is required. */
        uint64_t reserved_8_63         : 56;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_mcsx_pab_tx_slave_pab_int_enb_s cn; */
};
typedef union cavm_mcsx_pab_tx_slave_pab_int_enb cavm_mcsx_pab_tx_slave_pab_int_enb_t;

static inline uint64_t CAVM_MCSX_PAB_TX_SLAVE_PAB_INT_ENB(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_MCSX_PAB_TX_SLAVE_PAB_INT_ENB(uint64_t a)
{
    if (a<=6)
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
 */
union cavm_mcsx_pab_tx_slave_pab_int_intr_rw
{
    uint64_t u;
    struct cavm_mcsx_pab_tx_slave_pab_int_intr_rw_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_8_63         : 56;
        uint64_t overflow              : 8;  /**< [  7:  0](R/W) Corresponding channel experienced an overflow, a reset to that channel is required. */
#else /* Word 0 - Little Endian */
        uint64_t overflow              : 8;  /**< [  7:  0](R/W) Corresponding channel experienced an overflow, a reset to that channel is required. */
        uint64_t reserved_8_63         : 56;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_mcsx_pab_tx_slave_pab_int_intr_rw_s cn; */
};
typedef union cavm_mcsx_pab_tx_slave_pab_int_intr_rw cavm_mcsx_pab_tx_slave_pab_int_intr_rw_t;

static inline uint64_t CAVM_MCSX_PAB_TX_SLAVE_PAB_INT_INTR_RW(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_MCSX_PAB_TX_SLAVE_PAB_INT_INTR_RW(uint64_t a)
{
    if (a<=6)
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
 */
union cavm_mcsx_pab_tx_slave_pab_int_raw
{
    uint64_t u;
    struct cavm_mcsx_pab_tx_slave_pab_int_raw_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_8_63         : 56;
        uint64_t overflow              : 8;  /**< [  7:  0](RO) Corresponding channel experienced an overflow, a reset to that channel is required. */
#else /* Word 0 - Little Endian */
        uint64_t overflow              : 8;  /**< [  7:  0](RO) Corresponding channel experienced an overflow, a reset to that channel is required. */
        uint64_t reserved_8_63         : 56;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_mcsx_pab_tx_slave_pab_int_raw_s cn; */
};
typedef union cavm_mcsx_pab_tx_slave_pab_int_raw cavm_mcsx_pab_tx_slave_pab_int_raw_t;

static inline uint64_t CAVM_MCSX_PAB_TX_SLAVE_PAB_INT_RAW(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_MCSX_PAB_TX_SLAVE_PAB_INT_RAW(uint64_t a)
{
    if (a<=6)
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
 * Register (RSL) mcs#_pab_tx_slave_port_cfg#
 *
 * MCS Pab Tx Slave Port Cfg Register
 */
union cavm_mcsx_pab_tx_slave_port_cfgx
{
    uint64_t u;
    struct cavm_mcsx_pab_tx_slave_port_cfgx_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_2_63         : 62;
        uint64_t mode                  : 2;  /**< [  1:  0](R/W) Port mode controls how the shared resources (Data FIFO memory, etc.) are
                                                                 allocated to the active channels.
                                                                 Note that only port0 can be configured to 100G. Only ports 0 and 2 can be
                                                                 configured to 50G. Any port can be configured to 25G or less.
                                                                 2'b00 - 25G or less;
                                                                 2'b01 - 50G;
                                                                 2'b10 - 100G;
                                                                 2'b11 - RESERVED. */
#else /* Word 0 - Little Endian */
        uint64_t mode                  : 2;  /**< [  1:  0](R/W) Port mode controls how the shared resources (Data FIFO memory, etc.) are
                                                                 allocated to the active channels.
                                                                 Note that only port0 can be configured to 100G. Only ports 0 and 2 can be
                                                                 configured to 50G. Any port can be configured to 25G or less.
                                                                 2'b00 - 25G or less;
                                                                 2'b01 - 50G;
                                                                 2'b10 - 100G;
                                                                 2'b11 - RESERVED. */
        uint64_t reserved_2_63         : 62;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_mcsx_pab_tx_slave_port_cfgx_s cn; */
};
typedef union cavm_mcsx_pab_tx_slave_port_cfgx cavm_mcsx_pab_tx_slave_port_cfgx_t;

static inline uint64_t CAVM_MCSX_PAB_TX_SLAVE_PORT_CFGX(uint64_t a, uint64_t b) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_MCSX_PAB_TX_SLAVE_PORT_CFGX(uint64_t a, uint64_t b)
{
    if ((a<=6) && (b<=3))
        return 0x87e0800003a0ll + 0x1000000ll * ((a) & 0x7) + 0x40ll * ((b) & 0x3);
    __cavm_csr_fatal("MCSX_PAB_TX_SLAVE_PORT_CFGX", 2, a, b, 0, 0, 0, 0);
}

#define typedef_CAVM_MCSX_PAB_TX_SLAVE_PORT_CFGX(a,b) cavm_mcsx_pab_tx_slave_port_cfgx_t
#define bustype_CAVM_MCSX_PAB_TX_SLAVE_PORT_CFGX(a,b) CSR_TYPE_RSL
#define basename_CAVM_MCSX_PAB_TX_SLAVE_PORT_CFGX(a,b) "MCSX_PAB_TX_SLAVE_PORT_CFGX"
#define device_bar_CAVM_MCSX_PAB_TX_SLAVE_PORT_CFGX(a,b) 0x0 /* PF_BAR0 */
#define busnum_CAVM_MCSX_PAB_TX_SLAVE_PORT_CFGX(a,b) (a)
#define arguments_CAVM_MCSX_PAB_TX_SLAVE_PORT_CFGX(a,b) (a),(b),-1,-1

/**
 * Register (RSL) mcs#_pab_tx_slave_tx_trunc
 *
 * MCS Pab Tx Slave Tx Trunc Register
 */
union cavm_mcsx_pab_tx_slave_tx_trunc
{
    uint64_t u;
    struct cavm_mcsx_pab_tx_slave_tx_trunc_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_1_63         : 63;
        uint64_t enable_trunc          : 1;  /**< [  0:  0](R/W) Enables truncation of a packet to the MTU size when set.  Any packet that
                                                                 exceeds the configured MTU will be EOP errored. */
#else /* Word 0 - Little Endian */
        uint64_t enable_trunc          : 1;  /**< [  0:  0](R/W) Enables truncation of a packet to the MTU size when set.  Any packet that
                                                                 exceeds the configured MTU will be EOP errored. */
        uint64_t reserved_1_63         : 63;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_mcsx_pab_tx_slave_tx_trunc_s cn; */
};
typedef union cavm_mcsx_pab_tx_slave_tx_trunc cavm_mcsx_pab_tx_slave_tx_trunc_t;

static inline uint64_t CAVM_MCSX_PAB_TX_SLAVE_TX_TRUNC(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_MCSX_PAB_TX_SLAVE_TX_TRUNC(uint64_t a)
{
    if (a<=6)
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
    if (a<=6)
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
        uint64_t cstm_bonus            : 1;  /**< [ 21: 21](R/W) When set, extract the two bytes immediately following the tag label.  If this
                                                                 bit is clear for all instances, PEX will extract 2B after the first non-matching
                                                                 etype as bonus data. */
        uint64_t cstm_vlan             : 1;  /**< [ 20: 20](R/W) Custom tag is VLAN tag */
        uint64_t cstm_size             : 4;  /**< [ 19: 16](R/W) Size of custom tag, including tag label. Valid values are 2,4,6,8,10,12,14,16.
                                                                 VLAN tag size must always be 4. For size 16, set field to zero. */
        uint64_t cstm_etype            : 16; /**< [ 15:  0](R/W) EthType/TPID; typical TPID for C-Tag is 0x8100, and S-Tag is 0x88a8. */
#else /* Word 0 - Little Endian */
        uint64_t cstm_etype            : 16; /**< [ 15:  0](R/W) EthType/TPID; typical TPID for C-Tag is 0x8100, and S-Tag is 0x88a8. */
        uint64_t cstm_size             : 4;  /**< [ 19: 16](R/W) Size of custom tag, including tag label. Valid values are 2,4,6,8,10,12,14,16.
                                                                 VLAN tag size must always be 4. For size 16, set field to zero. */
        uint64_t cstm_vlan             : 1;  /**< [ 20: 20](R/W) Custom tag is VLAN tag */
        uint64_t cstm_bonus            : 1;  /**< [ 21: 21](R/W) When set, extract the two bytes immediately following the tag label.  If this
                                                                 bit is clear for all instances, PEX will extract 2B after the first non-matching
                                                                 etype as bonus data. */
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
    if ((a<=6) && (b<=7))
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
    if ((a<=6) && (b<=3))
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
    if (a<=6)
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
    if (a<=6)
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
 */
union cavm_mcsx_pex_rx_slave_etype_enable
{
    uint64_t u;
    struct cavm_mcsx_pex_rx_slave_etype_enable_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_15_63        : 49;
        uint64_t txmcs_etype_en        : 1;  /**< [ 14: 14](R/W) Enable EthType stored in the field tx_mcs_header in the opt_header_cfg_0
                                                                 register.  Set to 1 to enable the EthTypes, or 0 to disable. */
        uint64_t rxmcs_etype_en        : 1;  /**< [ 13: 13](R/W) Enable EthType stored in the field rx_mcs_header in the opt_header_cfg_0
                                                                 register.  Set to 1 to enable the EthType, or 0 to disable. */
        uint64_t st_etype_en           : 1;  /**< [ 12: 12](R/W) Enable EthType stored in the sectag_cfg registers.  Set to 1 to enable the
                                                                 EthType, or 0 to disable. */
        uint64_t mpls_etype_en         : 4;  /**< [ 11:  8](R/W) Enable EthTypes stored in the 4 mpls_cfg registers, where bit 8-11 enable
                                                                 registers 0-3 respectively.  Set to 1 to enable the EthTypes, or 0 to disable. */
        uint64_t cstm_etype_en         : 8;  /**< [  7:  0](R/W) Enable EthTypes/TPID stored in the 8 custom_tag (including VLAN tags) registers,
                                                                 where bit 0-7 enable registers 0-7 respectively.  Set to 1 to enable the
                                                                 EthTypes, or 0 to disable. */
#else /* Word 0 - Little Endian */
        uint64_t cstm_etype_en         : 8;  /**< [  7:  0](R/W) Enable EthTypes/TPID stored in the 8 custom_tag (including VLAN tags) registers,
                                                                 where bit 0-7 enable registers 0-7 respectively.  Set to 1 to enable the
                                                                 EthTypes, or 0 to disable. */
        uint64_t mpls_etype_en         : 4;  /**< [ 11:  8](R/W) Enable EthTypes stored in the 4 mpls_cfg registers, where bit 8-11 enable
                                                                 registers 0-3 respectively.  Set to 1 to enable the EthTypes, or 0 to disable. */
        uint64_t st_etype_en           : 1;  /**< [ 12: 12](R/W) Enable EthType stored in the sectag_cfg registers.  Set to 1 to enable the
                                                                 EthType, or 0 to disable. */
        uint64_t rxmcs_etype_en        : 1;  /**< [ 13: 13](R/W) Enable EthType stored in the field rx_mcs_header in the opt_header_cfg_0
                                                                 register.  Set to 1 to enable the EthType, or 0 to disable. */
        uint64_t txmcs_etype_en        : 1;  /**< [ 14: 14](R/W) Enable EthType stored in the field tx_mcs_header in the opt_header_cfg_0
                                                                 register.  Set to 1 to enable the EthTypes, or 0 to disable. */
        uint64_t reserved_15_63        : 49;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_mcsx_pex_rx_slave_etype_enable_s cn; */
};
typedef union cavm_mcsx_pex_rx_slave_etype_enable cavm_mcsx_pex_rx_slave_etype_enable_t;

static inline uint64_t CAVM_MCSX_PEX_RX_SLAVE_ETYPE_ENABLE(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_MCSX_PEX_RX_SLAVE_ETYPE_ENABLE(uint64_t a)
{
    if (a<=6)
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
 * Register (RSL) mcs#_pex_rx_slave_mpls_cfg#
 *
 * MCS Pex Rx Slave Mpls Cfg Register
 */
union cavm_mcsx_pex_rx_slave_mpls_cfgx
{
    uint64_t u;
    struct cavm_mcsx_pex_rx_slave_mpls_cfgx_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_16_63        : 48;
        uint64_t mpls_etype            : 16; /**< [ 15:  0](R/W) MPLS stack EthType */
#else /* Word 0 - Little Endian */
        uint64_t mpls_etype            : 16; /**< [ 15:  0](R/W) MPLS stack EthType */
        uint64_t reserved_16_63        : 48;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_mcsx_pex_rx_slave_mpls_cfgx_s cn; */
};
typedef union cavm_mcsx_pex_rx_slave_mpls_cfgx cavm_mcsx_pex_rx_slave_mpls_cfgx_t;

static inline uint64_t CAVM_MCSX_PEX_RX_SLAVE_MPLS_CFGX(uint64_t a, uint64_t b) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_MCSX_PEX_RX_SLAVE_MPLS_CFGX(uint64_t a, uint64_t b)
{
    if ((a<=6) && (b<=3))
        return 0x87e080000528ll + 0x1000000ll * ((a) & 0x7) + 8ll * ((b) & 0x3);
    __cavm_csr_fatal("MCSX_PEX_RX_SLAVE_MPLS_CFGX", 2, a, b, 0, 0, 0, 0);
}

#define typedef_CAVM_MCSX_PEX_RX_SLAVE_MPLS_CFGX(a,b) cavm_mcsx_pex_rx_slave_mpls_cfgx_t
#define bustype_CAVM_MCSX_PEX_RX_SLAVE_MPLS_CFGX(a,b) CSR_TYPE_RSL
#define basename_CAVM_MCSX_PEX_RX_SLAVE_MPLS_CFGX(a,b) "MCSX_PEX_RX_SLAVE_MPLS_CFGX"
#define device_bar_CAVM_MCSX_PEX_RX_SLAVE_MPLS_CFGX(a,b) 0x0 /* PF_BAR0 */
#define busnum_CAVM_MCSX_PEX_RX_SLAVE_MPLS_CFGX(a,b) (a)
#define arguments_CAVM_MCSX_PEX_RX_SLAVE_MPLS_CFGX(a,b) (a),(b),-1,-1

/**
 * Register (RSL) mcs#_pex_rx_slave_opt_header_cfg_0
 *
 * MCS Pex Rx Slave Opt Header Cfg 0 Register
 */
union cavm_mcsx_pex_rx_slave_opt_header_cfg_0
{
    uint64_t u;
    struct cavm_mcsx_pex_rx_slave_opt_header_cfg_0_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_32_63        : 32;
        uint64_t tx_mcs_header         : 16; /**< [ 31: 16](R/W) EthType for optional TX MCS header */
        uint64_t rx_mcs_header         : 16; /**< [ 15:  0](R/W) EthType for optional RX MCS header */
#else /* Word 0 - Little Endian */
        uint64_t rx_mcs_header         : 16; /**< [ 15:  0](R/W) EthType for optional RX MCS header */
        uint64_t tx_mcs_header         : 16; /**< [ 31: 16](R/W) EthType for optional TX MCS header */
        uint64_t reserved_32_63        : 32;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_mcsx_pex_rx_slave_opt_header_cfg_0_s cn; */
};
typedef union cavm_mcsx_pex_rx_slave_opt_header_cfg_0 cavm_mcsx_pex_rx_slave_opt_header_cfg_0_t;

static inline uint64_t CAVM_MCSX_PEX_RX_SLAVE_OPT_HEADER_CFG_0(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_MCSX_PEX_RX_SLAVE_OPT_HEADER_CFG_0(uint64_t a)
{
    if (a<=6)
        return 0x87e080000550ll + 0x1000000ll * ((a) & 0x7);
    __cavm_csr_fatal("MCSX_PEX_RX_SLAVE_OPT_HEADER_CFG_0", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_MCSX_PEX_RX_SLAVE_OPT_HEADER_CFG_0(a) cavm_mcsx_pex_rx_slave_opt_header_cfg_0_t
#define bustype_CAVM_MCSX_PEX_RX_SLAVE_OPT_HEADER_CFG_0(a) CSR_TYPE_RSL
#define basename_CAVM_MCSX_PEX_RX_SLAVE_OPT_HEADER_CFG_0(a) "MCSX_PEX_RX_SLAVE_OPT_HEADER_CFG_0"
#define device_bar_CAVM_MCSX_PEX_RX_SLAVE_OPT_HEADER_CFG_0(a) 0x0 /* PF_BAR0 */
#define busnum_CAVM_MCSX_PEX_RX_SLAVE_OPT_HEADER_CFG_0(a) (a)
#define arguments_CAVM_MCSX_PEX_RX_SLAVE_OPT_HEADER_CFG_0(a) (a),-1,-1,-1

/**
 * Register (RSL) mcs#_pex_rx_slave_pex_configuration
 *
 * MCS Pex Rx Slave Pex Configuration Register
 */
union cavm_mcsx_pex_rx_slave_pex_configuration
{
    uint64_t u;
    struct cavm_mcsx_pex_rx_slave_pex_configuration_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_6_63         : 58;
        uint64_t non_dix_err           : 1;  /**< [  5:  5](R/W) Set to 1 to trigger a parse error when non-DIX frames are received */
        uint64_t vlan_after_custom     : 1;  /**< [  4:  4](R/W) Extract packets with VLAN tags located after custom tags */
        uint64_t custom_header         : 4;  /**< [  3:  0](R/W) Per-port custom header enable. Port number 'i' packets are expected to have 8B
                                                                 custom header before DA/SA if bit 'i' is set. */
#else /* Word 0 - Little Endian */
        uint64_t custom_header         : 4;  /**< [  3:  0](R/W) Per-port custom header enable. Port number 'i' packets are expected to have 8B
                                                                 custom header before DA/SA if bit 'i' is set. */
        uint64_t vlan_after_custom     : 1;  /**< [  4:  4](R/W) Extract packets with VLAN tags located after custom tags */
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
    if (a<=6)
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
 * Register (RSL) mcs#_pex_rx_slave_reserved0_0
 *
 * MCS Pex Rx Slave Reserved0 0 Register
 */
union cavm_mcsx_pex_rx_slave_reserved0_0
{
    uint64_t u;
    struct cavm_mcsx_pex_rx_slave_reserved0_0_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_0_63         : 64;
#else /* Word 0 - Little Endian */
        uint64_t reserved_0_63         : 64;
#endif /* Word 0 - End */
    } s;
    struct cavm_mcsx_pex_rx_slave_reserved0_0_cn
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
typedef union cavm_mcsx_pex_rx_slave_reserved0_0 cavm_mcsx_pex_rx_slave_reserved0_0_t;

static inline uint64_t CAVM_MCSX_PEX_RX_SLAVE_RESERVED0_0(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_MCSX_PEX_RX_SLAVE_RESERVED0_0(uint64_t a)
{
    if (a<=6)
        return 0x87e0800004a0ll + 0x1000000ll * ((a) & 0x7);
    __cavm_csr_fatal("MCSX_PEX_RX_SLAVE_RESERVED0_0", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_MCSX_PEX_RX_SLAVE_RESERVED0_0(a) cavm_mcsx_pex_rx_slave_reserved0_0_t
#define bustype_CAVM_MCSX_PEX_RX_SLAVE_RESERVED0_0(a) CSR_TYPE_RSL
#define basename_CAVM_MCSX_PEX_RX_SLAVE_RESERVED0_0(a) "MCSX_PEX_RX_SLAVE_RESERVED0_0"
#define device_bar_CAVM_MCSX_PEX_RX_SLAVE_RESERVED0_0(a) 0x0 /* PF_BAR0 */
#define busnum_CAVM_MCSX_PEX_RX_SLAVE_RESERVED0_0(a) (a)
#define arguments_CAVM_MCSX_PEX_RX_SLAVE_RESERVED0_0(a) (a),-1,-1,-1

/**
 * Register (RSL) mcs#_pex_rx_slave_reserved0_1
 *
 * MCS Pex Rx Slave Reserved0 1 Register
 */
union cavm_mcsx_pex_rx_slave_reserved0_1
{
    uint64_t u;
    struct cavm_mcsx_pex_rx_slave_reserved0_1_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_0_63         : 64;
#else /* Word 0 - Little Endian */
        uint64_t reserved_0_63         : 64;
#endif /* Word 0 - End */
    } s;
    struct cavm_mcsx_pex_rx_slave_reserved0_1_cn
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
typedef union cavm_mcsx_pex_rx_slave_reserved0_1 cavm_mcsx_pex_rx_slave_reserved0_1_t;

static inline uint64_t CAVM_MCSX_PEX_RX_SLAVE_RESERVED0_1(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_MCSX_PEX_RX_SLAVE_RESERVED0_1(uint64_t a)
{
    if (a<=6)
        return 0x87e0800004a8ll + 0x1000000ll * ((a) & 0x7);
    __cavm_csr_fatal("MCSX_PEX_RX_SLAVE_RESERVED0_1", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_MCSX_PEX_RX_SLAVE_RESERVED0_1(a) cavm_mcsx_pex_rx_slave_reserved0_1_t
#define bustype_CAVM_MCSX_PEX_RX_SLAVE_RESERVED0_1(a) CSR_TYPE_RSL
#define basename_CAVM_MCSX_PEX_RX_SLAVE_RESERVED0_1(a) "MCSX_PEX_RX_SLAVE_RESERVED0_1"
#define device_bar_CAVM_MCSX_PEX_RX_SLAVE_RESERVED0_1(a) 0x0 /* PF_BAR0 */
#define busnum_CAVM_MCSX_PEX_RX_SLAVE_RESERVED0_1(a) (a)
#define arguments_CAVM_MCSX_PEX_RX_SLAVE_RESERVED0_1(a) (a),-1,-1,-1

/**
 * Register (RSL) mcs#_pex_rx_slave_reserved0_2
 *
 * MCS Pex Rx Slave Reserved0 2 Register
 */
union cavm_mcsx_pex_rx_slave_reserved0_2
{
    uint64_t u;
    struct cavm_mcsx_pex_rx_slave_reserved0_2_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_0_63         : 64;
#else /* Word 0 - Little Endian */
        uint64_t reserved_0_63         : 64;
#endif /* Word 0 - End */
    } s;
    struct cavm_mcsx_pex_rx_slave_reserved0_2_cn
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
typedef union cavm_mcsx_pex_rx_slave_reserved0_2 cavm_mcsx_pex_rx_slave_reserved0_2_t;

static inline uint64_t CAVM_MCSX_PEX_RX_SLAVE_RESERVED0_2(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_MCSX_PEX_RX_SLAVE_RESERVED0_2(uint64_t a)
{
    if (a<=6)
        return 0x87e0800004b0ll + 0x1000000ll * ((a) & 0x7);
    __cavm_csr_fatal("MCSX_PEX_RX_SLAVE_RESERVED0_2", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_MCSX_PEX_RX_SLAVE_RESERVED0_2(a) cavm_mcsx_pex_rx_slave_reserved0_2_t
#define bustype_CAVM_MCSX_PEX_RX_SLAVE_RESERVED0_2(a) CSR_TYPE_RSL
#define basename_CAVM_MCSX_PEX_RX_SLAVE_RESERVED0_2(a) "MCSX_PEX_RX_SLAVE_RESERVED0_2"
#define device_bar_CAVM_MCSX_PEX_RX_SLAVE_RESERVED0_2(a) 0x0 /* PF_BAR0 */
#define busnum_CAVM_MCSX_PEX_RX_SLAVE_RESERVED0_2(a) (a)
#define arguments_CAVM_MCSX_PEX_RX_SLAVE_RESERVED0_2(a) (a),-1,-1,-1

/**
 * Register (RSL) mcs#_pex_rx_slave_reserved0_3
 *
 * MCS Pex Rx Slave Reserved0 3 Register
 */
union cavm_mcsx_pex_rx_slave_reserved0_3
{
    uint64_t u;
    struct cavm_mcsx_pex_rx_slave_reserved0_3_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_0_63         : 64;
#else /* Word 0 - Little Endian */
        uint64_t reserved_0_63         : 64;
#endif /* Word 0 - End */
    } s;
    struct cavm_mcsx_pex_rx_slave_reserved0_3_cn
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
typedef union cavm_mcsx_pex_rx_slave_reserved0_3 cavm_mcsx_pex_rx_slave_reserved0_3_t;

static inline uint64_t CAVM_MCSX_PEX_RX_SLAVE_RESERVED0_3(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_MCSX_PEX_RX_SLAVE_RESERVED0_3(uint64_t a)
{
    if (a<=6)
        return 0x87e0800004b8ll + 0x1000000ll * ((a) & 0x7);
    __cavm_csr_fatal("MCSX_PEX_RX_SLAVE_RESERVED0_3", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_MCSX_PEX_RX_SLAVE_RESERVED0_3(a) cavm_mcsx_pex_rx_slave_reserved0_3_t
#define bustype_CAVM_MCSX_PEX_RX_SLAVE_RESERVED0_3(a) CSR_TYPE_RSL
#define basename_CAVM_MCSX_PEX_RX_SLAVE_RESERVED0_3(a) "MCSX_PEX_RX_SLAVE_RESERVED0_3"
#define device_bar_CAVM_MCSX_PEX_RX_SLAVE_RESERVED0_3(a) 0x0 /* PF_BAR0 */
#define busnum_CAVM_MCSX_PEX_RX_SLAVE_RESERVED0_3(a) (a)
#define arguments_CAVM_MCSX_PEX_RX_SLAVE_RESERVED0_3(a) (a),-1,-1,-1

/**
 * Register (RSL) mcs#_pex_rx_slave_reserved1_0
 *
 * MCS Pex Rx Slave Reserved1 0 Register
 */
union cavm_mcsx_pex_rx_slave_reserved1_0
{
    uint64_t u;
    struct cavm_mcsx_pex_rx_slave_reserved1_0_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_0_63         : 64;
#else /* Word 0 - Little Endian */
        uint64_t reserved_0_63         : 64;
#endif /* Word 0 - End */
    } s;
    struct cavm_mcsx_pex_rx_slave_reserved1_0_cn
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
typedef union cavm_mcsx_pex_rx_slave_reserved1_0 cavm_mcsx_pex_rx_slave_reserved1_0_t;

static inline uint64_t CAVM_MCSX_PEX_RX_SLAVE_RESERVED1_0(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_MCSX_PEX_RX_SLAVE_RESERVED1_0(uint64_t a)
{
    if (a<=6)
        return 0x87e0800006f0ll + 0x1000000ll * ((a) & 0x7);
    __cavm_csr_fatal("MCSX_PEX_RX_SLAVE_RESERVED1_0", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_MCSX_PEX_RX_SLAVE_RESERVED1_0(a) cavm_mcsx_pex_rx_slave_reserved1_0_t
#define bustype_CAVM_MCSX_PEX_RX_SLAVE_RESERVED1_0(a) CSR_TYPE_RSL
#define basename_CAVM_MCSX_PEX_RX_SLAVE_RESERVED1_0(a) "MCSX_PEX_RX_SLAVE_RESERVED1_0"
#define device_bar_CAVM_MCSX_PEX_RX_SLAVE_RESERVED1_0(a) 0x0 /* PF_BAR0 */
#define busnum_CAVM_MCSX_PEX_RX_SLAVE_RESERVED1_0(a) (a)
#define arguments_CAVM_MCSX_PEX_RX_SLAVE_RESERVED1_0(a) (a),-1,-1,-1

/**
 * Register (RSL) mcs#_pex_rx_slave_reserved1_1
 *
 * MCS Pex Rx Slave Reserved1 1 Register
 */
union cavm_mcsx_pex_rx_slave_reserved1_1
{
    uint64_t u;
    struct cavm_mcsx_pex_rx_slave_reserved1_1_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_0_63         : 64;
#else /* Word 0 - Little Endian */
        uint64_t reserved_0_63         : 64;
#endif /* Word 0 - End */
    } s;
    struct cavm_mcsx_pex_rx_slave_reserved1_1_cn
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
typedef union cavm_mcsx_pex_rx_slave_reserved1_1 cavm_mcsx_pex_rx_slave_reserved1_1_t;

static inline uint64_t CAVM_MCSX_PEX_RX_SLAVE_RESERVED1_1(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_MCSX_PEX_RX_SLAVE_RESERVED1_1(uint64_t a)
{
    if (a<=6)
        return 0x87e0800006f8ll + 0x1000000ll * ((a) & 0x7);
    __cavm_csr_fatal("MCSX_PEX_RX_SLAVE_RESERVED1_1", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_MCSX_PEX_RX_SLAVE_RESERVED1_1(a) cavm_mcsx_pex_rx_slave_reserved1_1_t
#define bustype_CAVM_MCSX_PEX_RX_SLAVE_RESERVED1_1(a) CSR_TYPE_RSL
#define basename_CAVM_MCSX_PEX_RX_SLAVE_RESERVED1_1(a) "MCSX_PEX_RX_SLAVE_RESERVED1_1"
#define device_bar_CAVM_MCSX_PEX_RX_SLAVE_RESERVED1_1(a) 0x0 /* PF_BAR0 */
#define busnum_CAVM_MCSX_PEX_RX_SLAVE_RESERVED1_1(a) (a)
#define arguments_CAVM_MCSX_PEX_RX_SLAVE_RESERVED1_1(a) (a),-1,-1,-1

/**
 * Register (RSL) mcs#_pex_rx_slave_reserved1_2
 *
 * MCS Pex Rx Slave Reserved1 2 Register
 */
union cavm_mcsx_pex_rx_slave_reserved1_2
{
    uint64_t u;
    struct cavm_mcsx_pex_rx_slave_reserved1_2_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_0_63         : 64;
#else /* Word 0 - Little Endian */
        uint64_t reserved_0_63         : 64;
#endif /* Word 0 - End */
    } s;
    struct cavm_mcsx_pex_rx_slave_reserved1_2_cn
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
typedef union cavm_mcsx_pex_rx_slave_reserved1_2 cavm_mcsx_pex_rx_slave_reserved1_2_t;

static inline uint64_t CAVM_MCSX_PEX_RX_SLAVE_RESERVED1_2(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_MCSX_PEX_RX_SLAVE_RESERVED1_2(uint64_t a)
{
    if (a<=6)
        return 0x87e080000700ll + 0x1000000ll * ((a) & 0x7);
    __cavm_csr_fatal("MCSX_PEX_RX_SLAVE_RESERVED1_2", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_MCSX_PEX_RX_SLAVE_RESERVED1_2(a) cavm_mcsx_pex_rx_slave_reserved1_2_t
#define bustype_CAVM_MCSX_PEX_RX_SLAVE_RESERVED1_2(a) CSR_TYPE_RSL
#define basename_CAVM_MCSX_PEX_RX_SLAVE_RESERVED1_2(a) "MCSX_PEX_RX_SLAVE_RESERVED1_2"
#define device_bar_CAVM_MCSX_PEX_RX_SLAVE_RESERVED1_2(a) 0x0 /* PF_BAR0 */
#define busnum_CAVM_MCSX_PEX_RX_SLAVE_RESERVED1_2(a) (a)
#define arguments_CAVM_MCSX_PEX_RX_SLAVE_RESERVED1_2(a) (a),-1,-1,-1

/**
 * Register (RSL) mcs#_pex_rx_slave_reserved1_3
 *
 * MCS Pex Rx Slave Reserved1 3 Register
 */
union cavm_mcsx_pex_rx_slave_reserved1_3
{
    uint64_t u;
    struct cavm_mcsx_pex_rx_slave_reserved1_3_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_0_63         : 64;
#else /* Word 0 - Little Endian */
        uint64_t reserved_0_63         : 64;
#endif /* Word 0 - End */
    } s;
    struct cavm_mcsx_pex_rx_slave_reserved1_3_cn
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
typedef union cavm_mcsx_pex_rx_slave_reserved1_3 cavm_mcsx_pex_rx_slave_reserved1_3_t;

static inline uint64_t CAVM_MCSX_PEX_RX_SLAVE_RESERVED1_3(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_MCSX_PEX_RX_SLAVE_RESERVED1_3(uint64_t a)
{
    if (a<=6)
        return 0x87e080000708ll + 0x1000000ll * ((a) & 0x7);
    __cavm_csr_fatal("MCSX_PEX_RX_SLAVE_RESERVED1_3", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_MCSX_PEX_RX_SLAVE_RESERVED1_3(a) cavm_mcsx_pex_rx_slave_reserved1_3_t
#define bustype_CAVM_MCSX_PEX_RX_SLAVE_RESERVED1_3(a) CSR_TYPE_RSL
#define basename_CAVM_MCSX_PEX_RX_SLAVE_RESERVED1_3(a) "MCSX_PEX_RX_SLAVE_RESERVED1_3"
#define device_bar_CAVM_MCSX_PEX_RX_SLAVE_RESERVED1_3(a) 0x0 /* PF_BAR0 */
#define busnum_CAVM_MCSX_PEX_RX_SLAVE_RESERVED1_3(a) (a)
#define arguments_CAVM_MCSX_PEX_RX_SLAVE_RESERVED1_3(a) (a),-1,-1,-1

/**
 * Register (RSL) mcs#_pex_rx_slave_rule_combo_et#
 *
 * MCS Pex Rx Slave Rule Combo Et Register
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
    if ((a<=6) && (b<=3))
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
    if ((a<=6) && (b<=3))
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
    if ((a<=6) && (b<=3))
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
    if ((a<=6) && (b<=7))
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
    if ((a<=6) && (b<=3))
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
    if ((a<=6) && (b<=3))
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
    if (a<=6)
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
    if ((a<=6) && (b<=7))
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
    if (a<=6)
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
 */
union cavm_mcsx_pex_rx_slave_sectag_cfg
{
    uint64_t u;
    struct cavm_mcsx_pex_rx_slave_sectag_cfg_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_16_63        : 48;
        uint64_t sectag_etype_0        : 16; /**< [ 15:  0](R/W) SecTAG EthType */
#else /* Word 0 - Little Endian */
        uint64_t sectag_etype_0        : 16; /**< [ 15:  0](R/W) SecTAG EthType */
        uint64_t reserved_16_63        : 48;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_mcsx_pex_rx_slave_sectag_cfg_s cn; */
};
typedef union cavm_mcsx_pex_rx_slave_sectag_cfg cavm_mcsx_pex_rx_slave_sectag_cfg_t;

static inline uint64_t CAVM_MCSX_PEX_RX_SLAVE_SECTAG_CFG(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_MCSX_PEX_RX_SLAVE_SECTAG_CFG(uint64_t a)
{
    if (a<=6)
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
        uint64_t cstm_bonus            : 1;  /**< [ 21: 21](R/W) When set, extract the two bytes immediately following the tag label.  If this
                                                                 bit is clear for all instances, PEX will extract 2B after the first non-matching
                                                                 etype as bonus data. */
        uint64_t cstm_vlan             : 1;  /**< [ 20: 20](R/W) Custom tag is VLAN tag */
        uint64_t cstm_size             : 4;  /**< [ 19: 16](R/W) Size of custom tag, including tag label. Valid values are 2,4,6,8,10,12,14,16.
                                                                 VLAN tag size must always be 4. For size 16, set field to zero. */
        uint64_t cstm_etype            : 16; /**< [ 15:  0](R/W) EthType/TPID; typical TPID for C-Tag is 0x8100, and S-Tag is 0x88a8. */
#else /* Word 0 - Little Endian */
        uint64_t cstm_etype            : 16; /**< [ 15:  0](R/W) EthType/TPID; typical TPID for C-Tag is 0x8100, and S-Tag is 0x88a8. */
        uint64_t cstm_size             : 4;  /**< [ 19: 16](R/W) Size of custom tag, including tag label. Valid values are 2,4,6,8,10,12,14,16.
                                                                 VLAN tag size must always be 4. For size 16, set field to zero. */
        uint64_t cstm_vlan             : 1;  /**< [ 20: 20](R/W) Custom tag is VLAN tag */
        uint64_t cstm_bonus            : 1;  /**< [ 21: 21](R/W) When set, extract the two bytes immediately following the tag label.  If this
                                                                 bit is clear for all instances, PEX will extract 2B after the first non-matching
                                                                 etype as bonus data. */
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
    if ((a<=6) && (b<=7))
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
    if ((a<=6) && (b<=3))
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
    if (a<=6)
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
    if (a<=6)
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
 */
union cavm_mcsx_pex_tx_slave_etype_enable
{
    uint64_t u;
    struct cavm_mcsx_pex_tx_slave_etype_enable_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_15_63        : 49;
        uint64_t txmcs_etype_en        : 1;  /**< [ 14: 14](R/W) Enable EthType stored in the field tx_mcs_header in the opt_header_cfg_0
                                                                 register.  Set to 1 to enable the EthTypes, or 0 to disable. */
        uint64_t rxmcs_etype_en        : 1;  /**< [ 13: 13](R/W) Enable EthType stored in the field rx_mcs_header in the opt_header_cfg_0
                                                                 register.  Set to 1 to enable the EthType, or 0 to disable. */
        uint64_t st_etype_en           : 1;  /**< [ 12: 12](R/W) Enable EthType stored in the sectag_cfg registers.  Set to 1 to enable the
                                                                 EthType, or 0 to disable. */
        uint64_t mpls_etype_en         : 4;  /**< [ 11:  8](R/W) Enable EthTypes stored in the 4 mpls_cfg registers, where bit 8-11 enable
                                                                 registers 0-3 respectively.  Set to 1 to enable the EthTypes, or 0 to disable. */
        uint64_t cstm_etype_en         : 8;  /**< [  7:  0](R/W) Enable EthTypes/TPID stored in the 8 custom_tag (including VLAN tags) registers,
                                                                 where bit 0-7 enable registers 0-7 respectively.  Set to 1 to enable the
                                                                 EthTypes, or 0 to disable. */
#else /* Word 0 - Little Endian */
        uint64_t cstm_etype_en         : 8;  /**< [  7:  0](R/W) Enable EthTypes/TPID stored in the 8 custom_tag (including VLAN tags) registers,
                                                                 where bit 0-7 enable registers 0-7 respectively.  Set to 1 to enable the
                                                                 EthTypes, or 0 to disable. */
        uint64_t mpls_etype_en         : 4;  /**< [ 11:  8](R/W) Enable EthTypes stored in the 4 mpls_cfg registers, where bit 8-11 enable
                                                                 registers 0-3 respectively.  Set to 1 to enable the EthTypes, or 0 to disable. */
        uint64_t st_etype_en           : 1;  /**< [ 12: 12](R/W) Enable EthType stored in the sectag_cfg registers.  Set to 1 to enable the
                                                                 EthType, or 0 to disable. */
        uint64_t rxmcs_etype_en        : 1;  /**< [ 13: 13](R/W) Enable EthType stored in the field rx_mcs_header in the opt_header_cfg_0
                                                                 register.  Set to 1 to enable the EthType, or 0 to disable. */
        uint64_t txmcs_etype_en        : 1;  /**< [ 14: 14](R/W) Enable EthType stored in the field tx_mcs_header in the opt_header_cfg_0
                                                                 register.  Set to 1 to enable the EthTypes, or 0 to disable. */
        uint64_t reserved_15_63        : 49;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_mcsx_pex_tx_slave_etype_enable_s cn; */
};
typedef union cavm_mcsx_pex_tx_slave_etype_enable cavm_mcsx_pex_tx_slave_etype_enable_t;

static inline uint64_t CAVM_MCSX_PEX_TX_SLAVE_ETYPE_ENABLE(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_MCSX_PEX_TX_SLAVE_ETYPE_ENABLE(uint64_t a)
{
    if (a<=6)
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
 * Register (RSL) mcs#_pex_tx_slave_mpls_cfg#
 *
 * MCS Pex Tx Slave Mpls Cfg Register
 */
union cavm_mcsx_pex_tx_slave_mpls_cfgx
{
    uint64_t u;
    struct cavm_mcsx_pex_tx_slave_mpls_cfgx_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_16_63        : 48;
        uint64_t mpls_etype            : 16; /**< [ 15:  0](R/W) MPLS stack EthType */
#else /* Word 0 - Little Endian */
        uint64_t mpls_etype            : 16; /**< [ 15:  0](R/W) MPLS stack EthType */
        uint64_t reserved_16_63        : 48;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_mcsx_pex_tx_slave_mpls_cfgx_s cn; */
};
typedef union cavm_mcsx_pex_tx_slave_mpls_cfgx cavm_mcsx_pex_tx_slave_mpls_cfgx_t;

static inline uint64_t CAVM_MCSX_PEX_TX_SLAVE_MPLS_CFGX(uint64_t a, uint64_t b) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_MCSX_PEX_TX_SLAVE_MPLS_CFGX(uint64_t a, uint64_t b)
{
    if ((a<=6) && (b<=3))
        return 0x87e0800007a8ll + 0x1000000ll * ((a) & 0x7) + 8ll * ((b) & 0x3);
    __cavm_csr_fatal("MCSX_PEX_TX_SLAVE_MPLS_CFGX", 2, a, b, 0, 0, 0, 0);
}

#define typedef_CAVM_MCSX_PEX_TX_SLAVE_MPLS_CFGX(a,b) cavm_mcsx_pex_tx_slave_mpls_cfgx_t
#define bustype_CAVM_MCSX_PEX_TX_SLAVE_MPLS_CFGX(a,b) CSR_TYPE_RSL
#define basename_CAVM_MCSX_PEX_TX_SLAVE_MPLS_CFGX(a,b) "MCSX_PEX_TX_SLAVE_MPLS_CFGX"
#define device_bar_CAVM_MCSX_PEX_TX_SLAVE_MPLS_CFGX(a,b) 0x0 /* PF_BAR0 */
#define busnum_CAVM_MCSX_PEX_TX_SLAVE_MPLS_CFGX(a,b) (a)
#define arguments_CAVM_MCSX_PEX_TX_SLAVE_MPLS_CFGX(a,b) (a),(b),-1,-1

/**
 * Register (RSL) mcs#_pex_tx_slave_opt_header_cfg_0
 *
 * MCS Pex Tx Slave Opt Header Cfg 0 Register
 */
union cavm_mcsx_pex_tx_slave_opt_header_cfg_0
{
    uint64_t u;
    struct cavm_mcsx_pex_tx_slave_opt_header_cfg_0_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_32_63        : 32;
        uint64_t tx_mcs_header         : 16; /**< [ 31: 16](R/W) EthType for optional TX MCS header */
        uint64_t rx_mcs_header         : 16; /**< [ 15:  0](R/W) EthType for optional RX MCS header */
#else /* Word 0 - Little Endian */
        uint64_t rx_mcs_header         : 16; /**< [ 15:  0](R/W) EthType for optional RX MCS header */
        uint64_t tx_mcs_header         : 16; /**< [ 31: 16](R/W) EthType for optional TX MCS header */
        uint64_t reserved_32_63        : 32;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_mcsx_pex_tx_slave_opt_header_cfg_0_s cn; */
};
typedef union cavm_mcsx_pex_tx_slave_opt_header_cfg_0 cavm_mcsx_pex_tx_slave_opt_header_cfg_0_t;

static inline uint64_t CAVM_MCSX_PEX_TX_SLAVE_OPT_HEADER_CFG_0(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_MCSX_PEX_TX_SLAVE_OPT_HEADER_CFG_0(uint64_t a)
{
    if (a<=6)
        return 0x87e0800007d0ll + 0x1000000ll * ((a) & 0x7);
    __cavm_csr_fatal("MCSX_PEX_TX_SLAVE_OPT_HEADER_CFG_0", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_MCSX_PEX_TX_SLAVE_OPT_HEADER_CFG_0(a) cavm_mcsx_pex_tx_slave_opt_header_cfg_0_t
#define bustype_CAVM_MCSX_PEX_TX_SLAVE_OPT_HEADER_CFG_0(a) CSR_TYPE_RSL
#define basename_CAVM_MCSX_PEX_TX_SLAVE_OPT_HEADER_CFG_0(a) "MCSX_PEX_TX_SLAVE_OPT_HEADER_CFG_0"
#define device_bar_CAVM_MCSX_PEX_TX_SLAVE_OPT_HEADER_CFG_0(a) 0x0 /* PF_BAR0 */
#define busnum_CAVM_MCSX_PEX_TX_SLAVE_OPT_HEADER_CFG_0(a) (a)
#define arguments_CAVM_MCSX_PEX_TX_SLAVE_OPT_HEADER_CFG_0(a) (a),-1,-1,-1

/**
 * Register (RSL) mcs#_pex_tx_slave_pex_configuration
 *
 * MCS Pex Tx Slave Pex Configuration Register
 */
union cavm_mcsx_pex_tx_slave_pex_configuration
{
    uint64_t u;
    struct cavm_mcsx_pex_tx_slave_pex_configuration_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_6_63         : 58;
        uint64_t non_dix_err           : 1;  /**< [  5:  5](R/W) Set to 1 to trigger a parse error when non-DIX frames are received */
        uint64_t vlan_after_custom     : 1;  /**< [  4:  4](R/W) Extract packets with VLAN tags located after custom tags */
        uint64_t custom_header         : 4;  /**< [  3:  0](R/W) Per-port custom header enable. Port number 'i' packets are expected to have 8B
                                                                 custom header before DA/SA if bit 'i' is set. */
#else /* Word 0 - Little Endian */
        uint64_t custom_header         : 4;  /**< [  3:  0](R/W) Per-port custom header enable. Port number 'i' packets are expected to have 8B
                                                                 custom header before DA/SA if bit 'i' is set. */
        uint64_t vlan_after_custom     : 1;  /**< [  4:  4](R/W) Extract packets with VLAN tags located after custom tags */
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
    if (a<=6)
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
 * Register (RSL) mcs#_pex_tx_slave_reserved0_0
 *
 * MCS Pex Tx Slave Reserved0 0 Register
 */
union cavm_mcsx_pex_tx_slave_reserved0_0
{
    uint64_t u;
    struct cavm_mcsx_pex_tx_slave_reserved0_0_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_0_63         : 64;
#else /* Word 0 - Little Endian */
        uint64_t reserved_0_63         : 64;
#endif /* Word 0 - End */
    } s;
    struct cavm_mcsx_pex_tx_slave_reserved0_0_cn
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
typedef union cavm_mcsx_pex_tx_slave_reserved0_0 cavm_mcsx_pex_tx_slave_reserved0_0_t;

static inline uint64_t CAVM_MCSX_PEX_TX_SLAVE_RESERVED0_0(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_MCSX_PEX_TX_SLAVE_RESERVED0_0(uint64_t a)
{
    if (a<=6)
        return 0x87e080000720ll + 0x1000000ll * ((a) & 0x7);
    __cavm_csr_fatal("MCSX_PEX_TX_SLAVE_RESERVED0_0", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_MCSX_PEX_TX_SLAVE_RESERVED0_0(a) cavm_mcsx_pex_tx_slave_reserved0_0_t
#define bustype_CAVM_MCSX_PEX_TX_SLAVE_RESERVED0_0(a) CSR_TYPE_RSL
#define basename_CAVM_MCSX_PEX_TX_SLAVE_RESERVED0_0(a) "MCSX_PEX_TX_SLAVE_RESERVED0_0"
#define device_bar_CAVM_MCSX_PEX_TX_SLAVE_RESERVED0_0(a) 0x0 /* PF_BAR0 */
#define busnum_CAVM_MCSX_PEX_TX_SLAVE_RESERVED0_0(a) (a)
#define arguments_CAVM_MCSX_PEX_TX_SLAVE_RESERVED0_0(a) (a),-1,-1,-1

/**
 * Register (RSL) mcs#_pex_tx_slave_reserved0_1
 *
 * MCS Pex Tx Slave Reserved0 1 Register
 */
union cavm_mcsx_pex_tx_slave_reserved0_1
{
    uint64_t u;
    struct cavm_mcsx_pex_tx_slave_reserved0_1_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_0_63         : 64;
#else /* Word 0 - Little Endian */
        uint64_t reserved_0_63         : 64;
#endif /* Word 0 - End */
    } s;
    struct cavm_mcsx_pex_tx_slave_reserved0_1_cn
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
typedef union cavm_mcsx_pex_tx_slave_reserved0_1 cavm_mcsx_pex_tx_slave_reserved0_1_t;

static inline uint64_t CAVM_MCSX_PEX_TX_SLAVE_RESERVED0_1(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_MCSX_PEX_TX_SLAVE_RESERVED0_1(uint64_t a)
{
    if (a<=6)
        return 0x87e080000728ll + 0x1000000ll * ((a) & 0x7);
    __cavm_csr_fatal("MCSX_PEX_TX_SLAVE_RESERVED0_1", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_MCSX_PEX_TX_SLAVE_RESERVED0_1(a) cavm_mcsx_pex_tx_slave_reserved0_1_t
#define bustype_CAVM_MCSX_PEX_TX_SLAVE_RESERVED0_1(a) CSR_TYPE_RSL
#define basename_CAVM_MCSX_PEX_TX_SLAVE_RESERVED0_1(a) "MCSX_PEX_TX_SLAVE_RESERVED0_1"
#define device_bar_CAVM_MCSX_PEX_TX_SLAVE_RESERVED0_1(a) 0x0 /* PF_BAR0 */
#define busnum_CAVM_MCSX_PEX_TX_SLAVE_RESERVED0_1(a) (a)
#define arguments_CAVM_MCSX_PEX_TX_SLAVE_RESERVED0_1(a) (a),-1,-1,-1

/**
 * Register (RSL) mcs#_pex_tx_slave_reserved0_2
 *
 * MCS Pex Tx Slave Reserved0 2 Register
 */
union cavm_mcsx_pex_tx_slave_reserved0_2
{
    uint64_t u;
    struct cavm_mcsx_pex_tx_slave_reserved0_2_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_0_63         : 64;
#else /* Word 0 - Little Endian */
        uint64_t reserved_0_63         : 64;
#endif /* Word 0 - End */
    } s;
    struct cavm_mcsx_pex_tx_slave_reserved0_2_cn
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
typedef union cavm_mcsx_pex_tx_slave_reserved0_2 cavm_mcsx_pex_tx_slave_reserved0_2_t;

static inline uint64_t CAVM_MCSX_PEX_TX_SLAVE_RESERVED0_2(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_MCSX_PEX_TX_SLAVE_RESERVED0_2(uint64_t a)
{
    if (a<=6)
        return 0x87e080000730ll + 0x1000000ll * ((a) & 0x7);
    __cavm_csr_fatal("MCSX_PEX_TX_SLAVE_RESERVED0_2", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_MCSX_PEX_TX_SLAVE_RESERVED0_2(a) cavm_mcsx_pex_tx_slave_reserved0_2_t
#define bustype_CAVM_MCSX_PEX_TX_SLAVE_RESERVED0_2(a) CSR_TYPE_RSL
#define basename_CAVM_MCSX_PEX_TX_SLAVE_RESERVED0_2(a) "MCSX_PEX_TX_SLAVE_RESERVED0_2"
#define device_bar_CAVM_MCSX_PEX_TX_SLAVE_RESERVED0_2(a) 0x0 /* PF_BAR0 */
#define busnum_CAVM_MCSX_PEX_TX_SLAVE_RESERVED0_2(a) (a)
#define arguments_CAVM_MCSX_PEX_TX_SLAVE_RESERVED0_2(a) (a),-1,-1,-1

/**
 * Register (RSL) mcs#_pex_tx_slave_reserved0_3
 *
 * MCS Pex Tx Slave Reserved0 3 Register
 */
union cavm_mcsx_pex_tx_slave_reserved0_3
{
    uint64_t u;
    struct cavm_mcsx_pex_tx_slave_reserved0_3_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_0_63         : 64;
#else /* Word 0 - Little Endian */
        uint64_t reserved_0_63         : 64;
#endif /* Word 0 - End */
    } s;
    struct cavm_mcsx_pex_tx_slave_reserved0_3_cn
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
typedef union cavm_mcsx_pex_tx_slave_reserved0_3 cavm_mcsx_pex_tx_slave_reserved0_3_t;

static inline uint64_t CAVM_MCSX_PEX_TX_SLAVE_RESERVED0_3(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_MCSX_PEX_TX_SLAVE_RESERVED0_3(uint64_t a)
{
    if (a<=6)
        return 0x87e080000738ll + 0x1000000ll * ((a) & 0x7);
    __cavm_csr_fatal("MCSX_PEX_TX_SLAVE_RESERVED0_3", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_MCSX_PEX_TX_SLAVE_RESERVED0_3(a) cavm_mcsx_pex_tx_slave_reserved0_3_t
#define bustype_CAVM_MCSX_PEX_TX_SLAVE_RESERVED0_3(a) CSR_TYPE_RSL
#define basename_CAVM_MCSX_PEX_TX_SLAVE_RESERVED0_3(a) "MCSX_PEX_TX_SLAVE_RESERVED0_3"
#define device_bar_CAVM_MCSX_PEX_TX_SLAVE_RESERVED0_3(a) 0x0 /* PF_BAR0 */
#define busnum_CAVM_MCSX_PEX_TX_SLAVE_RESERVED0_3(a) (a)
#define arguments_CAVM_MCSX_PEX_TX_SLAVE_RESERVED0_3(a) (a),-1,-1,-1

/**
 * Register (RSL) mcs#_pex_tx_slave_reserved1_0
 *
 * MCS Pex Tx Slave Reserved1 0 Register
 */
union cavm_mcsx_pex_tx_slave_reserved1_0
{
    uint64_t u;
    struct cavm_mcsx_pex_tx_slave_reserved1_0_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_0_63         : 64;
#else /* Word 0 - Little Endian */
        uint64_t reserved_0_63         : 64;
#endif /* Word 0 - End */
    } s;
    struct cavm_mcsx_pex_tx_slave_reserved1_0_cn
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
typedef union cavm_mcsx_pex_tx_slave_reserved1_0 cavm_mcsx_pex_tx_slave_reserved1_0_t;

static inline uint64_t CAVM_MCSX_PEX_TX_SLAVE_RESERVED1_0(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_MCSX_PEX_TX_SLAVE_RESERVED1_0(uint64_t a)
{
    if (a<=6)
        return 0x87e080000970ll + 0x1000000ll * ((a) & 0x7);
    __cavm_csr_fatal("MCSX_PEX_TX_SLAVE_RESERVED1_0", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_MCSX_PEX_TX_SLAVE_RESERVED1_0(a) cavm_mcsx_pex_tx_slave_reserved1_0_t
#define bustype_CAVM_MCSX_PEX_TX_SLAVE_RESERVED1_0(a) CSR_TYPE_RSL
#define basename_CAVM_MCSX_PEX_TX_SLAVE_RESERVED1_0(a) "MCSX_PEX_TX_SLAVE_RESERVED1_0"
#define device_bar_CAVM_MCSX_PEX_TX_SLAVE_RESERVED1_0(a) 0x0 /* PF_BAR0 */
#define busnum_CAVM_MCSX_PEX_TX_SLAVE_RESERVED1_0(a) (a)
#define arguments_CAVM_MCSX_PEX_TX_SLAVE_RESERVED1_0(a) (a),-1,-1,-1

/**
 * Register (RSL) mcs#_pex_tx_slave_reserved1_1
 *
 * MCS Pex Tx Slave Reserved1 1 Register
 */
union cavm_mcsx_pex_tx_slave_reserved1_1
{
    uint64_t u;
    struct cavm_mcsx_pex_tx_slave_reserved1_1_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_0_63         : 64;
#else /* Word 0 - Little Endian */
        uint64_t reserved_0_63         : 64;
#endif /* Word 0 - End */
    } s;
    struct cavm_mcsx_pex_tx_slave_reserved1_1_cn
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
typedef union cavm_mcsx_pex_tx_slave_reserved1_1 cavm_mcsx_pex_tx_slave_reserved1_1_t;

static inline uint64_t CAVM_MCSX_PEX_TX_SLAVE_RESERVED1_1(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_MCSX_PEX_TX_SLAVE_RESERVED1_1(uint64_t a)
{
    if (a<=6)
        return 0x87e080000978ll + 0x1000000ll * ((a) & 0x7);
    __cavm_csr_fatal("MCSX_PEX_TX_SLAVE_RESERVED1_1", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_MCSX_PEX_TX_SLAVE_RESERVED1_1(a) cavm_mcsx_pex_tx_slave_reserved1_1_t
#define bustype_CAVM_MCSX_PEX_TX_SLAVE_RESERVED1_1(a) CSR_TYPE_RSL
#define basename_CAVM_MCSX_PEX_TX_SLAVE_RESERVED1_1(a) "MCSX_PEX_TX_SLAVE_RESERVED1_1"
#define device_bar_CAVM_MCSX_PEX_TX_SLAVE_RESERVED1_1(a) 0x0 /* PF_BAR0 */
#define busnum_CAVM_MCSX_PEX_TX_SLAVE_RESERVED1_1(a) (a)
#define arguments_CAVM_MCSX_PEX_TX_SLAVE_RESERVED1_1(a) (a),-1,-1,-1

/**
 * Register (RSL) mcs#_pex_tx_slave_reserved1_2
 *
 * MCS Pex Tx Slave Reserved1 2 Register
 */
union cavm_mcsx_pex_tx_slave_reserved1_2
{
    uint64_t u;
    struct cavm_mcsx_pex_tx_slave_reserved1_2_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_0_63         : 64;
#else /* Word 0 - Little Endian */
        uint64_t reserved_0_63         : 64;
#endif /* Word 0 - End */
    } s;
    struct cavm_mcsx_pex_tx_slave_reserved1_2_cn
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
typedef union cavm_mcsx_pex_tx_slave_reserved1_2 cavm_mcsx_pex_tx_slave_reserved1_2_t;

static inline uint64_t CAVM_MCSX_PEX_TX_SLAVE_RESERVED1_2(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_MCSX_PEX_TX_SLAVE_RESERVED1_2(uint64_t a)
{
    if (a<=6)
        return 0x87e080000980ll + 0x1000000ll * ((a) & 0x7);
    __cavm_csr_fatal("MCSX_PEX_TX_SLAVE_RESERVED1_2", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_MCSX_PEX_TX_SLAVE_RESERVED1_2(a) cavm_mcsx_pex_tx_slave_reserved1_2_t
#define bustype_CAVM_MCSX_PEX_TX_SLAVE_RESERVED1_2(a) CSR_TYPE_RSL
#define basename_CAVM_MCSX_PEX_TX_SLAVE_RESERVED1_2(a) "MCSX_PEX_TX_SLAVE_RESERVED1_2"
#define device_bar_CAVM_MCSX_PEX_TX_SLAVE_RESERVED1_2(a) 0x0 /* PF_BAR0 */
#define busnum_CAVM_MCSX_PEX_TX_SLAVE_RESERVED1_2(a) (a)
#define arguments_CAVM_MCSX_PEX_TX_SLAVE_RESERVED1_2(a) (a),-1,-1,-1

/**
 * Register (RSL) mcs#_pex_tx_slave_reserved1_3
 *
 * MCS Pex Tx Slave Reserved1 3 Register
 */
union cavm_mcsx_pex_tx_slave_reserved1_3
{
    uint64_t u;
    struct cavm_mcsx_pex_tx_slave_reserved1_3_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_0_63         : 64;
#else /* Word 0 - Little Endian */
        uint64_t reserved_0_63         : 64;
#endif /* Word 0 - End */
    } s;
    struct cavm_mcsx_pex_tx_slave_reserved1_3_cn
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
typedef union cavm_mcsx_pex_tx_slave_reserved1_3 cavm_mcsx_pex_tx_slave_reserved1_3_t;

static inline uint64_t CAVM_MCSX_PEX_TX_SLAVE_RESERVED1_3(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_MCSX_PEX_TX_SLAVE_RESERVED1_3(uint64_t a)
{
    if (a<=6)
        return 0x87e080000988ll + 0x1000000ll * ((a) & 0x7);
    __cavm_csr_fatal("MCSX_PEX_TX_SLAVE_RESERVED1_3", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_MCSX_PEX_TX_SLAVE_RESERVED1_3(a) cavm_mcsx_pex_tx_slave_reserved1_3_t
#define bustype_CAVM_MCSX_PEX_TX_SLAVE_RESERVED1_3(a) CSR_TYPE_RSL
#define basename_CAVM_MCSX_PEX_TX_SLAVE_RESERVED1_3(a) "MCSX_PEX_TX_SLAVE_RESERVED1_3"
#define device_bar_CAVM_MCSX_PEX_TX_SLAVE_RESERVED1_3(a) 0x0 /* PF_BAR0 */
#define busnum_CAVM_MCSX_PEX_TX_SLAVE_RESERVED1_3(a) (a)
#define arguments_CAVM_MCSX_PEX_TX_SLAVE_RESERVED1_3(a) (a),-1,-1,-1

/**
 * Register (RSL) mcs#_pex_tx_slave_rule_combo_et#
 *
 * MCS Pex Tx Slave Rule Combo Et Register
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
    if ((a<=6) && (b<=3))
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
    if ((a<=6) && (b<=3))
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
    if ((a<=6) && (b<=3))
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
    if ((a<=6) && (b<=7))
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
    if ((a<=6) && (b<=3))
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
    if ((a<=6) && (b<=3))
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
    if (a<=6)
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
    if ((a<=6) && (b<=7))
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
    if (a<=6)
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
 */
union cavm_mcsx_pex_tx_slave_sectag_cfg
{
    uint64_t u;
    struct cavm_mcsx_pex_tx_slave_sectag_cfg_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_16_63        : 48;
        uint64_t sectag_etype_0        : 16; /**< [ 15:  0](R/W) SecTAG EthType */
#else /* Word 0 - Little Endian */
        uint64_t sectag_etype_0        : 16; /**< [ 15:  0](R/W) SecTAG EthType */
        uint64_t reserved_16_63        : 48;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_mcsx_pex_tx_slave_sectag_cfg_s cn; */
};
typedef union cavm_mcsx_pex_tx_slave_sectag_cfg cavm_mcsx_pex_tx_slave_sectag_cfg_t;

static inline uint64_t CAVM_MCSX_PEX_TX_SLAVE_SECTAG_CFG(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_MCSX_PEX_TX_SLAVE_SECTAG_CFG(uint64_t a)
{
    if (a<=6)
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
 * MCS sclk domain ACTIVE PC Register
 * Counts the conditional clocks under sclk domain for power management.
 */
union cavm_mcsx_sclk_active_pc
{
    uint64_t u;
    struct cavm_mcsx_sclk_active_pc_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t cnt                   : 64; /**< [ 63:  0](R/W/H) Count of conditional clock cycles since reset for clk domain. */
#else /* Word 0 - Little Endian */
        uint64_t cnt                   : 64; /**< [ 63:  0](R/W/H) Count of conditional clock cycles since reset for clk domain. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_mcsx_sclk_active_pc_s cn; */
};
typedef union cavm_mcsx_sclk_active_pc cavm_mcsx_sclk_active_pc_t;

static inline uint64_t CAVM_MCSX_SCLK_ACTIVE_PC(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_MCSX_SCLK_ACTIVE_PC(uint64_t a)
{
    if (a<=6)
        return 0x87e080020178ll + 0x1000000ll * ((a) & 0x7);
    __cavm_csr_fatal("MCSX_SCLK_ACTIVE_PC", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_MCSX_SCLK_ACTIVE_PC(a) cavm_mcsx_sclk_active_pc_t
#define bustype_CAVM_MCSX_SCLK_ACTIVE_PC(a) CSR_TYPE_RSL
#define basename_CAVM_MCSX_SCLK_ACTIVE_PC(a) "MCSX_SCLK_ACTIVE_PC"
#define device_bar_CAVM_MCSX_SCLK_ACTIVE_PC(a) 0x0 /* PF_BAR0 */
#define busnum_CAVM_MCSX_SCLK_ACTIVE_PC(a) (a)
#define arguments_CAVM_MCSX_SCLK_ACTIVE_PC(a) (a),-1,-1,-1

#endif /* __CAVM_CSRS_MCS_H__ */
