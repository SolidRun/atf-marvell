#ifndef __CAVM_CSRS_CPC_H__
#define __CAVM_CSRS_CPC_H__
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
 * OcteonTX CPC.
 *
 * This file is auto generated. Do not edit.
 *
 */

/**
 * Enumeration cpc_bar_e
 *
 * CPC Base Address Register Enumeration
 * Enumerates the base address registers.
 */
#define CAVM_CPC_BAR_E_CPC_PF_BAR0 (0x86d000000000ll)
#define CAVM_CPC_BAR_E_CPC_PF_BAR0_SIZE 0x100000ull

/**
 * Enumeration cpc_permit_e
 *
 * CPC Permit Enumeration
 * Enumerates the permissions for CPC access.
 */
#define CAVM_CPC_PERMIT_E_ECP_DIS (4)
#define CAVM_CPC_PERMIT_E_EHSM_DIS (5)
#define CAVM_CPC_PERMIT_E_MCP_DIS (1)
#define CAVM_CPC_PERMIT_E_NSEC_DIS (3)
#define CAVM_CPC_PERMIT_E_SCP_DIS (0)
#define CAVM_CPC_PERMIT_E_SEC_DIS (2)

/**
 * Enumeration cpc_xcp_map_e
 *
 * CPC XCP Number Mapping Enumeration
 * Enumerates the XCP mapping.
 */
#define CAVM_CPC_XCP_MAP_E_ECP (2)
#define CAVM_CPC_XCP_MAP_E_MCP (1)
#define CAVM_CPC_XCP_MAP_E_SCP (0)

/**
 * Register (NCB) cpc_anb_aximstr_status
 *
 * ANB AXISLV Block Status Register
 * This register configures the connection eHSM and NCB.
 */
union cavm_cpc_anb_aximstr_status
{
    uint64_t u;
    struct cavm_cpc_anb_aximstr_status_s
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
    /* struct cavm_cpc_anb_aximstr_status_s cn; */
};
typedef union cavm_cpc_anb_aximstr_status cavm_cpc_anb_aximstr_status_t;

#define CAVM_CPC_ANB_AXIMSTR_STATUS CAVM_CPC_ANB_AXIMSTR_STATUS_FUNC()
static inline uint64_t CAVM_CPC_ANB_AXIMSTR_STATUS_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_CPC_ANB_AXIMSTR_STATUS_FUNC(void)
{
    return 0x86d000007060ll;
}

#define typedef_CAVM_CPC_ANB_AXIMSTR_STATUS cavm_cpc_anb_aximstr_status_t
#define bustype_CAVM_CPC_ANB_AXIMSTR_STATUS CSR_TYPE_NCB
#define basename_CAVM_CPC_ANB_AXIMSTR_STATUS "CPC_ANB_AXIMSTR_STATUS"
#define device_bar_CAVM_CPC_ANB_AXIMSTR_STATUS 0x0 /* PF_BAR0 */
#define busnum_CAVM_CPC_ANB_AXIMSTR_STATUS 0
#define arguments_CAVM_CPC_ANB_AXIMSTR_STATUS -1,-1,-1,-1

/**
 * Register (NCB) cpc_anb_axislv_status
 *
 * ANB AXISLV Block Status Register
 * This register configures the connection eHSM and NCB.
 */
union cavm_cpc_anb_axislv_status
{
    uint64_t u;
    struct cavm_cpc_anb_axislv_status_s
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
    /* struct cavm_cpc_anb_axislv_status_s cn; */
};
typedef union cavm_cpc_anb_axislv_status cavm_cpc_anb_axislv_status_t;

#define CAVM_CPC_ANB_AXISLV_STATUS CAVM_CPC_ANB_AXISLV_STATUS_FUNC()
static inline uint64_t CAVM_CPC_ANB_AXISLV_STATUS_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_CPC_ANB_AXISLV_STATUS_FUNC(void)
{
    return 0x86d000007030ll;
}

#define typedef_CAVM_CPC_ANB_AXISLV_STATUS cavm_cpc_anb_axislv_status_t
#define bustype_CAVM_CPC_ANB_AXISLV_STATUS CSR_TYPE_NCB
#define basename_CAVM_CPC_ANB_AXISLV_STATUS "CPC_ANB_AXISLV_STATUS"
#define device_bar_CAVM_CPC_ANB_AXISLV_STATUS 0x0 /* PF_BAR0 */
#define busnum_CAVM_CPC_ANB_AXISLV_STATUS 0
#define arguments_CAVM_CPC_ANB_AXISLV_STATUS -1,-1,-1,-1

/**
 * Register (NCB) cpc_anb_backp_disable
 *
 * ANB Backpressure Configuration Register
 * This register configures the connection eHSM and NCB.
 */
union cavm_cpc_anb_backp_disable
{
    uint64_t u;
    struct cavm_cpc_anb_backp_disable_s
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
    /* struct cavm_cpc_anb_backp_disable_s cn; */
};
typedef union cavm_cpc_anb_backp_disable cavm_cpc_anb_backp_disable_t;

#define CAVM_CPC_ANB_BACKP_DISABLE CAVM_CPC_ANB_BACKP_DISABLE_FUNC()
static inline uint64_t CAVM_CPC_ANB_BACKP_DISABLE_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_CPC_ANB_BACKP_DISABLE_FUNC(void)
{
    return 0x86d000007000ll;
}

#define typedef_CAVM_CPC_ANB_BACKP_DISABLE cavm_cpc_anb_backp_disable_t
#define bustype_CAVM_CPC_ANB_BACKP_DISABLE CSR_TYPE_NCB
#define basename_CAVM_CPC_ANB_BACKP_DISABLE "CPC_ANB_BACKP_DISABLE"
#define device_bar_CAVM_CPC_ANB_BACKP_DISABLE 0x0 /* PF_BAR0 */
#define busnum_CAVM_CPC_ANB_BACKP_DISABLE 0
#define arguments_CAVM_CPC_ANB_BACKP_DISABLE -1,-1,-1,-1

/**
 * Register (NCB) cpc_anb_ncbi_np_ovr
 *
 * ANB NCBITXT NP Path CMD Overrides Register
 * This register configures the connection eHSM and NCB.
 */
union cavm_cpc_anb_ncbi_np_ovr
{
    uint64_t u;
    struct cavm_cpc_anb_ncbi_np_ovr_s
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
    /* struct cavm_cpc_anb_ncbi_np_ovr_s cn; */
};
typedef union cavm_cpc_anb_ncbi_np_ovr cavm_cpc_anb_ncbi_np_ovr_t;

#define CAVM_CPC_ANB_NCBI_NP_OVR CAVM_CPC_ANB_NCBI_NP_OVR_FUNC()
static inline uint64_t CAVM_CPC_ANB_NCBI_NP_OVR_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_CPC_ANB_NCBI_NP_OVR_FUNC(void)
{
    return 0x86d000007020ll;
}

#define typedef_CAVM_CPC_ANB_NCBI_NP_OVR cavm_cpc_anb_ncbi_np_ovr_t
#define bustype_CAVM_CPC_ANB_NCBI_NP_OVR CSR_TYPE_NCB
#define basename_CAVM_CPC_ANB_NCBI_NP_OVR "CPC_ANB_NCBI_NP_OVR"
#define device_bar_CAVM_CPC_ANB_NCBI_NP_OVR 0x0 /* PF_BAR0 */
#define busnum_CAVM_CPC_ANB_NCBI_NP_OVR 0
#define arguments_CAVM_CPC_ANB_NCBI_NP_OVR -1,-1,-1,-1

/**
 * Register (NCB) cpc_anb_ncbi_p_ovr
 *
 * ANB NCBITXT P Overrides Register
 * This register configures the connection eHSM and NCB.
 */
union cavm_cpc_anb_ncbi_p_ovr
{
    uint64_t u;
    struct cavm_cpc_anb_ncbi_p_ovr_s
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
    /* struct cavm_cpc_anb_ncbi_p_ovr_s cn; */
};
typedef union cavm_cpc_anb_ncbi_p_ovr cavm_cpc_anb_ncbi_p_ovr_t;

#define CAVM_CPC_ANB_NCBI_P_OVR CAVM_CPC_ANB_NCBI_P_OVR_FUNC()
static inline uint64_t CAVM_CPC_ANB_NCBI_P_OVR_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_CPC_ANB_NCBI_P_OVR_FUNC(void)
{
    return 0x86d000007010ll;
}

#define typedef_CAVM_CPC_ANB_NCBI_P_OVR cavm_cpc_anb_ncbi_p_ovr_t
#define bustype_CAVM_CPC_ANB_NCBI_P_OVR CSR_TYPE_NCB
#define basename_CAVM_CPC_ANB_NCBI_P_OVR "CPC_ANB_NCBI_P_OVR"
#define device_bar_CAVM_CPC_ANB_NCBI_P_OVR 0x0 /* PF_BAR0 */
#define busnum_CAVM_CPC_ANB_NCBI_P_OVR 0
#define arguments_CAVM_CPC_ANB_NCBI_P_OVR -1,-1,-1,-1

/**
 * Register (NCB) cpc_anb_ncbitx_status
 *
 * ANB AXISLV Block Status Register
 * This register configures the connection eHSM and NCB.
 */
union cavm_cpc_anb_ncbitx_status
{
    uint64_t u;
    struct cavm_cpc_anb_ncbitx_status_s
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
    /* struct cavm_cpc_anb_ncbitx_status_s cn; */
};
typedef union cavm_cpc_anb_ncbitx_status cavm_cpc_anb_ncbitx_status_t;

#define CAVM_CPC_ANB_NCBITX_STATUS CAVM_CPC_ANB_NCBITX_STATUS_FUNC()
static inline uint64_t CAVM_CPC_ANB_NCBITX_STATUS_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_CPC_ANB_NCBITX_STATUS_FUNC(void)
{
    return 0x86d000007040ll;
}

#define typedef_CAVM_CPC_ANB_NCBITX_STATUS cavm_cpc_anb_ncbitx_status_t
#define bustype_CAVM_CPC_ANB_NCBITX_STATUS CSR_TYPE_NCB
#define basename_CAVM_CPC_ANB_NCBITX_STATUS "CPC_ANB_NCBITX_STATUS"
#define device_bar_CAVM_CPC_ANB_NCBITX_STATUS 0x0 /* PF_BAR0 */
#define busnum_CAVM_CPC_ANB_NCBITX_STATUS 0
#define arguments_CAVM_CPC_ANB_NCBITX_STATUS -1,-1,-1,-1

/**
 * Register (NCB) cpc_anb_ncborx_status
 *
 * ANB AXISLV Block Status Register
 * This register configures the connection eHSM and NCB.
 */
union cavm_cpc_anb_ncborx_status
{
    uint64_t u;
    struct cavm_cpc_anb_ncborx_status_s
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
    /* struct cavm_cpc_anb_ncborx_status_s cn; */
};
typedef union cavm_cpc_anb_ncborx_status cavm_cpc_anb_ncborx_status_t;

#define CAVM_CPC_ANB_NCBORX_STATUS CAVM_CPC_ANB_NCBORX_STATUS_FUNC()
static inline uint64_t CAVM_CPC_ANB_NCBORX_STATUS_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_CPC_ANB_NCBORX_STATUS_FUNC(void)
{
    return 0x86d000007050ll;
}

#define typedef_CAVM_CPC_ANB_NCBORX_STATUS cavm_cpc_anb_ncborx_status_t
#define bustype_CAVM_CPC_ANB_NCBORX_STATUS CSR_TYPE_NCB
#define basename_CAVM_CPC_ANB_NCBORX_STATUS "CPC_ANB_NCBORX_STATUS"
#define device_bar_CAVM_CPC_ANB_NCBORX_STATUS 0x0 /* PF_BAR0 */
#define busnum_CAVM_CPC_ANB_NCBORX_STATUS 0
#define arguments_CAVM_CPC_ANB_NCBORX_STATUS -1,-1,-1,-1

/**
 * Register (NCB32b) cpc_boot_owner#
 *
 * CPC Boot Owner Registers
 * These registers control an external arbiter for the boot device (SPI/eMMC)
 * across multiple external devices. There is a register for each requester:
 * _ \<0\> - SCP          - reset on SCP reset.
 * _ \<1\> - MCP          - reset on MCP reset.
 * _ \<2\> - AP Secure    - reset on core reset.
 * _ \<3\> - AP Nonsecure - reset on core reset.
 * _ \<4\> - ECP          - reset on ECP reset.
 *
 * These register is only writable to the corresponding requestor(s) permitted with CPC_PERMIT.
 */
union cavm_cpc_boot_ownerx
{
    uint32_t u;
    struct cavm_cpc_boot_ownerx_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t reserved_9_31         : 23;
        uint32_t boot_wait             : 1;  /**< [  8:  8](RO/H) Boot device wait. State of the BOOT_WAIT pseudo-input; see
                                                                 GPIO_PIN_SEL_E::BOOT_WAIT. */
        uint32_t reserved_1_7          : 7;
        uint32_t boot_req              : 1;  /**< [  0:  0](R/W) Owner is requesting or using SPI/eMMC. */
#else /* Word 0 - Little Endian */
        uint32_t boot_req              : 1;  /**< [  0:  0](R/W) Owner is requesting or using SPI/eMMC. */
        uint32_t reserved_1_7          : 7;
        uint32_t boot_wait             : 1;  /**< [  8:  8](RO/H) Boot device wait. State of the BOOT_WAIT pseudo-input; see
                                                                 GPIO_PIN_SEL_E::BOOT_WAIT. */
        uint32_t reserved_9_31         : 23;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_cpc_boot_ownerx_s cn; */
};
typedef union cavm_cpc_boot_ownerx cavm_cpc_boot_ownerx_t;

static inline uint64_t CAVM_CPC_BOOT_OWNERX(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_CPC_BOOT_OWNERX(uint64_t a)
{
    if (a<=4)
        return 0x86d0000001c0ll + 8ll * ((a) & 0x7);
    __cavm_csr_fatal("CPC_BOOT_OWNERX", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_CPC_BOOT_OWNERX(a) cavm_cpc_boot_ownerx_t
#define bustype_CAVM_CPC_BOOT_OWNERX(a) CSR_TYPE_NCB32b
#define basename_CAVM_CPC_BOOT_OWNERX(a) "CPC_BOOT_OWNERX"
#define device_bar_CAVM_CPC_BOOT_OWNERX(a) 0x0 /* PF_BAR0 */
#define busnum_CAVM_CPC_BOOT_OWNERX(a) (a)
#define arguments_CAVM_CPC_BOOT_OWNERX(a) (a),-1,-1,-1

/**
 * Register (NCB32b) cpc_boot_rom_limit
 *
 * CPC Boot ROM Limit Register
 * This register contains the address limit in the internal boot ROM that non-SCP processors can
 * access.
 *
 * This register is only writable to the requestor(s) permitted with CPC_PERMIT.
 *
 * This register is reset on chip reset.
 */
union cavm_cpc_boot_rom_limit
{
    uint32_t u;
    struct cavm_cpc_boot_rom_limit_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t reserved_17_31        : 15;
        uint32_t addr                  : 15; /**< [ 16:  2](R/W) End of ROM address. This field specifies the first invalid address in CPC_ROM_MEM();
                                                                 access to a CPC_ROM_MEM() address at or above this address will return a "br -1"
                                                                 (branch-to-self) instruction opcode. Writes to this register which attempt to
                                                                 set an [ADDR] greater than the previous [ADDR] setting are ignored.
                                                                 Address is word aligned. */
        uint32_t reserved_0_1          : 2;
#else /* Word 0 - Little Endian */
        uint32_t reserved_0_1          : 2;
        uint32_t addr                  : 15; /**< [ 16:  2](R/W) End of ROM address. This field specifies the first invalid address in CPC_ROM_MEM();
                                                                 access to a CPC_ROM_MEM() address at or above this address will return a "br -1"
                                                                 (branch-to-self) instruction opcode. Writes to this register which attempt to
                                                                 set an [ADDR] greater than the previous [ADDR] setting are ignored.
                                                                 Address is word aligned. */
        uint32_t reserved_17_31        : 15;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_cpc_boot_rom_limit_s cn; */
};
typedef union cavm_cpc_boot_rom_limit cavm_cpc_boot_rom_limit_t;

#define CAVM_CPC_BOOT_ROM_LIMIT CAVM_CPC_BOOT_ROM_LIMIT_FUNC()
static inline uint64_t CAVM_CPC_BOOT_ROM_LIMIT_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_CPC_BOOT_ROM_LIMIT_FUNC(void)
{
    return 0x86d000000158ll;
}

#define typedef_CAVM_CPC_BOOT_ROM_LIMIT cavm_cpc_boot_rom_limit_t
#define bustype_CAVM_CPC_BOOT_ROM_LIMIT CSR_TYPE_NCB32b
#define basename_CAVM_CPC_BOOT_ROM_LIMIT "CPC_BOOT_ROM_LIMIT"
#define device_bar_CAVM_CPC_BOOT_ROM_LIMIT 0x0 /* PF_BAR0 */
#define busnum_CAVM_CPC_BOOT_ROM_LIMIT 0
#define arguments_CAVM_CPC_BOOT_ROM_LIMIT -1,-1,-1,-1

/**
 * Register (NCB32b) cpc_clken
 *
 * CPC Clock Enable Register
 * This register is only accessible to the requestor(s) permitted with CPC_PERMIT.
 *
 * This register is reset on chip reset.
 */
union cavm_cpc_clken
{
    uint32_t u;
    struct cavm_cpc_clken_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t reserved_2_31         : 30;
        uint32_t force_ncbi_clken      : 1;  /**< [  1:  1](R/W) Force the NCBI conditional clocks on. For diagnostic use only. */
        uint32_t clken                 : 1;  /**< [  0:  0](R/W) Force the conditional clocking within CPC to be always on. For diagnostic use only. */
#else /* Word 0 - Little Endian */
        uint32_t clken                 : 1;  /**< [  0:  0](R/W) Force the conditional clocking within CPC to be always on. For diagnostic use only. */
        uint32_t force_ncbi_clken      : 1;  /**< [  1:  1](R/W) Force the NCBI conditional clocks on. For diagnostic use only. */
        uint32_t reserved_2_31         : 30;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_cpc_clken_s cn; */
};
typedef union cavm_cpc_clken cavm_cpc_clken_t;

#define CAVM_CPC_CLKEN CAVM_CPC_CLKEN_FUNC()
static inline uint64_t CAVM_CPC_CLKEN_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_CPC_CLKEN_FUNC(void)
{
    return 0x86d000000118ll;
}

#define typedef_CAVM_CPC_CLKEN cavm_cpc_clken_t
#define bustype_CAVM_CPC_CLKEN CSR_TYPE_NCB32b
#define basename_CAVM_CPC_CLKEN "CPC_CLKEN"
#define device_bar_CAVM_CPC_CLKEN 0x0 /* PF_BAR0 */
#define busnum_CAVM_CPC_CLKEN 0
#define arguments_CAVM_CPC_CLKEN -1,-1,-1,-1

/**
 * Register (NCB32b) cpc_const
 *
 * CPC Constants Register
 * This register is reset on chip reset.
 */
union cavm_cpc_const
{
    uint32_t u;
    struct cavm_cpc_const_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t reserved_16_31        : 16;
        uint32_t mem_regions           : 8;  /**< [ 15:  8](RO) Indicates number of 16KB memory regions in the CPC RAM. */
        uint32_t cores                 : 8;  /**< [  7:  0](RO) Indicates number of XCP cores within CPC. For function of each core see CPC_XCP_MAP_E. */
#else /* Word 0 - Little Endian */
        uint32_t cores                 : 8;  /**< [  7:  0](RO) Indicates number of XCP cores within CPC. For function of each core see CPC_XCP_MAP_E. */
        uint32_t mem_regions           : 8;  /**< [ 15:  8](RO) Indicates number of 16KB memory regions in the CPC RAM. */
        uint32_t reserved_16_31        : 16;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_cpc_const_s cn; */
};
typedef union cavm_cpc_const cavm_cpc_const_t;

#define CAVM_CPC_CONST CAVM_CPC_CONST_FUNC()
static inline uint64_t CAVM_CPC_CONST_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_CPC_CONST_FUNC(void)
{
    return 0x86d000000000ll;
}

#define typedef_CAVM_CPC_CONST cavm_cpc_const_t
#define bustype_CAVM_CPC_CONST CSR_TYPE_NCB32b
#define basename_CAVM_CPC_CONST "CPC_CONST"
#define device_bar_CAVM_CPC_CONST 0x0 /* PF_BAR0 */
#define busnum_CAVM_CPC_CONST 0
#define arguments_CAVM_CPC_CONST -1,-1,-1,-1

/**
 * Register (NCB) cpc_csclk_active_pc
 *
 * CPC Conditional Coprocessor Clock Counter Register
 * This register counts conditional clocks for power management.
 *
 * This register is writable for diagnostic use only.
 *
 * This register is reset on chip reset.
 */
union cavm_cpc_csclk_active_pc
{
    uint64_t u;
    struct cavm_cpc_csclk_active_pc_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t count                 : 64; /**< [ 63:  0](R/W/H) Count of conditional coprocessor-clock cycles since reset. */
#else /* Word 0 - Little Endian */
        uint64_t count                 : 64; /**< [ 63:  0](R/W/H) Count of conditional coprocessor-clock cycles since reset. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_cpc_csclk_active_pc_s cn; */
};
typedef union cavm_cpc_csclk_active_pc cavm_cpc_csclk_active_pc_t;

#define CAVM_CPC_CSCLK_ACTIVE_PC CAVM_CPC_CSCLK_ACTIVE_PC_FUNC()
static inline uint64_t CAVM_CPC_CSCLK_ACTIVE_PC_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_CPC_CSCLK_ACTIVE_PC_FUNC(void)
{
    return 0x86d000000010ll;
}

#define typedef_CAVM_CPC_CSCLK_ACTIVE_PC cavm_cpc_csclk_active_pc_t
#define bustype_CAVM_CPC_CSCLK_ACTIVE_PC CSR_TYPE_NCB
#define basename_CAVM_CPC_CSCLK_ACTIVE_PC "CPC_CSCLK_ACTIVE_PC"
#define device_bar_CAVM_CPC_CSCLK_ACTIVE_PC 0x0 /* PF_BAR0 */
#define busnum_CAVM_CPC_CSCLK_ACTIVE_PC 0
#define arguments_CAVM_CPC_CSCLK_ACTIVE_PC -1,-1,-1,-1

/**
 * Register (NCB32b) cpc_permit
 *
 * CPC Register Permit Registers
 * This register is used to control CPC register permissions.
 *
 * This register is only accessible to the requestor(s) permitted with CPC_PERMIT.
 *
 * This register is reset on chip reset.
 */
union cavm_cpc_permit
{
    uint32_t u;
    struct cavm_cpc_permit_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t reserved_5_31         : 27;
        uint32_t permitdis             : 5;  /**< [  4:  0](R/W) Access permission of each access group.
                                                                 _ \<0\> if set disallows SCP access.
                                                                 _ \<1\> if set disallows MCP access.
                                                                 _ \<2\> if set disallows non-ECP/MCP/SCP (e.g. AP, JTAG) secure access.
                                                                 _ \<3\> if set disallows non-ECP/MCP/SCP (e.g. AP, JTAG) nonsecure access.
                                                                 _ \<4\> if set disallows ECP access. */
#else /* Word 0 - Little Endian */
        uint32_t permitdis             : 5;  /**< [  4:  0](R/W) Access permission of each access group.
                                                                 _ \<0\> if set disallows SCP access.
                                                                 _ \<1\> if set disallows MCP access.
                                                                 _ \<2\> if set disallows non-ECP/MCP/SCP (e.g. AP, JTAG) secure access.
                                                                 _ \<3\> if set disallows non-ECP/MCP/SCP (e.g. AP, JTAG) nonsecure access.
                                                                 _ \<4\> if set disallows ECP access. */
        uint32_t reserved_5_31         : 27;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_cpc_permit_s cn; */
};
typedef union cavm_cpc_permit cavm_cpc_permit_t;

#define CAVM_CPC_PERMIT CAVM_CPC_PERMIT_FUNC()
static inline uint64_t CAVM_CPC_PERMIT_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_CPC_PERMIT_FUNC(void)
{
    return 0x86d000000120ll;
}

#define typedef_CAVM_CPC_PERMIT cavm_cpc_permit_t
#define bustype_CAVM_CPC_PERMIT CSR_TYPE_NCB32b
#define basename_CAVM_CPC_PERMIT "CPC_PERMIT"
#define device_bar_CAVM_CPC_PERMIT 0x0 /* PF_BAR0 */
#define busnum_CAVM_CPC_PERMIT 0
#define arguments_CAVM_CPC_PERMIT -1,-1,-1,-1

/**
 * Register (NCB) cpc_ram_mem#
 *
 * CPC RAM Memory Registers
 * These registers access the CPC RAM memory space. The size of the RAM is discoverable
 * with CPC_CONST[MEM_REGIONS].
 *
 * This register is only accessible to the requestor(s) permitted with CPC_RAM_PERMIT().
 *
 * This register is reset on chip reset.
 */
union cavm_cpc_ram_memx
{
    uint64_t u;
    struct cavm_cpc_ram_memx_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t dat                   : 64; /**< [ 63:  0](R/W) RAM data. */
#else /* Word 0 - Little Endian */
        uint64_t dat                   : 64; /**< [ 63:  0](R/W) RAM data. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_cpc_ram_memx_s cn; */
};
typedef union cavm_cpc_ram_memx cavm_cpc_ram_memx_t;

static inline uint64_t CAVM_CPC_RAM_MEMX(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_CPC_RAM_MEMX(uint64_t a)
{
    if (a<=65535)
        return 0x86d000080000ll + 8ll * ((a) & 0xffff);
    __cavm_csr_fatal("CPC_RAM_MEMX", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_CPC_RAM_MEMX(a) cavm_cpc_ram_memx_t
#define bustype_CAVM_CPC_RAM_MEMX(a) CSR_TYPE_NCB
#define basename_CAVM_CPC_RAM_MEMX(a) "CPC_RAM_MEMX"
#define device_bar_CAVM_CPC_RAM_MEMX(a) 0x0 /* PF_BAR0 */
#define busnum_CAVM_CPC_RAM_MEMX(a) (a)
#define arguments_CAVM_CPC_RAM_MEMX(a) (a),-1,-1,-1

/**
 * Register (NCB32b) cpc_ram_permit#
 *
 * CPC RAM Permit Registers
 * These registers are used to control the RAM space access permissions of
 * the SCP, MCP, ECP, EHSM and AP processors
 * The RAM is split into 32 secure regions.
 *
 * This register is only accessible to the requestor(s) permitted with CPC_PERMIT.
 *
 * This register is reset on chip reset.
 */
union cavm_cpc_ram_permitx
{
    uint32_t u;
    struct cavm_cpc_ram_permitx_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t exedis                : 4;  /**< [ 31: 28](R/W) Execute permission of each access group.
                                                                 _ \<0\> if set disallows ECP access.
                                                                 _ \<1\> Reserved.
                                                                 _ \<2\> if set disallows SCP access.
                                                                 _ \<3\> if set disallows MCP access. */
        uint32_t reserved_22_27        : 6;
        uint32_t wrdis                 : 6;  /**< [ 21: 16](R/W) Write permission of each access group.
                                                                 _ \<0\> if set disallows SCP access.
                                                                 _ \<1\> if set disallows MCP access.
                                                                 _ \<2\> if set disallows non-EHSM/ECP/MCP/SCP (e.g. AP) secure access.
                                                                 _ \<3\> if set disallows non-EHSM/ECP/MCP/SCP (e.g. AP) nonsecure access.
                                                                 _ \<4\> if set disallows ECP access.
                                                                 _ \<5\> if set disallows EHSM access. */
        uint32_t reserved_6_15         : 10;
        uint32_t rddis                 : 6;  /**< [  5:  0](R/W) Read permission of each access group.
                                                                 _ \<0\> if set disallows SCP access.
                                                                 _ \<1\> if set disallows MCP access.
                                                                 _ \<2\> if set disallows non-EHSM/ECP/MCP/SCP (e.g. AP) secure access.
                                                                 _ \<3\> if set disallows non-EHSM/ECP/MCP/SCP (e.g. AP) nonsecure access.
                                                                 _ \<4\> if set disallows ECP access.
                                                                 _ \<5\> if set disallows EHSM access. */
#else /* Word 0 - Little Endian */
        uint32_t rddis                 : 6;  /**< [  5:  0](R/W) Read permission of each access group.
                                                                 _ \<0\> if set disallows SCP access.
                                                                 _ \<1\> if set disallows MCP access.
                                                                 _ \<2\> if set disallows non-EHSM/ECP/MCP/SCP (e.g. AP) secure access.
                                                                 _ \<3\> if set disallows non-EHSM/ECP/MCP/SCP (e.g. AP) nonsecure access.
                                                                 _ \<4\> if set disallows ECP access.
                                                                 _ \<5\> if set disallows EHSM access. */
        uint32_t reserved_6_15         : 10;
        uint32_t wrdis                 : 6;  /**< [ 21: 16](R/W) Write permission of each access group.
                                                                 _ \<0\> if set disallows SCP access.
                                                                 _ \<1\> if set disallows MCP access.
                                                                 _ \<2\> if set disallows non-EHSM/ECP/MCP/SCP (e.g. AP) secure access.
                                                                 _ \<3\> if set disallows non-EHSM/ECP/MCP/SCP (e.g. AP) nonsecure access.
                                                                 _ \<4\> if set disallows ECP access.
                                                                 _ \<5\> if set disallows EHSM access. */
        uint32_t reserved_22_27        : 6;
        uint32_t exedis                : 4;  /**< [ 31: 28](R/W) Execute permission of each access group.
                                                                 _ \<0\> if set disallows ECP access.
                                                                 _ \<1\> Reserved.
                                                                 _ \<2\> if set disallows SCP access.
                                                                 _ \<3\> if set disallows MCP access. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_cpc_ram_permitx_s cn; */
};
typedef union cavm_cpc_ram_permitx cavm_cpc_ram_permitx_t;

static inline uint64_t CAVM_CPC_RAM_PERMITX(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_CPC_RAM_PERMITX(uint64_t a)
{
    if (a<=31)
        return 0x86d000008000ll + 8ll * ((a) & 0x1f);
    __cavm_csr_fatal("CPC_RAM_PERMITX", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_CPC_RAM_PERMITX(a) cavm_cpc_ram_permitx_t
#define bustype_CAVM_CPC_RAM_PERMITX(a) CSR_TYPE_NCB32b
#define basename_CAVM_CPC_RAM_PERMITX(a) "CPC_RAM_PERMITX"
#define device_bar_CAVM_CPC_RAM_PERMITX(a) 0x0 /* PF_BAR0 */
#define busnum_CAVM_CPC_RAM_PERMITX(a) (a)
#define arguments_CAVM_CPC_RAM_PERMITX(a) (a),-1,-1,-1

/**
 * Register (NCB) cpc_rom_mem#
 *
 * CPC ROM Memory Registers
 * These registers access the CPC ROM memory space.
 *
 * This register is only accessible to the requestor(s) permitted with CPC_BOOT_ROM_LIMIT.
 *
 * This register is reset on chip reset.
 */
union cavm_cpc_rom_memx
{
    uint64_t u;
    struct cavm_cpc_rom_memx_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t dat                   : 64; /**< [ 63:  0](RO) ROM data. */
#else /* Word 0 - Little Endian */
        uint64_t dat                   : 64; /**< [ 63:  0](RO) ROM data. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_cpc_rom_memx_s cn; */
};
typedef union cavm_cpc_rom_memx cavm_cpc_rom_memx_t;

static inline uint64_t CAVM_CPC_ROM_MEMX(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_CPC_ROM_MEMX(uint64_t a)
{
    if (a<=8191)
        return 0x86d000010000ll + 8ll * ((a) & 0x1fff);
    __cavm_csr_fatal("CPC_ROM_MEMX", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_CPC_ROM_MEMX(a) cavm_cpc_rom_memx_t
#define bustype_CAVM_CPC_ROM_MEMX(a) CSR_TYPE_NCB
#define basename_CAVM_CPC_ROM_MEMX(a) "CPC_ROM_MEMX"
#define device_bar_CAVM_CPC_ROM_MEMX(a) 0x0 /* PF_BAR0 */
#define busnum_CAVM_CPC_ROM_MEMX(a) (a)
#define arguments_CAVM_CPC_ROM_MEMX(a) (a),-1,-1,-1

/**
 * Register (NCB32b) cpc_scp_boot_rom_limit
 *
 * CPC SCP Boot ROM Limit Register
 * This register contains the address limit in the internal boot ROM that SCP can access.
 *
 * This register is only accessible to the requestor(s) permitted with CPC_PERMIT.
 *
 * This register is reset on chip reset and scp_reset.
 */
union cavm_cpc_scp_boot_rom_limit
{
    uint32_t u;
    struct cavm_cpc_scp_boot_rom_limit_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t reserved_17_31        : 15;
        uint32_t addr                  : 15; /**< [ 16:  2](R/W) End of ROM address. This field specifies the first invalid address in ROM_MEM();
                                                                 access to a ROM_MEM() address at or above this address will return a "br -1"
                                                                 (branch-to-self) instruction opcode. Writes to this register which attempt to
                                                                 set an [ADDR] greater than the previous [ADDR] setting are ignored.
                                                                 Address is word aligned. */
        uint32_t reserved_0_1          : 2;
#else /* Word 0 - Little Endian */
        uint32_t reserved_0_1          : 2;
        uint32_t addr                  : 15; /**< [ 16:  2](R/W) End of ROM address. This field specifies the first invalid address in ROM_MEM();
                                                                 access to a ROM_MEM() address at or above this address will return a "br -1"
                                                                 (branch-to-self) instruction opcode. Writes to this register which attempt to
                                                                 set an [ADDR] greater than the previous [ADDR] setting are ignored.
                                                                 Address is word aligned. */
        uint32_t reserved_17_31        : 15;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_cpc_scp_boot_rom_limit_s cn; */
};
typedef union cavm_cpc_scp_boot_rom_limit cavm_cpc_scp_boot_rom_limit_t;

#define CAVM_CPC_SCP_BOOT_ROM_LIMIT CAVM_CPC_SCP_BOOT_ROM_LIMIT_FUNC()
static inline uint64_t CAVM_CPC_SCP_BOOT_ROM_LIMIT_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_CPC_SCP_BOOT_ROM_LIMIT_FUNC(void)
{
    return 0x86d000000150ll;
}

#define typedef_CAVM_CPC_SCP_BOOT_ROM_LIMIT cavm_cpc_scp_boot_rom_limit_t
#define bustype_CAVM_CPC_SCP_BOOT_ROM_LIMIT CSR_TYPE_NCB32b
#define basename_CAVM_CPC_SCP_BOOT_ROM_LIMIT "CPC_SCP_BOOT_ROM_LIMIT"
#define device_bar_CAVM_CPC_SCP_BOOT_ROM_LIMIT 0x0 /* PF_BAR0 */
#define busnum_CAVM_CPC_SCP_BOOT_ROM_LIMIT 0
#define arguments_CAVM_CPC_SCP_BOOT_ROM_LIMIT -1,-1,-1,-1

/**
 * Register (NCB) cpc_timer100
 *
 * CPC Timer 100 MHz Register
 * This register contains the common 100 MHz timer register for the XCP cores.
 *
 * This register is only accessible to the requestor(s) permitted with CPC_PERMIT.
 * This register is writable for diagnostic use only.
 *
 * This register is reset on chip reset.
 */
union cavm_cpc_timer100
{
    uint64_t u;
    struct cavm_cpc_timer100_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t tmr                   : 64; /**< [ 63:  0](R/W/H) Free running count of 100 MHz clock cycles. */
#else /* Word 0 - Little Endian */
        uint64_t tmr                   : 64; /**< [ 63:  0](R/W/H) Free running count of 100 MHz clock cycles. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_cpc_timer100_s cn; */
};
typedef union cavm_cpc_timer100 cavm_cpc_timer100_t;

#define CAVM_CPC_TIMER100 CAVM_CPC_TIMER100_FUNC()
static inline uint64_t CAVM_CPC_TIMER100_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_CPC_TIMER100_FUNC(void)
{
    return 0x86d000000110ll;
}

#define typedef_CAVM_CPC_TIMER100 cavm_cpc_timer100_t
#define bustype_CAVM_CPC_TIMER100 CSR_TYPE_NCB
#define basename_CAVM_CPC_TIMER100 "CPC_TIMER100"
#define device_bar_CAVM_CPC_TIMER100 0x0 /* PF_BAR0 */
#define busnum_CAVM_CPC_TIMER100 0
#define arguments_CAVM_CPC_TIMER100 -1,-1,-1,-1

/**
 * Register (NCB32b) cpc_xcp#_permit
 *
 * CPC Register Permit Registers
 * These registers are used to control the XCP register permissions.
 *
 * This register is only accessible to the requestor(s) permitted with CPC_PERMIT.
 *
 * This register is reset on chip reset.
 */
union cavm_cpc_xcpx_permit
{
    uint32_t u;
    struct cavm_cpc_xcpx_permit_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t reserved_5_31         : 27;
        uint32_t permitdis             : 5;  /**< [  4:  0](R/W) Access permission of each access group.
                                                                 _ \<0\> if set disallows SCP access.
                                                                 _ \<1\> if set disallows MCP access.
                                                                 _ \<2\> if set disallows non-ECP/MCP/SCP (e.g. AP) secure access.
                                                                 _ \<3\> if set disallows non-ECP/MCP/SCP (e.g. AP) nonsecure access.
                                                                 _ \<4\> if set disallows ECP access. */
#else /* Word 0 - Little Endian */
        uint32_t permitdis             : 5;  /**< [  4:  0](R/W) Access permission of each access group.
                                                                 _ \<0\> if set disallows SCP access.
                                                                 _ \<1\> if set disallows MCP access.
                                                                 _ \<2\> if set disallows non-ECP/MCP/SCP (e.g. AP) secure access.
                                                                 _ \<3\> if set disallows non-ECP/MCP/SCP (e.g. AP) nonsecure access.
                                                                 _ \<4\> if set disallows ECP access. */
        uint32_t reserved_5_31         : 27;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_cpc_xcpx_permit_s cn; */
};
typedef union cavm_cpc_xcpx_permit cavm_cpc_xcpx_permit_t;

static inline uint64_t CAVM_CPC_XCPX_PERMIT(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_CPC_XCPX_PERMIT(uint64_t a)
{
    if (a<=2)
        return 0x86d0000001a0ll + 8ll * ((a) & 0x3);
    __cavm_csr_fatal("CPC_XCPX_PERMIT", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_CPC_XCPX_PERMIT(a) cavm_cpc_xcpx_permit_t
#define bustype_CAVM_CPC_XCPX_PERMIT(a) CSR_TYPE_NCB32b
#define basename_CAVM_CPC_XCPX_PERMIT(a) "CPC_XCPX_PERMIT"
#define device_bar_CAVM_CPC_XCPX_PERMIT(a) 0x0 /* PF_BAR0 */
#define busnum_CAVM_CPC_XCPX_PERMIT(a) (a)
#define arguments_CAVM_CPC_XCPX_PERMIT(a) (a),-1,-1,-1

#endif /* __CAVM_CSRS_CPC_H__ */
