#ifndef __CAVM_CSRS_ML_H__
#define __CAVM_CSRS_ML_H__
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
 * OcteonTX ML.
 *
 * This file is auto generated. Do not edit.
 *
 */

/**
 * Enumeration ml_bar_e
 *
 * ML Base Address Register Enumeration
 * Enumerates the base address registers.
 */
#define CAVM_ML_BAR_E_MLX_PF_BAR0(a) (0x828000000000ll + 0x1000000000ll * (a))
#define CAVM_ML_BAR_E_MLX_PF_BAR0_SIZE 0x40000000ull
#define CAVM_ML_BAR_E_MLX_PF_BAR4(a) (0x828100000000ll + 0x1000000000ll * (a))
#define CAVM_ML_BAR_E_MLX_PF_BAR4_SIZE 0x100000ull

/**
 * Enumeration ml_int_vec_e
 *
 * ML PF MSI-X Vector Enumeration
 * Enumerates the PF MSI-X interrupt vectors.
 */
#define CAVM_ML_INT_VEC_E_CORE_INT_HI (1)
#define CAVM_ML_INT_VEC_E_CORE_INT_LO (0)
#define CAVM_ML_INT_VEC_E_WRAP_ERR_INT (2)

/**
 * Enumeration ml_job_stg_e
 *
 * ML Job Stages Enumeration
 * Enumerates the ML Job Stages
 */
#define CAVM_ML_JOB_STG_E_COMP (2)
#define CAVM_ML_JOB_STG_E_FETCH (0)
#define CAVM_ML_JOB_STG_E_RUN (1)

/**
 * Structure ml_jce_s
 *
 * ML Job Completion Structure
 */
union cavm_ml_jce_s
{
    uint64_t u[2];
    struct cavm_ml_jce_s_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t tag                   : 32; /**< [ 63: 32] Tag. */
        uint64_t ggrp                  : 8;  /**< [ 31: 24] Unused[7] + Guest Group[6:0]. */
        uint64_t pf_func               : 16; /**< [ 23:  8] Physical function number. */
        uint64_t ttype                 : 2;  /**< [  7:  6] Tag type. */
        uint64_t ggrp_h                : 2;  /**< [  5:  4] Reserved for future architecture. */
        uint64_t reserved_0_3          : 4;
#else /* Word 0 - Little Endian */
        uint64_t reserved_0_3          : 4;
        uint64_t ggrp_h                : 2;  /**< [  5:  4] Reserved for future architecture. */
        uint64_t ttype                 : 2;  /**< [  7:  6] Tag type. */
        uint64_t pf_func               : 16; /**< [ 23:  8] Physical function number. */
        uint64_t ggrp                  : 8;  /**< [ 31: 24] Unused[7] + Guest Group[6:0]. */
        uint64_t tag                   : 32; /**< [ 63: 32] Tag. */
#endif /* Word 0 - End */
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 1 - Big Endian */
        uint64_t reserved_117_127      : 11;
        uint64_t wqp                   : 53; /**< [116: 64] Work Queue Pointer */
#else /* Word 1 - Little Endian */
        uint64_t wqp                   : 53; /**< [116: 64] Work Queue Pointer */
        uint64_t reserved_117_127      : 11;
#endif /* Word 1 - End */
    } s;
    /* struct cavm_ml_jce_s_s cn; */
};

/**
 * Structure ml_job_cmd_s
 *
 * ML Job Command Structure
 */
union cavm_ml_job_cmd_s
{
    uint64_t u[2];
    struct cavm_ml_job_cmd_s_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_0_63         : 64;
#else /* Word 0 - Little Endian */
        uint64_t reserved_0_63         : 64;
#endif /* Word 0 - End */
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 1 - Big Endian */
        uint64_t reserved_117_127      : 11;
        uint64_t jobptr                : 53; /**< [116: 64] Job Pointer */
#else /* Word 1 - Little Endian */
        uint64_t jobptr                : 53; /**< [116: 64] Job Pointer */
        uint64_t reserved_117_127      : 11;
#endif /* Word 1 - End */
    } s;
    /* struct cavm_ml_job_cmd_s_s cn; */
};

/**
 * Structure ml_lwa_debug_s
 *
 * ML SSO Interface Debug Data Structure
 */
union cavm_ml_lwa_debug_s
{
    uint64_t u[2];
    struct cavm_ml_lwa_debug_s_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t ttype                 : 2;  /**< [ 63: 62] Tag type. */
        uint64_t reserved_61           : 1;
        uint64_t lwa                   : 1;  /**< [ 60: 60] LWA Control, set to 1 for MLW. */
        uint64_t ggrp                  : 10; /**< [ 59: 50] Guest Group. */
        uint64_t wqp                   : 50; /**< [ 49:  0] Work Queue Pointer. */
#else /* Word 0 - Little Endian */
        uint64_t wqp                   : 50; /**< [ 49:  0] Work Queue Pointer. */
        uint64_t ggrp                  : 10; /**< [ 59: 50] Guest Group. */
        uint64_t lwa                   : 1;  /**< [ 60: 60] LWA Control, set to 1 for MLW. */
        uint64_t reserved_61           : 1;
        uint64_t ttype                 : 2;  /**< [ 63: 62] Tag type. */
#endif /* Word 0 - End */
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 1 - Big Endian */
        uint64_t reserved_112_127      : 16;
        uint64_t pf_func               : 16; /**< [111: 96] Physical function number. */
        uint64_t tag                   : 32; /**< [ 95: 64] Tag. */
#else /* Word 1 - Little Endian */
        uint64_t tag                   : 32; /**< [ 95: 64] Tag. */
        uint64_t pf_func               : 16; /**< [111: 96] Physical function number. */
        uint64_t reserved_112_127      : 16;
#endif /* Word 1 - End */
    } s;
    /* struct cavm_ml_lwa_debug_s_s cn; */
};

/**
 * Register (NCB) ml#_active_pc
 *
 * ML Conditional Coprocessor Clock Counter Register
 */
union cavm_mlx_active_pc
{
    uint64_t u;
    struct cavm_mlx_active_pc_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t active_pc             : 64; /**< [ 63:  0](R/W/H) This register increments on every coprocessor-clock cycle that the MLW conditional clocks
                                                                 are enabled. */
#else /* Word 0 - Little Endian */
        uint64_t active_pc             : 64; /**< [ 63:  0](R/W/H) This register increments on every coprocessor-clock cycle that the MLW conditional clocks
                                                                 are enabled. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_mlx_active_pc_s cn; */
};
typedef union cavm_mlx_active_pc cavm_mlx_active_pc_t;

static inline uint64_t CAVM_MLX_ACTIVE_PC(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_MLX_ACTIVE_PC(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CN10KA) && (a==0))
        return 0x8280000100f0ll + 0x1000000000ll * ((a) & 0x0);
    __cavm_csr_fatal("MLX_ACTIVE_PC", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_MLX_ACTIVE_PC(a) cavm_mlx_active_pc_t
#define bustype_CAVM_MLX_ACTIVE_PC(a) CSR_TYPE_NCB
#define basename_CAVM_MLX_ACTIVE_PC(a) "MLX_ACTIVE_PC"
#define device_bar_CAVM_MLX_ACTIVE_PC(a) 0x0 /* PF_BAR0 */
#define busnum_CAVM_MLX_ACTIVE_PC(a) (a)
#define arguments_CAVM_MLX_ACTIVE_PC(a) (a),-1,-1,-1

/**
 * Register (NCB) ml#_anb#_aximstr_status
 *
 * ANB AXISLV Block Status Register
 * ANB0 is for ACC ; ANB1 is for DMA ; ANB2 is for Job Manager
 */
union cavm_mlx_anbx_aximstr_status
{
    uint64_t u;
    struct cavm_mlx_anbx_aximstr_status_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_2_63         : 62;
        uint64_t anb_aximstr_wr_resp_nok : 1;/**< [  1:  1](RO/H) Set indicates there was an axi read response of not ok. */
        uint64_t anb_aximstr_rd_resp_nok : 1;/**< [  0:  0](RO/H) Set indicates there was an axi read response of not ok. */
#else /* Word 0 - Little Endian */
        uint64_t anb_aximstr_rd_resp_nok : 1;/**< [  0:  0](RO/H) Set indicates there was an axi read response of not ok. */
        uint64_t anb_aximstr_wr_resp_nok : 1;/**< [  1:  1](RO/H) Set indicates there was an axi read response of not ok. */
        uint64_t reserved_2_63         : 62;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_mlx_anbx_aximstr_status_s cn; */
};
typedef union cavm_mlx_anbx_aximstr_status cavm_mlx_anbx_aximstr_status_t;

static inline uint64_t CAVM_MLX_ANBX_AXIMSTR_STATUS(uint64_t a, uint64_t b) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_MLX_ANBX_AXIMSTR_STATUS(uint64_t a, uint64_t b)
{
    if (cavm_is_model(OCTEONTX_CN10KA) && ((a==0) && (b<=2)))
        return 0x828000018060ll + 0x1000000000ll * ((a) & 0x0) + 0x1000ll * ((b) & 0x3);
    __cavm_csr_fatal("MLX_ANBX_AXIMSTR_STATUS", 2, a, b, 0, 0, 0, 0);
}

#define typedef_CAVM_MLX_ANBX_AXIMSTR_STATUS(a,b) cavm_mlx_anbx_aximstr_status_t
#define bustype_CAVM_MLX_ANBX_AXIMSTR_STATUS(a,b) CSR_TYPE_NCB
#define basename_CAVM_MLX_ANBX_AXIMSTR_STATUS(a,b) "MLX_ANBX_AXIMSTR_STATUS"
#define device_bar_CAVM_MLX_ANBX_AXIMSTR_STATUS(a,b) 0x0 /* PF_BAR0 */
#define busnum_CAVM_MLX_ANBX_AXIMSTR_STATUS(a,b) (a)
#define arguments_CAVM_MLX_ANBX_AXIMSTR_STATUS(a,b) (a),(b),-1,-1

/**
 * Register (NCB) ml#_anb#_axislv_status
 *
 * ANB AXISLV Block Status Register
 * ANB0 is for ACC ; ANB1 is for DMA ; ANB2 is for Job Manager
 */
union cavm_mlx_anbx_axislv_status
{
    uint64_t u;
    struct cavm_mlx_anbx_axislv_status_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_9_63         : 55;
        uint64_t anb_axislv_single_beat_nrw_rd : 1;/**< [  8:  8](RO/H) A single data beat narrow read occurred. */
        uint64_t anb_axislv_single_beat_nrw_wr : 1;/**< [  7:  7](RO/H) A single data beat narrow write occurred. */
        uint64_t anb_axislv_multi_beat_nrw_rd : 1;/**< [  6:  6](RO/H) A multi data beat narrow read occurred. */
        uint64_t anb_axislv_multi_beat_nrw_wr : 1;/**< [  5:  5](RO/H) A multi data beat narrow write occurred. */
        uint64_t anb_axislv_empty_write : 1; /**< [  4:  4](RO/H) An AXI write occurred with no data beats have any BE set. */
        uint64_t anb_axislv_write_size_exc : 1;/**< [  3:  3](RO/H) A write awlen exceeded supported size. */
        uint64_t anb_axislv_load_size_exc : 1;/**< [  2:  2](RO/H) A read arlen exceeded supported size. */
        uint64_t anb_axislv_r_fifo_overrun : 1;/**< [  1:  1](RO/H) Set indicates there was a load data response fifo overrun. */
        uint64_t anb_axislv_b_fifo_overrun : 1;/**< [  0:  0](RO/H) Set indicates there was a write response fifo overrun. */
#else /* Word 0 - Little Endian */
        uint64_t anb_axislv_b_fifo_overrun : 1;/**< [  0:  0](RO/H) Set indicates there was a write response fifo overrun. */
        uint64_t anb_axislv_r_fifo_overrun : 1;/**< [  1:  1](RO/H) Set indicates there was a load data response fifo overrun. */
        uint64_t anb_axislv_load_size_exc : 1;/**< [  2:  2](RO/H) A read arlen exceeded supported size. */
        uint64_t anb_axislv_write_size_exc : 1;/**< [  3:  3](RO/H) A write awlen exceeded supported size. */
        uint64_t anb_axislv_empty_write : 1; /**< [  4:  4](RO/H) An AXI write occurred with no data beats have any BE set. */
        uint64_t anb_axislv_multi_beat_nrw_wr : 1;/**< [  5:  5](RO/H) A multi data beat narrow write occurred. */
        uint64_t anb_axislv_multi_beat_nrw_rd : 1;/**< [  6:  6](RO/H) A multi data beat narrow read occurred. */
        uint64_t anb_axislv_single_beat_nrw_wr : 1;/**< [  7:  7](RO/H) A single data beat narrow write occurred. */
        uint64_t anb_axislv_single_beat_nrw_rd : 1;/**< [  8:  8](RO/H) A single data beat narrow read occurred. */
        uint64_t reserved_9_63         : 55;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_mlx_anbx_axislv_status_s cn; */
};
typedef union cavm_mlx_anbx_axislv_status cavm_mlx_anbx_axislv_status_t;

static inline uint64_t CAVM_MLX_ANBX_AXISLV_STATUS(uint64_t a, uint64_t b) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_MLX_ANBX_AXISLV_STATUS(uint64_t a, uint64_t b)
{
    if (cavm_is_model(OCTEONTX_CN10KA) && ((a==0) && (b<=2)))
        return 0x828000018030ll + 0x1000000000ll * ((a) & 0x0) + 0x1000ll * ((b) & 0x3);
    __cavm_csr_fatal("MLX_ANBX_AXISLV_STATUS", 2, a, b, 0, 0, 0, 0);
}

#define typedef_CAVM_MLX_ANBX_AXISLV_STATUS(a,b) cavm_mlx_anbx_axislv_status_t
#define bustype_CAVM_MLX_ANBX_AXISLV_STATUS(a,b) CSR_TYPE_NCB
#define basename_CAVM_MLX_ANBX_AXISLV_STATUS(a,b) "MLX_ANBX_AXISLV_STATUS"
#define device_bar_CAVM_MLX_ANBX_AXISLV_STATUS(a,b) 0x0 /* PF_BAR0 */
#define busnum_CAVM_MLX_ANBX_AXISLV_STATUS(a,b) (a)
#define arguments_CAVM_MLX_ANBX_AXISLV_STATUS(a,b) (a),(b),-1,-1

/**
 * Register (NCB) ml#_anb#_backp_disable
 *
 * ANB Backpressure Configuration Register
 * ANB0 is for ACC ; ANB1 is for DMA ; ANB2 is for Job Manager
 */
union cavm_mlx_anbx_backp_disable
{
    uint64_t u;
    struct cavm_mlx_anbx_backp_disable_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_2_63         : 62;
        uint64_t anb_extmstr_r_backp_disable : 1;/**< [  1:  1](R/W) On the anb-\>ncbitx path (axi external master) disable backpressure from the r
                                                                 fifo to awready if it is guaranteed that the axi external master will not deassert rready.
                                                                 This is NOT part of the axi spec and may result in lost load data responses if
                                                                 configured improperly
                                                                 but is provided to improve throughput. */
        uint64_t anb_extmstr_b_backp_disable : 1;/**< [  0:  0](R/W) On the anb-\>ncbitx path (axi external master) disable backpressure from the b
                                                                 fifo to awready if it is guaranteed that the axi external master will not deassert bready.
                                                                 This is NOT part of the axi spec and may result in lost write responses if configured improperly
                                                                 but is provided to improve throughput. */
#else /* Word 0 - Little Endian */
        uint64_t anb_extmstr_b_backp_disable : 1;/**< [  0:  0](R/W) On the anb-\>ncbitx path (axi external master) disable backpressure from the b
                                                                 fifo to awready if it is guaranteed that the axi external master will not deassert bready.
                                                                 This is NOT part of the axi spec and may result in lost write responses if configured improperly
                                                                 but is provided to improve throughput. */
        uint64_t anb_extmstr_r_backp_disable : 1;/**< [  1:  1](R/W) On the anb-\>ncbitx path (axi external master) disable backpressure from the r
                                                                 fifo to awready if it is guaranteed that the axi external master will not deassert rready.
                                                                 This is NOT part of the axi spec and may result in lost load data responses if
                                                                 configured improperly
                                                                 but is provided to improve throughput. */
        uint64_t reserved_2_63         : 62;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_mlx_anbx_backp_disable_s cn; */
};
typedef union cavm_mlx_anbx_backp_disable cavm_mlx_anbx_backp_disable_t;

static inline uint64_t CAVM_MLX_ANBX_BACKP_DISABLE(uint64_t a, uint64_t b) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_MLX_ANBX_BACKP_DISABLE(uint64_t a, uint64_t b)
{
    if (cavm_is_model(OCTEONTX_CN10KA) && ((a==0) && (b<=2)))
        return 0x828000018000ll + 0x1000000000ll * ((a) & 0x0) + 0x1000ll * ((b) & 0x3);
    __cavm_csr_fatal("MLX_ANBX_BACKP_DISABLE", 2, a, b, 0, 0, 0, 0);
}

#define typedef_CAVM_MLX_ANBX_BACKP_DISABLE(a,b) cavm_mlx_anbx_backp_disable_t
#define bustype_CAVM_MLX_ANBX_BACKP_DISABLE(a,b) CSR_TYPE_NCB
#define basename_CAVM_MLX_ANBX_BACKP_DISABLE(a,b) "MLX_ANBX_BACKP_DISABLE"
#define device_bar_CAVM_MLX_ANBX_BACKP_DISABLE(a,b) 0x0 /* PF_BAR0 */
#define busnum_CAVM_MLX_ANBX_BACKP_DISABLE(a,b) (a)
#define arguments_CAVM_MLX_ANBX_BACKP_DISABLE(a,b) (a),(b),-1,-1

/**
 * Register (NCB) ml#_anb#_ncbi_cr_ovr
 *
 * ANB NCBITXT CR Path CMD Overrides Register
 * ANB0 is for ACC ; ANB1 is for DMA ; ANB2 is for Job Manager
 */
union cavm_mlx_anbx_ncbi_cr_ovr
{
    uint64_t u;
    struct cavm_mlx_anbx_ncbi_cr_ovr_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_1_63         : 63;
        uint64_t anb_ncbi_cr_ovr_relaxed_rready : 1;/**< [  0:  0](R/W) Force NCBI to have more than 1 CR data/req credit available before asserting AXI
                                                                 RREADY to external AXI slave. For diagnostic use only. */
#else /* Word 0 - Little Endian */
        uint64_t anb_ncbi_cr_ovr_relaxed_rready : 1;/**< [  0:  0](R/W) Force NCBI to have more than 1 CR data/req credit available before asserting AXI
                                                                 RREADY to external AXI slave. For diagnostic use only. */
        uint64_t reserved_1_63         : 63;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_mlx_anbx_ncbi_cr_ovr_s cn; */
};
typedef union cavm_mlx_anbx_ncbi_cr_ovr cavm_mlx_anbx_ncbi_cr_ovr_t;

static inline uint64_t CAVM_MLX_ANBX_NCBI_CR_OVR(uint64_t a, uint64_t b) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_MLX_ANBX_NCBI_CR_OVR(uint64_t a, uint64_t b)
{
    if (cavm_is_model(OCTEONTX_CN10KA) && ((a==0) && (b<=2)))
        return 0x828000018070ll + 0x1000000000ll * ((a) & 0x0) + 0x1000ll * ((b) & 0x3);
    __cavm_csr_fatal("MLX_ANBX_NCBI_CR_OVR", 2, a, b, 0, 0, 0, 0);
}

#define typedef_CAVM_MLX_ANBX_NCBI_CR_OVR(a,b) cavm_mlx_anbx_ncbi_cr_ovr_t
#define bustype_CAVM_MLX_ANBX_NCBI_CR_OVR(a,b) CSR_TYPE_NCB
#define basename_CAVM_MLX_ANBX_NCBI_CR_OVR(a,b) "MLX_ANBX_NCBI_CR_OVR"
#define device_bar_CAVM_MLX_ANBX_NCBI_CR_OVR(a,b) 0x0 /* PF_BAR0 */
#define busnum_CAVM_MLX_ANBX_NCBI_CR_OVR(a,b) (a)
#define arguments_CAVM_MLX_ANBX_NCBI_CR_OVR(a,b) (a),(b),-1,-1

/**
 * Register (NCB) ml#_anb#_ncbi_np_ovr
 *
 * ANB NCBITXT NP Path CMD Overrides Register
 * ANB0 is for ACC ; ANB1 is for DMA ; ANB2 is for Job Manager
 */
union cavm_mlx_anbx_ncbi_np_ovr
{
    uint64_t u;
    struct cavm_mlx_anbx_ncbi_np_ovr_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_31_63        : 33;
        uint64_t anb_ncbi_np_mpamdid_ovr : 10;/**< [ 30: 21](R/W) Value to set mpamdid field in p path cmd going to ncb_cmn. */
        uint64_t anb_ncbi_np_mpamdid_ovr_vld : 1;/**< [ 20: 20](R/W) Use [ANB_NCBI_NP_MPAMDID_OVR] to set mpamdid field in p path cmd going to ncb_cmn. */
        uint64_t anb_ncbi_np_mpadid_val_ovr : 1;/**< [ 19: 19](R/W) Value to set mpadid_val field in p path cmd going to ncb_cmn. */
        uint64_t anb_ncbi_np_mpadid_val_ovr_vld : 1;/**< [ 18: 18](R/W) Use [ANB_NCBI_NP_MPADID_VAL_OVR] to set mpadid_val field in p path cmd going to ncb_cmn. */
        uint64_t anb_ncbi_np_ro_ovr    : 1;  /**< [ 17: 17](R/W) Value to set ro field in p path cmd going to ncb_cmn. */
        uint64_t anb_ncbi_np_ro_ovr_vld : 1; /**< [ 16: 16](R/W) Use [ANB_NCBI_NP_RO_OVR] to set ro field in p path cmd going to ncb_cmn. */
        uint64_t anb_ncbi_np_paddr_ovr : 1;  /**< [ 15: 15](R/W) Value to set paddr field in p path cmd going to ncb_cmn. */
        uint64_t anb_ncbi_np_paddr_ovr_vld : 1;/**< [ 14: 14](R/W) Use [ANB_NCBI_NP_PADDR_OVR] to set paddr field in p path cmd going to ncb_cmn */
        uint64_t anb_ncbi_np_ns_ovr    : 1;  /**< [ 13: 13](R/W) Value to set ns field in p path cmd going to ncb_cmn. */
        uint64_t anb_ncbi_np_ns_ovr_vld : 1; /**< [ 12: 12](R/W) Use [ANB_NCBI_NP_NS_OVR] to set ns field in p path cmd going to ncb_cmn */
        uint64_t anb_ncbi_np_msh_dst_ovr : 11;/**< [ 11:  1](R/W) Value to set msh_dst field in p path cmd going to ncb_cmn. */
        uint64_t anb_ncbi_np_msh_dst_ovr_vld : 1;/**< [  0:  0](R/W) Use [ANB_NCBI_NP_MSH_DST_OVR] to set msh_dst field in p path cmd going to ncb_cmn. */
#else /* Word 0 - Little Endian */
        uint64_t anb_ncbi_np_msh_dst_ovr_vld : 1;/**< [  0:  0](R/W) Use [ANB_NCBI_NP_MSH_DST_OVR] to set msh_dst field in p path cmd going to ncb_cmn. */
        uint64_t anb_ncbi_np_msh_dst_ovr : 11;/**< [ 11:  1](R/W) Value to set msh_dst field in p path cmd going to ncb_cmn. */
        uint64_t anb_ncbi_np_ns_ovr_vld : 1; /**< [ 12: 12](R/W) Use [ANB_NCBI_NP_NS_OVR] to set ns field in p path cmd going to ncb_cmn */
        uint64_t anb_ncbi_np_ns_ovr    : 1;  /**< [ 13: 13](R/W) Value to set ns field in p path cmd going to ncb_cmn. */
        uint64_t anb_ncbi_np_paddr_ovr_vld : 1;/**< [ 14: 14](R/W) Use [ANB_NCBI_NP_PADDR_OVR] to set paddr field in p path cmd going to ncb_cmn */
        uint64_t anb_ncbi_np_paddr_ovr : 1;  /**< [ 15: 15](R/W) Value to set paddr field in p path cmd going to ncb_cmn. */
        uint64_t anb_ncbi_np_ro_ovr_vld : 1; /**< [ 16: 16](R/W) Use [ANB_NCBI_NP_RO_OVR] to set ro field in p path cmd going to ncb_cmn. */
        uint64_t anb_ncbi_np_ro_ovr    : 1;  /**< [ 17: 17](R/W) Value to set ro field in p path cmd going to ncb_cmn. */
        uint64_t anb_ncbi_np_mpadid_val_ovr_vld : 1;/**< [ 18: 18](R/W) Use [ANB_NCBI_NP_MPADID_VAL_OVR] to set mpadid_val field in p path cmd going to ncb_cmn. */
        uint64_t anb_ncbi_np_mpadid_val_ovr : 1;/**< [ 19: 19](R/W) Value to set mpadid_val field in p path cmd going to ncb_cmn. */
        uint64_t anb_ncbi_np_mpamdid_ovr_vld : 1;/**< [ 20: 20](R/W) Use [ANB_NCBI_NP_MPAMDID_OVR] to set mpamdid field in p path cmd going to ncb_cmn. */
        uint64_t anb_ncbi_np_mpamdid_ovr : 10;/**< [ 30: 21](R/W) Value to set mpamdid field in p path cmd going to ncb_cmn. */
        uint64_t reserved_31_63        : 33;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_mlx_anbx_ncbi_np_ovr_s cn; */
};
typedef union cavm_mlx_anbx_ncbi_np_ovr cavm_mlx_anbx_ncbi_np_ovr_t;

static inline uint64_t CAVM_MLX_ANBX_NCBI_NP_OVR(uint64_t a, uint64_t b) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_MLX_ANBX_NCBI_NP_OVR(uint64_t a, uint64_t b)
{
    if (cavm_is_model(OCTEONTX_CN10KA) && ((a==0) && (b<=2)))
        return 0x828000018020ll + 0x1000000000ll * ((a) & 0x0) + 0x1000ll * ((b) & 0x3);
    __cavm_csr_fatal("MLX_ANBX_NCBI_NP_OVR", 2, a, b, 0, 0, 0, 0);
}

#define typedef_CAVM_MLX_ANBX_NCBI_NP_OVR(a,b) cavm_mlx_anbx_ncbi_np_ovr_t
#define bustype_CAVM_MLX_ANBX_NCBI_NP_OVR(a,b) CSR_TYPE_NCB
#define basename_CAVM_MLX_ANBX_NCBI_NP_OVR(a,b) "MLX_ANBX_NCBI_NP_OVR"
#define device_bar_CAVM_MLX_ANBX_NCBI_NP_OVR(a,b) 0x0 /* PF_BAR0 */
#define busnum_CAVM_MLX_ANBX_NCBI_NP_OVR(a,b) (a)
#define arguments_CAVM_MLX_ANBX_NCBI_NP_OVR(a,b) (a),(b),-1,-1

/**
 * Register (NCB) ml#_anb#_ncbi_p_ovr
 *
 * ANB NCBITXT P Overrides Register
 * ANB0 is for ACC ; ANB1 is for DMA ; ANB2 is for Job Manager
 */
union cavm_mlx_anbx_ncbi_p_ovr
{
    uint64_t u;
    struct cavm_mlx_anbx_ncbi_p_ovr_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_31_63        : 33;
        uint64_t anb_ncbi_p_mpamdid_ovr : 10;/**< [ 30: 21](R/W) Value to set mpamdid field in p path cmd going to ncb_cmn. */
        uint64_t anb_ncbi_p_mpamdid_ovr_vld : 1;/**< [ 20: 20](R/W) Use [ANB_NCBI_P_MPAMDID_OVR] to set mpamdid field in p path cmd going to ncb_cmn. */
        uint64_t anb_ncbi_p_mpadid_val_ovr : 1;/**< [ 19: 19](R/W) Value to set mpadid_val field in p path cmd going to ncb_cmn. */
        uint64_t anb_ncbi_p_mpadid_val_ovr_vld : 1;/**< [ 18: 18](R/W) Use [ANB_NCBI_P_MPADID_VAL_OVR] to set mpadid_val field in p path cmd going to ncb_cmn. */
        uint64_t anb_ncbi_p_ro_ovr     : 1;  /**< [ 17: 17](R/W) Value to set ro field in p path cmd going to ncb_cmn. */
        uint64_t anb_ncbi_p_ro_ovr_vld : 1;  /**< [ 16: 16](R/W) Use [ANB_NCBI_P_RO_OVR] to set ro field in p path cmd going to ncb_cmn. */
        uint64_t anb_ncbi_p_paddr_ovr  : 1;  /**< [ 15: 15](R/W) Value to set paddr field in p path cmd going to ncb_cmn. */
        uint64_t anb_ncbi_p_paddr_ovr_vld : 1;/**< [ 14: 14](R/W) Use [ANB_NCBI_P_PADDR_OVR] to set paddr field in p path cmd going to ncb_cmn. */
        uint64_t anb_ncbi_p_ns_ovr     : 1;  /**< [ 13: 13](R/W) Value to set ns field in p path cmd going to ncb_cmn. */
        uint64_t anb_ncbi_p_ns_ovr_vld : 1;  /**< [ 12: 12](R/W) Use [ANB_NCBI_P_NS_OVR] to set ns field in p path cmd going to ncb_cmn. */
        uint64_t anb_ncbi_p_msh_dst_ovr : 11;/**< [ 11:  1](R/W) Value to set msh_dst field in p path cmd going to ncb_cmn. */
        uint64_t anb_ncbi_p_msh_dst_ovr_vld : 1;/**< [  0:  0](R/W) Use [ANB_NCBI_P_MSH_DST_OVR] to set msh_dst field in p path cmd going to ncb_cmn. */
#else /* Word 0 - Little Endian */
        uint64_t anb_ncbi_p_msh_dst_ovr_vld : 1;/**< [  0:  0](R/W) Use [ANB_NCBI_P_MSH_DST_OVR] to set msh_dst field in p path cmd going to ncb_cmn. */
        uint64_t anb_ncbi_p_msh_dst_ovr : 11;/**< [ 11:  1](R/W) Value to set msh_dst field in p path cmd going to ncb_cmn. */
        uint64_t anb_ncbi_p_ns_ovr_vld : 1;  /**< [ 12: 12](R/W) Use [ANB_NCBI_P_NS_OVR] to set ns field in p path cmd going to ncb_cmn. */
        uint64_t anb_ncbi_p_ns_ovr     : 1;  /**< [ 13: 13](R/W) Value to set ns field in p path cmd going to ncb_cmn. */
        uint64_t anb_ncbi_p_paddr_ovr_vld : 1;/**< [ 14: 14](R/W) Use [ANB_NCBI_P_PADDR_OVR] to set paddr field in p path cmd going to ncb_cmn. */
        uint64_t anb_ncbi_p_paddr_ovr  : 1;  /**< [ 15: 15](R/W) Value to set paddr field in p path cmd going to ncb_cmn. */
        uint64_t anb_ncbi_p_ro_ovr_vld : 1;  /**< [ 16: 16](R/W) Use [ANB_NCBI_P_RO_OVR] to set ro field in p path cmd going to ncb_cmn. */
        uint64_t anb_ncbi_p_ro_ovr     : 1;  /**< [ 17: 17](R/W) Value to set ro field in p path cmd going to ncb_cmn. */
        uint64_t anb_ncbi_p_mpadid_val_ovr_vld : 1;/**< [ 18: 18](R/W) Use [ANB_NCBI_P_MPADID_VAL_OVR] to set mpadid_val field in p path cmd going to ncb_cmn. */
        uint64_t anb_ncbi_p_mpadid_val_ovr : 1;/**< [ 19: 19](R/W) Value to set mpadid_val field in p path cmd going to ncb_cmn. */
        uint64_t anb_ncbi_p_mpamdid_ovr_vld : 1;/**< [ 20: 20](R/W) Use [ANB_NCBI_P_MPAMDID_OVR] to set mpamdid field in p path cmd going to ncb_cmn. */
        uint64_t anb_ncbi_p_mpamdid_ovr : 10;/**< [ 30: 21](R/W) Value to set mpamdid field in p path cmd going to ncb_cmn. */
        uint64_t reserved_31_63        : 33;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_mlx_anbx_ncbi_p_ovr_s cn; */
};
typedef union cavm_mlx_anbx_ncbi_p_ovr cavm_mlx_anbx_ncbi_p_ovr_t;

static inline uint64_t CAVM_MLX_ANBX_NCBI_P_OVR(uint64_t a, uint64_t b) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_MLX_ANBX_NCBI_P_OVR(uint64_t a, uint64_t b)
{
    if (cavm_is_model(OCTEONTX_CN10KA) && ((a==0) && (b<=2)))
        return 0x828000018010ll + 0x1000000000ll * ((a) & 0x0) + 0x1000ll * ((b) & 0x3);
    __cavm_csr_fatal("MLX_ANBX_NCBI_P_OVR", 2, a, b, 0, 0, 0, 0);
}

#define typedef_CAVM_MLX_ANBX_NCBI_P_OVR(a,b) cavm_mlx_anbx_ncbi_p_ovr_t
#define bustype_CAVM_MLX_ANBX_NCBI_P_OVR(a,b) CSR_TYPE_NCB
#define basename_CAVM_MLX_ANBX_NCBI_P_OVR(a,b) "MLX_ANBX_NCBI_P_OVR"
#define device_bar_CAVM_MLX_ANBX_NCBI_P_OVR(a,b) 0x0 /* PF_BAR0 */
#define busnum_CAVM_MLX_ANBX_NCBI_P_OVR(a,b) (a)
#define arguments_CAVM_MLX_ANBX_NCBI_P_OVR(a,b) (a),(b),-1,-1

/**
 * Register (NCB) ml#_anb#_ncbitx_status
 *
 * ANB AXISLV Block Status Register
 * ANB0 is for ACC ; ANB1 is for DMA ; ANB2 is for Job Manager
 */
union cavm_mlx_anbx_ncbitx_status
{
    uint64_t u;
    struct cavm_mlx_anbx_ncbitx_status_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_2_63         : 62;
        uint64_t anb_ncbitx_split_wr   : 1;  /**< [  1:  1](RO/H) Set indicates there was a split write to ncb. */
        uint64_t anb_ncbitx_split_rd   : 1;  /**< [  0:  0](RO/H) Set indicates there was a split read to ncb. */
#else /* Word 0 - Little Endian */
        uint64_t anb_ncbitx_split_rd   : 1;  /**< [  0:  0](RO/H) Set indicates there was a split read to ncb. */
        uint64_t anb_ncbitx_split_wr   : 1;  /**< [  1:  1](RO/H) Set indicates there was a split write to ncb. */
        uint64_t reserved_2_63         : 62;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_mlx_anbx_ncbitx_status_s cn; */
};
typedef union cavm_mlx_anbx_ncbitx_status cavm_mlx_anbx_ncbitx_status_t;

static inline uint64_t CAVM_MLX_ANBX_NCBITX_STATUS(uint64_t a, uint64_t b) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_MLX_ANBX_NCBITX_STATUS(uint64_t a, uint64_t b)
{
    if (cavm_is_model(OCTEONTX_CN10KA) && ((a==0) && (b<=2)))
        return 0x828000018040ll + 0x1000000000ll * ((a) & 0x0) + 0x1000ll * ((b) & 0x3);
    __cavm_csr_fatal("MLX_ANBX_NCBITX_STATUS", 2, a, b, 0, 0, 0, 0);
}

#define typedef_CAVM_MLX_ANBX_NCBITX_STATUS(a,b) cavm_mlx_anbx_ncbitx_status_t
#define bustype_CAVM_MLX_ANBX_NCBITX_STATUS(a,b) CSR_TYPE_NCB
#define basename_CAVM_MLX_ANBX_NCBITX_STATUS(a,b) "MLX_ANBX_NCBITX_STATUS"
#define device_bar_CAVM_MLX_ANBX_NCBITX_STATUS(a,b) 0x0 /* PF_BAR0 */
#define busnum_CAVM_MLX_ANBX_NCBITX_STATUS(a,b) (a)
#define arguments_CAVM_MLX_ANBX_NCBITX_STATUS(a,b) (a),(b),-1,-1

/**
 * Register (NCB) ml#_anb#_ncbo_req_ovr
 *
 * ANB NCBORX REQ Overrides Register
 * ANB0 is for ACC ; ANB1 is for DMA ; ANB2 is for Job Manager
 */
union cavm_mlx_anbx_ncbo_req_ovr
{
    uint64_t u;
    struct cavm_mlx_anbx_ncbo_req_ovr_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_2_63         : 62;
        uint64_t anb_ncbo_req_ovr_rlx_str_ord : 1;/**< [  1:  1](R/W) Relaxes strict ordering (single issue) for requests from NCBO to AXI. */
        uint64_t anb_ncbo_req_ovr_rlx_tag_ord : 1;/**< [  0:  0](R/W) Relaxes tag ordering (between reads and writes) for requests from NCBO to AXI.
                                                                 Only has effect if [ANB_NCBO_REQ_OVR_RLX_STR_ORD] is set. */
#else /* Word 0 - Little Endian */
        uint64_t anb_ncbo_req_ovr_rlx_tag_ord : 1;/**< [  0:  0](R/W) Relaxes tag ordering (between reads and writes) for requests from NCBO to AXI.
                                                                 Only has effect if [ANB_NCBO_REQ_OVR_RLX_STR_ORD] is set. */
        uint64_t anb_ncbo_req_ovr_rlx_str_ord : 1;/**< [  1:  1](R/W) Relaxes strict ordering (single issue) for requests from NCBO to AXI. */
        uint64_t reserved_2_63         : 62;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_mlx_anbx_ncbo_req_ovr_s cn; */
};
typedef union cavm_mlx_anbx_ncbo_req_ovr cavm_mlx_anbx_ncbo_req_ovr_t;

static inline uint64_t CAVM_MLX_ANBX_NCBO_REQ_OVR(uint64_t a, uint64_t b) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_MLX_ANBX_NCBO_REQ_OVR(uint64_t a, uint64_t b)
{
    if (cavm_is_model(OCTEONTX_CN10KA) && ((a==0) && (b<=2)))
        return 0x828000018080ll + 0x1000000000ll * ((a) & 0x0) + 0x1000ll * ((b) & 0x3);
    __cavm_csr_fatal("MLX_ANBX_NCBO_REQ_OVR", 2, a, b, 0, 0, 0, 0);
}

#define typedef_CAVM_MLX_ANBX_NCBO_REQ_OVR(a,b) cavm_mlx_anbx_ncbo_req_ovr_t
#define bustype_CAVM_MLX_ANBX_NCBO_REQ_OVR(a,b) CSR_TYPE_NCB
#define basename_CAVM_MLX_ANBX_NCBO_REQ_OVR(a,b) "MLX_ANBX_NCBO_REQ_OVR"
#define device_bar_CAVM_MLX_ANBX_NCBO_REQ_OVR(a,b) 0x0 /* PF_BAR0 */
#define busnum_CAVM_MLX_ANBX_NCBO_REQ_OVR(a,b) (a)
#define arguments_CAVM_MLX_ANBX_NCBO_REQ_OVR(a,b) (a),(b),-1,-1

/**
 * Register (NCB) ml#_anb#_ncborx_status
 *
 * ANB AXISLV Block Status Register
 * ANB0 is for ACC ; ANB1 is for DMA ; ANB2 is for Job Manager
 */
union cavm_mlx_anbx_ncborx_status
{
    uint64_t u;
    struct cavm_mlx_anbx_ncborx_status_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_5_63         : 59;
        uint64_t anb_nbcorx_max_size_ncb_st_exc : 1;/**< [  4:  4](RO/H) Indicates there was an NCB store larger than intended to be supported by
                                                                 anbiter. Max size is 1 data beat. */
        uint64_t anb_nbcorx_max_num_ncb_st_exc : 1;/**< [  3:  3](RO/H) Indicates there were more outstanding ncb stores than intended to be
                                                                 supported by ANB. Limit is 3. */
        uint64_t anb_nbcorx_max_size_ncb_ld_exc : 1;/**< [  2:  2](RO/H) Indicates there was an NCB load larger than supported by ANB. Placeholder
                                                                 because only supporting class A transactions. */
        uint64_t anb_nbcorx_max_num_ncb_ld_exc : 1;/**< [  1:  1](RO/H) Indicates there were more outstanding ncb loads than intended to be
                                                                 supported by ANB. Limit is 3. */
        uint64_t anb_ncborx_rcvd_unsupported_op : 1;/**< [  0:  0](RO/H) Set indicates there was a write response fifo overrun. */
#else /* Word 0 - Little Endian */
        uint64_t anb_ncborx_rcvd_unsupported_op : 1;/**< [  0:  0](RO/H) Set indicates there was a write response fifo overrun. */
        uint64_t anb_nbcorx_max_num_ncb_ld_exc : 1;/**< [  1:  1](RO/H) Indicates there were more outstanding ncb loads than intended to be
                                                                 supported by ANB. Limit is 3. */
        uint64_t anb_nbcorx_max_size_ncb_ld_exc : 1;/**< [  2:  2](RO/H) Indicates there was an NCB load larger than supported by ANB. Placeholder
                                                                 because only supporting class A transactions. */
        uint64_t anb_nbcorx_max_num_ncb_st_exc : 1;/**< [  3:  3](RO/H) Indicates there were more outstanding ncb stores than intended to be
                                                                 supported by ANB. Limit is 3. */
        uint64_t anb_nbcorx_max_size_ncb_st_exc : 1;/**< [  4:  4](RO/H) Indicates there was an NCB store larger than intended to be supported by
                                                                 anbiter. Max size is 1 data beat. */
        uint64_t reserved_5_63         : 59;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_mlx_anbx_ncborx_status_s cn; */
};
typedef union cavm_mlx_anbx_ncborx_status cavm_mlx_anbx_ncborx_status_t;

static inline uint64_t CAVM_MLX_ANBX_NCBORX_STATUS(uint64_t a, uint64_t b) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_MLX_ANBX_NCBORX_STATUS(uint64_t a, uint64_t b)
{
    if (cavm_is_model(OCTEONTX_CN10KA) && ((a==0) && (b<=2)))
        return 0x828000018050ll + 0x1000000000ll * ((a) & 0x0) + 0x1000ll * ((b) & 0x3);
    __cavm_csr_fatal("MLX_ANBX_NCBORX_STATUS", 2, a, b, 0, 0, 0, 0);
}

#define typedef_CAVM_MLX_ANBX_NCBORX_STATUS(a,b) cavm_mlx_anbx_ncborx_status_t
#define bustype_CAVM_MLX_ANBX_NCBORX_STATUS(a,b) CSR_TYPE_NCB
#define basename_CAVM_MLX_ANBX_NCBORX_STATUS(a,b) "MLX_ANBX_NCBORX_STATUS"
#define device_bar_CAVM_MLX_ANBX_NCBORX_STATUS(a,b) 0x0 /* PF_BAR0 */
#define busnum_CAVM_MLX_ANBX_NCBORX_STATUS(a,b) (a)
#define arguments_CAVM_MLX_ANBX_NCBORX_STATUS(a,b) (a),(b),-1,-1

/**
 * Register (NCB) ml#_axi_bridge_ctrl#
 *
 * ML Wrapper AXI Bridge Control Register
 * ML_AXI_BRIDGE_CTRL[0] is for ACC AXI bridge and ML_AXI_BRIDGE_CTRL[1] is for DMA AXI bridge.
 */
union cavm_mlx_axi_bridge_ctrlx
{
    uint64_t u;
    struct cavm_mlx_axi_bridge_ctrlx_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_21_63        : 43;
        uint64_t force_rresp_ok        : 1;  /**< [ 20: 20](R/W) When set, the read response will be force to OK, no error read response will be returned. */
        uint64_t force_wresp_ok        : 1;  /**< [ 19: 19](R/W) When set, the write response will be force to OK, no error write response will be returned. */
        uint64_t busy                  : 1;  /**< [ 18: 18](RO/H) When set, there still pending transactions in AXI bridge. */
        uint64_t fence                 : 1;  /**< [ 17: 17](R/W) When set, the AXI bridge stops taking new request from external master. */
        uint64_t ncb_rd_blk            : 1;  /**< [ 16: 16](R/W) NCB Read block.  When set, the read request to NCB domain will be blocked if the barrier is set. */
        uint64_t csr_rd_blk            : 1;  /**< [ 15: 15](R/W) CSR Read block.  When set, the read request to CSR domain will be blocked if the barrier is set. */
        uint64_t ncb_wr_blk            : 1;  /**< [ 14: 14](R/W) NCB Write block.  When set, the write request to NCB domain will be blocked if the barrier is set. */
        uint64_t csr_wr_blk            : 1;  /**< [ 13: 13](R/W) CSR Write block.  When set, the write request to CSR domain will be blocked if the barrier is set. */
        uint64_t axi_id_mode           : 1;  /**< [ 12: 12](R/W) ID Mode.  0x0 = AXI IDs are bypassed.  0x1 = AXI IDs are forced. */
        uint64_t force_axi_id          : 10; /**< [ 11:  2](R/W) Force AXI ID.  10-bit value to be used for AXI transactions when AXI_ID_MODE = 1 */
        uint64_t bridge_ctrl_mode      : 1;  /**< [  1:  1](R/W) Control Mode.  0x0 = all AXI transactions will be forwarded to downstream
                                                                 modules.  0x1 = Bridge will provide early response for write transactions.
                                                                 External barrier is needed to guarantee the data coherency. */
        uint64_t axi_resp_ctrl         : 1;  /**< [  0:  0](R/W) Response Control.  0x0 = AXI read/write responses will be returned based on the
                                                                 request sequence.  0x1 = AXI read/write responses will be returned
                                                                 based on when they are received and is only used when 1) no reordering is
                                                                 required, 2) no back pressure on read/write response channels from AXI master.
                                                                 This mode cannot be used when AXI_ID_MODE = 1; This mode cannot be used when AXI
                                                                 master sends WRAP transactions. */
#else /* Word 0 - Little Endian */
        uint64_t axi_resp_ctrl         : 1;  /**< [  0:  0](R/W) Response Control.  0x0 = AXI read/write responses will be returned based on the
                                                                 request sequence.  0x1 = AXI read/write responses will be returned
                                                                 based on when they are received and is only used when 1) no reordering is
                                                                 required, 2) no back pressure on read/write response channels from AXI master.
                                                                 This mode cannot be used when AXI_ID_MODE = 1; This mode cannot be used when AXI
                                                                 master sends WRAP transactions. */
        uint64_t bridge_ctrl_mode      : 1;  /**< [  1:  1](R/W) Control Mode.  0x0 = all AXI transactions will be forwarded to downstream
                                                                 modules.  0x1 = Bridge will provide early response for write transactions.
                                                                 External barrier is needed to guarantee the data coherency. */
        uint64_t force_axi_id          : 10; /**< [ 11:  2](R/W) Force AXI ID.  10-bit value to be used for AXI transactions when AXI_ID_MODE = 1 */
        uint64_t axi_id_mode           : 1;  /**< [ 12: 12](R/W) ID Mode.  0x0 = AXI IDs are bypassed.  0x1 = AXI IDs are forced. */
        uint64_t csr_wr_blk            : 1;  /**< [ 13: 13](R/W) CSR Write block.  When set, the write request to CSR domain will be blocked if the barrier is set. */
        uint64_t ncb_wr_blk            : 1;  /**< [ 14: 14](R/W) NCB Write block.  When set, the write request to NCB domain will be blocked if the barrier is set. */
        uint64_t csr_rd_blk            : 1;  /**< [ 15: 15](R/W) CSR Read block.  When set, the read request to CSR domain will be blocked if the barrier is set. */
        uint64_t ncb_rd_blk            : 1;  /**< [ 16: 16](R/W) NCB Read block.  When set, the read request to NCB domain will be blocked if the barrier is set. */
        uint64_t fence                 : 1;  /**< [ 17: 17](R/W) When set, the AXI bridge stops taking new request from external master. */
        uint64_t busy                  : 1;  /**< [ 18: 18](RO/H) When set, there still pending transactions in AXI bridge. */
        uint64_t force_wresp_ok        : 1;  /**< [ 19: 19](R/W) When set, the write response will be force to OK, no error write response will be returned. */
        uint64_t force_rresp_ok        : 1;  /**< [ 20: 20](R/W) When set, the read response will be force to OK, no error read response will be returned. */
        uint64_t reserved_21_63        : 43;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_mlx_axi_bridge_ctrlx_s cn; */
};
typedef union cavm_mlx_axi_bridge_ctrlx cavm_mlx_axi_bridge_ctrlx_t;

static inline uint64_t CAVM_MLX_AXI_BRIDGE_CTRLX(uint64_t a, uint64_t b) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_MLX_AXI_BRIDGE_CTRLX(uint64_t a, uint64_t b)
{
    if (cavm_is_model(OCTEONTX_CN10KA) && ((a==0) && (b<=1)))
        return 0x828000010020ll + 0x1000000000ll * ((a) & 0x0) + 8ll * ((b) & 0x1);
    __cavm_csr_fatal("MLX_AXI_BRIDGE_CTRLX", 2, a, b, 0, 0, 0, 0);
}

#define typedef_CAVM_MLX_AXI_BRIDGE_CTRLX(a,b) cavm_mlx_axi_bridge_ctrlx_t
#define bustype_CAVM_MLX_AXI_BRIDGE_CTRLX(a,b) CSR_TYPE_NCB
#define basename_CAVM_MLX_AXI_BRIDGE_CTRLX(a,b) "MLX_AXI_BRIDGE_CTRLX"
#define device_bar_CAVM_MLX_AXI_BRIDGE_CTRLX(a,b) 0x0 /* PF_BAR0 */
#define busnum_CAVM_MLX_AXI_BRIDGE_CTRLX(a,b) (a)
#define arguments_CAVM_MLX_AXI_BRIDGE_CTRLX(a,b) (a),(b),-1,-1

/**
 * Register (NCB) ml#_barrier
 *
 * ML Barrier Register
 */
union cavm_mlx_barrier
{
    uint64_t u;
    struct cavm_mlx_barrier_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_1_63         : 63;
        uint64_t active                : 1;  /**< [  0:  0](R/W1S/H) Writing a one to set this bit inserts the barrier. Hardware keeps the bit set
                                                                 while the barrier is active and clears it when the barrier is satisfied. If a
                                                                 one is written while the bit is already set, the write and all AXI transactions
                                                                 are stalled until the barrier is satisfied and hardware clears the bit. */
#else /* Word 0 - Little Endian */
        uint64_t active                : 1;  /**< [  0:  0](R/W1S/H) Writing a one to set this bit inserts the barrier. Hardware keeps the bit set
                                                                 while the barrier is active and clears it when the barrier is satisfied. If a
                                                                 one is written while the bit is already set, the write and all AXI transactions
                                                                 are stalled until the barrier is satisfied and hardware clears the bit. */
        uint64_t reserved_1_63         : 63;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_mlx_barrier_s cn; */
};
typedef union cavm_mlx_barrier cavm_mlx_barrier_t;

static inline uint64_t CAVM_MLX_BARRIER(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_MLX_BARRIER(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CN10KA) && (a==0))
        return 0x828000011300ll + 0x1000000000ll * ((a) & 0x0);
    __cavm_csr_fatal("MLX_BARRIER", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_MLX_BARRIER(a) cavm_mlx_barrier_t
#define bustype_CAVM_MLX_BARRIER(a) CSR_TYPE_NCB
#define basename_CAVM_MLX_BARRIER(a) "MLX_BARRIER"
#define device_bar_CAVM_MLX_BARRIER(a) 0x0 /* PF_BAR0 */
#define busnum_CAVM_MLX_BARRIER(a) (a)
#define arguments_CAVM_MLX_BARRIER(a) (a),-1,-1,-1

/**
 * Register (NCB) ml#_cfg
 *
 * ML Configuration Register
 */
union cavm_mlx_cfg
{
    uint64_t u;
    struct cavm_mlx_cfg_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_7_63         : 57;
        uint64_t ena                   : 1;  /**< [  6:  6](R/W) Enable new jobs. When clear, MLW will drop new job commands. When set, MLW will
                                                                 accept job commands. This bit can be cleared at any time. If [BUSY] is set,
                                                                 software must wait until [BUSY]==0 before setting this bit. */
        uint64_t mlip_clk_force        : 1;  /**< [  5:  5](R/W) Force the MLIP conditional clock active. Must be set and remain set for the
                                                                 duration of a firmware task that is unrelated to job execution, e.g. firmware
                                                                 boot. It is safe for software to set and clear this bit when ML jobs are in
                                                                 flight. */
        uint64_t wrap_clk_force        : 1;  /**< [  4:  4](R/W) Force conditional bus clocks to be always enabled. */
        uint64_t busy                  : 1;  /**< [  3:  3](RO/H) Set when ML has one or more jobs in flight. */
        uint64_t mlip_ena              : 1;  /**< [  2:  2](R/W) MLIP enable. Warm reset to MLIP is asserted when clear. */
        uint64_t jd_size               : 2;  /**< [  1:  0](R/W) Job descriptor size. 0x0 = Reserved. 0x1 = 64bytes. 0x2 = 96 bytes. 0x3 = 128 bytes. */
#else /* Word 0 - Little Endian */
        uint64_t jd_size               : 2;  /**< [  1:  0](R/W) Job descriptor size. 0x0 = Reserved. 0x1 = 64bytes. 0x2 = 96 bytes. 0x3 = 128 bytes. */
        uint64_t mlip_ena              : 1;  /**< [  2:  2](R/W) MLIP enable. Warm reset to MLIP is asserted when clear. */
        uint64_t busy                  : 1;  /**< [  3:  3](RO/H) Set when ML has one or more jobs in flight. */
        uint64_t wrap_clk_force        : 1;  /**< [  4:  4](R/W) Force conditional bus clocks to be always enabled. */
        uint64_t mlip_clk_force        : 1;  /**< [  5:  5](R/W) Force the MLIP conditional clock active. Must be set and remain set for the
                                                                 duration of a firmware task that is unrelated to job execution, e.g. firmware
                                                                 boot. It is safe for software to set and clear this bit when ML jobs are in
                                                                 flight. */
        uint64_t ena                   : 1;  /**< [  6:  6](R/W) Enable new jobs. When clear, MLW will drop new job commands. When set, MLW will
                                                                 accept job commands. This bit can be cleared at any time. If [BUSY] is set,
                                                                 software must wait until [BUSY]==0 before setting this bit. */
        uint64_t reserved_7_63         : 57;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_mlx_cfg_s cn; */
};
typedef union cavm_mlx_cfg cavm_mlx_cfg_t;

static inline uint64_t CAVM_MLX_CFG(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_MLX_CFG(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CN10KA) && (a==0))
        return 0x828000010000ll + 0x1000000000ll * ((a) & 0x0);
    __cavm_csr_fatal("MLX_CFG", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_MLX_CFG(a) cavm_mlx_cfg_t
#define bustype_CAVM_MLX_CFG(a) CSR_TYPE_NCB
#define basename_CAVM_MLX_CFG(a) "MLX_CFG"
#define device_bar_CAVM_MLX_CFG(a) 0x0 /* PF_BAR0 */
#define busnum_CAVM_MLX_CFG(a) (a)
#define arguments_CAVM_MLX_CFG(a) (a),-1,-1,-1

/**
 * Register (NCB) ml#_core_int_hi
 *
 * ML PF Interrupt Register
 */
union cavm_mlx_core_int_hi
{
    uint64_t u;
    struct cavm_mlx_core_int_hi_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_1_63         : 63;
        uint64_t int_hi                : 1;  /**< [  0:  0](R/W1C/H) Hight priority interrupt from MLIP. Set when one or more bits in
                                                                 ML()_HIGH_PRI_HOST_MASK_W() is set and at least one of the corresponding
                                                                 bits in ML()_HIGH_PRI_HOST_MASK_W() is set, i.e.
                                                                 _ |(ML()_HIGH_PRI_INT_STATUS_W() & ML()_HIGH_PRI_HOST_MASK_W()) == 1 */
#else /* Word 0 - Little Endian */
        uint64_t int_hi                : 1;  /**< [  0:  0](R/W1C/H) Hight priority interrupt from MLIP. Set when one or more bits in
                                                                 ML()_HIGH_PRI_HOST_MASK_W() is set and at least one of the corresponding
                                                                 bits in ML()_HIGH_PRI_HOST_MASK_W() is set, i.e.
                                                                 _ |(ML()_HIGH_PRI_INT_STATUS_W() & ML()_HIGH_PRI_HOST_MASK_W()) == 1 */
        uint64_t reserved_1_63         : 63;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_mlx_core_int_hi_s cn; */
};
typedef union cavm_mlx_core_int_hi cavm_mlx_core_int_hi_t;

static inline uint64_t CAVM_MLX_CORE_INT_HI(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_MLX_CORE_INT_HI(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CN10KA) && (a==0))
        return 0x828000010160ll + 0x1000000000ll * ((a) & 0x0);
    __cavm_csr_fatal("MLX_CORE_INT_HI", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_MLX_CORE_INT_HI(a) cavm_mlx_core_int_hi_t
#define bustype_CAVM_MLX_CORE_INT_HI(a) CSR_TYPE_NCB
#define basename_CAVM_MLX_CORE_INT_HI(a) "MLX_CORE_INT_HI"
#define device_bar_CAVM_MLX_CORE_INT_HI(a) 0x0 /* PF_BAR0 */
#define busnum_CAVM_MLX_CORE_INT_HI(a) (a)
#define arguments_CAVM_MLX_CORE_INT_HI(a) (a),-1,-1,-1

/**
 * Register (NCB) ml#_core_int_hi_ena_w1c
 *
 * ML PF Interrupt Enable Clear Register
 * This register clears interrupt enable bits.
 */
union cavm_mlx_core_int_hi_ena_w1c
{
    uint64_t u;
    struct cavm_mlx_core_int_hi_ena_w1c_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_1_63         : 63;
        uint64_t int_hi                : 1;  /**< [  0:  0](R/W1C/H) Reads or clears enable for ML(0)_CORE_INT_HI[INT_HI]. */
#else /* Word 0 - Little Endian */
        uint64_t int_hi                : 1;  /**< [  0:  0](R/W1C/H) Reads or clears enable for ML(0)_CORE_INT_HI[INT_HI]. */
        uint64_t reserved_1_63         : 63;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_mlx_core_int_hi_ena_w1c_s cn; */
};
typedef union cavm_mlx_core_int_hi_ena_w1c cavm_mlx_core_int_hi_ena_w1c_t;

static inline uint64_t CAVM_MLX_CORE_INT_HI_ENA_W1C(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_MLX_CORE_INT_HI_ENA_W1C(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CN10KA) && (a==0))
        return 0x828000010170ll + 0x1000000000ll * ((a) & 0x0);
    __cavm_csr_fatal("MLX_CORE_INT_HI_ENA_W1C", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_MLX_CORE_INT_HI_ENA_W1C(a) cavm_mlx_core_int_hi_ena_w1c_t
#define bustype_CAVM_MLX_CORE_INT_HI_ENA_W1C(a) CSR_TYPE_NCB
#define basename_CAVM_MLX_CORE_INT_HI_ENA_W1C(a) "MLX_CORE_INT_HI_ENA_W1C"
#define device_bar_CAVM_MLX_CORE_INT_HI_ENA_W1C(a) 0x0 /* PF_BAR0 */
#define busnum_CAVM_MLX_CORE_INT_HI_ENA_W1C(a) (a)
#define arguments_CAVM_MLX_CORE_INT_HI_ENA_W1C(a) (a),-1,-1,-1

/**
 * Register (NCB) ml#_core_int_hi_ena_w1s
 *
 * ML PF Interrupt Enable Set Register
 * This register sets interrupt enable bits.
 */
union cavm_mlx_core_int_hi_ena_w1s
{
    uint64_t u;
    struct cavm_mlx_core_int_hi_ena_w1s_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_1_63         : 63;
        uint64_t int_hi                : 1;  /**< [  0:  0](R/W1S/H) Reads or sets enable for ML(0)_CORE_INT_HI[INT_HI]. */
#else /* Word 0 - Little Endian */
        uint64_t int_hi                : 1;  /**< [  0:  0](R/W1S/H) Reads or sets enable for ML(0)_CORE_INT_HI[INT_HI]. */
        uint64_t reserved_1_63         : 63;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_mlx_core_int_hi_ena_w1s_s cn; */
};
typedef union cavm_mlx_core_int_hi_ena_w1s cavm_mlx_core_int_hi_ena_w1s_t;

static inline uint64_t CAVM_MLX_CORE_INT_HI_ENA_W1S(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_MLX_CORE_INT_HI_ENA_W1S(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CN10KA) && (a==0))
        return 0x828000010178ll + 0x1000000000ll * ((a) & 0x0);
    __cavm_csr_fatal("MLX_CORE_INT_HI_ENA_W1S", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_MLX_CORE_INT_HI_ENA_W1S(a) cavm_mlx_core_int_hi_ena_w1s_t
#define bustype_CAVM_MLX_CORE_INT_HI_ENA_W1S(a) CSR_TYPE_NCB
#define basename_CAVM_MLX_CORE_INT_HI_ENA_W1S(a) "MLX_CORE_INT_HI_ENA_W1S"
#define device_bar_CAVM_MLX_CORE_INT_HI_ENA_W1S(a) 0x0 /* PF_BAR0 */
#define busnum_CAVM_MLX_CORE_INT_HI_ENA_W1S(a) (a)
#define arguments_CAVM_MLX_CORE_INT_HI_ENA_W1S(a) (a),-1,-1,-1

/**
 * Register (NCB) ml#_core_int_hi_w1s
 *
 * ML PF Interrupt Set Register
 * This register sets interrupt bits.
 */
union cavm_mlx_core_int_hi_w1s
{
    uint64_t u;
    struct cavm_mlx_core_int_hi_w1s_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_1_63         : 63;
        uint64_t int_hi                : 1;  /**< [  0:  0](R/W1S/H) Reads or sets ML(0)_CORE_INT_HI[INT_HI]. */
#else /* Word 0 - Little Endian */
        uint64_t int_hi                : 1;  /**< [  0:  0](R/W1S/H) Reads or sets ML(0)_CORE_INT_HI[INT_HI]. */
        uint64_t reserved_1_63         : 63;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_mlx_core_int_hi_w1s_s cn; */
};
typedef union cavm_mlx_core_int_hi_w1s cavm_mlx_core_int_hi_w1s_t;

static inline uint64_t CAVM_MLX_CORE_INT_HI_W1S(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_MLX_CORE_INT_HI_W1S(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CN10KA) && (a==0))
        return 0x828000010168ll + 0x1000000000ll * ((a) & 0x0);
    __cavm_csr_fatal("MLX_CORE_INT_HI_W1S", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_MLX_CORE_INT_HI_W1S(a) cavm_mlx_core_int_hi_w1s_t
#define bustype_CAVM_MLX_CORE_INT_HI_W1S(a) CSR_TYPE_NCB
#define basename_CAVM_MLX_CORE_INT_HI_W1S(a) "MLX_CORE_INT_HI_W1S"
#define device_bar_CAVM_MLX_CORE_INT_HI_W1S(a) 0x0 /* PF_BAR0 */
#define busnum_CAVM_MLX_CORE_INT_HI_W1S(a) (a)
#define arguments_CAVM_MLX_CORE_INT_HI_W1S(a) (a),-1,-1,-1

/**
 * Register (NCB) ml#_core_int_lo
 *
 * ML PF Interrupt Register
 */
union cavm_mlx_core_int_lo
{
    uint64_t u;
    struct cavm_mlx_core_int_lo_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_1_63         : 63;
        uint64_t int_lo                : 1;  /**< [  0:  0](R/W1C/H) Low priority interrupt from MLIP. Set when one or more bits in
                                                                 ML()_LOW_PRI_HOST_MASK_W() is set and at least one of the corresponding
                                                                 bits in ML()_LOW_PRI_HOST_MASK_W() is set, i.e.
                                                                 _ |(ML()_LOW_PRI_INT_STATUS_W() & ML()_LOW_PRI_HOST_MASK_W()) == 1 */
#else /* Word 0 - Little Endian */
        uint64_t int_lo                : 1;  /**< [  0:  0](R/W1C/H) Low priority interrupt from MLIP. Set when one or more bits in
                                                                 ML()_LOW_PRI_HOST_MASK_W() is set and at least one of the corresponding
                                                                 bits in ML()_LOW_PRI_HOST_MASK_W() is set, i.e.
                                                                 _ |(ML()_LOW_PRI_INT_STATUS_W() & ML()_LOW_PRI_HOST_MASK_W()) == 1 */
        uint64_t reserved_1_63         : 63;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_mlx_core_int_lo_s cn; */
};
typedef union cavm_mlx_core_int_lo cavm_mlx_core_int_lo_t;

static inline uint64_t CAVM_MLX_CORE_INT_LO(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_MLX_CORE_INT_LO(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CN10KA) && (a==0))
        return 0x828000010140ll + 0x1000000000ll * ((a) & 0x0);
    __cavm_csr_fatal("MLX_CORE_INT_LO", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_MLX_CORE_INT_LO(a) cavm_mlx_core_int_lo_t
#define bustype_CAVM_MLX_CORE_INT_LO(a) CSR_TYPE_NCB
#define basename_CAVM_MLX_CORE_INT_LO(a) "MLX_CORE_INT_LO"
#define device_bar_CAVM_MLX_CORE_INT_LO(a) 0x0 /* PF_BAR0 */
#define busnum_CAVM_MLX_CORE_INT_LO(a) (a)
#define arguments_CAVM_MLX_CORE_INT_LO(a) (a),-1,-1,-1

/**
 * Register (NCB) ml#_core_int_lo_ena_w1c
 *
 * ML PF Interrupt Enable Clear Register
 * This register clears interrupt enable bits.
 */
union cavm_mlx_core_int_lo_ena_w1c
{
    uint64_t u;
    struct cavm_mlx_core_int_lo_ena_w1c_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_1_63         : 63;
        uint64_t int_lo                : 1;  /**< [  0:  0](R/W1C/H) Reads or clears enable for ML(0)_CORE_INT_LO[INT_LO]. */
#else /* Word 0 - Little Endian */
        uint64_t int_lo                : 1;  /**< [  0:  0](R/W1C/H) Reads or clears enable for ML(0)_CORE_INT_LO[INT_LO]. */
        uint64_t reserved_1_63         : 63;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_mlx_core_int_lo_ena_w1c_s cn; */
};
typedef union cavm_mlx_core_int_lo_ena_w1c cavm_mlx_core_int_lo_ena_w1c_t;

static inline uint64_t CAVM_MLX_CORE_INT_LO_ENA_W1C(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_MLX_CORE_INT_LO_ENA_W1C(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CN10KA) && (a==0))
        return 0x828000010150ll + 0x1000000000ll * ((a) & 0x0);
    __cavm_csr_fatal("MLX_CORE_INT_LO_ENA_W1C", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_MLX_CORE_INT_LO_ENA_W1C(a) cavm_mlx_core_int_lo_ena_w1c_t
#define bustype_CAVM_MLX_CORE_INT_LO_ENA_W1C(a) CSR_TYPE_NCB
#define basename_CAVM_MLX_CORE_INT_LO_ENA_W1C(a) "MLX_CORE_INT_LO_ENA_W1C"
#define device_bar_CAVM_MLX_CORE_INT_LO_ENA_W1C(a) 0x0 /* PF_BAR0 */
#define busnum_CAVM_MLX_CORE_INT_LO_ENA_W1C(a) (a)
#define arguments_CAVM_MLX_CORE_INT_LO_ENA_W1C(a) (a),-1,-1,-1

/**
 * Register (NCB) ml#_core_int_lo_ena_w1s
 *
 * ML PF Interrupt Enable Set Register
 * This register sets interrupt enable bits.
 */
union cavm_mlx_core_int_lo_ena_w1s
{
    uint64_t u;
    struct cavm_mlx_core_int_lo_ena_w1s_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_1_63         : 63;
        uint64_t int_lo                : 1;  /**< [  0:  0](R/W1S/H) Reads or sets enable for ML(0)_CORE_INT_LO[INT_LO]. */
#else /* Word 0 - Little Endian */
        uint64_t int_lo                : 1;  /**< [  0:  0](R/W1S/H) Reads or sets enable for ML(0)_CORE_INT_LO[INT_LO]. */
        uint64_t reserved_1_63         : 63;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_mlx_core_int_lo_ena_w1s_s cn; */
};
typedef union cavm_mlx_core_int_lo_ena_w1s cavm_mlx_core_int_lo_ena_w1s_t;

static inline uint64_t CAVM_MLX_CORE_INT_LO_ENA_W1S(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_MLX_CORE_INT_LO_ENA_W1S(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CN10KA) && (a==0))
        return 0x828000010158ll + 0x1000000000ll * ((a) & 0x0);
    __cavm_csr_fatal("MLX_CORE_INT_LO_ENA_W1S", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_MLX_CORE_INT_LO_ENA_W1S(a) cavm_mlx_core_int_lo_ena_w1s_t
#define bustype_CAVM_MLX_CORE_INT_LO_ENA_W1S(a) CSR_TYPE_NCB
#define basename_CAVM_MLX_CORE_INT_LO_ENA_W1S(a) "MLX_CORE_INT_LO_ENA_W1S"
#define device_bar_CAVM_MLX_CORE_INT_LO_ENA_W1S(a) 0x0 /* PF_BAR0 */
#define busnum_CAVM_MLX_CORE_INT_LO_ENA_W1S(a) (a)
#define arguments_CAVM_MLX_CORE_INT_LO_ENA_W1S(a) (a),-1,-1,-1

/**
 * Register (NCB) ml#_core_int_lo_w1s
 *
 * ML PF Interrupt Set Register
 * This register sets interrupt bits.
 */
union cavm_mlx_core_int_lo_w1s
{
    uint64_t u;
    struct cavm_mlx_core_int_lo_w1s_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_1_63         : 63;
        uint64_t int_lo                : 1;  /**< [  0:  0](R/W1S/H) Reads or sets ML(0)_CORE_INT_LO[INT_LO]. */
#else /* Word 0 - Little Endian */
        uint64_t int_lo                : 1;  /**< [  0:  0](R/W1S/H) Reads or sets ML(0)_CORE_INT_LO[INT_LO]. */
        uint64_t reserved_1_63         : 63;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_mlx_core_int_lo_w1s_s cn; */
};
typedef union cavm_mlx_core_int_lo_w1s cavm_mlx_core_int_lo_w1s_t;

static inline uint64_t CAVM_MLX_CORE_INT_LO_W1S(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_MLX_CORE_INT_LO_W1S(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CN10KA) && (a==0))
        return 0x828000010148ll + 0x1000000000ll * ((a) & 0x0);
    __cavm_csr_fatal("MLX_CORE_INT_LO_W1S", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_MLX_CORE_INT_LO_W1S(a) cavm_mlx_core_int_lo_w1s_t
#define bustype_CAVM_MLX_CORE_INT_LO_W1S(a) CSR_TYPE_NCB
#define basename_CAVM_MLX_CORE_INT_LO_W1S(a) "MLX_CORE_INT_LO_W1S"
#define device_bar_CAVM_MLX_CORE_INT_LO_W1S(a) 0x0 /* PF_BAR0 */
#define busnum_CAVM_MLX_CORE_INT_LO_W1S(a) (a)
#define arguments_CAVM_MLX_CORE_INT_LO_W1S(a) (a),-1,-1,-1

/**
 * Register (NCB) ml#_jceq_in#
 *
 * ML Job Completion Enqueue Register
 */
union cavm_mlx_jceq_inx
{
    uint64_t u;
    struct cavm_mlx_jceq_inx_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t data                  : 64; /**< [ 63:  0](R/W) MLIP should write ML_JCEQ_IN(0) first and followed by ML_JCEQ_IN(1). The write
                                                                 to ML_JCEQ_IN(1) pushes the command to the JCE queue.
                                                                 ML_JCEQ_STATUS[AVAIL_COUNT] must be non-zero before writing to ML_JCEQ_IN(1).
                                                                 Data format is given in ML_JCE_S. */
#else /* Word 0 - Little Endian */
        uint64_t data                  : 64; /**< [ 63:  0](R/W) MLIP should write ML_JCEQ_IN(0) first and followed by ML_JCEQ_IN(1). The write
                                                                 to ML_JCEQ_IN(1) pushes the command to the JCE queue.
                                                                 ML_JCEQ_STATUS[AVAIL_COUNT] must be non-zero before writing to ML_JCEQ_IN(1).
                                                                 Data format is given in ML_JCE_S. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_mlx_jceq_inx_s cn; */
};
typedef union cavm_mlx_jceq_inx cavm_mlx_jceq_inx_t;

static inline uint64_t CAVM_MLX_JCEQ_INX(uint64_t a, uint64_t b) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_MLX_JCEQ_INX(uint64_t a, uint64_t b)
{
    if (cavm_is_model(OCTEONTX_CN10KA) && ((a==0) && (b<=1)))
        return 0x828000011320ll + 0x1000000000ll * ((a) & 0x0) + 8ll * ((b) & 0x1);
    __cavm_csr_fatal("MLX_JCEQ_INX", 2, a, b, 0, 0, 0, 0);
}

#define typedef_CAVM_MLX_JCEQ_INX(a,b) cavm_mlx_jceq_inx_t
#define bustype_CAVM_MLX_JCEQ_INX(a,b) CSR_TYPE_NCB
#define basename_CAVM_MLX_JCEQ_INX(a,b) "MLX_JCEQ_INX"
#define device_bar_CAVM_MLX_JCEQ_INX(a,b) 0x0 /* PF_BAR0 */
#define busnum_CAVM_MLX_JCEQ_INX(a,b) (a)
#define arguments_CAVM_MLX_JCEQ_INX(a,b) (a),(b),-1,-1

/**
 * Register (NCB) ml#_jceq_status
 *
 * ML Job Completion Queue Status Register
 */
union cavm_mlx_jceq_status
{
    uint64_t u;
    struct cavm_mlx_jceq_status_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_5_63         : 59;
        uint64_t avail_count           : 5;  /**< [  4:  0](RO/H) Number of available entries in the JCE queue. ML_JCEQ_IN(1) should only be
                                                                 written when this field is non-zero. */
#else /* Word 0 - Little Endian */
        uint64_t avail_count           : 5;  /**< [  4:  0](RO/H) Number of available entries in the JCE queue. ML_JCEQ_IN(1) should only be
                                                                 written when this field is non-zero. */
        uint64_t reserved_5_63         : 59;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_mlx_jceq_status_s cn; */
};
typedef union cavm_mlx_jceq_status cavm_mlx_jceq_status_t;

static inline uint64_t CAVM_MLX_JCEQ_STATUS(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_MLX_JCEQ_STATUS(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CN10KA) && (a==0))
        return 0x828000011330ll + 0x1000000000ll * ((a) & 0x0);
    __cavm_csr_fatal("MLX_JCEQ_STATUS", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_MLX_JCEQ_STATUS(a) cavm_mlx_jceq_status_t
#define bustype_CAVM_MLX_JCEQ_STATUS(a) CSR_TYPE_NCB
#define basename_CAVM_MLX_JCEQ_STATUS(a) "MLX_JCEQ_STATUS"
#define device_bar_CAVM_MLX_JCEQ_STATUS(a) 0x0 /* PF_BAR0 */
#define busnum_CAVM_MLX_JCEQ_STATUS(a) (a)
#define arguments_CAVM_MLX_JCEQ_STATUS(a) (a),-1,-1,-1

/**
 * Register (NCB) ml#_jcmdq_in#
 *
 * ML Add Job Command Enqueue Register
 */
union cavm_mlx_jcmdq_inx
{
    uint64_t u;
    struct cavm_mlx_jcmdq_inx_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t data                  : 64; /**< [ 63:  0](R/W) Write ML_JCMDQ_IN(0) first then followed by write to ML_JCMDQ_IN(1) to add a job
                                                                 command to command queue. Job command format specified by ML_JOB_CMD_S. */
#else /* Word 0 - Little Endian */
        uint64_t data                  : 64; /**< [ 63:  0](R/W) Write ML_JCMDQ_IN(0) first then followed by write to ML_JCMDQ_IN(1) to add a job
                                                                 command to command queue. Job command format specified by ML_JOB_CMD_S. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_mlx_jcmdq_inx_s cn; */
};
typedef union cavm_mlx_jcmdq_inx cavm_mlx_jcmdq_inx_t;

static inline uint64_t CAVM_MLX_JCMDQ_INX(uint64_t a, uint64_t b) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_MLX_JCMDQ_INX(uint64_t a, uint64_t b)
{
    if (cavm_is_model(OCTEONTX_CN10KA) && ((a==0) && (b<=1)))
        return 0x828000011000ll + 0x1000000000ll * ((a) & 0x0) + 8ll * ((b) & 0x1);
    __cavm_csr_fatal("MLX_JCMDQ_INX", 2, a, b, 0, 0, 0, 0);
}

#define typedef_CAVM_MLX_JCMDQ_INX(a,b) cavm_mlx_jcmdq_inx_t
#define bustype_CAVM_MLX_JCMDQ_INX(a,b) CSR_TYPE_NCB
#define basename_CAVM_MLX_JCMDQ_INX(a,b) "MLX_JCMDQ_INX"
#define device_bar_CAVM_MLX_JCMDQ_INX(a,b) 0x0 /* PF_BAR0 */
#define busnum_CAVM_MLX_JCMDQ_INX(a,b) (a)
#define arguments_CAVM_MLX_JCMDQ_INX(a,b) (a),(b),-1,-1

/**
 * Register (NCB) ml#_jcmdq_status
 *
 * ML Job Command Queue Status Register
 */
union cavm_mlx_jcmdq_status
{
    uint64_t u;
    struct cavm_mlx_jcmdq_status_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_5_63         : 59;
        uint64_t avail_count           : 5;  /**< [  4:  0](RO/H) Number of available entries in the job command queue. ML_JCMD_IN(1) should only be
                                                                 written when this field is non-zero. */
#else /* Word 0 - Little Endian */
        uint64_t avail_count           : 5;  /**< [  4:  0](RO/H) Number of available entries in the job command queue. ML_JCMD_IN(1) should only be
                                                                 written when this field is non-zero. */
        uint64_t reserved_5_63         : 59;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_mlx_jcmdq_status_s cn; */
};
typedef union cavm_mlx_jcmdq_status cavm_mlx_jcmdq_status_t;

static inline uint64_t CAVM_MLX_JCMDQ_STATUS(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_MLX_JCMDQ_STATUS(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CN10KA) && (a==0))
        return 0x828000011010ll + 0x1000000000ll * ((a) & 0x0);
    __cavm_csr_fatal("MLX_JCMDQ_STATUS", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_MLX_JCMDQ_STATUS(a) cavm_mlx_jcmdq_status_t
#define bustype_CAVM_MLX_JCMDQ_STATUS(a) CSR_TYPE_NCB
#define basename_CAVM_MLX_JCMDQ_STATUS(a) "MLX_JCMDQ_STATUS"
#define device_bar_CAVM_MLX_JCMDQ_STATUS(a) 0x0 /* PF_BAR0 */
#define busnum_CAVM_MLX_JCMDQ_STATUS(a) (a)
#define arguments_CAVM_MLX_JCMDQ_STATUS(a) (a),-1,-1,-1

/**
 * Register (NCB) ml#_jd#
 *
 * ML Job Descriptor Register
 */
union cavm_mlx_jdx
{
    uint64_t u;
    struct cavm_mlx_jdx_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t data                  : 64; /**< [ 63:  0](RO/H) Job descriptor word */
#else /* Word 0 - Little Endian */
        uint64_t data                  : 64; /**< [ 63:  0](RO/H) Job descriptor word */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_mlx_jdx_s cn; */
};
typedef union cavm_mlx_jdx cavm_mlx_jdx_t;

static inline uint64_t CAVM_MLX_JDX(uint64_t a, uint64_t b) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_MLX_JDX(uint64_t a, uint64_t b)
{
    if (cavm_is_model(OCTEONTX_CN10KA) && ((a==0) && (b<=15)))
        return 0x828000011200ll + 0x1000000000ll * ((a) & 0x0) + 8ll * ((b) & 0xf);
    __cavm_csr_fatal("MLX_JDX", 2, a, b, 0, 0, 0, 0);
}

#define typedef_CAVM_MLX_JDX(a,b) cavm_mlx_jdx_t
#define bustype_CAVM_MLX_JDX(a,b) CSR_TYPE_NCB
#define basename_CAVM_MLX_JDX(a,b) "MLX_JDX"
#define device_bar_CAVM_MLX_JDX(a,b) 0x0 /* PF_BAR0 */
#define busnum_CAVM_MLX_JDX(a,b) (a)
#define arguments_CAVM_MLX_JDX(a,b) (a),(b),-1,-1

/**
 * Register (NCB) ml#_job_mgr_ctrl
 *
 * ML Job Manager Control Register
 */
union cavm_mlx_job_mgr_ctrl
{
    uint64_t u;
    struct cavm_mlx_job_mgr_ctrl_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_22_63        : 42;
        uint64_t stall_on_idle         : 1;  /**< [ 21: 21](R/W) When set, the ACC/DMA interface will be stalled if the job manager is not BUSY.
                                                                 No polling request from ACC will be accepted. */
        uint64_t busy                  : 1;  /**< [ 20: 20](RO/H) When set, the job manager has at least one unfinished job. */
        uint64_t pf_func_override      : 16; /**< [ 19:  4](R/W) When set, the PF number in LWA packet will be overridden from PF_FUNC_OVERRIDE field. */
        uint64_t reserved_2_3          : 2;
        uint64_t pf_override           : 1;  /**< [  1:  1](R/W) When set, the PF number in LWA packet will be overridden from PF_FUNC_OVERRIDE field. */
        uint64_t stall_on_err          : 1;  /**< [  0:  0](R/W) When set, firmware is not able to move job from one stage to another. This is
                                                                 for debugging purpose. */
#else /* Word 0 - Little Endian */
        uint64_t stall_on_err          : 1;  /**< [  0:  0](R/W) When set, firmware is not able to move job from one stage to another. This is
                                                                 for debugging purpose. */
        uint64_t pf_override           : 1;  /**< [  1:  1](R/W) When set, the PF number in LWA packet will be overridden from PF_FUNC_OVERRIDE field. */
        uint64_t reserved_2_3          : 2;
        uint64_t pf_func_override      : 16; /**< [ 19:  4](R/W) When set, the PF number in LWA packet will be overridden from PF_FUNC_OVERRIDE field. */
        uint64_t busy                  : 1;  /**< [ 20: 20](RO/H) When set, the job manager has at least one unfinished job. */
        uint64_t stall_on_idle         : 1;  /**< [ 21: 21](R/W) When set, the ACC/DMA interface will be stalled if the job manager is not BUSY.
                                                                 No polling request from ACC will be accepted. */
        uint64_t reserved_22_63        : 42;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_mlx_job_mgr_ctrl_s cn; */
};
typedef union cavm_mlx_job_mgr_ctrl cavm_mlx_job_mgr_ctrl_t;

static inline uint64_t CAVM_MLX_JOB_MGR_CTRL(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_MLX_JOB_MGR_CTRL(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CN10KA) && (a==0))
        return 0x828000010060ll + 0x1000000000ll * ((a) & 0x0);
    __cavm_csr_fatal("MLX_JOB_MGR_CTRL", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_MLX_JOB_MGR_CTRL(a) cavm_mlx_job_mgr_ctrl_t
#define bustype_CAVM_MLX_JOB_MGR_CTRL(a) CSR_TYPE_NCB
#define basename_CAVM_MLX_JOB_MGR_CTRL(a) "MLX_JOB_MGR_CTRL"
#define device_bar_CAVM_MLX_JOB_MGR_CTRL(a) 0x0 /* PF_BAR0 */
#define busnum_CAVM_MLX_JOB_MGR_CTRL(a) (a)
#define arguments_CAVM_MLX_JOB_MGR_CTRL(a) (a),-1,-1,-1

/**
 * Register (NCB) ml#_jobptr_end
 *
 * ML Job Pointer End Address Register
 */
union cavm_mlx_jobptr_end
{
    uint64_t u;
    struct cavm_mlx_jobptr_end_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_53_63        : 11;
        uint64_t end_addr              : 53; /**< [ 52:  0](R/W) ML job pointer end address. */
#else /* Word 0 - Little Endian */
        uint64_t end_addr              : 53; /**< [ 52:  0](R/W) ML job pointer end address. */
        uint64_t reserved_53_63        : 11;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_mlx_jobptr_end_s cn; */
};
typedef union cavm_mlx_jobptr_end cavm_mlx_jobptr_end_t;

static inline uint64_t CAVM_MLX_JOBPTR_END(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_MLX_JOBPTR_END(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CN10KA) && (a==0))
        return 0x828000010058ll + 0x1000000000ll * ((a) & 0x0);
    __cavm_csr_fatal("MLX_JOBPTR_END", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_MLX_JOBPTR_END(a) cavm_mlx_jobptr_end_t
#define bustype_CAVM_MLX_JOBPTR_END(a) CSR_TYPE_NCB
#define basename_CAVM_MLX_JOBPTR_END(a) "MLX_JOBPTR_END"
#define device_bar_CAVM_MLX_JOBPTR_END(a) 0x0 /* PF_BAR0 */
#define busnum_CAVM_MLX_JOBPTR_END(a) (a)
#define arguments_CAVM_MLX_JOBPTR_END(a) (a),-1,-1,-1

/**
 * Register (NCB) ml#_jobptr_start
 *
 * ML Job Pointer Start Address Register
 */
union cavm_mlx_jobptr_start
{
    uint64_t u;
    struct cavm_mlx_jobptr_start_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_53_63        : 11;
        uint64_t start_addr            : 53; /**< [ 52:  0](R/W) ML job pointer start address. */
#else /* Word 0 - Little Endian */
        uint64_t start_addr            : 53; /**< [ 52:  0](R/W) ML job pointer start address. */
        uint64_t reserved_53_63        : 11;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_mlx_jobptr_start_s cn; */
};
typedef union cavm_mlx_jobptr_start cavm_mlx_jobptr_start_t;

static inline uint64_t CAVM_MLX_JOBPTR_START(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_MLX_JOBPTR_START(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CN10KA) && (a==0))
        return 0x828000010050ll + 0x1000000000ll * ((a) & 0x0);
    __cavm_csr_fatal("MLX_JOBPTR_START", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_MLX_JOBPTR_START(a) cavm_mlx_jobptr_start_t
#define bustype_CAVM_MLX_JOBPTR_START(a) CSR_TYPE_NCB
#define basename_CAVM_MLX_JOBPTR_START(a) "MLX_JOBPTR_START"
#define device_bar_CAVM_MLX_JOBPTR_START(a) 0x0 /* PF_BAR0 */
#define busnum_CAVM_MLX_JOBPTR_START(a) (a)
#define arguments_CAVM_MLX_JOBPTR_START(a) (a),-1,-1,-1

/**
 * Register (NCB) ml#_mlr_base
 *
 * ML IP LLC Region Base Register
 */
union cavm_mlx_mlr_base
{
    uint64_t u;
    struct cavm_mlx_mlr_base_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_52_63        : 12;
        uint64_t base                  : 52; /**< [ 51:  0](R/W) Base IOVA of the ML region in LLC/DRAM. */
#else /* Word 0 - Little Endian */
        uint64_t base                  : 52; /**< [ 51:  0](R/W) Base IOVA of the ML region in LLC/DRAM. */
        uint64_t reserved_52_63        : 12;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_mlx_mlr_base_s cn; */
};
typedef union cavm_mlx_mlr_base cavm_mlx_mlr_base_t;

static inline uint64_t CAVM_MLX_MLR_BASE(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_MLX_MLR_BASE(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CN10KA) && (a==0))
        return 0x828000010008ll + 0x1000000000ll * ((a) & 0x0);
    __cavm_csr_fatal("MLX_MLR_BASE", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_MLX_MLR_BASE(a) cavm_mlx_mlr_base_t
#define bustype_CAVM_MLX_MLR_BASE(a) CSR_TYPE_NCB
#define basename_CAVM_MLX_MLR_BASE(a) "MLX_MLR_BASE"
#define device_bar_CAVM_MLX_MLR_BASE(a) 0x0 /* PF_BAR0 */
#define busnum_CAVM_MLX_MLR_BASE(a) (a)
#define arguments_CAVM_MLX_MLR_BASE(a) (a),-1,-1,-1

/**
 * Register (NCB) ml#_mlw_err_ena
 *
 * ML Wrapper Error Enable Register
 */
union cavm_mlx_mlw_err_ena
{
    uint64_t u;
    struct cavm_mlx_mlw_err_ena_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_22_63        : 42;
        uint64_t dma_csr_wresp_err     : 1;  /**< [ 21: 21](R/W) MLIP DMA write response error from CSR bus. */
        uint64_t dma_csr_rresp_err     : 1;  /**< [ 20: 20](R/W) MLIP DMA read response error from CSR bus. */
        uint64_t dma_ncb_wresp_err     : 1;  /**< [ 19: 19](R/W) MLIP DMA write response error from NCB bus. */
        uint64_t dma_ncb_rresp_err     : 1;  /**< [ 18: 18](R/W) MLIP DMA read response error from NCB bus. */
        uint64_t dma_waddr_err         : 1;  /**< [ 17: 17](R/W) MLIP DMA write request address out of bound. */
        uint64_t dma_raddr_err         : 1;  /**< [ 16: 16](R/W) MLIP DMA read request address out of bound. */
        uint64_t reserved_10_15        : 6;
        uint64_t acc_csr_wresp_err     : 1;  /**< [  9:  9](R/W) MLIP ACC write response error from CSR bus. */
        uint64_t acc_csr_rresp_err     : 1;  /**< [  8:  8](R/W) MLIP ACC read response error from CSR bus. */
        uint64_t acc_ncb_wresp_err     : 1;  /**< [  7:  7](R/W) MLIP ACC write response error from NCB bus. */
        uint64_t acc_ncb_rresp_err     : 1;  /**< [  6:  6](R/W) MLIP ACC read response error from NCB bus. */
        uint64_t acc_waddr_err         : 1;  /**< [  5:  5](R/W) MLIP ACC write request address out of bound. */
        uint64_t acc_raddr_err         : 1;  /**< [  4:  4](R/W) MLIP ACC read request address out of bound. */
        uint64_t jceq_ovfl             : 1;  /**< [  3:  3](R/W) ML job completion queue overflow. */
        uint64_t jcmdq_ovfl            : 1;  /**< [  2:  2](R/W) ML job command queue overflow. */
        uint64_t descriptor_err        : 1;  /**< [  1:  1](R/W) ML job descriptor fetch error. */
        uint64_t jobptr_err            : 1;  /**< [  0:  0](R/W) ML job pointer out of bound error. */
#else /* Word 0 - Little Endian */
        uint64_t jobptr_err            : 1;  /**< [  0:  0](R/W) ML job pointer out of bound error. */
        uint64_t descriptor_err        : 1;  /**< [  1:  1](R/W) ML job descriptor fetch error. */
        uint64_t jcmdq_ovfl            : 1;  /**< [  2:  2](R/W) ML job command queue overflow. */
        uint64_t jceq_ovfl             : 1;  /**< [  3:  3](R/W) ML job completion queue overflow. */
        uint64_t acc_raddr_err         : 1;  /**< [  4:  4](R/W) MLIP ACC read request address out of bound. */
        uint64_t acc_waddr_err         : 1;  /**< [  5:  5](R/W) MLIP ACC write request address out of bound. */
        uint64_t acc_ncb_rresp_err     : 1;  /**< [  6:  6](R/W) MLIP ACC read response error from NCB bus. */
        uint64_t acc_ncb_wresp_err     : 1;  /**< [  7:  7](R/W) MLIP ACC write response error from NCB bus. */
        uint64_t acc_csr_rresp_err     : 1;  /**< [  8:  8](R/W) MLIP ACC read response error from CSR bus. */
        uint64_t acc_csr_wresp_err     : 1;  /**< [  9:  9](R/W) MLIP ACC write response error from CSR bus. */
        uint64_t reserved_10_15        : 6;
        uint64_t dma_raddr_err         : 1;  /**< [ 16: 16](R/W) MLIP DMA read request address out of bound. */
        uint64_t dma_waddr_err         : 1;  /**< [ 17: 17](R/W) MLIP DMA write request address out of bound. */
        uint64_t dma_ncb_rresp_err     : 1;  /**< [ 18: 18](R/W) MLIP DMA read response error from NCB bus. */
        uint64_t dma_ncb_wresp_err     : 1;  /**< [ 19: 19](R/W) MLIP DMA write response error from NCB bus. */
        uint64_t dma_csr_rresp_err     : 1;  /**< [ 20: 20](R/W) MLIP DMA read response error from CSR bus. */
        uint64_t dma_csr_wresp_err     : 1;  /**< [ 21: 21](R/W) MLIP DMA write response error from CSR bus. */
        uint64_t reserved_22_63        : 42;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_mlx_mlw_err_ena_s cn; */
};
typedef union cavm_mlx_mlw_err_ena cavm_mlx_mlw_err_ena_t;

static inline uint64_t CAVM_MLX_MLW_ERR_ENA(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_MLX_MLW_ERR_ENA(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CN10KA) && (a==0))
        return 0x828000010040ll + 0x1000000000ll * ((a) & 0x0);
    __cavm_csr_fatal("MLX_MLW_ERR_ENA", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_MLX_MLW_ERR_ENA(a) cavm_mlx_mlw_err_ena_t
#define bustype_CAVM_MLX_MLW_ERR_ENA(a) CSR_TYPE_NCB
#define basename_CAVM_MLX_MLW_ERR_ENA(a) "MLX_MLW_ERR_ENA"
#define device_bar_CAVM_MLX_MLW_ERR_ENA(a) 0x0 /* PF_BAR0 */
#define busnum_CAVM_MLX_MLW_ERR_ENA(a) (a)
#define arguments_CAVM_MLX_MLW_ERR_ENA(a) (a),-1,-1,-1

/**
 * Register (NCB) ml#_mlw_err_mask
 *
 * ML Wrapper Error Mask Register
 * When set, error status will be masked out and no interrupt will be generated.
 */
union cavm_mlx_mlw_err_mask
{
    uint64_t u;
    struct cavm_mlx_mlw_err_mask_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_22_63        : 42;
        uint64_t dma_csr_wresp_err     : 1;  /**< [ 21: 21](R/W) MLIP DMA write response error from CSR bus. */
        uint64_t dma_csr_rresp_err     : 1;  /**< [ 20: 20](R/W) MLIP DMA read response error from CSR bus. */
        uint64_t dma_ncb_wresp_err     : 1;  /**< [ 19: 19](R/W) MLIP DMA write response error from NCB bus. */
        uint64_t dma_ncb_rresp_err     : 1;  /**< [ 18: 18](R/W) MLIP DMA read response error from NCB bus. */
        uint64_t dma_waddr_err         : 1;  /**< [ 17: 17](R/W) MLIP DMA write request address out of bound. */
        uint64_t dma_raddr_err         : 1;  /**< [ 16: 16](R/W) MLIP DMA read request address out of bound. */
        uint64_t reserved_10_15        : 6;
        uint64_t acc_csr_wresp_err     : 1;  /**< [  9:  9](R/W) MLIP ACC write response error from CSR bus. */
        uint64_t acc_csr_rresp_err     : 1;  /**< [  8:  8](R/W) MLIP ACC read response error from CSR bus. */
        uint64_t acc_ncb_wresp_err     : 1;  /**< [  7:  7](R/W) MLIP ACC write response error from NCB bus. */
        uint64_t acc_ncb_rresp_err     : 1;  /**< [  6:  6](R/W) MLIP ACC read response error from NCB bus. */
        uint64_t acc_waddr_err         : 1;  /**< [  5:  5](R/W) MLIP ACC write request address out of bound. */
        uint64_t acc_raddr_err         : 1;  /**< [  4:  4](R/W) MLIP ACC read request address out of bound. */
        uint64_t jceq_ovfl             : 1;  /**< [  3:  3](R/W) ML job completion queue overflow. */
        uint64_t jcmdq_ovfl            : 1;  /**< [  2:  2](R/W) ML job command queue overflow. */
        uint64_t descriptor_err        : 1;  /**< [  1:  1](R/W) ML job descriptor fetch error. */
        uint64_t jobptr_err            : 1;  /**< [  0:  0](R/W) ML job pointer out of bound error. */
#else /* Word 0 - Little Endian */
        uint64_t jobptr_err            : 1;  /**< [  0:  0](R/W) ML job pointer out of bound error. */
        uint64_t descriptor_err        : 1;  /**< [  1:  1](R/W) ML job descriptor fetch error. */
        uint64_t jcmdq_ovfl            : 1;  /**< [  2:  2](R/W) ML job command queue overflow. */
        uint64_t jceq_ovfl             : 1;  /**< [  3:  3](R/W) ML job completion queue overflow. */
        uint64_t acc_raddr_err         : 1;  /**< [  4:  4](R/W) MLIP ACC read request address out of bound. */
        uint64_t acc_waddr_err         : 1;  /**< [  5:  5](R/W) MLIP ACC write request address out of bound. */
        uint64_t acc_ncb_rresp_err     : 1;  /**< [  6:  6](R/W) MLIP ACC read response error from NCB bus. */
        uint64_t acc_ncb_wresp_err     : 1;  /**< [  7:  7](R/W) MLIP ACC write response error from NCB bus. */
        uint64_t acc_csr_rresp_err     : 1;  /**< [  8:  8](R/W) MLIP ACC read response error from CSR bus. */
        uint64_t acc_csr_wresp_err     : 1;  /**< [  9:  9](R/W) MLIP ACC write response error from CSR bus. */
        uint64_t reserved_10_15        : 6;
        uint64_t dma_raddr_err         : 1;  /**< [ 16: 16](R/W) MLIP DMA read request address out of bound. */
        uint64_t dma_waddr_err         : 1;  /**< [ 17: 17](R/W) MLIP DMA write request address out of bound. */
        uint64_t dma_ncb_rresp_err     : 1;  /**< [ 18: 18](R/W) MLIP DMA read response error from NCB bus. */
        uint64_t dma_ncb_wresp_err     : 1;  /**< [ 19: 19](R/W) MLIP DMA write response error from NCB bus. */
        uint64_t dma_csr_rresp_err     : 1;  /**< [ 20: 20](R/W) MLIP DMA read response error from CSR bus. */
        uint64_t dma_csr_wresp_err     : 1;  /**< [ 21: 21](R/W) MLIP DMA write response error from CSR bus. */
        uint64_t reserved_22_63        : 42;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_mlx_mlw_err_mask_s cn; */
};
typedef union cavm_mlx_mlw_err_mask cavm_mlx_mlw_err_mask_t;

static inline uint64_t CAVM_MLX_MLW_ERR_MASK(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_MLX_MLW_ERR_MASK(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CN10KA) && (a==0))
        return 0x828000010048ll + 0x1000000000ll * ((a) & 0x0);
    __cavm_csr_fatal("MLX_MLW_ERR_MASK", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_MLX_MLW_ERR_MASK(a) cavm_mlx_mlw_err_mask_t
#define bustype_CAVM_MLX_MLW_ERR_MASK(a) CSR_TYPE_NCB
#define basename_CAVM_MLX_MLW_ERR_MASK(a) "MLX_MLW_ERR_MASK"
#define device_bar_CAVM_MLX_MLW_ERR_MASK(a) 0x0 /* PF_BAR0 */
#define busnum_CAVM_MLX_MLW_ERR_MASK(a) (a)
#define arguments_CAVM_MLX_MLW_ERR_MASK(a) (a),-1,-1,-1

/**
 * Register (NCB) ml#_mlw_err_status
 *
 * ML Wrapper Error Status Register
 */
union cavm_mlx_mlw_err_status
{
    uint64_t u;
    struct cavm_mlx_mlw_err_status_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_22_63        : 42;
        uint64_t dma_csr_wresp_err     : 1;  /**< [ 21: 21](R/W1C/H) MLIP DMA write response error from CSR bus. */
        uint64_t dma_csr_rresp_err     : 1;  /**< [ 20: 20](R/W1C/H) MLIP DMA read response error from CSR bus. */
        uint64_t dma_ncb_wresp_err     : 1;  /**< [ 19: 19](R/W1C/H) MLIP DMA write response error from NCB bus. */
        uint64_t dma_ncb_rresp_err     : 1;  /**< [ 18: 18](R/W1C/H) MLIP DMA read response error from NCB bus. */
        uint64_t dma_waddr_err         : 1;  /**< [ 17: 17](R/W1C/H) MLIP DMA write request address out of bound. */
        uint64_t dma_raddr_err         : 1;  /**< [ 16: 16](R/W1C/H) MLIP DMA read request address out of bound. */
        uint64_t reserved_10_15        : 6;
        uint64_t acc_csr_wresp_err     : 1;  /**< [  9:  9](R/W1C/H) MLIP ACC write response error from CSR bus. */
        uint64_t acc_csr_rresp_err     : 1;  /**< [  8:  8](R/W1C/H) MLIP ACC read response error from CSR bus. */
        uint64_t acc_ncb_wresp_err     : 1;  /**< [  7:  7](R/W1C/H) MLIP ACC write response error from NCB bus. */
        uint64_t acc_ncb_rresp_err     : 1;  /**< [  6:  6](R/W1C/H) MLIP ACC read response error from NCB bus. */
        uint64_t acc_waddr_err         : 1;  /**< [  5:  5](R/W1C/H) MLIP ACC write request address out of bound. */
        uint64_t acc_raddr_err         : 1;  /**< [  4:  4](R/W1C/H) MLIP ACC read request address out of bound. */
        uint64_t jceq_ovfl             : 1;  /**< [  3:  3](R/W1C/H) MLW job completion queue overflow. */
        uint64_t jcmdq_ovfl            : 1;  /**< [  2:  2](R/W1C/H) MLW job command queue overflow. */
        uint64_t descriptor_err        : 1;  /**< [  1:  1](R/W1C/H) MLW job descriptor fetch error. */
        uint64_t jobptr_err            : 1;  /**< [  0:  0](R/W1C/H) MLW job pointer out of bound error. */
#else /* Word 0 - Little Endian */
        uint64_t jobptr_err            : 1;  /**< [  0:  0](R/W1C/H) MLW job pointer out of bound error. */
        uint64_t descriptor_err        : 1;  /**< [  1:  1](R/W1C/H) MLW job descriptor fetch error. */
        uint64_t jcmdq_ovfl            : 1;  /**< [  2:  2](R/W1C/H) MLW job command queue overflow. */
        uint64_t jceq_ovfl             : 1;  /**< [  3:  3](R/W1C/H) MLW job completion queue overflow. */
        uint64_t acc_raddr_err         : 1;  /**< [  4:  4](R/W1C/H) MLIP ACC read request address out of bound. */
        uint64_t acc_waddr_err         : 1;  /**< [  5:  5](R/W1C/H) MLIP ACC write request address out of bound. */
        uint64_t acc_ncb_rresp_err     : 1;  /**< [  6:  6](R/W1C/H) MLIP ACC read response error from NCB bus. */
        uint64_t acc_ncb_wresp_err     : 1;  /**< [  7:  7](R/W1C/H) MLIP ACC write response error from NCB bus. */
        uint64_t acc_csr_rresp_err     : 1;  /**< [  8:  8](R/W1C/H) MLIP ACC read response error from CSR bus. */
        uint64_t acc_csr_wresp_err     : 1;  /**< [  9:  9](R/W1C/H) MLIP ACC write response error from CSR bus. */
        uint64_t reserved_10_15        : 6;
        uint64_t dma_raddr_err         : 1;  /**< [ 16: 16](R/W1C/H) MLIP DMA read request address out of bound. */
        uint64_t dma_waddr_err         : 1;  /**< [ 17: 17](R/W1C/H) MLIP DMA write request address out of bound. */
        uint64_t dma_ncb_rresp_err     : 1;  /**< [ 18: 18](R/W1C/H) MLIP DMA read response error from NCB bus. */
        uint64_t dma_ncb_wresp_err     : 1;  /**< [ 19: 19](R/W1C/H) MLIP DMA write response error from NCB bus. */
        uint64_t dma_csr_rresp_err     : 1;  /**< [ 20: 20](R/W1C/H) MLIP DMA read response error from CSR bus. */
        uint64_t dma_csr_wresp_err     : 1;  /**< [ 21: 21](R/W1C/H) MLIP DMA write response error from CSR bus. */
        uint64_t reserved_22_63        : 42;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_mlx_mlw_err_status_s cn; */
};
typedef union cavm_mlx_mlw_err_status cavm_mlx_mlw_err_status_t;

static inline uint64_t CAVM_MLX_MLW_ERR_STATUS(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_MLX_MLW_ERR_STATUS(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CN10KA) && (a==0))
        return 0x828000010038ll + 0x1000000000ll * ((a) & 0x0);
    __cavm_csr_fatal("MLX_MLW_ERR_STATUS", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_MLX_MLW_ERR_STATUS(a) cavm_mlx_mlw_err_status_t
#define bustype_CAVM_MLX_MLW_ERR_STATUS(a) CSR_TYPE_NCB
#define basename_CAVM_MLX_MLW_ERR_STATUS(a) "MLX_MLW_ERR_STATUS"
#define device_bar_CAVM_MLX_MLW_ERR_STATUS(a) 0x0 /* PF_BAR0 */
#define busnum_CAVM_MLX_MLW_ERR_STATUS(a) (a)
#define arguments_CAVM_MLX_MLW_ERR_STATUS(a) (a),-1,-1,-1

/**
 * Register (NCB) ml#_msix_pba#
 *
 * ML MSI-X Pending Bit Array Register
 * This register is the MSI-X PBA table; the bit number is indexed by the ML_INT_VEC_E enumeration.
 *
 * This register is reset on ML domain reset.
 */
union cavm_mlx_msix_pbax
{
    uint64_t u;
    struct cavm_mlx_msix_pbax_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t pend                  : 64; /**< [ 63:  0](RO/H) Pending message for the associated ML()_MSIX_VEC()_CTL, enumerated by ML_INT_VEC_E. Bits
                                                                 that have no associated ML_INT_VEC_E are 0. */
#else /* Word 0 - Little Endian */
        uint64_t pend                  : 64; /**< [ 63:  0](RO/H) Pending message for the associated ML()_MSIX_VEC()_CTL, enumerated by ML_INT_VEC_E. Bits
                                                                 that have no associated ML_INT_VEC_E are 0. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_mlx_msix_pbax_s cn; */
};
typedef union cavm_mlx_msix_pbax cavm_mlx_msix_pbax_t;

static inline uint64_t CAVM_MLX_MSIX_PBAX(uint64_t a, uint64_t b) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_MLX_MSIX_PBAX(uint64_t a, uint64_t b)
{
    if (cavm_is_model(OCTEONTX_CN10KA) && ((a==0) && (b==0)))
        return 0x8281000f0000ll + 0x1000000000ll * ((a) & 0x0) + 8ll * ((b) & 0x0);
    __cavm_csr_fatal("MLX_MSIX_PBAX", 2, a, b, 0, 0, 0, 0);
}

#define typedef_CAVM_MLX_MSIX_PBAX(a,b) cavm_mlx_msix_pbax_t
#define bustype_CAVM_MLX_MSIX_PBAX(a,b) CSR_TYPE_NCB
#define basename_CAVM_MLX_MSIX_PBAX(a,b) "MLX_MSIX_PBAX"
#define device_bar_CAVM_MLX_MSIX_PBAX(a,b) 0x4 /* PF_BAR4 */
#define busnum_CAVM_MLX_MSIX_PBAX(a,b) (a)
#define arguments_CAVM_MLX_MSIX_PBAX(a,b) (a),(b),-1,-1

/**
 * Register (NCB) ml#_msix_vec#_addr
 *
 * ML MSI-X Vector-Table Address Register
 * This register is the MSI-X vector table, indexed by the ML_INT_VEC_E enumeration.
 *
 * This register is reset on ML domain reset.
 */
union cavm_mlx_msix_vecx_addr
{
    uint64_t u;
    struct cavm_mlx_msix_vecx_addr_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_53_63        : 11;
        uint64_t addr                  : 51; /**< [ 52:  2](R/W) IOVA to use for MSI-X delivery of this vector. */
        uint64_t reserved_1            : 1;
        uint64_t secvec                : 1;  /**< [  0:  0](SR/W) Secure vector.
                                                                 0 = This vector may be read or written by either secure or nonsecure states.
                                                                 1 = This vector's ML()_MSIX_VEC()_ADDR, ML()_MSIX_VEC()_CTL, and corresponding
                                                                 bit of ML()_MSIX_PBA() are RAZ/WI and does not cause a fault when accessed
                                                                 by the nonsecure world.

                                                                 If PCCPF_ML_VSEC_SCTL[MSIX_SEC] (for documentation, see PCCPF_XXX_VSEC_SCTL[MSIX_SEC]) is
                                                                 set, all vectors are secure and function as if [SECVEC] was set. */
#else /* Word 0 - Little Endian */
        uint64_t secvec                : 1;  /**< [  0:  0](SR/W) Secure vector.
                                                                 0 = This vector may be read or written by either secure or nonsecure states.
                                                                 1 = This vector's ML()_MSIX_VEC()_ADDR, ML()_MSIX_VEC()_CTL, and corresponding
                                                                 bit of ML()_MSIX_PBA() are RAZ/WI and does not cause a fault when accessed
                                                                 by the nonsecure world.

                                                                 If PCCPF_ML_VSEC_SCTL[MSIX_SEC] (for documentation, see PCCPF_XXX_VSEC_SCTL[MSIX_SEC]) is
                                                                 set, all vectors are secure and function as if [SECVEC] was set. */
        uint64_t reserved_1            : 1;
        uint64_t addr                  : 51; /**< [ 52:  2](R/W) IOVA to use for MSI-X delivery of this vector. */
        uint64_t reserved_53_63        : 11;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_mlx_msix_vecx_addr_s cn; */
};
typedef union cavm_mlx_msix_vecx_addr cavm_mlx_msix_vecx_addr_t;

static inline uint64_t CAVM_MLX_MSIX_VECX_ADDR(uint64_t a, uint64_t b) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_MLX_MSIX_VECX_ADDR(uint64_t a, uint64_t b)
{
    if (cavm_is_model(OCTEONTX_CN10KA) && ((a==0) && (b<=2)))
        return 0x828100000000ll + 0x1000000000ll * ((a) & 0x0) + 0x10ll * ((b) & 0x3);
    __cavm_csr_fatal("MLX_MSIX_VECX_ADDR", 2, a, b, 0, 0, 0, 0);
}

#define typedef_CAVM_MLX_MSIX_VECX_ADDR(a,b) cavm_mlx_msix_vecx_addr_t
#define bustype_CAVM_MLX_MSIX_VECX_ADDR(a,b) CSR_TYPE_NCB
#define basename_CAVM_MLX_MSIX_VECX_ADDR(a,b) "MLX_MSIX_VECX_ADDR"
#define device_bar_CAVM_MLX_MSIX_VECX_ADDR(a,b) 0x4 /* PF_BAR4 */
#define busnum_CAVM_MLX_MSIX_VECX_ADDR(a,b) (a)
#define arguments_CAVM_MLX_MSIX_VECX_ADDR(a,b) (a),(b),-1,-1

/**
 * Register (NCB) ml#_msix_vec#_ctl
 *
 * ML MSI-X Vector-Table Control and Data Register
 * This register is the MSI-X vector table, indexed by the ML_INT_VEC_E enumeration
 *
 * This register is reset on ML domain reset.
 */
union cavm_mlx_msix_vecx_ctl
{
    uint64_t u;
    struct cavm_mlx_msix_vecx_ctl_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_33_63        : 31;
        uint64_t mask                  : 1;  /**< [ 32: 32](R/W) When set, no MSI-X interrupts are sent to this vector. */
        uint64_t data                  : 32; /**< [ 31:  0](R/W) Data to use for MSI-X delivery of this vector. */
#else /* Word 0 - Little Endian */
        uint64_t data                  : 32; /**< [ 31:  0](R/W) Data to use for MSI-X delivery of this vector. */
        uint64_t mask                  : 1;  /**< [ 32: 32](R/W) When set, no MSI-X interrupts are sent to this vector. */
        uint64_t reserved_33_63        : 31;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_mlx_msix_vecx_ctl_s cn; */
};
typedef union cavm_mlx_msix_vecx_ctl cavm_mlx_msix_vecx_ctl_t;

static inline uint64_t CAVM_MLX_MSIX_VECX_CTL(uint64_t a, uint64_t b) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_MLX_MSIX_VECX_CTL(uint64_t a, uint64_t b)
{
    if (cavm_is_model(OCTEONTX_CN10KA) && ((a==0) && (b<=2)))
        return 0x828100000008ll + 0x1000000000ll * ((a) & 0x0) + 0x10ll * ((b) & 0x3);
    __cavm_csr_fatal("MLX_MSIX_VECX_CTL", 2, a, b, 0, 0, 0, 0);
}

#define typedef_CAVM_MLX_MSIX_VECX_CTL(a,b) cavm_mlx_msix_vecx_ctl_t
#define bustype_CAVM_MLX_MSIX_VECX_CTL(a,b) CSR_TYPE_NCB
#define basename_CAVM_MLX_MSIX_VECX_CTL(a,b) "MLX_MSIX_VECX_CTL"
#define device_bar_CAVM_MLX_MSIX_VECX_CTL(a,b) 0x4 /* PF_BAR4 */
#define busnum_CAVM_MLX_MSIX_VECX_CTL(a,b) (a)
#define arguments_CAVM_MLX_MSIX_VECX_CTL(a,b) (a),(b),-1,-1

/**
 * Register (NCB) ml#_scratch#
 *
 * ML Scratch Register
 */
union cavm_mlx_scratchx
{
    uint64_t u;
    struct cavm_mlx_scratchx_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t scratch               : 64; /**< [ 63:  0](R/W) Scratch register. */
#else /* Word 0 - Little Endian */
        uint64_t scratch               : 64; /**< [ 63:  0](R/W) Scratch register. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_mlx_scratchx_s cn; */
};
typedef union cavm_mlx_scratchx cavm_mlx_scratchx_t;

static inline uint64_t CAVM_MLX_SCRATCHX(uint64_t a, uint64_t b) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_MLX_SCRATCHX(uint64_t a, uint64_t b)
{
    if (cavm_is_model(OCTEONTX_CN10KA) && ((a==0) && (b<=2047)))
        return 0x828000014000ll + 0x1000000000ll * ((a) & 0x0) + 8ll * ((b) & 0x7ff);
    __cavm_csr_fatal("MLX_SCRATCHX", 2, a, b, 0, 0, 0, 0);
}

#define typedef_CAVM_MLX_SCRATCHX(a,b) cavm_mlx_scratchx_t
#define bustype_CAVM_MLX_SCRATCHX(a,b) CSR_TYPE_NCB
#define basename_CAVM_MLX_SCRATCHX(a,b) "MLX_SCRATCHX"
#define device_bar_CAVM_MLX_SCRATCHX(a,b) 0x0 /* PF_BAR0 */
#define busnum_CAVM_MLX_SCRATCHX(a,b) (a)
#define arguments_CAVM_MLX_SCRATCHX(a,b) (a),(b),-1,-1

/**
 * Register (NCB) ml#_stg#_jcmd#
 *
 * ML Stage Job Command Register
 */
union cavm_mlx_stgx_jcmdx
{
    uint64_t u;
    struct cavm_mlx_stgx_jcmdx_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t data                  : 64; /**< [ 63:  0](RO/H) Job command, Format specified by ML_JOB_CMD_S. */
#else /* Word 0 - Little Endian */
        uint64_t data                  : 64; /**< [ 63:  0](RO/H) Job command, Format specified by ML_JOB_CMD_S. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_mlx_stgx_jcmdx_s cn; */
};
typedef union cavm_mlx_stgx_jcmdx cavm_mlx_stgx_jcmdx_t;

static inline uint64_t CAVM_MLX_STGX_JCMDX(uint64_t a, uint64_t b, uint64_t c) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_MLX_STGX_JCMDX(uint64_t a, uint64_t b, uint64_t c)
{
    if (cavm_is_model(OCTEONTX_CN10KA) && ((a==0) && (b<=2) && (c<=1)))
        return 0x828000011040ll + 0x1000000000ll * ((a) & 0x0) + 8ll * ((b) & 0x3) + 0x80ll * ((c) & 0x1);
    __cavm_csr_fatal("MLX_STGX_JCMDX", 3, a, b, c, 0, 0, 0);
}

#define typedef_CAVM_MLX_STGX_JCMDX(a,b,c) cavm_mlx_stgx_jcmdx_t
#define bustype_CAVM_MLX_STGX_JCMDX(a,b,c) CSR_TYPE_NCB
#define basename_CAVM_MLX_STGX_JCMDX(a,b,c) "MLX_STGX_JCMDX"
#define device_bar_CAVM_MLX_STGX_JCMDX(a,b,c) 0x0 /* PF_BAR0 */
#define busnum_CAVM_MLX_STGX_JCMDX(a,b,c) (a)
#define arguments_CAVM_MLX_STGX_JCMDX(a,b,c) (a),(b),(c),-1

/**
 * Register (NCB) ml#_stg#_status
 *
 * ML Stage Status Register
 */
union cavm_mlx_stgx_status
{
    uint64_t u;
    struct cavm_mlx_stgx_status_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_1_63         : 63;
        uint64_t valid                 : 1;  /**< [  0:  0](RO/H) Job Valid. The remaining fields in this register and the contents of
                                                                 ML_STG()_JCMD() are only meaningful when this bit is set. */
#else /* Word 0 - Little Endian */
        uint64_t valid                 : 1;  /**< [  0:  0](RO/H) Job Valid. The remaining fields in this register and the contents of
                                                                 ML_STG()_JCMD() are only meaningful when this bit is set. */
        uint64_t reserved_1_63         : 63;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_mlx_stgx_status_s cn; */
};
typedef union cavm_mlx_stgx_status cavm_mlx_stgx_status_t;

static inline uint64_t CAVM_MLX_STGX_STATUS(uint64_t a, uint64_t b) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_MLX_STGX_STATUS(uint64_t a, uint64_t b)
{
    if (cavm_is_model(OCTEONTX_CN10KA) && ((a==0) && (b<=2)))
        return 0x828000011020ll + 0x1000000000ll * ((a) & 0x0) + 8ll * ((b) & 0x3);
    __cavm_csr_fatal("MLX_STGX_STATUS", 2, a, b, 0, 0, 0, 0);
}

#define typedef_CAVM_MLX_STGX_STATUS(a,b) cavm_mlx_stgx_status_t
#define bustype_CAVM_MLX_STGX_STATUS(a,b) CSR_TYPE_NCB
#define basename_CAVM_MLX_STGX_STATUS(a,b) "MLX_STGX_STATUS"
#define device_bar_CAVM_MLX_STGX_STATUS(a,b) 0x0 /* PF_BAR0 */
#define busnum_CAVM_MLX_STGX_STATUS(a,b) (a)
#define arguments_CAVM_MLX_STGX_STATUS(a,b) (a),(b),-1,-1

/**
 * Register (NCB) ml#_stg_control
 *
 * ML Stage Control Register
 * Software writes to this register to move a job to the next execution stage.
 *
 * A one must not be written to both [FETCH_TO_RUN] and [RUN_TO_COMP] in the same
 * write to this register. Two consecutive writes can be done to set both bits.
 */
union cavm_mlx_stg_control
{
    uint64_t u;
    struct cavm_mlx_stg_control_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_2_63         : 62;
        uint64_t run_to_comp           : 1;  /**< [  1:  1](R/W1S/H) When a one is written to this bit, hardware attempts to move a job from the run
                                                                 stage to the completion stage.
                                                                 If the run stage has a valid job and the completion stage is not available
                                                                 (MLAB_STG(1)_STATUS[VALID] == 1 and
                                                                 MLAB_STG(2)_STATUS[VALID] == 1), hardware waits until the completion stage is
                                                                 available. If the completion stage is available or when it becomes available
                                                                 (MLAB_STG(2)_STATUS[VALID] == 0), hardware moves the job from the run stage to
                                                                 the completion stage and clears this bit. MLIP must ensure that [RUN_TO_COMP] ==
                                                                 0 when it writes a one to set the bit. This will be the case if MLIP only issues
                                                                 transactions for a job when it is in the run stage, as specified by
                                                                 [FETCH_TO_RUN].
                                                                 If the run stage does not have a valid job (MLAB_STG(1)_STATUS[VALID] == 0),
                                                                 hardware ignores a one written to this bit. */
        uint64_t fetch_to_run          : 1;  /**< [  0:  0](R/W1S/H) When a one is written to set this bit, hardware attempts to move a job from the
                                                                 fetch stage to the run stage.
                                                                 If the fetch state has a valid job and the run state is not available
                                                                 (ML_STG(0)_STATUS[VALID] == 1 and ML_STG(1)_STATUS[VALID] == 1), hardware
                                                                 waits until the run state is available and this bit remains set . If the run
                                                                 state is available, or when it becomes available (ML_STG(1)_STATUS[VALID] ==
                                                                 0), hardware moves the job from the fetch state to the run state and clears this
                                                                 bit.
                                                                 If the fetch state does not have a valid job (ML_STG(0)_STATUS[VALID] == 0), a
                                                                 write that sets this bit is ignored and hardware immediately clears this bit.
                                                                 This bit is only expected to be used by firmware. Firmware must ensure that the
                                                                 bit is clear before it writes a one to set it. */
#else /* Word 0 - Little Endian */
        uint64_t fetch_to_run          : 1;  /**< [  0:  0](R/W1S/H) When a one is written to set this bit, hardware attempts to move a job from the
                                                                 fetch stage to the run stage.
                                                                 If the fetch state has a valid job and the run state is not available
                                                                 (ML_STG(0)_STATUS[VALID] == 1 and ML_STG(1)_STATUS[VALID] == 1), hardware
                                                                 waits until the run state is available and this bit remains set . If the run
                                                                 state is available, or when it becomes available (ML_STG(1)_STATUS[VALID] ==
                                                                 0), hardware moves the job from the fetch state to the run state and clears this
                                                                 bit.
                                                                 If the fetch state does not have a valid job (ML_STG(0)_STATUS[VALID] == 0), a
                                                                 write that sets this bit is ignored and hardware immediately clears this bit.
                                                                 This bit is only expected to be used by firmware. Firmware must ensure that the
                                                                 bit is clear before it writes a one to set it. */
        uint64_t run_to_comp           : 1;  /**< [  1:  1](R/W1S/H) When a one is written to this bit, hardware attempts to move a job from the run
                                                                 stage to the completion stage.
                                                                 If the run stage has a valid job and the completion stage is not available
                                                                 (MLAB_STG(1)_STATUS[VALID] == 1 and
                                                                 MLAB_STG(2)_STATUS[VALID] == 1), hardware waits until the completion stage is
                                                                 available. If the completion stage is available or when it becomes available
                                                                 (MLAB_STG(2)_STATUS[VALID] == 0), hardware moves the job from the run stage to
                                                                 the completion stage and clears this bit. MLIP must ensure that [RUN_TO_COMP] ==
                                                                 0 when it writes a one to set the bit. This will be the case if MLIP only issues
                                                                 transactions for a job when it is in the run stage, as specified by
                                                                 [FETCH_TO_RUN].
                                                                 If the run stage does not have a valid job (MLAB_STG(1)_STATUS[VALID] == 0),
                                                                 hardware ignores a one written to this bit. */
        uint64_t reserved_2_63         : 62;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_mlx_stg_control_s cn; */
};
typedef union cavm_mlx_stg_control cavm_mlx_stg_control_t;

static inline uint64_t CAVM_MLX_STG_CONTROL(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_MLX_STG_CONTROL(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CN10KA) && (a==0))
        return 0x828000011100ll + 0x1000000000ll * ((a) & 0x0);
    __cavm_csr_fatal("MLX_STG_CONTROL", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_MLX_STG_CONTROL(a) cavm_mlx_stg_control_t
#define bustype_CAVM_MLX_STG_CONTROL(a) CSR_TYPE_NCB
#define basename_CAVM_MLX_STG_CONTROL(a) "MLX_STG_CONTROL"
#define device_bar_CAVM_MLX_STG_CONTROL(a) 0x0 /* PF_BAR0 */
#define busnum_CAVM_MLX_STG_CONTROL(a) (a)
#define arguments_CAVM_MLX_STG_CONTROL(a) (a),-1,-1,-1

/**
 * Register (NCB) ml#_wrap_err_int
 *
 * ML PF Interrupt Register
 */
union cavm_mlx_wrap_err_int
{
    uint64_t u;
    struct cavm_mlx_wrap_err_int_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_1_63         : 63;
        uint64_t wrap_err              : 1;  /**< [  0:  0](R/W1C/H) Low priority interrupt set. */
#else /* Word 0 - Little Endian */
        uint64_t wrap_err              : 1;  /**< [  0:  0](R/W1C/H) Low priority interrupt set. */
        uint64_t reserved_1_63         : 63;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_mlx_wrap_err_int_s cn; */
};
typedef union cavm_mlx_wrap_err_int cavm_mlx_wrap_err_int_t;

static inline uint64_t CAVM_MLX_WRAP_ERR_INT(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_MLX_WRAP_ERR_INT(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CN10KA) && (a==0))
        return 0x828000010180ll + 0x1000000000ll * ((a) & 0x0);
    __cavm_csr_fatal("MLX_WRAP_ERR_INT", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_MLX_WRAP_ERR_INT(a) cavm_mlx_wrap_err_int_t
#define bustype_CAVM_MLX_WRAP_ERR_INT(a) CSR_TYPE_NCB
#define basename_CAVM_MLX_WRAP_ERR_INT(a) "MLX_WRAP_ERR_INT"
#define device_bar_CAVM_MLX_WRAP_ERR_INT(a) 0x0 /* PF_BAR0 */
#define busnum_CAVM_MLX_WRAP_ERR_INT(a) (a)
#define arguments_CAVM_MLX_WRAP_ERR_INT(a) (a),-1,-1,-1

/**
 * Register (NCB) ml#_wrap_err_int_ena_w1c
 *
 * ML PF Interrupt Enable Clear Register
 * This register clears interrupt enable bits.
 */
union cavm_mlx_wrap_err_int_ena_w1c
{
    uint64_t u;
    struct cavm_mlx_wrap_err_int_ena_w1c_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_1_63         : 63;
        uint64_t wrap_err              : 1;  /**< [  0:  0](R/W1C/H) Reads or clears enable for ML(0)_WRAP_ERR_INT[WRAP_ERR]. */
#else /* Word 0 - Little Endian */
        uint64_t wrap_err              : 1;  /**< [  0:  0](R/W1C/H) Reads or clears enable for ML(0)_WRAP_ERR_INT[WRAP_ERR]. */
        uint64_t reserved_1_63         : 63;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_mlx_wrap_err_int_ena_w1c_s cn; */
};
typedef union cavm_mlx_wrap_err_int_ena_w1c cavm_mlx_wrap_err_int_ena_w1c_t;

static inline uint64_t CAVM_MLX_WRAP_ERR_INT_ENA_W1C(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_MLX_WRAP_ERR_INT_ENA_W1C(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CN10KA) && (a==0))
        return 0x828000010190ll + 0x1000000000ll * ((a) & 0x0);
    __cavm_csr_fatal("MLX_WRAP_ERR_INT_ENA_W1C", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_MLX_WRAP_ERR_INT_ENA_W1C(a) cavm_mlx_wrap_err_int_ena_w1c_t
#define bustype_CAVM_MLX_WRAP_ERR_INT_ENA_W1C(a) CSR_TYPE_NCB
#define basename_CAVM_MLX_WRAP_ERR_INT_ENA_W1C(a) "MLX_WRAP_ERR_INT_ENA_W1C"
#define device_bar_CAVM_MLX_WRAP_ERR_INT_ENA_W1C(a) 0x0 /* PF_BAR0 */
#define busnum_CAVM_MLX_WRAP_ERR_INT_ENA_W1C(a) (a)
#define arguments_CAVM_MLX_WRAP_ERR_INT_ENA_W1C(a) (a),-1,-1,-1

/**
 * Register (NCB) ml#_wrap_err_int_ena_w1s
 *
 * ML PF Interrupt Enable Set Register
 * This register sets interrupt enable bits.
 */
union cavm_mlx_wrap_err_int_ena_w1s
{
    uint64_t u;
    struct cavm_mlx_wrap_err_int_ena_w1s_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_1_63         : 63;
        uint64_t wrap_err              : 1;  /**< [  0:  0](R/W1S/H) Reads or sets enable for ML(0)_WRAP_ERR_INT[WRAP_ERR]. */
#else /* Word 0 - Little Endian */
        uint64_t wrap_err              : 1;  /**< [  0:  0](R/W1S/H) Reads or sets enable for ML(0)_WRAP_ERR_INT[WRAP_ERR]. */
        uint64_t reserved_1_63         : 63;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_mlx_wrap_err_int_ena_w1s_s cn; */
};
typedef union cavm_mlx_wrap_err_int_ena_w1s cavm_mlx_wrap_err_int_ena_w1s_t;

static inline uint64_t CAVM_MLX_WRAP_ERR_INT_ENA_W1S(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_MLX_WRAP_ERR_INT_ENA_W1S(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CN10KA) && (a==0))
        return 0x828000010198ll + 0x1000000000ll * ((a) & 0x0);
    __cavm_csr_fatal("MLX_WRAP_ERR_INT_ENA_W1S", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_MLX_WRAP_ERR_INT_ENA_W1S(a) cavm_mlx_wrap_err_int_ena_w1s_t
#define bustype_CAVM_MLX_WRAP_ERR_INT_ENA_W1S(a) CSR_TYPE_NCB
#define basename_CAVM_MLX_WRAP_ERR_INT_ENA_W1S(a) "MLX_WRAP_ERR_INT_ENA_W1S"
#define device_bar_CAVM_MLX_WRAP_ERR_INT_ENA_W1S(a) 0x0 /* PF_BAR0 */
#define busnum_CAVM_MLX_WRAP_ERR_INT_ENA_W1S(a) (a)
#define arguments_CAVM_MLX_WRAP_ERR_INT_ENA_W1S(a) (a),-1,-1,-1

/**
 * Register (NCB) ml#_wrap_err_int_w1s
 *
 * ML PF Interrupt Set Register
 * This register sets interrupt bits.
 */
union cavm_mlx_wrap_err_int_w1s
{
    uint64_t u;
    struct cavm_mlx_wrap_err_int_w1s_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_1_63         : 63;
        uint64_t wrap_err              : 1;  /**< [  0:  0](R/W1S/H) Reads or sets ML(0)_WRAP_ERR_INT[WRAP_ERR]. */
#else /* Word 0 - Little Endian */
        uint64_t wrap_err              : 1;  /**< [  0:  0](R/W1S/H) Reads or sets ML(0)_WRAP_ERR_INT[WRAP_ERR]. */
        uint64_t reserved_1_63         : 63;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_mlx_wrap_err_int_w1s_s cn; */
};
typedef union cavm_mlx_wrap_err_int_w1s cavm_mlx_wrap_err_int_w1s_t;

static inline uint64_t CAVM_MLX_WRAP_ERR_INT_W1S(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_MLX_WRAP_ERR_INT_W1S(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CN10KA) && (a==0))
        return 0x828000010188ll + 0x1000000000ll * ((a) & 0x0);
    __cavm_csr_fatal("MLX_WRAP_ERR_INT_W1S", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_MLX_WRAP_ERR_INT_W1S(a) cavm_mlx_wrap_err_int_w1s_t
#define bustype_CAVM_MLX_WRAP_ERR_INT_W1S(a) CSR_TYPE_NCB
#define basename_CAVM_MLX_WRAP_ERR_INT_W1S(a) "MLX_WRAP_ERR_INT_W1S"
#define device_bar_CAVM_MLX_WRAP_ERR_INT_W1S(a) 0x0 /* PF_BAR0 */
#define busnum_CAVM_MLX_WRAP_ERR_INT_W1S(a) (a)
#define arguments_CAVM_MLX_WRAP_ERR_INT_W1S(a) (a),-1,-1,-1

#endif /* __CAVM_CSRS_ML_H__ */
