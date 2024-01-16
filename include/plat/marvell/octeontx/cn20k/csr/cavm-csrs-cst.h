#ifndef __CAVM_CSRS_CST_H__
#define __CAVM_CSRS_CST_H__
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
 * CST.
 *
 * This file is auto generated. Do not edit.
 *
 */

/**
 * Enumeration cst_bar_e
 *
 * CST Base Address Register Enumeration
 * Enumerates the base address registers.
 */
#define CAVM_CST_BAR_E_CST_PF_BAR0 (0x87a400000000ll)
#define CAVM_CST_BAR_E_CST_PF_BAR0_SIZE 0x80000000ull
#define CAVM_CST_BAR_E_CST_PF_BAR4 (0x87a480000000ll)
#define CAVM_CST_BAR_E_CST_PF_BAR4_SIZE 0x80000000ull

/**
 * Enumeration cst_int_vec_e
 *
 * CST MSI-X Vector Enumeration
 * Enumerates the MSI-X interrupt vectors.
 */
#define CAVM_CST_INT_VEC_E_CST_INT (0)

/**
 * Register (NCB) cst_anb_aximstr_status
 *
 * ANB AXISLV Block Status Register
 */
union cavm_cst_anb_aximstr_status
{
    uint64_t u;
    struct cavm_cst_anb_aximstr_status_s
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
    /* struct cavm_cst_anb_aximstr_status_s cn; */
};
typedef union cavm_cst_anb_aximstr_status cavm_cst_anb_aximstr_status_t;

#define CAVM_CST_ANB_AXIMSTR_STATUS CAVM_CST_ANB_AXIMSTR_STATUS_FUNC()
static inline uint64_t CAVM_CST_ANB_AXIMSTR_STATUS_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_CST_ANB_AXIMSTR_STATUS_FUNC(void)
{
    if (cavm_is_model(OCTEONTX_CN20KA))
        return 0x87a400001060ll;
    __cavm_csr_fatal("CST_ANB_AXIMSTR_STATUS", 0, 0, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_CST_ANB_AXIMSTR_STATUS cavm_cst_anb_aximstr_status_t
#define bustype_CAVM_CST_ANB_AXIMSTR_STATUS CSR_TYPE_NCB
#define basename_CAVM_CST_ANB_AXIMSTR_STATUS "CST_ANB_AXIMSTR_STATUS"
#define device_bar_CAVM_CST_ANB_AXIMSTR_STATUS 0x0 /* PF_BAR0 */
#define busnum_CAVM_CST_ANB_AXIMSTR_STATUS 0
#define arguments_CAVM_CST_ANB_AXIMSTR_STATUS -1,-1,-1,-1

/**
 * Register (NCB) cst_anb_axislv_status
 *
 * ANB AXISLV Block Status Register
 */
union cavm_cst_anb_axislv_status
{
    uint64_t u;
    struct cavm_cst_anb_axislv_status_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_13_63        : 51;
        uint64_t anb_axislv_bad_narrow_write_64 : 1;/**< [ 12: 12](RO/H) An unsupported narrow write transfer of 64 bit DOUBLEWORDs occurred. */
        uint64_t anb_axislv_bad_narrow_write_32 : 1;/**< [ 11: 11](RO/H) An unsupported narrow write transfer of 32 bit WORDs occurred. */
        uint64_t anb_axislv_bad_narrow_write_16 : 1;/**< [ 10: 10](RO/H) An unsupported narrow write transfer of 16 bit HALFWORDs occurred. */
        uint64_t anb_axislv_bad_narrow_write_8 : 1;/**< [  9:  9](RO/H) An unsupported narrow write transfer of 8 bit BYTEs occurred. */
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
        uint64_t anb_axislv_bad_narrow_write_8 : 1;/**< [  9:  9](RO/H) An unsupported narrow write transfer of 8 bit BYTEs occurred. */
        uint64_t anb_axislv_bad_narrow_write_16 : 1;/**< [ 10: 10](RO/H) An unsupported narrow write transfer of 16 bit HALFWORDs occurred. */
        uint64_t anb_axislv_bad_narrow_write_32 : 1;/**< [ 11: 11](RO/H) An unsupported narrow write transfer of 32 bit WORDs occurred. */
        uint64_t anb_axislv_bad_narrow_write_64 : 1;/**< [ 12: 12](RO/H) An unsupported narrow write transfer of 64 bit DOUBLEWORDs occurred. */
        uint64_t reserved_13_63        : 51;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_cst_anb_axislv_status_s cn; */
};
typedef union cavm_cst_anb_axislv_status cavm_cst_anb_axislv_status_t;

#define CAVM_CST_ANB_AXISLV_STATUS CAVM_CST_ANB_AXISLV_STATUS_FUNC()
static inline uint64_t CAVM_CST_ANB_AXISLV_STATUS_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_CST_ANB_AXISLV_STATUS_FUNC(void)
{
    if (cavm_is_model(OCTEONTX_CN20KA))
        return 0x87a400001030ll;
    __cavm_csr_fatal("CST_ANB_AXISLV_STATUS", 0, 0, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_CST_ANB_AXISLV_STATUS cavm_cst_anb_axislv_status_t
#define bustype_CAVM_CST_ANB_AXISLV_STATUS CSR_TYPE_NCB
#define basename_CAVM_CST_ANB_AXISLV_STATUS "CST_ANB_AXISLV_STATUS"
#define device_bar_CAVM_CST_ANB_AXISLV_STATUS 0x0 /* PF_BAR0 */
#define busnum_CAVM_CST_ANB_AXISLV_STATUS 0
#define arguments_CAVM_CST_ANB_AXISLV_STATUS -1,-1,-1,-1

/**
 * Register (NCB) cst_anb_backp_disable
 *
 * ANB Backpressure Configuration Register
 */
union cavm_cst_anb_backp_disable
{
    uint64_t u;
    struct cavm_cst_anb_backp_disable_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_5_63         : 59;
        uint64_t anb_ncb_rst_drain_axislv_fifos : 1;/**< [  4:  4](R/W) for NCB reset active, respond to transactions with slverr */
        uint64_t anb_force_ncb_rst_active : 1;/**< [  3:  3](R/W) force ncb reset active to anb */
        uint64_t anb_chicken_w_wait_for_aw : 1;/**< [  2:  2](R/W) force AXI wready to wait for aw arrival */
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
        uint64_t anb_chicken_w_wait_for_aw : 1;/**< [  2:  2](R/W) force AXI wready to wait for aw arrival */
        uint64_t anb_force_ncb_rst_active : 1;/**< [  3:  3](R/W) force ncb reset active to anb */
        uint64_t anb_ncb_rst_drain_axislv_fifos : 1;/**< [  4:  4](R/W) for NCB reset active, respond to transactions with slverr */
        uint64_t reserved_5_63         : 59;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_cst_anb_backp_disable_s cn; */
};
typedef union cavm_cst_anb_backp_disable cavm_cst_anb_backp_disable_t;

#define CAVM_CST_ANB_BACKP_DISABLE CAVM_CST_ANB_BACKP_DISABLE_FUNC()
static inline uint64_t CAVM_CST_ANB_BACKP_DISABLE_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_CST_ANB_BACKP_DISABLE_FUNC(void)
{
    if (cavm_is_model(OCTEONTX_CN20KA))
        return 0x87a400001000ll;
    __cavm_csr_fatal("CST_ANB_BACKP_DISABLE", 0, 0, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_CST_ANB_BACKP_DISABLE cavm_cst_anb_backp_disable_t
#define bustype_CAVM_CST_ANB_BACKP_DISABLE CSR_TYPE_NCB
#define basename_CAVM_CST_ANB_BACKP_DISABLE "CST_ANB_BACKP_DISABLE"
#define device_bar_CAVM_CST_ANB_BACKP_DISABLE 0x0 /* PF_BAR0 */
#define busnum_CAVM_CST_ANB_BACKP_DISABLE 0
#define arguments_CAVM_CST_ANB_BACKP_DISABLE -1,-1,-1,-1

/**
 * Register (NCB) cst_anb_ncbi_np_ovr
 *
 * ANB NCBITXT NP Path CMD Overrides Register
 */
union cavm_cst_anb_ncbi_np_ovr
{
    uint64_t u;
    struct cavm_cst_anb_ncbi_np_ovr_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_32_63        : 32;
        uint64_t anb_ncbi_np_ldd_frc   : 1;  /**< [ 31: 31](R/W) force NCB load type to LDD */
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
        uint64_t anb_ncbi_np_ldd_frc   : 1;  /**< [ 31: 31](R/W) force NCB load type to LDD */
        uint64_t reserved_32_63        : 32;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_cst_anb_ncbi_np_ovr_s cn; */
};
typedef union cavm_cst_anb_ncbi_np_ovr cavm_cst_anb_ncbi_np_ovr_t;

#define CAVM_CST_ANB_NCBI_NP_OVR CAVM_CST_ANB_NCBI_NP_OVR_FUNC()
static inline uint64_t CAVM_CST_ANB_NCBI_NP_OVR_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_CST_ANB_NCBI_NP_OVR_FUNC(void)
{
    if (cavm_is_model(OCTEONTX_CN20KA))
        return 0x87a400001020ll;
    __cavm_csr_fatal("CST_ANB_NCBI_NP_OVR", 0, 0, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_CST_ANB_NCBI_NP_OVR cavm_cst_anb_ncbi_np_ovr_t
#define bustype_CAVM_CST_ANB_NCBI_NP_OVR CSR_TYPE_NCB
#define basename_CAVM_CST_ANB_NCBI_NP_OVR "CST_ANB_NCBI_NP_OVR"
#define device_bar_CAVM_CST_ANB_NCBI_NP_OVR 0x0 /* PF_BAR0 */
#define busnum_CAVM_CST_ANB_NCBI_NP_OVR 0
#define arguments_CAVM_CST_ANB_NCBI_NP_OVR -1,-1,-1,-1

/**
 * Register (NCB) cst_anb_ncbi_p_ovr
 *
 * ANB NCBITXT P Overrides Register
 */
union cavm_cst_anb_ncbi_p_ovr
{
    uint64_t u;
    struct cavm_cst_anb_ncbi_p_ovr_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_32_63        : 32;
        uint64_t anb_ncbi_p_stt_frc    : 1;  /**< [ 31: 31](R/W) force NCB store type to STT */
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
        uint64_t anb_ncbi_p_stt_frc    : 1;  /**< [ 31: 31](R/W) force NCB store type to STT */
        uint64_t reserved_32_63        : 32;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_cst_anb_ncbi_p_ovr_s cn; */
};
typedef union cavm_cst_anb_ncbi_p_ovr cavm_cst_anb_ncbi_p_ovr_t;

#define CAVM_CST_ANB_NCBI_P_OVR CAVM_CST_ANB_NCBI_P_OVR_FUNC()
static inline uint64_t CAVM_CST_ANB_NCBI_P_OVR_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_CST_ANB_NCBI_P_OVR_FUNC(void)
{
    if (cavm_is_model(OCTEONTX_CN20KA))
        return 0x87a400001010ll;
    __cavm_csr_fatal("CST_ANB_NCBI_P_OVR", 0, 0, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_CST_ANB_NCBI_P_OVR cavm_cst_anb_ncbi_p_ovr_t
#define bustype_CAVM_CST_ANB_NCBI_P_OVR CSR_TYPE_NCB
#define basename_CAVM_CST_ANB_NCBI_P_OVR "CST_ANB_NCBI_P_OVR"
#define device_bar_CAVM_CST_ANB_NCBI_P_OVR 0x0 /* PF_BAR0 */
#define busnum_CAVM_CST_ANB_NCBI_P_OVR 0
#define arguments_CAVM_CST_ANB_NCBI_P_OVR -1,-1,-1,-1

/**
 * Register (NCB) cst_anb_ncbitx_status
 *
 * ANB AXISLV Block Status Register
 */
union cavm_cst_anb_ncbitx_status
{
    uint64_t u;
    struct cavm_cst_anb_ncbitx_status_s
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
    /* struct cavm_cst_anb_ncbitx_status_s cn; */
};
typedef union cavm_cst_anb_ncbitx_status cavm_cst_anb_ncbitx_status_t;

#define CAVM_CST_ANB_NCBITX_STATUS CAVM_CST_ANB_NCBITX_STATUS_FUNC()
static inline uint64_t CAVM_CST_ANB_NCBITX_STATUS_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_CST_ANB_NCBITX_STATUS_FUNC(void)
{
    if (cavm_is_model(OCTEONTX_CN20KA))
        return 0x87a400001040ll;
    __cavm_csr_fatal("CST_ANB_NCBITX_STATUS", 0, 0, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_CST_ANB_NCBITX_STATUS cavm_cst_anb_ncbitx_status_t
#define bustype_CAVM_CST_ANB_NCBITX_STATUS CSR_TYPE_NCB
#define basename_CAVM_CST_ANB_NCBITX_STATUS "CST_ANB_NCBITX_STATUS"
#define device_bar_CAVM_CST_ANB_NCBITX_STATUS 0x0 /* PF_BAR0 */
#define busnum_CAVM_CST_ANB_NCBITX_STATUS 0
#define arguments_CAVM_CST_ANB_NCBITX_STATUS -1,-1,-1,-1

/**
 * Register (NCB) cst_anb_ncborx_status
 *
 * ANB AXISLV Block Status Register
 */
union cavm_cst_anb_ncborx_status
{
    uint64_t u;
    struct cavm_cst_anb_ncborx_status_s
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
    /* struct cavm_cst_anb_ncborx_status_s cn; */
};
typedef union cavm_cst_anb_ncborx_status cavm_cst_anb_ncborx_status_t;

#define CAVM_CST_ANB_NCBORX_STATUS CAVM_CST_ANB_NCBORX_STATUS_FUNC()
static inline uint64_t CAVM_CST_ANB_NCBORX_STATUS_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_CST_ANB_NCBORX_STATUS_FUNC(void)
{
    if (cavm_is_model(OCTEONTX_CN20KA))
        return 0x87a400001050ll;
    __cavm_csr_fatal("CST_ANB_NCBORX_STATUS", 0, 0, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_CST_ANB_NCBORX_STATUS cavm_cst_anb_ncborx_status_t
#define bustype_CAVM_CST_ANB_NCBORX_STATUS CSR_TYPE_NCB
#define basename_CAVM_CST_ANB_NCBORX_STATUS "CST_ANB_NCBORX_STATUS"
#define device_bar_CAVM_CST_ANB_NCBORX_STATUS 0x0 /* PF_BAR0 */
#define busnum_CAVM_CST_ANB_NCBORX_STATUS 0
#define arguments_CAVM_CST_ANB_NCBORX_STATUS -1,-1,-1,-1

/**
 * Register (NCB) cst_int_ena_w1c
 *
 * CST Interrupt Enable Set Register
 * This register clears interrupt enable bits.
 */
union cavm_cst_int_ena_w1c
{
    uint64_t u;
    struct cavm_cst_int_ena_w1c_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_1_63         : 63;
        uint64_t int0                  : 1;  /**< [  0:  0](R/W1C/H) Reads or clears enable for CST_INT_W1C[INT0]. */
#else /* Word 0 - Little Endian */
        uint64_t int0                  : 1;  /**< [  0:  0](R/W1C/H) Reads or clears enable for CST_INT_W1C[INT0]. */
        uint64_t reserved_1_63         : 63;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_cst_int_ena_w1c_s cn; */
};
typedef union cavm_cst_int_ena_w1c cavm_cst_int_ena_w1c_t;

#define CAVM_CST_INT_ENA_W1C CAVM_CST_INT_ENA_W1C_FUNC()
static inline uint64_t CAVM_CST_INT_ENA_W1C_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_CST_INT_ENA_W1C_FUNC(void)
{
    if (cavm_is_model(OCTEONTX_CN20KA))
        return 0x87a400010168ll;
    __cavm_csr_fatal("CST_INT_ENA_W1C", 0, 0, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_CST_INT_ENA_W1C cavm_cst_int_ena_w1c_t
#define bustype_CAVM_CST_INT_ENA_W1C CSR_TYPE_NCB
#define basename_CAVM_CST_INT_ENA_W1C "CST_INT_ENA_W1C"
#define device_bar_CAVM_CST_INT_ENA_W1C 0x0 /* PF_BAR0 */
#define busnum_CAVM_CST_INT_ENA_W1C 0
#define arguments_CAVM_CST_INT_ENA_W1C -1,-1,-1,-1

/**
 * Register (NCB) cst_int_ena_w1s
 *
 * CST Interrupt Enable Set Register
 * This register sets interrupt enable bits.
 */
union cavm_cst_int_ena_w1s
{
    uint64_t u;
    struct cavm_cst_int_ena_w1s_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_1_63         : 63;
        uint64_t int0                  : 1;  /**< [  0:  0](R/W1S/H) Reads or sets enable for CST_INT_W1C[INT0]. */
#else /* Word 0 - Little Endian */
        uint64_t int0                  : 1;  /**< [  0:  0](R/W1S/H) Reads or sets enable for CST_INT_W1C[INT0]. */
        uint64_t reserved_1_63         : 63;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_cst_int_ena_w1s_s cn; */
};
typedef union cavm_cst_int_ena_w1s cavm_cst_int_ena_w1s_t;

#define CAVM_CST_INT_ENA_W1S CAVM_CST_INT_ENA_W1S_FUNC()
static inline uint64_t CAVM_CST_INT_ENA_W1S_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_CST_INT_ENA_W1S_FUNC(void)
{
    if (cavm_is_model(OCTEONTX_CN20KA))
        return 0x87a400010160ll;
    __cavm_csr_fatal("CST_INT_ENA_W1S", 0, 0, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_CST_INT_ENA_W1S cavm_cst_int_ena_w1s_t
#define bustype_CAVM_CST_INT_ENA_W1S CSR_TYPE_NCB
#define basename_CAVM_CST_INT_ENA_W1S "CST_INT_ENA_W1S"
#define device_bar_CAVM_CST_INT_ENA_W1S 0x0 /* PF_BAR0 */
#define busnum_CAVM_CST_INT_ENA_W1S 0
#define arguments_CAVM_CST_INT_ENA_W1S -1,-1,-1,-1

/**
 * Register (NCB) cst_int_w1c
 *
 * CST Interrupt Clear Register
 */
union cavm_cst_int_w1c
{
    uint64_t u;
    struct cavm_cst_int_w1c_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_1_63         : 63;
        uint64_t int0                  : 1;  /**< [  0:  0](R/W1C/H) When set, indicates INT0 event. */
#else /* Word 0 - Little Endian */
        uint64_t int0                  : 1;  /**< [  0:  0](R/W1C/H) When set, indicates INT0 event. */
        uint64_t reserved_1_63         : 63;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_cst_int_w1c_s cn; */
};
typedef union cavm_cst_int_w1c cavm_cst_int_w1c_t;

#define CAVM_CST_INT_W1C CAVM_CST_INT_W1C_FUNC()
static inline uint64_t CAVM_CST_INT_W1C_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_CST_INT_W1C_FUNC(void)
{
    if (cavm_is_model(OCTEONTX_CN20KA))
        return 0x87a400010150ll;
    __cavm_csr_fatal("CST_INT_W1C", 0, 0, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_CST_INT_W1C cavm_cst_int_w1c_t
#define bustype_CAVM_CST_INT_W1C CSR_TYPE_NCB
#define basename_CAVM_CST_INT_W1C "CST_INT_W1C"
#define device_bar_CAVM_CST_INT_W1C 0x0 /* PF_BAR0 */
#define busnum_CAVM_CST_INT_W1C 0
#define arguments_CAVM_CST_INT_W1C -1,-1,-1,-1

/**
 * Register (NCB) cst_int_w1s
 *
 * CST Interrupt Set Register
 * This register sets interrupt bits.
 */
union cavm_cst_int_w1s
{
    uint64_t u;
    struct cavm_cst_int_w1s_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_1_63         : 63;
        uint64_t int0                  : 1;  /**< [  0:  0](R/W1S/H) Reads or sets CST_INT_W1C[INT0]. */
#else /* Word 0 - Little Endian */
        uint64_t int0                  : 1;  /**< [  0:  0](R/W1S/H) Reads or sets CST_INT_W1C[INT0]. */
        uint64_t reserved_1_63         : 63;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_cst_int_w1s_s cn; */
};
typedef union cavm_cst_int_w1s cavm_cst_int_w1s_t;

#define CAVM_CST_INT_W1S CAVM_CST_INT_W1S_FUNC()
static inline uint64_t CAVM_CST_INT_W1S_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_CST_INT_W1S_FUNC(void)
{
    if (cavm_is_model(OCTEONTX_CN20KA))
        return 0x87a400010158ll;
    __cavm_csr_fatal("CST_INT_W1S", 0, 0, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_CST_INT_W1S cavm_cst_int_w1s_t
#define bustype_CAVM_CST_INT_W1S CSR_TYPE_NCB
#define basename_CAVM_CST_INT_W1S "CST_INT_W1S"
#define device_bar_CAVM_CST_INT_W1S 0x0 /* PF_BAR0 */
#define busnum_CAVM_CST_INT_W1S 0
#define arguments_CAVM_CST_INT_W1S -1,-1,-1,-1

/**
 * Register (NCB) cst_msix_pba#
 *
 * CST MSI-X Pending Bit Array Registers
 * This register is the MSI-X PBA table; the bit number is indexed by the CST_INT_VEC_E enumeration.
 */
union cavm_cst_msix_pbax
{
    uint64_t u;
    struct cavm_cst_msix_pbax_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t pend                  : 64; /**< [ 63:  0](RO) Pending message for the associated CST_MSIX_VEC()_CTL, enumerated by
                                                                 CST_INT_VEC_E. Bits that have no associated CST_INT_VEC_E are 0. */
#else /* Word 0 - Little Endian */
        uint64_t pend                  : 64; /**< [ 63:  0](RO) Pending message for the associated CST_MSIX_VEC()_CTL, enumerated by
                                                                 CST_INT_VEC_E. Bits that have no associated CST_INT_VEC_E are 0. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_cst_msix_pbax_s cn; */
};
typedef union cavm_cst_msix_pbax cavm_cst_msix_pbax_t;

static inline uint64_t CAVM_CST_MSIX_PBAX(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_CST_MSIX_PBAX(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CN20KA) && (a==0))
        return 0x87a4800f0000ll + 8ll * ((a) & 0x0);
    __cavm_csr_fatal("CST_MSIX_PBAX", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_CST_MSIX_PBAX(a) cavm_cst_msix_pbax_t
#define bustype_CAVM_CST_MSIX_PBAX(a) CSR_TYPE_NCB
#define basename_CAVM_CST_MSIX_PBAX(a) "CST_MSIX_PBAX"
#define device_bar_CAVM_CST_MSIX_PBAX(a) 0x4 /* PF_BAR4 */
#define busnum_CAVM_CST_MSIX_PBAX(a) (a)
#define arguments_CAVM_CST_MSIX_PBAX(a) (a),-1,-1,-1

/**
 * Register (NCB) cst_msix_vec#_addr
 *
 * CST MSI-X Vector-Table Address Register
 * This register is the MSI-X vector table, indexed by the CST_INT_VEC_E enumeration.
 */
union cavm_cst_msix_vecx_addr
{
    uint64_t u;
    struct cavm_cst_msix_vecx_addr_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_53_63        : 11;
        uint64_t addr                  : 51; /**< [ 52:  2](R/W) IOVA to use for MSI-X delivery of this vector. */
        uint64_t reserved_1            : 1;
        uint64_t secvec                : 1;  /**< [  0:  0](SR/W) Secure vector.
                                                                 0 = This vector may be read or written by either secure or nonsecure states.
                                                                 1 = This vector's CST_MSIX_VEC()_ADDR, CST_MSIX_VEC()_CTL, and corresponding
                                                                 bit of CST_MSIX_PBA() are RAZ/WI and does not cause a fault when accessed
                                                                 by the nonsecure world.

                                                                 If PCCPF_CST_VSEC_SCTL[MSIX_SEC] (for documentation, see PCCPF_XXX_VSEC_SCTL[MSIX_SEC])
                                                                 is set, all vectors are secure and function as if [SECVEC] was set. */
#else /* Word 0 - Little Endian */
        uint64_t secvec                : 1;  /**< [  0:  0](SR/W) Secure vector.
                                                                 0 = This vector may be read or written by either secure or nonsecure states.
                                                                 1 = This vector's CST_MSIX_VEC()_ADDR, CST_MSIX_VEC()_CTL, and corresponding
                                                                 bit of CST_MSIX_PBA() are RAZ/WI and does not cause a fault when accessed
                                                                 by the nonsecure world.

                                                                 If PCCPF_CST_VSEC_SCTL[MSIX_SEC] (for documentation, see PCCPF_XXX_VSEC_SCTL[MSIX_SEC])
                                                                 is set, all vectors are secure and function as if [SECVEC] was set. */
        uint64_t reserved_1            : 1;
        uint64_t addr                  : 51; /**< [ 52:  2](R/W) IOVA to use for MSI-X delivery of this vector. */
        uint64_t reserved_53_63        : 11;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_cst_msix_vecx_addr_s cn; */
};
typedef union cavm_cst_msix_vecx_addr cavm_cst_msix_vecx_addr_t;

static inline uint64_t CAVM_CST_MSIX_VECX_ADDR(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_CST_MSIX_VECX_ADDR(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CN20KA) && (a==0))
        return 0x87a480000000ll + 0x10ll * ((a) & 0x0);
    __cavm_csr_fatal("CST_MSIX_VECX_ADDR", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_CST_MSIX_VECX_ADDR(a) cavm_cst_msix_vecx_addr_t
#define bustype_CAVM_CST_MSIX_VECX_ADDR(a) CSR_TYPE_NCB
#define basename_CAVM_CST_MSIX_VECX_ADDR(a) "CST_MSIX_VECX_ADDR"
#define device_bar_CAVM_CST_MSIX_VECX_ADDR(a) 0x4 /* PF_BAR4 */
#define busnum_CAVM_CST_MSIX_VECX_ADDR(a) (a)
#define arguments_CAVM_CST_MSIX_VECX_ADDR(a) (a),-1,-1,-1

/**
 * Register (NCB) cst_msix_vec#_ctl
 *
 * CST MSI-X Vector-Table Control and Data Register
 * This register is the MSI-X vector table, indexed by the CST_INT_VEC_E enumeration.
 */
union cavm_cst_msix_vecx_ctl
{
    uint64_t u;
    struct cavm_cst_msix_vecx_ctl_s
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
    /* struct cavm_cst_msix_vecx_ctl_s cn; */
};
typedef union cavm_cst_msix_vecx_ctl cavm_cst_msix_vecx_ctl_t;

static inline uint64_t CAVM_CST_MSIX_VECX_CTL(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_CST_MSIX_VECX_CTL(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CN20KA) && (a==0))
        return 0x87a480000008ll + 0x10ll * ((a) & 0x0);
    __cavm_csr_fatal("CST_MSIX_VECX_CTL", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_CST_MSIX_VECX_CTL(a) cavm_cst_msix_vecx_ctl_t
#define bustype_CAVM_CST_MSIX_VECX_CTL(a) CSR_TYPE_NCB
#define basename_CAVM_CST_MSIX_VECX_CTL(a) "CST_MSIX_VECX_CTL"
#define device_bar_CAVM_CST_MSIX_VECX_CTL(a) 0x4 /* PF_BAR4 */
#define busnum_CAVM_CST_MSIX_VECX_CTL(a) (a)
#define arguments_CAVM_CST_MSIX_VECX_CTL(a) (a),-1,-1,-1

/**
 * Register (NCB) cst_reset
 *
 * CST Reset Control Register
 */
union cavm_cst_reset
{
    uint64_t u;
    struct cavm_cst_reset_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_2_63         : 62;
        uint64_t mask_dap_cdbgrstreq   : 1;  /**< [  1:  1](R/W) Masking DAP CDBGRSTREQ, not allowing DAP to provide system DBGRST. */
        uint64_t trigger_dbgrst        : 1;  /**< [  0:  0](WO/H) Triggers Coresight DBGRST. */
#else /* Word 0 - Little Endian */
        uint64_t trigger_dbgrst        : 1;  /**< [  0:  0](WO/H) Triggers Coresight DBGRST. */
        uint64_t mask_dap_cdbgrstreq   : 1;  /**< [  1:  1](R/W) Masking DAP CDBGRSTREQ, not allowing DAP to provide system DBGRST. */
        uint64_t reserved_2_63         : 62;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_cst_reset_s cn; */
};
typedef union cavm_cst_reset cavm_cst_reset_t;

#define CAVM_CST_RESET CAVM_CST_RESET_FUNC()
static inline uint64_t CAVM_CST_RESET_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_CST_RESET_FUNC(void)
{
    if (cavm_is_model(OCTEONTX_CN20KA))
        return 0x87a400000000ll;
    __cavm_csr_fatal("CST_RESET", 0, 0, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_CST_RESET cavm_cst_reset_t
#define bustype_CAVM_CST_RESET CSR_TYPE_NCB
#define basename_CAVM_CST_RESET "CST_RESET"
#define device_bar_CAVM_CST_RESET 0x0 /* PF_BAR0 */
#define busnum_CAVM_CST_RESET 0
#define arguments_CAVM_CST_RESET -1,-1,-1,-1

#endif /* __CAVM_CSRS_CST_H__ */
