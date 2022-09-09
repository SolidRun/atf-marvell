#ifndef __CAVM_CSRS_ARXE_H__
#define __CAVM_CSRS_ARXE_H__
/* This file is auto-generated. Do not edit */

/***********************license start***********************************
* Copyright (c) 2020 Marvell
* SPDX-License-Identifier: BSD-3-Clause
* https://spdx.org/licenses
***********************license end**************************************/


/**
 * @file
 *
 * Configuration and status register (CSR) address and type definitions for
 * OcteonTX ARXE.
 *
 * This file is auto generated. Do not edit.
 *
 */

/**
 * Register (RSL) arxe#_bp_test#
 *
 * INTERNAL: Back Pressure Test Register
 *
 * Internal:
 * BP_TEST\<0\> = backpressure to rd512 ports
 * BP_TEST\<1\> = backpressure to rd256 and wr256 ports
 */
union cavm_arxex_bp_testx
{
    uint64_t u;
    struct cavm_arxex_bp_testx_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t enable                : 4;  /**< [ 63: 60](R/W) Enable test mode. For diagnostic use only.
                                                                 Internal:
                                                                 Once a bit is set, random backpressure is generated
                                                                 at the corresponding point to allow for more frequent backpressure.
                                                                 Prevents arb from granting. */
        uint64_t reserved_24_59        : 36;
        uint64_t bp_cfg                : 8;  /**< [ 23: 16](R/W) Backpressure weight. For diagnostic use only.
                                                                 Internal:
                                                                 There are 2 backpressure configuration bits per enable, with the two bits
                                                                 defined as 0x0=100% of the time, 0x1=75% of the time, 0x2=50% of the time,
                                                                 0x3=25% of the time. */
        uint64_t reserved_12_15        : 4;
        uint64_t lfsr_freq             : 12; /**< [ 11:  0](R/W) Test LFSR update frequency in coprocessor-clocks minus one. */
#else /* Word 0 - Little Endian */
        uint64_t lfsr_freq             : 12; /**< [ 11:  0](R/W) Test LFSR update frequency in coprocessor-clocks minus one. */
        uint64_t reserved_12_15        : 4;
        uint64_t bp_cfg                : 8;  /**< [ 23: 16](R/W) Backpressure weight. For diagnostic use only.
                                                                 Internal:
                                                                 There are 2 backpressure configuration bits per enable, with the two bits
                                                                 defined as 0x0=100% of the time, 0x1=75% of the time, 0x2=50% of the time,
                                                                 0x3=25% of the time. */
        uint64_t reserved_24_59        : 36;
        uint64_t enable                : 4;  /**< [ 63: 60](R/W) Enable test mode. For diagnostic use only.
                                                                 Internal:
                                                                 Once a bit is set, random backpressure is generated
                                                                 at the corresponding point to allow for more frequent backpressure.
                                                                 Prevents arb from granting. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_arxex_bp_testx_s cn; */
};
typedef union cavm_arxex_bp_testx cavm_arxex_bp_testx_t;

static inline uint64_t CAVM_ARXEX_BP_TESTX(uint64_t a, uint64_t b) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_ARXEX_BP_TESTX(uint64_t a, uint64_t b)
{
    if ((a<=3) && (b<=1))
        return 0x87e041400080ll + 0x80000ll * ((a) & 0x3) + 8ll * ((b) & 0x1);
    __cavm_csr_fatal("ARXEX_BP_TESTX", 2, a, b, 0, 0, 0, 0);
}

#define typedef_CAVM_ARXEX_BP_TESTX(a,b) cavm_arxex_bp_testx_t
#define bustype_CAVM_ARXEX_BP_TESTX(a,b) CSR_TYPE_RSL
#define basename_CAVM_ARXEX_BP_TESTX(a,b) "ARXEX_BP_TESTX"
#define busnum_CAVM_ARXEX_BP_TESTX(a,b) (a)
#define arguments_CAVM_ARXEX_BP_TESTX(a,b) (a),(b),-1,-1

/**
 * Register (RSL) arxe#_cfg0_u0
 *
 * Configuration 0 U0 Register
 */
union cavm_arxex_cfg0_u0
{
    uint64_t u;
    struct cavm_arxex_cfg0_u0_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_63           : 1;
        uint64_t processing_mode       : 3;  /**< [ 62: 60](R/W) TBD */
        uint64_t reserved_57_59        : 3;
        uint64_t rx_mode               : 1;  /**< [ 56: 56](R/W) TBD */
        uint64_t reserved_52_55        : 4;
        uint64_t num_ds                : 4;  /**< [ 51: 48](R/W) TBD */
        uint64_t q_threshold           : 4;  /**< [ 47: 44](R/W) TBD */
        uint64_t reserved_41_43        : 3;
        uint64_t num_prb               : 9;  /**< [ 40: 32](R/W) TBD */
        uint64_t reserved_29_31        : 3;
        uint64_t num_beam              : 5;  /**< [ 28: 24](R/W) TBD */
        uint64_t reserved_20_23        : 4;
        uint64_t num_layer             : 4;  /**< [ 19: 16](R/W) TBD */
        uint64_t reserved_14_15        : 2;
        uint64_t rhh_mode              : 2;  /**< [ 13: 12](R/W) TBD */
        uint64_t reserved_4_11         : 8;
        uint64_t wtdi_start_sym_idx    : 4;  /**< [  3:  0](R/W) TBD */
#else /* Word 0 - Little Endian */
        uint64_t wtdi_start_sym_idx    : 4;  /**< [  3:  0](R/W) TBD */
        uint64_t reserved_4_11         : 8;
        uint64_t rhh_mode              : 2;  /**< [ 13: 12](R/W) TBD */
        uint64_t reserved_14_15        : 2;
        uint64_t num_layer             : 4;  /**< [ 19: 16](R/W) TBD */
        uint64_t reserved_20_23        : 4;
        uint64_t num_beam              : 5;  /**< [ 28: 24](R/W) TBD */
        uint64_t reserved_29_31        : 3;
        uint64_t num_prb               : 9;  /**< [ 40: 32](R/W) TBD */
        uint64_t reserved_41_43        : 3;
        uint64_t q_threshold           : 4;  /**< [ 47: 44](R/W) TBD */
        uint64_t num_ds                : 4;  /**< [ 51: 48](R/W) TBD */
        uint64_t reserved_52_55        : 4;
        uint64_t rx_mode               : 1;  /**< [ 56: 56](R/W) TBD */
        uint64_t reserved_57_59        : 3;
        uint64_t processing_mode       : 3;  /**< [ 62: 60](R/W) TBD */
        uint64_t reserved_63           : 1;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_arxex_cfg0_u0_s cn; */
};
typedef union cavm_arxex_cfg0_u0 cavm_arxex_cfg0_u0_t;

static inline uint64_t CAVM_ARXEX_CFG0_U0(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_ARXEX_CFG0_U0(uint64_t a)
{
    if (a<=3)
        return 0x87e041400100ll + 0x80000ll * ((a) & 0x3);
    __cavm_csr_fatal("ARXEX_CFG0_U0", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_ARXEX_CFG0_U0(a) cavm_arxex_cfg0_u0_t
#define bustype_CAVM_ARXEX_CFG0_U0(a) CSR_TYPE_RSL
#define basename_CAVM_ARXEX_CFG0_U0(a) "ARXEX_CFG0_U0"
#define busnum_CAVM_ARXEX_CFG0_U0(a) (a)
#define arguments_CAVM_ARXEX_CFG0_U0(a) (a),-1,-1,-1

/**
 * Register (RSL) arxe#_cfg0_u1
 *
 * Configuration 0 U1 Register
 */
union cavm_arxex_cfg0_u1
{
    uint64_t u;
    struct cavm_arxex_cfg0_u1_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t wbf_e                 : 8;  /**< [ 63: 56](R/W) TBD */
        uint64_t wtdi_e                : 8;  /**< [ 55: 48](R/W) TBD */
        uint64_t xreg_e                : 8;  /**< [ 47: 40](R/W) TBD */
        uint64_t reserved_32_39        : 8;
        uint64_t rinv_ec               : 8;  /**< [ 31: 24](R/W) TBD */
        uint64_t reserved_16_23        : 8;
        uint64_t x_ec                  : 8;  /**< [ 15:  8](R/W) TBD */
        uint64_t beta_rhh_ec           : 8;  /**< [  7:  0](R/W) TBD */
#else /* Word 0 - Little Endian */
        uint64_t beta_rhh_ec           : 8;  /**< [  7:  0](R/W) TBD */
        uint64_t x_ec                  : 8;  /**< [ 15:  8](R/W) TBD */
        uint64_t reserved_16_23        : 8;
        uint64_t rinv_ec               : 8;  /**< [ 31: 24](R/W) TBD */
        uint64_t reserved_32_39        : 8;
        uint64_t xreg_e                : 8;  /**< [ 47: 40](R/W) TBD */
        uint64_t wtdi_e                : 8;  /**< [ 55: 48](R/W) TBD */
        uint64_t wbf_e                 : 8;  /**< [ 63: 56](R/W) TBD */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_arxex_cfg0_u1_s cn; */
};
typedef union cavm_arxex_cfg0_u1 cavm_arxex_cfg0_u1_t;

static inline uint64_t CAVM_ARXEX_CFG0_U1(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_ARXEX_CFG0_U1(uint64_t a)
{
    if (a<=3)
        return 0x87e041400108ll + 0x80000ll * ((a) & 0x3);
    __cavm_csr_fatal("ARXEX_CFG0_U1", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_ARXEX_CFG0_U1(a) cavm_arxex_cfg0_u1_t
#define bustype_CAVM_ARXEX_CFG0_U1(a) CSR_TYPE_RSL
#define basename_CAVM_ARXEX_CFG0_U1(a) "ARXEX_CFG0_U1"
#define busnum_CAVM_ARXEX_CFG0_U1(a) (a)
#define arguments_CAVM_ARXEX_CFG0_U1(a) (a),-1,-1,-1

/**
 * Register (RSL) arxe#_cfg0_u2
 *
 * Configuration 0 U2 Register
 */
union cavm_arxex_cfg0_u2
{
    uint64_t u;
    struct cavm_arxex_cfg0_u2_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_62_63        : 2;
        uint64_t rinv_prb_offset       : 6;  /**< [ 61: 56](R/W) TBD */
        uint64_t reserved_49_55        : 7;
        uint64_t rinv_base_addr        : 17; /**< [ 48: 32](R/W) TBD */
        uint64_t fdi_to_q              : 16; /**< [ 31: 16](R/W) TBD */
        uint64_t fdi_to_i              : 16; /**< [ 15:  0](R/W) TBD */
#else /* Word 0 - Little Endian */
        uint64_t fdi_to_i              : 16; /**< [ 15:  0](R/W) TBD */
        uint64_t fdi_to_q              : 16; /**< [ 31: 16](R/W) TBD */
        uint64_t rinv_base_addr        : 17; /**< [ 48: 32](R/W) TBD */
        uint64_t reserved_49_55        : 7;
        uint64_t rinv_prb_offset       : 6;  /**< [ 61: 56](R/W) TBD */
        uint64_t reserved_62_63        : 2;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_arxex_cfg0_u2_s cn; */
};
typedef union cavm_arxex_cfg0_u2 cavm_arxex_cfg0_u2_t;

static inline uint64_t CAVM_ARXEX_CFG0_U2(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_ARXEX_CFG0_U2(uint64_t a)
{
    if (a<=3)
        return 0x87e041400110ll + 0x80000ll * ((a) & 0x3);
    __cavm_csr_fatal("ARXEX_CFG0_U2", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_ARXEX_CFG0_U2(a) cavm_arxex_cfg0_u2_t
#define bustype_CAVM_ARXEX_CFG0_U2(a) CSR_TYPE_RSL
#define basename_CAVM_ARXEX_CFG0_U2(a) "ARXEX_CFG0_U2"
#define busnum_CAVM_ARXEX_CFG0_U2(a) (a)
#define arguments_CAVM_ARXEX_CFG0_U2(a) (a),-1,-1,-1

/**
 * Register (RSL) arxe#_cfg0_u3
 *
 * Configuration 0 U3 Register
 */
union cavm_arxex_cfg0_u3
{
    uint64_t u;
    struct cavm_arxex_cfg0_u3_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t hrs_e                 : 8;  /**< [ 63: 56](R/W) TBD */
        uint64_t reserved_52_55        : 4;
        uint64_t hrs_layer_offset      : 12; /**< [ 51: 40](R/W) TBD */
        uint64_t reserved_37_39        : 3;
        uint64_t hrs1_base_addr        : 17; /**< [ 36: 20](R/W) TBD */
        uint64_t reserved_17_19        : 3;
        uint64_t hrs0_base_addr        : 17; /**< [ 16:  0](R/W) TBD */
#else /* Word 0 - Little Endian */
        uint64_t hrs0_base_addr        : 17; /**< [ 16:  0](R/W) TBD */
        uint64_t reserved_17_19        : 3;
        uint64_t hrs1_base_addr        : 17; /**< [ 36: 20](R/W) TBD */
        uint64_t reserved_37_39        : 3;
        uint64_t hrs_layer_offset      : 12; /**< [ 51: 40](R/W) TBD */
        uint64_t reserved_52_55        : 4;
        uint64_t hrs_e                 : 8;  /**< [ 63: 56](R/W) TBD */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_arxex_cfg0_u3_s cn; */
};
typedef union cavm_arxex_cfg0_u3 cavm_arxex_cfg0_u3_t;

static inline uint64_t CAVM_ARXEX_CFG0_U3(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_ARXEX_CFG0_U3(uint64_t a)
{
    if (a<=3)
        return 0x87e041400118ll + 0x80000ll * ((a) & 0x3);
    __cavm_csr_fatal("ARXEX_CFG0_U3", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_ARXEX_CFG0_U3(a) cavm_arxex_cfg0_u3_t
#define bustype_CAVM_ARXEX_CFG0_U3(a) CSR_TYPE_RSL
#define basename_CAVM_ARXEX_CFG0_U3(a) "ARXEX_CFG0_U3"
#define busnum_CAVM_ARXEX_CFG0_U3(a) (a)
#define arguments_CAVM_ARXEX_CFG0_U3(a) (a),-1,-1,-1

/**
 * Register (RSL) arxe#_cfg0_u4
 *
 * Configuration 0 U4 Register
 */
union cavm_arxex_cfg0_u4
{
    uint64_t u;
    struct cavm_arxex_cfg0_u4_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t wbf_addr_layer_3      : 16; /**< [ 63: 48](R/W) TBD */
        uint64_t wbf_addr_layer_2      : 16; /**< [ 47: 32](R/W) TBD */
        uint64_t wbf_addr_layer_1      : 16; /**< [ 31: 16](R/W) TBD */
        uint64_t wbf_addr_layer_0      : 16; /**< [ 15:  0](R/W) TBD */
#else /* Word 0 - Little Endian */
        uint64_t wbf_addr_layer_0      : 16; /**< [ 15:  0](R/W) TBD */
        uint64_t wbf_addr_layer_1      : 16; /**< [ 31: 16](R/W) TBD */
        uint64_t wbf_addr_layer_2      : 16; /**< [ 47: 32](R/W) TBD */
        uint64_t wbf_addr_layer_3      : 16; /**< [ 63: 48](R/W) TBD */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_arxex_cfg0_u4_s cn; */
};
typedef union cavm_arxex_cfg0_u4 cavm_arxex_cfg0_u4_t;

static inline uint64_t CAVM_ARXEX_CFG0_U4(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_ARXEX_CFG0_U4(uint64_t a)
{
    if (a<=3)
        return 0x87e041400200ll + 0x80000ll * ((a) & 0x3);
    __cavm_csr_fatal("ARXEX_CFG0_U4", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_ARXEX_CFG0_U4(a) cavm_arxex_cfg0_u4_t
#define bustype_CAVM_ARXEX_CFG0_U4(a) CSR_TYPE_RSL
#define basename_CAVM_ARXEX_CFG0_U4(a) "ARXEX_CFG0_U4"
#define busnum_CAVM_ARXEX_CFG0_U4(a) (a)
#define arguments_CAVM_ARXEX_CFG0_U4(a) (a),-1,-1,-1

/**
 * Register (RSL) arxe#_cfg0_u5
 *
 * Configuration 0 U5 Register
 */
union cavm_arxex_cfg0_u5
{
    uint64_t u;
    struct cavm_arxex_cfg0_u5_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t wbf_addr_layer_7      : 16; /**< [ 63: 48](R/W) TBD */
        uint64_t wbf_addr_layer_6      : 16; /**< [ 47: 32](R/W) TBD */
        uint64_t wbf_addr_layer_5      : 16; /**< [ 31: 16](R/W) TBD */
        uint64_t wbf_addr_layer_4      : 16; /**< [ 15:  0](R/W) TBD */
#else /* Word 0 - Little Endian */
        uint64_t wbf_addr_layer_4      : 16; /**< [ 15:  0](R/W) TBD */
        uint64_t wbf_addr_layer_5      : 16; /**< [ 31: 16](R/W) TBD */
        uint64_t wbf_addr_layer_6      : 16; /**< [ 47: 32](R/W) TBD */
        uint64_t wbf_addr_layer_7      : 16; /**< [ 63: 48](R/W) TBD */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_arxex_cfg0_u5_s cn; */
};
typedef union cavm_arxex_cfg0_u5 cavm_arxex_cfg0_u5_t;

static inline uint64_t CAVM_ARXEX_CFG0_U5(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_ARXEX_CFG0_U5(uint64_t a)
{
    if (a<=3)
        return 0x87e041400208ll + 0x80000ll * ((a) & 0x3);
    __cavm_csr_fatal("ARXEX_CFG0_U5", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_ARXEX_CFG0_U5(a) cavm_arxex_cfg0_u5_t
#define bustype_CAVM_ARXEX_CFG0_U5(a) CSR_TYPE_RSL
#define basename_CAVM_ARXEX_CFG0_U5(a) "ARXEX_CFG0_U5"
#define busnum_CAVM_ARXEX_CFG0_U5(a) (a)
#define arguments_CAVM_ARXEX_CFG0_U5(a) (a),-1,-1,-1

/**
 * Register (RSL) arxe#_cfg0_u6
 *
 * Configuration 0 U6 Register
 */
union cavm_arxex_cfg0_u6
{
    uint64_t u;
    struct cavm_arxex_cfg0_u6_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t wtdi_addr_layer_3     : 16; /**< [ 63: 48](R/W) TBD */
        uint64_t wtdi_addr_layer_2     : 16; /**< [ 47: 32](R/W) TBD */
        uint64_t wtdi_addr_layer_1     : 16; /**< [ 31: 16](R/W) TBD */
        uint64_t wtdi_addr_layer_0     : 16; /**< [ 15:  0](R/W) TBD */
#else /* Word 0 - Little Endian */
        uint64_t wtdi_addr_layer_0     : 16; /**< [ 15:  0](R/W) TBD */
        uint64_t wtdi_addr_layer_1     : 16; /**< [ 31: 16](R/W) TBD */
        uint64_t wtdi_addr_layer_2     : 16; /**< [ 47: 32](R/W) TBD */
        uint64_t wtdi_addr_layer_3     : 16; /**< [ 63: 48](R/W) TBD */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_arxex_cfg0_u6_s cn; */
};
typedef union cavm_arxex_cfg0_u6 cavm_arxex_cfg0_u6_t;

static inline uint64_t CAVM_ARXEX_CFG0_U6(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_ARXEX_CFG0_U6(uint64_t a)
{
    if (a<=3)
        return 0x87e041400300ll + 0x80000ll * ((a) & 0x3);
    __cavm_csr_fatal("ARXEX_CFG0_U6", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_ARXEX_CFG0_U6(a) cavm_arxex_cfg0_u6_t
#define bustype_CAVM_ARXEX_CFG0_U6(a) CSR_TYPE_RSL
#define basename_CAVM_ARXEX_CFG0_U6(a) "ARXEX_CFG0_U6"
#define busnum_CAVM_ARXEX_CFG0_U6(a) (a)
#define arguments_CAVM_ARXEX_CFG0_U6(a) (a),-1,-1,-1

/**
 * Register (RSL) arxe#_cfg0_u7
 *
 * Configuration 0 U7 Register
 */
union cavm_arxex_cfg0_u7
{
    uint64_t u;
    struct cavm_arxex_cfg0_u7_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t wtdi_addr_layer_7     : 16; /**< [ 63: 48](R/W) TBD */
        uint64_t wtdi_addr_layer_6     : 16; /**< [ 47: 32](R/W) TBD */
        uint64_t wtdi_addr_layer_5     : 16; /**< [ 31: 16](R/W) TBD */
        uint64_t wtdi_addr_layer_4     : 16; /**< [ 15:  0](R/W) TBD */
#else /* Word 0 - Little Endian */
        uint64_t wtdi_addr_layer_4     : 16; /**< [ 15:  0](R/W) TBD */
        uint64_t wtdi_addr_layer_5     : 16; /**< [ 31: 16](R/W) TBD */
        uint64_t wtdi_addr_layer_6     : 16; /**< [ 47: 32](R/W) TBD */
        uint64_t wtdi_addr_layer_7     : 16; /**< [ 63: 48](R/W) TBD */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_arxex_cfg0_u7_s cn; */
};
typedef union cavm_arxex_cfg0_u7 cavm_arxex_cfg0_u7_t;

static inline uint64_t CAVM_ARXEX_CFG0_U7(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_ARXEX_CFG0_U7(uint64_t a)
{
    if (a<=3)
        return 0x87e041400308ll + 0x80000ll * ((a) & 0x3);
    __cavm_csr_fatal("ARXEX_CFG0_U7", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_ARXEX_CFG0_U7(a) cavm_arxex_cfg0_u7_t
#define bustype_CAVM_ARXEX_CFG0_U7(a) CSR_TYPE_RSL
#define basename_CAVM_ARXEX_CFG0_U7(a) "ARXEX_CFG0_U7"
#define busnum_CAVM_ARXEX_CFG0_U7(a) (a)
#define arguments_CAVM_ARXEX_CFG0_U7(a) (a),-1,-1,-1

/**
 * Register (RSL) arxe#_cfg1_u0
 *
 * Configuration 1 U0 Register
 */
union cavm_arxex_cfg1_u0
{
    uint64_t u;
    struct cavm_arxex_cfg1_u0_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_63           : 1;
        uint64_t processing_mode       : 3;  /**< [ 62: 60](R/W) TBD */
        uint64_t reserved_53_59        : 7;
        uint64_t output_format         : 1;  /**< [ 52: 52](R/W) TBD */
        uint64_t reserved_49_51        : 3;
        uint64_t whitening_mode        : 1;  /**< [ 48: 48](R/W) TBD */
        uint64_t reserved_44_47        : 4;
        uint64_t num_ds_layer          : 4;  /**< [ 43: 40](R/W) TBD */
        uint64_t reserved_33_39        : 7;
        uint64_t num_prb               : 9;  /**< [ 32: 24](R/W) TBD */
        uint64_t reserved_21_23        : 3;
        uint64_t num_beam              : 5;  /**< [ 20: 16](R/W) TBD */
        uint64_t reserved_0_15         : 16;
#else /* Word 0 - Little Endian */
        uint64_t reserved_0_15         : 16;
        uint64_t num_beam              : 5;  /**< [ 20: 16](R/W) TBD */
        uint64_t reserved_21_23        : 3;
        uint64_t num_prb               : 9;  /**< [ 32: 24](R/W) TBD */
        uint64_t reserved_33_39        : 7;
        uint64_t num_ds_layer          : 4;  /**< [ 43: 40](R/W) TBD */
        uint64_t reserved_44_47        : 4;
        uint64_t whitening_mode        : 1;  /**< [ 48: 48](R/W) TBD */
        uint64_t reserved_49_51        : 3;
        uint64_t output_format         : 1;  /**< [ 52: 52](R/W) TBD */
        uint64_t reserved_53_59        : 7;
        uint64_t processing_mode       : 3;  /**< [ 62: 60](R/W) TBD */
        uint64_t reserved_63           : 1;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_arxex_cfg1_u0_s cn; */
};
typedef union cavm_arxex_cfg1_u0 cavm_arxex_cfg1_u0_t;

static inline uint64_t CAVM_ARXEX_CFG1_U0(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_ARXEX_CFG1_U0(uint64_t a)
{
    if (a<=3)
        return 0x87e041400400ll + 0x80000ll * ((a) & 0x3);
    __cavm_csr_fatal("ARXEX_CFG1_U0", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_ARXEX_CFG1_U0(a) cavm_arxex_cfg1_u0_t
#define bustype_CAVM_ARXEX_CFG1_U0(a) CSR_TYPE_RSL
#define basename_CAVM_ARXEX_CFG1_U0(a) "ARXEX_CFG1_U0"
#define busnum_CAVM_ARXEX_CFG1_U0(a) (a)
#define arguments_CAVM_ARXEX_CFG1_U0(a) (a),-1,-1,-1

/**
 * Register (RSL) arxe#_cfg1_u1
 *
 * Configuration 1 U1 Register
 */
union cavm_arxex_cfg1_u1
{
    uint64_t u;
    struct cavm_arxex_cfg1_u1_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t input_e               : 8;  /**< [ 63: 56](R/W) TBD */
        uint64_t reserved_48_55        : 8;
        uint64_t rinv_ec               : 8;  /**< [ 47: 40](R/W) TBD */
        uint64_t output_ec             : 8;  /**< [ 39: 32](R/W) TBD */
        uint64_t reserved_28_31        : 4;
        uint64_t rinv_prb_offset       : 4;  /**< [ 27: 24](R/W) TBD */
        uint64_t reserved_17_23        : 7;
        uint64_t rinv_base_addr        : 17; /**< [ 16:  0](R/W) TBD */
#else /* Word 0 - Little Endian */
        uint64_t rinv_base_addr        : 17; /**< [ 16:  0](R/W) TBD */
        uint64_t reserved_17_23        : 7;
        uint64_t rinv_prb_offset       : 4;  /**< [ 27: 24](R/W) TBD */
        uint64_t reserved_28_31        : 4;
        uint64_t output_ec             : 8;  /**< [ 39: 32](R/W) TBD */
        uint64_t rinv_ec               : 8;  /**< [ 47: 40](R/W) TBD */
        uint64_t reserved_48_55        : 8;
        uint64_t input_e               : 8;  /**< [ 63: 56](R/W) TBD */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_arxex_cfg1_u1_s cn; */
};
typedef union cavm_arxex_cfg1_u1 cavm_arxex_cfg1_u1_t;

static inline uint64_t CAVM_ARXEX_CFG1_U1(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_ARXEX_CFG1_U1(uint64_t a)
{
    if (a<=3)
        return 0x87e041400408ll + 0x80000ll * ((a) & 0x3);
    __cavm_csr_fatal("ARXEX_CFG1_U1", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_ARXEX_CFG1_U1(a) cavm_arxex_cfg1_u1_t
#define bustype_CAVM_ARXEX_CFG1_U1(a) CSR_TYPE_RSL
#define basename_CAVM_ARXEX_CFG1_U1(a) "ARXEX_CFG1_U1"
#define busnum_CAVM_ARXEX_CFG1_U1(a) (a)
#define arguments_CAVM_ARXEX_CFG1_U1(a) (a),-1,-1,-1

/**
 * Register (RSL) arxe#_cfg2_u0
 *
 * Configuration 2 U0 Register
 */
union cavm_arxex_cfg2_u0
{
    uint64_t u;
    struct cavm_arxex_cfg2_u0_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_63           : 1;
        uint64_t processing_mode       : 3;  /**< [ 62: 60](R/W) TBD */
        uint64_t reserved_57_59        : 3;
        uint64_t rx_mode               : 1;  /**< [ 56: 56](R/W) TBD */
        uint64_t reserved_41_55        : 15;
        uint64_t num_prb               : 9;  /**< [ 40: 32](R/W) TBD */
        uint64_t reserved_29_31        : 3;
        uint64_t num_beam              : 5;  /**< [ 28: 24](R/W) TBD */
        uint64_t wbf_e                 : 8;  /**< [ 23: 16](R/W) TBD */
        uint64_t reserved_0_15         : 16;
#else /* Word 0 - Little Endian */
        uint64_t reserved_0_15         : 16;
        uint64_t wbf_e                 : 8;  /**< [ 23: 16](R/W) TBD */
        uint64_t num_beam              : 5;  /**< [ 28: 24](R/W) TBD */
        uint64_t reserved_29_31        : 3;
        uint64_t num_prb               : 9;  /**< [ 40: 32](R/W) TBD */
        uint64_t reserved_41_55        : 15;
        uint64_t rx_mode               : 1;  /**< [ 56: 56](R/W) TBD */
        uint64_t reserved_57_59        : 3;
        uint64_t processing_mode       : 3;  /**< [ 62: 60](R/W) TBD */
        uint64_t reserved_63           : 1;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_arxex_cfg2_u0_s cn; */
};
typedef union cavm_arxex_cfg2_u0 cavm_arxex_cfg2_u0_t;

static inline uint64_t CAVM_ARXEX_CFG2_U0(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_ARXEX_CFG2_U0(uint64_t a)
{
    if (a<=3)
        return 0x87e041400500ll + 0x80000ll * ((a) & 0x3);
    __cavm_csr_fatal("ARXEX_CFG2_U0", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_ARXEX_CFG2_U0(a) cavm_arxex_cfg2_u0_t
#define bustype_CAVM_ARXEX_CFG2_U0(a) CSR_TYPE_RSL
#define basename_CAVM_ARXEX_CFG2_U0(a) "ARXEX_CFG2_U0"
#define busnum_CAVM_ARXEX_CFG2_U0(a) (a)
#define arguments_CAVM_ARXEX_CFG2_U0(a) (a),-1,-1,-1

/**
 * Register (RSL) arxe#_cfg2_u1
 *
 * Configuration 2 U1 Register
 */
union cavm_arxex_cfg2_u1
{
    uint64_t u;
    struct cavm_arxex_cfg2_u1_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t wbf_addr_beam_3       : 16; /**< [ 63: 48](R/W) TBD */
        uint64_t wbf_addr_beam_2       : 16; /**< [ 47: 32](R/W) TBD */
        uint64_t wbf_addr_beam_1       : 16; /**< [ 31: 16](R/W) TBD */
        uint64_t wbf_addr_beam_0       : 16; /**< [ 15:  0](R/W) TBD */
#else /* Word 0 - Little Endian */
        uint64_t wbf_addr_beam_0       : 16; /**< [ 15:  0](R/W) TBD */
        uint64_t wbf_addr_beam_1       : 16; /**< [ 31: 16](R/W) TBD */
        uint64_t wbf_addr_beam_2       : 16; /**< [ 47: 32](R/W) TBD */
        uint64_t wbf_addr_beam_3       : 16; /**< [ 63: 48](R/W) TBD */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_arxex_cfg2_u1_s cn; */
};
typedef union cavm_arxex_cfg2_u1 cavm_arxex_cfg2_u1_t;

static inline uint64_t CAVM_ARXEX_CFG2_U1(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_ARXEX_CFG2_U1(uint64_t a)
{
    if (a<=3)
        return 0x87e041401000ll + 0x80000ll * ((a) & 0x3);
    __cavm_csr_fatal("ARXEX_CFG2_U1", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_ARXEX_CFG2_U1(a) cavm_arxex_cfg2_u1_t
#define bustype_CAVM_ARXEX_CFG2_U1(a) CSR_TYPE_RSL
#define basename_CAVM_ARXEX_CFG2_U1(a) "ARXEX_CFG2_U1"
#define busnum_CAVM_ARXEX_CFG2_U1(a) (a)
#define arguments_CAVM_ARXEX_CFG2_U1(a) (a),-1,-1,-1

/**
 * Register (RSL) arxe#_cfg2_u2
 *
 * Configuration 2 U2 Register
 */
union cavm_arxex_cfg2_u2
{
    uint64_t u;
    struct cavm_arxex_cfg2_u2_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t wbf_addr_beam_7       : 16; /**< [ 63: 48](R/W) TBD */
        uint64_t wbf_addr_beam_6       : 16; /**< [ 47: 32](R/W) TBD */
        uint64_t wbf_addr_beam_5       : 16; /**< [ 31: 16](R/W) TBD */
        uint64_t wbf_addr_beam_4       : 16; /**< [ 15:  0](R/W) TBD */
#else /* Word 0 - Little Endian */
        uint64_t wbf_addr_beam_4       : 16; /**< [ 15:  0](R/W) TBD */
        uint64_t wbf_addr_beam_5       : 16; /**< [ 31: 16](R/W) TBD */
        uint64_t wbf_addr_beam_6       : 16; /**< [ 47: 32](R/W) TBD */
        uint64_t wbf_addr_beam_7       : 16; /**< [ 63: 48](R/W) TBD */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_arxex_cfg2_u2_s cn; */
};
typedef union cavm_arxex_cfg2_u2 cavm_arxex_cfg2_u2_t;

static inline uint64_t CAVM_ARXEX_CFG2_U2(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_ARXEX_CFG2_U2(uint64_t a)
{
    if (a<=3)
        return 0x87e041401008ll + 0x80000ll * ((a) & 0x3);
    __cavm_csr_fatal("ARXEX_CFG2_U2", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_ARXEX_CFG2_U2(a) cavm_arxex_cfg2_u2_t
#define bustype_CAVM_ARXEX_CFG2_U2(a) CSR_TYPE_RSL
#define basename_CAVM_ARXEX_CFG2_U2(a) "ARXEX_CFG2_U2"
#define busnum_CAVM_ARXEX_CFG2_U2(a) (a)
#define arguments_CAVM_ARXEX_CFG2_U2(a) (a),-1,-1,-1

/**
 * Register (RSL) arxe#_cfg2_u3
 *
 * Configuration 2 U3 Register
 */
union cavm_arxex_cfg2_u3
{
    uint64_t u;
    struct cavm_arxex_cfg2_u3_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t wbf_addr_beam_11      : 16; /**< [ 63: 48](R/W) TBD */
        uint64_t wbf_addr_beam_10      : 16; /**< [ 47: 32](R/W) TBD */
        uint64_t wbf_addr_beam_9       : 16; /**< [ 31: 16](R/W) TBD */
        uint64_t wbf_addr_beam_8       : 16; /**< [ 15:  0](R/W) TBD */
#else /* Word 0 - Little Endian */
        uint64_t wbf_addr_beam_8       : 16; /**< [ 15:  0](R/W) TBD */
        uint64_t wbf_addr_beam_9       : 16; /**< [ 31: 16](R/W) TBD */
        uint64_t wbf_addr_beam_10      : 16; /**< [ 47: 32](R/W) TBD */
        uint64_t wbf_addr_beam_11      : 16; /**< [ 63: 48](R/W) TBD */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_arxex_cfg2_u3_s cn; */
};
typedef union cavm_arxex_cfg2_u3 cavm_arxex_cfg2_u3_t;

static inline uint64_t CAVM_ARXEX_CFG2_U3(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_ARXEX_CFG2_U3(uint64_t a)
{
    if (a<=3)
        return 0x87e041401010ll + 0x80000ll * ((a) & 0x3);
    __cavm_csr_fatal("ARXEX_CFG2_U3", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_ARXEX_CFG2_U3(a) cavm_arxex_cfg2_u3_t
#define bustype_CAVM_ARXEX_CFG2_U3(a) CSR_TYPE_RSL
#define basename_CAVM_ARXEX_CFG2_U3(a) "ARXEX_CFG2_U3"
#define busnum_CAVM_ARXEX_CFG2_U3(a) (a)
#define arguments_CAVM_ARXEX_CFG2_U3(a) (a),-1,-1,-1

/**
 * Register (RSL) arxe#_cfg2_u4
 *
 * Configuration 2 U4 Register
 */
union cavm_arxex_cfg2_u4
{
    uint64_t u;
    struct cavm_arxex_cfg2_u4_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t wbf_addr_beam_15      : 16; /**< [ 63: 48](R/W) TBD */
        uint64_t wbf_addr_beam_14      : 16; /**< [ 47: 32](R/W) TBD */
        uint64_t wbf_addr_beam_13      : 16; /**< [ 31: 16](R/W) TBD */
        uint64_t wbf_addr_beam_12      : 16; /**< [ 15:  0](R/W) TBD */
#else /* Word 0 - Little Endian */
        uint64_t wbf_addr_beam_12      : 16; /**< [ 15:  0](R/W) TBD */
        uint64_t wbf_addr_beam_13      : 16; /**< [ 31: 16](R/W) TBD */
        uint64_t wbf_addr_beam_14      : 16; /**< [ 47: 32](R/W) TBD */
        uint64_t wbf_addr_beam_15      : 16; /**< [ 63: 48](R/W) TBD */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_arxex_cfg2_u4_s cn; */
};
typedef union cavm_arxex_cfg2_u4 cavm_arxex_cfg2_u4_t;

static inline uint64_t CAVM_ARXEX_CFG2_U4(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_ARXEX_CFG2_U4(uint64_t a)
{
    if (a<=3)
        return 0x87e041401018ll + 0x80000ll * ((a) & 0x3);
    __cavm_csr_fatal("ARXEX_CFG2_U4", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_ARXEX_CFG2_U4(a) cavm_arxex_cfg2_u4_t
#define bustype_CAVM_ARXEX_CFG2_U4(a) CSR_TYPE_RSL
#define basename_CAVM_ARXEX_CFG2_U4(a) "ARXEX_CFG2_U4"
#define busnum_CAVM_ARXEX_CFG2_U4(a) (a)
#define arguments_CAVM_ARXEX_CFG2_U4(a) (a),-1,-1,-1

/**
 * Register (RSL) arxe#_eco
 *
 * INTERNAL: ARXE ECO Register
 */
union cavm_arxex_eco
{
    uint64_t u;
    struct cavm_arxex_eco_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_32_63        : 32;
        uint64_t eco_rw                : 32; /**< [ 31:  0](R/W) Internal:
                                                                 Reserved for ECO usage. */
#else /* Word 0 - Little Endian */
        uint64_t eco_rw                : 32; /**< [ 31:  0](R/W) Internal:
                                                                 Reserved for ECO usage. */
        uint64_t reserved_32_63        : 32;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_arxex_eco_s cn; */
};
typedef union cavm_arxex_eco cavm_arxex_eco_t;

static inline uint64_t CAVM_ARXEX_ECO(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_ARXEX_ECO(uint64_t a)
{
    if (a<=3)
        return 0x87e041400008ll + 0x80000ll * ((a) & 0x3);
    __cavm_csr_fatal("ARXEX_ECO", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_ARXEX_ECO(a) cavm_arxex_eco_t
#define bustype_CAVM_ARXEX_ECO(a) CSR_TYPE_RSL
#define basename_CAVM_ARXEX_ECO(a) "ARXEX_ECO"
#define busnum_CAVM_ARXEX_ECO(a) (a)
#define arguments_CAVM_ARXEX_ECO(a) (a),-1,-1,-1

/**
 * Register (RSL) arxe#_scratch
 *
 * INTERNAL: Scratch Register
 */
union cavm_arxex_scratch
{
    uint64_t u;
    struct cavm_arxex_scratch_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t data                  : 64; /**< [ 63:  0](R/W) Scratch data */
#else /* Word 0 - Little Endian */
        uint64_t data                  : 64; /**< [ 63:  0](R/W) Scratch data */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_arxex_scratch_s cn; */
};
typedef union cavm_arxex_scratch cavm_arxex_scratch_t;

static inline uint64_t CAVM_ARXEX_SCRATCH(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_ARXEX_SCRATCH(uint64_t a)
{
    if (a<=3)
        return 0x87e041400000ll + 0x80000ll * ((a) & 0x3);
    __cavm_csr_fatal("ARXEX_SCRATCH", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_ARXEX_SCRATCH(a) cavm_arxex_scratch_t
#define bustype_CAVM_ARXEX_SCRATCH(a) CSR_TYPE_RSL
#define basename_CAVM_ARXEX_SCRATCH(a) "ARXEX_SCRATCH"
#define busnum_CAVM_ARXEX_SCRATCH(a) (a)
#define arguments_CAVM_ARXEX_SCRATCH(a) (a),-1,-1,-1

#endif /* __CAVM_CSRS_ARXE_H__ */
