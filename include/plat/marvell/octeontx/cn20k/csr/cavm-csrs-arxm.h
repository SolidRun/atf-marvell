#ifndef __CAVM_CSRS_ARXM_H__
#define __CAVM_CSRS_ARXM_H__
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
 * ARXM.
 *
 * This file is auto generated. Do not edit.
 *
 */

/**
 * Enumeration arxm_bar_e
 */
#define CAVM_ARXM_BAR_E_ARXMX_PF_BAR2(a) (0x87e042300000ll + 0x80000ll * (a))
#define CAVM_ARXM_BAR_E_ARXMX_PF_BAR2_SIZE 0x40000ull

/**
 * Structure arxm_job_cfg_s
 *
 * ARXM Common Configuration Parameters Structure
 * This structure defines the format for the first word of the job
 * configuration for all ARXM jobs.
 */
union cavm_arxm_job_cfg_s
{
    uint64_t u;
    struct cavm_arxm_job_cfg_s_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t mode                  : 2;  /**< [ 63: 62] ARXM mode:
                                                                 0: Direct copy from MHBW SMEM/DDR to PMEM
                                                                 1: Direct copy from PMEM to MHBWSMEM/DDR
                                                                 2: PMEM filter */
        uint64_t pmem_base_addr        : 18; /**< [ 61: 44] PMEM base address
                                                                 PMEM base address for 256b data word
                                                                 For mode 0 and 2: Destination address
                                                                 For mode 1: Source address */
        uint64_t length                : 18; /**< [ 43: 26] Data length for direct copy:
                                                                 number of 256b data words */
        uint64_t num_beam              : 5;  /**< [ 25: 21] Number of beams for PMEM filtering.
                                                                 Only 2, 4, 8, 12, and 16 are regarded as valid. */
        uint64_t num_prb               : 9;  /**< [ 20: 12] number of RB per each beam. */
        uint64_t sparsity              : 1;  /**< [ 11: 11] Sparsity of channel responses for PMEM filtering. This value is valid only for [NUM_BEAM]=8 and 12.
                                                                 0: Passes all channel responses
                                                                 1: Passes only odd numbered channel responses starting from RE 1. */
        uint64_t d256_offset           : 1;  /**< [ 10: 10] 256b data offset for PMEM filtering:
                                                                 (only available for num_beam=2 and num_beam2_mode=0, otherwise ignored)
                                                                 0: write transposed data into only lower 256b column
                                                                 1: write transposed data into only upper 256b column */
        uint64_t num_beam2_mode        : 1;  /**< [  9:  9] Data transpose mode for PMEM filtering when num_beam==2:
                                                                 (otherwise ignored)
                                                                 0: transpose only num_prb x num_beam x (12\>\>sparsity) data samples
                                                                 1: transpose the first (num_prb x num_beam x (12\>\>sparsity)) data sample block
                                                                 to lower 256b, and the second block to upper 256b. Only available when
                                                                 num_beam=2. */
        uint64_t reserved_0_8          : 9;
#else /* Word 0 - Little Endian */
        uint64_t reserved_0_8          : 9;
        uint64_t num_beam2_mode        : 1;  /**< [  9:  9] Data transpose mode for PMEM filtering when num_beam==2:
                                                                 (otherwise ignored)
                                                                 0: transpose only num_prb x num_beam x (12\>\>sparsity) data samples
                                                                 1: transpose the first (num_prb x num_beam x (12\>\>sparsity)) data sample block
                                                                 to lower 256b, and the second block to upper 256b. Only available when
                                                                 num_beam=2. */
        uint64_t d256_offset           : 1;  /**< [ 10: 10] 256b data offset for PMEM filtering:
                                                                 (only available for num_beam=2 and num_beam2_mode=0, otherwise ignored)
                                                                 0: write transposed data into only lower 256b column
                                                                 1: write transposed data into only upper 256b column */
        uint64_t sparsity              : 1;  /**< [ 11: 11] Sparsity of channel responses for PMEM filtering. This value is valid only for [NUM_BEAM]=8 and 12.
                                                                 0: Passes all channel responses
                                                                 1: Passes only odd numbered channel responses starting from RE 1. */
        uint64_t num_prb               : 9;  /**< [ 20: 12] number of RB per each beam. */
        uint64_t num_beam              : 5;  /**< [ 25: 21] Number of beams for PMEM filtering.
                                                                 Only 2, 4, 8, 12, and 16 are regarded as valid. */
        uint64_t length                : 18; /**< [ 43: 26] Data length for direct copy:
                                                                 number of 256b data words */
        uint64_t pmem_base_addr        : 18; /**< [ 61: 44] PMEM base address
                                                                 PMEM base address for 256b data word
                                                                 For mode 0 and 2: Destination address
                                                                 For mode 1: Source address */
        uint64_t mode                  : 2;  /**< [ 63: 62] ARXM mode:
                                                                 0: Direct copy from MHBW SMEM/DDR to PMEM
                                                                 1: Direct copy from PMEM to MHBWSMEM/DDR
                                                                 2: PMEM filter */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_arxm_job_cfg_s_s cn; */
};

/**
 * Register (RSL) arxm#_control
 *
 * ARXM Control Register
 * This register is used to start ARXM HAB processing.
 */
union cavm_arxmx_control
{
    uint64_t u;
    struct cavm_arxmx_control_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_48_63        : 16;
        uint64_t jobid1                : 16; /**< [ 47: 32](R/W/H) Job ID for slot 1. */
        uint64_t jobid0                : 16; /**< [ 31: 16](R/W/H) Job ID for slot 0. */
        uint64_t reserved_2_15         : 14;
        uint64_t start1                : 1;  /**< [  1:  1](R/W/H) Start processing job in slot 1. */
        uint64_t start0                : 1;  /**< [  0:  0](R/W/H) Start processing job in slot 0. */
#else /* Word 0 - Little Endian */
        uint64_t start0                : 1;  /**< [  0:  0](R/W/H) Start processing job in slot 0. */
        uint64_t start1                : 1;  /**< [  1:  1](R/W/H) Start processing job in slot 1. */
        uint64_t reserved_2_15         : 14;
        uint64_t jobid0                : 16; /**< [ 31: 16](R/W/H) Job ID for slot 0. */
        uint64_t jobid1                : 16; /**< [ 47: 32](R/W/H) Job ID for slot 1. */
        uint64_t reserved_48_63        : 16;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_arxmx_control_s cn; */
};
typedef union cavm_arxmx_control cavm_arxmx_control_t;

static inline uint64_t CAVM_ARXMX_CONTROL(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_ARXMX_CONTROL(uint64_t a)
{
    if (a<=1)
        return 0x87e042300000ll + 0x80000ll * ((a) & 0x1);
    __cavm_csr_fatal("ARXMX_CONTROL", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_ARXMX_CONTROL(a) cavm_arxmx_control_t
#define bustype_CAVM_ARXMX_CONTROL(a) CSR_TYPE_RSL
#define basename_CAVM_ARXMX_CONTROL(a) "ARXMX_CONTROL"
#define device_bar_CAVM_ARXMX_CONTROL(a) 0x2 /* PF_BAR2 */
#define busnum_CAVM_ARXMX_CONTROL(a) (a)
#define arguments_CAVM_ARXMX_CONTROL(a) (a),-1,-1,-1

/**
 * Register (RSL) arxm#_error_enable0
 *
 * ARXM Error Enable 0 Register
 * This register enables error reporting for ARXM_ERROR_SOURCE0 register.
 */
union cavm_arxmx_error_enable0
{
    uint64_t u;
    struct cavm_arxmx_error_enable0_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_4_63         : 60;
        uint64_t ab_error_en           : 1;  /**< [  3:  3](R/W) Enable AB FATAL error; */
        uint64_t ab_nfat_error_en      : 1;  /**< [  2:  2](R/W) Enable AB Non-FATAL error; */
        uint64_t rp0_of_en             : 1;  /**< [  1:  1](R/W) Read port 0 overflow enable. */
        uint64_t rp0_uf_en             : 1;  /**< [  0:  0](R/W) Read port 0 underflow enable. */
#else /* Word 0 - Little Endian */
        uint64_t rp0_uf_en             : 1;  /**< [  0:  0](R/W) Read port 0 underflow enable. */
        uint64_t rp0_of_en             : 1;  /**< [  1:  1](R/W) Read port 0 overflow enable. */
        uint64_t ab_nfat_error_en      : 1;  /**< [  2:  2](R/W) Enable AB Non-FATAL error; */
        uint64_t ab_error_en           : 1;  /**< [  3:  3](R/W) Enable AB FATAL error; */
        uint64_t reserved_4_63         : 60;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_arxmx_error_enable0_s cn; */
};
typedef union cavm_arxmx_error_enable0 cavm_arxmx_error_enable0_t;

static inline uint64_t CAVM_ARXMX_ERROR_ENABLE0(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_ARXMX_ERROR_ENABLE0(uint64_t a)
{
    if (a<=1)
        return 0x87e042300040ll + 0x80000ll * ((a) & 0x1);
    __cavm_csr_fatal("ARXMX_ERROR_ENABLE0", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_ARXMX_ERROR_ENABLE0(a) cavm_arxmx_error_enable0_t
#define bustype_CAVM_ARXMX_ERROR_ENABLE0(a) CSR_TYPE_RSL
#define basename_CAVM_ARXMX_ERROR_ENABLE0(a) "ARXMX_ERROR_ENABLE0"
#define device_bar_CAVM_ARXMX_ERROR_ENABLE0(a) 0x2 /* PF_BAR2 */
#define busnum_CAVM_ARXMX_ERROR_ENABLE0(a) (a)
#define arguments_CAVM_ARXMX_ERROR_ENABLE0(a) (a),-1,-1,-1

/**
 * Register (RSL) arxm#_error_source0
 *
 * ARXM Error Source Register 0
 * This register reports the source of read DMA overflow/underflow errors.
 */
union cavm_arxmx_error_source0
{
    uint64_t u;
    struct cavm_arxmx_error_source0_s
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
    /* struct cavm_arxmx_error_source0_s cn; */
};
typedef union cavm_arxmx_error_source0 cavm_arxmx_error_source0_t;

static inline uint64_t CAVM_ARXMX_ERROR_SOURCE0(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_ARXMX_ERROR_SOURCE0(uint64_t a)
{
    if (a<=1)
        return 0x87e042300030ll + 0x80000ll * ((a) & 0x1);
    __cavm_csr_fatal("ARXMX_ERROR_SOURCE0", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_ARXMX_ERROR_SOURCE0(a) cavm_arxmx_error_source0_t
#define bustype_CAVM_ARXMX_ERROR_SOURCE0(a) CSR_TYPE_RSL
#define basename_CAVM_ARXMX_ERROR_SOURCE0(a) "ARXMX_ERROR_SOURCE0"
#define device_bar_CAVM_ARXMX_ERROR_SOURCE0(a) 0x2 /* PF_BAR2 */
#define busnum_CAVM_ARXMX_ERROR_SOURCE0(a) (a)
#define arguments_CAVM_ARXMX_ERROR_SOURCE0(a) (a),-1,-1,-1

/**
 * Register (RSL) arxm#_job_cfg#
 *
 * Job Configuration Register
 * DATA formatted according to ARXM_JOB_CFG_S structure
 */
union cavm_arxmx_job_cfgx
{
    uint64_t u;
    struct cavm_arxmx_job_cfgx_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t data                  : 64; /**< [ 63:  0](R/W) Job configuration data. */
#else /* Word 0 - Little Endian */
        uint64_t data                  : 64; /**< [ 63:  0](R/W) Job configuration data. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_arxmx_job_cfgx_s cn; */
};
typedef union cavm_arxmx_job_cfgx cavm_arxmx_job_cfgx_t;

static inline uint64_t CAVM_ARXMX_JOB_CFGX(uint64_t a, uint64_t b) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_ARXMX_JOB_CFGX(uint64_t a, uint64_t b)
{
    if ((a<=1) && (b<=1))
        return 0x87e042302000ll + 0x80000ll * ((a) & 0x1) + 0x2000ll * ((b) & 0x1);
    __cavm_csr_fatal("ARXMX_JOB_CFGX", 2, a, b, 0, 0, 0, 0);
}

#define typedef_CAVM_ARXMX_JOB_CFGX(a,b) cavm_arxmx_job_cfgx_t
#define bustype_CAVM_ARXMX_JOB_CFGX(a,b) CSR_TYPE_RSL
#define basename_CAVM_ARXMX_JOB_CFGX(a,b) "ARXMX_JOB_CFGX"
#define device_bar_CAVM_ARXMX_JOB_CFGX(a,b) 0x2 /* PF_BAR2 */
#define busnum_CAVM_ARXMX_JOB_CFGX(a,b) (a)
#define arguments_CAVM_ARXMX_JOB_CFGX(a,b) (a),(b),-1,-1

/**
 * Register (RSL) arxm#_status
 *
 * ARXM Status Register
 * ARXM Status Register.
 */
union cavm_arxmx_status
{
    uint64_t u;
    struct cavm_arxmx_status_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_5_63         : 59;
        uint64_t ready                 : 1;  /**< [  4:  4](RO/H) When set, indicates the ARXM HAB is ready to receive next job. */
        uint64_t reserved_2_3          : 2;
        uint64_t status1               : 1;  /**< [  1:  1](RO/H) When set, indicates the ARXM HAB is busy processing a job. */
        uint64_t status0               : 1;  /**< [  0:  0](RO/H) When set, indicates the ARXM HAB is busy processing a job. */
#else /* Word 0 - Little Endian */
        uint64_t status0               : 1;  /**< [  0:  0](RO/H) When set, indicates the ARXM HAB is busy processing a job. */
        uint64_t status1               : 1;  /**< [  1:  1](RO/H) When set, indicates the ARXM HAB is busy processing a job. */
        uint64_t reserved_2_3          : 2;
        uint64_t ready                 : 1;  /**< [  4:  4](RO/H) When set, indicates the ARXM HAB is ready to receive next job. */
        uint64_t reserved_5_63         : 59;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_arxmx_status_s cn; */
};
typedef union cavm_arxmx_status cavm_arxmx_status_t;

static inline uint64_t CAVM_ARXMX_STATUS(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_ARXMX_STATUS(uint64_t a)
{
    if (a<=1)
        return 0x87e042300018ll + 0x80000ll * ((a) & 0x1);
    __cavm_csr_fatal("ARXMX_STATUS", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_ARXMX_STATUS(a) cavm_arxmx_status_t
#define bustype_CAVM_ARXMX_STATUS(a) CSR_TYPE_RSL
#define basename_CAVM_ARXMX_STATUS(a) "ARXMX_STATUS"
#define device_bar_CAVM_ARXMX_STATUS(a) 0x2 /* PF_BAR2 */
#define busnum_CAVM_ARXMX_STATUS(a) (a)
#define arguments_CAVM_ARXMX_STATUS(a) (a),-1,-1,-1

#endif /* __CAVM_CSRS_ARXM_H__ */
