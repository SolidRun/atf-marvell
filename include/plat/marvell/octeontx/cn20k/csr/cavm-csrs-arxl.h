#ifndef __CAVM_CSRS_ARXL_H__
#define __CAVM_CSRS_ARXL_H__
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
 * ARXL.
 *
 * This file is auto generated. Do not edit.
 *
 */

/**
 * Enumeration arxl_bar_e
 */
#define CAVM_ARXL_BAR_E_ARXLX_PF_BAR2(a) (0x87e042200000ll + 0x80000ll * (a))
#define CAVM_ARXL_BAR_E_ARXLX_PF_BAR2_SIZE 0x40000ull

/**
 * Structure arxl_cfg_s
 *
 * ARXL CFG Structure
 * This structure specifies the task configuation format for ARXL.
 */
union cavm_arxl_cfg_s
{
    uint64_t u[3];
    struct cavm_arxl_cfg_s_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_45_63        : 19;
        uint64_t pmem_mat_offset       : 6;  /**< [ 44: 39] Offset of each R^_d^(-1) matrix in PMEM.
                                                                 Same as the number of 512b words for each Rinv_d matrix in PMEM (compact format).
                                                                 ARXL_COMMON_CFG_S[NUM_BEAM] = 0x2 or 0x4: 1.
                                                                 ARXL_COMMON_CFG_S[NUM_BEAM] = 0x8: 3.
                                                                 ARXL_COMMON_CFG_S[NUM_BEAM] = 0xC: 5.
                                                                 ARXL_COMMON_CFG_S[NUM_BEAM] = 0x10: 9. */
        uint64_t pmem_base_addr        : 17; /**< [ 38: 22] Base PMEM address in 512b indicating the location of Rinv_d of the first matrix in the job. */
        uint64_t reserved_10_21        : 12;
        uint64_t num_matrix            : 10; /**< [  9:  0] Number of R_nn matrices. Supported range is [1:1023]. */
#else /* Word 0 - Little Endian */
        uint64_t num_matrix            : 10; /**< [  9:  0] Number of R_nn matrices. Supported range is [1:1023]. */
        uint64_t reserved_10_21        : 12;
        uint64_t pmem_base_addr        : 17; /**< [ 38: 22] Base PMEM address in 512b indicating the location of Rinv_d of the first matrix in the job. */
        uint64_t pmem_mat_offset       : 6;  /**< [ 44: 39] Offset of each R^_d^(-1) matrix in PMEM.
                                                                 Same as the number of 512b words for each Rinv_d matrix in PMEM (compact format).
                                                                 ARXL_COMMON_CFG_S[NUM_BEAM] = 0x2 or 0x4: 1.
                                                                 ARXL_COMMON_CFG_S[NUM_BEAM] = 0x8: 3.
                                                                 ARXL_COMMON_CFG_S[NUM_BEAM] = 0xC: 5.
                                                                 ARXL_COMMON_CFG_S[NUM_BEAM] = 0x10: 9. */
        uint64_t reserved_45_63        : 19;
#endif /* Word 0 - End */
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 1 - Big Endian */
        uint64_t input_dat_exp         : 8;  /**< [127:120] Common 8-bit signed exponent E of elements in R_nn matrices. */
        uint64_t rinv_ec               : 8;  /**< [119:112] Signed 8-bit exponent of output values. Scaling (2^rinv_ec) needs to be
                                                                 applied to each element of Rinv_d returned to convert to internal floating
                                                                 point value.
                                                                 Verified range [-128:0]. */
        uint64_t gamma                 : 16; /**< [111: 96] Signed 16-bit in Q14 format value of \gamma. \gamma = [GAMMA] * (2^[GAMMA_EXP]). */
        uint64_t noise_nl              : 16; /**< [ 95: 80] Signed 16-bit in Q14 format value of n_l. n_l = [NOISE_NL] * (2^[NOISE_NL_EXP]). */
        uint64_t beta                  : 16; /**< [ 79: 64] Signed 16-bit in Q14 format value of \beta. \beta = [BETA] * (2^[BETA_EXP]). */
#else /* Word 1 - Little Endian */
        uint64_t beta                  : 16; /**< [ 79: 64] Signed 16-bit in Q14 format value of \beta. \beta = [BETA] * (2^[BETA_EXP]). */
        uint64_t noise_nl              : 16; /**< [ 95: 80] Signed 16-bit in Q14 format value of n_l. n_l = [NOISE_NL] * (2^[NOISE_NL_EXP]). */
        uint64_t gamma                 : 16; /**< [111: 96] Signed 16-bit in Q14 format value of \gamma. \gamma = [GAMMA] * (2^[GAMMA_EXP]). */
        uint64_t rinv_ec               : 8;  /**< [119:112] Signed 8-bit exponent of output values. Scaling (2^rinv_ec) needs to be
                                                                 applied to each element of Rinv_d returned to convert to internal floating
                                                                 point value.
                                                                 Verified range [-128:0]. */
        uint64_t input_dat_exp         : 8;  /**< [127:120] Common 8-bit signed exponent E of elements in R_nn matrices. */
#endif /* Word 1 - End */
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 2 - Big Endian */
        uint64_t reserved_176_191      : 16;
        uint64_t delta_exp             : 8;  /**< [175:168] 8-bit signed exponent applied on [DELTA] to obtain \delta. */
        uint64_t gamma_exp             : 8;  /**< [167:160] 8-bit signed exponent applied on [GAMMA] to obtain \gamma. */
        uint64_t noise_nl_exp          : 8;  /**< [159:152] 8-bit signed exponent applied on [NOISE_NL] to obtain n_l. */
        uint64_t beta_exp              : 8;  /**< [151:144] 8-bit signed exponent applied to [BETA] to obtain \beta. */
        uint64_t delta                 : 16; /**< [143:128] Signed 16-bit value of \delta. Assumed same \delta value for all eigen values.
                                                                 \delta = [DELTA] * (2^[DELTA_EXP]). */
#else /* Word 2 - Little Endian */
        uint64_t delta                 : 16; /**< [143:128] Signed 16-bit value of \delta. Assumed same \delta value for all eigen values.
                                                                 \delta = [DELTA] * (2^[DELTA_EXP]). */
        uint64_t beta_exp              : 8;  /**< [151:144] 8-bit signed exponent applied to [BETA] to obtain \beta. */
        uint64_t noise_nl_exp          : 8;  /**< [159:152] 8-bit signed exponent applied on [NOISE_NL] to obtain n_l. */
        uint64_t gamma_exp             : 8;  /**< [167:160] 8-bit signed exponent applied on [GAMMA] to obtain \gamma. */
        uint64_t delta_exp             : 8;  /**< [175:168] 8-bit signed exponent applied on [DELTA] to obtain \delta. */
        uint64_t reserved_176_191      : 16;
#endif /* Word 2 - End */
    } s;
    /* struct cavm_arxl_cfg_s_s cn; */
};

/**
 * Structure arxl_common_cfg_s
 *
 * ARXL COMMON Structure
 * This structure specifies the single 64-bit word ARXL CFG COMMON format.
 */
union cavm_arxl_common_cfg_s
{
    uint64_t u;
    struct cavm_arxl_common_cfg_s_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_63           : 1;
        uint64_t processing_mode       : 3;  /**< [ 62: 60] 0x7 = ARXL operation. */
        uint64_t reserved_31_59        : 29;
        uint64_t num_iter              : 3;  /**< [ 30: 28] Number of power iterations to be performed. */
        uint64_t reserved_25_27        : 3;
        uint64_t num_beam              : 5;  /**< [ 24: 20] Number of beams N_B. Order of R_nn and Rinv_d. */
        uint64_t reserved_16_19        : 4;
        uint64_t num_eig               : 4;  /**< [ 15: 12] Number of eigen values (n_e) to be legalized. */
        uint64_t reserved_5_11         : 7;
        uint64_t num_tasks             : 5;  /**< [  4:  0] Number of bundled tasks. */
#else /* Word 0 - Little Endian */
        uint64_t num_tasks             : 5;  /**< [  4:  0] Number of bundled tasks. */
        uint64_t reserved_5_11         : 7;
        uint64_t num_eig               : 4;  /**< [ 15: 12] Number of eigen values (n_e) to be legalized. */
        uint64_t reserved_16_19        : 4;
        uint64_t num_beam              : 5;  /**< [ 24: 20] Number of beams N_B. Order of R_nn and Rinv_d. */
        uint64_t reserved_25_27        : 3;
        uint64_t num_iter              : 3;  /**< [ 30: 28] Number of power iterations to be performed. */
        uint64_t reserved_31_59        : 29;
        uint64_t processing_mode       : 3;  /**< [ 62: 60] 0x7 = ARXL operation. */
        uint64_t reserved_63           : 1;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_arxl_common_cfg_s_s cn; */
};

/**
 * Register (RSL) arxl#_control
 *
 * ARXL Control Register
 * This register is used to start ARXL HAB processing.
 */
union cavm_arxlx_control
{
    uint64_t u;
    struct cavm_arxlx_control_s
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
    /* struct cavm_arxlx_control_s cn; */
};
typedef union cavm_arxlx_control cavm_arxlx_control_t;

static inline uint64_t CAVM_ARXLX_CONTROL(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_ARXLX_CONTROL(uint64_t a)
{
    if (a<=1)
        return 0x87e042200000ll + 0x80000ll * ((a) & 0x1);
    __cavm_csr_fatal("ARXLX_CONTROL", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_ARXLX_CONTROL(a) cavm_arxlx_control_t
#define bustype_CAVM_ARXLX_CONTROL(a) CSR_TYPE_RSL
#define basename_CAVM_ARXLX_CONTROL(a) "ARXLX_CONTROL"
#define device_bar_CAVM_ARXLX_CONTROL(a) 0x2 /* PF_BAR2 */
#define busnum_CAVM_ARXLX_CONTROL(a) (a)
#define arguments_CAVM_ARXLX_CONTROL(a) (a),-1,-1,-1

/**
 * Register (RSL) arxl#_error_enable0
 *
 * ARXL Error Enable 0 Register
 * This register enables error reporting for ARXL_ERROR_SOURCE0 register.
 */
union cavm_arxlx_error_enable0
{
    uint64_t u;
    struct cavm_arxlx_error_enable0_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_5_63         : 59;
        uint64_t rp0_of_en             : 1;  /**< [  4:  4](R/W) Read port 0 overflow enable. */
        uint64_t reserved_1_3          : 3;
        uint64_t rp0_uf_en             : 1;  /**< [  0:  0](R/W) Read port 0 underflow enable. */
#else /* Word 0 - Little Endian */
        uint64_t rp0_uf_en             : 1;  /**< [  0:  0](R/W) Read port 0 underflow enable. */
        uint64_t reserved_1_3          : 3;
        uint64_t rp0_of_en             : 1;  /**< [  4:  4](R/W) Read port 0 overflow enable. */
        uint64_t reserved_5_63         : 59;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_arxlx_error_enable0_s cn; */
};
typedef union cavm_arxlx_error_enable0 cavm_arxlx_error_enable0_t;

static inline uint64_t CAVM_ARXLX_ERROR_ENABLE0(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_ARXLX_ERROR_ENABLE0(uint64_t a)
{
    if (a<=1)
        return 0x87e042200040ll + 0x80000ll * ((a) & 0x1);
    __cavm_csr_fatal("ARXLX_ERROR_ENABLE0", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_ARXLX_ERROR_ENABLE0(a) cavm_arxlx_error_enable0_t
#define bustype_CAVM_ARXLX_ERROR_ENABLE0(a) CSR_TYPE_RSL
#define basename_CAVM_ARXLX_ERROR_ENABLE0(a) "ARXLX_ERROR_ENABLE0"
#define device_bar_CAVM_ARXLX_ERROR_ENABLE0(a) 0x2 /* PF_BAR2 */
#define busnum_CAVM_ARXLX_ERROR_ENABLE0(a) (a)
#define arguments_CAVM_ARXLX_ERROR_ENABLE0(a) (a),-1,-1,-1

/**
 * Register (RSL) arxl#_error_source0
 *
 * ARXL Error Source Register 0
 * This register reports the source of read DMA overflow/underflow errors.
 */
union cavm_arxlx_error_source0
{
    uint64_t u;
    struct cavm_arxlx_error_source0_s
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
    /* struct cavm_arxlx_error_source0_s cn; */
};
typedef union cavm_arxlx_error_source0 cavm_arxlx_error_source0_t;

static inline uint64_t CAVM_ARXLX_ERROR_SOURCE0(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_ARXLX_ERROR_SOURCE0(uint64_t a)
{
    if (a<=1)
        return 0x87e042200030ll + 0x80000ll * ((a) & 0x1);
    __cavm_csr_fatal("ARXLX_ERROR_SOURCE0", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_ARXLX_ERROR_SOURCE0(a) cavm_arxlx_error_source0_t
#define bustype_CAVM_ARXLX_ERROR_SOURCE0(a) CSR_TYPE_RSL
#define basename_CAVM_ARXLX_ERROR_SOURCE0(a) "ARXLX_ERROR_SOURCE0"
#define device_bar_CAVM_ARXLX_ERROR_SOURCE0(a) 0x2 /* PF_BAR2 */
#define busnum_CAVM_ARXLX_ERROR_SOURCE0(a) (a)
#define arguments_CAVM_ARXLX_ERROR_SOURCE0(a) (a),-1,-1,-1

/**
 * Register (RSL) arxl#_slot#_jcfg#
 *
 * ARXL JOB Configuration Register
 * ARXL job configuration registers.
 */
union cavm_arxlx_slotx_jcfgx
{
    uint64_t u;
    struct cavm_arxlx_slotx_jcfgx_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t entry                 : 64; /**< [ 63:  0](R/W/H) Config bits. */
#else /* Word 0 - Little Endian */
        uint64_t entry                 : 64; /**< [ 63:  0](R/W/H) Config bits. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_arxlx_slotx_jcfgx_s cn; */
};
typedef union cavm_arxlx_slotx_jcfgx cavm_arxlx_slotx_jcfgx_t;

static inline uint64_t CAVM_ARXLX_SLOTX_JCFGX(uint64_t a, uint64_t b, uint64_t c) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_ARXLX_SLOTX_JCFGX(uint64_t a, uint64_t b, uint64_t c)
{
    if ((a<=1) && (b<=1) && (c<=60))
        return 0x87e042202000ll + 0x80000ll * ((a) & 0x1) + 0x2000ll * ((b) & 0x1) + 8ll * ((c) & 0x3f);
    __cavm_csr_fatal("ARXLX_SLOTX_JCFGX", 3, a, b, c, 0, 0, 0);
}

#define typedef_CAVM_ARXLX_SLOTX_JCFGX(a,b,c) cavm_arxlx_slotx_jcfgx_t
#define bustype_CAVM_ARXLX_SLOTX_JCFGX(a,b,c) CSR_TYPE_RSL
#define basename_CAVM_ARXLX_SLOTX_JCFGX(a,b,c) "ARXLX_SLOTX_JCFGX"
#define device_bar_CAVM_ARXLX_SLOTX_JCFGX(a,b,c) 0x2 /* PF_BAR2 */
#define busnum_CAVM_ARXLX_SLOTX_JCFGX(a,b,c) (a)
#define arguments_CAVM_ARXLX_SLOTX_JCFGX(a,b,c) (a),(b),(c),-1

/**
 * Register (RSL) arxl#_status
 *
 * ARXL Status Register
 * ARXL Status Register.
 */
union cavm_arxlx_status
{
    uint64_t u;
    struct cavm_arxlx_status_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_5_63         : 59;
        uint64_t ready                 : 1;  /**< [  4:  4](RO/H) When set, indicates the ARXL is ready to receive next job. */
        uint64_t reserved_2_3          : 2;
        uint64_t status1               : 1;  /**< [  1:  1](RO/H) When set, slot 1 is busy processing a job. */
        uint64_t status0               : 1;  /**< [  0:  0](RO/H) When set, slot 0 is busy processing a job. */
#else /* Word 0 - Little Endian */
        uint64_t status0               : 1;  /**< [  0:  0](RO/H) When set, slot 0 is busy processing a job. */
        uint64_t status1               : 1;  /**< [  1:  1](RO/H) When set, slot 1 is busy processing a job. */
        uint64_t reserved_2_3          : 2;
        uint64_t ready                 : 1;  /**< [  4:  4](RO/H) When set, indicates the ARXL is ready to receive next job. */
        uint64_t reserved_5_63         : 59;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_arxlx_status_s cn; */
};
typedef union cavm_arxlx_status cavm_arxlx_status_t;

static inline uint64_t CAVM_ARXLX_STATUS(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_ARXLX_STATUS(uint64_t a)
{
    if (a<=1)
        return 0x87e042200018ll + 0x80000ll * ((a) & 0x1);
    __cavm_csr_fatal("ARXLX_STATUS", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_ARXLX_STATUS(a) cavm_arxlx_status_t
#define bustype_CAVM_ARXLX_STATUS(a) CSR_TYPE_RSL
#define basename_CAVM_ARXLX_STATUS(a) "ARXLX_STATUS"
#define device_bar_CAVM_ARXLX_STATUS(a) 0x2 /* PF_BAR2 */
#define busnum_CAVM_ARXLX_STATUS(a) (a)
#define arguments_CAVM_ARXLX_STATUS(a) (a),-1,-1,-1

#endif /* __CAVM_CSRS_ARXL_H__ */
