#ifndef __CAVM_CSRS_SSOW_H__
#define __CAVM_CSRS_SSOW_H__
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
 * OcteonTX SSOW.
 *
 * This file is auto generated. Do not edit.
 *
 */

/**
 * Enumeration ssow_gw_result_e
 *
 * SSOW GET_WORK Result Type Enumeration
 * Describes the getwork result status for 128-bit CASP access.
 */
#define CAVM_SSOW_GW_RESULT_E_GW_ERROR (2)
#define CAVM_SSOW_GW_RESULT_E_GW_NO_WORK (1)
#define CAVM_SSOW_GW_RESULT_E_GW_WORK (0)

/**
 * Enumeration ssow_lf_int_vec_e
 *
 * SSOW MSI-X Vector Enumeration
 * Enumerates the MSI-X interrupt vectors.
 */
#define CAVM_SSOW_LF_INT_VEC_E_IOP (0)

/**
 * Register (RVU_PF_BAR0) ssow_af_bar2_alias#
 *
 * SSO Work Slot Admin Function  BAR2 Alias Registers
 * These registers alias to the SSO Workslot BAR2 registers for the PF and
 * function selected by SSOW_AF_BAR2_SEL[PF_FUNC].
 */
union cavm_ssow_af_bar2_aliasx
{
    uint64_t u;
    struct cavm_ssow_af_bar2_aliasx_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t data                  : 64; /**< [ 63:  0](R/W/H) Aliased register data. */
#else /* Word 0 - Little Endian */
        uint64_t data                  : 64; /**< [ 63:  0](R/W/H) Aliased register data. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_ssow_af_bar2_aliasx_s cn; */
};
typedef union cavm_ssow_af_bar2_aliasx cavm_ssow_af_bar2_aliasx_t;

static inline uint64_t CAVM_SSOW_AF_BAR2_ALIASX(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_SSOW_AF_BAR2_ALIASX(uint64_t a)
{
    if (a<=131071)
        return 0x840089100000ll + 8ll * ((a) & 0x1ffff);
    __cavm_csr_fatal("SSOW_AF_BAR2_ALIASX", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_SSOW_AF_BAR2_ALIASX(a) cavm_ssow_af_bar2_aliasx_t
#define bustype_CAVM_SSOW_AF_BAR2_ALIASX(a) CSR_TYPE_RVU_PF_BAR0
#define basename_CAVM_SSOW_AF_BAR2_ALIASX(a) "SSOW_AF_BAR2_ALIASX"
#define device_bar_CAVM_SSOW_AF_BAR2_ALIASX(a) 0x0 /* RVU_BAR0 */
#define busnum_CAVM_SSOW_AF_BAR2_ALIASX(a) (a)
#define arguments_CAVM_SSOW_AF_BAR2_ALIASX(a) (a),-1,-1,-1

/**
 * Register (RVU_PF_BAR0) ssow_af_bar2_sel
 *
 * SSO Work Slot Admin Function BAR2 Select Register
 * This register configures BAR2 accesses from the SSOW_AF_BAR2_ALIAS() registers in BAR0.
 */
union cavm_ssow_af_bar2_sel
{
    uint64_t u;
    struct cavm_ssow_af_bar2_sel_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_17_63        : 47;
        uint64_t alias_ena             : 1;  /**< [ 16: 16](R/W) Enable BAR2 register accesses from the AF BAR2 alias registers in BAR0. */
        uint64_t alias_pf_func         : 16; /**< [ 15:  0](R/W) PF and function whose BAR2 registers may be accessed from the AF BAR2 alias
                                                                 registers. Format specified by RVU_PF_FUNC_S. */
#else /* Word 0 - Little Endian */
        uint64_t alias_pf_func         : 16; /**< [ 15:  0](R/W) PF and function whose BAR2 registers may be accessed from the AF BAR2 alias
                                                                 registers. Format specified by RVU_PF_FUNC_S. */
        uint64_t alias_ena             : 1;  /**< [ 16: 16](R/W) Enable BAR2 register accesses from the AF BAR2 alias registers in BAR0. */
        uint64_t reserved_17_63        : 47;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_ssow_af_bar2_sel_s cn; */
};
typedef union cavm_ssow_af_bar2_sel cavm_ssow_af_bar2_sel_t;

#define CAVM_SSOW_AF_BAR2_SEL CAVM_SSOW_AF_BAR2_SEL_FUNC()
static inline uint64_t CAVM_SSOW_AF_BAR2_SEL_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_SSOW_AF_BAR2_SEL_FUNC(void)
{
    return 0x840089000000ll;
}

#define typedef_CAVM_SSOW_AF_BAR2_SEL cavm_ssow_af_bar2_sel_t
#define bustype_CAVM_SSOW_AF_BAR2_SEL CSR_TYPE_RVU_PF_BAR0
#define basename_CAVM_SSOW_AF_BAR2_SEL "SSOW_AF_BAR2_SEL"
#define device_bar_CAVM_SSOW_AF_BAR2_SEL 0x0 /* RVU_BAR0 */
#define busnum_CAVM_SSOW_AF_BAR2_SEL 0
#define arguments_CAVM_SSOW_AF_BAR2_SEL -1,-1,-1,-1

/**
 * Register (RVU_PF_BAR0) ssow_af_flr_ggrp_digest#
 *
 * SSO AF FLR GGRP Summary Registers
 * One bit per GGRP to indicate which groups are currently mapped to SSOW_AF_LF_FLR[LF].
 */
union cavm_ssow_af_flr_ggrp_digestx
{
    uint64_t u;
    struct cavm_ssow_af_flr_ggrp_digestx_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t ggrp                  : 64; /**< [ 63:  0](R/W1C/H) One bit per GGRP. Only valid after SSOW_AF_LF_FLR[STEP3] has completed. */
#else /* Word 0 - Little Endian */
        uint64_t ggrp                  : 64; /**< [ 63:  0](R/W1C/H) One bit per GGRP. Only valid after SSOW_AF_LF_FLR[STEP3] has completed. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_ssow_af_flr_ggrp_digestx_s cn; */
};
typedef union cavm_ssow_af_flr_ggrp_digestx cavm_ssow_af_flr_ggrp_digestx_t;

static inline uint64_t CAVM_SSOW_AF_FLR_GGRP_DIGESTX(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_SSOW_AF_FLR_GGRP_DIGESTX(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CN10KA_BX) && (a<=3))
        return 0x840080000200ll + 8ll * ((a) & 0x3);
    if (cavm_is_model(OCTEONTX_CN10KB) && (a<=1))
        return 0x840080000200ll + 8ll * ((a) & 0x1);
    __cavm_csr_fatal("SSOW_AF_FLR_GGRP_DIGESTX", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_SSOW_AF_FLR_GGRP_DIGESTX(a) cavm_ssow_af_flr_ggrp_digestx_t
#define bustype_CAVM_SSOW_AF_FLR_GGRP_DIGESTX(a) CSR_TYPE_RVU_PF_BAR0
#define basename_CAVM_SSOW_AF_FLR_GGRP_DIGESTX(a) "SSOW_AF_FLR_GGRP_DIGESTX"
#define device_bar_CAVM_SSOW_AF_FLR_GGRP_DIGESTX(a) 0x0 /* RVU_BAR0 */
#define busnum_CAVM_SSOW_AF_FLR_GGRP_DIGESTX(a) (a)
#define arguments_CAVM_SSOW_AF_FLR_GGRP_DIGESTX(a) (a),-1,-1,-1

/**
 * Register (RVU_PF_BAR0) ssow_af_flr_gws_digest
 *
 * SSO AF FLR GSLT Summary Registers
 * One bit per GSLT to indicate which groups are currently mapped to SSOW_AF_LF_FLR[LF].
 */
union cavm_ssow_af_flr_gws_digest
{
    uint64_t u;
    struct cavm_ssow_af_flr_gws_digest_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t gws                   : 64; /**< [ 63:  0](R/W1C/H) One bit per HWS. Only valid after SSOW_AF_LF_FLR[STEP3] has completed. */
#else /* Word 0 - Little Endian */
        uint64_t gws                   : 64; /**< [ 63:  0](R/W1C/H) One bit per HWS. Only valid after SSOW_AF_LF_FLR[STEP3] has completed. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_ssow_af_flr_gws_digest_s cn; */
};
typedef union cavm_ssow_af_flr_gws_digest cavm_ssow_af_flr_gws_digest_t;

#define CAVM_SSOW_AF_FLR_GWS_DIGEST CAVM_SSOW_AF_FLR_GWS_DIGEST_FUNC()
static inline uint64_t CAVM_SSOW_AF_FLR_GWS_DIGEST_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_SSOW_AF_FLR_GWS_DIGEST_FUNC(void)
{
    if (cavm_is_model(OCTEONTX_CN10KA_BX))
        return 0x840080000400ll;
    if (cavm_is_model(OCTEONTX_CN10KB))
        return 0x840080000400ll;
    __cavm_csr_fatal("SSOW_AF_FLR_GWS_DIGEST", 0, 0, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_SSOW_AF_FLR_GWS_DIGEST cavm_ssow_af_flr_gws_digest_t
#define bustype_CAVM_SSOW_AF_FLR_GWS_DIGEST CSR_TYPE_RVU_PF_BAR0
#define basename_CAVM_SSOW_AF_FLR_GWS_DIGEST "SSOW_AF_FLR_GWS_DIGEST"
#define device_bar_CAVM_SSOW_AF_FLR_GWS_DIGEST 0x0 /* RVU_BAR0 */
#define busnum_CAVM_SSOW_AF_FLR_GWS_DIGEST 0
#define arguments_CAVM_SSOW_AF_FLR_GWS_DIGEST -1,-1,-1,-1

/**
 * Register (RVU_PF_BAR0) ssow_af_flr_hwgrp_digest#
 *
 * SSO AF FLR HWGRP Summary Registers
 * One bit per HWGRP to indicate which groups are currently mapped to SSOW_AF_LF_FLR[LF].
 */
union cavm_ssow_af_flr_hwgrp_digestx
{
    uint64_t u;
    struct cavm_ssow_af_flr_hwgrp_digestx_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t hwgrp                 : 64; /**< [ 63:  0](R/W1C/H) One bit per HWGRP. Only valid after SSOW_AF_LF_FLR[STEP3] has completed. */
#else /* Word 0 - Little Endian */
        uint64_t hwgrp                 : 64; /**< [ 63:  0](R/W1C/H) One bit per HWGRP. Only valid after SSOW_AF_LF_FLR[STEP3] has completed. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_ssow_af_flr_hwgrp_digestx_s cn; */
};
typedef union cavm_ssow_af_flr_hwgrp_digestx cavm_ssow_af_flr_hwgrp_digestx_t;

static inline uint64_t CAVM_SSOW_AF_FLR_HWGRP_DIGESTX(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_SSOW_AF_FLR_HWGRP_DIGESTX(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CN10KA_BX) && (a<=3))
        return 0x840080000100ll + 8ll * ((a) & 0x3);
    if (cavm_is_model(OCTEONTX_CN10KB) && (a<=1))
        return 0x840080000100ll + 8ll * ((a) & 0x1);
    __cavm_csr_fatal("SSOW_AF_FLR_HWGRP_DIGESTX", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_SSOW_AF_FLR_HWGRP_DIGESTX(a) cavm_ssow_af_flr_hwgrp_digestx_t
#define bustype_CAVM_SSOW_AF_FLR_HWGRP_DIGESTX(a) CSR_TYPE_RVU_PF_BAR0
#define basename_CAVM_SSOW_AF_FLR_HWGRP_DIGESTX(a) "SSOW_AF_FLR_HWGRP_DIGESTX"
#define device_bar_CAVM_SSOW_AF_FLR_HWGRP_DIGESTX(a) 0x0 /* RVU_BAR0 */
#define busnum_CAVM_SSOW_AF_FLR_HWGRP_DIGESTX(a) (a)
#define arguments_CAVM_SSOW_AF_FLR_HWGRP_DIGESTX(a) (a),-1,-1,-1

/**
 * Register (RVU_PF_BAR0) ssow_af_flr_hws_digest
 *
 * SSO AF FLR HWS Summary Registers
 * One bit per HWS to indicate which groups are currently mapped to SSOW_AF_LF_FLR[LF].
 */
union cavm_ssow_af_flr_hws_digest
{
    uint64_t u;
    struct cavm_ssow_af_flr_hws_digest_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t hws                   : 64; /**< [ 63:  0](R/W1C/H) One bit per HWS. Only valid after SSOW_AF_LF_FLR[STEP3] has completed. */
#else /* Word 0 - Little Endian */
        uint64_t hws                   : 64; /**< [ 63:  0](R/W1C/H) One bit per HWS. Only valid after SSOW_AF_LF_FLR[STEP3] has completed. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_ssow_af_flr_hws_digest_s cn; */
};
typedef union cavm_ssow_af_flr_hws_digest cavm_ssow_af_flr_hws_digest_t;

#define CAVM_SSOW_AF_FLR_HWS_DIGEST CAVM_SSOW_AF_FLR_HWS_DIGEST_FUNC()
static inline uint64_t CAVM_SSOW_AF_FLR_HWS_DIGEST_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_SSOW_AF_FLR_HWS_DIGEST_FUNC(void)
{
    if (cavm_is_model(OCTEONTX_CN10KA_BX))
        return 0x840080000300ll;
    if (cavm_is_model(OCTEONTX_CN10KB))
        return 0x840080000300ll;
    __cavm_csr_fatal("SSOW_AF_FLR_HWS_DIGEST", 0, 0, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_SSOW_AF_FLR_HWS_DIGEST cavm_ssow_af_flr_hws_digest_t
#define bustype_CAVM_SSOW_AF_FLR_HWS_DIGEST CSR_TYPE_RVU_PF_BAR0
#define basename_CAVM_SSOW_AF_FLR_HWS_DIGEST "SSOW_AF_FLR_HWS_DIGEST"
#define device_bar_CAVM_SSOW_AF_FLR_HWS_DIGEST 0x0 /* RVU_BAR0 */
#define busnum_CAVM_SSOW_AF_FLR_HWS_DIGEST 0
#define arguments_CAVM_SSOW_AF_FLR_HWS_DIGEST -1,-1,-1,-1

/**
 * Register (RVU_PF_BAR0) ssow_af_lf_flr
 *
 * SSOW AF LF Reset Register
 */
union cavm_ssow_af_lf_flr
{
    uint64_t u;
    struct cavm_ssow_af_lf_flr_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_33_63        : 31;
        uint64_t flr_abort             : 1;  /**< [ 32: 32](R/W1S) Terminate hardware FLR in progress. */
        uint64_t flr_error             : 1;  /**< [ 31: 31](RO) The last set step bit received an error. Hardware FLR was aborted. */
        uint64_t reserved_21_30        : 10;
        uint64_t step7                 : 1;  /**< [ 20: 20](R/W1S/H) Step 7 Hardware FLR. When set, hardware will perform
                                                                 GET_WORK operations. Steps 3-6 are performed first if set.
                                                                 Hardware clears this bit when done. */
        uint64_t step6                 : 1;  /**< [ 19: 19](R/W1S/H) Step 6 Hardware FLR. When set, hardware will write
                                                                 SSO_AF_HWS(0..51)_S(0..1)_GRPMSK(0..3). Steps 3-5 are
                                                                 performed first if set. Hardware clears this bit when done. */
        uint64_t step5                 : 1;  /**< [ 18: 18](R/W1S/H) Step 5 Hardware FLR. When set, hardware will write
                                                                 SSOW_LF_GWS_OP_DESCHED, SSOW_LF_GWS_OP_SWTAG_FLUSH.
                                                                 Steps 3-4 are performed first if set. Hardware clears this bit when done. */
        uint64_t step4                 : 1;  /**< [ 17: 17](R/W1S/H) Step 4 Hardware FLR. When set, hardware will write SSO_AF_GWS_INV,
                                                                 SSOW_LF_GWS_NW_TIM, and SSO_AF_HWS(0..51)_LSW_CFG. Step 3 is performed
                                                                 first if set. Hardware clears this bit when done. */
        uint64_t step3                 : 1;  /**< [ 16: 16](R/W1S/H) Step 3 Hardware FLR. When set, hardware will create 4 map files
                                                                 Hardware clears this bit when done. */
        uint64_t pf_func               : 16; /**< [ 15:  0](R/W) Local function that is FLR'd when any STEP bits are set. */
#else /* Word 0 - Little Endian */
        uint64_t pf_func               : 16; /**< [ 15:  0](R/W) Local function that is FLR'd when any STEP bits are set. */
        uint64_t step3                 : 1;  /**< [ 16: 16](R/W1S/H) Step 3 Hardware FLR. When set, hardware will create 4 map files
                                                                 Hardware clears this bit when done. */
        uint64_t step4                 : 1;  /**< [ 17: 17](R/W1S/H) Step 4 Hardware FLR. When set, hardware will write SSO_AF_GWS_INV,
                                                                 SSOW_LF_GWS_NW_TIM, and SSO_AF_HWS(0..51)_LSW_CFG. Step 3 is performed
                                                                 first if set. Hardware clears this bit when done. */
        uint64_t step5                 : 1;  /**< [ 18: 18](R/W1S/H) Step 5 Hardware FLR. When set, hardware will write
                                                                 SSOW_LF_GWS_OP_DESCHED, SSOW_LF_GWS_OP_SWTAG_FLUSH.
                                                                 Steps 3-4 are performed first if set. Hardware clears this bit when done. */
        uint64_t step6                 : 1;  /**< [ 19: 19](R/W1S/H) Step 6 Hardware FLR. When set, hardware will write
                                                                 SSO_AF_HWS(0..51)_S(0..1)_GRPMSK(0..3). Steps 3-5 are
                                                                 performed first if set. Hardware clears this bit when done. */
        uint64_t step7                 : 1;  /**< [ 20: 20](R/W1S/H) Step 7 Hardware FLR. When set, hardware will perform
                                                                 GET_WORK operations. Steps 3-6 are performed first if set.
                                                                 Hardware clears this bit when done. */
        uint64_t reserved_21_30        : 10;
        uint64_t flr_error             : 1;  /**< [ 31: 31](RO) The last set step bit received an error. Hardware FLR was aborted. */
        uint64_t flr_abort             : 1;  /**< [ 32: 32](R/W1S) Terminate hardware FLR in progress. */
        uint64_t reserved_33_63        : 31;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_ssow_af_lf_flr_s cn10; */
    /* struct cavm_ssow_af_lf_flr_s cn10ka; */
    struct cavm_ssow_af_lf_flr_cn10kb
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_33_63        : 31;
        uint64_t flr_abort             : 1;  /**< [ 32: 32](R/W1S) Terminate hardware FLR in progress. */
        uint64_t flr_error             : 1;  /**< [ 31: 31](RO) The last set step bit received an error. Hardware FLR was aborted. */
        uint64_t reserved_21_30        : 10;
        uint64_t step7                 : 1;  /**< [ 20: 20](R/W1S/H) Step 7 Hardware FLR. When set, hardware will perform
                                                                 GET_WORK operations. Steps 3-6 are performed first if set.
                                                                 Hardware clears this bit when done. */
        uint64_t step6                 : 1;  /**< [ 19: 19](R/W1S/H) Step 6 Hardware FLR. When set, hardware will write
                                                                 SSO_AF_HWS(0..51)_S(0..1)_GRPMSK(0..1). Steps 3-5 are
                                                                 performed first if set. Hardware clears this bit when done. */
        uint64_t step5                 : 1;  /**< [ 18: 18](R/W1S/H) Step 5 Hardware FLR. When set, hardware will write
                                                                 SSOW_LF_GWS_OP_DESCHED, SSOW_LF_GWS_OP_SWTAG_FLUSH.
                                                                 Steps 3-4 are performed first if set. Hardware clears this bit when done. */
        uint64_t step4                 : 1;  /**< [ 17: 17](R/W1S/H) Step 4 Hardware FLR. When set, hardware will write SSO_AF_GWS_INV,
                                                                 SSOW_LF_GWS_NW_TIM, and SSO_AF_HWS(0..51)_LSW_CFG. Step 3 is performed
                                                                 first if set. Hardware clears this bit when done. */
        uint64_t step3                 : 1;  /**< [ 16: 16](R/W1S/H) Step 3 Hardware FLR. When set, hardware will create 4 map files
                                                                 Hardware clears this bit when done. */
        uint64_t pf_func               : 16; /**< [ 15:  0](R/W) Local function that is FLR'd when any STEP bits are set. */
#else /* Word 0 - Little Endian */
        uint64_t pf_func               : 16; /**< [ 15:  0](R/W) Local function that is FLR'd when any STEP bits are set. */
        uint64_t step3                 : 1;  /**< [ 16: 16](R/W1S/H) Step 3 Hardware FLR. When set, hardware will create 4 map files
                                                                 Hardware clears this bit when done. */
        uint64_t step4                 : 1;  /**< [ 17: 17](R/W1S/H) Step 4 Hardware FLR. When set, hardware will write SSO_AF_GWS_INV,
                                                                 SSOW_LF_GWS_NW_TIM, and SSO_AF_HWS(0..51)_LSW_CFG. Step 3 is performed
                                                                 first if set. Hardware clears this bit when done. */
        uint64_t step5                 : 1;  /**< [ 18: 18](R/W1S/H) Step 5 Hardware FLR. When set, hardware will write
                                                                 SSOW_LF_GWS_OP_DESCHED, SSOW_LF_GWS_OP_SWTAG_FLUSH.
                                                                 Steps 3-4 are performed first if set. Hardware clears this bit when done. */
        uint64_t step6                 : 1;  /**< [ 19: 19](R/W1S/H) Step 6 Hardware FLR. When set, hardware will write
                                                                 SSO_AF_HWS(0..51)_S(0..1)_GRPMSK(0..1). Steps 3-5 are
                                                                 performed first if set. Hardware clears this bit when done. */
        uint64_t step7                 : 1;  /**< [ 20: 20](R/W1S/H) Step 7 Hardware FLR. When set, hardware will perform
                                                                 GET_WORK operations. Steps 3-6 are performed first if set.
                                                                 Hardware clears this bit when done. */
        uint64_t reserved_21_30        : 10;
        uint64_t flr_error             : 1;  /**< [ 31: 31](RO) The last set step bit received an error. Hardware FLR was aborted. */
        uint64_t flr_abort             : 1;  /**< [ 32: 32](R/W1S) Terminate hardware FLR in progress. */
        uint64_t reserved_33_63        : 31;
#endif /* Word 0 - End */
    } cn10kb;
};
typedef union cavm_ssow_af_lf_flr cavm_ssow_af_lf_flr_t;

#define CAVM_SSOW_AF_LF_FLR CAVM_SSOW_AF_LF_FLR_FUNC()
static inline uint64_t CAVM_SSOW_AF_LF_FLR_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_SSOW_AF_LF_FLR_FUNC(void)
{
    if (cavm_is_model(OCTEONTX_CN10KA_BX))
        return 0x840080000040ll;
    if (cavm_is_model(OCTEONTX_CN10KB))
        return 0x840080000040ll;
    __cavm_csr_fatal("SSOW_AF_LF_FLR", 0, 0, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_SSOW_AF_LF_FLR cavm_ssow_af_lf_flr_t
#define bustype_CAVM_SSOW_AF_LF_FLR CSR_TYPE_RVU_PF_BAR0
#define basename_CAVM_SSOW_AF_LF_FLR "SSOW_AF_LF_FLR"
#define device_bar_CAVM_SSOW_AF_LF_FLR 0x0 /* RVU_BAR0 */
#define busnum_CAVM_SSOW_AF_LF_FLR 0
#define arguments_CAVM_SSOW_AF_LF_FLR -1,-1,-1,-1

/**
 * Register (RVU_PF_BAR0) ssow_af_lf_hws_rst
 *
 * SSOW AF LF Reset Register
 */
union cavm_ssow_af_lf_hws_rst
{
    uint64_t u;
    struct cavm_ssow_af_lf_hws_rst_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_13_63        : 51;
        uint64_t exec                  : 1;  /**< [ 12: 12](R/W1S/H) Execute LF software-initiated reset. When software writes a one to set this bit, hardware
                                                                 resets the local function selected by [LF]. Hardware clears this bit when
                                                                 done. */
        uint64_t reserved_8_11         : 4;
        uint64_t lf                    : 8;  /**< [  7:  0](R/W) Local function that is reset when [EXEC] is set. */
#else /* Word 0 - Little Endian */
        uint64_t lf                    : 8;  /**< [  7:  0](R/W) Local function that is reset when [EXEC] is set. */
        uint64_t reserved_8_11         : 4;
        uint64_t exec                  : 1;  /**< [ 12: 12](R/W1S/H) Execute LF software-initiated reset. When software writes a one to set this bit, hardware
                                                                 resets the local function selected by [LF]. Hardware clears this bit when
                                                                 done. */
        uint64_t reserved_13_63        : 51;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_ssow_af_lf_hws_rst_s cn; */
};
typedef union cavm_ssow_af_lf_hws_rst cavm_ssow_af_lf_hws_rst_t;

#define CAVM_SSOW_AF_LF_HWS_RST CAVM_SSOW_AF_LF_HWS_RST_FUNC()
static inline uint64_t CAVM_SSOW_AF_LF_HWS_RST_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_SSOW_AF_LF_HWS_RST_FUNC(void)
{
    return 0x840080000030ll;
}

#define typedef_CAVM_SSOW_AF_LF_HWS_RST cavm_ssow_af_lf_hws_rst_t
#define bustype_CAVM_SSOW_AF_LF_HWS_RST CSR_TYPE_RVU_PF_BAR0
#define basename_CAVM_SSOW_AF_LF_HWS_RST "SSOW_AF_LF_HWS_RST"
#define device_bar_CAVM_SSOW_AF_LF_HWS_RST 0x0 /* RVU_BAR0 */
#define busnum_CAVM_SSOW_AF_LF_HWS_RST 0
#define arguments_CAVM_SSOW_AF_LF_HWS_RST -1,-1,-1,-1

/**
 * Register (RVU_PF_BAR0) ssow_af_rvu_lf_hws_cfg_debug
 *
 * SSO WS Privileged LF Configuration Debug Registers
 */
union cavm_ssow_af_rvu_lf_hws_cfg_debug
{
    uint64_t u;
    struct cavm_ssow_af_rvu_lf_hws_cfg_debug_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_40_63        : 24;
        uint64_t pf_func               : 16; /**< [ 39: 24](R/W) RVU VF/PF for reverse lookup. Format defined by RVU_PF_FUNC_S. */
        uint64_t slot                  : 8;  /**< [ 23: 16](R/W) Slot within the VF/PF selected by [PF_FUNC] for reverse lookup. Must be
                                                                 zero for NIX and NPA. */
        uint64_t reserved_14_15        : 2;
        uint64_t exec                  : 1;  /**< [ 13: 13](R/W1S/H) Execute lookup. Writing a one to this bit initiates the reverse lookup
                                                                 from {[PF_FUNC], [SLOT]}. Hardware writes the lookup result to {[LF_VALID],
                                                                 [LF]} and clears this bit when done. */
        uint64_t lf_valid              : 1;  /**< [ 12: 12](RO/H) When set, indicates local function [LF] is provisioned to the VF/PF slot
                                                                 indexed by this register. When clear, a local function is not provisioned
                                                                 to the VF/PF slot. */
        uint64_t lf                    : 12; /**< [ 11:  0](RO/H) When [LF_VALID] is set, local function provisioned to the VF/PF slot. */
#else /* Word 0 - Little Endian */
        uint64_t lf                    : 12; /**< [ 11:  0](RO/H) When [LF_VALID] is set, local function provisioned to the VF/PF slot. */
        uint64_t lf_valid              : 1;  /**< [ 12: 12](RO/H) When set, indicates local function [LF] is provisioned to the VF/PF slot
                                                                 indexed by this register. When clear, a local function is not provisioned
                                                                 to the VF/PF slot. */
        uint64_t exec                  : 1;  /**< [ 13: 13](R/W1S/H) Execute lookup. Writing a one to this bit initiates the reverse lookup
                                                                 from {[PF_FUNC], [SLOT]}. Hardware writes the lookup result to {[LF_VALID],
                                                                 [LF]} and clears this bit when done. */
        uint64_t reserved_14_15        : 2;
        uint64_t slot                  : 8;  /**< [ 23: 16](R/W) Slot within the VF/PF selected by [PF_FUNC] for reverse lookup. Must be
                                                                 zero for NIX and NPA. */
        uint64_t pf_func               : 16; /**< [ 39: 24](R/W) RVU VF/PF for reverse lookup. Format defined by RVU_PF_FUNC_S. */
        uint64_t reserved_40_63        : 24;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_ssow_af_rvu_lf_hws_cfg_debug_s cn; */
};
typedef union cavm_ssow_af_rvu_lf_hws_cfg_debug cavm_ssow_af_rvu_lf_hws_cfg_debug_t;

#define CAVM_SSOW_AF_RVU_LF_HWS_CFG_DEBUG CAVM_SSOW_AF_RVU_LF_HWS_CFG_DEBUG_FUNC()
static inline uint64_t CAVM_SSOW_AF_RVU_LF_HWS_CFG_DEBUG_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_SSOW_AF_RVU_LF_HWS_CFG_DEBUG_FUNC(void)
{
    return 0x840080000010ll;
}

#define typedef_CAVM_SSOW_AF_RVU_LF_HWS_CFG_DEBUG cavm_ssow_af_rvu_lf_hws_cfg_debug_t
#define bustype_CAVM_SSOW_AF_RVU_LF_HWS_CFG_DEBUG CSR_TYPE_RVU_PF_BAR0
#define basename_CAVM_SSOW_AF_RVU_LF_HWS_CFG_DEBUG "SSOW_AF_RVU_LF_HWS_CFG_DEBUG"
#define device_bar_CAVM_SSOW_AF_RVU_LF_HWS_CFG_DEBUG 0x0 /* RVU_BAR0 */
#define busnum_CAVM_SSOW_AF_RVU_LF_HWS_CFG_DEBUG 0
#define arguments_CAVM_SSOW_AF_RVU_LF_HWS_CFG_DEBUG -1,-1,-1,-1

/**
 * Register (RVU_PF_BAR0) ssow_af_scratch_aw
 *
 * SSOW Scratch Register
 */
union cavm_ssow_af_scratch_aw
{
    uint64_t u;
    struct cavm_ssow_af_scratch_aw_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_8_63         : 56;
        uint64_t scratch               : 8;  /**< [  7:  0](R/W) Scratch register for software use; no hardware impact. */
#else /* Word 0 - Little Endian */
        uint64_t scratch               : 8;  /**< [  7:  0](R/W) Scratch register for software use; no hardware impact. */
        uint64_t reserved_8_63         : 56;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_ssow_af_scratch_aw_s cn; */
};
typedef union cavm_ssow_af_scratch_aw cavm_ssow_af_scratch_aw_t;

#define CAVM_SSOW_AF_SCRATCH_AW CAVM_SSOW_AF_SCRATCH_AW_FUNC()
static inline uint64_t CAVM_SSOW_AF_SCRATCH_AW_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_SSOW_AF_SCRATCH_AW_FUNC(void)
{
    return 0x840080300000ll;
}

#define typedef_CAVM_SSOW_AF_SCRATCH_AW cavm_ssow_af_scratch_aw_t
#define bustype_CAVM_SSOW_AF_SCRATCH_AW CSR_TYPE_RVU_PF_BAR0
#define basename_CAVM_SSOW_AF_SCRATCH_AW "SSOW_AF_SCRATCH_AW"
#define device_bar_CAVM_SSOW_AF_SCRATCH_AW 0x0 /* RVU_BAR0 */
#define busnum_CAVM_SSOW_AF_SCRATCH_AW 0
#define arguments_CAVM_SSOW_AF_SCRATCH_AW -1,-1,-1,-1

/**
 * Register (RVU_PF_BAR0) ssow_af_scratch_gw
 *
 * SSOW Scratch Register
 */
union cavm_ssow_af_scratch_gw
{
    uint64_t u;
    struct cavm_ssow_af_scratch_gw_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_8_63         : 56;
        uint64_t scratch               : 8;  /**< [  7:  0](R/W) Scratch register for software use; no hardware impact. */
#else /* Word 0 - Little Endian */
        uint64_t scratch               : 8;  /**< [  7:  0](R/W) Scratch register for software use; no hardware impact. */
        uint64_t reserved_8_63         : 56;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_ssow_af_scratch_gw_s cn; */
};
typedef union cavm_ssow_af_scratch_gw cavm_ssow_af_scratch_gw_t;

#define CAVM_SSOW_AF_SCRATCH_GW CAVM_SSOW_AF_SCRATCH_GW_FUNC()
static inline uint64_t CAVM_SSOW_AF_SCRATCH_GW_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_SSOW_AF_SCRATCH_GW_FUNC(void)
{
    return 0x840080200000ll;
}

#define typedef_CAVM_SSOW_AF_SCRATCH_GW cavm_ssow_af_scratch_gw_t
#define bustype_CAVM_SSOW_AF_SCRATCH_GW CSR_TYPE_RVU_PF_BAR0
#define basename_CAVM_SSOW_AF_SCRATCH_GW "SSOW_AF_SCRATCH_GW"
#define device_bar_CAVM_SSOW_AF_SCRATCH_GW 0x0 /* RVU_BAR0 */
#define busnum_CAVM_SSOW_AF_SCRATCH_GW 0
#define arguments_CAVM_SSOW_AF_SCRATCH_GW -1,-1,-1,-1

/**
 * Register (RVU_PF_BAR0) ssow_af_scratch_ws
 *
 * SSOW Scratch Register
 */
union cavm_ssow_af_scratch_ws
{
    uint64_t u;
    struct cavm_ssow_af_scratch_ws_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_8_63         : 56;
        uint64_t scratch               : 8;  /**< [  7:  0](R/W) Scratch register for software use; no hardware impact. */
#else /* Word 0 - Little Endian */
        uint64_t scratch               : 8;  /**< [  7:  0](R/W) Scratch register for software use; no hardware impact. */
        uint64_t reserved_8_63         : 56;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_ssow_af_scratch_ws_s cn; */
};
typedef union cavm_ssow_af_scratch_ws cavm_ssow_af_scratch_ws_t;

#define CAVM_SSOW_AF_SCRATCH_WS CAVM_SSOW_AF_SCRATCH_WS_FUNC()
static inline uint64_t CAVM_SSOW_AF_SCRATCH_WS_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_SSOW_AF_SCRATCH_WS_FUNC(void)
{
    return 0x840080100000ll;
}

#define typedef_CAVM_SSOW_AF_SCRATCH_WS cavm_ssow_af_scratch_ws_t
#define bustype_CAVM_SSOW_AF_SCRATCH_WS CSR_TYPE_RVU_PF_BAR0
#define basename_CAVM_SSOW_AF_SCRATCH_WS "SSOW_AF_SCRATCH_WS"
#define device_bar_CAVM_SSOW_AF_SCRATCH_WS 0x0 /* RVU_BAR0 */
#define busnum_CAVM_SSOW_AF_SCRATCH_WS 0
#define arguments_CAVM_SSOW_AF_SCRATCH_WS -1,-1,-1,-1

/**
 * Register (RVU_PFVF_BAR2) ssow_lf_gws_grpmsk_chg
 *
 * SSO Workslot LF Group-Mask Change Registers
 * This register changes which group or groups a GWS belongs to.  It
 * can change membership for up to four groups.
 */
union cavm_ssow_lf_gws_grpmsk_chg
{
    uint64_t u;
    struct cavm_ssow_lf_gws_grpmsk_chg_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t set3                  : 2;  /**< [ 63: 62](WO) Set/clear membership.
                                                                 0x0 = Disable this GWS's membership in the guest group [GGRP3].
                                                                 0x1 = Enable this GWS's membership in the guest group [GGRP3].
                                                                 0x2 = Do not set or clear any bits for [GGRP3].
                                                                 0x3 = Reserved.

                                                                 See [SET0] for more details. */
        uint64_t reserved_61           : 1;
        uint64_t mskset3               : 1;  /**< [ 60: 60](WO) Set number to enable/disable membership in for [GGRP3]. */
        uint64_t reserved_58_59        : 2;
        uint64_t ggrp3                 : 10; /**< [ 57: 48](WO) Second guest group number to enable/disable membership in.
                                                                 See [GGRP0]. */
        uint64_t set2                  : 2;  /**< [ 47: 46](WO) Set/clear membership.
                                                                 0x0 = Disable this GWS's membership in the guest group [GGRP2].
                                                                 0x1 = Enable this GWS's membership in the guest group [GGRP2].
                                                                 0x2 = Do not set or clear any bits for [GGRP2].
                                                                 0x3 = Reserved.

                                                                 See [SET0] for more details. */
        uint64_t reserved_45           : 1;
        uint64_t mskset2               : 1;  /**< [ 44: 44](WO) Set number to enable/disable membership in for [GGRP2]. */
        uint64_t reserved_42_43        : 2;
        uint64_t ggrp2                 : 10; /**< [ 41: 32](WO) Second guest group number to enable/disable membership in.
                                                                 See [GGRP0]. */
        uint64_t set1                  : 2;  /**< [ 31: 30](WO) Set/clear membership.
                                                                 0x0 = Disable this GWS's membership in the guest group [GGRP1].
                                                                 0x1 = Enable this GWS's membership in the guest group [GGRP1].
                                                                 0x2 = Do not set or clear any bits for [GGRP1].
                                                                 0x3 = Reserved.

                                                                 See [SET0] for more details. */
        uint64_t reserved_29           : 1;
        uint64_t mskset1               : 1;  /**< [ 28: 28](WO) Set number to enable/disable membership in for [GGRP1]. */
        uint64_t reserved_26_27        : 2;
        uint64_t ggrp1                 : 10; /**< [ 25: 16](WO) Second guest group number to enable/disable membership in.
                                                                 See [GGRP0]. */
        uint64_t set0                  : 2;  /**< [ 15: 14](WO) Set/clear membership.

                                                                 0x0 = Disable this GWS's membership in the guest group [GGRP0].  This
                                                                 clears the corresponding bit in
                                                                 SSO_AF_HWS(\<hws\>)_S(\<s\>)_GRPMSK(\<hwgrp\>), where \<hws\> is translated
                                                                 from PF,Func,Slot in the register address, \<s\> is from [MSKSET0], and
                                                                 \<hwgrp\> is a translated [GGRP0] (see [GGRP0] below).

                                                                 0x1 = Enable this GWS's membership in the guest group [GGRP0].  This sets
                                                                 the corresponding bit in SSO_AF_HWS(\<hws\>)_S(\<s\>)_GRPMSK(\<hwgrp\>).

                                                                 0x2 = Do not set or clear any bits for [GGRP0].

                                                                 0x3 = Reserved. */
        uint64_t reserved_13           : 1;
        uint64_t mskset0               : 1;  /**< [ 12: 12](WO) Set number to enable/diable membership in for [GGRP0]. */
        uint64_t reserved_10_11        : 2;
        uint64_t ggrp0                 : 10; /**< [  9:  0](WO) Guest group number 0 to enable/disable membership in.

                                                                 [GGRP0] is in the context of the PF_FUNC determined by this register's
                                                                 address and translated to a HWGRP based on SSO_PRIV_LF()_HWGRP_CFG. Each
                                                                 write to this register can require up to 4 translations.  Any translation
                                                                 that fails will set SSO_AF_ERR2[WS_GRP_UNMAP] or
                                                                 SSO_AF_ERR2[WS_GRP_MULTI] if the SETn field is 0x0 or 0x1 and will not
                                                                 modify any bits in SSO_AF_HWS()_S()_GRPMSK().  An error in one of the
                                                                 4 groups does not affect the others. */
#else /* Word 0 - Little Endian */
        uint64_t ggrp0                 : 10; /**< [  9:  0](WO) Guest group number 0 to enable/disable membership in.

                                                                 [GGRP0] is in the context of the PF_FUNC determined by this register's
                                                                 address and translated to a HWGRP based on SSO_PRIV_LF()_HWGRP_CFG. Each
                                                                 write to this register can require up to 4 translations.  Any translation
                                                                 that fails will set SSO_AF_ERR2[WS_GRP_UNMAP] or
                                                                 SSO_AF_ERR2[WS_GRP_MULTI] if the SETn field is 0x0 or 0x1 and will not
                                                                 modify any bits in SSO_AF_HWS()_S()_GRPMSK().  An error in one of the
                                                                 4 groups does not affect the others. */
        uint64_t reserved_10_11        : 2;
        uint64_t mskset0               : 1;  /**< [ 12: 12](WO) Set number to enable/diable membership in for [GGRP0]. */
        uint64_t reserved_13           : 1;
        uint64_t set0                  : 2;  /**< [ 15: 14](WO) Set/clear membership.

                                                                 0x0 = Disable this GWS's membership in the guest group [GGRP0].  This
                                                                 clears the corresponding bit in
                                                                 SSO_AF_HWS(\<hws\>)_S(\<s\>)_GRPMSK(\<hwgrp\>), where \<hws\> is translated
                                                                 from PF,Func,Slot in the register address, \<s\> is from [MSKSET0], and
                                                                 \<hwgrp\> is a translated [GGRP0] (see [GGRP0] below).

                                                                 0x1 = Enable this GWS's membership in the guest group [GGRP0].  This sets
                                                                 the corresponding bit in SSO_AF_HWS(\<hws\>)_S(\<s\>)_GRPMSK(\<hwgrp\>).

                                                                 0x2 = Do not set or clear any bits for [GGRP0].

                                                                 0x3 = Reserved. */
        uint64_t ggrp1                 : 10; /**< [ 25: 16](WO) Second guest group number to enable/disable membership in.
                                                                 See [GGRP0]. */
        uint64_t reserved_26_27        : 2;
        uint64_t mskset1               : 1;  /**< [ 28: 28](WO) Set number to enable/disable membership in for [GGRP1]. */
        uint64_t reserved_29           : 1;
        uint64_t set1                  : 2;  /**< [ 31: 30](WO) Set/clear membership.
                                                                 0x0 = Disable this GWS's membership in the guest group [GGRP1].
                                                                 0x1 = Enable this GWS's membership in the guest group [GGRP1].
                                                                 0x2 = Do not set or clear any bits for [GGRP1].
                                                                 0x3 = Reserved.

                                                                 See [SET0] for more details. */
        uint64_t ggrp2                 : 10; /**< [ 41: 32](WO) Second guest group number to enable/disable membership in.
                                                                 See [GGRP0]. */
        uint64_t reserved_42_43        : 2;
        uint64_t mskset2               : 1;  /**< [ 44: 44](WO) Set number to enable/disable membership in for [GGRP2]. */
        uint64_t reserved_45           : 1;
        uint64_t set2                  : 2;  /**< [ 47: 46](WO) Set/clear membership.
                                                                 0x0 = Disable this GWS's membership in the guest group [GGRP2].
                                                                 0x1 = Enable this GWS's membership in the guest group [GGRP2].
                                                                 0x2 = Do not set or clear any bits for [GGRP2].
                                                                 0x3 = Reserved.

                                                                 See [SET0] for more details. */
        uint64_t ggrp3                 : 10; /**< [ 57: 48](WO) Second guest group number to enable/disable membership in.
                                                                 See [GGRP0]. */
        uint64_t reserved_58_59        : 2;
        uint64_t mskset3               : 1;  /**< [ 60: 60](WO) Set number to enable/disable membership in for [GGRP3]. */
        uint64_t reserved_61           : 1;
        uint64_t set3                  : 2;  /**< [ 63: 62](WO) Set/clear membership.
                                                                 0x0 = Disable this GWS's membership in the guest group [GGRP3].
                                                                 0x1 = Enable this GWS's membership in the guest group [GGRP3].
                                                                 0x2 = Do not set or clear any bits for [GGRP3].
                                                                 0x3 = Reserved.

                                                                 See [SET0] for more details. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_ssow_lf_gws_grpmsk_chg_s cn; */
};
typedef union cavm_ssow_lf_gws_grpmsk_chg cavm_ssow_lf_gws_grpmsk_chg_t;

#define CAVM_SSOW_LF_GWS_GRPMSK_CHG CAVM_SSOW_LF_GWS_GRPMSK_CHG_FUNC()
static inline uint64_t CAVM_SSOW_LF_GWS_GRPMSK_CHG_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_SSOW_LF_GWS_GRPMSK_CHG_FUNC(void)
{
    return 0x840200800080ll;
}

#define typedef_CAVM_SSOW_LF_GWS_GRPMSK_CHG cavm_ssow_lf_gws_grpmsk_chg_t
#define bustype_CAVM_SSOW_LF_GWS_GRPMSK_CHG CSR_TYPE_RVU_PFVF_BAR2
#define basename_CAVM_SSOW_LF_GWS_GRPMSK_CHG "SSOW_LF_GWS_GRPMSK_CHG"
#define device_bar_CAVM_SSOW_LF_GWS_GRPMSK_CHG 0x2 /* RVU_BAR2 */
#define busnum_CAVM_SSOW_LF_GWS_GRPMSK_CHG 0
#define arguments_CAVM_SSOW_LF_GWS_GRPMSK_CHG -1,-1,-1,-1

/**
 * Register (RVU_PFVF_BAR2) ssow_lf_gws_int
 *
 * SSO Workslot LF Interrupt Register
 * Contains the per guest group interrupts and is used to clear these
 * interrupts.
 */
union cavm_ssow_lf_gws_int
{
    uint64_t u;
    struct cavm_ssow_lf_gws_int_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_14_63        : 50;
        uint64_t cpu_psn               : 1;  /**< [ 13: 13](R/W1C/H) Poison signaled on data. Generally indicates a hardware failure. */
        uint64_t illegal_slmtst        : 1;  /**< [ 12: 12](R/W1C/H) Received illegal Scheduled LMTST. */
        uint64_t swtag_dis             : 1;  /**< [ 11: 11](R/W1C/H) Received UPD_WQP_GRP/SWTAG_FULL/SWTAG_DESCH when SSO_AF_HWGRP()_AW_CFG[SWTAG_DIS] was set. */
        uint64_t illegal_ld            : 1;  /**< [ 10: 10](R/W1C/H) Received illegal load for workslot op. */
        uint64_t illegal_st            : 1;  /**< [  9:  9](R/W1C/H) Received illegal store for workslot op. */
        uint64_t wqp_space             : 1;  /**< [  8:  8](R/W1C/H) Received UPD_WQP_GRP referencing a different tag space than currently held by workslot. */
        uint64_t wqp0                  : 1;  /**< [  7:  7](R/W1C/H) Received UPD_WQP_GRP/SWTAG_FULL with WQP=0. */
        uint64_t reserved_4_6          : 3;
        uint64_t gw_pend               : 1;  /**< [  3:  3](R/W1C/H) Received SWTAG_NORM/SWTAG_UNTAG/SWTAG_FULL /SWTAG_FLUSH/SWTAG_DESCHED/DESCH
                                                                 /UPD_WQP_GRP/GET_WORK from workslot with GET_WORK pending. */
        uint64_t sw_empty              : 1;  /**< [  2:  2](R/W1C/H) Received SWTAG_NORM/SWTAG_FULL/SWTAG_DESCHED with tag specified as EMPTY. */
        uint64_t sw_pend               : 1;  /**< [  1:  1](R/W1C/H) Received SWTAG_NORM/SWTAG_UNTAG/SWTAG_FULL /SWTAG_FLUSH/SWTAG_DESCHED/GET_WORK
                                                                 from workslot with pending tag switch to ORDERED or ATOMIC. */
        uint64_t empty_ws              : 1;  /**< [  0:  0](R/W1C/H) Received SWTAG_NORM/SWTAG_UNTAG/SWTAG_FULL/SWTAG_FLUSH/SWTAG_DESCHED/DESCH/UPD_WQP_GRP from work
                                                                 slot in EMPTY state.
                                                                 Received SWITCH_ACTIVE for work slot in NON_EMPTY state. Can be triggered by a
                                                                 GGRP mapping error or a SWTAG_DIS eror on a SWTAG_DESCH with prefetching
                                                                 enabled. Inspect SSOW_LF_GWS_INT[SWTAG_DIS], SSO_AF_ERR2[WS_GRP_UNMAP] or
                                                                 SSO_AF_ERR2[WS_GRP_MULTI] and the associated DIGEST registers for more
                                                                 information. */
#else /* Word 0 - Little Endian */
        uint64_t empty_ws              : 1;  /**< [  0:  0](R/W1C/H) Received SWTAG_NORM/SWTAG_UNTAG/SWTAG_FULL/SWTAG_FLUSH/SWTAG_DESCHED/DESCH/UPD_WQP_GRP from work
                                                                 slot in EMPTY state.
                                                                 Received SWITCH_ACTIVE for work slot in NON_EMPTY state. Can be triggered by a
                                                                 GGRP mapping error or a SWTAG_DIS eror on a SWTAG_DESCH with prefetching
                                                                 enabled. Inspect SSOW_LF_GWS_INT[SWTAG_DIS], SSO_AF_ERR2[WS_GRP_UNMAP] or
                                                                 SSO_AF_ERR2[WS_GRP_MULTI] and the associated DIGEST registers for more
                                                                 information. */
        uint64_t sw_pend               : 1;  /**< [  1:  1](R/W1C/H) Received SWTAG_NORM/SWTAG_UNTAG/SWTAG_FULL /SWTAG_FLUSH/SWTAG_DESCHED/GET_WORK
                                                                 from workslot with pending tag switch to ORDERED or ATOMIC. */
        uint64_t sw_empty              : 1;  /**< [  2:  2](R/W1C/H) Received SWTAG_NORM/SWTAG_FULL/SWTAG_DESCHED with tag specified as EMPTY. */
        uint64_t gw_pend               : 1;  /**< [  3:  3](R/W1C/H) Received SWTAG_NORM/SWTAG_UNTAG/SWTAG_FULL /SWTAG_FLUSH/SWTAG_DESCHED/DESCH
                                                                 /UPD_WQP_GRP/GET_WORK from workslot with GET_WORK pending. */
        uint64_t reserved_4_6          : 3;
        uint64_t wqp0                  : 1;  /**< [  7:  7](R/W1C/H) Received UPD_WQP_GRP/SWTAG_FULL with WQP=0. */
        uint64_t wqp_space             : 1;  /**< [  8:  8](R/W1C/H) Received UPD_WQP_GRP referencing a different tag space than currently held by workslot. */
        uint64_t illegal_st            : 1;  /**< [  9:  9](R/W1C/H) Received illegal store for workslot op. */
        uint64_t illegal_ld            : 1;  /**< [ 10: 10](R/W1C/H) Received illegal load for workslot op. */
        uint64_t swtag_dis             : 1;  /**< [ 11: 11](R/W1C/H) Received UPD_WQP_GRP/SWTAG_FULL/SWTAG_DESCH when SSO_AF_HWGRP()_AW_CFG[SWTAG_DIS] was set. */
        uint64_t illegal_slmtst        : 1;  /**< [ 12: 12](R/W1C/H) Received illegal Scheduled LMTST. */
        uint64_t cpu_psn               : 1;  /**< [ 13: 13](R/W1C/H) Poison signaled on data. Generally indicates a hardware failure. */
        uint64_t reserved_14_63        : 50;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_ssow_lf_gws_int_s cn; */
};
typedef union cavm_ssow_lf_gws_int cavm_ssow_lf_gws_int_t;

#define CAVM_SSOW_LF_GWS_INT CAVM_SSOW_LF_GWS_INT_FUNC()
static inline uint64_t CAVM_SSOW_LF_GWS_INT_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_SSOW_LF_GWS_INT_FUNC(void)
{
    return 0x840200800100ll;
}

#define typedef_CAVM_SSOW_LF_GWS_INT cavm_ssow_lf_gws_int_t
#define bustype_CAVM_SSOW_LF_GWS_INT CSR_TYPE_RVU_PFVF_BAR2
#define basename_CAVM_SSOW_LF_GWS_INT "SSOW_LF_GWS_INT"
#define device_bar_CAVM_SSOW_LF_GWS_INT 0x2 /* RVU_BAR2 */
#define busnum_CAVM_SSOW_LF_GWS_INT 0
#define arguments_CAVM_SSOW_LF_GWS_INT -1,-1,-1,-1

/**
 * Register (RVU_PFVF_BAR2) ssow_lf_gws_int_ena_w1c
 *
 * SSO Workslot LF Interrupt Enable Clear Register
 * This register clears interrupt enable bits.
 */
union cavm_ssow_lf_gws_int_ena_w1c
{
    uint64_t u;
    struct cavm_ssow_lf_gws_int_ena_w1c_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_14_63        : 50;
        uint64_t cpu_psn               : 1;  /**< [ 13: 13](R/W1C/H) Reads or clears enable for SSOW_LF_GWS_INT[CPU_PSN]. */
        uint64_t illegal_slmtst        : 1;  /**< [ 12: 12](R/W1C/H) Reads or clears enable for SSOW_LF_GWS_INT[ILLEGAL_SLMTST]. */
        uint64_t swtag_dis             : 1;  /**< [ 11: 11](R/W1C/H) Reads or clears enable for SSOW_LF_GWS_INT[SWTAG_DIS]. */
        uint64_t illegal_ld            : 1;  /**< [ 10: 10](R/W1C/H) Reads or clears enable for SSOW_LF_GWS_INT[ILLEGAL_LD]. */
        uint64_t illegal_st            : 1;  /**< [  9:  9](R/W1C/H) Reads or clears enable for SSOW_LF_GWS_INT[ILLEGAL_ST]. */
        uint64_t wqp_space             : 1;  /**< [  8:  8](R/W1C/H) Reads or clears enable for SSOW_LF_GWS_INT[WQP_SPACE]. */
        uint64_t wqp0                  : 1;  /**< [  7:  7](R/W1C/H) Reads or clears enable for SSOW_LF_GWS_INT[WQP0]. */
        uint64_t reserved_4_6          : 3;
        uint64_t gw_pend               : 1;  /**< [  3:  3](R/W1C/H) Reads or clears enable for SSOW_LF_GWS_INT[GW_PEND]. */
        uint64_t sw_empty              : 1;  /**< [  2:  2](R/W1C/H) Reads or clears enable for SSOW_LF_GWS_INT[SW_EMPTY]. */
        uint64_t sw_pend               : 1;  /**< [  1:  1](R/W1C/H) Reads or clears enable for SSOW_LF_GWS_INT[SW_PEND]. */
        uint64_t empty_ws              : 1;  /**< [  0:  0](R/W1C/H) Reads or clears enable for SSOW_LF_GWS_INT[EMPTY_WS]. */
#else /* Word 0 - Little Endian */
        uint64_t empty_ws              : 1;  /**< [  0:  0](R/W1C/H) Reads or clears enable for SSOW_LF_GWS_INT[EMPTY_WS]. */
        uint64_t sw_pend               : 1;  /**< [  1:  1](R/W1C/H) Reads or clears enable for SSOW_LF_GWS_INT[SW_PEND]. */
        uint64_t sw_empty              : 1;  /**< [  2:  2](R/W1C/H) Reads or clears enable for SSOW_LF_GWS_INT[SW_EMPTY]. */
        uint64_t gw_pend               : 1;  /**< [  3:  3](R/W1C/H) Reads or clears enable for SSOW_LF_GWS_INT[GW_PEND]. */
        uint64_t reserved_4_6          : 3;
        uint64_t wqp0                  : 1;  /**< [  7:  7](R/W1C/H) Reads or clears enable for SSOW_LF_GWS_INT[WQP0]. */
        uint64_t wqp_space             : 1;  /**< [  8:  8](R/W1C/H) Reads or clears enable for SSOW_LF_GWS_INT[WQP_SPACE]. */
        uint64_t illegal_st            : 1;  /**< [  9:  9](R/W1C/H) Reads or clears enable for SSOW_LF_GWS_INT[ILLEGAL_ST]. */
        uint64_t illegal_ld            : 1;  /**< [ 10: 10](R/W1C/H) Reads or clears enable for SSOW_LF_GWS_INT[ILLEGAL_LD]. */
        uint64_t swtag_dis             : 1;  /**< [ 11: 11](R/W1C/H) Reads or clears enable for SSOW_LF_GWS_INT[SWTAG_DIS]. */
        uint64_t illegal_slmtst        : 1;  /**< [ 12: 12](R/W1C/H) Reads or clears enable for SSOW_LF_GWS_INT[ILLEGAL_SLMTST]. */
        uint64_t cpu_psn               : 1;  /**< [ 13: 13](R/W1C/H) Reads or clears enable for SSOW_LF_GWS_INT[CPU_PSN]. */
        uint64_t reserved_14_63        : 50;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_ssow_lf_gws_int_ena_w1c_s cn; */
};
typedef union cavm_ssow_lf_gws_int_ena_w1c cavm_ssow_lf_gws_int_ena_w1c_t;

#define CAVM_SSOW_LF_GWS_INT_ENA_W1C CAVM_SSOW_LF_GWS_INT_ENA_W1C_FUNC()
static inline uint64_t CAVM_SSOW_LF_GWS_INT_ENA_W1C_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_SSOW_LF_GWS_INT_ENA_W1C_FUNC(void)
{
    return 0x840200800118ll;
}

#define typedef_CAVM_SSOW_LF_GWS_INT_ENA_W1C cavm_ssow_lf_gws_int_ena_w1c_t
#define bustype_CAVM_SSOW_LF_GWS_INT_ENA_W1C CSR_TYPE_RVU_PFVF_BAR2
#define basename_CAVM_SSOW_LF_GWS_INT_ENA_W1C "SSOW_LF_GWS_INT_ENA_W1C"
#define device_bar_CAVM_SSOW_LF_GWS_INT_ENA_W1C 0x2 /* RVU_BAR2 */
#define busnum_CAVM_SSOW_LF_GWS_INT_ENA_W1C 0
#define arguments_CAVM_SSOW_LF_GWS_INT_ENA_W1C -1,-1,-1,-1

/**
 * Register (RVU_PFVF_BAR2) ssow_lf_gws_int_ena_w1s
 *
 * SSO Workslot LF Interrupt Enable Set Register
 * This register sets interrupt enable bits.
 */
union cavm_ssow_lf_gws_int_ena_w1s
{
    uint64_t u;
    struct cavm_ssow_lf_gws_int_ena_w1s_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_14_63        : 50;
        uint64_t cpu_psn               : 1;  /**< [ 13: 13](R/W1S/H) Reads or sets enable for SSOW_LF_GWS_INT[CPU_PSN]. */
        uint64_t illegal_slmtst        : 1;  /**< [ 12: 12](R/W1S/H) Reads or sets enable for SSOW_LF_GWS_INT[ILLEGAL_SLMTST]. */
        uint64_t swtag_dis             : 1;  /**< [ 11: 11](R/W1S/H) Reads or sets enable for SSOW_LF_GWS_INT[SWTAG_DIS]. */
        uint64_t illegal_ld            : 1;  /**< [ 10: 10](R/W1S/H) Reads or sets enable for SSOW_LF_GWS_INT[ILLEGAL_LD]. */
        uint64_t illegal_st            : 1;  /**< [  9:  9](R/W1S/H) Reads or sets enable for SSOW_LF_GWS_INT[ILLEGAL_ST]. */
        uint64_t wqp_space             : 1;  /**< [  8:  8](R/W1S/H) Reads or sets enable for SSOW_LF_GWS_INT[WQP_SPACE]. */
        uint64_t wqp0                  : 1;  /**< [  7:  7](R/W1S/H) Reads or sets enable for SSOW_LF_GWS_INT[WQP0]. */
        uint64_t reserved_4_6          : 3;
        uint64_t gw_pend               : 1;  /**< [  3:  3](R/W1S/H) Reads or sets enable for SSOW_LF_GWS_INT[GW_PEND]. */
        uint64_t sw_empty              : 1;  /**< [  2:  2](R/W1S/H) Reads or sets enable for SSOW_LF_GWS_INT[SW_EMPTY]. */
        uint64_t sw_pend               : 1;  /**< [  1:  1](R/W1S/H) Reads or sets enable for SSOW_LF_GWS_INT[SW_PEND]. */
        uint64_t empty_ws              : 1;  /**< [  0:  0](R/W1S/H) Reads or sets enable for SSOW_LF_GWS_INT[EMPTY_WS]. */
#else /* Word 0 - Little Endian */
        uint64_t empty_ws              : 1;  /**< [  0:  0](R/W1S/H) Reads or sets enable for SSOW_LF_GWS_INT[EMPTY_WS]. */
        uint64_t sw_pend               : 1;  /**< [  1:  1](R/W1S/H) Reads or sets enable for SSOW_LF_GWS_INT[SW_PEND]. */
        uint64_t sw_empty              : 1;  /**< [  2:  2](R/W1S/H) Reads or sets enable for SSOW_LF_GWS_INT[SW_EMPTY]. */
        uint64_t gw_pend               : 1;  /**< [  3:  3](R/W1S/H) Reads or sets enable for SSOW_LF_GWS_INT[GW_PEND]. */
        uint64_t reserved_4_6          : 3;
        uint64_t wqp0                  : 1;  /**< [  7:  7](R/W1S/H) Reads or sets enable for SSOW_LF_GWS_INT[WQP0]. */
        uint64_t wqp_space             : 1;  /**< [  8:  8](R/W1S/H) Reads or sets enable for SSOW_LF_GWS_INT[WQP_SPACE]. */
        uint64_t illegal_st            : 1;  /**< [  9:  9](R/W1S/H) Reads or sets enable for SSOW_LF_GWS_INT[ILLEGAL_ST]. */
        uint64_t illegal_ld            : 1;  /**< [ 10: 10](R/W1S/H) Reads or sets enable for SSOW_LF_GWS_INT[ILLEGAL_LD]. */
        uint64_t swtag_dis             : 1;  /**< [ 11: 11](R/W1S/H) Reads or sets enable for SSOW_LF_GWS_INT[SWTAG_DIS]. */
        uint64_t illegal_slmtst        : 1;  /**< [ 12: 12](R/W1S/H) Reads or sets enable for SSOW_LF_GWS_INT[ILLEGAL_SLMTST]. */
        uint64_t cpu_psn               : 1;  /**< [ 13: 13](R/W1S/H) Reads or sets enable for SSOW_LF_GWS_INT[CPU_PSN]. */
        uint64_t reserved_14_63        : 50;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_ssow_lf_gws_int_ena_w1s_s cn; */
};
typedef union cavm_ssow_lf_gws_int_ena_w1s cavm_ssow_lf_gws_int_ena_w1s_t;

#define CAVM_SSOW_LF_GWS_INT_ENA_W1S CAVM_SSOW_LF_GWS_INT_ENA_W1S_FUNC()
static inline uint64_t CAVM_SSOW_LF_GWS_INT_ENA_W1S_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_SSOW_LF_GWS_INT_ENA_W1S_FUNC(void)
{
    return 0x840200800110ll;
}

#define typedef_CAVM_SSOW_LF_GWS_INT_ENA_W1S cavm_ssow_lf_gws_int_ena_w1s_t
#define bustype_CAVM_SSOW_LF_GWS_INT_ENA_W1S CSR_TYPE_RVU_PFVF_BAR2
#define basename_CAVM_SSOW_LF_GWS_INT_ENA_W1S "SSOW_LF_GWS_INT_ENA_W1S"
#define device_bar_CAVM_SSOW_LF_GWS_INT_ENA_W1S 0x2 /* RVU_BAR2 */
#define busnum_CAVM_SSOW_LF_GWS_INT_ENA_W1S 0
#define arguments_CAVM_SSOW_LF_GWS_INT_ENA_W1S -1,-1,-1,-1

/**
 * Register (RVU_PFVF_BAR2) ssow_lf_gws_int_w1s
 *
 * SSO Workslot LF Interrupt Set Register
 * This register sets interrupt bits.
 */
union cavm_ssow_lf_gws_int_w1s
{
    uint64_t u;
    struct cavm_ssow_lf_gws_int_w1s_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_14_63        : 50;
        uint64_t cpu_psn               : 1;  /**< [ 13: 13](R/W1S/H) Reads or sets SSOW_LF_GWS_INT[CPU_PSN]. */
        uint64_t illegal_slmtst        : 1;  /**< [ 12: 12](R/W1S/H) Reads or sets SSOW_LF_GWS_INT[ILLEGAL_SLMTST]. */
        uint64_t swtag_dis             : 1;  /**< [ 11: 11](R/W1S/H) Reads or sets SSOW_LF_GWS_INT[SWTAG_DIS]. */
        uint64_t illegal_ld            : 1;  /**< [ 10: 10](R/W1S/H) Reads or sets SSOW_LF_GWS_INT[ILLEGAL_LD]. */
        uint64_t illegal_st            : 1;  /**< [  9:  9](R/W1S/H) Reads or sets SSOW_LF_GWS_INT[ILLEGAL_ST]. */
        uint64_t wqp_space             : 1;  /**< [  8:  8](R/W1S/H) Reads or sets SSOW_LF_GWS_INT[WQP_SPACE]. */
        uint64_t wqp0                  : 1;  /**< [  7:  7](R/W1S/H) Reads or sets SSOW_LF_GWS_INT[WQP0]. */
        uint64_t reserved_4_6          : 3;
        uint64_t gw_pend               : 1;  /**< [  3:  3](R/W1S/H) Reads or sets SSOW_LF_GWS_INT[GW_PEND]. */
        uint64_t sw_empty              : 1;  /**< [  2:  2](R/W1S/H) Reads or sets SSOW_LF_GWS_INT[SW_EMPTY]. */
        uint64_t sw_pend               : 1;  /**< [  1:  1](R/W1S/H) Reads or sets SSOW_LF_GWS_INT[SW_PEND]. */
        uint64_t empty_ws              : 1;  /**< [  0:  0](R/W1S/H) Reads or sets SSOW_LF_GWS_INT[EMPTY_WS]. */
#else /* Word 0 - Little Endian */
        uint64_t empty_ws              : 1;  /**< [  0:  0](R/W1S/H) Reads or sets SSOW_LF_GWS_INT[EMPTY_WS]. */
        uint64_t sw_pend               : 1;  /**< [  1:  1](R/W1S/H) Reads or sets SSOW_LF_GWS_INT[SW_PEND]. */
        uint64_t sw_empty              : 1;  /**< [  2:  2](R/W1S/H) Reads or sets SSOW_LF_GWS_INT[SW_EMPTY]. */
        uint64_t gw_pend               : 1;  /**< [  3:  3](R/W1S/H) Reads or sets SSOW_LF_GWS_INT[GW_PEND]. */
        uint64_t reserved_4_6          : 3;
        uint64_t wqp0                  : 1;  /**< [  7:  7](R/W1S/H) Reads or sets SSOW_LF_GWS_INT[WQP0]. */
        uint64_t wqp_space             : 1;  /**< [  8:  8](R/W1S/H) Reads or sets SSOW_LF_GWS_INT[WQP_SPACE]. */
        uint64_t illegal_st            : 1;  /**< [  9:  9](R/W1S/H) Reads or sets SSOW_LF_GWS_INT[ILLEGAL_ST]. */
        uint64_t illegal_ld            : 1;  /**< [ 10: 10](R/W1S/H) Reads or sets SSOW_LF_GWS_INT[ILLEGAL_LD]. */
        uint64_t swtag_dis             : 1;  /**< [ 11: 11](R/W1S/H) Reads or sets SSOW_LF_GWS_INT[SWTAG_DIS]. */
        uint64_t illegal_slmtst        : 1;  /**< [ 12: 12](R/W1S/H) Reads or sets SSOW_LF_GWS_INT[ILLEGAL_SLMTST]. */
        uint64_t cpu_psn               : 1;  /**< [ 13: 13](R/W1S/H) Reads or sets SSOW_LF_GWS_INT[CPU_PSN]. */
        uint64_t reserved_14_63        : 50;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_ssow_lf_gws_int_w1s_s cn; */
};
typedef union cavm_ssow_lf_gws_int_w1s cavm_ssow_lf_gws_int_w1s_t;

#define CAVM_SSOW_LF_GWS_INT_W1S CAVM_SSOW_LF_GWS_INT_W1S_FUNC()
static inline uint64_t CAVM_SSOW_LF_GWS_INT_W1S_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_SSOW_LF_GWS_INT_W1S_FUNC(void)
{
    return 0x840200800108ll;
}

#define typedef_CAVM_SSOW_LF_GWS_INT_W1S cavm_ssow_lf_gws_int_w1s_t
#define bustype_CAVM_SSOW_LF_GWS_INT_W1S CSR_TYPE_RVU_PFVF_BAR2
#define basename_CAVM_SSOW_LF_GWS_INT_W1S "SSOW_LF_GWS_INT_W1S"
#define device_bar_CAVM_SSOW_LF_GWS_INT_W1S 0x2 /* RVU_BAR2 */
#define busnum_CAVM_SSOW_LF_GWS_INT_W1S 0
#define arguments_CAVM_SSOW_LF_GWS_INT_W1S -1,-1,-1,-1

/**
 * Register (RVU_PFVF_BAR2) ssow_lf_gws_links
 *
 * SSO Workslot LF Links Status Registers
 * Returns status of each HWS.
 */
union cavm_ssow_lf_gws_links
{
    uint64_t u;
    struct cavm_ssow_lf_gws_links_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t tailc                 : 1;  /**< [ 63: 63](RO/H) Set when this SSO entry is the tail of the conflicted tail chain, and so there are no
                                                                 additional conflicts on this tag chain. */
        uint64_t reserved_62           : 1;
        uint64_t index                 : 14; /**< [ 61: 48](RO/H) The SSO entry attached to the GWS. */
        uint64_t reserved_43_47        : 5;
        uint64_t ggrp_err              : 1;  /**< [ 42: 42](RO/H) Indicates a guest group translation error. SSOW_LF_GWS_LINKS[GGRP] is invalid and will return 0. */
        uint64_t ggrp                  : 10; /**< [ 41: 32](RO/H) The guest group attached to the GWS (updated when new tag list entered on SWTAG_FULL).
                                                                 Translation is as described in SSOW_LF_GWS_TAG[GGRP]. */
        uint64_t head                  : 1;  /**< [ 31: 31](RO/H) Set when this SSO entry is at the head of its tag list or when in the UNTAGGED state. */
        uint64_t tail                  : 1;  /**< [ 30: 30](RO/H) Set when this SSO entry is at the tail of its tag list or when in the UNTAGGED state. */
        uint64_t reserved_0_29         : 30;
#else /* Word 0 - Little Endian */
        uint64_t reserved_0_29         : 30;
        uint64_t tail                  : 1;  /**< [ 30: 30](RO/H) Set when this SSO entry is at the tail of its tag list or when in the UNTAGGED state. */
        uint64_t head                  : 1;  /**< [ 31: 31](RO/H) Set when this SSO entry is at the head of its tag list or when in the UNTAGGED state. */
        uint64_t ggrp                  : 10; /**< [ 41: 32](RO/H) The guest group attached to the GWS (updated when new tag list entered on SWTAG_FULL).
                                                                 Translation is as described in SSOW_LF_GWS_TAG[GGRP]. */
        uint64_t ggrp_err              : 1;  /**< [ 42: 42](RO/H) Indicates a guest group translation error. SSOW_LF_GWS_LINKS[GGRP] is invalid and will return 0. */
        uint64_t reserved_43_47        : 5;
        uint64_t index                 : 14; /**< [ 61: 48](RO/H) The SSO entry attached to the GWS. */
        uint64_t reserved_62           : 1;
        uint64_t tailc                 : 1;  /**< [ 63: 63](RO/H) Set when this SSO entry is the tail of the conflicted tail chain, and so there are no
                                                                 additional conflicts on this tag chain. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_ssow_lf_gws_links_s cn; */
};
typedef union cavm_ssow_lf_gws_links cavm_ssow_lf_gws_links_t;

#define CAVM_SSOW_LF_GWS_LINKS CAVM_SSOW_LF_GWS_LINKS_FUNC()
static inline uint64_t CAVM_SSOW_LF_GWS_LINKS_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_SSOW_LF_GWS_LINKS_FUNC(void)
{
    return 0x840200800010ll;
}

#define typedef_CAVM_SSOW_LF_GWS_LINKS cavm_ssow_lf_gws_links_t
#define bustype_CAVM_SSOW_LF_GWS_LINKS CSR_TYPE_RVU_PFVF_BAR2
#define basename_CAVM_SSOW_LF_GWS_LINKS "SSOW_LF_GWS_LINKS"
#define device_bar_CAVM_SSOW_LF_GWS_LINKS 0x2 /* RVU_BAR2 */
#define busnum_CAVM_SSOW_LF_GWS_LINKS 0
#define arguments_CAVM_SSOW_LF_GWS_LINKS -1,-1,-1,-1

/**
 * Register (RVU_PFVF_BAR2) ssow_lf_gws_nw_tim
 *
 * SSOW LF New-Work and SWTP Timer Period Register
 */
union cavm_ssow_lf_gws_nw_tim
{
    uint64_t u;
    struct cavm_ssow_lf_gws_nw_tim_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_20_63        : 44;
        uint64_t swtp_tim              : 4;  /**< [ 19: 16](R/W) SWTAG pending-timer period. Delays the SWTP load response in the GWC.
                                                                 0x0 \>= 1us.
                                                                 0x1 \>= 2us.
                                                                 0x2 \>= 3us.
                                                                 _ ... etc. */
        uint64_t reserved_10_15        : 6;
        uint64_t nw_tim                : 10; /**< [  9:  0](R/W) New-work-timer period. Sets the minimum period for a new-work-request
                                                                 timeout. The period is specified in n-1 notation, with the increment value of
                                                                 1us.
                                                                 0x0 \>= 1us.
                                                                 0x1 \>= 2us.
                                                                 0x2 \>= 3us.
                                                                 _ ... etc. */
#else /* Word 0 - Little Endian */
        uint64_t nw_tim                : 10; /**< [  9:  0](R/W) New-work-timer period. Sets the minimum period for a new-work-request
                                                                 timeout. The period is specified in n-1 notation, with the increment value of
                                                                 1us.
                                                                 0x0 \>= 1us.
                                                                 0x1 \>= 2us.
                                                                 0x2 \>= 3us.
                                                                 _ ... etc. */
        uint64_t reserved_10_15        : 6;
        uint64_t swtp_tim              : 4;  /**< [ 19: 16](R/W) SWTAG pending-timer period. Delays the SWTP load response in the GWC.
                                                                 0x0 \>= 1us.
                                                                 0x1 \>= 2us.
                                                                 0x2 \>= 3us.
                                                                 _ ... etc. */
        uint64_t reserved_20_63        : 44;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_ssow_lf_gws_nw_tim_s cn; */
};
typedef union cavm_ssow_lf_gws_nw_tim cavm_ssow_lf_gws_nw_tim_t;

#define CAVM_SSOW_LF_GWS_NW_TIM CAVM_SSOW_LF_GWS_NW_TIM_FUNC()
static inline uint64_t CAVM_SSOW_LF_GWS_NW_TIM_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_SSOW_LF_GWS_NW_TIM_FUNC(void)
{
    return 0x840200800070ll;
}

#define typedef_CAVM_SSOW_LF_GWS_NW_TIM cavm_ssow_lf_gws_nw_tim_t
#define bustype_CAVM_SSOW_LF_GWS_NW_TIM CSR_TYPE_RVU_PFVF_BAR2
#define basename_CAVM_SSOW_LF_GWS_NW_TIM "SSOW_LF_GWS_NW_TIM"
#define device_bar_CAVM_SSOW_LF_GWS_NW_TIM 0x2 /* RVU_BAR2 */
#define busnum_CAVM_SSOW_LF_GWS_NW_TIM 0
#define arguments_CAVM_SSOW_LF_GWS_NW_TIM -1,-1,-1,-1

/**
 * Register (RVU_PFVF_BAR2) ssow_lf_gws_op_desched
 *
 * SSO Workslot LF Deschedule Operation Register
 * A write to this register performs a deschedule operation.
 */
union cavm_ssow_lf_gws_op_desched
{
    uint64_t u;
    struct cavm_ssow_lf_gws_op_desched_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_0_63         : 64;
#else /* Word 0 - Little Endian */
        uint64_t reserved_0_63         : 64;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_ssow_lf_gws_op_desched_s cn; */
};
typedef union cavm_ssow_lf_gws_op_desched cavm_ssow_lf_gws_op_desched_t;

#define CAVM_SSOW_LF_GWS_OP_DESCHED CAVM_SSOW_LF_GWS_OP_DESCHED_FUNC()
static inline uint64_t CAVM_SSOW_LF_GWS_OP_DESCHED_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_SSOW_LF_GWS_OP_DESCHED_FUNC(void)
{
    return 0x840200800880ll;
}

#define typedef_CAVM_SSOW_LF_GWS_OP_DESCHED cavm_ssow_lf_gws_op_desched_t
#define bustype_CAVM_SSOW_LF_GWS_OP_DESCHED CSR_TYPE_RVU_PFVF_BAR2
#define basename_CAVM_SSOW_LF_GWS_OP_DESCHED "SSOW_LF_GWS_OP_DESCHED"
#define device_bar_CAVM_SSOW_LF_GWS_OP_DESCHED 0x2 /* RVU_BAR2 */
#define busnum_CAVM_SSOW_LF_GWS_OP_DESCHED 0
#define arguments_CAVM_SSOW_LF_GWS_OP_DESCHED -1,-1,-1,-1

/**
 * Register (RVU_PFVF_BAR2) ssow_lf_gws_op_get_work0
 *
 * SSO Workslot LF Get-Work Operation Register 0
 * A 128-bit atomic compare and swap (CASP) may be used to SSOW_LF_GWS_OP_GET_WORK0
 * and SSOW_LF_GWS_OP_GET_WORK1. The compare data is ignored, swap data format
 * specified below, return data format is specified by SSOW_LF_GWS_WQE0 and
 * SSOW_LF_GWS_WQE1. CASP is not supported in the BAR2_ALIAS mode.
 *
 * A 64-bit write to this register initiates a GET_WORK operation. This is the only
 * access method supported in the BAR2_ALIAS mode.
 *
 * SSOW_LF_GWS_TAG[PEND_GET_WORK] will be set to one when the GET_WORK
 * operation is initiated, and it will be cleared when the GET_WORK
 * completes. The resulting work can be determined by reading the
 * SSOW_LF_GWS_TAG and SSOW_LF_GWS_WQP.
 *
 * When no work is available, SSOW_LF_GWS_TAG[TT]=SSO_TT_E::EMPTY, and
 * SSOW_LF_GWS_WQP[WQP] = 0x0.
 */
union cavm_ssow_lf_gws_op_get_work0
{
    uint64_t u;
    struct cavm_ssow_lf_gws_op_get_work0_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_21_63        : 43;
        uint64_t prf_wfe               : 1;  /**< [ 20: 20](WO) Prefetch Wait For Event Mode if prefetch is enabled via PRF set. */
        uint64_t prf                   : 1;  /**< [ 19: 19](WO) Request a Prefetch get work to follow the original get work request. */
        uint64_t grouped               : 1;  /**< [ 18: 18](WO) Get from a specific group number, specified in [GGRP_MASK]. */
        uint64_t reserved_17           : 1;
        uint64_t waitw                 : 1;  /**< [ 16: 16](WO) If set, wait for work; don't complete GET_WORK until work is available
                                                                 or timeout. */
        uint64_t reserved_8_15         : 8;
        uint64_t ggrp_mask             : 8;  /**< [  7:  0](WO) Guest group or masks.

                                                                 * If [GROUPED]=0, \<1:0\> indicates how to use the mask sets
                                                                 in SSO_AF_HWS()_S()_GRPMSK() (\<13:2\> are ignored):
                                                                 0x0 = use mask set 0 as high priority, and mask set 1 as lower priority if no groups
                                                                 satisfy mask set 0.
                                                                 0x1 = use mask set 0.
                                                                 0x2 = use mask set 1.
                                                                 0x3 = reserved, behaves as 0x0.

                                                                 * If [GROUPED] = 1, \<7:0\> provides the guest group number.

                                                                  o GGRP is translated to a hardware group as described in SSOW_LF_GWS_GRPMSK_CHG.
                                                                    If no match or a multi-match is found SSO_AF_ERR2[WS_UNMAP] or
                                                                    SSO_AF_ERR2[WS_MULTI] is set respectively and no-work is returned. */
#else /* Word 0 - Little Endian */
        uint64_t ggrp_mask             : 8;  /**< [  7:  0](WO) Guest group or masks.

                                                                 * If [GROUPED]=0, \<1:0\> indicates how to use the mask sets
                                                                 in SSO_AF_HWS()_S()_GRPMSK() (\<13:2\> are ignored):
                                                                 0x0 = use mask set 0 as high priority, and mask set 1 as lower priority if no groups
                                                                 satisfy mask set 0.
                                                                 0x1 = use mask set 0.
                                                                 0x2 = use mask set 1.
                                                                 0x3 = reserved, behaves as 0x0.

                                                                 * If [GROUPED] = 1, \<7:0\> provides the guest group number.

                                                                  o GGRP is translated to a hardware group as described in SSOW_LF_GWS_GRPMSK_CHG.
                                                                    If no match or a multi-match is found SSO_AF_ERR2[WS_UNMAP] or
                                                                    SSO_AF_ERR2[WS_MULTI] is set respectively and no-work is returned. */
        uint64_t reserved_8_15         : 8;
        uint64_t waitw                 : 1;  /**< [ 16: 16](WO) If set, wait for work; don't complete GET_WORK until work is available
                                                                 or timeout. */
        uint64_t reserved_17           : 1;
        uint64_t grouped               : 1;  /**< [ 18: 18](WO) Get from a specific group number, specified in [GGRP_MASK]. */
        uint64_t prf                   : 1;  /**< [ 19: 19](WO) Request a Prefetch get work to follow the original get work request. */
        uint64_t prf_wfe               : 1;  /**< [ 20: 20](WO) Prefetch Wait For Event Mode if prefetch is enabled via PRF set. */
        uint64_t reserved_21_63        : 43;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_ssow_lf_gws_op_get_work0_s cn; */
};
typedef union cavm_ssow_lf_gws_op_get_work0 cavm_ssow_lf_gws_op_get_work0_t;

#define CAVM_SSOW_LF_GWS_OP_GET_WORK0 CAVM_SSOW_LF_GWS_OP_GET_WORK0_FUNC()
static inline uint64_t CAVM_SSOW_LF_GWS_OP_GET_WORK0_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_SSOW_LF_GWS_OP_GET_WORK0_FUNC(void)
{
    return 0x840200800600ll;
}

#define typedef_CAVM_SSOW_LF_GWS_OP_GET_WORK0 cavm_ssow_lf_gws_op_get_work0_t
#define bustype_CAVM_SSOW_LF_GWS_OP_GET_WORK0 CSR_TYPE_RVU_PFVF_BAR2
#define basename_CAVM_SSOW_LF_GWS_OP_GET_WORK0 "SSOW_LF_GWS_OP_GET_WORK0"
#define device_bar_CAVM_SSOW_LF_GWS_OP_GET_WORK0 0x2 /* RVU_BAR2 */
#define busnum_CAVM_SSOW_LF_GWS_OP_GET_WORK0 0
#define arguments_CAVM_SSOW_LF_GWS_OP_GET_WORK0 -1,-1,-1,-1

/**
 * Register (RVU_PFVF_BAR2) ssow_lf_gws_op_get_work1
 *
 * SSO Workslot LF Get-Work Operation Register 1
 * A 128-bit atomic compare and swap (CASP) may be used to SSOW_LF_GWS_OP_GET_WORK0
 * and SSOW_LF_GWS_OP_GET_WORK1. The compare data is ignored, swap data format
 * specified below, return data format is specified by SSOW_LF_GWS_WQE0 and
 * SSOW_LF_GWS_WQE1.
 */
union cavm_ssow_lf_gws_op_get_work1
{
    uint64_t u;
    struct cavm_ssow_lf_gws_op_get_work1_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_0_63         : 64;
#else /* Word 0 - Little Endian */
        uint64_t reserved_0_63         : 64;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_ssow_lf_gws_op_get_work1_s cn; */
};
typedef union cavm_ssow_lf_gws_op_get_work1 cavm_ssow_lf_gws_op_get_work1_t;

#define CAVM_SSOW_LF_GWS_OP_GET_WORK1 CAVM_SSOW_LF_GWS_OP_GET_WORK1_FUNC()
static inline uint64_t CAVM_SSOW_LF_GWS_OP_GET_WORK1_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_SSOW_LF_GWS_OP_GET_WORK1_FUNC(void)
{
    return 0x840200800608ll;
}

#define typedef_CAVM_SSOW_LF_GWS_OP_GET_WORK1 cavm_ssow_lf_gws_op_get_work1_t
#define bustype_CAVM_SSOW_LF_GWS_OP_GET_WORK1 CSR_TYPE_RVU_PFVF_BAR2
#define basename_CAVM_SSOW_LF_GWS_OP_GET_WORK1 "SSOW_LF_GWS_OP_GET_WORK1"
#define device_bar_CAVM_SSOW_LF_GWS_OP_GET_WORK1 0x2 /* RVU_BAR2 */
#define busnum_CAVM_SSOW_LF_GWS_OP_GET_WORK1 0
#define arguments_CAVM_SSOW_LF_GWS_OP_GET_WORK1 -1,-1,-1,-1

/**
 * Register (RVU_PFVF_BAR2) ssow_lf_gws_op_gwc_inval
 *
 * SSO Workslot LF GW Cache Invalidate Operation Register
 * A write to this register invalidates all SSO register state cached inside
 * the local core. The invalidate only affects the core that executes the
 * write. The write data is ignored.
 */
union cavm_ssow_lf_gws_op_gwc_inval
{
    uint64_t u;
    struct cavm_ssow_lf_gws_op_gwc_inval_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_0_63         : 64;
#else /* Word 0 - Little Endian */
        uint64_t reserved_0_63         : 64;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_ssow_lf_gws_op_gwc_inval_s cn; */
};
typedef union cavm_ssow_lf_gws_op_gwc_inval cavm_ssow_lf_gws_op_gwc_inval_t;

#define CAVM_SSOW_LF_GWS_OP_GWC_INVAL CAVM_SSOW_LF_GWS_OP_GWC_INVAL_FUNC()
static inline uint64_t CAVM_SSOW_LF_GWS_OP_GWC_INVAL_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_SSOW_LF_GWS_OP_GWC_INVAL_FUNC(void)
{
    return 0x840200800e00ll;
}

#define typedef_CAVM_SSOW_LF_GWS_OP_GWC_INVAL cavm_ssow_lf_gws_op_gwc_inval_t
#define bustype_CAVM_SSOW_LF_GWS_OP_GWC_INVAL CSR_TYPE_RVU_PFVF_BAR2
#define basename_CAVM_SSOW_LF_GWS_OP_GWC_INVAL "SSOW_LF_GWS_OP_GWC_INVAL"
#define device_bar_CAVM_SSOW_LF_GWS_OP_GWC_INVAL 0x2 /* RVU_BAR2 */
#define busnum_CAVM_SSOW_LF_GWS_OP_GWC_INVAL 0
#define arguments_CAVM_SSOW_LF_GWS_OP_GWC_INVAL -1,-1,-1,-1

/**
 * Register (RVU_PFVF_BAR2) ssow_lf_gws_op_swtag_desched
 *
 * SSO Workslot LF Switch Tag Deschedule Operation Register
 * A write to this register performs a switch tag and a deschedule operation.
 */
union cavm_ssow_lf_gws_op_swtag_desched
{
    uint64_t u;
    struct cavm_ssow_lf_gws_op_swtag_desched_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_44_63        : 20;
        uint64_t ggrp                  : 10; /**< [ 43: 34](WO) Guest group that the work-queue entry will switch to. Translated as described
                                                                 in SSOW_LF_GWS_GRPMSK_CHG[GGRP0]. */
        uint64_t tt                    : 2;  /**< [ 33: 32](WO) The type of the tag, enumerated by SSO_TT_E. */
        uint64_t tag                   : 32; /**< [ 31:  0](WO) Tag to switch to. */
#else /* Word 0 - Little Endian */
        uint64_t tag                   : 32; /**< [ 31:  0](WO) Tag to switch to. */
        uint64_t tt                    : 2;  /**< [ 33: 32](WO) The type of the tag, enumerated by SSO_TT_E. */
        uint64_t ggrp                  : 10; /**< [ 43: 34](WO) Guest group that the work-queue entry will switch to. Translated as described
                                                                 in SSOW_LF_GWS_GRPMSK_CHG[GGRP0]. */
        uint64_t reserved_44_63        : 20;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_ssow_lf_gws_op_swtag_desched_s cn; */
};
typedef union cavm_ssow_lf_gws_op_swtag_desched cavm_ssow_lf_gws_op_swtag_desched_t;

#define CAVM_SSOW_LF_GWS_OP_SWTAG_DESCHED CAVM_SSOW_LF_GWS_OP_SWTAG_DESCHED_FUNC()
static inline uint64_t CAVM_SSOW_LF_GWS_OP_SWTAG_DESCHED_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_SSOW_LF_GWS_OP_SWTAG_DESCHED_FUNC(void)
{
    return 0x840200800980ll;
}

#define typedef_CAVM_SSOW_LF_GWS_OP_SWTAG_DESCHED cavm_ssow_lf_gws_op_swtag_desched_t
#define bustype_CAVM_SSOW_LF_GWS_OP_SWTAG_DESCHED CSR_TYPE_RVU_PFVF_BAR2
#define basename_CAVM_SSOW_LF_GWS_OP_SWTAG_DESCHED "SSOW_LF_GWS_OP_SWTAG_DESCHED"
#define device_bar_CAVM_SSOW_LF_GWS_OP_SWTAG_DESCHED 0x2 /* RVU_BAR2 */
#define busnum_CAVM_SSOW_LF_GWS_OP_SWTAG_DESCHED 0
#define arguments_CAVM_SSOW_LF_GWS_OP_SWTAG_DESCHED -1,-1,-1,-1

/**
 * Register (RVU_PFVF_BAR2) ssow_lf_gws_op_swtag_flush
 *
 * SSO Workslot LF Switch Tag Flush Register
 * A write to this register performs a switch tag to EMPTY.
 */
union cavm_ssow_lf_gws_op_swtag_flush
{
    uint64_t u;
    struct cavm_ssow_lf_gws_op_swtag_flush_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_0_63         : 64;
#else /* Word 0 - Little Endian */
        uint64_t reserved_0_63         : 64;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_ssow_lf_gws_op_swtag_flush_s cn; */
};
typedef union cavm_ssow_lf_gws_op_swtag_flush cavm_ssow_lf_gws_op_swtag_flush_t;

#define CAVM_SSOW_LF_GWS_OP_SWTAG_FLUSH CAVM_SSOW_LF_GWS_OP_SWTAG_FLUSH_FUNC()
static inline uint64_t CAVM_SSOW_LF_GWS_OP_SWTAG_FLUSH_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_SSOW_LF_GWS_OP_SWTAG_FLUSH_FUNC(void)
{
    return 0x840200800800ll;
}

#define typedef_CAVM_SSOW_LF_GWS_OP_SWTAG_FLUSH cavm_ssow_lf_gws_op_swtag_flush_t
#define bustype_CAVM_SSOW_LF_GWS_OP_SWTAG_FLUSH CSR_TYPE_RVU_PFVF_BAR2
#define basename_CAVM_SSOW_LF_GWS_OP_SWTAG_FLUSH "SSOW_LF_GWS_OP_SWTAG_FLUSH"
#define device_bar_CAVM_SSOW_LF_GWS_OP_SWTAG_FLUSH 0x2 /* RVU_BAR2 */
#define busnum_CAVM_SSOW_LF_GWS_OP_SWTAG_FLUSH 0
#define arguments_CAVM_SSOW_LF_GWS_OP_SWTAG_FLUSH -1,-1,-1,-1

/**
 * Register (RVU_PFVF_BAR2) ssow_lf_gws_op_swtag_full0
 *
 * SSO Workslot LF Switch Tag Full Operation Register 0
 * A 128-bit atomic compare and swap (CASP) must be used to SSOW_LF_GWS_OP_SWTAG_FULL0
 * and SSOW_LF_GWS_OP_SWTAG_FULL1 and performs a switch tag full operation.
 *
 * Since CASP to SSOW_LF_GWS_OP_SWTAG_FULL0 is not supported in BAR2_ALIAS mode a write
 * to SSOW_LF_GWS_OP_UPD_WQP_GRP0 and SSOW_LF_GWS_OP_UPD_WQP_GRP1 followed by a store
 * to SSOW_LF_GWS_OP_SWTAG_NORM should be used instead.
 */
union cavm_ssow_lf_gws_op_swtag_full0
{
    uint64_t u;
    struct cavm_ssow_lf_gws_op_swtag_full0_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_44_63        : 20;
        uint64_t ggrp                  : 10; /**< [ 43: 34](WO) Guest group that the work-queue entry will switch to. Translated as described
                                                                 in SSOW_LF_GWS_GRPMSK_CHG[GGRP0]. */
        uint64_t tt                    : 2;  /**< [ 33: 32](WO) The type of the tag, enumerated by SSO_TT_E. */
        uint64_t tag                   : 32; /**< [ 31:  0](WO) Tag to switch to. */
#else /* Word 0 - Little Endian */
        uint64_t tag                   : 32; /**< [ 31:  0](WO) Tag to switch to. */
        uint64_t tt                    : 2;  /**< [ 33: 32](WO) The type of the tag, enumerated by SSO_TT_E. */
        uint64_t ggrp                  : 10; /**< [ 43: 34](WO) Guest group that the work-queue entry will switch to. Translated as described
                                                                 in SSOW_LF_GWS_GRPMSK_CHG[GGRP0]. */
        uint64_t reserved_44_63        : 20;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_ssow_lf_gws_op_swtag_full0_s cn; */
};
typedef union cavm_ssow_lf_gws_op_swtag_full0 cavm_ssow_lf_gws_op_swtag_full0_t;

#define CAVM_SSOW_LF_GWS_OP_SWTAG_FULL0 CAVM_SSOW_LF_GWS_OP_SWTAG_FULL0_FUNC()
static inline uint64_t CAVM_SSOW_LF_GWS_OP_SWTAG_FULL0_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_SSOW_LF_GWS_OP_SWTAG_FULL0_FUNC(void)
{
    return 0x840200800c20ll;
}

#define typedef_CAVM_SSOW_LF_GWS_OP_SWTAG_FULL0 cavm_ssow_lf_gws_op_swtag_full0_t
#define bustype_CAVM_SSOW_LF_GWS_OP_SWTAG_FULL0 CSR_TYPE_RVU_PFVF_BAR2
#define basename_CAVM_SSOW_LF_GWS_OP_SWTAG_FULL0 "SSOW_LF_GWS_OP_SWTAG_FULL0"
#define device_bar_CAVM_SSOW_LF_GWS_OP_SWTAG_FULL0 0x2 /* RVU_BAR2 */
#define busnum_CAVM_SSOW_LF_GWS_OP_SWTAG_FULL0 0
#define arguments_CAVM_SSOW_LF_GWS_OP_SWTAG_FULL0 -1,-1,-1,-1

/**
 * Register (RVU_PFVF_BAR2) ssow_lf_gws_op_swtag_full1
 *
 * SSO Workslot LF Switch Tag Full Operation Register 1
 * A 128-bit atomic compare and swap (CASP) must be used to SSOW_LF_GWS_OP_SWTAG_FULL0
 * and SSOW_LF_GWS_OP_SWTAG_FULL1 and performs a switch tag full operation.
 */
union cavm_ssow_lf_gws_op_swtag_full1
{
    uint64_t u;
    struct cavm_ssow_lf_gws_op_swtag_full1_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t wqp                   : 64; /**< [ 63:  0](WO) IOVA of the work-queue entry to switch to.
                                                                 Bits \<63:53\> and \<2:0\> are ignored. */
#else /* Word 0 - Little Endian */
        uint64_t wqp                   : 64; /**< [ 63:  0](WO) IOVA of the work-queue entry to switch to.
                                                                 Bits \<63:53\> and \<2:0\> are ignored. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_ssow_lf_gws_op_swtag_full1_s cn; */
};
typedef union cavm_ssow_lf_gws_op_swtag_full1 cavm_ssow_lf_gws_op_swtag_full1_t;

#define CAVM_SSOW_LF_GWS_OP_SWTAG_FULL1 CAVM_SSOW_LF_GWS_OP_SWTAG_FULL1_FUNC()
static inline uint64_t CAVM_SSOW_LF_GWS_OP_SWTAG_FULL1_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_SSOW_LF_GWS_OP_SWTAG_FULL1_FUNC(void)
{
    return 0x840200800c28ll;
}

#define typedef_CAVM_SSOW_LF_GWS_OP_SWTAG_FULL1 cavm_ssow_lf_gws_op_swtag_full1_t
#define bustype_CAVM_SSOW_LF_GWS_OP_SWTAG_FULL1 CSR_TYPE_RVU_PFVF_BAR2
#define basename_CAVM_SSOW_LF_GWS_OP_SWTAG_FULL1 "SSOW_LF_GWS_OP_SWTAG_FULL1"
#define device_bar_CAVM_SSOW_LF_GWS_OP_SWTAG_FULL1 0x2 /* RVU_BAR2 */
#define busnum_CAVM_SSOW_LF_GWS_OP_SWTAG_FULL1 0
#define arguments_CAVM_SSOW_LF_GWS_OP_SWTAG_FULL1 -1,-1,-1,-1

/**
 * Register (RVU_PFVF_BAR2) ssow_lf_gws_op_swtag_norm
 *
 * SSO Workslot LF Switch Tag Normal Operation Register
 * A write to this register performs a switch tag.
 */
union cavm_ssow_lf_gws_op_swtag_norm
{
    uint64_t u;
    struct cavm_ssow_lf_gws_op_swtag_norm_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_34_63        : 30;
        uint64_t tt                    : 2;  /**< [ 33: 32](WO) The type of the tag, enumerated by SSO_TT_E. */
        uint64_t tag                   : 32; /**< [ 31:  0](WO) Tag to switch to. */
#else /* Word 0 - Little Endian */
        uint64_t tag                   : 32; /**< [ 31:  0](WO) Tag to switch to. */
        uint64_t tt                    : 2;  /**< [ 33: 32](WO) The type of the tag, enumerated by SSO_TT_E. */
        uint64_t reserved_34_63        : 30;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_ssow_lf_gws_op_swtag_norm_s cn; */
};
typedef union cavm_ssow_lf_gws_op_swtag_norm cavm_ssow_lf_gws_op_swtag_norm_t;

#define CAVM_SSOW_LF_GWS_OP_SWTAG_NORM CAVM_SSOW_LF_GWS_OP_SWTAG_NORM_FUNC()
static inline uint64_t CAVM_SSOW_LF_GWS_OP_SWTAG_NORM_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_SSOW_LF_GWS_OP_SWTAG_NORM_FUNC(void)
{
    return 0x840200800c10ll;
}

#define typedef_CAVM_SSOW_LF_GWS_OP_SWTAG_NORM cavm_ssow_lf_gws_op_swtag_norm_t
#define bustype_CAVM_SSOW_LF_GWS_OP_SWTAG_NORM CSR_TYPE_RVU_PFVF_BAR2
#define basename_CAVM_SSOW_LF_GWS_OP_SWTAG_NORM "SSOW_LF_GWS_OP_SWTAG_NORM"
#define device_bar_CAVM_SSOW_LF_GWS_OP_SWTAG_NORM 0x2 /* RVU_BAR2 */
#define busnum_CAVM_SSOW_LF_GWS_OP_SWTAG_NORM 0
#define arguments_CAVM_SSOW_LF_GWS_OP_SWTAG_NORM -1,-1,-1,-1

/**
 * Register (RVU_PFVF_BAR2) ssow_lf_gws_op_swtag_untag
 *
 * SSO Workslot LF Switch Tag Untagged Operation Register
 * A write to this register performs a switch tag to UNTAGGED.
 */
union cavm_ssow_lf_gws_op_swtag_untag
{
    uint64_t u;
    struct cavm_ssow_lf_gws_op_swtag_untag_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_0_63         : 64;
#else /* Word 0 - Little Endian */
        uint64_t reserved_0_63         : 64;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_ssow_lf_gws_op_swtag_untag_s cn; */
};
typedef union cavm_ssow_lf_gws_op_swtag_untag cavm_ssow_lf_gws_op_swtag_untag_t;

#define CAVM_SSOW_LF_GWS_OP_SWTAG_UNTAG CAVM_SSOW_LF_GWS_OP_SWTAG_UNTAG_FUNC()
static inline uint64_t CAVM_SSOW_LF_GWS_OP_SWTAG_UNTAG_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_SSOW_LF_GWS_OP_SWTAG_UNTAG_FUNC(void)
{
    return 0x840200800810ll;
}

#define typedef_CAVM_SSOW_LF_GWS_OP_SWTAG_UNTAG cavm_ssow_lf_gws_op_swtag_untag_t
#define bustype_CAVM_SSOW_LF_GWS_OP_SWTAG_UNTAG CSR_TYPE_RVU_PFVF_BAR2
#define basename_CAVM_SSOW_LF_GWS_OP_SWTAG_UNTAG "SSOW_LF_GWS_OP_SWTAG_UNTAG"
#define device_bar_CAVM_SSOW_LF_GWS_OP_SWTAG_UNTAG 0x2 /* RVU_BAR2 */
#define busnum_CAVM_SSOW_LF_GWS_OP_SWTAG_UNTAG 0
#define arguments_CAVM_SSOW_LF_GWS_OP_SWTAG_UNTAG -1,-1,-1,-1

/**
 * Register (RVU_PFVF_BAR2) ssow_lf_gws_op_upd_wqp_grp0
 *
 * SSO Workslot LF Update WQP/Group Operation Register 0
 * A 64-bit write to this register updates the group.
 *
 * A 128-bit store (STP) to SSOW_LF_GWS_OP_UPD_WQP_GRP0 and
 * SSOW_LF_GWS_OP_UPD_WQP_GRP1 may be used to update both the WQP and group.
 */
union cavm_ssow_lf_gws_op_upd_wqp_grp0
{
    uint64_t u;
    struct cavm_ssow_lf_gws_op_upd_wqp_grp0_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_44_63        : 20;
        uint64_t ggrp                  : 10; /**< [ 43: 34](WO) Guest group that the work-queue entry will switch to. Translated as described
                                                                 in SSOW_LF_GWS_GRPMSK_CHG[GGRP0]. */
        uint64_t reserved_0_33         : 34;
#else /* Word 0 - Little Endian */
        uint64_t reserved_0_33         : 34;
        uint64_t ggrp                  : 10; /**< [ 43: 34](WO) Guest group that the work-queue entry will switch to. Translated as described
                                                                 in SSOW_LF_GWS_GRPMSK_CHG[GGRP0]. */
        uint64_t reserved_44_63        : 20;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_ssow_lf_gws_op_upd_wqp_grp0_s cn; */
};
typedef union cavm_ssow_lf_gws_op_upd_wqp_grp0 cavm_ssow_lf_gws_op_upd_wqp_grp0_t;

#define CAVM_SSOW_LF_GWS_OP_UPD_WQP_GRP0 CAVM_SSOW_LF_GWS_OP_UPD_WQP_GRP0_FUNC()
static inline uint64_t CAVM_SSOW_LF_GWS_OP_UPD_WQP_GRP0_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_SSOW_LF_GWS_OP_UPD_WQP_GRP0_FUNC(void)
{
    return 0x840200800830ll;
}

#define typedef_CAVM_SSOW_LF_GWS_OP_UPD_WQP_GRP0 cavm_ssow_lf_gws_op_upd_wqp_grp0_t
#define bustype_CAVM_SSOW_LF_GWS_OP_UPD_WQP_GRP0 CSR_TYPE_RVU_PFVF_BAR2
#define basename_CAVM_SSOW_LF_GWS_OP_UPD_WQP_GRP0 "SSOW_LF_GWS_OP_UPD_WQP_GRP0"
#define device_bar_CAVM_SSOW_LF_GWS_OP_UPD_WQP_GRP0 0x2 /* RVU_BAR2 */
#define busnum_CAVM_SSOW_LF_GWS_OP_UPD_WQP_GRP0 0
#define arguments_CAVM_SSOW_LF_GWS_OP_UPD_WQP_GRP0 -1,-1,-1,-1

/**
 * Register (RVU_PFVF_BAR2) ssow_lf_gws_op_upd_wqp_grp1
 *
 * SSO Workslot LF Update WQP/Group Operation Register 1
 * A 64-bit write to this register updates the WQP.
 *
 * A 128-bit store (STP) to SSOW_LF_GWS_OP_UPD_WQP_GRP0 and
 * SSOW_LF_GWS_OP_UPD_WQP_GRP1 may be used to update both the WQP and group.
 */
union cavm_ssow_lf_gws_op_upd_wqp_grp1
{
    uint64_t u;
    struct cavm_ssow_lf_gws_op_upd_wqp_grp1_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t wqp                   : 64; /**< [ 63:  0](WO) IOVA of the work-queue entry to switch to.
                                                                 Bits \<63:53\> and \<2:0\> are ignored. */
#else /* Word 0 - Little Endian */
        uint64_t wqp                   : 64; /**< [ 63:  0](WO) IOVA of the work-queue entry to switch to.
                                                                 Bits \<63:53\> and \<2:0\> are ignored. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_ssow_lf_gws_op_upd_wqp_grp1_s cn; */
};
typedef union cavm_ssow_lf_gws_op_upd_wqp_grp1 cavm_ssow_lf_gws_op_upd_wqp_grp1_t;

#define CAVM_SSOW_LF_GWS_OP_UPD_WQP_GRP1 CAVM_SSOW_LF_GWS_OP_UPD_WQP_GRP1_FUNC()
static inline uint64_t CAVM_SSOW_LF_GWS_OP_UPD_WQP_GRP1_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_SSOW_LF_GWS_OP_UPD_WQP_GRP1_FUNC(void)
{
    return 0x840200800838ll;
}

#define typedef_CAVM_SSOW_LF_GWS_OP_UPD_WQP_GRP1 cavm_ssow_lf_gws_op_upd_wqp_grp1_t
#define bustype_CAVM_SSOW_LF_GWS_OP_UPD_WQP_GRP1 CSR_TYPE_RVU_PFVF_BAR2
#define basename_CAVM_SSOW_LF_GWS_OP_UPD_WQP_GRP1 "SSOW_LF_GWS_OP_UPD_WQP_GRP1"
#define device_bar_CAVM_SSOW_LF_GWS_OP_UPD_WQP_GRP1 0x2 /* RVU_BAR2 */
#define busnum_CAVM_SSOW_LF_GWS_OP_UPD_WQP_GRP1 0
#define arguments_CAVM_SSOW_LF_GWS_OP_UPD_WQP_GRP1 -1,-1,-1,-1

/**
 * Register (RVU_PFVF_BAR2) ssow_lf_gws_pendstate
 *
 * SSO Workslot LF Pending Status Registers
 * Returns status of each GWS.
 *
 * IMPORTANT: Unlike SSOW_LF_GWS_PENDTAG, the state of this register is never
 * cached inside a core.
 */
union cavm_ssow_lf_gws_pendstate
{
    uint64_t u;
    struct cavm_ssow_lf_gws_pendstate_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t pend_get_work         : 1;  /**< [ 63: 63](RO/H) Set when there is a pending GET_WORK. */
        uint64_t pend_switch           : 1;  /**< [ 62: 62](RO/H) Set when there is a pending SWTAG, SWTAG_DESCHED, or SWTAG_FULL. */
        uint64_t pend_get_work_wait    : 1;  /**< [ 61: 61](RO/H) When [PEND_GET_WORK] is set, indicates that the WAITW bit was set. */
        uint64_t reserved_59_60        : 2;
        uint64_t pend_desched          : 1;  /**< [ 58: 58](RO/H) Set when there is a pending DESCHED or SWTAG_DESCHED. */
        uint64_t reserved_57           : 1;
        uint64_t pend_flush            : 1;  /**< [ 56: 56](RO/H) Set when there is a pending SWTAG_FLUSH. */
        uint64_t reserved_55           : 1;
        uint64_t pend_swunt            : 1;  /**< [ 54: 54](RO/H) Set when there is a pending SWTAG_UNTAG or SWTAG_NORM/SWTAG_FULL with TT of UNTAGGED. */
        uint64_t reserved_34_53        : 20;
        uint64_t pend_tt               : 2;  /**< [ 33: 32](RO/H) The tag type when [PEND_SWITCH] is set and [PEND_GET_WORK] is clear. */
        uint64_t pend_tag              : 32; /**< [ 31:  0](RO/H) The tag when [PEND_SWITCH] is set and [PEND_GET_WORK] is clear. */
#else /* Word 0 - Little Endian */
        uint64_t pend_tag              : 32; /**< [ 31:  0](RO/H) The tag when [PEND_SWITCH] is set and [PEND_GET_WORK] is clear. */
        uint64_t pend_tt               : 2;  /**< [ 33: 32](RO/H) The tag type when [PEND_SWITCH] is set and [PEND_GET_WORK] is clear. */
        uint64_t reserved_34_53        : 20;
        uint64_t pend_swunt            : 1;  /**< [ 54: 54](RO/H) Set when there is a pending SWTAG_UNTAG or SWTAG_NORM/SWTAG_FULL with TT of UNTAGGED. */
        uint64_t reserved_55           : 1;
        uint64_t pend_flush            : 1;  /**< [ 56: 56](RO/H) Set when there is a pending SWTAG_FLUSH. */
        uint64_t reserved_57           : 1;
        uint64_t pend_desched          : 1;  /**< [ 58: 58](RO/H) Set when there is a pending DESCHED or SWTAG_DESCHED. */
        uint64_t reserved_59_60        : 2;
        uint64_t pend_get_work_wait    : 1;  /**< [ 61: 61](RO/H) When [PEND_GET_WORK] is set, indicates that the WAITW bit was set. */
        uint64_t pend_switch           : 1;  /**< [ 62: 62](RO/H) Set when there is a pending SWTAG, SWTAG_DESCHED, or SWTAG_FULL. */
        uint64_t pend_get_work         : 1;  /**< [ 63: 63](RO/H) Set when there is a pending GET_WORK. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_ssow_lf_gws_pendstate_s cn; */
};
typedef union cavm_ssow_lf_gws_pendstate cavm_ssow_lf_gws_pendstate_t;

#define CAVM_SSOW_LF_GWS_PENDSTATE CAVM_SSOW_LF_GWS_PENDSTATE_FUNC()
static inline uint64_t CAVM_SSOW_LF_GWS_PENDSTATE_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_SSOW_LF_GWS_PENDSTATE_FUNC(void)
{
    return 0x840200800050ll;
}

#define typedef_CAVM_SSOW_LF_GWS_PENDSTATE cavm_ssow_lf_gws_pendstate_t
#define bustype_CAVM_SSOW_LF_GWS_PENDSTATE CSR_TYPE_RVU_PFVF_BAR2
#define basename_CAVM_SSOW_LF_GWS_PENDSTATE "SSOW_LF_GWS_PENDSTATE"
#define device_bar_CAVM_SSOW_LF_GWS_PENDSTATE 0x2 /* RVU_BAR2 */
#define busnum_CAVM_SSOW_LF_GWS_PENDSTATE 0
#define arguments_CAVM_SSOW_LF_GWS_PENDSTATE -1,-1,-1,-1

/**
 * Register (RVU_PFVF_BAR2) ssow_lf_gws_pendtag
 *
 * SSO Workslot LF Pending Tag Status Registers
 * Returns status of each GWS.
 *
 * IMPORTANT: Although this register is located in SSO I/O address space, the state of
 * this register is cached inside the cores, and so loads to this register can
 * typically be returned with L1Dcache-like timing.
 */
union cavm_ssow_lf_gws_pendtag
{
    uint64_t u;
    struct cavm_ssow_lf_gws_pendtag_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t pend_get_work         : 1;  /**< [ 63: 63](RO/H) Set when there is a pending GET_WORK. */
        uint64_t pend_switch           : 1;  /**< [ 62: 62](RO/H) Set when there is a pending SWTAG, SWTAG_DESCHED, or SWTAG_FULL. */
        uint64_t reserved_34_61        : 28;
        uint64_t pend_tt               : 2;  /**< [ 33: 32](RO/H) The tag type when [PEND_SWITCH] is set. */
        uint64_t pend_tag              : 32; /**< [ 31:  0](RO/H) The tag when [PEND_SWITCH] is set. */
#else /* Word 0 - Little Endian */
        uint64_t pend_tag              : 32; /**< [ 31:  0](RO/H) The tag when [PEND_SWITCH] is set. */
        uint64_t pend_tt               : 2;  /**< [ 33: 32](RO/H) The tag type when [PEND_SWITCH] is set. */
        uint64_t reserved_34_61        : 28;
        uint64_t pend_switch           : 1;  /**< [ 62: 62](RO/H) Set when there is a pending SWTAG, SWTAG_DESCHED, or SWTAG_FULL. */
        uint64_t pend_get_work         : 1;  /**< [ 63: 63](RO/H) Set when there is a pending GET_WORK. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_ssow_lf_gws_pendtag_s cn; */
};
typedef union cavm_ssow_lf_gws_pendtag cavm_ssow_lf_gws_pendtag_t;

#define CAVM_SSOW_LF_GWS_PENDTAG CAVM_SSOW_LF_GWS_PENDTAG_FUNC()
static inline uint64_t CAVM_SSOW_LF_GWS_PENDTAG_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_SSOW_LF_GWS_PENDTAG_FUNC(void)
{
    return 0x840200800230ll;
}

#define typedef_CAVM_SSOW_LF_GWS_PENDTAG cavm_ssow_lf_gws_pendtag_t
#define bustype_CAVM_SSOW_LF_GWS_PENDTAG CSR_TYPE_RVU_PFVF_BAR2
#define basename_CAVM_SSOW_LF_GWS_PENDTAG "SSOW_LF_GWS_PENDTAG"
#define device_bar_CAVM_SSOW_LF_GWS_PENDTAG 0x2 /* RVU_BAR2 */
#define busnum_CAVM_SSOW_LF_GWS_PENDTAG 0
#define arguments_CAVM_SSOW_LF_GWS_PENDTAG -1,-1,-1,-1

/**
 * Register (RVU_PFVF_BAR2) ssow_lf_gws_prf_tag
 *
 * SSO Workslot LF Prefetch Tag Status Registers
 * Returns status of Prefetch slot of each GWS.
 *
 * IMPORTANT: Although this register is located in SSO I/O address space, the state of
 * this register is cached inside the cores, and so loads to this register can
 * typically be returned with L1Dcache-like timing.
 */
union cavm_ssow_lf_gws_prf_tag
{
    uint64_t u;
    struct cavm_ssow_lf_gws_prf_tag_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t pend_get_work         : 1;  /**< [ 63: 63](RO/H) Set when there is a pending GET_WORK. */
        uint64_t pend_switch           : 1;  /**< [ 62: 62](RO/H) Set when there is a pending SWTAG operation. */
        uint64_t reserved_54_61        : 8;
        uint64_t lsw_used              : 1;  /**< [ 53: 53](RO/H) LSW entry has been used by a Scheduled LMTST. */
        uint64_t has_lsw               : 1;  /**< [ 52: 52](RO/H) GWS has valid LSW entry assigned. */
        uint64_t reserved_46_51        : 6;
        uint64_t ggrp                  : 10; /**< [ 45: 36](RO/H) The guest group attached to the GWS (updated when new tag list entered on SWTAG_FULL). */
        uint64_t head                  : 1;  /**< [ 35: 35](RO/H) Set when this SSO entry is at the head of its tag list or when in the UNTAGGED state. */
        uint64_t dq                    : 1;  /**< [ 34: 34](RO/H) Set when this entry came off the DQ. */
        uint64_t tt                    : 2;  /**< [ 33: 32](RO/H) The tag type attached to the GWS (updated when new tag list entered on SWTAG, SWTAG_FULL,
                                                                 or SWTAG_DESCHED.) Enumerated by SSO_TT_E. */
        uint64_t tag                   : 32; /**< [ 31:  0](RO/H) The tag attached to the GWS (updated when new tag list entered on SWTAG, SWTAG_FULL, or
                                                                 SWTAG_DESCHED.) */
#else /* Word 0 - Little Endian */
        uint64_t tag                   : 32; /**< [ 31:  0](RO/H) The tag attached to the GWS (updated when new tag list entered on SWTAG, SWTAG_FULL, or
                                                                 SWTAG_DESCHED.) */
        uint64_t tt                    : 2;  /**< [ 33: 32](RO/H) The tag type attached to the GWS (updated when new tag list entered on SWTAG, SWTAG_FULL,
                                                                 or SWTAG_DESCHED.) Enumerated by SSO_TT_E. */
        uint64_t dq                    : 1;  /**< [ 34: 34](RO/H) Set when this entry came off the DQ. */
        uint64_t head                  : 1;  /**< [ 35: 35](RO/H) Set when this SSO entry is at the head of its tag list or when in the UNTAGGED state. */
        uint64_t ggrp                  : 10; /**< [ 45: 36](RO/H) The guest group attached to the GWS (updated when new tag list entered on SWTAG_FULL). */
        uint64_t reserved_46_51        : 6;
        uint64_t has_lsw               : 1;  /**< [ 52: 52](RO/H) GWS has valid LSW entry assigned. */
        uint64_t lsw_used              : 1;  /**< [ 53: 53](RO/H) LSW entry has been used by a Scheduled LMTST. */
        uint64_t reserved_54_61        : 8;
        uint64_t pend_switch           : 1;  /**< [ 62: 62](RO/H) Set when there is a pending SWTAG operation. */
        uint64_t pend_get_work         : 1;  /**< [ 63: 63](RO/H) Set when there is a pending GET_WORK. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_ssow_lf_gws_prf_tag_s cn; */
};
typedef union cavm_ssow_lf_gws_prf_tag cavm_ssow_lf_gws_prf_tag_t;

#define CAVM_SSOW_LF_GWS_PRF_TAG CAVM_SSOW_LF_GWS_PRF_TAG_FUNC()
static inline uint64_t CAVM_SSOW_LF_GWS_PRF_TAG_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_SSOW_LF_GWS_PRF_TAG_FUNC(void)
{
    return 0x840200800400ll;
}

#define typedef_CAVM_SSOW_LF_GWS_PRF_TAG cavm_ssow_lf_gws_prf_tag_t
#define bustype_CAVM_SSOW_LF_GWS_PRF_TAG CSR_TYPE_RVU_PFVF_BAR2
#define basename_CAVM_SSOW_LF_GWS_PRF_TAG "SSOW_LF_GWS_PRF_TAG"
#define device_bar_CAVM_SSOW_LF_GWS_PRF_TAG 0x2 /* RVU_BAR2 */
#define busnum_CAVM_SSOW_LF_GWS_PRF_TAG 0
#define arguments_CAVM_SSOW_LF_GWS_PRF_TAG -1,-1,-1,-1

/**
 * Register (RVU_PFVF_BAR2) ssow_lf_gws_prf_wqe0
 *
 * SSO Workslot LF Tag and WQP Status Registers
 * Alias for 128-bit loads to SSOW_LF_GWS_PRF_TAG and SSOW_LF_GWS_PRF_WQP registers.
 * Alias for 64-bit load to SSOW_LF_GWS_PRF_TAG register.
 */
union cavm_ssow_lf_gws_prf_wqe0
{
    uint64_t u;
    struct cavm_ssow_lf_gws_prf_wqe0_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t pend_get_work         : 1;  /**< [ 63: 63](RO/H) Set when there is a pending GET_WORK. */
        uint64_t pend_switch           : 1;  /**< [ 62: 62](RO/H) Set when there is a pending SWTAG operation. */
        uint64_t reserved_58_61        : 4;
        uint64_t gw_result             : 2;  /**< [ 57: 56](RO/H) Result for 128-bit CASP getworks to SSOW_LF_GWS_OP_GET_WORK0/1, format specified
                                                                 by SSOW_GW_RESULT_E. Loads return 0x0. */
        uint64_t reserved_54_55        : 2;
        uint64_t lsw_used              : 1;  /**< [ 53: 53](RO/H) LSW entry has been used by a Scheduled LMTST. */
        uint64_t has_lsw               : 1;  /**< [ 52: 52](RO/H) GWS has valid LSW entry assigned. */
        uint64_t reserved_46_51        : 6;
        uint64_t ggrp                  : 10; /**< [ 45: 36](RO/H) The guest group attached to the GWS (updated when new tag list entered on SWTAG_FULL). */
        uint64_t head                  : 1;  /**< [ 35: 35](RO/H) Set when this SSO entry is at the head of its tag list or when in the UNTAGGED state. */
        uint64_t dq                    : 1;  /**< [ 34: 34](RO/H) Set when this entry came off the DQ. */
        uint64_t tt                    : 2;  /**< [ 33: 32](RO/H) The tag type attached to the GWS (updated when new tag list entered on SWTAG, SWTAG_FULL,
                                                                 or SWTAG_DESCHED.) Enumerated by SSO_TT_E. */
        uint64_t tag                   : 32; /**< [ 31:  0](RO/H) The tag attached to the GWS (updated when new tag list entered on SWTAG, SWTAG_FULL, or
                                                                 SWTAG_DESCHED.) */
#else /* Word 0 - Little Endian */
        uint64_t tag                   : 32; /**< [ 31:  0](RO/H) The tag attached to the GWS (updated when new tag list entered on SWTAG, SWTAG_FULL, or
                                                                 SWTAG_DESCHED.) */
        uint64_t tt                    : 2;  /**< [ 33: 32](RO/H) The tag type attached to the GWS (updated when new tag list entered on SWTAG, SWTAG_FULL,
                                                                 or SWTAG_DESCHED.) Enumerated by SSO_TT_E. */
        uint64_t dq                    : 1;  /**< [ 34: 34](RO/H) Set when this entry came off the DQ. */
        uint64_t head                  : 1;  /**< [ 35: 35](RO/H) Set when this SSO entry is at the head of its tag list or when in the UNTAGGED state. */
        uint64_t ggrp                  : 10; /**< [ 45: 36](RO/H) The guest group attached to the GWS (updated when new tag list entered on SWTAG_FULL). */
        uint64_t reserved_46_51        : 6;
        uint64_t has_lsw               : 1;  /**< [ 52: 52](RO/H) GWS has valid LSW entry assigned. */
        uint64_t lsw_used              : 1;  /**< [ 53: 53](RO/H) LSW entry has been used by a Scheduled LMTST. */
        uint64_t reserved_54_55        : 2;
        uint64_t gw_result             : 2;  /**< [ 57: 56](RO/H) Result for 128-bit CASP getworks to SSOW_LF_GWS_OP_GET_WORK0/1, format specified
                                                                 by SSOW_GW_RESULT_E. Loads return 0x0. */
        uint64_t reserved_58_61        : 4;
        uint64_t pend_switch           : 1;  /**< [ 62: 62](RO/H) Set when there is a pending SWTAG operation. */
        uint64_t pend_get_work         : 1;  /**< [ 63: 63](RO/H) Set when there is a pending GET_WORK. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_ssow_lf_gws_prf_wqe0_s cn; */
};
typedef union cavm_ssow_lf_gws_prf_wqe0 cavm_ssow_lf_gws_prf_wqe0_t;

#define CAVM_SSOW_LF_GWS_PRF_WQE0 CAVM_SSOW_LF_GWS_PRF_WQE0_FUNC()
static inline uint64_t CAVM_SSOW_LF_GWS_PRF_WQE0_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_SSOW_LF_GWS_PRF_WQE0_FUNC(void)
{
    return 0x840200800440ll;
}

#define typedef_CAVM_SSOW_LF_GWS_PRF_WQE0 cavm_ssow_lf_gws_prf_wqe0_t
#define bustype_CAVM_SSOW_LF_GWS_PRF_WQE0 CSR_TYPE_RVU_PFVF_BAR2
#define basename_CAVM_SSOW_LF_GWS_PRF_WQE0 "SSOW_LF_GWS_PRF_WQE0"
#define device_bar_CAVM_SSOW_LF_GWS_PRF_WQE0 0x2 /* RVU_BAR2 */
#define busnum_CAVM_SSOW_LF_GWS_PRF_WQE0 0
#define arguments_CAVM_SSOW_LF_GWS_PRF_WQE0 -1,-1,-1,-1

/**
 * Register (RVU_PFVF_BAR2) ssow_lf_gws_prf_wqe1
 *
 * SSO Workslot LF Tag and WQP Status Registers
 * Alias for 128-bit loads to SSOW_LF_GWS_PRF_TAG and SSOW_LF_GWS_PRF_WQP registers.
 * Alias for 64-bit load to SSOW_LF_GWS_PRF_WQP register.
 */
union cavm_ssow_lf_gws_prf_wqe1
{
    uint64_t u;
    struct cavm_ssow_lf_gws_prf_wqe1_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t wqp                   : 64; /**< [ 63:  0](RO/H) The WQP attached to the GWS (updated when new tag list entered on SWTAG_FULL.)
                                                                 Bits \<63:53\> are a sign extension of \<52\>.  Bits \<2:0\> are 0x0. */
#else /* Word 0 - Little Endian */
        uint64_t wqp                   : 64; /**< [ 63:  0](RO/H) The WQP attached to the GWS (updated when new tag list entered on SWTAG_FULL.)
                                                                 Bits \<63:53\> are a sign extension of \<52\>.  Bits \<2:0\> are 0x0. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_ssow_lf_gws_prf_wqe1_s cn; */
};
typedef union cavm_ssow_lf_gws_prf_wqe1 cavm_ssow_lf_gws_prf_wqe1_t;

#define CAVM_SSOW_LF_GWS_PRF_WQE1 CAVM_SSOW_LF_GWS_PRF_WQE1_FUNC()
static inline uint64_t CAVM_SSOW_LF_GWS_PRF_WQE1_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_SSOW_LF_GWS_PRF_WQE1_FUNC(void)
{
    return 0x840200800448ll;
}

#define typedef_CAVM_SSOW_LF_GWS_PRF_WQE1 cavm_ssow_lf_gws_prf_wqe1_t
#define bustype_CAVM_SSOW_LF_GWS_PRF_WQE1 CSR_TYPE_RVU_PFVF_BAR2
#define basename_CAVM_SSOW_LF_GWS_PRF_WQE1 "SSOW_LF_GWS_PRF_WQE1"
#define device_bar_CAVM_SSOW_LF_GWS_PRF_WQE1 0x2 /* RVU_BAR2 */
#define busnum_CAVM_SSOW_LF_GWS_PRF_WQE1 0
#define arguments_CAVM_SSOW_LF_GWS_PRF_WQE1 -1,-1,-1,-1

/**
 * Register (RVU_PFVF_BAR2) ssow_lf_gws_prf_wqp
 *
 * SSO Workslot LF Prefetch WQP Status Registers
 * Returns the WQP attached to the Prefetch slot of GWS.
 *
 * IMPORTANT: Although this register is located in SSO I/O address space, the state of
 * this register is cached inside the cores, and so loads to this register can
 * typically be returned with L1Dcache-like timing.
 */
union cavm_ssow_lf_gws_prf_wqp
{
    uint64_t u;
    struct cavm_ssow_lf_gws_prf_wqp_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t wqp                   : 64; /**< [ 63:  0](RO/H) The WQP attached to the GWS (updated when new tag list entered on SWTAG_FULL.)
                                                                 Bits \<63:53\> are a sign extension of \<52\>.  Bits \<2:0\> are 0x0. */
#else /* Word 0 - Little Endian */
        uint64_t wqp                   : 64; /**< [ 63:  0](RO/H) The WQP attached to the GWS (updated when new tag list entered on SWTAG_FULL.)
                                                                 Bits \<63:53\> are a sign extension of \<52\>.  Bits \<2:0\> are 0x0. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_ssow_lf_gws_prf_wqp_s cn; */
};
typedef union cavm_ssow_lf_gws_prf_wqp cavm_ssow_lf_gws_prf_wqp_t;

#define CAVM_SSOW_LF_GWS_PRF_WQP CAVM_SSOW_LF_GWS_PRF_WQP_FUNC()
static inline uint64_t CAVM_SSOW_LF_GWS_PRF_WQP_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_SSOW_LF_GWS_PRF_WQP_FUNC(void)
{
    return 0x840200800410ll;
}

#define typedef_CAVM_SSOW_LF_GWS_PRF_WQP cavm_ssow_lf_gws_prf_wqp_t
#define bustype_CAVM_SSOW_LF_GWS_PRF_WQP CSR_TYPE_RVU_PFVF_BAR2
#define basename_CAVM_SSOW_LF_GWS_PRF_WQP "SSOW_LF_GWS_PRF_WQP"
#define device_bar_CAVM_SSOW_LF_GWS_PRF_WQP 0x2 /* RVU_BAR2 */
#define busnum_CAVM_SSOW_LF_GWS_PRF_WQP 0
#define arguments_CAVM_SSOW_LF_GWS_PRF_WQP -1,-1,-1,-1

/**
 * Register (RVU_PFVF_BAR2) ssow_lf_gws_swtp
 *
 * SSO Workslot LF Switch Tag Pending Register
 * This register returns the state of the switch-tag pending bit.
 *
 * IMPORTANT: Although this register is located in SSO I/O address space, the state of
 * this register is cached inside the cores, and so loads to this register can
 * typically be returned with L1Dcache-like timing.
 */
union cavm_ssow_lf_gws_swtp
{
    uint64_t u;
    struct cavm_ssow_lf_gws_swtp_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_1_63         : 63;
        uint64_t pendsw                : 1;  /**< [  0:  0](RO/H) Switch-tag pending. */
#else /* Word 0 - Little Endian */
        uint64_t pendsw                : 1;  /**< [  0:  0](RO/H) Switch-tag pending. */
        uint64_t reserved_1_63         : 63;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_ssow_lf_gws_swtp_s cn; */
};
typedef union cavm_ssow_lf_gws_swtp cavm_ssow_lf_gws_swtp_t;

#define CAVM_SSOW_LF_GWS_SWTP CAVM_SSOW_LF_GWS_SWTP_FUNC()
static inline uint64_t CAVM_SSOW_LF_GWS_SWTP_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_SSOW_LF_GWS_SWTP_FUNC(void)
{
    return 0x840200800220ll;
}

#define typedef_CAVM_SSOW_LF_GWS_SWTP cavm_ssow_lf_gws_swtp_t
#define bustype_CAVM_SSOW_LF_GWS_SWTP CSR_TYPE_RVU_PFVF_BAR2
#define basename_CAVM_SSOW_LF_GWS_SWTP "SSOW_LF_GWS_SWTP"
#define device_bar_CAVM_SSOW_LF_GWS_SWTP 0x2 /* RVU_BAR2 */
#define busnum_CAVM_SSOW_LF_GWS_SWTP 0
#define arguments_CAVM_SSOW_LF_GWS_SWTP -1,-1,-1,-1

/**
 * Register (RVU_PFVF_BAR2) ssow_lf_gws_tag
 *
 * SSO Workslot LF Tag Status Registers
 * Returns status of each GWS.
 *
 * IMPORTANT: Although this register is located in SSO I/O address space, the state of
 * this register is cached inside the cores, and so loads to this register can
 * typically be returned with L1Dcache-like timing.
 */
union cavm_ssow_lf_gws_tag
{
    uint64_t u;
    struct cavm_ssow_lf_gws_tag_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t pend_get_work         : 1;  /**< [ 63: 63](RO/H) Set when there is a pending GET_WORK. */
        uint64_t pend_switch           : 1;  /**< [ 62: 62](RO/H) Set when there is a pending SWTAG operation. */
        uint64_t reserved_54_61        : 8;
        uint64_t lsw_used              : 1;  /**< [ 53: 53](RO/H) LSW entry has been used by a Scheduled LMTST. */
        uint64_t has_lsw               : 1;  /**< [ 52: 52](RO/H) GWS has valid LSW entry assigned. */
        uint64_t reserved_46_51        : 6;
        uint64_t ggrp                  : 10; /**< [ 45: 36](RO/H) The guest group attached to the GWS (updated when new tag list entered on SWTAG_FULL). */
        uint64_t head                  : 1;  /**< [ 35: 35](RO/H) Set when this SSO entry is at the head of its tag list or when in the UNTAGGED state. */
        uint64_t dq                    : 1;  /**< [ 34: 34](RO/H) Set when this entry came off the DQ. */
        uint64_t tt                    : 2;  /**< [ 33: 32](RO/H) The tag type attached to the GWS (updated when new tag list entered on SWTAG, SWTAG_FULL,
                                                                 or SWTAG_DESCHED.) Enumerated by SSO_TT_E. */
        uint64_t tag                   : 32; /**< [ 31:  0](RO/H) The tag attached to the GWS (updated when new tag list entered on SWTAG, SWTAG_FULL, or
                                                                 SWTAG_DESCHED.) */
#else /* Word 0 - Little Endian */
        uint64_t tag                   : 32; /**< [ 31:  0](RO/H) The tag attached to the GWS (updated when new tag list entered on SWTAG, SWTAG_FULL, or
                                                                 SWTAG_DESCHED.) */
        uint64_t tt                    : 2;  /**< [ 33: 32](RO/H) The tag type attached to the GWS (updated when new tag list entered on SWTAG, SWTAG_FULL,
                                                                 or SWTAG_DESCHED.) Enumerated by SSO_TT_E. */
        uint64_t dq                    : 1;  /**< [ 34: 34](RO/H) Set when this entry came off the DQ. */
        uint64_t head                  : 1;  /**< [ 35: 35](RO/H) Set when this SSO entry is at the head of its tag list or when in the UNTAGGED state. */
        uint64_t ggrp                  : 10; /**< [ 45: 36](RO/H) The guest group attached to the GWS (updated when new tag list entered on SWTAG_FULL). */
        uint64_t reserved_46_51        : 6;
        uint64_t has_lsw               : 1;  /**< [ 52: 52](RO/H) GWS has valid LSW entry assigned. */
        uint64_t lsw_used              : 1;  /**< [ 53: 53](RO/H) LSW entry has been used by a Scheduled LMTST. */
        uint64_t reserved_54_61        : 8;
        uint64_t pend_switch           : 1;  /**< [ 62: 62](RO/H) Set when there is a pending SWTAG operation. */
        uint64_t pend_get_work         : 1;  /**< [ 63: 63](RO/H) Set when there is a pending GET_WORK. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_ssow_lf_gws_tag_s cn; */
};
typedef union cavm_ssow_lf_gws_tag cavm_ssow_lf_gws_tag_t;

#define CAVM_SSOW_LF_GWS_TAG CAVM_SSOW_LF_GWS_TAG_FUNC()
static inline uint64_t CAVM_SSOW_LF_GWS_TAG_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_SSOW_LF_GWS_TAG_FUNC(void)
{
    return 0x840200800200ll;
}

#define typedef_CAVM_SSOW_LF_GWS_TAG cavm_ssow_lf_gws_tag_t
#define bustype_CAVM_SSOW_LF_GWS_TAG CSR_TYPE_RVU_PFVF_BAR2
#define basename_CAVM_SSOW_LF_GWS_TAG "SSOW_LF_GWS_TAG"
#define device_bar_CAVM_SSOW_LF_GWS_TAG 0x2 /* RVU_BAR2 */
#define busnum_CAVM_SSOW_LF_GWS_TAG 0
#define arguments_CAVM_SSOW_LF_GWS_TAG -1,-1,-1,-1

/**
 * Register (RVU_PFVF_BAR2) ssow_lf_gws_wqe0
 *
 * SSO Workslot LF Tag and WQP Status Registers
 * Alias for 128-bit loads from SSOW_LF_GWS_TAG and SSOW_LF_GWS_WQP registers. Defines
 * return format for 128-bit CASP to SSOW_LF_GWS_OP_GETWORK0/1.
 * Alias for 64-bit load to SSOW_LF_GWS_TAG register.
 */
union cavm_ssow_lf_gws_wqe0
{
    uint64_t u;
    struct cavm_ssow_lf_gws_wqe0_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t pend_get_work         : 1;  /**< [ 63: 63](RO/H) Set when there is a pending GET_WORK. */
        uint64_t pend_switch           : 1;  /**< [ 62: 62](RO/H) Set when there is a pending SWTAG operation. */
        uint64_t reserved_58_61        : 4;
        uint64_t gw_result             : 2;  /**< [ 57: 56](RO/H) Result for 128-bit CASP getworks to SSOW_LF_GWS_OP_GET_WORK0/1, format specified
                                                                 by SSOW_GW_RESULT_E. Loads return 0x0. */
        uint64_t reserved_54_55        : 2;
        uint64_t lsw_used              : 1;  /**< [ 53: 53](RO/H) LSW entry has been used by a Scheduled LMTST. */
        uint64_t has_lsw               : 1;  /**< [ 52: 52](RO/H) GWS has valid LSW entry assigned. */
        uint64_t reserved_46_51        : 6;
        uint64_t ggrp                  : 10; /**< [ 45: 36](RO/H) The guest group attached to the GWS (updated when new tag list entered on SWTAG_FULL). */
        uint64_t head                  : 1;  /**< [ 35: 35](RO/H) Set when this SSO entry is at the head of its tag list or when in the UNTAGGED state. */
        uint64_t dq                    : 1;  /**< [ 34: 34](RO/H) Set when this entry came off the DQ. */
        uint64_t tt                    : 2;  /**< [ 33: 32](RO/H) The tag type attached to the GWS (updated when new tag list entered on SWTAG, SWTAG_FULL,
                                                                 or SWTAG_DESCHED.) Enumerated by SSO_TT_E. */
        uint64_t tag                   : 32; /**< [ 31:  0](RO/H) The tag attached to the GWS (updated when new tag list entered on SWTAG, SWTAG_FULL, or
                                                                 SWTAG_DESCHED.) */
#else /* Word 0 - Little Endian */
        uint64_t tag                   : 32; /**< [ 31:  0](RO/H) The tag attached to the GWS (updated when new tag list entered on SWTAG, SWTAG_FULL, or
                                                                 SWTAG_DESCHED.) */
        uint64_t tt                    : 2;  /**< [ 33: 32](RO/H) The tag type attached to the GWS (updated when new tag list entered on SWTAG, SWTAG_FULL,
                                                                 or SWTAG_DESCHED.) Enumerated by SSO_TT_E. */
        uint64_t dq                    : 1;  /**< [ 34: 34](RO/H) Set when this entry came off the DQ. */
        uint64_t head                  : 1;  /**< [ 35: 35](RO/H) Set when this SSO entry is at the head of its tag list or when in the UNTAGGED state. */
        uint64_t ggrp                  : 10; /**< [ 45: 36](RO/H) The guest group attached to the GWS (updated when new tag list entered on SWTAG_FULL). */
        uint64_t reserved_46_51        : 6;
        uint64_t has_lsw               : 1;  /**< [ 52: 52](RO/H) GWS has valid LSW entry assigned. */
        uint64_t lsw_used              : 1;  /**< [ 53: 53](RO/H) LSW entry has been used by a Scheduled LMTST. */
        uint64_t reserved_54_55        : 2;
        uint64_t gw_result             : 2;  /**< [ 57: 56](RO/H) Result for 128-bit CASP getworks to SSOW_LF_GWS_OP_GET_WORK0/1, format specified
                                                                 by SSOW_GW_RESULT_E. Loads return 0x0. */
        uint64_t reserved_58_61        : 4;
        uint64_t pend_switch           : 1;  /**< [ 62: 62](RO/H) Set when there is a pending SWTAG operation. */
        uint64_t pend_get_work         : 1;  /**< [ 63: 63](RO/H) Set when there is a pending GET_WORK. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_ssow_lf_gws_wqe0_s cn; */
};
typedef union cavm_ssow_lf_gws_wqe0 cavm_ssow_lf_gws_wqe0_t;

#define CAVM_SSOW_LF_GWS_WQE0 CAVM_SSOW_LF_GWS_WQE0_FUNC()
static inline uint64_t CAVM_SSOW_LF_GWS_WQE0_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_SSOW_LF_GWS_WQE0_FUNC(void)
{
    return 0x840200800240ll;
}

#define typedef_CAVM_SSOW_LF_GWS_WQE0 cavm_ssow_lf_gws_wqe0_t
#define bustype_CAVM_SSOW_LF_GWS_WQE0 CSR_TYPE_RVU_PFVF_BAR2
#define basename_CAVM_SSOW_LF_GWS_WQE0 "SSOW_LF_GWS_WQE0"
#define device_bar_CAVM_SSOW_LF_GWS_WQE0 0x2 /* RVU_BAR2 */
#define busnum_CAVM_SSOW_LF_GWS_WQE0 0
#define arguments_CAVM_SSOW_LF_GWS_WQE0 -1,-1,-1,-1

/**
 * Register (RVU_PFVF_BAR2) ssow_lf_gws_wqe1
 *
 * SSO Workslot LF Tag and WQP Status Registers
 * Alias for 128-bit loads to SSOW_LF_GWS_WQP register.
 */
union cavm_ssow_lf_gws_wqe1
{
    uint64_t u;
    struct cavm_ssow_lf_gws_wqe1_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t wqp                   : 64; /**< [ 63:  0](RO/H) The WQP attached to the GWS (updated when new tag list entered on SWTAG_FULL.)
                                                                 Bits \<63:53\> are a sign extension of \<52\>.  Bits \<2:0\> are 0x0. */
#else /* Word 0 - Little Endian */
        uint64_t wqp                   : 64; /**< [ 63:  0](RO/H) The WQP attached to the GWS (updated when new tag list entered on SWTAG_FULL.)
                                                                 Bits \<63:53\> are a sign extension of \<52\>.  Bits \<2:0\> are 0x0. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_ssow_lf_gws_wqe1_s cn; */
};
typedef union cavm_ssow_lf_gws_wqe1 cavm_ssow_lf_gws_wqe1_t;

#define CAVM_SSOW_LF_GWS_WQE1 CAVM_SSOW_LF_GWS_WQE1_FUNC()
static inline uint64_t CAVM_SSOW_LF_GWS_WQE1_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_SSOW_LF_GWS_WQE1_FUNC(void)
{
    return 0x840200800248ll;
}

#define typedef_CAVM_SSOW_LF_GWS_WQE1 cavm_ssow_lf_gws_wqe1_t
#define bustype_CAVM_SSOW_LF_GWS_WQE1 CSR_TYPE_RVU_PFVF_BAR2
#define basename_CAVM_SSOW_LF_GWS_WQE1 "SSOW_LF_GWS_WQE1"
#define device_bar_CAVM_SSOW_LF_GWS_WQE1 0x2 /* RVU_BAR2 */
#define busnum_CAVM_SSOW_LF_GWS_WQE1 0
#define arguments_CAVM_SSOW_LF_GWS_WQE1 -1,-1,-1,-1

/**
 * Register (RVU_PFVF_BAR2) ssow_lf_gws_wqp
 *
 * SSO Workslot LF WQP Status Registers
 * Returns the WQP attached to the GWS.
 *
 * IMPORTANT: Although this register is located in SSO I/O address space, the state of
 * this register is cached inside the cores, and so loads to this register can
 * typically be returned with L1Dcache-like timing.
 */
union cavm_ssow_lf_gws_wqp
{
    uint64_t u;
    struct cavm_ssow_lf_gws_wqp_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t wqp                   : 64; /**< [ 63:  0](RO/H) The WQP attached to the GWS (updated when new tag list entered on SWTAG_FULL.)
                                                                 Bits \<63:53\> are a sign extension of \<52\>.  Bits \<2:0\> are 0x0. */
#else /* Word 0 - Little Endian */
        uint64_t wqp                   : 64; /**< [ 63:  0](RO/H) The WQP attached to the GWS (updated when new tag list entered on SWTAG_FULL.)
                                                                 Bits \<63:53\> are a sign extension of \<52\>.  Bits \<2:0\> are 0x0. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_ssow_lf_gws_wqp_s cn; */
};
typedef union cavm_ssow_lf_gws_wqp cavm_ssow_lf_gws_wqp_t;

#define CAVM_SSOW_LF_GWS_WQP CAVM_SSOW_LF_GWS_WQP_FUNC()
static inline uint64_t CAVM_SSOW_LF_GWS_WQP_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_SSOW_LF_GWS_WQP_FUNC(void)
{
    return 0x840200800210ll;
}

#define typedef_CAVM_SSOW_LF_GWS_WQP cavm_ssow_lf_gws_wqp_t
#define bustype_CAVM_SSOW_LF_GWS_WQP CSR_TYPE_RVU_PFVF_BAR2
#define basename_CAVM_SSOW_LF_GWS_WQP "SSOW_LF_GWS_WQP"
#define device_bar_CAVM_SSOW_LF_GWS_WQP 0x2 /* RVU_BAR2 */
#define busnum_CAVM_SSOW_LF_GWS_WQP 0
#define arguments_CAVM_SSOW_LF_GWS_WQP -1,-1,-1,-1

/**
 * Register (RVU_PF_BAR0) ssow_priv_lf#_hws_cfg
 *
 * SSO WS Privileged Local Function Configuration Registers
 */
union cavm_ssow_priv_lfx_hws_cfg
{
    uint64_t u;
    struct cavm_ssow_priv_lfx_hws_cfg_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t ena                   : 1;  /**< [ 63: 63](R/W) Enable. When set, the LF is enabled and provisioned to the VF/PF slot
                                                                 selected by [PF_FUNC] and [SLOT]. When clear, the LF is not provisioned.

                                                                 LF to slot mapping must be 1-to-1. Thus, each enabled LF must be provisioned
                                                                 to a unique {[PF_FUNC], [SLOT]} combination. */
        uint64_t reserved_24_62        : 39;
        uint64_t pf_func               : 16; /**< [ 23:  8](R/W) RVU VF/PF to which the LF is provisioned. Format defined by RVU_PF_FUNC_S.
                                                                 Interrupts from the LF are delivered to the selected PF/VF. */
        uint64_t slot                  : 8;  /**< [  7:  0](R/W) Slot within the VF/PF selected by [PF_FUNC] to which the LF is
                                                                 provisioned. */
#else /* Word 0 - Little Endian */
        uint64_t slot                  : 8;  /**< [  7:  0](R/W) Slot within the VF/PF selected by [PF_FUNC] to which the LF is
                                                                 provisioned. */
        uint64_t pf_func               : 16; /**< [ 23:  8](R/W) RVU VF/PF to which the LF is provisioned. Format defined by RVU_PF_FUNC_S.
                                                                 Interrupts from the LF are delivered to the selected PF/VF. */
        uint64_t reserved_24_62        : 39;
        uint64_t ena                   : 1;  /**< [ 63: 63](R/W) Enable. When set, the LF is enabled and provisioned to the VF/PF slot
                                                                 selected by [PF_FUNC] and [SLOT]. When clear, the LF is not provisioned.

                                                                 LF to slot mapping must be 1-to-1. Thus, each enabled LF must be provisioned
                                                                 to a unique {[PF_FUNC], [SLOT]} combination. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_ssow_priv_lfx_hws_cfg_s cn; */
};
typedef union cavm_ssow_priv_lfx_hws_cfg cavm_ssow_priv_lfx_hws_cfg_t;

static inline uint64_t CAVM_SSOW_PRIV_LFX_HWS_CFG(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_SSOW_PRIV_LFX_HWS_CFG(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CN10KA) && (a<=51))
        return 0x840080001000ll + 8ll * ((a) & 0x3f);
    if (cavm_is_model(OCTEONTX_CN10KB) && (a<=17))
        return 0x840080001000ll + 8ll * ((a) & 0x1f);
    if (cavm_is_model(OCTEONTX_CNF10KA) && (a<=51))
        return 0x840080001000ll + 8ll * ((a) & 0x3f);
    if (cavm_is_model(OCTEONTX_CNF10KB) && (a<=51))
        return 0x840080001000ll + 8ll * ((a) & 0x3f);
    __cavm_csr_fatal("SSOW_PRIV_LFX_HWS_CFG", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_SSOW_PRIV_LFX_HWS_CFG(a) cavm_ssow_priv_lfx_hws_cfg_t
#define bustype_CAVM_SSOW_PRIV_LFX_HWS_CFG(a) CSR_TYPE_RVU_PF_BAR0
#define basename_CAVM_SSOW_PRIV_LFX_HWS_CFG(a) "SSOW_PRIV_LFX_HWS_CFG"
#define device_bar_CAVM_SSOW_PRIV_LFX_HWS_CFG(a) 0x0 /* RVU_BAR0 */
#define busnum_CAVM_SSOW_PRIV_LFX_HWS_CFG(a) (a)
#define arguments_CAVM_SSOW_PRIV_LFX_HWS_CFG(a) (a),-1,-1,-1

/**
 * Register (RVU_PF_BAR0) ssow_priv_lf#_hws_int_cfg
 *
 * SSO WS Privileged Local Function Interrupt Configuration Registers
 */
union cavm_ssow_priv_lfx_hws_int_cfg
{
    uint64_t u;
    struct cavm_ssow_priv_lfx_hws_int_cfg_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_20_63        : 44;
        uint64_t msix_size             : 8;  /**< [ 19: 12](RO) Number of interrupt vectors enumerated by SSOW_LF_INT_VEC_E. */
        uint64_t reserved_11           : 1;
        uint64_t msix_offset           : 11; /**< [ 10:  0](R/W) MSI-X offset. Offset of LF interrupt vectors enumerated by the block's
                                                                 SSOW_LF_INT_VEC_E in the MSI-X table of the corresponding RVU VF/PF (see
                                                                 SSOW_PRIV_LF()_HWS_CFG[PF_FUNC]). This offset is added to each enumerated value
                                                                 to obtain the corresponding MSI-X vector index. The highest enumerated
                                                                 value plus [MSIX_OFFSET] must be less than or equal to
                                                                 RVU_PRIV_PF()_MSIX_CFG[PF_MSIXT_SIZEM1,VF_MSIXT_SIZEM1]. */
#else /* Word 0 - Little Endian */
        uint64_t msix_offset           : 11; /**< [ 10:  0](R/W) MSI-X offset. Offset of LF interrupt vectors enumerated by the block's
                                                                 SSOW_LF_INT_VEC_E in the MSI-X table of the corresponding RVU VF/PF (see
                                                                 SSOW_PRIV_LF()_HWS_CFG[PF_FUNC]). This offset is added to each enumerated value
                                                                 to obtain the corresponding MSI-X vector index. The highest enumerated
                                                                 value plus [MSIX_OFFSET] must be less than or equal to
                                                                 RVU_PRIV_PF()_MSIX_CFG[PF_MSIXT_SIZEM1,VF_MSIXT_SIZEM1]. */
        uint64_t reserved_11           : 1;
        uint64_t msix_size             : 8;  /**< [ 19: 12](RO) Number of interrupt vectors enumerated by SSOW_LF_INT_VEC_E. */
        uint64_t reserved_20_63        : 44;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_ssow_priv_lfx_hws_int_cfg_s cn; */
};
typedef union cavm_ssow_priv_lfx_hws_int_cfg cavm_ssow_priv_lfx_hws_int_cfg_t;

static inline uint64_t CAVM_SSOW_PRIV_LFX_HWS_INT_CFG(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_SSOW_PRIV_LFX_HWS_INT_CFG(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CN10KA) && (a<=51))
        return 0x840080002000ll + 8ll * ((a) & 0x3f);
    if (cavm_is_model(OCTEONTX_CN10KB) && (a<=17))
        return 0x840080002000ll + 8ll * ((a) & 0x1f);
    if (cavm_is_model(OCTEONTX_CNF10KA) && (a<=51))
        return 0x840080002000ll + 8ll * ((a) & 0x3f);
    if (cavm_is_model(OCTEONTX_CNF10KB) && (a<=51))
        return 0x840080002000ll + 8ll * ((a) & 0x3f);
    __cavm_csr_fatal("SSOW_PRIV_LFX_HWS_INT_CFG", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_SSOW_PRIV_LFX_HWS_INT_CFG(a) cavm_ssow_priv_lfx_hws_int_cfg_t
#define bustype_CAVM_SSOW_PRIV_LFX_HWS_INT_CFG(a) CSR_TYPE_RVU_PF_BAR0
#define basename_CAVM_SSOW_PRIV_LFX_HWS_INT_CFG(a) "SSOW_PRIV_LFX_HWS_INT_CFG"
#define device_bar_CAVM_SSOW_PRIV_LFX_HWS_INT_CFG(a) 0x0 /* RVU_BAR0 */
#define busnum_CAVM_SSOW_PRIV_LFX_HWS_INT_CFG(a) (a)
#define arguments_CAVM_SSOW_PRIV_LFX_HWS_INT_CFG(a) (a),-1,-1,-1

#endif /* __CAVM_CSRS_SSOW_H__ */
