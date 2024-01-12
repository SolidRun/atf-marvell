#ifndef __CAVM_CSRS_DLBF_H__
#define __CAVM_CSRS_DLBF_H__
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
 * DLBF.
 *
 * This file is auto generated. Do not edit.
 *
 */

/**
 * Register (RSL) dlbf#_ab#_0_control
 *
 * DLBF Configuration Register 0
 * Configuration register for DLBF CFG CORE 0 to 2.
 */
union cavm_dlbfx_abx_0_control
{
    uint64_t u;
    struct cavm_dlbfx_abx_0_control_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t core2_job_id          : 16; /**< [ 63: 48](R/W) Configuration register job ID of DLBF cfg core0 */
        uint64_t core1_job_id          : 16; /**< [ 47: 32](R/W) Configuration register job ID of DLBF cfg core1 */
        uint64_t core0_job_id          : 16; /**< [ 31: 16](R/W) Configuration register job ID of DLBF cfg core2 */
        uint64_t reserved_0_15         : 16;
#else /* Word 0 - Little Endian */
        uint64_t reserved_0_15         : 16;
        uint64_t core0_job_id          : 16; /**< [ 31: 16](R/W) Configuration register job ID of DLBF cfg core2 */
        uint64_t core1_job_id          : 16; /**< [ 47: 32](R/W) Configuration register job ID of DLBF cfg core1 */
        uint64_t core2_job_id          : 16; /**< [ 63: 48](R/W) Configuration register job ID of DLBF cfg core0 */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_dlbfx_abx_0_control_s cn; */
};
typedef union cavm_dlbfx_abx_0_control cavm_dlbfx_abx_0_control_t;

static inline uint64_t CAVM_DLBFX_ABX_0_CONTROL(uint64_t a, uint64_t b) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_DLBFX_ABX_0_CONTROL(uint64_t a, uint64_t b)
{
    if (cavm_is_model(OCTEONTX_CN20KA) && ((a<=1) && (b<=1)))
        return 0x87e041b00000ll + 0x80000ll * ((a) & 0x1) + 0x10000ll * ((b) & 0x1);
    __cavm_csr_fatal("DLBFX_ABX_0_CONTROL", 2, a, b, 0, 0, 0, 0);
}

#define typedef_CAVM_DLBFX_ABX_0_CONTROL(a,b) cavm_dlbfx_abx_0_control_t
#define bustype_CAVM_DLBFX_ABX_0_CONTROL(a,b) CSR_TYPE_RSL
#define basename_CAVM_DLBFX_ABX_0_CONTROL(a,b) "DLBFX_ABX_0_CONTROL"
#define busnum_CAVM_DLBFX_ABX_0_CONTROL(a,b) (a)
#define arguments_CAVM_DLBFX_ABX_0_CONTROL(a,b) (a),(b),-1,-1

/**
 * Register (RSL) dlbf#_ab#_err_src
 *
 * Error Source Register
 */
union cavm_dlbfx_abx_err_src
{
    uint64_t u;
    struct cavm_dlbfx_abx_err_src_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_48_63        : 16;
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
        uint64_t reserved_48_63        : 16;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_dlbfx_abx_err_src_s cn; */
};
typedef union cavm_dlbfx_abx_err_src cavm_dlbfx_abx_err_src_t;

static inline uint64_t CAVM_DLBFX_ABX_ERR_SRC(uint64_t a, uint64_t b) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_DLBFX_ABX_ERR_SRC(uint64_t a, uint64_t b)
{
    if (cavm_is_model(OCTEONTX_CN20KA) && ((a<=1) && (b<=1)))
        return 0x87e041b00030ll + 0x80000ll * ((a) & 0x1) + 0x10000ll * ((b) & 0x1);
    __cavm_csr_fatal("DLBFX_ABX_ERR_SRC", 2, a, b, 0, 0, 0, 0);
}

#define typedef_CAVM_DLBFX_ABX_ERR_SRC(a,b) cavm_dlbfx_abx_err_src_t
#define bustype_CAVM_DLBFX_ABX_ERR_SRC(a,b) CSR_TYPE_RSL
#define basename_CAVM_DLBFX_ABX_ERR_SRC(a,b) "DLBFX_ABX_ERR_SRC"
#define busnum_CAVM_DLBFX_ABX_ERR_SRC(a,b) (a)
#define arguments_CAVM_DLBFX_ABX_ERR_SRC(a,b) (a),(b),-1,-1

/**
 * Register (RSL) dlbf#_ab#_status
 *
 * DLBF Status Register
 * DLBF HAB status
 */
union cavm_dlbfx_abx_status
{
    uint64_t u;
    struct cavm_dlbfx_abx_status_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_5_63         : 59;
        uint64_t ready                 : 1;  /**< [  4:  4](RO/H) Ready to receive the next job */
        uint64_t reserved_3            : 1;
        uint64_t busy                  : 3;  /**< [  2:  0](RO/H) Busy. */
#else /* Word 0 - Little Endian */
        uint64_t busy                  : 3;  /**< [  2:  0](RO/H) Busy. */
        uint64_t reserved_3            : 1;
        uint64_t ready                 : 1;  /**< [  4:  4](RO/H) Ready to receive the next job */
        uint64_t reserved_5_63         : 59;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_dlbfx_abx_status_s cn; */
};
typedef union cavm_dlbfx_abx_status cavm_dlbfx_abx_status_t;

static inline uint64_t CAVM_DLBFX_ABX_STATUS(uint64_t a, uint64_t b) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_DLBFX_ABX_STATUS(uint64_t a, uint64_t b)
{
    if (cavm_is_model(OCTEONTX_CN20KA) && ((a<=1) && (b<=1)))
        return 0x87e041b00018ll + 0x80000ll * ((a) & 0x1) + 0x10000ll * ((b) & 0x1);
    __cavm_csr_fatal("DLBFX_ABX_STATUS", 2, a, b, 0, 0, 0, 0);
}

#define typedef_CAVM_DLBFX_ABX_STATUS(a,b) cavm_dlbfx_abx_status_t
#define bustype_CAVM_DLBFX_ABX_STATUS(a,b) CSR_TYPE_RSL
#define basename_CAVM_DLBFX_ABX_STATUS(a,b) "DLBFX_ABX_STATUS"
#define busnum_CAVM_DLBFX_ABX_STATUS(a,b) (a)
#define arguments_CAVM_DLBFX_ABX_STATUS(a,b) (a),(b),-1,-1

#endif /* __CAVM_CSRS_DLBF_H__ */
