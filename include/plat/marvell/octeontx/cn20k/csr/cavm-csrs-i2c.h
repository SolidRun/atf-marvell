#ifndef __CAVM_CSRS_I2C_H__
#define __CAVM_CSRS_I2C_H__
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
 * I2C.
 *
 * This file is auto generated. Do not edit.
 *
 */

/**
 * Enumeration i2c_bar_e
 *
 * I2C Base Address Register Enumeration
 * Enumerates the base address registers.
 */
#define CAVM_I2C_BAR_E_I2CX_PF_BAR0(a) (0xc09010000000ll + 0x100000000ll * (a))
#define CAVM_I2C_BAR_E_I2CX_PF_BAR0_SIZE 0x10000ull
#define CAVM_I2C_BAR_E_I2CX_PF_BAR4(a) (0xc09010f00000ll + 0x100000000ll * (a))
#define CAVM_I2C_BAR_E_I2CX_PF_BAR4_SIZE 0x100000ull

/**
 * Enumeration i2c_int_vec_e
 *
 * I2CSM MSI-X Vector Enumeration
 * Enumerates the MSI-X interrupt vectors.
 */
#define CAVM_I2C_INT_VEC_E_I2C_INTR (0)

/**
 * Register (RSL32b) i2c#_clken
 *
 * MIO I2C Clock Enable Register
 * This register controls conditional clocks.
 */
union cavm_i2cx_clken
{
    uint32_t u;
    struct cavm_i2cx_clken_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t reserved_1_31         : 31;
        uint32_t clken                 : 1;  /**< [  0:  0](R/W) Force the I2C interface conditional clocking to be always on. For diagnostic use only. */
#else /* Word 0 - Little Endian */
        uint32_t clken                 : 1;  /**< [  0:  0](R/W) Force the I2C interface conditional clocking to be always on. For diagnostic use only. */
        uint32_t reserved_1_31         : 31;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_i2cx_clken_s cn; */
};
typedef union cavm_i2cx_clken cavm_i2cx_clken_t;

static inline uint64_t CAVM_I2CX_CLKEN(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_I2CX_CLKEN(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CN20KA) && (a<=3))
        return 0xc0901000015cll + 0x100000000ll * ((a) & 0x3);
    __cavm_csr_fatal("I2CX_CLKEN", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_I2CX_CLKEN(a) cavm_i2cx_clken_t
#define bustype_CAVM_I2CX_CLKEN(a) CSR_TYPE_RSL32b
#define basename_CAVM_I2CX_CLKEN(a) "I2CX_CLKEN"
#define device_bar_CAVM_I2CX_CLKEN(a) 0x0 /* PF_BAR0 */
#define busnum_CAVM_I2CX_CLKEN(a) (a)
#define arguments_CAVM_I2CX_CLKEN(a) (a),-1,-1,-1

/**
 * Register (RSL32b) i2c#_ic_ack_general_call
 *
 * I2C Ic Ack General Call Register
 * I2C ACK General Call Register.
 *
 * The register controls whether DW_apb_i2c responds
 * with a ACK or NACK when it receives an I2C
 * General Call address.
 *
 * This register is applicable only when the DW_apb_i2c is in target mode.
 */
union cavm_i2cx_ic_ack_general_call
{
    uint32_t u;
    struct cavm_i2cx_ic_ack_general_call_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t rsvd_ic_ack_gen_1_31  : 31; /**< [ 31:  1](RO) RSVD_IC_ACK_GEN_1_31 Reserved bits - Read Only */
        uint32_t ack_gen_call          : 1;  /**< [  0:  0](R/W) ACK General Call.
                                                                 When set to 1, DW_apb_i2c responds with a ACK
                                                                 (by asserting ic_data_oe) when it receives a General Call.
                                                                 Otherwise, DW_apb_i2c responds with a NACK
                                                                 (by negating ic_data_oe). */
#else /* Word 0 - Little Endian */
        uint32_t ack_gen_call          : 1;  /**< [  0:  0](R/W) ACK General Call.
                                                                 When set to 1, DW_apb_i2c responds with a ACK
                                                                 (by asserting ic_data_oe) when it receives a General Call.
                                                                 Otherwise, DW_apb_i2c responds with a NACK
                                                                 (by negating ic_data_oe). */
        uint32_t rsvd_ic_ack_gen_1_31  : 31; /**< [ 31:  1](RO) RSVD_IC_ACK_GEN_1_31 Reserved bits - Read Only */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_i2cx_ic_ack_general_call_s cn; */
};
typedef union cavm_i2cx_ic_ack_general_call cavm_i2cx_ic_ack_general_call_t;

static inline uint64_t CAVM_I2CX_IC_ACK_GENERAL_CALL(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_I2CX_IC_ACK_GENERAL_CALL(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CN20KA) && (a<=3))
        return 0xc09010000098ll + 0x100000000ll * ((a) & 0x3);
    __cavm_csr_fatal("I2CX_IC_ACK_GENERAL_CALL", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_I2CX_IC_ACK_GENERAL_CALL(a) cavm_i2cx_ic_ack_general_call_t
#define bustype_CAVM_I2CX_IC_ACK_GENERAL_CALL(a) CSR_TYPE_RSL32b
#define basename_CAVM_I2CX_IC_ACK_GENERAL_CALL(a) "I2CX_IC_ACK_GENERAL_CALL"
#define device_bar_CAVM_I2CX_IC_ACK_GENERAL_CALL(a) 0x0 /* PF_BAR0 */
#define busnum_CAVM_I2CX_IC_ACK_GENERAL_CALL(a) (a)
#define arguments_CAVM_I2CX_IC_ACK_GENERAL_CALL(a) (a),-1,-1,-1

/**
 * Register (RSL32b) i2c#_ic_clr_activity
 *
 * I2C Ic Clr Activity Register
 * Clear ACTIVITY Interrupt Register
 */
union cavm_i2cx_ic_clr_activity
{
    uint32_t u;
    struct cavm_i2cx_ic_clr_activity_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t rsvd_ic_clr_activity  : 31; /**< [ 31:  1](RO) IC_CLR_ACTIVITY Reserved bits - Read Only */
        uint32_t clr_activity          : 1;  /**< [  0:  0](RO) Reading this register clears the ACTIVITY
                                                                 interrupt if the I2C is not active anymore. If the
                                                                 I2C module is still active on the bus, the ACTIVITY
                                                                 interrupt bit continues to be set. It is automatically
                                                                 cleared by hardware if the module is disabled and if
                                                                 there is no further activity on the bus. The value read
                                                                 from this register to get status of the ACTIVITY interrupt
                                                                 (bit 8) of the IC_RAW_INTR_STAT register. */
#else /* Word 0 - Little Endian */
        uint32_t clr_activity          : 1;  /**< [  0:  0](RO) Reading this register clears the ACTIVITY
                                                                 interrupt if the I2C is not active anymore. If the
                                                                 I2C module is still active on the bus, the ACTIVITY
                                                                 interrupt bit continues to be set. It is automatically
                                                                 cleared by hardware if the module is disabled and if
                                                                 there is no further activity on the bus. The value read
                                                                 from this register to get status of the ACTIVITY interrupt
                                                                 (bit 8) of the IC_RAW_INTR_STAT register. */
        uint32_t rsvd_ic_clr_activity  : 31; /**< [ 31:  1](RO) IC_CLR_ACTIVITY Reserved bits - Read Only */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_i2cx_ic_clr_activity_s cn; */
};
typedef union cavm_i2cx_ic_clr_activity cavm_i2cx_ic_clr_activity_t;

static inline uint64_t CAVM_I2CX_IC_CLR_ACTIVITY(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_I2CX_IC_CLR_ACTIVITY(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CN20KA) && (a<=3))
        return 0xc0901000005cll + 0x100000000ll * ((a) & 0x3);
    __cavm_csr_fatal("I2CX_IC_CLR_ACTIVITY", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_I2CX_IC_CLR_ACTIVITY(a) cavm_i2cx_ic_clr_activity_t
#define bustype_CAVM_I2CX_IC_CLR_ACTIVITY(a) CSR_TYPE_RSL32b
#define basename_CAVM_I2CX_IC_CLR_ACTIVITY(a) "I2CX_IC_CLR_ACTIVITY"
#define device_bar_CAVM_I2CX_IC_CLR_ACTIVITY(a) 0x0 /* PF_BAR0 */
#define busnum_CAVM_I2CX_IC_CLR_ACTIVITY(a) (a)
#define arguments_CAVM_I2CX_IC_CLR_ACTIVITY(a) (a),-1,-1,-1

/**
 * Register (RSL32b) i2c#_ic_clr_gen_call
 *
 * I2C Ic Clr Gen Call Register
 * Clear GEN_CALL Interrupt Register
 */
union cavm_i2cx_ic_clr_gen_call
{
    uint32_t u;
    struct cavm_i2cx_ic_clr_gen_call_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t rsvd_ic_clr_gen_call  : 31; /**< [ 31:  1](RO) IC_CLR_GEN_CALL Reserved bits - Read Only */
        uint32_t clr_gen_call          : 1;  /**< [  0:  0](RO) Read this register to clear the GEN_CALL
                                                                 interrupt (bit 11) of IC_RAW_INTR_STAT register. */
#else /* Word 0 - Little Endian */
        uint32_t clr_gen_call          : 1;  /**< [  0:  0](RO) Read this register to clear the GEN_CALL
                                                                 interrupt (bit 11) of IC_RAW_INTR_STAT register. */
        uint32_t rsvd_ic_clr_gen_call  : 31; /**< [ 31:  1](RO) IC_CLR_GEN_CALL Reserved bits - Read Only */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_i2cx_ic_clr_gen_call_s cn; */
};
typedef union cavm_i2cx_ic_clr_gen_call cavm_i2cx_ic_clr_gen_call_t;

static inline uint64_t CAVM_I2CX_IC_CLR_GEN_CALL(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_I2CX_IC_CLR_GEN_CALL(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CN20KA) && (a<=3))
        return 0xc09010000068ll + 0x100000000ll * ((a) & 0x3);
    __cavm_csr_fatal("I2CX_IC_CLR_GEN_CALL", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_I2CX_IC_CLR_GEN_CALL(a) cavm_i2cx_ic_clr_gen_call_t
#define bustype_CAVM_I2CX_IC_CLR_GEN_CALL(a) CSR_TYPE_RSL32b
#define basename_CAVM_I2CX_IC_CLR_GEN_CALL(a) "I2CX_IC_CLR_GEN_CALL"
#define device_bar_CAVM_I2CX_IC_CLR_GEN_CALL(a) 0x0 /* PF_BAR0 */
#define busnum_CAVM_I2CX_IC_CLR_GEN_CALL(a) (a)
#define arguments_CAVM_I2CX_IC_CLR_GEN_CALL(a) (a),-1,-1,-1

/**
 * Register (RSL32b) i2c#_ic_clr_intr
 *
 * I2C Ic Clr Intr Register
 * Clear Combined and Individual Interrupt Register
 */
union cavm_i2cx_ic_clr_intr
{
    uint32_t u;
    struct cavm_i2cx_ic_clr_intr_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t rsvd_ic_clr_intr      : 31; /**< [ 31:  1](RO) CLR_INTR Reserved bits - Read Only */
        uint32_t clr_intr              : 1;  /**< [  0:  0](RO) Read this register to clear the combined interrupt,
                                                                 all individual interrupts, and the IC_TX_ABRT_SOURCE register.
                                                                 This bit does not clear hardware clearable interrupts but software
                                                                 clearable interrupts. Refer to Bit 9 of the IC_TX_ABRT_SOURCE register
                                                                 for an exception to clearing IC_TX_ABRT_SOURCE. */
#else /* Word 0 - Little Endian */
        uint32_t clr_intr              : 1;  /**< [  0:  0](RO) Read this register to clear the combined interrupt,
                                                                 all individual interrupts, and the IC_TX_ABRT_SOURCE register.
                                                                 This bit does not clear hardware clearable interrupts but software
                                                                 clearable interrupts. Refer to Bit 9 of the IC_TX_ABRT_SOURCE register
                                                                 for an exception to clearing IC_TX_ABRT_SOURCE. */
        uint32_t rsvd_ic_clr_intr      : 31; /**< [ 31:  1](RO) CLR_INTR Reserved bits - Read Only */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_i2cx_ic_clr_intr_s cn; */
};
typedef union cavm_i2cx_ic_clr_intr cavm_i2cx_ic_clr_intr_t;

static inline uint64_t CAVM_I2CX_IC_CLR_INTR(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_I2CX_IC_CLR_INTR(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CN20KA) && (a<=3))
        return 0xc09010000040ll + 0x100000000ll * ((a) & 0x3);
    __cavm_csr_fatal("I2CX_IC_CLR_INTR", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_I2CX_IC_CLR_INTR(a) cavm_i2cx_ic_clr_intr_t
#define bustype_CAVM_I2CX_IC_CLR_INTR(a) CSR_TYPE_RSL32b
#define basename_CAVM_I2CX_IC_CLR_INTR(a) "I2CX_IC_CLR_INTR"
#define device_bar_CAVM_I2CX_IC_CLR_INTR(a) 0x0 /* PF_BAR0 */
#define busnum_CAVM_I2CX_IC_CLR_INTR(a) (a)
#define arguments_CAVM_I2CX_IC_CLR_INTR(a) (a),-1,-1,-1

/**
 * Register (RSL32b) i2c#_ic_clr_rd_req
 *
 * I2C Ic Clr Rd Req Register
 * Clear RD_REQ Interrupt Register
 */
union cavm_i2cx_ic_clr_rd_req
{
    uint32_t u;
    struct cavm_i2cx_ic_clr_rd_req_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t rsvd_ic_clr_rd_req    : 31; /**< [ 31:  1](RO) IC_CLR_RD_REQ Reserved bits - Read Only */
        uint32_t clr_rd_req            : 1;  /**< [  0:  0](RO) Read this register to clear the RD_REQ
                                                                 interrupt (bit 5) of the IC_RAW_INTR_STAT register. */
#else /* Word 0 - Little Endian */
        uint32_t clr_rd_req            : 1;  /**< [  0:  0](RO) Read this register to clear the RD_REQ
                                                                 interrupt (bit 5) of the IC_RAW_INTR_STAT register. */
        uint32_t rsvd_ic_clr_rd_req    : 31; /**< [ 31:  1](RO) IC_CLR_RD_REQ Reserved bits - Read Only */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_i2cx_ic_clr_rd_req_s cn; */
};
typedef union cavm_i2cx_ic_clr_rd_req cavm_i2cx_ic_clr_rd_req_t;

static inline uint64_t CAVM_I2CX_IC_CLR_RD_REQ(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_I2CX_IC_CLR_RD_REQ(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CN20KA) && (a<=3))
        return 0xc09010000050ll + 0x100000000ll * ((a) & 0x3);
    __cavm_csr_fatal("I2CX_IC_CLR_RD_REQ", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_I2CX_IC_CLR_RD_REQ(a) cavm_i2cx_ic_clr_rd_req_t
#define bustype_CAVM_I2CX_IC_CLR_RD_REQ(a) CSR_TYPE_RSL32b
#define basename_CAVM_I2CX_IC_CLR_RD_REQ(a) "I2CX_IC_CLR_RD_REQ"
#define device_bar_CAVM_I2CX_IC_CLR_RD_REQ(a) 0x0 /* PF_BAR0 */
#define busnum_CAVM_I2CX_IC_CLR_RD_REQ(a) (a)
#define arguments_CAVM_I2CX_IC_CLR_RD_REQ(a) (a),-1,-1,-1

/**
 * Register (RSL32b) i2c#_ic_clr_restart_det
 *
 * I2C Ic Clr Restart Det Register
 * Clear RESTART_DET Interrupt Register
 */
union cavm_i2cx_ic_clr_restart_det
{
    uint32_t u;
    struct cavm_i2cx_ic_clr_restart_det_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t rsvd_ic_clr_restart_det : 31;/**< [ 31:  1](RO) IC_CLR_RESTART_DET Reserved bits - Read Only */
        uint32_t clr_restart_det       : 1;  /**< [  0:  0](RO) Read this register to clear the RESTART_DET
                                                                 interrupt (bit 12) of IC_RAW_INTR_STAT register. */
#else /* Word 0 - Little Endian */
        uint32_t clr_restart_det       : 1;  /**< [  0:  0](RO) Read this register to clear the RESTART_DET
                                                                 interrupt (bit 12) of IC_RAW_INTR_STAT register. */
        uint32_t rsvd_ic_clr_restart_det : 31;/**< [ 31:  1](RO) IC_CLR_RESTART_DET Reserved bits - Read Only */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_i2cx_ic_clr_restart_det_s cn; */
};
typedef union cavm_i2cx_ic_clr_restart_det cavm_i2cx_ic_clr_restart_det_t;

static inline uint64_t CAVM_I2CX_IC_CLR_RESTART_DET(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_I2CX_IC_CLR_RESTART_DET(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CN20KA) && (a<=3))
        return 0xc090100000a8ll + 0x100000000ll * ((a) & 0x3);
    __cavm_csr_fatal("I2CX_IC_CLR_RESTART_DET", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_I2CX_IC_CLR_RESTART_DET(a) cavm_i2cx_ic_clr_restart_det_t
#define bustype_CAVM_I2CX_IC_CLR_RESTART_DET(a) CSR_TYPE_RSL32b
#define basename_CAVM_I2CX_IC_CLR_RESTART_DET(a) "I2CX_IC_CLR_RESTART_DET"
#define device_bar_CAVM_I2CX_IC_CLR_RESTART_DET(a) 0x0 /* PF_BAR0 */
#define busnum_CAVM_I2CX_IC_CLR_RESTART_DET(a) (a)
#define arguments_CAVM_I2CX_IC_CLR_RESTART_DET(a) (a),-1,-1,-1

/**
 * Register (RSL32b) i2c#_ic_clr_rx_done
 *
 * I2C Ic Clr Rx Done Register
 * Clear RX_DONE Interrupt Register
 */
union cavm_i2cx_ic_clr_rx_done
{
    uint32_t u;
    struct cavm_i2cx_ic_clr_rx_done_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t rsvd_ic_clr_rx_done   : 31; /**< [ 31:  1](RO) IC_CLR_RX_DONE Reserved bits - Read Only */
        uint32_t clr_rx_done           : 1;  /**< [  0:  0](RO) Read this register to clear the RX_DONE
                                                                 interrupt (bit 7) of the IC_RAW_INTR_STAT register. */
#else /* Word 0 - Little Endian */
        uint32_t clr_rx_done           : 1;  /**< [  0:  0](RO) Read this register to clear the RX_DONE
                                                                 interrupt (bit 7) of the IC_RAW_INTR_STAT register. */
        uint32_t rsvd_ic_clr_rx_done   : 31; /**< [ 31:  1](RO) IC_CLR_RX_DONE Reserved bits - Read Only */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_i2cx_ic_clr_rx_done_s cn; */
};
typedef union cavm_i2cx_ic_clr_rx_done cavm_i2cx_ic_clr_rx_done_t;

static inline uint64_t CAVM_I2CX_IC_CLR_RX_DONE(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_I2CX_IC_CLR_RX_DONE(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CN20KA) && (a<=3))
        return 0xc09010000058ll + 0x100000000ll * ((a) & 0x3);
    __cavm_csr_fatal("I2CX_IC_CLR_RX_DONE", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_I2CX_IC_CLR_RX_DONE(a) cavm_i2cx_ic_clr_rx_done_t
#define bustype_CAVM_I2CX_IC_CLR_RX_DONE(a) CSR_TYPE_RSL32b
#define basename_CAVM_I2CX_IC_CLR_RX_DONE(a) "I2CX_IC_CLR_RX_DONE"
#define device_bar_CAVM_I2CX_IC_CLR_RX_DONE(a) 0x0 /* PF_BAR0 */
#define busnum_CAVM_I2CX_IC_CLR_RX_DONE(a) (a)
#define arguments_CAVM_I2CX_IC_CLR_RX_DONE(a) (a),-1,-1,-1

/**
 * Register (RSL32b) i2c#_ic_clr_rx_over
 *
 * I2C Ic Clr Rx Over Register
 * Clear RX_OVER Interrupt Register
 */
union cavm_i2cx_ic_clr_rx_over
{
    uint32_t u;
    struct cavm_i2cx_ic_clr_rx_over_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t rsvd_ic_clr_rx_over   : 31; /**< [ 31:  1](RO) IC_CLR_RX_OVER Reserved bits - Read Only */
        uint32_t clr_rx_over           : 1;  /**< [  0:  0](RO) Read this register to clear the RX_OVER
                                                                 interrupt (bit 1) of the IC_RAW_INTR_STAT register. */
#else /* Word 0 - Little Endian */
        uint32_t clr_rx_over           : 1;  /**< [  0:  0](RO) Read this register to clear the RX_OVER
                                                                 interrupt (bit 1) of the IC_RAW_INTR_STAT register. */
        uint32_t rsvd_ic_clr_rx_over   : 31; /**< [ 31:  1](RO) IC_CLR_RX_OVER Reserved bits - Read Only */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_i2cx_ic_clr_rx_over_s cn; */
};
typedef union cavm_i2cx_ic_clr_rx_over cavm_i2cx_ic_clr_rx_over_t;

static inline uint64_t CAVM_I2CX_IC_CLR_RX_OVER(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_I2CX_IC_CLR_RX_OVER(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CN20KA) && (a<=3))
        return 0xc09010000048ll + 0x100000000ll * ((a) & 0x3);
    __cavm_csr_fatal("I2CX_IC_CLR_RX_OVER", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_I2CX_IC_CLR_RX_OVER(a) cavm_i2cx_ic_clr_rx_over_t
#define bustype_CAVM_I2CX_IC_CLR_RX_OVER(a) CSR_TYPE_RSL32b
#define basename_CAVM_I2CX_IC_CLR_RX_OVER(a) "I2CX_IC_CLR_RX_OVER"
#define device_bar_CAVM_I2CX_IC_CLR_RX_OVER(a) 0x0 /* PF_BAR0 */
#define busnum_CAVM_I2CX_IC_CLR_RX_OVER(a) (a)
#define arguments_CAVM_I2CX_IC_CLR_RX_OVER(a) (a),-1,-1,-1

/**
 * Register (RSL32b) i2c#_ic_clr_rx_under
 *
 * I2C Ic Clr Rx Under Register
 * Clear RX_UNDER Interrupt Register
 */
union cavm_i2cx_ic_clr_rx_under
{
    uint32_t u;
    struct cavm_i2cx_ic_clr_rx_under_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t rsvd_ic_clr_rx_under  : 31; /**< [ 31:  1](RO) IC_CLR_RX_UNDER Reserved bits - Read Only */
        uint32_t clr_rx_under          : 1;  /**< [  0:  0](RO) Read this register to clear the RX_UNDER
                                                                 interrupt (bit 0) of the IC_RAW_INTR_STAT register. */
#else /* Word 0 - Little Endian */
        uint32_t clr_rx_under          : 1;  /**< [  0:  0](RO) Read this register to clear the RX_UNDER
                                                                 interrupt (bit 0) of the IC_RAW_INTR_STAT register. */
        uint32_t rsvd_ic_clr_rx_under  : 31; /**< [ 31:  1](RO) IC_CLR_RX_UNDER Reserved bits - Read Only */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_i2cx_ic_clr_rx_under_s cn; */
};
typedef union cavm_i2cx_ic_clr_rx_under cavm_i2cx_ic_clr_rx_under_t;

static inline uint64_t CAVM_I2CX_IC_CLR_RX_UNDER(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_I2CX_IC_CLR_RX_UNDER(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CN20KA) && (a<=3))
        return 0xc09010000044ll + 0x100000000ll * ((a) & 0x3);
    __cavm_csr_fatal("I2CX_IC_CLR_RX_UNDER", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_I2CX_IC_CLR_RX_UNDER(a) cavm_i2cx_ic_clr_rx_under_t
#define bustype_CAVM_I2CX_IC_CLR_RX_UNDER(a) CSR_TYPE_RSL32b
#define basename_CAVM_I2CX_IC_CLR_RX_UNDER(a) "I2CX_IC_CLR_RX_UNDER"
#define device_bar_CAVM_I2CX_IC_CLR_RX_UNDER(a) 0x0 /* PF_BAR0 */
#define busnum_CAVM_I2CX_IC_CLR_RX_UNDER(a) (a)
#define arguments_CAVM_I2CX_IC_CLR_RX_UNDER(a) (a),-1,-1,-1

/**
 * Register (RSL32b) i2c#_ic_clr_scl_stuck_det
 *
 * I2C Ic Clr Scl Stuck Det Register
 * Clear SCL Stuck at Low Detect Interrupt Register
 */
union cavm_i2cx_ic_clr_scl_stuck_det
{
    uint32_t u;
    struct cavm_i2cx_ic_clr_scl_stuck_det_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t rsvd_clr_scl_stuck_det : 31;/**< [ 31:  1](RO) CLR_SCL_STUCK_DET Reserved bits - Read Only */
        uint32_t clr_scl_stuck_det     : 1;  /**< [  0:  0](RO) Read this register to clear the SCL_STUCT_AT_LOW interrupt (bit 15) of the
                                                                 IC_RAW_INTR_STAT register. */
#else /* Word 0 - Little Endian */
        uint32_t clr_scl_stuck_det     : 1;  /**< [  0:  0](RO) Read this register to clear the SCL_STUCT_AT_LOW interrupt (bit 15) of the
                                                                 IC_RAW_INTR_STAT register. */
        uint32_t rsvd_clr_scl_stuck_det : 31;/**< [ 31:  1](RO) CLR_SCL_STUCK_DET Reserved bits - Read Only */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_i2cx_ic_clr_scl_stuck_det_s cn; */
};
typedef union cavm_i2cx_ic_clr_scl_stuck_det cavm_i2cx_ic_clr_scl_stuck_det_t;

static inline uint64_t CAVM_I2CX_IC_CLR_SCL_STUCK_DET(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_I2CX_IC_CLR_SCL_STUCK_DET(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CN20KA) && (a<=3))
        return 0xc090100000b4ll + 0x100000000ll * ((a) & 0x3);
    __cavm_csr_fatal("I2CX_IC_CLR_SCL_STUCK_DET", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_I2CX_IC_CLR_SCL_STUCK_DET(a) cavm_i2cx_ic_clr_scl_stuck_det_t
#define bustype_CAVM_I2CX_IC_CLR_SCL_STUCK_DET(a) CSR_TYPE_RSL32b
#define basename_CAVM_I2CX_IC_CLR_SCL_STUCK_DET(a) "I2CX_IC_CLR_SCL_STUCK_DET"
#define device_bar_CAVM_I2CX_IC_CLR_SCL_STUCK_DET(a) 0x0 /* PF_BAR0 */
#define busnum_CAVM_I2CX_IC_CLR_SCL_STUCK_DET(a) (a)
#define arguments_CAVM_I2CX_IC_CLR_SCL_STUCK_DET(a) (a),-1,-1,-1

/**
 * Register (RSL32b) i2c#_ic_clr_slv_addr_tag
 *
 * I2C Ic Clr Slv Addr Tag Register
 * Clear CLR_SLV_ADDR_TAG Interrupt Register
 */
union cavm_i2cx_ic_clr_slv_addr_tag
{
    uint32_t u;
    struct cavm_i2cx_ic_clr_slv_addr_tag_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t rsvd_ic_clr_slv_addr_tag : 31;/**< [ 31:  1](RO) IC_CLR_SLV_ADDR_TAG Reserved bits - Read Only */
        uint32_t clr_slv_addr_tag      : 1;  /**< [  0:  0](RO) Read this register to clear all SLV_ADDRx_TAG
                                                                 (Where x is 1 through IC_NUM_SARS) interrupts (bit 16 ...(16+IC_NUM_SARS-1)) of
                                                                 the IC_RAW_INTR_STAT register. */
#else /* Word 0 - Little Endian */
        uint32_t clr_slv_addr_tag      : 1;  /**< [  0:  0](RO) Read this register to clear all SLV_ADDRx_TAG
                                                                 (Where x is 1 through IC_NUM_SARS) interrupts (bit 16 ...(16+IC_NUM_SARS-1)) of
                                                                 the IC_RAW_INTR_STAT register. */
        uint32_t rsvd_ic_clr_slv_addr_tag : 31;/**< [ 31:  1](RO) IC_CLR_SLV_ADDR_TAG Reserved bits - Read Only */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_i2cx_ic_clr_slv_addr_tag_s cn; */
};
typedef union cavm_i2cx_ic_clr_slv_addr_tag cavm_i2cx_ic_clr_slv_addr_tag_t;

static inline uint64_t CAVM_I2CX_IC_CLR_SLV_ADDR_TAG(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_I2CX_IC_CLR_SLV_ADDR_TAG(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CN20KA) && (a<=3))
        return 0xc09010000120ll + 0x100000000ll * ((a) & 0x3);
    __cavm_csr_fatal("I2CX_IC_CLR_SLV_ADDR_TAG", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_I2CX_IC_CLR_SLV_ADDR_TAG(a) cavm_i2cx_ic_clr_slv_addr_tag_t
#define bustype_CAVM_I2CX_IC_CLR_SLV_ADDR_TAG(a) CSR_TYPE_RSL32b
#define basename_CAVM_I2CX_IC_CLR_SLV_ADDR_TAG(a) "I2CX_IC_CLR_SLV_ADDR_TAG"
#define device_bar_CAVM_I2CX_IC_CLR_SLV_ADDR_TAG(a) 0x0 /* PF_BAR0 */
#define busnum_CAVM_I2CX_IC_CLR_SLV_ADDR_TAG(a) (a)
#define arguments_CAVM_I2CX_IC_CLR_SLV_ADDR_TAG(a) (a),-1,-1,-1

/**
 * Register (RSL32b) i2c#_ic_clr_smbus_intr
 *
 * I2C Ic Clr Smbus Intr Register
 * SMBus Clear Interrupt Register
 */
union cavm_i2cx_ic_clr_smbus_intr
{
    uint32_t u;
    struct cavm_i2cx_ic_clr_smbus_intr_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t rsvd_ic_clr_smbus_intr : 21;/**< [ 31: 11](WO) IC_CLR_SMBUS_INTR Reserved bits - Read Only */
        uint32_t clr_smbus_alert_det   : 1;  /**< [ 10: 10](WO) Write this register bit to clear the SMBUS_ALERT_DET
                                                                 interrupt (bit 10) of the IC_SMBUS_RAW_INTR_STAT register. */
        uint32_t clr_smbus_suspend_det : 1;  /**< [  9:  9](WO) Write this register bit to clear the SMBUS_SUSPEND_DET
                                                                 interrupt (bit 9) of the IC_SMBUS_RAW_INTR_STAT register. */
        uint32_t clr_slv_rx_pec_nack   : 1;  /**< [  8:  8](WO) Write this register bit to clear the SLV_RX_PEC_NACK
                                                                 interrupt (bit 8) of the IC_SMBUS_RAW_INTR_STAT register. */
        uint32_t clr_arp_assgn_addr_cmd_det : 1;/**< [  7:  7](WO) Write this register bit to clear the ARP_ASSGN_ADDR_CMD_DET
                                                                 interrupt (bit 7) of the IC_SMBUS_RAW_INTR_STAT register. */
        uint32_t clr_arp_get_udid_cmd_det : 1;/**< [  6:  6](WO) Write this register bit to clear the ARP_GET_UDID_CMD_DET
                                                                 interrupt (bit 6) of the IC_SMBUS_RAW_INTR_STAT register. */
        uint32_t clr_arp_rst_cmd_det   : 1;  /**< [  5:  5](WO) Write this register bit to clear the ARP_RST_CMD_DET
                                                                 interrupt (bit 5) of the IC_SMBUS_RAW_INTR_STAT register. */
        uint32_t clr_arp_prepare_cmd_det : 1;/**< [  4:  4](WO) Write this register bit to clear the ARP_PREPARE_CMD_DET
                                                                 interrupt (bit 4) of the IC_SMBUS_RAW_INTR_STAT register. */
        uint32_t clr_host_notify_mst_det : 1;/**< [  3:  3](WO) Write this register bit to clear the HOST_NOTIFY_MST_DET
                                                                 interrupt (bit 3) of the IC_SMBUS_RAW_INTR_STAT register. */
        uint32_t clr_quick_cmd_det     : 1;  /**< [  2:  2](WO) Write this register bit to clear the QUICK_CMD_DET
                                                                 interrupt (bit 2) of the IC_SMBUS_RAW_INTR_STAT register. */
        uint32_t clr_mst_clock_extnd_timeout : 1;/**< [  1:  1](WO) Write this register bit to clear the MST_CLOCK_EXTND_TIMEOUT
                                                                 interrupt (bit 1) of the IC_SMBUS_RAW_INTR_STAT register. */
        uint32_t clr_slv_clock_extnd_timeout : 1;/**< [  0:  0](WO) Write this register bit to clear the SLV_CLOCK_EXTND_TIMEOUT
                                                                 interrupt (bit 0) of the IC_SMBUS_RAW_INTR_STAT register. */
#else /* Word 0 - Little Endian */
        uint32_t clr_slv_clock_extnd_timeout : 1;/**< [  0:  0](WO) Write this register bit to clear the SLV_CLOCK_EXTND_TIMEOUT
                                                                 interrupt (bit 0) of the IC_SMBUS_RAW_INTR_STAT register. */
        uint32_t clr_mst_clock_extnd_timeout : 1;/**< [  1:  1](WO) Write this register bit to clear the MST_CLOCK_EXTND_TIMEOUT
                                                                 interrupt (bit 1) of the IC_SMBUS_RAW_INTR_STAT register. */
        uint32_t clr_quick_cmd_det     : 1;  /**< [  2:  2](WO) Write this register bit to clear the QUICK_CMD_DET
                                                                 interrupt (bit 2) of the IC_SMBUS_RAW_INTR_STAT register. */
        uint32_t clr_host_notify_mst_det : 1;/**< [  3:  3](WO) Write this register bit to clear the HOST_NOTIFY_MST_DET
                                                                 interrupt (bit 3) of the IC_SMBUS_RAW_INTR_STAT register. */
        uint32_t clr_arp_prepare_cmd_det : 1;/**< [  4:  4](WO) Write this register bit to clear the ARP_PREPARE_CMD_DET
                                                                 interrupt (bit 4) of the IC_SMBUS_RAW_INTR_STAT register. */
        uint32_t clr_arp_rst_cmd_det   : 1;  /**< [  5:  5](WO) Write this register bit to clear the ARP_RST_CMD_DET
                                                                 interrupt (bit 5) of the IC_SMBUS_RAW_INTR_STAT register. */
        uint32_t clr_arp_get_udid_cmd_det : 1;/**< [  6:  6](WO) Write this register bit to clear the ARP_GET_UDID_CMD_DET
                                                                 interrupt (bit 6) of the IC_SMBUS_RAW_INTR_STAT register. */
        uint32_t clr_arp_assgn_addr_cmd_det : 1;/**< [  7:  7](WO) Write this register bit to clear the ARP_ASSGN_ADDR_CMD_DET
                                                                 interrupt (bit 7) of the IC_SMBUS_RAW_INTR_STAT register. */
        uint32_t clr_slv_rx_pec_nack   : 1;  /**< [  8:  8](WO) Write this register bit to clear the SLV_RX_PEC_NACK
                                                                 interrupt (bit 8) of the IC_SMBUS_RAW_INTR_STAT register. */
        uint32_t clr_smbus_suspend_det : 1;  /**< [  9:  9](WO) Write this register bit to clear the SMBUS_SUSPEND_DET
                                                                 interrupt (bit 9) of the IC_SMBUS_RAW_INTR_STAT register. */
        uint32_t clr_smbus_alert_det   : 1;  /**< [ 10: 10](WO) Write this register bit to clear the SMBUS_ALERT_DET
                                                                 interrupt (bit 10) of the IC_SMBUS_RAW_INTR_STAT register. */
        uint32_t rsvd_ic_clr_smbus_intr : 21;/**< [ 31: 11](WO) IC_CLR_SMBUS_INTR Reserved bits - Read Only */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_i2cx_ic_clr_smbus_intr_s cn; */
};
typedef union cavm_i2cx_ic_clr_smbus_intr cavm_i2cx_ic_clr_smbus_intr_t;

static inline uint64_t CAVM_I2CX_IC_CLR_SMBUS_INTR(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_I2CX_IC_CLR_SMBUS_INTR(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CN20KA) && (a<=3))
        return 0xc090100000d4ll + 0x100000000ll * ((a) & 0x3);
    __cavm_csr_fatal("I2CX_IC_CLR_SMBUS_INTR", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_I2CX_IC_CLR_SMBUS_INTR(a) cavm_i2cx_ic_clr_smbus_intr_t
#define bustype_CAVM_I2CX_IC_CLR_SMBUS_INTR(a) CSR_TYPE_RSL32b
#define basename_CAVM_I2CX_IC_CLR_SMBUS_INTR(a) "I2CX_IC_CLR_SMBUS_INTR"
#define device_bar_CAVM_I2CX_IC_CLR_SMBUS_INTR(a) 0x0 /* PF_BAR0 */
#define busnum_CAVM_I2CX_IC_CLR_SMBUS_INTR(a) (a)
#define arguments_CAVM_I2CX_IC_CLR_SMBUS_INTR(a) (a),-1,-1,-1

/**
 * Register (RSL32b) i2c#_ic_clr_start_det
 *
 * I2C Ic Clr Start Det Register
 * Clear START_DET Interrupt Register
 */
union cavm_i2cx_ic_clr_start_det
{
    uint32_t u;
    struct cavm_i2cx_ic_clr_start_det_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t rsvd_ic_clr_start_det : 31; /**< [ 31:  1](RO) IC_CLR_START_DET Reserved bits - Read Only */
        uint32_t clr_start_det         : 1;  /**< [  0:  0](RO) Read this register to clear the START_DET
                                                                 interrupt (bit 10) of the IC_RAW_INTR_STAT register. */
#else /* Word 0 - Little Endian */
        uint32_t clr_start_det         : 1;  /**< [  0:  0](RO) Read this register to clear the START_DET
                                                                 interrupt (bit 10) of the IC_RAW_INTR_STAT register. */
        uint32_t rsvd_ic_clr_start_det : 31; /**< [ 31:  1](RO) IC_CLR_START_DET Reserved bits - Read Only */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_i2cx_ic_clr_start_det_s cn; */
};
typedef union cavm_i2cx_ic_clr_start_det cavm_i2cx_ic_clr_start_det_t;

static inline uint64_t CAVM_I2CX_IC_CLR_START_DET(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_I2CX_IC_CLR_START_DET(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CN20KA) && (a<=3))
        return 0xc09010000064ll + 0x100000000ll * ((a) & 0x3);
    __cavm_csr_fatal("I2CX_IC_CLR_START_DET", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_I2CX_IC_CLR_START_DET(a) cavm_i2cx_ic_clr_start_det_t
#define bustype_CAVM_I2CX_IC_CLR_START_DET(a) CSR_TYPE_RSL32b
#define basename_CAVM_I2CX_IC_CLR_START_DET(a) "I2CX_IC_CLR_START_DET"
#define device_bar_CAVM_I2CX_IC_CLR_START_DET(a) 0x0 /* PF_BAR0 */
#define busnum_CAVM_I2CX_IC_CLR_START_DET(a) (a)
#define arguments_CAVM_I2CX_IC_CLR_START_DET(a) (a),-1,-1,-1

/**
 * Register (RSL32b) i2c#_ic_clr_stop_det
 *
 * I2C Ic Clr Stop Det Register
 * Clear STOP_DET Interrupt Register
 */
union cavm_i2cx_ic_clr_stop_det
{
    uint32_t u;
    struct cavm_i2cx_ic_clr_stop_det_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t rsvd_ic_clr_stop_det  : 31; /**< [ 31:  1](RO) IC_CLR_STOP_DET Reserved bits - Read Only */
        uint32_t clr_stop_det          : 1;  /**< [  0:  0](RO) Read this register to clear the STOP_DET
                                                                 interrupt (bit 9) of the IC_RAW_INTR_STAT register. */
#else /* Word 0 - Little Endian */
        uint32_t clr_stop_det          : 1;  /**< [  0:  0](RO) Read this register to clear the STOP_DET
                                                                 interrupt (bit 9) of the IC_RAW_INTR_STAT register. */
        uint32_t rsvd_ic_clr_stop_det  : 31; /**< [ 31:  1](RO) IC_CLR_STOP_DET Reserved bits - Read Only */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_i2cx_ic_clr_stop_det_s cn; */
};
typedef union cavm_i2cx_ic_clr_stop_det cavm_i2cx_ic_clr_stop_det_t;

static inline uint64_t CAVM_I2CX_IC_CLR_STOP_DET(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_I2CX_IC_CLR_STOP_DET(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CN20KA) && (a<=3))
        return 0xc09010000060ll + 0x100000000ll * ((a) & 0x3);
    __cavm_csr_fatal("I2CX_IC_CLR_STOP_DET", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_I2CX_IC_CLR_STOP_DET(a) cavm_i2cx_ic_clr_stop_det_t
#define bustype_CAVM_I2CX_IC_CLR_STOP_DET(a) CSR_TYPE_RSL32b
#define basename_CAVM_I2CX_IC_CLR_STOP_DET(a) "I2CX_IC_CLR_STOP_DET"
#define device_bar_CAVM_I2CX_IC_CLR_STOP_DET(a) 0x0 /* PF_BAR0 */
#define busnum_CAVM_I2CX_IC_CLR_STOP_DET(a) (a)
#define arguments_CAVM_I2CX_IC_CLR_STOP_DET(a) (a),-1,-1,-1

/**
 * Register (RSL32b) i2c#_ic_clr_tx_abrt
 *
 * I2C Ic Clr Tx Abrt Register
 * Clear TX_ABRT Interrupt Register
 */
union cavm_i2cx_ic_clr_tx_abrt
{
    uint32_t u;
    struct cavm_i2cx_ic_clr_tx_abrt_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t rsvd_ic_clr_tx_abrt   : 31; /**< [ 31:  1](RO) IC_CLR_TX_ABRT Reserved bits - Read Only */
        uint32_t clr_tx_abrt           : 1;  /**< [  0:  0](RO) Read this register to clear the TX_ABRT
                                                                 interrupt (bit 6) of the IC_RAW_INTR_STAT register,
                                                                 and the IC_TX_ABRT_SOURCE register.
                                                                 This also releases the TX FIFO from the flushed/reset
                                                                 state, allowing more writes to the TX FIFO.
                                                                 Refer to Bit 9 of the IC_TX_ABRT_SOURCE register for
                                                                 an exception to clearing IC_TX_ABRT_SOURCE. */
#else /* Word 0 - Little Endian */
        uint32_t clr_tx_abrt           : 1;  /**< [  0:  0](RO) Read this register to clear the TX_ABRT
                                                                 interrupt (bit 6) of the IC_RAW_INTR_STAT register,
                                                                 and the IC_TX_ABRT_SOURCE register.
                                                                 This also releases the TX FIFO from the flushed/reset
                                                                 state, allowing more writes to the TX FIFO.
                                                                 Refer to Bit 9 of the IC_TX_ABRT_SOURCE register for
                                                                 an exception to clearing IC_TX_ABRT_SOURCE. */
        uint32_t rsvd_ic_clr_tx_abrt   : 31; /**< [ 31:  1](RO) IC_CLR_TX_ABRT Reserved bits - Read Only */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_i2cx_ic_clr_tx_abrt_s cn; */
};
typedef union cavm_i2cx_ic_clr_tx_abrt cavm_i2cx_ic_clr_tx_abrt_t;

static inline uint64_t CAVM_I2CX_IC_CLR_TX_ABRT(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_I2CX_IC_CLR_TX_ABRT(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CN20KA) && (a<=3))
        return 0xc09010000054ll + 0x100000000ll * ((a) & 0x3);
    __cavm_csr_fatal("I2CX_IC_CLR_TX_ABRT", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_I2CX_IC_CLR_TX_ABRT(a) cavm_i2cx_ic_clr_tx_abrt_t
#define bustype_CAVM_I2CX_IC_CLR_TX_ABRT(a) CSR_TYPE_RSL32b
#define basename_CAVM_I2CX_IC_CLR_TX_ABRT(a) "I2CX_IC_CLR_TX_ABRT"
#define device_bar_CAVM_I2CX_IC_CLR_TX_ABRT(a) 0x0 /* PF_BAR0 */
#define busnum_CAVM_I2CX_IC_CLR_TX_ABRT(a) (a)
#define arguments_CAVM_I2CX_IC_CLR_TX_ABRT(a) (a),-1,-1,-1

/**
 * Register (RSL32b) i2c#_ic_clr_tx_over
 *
 * I2C Ic Clr Tx Over Register
 * Clear TX_OVER Interrupt Register
 */
union cavm_i2cx_ic_clr_tx_over
{
    uint32_t u;
    struct cavm_i2cx_ic_clr_tx_over_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t rsvd_ic_clr_tx_over   : 31; /**< [ 31:  1](RO) IC_CLR_TX_OVER Reserved bits - Read Only */
        uint32_t clr_tx_over           : 1;  /**< [  0:  0](RO) Read this register to clear the TX_OVER
                                                                 interrupt (bit 3) of the IC_RAW_INTR_STAT register. */
#else /* Word 0 - Little Endian */
        uint32_t clr_tx_over           : 1;  /**< [  0:  0](RO) Read this register to clear the TX_OVER
                                                                 interrupt (bit 3) of the IC_RAW_INTR_STAT register. */
        uint32_t rsvd_ic_clr_tx_over   : 31; /**< [ 31:  1](RO) IC_CLR_TX_OVER Reserved bits - Read Only */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_i2cx_ic_clr_tx_over_s cn; */
};
typedef union cavm_i2cx_ic_clr_tx_over cavm_i2cx_ic_clr_tx_over_t;

static inline uint64_t CAVM_I2CX_IC_CLR_TX_OVER(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_I2CX_IC_CLR_TX_OVER(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CN20KA) && (a<=3))
        return 0xc0901000004cll + 0x100000000ll * ((a) & 0x3);
    __cavm_csr_fatal("I2CX_IC_CLR_TX_OVER", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_I2CX_IC_CLR_TX_OVER(a) cavm_i2cx_ic_clr_tx_over_t
#define bustype_CAVM_I2CX_IC_CLR_TX_OVER(a) CSR_TYPE_RSL32b
#define basename_CAVM_I2CX_IC_CLR_TX_OVER(a) "I2CX_IC_CLR_TX_OVER"
#define device_bar_CAVM_I2CX_IC_CLR_TX_OVER(a) 0x0 /* PF_BAR0 */
#define busnum_CAVM_I2CX_IC_CLR_TX_OVER(a) (a)
#define arguments_CAVM_I2CX_IC_CLR_TX_OVER(a) (a),-1,-1,-1

/**
 * Register (RSL32b) i2c#_ic_clr_wr_req
 *
 * I2C Ic Clr Wr Req Register
 * Clear WR_REQ Interrupt Register
 */
union cavm_i2cx_ic_clr_wr_req
{
    uint32_t u;
    struct cavm_i2cx_ic_clr_wr_req_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t rsvd_ic_clr_wr_req    : 31; /**< [ 31:  1](RO) IC_CLR_WR_REQ Reserved bits - Read Only */
        uint32_t clr_wr_req            : 1;  /**< [  0:  0](RO) Read this register to clear the WR_REQ
                                                                 interrupt (bit 15) of the IC_RAW_INTR_STAT register. */
#else /* Word 0 - Little Endian */
        uint32_t clr_wr_req            : 1;  /**< [  0:  0](RO) Read this register to clear the WR_REQ
                                                                 interrupt (bit 15) of the IC_RAW_INTR_STAT register. */
        uint32_t rsvd_ic_clr_wr_req    : 31; /**< [ 31:  1](RO) IC_CLR_WR_REQ Reserved bits - Read Only */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_i2cx_ic_clr_wr_req_s cn; */
};
typedef union cavm_i2cx_ic_clr_wr_req cavm_i2cx_ic_clr_wr_req_t;

static inline uint64_t CAVM_I2CX_IC_CLR_WR_REQ(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_I2CX_IC_CLR_WR_REQ(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CN20KA) && (a<=3))
        return 0xc0901000011cll + 0x100000000ll * ((a) & 0x3);
    __cavm_csr_fatal("I2CX_IC_CLR_WR_REQ", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_I2CX_IC_CLR_WR_REQ(a) cavm_i2cx_ic_clr_wr_req_t
#define bustype_CAVM_I2CX_IC_CLR_WR_REQ(a) CSR_TYPE_RSL32b
#define basename_CAVM_I2CX_IC_CLR_WR_REQ(a) "I2CX_IC_CLR_WR_REQ"
#define device_bar_CAVM_I2CX_IC_CLR_WR_REQ(a) 0x0 /* PF_BAR0 */
#define busnum_CAVM_I2CX_IC_CLR_WR_REQ(a) (a)
#define arguments_CAVM_I2CX_IC_CLR_WR_REQ(a) (a),-1,-1,-1

/**
 * Register (RSL32b) i2c#_ic_comp_param_1
 *
 * I2C Ic Comp Param 1 Register
 * Component Parameter Register 1
 *
 * Note: This is a constant read-only register that contains
 * encoded information about the component's parameter settings.
 * The reset value depends on coreConsultant parameter(s).
 */
union cavm_i2cx_ic_comp_param_1
{
    uint32_t u;
    struct cavm_i2cx_ic_comp_param_1_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t rsvd_ic_comp_param_1  : 8;  /**< [ 31: 24](RO) IC_COMP_PARAM_1 Reserved bits - Read Only */
        uint32_t tx_buffer_depth       : 8;  /**< [ 23: 16](RO) The value of this register is derived
                                                                 from the IC_TX_BUFFER_DEPTH coreConsultant
                                                                 parameter.
                                                                  - 0x00 = Reserved
                                                                  - 0x01 = 2
                                                                  - 0x02 = 3
                                                                  - ...
                                                                  - 0xFF = 256 */
        uint32_t rx_buffer_depth       : 8;  /**< [ 15:  8](RO) The value of this register is
                                                                 derived from the IC_RX_BUFFER_DEPTH coreConsultant
                                                                 parameter.
                                                                  - 0x00: Reserved
                                                                  - 0x01: 2
                                                                  - 0x02: 3
                                                                  - ...
                                                                  - 0xFF: 256 */
        uint32_t add_encoded_params    : 1;  /**< [  7:  7](RO) The value of this register is derived
                                                                 from the IC_ADD_ENCODED_PARAMS coreConsultant
                                                                 parameter.
                                                                 Reading 1 in this bit means that the capability
                                                                 of reading these encoded parameters via software has been
                                                                 included. Otherwise, the entire register is 0 regardless of
                                                                 the setting of any other parameters that are encoded in the
                                                                 bits. */
        uint32_t has_dma               : 1;  /**< [  6:  6](RO) The value of this register is
                                                                 derived from the IC_HAS_DMA coreConsultant
                                                                 parameter. */
        uint32_t intr_io               : 1;  /**< [  5:  5](RO) The value of this register is
                                                                 derived from the IC_INTR_IO coreConsultant
                                                                 parameter. */
        uint32_t hc_count_values       : 1;  /**< [  4:  4](RO) The value of this register is
                                                                 derived from the IC_HC_COUNT VALUES coreConsultant
                                                                 parameter. */
        uint32_t max_speed_mode        : 2;  /**< [  3:  2](RO) The value of this register is
                                                                 derived from the IC_MAX_SPEED_MODE coreConsultant
                                                                 parameter.
                                                                  - 0x0: Reserved
                                                                  - 0x1: Standard
                                                                  - 0x2: Fast
                                                                  - 0x3: High */
        uint32_t apb_data_width        : 2;  /**< [  1:  0](RO) The value of this register is
                                                                 derived from the APB_DATA_WIDTH coreConsultant
                                                                 parameter. */
#else /* Word 0 - Little Endian */
        uint32_t apb_data_width        : 2;  /**< [  1:  0](RO) The value of this register is
                                                                 derived from the APB_DATA_WIDTH coreConsultant
                                                                 parameter. */
        uint32_t max_speed_mode        : 2;  /**< [  3:  2](RO) The value of this register is
                                                                 derived from the IC_MAX_SPEED_MODE coreConsultant
                                                                 parameter.
                                                                  - 0x0: Reserved
                                                                  - 0x1: Standard
                                                                  - 0x2: Fast
                                                                  - 0x3: High */
        uint32_t hc_count_values       : 1;  /**< [  4:  4](RO) The value of this register is
                                                                 derived from the IC_HC_COUNT VALUES coreConsultant
                                                                 parameter. */
        uint32_t intr_io               : 1;  /**< [  5:  5](RO) The value of this register is
                                                                 derived from the IC_INTR_IO coreConsultant
                                                                 parameter. */
        uint32_t has_dma               : 1;  /**< [  6:  6](RO) The value of this register is
                                                                 derived from the IC_HAS_DMA coreConsultant
                                                                 parameter. */
        uint32_t add_encoded_params    : 1;  /**< [  7:  7](RO) The value of this register is derived
                                                                 from the IC_ADD_ENCODED_PARAMS coreConsultant
                                                                 parameter.
                                                                 Reading 1 in this bit means that the capability
                                                                 of reading these encoded parameters via software has been
                                                                 included. Otherwise, the entire register is 0 regardless of
                                                                 the setting of any other parameters that are encoded in the
                                                                 bits. */
        uint32_t rx_buffer_depth       : 8;  /**< [ 15:  8](RO) The value of this register is
                                                                 derived from the IC_RX_BUFFER_DEPTH coreConsultant
                                                                 parameter.
                                                                  - 0x00: Reserved
                                                                  - 0x01: 2
                                                                  - 0x02: 3
                                                                  - ...
                                                                  - 0xFF: 256 */
        uint32_t tx_buffer_depth       : 8;  /**< [ 23: 16](RO) The value of this register is derived
                                                                 from the IC_TX_BUFFER_DEPTH coreConsultant
                                                                 parameter.
                                                                  - 0x00 = Reserved
                                                                  - 0x01 = 2
                                                                  - 0x02 = 3
                                                                  - ...
                                                                  - 0xFF = 256 */
        uint32_t rsvd_ic_comp_param_1  : 8;  /**< [ 31: 24](RO) IC_COMP_PARAM_1 Reserved bits - Read Only */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_i2cx_ic_comp_param_1_s cn; */
};
typedef union cavm_i2cx_ic_comp_param_1 cavm_i2cx_ic_comp_param_1_t;

static inline uint64_t CAVM_I2CX_IC_COMP_PARAM_1(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_I2CX_IC_COMP_PARAM_1(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CN20KA) && (a<=3))
        return 0xc090100000f4ll + 0x100000000ll * ((a) & 0x3);
    __cavm_csr_fatal("I2CX_IC_COMP_PARAM_1", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_I2CX_IC_COMP_PARAM_1(a) cavm_i2cx_ic_comp_param_1_t
#define bustype_CAVM_I2CX_IC_COMP_PARAM_1(a) CSR_TYPE_RSL32b
#define basename_CAVM_I2CX_IC_COMP_PARAM_1(a) "I2CX_IC_COMP_PARAM_1"
#define device_bar_CAVM_I2CX_IC_COMP_PARAM_1(a) 0x0 /* PF_BAR0 */
#define busnum_CAVM_I2CX_IC_COMP_PARAM_1(a) (a)
#define arguments_CAVM_I2CX_IC_COMP_PARAM_1(a) (a),-1,-1,-1

/**
 * Register (RSL32b) i2c#_ic_comp_type
 *
 * I2C Ic Comp Type Register
 * I2C Component Type Register
 */
union cavm_i2cx_ic_comp_type
{
    uint32_t u;
    struct cavm_i2cx_ic_comp_type_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t ic_comp_type          : 32; /**< [ 31:  0](RO) DesignWare Component Type number
                                                                 = 0x44_57_01_40. This assigned unique
                                                                 hex value is constant and is derived
                                                                 from the two ASCII letters 'DW' followed
                                                                 by a 16-bit unsigned number. */
#else /* Word 0 - Little Endian */
        uint32_t ic_comp_type          : 32; /**< [ 31:  0](RO) DesignWare Component Type number
                                                                 = 0x44_57_01_40. This assigned unique
                                                                 hex value is constant and is derived
                                                                 from the two ASCII letters 'DW' followed
                                                                 by a 16-bit unsigned number. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_i2cx_ic_comp_type_s cn; */
};
typedef union cavm_i2cx_ic_comp_type cavm_i2cx_ic_comp_type_t;

static inline uint64_t CAVM_I2CX_IC_COMP_TYPE(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_I2CX_IC_COMP_TYPE(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CN20KA) && (a<=3))
        return 0xc090100000fcll + 0x100000000ll * ((a) & 0x3);
    __cavm_csr_fatal("I2CX_IC_COMP_TYPE", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_I2CX_IC_COMP_TYPE(a) cavm_i2cx_ic_comp_type_t
#define bustype_CAVM_I2CX_IC_COMP_TYPE(a) CSR_TYPE_RSL32b
#define basename_CAVM_I2CX_IC_COMP_TYPE(a) "I2CX_IC_COMP_TYPE"
#define device_bar_CAVM_I2CX_IC_COMP_TYPE(a) 0x0 /* PF_BAR0 */
#define busnum_CAVM_I2CX_IC_COMP_TYPE(a) (a)
#define arguments_CAVM_I2CX_IC_COMP_TYPE(a) (a),-1,-1,-1

/**
 * Register (RSL32b) i2c#_ic_comp_version
 *
 * I2C Ic Comp Version Register
 * I2C Component Version Register
 */
union cavm_i2cx_ic_comp_version
{
    uint32_t u;
    struct cavm_i2cx_ic_comp_version_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t ic_comp_version       : 32; /**< [ 31:  0](RO) Specific values for this register are
                                                                 described in the Releases Table in the
                                                                 DW_apb_i2c Release Notes */
#else /* Word 0 - Little Endian */
        uint32_t ic_comp_version       : 32; /**< [ 31:  0](RO) Specific values for this register are
                                                                 described in the Releases Table in the
                                                                 DW_apb_i2c Release Notes */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_i2cx_ic_comp_version_s cn; */
};
typedef union cavm_i2cx_ic_comp_version cavm_i2cx_ic_comp_version_t;

static inline uint64_t CAVM_I2CX_IC_COMP_VERSION(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_I2CX_IC_COMP_VERSION(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CN20KA) && (a<=3))
        return 0xc090100000f8ll + 0x100000000ll * ((a) & 0x3);
    __cavm_csr_fatal("I2CX_IC_COMP_VERSION", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_I2CX_IC_COMP_VERSION(a) cavm_i2cx_ic_comp_version_t
#define bustype_CAVM_I2CX_IC_COMP_VERSION(a) CSR_TYPE_RSL32b
#define basename_CAVM_I2CX_IC_COMP_VERSION(a) "I2CX_IC_COMP_VERSION"
#define device_bar_CAVM_I2CX_IC_COMP_VERSION(a) 0x0 /* PF_BAR0 */
#define busnum_CAVM_I2CX_IC_COMP_VERSION(a) (a)
#define arguments_CAVM_I2CX_IC_COMP_VERSION(a) (a),-1,-1,-1

/**
 * Register (RSL32b) i2c#_ic_con
 *
 * I2C Ic Con Register
 * I2C Control Register.
 *
 * This register can be written only when the DW_apb_i2c
 * is disabled, which corresponds to the IC_ENABLE[0] register
 * being set to 0. Writes at other times have no effect.
 *
 * Read/Write Access:
 *   - If configuration parameter I2C_DYNAMIC_TAR_UPDATE=1, bit 4 is read only.
 *   - If configuration parameter IC_RX_FULL_HLD_BUS_EN =0, bit 9 is read only.
 *   - If configuration parameter IC_STOP_DET_IF_MASTER_ACTIVE =0, bit 10 is read only.
 *   - If configuration parameter IC_BUS_CLEAR_FEATURE=0, bit 11 is read only
 *   - If configuration parameter IC_OPTIONAL_SAR=0, bit 16 is read only
 *   - If configuration parameter IC_SMBUS=0, bit 17 is read only
 *   - If configuration parameter IC_SMBUS_ARP=0, bits 18 and 19 are read only.
 */
union cavm_i2cx_ic_con
{
    uint32_t u;
    struct cavm_i2cx_ic_con_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t rsvd_ic_con_2         : 6;  /**< [ 31: 26](RO) IC_CON_2 Reserved bits - Read Only */
        uint32_t ic_sar4_smbus_arp_en  : 1;  /**< [ 25: 25](R/W) This bit controls whether DW_apb_i2c should enable Address Resolution Logic in
                                                                 SMBus Mode for IC_SAR4 target device Address.
                                                                 The Target mode will decode the Address Resolution Protocol commands and respond to it.
                                                                 The DW_apb_i2c target also includes the generation/validity of PEC byte for
                                                                 Address Resolution Protocol commands.
                                                                 This bit is applicable only in Target mode. */
        uint32_t ic_sar3_smbus_arp_en  : 1;  /**< [ 24: 24](R/W) This bit controls whether DW_apb_i2c should enable Address Resolution Logic in
                                                                 SMBus Mode for IC_SAR3 target device Address.
                                                                 The Target mode will decode the Address Resolution Protocol commands and respond to it.
                                                                 The DW_apb_i2c target also includes the generation/validity of PEC byte for
                                                                 Address Resolution Protocol commands.
                                                                 This bit is applicable only in Target mode. */
        uint32_t ic_sar2_smbus_arp_en  : 1;  /**< [ 23: 23](R/W) This bit controls whether DW_apb_i2c should enable Address Resolution Logic in
                                                                 SMBus Mode for IC_SAR2 target device Address.
                                                                 The Target mode will decode the Address Resolution Protocol commands and respond to it.
                                                                 The DW_apb_i2c target also includes the generation/validity of PEC byte for
                                                                 Address Resolution Protocol commands.

                                                                 This bit is applicable only in Target mode. */
        uint32_t smbus_persistent_slv_addr4_en : 1;/**< [ 22: 22](R/W) The bit controls to enable  DW_apb_i2c target with target device address 4
                                                                 (IC_SAR4) as persistent or non persistent target.

                                                                 If the target is non-PSA then DW_apb_i2c target device clears the Address valid
                                                                 flag for both General
                                                                 and Directed Reset ARP command else the address valid flag will always set to 1.

                                                                 This bit is applicable only in Target mode. */
        uint32_t smbus_persistent_slv_addr3_en : 1;/**< [ 21: 21](R/W) The bit controls to enable  DW_apb_i2c target with target device address 3
                                                                 (IC_SAR3) as persistent or non persistent target.

                                                                 If the target is non-PSA then DW_apb_i2c target device clears the Address valid
                                                                 flag for both General
                                                                 and Directed Reset ARP command else the address valid flag will always set to 1.

                                                                 This bit is applicable only in Target mode. */
        uint32_t smbus_persistent_slv_addr2_en : 1;/**< [ 20: 20](R/W) The bit controls to enable  DW_apb_i2c target with target device address 2
                                                                 (IC_SAR2) as persistent or non persistent target.

                                                                 If the target is non-PSA then DW_apb_i2c target device clears the Address valid
                                                                 flag for both General
                                                                 and Directed Reset ARP command else the address valid flag will always set to 1.

                                                                 This bit is applicable only in Target mode. */
        uint32_t smbus_persistent_slv_addr_en : 1;/**< [ 19: 19](R/W) The bit controls to enable  DW_apb_i2c target as persistent or non persistent target.

                                                                 If the target is non-PSA then DW_apb_i2c target device clears the Address valid
                                                                 flag for both General
                                                                 and Directed Reset ARP command else the address valid flag will always set to 1.

                                                                 This bit is applicable only in Target mode. */
        uint32_t smbus_arp_en          : 1;  /**< [ 18: 18](R/W) This bit controls whether DW_apb_i2c should enable Address Resolution Logic in SMBus Mode.
                                                                 The Target mode will decode the Address Resolution Protocol commands and respond to it.
                                                                 The DW_apb_i2c target also includes the generation/validity of PEC byte for
                                                                 Address Resolution Protocol commands.
                                                                 This bit is applicable only in Target mode. */
        uint32_t smbus_slave_quick_en  : 1;  /**< [ 17: 17](R/W) If this bit is set to 1, DW_apb_i2c target only receives Quick commands in SMBus Mode.

                                                                 If this bit is set to 0, DW_apb_i2c target receives all bus protocols but not Quick commands.

                                                                 This bit is applicable only in target mode. */
        uint32_t rsvd_optional_sar_ctrl : 1; /**< [ 16: 16](RO) OPTIONAL_SAR_CTRL Reserved bits - Read Only */
        uint32_t rsvd_ic_con_1         : 4;  /**< [ 15: 12](RO) IC_CON_1 Reserved bits - Read Only */
        uint32_t bus_clear_feature_ctrl : 1; /**< [ 11: 11](R/W) This bit controls whether the DW_apb_i2c enables the bus clear feature. For more
                                                                 information, refer to sections "Bus Clear Feature" and "SMBus/PMBus". */
        uint32_t stop_det_if_master_active : 1;/**< [ 10: 10](RO) In Controller mode:
                                                                  - 1'b1: issues the STOP_DET interrupt only when controller is active.
                                                                  - 1'b0: issues the STOP_DET irrespective of whether controller is active or not. */
        uint32_t rx_fifo_full_hld_ctrl : 1;  /**< [  9:  9](R/W) This bit controls whether
                                                                 DW_apb_i2c should hold the bus when the Rx FIFO is physically full to its RX_BUFFER_DEPTH,
                                                                 as described in the IC_RX_FULL_HLD_BUS_EN parameter. */
        uint32_t tx_empty_ctrl         : 1;  /**< [  8:  8](R/W) This bit controls the generation
                                                                 of the TX_EMPTY interrupt, as described in the IC_RAW_INTR_STAT register. */
        uint32_t stop_det_ifaddressed  : 1;  /**< [  7:  7](R/W) In target mode:
                                                                  - 1'b1: issues the STOP_DET interrupt only when it is addressed.
                                                                  - 1'b0: issues the STOP_DET irrespective of whether it's addressed or not.

                                                                 Note: During a general call address, this target does not issue the
                                                                 STOP_DET interrupt if STOP_DET_IF_ADDRESSED = 1'b1, even if
                                                                 the target responds to the general call address by generating ACK.
                                                                 The STOP_DET interrupt is generated only when the transmitted
                                                                 address matches the target address (SAR). */
        uint32_t ic_slave_disable      : 1;  /**< [  6:  6](R/W) This bit controls whether I2C has its target disabled,
                                                                 which means once the presetn signal is applied, then
                                                                 this bit takes on the value of the configuration parameter
                                                                 IC_SLAVE_DISABLE. You have the choice of having the target enabled
                                                                 or disabled after reset is applied, which means software does not
                                                                 have to configure the target.

                                                                 If this bit is set (target is disabled), DW_apb_i2c functions only as
                                                                 a controller and does not perform any action that requires a target.

                                                                 Note: Software should ensure that if this bit is written with 0,
                                                                 then bit 0 should also be written with a 0. */
        uint32_t ic_restart_en         : 1;  /**< [  5:  5](R/W) Determines whether RESTART conditions may be sent when
                                                                 acting as a controller. Some older targets do not support handling
                                                                 RESTART conditions; however, RESTART conditions are used in
                                                                 several DW_apb_i2c operations. When RESTART is disabled, the controller is prohibited from
                                                                 performing the following functions:
                                                                  - Sending a START BYTE
                                                                  - Performing any high-speed mode operation
                                                                  - High-speed mode operation
                                                                  - Performing direction changes in combined format mode
                                                                  - Performing a read operation with a 10-bit address
                                                                 By replacing RESTART condition followed by a STOP and a
                                                                 subsequent START condition, split operations are broken down
                                                                 into multiple DW_apb_i2c transfers. If the above operations are
                                                                 performed, it will result in setting bit 6 (TX_ABRT) of the
                                                                 IC_RAW_INTR_STAT register. */
        uint32_t ic_10bitaddr_master_rd_only : 1;/**< [  4:  4](RO) If the I2C_DYNAMIC_TAR_UPDATE configuration parameter is
                                                                 set to 'No' (0), this bit is named IC_10BITADDR_MASTER and
                                                                 controls whether the DW_apb_i2c starts its transfers in 7 or 10-bit
                                                                 addressing mode when acting as a controller.
                                                                 If I2C_DYNAMIC_TAR_UPDATE is set to 'Yes' (1), the
                                                                 function of this bit is handled by bit 12 of IC_TAR register, and
                                                                 becomes a read-only copy called
                                                                 IC_10BITADDR_MASTER_rd_only.

                                                                  - 0: 7-bit addressing
                                                                  - 1: 10-bit addressing */
        uint32_t ic_10bitaddr_slave    : 1;  /**< [  3:  3](R/W) When acting as a target, this bit controls whether the DW_apb_i2c responds to 7-
                                                                 or 10-bit addresses. In SMBus mode only 7-bit addressing mode is supported.
                                                                  - 0: 7-bit addressing. The DW_apb_i2c ignores transactions that involve 10-bit
                                                                 addressing; for 7-bit addressing, only the lower 7 bits of the IC_SAR register
                                                                 are compared.
                                                                  - 1: 10-bit addressing. The DW_apb_i2c responds to only 10-bit addressing
                                                                 transfers that match the full 10 bits of the IC_SAR register. */
        uint32_t speed                 : 2;  /**< [  2:  1](R/W) These bits control at which speed the DW_apb_i2c operates; its
                                                                 setting is relevant only if one is operating the DW_apb_i2c in
                                                                 controller mode. Hardware protects against illegal values being
                                                                 programmed by software. These bits must be programmed
                                                                 appropriately for target mode also, as it is used to capture
                                                                 correct value of spike filter as per the speed mode.

                                                                 This register should be programmed only with a value in the range
                                                                 of 1 to IC_MAX_SPEED_MODE; otherwise, hardware updates this register with the value of
                                                                 IC_MAX_SPEED_MODE.

                                                                 1: standard mode (100 kbit/s)

                                                                 2: fast mode (\<=400 kbit/s) or fast mode plus (\<=1000Kbit/s)

                                                                 3: high speed mode (3.4 Mbit/s)

                                                                 Note: This field is not applicable  when IC_ULTRA_FAST_MODE=1 */
        uint32_t master_mode           : 1;  /**< [  0:  0](R/W) This bit controls whether the DW_apb_i2c controller is enabled.

                                                                 Note: Software should ensure that if this bit is written with '1'
                                                                 then bit 6 should also be written with a '1'. */
#else /* Word 0 - Little Endian */
        uint32_t master_mode           : 1;  /**< [  0:  0](R/W) This bit controls whether the DW_apb_i2c controller is enabled.

                                                                 Note: Software should ensure that if this bit is written with '1'
                                                                 then bit 6 should also be written with a '1'. */
        uint32_t speed                 : 2;  /**< [  2:  1](R/W) These bits control at which speed the DW_apb_i2c operates; its
                                                                 setting is relevant only if one is operating the DW_apb_i2c in
                                                                 controller mode. Hardware protects against illegal values being
                                                                 programmed by software. These bits must be programmed
                                                                 appropriately for target mode also, as it is used to capture
                                                                 correct value of spike filter as per the speed mode.

                                                                 This register should be programmed only with a value in the range
                                                                 of 1 to IC_MAX_SPEED_MODE; otherwise, hardware updates this register with the value of
                                                                 IC_MAX_SPEED_MODE.

                                                                 1: standard mode (100 kbit/s)

                                                                 2: fast mode (\<=400 kbit/s) or fast mode plus (\<=1000Kbit/s)

                                                                 3: high speed mode (3.4 Mbit/s)

                                                                 Note: This field is not applicable  when IC_ULTRA_FAST_MODE=1 */
        uint32_t ic_10bitaddr_slave    : 1;  /**< [  3:  3](R/W) When acting as a target, this bit controls whether the DW_apb_i2c responds to 7-
                                                                 or 10-bit addresses. In SMBus mode only 7-bit addressing mode is supported.
                                                                  - 0: 7-bit addressing. The DW_apb_i2c ignores transactions that involve 10-bit
                                                                 addressing; for 7-bit addressing, only the lower 7 bits of the IC_SAR register
                                                                 are compared.
                                                                  - 1: 10-bit addressing. The DW_apb_i2c responds to only 10-bit addressing
                                                                 transfers that match the full 10 bits of the IC_SAR register. */
        uint32_t ic_10bitaddr_master_rd_only : 1;/**< [  4:  4](RO) If the I2C_DYNAMIC_TAR_UPDATE configuration parameter is
                                                                 set to 'No' (0), this bit is named IC_10BITADDR_MASTER and
                                                                 controls whether the DW_apb_i2c starts its transfers in 7 or 10-bit
                                                                 addressing mode when acting as a controller.
                                                                 If I2C_DYNAMIC_TAR_UPDATE is set to 'Yes' (1), the
                                                                 function of this bit is handled by bit 12 of IC_TAR register, and
                                                                 becomes a read-only copy called
                                                                 IC_10BITADDR_MASTER_rd_only.

                                                                  - 0: 7-bit addressing
                                                                  - 1: 10-bit addressing */
        uint32_t ic_restart_en         : 1;  /**< [  5:  5](R/W) Determines whether RESTART conditions may be sent when
                                                                 acting as a controller. Some older targets do not support handling
                                                                 RESTART conditions; however, RESTART conditions are used in
                                                                 several DW_apb_i2c operations. When RESTART is disabled, the controller is prohibited from
                                                                 performing the following functions:
                                                                  - Sending a START BYTE
                                                                  - Performing any high-speed mode operation
                                                                  - High-speed mode operation
                                                                  - Performing direction changes in combined format mode
                                                                  - Performing a read operation with a 10-bit address
                                                                 By replacing RESTART condition followed by a STOP and a
                                                                 subsequent START condition, split operations are broken down
                                                                 into multiple DW_apb_i2c transfers. If the above operations are
                                                                 performed, it will result in setting bit 6 (TX_ABRT) of the
                                                                 IC_RAW_INTR_STAT register. */
        uint32_t ic_slave_disable      : 1;  /**< [  6:  6](R/W) This bit controls whether I2C has its target disabled,
                                                                 which means once the presetn signal is applied, then
                                                                 this bit takes on the value of the configuration parameter
                                                                 IC_SLAVE_DISABLE. You have the choice of having the target enabled
                                                                 or disabled after reset is applied, which means software does not
                                                                 have to configure the target.

                                                                 If this bit is set (target is disabled), DW_apb_i2c functions only as
                                                                 a controller and does not perform any action that requires a target.

                                                                 Note: Software should ensure that if this bit is written with 0,
                                                                 then bit 0 should also be written with a 0. */
        uint32_t stop_det_ifaddressed  : 1;  /**< [  7:  7](R/W) In target mode:
                                                                  - 1'b1: issues the STOP_DET interrupt only when it is addressed.
                                                                  - 1'b0: issues the STOP_DET irrespective of whether it's addressed or not.

                                                                 Note: During a general call address, this target does not issue the
                                                                 STOP_DET interrupt if STOP_DET_IF_ADDRESSED = 1'b1, even if
                                                                 the target responds to the general call address by generating ACK.
                                                                 The STOP_DET interrupt is generated only when the transmitted
                                                                 address matches the target address (SAR). */
        uint32_t tx_empty_ctrl         : 1;  /**< [  8:  8](R/W) This bit controls the generation
                                                                 of the TX_EMPTY interrupt, as described in the IC_RAW_INTR_STAT register. */
        uint32_t rx_fifo_full_hld_ctrl : 1;  /**< [  9:  9](R/W) This bit controls whether
                                                                 DW_apb_i2c should hold the bus when the Rx FIFO is physically full to its RX_BUFFER_DEPTH,
                                                                 as described in the IC_RX_FULL_HLD_BUS_EN parameter. */
        uint32_t stop_det_if_master_active : 1;/**< [ 10: 10](RO) In Controller mode:
                                                                  - 1'b1: issues the STOP_DET interrupt only when controller is active.
                                                                  - 1'b0: issues the STOP_DET irrespective of whether controller is active or not. */
        uint32_t bus_clear_feature_ctrl : 1; /**< [ 11: 11](R/W) This bit controls whether the DW_apb_i2c enables the bus clear feature. For more
                                                                 information, refer to sections "Bus Clear Feature" and "SMBus/PMBus". */
        uint32_t rsvd_ic_con_1         : 4;  /**< [ 15: 12](RO) IC_CON_1 Reserved bits - Read Only */
        uint32_t rsvd_optional_sar_ctrl : 1; /**< [ 16: 16](RO) OPTIONAL_SAR_CTRL Reserved bits - Read Only */
        uint32_t smbus_slave_quick_en  : 1;  /**< [ 17: 17](R/W) If this bit is set to 1, DW_apb_i2c target only receives Quick commands in SMBus Mode.

                                                                 If this bit is set to 0, DW_apb_i2c target receives all bus protocols but not Quick commands.

                                                                 This bit is applicable only in target mode. */
        uint32_t smbus_arp_en          : 1;  /**< [ 18: 18](R/W) This bit controls whether DW_apb_i2c should enable Address Resolution Logic in SMBus Mode.
                                                                 The Target mode will decode the Address Resolution Protocol commands and respond to it.
                                                                 The DW_apb_i2c target also includes the generation/validity of PEC byte for
                                                                 Address Resolution Protocol commands.
                                                                 This bit is applicable only in Target mode. */
        uint32_t smbus_persistent_slv_addr_en : 1;/**< [ 19: 19](R/W) The bit controls to enable  DW_apb_i2c target as persistent or non persistent target.

                                                                 If the target is non-PSA then DW_apb_i2c target device clears the Address valid
                                                                 flag for both General
                                                                 and Directed Reset ARP command else the address valid flag will always set to 1.

                                                                 This bit is applicable only in Target mode. */
        uint32_t smbus_persistent_slv_addr2_en : 1;/**< [ 20: 20](R/W) The bit controls to enable  DW_apb_i2c target with target device address 2
                                                                 (IC_SAR2) as persistent or non persistent target.

                                                                 If the target is non-PSA then DW_apb_i2c target device clears the Address valid
                                                                 flag for both General
                                                                 and Directed Reset ARP command else the address valid flag will always set to 1.

                                                                 This bit is applicable only in Target mode. */
        uint32_t smbus_persistent_slv_addr3_en : 1;/**< [ 21: 21](R/W) The bit controls to enable  DW_apb_i2c target with target device address 3
                                                                 (IC_SAR3) as persistent or non persistent target.

                                                                 If the target is non-PSA then DW_apb_i2c target device clears the Address valid
                                                                 flag for both General
                                                                 and Directed Reset ARP command else the address valid flag will always set to 1.

                                                                 This bit is applicable only in Target mode. */
        uint32_t smbus_persistent_slv_addr4_en : 1;/**< [ 22: 22](R/W) The bit controls to enable  DW_apb_i2c target with target device address 4
                                                                 (IC_SAR4) as persistent or non persistent target.

                                                                 If the target is non-PSA then DW_apb_i2c target device clears the Address valid
                                                                 flag for both General
                                                                 and Directed Reset ARP command else the address valid flag will always set to 1.

                                                                 This bit is applicable only in Target mode. */
        uint32_t ic_sar2_smbus_arp_en  : 1;  /**< [ 23: 23](R/W) This bit controls whether DW_apb_i2c should enable Address Resolution Logic in
                                                                 SMBus Mode for IC_SAR2 target device Address.
                                                                 The Target mode will decode the Address Resolution Protocol commands and respond to it.
                                                                 The DW_apb_i2c target also includes the generation/validity of PEC byte for
                                                                 Address Resolution Protocol commands.

                                                                 This bit is applicable only in Target mode. */
        uint32_t ic_sar3_smbus_arp_en  : 1;  /**< [ 24: 24](R/W) This bit controls whether DW_apb_i2c should enable Address Resolution Logic in
                                                                 SMBus Mode for IC_SAR3 target device Address.
                                                                 The Target mode will decode the Address Resolution Protocol commands and respond to it.
                                                                 The DW_apb_i2c target also includes the generation/validity of PEC byte for
                                                                 Address Resolution Protocol commands.
                                                                 This bit is applicable only in Target mode. */
        uint32_t ic_sar4_smbus_arp_en  : 1;  /**< [ 25: 25](R/W) This bit controls whether DW_apb_i2c should enable Address Resolution Logic in
                                                                 SMBus Mode for IC_SAR4 target device Address.
                                                                 The Target mode will decode the Address Resolution Protocol commands and respond to it.
                                                                 The DW_apb_i2c target also includes the generation/validity of PEC byte for
                                                                 Address Resolution Protocol commands.
                                                                 This bit is applicable only in Target mode. */
        uint32_t rsvd_ic_con_2         : 6;  /**< [ 31: 26](RO) IC_CON_2 Reserved bits - Read Only */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_i2cx_ic_con_s cn; */
};
typedef union cavm_i2cx_ic_con cavm_i2cx_ic_con_t;

static inline uint64_t CAVM_I2CX_IC_CON(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_I2CX_IC_CON(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CN20KA) && (a<=3))
        return 0xc09010000000ll + 0x100000000ll * ((a) & 0x3);
    __cavm_csr_fatal("I2CX_IC_CON", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_I2CX_IC_CON(a) cavm_i2cx_ic_con_t
#define bustype_CAVM_I2CX_IC_CON(a) CSR_TYPE_RSL32b
#define basename_CAVM_I2CX_IC_CON(a) "I2CX_IC_CON"
#define device_bar_CAVM_I2CX_IC_CON(a) 0x0 /* PF_BAR0 */
#define busnum_CAVM_I2CX_IC_CON(a) (a)
#define arguments_CAVM_I2CX_IC_CON(a) (a),-1,-1,-1

/**
 * Register (RSL32b) i2c#_ic_data_cmd
 *
 * I2C Ic Data Cmd Register
 * I2C Rx/Tx Data Buffer and Command Register; this is the register the CPU writes to
 * when filling the TX FIFO and the CPU reads from when retrieving bytes from RX FIFO.
 *
 * Active bits of this registers are as follows:
 *
 * Write:
 *  - 10:0 bits when IC_EMPTYFIFO_HOLD_MASTER_EN=1
 *  - 8:0 bits when IC_EMPTYFIFO_HOLD_MASTER_EN=0
 * Read:
 *  - 11:0 bits when IC_FIRST_DATA_BYTE_STATUS = 1
 *  - 7:0 bits when IC_FIRST_DATA_BYTE_STATUS = 0
 * Note: In order for the DW_apb_i2c to continue acknowledging reads, a read command should be
 * written for every byte that is to be received; otherwise the DW_apb_i2c will stop
 * acknowledging.
 */
union cavm_i2cx_ic_data_cmd
{
    uint32_t u;
    struct cavm_i2cx_ic_data_cmd_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t rsvd_ic_data_cmd      : 20; /**< [ 31: 12](RO) IC_DATA_CMD Reserved bits - Read Only */
        uint32_t first_data_byte       : 1;  /**< [ 11: 11](RO) Indicates the first data byte
                                                                 received after the address phase for receive transfer in Controller receiver or
                                                                 Target receiver mode.

                                                                 Note: In case of APB_DATA_WIDTH=8,
                                                                  - The user has to perform two APB Reads to IC_DATA_CMD in order to get status on 11 bit.
                                                                  - In order to read the 11 bit, the user has to perform the first data byte read
                                                                 [7:0] (offset 0x10) and then perform the second read[15:8](offset 0x11)  in
                                                                 order to know the status of 11 bit (whether the data received in previous read
                                                                 is a first data byte or not).
                                                                  - The 11th bit is an optional read field, user can ignore 2nd byte read [15:8]
                                                                 (offset 0x11) if not interested in FIRST_DATA_BYTE status. */
        uint32_t restart               : 1;  /**< [ 10: 10](WO) This bit controls whether a RESTART is issued before the byte is sent or received.
                                                                 This bit is available only if IC_EMPTYFIFO_HOLD_MASTER_EN is configured to 1.

                                                                  - 1: If IC_RESTART_EN is 1, a RESTART is issued before the data is
                                                                 sent/received (according to the value of CMD), regardless of whether or not the
                                                                 transfer direction is changing from the previous command; if IC_RESTART_EN is 0,
                                                                 a STOP followed by a START is issued instead.
                                                                  - 0: If IC_RESTART_EN is 1, a RESTART is issued only if the transfer direction
                                                                 is changing from the previous command; if IC_RESTART_EN is 0, a STOP followed by
                                                                 a START is issued instead. */
        uint32_t stop                  : 1;  /**< [  9:  9](WO) This bit controls whether a STOP is issued after the byte is sent or received.
                                                                 This bit is available only if IC_EMPTYFIFO_HOLD_MASTER_EN is configured to 1.
                                                                  - 1 - STOP is issued after this byte, regardless of whether or not the Tx FIFO
                                                                 is empty. If the Tx FIFO is not empty, the controller immediately tries to start
                                                                 a new transfer by issuing a START and arbitrating for the bus.
                                                                  - 0 - STOP is not issued after this byte, regardless of whether or not the Tx
                                                                 FIFO is empty. If the Tx FIFO is not empty, the controller continues the current
                                                                 transfer by sending/receiving data bytes according to the value of the CMD bit.
                                                                 If the Tx FIFO is empty, the controller holds the SCL line low and stalls the
                                                                 bus until a new command is available in the Tx FIFO. */
        uint32_t cmd                   : 1;  /**< [  8:  8](WO) This bit controls whether a read or a write is performed.
                                                                 This bit does not control the direction when the DW_apb_i2c
                                                                 acts as a target. It controls only the direction
                                                                 when it acts as a controller.

                                                                 When a command is entered in the TX FIFO, this bit distinguishes the write
                                                                 and read commands. In target-receiver mode, this bit is a "don't care"
                                                                 because writes to this register are not required. In target-transmitter mode, a
                                                                 "0" indicates that the data in IC_DATA_CMD is to be transmitted.

                                                                 When programming this bit, you should remember the following:
                                                                  - Attempting to perform a read operation after a General Call command has been
                                                                 sent results in a TX_ABRT interrupt (bit 6 of the IC_RAW_INTR_STAT register),
                                                                 unless bit 11 (SPECIAL) in the IC_TAR register has been cleared.
                                                                  - If a "1" is written to this bit after receiving a RD_REQ interrupt, then a
                                                                 TX_ABRT interrupt occurs. */
        uint32_t dat                   : 8;  /**< [  7:  0](R/W) This register contains the data to be transmitted or received on the I2C bus.
                                                                 If you are writing to this register and want to perform a read,
                                                                 bits 7:0 (DAT) are ignored by the DW_apb_i2c. However, when you read
                                                                 this register, these bits return the value of data received on the
                                                                 DW_apb_i2c interface. */
#else /* Word 0 - Little Endian */
        uint32_t dat                   : 8;  /**< [  7:  0](R/W) This register contains the data to be transmitted or received on the I2C bus.
                                                                 If you are writing to this register and want to perform a read,
                                                                 bits 7:0 (DAT) are ignored by the DW_apb_i2c. However, when you read
                                                                 this register, these bits return the value of data received on the
                                                                 DW_apb_i2c interface. */
        uint32_t cmd                   : 1;  /**< [  8:  8](WO) This bit controls whether a read or a write is performed.
                                                                 This bit does not control the direction when the DW_apb_i2c
                                                                 acts as a target. It controls only the direction
                                                                 when it acts as a controller.

                                                                 When a command is entered in the TX FIFO, this bit distinguishes the write
                                                                 and read commands. In target-receiver mode, this bit is a "don't care"
                                                                 because writes to this register are not required. In target-transmitter mode, a
                                                                 "0" indicates that the data in IC_DATA_CMD is to be transmitted.

                                                                 When programming this bit, you should remember the following:
                                                                  - Attempting to perform a read operation after a General Call command has been
                                                                 sent results in a TX_ABRT interrupt (bit 6 of the IC_RAW_INTR_STAT register),
                                                                 unless bit 11 (SPECIAL) in the IC_TAR register has been cleared.
                                                                  - If a "1" is written to this bit after receiving a RD_REQ interrupt, then a
                                                                 TX_ABRT interrupt occurs. */
        uint32_t stop                  : 1;  /**< [  9:  9](WO) This bit controls whether a STOP is issued after the byte is sent or received.
                                                                 This bit is available only if IC_EMPTYFIFO_HOLD_MASTER_EN is configured to 1.
                                                                  - 1 - STOP is issued after this byte, regardless of whether or not the Tx FIFO
                                                                 is empty. If the Tx FIFO is not empty, the controller immediately tries to start
                                                                 a new transfer by issuing a START and arbitrating for the bus.
                                                                  - 0 - STOP is not issued after this byte, regardless of whether or not the Tx
                                                                 FIFO is empty. If the Tx FIFO is not empty, the controller continues the current
                                                                 transfer by sending/receiving data bytes according to the value of the CMD bit.
                                                                 If the Tx FIFO is empty, the controller holds the SCL line low and stalls the
                                                                 bus until a new command is available in the Tx FIFO. */
        uint32_t restart               : 1;  /**< [ 10: 10](WO) This bit controls whether a RESTART is issued before the byte is sent or received.
                                                                 This bit is available only if IC_EMPTYFIFO_HOLD_MASTER_EN is configured to 1.

                                                                  - 1: If IC_RESTART_EN is 1, a RESTART is issued before the data is
                                                                 sent/received (according to the value of CMD), regardless of whether or not the
                                                                 transfer direction is changing from the previous command; if IC_RESTART_EN is 0,
                                                                 a STOP followed by a START is issued instead.
                                                                  - 0: If IC_RESTART_EN is 1, a RESTART is issued only if the transfer direction
                                                                 is changing from the previous command; if IC_RESTART_EN is 0, a STOP followed by
                                                                 a START is issued instead. */
        uint32_t first_data_byte       : 1;  /**< [ 11: 11](RO) Indicates the first data byte
                                                                 received after the address phase for receive transfer in Controller receiver or
                                                                 Target receiver mode.

                                                                 Note: In case of APB_DATA_WIDTH=8,
                                                                  - The user has to perform two APB Reads to IC_DATA_CMD in order to get status on 11 bit.
                                                                  - In order to read the 11 bit, the user has to perform the first data byte read
                                                                 [7:0] (offset 0x10) and then perform the second read[15:8](offset 0x11)  in
                                                                 order to know the status of 11 bit (whether the data received in previous read
                                                                 is a first data byte or not).
                                                                  - The 11th bit is an optional read field, user can ignore 2nd byte read [15:8]
                                                                 (offset 0x11) if not interested in FIRST_DATA_BYTE status. */
        uint32_t rsvd_ic_data_cmd      : 20; /**< [ 31: 12](RO) IC_DATA_CMD Reserved bits - Read Only */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_i2cx_ic_data_cmd_s cn; */
};
typedef union cavm_i2cx_ic_data_cmd cavm_i2cx_ic_data_cmd_t;

static inline uint64_t CAVM_I2CX_IC_DATA_CMD(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_I2CX_IC_DATA_CMD(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CN20KA) && (a<=3))
        return 0xc09010000010ll + 0x100000000ll * ((a) & 0x3);
    __cavm_csr_fatal("I2CX_IC_DATA_CMD", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_I2CX_IC_DATA_CMD(a) cavm_i2cx_ic_data_cmd_t
#define bustype_CAVM_I2CX_IC_DATA_CMD(a) CSR_TYPE_RSL32b
#define basename_CAVM_I2CX_IC_DATA_CMD(a) "I2CX_IC_DATA_CMD"
#define device_bar_CAVM_I2CX_IC_DATA_CMD(a) 0x0 /* PF_BAR0 */
#define busnum_CAVM_I2CX_IC_DATA_CMD(a) (a)
#define arguments_CAVM_I2CX_IC_DATA_CMD(a) (a),-1,-1,-1

/**
 * Register (RSL32b) i2c#_ic_enable
 *
 * I2C Ic Enable Register
 * I2C Enable Register
 */
union cavm_i2cx_ic_enable
{
    uint32_t u;
    struct cavm_i2cx_ic_enable_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t rsvd_ic_enable_2      : 6;  /**< [ 31: 26](RO) IC_ENABLE Reserved bits - Read Only */
        uint32_t ic_sar4_smbus_alert_en : 1; /**< [ 25: 25](R/W) This register bit is used to control assertion of SMBALERT signal for IC_SAR4
                                                                 Target Device Address.

                                                                 This register bit is auto-cleared after detection of Acknowledgment from
                                                                 controller for Alert Response address. */
        uint32_t ic_sar3_smbus_alert_en : 1; /**< [ 24: 24](R/W) This register bit is used to control assertion of SMBALERT signal for IC_SAR3
                                                                 Target Device Address.

                                                                 This register bit is auto-cleared after detection of Acknowledgment from
                                                                 controller for Alert Response address. */
        uint32_t ic_sar2_smbus_alert_en : 1; /**< [ 23: 23](R/W) This register bit is used to control assertion of SMBALERT signal for IC_SAR2
                                                                 Target Device Address.

                                                                 This register bit is auto-cleared after detection of Acknowledgment from
                                                                 controller for Alert Response address. */
        uint32_t ic_sar4_en            : 1;  /**< [ 22: 22](R/W) Controls whether the DW_apb_i2c SAR4 is enabled.

                                                                  If IC_SAR4_EN bit of the IC_ENABLE register is set to 1, then the DW_apb_i2c
                                                                 will acknowledge the address if it
                                                                  corresponds to IC_SAR4 and completes the I2C transfers as intended.
                                                                 Otherwise, the I2C transfer address will be
                                                                  Nacked.

                                                                 Note: This field needs to be updated only when IC_ENABLE[0] is 0. */
        uint32_t ic_sar3_en            : 1;  /**< [ 21: 21](R/W) Controls whether the DW_apb_i2c SAR3 is enabled.

                                                                  If IC_SAR3_EN bit of the IC_ENABLE register is set to 1, then the DW_apb_i2c
                                                                 will acknowledge the address if it
                                                                  corresponds to IC_SAR3 and completes the I2C transfers as intended.
                                                                 Otherwise, the I2C transfer address will be
                                                                  Nacked.

                                                                 Note: This field needs to be updated only when IC_ENABLE[0] is 0. */
        uint32_t ic_sar2_en            : 1;  /**< [ 20: 20](R/W) Controls whether the DW_apb_i2c SAR2 is enabled.

                                                                  If IC_SAR2_EN bit of the IC_ENABLE register is set to 1, then the DW_apb_i2c
                                                                 will acknowledge the address if it
                                                                  corresponds to IC_SAR2 and completes the I2C transfers as intended.
                                                                 Otherwise, the I2C transfer address will be
                                                                  Nacked.

                                                                 Note: This field needs to be updated only when IC_ENABLE[0] is 0. */
        uint32_t ic_sar_en             : 1;  /**< [ 19: 19](R/W) Controls whether the DW_apb_i2c SAR is enabled.

                                                                  If IC_SAR_EN bit of the IC_ENABLE register is set to 1, then the DW_apb_i2c
                                                                 will acknowledge the address if it
                                                                  corresponds to IC_SAR and completes the I2C transfers as intended.
                                                                 Otherwise, the I2C transfer address will be
                                                                  Nacked.

                                                                 Note: This field needs to be updated only when IC_ENABLE[0] is 0. */
        uint32_t smbus_alert_en        : 1;  /**< [ 18: 18](R/W) This register bit is used to control assertion of SMBALERT signal for IC_SAR target device address.

                                                                 This register bit is auto-cleared after detection of Acknowledgment from
                                                                 controller for Alert Response address. */
        uint32_t smbus_suspend_en      : 1;  /**< [ 17: 17](R/W) The SMBUS_SUSPEND_EN register bit is used to control assertion and de-assertion of SMBSUS signal.
                                                                  - 0: De-assert SMBSUS signal
                                                                  - 1: Assert SMBSUS signal */
        uint32_t smbus_clk_reset       : 1;  /**< [ 16: 16](R/W) This bit is used in SMBus Host mode to initiate the SMBus Controller Clock Reset.
                                                                 This bit should be enabled only when Controller is in idle. Whenever this bit is enabled,
                                                                 the SMBCLK is held low for the IC_SCL_STUCK_TIMEOUT ic_clk cycles to reset the
                                                                 SMBus target devices. */
        uint32_t rsvd_ic_enable_1      : 12; /**< [ 15:  4](RO) RSVD_IC_ENABLE_1 Reserved bits - Read Only */
        uint32_t sda_stuck_recovery_enable : 1;/**< [  3:  3](R/W) If SDA is stuck at low indicated through the TX_ABORT interrupt
                                                                 (IC_TX_ABRT_SOURCE[17]), then this bit is used as a control knob to initiate
                                                                 the SDA Recovery Mechanism (that is, send at most 9 SCL clocks and STOP
                                                                 to release the SDA line) and then this bit gets auto clear */
        uint32_t tx_cmd_block          : 1;  /**< [  2:  2](R/W) In Controller mode:
                                                                  - 1'b1: Blocks the transmission of data on I2C bus even if Tx FIFO has data to transmit.
                                                                  - 1'b0: The transmission of data starts on I2C bus automatically, as soon as
                                                                 the first data is available in the Tx FIFO.
                                                                 Note: To block the execution of Controller commands,
                                                                 set the TX_CMD_BLOCK bit only when  Tx FIFO is empty (IC_STATUS[2]==1) and
                                                                 Controller is in Idle state (IC_STATUS[5] == 0).
                                                                 Any further commands put in the Tx FIFO are not executed until TX_CMD_BLOCK bit is unset. */
        uint32_t abrt                  : 1;  /**< [  1:  1](R/W) When set, the controller initiates the transfer terminate.
                                                                  - 0: terminate not initiated or terminate done
                                                                  - 1: terminate operation in progress
                                                                 The software can terminate the I2C transfer in controller mode by setting this bit. The software
                                                                 can set this bit only when ENABLE is already set; otherwise, the controller ignores any
                                                                 write to ABORT bit. The software cannot clear the ABORT bit once set. In response to
                                                                 an terminate, the controller issues a STOP and flushes the Tx FIFO after completing the
                                                                 current transfer, then sets the TX_ABORT interrupt after the terminate operation. The
                                                                 ABORT bit is cleared automatically after the terminate operation.

                                                                 For a detailed description on how to terminate I2C transfers, refer to "Terminating I2C Transfers". */
        uint32_t enable                : 1;  /**< [  0:  0](R/W) Controls whether the DW_apb_i2c is enabled.
                                                                  - 0: Disables DW_apb_i2c (TX and RX FIFOs are held in an erased state)
                                                                  - 1: Enables DW_apb_i2c
                                                                 Software can disable DW_apb_i2c while it is active.
                                                                 However, it is important that care be taken to ensure
                                                                 that DW_apb_i2c is disabled properly. A recommended procedure is
                                                                 described in "Disabling DW_apb_i2c".

                                                                 When DW_apb_i2c is disabled, the following occurs:
                                                                  - The TX FIFO and RX FIFO get flushed.
                                                                  - Status bits in the IC_INTR_STAT register are still active until DW_apb_i2c goes into IDLE state.
                                                                 If the module is transmitting, it stops as well as deletes
                                                                 the contents of the transmit buffer after the current transfer
                                                                 is complete. If the module is receiving, the DW_apb_i2c stops
                                                                 the current transfer at the end of the current transfer and does not
                                                                 acknowledge the transfer.

                                                                 In systems with asynchronous pclk and ic_clk when IC_CLK_TYPE
                                                                 parameter set to asynchronous (1), there is a two ic_clk delay
                                                                 when enabling or disabling the DW_apb_i2c.
                                                                 For a detailed description on how to disable DW_apb_i2c, refer to "Disabling
                                                                 DW_apb_i2c" */
#else /* Word 0 - Little Endian */
        uint32_t enable                : 1;  /**< [  0:  0](R/W) Controls whether the DW_apb_i2c is enabled.
                                                                  - 0: Disables DW_apb_i2c (TX and RX FIFOs are held in an erased state)
                                                                  - 1: Enables DW_apb_i2c
                                                                 Software can disable DW_apb_i2c while it is active.
                                                                 However, it is important that care be taken to ensure
                                                                 that DW_apb_i2c is disabled properly. A recommended procedure is
                                                                 described in "Disabling DW_apb_i2c".

                                                                 When DW_apb_i2c is disabled, the following occurs:
                                                                  - The TX FIFO and RX FIFO get flushed.
                                                                  - Status bits in the IC_INTR_STAT register are still active until DW_apb_i2c goes into IDLE state.
                                                                 If the module is transmitting, it stops as well as deletes
                                                                 the contents of the transmit buffer after the current transfer
                                                                 is complete. If the module is receiving, the DW_apb_i2c stops
                                                                 the current transfer at the end of the current transfer and does not
                                                                 acknowledge the transfer.

                                                                 In systems with asynchronous pclk and ic_clk when IC_CLK_TYPE
                                                                 parameter set to asynchronous (1), there is a two ic_clk delay
                                                                 when enabling or disabling the DW_apb_i2c.
                                                                 For a detailed description on how to disable DW_apb_i2c, refer to "Disabling
                                                                 DW_apb_i2c" */
        uint32_t abrt                  : 1;  /**< [  1:  1](R/W) When set, the controller initiates the transfer terminate.
                                                                  - 0: terminate not initiated or terminate done
                                                                  - 1: terminate operation in progress
                                                                 The software can terminate the I2C transfer in controller mode by setting this bit. The software
                                                                 can set this bit only when ENABLE is already set; otherwise, the controller ignores any
                                                                 write to ABORT bit. The software cannot clear the ABORT bit once set. In response to
                                                                 an terminate, the controller issues a STOP and flushes the Tx FIFO after completing the
                                                                 current transfer, then sets the TX_ABORT interrupt after the terminate operation. The
                                                                 ABORT bit is cleared automatically after the terminate operation.

                                                                 For a detailed description on how to terminate I2C transfers, refer to "Terminating I2C Transfers". */
        uint32_t tx_cmd_block          : 1;  /**< [  2:  2](R/W) In Controller mode:
                                                                  - 1'b1: Blocks the transmission of data on I2C bus even if Tx FIFO has data to transmit.
                                                                  - 1'b0: The transmission of data starts on I2C bus automatically, as soon as
                                                                 the first data is available in the Tx FIFO.
                                                                 Note: To block the execution of Controller commands,
                                                                 set the TX_CMD_BLOCK bit only when  Tx FIFO is empty (IC_STATUS[2]==1) and
                                                                 Controller is in Idle state (IC_STATUS[5] == 0).
                                                                 Any further commands put in the Tx FIFO are not executed until TX_CMD_BLOCK bit is unset. */
        uint32_t sda_stuck_recovery_enable : 1;/**< [  3:  3](R/W) If SDA is stuck at low indicated through the TX_ABORT interrupt
                                                                 (IC_TX_ABRT_SOURCE[17]), then this bit is used as a control knob to initiate
                                                                 the SDA Recovery Mechanism (that is, send at most 9 SCL clocks and STOP
                                                                 to release the SDA line) and then this bit gets auto clear */
        uint32_t rsvd_ic_enable_1      : 12; /**< [ 15:  4](RO) RSVD_IC_ENABLE_1 Reserved bits - Read Only */
        uint32_t smbus_clk_reset       : 1;  /**< [ 16: 16](R/W) This bit is used in SMBus Host mode to initiate the SMBus Controller Clock Reset.
                                                                 This bit should be enabled only when Controller is in idle. Whenever this bit is enabled,
                                                                 the SMBCLK is held low for the IC_SCL_STUCK_TIMEOUT ic_clk cycles to reset the
                                                                 SMBus target devices. */
        uint32_t smbus_suspend_en      : 1;  /**< [ 17: 17](R/W) The SMBUS_SUSPEND_EN register bit is used to control assertion and de-assertion of SMBSUS signal.
                                                                  - 0: De-assert SMBSUS signal
                                                                  - 1: Assert SMBSUS signal */
        uint32_t smbus_alert_en        : 1;  /**< [ 18: 18](R/W) This register bit is used to control assertion of SMBALERT signal for IC_SAR target device address.

                                                                 This register bit is auto-cleared after detection of Acknowledgment from
                                                                 controller for Alert Response address. */
        uint32_t ic_sar_en             : 1;  /**< [ 19: 19](R/W) Controls whether the DW_apb_i2c SAR is enabled.

                                                                  If IC_SAR_EN bit of the IC_ENABLE register is set to 1, then the DW_apb_i2c
                                                                 will acknowledge the address if it
                                                                  corresponds to IC_SAR and completes the I2C transfers as intended.
                                                                 Otherwise, the I2C transfer address will be
                                                                  Nacked.

                                                                 Note: This field needs to be updated only when IC_ENABLE[0] is 0. */
        uint32_t ic_sar2_en            : 1;  /**< [ 20: 20](R/W) Controls whether the DW_apb_i2c SAR2 is enabled.

                                                                  If IC_SAR2_EN bit of the IC_ENABLE register is set to 1, then the DW_apb_i2c
                                                                 will acknowledge the address if it
                                                                  corresponds to IC_SAR2 and completes the I2C transfers as intended.
                                                                 Otherwise, the I2C transfer address will be
                                                                  Nacked.

                                                                 Note: This field needs to be updated only when IC_ENABLE[0] is 0. */
        uint32_t ic_sar3_en            : 1;  /**< [ 21: 21](R/W) Controls whether the DW_apb_i2c SAR3 is enabled.

                                                                  If IC_SAR3_EN bit of the IC_ENABLE register is set to 1, then the DW_apb_i2c
                                                                 will acknowledge the address if it
                                                                  corresponds to IC_SAR3 and completes the I2C transfers as intended.
                                                                 Otherwise, the I2C transfer address will be
                                                                  Nacked.

                                                                 Note: This field needs to be updated only when IC_ENABLE[0] is 0. */
        uint32_t ic_sar4_en            : 1;  /**< [ 22: 22](R/W) Controls whether the DW_apb_i2c SAR4 is enabled.

                                                                  If IC_SAR4_EN bit of the IC_ENABLE register is set to 1, then the DW_apb_i2c
                                                                 will acknowledge the address if it
                                                                  corresponds to IC_SAR4 and completes the I2C transfers as intended.
                                                                 Otherwise, the I2C transfer address will be
                                                                  Nacked.

                                                                 Note: This field needs to be updated only when IC_ENABLE[0] is 0. */
        uint32_t ic_sar2_smbus_alert_en : 1; /**< [ 23: 23](R/W) This register bit is used to control assertion of SMBALERT signal for IC_SAR2
                                                                 Target Device Address.

                                                                 This register bit is auto-cleared after detection of Acknowledgment from
                                                                 controller for Alert Response address. */
        uint32_t ic_sar3_smbus_alert_en : 1; /**< [ 24: 24](R/W) This register bit is used to control assertion of SMBALERT signal for IC_SAR3
                                                                 Target Device Address.

                                                                 This register bit is auto-cleared after detection of Acknowledgment from
                                                                 controller for Alert Response address. */
        uint32_t ic_sar4_smbus_alert_en : 1; /**< [ 25: 25](R/W) This register bit is used to control assertion of SMBALERT signal for IC_SAR4
                                                                 Target Device Address.

                                                                 This register bit is auto-cleared after detection of Acknowledgment from
                                                                 controller for Alert Response address. */
        uint32_t rsvd_ic_enable_2      : 6;  /**< [ 31: 26](RO) IC_ENABLE Reserved bits - Read Only */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_i2cx_ic_enable_s cn; */
};
typedef union cavm_i2cx_ic_enable cavm_i2cx_ic_enable_t;

static inline uint64_t CAVM_I2CX_IC_ENABLE(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_I2CX_IC_ENABLE(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CN20KA) && (a<=3))
        return 0xc0901000006cll + 0x100000000ll * ((a) & 0x3);
    __cavm_csr_fatal("I2CX_IC_ENABLE", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_I2CX_IC_ENABLE(a) cavm_i2cx_ic_enable_t
#define bustype_CAVM_I2CX_IC_ENABLE(a) CSR_TYPE_RSL32b
#define basename_CAVM_I2CX_IC_ENABLE(a) "I2CX_IC_ENABLE"
#define device_bar_CAVM_I2CX_IC_ENABLE(a) 0x0 /* PF_BAR0 */
#define busnum_CAVM_I2CX_IC_ENABLE(a) (a)
#define arguments_CAVM_I2CX_IC_ENABLE(a) (a),-1,-1,-1

/**
 * Register (RSL32b) i2c#_ic_enable_status
 *
 * I2C Ic Enable Status Register
 * I2C Enable Status Register.
 *
 * The register is used to report the DW_apb_i2c hardware
 * status when the IC_ENABLE[0] register is set from 1 to 0;
 * that is, when DW_apb_i2c is disabled.
 *
 * If IC_ENABLE[0] has been set to 1, bits 2:1 are forced to 0,
 * and bit 0 is forced to 1.
 *
 * If IC_ENABLE[0] has been set to 0, bits 2:1 is only be valid
 * as soon as bit 0 is read as '0'.
 *
 * Note:
 * When IC_ENABLE[0] has been set to 0, a delay occurs for bit 0 to be read as 0 because
 * disabling the DW_apb_i2c depends on I2C bus activities.
 */
union cavm_i2cx_ic_enable_status
{
    uint32_t u;
    struct cavm_i2cx_ic_enable_status_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t rsvd_ic_enable_status : 29; /**< [ 31:  3](RO) IC_ENABLE_STATUS Reserved bits - Read Only */
        uint32_t slv_rx_data_lost      : 1;  /**< [  2:  2](RO) Target Received Data Lost.
                                                                 This bit indicates if a Target-Receiver operation has been
                                                                 terminated with at least one data byte received from an
                                                                 I2C transfer due to the setting bit 0 of IC_ENABLE from 1 to 0.
                                                                 When read as 1, DW_apb_i2c is deemed to have been actively engaged
                                                                 in an terminated I2C transfer (with matching address) and the
                                                                 data phase of the I2C transfer has been entered, even though
                                                                 a data byte has been responded with a NACK.

                                                                 Note: If the remote I2C controller terminates the transfer with a
                                                                 STOP condition before the DW_apb_i2c has a chance to NACK a
                                                                 transfer, and IC_ENABLE[0] has been set to 0, then this bit is
                                                                 also set to 1.

                                                                 When read as 0, DW_apb_i2c is deemed to have been disabled without
                                                                 being actively involved in the data phase of a Target-Receiver transfer.

                                                                 Note: The CPU can safely read this bit when IC_EN (bit 0) is read as 0. */
        uint32_t slv_disabled_while_busy : 1;/**< [  1:  1](RO) Target Disabled While Busy (Transmit, Receive).
                                                                 This bit indicates if a potential or active Target
                                                                 operation has been terminated due to the setting bit 0 of
                                                                 the IC_ENABLE register from 1 to 0. This bit is set
                                                                 when the CPU writes a 0 to the IC_ENABLE register
                                                                 while:

                                                                 (a) DW_apb_i2c is receiving the address byte
                                                                 of the Target-Transmitter operation from a remote controller;

                                                                 OR,

                                                                 (b) address and data bytes of the Target-Receiver
                                                                 operation from a remote controller.

                                                                 When read as 1, DW_apb_i2c is deemed to have forced a
                                                                 NACK during any part of an I2C transfer, irrespective
                                                                 of whether the I2C address matches the target address set
                                                                 in DW_apb_i2c (IC_SAR register) OR if the transfer is
                                                                 completed before IC_ENABLE is set to 0 but has not
                                                                 taken effect.

                                                                 Note: If the remote I2C controller terminates the transfer
                                                                 with a STOP condition before the DW_apb_i2c has a chance
                                                                 to NACK a transfer, and IC_ENABLE[0] has been set to 0, then
                                                                 this bit will also be set to 1.

                                                                 When read as 0, DW_apb_i2c is deemed to have been disabled
                                                                 when there is controller activity, or when the I2C bus is idle.

                                                                 Note: The CPU can safely read this bit when IC_EN (bit 0) is read as 0. */
        uint32_t ic_en                 : 1;  /**< [  0:  0](RO) IC Enable Status.
                                                                 This bit always reflects the value driven
                                                                 on the output port ic_en.
                                                                  - When read as 1, DW_apb_i2c is deemed to be in an enabled state.
                                                                  - When read as 0, DW_apb_i2c is deemed completely inactive.
                                                                 Note: The CPU can safely read this bit anytime.
                                                                 When this bit is read as 0, the CPU can safely
                                                                 read SLV_RX_DATA_LOST (bit 2) and
                                                                 SLV_DISABLED_WHILE_BUSY (bit 1). */
#else /* Word 0 - Little Endian */
        uint32_t ic_en                 : 1;  /**< [  0:  0](RO) IC Enable Status.
                                                                 This bit always reflects the value driven
                                                                 on the output port ic_en.
                                                                  - When read as 1, DW_apb_i2c is deemed to be in an enabled state.
                                                                  - When read as 0, DW_apb_i2c is deemed completely inactive.
                                                                 Note: The CPU can safely read this bit anytime.
                                                                 When this bit is read as 0, the CPU can safely
                                                                 read SLV_RX_DATA_LOST (bit 2) and
                                                                 SLV_DISABLED_WHILE_BUSY (bit 1). */
        uint32_t slv_disabled_while_busy : 1;/**< [  1:  1](RO) Target Disabled While Busy (Transmit, Receive).
                                                                 This bit indicates if a potential or active Target
                                                                 operation has been terminated due to the setting bit 0 of
                                                                 the IC_ENABLE register from 1 to 0. This bit is set
                                                                 when the CPU writes a 0 to the IC_ENABLE register
                                                                 while:

                                                                 (a) DW_apb_i2c is receiving the address byte
                                                                 of the Target-Transmitter operation from a remote controller;

                                                                 OR,

                                                                 (b) address and data bytes of the Target-Receiver
                                                                 operation from a remote controller.

                                                                 When read as 1, DW_apb_i2c is deemed to have forced a
                                                                 NACK during any part of an I2C transfer, irrespective
                                                                 of whether the I2C address matches the target address set
                                                                 in DW_apb_i2c (IC_SAR register) OR if the transfer is
                                                                 completed before IC_ENABLE is set to 0 but has not
                                                                 taken effect.

                                                                 Note: If the remote I2C controller terminates the transfer
                                                                 with a STOP condition before the DW_apb_i2c has a chance
                                                                 to NACK a transfer, and IC_ENABLE[0] has been set to 0, then
                                                                 this bit will also be set to 1.

                                                                 When read as 0, DW_apb_i2c is deemed to have been disabled
                                                                 when there is controller activity, or when the I2C bus is idle.

                                                                 Note: The CPU can safely read this bit when IC_EN (bit 0) is read as 0. */
        uint32_t slv_rx_data_lost      : 1;  /**< [  2:  2](RO) Target Received Data Lost.
                                                                 This bit indicates if a Target-Receiver operation has been
                                                                 terminated with at least one data byte received from an
                                                                 I2C transfer due to the setting bit 0 of IC_ENABLE from 1 to 0.
                                                                 When read as 1, DW_apb_i2c is deemed to have been actively engaged
                                                                 in an terminated I2C transfer (with matching address) and the
                                                                 data phase of the I2C transfer has been entered, even though
                                                                 a data byte has been responded with a NACK.

                                                                 Note: If the remote I2C controller terminates the transfer with a
                                                                 STOP condition before the DW_apb_i2c has a chance to NACK a
                                                                 transfer, and IC_ENABLE[0] has been set to 0, then this bit is
                                                                 also set to 1.

                                                                 When read as 0, DW_apb_i2c is deemed to have been disabled without
                                                                 being actively involved in the data phase of a Target-Receiver transfer.

                                                                 Note: The CPU can safely read this bit when IC_EN (bit 0) is read as 0. */
        uint32_t rsvd_ic_enable_status : 29; /**< [ 31:  3](RO) IC_ENABLE_STATUS Reserved bits - Read Only */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_i2cx_ic_enable_status_s cn; */
};
typedef union cavm_i2cx_ic_enable_status cavm_i2cx_ic_enable_status_t;

static inline uint64_t CAVM_I2CX_IC_ENABLE_STATUS(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_I2CX_IC_ENABLE_STATUS(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CN20KA) && (a<=3))
        return 0xc0901000009cll + 0x100000000ll * ((a) & 0x3);
    __cavm_csr_fatal("I2CX_IC_ENABLE_STATUS", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_I2CX_IC_ENABLE_STATUS(a) cavm_i2cx_ic_enable_status_t
#define bustype_CAVM_I2CX_IC_ENABLE_STATUS(a) CSR_TYPE_RSL32b
#define basename_CAVM_I2CX_IC_ENABLE_STATUS(a) "I2CX_IC_ENABLE_STATUS"
#define device_bar_CAVM_I2CX_IC_ENABLE_STATUS(a) 0x0 /* PF_BAR0 */
#define busnum_CAVM_I2CX_IC_ENABLE_STATUS(a) (a)
#define arguments_CAVM_I2CX_IC_ENABLE_STATUS(a) (a),-1,-1,-1

/**
 * Register (RSL32b) i2c#_ic_fs_scl_hcnt
 *
 * I2C Ic Fs Scl Hcnt Register
 * Fast Mode or Fast Mode Plus I2C Clock SCL High Count Register
 */
union cavm_i2cx_ic_fs_scl_hcnt
{
    uint32_t u;
    struct cavm_i2cx_ic_fs_scl_hcnt_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t rsvd_ic_fs_scl_hcnt   : 16; /**< [ 31: 16](RO) IC_FS_SCL_HCNT Reserved bits - Read Only */
        uint32_t ic_fs_scl_hcnt        : 16; /**< [ 15:  0](R/W) This register must be set before any I2C bus transaction can take place to
                                                                 ensure proper I/O timing. This register sets the SCL clock high-period
                                                                 count for fast mode or fast mode plus. It is used in high-speed mode to send the Controller Code
                                                                 and START BYTE or General CALL. For more information, refer
                                                                 to "IC_CLK Frequency Configuration".

                                                                 This register goes away and becomes read-only returning 0s if
                                                                 IC_MAX_SPEED_MODE = standard.
                                                                 This register can be written only
                                                                 when the I2C interface is disabled, which corresponds to the IC_ENABLE[0]
                                                                 register being set to 0. Writes at other times have no effect.

                                                                 The minimum valid value is derived through below formula:

                                                                 ((IC_ULTRA_FAST_MODE==1) ? 3 : ((IC_CLK_FREQ_OPTIMIZATION==1) ? 1 : 6))

                                                                 Hardware prevents values less than this
                                                                 being written, and if attempted results in minimum valid value being set. For designs with
                                                                 APB_DATA_WIDTH == 8 the order of programming is important to
                                                                 ensure the correct operation of the DW_apb_i2c. The lower byte must be
                                                                 programmed first. Then the upper byte is programmed. */
#else /* Word 0 - Little Endian */
        uint32_t ic_fs_scl_hcnt        : 16; /**< [ 15:  0](R/W) This register must be set before any I2C bus transaction can take place to
                                                                 ensure proper I/O timing. This register sets the SCL clock high-period
                                                                 count for fast mode or fast mode plus. It is used in high-speed mode to send the Controller Code
                                                                 and START BYTE or General CALL. For more information, refer
                                                                 to "IC_CLK Frequency Configuration".

                                                                 This register goes away and becomes read-only returning 0s if
                                                                 IC_MAX_SPEED_MODE = standard.
                                                                 This register can be written only
                                                                 when the I2C interface is disabled, which corresponds to the IC_ENABLE[0]
                                                                 register being set to 0. Writes at other times have no effect.

                                                                 The minimum valid value is derived through below formula:

                                                                 ((IC_ULTRA_FAST_MODE==1) ? 3 : ((IC_CLK_FREQ_OPTIMIZATION==1) ? 1 : 6))

                                                                 Hardware prevents values less than this
                                                                 being written, and if attempted results in minimum valid value being set. For designs with
                                                                 APB_DATA_WIDTH == 8 the order of programming is important to
                                                                 ensure the correct operation of the DW_apb_i2c. The lower byte must be
                                                                 programmed first. Then the upper byte is programmed. */
        uint32_t rsvd_ic_fs_scl_hcnt   : 16; /**< [ 31: 16](RO) IC_FS_SCL_HCNT Reserved bits - Read Only */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_i2cx_ic_fs_scl_hcnt_s cn; */
};
typedef union cavm_i2cx_ic_fs_scl_hcnt cavm_i2cx_ic_fs_scl_hcnt_t;

static inline uint64_t CAVM_I2CX_IC_FS_SCL_HCNT(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_I2CX_IC_FS_SCL_HCNT(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CN20KA) && (a<=3))
        return 0xc0901000001cll + 0x100000000ll * ((a) & 0x3);
    __cavm_csr_fatal("I2CX_IC_FS_SCL_HCNT", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_I2CX_IC_FS_SCL_HCNT(a) cavm_i2cx_ic_fs_scl_hcnt_t
#define bustype_CAVM_I2CX_IC_FS_SCL_HCNT(a) CSR_TYPE_RSL32b
#define basename_CAVM_I2CX_IC_FS_SCL_HCNT(a) "I2CX_IC_FS_SCL_HCNT"
#define device_bar_CAVM_I2CX_IC_FS_SCL_HCNT(a) 0x0 /* PF_BAR0 */
#define busnum_CAVM_I2CX_IC_FS_SCL_HCNT(a) (a)
#define arguments_CAVM_I2CX_IC_FS_SCL_HCNT(a) (a),-1,-1,-1

/**
 * Register (RSL32b) i2c#_ic_fs_scl_lcnt
 *
 * I2C Ic Fs Scl Lcnt Register
 * Fast Mode or Fast Mode Plus I2C Clock SCL Low Count Register
 */
union cavm_i2cx_ic_fs_scl_lcnt
{
    uint32_t u;
    struct cavm_i2cx_ic_fs_scl_lcnt_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t rsvd_ic_fs_scl_lcnt   : 16; /**< [ 31: 16](RO) IC_FS_SCL_LCNT Reserved bits - Read Only */
        uint32_t ic_fs_scl_lcnt        : 16; /**< [ 15:  0](R/W) This register must be set before any I2C bus transaction can take place to
                                                                 ensure proper I/O timing. This register sets the SCL clock low period count
                                                                 for fast speed. It is used in high-speed mode to send the Controller Code and
                                                                 START BYTE or General CALL. For more information, refer
                                                                 to "IC_CLK Frequency Configuration".

                                                                 This register goes away and becomes read-only returning 0s if
                                                                 IC_MAX_SPEED_MODE = standard.

                                                                 This register can be written only when the I2C interface is disabled, which
                                                                 corresponds to the IC_ENABLE[0] register being set to 0. Writes at other times
                                                                 have no effect.

                                                                 The minimum valid value is derived through below formula:

                                                                 ((IC_ULTRA_FAST_MODE==1) ? 5 : ((IC_CLK_FREQ_OPTIMIZATION==1) ? 6 : 8))

                                                                 Hardware prevents values less than this
                                                                 being written, and if attempted results in minimum valid value being set. For designs with
                                                                 APB_DATA_WIDTH = 8 the order of programming is important to ensure
                                                                 the correct operation of the DW_apb_i2c. The lower byte must be
                                                                 programmed first. Then the upper byte is programmed. If the value is less
                                                                 than minimum valid value then the count value gets changed to minimum valid value.

                                                                 When the configuration parameter IC_HC_COUNT_VALUES is set to 1,
                                                                 this register is read only. */
#else /* Word 0 - Little Endian */
        uint32_t ic_fs_scl_lcnt        : 16; /**< [ 15:  0](R/W) This register must be set before any I2C bus transaction can take place to
                                                                 ensure proper I/O timing. This register sets the SCL clock low period count
                                                                 for fast speed. It is used in high-speed mode to send the Controller Code and
                                                                 START BYTE or General CALL. For more information, refer
                                                                 to "IC_CLK Frequency Configuration".

                                                                 This register goes away and becomes read-only returning 0s if
                                                                 IC_MAX_SPEED_MODE = standard.

                                                                 This register can be written only when the I2C interface is disabled, which
                                                                 corresponds to the IC_ENABLE[0] register being set to 0. Writes at other times
                                                                 have no effect.

                                                                 The minimum valid value is derived through below formula:

                                                                 ((IC_ULTRA_FAST_MODE==1) ? 5 : ((IC_CLK_FREQ_OPTIMIZATION==1) ? 6 : 8))

                                                                 Hardware prevents values less than this
                                                                 being written, and if attempted results in minimum valid value being set. For designs with
                                                                 APB_DATA_WIDTH = 8 the order of programming is important to ensure
                                                                 the correct operation of the DW_apb_i2c. The lower byte must be
                                                                 programmed first. Then the upper byte is programmed. If the value is less
                                                                 than minimum valid value then the count value gets changed to minimum valid value.

                                                                 When the configuration parameter IC_HC_COUNT_VALUES is set to 1,
                                                                 this register is read only. */
        uint32_t rsvd_ic_fs_scl_lcnt   : 16; /**< [ 31: 16](RO) IC_FS_SCL_LCNT Reserved bits - Read Only */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_i2cx_ic_fs_scl_lcnt_s cn; */
};
typedef union cavm_i2cx_ic_fs_scl_lcnt cavm_i2cx_ic_fs_scl_lcnt_t;

static inline uint64_t CAVM_I2CX_IC_FS_SCL_LCNT(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_I2CX_IC_FS_SCL_LCNT(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CN20KA) && (a<=3))
        return 0xc09010000020ll + 0x100000000ll * ((a) & 0x3);
    __cavm_csr_fatal("I2CX_IC_FS_SCL_LCNT", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_I2CX_IC_FS_SCL_LCNT(a) cavm_i2cx_ic_fs_scl_lcnt_t
#define bustype_CAVM_I2CX_IC_FS_SCL_LCNT(a) CSR_TYPE_RSL32b
#define basename_CAVM_I2CX_IC_FS_SCL_LCNT(a) "I2CX_IC_FS_SCL_LCNT"
#define device_bar_CAVM_I2CX_IC_FS_SCL_LCNT(a) 0x0 /* PF_BAR0 */
#define busnum_CAVM_I2CX_IC_FS_SCL_LCNT(a) (a)
#define arguments_CAVM_I2CX_IC_FS_SCL_LCNT(a) (a),-1,-1,-1

/**
 * Register (RSL32b) i2c#_ic_fs_spklen
 *
 * I2C Ic Fs Spklen Register
 * I2C SS, FS or FM+ Spike Suppression Limit.
 *
 * This register is used to store the duration, measured in ic_clk cycles,
 * of the longest spike that is filtered out by the spike suppression logic w
 * hen the component is operating in SS, FS or FM+ modes.
 * The relevant I2C requirement is tSP (table 4) as detailed in the
 * I2C Bus Specification. This register must be programmed with a minimum value of 1.
 */
union cavm_i2cx_ic_fs_spklen
{
    uint32_t u;
    struct cavm_i2cx_ic_fs_spklen_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t rsvd_ic_fs_spklen     : 24; /**< [ 31:  8](RO) IC_FS_SPKLEN Reserved bits - Read Only */
        uint32_t ic_fs_spklen          : 8;  /**< [  7:  0](R/W) This register must be set before any I2C bus transaction can take place to
                                                                 ensure stable operation. This register sets the duration, measured in ic_clk cycles,
                                                                 of the longest spike in the SCL or SDA lines that will be filtered out by the spike
                                                                 suppression logic.
                                                                 This register can be written only when the I2C interface is disabled which
                                                                 corresponds to the IC_ENABLE[0] register being set to 0. Writes at other times
                                                                 have no effect.
                                                                 The minimum valid value is 1; hardware prevents values less than this being
                                                                 written, and if attempted results in 1 being set. or more information, refer to
                                                                 "Spike Suppression". */
#else /* Word 0 - Little Endian */
        uint32_t ic_fs_spklen          : 8;  /**< [  7:  0](R/W) This register must be set before any I2C bus transaction can take place to
                                                                 ensure stable operation. This register sets the duration, measured in ic_clk cycles,
                                                                 of the longest spike in the SCL or SDA lines that will be filtered out by the spike
                                                                 suppression logic.
                                                                 This register can be written only when the I2C interface is disabled which
                                                                 corresponds to the IC_ENABLE[0] register being set to 0. Writes at other times
                                                                 have no effect.
                                                                 The minimum valid value is 1; hardware prevents values less than this being
                                                                 written, and if attempted results in 1 being set. or more information, refer to
                                                                 "Spike Suppression". */
        uint32_t rsvd_ic_fs_spklen     : 24; /**< [ 31:  8](RO) IC_FS_SPKLEN Reserved bits - Read Only */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_i2cx_ic_fs_spklen_s cn; */
};
typedef union cavm_i2cx_ic_fs_spklen cavm_i2cx_ic_fs_spklen_t;

static inline uint64_t CAVM_I2CX_IC_FS_SPKLEN(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_I2CX_IC_FS_SPKLEN(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CN20KA) && (a<=3))
        return 0xc090100000a0ll + 0x100000000ll * ((a) & 0x3);
    __cavm_csr_fatal("I2CX_IC_FS_SPKLEN", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_I2CX_IC_FS_SPKLEN(a) cavm_i2cx_ic_fs_spklen_t
#define bustype_CAVM_I2CX_IC_FS_SPKLEN(a) CSR_TYPE_RSL32b
#define basename_CAVM_I2CX_IC_FS_SPKLEN(a) "I2CX_IC_FS_SPKLEN"
#define device_bar_CAVM_I2CX_IC_FS_SPKLEN(a) 0x0 /* PF_BAR0 */
#define busnum_CAVM_I2CX_IC_FS_SPKLEN(a) (a)
#define arguments_CAVM_I2CX_IC_FS_SPKLEN(a) (a),-1,-1,-1

/**
 * Register (RSL32b) i2c#_ic_intr_mask
 *
 * I2C Ic Intr Mask Register
 * I2C Interrupt Mask Register.
 *
 * These bits mask their corresponding interrupt status bits. This register is active low;
 * a value of 0 masks the interrupt, whereas a value of 1 unmasks the interrupt.
 */
union cavm_i2cx_ic_intr_mask
{
    uint32_t u;
    struct cavm_i2cx_ic_intr_mask_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t rsvd_ic_intr_stat     : 12; /**< [ 31: 20](RO) IC_INTR_STAT Reserved bits - Read Only */
        uint32_t m_slv_addr4_tag       : 1;  /**< [ 19: 19](R/W) This bit masks the R_SLV_ADDR4_TAG interrupt in IC_INTR_STAT register. */
        uint32_t m_slv_addr3_tag       : 1;  /**< [ 18: 18](R/W) This bit masks the R_SLV_ADDR3_TAG interrupt in IC_INTR_STAT register. */
        uint32_t m_slv_addr2_tag       : 1;  /**< [ 17: 17](R/W) This bit masks the R_SLV_ADDR2_TAG interrupt in IC_INTR_STAT register. */
        uint32_t m_slv_addr1_tag       : 1;  /**< [ 16: 16](R/W) This bit masks the R_SLV_ADDR1_TAG interrupt in IC_INTR_STAT register. */
        uint32_t m_wr_req              : 1;  /**< [ 15: 15](R/W) This bit masks the R_WR_REQ interrupt in IC_INTR_STAT register. */
        uint32_t m_scl_stuck_at_low    : 1;  /**< [ 14: 14](R/W) This bit masks the R_SCL_STUCK_AT_LOW interrupt in IC_INTR_STAT register. */
        uint32_t m_master_on_hold      : 1;  /**< [ 13: 13](R/W) This bit masks the R_MASTER_ON_HOLD interrupt in IC_INTR_STAT register. */
        uint32_t m_restart_det         : 1;  /**< [ 12: 12](R/W) This bit masks the R_RESTART_DET interrupt in IC_INTR_STAT register. */
        uint32_t m_gen_call            : 1;  /**< [ 11: 11](R/W) This bit masks the R_GEN_CALL interrupt in IC_INTR_STAT register. */
        uint32_t m_start_det           : 1;  /**< [ 10: 10](R/W) This bit masks the R_START_DET interrupt in IC_INTR_STAT register. */
        uint32_t m_stop_det            : 1;  /**< [  9:  9](R/W) This bit masks the R_STOP_DET interrupt in IC_INTR_STAT register. */
        uint32_t m_activity            : 1;  /**< [  8:  8](R/W) This bit masks the R_ACTIVITY interrupt in IC_INTR_STAT register. */
        uint32_t m_rx_done             : 1;  /**< [  7:  7](R/W) This bit masks the R_RX_DONE interrupt in IC_INTR_STAT register. */
        uint32_t m_tx_abrt             : 1;  /**< [  6:  6](R/W) This bit masks the R_TX_ABRT interrupt in IC_INTR_STAT register. */
        uint32_t m_rd_req              : 1;  /**< [  5:  5](R/W) This bit masks the R_RD_REQ interrupt in IC_INTR_STAT register. */
        uint32_t m_tx_empty            : 1;  /**< [  4:  4](R/W) This bit masks the R_TX_EMPTY interrupt in IC_INTR_STAT register. */
        uint32_t m_tx_over             : 1;  /**< [  3:  3](R/W) This bit masks the R_TX_OVER interrupt in IC_INTR_STAT register. */
        uint32_t m_rx_full             : 1;  /**< [  2:  2](R/W) This bit masks the R_RX_FULL interrupt in IC_INTR_STAT register. */
        uint32_t m_rx_over             : 1;  /**< [  1:  1](R/W) This bit masks the R_RX_OVER interrupt in IC_INTR_STAT register. */
        uint32_t m_rx_under            : 1;  /**< [  0:  0](R/W) This bit masks the R_RX_UNDER interrupt in IC_INTR_STAT register. */
#else /* Word 0 - Little Endian */
        uint32_t m_rx_under            : 1;  /**< [  0:  0](R/W) This bit masks the R_RX_UNDER interrupt in IC_INTR_STAT register. */
        uint32_t m_rx_over             : 1;  /**< [  1:  1](R/W) This bit masks the R_RX_OVER interrupt in IC_INTR_STAT register. */
        uint32_t m_rx_full             : 1;  /**< [  2:  2](R/W) This bit masks the R_RX_FULL interrupt in IC_INTR_STAT register. */
        uint32_t m_tx_over             : 1;  /**< [  3:  3](R/W) This bit masks the R_TX_OVER interrupt in IC_INTR_STAT register. */
        uint32_t m_tx_empty            : 1;  /**< [  4:  4](R/W) This bit masks the R_TX_EMPTY interrupt in IC_INTR_STAT register. */
        uint32_t m_rd_req              : 1;  /**< [  5:  5](R/W) This bit masks the R_RD_REQ interrupt in IC_INTR_STAT register. */
        uint32_t m_tx_abrt             : 1;  /**< [  6:  6](R/W) This bit masks the R_TX_ABRT interrupt in IC_INTR_STAT register. */
        uint32_t m_rx_done             : 1;  /**< [  7:  7](R/W) This bit masks the R_RX_DONE interrupt in IC_INTR_STAT register. */
        uint32_t m_activity            : 1;  /**< [  8:  8](R/W) This bit masks the R_ACTIVITY interrupt in IC_INTR_STAT register. */
        uint32_t m_stop_det            : 1;  /**< [  9:  9](R/W) This bit masks the R_STOP_DET interrupt in IC_INTR_STAT register. */
        uint32_t m_start_det           : 1;  /**< [ 10: 10](R/W) This bit masks the R_START_DET interrupt in IC_INTR_STAT register. */
        uint32_t m_gen_call            : 1;  /**< [ 11: 11](R/W) This bit masks the R_GEN_CALL interrupt in IC_INTR_STAT register. */
        uint32_t m_restart_det         : 1;  /**< [ 12: 12](R/W) This bit masks the R_RESTART_DET interrupt in IC_INTR_STAT register. */
        uint32_t m_master_on_hold      : 1;  /**< [ 13: 13](R/W) This bit masks the R_MASTER_ON_HOLD interrupt in IC_INTR_STAT register. */
        uint32_t m_scl_stuck_at_low    : 1;  /**< [ 14: 14](R/W) This bit masks the R_SCL_STUCK_AT_LOW interrupt in IC_INTR_STAT register. */
        uint32_t m_wr_req              : 1;  /**< [ 15: 15](R/W) This bit masks the R_WR_REQ interrupt in IC_INTR_STAT register. */
        uint32_t m_slv_addr1_tag       : 1;  /**< [ 16: 16](R/W) This bit masks the R_SLV_ADDR1_TAG interrupt in IC_INTR_STAT register. */
        uint32_t m_slv_addr2_tag       : 1;  /**< [ 17: 17](R/W) This bit masks the R_SLV_ADDR2_TAG interrupt in IC_INTR_STAT register. */
        uint32_t m_slv_addr3_tag       : 1;  /**< [ 18: 18](R/W) This bit masks the R_SLV_ADDR3_TAG interrupt in IC_INTR_STAT register. */
        uint32_t m_slv_addr4_tag       : 1;  /**< [ 19: 19](R/W) This bit masks the R_SLV_ADDR4_TAG interrupt in IC_INTR_STAT register. */
        uint32_t rsvd_ic_intr_stat     : 12; /**< [ 31: 20](RO) IC_INTR_STAT Reserved bits - Read Only */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_i2cx_ic_intr_mask_s cn; */
};
typedef union cavm_i2cx_ic_intr_mask cavm_i2cx_ic_intr_mask_t;

static inline uint64_t CAVM_I2CX_IC_INTR_MASK(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_I2CX_IC_INTR_MASK(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CN20KA) && (a<=3))
        return 0xc09010000030ll + 0x100000000ll * ((a) & 0x3);
    __cavm_csr_fatal("I2CX_IC_INTR_MASK", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_I2CX_IC_INTR_MASK(a) cavm_i2cx_ic_intr_mask_t
#define bustype_CAVM_I2CX_IC_INTR_MASK(a) CSR_TYPE_RSL32b
#define basename_CAVM_I2CX_IC_INTR_MASK(a) "I2CX_IC_INTR_MASK"
#define device_bar_CAVM_I2CX_IC_INTR_MASK(a) 0x0 /* PF_BAR0 */
#define busnum_CAVM_I2CX_IC_INTR_MASK(a) (a)
#define arguments_CAVM_I2CX_IC_INTR_MASK(a) (a),-1,-1,-1

/**
 * Register (RSL32b) i2c#_ic_intr_stat
 *
 * I2C Ic Intr Stat Register
 * I2C Interrupt Status Register.
 *
 * Each bit in this register has a corresponding mask bit
 * in the IC_INTR_MASK register. These bits are cleared by reading the matching
 * interrupt clear register. The unmasked raw versions of these bits are
 * available in the IC_RAW_INTR_STAT register.
 */
union cavm_i2cx_ic_intr_stat
{
    uint32_t u;
    struct cavm_i2cx_ic_intr_stat_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t rsvd_ic_intr_stat     : 12; /**< [ 31: 20](RO) IC_INTR_STAT Reserved bits - Read Only */
        uint32_t r_slv_addr4_tag       : 1;  /**< [ 19: 19](RO) See IC_RAW_INTR_STAT for a detailed description of R_SLV_ADDR4_TAG bit. */
        uint32_t r_slv_addr3_tag       : 1;  /**< [ 18: 18](RO) See IC_RAW_INTR_STAT for a detailed description of R_SLV_ADDR3_TAG bit. */
        uint32_t r_slv_addr2_tag       : 1;  /**< [ 17: 17](RO) See IC_RAW_INTR_STAT for a detailed description of R_SLV_ADDR2_TAG bit. */
        uint32_t r_slv_addr1_tag       : 1;  /**< [ 16: 16](RO) See IC_RAW_INTR_STAT for a detailed description of R_SLV_ADDR1_TAG bit. */
        uint32_t r_wr_req              : 1;  /**< [ 15: 15](RO) See IC_RAW_INTR_STAT for a detailed description of R_WR_REQ bit. */
        uint32_t r_scl_stuck_at_low    : 1;  /**< [ 14: 14](RO) See IC_RAW_INTR_STAT for a detailed description of R_SCL_STUCK_AT_LOW bit. */
        uint32_t r_master_on_hold      : 1;  /**< [ 13: 13](RO) See IC_RAW_INTR_STAT for a detailed description of R_MASTER_ON_HOLD bit. */
        uint32_t r_restart_det         : 1;  /**< [ 12: 12](RO) See IC_RAW_INTR_STAT for a detailed description of R_RESTART_DET bit. */
        uint32_t r_gen_call            : 1;  /**< [ 11: 11](RO) See IC_RAW_INTR_STAT for a detailed description of R_GEN_CALL bit. */
        uint32_t r_start_det           : 1;  /**< [ 10: 10](RO) See IC_RAW_INTR_STAT for a detailed description of R_START_DET bit. */
        uint32_t r_stop_det            : 1;  /**< [  9:  9](RO) See IC_RAW_INTR_STAT for a detailed description of R_STOP_DET bit. */
        uint32_t r_activity            : 1;  /**< [  8:  8](RO) See IC_RAW_INTR_STAT for a detailed description of R_ACTIVITY bit. */
        uint32_t r_rx_done             : 1;  /**< [  7:  7](RO) See IC_RAW_INTR_STAT for a detailed description of R_RX_DONE bit. */
        uint32_t r_tx_abrt             : 1;  /**< [  6:  6](RO) See IC_RAW_INTR_STAT for a detailed description of R_TX_ABRT bit. */
        uint32_t r_rd_req              : 1;  /**< [  5:  5](RO) See IC_RAW_INTR_STAT for a detailed description of R_RD_REQ bit. */
        uint32_t r_tx_empty            : 1;  /**< [  4:  4](RO) See IC_RAW_INTR_STAT for a detailed description of R_TX_EMPTY bit. */
        uint32_t r_tx_over             : 1;  /**< [  3:  3](RO) See IC_RAW_INTR_STAT for a detailed description of R_TX_OVER bit. */
        uint32_t r_rx_full             : 1;  /**< [  2:  2](RO) See IC_RAW_INTR_STAT for a detailed description of R_RX_FULL bit. */
        uint32_t r_rx_over             : 1;  /**< [  1:  1](RO) See IC_RAW_INTR_STAT for a detailed description of R_RX_OVER bit. */
        uint32_t r_rx_under            : 1;  /**< [  0:  0](RO) See IC_RAW_INTR_STAT for a detailed description of R_RX_UNDER bit. */
#else /* Word 0 - Little Endian */
        uint32_t r_rx_under            : 1;  /**< [  0:  0](RO) See IC_RAW_INTR_STAT for a detailed description of R_RX_UNDER bit. */
        uint32_t r_rx_over             : 1;  /**< [  1:  1](RO) See IC_RAW_INTR_STAT for a detailed description of R_RX_OVER bit. */
        uint32_t r_rx_full             : 1;  /**< [  2:  2](RO) See IC_RAW_INTR_STAT for a detailed description of R_RX_FULL bit. */
        uint32_t r_tx_over             : 1;  /**< [  3:  3](RO) See IC_RAW_INTR_STAT for a detailed description of R_TX_OVER bit. */
        uint32_t r_tx_empty            : 1;  /**< [  4:  4](RO) See IC_RAW_INTR_STAT for a detailed description of R_TX_EMPTY bit. */
        uint32_t r_rd_req              : 1;  /**< [  5:  5](RO) See IC_RAW_INTR_STAT for a detailed description of R_RD_REQ bit. */
        uint32_t r_tx_abrt             : 1;  /**< [  6:  6](RO) See IC_RAW_INTR_STAT for a detailed description of R_TX_ABRT bit. */
        uint32_t r_rx_done             : 1;  /**< [  7:  7](RO) See IC_RAW_INTR_STAT for a detailed description of R_RX_DONE bit. */
        uint32_t r_activity            : 1;  /**< [  8:  8](RO) See IC_RAW_INTR_STAT for a detailed description of R_ACTIVITY bit. */
        uint32_t r_stop_det            : 1;  /**< [  9:  9](RO) See IC_RAW_INTR_STAT for a detailed description of R_STOP_DET bit. */
        uint32_t r_start_det           : 1;  /**< [ 10: 10](RO) See IC_RAW_INTR_STAT for a detailed description of R_START_DET bit. */
        uint32_t r_gen_call            : 1;  /**< [ 11: 11](RO) See IC_RAW_INTR_STAT for a detailed description of R_GEN_CALL bit. */
        uint32_t r_restart_det         : 1;  /**< [ 12: 12](RO) See IC_RAW_INTR_STAT for a detailed description of R_RESTART_DET bit. */
        uint32_t r_master_on_hold      : 1;  /**< [ 13: 13](RO) See IC_RAW_INTR_STAT for a detailed description of R_MASTER_ON_HOLD bit. */
        uint32_t r_scl_stuck_at_low    : 1;  /**< [ 14: 14](RO) See IC_RAW_INTR_STAT for a detailed description of R_SCL_STUCK_AT_LOW bit. */
        uint32_t r_wr_req              : 1;  /**< [ 15: 15](RO) See IC_RAW_INTR_STAT for a detailed description of R_WR_REQ bit. */
        uint32_t r_slv_addr1_tag       : 1;  /**< [ 16: 16](RO) See IC_RAW_INTR_STAT for a detailed description of R_SLV_ADDR1_TAG bit. */
        uint32_t r_slv_addr2_tag       : 1;  /**< [ 17: 17](RO) See IC_RAW_INTR_STAT for a detailed description of R_SLV_ADDR2_TAG bit. */
        uint32_t r_slv_addr3_tag       : 1;  /**< [ 18: 18](RO) See IC_RAW_INTR_STAT for a detailed description of R_SLV_ADDR3_TAG bit. */
        uint32_t r_slv_addr4_tag       : 1;  /**< [ 19: 19](RO) See IC_RAW_INTR_STAT for a detailed description of R_SLV_ADDR4_TAG bit. */
        uint32_t rsvd_ic_intr_stat     : 12; /**< [ 31: 20](RO) IC_INTR_STAT Reserved bits - Read Only */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_i2cx_ic_intr_stat_s cn; */
};
typedef union cavm_i2cx_ic_intr_stat cavm_i2cx_ic_intr_stat_t;

static inline uint64_t CAVM_I2CX_IC_INTR_STAT(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_I2CX_IC_INTR_STAT(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CN20KA) && (a<=3))
        return 0xc0901000002cll + 0x100000000ll * ((a) & 0x3);
    __cavm_csr_fatal("I2CX_IC_INTR_STAT", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_I2CX_IC_INTR_STAT(a) cavm_i2cx_ic_intr_stat_t
#define bustype_CAVM_I2CX_IC_INTR_STAT(a) CSR_TYPE_RSL32b
#define basename_CAVM_I2CX_IC_INTR_STAT(a) "I2CX_IC_INTR_STAT"
#define device_bar_CAVM_I2CX_IC_INTR_STAT(a) 0x0 /* PF_BAR0 */
#define busnum_CAVM_I2CX_IC_INTR_STAT(a) (a)
#define arguments_CAVM_I2CX_IC_INTR_STAT(a) (a),-1,-1,-1

/**
 * Register (RSL32b) i2c#_ic_raw_intr_stat
 *
 * I2C Ic Raw Intr Stat Register
 * I2C Raw Interrupt Status Register.
 *
 * Unlike the IC_INTR_STAT register, these bits are not masked so they
 * always show the true status of the DW_apb_i2c.
 */
union cavm_i2cx_ic_raw_intr_stat
{
    uint32_t u;
    struct cavm_i2cx_ic_raw_intr_stat_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t rsvd_ic_raw_intr_stat : 12; /**< [ 31: 20](RO) IC_RAW_INTR_STAT Reserved bits - Read Only */
        uint32_t slv_addr4_tag         : 1;  /**< [ 19: 19](RO) This bit is set to 1 when DW_apb_i2c is acting as target and another I2C
                                                                 controller is attempting to write/read  I2C transfers with the target device
                                                                 address IC_SAR4.

                                                                 This can be used in conjunction with the WR_REQ/RD_REQto determine which target
                                                                 address has been addressed. */
        uint32_t slv_addr3_tag         : 1;  /**< [ 18: 18](RO) This bit is set to 1 when DW_apb_i2c is acting as target and another I2C
                                                                 controller is attempting to write/read  I2C transfers with the target device
                                                                 address IC_SAR3.

                                                                 This can be used in conjunction with the WR_REQ/RD_REQto determine which target
                                                                 address has been addressed. */
        uint32_t slv_addr2_tag         : 1;  /**< [ 17: 17](RO) This bit is set to 1 when DW_apb_i2c is acting as target and another I2C
                                                                 controller is attempting to write/read  I2C transfers with the target device
                                                                 address IC_SAR2.

                                                                 This can be used in conjunction with the WR_REQ/RD_REQto determine which target
                                                                 address has been addressed. */
        uint32_t slv_addr1_tag         : 1;  /**< [ 16: 16](RO) This bit is set to 1 when DW_apb_i2c is acting as target and another I2C
                                                                 controller is attempting to write/read  I2C transfers with the target device
                                                                 address IC_SAR.

                                                                 This can be used in conjunction with the WR_REQ/RD_REQto determine which target
                                                                 address has been addressed. */
        uint32_t wr_req                : 1;  /**< [ 15: 15](RO) This bit is set to 1 when DW_apb_i2c is acting as target and another I2C
                                                                 controller is attempting to write data into DW_apb_i2c.

                                                                 This interrupt provides indication that, the write data from another I2C
                                                                 controller is going to follow and this interrupt can be used in conjunction of
                                                                 SLV_ADDRx_TAG(where x = 1 ... IC_NUM_SARS) to determine for which target device
                                                                 address the I2C transfer is received. */
        uint32_t scl_stuck_at_low      : 1;  /**< [ 14: 14](RO) Indicates
                                                                 whether the SCL Line is stuck at low for the IC_SCL_STUCK_LOW_TIMEOUT number of ic_clk periods.

                                                                 Enabled only when IC_BUS_CLEAR_FEATURE=1 and IC_ULTRA_FAST_MODE=0. */
        uint32_t master_on_hold        : 1;  /**< [ 13: 13](RO) Indicates whether controller is holding the bus and TX FIFO is empty.
                                                                 Enabled only when I2C_DYNAMIC_TAR_UPDATE=1 and IC_EMPTYFIFO_HOLD_MASTER_EN=1. */
        uint32_t restart_det           : 1;  /**< [ 12: 12](RO) Indicates whether a RESTART condition has occurred on the I2C interface
                                                                 when DW_apb_i2c is operating in Target mode and the target is being addressed.
                                                                 Enabled only when IC_SLV_RESTART_DET_EN=1.

                                                                 Note: However, in high-speed mode or during a START BYTE transfer, the RESTART
                                                                 comes before the address field as
                                                                 per the I2C protocol. In this case, the target is not the addressed target when
                                                                 the RESTART is issued, therefore DW_apb_i2c
                                                                 does not generate the RESTART_DET interrupt. */
        uint32_t gen_call              : 1;  /**< [ 11: 11](RO) Set only when a General Call address is received and it is acknowledged. It
                                                                 stays set until it is cleared either by disabling DW_apb_i2c or when the CPU
                                                                 reads bit 0 of the IC_CLR_GEN_CALL register. DW_apb_i2c stores the
                                                                 received data in the Rx buffer. */
        uint32_t start_det             : 1;  /**< [ 10: 10](RO) Indicates whether a START or RESTART condition has occurred on the I2C
                                                                 interface regardless of whether DW_apb_i2c is operating in target or controller
                                                                 mode. */
        uint32_t stop_det              : 1;  /**< [  9:  9](RO) Indicates whether a STOP condition has occurred on the I2C interface regardless
                                                                 of whether DW_apb_i2c is operating in target or controller mode.

                                                                 In Target Mode:
                                                                  - If IC_CON[7]=1'b1  (STOP_DET_IFADDRESSED), the STOP_DET interrupt will be
                                                                 issued only if target is addressed.
                                                                 Note: During a general call address, this target does not issue a STOP_DET
                                                                 interrupt if STOP_DET_IF_ADDRESSED=1'b1, even if the target responds to the
                                                                 general call address by generating ACK. The STOP_DET interrupt is generated only
                                                                 when the transmitted address matches the target device address (SAR).
                                                                  - If IC_CON[7]=1'b0 (STOP_DET_IFADDRESSED), the STOP_DET interrupt is issued
                                                                 irrespective of whether it is being addressed.
                                                                 In Controller Mode:
                                                                  - If IC_CON[10]=1'b1  (STOP_DET_IF_MASTER_ACTIVE),the STOP_DET interrupt will
                                                                 be issued only if Controller is active.
                                                                  - If IC_CON[10]=1'b0  (STOP_DET_IFADDRESSED),the STOP_DET interrupt will be
                                                                 issued irrespective of whether controller is active or not. */
        uint32_t activity              : 1;  /**< [  8:  8](RO) This bit captures DW_apb_i2c activity and stays set until it is cleared. There
                                                                 are four ways to clear it:
                                                                  - Disabling the DW_apb_i2c
                                                                  - Reading the IC_CLR_ACTIVITY register
                                                                  - Reading the IC_CLR_INTR register
                                                                  - System reset
                                                                 Once this bit is set, it stays set unless one of the four methods is used to
                                                                 clear it. Even if the DW_apb_i2c module is idle, this bit remains set until
                                                                 cleared, indicating that there was activity on the bus. */
        uint32_t rx_done               : 1;  /**< [  7:  7](RO) When the DW_apb_i2c is acting as a target-transmitter,
                                                                 this bit is set to 1 if the controller does not acknowledge
                                                                 a transmitted byte. This occurs on the last byte of
                                                                 the transmission, indicating that the transmission is done. */
        uint32_t tx_abrt               : 1;  /**< [  6:  6](RO) This bit indicates if DW_apb_i2c, as an I2C transmitter,
                                                                 is unable to complete the intended actions on the
                                                                 contents of the transmit FIFO. This situation can
                                                                 occur both as an I2C controller or an I2C target, and is
                                                                 referred to as a 'transmit terminate'.
                                                                 When this bit is set to 1, the IC_TX_ABRT_SOURCE register
                                                                 indicates the reason why the transmit terminate takes places.

                                                                 Note: The DW_apb_i2c flushes/resets/empties only the TX_FIFO whenever
                                                                 there is a transmit terminate caused by any of the events tracked by the
                                                                 IC_TX_ABRT_SOURCE register. The Tx FIFO remains in this flushed state
                                                                 until the register IC_CLR_TX_ABRT is read. Once this read is performed, the
                                                                 Tx FIFO is then ready to accept more data bytes from the APB interface. RX
                                                                 FIFO flush because of TX_ABRT is controlled by the coreConsultant parameter
                                                                 IC_AVOID_RX_FIFO_FLUSH_ON_TX_ABRT. */
        uint32_t rd_req                : 1;  /**< [  5:  5](RO) This bit is set to 1 when DW_apb_i2c is acting as a target and another I2C
                                                                 controller is attempting to read data from DW_apb_i2c. The DW_apb_i2c holds
                                                                 the I2C bus in a wait state (SCL=0) until this interrupt is serviced, which means
                                                                 that the target has been addressed by a remote controller that is asking for data to
                                                                 be transferred. The processor must respond to this interrupt and then write the
                                                                 requested data to the IC_DATA_CMD register. This bit is set to 0 just after the
                                                                 processor reads the IC_CLR_RD_REQ register. */
        uint32_t tx_empty              : 1;  /**< [  4:  4](RO) The behavior of the TX_EMPTY interrupt status
                                                                 differs based on the TX_EMPTY_CTRL selection in the IC_CON register.
                                                                  - When TX_EMPTY_CTRL = 0:
                                                                 This bit is set to 1 when the transmit buffer is at or below the threshold value
                                                                 set in the IC_TX_TL register.
                                                                  - When TX_EMPTY_CTRL = 1:
                                                                 This bit is set to 1 when the transmit buffer is at or below the threshold value
                                                                 set in the IC_TX_TL register and the transmission of the address/data from the
                                                                 internal shift register for the most recently popped command is completed.
                                                                 It is automatically cleared by hardware when the buffer level goes above the
                                                                 threshold. When IC_ENABLE[0] is set to 0, the TX FIFO is flushed and held in
                                                                 reset. There the TX FIFO looks like it has no data within it, so this bit is set to 1,
                                                                 provided there is activity in the controller or target state machines. When there is no
                                                                 longer any activity, then with ic_en=0, this bit is set to 0. */
        uint32_t tx_over               : 1;  /**< [  3:  3](RO) Set during transmit if the transmit buffer is filled to IC_TX_BUFFER_DEPTH
                                                                 and the processor attempts to issue another I2C command by writing to the
                                                                 IC_DATA_CMD register. When the module is disabled, this bit keeps its level
                                                                 until the controller or target state machines go into idle, and when ic_en goes to 0,
                                                                 this interrupt is cleared. */
        uint32_t rx_full               : 1;  /**< [  2:  2](RO) Set when the receive buffer reaches or goes above the RX_TL threshold in the
                                                                 IC_RX_TL register. It is automatically cleared by hardware when buffer level
                                                                 goes below the threshold. If the module is disabled (IC_ENABLE[0]=0), the
                                                                 RX FIFO is flushed and held in reset; therefore the RX FIFO is not full. So this
                                                                 bit is cleared once the IC_ENABLE bit 0 is programmed with a 0, regardless of
                                                                 the activity that continues. */
        uint32_t rx_over               : 1;  /**< [  1:  1](RO) Set if the receive buffer is completely filled to IC_RX_BUFFER_DEPTH and
                                                                 an additional byte is received from an external I2C device. The DW_apb_i2c
                                                                 acknowledges this, but any data bytes received after the FIFO is full are lost. If
                                                                 the module is disabled (IC_ENABLE[0]=0), this bit keeps its level until the
                                                                 controller or target state machines go into idle, and when ic_en goes to 0, this
                                                                 interrupt is cleared.

                                                                 Note: If the configuration parameter IC_RX_FULL_HLD_BUS_EN is enabled and bit 9
                                                                 of the IC_CON register (RX_FIFO_FULL_HLD_CTRL) is programmed to HIGH, then the
                                                                 RX_OVER interrupt never occurs, because the
                                                                 Rx FIFO never overflows. */
        uint32_t rx_under              : 1;  /**< [  0:  0](RO) Set if the processor attempts to read the receive buffer when it is empty by
                                                                 reading from the IC_DATA_CMD register. If the module is disabled
                                                                 (IC_ENABLE[0]=0), this bit keeps its level until the controller or target state
                                                                 machines go into idle, and when ic_en goes to 0, this interrupt is cleared. */
#else /* Word 0 - Little Endian */
        uint32_t rx_under              : 1;  /**< [  0:  0](RO) Set if the processor attempts to read the receive buffer when it is empty by
                                                                 reading from the IC_DATA_CMD register. If the module is disabled
                                                                 (IC_ENABLE[0]=0), this bit keeps its level until the controller or target state
                                                                 machines go into idle, and when ic_en goes to 0, this interrupt is cleared. */
        uint32_t rx_over               : 1;  /**< [  1:  1](RO) Set if the receive buffer is completely filled to IC_RX_BUFFER_DEPTH and
                                                                 an additional byte is received from an external I2C device. The DW_apb_i2c
                                                                 acknowledges this, but any data bytes received after the FIFO is full are lost. If
                                                                 the module is disabled (IC_ENABLE[0]=0), this bit keeps its level until the
                                                                 controller or target state machines go into idle, and when ic_en goes to 0, this
                                                                 interrupt is cleared.

                                                                 Note: If the configuration parameter IC_RX_FULL_HLD_BUS_EN is enabled and bit 9
                                                                 of the IC_CON register (RX_FIFO_FULL_HLD_CTRL) is programmed to HIGH, then the
                                                                 RX_OVER interrupt never occurs, because the
                                                                 Rx FIFO never overflows. */
        uint32_t rx_full               : 1;  /**< [  2:  2](RO) Set when the receive buffer reaches or goes above the RX_TL threshold in the
                                                                 IC_RX_TL register. It is automatically cleared by hardware when buffer level
                                                                 goes below the threshold. If the module is disabled (IC_ENABLE[0]=0), the
                                                                 RX FIFO is flushed and held in reset; therefore the RX FIFO is not full. So this
                                                                 bit is cleared once the IC_ENABLE bit 0 is programmed with a 0, regardless of
                                                                 the activity that continues. */
        uint32_t tx_over               : 1;  /**< [  3:  3](RO) Set during transmit if the transmit buffer is filled to IC_TX_BUFFER_DEPTH
                                                                 and the processor attempts to issue another I2C command by writing to the
                                                                 IC_DATA_CMD register. When the module is disabled, this bit keeps its level
                                                                 until the controller or target state machines go into idle, and when ic_en goes to 0,
                                                                 this interrupt is cleared. */
        uint32_t tx_empty              : 1;  /**< [  4:  4](RO) The behavior of the TX_EMPTY interrupt status
                                                                 differs based on the TX_EMPTY_CTRL selection in the IC_CON register.
                                                                  - When TX_EMPTY_CTRL = 0:
                                                                 This bit is set to 1 when the transmit buffer is at or below the threshold value
                                                                 set in the IC_TX_TL register.
                                                                  - When TX_EMPTY_CTRL = 1:
                                                                 This bit is set to 1 when the transmit buffer is at or below the threshold value
                                                                 set in the IC_TX_TL register and the transmission of the address/data from the
                                                                 internal shift register for the most recently popped command is completed.
                                                                 It is automatically cleared by hardware when the buffer level goes above the
                                                                 threshold. When IC_ENABLE[0] is set to 0, the TX FIFO is flushed and held in
                                                                 reset. There the TX FIFO looks like it has no data within it, so this bit is set to 1,
                                                                 provided there is activity in the controller or target state machines. When there is no
                                                                 longer any activity, then with ic_en=0, this bit is set to 0. */
        uint32_t rd_req                : 1;  /**< [  5:  5](RO) This bit is set to 1 when DW_apb_i2c is acting as a target and another I2C
                                                                 controller is attempting to read data from DW_apb_i2c. The DW_apb_i2c holds
                                                                 the I2C bus in a wait state (SCL=0) until this interrupt is serviced, which means
                                                                 that the target has been addressed by a remote controller that is asking for data to
                                                                 be transferred. The processor must respond to this interrupt and then write the
                                                                 requested data to the IC_DATA_CMD register. This bit is set to 0 just after the
                                                                 processor reads the IC_CLR_RD_REQ register. */
        uint32_t tx_abrt               : 1;  /**< [  6:  6](RO) This bit indicates if DW_apb_i2c, as an I2C transmitter,
                                                                 is unable to complete the intended actions on the
                                                                 contents of the transmit FIFO. This situation can
                                                                 occur both as an I2C controller or an I2C target, and is
                                                                 referred to as a 'transmit terminate'.
                                                                 When this bit is set to 1, the IC_TX_ABRT_SOURCE register
                                                                 indicates the reason why the transmit terminate takes places.

                                                                 Note: The DW_apb_i2c flushes/resets/empties only the TX_FIFO whenever
                                                                 there is a transmit terminate caused by any of the events tracked by the
                                                                 IC_TX_ABRT_SOURCE register. The Tx FIFO remains in this flushed state
                                                                 until the register IC_CLR_TX_ABRT is read. Once this read is performed, the
                                                                 Tx FIFO is then ready to accept more data bytes from the APB interface. RX
                                                                 FIFO flush because of TX_ABRT is controlled by the coreConsultant parameter
                                                                 IC_AVOID_RX_FIFO_FLUSH_ON_TX_ABRT. */
        uint32_t rx_done               : 1;  /**< [  7:  7](RO) When the DW_apb_i2c is acting as a target-transmitter,
                                                                 this bit is set to 1 if the controller does not acknowledge
                                                                 a transmitted byte. This occurs on the last byte of
                                                                 the transmission, indicating that the transmission is done. */
        uint32_t activity              : 1;  /**< [  8:  8](RO) This bit captures DW_apb_i2c activity and stays set until it is cleared. There
                                                                 are four ways to clear it:
                                                                  - Disabling the DW_apb_i2c
                                                                  - Reading the IC_CLR_ACTIVITY register
                                                                  - Reading the IC_CLR_INTR register
                                                                  - System reset
                                                                 Once this bit is set, it stays set unless one of the four methods is used to
                                                                 clear it. Even if the DW_apb_i2c module is idle, this bit remains set until
                                                                 cleared, indicating that there was activity on the bus. */
        uint32_t stop_det              : 1;  /**< [  9:  9](RO) Indicates whether a STOP condition has occurred on the I2C interface regardless
                                                                 of whether DW_apb_i2c is operating in target or controller mode.

                                                                 In Target Mode:
                                                                  - If IC_CON[7]=1'b1  (STOP_DET_IFADDRESSED), the STOP_DET interrupt will be
                                                                 issued only if target is addressed.
                                                                 Note: During a general call address, this target does not issue a STOP_DET
                                                                 interrupt if STOP_DET_IF_ADDRESSED=1'b1, even if the target responds to the
                                                                 general call address by generating ACK. The STOP_DET interrupt is generated only
                                                                 when the transmitted address matches the target device address (SAR).
                                                                  - If IC_CON[7]=1'b0 (STOP_DET_IFADDRESSED), the STOP_DET interrupt is issued
                                                                 irrespective of whether it is being addressed.
                                                                 In Controller Mode:
                                                                  - If IC_CON[10]=1'b1  (STOP_DET_IF_MASTER_ACTIVE),the STOP_DET interrupt will
                                                                 be issued only if Controller is active.
                                                                  - If IC_CON[10]=1'b0  (STOP_DET_IFADDRESSED),the STOP_DET interrupt will be
                                                                 issued irrespective of whether controller is active or not. */
        uint32_t start_det             : 1;  /**< [ 10: 10](RO) Indicates whether a START or RESTART condition has occurred on the I2C
                                                                 interface regardless of whether DW_apb_i2c is operating in target or controller
                                                                 mode. */
        uint32_t gen_call              : 1;  /**< [ 11: 11](RO) Set only when a General Call address is received and it is acknowledged. It
                                                                 stays set until it is cleared either by disabling DW_apb_i2c or when the CPU
                                                                 reads bit 0 of the IC_CLR_GEN_CALL register. DW_apb_i2c stores the
                                                                 received data in the Rx buffer. */
        uint32_t restart_det           : 1;  /**< [ 12: 12](RO) Indicates whether a RESTART condition has occurred on the I2C interface
                                                                 when DW_apb_i2c is operating in Target mode and the target is being addressed.
                                                                 Enabled only when IC_SLV_RESTART_DET_EN=1.

                                                                 Note: However, in high-speed mode or during a START BYTE transfer, the RESTART
                                                                 comes before the address field as
                                                                 per the I2C protocol. In this case, the target is not the addressed target when
                                                                 the RESTART is issued, therefore DW_apb_i2c
                                                                 does not generate the RESTART_DET interrupt. */
        uint32_t master_on_hold        : 1;  /**< [ 13: 13](RO) Indicates whether controller is holding the bus and TX FIFO is empty.
                                                                 Enabled only when I2C_DYNAMIC_TAR_UPDATE=1 and IC_EMPTYFIFO_HOLD_MASTER_EN=1. */
        uint32_t scl_stuck_at_low      : 1;  /**< [ 14: 14](RO) Indicates
                                                                 whether the SCL Line is stuck at low for the IC_SCL_STUCK_LOW_TIMEOUT number of ic_clk periods.

                                                                 Enabled only when IC_BUS_CLEAR_FEATURE=1 and IC_ULTRA_FAST_MODE=0. */
        uint32_t wr_req                : 1;  /**< [ 15: 15](RO) This bit is set to 1 when DW_apb_i2c is acting as target and another I2C
                                                                 controller is attempting to write data into DW_apb_i2c.

                                                                 This interrupt provides indication that, the write data from another I2C
                                                                 controller is going to follow and this interrupt can be used in conjunction of
                                                                 SLV_ADDRx_TAG(where x = 1 ... IC_NUM_SARS) to determine for which target device
                                                                 address the I2C transfer is received. */
        uint32_t slv_addr1_tag         : 1;  /**< [ 16: 16](RO) This bit is set to 1 when DW_apb_i2c is acting as target and another I2C
                                                                 controller is attempting to write/read  I2C transfers with the target device
                                                                 address IC_SAR.

                                                                 This can be used in conjunction with the WR_REQ/RD_REQto determine which target
                                                                 address has been addressed. */
        uint32_t slv_addr2_tag         : 1;  /**< [ 17: 17](RO) This bit is set to 1 when DW_apb_i2c is acting as target and another I2C
                                                                 controller is attempting to write/read  I2C transfers with the target device
                                                                 address IC_SAR2.

                                                                 This can be used in conjunction with the WR_REQ/RD_REQto determine which target
                                                                 address has been addressed. */
        uint32_t slv_addr3_tag         : 1;  /**< [ 18: 18](RO) This bit is set to 1 when DW_apb_i2c is acting as target and another I2C
                                                                 controller is attempting to write/read  I2C transfers with the target device
                                                                 address IC_SAR3.

                                                                 This can be used in conjunction with the WR_REQ/RD_REQto determine which target
                                                                 address has been addressed. */
        uint32_t slv_addr4_tag         : 1;  /**< [ 19: 19](RO) This bit is set to 1 when DW_apb_i2c is acting as target and another I2C
                                                                 controller is attempting to write/read  I2C transfers with the target device
                                                                 address IC_SAR4.

                                                                 This can be used in conjunction with the WR_REQ/RD_REQto determine which target
                                                                 address has been addressed. */
        uint32_t rsvd_ic_raw_intr_stat : 12; /**< [ 31: 20](RO) IC_RAW_INTR_STAT Reserved bits - Read Only */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_i2cx_ic_raw_intr_stat_s cn; */
};
typedef union cavm_i2cx_ic_raw_intr_stat cavm_i2cx_ic_raw_intr_stat_t;

static inline uint64_t CAVM_I2CX_IC_RAW_INTR_STAT(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_I2CX_IC_RAW_INTR_STAT(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CN20KA) && (a<=3))
        return 0xc09010000034ll + 0x100000000ll * ((a) & 0x3);
    __cavm_csr_fatal("I2CX_IC_RAW_INTR_STAT", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_I2CX_IC_RAW_INTR_STAT(a) cavm_i2cx_ic_raw_intr_stat_t
#define bustype_CAVM_I2CX_IC_RAW_INTR_STAT(a) CSR_TYPE_RSL32b
#define basename_CAVM_I2CX_IC_RAW_INTR_STAT(a) "I2CX_IC_RAW_INTR_STAT"
#define device_bar_CAVM_I2CX_IC_RAW_INTR_STAT(a) 0x0 /* PF_BAR0 */
#define busnum_CAVM_I2CX_IC_RAW_INTR_STAT(a) (a)
#define arguments_CAVM_I2CX_IC_RAW_INTR_STAT(a) (a),-1,-1,-1

/**
 * Register (RSL32b) i2c#_ic_reg_timeout_rst
 *
 * I2C Ic Reg Timeout Rst Register
 * Register timeout counter reset register
 * This register keeps the timeout value of register timer counter. The reset value of
 * the register is REG_TIMEOUT_VALUE. The default reset value can be further modified
 * if HC_REG_TIMEOUT_VA      LUE = 0. The final programmed value (or the default reset
 * value if not programmed) determines from what value the register timeout counter
 * starts counting down. A zero on this counter wil      l break the waited transaction
 * with PSLVERR as high. The minimum value written to this register must be greater
 * than or equal to 4
 */
union cavm_i2cx_ic_reg_timeout_rst
{
    uint32_t u;
    struct cavm_i2cx_ic_reg_timeout_rst_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t rsvd_reg_timeout_rst  : 28; /**< [ 31:  4](RO) Reserved bits - Read Only */
        uint32_t reg_timeout_rst       : 4;  /**< [  3:  0](R/W) This field holds reset value of REG_TIMEOUT counter register. */
#else /* Word 0 - Little Endian */
        uint32_t reg_timeout_rst       : 4;  /**< [  3:  0](R/W) This field holds reset value of REG_TIMEOUT counter register. */
        uint32_t rsvd_reg_timeout_rst  : 28; /**< [ 31:  4](RO) Reserved bits - Read Only */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_i2cx_ic_reg_timeout_rst_s cn; */
};
typedef union cavm_i2cx_ic_reg_timeout_rst cavm_i2cx_ic_reg_timeout_rst_t;

static inline uint64_t CAVM_I2CX_IC_REG_TIMEOUT_RST(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_I2CX_IC_REG_TIMEOUT_RST(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CN20KA) && (a<=3))
        return 0xc090100000f0ll + 0x100000000ll * ((a) & 0x3);
    __cavm_csr_fatal("I2CX_IC_REG_TIMEOUT_RST", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_I2CX_IC_REG_TIMEOUT_RST(a) cavm_i2cx_ic_reg_timeout_rst_t
#define bustype_CAVM_I2CX_IC_REG_TIMEOUT_RST(a) CSR_TYPE_RSL32b
#define basename_CAVM_I2CX_IC_REG_TIMEOUT_RST(a) "I2CX_IC_REG_TIMEOUT_RST"
#define device_bar_CAVM_I2CX_IC_REG_TIMEOUT_RST(a) 0x0 /* PF_BAR0 */
#define busnum_CAVM_I2CX_IC_REG_TIMEOUT_RST(a) (a)
#define arguments_CAVM_I2CX_IC_REG_TIMEOUT_RST(a) (a),-1,-1,-1

/**
 * Register (RSL32b) i2c#_ic_rx_tl
 *
 * I2C Ic Rx Tl Register
 * I2C Receive FIFO Threshold Register
 */
union cavm_i2cx_ic_rx_tl
{
    uint32_t u;
    struct cavm_i2cx_ic_rx_tl_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t rsvd_ic_rx_tl         : 24; /**< [ 31:  8](RO) IC_RX_TL Reserved bits - Read Only */
        uint32_t rx_tl                 : 8;  /**< [  7:  0](R/W) Receive FIFO Threshold Level.

                                                                 Controls the level of entries (or above) that triggers
                                                                 the RX_FULL interrupt (bit 2 in IC_RAW_INTR_STAT register).
                                                                 The valid range is 0-255, with the additional restriction that
                                                                 hardware does not allow this value to be set to a value larger
                                                                 than the depth of the buffer. If an attempt is made to do that,
                                                                 the actual value set will be the maximum depth of the buffer.
                                                                 A value of 0 sets the threshold for 1 entry, and a value of 255
                                                                 sets the threshold for 256 entries. */
#else /* Word 0 - Little Endian */
        uint32_t rx_tl                 : 8;  /**< [  7:  0](R/W) Receive FIFO Threshold Level.

                                                                 Controls the level of entries (or above) that triggers
                                                                 the RX_FULL interrupt (bit 2 in IC_RAW_INTR_STAT register).
                                                                 The valid range is 0-255, with the additional restriction that
                                                                 hardware does not allow this value to be set to a value larger
                                                                 than the depth of the buffer. If an attempt is made to do that,
                                                                 the actual value set will be the maximum depth of the buffer.
                                                                 A value of 0 sets the threshold for 1 entry, and a value of 255
                                                                 sets the threshold for 256 entries. */
        uint32_t rsvd_ic_rx_tl         : 24; /**< [ 31:  8](RO) IC_RX_TL Reserved bits - Read Only */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_i2cx_ic_rx_tl_s cn; */
};
typedef union cavm_i2cx_ic_rx_tl cavm_i2cx_ic_rx_tl_t;

static inline uint64_t CAVM_I2CX_IC_RX_TL(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_I2CX_IC_RX_TL(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CN20KA) && (a<=3))
        return 0xc09010000038ll + 0x100000000ll * ((a) & 0x3);
    __cavm_csr_fatal("I2CX_IC_RX_TL", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_I2CX_IC_RX_TL(a) cavm_i2cx_ic_rx_tl_t
#define bustype_CAVM_I2CX_IC_RX_TL(a) CSR_TYPE_RSL32b
#define basename_CAVM_I2CX_IC_RX_TL(a) "I2CX_IC_RX_TL"
#define device_bar_CAVM_I2CX_IC_RX_TL(a) 0x0 /* PF_BAR0 */
#define busnum_CAVM_I2CX_IC_RX_TL(a) (a)
#define arguments_CAVM_I2CX_IC_RX_TL(a) (a),-1,-1,-1

/**
 * Register (RSL32b) i2c#_ic_rxflr
 *
 * I2C Ic Rxflr Register
 * I2C Receive FIFO Level Register.
 * This register contains the number of valid data entries in the receive FIFO buffer.
 * It is cleared whenever:
 *  - The I2C is disabled
 *  - Whenever there is a transmit terminate caused by any of the events tracked in IC_TX_ABRT_SOURCE
 * The register increments whenever data is placed into the receive FIFO and decrements
 * when data is taken from the receive FIFO.
 */
union cavm_i2cx_ic_rxflr
{
    uint32_t u;
    struct cavm_i2cx_ic_rxflr_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t rsvd_rxflr            : 23; /**< [ 31:  9](RO) RXFLR Reserved bits - Read Only */
        uint32_t rxflr                 : 9;  /**< [  8:  0](RO) Receive FIFO Level.
                                                                 Contains the number of valid data entries in the
                                                                 receive FIFO. */
#else /* Word 0 - Little Endian */
        uint32_t rxflr                 : 9;  /**< [  8:  0](RO) Receive FIFO Level.
                                                                 Contains the number of valid data entries in the
                                                                 receive FIFO. */
        uint32_t rsvd_rxflr            : 23; /**< [ 31:  9](RO) RXFLR Reserved bits - Read Only */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_i2cx_ic_rxflr_s cn; */
};
typedef union cavm_i2cx_ic_rxflr cavm_i2cx_ic_rxflr_t;

static inline uint64_t CAVM_I2CX_IC_RXFLR(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_I2CX_IC_RXFLR(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CN20KA) && (a<=3))
        return 0xc09010000078ll + 0x100000000ll * ((a) & 0x3);
    __cavm_csr_fatal("I2CX_IC_RXFLR", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_I2CX_IC_RXFLR(a) cavm_i2cx_ic_rxflr_t
#define bustype_CAVM_I2CX_IC_RXFLR(a) CSR_TYPE_RSL32b
#define basename_CAVM_I2CX_IC_RXFLR(a) "I2CX_IC_RXFLR"
#define device_bar_CAVM_I2CX_IC_RXFLR(a) 0x0 /* PF_BAR0 */
#define busnum_CAVM_I2CX_IC_RXFLR(a) (a)
#define arguments_CAVM_I2CX_IC_RXFLR(a) (a),-1,-1,-1

/**
 * Register (RSL32b) i2c#_ic_sar
 *
 * I2C Ic Sar Register
 * I2C Target Device Address Register
 */
union cavm_i2cx_ic_sar
{
    uint32_t u;
    struct cavm_i2cx_ic_sar_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t rsvd_ic_sar           : 22; /**< [ 31: 10](RO) IC_SAR Reserved bits - Read Only */
        uint32_t ic_sar                : 10; /**< [  9:  0](R/W) The IC_SAR holds the target device address when the I2C is operating as a target. For 7-bit
                                                                 addressing or SMBus (IC_SMBUS=1), only IC_SAR[6:0] is used.

                                                                 This register can be written only when the I2C interface is disabled, which
                                                                 corresponds to the IC_ENABLE[0] register being set to 0. Writes at other times have
                                                                 no effect.

                                                                 Note:
                                                                 The default values cannot be any of the reserved address locations:
                                                                 that is, 0x00 to 0x07, or 0x78 to 0x7f. The correct operation of the
                                                                 device is not guaranteed if you program the IC_SAR or IC_TAR to
                                                                 a reserved value. Refer to Table "I2C/SMBus Definition of Bits in First Byte"
                                                                 for a complete list of these reserved values. */
#else /* Word 0 - Little Endian */
        uint32_t ic_sar                : 10; /**< [  9:  0](R/W) The IC_SAR holds the target device address when the I2C is operating as a target. For 7-bit
                                                                 addressing or SMBus (IC_SMBUS=1), only IC_SAR[6:0] is used.

                                                                 This register can be written only when the I2C interface is disabled, which
                                                                 corresponds to the IC_ENABLE[0] register being set to 0. Writes at other times have
                                                                 no effect.

                                                                 Note:
                                                                 The default values cannot be any of the reserved address locations:
                                                                 that is, 0x00 to 0x07, or 0x78 to 0x7f. The correct operation of the
                                                                 device is not guaranteed if you program the IC_SAR or IC_TAR to
                                                                 a reserved value. Refer to Table "I2C/SMBus Definition of Bits in First Byte"
                                                                 for a complete list of these reserved values. */
        uint32_t rsvd_ic_sar           : 22; /**< [ 31: 10](RO) IC_SAR Reserved bits - Read Only */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_i2cx_ic_sar_s cn; */
};
typedef union cavm_i2cx_ic_sar cavm_i2cx_ic_sar_t;

static inline uint64_t CAVM_I2CX_IC_SAR(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_I2CX_IC_SAR(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CN20KA) && (a<=3))
        return 0xc09010000008ll + 0x100000000ll * ((a) & 0x3);
    __cavm_csr_fatal("I2CX_IC_SAR", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_I2CX_IC_SAR(a) cavm_i2cx_ic_sar_t
#define bustype_CAVM_I2CX_IC_SAR(a) CSR_TYPE_RSL32b
#define basename_CAVM_I2CX_IC_SAR(a) "I2CX_IC_SAR"
#define device_bar_CAVM_I2CX_IC_SAR(a) 0x0 /* PF_BAR0 */
#define busnum_CAVM_I2CX_IC_SAR(a) (a)
#define arguments_CAVM_I2CX_IC_SAR(a) (a),-1,-1,-1

/**
 * Register (RSL32b) i2c#_ic_sar2
 *
 * I2C Ic Sar2 Register
 * I2C Target Device Address Register 2
 */
union cavm_i2cx_ic_sar2
{
    uint32_t u;
    struct cavm_i2cx_ic_sar2_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t rsvd_ic_sar2          : 22; /**< [ 31: 10](RO) IC_SAR2 Reserved bits - Read Only */
        uint32_t ic_sar2               : 10; /**< [  9:  0](R/W) The IC_SAR2 holds the target device address 2 when the I2C is operating as a target. For 7-bit
                                                                 addressing or SMBus (IC_SMBUS=1), only IC_SAR2[6:0] is used.

                                                                 This register can be written only when the I2C interface is disabled, which
                                                                 corresponds to the IC_ENABLE[0] register being set to 0. Writes at other times have
                                                                 no effect.

                                                                 Note:
                                                                 The default values cannot be any of the reserved address locations:
                                                                 that is, 0x00 to 0x07, or 0x78 to 0x7f. The correct operation of the
                                                                 device is not guaranteed if you program the IC_SAR2 or IC_TAR to
                                                                 a reserved value. Refer to Table "I2C/SMBus Definition of Bits in First Byte"
                                                                 for a complete list of these reserved values. */
#else /* Word 0 - Little Endian */
        uint32_t ic_sar2               : 10; /**< [  9:  0](R/W) The IC_SAR2 holds the target device address 2 when the I2C is operating as a target. For 7-bit
                                                                 addressing or SMBus (IC_SMBUS=1), only IC_SAR2[6:0] is used.

                                                                 This register can be written only when the I2C interface is disabled, which
                                                                 corresponds to the IC_ENABLE[0] register being set to 0. Writes at other times have
                                                                 no effect.

                                                                 Note:
                                                                 The default values cannot be any of the reserved address locations:
                                                                 that is, 0x00 to 0x07, or 0x78 to 0x7f. The correct operation of the
                                                                 device is not guaranteed if you program the IC_SAR2 or IC_TAR to
                                                                 a reserved value. Refer to Table "I2C/SMBus Definition of Bits in First Byte"
                                                                 for a complete list of these reserved values. */
        uint32_t rsvd_ic_sar2          : 22; /**< [ 31: 10](RO) IC_SAR2 Reserved bits - Read Only */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_i2cx_ic_sar2_s cn; */
};
typedef union cavm_i2cx_ic_sar2 cavm_i2cx_ic_sar2_t;

static inline uint64_t CAVM_I2CX_IC_SAR2(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_I2CX_IC_SAR2(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CN20KA) && (a<=3))
        return 0xc09010000100ll + 0x100000000ll * ((a) & 0x3);
    __cavm_csr_fatal("I2CX_IC_SAR2", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_I2CX_IC_SAR2(a) cavm_i2cx_ic_sar2_t
#define bustype_CAVM_I2CX_IC_SAR2(a) CSR_TYPE_RSL32b
#define basename_CAVM_I2CX_IC_SAR2(a) "I2CX_IC_SAR2"
#define device_bar_CAVM_I2CX_IC_SAR2(a) 0x0 /* PF_BAR0 */
#define busnum_CAVM_I2CX_IC_SAR2(a) (a)
#define arguments_CAVM_I2CX_IC_SAR2(a) (a),-1,-1,-1

/**
 * Register (RSL32b) i2c#_ic_sar2_smbus_udid_word0
 *
 * I2C Ic Sar2 Smbus Udid Word0 Register
 * This Register can be written only when the DW_apb_i2c is disabled,
 *   which corresponds to IC_ENABLE[0] being set to 0. This register is present only if
 * configuration parameter IC_SAR2_SMBUS_UDID_HC is set to 0.
 *   This register is used to store the Lower 32 bit value of IC_SAR2 Target UDID
 * register i.e. UDID[31:0] used in Address Resolution Protocol of SMBus.
 */
union cavm_i2cx_ic_sar2_smbus_udid_word0
{
    uint32_t u;
    struct cavm_i2cx_ic_sar2_smbus_udid_word0_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t sar2_smbus_udid_word0 : 32; /**< [ 31:  0](R/W) This field is used to store the Lower 32 bit value
                                                                   of IC_SAR2 target unique device identifier used in Address Resolution Protocol. */
#else /* Word 0 - Little Endian */
        uint32_t sar2_smbus_udid_word0 : 32; /**< [ 31:  0](R/W) This field is used to store the Lower 32 bit value
                                                                   of IC_SAR2 target unique device identifier used in Address Resolution Protocol. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_i2cx_ic_sar2_smbus_udid_word0_s cn; */
};
typedef union cavm_i2cx_ic_sar2_smbus_udid_word0 cavm_i2cx_ic_sar2_smbus_udid_word0_t;

static inline uint64_t CAVM_I2CX_IC_SAR2_SMBUS_UDID_WORD0(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_I2CX_IC_SAR2_SMBUS_UDID_WORD0(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CN20KA) && (a<=3))
        return 0xc09010000124ll + 0x100000000ll * ((a) & 0x3);
    __cavm_csr_fatal("I2CX_IC_SAR2_SMBUS_UDID_WORD0", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_I2CX_IC_SAR2_SMBUS_UDID_WORD0(a) cavm_i2cx_ic_sar2_smbus_udid_word0_t
#define bustype_CAVM_I2CX_IC_SAR2_SMBUS_UDID_WORD0(a) CSR_TYPE_RSL32b
#define basename_CAVM_I2CX_IC_SAR2_SMBUS_UDID_WORD0(a) "I2CX_IC_SAR2_SMBUS_UDID_WORD0"
#define device_bar_CAVM_I2CX_IC_SAR2_SMBUS_UDID_WORD0(a) 0x0 /* PF_BAR0 */
#define busnum_CAVM_I2CX_IC_SAR2_SMBUS_UDID_WORD0(a) (a)
#define arguments_CAVM_I2CX_IC_SAR2_SMBUS_UDID_WORD0(a) (a),-1,-1,-1

/**
 * Register (RSL32b) i2c#_ic_sar2_smbus_udid_word1
 *
 * I2C Ic Sar2 Smbus Udid Word1 Register
 * This Register can be written only when the DW_apb_i2c is disabled,
 *   which corresponds to IC_ENABLE[0] being set to 0. This register is present only if
 * configuration parameter IC_SAR2_SMBUS_UDID_HC is set to 0.
 *   This register is used to store the Middle-Lower 32 bit value of IC_SAR2 Target
 * UDID register i.e. UDID[63:32] used in Address Resolution Protocol of SMBus.
 */
union cavm_i2cx_ic_sar2_smbus_udid_word1
{
    uint32_t u;
    struct cavm_i2cx_ic_sar2_smbus_udid_word1_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t sar2_smbus_udid_word1 : 32; /**< [ 31:  0](R/W) This field is used to store the Middle-Lower 32 bit value
                                                                   of IC_SAR2 target unique device identifier used in Address Resolution Protocol. */
#else /* Word 0 - Little Endian */
        uint32_t sar2_smbus_udid_word1 : 32; /**< [ 31:  0](R/W) This field is used to store the Middle-Lower 32 bit value
                                                                   of IC_SAR2 target unique device identifier used in Address Resolution Protocol. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_i2cx_ic_sar2_smbus_udid_word1_s cn; */
};
typedef union cavm_i2cx_ic_sar2_smbus_udid_word1 cavm_i2cx_ic_sar2_smbus_udid_word1_t;

static inline uint64_t CAVM_I2CX_IC_SAR2_SMBUS_UDID_WORD1(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_I2CX_IC_SAR2_SMBUS_UDID_WORD1(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CN20KA) && (a<=3))
        return 0xc09010000128ll + 0x100000000ll * ((a) & 0x3);
    __cavm_csr_fatal("I2CX_IC_SAR2_SMBUS_UDID_WORD1", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_I2CX_IC_SAR2_SMBUS_UDID_WORD1(a) cavm_i2cx_ic_sar2_smbus_udid_word1_t
#define bustype_CAVM_I2CX_IC_SAR2_SMBUS_UDID_WORD1(a) CSR_TYPE_RSL32b
#define basename_CAVM_I2CX_IC_SAR2_SMBUS_UDID_WORD1(a) "I2CX_IC_SAR2_SMBUS_UDID_WORD1"
#define device_bar_CAVM_I2CX_IC_SAR2_SMBUS_UDID_WORD1(a) 0x0 /* PF_BAR0 */
#define busnum_CAVM_I2CX_IC_SAR2_SMBUS_UDID_WORD1(a) (a)
#define arguments_CAVM_I2CX_IC_SAR2_SMBUS_UDID_WORD1(a) (a),-1,-1,-1

/**
 * Register (RSL32b) i2c#_ic_sar2_smbus_udid_word2
 *
 * I2C Ic Sar2 Smbus Udid Word2 Register
 * This Register can be written only when the DW_apb_i2c is disabled,
 *   which corresponds to IC_ENABLE[0] being set to 0. This register is present only if
 * configuration parameter IC_SAR2_SMBUS_UDID_HC is set to 0.
 *   This register is used to store the Middle-Upper 32 bit value of IC_SAR2 Target
 * UDID register i.e. UDID[95:64] used in Address Resolution Protocol of SMBus.
 */
union cavm_i2cx_ic_sar2_smbus_udid_word2
{
    uint32_t u;
    struct cavm_i2cx_ic_sar2_smbus_udid_word2_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t sar2_smbus_udid_word2 : 32; /**< [ 31:  0](R/W) This field is used to store the Middle-Upper 32 bit value
                                                                   of IC_SAR2 target unique device identifier used in Address Resolution Protocol. */
#else /* Word 0 - Little Endian */
        uint32_t sar2_smbus_udid_word2 : 32; /**< [ 31:  0](R/W) This field is used to store the Middle-Upper 32 bit value
                                                                   of IC_SAR2 target unique device identifier used in Address Resolution Protocol. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_i2cx_ic_sar2_smbus_udid_word2_s cn; */
};
typedef union cavm_i2cx_ic_sar2_smbus_udid_word2 cavm_i2cx_ic_sar2_smbus_udid_word2_t;

static inline uint64_t CAVM_I2CX_IC_SAR2_SMBUS_UDID_WORD2(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_I2CX_IC_SAR2_SMBUS_UDID_WORD2(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CN20KA) && (a<=3))
        return 0xc0901000012cll + 0x100000000ll * ((a) & 0x3);
    __cavm_csr_fatal("I2CX_IC_SAR2_SMBUS_UDID_WORD2", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_I2CX_IC_SAR2_SMBUS_UDID_WORD2(a) cavm_i2cx_ic_sar2_smbus_udid_word2_t
#define bustype_CAVM_I2CX_IC_SAR2_SMBUS_UDID_WORD2(a) CSR_TYPE_RSL32b
#define basename_CAVM_I2CX_IC_SAR2_SMBUS_UDID_WORD2(a) "I2CX_IC_SAR2_SMBUS_UDID_WORD2"
#define device_bar_CAVM_I2CX_IC_SAR2_SMBUS_UDID_WORD2(a) 0x0 /* PF_BAR0 */
#define busnum_CAVM_I2CX_IC_SAR2_SMBUS_UDID_WORD2(a) (a)
#define arguments_CAVM_I2CX_IC_SAR2_SMBUS_UDID_WORD2(a) (a),-1,-1,-1

/**
 * Register (RSL32b) i2c#_ic_sar2_smbus_udid_word3
 *
 * I2C Ic Sar2 Smbus Udid Word3 Register
 * This Register can be written only when the DW_apb_i2c is disabled,
 *   which corresponds to IC_ENABLE[0] being set to 0. This register is present only if
 * configuration parameter IC_SAR2_SMBUS_UDID_HC is set to 0.
 *   This register is used to store the Upper 32 bit value of IC_SAR2 Target UDID
 * register i.e. UDID[127:96] used in Address Resolution Protocol of SMBus.
 */
union cavm_i2cx_ic_sar2_smbus_udid_word3
{
    uint32_t u;
    struct cavm_i2cx_ic_sar2_smbus_udid_word3_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t sar2_smbus_udid_word3 : 32; /**< [ 31:  0](R/W) This field is used to store the Upper 32 bit value
                                                                   of IC_SAR2 target unique device identifier used in Address Resolution Protocol. */
#else /* Word 0 - Little Endian */
        uint32_t sar2_smbus_udid_word3 : 32; /**< [ 31:  0](R/W) This field is used to store the Upper 32 bit value
                                                                   of IC_SAR2 target unique device identifier used in Address Resolution Protocol. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_i2cx_ic_sar2_smbus_udid_word3_s cn; */
};
typedef union cavm_i2cx_ic_sar2_smbus_udid_word3 cavm_i2cx_ic_sar2_smbus_udid_word3_t;

static inline uint64_t CAVM_I2CX_IC_SAR2_SMBUS_UDID_WORD3(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_I2CX_IC_SAR2_SMBUS_UDID_WORD3(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CN20KA) && (a<=3))
        return 0xc09010000130ll + 0x100000000ll * ((a) & 0x3);
    __cavm_csr_fatal("I2CX_IC_SAR2_SMBUS_UDID_WORD3", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_I2CX_IC_SAR2_SMBUS_UDID_WORD3(a) cavm_i2cx_ic_sar2_smbus_udid_word3_t
#define bustype_CAVM_I2CX_IC_SAR2_SMBUS_UDID_WORD3(a) CSR_TYPE_RSL32b
#define basename_CAVM_I2CX_IC_SAR2_SMBUS_UDID_WORD3(a) "I2CX_IC_SAR2_SMBUS_UDID_WORD3"
#define device_bar_CAVM_I2CX_IC_SAR2_SMBUS_UDID_WORD3(a) 0x0 /* PF_BAR0 */
#define busnum_CAVM_I2CX_IC_SAR2_SMBUS_UDID_WORD3(a) (a)
#define arguments_CAVM_I2CX_IC_SAR2_SMBUS_UDID_WORD3(a) (a),-1,-1,-1

/**
 * Register (RSL32b) i2c#_ic_sar3
 *
 * I2C Ic Sar3 Register
 * I2C Target Device Address Register 3
 */
union cavm_i2cx_ic_sar3
{
    uint32_t u;
    struct cavm_i2cx_ic_sar3_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t rsvd_ic_sar3          : 22; /**< [ 31: 10](RO) IC_SAR3 Reserved bits - Read Only */
        uint32_t ic_sar3               : 10; /**< [  9:  0](R/W) The IC_SAR3 holds the target device address 3 when the I2C is operating as a target. For 7-bit
                                                                 addressing or SMBus (IC_SMBUS=1), only IC_SAR3[6:0] is used.

                                                                 This register can be written only when the I2C interface is disabled, which
                                                                 corresponds to the IC_ENABLE[0] register being set to 0. Writes at other times have
                                                                 no effect.

                                                                 Note:
                                                                 The default values cannot be any of the reserved address locations:
                                                                 that is, 0x00 to 0x07, or 0x78 to 0x7f. The correct operation of the
                                                                 device is not guaranteed if you program the IC_SAR3 or IC_TAR to
                                                                 a reserved value. Refer to Table "I2C/SMBus Definition of Bits in First Byte"
                                                                 for a complete list of these reserved values. */
#else /* Word 0 - Little Endian */
        uint32_t ic_sar3               : 10; /**< [  9:  0](R/W) The IC_SAR3 holds the target device address 3 when the I2C is operating as a target. For 7-bit
                                                                 addressing or SMBus (IC_SMBUS=1), only IC_SAR3[6:0] is used.

                                                                 This register can be written only when the I2C interface is disabled, which
                                                                 corresponds to the IC_ENABLE[0] register being set to 0. Writes at other times have
                                                                 no effect.

                                                                 Note:
                                                                 The default values cannot be any of the reserved address locations:
                                                                 that is, 0x00 to 0x07, or 0x78 to 0x7f. The correct operation of the
                                                                 device is not guaranteed if you program the IC_SAR3 or IC_TAR to
                                                                 a reserved value. Refer to Table "I2C/SMBus Definition of Bits in First Byte"
                                                                 for a complete list of these reserved values. */
        uint32_t rsvd_ic_sar3          : 22; /**< [ 31: 10](RO) IC_SAR3 Reserved bits - Read Only */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_i2cx_ic_sar3_s cn; */
};
typedef union cavm_i2cx_ic_sar3 cavm_i2cx_ic_sar3_t;

static inline uint64_t CAVM_I2CX_IC_SAR3(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_I2CX_IC_SAR3(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CN20KA) && (a<=3))
        return 0xc09010000104ll + 0x100000000ll * ((a) & 0x3);
    __cavm_csr_fatal("I2CX_IC_SAR3", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_I2CX_IC_SAR3(a) cavm_i2cx_ic_sar3_t
#define bustype_CAVM_I2CX_IC_SAR3(a) CSR_TYPE_RSL32b
#define basename_CAVM_I2CX_IC_SAR3(a) "I2CX_IC_SAR3"
#define device_bar_CAVM_I2CX_IC_SAR3(a) 0x0 /* PF_BAR0 */
#define busnum_CAVM_I2CX_IC_SAR3(a) (a)
#define arguments_CAVM_I2CX_IC_SAR3(a) (a),-1,-1,-1

/**
 * Register (RSL32b) i2c#_ic_sar3_smbus_udid_word0
 *
 * I2C Ic Sar3 Smbus Udid Word0 Register
 * This Register can be written only when the DW_apb_i2c is disabled,
 *   which corresponds to IC_ENABLE[0] being set to 0. This register is present only if
 * configuration parameter IC_SAR3_SMBUS_UDID_HC is set to 0.
 *   This register is used to store the Lower 32 bit value of IC_SAR3 Target UDID
 * register i.e. UDID[31:0] used in Address Resolution Protocol of SMBus.
 */
union cavm_i2cx_ic_sar3_smbus_udid_word0
{
    uint32_t u;
    struct cavm_i2cx_ic_sar3_smbus_udid_word0_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t sar3_smbus_udid_word0 : 32; /**< [ 31:  0](R/W) This field is used to store the Lower 32 bit value
                                                                   of IC_SAR3 target unique device identifier used in Address Resolution Protocol. */
#else /* Word 0 - Little Endian */
        uint32_t sar3_smbus_udid_word0 : 32; /**< [ 31:  0](R/W) This field is used to store the Lower 32 bit value
                                                                   of IC_SAR3 target unique device identifier used in Address Resolution Protocol. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_i2cx_ic_sar3_smbus_udid_word0_s cn; */
};
typedef union cavm_i2cx_ic_sar3_smbus_udid_word0 cavm_i2cx_ic_sar3_smbus_udid_word0_t;

static inline uint64_t CAVM_I2CX_IC_SAR3_SMBUS_UDID_WORD0(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_I2CX_IC_SAR3_SMBUS_UDID_WORD0(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CN20KA) && (a<=3))
        return 0xc09010000134ll + 0x100000000ll * ((a) & 0x3);
    __cavm_csr_fatal("I2CX_IC_SAR3_SMBUS_UDID_WORD0", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_I2CX_IC_SAR3_SMBUS_UDID_WORD0(a) cavm_i2cx_ic_sar3_smbus_udid_word0_t
#define bustype_CAVM_I2CX_IC_SAR3_SMBUS_UDID_WORD0(a) CSR_TYPE_RSL32b
#define basename_CAVM_I2CX_IC_SAR3_SMBUS_UDID_WORD0(a) "I2CX_IC_SAR3_SMBUS_UDID_WORD0"
#define device_bar_CAVM_I2CX_IC_SAR3_SMBUS_UDID_WORD0(a) 0x0 /* PF_BAR0 */
#define busnum_CAVM_I2CX_IC_SAR3_SMBUS_UDID_WORD0(a) (a)
#define arguments_CAVM_I2CX_IC_SAR3_SMBUS_UDID_WORD0(a) (a),-1,-1,-1

/**
 * Register (RSL32b) i2c#_ic_sar3_smbus_udid_word1
 *
 * I2C Ic Sar3 Smbus Udid Word1 Register
 * This Register can be written only when the DW_apb_i2c is disabled,
 *   which corresponds to IC_ENABLE[0] being set to 0. This register is present only if
 * configuration parameter IC_SAR3_SMBUS_UDID_HC is set to 0.
 *   This register is used to store the Middle-Lower 32 bit value of IC_SAR3 Target
 * UDID register i.e. UDID[63:32] used in Address Resolution Protocol of SMBus.
 */
union cavm_i2cx_ic_sar3_smbus_udid_word1
{
    uint32_t u;
    struct cavm_i2cx_ic_sar3_smbus_udid_word1_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t sar3_smbus_udid_word1 : 32; /**< [ 31:  0](R/W) This field is used to store the Middle-Lower 32 bit value
                                                                   of IC_SAR3 target unique device identifier used in Address Resolution Protocol. */
#else /* Word 0 - Little Endian */
        uint32_t sar3_smbus_udid_word1 : 32; /**< [ 31:  0](R/W) This field is used to store the Middle-Lower 32 bit value
                                                                   of IC_SAR3 target unique device identifier used in Address Resolution Protocol. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_i2cx_ic_sar3_smbus_udid_word1_s cn; */
};
typedef union cavm_i2cx_ic_sar3_smbus_udid_word1 cavm_i2cx_ic_sar3_smbus_udid_word1_t;

static inline uint64_t CAVM_I2CX_IC_SAR3_SMBUS_UDID_WORD1(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_I2CX_IC_SAR3_SMBUS_UDID_WORD1(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CN20KA) && (a<=3))
        return 0xc09010000138ll + 0x100000000ll * ((a) & 0x3);
    __cavm_csr_fatal("I2CX_IC_SAR3_SMBUS_UDID_WORD1", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_I2CX_IC_SAR3_SMBUS_UDID_WORD1(a) cavm_i2cx_ic_sar3_smbus_udid_word1_t
#define bustype_CAVM_I2CX_IC_SAR3_SMBUS_UDID_WORD1(a) CSR_TYPE_RSL32b
#define basename_CAVM_I2CX_IC_SAR3_SMBUS_UDID_WORD1(a) "I2CX_IC_SAR3_SMBUS_UDID_WORD1"
#define device_bar_CAVM_I2CX_IC_SAR3_SMBUS_UDID_WORD1(a) 0x0 /* PF_BAR0 */
#define busnum_CAVM_I2CX_IC_SAR3_SMBUS_UDID_WORD1(a) (a)
#define arguments_CAVM_I2CX_IC_SAR3_SMBUS_UDID_WORD1(a) (a),-1,-1,-1

/**
 * Register (RSL32b) i2c#_ic_sar3_smbus_udid_word2
 *
 * I2C Ic Sar3 Smbus Udid Word2 Register
 * This Register can be written only when the DW_apb_i2c is disabled,
 *   which corresponds to IC_ENABLE[0] being set to 0. This register is present only if
 * configuration parameter IC_SAR3_SMBUS_UDID_HC is set to 0.
 *   This register is used to store the Middle-Upper 32 bit value of IC_SAR3 Target
 * UDID register i.e. UDID[95:64] used in Address Resolution Protocol of SMBus.
 */
union cavm_i2cx_ic_sar3_smbus_udid_word2
{
    uint32_t u;
    struct cavm_i2cx_ic_sar3_smbus_udid_word2_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t sar3_smbus_udid_word2 : 32; /**< [ 31:  0](R/W) This field is used to store the Middle-Upper 32 bit value
                                                                   of IC_SAR3 target unique device identifier used in Address Resolution Protocol. */
#else /* Word 0 - Little Endian */
        uint32_t sar3_smbus_udid_word2 : 32; /**< [ 31:  0](R/W) This field is used to store the Middle-Upper 32 bit value
                                                                   of IC_SAR3 target unique device identifier used in Address Resolution Protocol. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_i2cx_ic_sar3_smbus_udid_word2_s cn; */
};
typedef union cavm_i2cx_ic_sar3_smbus_udid_word2 cavm_i2cx_ic_sar3_smbus_udid_word2_t;

static inline uint64_t CAVM_I2CX_IC_SAR3_SMBUS_UDID_WORD2(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_I2CX_IC_SAR3_SMBUS_UDID_WORD2(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CN20KA) && (a<=3))
        return 0xc0901000013cll + 0x100000000ll * ((a) & 0x3);
    __cavm_csr_fatal("I2CX_IC_SAR3_SMBUS_UDID_WORD2", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_I2CX_IC_SAR3_SMBUS_UDID_WORD2(a) cavm_i2cx_ic_sar3_smbus_udid_word2_t
#define bustype_CAVM_I2CX_IC_SAR3_SMBUS_UDID_WORD2(a) CSR_TYPE_RSL32b
#define basename_CAVM_I2CX_IC_SAR3_SMBUS_UDID_WORD2(a) "I2CX_IC_SAR3_SMBUS_UDID_WORD2"
#define device_bar_CAVM_I2CX_IC_SAR3_SMBUS_UDID_WORD2(a) 0x0 /* PF_BAR0 */
#define busnum_CAVM_I2CX_IC_SAR3_SMBUS_UDID_WORD2(a) (a)
#define arguments_CAVM_I2CX_IC_SAR3_SMBUS_UDID_WORD2(a) (a),-1,-1,-1

/**
 * Register (RSL32b) i2c#_ic_sar3_smbus_udid_word3
 *
 * I2C Ic Sar3 Smbus Udid Word3 Register
 * This Register can be written only when the DW_apb_i2c is disabled,
 *   which corresponds to IC_ENABLE[0] being set to 0. This register is present only if
 * configuration parameter IC_SAR3_SMBUS_UDID_HC is set to 0.
 *   This register is used to store the Upper 32 bit value of IC_SAR3 Target UDID
 * register i.e. UDID[127:96] used in Address Resolution Protocol of SMBus.
 */
union cavm_i2cx_ic_sar3_smbus_udid_word3
{
    uint32_t u;
    struct cavm_i2cx_ic_sar3_smbus_udid_word3_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t sar3_smbus_udid_word3 : 32; /**< [ 31:  0](R/W) This field is used to store the Upper 32 bit value
                                                                   of IC_SAR3 target unique device identifier used in Address Resolution Protocol. */
#else /* Word 0 - Little Endian */
        uint32_t sar3_smbus_udid_word3 : 32; /**< [ 31:  0](R/W) This field is used to store the Upper 32 bit value
                                                                   of IC_SAR3 target unique device identifier used in Address Resolution Protocol. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_i2cx_ic_sar3_smbus_udid_word3_s cn; */
};
typedef union cavm_i2cx_ic_sar3_smbus_udid_word3 cavm_i2cx_ic_sar3_smbus_udid_word3_t;

static inline uint64_t CAVM_I2CX_IC_SAR3_SMBUS_UDID_WORD3(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_I2CX_IC_SAR3_SMBUS_UDID_WORD3(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CN20KA) && (a<=3))
        return 0xc09010000140ll + 0x100000000ll * ((a) & 0x3);
    __cavm_csr_fatal("I2CX_IC_SAR3_SMBUS_UDID_WORD3", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_I2CX_IC_SAR3_SMBUS_UDID_WORD3(a) cavm_i2cx_ic_sar3_smbus_udid_word3_t
#define bustype_CAVM_I2CX_IC_SAR3_SMBUS_UDID_WORD3(a) CSR_TYPE_RSL32b
#define basename_CAVM_I2CX_IC_SAR3_SMBUS_UDID_WORD3(a) "I2CX_IC_SAR3_SMBUS_UDID_WORD3"
#define device_bar_CAVM_I2CX_IC_SAR3_SMBUS_UDID_WORD3(a) 0x0 /* PF_BAR0 */
#define busnum_CAVM_I2CX_IC_SAR3_SMBUS_UDID_WORD3(a) (a)
#define arguments_CAVM_I2CX_IC_SAR3_SMBUS_UDID_WORD3(a) (a),-1,-1,-1

/**
 * Register (RSL32b) i2c#_ic_sar4
 *
 * I2C Ic Sar4 Register
 * I2C Target Device Address Register 4
 */
union cavm_i2cx_ic_sar4
{
    uint32_t u;
    struct cavm_i2cx_ic_sar4_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t rsvd_ic_sar4          : 22; /**< [ 31: 10](RO) IC_SAR4 Reserved bits - Read Only */
        uint32_t ic_sar4               : 10; /**< [  9:  0](R/W) The IC_SAR4 holds the target device address 4 when the I2C is operating as a target. For 7-bit
                                                                 addressing or SMBus mode (IC_SMBUS=1), only IC_SAR4[6:0] is used.

                                                                 This register can be written only when the I2C interface is disabled, which
                                                                 corresponds to the IC_ENABLE[0] register being set to 0. Writes at other times have
                                                                 no effect.

                                                                 Note:
                                                                 The default values cannot be any of the reserved address locations:
                                                                 that is, 0x00 to 0x07, or 0x78 to 0x7f. The correct operation of the
                                                                 device is not guaranteed if you program the IC_SAR4 or IC_TAR to
                                                                 a reserved value. Refer to Table "I2C/SMBus Definition of Bits in First Byte"
                                                                 for a complete list of these reserved values. */
#else /* Word 0 - Little Endian */
        uint32_t ic_sar4               : 10; /**< [  9:  0](R/W) The IC_SAR4 holds the target device address 4 when the I2C is operating as a target. For 7-bit
                                                                 addressing or SMBus mode (IC_SMBUS=1), only IC_SAR4[6:0] is used.

                                                                 This register can be written only when the I2C interface is disabled, which
                                                                 corresponds to the IC_ENABLE[0] register being set to 0. Writes at other times have
                                                                 no effect.

                                                                 Note:
                                                                 The default values cannot be any of the reserved address locations:
                                                                 that is, 0x00 to 0x07, or 0x78 to 0x7f. The correct operation of the
                                                                 device is not guaranteed if you program the IC_SAR4 or IC_TAR to
                                                                 a reserved value. Refer to Table "I2C/SMBus Definition of Bits in First Byte"
                                                                 for a complete list of these reserved values. */
        uint32_t rsvd_ic_sar4          : 22; /**< [ 31: 10](RO) IC_SAR4 Reserved bits - Read Only */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_i2cx_ic_sar4_s cn; */
};
typedef union cavm_i2cx_ic_sar4 cavm_i2cx_ic_sar4_t;

static inline uint64_t CAVM_I2CX_IC_SAR4(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_I2CX_IC_SAR4(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CN20KA) && (a<=3))
        return 0xc09010000108ll + 0x100000000ll * ((a) & 0x3);
    __cavm_csr_fatal("I2CX_IC_SAR4", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_I2CX_IC_SAR4(a) cavm_i2cx_ic_sar4_t
#define bustype_CAVM_I2CX_IC_SAR4(a) CSR_TYPE_RSL32b
#define basename_CAVM_I2CX_IC_SAR4(a) "I2CX_IC_SAR4"
#define device_bar_CAVM_I2CX_IC_SAR4(a) 0x0 /* PF_BAR0 */
#define busnum_CAVM_I2CX_IC_SAR4(a) (a)
#define arguments_CAVM_I2CX_IC_SAR4(a) (a),-1,-1,-1

/**
 * Register (RSL32b) i2c#_ic_sar4_smbus_udid_word0
 *
 * I2C Ic Sar4 Smbus Udid Word0 Register
 * This Register can be written only when the DW_apb_i2c is disabled,
 *   which corresponds to IC_ENABLE[0] being set to 0. This register is present only if
 * configuration parameter IC_SAR4_SMBUS_UDID_HC is set to 0.
 *   This register is used to store the Lower 32 bit value of IC_SAR4 Target UDID
 * register i.e. UDID[31:0] used in Address Resolution Protocol of SMBus.
 */
union cavm_i2cx_ic_sar4_smbus_udid_word0
{
    uint32_t u;
    struct cavm_i2cx_ic_sar4_smbus_udid_word0_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t sar4_smbus_udid_word0 : 32; /**< [ 31:  0](R/W) This field is used to store the Lower 32 bit value
                                                                   of IC_SAR4 target unique device identifier used in Address Resolution Protocol. */
#else /* Word 0 - Little Endian */
        uint32_t sar4_smbus_udid_word0 : 32; /**< [ 31:  0](R/W) This field is used to store the Lower 32 bit value
                                                                   of IC_SAR4 target unique device identifier used in Address Resolution Protocol. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_i2cx_ic_sar4_smbus_udid_word0_s cn; */
};
typedef union cavm_i2cx_ic_sar4_smbus_udid_word0 cavm_i2cx_ic_sar4_smbus_udid_word0_t;

static inline uint64_t CAVM_I2CX_IC_SAR4_SMBUS_UDID_WORD0(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_I2CX_IC_SAR4_SMBUS_UDID_WORD0(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CN20KA) && (a<=3))
        return 0xc09010000144ll + 0x100000000ll * ((a) & 0x3);
    __cavm_csr_fatal("I2CX_IC_SAR4_SMBUS_UDID_WORD0", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_I2CX_IC_SAR4_SMBUS_UDID_WORD0(a) cavm_i2cx_ic_sar4_smbus_udid_word0_t
#define bustype_CAVM_I2CX_IC_SAR4_SMBUS_UDID_WORD0(a) CSR_TYPE_RSL32b
#define basename_CAVM_I2CX_IC_SAR4_SMBUS_UDID_WORD0(a) "I2CX_IC_SAR4_SMBUS_UDID_WORD0"
#define device_bar_CAVM_I2CX_IC_SAR4_SMBUS_UDID_WORD0(a) 0x0 /* PF_BAR0 */
#define busnum_CAVM_I2CX_IC_SAR4_SMBUS_UDID_WORD0(a) (a)
#define arguments_CAVM_I2CX_IC_SAR4_SMBUS_UDID_WORD0(a) (a),-1,-1,-1

/**
 * Register (RSL32b) i2c#_ic_sar4_smbus_udid_word1
 *
 * I2C Ic Sar4 Smbus Udid Word1 Register
 * This Register can be written only when the DW_apb_i2c is disabled,
 *   which corresponds to IC_ENABLE[0] being set to 0. This register is present only if
 * configuration parameter IC_SAR4_SMBUS_UDID_HC is set to 0.
 *   This register is used to store the Middle-Lower 32 bit value of IC_SAR4 Target
 * UDID register i.e. UDID[63:32] used in Address Resolution Protocol of SMBus.
 */
union cavm_i2cx_ic_sar4_smbus_udid_word1
{
    uint32_t u;
    struct cavm_i2cx_ic_sar4_smbus_udid_word1_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t sar4_smbus_udid_word1 : 32; /**< [ 31:  0](R/W) This field is used to store the Middle-Lower 32 bit value
                                                                   of IC_SAR4 target unique device identifier used in Address Resolution Protocol. */
#else /* Word 0 - Little Endian */
        uint32_t sar4_smbus_udid_word1 : 32; /**< [ 31:  0](R/W) This field is used to store the Middle-Lower 32 bit value
                                                                   of IC_SAR4 target unique device identifier used in Address Resolution Protocol. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_i2cx_ic_sar4_smbus_udid_word1_s cn; */
};
typedef union cavm_i2cx_ic_sar4_smbus_udid_word1 cavm_i2cx_ic_sar4_smbus_udid_word1_t;

static inline uint64_t CAVM_I2CX_IC_SAR4_SMBUS_UDID_WORD1(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_I2CX_IC_SAR4_SMBUS_UDID_WORD1(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CN20KA) && (a<=3))
        return 0xc09010000148ll + 0x100000000ll * ((a) & 0x3);
    __cavm_csr_fatal("I2CX_IC_SAR4_SMBUS_UDID_WORD1", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_I2CX_IC_SAR4_SMBUS_UDID_WORD1(a) cavm_i2cx_ic_sar4_smbus_udid_word1_t
#define bustype_CAVM_I2CX_IC_SAR4_SMBUS_UDID_WORD1(a) CSR_TYPE_RSL32b
#define basename_CAVM_I2CX_IC_SAR4_SMBUS_UDID_WORD1(a) "I2CX_IC_SAR4_SMBUS_UDID_WORD1"
#define device_bar_CAVM_I2CX_IC_SAR4_SMBUS_UDID_WORD1(a) 0x0 /* PF_BAR0 */
#define busnum_CAVM_I2CX_IC_SAR4_SMBUS_UDID_WORD1(a) (a)
#define arguments_CAVM_I2CX_IC_SAR4_SMBUS_UDID_WORD1(a) (a),-1,-1,-1

/**
 * Register (RSL32b) i2c#_ic_sar4_smbus_udid_word2
 *
 * I2C Ic Sar4 Smbus Udid Word2 Register
 * This Register can be written only when the DW_apb_i2c is disabled,
 *   which corresponds to IC_ENABLE[0] being set to 0. This register is present only if
 * configuration parameter IC_SAR4_SMBUS_UDID_HC is set to 0.
 *   This register is used to store the Middle-Upper 32 bit value of IC_SAR4 Target
 * UDID register i.e. UDID[95:64] used in Address Resolution Protocol of SMBus.
 */
union cavm_i2cx_ic_sar4_smbus_udid_word2
{
    uint32_t u;
    struct cavm_i2cx_ic_sar4_smbus_udid_word2_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t sar4_smbus_udid_word2 : 32; /**< [ 31:  0](R/W) This field is used to store the Middle-Upper 32 bit value
                                                                   of IC_SAR4 target unique device identifier used in Address Resolution Protocol. */
#else /* Word 0 - Little Endian */
        uint32_t sar4_smbus_udid_word2 : 32; /**< [ 31:  0](R/W) This field is used to store the Middle-Upper 32 bit value
                                                                   of IC_SAR4 target unique device identifier used in Address Resolution Protocol. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_i2cx_ic_sar4_smbus_udid_word2_s cn; */
};
typedef union cavm_i2cx_ic_sar4_smbus_udid_word2 cavm_i2cx_ic_sar4_smbus_udid_word2_t;

static inline uint64_t CAVM_I2CX_IC_SAR4_SMBUS_UDID_WORD2(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_I2CX_IC_SAR4_SMBUS_UDID_WORD2(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CN20KA) && (a<=3))
        return 0xc0901000014cll + 0x100000000ll * ((a) & 0x3);
    __cavm_csr_fatal("I2CX_IC_SAR4_SMBUS_UDID_WORD2", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_I2CX_IC_SAR4_SMBUS_UDID_WORD2(a) cavm_i2cx_ic_sar4_smbus_udid_word2_t
#define bustype_CAVM_I2CX_IC_SAR4_SMBUS_UDID_WORD2(a) CSR_TYPE_RSL32b
#define basename_CAVM_I2CX_IC_SAR4_SMBUS_UDID_WORD2(a) "I2CX_IC_SAR4_SMBUS_UDID_WORD2"
#define device_bar_CAVM_I2CX_IC_SAR4_SMBUS_UDID_WORD2(a) 0x0 /* PF_BAR0 */
#define busnum_CAVM_I2CX_IC_SAR4_SMBUS_UDID_WORD2(a) (a)
#define arguments_CAVM_I2CX_IC_SAR4_SMBUS_UDID_WORD2(a) (a),-1,-1,-1

/**
 * Register (RSL32b) i2c#_ic_sar4_smbus_udid_word3
 *
 * I2C Ic Sar4 Smbus Udid Word3 Register
 * This Register can be written only when the DW_apb_i2c is disabled,
 *   which corresponds to IC_ENABLE[0] being set to 0. This register is present only if
 * configuration parameter IC_SAR4_SMBUS_UDID_HC is set to 0.
 *   This register is used to store the Upper 32 bit value of IC_SAR4 Target UDID
 * register i.e. UDID[127:96] used in Address Resolution Protocol of SMBus.
 */
union cavm_i2cx_ic_sar4_smbus_udid_word3
{
    uint32_t u;
    struct cavm_i2cx_ic_sar4_smbus_udid_word3_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t sar4_smbus_udid_word3 : 32; /**< [ 31:  0](R/W) This field is used to store the Upper 32 bit value
                                                                   of IC_SAR4 target unique device identifier used in Address Resolution Protocol. */
#else /* Word 0 - Little Endian */
        uint32_t sar4_smbus_udid_word3 : 32; /**< [ 31:  0](R/W) This field is used to store the Upper 32 bit value
                                                                   of IC_SAR4 target unique device identifier used in Address Resolution Protocol. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_i2cx_ic_sar4_smbus_udid_word3_s cn; */
};
typedef union cavm_i2cx_ic_sar4_smbus_udid_word3 cavm_i2cx_ic_sar4_smbus_udid_word3_t;

static inline uint64_t CAVM_I2CX_IC_SAR4_SMBUS_UDID_WORD3(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_I2CX_IC_SAR4_SMBUS_UDID_WORD3(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CN20KA) && (a<=3))
        return 0xc09010000150ll + 0x100000000ll * ((a) & 0x3);
    __cavm_csr_fatal("I2CX_IC_SAR4_SMBUS_UDID_WORD3", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_I2CX_IC_SAR4_SMBUS_UDID_WORD3(a) cavm_i2cx_ic_sar4_smbus_udid_word3_t
#define bustype_CAVM_I2CX_IC_SAR4_SMBUS_UDID_WORD3(a) CSR_TYPE_RSL32b
#define basename_CAVM_I2CX_IC_SAR4_SMBUS_UDID_WORD3(a) "I2CX_IC_SAR4_SMBUS_UDID_WORD3"
#define device_bar_CAVM_I2CX_IC_SAR4_SMBUS_UDID_WORD3(a) 0x0 /* PF_BAR0 */
#define busnum_CAVM_I2CX_IC_SAR4_SMBUS_UDID_WORD3(a) (a)
#define arguments_CAVM_I2CX_IC_SAR4_SMBUS_UDID_WORD3(a) (a),-1,-1,-1

/**
 * Register (RSL32b) i2c#_ic_scl_stuck_at_low_timeout
 *
 * I2C Ic Scl Stuck At Low Timeout Register
 * I2C SCL Stuck at Low Timeout.
 *
 * This register is used to store the duration, measured in ic_clk cycles, used to
 * generate an Interrupt (ic_scl_stuck_at_low_intr/ic_scl_stuck_at_low_intr_n) if SCL
 * is held low for the IC_SCL_STUCK_LOW_TIMEOUT duration.
 */
union cavm_i2cx_ic_scl_stuck_at_low_timeout
{
    uint32_t u;
    struct cavm_i2cx_ic_scl_stuck_at_low_timeout_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t ic_scl_stuck_low_timeout : 32;/**< [ 31:  0](R/W) DW_apb_i2c generate the interrupt to indicate SCL stuck at low
                                                                 (ic_scl_stuck_at_low_intr/ic_scl_stuck_at_low_intr_n) if it detects the SCL
                                                                 stuck at low for the IC_SCL_STUCK_LOW_TIMEOUT in units of ic_clk period.
                                                                 This register can be written only when the I2C interface is disabled which
                                                                 corresponds to the IC_ENABLE[0] register being set to 0. Writes at other times
                                                                 have no effect. */
#else /* Word 0 - Little Endian */
        uint32_t ic_scl_stuck_low_timeout : 32;/**< [ 31:  0](R/W) DW_apb_i2c generate the interrupt to indicate SCL stuck at low
                                                                 (ic_scl_stuck_at_low_intr/ic_scl_stuck_at_low_intr_n) if it detects the SCL
                                                                 stuck at low for the IC_SCL_STUCK_LOW_TIMEOUT in units of ic_clk period.
                                                                 This register can be written only when the I2C interface is disabled which
                                                                 corresponds to the IC_ENABLE[0] register being set to 0. Writes at other times
                                                                 have no effect. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_i2cx_ic_scl_stuck_at_low_timeout_s cn; */
};
typedef union cavm_i2cx_ic_scl_stuck_at_low_timeout cavm_i2cx_ic_scl_stuck_at_low_timeout_t;

static inline uint64_t CAVM_I2CX_IC_SCL_STUCK_AT_LOW_TIMEOUT(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_I2CX_IC_SCL_STUCK_AT_LOW_TIMEOUT(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CN20KA) && (a<=3))
        return 0xc090100000acll + 0x100000000ll * ((a) & 0x3);
    __cavm_csr_fatal("I2CX_IC_SCL_STUCK_AT_LOW_TIMEOUT", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_I2CX_IC_SCL_STUCK_AT_LOW_TIMEOUT(a) cavm_i2cx_ic_scl_stuck_at_low_timeout_t
#define bustype_CAVM_I2CX_IC_SCL_STUCK_AT_LOW_TIMEOUT(a) CSR_TYPE_RSL32b
#define basename_CAVM_I2CX_IC_SCL_STUCK_AT_LOW_TIMEOUT(a) "I2CX_IC_SCL_STUCK_AT_LOW_TIMEOUT"
#define device_bar_CAVM_I2CX_IC_SCL_STUCK_AT_LOW_TIMEOUT(a) 0x0 /* PF_BAR0 */
#define busnum_CAVM_I2CX_IC_SCL_STUCK_AT_LOW_TIMEOUT(a) (a)
#define arguments_CAVM_I2CX_IC_SCL_STUCK_AT_LOW_TIMEOUT(a) (a),-1,-1,-1

/**
 * Register (RSL32b) i2c#_ic_sda_hold
 *
 * I2C Ic Sda Hold Register
 * I2C SDA Hold Time Length Register.
 *
 * The bits [15:0] of this register are used to control the hold time of SDA during
 * transmit in both target and controller mode (after SCL goes from HIGH to LOW).
 *
 * The bits [23:16] of this register are used to extend the SDA transition (if any)
 * whenever SCL is HIGH in the receiver in either controller or target mode.
 *
 * Writes to this register succeed only when IC_ENABLE[0]=0.
 *
 * The values in this register are in units of ic_clk period. The value programmed
 * in IC_SDA_TX_HOLD must be greater than the minimum hold time in each mode one
 * cycle in controller mode, seven cycles in target mode for the value to be implemented.
 *
 * The programmed SDA hold time during transmit (IC_SDA_TX_HOLD) cannot exceed at any
 * time the duration of the low part of scl. Therefore the programmed value cannot be
 * larger than N_SCL_LOW-2, where N_SCL_LOW is the duration of the low part of the scl
 * period measured in ic_clk cycles.
 */
union cavm_i2cx_ic_sda_hold
{
    uint32_t u;
    struct cavm_i2cx_ic_sda_hold_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t rsvd_ic_sda_hold      : 8;  /**< [ 31: 24](RO) IC_SDA_HOLD Reserved bits - Read Only */
        uint32_t ic_sda_rx_hold        : 8;  /**< [ 23: 16](R/W) Sets the required SDA hold time
                                                                 in units of ic_clk period, when DW_apb_i2c acts as a receiver. */
        uint32_t ic_sda_tx_hold        : 16; /**< [ 15:  0](R/W) Sets the required SDA hold time
                                                                 in units of ic_clk period, when DW_apb_i2c acts as a transmitter. */
#else /* Word 0 - Little Endian */
        uint32_t ic_sda_tx_hold        : 16; /**< [ 15:  0](R/W) Sets the required SDA hold time
                                                                 in units of ic_clk period, when DW_apb_i2c acts as a transmitter. */
        uint32_t ic_sda_rx_hold        : 8;  /**< [ 23: 16](R/W) Sets the required SDA hold time
                                                                 in units of ic_clk period, when DW_apb_i2c acts as a receiver. */
        uint32_t rsvd_ic_sda_hold      : 8;  /**< [ 31: 24](RO) IC_SDA_HOLD Reserved bits - Read Only */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_i2cx_ic_sda_hold_s cn; */
};
typedef union cavm_i2cx_ic_sda_hold cavm_i2cx_ic_sda_hold_t;

static inline uint64_t CAVM_I2CX_IC_SDA_HOLD(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_I2CX_IC_SDA_HOLD(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CN20KA) && (a<=3))
        return 0xc0901000007cll + 0x100000000ll * ((a) & 0x3);
    __cavm_csr_fatal("I2CX_IC_SDA_HOLD", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_I2CX_IC_SDA_HOLD(a) cavm_i2cx_ic_sda_hold_t
#define bustype_CAVM_I2CX_IC_SDA_HOLD(a) CSR_TYPE_RSL32b
#define basename_CAVM_I2CX_IC_SDA_HOLD(a) "I2CX_IC_SDA_HOLD"
#define device_bar_CAVM_I2CX_IC_SDA_HOLD(a) 0x0 /* PF_BAR0 */
#define busnum_CAVM_I2CX_IC_SDA_HOLD(a) (a)
#define arguments_CAVM_I2CX_IC_SDA_HOLD(a) (a),-1,-1,-1

/**
 * Register (RSL32b) i2c#_ic_sda_setup
 *
 * I2C Ic Sda Setup Register
 * I2C SDA Setup Register.
 *
 * This register controls the amount of time delay
 * (in terms of number of ic_clk clock periods) introduced
 * in the rising edge of SCL - relative to SDA changing - when
 * DW_apb_i2c services a read request in a target-transmitter operation.
 * The relevant I2C requirement is tSU:DAT as detailed in the
 * I2C Bus Specification.
 * This register must be programmed with a value greater than or equal to one ic_clock_period of time.
 *
 * Writes to this register succeed only when IC_ENABLE[0] = 0.
 *
 * Note: The length of setup time is calculated using below formula:
 *
 * - If IC_CLK_FREQ_OPTIMIZATION = 0 : [(IC_SDA_SETUP - 1) * (ic_clock_period)]
 *
 * - If IC_CLK_FREQ_OPTIMIZATION = 1 : [(IC_SDA_SETUP + 1) * (ic_clock_period)]
 *
 * The IC_SDA_SETUP register is only used by the DW_apb_i2c when operating as a target transmitter.
 */
union cavm_i2cx_ic_sda_setup
{
    uint32_t u;
    struct cavm_i2cx_ic_sda_setup_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t rsvd_ic_sda_setup     : 24; /**< [ 31:  8](RO) IC_SDA_SETUP Reserved bits - Read Only */
        uint32_t sda_setup             : 8;  /**< [  7:  0](R/W) SDA Setup (tSU:DAT).

                                                                 It is recommended that if the required delay is 1000ns, then for an ic_clk frequency of 10 MHz:

                                                                 - If IC_CLK_FREQ_OPTIMIZATION = 0 : IC_SDA_SETUP should be programmed to a value of 11.

                                                                 - If IC_CLK_FREQ_OPTIMIZATION = 1 : IC_SDA_SETUP should be programmed to a value of 9. */
#else /* Word 0 - Little Endian */
        uint32_t sda_setup             : 8;  /**< [  7:  0](R/W) SDA Setup (tSU:DAT).

                                                                 It is recommended that if the required delay is 1000ns, then for an ic_clk frequency of 10 MHz:

                                                                 - If IC_CLK_FREQ_OPTIMIZATION = 0 : IC_SDA_SETUP should be programmed to a value of 11.

                                                                 - If IC_CLK_FREQ_OPTIMIZATION = 1 : IC_SDA_SETUP should be programmed to a value of 9. */
        uint32_t rsvd_ic_sda_setup     : 24; /**< [ 31:  8](RO) IC_SDA_SETUP Reserved bits - Read Only */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_i2cx_ic_sda_setup_s cn; */
};
typedef union cavm_i2cx_ic_sda_setup cavm_i2cx_ic_sda_setup_t;

static inline uint64_t CAVM_I2CX_IC_SDA_SETUP(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_I2CX_IC_SDA_SETUP(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CN20KA) && (a<=3))
        return 0xc09010000094ll + 0x100000000ll * ((a) & 0x3);
    __cavm_csr_fatal("I2CX_IC_SDA_SETUP", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_I2CX_IC_SDA_SETUP(a) cavm_i2cx_ic_sda_setup_t
#define bustype_CAVM_I2CX_IC_SDA_SETUP(a) CSR_TYPE_RSL32b
#define basename_CAVM_I2CX_IC_SDA_SETUP(a) "I2CX_IC_SDA_SETUP"
#define device_bar_CAVM_I2CX_IC_SDA_SETUP(a) 0x0 /* PF_BAR0 */
#define busnum_CAVM_I2CX_IC_SDA_SETUP(a) (a)
#define arguments_CAVM_I2CX_IC_SDA_SETUP(a) (a),-1,-1,-1

/**
 * Register (RSL32b) i2c#_ic_sda_stuck_at_low_timeout
 *
 * I2C Ic Sda Stuck At Low Timeout Register
 * I2C SDA Stuck at Low Timeout.
 *
 * This register is used to store the duration, measured in ic_clk cycles, used to
 * Recover the Data (SDA) line through sending SCL pulses if SDA is held low for the
 * mentioned duration.
 */
union cavm_i2cx_ic_sda_stuck_at_low_timeout
{
    uint32_t u;
    struct cavm_i2cx_ic_sda_stuck_at_low_timeout_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t ic_sda_stuck_low_timeout : 32;/**< [ 31:  0](R/W) DW_apb_i2c initiates the recovery of SDA line through enabling the
                                                                 SDA_STUCK_RECOVERY_EN (IC_ENABLE[3]) register bit, if it
                                                                 detects the SDA stuck at low for the
                                                                 IC_SDA_STUCK_LOW_TIMEOUT in units of ic_clk period. */
#else /* Word 0 - Little Endian */
        uint32_t ic_sda_stuck_low_timeout : 32;/**< [ 31:  0](R/W) DW_apb_i2c initiates the recovery of SDA line through enabling the
                                                                 SDA_STUCK_RECOVERY_EN (IC_ENABLE[3]) register bit, if it
                                                                 detects the SDA stuck at low for the
                                                                 IC_SDA_STUCK_LOW_TIMEOUT in units of ic_clk period. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_i2cx_ic_sda_stuck_at_low_timeout_s cn; */
};
typedef union cavm_i2cx_ic_sda_stuck_at_low_timeout cavm_i2cx_ic_sda_stuck_at_low_timeout_t;

static inline uint64_t CAVM_I2CX_IC_SDA_STUCK_AT_LOW_TIMEOUT(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_I2CX_IC_SDA_STUCK_AT_LOW_TIMEOUT(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CN20KA) && (a<=3))
        return 0xc090100000b0ll + 0x100000000ll * ((a) & 0x3);
    __cavm_csr_fatal("I2CX_IC_SDA_STUCK_AT_LOW_TIMEOUT", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_I2CX_IC_SDA_STUCK_AT_LOW_TIMEOUT(a) cavm_i2cx_ic_sda_stuck_at_low_timeout_t
#define bustype_CAVM_I2CX_IC_SDA_STUCK_AT_LOW_TIMEOUT(a) CSR_TYPE_RSL32b
#define basename_CAVM_I2CX_IC_SDA_STUCK_AT_LOW_TIMEOUT(a) "I2CX_IC_SDA_STUCK_AT_LOW_TIMEOUT"
#define device_bar_CAVM_I2CX_IC_SDA_STUCK_AT_LOW_TIMEOUT(a) 0x0 /* PF_BAR0 */
#define busnum_CAVM_I2CX_IC_SDA_STUCK_AT_LOW_TIMEOUT(a) (a)
#define arguments_CAVM_I2CX_IC_SDA_STUCK_AT_LOW_TIMEOUT(a) (a),-1,-1,-1

/**
 * Register (RSL32b) i2c#_ic_slv_data_nack_only
 *
 * I2C Ic Slv Data Nack Only Register
 * Generate Target Data NACK Register
 *
 * The register is used to generate a NACK for
 * the data part of a transfer when DW_apb_i2c is
 * acting as a target-receiver. This register only
 * exists when the IC_SLV_DATA_NACK_ONLY parameter
 * is set to 1. When this parameter disabled, this
 * register does not exist and writing to the register's
 * address has no effect.
 *
 * A write can occur on this register if one of the following conditions are met:
 *  - DW_apb_i2c is disabled (IC_ENABLE[0] = 0)
 *  - Target part is inactive (IC_STATUS[6] = 0)
 * Note: The IC_STATUS[6] is a register read-back location for the internal
 * slv_activity signal; the user
 * should poll this before writing the ic_slv_data_nack_only bit.
 */
union cavm_i2cx_ic_slv_data_nack_only
{
    uint32_t u;
    struct cavm_i2cx_ic_slv_data_nack_only_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t rsvd_ic_slv_data_nack_only : 31;/**< [ 31:  1](RO) IC_SLV_DATA_NACK_ONLY Reserved bits - Read Only */
        uint32_t nack                  : 1;  /**< [  0:  0](R/W) Generate NACK.
                                                                 This NACK generation only occurs when DW_apb_i2c is a
                                                                 target-receiver. If this register is set to a value of 1,
                                                                 it can only generate a NACK after a data byte is received;
                                                                 hence, the data transfer is terminated and the data received
                                                                 is not pushed to the receive buffer.

                                                                 When the register is set to a value of 0, it generates
                                                                 NACK/ACK, depending on normal criteria.
                                                                  - 1: generate NACK after data byte received
                                                                  - 0: generate NACK/ACK normally */
#else /* Word 0 - Little Endian */
        uint32_t nack                  : 1;  /**< [  0:  0](R/W) Generate NACK.
                                                                 This NACK generation only occurs when DW_apb_i2c is a
                                                                 target-receiver. If this register is set to a value of 1,
                                                                 it can only generate a NACK after a data byte is received;
                                                                 hence, the data transfer is terminated and the data received
                                                                 is not pushed to the receive buffer.

                                                                 When the register is set to a value of 0, it generates
                                                                 NACK/ACK, depending on normal criteria.
                                                                  - 1: generate NACK after data byte received
                                                                  - 0: generate NACK/ACK normally */
        uint32_t rsvd_ic_slv_data_nack_only : 31;/**< [ 31:  1](RO) IC_SLV_DATA_NACK_ONLY Reserved bits - Read Only */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_i2cx_ic_slv_data_nack_only_s cn; */
};
typedef union cavm_i2cx_ic_slv_data_nack_only cavm_i2cx_ic_slv_data_nack_only_t;

static inline uint64_t CAVM_I2CX_IC_SLV_DATA_NACK_ONLY(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_I2CX_IC_SLV_DATA_NACK_ONLY(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CN20KA) && (a<=3))
        return 0xc09010000084ll + 0x100000000ll * ((a) & 0x3);
    __cavm_csr_fatal("I2CX_IC_SLV_DATA_NACK_ONLY", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_I2CX_IC_SLV_DATA_NACK_ONLY(a) cavm_i2cx_ic_slv_data_nack_only_t
#define bustype_CAVM_I2CX_IC_SLV_DATA_NACK_ONLY(a) CSR_TYPE_RSL32b
#define basename_CAVM_I2CX_IC_SLV_DATA_NACK_ONLY(a) "I2CX_IC_SLV_DATA_NACK_ONLY"
#define device_bar_CAVM_I2CX_IC_SLV_DATA_NACK_ONLY(a) 0x0 /* PF_BAR0 */
#define busnum_CAVM_I2CX_IC_SLV_DATA_NACK_ONLY(a) (a)
#define arguments_CAVM_I2CX_IC_SLV_DATA_NACK_ONLY(a) (a),-1,-1,-1

/**
 * Register (RSL32b) i2c#_ic_smbus_clk_low_mext
 *
 * I2C Ic Smbus Clk Low Mext Register
 * SMBus Controller Clock Extend Timeout Register.
 *
 * This Register contains the Timeout value used to determine the Controller Clock Extend Timeout
 * in one byte of transfer.
 *
 * This register can be written only when the DW_apb_i2c is disabled, which corresponds
 * to IC_ENABLE[0] being set to 0.
 * This register is present only if configuration parameter IC_SMBUS is set to 1.
 * This register is used to store the duration, measured in ic_clk cycles, used to detect
 * the Controller clock extend timeout if Controller extends the clock (SCL) for the
 * mentioned duration.
 */
union cavm_i2cx_ic_smbus_clk_low_mext
{
    uint32_t u;
    struct cavm_i2cx_ic_smbus_clk_low_mext_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t smbus_clk_low_mext_timeout : 32;/**< [ 31:  0](R/W) This field is used to detect the Controller extend SMBus clock (SCLK) timeout defined
                                                                 from START-to-ACK, ACK-to-ACK, or ACK-to-STOP in Controller mode.
                                                                 The values in this register are in units of ic_clk period. */
#else /* Word 0 - Little Endian */
        uint32_t smbus_clk_low_mext_timeout : 32;/**< [ 31:  0](R/W) This field is used to detect the Controller extend SMBus clock (SCLK) timeout defined
                                                                 from START-to-ACK, ACK-to-ACK, or ACK-to-STOP in Controller mode.
                                                                 The values in this register are in units of ic_clk period. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_i2cx_ic_smbus_clk_low_mext_s cn; */
};
typedef union cavm_i2cx_ic_smbus_clk_low_mext cavm_i2cx_ic_smbus_clk_low_mext_t;

static inline uint64_t CAVM_I2CX_IC_SMBUS_CLK_LOW_MEXT(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_I2CX_IC_SMBUS_CLK_LOW_MEXT(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CN20KA) && (a<=3))
        return 0xc090100000c0ll + 0x100000000ll * ((a) & 0x3);
    __cavm_csr_fatal("I2CX_IC_SMBUS_CLK_LOW_MEXT", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_I2CX_IC_SMBUS_CLK_LOW_MEXT(a) cavm_i2cx_ic_smbus_clk_low_mext_t
#define bustype_CAVM_I2CX_IC_SMBUS_CLK_LOW_MEXT(a) CSR_TYPE_RSL32b
#define basename_CAVM_I2CX_IC_SMBUS_CLK_LOW_MEXT(a) "I2CX_IC_SMBUS_CLK_LOW_MEXT"
#define device_bar_CAVM_I2CX_IC_SMBUS_CLK_LOW_MEXT(a) 0x0 /* PF_BAR0 */
#define busnum_CAVM_I2CX_IC_SMBUS_CLK_LOW_MEXT(a) (a)
#define arguments_CAVM_I2CX_IC_SMBUS_CLK_LOW_MEXT(a) (a),-1,-1,-1

/**
 * Register (RSL32b) i2c#_ic_smbus_clk_low_sext
 *
 * I2C Ic Smbus Clk Low Sext Register
 * SMBus Target Clock Extend Timeout Register.
 *
 * This Register contains the Timeout value used to determine the Target Clock Extend Timeout
 * in one transfer (from START to STOP).
 *
 * This Register can be written only when the DW_apb_i2c is disabled, which corresponds
 * to IC_ENABLE[0] being set to 0. This register is present only if configuration
 * parameter IC_SMBUS is set to 1.
 * This register is used to store the duration, measured in ic_clk cycles, used to
 * detect the target clock extend timeout
 * if target extends the clock (SCL) for the mentioned duration.
 */
union cavm_i2cx_ic_smbus_clk_low_sext
{
    uint32_t u;
    struct cavm_i2cx_ic_smbus_clk_low_sext_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t smbus_clk_low_sext_timeout : 32;/**< [ 31:  0](R/W) This field is used to detect the Target Clock Extend timeout (tLOW:SEXT) in controller mode
                                                                 extended by the target device in one message from the initial START to the STOP.
                                                                 The values in this register are in units of ic_clk period. */
#else /* Word 0 - Little Endian */
        uint32_t smbus_clk_low_sext_timeout : 32;/**< [ 31:  0](R/W) This field is used to detect the Target Clock Extend timeout (tLOW:SEXT) in controller mode
                                                                 extended by the target device in one message from the initial START to the STOP.
                                                                 The values in this register are in units of ic_clk period. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_i2cx_ic_smbus_clk_low_sext_s cn; */
};
typedef union cavm_i2cx_ic_smbus_clk_low_sext cavm_i2cx_ic_smbus_clk_low_sext_t;

static inline uint64_t CAVM_I2CX_IC_SMBUS_CLK_LOW_SEXT(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_I2CX_IC_SMBUS_CLK_LOW_SEXT(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CN20KA) && (a<=3))
        return 0xc090100000bcll + 0x100000000ll * ((a) & 0x3);
    __cavm_csr_fatal("I2CX_IC_SMBUS_CLK_LOW_SEXT", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_I2CX_IC_SMBUS_CLK_LOW_SEXT(a) cavm_i2cx_ic_smbus_clk_low_sext_t
#define bustype_CAVM_I2CX_IC_SMBUS_CLK_LOW_SEXT(a) CSR_TYPE_RSL32b
#define basename_CAVM_I2CX_IC_SMBUS_CLK_LOW_SEXT(a) "I2CX_IC_SMBUS_CLK_LOW_SEXT"
#define device_bar_CAVM_I2CX_IC_SMBUS_CLK_LOW_SEXT(a) 0x0 /* PF_BAR0 */
#define busnum_CAVM_I2CX_IC_SMBUS_CLK_LOW_SEXT(a) (a)
#define arguments_CAVM_I2CX_IC_SMBUS_CLK_LOW_SEXT(a) (a),-1,-1,-1

/**
 * Register (RSL32b) i2c#_ic_smbus_intr_mask
 *
 * I2C Ic Smbus Intr Mask Register
 * SMBus Interrupt Mask Register
 */
union cavm_i2cx_ic_smbus_intr_mask
{
    uint32_t u;
    struct cavm_i2cx_ic_smbus_intr_mask_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t rsvd_ic_smbus_intr_mask : 21;/**< [ 31: 11](RO) IC_SMBUS_INTR_MASK Reserved bits - Read Only */
        uint32_t m_smbus_alert_det     : 1;  /**< [ 10: 10](R/W) This bit masks the R_SMBUS_ALERT_DET interrupt in IC_SMBUS_INTR_STAT register. */
        uint32_t m_smbus_suspend_det   : 1;  /**< [  9:  9](R/W) This bit masks the M_SMBUS_SUSPEND_DET interrupt in IC_SMBUS_INTR_STAT register. */
        uint32_t m_slv_rx_pec_nack     : 1;  /**< [  8:  8](R/W) This bit masks the R_SLV_RX_PEC_NACK interrupt in IC_SMBUS_INTR_STAT register. */
        uint32_t m_arp_assgn_addr_cmd_det : 1;/**< [  7:  7](R/W) This bit masks the R_ARP_ASSGN_ADDR_CMD_DET interrupt in IC_SMBUS_INTR_STAT register. */
        uint32_t m_arp_get_udid_cmd_det : 1; /**< [  6:  6](R/W) This bit masks the R_ARP_GET_UDID_CMD_DET interrupt in IC_SMBUS_INTR_STAT register. */
        uint32_t m_arp_rst_cmd_det     : 1;  /**< [  5:  5](R/W) This bit masks the R_ARP_RST_CMD_DET interrupt in IC_SMBUS_INTR_STAT register. */
        uint32_t m_arp_prepare_cmd_det : 1;  /**< [  4:  4](R/W) This bit masks the R_ARP_PREPARE_CMD_DET interrupt in IC_SMBUS_INTR_STAT register. */
        uint32_t m_host_notify_mst_det : 1;  /**< [  3:  3](R/W) This bit masks the R_HOST_NOTIFY_MST_DET interrupt in IC_SMBUS_INTR_STAT register. */
        uint32_t m_quick_cmd_det       : 1;  /**< [  2:  2](R/W) This bit masks the R_QUICK_CMD_DET interrupt in IC_SMBUS_INTR_STAT register. */
        uint32_t m_mst_clock_extnd_timeout : 1;/**< [  1:  1](R/W) This bit masks the R_MST_CLOCK_EXTND_TIMEOUT interrupt in IC_SMBUS_INTR_STAT register. */
        uint32_t m_slv_clock_extnd_timeout : 1;/**< [  0:  0](R/W) This bit masks the R_SLV_CLOCK_EXTND_TIMEOUT interrupt in IC_SMBUS_INTR_STAT register. */
#else /* Word 0 - Little Endian */
        uint32_t m_slv_clock_extnd_timeout : 1;/**< [  0:  0](R/W) This bit masks the R_SLV_CLOCK_EXTND_TIMEOUT interrupt in IC_SMBUS_INTR_STAT register. */
        uint32_t m_mst_clock_extnd_timeout : 1;/**< [  1:  1](R/W) This bit masks the R_MST_CLOCK_EXTND_TIMEOUT interrupt in IC_SMBUS_INTR_STAT register. */
        uint32_t m_quick_cmd_det       : 1;  /**< [  2:  2](R/W) This bit masks the R_QUICK_CMD_DET interrupt in IC_SMBUS_INTR_STAT register. */
        uint32_t m_host_notify_mst_det : 1;  /**< [  3:  3](R/W) This bit masks the R_HOST_NOTIFY_MST_DET interrupt in IC_SMBUS_INTR_STAT register. */
        uint32_t m_arp_prepare_cmd_det : 1;  /**< [  4:  4](R/W) This bit masks the R_ARP_PREPARE_CMD_DET interrupt in IC_SMBUS_INTR_STAT register. */
        uint32_t m_arp_rst_cmd_det     : 1;  /**< [  5:  5](R/W) This bit masks the R_ARP_RST_CMD_DET interrupt in IC_SMBUS_INTR_STAT register. */
        uint32_t m_arp_get_udid_cmd_det : 1; /**< [  6:  6](R/W) This bit masks the R_ARP_GET_UDID_CMD_DET interrupt in IC_SMBUS_INTR_STAT register. */
        uint32_t m_arp_assgn_addr_cmd_det : 1;/**< [  7:  7](R/W) This bit masks the R_ARP_ASSGN_ADDR_CMD_DET interrupt in IC_SMBUS_INTR_STAT register. */
        uint32_t m_slv_rx_pec_nack     : 1;  /**< [  8:  8](R/W) This bit masks the R_SLV_RX_PEC_NACK interrupt in IC_SMBUS_INTR_STAT register. */
        uint32_t m_smbus_suspend_det   : 1;  /**< [  9:  9](R/W) This bit masks the M_SMBUS_SUSPEND_DET interrupt in IC_SMBUS_INTR_STAT register. */
        uint32_t m_smbus_alert_det     : 1;  /**< [ 10: 10](R/W) This bit masks the R_SMBUS_ALERT_DET interrupt in IC_SMBUS_INTR_STAT register. */
        uint32_t rsvd_ic_smbus_intr_mask : 21;/**< [ 31: 11](RO) IC_SMBUS_INTR_MASK Reserved bits - Read Only */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_i2cx_ic_smbus_intr_mask_s cn; */
};
typedef union cavm_i2cx_ic_smbus_intr_mask cavm_i2cx_ic_smbus_intr_mask_t;

static inline uint64_t CAVM_I2CX_IC_SMBUS_INTR_MASK(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_I2CX_IC_SMBUS_INTR_MASK(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CN20KA) && (a<=3))
        return 0xc090100000ccll + 0x100000000ll * ((a) & 0x3);
    __cavm_csr_fatal("I2CX_IC_SMBUS_INTR_MASK", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_I2CX_IC_SMBUS_INTR_MASK(a) cavm_i2cx_ic_smbus_intr_mask_t
#define bustype_CAVM_I2CX_IC_SMBUS_INTR_MASK(a) CSR_TYPE_RSL32b
#define basename_CAVM_I2CX_IC_SMBUS_INTR_MASK(a) "I2CX_IC_SMBUS_INTR_MASK"
#define device_bar_CAVM_I2CX_IC_SMBUS_INTR_MASK(a) 0x0 /* PF_BAR0 */
#define busnum_CAVM_I2CX_IC_SMBUS_INTR_MASK(a) (a)
#define arguments_CAVM_I2CX_IC_SMBUS_INTR_MASK(a) (a),-1,-1,-1

/**
 * Register (RSL32b) i2c#_ic_smbus_intr_stat
 *
 * I2C Ic Smbus Intr Stat Register
 * SMBUS Interrupt Status Register.
 *
 * Each bit in this register has a corresponding mask bit
 * in the IC_SMBUS_INTR_MASK register. These bits are cleared by writing the matching
 * SMBus interrupt clear register (IC_CLR_SMBUS_INTR) bits. The unmasked raw versions
 * of these bits are
 * available in the IC_SMBUS_RAW_INTR_STAT register.
 */
union cavm_i2cx_ic_smbus_intr_stat
{
    uint32_t u;
    struct cavm_i2cx_ic_smbus_intr_stat_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t rsvd_ic_smbus_intr_stat : 21;/**< [ 31: 11](RO) IC_SMBUS_INTR_STAT Reserved bits - Read Only */
        uint32_t r_smbus_alert_det     : 1;  /**< [ 10: 10](RO) See IC_SMBUS_RAW_INTR_STAT for a detailed description of R_SMBUS_ALERT_DET bit. */
        uint32_t r_smbus_suspend_det   : 1;  /**< [  9:  9](RO) See IC_SMBUS_RAW_INTR_STAT for a detailed description of R_SMBUS_SUSPEND_DET bit. */
        uint32_t r_slv_rx_pec_nack     : 1;  /**< [  8:  8](RO) See IC_SMBUS_RAW_INTR_STAT for a detailed description of R_SLV_RX_PEC_NACK bit. */
        uint32_t r_arp_assgn_addr_cmd_det : 1;/**< [  7:  7](RO) See IC_SMBUS_RAW_INTR_STAT for a detailed description of R_ARP_ASSGN_ADDR_CMD_DET bit. */
        uint32_t r_arp_get_udid_cmd_det : 1; /**< [  6:  6](RO) See IC_SMBUS_RAW_INTR_STAT for a detailed description of R_ARP_GET_UDID_CMD_DET bit. */
        uint32_t r_arp_rst_cmd_det     : 1;  /**< [  5:  5](RO) See IC_SMBUS_RAW_INTR_STAT for a detailed description of R_ARP_RST_CMD_DET bit. */
        uint32_t r_arp_prepare_cmd_det : 1;  /**< [  4:  4](RO) See IC_SMBUS_RAW_INTR_STAT for a detailed description of R_ARP_PREPARE_CMD_DET bit. */
        uint32_t r_host_notify_mst_det : 1;  /**< [  3:  3](RO) See IC_SMBUS_RAW_INTR_STAT for a detailed description of R_HOST_NOTIFY_MST_DET bit. */
        uint32_t r_quick_cmd_det       : 1;  /**< [  2:  2](RO) See IC_SMBUS_RAW_INTR_STAT for a detailed description of R_QUICK_CMD_DET bit. */
        uint32_t r_mst_clock_extnd_timeout : 1;/**< [  1:  1](RO) See IC_SMBUS_RAW_INTR_STAT for a detailed description of R_MST_CLOCK_EXTND_TIMEOUT bit. */
        uint32_t r_slv_clock_extnd_timeout : 1;/**< [  0:  0](RO) See IC_SMBUS_RAW_INTR_STAT for a detailed description of R_SLV_CLOCK_EXTND_TIMEOUT bit. */
#else /* Word 0 - Little Endian */
        uint32_t r_slv_clock_extnd_timeout : 1;/**< [  0:  0](RO) See IC_SMBUS_RAW_INTR_STAT for a detailed description of R_SLV_CLOCK_EXTND_TIMEOUT bit. */
        uint32_t r_mst_clock_extnd_timeout : 1;/**< [  1:  1](RO) See IC_SMBUS_RAW_INTR_STAT for a detailed description of R_MST_CLOCK_EXTND_TIMEOUT bit. */
        uint32_t r_quick_cmd_det       : 1;  /**< [  2:  2](RO) See IC_SMBUS_RAW_INTR_STAT for a detailed description of R_QUICK_CMD_DET bit. */
        uint32_t r_host_notify_mst_det : 1;  /**< [  3:  3](RO) See IC_SMBUS_RAW_INTR_STAT for a detailed description of R_HOST_NOTIFY_MST_DET bit. */
        uint32_t r_arp_prepare_cmd_det : 1;  /**< [  4:  4](RO) See IC_SMBUS_RAW_INTR_STAT for a detailed description of R_ARP_PREPARE_CMD_DET bit. */
        uint32_t r_arp_rst_cmd_det     : 1;  /**< [  5:  5](RO) See IC_SMBUS_RAW_INTR_STAT for a detailed description of R_ARP_RST_CMD_DET bit. */
        uint32_t r_arp_get_udid_cmd_det : 1; /**< [  6:  6](RO) See IC_SMBUS_RAW_INTR_STAT for a detailed description of R_ARP_GET_UDID_CMD_DET bit. */
        uint32_t r_arp_assgn_addr_cmd_det : 1;/**< [  7:  7](RO) See IC_SMBUS_RAW_INTR_STAT for a detailed description of R_ARP_ASSGN_ADDR_CMD_DET bit. */
        uint32_t r_slv_rx_pec_nack     : 1;  /**< [  8:  8](RO) See IC_SMBUS_RAW_INTR_STAT for a detailed description of R_SLV_RX_PEC_NACK bit. */
        uint32_t r_smbus_suspend_det   : 1;  /**< [  9:  9](RO) See IC_SMBUS_RAW_INTR_STAT for a detailed description of R_SMBUS_SUSPEND_DET bit. */
        uint32_t r_smbus_alert_det     : 1;  /**< [ 10: 10](RO) See IC_SMBUS_RAW_INTR_STAT for a detailed description of R_SMBUS_ALERT_DET bit. */
        uint32_t rsvd_ic_smbus_intr_stat : 21;/**< [ 31: 11](RO) IC_SMBUS_INTR_STAT Reserved bits - Read Only */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_i2cx_ic_smbus_intr_stat_s cn; */
};
typedef union cavm_i2cx_ic_smbus_intr_stat cavm_i2cx_ic_smbus_intr_stat_t;

static inline uint64_t CAVM_I2CX_IC_SMBUS_INTR_STAT(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_I2CX_IC_SMBUS_INTR_STAT(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CN20KA) && (a<=3))
        return 0xc090100000c8ll + 0x100000000ll * ((a) & 0x3);
    __cavm_csr_fatal("I2CX_IC_SMBUS_INTR_STAT", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_I2CX_IC_SMBUS_INTR_STAT(a) cavm_i2cx_ic_smbus_intr_stat_t
#define bustype_CAVM_I2CX_IC_SMBUS_INTR_STAT(a) CSR_TYPE_RSL32b
#define basename_CAVM_I2CX_IC_SMBUS_INTR_STAT(a) "I2CX_IC_SMBUS_INTR_STAT"
#define device_bar_CAVM_I2CX_IC_SMBUS_INTR_STAT(a) 0x0 /* PF_BAR0 */
#define busnum_CAVM_I2CX_IC_SMBUS_INTR_STAT(a) (a)
#define arguments_CAVM_I2CX_IC_SMBUS_INTR_STAT(a) (a),-1,-1,-1

/**
 * Register (RSL32b) i2c#_ic_smbus_raw_intr_stat
 *
 * I2C Ic Smbus Raw Intr Stat Register
 * SMBus Raw Interrupt Status Register.
 *
 * Unlike the IC_SMBUS_INTR_STAT register, these bits are not masked so they
 * always show the true status of the DW_apb_i2c.
 */
union cavm_i2cx_ic_smbus_raw_intr_stat
{
    uint32_t u;
    struct cavm_i2cx_ic_smbus_raw_intr_stat_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t rsvd_ic_smbus_raw_intr_stat : 21;/**< [ 31: 11](RO) IC_SMBUS_RAW_INTR_STAT Reserved bits - Read Only */
        uint32_t smbus_alert_det       : 1;  /**< [ 10: 10](RO) Indicates whether a SMBALERT (ic_smbalert_in_n) signal is driven low by the target. */
        uint32_t smbus_suspend_det     : 1;  /**< [  9:  9](RO) Indicates whether a SMBSUS (ic_smbsus_in_n) signal is driven low by the Host. */
        uint32_t slv_rx_pec_nack       : 1;  /**< [  8:  8](RO) Indicates whether a NACK has been sent due to PEC mismatch while working as ARP target. */
        uint32_t arp_assgn_addr_cmd_det : 1; /**< [  7:  7](RO) Indicates whether an Assign Address ARP command has been received. */
        uint32_t arp_get_udid_cmd_det  : 1;  /**< [  6:  6](RO) Indicates whether a Get UDID ARP command has been received. */
        uint32_t arp_rst_cmd_det       : 1;  /**< [  5:  5](RO) Indicates whether a General or Directed Reset ARP command has
                                                                 been received. */
        uint32_t arp_prepare_cmd_det   : 1;  /**< [  4:  4](RO) Indicates whether a prepare to ARP command has been received. */
        uint32_t host_ntfy_mst_det     : 1;  /**< [  3:  3](RO) Indicates whether a Notify ARP Controller ARP command has been received. */
        uint32_t quick_cmd_det         : 1;  /**< [  2:  2](RO) Indicates whether a Quick command has been received on the SMBus interface regardless of
                                                                 whether DW_apb_i2c is operating in target mode.
                                                                 Enabled only when IC_SMBUS=1 is set to 1. */
        uint32_t mst_clock_extnd_timeout : 1;/**< [  1:  1](RO) Indicates whether the Controller device transaction (START-to-ACK, ACK-to-ACK, or ACK-to-STOP)
                                                                 from START to STOP exceeds IC_SMBUS_CLOCK_LOW_MEXT time with in each byte of message.

                                                                 This bit is enabled only when:
                                                                  - IC_SMBUS=1
                                                                  - IC_CON[0]=1
                                                                  - IC_EMPTYFIFO_HOLD_MASTER_EN=1 or
                                                                  - IC_RX_FULL_HLD_BUS_EN=1 */
        uint32_t slv_clock_extnd_timeout : 1;/**< [  0:  0](RO) Indicates whether the transaction from Target (i.e from START to STOP) exceeds
                                                                 IC_SMBUS_CLK_LOW_SEXT time.

                                                                 This bit is enabled only when:
                                                                  - IC_SMBUS=1
                                                                  - IC_CON[0]=1 */
#else /* Word 0 - Little Endian */
        uint32_t slv_clock_extnd_timeout : 1;/**< [  0:  0](RO) Indicates whether the transaction from Target (i.e from START to STOP) exceeds
                                                                 IC_SMBUS_CLK_LOW_SEXT time.

                                                                 This bit is enabled only when:
                                                                  - IC_SMBUS=1
                                                                  - IC_CON[0]=1 */
        uint32_t mst_clock_extnd_timeout : 1;/**< [  1:  1](RO) Indicates whether the Controller device transaction (START-to-ACK, ACK-to-ACK, or ACK-to-STOP)
                                                                 from START to STOP exceeds IC_SMBUS_CLOCK_LOW_MEXT time with in each byte of message.

                                                                 This bit is enabled only when:
                                                                  - IC_SMBUS=1
                                                                  - IC_CON[0]=1
                                                                  - IC_EMPTYFIFO_HOLD_MASTER_EN=1 or
                                                                  - IC_RX_FULL_HLD_BUS_EN=1 */
        uint32_t quick_cmd_det         : 1;  /**< [  2:  2](RO) Indicates whether a Quick command has been received on the SMBus interface regardless of
                                                                 whether DW_apb_i2c is operating in target mode.
                                                                 Enabled only when IC_SMBUS=1 is set to 1. */
        uint32_t host_ntfy_mst_det     : 1;  /**< [  3:  3](RO) Indicates whether a Notify ARP Controller ARP command has been received. */
        uint32_t arp_prepare_cmd_det   : 1;  /**< [  4:  4](RO) Indicates whether a prepare to ARP command has been received. */
        uint32_t arp_rst_cmd_det       : 1;  /**< [  5:  5](RO) Indicates whether a General or Directed Reset ARP command has
                                                                 been received. */
        uint32_t arp_get_udid_cmd_det  : 1;  /**< [  6:  6](RO) Indicates whether a Get UDID ARP command has been received. */
        uint32_t arp_assgn_addr_cmd_det : 1; /**< [  7:  7](RO) Indicates whether an Assign Address ARP command has been received. */
        uint32_t slv_rx_pec_nack       : 1;  /**< [  8:  8](RO) Indicates whether a NACK has been sent due to PEC mismatch while working as ARP target. */
        uint32_t smbus_suspend_det     : 1;  /**< [  9:  9](RO) Indicates whether a SMBSUS (ic_smbsus_in_n) signal is driven low by the Host. */
        uint32_t smbus_alert_det       : 1;  /**< [ 10: 10](RO) Indicates whether a SMBALERT (ic_smbalert_in_n) signal is driven low by the target. */
        uint32_t rsvd_ic_smbus_raw_intr_stat : 21;/**< [ 31: 11](RO) IC_SMBUS_RAW_INTR_STAT Reserved bits - Read Only */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_i2cx_ic_smbus_raw_intr_stat_s cn; */
};
typedef union cavm_i2cx_ic_smbus_raw_intr_stat cavm_i2cx_ic_smbus_raw_intr_stat_t;

static inline uint64_t CAVM_I2CX_IC_SMBUS_RAW_INTR_STAT(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_I2CX_IC_SMBUS_RAW_INTR_STAT(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CN20KA) && (a<=3))
        return 0xc090100000d0ll + 0x100000000ll * ((a) & 0x3);
    __cavm_csr_fatal("I2CX_IC_SMBUS_RAW_INTR_STAT", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_I2CX_IC_SMBUS_RAW_INTR_STAT(a) cavm_i2cx_ic_smbus_raw_intr_stat_t
#define bustype_CAVM_I2CX_IC_SMBUS_RAW_INTR_STAT(a) CSR_TYPE_RSL32b
#define basename_CAVM_I2CX_IC_SMBUS_RAW_INTR_STAT(a) "I2CX_IC_SMBUS_RAW_INTR_STAT"
#define device_bar_CAVM_I2CX_IC_SMBUS_RAW_INTR_STAT(a) 0x0 /* PF_BAR0 */
#define busnum_CAVM_I2CX_IC_SMBUS_RAW_INTR_STAT(a) (a)
#define arguments_CAVM_I2CX_IC_SMBUS_RAW_INTR_STAT(a) (a),-1,-1,-1

/**
 * Register (RSL32b) i2c#_ic_smbus_thigh_max_idle_count
 *
 * I2C Ic Smbus Thigh Max Idle Count Register
 * SMBus Controller THigh MAX Bus-idle count Register.
 *
 * This register programs the Bus-idle time period used when a controller has been
 * dynamically added to the
 * bus or when a controller has generated a clock reset on the bus. This register is
 * used to store the duration,
 * measured in ic_clk cycles, used to detect the Bus Idle condition if SCL and SDA are
 * held high for the
 * mentioned duration. This register can be written only when the DW_apb_i2c is
 * disabled, which corresponds to
 * IC_ENABLE[0] being set to 0. This register is present only if configuration
 * parameter IC_SMBUS is set to 1.
 */
union cavm_i2cx_ic_smbus_thigh_max_idle_count
{
    uint32_t u;
    struct cavm_i2cx_ic_smbus_thigh_max_idle_count_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t rsvd_smbus_thigh_max_bus_idle_cnt : 16;/**< [ 31: 16](RO) SMBUS_THIGH_MAX_BUS_IDLE_CNT Reserved bits - Read Only */
        uint32_t smbus_thigh_max_bus_idle_cnt : 16;/**< [ 15:  0](R/W) This field is used to set the required Bus-Idle time period used when a
                                                                 controller has been dynamically added to the bus and may
                                                                 not have detected a state transition on the SMBCLK or SMBDAT lines.

                                                                 In this case, the controller must wait long enough to ensure that a transfer is
                                                                 not currently in progress
                                                                 The values in this register are in units of ic_clk period. */
#else /* Word 0 - Little Endian */
        uint32_t smbus_thigh_max_bus_idle_cnt : 16;/**< [ 15:  0](R/W) This field is used to set the required Bus-Idle time period used when a
                                                                 controller has been dynamically added to the bus and may
                                                                 not have detected a state transition on the SMBCLK or SMBDAT lines.

                                                                 In this case, the controller must wait long enough to ensure that a transfer is
                                                                 not currently in progress
                                                                 The values in this register are in units of ic_clk period. */
        uint32_t rsvd_smbus_thigh_max_bus_idle_cnt : 16;/**< [ 31: 16](RO) SMBUS_THIGH_MAX_BUS_IDLE_CNT Reserved bits - Read Only */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_i2cx_ic_smbus_thigh_max_idle_count_s cn; */
};
typedef union cavm_i2cx_ic_smbus_thigh_max_idle_count cavm_i2cx_ic_smbus_thigh_max_idle_count_t;

static inline uint64_t CAVM_I2CX_IC_SMBUS_THIGH_MAX_IDLE_COUNT(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_I2CX_IC_SMBUS_THIGH_MAX_IDLE_COUNT(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CN20KA) && (a<=3))
        return 0xc090100000c4ll + 0x100000000ll * ((a) & 0x3);
    __cavm_csr_fatal("I2CX_IC_SMBUS_THIGH_MAX_IDLE_COUNT", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_I2CX_IC_SMBUS_THIGH_MAX_IDLE_COUNT(a) cavm_i2cx_ic_smbus_thigh_max_idle_count_t
#define bustype_CAVM_I2CX_IC_SMBUS_THIGH_MAX_IDLE_COUNT(a) CSR_TYPE_RSL32b
#define basename_CAVM_I2CX_IC_SMBUS_THIGH_MAX_IDLE_COUNT(a) "I2CX_IC_SMBUS_THIGH_MAX_IDLE_COUNT"
#define device_bar_CAVM_I2CX_IC_SMBUS_THIGH_MAX_IDLE_COUNT(a) 0x0 /* PF_BAR0 */
#define busnum_CAVM_I2CX_IC_SMBUS_THIGH_MAX_IDLE_COUNT(a) (a)
#define arguments_CAVM_I2CX_IC_SMBUS_THIGH_MAX_IDLE_COUNT(a) (a),-1,-1,-1

/**
 * Register (RSL32b) i2c#_ic_smbus_udid_word0
 *
 * I2C Ic Smbus Udid Word0 Register
 * SMBUS UDID WORD0 Register
 *
 * This Register can be written only when the DW_apb_i2c is disabled, which corresponds
 * to IC_ENABLE[0] being set to 0.
 * This register is present only if configuration parameter IC_SMBUS_UDID_HC is set to 0.
 * This register is used to store the Lower 32 bit value of Target UDID register i.e.
 * UDID[31:0] used in Address Resolution Protocol of SMBus.
 */
union cavm_i2cx_ic_smbus_udid_word0
{
    uint32_t u;
    struct cavm_i2cx_ic_smbus_udid_word0_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t smbus_udid_word0      : 32; /**< [ 31:  0](R/W) This field is used to store the Lower 32 bit value of target unique device
                                                                 identifier used in Address Resolution Protocol. */
#else /* Word 0 - Little Endian */
        uint32_t smbus_udid_word0      : 32; /**< [ 31:  0](R/W) This field is used to store the Lower 32 bit value of target unique device
                                                                 identifier used in Address Resolution Protocol. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_i2cx_ic_smbus_udid_word0_s cn; */
};
typedef union cavm_i2cx_ic_smbus_udid_word0 cavm_i2cx_ic_smbus_udid_word0_t;

static inline uint64_t CAVM_I2CX_IC_SMBUS_UDID_WORD0(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_I2CX_IC_SMBUS_UDID_WORD0(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CN20KA) && (a<=3))
        return 0xc090100000dcll + 0x100000000ll * ((a) & 0x3);
    __cavm_csr_fatal("I2CX_IC_SMBUS_UDID_WORD0", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_I2CX_IC_SMBUS_UDID_WORD0(a) cavm_i2cx_ic_smbus_udid_word0_t
#define bustype_CAVM_I2CX_IC_SMBUS_UDID_WORD0(a) CSR_TYPE_RSL32b
#define basename_CAVM_I2CX_IC_SMBUS_UDID_WORD0(a) "I2CX_IC_SMBUS_UDID_WORD0"
#define device_bar_CAVM_I2CX_IC_SMBUS_UDID_WORD0(a) 0x0 /* PF_BAR0 */
#define busnum_CAVM_I2CX_IC_SMBUS_UDID_WORD0(a) (a)
#define arguments_CAVM_I2CX_IC_SMBUS_UDID_WORD0(a) (a),-1,-1,-1

/**
 * Register (RSL32b) i2c#_ic_smbus_udid_word1
 *
 * I2C Ic Smbus Udid Word1 Register
 * SMBUS UDID WORD1 Register
 *
 * This Register can be written only when the DW_apb_i2c is disabled, which corresponds
 * to IC_ENABLE[0] being set to 0.
 * This register is present only if configuration parameter IC_SMBUS_UDID_HC is set to 0.
 * This register is used to store the Middle-Lower 32 bit value of Target UDID register
 * i.e. UDID[63:32] used in Address Resolution Protocol of SMBus.
 */
union cavm_i2cx_ic_smbus_udid_word1
{
    uint32_t u;
    struct cavm_i2cx_ic_smbus_udid_word1_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t smbus_udid_word1      : 32; /**< [ 31:  0](R/W) This field is used to store the Middle-Lower 32 bit value of target unique
                                                                 device identifier used in Address Resolution Protocol. */
#else /* Word 0 - Little Endian */
        uint32_t smbus_udid_word1      : 32; /**< [ 31:  0](R/W) This field is used to store the Middle-Lower 32 bit value of target unique
                                                                 device identifier used in Address Resolution Protocol. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_i2cx_ic_smbus_udid_word1_s cn; */
};
typedef union cavm_i2cx_ic_smbus_udid_word1 cavm_i2cx_ic_smbus_udid_word1_t;

static inline uint64_t CAVM_I2CX_IC_SMBUS_UDID_WORD1(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_I2CX_IC_SMBUS_UDID_WORD1(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CN20KA) && (a<=3))
        return 0xc090100000e0ll + 0x100000000ll * ((a) & 0x3);
    __cavm_csr_fatal("I2CX_IC_SMBUS_UDID_WORD1", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_I2CX_IC_SMBUS_UDID_WORD1(a) cavm_i2cx_ic_smbus_udid_word1_t
#define bustype_CAVM_I2CX_IC_SMBUS_UDID_WORD1(a) CSR_TYPE_RSL32b
#define basename_CAVM_I2CX_IC_SMBUS_UDID_WORD1(a) "I2CX_IC_SMBUS_UDID_WORD1"
#define device_bar_CAVM_I2CX_IC_SMBUS_UDID_WORD1(a) 0x0 /* PF_BAR0 */
#define busnum_CAVM_I2CX_IC_SMBUS_UDID_WORD1(a) (a)
#define arguments_CAVM_I2CX_IC_SMBUS_UDID_WORD1(a) (a),-1,-1,-1

/**
 * Register (RSL32b) i2c#_ic_smbus_udid_word2
 *
 * I2C Ic Smbus Udid Word2 Register
 * SMBUS UDID WORD2 Register
 *
 * This Register can be written only when the DW_apb_i2c is disabled, which corresponds
 * to IC_ENABLE[0] being set to 0.
 * This register is present only if configuration parameter IC_SMBUS_UDID_HC is set to 0.
 * This register is used to store the Middle-Upper 32 bit value of Target UDID register
 * i.e. UDID[95:64] used in Address Resolution Protocol of SMBus.
 */
union cavm_i2cx_ic_smbus_udid_word2
{
    uint32_t u;
    struct cavm_i2cx_ic_smbus_udid_word2_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t smbus_udid_word2      : 32; /**< [ 31:  0](R/W) This field is used to store the Middle-Upper 32 bit value of target unique
                                                                 device identifier used in Address Resolution Protocol. */
#else /* Word 0 - Little Endian */
        uint32_t smbus_udid_word2      : 32; /**< [ 31:  0](R/W) This field is used to store the Middle-Upper 32 bit value of target unique
                                                                 device identifier used in Address Resolution Protocol. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_i2cx_ic_smbus_udid_word2_s cn; */
};
typedef union cavm_i2cx_ic_smbus_udid_word2 cavm_i2cx_ic_smbus_udid_word2_t;

static inline uint64_t CAVM_I2CX_IC_SMBUS_UDID_WORD2(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_I2CX_IC_SMBUS_UDID_WORD2(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CN20KA) && (a<=3))
        return 0xc090100000e4ll + 0x100000000ll * ((a) & 0x3);
    __cavm_csr_fatal("I2CX_IC_SMBUS_UDID_WORD2", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_I2CX_IC_SMBUS_UDID_WORD2(a) cavm_i2cx_ic_smbus_udid_word2_t
#define bustype_CAVM_I2CX_IC_SMBUS_UDID_WORD2(a) CSR_TYPE_RSL32b
#define basename_CAVM_I2CX_IC_SMBUS_UDID_WORD2(a) "I2CX_IC_SMBUS_UDID_WORD2"
#define device_bar_CAVM_I2CX_IC_SMBUS_UDID_WORD2(a) 0x0 /* PF_BAR0 */
#define busnum_CAVM_I2CX_IC_SMBUS_UDID_WORD2(a) (a)
#define arguments_CAVM_I2CX_IC_SMBUS_UDID_WORD2(a) (a),-1,-1,-1

/**
 * Register (RSL32b) i2c#_ic_smbus_udid_word3
 *
 * I2C Ic Smbus Udid Word3 Register
 * SMBUS UDID WORD3 Register
 *
 * This Register can be written only when the DW_apb_i2c is disabled, which corresponds
 * to IC_ENABLE[0] being set to 0.
 * This register is present only if configuration parameter IC_SMBUS_UDID_HC is set to 0.
 * This register is used to store the Upper 32 bit value of Target UDID register i.e.
 * UDID[127:96] used in Address Resolution Protocol of SMBus.
 */
union cavm_i2cx_ic_smbus_udid_word3
{
    uint32_t u;
    struct cavm_i2cx_ic_smbus_udid_word3_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t smbus_udid_word3      : 32; /**< [ 31:  0](R/W) This field is used to store the Upper 32 bit value of target unique device
                                                                 identifier used in Address Resolution Protocol. */
#else /* Word 0 - Little Endian */
        uint32_t smbus_udid_word3      : 32; /**< [ 31:  0](R/W) This field is used to store the Upper 32 bit value of target unique device
                                                                 identifier used in Address Resolution Protocol. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_i2cx_ic_smbus_udid_word3_s cn; */
};
typedef union cavm_i2cx_ic_smbus_udid_word3 cavm_i2cx_ic_smbus_udid_word3_t;

static inline uint64_t CAVM_I2CX_IC_SMBUS_UDID_WORD3(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_I2CX_IC_SMBUS_UDID_WORD3(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CN20KA) && (a<=3))
        return 0xc090100000e8ll + 0x100000000ll * ((a) & 0x3);
    __cavm_csr_fatal("I2CX_IC_SMBUS_UDID_WORD3", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_I2CX_IC_SMBUS_UDID_WORD3(a) cavm_i2cx_ic_smbus_udid_word3_t
#define bustype_CAVM_I2CX_IC_SMBUS_UDID_WORD3(a) CSR_TYPE_RSL32b
#define basename_CAVM_I2CX_IC_SMBUS_UDID_WORD3(a) "I2CX_IC_SMBUS_UDID_WORD3"
#define device_bar_CAVM_I2CX_IC_SMBUS_UDID_WORD3(a) 0x0 /* PF_BAR0 */
#define busnum_CAVM_I2CX_IC_SMBUS_UDID_WORD3(a) (a)
#define arguments_CAVM_I2CX_IC_SMBUS_UDID_WORD3(a) (a),-1,-1,-1

/**
 * Register (RSL32b) i2c#_ic_ss_scl_hcnt
 *
 * I2C Ic Ss Scl Hcnt Register
 * Standard Speed I2C Clock SCL High Count Register
 */
union cavm_i2cx_ic_ss_scl_hcnt
{
    uint32_t u;
    struct cavm_i2cx_ic_ss_scl_hcnt_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t rsvd_ic_ss_scl_high_count : 16;/**< [ 31: 16](RO) IC_SS_SCL_HCNT Reserved bits - Read Only */
        uint32_t ic_ss_scl_hcnt        : 16; /**< [ 15:  0](R/W) This register must be set before any I2C bus transaction can take place to
                                                                 ensure proper I/O timing. This register sets the SCL clock high-period
                                                                 count for standard speed. For more information, refer to "IC_CLK Frequency Configuration".

                                                                 This register can be written only when the I2C interface is disabled which
                                                                 corresponds to the IC_ENABLE[0] register being set to 0. Writes at other
                                                                 times have no effect.

                                                                 The minimum valid value is derived through below formula:

                                                                 ((IC_ULTRA_FAST_MODE==1) ? 3 : ((IC_CLK_FREQ_OPTIMIZATION==1) ? 1 : 6))

                                                                 Hardware prevents values less than this
                                                                 being written, and if attempted results in minimum valid value being set. For designs with
                                                                 APB_DATA_WIDTH = 8, the order of programming is important to ensure
                                                                 the correct operation of the DW_apb_i2c. The lower byte must be
                                                                 programmed first. Then the upper byte is programmed.

                                                                 When the configuration parameter IC_HC_COUNT_VALUES is set to 1,
                                                                 this register is read only.

                                                                 Note: This register must not be programmed to a value higher than
                                                                 65525, because DW_apb_i2c uses a 16-bit counter to flag an I2C bus idle
                                                                 condition when this counter reaches a value of IC_SS_SCL_HCNT + 10. */
#else /* Word 0 - Little Endian */
        uint32_t ic_ss_scl_hcnt        : 16; /**< [ 15:  0](R/W) This register must be set before any I2C bus transaction can take place to
                                                                 ensure proper I/O timing. This register sets the SCL clock high-period
                                                                 count for standard speed. For more information, refer to "IC_CLK Frequency Configuration".

                                                                 This register can be written only when the I2C interface is disabled which
                                                                 corresponds to the IC_ENABLE[0] register being set to 0. Writes at other
                                                                 times have no effect.

                                                                 The minimum valid value is derived through below formula:

                                                                 ((IC_ULTRA_FAST_MODE==1) ? 3 : ((IC_CLK_FREQ_OPTIMIZATION==1) ? 1 : 6))

                                                                 Hardware prevents values less than this
                                                                 being written, and if attempted results in minimum valid value being set. For designs with
                                                                 APB_DATA_WIDTH = 8, the order of programming is important to ensure
                                                                 the correct operation of the DW_apb_i2c. The lower byte must be
                                                                 programmed first. Then the upper byte is programmed.

                                                                 When the configuration parameter IC_HC_COUNT_VALUES is set to 1,
                                                                 this register is read only.

                                                                 Note: This register must not be programmed to a value higher than
                                                                 65525, because DW_apb_i2c uses a 16-bit counter to flag an I2C bus idle
                                                                 condition when this counter reaches a value of IC_SS_SCL_HCNT + 10. */
        uint32_t rsvd_ic_ss_scl_high_count : 16;/**< [ 31: 16](RO) IC_SS_SCL_HCNT Reserved bits - Read Only */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_i2cx_ic_ss_scl_hcnt_s cn; */
};
typedef union cavm_i2cx_ic_ss_scl_hcnt cavm_i2cx_ic_ss_scl_hcnt_t;

static inline uint64_t CAVM_I2CX_IC_SS_SCL_HCNT(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_I2CX_IC_SS_SCL_HCNT(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CN20KA) && (a<=3))
        return 0xc09010000014ll + 0x100000000ll * ((a) & 0x3);
    __cavm_csr_fatal("I2CX_IC_SS_SCL_HCNT", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_I2CX_IC_SS_SCL_HCNT(a) cavm_i2cx_ic_ss_scl_hcnt_t
#define bustype_CAVM_I2CX_IC_SS_SCL_HCNT(a) CSR_TYPE_RSL32b
#define basename_CAVM_I2CX_IC_SS_SCL_HCNT(a) "I2CX_IC_SS_SCL_HCNT"
#define device_bar_CAVM_I2CX_IC_SS_SCL_HCNT(a) 0x0 /* PF_BAR0 */
#define busnum_CAVM_I2CX_IC_SS_SCL_HCNT(a) (a)
#define arguments_CAVM_I2CX_IC_SS_SCL_HCNT(a) (a),-1,-1,-1

/**
 * Register (RSL32b) i2c#_ic_ss_scl_lcnt
 *
 * I2C Ic Ss Scl Lcnt Register
 * Standard Speed I2C Clock SCL Low Count Register
 */
union cavm_i2cx_ic_ss_scl_lcnt
{
    uint32_t u;
    struct cavm_i2cx_ic_ss_scl_lcnt_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t rsvd_ic_ss_scl_low_count : 16;/**< [ 31: 16](RO) RSVD_IC_SS_SCL_LOW_COUNT Reserved bits - Read Only */
        uint32_t ic_ss_scl_lcnt        : 16; /**< [ 15:  0](R/W) This register must be set before any I2C bus transaction can take place to
                                                                 ensure proper I/O timing. This register sets the SCL clock low period
                                                                 count for standard speed. For more information, refer to "IC_CLK Frequency Configuration"

                                                                 This register can be written only when the I2C interface is disabled which
                                                                 corresponds to the IC_ENABLE[0] register being set to 0. Writes at other
                                                                 times have no effect.

                                                                 The minimum valid value is derived through below formula:

                                                                 ((IC_ULTRA_FAST_MODE==1) ? 5 : ((IC_CLK_FREQ_OPTIMIZATION==1) ? 6 : 8))

                                                                 Hardware prevents values less than this
                                                                 being written, and if attempted, results in minimum valid value being set. For designs with
                                                                 APB_DATA_WIDTH = 8, the order of programming is important to
                                                                 ensure the correct operation of DW_apb_i2c. The lower byte must be
                                                                 programmed first, and then the upper byte is programmed.

                                                                 When the configuration parameter IC_HC_COUNT_VALUES is set to 1,
                                                                 this register is read only. */
#else /* Word 0 - Little Endian */
        uint32_t ic_ss_scl_lcnt        : 16; /**< [ 15:  0](R/W) This register must be set before any I2C bus transaction can take place to
                                                                 ensure proper I/O timing. This register sets the SCL clock low period
                                                                 count for standard speed. For more information, refer to "IC_CLK Frequency Configuration"

                                                                 This register can be written only when the I2C interface is disabled which
                                                                 corresponds to the IC_ENABLE[0] register being set to 0. Writes at other
                                                                 times have no effect.

                                                                 The minimum valid value is derived through below formula:

                                                                 ((IC_ULTRA_FAST_MODE==1) ? 5 : ((IC_CLK_FREQ_OPTIMIZATION==1) ? 6 : 8))

                                                                 Hardware prevents values less than this
                                                                 being written, and if attempted, results in minimum valid value being set. For designs with
                                                                 APB_DATA_WIDTH = 8, the order of programming is important to
                                                                 ensure the correct operation of DW_apb_i2c. The lower byte must be
                                                                 programmed first, and then the upper byte is programmed.

                                                                 When the configuration parameter IC_HC_COUNT_VALUES is set to 1,
                                                                 this register is read only. */
        uint32_t rsvd_ic_ss_scl_low_count : 16;/**< [ 31: 16](RO) RSVD_IC_SS_SCL_LOW_COUNT Reserved bits - Read Only */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_i2cx_ic_ss_scl_lcnt_s cn; */
};
typedef union cavm_i2cx_ic_ss_scl_lcnt cavm_i2cx_ic_ss_scl_lcnt_t;

static inline uint64_t CAVM_I2CX_IC_SS_SCL_LCNT(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_I2CX_IC_SS_SCL_LCNT(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CN20KA) && (a<=3))
        return 0xc09010000018ll + 0x100000000ll * ((a) & 0x3);
    __cavm_csr_fatal("I2CX_IC_SS_SCL_LCNT", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_I2CX_IC_SS_SCL_LCNT(a) cavm_i2cx_ic_ss_scl_lcnt_t
#define bustype_CAVM_I2CX_IC_SS_SCL_LCNT(a) CSR_TYPE_RSL32b
#define basename_CAVM_I2CX_IC_SS_SCL_LCNT(a) "I2CX_IC_SS_SCL_LCNT"
#define device_bar_CAVM_I2CX_IC_SS_SCL_LCNT(a) 0x0 /* PF_BAR0 */
#define busnum_CAVM_I2CX_IC_SS_SCL_LCNT(a) (a)
#define arguments_CAVM_I2CX_IC_SS_SCL_LCNT(a) (a),-1,-1,-1

/**
 * Register (RSL32b) i2c#_ic_status
 *
 * I2C Ic Status Register
 * I2C Status Register.
 *
 * This is a read-only register used to indicate the current
 * transfer status and FIFO status. The status register may be
 * read at any time. None of the bits in this register request
 * an interrupt.
 *
 * When the I2C is disabled by writing 0 in bit 0 of the IC_ENABLE register:
 *  - Bits 1 and 2 are set to 1
 *  - Bits 3 and 10 are set to 0
 * When the controller or target state machines goes to idle and ic_en=0:
 *  - Bits 5 and 6 are set to 0
 */
union cavm_i2cx_ic_status
{
    uint32_t u;
    struct cavm_i2cx_ic_status_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t rsvd_ic_status_2      : 5;  /**< [ 31: 27](RO) IC_STATUS Reserved bits - Read Only */
        uint32_t smbus_slave_addr4_resolved : 1;/**< [ 26: 26](RO) This bit indicates whether the target device address 4 (IC_SAR4) is resolved by the ARP Controller. */
        uint32_t smbus_slave_addr4_valid : 1;/**< [ 25: 25](RO) This bit indicates whether the target device address 4 (IC_SAR4) is valid or not. */
        uint32_t smbus_slave_addr3_resolved : 1;/**< [ 24: 24](RO) This bit indicates whether the target device address 3 (IC_SAR3) is resolved by the ARP Controller. */
        uint32_t smbus_slave_addr3_valid : 1;/**< [ 23: 23](RO) This bit indicates whether the target device address 3 (IC_SAR3) is valid or not. */
        uint32_t smbus_slave_addr2_resolved : 1;/**< [ 22: 22](RO) This bit indicates whether the target device address 2 (IC_SAR2) is resolved by the ARP Controller. */
        uint32_t smbus_slave_addr2_valid : 1;/**< [ 21: 21](RO) This bit indicates whether the target device address 2 (IC_SAR2) is valid or not. */
        uint32_t smbus_alert_status    : 1;  /**< [ 20: 20](RO) This bit indicates the status of the SMBus Alert signal (ic_smbalert_in_n).
                                                                 This signal is asserted when the SMBus Alert signal is asserted by the SMBus Device. */
        uint32_t smbus_suspend_status  : 1;  /**< [ 19: 19](RO) This bit indicates the status of the SMBus Suspend signal (ic_smbsus_in_n).
                                                                 This signal is asserted when the SMBus Suspend signal is asserted by the SMBus Host. */
        uint32_t smbus_slave_addr_resolved : 1;/**< [ 18: 18](RO) This bit indicates whether the target device address (ic_sar) is resolved by the ARP Controller. */
        uint32_t smbus_slave_addr_valid : 1; /**< [ 17: 17](RO) This bit indicates whether the target device address (ic_sar) is valid or not. */
        uint32_t smbus_quick_cmd_bit   : 1;  /**< [ 16: 16](RO) This bit indicates the R/W bit of the Quick command received.
                                                                 This bit will be cleared after the user has read this bit. */
        uint32_t rsvd_ic_status_1      : 3;  /**< [ 15: 13](RO) RSVD_IC_STATUS_1 Reserved bits - Read Only */
        uint32_t slv_iso_sar_data_clk_stretch : 1;/**< [ 12: 12](RO) This bit indicates the Bus hold (clock stretching) in Target mode with Multiple
                                                                 SAR feature - for isolating the write transfer related data corresponding to one
                                                                 target address with another target address. */
        uint32_t sda_stuck_not_recovered : 1;/**< [ 11: 11](RO) This bit indicates that SDA stuck at low is not recovered after the recovery mechanism.
                                                                 In Target mode, this register bit is not applicable. */
        uint32_t slv_hold_rx_fifo_full : 1;  /**< [ 10: 10](RO) This bit indicates the BUS Hold in Target mode due to Rx FIFO is Full and
                                                                 an additional byte has been received (This kind of Bus hold is applicable if
                                                                 IC_RX_FULL_HLD_BUS_EN is set to 1 and bit 9 of the IC_CON register
                                                                 (RX_FIFO_FULL_HLD_CTRL) is programmed to HIGH). */
        uint32_t slv_hold_tx_fifo_empty : 1; /**< [  9:  9](RO) This bit indicates the BUS Hold in Target mode for the Read request
                                                                 when the Tx FIFO is empty. The Bus is in hold until the Tx FIFO has
                                                                 data to Transmit for the read request. */
        uint32_t mst_hold_rx_fifo_full : 1;  /**< [  8:  8](RO) This bit indicates the BUS Hold in Controller mode due to Rx FIFO is Full and
                                                                 additional byte has been received
                                                                 (This kind of Bus hold is applicable if IC_RX_FULL_HLD_BUS_EN is set to 1 and
                                                                 bit 9 of the IC_CON register (RX_FIFO_FULL_HLD_CTRL) is programmed to HIGH). */
        uint32_t mst_hold_tx_fifo_empty : 1; /**< [  7:  7](RO) If the IC_EMPTYFIFO_HOLD_MASTER_EN parameter is set to 1,
                                                                 the DW_apb_i2c controller stalls the write transfer when Tx FIFO is
                                                                 empty, and the last byte does not have the Stop bit set.
                                                                 This bit indicates the BUS hold when the controller holds the bus
                                                                 because of the Tx FIFO being empty, and the previous
                                                                 transferred command does not have the Stop bit set. (This kind of
                                                                 Bus hold is applicable if IC_EMPTYFIFO_HOLD_MASTER_EN is
                                                                 set to 1). */
        uint32_t slv_activity          : 1;  /**< [  6:  6](RO) Target FSM Activity Status.
                                                                 When the Target Finite State Machine (FSM) is not
                                                                 in the IDLE state, this bit is set. */
        uint32_t mst_activity          : 1;  /**< [  5:  5](RO) Controller FSM Activity Status.
                                                                 When the Controller Finite State Machine (FSM) is
                                                                 not in the IDLE state, this bit is set.

                                                                 Note:
                                                                 IC_STATUS[0]-that is, ACTIVITY bit-is the OR of
                                                                 SLV_ACTIVITY and MST_ACTIVITY bits. */
        uint32_t rff                   : 1;  /**< [  4:  4](RO) Receive FIFO Completely Full.
                                                                 When the receive FIFO is completely full, this
                                                                 bit is set. When the receive FIFO contains one
                                                                 or more empty location, this bit is cleared. */
        uint32_t rfne                  : 1;  /**< [  3:  3](RO) Receive FIFO Not Empty.
                                                                 This bit is set when the receive FIFO contains one or
                                                                 more entries; it is cleared when the receive FIFO is empty. */
        uint32_t tfe                   : 1;  /**< [  2:  2](RO) Transmit FIFO Completely Empty.
                                                                 When the transmit FIFO is completely empty, this bit is set.
                                                                 When it contains one or more valid entries, this bit is
                                                                 cleared. This bit field does not request an interrupt. */
        uint32_t tfnf                  : 1;  /**< [  1:  1](RO) Transmit FIFO Not Full.
                                                                 Set when the transmit FIFO contains one or more
                                                                 empty locations, and is cleared when the FIFO is full. */
        uint32_t activity              : 1;  /**< [  0:  0](RO) I2C Activity Status. */
#else /* Word 0 - Little Endian */
        uint32_t activity              : 1;  /**< [  0:  0](RO) I2C Activity Status. */
        uint32_t tfnf                  : 1;  /**< [  1:  1](RO) Transmit FIFO Not Full.
                                                                 Set when the transmit FIFO contains one or more
                                                                 empty locations, and is cleared when the FIFO is full. */
        uint32_t tfe                   : 1;  /**< [  2:  2](RO) Transmit FIFO Completely Empty.
                                                                 When the transmit FIFO is completely empty, this bit is set.
                                                                 When it contains one or more valid entries, this bit is
                                                                 cleared. This bit field does not request an interrupt. */
        uint32_t rfne                  : 1;  /**< [  3:  3](RO) Receive FIFO Not Empty.
                                                                 This bit is set when the receive FIFO contains one or
                                                                 more entries; it is cleared when the receive FIFO is empty. */
        uint32_t rff                   : 1;  /**< [  4:  4](RO) Receive FIFO Completely Full.
                                                                 When the receive FIFO is completely full, this
                                                                 bit is set. When the receive FIFO contains one
                                                                 or more empty location, this bit is cleared. */
        uint32_t mst_activity          : 1;  /**< [  5:  5](RO) Controller FSM Activity Status.
                                                                 When the Controller Finite State Machine (FSM) is
                                                                 not in the IDLE state, this bit is set.

                                                                 Note:
                                                                 IC_STATUS[0]-that is, ACTIVITY bit-is the OR of
                                                                 SLV_ACTIVITY and MST_ACTIVITY bits. */
        uint32_t slv_activity          : 1;  /**< [  6:  6](RO) Target FSM Activity Status.
                                                                 When the Target Finite State Machine (FSM) is not
                                                                 in the IDLE state, this bit is set. */
        uint32_t mst_hold_tx_fifo_empty : 1; /**< [  7:  7](RO) If the IC_EMPTYFIFO_HOLD_MASTER_EN parameter is set to 1,
                                                                 the DW_apb_i2c controller stalls the write transfer when Tx FIFO is
                                                                 empty, and the last byte does not have the Stop bit set.
                                                                 This bit indicates the BUS hold when the controller holds the bus
                                                                 because of the Tx FIFO being empty, and the previous
                                                                 transferred command does not have the Stop bit set. (This kind of
                                                                 Bus hold is applicable if IC_EMPTYFIFO_HOLD_MASTER_EN is
                                                                 set to 1). */
        uint32_t mst_hold_rx_fifo_full : 1;  /**< [  8:  8](RO) This bit indicates the BUS Hold in Controller mode due to Rx FIFO is Full and
                                                                 additional byte has been received
                                                                 (This kind of Bus hold is applicable if IC_RX_FULL_HLD_BUS_EN is set to 1 and
                                                                 bit 9 of the IC_CON register (RX_FIFO_FULL_HLD_CTRL) is programmed to HIGH). */
        uint32_t slv_hold_tx_fifo_empty : 1; /**< [  9:  9](RO) This bit indicates the BUS Hold in Target mode for the Read request
                                                                 when the Tx FIFO is empty. The Bus is in hold until the Tx FIFO has
                                                                 data to Transmit for the read request. */
        uint32_t slv_hold_rx_fifo_full : 1;  /**< [ 10: 10](RO) This bit indicates the BUS Hold in Target mode due to Rx FIFO is Full and
                                                                 an additional byte has been received (This kind of Bus hold is applicable if
                                                                 IC_RX_FULL_HLD_BUS_EN is set to 1 and bit 9 of the IC_CON register
                                                                 (RX_FIFO_FULL_HLD_CTRL) is programmed to HIGH). */
        uint32_t sda_stuck_not_recovered : 1;/**< [ 11: 11](RO) This bit indicates that SDA stuck at low is not recovered after the recovery mechanism.
                                                                 In Target mode, this register bit is not applicable. */
        uint32_t slv_iso_sar_data_clk_stretch : 1;/**< [ 12: 12](RO) This bit indicates the Bus hold (clock stretching) in Target mode with Multiple
                                                                 SAR feature - for isolating the write transfer related data corresponding to one
                                                                 target address with another target address. */
        uint32_t rsvd_ic_status_1      : 3;  /**< [ 15: 13](RO) RSVD_IC_STATUS_1 Reserved bits - Read Only */
        uint32_t smbus_quick_cmd_bit   : 1;  /**< [ 16: 16](RO) This bit indicates the R/W bit of the Quick command received.
                                                                 This bit will be cleared after the user has read this bit. */
        uint32_t smbus_slave_addr_valid : 1; /**< [ 17: 17](RO) This bit indicates whether the target device address (ic_sar) is valid or not. */
        uint32_t smbus_slave_addr_resolved : 1;/**< [ 18: 18](RO) This bit indicates whether the target device address (ic_sar) is resolved by the ARP Controller. */
        uint32_t smbus_suspend_status  : 1;  /**< [ 19: 19](RO) This bit indicates the status of the SMBus Suspend signal (ic_smbsus_in_n).
                                                                 This signal is asserted when the SMBus Suspend signal is asserted by the SMBus Host. */
        uint32_t smbus_alert_status    : 1;  /**< [ 20: 20](RO) This bit indicates the status of the SMBus Alert signal (ic_smbalert_in_n).
                                                                 This signal is asserted when the SMBus Alert signal is asserted by the SMBus Device. */
        uint32_t smbus_slave_addr2_valid : 1;/**< [ 21: 21](RO) This bit indicates whether the target device address 2 (IC_SAR2) is valid or not. */
        uint32_t smbus_slave_addr2_resolved : 1;/**< [ 22: 22](RO) This bit indicates whether the target device address 2 (IC_SAR2) is resolved by the ARP Controller. */
        uint32_t smbus_slave_addr3_valid : 1;/**< [ 23: 23](RO) This bit indicates whether the target device address 3 (IC_SAR3) is valid or not. */
        uint32_t smbus_slave_addr3_resolved : 1;/**< [ 24: 24](RO) This bit indicates whether the target device address 3 (IC_SAR3) is resolved by the ARP Controller. */
        uint32_t smbus_slave_addr4_valid : 1;/**< [ 25: 25](RO) This bit indicates whether the target device address 4 (IC_SAR4) is valid or not. */
        uint32_t smbus_slave_addr4_resolved : 1;/**< [ 26: 26](RO) This bit indicates whether the target device address 4 (IC_SAR4) is resolved by the ARP Controller. */
        uint32_t rsvd_ic_status_2      : 5;  /**< [ 31: 27](RO) IC_STATUS Reserved bits - Read Only */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_i2cx_ic_status_s cn; */
};
typedef union cavm_i2cx_ic_status cavm_i2cx_ic_status_t;

static inline uint64_t CAVM_I2CX_IC_STATUS(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_I2CX_IC_STATUS(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CN20KA) && (a<=3))
        return 0xc09010000070ll + 0x100000000ll * ((a) & 0x3);
    __cavm_csr_fatal("I2CX_IC_STATUS", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_I2CX_IC_STATUS(a) cavm_i2cx_ic_status_t
#define bustype_CAVM_I2CX_IC_STATUS(a) CSR_TYPE_RSL32b
#define basename_CAVM_I2CX_IC_STATUS(a) "I2CX_IC_STATUS"
#define device_bar_CAVM_I2CX_IC_STATUS(a) 0x0 /* PF_BAR0 */
#define busnum_CAVM_I2CX_IC_STATUS(a) (a)
#define arguments_CAVM_I2CX_IC_STATUS(a) (a),-1,-1,-1

/**
 * Register (RSL32b) i2c#_ic_tar
 *
 * I2C Ic Tar Register
 * I2C Target Address Register
 *
 * If the configuration parameter I2C_DYNAMIC_TAR_UPDATE is set to 'No' (0),
 * this register is 12 bits wide, and bits 31:12 are reserved. This register
 * can be written to only when IC_ENABLE[0] is set to 0.
 *
 * However, if I2C_DYNAMIC_TAR_UPDATE = 1, then the register becomes 13 bits wide.
 * In this case, writes to IC_TAR succeed when one of the following conditions are true:
 *  - DW_apb_i2c is NOT enabled (IC_ENABLE[0] is set to 0); or
 *  - DW_apb_i2c is enabled (IC_ENABLE[0]=1); AND DW_apb_i2c is NOT engaged in any
 * Controller (tx, rx) operation (IC_STATUS[5]=0); AND DW_apb_i2c is enabled to operate
 * in Controller mode (IC_CON[0]=1); AND there are NO entries in the TX FIFO
 * (IC_STATUS[2]=1)
 * You can change the TAR address dynamically without losing the bus, only if the
 * following conditions are met.
 *  - DW_apb_i2c is enabled (IC_ENABLE[0]=1); AND IC_EMPTYFIFO_HOLD_MASTER_EN
 * configuration parameter is set to 1; AND DW_apb_i2c is enabled to operate in
 * Controller mode (IC_CON[0]=1); AND there are NO entries in the Tx FIFO and the
 * controller is in HOLD state (IC_INTR_STAT[13]=1).
 *  Note: If the software or application is aware that the DW_apb_i2c is not using the
 * TAR address for the pending commands in the
 *     Tx FIFO, then it is possible to update the TAR address even while the Tx FIFO
 * has entries (IC_STATUS[2]= 0).
 *   - It is not necessary to perform any write to this register if DW_apb_i2c is
 * enabled as an I2C target only.
 */
union cavm_i2cx_ic_tar
{
    uint32_t u;
    struct cavm_i2cx_ic_tar_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t rsvd_ic_tar_2         : 15; /**< [ 31: 17](RO) IC_TAR_2 Reserved bits - Read Only */
        uint32_t smbus_quick_cmd       : 1;  /**< [ 16: 16](R/W) If bit 11 (SPECIAL) is set to 1, then this bit indicates whether a Quick command
                                                                 is to be performed by the DW_apb_i2c. */
        uint32_t rsvd_ic_tar_1         : 2;  /**< [ 15: 14](RO) IC_TAR_1 Reserved bits - Read Only */
        uint32_t rsvd_device_id        : 1;  /**< [ 13: 13](RO) DEVICE_ID Reserved bits - Read Only */
        uint32_t ic_10bitaddr_master   : 1;  /**< [ 12: 12](R/W) This bit controls whether the DW_apb_i2c starts its transfers in 7-
                                                                 or 10-bit addressing mode when acting as a controller. In SMBus mode only 7-bit
                                                                 addressing mode is supported. */
        uint32_t special               : 1;  /**< [ 11: 11](R/W) This bit indicates whether software performs a Device-ID or General Call or
                                                                 START BYTE command.
                                                                  - 0: ignore bit 10 GC_OR_START and use IC_TAR normally
                                                                  - 1: perform special I2C command as specified in Device_ID or GC_OR_START bit */
        uint32_t gc_or_start           : 1;  /**< [ 10: 10](R/W) If bit 11 (SPECIAL) is set to 1 and bit 13(Device-ID) is set to 0, then this bit
                                                                 indicates whether a
                                                                 General Call or START byte command is to be performed by the
                                                                 DW_apb_i2c.
                                                                  - 0: General Call Address - after issuing a General Call, only writes may be
                                                                 performed. Attempting to issue a read command results in setting bit 6 (TX_ABRT)
                                                                 of the IC_RAW_INTR_STAT register. The DW_apb_i2c remains in General Call mode
                                                                 until the SPECIAL bit value (bit 11) is cleared.
                                                                  - 1: START BYTE */
        uint32_t ic_tar                : 10; /**< [  9:  0](R/W) This is the target address for any controller transaction. When
                                                                 transmitting a General Call, these bits are ignored. To generate a
                                                                 START BYTE, the CPU needs to write only once into these bits.

                                                                 If the IC_TAR and IC_SAR are the same, a controller cannot transmit to itself;
                                                                 it can transmit to only a target. */
#else /* Word 0 - Little Endian */
        uint32_t ic_tar                : 10; /**< [  9:  0](R/W) This is the target address for any controller transaction. When
                                                                 transmitting a General Call, these bits are ignored. To generate a
                                                                 START BYTE, the CPU needs to write only once into these bits.

                                                                 If the IC_TAR and IC_SAR are the same, a controller cannot transmit to itself;
                                                                 it can transmit to only a target. */
        uint32_t gc_or_start           : 1;  /**< [ 10: 10](R/W) If bit 11 (SPECIAL) is set to 1 and bit 13(Device-ID) is set to 0, then this bit
                                                                 indicates whether a
                                                                 General Call or START byte command is to be performed by the
                                                                 DW_apb_i2c.
                                                                  - 0: General Call Address - after issuing a General Call, only writes may be
                                                                 performed. Attempting to issue a read command results in setting bit 6 (TX_ABRT)
                                                                 of the IC_RAW_INTR_STAT register. The DW_apb_i2c remains in General Call mode
                                                                 until the SPECIAL bit value (bit 11) is cleared.
                                                                  - 1: START BYTE */
        uint32_t special               : 1;  /**< [ 11: 11](R/W) This bit indicates whether software performs a Device-ID or General Call or
                                                                 START BYTE command.
                                                                  - 0: ignore bit 10 GC_OR_START and use IC_TAR normally
                                                                  - 1: perform special I2C command as specified in Device_ID or GC_OR_START bit */
        uint32_t ic_10bitaddr_master   : 1;  /**< [ 12: 12](R/W) This bit controls whether the DW_apb_i2c starts its transfers in 7-
                                                                 or 10-bit addressing mode when acting as a controller. In SMBus mode only 7-bit
                                                                 addressing mode is supported. */
        uint32_t rsvd_device_id        : 1;  /**< [ 13: 13](RO) DEVICE_ID Reserved bits - Read Only */
        uint32_t rsvd_ic_tar_1         : 2;  /**< [ 15: 14](RO) IC_TAR_1 Reserved bits - Read Only */
        uint32_t smbus_quick_cmd       : 1;  /**< [ 16: 16](R/W) If bit 11 (SPECIAL) is set to 1, then this bit indicates whether a Quick command
                                                                 is to be performed by the DW_apb_i2c. */
        uint32_t rsvd_ic_tar_2         : 15; /**< [ 31: 17](RO) IC_TAR_2 Reserved bits - Read Only */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_i2cx_ic_tar_s cn; */
};
typedef union cavm_i2cx_ic_tar cavm_i2cx_ic_tar_t;

static inline uint64_t CAVM_I2CX_IC_TAR(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_I2CX_IC_TAR(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CN20KA) && (a<=3))
        return 0xc09010000004ll + 0x100000000ll * ((a) & 0x3);
    __cavm_csr_fatal("I2CX_IC_TAR", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_I2CX_IC_TAR(a) cavm_i2cx_ic_tar_t
#define bustype_CAVM_I2CX_IC_TAR(a) CSR_TYPE_RSL32b
#define basename_CAVM_I2CX_IC_TAR(a) "I2CX_IC_TAR"
#define device_bar_CAVM_I2CX_IC_TAR(a) 0x0 /* PF_BAR0 */
#define busnum_CAVM_I2CX_IC_TAR(a) (a)
#define arguments_CAVM_I2CX_IC_TAR(a) (a),-1,-1,-1

/**
 * Register (RSL32b) i2c#_ic_tx_abrt_source
 *
 * I2C Ic Tx Abrt Source Register
 * I2C Transmit Terminate Source Register.
 *
 * This register has 32 bits that indicate the source
 * of the TX_ABRT bit. Except for Bit 9, this register is
 * cleared whenever the IC_CLR_TX_ABRT register or the
 * IC_CLR_INTR register is read. To clear bit 9, the source
 * of the ABRT_SBYTE_NORSTRT must be fixed first; RESTART must
 * be enabled (IC_CON[5]=1), the SPECIAL bit must be cleared
 * (IC_TAR[11]), or the GC_OR_START bit must be cleared (IC_TAR[10]).
 *
 * Once the source of the ABRT_SBYTE_NORSTRT is fixed, then this
 * bit can be cleared in the same manner as other bits in this
 * register. If the source of the ABRT_SBYTE_NORSTRT is not fixed
 * before attempting to clear this bit, Bit 9 clears for one cycle
 * and is then re-asserted.
 */
union cavm_i2cx_ic_tx_abrt_source
{
    uint32_t u;
    struct cavm_i2cx_ic_tx_abrt_source_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t tx_flush_cnt          : 9;  /**< [ 31: 23](RO) This field indicates the
                                                                 number of Tx FIFO Data Commands which are flushed due to TX_ABRT interrupt.
                                                                 It is cleared whenever I2C is disabled.

                                                                 Role of DW_apb_i2c: Controller-Transmitter or Target-Transmitter */
        uint32_t rsvd_ic_tx_abrt_source : 2; /**< [ 22: 21](RO) IC_TX_ABRT_SOURCE Reserved bits - Read Only */
        uint32_t rsvd_abrt_device_write : 3; /**< [ 20: 18](RO) ABRT_DEVICE_WRITE Register field Reserved bits - Read Only */
        uint32_t abrt_sda_stuck_at_low : 1;  /**< [ 17: 17](RO) This is a controller-mode-only bit. Controller detects the SDA Stuck at low for
                                                                 the IC_SDA_STUCK_AT_LOW_TIMEOUT value of ic_clks.

                                                                 Role of DW_apb_i2c: Controller */
        uint32_t abrt_user_abrt        : 1;  /**< [ 16: 16](RO) This is a controller-mode-only bit. Controller has
                                                                 detected the transfer terminate (IC_ENABLE[1])

                                                                 Role of DW_apb_i2c: Controller-Transmitter */
        uint32_t abrt_slvrd_intx       : 1;  /**< [ 15: 15](RO) When the processor side responds to
                                                                 a target mode request for data to be
                                                                 transmitted to a remote controller and user
                                                                 writes a 1 in CMD (bit 8) of
                                                                 IC_DATA_CMD register.

                                                                 Role of DW_apb_i2c: Target-Transmitter */
        uint32_t abrt_slv_arblost      : 1;  /**< [ 14: 14](RO) This field indicates that a Target has lost the bus while transmitting data to a
                                                                 remote controller. IC_TX_ABRT_SOURCE[12] is set at the same time.
                                                                 Note: Even though the target never
                                                                 'owns' the bus, something could go
                                                                 wrong on the bus. This is a fail safe
                                                                 check. For instance, during a data
                                                                 transmission at the low-to-high
                                                                 transition of SCL, if what is on the data
                                                                 bus is not what is supposed to be
                                                                 transmitted, then DW_apb_i2c no
                                                                 longer own the bus.

                                                                 Role of DW_apb_i2c: Target-Transmitter */
        uint32_t abrt_slvflush_txfifo  : 1;  /**< [ 13: 13](RO) This field specifies that the Target has received a read command and some data
                                                                 exists in the TX FIFO, so the target issues a TX_ABRT interrupt to flush old
                                                                 data in TX FIFO.

                                                                 Role of DW_apb_i2c: Target-Transmitter */
        uint32_t arb_lost              : 1;  /**< [ 12: 12](RO) This field specifies that the Controller has lost arbitration, or if
                                                                 IC_TX_ABRT_SOURCE[14] is also set, then the target transmitter has lost
                                                                 arbitration.

                                                                 Role of DW_apb_i2c: Controller-Transmitter or Target-Transmitter */
        uint32_t abrt_master_dis       : 1;  /**< [ 11: 11](RO) This field indicates that the User tries to initiate a Controller operation with
                                                                 the Controller mode disabled.

                                                                 Role of DW_apb_i2c: Controller-Transmitter or Controller-Receiver */
        uint32_t abrt_10b_rd_norstrt   : 1;  /**< [ 10: 10](RO) This field indicates that the restart is disabled (IC_RESTART_EN bit (IC_CON[5])
                                                                 =0) and the controller sends a read command in 10-bit addressing mode.

                                                                 Role of DW_apb_i2c: Controller-Receiver */
        uint32_t abrt_sbyte_norstrt    : 1;  /**< [  9:  9](RO) To clear Bit 9, the source of the
                                                                 ABRT_SBYTE_NORSTRT must be fixed first;
                                                                 restart must be enabled (IC_CON[5]=1),
                                                                 the SPECIAL bit must be cleared (IC_TAR[11]),
                                                                 or the GC_OR_START bit must be cleared
                                                                 (IC_TAR[10]). Once the source of the
                                                                 ABRT_SBYTE_NORSTRT is fixed,
                                                                 then this bit can be cleared in the same
                                                                 manner as other bits in this register. If
                                                                 the source of the ABRT_SBYTE_NORSTRT is not fixed
                                                                 before attempting to clear this bit, bit 9
                                                                 clears for one cycle and then gets reasserted. When this field is set to 1, the
                                                                 restart is disabled (IC_RESTART_EN bit (IC_CON[5]) =0) and the user is trying to
                                                                 send a START Byte.

                                                                 Role of DW_apb_i2c: Controller */
        uint32_t abrt_hs_norstrt       : 1;  /**< [  8:  8](RO) This field indicates that the restart is disabled (IC_RESTART_EN bit (IC_CON[5])
                                                                 =0) and the user is trying to use the controller to transfer data in High Speed
                                                                 mode.

                                                                 Role of DW_apb_i2c: Controller-Transmitter or Controller-Receiver */
        uint32_t abrt_sbyte_ackdet     : 1;  /**< [  7:  7](RO) This field indicates that the Controller has sent a START Byte and the START
                                                                 Byte was acknowledged (wrong behavior).

                                                                 Role of DW_apb_i2c: Controller */
        uint32_t abrt_hs_ackdet        : 1;  /**< [  6:  6](RO) This field indicates that the Controller is in High Speed mode and the High
                                                                 Speed Controller code was acknowledged (wrong behavior).

                                                                 Role of DW_apb_i2c: Controller */
        uint32_t abrt_gcall_read       : 1;  /**< [  5:  5](RO) This field indicates that DW_apb_i2c in the controller mode has sent a General
                                                                 Call but the user programmed the byte following the General Call to be a read
                                                                 from the bus (IC_DATA_CMD[9] is set to 1).

                                                                 Role of DW_apb_i2c:  Controller-Transmitter */
        uint32_t abrt_gcall_noack      : 1;  /**< [  4:  4](RO) This field indicates that DW_apb_i2c in controller mode has sent a General Call
                                                                 and no target on the bus acknowledged the General Call.

                                                                 Role of DW_apb_i2c:  Controller-Transmitter */
        uint32_t abrt_txdata_noack     : 1;  /**< [  3:  3](RO) This field indicates the controller-mode only bit. When the controller receives
                                                                 an acknowledgment for the address, but when it sends data byte(s) following the
                                                                 address, it did not receive an acknowledge from the remote target(s).

                                                                 Role of DW_apb_i2c:  Controller-Transmitter */
        uint32_t abrt_10addr2_noack    : 1;  /**< [  2:  2](RO) This field indicates that the Controller is in 10-bit address mode and that the
                                                                 second address byte of the 10-bit address was not acknowledged by any target.

                                                                 Role of DW_apb_i2c:  Controller-Transmitter or Controller-Receiver */
        uint32_t abrt_10addr1_noack    : 1;  /**< [  1:  1](RO) This field indicates that the Controller is in 10-bit address mode and the first
                                                                 10-bit address byte was not acknowledged by any target.

                                                                 Role of DW_apb_i2c:  Controller-Transmitter or Controller-Receiver */
        uint32_t abrt_7b_addr_noack    : 1;  /**< [  0:  0](RO) This field indicates that the Controller is in 7-bit addressing mode and the
                                                                 address sent was not acknowledged by any target.

                                                                 Role of DW_apb_i2c:  Controller-Transmitter or Controller-Receiver */
#else /* Word 0 - Little Endian */
        uint32_t abrt_7b_addr_noack    : 1;  /**< [  0:  0](RO) This field indicates that the Controller is in 7-bit addressing mode and the
                                                                 address sent was not acknowledged by any target.

                                                                 Role of DW_apb_i2c:  Controller-Transmitter or Controller-Receiver */
        uint32_t abrt_10addr1_noack    : 1;  /**< [  1:  1](RO) This field indicates that the Controller is in 10-bit address mode and the first
                                                                 10-bit address byte was not acknowledged by any target.

                                                                 Role of DW_apb_i2c:  Controller-Transmitter or Controller-Receiver */
        uint32_t abrt_10addr2_noack    : 1;  /**< [  2:  2](RO) This field indicates that the Controller is in 10-bit address mode and that the
                                                                 second address byte of the 10-bit address was not acknowledged by any target.

                                                                 Role of DW_apb_i2c:  Controller-Transmitter or Controller-Receiver */
        uint32_t abrt_txdata_noack     : 1;  /**< [  3:  3](RO) This field indicates the controller-mode only bit. When the controller receives
                                                                 an acknowledgment for the address, but when it sends data byte(s) following the
                                                                 address, it did not receive an acknowledge from the remote target(s).

                                                                 Role of DW_apb_i2c:  Controller-Transmitter */
        uint32_t abrt_gcall_noack      : 1;  /**< [  4:  4](RO) This field indicates that DW_apb_i2c in controller mode has sent a General Call
                                                                 and no target on the bus acknowledged the General Call.

                                                                 Role of DW_apb_i2c:  Controller-Transmitter */
        uint32_t abrt_gcall_read       : 1;  /**< [  5:  5](RO) This field indicates that DW_apb_i2c in the controller mode has sent a General
                                                                 Call but the user programmed the byte following the General Call to be a read
                                                                 from the bus (IC_DATA_CMD[9] is set to 1).

                                                                 Role of DW_apb_i2c:  Controller-Transmitter */
        uint32_t abrt_hs_ackdet        : 1;  /**< [  6:  6](RO) This field indicates that the Controller is in High Speed mode and the High
                                                                 Speed Controller code was acknowledged (wrong behavior).

                                                                 Role of DW_apb_i2c: Controller */
        uint32_t abrt_sbyte_ackdet     : 1;  /**< [  7:  7](RO) This field indicates that the Controller has sent a START Byte and the START
                                                                 Byte was acknowledged (wrong behavior).

                                                                 Role of DW_apb_i2c: Controller */
        uint32_t abrt_hs_norstrt       : 1;  /**< [  8:  8](RO) This field indicates that the restart is disabled (IC_RESTART_EN bit (IC_CON[5])
                                                                 =0) and the user is trying to use the controller to transfer data in High Speed
                                                                 mode.

                                                                 Role of DW_apb_i2c: Controller-Transmitter or Controller-Receiver */
        uint32_t abrt_sbyte_norstrt    : 1;  /**< [  9:  9](RO) To clear Bit 9, the source of the
                                                                 ABRT_SBYTE_NORSTRT must be fixed first;
                                                                 restart must be enabled (IC_CON[5]=1),
                                                                 the SPECIAL bit must be cleared (IC_TAR[11]),
                                                                 or the GC_OR_START bit must be cleared
                                                                 (IC_TAR[10]). Once the source of the
                                                                 ABRT_SBYTE_NORSTRT is fixed,
                                                                 then this bit can be cleared in the same
                                                                 manner as other bits in this register. If
                                                                 the source of the ABRT_SBYTE_NORSTRT is not fixed
                                                                 before attempting to clear this bit, bit 9
                                                                 clears for one cycle and then gets reasserted. When this field is set to 1, the
                                                                 restart is disabled (IC_RESTART_EN bit (IC_CON[5]) =0) and the user is trying to
                                                                 send a START Byte.

                                                                 Role of DW_apb_i2c: Controller */
        uint32_t abrt_10b_rd_norstrt   : 1;  /**< [ 10: 10](RO) This field indicates that the restart is disabled (IC_RESTART_EN bit (IC_CON[5])
                                                                 =0) and the controller sends a read command in 10-bit addressing mode.

                                                                 Role of DW_apb_i2c: Controller-Receiver */
        uint32_t abrt_master_dis       : 1;  /**< [ 11: 11](RO) This field indicates that the User tries to initiate a Controller operation with
                                                                 the Controller mode disabled.

                                                                 Role of DW_apb_i2c: Controller-Transmitter or Controller-Receiver */
        uint32_t arb_lost              : 1;  /**< [ 12: 12](RO) This field specifies that the Controller has lost arbitration, or if
                                                                 IC_TX_ABRT_SOURCE[14] is also set, then the target transmitter has lost
                                                                 arbitration.

                                                                 Role of DW_apb_i2c: Controller-Transmitter or Target-Transmitter */
        uint32_t abrt_slvflush_txfifo  : 1;  /**< [ 13: 13](RO) This field specifies that the Target has received a read command and some data
                                                                 exists in the TX FIFO, so the target issues a TX_ABRT interrupt to flush old
                                                                 data in TX FIFO.

                                                                 Role of DW_apb_i2c: Target-Transmitter */
        uint32_t abrt_slv_arblost      : 1;  /**< [ 14: 14](RO) This field indicates that a Target has lost the bus while transmitting data to a
                                                                 remote controller. IC_TX_ABRT_SOURCE[12] is set at the same time.
                                                                 Note: Even though the target never
                                                                 'owns' the bus, something could go
                                                                 wrong on the bus. This is a fail safe
                                                                 check. For instance, during a data
                                                                 transmission at the low-to-high
                                                                 transition of SCL, if what is on the data
                                                                 bus is not what is supposed to be
                                                                 transmitted, then DW_apb_i2c no
                                                                 longer own the bus.

                                                                 Role of DW_apb_i2c: Target-Transmitter */
        uint32_t abrt_slvrd_intx       : 1;  /**< [ 15: 15](RO) When the processor side responds to
                                                                 a target mode request for data to be
                                                                 transmitted to a remote controller and user
                                                                 writes a 1 in CMD (bit 8) of
                                                                 IC_DATA_CMD register.

                                                                 Role of DW_apb_i2c: Target-Transmitter */
        uint32_t abrt_user_abrt        : 1;  /**< [ 16: 16](RO) This is a controller-mode-only bit. Controller has
                                                                 detected the transfer terminate (IC_ENABLE[1])

                                                                 Role of DW_apb_i2c: Controller-Transmitter */
        uint32_t abrt_sda_stuck_at_low : 1;  /**< [ 17: 17](RO) This is a controller-mode-only bit. Controller detects the SDA Stuck at low for
                                                                 the IC_SDA_STUCK_AT_LOW_TIMEOUT value of ic_clks.

                                                                 Role of DW_apb_i2c: Controller */
        uint32_t rsvd_abrt_device_write : 3; /**< [ 20: 18](RO) ABRT_DEVICE_WRITE Register field Reserved bits - Read Only */
        uint32_t rsvd_ic_tx_abrt_source : 2; /**< [ 22: 21](RO) IC_TX_ABRT_SOURCE Reserved bits - Read Only */
        uint32_t tx_flush_cnt          : 9;  /**< [ 31: 23](RO) This field indicates the
                                                                 number of Tx FIFO Data Commands which are flushed due to TX_ABRT interrupt.
                                                                 It is cleared whenever I2C is disabled.

                                                                 Role of DW_apb_i2c: Controller-Transmitter or Target-Transmitter */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_i2cx_ic_tx_abrt_source_s cn; */
};
typedef union cavm_i2cx_ic_tx_abrt_source cavm_i2cx_ic_tx_abrt_source_t;

static inline uint64_t CAVM_I2CX_IC_TX_ABRT_SOURCE(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_I2CX_IC_TX_ABRT_SOURCE(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CN20KA) && (a<=3))
        return 0xc09010000080ll + 0x100000000ll * ((a) & 0x3);
    __cavm_csr_fatal("I2CX_IC_TX_ABRT_SOURCE", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_I2CX_IC_TX_ABRT_SOURCE(a) cavm_i2cx_ic_tx_abrt_source_t
#define bustype_CAVM_I2CX_IC_TX_ABRT_SOURCE(a) CSR_TYPE_RSL32b
#define basename_CAVM_I2CX_IC_TX_ABRT_SOURCE(a) "I2CX_IC_TX_ABRT_SOURCE"
#define device_bar_CAVM_I2CX_IC_TX_ABRT_SOURCE(a) 0x0 /* PF_BAR0 */
#define busnum_CAVM_I2CX_IC_TX_ABRT_SOURCE(a) (a)
#define arguments_CAVM_I2CX_IC_TX_ABRT_SOURCE(a) (a),-1,-1,-1

/**
 * Register (RSL32b) i2c#_ic_tx_tl
 *
 * I2C Ic Tx Tl Register
 * I2C Transmit FIFO Threshold Register
 */
union cavm_i2cx_ic_tx_tl
{
    uint32_t u;
    struct cavm_i2cx_ic_tx_tl_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t rsvd_ic_tx_tl         : 24; /**< [ 31:  8](RO) IC_TX_TL Reserved bits - Read Only */
        uint32_t tx_tl                 : 8;  /**< [  7:  0](R/W) Transmit FIFO Threshold Level.

                                                                 Controls the level of entries (or below) that trigger
                                                                 the TX_EMPTY interrupt (bit 4 in IC_RAW_INTR_STAT register).
                                                                 The valid range is 0-255, with the additional restriction that
                                                                 it may not be set to value larger than the depth of the buffer.
                                                                 If an attempt is made to do that, the actual value set will be
                                                                 the maximum depth of the buffer.
                                                                 A value of 0 sets the threshold for 0 entries, and a value of 255
                                                                 sets the threshold for 255 entries. */
#else /* Word 0 - Little Endian */
        uint32_t tx_tl                 : 8;  /**< [  7:  0](R/W) Transmit FIFO Threshold Level.

                                                                 Controls the level of entries (or below) that trigger
                                                                 the TX_EMPTY interrupt (bit 4 in IC_RAW_INTR_STAT register).
                                                                 The valid range is 0-255, with the additional restriction that
                                                                 it may not be set to value larger than the depth of the buffer.
                                                                 If an attempt is made to do that, the actual value set will be
                                                                 the maximum depth of the buffer.
                                                                 A value of 0 sets the threshold for 0 entries, and a value of 255
                                                                 sets the threshold for 255 entries. */
        uint32_t rsvd_ic_tx_tl         : 24; /**< [ 31:  8](RO) IC_TX_TL Reserved bits - Read Only */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_i2cx_ic_tx_tl_s cn; */
};
typedef union cavm_i2cx_ic_tx_tl cavm_i2cx_ic_tx_tl_t;

static inline uint64_t CAVM_I2CX_IC_TX_TL(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_I2CX_IC_TX_TL(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CN20KA) && (a<=3))
        return 0xc0901000003cll + 0x100000000ll * ((a) & 0x3);
    __cavm_csr_fatal("I2CX_IC_TX_TL", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_I2CX_IC_TX_TL(a) cavm_i2cx_ic_tx_tl_t
#define bustype_CAVM_I2CX_IC_TX_TL(a) CSR_TYPE_RSL32b
#define basename_CAVM_I2CX_IC_TX_TL(a) "I2CX_IC_TX_TL"
#define device_bar_CAVM_I2CX_IC_TX_TL(a) 0x0 /* PF_BAR0 */
#define busnum_CAVM_I2CX_IC_TX_TL(a) (a)
#define arguments_CAVM_I2CX_IC_TX_TL(a) (a),-1,-1,-1

/**
 * Register (RSL32b) i2c#_ic_txflr
 *
 * I2C Ic Txflr Register
 * I2C Transmit FIFO Level Register.
 * This register contains the number of valid data entries in the transmit FIFO buffer.
 * It is cleared whenever:
 *  - The I2C is disabled
 *  - There is a transmit terminate - that is, TX_ABRT bit is set in the IC_RAW_INTR_STAT register
 *  - The target bulk transmit mode is terminated
 * The register increments whenever data is placed into the transmit FIFO and
 * decrements when data is taken from the transmit FIFO.
 */
union cavm_i2cx_ic_txflr
{
    uint32_t u;
    struct cavm_i2cx_ic_txflr_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t rsvd_txflr            : 23; /**< [ 31:  9](RO) TXFLR Register field Reserved bits - Read Only */
        uint32_t txflr                 : 9;  /**< [  8:  0](RO) Transmit FIFO Level.
                                                                 Contains the number of valid data entries in the
                                                                 transmit FIFO. */
#else /* Word 0 - Little Endian */
        uint32_t txflr                 : 9;  /**< [  8:  0](RO) Transmit FIFO Level.
                                                                 Contains the number of valid data entries in the
                                                                 transmit FIFO. */
        uint32_t rsvd_txflr            : 23; /**< [ 31:  9](RO) TXFLR Register field Reserved bits - Read Only */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_i2cx_ic_txflr_s cn; */
};
typedef union cavm_i2cx_ic_txflr cavm_i2cx_ic_txflr_t;

static inline uint64_t CAVM_I2CX_IC_TXFLR(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_I2CX_IC_TXFLR(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CN20KA) && (a<=3))
        return 0xc09010000074ll + 0x100000000ll * ((a) & 0x3);
    __cavm_csr_fatal("I2CX_IC_TXFLR", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_I2CX_IC_TXFLR(a) cavm_i2cx_ic_txflr_t
#define bustype_CAVM_I2CX_IC_TXFLR(a) CSR_TYPE_RSL32b
#define basename_CAVM_I2CX_IC_TXFLR(a) "I2CX_IC_TXFLR"
#define device_bar_CAVM_I2CX_IC_TXFLR(a) 0x0 /* PF_BAR0 */
#define busnum_CAVM_I2CX_IC_TXFLR(a) (a)
#define arguments_CAVM_I2CX_IC_TXFLR(a) (a),-1,-1,-1

/**
 * Register (RSL) i2c#_intr
 *
 * I2C PF Interrupt Register
 * This register contains the different interrupt summary bits of the I2C.
 * This register is not accessible through ROM scripts; see SCR_WRITE32_S[ADDR].
 * This register is reset on cold reset.
 */
union cavm_i2cx_intr
{
    uint64_t u;
    struct cavm_i2cx_intr_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_1_63         : 63;
        uint64_t i2c_intr_out          : 1;  /**< [  0:  0](R/W1C/H) I2C interrupt output. */
#else /* Word 0 - Little Endian */
        uint64_t i2c_intr_out          : 1;  /**< [  0:  0](R/W1C/H) I2C interrupt output. */
        uint64_t reserved_1_63         : 63;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_i2cx_intr_s cn; */
};
typedef union cavm_i2cx_intr cavm_i2cx_intr_t;

static inline uint64_t CAVM_I2CX_INTR(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_I2CX_INTR(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CN20KA) && (a<=3))
        return 0xc09010000160ll + 0x100000000ll * ((a) & 0x3);
    __cavm_csr_fatal("I2CX_INTR", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_I2CX_INTR(a) cavm_i2cx_intr_t
#define bustype_CAVM_I2CX_INTR(a) CSR_TYPE_RSL
#define basename_CAVM_I2CX_INTR(a) "I2CX_INTR"
#define device_bar_CAVM_I2CX_INTR(a) 0x0 /* PF_BAR0 */
#define busnum_CAVM_I2CX_INTR(a) (a)
#define arguments_CAVM_I2CX_INTR(a) (a),-1,-1,-1

/**
 * Register (RSL) i2c#_intr_ena_w1c
 *
 * I2C PF Interrupt Enable Clear Register
 * This register clears interrupt enable bits.
 */
union cavm_i2cx_intr_ena_w1c
{
    uint64_t u;
    struct cavm_i2cx_intr_ena_w1c_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_1_63         : 63;
        uint64_t i2c_intr_out          : 1;  /**< [  0:  0](R/W1C/H) Reads or clears enable for I2C(0..3)_INTR[I2C_INTR_OUT]. */
#else /* Word 0 - Little Endian */
        uint64_t i2c_intr_out          : 1;  /**< [  0:  0](R/W1C/H) Reads or clears enable for I2C(0..3)_INTR[I2C_INTR_OUT]. */
        uint64_t reserved_1_63         : 63;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_i2cx_intr_ena_w1c_s cn; */
};
typedef union cavm_i2cx_intr_ena_w1c cavm_i2cx_intr_ena_w1c_t;

static inline uint64_t CAVM_I2CX_INTR_ENA_W1C(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_I2CX_INTR_ENA_W1C(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CN20KA) && (a<=3))
        return 0xc09010000170ll + 0x100000000ll * ((a) & 0x3);
    __cavm_csr_fatal("I2CX_INTR_ENA_W1C", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_I2CX_INTR_ENA_W1C(a) cavm_i2cx_intr_ena_w1c_t
#define bustype_CAVM_I2CX_INTR_ENA_W1C(a) CSR_TYPE_RSL
#define basename_CAVM_I2CX_INTR_ENA_W1C(a) "I2CX_INTR_ENA_W1C"
#define device_bar_CAVM_I2CX_INTR_ENA_W1C(a) 0x0 /* PF_BAR0 */
#define busnum_CAVM_I2CX_INTR_ENA_W1C(a) (a)
#define arguments_CAVM_I2CX_INTR_ENA_W1C(a) (a),-1,-1,-1

/**
 * Register (RSL) i2c#_intr_ena_w1s
 *
 * I2C PF Interrupt Enable Set Register
 * This register sets interrupt enable bits.
 */
union cavm_i2cx_intr_ena_w1s
{
    uint64_t u;
    struct cavm_i2cx_intr_ena_w1s_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_1_63         : 63;
        uint64_t i2c_intr_out          : 1;  /**< [  0:  0](R/W1S/H) Reads or sets enable for I2C(0..3)_INTR[I2C_INTR_OUT]. */
#else /* Word 0 - Little Endian */
        uint64_t i2c_intr_out          : 1;  /**< [  0:  0](R/W1S/H) Reads or sets enable for I2C(0..3)_INTR[I2C_INTR_OUT]. */
        uint64_t reserved_1_63         : 63;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_i2cx_intr_ena_w1s_s cn; */
};
typedef union cavm_i2cx_intr_ena_w1s cavm_i2cx_intr_ena_w1s_t;

static inline uint64_t CAVM_I2CX_INTR_ENA_W1S(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_I2CX_INTR_ENA_W1S(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CN20KA) && (a<=3))
        return 0xc09010000178ll + 0x100000000ll * ((a) & 0x3);
    __cavm_csr_fatal("I2CX_INTR_ENA_W1S", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_I2CX_INTR_ENA_W1S(a) cavm_i2cx_intr_ena_w1s_t
#define bustype_CAVM_I2CX_INTR_ENA_W1S(a) CSR_TYPE_RSL
#define basename_CAVM_I2CX_INTR_ENA_W1S(a) "I2CX_INTR_ENA_W1S"
#define device_bar_CAVM_I2CX_INTR_ENA_W1S(a) 0x0 /* PF_BAR0 */
#define busnum_CAVM_I2CX_INTR_ENA_W1S(a) (a)
#define arguments_CAVM_I2CX_INTR_ENA_W1S(a) (a),-1,-1,-1

/**
 * Register (RSL) i2c#_intr_w1s
 *
 * I2C PF Interrupt Set Register
 * This register sets interrupt bits.
 */
union cavm_i2cx_intr_w1s
{
    uint64_t u;
    struct cavm_i2cx_intr_w1s_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_1_63         : 63;
        uint64_t i2c_intr_out          : 1;  /**< [  0:  0](R/W1S/H) Reads or sets I2C(0..3)_INTR[I2C_INTR_OUT]. */
#else /* Word 0 - Little Endian */
        uint64_t i2c_intr_out          : 1;  /**< [  0:  0](R/W1S/H) Reads or sets I2C(0..3)_INTR[I2C_INTR_OUT]. */
        uint64_t reserved_1_63         : 63;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_i2cx_intr_w1s_s cn; */
};
typedef union cavm_i2cx_intr_w1s cavm_i2cx_intr_w1s_t;

static inline uint64_t CAVM_I2CX_INTR_W1S(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_I2CX_INTR_W1S(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CN20KA) && (a<=3))
        return 0xc09010000168ll + 0x100000000ll * ((a) & 0x3);
    __cavm_csr_fatal("I2CX_INTR_W1S", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_I2CX_INTR_W1S(a) cavm_i2cx_intr_w1s_t
#define bustype_CAVM_I2CX_INTR_W1S(a) CSR_TYPE_RSL
#define basename_CAVM_I2CX_INTR_W1S(a) "I2CX_INTR_W1S"
#define device_bar_CAVM_I2CX_INTR_W1S(a) 0x0 /* PF_BAR0 */
#define busnum_CAVM_I2CX_INTR_W1S(a) (a)
#define arguments_CAVM_I2CX_INTR_W1S(a) (a),-1,-1,-1

/**
 * Register (RSL) i2c#_msix_pba#
 *
 * I2C MSI-X Pending Bit Array Registers
 * This register is the MSI-X PBA table, the bit number is indexed by the I3CSM_INT_VEC_E
 * enumeration.
 */
union cavm_i2cx_msix_pbax
{
    uint64_t u;
    struct cavm_i2cx_msix_pbax_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t pend                  : 64; /**< [ 63:  0](RO/H) Pending message for the associated I2C()_MSIX_VEC()_CTL, enumerated by
                                                                 I2C_INT_VEC_E. Bits that have no associated I2C_INT_VEC_E are zero. */
#else /* Word 0 - Little Endian */
        uint64_t pend                  : 64; /**< [ 63:  0](RO/H) Pending message for the associated I2C()_MSIX_VEC()_CTL, enumerated by
                                                                 I2C_INT_VEC_E. Bits that have no associated I2C_INT_VEC_E are zero. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_i2cx_msix_pbax_s cn; */
};
typedef union cavm_i2cx_msix_pbax cavm_i2cx_msix_pbax_t;

static inline uint64_t CAVM_I2CX_MSIX_PBAX(uint64_t a, uint64_t b) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_I2CX_MSIX_PBAX(uint64_t a, uint64_t b)
{
    if (cavm_is_model(OCTEONTX_CN20KA) && ((a<=3) && (b==0)))
        return 0xc09010ff0000ll + 0x100000000ll * ((a) & 0x3) + 8ll * ((b) & 0x0);
    __cavm_csr_fatal("I2CX_MSIX_PBAX", 2, a, b, 0, 0, 0, 0);
}

#define typedef_CAVM_I2CX_MSIX_PBAX(a,b) cavm_i2cx_msix_pbax_t
#define bustype_CAVM_I2CX_MSIX_PBAX(a,b) CSR_TYPE_RSL
#define basename_CAVM_I2CX_MSIX_PBAX(a,b) "I2CX_MSIX_PBAX"
#define device_bar_CAVM_I2CX_MSIX_PBAX(a,b) 0x4 /* PF_BAR4 */
#define busnum_CAVM_I2CX_MSIX_PBAX(a,b) (a)
#define arguments_CAVM_I2CX_MSIX_PBAX(a,b) (a),(b),-1,-1

/**
 * Register (RSL) i2c#_msix_vec#_addr
 *
 * I2C MSI-X Vector Table Address Registers
 * This register is the MSI-X vector table, indexed by the I2C_INT_VEC_E enumeration.
 */
union cavm_i2cx_msix_vecx_addr
{
    uint64_t u;
    struct cavm_i2cx_msix_vecx_addr_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_53_63        : 11;
        uint64_t addr                  : 51; /**< [ 52:  2](R/W) IOVA to use for MSI-X delivery of this vector. */
        uint64_t reserved_1            : 1;
        uint64_t secvec                : 1;  /**< [  0:  0](SR/W) Secure vector.
                                                                 0 = This vector may be read or written by either secure or nonsecure states.
                                                                 The vector's IOVA is sent to the SMMU as nonsecure (though this only affects
                                                                 physical addresses if PCCPF_XXX_VSEC_SCTL[MSIX_PHYS]=1).
                                                                 1 = This vector's I2C()_MSIX_VEC()_ADDR, I2C()_MSIX_VEC()_CTL, and corresponding
                                                                 bit of I2C()_MSIX_PBA() are RAZ/WI and does not cause a fault when accessed
                                                                 by the nonsecure world.
                                                                 The vector's IOVA is sent to the SMMU as secure (though this only affects
                                                                 physical addresses if PCCPF_XXX_VSEC_SCTL[MSIX_PHYS]=1 or
                                                                 PCCPF_XXX_VSEC_SCTL[MSIX_SEC_PHYS]=1).
                                                                 If PCCPF_I3C()_VSEC_SCTL[MSIX_SEC] (for documentation, see
                                                                 PCCPF_XXX_VSEC_SCTL[MSIX_SEC]) is set, all vectors are secure and function as if [SECVEC]
                                                                 was set.
                                                                 Also note the following:
                                                                 * When PCCPF_XXX_VSEC_SCTL[MSIX_SEC_EN]=1, all secure vectors (including secure
                                                                 VF vectors) will act as if PCCPF/PCCVF_XXX_MSIX_CAP_HDR[MSIXEN]=1,
                                                                 PCCPF/PCCVF_XXX_MSIX_CAP_HDR[FUNM]=0 and PCCPF/PCCVF_XXX_CMD[ME]=1.
                                                                 * When PCCPF_XXX_VSEC_SCTL[MSIX_SEC_PHYS]=1, all secure vectors (including
                                                                 secure VF vectors) are considered physical, regardless of
                                                                 PCCPF_XXX_VSEC_SCTL[MSIX_PHYS]. */
#else /* Word 0 - Little Endian */
        uint64_t secvec                : 1;  /**< [  0:  0](SR/W) Secure vector.
                                                                 0 = This vector may be read or written by either secure or nonsecure states.
                                                                 The vector's IOVA is sent to the SMMU as nonsecure (though this only affects
                                                                 physical addresses if PCCPF_XXX_VSEC_SCTL[MSIX_PHYS]=1).
                                                                 1 = This vector's I2C()_MSIX_VEC()_ADDR, I2C()_MSIX_VEC()_CTL, and corresponding
                                                                 bit of I2C()_MSIX_PBA() are RAZ/WI and does not cause a fault when accessed
                                                                 by the nonsecure world.
                                                                 The vector's IOVA is sent to the SMMU as secure (though this only affects
                                                                 physical addresses if PCCPF_XXX_VSEC_SCTL[MSIX_PHYS]=1 or
                                                                 PCCPF_XXX_VSEC_SCTL[MSIX_SEC_PHYS]=1).
                                                                 If PCCPF_I3C()_VSEC_SCTL[MSIX_SEC] (for documentation, see
                                                                 PCCPF_XXX_VSEC_SCTL[MSIX_SEC]) is set, all vectors are secure and function as if [SECVEC]
                                                                 was set.
                                                                 Also note the following:
                                                                 * When PCCPF_XXX_VSEC_SCTL[MSIX_SEC_EN]=1, all secure vectors (including secure
                                                                 VF vectors) will act as if PCCPF/PCCVF_XXX_MSIX_CAP_HDR[MSIXEN]=1,
                                                                 PCCPF/PCCVF_XXX_MSIX_CAP_HDR[FUNM]=0 and PCCPF/PCCVF_XXX_CMD[ME]=1.
                                                                 * When PCCPF_XXX_VSEC_SCTL[MSIX_SEC_PHYS]=1, all secure vectors (including
                                                                 secure VF vectors) are considered physical, regardless of
                                                                 PCCPF_XXX_VSEC_SCTL[MSIX_PHYS]. */
        uint64_t reserved_1            : 1;
        uint64_t addr                  : 51; /**< [ 52:  2](R/W) IOVA to use for MSI-X delivery of this vector. */
        uint64_t reserved_53_63        : 11;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_i2cx_msix_vecx_addr_s cn; */
};
typedef union cavm_i2cx_msix_vecx_addr cavm_i2cx_msix_vecx_addr_t;

static inline uint64_t CAVM_I2CX_MSIX_VECX_ADDR(uint64_t a, uint64_t b) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_I2CX_MSIX_VECX_ADDR(uint64_t a, uint64_t b)
{
    if (cavm_is_model(OCTEONTX_CN20KA) && ((a<=3) && (b==0)))
        return 0xc09010f00000ll + 0x100000000ll * ((a) & 0x3) + 0x10ll * ((b) & 0x0);
    __cavm_csr_fatal("I2CX_MSIX_VECX_ADDR", 2, a, b, 0, 0, 0, 0);
}

#define typedef_CAVM_I2CX_MSIX_VECX_ADDR(a,b) cavm_i2cx_msix_vecx_addr_t
#define bustype_CAVM_I2CX_MSIX_VECX_ADDR(a,b) CSR_TYPE_RSL
#define basename_CAVM_I2CX_MSIX_VECX_ADDR(a,b) "I2CX_MSIX_VECX_ADDR"
#define device_bar_CAVM_I2CX_MSIX_VECX_ADDR(a,b) 0x4 /* PF_BAR4 */
#define busnum_CAVM_I2CX_MSIX_VECX_ADDR(a,b) (a)
#define arguments_CAVM_I2CX_MSIX_VECX_ADDR(a,b) (a),(b),-1,-1

/**
 * Register (RSL) i2c#_msix_vec#_ctl
 *
 * I2C MSI-X Vector Table Control and Data Registers
 * This register is the MSI-X vector table, indexed by the I2C_INT_VEC_E enumeration.
 */
union cavm_i2cx_msix_vecx_ctl
{
    uint64_t u;
    struct cavm_i2cx_msix_vecx_ctl_s
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
    /* struct cavm_i2cx_msix_vecx_ctl_s cn; */
};
typedef union cavm_i2cx_msix_vecx_ctl cavm_i2cx_msix_vecx_ctl_t;

static inline uint64_t CAVM_I2CX_MSIX_VECX_CTL(uint64_t a, uint64_t b) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_I2CX_MSIX_VECX_CTL(uint64_t a, uint64_t b)
{
    if (cavm_is_model(OCTEONTX_CN20KA) && ((a<=3) && (b==0)))
        return 0xc09010f00008ll + 0x100000000ll * ((a) & 0x3) + 0x10ll * ((b) & 0x0);
    __cavm_csr_fatal("I2CX_MSIX_VECX_CTL", 2, a, b, 0, 0, 0, 0);
}

#define typedef_CAVM_I2CX_MSIX_VECX_CTL(a,b) cavm_i2cx_msix_vecx_ctl_t
#define bustype_CAVM_I2CX_MSIX_VECX_CTL(a,b) CSR_TYPE_RSL
#define basename_CAVM_I2CX_MSIX_VECX_CTL(a,b) "I2CX_MSIX_VECX_CTL"
#define device_bar_CAVM_I2CX_MSIX_VECX_CTL(a,b) 0x4 /* PF_BAR4 */
#define busnum_CAVM_I2CX_MSIX_VECX_CTL(a,b) (a)
#define arguments_CAVM_I2CX_MSIX_VECX_CTL(a,b) (a),(b),-1,-1

#endif /* __CAVM_CSRS_I2C_H__ */
