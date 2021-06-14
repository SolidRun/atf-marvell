#ifndef __CAVM_CSRS_NCBW_H__
#define __CAVM_CSRS_NCBW_H__
/* This file is auto-generated. Do not edit */

/***********************license start***********************************
* Copyright (C) 2020-2021 Marvell
* SPDX-License-Identifier: BSD-3-Clause
* https://spdx.org/licenses
***********************license end**************************************/


/**
 * @file
 *
 * Configuration and status register (CSR) address and type definitions for
 * OcteonTX NCBW.
 *
 * This file is auto generated. Do not edit.
 *
 */

/**
 * Enumeration ncbw_bar_e
 *
 * INTERNAL: NCBW Base Address Enumeration
 *
 * Enumerates internal sub-bar(s) which specify the address sub-regions used by
 * this block within the BPHY_BAR_E address regions.
 */
#define CAVM_NCBW_BAR_E_NCBW_PF_BAR2 (0x87e043020000ll)
#define CAVM_NCBW_BAR_E_NCBW_PF_BAR2_SIZE 0x10000ull

/**
 * Register (RSL) ncbw_bp_test
 *
 * INTERNAL: NCBW Backpressure Test Register
 */
union cavm_ncbw_bp_test
{
    uint64_t u;
    struct cavm_ncbw_bp_test_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t enable                : 8;  /**< [ 63: 56](R/W) Enable test mode. For diagnostic use only.
                                                                 Internal:
                                                                 Once a bit is set, random backpressure is generated
                                                                 at the corresponding point to allow for more frequent backpressure.
                                                                 Bit \<63\> limits Segment4 NCBO credit return.
                                                                 Bit \<62\> limits Segment4 NCBI NP request.
                                                                 Bit \<61\> limits Segment4 NCBI P request.
                                                                 Bit \<60\> limits Segment4 NCBI CR request.
                                                                 Bit \<59\> limits Segment3 NCBO credit return.
                                                                 Bit \<58\> limits Segment3 NCBI NP request.
                                                                 Bit \<57\> limits Segment3 NCBI P request.
                                                                 Bit \<56\> limits Segment3 NCBI CR request. */
        uint64_t reserved_32_55        : 24;
        uint64_t bp_cfg                : 16; /**< [ 31: 16](R/W) Backpressure weight. For diagnostic use only.
                                                                 Internal:
                                                                 There are 2 backpressure configuration bits per enable, with the two bits
                                                                 defined as 0x0=100% of the time, 0x1=75% of the time, 0x2=50% of the time,
                                                                 0x3=25% of the time.
                                                                 bit \<31:30\> controls Segment4 NCBO credit return BP.
                                                                 bit \<29:28\> controls Segment4 NCBI NP request BP.
                                                                 bit \<27:26\> controls Segment4 NCBI P request BP.
                                                                 bit \<25:24\> controls Segment4 NCBO CR request BP.
                                                                 bit \<23:22\> controls Segment3 NCBO credit return BP.
                                                                 bit \<21:20\> controls Segment3 NCBI NP request BP.
                                                                 bit \<19:18\> controls Segment3 NCBI P request BP.
                                                                 bit \<17:16\> controls Segment3 NCBO CR request BP. */
        uint64_t reserved_12_15        : 4;
        uint64_t lfsr_freq             : 12; /**< [ 11:  0](R/W) Test LFSR update frequency in coprocessor-clocks minus one. */
#else /* Word 0 - Little Endian */
        uint64_t lfsr_freq             : 12; /**< [ 11:  0](R/W) Test LFSR update frequency in coprocessor-clocks minus one. */
        uint64_t reserved_12_15        : 4;
        uint64_t bp_cfg                : 16; /**< [ 31: 16](R/W) Backpressure weight. For diagnostic use only.
                                                                 Internal:
                                                                 There are 2 backpressure configuration bits per enable, with the two bits
                                                                 defined as 0x0=100% of the time, 0x1=75% of the time, 0x2=50% of the time,
                                                                 0x3=25% of the time.
                                                                 bit \<31:30\> controls Segment4 NCBO credit return BP.
                                                                 bit \<29:28\> controls Segment4 NCBI NP request BP.
                                                                 bit \<27:26\> controls Segment4 NCBI P request BP.
                                                                 bit \<25:24\> controls Segment4 NCBO CR request BP.
                                                                 bit \<23:22\> controls Segment3 NCBO credit return BP.
                                                                 bit \<21:20\> controls Segment3 NCBI NP request BP.
                                                                 bit \<19:18\> controls Segment3 NCBI P request BP.
                                                                 bit \<17:16\> controls Segment3 NCBO CR request BP. */
        uint64_t reserved_32_55        : 24;
        uint64_t enable                : 8;  /**< [ 63: 56](R/W) Enable test mode. For diagnostic use only.
                                                                 Internal:
                                                                 Once a bit is set, random backpressure is generated
                                                                 at the corresponding point to allow for more frequent backpressure.
                                                                 Bit \<63\> limits Segment4 NCBO credit return.
                                                                 Bit \<62\> limits Segment4 NCBI NP request.
                                                                 Bit \<61\> limits Segment4 NCBI P request.
                                                                 Bit \<60\> limits Segment4 NCBI CR request.
                                                                 Bit \<59\> limits Segment3 NCBO credit return.
                                                                 Bit \<58\> limits Segment3 NCBI NP request.
                                                                 Bit \<57\> limits Segment3 NCBI P request.
                                                                 Bit \<56\> limits Segment3 NCBI CR request. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_ncbw_bp_test_s cn; */
};
typedef union cavm_ncbw_bp_test cavm_ncbw_bp_test_t;

#define CAVM_NCBW_BP_TEST CAVM_NCBW_BP_TEST_FUNC()
static inline uint64_t CAVM_NCBW_BP_TEST_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_NCBW_BP_TEST_FUNC(void)
{
    return 0x87e043020410ll;
}

#define typedef_CAVM_NCBW_BP_TEST cavm_ncbw_bp_test_t
#define bustype_CAVM_NCBW_BP_TEST CSR_TYPE_RSL
#define basename_CAVM_NCBW_BP_TEST "NCBW_BP_TEST"
#define device_bar_CAVM_NCBW_BP_TEST 0x2 /* PF_BAR2 */
#define busnum_CAVM_NCBW_BP_TEST 0
#define arguments_CAVM_NCBW_BP_TEST -1,-1,-1,-1

/**
 * Register (RSL) ncbw_cfg
 *
 * NCBW Global Configuration Register
 */
union cavm_ncbw_cfg
{
    uint64_t u;
    struct cavm_ncbw_cfg_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_13_63        : 51;
        uint64_t rtt_seg4_sel          : 1;  /**< [ 12: 12](R/W/H) RTT NCB segment4 select.
                                                                 Set to 0 to use NCB segment 3; Default is to use segment 4. */
        uint64_t reserved_8_11         : 4;
        uint64_t mio_timestp_tick      : 4;  /**< [  7:  4](R/W/H) MIO timestamp tick clock. This field specifies the number of ticks in
                                                                 system clock to sample the timestamp value and pass the timestamp value
                                                                 into the BPHY clock domain. The default is to sample once every four system clocks.
                                                                 Setting this field to 1 will sample the timestamp every system clock until
                                                                 an internal 8-entry FIFO is full.
                                                                 Setting this field to 0 will sample the timestamp every 16th system clock. */
        uint64_t reserved_2_3          : 2;
        uint64_t rst_flush             : 1;  /**< [  1:  1](R/W/H) Set one to flush incoming requests from all BPHY devices and to put NCBO requests
                                                                 in bypass mode. For BPHY reset only. */
        uint64_t wgt_clken             : 1;  /**< [  0:  0](R/W) Force the conditional clocking for NCBW itself. For diagnostic use only. */
#else /* Word 0 - Little Endian */
        uint64_t wgt_clken             : 1;  /**< [  0:  0](R/W) Force the conditional clocking for NCBW itself. For diagnostic use only. */
        uint64_t rst_flush             : 1;  /**< [  1:  1](R/W/H) Set one to flush incoming requests from all BPHY devices and to put NCBO requests
                                                                 in bypass mode. For BPHY reset only. */
        uint64_t reserved_2_3          : 2;
        uint64_t mio_timestp_tick      : 4;  /**< [  7:  4](R/W/H) MIO timestamp tick clock. This field specifies the number of ticks in
                                                                 system clock to sample the timestamp value and pass the timestamp value
                                                                 into the BPHY clock domain. The default is to sample once every four system clocks.
                                                                 Setting this field to 1 will sample the timestamp every system clock until
                                                                 an internal 8-entry FIFO is full.
                                                                 Setting this field to 0 will sample the timestamp every 16th system clock. */
        uint64_t reserved_8_11         : 4;
        uint64_t rtt_seg4_sel          : 1;  /**< [ 12: 12](R/W/H) RTT NCB segment4 select.
                                                                 Set to 0 to use NCB segment 3; Default is to use segment 4. */
        uint64_t reserved_13_63        : 51;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_ncbw_cfg_s cn; */
};
typedef union cavm_ncbw_cfg cavm_ncbw_cfg_t;

#define CAVM_NCBW_CFG CAVM_NCBW_CFG_FUNC()
static inline uint64_t CAVM_NCBW_CFG_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_NCBW_CFG_FUNC(void)
{
    return 0x87e043020000ll;
}

#define typedef_CAVM_NCBW_CFG cavm_ncbw_cfg_t
#define bustype_CAVM_NCBW_CFG CSR_TYPE_RSL
#define basename_CAVM_NCBW_CFG "NCBW_CFG"
#define device_bar_CAVM_NCBW_CFG 0x2 /* PF_BAR2 */
#define busnum_CAVM_NCBW_CFG 0
#define arguments_CAVM_NCBW_CFG -1,-1,-1,-1

/**
 * Register (RSL) ncbw_eco
 *
 * INTERNAL: NCBW ECO Register
 */
union cavm_ncbw_eco
{
    uint64_t u;
    struct cavm_ncbw_eco_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_32_63        : 32;
        uint64_t eco_rw                : 32; /**< [ 31:  0](R/W) Internal:
                                                                 Reserved for ECO usage. */
#else /* Word 0 - Little Endian */
        uint64_t eco_rw                : 32; /**< [ 31:  0](R/W) Internal:
                                                                 Reserved for ECO usage. */
        uint64_t reserved_32_63        : 32;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_ncbw_eco_s cn; */
};
typedef union cavm_ncbw_eco cavm_ncbw_eco_t;

#define CAVM_NCBW_ECO CAVM_NCBW_ECO_FUNC()
static inline uint64_t CAVM_NCBW_ECO_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_NCBW_ECO_FUNC(void)
{
    return 0x87e043020400ll;
}

#define typedef_CAVM_NCBW_ECO cavm_ncbw_eco_t
#define bustype_CAVM_NCBW_ECO CSR_TYPE_RSL
#define basename_CAVM_NCBW_ECO "NCBW_ECO"
#define device_bar_CAVM_NCBW_ECO 0x2 /* PF_BAR2 */
#define busnum_CAVM_NCBW_ECO 0
#define arguments_CAVM_NCBW_ECO -1,-1,-1,-1

/**
 * Register (RSL) ncbw_mlab_debug0
 *
 * INTERNAL: NCBW MLAB Debug Register 0
 */
union cavm_ncbw_mlab_debug0
{
    uint64_t u;
    struct cavm_ncbw_mlab_debug0_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t mlab_cdt_cnt          : 32; /**< [ 63: 32](RO/H) NCBW to MLAB return credit count. */
        uint64_t mlab_req_cnt          : 32; /**< [ 31:  0](RO/H) MLAB to NCBW request count. */
#else /* Word 0 - Little Endian */
        uint64_t mlab_req_cnt          : 32; /**< [ 31:  0](RO/H) MLAB to NCBW request count. */
        uint64_t mlab_cdt_cnt          : 32; /**< [ 63: 32](RO/H) NCBW to MLAB return credit count. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_ncbw_mlab_debug0_s cn; */
};
typedef union cavm_ncbw_mlab_debug0 cavm_ncbw_mlab_debug0_t;

#define CAVM_NCBW_MLAB_DEBUG0 CAVM_NCBW_MLAB_DEBUG0_FUNC()
static inline uint64_t CAVM_NCBW_MLAB_DEBUG0_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_NCBW_MLAB_DEBUG0_FUNC(void)
{
    return 0x87e043020200ll;
}

#define typedef_CAVM_NCBW_MLAB_DEBUG0 cavm_ncbw_mlab_debug0_t
#define bustype_CAVM_NCBW_MLAB_DEBUG0 CSR_TYPE_RSL
#define basename_CAVM_NCBW_MLAB_DEBUG0 "NCBW_MLAB_DEBUG0"
#define device_bar_CAVM_NCBW_MLAB_DEBUG0 0x2 /* PF_BAR2 */
#define busnum_CAVM_NCBW_MLAB_DEBUG0 0
#define arguments_CAVM_NCBW_MLAB_DEBUG0 -1,-1,-1,-1

/**
 * Register (RSL) ncbw_mlab_debug1
 *
 * INTERNAL: NCBW MLAB Debug Register 1
 */
union cavm_ncbw_mlab_debug1
{
    uint64_t u;
    struct cavm_ncbw_mlab_debug1_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t mlab_rcmd_cnt         : 32; /**< [ 63: 32](RO/H) NCBW to MLAB read command count (per 64b transaction). */
        uint64_t mlab_wcmd_cnt         : 32; /**< [ 31:  0](RO/H) NCBW to MLAB write command count (per 64b transaction). */
#else /* Word 0 - Little Endian */
        uint64_t mlab_wcmd_cnt         : 32; /**< [ 31:  0](RO/H) NCBW to MLAB write command count (per 64b transaction). */
        uint64_t mlab_rcmd_cnt         : 32; /**< [ 63: 32](RO/H) NCBW to MLAB read command count (per 64b transaction). */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_ncbw_mlab_debug1_s cn; */
};
typedef union cavm_ncbw_mlab_debug1 cavm_ncbw_mlab_debug1_t;

#define CAVM_NCBW_MLAB_DEBUG1 CAVM_NCBW_MLAB_DEBUG1_FUNC()
static inline uint64_t CAVM_NCBW_MLAB_DEBUG1_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_NCBW_MLAB_DEBUG1_FUNC(void)
{
    return 0x87e043020208ll;
}

#define typedef_CAVM_NCBW_MLAB_DEBUG1 cavm_ncbw_mlab_debug1_t
#define bustype_CAVM_NCBW_MLAB_DEBUG1 CSR_TYPE_RSL
#define basename_CAVM_NCBW_MLAB_DEBUG1 "NCBW_MLAB_DEBUG1"
#define device_bar_CAVM_NCBW_MLAB_DEBUG1 0x2 /* PF_BAR2 */
#define busnum_CAVM_NCBW_MLAB_DEBUG1 0
#define arguments_CAVM_NCBW_MLAB_DEBUG1 -1,-1,-1,-1

/**
 * Register (RSL) ncbw_mlab_debug2
 *
 * INTERNAL: NCBW MLAB Debug Register 2
 */
union cavm_ncbw_mlab_debug2
{
    uint64_t u;
    struct cavm_ncbw_mlab_debug2_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t mlab_rrsp_cnt         : 32; /**< [ 63: 32](RO/H) MLAB to NCBW read response count (per 64b transaction). */
        uint64_t mlab_wrsp_cnt         : 32; /**< [ 31:  0](RO/H) MLAB to NCBW write response count (per 64b transaction). */
#else /* Word 0 - Little Endian */
        uint64_t mlab_wrsp_cnt         : 32; /**< [ 31:  0](RO/H) MLAB to NCBW write response count (per 64b transaction). */
        uint64_t mlab_rrsp_cnt         : 32; /**< [ 63: 32](RO/H) MLAB to NCBW read response count (per 64b transaction). */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_ncbw_mlab_debug2_s cn; */
};
typedef union cavm_ncbw_mlab_debug2 cavm_ncbw_mlab_debug2_t;

#define CAVM_NCBW_MLAB_DEBUG2 CAVM_NCBW_MLAB_DEBUG2_FUNC()
static inline uint64_t CAVM_NCBW_MLAB_DEBUG2_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_NCBW_MLAB_DEBUG2_FUNC(void)
{
    return 0x87e043020210ll;
}

#define typedef_CAVM_NCBW_MLAB_DEBUG2 cavm_ncbw_mlab_debug2_t
#define bustype_CAVM_NCBW_MLAB_DEBUG2 CSR_TYPE_RSL
#define basename_CAVM_NCBW_MLAB_DEBUG2 "NCBW_MLAB_DEBUG2"
#define device_bar_CAVM_NCBW_MLAB_DEBUG2 0x2 /* PF_BAR2 */
#define busnum_CAVM_NCBW_MLAB_DEBUG2 0
#define arguments_CAVM_NCBW_MLAB_DEBUG2 -1,-1,-1,-1

/**
 * Register (RSL) ncbw_ncbi_debug0
 *
 * INTERNAL: NCBW NCBI Debug Register 0
 */
union cavm_ncbw_ncbi_debug0
{
    uint64_t u;
    struct cavm_ncbw_ncbi_debug0_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t ncbi_psm_cdt_cnt      : 32; /**< [ 63: 32](RO/H) NCBW to PSM credit return count. */
        uint64_t ncbi_psm_cr_cnt       : 32; /**< [ 31:  0](RO/H) PSM to NCBW write command count. */
#else /* Word 0 - Little Endian */
        uint64_t ncbi_psm_cr_cnt       : 32; /**< [ 31:  0](RO/H) PSM to NCBW write command count. */
        uint64_t ncbi_psm_cdt_cnt      : 32; /**< [ 63: 32](RO/H) NCBW to PSM credit return count. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_ncbw_ncbi_debug0_s cn; */
};
typedef union cavm_ncbw_ncbi_debug0 cavm_ncbw_ncbi_debug0_t;

#define CAVM_NCBW_NCBI_DEBUG0 CAVM_NCBW_NCBI_DEBUG0_FUNC()
static inline uint64_t CAVM_NCBW_NCBI_DEBUG0_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_NCBW_NCBI_DEBUG0_FUNC(void)
{
    return 0x87e043020070ll;
}

#define typedef_CAVM_NCBW_NCBI_DEBUG0 cavm_ncbw_ncbi_debug0_t
#define bustype_CAVM_NCBW_NCBI_DEBUG0 CSR_TYPE_RSL
#define basename_CAVM_NCBW_NCBI_DEBUG0 "NCBW_NCBI_DEBUG0"
#define device_bar_CAVM_NCBW_NCBI_DEBUG0 0x2 /* PF_BAR2 */
#define busnum_CAVM_NCBW_NCBI_DEBUG0 0
#define arguments_CAVM_NCBW_NCBI_DEBUG0 -1,-1,-1,-1

/**
 * Register (RSL) ncbw_ncbi_debug1
 *
 * INTERNAL: NCBW NCBI Debug Register 1
 */
union cavm_ncbw_ncbi_debug1
{
    uint64_t u;
    struct cavm_ncbw_ncbi_debug1_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t ncbi_pnb0_pr_cnt      : 32; /**< [ 63: 32](RO/H) PNB0 to NCBW write command count. */
        uint64_t ncbi_pnb0_npr_cnt     : 32; /**< [ 31:  0](RO/H) PNB0 to NCBW read command count. */
#else /* Word 0 - Little Endian */
        uint64_t ncbi_pnb0_npr_cnt     : 32; /**< [ 31:  0](RO/H) PNB0 to NCBW read command count. */
        uint64_t ncbi_pnb0_pr_cnt      : 32; /**< [ 63: 32](RO/H) PNB0 to NCBW write command count. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_ncbw_ncbi_debug1_s cn; */
};
typedef union cavm_ncbw_ncbi_debug1 cavm_ncbw_ncbi_debug1_t;

#define CAVM_NCBW_NCBI_DEBUG1 CAVM_NCBW_NCBI_DEBUG1_FUNC()
static inline uint64_t CAVM_NCBW_NCBI_DEBUG1_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_NCBW_NCBI_DEBUG1_FUNC(void)
{
    return 0x87e043020078ll;
}

#define typedef_CAVM_NCBW_NCBI_DEBUG1 cavm_ncbw_ncbi_debug1_t
#define bustype_CAVM_NCBW_NCBI_DEBUG1 CSR_TYPE_RSL
#define basename_CAVM_NCBW_NCBI_DEBUG1 "NCBW_NCBI_DEBUG1"
#define device_bar_CAVM_NCBW_NCBI_DEBUG1 0x2 /* PF_BAR2 */
#define busnum_CAVM_NCBW_NCBI_DEBUG1 0
#define arguments_CAVM_NCBW_NCBI_DEBUG1 -1,-1,-1,-1

/**
 * Register (RSL) ncbw_ncbi_debug2
 *
 * INTERNAL: NCBW NCBI Debug Register 2
 */
union cavm_ncbw_ncbi_debug2
{
    uint64_t u;
    struct cavm_ncbw_ncbi_debug2_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t ncbi_pnb0_cdt_cnt     : 32; /**< [ 63: 32](RO/H) NCBW to PNB0 credit return count. */
        uint64_t ncbi_pnb0_cr_cnt      : 32; /**< [ 31:  0](RO/H) PNB0 to NCBW write command count. */
#else /* Word 0 - Little Endian */
        uint64_t ncbi_pnb0_cr_cnt      : 32; /**< [ 31:  0](RO/H) PNB0 to NCBW write command count. */
        uint64_t ncbi_pnb0_cdt_cnt     : 32; /**< [ 63: 32](RO/H) NCBW to PNB0 credit return count. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_ncbw_ncbi_debug2_s cn; */
};
typedef union cavm_ncbw_ncbi_debug2 cavm_ncbw_ncbi_debug2_t;

#define CAVM_NCBW_NCBI_DEBUG2 CAVM_NCBW_NCBI_DEBUG2_FUNC()
static inline uint64_t CAVM_NCBW_NCBI_DEBUG2_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_NCBW_NCBI_DEBUG2_FUNC(void)
{
    return 0x87e043020080ll;
}

#define typedef_CAVM_NCBW_NCBI_DEBUG2 cavm_ncbw_ncbi_debug2_t
#define bustype_CAVM_NCBW_NCBI_DEBUG2 CSR_TYPE_RSL
#define basename_CAVM_NCBW_NCBI_DEBUG2 "NCBW_NCBI_DEBUG2"
#define device_bar_CAVM_NCBW_NCBI_DEBUG2 0x2 /* PF_BAR2 */
#define busnum_CAVM_NCBW_NCBI_DEBUG2 0
#define arguments_CAVM_NCBW_NCBI_DEBUG2 -1,-1,-1,-1

/**
 * Register (RSL) ncbw_ncbi_debug3
 *
 * INTERNAL: NCBW NCBI Debug Register 3
 */
union cavm_ncbw_ncbi_debug3
{
    uint64_t u;
    struct cavm_ncbw_ncbi_debug3_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t ncbi_pnb1_pr_cnt      : 32; /**< [ 63: 32](RO/H) PNB1 to NCBW write command count. */
        uint64_t ncbi_pnb1_npr_cnt     : 32; /**< [ 31:  0](RO/H) PNB1 to NCBW read command count. */
#else /* Word 0 - Little Endian */
        uint64_t ncbi_pnb1_npr_cnt     : 32; /**< [ 31:  0](RO/H) PNB1 to NCBW read command count. */
        uint64_t ncbi_pnb1_pr_cnt      : 32; /**< [ 63: 32](RO/H) PNB1 to NCBW write command count. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_ncbw_ncbi_debug3_s cn; */
};
typedef union cavm_ncbw_ncbi_debug3 cavm_ncbw_ncbi_debug3_t;

#define CAVM_NCBW_NCBI_DEBUG3 CAVM_NCBW_NCBI_DEBUG3_FUNC()
static inline uint64_t CAVM_NCBW_NCBI_DEBUG3_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_NCBW_NCBI_DEBUG3_FUNC(void)
{
    return 0x87e043020088ll;
}

#define typedef_CAVM_NCBW_NCBI_DEBUG3 cavm_ncbw_ncbi_debug3_t
#define bustype_CAVM_NCBW_NCBI_DEBUG3 CSR_TYPE_RSL
#define basename_CAVM_NCBW_NCBI_DEBUG3 "NCBW_NCBI_DEBUG3"
#define device_bar_CAVM_NCBW_NCBI_DEBUG3 0x2 /* PF_BAR2 */
#define busnum_CAVM_NCBW_NCBI_DEBUG3 0
#define arguments_CAVM_NCBW_NCBI_DEBUG3 -1,-1,-1,-1

/**
 * Register (RSL) ncbw_ncbi_debug4
 *
 * INTERNAL: NCBW NCBI Debug Register 4
 */
union cavm_ncbw_ncbi_debug4
{
    uint64_t u;
    struct cavm_ncbw_ncbi_debug4_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t ncbi_pnb1_cdt_cnt     : 32; /**< [ 63: 32](RO/H) NCBW to PNB1 credit return count. */
        uint64_t ncbi_pnb1_cr_cnt      : 32; /**< [ 31:  0](RO/H) PNB1 to NCBW write command count. */
#else /* Word 0 - Little Endian */
        uint64_t ncbi_pnb1_cr_cnt      : 32; /**< [ 31:  0](RO/H) PNB1 to NCBW write command count. */
        uint64_t ncbi_pnb1_cdt_cnt     : 32; /**< [ 63: 32](RO/H) NCBW to PNB1 credit return count. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_ncbw_ncbi_debug4_s cn; */
};
typedef union cavm_ncbw_ncbi_debug4 cavm_ncbw_ncbi_debug4_t;

#define CAVM_NCBW_NCBI_DEBUG4 CAVM_NCBW_NCBI_DEBUG4_FUNC()
static inline uint64_t CAVM_NCBW_NCBI_DEBUG4_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_NCBW_NCBI_DEBUG4_FUNC(void)
{
    return 0x87e043020090ll;
}

#define typedef_CAVM_NCBW_NCBI_DEBUG4 cavm_ncbw_ncbi_debug4_t
#define bustype_CAVM_NCBW_NCBI_DEBUG4 CSR_TYPE_RSL
#define basename_CAVM_NCBW_NCBI_DEBUG4 "NCBW_NCBI_DEBUG4"
#define device_bar_CAVM_NCBW_NCBI_DEBUG4 0x2 /* PF_BAR2 */
#define busnum_CAVM_NCBW_NCBI_DEBUG4 0
#define arguments_CAVM_NCBW_NCBI_DEBUG4 -1,-1,-1,-1

/**
 * Register (RSL) ncbw_ncbo_debug0
 *
 * INTERNAL: NCBW NCBO Debug Register 0
 */
union cavm_ncbw_ncbo_debug0
{
    uint64_t u;
    struct cavm_ncbw_ncbo_debug0_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t ncbo_cdt_cnt          : 32; /**< [ 63: 32](RO/H) NCBW to NCBO return credit count. */
        uint64_t ncbo_req_cnt          : 32; /**< [ 31:  0](RO/H) NCBO to NCBW request count. */
#else /* Word 0 - Little Endian */
        uint64_t ncbo_req_cnt          : 32; /**< [ 31:  0](RO/H) NCBO to NCBW request count. */
        uint64_t ncbo_cdt_cnt          : 32; /**< [ 63: 32](RO/H) NCBW to NCBO return credit count. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_ncbw_ncbo_debug0_s cn; */
};
typedef union cavm_ncbw_ncbo_debug0 cavm_ncbw_ncbo_debug0_t;

#define CAVM_NCBW_NCBO_DEBUG0 CAVM_NCBW_NCBO_DEBUG0_FUNC()
static inline uint64_t CAVM_NCBW_NCBO_DEBUG0_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_NCBW_NCBO_DEBUG0_FUNC(void)
{
    return 0x87e043020020ll;
}

#define typedef_CAVM_NCBW_NCBO_DEBUG0 cavm_ncbw_ncbo_debug0_t
#define bustype_CAVM_NCBW_NCBO_DEBUG0 CSR_TYPE_RSL
#define basename_CAVM_NCBW_NCBO_DEBUG0 "NCBW_NCBO_DEBUG0"
#define device_bar_CAVM_NCBW_NCBO_DEBUG0 0x2 /* PF_BAR2 */
#define busnum_CAVM_NCBW_NCBO_DEBUG0 0
#define arguments_CAVM_NCBW_NCBO_DEBUG0 -1,-1,-1,-1

/**
 * Register (RSL) ncbw_ncbo_debug1
 *
 * INTERNAL: NCBW NCBO Debug Register 1
 */
union cavm_ncbw_ncbo_debug1
{
    uint64_t u;
    struct cavm_ncbw_ncbo_debug1_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t ncbo_npr_cnt          : 32; /**< [ 63: 32](RO/H) NCBO to NCBW read command count. */
        uint64_t ncbo_pr_cnt           : 32; /**< [ 31:  0](RO/H) NCBO to NCBW write command count. */
#else /* Word 0 - Little Endian */
        uint64_t ncbo_pr_cnt           : 32; /**< [ 31:  0](RO/H) NCBO to NCBW write command count. */
        uint64_t ncbo_npr_cnt          : 32; /**< [ 63: 32](RO/H) NCBO to NCBW read command count. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_ncbw_ncbo_debug1_s cn; */
};
typedef union cavm_ncbw_ncbo_debug1 cavm_ncbw_ncbo_debug1_t;

#define CAVM_NCBW_NCBO_DEBUG1 CAVM_NCBW_NCBO_DEBUG1_FUNC()
static inline uint64_t CAVM_NCBW_NCBO_DEBUG1_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_NCBW_NCBO_DEBUG1_FUNC(void)
{
    return 0x87e043020028ll;
}

#define typedef_CAVM_NCBW_NCBO_DEBUG1 cavm_ncbw_ncbo_debug1_t
#define bustype_CAVM_NCBW_NCBO_DEBUG1 CSR_TYPE_RSL
#define basename_CAVM_NCBW_NCBO_DEBUG1 "NCBW_NCBO_DEBUG1"
#define device_bar_CAVM_NCBW_NCBO_DEBUG1 0x2 /* PF_BAR2 */
#define busnum_CAVM_NCBW_NCBO_DEBUG1 0
#define arguments_CAVM_NCBW_NCBO_DEBUG1 -1,-1,-1,-1

/**
 * Register (RSL) ncbw_ncbo_debug2
 *
 * INTERNAL: NCBW NCBO Debug Register 2
 */
union cavm_ncbw_ncbo_debug2
{
    uint64_t u;
    struct cavm_ncbw_ncbo_debug2_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_32_63        : 32;
        uint64_t ncbo_cr_cnt           : 32; /**< [ 31:  0](RO/H) NCBO to NCBW completion command count. */
#else /* Word 0 - Little Endian */
        uint64_t ncbo_cr_cnt           : 32; /**< [ 31:  0](RO/H) NCBO to NCBW completion command count. */
        uint64_t reserved_32_63        : 32;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_ncbw_ncbo_debug2_s cn; */
};
typedef union cavm_ncbw_ncbo_debug2 cavm_ncbw_ncbo_debug2_t;

#define CAVM_NCBW_NCBO_DEBUG2 CAVM_NCBW_NCBO_DEBUG2_FUNC()
static inline uint64_t CAVM_NCBW_NCBO_DEBUG2_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_NCBW_NCBO_DEBUG2_FUNC(void)
{
    return 0x87e043020030ll;
}

#define typedef_CAVM_NCBW_NCBO_DEBUG2 cavm_ncbw_ncbo_debug2_t
#define bustype_CAVM_NCBW_NCBO_DEBUG2 CSR_TYPE_RSL
#define basename_CAVM_NCBW_NCBO_DEBUG2 "NCBW_NCBO_DEBUG2"
#define device_bar_CAVM_NCBW_NCBO_DEBUG2 0x2 /* PF_BAR2 */
#define busnum_CAVM_NCBW_NCBO_DEBUG2 0
#define arguments_CAVM_NCBW_NCBO_DEBUG2 -1,-1,-1,-1

/**
 * Register (RSL) ncbw_ncbo_debug3
 *
 * INTERNAL: NCBW NCBO Debug Register 3
 */
union cavm_ncbw_ncbo_debug3
{
    uint64_t u;
    struct cavm_ncbw_ncbo_debug3_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t ncbo_unsup_cnt        : 32; /**< [ 63: 32](RO/H) NCBO to NCBW unsupported command count. */
        uint64_t ncbo_ldbyp_cnt        : 32; /**< [ 31:  0](RO/H) NCBO to NCBW IOBLDx command count during reset flush. */
#else /* Word 0 - Little Endian */
        uint64_t ncbo_ldbyp_cnt        : 32; /**< [ 31:  0](RO/H) NCBO to NCBW IOBLDx command count during reset flush. */
        uint64_t ncbo_unsup_cnt        : 32; /**< [ 63: 32](RO/H) NCBO to NCBW unsupported command count. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_ncbw_ncbo_debug3_s cn; */
};
typedef union cavm_ncbw_ncbo_debug3 cavm_ncbw_ncbo_debug3_t;

#define CAVM_NCBW_NCBO_DEBUG3 CAVM_NCBW_NCBO_DEBUG3_FUNC()
static inline uint64_t CAVM_NCBW_NCBO_DEBUG3_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_NCBW_NCBO_DEBUG3_FUNC(void)
{
    return 0x87e043020038ll;
}

#define typedef_CAVM_NCBW_NCBO_DEBUG3 cavm_ncbw_ncbo_debug3_t
#define bustype_CAVM_NCBW_NCBO_DEBUG3 CSR_TYPE_RSL
#define basename_CAVM_NCBW_NCBO_DEBUG3 "NCBW_NCBO_DEBUG3"
#define device_bar_CAVM_NCBW_NCBO_DEBUG3 0x2 /* PF_BAR2 */
#define busnum_CAVM_NCBW_NCBO_DEBUG3 0
#define arguments_CAVM_NCBW_NCBO_DEBUG3 -1,-1,-1,-1

/**
 * Register (RSL) ncbw_ncbo_debug4
 *
 * INTERNAL: NCBW NCBO Debug Register 4
 */
union cavm_ncbw_ncbo_debug4
{
    uint64_t u;
    struct cavm_ncbw_ncbo_debug4_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t ncbo_psm_cdt_cnt      : 32; /**< [ 63: 32](RO/H) PSM to NCBW credit return count. */
        uint64_t ncbo_psm_req_cnt      : 32; /**< [ 31:  0](RO/H) NCBW to PSM request command count. */
#else /* Word 0 - Little Endian */
        uint64_t ncbo_psm_req_cnt      : 32; /**< [ 31:  0](RO/H) NCBW to PSM request command count. */
        uint64_t ncbo_psm_cdt_cnt      : 32; /**< [ 63: 32](RO/H) PSM to NCBW credit return count. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_ncbw_ncbo_debug4_s cn; */
};
typedef union cavm_ncbw_ncbo_debug4 cavm_ncbw_ncbo_debug4_t;

#define CAVM_NCBW_NCBO_DEBUG4 CAVM_NCBW_NCBO_DEBUG4_FUNC()
static inline uint64_t CAVM_NCBW_NCBO_DEBUG4_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_NCBW_NCBO_DEBUG4_FUNC(void)
{
    return 0x87e043020040ll;
}

#define typedef_CAVM_NCBW_NCBO_DEBUG4 cavm_ncbw_ncbo_debug4_t
#define bustype_CAVM_NCBW_NCBO_DEBUG4 CSR_TYPE_RSL
#define basename_CAVM_NCBW_NCBO_DEBUG4 "NCBW_NCBO_DEBUG4"
#define device_bar_CAVM_NCBW_NCBO_DEBUG4 0x2 /* PF_BAR2 */
#define busnum_CAVM_NCBW_NCBO_DEBUG4 0
#define arguments_CAVM_NCBW_NCBO_DEBUG4 -1,-1,-1,-1

/**
 * Register (RSL) ncbw_ncbo_debug5
 *
 * INTERNAL: NCBW NCBO Debug Register 5
 */
union cavm_ncbw_ncbo_debug5
{
    uint64_t u;
    struct cavm_ncbw_ncbo_debug5_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t ncbo_pnb0_cdt_cnt     : 32; /**< [ 63: 32](RO/H) PNB0 to NCBW credit return count. */
        uint64_t ncbo_pnb0_req_cnt     : 32; /**< [ 31:  0](RO/H) NCBW to PNB0 request command count. */
#else /* Word 0 - Little Endian */
        uint64_t ncbo_pnb0_req_cnt     : 32; /**< [ 31:  0](RO/H) NCBW to PNB0 request command count. */
        uint64_t ncbo_pnb0_cdt_cnt     : 32; /**< [ 63: 32](RO/H) PNB0 to NCBW credit return count. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_ncbw_ncbo_debug5_s cn; */
};
typedef union cavm_ncbw_ncbo_debug5 cavm_ncbw_ncbo_debug5_t;

#define CAVM_NCBW_NCBO_DEBUG5 CAVM_NCBW_NCBO_DEBUG5_FUNC()
static inline uint64_t CAVM_NCBW_NCBO_DEBUG5_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_NCBW_NCBO_DEBUG5_FUNC(void)
{
    return 0x87e043020048ll;
}

#define typedef_CAVM_NCBW_NCBO_DEBUG5 cavm_ncbw_ncbo_debug5_t
#define bustype_CAVM_NCBW_NCBO_DEBUG5 CSR_TYPE_RSL
#define basename_CAVM_NCBW_NCBO_DEBUG5 "NCBW_NCBO_DEBUG5"
#define device_bar_CAVM_NCBW_NCBO_DEBUG5 0x2 /* PF_BAR2 */
#define busnum_CAVM_NCBW_NCBO_DEBUG5 0
#define arguments_CAVM_NCBW_NCBO_DEBUG5 -1,-1,-1,-1

/**
 * Register (RSL) ncbw_ncbo_debug6
 *
 * INTERNAL: NCBW NCBO Debug Register 6
 */
union cavm_ncbw_ncbo_debug6
{
    uint64_t u;
    struct cavm_ncbw_ncbo_debug6_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t ncbo_pnb1_cdt_cnt     : 32; /**< [ 63: 32](RO/H) PNB1 to NCBW credit return count. */
        uint64_t ncbo_pnb1_req_cnt     : 32; /**< [ 31:  0](RO/H) NCBW to PNB1 request command count. */
#else /* Word 0 - Little Endian */
        uint64_t ncbo_pnb1_req_cnt     : 32; /**< [ 31:  0](RO/H) NCBW to PNB1 request command count. */
        uint64_t ncbo_pnb1_cdt_cnt     : 32; /**< [ 63: 32](RO/H) PNB1 to NCBW credit return count. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_ncbw_ncbo_debug6_s cn; */
};
typedef union cavm_ncbw_ncbo_debug6 cavm_ncbw_ncbo_debug6_t;

#define CAVM_NCBW_NCBO_DEBUG6 CAVM_NCBW_NCBO_DEBUG6_FUNC()
static inline uint64_t CAVM_NCBW_NCBO_DEBUG6_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_NCBW_NCBO_DEBUG6_FUNC(void)
{
    return 0x87e043020050ll;
}

#define typedef_CAVM_NCBW_NCBO_DEBUG6 cavm_ncbw_ncbo_debug6_t
#define bustype_CAVM_NCBW_NCBO_DEBUG6 CSR_TYPE_RSL
#define basename_CAVM_NCBW_NCBO_DEBUG6 "NCBW_NCBO_DEBUG6"
#define device_bar_CAVM_NCBW_NCBO_DEBUG6 0x2 /* PF_BAR2 */
#define busnum_CAVM_NCBW_NCBO_DEBUG6 0
#define arguments_CAVM_NCBW_NCBO_DEBUG6 -1,-1,-1,-1

/**
 * Register (RSL) ncbw_ncbo_debug7
 *
 * INTERNAL: NCBW NCBO Debug Register 7
 */
union cavm_ncbw_ncbo_debug7
{
    uint64_t u;
    struct cavm_ncbw_ncbo_debug7_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t ncbo_psm_pr_cnt       : 32; /**< [ 63: 32](RO/H) NCBW to PSM write command count. */
        uint64_t ncbo_psm_npr_cnt      : 32; /**< [ 31:  0](RO/H) NCBW to PSM read command count. */
#else /* Word 0 - Little Endian */
        uint64_t ncbo_psm_npr_cnt      : 32; /**< [ 31:  0](RO/H) NCBW to PSM read command count. */
        uint64_t ncbo_psm_pr_cnt       : 32; /**< [ 63: 32](RO/H) NCBW to PSM write command count. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_ncbw_ncbo_debug7_s cn; */
};
typedef union cavm_ncbw_ncbo_debug7 cavm_ncbw_ncbo_debug7_t;

#define CAVM_NCBW_NCBO_DEBUG7 CAVM_NCBW_NCBO_DEBUG7_FUNC()
static inline uint64_t CAVM_NCBW_NCBO_DEBUG7_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_NCBW_NCBO_DEBUG7_FUNC(void)
{
    return 0x87e043020058ll;
}

#define typedef_CAVM_NCBW_NCBO_DEBUG7 cavm_ncbw_ncbo_debug7_t
#define bustype_CAVM_NCBW_NCBO_DEBUG7 CSR_TYPE_RSL
#define basename_CAVM_NCBW_NCBO_DEBUG7 "NCBW_NCBO_DEBUG7"
#define device_bar_CAVM_NCBW_NCBO_DEBUG7 0x2 /* PF_BAR2 */
#define busnum_CAVM_NCBW_NCBO_DEBUG7 0
#define arguments_CAVM_NCBW_NCBO_DEBUG7 -1,-1,-1,-1

/**
 * Register (RSL) ncbw_ncbo_debug8
 *
 * INTERNAL: NCBW NCBO Debug Register 8
 */
union cavm_ncbw_ncbo_debug8
{
    uint64_t u;
    struct cavm_ncbw_ncbo_debug8_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t ncbo_pnb0_pr_cnt      : 32; /**< [ 63: 32](RO/H) NCBW to PNB0 write command count. */
        uint64_t ncbo_pnb0_npr_cnt     : 32; /**< [ 31:  0](RO/H) NCBW to PNB0 read command count. */
#else /* Word 0 - Little Endian */
        uint64_t ncbo_pnb0_npr_cnt     : 32; /**< [ 31:  0](RO/H) NCBW to PNB0 read command count. */
        uint64_t ncbo_pnb0_pr_cnt      : 32; /**< [ 63: 32](RO/H) NCBW to PNB0 write command count. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_ncbw_ncbo_debug8_s cn; */
};
typedef union cavm_ncbw_ncbo_debug8 cavm_ncbw_ncbo_debug8_t;

#define CAVM_NCBW_NCBO_DEBUG8 CAVM_NCBW_NCBO_DEBUG8_FUNC()
static inline uint64_t CAVM_NCBW_NCBO_DEBUG8_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_NCBW_NCBO_DEBUG8_FUNC(void)
{
    return 0x87e043020060ll;
}

#define typedef_CAVM_NCBW_NCBO_DEBUG8 cavm_ncbw_ncbo_debug8_t
#define bustype_CAVM_NCBW_NCBO_DEBUG8 CSR_TYPE_RSL
#define basename_CAVM_NCBW_NCBO_DEBUG8 "NCBW_NCBO_DEBUG8"
#define device_bar_CAVM_NCBW_NCBO_DEBUG8 0x2 /* PF_BAR2 */
#define busnum_CAVM_NCBW_NCBO_DEBUG8 0
#define arguments_CAVM_NCBW_NCBO_DEBUG8 -1,-1,-1,-1

/**
 * Register (RSL) ncbw_ncbo_debug9
 *
 * INTERNAL: NCBW NCBO Debug Register 9
 */
union cavm_ncbw_ncbo_debug9
{
    uint64_t u;
    struct cavm_ncbw_ncbo_debug9_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t ncbo_pnb1_pr_cnt      : 32; /**< [ 63: 32](RO/H) NCBW to PNB1 write command count. */
        uint64_t ncbo_pnb1_npr_cnt     : 32; /**< [ 31:  0](RO/H) NCBW to PNB1 read command count. */
#else /* Word 0 - Little Endian */
        uint64_t ncbo_pnb1_npr_cnt     : 32; /**< [ 31:  0](RO/H) NCBW to PNB1 read command count. */
        uint64_t ncbo_pnb1_pr_cnt      : 32; /**< [ 63: 32](RO/H) NCBW to PNB1 write command count. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_ncbw_ncbo_debug9_s cn; */
};
typedef union cavm_ncbw_ncbo_debug9 cavm_ncbw_ncbo_debug9_t;

#define CAVM_NCBW_NCBO_DEBUG9 CAVM_NCBW_NCBO_DEBUG9_FUNC()
static inline uint64_t CAVM_NCBW_NCBO_DEBUG9_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_NCBW_NCBO_DEBUG9_FUNC(void)
{
    return 0x87e043020068ll;
}

#define typedef_CAVM_NCBW_NCBO_DEBUG9 cavm_ncbw_ncbo_debug9_t
#define bustype_CAVM_NCBW_NCBO_DEBUG9 CSR_TYPE_RSL
#define basename_CAVM_NCBW_NCBO_DEBUG9 "NCBW_NCBO_DEBUG9"
#define device_bar_CAVM_NCBW_NCBO_DEBUG9 0x2 /* PF_BAR2 */
#define busnum_CAVM_NCBW_NCBO_DEBUG9 0
#define arguments_CAVM_NCBW_NCBO_DEBUG9 -1,-1,-1,-1

/**
 * Register (RSL) ncbw_rfif#_debug0
 *
 * INTERNAL: NCBW RFIF Debug Register 0
 */
union cavm_ncbw_rfifx_debug0
{
    uint64_t u;
    struct cavm_ncbw_rfifx_debug0_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t rfoe_rcmd_cnt         : 32; /**< [ 63: 32](RO/H) NCBW to RFOE read command count (per 64b transaction). */
        uint64_t rfoe_wcmd_cnt         : 32; /**< [ 31:  0](RO/H) NCBW to RFOE write command count (per 64b transaction). */
#else /* Word 0 - Little Endian */
        uint64_t rfoe_wcmd_cnt         : 32; /**< [ 31:  0](RO/H) NCBW to RFOE write command count (per 64b transaction). */
        uint64_t rfoe_rcmd_cnt         : 32; /**< [ 63: 32](RO/H) NCBW to RFOE read command count (per 64b transaction). */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_ncbw_rfifx_debug0_s cn; */
};
typedef union cavm_ncbw_rfifx_debug0 cavm_ncbw_rfifx_debug0_t;

static inline uint64_t CAVM_NCBW_RFIFX_DEBUG0(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_NCBW_RFIFX_DEBUG0(uint64_t a)
{
    if (a<=3)
        return 0x87e043020100ll + 0x40ll * ((a) & 0x3);
    __cavm_csr_fatal("NCBW_RFIFX_DEBUG0", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_NCBW_RFIFX_DEBUG0(a) cavm_ncbw_rfifx_debug0_t
#define bustype_CAVM_NCBW_RFIFX_DEBUG0(a) CSR_TYPE_RSL
#define basename_CAVM_NCBW_RFIFX_DEBUG0(a) "NCBW_RFIFX_DEBUG0"
#define device_bar_CAVM_NCBW_RFIFX_DEBUG0(a) 0x2 /* PF_BAR2 */
#define busnum_CAVM_NCBW_RFIFX_DEBUG0(a) (a)
#define arguments_CAVM_NCBW_RFIFX_DEBUG0(a) (a),-1,-1,-1

/**
 * Register (RSL) ncbw_rfif#_debug1
 *
 * INTERNAL: NCBW RFIF Debug Register 1
 */
union cavm_ncbw_rfifx_debug1
{
    uint64_t u;
    struct cavm_ncbw_rfifx_debug1_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t cpri_rcmd_cnt         : 32; /**< [ 63: 32](RO/H) NCBW to CPRI read command count (per 64b transaction). */
        uint64_t cpri_wcmd_cnt         : 32; /**< [ 31:  0](RO/H) NCBW to CPRI write command count (per 64b transaction). */
#else /* Word 0 - Little Endian */
        uint64_t cpri_wcmd_cnt         : 32; /**< [ 31:  0](RO/H) NCBW to CPRI write command count (per 64b transaction). */
        uint64_t cpri_rcmd_cnt         : 32; /**< [ 63: 32](RO/H) NCBW to CPRI read command count (per 64b transaction). */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_ncbw_rfifx_debug1_s cn; */
};
typedef union cavm_ncbw_rfifx_debug1 cavm_ncbw_rfifx_debug1_t;

static inline uint64_t CAVM_NCBW_RFIFX_DEBUG1(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_NCBW_RFIFX_DEBUG1(uint64_t a)
{
    if (a<=3)
        return 0x87e043020108ll + 0x40ll * ((a) & 0x3);
    __cavm_csr_fatal("NCBW_RFIFX_DEBUG1", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_NCBW_RFIFX_DEBUG1(a) cavm_ncbw_rfifx_debug1_t
#define bustype_CAVM_NCBW_RFIFX_DEBUG1(a) CSR_TYPE_RSL
#define basename_CAVM_NCBW_RFIFX_DEBUG1(a) "NCBW_RFIFX_DEBUG1"
#define device_bar_CAVM_NCBW_RFIFX_DEBUG1(a) 0x2 /* PF_BAR2 */
#define busnum_CAVM_NCBW_RFIFX_DEBUG1(a) (a)
#define arguments_CAVM_NCBW_RFIFX_DEBUG1(a) (a),-1,-1,-1

/**
 * Register (RSL) ncbw_rfif#_debug2
 *
 * INTERNAL: NCBW RFIF Debug Register 2
 */
union cavm_ncbw_rfifx_debug2
{
    uint64_t u;
    struct cavm_ncbw_rfifx_debug2_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t cprm_rcmd_cnt         : 32; /**< [ 63: 32](RO/H) NCBW to CPRM read command count (per 64b transaction). */
        uint64_t cprm_wcmd_cnt         : 32; /**< [ 31:  0](RO/H) NCBW to CPRM write command count (per 64b transaction). */
#else /* Word 0 - Little Endian */
        uint64_t cprm_wcmd_cnt         : 32; /**< [ 31:  0](RO/H) NCBW to CPRM write command count (per 64b transaction). */
        uint64_t cprm_rcmd_cnt         : 32; /**< [ 63: 32](RO/H) NCBW to CPRM read command count (per 64b transaction). */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_ncbw_rfifx_debug2_s cn; */
};
typedef union cavm_ncbw_rfifx_debug2 cavm_ncbw_rfifx_debug2_t;

static inline uint64_t CAVM_NCBW_RFIFX_DEBUG2(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_NCBW_RFIFX_DEBUG2(uint64_t a)
{
    if (a<=3)
        return 0x87e043020110ll + 0x40ll * ((a) & 0x3);
    __cavm_csr_fatal("NCBW_RFIFX_DEBUG2", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_NCBW_RFIFX_DEBUG2(a) cavm_ncbw_rfifx_debug2_t
#define bustype_CAVM_NCBW_RFIFX_DEBUG2(a) CSR_TYPE_RSL
#define basename_CAVM_NCBW_RFIFX_DEBUG2(a) "NCBW_RFIFX_DEBUG2"
#define device_bar_CAVM_NCBW_RFIFX_DEBUG2(a) 0x2 /* PF_BAR2 */
#define busnum_CAVM_NCBW_RFIFX_DEBUG2(a) (a)
#define arguments_CAVM_NCBW_RFIFX_DEBUG2(a) (a),-1,-1,-1

/**
 * Register (RSL) ncbw_rfif#_debug3
 *
 * INTERNAL: NCBW RFIF Debug Register 3
 */
union cavm_ncbw_rfifx_debug3
{
    uint64_t u;
    struct cavm_ncbw_rfifx_debug3_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t rfif_req_cnt          : 32; /**< [ 63: 32](RO/H) NCBW to RFIF request count (per interface cycle). */
        uint64_t rfif_cdt_cnt          : 32; /**< [ 31:  0](RO/H) RFIF to NCBW credit return count (per interface cycle). */
#else /* Word 0 - Little Endian */
        uint64_t rfif_cdt_cnt          : 32; /**< [ 31:  0](RO/H) RFIF to NCBW credit return count (per interface cycle). */
        uint64_t rfif_req_cnt          : 32; /**< [ 63: 32](RO/H) NCBW to RFIF request count (per interface cycle). */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_ncbw_rfifx_debug3_s cn; */
};
typedef union cavm_ncbw_rfifx_debug3 cavm_ncbw_rfifx_debug3_t;

static inline uint64_t CAVM_NCBW_RFIFX_DEBUG3(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_NCBW_RFIFX_DEBUG3(uint64_t a)
{
    if (a<=3)
        return 0x87e043020118ll + 0x40ll * ((a) & 0x3);
    __cavm_csr_fatal("NCBW_RFIFX_DEBUG3", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_NCBW_RFIFX_DEBUG3(a) cavm_ncbw_rfifx_debug3_t
#define bustype_CAVM_NCBW_RFIFX_DEBUG3(a) CSR_TYPE_RSL
#define basename_CAVM_NCBW_RFIFX_DEBUG3(a) "NCBW_RFIFX_DEBUG3"
#define device_bar_CAVM_NCBW_RFIFX_DEBUG3(a) 0x2 /* PF_BAR2 */
#define busnum_CAVM_NCBW_RFIFX_DEBUG3(a) (a)
#define arguments_CAVM_NCBW_RFIFX_DEBUG3(a) (a),-1,-1,-1

/**
 * Register (RSL) ncbw_rfif#_debug4
 *
 * INTERNAL: NCBW RFIF Debug Register 4
 */
union cavm_ncbw_rfifx_debug4
{
    uint64_t u;
    struct cavm_ncbw_rfifx_debug4_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t rfoe_rrsp_cnt         : 32; /**< [ 63: 32](RO/H) RFOE to NCBW read response count (per 64b transaction). */
        uint64_t rfoe_wrsp_cnt         : 32; /**< [ 31:  0](RO/H) RFOE to NCBW write response count (per 64b transaction). */
#else /* Word 0 - Little Endian */
        uint64_t rfoe_wrsp_cnt         : 32; /**< [ 31:  0](RO/H) RFOE to NCBW write response count (per 64b transaction). */
        uint64_t rfoe_rrsp_cnt         : 32; /**< [ 63: 32](RO/H) RFOE to NCBW read response count (per 64b transaction). */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_ncbw_rfifx_debug4_s cn; */
};
typedef union cavm_ncbw_rfifx_debug4 cavm_ncbw_rfifx_debug4_t;

static inline uint64_t CAVM_NCBW_RFIFX_DEBUG4(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_NCBW_RFIFX_DEBUG4(uint64_t a)
{
    if (a<=3)
        return 0x87e043020120ll + 0x40ll * ((a) & 0x3);
    __cavm_csr_fatal("NCBW_RFIFX_DEBUG4", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_NCBW_RFIFX_DEBUG4(a) cavm_ncbw_rfifx_debug4_t
#define bustype_CAVM_NCBW_RFIFX_DEBUG4(a) CSR_TYPE_RSL
#define basename_CAVM_NCBW_RFIFX_DEBUG4(a) "NCBW_RFIFX_DEBUG4"
#define device_bar_CAVM_NCBW_RFIFX_DEBUG4(a) 0x2 /* PF_BAR2 */
#define busnum_CAVM_NCBW_RFIFX_DEBUG4(a) (a)
#define arguments_CAVM_NCBW_RFIFX_DEBUG4(a) (a),-1,-1,-1

/**
 * Register (RSL) ncbw_rfif#_debug5
 *
 * INTERNAL: NCBW RFIF Debug Register 5
 */
union cavm_ncbw_rfifx_debug5
{
    uint64_t u;
    struct cavm_ncbw_rfifx_debug5_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t cpri_rrsp_cnt         : 32; /**< [ 63: 32](RO/H) CPRI to NCBW read response count (per 64b transaction). */
        uint64_t cpri_wrsp_cnt         : 32; /**< [ 31:  0](RO/H) CPRI to NCBW write response count (per 64b transaction). */
#else /* Word 0 - Little Endian */
        uint64_t cpri_wrsp_cnt         : 32; /**< [ 31:  0](RO/H) CPRI to NCBW write response count (per 64b transaction). */
        uint64_t cpri_rrsp_cnt         : 32; /**< [ 63: 32](RO/H) CPRI to NCBW read response count (per 64b transaction). */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_ncbw_rfifx_debug5_s cn; */
};
typedef union cavm_ncbw_rfifx_debug5 cavm_ncbw_rfifx_debug5_t;

static inline uint64_t CAVM_NCBW_RFIFX_DEBUG5(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_NCBW_RFIFX_DEBUG5(uint64_t a)
{
    if (a<=3)
        return 0x87e043020128ll + 0x40ll * ((a) & 0x3);
    __cavm_csr_fatal("NCBW_RFIFX_DEBUG5", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_NCBW_RFIFX_DEBUG5(a) cavm_ncbw_rfifx_debug5_t
#define bustype_CAVM_NCBW_RFIFX_DEBUG5(a) CSR_TYPE_RSL
#define basename_CAVM_NCBW_RFIFX_DEBUG5(a) "NCBW_RFIFX_DEBUG5"
#define device_bar_CAVM_NCBW_RFIFX_DEBUG5(a) 0x2 /* PF_BAR2 */
#define busnum_CAVM_NCBW_RFIFX_DEBUG5(a) (a)
#define arguments_CAVM_NCBW_RFIFX_DEBUG5(a) (a),-1,-1,-1

/**
 * Register (RSL) ncbw_rfif#_debug6
 *
 * INTERNAL: NCBW RFIF Debug Register 6
 */
union cavm_ncbw_rfifx_debug6
{
    uint64_t u;
    struct cavm_ncbw_rfifx_debug6_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t cprm_rrsp_cnt         : 32; /**< [ 63: 32](RO/H) CPRM to NCBW read response count (per 64b transaction). */
        uint64_t cprm_wrsp_cnt         : 32; /**< [ 31:  0](RO/H) CPRM to NCBW write response count (per 64b transaction). */
#else /* Word 0 - Little Endian */
        uint64_t cprm_wrsp_cnt         : 32; /**< [ 31:  0](RO/H) CPRM to NCBW write response count (per 64b transaction). */
        uint64_t cprm_rrsp_cnt         : 32; /**< [ 63: 32](RO/H) CPRM to NCBW read response count (per 64b transaction). */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_ncbw_rfifx_debug6_s cn; */
};
typedef union cavm_ncbw_rfifx_debug6 cavm_ncbw_rfifx_debug6_t;

static inline uint64_t CAVM_NCBW_RFIFX_DEBUG6(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_NCBW_RFIFX_DEBUG6(uint64_t a)
{
    if (a<=3)
        return 0x87e043020130ll + 0x40ll * ((a) & 0x3);
    __cavm_csr_fatal("NCBW_RFIFX_DEBUG6", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_NCBW_RFIFX_DEBUG6(a) cavm_ncbw_rfifx_debug6_t
#define bustype_CAVM_NCBW_RFIFX_DEBUG6(a) CSR_TYPE_RSL
#define basename_CAVM_NCBW_RFIFX_DEBUG6(a) "NCBW_RFIFX_DEBUG6"
#define device_bar_CAVM_NCBW_RFIFX_DEBUG6(a) 0x2 /* PF_BAR2 */
#define busnum_CAVM_NCBW_RFIFX_DEBUG6(a) (a)
#define arguments_CAVM_NCBW_RFIFX_DEBUG6(a) (a),-1,-1,-1

/**
 * Register (RSL) ncbw_rtt_debug0
 *
 * INTERNAL: NCBW RTT Debug Register 0
 */
union cavm_ncbw_rtt_debug0
{
    uint64_t u;
    struct cavm_ncbw_rtt_debug0_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t ncbi_rtt_pr_trans_cnt : 32; /**< [ 63: 32](RO/H) RTT to NCBW write command count (per transaction). */
        uint64_t ncbi_rtt_pr_cnt       : 32; /**< [ 31:  0](RO/H) RTT to NCBW write command count (per write data cycle). */
#else /* Word 0 - Little Endian */
        uint64_t ncbi_rtt_pr_cnt       : 32; /**< [ 31:  0](RO/H) RTT to NCBW write command count (per write data cycle). */
        uint64_t ncbi_rtt_pr_trans_cnt : 32; /**< [ 63: 32](RO/H) RTT to NCBW write command count (per transaction). */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_ncbw_rtt_debug0_s cn; */
};
typedef union cavm_ncbw_rtt_debug0 cavm_ncbw_rtt_debug0_t;

#define CAVM_NCBW_RTT_DEBUG0 CAVM_NCBW_RTT_DEBUG0_FUNC()
static inline uint64_t CAVM_NCBW_RTT_DEBUG0_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_NCBW_RTT_DEBUG0_FUNC(void)
{
    return 0x87e0430200b0ll;
}

#define typedef_CAVM_NCBW_RTT_DEBUG0 cavm_ncbw_rtt_debug0_t
#define bustype_CAVM_NCBW_RTT_DEBUG0 CSR_TYPE_RSL
#define basename_CAVM_NCBW_RTT_DEBUG0 "NCBW_RTT_DEBUG0"
#define device_bar_CAVM_NCBW_RTT_DEBUG0 0x2 /* PF_BAR2 */
#define busnum_CAVM_NCBW_RTT_DEBUG0 0
#define arguments_CAVM_NCBW_RTT_DEBUG0 -1,-1,-1,-1

/**
 * Register (RSL) ncbw_rtt_debug1
 *
 * INTERNAL: NCBW RTT Debug Register 1
 */
union cavm_ncbw_rtt_debug1
{
    uint64_t u;
    struct cavm_ncbw_rtt_debug1_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t ncbi_rtt_cdt_cnt      : 32; /**< [ 63: 32](RO/H) NCBW to RTT credit return count. */
        uint64_t ncbi_rtt_npr_cnt      : 32; /**< [ 31:  0](RO/H) RTT to NCBW read command count. */
#else /* Word 0 - Little Endian */
        uint64_t ncbi_rtt_npr_cnt      : 32; /**< [ 31:  0](RO/H) RTT to NCBW read command count. */
        uint64_t ncbi_rtt_cdt_cnt      : 32; /**< [ 63: 32](RO/H) NCBW to RTT credit return count. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_ncbw_rtt_debug1_s cn; */
};
typedef union cavm_ncbw_rtt_debug1 cavm_ncbw_rtt_debug1_t;

#define CAVM_NCBW_RTT_DEBUG1 CAVM_NCBW_RTT_DEBUG1_FUNC()
static inline uint64_t CAVM_NCBW_RTT_DEBUG1_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_NCBW_RTT_DEBUG1_FUNC(void)
{
    return 0x87e0430200b8ll;
}

#define typedef_CAVM_NCBW_RTT_DEBUG1 cavm_ncbw_rtt_debug1_t
#define bustype_CAVM_NCBW_RTT_DEBUG1 CSR_TYPE_RSL
#define basename_CAVM_NCBW_RTT_DEBUG1 "NCBW_RTT_DEBUG1"
#define device_bar_CAVM_NCBW_RTT_DEBUG1 0x2 /* PF_BAR2 */
#define busnum_CAVM_NCBW_RTT_DEBUG1 0
#define arguments_CAVM_NCBW_RTT_DEBUG1 -1,-1,-1,-1

/**
 * Register (RSL) ncbw_rtt_debug2
 *
 * INTERNAL: NCBW RTT Debug Register 2
 */
union cavm_ncbw_rtt_debug2
{
    uint64_t u;
    struct cavm_ncbw_rtt_debug2_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t ncbi_rtt_wrsp_cnt     : 32; /**< [ 63: 32](RO/H) NCBW to RTT write response count. */
        uint64_t ncbi_rtt_rrsp_cnt     : 32; /**< [ 31:  0](RO/H) NCBW to RTT read response count (per read transaction). */
#else /* Word 0 - Little Endian */
        uint64_t ncbi_rtt_rrsp_cnt     : 32; /**< [ 31:  0](RO/H) NCBW to RTT read response count (per read transaction). */
        uint64_t ncbi_rtt_wrsp_cnt     : 32; /**< [ 63: 32](RO/H) NCBW to RTT write response count. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_ncbw_rtt_debug2_s cn; */
};
typedef union cavm_ncbw_rtt_debug2 cavm_ncbw_rtt_debug2_t;

#define CAVM_NCBW_RTT_DEBUG2 CAVM_NCBW_RTT_DEBUG2_FUNC()
static inline uint64_t CAVM_NCBW_RTT_DEBUG2_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_NCBW_RTT_DEBUG2_FUNC(void)
{
    return 0x87e0430200c0ll;
}

#define typedef_CAVM_NCBW_RTT_DEBUG2 cavm_ncbw_rtt_debug2_t
#define bustype_CAVM_NCBW_RTT_DEBUG2 CSR_TYPE_RSL
#define basename_CAVM_NCBW_RTT_DEBUG2 "NCBW_RTT_DEBUG2"
#define device_bar_CAVM_NCBW_RTT_DEBUG2 0x2 /* PF_BAR2 */
#define busnum_CAVM_NCBW_RTT_DEBUG2 0
#define arguments_CAVM_NCBW_RTT_DEBUG2 -1,-1,-1,-1

/**
 * Register (RSL) ncbw_scratch
 *
 * INTERNAL: NCBW Scratch Register
 */
union cavm_ncbw_scratch
{
    uint64_t u;
    struct cavm_ncbw_scratch_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t scratch               : 64; /**< [ 63:  0](R/W)  */
#else /* Word 0 - Little Endian */
        uint64_t scratch               : 64; /**< [ 63:  0](R/W)  */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_ncbw_scratch_s cn; */
};
typedef union cavm_ncbw_scratch cavm_ncbw_scratch_t;

#define CAVM_NCBW_SCRATCH CAVM_NCBW_SCRATCH_FUNC()
static inline uint64_t CAVM_NCBW_SCRATCH_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_NCBW_SCRATCH_FUNC(void)
{
    return 0x87e043020408ll;
}

#define typedef_CAVM_NCBW_SCRATCH cavm_ncbw_scratch_t
#define bustype_CAVM_NCBW_SCRATCH CSR_TYPE_RSL
#define basename_CAVM_NCBW_SCRATCH "NCBW_SCRATCH"
#define device_bar_CAVM_NCBW_SCRATCH 0x2 /* PF_BAR2 */
#define busnum_CAVM_NCBW_SCRATCH 0
#define arguments_CAVM_NCBW_SCRATCH -1,-1,-1,-1

/**
 * Register (RSL) ncbw_status
 *
 * NCBW Global Status Register
 */
union cavm_ncbw_status
{
    uint64_t u;
    struct cavm_ncbw_status_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_9_63         : 55;
        uint64_t bphy_freq_changing    : 1;  /**< [  8:  8](RO/H) BPHY-PLL is changing frequency when set to one. */
        uint64_t reserved_5_7          : 3;
        uint64_t ncbw_flush_done       : 1;  /**< [  4:  4](RO/H) NCBW reset flush done. It is set by hardware when SSO, NPA, NCBI, and NCBO reset
                                                                 flush are done. */
        uint64_t sso_flush_done        : 1;  /**< [  3:  3](RO/H) SSO interface flush done when set to one. For BPHY reset only. */
        uint64_t npa_flush_done        : 1;  /**< [  2:  2](RO/H) NPA interface flush done when set to one. For BPHY reset only. */
        uint64_t ncbo_flush_done       : 1;  /**< [  1:  1](RO/H) NCBO interface flush done when set to one. For BPHY reset only. */
        uint64_t ncbi_flush_done       : 1;  /**< [  0:  0](RO/H) NCBI interface flush done when set to one. For BPHY reset only. */
#else /* Word 0 - Little Endian */
        uint64_t ncbi_flush_done       : 1;  /**< [  0:  0](RO/H) NCBI interface flush done when set to one. For BPHY reset only. */
        uint64_t ncbo_flush_done       : 1;  /**< [  1:  1](RO/H) NCBO interface flush done when set to one. For BPHY reset only. */
        uint64_t npa_flush_done        : 1;  /**< [  2:  2](RO/H) NPA interface flush done when set to one. For BPHY reset only. */
        uint64_t sso_flush_done        : 1;  /**< [  3:  3](RO/H) SSO interface flush done when set to one. For BPHY reset only. */
        uint64_t ncbw_flush_done       : 1;  /**< [  4:  4](RO/H) NCBW reset flush done. It is set by hardware when SSO, NPA, NCBI, and NCBO reset
                                                                 flush are done. */
        uint64_t reserved_5_7          : 3;
        uint64_t bphy_freq_changing    : 1;  /**< [  8:  8](RO/H) BPHY-PLL is changing frequency when set to one. */
        uint64_t reserved_9_63         : 55;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_ncbw_status_s cn; */
};
typedef union cavm_ncbw_status cavm_ncbw_status_t;

#define CAVM_NCBW_STATUS CAVM_NCBW_STATUS_FUNC()
static inline uint64_t CAVM_NCBW_STATUS_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_NCBW_STATUS_FUNC(void)
{
    return 0x87e043020008ll;
}

#define typedef_CAVM_NCBW_STATUS cavm_ncbw_status_t
#define bustype_CAVM_NCBW_STATUS CSR_TYPE_RSL
#define basename_CAVM_NCBW_STATUS "NCBW_STATUS"
#define device_bar_CAVM_NCBW_STATUS 0x2 /* PF_BAR2 */
#define busnum_CAVM_NCBW_STATUS 0
#define arguments_CAVM_NCBW_STATUS -1,-1,-1,-1

#endif /* __CAVM_CSRS_NCBW_H__ */
