#ifndef __CAVM_CSRS_DLWG_H__
#define __CAVM_CSRS_DLWG_H__
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
 * DLWG.
 *
 * This file is auto generated. Do not edit.
 *
 */

/**
 * Register (RSL) dlwg_ab#_ab_err_src
 *
 * Error Source Register
 */
union cavm_dlwg_abx_ab_err_src
{
    uint64_t u;
    struct cavm_dlwg_abx_ab_err_src_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_32_63        : 32;
        uint64_t rd_ovf_unf_id0        : 16; /**< [ 31: 16](R/W1C/H) Read port1 overflow/underflow job ID. */
        uint64_t reserved_5_15         : 11;
        uint64_t rd_port_1_ovf         : 1;  /**< [  4:  4](R/W1C/H) Read port0 overflow. */
        uint64_t reserved_1_3          : 3;
        uint64_t rd_port_1_unf         : 1;  /**< [  0:  0](R/W1C/H) Read port0 underflow. */
#else /* Word 0 - Little Endian */
        uint64_t rd_port_1_unf         : 1;  /**< [  0:  0](R/W1C/H) Read port0 underflow. */
        uint64_t reserved_1_3          : 3;
        uint64_t rd_port_1_ovf         : 1;  /**< [  4:  4](R/W1C/H) Read port0 overflow. */
        uint64_t reserved_5_15         : 11;
        uint64_t rd_ovf_unf_id0        : 16; /**< [ 31: 16](R/W1C/H) Read port1 overflow/underflow job ID. */
        uint64_t reserved_32_63        : 32;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_dlwg_abx_ab_err_src_s cn; */
};
typedef union cavm_dlwg_abx_ab_err_src cavm_dlwg_abx_ab_err_src_t;

static inline uint64_t CAVM_DLWG_ABX_AB_ERR_SRC(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_DLWG_ABX_AB_ERR_SRC(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CN20KA) && (a<=1))
        return 0x87e042480030ll + 0x10000ll * ((a) & 0x1);
    __cavm_csr_fatal("DLWG_ABX_AB_ERR_SRC", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_DLWG_ABX_AB_ERR_SRC(a) cavm_dlwg_abx_ab_err_src_t
#define bustype_CAVM_DLWG_ABX_AB_ERR_SRC(a) CSR_TYPE_RSL
#define basename_CAVM_DLWG_ABX_AB_ERR_SRC(a) "DLWG_ABX_AB_ERR_SRC"
#define busnum_CAVM_DLWG_ABX_AB_ERR_SRC(a) (a)
#define arguments_CAVM_DLWG_ABX_AB_ERR_SRC(a) (a),-1,-1,-1

/**
 * Register (RSL) dlwg_ab#_control
 *
 * DLWG Control Register
 * DLWG control register
 */
union cavm_dlwg_abx_control
{
    uint64_t u;
    struct cavm_dlwg_abx_control_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t core2_job_id          : 16; /**< [ 63: 48](R/W) Configuration register job ID of DLWG CFG core0 */
        uint64_t core1_job_id          : 16; /**< [ 47: 32](R/W) Configuration register job ID of DLWG CFG core1 */
        uint64_t core0_job_id          : 16; /**< [ 31: 16](R/W) Configuration register job ID of DLWG CFG core2 */
        uint64_t reserved_0_15         : 16;
#else /* Word 0 - Little Endian */
        uint64_t reserved_0_15         : 16;
        uint64_t core0_job_id          : 16; /**< [ 31: 16](R/W) Configuration register job ID of DLWG CFG core2 */
        uint64_t core1_job_id          : 16; /**< [ 47: 32](R/W) Configuration register job ID of DLWG CFG core1 */
        uint64_t core2_job_id          : 16; /**< [ 63: 48](R/W) Configuration register job ID of DLWG CFG core0 */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_dlwg_abx_control_s cn; */
};
typedef union cavm_dlwg_abx_control cavm_dlwg_abx_control_t;

static inline uint64_t CAVM_DLWG_ABX_CONTROL(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_DLWG_ABX_CONTROL(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CN20KA) && (a<=1))
        return 0x87e042480000ll + 0x10000ll * ((a) & 0x1);
    __cavm_csr_fatal("DLWG_ABX_CONTROL", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_DLWG_ABX_CONTROL(a) cavm_dlwg_abx_control_t
#define bustype_CAVM_DLWG_ABX_CONTROL(a) CSR_TYPE_RSL
#define basename_CAVM_DLWG_ABX_CONTROL(a) "DLWG_ABX_CONTROL"
#define busnum_CAVM_DLWG_ABX_CONTROL(a) (a)
#define arguments_CAVM_DLWG_ABX_CONTROL(a) (a),-1,-1,-1

/**
 * Register (RSL) dlwg_ab#_hab_status
 *
 * DLWG HAB STATUS Register
 * DLWG HAB status
 */
union cavm_dlwg_abx_hab_status
{
    uint64_t u;
    struct cavm_dlwg_abx_hab_status_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_5_63         : 59;
        uint64_t ready                 : 1;  /**< [  4:  4](RO/H) Ready to receive the next job */
        uint64_t reserved_3            : 1;
        uint64_t busy                  : 3;  /**< [  2:  0](RO/H) Busy */
#else /* Word 0 - Little Endian */
        uint64_t busy                  : 3;  /**< [  2:  0](RO/H) Busy */
        uint64_t reserved_3            : 1;
        uint64_t ready                 : 1;  /**< [  4:  4](RO/H) Ready to receive the next job */
        uint64_t reserved_5_63         : 59;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_dlwg_abx_hab_status_s cn; */
};
typedef union cavm_dlwg_abx_hab_status cavm_dlwg_abx_hab_status_t;

static inline uint64_t CAVM_DLWG_ABX_HAB_STATUS(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_DLWG_ABX_HAB_STATUS(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CN20KA) && (a<=1))
        return 0x87e042480018ll + 0x10000ll * ((a) & 0x1);
    __cavm_csr_fatal("DLWG_ABX_HAB_STATUS", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_DLWG_ABX_HAB_STATUS(a) cavm_dlwg_abx_hab_status_t
#define bustype_CAVM_DLWG_ABX_HAB_STATUS(a) CSR_TYPE_RSL
#define basename_CAVM_DLWG_ABX_HAB_STATUS(a) "DLWG_ABX_HAB_STATUS"
#define busnum_CAVM_DLWG_ABX_HAB_STATUS(a) (a)
#define arguments_CAVM_DLWG_ABX_HAB_STATUS(a) (a),-1,-1,-1

#endif /* __CAVM_CSRS_DLWG_H__ */
