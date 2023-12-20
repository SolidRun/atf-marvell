#ifndef __CAVM_CSRS_SDEC_H__
#define __CAVM_CSRS_SDEC_H__
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
 * SDEC.
 *
 * This file is auto generated. Do not edit.
 *
 */

/**
 * Enumeration sdec_bar_e
 */
#define CAVM_SDEC_BAR_E_SDECX_PF_BAR2(a) (0x87e041000000ll + 0x80000ll * (a))
#define CAVM_SDEC_BAR_E_SDECX_PF_BAR2_SIZE 0x40000ull

/**
 * Register (RSL) sdec#_ab#_bytes_pc
 *
 * SDEC Total Bytes Performance Counter Register
 */
union cavm_sdecx_abx_bytes_pc
{
    uint64_t u;
    struct cavm_sdecx_abx_bytes_pc_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t cnt                   : 64; /**< [ 63:  0](R/W/H) Count total bytes sent. */
#else /* Word 0 - Little Endian */
        uint64_t cnt                   : 64; /**< [ 63:  0](R/W/H) Count total bytes sent. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_sdecx_abx_bytes_pc_s cn; */
};
typedef union cavm_sdecx_abx_bytes_pc cavm_sdecx_abx_bytes_pc_t;

static inline uint64_t CAVM_SDECX_ABX_BYTES_PC(uint64_t a, uint64_t b) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_SDECX_ABX_BYTES_PC(uint64_t a, uint64_t b)
{
    if (cavm_is_model(OCTEONTX_CNF20KA) && ((a<=2) && (b<=1)))
        return 0x87e0410000f0ll + 0x80000ll * ((a) & 0x3) + 0x10000ll * ((b) & 0x1);
    __cavm_csr_fatal("SDECX_ABX_BYTES_PC", 2, a, b, 0, 0, 0, 0);
}

#define typedef_CAVM_SDECX_ABX_BYTES_PC(a,b) cavm_sdecx_abx_bytes_pc_t
#define bustype_CAVM_SDECX_ABX_BYTES_PC(a,b) CSR_TYPE_RSL
#define basename_CAVM_SDECX_ABX_BYTES_PC(a,b) "SDECX_ABX_BYTES_PC"
#define device_bar_CAVM_SDECX_ABX_BYTES_PC(a,b) 0x2 /* PF_BAR2 */
#define busnum_CAVM_SDECX_ABX_BYTES_PC(a,b) (a)
#define arguments_CAVM_SDECX_ABX_BYTES_PC(a,b) (a),(b),-1,-1

/**
 * Register (RSL) sdec#_ab#_config
 *
 * SDEC Configuration Register
 */
union cavm_sdecx_abx_config
{
    uint64_t u;
    struct cavm_sdecx_abx_config_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_1_63         : 63;
        uint64_t force_cond_clk_en     : 1;  /**< [  0:  0](R/W) Force the conditional clocks active within the block. For diagnostic use only. */
#else /* Word 0 - Little Endian */
        uint64_t force_cond_clk_en     : 1;  /**< [  0:  0](R/W) Force the conditional clocks active within the block. For diagnostic use only. */
        uint64_t reserved_1_63         : 63;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_sdecx_abx_config_s cn; */
};
typedef union cavm_sdecx_abx_config cavm_sdecx_abx_config_t;

static inline uint64_t CAVM_SDECX_ABX_CONFIG(uint64_t a, uint64_t b) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_SDECX_ABX_CONFIG(uint64_t a, uint64_t b)
{
    if (cavm_is_model(OCTEONTX_CNF20KA) && ((a<=2) && (b<=1)))
        return 0x87e041000020ll + 0x80000ll * ((a) & 0x3) + 0x10000ll * ((b) & 0x1);
    __cavm_csr_fatal("SDECX_ABX_CONFIG", 2, a, b, 0, 0, 0, 0);
}

#define typedef_CAVM_SDECX_ABX_CONFIG(a,b) cavm_sdecx_abx_config_t
#define bustype_CAVM_SDECX_ABX_CONFIG(a,b) CSR_TYPE_RSL
#define basename_CAVM_SDECX_ABX_CONFIG(a,b) "SDECX_ABX_CONFIG"
#define device_bar_CAVM_SDECX_ABX_CONFIG(a,b) 0x2 /* PF_BAR2 */
#define busnum_CAVM_SDECX_ABX_CONFIG(a,b) (a)
#define arguments_CAVM_SDECX_ABX_CONFIG(a,b) (a),(b),-1,-1

/**
 * Register (RSL) sdec#_ab#_control0
 *
 * SDEC AB Control Register
 */
union cavm_sdecx_abx_control0
{
    uint64_t u;
    struct cavm_sdecx_abx_control0_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t jobid2                : 16; /**< [ 63: 48](R/W/H) Job ID for slot 2. */
        uint64_t jobid1                : 16; /**< [ 47: 32](R/W/H) Job ID for slot 1. */
        uint64_t jobid0                : 16; /**< [ 31: 16](R/W/H) Job ID for slot 0. */
        uint64_t reserved_3_15         : 13;
        uint64_t start2                : 1;  /**< [  2:  2](R/W/H) Start processing job in slot 2. */
        uint64_t start1                : 1;  /**< [  1:  1](R/W/H) Start processing job in slot 1. */
        uint64_t start0                : 1;  /**< [  0:  0](R/W/H) Start processing job in slot 0. */
#else /* Word 0 - Little Endian */
        uint64_t start0                : 1;  /**< [  0:  0](R/W/H) Start processing job in slot 0. */
        uint64_t start1                : 1;  /**< [  1:  1](R/W/H) Start processing job in slot 1. */
        uint64_t start2                : 1;  /**< [  2:  2](R/W/H) Start processing job in slot 2. */
        uint64_t reserved_3_15         : 13;
        uint64_t jobid0                : 16; /**< [ 31: 16](R/W/H) Job ID for slot 0. */
        uint64_t jobid1                : 16; /**< [ 47: 32](R/W/H) Job ID for slot 1. */
        uint64_t jobid2                : 16; /**< [ 63: 48](R/W/H) Job ID for slot 2. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_sdecx_abx_control0_s cn; */
};
typedef union cavm_sdecx_abx_control0 cavm_sdecx_abx_control0_t;

static inline uint64_t CAVM_SDECX_ABX_CONTROL0(uint64_t a, uint64_t b) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_SDECX_ABX_CONTROL0(uint64_t a, uint64_t b)
{
    if (cavm_is_model(OCTEONTX_CNF20KA) && ((a<=2) && (b<=1)))
        return 0x87e041000000ll + 0x80000ll * ((a) & 0x3) + 0x10000ll * ((b) & 0x1);
    __cavm_csr_fatal("SDECX_ABX_CONTROL0", 2, a, b, 0, 0, 0, 0);
}

#define typedef_CAVM_SDECX_ABX_CONTROL0(a,b) cavm_sdecx_abx_control0_t
#define bustype_CAVM_SDECX_ABX_CONTROL0(a,b) CSR_TYPE_RSL
#define basename_CAVM_SDECX_ABX_CONTROL0(a,b) "SDECX_ABX_CONTROL0"
#define device_bar_CAVM_SDECX_ABX_CONTROL0(a,b) 0x2 /* PF_BAR2 */
#define busnum_CAVM_SDECX_ABX_CONTROL0(a,b) (a)
#define arguments_CAVM_SDECX_ABX_CONTROL0(a,b) (a),(b),-1,-1

/**
 * Register (RSL) sdec#_ab#_error_enable0
 *
 * SDEC Error Enable Register 0
 * This register enables reporting the source of read DMA overflow/underflow errors.
 */
union cavm_sdecx_abx_error_enable0
{
    uint64_t u;
    struct cavm_sdecx_abx_error_enable0_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_5_63         : 59;
        uint64_t rp0_of_en             : 1;  /**< [  4:  4](R/W) Read port 0 overflow. */
        uint64_t reserved_1_3          : 3;
        uint64_t rp0_uf_en             : 1;  /**< [  0:  0](R/W) Read port 0 underflow. */
#else /* Word 0 - Little Endian */
        uint64_t rp0_uf_en             : 1;  /**< [  0:  0](R/W) Read port 0 underflow. */
        uint64_t reserved_1_3          : 3;
        uint64_t rp0_of_en             : 1;  /**< [  4:  4](R/W) Read port 0 overflow. */
        uint64_t reserved_5_63         : 59;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_sdecx_abx_error_enable0_s cn; */
};
typedef union cavm_sdecx_abx_error_enable0 cavm_sdecx_abx_error_enable0_t;

static inline uint64_t CAVM_SDECX_ABX_ERROR_ENABLE0(uint64_t a, uint64_t b) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_SDECX_ABX_ERROR_ENABLE0(uint64_t a, uint64_t b)
{
    if (cavm_is_model(OCTEONTX_CNF20KA) && ((a<=2) && (b<=1)))
        return 0x87e041000040ll + 0x80000ll * ((a) & 0x3) + 0x10000ll * ((b) & 0x1);
    __cavm_csr_fatal("SDECX_ABX_ERROR_ENABLE0", 2, a, b, 0, 0, 0, 0);
}

#define typedef_CAVM_SDECX_ABX_ERROR_ENABLE0(a,b) cavm_sdecx_abx_error_enable0_t
#define bustype_CAVM_SDECX_ABX_ERROR_ENABLE0(a,b) CSR_TYPE_RSL
#define basename_CAVM_SDECX_ABX_ERROR_ENABLE0(a,b) "SDECX_ABX_ERROR_ENABLE0"
#define device_bar_CAVM_SDECX_ABX_ERROR_ENABLE0(a,b) 0x2 /* PF_BAR2 */
#define busnum_CAVM_SDECX_ABX_ERROR_ENABLE0(a,b) (a)
#define arguments_CAVM_SDECX_ABX_ERROR_ENABLE0(a,b) (a),(b),-1,-1

/**
 * Register (RSL) sdec#_ab#_error_enable1
 *
 * SDEC Error Enable Register 1
 * This register enables reporting of job configuration errors.
 */
union cavm_sdecx_abx_error_enable1
{
    uint64_t u;
    struct cavm_sdecx_abx_error_enable1_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_1_63         : 63;
        uint64_t num_prb_zero_en       : 1;  /**< [  0:  0](R/W) Enable error reporting of illegal NUM_PRB value. */
#else /* Word 0 - Little Endian */
        uint64_t num_prb_zero_en       : 1;  /**< [  0:  0](R/W) Enable error reporting of illegal NUM_PRB value. */
        uint64_t reserved_1_63         : 63;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_sdecx_abx_error_enable1_s cn; */
};
typedef union cavm_sdecx_abx_error_enable1 cavm_sdecx_abx_error_enable1_t;

static inline uint64_t CAVM_SDECX_ABX_ERROR_ENABLE1(uint64_t a, uint64_t b) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_SDECX_ABX_ERROR_ENABLE1(uint64_t a, uint64_t b)
{
    if (cavm_is_model(OCTEONTX_CNF20KA) && ((a<=2) && (b<=1)))
        return 0x87e041000058ll + 0x80000ll * ((a) & 0x3) + 0x10000ll * ((b) & 0x1);
    __cavm_csr_fatal("SDECX_ABX_ERROR_ENABLE1", 2, a, b, 0, 0, 0, 0);
}

#define typedef_CAVM_SDECX_ABX_ERROR_ENABLE1(a,b) cavm_sdecx_abx_error_enable1_t
#define bustype_CAVM_SDECX_ABX_ERROR_ENABLE1(a,b) CSR_TYPE_RSL
#define basename_CAVM_SDECX_ABX_ERROR_ENABLE1(a,b) "SDECX_ABX_ERROR_ENABLE1"
#define device_bar_CAVM_SDECX_ABX_ERROR_ENABLE1(a,b) 0x2 /* PF_BAR2 */
#define busnum_CAVM_SDECX_ABX_ERROR_ENABLE1(a,b) (a)
#define arguments_CAVM_SDECX_ABX_ERROR_ENABLE1(a,b) (a),(b),-1,-1

/**
 * Register (RSL) sdec#_ab#_error_fatal
 *
 * SDEC Error Fatal Reporting Registers
 */
union cavm_sdecx_abx_error_fatal
{
    uint64_t u;
    struct cavm_sdecx_abx_error_fatal_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_6_63         : 58;
        uint64_t num_prb_zero          : 1;  /**< [  5:  5](R/W) Number of PRBs in active group is zero.
                                                                 0 = Reported as non-fatal.
                                                                 1 = Reported as MHBW fatal error. */
        uint64_t rp0_of                : 1;  /**< [  4:  4](R/W) Read port 0 overflow.
                                                                 0 = Reported as non-fatal.
                                                                 1 = Reported as MHBW fatal error. */
        uint64_t reserved_1_3          : 3;
        uint64_t rp0_uf                : 1;  /**< [  0:  0](R/W) Read port 0 underflow.
                                                                 0 = Reported as non-fatal.
                                                                 1 = Reported as MHBW fatal error. */
#else /* Word 0 - Little Endian */
        uint64_t rp0_uf                : 1;  /**< [  0:  0](R/W) Read port 0 underflow.
                                                                 0 = Reported as non-fatal.
                                                                 1 = Reported as MHBW fatal error. */
        uint64_t reserved_1_3          : 3;
        uint64_t rp0_of                : 1;  /**< [  4:  4](R/W) Read port 0 overflow.
                                                                 0 = Reported as non-fatal.
                                                                 1 = Reported as MHBW fatal error. */
        uint64_t num_prb_zero          : 1;  /**< [  5:  5](R/W) Number of PRBs in active group is zero.
                                                                 0 = Reported as non-fatal.
                                                                 1 = Reported as MHBW fatal error. */
        uint64_t reserved_6_63         : 58;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_sdecx_abx_error_fatal_s cn; */
};
typedef union cavm_sdecx_abx_error_fatal cavm_sdecx_abx_error_fatal_t;

static inline uint64_t CAVM_SDECX_ABX_ERROR_FATAL(uint64_t a, uint64_t b) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_SDECX_ABX_ERROR_FATAL(uint64_t a, uint64_t b)
{
    if (cavm_is_model(OCTEONTX_CNF20KA) && ((a<=2) && (b<=1)))
        return 0x87e041000068ll + 0x80000ll * ((a) & 0x3) + 0x10000ll * ((b) & 0x1);
    __cavm_csr_fatal("SDECX_ABX_ERROR_FATAL", 2, a, b, 0, 0, 0, 0);
}

#define typedef_CAVM_SDECX_ABX_ERROR_FATAL(a,b) cavm_sdecx_abx_error_fatal_t
#define bustype_CAVM_SDECX_ABX_ERROR_FATAL(a,b) CSR_TYPE_RSL
#define basename_CAVM_SDECX_ABX_ERROR_FATAL(a,b) "SDECX_ABX_ERROR_FATAL"
#define device_bar_CAVM_SDECX_ABX_ERROR_FATAL(a,b) 0x2 /* PF_BAR2 */
#define busnum_CAVM_SDECX_ABX_ERROR_FATAL(a,b) (a)
#define arguments_CAVM_SDECX_ABX_ERROR_FATAL(a,b) (a),(b),-1,-1

/**
 * Register (RSL) sdec#_ab#_error_source0
 *
 * SDEC Error Source Register 0
 * This register reports the source of read DMA overflow/underflow errors.
 */
union cavm_sdecx_abx_error_source0
{
    uint64_t u;
    struct cavm_sdecx_abx_error_source0_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_32_63        : 32;
        uint64_t rp0_jobid             : 16; /**< [ 31: 16](RO/H) Job ID for read port 0 overflow/underflow. */
        uint64_t reserved_5_15         : 11;
        uint64_t rp0_of                : 1;  /**< [  4:  4](R/W1C/H) Read port 0 overflow. */
        uint64_t reserved_1_3          : 3;
        uint64_t rp0_uf                : 1;  /**< [  0:  0](R/W1C/H) Read port 0 underflow. */
#else /* Word 0 - Little Endian */
        uint64_t rp0_uf                : 1;  /**< [  0:  0](R/W1C/H) Read port 0 underflow. */
        uint64_t reserved_1_3          : 3;
        uint64_t rp0_of                : 1;  /**< [  4:  4](R/W1C/H) Read port 0 overflow. */
        uint64_t reserved_5_15         : 11;
        uint64_t rp0_jobid             : 16; /**< [ 31: 16](RO/H) Job ID for read port 0 overflow/underflow. */
        uint64_t reserved_32_63        : 32;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_sdecx_abx_error_source0_s cn; */
};
typedef union cavm_sdecx_abx_error_source0 cavm_sdecx_abx_error_source0_t;

static inline uint64_t CAVM_SDECX_ABX_ERROR_SOURCE0(uint64_t a, uint64_t b) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_SDECX_ABX_ERROR_SOURCE0(uint64_t a, uint64_t b)
{
    if (cavm_is_model(OCTEONTX_CNF20KA) && ((a<=2) && (b<=1)))
        return 0x87e041000030ll + 0x80000ll * ((a) & 0x3) + 0x10000ll * ((b) & 0x1);
    __cavm_csr_fatal("SDECX_ABX_ERROR_SOURCE0", 2, a, b, 0, 0, 0, 0);
}

#define typedef_CAVM_SDECX_ABX_ERROR_SOURCE0(a,b) cavm_sdecx_abx_error_source0_t
#define bustype_CAVM_SDECX_ABX_ERROR_SOURCE0(a,b) CSR_TYPE_RSL
#define basename_CAVM_SDECX_ABX_ERROR_SOURCE0(a,b) "SDECX_ABX_ERROR_SOURCE0"
#define device_bar_CAVM_SDECX_ABX_ERROR_SOURCE0(a,b) 0x2 /* PF_BAR2 */
#define busnum_CAVM_SDECX_ABX_ERROR_SOURCE0(a,b) (a)
#define arguments_CAVM_SDECX_ABX_ERROR_SOURCE0(a,b) (a),(b),-1,-1

/**
 * Register (RSL) sdec#_ab#_error_source1
 *
 * SDEC Error Source Register 1
 * This register contains information about job configuration errors.
 */
union cavm_sdecx_abx_error_source1
{
    uint64_t u;
    struct cavm_sdecx_abx_error_source1_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_1_63         : 63;
        uint64_t num_prb_zero          : 1;  /**< [  0:  0](R/W1C/H) Set if the number of PRBs in an active group is zero (valid range is 1..1023).
                                                                 The number of PRBs in each group is specified in SDEC()_AB()_JDX()_CFG0,
                                                                 SDEC()_AB()_JDX()_CFG1 and SDEC()_AB()_JDX()_CFG2. */
#else /* Word 0 - Little Endian */
        uint64_t num_prb_zero          : 1;  /**< [  0:  0](R/W1C/H) Set if the number of PRBs in an active group is zero (valid range is 1..1023).
                                                                 The number of PRBs in each group is specified in SDEC()_AB()_JDX()_CFG0,
                                                                 SDEC()_AB()_JDX()_CFG1 and SDEC()_AB()_JDX()_CFG2. */
        uint64_t reserved_1_63         : 63;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_sdecx_abx_error_source1_s cn; */
};
typedef union cavm_sdecx_abx_error_source1 cavm_sdecx_abx_error_source1_t;

static inline uint64_t CAVM_SDECX_ABX_ERROR_SOURCE1(uint64_t a, uint64_t b) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_SDECX_ABX_ERROR_SOURCE1(uint64_t a, uint64_t b)
{
    if (cavm_is_model(OCTEONTX_CNF20KA) && ((a<=2) && (b<=1)))
        return 0x87e041000050ll + 0x80000ll * ((a) & 0x3) + 0x10000ll * ((b) & 0x1);
    __cavm_csr_fatal("SDECX_ABX_ERROR_SOURCE1", 2, a, b, 0, 0, 0, 0);
}

#define typedef_CAVM_SDECX_ABX_ERROR_SOURCE1(a,b) cavm_sdecx_abx_error_source1_t
#define bustype_CAVM_SDECX_ABX_ERROR_SOURCE1(a,b) CSR_TYPE_RSL
#define basename_CAVM_SDECX_ABX_ERROR_SOURCE1(a,b) "SDECX_ABX_ERROR_SOURCE1"
#define device_bar_CAVM_SDECX_ABX_ERROR_SOURCE1(a,b) 0x2 /* PF_BAR2 */
#define busnum_CAVM_SDECX_ABX_ERROR_SOURCE1(a,b) (a)
#define arguments_CAVM_SDECX_ABX_ERROR_SOURCE1(a,b) (a),(b),-1,-1

/**
 * Register (RSL) sdec#_ab#_groups_pc
 *
 * SDEC Total Groups Performance Counter Register
 */
union cavm_sdecx_abx_groups_pc
{
    uint64_t u;
    struct cavm_sdecx_abx_groups_pc_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t cnt                   : 64; /**< [ 63:  0](R/W/H) Count total groups sent. */
#else /* Word 0 - Little Endian */
        uint64_t cnt                   : 64; /**< [ 63:  0](R/W/H) Count total groups sent. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_sdecx_abx_groups_pc_s cn; */
};
typedef union cavm_sdecx_abx_groups_pc cavm_sdecx_abx_groups_pc_t;

static inline uint64_t CAVM_SDECX_ABX_GROUPS_PC(uint64_t a, uint64_t b) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_SDECX_ABX_GROUPS_PC(uint64_t a, uint64_t b)
{
    if (cavm_is_model(OCTEONTX_CNF20KA) && ((a<=2) && (b<=1)))
        return 0x87e0410000f8ll + 0x80000ll * ((a) & 0x3) + 0x10000ll * ((b) & 0x1);
    __cavm_csr_fatal("SDECX_ABX_GROUPS_PC", 2, a, b, 0, 0, 0, 0);
}

#define typedef_CAVM_SDECX_ABX_GROUPS_PC(a,b) cavm_sdecx_abx_groups_pc_t
#define bustype_CAVM_SDECX_ABX_GROUPS_PC(a,b) CSR_TYPE_RSL
#define basename_CAVM_SDECX_ABX_GROUPS_PC(a,b) "SDECX_ABX_GROUPS_PC"
#define device_bar_CAVM_SDECX_ABX_GROUPS_PC(a,b) 0x2 /* PF_BAR2 */
#define busnum_CAVM_SDECX_ABX_GROUPS_PC(a,b) (a)
#define arguments_CAVM_SDECX_ABX_GROUPS_PC(a,b) (a),(b),-1,-1

/**
 * Register (RSL) sdec#_ab#_jdx#_cfg0
 *
 * SDEC AB Job Configuration Register
 * This register space contains the SDEC job configuration data.
 * Software should not write this register directly, but instead use this
 * format when writing the job configuration section of the job descriptor.
 */
union cavm_sdecx_abx_jdxx_cfg0
{
    uint64_t u;
    struct cavm_sdecx_abx_jdxx_cfg0_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_60_63        : 4;
        uint64_t num_prb_grp           : 4;  /**< [ 59: 56](R/W) Number of PRB groups minus one. The range 0..15 represents 1..16. */
        uint64_t reserved_49_55        : 7;
        uint64_t symmetric_rounding    : 1;  /**< [ 48: 48](R/W) 0 - OR-ROUND
                                                                 1 - Symmetric Rounding */
        uint64_t reserved_40_47        : 8;
        uint64_t num_prb_3             : 10; /**< [ 39: 30](R/W) Number of PRB for group 3 */
        uint64_t num_prb_2             : 10; /**< [ 29: 20](R/W) Number of PRB for group 2 */
        uint64_t num_prb_1             : 10; /**< [ 19: 10](R/W) Number of PRB for group 1 */
        uint64_t num_prb_0             : 10; /**< [  9:  0](R/W) Number of PRB for group 0 */
#else /* Word 0 - Little Endian */
        uint64_t num_prb_0             : 10; /**< [  9:  0](R/W) Number of PRB for group 0 */
        uint64_t num_prb_1             : 10; /**< [ 19: 10](R/W) Number of PRB for group 1 */
        uint64_t num_prb_2             : 10; /**< [ 29: 20](R/W) Number of PRB for group 2 */
        uint64_t num_prb_3             : 10; /**< [ 39: 30](R/W) Number of PRB for group 3 */
        uint64_t reserved_40_47        : 8;
        uint64_t symmetric_rounding    : 1;  /**< [ 48: 48](R/W) 0 - OR-ROUND
                                                                 1 - Symmetric Rounding */
        uint64_t reserved_49_55        : 7;
        uint64_t num_prb_grp           : 4;  /**< [ 59: 56](R/W) Number of PRB groups minus one. The range 0..15 represents 1..16. */
        uint64_t reserved_60_63        : 4;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_sdecx_abx_jdxx_cfg0_s cn; */
};
typedef union cavm_sdecx_abx_jdxx_cfg0 cavm_sdecx_abx_jdxx_cfg0_t;

static inline uint64_t CAVM_SDECX_ABX_JDXX_CFG0(uint64_t a, uint64_t b, uint64_t c) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_SDECX_ABX_JDXX_CFG0(uint64_t a, uint64_t b, uint64_t c)
{
    if (cavm_is_model(OCTEONTX_CNF20KA) && ((a<=2) && (b<=1) && (c<=2)))
        return 0x87e041002000ll + 0x80000ll * ((a) & 0x3) + 0x10000ll * ((b) & 0x1) + 0x2000ll * ((c) & 0x3);
    __cavm_csr_fatal("SDECX_ABX_JDXX_CFG0", 3, a, b, c, 0, 0, 0);
}

#define typedef_CAVM_SDECX_ABX_JDXX_CFG0(a,b,c) cavm_sdecx_abx_jdxx_cfg0_t
#define bustype_CAVM_SDECX_ABX_JDXX_CFG0(a,b,c) CSR_TYPE_RSL
#define basename_CAVM_SDECX_ABX_JDXX_CFG0(a,b,c) "SDECX_ABX_JDXX_CFG0"
#define device_bar_CAVM_SDECX_ABX_JDXX_CFG0(a,b,c) 0x2 /* PF_BAR2 */
#define busnum_CAVM_SDECX_ABX_JDXX_CFG0(a,b,c) (a)
#define arguments_CAVM_SDECX_ABX_JDXX_CFG0(a,b,c) (a),(b),(c),-1

/**
 * Register (RSL) sdec#_ab#_jdx#_cfg1
 *
 * SDEC AB Job Configuration Register
 * This register space contains the SDEC job configuration data.
 * Software should not write this register directly, but instead use this
 * format when writing the job configuration section of the job descriptor.
 */
union cavm_sdecx_abx_jdxx_cfg1
{
    uint64_t u;
    struct cavm_sdecx_abx_jdxx_cfg1_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_60_63        : 4;
        uint64_t num_prb_9             : 10; /**< [ 59: 50](R/W) Number of PRB for group 9 */
        uint64_t num_prb_8             : 10; /**< [ 49: 40](R/W) Number of PRB for group 8 */
        uint64_t num_prb_7             : 10; /**< [ 39: 30](R/W) Number of PRB for group 7 */
        uint64_t num_prb_6             : 10; /**< [ 29: 20](R/W) Number of PRB for group 6 */
        uint64_t num_prb_5             : 10; /**< [ 19: 10](R/W) Number of PRB for group 5 */
        uint64_t num_prb_4             : 10; /**< [  9:  0](R/W) Number of PRB for group 4 */
#else /* Word 0 - Little Endian */
        uint64_t num_prb_4             : 10; /**< [  9:  0](R/W) Number of PRB for group 4 */
        uint64_t num_prb_5             : 10; /**< [ 19: 10](R/W) Number of PRB for group 5 */
        uint64_t num_prb_6             : 10; /**< [ 29: 20](R/W) Number of PRB for group 6 */
        uint64_t num_prb_7             : 10; /**< [ 39: 30](R/W) Number of PRB for group 7 */
        uint64_t num_prb_8             : 10; /**< [ 49: 40](R/W) Number of PRB for group 8 */
        uint64_t num_prb_9             : 10; /**< [ 59: 50](R/W) Number of PRB for group 9 */
        uint64_t reserved_60_63        : 4;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_sdecx_abx_jdxx_cfg1_s cn; */
};
typedef union cavm_sdecx_abx_jdxx_cfg1 cavm_sdecx_abx_jdxx_cfg1_t;

static inline uint64_t CAVM_SDECX_ABX_JDXX_CFG1(uint64_t a, uint64_t b, uint64_t c) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_SDECX_ABX_JDXX_CFG1(uint64_t a, uint64_t b, uint64_t c)
{
    if (cavm_is_model(OCTEONTX_CNF20KA) && ((a<=2) && (b<=1) && (c<=2)))
        return 0x87e041002008ll + 0x80000ll * ((a) & 0x3) + 0x10000ll * ((b) & 0x1) + 0x2000ll * ((c) & 0x3);
    __cavm_csr_fatal("SDECX_ABX_JDXX_CFG1", 3, a, b, c, 0, 0, 0);
}

#define typedef_CAVM_SDECX_ABX_JDXX_CFG1(a,b,c) cavm_sdecx_abx_jdxx_cfg1_t
#define bustype_CAVM_SDECX_ABX_JDXX_CFG1(a,b,c) CSR_TYPE_RSL
#define basename_CAVM_SDECX_ABX_JDXX_CFG1(a,b,c) "SDECX_ABX_JDXX_CFG1"
#define device_bar_CAVM_SDECX_ABX_JDXX_CFG1(a,b,c) 0x2 /* PF_BAR2 */
#define busnum_CAVM_SDECX_ABX_JDXX_CFG1(a,b,c) (a)
#define arguments_CAVM_SDECX_ABX_JDXX_CFG1(a,b,c) (a),(b),(c),-1

/**
 * Register (RSL) sdec#_ab#_jdx#_cfg2
 *
 * SDEC AB Job Configuration Register
 * This register space contains the SDEC job configuration data.
 * Software should not write this register directly, but instead use this
 * format when writing the job configuration section of the job descriptor.
 */
union cavm_sdecx_abx_jdxx_cfg2
{
    uint64_t u;
    struct cavm_sdecx_abx_jdxx_cfg2_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_60_63        : 4;
        uint64_t num_prb_15            : 10; /**< [ 59: 50](R/W) Number of PRB for group 15 */
        uint64_t num_prb_14            : 10; /**< [ 49: 40](R/W) Number of PRB for group 14 */
        uint64_t num_prb_13            : 10; /**< [ 39: 30](R/W) Number of PRB for group 13 */
        uint64_t num_prb_12            : 10; /**< [ 29: 20](R/W) Number of PRB for group 12 */
        uint64_t num_prb_11            : 10; /**< [ 19: 10](R/W) Number of PRB for group 11 */
        uint64_t num_prb_10            : 10; /**< [  9:  0](R/W) Number of PRB for group 10 */
#else /* Word 0 - Little Endian */
        uint64_t num_prb_10            : 10; /**< [  9:  0](R/W) Number of PRB for group 10 */
        uint64_t num_prb_11            : 10; /**< [ 19: 10](R/W) Number of PRB for group 11 */
        uint64_t num_prb_12            : 10; /**< [ 29: 20](R/W) Number of PRB for group 12 */
        uint64_t num_prb_13            : 10; /**< [ 39: 30](R/W) Number of PRB for group 13 */
        uint64_t num_prb_14            : 10; /**< [ 49: 40](R/W) Number of PRB for group 14 */
        uint64_t num_prb_15            : 10; /**< [ 59: 50](R/W) Number of PRB for group 15 */
        uint64_t reserved_60_63        : 4;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_sdecx_abx_jdxx_cfg2_s cn; */
};
typedef union cavm_sdecx_abx_jdxx_cfg2 cavm_sdecx_abx_jdxx_cfg2_t;

static inline uint64_t CAVM_SDECX_ABX_JDXX_CFG2(uint64_t a, uint64_t b, uint64_t c) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_SDECX_ABX_JDXX_CFG2(uint64_t a, uint64_t b, uint64_t c)
{
    if (cavm_is_model(OCTEONTX_CNF20KA) && ((a<=2) && (b<=1) && (c<=2)))
        return 0x87e041002010ll + 0x80000ll * ((a) & 0x3) + 0x10000ll * ((b) & 0x1) + 0x2000ll * ((c) & 0x3);
    __cavm_csr_fatal("SDECX_ABX_JDXX_CFG2", 3, a, b, c, 0, 0, 0);
}

#define typedef_CAVM_SDECX_ABX_JDXX_CFG2(a,b,c) cavm_sdecx_abx_jdxx_cfg2_t
#define bustype_CAVM_SDECX_ABX_JDXX_CFG2(a,b,c) CSR_TYPE_RSL
#define basename_CAVM_SDECX_ABX_JDXX_CFG2(a,b,c) "SDECX_ABX_JDXX_CFG2"
#define device_bar_CAVM_SDECX_ABX_JDXX_CFG2(a,b,c) 0x2 /* PF_BAR2 */
#define busnum_CAVM_SDECX_ABX_JDXX_CFG2(a,b,c) (a)
#define arguments_CAVM_SDECX_ABX_JDXX_CFG2(a,b,c) (a),(b),(c),-1

/**
 * Register (RSL) sdec#_ab#_packet_pc
 *
 * SDEC Total Packets Performance Counter Register
 */
union cavm_sdecx_abx_packet_pc
{
    uint64_t u;
    struct cavm_sdecx_abx_packet_pc_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t cnt                   : 64; /**< [ 63:  0](R/W/H) Count total packets. */
#else /* Word 0 - Little Endian */
        uint64_t cnt                   : 64; /**< [ 63:  0](R/W/H) Count total packets. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_sdecx_abx_packet_pc_s cn; */
};
typedef union cavm_sdecx_abx_packet_pc cavm_sdecx_abx_packet_pc_t;

static inline uint64_t CAVM_SDECX_ABX_PACKET_PC(uint64_t a, uint64_t b) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_SDECX_ABX_PACKET_PC(uint64_t a, uint64_t b)
{
    if (cavm_is_model(OCTEONTX_CNF20KA) && ((a<=2) && (b<=1)))
        return 0x87e041000100ll + 0x80000ll * ((a) & 0x3) + 0x10000ll * ((b) & 0x1);
    __cavm_csr_fatal("SDECX_ABX_PACKET_PC", 2, a, b, 0, 0, 0, 0);
}

#define typedef_CAVM_SDECX_ABX_PACKET_PC(a,b) cavm_sdecx_abx_packet_pc_t
#define bustype_CAVM_SDECX_ABX_PACKET_PC(a,b) CSR_TYPE_RSL
#define basename_CAVM_SDECX_ABX_PACKET_PC(a,b) "SDECX_ABX_PACKET_PC"
#define device_bar_CAVM_SDECX_ABX_PACKET_PC(a,b) 0x2 /* PF_BAR2 */
#define busnum_CAVM_SDECX_ABX_PACKET_PC(a,b) (a)
#define arguments_CAVM_SDECX_ABX_PACKET_PC(a,b) (a),(b),-1,-1

/**
 * Register (RSL) sdec#_ab#_status
 *
 * SDEC Status Register
 */
union cavm_sdecx_abx_status
{
    uint64_t u;
    struct cavm_sdecx_abx_status_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_5_63         : 59;
        uint64_t ready                 : 1;  /**< [  4:  4](RO/H) When set, HAB is ready to receive the next job. */
        uint64_t reserved_3            : 1;
        uint64_t cfg2_busy             : 1;  /**< [  2:  2](RO/H) When set, slot 2 is busy processing a job. */
        uint64_t cfg1_busy             : 1;  /**< [  1:  1](RO/H) When set, slot 1 is busy processing a job. */
        uint64_t cfg0_busy             : 1;  /**< [  0:  0](RO/H) When set, slot 0 is busy processing a job. */
#else /* Word 0 - Little Endian */
        uint64_t cfg0_busy             : 1;  /**< [  0:  0](RO/H) When set, slot 0 is busy processing a job. */
        uint64_t cfg1_busy             : 1;  /**< [  1:  1](RO/H) When set, slot 1 is busy processing a job. */
        uint64_t cfg2_busy             : 1;  /**< [  2:  2](RO/H) When set, slot 2 is busy processing a job. */
        uint64_t reserved_3            : 1;
        uint64_t ready                 : 1;  /**< [  4:  4](RO/H) When set, HAB is ready to receive the next job. */
        uint64_t reserved_5_63         : 59;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_sdecx_abx_status_s cn; */
};
typedef union cavm_sdecx_abx_status cavm_sdecx_abx_status_t;

static inline uint64_t CAVM_SDECX_ABX_STATUS(uint64_t a, uint64_t b) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_SDECX_ABX_STATUS(uint64_t a, uint64_t b)
{
    if (cavm_is_model(OCTEONTX_CNF20KA) && ((a<=2) && (b<=1)))
        return 0x87e041000018ll + 0x80000ll * ((a) & 0x3) + 0x10000ll * ((b) & 0x1);
    __cavm_csr_fatal("SDECX_ABX_STATUS", 2, a, b, 0, 0, 0, 0);
}

#define typedef_CAVM_SDECX_ABX_STATUS(a,b) cavm_sdecx_abx_status_t
#define bustype_CAVM_SDECX_ABX_STATUS(a,b) CSR_TYPE_RSL
#define basename_CAVM_SDECX_ABX_STATUS(a,b) "SDECX_ABX_STATUS"
#define device_bar_CAVM_SDECX_ABX_STATUS(a,b) 0x2 /* PF_BAR2 */
#define busnum_CAVM_SDECX_ABX_STATUS(a,b) (a)
#define arguments_CAVM_SDECX_ABX_STATUS(a,b) (a),(b),-1,-1

#endif /* __CAVM_CSRS_SDEC_H__ */
