#ifndef __CAVM_CSRS_TAD_CMN_H__
#define __CAVM_CSRS_TAD_CMN_H__
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
 * TAD_CMN.
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
#define CAVM_TAD_CMN_BAR_E_TAD_CMN_PF_BAR0_SIZE 0x100000ull

/**
 * Enumeration tad_cmn_mpam_err_e
 *
 * MPAM Error Code Enumeration
 * Error codes to be reported in MPAMF_ESR (if TAD_CMN_MPAMF_IDR_NS/S[HAS_ESR]==1)
 */
#define CAVM_TAD_CMN_MPAM_ERR_E_INTPARTID_RANGE (6)
#define CAVM_TAD_CMN_MPAM_ERR_E_MONITOR_RANGE (5)
#define CAVM_TAD_CMN_MPAM_ERR_E_MSMONCFG_ID_RANGE (3)
#define CAVM_TAD_CMN_MPAM_ERR_E_NO_ERROR (0)
#define CAVM_TAD_CMN_MPAM_ERR_E_PARTID_SEL_RANGE (1)
#define CAVM_TAD_CMN_MPAM_ERR_E_REQ_PARTID_RANGE (2)
#define CAVM_TAD_CMN_MPAM_ERR_E_REQ_PMG_RANGE (4)
#define CAVM_TAD_CMN_MPAM_ERR_E_RESERVED_ERRCODE_12 (0xc)
#define CAVM_TAD_CMN_MPAM_ERR_E_RESERVED_ERRCODE_13 (0xd)
#define CAVM_TAD_CMN_MPAM_ERR_E_RESERVED_ERRCODE_14 (0xe)
#define CAVM_TAD_CMN_MPAM_ERR_E_RESERVED_ERRCODE_15 (0xf)
#define CAVM_TAD_CMN_MPAM_ERR_E_RIS_NO_CONTROL (9)
#define CAVM_TAD_CMN_MPAM_ERR_E_RIS_NO_MONITOR (0xb)
#define CAVM_TAD_CMN_MPAM_ERR_E_UNDEFINED_RIS_MON_SEL (0xa)
#define CAVM_TAD_CMN_MPAM_ERR_E_UNDEFINED_RIS_PART_SEL (8)
#define CAVM_TAD_CMN_MPAM_ERR_E_UNEXPECTED_INTERNAL (7)

/**
 * Enumeration tad_cmn_mpam_ris_e
 *
 * MPAM Resource Instance Enumeration
 * Resource instances
 */
#define CAVM_TAD_CMN_MPAM_RIS_E_DTG (2)
#define CAVM_TAD_CMN_MPAM_RIS_E_LTG (1)
#define CAVM_TAD_CMN_MPAM_RIS_E_MSC (0)

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
        uint64_t reserved_23_63        : 41;
        uint64_t nodtg                 : 1;  /**< [ 22: 22](SR/W) When set with [START], do not flush the DTG. If both [NOLTG] and [NODTG] are
                                                                 set, they will be ignored and both LTG and DTG will be flushed. */
        uint64_t noltg                 : 1;  /**< [ 21: 21](SR/W) When set with [START], do not flush the LTG. If both [NOLTG] and [NODTG] are
                                                                 set, they will be ignored and both LTG and DTG will be flushed. */
        uint64_t reserved_3_20         : 18;
        uint64_t flush_type            : 2;  /**< [  2:  1](SR/W) This register controls the type of cache flush.

                                                                 0 = CleanInvalid       (Invalidate all caches. Write back dirty data to DRAM.)
                                                                 1 = MakeInvalid        (Invalidate all caches. Throwing away dirty data.)
                                                                 2 = CleanSharedPersist (Write back all dirty data to Point of Persistence.
                                                                                         Transitioning the block to the clean state while leaving
                                                                                         it in all caches.)
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
        uint64_t flush_type            : 2;  /**< [  2:  1](SR/W) This register controls the type of cache flush.

                                                                 0 = CleanInvalid       (Invalidate all caches. Write back dirty data to DRAM.)
                                                                 1 = MakeInvalid        (Invalidate all caches. Throwing away dirty data.)
                                                                 2 = CleanSharedPersist (Write back all dirty data to Point of Persistence.
                                                                                         Transitioning the block to the clean state while leaving
                                                                                         it in all caches.)
                                                                 3 = Reserved. */
        uint64_t reserved_3_20         : 18;
        uint64_t noltg                 : 1;  /**< [ 21: 21](SR/W) When set with [START], do not flush the LTG. If both [NOLTG] and [NODTG] are
                                                                 set, they will be ignored and both LTG and DTG will be flushed. */
        uint64_t nodtg                 : 1;  /**< [ 22: 22](SR/W) When set with [START], do not flush the DTG. If both [NOLTG] and [NODTG] are
                                                                 set, they will be ignored and both LTG and DTG will be flushed. */
        uint64_t reserved_23_63        : 41;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_tad_cmn_cache_flush_s cn; */
};
typedef union cavm_tad_cmn_cache_flush cavm_tad_cmn_cache_flush_t;

#define CAVM_TAD_CMN_CACHE_FLUSH CAVM_TAD_CMN_CACHE_FLUSH_FUNC()
static inline uint64_t CAVM_TAD_CMN_CACHE_FLUSH_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_TAD_CMN_CACHE_FLUSH_FUNC(void)
{
    if (cavm_is_model(OCTEONTX_CN20KA))
        return 0x87e053000010ll;
    __cavm_csr_fatal("TAD_CMN_CACHE_FLUSH", 0, 0, 0, 0, 0, 0, 0);
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
        uint64_t ddr_timeout           : 32; /**< [ 63: 32](SR/W) DDR CBUSY minimum timeout value. Every DDR PartID CBUSY value is stored and valid
                                                                 for at least the duration of this value. After which the DDR PartID CBUSY is no
                                                                 longer part of TAD CBUSY as it is considered stale.

                                                                 Values are in units of 20ns. */
        uint64_t tad_cbusy1_busy_trsh  : 7;  /**< [ 31: 25](SR/W) This register sets the threshold at which TAD resources are considered busy.
                                                                 Max value is 56. */
        uint64_t tad_cbusy1_free_trsh  : 7;  /**< [ 24: 18](SR/W) This register sets the threshold at which TAD resources are considered free.
                                                                 Max value is 56. */
        uint64_t tad_cbusy0_busy_trsh  : 7;  /**< [ 17: 11](SR/W) This register sets the threshold at which MPAM PartID is considered busy.
                                                                 Max value is 56. */
        uint64_t tad_cbusy0_free_trsh  : 7;  /**< [ 10:  4](SR/W) This register sets the threshold at which MPAM PartID is considered free.
                                                                 Max value is 56. */
        uint64_t ddr_cbusy_en          : 2;  /**< [  3:  2](SR/W) This register enables ORing DDR bits into CBUSY responses. */
        uint64_t tad_cbusy_en          : 2;  /**< [  1:  0](SR/W) This register enables ORing TAD bits into CBUSY responses. */
#else /* Word 0 - Little Endian */
        uint64_t tad_cbusy_en          : 2;  /**< [  1:  0](SR/W) This register enables ORing TAD bits into CBUSY responses. */
        uint64_t ddr_cbusy_en          : 2;  /**< [  3:  2](SR/W) This register enables ORing DDR bits into CBUSY responses. */
        uint64_t tad_cbusy0_free_trsh  : 7;  /**< [ 10:  4](SR/W) This register sets the threshold at which MPAM PartID is considered free.
                                                                 Max value is 56. */
        uint64_t tad_cbusy0_busy_trsh  : 7;  /**< [ 17: 11](SR/W) This register sets the threshold at which MPAM PartID is considered busy.
                                                                 Max value is 56. */
        uint64_t tad_cbusy1_free_trsh  : 7;  /**< [ 24: 18](SR/W) This register sets the threshold at which TAD resources are considered free.
                                                                 Max value is 56. */
        uint64_t tad_cbusy1_busy_trsh  : 7;  /**< [ 31: 25](SR/W) This register sets the threshold at which TAD resources are considered busy.
                                                                 Max value is 56. */
        uint64_t ddr_timeout           : 32; /**< [ 63: 32](SR/W) DDR CBUSY minimum timeout value. Every DDR PartID CBUSY value is stored and valid
                                                                 for at least the duration of this value. After which the DDR PartID CBUSY is no
                                                                 longer part of TAD CBUSY as it is considered stale.

                                                                 Values are in units of 20ns. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_tad_cmn_cbusy_s cn; */
};
typedef union cavm_tad_cmn_cbusy cavm_tad_cmn_cbusy_t;

#define CAVM_TAD_CMN_CBUSY CAVM_TAD_CMN_CBUSY_FUNC()
static inline uint64_t CAVM_TAD_CMN_CBUSY_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_TAD_CMN_CBUSY_FUNC(void)
{
    if (cavm_is_model(OCTEONTX_CN20KA))
        return 0x87e053000020ll;
    __cavm_csr_fatal("TAD_CMN_CBUSY", 0, 0, 0, 0, 0, 0, 0);
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
    } s;
    /* struct cavm_tad_cmn_const_s cn; */
};
typedef union cavm_tad_cmn_const cavm_tad_cmn_const_t;

#define CAVM_TAD_CMN_CONST CAVM_TAD_CMN_CONST_FUNC()
static inline uint64_t CAVM_TAD_CMN_CONST_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_TAD_CMN_CONST_FUNC(void)
{
    if (cavm_is_model(OCTEONTX_CN20KA))
        return 0x87e053000028ll;
    __cavm_csr_fatal("TAD_CMN_CONST", 0, 0, 0, 0, 0, 0, 0);
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
        uint64_t omon_cclk_dis         : 1;  /**< [ 45: 45](SR/W) Disable power saving TAD conditional clocking. For diagnostic use only. */
        uint64_t reserved_24_44        : 21;
        uint64_t mpam_upd_wr           : 1;  /**< [ 23: 23](SR/W) Update MPAM ID on write hits. Set to 0 to only update MPAM ID on allocate. */
        uint64_t row_bcst_thresh       : 4;  /**< [ 22: 19](SR/W) Number of total messages (minus one) that a row broadcast must save
                                                                 in order for TAD to use a broadcast instead of individually snooping
                                                                 tracked sharers in the row. Setting this field to MAX_NUM_COLS will
                                                                 disable row broadcasts for non-MN snoops. */
        uint64_t enaexmpocevent        : 1;  /**< [ 18: 18](SR/W) When set, TAD will signal an event when an exclusive PoC monitor is cleared. */
        uint64_t disexmsysevent        : 1;  /**< [ 17: 17](SR/W) When set, TAD will not signal an event when an exclusive system monitor is cleared. */
        uint64_t distagscrub           : 1;  /**< [ 16: 16](SR/W) When set, TAD does not attempt to scrub SBEs in the LTG or DTG. */
        uint64_t iobchiso              : 1;  /**< [ 15: 15](SR/W) When set, TAD requires strict CHI ordering (does not allow DMT) for IOB requests
                                                                 with ExpCompAck=0 and Order!=NONE. */
        uint64_t disearlydq            : 1;  /**< [ 14: 14](SR/W) For each request, TAD must process many separate actions. These actions can be
                                                                 roughly divided into request address related actions, data related actions, and
                                                                 eviction processing. As part of this, the TAD sends a final message which
                                                                 results in a completion reaching requester (e.g., a Comp, CompData, RespSepData,
                                                                 etc. message in the CHI protocol). To prevent races between snoops to the same
                                                                 64-byte cacheline, the TAD must wait to receive a CompAck back from the
                                                                 requester to know when the completion has been received.

                                                                 When [DISEARLYDQ]=0, the TAD will start processing a new request once it has
                                                                 completed all address related actions for all preceeding requests to the same
                                                                 64-byte cacheline, without waiting to process the data or eviction related
                                                                 actions, but it will delay sending any snoops until it has received the CompAck
                                                                 for the preceding request to the same cacheline. The TAD maintains additional
                                                                 data and eviction address hazards to ensure no ordering required for coherency
                                                                 is violated.

                                                                 When [DISEARLYDQ]=1, the TAD will not pipeline requests to the same cacheline,
                                                                 and instead TAD delays all processing of incoming requests until it has
                                                                 completed all actions (including evictions) for each preceding request to the
                                                                 same 64-byte cacheline. */
        uint64_t dismultmpam           : 1;  /**< [ 13: 13](SR/W) When set, MPAM field is forced to zero on all incoming REQs. */
        uint64_t maxifb                : 5;  /**< [ 12:  8](SR/W) Maximum IFBs in use at once (0, 25-31 interpreted as 24, 1-24 as Expected). */
        uint64_t reserved_6_7          : 2;
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
        uint64_t reserved_6_7          : 2;
        uint64_t maxifb                : 5;  /**< [ 12:  8](SR/W) Maximum IFBs in use at once (0, 25-31 interpreted as 24, 1-24 as Expected). */
        uint64_t dismultmpam           : 1;  /**< [ 13: 13](SR/W) When set, MPAM field is forced to zero on all incoming REQs. */
        uint64_t disearlydq            : 1;  /**< [ 14: 14](SR/W) For each request, TAD must process many separate actions. These actions can be
                                                                 roughly divided into request address related actions, data related actions, and
                                                                 eviction processing. As part of this, the TAD sends a final message which
                                                                 results in a completion reaching requester (e.g., a Comp, CompData, RespSepData,
                                                                 etc. message in the CHI protocol). To prevent races between snoops to the same
                                                                 64-byte cacheline, the TAD must wait to receive a CompAck back from the
                                                                 requester to know when the completion has been received.

                                                                 When [DISEARLYDQ]=0, the TAD will start processing a new request once it has
                                                                 completed all address related actions for all preceeding requests to the same
                                                                 64-byte cacheline, without waiting to process the data or eviction related
                                                                 actions, but it will delay sending any snoops until it has received the CompAck
                                                                 for the preceding request to the same cacheline. The TAD maintains additional
                                                                 data and eviction address hazards to ensure no ordering required for coherency
                                                                 is violated.

                                                                 When [DISEARLYDQ]=1, the TAD will not pipeline requests to the same cacheline,
                                                                 and instead TAD delays all processing of incoming requests until it has
                                                                 completed all actions (including evictions) for each preceding request to the
                                                                 same 64-byte cacheline. */
        uint64_t iobchiso              : 1;  /**< [ 15: 15](SR/W) When set, TAD requires strict CHI ordering (does not allow DMT) for IOB requests
                                                                 with ExpCompAck=0 and Order!=NONE. */
        uint64_t distagscrub           : 1;  /**< [ 16: 16](SR/W) When set, TAD does not attempt to scrub SBEs in the LTG or DTG. */
        uint64_t disexmsysevent        : 1;  /**< [ 17: 17](SR/W) When set, TAD will not signal an event when an exclusive system monitor is cleared. */
        uint64_t enaexmpocevent        : 1;  /**< [ 18: 18](SR/W) When set, TAD will signal an event when an exclusive PoC monitor is cleared. */
        uint64_t row_bcst_thresh       : 4;  /**< [ 22: 19](SR/W) Number of total messages (minus one) that a row broadcast must save
                                                                 in order for TAD to use a broadcast instead of individually snooping
                                                                 tracked sharers in the row. Setting this field to MAX_NUM_COLS will
                                                                 disable row broadcasts for non-MN snoops. */
        uint64_t mpam_upd_wr           : 1;  /**< [ 23: 23](SR/W) Update MPAM ID on write hits. Set to 0 to only update MPAM ID on allocate. */
        uint64_t reserved_24_44        : 21;
        uint64_t omon_cclk_dis         : 1;  /**< [ 45: 45](SR/W) Disable power saving TAD conditional clocking. For diagnostic use only. */
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
    } s;
    struct cavm_tad_cmn_ctl_cn
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
        uint64_t omon_cclk_dis         : 1;  /**< [ 45: 45](SR/W) Disable power saving TAD conditional clocking. For diagnostic use only. */
        uint64_t reserved_24_44        : 21;
        uint64_t mpam_upd_wr           : 1;  /**< [ 23: 23](SR/W) Update MPAM ID on write hits. Set to 0 to only update MPAM ID on allocate. */
        uint64_t row_bcst_thresh       : 4;  /**< [ 22: 19](SR/W) Number of total messages (minus one) that a row broadcast must save
                                                                 in order for TAD to use a broadcast instead of individually snooping
                                                                 tracked sharers in the row. Setting this field to MAX_NUM_COLS will
                                                                 disable row broadcasts for non-MN snoops. */
        uint64_t enaexmpocevent        : 1;  /**< [ 18: 18](SR/W) When set, TAD will signal an event when an exclusive PoC monitor is cleared. */
        uint64_t disexmsysevent        : 1;  /**< [ 17: 17](SR/W) When set, TAD will not signal an event when an exclusive system monitor is cleared. */
        uint64_t distagscrub           : 1;  /**< [ 16: 16](SR/W) When set, TAD does not attempt to scrub SBEs in the LTG or DTG. */
        uint64_t iobchiso              : 1;  /**< [ 15: 15](SR/W) When set, TAD requires strict CHI ordering (does not allow DMT) for IOB requests
                                                                 with ExpCompAck=0 and Order!=NONE. */
        uint64_t disearlydq            : 1;  /**< [ 14: 14](SR/W) For each request, TAD must process many separate actions. These actions can be
                                                                 roughly divided into request address related actions, data related actions, and
                                                                 eviction processing. As part of this, the TAD sends a final message which
                                                                 results in a completion reaching requester (e.g., a Comp, CompData, RespSepData,
                                                                 etc. message in the CHI protocol). To prevent races between snoops to the same
                                                                 64-byte cacheline, the TAD must wait to receive a CompAck back from the
                                                                 requester to know when the completion has been received.

                                                                 When [DISEARLYDQ]=0, the TAD will start processing a new request once it has
                                                                 completed all address related actions for all preceeding requests to the same
                                                                 64-byte cacheline, without waiting to process the data or eviction related
                                                                 actions, but it will delay sending any snoops until it has received the CompAck
                                                                 for the preceding request to the same cacheline. The TAD maintains additional
                                                                 data and eviction address hazards to ensure no ordering required for coherency
                                                                 is violated.

                                                                 When [DISEARLYDQ]=1, the TAD will not pipeline requests to the same cacheline,
                                                                 and instead TAD delays all processing of incoming requests until it has
                                                                 completed all actions (including evictions) for each preceding request to the
                                                                 same 64-byte cacheline. */
        uint64_t dismultmpam           : 1;  /**< [ 13: 13](SR/W) When set, MPAM field is forced to zero on all incoming REQs. */
        uint64_t maxifb                : 5;  /**< [ 12:  8](SR/W) Maximum IFBs in use at once (0, 25-31 interpreted as 24, 1-24 as Expected). */
        uint64_t reserved_7            : 1;
        uint64_t reserved_6            : 1;
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
        uint64_t reserved_6            : 1;
        uint64_t reserved_7            : 1;
        uint64_t maxifb                : 5;  /**< [ 12:  8](SR/W) Maximum IFBs in use at once (0, 25-31 interpreted as 24, 1-24 as Expected). */
        uint64_t dismultmpam           : 1;  /**< [ 13: 13](SR/W) When set, MPAM field is forced to zero on all incoming REQs. */
        uint64_t disearlydq            : 1;  /**< [ 14: 14](SR/W) For each request, TAD must process many separate actions. These actions can be
                                                                 roughly divided into request address related actions, data related actions, and
                                                                 eviction processing. As part of this, the TAD sends a final message which
                                                                 results in a completion reaching requester (e.g., a Comp, CompData, RespSepData,
                                                                 etc. message in the CHI protocol). To prevent races between snoops to the same
                                                                 64-byte cacheline, the TAD must wait to receive a CompAck back from the
                                                                 requester to know when the completion has been received.

                                                                 When [DISEARLYDQ]=0, the TAD will start processing a new request once it has
                                                                 completed all address related actions for all preceeding requests to the same
                                                                 64-byte cacheline, without waiting to process the data or eviction related
                                                                 actions, but it will delay sending any snoops until it has received the CompAck
                                                                 for the preceding request to the same cacheline. The TAD maintains additional
                                                                 data and eviction address hazards to ensure no ordering required for coherency
                                                                 is violated.

                                                                 When [DISEARLYDQ]=1, the TAD will not pipeline requests to the same cacheline,
                                                                 and instead TAD delays all processing of incoming requests until it has
                                                                 completed all actions (including evictions) for each preceding request to the
                                                                 same 64-byte cacheline. */
        uint64_t iobchiso              : 1;  /**< [ 15: 15](SR/W) When set, TAD requires strict CHI ordering (does not allow DMT) for IOB requests
                                                                 with ExpCompAck=0 and Order!=NONE. */
        uint64_t distagscrub           : 1;  /**< [ 16: 16](SR/W) When set, TAD does not attempt to scrub SBEs in the LTG or DTG. */
        uint64_t disexmsysevent        : 1;  /**< [ 17: 17](SR/W) When set, TAD will not signal an event when an exclusive system monitor is cleared. */
        uint64_t enaexmpocevent        : 1;  /**< [ 18: 18](SR/W) When set, TAD will signal an event when an exclusive PoC monitor is cleared. */
        uint64_t row_bcst_thresh       : 4;  /**< [ 22: 19](SR/W) Number of total messages (minus one) that a row broadcast must save
                                                                 in order for TAD to use a broadcast instead of individually snooping
                                                                 tracked sharers in the row. Setting this field to MAX_NUM_COLS will
                                                                 disable row broadcasts for non-MN snoops. */
        uint64_t mpam_upd_wr           : 1;  /**< [ 23: 23](SR/W) Update MPAM ID on write hits. Set to 0 to only update MPAM ID on allocate. */
        uint64_t reserved_24_44        : 21;
        uint64_t omon_cclk_dis         : 1;  /**< [ 45: 45](SR/W) Disable power saving TAD conditional clocking. For diagnostic use only. */
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
    } cn;
};
typedef union cavm_tad_cmn_ctl cavm_tad_cmn_ctl_t;

#define CAVM_TAD_CMN_CTL CAVM_TAD_CMN_CTL_FUNC()
static inline uint64_t CAVM_TAD_CMN_CTL_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_TAD_CMN_CTL_FUNC(void)
{
    if (cavm_is_model(OCTEONTX_CN20KA))
        return 0x87e053000008ll;
    __cavm_csr_fatal("TAD_CMN_CTL", 0, 0, 0, 0, 0, 0, 0);
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
        uint64_t reserved_22_63        : 42;
        uint64_t iob_has_smmu          : 8;  /**< [ 21: 14](SR/W) Bit mask of which IOBs have SMMUs attached, and therefore must be snooped by MN */
        uint64_t snp_qos               : 4;  /**< [ 13: 10](SR/W) Value to use in QoS field of MN snoops. Reset value is 0. */
        uint64_t comp_qos              : 4;  /**< [  9:  6](SR/W) Value to use in QoS field of MN CompDBID_Resp/Comp. Reset value is 0. */
        uint64_t dev_ncb               : 3;  /**< [  5:  3](SR/W) NCB Device of IOB. Reset value is 0. */
        uint64_t reserved_0_2          : 3;
#else /* Word 0 - Little Endian */
        uint64_t reserved_0_2          : 3;
        uint64_t dev_ncb               : 3;  /**< [  5:  3](SR/W) NCB Device of IOB. Reset value is 0. */
        uint64_t comp_qos              : 4;  /**< [  9:  6](SR/W) Value to use in QoS field of MN CompDBID_Resp/Comp. Reset value is 0. */
        uint64_t snp_qos               : 4;  /**< [ 13: 10](SR/W) Value to use in QoS field of MN snoops. Reset value is 0. */
        uint64_t iob_has_smmu          : 8;  /**< [ 21: 14](SR/W) Bit mask of which IOBs have SMMUs attached, and therefore must be snooped by MN */
        uint64_t reserved_22_63        : 42;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_tad_cmn_mn_ctl_s cn; */
};
typedef union cavm_tad_cmn_mn_ctl cavm_tad_cmn_mn_ctl_t;

#define CAVM_TAD_CMN_MN_CTL CAVM_TAD_CMN_MN_CTL_FUNC()
static inline uint64_t CAVM_TAD_CMN_MN_CTL_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_TAD_CMN_MN_CTL_FUNC(void)
{
    if (cavm_is_model(OCTEONTX_CN20KA))
        return 0x87e053000030ll;
    __cavm_csr_fatal("TAD_CMN_MN_CTL", 0, 0, 0, 0, 0, 0, 0);
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
        uint64_t cpbm                  : 16; /**< [ 15:  0](R/W/H) Each bit, CPBM\<n\>, grants permission to the PARTID to allocate cache lines within cache portion
                                                                 n.
                                                                 0b0 = The PARTID is not permitted to allocate into cache portion n.
                                                                 0b1 = The PARTID is permitted to allocate within cache portion n.

                                                                 The width of the CPBM changes depending on the RIS value in TAD_CMN_MPAMCFG_PART_SEL.
                                                                 When RIS=LTG, the CPBM is 16 bits, and only bits [15..0] may be written. When RIS=DTG,
                                                                 the CPBM is 18 bits, and bits [17..0] may be written

                                                                 The value of this field varies with MPAMCFG_PART_SEL[RIS]
                                                                   RIS = MSC:   RAZ/WI
                                                                   RIS = LTG:   R/W (reset 0xffff)
                                                                   RIS = DTG:   R/W (reset 0xfff)
                                                                   RIS = undef: RAZ/WI */
#else /* Word 0 - Little Endian */
        uint64_t cpbm                  : 16; /**< [ 15:  0](R/W/H) Each bit, CPBM\<n\>, grants permission to the PARTID to allocate cache lines within cache portion
                                                                 n.
                                                                 0b0 = The PARTID is not permitted to allocate into cache portion n.
                                                                 0b1 = The PARTID is permitted to allocate within cache portion n.

                                                                 The width of the CPBM changes depending on the RIS value in TAD_CMN_MPAMCFG_PART_SEL.
                                                                 When RIS=LTG, the CPBM is 16 bits, and only bits [15..0] may be written. When RIS=DTG,
                                                                 the CPBM is 18 bits, and bits [17..0] may be written

                                                                 The value of this field varies with MPAMCFG_PART_SEL[RIS]
                                                                   RIS = MSC:   RAZ/WI
                                                                   RIS = LTG:   R/W (reset 0xffff)
                                                                   RIS = DTG:   R/W (reset 0xfff)
                                                                   RIS = undef: RAZ/WI */
        uint64_t reserved_16_63        : 48;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_tad_cmn_mpamcfg_cpbm_ns_s cn; */
};
typedef union cavm_tad_cmn_mpamcfg_cpbm_ns cavm_tad_cmn_mpamcfg_cpbm_ns_t;

#define CAVM_TAD_CMN_MPAMCFG_CPBM_NS CAVM_TAD_CMN_MPAMCFG_CPBM_NS_FUNC()
static inline uint64_t CAVM_TAD_CMN_MPAMCFG_CPBM_NS_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_TAD_CMN_MPAMCFG_CPBM_NS_FUNC(void)
{
    if (cavm_is_model(OCTEONTX_CN20KA))
        return 0x87e053011000ll;
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
        uint64_t cpbm                  : 16; /**< [ 15:  0](SR/W/H) Each bit, CPBM\<n\>, grants permission to the PARTID to allocate cache lines within cache portion
                                                                 n.
                                                                 0b0 = The PARTID is not permitted to allocate into cache portion n.
                                                                 0b1 = The PARTID is permitted to allocate within cache portion n.

                                                                 The width of the CPBM changes depending on the RIS value in TAD_CMN_MPAMCFG_PART_SEL.
                                                                 When RIS=LTG, the CPBM is 16 bits, and only bits [15..0] may be written. When RIS=DTG,
                                                                 the CPBM is 18 bits, and bits [17..0] may be written

                                                                 The value of this field varies with MPAMCFG_PART_SEL[RIS]
                                                                   RIS = MSC:   RAZ/WI
                                                                   RIS = LTG:   R/W (reset 0xffff)
                                                                   RIS = DTG:   R/W (reset 0xfff)
                                                                   RIS = undef: RAZ/WI */
#else /* Word 0 - Little Endian */
        uint64_t cpbm                  : 16; /**< [ 15:  0](SR/W/H) Each bit, CPBM\<n\>, grants permission to the PARTID to allocate cache lines within cache portion
                                                                 n.
                                                                 0b0 = The PARTID is not permitted to allocate into cache portion n.
                                                                 0b1 = The PARTID is permitted to allocate within cache portion n.

                                                                 The width of the CPBM changes depending on the RIS value in TAD_CMN_MPAMCFG_PART_SEL.
                                                                 When RIS=LTG, the CPBM is 16 bits, and only bits [15..0] may be written. When RIS=DTG,
                                                                 the CPBM is 18 bits, and bits [17..0] may be written

                                                                 The value of this field varies with MPAMCFG_PART_SEL[RIS]
                                                                   RIS = MSC:   RAZ/WI
                                                                   RIS = LTG:   R/W (reset 0xffff)
                                                                   RIS = DTG:   R/W (reset 0xfff)
                                                                   RIS = undef: RAZ/WI */
        uint64_t reserved_16_63        : 48;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_tad_cmn_mpamcfg_cpbm_s_s cn; */
};
typedef union cavm_tad_cmn_mpamcfg_cpbm_s cavm_tad_cmn_mpamcfg_cpbm_s_t;

#define CAVM_TAD_CMN_MPAMCFG_CPBM_S CAVM_TAD_CMN_MPAMCFG_CPBM_S_FUNC()
static inline uint64_t CAVM_TAD_CMN_MPAMCFG_CPBM_S_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_TAD_CMN_MPAMCFG_CPBM_S_FUNC(void)
{
    if (cavm_is_model(OCTEONTX_CN20KA))
        return 0x87e053021000ll;
    __cavm_csr_fatal("TAD_CMN_MPAMCFG_CPBM_S", 0, 0, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_TAD_CMN_MPAMCFG_CPBM_S cavm_tad_cmn_mpamcfg_cpbm_s_t
#define bustype_CAVM_TAD_CMN_MPAMCFG_CPBM_S CSR_TYPE_RSL
#define basename_CAVM_TAD_CMN_MPAMCFG_CPBM_S "TAD_CMN_MPAMCFG_CPBM_S"
#define device_bar_CAVM_TAD_CMN_MPAMCFG_CPBM_S 0x0 /* PF_BAR0 */
#define busnum_CAVM_TAD_CMN_MPAMCFG_CPBM_S 0
#define arguments_CAVM_TAD_CMN_MPAMCFG_CPBM_S -1,-1,-1,-1

/**
 * Register (RSL) tad_cmn_mpamcfg_impl_pri_ns
 *
 * MPAM Implementation-Specific Optional Priority Partitioning Configuration Register
 * Controls the MPAM priority partitioning features of this MSC.
 */
union cavm_tad_cmn_mpamcfg_impl_pri_ns
{
    uint64_t u;
    struct cavm_tad_cmn_mpamcfg_impl_pri_ns_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_1_63         : 63;
        uint64_t mpam_qos              : 1;  /**< [  0:  0](R/W/H) Enables MPAM priority partitioning.

                                                                 If TAD_CMN_MPAMCFG_IMPL_PRI_NS[MPAM_QOS] == 1, MPAM priority partitioning is enabled,
                                                                 TAD_CMN_MPAMF_IDR_NS[HAS_PRI_PART] will read as 1, and TAD_CMN_MPAMF_PRI_IDR_NS will be readable.

                                                                 If TAD_CMN_MPAMCFG_IMPL_PRI_NS[MPAM_QOS] == 0, MPAM priority partitioning is disabled,
                                                                 TAD_CMN_MPAMF_IDR_NS[HAS_PRI_PART] will read as 0, and TAD_CMN_MPAMF_PRI_IDR_NS
                                                                 will read as 0.

                                                                 The value of this field varies with MPAMCFG_PART_SEL[RIS]
                                                                   RIS = MSC:   R/W
                                                                   RIS = LTG:   RAZ/WI
                                                                   RIS = DTG:   RAZ/WI
                                                                   RIS = undef: RAZ/WI */
#else /* Word 0 - Little Endian */
        uint64_t mpam_qos              : 1;  /**< [  0:  0](R/W/H) Enables MPAM priority partitioning.

                                                                 If TAD_CMN_MPAMCFG_IMPL_PRI_NS[MPAM_QOS] == 1, MPAM priority partitioning is enabled,
                                                                 TAD_CMN_MPAMF_IDR_NS[HAS_PRI_PART] will read as 1, and TAD_CMN_MPAMF_PRI_IDR_NS will be readable.

                                                                 If TAD_CMN_MPAMCFG_IMPL_PRI_NS[MPAM_QOS] == 0, MPAM priority partitioning is disabled,
                                                                 TAD_CMN_MPAMF_IDR_NS[HAS_PRI_PART] will read as 0, and TAD_CMN_MPAMF_PRI_IDR_NS
                                                                 will read as 0.

                                                                 The value of this field varies with MPAMCFG_PART_SEL[RIS]
                                                                   RIS = MSC:   R/W
                                                                   RIS = LTG:   RAZ/WI
                                                                   RIS = DTG:   RAZ/WI
                                                                   RIS = undef: RAZ/WI */
        uint64_t reserved_1_63         : 63;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_tad_cmn_mpamcfg_impl_pri_ns_s cn; */
};
typedef union cavm_tad_cmn_mpamcfg_impl_pri_ns cavm_tad_cmn_mpamcfg_impl_pri_ns_t;

#define CAVM_TAD_CMN_MPAMCFG_IMPL_PRI_NS CAVM_TAD_CMN_MPAMCFG_IMPL_PRI_NS_FUNC()
static inline uint64_t CAVM_TAD_CMN_MPAMCFG_IMPL_PRI_NS_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_TAD_CMN_MPAMCFG_IMPL_PRI_NS_FUNC(void)
{
    if (cavm_is_model(OCTEONTX_CN20KA))
        return 0x87e053013000ll;
    __cavm_csr_fatal("TAD_CMN_MPAMCFG_IMPL_PRI_NS", 0, 0, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_TAD_CMN_MPAMCFG_IMPL_PRI_NS cavm_tad_cmn_mpamcfg_impl_pri_ns_t
#define bustype_CAVM_TAD_CMN_MPAMCFG_IMPL_PRI_NS CSR_TYPE_RSL
#define basename_CAVM_TAD_CMN_MPAMCFG_IMPL_PRI_NS "TAD_CMN_MPAMCFG_IMPL_PRI_NS"
#define device_bar_CAVM_TAD_CMN_MPAMCFG_IMPL_PRI_NS 0x0 /* PF_BAR0 */
#define busnum_CAVM_TAD_CMN_MPAMCFG_IMPL_PRI_NS 0
#define arguments_CAVM_TAD_CMN_MPAMCFG_IMPL_PRI_NS -1,-1,-1,-1

/**
 * Register (RSL) tad_cmn_mpamcfg_impl_pri_s
 *
 * MPAM Implementation-Specific Optional Priority Partitioning Configuration Register
 * Controls the MPAM priority partitioning features of this MSC.
 */
union cavm_tad_cmn_mpamcfg_impl_pri_s
{
    uint64_t u;
    struct cavm_tad_cmn_mpamcfg_impl_pri_s_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_1_63         : 63;
        uint64_t mpam_qos              : 1;  /**< [  0:  0](SR/W/H) Enables MPAM priority partitioning.

                                                                 If TAD_CMN_MPAMCFG_IMPL_PRI_S[MPAM_QOS] == 1, MPAM priority partitioning is enabled,
                                                                 TAD_CMN_MPAMF_IDR_S[HAS_PRI_PART] will read as 1, and TAD_CMN_MPAMF_PRI_IDR_S will be readable.

                                                                 If TAD_CMN_MPAMCFG_IMPL_PRI_S[MPAM_QOS] == 0, MPAM priority partitioning is disabled,
                                                                 TAD_CMN_MPAMF_IDR_S[HAS_PRI_PART] will read as 0, and TAD_CMN_MPAMF_PRI_IDR_S will read as 0.

                                                                 The value of this field varies with MPAMCFG_PART_SEL[RIS]
                                                                   RIS = MSC:   R/W
                                                                   RIS = LTG:   RAZ/WI
                                                                   RIS = DTG:   RAZ/WI
                                                                   RIS = undef: RAZ/WI */
#else /* Word 0 - Little Endian */
        uint64_t mpam_qos              : 1;  /**< [  0:  0](SR/W/H) Enables MPAM priority partitioning.

                                                                 If TAD_CMN_MPAMCFG_IMPL_PRI_S[MPAM_QOS] == 1, MPAM priority partitioning is enabled,
                                                                 TAD_CMN_MPAMF_IDR_S[HAS_PRI_PART] will read as 1, and TAD_CMN_MPAMF_PRI_IDR_S will be readable.

                                                                 If TAD_CMN_MPAMCFG_IMPL_PRI_S[MPAM_QOS] == 0, MPAM priority partitioning is disabled,
                                                                 TAD_CMN_MPAMF_IDR_S[HAS_PRI_PART] will read as 0, and TAD_CMN_MPAMF_PRI_IDR_S will read as 0.

                                                                 The value of this field varies with MPAMCFG_PART_SEL[RIS]
                                                                   RIS = MSC:   R/W
                                                                   RIS = LTG:   RAZ/WI
                                                                   RIS = DTG:   RAZ/WI
                                                                   RIS = undef: RAZ/WI */
        uint64_t reserved_1_63         : 63;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_tad_cmn_mpamcfg_impl_pri_s_s cn; */
};
typedef union cavm_tad_cmn_mpamcfg_impl_pri_s cavm_tad_cmn_mpamcfg_impl_pri_s_t;

#define CAVM_TAD_CMN_MPAMCFG_IMPL_PRI_S CAVM_TAD_CMN_MPAMCFG_IMPL_PRI_S_FUNC()
static inline uint64_t CAVM_TAD_CMN_MPAMCFG_IMPL_PRI_S_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_TAD_CMN_MPAMCFG_IMPL_PRI_S_FUNC(void)
{
    if (cavm_is_model(OCTEONTX_CN20KA))
        return 0x87e053023000ll;
    __cavm_csr_fatal("TAD_CMN_MPAMCFG_IMPL_PRI_S", 0, 0, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_TAD_CMN_MPAMCFG_IMPL_PRI_S cavm_tad_cmn_mpamcfg_impl_pri_s_t
#define bustype_CAVM_TAD_CMN_MPAMCFG_IMPL_PRI_S CSR_TYPE_RSL
#define basename_CAVM_TAD_CMN_MPAMCFG_IMPL_PRI_S "TAD_CMN_MPAMCFG_IMPL_PRI_S"
#define device_bar_CAVM_TAD_CMN_MPAMCFG_IMPL_PRI_S 0x0 /* PF_BAR0 */
#define busnum_CAVM_TAD_CMN_MPAMCFG_IMPL_PRI_S 0
#define arguments_CAVM_TAD_CMN_MPAMCFG_IMPL_PRI_S -1,-1,-1,-1

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
                                                                 TAD_CMN_MPAMCFG registers and describe with TAD_CMN_MPAMF ID registers.
                                                                 Enumerated by TAD_CMN_MPAM_RIS_E.

                                                                 Two bits of RIS are implemented. */
        uint64_t reserved_17_23        : 7;
        uint64_t internal              : 1;  /**< [ 16: 16](RO) Internal PARTID. This MSC does not support PartID narrowing so this field
                                                                 is reserved. */
        uint64_t partid_sel            : 16; /**< [ 15:  0](R/W) Selects the partition ID to configure.
                                                                 Reads and writes to other TAD_CMN_MPAMCFG registers are indexed by [PARTID_SEL]
                                                                 and by the NS bit used
                                                                 to access TAD_CMN_MPAMCFG_PART_SEL to access the configuration for a single partition.

                                                                 Eight bits of non-secure PARTID_SEL are implemented. */
#else /* Word 0 - Little Endian */
        uint64_t partid_sel            : 16; /**< [ 15:  0](R/W) Selects the partition ID to configure.
                                                                 Reads and writes to other TAD_CMN_MPAMCFG registers are indexed by [PARTID_SEL]
                                                                 and by the NS bit used
                                                                 to access TAD_CMN_MPAMCFG_PART_SEL to access the configuration for a single partition.

                                                                 Eight bits of non-secure PARTID_SEL are implemented. */
        uint64_t internal              : 1;  /**< [ 16: 16](RO) Internal PARTID. This MSC does not support PartID narrowing so this field
                                                                 is reserved. */
        uint64_t reserved_17_23        : 7;
        uint64_t ris                   : 4;  /**< [ 27: 24](R/W) Resource Instance Selector. RIS selects one resource to configure through
                                                                 TAD_CMN_MPAMCFG registers and describe with TAD_CMN_MPAMF ID registers.
                                                                 Enumerated by TAD_CMN_MPAM_RIS_E.

                                                                 Two bits of RIS are implemented. */
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
    if (cavm_is_model(OCTEONTX_CN20KA))
        return 0x87e053010100ll;
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
                                                                 TAD_CMN_MPAMCFG registers and describe with TAD_CMN_MPAMF ID registers.
                                                                 Enumerated by TAD_CMN_MPAM_RIS_E.

                                                                 Two bits of RIS are implemented. */
        uint64_t reserved_17_23        : 7;
        uint64_t internal              : 1;  /**< [ 16: 16](SRO) Internal PARTID. This MSC does not support PartID narrowing so this field
                                                                 is reserved. */
        uint64_t partid_sel            : 16; /**< [ 15:  0](SR/W) Selects the partition ID to configure.
                                                                 Reads and writes to other TAD_CMN_MPAMCFG registers are indexed by [PARTID_SEL]
                                                                 and by the NS bit used
                                                                 to access TAD_CMN_MPAMCFG_PART_SEL to access the configuration for a single partition.

                                                                 Four bits of secure PARTID_SEL are implemented. */
#else /* Word 0 - Little Endian */
        uint64_t partid_sel            : 16; /**< [ 15:  0](SR/W) Selects the partition ID to configure.
                                                                 Reads and writes to other TAD_CMN_MPAMCFG registers are indexed by [PARTID_SEL]
                                                                 and by the NS bit used
                                                                 to access TAD_CMN_MPAMCFG_PART_SEL to access the configuration for a single partition.

                                                                 Four bits of secure PARTID_SEL are implemented. */
        uint64_t internal              : 1;  /**< [ 16: 16](SRO) Internal PARTID. This MSC does not support PartID narrowing so this field
                                                                 is reserved. */
        uint64_t reserved_17_23        : 7;
        uint64_t ris                   : 4;  /**< [ 27: 24](SR/W) Resource Instance Selector. RIS selects one resource to configure through
                                                                 TAD_CMN_MPAMCFG registers and describe with TAD_CMN_MPAMF ID registers.
                                                                 Enumerated by TAD_CMN_MPAM_RIS_E.

                                                                 Two bits of RIS are implemented. */
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
    if (cavm_is_model(OCTEONTX_CN20KA))
        return 0x87e053020100ll;
    __cavm_csr_fatal("TAD_CMN_MPAMCFG_PART_SEL_S", 0, 0, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_TAD_CMN_MPAMCFG_PART_SEL_S cavm_tad_cmn_mpamcfg_part_sel_s_t
#define bustype_CAVM_TAD_CMN_MPAMCFG_PART_SEL_S CSR_TYPE_RSL
#define basename_CAVM_TAD_CMN_MPAMCFG_PART_SEL_S "TAD_CMN_MPAMCFG_PART_SEL_S"
#define device_bar_CAVM_TAD_CMN_MPAMCFG_PART_SEL_S 0x0 /* PF_BAR0 */
#define busnum_CAVM_TAD_CMN_MPAMCFG_PART_SEL_S 0
#define arguments_CAVM_TAD_CMN_MPAMCFG_PART_SEL_S -1,-1,-1,-1

/**
 * Register (RSL) tad_cmn_mpamcfg_pri_ns
 *
 * MPAM Priority Partition Configuration Register
 * Controls the internal and downstream priority of requests attributed to the PARTID
 * selected by TAD_CMN_MPAMCFG_PART_SEL_NS.
 */
union cavm_tad_cmn_mpamcfg_pri_ns
{
    uint64_t u;
    struct cavm_tad_cmn_mpamcfg_pri_ns_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_32_63        : 32;
        uint64_t dspri                 : 16; /**< [ 31: 16](R/W/H) Downstream priority.

                                                                 If TAD_CMN_MPAMF_PRI_IDR_NS[HAS_DSPRI] == 0, bits of this field are not used.
                                                                 If TAD_CMN_MPAMF_PRI_IDR_NS[HAS_DSPRI] == 1, this field is a priority value
                                                                 applied to downstream communications from this MSC for transactions of the
                                                                 partition selected by TAD_CMN_MPAMCFG_PART_SEL_NS.

                                                                 The implemented width of this field is TAD_CMN_MPAMF_PRI_IDR_NS[DSPRI_WD] bits.

                                                                 The RIS value in TAD_CMN_MPAMCFG_PART_SEL must be MSC to access this register.

                                                                 The encoding of priority is 0-as-lowest or 0-as-highest priority according to
                                                                 the value of TAD_CMN_MPAMF_PRI_IDR_NS[DSPRI_0_IS_LOW].

                                                                 The value of this field varies with MPAMCFG_PART_SEL[RIS]
                                                                   RIS = MSC:   R/W
                                                                   RIS = LTG:   RAZ/WI
                                                                   RIS = DTG:   RAZ/WI
                                                                   RIS = undef: RAZ/WI */
        uint64_t intpri                : 16; /**< [ 15:  0](RO) Internal priority.
                                                                 INTPRI is not implemented. */
#else /* Word 0 - Little Endian */
        uint64_t intpri                : 16; /**< [ 15:  0](RO) Internal priority.
                                                                 INTPRI is not implemented. */
        uint64_t dspri                 : 16; /**< [ 31: 16](R/W/H) Downstream priority.

                                                                 If TAD_CMN_MPAMF_PRI_IDR_NS[HAS_DSPRI] == 0, bits of this field are not used.
                                                                 If TAD_CMN_MPAMF_PRI_IDR_NS[HAS_DSPRI] == 1, this field is a priority value
                                                                 applied to downstream communications from this MSC for transactions of the
                                                                 partition selected by TAD_CMN_MPAMCFG_PART_SEL_NS.

                                                                 The implemented width of this field is TAD_CMN_MPAMF_PRI_IDR_NS[DSPRI_WD] bits.

                                                                 The RIS value in TAD_CMN_MPAMCFG_PART_SEL must be MSC to access this register.

                                                                 The encoding of priority is 0-as-lowest or 0-as-highest priority according to
                                                                 the value of TAD_CMN_MPAMF_PRI_IDR_NS[DSPRI_0_IS_LOW].

                                                                 The value of this field varies with MPAMCFG_PART_SEL[RIS]
                                                                   RIS = MSC:   R/W
                                                                   RIS = LTG:   RAZ/WI
                                                                   RIS = DTG:   RAZ/WI
                                                                   RIS = undef: RAZ/WI */
        uint64_t reserved_32_63        : 32;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_tad_cmn_mpamcfg_pri_ns_s cn; */
};
typedef union cavm_tad_cmn_mpamcfg_pri_ns cavm_tad_cmn_mpamcfg_pri_ns_t;

#define CAVM_TAD_CMN_MPAMCFG_PRI_NS CAVM_TAD_CMN_MPAMCFG_PRI_NS_FUNC()
static inline uint64_t CAVM_TAD_CMN_MPAMCFG_PRI_NS_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_TAD_CMN_MPAMCFG_PRI_NS_FUNC(void)
{
    if (cavm_is_model(OCTEONTX_CN20KA))
        return 0x87e053010400ll;
    __cavm_csr_fatal("TAD_CMN_MPAMCFG_PRI_NS", 0, 0, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_TAD_CMN_MPAMCFG_PRI_NS cavm_tad_cmn_mpamcfg_pri_ns_t
#define bustype_CAVM_TAD_CMN_MPAMCFG_PRI_NS CSR_TYPE_RSL
#define basename_CAVM_TAD_CMN_MPAMCFG_PRI_NS "TAD_CMN_MPAMCFG_PRI_NS"
#define device_bar_CAVM_TAD_CMN_MPAMCFG_PRI_NS 0x0 /* PF_BAR0 */
#define busnum_CAVM_TAD_CMN_MPAMCFG_PRI_NS 0
#define arguments_CAVM_TAD_CMN_MPAMCFG_PRI_NS -1,-1,-1,-1

/**
 * Register (RSL) tad_cmn_mpamcfg_pri_s
 *
 * MPAM Priority Partition Configuration Register
 * Controls the internal and downstream priority of requests attributed to the PARTID
 * selected by TAD_CMN_MPAMCFG_PART_SEL_S.
 */
union cavm_tad_cmn_mpamcfg_pri_s
{
    uint64_t u;
    struct cavm_tad_cmn_mpamcfg_pri_s_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_32_63        : 32;
        uint64_t dspri                 : 16; /**< [ 31: 16](SR/W/H) Downstream priority.

                                                                 If TAD_CMN_MPAMF_PRI_IDR_S[HAS_DSPRI] == 0, bits of this field are not used.
                                                                 If TAD_CMN_MPAMF_PRI_IDR_S[HAS_DSPRI] == 1, this field is a priority value
                                                                 applied to downstream communications from this MSC for transactions of the
                                                                 partition selected by TAD_CMN_MPAMCFG_PART_SEL_S.

                                                                 The implemented width of this field is TAD_CMN_MPAMF_PRI_IDR_S[DSPRI_WD] bits.

                                                                 The RIS value in TAD_CMN_MPAMCFG_PART_SEL must be MSC to access this register.

                                                                 The encoding of priority is 0-as-lowest or 0-as-highest priority according to
                                                                 the value of TAD_CMN_MPAMF_PRI_IDR_S[DSPRI_0_IS_LOW].

                                                                 The value of this field varies with MPAMCFG_PART_SEL[RIS]
                                                                   RIS = MSC:   R/W
                                                                   RIS = LTG:   RAZ/WI
                                                                   RIS = DTG:   RAZ/WI
                                                                   RIS = undef: RAZ/WI */
        uint64_t intpri                : 16; /**< [ 15:  0](SRO) Internal priority.
                                                                 INTPRI is not implemented. */
#else /* Word 0 - Little Endian */
        uint64_t intpri                : 16; /**< [ 15:  0](SRO) Internal priority.
                                                                 INTPRI is not implemented. */
        uint64_t dspri                 : 16; /**< [ 31: 16](SR/W/H) Downstream priority.

                                                                 If TAD_CMN_MPAMF_PRI_IDR_S[HAS_DSPRI] == 0, bits of this field are not used.
                                                                 If TAD_CMN_MPAMF_PRI_IDR_S[HAS_DSPRI] == 1, this field is a priority value
                                                                 applied to downstream communications from this MSC for transactions of the
                                                                 partition selected by TAD_CMN_MPAMCFG_PART_SEL_S.

                                                                 The implemented width of this field is TAD_CMN_MPAMF_PRI_IDR_S[DSPRI_WD] bits.

                                                                 The RIS value in TAD_CMN_MPAMCFG_PART_SEL must be MSC to access this register.

                                                                 The encoding of priority is 0-as-lowest or 0-as-highest priority according to
                                                                 the value of TAD_CMN_MPAMF_PRI_IDR_S[DSPRI_0_IS_LOW].

                                                                 The value of this field varies with MPAMCFG_PART_SEL[RIS]
                                                                   RIS = MSC:   R/W
                                                                   RIS = LTG:   RAZ/WI
                                                                   RIS = DTG:   RAZ/WI
                                                                   RIS = undef: RAZ/WI */
        uint64_t reserved_32_63        : 32;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_tad_cmn_mpamcfg_pri_s_s cn; */
};
typedef union cavm_tad_cmn_mpamcfg_pri_s cavm_tad_cmn_mpamcfg_pri_s_t;

#define CAVM_TAD_CMN_MPAMCFG_PRI_S CAVM_TAD_CMN_MPAMCFG_PRI_S_FUNC()
static inline uint64_t CAVM_TAD_CMN_MPAMCFG_PRI_S_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_TAD_CMN_MPAMCFG_PRI_S_FUNC(void)
{
    if (cavm_is_model(OCTEONTX_CN20KA))
        return 0x87e053020400ll;
    __cavm_csr_fatal("TAD_CMN_MPAMCFG_PRI_S", 0, 0, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_TAD_CMN_MPAMCFG_PRI_S cavm_tad_cmn_mpamcfg_pri_s_t
#define bustype_CAVM_TAD_CMN_MPAMCFG_PRI_S CSR_TYPE_RSL
#define basename_CAVM_TAD_CMN_MPAMCFG_PRI_S "TAD_CMN_MPAMCFG_PRI_S"
#define device_bar_CAVM_TAD_CMN_MPAMCFG_PRI_S 0x0 /* PF_BAR0 */
#define busnum_CAVM_TAD_CMN_MPAMCFG_PRI_S 0
#define arguments_CAVM_TAD_CMN_MPAMCFG_PRI_S -1,-1,-1,-1

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
    if (cavm_is_model(OCTEONTX_CN20KA))
        return 0x87e053010020ll;
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
    if (cavm_is_model(OCTEONTX_CN20KA))
        return 0x87e053020020ll;
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

                                                                 The value of this field varies with MPAMCFG_PART_SEL[RIS]
                                                                   RIS = MSC:   0
                                                                   RIS = LTG:   16
                                                                   RIS = DTG:   12
                                                                   RIS = undef: 0 */
#else /* Word 0 - Little Endian */
        uint64_t cpbm_wd               : 16; /**< [ 15:  0](RO/H) Number of bits in the cache portion partitioning bit map of this device. See TAD_CMN_MPAMCFG_CPBM.
                                                                 This field changes depending on the RIS value in TAD_CMN_MPAMCFG_PART_SEL.

                                                                 The value of this field varies with MPAMCFG_PART_SEL[RIS]
                                                                   RIS = MSC:   0
                                                                   RIS = LTG:   16
                                                                   RIS = DTG:   12
                                                                   RIS = undef: 0 */
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
    if (cavm_is_model(OCTEONTX_CN20KA))
        return 0x87e053010030ll;
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

                                                                 The value of this field varies with MPAMCFG_PART_SEL[RIS]
                                                                   RIS = MSC:   0
                                                                   RIS = LTG:   16
                                                                   RIS = DTG:   12
                                                                   RIS = undef: 0 */
#else /* Word 0 - Little Endian */
        uint64_t cpbm_wd               : 16; /**< [ 15:  0](SRO/H) Number of bits in the cache portion partitioning bit map of this device. See TAD_CMN_MPAMCFG_CPBM.
                                                                 This field changes depending on the RIS value in TAD_CMN_MPAMCFG_PART_SEL.

                                                                 The value of this field varies with MPAMCFG_PART_SEL[RIS]
                                                                   RIS = MSC:   0
                                                                   RIS = LTG:   16
                                                                   RIS = DTG:   12
                                                                   RIS = undef: 0 */
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
    if (cavm_is_model(OCTEONTX_CN20KA))
        return 0x87e053020030ll;
    __cavm_csr_fatal("TAD_CMN_MPAMF_CPOR_IDR_S", 0, 0, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_TAD_CMN_MPAMF_CPOR_IDR_S cavm_tad_cmn_mpamf_cpor_idr_s_t
#define bustype_CAVM_TAD_CMN_MPAMF_CPOR_IDR_S CSR_TYPE_RSL
#define basename_CAVM_TAD_CMN_MPAMF_CPOR_IDR_S "TAD_CMN_MPAMF_CPOR_IDR_S"
#define device_bar_CAVM_TAD_CMN_MPAMF_CPOR_IDR_S 0x0 /* PF_BAR0 */
#define busnum_CAVM_TAD_CMN_MPAMF_CPOR_IDR_S 0
#define arguments_CAVM_TAD_CMN_MPAMF_CPOR_IDR_S -1,-1,-1,-1

/**
 * Register (RSL) tad_cmn_mpamf_csumon_idr_ns
 *
 * MPAM Features Cache Storage Usage Monitoring ID Register
 * Indicates the number of cache storage usage monitors for this MSC.
 * TAD_CMN_MPAMF_CSUMON_IDR_NS indicates the number of Non-secure cache storage usage monitors.
 */
union cavm_tad_cmn_mpamf_csumon_idr_ns
{
    uint64_t u;
    struct cavm_tad_cmn_mpamf_csumon_idr_ns_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_32_63        : 32;
        uint64_t has_capture           : 1;  /**< [ 31: 31](RO) MSMON_CSU_CAPTURE is not implemented and there is no support for capture events in the CSU monitor. */
        uint64_t csu_ro                : 1;  /**< [ 30: 30](RO) MSMON_CSU is read-only */
        uint64_t reserved_16_29        : 14;
        uint64_t num_mon               : 16; /**< [ 15:  0](RO/H) The number of cache storage usage monitors implemented in this MSC.
                                                                 CSU monitors are selected via TAD_CMN_MSMON_CFG_MON_SEL[MON_SEL].

                                                                 The value of this field varies with MPAMCFG_PART_SEL[RIS]
                                                                   RIS = MSC:   0
                                                                   RIS = LTG:   1
                                                                   RIS = DTG:   1
                                                                   RIS = undef: 0 */
#else /* Word 0 - Little Endian */
        uint64_t num_mon               : 16; /**< [ 15:  0](RO/H) The number of cache storage usage monitors implemented in this MSC.
                                                                 CSU monitors are selected via TAD_CMN_MSMON_CFG_MON_SEL[MON_SEL].

                                                                 The value of this field varies with MPAMCFG_PART_SEL[RIS]
                                                                   RIS = MSC:   0
                                                                   RIS = LTG:   1
                                                                   RIS = DTG:   1
                                                                   RIS = undef: 0 */
        uint64_t reserved_16_29        : 14;
        uint64_t csu_ro                : 1;  /**< [ 30: 30](RO) MSMON_CSU is read-only */
        uint64_t has_capture           : 1;  /**< [ 31: 31](RO) MSMON_CSU_CAPTURE is not implemented and there is no support for capture events in the CSU monitor. */
        uint64_t reserved_32_63        : 32;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_tad_cmn_mpamf_csumon_idr_ns_s cn; */
};
typedef union cavm_tad_cmn_mpamf_csumon_idr_ns cavm_tad_cmn_mpamf_csumon_idr_ns_t;

#define CAVM_TAD_CMN_MPAMF_CSUMON_IDR_NS CAVM_TAD_CMN_MPAMF_CSUMON_IDR_NS_FUNC()
static inline uint64_t CAVM_TAD_CMN_MPAMF_CSUMON_IDR_NS_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_TAD_CMN_MPAMF_CSUMON_IDR_NS_FUNC(void)
{
    if (cavm_is_model(OCTEONTX_CN20KA))
        return 0x87e053010088ll;
    __cavm_csr_fatal("TAD_CMN_MPAMF_CSUMON_IDR_NS", 0, 0, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_TAD_CMN_MPAMF_CSUMON_IDR_NS cavm_tad_cmn_mpamf_csumon_idr_ns_t
#define bustype_CAVM_TAD_CMN_MPAMF_CSUMON_IDR_NS CSR_TYPE_RSL
#define basename_CAVM_TAD_CMN_MPAMF_CSUMON_IDR_NS "TAD_CMN_MPAMF_CSUMON_IDR_NS"
#define device_bar_CAVM_TAD_CMN_MPAMF_CSUMON_IDR_NS 0x0 /* PF_BAR0 */
#define busnum_CAVM_TAD_CMN_MPAMF_CSUMON_IDR_NS 0
#define arguments_CAVM_TAD_CMN_MPAMF_CSUMON_IDR_NS -1,-1,-1,-1

/**
 * Register (RSL) tad_cmn_mpamf_csumon_idr_s
 *
 * MPAM Features Cache Storage Usage Monitoring ID Register
 * Indicates the number of cache storage usage monitors for this MSC.
 * TAD_CMN_MPAMF_CSUMON_IDR_S indicates the number of secure cache storage usage monitors.
 */
union cavm_tad_cmn_mpamf_csumon_idr_s
{
    uint64_t u;
    struct cavm_tad_cmn_mpamf_csumon_idr_s_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_32_63        : 32;
        uint64_t has_capture           : 1;  /**< [ 31: 31](SRO) MSMON_CSU_CAPTURE is not implemented and there is no support for capture events in the CSU monitor. */
        uint64_t csu_ro                : 1;  /**< [ 30: 30](SRO) MSMON_CSU is read-only */
        uint64_t reserved_16_29        : 14;
        uint64_t num_mon               : 16; /**< [ 15:  0](SRO/H) The number of cache storage usage monitors implemented in this MSC.
                                                                 CSU monitors are selected via TAD_CMN_MSMON_CFG_MON_SEL[MON_SEL].

                                                                 The value of this field varies with MPAMCFG_PART_SEL[RIS]
                                                                   RIS = MSC:   0
                                                                   RIS = LTG:   1
                                                                   RIS = DTG:   1
                                                                   RIS = undef: 0 */
#else /* Word 0 - Little Endian */
        uint64_t num_mon               : 16; /**< [ 15:  0](SRO/H) The number of cache storage usage monitors implemented in this MSC.
                                                                 CSU monitors are selected via TAD_CMN_MSMON_CFG_MON_SEL[MON_SEL].

                                                                 The value of this field varies with MPAMCFG_PART_SEL[RIS]
                                                                   RIS = MSC:   0
                                                                   RIS = LTG:   1
                                                                   RIS = DTG:   1
                                                                   RIS = undef: 0 */
        uint64_t reserved_16_29        : 14;
        uint64_t csu_ro                : 1;  /**< [ 30: 30](SRO) MSMON_CSU is read-only */
        uint64_t has_capture           : 1;  /**< [ 31: 31](SRO) MSMON_CSU_CAPTURE is not implemented and there is no support for capture events in the CSU monitor. */
        uint64_t reserved_32_63        : 32;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_tad_cmn_mpamf_csumon_idr_s_s cn; */
};
typedef union cavm_tad_cmn_mpamf_csumon_idr_s cavm_tad_cmn_mpamf_csumon_idr_s_t;

#define CAVM_TAD_CMN_MPAMF_CSUMON_IDR_S CAVM_TAD_CMN_MPAMF_CSUMON_IDR_S_FUNC()
static inline uint64_t CAVM_TAD_CMN_MPAMF_CSUMON_IDR_S_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_TAD_CMN_MPAMF_CSUMON_IDR_S_FUNC(void)
{
    if (cavm_is_model(OCTEONTX_CN20KA))
        return 0x87e053020088ll;
    __cavm_csr_fatal("TAD_CMN_MPAMF_CSUMON_IDR_S", 0, 0, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_TAD_CMN_MPAMF_CSUMON_IDR_S cavm_tad_cmn_mpamf_csumon_idr_s_t
#define bustype_CAVM_TAD_CMN_MPAMF_CSUMON_IDR_S CSR_TYPE_RSL
#define basename_CAVM_TAD_CMN_MPAMF_CSUMON_IDR_S "TAD_CMN_MPAMF_CSUMON_IDR_S"
#define device_bar_CAVM_TAD_CMN_MPAMF_CSUMON_IDR_S 0x0 /* PF_BAR0 */
#define busnum_CAVM_TAD_CMN_MPAMF_CSUMON_IDR_S 0
#define arguments_CAVM_TAD_CMN_MPAMF_CSUMON_IDR_S -1,-1,-1,-1

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
        uint64_t ris_max               : 4;  /**< [ 59: 56](RO) Maximum RIS value supported in TAD_CMN_MPAMCFG_PART_SEL. */
        uint64_t reserved_40_55        : 16;
        uint64_t has_esr               : 1;  /**< [ 39: 39](RO) MPAMF_ESR is not implemented.

                                                                 0: MPAMF_ESR, MPAMF_ECR and MPAM error handling are not implemented.
                                                                 1: MPAMF_ESR, MPAMF_ECR and MPAM error handling are implemented. */
        uint64_t has_extd_esr          : 1;  /**< [ 38: 38](RO) MPAMF_ESR is not implemented.

                                                                 0: MPAMF_ESR is 32 bits.
                                                                 1: MPAMF_ESR is 64 bits. */
        uint64_t no_impl_msmon         : 1;  /**< [ 37: 37](RO) This MSC does not have any IMPLEMENTATION DEFINED resource monitors. */
        uint64_t no_impl_part          : 1;  /**< [ 36: 36](RO/H) This MSC has IMPLEMENTATION DEFINED resource controls.

                                                                 The value of [NO_IMPL_PART] varies with MPAMCFG_PART_SEL[RIS]
                                                                   RIS = MSC:   0
                                                                   RIS = LTG:   1
                                                                   RIS = DTG:   1
                                                                   RIS = undef: 1 */
        uint64_t reserved_33_35        : 3;
        uint64_t has_ris               : 1;  /**< [ 32: 32](RO/H) This MSC has a resource instance selector. TAD_CMN_MPAMCFG_PART_SEL contains the RIS field that
                                                                 selects a resource instance to control.

                                                                 TAD_CMN_MPAMCFG_PART_SEL implements the TAD_CMN_MPAMCFG_PART_SEL[RIS] and
                                                                 MPAM resource instance numbers up to and including TAD_CMN_MPAMF_IDR[RIS_MAX]. */
        uint64_t has_partid_nrw        : 1;  /**< [ 31: 31](RO) This MSC does not support PARTID narrowing. */
        uint64_t has_msmon             : 1;  /**< [ 30: 30](RO/H) This MSC has MPAM resource monitors. TAD_CMN_MPAMF_MSMON_IDR indicates which
                                                                 MPAM monitoring features are present.

                                                                 The value of this field varies with MPAMCFG_PART_SEL[RIS]
                                                                   RIS = MSC:   0
                                                                   RIS = LTG:   1
                                                                   RIS = DTG:   1
                                                                   RIS = undef: 0 */
        uint64_t has_impl_idr          : 1;  /**< [ 29: 29](RO/H) This MSC has the implementation-specific MPAM features register, TAD_CMN_MPAMF_IMPL_IDR.

                                                                 The value of this field varies with MPAMCFG_PART_SEL[RIS]
                                                                   RIS = MSC:   1
                                                                   RIS = LTG:   0
                                                                   RIS = DTG:   0
                                                                   RIS = undef: 0 */
        uint64_t ext                   : 1;  /**< [ 28: 28](RO) Extended TAD_CMN_MPAMF_IDR. TAD_CMN_MPAMF_IDR has bits defined in [63:32]. The register is 64-bits. */
        uint64_t has_pri_part          : 1;  /**< [ 27: 27](RO/H) Whether or not this MSC supports priority partitioning or has TAD_CMN_MPAMF_PRI_IDR_NS.

                                                                 The value of this field varies with MPAMCFG_PART_SEL[RIS]
                                                                   RIS = MSC:   1 if MPAMCFG_IMPL_PRI[MPAM_QOS] = 1, else 0
                                                                   RIS = LTG:   0
                                                                   RIS = DTG:   0
                                                                   RIS = undef: 0 */
        uint64_t has_mbw_part          : 1;  /**< [ 26: 26](RO) This MSC does not support memory bandwidth partitioning or have TAD_CMN_MPAMF_MBW_IDR
                                                                 register. */
        uint64_t has_cpor_part         : 1;  /**< [ 25: 25](RO/H) This MSC implements MPAM cache portion partitioning.
                                                                 It has TAD_CMN_MPAMF_CPOR_IDR and TAD_CMN_MPAMCFG_CPBM registers.

                                                                 The value of this field varies with MPAMCFG_PART_SEL[RIS]
                                                                   RIS = MSC:   0
                                                                   RIS = LTG:   1
                                                                   RIS = DTG:   1
                                                                   RIS = undef: 0 */
        uint64_t has_ccap_part         : 1;  /**< [ 24: 24](RO) This MSC does not support MPAM cache capacity partitioning or have
                                                                 the TAD_CMN_MPAMF_CCAP_IDR and TAD_CMN_MPAMCFG_CMAX registers. */
        uint64_t pmg_max               : 8;  /**< [ 23: 16](RO) Maximum value of Non-secure PMG supported by this component. */
        uint64_t partid_max            : 16; /**< [ 15:  0](RO) Maximum value of Non-secure PARTID supported by this component. */
#else /* Word 0 - Little Endian */
        uint64_t partid_max            : 16; /**< [ 15:  0](RO) Maximum value of Non-secure PARTID supported by this component. */
        uint64_t pmg_max               : 8;  /**< [ 23: 16](RO) Maximum value of Non-secure PMG supported by this component. */
        uint64_t has_ccap_part         : 1;  /**< [ 24: 24](RO) This MSC does not support MPAM cache capacity partitioning or have
                                                                 the TAD_CMN_MPAMF_CCAP_IDR and TAD_CMN_MPAMCFG_CMAX registers. */
        uint64_t has_cpor_part         : 1;  /**< [ 25: 25](RO/H) This MSC implements MPAM cache portion partitioning.
                                                                 It has TAD_CMN_MPAMF_CPOR_IDR and TAD_CMN_MPAMCFG_CPBM registers.

                                                                 The value of this field varies with MPAMCFG_PART_SEL[RIS]
                                                                   RIS = MSC:   0
                                                                   RIS = LTG:   1
                                                                   RIS = DTG:   1
                                                                   RIS = undef: 0 */
        uint64_t has_mbw_part          : 1;  /**< [ 26: 26](RO) This MSC does not support memory bandwidth partitioning or have TAD_CMN_MPAMF_MBW_IDR
                                                                 register. */
        uint64_t has_pri_part          : 1;  /**< [ 27: 27](RO/H) Whether or not this MSC supports priority partitioning or has TAD_CMN_MPAMF_PRI_IDR_NS.

                                                                 The value of this field varies with MPAMCFG_PART_SEL[RIS]
                                                                   RIS = MSC:   1 if MPAMCFG_IMPL_PRI[MPAM_QOS] = 1, else 0
                                                                   RIS = LTG:   0
                                                                   RIS = DTG:   0
                                                                   RIS = undef: 0 */
        uint64_t ext                   : 1;  /**< [ 28: 28](RO) Extended TAD_CMN_MPAMF_IDR. TAD_CMN_MPAMF_IDR has bits defined in [63:32]. The register is 64-bits. */
        uint64_t has_impl_idr          : 1;  /**< [ 29: 29](RO/H) This MSC has the implementation-specific MPAM features register, TAD_CMN_MPAMF_IMPL_IDR.

                                                                 The value of this field varies with MPAMCFG_PART_SEL[RIS]
                                                                   RIS = MSC:   1
                                                                   RIS = LTG:   0
                                                                   RIS = DTG:   0
                                                                   RIS = undef: 0 */
        uint64_t has_msmon             : 1;  /**< [ 30: 30](RO/H) This MSC has MPAM resource monitors. TAD_CMN_MPAMF_MSMON_IDR indicates which
                                                                 MPAM monitoring features are present.

                                                                 The value of this field varies with MPAMCFG_PART_SEL[RIS]
                                                                   RIS = MSC:   0
                                                                   RIS = LTG:   1
                                                                   RIS = DTG:   1
                                                                   RIS = undef: 0 */
        uint64_t has_partid_nrw        : 1;  /**< [ 31: 31](RO) This MSC does not support PARTID narrowing. */
        uint64_t has_ris               : 1;  /**< [ 32: 32](RO/H) This MSC has a resource instance selector. TAD_CMN_MPAMCFG_PART_SEL contains the RIS field that
                                                                 selects a resource instance to control.

                                                                 TAD_CMN_MPAMCFG_PART_SEL implements the TAD_CMN_MPAMCFG_PART_SEL[RIS] and
                                                                 MPAM resource instance numbers up to and including TAD_CMN_MPAMF_IDR[RIS_MAX]. */
        uint64_t reserved_33_35        : 3;
        uint64_t no_impl_part          : 1;  /**< [ 36: 36](RO/H) This MSC has IMPLEMENTATION DEFINED resource controls.

                                                                 The value of [NO_IMPL_PART] varies with MPAMCFG_PART_SEL[RIS]
                                                                   RIS = MSC:   0
                                                                   RIS = LTG:   1
                                                                   RIS = DTG:   1
                                                                   RIS = undef: 1 */
        uint64_t no_impl_msmon         : 1;  /**< [ 37: 37](RO) This MSC does not have any IMPLEMENTATION DEFINED resource monitors. */
        uint64_t has_extd_esr          : 1;  /**< [ 38: 38](RO) MPAMF_ESR is not implemented.

                                                                 0: MPAMF_ESR is 32 bits.
                                                                 1: MPAMF_ESR is 64 bits. */
        uint64_t has_esr               : 1;  /**< [ 39: 39](RO) MPAMF_ESR is not implemented.

                                                                 0: MPAMF_ESR, MPAMF_ECR and MPAM error handling are not implemented.
                                                                 1: MPAMF_ESR, MPAMF_ECR and MPAM error handling are implemented. */
        uint64_t reserved_40_55        : 16;
        uint64_t ris_max               : 4;  /**< [ 59: 56](RO) Maximum RIS value supported in TAD_CMN_MPAMCFG_PART_SEL. */
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
    if (cavm_is_model(OCTEONTX_CN20KA))
        return 0x87e053010000ll;
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
        uint64_t ris_max               : 4;  /**< [ 59: 56](SRO) Maximum RIS value supported in TAD_CMN_MPAMCFG_PART_SEL. */
        uint64_t reserved_40_55        : 16;
        uint64_t has_esr               : 1;  /**< [ 39: 39](SRO) MPAMF_ESR is not implemented.

                                                                 0: MPAMF_ESR, MPAMF_ECR and MPAM error handling are not implemented.
                                                                 1: MPAMF_ESR, MPAMF_ECR and MPAM error handling are implemented. */
        uint64_t has_extd_esr          : 1;  /**< [ 38: 38](SRO) MPAMF_ESR is not implemented.

                                                                 0: MPAMF_ESR is 32 bits.
                                                                 1: MPAMF_ESR is 64 bits. */
        uint64_t no_impl_msmon         : 1;  /**< [ 37: 37](SRO) This MSC does not have any IMPLEMENTATION DEFINED resource monitors. */
        uint64_t no_impl_part          : 1;  /**< [ 36: 36](SRO/H) This MSC has IMPLEMENTATION DEFINED resource controls.

                                                                 The value of [NO_IMPL_PART] varies with MPAMCFG_PART_SEL[RIS]
                                                                   RIS = MSC:   0
                                                                   RIS = LTG:   1
                                                                   RIS = DTG:   1
                                                                   RIS = undef: 1 */
        uint64_t reserved_33_35        : 3;
        uint64_t has_ris               : 1;  /**< [ 32: 32](SRO/H) This MSC has a resource instance selector. TAD_CMN_MPAMCFG_PART_SEL contains the RIS field that
                                                                 selects a resource instance to control.

                                                                 TAD_CMN_MPAMCFG_PART_SEL implements the TAD_CMN_MPAMCFG_PART_SEL[RIS] and
                                                                 MPAM resource instance numbers up to and including TAD_CMN_MPAMF_IDR[RIS_MAX]. */
        uint64_t has_partid_nrw        : 1;  /**< [ 31: 31](SRO) This MSC does not support PARTID narrowing. */
        uint64_t has_msmon             : 1;  /**< [ 30: 30](SRO/H) This MSC has MPAM resource monitors. TAD_CMN_MPAMF_MSMON_IDR indicates which
                                                                 MPAM monitoring features are present.

                                                                 The value of this field varies with MPAMCFG_PART_SEL[RIS]
                                                                   RIS = MSC:   0
                                                                   RIS = LTG:   1
                                                                   RIS = DTG:   1
                                                                   RIS = undef: 0 */
        uint64_t has_impl_idr          : 1;  /**< [ 29: 29](SRO/H) This MSC has the implementation-specific MPAM features register, TAD_CMN_MPAMF_IMPL_IDR.

                                                                 The value of this field varies with MPAMCFG_PART_SEL[RIS]
                                                                   RIS = MSC:   1
                                                                   RIS = LTG:   0
                                                                   RIS = DTG:   0
                                                                   RIS = undef: 0 */
        uint64_t ext                   : 1;  /**< [ 28: 28](SRO) Extended TAD_CMN_MPAMF_IDR. TAD_CMN_MPAMF_IDR has bits defined in [63:32]. The register is 64-bits. */
        uint64_t has_pri_part          : 1;  /**< [ 27: 27](SRO/H) Whether or not this MSC supports priority partitioning or has TAD_CMN_MPAMF_PRI_IDR_S.

                                                                 The value of this field varies with MPAMCFG_PART_SEL[RIS]
                                                                   RIS = MSC:   1 if MPAMCFG_IMPL_PRI[MPAM_QOS] = 1, else 0
                                                                   RIS = LTG:   0
                                                                   RIS = DTG:   0
                                                                   RIS = undef: 0 */
        uint64_t has_mbw_part          : 1;  /**< [ 26: 26](SRO) This MSC does not support memory bandwidth partitioning or have TAD_CMN_MPAMF_MBW_IDR
                                                                 register. */
        uint64_t has_cpor_part         : 1;  /**< [ 25: 25](SRO/H) This MSC implements MPAM cache portion partitioning.
                                                                 It has TAD_CMN_MPAMF_CPOR_IDR and TAD_CMN_MPAMCFG_CPBM registers.

                                                                 The value of this field varies with MPAMCFG_PART_SEL[RIS]
                                                                   RIS = MSC:   0
                                                                   RIS = LTG:   1
                                                                   RIS = DTG:   1
                                                                   RIS = undef: 0 */
        uint64_t has_ccap_part         : 1;  /**< [ 24: 24](SRO) This MSC does not support MPAM cache capacity partitioning or have
                                                                 the TAD_CMN_MPAMF_CCAP_IDR and TAD_CMN_MPAMCFG_CMAX registers. */
        uint64_t pmg_max               : 8;  /**< [ 23: 16](SRO) Maximum value of Non-secure PMG supported by this component. */
        uint64_t partid_max            : 16; /**< [ 15:  0](SRO) Maximum value of Non-secure PARTID supported by this component. */
#else /* Word 0 - Little Endian */
        uint64_t partid_max            : 16; /**< [ 15:  0](SRO) Maximum value of Non-secure PARTID supported by this component. */
        uint64_t pmg_max               : 8;  /**< [ 23: 16](SRO) Maximum value of Non-secure PMG supported by this component. */
        uint64_t has_ccap_part         : 1;  /**< [ 24: 24](SRO) This MSC does not support MPAM cache capacity partitioning or have
                                                                 the TAD_CMN_MPAMF_CCAP_IDR and TAD_CMN_MPAMCFG_CMAX registers. */
        uint64_t has_cpor_part         : 1;  /**< [ 25: 25](SRO/H) This MSC implements MPAM cache portion partitioning.
                                                                 It has TAD_CMN_MPAMF_CPOR_IDR and TAD_CMN_MPAMCFG_CPBM registers.

                                                                 The value of this field varies with MPAMCFG_PART_SEL[RIS]
                                                                   RIS = MSC:   0
                                                                   RIS = LTG:   1
                                                                   RIS = DTG:   1
                                                                   RIS = undef: 0 */
        uint64_t has_mbw_part          : 1;  /**< [ 26: 26](SRO) This MSC does not support memory bandwidth partitioning or have TAD_CMN_MPAMF_MBW_IDR
                                                                 register. */
        uint64_t has_pri_part          : 1;  /**< [ 27: 27](SRO/H) Whether or not this MSC supports priority partitioning or has TAD_CMN_MPAMF_PRI_IDR_S.

                                                                 The value of this field varies with MPAMCFG_PART_SEL[RIS]
                                                                   RIS = MSC:   1 if MPAMCFG_IMPL_PRI[MPAM_QOS] = 1, else 0
                                                                   RIS = LTG:   0
                                                                   RIS = DTG:   0
                                                                   RIS = undef: 0 */
        uint64_t ext                   : 1;  /**< [ 28: 28](SRO) Extended TAD_CMN_MPAMF_IDR. TAD_CMN_MPAMF_IDR has bits defined in [63:32]. The register is 64-bits. */
        uint64_t has_impl_idr          : 1;  /**< [ 29: 29](SRO/H) This MSC has the implementation-specific MPAM features register, TAD_CMN_MPAMF_IMPL_IDR.

                                                                 The value of this field varies with MPAMCFG_PART_SEL[RIS]
                                                                   RIS = MSC:   1
                                                                   RIS = LTG:   0
                                                                   RIS = DTG:   0
                                                                   RIS = undef: 0 */
        uint64_t has_msmon             : 1;  /**< [ 30: 30](SRO/H) This MSC has MPAM resource monitors. TAD_CMN_MPAMF_MSMON_IDR indicates which
                                                                 MPAM monitoring features are present.

                                                                 The value of this field varies with MPAMCFG_PART_SEL[RIS]
                                                                   RIS = MSC:   0
                                                                   RIS = LTG:   1
                                                                   RIS = DTG:   1
                                                                   RIS = undef: 0 */
        uint64_t has_partid_nrw        : 1;  /**< [ 31: 31](SRO) This MSC does not support PARTID narrowing. */
        uint64_t has_ris               : 1;  /**< [ 32: 32](SRO/H) This MSC has a resource instance selector. TAD_CMN_MPAMCFG_PART_SEL contains the RIS field that
                                                                 selects a resource instance to control.

                                                                 TAD_CMN_MPAMCFG_PART_SEL implements the TAD_CMN_MPAMCFG_PART_SEL[RIS] and
                                                                 MPAM resource instance numbers up to and including TAD_CMN_MPAMF_IDR[RIS_MAX]. */
        uint64_t reserved_33_35        : 3;
        uint64_t no_impl_part          : 1;  /**< [ 36: 36](SRO/H) This MSC has IMPLEMENTATION DEFINED resource controls.

                                                                 The value of [NO_IMPL_PART] varies with MPAMCFG_PART_SEL[RIS]
                                                                   RIS = MSC:   0
                                                                   RIS = LTG:   1
                                                                   RIS = DTG:   1
                                                                   RIS = undef: 1 */
        uint64_t no_impl_msmon         : 1;  /**< [ 37: 37](SRO) This MSC does not have any IMPLEMENTATION DEFINED resource monitors. */
        uint64_t has_extd_esr          : 1;  /**< [ 38: 38](SRO) MPAMF_ESR is not implemented.

                                                                 0: MPAMF_ESR is 32 bits.
                                                                 1: MPAMF_ESR is 64 bits. */
        uint64_t has_esr               : 1;  /**< [ 39: 39](SRO) MPAMF_ESR is not implemented.

                                                                 0: MPAMF_ESR, MPAMF_ECR and MPAM error handling are not implemented.
                                                                 1: MPAMF_ESR, MPAMF_ECR and MPAM error handling are implemented. */
        uint64_t reserved_40_55        : 16;
        uint64_t ris_max               : 4;  /**< [ 59: 56](SRO) Maximum RIS value supported in TAD_CMN_MPAMCFG_PART_SEL. */
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
    if (cavm_is_model(OCTEONTX_CN20KA))
        return 0x87e053020000ll;
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
    if (cavm_is_model(OCTEONTX_CN20KA))
        return 0x87e053010018ll;
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
    if (cavm_is_model(OCTEONTX_CN20KA))
        return 0x87e053020018ll;
    __cavm_csr_fatal("TAD_CMN_MPAMF_IIDR_S", 0, 0, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_TAD_CMN_MPAMF_IIDR_S cavm_tad_cmn_mpamf_iidr_s_t
#define bustype_CAVM_TAD_CMN_MPAMF_IIDR_S CSR_TYPE_RSL
#define basename_CAVM_TAD_CMN_MPAMF_IIDR_S "TAD_CMN_MPAMF_IIDR_S"
#define device_bar_CAVM_TAD_CMN_MPAMF_IIDR_S 0x0 /* PF_BAR0 */
#define busnum_CAVM_TAD_CMN_MPAMF_IIDR_S 0
#define arguments_CAVM_TAD_CMN_MPAMF_IIDR_S -1,-1,-1,-1

/**
 * Register (RSL) tad_cmn_mpamf_impl_idr_ns
 *
 * MPAM Implementation-Specific Partitioning Feature Identification Register
 * Indicates the implementation-defined partitioning and monitoring features and
 * parameters of this MSC.
 */
union cavm_tad_cmn_mpamf_impl_idr_ns
{
    uint64_t u;
    struct cavm_tad_cmn_mpamf_impl_idr_ns_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_1_63         : 63;
        uint64_t has_pri               : 1;  /**< [  0:  0](RO/H) Indicates whether or not optional priority partitioning is implemented.

                                                                 If TAD_CMN_MPAMF_IMPL_IDR_NS[HAS_PRI] == 1, optional priority partitioning is implemented
                                                                 and can be enabled with TAD_CMN_MPAMCFG_IMPL_PRI_NS.

                                                                 If TAD_CMN_MPAMF_IMPL_IDR_NS[HAS_PRI] == 0, optional priority partitioning is not implemented.

                                                                 The value of this field varies with MPAMCFG_PART_SEL[RIS]
                                                                   RIS = MSC:   1
                                                                   RIS = LTG:   0
                                                                   RIS = DTG:   0
                                                                   RIS = undef: 0 */
#else /* Word 0 - Little Endian */
        uint64_t has_pri               : 1;  /**< [  0:  0](RO/H) Indicates whether or not optional priority partitioning is implemented.

                                                                 If TAD_CMN_MPAMF_IMPL_IDR_NS[HAS_PRI] == 1, optional priority partitioning is implemented
                                                                 and can be enabled with TAD_CMN_MPAMCFG_IMPL_PRI_NS.

                                                                 If TAD_CMN_MPAMF_IMPL_IDR_NS[HAS_PRI] == 0, optional priority partitioning is not implemented.

                                                                 The value of this field varies with MPAMCFG_PART_SEL[RIS]
                                                                   RIS = MSC:   1
                                                                   RIS = LTG:   0
                                                                   RIS = DTG:   0
                                                                   RIS = undef: 0 */
        uint64_t reserved_1_63         : 63;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_tad_cmn_mpamf_impl_idr_ns_s cn; */
};
typedef union cavm_tad_cmn_mpamf_impl_idr_ns cavm_tad_cmn_mpamf_impl_idr_ns_t;

#define CAVM_TAD_CMN_MPAMF_IMPL_IDR_NS CAVM_TAD_CMN_MPAMF_IMPL_IDR_NS_FUNC()
static inline uint64_t CAVM_TAD_CMN_MPAMF_IMPL_IDR_NS_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_TAD_CMN_MPAMF_IMPL_IDR_NS_FUNC(void)
{
    if (cavm_is_model(OCTEONTX_CN20KA))
        return 0x87e053010028ll;
    __cavm_csr_fatal("TAD_CMN_MPAMF_IMPL_IDR_NS", 0, 0, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_TAD_CMN_MPAMF_IMPL_IDR_NS cavm_tad_cmn_mpamf_impl_idr_ns_t
#define bustype_CAVM_TAD_CMN_MPAMF_IMPL_IDR_NS CSR_TYPE_RSL
#define basename_CAVM_TAD_CMN_MPAMF_IMPL_IDR_NS "TAD_CMN_MPAMF_IMPL_IDR_NS"
#define device_bar_CAVM_TAD_CMN_MPAMF_IMPL_IDR_NS 0x0 /* PF_BAR0 */
#define busnum_CAVM_TAD_CMN_MPAMF_IMPL_IDR_NS 0
#define arguments_CAVM_TAD_CMN_MPAMF_IMPL_IDR_NS -1,-1,-1,-1

/**
 * Register (RSL) tad_cmn_mpamf_impl_idr_s
 *
 * MPAM Implementation-Specific Partitioning Feature Identification Register
 * Indicates the implementation-defined partitioning and monitoring features and
 * parameters of this MSC.
 */
union cavm_tad_cmn_mpamf_impl_idr_s
{
    uint64_t u;
    struct cavm_tad_cmn_mpamf_impl_idr_s_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_1_63         : 63;
        uint64_t has_pri               : 1;  /**< [  0:  0](SRO/H) Indicates whether or not optional priority partitioning is implemented.

                                                                 If TAD_CMN_MPAMF_IMPL_IDR_S[HAS_PRI] == 1, optional priority partitioning is implemented
                                                                 and can be enabled with TAD_CMN_MPAMCFG_IMPL_PRI_S.

                                                                 If TAD_CMN_MPAMF_IMPL_IDR_S[HAS_PRI] == 0, optional priority partitioning is not implemented.

                                                                 The value of this field varies with MPAMCFG_PART_SEL[RIS]
                                                                   RIS = MSC:   1
                                                                   RIS = LTG:   0
                                                                   RIS = DTG:   0
                                                                   RIS = undef: 0 */
#else /* Word 0 - Little Endian */
        uint64_t has_pri               : 1;  /**< [  0:  0](SRO/H) Indicates whether or not optional priority partitioning is implemented.

                                                                 If TAD_CMN_MPAMF_IMPL_IDR_S[HAS_PRI] == 1, optional priority partitioning is implemented
                                                                 and can be enabled with TAD_CMN_MPAMCFG_IMPL_PRI_S.

                                                                 If TAD_CMN_MPAMF_IMPL_IDR_S[HAS_PRI] == 0, optional priority partitioning is not implemented.

                                                                 The value of this field varies with MPAMCFG_PART_SEL[RIS]
                                                                   RIS = MSC:   1
                                                                   RIS = LTG:   0
                                                                   RIS = DTG:   0
                                                                   RIS = undef: 0 */
        uint64_t reserved_1_63         : 63;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_tad_cmn_mpamf_impl_idr_s_s cn; */
};
typedef union cavm_tad_cmn_mpamf_impl_idr_s cavm_tad_cmn_mpamf_impl_idr_s_t;

#define CAVM_TAD_CMN_MPAMF_IMPL_IDR_S CAVM_TAD_CMN_MPAMF_IMPL_IDR_S_FUNC()
static inline uint64_t CAVM_TAD_CMN_MPAMF_IMPL_IDR_S_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_TAD_CMN_MPAMF_IMPL_IDR_S_FUNC(void)
{
    if (cavm_is_model(OCTEONTX_CN20KA))
        return 0x87e053020028ll;
    __cavm_csr_fatal("TAD_CMN_MPAMF_IMPL_IDR_S", 0, 0, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_TAD_CMN_MPAMF_IMPL_IDR_S cavm_tad_cmn_mpamf_impl_idr_s_t
#define bustype_CAVM_TAD_CMN_MPAMF_IMPL_IDR_S CSR_TYPE_RSL
#define basename_CAVM_TAD_CMN_MPAMF_IMPL_IDR_S "TAD_CMN_MPAMF_IMPL_IDR_S"
#define device_bar_CAVM_TAD_CMN_MPAMF_IMPL_IDR_S 0x0 /* PF_BAR0 */
#define busnum_CAVM_TAD_CMN_MPAMF_IMPL_IDR_S 0
#define arguments_CAVM_TAD_CMN_MPAMF_IMPL_IDR_S -1,-1,-1,-1

/**
 * Register (RSL) tad_cmn_mpamf_msmon_idr_ns
 *
 * MPAM Resource Monitoring Identification Register
 * Indicates which MPAM monitoring features are present on this MSC.
 * TAD_CMN_MPAMF_MSMON_IDR_NS indicates Non-secure monitoring features.
 */
union cavm_tad_cmn_mpamf_msmon_idr_ns
{
    uint64_t u;
    struct cavm_tad_cmn_mpamf_msmon_idr_ns_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_32_63        : 32;
        uint64_t has_local_capt_evnt   : 1;  /**< [ 31: 31](RO) This MSC does not support MPAM local capture event generator or MSMON_CAPT_EVNT. */
        uint64_t reserved_18_30        : 13;
        uint64_t msmon_mbwu            : 1;  /**< [ 17: 17](RO) This MSC does not have monitoring for memory bandwidth usage and does not use the bandwidth
                                                                 usage registers. */
        uint64_t msmon_csu             : 1;  /**< [ 16: 16](RO/H) This MSC has monitoring of cache storage usage and the
                                                                 TAD_CMN_MPAMF_CSUMON_IDR_NS, TAD_CMN_MSMON_CFG_CSU_CTL_NS,
                                                                 TAD_CMN_MSMON_CFG_CSU_FLT_NS, and TAD_MSMON_CSU_NS registers.

                                                                 The value of this field varies with MPAMCFG_PART_SEL[RIS]
                                                                   RIS = MSC:   0
                                                                   RIS = LTG:   1
                                                                   RIS = DTG:   1
                                                                   RIS = undef: 0 */
        uint64_t reserved_0_15         : 16;
#else /* Word 0 - Little Endian */
        uint64_t reserved_0_15         : 16;
        uint64_t msmon_csu             : 1;  /**< [ 16: 16](RO/H) This MSC has monitoring of cache storage usage and the
                                                                 TAD_CMN_MPAMF_CSUMON_IDR_NS, TAD_CMN_MSMON_CFG_CSU_CTL_NS,
                                                                 TAD_CMN_MSMON_CFG_CSU_FLT_NS, and TAD_MSMON_CSU_NS registers.

                                                                 The value of this field varies with MPAMCFG_PART_SEL[RIS]
                                                                   RIS = MSC:   0
                                                                   RIS = LTG:   1
                                                                   RIS = DTG:   1
                                                                   RIS = undef: 0 */
        uint64_t msmon_mbwu            : 1;  /**< [ 17: 17](RO) This MSC does not have monitoring for memory bandwidth usage and does not use the bandwidth
                                                                 usage registers. */
        uint64_t reserved_18_30        : 13;
        uint64_t has_local_capt_evnt   : 1;  /**< [ 31: 31](RO) This MSC does not support MPAM local capture event generator or MSMON_CAPT_EVNT. */
        uint64_t reserved_32_63        : 32;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_tad_cmn_mpamf_msmon_idr_ns_s cn; */
};
typedef union cavm_tad_cmn_mpamf_msmon_idr_ns cavm_tad_cmn_mpamf_msmon_idr_ns_t;

#define CAVM_TAD_CMN_MPAMF_MSMON_IDR_NS CAVM_TAD_CMN_MPAMF_MSMON_IDR_NS_FUNC()
static inline uint64_t CAVM_TAD_CMN_MPAMF_MSMON_IDR_NS_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_TAD_CMN_MPAMF_MSMON_IDR_NS_FUNC(void)
{
    if (cavm_is_model(OCTEONTX_CN20KA))
        return 0x87e053010080ll;
    __cavm_csr_fatal("TAD_CMN_MPAMF_MSMON_IDR_NS", 0, 0, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_TAD_CMN_MPAMF_MSMON_IDR_NS cavm_tad_cmn_mpamf_msmon_idr_ns_t
#define bustype_CAVM_TAD_CMN_MPAMF_MSMON_IDR_NS CSR_TYPE_RSL
#define basename_CAVM_TAD_CMN_MPAMF_MSMON_IDR_NS "TAD_CMN_MPAMF_MSMON_IDR_NS"
#define device_bar_CAVM_TAD_CMN_MPAMF_MSMON_IDR_NS 0x0 /* PF_BAR0 */
#define busnum_CAVM_TAD_CMN_MPAMF_MSMON_IDR_NS 0
#define arguments_CAVM_TAD_CMN_MPAMF_MSMON_IDR_NS -1,-1,-1,-1

/**
 * Register (RSL) tad_cmn_mpamf_msmon_idr_s
 *
 * MPAM Resource Monitoring Identification Register
 * Indicates which MPAM monitoring features are present on this MSC.
 * TAD_CMN_MPAMF_MSMON_IDR_S indicates secure monitoring features.
 */
union cavm_tad_cmn_mpamf_msmon_idr_s
{
    uint64_t u;
    struct cavm_tad_cmn_mpamf_msmon_idr_s_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_32_63        : 32;
        uint64_t has_local_capt_evnt   : 1;  /**< [ 31: 31](SRO) This MSC does not support MPAM local capture event generator or MSMON_CAPT_EVNT. */
        uint64_t reserved_18_30        : 13;
        uint64_t msmon_mbwu            : 1;  /**< [ 17: 17](SRO) This MSC does not have monitoring for memory bandwidth usage and does not use the bandwidth
                                                                 usage registers. */
        uint64_t msmon_csu             : 1;  /**< [ 16: 16](SRO/H) This MSC has monitoring of cache storage usage and the
                                                                 TAD_CMN_MPAMF_CSUMON_IDR_S, TAD_CMN_MSMON_CFG_CSU_CTL_S,
                                                                 TAD_CMN_MSMON_CFG_CSU_FLT_S, and TAD_MSMON_CSU_S registers.

                                                                 The value of this field varies with MPAMCFG_PART_SEL[RIS]
                                                                   RIS = MSC:   0
                                                                   RIS = LTG:   1
                                                                   RIS = DTG:   1
                                                                   RIS = undef: 0 */
        uint64_t reserved_0_15         : 16;
#else /* Word 0 - Little Endian */
        uint64_t reserved_0_15         : 16;
        uint64_t msmon_csu             : 1;  /**< [ 16: 16](SRO/H) This MSC has monitoring of cache storage usage and the
                                                                 TAD_CMN_MPAMF_CSUMON_IDR_S, TAD_CMN_MSMON_CFG_CSU_CTL_S,
                                                                 TAD_CMN_MSMON_CFG_CSU_FLT_S, and TAD_MSMON_CSU_S registers.

                                                                 The value of this field varies with MPAMCFG_PART_SEL[RIS]
                                                                   RIS = MSC:   0
                                                                   RIS = LTG:   1
                                                                   RIS = DTG:   1
                                                                   RIS = undef: 0 */
        uint64_t msmon_mbwu            : 1;  /**< [ 17: 17](SRO) This MSC does not have monitoring for memory bandwidth usage and does not use the bandwidth
                                                                 usage registers. */
        uint64_t reserved_18_30        : 13;
        uint64_t has_local_capt_evnt   : 1;  /**< [ 31: 31](SRO) This MSC does not support MPAM local capture event generator or MSMON_CAPT_EVNT. */
        uint64_t reserved_32_63        : 32;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_tad_cmn_mpamf_msmon_idr_s_s cn; */
};
typedef union cavm_tad_cmn_mpamf_msmon_idr_s cavm_tad_cmn_mpamf_msmon_idr_s_t;

#define CAVM_TAD_CMN_MPAMF_MSMON_IDR_S CAVM_TAD_CMN_MPAMF_MSMON_IDR_S_FUNC()
static inline uint64_t CAVM_TAD_CMN_MPAMF_MSMON_IDR_S_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_TAD_CMN_MPAMF_MSMON_IDR_S_FUNC(void)
{
    if (cavm_is_model(OCTEONTX_CN20KA))
        return 0x87e053020080ll;
    __cavm_csr_fatal("TAD_CMN_MPAMF_MSMON_IDR_S", 0, 0, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_TAD_CMN_MPAMF_MSMON_IDR_S cavm_tad_cmn_mpamf_msmon_idr_s_t
#define bustype_CAVM_TAD_CMN_MPAMF_MSMON_IDR_S CSR_TYPE_RSL
#define basename_CAVM_TAD_CMN_MPAMF_MSMON_IDR_S "TAD_CMN_MPAMF_MSMON_IDR_S"
#define device_bar_CAVM_TAD_CMN_MPAMF_MSMON_IDR_S 0x0 /* PF_BAR0 */
#define busnum_CAVM_TAD_CMN_MPAMF_MSMON_IDR_S 0
#define arguments_CAVM_TAD_CMN_MPAMF_MSMON_IDR_S -1,-1,-1,-1

/**
 * Register (RSL) tad_cmn_mpamf_pri_idr_ns
 *
 * MPAM Priority Partitioning Identification Register
 * Indicates which MPAM priority partitioning features are present on this MSC.
 */
union cavm_tad_cmn_mpamf_pri_idr_ns
{
    uint64_t u;
    struct cavm_tad_cmn_mpamf_pri_idr_ns_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_26_63        : 38;
        uint64_t dspri_wd              : 6;  /**< [ 25: 20](RO/H) Number of implemented bits in the downstream priority field (DSPRI) of TAD_CMN_MPAMCFG_PRI_NS.

                                                                 The value of this field varies with MPAMCFG_PART_SEL[RIS]
                                                                   RIS = MSC:   4 if MPAMCFG_IMPL_PRI[MPAM_QOS] = 1, else 0
                                                                   RIS = LTG:   0
                                                                   RIS = DTG:   0
                                                                   RIS = undef: 0 */
        uint64_t reserved_18_19        : 2;
        uint64_t dspri_0_is_low        : 1;  /**< [ 17: 17](RO/H) Indicates whether 0 in TAD_CMN_MPAMCFG_PRI_NS[DSPRI] is the lowest or the highest priority.
                                                                   0 = In the TAD_CMN_MPAMCFG_PRI_NS[DSPRI] field, a value of 0 has the highest priority.
                                                                   1 = In the TAD_CMN_MPAMCFG_PRI_NS[DSPRI] field, a value of 0 has the lowest priority.

                                                                 The value of this field varies with MPAMCFG_PART_SEL[RIS]
                                                                   RIS = MSC:   1 if MPAMCFG_IMPL_PRI[MPAM_QOS] = 1, else 0
                                                                   RIS = LTG:   0
                                                                   RIS = DTG:   0
                                                                   RIS = undef: 0 */
        uint64_t has_dspri             : 1;  /**< [ 16: 16](RO/H) Indicates whether or not this MSC implements the DSPRI field in the
                                                                 TAD_CMN_MPAMCFG_PRI_NS register.

                                                                 The value of this field varies with MPAMCFG_PART_SEL[RIS]
                                                                   RIS = MSC:   1 if MPAMCFG_IMPL_PRI[MPAM_QOS] = 1, else 0
                                                                   RIS = LTG:   0
                                                                   RIS = DTG:   0
                                                                   RIS = undef: 0 */
        uint64_t reserved_10_15        : 6;
        uint64_t intpri_wd             : 6;  /**< [  9:  4](RO) Number of implemented bits in the internal priority field (INTPRI) in the
                                                                 TAD_CMN_MPAMCFG_PRI_NS register.
                                                                 INTPRI is not implemented. */
        uint64_t reserved_2_3          : 2;
        uint64_t intpri_0_is_low       : 1;  /**< [  1:  1](RO) Indicates whether 0 in TAD_CMN_MPAMCFG_PRI_NS[INTPRI] is the lowest or the highest priority.
                                                                 INTPRI is not implemented.
                                                                   0 = In the TAD_CMN_MPAMCFG_PRI_NS[INTPRI] field, a value of 0 has the highest priority.
                                                                   1 = In the TAD_CMN_MPAMCFG_PRI_NS[INTPRI] field, a value of 0 has the lowest priority. */
        uint64_t has_intpri            : 1;  /**< [  0:  0](RO) Indicates whether or not this MSC implements the INTPRI field in the MPAMCFG_PRI register.
                                                                 INTPRI is not implemented. */
#else /* Word 0 - Little Endian */
        uint64_t has_intpri            : 1;  /**< [  0:  0](RO) Indicates whether or not this MSC implements the INTPRI field in the MPAMCFG_PRI register.
                                                                 INTPRI is not implemented. */
        uint64_t intpri_0_is_low       : 1;  /**< [  1:  1](RO) Indicates whether 0 in TAD_CMN_MPAMCFG_PRI_NS[INTPRI] is the lowest or the highest priority.
                                                                 INTPRI is not implemented.
                                                                   0 = In the TAD_CMN_MPAMCFG_PRI_NS[INTPRI] field, a value of 0 has the highest priority.
                                                                   1 = In the TAD_CMN_MPAMCFG_PRI_NS[INTPRI] field, a value of 0 has the lowest priority. */
        uint64_t reserved_2_3          : 2;
        uint64_t intpri_wd             : 6;  /**< [  9:  4](RO) Number of implemented bits in the internal priority field (INTPRI) in the
                                                                 TAD_CMN_MPAMCFG_PRI_NS register.
                                                                 INTPRI is not implemented. */
        uint64_t reserved_10_15        : 6;
        uint64_t has_dspri             : 1;  /**< [ 16: 16](RO/H) Indicates whether or not this MSC implements the DSPRI field in the
                                                                 TAD_CMN_MPAMCFG_PRI_NS register.

                                                                 The value of this field varies with MPAMCFG_PART_SEL[RIS]
                                                                   RIS = MSC:   1 if MPAMCFG_IMPL_PRI[MPAM_QOS] = 1, else 0
                                                                   RIS = LTG:   0
                                                                   RIS = DTG:   0
                                                                   RIS = undef: 0 */
        uint64_t dspri_0_is_low        : 1;  /**< [ 17: 17](RO/H) Indicates whether 0 in TAD_CMN_MPAMCFG_PRI_NS[DSPRI] is the lowest or the highest priority.
                                                                   0 = In the TAD_CMN_MPAMCFG_PRI_NS[DSPRI] field, a value of 0 has the highest priority.
                                                                   1 = In the TAD_CMN_MPAMCFG_PRI_NS[DSPRI] field, a value of 0 has the lowest priority.

                                                                 The value of this field varies with MPAMCFG_PART_SEL[RIS]
                                                                   RIS = MSC:   1 if MPAMCFG_IMPL_PRI[MPAM_QOS] = 1, else 0
                                                                   RIS = LTG:   0
                                                                   RIS = DTG:   0
                                                                   RIS = undef: 0 */
        uint64_t reserved_18_19        : 2;
        uint64_t dspri_wd              : 6;  /**< [ 25: 20](RO/H) Number of implemented bits in the downstream priority field (DSPRI) of TAD_CMN_MPAMCFG_PRI_NS.

                                                                 The value of this field varies with MPAMCFG_PART_SEL[RIS]
                                                                   RIS = MSC:   4 if MPAMCFG_IMPL_PRI[MPAM_QOS] = 1, else 0
                                                                   RIS = LTG:   0
                                                                   RIS = DTG:   0
                                                                   RIS = undef: 0 */
        uint64_t reserved_26_63        : 38;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_tad_cmn_mpamf_pri_idr_ns_s cn; */
};
typedef union cavm_tad_cmn_mpamf_pri_idr_ns cavm_tad_cmn_mpamf_pri_idr_ns_t;

#define CAVM_TAD_CMN_MPAMF_PRI_IDR_NS CAVM_TAD_CMN_MPAMF_PRI_IDR_NS_FUNC()
static inline uint64_t CAVM_TAD_CMN_MPAMF_PRI_IDR_NS_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_TAD_CMN_MPAMF_PRI_IDR_NS_FUNC(void)
{
    if (cavm_is_model(OCTEONTX_CN20KA))
        return 0x87e053010048ll;
    __cavm_csr_fatal("TAD_CMN_MPAMF_PRI_IDR_NS", 0, 0, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_TAD_CMN_MPAMF_PRI_IDR_NS cavm_tad_cmn_mpamf_pri_idr_ns_t
#define bustype_CAVM_TAD_CMN_MPAMF_PRI_IDR_NS CSR_TYPE_RSL
#define basename_CAVM_TAD_CMN_MPAMF_PRI_IDR_NS "TAD_CMN_MPAMF_PRI_IDR_NS"
#define device_bar_CAVM_TAD_CMN_MPAMF_PRI_IDR_NS 0x0 /* PF_BAR0 */
#define busnum_CAVM_TAD_CMN_MPAMF_PRI_IDR_NS 0
#define arguments_CAVM_TAD_CMN_MPAMF_PRI_IDR_NS -1,-1,-1,-1

/**
 * Register (RSL) tad_cmn_mpamf_pri_idr_s
 *
 * MPAM Priority Partitioning Identification Register
 * Indicates which MPAM priority partitioning features are present on this MSC.
 */
union cavm_tad_cmn_mpamf_pri_idr_s
{
    uint64_t u;
    struct cavm_tad_cmn_mpamf_pri_idr_s_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_26_63        : 38;
        uint64_t dspri_wd              : 6;  /**< [ 25: 20](SRO/H) Number of implemented bits in the downstream priority field (DSPRI) of TAD_CMN_MPAMCFG_PRI_S.

                                                                 The value of this field varies with MPAMCFG_PART_SEL[RIS]
                                                                   RIS = MSC:   4 if MPAMCFG_IMPL_PRI[MPAM_QOS] = 1, else 0
                                                                   RIS = LTG:   0
                                                                   RIS = DTG:   0
                                                                   RIS = undef: 0 */
        uint64_t reserved_18_19        : 2;
        uint64_t dspri_0_is_low        : 1;  /**< [ 17: 17](SRO/H) Indicates whether 0 in TAD_CMN_MPAMCFG_PRI_S[DSPRI] is the lowest or the highest priority.
                                                                   0 = In the TAD_CMN_MPAMCFG_PRI_S[DSPRI] field, a value of 0 has the highest priority.
                                                                   1 = In the TAD_CMN_MPAMCFG_PRI_S[DSPRI] field, a value of 0 has the lowest priority.

                                                                 The value of this field varies with MPAMCFG_PART_SEL[RIS]
                                                                   RIS = MSC:   1 if MPAMCFG_IMPL_PRI[MPAM_QOS] = 1, else 0
                                                                   RIS = LTG:   0
                                                                   RIS = DTG:   0
                                                                   RIS = undef: 0 */
        uint64_t has_dspri             : 1;  /**< [ 16: 16](SRO/H) Indicates whether or not this MSC implements the DSPRI field in the
                                                                 TAD_CMN_MPAMCFG_PRI_S register.

                                                                 The value of this field varies with MPAMCFG_PART_SEL[RIS]
                                                                   RIS = MSC:   1 if MPAMCFG_IMPL_PRI[MPAM_QOS] = 1, else 0
                                                                   RIS = LTG:   0
                                                                   RIS = DTG:   0
                                                                   RIS = undef: 0 */
        uint64_t reserved_10_15        : 6;
        uint64_t intpri_wd             : 6;  /**< [  9:  4](SRO) Number of implemented bits in the internal priority field (INTPRI) in the
                                                                 TAD_CMN_MPAMCFG_PRI_S register.
                                                                 INTPRI is not implemented. */
        uint64_t reserved_2_3          : 2;
        uint64_t intpri_0_is_low       : 1;  /**< [  1:  1](SRO) Indicates whether 0 in TAD_CMN_MPAMCFG_PRI_S[INTPRI] is the lowest or the highest priority.
                                                                 INTPRI is not implemented.
                                                                   0 = In the TAD_CMN_MPAMCFG_PRI_S[INTPRI] field, a value of 0 has the highest priority.
                                                                   1 = In the TAD_CMN_MPAMCFG_PRI_S[INTPRI] field, a value of 0 has the lowest priority. */
        uint64_t has_intpri            : 1;  /**< [  0:  0](SRO) Indicates whether or not this MSC implements the INTPRI field in the MPAMCFG_PRI register.
                                                                 INTPRI is not implemented. */
#else /* Word 0 - Little Endian */
        uint64_t has_intpri            : 1;  /**< [  0:  0](SRO) Indicates whether or not this MSC implements the INTPRI field in the MPAMCFG_PRI register.
                                                                 INTPRI is not implemented. */
        uint64_t intpri_0_is_low       : 1;  /**< [  1:  1](SRO) Indicates whether 0 in TAD_CMN_MPAMCFG_PRI_S[INTPRI] is the lowest or the highest priority.
                                                                 INTPRI is not implemented.
                                                                   0 = In the TAD_CMN_MPAMCFG_PRI_S[INTPRI] field, a value of 0 has the highest priority.
                                                                   1 = In the TAD_CMN_MPAMCFG_PRI_S[INTPRI] field, a value of 0 has the lowest priority. */
        uint64_t reserved_2_3          : 2;
        uint64_t intpri_wd             : 6;  /**< [  9:  4](SRO) Number of implemented bits in the internal priority field (INTPRI) in the
                                                                 TAD_CMN_MPAMCFG_PRI_S register.
                                                                 INTPRI is not implemented. */
        uint64_t reserved_10_15        : 6;
        uint64_t has_dspri             : 1;  /**< [ 16: 16](SRO/H) Indicates whether or not this MSC implements the DSPRI field in the
                                                                 TAD_CMN_MPAMCFG_PRI_S register.

                                                                 The value of this field varies with MPAMCFG_PART_SEL[RIS]
                                                                   RIS = MSC:   1 if MPAMCFG_IMPL_PRI[MPAM_QOS] = 1, else 0
                                                                   RIS = LTG:   0
                                                                   RIS = DTG:   0
                                                                   RIS = undef: 0 */
        uint64_t dspri_0_is_low        : 1;  /**< [ 17: 17](SRO/H) Indicates whether 0 in TAD_CMN_MPAMCFG_PRI_S[DSPRI] is the lowest or the highest priority.
                                                                   0 = In the TAD_CMN_MPAMCFG_PRI_S[DSPRI] field, a value of 0 has the highest priority.
                                                                   1 = In the TAD_CMN_MPAMCFG_PRI_S[DSPRI] field, a value of 0 has the lowest priority.

                                                                 The value of this field varies with MPAMCFG_PART_SEL[RIS]
                                                                   RIS = MSC:   1 if MPAMCFG_IMPL_PRI[MPAM_QOS] = 1, else 0
                                                                   RIS = LTG:   0
                                                                   RIS = DTG:   0
                                                                   RIS = undef: 0 */
        uint64_t reserved_18_19        : 2;
        uint64_t dspri_wd              : 6;  /**< [ 25: 20](SRO/H) Number of implemented bits in the downstream priority field (DSPRI) of TAD_CMN_MPAMCFG_PRI_S.

                                                                 The value of this field varies with MPAMCFG_PART_SEL[RIS]
                                                                   RIS = MSC:   4 if MPAMCFG_IMPL_PRI[MPAM_QOS] = 1, else 0
                                                                   RIS = LTG:   0
                                                                   RIS = DTG:   0
                                                                   RIS = undef: 0 */
        uint64_t reserved_26_63        : 38;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_tad_cmn_mpamf_pri_idr_s_s cn; */
};
typedef union cavm_tad_cmn_mpamf_pri_idr_s cavm_tad_cmn_mpamf_pri_idr_s_t;

#define CAVM_TAD_CMN_MPAMF_PRI_IDR_S CAVM_TAD_CMN_MPAMF_PRI_IDR_S_FUNC()
static inline uint64_t CAVM_TAD_CMN_MPAMF_PRI_IDR_S_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_TAD_CMN_MPAMF_PRI_IDR_S_FUNC(void)
{
    if (cavm_is_model(OCTEONTX_CN20KA))
        return 0x87e053020048ll;
    __cavm_csr_fatal("TAD_CMN_MPAMF_PRI_IDR_S", 0, 0, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_TAD_CMN_MPAMF_PRI_IDR_S cavm_tad_cmn_mpamf_pri_idr_s_t
#define bustype_CAVM_TAD_CMN_MPAMF_PRI_IDR_S CSR_TYPE_RSL
#define basename_CAVM_TAD_CMN_MPAMF_PRI_IDR_S "TAD_CMN_MPAMF_PRI_IDR_S"
#define device_bar_CAVM_TAD_CMN_MPAMF_PRI_IDR_S 0x0 /* PF_BAR0 */
#define busnum_CAVM_TAD_CMN_MPAMF_PRI_IDR_S 0
#define arguments_CAVM_TAD_CMN_MPAMF_PRI_IDR_S -1,-1,-1,-1

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
    if (cavm_is_model(OCTEONTX_CN20KA))
        return 0x87e053020008ll;
    __cavm_csr_fatal("TAD_CMN_MPAMF_SIDR", 0, 0, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_TAD_CMN_MPAMF_SIDR cavm_tad_cmn_mpamf_sidr_t
#define bustype_CAVM_TAD_CMN_MPAMF_SIDR CSR_TYPE_RSL
#define basename_CAVM_TAD_CMN_MPAMF_SIDR "TAD_CMN_MPAMF_SIDR"
#define device_bar_CAVM_TAD_CMN_MPAMF_SIDR 0x0 /* PF_BAR0 */
#define busnum_CAVM_TAD_CMN_MPAMF_SIDR 0
#define arguments_CAVM_TAD_CMN_MPAMF_SIDR -1,-1,-1,-1

/**
 * Register (RSL) tad_cmn_msmon_cfg_csu_ctl_ns
 *
 * MPAM Memory System Monitor Configure Cache Storage Usage Monitor Control Register
 * Controls the CSU monitor selected by TAD_CMN_MSMON_CFG_MON_SEL_NS.
 * TAD_CMN_MSMON_CFG_CSU_CTL_NS controls Non-secure cache storage usage monitor instance
 * selected by the Non-secure instance of TAD_CMN_MSMON_CFG_MON_SEL_NS.
 */
union cavm_tad_cmn_msmon_cfg_csu_ctl_ns
{
    uint64_t u;
    struct cavm_tad_cmn_msmon_cfg_csu_ctl_ns_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_32_63        : 32;
        uint64_t en                    : 1;  /**< [ 31: 31](R/W/H) Enabled.
                                                                 0 = The monitor instance is disabled and must not collect any information.
                                                                 1 = The monitor instance is enabled to collect information according to the
                                                                 configuration of the instance.

                                                                 The value of this field varies with MPAMCFG_PART_SEL[RIS]
                                                                   RIS = MSC:   RAZ/WI
                                                                   RIS = LTG:   R/W
                                                                   RIS = DTG:   R/W
                                                                   RIS = undef: RAZ/WI */
        uint64_t capt_evnt             : 3;  /**< [ 30: 28](RO) Capture event selector.
                                                                 This MSC does not implement capture events. */
        uint64_t capt_reset            : 1;  /**< [ 27: 27](RO) Reset after capture.
                                                                 This MSC does not implement capture events. */
        uint64_t oflow_status          : 1;  /**< [ 26: 26](RO) Overflow status.
                                                                 The CSU monitors in this MSC do not overflow. */
        uint64_t oflow_intr            : 1;  /**< [ 25: 25](RO) Overflow interrupt.
                                                                 The CSU monitors in this MSC do not overflow. */
        uint64_t oflow_frz             : 1;  /**< [ 24: 24](RO) Freeze Monitor on Overflow.
                                                                 The CSU monitors in this MSC do not overflow. */
        uint64_t subtype               : 4;  /**< [ 23: 20](RO) Subtype.
                                                                 This field is not currently used for CSU monitors, but reserved for future use. */
        uint64_t reserved_18_19        : 2;
        uint64_t match_pmg             : 1;  /**< [ 17: 17](R/W/H) Match PMG.

                                                                 Controls whether the monitor measures only storage used with PMG matching
                                                                 TAD_CMN_MSMON_CFG_CSU_FLT_NS[PMG].
                                                                 0 = The monitor measures storage used with any PMG value.
                                                                 1 = The monitor only measures storage used with the PMG value matching
                                                                 TAD_CMN_MSMON_CFG_CSU_FLT_NS[PMG].

                                                                 If MATCH_PMG == 1 and MATCH_PARTID == 0, the monitor
                                                                 measures the storage used with matching PMG and with any PARTID.

                                                                 The value of this field varies with MPAMCFG_PART_SEL[RIS]
                                                                   RIS = MSC:   RAZ/WI
                                                                   RIS = LTG:   R/W
                                                                   RIS = DTG:   R/W
                                                                   RIS = undef: RAZ/WI */
        uint64_t match_partid          : 1;  /**< [ 16: 16](R/W/H) Match PARTID.

                                                                 Controls whether the monitor measures only storage used with PARTID matching
                                                                 TAD_CMN_MSMON_CFG_CSU_FLT_NS[PARTID].
                                                                 0 = The monitor measures storage used with any PARTID value.
                                                                 1 = The monitor only measures storage used with the PARTID value matching
                                                                 TAD_CMN_MSMON_CFG_CSU_FLT_NS[PARTID].

                                                                 The value of this field varies with MPAMCFG_PART_SEL[RIS]
                                                                   RIS = MSC:   RAZ/WI
                                                                   RIS = LTG:   R/W
                                                                   RIS = DTG:   R/W
                                                                   RIS = undef: RAZ/WI */
        uint64_t reserved_8_15         : 8;
        uint64_t monitor_type          : 8;  /**< [  7:  0](RO) Monitor Type Code.

                                                                 The value of this field varies with MPAMCFG_PART_SEL[RIS]
                                                                   RIS = MSC:   0
                                                                   RIS = LTG:   0x43
                                                                   RIS = DTG:   0x43
                                                                   RIS = undef: 0 */
#else /* Word 0 - Little Endian */
        uint64_t monitor_type          : 8;  /**< [  7:  0](RO) Monitor Type Code.

                                                                 The value of this field varies with MPAMCFG_PART_SEL[RIS]
                                                                   RIS = MSC:   0
                                                                   RIS = LTG:   0x43
                                                                   RIS = DTG:   0x43
                                                                   RIS = undef: 0 */
        uint64_t reserved_8_15         : 8;
        uint64_t match_partid          : 1;  /**< [ 16: 16](R/W/H) Match PARTID.

                                                                 Controls whether the monitor measures only storage used with PARTID matching
                                                                 TAD_CMN_MSMON_CFG_CSU_FLT_NS[PARTID].
                                                                 0 = The monitor measures storage used with any PARTID value.
                                                                 1 = The monitor only measures storage used with the PARTID value matching
                                                                 TAD_CMN_MSMON_CFG_CSU_FLT_NS[PARTID].

                                                                 The value of this field varies with MPAMCFG_PART_SEL[RIS]
                                                                   RIS = MSC:   RAZ/WI
                                                                   RIS = LTG:   R/W
                                                                   RIS = DTG:   R/W
                                                                   RIS = undef: RAZ/WI */
        uint64_t match_pmg             : 1;  /**< [ 17: 17](R/W/H) Match PMG.

                                                                 Controls whether the monitor measures only storage used with PMG matching
                                                                 TAD_CMN_MSMON_CFG_CSU_FLT_NS[PMG].
                                                                 0 = The monitor measures storage used with any PMG value.
                                                                 1 = The monitor only measures storage used with the PMG value matching
                                                                 TAD_CMN_MSMON_CFG_CSU_FLT_NS[PMG].

                                                                 If MATCH_PMG == 1 and MATCH_PARTID == 0, the monitor
                                                                 measures the storage used with matching PMG and with any PARTID.

                                                                 The value of this field varies with MPAMCFG_PART_SEL[RIS]
                                                                   RIS = MSC:   RAZ/WI
                                                                   RIS = LTG:   R/W
                                                                   RIS = DTG:   R/W
                                                                   RIS = undef: RAZ/WI */
        uint64_t reserved_18_19        : 2;
        uint64_t subtype               : 4;  /**< [ 23: 20](RO) Subtype.
                                                                 This field is not currently used for CSU monitors, but reserved for future use. */
        uint64_t oflow_frz             : 1;  /**< [ 24: 24](RO) Freeze Monitor on Overflow.
                                                                 The CSU monitors in this MSC do not overflow. */
        uint64_t oflow_intr            : 1;  /**< [ 25: 25](RO) Overflow interrupt.
                                                                 The CSU monitors in this MSC do not overflow. */
        uint64_t oflow_status          : 1;  /**< [ 26: 26](RO) Overflow status.
                                                                 The CSU monitors in this MSC do not overflow. */
        uint64_t capt_reset            : 1;  /**< [ 27: 27](RO) Reset after capture.
                                                                 This MSC does not implement capture events. */
        uint64_t capt_evnt             : 3;  /**< [ 30: 28](RO) Capture event selector.
                                                                 This MSC does not implement capture events. */
        uint64_t en                    : 1;  /**< [ 31: 31](R/W/H) Enabled.
                                                                 0 = The monitor instance is disabled and must not collect any information.
                                                                 1 = The monitor instance is enabled to collect information according to the
                                                                 configuration of the instance.

                                                                 The value of this field varies with MPAMCFG_PART_SEL[RIS]
                                                                   RIS = MSC:   RAZ/WI
                                                                   RIS = LTG:   R/W
                                                                   RIS = DTG:   R/W
                                                                   RIS = undef: RAZ/WI */
        uint64_t reserved_32_63        : 32;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_tad_cmn_msmon_cfg_csu_ctl_ns_s cn; */
};
typedef union cavm_tad_cmn_msmon_cfg_csu_ctl_ns cavm_tad_cmn_msmon_cfg_csu_ctl_ns_t;

#define CAVM_TAD_CMN_MSMON_CFG_CSU_CTL_NS CAVM_TAD_CMN_MSMON_CFG_CSU_CTL_NS_FUNC()
static inline uint64_t CAVM_TAD_CMN_MSMON_CFG_CSU_CTL_NS_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_TAD_CMN_MSMON_CFG_CSU_CTL_NS_FUNC(void)
{
    if (cavm_is_model(OCTEONTX_CN20KA))
        return 0x87e053010818ll;
    __cavm_csr_fatal("TAD_CMN_MSMON_CFG_CSU_CTL_NS", 0, 0, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_TAD_CMN_MSMON_CFG_CSU_CTL_NS cavm_tad_cmn_msmon_cfg_csu_ctl_ns_t
#define bustype_CAVM_TAD_CMN_MSMON_CFG_CSU_CTL_NS CSR_TYPE_RSL
#define basename_CAVM_TAD_CMN_MSMON_CFG_CSU_CTL_NS "TAD_CMN_MSMON_CFG_CSU_CTL_NS"
#define device_bar_CAVM_TAD_CMN_MSMON_CFG_CSU_CTL_NS 0x0 /* PF_BAR0 */
#define busnum_CAVM_TAD_CMN_MSMON_CFG_CSU_CTL_NS 0
#define arguments_CAVM_TAD_CMN_MSMON_CFG_CSU_CTL_NS -1,-1,-1,-1

/**
 * Register (RSL) tad_cmn_msmon_cfg_csu_ctl_s
 *
 * MPAM Memory System Monitor Configure Cache Storage Usage Monitor Control Register
 * Controls the CSU monitor selected by TAD_CMN_MSMON_CFG_MON_SEL_S.
 * TAD_CMN_MSMON_CFG_CSU_CTL_S controls secure cache storage usage monitor instance
 * selected by the secure instance of TAD_CMN_MSMON_CFG_MON_SEL_S.
 */
union cavm_tad_cmn_msmon_cfg_csu_ctl_s
{
    uint64_t u;
    struct cavm_tad_cmn_msmon_cfg_csu_ctl_s_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_32_63        : 32;
        uint64_t en                    : 1;  /**< [ 31: 31](SR/W/H) Enabled.
                                                                 0 = The monitor instance is disabled and must not collect any information.
                                                                 1 = The monitor instance is enabled to collect information according to the
                                                                 configuration of the instance.

                                                                 The value of this field varies with MPAMCFG_PART_SEL[RIS]
                                                                   RIS = MSC:   RAZ/WI
                                                                   RIS = LTG:   R/W
                                                                   RIS = DTG:   R/W
                                                                   RIS = undef: RAZ/WI */
        uint64_t capt_evnt             : 3;  /**< [ 30: 28](SRO) Capture event selector.
                                                                 This MSC does not implement capture events. */
        uint64_t capt_reset            : 1;  /**< [ 27: 27](SRO) Reset after capture.
                                                                 This MSC does not implement capture events. */
        uint64_t oflow_status          : 1;  /**< [ 26: 26](SRO) Overflow status.
                                                                 The CSU monitors in this MSC do not overflow. */
        uint64_t oflow_intr            : 1;  /**< [ 25: 25](SRO) Overflow interrupt.
                                                                 The CSU monitors in this MSC do not overflow. */
        uint64_t oflow_frz             : 1;  /**< [ 24: 24](SRO) Freeze Monitor on Overflow.
                                                                 The CSU monitors in this MSC do not overflow. */
        uint64_t subtype               : 4;  /**< [ 23: 20](SRO) Subtype.
                                                                 This field is not currently used for CSU monitors, but reserved for future use. */
        uint64_t reserved_18_19        : 2;
        uint64_t match_pmg             : 1;  /**< [ 17: 17](SR/W/H) Match PMG.

                                                                 Controls whether the monitor measures only storage used with PMG matching
                                                                 TAD_CMN_MSMON_CFG_CSU_FLT_S[PMG].
                                                                 0 = The monitor measures storage used with any PMG value.
                                                                 1 = The monitor only measures storage used with the PMG value matching
                                                                 TAD_CMN_MSMON_CFG_CSU_FLT_S[PMG].

                                                                 If MATCH_PMG == 1 and MATCH_PARTID == 0, the monitor
                                                                 measures the storage used with matching PMG and with any PARTID.

                                                                 The value of this field varies with MPAMCFG_PART_SEL[RIS]
                                                                   RIS = MSC:   RAZ/WI
                                                                   RIS = LTG:   R/W
                                                                   RIS = DTG:   R/W
                                                                   RIS = undef: RAZ/WI */
        uint64_t match_partid          : 1;  /**< [ 16: 16](SR/W/H) Match PARTID.

                                                                 Controls whether the monitor measures only storage used with PARTID matching
                                                                 TAD_CMN_MSMON_CFG_CSU_FLT_S[PARTID].
                                                                 0 = The monitor measures storage used with any PARTID value.
                                                                 1 = The monitor only measures storage used with the PARTID value matching
                                                                 TAD_CMN_MSMON_CFG_CSU_FLT_S[PARTID].

                                                                 The value of this field varies with MPAMCFG_PART_SEL[RIS]
                                                                   RIS = MSC:   RAZ/WI
                                                                   RIS = LTG:   R/W
                                                                   RIS = DTG:   R/W
                                                                   RIS = undef: RAZ/WI */
        uint64_t reserved_8_15         : 8;
        uint64_t monitor_type          : 8;  /**< [  7:  0](SRO) Monitor Type Code.

                                                                 The value of this field varies with MPAMCFG_PART_SEL[RIS]
                                                                   RIS = MSC:   0
                                                                   RIS = LTG:   0x43
                                                                   RIS = DTG:   0x43
                                                                   RIS = undef: 0 */
#else /* Word 0 - Little Endian */
        uint64_t monitor_type          : 8;  /**< [  7:  0](SRO) Monitor Type Code.

                                                                 The value of this field varies with MPAMCFG_PART_SEL[RIS]
                                                                   RIS = MSC:   0
                                                                   RIS = LTG:   0x43
                                                                   RIS = DTG:   0x43
                                                                   RIS = undef: 0 */
        uint64_t reserved_8_15         : 8;
        uint64_t match_partid          : 1;  /**< [ 16: 16](SR/W/H) Match PARTID.

                                                                 Controls whether the monitor measures only storage used with PARTID matching
                                                                 TAD_CMN_MSMON_CFG_CSU_FLT_S[PARTID].
                                                                 0 = The monitor measures storage used with any PARTID value.
                                                                 1 = The monitor only measures storage used with the PARTID value matching
                                                                 TAD_CMN_MSMON_CFG_CSU_FLT_S[PARTID].

                                                                 The value of this field varies with MPAMCFG_PART_SEL[RIS]
                                                                   RIS = MSC:   RAZ/WI
                                                                   RIS = LTG:   R/W
                                                                   RIS = DTG:   R/W
                                                                   RIS = undef: RAZ/WI */
        uint64_t match_pmg             : 1;  /**< [ 17: 17](SR/W/H) Match PMG.

                                                                 Controls whether the monitor measures only storage used with PMG matching
                                                                 TAD_CMN_MSMON_CFG_CSU_FLT_S[PMG].
                                                                 0 = The monitor measures storage used with any PMG value.
                                                                 1 = The monitor only measures storage used with the PMG value matching
                                                                 TAD_CMN_MSMON_CFG_CSU_FLT_S[PMG].

                                                                 If MATCH_PMG == 1 and MATCH_PARTID == 0, the monitor
                                                                 measures the storage used with matching PMG and with any PARTID.

                                                                 The value of this field varies with MPAMCFG_PART_SEL[RIS]
                                                                   RIS = MSC:   RAZ/WI
                                                                   RIS = LTG:   R/W
                                                                   RIS = DTG:   R/W
                                                                   RIS = undef: RAZ/WI */
        uint64_t reserved_18_19        : 2;
        uint64_t subtype               : 4;  /**< [ 23: 20](SRO) Subtype.
                                                                 This field is not currently used for CSU monitors, but reserved for future use. */
        uint64_t oflow_frz             : 1;  /**< [ 24: 24](SRO) Freeze Monitor on Overflow.
                                                                 The CSU monitors in this MSC do not overflow. */
        uint64_t oflow_intr            : 1;  /**< [ 25: 25](SRO) Overflow interrupt.
                                                                 The CSU monitors in this MSC do not overflow. */
        uint64_t oflow_status          : 1;  /**< [ 26: 26](SRO) Overflow status.
                                                                 The CSU monitors in this MSC do not overflow. */
        uint64_t capt_reset            : 1;  /**< [ 27: 27](SRO) Reset after capture.
                                                                 This MSC does not implement capture events. */
        uint64_t capt_evnt             : 3;  /**< [ 30: 28](SRO) Capture event selector.
                                                                 This MSC does not implement capture events. */
        uint64_t en                    : 1;  /**< [ 31: 31](SR/W/H) Enabled.
                                                                 0 = The monitor instance is disabled and must not collect any information.
                                                                 1 = The monitor instance is enabled to collect information according to the
                                                                 configuration of the instance.

                                                                 The value of this field varies with MPAMCFG_PART_SEL[RIS]
                                                                   RIS = MSC:   RAZ/WI
                                                                   RIS = LTG:   R/W
                                                                   RIS = DTG:   R/W
                                                                   RIS = undef: RAZ/WI */
        uint64_t reserved_32_63        : 32;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_tad_cmn_msmon_cfg_csu_ctl_s_s cn; */
};
typedef union cavm_tad_cmn_msmon_cfg_csu_ctl_s cavm_tad_cmn_msmon_cfg_csu_ctl_s_t;

#define CAVM_TAD_CMN_MSMON_CFG_CSU_CTL_S CAVM_TAD_CMN_MSMON_CFG_CSU_CTL_S_FUNC()
static inline uint64_t CAVM_TAD_CMN_MSMON_CFG_CSU_CTL_S_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_TAD_CMN_MSMON_CFG_CSU_CTL_S_FUNC(void)
{
    if (cavm_is_model(OCTEONTX_CN20KA))
        return 0x87e053020818ll;
    __cavm_csr_fatal("TAD_CMN_MSMON_CFG_CSU_CTL_S", 0, 0, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_TAD_CMN_MSMON_CFG_CSU_CTL_S cavm_tad_cmn_msmon_cfg_csu_ctl_s_t
#define bustype_CAVM_TAD_CMN_MSMON_CFG_CSU_CTL_S CSR_TYPE_RSL
#define basename_CAVM_TAD_CMN_MSMON_CFG_CSU_CTL_S "TAD_CMN_MSMON_CFG_CSU_CTL_S"
#define device_bar_CAVM_TAD_CMN_MSMON_CFG_CSU_CTL_S 0x0 /* PF_BAR0 */
#define busnum_CAVM_TAD_CMN_MSMON_CFG_CSU_CTL_S 0
#define arguments_CAVM_TAD_CMN_MSMON_CFG_CSU_CTL_S -1,-1,-1,-1

/**
 * Register (RSL) tad_cmn_msmon_cfg_csu_flt_ns
 *
 * MPAM Memory System Monitor Configure Cache Storage Usage Monitor Filter Register
 * Configures PARTID and PMG to measure or count in the CSU monitor selected by
 * TAD_CMN_MSMON_CFG_MON_SEL_NS.
 * TAD_CMN_MSMON_CFG_CSU_CTL_NS sets filter conditions for the Non-secure cache storage
 * usage monitor instance
 * selected by the Non-secure instance of TAD_CMN_MSMON_CFG_MON_SEL_NS.
 */
union cavm_tad_cmn_msmon_cfg_csu_flt_ns
{
    uint64_t u;
    struct cavm_tad_cmn_msmon_cfg_csu_flt_ns_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_24_63        : 40;
        uint64_t pmg                   : 8;  /**< [ 23: 16](R/W/H) Performance monitoring group to filter cache storage usage monitoring.

                                                                 If TAD_CMN_MSMON_CFG_CSU_CTL_NS[MATCH_PMG] == 0, this field is not used to match
                                                                 cache storage to a PMG
                                                                 and the contents of this field is ignored.

                                                                 If TAD_CMN_MSMON_CFG_CSU_CTL_NS[MATCH_PMG] == 1 and
                                                                 TAD_CMN_MSMON_CFG_CSU_CTL_NS[MATCH_PARTID] == 1,
                                                                 the monitor instance selected by TAD_CMN_MSMON_CFG_MON_SEL_NS measures or counts cache storage
                                                                 labeled with PMG equal to this field and PARTID equal to the PARTID field.

                                                                 If TAD_CMN_MSMON_CFG_CSU_CTL_NS[MATCH_PMG] == 1 and
                                                                 TAD_CMN_MSMON_CFG_CSU_CTL_NS[MATCH_PARTID] == 0,
                                                                 the behavior of the monitor instance selected by TAD_CMN_MSMON_CFG_MON_SEL_NS is
                                                                 CONSTRAINED UNPREDICTABLE.
                                                                 See TAD_CMN_MSMON_CFG_CSU_CTL_NS[MATCH_PMG] for more information.

                                                                 One bit of PMG is implemented.

                                                                 The value of this field varies with MPAMCFG_PART_SEL[RIS]
                                                                   RIS = MSC:   RAZ/WI
                                                                   RIS = LTG:   R/W
                                                                   RIS = DTG:   R/W
                                                                   RIS = undef: RAZ/WI */
        uint64_t partid                : 16; /**< [ 15:  0](R/W/H) Partition ID to filter cache storage usage monitoring.

                                                                 If TAD_CMN_MSMON_CFG_CSU_CTL_NS[MATCH_PARTID] == 0 and
                                                                 TAD_CMN_MSMON_CFG_CSU_CTL_NS[MATCH_PMG] == 0, the monitor measures all allocated cache storage.

                                                                 If TAD_CMN_MSMON_CFG_CSU_CTL_NS[MATCH_PARTID] == 0 and
                                                                 TAD_CMN_MSMON_CFG_CSU_CTL_NS[MATCH_PMG] == 1,
                                                                 the behavior of the monitor is CONSTRAINED UNPREDICTABLE.
                                                                 See the description of TAD_CMN_MSMON_CFG_CSU_CTL_NS[MATCH_PMG].

                                                                 If TAD_CMN_MSMON_CFG_CSU_CTL_NS[MATCH_PARTID] == 1 and
                                                                 TAD_CMN_MSMON_CFG_CSU_CTL_NS[MATCH_PMG] == 0,
                                                                 the monitor selected by TAD_CMN_MSMON_CFG_MON_SEL_NS measures or counts cache storage
                                                                 labeled with PARTID equal to this field.

                                                                 If TAD_CMN_MSMON_CFG_CSU_CTL_NS[MATCH_PARTID] == 1 and
                                                                 TAD_CMN_MSMON_CFG_CSU_CTL_NS[MATCH_PMG] == 1,
                                                                 the monitor selected by TAD_CMN_MSMON_CFG_MON_SEL_NS measures or counts cache storage
                                                                 labeled with PARTID equal to this field and PMG equal to the PMG field.

                                                                 Eight bits of non-secure PARTID are implemented.

                                                                 The value of this field varies with MPAMCFG_PART_SEL[RIS]
                                                                   RIS = MSC:   RAZ/WI
                                                                   RIS = LTG:   R/W
                                                                   RIS = DTG:   R/W
                                                                   RIS = undef: RAZ/WI */
#else /* Word 0 - Little Endian */
        uint64_t partid                : 16; /**< [ 15:  0](R/W/H) Partition ID to filter cache storage usage monitoring.

                                                                 If TAD_CMN_MSMON_CFG_CSU_CTL_NS[MATCH_PARTID] == 0 and
                                                                 TAD_CMN_MSMON_CFG_CSU_CTL_NS[MATCH_PMG] == 0, the monitor measures all allocated cache storage.

                                                                 If TAD_CMN_MSMON_CFG_CSU_CTL_NS[MATCH_PARTID] == 0 and
                                                                 TAD_CMN_MSMON_CFG_CSU_CTL_NS[MATCH_PMG] == 1,
                                                                 the behavior of the monitor is CONSTRAINED UNPREDICTABLE.
                                                                 See the description of TAD_CMN_MSMON_CFG_CSU_CTL_NS[MATCH_PMG].

                                                                 If TAD_CMN_MSMON_CFG_CSU_CTL_NS[MATCH_PARTID] == 1 and
                                                                 TAD_CMN_MSMON_CFG_CSU_CTL_NS[MATCH_PMG] == 0,
                                                                 the monitor selected by TAD_CMN_MSMON_CFG_MON_SEL_NS measures or counts cache storage
                                                                 labeled with PARTID equal to this field.

                                                                 If TAD_CMN_MSMON_CFG_CSU_CTL_NS[MATCH_PARTID] == 1 and
                                                                 TAD_CMN_MSMON_CFG_CSU_CTL_NS[MATCH_PMG] == 1,
                                                                 the monitor selected by TAD_CMN_MSMON_CFG_MON_SEL_NS measures or counts cache storage
                                                                 labeled with PARTID equal to this field and PMG equal to the PMG field.

                                                                 Eight bits of non-secure PARTID are implemented.

                                                                 The value of this field varies with MPAMCFG_PART_SEL[RIS]
                                                                   RIS = MSC:   RAZ/WI
                                                                   RIS = LTG:   R/W
                                                                   RIS = DTG:   R/W
                                                                   RIS = undef: RAZ/WI */
        uint64_t pmg                   : 8;  /**< [ 23: 16](R/W/H) Performance monitoring group to filter cache storage usage monitoring.

                                                                 If TAD_CMN_MSMON_CFG_CSU_CTL_NS[MATCH_PMG] == 0, this field is not used to match
                                                                 cache storage to a PMG
                                                                 and the contents of this field is ignored.

                                                                 If TAD_CMN_MSMON_CFG_CSU_CTL_NS[MATCH_PMG] == 1 and
                                                                 TAD_CMN_MSMON_CFG_CSU_CTL_NS[MATCH_PARTID] == 1,
                                                                 the monitor instance selected by TAD_CMN_MSMON_CFG_MON_SEL_NS measures or counts cache storage
                                                                 labeled with PMG equal to this field and PARTID equal to the PARTID field.

                                                                 If TAD_CMN_MSMON_CFG_CSU_CTL_NS[MATCH_PMG] == 1 and
                                                                 TAD_CMN_MSMON_CFG_CSU_CTL_NS[MATCH_PARTID] == 0,
                                                                 the behavior of the monitor instance selected by TAD_CMN_MSMON_CFG_MON_SEL_NS is
                                                                 CONSTRAINED UNPREDICTABLE.
                                                                 See TAD_CMN_MSMON_CFG_CSU_CTL_NS[MATCH_PMG] for more information.

                                                                 One bit of PMG is implemented.

                                                                 The value of this field varies with MPAMCFG_PART_SEL[RIS]
                                                                   RIS = MSC:   RAZ/WI
                                                                   RIS = LTG:   R/W
                                                                   RIS = DTG:   R/W
                                                                   RIS = undef: RAZ/WI */
        uint64_t reserved_24_63        : 40;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_tad_cmn_msmon_cfg_csu_flt_ns_s cn; */
};
typedef union cavm_tad_cmn_msmon_cfg_csu_flt_ns cavm_tad_cmn_msmon_cfg_csu_flt_ns_t;

#define CAVM_TAD_CMN_MSMON_CFG_CSU_FLT_NS CAVM_TAD_CMN_MSMON_CFG_CSU_FLT_NS_FUNC()
static inline uint64_t CAVM_TAD_CMN_MSMON_CFG_CSU_FLT_NS_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_TAD_CMN_MSMON_CFG_CSU_FLT_NS_FUNC(void)
{
    if (cavm_is_model(OCTEONTX_CN20KA))
        return 0x87e053010810ll;
    __cavm_csr_fatal("TAD_CMN_MSMON_CFG_CSU_FLT_NS", 0, 0, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_TAD_CMN_MSMON_CFG_CSU_FLT_NS cavm_tad_cmn_msmon_cfg_csu_flt_ns_t
#define bustype_CAVM_TAD_CMN_MSMON_CFG_CSU_FLT_NS CSR_TYPE_RSL
#define basename_CAVM_TAD_CMN_MSMON_CFG_CSU_FLT_NS "TAD_CMN_MSMON_CFG_CSU_FLT_NS"
#define device_bar_CAVM_TAD_CMN_MSMON_CFG_CSU_FLT_NS 0x0 /* PF_BAR0 */
#define busnum_CAVM_TAD_CMN_MSMON_CFG_CSU_FLT_NS 0
#define arguments_CAVM_TAD_CMN_MSMON_CFG_CSU_FLT_NS -1,-1,-1,-1

/**
 * Register (RSL) tad_cmn_msmon_cfg_csu_flt_s
 *
 * MPAM Memory System Monitor Configure Cache Storage Usage Monitor Filter Register
 * Configures PARTID and PMG to measure or count in the CSU monitor selected by
 * TAD_CMN_MSMON_CFG_MON_SEL_S.
 * TAD_CMN_MSMON_CFG_CSU_CTL_S sets filter conditions for the secure cache storage
 * usage monitor instance
 * selected by the secure instance of TAD_CMN_MSMON_CFG_MON_SEL_S.
 */
union cavm_tad_cmn_msmon_cfg_csu_flt_s
{
    uint64_t u;
    struct cavm_tad_cmn_msmon_cfg_csu_flt_s_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_24_63        : 40;
        uint64_t pmg                   : 8;  /**< [ 23: 16](SR/W/H) Performance monitoring group to filter cache storage usage monitoring.

                                                                 If TAD_CMN_MSMON_CFG_CSU_CTL_S[MATCH_PMG] == 0, this field is not used to match
                                                                 cache storage to a PMG
                                                                 and the contents of this field is ignored.

                                                                 If TAD_CMN_MSMON_CFG_CSU_CTL_S[MATCH_PMG] == 1 and TAD_CMN_MSMON_CFG_CSU_CTL_S[MATCH_PARTID] == 1,
                                                                 the monitor instance selected by TAD_CMN_MSMON_CFG_MON_SEL_S measures or counts cache storage
                                                                 labeled with PMG equal to this field and PARTID equal to the PARTID field.

                                                                 If TAD_CMN_MSMON_CFG_CSU_CTL_S[MATCH_PMG] == 1 and TAD_CMN_MSMON_CFG_CSU_CTL_S[MATCH_PARTID] == 0,
                                                                 the behavior of the monitor instance selected by TAD_CMN_MSMON_CFG_MON_SEL_S is
                                                                 CONSTRAINED UNPREDICTABLE.
                                                                 See TAD_CMN_MSMON_CFG_CSU_CTL_S[MATCH_PMG] for more information.

                                                                 One bit of PMG is implemented.

                                                                 The value of this field varies with MPAMCFG_PART_SEL[RIS]
                                                                   RIS = MSC:   RAZ/WI
                                                                   RIS = LTG:   R/W
                                                                   RIS = DTG:   R/W
                                                                   RIS = undef: RAZ/WI */
        uint64_t partid                : 16; /**< [ 15:  0](SR/W/H) Partition ID to filter cache storage usage monitoring.

                                                                 If TAD_CMN_MSMON_CFG_CSU_CTL_S[MATCH_PARTID] == 0 and
                                                                 TAD_CMN_MSMON_CFG_CSU_CTL_S[MATCH_PMG] == 0, the monitor measures all allocated cache storage.

                                                                 If TAD_CMN_MSMON_CFG_CSU_CTL_S[MATCH_PARTID] == 0 and TAD_CMN_MSMON_CFG_CSU_CTL_S[MATCH_PMG] == 1,
                                                                 the behavior of the monitor is CONSTRAINED UNPREDICTABLE.
                                                                 See the description of TAD_CMN_MSMON_CFG_CSU_CTL_S[MATCH_PMG].

                                                                 If TAD_CMN_MSMON_CFG_CSU_CTL_S[MATCH_PARTID] == 1 and TAD_CMN_MSMON_CFG_CSU_CTL_S[MATCH_PMG] == 0,
                                                                 the monitor selected by TAD_CMN_MSMON_CFG_MON_SEL_S measures or counts cache storage
                                                                 labeled with PARTID equal to this field.

                                                                 If TAD_CMN_MSMON_CFG_CSU_CTL_S[MATCH_PARTID] == 1 and TAD_CMN_MSMON_CFG_CSU_CTL_S[MATCH_PMG] == 1,
                                                                 the monitor selected by TAD_CMN_MSMON_CFG_MON_SEL_S measures or counts cache storage
                                                                 labeled with PARTID equal to this field and PMG equal to the PMG field.

                                                                 Four bits of secure PARTID are implemented.

                                                                 The value of this field varies with MPAMCFG_PART_SEL[RIS]
                                                                   RIS = MSC:   RAZ/WI
                                                                   RIS = LTG:   R/W
                                                                   RIS = DTG:   R/W
                                                                   RIS = undef: RAZ/WI */
#else /* Word 0 - Little Endian */
        uint64_t partid                : 16; /**< [ 15:  0](SR/W/H) Partition ID to filter cache storage usage monitoring.

                                                                 If TAD_CMN_MSMON_CFG_CSU_CTL_S[MATCH_PARTID] == 0 and
                                                                 TAD_CMN_MSMON_CFG_CSU_CTL_S[MATCH_PMG] == 0, the monitor measures all allocated cache storage.

                                                                 If TAD_CMN_MSMON_CFG_CSU_CTL_S[MATCH_PARTID] == 0 and TAD_CMN_MSMON_CFG_CSU_CTL_S[MATCH_PMG] == 1,
                                                                 the behavior of the monitor is CONSTRAINED UNPREDICTABLE.
                                                                 See the description of TAD_CMN_MSMON_CFG_CSU_CTL_S[MATCH_PMG].

                                                                 If TAD_CMN_MSMON_CFG_CSU_CTL_S[MATCH_PARTID] == 1 and TAD_CMN_MSMON_CFG_CSU_CTL_S[MATCH_PMG] == 0,
                                                                 the monitor selected by TAD_CMN_MSMON_CFG_MON_SEL_S measures or counts cache storage
                                                                 labeled with PARTID equal to this field.

                                                                 If TAD_CMN_MSMON_CFG_CSU_CTL_S[MATCH_PARTID] == 1 and TAD_CMN_MSMON_CFG_CSU_CTL_S[MATCH_PMG] == 1,
                                                                 the monitor selected by TAD_CMN_MSMON_CFG_MON_SEL_S measures or counts cache storage
                                                                 labeled with PARTID equal to this field and PMG equal to the PMG field.

                                                                 Four bits of secure PARTID are implemented.

                                                                 The value of this field varies with MPAMCFG_PART_SEL[RIS]
                                                                   RIS = MSC:   RAZ/WI
                                                                   RIS = LTG:   R/W
                                                                   RIS = DTG:   R/W
                                                                   RIS = undef: RAZ/WI */
        uint64_t pmg                   : 8;  /**< [ 23: 16](SR/W/H) Performance monitoring group to filter cache storage usage monitoring.

                                                                 If TAD_CMN_MSMON_CFG_CSU_CTL_S[MATCH_PMG] == 0, this field is not used to match
                                                                 cache storage to a PMG
                                                                 and the contents of this field is ignored.

                                                                 If TAD_CMN_MSMON_CFG_CSU_CTL_S[MATCH_PMG] == 1 and TAD_CMN_MSMON_CFG_CSU_CTL_S[MATCH_PARTID] == 1,
                                                                 the monitor instance selected by TAD_CMN_MSMON_CFG_MON_SEL_S measures or counts cache storage
                                                                 labeled with PMG equal to this field and PARTID equal to the PARTID field.

                                                                 If TAD_CMN_MSMON_CFG_CSU_CTL_S[MATCH_PMG] == 1 and TAD_CMN_MSMON_CFG_CSU_CTL_S[MATCH_PARTID] == 0,
                                                                 the behavior of the monitor instance selected by TAD_CMN_MSMON_CFG_MON_SEL_S is
                                                                 CONSTRAINED UNPREDICTABLE.
                                                                 See TAD_CMN_MSMON_CFG_CSU_CTL_S[MATCH_PMG] for more information.

                                                                 One bit of PMG is implemented.

                                                                 The value of this field varies with MPAMCFG_PART_SEL[RIS]
                                                                   RIS = MSC:   RAZ/WI
                                                                   RIS = LTG:   R/W
                                                                   RIS = DTG:   R/W
                                                                   RIS = undef: RAZ/WI */
        uint64_t reserved_24_63        : 40;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_tad_cmn_msmon_cfg_csu_flt_s_s cn; */
};
typedef union cavm_tad_cmn_msmon_cfg_csu_flt_s cavm_tad_cmn_msmon_cfg_csu_flt_s_t;

#define CAVM_TAD_CMN_MSMON_CFG_CSU_FLT_S CAVM_TAD_CMN_MSMON_CFG_CSU_FLT_S_FUNC()
static inline uint64_t CAVM_TAD_CMN_MSMON_CFG_CSU_FLT_S_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_TAD_CMN_MSMON_CFG_CSU_FLT_S_FUNC(void)
{
    if (cavm_is_model(OCTEONTX_CN20KA))
        return 0x87e053020810ll;
    __cavm_csr_fatal("TAD_CMN_MSMON_CFG_CSU_FLT_S", 0, 0, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_TAD_CMN_MSMON_CFG_CSU_FLT_S cavm_tad_cmn_msmon_cfg_csu_flt_s_t
#define bustype_CAVM_TAD_CMN_MSMON_CFG_CSU_FLT_S CSR_TYPE_RSL
#define basename_CAVM_TAD_CMN_MSMON_CFG_CSU_FLT_S "TAD_CMN_MSMON_CFG_CSU_FLT_S"
#define device_bar_CAVM_TAD_CMN_MSMON_CFG_CSU_FLT_S 0x0 /* PF_BAR0 */
#define busnum_CAVM_TAD_CMN_MSMON_CFG_CSU_FLT_S 0
#define arguments_CAVM_TAD_CMN_MSMON_CFG_CSU_FLT_S -1,-1,-1,-1

/**
 * Register (RSL) tad_cmn_msmon_cfg_mon_sel_ns
 *
 * MPAM Monitor Instance Selection Register
 * Selects a monitor instance to access through the MSMON configuration and counter
 * registers. TAD_CMN_MSMON_CFG_MON_SEL_NS selects a Non-secure monitor instance
 * to access via the Non-secure MPAM feature page.
 *
 * To configure a monitor, set MON_SEL in this register to the index of the monitor
 * instance to configure, then write to the MSMON_CFG_x register to set the
 * configuration of the monitor. At a later time, read the monitor register (for
 * example TAD_MSMON_CSU_NS) to get the value of the monitor.
 */
union cavm_tad_cmn_msmon_cfg_mon_sel_ns
{
    uint64_t u;
    struct cavm_tad_cmn_msmon_cfg_mon_sel_ns_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_28_63        : 36;
        uint64_t ris                   : 4;  /**< [ 27: 24](R/W) Resource Instance Selector. RIS selects one resource to configure through MSMON_CFG registers.
                                                                 Enumerated by TAD_CMN_MPAM_RIS_E.

                                                                 Two bits of RIS are implemented. */
        uint64_t reserved_16_23        : 8;
        uint64_t mon_sel               : 16; /**< [ 15:  0](R/W) Selects the monitor instance to configure or read.

                                                                 There is one monitor, so zero bits of MON_SEL are implemented. */
#else /* Word 0 - Little Endian */
        uint64_t mon_sel               : 16; /**< [ 15:  0](R/W) Selects the monitor instance to configure or read.

                                                                 There is one monitor, so zero bits of MON_SEL are implemented. */
        uint64_t reserved_16_23        : 8;
        uint64_t ris                   : 4;  /**< [ 27: 24](R/W) Resource Instance Selector. RIS selects one resource to configure through MSMON_CFG registers.
                                                                 Enumerated by TAD_CMN_MPAM_RIS_E.

                                                                 Two bits of RIS are implemented. */
        uint64_t reserved_28_63        : 36;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_tad_cmn_msmon_cfg_mon_sel_ns_s cn; */
};
typedef union cavm_tad_cmn_msmon_cfg_mon_sel_ns cavm_tad_cmn_msmon_cfg_mon_sel_ns_t;

#define CAVM_TAD_CMN_MSMON_CFG_MON_SEL_NS CAVM_TAD_CMN_MSMON_CFG_MON_SEL_NS_FUNC()
static inline uint64_t CAVM_TAD_CMN_MSMON_CFG_MON_SEL_NS_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_TAD_CMN_MSMON_CFG_MON_SEL_NS_FUNC(void)
{
    if (cavm_is_model(OCTEONTX_CN20KA))
        return 0x87e053010800ll;
    __cavm_csr_fatal("TAD_CMN_MSMON_CFG_MON_SEL_NS", 0, 0, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_TAD_CMN_MSMON_CFG_MON_SEL_NS cavm_tad_cmn_msmon_cfg_mon_sel_ns_t
#define bustype_CAVM_TAD_CMN_MSMON_CFG_MON_SEL_NS CSR_TYPE_RSL
#define basename_CAVM_TAD_CMN_MSMON_CFG_MON_SEL_NS "TAD_CMN_MSMON_CFG_MON_SEL_NS"
#define device_bar_CAVM_TAD_CMN_MSMON_CFG_MON_SEL_NS 0x0 /* PF_BAR0 */
#define busnum_CAVM_TAD_CMN_MSMON_CFG_MON_SEL_NS 0
#define arguments_CAVM_TAD_CMN_MSMON_CFG_MON_SEL_NS -1,-1,-1,-1

/**
 * Register (RSL) tad_cmn_msmon_cfg_mon_sel_s
 *
 * MPAM Monitor Instance Selection Register
 * Selects a monitor instance to access through the MSMON configuration and counter
 * registers. TAD_CMN_MSMON_CFG_MON_SEL_S selects a secure monitor instance
 * to access via the secure MPAM feature page.
 *
 * To configure a monitor, set MON_SEL in this register to the index of the monitor
 * instance to configure, then write to the MSMON_CFG_x register to set the
 * configuration of the monitor. At a later time, read the monitor register (for
 * example TAD_MSMON_CSU_S) to get the value of the monitor.
 */
union cavm_tad_cmn_msmon_cfg_mon_sel_s
{
    uint64_t u;
    struct cavm_tad_cmn_msmon_cfg_mon_sel_s_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_28_63        : 36;
        uint64_t ris                   : 4;  /**< [ 27: 24](SR/W) Resource Instance Selector. RIS selects one resource to configure through MSMON_CFG registers.
                                                                 Enumerated by TAD_CMN_MPAM_RIS_E.

                                                                 Two bits of RIS are implemented. */
        uint64_t reserved_16_23        : 8;
        uint64_t mon_sel               : 16; /**< [ 15:  0](SR/W) Selects the monitor instance to configure or read.

                                                                 There is one monitor, so zero bits of MON_SEL are implemented. */
#else /* Word 0 - Little Endian */
        uint64_t mon_sel               : 16; /**< [ 15:  0](SR/W) Selects the monitor instance to configure or read.

                                                                 There is one monitor, so zero bits of MON_SEL are implemented. */
        uint64_t reserved_16_23        : 8;
        uint64_t ris                   : 4;  /**< [ 27: 24](SR/W) Resource Instance Selector. RIS selects one resource to configure through MSMON_CFG registers.
                                                                 Enumerated by TAD_CMN_MPAM_RIS_E.

                                                                 Two bits of RIS are implemented. */
        uint64_t reserved_28_63        : 36;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_tad_cmn_msmon_cfg_mon_sel_s_s cn; */
};
typedef union cavm_tad_cmn_msmon_cfg_mon_sel_s cavm_tad_cmn_msmon_cfg_mon_sel_s_t;

#define CAVM_TAD_CMN_MSMON_CFG_MON_SEL_S CAVM_TAD_CMN_MSMON_CFG_MON_SEL_S_FUNC()
static inline uint64_t CAVM_TAD_CMN_MSMON_CFG_MON_SEL_S_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_TAD_CMN_MSMON_CFG_MON_SEL_S_FUNC(void)
{
    if (cavm_is_model(OCTEONTX_CN20KA))
        return 0x87e053020800ll;
    __cavm_csr_fatal("TAD_CMN_MSMON_CFG_MON_SEL_S", 0, 0, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_TAD_CMN_MSMON_CFG_MON_SEL_S cavm_tad_cmn_msmon_cfg_mon_sel_s_t
#define bustype_CAVM_TAD_CMN_MSMON_CFG_MON_SEL_S CSR_TYPE_RSL
#define basename_CAVM_TAD_CMN_MSMON_CFG_MON_SEL_S "TAD_CMN_MSMON_CFG_MON_SEL_S"
#define device_bar_CAVM_TAD_CMN_MSMON_CFG_MON_SEL_S 0x0 /* PF_BAR0 */
#define busnum_CAVM_TAD_CMN_MSMON_CFG_MON_SEL_S 0
#define arguments_CAVM_TAD_CMN_MSMON_CFG_MON_SEL_S -1,-1,-1,-1

/**
 * Register (RSL) tad_cmn_msmon_csu_ns
 *
 * MPAM Cache Storage Usage Monitor Register
 * Accesses the CSU monitor selected by TAD_CMN_MSMON_CFG_MON_SEL_NS.
 * TAD_MSMON_CSU_NS is the Non-secure cache storage usage monitor instance selected by the
 * Non-secure instance of TAD_CMN_MSMON_CFG_MON_SEL_NS.
 */
union cavm_tad_cmn_msmon_csu_ns
{
    uint64_t u;
    struct cavm_tad_cmn_msmon_csu_ns_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_32_63        : 32;
        uint64_t nrdy                  : 1;  /**< [ 31: 31](RO/H) Not Ready. Indicates whether the monitor has possibly inaccurate data.

                                                                 0 = The monitor is ready and the VALUE fields is accurate.
                                                                 1 = The monitor is not ready and the contents of the VALUE field might be
                                                                 inaccurate or otherwise not represent the actual cache storage usage.

                                                                 The value of this field varies with MPAMCFG_PART_SEL[RIS]
                                                                   RIS = MSC:   0
                                                                   RIS = LTG:   valid (reset 1)
                                                                   RIS = DTG:   valid (reset 1)
                                                                   RIS = undef: 0 */
        uint64_t value                 : 31; /**< [ 30:  0](RO/H) Cache storage usage value if NRDY == 0. Invalid if NRDY == 1.

                                                                 VALUE is the cache storage usage in bytes meeting the criteria set in TAD_CMN_MSMON_CFG_CSU_FLT_NS
                                                                 and TAD_CMN_MSMON_CFG_CSU_CTL_NS for the monitor instance selected by TAD_CMN_MSMON_CFG_MON_SEL_NS
                                                                 and multiplied by the number of TADs.

                                                                 The value of this field varies with MPAMCFG_PART_SEL[RIS]
                                                                   RIS = MSC:   0
                                                                   RIS = LTG:   valid
                                                                   RIS = DTG:   valid
                                                                   RIS = undef: 0 */
#else /* Word 0 - Little Endian */
        uint64_t value                 : 31; /**< [ 30:  0](RO/H) Cache storage usage value if NRDY == 0. Invalid if NRDY == 1.

                                                                 VALUE is the cache storage usage in bytes meeting the criteria set in TAD_CMN_MSMON_CFG_CSU_FLT_NS
                                                                 and TAD_CMN_MSMON_CFG_CSU_CTL_NS for the monitor instance selected by TAD_CMN_MSMON_CFG_MON_SEL_NS
                                                                 and multiplied by the number of TADs.

                                                                 The value of this field varies with MPAMCFG_PART_SEL[RIS]
                                                                   RIS = MSC:   0
                                                                   RIS = LTG:   valid
                                                                   RIS = DTG:   valid
                                                                   RIS = undef: 0 */
        uint64_t nrdy                  : 1;  /**< [ 31: 31](RO/H) Not Ready. Indicates whether the monitor has possibly inaccurate data.

                                                                 0 = The monitor is ready and the VALUE fields is accurate.
                                                                 1 = The monitor is not ready and the contents of the VALUE field might be
                                                                 inaccurate or otherwise not represent the actual cache storage usage.

                                                                 The value of this field varies with MPAMCFG_PART_SEL[RIS]
                                                                   RIS = MSC:   0
                                                                   RIS = LTG:   valid (reset 1)
                                                                   RIS = DTG:   valid (reset 1)
                                                                   RIS = undef: 0 */
        uint64_t reserved_32_63        : 32;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_tad_cmn_msmon_csu_ns_s cn; */
};
typedef union cavm_tad_cmn_msmon_csu_ns cavm_tad_cmn_msmon_csu_ns_t;

#define CAVM_TAD_CMN_MSMON_CSU_NS CAVM_TAD_CMN_MSMON_CSU_NS_FUNC()
static inline uint64_t CAVM_TAD_CMN_MSMON_CSU_NS_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_TAD_CMN_MSMON_CSU_NS_FUNC(void)
{
    if (cavm_is_model(OCTEONTX_CN20KA))
        return 0x87e053010840ll;
    __cavm_csr_fatal("TAD_CMN_MSMON_CSU_NS", 0, 0, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_TAD_CMN_MSMON_CSU_NS cavm_tad_cmn_msmon_csu_ns_t
#define bustype_CAVM_TAD_CMN_MSMON_CSU_NS CSR_TYPE_RSL
#define basename_CAVM_TAD_CMN_MSMON_CSU_NS "TAD_CMN_MSMON_CSU_NS"
#define device_bar_CAVM_TAD_CMN_MSMON_CSU_NS 0x0 /* PF_BAR0 */
#define busnum_CAVM_TAD_CMN_MSMON_CSU_NS 0
#define arguments_CAVM_TAD_CMN_MSMON_CSU_NS -1,-1,-1,-1

/**
 * Register (RSL) tad_cmn_msmon_csu_s
 *
 * MPAM Cache Storage Usage Monitor Register
 * Accesses the CSU monitor selected by TAD_CMN_MSMON_CFG_MON_SEL_S.
 * TAD_MSMON_CSU_S is the secure cache storage usage monitor instance selected by the
 * Non-secure instance of TAD_CMN_MSMON_CFG_MON_SEL_S.
 */
union cavm_tad_cmn_msmon_csu_s
{
    uint64_t u;
    struct cavm_tad_cmn_msmon_csu_s_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_32_63        : 32;
        uint64_t nrdy                  : 1;  /**< [ 31: 31](SRO/H) Not Ready. Indicates whether the monitor has possibly inaccurate data.

                                                                 0 = The monitor is ready and the VALUE fields is accurate.
                                                                 1 = The monitor is not ready and the contents of the VALUE field might be
                                                                 inaccurate or otherwise not represent the actual cache storage usage.

                                                                 The value of this field varies with MPAMCFG_PART_SEL[RIS]
                                                                   RIS = MSC:   0
                                                                   RIS = LTG:   valid (reset 1)
                                                                   RIS = DTG:   valid (reset 1)
                                                                   RIS = undef: 0 */
        uint64_t value                 : 31; /**< [ 30:  0](SRO/H) Cache storage usage value if [NRDY] = 0. Invalid if [NRDY] = 1.

                                                                 VALUE is the cache storage usage in bytes meeting the criteria set in TAD_CMN_MSMON_CFG_CSU_FLT_S
                                                                 and TAD_CMN_MSMON_CFG_CSU_CTL_S for the monitor instance selected by TAD_CMN_MSMON_CFG_MON_SEL_S
                                                                 and multiplied by the number of TADs.

                                                                 The value of this field varies with MPAMCFG_PART_SEL[RIS]
                                                                   RIS = MSC:   0
                                                                   RIS = LTG:   valid
                                                                   RIS = DTG:   valid
                                                                   RIS = undef: 0 */
#else /* Word 0 - Little Endian */
        uint64_t value                 : 31; /**< [ 30:  0](SRO/H) Cache storage usage value if [NRDY] = 0. Invalid if [NRDY] = 1.

                                                                 VALUE is the cache storage usage in bytes meeting the criteria set in TAD_CMN_MSMON_CFG_CSU_FLT_S
                                                                 and TAD_CMN_MSMON_CFG_CSU_CTL_S for the monitor instance selected by TAD_CMN_MSMON_CFG_MON_SEL_S
                                                                 and multiplied by the number of TADs.

                                                                 The value of this field varies with MPAMCFG_PART_SEL[RIS]
                                                                   RIS = MSC:   0
                                                                   RIS = LTG:   valid
                                                                   RIS = DTG:   valid
                                                                   RIS = undef: 0 */
        uint64_t nrdy                  : 1;  /**< [ 31: 31](SRO/H) Not Ready. Indicates whether the monitor has possibly inaccurate data.

                                                                 0 = The monitor is ready and the VALUE fields is accurate.
                                                                 1 = The monitor is not ready and the contents of the VALUE field might be
                                                                 inaccurate or otherwise not represent the actual cache storage usage.

                                                                 The value of this field varies with MPAMCFG_PART_SEL[RIS]
                                                                   RIS = MSC:   0
                                                                   RIS = LTG:   valid (reset 1)
                                                                   RIS = DTG:   valid (reset 1)
                                                                   RIS = undef: 0 */
        uint64_t reserved_32_63        : 32;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_tad_cmn_msmon_csu_s_s cn; */
};
typedef union cavm_tad_cmn_msmon_csu_s cavm_tad_cmn_msmon_csu_s_t;

#define CAVM_TAD_CMN_MSMON_CSU_S CAVM_TAD_CMN_MSMON_CSU_S_FUNC()
static inline uint64_t CAVM_TAD_CMN_MSMON_CSU_S_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_TAD_CMN_MSMON_CSU_S_FUNC(void)
{
    if (cavm_is_model(OCTEONTX_CN20KA))
        return 0x87e053020840ll;
    __cavm_csr_fatal("TAD_CMN_MSMON_CSU_S", 0, 0, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_TAD_CMN_MSMON_CSU_S cavm_tad_cmn_msmon_csu_s_t
#define bustype_CAVM_TAD_CMN_MSMON_CSU_S CSR_TYPE_RSL
#define basename_CAVM_TAD_CMN_MSMON_CSU_S "TAD_CMN_MSMON_CSU_S"
#define device_bar_CAVM_TAD_CMN_MSMON_CSU_S 0x0 /* PF_BAR0 */
#define busnum_CAVM_TAD_CMN_MSMON_CSU_S 0
#define arguments_CAVM_TAD_CMN_MSMON_CSU_S -1,-1,-1,-1

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
        uint64_t reserved_29_63        : 35;
        uint64_t num_rsvd_sbf          : 6;  /**< [ 28: 23](SR/W) This register sets the number of SBF entries to reserve for requests
                                                                 that are ready to be sent. These entries will not be pre-allocated to requests
                                                                 that are waiting for same address or exclusive transaction conflicts.

                                                                 Cannot be set to 0. */
        uint64_t max_wait_sbf          : 7;  /**< [ 22: 16](SR/W) This register sets the max number of SBF entries to allocate to a group of
                                                                 REQs that are waiting on same address or exclusive transaction conflicts.

                                                                 Cannot be set to 0. */
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
        uint64_t max_wait_sbf          : 7;  /**< [ 22: 16](SR/W) This register sets the max number of SBF entries to allocate to a group of
                                                                 REQs that are waiting on same address or exclusive transaction conflicts.

                                                                 Cannot be set to 0. */
        uint64_t num_rsvd_sbf          : 6;  /**< [ 28: 23](SR/W) This register sets the number of SBF entries to reserve for requests
                                                                 that are ready to be sent. These entries will not be pre-allocated to requests
                                                                 that are waiting for same address or exclusive transaction conflicts.

                                                                 Cannot be set to 0. */
        uint64_t reserved_29_63        : 35;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_tad_cmn_req_retry_s cn; */
};
typedef union cavm_tad_cmn_req_retry cavm_tad_cmn_req_retry_t;

#define CAVM_TAD_CMN_REQ_RETRY CAVM_TAD_CMN_REQ_RETRY_FUNC()
static inline uint64_t CAVM_TAD_CMN_REQ_RETRY_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_TAD_CMN_REQ_RETRY_FUNC(void)
{
    if (cavm_is_model(OCTEONTX_CN20KA))
        return 0x87e053000018ll;
    __cavm_csr_fatal("TAD_CMN_REQ_RETRY", 0, 0, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_TAD_CMN_REQ_RETRY cavm_tad_cmn_req_retry_t
#define bustype_CAVM_TAD_CMN_REQ_RETRY CSR_TYPE_RSL
#define basename_CAVM_TAD_CMN_REQ_RETRY "TAD_CMN_REQ_RETRY"
#define device_bar_CAVM_TAD_CMN_REQ_RETRY 0x0 /* PF_BAR0 */
#define busnum_CAVM_TAD_CMN_REQ_RETRY 0
#define arguments_CAVM_TAD_CMN_REQ_RETRY -1,-1,-1,-1

/**
 * Register (RSL) tad_cmn_scr_ctl
 *
 * TAD Common Scratchpad Control Register
 * Controls TAD Scratchpad settings.
 */
union cavm_tad_cmn_scr_ctl
{
    uint64_t u;
    struct cavm_tad_cmn_scr_ctl_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t maxsize               : 5;  /**< [ 63: 59](SRO) Maximum legal value for SIZE field. */
        uint64_t chunkways             : 5;  /**< [ 58: 54](SRO) Number of LTG ways used for each scratchpad chunk. */
        uint64_t reserved_6_53         : 48;
        uint64_t disnxm                : 1;  /**< [  5:  5](SR/W) When set do not NXM requests outside the scratchpad address space. Instead they
                                                                 are allowed to proceed as normal to DRAM. Useful when testing DRAM while
                                                                 executing from scratchpad region. */
        uint64_t size                  : 5;  /**< [  4:  0](SR/W) Size (in chunks) of scratchpad region. Must range from 0 (none, scratchpad
                                                                 disabled) to [MAXSIZE] chunks. The size of the chunks are based on the number of
                                                                 ways per chunk ([CHUNKWAYS]). These combined with TAD_CMN_CONST[LTGSETS] and
                                                                 TAD_CMN_CONST[NUM_TAD] can be used to determine the full size of the scratchpad
                                                                 address space. */
#else /* Word 0 - Little Endian */
        uint64_t size                  : 5;  /**< [  4:  0](SR/W) Size (in chunks) of scratchpad region. Must range from 0 (none, scratchpad
                                                                 disabled) to [MAXSIZE] chunks. The size of the chunks are based on the number of
                                                                 ways per chunk ([CHUNKWAYS]). These combined with TAD_CMN_CONST[LTGSETS] and
                                                                 TAD_CMN_CONST[NUM_TAD] can be used to determine the full size of the scratchpad
                                                                 address space. */
        uint64_t disnxm                : 1;  /**< [  5:  5](SR/W) When set do not NXM requests outside the scratchpad address space. Instead they
                                                                 are allowed to proceed as normal to DRAM. Useful when testing DRAM while
                                                                 executing from scratchpad region. */
        uint64_t reserved_6_53         : 48;
        uint64_t chunkways             : 5;  /**< [ 58: 54](SRO) Number of LTG ways used for each scratchpad chunk. */
        uint64_t maxsize               : 5;  /**< [ 63: 59](SRO) Maximum legal value for SIZE field. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_tad_cmn_scr_ctl_s cn; */
};
typedef union cavm_tad_cmn_scr_ctl cavm_tad_cmn_scr_ctl_t;

#define CAVM_TAD_CMN_SCR_CTL CAVM_TAD_CMN_SCR_CTL_FUNC()
static inline uint64_t CAVM_TAD_CMN_SCR_CTL_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_TAD_CMN_SCR_CTL_FUNC(void)
{
    if (cavm_is_model(OCTEONTX_CN20KA))
        return 0x87e053000038ll;
    __cavm_csr_fatal("TAD_CMN_SCR_CTL", 0, 0, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_TAD_CMN_SCR_CTL cavm_tad_cmn_scr_ctl_t
#define bustype_CAVM_TAD_CMN_SCR_CTL CSR_TYPE_RSL
#define basename_CAVM_TAD_CMN_SCR_CTL "TAD_CMN_SCR_CTL"
#define device_bar_CAVM_TAD_CMN_SCR_CTL 0x0 /* PF_BAR0 */
#define busnum_CAVM_TAD_CMN_SCR_CTL 0
#define arguments_CAVM_TAD_CMN_SCR_CTL -1,-1,-1,-1

#endif /* __CAVM_CSRS_TAD_CMN_H__ */
