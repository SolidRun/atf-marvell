#ifndef __CAVM_CSRS_RNM_H__
#define __CAVM_CSRS_RNM_H__
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
 * OcteonTX RNM.
 *
 * This file is auto generated. Do not edit.
 *
 */

/**
 * Enumeration rnm_bar_e
 *
 * RNM Base Address Register Enumeration
 * Enumerates the base address registers.
 */
#define CAVM_RNM_BAR_E_RNM_PF_BAR0 (0x87e00f000000ll)
#define CAVM_RNM_BAR_E_RNM_PF_BAR0_SIZE 0x100000ull
#define CAVM_RNM_BAR_E_RNM_VF_BAR0 (0x80f000800000ll)
#define CAVM_RNM_BAR_E_RNM_VF_BAR0_SIZE 0x100000ull

/**
 * Register (RSL) rnm_bp_test
 *
 * INTERNAL: RNM Backpressure Test Register
 */
union cavm_rnm_bp_test
{
    uint64_t u;
    struct cavm_rnm_bp_test_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t enable                : 3;  /**< [ 63: 61](R/W) Enable test mode. For diagnostic use only.
                                                                 Internal:
                                                                 Once a bit is set, random backpressure is generated
                                                                 at the corresponding point to allow for more frequent backpressure.
                                                                 \<63\> = Normal random number memory writes.
                                                                 \<62\> = No-zeros random number memory writes.
                                                                 \<61\> = No-zeros random number memory reads. */
        uint64_t reserved_24_60        : 37;
        uint64_t bp_cfg                : 6;  /**< [ 23: 18](R/W) Backpressure weight. For diagnostic use only.
                                                                 Internal:
                                                                 There are 2 backpressure configuration bits per enable, with the two bits
                                                                 defined as 0x0=100% of the time, 0x1=75% of the time, 0x2=50% of the time,
                                                                 0x3=25% of the time.
                                                                   \<23:22\> = Normal random number memory writes.
                                                                   \<21:20\> = No-zeros random number memory writes.
                                                                   \<19:18\> = No-zeros random number memory reads. */
        uint64_t reserved_12_17        : 6;
        uint64_t lfsr_freq             : 12; /**< [ 11:  0](R/W) Test LFSR update frequency in coprocessor-clocks minus one. */
#else /* Word 0 - Little Endian */
        uint64_t lfsr_freq             : 12; /**< [ 11:  0](R/W) Test LFSR update frequency in coprocessor-clocks minus one. */
        uint64_t reserved_12_17        : 6;
        uint64_t bp_cfg                : 6;  /**< [ 23: 18](R/W) Backpressure weight. For diagnostic use only.
                                                                 Internal:
                                                                 There are 2 backpressure configuration bits per enable, with the two bits
                                                                 defined as 0x0=100% of the time, 0x1=75% of the time, 0x2=50% of the time,
                                                                 0x3=25% of the time.
                                                                   \<23:22\> = Normal random number memory writes.
                                                                   \<21:20\> = No-zeros random number memory writes.
                                                                   \<19:18\> = No-zeros random number memory reads. */
        uint64_t reserved_24_60        : 37;
        uint64_t enable                : 3;  /**< [ 63: 61](R/W) Enable test mode. For diagnostic use only.
                                                                 Internal:
                                                                 Once a bit is set, random backpressure is generated
                                                                 at the corresponding point to allow for more frequent backpressure.
                                                                 \<63\> = Normal random number memory writes.
                                                                 \<62\> = No-zeros random number memory writes.
                                                                 \<61\> = No-zeros random number memory reads. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_rnm_bp_test_s cn; */
};
typedef union cavm_rnm_bp_test cavm_rnm_bp_test_t;

#define CAVM_RNM_BP_TEST CAVM_RNM_BP_TEST_FUNC()
static inline uint64_t CAVM_RNM_BP_TEST_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_RNM_BP_TEST_FUNC(void)
{
    return 0x87e00f000028ll;
}

#define typedef_CAVM_RNM_BP_TEST cavm_rnm_bp_test_t
#define bustype_CAVM_RNM_BP_TEST CSR_TYPE_RSL
#define basename_CAVM_RNM_BP_TEST "RNM_BP_TEST"
#define device_bar_CAVM_RNM_BP_TEST 0x0 /* PF_BAR0 */
#define busnum_CAVM_RNM_BP_TEST 0
#define arguments_CAVM_RNM_BP_TEST -1,-1,-1,-1

/**
 * Register (RSL) rnm_const
 *
 * RNM PF Constants Register
 * This register is used for software discovery.
 */
union cavm_rnm_const
{
    uint64_t u;
    struct cavm_rnm_const_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_6_63         : 58;
        uint64_t drbgs                 : 2;  /**< [  5:  4](RO/H) Number of DRBG engines minus one, and corresponding RNM_DRBG()_ENT_FORCE() registers. */
        uint64_t zucs                  : 4;  /**< [  3:  0](RAZ) Ignored, deprecated feature. */
#else /* Word 0 - Little Endian */
        uint64_t zucs                  : 4;  /**< [  3:  0](RAZ) Ignored, deprecated feature. */
        uint64_t drbgs                 : 2;  /**< [  5:  4](RO/H) Number of DRBG engines minus one, and corresponding RNM_DRBG()_ENT_FORCE() registers. */
        uint64_t reserved_6_63         : 58;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_rnm_const_s cn; */
};
typedef union cavm_rnm_const cavm_rnm_const_t;

#define CAVM_RNM_CONST CAVM_RNM_CONST_FUNC()
static inline uint64_t CAVM_RNM_CONST_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_RNM_CONST_FUNC(void)
{
    return 0x87e00f000030ll;
}

#define typedef_CAVM_RNM_CONST cavm_rnm_const_t
#define bustype_CAVM_RNM_CONST CSR_TYPE_RSL
#define basename_CAVM_RNM_CONST "RNM_CONST"
#define device_bar_CAVM_RNM_CONST 0x0 /* PF_BAR0 */
#define busnum_CAVM_RNM_CONST 0
#define arguments_CAVM_RNM_CONST -1,-1,-1,-1

/**
 * Register (RSL) rnm_ctl_status
 *
 * RNM Control and Status Register
 * This register is the RNM control register.
 * This register is secure only to prevent the nonsecure world from affecting
 * secure-world clients using true random numbers.
 */
union cavm_rnm_ctl_status
{
    uint64_t u;
    struct cavm_rnm_ctl_status_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_30_63        : 34;
        uint64_t drbg_ent_disable      : 2;  /**< [ 29: 28](SR/W/H) Before setting write 128 bits to RNM_DRBG(0..1)_ENT_FORCE(0..1), once set entropy bus will
                                                                 be forced to specified value. Set corresponding bit of RNM_CTL_STATUS[DRBG_EN]
                                                                 to 0 to disable the engine
                                                                 before writing. */
        uint64_t drbg_en               : 2;  /**< [ 27: 26](SR/W/H) Set this bit to put the DRBG into reset. Must be set before RNM_CTL_STATUS[DRBG_ENT_DISABLE].
                                                                 Lower bit for DRBG0, upper for DRBG1. */
        uint64_t ebg_poll_delay        : 10; /**< [ 25: 16](SR/W/H) Number of cycles for hardware to wait before polling the EBG APB bus for new entropy. */
        uint64_t ebg_ctl_lock          : 1;  /**< [ 15: 15](SR/W1S/H) Set this bit to lock write access to RNM_EBG_CTL.
                                                                 Locked until system is reset (0 writes ignored). */
        uint64_t lower_bandwidth_higher_entropy : 1;/**< [ 14: 14](RAZ) Ignored, deprecated feature. */
        uint64_t xor_entropy_25x       : 1;  /**< [ 13: 13](RAZ) Ignored, deprecated feature. */
        uint64_t force_clk             : 1;  /**< [ 12: 12](SR/W) When set, conditional clock is always on. For diagnostic use only. */
        uint64_t zuc_en                : 1;  /**< [ 11: 11](RAZ) Ignored, deprecated feature. */
        uint64_t eer_lck               : 1;  /**< [ 10: 10](SRO/H) Encryption enable register locked. */
        uint64_t eer_val               : 1;  /**< [  9:  9](SRO/H) Dormant encryption key match. */
        uint64_t ent_sel               : 4;  /**< [  8:  5](RAZ) Ignored, deprecated feature. */
        uint64_t exp_ent               : 1;  /**< [  4:  4](RAZ) Ignored, deprecated feature. */
        uint64_t rng_rst               : 1;  /**< [  3:  3](RAZ) Ignored, deprecated feature. */
        uint64_t rnm_rst               : 1;  /**< [  2:  2](RAZ) Reserved. Writes are ignored for backward compatibility. */
        uint64_t rng_en                : 1;  /**< [  1:  1](RAZ) Ignored, deprecated feature. */
        uint64_t ent_en                : 1;  /**< [  0:  0](SR/W) Ignored, deprecated feature.
                                                                 Internal:
                                                                 Entropy is always enabled regardless of this bit. */
#else /* Word 0 - Little Endian */
        uint64_t ent_en                : 1;  /**< [  0:  0](SR/W) Ignored, deprecated feature.
                                                                 Internal:
                                                                 Entropy is always enabled regardless of this bit. */
        uint64_t rng_en                : 1;  /**< [  1:  1](RAZ) Ignored, deprecated feature. */
        uint64_t rnm_rst               : 1;  /**< [  2:  2](RAZ) Reserved. Writes are ignored for backward compatibility. */
        uint64_t rng_rst               : 1;  /**< [  3:  3](RAZ) Ignored, deprecated feature. */
        uint64_t exp_ent               : 1;  /**< [  4:  4](RAZ) Ignored, deprecated feature. */
        uint64_t ent_sel               : 4;  /**< [  8:  5](RAZ) Ignored, deprecated feature. */
        uint64_t eer_val               : 1;  /**< [  9:  9](SRO/H) Dormant encryption key match. */
        uint64_t eer_lck               : 1;  /**< [ 10: 10](SRO/H) Encryption enable register locked. */
        uint64_t zuc_en                : 1;  /**< [ 11: 11](RAZ) Ignored, deprecated feature. */
        uint64_t force_clk             : 1;  /**< [ 12: 12](SR/W) When set, conditional clock is always on. For diagnostic use only. */
        uint64_t xor_entropy_25x       : 1;  /**< [ 13: 13](RAZ) Ignored, deprecated feature. */
        uint64_t lower_bandwidth_higher_entropy : 1;/**< [ 14: 14](RAZ) Ignored, deprecated feature. */
        uint64_t ebg_ctl_lock          : 1;  /**< [ 15: 15](SR/W1S/H) Set this bit to lock write access to RNM_EBG_CTL.
                                                                 Locked until system is reset (0 writes ignored). */
        uint64_t ebg_poll_delay        : 10; /**< [ 25: 16](SR/W/H) Number of cycles for hardware to wait before polling the EBG APB bus for new entropy. */
        uint64_t drbg_en               : 2;  /**< [ 27: 26](SR/W/H) Set this bit to put the DRBG into reset. Must be set before RNM_CTL_STATUS[DRBG_ENT_DISABLE].
                                                                 Lower bit for DRBG0, upper for DRBG1. */
        uint64_t drbg_ent_disable      : 2;  /**< [ 29: 28](SR/W/H) Before setting write 128 bits to RNM_DRBG(0..1)_ENT_FORCE(0..1), once set entropy bus will
                                                                 be forced to specified value. Set corresponding bit of RNM_CTL_STATUS[DRBG_EN]
                                                                 to 0 to disable the engine
                                                                 before writing. */
        uint64_t reserved_30_63        : 34;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_rnm_ctl_status_s cn; */
};
typedef union cavm_rnm_ctl_status cavm_rnm_ctl_status_t;

#define CAVM_RNM_CTL_STATUS CAVM_RNM_CTL_STATUS_FUNC()
static inline uint64_t CAVM_RNM_CTL_STATUS_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_RNM_CTL_STATUS_FUNC(void)
{
    return 0x87e00f000000ll;
}

#define typedef_CAVM_RNM_CTL_STATUS cavm_rnm_ctl_status_t
#define bustype_CAVM_RNM_CTL_STATUS CSR_TYPE_RSL
#define basename_CAVM_RNM_CTL_STATUS "RNM_CTL_STATUS"
#define device_bar_CAVM_RNM_CTL_STATUS 0x0 /* PF_BAR0 */
#define busnum_CAVM_RNM_CTL_STATUS 0
#define arguments_CAVM_RNM_CTL_STATUS -1,-1,-1,-1

/**
 * Register (RSL) rnm_drbg#_ent_force#
 *
 * RNM DRBG Entropy Force Register
 * Write this register to force the Entropy source of the DRBG to a constant value
 * for debugging purposes.
 *
 * Before writing to this register, RNM_CTL_STATUS[DRBG_DISABLE] must be zero to turn off the
 * DRBG engine.
 *
 * To use this register in place of the entropy source write 1 to RNM_CTL_STATUS[DRBG_ENT_DISABLE].
 */
union cavm_rnm_drbgx_ent_forcex
{
    uint64_t u;
    struct cavm_rnm_drbgx_ent_forcex_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t bits                  : 64; /**< [ 63:  0](SWO) 64 upper/lower bits of the value to force onto the DRBG entropy bus. */
#else /* Word 0 - Little Endian */
        uint64_t bits                  : 64; /**< [ 63:  0](SWO) 64 upper/lower bits of the value to force onto the DRBG entropy bus. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_rnm_drbgx_ent_forcex_s cn; */
};
typedef union cavm_rnm_drbgx_ent_forcex cavm_rnm_drbgx_ent_forcex_t;

static inline uint64_t CAVM_RNM_DRBGX_ENT_FORCEX(uint64_t a, uint64_t b) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_RNM_DRBGX_ENT_FORCEX(uint64_t a, uint64_t b)
{
    if ((a<=1) && (b<=3))
        return 0x87e00f000300ll + 0x400ll * ((a) & 0x1) + 8ll * ((b) & 0x3);
    __cavm_csr_fatal("RNM_DRBGX_ENT_FORCEX", 2, a, b, 0, 0, 0, 0);
}

#define typedef_CAVM_RNM_DRBGX_ENT_FORCEX(a,b) cavm_rnm_drbgx_ent_forcex_t
#define bustype_CAVM_RNM_DRBGX_ENT_FORCEX(a,b) CSR_TYPE_RSL
#define basename_CAVM_RNM_DRBGX_ENT_FORCEX(a,b) "RNM_DRBGX_ENT_FORCEX"
#define device_bar_CAVM_RNM_DRBGX_ENT_FORCEX(a,b) 0x0 /* PF_BAR0 */
#define busnum_CAVM_RNM_DRBGX_ENT_FORCEX(a,b) (a)
#define arguments_CAVM_RNM_DRBGX_ENT_FORCEX(a,b) (a),(b),-1,-1

/**
 * Register (NCB) rnm_drbg_reseed
 *
 * RNM DRBG Reseed Register
 */
union cavm_rnm_drbg_reseed
{
    uint64_t u;
    struct cavm_rnm_drbg_reseed_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_1_63         : 63;
        uint64_t dat                   : 1;  /**< [  0:  0](WO/H) Set to immediately reseed the DRBG. Bit is automatically cleared when reseed completes.
                                                                 All DRBG related CSR operations will be blocked until reseed completes. */
#else /* Word 0 - Little Endian */
        uint64_t dat                   : 1;  /**< [  0:  0](WO/H) Set to immediately reseed the DRBG. Bit is automatically cleared when reseed completes.
                                                                 All DRBG related CSR operations will be blocked until reseed completes. */
        uint64_t reserved_1_63         : 63;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_rnm_drbg_reseed_s cn; */
};
typedef union cavm_rnm_drbg_reseed cavm_rnm_drbg_reseed_t;

#define CAVM_RNM_DRBG_RESEED CAVM_RNM_DRBG_RESEED_FUNC()
static inline uint64_t CAVM_RNM_DRBG_RESEED_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_RNM_DRBG_RESEED_FUNC(void)
{
    return 0x80f000800018ll;
}

#define typedef_CAVM_RNM_DRBG_RESEED cavm_rnm_drbg_reseed_t
#define bustype_CAVM_RNM_DRBG_RESEED CSR_TYPE_NCB
#define basename_CAVM_RNM_DRBG_RESEED "RNM_DRBG_RESEED"
#define device_bar_CAVM_RNM_DRBG_RESEED 0x0 /* VF_BAR0 */
#define busnum_CAVM_RNM_DRBG_RESEED 0
#define arguments_CAVM_RNM_DRBG_RESEED -1,-1,-1,-1

/**
 * Register (NCB) rnm_drbg_rndr
 *
 * RNM DRBG Random Register
 */
union cavm_rnm_drbg_rndr
{
    uint64_t u;
    struct cavm_rnm_drbg_rndr_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t dat                   : 64; /**< [ 63:  0](RO/H) Returns a 64-bit NIST-90A Compliant CTR_DRBG Deterministic Random Number
                                                                 For immediate reseed see RNM_DRBG_RNDRRS. */
#else /* Word 0 - Little Endian */
        uint64_t dat                   : 64; /**< [ 63:  0](RO/H) Returns a 64-bit NIST-90A Compliant CTR_DRBG Deterministic Random Number
                                                                 For immediate reseed see RNM_DRBG_RNDRRS. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_rnm_drbg_rndr_s cn; */
};
typedef union cavm_rnm_drbg_rndr cavm_rnm_drbg_rndr_t;

#define CAVM_RNM_DRBG_RNDR CAVM_RNM_DRBG_RNDR_FUNC()
static inline uint64_t CAVM_RNM_DRBG_RNDR_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_RNM_DRBG_RNDR_FUNC(void)
{
    return 0x80f000800008ll;
}

#define typedef_CAVM_RNM_DRBG_RNDR cavm_rnm_drbg_rndr_t
#define bustype_CAVM_RNM_DRBG_RNDR CSR_TYPE_NCB
#define basename_CAVM_RNM_DRBG_RNDR "RNM_DRBG_RNDR"
#define device_bar_CAVM_RNM_DRBG_RNDR 0x0 /* VF_BAR0 */
#define busnum_CAVM_RNM_DRBG_RNDR 0
#define arguments_CAVM_RNM_DRBG_RNDR -1,-1,-1,-1

/**
 * Register (NCB) rnm_drbg_rndrrs
 *
 * RNM DRBG Reseeded Random Register
 */
union cavm_rnm_drbg_rndrrs
{
    uint64_t u;
    struct cavm_rnm_drbg_rndrrs_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t dat                   : 64; /**< [ 63:  0](RO/H) Returns a 64-bit NIST-90A Compliant CTR_DRBG deterministic random number.
                                                                 DRBG is reseeded immediately on read, blocks until complete and new bits available.
                                                                 All DRBG related CSR operations will be blocked until reseed completes. */
#else /* Word 0 - Little Endian */
        uint64_t dat                   : 64; /**< [ 63:  0](RO/H) Returns a 64-bit NIST-90A Compliant CTR_DRBG deterministic random number.
                                                                 DRBG is reseeded immediately on read, blocks until complete and new bits available.
                                                                 All DRBG related CSR operations will be blocked until reseed completes. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_rnm_drbg_rndrrs_s cn; */
};
typedef union cavm_rnm_drbg_rndrrs cavm_rnm_drbg_rndrrs_t;

#define CAVM_RNM_DRBG_RNDRRS CAVM_RNM_DRBG_RNDRRS_FUNC()
static inline uint64_t CAVM_RNM_DRBG_RNDRRS_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_RNM_DRBG_RNDRRS_FUNC(void)
{
    return 0x80f000800010ll;
}

#define typedef_CAVM_RNM_DRBG_RNDRRS cavm_rnm_drbg_rndrrs_t
#define bustype_CAVM_RNM_DRBG_RNDRRS CSR_TYPE_NCB
#define basename_CAVM_RNM_DRBG_RNDRRS "RNM_DRBG_RNDRRS"
#define device_bar_CAVM_RNM_DRBG_RNDRRS 0x0 /* VF_BAR0 */
#define busnum_CAVM_RNM_DRBG_RNDRRS 0
#define arguments_CAVM_RNM_DRBG_RNDRRS -1,-1,-1,-1

/**
 * Register (RSL) rnm_ebg_ctl
 *
 * RNM EBG Control Register
 * This register is used to control the EBG (Entropy Bit Generator), which
 * serves as the true random entropy source for RNM.
 */
union cavm_rnm_ebg_ctl
{
    uint64_t u;
    struct cavm_rnm_ebg_ctl_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_32_63        : 32;
        uint64_t ds_ratio              : 8;  /**< [ 31: 24](SR/W/H) Down sampling ratio in hex in the EBG downsampling circuit, which further
                                                                 downsamples the RNG slow (Noisy) oscillator output. This downsampling is
                                                                 done outside of the RNG macro.
                                                                 Must only be changed when [RNG_RSTN] and [ENTROPY_REQ] are zero.
                                                                 0x0 = or 1: no downsampling.
                                                                 0x2 = downsample by 2.
                                                                 0x3 = downsample by 3.
                                                                 0xFF = downsample by 255. */
        uint64_t rng_slow_div_val      : 8;  /**< [ 23: 16](SR/W/H) This register is directly connected to analog (analog random number
                                                                 generator) input DIV_VAL[8:0]
                                                                 Decimate value of noisy oscillator (slow OSC) before sampling the fast
                                                                 OSC. Dividing ratio is 2X of the value in this field. Minimum Value is 2.
                                                                 Recommend to leave it as default 0x21 to have sufficient noise (at least
                                                                 0x1E).

                                                                 Examples
                                                                 0x2  - BRN_CK_FREQ = NOISE_CK_FREQ/4.
                                                                 0x3  - BRN_CK_FREQ = NOISE_CK_FREQ/6.
                                                                 0x10 - BRN_CK_FREQ = NOISE_CK_FREQ/32. */
        uint64_t entropy_mode          : 1;  /**< [ 15: 15](SR/W/H) Entropy mode. Must only be changed when RNG_RSTN and ENTROPY_REQ field are 0.
                                                                 0x0 = Internal entropy mode.
                                                                 0x1 = External entropy mode. */
        uint64_t entropy_sel           : 2;  /**< [ 14: 13](SR/W/H) Entropy source select.
                                                                 Must only be changed when RNG_RSTN and ENTROPY_REQ field are 0.

                                                                 External mode:
                                                                 0x0 = Analog data latched by analog clock.
                                                                 0x1 = Analog clock ^ analog data latched by APB clock.
                                                                 0x2 = Analog clock latched by APB clock.
                                                                 0x3 = Analog data latched by APB clock.

                                                                 Internal mode:
                                                                 0x0 = RNG data latched by RNG clock.
                                                                 0x1 = RNG data latched by APB clock.
                                                                 0x2 = RNG clock latched by APB clock.
                                                                 0x3 = Reserved. */
        uint64_t entropy_req           : 1;  /**< [ 12: 12](SR/W/H) 0 = Stop.
                                                                 1 = Request new entropy bits into shift register/FIFO. */
        uint64_t rng_clk_sel           : 1;  /**< [ 11: 11](SR/W/H) Selects the source of the clean clock inside the ring oscillator block. The
                                                                 clean clock is to be sampled by the noisy oscillator output.
                                                                 0 = Clean clock is the Fast (free running) oscillator inside analog.
                                                                 1 = Clean clock is the CPU register clock. */
        uint64_t rng_rstn              : 1;  /**< [ 10: 10](SR/W/H) RNG analog reset.
                                                                 Active low reset to the digital RNG structure.
                                                                 0x0 = Reset.
                                                                 0x1 = Normal. */
        uint64_t rng_pu_bias           : 1;  /**< [  9:  9](SR/W/H) Enable signal of the analog bias circuit.
                                                                 0x1 = Provide Power for slow oscillator and its bias circuit
                                                                 0x0 = disable. */
        uint64_t rng_fast_osc_ena      : 1;  /**< [  8:  8](SR/W/H) This register is directly connected to analog (analog random number
                                                                 generator) input FAST_OSC_ENA.
                                                                 Enable signal of the fast oscillator in the digital RNG structure. It is the
                                                                 clean oscillator
                                                                 0x1 = RNG Fast (Free Running) OSC Enable
                                                                 0x0 = Disable. */
        uint64_t rng_slow_osc_ena      : 1;  /**< [  7:  7](SR/W/H) This register is directly connected to analog (analog random number
                                                                 generator) input SLOW_OSC_ENA.
                                                                 Enable signal of the slow oscillator in the digital RNG structure. It is the
                                                                 noisy oscillator
                                                                 0x1 = RNG Slow OSC Enable
                                                                 0x0 = Disable. */
        uint64_t pp_ena                : 1;  /**< [  6:  6](SR/W/H) Enable signal of the post processor.
                                                                 Disabling the post processor will allow raw entropy to be extracted from the
                                                                 ana_rng macro. Note that it is still subject to downsamping, depending
                                                                 upon the value programmed into the DS_RATIO [31:24] bits.
                                                                 0x1 = Post Processor enable
                                                                 0x0 = Disable
                                                                 Should only be changed when RNG_RSTN and ENTROPY_REQ field are 0. */
        uint64_t rng_pu_bias2          : 1;  /**< [  5:  5](SR/W/H) This register is directly connected to analog (analog random number
                                                                 generator) input PU_BIAS2.
                                                                 Enable signal of the analog bias circuit.
                                                                 0 = Disable.
                                                                 1 = Provide power for slow oscillator and its bias circuit. */
        uint64_t reserved_0_4          : 5;
#else /* Word 0 - Little Endian */
        uint64_t reserved_0_4          : 5;
        uint64_t rng_pu_bias2          : 1;  /**< [  5:  5](SR/W/H) This register is directly connected to analog (analog random number
                                                                 generator) input PU_BIAS2.
                                                                 Enable signal of the analog bias circuit.
                                                                 0 = Disable.
                                                                 1 = Provide power for slow oscillator and its bias circuit. */
        uint64_t pp_ena                : 1;  /**< [  6:  6](SR/W/H) Enable signal of the post processor.
                                                                 Disabling the post processor will allow raw entropy to be extracted from the
                                                                 ana_rng macro. Note that it is still subject to downsamping, depending
                                                                 upon the value programmed into the DS_RATIO [31:24] bits.
                                                                 0x1 = Post Processor enable
                                                                 0x0 = Disable
                                                                 Should only be changed when RNG_RSTN and ENTROPY_REQ field are 0. */
        uint64_t rng_slow_osc_ena      : 1;  /**< [  7:  7](SR/W/H) This register is directly connected to analog (analog random number
                                                                 generator) input SLOW_OSC_ENA.
                                                                 Enable signal of the slow oscillator in the digital RNG structure. It is the
                                                                 noisy oscillator
                                                                 0x1 = RNG Slow OSC Enable
                                                                 0x0 = Disable. */
        uint64_t rng_fast_osc_ena      : 1;  /**< [  8:  8](SR/W/H) This register is directly connected to analog (analog random number
                                                                 generator) input FAST_OSC_ENA.
                                                                 Enable signal of the fast oscillator in the digital RNG structure. It is the
                                                                 clean oscillator
                                                                 0x1 = RNG Fast (Free Running) OSC Enable
                                                                 0x0 = Disable. */
        uint64_t rng_pu_bias           : 1;  /**< [  9:  9](SR/W/H) Enable signal of the analog bias circuit.
                                                                 0x1 = Provide Power for slow oscillator and its bias circuit
                                                                 0x0 = disable. */
        uint64_t rng_rstn              : 1;  /**< [ 10: 10](SR/W/H) RNG analog reset.
                                                                 Active low reset to the digital RNG structure.
                                                                 0x0 = Reset.
                                                                 0x1 = Normal. */
        uint64_t rng_clk_sel           : 1;  /**< [ 11: 11](SR/W/H) Selects the source of the clean clock inside the ring oscillator block. The
                                                                 clean clock is to be sampled by the noisy oscillator output.
                                                                 0 = Clean clock is the Fast (free running) oscillator inside analog.
                                                                 1 = Clean clock is the CPU register clock. */
        uint64_t entropy_req           : 1;  /**< [ 12: 12](SR/W/H) 0 = Stop.
                                                                 1 = Request new entropy bits into shift register/FIFO. */
        uint64_t entropy_sel           : 2;  /**< [ 14: 13](SR/W/H) Entropy source select.
                                                                 Must only be changed when RNG_RSTN and ENTROPY_REQ field are 0.

                                                                 External mode:
                                                                 0x0 = Analog data latched by analog clock.
                                                                 0x1 = Analog clock ^ analog data latched by APB clock.
                                                                 0x2 = Analog clock latched by APB clock.
                                                                 0x3 = Analog data latched by APB clock.

                                                                 Internal mode:
                                                                 0x0 = RNG data latched by RNG clock.
                                                                 0x1 = RNG data latched by APB clock.
                                                                 0x2 = RNG clock latched by APB clock.
                                                                 0x3 = Reserved. */
        uint64_t entropy_mode          : 1;  /**< [ 15: 15](SR/W/H) Entropy mode. Must only be changed when RNG_RSTN and ENTROPY_REQ field are 0.
                                                                 0x0 = Internal entropy mode.
                                                                 0x1 = External entropy mode. */
        uint64_t rng_slow_div_val      : 8;  /**< [ 23: 16](SR/W/H) This register is directly connected to analog (analog random number
                                                                 generator) input DIV_VAL[8:0]
                                                                 Decimate value of noisy oscillator (slow OSC) before sampling the fast
                                                                 OSC. Dividing ratio is 2X of the value in this field. Minimum Value is 2.
                                                                 Recommend to leave it as default 0x21 to have sufficient noise (at least
                                                                 0x1E).

                                                                 Examples
                                                                 0x2  - BRN_CK_FREQ = NOISE_CK_FREQ/4.
                                                                 0x3  - BRN_CK_FREQ = NOISE_CK_FREQ/6.
                                                                 0x10 - BRN_CK_FREQ = NOISE_CK_FREQ/32. */
        uint64_t ds_ratio              : 8;  /**< [ 31: 24](SR/W/H) Down sampling ratio in hex in the EBG downsampling circuit, which further
                                                                 downsamples the RNG slow (Noisy) oscillator output. This downsampling is
                                                                 done outside of the RNG macro.
                                                                 Must only be changed when [RNG_RSTN] and [ENTROPY_REQ] are zero.
                                                                 0x0 = or 1: no downsampling.
                                                                 0x2 = downsample by 2.
                                                                 0x3 = downsample by 3.
                                                                 0xFF = downsample by 255. */
        uint64_t reserved_32_63        : 32;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_rnm_ebg_ctl_s cn; */
};
typedef union cavm_rnm_ebg_ctl cavm_rnm_ebg_ctl_t;

#define CAVM_RNM_EBG_CTL CAVM_RNM_EBG_CTL_FUNC()
static inline uint64_t CAVM_RNM_EBG_CTL_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_RNM_EBG_CTL_FUNC(void)
{
    return 0x87e00f000040ll;
}

#define typedef_CAVM_RNM_EBG_CTL cavm_rnm_ebg_ctl_t
#define bustype_CAVM_RNM_EBG_CTL CSR_TYPE_RSL
#define basename_CAVM_RNM_EBG_CTL "RNM_EBG_CTL"
#define device_bar_CAVM_RNM_EBG_CTL 0x0 /* PF_BAR0 */
#define busnum_CAVM_RNM_EBG_CTL 0
#define arguments_CAVM_RNM_EBG_CTL -1,-1,-1,-1

/**
 * Register (RSL) rnm_ebg_ent
 *
 * RNM EBG Entropy Value Register
 * This register is used to read true random data from the EBG
 * (entropy bit generator), which serves as the true random entropy source for RNM.
 */
union cavm_rnm_ebg_ent
{
    uint64_t u;
    struct cavm_rnm_ebg_ent_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_32_63        : 32;
        uint64_t entrpy_rdy            : 1;  /**< [ 31: 31](RO/H) 0 = Entropy value is ready to read.
                                                                 1 = Not ready. */
        uint64_t reserved_16_30        : 15;
        uint64_t entrpy_val            : 16; /**< [ 15:  0](RO/H) Entropy value (16 bits random number). */
#else /* Word 0 - Little Endian */
        uint64_t entrpy_val            : 16; /**< [ 15:  0](RO/H) Entropy value (16 bits random number). */
        uint64_t reserved_16_30        : 15;
        uint64_t entrpy_rdy            : 1;  /**< [ 31: 31](RO/H) 0 = Entropy value is ready to read.
                                                                 1 = Not ready. */
        uint64_t reserved_32_63        : 32;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_rnm_ebg_ent_s cn; */
};
typedef union cavm_rnm_ebg_ent cavm_rnm_ebg_ent_t;

#define CAVM_RNM_EBG_ENT CAVM_RNM_EBG_ENT_FUNC()
static inline uint64_t CAVM_RNM_EBG_ENT_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_RNM_EBG_ENT_FUNC(void)
{
    return 0x87e00f000048ll;
}

#define typedef_CAVM_RNM_EBG_ENT cavm_rnm_ebg_ent_t
#define bustype_CAVM_RNM_EBG_ENT CSR_TYPE_RSL
#define basename_CAVM_RNM_EBG_ENT "RNM_EBG_ENT"
#define device_bar_CAVM_RNM_EBG_ENT 0x0 /* PF_BAR0 */
#define busnum_CAVM_RNM_EBG_ENT 0
#define arguments_CAVM_RNM_EBG_ENT -1,-1,-1,-1

/**
 * Register (RSL) rnm_eer_key
 *
 * RNM Encryption Enable Register
 * This register is the encryption enable register.
 */
union cavm_rnm_eer_key
{
    uint64_t u;
    struct cavm_rnm_eer_key_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t key                   : 64; /**< [ 63:  0](SWO) Dormant encryption key. If dormant crypto is fuse-enabled, crypto can be enabled by
                                                                 writing this register with the correct key. */
#else /* Word 0 - Little Endian */
        uint64_t key                   : 64; /**< [ 63:  0](SWO) Dormant encryption key. If dormant crypto is fuse-enabled, crypto can be enabled by
                                                                 writing this register with the correct key. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_rnm_eer_key_s cn; */
};
typedef union cavm_rnm_eer_key cavm_rnm_eer_key_t;

#define CAVM_RNM_EER_KEY CAVM_RNM_EER_KEY_FUNC()
static inline uint64_t CAVM_RNM_EER_KEY_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_RNM_EER_KEY_FUNC(void)
{
    return 0x87e00f000010ll;
}

#define typedef_CAVM_RNM_EER_KEY cavm_rnm_eer_key_t
#define bustype_CAVM_RNM_EER_KEY CSR_TYPE_RSL
#define basename_CAVM_RNM_EER_KEY "RNM_EER_KEY"
#define device_bar_CAVM_RNM_EER_KEY 0x0 /* PF_BAR0 */
#define busnum_CAVM_RNM_EER_KEY 0
#define arguments_CAVM_RNM_EER_KEY -1,-1,-1,-1

/**
 * Register (RSL) rnm_health_status
 *
 * RNM Entropy health status Register
 * This register indicates the startup and continuous entropy health status.
 */
union cavm_rnm_health_status
{
    uint64_t u;
    struct cavm_rnm_health_status_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t cycles_since_health_failure : 63;/**< [ 63:  1](RO/H) When zero, no continuous health failure has occured. When nonzero, number of
                                                                 coprocessor cycles times 2 since the last failure. Note that expected false
                                                                 positive rate of 2^-20 will result in a failure every millisecond with correctly
                                                                 functioning hardware. */
        uint64_t startup_health_failure : 1; /**< [  0:  0](RO/H) Latched result of the entropy source health test that occurred after the most
                                                                 recent chip reset. */
#else /* Word 0 - Little Endian */
        uint64_t startup_health_failure : 1; /**< [  0:  0](RO/H) Latched result of the entropy source health test that occurred after the most
                                                                 recent chip reset. */
        uint64_t cycles_since_health_failure : 63;/**< [ 63:  1](RO/H) When zero, no continuous health failure has occured. When nonzero, number of
                                                                 coprocessor cycles times 2 since the last failure. Note that expected false
                                                                 positive rate of 2^-20 will result in a failure every millisecond with correctly
                                                                 functioning hardware. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_rnm_health_status_s cn; */
};
typedef union cavm_rnm_health_status cavm_rnm_health_status_t;

#define CAVM_RNM_HEALTH_STATUS CAVM_RNM_HEALTH_STATUS_FUNC()
static inline uint64_t CAVM_RNM_HEALTH_STATUS_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_RNM_HEALTH_STATUS_FUNC(void)
{
    return 0x87e00f000038ll;
}

#define typedef_CAVM_RNM_HEALTH_STATUS cavm_rnm_health_status_t
#define bustype_CAVM_RNM_HEALTH_STATUS CSR_TYPE_RSL
#define basename_CAVM_RNM_HEALTH_STATUS "RNM_HEALTH_STATUS"
#define device_bar_CAVM_RNM_HEALTH_STATUS 0x0 /* PF_BAR0 */
#define busnum_CAVM_RNM_HEALTH_STATUS 0
#define arguments_CAVM_RNM_HEALTH_STATUS -1,-1,-1,-1

/**
 * Register (RSL) rnm_pf_ebg_health
 *
 * RNM EBG Health Configuration and Status Register
 * This register is used to configure and check the status of the EBG (Entropy Bit
 * Generator) Health tests.
 */
union cavm_rnm_pf_ebg_health
{
    uint64_t u;
    struct cavm_rnm_pf_ebg_health_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_22_63        : 42;
        uint64_t err_rep               : 1;  /**< [ 21: 21](RO/H) Error flag for repetition count health test. */
        uint64_t err_adp               : 1;  /**< [ 20: 20](RO/H) Error flag for adaptive proportion health test. */
        uint64_t st_done               : 1;  /**< [ 19: 19](RO/H) Done flag for EBG startup tests. */
        uint64_t c_rep                 : 8;  /**< [ 18: 11](SR/W/H) Cutoff value for repetition health test, default to H=0.6, a=2(-20), so C=35
                                                                 Only writable when RNG_RSTN is 0. */
        uint64_t c_adp                 : 11; /**< [ 10:  0](SR/W/H) Cutoff value for adaptive health test, default to H=0.6, a=2(-20) so C=748
                                                                 Only writable when RNG_RSTN is 0. */
#else /* Word 0 - Little Endian */
        uint64_t c_adp                 : 11; /**< [ 10:  0](SR/W/H) Cutoff value for adaptive health test, default to H=0.6, a=2(-20) so C=748
                                                                 Only writable when RNG_RSTN is 0. */
        uint64_t c_rep                 : 8;  /**< [ 18: 11](SR/W/H) Cutoff value for repetition health test, default to H=0.6, a=2(-20), so C=35
                                                                 Only writable when RNG_RSTN is 0. */
        uint64_t st_done               : 1;  /**< [ 19: 19](RO/H) Done flag for EBG startup tests. */
        uint64_t err_adp               : 1;  /**< [ 20: 20](RO/H) Error flag for adaptive proportion health test. */
        uint64_t err_rep               : 1;  /**< [ 21: 21](RO/H) Error flag for repetition count health test. */
        uint64_t reserved_22_63        : 42;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_rnm_pf_ebg_health_s cn; */
};
typedef union cavm_rnm_pf_ebg_health cavm_rnm_pf_ebg_health_t;

#define CAVM_RNM_PF_EBG_HEALTH CAVM_RNM_PF_EBG_HEALTH_FUNC()
static inline uint64_t CAVM_RNM_PF_EBG_HEALTH_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_RNM_PF_EBG_HEALTH_FUNC(void)
{
    return 0x87e00f000050ll;
}

#define typedef_CAVM_RNM_PF_EBG_HEALTH cavm_rnm_pf_ebg_health_t
#define bustype_CAVM_RNM_PF_EBG_HEALTH CSR_TYPE_RSL
#define basename_CAVM_RNM_PF_EBG_HEALTH "RNM_PF_EBG_HEALTH"
#define device_bar_CAVM_RNM_PF_EBG_HEALTH 0x0 /* PF_BAR0 */
#define busnum_CAVM_RNM_PF_EBG_HEALTH 0
#define arguments_CAVM_RNM_PF_EBG_HEALTH -1,-1,-1,-1

/**
 * Register (RSL) rnm_pf_random
 *
 * RNM Random Register
 */
union cavm_rnm_pf_random
{
    uint64_t u;
    struct cavm_rnm_pf_random_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t dat                   : 64; /**< [ 63:  0](RO/H) Generated random number. This register may be accessed with a 8, 16, 32 or 64-bit
                                                                 operation. Accesses to RNM_RANDOM larger than 64 bits will return 0x0 and fault. */
#else /* Word 0 - Little Endian */
        uint64_t dat                   : 64; /**< [ 63:  0](RO/H) Generated random number. This register may be accessed with a 8, 16, 32 or 64-bit
                                                                 operation. Accesses to RNM_RANDOM larger than 64 bits will return 0x0 and fault. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_rnm_pf_random_s cn; */
};
typedef union cavm_rnm_pf_random cavm_rnm_pf_random_t;

#define CAVM_RNM_PF_RANDOM CAVM_RNM_PF_RANDOM_FUNC()
static inline uint64_t CAVM_RNM_PF_RANDOM_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_RNM_PF_RANDOM_FUNC(void)
{
    return 0x87e00f000400ll;
}

#define typedef_CAVM_RNM_PF_RANDOM cavm_rnm_pf_random_t
#define bustype_CAVM_RNM_PF_RANDOM CSR_TYPE_RSL
#define basename_CAVM_RNM_PF_RANDOM "RNM_PF_RANDOM"
#define device_bar_CAVM_RNM_PF_RANDOM 0x0 /* PF_BAR0 */
#define busnum_CAVM_RNM_PF_RANDOM 0
#define arguments_CAVM_RNM_PF_RANDOM -1,-1,-1,-1

/**
 * Register (NCB) rnm_random
 *
 * RNM Random Register
 */
union cavm_rnm_random
{
    uint64_t u;
    struct cavm_rnm_random_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t dat                   : 64; /**< [ 63:  0](RO/H) Generated random number. This register may be accessed with a 8, 16, 32 or 64-bit
                                                                 operation. Accesses to RNM_RANDOM larger than 64 bits will return 0x0 and fault. */
#else /* Word 0 - Little Endian */
        uint64_t dat                   : 64; /**< [ 63:  0](RO/H) Generated random number. This register may be accessed with a 8, 16, 32 or 64-bit
                                                                 operation. Accesses to RNM_RANDOM larger than 64 bits will return 0x0 and fault. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_rnm_random_s cn; */
};
typedef union cavm_rnm_random cavm_rnm_random_t;

#define CAVM_RNM_RANDOM CAVM_RNM_RANDOM_FUNC()
static inline uint64_t CAVM_RNM_RANDOM_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_RNM_RANDOM_FUNC(void)
{
    return 0x80f000800000ll;
}

#define typedef_CAVM_RNM_RANDOM cavm_rnm_random_t
#define bustype_CAVM_RNM_RANDOM CSR_TYPE_NCB
#define basename_CAVM_RNM_RANDOM "RNM_RANDOM"
#define device_bar_CAVM_RNM_RANDOM 0x0 /* VF_BAR0 */
#define busnum_CAVM_RNM_RANDOM 0
#define arguments_CAVM_RNM_RANDOM -1,-1,-1,-1

/**
 * Register (RSL) rnm_serial_num
 *
 * RNM Fuse Serial Number Register
 * Internal:
 * The serial number doesn't need to be on an external CSR bus, but the CSR cores aren't able to
 * add fine-grained clock gating to volatile fields.
 */
union cavm_rnm_serial_num
{
    uint64_t u;
    struct cavm_rnm_serial_num_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t dat                   : 64; /**< [ 63:  0](RO/H) Dormant encryption serial number. */
#else /* Word 0 - Little Endian */
        uint64_t dat                   : 64; /**< [ 63:  0](RO/H) Dormant encryption serial number. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_rnm_serial_num_s cn; */
};
typedef union cavm_rnm_serial_num cavm_rnm_serial_num_t;

#define CAVM_RNM_SERIAL_NUM CAVM_RNM_SERIAL_NUM_FUNC()
static inline uint64_t CAVM_RNM_SERIAL_NUM_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_RNM_SERIAL_NUM_FUNC(void)
{
    return 0x87e00f000020ll;
}

#define typedef_CAVM_RNM_SERIAL_NUM cavm_rnm_serial_num_t
#define bustype_CAVM_RNM_SERIAL_NUM CSR_TYPE_RSL
#define basename_CAVM_RNM_SERIAL_NUM "RNM_SERIAL_NUM"
#define device_bar_CAVM_RNM_SERIAL_NUM 0x0 /* PF_BAR0 */
#define busnum_CAVM_RNM_SERIAL_NUM 0
#define arguments_CAVM_RNM_SERIAL_NUM -1,-1,-1,-1

/**
 * Register (NCB) rnm_vf_ebg_health
 *
 * RNM EBG Health Configuration and Status Register
 * This register is used to configure and check the status of the EBG (Entropy Bit
 * Generator) Health tests.
 */
union cavm_rnm_vf_ebg_health
{
    uint64_t u;
    struct cavm_rnm_vf_ebg_health_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_23_63        : 41;
        uint64_t err_rep               : 1;  /**< [ 22: 22](RO/H) Error flag for repetition count health test. */
        uint64_t err_adp               : 1;  /**< [ 21: 21](RO/H) Error flag for adaptive proportion health test. */
        uint64_t st_done               : 1;  /**< [ 20: 20](RO/H) Done flag for EBG startup tests. */
        uint64_t c_rep                 : 9;  /**< [ 19: 11](RO/H) Cutoff value for repetition health test, default to H=0.6, a=2(-20), so C=35
                                                                 Only writable when RNG_RSTN is 0. */
        uint64_t c_adp                 : 11; /**< [ 10:  0](RO/H) Cutoff value for adaptive health test, default to H=0.6, a=2(-20) so C=748
                                                                 Only writable when RNG_RSTN is 0. */
#else /* Word 0 - Little Endian */
        uint64_t c_adp                 : 11; /**< [ 10:  0](RO/H) Cutoff value for adaptive health test, default to H=0.6, a=2(-20) so C=748
                                                                 Only writable when RNG_RSTN is 0. */
        uint64_t c_rep                 : 9;  /**< [ 19: 11](RO/H) Cutoff value for repetition health test, default to H=0.6, a=2(-20), so C=35
                                                                 Only writable when RNG_RSTN is 0. */
        uint64_t st_done               : 1;  /**< [ 20: 20](RO/H) Done flag for EBG startup tests. */
        uint64_t err_adp               : 1;  /**< [ 21: 21](RO/H) Error flag for adaptive proportion health test. */
        uint64_t err_rep               : 1;  /**< [ 22: 22](RO/H) Error flag for repetition count health test. */
        uint64_t reserved_23_63        : 41;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_rnm_vf_ebg_health_s cn; */
};
typedef union cavm_rnm_vf_ebg_health cavm_rnm_vf_ebg_health_t;

#define CAVM_RNM_VF_EBG_HEALTH CAVM_RNM_VF_EBG_HEALTH_FUNC()
static inline uint64_t CAVM_RNM_VF_EBG_HEALTH_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_RNM_VF_EBG_HEALTH_FUNC(void)
{
    return 0x80f000800020ll;
}

#define typedef_CAVM_RNM_VF_EBG_HEALTH cavm_rnm_vf_ebg_health_t
#define bustype_CAVM_RNM_VF_EBG_HEALTH CSR_TYPE_NCB
#define basename_CAVM_RNM_VF_EBG_HEALTH "RNM_VF_EBG_HEALTH"
#define device_bar_CAVM_RNM_VF_EBG_HEALTH 0x0 /* VF_BAR0 */
#define busnum_CAVM_RNM_VF_EBG_HEALTH 0
#define arguments_CAVM_RNM_VF_EBG_HEALTH -1,-1,-1,-1

/**
 * Register (RSL) rnm_zuc#_init_lfsr#
 *
 * RNM ZUC LFSR Initialization Register
 * Ignored, deprecated feature.
 */
union cavm_rnm_zucx_init_lfsrx
{
    uint64_t u;
    struct cavm_rnm_zucx_init_lfsrx_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_0_63         : 64;
#else /* Word 0 - Little Endian */
        uint64_t reserved_0_63         : 64;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_rnm_zucx_init_lfsrx_s cn; */
};
typedef union cavm_rnm_zucx_init_lfsrx cavm_rnm_zucx_init_lfsrx_t;

static inline uint64_t CAVM_RNM_ZUCX_INIT_LFSRX(uint64_t a, uint64_t b) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_RNM_ZUCX_INIT_LFSRX(uint64_t a, uint64_t b)
{
    if ((a<=1) && (b<=15))
        return 0x87e00f000100ll + 0x400ll * ((a) & 0x1) + 8ll * ((b) & 0xf);
    __cavm_csr_fatal("RNM_ZUCX_INIT_LFSRX", 2, a, b, 0, 0, 0, 0);
}

#define typedef_CAVM_RNM_ZUCX_INIT_LFSRX(a,b) cavm_rnm_zucx_init_lfsrx_t
#define bustype_CAVM_RNM_ZUCX_INIT_LFSRX(a,b) CSR_TYPE_RSL
#define basename_CAVM_RNM_ZUCX_INIT_LFSRX(a,b) "RNM_ZUCX_INIT_LFSRX"
#define device_bar_CAVM_RNM_ZUCX_INIT_LFSRX(a,b) 0x0 /* PF_BAR0 */
#define busnum_CAVM_RNM_ZUCX_INIT_LFSRX(a,b) (a)
#define arguments_CAVM_RNM_ZUCX_INIT_LFSRX(a,b) (a),(b),-1,-1

/**
 * Register (RSL) rnm_zuc#_init_nlf#
 *
 * RNM ZUC LFSR Initialization Register
 * Ignored, deprecated feature.
 */
union cavm_rnm_zucx_init_nlfx
{
    uint64_t u;
    struct cavm_rnm_zucx_init_nlfx_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_0_63         : 64;
#else /* Word 0 - Little Endian */
        uint64_t reserved_0_63         : 64;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_rnm_zucx_init_nlfx_s cn; */
};
typedef union cavm_rnm_zucx_init_nlfx cavm_rnm_zucx_init_nlfx_t;

static inline uint64_t CAVM_RNM_ZUCX_INIT_NLFX(uint64_t a, uint64_t b) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_RNM_ZUCX_INIT_NLFX(uint64_t a, uint64_t b)
{
    if ((a<=1) && (b<=1))
        return 0x87e00f000200ll + 0x400ll * ((a) & 0x1) + 8ll * ((b) & 0x1);
    __cavm_csr_fatal("RNM_ZUCX_INIT_NLFX", 2, a, b, 0, 0, 0, 0);
}

#define typedef_CAVM_RNM_ZUCX_INIT_NLFX(a,b) cavm_rnm_zucx_init_nlfx_t
#define bustype_CAVM_RNM_ZUCX_INIT_NLFX(a,b) CSR_TYPE_RSL
#define basename_CAVM_RNM_ZUCX_INIT_NLFX(a,b) "RNM_ZUCX_INIT_NLFX"
#define device_bar_CAVM_RNM_ZUCX_INIT_NLFX(a,b) 0x0 /* PF_BAR0 */
#define busnum_CAVM_RNM_ZUCX_INIT_NLFX(a,b) (a)
#define arguments_CAVM_RNM_ZUCX_INIT_NLFX(a,b) (a),(b),-1,-1

#endif /* __CAVM_CSRS_RNM_H__ */
