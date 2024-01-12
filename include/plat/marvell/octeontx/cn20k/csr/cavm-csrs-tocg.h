#ifndef __CAVM_CSRS_TOCG_H__
#define __CAVM_CSRS_TOCG_H__
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
 * TOCG.
 *
 * This file is auto generated. Do not edit.
 *
 */

/**
 * Register (RSL) tocg_ab_control
 *
 * TOCG Control Register
 * TOCG control register
 */
union cavm_tocg_ab_control
{
    uint64_t u;
    struct cavm_tocg_ab_control_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t slot2_job_id          : 16; /**< [ 63: 48](R/W) Configuration register job ID of TOCG CFG slot2 */
        uint64_t slot1_job_id          : 16; /**< [ 47: 32](R/W) Configuration register job ID of TOCG CFG slot1 */
        uint64_t slot0_job_id          : 16; /**< [ 31: 16](R/W) Configuration register job ID of TOCG CFG slot0 */
        uint64_t reserved_3_15         : 13;
        uint64_t slot2_status          : 1;  /**< [  2:  2](R/W) Configuration register job status of TOCG CFG slot0 */
        uint64_t slot1_status          : 1;  /**< [  1:  1](R/W) Configuration register job status of TOCG CFG slot1 */
        uint64_t slot0_status          : 1;  /**< [  0:  0](R/W) Configuration register job status of TOCG CFG slot0 */
#else /* Word 0 - Little Endian */
        uint64_t slot0_status          : 1;  /**< [  0:  0](R/W) Configuration register job status of TOCG CFG slot0 */
        uint64_t slot1_status          : 1;  /**< [  1:  1](R/W) Configuration register job status of TOCG CFG slot1 */
        uint64_t slot2_status          : 1;  /**< [  2:  2](R/W) Configuration register job status of TOCG CFG slot0 */
        uint64_t reserved_3_15         : 13;
        uint64_t slot0_job_id          : 16; /**< [ 31: 16](R/W) Configuration register job ID of TOCG CFG slot0 */
        uint64_t slot1_job_id          : 16; /**< [ 47: 32](R/W) Configuration register job ID of TOCG CFG slot1 */
        uint64_t slot2_job_id          : 16; /**< [ 63: 48](R/W) Configuration register job ID of TOCG CFG slot2 */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_tocg_ab_control_s cn; */
};
typedef union cavm_tocg_ab_control cavm_tocg_ab_control_t;

#define CAVM_TOCG_AB_CONTROL CAVM_TOCG_AB_CONTROL_FUNC()
static inline uint64_t CAVM_TOCG_AB_CONTROL_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_TOCG_AB_CONTROL_FUNC(void)
{
    if (cavm_is_model(OCTEONTX_CN20KA))
        return 0x87e042400000ll;
    __cavm_csr_fatal("TOCG_AB_CONTROL", 0, 0, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_TOCG_AB_CONTROL cavm_tocg_ab_control_t
#define bustype_CAVM_TOCG_AB_CONTROL CSR_TYPE_RSL
#define basename_CAVM_TOCG_AB_CONTROL "TOCG_AB_CONTROL"
#define busnum_CAVM_TOCG_AB_CONTROL 0
#define arguments_CAVM_TOCG_AB_CONTROL -1,-1,-1,-1

/**
 * Register (RSL) tocg_ab_err_src
 *
 * Error Source Register
 */
union cavm_tocg_ab_err_src
{
    uint64_t u;
    struct cavm_tocg_ab_err_src_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t slot2_err_job_id      : 16; /**< [ 63: 48](R/W1C/H) Read slot2 overflow/underflow job ID. */
        uint64_t slot1_err_job_id      : 16; /**< [ 47: 32](R/W1C/H) Read slot1 overflow/underflow job ID. */
        uint64_t slot0_err_job_id      : 16; /**< [ 31: 16](R/W1C/H) Read slot0 overflow/underflow job ID. */
        uint64_t reserved_5_15         : 11;
        uint64_t rd_port_0_ovf         : 1;  /**< [  4:  4](R/W1C/H) Read port0 overflow. */
        uint64_t reserved_1_3          : 3;
        uint64_t rd_port_0_unf         : 1;  /**< [  0:  0](R/W1C/H) Read port0 underflow. */
#else /* Word 0 - Little Endian */
        uint64_t rd_port_0_unf         : 1;  /**< [  0:  0](R/W1C/H) Read port0 underflow. */
        uint64_t reserved_1_3          : 3;
        uint64_t rd_port_0_ovf         : 1;  /**< [  4:  4](R/W1C/H) Read port0 overflow. */
        uint64_t reserved_5_15         : 11;
        uint64_t slot0_err_job_id      : 16; /**< [ 31: 16](R/W1C/H) Read slot0 overflow/underflow job ID. */
        uint64_t slot1_err_job_id      : 16; /**< [ 47: 32](R/W1C/H) Read slot1 overflow/underflow job ID. */
        uint64_t slot2_err_job_id      : 16; /**< [ 63: 48](R/W1C/H) Read slot2 overflow/underflow job ID. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_tocg_ab_err_src_s cn; */
};
typedef union cavm_tocg_ab_err_src cavm_tocg_ab_err_src_t;

#define CAVM_TOCG_AB_ERR_SRC CAVM_TOCG_AB_ERR_SRC_FUNC()
static inline uint64_t CAVM_TOCG_AB_ERR_SRC_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_TOCG_AB_ERR_SRC_FUNC(void)
{
    if (cavm_is_model(OCTEONTX_CN20KA))
        return 0x87e042400030ll;
    __cavm_csr_fatal("TOCG_AB_ERR_SRC", 0, 0, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_TOCG_AB_ERR_SRC cavm_tocg_ab_err_src_t
#define bustype_CAVM_TOCG_AB_ERR_SRC CSR_TYPE_RSL
#define basename_CAVM_TOCG_AB_ERR_SRC "TOCG_AB_ERR_SRC"
#define busnum_CAVM_TOCG_AB_ERR_SRC 0
#define arguments_CAVM_TOCG_AB_ERR_SRC -1,-1,-1,-1

/**
 * Register (RSL) tocg_ab_hab_status
 *
 * TOCG HAB STATUS Register
 * TOCG HAB status
 */
union cavm_tocg_ab_hab_status
{
    uint64_t u;
    struct cavm_tocg_ab_hab_status_s
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
    /* struct cavm_tocg_ab_hab_status_s cn; */
};
typedef union cavm_tocg_ab_hab_status cavm_tocg_ab_hab_status_t;

#define CAVM_TOCG_AB_HAB_STATUS CAVM_TOCG_AB_HAB_STATUS_FUNC()
static inline uint64_t CAVM_TOCG_AB_HAB_STATUS_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_TOCG_AB_HAB_STATUS_FUNC(void)
{
    if (cavm_is_model(OCTEONTX_CN20KA))
        return 0x87e042400008ll;
    __cavm_csr_fatal("TOCG_AB_HAB_STATUS", 0, 0, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_TOCG_AB_HAB_STATUS cavm_tocg_ab_hab_status_t
#define bustype_CAVM_TOCG_AB_HAB_STATUS CSR_TYPE_RSL
#define basename_CAVM_TOCG_AB_HAB_STATUS "TOCG_AB_HAB_STATUS"
#define busnum_CAVM_TOCG_AB_HAB_STATUS 0
#define arguments_CAVM_TOCG_AB_HAB_STATUS -1,-1,-1,-1

#endif /* __CAVM_CSRS_TOCG_H__ */
