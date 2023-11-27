#ifndef __CAVM_CSRS_ULBF_H__
#define __CAVM_CSRS_ULBF_H__
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
 * ULBF.
 *
 * This file is auto generated. Do not edit.
 *
 */

/**
 * Register (RSL) ulbf#_ab_control
 *
 * ULBF Control Register
 * ULBF control register for cfg cores.
 */
union cavm_ulbfx_ab_control
{
    uint64_t u;
    struct cavm_ulbfx_ab_control_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t slot2_job_id          : 16; /**< [ 63: 48](R/W) Configuration register job ID of ULBF CFG slot2. */
        uint64_t slot1_job_id          : 16; /**< [ 47: 32](R/W) Configuration register job ID of ULBF CFG slot1. */
        uint64_t slot0_job_id          : 16; /**< [ 31: 16](R/W) Configuration register job ID of ULBF CFG slot0. */
        uint64_t reserved_3_15         : 13;
        uint64_t job2stt               : 1;  /**< [  2:  2](R/W) Ready to receive the next job. */
        uint64_t job1stt               : 1;  /**< [  1:  1](R/W) Ready to receive the next job. */
        uint64_t job0stt               : 1;  /**< [  0:  0](R/W) Ready to receive the next job. */
#else /* Word 0 - Little Endian */
        uint64_t job0stt               : 1;  /**< [  0:  0](R/W) Ready to receive the next job. */
        uint64_t job1stt               : 1;  /**< [  1:  1](R/W) Ready to receive the next job. */
        uint64_t job2stt               : 1;  /**< [  2:  2](R/W) Ready to receive the next job. */
        uint64_t reserved_3_15         : 13;
        uint64_t slot0_job_id          : 16; /**< [ 31: 16](R/W) Configuration register job ID of ULBF CFG slot0. */
        uint64_t slot1_job_id          : 16; /**< [ 47: 32](R/W) Configuration register job ID of ULBF CFG slot1. */
        uint64_t slot2_job_id          : 16; /**< [ 63: 48](R/W) Configuration register job ID of ULBF CFG slot2. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_ulbfx_ab_control_s cn; */
};
typedef union cavm_ulbfx_ab_control cavm_ulbfx_ab_control_t;

static inline uint64_t CAVM_ULBFX_AB_CONTROL(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_ULBFX_AB_CONTROL(uint64_t a)
{
    if (a<=3)
        return 0x87e041600000ll + 0x80000ll * ((a) & 0x3);
    __cavm_csr_fatal("ULBFX_AB_CONTROL", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_ULBFX_AB_CONTROL(a) cavm_ulbfx_ab_control_t
#define bustype_CAVM_ULBFX_AB_CONTROL(a) CSR_TYPE_RSL
#define basename_CAVM_ULBFX_AB_CONTROL(a) "ULBFX_AB_CONTROL"
#define busnum_CAVM_ULBFX_AB_CONTROL(a) (a)
#define arguments_CAVM_ULBFX_AB_CONTROL(a) (a),-1,-1,-1

/**
 * Register (RSL) ulbf#_ab_err_src
 *
 * Error Source Register
 */
union cavm_ulbfx_ab_err_src
{
    uint64_t u;
    struct cavm_ulbfx_ab_err_src_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t rd_ovf_unf_id2        : 16; /**< [ 63: 48](RAZ) Reserved. */
        uint64_t rd_ovf_unf_id1        : 16; /**< [ 47: 32](R/W1C/H) Read port1 overflow/underflow job ID. */
        uint64_t rd_ovf_unf_id0        : 16; /**< [ 31: 16](R/W1C/H) Read port0 overflow/underflow job ID. */
        uint64_t reserved_6_15         : 10;
        uint64_t rd_port_1_ovf         : 1;  /**< [  5:  5](R/W1C/H) Read port1 overflow. */
        uint64_t rd_port_0_ovf         : 1;  /**< [  4:  4](R/W1C/H) Read port0 overflow. */
        uint64_t reserved_2_3          : 2;
        uint64_t rd_port_1_unf         : 1;  /**< [  1:  1](R/W1C/H) Read port1 underflow (optional). */
        uint64_t rd_port_0_unf         : 1;  /**< [  0:  0](R/W1C/H) Read port0 underflow. */
#else /* Word 0 - Little Endian */
        uint64_t rd_port_0_unf         : 1;  /**< [  0:  0](R/W1C/H) Read port0 underflow. */
        uint64_t rd_port_1_unf         : 1;  /**< [  1:  1](R/W1C/H) Read port1 underflow (optional). */
        uint64_t reserved_2_3          : 2;
        uint64_t rd_port_0_ovf         : 1;  /**< [  4:  4](R/W1C/H) Read port0 overflow. */
        uint64_t rd_port_1_ovf         : 1;  /**< [  5:  5](R/W1C/H) Read port1 overflow. */
        uint64_t reserved_6_15         : 10;
        uint64_t rd_ovf_unf_id0        : 16; /**< [ 31: 16](R/W1C/H) Read port0 overflow/underflow job ID. */
        uint64_t rd_ovf_unf_id1        : 16; /**< [ 47: 32](R/W1C/H) Read port1 overflow/underflow job ID. */
        uint64_t rd_ovf_unf_id2        : 16; /**< [ 63: 48](RAZ) Reserved. */
#endif /* Word 0 - End */
    } s;
    struct cavm_ulbfx_ab_err_src_cn
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t rd_ovf_unf_id2        : 16; /**< [ 63: 48](RAZ) Reserved. */
        uint64_t rd_ovf_unf_id1        : 16; /**< [ 47: 32](R/W1C/H) Read port1 overflow/underflow job ID. */
        uint64_t rd_ovf_unf_id0        : 16; /**< [ 31: 16](R/W1C/H) Read port0 overflow/underflow job ID. */
        uint64_t reserved_8_15         : 8;
        uint64_t reserved_6_7          : 2;
        uint64_t rd_port_1_ovf         : 1;  /**< [  5:  5](R/W1C/H) Read port1 overflow. */
        uint64_t rd_port_0_ovf         : 1;  /**< [  4:  4](R/W1C/H) Read port0 overflow. */
        uint64_t reserved_2_3          : 2;
        uint64_t rd_port_1_unf         : 1;  /**< [  1:  1](R/W1C/H) Read port1 underflow (optional). */
        uint64_t rd_port_0_unf         : 1;  /**< [  0:  0](R/W1C/H) Read port0 underflow. */
#else /* Word 0 - Little Endian */
        uint64_t rd_port_0_unf         : 1;  /**< [  0:  0](R/W1C/H) Read port0 underflow. */
        uint64_t rd_port_1_unf         : 1;  /**< [  1:  1](R/W1C/H) Read port1 underflow (optional). */
        uint64_t reserved_2_3          : 2;
        uint64_t rd_port_0_ovf         : 1;  /**< [  4:  4](R/W1C/H) Read port0 overflow. */
        uint64_t rd_port_1_ovf         : 1;  /**< [  5:  5](R/W1C/H) Read port1 overflow. */
        uint64_t reserved_6_7          : 2;
        uint64_t reserved_8_15         : 8;
        uint64_t rd_ovf_unf_id0        : 16; /**< [ 31: 16](R/W1C/H) Read port0 overflow/underflow job ID. */
        uint64_t rd_ovf_unf_id1        : 16; /**< [ 47: 32](R/W1C/H) Read port1 overflow/underflow job ID. */
        uint64_t rd_ovf_unf_id2        : 16; /**< [ 63: 48](RAZ) Reserved. */
#endif /* Word 0 - End */
    } cn;
};
typedef union cavm_ulbfx_ab_err_src cavm_ulbfx_ab_err_src_t;

static inline uint64_t CAVM_ULBFX_AB_ERR_SRC(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_ULBFX_AB_ERR_SRC(uint64_t a)
{
    if (a<=3)
        return 0x87e041600030ll + 0x80000ll * ((a) & 0x3);
    __cavm_csr_fatal("ULBFX_AB_ERR_SRC", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_ULBFX_AB_ERR_SRC(a) cavm_ulbfx_ab_err_src_t
#define bustype_CAVM_ULBFX_AB_ERR_SRC(a) CSR_TYPE_RSL
#define basename_CAVM_ULBFX_AB_ERR_SRC(a) "ULBFX_AB_ERR_SRC"
#define busnum_CAVM_ULBFX_AB_ERR_SRC(a) (a)
#define arguments_CAVM_ULBFX_AB_ERR_SRC(a) (a),-1,-1,-1

/**
 * Register (RSL) ulbf#_ab_status
 *
 * ULBF Status Register
 */
union cavm_ulbfx_ab_status
{
    uint64_t u;
    struct cavm_ulbfx_ab_status_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_5_63         : 59;
        uint64_t ready                 : 1;  /**< [  4:  4](RO/H) Ready to receive the next job. */
        uint64_t reserved_3            : 1;
        uint64_t busy                  : 3;  /**< [  2:  0](RO/H) Busy. */
#else /* Word 0 - Little Endian */
        uint64_t busy                  : 3;  /**< [  2:  0](RO/H) Busy. */
        uint64_t reserved_3            : 1;
        uint64_t ready                 : 1;  /**< [  4:  4](RO/H) Ready to receive the next job. */
        uint64_t reserved_5_63         : 59;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_ulbfx_ab_status_s cn; */
};
typedef union cavm_ulbfx_ab_status cavm_ulbfx_ab_status_t;

static inline uint64_t CAVM_ULBFX_AB_STATUS(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_ULBFX_AB_STATUS(uint64_t a)
{
    if (a<=3)
        return 0x87e041600018ll + 0x80000ll * ((a) & 0x3);
    __cavm_csr_fatal("ULBFX_AB_STATUS", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_ULBFX_AB_STATUS(a) cavm_ulbfx_ab_status_t
#define bustype_CAVM_ULBFX_AB_STATUS(a) CSR_TYPE_RSL
#define basename_CAVM_ULBFX_AB_STATUS(a) "ULBFX_AB_STATUS"
#define busnum_CAVM_ULBFX_AB_STATUS(a) (a)
#define arguments_CAVM_ULBFX_AB_STATUS(a) (a),-1,-1,-1

#endif /* __CAVM_CSRS_ULBF_H__ */
