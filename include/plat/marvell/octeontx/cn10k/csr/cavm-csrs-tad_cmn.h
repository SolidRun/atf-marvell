#ifndef __CAVM_CSRS_TAD_CMN_H__
#define __CAVM_CSRS_TAD_CMN_H__
/* This file is auto-generated. Do not edit */

/***********************license start***********************************
* Copyright (C) 2020 Marvell International Ltd.
* SPDX-License-Identifier: BSD-3-Clause
* https://spdx.org/licenses
***********************license end**************************************/


/**
 * @file
 *
 * Configuration and status register (CSR) address and type definitions for
 * OcteonTX TAD_CMN.
 *
 * This file is auto generated. Do not edit.
 *
 */

/**
 * Enumeration tad_cmn_bar_e
 *
 * TAD Common Base Address Register Enumeration
 * Enumerates the base address registers.
 */
#define CAVM_TAD_CMN_BAR_E_TAD_CMN_PF_BAR0 (0x87e053000000ll)
#define CAVM_TAD_CMN_BAR_E_TAD_CMN_PF_BAR0_SIZE 0x10000ull

/**
 * Register (RSL) tad_cmn_cache_flush
 *
 * TAD Common Cache Flush Register
 * Controls TAD cache flush behavior.
 */
union cavm_tad_cmn_cache_flush
{
    uint64_t u;
    struct cavm_tad_cmn_cache_flush_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_21_63        : 43;
        uint64_t idxcnt                : 9;  /**< [ 20: 12](R/W/H) This register sets the number of cache indices to flush starting from [IDXSTART]. */
        uint64_t idxstart              : 9;  /**< [ 11:  3](R/W/H) This register sets the start cache index. */
        uint64_t flush_type            : 2;  /**< [  2:  1](R/W/H) This register controls the type of cache flush.

                                                                 0 = CleanInvalid (Invalidate all caches. Write back dirty data to DRAM.)
                                                                 1 = MakeInvalid  (Invalidate all caches. Throwing away dirty data.)
                                                                 2 = CleanShared  (Write back all dirty data to DRAM. Transitioning the block to
                                                                                   the clean state while leaving it in all caches.)
                                                                 3 = Reserved. */
        uint64_t start                 : 1;  /**< [  0:  0](R/W/H) When this bit is set, TADs will block all requests from the mesh and start
                                                                 issuing dataless transactions to flush the cache. This bit is a one-shot write
                                                                 and will automatically clear.

                                                                 Software should poll TAD()_CACHE_FLUSH_STATUS[DONE] to determine when the
                                                                 operation has finished for each TAD. */
#else /* Word 0 - Little Endian */
        uint64_t start                 : 1;  /**< [  0:  0](R/W/H) When this bit is set, TADs will block all requests from the mesh and start
                                                                 issuing dataless transactions to flush the cache. This bit is a one-shot write
                                                                 and will automatically clear.

                                                                 Software should poll TAD()_CACHE_FLUSH_STATUS[DONE] to determine when the
                                                                 operation has finished for each TAD. */
        uint64_t flush_type            : 2;  /**< [  2:  1](R/W/H) This register controls the type of cache flush.

                                                                 0 = CleanInvalid (Invalidate all caches. Write back dirty data to DRAM.)
                                                                 1 = MakeInvalid  (Invalidate all caches. Throwing away dirty data.)
                                                                 2 = CleanShared  (Write back all dirty data to DRAM. Transitioning the block to
                                                                                   the clean state while leaving it in all caches.)
                                                                 3 = Reserved. */
        uint64_t idxstart              : 9;  /**< [ 11:  3](R/W/H) This register sets the start cache index. */
        uint64_t idxcnt                : 9;  /**< [ 20: 12](R/W/H) This register sets the number of cache indices to flush starting from [IDXSTART]. */
        uint64_t reserved_21_63        : 43;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_tad_cmn_cache_flush_s cn; */
};
typedef union cavm_tad_cmn_cache_flush cavm_tad_cmn_cache_flush_t;

#define CAVM_TAD_CMN_CACHE_FLUSH CAVM_TAD_CMN_CACHE_FLUSH_FUNC()
static inline uint64_t CAVM_TAD_CMN_CACHE_FLUSH_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_TAD_CMN_CACHE_FLUSH_FUNC(void)
{
    return 0x87e053000010ll;
}

#define typedef_CAVM_TAD_CMN_CACHE_FLUSH cavm_tad_cmn_cache_flush_t
#define bustype_CAVM_TAD_CMN_CACHE_FLUSH CSR_TYPE_RSL
#define basename_CAVM_TAD_CMN_CACHE_FLUSH "TAD_CMN_CACHE_FLUSH"
#define device_bar_CAVM_TAD_CMN_CACHE_FLUSH 0x0 /* PF_BAR0 */
#define busnum_CAVM_TAD_CMN_CACHE_FLUSH 0
#define arguments_CAVM_TAD_CMN_CACHE_FLUSH -1,-1,-1,-1

/**
 * Register (RSL) tad_cmn_cbusy
 *
 * TAD Common CBUSY Control Register
 * Controls CBUSY behavior.
 */
union cavm_tad_cmn_cbusy
{
    uint64_t u;
    struct cavm_tad_cmn_cbusy_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t ddr_timeout           : 32; /**< [ 63: 32](R/W) DDR CBUSY minimum timeout value. Every DDR PartID CBUSY value is stored and valid
                                                                 for at least the duration of this value. After which the DDR PartID CBUSY is no
                                                                 longer part of TAD CBUSY as it is considered stale.

                                                                 Values are in units of 10ns. */
        uint64_t tad_cbusy1_busy_trsh  : 7;  /**< [ 31: 25](R/W) This register sets the threshold at which TAD resources are considered busy.
                                                                 Max value is 72. */
        uint64_t tad_cbusy1_free_trsh  : 7;  /**< [ 24: 18](R/W) This register sets the threshold at which TAD resources are considered free.
                                                                 Max value is 72. */
        uint64_t tad_cbusy0_busy_trsh  : 7;  /**< [ 17: 11](R/W) This register sets the threshold at which MPAM PartID is considered busy.
                                                                 Max value is 72. */
        uint64_t tad_cbusy0_free_trsh  : 7;  /**< [ 10:  4](R/W) This register sets the threshold at which MPAM PartID is considered free.
                                                                 Max value is 72. */
        uint64_t ddr_cbusy_en          : 2;  /**< [  3:  2](R/W) This register enables ORing DDR bits into CBUSY responses. */
        uint64_t tad_cbusy_en          : 2;  /**< [  1:  0](R/W) This register enables ORing TAD bits into CBUSY responses. */
#else /* Word 0 - Little Endian */
        uint64_t tad_cbusy_en          : 2;  /**< [  1:  0](R/W) This register enables ORing TAD bits into CBUSY responses. */
        uint64_t ddr_cbusy_en          : 2;  /**< [  3:  2](R/W) This register enables ORing DDR bits into CBUSY responses. */
        uint64_t tad_cbusy0_free_trsh  : 7;  /**< [ 10:  4](R/W) This register sets the threshold at which MPAM PartID is considered free.
                                                                 Max value is 72. */
        uint64_t tad_cbusy0_busy_trsh  : 7;  /**< [ 17: 11](R/W) This register sets the threshold at which MPAM PartID is considered busy.
                                                                 Max value is 72. */
        uint64_t tad_cbusy1_free_trsh  : 7;  /**< [ 24: 18](R/W) This register sets the threshold at which TAD resources are considered free.
                                                                 Max value is 72. */
        uint64_t tad_cbusy1_busy_trsh  : 7;  /**< [ 31: 25](R/W) This register sets the threshold at which TAD resources are considered busy.
                                                                 Max value is 72. */
        uint64_t ddr_timeout           : 32; /**< [ 63: 32](R/W) DDR CBUSY minimum timeout value. Every DDR PartID CBUSY value is stored and valid
                                                                 for at least the duration of this value. After which the DDR PartID CBUSY is no
                                                                 longer part of TAD CBUSY as it is considered stale.

                                                                 Values are in units of 10ns. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_tad_cmn_cbusy_s cn; */
};
typedef union cavm_tad_cmn_cbusy cavm_tad_cmn_cbusy_t;

#define CAVM_TAD_CMN_CBUSY CAVM_TAD_CMN_CBUSY_FUNC()
static inline uint64_t CAVM_TAD_CMN_CBUSY_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_TAD_CMN_CBUSY_FUNC(void)
{
    return 0x87e053000020ll;
}

#define typedef_CAVM_TAD_CMN_CBUSY cavm_tad_cmn_cbusy_t
#define bustype_CAVM_TAD_CMN_CBUSY CSR_TYPE_RSL
#define basename_CAVM_TAD_CMN_CBUSY "TAD_CMN_CBUSY"
#define device_bar_CAVM_TAD_CMN_CBUSY 0x0 /* PF_BAR0 */
#define busnum_CAVM_TAD_CMN_CBUSY 0
#define arguments_CAVM_TAD_CMN_CBUSY -1,-1,-1,-1

/**
 * Register (RSL) tad_cmn_const
 *
 * TAD Constants Register
 * This register contains TAD constants for software discovery.
 * Internal:
 * FIXME: How to specify this in an IP-centric way?
 */
union cavm_tad_cmn_const
{
    uint64_t u;
    struct cavm_tad_cmn_const_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_56_63        : 8;
        uint64_t dtgways               : 8;  /**< [ 55: 48](RO) Specifies the number of DTG ways in a TAD. */
        uint64_t dtgsets               : 12; /**< [ 47: 36](RO) Specifies the number of DTG sets in a TAD. */
        uint64_t ltgways               : 8;  /**< [ 35: 28](RO) Specifies the number of LTG ways in a TAD. */
        uint64_t ltgsets               : 12; /**< [ 27: 16](RO) Specifies the number of LTG sets in a TAD. */
        uint64_t num_tads              : 8;  /**< [ 15:  8](RO) Specifies the number of TADs. */
        uint64_t num_rows              : 4;  /**< [  7:  4](RO) Specifies the number of columns of tiles. */
        uint64_t num_cols              : 4;  /**< [  3:  0](RO) Specifies the number of columns of tiles. */
#else /* Word 0 - Little Endian */
        uint64_t num_cols              : 4;  /**< [  3:  0](RO) Specifies the number of columns of tiles. */
        uint64_t num_rows              : 4;  /**< [  7:  4](RO) Specifies the number of columns of tiles. */
        uint64_t num_tads              : 8;  /**< [ 15:  8](RO) Specifies the number of TADs. */
        uint64_t ltgsets               : 12; /**< [ 27: 16](RO) Specifies the number of LTG sets in a TAD. */
        uint64_t ltgways               : 8;  /**< [ 35: 28](RO) Specifies the number of LTG ways in a TAD. */
        uint64_t dtgsets               : 12; /**< [ 47: 36](RO) Specifies the number of DTG sets in a TAD. */
        uint64_t dtgways               : 8;  /**< [ 55: 48](RO) Specifies the number of DTG ways in a TAD. */
        uint64_t reserved_56_63        : 8;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_tad_cmn_const_s cn; */
};
typedef union cavm_tad_cmn_const cavm_tad_cmn_const_t;

#define CAVM_TAD_CMN_CONST CAVM_TAD_CMN_CONST_FUNC()
static inline uint64_t CAVM_TAD_CMN_CONST_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_TAD_CMN_CONST_FUNC(void)
{
    return 0x87e053000028ll;
}

#define typedef_CAVM_TAD_CMN_CONST cavm_tad_cmn_const_t
#define bustype_CAVM_TAD_CMN_CONST CSR_TYPE_RSL
#define basename_CAVM_TAD_CMN_CONST "TAD_CMN_CONST"
#define device_bar_CAVM_TAD_CMN_CONST 0x0 /* PF_BAR0 */
#define busnum_CAVM_TAD_CMN_CONST 0
#define arguments_CAVM_TAD_CMN_CONST -1,-1,-1,-1

/**
 * Register (RSL) tad_cmn_ctl
 *
 * TAD Common Control Register
 * Controls TAD behavior.
 */
union cavm_tad_cmn_ctl
{
    uint64_t u;
    struct cavm_tad_cmn_ctl_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t cclk_dis              : 1;  /**< [ 63: 63](R/W) Disable power saving TAD conditional clocking. For diagnostic use only. */
        uint64_t tag_cclk_dis          : 1;  /**< [ 62: 62](R/W) Disable power saving TAD conditional clocking. For diagnostic use only. */
        uint64_t ltg_cclk_dis          : 1;  /**< [ 61: 61](R/W) Disable power saving TAD conditional clocking. For diagnostic use only. */
        uint64_t dtg_cclk_dis          : 1;  /**< [ 60: 60](R/W) Disable power saving TAD conditional clocking. For diagnostic use only. */
        uint64_t ctldat_cclk_dis       : 1;  /**< [ 59: 59](R/W) Disable power saving TAD conditional clocking. For diagnostic use only. */
        uint64_t dat_cclk_dis          : 1;  /**< [ 58: 58](R/W) Disable power saving TAD conditional clocking. For diagnostic use only. */
        uint64_t rsp_cclk_dis          : 1;  /**< [ 57: 57](R/W) Disable power saving TAD conditional clocking. For diagnostic use only. */
        uint64_t snp_cclk_dis          : 1;  /**< [ 56: 56](R/W) Disable power saving TAD conditional clocking. For diagnostic use only. */
        uint64_t txsnp_cclk_dis        : 1;  /**< [ 55: 55](R/W) Disable power saving TAD conditional clocking. For diagnostic use only. */
        uint64_t txreq_cclk_dis        : 1;  /**< [ 54: 54](R/W) Disable power saving TAD conditional clocking. For diagnostic use only. */
        uint64_t rxtbl_cclk_dis        : 1;  /**< [ 53: 53](R/W) Disable power saving TAD conditional clocking. For diagnostic use only. */
        uint64_t csr_cclk_dis          : 1;  /**< [ 52: 52](R/W) Disable power saving TAD conditional clocking. For diagnostic use only. */
        uint64_t lnk_tx_cclk_dis       : 1;  /**< [ 51: 51](R/W) Disable power saving TAD conditional clocking. For diagnostic use only. */
        uint64_t lnk_rx_cclk_dis       : 1;  /**< [ 50: 50](R/W) Disable power saving TAD conditional clocking. For diagnostic use only. */
        uint64_t sam_cclk_dis          : 1;  /**< [ 49: 49](R/W) Disable power saving TAD conditional clocking. For diagnostic use only. */
        uint64_t reserved_8_48         : 41;
        uint64_t diswrstash            : 1;  /**< [  7:  7](R/W) When set, disable stash behavior for WriteUniqueFullStash/WriteUniquePtlStash. */
        uint64_t disstashonce          : 1;  /**< [  6:  6](R/W) When set, disable stash behavior for StashOnceUnique/StashOnceShared. */
        uint64_t discor                : 1;  /**< [  5:  5](R/W) Disable correction in the mesh ECC checkers/generators. */
        uint64_t dispsn                : 1;  /**< [  4:  4](R/W) Disable poison code creation and detection in the mesh ECC checkers/generators. */
        uint64_t disdmt                : 1;  /**< [  3:  3](R/W) When set, disable direct memory transfer. */
        uint64_t disdct                : 1;  /**< [  2:  2](R/W) When set, disable direct cache transfer. */
        uint64_t disdwt                : 1;  /**< [  1:  1](R/W) When set, disable direct write transfer. */
        uint64_t frcnalc               : 1;  /**< [  0:  0](R/W) When set, all cache accesses are forced to not allocate in the TAD LTG. */
#else /* Word 0 - Little Endian */
        uint64_t frcnalc               : 1;  /**< [  0:  0](R/W) When set, all cache accesses are forced to not allocate in the TAD LTG. */
        uint64_t disdwt                : 1;  /**< [  1:  1](R/W) When set, disable direct write transfer. */
        uint64_t disdct                : 1;  /**< [  2:  2](R/W) When set, disable direct cache transfer. */
        uint64_t disdmt                : 1;  /**< [  3:  3](R/W) When set, disable direct memory transfer. */
        uint64_t dispsn                : 1;  /**< [  4:  4](R/W) Disable poison code creation and detection in the mesh ECC checkers/generators. */
        uint64_t discor                : 1;  /**< [  5:  5](R/W) Disable correction in the mesh ECC checkers/generators. */
        uint64_t disstashonce          : 1;  /**< [  6:  6](R/W) When set, disable stash behavior for StashOnceUnique/StashOnceShared. */
        uint64_t diswrstash            : 1;  /**< [  7:  7](R/W) When set, disable stash behavior for WriteUniqueFullStash/WriteUniquePtlStash. */
        uint64_t reserved_8_48         : 41;
        uint64_t sam_cclk_dis          : 1;  /**< [ 49: 49](R/W) Disable power saving TAD conditional clocking. For diagnostic use only. */
        uint64_t lnk_rx_cclk_dis       : 1;  /**< [ 50: 50](R/W) Disable power saving TAD conditional clocking. For diagnostic use only. */
        uint64_t lnk_tx_cclk_dis       : 1;  /**< [ 51: 51](R/W) Disable power saving TAD conditional clocking. For diagnostic use only. */
        uint64_t csr_cclk_dis          : 1;  /**< [ 52: 52](R/W) Disable power saving TAD conditional clocking. For diagnostic use only. */
        uint64_t rxtbl_cclk_dis        : 1;  /**< [ 53: 53](R/W) Disable power saving TAD conditional clocking. For diagnostic use only. */
        uint64_t txreq_cclk_dis        : 1;  /**< [ 54: 54](R/W) Disable power saving TAD conditional clocking. For diagnostic use only. */
        uint64_t txsnp_cclk_dis        : 1;  /**< [ 55: 55](R/W) Disable power saving TAD conditional clocking. For diagnostic use only. */
        uint64_t snp_cclk_dis          : 1;  /**< [ 56: 56](R/W) Disable power saving TAD conditional clocking. For diagnostic use only. */
        uint64_t rsp_cclk_dis          : 1;  /**< [ 57: 57](R/W) Disable power saving TAD conditional clocking. For diagnostic use only. */
        uint64_t dat_cclk_dis          : 1;  /**< [ 58: 58](R/W) Disable power saving TAD conditional clocking. For diagnostic use only. */
        uint64_t ctldat_cclk_dis       : 1;  /**< [ 59: 59](R/W) Disable power saving TAD conditional clocking. For diagnostic use only. */
        uint64_t dtg_cclk_dis          : 1;  /**< [ 60: 60](R/W) Disable power saving TAD conditional clocking. For diagnostic use only. */
        uint64_t ltg_cclk_dis          : 1;  /**< [ 61: 61](R/W) Disable power saving TAD conditional clocking. For diagnostic use only. */
        uint64_t tag_cclk_dis          : 1;  /**< [ 62: 62](R/W) Disable power saving TAD conditional clocking. For diagnostic use only. */
        uint64_t cclk_dis              : 1;  /**< [ 63: 63](R/W) Disable power saving TAD conditional clocking. For diagnostic use only. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_tad_cmn_ctl_s cn; */
};
typedef union cavm_tad_cmn_ctl cavm_tad_cmn_ctl_t;

#define CAVM_TAD_CMN_CTL CAVM_TAD_CMN_CTL_FUNC()
static inline uint64_t CAVM_TAD_CMN_CTL_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_TAD_CMN_CTL_FUNC(void)
{
    return 0x87e053000008ll;
}

#define typedef_CAVM_TAD_CMN_CTL cavm_tad_cmn_ctl_t
#define bustype_CAVM_TAD_CMN_CTL CSR_TYPE_RSL
#define basename_CAVM_TAD_CMN_CTL "TAD_CMN_CTL"
#define device_bar_CAVM_TAD_CMN_CTL 0x0 /* PF_BAR0 */
#define busnum_CAVM_TAD_CMN_CTL 0
#define arguments_CAVM_TAD_CMN_CTL -1,-1,-1,-1

/**
 * Register (RSL) tad_cmn_mpam#_mask
 *
 * TAD Common Memory Partitioning Mask Registers
 * MPAM partitioning.
 */
union cavm_tad_cmn_mpamx_mask
{
    uint64_t u;
    struct cavm_tad_cmn_mpamx_mask_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_28_63        : 36;
        uint64_t dtg                   : 12; /**< [ 27: 16](R/W) Each bit set to 0 prevents the use of the corresponding DTG way by sources that
                                                                 are using this MPAMID. It is illegal to prevent all DTG ways from being used. */
        uint64_t ltg                   : 16; /**< [ 15:  0](R/W) Each bit set to 0 prevents the use of the corresponding LTG way by sources
                                                                 that are using this MPAMID. */
#else /* Word 0 - Little Endian */
        uint64_t ltg                   : 16; /**< [ 15:  0](R/W) Each bit set to 0 prevents the use of the corresponding LTG way by sources
                                                                 that are using this MPAMID. */
        uint64_t dtg                   : 12; /**< [ 27: 16](R/W) Each bit set to 0 prevents the use of the corresponding DTG way by sources that
                                                                 are using this MPAMID. It is illegal to prevent all DTG ways from being used. */
        uint64_t reserved_28_63        : 36;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_tad_cmn_mpamx_mask_s cn; */
};
typedef union cavm_tad_cmn_mpamx_mask cavm_tad_cmn_mpamx_mask_t;

static inline uint64_t CAVM_TAD_CMN_MPAMX_MASK(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_TAD_CMN_MPAMX_MASK(uint64_t a)
{
    if (a<=255)
        return 0x87e053001000ll + 8ll * ((a) & 0xff);
    __cavm_csr_fatal("TAD_CMN_MPAMX_MASK", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_TAD_CMN_MPAMX_MASK(a) cavm_tad_cmn_mpamx_mask_t
#define bustype_CAVM_TAD_CMN_MPAMX_MASK(a) CSR_TYPE_RSL
#define basename_CAVM_TAD_CMN_MPAMX_MASK(a) "TAD_CMN_MPAMX_MASK"
#define device_bar_CAVM_TAD_CMN_MPAMX_MASK(a) 0x0 /* PF_BAR0 */
#define busnum_CAVM_TAD_CMN_MPAMX_MASK(a) (a)
#define arguments_CAVM_TAD_CMN_MPAMX_MASK(a) (a),-1,-1,-1

/**
 * Register (RSL) tad_cmn_req_retry
 *
 * TAD Common Request Retry Control Register
 * Controls TAD Request retry settings.
 */
union cavm_tad_cmn_req_retry
{
    uint64_t u;
    struct cavm_tad_cmn_req_retry_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_20_63        : 44;
        uint64_t sadr_pcrdtype_dis     : 8;  /**< [ 19: 12](R/W) This register disables same address retry hardware. */
        uint64_t sadr_req_high_wmark   : 6;  /**< [ 11:  6](R/W) This register controls the number of same address REQs that can be stored in
                                                                 buffers before issuing a same address retry.

                                                                 If set to 0, same address retries are all disabled. */
        uint64_t sadr_req_low_wmark    : 6;  /**< [  5:  0](R/W) After same address REQS exceed [SADR_REQ_HIGH_WMARK] and a retry is issued,
                                                                 this register controls the number of same address REQs allowed in buffers
                                                                 before issuing PcrdGrants. PcrdGrants are issued whenever the number of
                                                                 same address REQs in buffers fall below this number. */
#else /* Word 0 - Little Endian */
        uint64_t sadr_req_low_wmark    : 6;  /**< [  5:  0](R/W) After same address REQS exceed [SADR_REQ_HIGH_WMARK] and a retry is issued,
                                                                 this register controls the number of same address REQs allowed in buffers
                                                                 before issuing PcrdGrants. PcrdGrants are issued whenever the number of
                                                                 same address REQs in buffers fall below this number. */
        uint64_t sadr_req_high_wmark   : 6;  /**< [ 11:  6](R/W) This register controls the number of same address REQs that can be stored in
                                                                 buffers before issuing a same address retry.

                                                                 If set to 0, same address retries are all disabled. */
        uint64_t sadr_pcrdtype_dis     : 8;  /**< [ 19: 12](R/W) This register disables same address retry hardware. */
        uint64_t reserved_20_63        : 44;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_tad_cmn_req_retry_s cn; */
};
typedef union cavm_tad_cmn_req_retry cavm_tad_cmn_req_retry_t;

#define CAVM_TAD_CMN_REQ_RETRY CAVM_TAD_CMN_REQ_RETRY_FUNC()
static inline uint64_t CAVM_TAD_CMN_REQ_RETRY_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_TAD_CMN_REQ_RETRY_FUNC(void)
{
    return 0x87e053000018ll;
}

#define typedef_CAVM_TAD_CMN_REQ_RETRY cavm_tad_cmn_req_retry_t
#define bustype_CAVM_TAD_CMN_REQ_RETRY CSR_TYPE_RSL
#define basename_CAVM_TAD_CMN_REQ_RETRY "TAD_CMN_REQ_RETRY"
#define device_bar_CAVM_TAD_CMN_REQ_RETRY 0x0 /* PF_BAR0 */
#define busnum_CAVM_TAD_CMN_REQ_RETRY 0
#define arguments_CAVM_TAD_CMN_REQ_RETRY -1,-1,-1,-1

/**
 * Register (RSL) tad_cmn_scratch
 *
 * INTERNAL: TAD_CMN General Purpose Scratch Register
 *
 * These registers are reset only by hardware during chip cold reset. The values of the CSR
 * fields in these registers do not change during chip warm or soft resets.
 */
union cavm_tad_cmn_scratch
{
    uint64_t u;
    struct cavm_tad_cmn_scratch_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_8_63         : 56;
        uint64_t scratch               : 8;  /**< [  7:  0](R/W) General purpose scratch register. */
#else /* Word 0 - Little Endian */
        uint64_t scratch               : 8;  /**< [  7:  0](R/W) General purpose scratch register. */
        uint64_t reserved_8_63         : 56;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_tad_cmn_scratch_s cn; */
};
typedef union cavm_tad_cmn_scratch cavm_tad_cmn_scratch_t;

#define CAVM_TAD_CMN_SCRATCH CAVM_TAD_CMN_SCRATCH_FUNC()
static inline uint64_t CAVM_TAD_CMN_SCRATCH_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_TAD_CMN_SCRATCH_FUNC(void)
{
    return 0x87e053000000ll;
}

#define typedef_CAVM_TAD_CMN_SCRATCH cavm_tad_cmn_scratch_t
#define bustype_CAVM_TAD_CMN_SCRATCH CSR_TYPE_RSL
#define basename_CAVM_TAD_CMN_SCRATCH "TAD_CMN_SCRATCH"
#define device_bar_CAVM_TAD_CMN_SCRATCH 0x0 /* PF_BAR0 */
#define busnum_CAVM_TAD_CMN_SCRATCH 0
#define arguments_CAVM_TAD_CMN_SCRATCH -1,-1,-1,-1

#endif /* __CAVM_CSRS_TAD_CMN_H__ */
