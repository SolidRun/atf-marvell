#ifndef __CAVM_CSRS_LSW_H__
#define __CAVM_CSRS_LSW_H__
/* This file is auto-generated. Do not edit */

/***********************license start***********************************
* Copyright (C) 2020 Marvell International Ltd.
* SPDX-License-Identifier: BSD-3-Clause
* https://spdx.org/licenses
***********************license end**************************************/


/**
 * @file
 *
 * Configuration and status register (CSR) address and type definitions for
 * OcteonTX LSW.
 *
 * This file is auto generated. Do not edit.
 *
 */

/**
 * Register (RSL) lsw_bp_test
 *
 * INTERNAL: LSW Backpressure Test Registers
 *
 * This register returns discovery information.
 */
union cavm_lsw_bp_test
{
    uint64_t u;
    struct cavm_lsw_bp_test_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_40_63        : 24;
        uint64_t enable                : 8;  /**< [ 39: 32](R/W) Scratch CSR. */
        uint64_t bp_cfg                : 16; /**< [ 31: 16](R/W) Scratch CSR. */
        uint64_t lfsr_freq             : 16; /**< [ 15:  0](R/W) Scratch CSR. */
#else /* Word 0 - Little Endian */
        uint64_t lfsr_freq             : 16; /**< [ 15:  0](R/W) Scratch CSR. */
        uint64_t bp_cfg                : 16; /**< [ 31: 16](R/W) Scratch CSR. */
        uint64_t enable                : 8;  /**< [ 39: 32](R/W) Scratch CSR. */
        uint64_t reserved_40_63        : 24;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_lsw_bp_test_s cn; */
};
typedef union cavm_lsw_bp_test cavm_lsw_bp_test_t;

#define CAVM_LSW_BP_TEST CAVM_LSW_BP_TEST_FUNC()
static inline uint64_t CAVM_LSW_BP_TEST_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_LSW_BP_TEST_FUNC(void)
{
    return 0x87e030080000ll;
}

#define typedef_CAVM_LSW_BP_TEST cavm_lsw_bp_test_t
#define bustype_CAVM_LSW_BP_TEST CSR_TYPE_RSL
#define basename_CAVM_LSW_BP_TEST "LSW_BP_TEST"
#define busnum_CAVM_LSW_BP_TEST 0
#define arguments_CAVM_LSW_BP_TEST -1,-1,-1,-1

/**
 * Register (RSL) lsw_eco
 *
 * INTERNAL: LSW ECO Register
 */
union cavm_lsw_eco
{
    uint64_t u;
    struct cavm_lsw_eco_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t eco_rw                : 64; /**< [ 63:  0](R/W) Reserved for ECO usage. */
#else /* Word 0 - Little Endian */
        uint64_t eco_rw                : 64; /**< [ 63:  0](R/W) Reserved for ECO usage. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_lsw_eco_s cn; */
};
typedef union cavm_lsw_eco cavm_lsw_eco_t;

#define CAVM_LSW_ECO CAVM_LSW_ECO_FUNC()
static inline uint64_t CAVM_LSW_ECO_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_LSW_ECO_FUNC(void)
{
    return 0x87e030080010ll;
}

#define typedef_CAVM_LSW_ECO cavm_lsw_eco_t
#define bustype_CAVM_LSW_ECO CSR_TYPE_RSL
#define basename_CAVM_LSW_ECO "LSW_ECO"
#define busnum_CAVM_LSW_ECO 0
#define arguments_CAVM_LSW_ECO -1,-1,-1,-1

/**
 * Register (RSL) lsw_scratch
 *
 * INTERNAL: LSW Backpressure Test Registers
 *
 * This register returns discovery information.
 */
union cavm_lsw_scratch
{
    uint64_t u;
    struct cavm_lsw_scratch_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t test                  : 64; /**< [ 63:  0](R/W) Scratch CSR. */
#else /* Word 0 - Little Endian */
        uint64_t test                  : 64; /**< [ 63:  0](R/W) Scratch CSR. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_lsw_scratch_s cn; */
};
typedef union cavm_lsw_scratch cavm_lsw_scratch_t;

#define CAVM_LSW_SCRATCH CAVM_LSW_SCRATCH_FUNC()
static inline uint64_t CAVM_LSW_SCRATCH_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_LSW_SCRATCH_FUNC(void)
{
    return 0x87e030080008ll;
}

#define typedef_CAVM_LSW_SCRATCH cavm_lsw_scratch_t
#define bustype_CAVM_LSW_SCRATCH CSR_TYPE_RSL
#define basename_CAVM_LSW_SCRATCH "LSW_SCRATCH"
#define busnum_CAVM_LSW_SCRATCH 0
#define arguments_CAVM_LSW_SCRATCH -1,-1,-1,-1

#endif /* __CAVM_CSRS_LSW_H__ */
