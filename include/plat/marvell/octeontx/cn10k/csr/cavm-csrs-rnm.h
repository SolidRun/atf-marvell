#ifndef __CAVM_CSRS_RNM_H__
#define __CAVM_CSRS_RNM_H__
/* This file is auto-generated. Do not edit */

/***********************license start***********************************
* Copyright (C) 2018 Marvell
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
 * Register (RSL) rnm_active_pc
 *
 * RNM Conditional Clock Counter Register
 */
union cavm_rnm_active_pc
{
    uint64_t u;
    struct cavm_rnm_active_pc_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t count                 : 64; /**< [ 63:  0](R/W/H) Count of conditional coprocessor-clock cycles since reset. */
#else /* Word 0 - Little Endian */
        uint64_t count                 : 64; /**< [ 63:  0](R/W/H) Count of conditional coprocessor-clock cycles since reset. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_rnm_active_pc_s cn; */
};
typedef union cavm_rnm_active_pc cavm_rnm_active_pc_t;

#define CAVM_RNM_ACTIVE_PC CAVM_RNM_ACTIVE_PC_FUNC()
static inline uint64_t CAVM_RNM_ACTIVE_PC_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_RNM_ACTIVE_PC_FUNC(void)
{
    return 0x87e00f000010ll;
}

#define typedef_CAVM_RNM_ACTIVE_PC cavm_rnm_active_pc_t
#define bustype_CAVM_RNM_ACTIVE_PC CSR_TYPE_RSL
#define basename_CAVM_RNM_ACTIVE_PC "RNM_ACTIVE_PC"
#define device_bar_CAVM_RNM_ACTIVE_PC 0x0 /* PF_BAR0 */
#define busnum_CAVM_RNM_ACTIVE_PC 0
#define arguments_CAVM_RNM_ACTIVE_PC -1,-1,-1,-1

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
        uint64_t reserved_15_63        : 49;
        uint64_t drbg_ent_disable      : 1;  /**< [ 14: 14](SR/W/H) Before setting write 128 bits to RNM_DRBG_ENT_FORCE(0..3), once set entropy bus will
                                                                 be forced to specified value. Set RNM_CTL_STATUS[DRBG_EN] to 0 to disable the engine
                                                                 before writing. */
        uint64_t drbg_en               : 1;  /**< [ 13: 13](SR/W/H) Set this bit to 0x0 to put the DRBG into reset. Must be 0x0 before
                                                                 RNM_CTL_STATUS[DRBG_ENT_DISABLE]. */
        uint64_t ebg_poll_delay        : 10; /**< [ 12:  3](SR/W/H) Number of cycles for hardware to wait before polling the EBG APB bus for new entropy. */
        uint64_t ebg_poll_en           : 1;  /**< [  2:  2](SR/W/H) Set this bit to enable polling and accumulation of entropy from EBG.
                                                                 Before setting this bit EBG must be initialized and [EBG_CTL_LOCK] set.
                                                                 Automatically cleared when a health failure occurs (see RNM_PF_EBG_HEALTH[CT_ERR]). */
        uint64_t ebg_ctl_lock          : 1;  /**< [  1:  1](SR/W1S/H) Set this bit to lock write access to RNM_EBG_CTL.
                                                                 Locked until system is reset or a health failure occurs (see RNM_PF_EBG_HEALTH[CT_ERR]). */
        uint64_t force_clk             : 1;  /**< [  0:  0](SR/W) When set, conditional clock is always on. For diagnostic use only. */
#else /* Word 0 - Little Endian */
        uint64_t force_clk             : 1;  /**< [  0:  0](SR/W) When set, conditional clock is always on. For diagnostic use only. */
        uint64_t ebg_ctl_lock          : 1;  /**< [  1:  1](SR/W1S/H) Set this bit to lock write access to RNM_EBG_CTL.
                                                                 Locked until system is reset or a health failure occurs (see RNM_PF_EBG_HEALTH[CT_ERR]). */
        uint64_t ebg_poll_en           : 1;  /**< [  2:  2](SR/W/H) Set this bit to enable polling and accumulation of entropy from EBG.
                                                                 Before setting this bit EBG must be initialized and [EBG_CTL_LOCK] set.
                                                                 Automatically cleared when a health failure occurs (see RNM_PF_EBG_HEALTH[CT_ERR]). */
        uint64_t ebg_poll_delay        : 10; /**< [ 12:  3](SR/W/H) Number of cycles for hardware to wait before polling the EBG APB bus for new entropy. */
        uint64_t drbg_en               : 1;  /**< [ 13: 13](SR/W/H) Set this bit to 0x0 to put the DRBG into reset. Must be 0x0 before
                                                                 RNM_CTL_STATUS[DRBG_ENT_DISABLE]. */
        uint64_t drbg_ent_disable      : 1;  /**< [ 14: 14](SR/W/H) Before setting write 128 bits to RNM_DRBG_ENT_FORCE(0..3), once set entropy bus will
                                                                 be forced to specified value. Set RNM_CTL_STATUS[DRBG_EN] to 0 to disable the engine
                                                                 before writing. */
        uint64_t reserved_15_63        : 49;
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
 * Register (RSL) rnm_drbg_ent_force#
 *
 * RNM DRBG Entropy Force Register
 * Write this register to force the Entropy source of the DRBG to a constant value
 * for debugging purposes.
 *
 * Before writing to this register, RNM_CTL_STATUS[DRBG_ENT_DISABLE] must be zero to turn off the
 * DRBG engine.
 *
 * To use this register in place of the entropy source write 1 to RNM_CTL_STATUS[DRBG_ENT_DISABLE].
 */
union cavm_rnm_drbg_ent_forcex
{
    uint64_t u;
    struct cavm_rnm_drbg_ent_forcex_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t bits                  : 64; /**< [ 63:  0](SWO) 64b of the 256b value to force onto the DRBG entropy bus. */
#else /* Word 0 - Little Endian */
        uint64_t bits                  : 64; /**< [ 63:  0](SWO) 64b of the 256b value to force onto the DRBG entropy bus. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_rnm_drbg_ent_forcex_s cn; */
};
typedef union cavm_rnm_drbg_ent_forcex cavm_rnm_drbg_ent_forcex_t;

static inline uint64_t CAVM_RNM_DRBG_ENT_FORCEX(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_RNM_DRBG_ENT_FORCEX(uint64_t a)
{
    if (a<=3)
        return 0x87e00f000300ll + 8ll * ((a) & 0x3);
    __cavm_csr_fatal("RNM_DRBG_ENT_FORCEX", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_RNM_DRBG_ENT_FORCEX(a) cavm_rnm_drbg_ent_forcex_t
#define bustype_CAVM_RNM_DRBG_ENT_FORCEX(a) CSR_TYPE_RSL
#define basename_CAVM_RNM_DRBG_ENT_FORCEX(a) "RNM_DRBG_ENT_FORCEX"
#define device_bar_CAVM_RNM_DRBG_ENT_FORCEX(a) 0x0 /* PF_BAR0 */
#define busnum_CAVM_RNM_DRBG_ENT_FORCEX(a) (a)
#define arguments_CAVM_RNM_DRBG_ENT_FORCEX(a) (a),-1,-1,-1

/**
 * Register (NCB) rnm_drbg_rndr
 *
 * RNM DRBG Random Value Register
 */
union cavm_rnm_drbg_rndr
{
    uint64_t u;
    struct cavm_rnm_drbg_rndr_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t dat                   : 64; /**< [ 63:  0](RO/H) Returns a 64-bit NIST-90A Compliant CTR DRBG Deterministic Random Number
                                                                 Read RNM_DRBG_RNDR_RESULT for result status.
                                                                 For immediate reseed see RNM_DRBG_RNDRRS. */
#else /* Word 0 - Little Endian */
        uint64_t dat                   : 64; /**< [ 63:  0](RO/H) Returns a 64-bit NIST-90A Compliant CTR DRBG Deterministic Random Number
                                                                 Read RNM_DRBG_RNDR_RESULT for result status.
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
    return 0x80f000800020ll;
}

#define typedef_CAVM_RNM_DRBG_RNDR cavm_rnm_drbg_rndr_t
#define bustype_CAVM_RNM_DRBG_RNDR CSR_TYPE_NCB
#define basename_CAVM_RNM_DRBG_RNDR "RNM_DRBG_RNDR"
#define device_bar_CAVM_RNM_DRBG_RNDR 0x0 /* VF_BAR0 */
#define busnum_CAVM_RNM_DRBG_RNDR 0
#define arguments_CAVM_RNM_DRBG_RNDR -1,-1,-1,-1

/**
 * Register (NCB) rnm_drbg_rndr_result
 *
 * RNM DRBG Random Result Register
 */
union cavm_rnm_drbg_rndr_result
{
    uint64_t u;
    struct cavm_rnm_drbg_rndr_result_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_1_63         : 63;
        uint64_t res                   : 1;  /**< [  0:  0](RO/H) Status of RNDR (DRBG Random Number) read:
                                                                 0 = Failure, RNM_DRBG_RNDR will also return 0x0.
                                                                 1 = Success, always accompanied by data in RNM_DRBG_RNDR. */
#else /* Word 0 - Little Endian */
        uint64_t res                   : 1;  /**< [  0:  0](RO/H) Status of RNDR (DRBG Random Number) read:
                                                                 0 = Failure, RNM_DRBG_RNDR will also return 0x0.
                                                                 1 = Success, always accompanied by data in RNM_DRBG_RNDR. */
        uint64_t reserved_1_63         : 63;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_rnm_drbg_rndr_result_s cn; */
};
typedef union cavm_rnm_drbg_rndr_result cavm_rnm_drbg_rndr_result_t;

#define CAVM_RNM_DRBG_RNDR_RESULT CAVM_RNM_DRBG_RNDR_RESULT_FUNC()
static inline uint64_t CAVM_RNM_DRBG_RNDR_RESULT_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_RNM_DRBG_RNDR_RESULT_FUNC(void)
{
    return 0x80f000800028ll;
}

#define typedef_CAVM_RNM_DRBG_RNDR_RESULT cavm_rnm_drbg_rndr_result_t
#define bustype_CAVM_RNM_DRBG_RNDR_RESULT CSR_TYPE_NCB
#define basename_CAVM_RNM_DRBG_RNDR_RESULT "RNM_DRBG_RNDR_RESULT"
#define device_bar_CAVM_RNM_DRBG_RNDR_RESULT 0x0 /* VF_BAR0 */
#define busnum_CAVM_RNM_DRBG_RNDR_RESULT 0
#define arguments_CAVM_RNM_DRBG_RNDR_RESULT -1,-1,-1,-1

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
        uint64_t dat                   : 64; /**< [ 63:  0](RO/H) Returns a 64-bit NIST-90A Compliant CTR DRBG deterministic random number.
                                                                 DRBG is reseeded immediately on read, blocks until complete and new bits available.
                                                                 Read RNM_DRBG_RNDRRS_RESULT for result status.
                                                                 All DRBG related CSR operations will be blocked until reseed completes. */
#else /* Word 0 - Little Endian */
        uint64_t dat                   : 64; /**< [ 63:  0](RO/H) Returns a 64-bit NIST-90A Compliant CTR DRBG deterministic random number.
                                                                 DRBG is reseeded immediately on read, blocks until complete and new bits available.
                                                                 Read RNM_DRBG_RNDRRS_RESULT for result status.
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
    return 0x80f000800030ll;
}

#define typedef_CAVM_RNM_DRBG_RNDRRS cavm_rnm_drbg_rndrrs_t
#define bustype_CAVM_RNM_DRBG_RNDRRS CSR_TYPE_NCB
#define basename_CAVM_RNM_DRBG_RNDRRS "RNM_DRBG_RNDRRS"
#define device_bar_CAVM_RNM_DRBG_RNDRRS 0x0 /* VF_BAR0 */
#define busnum_CAVM_RNM_DRBG_RNDRRS 0
#define arguments_CAVM_RNM_DRBG_RNDRRS -1,-1,-1,-1

/**
 * Register (NCB) rnm_drbg_rndrrs_result
 *
 * RNM DRBG Reseeded Random Result Register
 */
union cavm_rnm_drbg_rndrrs_result
{
    uint64_t u;
    struct cavm_rnm_drbg_rndrrs_result_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_1_63         : 63;
        uint64_t res                   : 1;  /**< [  0:  0](RO/H) Status of RNDRRS (DRBG Reseeded Random Number) read:
                                                                 0 = Failure, RNM_DRBG_RNDRRS will also return 0x0.
                                                                 1 = Success, always accompanied by data in RNM_DRBG_RNDRRS. */
#else /* Word 0 - Little Endian */
        uint64_t res                   : 1;  /**< [  0:  0](RO/H) Status of RNDRRS (DRBG Reseeded Random Number) read:
                                                                 0 = Failure, RNM_DRBG_RNDRRS will also return 0x0.
                                                                 1 = Success, always accompanied by data in RNM_DRBG_RNDRRS. */
        uint64_t reserved_1_63         : 63;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_rnm_drbg_rndrrs_result_s cn; */
};
typedef union cavm_rnm_drbg_rndrrs_result cavm_rnm_drbg_rndrrs_result_t;

#define CAVM_RNM_DRBG_RNDRRS_RESULT CAVM_RNM_DRBG_RNDRRS_RESULT_FUNC()
static inline uint64_t CAVM_RNM_DRBG_RNDRRS_RESULT_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_RNM_DRBG_RNDRRS_RESULT_FUNC(void)
{
    return 0x80f000800038ll;
}

#define typedef_CAVM_RNM_DRBG_RNDRRS_RESULT cavm_rnm_drbg_rndrrs_result_t
#define bustype_CAVM_RNM_DRBG_RNDRRS_RESULT CSR_TYPE_NCB
#define basename_CAVM_RNM_DRBG_RNDRRS_RESULT "RNM_DRBG_RNDRRS_RESULT"
#define device_bar_CAVM_RNM_DRBG_RNDRRS_RESULT 0x0 /* VF_BAR0 */
#define busnum_CAVM_RNM_DRBG_RNDRRS_RESULT 0
#define arguments_CAVM_RNM_DRBG_RNDRRS_RESULT -1,-1,-1,-1

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
        uint64_t rng_slow_div_val      : 8;  /**< [ 23: 16](SR/W/H) Decimate value of noisy oscillator (slow OSC) before sampling the fast
                                                                 OSC. Dividing ratio is 2X of the value in this field. Minimum Value is 2.
                                                                 Recommend to leave it as default 0x21 to have sufficient noise (at least
                                                                 0x1E).

                                                                 Examples:
                                                                 0x2: brn_ck_freq = noise_ck_freq/4.
                                                                 0x3: brn_ck_freq = noise_ck_freq/6.
                                                                 0x10: brn_ck_freq = noise_ck_freq/32. */
        uint64_t reserved_15           : 1;
        uint64_t entropy_sel           : 2;  /**< [ 14: 13](SR/W/H) Entropy source select.
                                                                 Must only be changed when [RNG_RSTN] and [ENTROPY_REQ] field are 0.

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
                                                                 0 = Reset.
                                                                 1 = Normal. */
        uint64_t rng_pu_bias           : 1;  /**< [  9:  9](SR/W/H) Enable signal of the analog bias circuit.
                                                                 0 = Disable.
                                                                 1 = Provide Power for slow oscillator and its bias circuit. */
        uint64_t rng_fast_osc_ena      : 1;  /**< [  8:  8](SR/W/H) Enable signal of the fast oscillator in the digital RNG structure. It is the
                                                                 clean oscillator.
                                                                 0 = Disable.
                                                                 1 = RNG Fast (Free Running) OSC Enable. */
        uint64_t rng_slow_osc_ena      : 1;  /**< [  7:  7](SR/W/H) Enable signal of the slow oscillator in the digital RNG structure. It is the
                                                                 noisy oscillator.
                                                                 0 = Disable.
                                                                 1 = RNG Slow OSC Enable. */
        uint64_t pp_ena                : 1;  /**< [  6:  6](SR/W/H) Enable signal of the post processor.
                                                                 Disabling the post processor will allow raw entropy to be extracted from the
                                                                 ana_rng macro. Note that it is still subject to downsamping, depending
                                                                 upon the value programmed into the [DS_RATIO]\<31:24\> bits.
                                                                 0 = Disable.
                                                                 1 = Post Processor enable.

                                                                 Should only be changed when [RNG_RSTN] and [ENTROPY_REQ] are 0. */
        uint64_t rng_pu_bias2          : 1;  /**< [  5:  5](SR/W/H) Enable signal of the analog bias circuit.
                                                                 0 = Disable.
                                                                 1 = Provide power for slow oscillator and its bias circuit. */
        uint64_t reserved_0_4          : 5;
#else /* Word 0 - Little Endian */
        uint64_t reserved_0_4          : 5;
        uint64_t rng_pu_bias2          : 1;  /**< [  5:  5](SR/W/H) Enable signal of the analog bias circuit.
                                                                 0 = Disable.
                                                                 1 = Provide power for slow oscillator and its bias circuit. */
        uint64_t pp_ena                : 1;  /**< [  6:  6](SR/W/H) Enable signal of the post processor.
                                                                 Disabling the post processor will allow raw entropy to be extracted from the
                                                                 ana_rng macro. Note that it is still subject to downsamping, depending
                                                                 upon the value programmed into the [DS_RATIO]\<31:24\> bits.
                                                                 0 = Disable.
                                                                 1 = Post Processor enable.

                                                                 Should only be changed when [RNG_RSTN] and [ENTROPY_REQ] are 0. */
        uint64_t rng_slow_osc_ena      : 1;  /**< [  7:  7](SR/W/H) Enable signal of the slow oscillator in the digital RNG structure. It is the
                                                                 noisy oscillator.
                                                                 0 = Disable.
                                                                 1 = RNG Slow OSC Enable. */
        uint64_t rng_fast_osc_ena      : 1;  /**< [  8:  8](SR/W/H) Enable signal of the fast oscillator in the digital RNG structure. It is the
                                                                 clean oscillator.
                                                                 0 = Disable.
                                                                 1 = RNG Fast (Free Running) OSC Enable. */
        uint64_t rng_pu_bias           : 1;  /**< [  9:  9](SR/W/H) Enable signal of the analog bias circuit.
                                                                 0 = Disable.
                                                                 1 = Provide Power for slow oscillator and its bias circuit. */
        uint64_t rng_rstn              : 1;  /**< [ 10: 10](SR/W/H) RNG analog reset.
                                                                 Active low reset to the digital RNG structure.
                                                                 0 = Reset.
                                                                 1 = Normal. */
        uint64_t rng_clk_sel           : 1;  /**< [ 11: 11](SR/W/H) Selects the source of the clean clock inside the ring oscillator block. The
                                                                 clean clock is to be sampled by the noisy oscillator output.
                                                                 0 = Clean clock is the Fast (free running) oscillator inside analog.
                                                                 1 = Clean clock is the CPU register clock. */
        uint64_t entropy_req           : 1;  /**< [ 12: 12](SR/W/H) 0 = Stop.
                                                                 1 = Request new entropy bits into shift register/FIFO. */
        uint64_t entropy_sel           : 2;  /**< [ 14: 13](SR/W/H) Entropy source select.
                                                                 Must only be changed when [RNG_RSTN] and [ENTROPY_REQ] field are 0.

                                                                 Internal mode:
                                                                 0x0 = RNG data latched by RNG clock.
                                                                 0x1 = RNG data latched by APB clock.
                                                                 0x2 = RNG clock latched by APB clock.
                                                                 0x3 = Reserved. */
        uint64_t reserved_15           : 1;
        uint64_t rng_slow_div_val      : 8;  /**< [ 23: 16](SR/W/H) Decimate value of noisy oscillator (slow OSC) before sampling the fast
                                                                 OSC. Dividing ratio is 2X of the value in this field. Minimum Value is 2.
                                                                 Recommend to leave it as default 0x21 to have sufficient noise (at least
                                                                 0x1E).

                                                                 Examples:
                                                                 0x2: brn_ck_freq = noise_ck_freq/4.
                                                                 0x3: brn_ck_freq = noise_ck_freq/6.
                                                                 0x10: brn_ck_freq = noise_ck_freq/32. */
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
        uint64_t dat                   : 64; /**< [ 63:  0](RO/H) Last 64 bits of entropy data read from the EBG. This value updates only when
                                                                 RNM_CTL_STATUS[EBG_POLL_EN] = 0x0. */
#else /* Word 0 - Little Endian */
        uint64_t dat                   : 64; /**< [ 63:  0](RO/H) Last 64 bits of entropy data read from the EBG. This value updates only when
                                                                 RNM_CTL_STATUS[EBG_POLL_EN] = 0x0. */
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
 * Register (RSL) rnm_entropy_rate
 *
 * RNM Entropy Consumption Rate Limit Register
 * Number of microseconds to wait between DRBG Reseeds.
 */
union cavm_rnm_entropy_rate
{
    uint64_t u;
    struct cavm_rnm_entropy_rate_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_16_63        : 48;
        uint64_t rndrrs_time           : 16; /**< [ 15:  0](SR/W) Required time (microseconds) between valid RNM_DRBG_RNDRRS reads.
                                                                 RNM_DRBG_RNDRRS will return bad status - RNM_DRBG_RNDRRS=0x0, RNM_DRBG_RNDRRS_RESULT=0x0 for
                                                                 [RNDRRS_TIME] (microseconds) between sequential reads. */
#else /* Word 0 - Little Endian */
        uint64_t rndrrs_time           : 16; /**< [ 15:  0](SR/W) Required time (microseconds) between valid RNM_DRBG_RNDRRS reads.
                                                                 RNM_DRBG_RNDRRS will return bad status - RNM_DRBG_RNDRRS=0x0, RNM_DRBG_RNDRRS_RESULT=0x0 for
                                                                 [RNDRRS_TIME] (microseconds) between sequential reads. */
        uint64_t reserved_16_63        : 48;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_rnm_entropy_rate_s cn; */
};
typedef union cavm_rnm_entropy_rate cavm_rnm_entropy_rate_t;

#define CAVM_RNM_ENTROPY_RATE CAVM_RNM_ENTROPY_RATE_FUNC()
static inline uint64_t CAVM_RNM_ENTROPY_RATE_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_RNM_ENTROPY_RATE_FUNC(void)
{
    return 0x87e00f000f10ll;
}

#define typedef_CAVM_RNM_ENTROPY_RATE cavm_rnm_entropy_rate_t
#define bustype_CAVM_RNM_ENTROPY_RATE CSR_TYPE_RSL
#define basename_CAVM_RNM_ENTROPY_RATE "RNM_ENTROPY_RATE"
#define device_bar_CAVM_RNM_ENTROPY_RATE 0x0 /* PF_BAR0 */
#define busnum_CAVM_RNM_ENTROPY_RATE 0
#define arguments_CAVM_RNM_ENTROPY_RATE -1,-1,-1,-1

/**
 * Register (RSL) rnm_entropy_status
 *
 * RNM Entropy Pool Status Register
 * Status of the RNM Entropy Memory.
 */
union cavm_rnm_entropy_status
{
    uint64_t u;
    struct cavm_rnm_entropy_status_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_28_63        : 36;
        uint64_t no_zero_max           : 7;  /**< [ 27: 21](RO/H) Maximum number of 64b no-zero entropy words stored in RNM since last reset. */
        uint64_t no_zero_cnt           : 7;  /**< [ 20: 14](RO/H) Current number of 64b no-zero entropy words stored in RNM. 0x40 = Full. */
        uint64_t normal_max            : 7;  /**< [ 13:  7](RO/H) Maximum number of 64b normal entropy words stored in RNM since last reset. */
        uint64_t normal_cnt            : 7;  /**< [  6:  0](RO/H) Current number of 64b normal entropy words stored in RNM. 0x40 = Full. */
#else /* Word 0 - Little Endian */
        uint64_t normal_cnt            : 7;  /**< [  6:  0](RO/H) Current number of 64b normal entropy words stored in RNM. 0x40 = Full. */
        uint64_t normal_max            : 7;  /**< [ 13:  7](RO/H) Maximum number of 64b normal entropy words stored in RNM since last reset. */
        uint64_t no_zero_cnt           : 7;  /**< [ 20: 14](RO/H) Current number of 64b no-zero entropy words stored in RNM. 0x40 = Full. */
        uint64_t no_zero_max           : 7;  /**< [ 27: 21](RO/H) Maximum number of 64b no-zero entropy words stored in RNM since last reset. */
        uint64_t reserved_28_63        : 36;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_rnm_entropy_status_s cn; */
};
typedef union cavm_rnm_entropy_status cavm_rnm_entropy_status_t;

#define CAVM_RNM_ENTROPY_STATUS CAVM_RNM_ENTROPY_STATUS_FUNC()
static inline uint64_t CAVM_RNM_ENTROPY_STATUS_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_RNM_ENTROPY_STATUS_FUNC(void)
{
    return 0x87e00f000008ll;
}

#define typedef_CAVM_RNM_ENTROPY_STATUS cavm_rnm_entropy_status_t
#define bustype_CAVM_RNM_ENTROPY_STATUS CSR_TYPE_RSL
#define basename_CAVM_RNM_ENTROPY_STATUS "RNM_ENTROPY_STATUS"
#define device_bar_CAVM_RNM_ENTROPY_STATUS 0x0 /* PF_BAR0 */
#define busnum_CAVM_RNM_ENTROPY_STATUS 0
#define arguments_CAVM_RNM_ENTROPY_STATUS -1,-1,-1,-1

/**
 * Register (RSL) rnm_pf_drbg_reseed_ctr
 *
 * RNM DRBG Reseed Counter Register
 * Number of DRBG engine requests serviced since the last reseed.
 * Read RNM_PF_DRBG_RESEED_INTERVAL for the number of requests before a reseed occurs.
 * When RNM_PF_DRBG_RESEED_CTR reaches RNM_PF_DRBG_RESEED_INTERVAL the engines will reseed
 * themselves.
 */
union cavm_rnm_pf_drbg_reseed_ctr
{
    uint64_t u;
    struct cavm_rnm_pf_drbg_reseed_ctr_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_48_63        : 16;
        uint64_t ctr                   : 48; /**< [ 47:  0](RO/H) Number of DRBG engine requests services since the last reseed. */
#else /* Word 0 - Little Endian */
        uint64_t ctr                   : 48; /**< [ 47:  0](RO/H) Number of DRBG engine requests services since the last reseed. */
        uint64_t reserved_48_63        : 16;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_rnm_pf_drbg_reseed_ctr_s cn; */
};
typedef union cavm_rnm_pf_drbg_reseed_ctr cavm_rnm_pf_drbg_reseed_ctr_t;

#define CAVM_RNM_PF_DRBG_RESEED_CTR CAVM_RNM_PF_DRBG_RESEED_CTR_FUNC()
static inline uint64_t CAVM_RNM_PF_DRBG_RESEED_CTR_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_RNM_PF_DRBG_RESEED_CTR_FUNC(void)
{
    return 0x87e00f000f08ll;
}

#define typedef_CAVM_RNM_PF_DRBG_RESEED_CTR cavm_rnm_pf_drbg_reseed_ctr_t
#define bustype_CAVM_RNM_PF_DRBG_RESEED_CTR CSR_TYPE_RSL
#define basename_CAVM_RNM_PF_DRBG_RESEED_CTR "RNM_PF_DRBG_RESEED_CTR"
#define device_bar_CAVM_RNM_PF_DRBG_RESEED_CTR 0x0 /* PF_BAR0 */
#define busnum_CAVM_RNM_PF_DRBG_RESEED_CTR 0
#define arguments_CAVM_RNM_PF_DRBG_RESEED_CTR -1,-1,-1,-1

/**
 * Register (RSL) rnm_pf_drbg_reseed_interval
 *
 * RNM DRBG Reseed Interval Register
 * Number of DRBG requests to service before the DRBG engines reseed themselves.
 * Read RNM_PF_DRBG_RESEED_CTR for the number of requests since the last reseed.
 * When RNM_PF_DRBG_RESEED_CTR reaches RNM_PF_DRBG_RESEED_INTERVAL the engines will
 * reseed themselves.
 */
union cavm_rnm_pf_drbg_reseed_interval
{
    uint64_t u;
    struct cavm_rnm_pf_drbg_reseed_interval_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_48_63        : 16;
        uint64_t seedlife              : 48; /**< [ 47:  0](SR/W) Number of requests to service for each DRBG true random seed. */
#else /* Word 0 - Little Endian */
        uint64_t seedlife              : 48; /**< [ 47:  0](SR/W) Number of requests to service for each DRBG true random seed. */
        uint64_t reserved_48_63        : 16;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_rnm_pf_drbg_reseed_interval_s cn; */
};
typedef union cavm_rnm_pf_drbg_reseed_interval cavm_rnm_pf_drbg_reseed_interval_t;

#define CAVM_RNM_PF_DRBG_RESEED_INTERVAL CAVM_RNM_PF_DRBG_RESEED_INTERVAL_FUNC()
static inline uint64_t CAVM_RNM_PF_DRBG_RESEED_INTERVAL_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_RNM_PF_DRBG_RESEED_INTERVAL_FUNC(void)
{
    return 0x87e00f000f00ll;
}

#define typedef_CAVM_RNM_PF_DRBG_RESEED_INTERVAL cavm_rnm_pf_drbg_reseed_interval_t
#define bustype_CAVM_RNM_PF_DRBG_RESEED_INTERVAL CSR_TYPE_RSL
#define basename_CAVM_RNM_PF_DRBG_RESEED_INTERVAL "RNM_PF_DRBG_RESEED_INTERVAL"
#define device_bar_CAVM_RNM_PF_DRBG_RESEED_INTERVAL 0x0 /* PF_BAR0 */
#define busnum_CAVM_RNM_PF_DRBG_RESEED_INTERVAL 0
#define arguments_CAVM_RNM_PF_DRBG_RESEED_INTERVAL -1,-1,-1,-1

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
        uint64_t reserved_25_63        : 39;
        uint64_t err_rep               : 1;  /**< [ 24: 24](RO/H) Error flag for repetition count health test.
                                                                 0 = Normal.
                                                                 1 = Test error, EBG entropy output disabled. */
        uint64_t err_adp               : 1;  /**< [ 23: 23](RO/H) Error flag for adaptive proportion health test.
                                                                 0 = Normal.
                                                                 1 = Test error, EBG entropy output disabled. */
        uint64_t st_done               : 1;  /**< [ 22: 22](RO/H) Done flag for EBG startup tests.
                                                                 0 = Test not complete, EBG entropy output disabled.
                                                                 1 = Test done, EBG entropy output allowed. */
        uint64_t st_err                : 1;  /**< [ 21: 21](RO/H) Error flag for EBG startup tests.
                                                                 0 = Normal.
                                                                 1 = Test error, EBG entropy output disabled. */
        uint64_t ct_err                : 1;  /**< [ 20: 20](RO/H) Error flag for EBG continuous tests.
                                                                 0 = Normal.
                                                                 1 = Test error, EBG entropy output disabled. */
        uint64_t c_rep                 : 9;  /**< [ 19: 11](SR/W/H) Cutoff value for repetition health test, default to H=0.6, a=2(-20), so C=35
                                                                 Only writable when [RNG_RSTN] is 0. */
        uint64_t c_adp                 : 11; /**< [ 10:  0](SR/W/H) Cutoff value for adaptive health test, default to H=0.6, a=2(-20) so C=748
                                                                 Only writable when [RNG_RSTN] is 0. */
#else /* Word 0 - Little Endian */
        uint64_t c_adp                 : 11; /**< [ 10:  0](SR/W/H) Cutoff value for adaptive health test, default to H=0.6, a=2(-20) so C=748
                                                                 Only writable when [RNG_RSTN] is 0. */
        uint64_t c_rep                 : 9;  /**< [ 19: 11](SR/W/H) Cutoff value for repetition health test, default to H=0.6, a=2(-20), so C=35
                                                                 Only writable when [RNG_RSTN] is 0. */
        uint64_t ct_err                : 1;  /**< [ 20: 20](RO/H) Error flag for EBG continuous tests.
                                                                 0 = Normal.
                                                                 1 = Test error, EBG entropy output disabled. */
        uint64_t st_err                : 1;  /**< [ 21: 21](RO/H) Error flag for EBG startup tests.
                                                                 0 = Normal.
                                                                 1 = Test error, EBG entropy output disabled. */
        uint64_t st_done               : 1;  /**< [ 22: 22](RO/H) Done flag for EBG startup tests.
                                                                 0 = Test not complete, EBG entropy output disabled.
                                                                 1 = Test done, EBG entropy output allowed. */
        uint64_t err_adp               : 1;  /**< [ 23: 23](RO/H) Error flag for adaptive proportion health test.
                                                                 0 = Normal.
                                                                 1 = Test error, EBG entropy output disabled. */
        uint64_t err_rep               : 1;  /**< [ 24: 24](RO/H) Error flag for repetition count health test.
                                                                 0 = Normal.
                                                                 1 = Test error, EBG entropy output disabled. */
        uint64_t reserved_25_63        : 39;
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
 * Register (RSL) rnm_pf_trng
 *
 * RNM True Random Number Register
 */
union cavm_rnm_pf_trng
{
    uint64_t u;
    struct cavm_rnm_pf_trng_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t dat                   : 64; /**< [ 63:  0](RO/H) Returns a 64-bit true random number.
                                                                 Must also read RNM_TRNG_RESULT for result status. */
#else /* Word 0 - Little Endian */
        uint64_t dat                   : 64; /**< [ 63:  0](RO/H) Returns a 64-bit true random number.
                                                                 Must also read RNM_TRNG_RESULT for result status. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_rnm_pf_trng_s cn10; */
    /* struct cavm_rnm_pf_trng_s cn10ka_p1; */
    struct cavm_rnm_pf_trng_cn10ka_p2
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t dat                   : 64; /**< [ 63:  0](RO/H) Returns a 64-bit true random number or 0x0 if entropy is unavailable. */
#else /* Word 0 - Little Endian */
        uint64_t dat                   : 64; /**< [ 63:  0](RO/H) Returns a 64-bit true random number or 0x0 if entropy is unavailable. */
#endif /* Word 0 - End */
    } cn10ka_p2;
    /* struct cavm_rnm_pf_trng_cn10ka_p2 cn10kb; */
    /* struct cavm_rnm_pf_trng_s cnf10ka; */
    /* struct cavm_rnm_pf_trng_s cnf10kb; */
};
typedef union cavm_rnm_pf_trng cavm_rnm_pf_trng_t;

#define CAVM_RNM_PF_TRNG CAVM_RNM_PF_TRNG_FUNC()
static inline uint64_t CAVM_RNM_PF_TRNG_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_RNM_PF_TRNG_FUNC(void)
{
    return 0x87e00f000400ll;
}

#define typedef_CAVM_RNM_PF_TRNG cavm_rnm_pf_trng_t
#define bustype_CAVM_RNM_PF_TRNG CSR_TYPE_RSL
#define basename_CAVM_RNM_PF_TRNG "RNM_PF_TRNG"
#define device_bar_CAVM_RNM_PF_TRNG 0x0 /* PF_BAR0 */
#define busnum_CAVM_RNM_PF_TRNG 0
#define arguments_CAVM_RNM_PF_TRNG -1,-1,-1,-1

/**
 * Register (RSL) rnm_pf_trng_dat#
 *
 * RNM True Random Number Register
 */
union cavm_rnm_pf_trng_datx
{
    uint64_t u;
    struct cavm_rnm_pf_trng_datx_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t dat                   : 64; /**< [ 63:  0](RO/H) Returns a 64-bit true random number.
                                                                 Will return 0x0 on either a true randomly-generated zero, or on not being ready.
                                                                 Thus after reading this register software must also read RNM_PF_TRNG_RES to
                                                                 differentiate between these two 0x0 return cases. */
#else /* Word 0 - Little Endian */
        uint64_t dat                   : 64; /**< [ 63:  0](RO/H) Returns a 64-bit true random number.
                                                                 Will return 0x0 on either a true randomly-generated zero, or on not being ready.
                                                                 Thus after reading this register software must also read RNM_PF_TRNG_RES to
                                                                 differentiate between these two 0x0 return cases. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_rnm_pf_trng_datx_s cn; */
};
typedef union cavm_rnm_pf_trng_datx cavm_rnm_pf_trng_datx_t;

static inline uint64_t CAVM_RNM_PF_TRNG_DATX(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_RNM_PF_TRNG_DATX(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CN10KA_BX) && (a<=127))
        return 0x87e00f001000ll + 0x10ll * ((a) & 0x7f);
    if (cavm_is_model(OCTEONTX_CN10KB) && (a<=127))
        return 0x87e00f001000ll + 0x10ll * ((a) & 0x7f);
    __cavm_csr_fatal("RNM_PF_TRNG_DATX", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_RNM_PF_TRNG_DATX(a) cavm_rnm_pf_trng_datx_t
#define bustype_CAVM_RNM_PF_TRNG_DATX(a) CSR_TYPE_RSL
#define basename_CAVM_RNM_PF_TRNG_DATX(a) "RNM_PF_TRNG_DATX"
#define device_bar_CAVM_RNM_PF_TRNG_DATX(a) 0x0 /* PF_BAR0 */
#define busnum_CAVM_RNM_PF_TRNG_DATX(a) (a)
#define arguments_CAVM_RNM_PF_TRNG_DATX(a) (a),-1,-1,-1

/**
 * Register (RSL) rnm_pf_trng_res#
 *
 * RNM Random Result Register
 */
union cavm_rnm_pf_trng_resx
{
    uint64_t u;
    struct cavm_rnm_pf_trng_resx_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_1_63         : 63;
        uint64_t res                   : 1;  /**< [  0:  0](RO/H) Status of the most recent RNM_PF_TRNG_DAT() read to the same given register index.
                                                                 0 = Failure, RNM_PF_TRNG_DAT() also returned 0x0.
                                                                 1 = Success, RNM_PF_TRNG_DAT() returned true random data, which in 2^64 chance may be a 0x0. */
#else /* Word 0 - Little Endian */
        uint64_t res                   : 1;  /**< [  0:  0](RO/H) Status of the most recent RNM_PF_TRNG_DAT() read to the same given register index.
                                                                 0 = Failure, RNM_PF_TRNG_DAT() also returned 0x0.
                                                                 1 = Success, RNM_PF_TRNG_DAT() returned true random data, which in 2^64 chance may be a 0x0. */
        uint64_t reserved_1_63         : 63;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_rnm_pf_trng_resx_s cn; */
};
typedef union cavm_rnm_pf_trng_resx cavm_rnm_pf_trng_resx_t;

static inline uint64_t CAVM_RNM_PF_TRNG_RESX(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_RNM_PF_TRNG_RESX(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CN10KA_BX) && (a<=127))
        return 0x87e00f001008ll + 0x10ll * ((a) & 0x7f);
    if (cavm_is_model(OCTEONTX_CN10KB) && (a<=127))
        return 0x87e00f001008ll + 0x10ll * ((a) & 0x7f);
    __cavm_csr_fatal("RNM_PF_TRNG_RESX", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_RNM_PF_TRNG_RESX(a) cavm_rnm_pf_trng_resx_t
#define bustype_CAVM_RNM_PF_TRNG_RESX(a) CSR_TYPE_RSL
#define basename_CAVM_RNM_PF_TRNG_RESX(a) "RNM_PF_TRNG_RESX"
#define device_bar_CAVM_RNM_PF_TRNG_RESX(a) 0x0 /* PF_BAR0 */
#define busnum_CAVM_RNM_PF_TRNG_RESX(a) (a)
#define arguments_CAVM_RNM_PF_TRNG_RESX(a) (a),-1,-1,-1

/**
 * Register (RSL) rnm_pf_trng_result
 *
 * RNM Random Result Register
 */
union cavm_rnm_pf_trng_result
{
    uint64_t u;
    struct cavm_rnm_pf_trng_result_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_1_63         : 63;
        uint64_t res                   : 1;  /**< [  0:  0](RO/H) Status of RNM_TRNG (True Random Number) Read
                                                                 0 = Failure, RNM_TRNG will also return 0x0.
                                                                 1 = Success, always accompanied by data in RNM_TRNG */
#else /* Word 0 - Little Endian */
        uint64_t res                   : 1;  /**< [  0:  0](RO/H) Status of RNM_TRNG (True Random Number) Read
                                                                 0 = Failure, RNM_TRNG will also return 0x0.
                                                                 1 = Success, always accompanied by data in RNM_TRNG */
        uint64_t reserved_1_63         : 63;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_rnm_pf_trng_result_s cn10; */
    /* struct cavm_rnm_pf_trng_result_s cn10ka_p1; */
    struct cavm_rnm_pf_trng_result_cn10ka_p2
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_0_63         : 64;
#else /* Word 0 - Little Endian */
        uint64_t reserved_0_63         : 64;
#endif /* Word 0 - End */
    } cn10ka_p2;
    /* struct cavm_rnm_pf_trng_result_cn10ka_p2 cn10kb; */
    /* struct cavm_rnm_pf_trng_result_s cnf10ka; */
    /* struct cavm_rnm_pf_trng_result_s cnf10kb; */
};
typedef union cavm_rnm_pf_trng_result cavm_rnm_pf_trng_result_t;

#define CAVM_RNM_PF_TRNG_RESULT CAVM_RNM_PF_TRNG_RESULT_FUNC()
static inline uint64_t CAVM_RNM_PF_TRNG_RESULT_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_RNM_PF_TRNG_RESULT_FUNC(void)
{
    return 0x87e00f000408ll;
}

#define typedef_CAVM_RNM_PF_TRNG_RESULT cavm_rnm_pf_trng_result_t
#define bustype_CAVM_RNM_PF_TRNG_RESULT CSR_TYPE_RSL
#define basename_CAVM_RNM_PF_TRNG_RESULT "RNM_PF_TRNG_RESULT"
#define device_bar_CAVM_RNM_PF_TRNG_RESULT 0x0 /* PF_BAR0 */
#define busnum_CAVM_RNM_PF_TRNG_RESULT 0
#define arguments_CAVM_RNM_PF_TRNG_RESULT -1,-1,-1,-1

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
        uint64_t reserved_0_63         : 64;
#else /* Word 0 - Little Endian */
        uint64_t reserved_0_63         : 64;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_rnm_random_s cn; */
};
typedef union cavm_rnm_random cavm_rnm_random_t;

#define CAVM_RNM_RANDOM CAVM_RNM_RANDOM_FUNC()
static inline uint64_t CAVM_RNM_RANDOM_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_RNM_RANDOM_FUNC(void)
{
    if (cavm_is_model(OCTEONTX_CN10KA_AX))
        return 0x80f000800000ll;
    if (cavm_is_model(OCTEONTX_CNF10KA))
        return 0x80f000800000ll;
    if (cavm_is_model(OCTEONTX_CNF10KB))
        return 0x80f000800000ll;
    __cavm_csr_fatal("RNM_RANDOM", 0, 0, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_RNM_RANDOM cavm_rnm_random_t
#define bustype_CAVM_RNM_RANDOM CSR_TYPE_NCB
#define basename_CAVM_RNM_RANDOM "RNM_RANDOM"
#define device_bar_CAVM_RNM_RANDOM 0x0 /* VF_BAR0 */
#define busnum_CAVM_RNM_RANDOM 0
#define arguments_CAVM_RNM_RANDOM -1,-1,-1,-1

/**
 * Register (NCB) rnm_trng
 *
 * RNM True Random Number Register
 */
union cavm_rnm_trng
{
    uint64_t u;
    struct cavm_rnm_trng_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t dat                   : 64; /**< [ 63:  0](RO/H) Returns a 64-bit true random number.
                                                                 Must also read RNM_TRNG_RESULT for result status. */
#else /* Word 0 - Little Endian */
        uint64_t dat                   : 64; /**< [ 63:  0](RO/H) Returns a 64-bit true random number.
                                                                 Must also read RNM_TRNG_RESULT for result status. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_rnm_trng_s cn10; */
    /* struct cavm_rnm_trng_s cn10ka_p1; */
    struct cavm_rnm_trng_cn10ka_p2
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t dat                   : 64; /**< [ 63:  0](RO/H) Returns a 64-bit true random number or 0x0 if entropy is unavailable. */
#else /* Word 0 - Little Endian */
        uint64_t dat                   : 64; /**< [ 63:  0](RO/H) Returns a 64-bit true random number or 0x0 if entropy is unavailable. */
#endif /* Word 0 - End */
    } cn10ka_p2;
    /* struct cavm_rnm_trng_cn10ka_p2 cn10kb; */
    /* struct cavm_rnm_trng_s cnf10ka; */
    /* struct cavm_rnm_trng_s cnf10kb; */
};
typedef union cavm_rnm_trng cavm_rnm_trng_t;

#define CAVM_RNM_TRNG CAVM_RNM_TRNG_FUNC()
static inline uint64_t CAVM_RNM_TRNG_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_RNM_TRNG_FUNC(void)
{
    return 0x80f000800010ll;
}

#define typedef_CAVM_RNM_TRNG cavm_rnm_trng_t
#define bustype_CAVM_RNM_TRNG CSR_TYPE_NCB
#define basename_CAVM_RNM_TRNG "RNM_TRNG"
#define device_bar_CAVM_RNM_TRNG 0x0 /* VF_BAR0 */
#define busnum_CAVM_RNM_TRNG 0
#define arguments_CAVM_RNM_TRNG -1,-1,-1,-1

/**
 * Register (NCB) rnm_trng_result
 *
 * RNM Random Result Register
 */
union cavm_rnm_trng_result
{
    uint64_t u;
    struct cavm_rnm_trng_result_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_1_63         : 63;
        uint64_t res                   : 1;  /**< [  0:  0](RO/H) Status of RNM_TRNG (True Random Number) Read
                                                                 0 = Failure, RNM_TRNG will also return 0x0.
                                                                 1 = Success, always accompanied by data in RNM_TRNG */
#else /* Word 0 - Little Endian */
        uint64_t res                   : 1;  /**< [  0:  0](RO/H) Status of RNM_TRNG (True Random Number) Read
                                                                 0 = Failure, RNM_TRNG will also return 0x0.
                                                                 1 = Success, always accompanied by data in RNM_TRNG */
        uint64_t reserved_1_63         : 63;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_rnm_trng_result_s cn10; */
    /* struct cavm_rnm_trng_result_s cn10ka_p1; */
    struct cavm_rnm_trng_result_cn10ka_p2
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_0_63         : 64;
#else /* Word 0 - Little Endian */
        uint64_t reserved_0_63         : 64;
#endif /* Word 0 - End */
    } cn10ka_p2;
    /* struct cavm_rnm_trng_result_cn10ka_p2 cn10kb; */
    /* struct cavm_rnm_trng_result_s cnf10ka; */
    /* struct cavm_rnm_trng_result_s cnf10kb; */
};
typedef union cavm_rnm_trng_result cavm_rnm_trng_result_t;

#define CAVM_RNM_TRNG_RESULT CAVM_RNM_TRNG_RESULT_FUNC()
static inline uint64_t CAVM_RNM_TRNG_RESULT_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_RNM_TRNG_RESULT_FUNC(void)
{
    return 0x80f000800018ll;
}

#define typedef_CAVM_RNM_TRNG_RESULT cavm_rnm_trng_result_t
#define bustype_CAVM_RNM_TRNG_RESULT CSR_TYPE_NCB
#define basename_CAVM_RNM_TRNG_RESULT "RNM_TRNG_RESULT"
#define device_bar_CAVM_RNM_TRNG_RESULT 0x0 /* VF_BAR0 */
#define busnum_CAVM_RNM_TRNG_RESULT 0
#define arguments_CAVM_RNM_TRNG_RESULT -1,-1,-1,-1

/**
 * Register (NCB) rnm_vf_drbg_reseed_ctr
 *
 * RNM DRBG Reseed Counter Register
 * Number of DRBG engine requests serviced since the last reseed.
 * Read RNM_VF_DRBG_RESEED_INTERVAL for the number of requests before a reseed occurs.
 * When RNM_VF_DRBG_RESEED_CTR reaches RNM_VF_DRBG_RESEED_INTERVAL the engines will reseed
 * themselves.
 */
union cavm_rnm_vf_drbg_reseed_ctr
{
    uint64_t u;
    struct cavm_rnm_vf_drbg_reseed_ctr_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_48_63        : 16;
        uint64_t ctr                   : 48; /**< [ 47:  0](RO/H) Number of DRBG engine requests services since the last reseed. */
#else /* Word 0 - Little Endian */
        uint64_t ctr                   : 48; /**< [ 47:  0](RO/H) Number of DRBG engine requests services since the last reseed. */
        uint64_t reserved_48_63        : 16;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_rnm_vf_drbg_reseed_ctr_s cn; */
};
typedef union cavm_rnm_vf_drbg_reseed_ctr cavm_rnm_vf_drbg_reseed_ctr_t;

#define CAVM_RNM_VF_DRBG_RESEED_CTR CAVM_RNM_VF_DRBG_RESEED_CTR_FUNC()
static inline uint64_t CAVM_RNM_VF_DRBG_RESEED_CTR_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_RNM_VF_DRBG_RESEED_CTR_FUNC(void)
{
    return 0x80f000800058ll;
}

#define typedef_CAVM_RNM_VF_DRBG_RESEED_CTR cavm_rnm_vf_drbg_reseed_ctr_t
#define bustype_CAVM_RNM_VF_DRBG_RESEED_CTR CSR_TYPE_NCB
#define basename_CAVM_RNM_VF_DRBG_RESEED_CTR "RNM_VF_DRBG_RESEED_CTR"
#define device_bar_CAVM_RNM_VF_DRBG_RESEED_CTR 0x0 /* VF_BAR0 */
#define busnum_CAVM_RNM_VF_DRBG_RESEED_CTR 0
#define arguments_CAVM_RNM_VF_DRBG_RESEED_CTR -1,-1,-1,-1

/**
 * Register (NCB) rnm_vf_drbg_reseed_interval
 *
 * RNM DRBG Reseed Interval Register
 * Number of DRBG requests to service before the DRBG engines reseed themselves.
 * Read RNM_VF_DRBG_RESEED_CTR for the number of requests since the last reseed.
 * When RNM_VF_DRBG_RESEED_CTR reaches RNM_VF_DRBG_RESEED_INTERVAL the engines will
 * reseed themselves.
 */
union cavm_rnm_vf_drbg_reseed_interval
{
    uint64_t u;
    struct cavm_rnm_vf_drbg_reseed_interval_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_48_63        : 16;
        uint64_t seedlife              : 48; /**< [ 47:  0](RO/H) Number of requests to service for each DRBG true random seed. */
#else /* Word 0 - Little Endian */
        uint64_t seedlife              : 48; /**< [ 47:  0](RO/H) Number of requests to service for each DRBG true random seed. */
        uint64_t reserved_48_63        : 16;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_rnm_vf_drbg_reseed_interval_s cn; */
};
typedef union cavm_rnm_vf_drbg_reseed_interval cavm_rnm_vf_drbg_reseed_interval_t;

#define CAVM_RNM_VF_DRBG_RESEED_INTERVAL CAVM_RNM_VF_DRBG_RESEED_INTERVAL_FUNC()
static inline uint64_t CAVM_RNM_VF_DRBG_RESEED_INTERVAL_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_RNM_VF_DRBG_RESEED_INTERVAL_FUNC(void)
{
    return 0x80f000800050ll;
}

#define typedef_CAVM_RNM_VF_DRBG_RESEED_INTERVAL cavm_rnm_vf_drbg_reseed_interval_t
#define bustype_CAVM_RNM_VF_DRBG_RESEED_INTERVAL CSR_TYPE_NCB
#define basename_CAVM_RNM_VF_DRBG_RESEED_INTERVAL "RNM_VF_DRBG_RESEED_INTERVAL"
#define device_bar_CAVM_RNM_VF_DRBG_RESEED_INTERVAL 0x0 /* VF_BAR0 */
#define busnum_CAVM_RNM_VF_DRBG_RESEED_INTERVAL 0
#define arguments_CAVM_RNM_VF_DRBG_RESEED_INTERVAL -1,-1,-1,-1

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
        uint64_t reserved_25_63        : 39;
        uint64_t err_rep               : 1;  /**< [ 24: 24](RO/H) Error flag for repetition count health test.
                                                                 0 = Normal.
                                                                 1 = Test error, EBG entropy output disabled. */
        uint64_t err_adp               : 1;  /**< [ 23: 23](RO/H) Error flag for adaptive proportion health test.
                                                                 0 = Normal.
                                                                 1 = Test error, EBG entropy output disabled. */
        uint64_t st_done               : 1;  /**< [ 22: 22](RO/H) Done flag for EBG startup tests.
                                                                 0 = Test not complete, EBG entropy output disabled.
                                                                 1 = Test done, EBG entropy output allowed. */
        uint64_t st_err                : 1;  /**< [ 21: 21](RO/H) Error flag for EBG startup tests.
                                                                 0 = Normal.
                                                                 1 = Test error, EBG entropy output disabled. */
        uint64_t ct_err                : 1;  /**< [ 20: 20](RO/H) Error flag for EBG continuous tests.
                                                                 0 = Normal.
                                                                 1 = Test error, EBG entropy output disabled. */
        uint64_t reserved_0_19         : 20;
#else /* Word 0 - Little Endian */
        uint64_t reserved_0_19         : 20;
        uint64_t ct_err                : 1;  /**< [ 20: 20](RO/H) Error flag for EBG continuous tests.
                                                                 0 = Normal.
                                                                 1 = Test error, EBG entropy output disabled. */
        uint64_t st_err                : 1;  /**< [ 21: 21](RO/H) Error flag for EBG startup tests.
                                                                 0 = Normal.
                                                                 1 = Test error, EBG entropy output disabled. */
        uint64_t st_done               : 1;  /**< [ 22: 22](RO/H) Done flag for EBG startup tests.
                                                                 0 = Test not complete, EBG entropy output disabled.
                                                                 1 = Test done, EBG entropy output allowed. */
        uint64_t err_adp               : 1;  /**< [ 23: 23](RO/H) Error flag for adaptive proportion health test.
                                                                 0 = Normal.
                                                                 1 = Test error, EBG entropy output disabled. */
        uint64_t err_rep               : 1;  /**< [ 24: 24](RO/H) Error flag for repetition count health test.
                                                                 0 = Normal.
                                                                 1 = Test error, EBG entropy output disabled. */
        uint64_t reserved_25_63        : 39;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_rnm_vf_ebg_health_s cn; */
};
typedef union cavm_rnm_vf_ebg_health cavm_rnm_vf_ebg_health_t;

#define CAVM_RNM_VF_EBG_HEALTH CAVM_RNM_VF_EBG_HEALTH_FUNC()
static inline uint64_t CAVM_RNM_VF_EBG_HEALTH_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_RNM_VF_EBG_HEALTH_FUNC(void)
{
    return 0x80f000800048ll;
}

#define typedef_CAVM_RNM_VF_EBG_HEALTH cavm_rnm_vf_ebg_health_t
#define bustype_CAVM_RNM_VF_EBG_HEALTH CSR_TYPE_NCB
#define basename_CAVM_RNM_VF_EBG_HEALTH "RNM_VF_EBG_HEALTH"
#define device_bar_CAVM_RNM_VF_EBG_HEALTH 0x0 /* VF_BAR0 */
#define busnum_CAVM_RNM_VF_EBG_HEALTH 0
#define arguments_CAVM_RNM_VF_EBG_HEALTH -1,-1,-1,-1

/**
 * Register (NCB) rnm_vf_trng_dat#
 *
 * RNM True Random Number Register
 */
union cavm_rnm_vf_trng_datx
{
    uint64_t u;
    struct cavm_rnm_vf_trng_datx_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t dat                   : 64; /**< [ 63:  0](RO/H) Returns a 64-bit true random number.
                                                                 Will return 0x0 on either a true randomly-generated zero, or on not being ready.
                                                                 Thus after reading this register software must also read RNM_VF_TRNG_RES to
                                                                 differentiate between these two 0x0 return cases. */
#else /* Word 0 - Little Endian */
        uint64_t dat                   : 64; /**< [ 63:  0](RO/H) Returns a 64-bit true random number.
                                                                 Will return 0x0 on either a true randomly-generated zero, or on not being ready.
                                                                 Thus after reading this register software must also read RNM_VF_TRNG_RES to
                                                                 differentiate between these two 0x0 return cases. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_rnm_vf_trng_datx_s cn; */
};
typedef union cavm_rnm_vf_trng_datx cavm_rnm_vf_trng_datx_t;

static inline uint64_t CAVM_RNM_VF_TRNG_DATX(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_RNM_VF_TRNG_DATX(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CN10KA_BX) && (a<=127))
        return 0x80f000800800ll + 0x10ll * ((a) & 0x7f);
    if (cavm_is_model(OCTEONTX_CN10KB) && (a<=127))
        return 0x80f000800800ll + 0x10ll * ((a) & 0x7f);
    __cavm_csr_fatal("RNM_VF_TRNG_DATX", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_RNM_VF_TRNG_DATX(a) cavm_rnm_vf_trng_datx_t
#define bustype_CAVM_RNM_VF_TRNG_DATX(a) CSR_TYPE_NCB
#define basename_CAVM_RNM_VF_TRNG_DATX(a) "RNM_VF_TRNG_DATX"
#define device_bar_CAVM_RNM_VF_TRNG_DATX(a) 0x0 /* VF_BAR0 */
#define busnum_CAVM_RNM_VF_TRNG_DATX(a) (a)
#define arguments_CAVM_RNM_VF_TRNG_DATX(a) (a),-1,-1,-1

/**
 * Register (NCB) rnm_vf_trng_res#
 *
 * RNM Random Result Register
 */
union cavm_rnm_vf_trng_resx
{
    uint64_t u;
    struct cavm_rnm_vf_trng_resx_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_1_63         : 63;
        uint64_t res                   : 1;  /**< [  0:  0](RO/H) Status of the most recent RNM_VF_TRNG_DAT() read to the same given register index.
                                                                 0 = Failure, RNM_VF_TRNG_DAT() also returned 0x0.
                                                                 1 = Success, RNM_VF_TRNG_DAT() returned true random data, which in 2^64 chance may be a 0x0. */
#else /* Word 0 - Little Endian */
        uint64_t res                   : 1;  /**< [  0:  0](RO/H) Status of the most recent RNM_VF_TRNG_DAT() read to the same given register index.
                                                                 0 = Failure, RNM_VF_TRNG_DAT() also returned 0x0.
                                                                 1 = Success, RNM_VF_TRNG_DAT() returned true random data, which in 2^64 chance may be a 0x0. */
        uint64_t reserved_1_63         : 63;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_rnm_vf_trng_resx_s cn; */
};
typedef union cavm_rnm_vf_trng_resx cavm_rnm_vf_trng_resx_t;

static inline uint64_t CAVM_RNM_VF_TRNG_RESX(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_RNM_VF_TRNG_RESX(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CN10KA_BX) && (a<=127))
        return 0x80f000800808ll + 0x10ll * ((a) & 0x7f);
    if (cavm_is_model(OCTEONTX_CN10KB) && (a<=127))
        return 0x80f000800808ll + 0x10ll * ((a) & 0x7f);
    __cavm_csr_fatal("RNM_VF_TRNG_RESX", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_RNM_VF_TRNG_RESX(a) cavm_rnm_vf_trng_resx_t
#define bustype_CAVM_RNM_VF_TRNG_RESX(a) CSR_TYPE_NCB
#define basename_CAVM_RNM_VF_TRNG_RESX(a) "RNM_VF_TRNG_RESX"
#define device_bar_CAVM_RNM_VF_TRNG_RESX(a) 0x0 /* VF_BAR0 */
#define busnum_CAVM_RNM_VF_TRNG_RESX(a) (a)
#define arguments_CAVM_RNM_VF_TRNG_RESX(a) (a),-1,-1,-1

#endif /* __CAVM_CSRS_RNM_H__ */
