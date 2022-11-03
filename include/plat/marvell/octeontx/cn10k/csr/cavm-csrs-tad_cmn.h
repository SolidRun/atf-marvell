#ifndef __CAVM_CSRS_TAD_CMN_H__
#define __CAVM_CSRS_TAD_CMN_H__
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
#define CAVM_TAD_CMN_BAR_E_TAD_CMN_PF_BAR0_CN10KA (0x87e053000000ll)
#define CAVM_TAD_CMN_BAR_E_TAD_CMN_PF_BAR0_CN10KA_SIZE 0x10000ull
#define CAVM_TAD_CMN_BAR_E_TAD_CMN_PF_BAR0_CN10KB (0x87e053000000ll)
#define CAVM_TAD_CMN_BAR_E_TAD_CMN_PF_BAR0_CN10KB_SIZE 0x100000ull
#define CAVM_TAD_CMN_BAR_E_TAD_CMN_PF_BAR0_CNF10KA (0x87e053000000ll)
#define CAVM_TAD_CMN_BAR_E_TAD_CMN_PF_BAR0_CNF10KA_SIZE 0x10000ull
#define CAVM_TAD_CMN_BAR_E_TAD_CMN_PF_BAR0_CNF10KB (0x87e053000000ll)
#define CAVM_TAD_CMN_BAR_E_TAD_CMN_PF_BAR0_CNF10KB_SIZE 0x10000ull

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
    /* struct cavm_tad_cmn_cache_flush_s cn10; */
    /* struct cavm_tad_cmn_cache_flush_s cn10ka; */
    struct cavm_tad_cmn_cache_flush_cn10kb
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_21_63        : 43;
        uint64_t idxcnt                : 9;  /**< [ 20: 12](SR/W/H) This register sets the number of cache indices to flush starting from [IDXSTART]. */
        uint64_t idxstart              : 9;  /**< [ 11:  3](SR/W/H) This register sets the start cache index. */
        uint64_t flush_type            : 2;  /**< [  2:  1](SR/W/H) This register controls the type of cache flush.

                                                                 0 = CleanInvalid (Invalidate all caches. Write back dirty data to DRAM.)
                                                                 1 = MakeInvalid  (Invalidate all caches. Throwing away dirty data.)
                                                                 2 = CleanShared  (Write back all dirty data to DRAM. Transitioning the block to
                                                                                   the clean state while leaving it in all caches.)
                                                                 3 = Reserved. */
        uint64_t start                 : 1;  /**< [  0:  0](SR/W/H) When this bit is set, TADs will block all requests from the mesh and start
                                                                 issuing dataless transactions to flush the cache. This bit is a one-shot write
                                                                 and will automatically clear.

                                                                 Software should poll TAD()_CACHE_FLUSH_STATUS[DONE] to determine when the
                                                                 operation has finished for each TAD. */
#else /* Word 0 - Little Endian */
        uint64_t start                 : 1;  /**< [  0:  0](SR/W/H) When this bit is set, TADs will block all requests from the mesh and start
                                                                 issuing dataless transactions to flush the cache. This bit is a one-shot write
                                                                 and will automatically clear.

                                                                 Software should poll TAD()_CACHE_FLUSH_STATUS[DONE] to determine when the
                                                                 operation has finished for each TAD. */
        uint64_t flush_type            : 2;  /**< [  2:  1](SR/W/H) This register controls the type of cache flush.

                                                                 0 = CleanInvalid (Invalidate all caches. Write back dirty data to DRAM.)
                                                                 1 = MakeInvalid  (Invalidate all caches. Throwing away dirty data.)
                                                                 2 = CleanShared  (Write back all dirty data to DRAM. Transitioning the block to
                                                                                   the clean state while leaving it in all caches.)
                                                                 3 = Reserved. */
        uint64_t idxstart              : 9;  /**< [ 11:  3](SR/W/H) This register sets the start cache index. */
        uint64_t idxcnt                : 9;  /**< [ 20: 12](SR/W/H) This register sets the number of cache indices to flush starting from [IDXSTART]. */
        uint64_t reserved_21_63        : 43;
#endif /* Word 0 - End */
    } cn10kb;
    /* struct cavm_tad_cmn_cache_flush_s cnf10ka; */
    /* struct cavm_tad_cmn_cache_flush_s cnf10kb; */
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

                                                                 Values are in units of 20ns. */
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

                                                                 Values are in units of 20ns. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_tad_cmn_cbusy_s cn10; */
    /* struct cavm_tad_cmn_cbusy_s cn10ka; */
    struct cavm_tad_cmn_cbusy_cn10kb
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t ddr_timeout           : 32; /**< [ 63: 32](SR/W) DDR CBUSY minimum timeout value. Every DDR PartID CBUSY value is stored and valid
                                                                 for at least the duration of this value. After which the DDR PartID CBUSY is no
                                                                 longer part of TAD CBUSY as it is considered stale.

                                                                 Values are in units of 20ns. */
        uint64_t tad_cbusy1_busy_trsh  : 7;  /**< [ 31: 25](SR/W) This register sets the threshold at which TAD resources are considered busy.
                                                                 Max value is 72. */
        uint64_t tad_cbusy1_free_trsh  : 7;  /**< [ 24: 18](SR/W) This register sets the threshold at which TAD resources are considered free.
                                                                 Max value is 72. */
        uint64_t tad_cbusy0_busy_trsh  : 7;  /**< [ 17: 11](SR/W) This register sets the threshold at which MPAM PartID is considered busy.
                                                                 Max value is 72. */
        uint64_t tad_cbusy0_free_trsh  : 7;  /**< [ 10:  4](SR/W) This register sets the threshold at which MPAM PartID is considered free.
                                                                 Max value is 72. */
        uint64_t ddr_cbusy_en          : 2;  /**< [  3:  2](SR/W) This register enables ORing DDR bits into CBUSY responses. */
        uint64_t tad_cbusy_en          : 2;  /**< [  1:  0](SR/W) This register enables ORing TAD bits into CBUSY responses. */
#else /* Word 0 - Little Endian */
        uint64_t tad_cbusy_en          : 2;  /**< [  1:  0](SR/W) This register enables ORing TAD bits into CBUSY responses. */
        uint64_t ddr_cbusy_en          : 2;  /**< [  3:  2](SR/W) This register enables ORing DDR bits into CBUSY responses. */
        uint64_t tad_cbusy0_free_trsh  : 7;  /**< [ 10:  4](SR/W) This register sets the threshold at which MPAM PartID is considered free.
                                                                 Max value is 72. */
        uint64_t tad_cbusy0_busy_trsh  : 7;  /**< [ 17: 11](SR/W) This register sets the threshold at which MPAM PartID is considered busy.
                                                                 Max value is 72. */
        uint64_t tad_cbusy1_free_trsh  : 7;  /**< [ 24: 18](SR/W) This register sets the threshold at which TAD resources are considered free.
                                                                 Max value is 72. */
        uint64_t tad_cbusy1_busy_trsh  : 7;  /**< [ 31: 25](SR/W) This register sets the threshold at which TAD resources are considered busy.
                                                                 Max value is 72. */
        uint64_t ddr_timeout           : 32; /**< [ 63: 32](SR/W) DDR CBUSY minimum timeout value. Every DDR PartID CBUSY value is stored and valid
                                                                 for at least the duration of this value. After which the DDR PartID CBUSY is no
                                                                 longer part of TAD CBUSY as it is considered stale.

                                                                 Values are in units of 20ns. */
#endif /* Word 0 - End */
    } cn10kb;
    /* struct cavm_tad_cmn_cbusy_s cnf10ka; */
    /* struct cavm_tad_cmn_cbusy_s cnf10kb; */
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
        uint64_t num_rows              : 4;  /**< [  7:  4](RO) Specifies the number of row of tiles. */
        uint64_t num_cols              : 4;  /**< [  3:  0](RO) Specifies the number of columns of tiles. */
#else /* Word 0 - Little Endian */
        uint64_t num_cols              : 4;  /**< [  3:  0](RO) Specifies the number of columns of tiles. */
        uint64_t num_rows              : 4;  /**< [  7:  4](RO) Specifies the number of row of tiles. */
        uint64_t num_tads              : 8;  /**< [ 15:  8](RO) Specifies the number of TADs. */
        uint64_t ltgsets               : 12; /**< [ 27: 16](RO) Specifies the number of LTG sets in a TAD. */
        uint64_t ltgways               : 8;  /**< [ 35: 28](RO) Specifies the number of LTG ways in a TAD. */
        uint64_t dtgsets               : 12; /**< [ 47: 36](RO) Specifies the number of DTG sets in a TAD. */
        uint64_t dtgways               : 8;  /**< [ 55: 48](RO) Specifies the number of DTG ways in a TAD. */
        uint64_t reserved_56_63        : 8;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_tad_cmn_const_s cn10; */
    /* struct cavm_tad_cmn_const_s cn10ka; */
    struct cavm_tad_cmn_const_cn10kb
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_56_63        : 8;
        uint64_t dtgways               : 8;  /**< [ 55: 48](SRO) Specifies the number of DTG ways in a TAD. */
        uint64_t dtgsets               : 12; /**< [ 47: 36](SRO) Specifies the number of DTG sets in a TAD. */
        uint64_t ltgways               : 8;  /**< [ 35: 28](SRO) Specifies the number of LTG ways in a TAD. */
        uint64_t ltgsets               : 12; /**< [ 27: 16](SRO) Specifies the number of LTG sets in a TAD. */
        uint64_t num_tads              : 8;  /**< [ 15:  8](SRO) Specifies the number of TADs. */
        uint64_t num_rows              : 4;  /**< [  7:  4](SRO) Specifies the number of row of tiles. */
        uint64_t num_cols              : 4;  /**< [  3:  0](SRO) Specifies the number of columns of tiles. */
#else /* Word 0 - Little Endian */
        uint64_t num_cols              : 4;  /**< [  3:  0](SRO) Specifies the number of columns of tiles. */
        uint64_t num_rows              : 4;  /**< [  7:  4](SRO) Specifies the number of row of tiles. */
        uint64_t num_tads              : 8;  /**< [ 15:  8](SRO) Specifies the number of TADs. */
        uint64_t ltgsets               : 12; /**< [ 27: 16](SRO) Specifies the number of LTG sets in a TAD. */
        uint64_t ltgways               : 8;  /**< [ 35: 28](SRO) Specifies the number of LTG ways in a TAD. */
        uint64_t dtgsets               : 12; /**< [ 47: 36](SRO) Specifies the number of DTG sets in a TAD. */
        uint64_t dtgways               : 8;  /**< [ 55: 48](SRO) Specifies the number of DTG ways in a TAD. */
        uint64_t reserved_56_63        : 8;
#endif /* Word 0 - End */
    } cn10kb;
    /* struct cavm_tad_cmn_const_s cnf10ka; */
    /* struct cavm_tad_cmn_const_s cnf10kb; */
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
        uint64_t req_cclk_dis          : 1;  /**< [ 48: 48](R/W) Disable power saving TAD conditional clocking. For diagnostic use only. */
        uint64_t mn_cclk_dis           : 1;  /**< [ 47: 47](R/W) Disable power saving TAD conditional clocking. For diagnostic use only. */
        uint64_t chn_cclk_dis          : 1;  /**< [ 46: 46](R/W) Disable power saving TAD conditional clocking. For diagnostic use only. */
        uint64_t reserved_15_45        : 31;
        uint64_t disearlydq            : 1;  /**< [ 14: 14](R/W) When set, TAD does not early DQ when waiting for CompAck. */
        uint64_t dismultmpam           : 1;  /**< [ 13: 13](R/W) When set, MPAM field is forced to zero on all incoming REQs. */
        uint64_t maxifb                : 5;  /**< [ 12:  8](R/W) Maximum IFBs in use at once (0, 25-31 interpreted as 24, 1-24 as expected). */
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
        uint64_t maxifb                : 5;  /**< [ 12:  8](R/W) Maximum IFBs in use at once (0, 25-31 interpreted as 24, 1-24 as expected). */
        uint64_t dismultmpam           : 1;  /**< [ 13: 13](R/W) When set, MPAM field is forced to zero on all incoming REQs. */
        uint64_t disearlydq            : 1;  /**< [ 14: 14](R/W) When set, TAD does not early DQ when waiting for CompAck. */
        uint64_t reserved_15_45        : 31;
        uint64_t chn_cclk_dis          : 1;  /**< [ 46: 46](R/W) Disable power saving TAD conditional clocking. For diagnostic use only. */
        uint64_t mn_cclk_dis           : 1;  /**< [ 47: 47](R/W) Disable power saving TAD conditional clocking. For diagnostic use only. */
        uint64_t req_cclk_dis          : 1;  /**< [ 48: 48](R/W) Disable power saving TAD conditional clocking. For diagnostic use only. */
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
    /* struct cavm_tad_cmn_ctl_s cn10; */
    /* struct cavm_tad_cmn_ctl_s cn10ka; */
    struct cavm_tad_cmn_ctl_cn10kb
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t cclk_dis              : 1;  /**< [ 63: 63](SR/W) Disable power saving TAD conditional clocking. For diagnostic use only. */
        uint64_t tag_cclk_dis          : 1;  /**< [ 62: 62](SR/W) Disable power saving TAD conditional clocking. For diagnostic use only. */
        uint64_t ltg_cclk_dis          : 1;  /**< [ 61: 61](SR/W) Disable power saving TAD conditional clocking. For diagnostic use only. */
        uint64_t dtg_cclk_dis          : 1;  /**< [ 60: 60](SR/W) Disable power saving TAD conditional clocking. For diagnostic use only. */
        uint64_t ctldat_cclk_dis       : 1;  /**< [ 59: 59](SR/W) Disable power saving TAD conditional clocking. For diagnostic use only. */
        uint64_t dat_cclk_dis          : 1;  /**< [ 58: 58](SR/W) Disable power saving TAD conditional clocking. For diagnostic use only. */
        uint64_t rsp_cclk_dis          : 1;  /**< [ 57: 57](SR/W) Disable power saving TAD conditional clocking. For diagnostic use only. */
        uint64_t snp_cclk_dis          : 1;  /**< [ 56: 56](SR/W) Disable power saving TAD conditional clocking. For diagnostic use only. */
        uint64_t txsnp_cclk_dis        : 1;  /**< [ 55: 55](SR/W) Disable power saving TAD conditional clocking. For diagnostic use only. */
        uint64_t txreq_cclk_dis        : 1;  /**< [ 54: 54](SR/W) Disable power saving TAD conditional clocking. For diagnostic use only. */
        uint64_t rxtbl_cclk_dis        : 1;  /**< [ 53: 53](SR/W) Disable power saving TAD conditional clocking. For diagnostic use only. */
        uint64_t csr_cclk_dis          : 1;  /**< [ 52: 52](SR/W) Disable power saving TAD conditional clocking. For diagnostic use only. */
        uint64_t lnk_tx_cclk_dis       : 1;  /**< [ 51: 51](SR/W) Disable power saving TAD conditional clocking. For diagnostic use only. */
        uint64_t lnk_rx_cclk_dis       : 1;  /**< [ 50: 50](SR/W) Disable power saving TAD conditional clocking. For diagnostic use only. */
        uint64_t sam_cclk_dis          : 1;  /**< [ 49: 49](SR/W) Disable power saving TAD conditional clocking. For diagnostic use only. */
        uint64_t req_cclk_dis          : 1;  /**< [ 48: 48](SR/W) Disable power saving TAD conditional clocking. For diagnostic use only. */
        uint64_t mn_cclk_dis           : 1;  /**< [ 47: 47](SR/W) Disable power saving TAD conditional clocking. For diagnostic use only. */
        uint64_t chn_cclk_dis          : 1;  /**< [ 46: 46](SR/W) Disable power saving TAD conditional clocking. For diagnostic use only. */
        uint64_t reserved_15_45        : 31;
        uint64_t disearlydq            : 1;  /**< [ 14: 14](SR/W) For each request, TAD sends a final message which results in a
                                                                 completion reaching requester (e.g., a Comp, CompData, RespSepData,
                                                                 etc. message in the CHI protocol). To prevent races between snoops to
                                                                 the same 64-byte sub-block, the TAD must wait to receive a CompAck
                                                                 back from the requester to know when the completion has been received.

                                                                 When [DISEARLYDQ]=0, the TAD will start processing a request once it
                                                                 has sent the completion message for all preceeding requests to the
                                                                 same 128-byte cacheline, without waiting to receive the CompAck, but
                                                                 it will delay sending any snoops until it has received the CompAck for
                                                                 the preceding request to the same cacheline. Note that TAD uses
                                                                 128-byte cachelines, and the wait for CompAck applies even for
                                                                 requests which access different 64-byte sub-blocks within a 128-byte
                                                                 cacheline.

                                                                 When [DISEARLYDQ]=1, the TAD will not pipeline requests to the same
                                                                 cacheline, and instead TAD delays all processing of incoming requests
                                                                 until it has received a CompAck for each preceding request to the same
                                                                 128-byte cacheline. */
        uint64_t dismultmpam           : 1;  /**< [ 13: 13](SR/W) When set, MPAM field is forced to zero on all incoming REQs. */
        uint64_t maxifb                : 5;  /**< [ 12:  8](SR/W) Maximum IFBs in use at once (0, 25-31 interpreted as 24, 1-24 as Expected). */
        uint64_t diswrstash            : 1;  /**< [  7:  7](SR/W) When set, disable stash behavior for WriteUniqueFullStash/WriteUniquePtlStash. */
        uint64_t disstashonce          : 1;  /**< [  6:  6](SR/W) When set, disable stash behavior for StashOnceUnique/StashOnceShared. */
        uint64_t discor                : 1;  /**< [  5:  5](SR/W) Disable correction in the mesh ECC checkers/generators. */
        uint64_t dispsn                : 1;  /**< [  4:  4](SR/W) Disable poison code creation and detection in the mesh ECC checkers/generators. */
        uint64_t disdmt                : 1;  /**< [  3:  3](SR/W) When set, disable direct memory transfer. */
        uint64_t disdct                : 1;  /**< [  2:  2](SR/W) When set, disable direct cache transfer. */
        uint64_t disdwt                : 1;  /**< [  1:  1](SR/W) When set, disable direct write transfer. */
        uint64_t frcnalc               : 1;  /**< [  0:  0](SR/W) When set, all cache accesses are forced to not allocate in the TAD LTG. */
#else /* Word 0 - Little Endian */
        uint64_t frcnalc               : 1;  /**< [  0:  0](SR/W) When set, all cache accesses are forced to not allocate in the TAD LTG. */
        uint64_t disdwt                : 1;  /**< [  1:  1](SR/W) When set, disable direct write transfer. */
        uint64_t disdct                : 1;  /**< [  2:  2](SR/W) When set, disable direct cache transfer. */
        uint64_t disdmt                : 1;  /**< [  3:  3](SR/W) When set, disable direct memory transfer. */
        uint64_t dispsn                : 1;  /**< [  4:  4](SR/W) Disable poison code creation and detection in the mesh ECC checkers/generators. */
        uint64_t discor                : 1;  /**< [  5:  5](SR/W) Disable correction in the mesh ECC checkers/generators. */
        uint64_t disstashonce          : 1;  /**< [  6:  6](SR/W) When set, disable stash behavior for StashOnceUnique/StashOnceShared. */
        uint64_t diswrstash            : 1;  /**< [  7:  7](SR/W) When set, disable stash behavior for WriteUniqueFullStash/WriteUniquePtlStash. */
        uint64_t maxifb                : 5;  /**< [ 12:  8](SR/W) Maximum IFBs in use at once (0, 25-31 interpreted as 24, 1-24 as Expected). */
        uint64_t dismultmpam           : 1;  /**< [ 13: 13](SR/W) When set, MPAM field is forced to zero on all incoming REQs. */
        uint64_t disearlydq            : 1;  /**< [ 14: 14](SR/W) For each request, TAD sends a final message which results in a
                                                                 completion reaching requester (e.g., a Comp, CompData, RespSepData,
                                                                 etc. message in the CHI protocol). To prevent races between snoops to
                                                                 the same 64-byte sub-block, the TAD must wait to receive a CompAck
                                                                 back from the requester to know when the completion has been received.

                                                                 When [DISEARLYDQ]=0, the TAD will start processing a request once it
                                                                 has sent the completion message for all preceeding requests to the
                                                                 same 128-byte cacheline, without waiting to receive the CompAck, but
                                                                 it will delay sending any snoops until it has received the CompAck for
                                                                 the preceding request to the same cacheline. Note that TAD uses
                                                                 128-byte cachelines, and the wait for CompAck applies even for
                                                                 requests which access different 64-byte sub-blocks within a 128-byte
                                                                 cacheline.

                                                                 When [DISEARLYDQ]=1, the TAD will not pipeline requests to the same
                                                                 cacheline, and instead TAD delays all processing of incoming requests
                                                                 until it has received a CompAck for each preceding request to the same
                                                                 128-byte cacheline. */
        uint64_t reserved_15_45        : 31;
        uint64_t chn_cclk_dis          : 1;  /**< [ 46: 46](SR/W) Disable power saving TAD conditional clocking. For diagnostic use only. */
        uint64_t mn_cclk_dis           : 1;  /**< [ 47: 47](SR/W) Disable power saving TAD conditional clocking. For diagnostic use only. */
        uint64_t req_cclk_dis          : 1;  /**< [ 48: 48](SR/W) Disable power saving TAD conditional clocking. For diagnostic use only. */
        uint64_t sam_cclk_dis          : 1;  /**< [ 49: 49](SR/W) Disable power saving TAD conditional clocking. For diagnostic use only. */
        uint64_t lnk_rx_cclk_dis       : 1;  /**< [ 50: 50](SR/W) Disable power saving TAD conditional clocking. For diagnostic use only. */
        uint64_t lnk_tx_cclk_dis       : 1;  /**< [ 51: 51](SR/W) Disable power saving TAD conditional clocking. For diagnostic use only. */
        uint64_t csr_cclk_dis          : 1;  /**< [ 52: 52](SR/W) Disable power saving TAD conditional clocking. For diagnostic use only. */
        uint64_t rxtbl_cclk_dis        : 1;  /**< [ 53: 53](SR/W) Disable power saving TAD conditional clocking. For diagnostic use only. */
        uint64_t txreq_cclk_dis        : 1;  /**< [ 54: 54](SR/W) Disable power saving TAD conditional clocking. For diagnostic use only. */
        uint64_t txsnp_cclk_dis        : 1;  /**< [ 55: 55](SR/W) Disable power saving TAD conditional clocking. For diagnostic use only. */
        uint64_t snp_cclk_dis          : 1;  /**< [ 56: 56](SR/W) Disable power saving TAD conditional clocking. For diagnostic use only. */
        uint64_t rsp_cclk_dis          : 1;  /**< [ 57: 57](SR/W) Disable power saving TAD conditional clocking. For diagnostic use only. */
        uint64_t dat_cclk_dis          : 1;  /**< [ 58: 58](SR/W) Disable power saving TAD conditional clocking. For diagnostic use only. */
        uint64_t ctldat_cclk_dis       : 1;  /**< [ 59: 59](SR/W) Disable power saving TAD conditional clocking. For diagnostic use only. */
        uint64_t dtg_cclk_dis          : 1;  /**< [ 60: 60](SR/W) Disable power saving TAD conditional clocking. For diagnostic use only. */
        uint64_t ltg_cclk_dis          : 1;  /**< [ 61: 61](SR/W) Disable power saving TAD conditional clocking. For diagnostic use only. */
        uint64_t tag_cclk_dis          : 1;  /**< [ 62: 62](SR/W) Disable power saving TAD conditional clocking. For diagnostic use only. */
        uint64_t cclk_dis              : 1;  /**< [ 63: 63](SR/W) Disable power saving TAD conditional clocking. For diagnostic use only. */
#endif /* Word 0 - End */
    } cn10kb;
    /* struct cavm_tad_cmn_ctl_s cnf10ka; */
    /* struct cavm_tad_cmn_ctl_s cnf10kb; */
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
 * Register (RSL) tad_cmn_mn_ctl
 *
 * TAD Common Miscellaneous Node Control Register
 * Controls TAD MN (DVMOps) settings.
 */
union cavm_tad_cmn_mn_ctl
{
    uint64_t u;
    struct cavm_tad_cmn_mn_ctl_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_14_63        : 50;
        uint64_t snp_qos               : 4;  /**< [ 13: 10](R/W) Value to use in QoS field of MN snoops. Reset value is 0. */
        uint64_t comp_qos              : 4;  /**< [  9:  6](R/W) Value to use in QoS field of MN CompDBID_Resp/Comp. Reset value is 0. */
        uint64_t dev_ncb               : 3;  /**< [  5:  3](R/W) NCB Device of IOB. Reset value is 0. */
        uint64_t iid                   : 3;  /**< [  2:  0](R/W) IOB index that contains SMMU. */
#else /* Word 0 - Little Endian */
        uint64_t iid                   : 3;  /**< [  2:  0](R/W) IOB index that contains SMMU. */
        uint64_t dev_ncb               : 3;  /**< [  5:  3](R/W) NCB Device of IOB. Reset value is 0. */
        uint64_t comp_qos              : 4;  /**< [  9:  6](R/W) Value to use in QoS field of MN CompDBID_Resp/Comp. Reset value is 0. */
        uint64_t snp_qos               : 4;  /**< [ 13: 10](R/W) Value to use in QoS field of MN snoops. Reset value is 0. */
        uint64_t reserved_14_63        : 50;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_tad_cmn_mn_ctl_s cn10; */
    /* struct cavm_tad_cmn_mn_ctl_s cn10ka; */
    struct cavm_tad_cmn_mn_ctl_cn10kb
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_14_63        : 50;
        uint64_t snp_qos               : 4;  /**< [ 13: 10](SR/W) Value to use in QoS field of MN snoops. Reset value is 0. */
        uint64_t comp_qos              : 4;  /**< [  9:  6](SR/W) Value to use in QoS field of MN CompDBID_Resp/Comp. Reset value is 0. */
        uint64_t dev_ncb               : 3;  /**< [  5:  3](SR/W) NCB Device of IOB. Reset value is 0. */
        uint64_t iid                   : 3;  /**< [  2:  0](SR/W) IOB index that contains SMMU. */
#else /* Word 0 - Little Endian */
        uint64_t iid                   : 3;  /**< [  2:  0](SR/W) IOB index that contains SMMU. */
        uint64_t dev_ncb               : 3;  /**< [  5:  3](SR/W) NCB Device of IOB. Reset value is 0. */
        uint64_t comp_qos              : 4;  /**< [  9:  6](SR/W) Value to use in QoS field of MN CompDBID_Resp/Comp. Reset value is 0. */
        uint64_t snp_qos               : 4;  /**< [ 13: 10](SR/W) Value to use in QoS field of MN snoops. Reset value is 0. */
        uint64_t reserved_14_63        : 50;
#endif /* Word 0 - End */
    } cn10kb;
    /* struct cavm_tad_cmn_mn_ctl_s cnf10ka; */
    /* struct cavm_tad_cmn_mn_ctl_s cnf10kb; */
};
typedef union cavm_tad_cmn_mn_ctl cavm_tad_cmn_mn_ctl_t;

#define CAVM_TAD_CMN_MN_CTL CAVM_TAD_CMN_MN_CTL_FUNC()
static inline uint64_t CAVM_TAD_CMN_MN_CTL_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_TAD_CMN_MN_CTL_FUNC(void)
{
    return 0x87e053000030ll;
}

#define typedef_CAVM_TAD_CMN_MN_CTL cavm_tad_cmn_mn_ctl_t
#define bustype_CAVM_TAD_CMN_MN_CTL CSR_TYPE_RSL
#define basename_CAVM_TAD_CMN_MN_CTL "TAD_CMN_MN_CTL"
#define device_bar_CAVM_TAD_CMN_MN_CTL 0x0 /* PF_BAR0 */
#define busnum_CAVM_TAD_CMN_MN_CTL 0
#define arguments_CAVM_TAD_CMN_MN_CTL -1,-1,-1,-1

/**
 * Register (RSL) tad_cmn_mpamcfg_cpbm_ns
 *
 * MPAM Cache Portion Bitmap Partition Configuration Register
 * The TAD_CMN_MPAMCFG_CPBM register is a read-write register that configures the cache
 * portions that a
 * PARTID is allowed to allocate. After setting TAD_CMN_MPAMCFG_PART_SEL with a PARTID, software
 * (usually a hypervisor) writes to the TAD_CMN_MPAMCFG_CPBM register to configure
 * which cache portions
 * the PARTID is allowed to allocate.
 * TAD_CMN_MPAMCFG_CPBM_NS controls the cache portions for the
 * Non-secure PARTID selected by the Non-secure instance of TAD_CMN_MPAMCFG_PART_SEL.
 */
union cavm_tad_cmn_mpamcfg_cpbm_ns
{
    uint64_t u;
    struct cavm_tad_cmn_mpamcfg_cpbm_ns_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_16_63        : 48;
        uint64_t cpbm                  : 16; /**< [ 15:  0](R/W) Each bit, CPBM\<n\>, grants permission to the PARTID to allocate cache lines within cache portion
                                                                 n.
                                                                 0b0 = The PARTID is not permitted to allocate into cache portion n.
                                                                 0b1 = The PARTID is permitted to allocate within cache portion n.

                                                                 The width of the CPBM changes depending on the RIS value in TAD_MCMN_MPAMCFG_PART_SEL.
                                                                 When RIS=0 (LTG), the CPBM is 16 bits. When RIS=1 (DTG), the CPBM is only
                                                                 12 bits, and only bits [11..0] may be written. */
#else /* Word 0 - Little Endian */
        uint64_t cpbm                  : 16; /**< [ 15:  0](R/W) Each bit, CPBM\<n\>, grants permission to the PARTID to allocate cache lines within cache portion
                                                                 n.
                                                                 0b0 = The PARTID is not permitted to allocate into cache portion n.
                                                                 0b1 = The PARTID is permitted to allocate within cache portion n.

                                                                 The width of the CPBM changes depending on the RIS value in TAD_MCMN_MPAMCFG_PART_SEL.
                                                                 When RIS=0 (LTG), the CPBM is 16 bits. When RIS=1 (DTG), the CPBM is only
                                                                 12 bits, and only bits [11..0] may be written. */
        uint64_t reserved_16_63        : 48;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_tad_cmn_mpamcfg_cpbm_ns_s cn10; */
    /* struct cavm_tad_cmn_mpamcfg_cpbm_ns_s cn10ka; */
    struct cavm_tad_cmn_mpamcfg_cpbm_ns_cn10kb
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_16_63        : 48;
        uint64_t cpbm                  : 16; /**< [ 15:  0](R/W) Each bit, CPBM\<n\>, grants permission to the PARTID to allocate cache lines within cache portion
                                                                 n.
                                                                 0b0 = The PARTID is not permitted to allocate into cache portion n.
                                                                 0b1 = The PARTID is permitted to allocate within cache portion n.

                                                                 The width of the CPBM changes depending on the RIS value in TAD_CMN_MPAMCFG_PART_SEL.
                                                                 When RIS=0 (LTG), the CPBM is 16 bits. When RIS=1 (DTG), the CPBM is only
                                                                 12 bits, and only bits [11..0] may be written. */
#else /* Word 0 - Little Endian */
        uint64_t cpbm                  : 16; /**< [ 15:  0](R/W) Each bit, CPBM\<n\>, grants permission to the PARTID to allocate cache lines within cache portion
                                                                 n.
                                                                 0b0 = The PARTID is not permitted to allocate into cache portion n.
                                                                 0b1 = The PARTID is permitted to allocate within cache portion n.

                                                                 The width of the CPBM changes depending on the RIS value in TAD_CMN_MPAMCFG_PART_SEL.
                                                                 When RIS=0 (LTG), the CPBM is 16 bits. When RIS=1 (DTG), the CPBM is only
                                                                 12 bits, and only bits [11..0] may be written. */
        uint64_t reserved_16_63        : 48;
#endif /* Word 0 - End */
    } cn10kb;
    /* struct cavm_tad_cmn_mpamcfg_cpbm_ns_s cnf10ka; */
    /* struct cavm_tad_cmn_mpamcfg_cpbm_ns_s cnf10kb; */
};
typedef union cavm_tad_cmn_mpamcfg_cpbm_ns cavm_tad_cmn_mpamcfg_cpbm_ns_t;

#define CAVM_TAD_CMN_MPAMCFG_CPBM_NS CAVM_TAD_CMN_MPAMCFG_CPBM_NS_FUNC()
static inline uint64_t CAVM_TAD_CMN_MPAMCFG_CPBM_NS_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_TAD_CMN_MPAMCFG_CPBM_NS_FUNC(void)
{
    if (cavm_is_model(OCTEONTX_CN10KA))
        return 0x87e053002000ll;
    if (cavm_is_model(OCTEONTX_CN10KB))
        return 0x87e053011000ll;
    if (cavm_is_model(OCTEONTX_CNF10KA))
        return 0x87e053002000ll;
    if (cavm_is_model(OCTEONTX_CNF10KB))
        return 0x87e053002000ll;
    __cavm_csr_fatal("TAD_CMN_MPAMCFG_CPBM_NS", 0, 0, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_TAD_CMN_MPAMCFG_CPBM_NS cavm_tad_cmn_mpamcfg_cpbm_ns_t
#define bustype_CAVM_TAD_CMN_MPAMCFG_CPBM_NS CSR_TYPE_RSL
#define basename_CAVM_TAD_CMN_MPAMCFG_CPBM_NS "TAD_CMN_MPAMCFG_CPBM_NS"
#define device_bar_CAVM_TAD_CMN_MPAMCFG_CPBM_NS 0x0 /* PF_BAR0 */
#define busnum_CAVM_TAD_CMN_MPAMCFG_CPBM_NS 0
#define arguments_CAVM_TAD_CMN_MPAMCFG_CPBM_NS -1,-1,-1,-1

/**
 * Register (RSL) tad_cmn_mpamcfg_cpbm_s
 *
 * Secure MPAM Cache Portion Bitmap Partition Configuration Register
 * The TAD_CMN_MPAMCFG_CPBM register is a read-write register that configures the cache
 * portions that a
 * PARTID is allowed to allocate. After setting TAD_CMN_MPAMCFG_PART_SEL with a PARTID, software
 * (usually a hypervisor) writes to the TAD_CMN_MPAMCFG_CPBM register to configure
 * which cache portions
 * the PARTID is allowed to allocate.
 * TAD_CMN_MPAMCFG_CPBM_S controls cache portions for the Secure PARTID selected by the Secure
 * instance of TAD_CMN_MPAMCFG_PART_SEL.
 */
union cavm_tad_cmn_mpamcfg_cpbm_s
{
    uint64_t u;
    struct cavm_tad_cmn_mpamcfg_cpbm_s_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_16_63        : 48;
        uint64_t cpbm                  : 16; /**< [ 15:  0](SR/W) Each bit, CPBM\<n\>, grants permission to the PARTID to allocate cache lines within cache portion
                                                                 n.
                                                                 0b0 = The PARTID is not permitted to allocate into cache portion n.
                                                                 0b1 = The PARTID is permitted to allocate within cache portion n.

                                                                 The width of the CPBM changes depending on the RIS value in TAD_MCMN_MPAMCFG_PART_SEL.
                                                                 When RIS=0 (LTG), the CPBM is 16 bits. When RIS=1 (DTG), the CPBM is only
                                                                 12 bits, and only bits [11..0] may be written. */
#else /* Word 0 - Little Endian */
        uint64_t cpbm                  : 16; /**< [ 15:  0](SR/W) Each bit, CPBM\<n\>, grants permission to the PARTID to allocate cache lines within cache portion
                                                                 n.
                                                                 0b0 = The PARTID is not permitted to allocate into cache portion n.
                                                                 0b1 = The PARTID is permitted to allocate within cache portion n.

                                                                 The width of the CPBM changes depending on the RIS value in TAD_MCMN_MPAMCFG_PART_SEL.
                                                                 When RIS=0 (LTG), the CPBM is 16 bits. When RIS=1 (DTG), the CPBM is only
                                                                 12 bits, and only bits [11..0] may be written. */
        uint64_t reserved_16_63        : 48;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_tad_cmn_mpamcfg_cpbm_s_s cn10; */
    /* struct cavm_tad_cmn_mpamcfg_cpbm_s_s cn10ka; */
    struct cavm_tad_cmn_mpamcfg_cpbm_s_cn10kb
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_16_63        : 48;
        uint64_t cpbm                  : 16; /**< [ 15:  0](SR/W) Each bit, CPBM\<n\>, grants permission to the PARTID to allocate cache lines within cache portion
                                                                 n.
                                                                 0b0 = The PARTID is not permitted to allocate into cache portion n.
                                                                 0b1 = The PARTID is permitted to allocate within cache portion n.

                                                                 The width of the CPBM changes depending on the RIS value in TAD_CMN_MPAMCFG_PART_SEL.
                                                                 When RIS=0 (LTG), the CPBM is 16 bits. When RIS=1 (DTG), the CPBM is only
                                                                 12 bits, and only bits [11..0] may be written. */
#else /* Word 0 - Little Endian */
        uint64_t cpbm                  : 16; /**< [ 15:  0](SR/W) Each bit, CPBM\<n\>, grants permission to the PARTID to allocate cache lines within cache portion
                                                                 n.
                                                                 0b0 = The PARTID is not permitted to allocate into cache portion n.
                                                                 0b1 = The PARTID is permitted to allocate within cache portion n.

                                                                 The width of the CPBM changes depending on the RIS value in TAD_CMN_MPAMCFG_PART_SEL.
                                                                 When RIS=0 (LTG), the CPBM is 16 bits. When RIS=1 (DTG), the CPBM is only
                                                                 12 bits, and only bits [11..0] may be written. */
        uint64_t reserved_16_63        : 48;
#endif /* Word 0 - End */
    } cn10kb;
    /* struct cavm_tad_cmn_mpamcfg_cpbm_s_s cnf10ka; */
    /* struct cavm_tad_cmn_mpamcfg_cpbm_s_s cnf10kb; */
};
typedef union cavm_tad_cmn_mpamcfg_cpbm_s cavm_tad_cmn_mpamcfg_cpbm_s_t;

#define CAVM_TAD_CMN_MPAMCFG_CPBM_S CAVM_TAD_CMN_MPAMCFG_CPBM_S_FUNC()
static inline uint64_t CAVM_TAD_CMN_MPAMCFG_CPBM_S_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_TAD_CMN_MPAMCFG_CPBM_S_FUNC(void)
{
    if (cavm_is_model(OCTEONTX_CN10KA))
        return 0x87e053004000ll;
    if (cavm_is_model(OCTEONTX_CN10KB))
        return 0x87e053021000ll;
    if (cavm_is_model(OCTEONTX_CNF10KA))
        return 0x87e053004000ll;
    if (cavm_is_model(OCTEONTX_CNF10KB))
        return 0x87e053004000ll;
    __cavm_csr_fatal("TAD_CMN_MPAMCFG_CPBM_S", 0, 0, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_TAD_CMN_MPAMCFG_CPBM_S cavm_tad_cmn_mpamcfg_cpbm_s_t
#define bustype_CAVM_TAD_CMN_MPAMCFG_CPBM_S CSR_TYPE_RSL
#define basename_CAVM_TAD_CMN_MPAMCFG_CPBM_S "TAD_CMN_MPAMCFG_CPBM_S"
#define device_bar_CAVM_TAD_CMN_MPAMCFG_CPBM_S 0x0 /* PF_BAR0 */
#define busnum_CAVM_TAD_CMN_MPAMCFG_CPBM_S 0
#define arguments_CAVM_TAD_CMN_MPAMCFG_CPBM_S -1,-1,-1,-1

/**
 * Register (RSL) tad_cmn_mpamcfg_part_sel_ns
 *
 * MPAM Partition Configuration Selection Register
 * Selects a partition ID to configure. TAD_CMN_MPAMCFG_PART_SEL_NS selects a Non-
 * secure PARTID to configure.
 * After setting this register with a PARTID, software (usually a hypervisor) can perform a series of
 * accesses to TAD_CMN_MPAMCFG registers to configure parameters for MPAM resource
 * controls to use when
 * requests have that PARTID.
 */
union cavm_tad_cmn_mpamcfg_part_sel_ns
{
    uint64_t u;
    struct cavm_tad_cmn_mpamcfg_part_sel_ns_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_28_63        : 36;
        uint64_t ris                   : 4;  /**< [ 27: 24](R/W) Resource Instance Selector. RIS selects one resource to configure through
                                                                 TAD_CMN_MPAMCFG registers and
                                                                 describe with TAD_CMN_MPAMF ID registers.
                                                                 0b0000 = LTG
                                                                 0b0001 = DTG */
        uint64_t reserved_17_23        : 7;
        uint64_t internal              : 1;  /**< [ 16: 16](RAZ) Internal PARTID. This MSC does not support PartID narrowing so this field
                                                                 is reserved. */
        uint64_t partid_sel            : 16; /**< [ 15:  0](R/W) Selects the partition ID to configure.
                                                                 Reads and writes to other TAD_CMN_MPAMCFG registers are indexed by [PARTID_SEL]
                                                                 and by the NS bit used
                                                                 to access TAD_CMN_MPAMCFG_PART_SEL to access the configuration for a single partition. */
#else /* Word 0 - Little Endian */
        uint64_t partid_sel            : 16; /**< [ 15:  0](R/W) Selects the partition ID to configure.
                                                                 Reads and writes to other TAD_CMN_MPAMCFG registers are indexed by [PARTID_SEL]
                                                                 and by the NS bit used
                                                                 to access TAD_CMN_MPAMCFG_PART_SEL to access the configuration for a single partition. */
        uint64_t internal              : 1;  /**< [ 16: 16](RAZ) Internal PARTID. This MSC does not support PartID narrowing so this field
                                                                 is reserved. */
        uint64_t reserved_17_23        : 7;
        uint64_t ris                   : 4;  /**< [ 27: 24](R/W) Resource Instance Selector. RIS selects one resource to configure through
                                                                 TAD_CMN_MPAMCFG registers and
                                                                 describe with TAD_CMN_MPAMF ID registers.
                                                                 0b0000 = LTG
                                                                 0b0001 = DTG */
        uint64_t reserved_28_63        : 36;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_tad_cmn_mpamcfg_part_sel_ns_s cn; */
};
typedef union cavm_tad_cmn_mpamcfg_part_sel_ns cavm_tad_cmn_mpamcfg_part_sel_ns_t;

#define CAVM_TAD_CMN_MPAMCFG_PART_SEL_NS CAVM_TAD_CMN_MPAMCFG_PART_SEL_NS_FUNC()
static inline uint64_t CAVM_TAD_CMN_MPAMCFG_PART_SEL_NS_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_TAD_CMN_MPAMCFG_PART_SEL_NS_FUNC(void)
{
    if (cavm_is_model(OCTEONTX_CN10KA))
        return 0x87e053001100ll;
    if (cavm_is_model(OCTEONTX_CN10KB))
        return 0x87e053010100ll;
    if (cavm_is_model(OCTEONTX_CNF10KA))
        return 0x87e053001100ll;
    if (cavm_is_model(OCTEONTX_CNF10KB))
        return 0x87e053001100ll;
    __cavm_csr_fatal("TAD_CMN_MPAMCFG_PART_SEL_NS", 0, 0, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_TAD_CMN_MPAMCFG_PART_SEL_NS cavm_tad_cmn_mpamcfg_part_sel_ns_t
#define bustype_CAVM_TAD_CMN_MPAMCFG_PART_SEL_NS CSR_TYPE_RSL
#define basename_CAVM_TAD_CMN_MPAMCFG_PART_SEL_NS "TAD_CMN_MPAMCFG_PART_SEL_NS"
#define device_bar_CAVM_TAD_CMN_MPAMCFG_PART_SEL_NS 0x0 /* PF_BAR0 */
#define busnum_CAVM_TAD_CMN_MPAMCFG_PART_SEL_NS 0
#define arguments_CAVM_TAD_CMN_MPAMCFG_PART_SEL_NS -1,-1,-1,-1

/**
 * Register (RSL) tad_cmn_mpamcfg_part_sel_s
 *
 * Secure MPAM Partition Configuration Selection Register
 * Selects a partition ID to configure. TAD_CMN_MPAMCFG_PART_SEL_S selects a Secure PARTID to
 * configure.
 * After setting this register with a PARTID, software (usually a hypervisor) can perform a series of
 * accesses to TAD_CMN_MPAMCFG registers to configure parameters for MPAM resource
 * controls to use when
 * requests have that PARTID.
 */
union cavm_tad_cmn_mpamcfg_part_sel_s
{
    uint64_t u;
    struct cavm_tad_cmn_mpamcfg_part_sel_s_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_28_63        : 36;
        uint64_t ris                   : 4;  /**< [ 27: 24](SR/W) Resource Instance Selector. RIS selects one resource to configure through
                                                                 TAD_CMN_MPAMCFG registers and
                                                                 describe with TAD_CMN_MPAMF ID registers.
                                                                 0b0000 = LTG
                                                                 0b0001 = DTG */
        uint64_t reserved_17_23        : 7;
        uint64_t internal              : 1;  /**< [ 16: 16](SRO) Internal PARTID. This MSC does not support PartID narrowing so this field
                                                                 is reserved. */
        uint64_t partid_sel            : 16; /**< [ 15:  0](SR/W) Selects the partition ID to configure.
                                                                 Reads and writes to other TAD_CMN_MPAMCFG registers are indexed by [PARTID_SEL]
                                                                 and by the NS bit used
                                                                 to access TAD_CMN_MPAMCFG_PART_SEL to access the configuration for a single partition. */
#else /* Word 0 - Little Endian */
        uint64_t partid_sel            : 16; /**< [ 15:  0](SR/W) Selects the partition ID to configure.
                                                                 Reads and writes to other TAD_CMN_MPAMCFG registers are indexed by [PARTID_SEL]
                                                                 and by the NS bit used
                                                                 to access TAD_CMN_MPAMCFG_PART_SEL to access the configuration for a single partition. */
        uint64_t internal              : 1;  /**< [ 16: 16](SRO) Internal PARTID. This MSC does not support PartID narrowing so this field
                                                                 is reserved. */
        uint64_t reserved_17_23        : 7;
        uint64_t ris                   : 4;  /**< [ 27: 24](SR/W) Resource Instance Selector. RIS selects one resource to configure through
                                                                 TAD_CMN_MPAMCFG registers and
                                                                 describe with TAD_CMN_MPAMF ID registers.
                                                                 0b0000 = LTG
                                                                 0b0001 = DTG */
        uint64_t reserved_28_63        : 36;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_tad_cmn_mpamcfg_part_sel_s_s cn; */
};
typedef union cavm_tad_cmn_mpamcfg_part_sel_s cavm_tad_cmn_mpamcfg_part_sel_s_t;

#define CAVM_TAD_CMN_MPAMCFG_PART_SEL_S CAVM_TAD_CMN_MPAMCFG_PART_SEL_S_FUNC()
static inline uint64_t CAVM_TAD_CMN_MPAMCFG_PART_SEL_S_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_TAD_CMN_MPAMCFG_PART_SEL_S_FUNC(void)
{
    if (cavm_is_model(OCTEONTX_CN10KA))
        return 0x87e053003100ll;
    if (cavm_is_model(OCTEONTX_CN10KB))
        return 0x87e053020100ll;
    if (cavm_is_model(OCTEONTX_CNF10KA))
        return 0x87e053003100ll;
    if (cavm_is_model(OCTEONTX_CNF10KB))
        return 0x87e053003100ll;
    __cavm_csr_fatal("TAD_CMN_MPAMCFG_PART_SEL_S", 0, 0, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_TAD_CMN_MPAMCFG_PART_SEL_S cavm_tad_cmn_mpamcfg_part_sel_s_t
#define bustype_CAVM_TAD_CMN_MPAMCFG_PART_SEL_S CSR_TYPE_RSL
#define basename_CAVM_TAD_CMN_MPAMCFG_PART_SEL_S "TAD_CMN_MPAMCFG_PART_SEL_S"
#define device_bar_CAVM_TAD_CMN_MPAMCFG_PART_SEL_S 0x0 /* PF_BAR0 */
#define busnum_CAVM_TAD_CMN_MPAMCFG_PART_SEL_S 0
#define arguments_CAVM_TAD_CMN_MPAMCFG_PART_SEL_S -1,-1,-1,-1

/**
 * Register (RSL) tad_cmn_mpamf_aidr_ns
 *
 * MPAM Architecture Identification Register
 * Identifies the version of the MPAM architecture that this MSC implements.
 * This MSC implements MPAM architecture v1.1
 */
union cavm_tad_cmn_mpamf_aidr_ns
{
    uint64_t u;
    struct cavm_tad_cmn_mpamf_aidr_ns_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_8_63         : 56;
        uint64_t archmajorrev          : 4;  /**< [  7:  4](RO) Major revision of the MPAM architecture implemented by the MSC.

                                                                 0b0001 = MPAM Architecture major revision 1 */
        uint64_t archminorrev          : 4;  /**< [  3:  0](RO) Minor revision of the MPAM architecture implemented by the MSC.

                                                                 0b0001 = MPAM Architecture minor revision 1 */
#else /* Word 0 - Little Endian */
        uint64_t archminorrev          : 4;  /**< [  3:  0](RO) Minor revision of the MPAM architecture implemented by the MSC.

                                                                 0b0001 = MPAM Architecture minor revision 1 */
        uint64_t archmajorrev          : 4;  /**< [  7:  4](RO) Major revision of the MPAM architecture implemented by the MSC.

                                                                 0b0001 = MPAM Architecture major revision 1 */
        uint64_t reserved_8_63         : 56;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_tad_cmn_mpamf_aidr_ns_s cn; */
};
typedef union cavm_tad_cmn_mpamf_aidr_ns cavm_tad_cmn_mpamf_aidr_ns_t;

#define CAVM_TAD_CMN_MPAMF_AIDR_NS CAVM_TAD_CMN_MPAMF_AIDR_NS_FUNC()
static inline uint64_t CAVM_TAD_CMN_MPAMF_AIDR_NS_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_TAD_CMN_MPAMF_AIDR_NS_FUNC(void)
{
    if (cavm_is_model(OCTEONTX_CN10KA))
        return 0x87e053001020ll;
    if (cavm_is_model(OCTEONTX_CN10KB))
        return 0x87e053010020ll;
    if (cavm_is_model(OCTEONTX_CNF10KA))
        return 0x87e053001020ll;
    if (cavm_is_model(OCTEONTX_CNF10KB))
        return 0x87e053001020ll;
    __cavm_csr_fatal("TAD_CMN_MPAMF_AIDR_NS", 0, 0, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_TAD_CMN_MPAMF_AIDR_NS cavm_tad_cmn_mpamf_aidr_ns_t
#define bustype_CAVM_TAD_CMN_MPAMF_AIDR_NS CSR_TYPE_RSL
#define basename_CAVM_TAD_CMN_MPAMF_AIDR_NS "TAD_CMN_MPAMF_AIDR_NS"
#define device_bar_CAVM_TAD_CMN_MPAMF_AIDR_NS 0x0 /* PF_BAR0 */
#define busnum_CAVM_TAD_CMN_MPAMF_AIDR_NS 0
#define arguments_CAVM_TAD_CMN_MPAMF_AIDR_NS -1,-1,-1,-1

/**
 * Register (RSL) tad_cmn_mpamf_aidr_s
 *
 * MPAM Architecture Identification Register
 * Identifies the version of the MPAM architecture that this MSC implements.
 * This MSC implements MPAM architecture v1.1
 */
union cavm_tad_cmn_mpamf_aidr_s
{
    uint64_t u;
    struct cavm_tad_cmn_mpamf_aidr_s_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_8_63         : 56;
        uint64_t archmajorrev          : 4;  /**< [  7:  4](SRO) Major revision of the MPAM architecture implemented by the MSC.

                                                                 0b0001 = MPAM Architecture major revision 1 */
        uint64_t archminorrev          : 4;  /**< [  3:  0](SRO) Minor revision of the MPAM architecture implemented by the MSC.

                                                                 0b0001 = MPAM Architecture minor revision 1 */
#else /* Word 0 - Little Endian */
        uint64_t archminorrev          : 4;  /**< [  3:  0](SRO) Minor revision of the MPAM architecture implemented by the MSC.

                                                                 0b0001 = MPAM Architecture minor revision 1 */
        uint64_t archmajorrev          : 4;  /**< [  7:  4](SRO) Major revision of the MPAM architecture implemented by the MSC.

                                                                 0b0001 = MPAM Architecture major revision 1 */
        uint64_t reserved_8_63         : 56;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_tad_cmn_mpamf_aidr_s_s cn; */
};
typedef union cavm_tad_cmn_mpamf_aidr_s cavm_tad_cmn_mpamf_aidr_s_t;

#define CAVM_TAD_CMN_MPAMF_AIDR_S CAVM_TAD_CMN_MPAMF_AIDR_S_FUNC()
static inline uint64_t CAVM_TAD_CMN_MPAMF_AIDR_S_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_TAD_CMN_MPAMF_AIDR_S_FUNC(void)
{
    if (cavm_is_model(OCTEONTX_CN10KA))
        return 0x87e053003020ll;
    if (cavm_is_model(OCTEONTX_CN10KB))
        return 0x87e053020020ll;
    if (cavm_is_model(OCTEONTX_CNF10KA))
        return 0x87e053003020ll;
    if (cavm_is_model(OCTEONTX_CNF10KB))
        return 0x87e053003020ll;
    __cavm_csr_fatal("TAD_CMN_MPAMF_AIDR_S", 0, 0, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_TAD_CMN_MPAMF_AIDR_S cavm_tad_cmn_mpamf_aidr_s_t
#define bustype_CAVM_TAD_CMN_MPAMF_AIDR_S CSR_TYPE_RSL
#define basename_CAVM_TAD_CMN_MPAMF_AIDR_S "TAD_CMN_MPAMF_AIDR_S"
#define device_bar_CAVM_TAD_CMN_MPAMF_AIDR_S 0x0 /* PF_BAR0 */
#define busnum_CAVM_TAD_CMN_MPAMF_AIDR_S 0
#define arguments_CAVM_TAD_CMN_MPAMF_AIDR_S -1,-1,-1,-1

/**
 * Register (RSL) tad_cmn_mpamf_cpor_idr_ns
 *
 * MPAM Features Cache Portion Partitioning ID Register
 * Indicates the number of bits in TAD_CMN_MPAMCFG_CPBM for this MSC.
 * TAD_CMN_MPAMF_CPOR_IDR_NS indicates the number of bits in the Non-secure instance of
 * TAD_CMN_MPAMCFG_CPBM.
 */
union cavm_tad_cmn_mpamf_cpor_idr_ns
{
    uint64_t u;
    struct cavm_tad_cmn_mpamf_cpor_idr_ns_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_16_63        : 48;
        uint64_t cpbm_wd               : 16; /**< [ 15:  0](RO/H) Number of bits in the cache portion partitioning bit map of this device. See TAD_CMN_MPAMCFG_CPBM.
                                                                 This field changes depending on the RIS value in TAD_CMN_MPAMCFG_PART_SEL.

                                                                 For this implementation, when RIS=0 (LTG), the [CPBM_WD] is 16. When RIS=1 (DTG), [CPBM_WD] is 12. */
#else /* Word 0 - Little Endian */
        uint64_t cpbm_wd               : 16; /**< [ 15:  0](RO/H) Number of bits in the cache portion partitioning bit map of this device. See TAD_CMN_MPAMCFG_CPBM.
                                                                 This field changes depending on the RIS value in TAD_CMN_MPAMCFG_PART_SEL.

                                                                 For this implementation, when RIS=0 (LTG), the [CPBM_WD] is 16. When RIS=1 (DTG), [CPBM_WD] is 12. */
        uint64_t reserved_16_63        : 48;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_tad_cmn_mpamf_cpor_idr_ns_s cn; */
};
typedef union cavm_tad_cmn_mpamf_cpor_idr_ns cavm_tad_cmn_mpamf_cpor_idr_ns_t;

#define CAVM_TAD_CMN_MPAMF_CPOR_IDR_NS CAVM_TAD_CMN_MPAMF_CPOR_IDR_NS_FUNC()
static inline uint64_t CAVM_TAD_CMN_MPAMF_CPOR_IDR_NS_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_TAD_CMN_MPAMF_CPOR_IDR_NS_FUNC(void)
{
    if (cavm_is_model(OCTEONTX_CN10KA))
        return 0x87e053001030ll;
    if (cavm_is_model(OCTEONTX_CN10KB))
        return 0x87e053010030ll;
    if (cavm_is_model(OCTEONTX_CNF10KA))
        return 0x87e053001030ll;
    if (cavm_is_model(OCTEONTX_CNF10KB))
        return 0x87e053001030ll;
    __cavm_csr_fatal("TAD_CMN_MPAMF_CPOR_IDR_NS", 0, 0, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_TAD_CMN_MPAMF_CPOR_IDR_NS cavm_tad_cmn_mpamf_cpor_idr_ns_t
#define bustype_CAVM_TAD_CMN_MPAMF_CPOR_IDR_NS CSR_TYPE_RSL
#define basename_CAVM_TAD_CMN_MPAMF_CPOR_IDR_NS "TAD_CMN_MPAMF_CPOR_IDR_NS"
#define device_bar_CAVM_TAD_CMN_MPAMF_CPOR_IDR_NS 0x0 /* PF_BAR0 */
#define busnum_CAVM_TAD_CMN_MPAMF_CPOR_IDR_NS 0
#define arguments_CAVM_TAD_CMN_MPAMF_CPOR_IDR_NS -1,-1,-1,-1

/**
 * Register (RSL) tad_cmn_mpamf_cpor_idr_s
 *
 * Secure MPAM Features Cache Portion Partitioning ID Register
 * Indicates the number of bits in TAD_CMN_MPAMCFG_CPBM for this MSC. TAD_CMN_MPAMF_CPOR_IDR_S
 * indicates the number of bits in the Secure instance of TAD_CMN_MPAMCFG_CPBM.
 */
union cavm_tad_cmn_mpamf_cpor_idr_s
{
    uint64_t u;
    struct cavm_tad_cmn_mpamf_cpor_idr_s_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_16_63        : 48;
        uint64_t cpbm_wd               : 16; /**< [ 15:  0](SRO/H) Number of bits in the cache portion partitioning bit map of this device. See TAD_CMN_MPAMCFG_CPBM.
                                                                 This field changes depending on the RIS value in TAD_CMN_MPAMCFG_PART_SEL.

                                                                 For this implementation, when RIS=0 (LTG), the [CPBM_WD] is 16. When RIS=1 (DTG), [CPBM_WD] is 12. */
#else /* Word 0 - Little Endian */
        uint64_t cpbm_wd               : 16; /**< [ 15:  0](SRO/H) Number of bits in the cache portion partitioning bit map of this device. See TAD_CMN_MPAMCFG_CPBM.
                                                                 This field changes depending on the RIS value in TAD_CMN_MPAMCFG_PART_SEL.

                                                                 For this implementation, when RIS=0 (LTG), the [CPBM_WD] is 16. When RIS=1 (DTG), [CPBM_WD] is 12. */
        uint64_t reserved_16_63        : 48;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_tad_cmn_mpamf_cpor_idr_s_s cn; */
};
typedef union cavm_tad_cmn_mpamf_cpor_idr_s cavm_tad_cmn_mpamf_cpor_idr_s_t;

#define CAVM_TAD_CMN_MPAMF_CPOR_IDR_S CAVM_TAD_CMN_MPAMF_CPOR_IDR_S_FUNC()
static inline uint64_t CAVM_TAD_CMN_MPAMF_CPOR_IDR_S_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_TAD_CMN_MPAMF_CPOR_IDR_S_FUNC(void)
{
    if (cavm_is_model(OCTEONTX_CN10KA))
        return 0x87e053003030ll;
    if (cavm_is_model(OCTEONTX_CN10KB))
        return 0x87e053020030ll;
    if (cavm_is_model(OCTEONTX_CNF10KA))
        return 0x87e053003030ll;
    if (cavm_is_model(OCTEONTX_CNF10KB))
        return 0x87e053003030ll;
    __cavm_csr_fatal("TAD_CMN_MPAMF_CPOR_IDR_S", 0, 0, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_TAD_CMN_MPAMF_CPOR_IDR_S cavm_tad_cmn_mpamf_cpor_idr_s_t
#define bustype_CAVM_TAD_CMN_MPAMF_CPOR_IDR_S CSR_TYPE_RSL
#define basename_CAVM_TAD_CMN_MPAMF_CPOR_IDR_S "TAD_CMN_MPAMF_CPOR_IDR_S"
#define device_bar_CAVM_TAD_CMN_MPAMF_CPOR_IDR_S 0x0 /* PF_BAR0 */
#define busnum_CAVM_TAD_CMN_MPAMF_CPOR_IDR_S 0
#define arguments_CAVM_TAD_CMN_MPAMF_CPOR_IDR_S -1,-1,-1,-1

/**
 * Register (RSL) tad_cmn_mpamf_idr_ns
 *
 * MPAM Features Identification Register
 * Indicates which memory partitioning and monitoring features are present on this MSC.
 * TAD_CMN_MPAMF_IDR_NS indicates the MPAM features accessed from the Non-secure MPAM feature page.
 */
union cavm_tad_cmn_mpamf_idr_ns
{
    uint64_t u;
    struct cavm_tad_cmn_mpamf_idr_ns_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_60_63        : 4;
        uint64_t ris_max               : 4;  /**< [ 59: 56](RO) Maximum RIS value supported in TAD_CMN_MPAMCFG_PART_SEL, which is 1 for this implementation. */
        uint64_t reserved_40_55        : 16;
        uint64_t has_esr               : 1;  /**< [ 39: 39](RO) MPAMF_ECR and MPAM error handling are not implemented. */
        uint64_t has_extd_esr          : 1;  /**< [ 38: 38](RO) MPAMF_ECR and MPAM error handling are not implemented. */
        uint64_t no_impl_msmon         : 1;  /**< [ 37: 37](RAZ) This MSC does not have any IMPLEMENTATION DEFINED resource monitors. */
        uint64_t no_impl_part          : 1;  /**< [ 36: 36](RAZ) This MSC does not have any IMPLEMENTATION DEFINED resource controls. */
        uint64_t reserved_33_35        : 3;
        uint64_t has_ris               : 1;  /**< [ 32: 32](RO) This MSC has a resource instance selector. TAD_CMN_MPAMCFG_PART_SEL contains the RIS field that
                                                                 selects a resource instance to control.

                                                                 TAD_CMN_MPAMCFG_PART_SEL implements the TAD_CMN_MPAMCFG_PART_SEL[RIS] and
                                                                 MPAM resource instance numbers up to and including TAD_CMN_MPAMF_IDR[RIS_MAX].

                                                                 Here are the resource instances that each valid RIS value corresponds to:
                                                                 0 = LTG.
                                                                 1 = DTG. */
        uint64_t has_partid_nrw        : 1;  /**< [ 31: 31](RO) This MSC does not support PARTID narrowing. */
        uint64_t has_msmon             : 1;  /**< [ 30: 30](RO) This MSC does not have MPAM resource monitors. */
        uint64_t has_impl_idr          : 1;  /**< [ 29: 29](RO) This MSC does not have the implementation-specific MPAM
                                                                 features register, TAD_CMN_MPAMF_IMPL_IDR. */
        uint64_t ext                   : 1;  /**< [ 28: 28](RO) Extended TAD_CMN_MPAMF_IDR. TAD_CMN_MPAMF_IDR has bits defined in [63:32]. The register is 64-bits. */
        uint64_t has_pri_part          : 1;  /**< [ 27: 27](RO) This MSC does not support priority partitioning or have TAD_CMN_MPAMF_PRI_IDR. */
        uint64_t has_mbw_part          : 1;  /**< [ 26: 26](RO) This MSC does not support memory bandwidth partitioning or have TAD_CMN_MPAMF_MBW_IDR
                                                                 register. */
        uint64_t has_cpor_part         : 1;  /**< [ 25: 25](RO) This MSC implements MPAM cache portion partitioning.
                                                                 It has TAD_CMN_MPAMF_CPOR_IDR and TAD_CMN_MPAMCFG_CPBM registers. */
        uint64_t has_ccap_part         : 1;  /**< [ 24: 24](RO) This MSC does not support MPAM cache capacity partitioning or have
                                                                 the TAD_CMN_MPAMF_CCAP_IDR and TAD_CMN_MPAMCFG_CMAX registers. */
        uint64_t pmg_max               : 8;  /**< [ 23: 16](RO) Maximum value of Non-secure PMG supported by this component. */
        uint64_t partid_max            : 16; /**< [ 15:  0](RO) Maximum value of Non-secure PARTID supported by this component. */
#else /* Word 0 - Little Endian */
        uint64_t partid_max            : 16; /**< [ 15:  0](RO) Maximum value of Non-secure PARTID supported by this component. */
        uint64_t pmg_max               : 8;  /**< [ 23: 16](RO) Maximum value of Non-secure PMG supported by this component. */
        uint64_t has_ccap_part         : 1;  /**< [ 24: 24](RO) This MSC does not support MPAM cache capacity partitioning or have
                                                                 the TAD_CMN_MPAMF_CCAP_IDR and TAD_CMN_MPAMCFG_CMAX registers. */
        uint64_t has_cpor_part         : 1;  /**< [ 25: 25](RO) This MSC implements MPAM cache portion partitioning.
                                                                 It has TAD_CMN_MPAMF_CPOR_IDR and TAD_CMN_MPAMCFG_CPBM registers. */
        uint64_t has_mbw_part          : 1;  /**< [ 26: 26](RO) This MSC does not support memory bandwidth partitioning or have TAD_CMN_MPAMF_MBW_IDR
                                                                 register. */
        uint64_t has_pri_part          : 1;  /**< [ 27: 27](RO) This MSC does not support priority partitioning or have TAD_CMN_MPAMF_PRI_IDR. */
        uint64_t ext                   : 1;  /**< [ 28: 28](RO) Extended TAD_CMN_MPAMF_IDR. TAD_CMN_MPAMF_IDR has bits defined in [63:32]. The register is 64-bits. */
        uint64_t has_impl_idr          : 1;  /**< [ 29: 29](RO) This MSC does not have the implementation-specific MPAM
                                                                 features register, TAD_CMN_MPAMF_IMPL_IDR. */
        uint64_t has_msmon             : 1;  /**< [ 30: 30](RO) This MSC does not have MPAM resource monitors. */
        uint64_t has_partid_nrw        : 1;  /**< [ 31: 31](RO) This MSC does not support PARTID narrowing. */
        uint64_t has_ris               : 1;  /**< [ 32: 32](RO) This MSC has a resource instance selector. TAD_CMN_MPAMCFG_PART_SEL contains the RIS field that
                                                                 selects a resource instance to control.

                                                                 TAD_CMN_MPAMCFG_PART_SEL implements the TAD_CMN_MPAMCFG_PART_SEL[RIS] and
                                                                 MPAM resource instance numbers up to and including TAD_CMN_MPAMF_IDR[RIS_MAX].

                                                                 Here are the resource instances that each valid RIS value corresponds to:
                                                                 0 = LTG.
                                                                 1 = DTG. */
        uint64_t reserved_33_35        : 3;
        uint64_t no_impl_part          : 1;  /**< [ 36: 36](RAZ) This MSC does not have any IMPLEMENTATION DEFINED resource controls. */
        uint64_t no_impl_msmon         : 1;  /**< [ 37: 37](RAZ) This MSC does not have any IMPLEMENTATION DEFINED resource monitors. */
        uint64_t has_extd_esr          : 1;  /**< [ 38: 38](RO) MPAMF_ECR and MPAM error handling are not implemented. */
        uint64_t has_esr               : 1;  /**< [ 39: 39](RO) MPAMF_ECR and MPAM error handling are not implemented. */
        uint64_t reserved_40_55        : 16;
        uint64_t ris_max               : 4;  /**< [ 59: 56](RO) Maximum RIS value supported in TAD_CMN_MPAMCFG_PART_SEL, which is 1 for this implementation. */
        uint64_t reserved_60_63        : 4;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_tad_cmn_mpamf_idr_ns_s cn; */
};
typedef union cavm_tad_cmn_mpamf_idr_ns cavm_tad_cmn_mpamf_idr_ns_t;

#define CAVM_TAD_CMN_MPAMF_IDR_NS CAVM_TAD_CMN_MPAMF_IDR_NS_FUNC()
static inline uint64_t CAVM_TAD_CMN_MPAMF_IDR_NS_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_TAD_CMN_MPAMF_IDR_NS_FUNC(void)
{
    if (cavm_is_model(OCTEONTX_CN10KA))
        return 0x87e053001000ll;
    if (cavm_is_model(OCTEONTX_CN10KB))
        return 0x87e053010000ll;
    if (cavm_is_model(OCTEONTX_CNF10KA))
        return 0x87e053001000ll;
    if (cavm_is_model(OCTEONTX_CNF10KB))
        return 0x87e053001000ll;
    __cavm_csr_fatal("TAD_CMN_MPAMF_IDR_NS", 0, 0, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_TAD_CMN_MPAMF_IDR_NS cavm_tad_cmn_mpamf_idr_ns_t
#define bustype_CAVM_TAD_CMN_MPAMF_IDR_NS CSR_TYPE_RSL
#define basename_CAVM_TAD_CMN_MPAMF_IDR_NS "TAD_CMN_MPAMF_IDR_NS"
#define device_bar_CAVM_TAD_CMN_MPAMF_IDR_NS 0x0 /* PF_BAR0 */
#define busnum_CAVM_TAD_CMN_MPAMF_IDR_NS 0
#define arguments_CAVM_TAD_CMN_MPAMF_IDR_NS -1,-1,-1,-1

/**
 * Register (RSL) tad_cmn_mpamf_idr_s
 *
 * MPAM Features Identification Register
 * Indicates which memory partitioning and monitoring features are present on this MSC.
 * TAD_CMN_MPAMF_IDR_S indicates the MPAM features accessed from the Secure MPAM feature page.
 */
union cavm_tad_cmn_mpamf_idr_s
{
    uint64_t u;
    struct cavm_tad_cmn_mpamf_idr_s_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_60_63        : 4;
        uint64_t ris_max               : 4;  /**< [ 59: 56](SRO) Maximum RIS value supported in TAD_CMN_MPAMCFG_PART_SEL, which is 1 for this implementation. */
        uint64_t reserved_40_55        : 16;
        uint64_t has_esr               : 1;  /**< [ 39: 39](SRO) MPAMF_ECR and MPAM error handling are not implemented. */
        uint64_t has_extd_esr          : 1;  /**< [ 38: 38](SRO) MPAMF_ECR and MPAM error handling are not implemented. */
        uint64_t no_impl_msmon         : 1;  /**< [ 37: 37](SRO) This MSC does not have any IMPLEMENTATION DEFINED resource monitors. */
        uint64_t no_impl_part          : 1;  /**< [ 36: 36](SRO) This MSC does not have any IMPLEMENTATION DEFINED resource controls. */
        uint64_t reserved_33_35        : 3;
        uint64_t has_ris               : 1;  /**< [ 32: 32](SRO) This MSC has a resource instance selector. TAD_CMN_MPAMCFG_PART_SEL contains the RIS field that
                                                                 selects a resource instance to control.

                                                                 TAD_CMN_MPAMCFG_PART_SEL implements the TAD_CMN_MPAMCFG_PART_SEL[RIS] and
                                                                 MPAM resource instance numbers up to and including TAD_CMN_MPAMF_IDR[RIS_MAX].

                                                                 Here are the resource instances that each valid RIS value corresponds to:
                                                                 0 = LTG.
                                                                 1 = DTG. */
        uint64_t has_partid_nrw        : 1;  /**< [ 31: 31](SRO) This MSC does not support PARTID narrowing. */
        uint64_t has_msmon             : 1;  /**< [ 30: 30](SRO) This MSC does not have MPAM resource monitors. */
        uint64_t has_impl_idr          : 1;  /**< [ 29: 29](SRO) This MSC does not have the implementation-specific MPAM
                                                                 features register, TAD_CMN_MPAMF_IMPL_IDR. */
        uint64_t ext                   : 1;  /**< [ 28: 28](SRO) Extended TAD_CMN_MPAMF_IDR. TAD_CMN_MPAMF_IDR has bits defined in [63:32]. The register is 64-bits. */
        uint64_t has_pri_part          : 1;  /**< [ 27: 27](SRO) This MSC does not support priority partitioning or have TAD_CMN_MPAMF_PRI_IDR. */
        uint64_t has_mbw_part          : 1;  /**< [ 26: 26](SRO) This MSC does not support memory bandwidth partitioning or have TAD_CMN_MPAMF_MBW_IDR
                                                                 register. */
        uint64_t has_cpor_part         : 1;  /**< [ 25: 25](SRO) This MSC implements MPAM cache portion partitioning.
                                                                 It has TAD_CMN_MPAMF_CPOR_IDR and TAD_CMN_MPAMCFG_CPBM registers. */
        uint64_t has_ccap_part         : 1;  /**< [ 24: 24](SRO) This MSC does not support MPAM cache capacity partitioning or have
                                                                 the TAD_CMN_MPAMF_CCAP_IDR and TAD_CMN_MPAMCFG_CMAX registers. */
        uint64_t pmg_max               : 8;  /**< [ 23: 16](SRO) Maximum value of Non-secure PMG supported by this component. */
        uint64_t partid_max            : 16; /**< [ 15:  0](SRO) Maximum value of Non-secure PARTID supported by this component. */
#else /* Word 0 - Little Endian */
        uint64_t partid_max            : 16; /**< [ 15:  0](SRO) Maximum value of Non-secure PARTID supported by this component. */
        uint64_t pmg_max               : 8;  /**< [ 23: 16](SRO) Maximum value of Non-secure PMG supported by this component. */
        uint64_t has_ccap_part         : 1;  /**< [ 24: 24](SRO) This MSC does not support MPAM cache capacity partitioning or have
                                                                 the TAD_CMN_MPAMF_CCAP_IDR and TAD_CMN_MPAMCFG_CMAX registers. */
        uint64_t has_cpor_part         : 1;  /**< [ 25: 25](SRO) This MSC implements MPAM cache portion partitioning.
                                                                 It has TAD_CMN_MPAMF_CPOR_IDR and TAD_CMN_MPAMCFG_CPBM registers. */
        uint64_t has_mbw_part          : 1;  /**< [ 26: 26](SRO) This MSC does not support memory bandwidth partitioning or have TAD_CMN_MPAMF_MBW_IDR
                                                                 register. */
        uint64_t has_pri_part          : 1;  /**< [ 27: 27](SRO) This MSC does not support priority partitioning or have TAD_CMN_MPAMF_PRI_IDR. */
        uint64_t ext                   : 1;  /**< [ 28: 28](SRO) Extended TAD_CMN_MPAMF_IDR. TAD_CMN_MPAMF_IDR has bits defined in [63:32]. The register is 64-bits. */
        uint64_t has_impl_idr          : 1;  /**< [ 29: 29](SRO) This MSC does not have the implementation-specific MPAM
                                                                 features register, TAD_CMN_MPAMF_IMPL_IDR. */
        uint64_t has_msmon             : 1;  /**< [ 30: 30](SRO) This MSC does not have MPAM resource monitors. */
        uint64_t has_partid_nrw        : 1;  /**< [ 31: 31](SRO) This MSC does not support PARTID narrowing. */
        uint64_t has_ris               : 1;  /**< [ 32: 32](SRO) This MSC has a resource instance selector. TAD_CMN_MPAMCFG_PART_SEL contains the RIS field that
                                                                 selects a resource instance to control.

                                                                 TAD_CMN_MPAMCFG_PART_SEL implements the TAD_CMN_MPAMCFG_PART_SEL[RIS] and
                                                                 MPAM resource instance numbers up to and including TAD_CMN_MPAMF_IDR[RIS_MAX].

                                                                 Here are the resource instances that each valid RIS value corresponds to:
                                                                 0 = LTG.
                                                                 1 = DTG. */
        uint64_t reserved_33_35        : 3;
        uint64_t no_impl_part          : 1;  /**< [ 36: 36](SRO) This MSC does not have any IMPLEMENTATION DEFINED resource controls. */
        uint64_t no_impl_msmon         : 1;  /**< [ 37: 37](SRO) This MSC does not have any IMPLEMENTATION DEFINED resource monitors. */
        uint64_t has_extd_esr          : 1;  /**< [ 38: 38](SRO) MPAMF_ECR and MPAM error handling are not implemented. */
        uint64_t has_esr               : 1;  /**< [ 39: 39](SRO) MPAMF_ECR and MPAM error handling are not implemented. */
        uint64_t reserved_40_55        : 16;
        uint64_t ris_max               : 4;  /**< [ 59: 56](SRO) Maximum RIS value supported in TAD_CMN_MPAMCFG_PART_SEL, which is 1 for this implementation. */
        uint64_t reserved_60_63        : 4;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_tad_cmn_mpamf_idr_s_s cn; */
};
typedef union cavm_tad_cmn_mpamf_idr_s cavm_tad_cmn_mpamf_idr_s_t;

#define CAVM_TAD_CMN_MPAMF_IDR_S CAVM_TAD_CMN_MPAMF_IDR_S_FUNC()
static inline uint64_t CAVM_TAD_CMN_MPAMF_IDR_S_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_TAD_CMN_MPAMF_IDR_S_FUNC(void)
{
    if (cavm_is_model(OCTEONTX_CN10KA))
        return 0x87e053003000ll;
    if (cavm_is_model(OCTEONTX_CN10KB))
        return 0x87e053020000ll;
    if (cavm_is_model(OCTEONTX_CNF10KA))
        return 0x87e053003000ll;
    if (cavm_is_model(OCTEONTX_CNF10KB))
        return 0x87e053003000ll;
    __cavm_csr_fatal("TAD_CMN_MPAMF_IDR_S", 0, 0, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_TAD_CMN_MPAMF_IDR_S cavm_tad_cmn_mpamf_idr_s_t
#define bustype_CAVM_TAD_CMN_MPAMF_IDR_S CSR_TYPE_RSL
#define basename_CAVM_TAD_CMN_MPAMF_IDR_S "TAD_CMN_MPAMF_IDR_S"
#define device_bar_CAVM_TAD_CMN_MPAMF_IDR_S 0x0 /* PF_BAR0 */
#define busnum_CAVM_TAD_CMN_MPAMF_IDR_S 0
#define arguments_CAVM_TAD_CMN_MPAMF_IDR_S -1,-1,-1,-1

/**
 * Register (RSL) tad_cmn_mpamf_iidr_ns
 *
 * MPAM Implementation Identification Register
 * Uniquely identifies the MSC implementation by the combination of implementer, product ID,
 * variant and revision.
 */
union cavm_tad_cmn_mpamf_iidr_ns
{
    uint64_t u;
    struct cavm_tad_cmn_mpamf_iidr_ns_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_32_63        : 32;
        uint64_t productid             : 12; /**< [ 31: 20](RO) Part number, bits [11:0]. The part number is selected by the
                                                                 designer of the component. */
        uint64_t variant               : 4;  /**< [ 19: 16](RO) Component major revision.

                                                                 This field distinguishes product variants or major revisions of
                                                                 the product. */
        uint64_t revision              : 4;  /**< [ 15: 12](RO) Component minor revision.

                                                                 This field distinguishes minor revisions of the product. */
        uint64_t implementer           : 12; /**< [ 11:  0](RO) Contains the JEP106 code of the company that implemented the MPAM MSC.
                                                                 For an Arm implementation, bits[11:0] are 0x43B. */
#else /* Word 0 - Little Endian */
        uint64_t implementer           : 12; /**< [ 11:  0](RO) Contains the JEP106 code of the company that implemented the MPAM MSC.
                                                                 For an Arm implementation, bits[11:0] are 0x43B. */
        uint64_t revision              : 4;  /**< [ 15: 12](RO) Component minor revision.

                                                                 This field distinguishes minor revisions of the product. */
        uint64_t variant               : 4;  /**< [ 19: 16](RO) Component major revision.

                                                                 This field distinguishes product variants or major revisions of
                                                                 the product. */
        uint64_t productid             : 12; /**< [ 31: 20](RO) Part number, bits [11:0]. The part number is selected by the
                                                                 designer of the component. */
        uint64_t reserved_32_63        : 32;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_tad_cmn_mpamf_iidr_ns_s cn; */
};
typedef union cavm_tad_cmn_mpamf_iidr_ns cavm_tad_cmn_mpamf_iidr_ns_t;

#define CAVM_TAD_CMN_MPAMF_IIDR_NS CAVM_TAD_CMN_MPAMF_IIDR_NS_FUNC()
static inline uint64_t CAVM_TAD_CMN_MPAMF_IIDR_NS_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_TAD_CMN_MPAMF_IIDR_NS_FUNC(void)
{
    if (cavm_is_model(OCTEONTX_CN10KA))
        return 0x87e053001018ll;
    if (cavm_is_model(OCTEONTX_CN10KB))
        return 0x87e053010018ll;
    if (cavm_is_model(OCTEONTX_CNF10KA))
        return 0x87e053001018ll;
    if (cavm_is_model(OCTEONTX_CNF10KB))
        return 0x87e053001018ll;
    __cavm_csr_fatal("TAD_CMN_MPAMF_IIDR_NS", 0, 0, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_TAD_CMN_MPAMF_IIDR_NS cavm_tad_cmn_mpamf_iidr_ns_t
#define bustype_CAVM_TAD_CMN_MPAMF_IIDR_NS CSR_TYPE_RSL
#define basename_CAVM_TAD_CMN_MPAMF_IIDR_NS "TAD_CMN_MPAMF_IIDR_NS"
#define device_bar_CAVM_TAD_CMN_MPAMF_IIDR_NS 0x0 /* PF_BAR0 */
#define busnum_CAVM_TAD_CMN_MPAMF_IIDR_NS 0
#define arguments_CAVM_TAD_CMN_MPAMF_IIDR_NS -1,-1,-1,-1

/**
 * Register (RSL) tad_cmn_mpamf_iidr_s
 *
 * MPAM Implementation Identification Register
 * Uniquely identifies the MSC implementation by the combination of implementer, product ID,
 * variant and revision.
 */
union cavm_tad_cmn_mpamf_iidr_s
{
    uint64_t u;
    struct cavm_tad_cmn_mpamf_iidr_s_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_32_63        : 32;
        uint64_t productid             : 12; /**< [ 31: 20](SRO) Part number, bits [11:0]. The part number is selected by the
                                                                 designer of the component. */
        uint64_t variant               : 4;  /**< [ 19: 16](SRO) Component major revision.

                                                                 This field distinguishes product variants or major revisions of
                                                                 the product. */
        uint64_t revision              : 4;  /**< [ 15: 12](SRO) Component minor revision.

                                                                 This field distinguishes minor revisions of the product. */
        uint64_t implementer           : 12; /**< [ 11:  0](SRO) Contains the JEP106 code of the company that implemented the MPAM MSC.
                                                                 For an Arm implementation, bits[11:0] are 0x43B. */
#else /* Word 0 - Little Endian */
        uint64_t implementer           : 12; /**< [ 11:  0](SRO) Contains the JEP106 code of the company that implemented the MPAM MSC.
                                                                 For an Arm implementation, bits[11:0] are 0x43B. */
        uint64_t revision              : 4;  /**< [ 15: 12](SRO) Component minor revision.

                                                                 This field distinguishes minor revisions of the product. */
        uint64_t variant               : 4;  /**< [ 19: 16](SRO) Component major revision.

                                                                 This field distinguishes product variants or major revisions of
                                                                 the product. */
        uint64_t productid             : 12; /**< [ 31: 20](SRO) Part number, bits [11:0]. The part number is selected by the
                                                                 designer of the component. */
        uint64_t reserved_32_63        : 32;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_tad_cmn_mpamf_iidr_s_s cn; */
};
typedef union cavm_tad_cmn_mpamf_iidr_s cavm_tad_cmn_mpamf_iidr_s_t;

#define CAVM_TAD_CMN_MPAMF_IIDR_S CAVM_TAD_CMN_MPAMF_IIDR_S_FUNC()
static inline uint64_t CAVM_TAD_CMN_MPAMF_IIDR_S_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_TAD_CMN_MPAMF_IIDR_S_FUNC(void)
{
    if (cavm_is_model(OCTEONTX_CN10KA))
        return 0x87e053003018ll;
    if (cavm_is_model(OCTEONTX_CN10KB))
        return 0x87e053020018ll;
    if (cavm_is_model(OCTEONTX_CNF10KA))
        return 0x87e053003018ll;
    if (cavm_is_model(OCTEONTX_CNF10KB))
        return 0x87e053003018ll;
    __cavm_csr_fatal("TAD_CMN_MPAMF_IIDR_S", 0, 0, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_TAD_CMN_MPAMF_IIDR_S cavm_tad_cmn_mpamf_iidr_s_t
#define bustype_CAVM_TAD_CMN_MPAMF_IIDR_S CSR_TYPE_RSL
#define basename_CAVM_TAD_CMN_MPAMF_IIDR_S "TAD_CMN_MPAMF_IIDR_S"
#define device_bar_CAVM_TAD_CMN_MPAMF_IIDR_S 0x0 /* PF_BAR0 */
#define busnum_CAVM_TAD_CMN_MPAMF_IIDR_S 0
#define arguments_CAVM_TAD_CMN_MPAMF_IIDR_S -1,-1,-1,-1

/**
 * Register (RSL) tad_cmn_mpamf_sidr
 *
 * MPAM Features Secure Identification Register
 * The TAD_CMN_MPAMF_SIDR is a 32-bit read-only register that indicates the maximum Secure PARTID and
 * Secure PMG on this MSC.
 */
union cavm_tad_cmn_mpamf_sidr
{
    uint64_t u;
    struct cavm_tad_cmn_mpamf_sidr_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_24_63        : 40;
        uint64_t s_pmg_max             : 8;  /**< [ 23: 16](SRO) Maximum value of Secure PMG supported by this component. */
        uint64_t s_partid_max          : 16; /**< [ 15:  0](SRO) Maximum value of Secure PARTID supported by this component. */
#else /* Word 0 - Little Endian */
        uint64_t s_partid_max          : 16; /**< [ 15:  0](SRO) Maximum value of Secure PARTID supported by this component. */
        uint64_t s_pmg_max             : 8;  /**< [ 23: 16](SRO) Maximum value of Secure PMG supported by this component. */
        uint64_t reserved_24_63        : 40;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_tad_cmn_mpamf_sidr_s cn; */
};
typedef union cavm_tad_cmn_mpamf_sidr cavm_tad_cmn_mpamf_sidr_t;

#define CAVM_TAD_CMN_MPAMF_SIDR CAVM_TAD_CMN_MPAMF_SIDR_FUNC()
static inline uint64_t CAVM_TAD_CMN_MPAMF_SIDR_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_TAD_CMN_MPAMF_SIDR_FUNC(void)
{
    if (cavm_is_model(OCTEONTX_CN10KA))
        return 0x87e053003008ll;
    if (cavm_is_model(OCTEONTX_CN10KB))
        return 0x87e053020008ll;
    if (cavm_is_model(OCTEONTX_CNF10KA))
        return 0x87e053003008ll;
    if (cavm_is_model(OCTEONTX_CNF10KB))
        return 0x87e053003008ll;
    __cavm_csr_fatal("TAD_CMN_MPAMF_SIDR", 0, 0, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_TAD_CMN_MPAMF_SIDR cavm_tad_cmn_mpamf_sidr_t
#define bustype_CAVM_TAD_CMN_MPAMF_SIDR CSR_TYPE_RSL
#define basename_CAVM_TAD_CMN_MPAMF_SIDR "TAD_CMN_MPAMF_SIDR"
#define device_bar_CAVM_TAD_CMN_MPAMF_SIDR 0x0 /* PF_BAR0 */
#define busnum_CAVM_TAD_CMN_MPAMF_SIDR 0
#define arguments_CAVM_TAD_CMN_MPAMF_SIDR -1,-1,-1,-1

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
        uint64_t reserved_16_63        : 48;
        uint64_t sadr_pcrdtype_dis     : 4;  /**< [ 15: 12](R/W) This register disables same address retry hardware. */
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
        uint64_t sadr_pcrdtype_dis     : 4;  /**< [ 15: 12](R/W) This register disables same address retry hardware. */
        uint64_t reserved_16_63        : 48;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_tad_cmn_req_retry_s cn10; */
    /* struct cavm_tad_cmn_req_retry_s cn10ka; */
    struct cavm_tad_cmn_req_retry_cn10kb
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_16_63        : 48;
        uint64_t sadr_pcrdtype_dis     : 4;  /**< [ 15: 12](SR/W) This register disables same address retry hardware. */
        uint64_t sadr_req_high_wmark   : 6;  /**< [ 11:  6](SR/W) This register controls the number of same address REQs that can be stored in
                                                                 buffers before issuing a same address retry.

                                                                 If set to 0, same address retries are all disabled. */
        uint64_t sadr_req_low_wmark    : 6;  /**< [  5:  0](SR/W) After same address REQS exceed [SADR_REQ_HIGH_WMARK] and a retry is issued,
                                                                 this register controls the number of same address REQs allowed in buffers
                                                                 before issuing PcrdGrants. PcrdGrants are issued whenever the number of
                                                                 same address REQs in buffers fall below this number. */
#else /* Word 0 - Little Endian */
        uint64_t sadr_req_low_wmark    : 6;  /**< [  5:  0](SR/W) After same address REQS exceed [SADR_REQ_HIGH_WMARK] and a retry is issued,
                                                                 this register controls the number of same address REQs allowed in buffers
                                                                 before issuing PcrdGrants. PcrdGrants are issued whenever the number of
                                                                 same address REQs in buffers fall below this number. */
        uint64_t sadr_req_high_wmark   : 6;  /**< [ 11:  6](SR/W) This register controls the number of same address REQs that can be stored in
                                                                 buffers before issuing a same address retry.

                                                                 If set to 0, same address retries are all disabled. */
        uint64_t sadr_pcrdtype_dis     : 4;  /**< [ 15: 12](SR/W) This register disables same address retry hardware. */
        uint64_t reserved_16_63        : 48;
#endif /* Word 0 - End */
    } cn10kb;
    /* struct cavm_tad_cmn_req_retry_s cnf10ka; */
    /* struct cavm_tad_cmn_req_retry_s cnf10kb; */
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

#endif /* __CAVM_CSRS_TAD_CMN_H__ */
