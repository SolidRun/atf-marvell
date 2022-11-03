#ifndef __CAVM_CSRS_ANB_H__
#define __CAVM_CSRS_ANB_H__
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
 * OcteonTX ANB.
 *
 * This file is auto generated. Do not edit.
 *
 */

/**
 * Register (SYSREG) anb_aximstr_status
 *
 * ANB AXISLV Block Status Register
 */
union cavm_anb_aximstr_status
{
    uint64_t u;
    struct cavm_anb_aximstr_status_s
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
    /* struct cavm_anb_aximstr_status_s cn; */
};
typedef union cavm_anb_aximstr_status cavm_anb_aximstr_status_t;

#define CAVM_ANB_AXIMSTR_STATUS CAVM_ANB_AXIMSTR_STATUS_FUNC()
static inline uint64_t CAVM_ANB_AXIMSTR_STATUS_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_ANB_AXIMSTR_STATUS_FUNC(void)
{
    return 0x60;
}

#define typedef_CAVM_ANB_AXIMSTR_STATUS cavm_anb_aximstr_status_t
#define bustype_CAVM_ANB_AXIMSTR_STATUS CSR_TYPE_SYSREG
#define basename_CAVM_ANB_AXIMSTR_STATUS "ANB_AXIMSTR_STATUS"
#define busnum_CAVM_ANB_AXIMSTR_STATUS 0
#define arguments_CAVM_ANB_AXIMSTR_STATUS -1,-1,-1,-1

/**
 * Register (SYSREG) anb_axislv_status
 *
 * ANB AXISLV Block Status Register
 */
union cavm_anb_axislv_status
{
    uint64_t u;
    struct cavm_anb_axislv_status_s
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
    /* struct cavm_anb_axislv_status_s cn; */
};
typedef union cavm_anb_axislv_status cavm_anb_axislv_status_t;

#define CAVM_ANB_AXISLV_STATUS CAVM_ANB_AXISLV_STATUS_FUNC()
static inline uint64_t CAVM_ANB_AXISLV_STATUS_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_ANB_AXISLV_STATUS_FUNC(void)
{
    return 0x30;
}

#define typedef_CAVM_ANB_AXISLV_STATUS cavm_anb_axislv_status_t
#define bustype_CAVM_ANB_AXISLV_STATUS CSR_TYPE_SYSREG
#define basename_CAVM_ANB_AXISLV_STATUS "ANB_AXISLV_STATUS"
#define busnum_CAVM_ANB_AXISLV_STATUS 0
#define arguments_CAVM_ANB_AXISLV_STATUS -1,-1,-1,-1

/**
 * Register (SYSREG) anb_backp_disable
 *
 * ANB Backpressure Configuration Register
 */
union cavm_anb_backp_disable
{
    uint64_t u;
    struct cavm_anb_backp_disable_s
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
    /* struct cavm_anb_backp_disable_s cn; */
};
typedef union cavm_anb_backp_disable cavm_anb_backp_disable_t;

#define CAVM_ANB_BACKP_DISABLE CAVM_ANB_BACKP_DISABLE_FUNC()
static inline uint64_t CAVM_ANB_BACKP_DISABLE_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_ANB_BACKP_DISABLE_FUNC(void)
{
    return 0;
}

#define typedef_CAVM_ANB_BACKP_DISABLE cavm_anb_backp_disable_t
#define bustype_CAVM_ANB_BACKP_DISABLE CSR_TYPE_SYSREG
#define basename_CAVM_ANB_BACKP_DISABLE "ANB_BACKP_DISABLE"
#define busnum_CAVM_ANB_BACKP_DISABLE 0
#define arguments_CAVM_ANB_BACKP_DISABLE -1,-1,-1,-1

/**
 * Register (SYSREG) anb_ncbi_cr_ovr
 *
 * ANB NCBITXT CR Path Command Overrides Register
 */
union cavm_anb_ncbi_cr_ovr
{
    uint64_t u;
    struct cavm_anb_ncbi_cr_ovr_s
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
    /* struct cavm_anb_ncbi_cr_ovr_s cn; */
};
typedef union cavm_anb_ncbi_cr_ovr cavm_anb_ncbi_cr_ovr_t;

#define CAVM_ANB_NCBI_CR_OVR CAVM_ANB_NCBI_CR_OVR_FUNC()
static inline uint64_t CAVM_ANB_NCBI_CR_OVR_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_ANB_NCBI_CR_OVR_FUNC(void)
{
    return 0x70;
}

#define typedef_CAVM_ANB_NCBI_CR_OVR cavm_anb_ncbi_cr_ovr_t
#define bustype_CAVM_ANB_NCBI_CR_OVR CSR_TYPE_SYSREG
#define basename_CAVM_ANB_NCBI_CR_OVR "ANB_NCBI_CR_OVR"
#define busnum_CAVM_ANB_NCBI_CR_OVR 0
#define arguments_CAVM_ANB_NCBI_CR_OVR -1,-1,-1,-1

/**
 * Register (SYSREG) anb_ncbi_np_ovr
 *
 * ANB NCBITXT NP Path CMD Overrides Register
 */
union cavm_anb_ncbi_np_ovr
{
    uint64_t u;
    struct cavm_anb_ncbi_np_ovr_s
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
    /* struct cavm_anb_ncbi_np_ovr_s cn; */
};
typedef union cavm_anb_ncbi_np_ovr cavm_anb_ncbi_np_ovr_t;

#define CAVM_ANB_NCBI_NP_OVR CAVM_ANB_NCBI_NP_OVR_FUNC()
static inline uint64_t CAVM_ANB_NCBI_NP_OVR_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_ANB_NCBI_NP_OVR_FUNC(void)
{
    return 0x20;
}

#define typedef_CAVM_ANB_NCBI_NP_OVR cavm_anb_ncbi_np_ovr_t
#define bustype_CAVM_ANB_NCBI_NP_OVR CSR_TYPE_SYSREG
#define basename_CAVM_ANB_NCBI_NP_OVR "ANB_NCBI_NP_OVR"
#define busnum_CAVM_ANB_NCBI_NP_OVR 0
#define arguments_CAVM_ANB_NCBI_NP_OVR -1,-1,-1,-1

/**
 * Register (SYSREG) anb_ncbi_p_ovr
 *
 * ANB NCBITXT P Overrides Register
 */
union cavm_anb_ncbi_p_ovr
{
    uint64_t u;
    struct cavm_anb_ncbi_p_ovr_s
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
    /* struct cavm_anb_ncbi_p_ovr_s cn; */
};
typedef union cavm_anb_ncbi_p_ovr cavm_anb_ncbi_p_ovr_t;

#define CAVM_ANB_NCBI_P_OVR CAVM_ANB_NCBI_P_OVR_FUNC()
static inline uint64_t CAVM_ANB_NCBI_P_OVR_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_ANB_NCBI_P_OVR_FUNC(void)
{
    return 0x10;
}

#define typedef_CAVM_ANB_NCBI_P_OVR cavm_anb_ncbi_p_ovr_t
#define bustype_CAVM_ANB_NCBI_P_OVR CSR_TYPE_SYSREG
#define basename_CAVM_ANB_NCBI_P_OVR "ANB_NCBI_P_OVR"
#define busnum_CAVM_ANB_NCBI_P_OVR 0
#define arguments_CAVM_ANB_NCBI_P_OVR -1,-1,-1,-1

/**
 * Register (SYSREG) anb_ncbitx_status
 *
 * ANB AXISLV Block Status Register
 */
union cavm_anb_ncbitx_status
{
    uint64_t u;
    struct cavm_anb_ncbitx_status_s
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
    /* struct cavm_anb_ncbitx_status_s cn; */
};
typedef union cavm_anb_ncbitx_status cavm_anb_ncbitx_status_t;

#define CAVM_ANB_NCBITX_STATUS CAVM_ANB_NCBITX_STATUS_FUNC()
static inline uint64_t CAVM_ANB_NCBITX_STATUS_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_ANB_NCBITX_STATUS_FUNC(void)
{
    return 0x40;
}

#define typedef_CAVM_ANB_NCBITX_STATUS cavm_anb_ncbitx_status_t
#define bustype_CAVM_ANB_NCBITX_STATUS CSR_TYPE_SYSREG
#define basename_CAVM_ANB_NCBITX_STATUS "ANB_NCBITX_STATUS"
#define busnum_CAVM_ANB_NCBITX_STATUS 0
#define arguments_CAVM_ANB_NCBITX_STATUS -1,-1,-1,-1

/**
 * Register (SYSREG) anb_ncbo_req_ovr
 *
 * ANB NCBORX REQ Overrides Register
 */
union cavm_anb_ncbo_req_ovr
{
    uint64_t u;
    struct cavm_anb_ncbo_req_ovr_s
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
    /* struct cavm_anb_ncbo_req_ovr_s cn; */
};
typedef union cavm_anb_ncbo_req_ovr cavm_anb_ncbo_req_ovr_t;

#define CAVM_ANB_NCBO_REQ_OVR CAVM_ANB_NCBO_REQ_OVR_FUNC()
static inline uint64_t CAVM_ANB_NCBO_REQ_OVR_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_ANB_NCBO_REQ_OVR_FUNC(void)
{
    return 0x80;
}

#define typedef_CAVM_ANB_NCBO_REQ_OVR cavm_anb_ncbo_req_ovr_t
#define bustype_CAVM_ANB_NCBO_REQ_OVR CSR_TYPE_SYSREG
#define basename_CAVM_ANB_NCBO_REQ_OVR "ANB_NCBO_REQ_OVR"
#define busnum_CAVM_ANB_NCBO_REQ_OVR 0
#define arguments_CAVM_ANB_NCBO_REQ_OVR -1,-1,-1,-1

/**
 * Register (SYSREG) anb_ncborx_status
 *
 * ANB AXISLV Block Status Register
 */
union cavm_anb_ncborx_status
{
    uint64_t u;
    struct cavm_anb_ncborx_status_s
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
    /* struct cavm_anb_ncborx_status_s cn; */
};
typedef union cavm_anb_ncborx_status cavm_anb_ncborx_status_t;

#define CAVM_ANB_NCBORX_STATUS CAVM_ANB_NCBORX_STATUS_FUNC()
static inline uint64_t CAVM_ANB_NCBORX_STATUS_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_ANB_NCBORX_STATUS_FUNC(void)
{
    return 0x50;
}

#define typedef_CAVM_ANB_NCBORX_STATUS cavm_anb_ncborx_status_t
#define bustype_CAVM_ANB_NCBORX_STATUS CSR_TYPE_SYSREG
#define basename_CAVM_ANB_NCBORX_STATUS "ANB_NCBORX_STATUS"
#define busnum_CAVM_ANB_NCBORX_STATUS 0
#define arguments_CAVM_ANB_NCBORX_STATUS -1,-1,-1,-1

#endif /* __CAVM_CSRS_ANB_H__ */
