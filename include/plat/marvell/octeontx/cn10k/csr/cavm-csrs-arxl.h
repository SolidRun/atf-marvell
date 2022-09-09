#ifndef __CAVM_CSRS_ARXL_H__
#define __CAVM_CSRS_ARXL_H__
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
 * OcteonTX ARXL.
 *
 * This file is auto generated. Do not edit.
 *
 */

/**
 * Register (RSL) arxl#_bp_test#
 *
 * INTERNAL: Back Pressure Test Register
 *
 * Internal:
 * BP_TEST\<0\> = backpressure to rd512 ports
 * BP_TEST\<1\> = backpressure to rd256 and wr256 ports
 */
union cavm_arxlx_bp_testx
{
    uint64_t u;
    struct cavm_arxlx_bp_testx_s
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
    /* struct cavm_arxlx_bp_testx_s cn; */
};
typedef union cavm_arxlx_bp_testx cavm_arxlx_bp_testx_t;

static inline uint64_t CAVM_ARXLX_BP_TESTX(uint64_t a, uint64_t b) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_ARXLX_BP_TESTX(uint64_t a, uint64_t b)
{
    if ((a<=1) && (b<=1))
        return 0x87e042200080ll + 0x80000ll * ((a) & 0x1) + 8ll * ((b) & 0x1);
    __cavm_csr_fatal("ARXLX_BP_TESTX", 2, a, b, 0, 0, 0, 0);
}

#define typedef_CAVM_ARXLX_BP_TESTX(a,b) cavm_arxlx_bp_testx_t
#define bustype_CAVM_ARXLX_BP_TESTX(a,b) CSR_TYPE_RSL
#define basename_CAVM_ARXLX_BP_TESTX(a,b) "ARXLX_BP_TESTX"
#define busnum_CAVM_ARXLX_BP_TESTX(a,b) (a)
#define arguments_CAVM_ARXLX_BP_TESTX(a,b) (a),(b),-1,-1

/**
 * Register (RSL) arxl#_eco
 *
 * INTERNAL: ARXL ECO Register
 */
union cavm_arxlx_eco
{
    uint64_t u;
    struct cavm_arxlx_eco_s
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
    /* struct cavm_arxlx_eco_s cn; */
};
typedef union cavm_arxlx_eco cavm_arxlx_eco_t;

static inline uint64_t CAVM_ARXLX_ECO(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_ARXLX_ECO(uint64_t a)
{
    if (a<=1)
        return 0x87e042200008ll + 0x80000ll * ((a) & 0x1);
    __cavm_csr_fatal("ARXLX_ECO", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_ARXLX_ECO(a) cavm_arxlx_eco_t
#define bustype_CAVM_ARXLX_ECO(a) CSR_TYPE_RSL
#define basename_CAVM_ARXLX_ECO(a) "ARXLX_ECO"
#define busnum_CAVM_ARXLX_ECO(a) (a)
#define arguments_CAVM_ARXLX_ECO(a) (a),-1,-1,-1

/**
 * Register (RSL) arxl#_scratch
 *
 * INTERNAL: Scratch Register
 */
union cavm_arxlx_scratch
{
    uint64_t u;
    struct cavm_arxlx_scratch_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t data                  : 64; /**< [ 63:  0](R/W) Scratch data */
#else /* Word 0 - Little Endian */
        uint64_t data                  : 64; /**< [ 63:  0](R/W) Scratch data */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_arxlx_scratch_s cn; */
};
typedef union cavm_arxlx_scratch cavm_arxlx_scratch_t;

static inline uint64_t CAVM_ARXLX_SCRATCH(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_ARXLX_SCRATCH(uint64_t a)
{
    if (a<=1)
        return 0x87e042200000ll + 0x80000ll * ((a) & 0x1);
    __cavm_csr_fatal("ARXLX_SCRATCH", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_ARXLX_SCRATCH(a) cavm_arxlx_scratch_t
#define bustype_CAVM_ARXLX_SCRATCH(a) CSR_TYPE_RSL
#define basename_CAVM_ARXLX_SCRATCH(a) "ARXLX_SCRATCH"
#define busnum_CAVM_ARXLX_SCRATCH(a) (a)
#define arguments_CAVM_ARXLX_SCRATCH(a) (a),-1,-1,-1

/**
 * Register (RSL) arxl#_u0
 *
 * Configuration U0 Register
 */
union cavm_arxlx_u0
{
    uint64_t u;
    struct cavm_arxlx_u0_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_45_63        : 19;
        uint64_t pmem_mat_offset       : 6;  /**< [ 44: 39](R/W) TBD */
        uint64_t pmem_base_addr        : 17; /**< [ 38: 22](R/W) TBD */
        uint64_t num_iter              : 3;  /**< [ 21: 19](R/W) TBD */
        uint64_t num_eig               : 4;  /**< [ 18: 15](R/W) TBD */
        uint64_t num_beam              : 5;  /**< [ 14: 10](R/W) TBD */
        uint64_t num_matrix            : 10; /**< [  9:  0](R/W) TBD */
#else /* Word 0 - Little Endian */
        uint64_t num_matrix            : 10; /**< [  9:  0](R/W) TBD */
        uint64_t num_beam              : 5;  /**< [ 14: 10](R/W) TBD */
        uint64_t num_eig               : 4;  /**< [ 18: 15](R/W) TBD */
        uint64_t num_iter              : 3;  /**< [ 21: 19](R/W) TBD */
        uint64_t pmem_base_addr        : 17; /**< [ 38: 22](R/W) TBD */
        uint64_t pmem_mat_offset       : 6;  /**< [ 44: 39](R/W) TBD */
        uint64_t reserved_45_63        : 19;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_arxlx_u0_s cn; */
};
typedef union cavm_arxlx_u0 cavm_arxlx_u0_t;

static inline uint64_t CAVM_ARXLX_U0(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_ARXLX_U0(uint64_t a)
{
    if (a<=1)
        return 0x87e042200100ll + 0x80000ll * ((a) & 0x1);
    __cavm_csr_fatal("ARXLX_U0", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_ARXLX_U0(a) cavm_arxlx_u0_t
#define bustype_CAVM_ARXLX_U0(a) CSR_TYPE_RSL
#define basename_CAVM_ARXLX_U0(a) "ARXLX_U0"
#define busnum_CAVM_ARXLX_U0(a) (a)
#define arguments_CAVM_ARXLX_U0(a) (a),-1,-1,-1

/**
 * Register (RSL) arxl#_u1
 *
 * Configuration U1 Register
 */
union cavm_arxlx_u1
{
    uint64_t u;
    struct cavm_arxlx_u1_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t input_dat_exp         : 8;  /**< [ 63: 56](R/W) TBD */
        uint64_t rinv_ec               : 8;  /**< [ 55: 48](R/W) TBD */
        uint64_t gamma                 : 16; /**< [ 47: 32](R/W) TBD */
        uint64_t noise_nl              : 16; /**< [ 31: 16](R/W) TBD */
        uint64_t beta                  : 16; /**< [ 15:  0](R/W) TBD */
#else /* Word 0 - Little Endian */
        uint64_t beta                  : 16; /**< [ 15:  0](R/W) TBD */
        uint64_t noise_nl              : 16; /**< [ 31: 16](R/W) TBD */
        uint64_t gamma                 : 16; /**< [ 47: 32](R/W) TBD */
        uint64_t rinv_ec               : 8;  /**< [ 55: 48](R/W) TBD */
        uint64_t input_dat_exp         : 8;  /**< [ 63: 56](R/W) TBD */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_arxlx_u1_s cn; */
};
typedef union cavm_arxlx_u1 cavm_arxlx_u1_t;

static inline uint64_t CAVM_ARXLX_U1(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_ARXLX_U1(uint64_t a)
{
    if (a<=1)
        return 0x87e042200108ll + 0x80000ll * ((a) & 0x1);
    __cavm_csr_fatal("ARXLX_U1", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_ARXLX_U1(a) cavm_arxlx_u1_t
#define bustype_CAVM_ARXLX_U1(a) CSR_TYPE_RSL
#define basename_CAVM_ARXLX_U1(a) "ARXLX_U1"
#define busnum_CAVM_ARXLX_U1(a) (a)
#define arguments_CAVM_ARXLX_U1(a) (a),-1,-1,-1

/**
 * Register (RSL) arxl#_u2
 *
 * Configuration U2 Register
 */
union cavm_arxlx_u2
{
    uint64_t u;
    struct cavm_arxlx_u2_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_48_63        : 16;
        uint64_t delta_exp             : 8;  /**< [ 47: 40](R/W) TBD */
        uint64_t gamma_exp             : 8;  /**< [ 39: 32](R/W) TBD */
        uint64_t noise_nl_exp          : 8;  /**< [ 31: 24](R/W) TBD */
        uint64_t beta_exp              : 8;  /**< [ 23: 16](R/W) TBD */
        uint64_t delta                 : 16; /**< [ 15:  0](R/W) TBD */
#else /* Word 0 - Little Endian */
        uint64_t delta                 : 16; /**< [ 15:  0](R/W) TBD */
        uint64_t beta_exp              : 8;  /**< [ 23: 16](R/W) TBD */
        uint64_t noise_nl_exp          : 8;  /**< [ 31: 24](R/W) TBD */
        uint64_t gamma_exp             : 8;  /**< [ 39: 32](R/W) TBD */
        uint64_t delta_exp             : 8;  /**< [ 47: 40](R/W) TBD */
        uint64_t reserved_48_63        : 16;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_arxlx_u2_s cn; */
};
typedef union cavm_arxlx_u2 cavm_arxlx_u2_t;

static inline uint64_t CAVM_ARXLX_U2(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_ARXLX_U2(uint64_t a)
{
    if (a<=1)
        return 0x87e042200110ll + 0x80000ll * ((a) & 0x1);
    __cavm_csr_fatal("ARXLX_U2", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_ARXLX_U2(a) cavm_arxlx_u2_t
#define bustype_CAVM_ARXLX_U2(a) CSR_TYPE_RSL
#define basename_CAVM_ARXLX_U2(a) "ARXLX_U2"
#define busnum_CAVM_ARXLX_U2(a) (a)
#define arguments_CAVM_ARXLX_U2(a) (a),-1,-1,-1

#endif /* __CAVM_CSRS_ARXL_H__ */
