#ifndef __CAVM_CSRS_APR_GWC_H__
#define __CAVM_CSRS_APR_GWC_H__
/* This file is auto-generated. Do not edit */

/***********************license start***********************************
* Copyright (c) 2020 Marvell
* SPDX-License-Identifier: BSD-3-Clause
* https://spdx.org/licenses
***********************license end**************************************/


/**
 * @file
 *
 * Configuration and status register (CSR) address and type definitions for
 * OcteonTX APR_GWC.
 *
 * This file is auto generated. Do not edit.
 *
 */

/**
 * Register (RVU_PF_BAR0) apr_gwc_af_core#_bp_test
 *
 * INTERNAL: APR_GWC Backpressure Test Register
 */
union cavm_apr_gwc_af_corex_bp_test
{
    uint64_t u;
    struct cavm_apr_gwc_af_corex_bp_test_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t enable                : 4;  /**< [ 63: 60](R/W) Enable test mode. For diagnostic use only.
                                                                 Internal:
                                                                 Once a bit is set, random backpressure is generated
                                                                 at the corresponding point to allow for more frequent backpressure.
                                                                 \<63\> = Indicate non-idle activity to OPG.
                                                                 \<62\> = Assert backpressure from ASI FIFO.
                                                                 \<61\> = Assert backpressure from COMPDATA Interface to APA.
                                                                 \<60\> = Assert backpressure from COMP Interface to APA. */
        uint64_t reserved_24_59        : 36;
        uint64_t bp_cfg                : 8;  /**< [ 23: 16](R/W) Backpressure weight. For diagnostic use only.
                                                                 Internal:
                                                                 There are 2 backpressure configuration bits per enable, with the two bits
                                                                 defined as 0x0=100% of the time, 0x1=75% of the time, 0x2=50% of the time,
                                                                 0x3=25% of the time.
                                                                   \<23:22\> = Config 3.
                                                                   \<21:20\> = Config 2.
                                                                   \<19:18\> = Config 1.
                                                                   \<17:16\> = Config 0. */
        uint64_t reserved_12_15        : 4;
        uint64_t lfsr_freq             : 12; /**< [ 11:  0](R/W) Test LFSR update frequency in coprocessor-clocks minus one. */
#else /* Word 0 - Little Endian */
        uint64_t lfsr_freq             : 12; /**< [ 11:  0](R/W) Test LFSR update frequency in coprocessor-clocks minus one. */
        uint64_t reserved_12_15        : 4;
        uint64_t bp_cfg                : 8;  /**< [ 23: 16](R/W) Backpressure weight. For diagnostic use only.
                                                                 Internal:
                                                                 There are 2 backpressure configuration bits per enable, with the two bits
                                                                 defined as 0x0=100% of the time, 0x1=75% of the time, 0x2=50% of the time,
                                                                 0x3=25% of the time.
                                                                   \<23:22\> = Config 3.
                                                                   \<21:20\> = Config 2.
                                                                   \<19:18\> = Config 1.
                                                                   \<17:16\> = Config 0. */
        uint64_t reserved_24_59        : 36;
        uint64_t enable                : 4;  /**< [ 63: 60](R/W) Enable test mode. For diagnostic use only.
                                                                 Internal:
                                                                 Once a bit is set, random backpressure is generated
                                                                 at the corresponding point to allow for more frequent backpressure.
                                                                 \<63\> = Indicate non-idle activity to OPG.
                                                                 \<62\> = Assert backpressure from ASI FIFO.
                                                                 \<61\> = Assert backpressure from COMPDATA Interface to APA.
                                                                 \<60\> = Assert backpressure from COMP Interface to APA. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_apr_gwc_af_corex_bp_test_s cn; */
};
typedef union cavm_apr_gwc_af_corex_bp_test cavm_apr_gwc_af_corex_bp_test_t;

static inline uint64_t CAVM_APR_GWC_AF_COREX_BP_TEST(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_APR_GWC_AF_COREX_BP_TEST(uint64_t a)
{
    if (a<=63)
        return 0x840168081100ll + 0x100000ll * ((a) & 0x3f);
    __cavm_csr_fatal("APR_GWC_AF_COREX_BP_TEST", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_APR_GWC_AF_COREX_BP_TEST(a) cavm_apr_gwc_af_corex_bp_test_t
#define bustype_CAVM_APR_GWC_AF_COREX_BP_TEST(a) CSR_TYPE_RVU_PF_BAR0
#define basename_CAVM_APR_GWC_AF_COREX_BP_TEST(a) "APR_GWC_AF_COREX_BP_TEST"
#define device_bar_CAVM_APR_GWC_AF_COREX_BP_TEST(a) 0x0 /* RVU_BAR0 */
#define busnum_CAVM_APR_GWC_AF_COREX_BP_TEST(a) (a)
#define arguments_CAVM_APR_GWC_AF_COREX_BP_TEST(a) (a),-1,-1,-1

/**
 * Register (RVU_PF_BAR0) apr_gwc_af_core#_cfg
 *
 * INTERNAL: Various GWC configuration Register
 */
union cavm_apr_gwc_af_corex_cfg
{
    uint64_t u;
    struct cavm_apr_gwc_af_corex_cfg_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_5_63         : 59;
        uint64_t force_asiarb_clk_en   : 1;  /**< [  4:  4](R/W) Force conditional clocks for ASI Arbiter of present Tile on. For diagnostic use
                                                                 only. */
        uint64_t force_noblock_atomics : 1;  /**< [  3:  3](R/W) Force GWC to accept new AP requests while an atomic request is pending. For
                                                                 diagnostic use only. */
        uint64_t force_one_slot        : 1;  /**< [  2:  2](R/W) Force single slot per GWC. For diagnostic use only. */
        uint64_t force_single_req      : 1;  /**< [  1:  1](R/W) Force serving only one AP Request. For diagnostic use only. */
        uint64_t force_clk_en          : 1;  /**< [  0:  0](R/W) Force conditional clocks for GWC on. For diagnostic use only. */
#else /* Word 0 - Little Endian */
        uint64_t force_clk_en          : 1;  /**< [  0:  0](R/W) Force conditional clocks for GWC on. For diagnostic use only. */
        uint64_t force_single_req      : 1;  /**< [  1:  1](R/W) Force serving only one AP Request. For diagnostic use only. */
        uint64_t force_one_slot        : 1;  /**< [  2:  2](R/W) Force single slot per GWC. For diagnostic use only. */
        uint64_t force_noblock_atomics : 1;  /**< [  3:  3](R/W) Force GWC to accept new AP requests while an atomic request is pending. For
                                                                 diagnostic use only. */
        uint64_t force_asiarb_clk_en   : 1;  /**< [  4:  4](R/W) Force conditional clocks for ASI Arbiter of present Tile on. For diagnostic use
                                                                 only. */
        uint64_t reserved_5_63         : 59;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_apr_gwc_af_corex_cfg_s cn; */
};
typedef union cavm_apr_gwc_af_corex_cfg cavm_apr_gwc_af_corex_cfg_t;

static inline uint64_t CAVM_APR_GWC_AF_COREX_CFG(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_APR_GWC_AF_COREX_CFG(uint64_t a)
{
    if (a<=63)
        return 0x840168080100ll + 0x100000ll * ((a) & 0x3f);
    __cavm_csr_fatal("APR_GWC_AF_COREX_CFG", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_APR_GWC_AF_COREX_CFG(a) cavm_apr_gwc_af_corex_cfg_t
#define bustype_CAVM_APR_GWC_AF_COREX_CFG(a) CSR_TYPE_RVU_PF_BAR0
#define basename_CAVM_APR_GWC_AF_COREX_CFG(a) "APR_GWC_AF_COREX_CFG"
#define device_bar_CAVM_APR_GWC_AF_COREX_CFG(a) 0x0 /* RVU_BAR0 */
#define busnum_CAVM_APR_GWC_AF_COREX_CFG(a) (a)
#define arguments_CAVM_APR_GWC_AF_COREX_CFG(a) (a),-1,-1,-1

/**
 * Register (RVU_PF_BAR0) apr_gwc_af_core#_eco
 *
 * INTERNAL: APR_GWC Local ECO Register
 */
union cavm_apr_gwc_af_corex_eco
{
    uint64_t u;
    struct cavm_apr_gwc_af_corex_eco_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t eco_rw                : 64; /**< [ 63:  0](R/W) Reserved for ECO usage. */
#else /* Word 0 - Little Endian */
        uint64_t eco_rw                : 64; /**< [ 63:  0](R/W) Reserved for ECO usage. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_apr_gwc_af_corex_eco_s cn; */
};
typedef union cavm_apr_gwc_af_corex_eco cavm_apr_gwc_af_corex_eco_t;

static inline uint64_t CAVM_APR_GWC_AF_COREX_ECO(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_APR_GWC_AF_COREX_ECO(uint64_t a)
{
    if (a<=63)
        return 0x840168081000ll + 0x100000ll * ((a) & 0x3f);
    __cavm_csr_fatal("APR_GWC_AF_COREX_ECO", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_APR_GWC_AF_COREX_ECO(a) cavm_apr_gwc_af_corex_eco_t
#define bustype_CAVM_APR_GWC_AF_COREX_ECO(a) CSR_TYPE_RVU_PF_BAR0
#define basename_CAVM_APR_GWC_AF_COREX_ECO(a) "APR_GWC_AF_COREX_ECO"
#define device_bar_CAVM_APR_GWC_AF_COREX_ECO(a) 0x0 /* RVU_BAR0 */
#define busnum_CAVM_APR_GWC_AF_COREX_ECO(a) (a)
#define arguments_CAVM_APR_GWC_AF_COREX_ECO(a) (a),-1,-1,-1

/**
 * Register (RVU_PF_BAR0) apr_gwc_af_core#_hwerr
 *
 * INTERNAL: Hardware Error IOP Info Register
 */
union cavm_apr_gwc_af_corex_hwerr
{
    uint64_t u;
    struct cavm_apr_gwc_af_corex_hwerr_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_12_63        : 52;
        uint64_t sai_cc_rcvd           : 4;  /**< [ 11:  8](R/W1C/H) Number of SAI cycles received. */
        uint64_t sai_cc_exp            : 4;  /**< [  7:  4](R/W1C/H) Number of SAI cycles expected. */
        uint64_t reserved_2_3          : 2;
        uint64_t sai_gs_err            : 1;  /**< [  1:  1](R/W1C/H) Error on Get State Response. */
        uint64_t sai_error             : 1;  /**< [  0:  0](R/W1C/H) Received unexpected number of SAI cycles. */
#else /* Word 0 - Little Endian */
        uint64_t sai_error             : 1;  /**< [  0:  0](R/W1C/H) Received unexpected number of SAI cycles. */
        uint64_t sai_gs_err            : 1;  /**< [  1:  1](R/W1C/H) Error on Get State Response. */
        uint64_t reserved_2_3          : 2;
        uint64_t sai_cc_exp            : 4;  /**< [  7:  4](R/W1C/H) Number of SAI cycles expected. */
        uint64_t sai_cc_rcvd           : 4;  /**< [ 11:  8](R/W1C/H) Number of SAI cycles received. */
        uint64_t reserved_12_63        : 52;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_apr_gwc_af_corex_hwerr_s cn; */
};
typedef union cavm_apr_gwc_af_corex_hwerr cavm_apr_gwc_af_corex_hwerr_t;

static inline uint64_t CAVM_APR_GWC_AF_COREX_HWERR(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_APR_GWC_AF_COREX_HWERR(uint64_t a)
{
    if (a<=63)
        return 0x840168080300ll + 0x100000ll * ((a) & 0x3f);
    __cavm_csr_fatal("APR_GWC_AF_COREX_HWERR", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_APR_GWC_AF_COREX_HWERR(a) cavm_apr_gwc_af_corex_hwerr_t
#define bustype_CAVM_APR_GWC_AF_COREX_HWERR(a) CSR_TYPE_RVU_PF_BAR0
#define basename_CAVM_APR_GWC_AF_COREX_HWERR(a) "APR_GWC_AF_COREX_HWERR"
#define device_bar_CAVM_APR_GWC_AF_COREX_HWERR(a) 0x0 /* RVU_BAR0 */
#define busnum_CAVM_APR_GWC_AF_COREX_HWERR(a) (a)
#define arguments_CAVM_APR_GWC_AF_COREX_HWERR(a) (a),-1,-1,-1

/**
 * Register (RVU_PF_BAR0) apr_gwc_af_core#_state#
 *
 * INTERNAL: APR_GWC State Register
 */
union cavm_apr_gwc_af_corex_statex
{
    uint64_t u;
    struct cavm_apr_gwc_af_corex_statex_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_35_63        : 29;
        uint64_t prf_state             : 3;  /**< [ 34: 32](RO/H) Prefetch FSM state. */
        uint64_t pend_prf_gw           : 1;  /**< [ 31: 31](RO/H) Set when there is a pending Getwork for the inactive subslot. */
        uint64_t pend_gw               : 1;  /**< [ 30: 30](RO/H) Set when there is a pending Getwork for the active subslot. */
        uint64_t pend_sw               : 1;  /**< [ 29: 29](RO/H) Set when there is a pending SWTAG or SWTAG_FULL. */
        uint64_t pend_gs               : 1;  /**< [ 28: 28](RO/H) Set when there is a pending Get State Request. */
        uint64_t reserved_25_27        : 3;
        uint64_t pf                    : 5;  /**< [ 24: 20](RO/H) PF number associated with the state Present in GWC. */
        uint64_t func                  : 8;  /**< [ 19: 12](RO/H) FUNC number associated with the state Present in GWC. */
        uint64_t slot                  : 8;  /**< [ 11:  4](RO/H) SLOT number associated with the state Present in GWC. */
        uint64_t reserved_1_3          : 3;
        uint64_t valid                 : 1;  /**< [  0:  0](RO/H) When set GWC state is valid. */
#else /* Word 0 - Little Endian */
        uint64_t valid                 : 1;  /**< [  0:  0](RO/H) When set GWC state is valid. */
        uint64_t reserved_1_3          : 3;
        uint64_t slot                  : 8;  /**< [ 11:  4](RO/H) SLOT number associated with the state Present in GWC. */
        uint64_t func                  : 8;  /**< [ 19: 12](RO/H) FUNC number associated with the state Present in GWC. */
        uint64_t pf                    : 5;  /**< [ 24: 20](RO/H) PF number associated with the state Present in GWC. */
        uint64_t reserved_25_27        : 3;
        uint64_t pend_gs               : 1;  /**< [ 28: 28](RO/H) Set when there is a pending Get State Request. */
        uint64_t pend_sw               : 1;  /**< [ 29: 29](RO/H) Set when there is a pending SWTAG or SWTAG_FULL. */
        uint64_t pend_gw               : 1;  /**< [ 30: 30](RO/H) Set when there is a pending Getwork for the active subslot. */
        uint64_t pend_prf_gw           : 1;  /**< [ 31: 31](RO/H) Set when there is a pending Getwork for the inactive subslot. */
        uint64_t prf_state             : 3;  /**< [ 34: 32](RO/H) Prefetch FSM state. */
        uint64_t reserved_35_63        : 29;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_apr_gwc_af_corex_statex_s cn; */
};
typedef union cavm_apr_gwc_af_corex_statex cavm_apr_gwc_af_corex_statex_t;

static inline uint64_t CAVM_APR_GWC_AF_COREX_STATEX(uint64_t a, uint64_t b) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_APR_GWC_AF_COREX_STATEX(uint64_t a, uint64_t b)
{
    if ((a<=63) && (b<=1))
        return 0x840168080000ll + 0x100000ll * ((a) & 0x3f) + 8ll * ((b) & 0x1);
    __cavm_csr_fatal("APR_GWC_AF_COREX_STATEX", 2, a, b, 0, 0, 0, 0);
}

#define typedef_CAVM_APR_GWC_AF_COREX_STATEX(a,b) cavm_apr_gwc_af_corex_statex_t
#define bustype_CAVM_APR_GWC_AF_COREX_STATEX(a,b) CSR_TYPE_RVU_PF_BAR0
#define basename_CAVM_APR_GWC_AF_COREX_STATEX(a,b) "APR_GWC_AF_COREX_STATEX"
#define device_bar_CAVM_APR_GWC_AF_COREX_STATEX(a,b) 0x0 /* RVU_BAR0 */
#define busnum_CAVM_APR_GWC_AF_COREX_STATEX(a,b) (a)
#define arguments_CAVM_APR_GWC_AF_COREX_STATEX(a,b) (a),(b),-1,-1

/**
 * Register (RVU_PF_BAR0) apr_gwc_af_eco
 *
 * INTERNAL: APR_GWC Shared ECO Register
 */
union cavm_apr_gwc_af_eco
{
    uint64_t u;
    struct cavm_apr_gwc_af_eco_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t eco_rw                : 64; /**< [ 63:  0](R/W) Reserved for ECO usage. */
#else /* Word 0 - Little Endian */
        uint64_t eco_rw                : 64; /**< [ 63:  0](R/W) Reserved for ECO usage. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_apr_gwc_af_eco_s cn; */
};
typedef union cavm_apr_gwc_af_eco cavm_apr_gwc_af_eco_t;

#define CAVM_APR_GWC_AF_ECO CAVM_APR_GWC_AF_ECO_FUNC()
static inline uint64_t CAVM_APR_GWC_AF_ECO_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_APR_GWC_AF_ECO_FUNC(void)
{
    return 0x840160080000ll;
}

#define typedef_CAVM_APR_GWC_AF_ECO cavm_apr_gwc_af_eco_t
#define bustype_CAVM_APR_GWC_AF_ECO CSR_TYPE_RVU_PF_BAR0
#define basename_CAVM_APR_GWC_AF_ECO "APR_GWC_AF_ECO"
#define device_bar_CAVM_APR_GWC_AF_ECO 0x0 /* RVU_BAR0 */
#define busnum_CAVM_APR_GWC_AF_ECO 0
#define arguments_CAVM_APR_GWC_AF_ECO -1,-1,-1,-1

#endif /* __CAVM_CSRS_APR_GWC_H__ */
