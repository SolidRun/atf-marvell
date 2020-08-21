#ifndef __CAVM_CSRS_IOBN_H__
#define __CAVM_CSRS_IOBN_H__
/* This file is auto-generated. Do not edit */

/***********************license start***********************************
* Copyright (C) 2018-2020 Marvell International Ltd.
* SPDX-License-Identifier: BSD-3-Clause
* https://spdx.org/licenses
***********************license end**************************************/


/**
 * @file
 *
 * Configuration and status register (CSR) address and type definitions for
 * OcteonTX IOBN.
 *
 * This file is auto generated. Do not edit.
 *
 */

/**
 * Enumeration iobn_bar_e
 *
 * IOBN Base Address Register Enumeration
 * Enumerates the base address registers.
 */
#define CAVM_IOBN_BAR_E_IOBNX_PF_BAR0(a) (0x87e120000000ll + 0x1000000ll * (a))
#define CAVM_IOBN_BAR_E_IOBNX_PF_BAR0_SIZE 0x100000ull
#define CAVM_IOBN_BAR_E_IOBNX_PF_BAR4(a) (0x87e120f00000ll + 0x1000000ll * (a))
#define CAVM_IOBN_BAR_E_IOBNX_PF_BAR4_SIZE 0x100000ull

/**
 * Enumeration iobn_inb_err_e
 *
 * IOBN In Bound Error Enumeration
 * Enumerates the types of error detected on IOB inbound path. Errors are logged based on
 * priority, where ::ABORT_ZERO_ERR has highest
 * priority and ::ADDR_ERR has the lowest priority. See IOBN()_INB_ERR_STATUS.
 */
#define CAVM_IOBN_INB_ERR_E_ABORT_ZERO_ERR (1)
#define CAVM_IOBN_INB_ERR_E_ADDR_ERR (2)
#define CAVM_IOBN_INB_ERR_E_NONE (0)
#define CAVM_IOBN_INB_ERR_E_RSVD (3)

/**
 * Enumeration iobn_int_vec_e
 *
 * IOBN MSI-X Vector Enumeration
 * Enumerates the MSI-X interrupt vectors.
 */
#define CAVM_IOBN_INT_VEC_E_INTS (0)

/**
 * Enumeration iobn_ncbi_ro_mod_e
 *
 * IOBN NCBI Relax Order Modification Enumeration
 * Enumerates the controls for when CR's are allowed to pass PRs, see
 * IOBN()_ARBID()_CTL[CRPPR_ENA].
 */
#define CAVM_IOBN_NCBI_RO_MOD_E_BUS_CTL (0)
#define CAVM_IOBN_NCBI_RO_MOD_E_OFF (2)
#define CAVM_IOBN_NCBI_RO_MOD_E_ON (3)
#define CAVM_IOBN_NCBI_RO_MOD_E_RSVD (1)

/**
 * Enumeration iobn_outb_data_err_e
 *
 * IOBN Outbound Data Error Enumeration
 * Enumerates the types of error detected on IOB outbound path. See IOBN()_OUTB_DATA_ERR_STATUS.
 */
#define CAVM_IOBN_OUTB_DATA_ERR_E_CR_FLT (2)
#define CAVM_IOBN_OUTB_DATA_ERR_E_CR_POIS (1)
#define CAVM_IOBN_OUTB_DATA_ERR_E_NONE (0)

/**
 * Enumeration iobn_outb_err_e
 *
 * IOBN Outbound Error Enumeration
 * Enumerates the types of error detected on IOB outbound path. If the bit is set in
 * IOBN()_OUTB_ERR_STATUS corresponding to the enumeration value, that error occurred.
 */
#define CAVM_IOBN_OUTB_ERR_E_ABORT_ZERO_ERR (1)
#define CAVM_IOBN_OUTB_ERR_E_ADDR_ERR (2)
#define CAVM_IOBN_OUTB_ERR_E_CLASS_A_FAULT (4)
#define CAVM_IOBN_OUTB_ERR_E_NCBO_RDY_FAULT (0x10)
#define CAVM_IOBN_OUTB_ERR_E_NONE (0)
#define CAVM_IOBN_OUTB_ERR_E_PERMIT_FAULT (8)

/**
 * Enumeration iobn_rperf_event_e
 *
 * IOBN RCLK Performance Event Enumeration
 * Enumerates the events that can be selected by IOBN()_RPERF_CTRL()[SEL0,SEL1,SEL2].
 * Internal:
 * When assigning new events please keep all INRF events on 0-127 and INRM events on 128-255.
 */
#define CAVM_IOBN_RPERF_EVENT_E_INRM_PERFX(a) (0x80 + (a))
#define CAVM_IOBN_RPERF_EVENT_E_IOW_IO_CR_REQ (0x66)
#define CAVM_IOBN_RPERF_EVENT_E_IOW_IO_NP_REQ (0x64)
#define CAVM_IOBN_RPERF_EVENT_E_IOW_IO_PR_REQ (0x65)
#define CAVM_IOBN_RPERF_EVENT_E_IOW_MEM_CR_REQ (0x69)
#define CAVM_IOBN_RPERF_EVENT_E_IOW_MEM_NP_REQ (0x67)
#define CAVM_IOBN_RPERF_EVENT_E_IOW_MEM_PR_REQ (0x68)
#define CAVM_IOBN_RPERF_EVENT_E_IOW_NO_CR_CRD (0x6b)
#define CAVM_IOBN_RPERF_EVENT_E_IOW_NO_MEM_RETRY_CRD (0x6d)
#define CAVM_IOBN_RPERF_EVENT_E_IOW_NO_NP_STRM0_RETRY_CRD (0x70)
#define CAVM_IOBN_RPERF_EVENT_E_IOW_NO_NP_STRM1_RETRY_CRD (0x71)
#define CAVM_IOBN_RPERF_EVENT_E_IOW_NO_NP_STRM2_RETRY_CRD (0x72)
#define CAVM_IOBN_RPERF_EVENT_E_IOW_NO_NP_STRM3_RETRY_CRD (0x73)
#define CAVM_IOBN_RPERF_EVENT_E_IOW_NO_PR_STRM0_RETRY_CRD (0x74)
#define CAVM_IOBN_RPERF_EVENT_E_IOW_NO_PR_STRM1_RETRY_CRD (0x75)
#define CAVM_IOBN_RPERF_EVENT_E_IOW_NO_PR_STRM2_RETRY_CRD (0x76)
#define CAVM_IOBN_RPERF_EVENT_E_IOW_NO_PR_STRM3_RETRY_CRD (0x77)
#define CAVM_IOBN_RPERF_EVENT_E_IOW_NO_REQ_CRD (0x6a)
#define CAVM_IOBN_RPERF_EVENT_E_IOW_NO_SHR_RETRY_CRD (0x6c)
#define CAVM_IOBN_RPERF_EVENT_E_IOW_NO_SMMU_RETRY_CRD (0x6e)
#define CAVM_IOBN_RPERF_EVENT_E_NCBI_RD_CMD_BUSX(a) (0x28 + (a))
#define CAVM_IOBN_RPERF_EVENT_E_NCBI_WR_CMD_BUSX(a) (0x2c + (a))
#define CAVM_IOBN_RPERF_EVENT_E_ONE (0x25)
#define CAVM_IOBN_RPERF_EVENT_E_RCLK_DBG_DATA0X(a) (0 + (a))
#define CAVM_IOBN_RPERF_EVENT_E_RCLK_DBG_DATA1X(a) (0x40 + (a))
#define CAVM_IOBN_RPERF_EVENT_E_ZERO (0x24)

/**
 * Enumeration iobn_rperf_inrm_class_e
 *
 * IOBN RCLK Performance INRM Class Enumeration
 * Enumerates IOBN()_RPERF_INRM()[CLASS*].
 */
#define CAVM_IOBN_RPERF_INRM_CLASS_E_INB_BP (1)
#define CAVM_IOBN_RPERF_INRM_CLASS_E_INB_DAT (2)
#define CAVM_IOBN_RPERF_INRM_CLASS_E_INB_REQ (3)
#define CAVM_IOBN_RPERF_INRM_CLASS_E_INB_RSP (4)
#define CAVM_IOBN_RPERF_INRM_CLASS_E_NO_PERF (0)
#define CAVM_IOBN_RPERF_INRM_CLASS_E_OUTB_REQ (5)
#define CAVM_IOBN_RPERF_INRM_CLASS_E_OUTB_RSP (6)
#define CAVM_IOBN_RPERF_INRM_CLASS_E_RSVD (7)

/**
 * Structure iobn_rperf_inrm_inbbp_s
 *
 * IOBN INRM Perfomance Inbound BP Control Structure
 * This structure represents a bit-vector of BP
 * conditions. Counter will increment if any of the enabled conditions is present.
 */
union cavm_iobn_rperf_inrm_inbbp_s
{
    uint32_t u;
    struct cavm_iobn_rperf_inrm_inbbp_s_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t reserved_7_31         : 25;
        uint32_t lbk_dat               : 1;  /**< [  6:  6] When set, increment the associated RPERF IRNM performance count when BP from
                                                                 exhaustion of MSH Data credits. */
        uint32_t lbk_rsp               : 1;  /**< [  5:  5] When set, increment the associated RPERF IRNM performance count when BP from
                                                                 exhaustion of MSH Response credits. */
        uint32_t lbk_req               : 1;  /**< [  4:  4] When set, increment the associated RPERF IRNM performance count when BP from
                                                                 exhaustion of MSH Request credits. */
        uint32_t reserved_3            : 1;
        uint32_t msh_dat               : 1;  /**< [  2:  2] When set, increment the associated RPERF IRNM performance count when BP from
                                                                 exhaustion of MSH Data credits. */
        uint32_t msh_rsp               : 1;  /**< [  1:  1] When set, increment the associated RPERF IRNM performance count when BP from
                                                                 exhaustion of MSH Response credits. */
        uint32_t msh_req               : 1;  /**< [  0:  0] When set, increment the associated RPERF IRNM performance count when BP from
                                                                 exhaustion of MSH Request credits. */
#else /* Word 0 - Little Endian */
        uint32_t msh_req               : 1;  /**< [  0:  0] When set, increment the associated RPERF IRNM performance count when BP from
                                                                 exhaustion of MSH Request credits. */
        uint32_t msh_rsp               : 1;  /**< [  1:  1] When set, increment the associated RPERF IRNM performance count when BP from
                                                                 exhaustion of MSH Response credits. */
        uint32_t msh_dat               : 1;  /**< [  2:  2] When set, increment the associated RPERF IRNM performance count when BP from
                                                                 exhaustion of MSH Data credits. */
        uint32_t reserved_3            : 1;
        uint32_t lbk_req               : 1;  /**< [  4:  4] When set, increment the associated RPERF IRNM performance count when BP from
                                                                 exhaustion of MSH Request credits. */
        uint32_t lbk_rsp               : 1;  /**< [  5:  5] When set, increment the associated RPERF IRNM performance count when BP from
                                                                 exhaustion of MSH Response credits. */
        uint32_t lbk_dat               : 1;  /**< [  6:  6] When set, increment the associated RPERF IRNM performance count when BP from
                                                                 exhaustion of MSH Data credits. */
        uint32_t reserved_7_31         : 25;
#endif /* Word 0 - End */
    } s;
    struct cavm_iobn_rperf_inrm_inbbp_s_cn
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t reserved_13_31        : 19;
        uint32_t reserved_7_12         : 6;
        uint32_t lbk_dat               : 1;  /**< [  6:  6] When set, increment the associated RPERF IRNM performance count when BP from
                                                                 exhaustion of MSH Data credits. */
        uint32_t lbk_rsp               : 1;  /**< [  5:  5] When set, increment the associated RPERF IRNM performance count when BP from
                                                                 exhaustion of MSH Response credits. */
        uint32_t lbk_req               : 1;  /**< [  4:  4] When set, increment the associated RPERF IRNM performance count when BP from
                                                                 exhaustion of MSH Request credits. */
        uint32_t reserved_3            : 1;
        uint32_t msh_dat               : 1;  /**< [  2:  2] When set, increment the associated RPERF IRNM performance count when BP from
                                                                 exhaustion of MSH Data credits. */
        uint32_t msh_rsp               : 1;  /**< [  1:  1] When set, increment the associated RPERF IRNM performance count when BP from
                                                                 exhaustion of MSH Response credits. */
        uint32_t msh_req               : 1;  /**< [  0:  0] When set, increment the associated RPERF IRNM performance count when BP from
                                                                 exhaustion of MSH Request credits. */
#else /* Word 0 - Little Endian */
        uint32_t msh_req               : 1;  /**< [  0:  0] When set, increment the associated RPERF IRNM performance count when BP from
                                                                 exhaustion of MSH Request credits. */
        uint32_t msh_rsp               : 1;  /**< [  1:  1] When set, increment the associated RPERF IRNM performance count when BP from
                                                                 exhaustion of MSH Response credits. */
        uint32_t msh_dat               : 1;  /**< [  2:  2] When set, increment the associated RPERF IRNM performance count when BP from
                                                                 exhaustion of MSH Data credits. */
        uint32_t reserved_3            : 1;
        uint32_t lbk_req               : 1;  /**< [  4:  4] When set, increment the associated RPERF IRNM performance count when BP from
                                                                 exhaustion of MSH Request credits. */
        uint32_t lbk_rsp               : 1;  /**< [  5:  5] When set, increment the associated RPERF IRNM performance count when BP from
                                                                 exhaustion of MSH Response credits. */
        uint32_t lbk_dat               : 1;  /**< [  6:  6] When set, increment the associated RPERF IRNM performance count when BP from
                                                                 exhaustion of MSH Data credits. */
        uint32_t reserved_7_12         : 6;
        uint32_t reserved_13_31        : 19;
#endif /* Word 0 - End */
    } cn;
};

/**
 * Structure iobn_rperf_inrm_inbdat_s
 *
 * IOBN INRM Perfomance Inbound Data Control Structure
 * This structure represents an enable
 * bit-vector of conditions. At least one bit from each category must be to trigger a
 * counter update. All fields requested must match for the performance counter to be
 * updated.
 */
union cavm_iobn_rperf_inrm_inbdat_s
{
    uint32_t u;
    struct cavm_iobn_rperf_inrm_inbdat_s_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t reserved_13_31        : 19;
        uint32_t ncb2                  : 1;  /**< [ 12: 12] When set, increment the associated RPERF IRNM performance count when source
                                                                 transaction is bus NCB2. Category is transaction source. Category fields
                                                                 are SMMU, NCB0, NCB1, and NCB2. */
        uint32_t ncb1                  : 1;  /**< [ 11: 11] When set, increment the associated RPERF IRNM performance count when source
                                                                 transaction is bus NCB1. Category is transaction source. Category fields
                                                                 are SMMU, NCB0, NCB1, and NCB2. */
        uint32_t ncb0                  : 1;  /**< [ 10: 10] When set, increment the associated RPERF IRNM performance count when source
                                                                 transaction is bus NCB0. Category is transaction source. Category fields
                                                                 are SMMU, NCB0, NCB1, and NCB2. */
        uint32_t smmu                  : 1;  /**< [  9:  9] When set, increment the associated RPERF IRNM performance count when source
                                                                 transaction is from the SMMU. Category is transaction source. Category fields
                                                                 are SMMU, NCB0, NCB1, and NCB2. */
        uint32_t reserved_8            : 1;
        uint32_t full                  : 1;  /**< [  7:  7] When set, increment the associated RPERF IRNM performance count when source
                                                                 transaction is a FULL command. Category is transaction full type.
                                                                 data. Category fields are FULL. */
        uint32_t wd0                   : 1;  /**< [  6:  6] When set, increment the associated RPERF IRNM performance count when source
                                                                 transaction is a request without data associated. Category is transaction
                                                                 data. Category fields are WD1 and WD0. */
        uint32_t wd1                   : 1;  /**< [  5:  5] When set, increment the associated RPERF IRNM performance count when source
                                                                 transaction is a request with data associated. Category is transaction
                                                                 data. Category fields are WD1 and WD0. */
        uint32_t err0                  : 1;  /**< [  4:  4] When set, increment the associated RPERF IRNM performance count when source
                                                                 transaction is a request without error associated. Category is transaction
                                                                 error. Category fields are ERR1 and ERR0. */
        uint32_t err1                  : 1;  /**< [  3:  3] When set, increment the associated RPERF IRNM performance count when source
                                                                 transaction is a request with error associated. Category is transaction
                                                                 error. Category fields are ERR1 and ERR0. */
        uint32_t cr                    : 1;  /**< [  2:  2] When set, increment the associated RPERF IRNM performance count when source
                                                                 transaction is a completion response. Category is transaction completion type.
                                                                 Category fields are CR. */
        uint32_t msh                   : 1;  /**< [  1:  1] When set, increment the associated RPERF IRNM performance count when source
                                                                 transaction is targeted to IOBN or CCU via the mesh. Category is transaction
                                                                 destination. Category fields are LBK and MSH. */
        uint32_t lbk                   : 1;  /**< [  0:  0] When set, increment the associated RPERF IRNM performance count when source
                                                                 transaction is targeted to IOBN internal loopback. Category is transaction
                                                                 destination. Category fields are LBK and MSH. */
#else /* Word 0 - Little Endian */
        uint32_t lbk                   : 1;  /**< [  0:  0] When set, increment the associated RPERF IRNM performance count when source
                                                                 transaction is targeted to IOBN internal loopback. Category is transaction
                                                                 destination. Category fields are LBK and MSH. */
        uint32_t msh                   : 1;  /**< [  1:  1] When set, increment the associated RPERF IRNM performance count when source
                                                                 transaction is targeted to IOBN or CCU via the mesh. Category is transaction
                                                                 destination. Category fields are LBK and MSH. */
        uint32_t cr                    : 1;  /**< [  2:  2] When set, increment the associated RPERF IRNM performance count when source
                                                                 transaction is a completion response. Category is transaction completion type.
                                                                 Category fields are CR. */
        uint32_t err1                  : 1;  /**< [  3:  3] When set, increment the associated RPERF IRNM performance count when source
                                                                 transaction is a request with error associated. Category is transaction
                                                                 error. Category fields are ERR1 and ERR0. */
        uint32_t err0                  : 1;  /**< [  4:  4] When set, increment the associated RPERF IRNM performance count when source
                                                                 transaction is a request without error associated. Category is transaction
                                                                 error. Category fields are ERR1 and ERR0. */
        uint32_t wd1                   : 1;  /**< [  5:  5] When set, increment the associated RPERF IRNM performance count when source
                                                                 transaction is a request with data associated. Category is transaction
                                                                 data. Category fields are WD1 and WD0. */
        uint32_t wd0                   : 1;  /**< [  6:  6] When set, increment the associated RPERF IRNM performance count when source
                                                                 transaction is a request without data associated. Category is transaction
                                                                 data. Category fields are WD1 and WD0. */
        uint32_t full                  : 1;  /**< [  7:  7] When set, increment the associated RPERF IRNM performance count when source
                                                                 transaction is a FULL command. Category is transaction full type.
                                                                 data. Category fields are FULL. */
        uint32_t reserved_8            : 1;
        uint32_t smmu                  : 1;  /**< [  9:  9] When set, increment the associated RPERF IRNM performance count when source
                                                                 transaction is from the SMMU. Category is transaction source. Category fields
                                                                 are SMMU, NCB0, NCB1, and NCB2. */
        uint32_t ncb0                  : 1;  /**< [ 10: 10] When set, increment the associated RPERF IRNM performance count when source
                                                                 transaction is bus NCB0. Category is transaction source. Category fields
                                                                 are SMMU, NCB0, NCB1, and NCB2. */
        uint32_t ncb1                  : 1;  /**< [ 11: 11] When set, increment the associated RPERF IRNM performance count when source
                                                                 transaction is bus NCB1. Category is transaction source. Category fields
                                                                 are SMMU, NCB0, NCB1, and NCB2. */
        uint32_t ncb2                  : 1;  /**< [ 12: 12] When set, increment the associated RPERF IRNM performance count when source
                                                                 transaction is bus NCB2. Category is transaction source. Category fields
                                                                 are SMMU, NCB0, NCB1, and NCB2. */
        uint32_t reserved_13_31        : 19;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_iobn_rperf_inrm_inbdat_s_s cn; */
};

/**
 * Structure iobn_rperf_inrm_inbreq_s
 *
 * IOBN INRM Perfomance Inbound Request Control Structure
 * This structure represents an enable
 * bit-vector of conditions. At least one bit from each category must be to trigger a
 * counter update. All fields requested must match for the performance counter to be
 * updated.
 */
union cavm_iobn_rperf_inrm_inbreq_s
{
    uint32_t u;
    struct cavm_iobn_rperf_inrm_inbreq_s_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t reserved_13_31        : 19;
        uint32_t ncb2                  : 1;  /**< [ 12: 12] When set, increment the associated RPERF IRNM performance count when source
                                                                 transaction is bus NCB2. Category is transaction source. Category fields
                                                                 are SMMU, NCB0, NCB1, and NCB2. */
        uint32_t ncb1                  : 1;  /**< [ 11: 11] When set, increment the associated RPERF IRNM performance count when source
                                                                 transaction is bus NCB1. Category is transaction source. Category fields
                                                                 are SMMU, NCB0, NCB1, and NCB2. */
        uint32_t ncb0                  : 1;  /**< [ 10: 10] When set, increment the associated RPERF IRNM performance count when source
                                                                 transaction is bus NCB0. Category is transaction source. Category fields
                                                                 are SMMU, NCB0, NCB1, and NCB2. */
        uint32_t smmu                  : 1;  /**< [  9:  9] When set, increment the associated RPERF IRNM performance count when source
                                                                 transaction is from the SMMU. Category is transaction source. Category fields
                                                                 are SMMU, NCB0, NCB1, and NCB2. */
        uint32_t retry                 : 1;  /**< [  8:  8] When set, increment the associated RPERF IRNM performance count when source
                                                                 transaction is a retried request. Category is transaction retry. Category
                                                                 fields are RETRY. */
        uint32_t sow                   : 1;  /**< [  7:  7] When set, increment the associated RPERF IRNM performance count when source
                                                                 transaction is from the PCIe store-order-widget. Category is transaction
                                                                 SOW. Category fields are SOW. */
        uint32_t wd0                   : 1;  /**< [  6:  6] When set, increment the associated RPERF IRNM performance count when source
                                                                 transaction is a request without data associated. Category is transaction
                                                                 data. Category fields are WD1 and WD0. */
        uint32_t wd1                   : 1;  /**< [  5:  5] When set, increment the associated RPERF IRNM performance count when source
                                                                 transaction is a request with data associated. Category is transaction
                                                                 data. Category fields are WD1 and WD0. */
        uint32_t err0                  : 1;  /**< [  4:  4] When set, increment the associated RPERF IRNM performance count when source
                                                                 transaction is a request without error associated. Category is transaction
                                                                 error. Category fields are ERR1 and ERR0. */
        uint32_t err1                  : 1;  /**< [  3:  3] When set, increment the associated RPERF IRNM performance count when source
                                                                 transaction is a request with error associated. Category is transaction
                                                                 error. Category fields are ERR1 and ERR0.

                                                                 Internal:
                                                                 Error can be set from SMMU translation exception or NCBI to NCBO opcode remap
                                                                 failure. This can be expressed as: (smmu.abort || smmu.zero ||
                                                                 iobn_xlat_defs::msh_cmd_to_ncbo_iop.err). When set, the transaction will target
                                                                 the error handler AID which is LBK for IOBN instance 0 or IOB for all other IOBN
                                                                 instance numbers. */
        uint32_t ccu                   : 1;  /**< [  2:  2] When set, increment the associated RPERF IRNM performance count when source
                                                                 transaction is targeted to CCU. Category is transaction destination. Category
                                                                 fields are LBK, IOB, and CCU. */
        uint32_t iob                   : 1;  /**< [  1:  1] When set, increment the associated RPERF IRNM performance count when source
                                                                 transaction is targeted to IOBN via the mesh. Category is transaction
                                                                 destination. Category fields are LBK, IOB, and CCU.

                                                                 Internal:
                                                                 Transactions with ERR set will target the error handler AID which is LBK for
                                                                 IOBN instance 0 or IOB for all other IOBN instance numbers. */
        uint32_t lbk                   : 1;  /**< [  0:  0] When set, increment the associated RPERF IRNM performance count when source
                                                                 transaction is targeted to IOBN internal loopback. Category is transaction
                                                                 destination. Category fields are LBK, IOB, and CCU.

                                                                 Internal:
                                                                 Transactions with ERR set will target the error handler AID which is LBK for
                                                                 IOBN instance 0 or IOB for all other IOBN instance numbers. */
#else /* Word 0 - Little Endian */
        uint32_t lbk                   : 1;  /**< [  0:  0] When set, increment the associated RPERF IRNM performance count when source
                                                                 transaction is targeted to IOBN internal loopback. Category is transaction
                                                                 destination. Category fields are LBK, IOB, and CCU.

                                                                 Internal:
                                                                 Transactions with ERR set will target the error handler AID which is LBK for
                                                                 IOBN instance 0 or IOB for all other IOBN instance numbers. */
        uint32_t iob                   : 1;  /**< [  1:  1] When set, increment the associated RPERF IRNM performance count when source
                                                                 transaction is targeted to IOBN via the mesh. Category is transaction
                                                                 destination. Category fields are LBK, IOB, and CCU.

                                                                 Internal:
                                                                 Transactions with ERR set will target the error handler AID which is LBK for
                                                                 IOBN instance 0 or IOB for all other IOBN instance numbers. */
        uint32_t ccu                   : 1;  /**< [  2:  2] When set, increment the associated RPERF IRNM performance count when source
                                                                 transaction is targeted to CCU. Category is transaction destination. Category
                                                                 fields are LBK, IOB, and CCU. */
        uint32_t err1                  : 1;  /**< [  3:  3] When set, increment the associated RPERF IRNM performance count when source
                                                                 transaction is a request with error associated. Category is transaction
                                                                 error. Category fields are ERR1 and ERR0.

                                                                 Internal:
                                                                 Error can be set from SMMU translation exception or NCBI to NCBO opcode remap
                                                                 failure. This can be expressed as: (smmu.abort || smmu.zero ||
                                                                 iobn_xlat_defs::msh_cmd_to_ncbo_iop.err). When set, the transaction will target
                                                                 the error handler AID which is LBK for IOBN instance 0 or IOB for all other IOBN
                                                                 instance numbers. */
        uint32_t err0                  : 1;  /**< [  4:  4] When set, increment the associated RPERF IRNM performance count when source
                                                                 transaction is a request without error associated. Category is transaction
                                                                 error. Category fields are ERR1 and ERR0. */
        uint32_t wd1                   : 1;  /**< [  5:  5] When set, increment the associated RPERF IRNM performance count when source
                                                                 transaction is a request with data associated. Category is transaction
                                                                 data. Category fields are WD1 and WD0. */
        uint32_t wd0                   : 1;  /**< [  6:  6] When set, increment the associated RPERF IRNM performance count when source
                                                                 transaction is a request without data associated. Category is transaction
                                                                 data. Category fields are WD1 and WD0. */
        uint32_t sow                   : 1;  /**< [  7:  7] When set, increment the associated RPERF IRNM performance count when source
                                                                 transaction is from the PCIe store-order-widget. Category is transaction
                                                                 SOW. Category fields are SOW. */
        uint32_t retry                 : 1;  /**< [  8:  8] When set, increment the associated RPERF IRNM performance count when source
                                                                 transaction is a retried request. Category is transaction retry. Category
                                                                 fields are RETRY. */
        uint32_t smmu                  : 1;  /**< [  9:  9] When set, increment the associated RPERF IRNM performance count when source
                                                                 transaction is from the SMMU. Category is transaction source. Category fields
                                                                 are SMMU, NCB0, NCB1, and NCB2. */
        uint32_t ncb0                  : 1;  /**< [ 10: 10] When set, increment the associated RPERF IRNM performance count when source
                                                                 transaction is bus NCB0. Category is transaction source. Category fields
                                                                 are SMMU, NCB0, NCB1, and NCB2. */
        uint32_t ncb1                  : 1;  /**< [ 11: 11] When set, increment the associated RPERF IRNM performance count when source
                                                                 transaction is bus NCB1. Category is transaction source. Category fields
                                                                 are SMMU, NCB0, NCB1, and NCB2. */
        uint32_t ncb2                  : 1;  /**< [ 12: 12] When set, increment the associated RPERF IRNM performance count when source
                                                                 transaction is bus NCB2. Category is transaction source. Category fields
                                                                 are SMMU, NCB0, NCB1, and NCB2. */
        uint32_t reserved_13_31        : 19;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_iobn_rperf_inrm_inbreq_s_s cn; */
};

/**
 * Structure iobn_rperf_inrm_inbrsp_s
 *
 * IOBN INRM Perfomance Inbound Response Control Structure
 * This structure represents an enable
 * bit-vector of conditions. At least one bit from each category must be to trigger a
 * counter update. All fields requested must match for the performance counter to be
 * updated.
 */
union cavm_iobn_rperf_inrm_inbrsp_s
{
    uint32_t u;
    struct cavm_iobn_rperf_inrm_inbrsp_s_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t reserved_13_31        : 19;
        uint32_t ncb2                  : 1;  /**< [ 12: 12] When set, increment the associated RPERF IRNM performance count when source
                                                                 transaction is bus NCB2. Category is transaction source. Category fields
                                                                 are SMMU, NCB0, NCB1, and NCB2. */
        uint32_t ncb1                  : 1;  /**< [ 11: 11] When set, increment the associated RPERF IRNM performance count when source
                                                                 transaction is bus NCB1. Category is transaction source. Category fields are
                                                                 SMMU, NCB0, NCB1, and NCB2. */
        uint32_t ncb0                  : 1;  /**< [ 10: 10] When set, increment the associated RPERF IRNM performance count when source
                                                                 transaction is bus NCB0. Category is transaction source. Category fields
                                                                 are SMMU, NCB0, NCB1, and NCB2. */
        uint32_t smmu                  : 1;  /**< [  9:  9] When set, increment the associated RPERF IRNM performance count when source
                                                                 transaction is from the SMMU. Category is transaction source. Category fields
                                                                 are SMMU, NCB0, NCB1, and NCB2. */
        uint32_t reserved_5_8          : 4;
        uint32_t err0                  : 1;  /**< [  4:  4] When set, increment the associated RPERF IRNM performance count when source
                                                                 transaction is a request without error associated. Category is transaction
                                                                 error. Category fields are ERR1 and ERR0. */
        uint32_t err1                  : 1;  /**< [  3:  3] When set, increment the associated RPERF IRNM performance count when source
                                                                 transaction is a request with error associated. Category is transaction
                                                                 error. Category fields are ERR1 and ERR0. */
        uint32_t ccu                   : 1;  /**< [  2:  2] When set, increment the associated RPERF IRNM performance count when source
                                                                 transaction is targeted to CCU. Category is transaction destination. Category
                                                                 fields are LBK, IOB, and CCU. */
        uint32_t iob                   : 1;  /**< [  1:  1] When set, increment the associated RPERF IRNM performance count when source
                                                                 transaction is targeted to IOBN via the mesh. Category is transaction
                                                                 destination. Category fields are LBK, IOB, and CCU. */
        uint32_t lbk                   : 1;  /**< [  0:  0] When set, increment the associated RPERF IRNM performance count when source
                                                                 transaction is targeted to IOBN internal loopback. Category is transaction
                                                                 destination. Category fields are LBK, IOB, and CCU. */
#else /* Word 0 - Little Endian */
        uint32_t lbk                   : 1;  /**< [  0:  0] When set, increment the associated RPERF IRNM performance count when source
                                                                 transaction is targeted to IOBN internal loopback. Category is transaction
                                                                 destination. Category fields are LBK, IOB, and CCU. */
        uint32_t iob                   : 1;  /**< [  1:  1] When set, increment the associated RPERF IRNM performance count when source
                                                                 transaction is targeted to IOBN via the mesh. Category is transaction
                                                                 destination. Category fields are LBK, IOB, and CCU. */
        uint32_t ccu                   : 1;  /**< [  2:  2] When set, increment the associated RPERF IRNM performance count when source
                                                                 transaction is targeted to CCU. Category is transaction destination. Category
                                                                 fields are LBK, IOB, and CCU. */
        uint32_t err1                  : 1;  /**< [  3:  3] When set, increment the associated RPERF IRNM performance count when source
                                                                 transaction is a request with error associated. Category is transaction
                                                                 error. Category fields are ERR1 and ERR0. */
        uint32_t err0                  : 1;  /**< [  4:  4] When set, increment the associated RPERF IRNM performance count when source
                                                                 transaction is a request without error associated. Category is transaction
                                                                 error. Category fields are ERR1 and ERR0. */
        uint32_t reserved_5_8          : 4;
        uint32_t smmu                  : 1;  /**< [  9:  9] When set, increment the associated RPERF IRNM performance count when source
                                                                 transaction is from the SMMU. Category is transaction source. Category fields
                                                                 are SMMU, NCB0, NCB1, and NCB2. */
        uint32_t ncb0                  : 1;  /**< [ 10: 10] When set, increment the associated RPERF IRNM performance count when source
                                                                 transaction is bus NCB0. Category is transaction source. Category fields
                                                                 are SMMU, NCB0, NCB1, and NCB2. */
        uint32_t ncb1                  : 1;  /**< [ 11: 11] When set, increment the associated RPERF IRNM performance count when source
                                                                 transaction is bus NCB1. Category is transaction source. Category fields are
                                                                 SMMU, NCB0, NCB1, and NCB2. */
        uint32_t ncb2                  : 1;  /**< [ 12: 12] When set, increment the associated RPERF IRNM performance count when source
                                                                 transaction is bus NCB2. Category is transaction source. Category fields
                                                                 are SMMU, NCB0, NCB1, and NCB2. */
        uint32_t reserved_13_31        : 19;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_iobn_rperf_inrm_inbrsp_s_s cn; */
};

/**
 * Structure iobn_rperf_inrm_outreq_s
 *
 * IOBN INRM Perfomance Outbound Request Control Structure
 * This structure represents an enable
 * bit-vector of conditions. At least one bit from each category must be to trigger a
 * counter update. All fields requested must match for the performance counter to be
 * updated.
 */
union cavm_iobn_rperf_inrm_outreq_s
{
    uint32_t u;
    struct cavm_iobn_rperf_inrm_outreq_s_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t reserved_13_31        : 19;
        uint32_t ncb2                  : 1;  /**< [ 12: 12] When set, increment the associated RPERF IRNM performance count when source
                                                                 transaction is targeted to bus NCB0. Category is transaction
                                                                 destination. Category fields are SMMU, NCB0, NCB1, and NCB2.

                                                                 Internal:
                                                                 Transactions with ERR set will target the error handler AID. */
        uint32_t ncb1                  : 1;  /**< [ 11: 11] When set, increment the associated RPERF IRNM performance count when source
                                                                 transaction is targeted to bus NCB1. Category is transaction
                                                                 destination. Category fields are SMMU, NCB0, NCB1, and NCB2.

                                                                 Internal:
                                                                 Transactions with ERR set will target the error handler AID. */
        uint32_t ncb0                  : 1;  /**< [ 10: 10] When set, increment the associated RPERF IRNM performance count when source
                                                                 transaction is targeted to bus NCB2. Category is transaction
                                                                 destination. Category fields are SMMU, NCB0, NCB1, and NCB2.

                                                                 Internal:
                                                                 Transactions with ERR set will target the error handler AID. */
        uint32_t smmu                  : 1;  /**< [  9:  9] When set, increment the associated RPERF IRNM performance count when source
                                                                 transaction is targeted to the SMMU. Category is transaction
                                                                 destination. Category fields are SMMU, NCB0, NCB1, and NCB2.

                                                                 Internal:
                                                                 Transactions with ERR set will target the error handler AID. */
        uint32_t ret1                  : 1;  /**< [  8:  8] When set, increment the associated RPERF IRNM performance count when source
                                                                 transaction is a request that is retried destined for NCB1. */
        uint32_t ret0                  : 1;  /**< [  7:  7] When set, increment the associated RPERF IRNM performance count when source
                                                                 transaction is a request that is retried destined for NCB0. */
        uint32_t wd0                   : 1;  /**< [  6:  6] When set, increment the associated RPERF IRNM performance count when source
                                                                 transaction is a request without data associated. Category is transaction
                                                                 data. Category fields are WD1 and WD0. */
        uint32_t wd1                   : 1;  /**< [  5:  5] When set, increment the associated RPERF IRNM performance count when source
                                                                 transaction is a request with data associated. Category is transaction
                                                                 data. Category fields are WD1 and WD0. */
        uint32_t err0                  : 1;  /**< [  4:  4] When set, increment the associated RPERF IRNM performance count when source
                                                                 transaction is a request without error/fault associated. Category is transaction
                                                                 error. Category fields are ERR1 and ERR0. */
        uint32_t err1                  : 1;  /**< [  3:  3] When set, increment the associated RPERF IRNM performance count when source
                                                                 transaction is a request with error/fault associated. Category is transaction
                                                                 error. Category fields are ERR1 and ERR0.

                                                                 Internal:
                                                                 Error can be set from either the received cmd or from the outbound forwarding
                                                                 checks (valid address, PERMIT, KILL, SECURE, CLASS A/B checks). When set, the
                                                                 transaction will target the error handler AID. */
        uint32_t ccu                   : 1;  /**< [  2:  2] When set, increment the associated RPERF IRNM performance count when source
                                                                 transaction is from CCU. Category is transaction source. Category fields are
                                                                 LBK, IOB, and CCU. */
        uint32_t iob                   : 1;  /**< [  1:  1] When set, increment the associated RPERF IRNM performance count when source
                                                                 transaction is from IOBN via the mesh. Category is transaction source. Category
                                                                 fields are LBK, IOB, and CCU. */
        uint32_t lbk                   : 1;  /**< [  0:  0] When set, increment the associated RPERF IRNM performance count when source
                                                                 transaction is from IOBN internal loopback. Category is transaction
                                                                 source. Category fields are LBK, IOB, and CCU. */
#else /* Word 0 - Little Endian */
        uint32_t lbk                   : 1;  /**< [  0:  0] When set, increment the associated RPERF IRNM performance count when source
                                                                 transaction is from IOBN internal loopback. Category is transaction
                                                                 source. Category fields are LBK, IOB, and CCU. */
        uint32_t iob                   : 1;  /**< [  1:  1] When set, increment the associated RPERF IRNM performance count when source
                                                                 transaction is from IOBN via the mesh. Category is transaction source. Category
                                                                 fields are LBK, IOB, and CCU. */
        uint32_t ccu                   : 1;  /**< [  2:  2] When set, increment the associated RPERF IRNM performance count when source
                                                                 transaction is from CCU. Category is transaction source. Category fields are
                                                                 LBK, IOB, and CCU. */
        uint32_t err1                  : 1;  /**< [  3:  3] When set, increment the associated RPERF IRNM performance count when source
                                                                 transaction is a request with error/fault associated. Category is transaction
                                                                 error. Category fields are ERR1 and ERR0.

                                                                 Internal:
                                                                 Error can be set from either the received cmd or from the outbound forwarding
                                                                 checks (valid address, PERMIT, KILL, SECURE, CLASS A/B checks). When set, the
                                                                 transaction will target the error handler AID. */
        uint32_t err0                  : 1;  /**< [  4:  4] When set, increment the associated RPERF IRNM performance count when source
                                                                 transaction is a request without error/fault associated. Category is transaction
                                                                 error. Category fields are ERR1 and ERR0. */
        uint32_t wd1                   : 1;  /**< [  5:  5] When set, increment the associated RPERF IRNM performance count when source
                                                                 transaction is a request with data associated. Category is transaction
                                                                 data. Category fields are WD1 and WD0. */
        uint32_t wd0                   : 1;  /**< [  6:  6] When set, increment the associated RPERF IRNM performance count when source
                                                                 transaction is a request without data associated. Category is transaction
                                                                 data. Category fields are WD1 and WD0. */
        uint32_t ret0                  : 1;  /**< [  7:  7] When set, increment the associated RPERF IRNM performance count when source
                                                                 transaction is a request that is retried destined for NCB0. */
        uint32_t ret1                  : 1;  /**< [  8:  8] When set, increment the associated RPERF IRNM performance count when source
                                                                 transaction is a request that is retried destined for NCB1. */
        uint32_t smmu                  : 1;  /**< [  9:  9] When set, increment the associated RPERF IRNM performance count when source
                                                                 transaction is targeted to the SMMU. Category is transaction
                                                                 destination. Category fields are SMMU, NCB0, NCB1, and NCB2.

                                                                 Internal:
                                                                 Transactions with ERR set will target the error handler AID. */
        uint32_t ncb0                  : 1;  /**< [ 10: 10] When set, increment the associated RPERF IRNM performance count when source
                                                                 transaction is targeted to bus NCB2. Category is transaction
                                                                 destination. Category fields are SMMU, NCB0, NCB1, and NCB2.

                                                                 Internal:
                                                                 Transactions with ERR set will target the error handler AID. */
        uint32_t ncb1                  : 1;  /**< [ 11: 11] When set, increment the associated RPERF IRNM performance count when source
                                                                 transaction is targeted to bus NCB1. Category is transaction
                                                                 destination. Category fields are SMMU, NCB0, NCB1, and NCB2.

                                                                 Internal:
                                                                 Transactions with ERR set will target the error handler AID. */
        uint32_t ncb2                  : 1;  /**< [ 12: 12] When set, increment the associated RPERF IRNM performance count when source
                                                                 transaction is targeted to bus NCB0. Category is transaction
                                                                 destination. Category fields are SMMU, NCB0, NCB1, and NCB2.

                                                                 Internal:
                                                                 Transactions with ERR set will target the error handler AID. */
        uint32_t reserved_13_31        : 19;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_iobn_rperf_inrm_outreq_s_s cn; */
};

/**
 * Structure iobn_rperf_inrm_outrsp_s
 *
 * IOBN INRM Performance Outbound Response Control Structure
 * This structure represents an enable
 * bit-vector of conditions. At least one bit from each category must be to trigger a
 * counter update. All fields requested must match for the performance counter to be
 * updated.
 */
union cavm_iobn_rperf_inrm_outrsp_s
{
    uint32_t u;
    struct cavm_iobn_rperf_inrm_outrsp_s_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t reserved_13_31        : 19;
        uint32_t ncb2                  : 1;  /**< [ 12: 12] When set, increment the associated RPERF IRNM performance count when source
                                                                 transaction is targeted to bus NCB0. Category is transaction
                                                                 destination. Category fields are SMMU, NCB0, NCB1, and NCB2. */
        uint32_t ncb1                  : 1;  /**< [ 11: 11] When set, increment the associated RPERF IRNM performance count when source
                                                                 transaction is targeted to bus NCB1. Category is transaction
                                                                 destination. Category fields are SMMU, NCB0, NCB1, and NCB2. */
        uint32_t ncb0                  : 1;  /**< [ 10: 10] When set, increment the associated RPERF IRNM performance count when source
                                                                 transaction is targeted to bus NCB2. Category is transaction
                                                                 destination. Category fields are SMMU, NCB0, NCB1, and NCB2. */
        uint32_t smmu                  : 1;  /**< [  9:  9] When set, increment the associated RPERF IRNM performance count when source
                                                                 transaction is targeted to the SMMU. Category is transaction
                                                                 destination. Category fields are SMMU, NCB0, NCB1, and NCB2. */
        uint32_t reserved_5_8          : 4;
        uint32_t err0                  : 1;  /**< [  4:  4] When set, increment the associated RPERF IRNM performance count when source
                                                                 transaction is a request without error/fault associated. Category is transaction
                                                                 error. Category fields are ERR1 and ERR0. */
        uint32_t err1                  : 1;  /**< [  3:  3] When set, increment the associated RPERF IRNM performance count when source
                                                                 transaction is a request with error/fault associated. Category is transaction
                                                                 error. Category fields are ERR1 and ERR0. */
        uint32_t ccu                   : 1;  /**< [  2:  2] When set, increment the associated RPERF IRNM performance count when source
                                                                 transaction is from CCU. Category is transaction source. Category fields are
                                                                 LBK, IOB, and CCU. For accuracy, the LBK and IOB/CCU bits should be mutually
                                                                 exclusive.

                                                                 Internal:
                                                                 The LBK and IOB/CCU bits should not be asserted together as LBK and IOB/CCU that
                                                                 occur at the same time can collide and be reduced to a single counter
                                                                 increment. Best to use two counters and track the events independently. */
        uint32_t iob                   : 1;  /**< [  1:  1] When set, increment the associated RPERF IRNM performance count when source
                                                                 transaction is from IOBN via the mesh. Category is transaction source. Category
                                                                 fields are LBK, IOB, and CCU. For accuracy, the LBK and IOB/CCU bits should be
                                                                 mutually exclusive.

                                                                 Internal:
                                                                 The LBK and IOB/CCU bits should not be asserted together as LBK and IOB/CCU that
                                                                 occur at the same time can collide and be reduced to a single counter
                                                                 increment. Best to use two counters and track the events independently. */
        uint32_t lbk                   : 1;  /**< [  0:  0] When set, increment the associated RPERF IRNM performance count when source
                                                                 transaction is from IOBN internal loopback. Category is transaction
                                                                 source. Category fields are LBK, IOB, and CCU. For accuracy, the LBK and IOB/CCU
                                                                 bits should be mutually exclusive.

                                                                 Internal:
                                                                 The LBK and IOB/CCU bits should not be asserted together as LBK and IOB/CCU that
                                                                 occur at the same time can collide and be reduced to a single counter
                                                                 increment. Best to use two counters and track the events independently. */
#else /* Word 0 - Little Endian */
        uint32_t lbk                   : 1;  /**< [  0:  0] When set, increment the associated RPERF IRNM performance count when source
                                                                 transaction is from IOBN internal loopback. Category is transaction
                                                                 source. Category fields are LBK, IOB, and CCU. For accuracy, the LBK and IOB/CCU
                                                                 bits should be mutually exclusive.

                                                                 Internal:
                                                                 The LBK and IOB/CCU bits should not be asserted together as LBK and IOB/CCU that
                                                                 occur at the same time can collide and be reduced to a single counter
                                                                 increment. Best to use two counters and track the events independently. */
        uint32_t iob                   : 1;  /**< [  1:  1] When set, increment the associated RPERF IRNM performance count when source
                                                                 transaction is from IOBN via the mesh. Category is transaction source. Category
                                                                 fields are LBK, IOB, and CCU. For accuracy, the LBK and IOB/CCU bits should be
                                                                 mutually exclusive.

                                                                 Internal:
                                                                 The LBK and IOB/CCU bits should not be asserted together as LBK and IOB/CCU that
                                                                 occur at the same time can collide and be reduced to a single counter
                                                                 increment. Best to use two counters and track the events independently. */
        uint32_t ccu                   : 1;  /**< [  2:  2] When set, increment the associated RPERF IRNM performance count when source
                                                                 transaction is from CCU. Category is transaction source. Category fields are
                                                                 LBK, IOB, and CCU. For accuracy, the LBK and IOB/CCU bits should be mutually
                                                                 exclusive.

                                                                 Internal:
                                                                 The LBK and IOB/CCU bits should not be asserted together as LBK and IOB/CCU that
                                                                 occur at the same time can collide and be reduced to a single counter
                                                                 increment. Best to use two counters and track the events independently. */
        uint32_t err1                  : 1;  /**< [  3:  3] When set, increment the associated RPERF IRNM performance count when source
                                                                 transaction is a request with error/fault associated. Category is transaction
                                                                 error. Category fields are ERR1 and ERR0. */
        uint32_t err0                  : 1;  /**< [  4:  4] When set, increment the associated RPERF IRNM performance count when source
                                                                 transaction is a request without error/fault associated. Category is transaction
                                                                 error. Category fields are ERR1 and ERR0. */
        uint32_t reserved_5_8          : 4;
        uint32_t smmu                  : 1;  /**< [  9:  9] When set, increment the associated RPERF IRNM performance count when source
                                                                 transaction is targeted to the SMMU. Category is transaction
                                                                 destination. Category fields are SMMU, NCB0, NCB1, and NCB2. */
        uint32_t ncb0                  : 1;  /**< [ 10: 10] When set, increment the associated RPERF IRNM performance count when source
                                                                 transaction is targeted to bus NCB2. Category is transaction
                                                                 destination. Category fields are SMMU, NCB0, NCB1, and NCB2. */
        uint32_t ncb1                  : 1;  /**< [ 11: 11] When set, increment the associated RPERF IRNM performance count when source
                                                                 transaction is targeted to bus NCB1. Category is transaction
                                                                 destination. Category fields are SMMU, NCB0, NCB1, and NCB2. */
        uint32_t ncb2                  : 1;  /**< [ 12: 12] When set, increment the associated RPERF IRNM performance count when source
                                                                 transaction is targeted to bus NCB0. Category is transaction
                                                                 destination. Category fields are SMMU, NCB0, NCB1, and NCB2. */
        uint32_t reserved_13_31        : 19;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_iobn_rperf_inrm_outrsp_s_s cn; */
};

/**
 * Register (RSL) iobn#_bp_test#
 *
 * INTERNAL: IOBN Backpressure Test Registers
 */
union cavm_iobnx_bp_testx
{
    uint64_t u;
    struct cavm_iobnx_bp_testx_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t enable                : 8;  /**< [ 63: 56](R/W) Enable test mode. For diagnostic use only.
                                                                 Internal:
                                                                 Once a bit is set, random backpressure is generated
                                                                 at the corresponding point to allow for more frequent backpressure.

                                                                 IOBN()_BP_TEST(0) - INRF: Defined by iobn_defs::inrf_bp_test_t.
                                                                 \<63\> = iow_imi_cr_debit  - backpressure credit returns from imi to iow for cr credits.
                                                                 \<62\> = iow_imi_req_debit - backpressure credit returns from imi to iow for req credits.
                                                                 \<61\> = rsvd1 - rsvd for future ncb buses
                                                                 \<60\> = iow_ncb1_req_arb_debit - backpressure from ncb1 request to iob_iow_req_arb for credits.
                                                                 \<59\> = iow_ncb0_req_arb_debit - backpressure from ncb0 request to iob_iow_req_arb for credits.
                                                                 \<58\> = rsvd0 - rsvd for future ncb buses
                                                                 \<57\> = iow_ncb1_cr_arb_debit  - backpressure from ncb0 CR to iob_iow_irf_arb for credits.
                                                                 \<56\> = iow_ncb0_cr_arb_debit  - backpressure from ncb0 CR to iob_iow_irf_arb for credits.

                                                                 \<page\>
                                                                 IOBN()_BP_TEST(1) - INRM: Defined by iobn_defs::inrm_bp_test_t
                                                                 \<63\> = LSW1 Request.
                                                                 \<62\> = LSW0 Request.
                                                                 \<61\> = NCBO1-RET.
                                                                 \<60\> = NCBO0-PRET.
                                                                 \<59\> = NCBO0-RET.
                                                                 \<58\> = MSH - DAT. 10x.
                                                                 \<57\> = MSH - RSP. 10x.
                                                                 \<56\> = MSH - REQ. 10x.

                                                                 \<page\>
                                                                 IOBN()_BP_TEST(2) - INRF: Defined by iobn_defs::inrf_bp_test_t.
                                                                 \<63\> = NCB2 ADD FLID - stop flow of NCBI FLID and CPID info from being passed to IOW.
                                                                 \<62\> = NCB1 ADD FLID - stop flow of NCBI FLID and CPID info from being passed to IOW.
                                                                 \<61\> = NCB0 ADD FLID - stop flow of NCBI FLID and CPID info from being passed to IOW.
                                                                 \<60\> = TBD.
                                                                 \<59\> = TBD.
                                                                 \<58\> = TBD.
                                                                 \<57\> = TBD.
                                                                 \<56\> = iut_smmu_bp - emulates backpressure to IUT from SMMU.

                                                                 \<page\>
                                                                 IOBN()_BP_TEST(3) - INRF: Defined by iobn_defs::inrm_bp_test_t.
                                                                 \<63\> = TBD.
                                                                 \<62\> = imi_retry_smmu
                                                                 \<61\> = imi_retry_sow
                                                                 \<60\> = imi_tx_dat_stcpid
                                                                 \<59\> = imi_tx_rsp
                                                                 \<58\> = LBK - DAT. 10x.
                                                                 \<57\> = LBK - RSP. 10x.
                                                                 \<56\> = LBK - REQ. 10x.

                                                                 \<page\>
                                                                 IOBN()_BP_TEST(4) - INRF: Defined by iobn_defs::inrm_bp_test_t.
                                                                 \<63\> = TBD.
                                                                 \<62\> = TBD.
                                                                 \<61\> = TBD.
                                                                 \<60\> = TBD.
                                                                 \<59\> = TBD.
                                                                 \<58\> = TBD.
                                                                 \<57\> = TBD.
                                                                 \<56\> = TBD.

                                                                 \<page\>
                                                                 IOBN()_BP_TEST(5) - INRF: Defined by iobn_defs::iow_ill_bp_test_t. See
                                                                 IOBN(0..3)_ILL_BPTEST_SEL for how to map outputs to a ncb arbid.
                                                                 \<63\> = irf__ill_rtn_crd0.cr.
                                                                 \<62\> = irf__ill_rtn_crd0.np.
                                                                 \<61\> = irf__ill_rtn_crd0.pr.
                                                                 \<60\> = irf__ill_rtn_crd0.ps.
                                                                 \<59\> = irf__ill_rtn_crd1.cr.
                                                                 \<58\> = irf__ill_rtn_crd1.np.
                                                                 \<57\> = irf__ill_rtn_crd1.pr.
                                                                 \<56\> = irf__ill_rtn_crd1.ps. */
        uint64_t reserved_32_55        : 24;
        uint64_t bp_cfg                : 16; /**< [ 31: 16](R/W) Backpressure weight. For diagnostic use only.
                                                                 Internal:
                                                                 There are 2 backpressure configuration bits per enable, with the two bits
                                                                 defined as 0x0=100% of the time, 0x1=75% of the time, 0x2=50% of the time,
                                                                 0x3=25% of the time.
                                                                   \<31:30\> = Config 7.
                                                                   \<29:28\> = Config 6.
                                                                   \<27:26\> = Config 5.
                                                                   \<25:24\> = Config 4.
                                                                   \<23:22\> = Config 3.
                                                                   \<21:20\> = Config 2.
                                                                   \<19:18\> = Config 1.
                                                                   \<17:16\> = Config 0. */
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
                                                                   \<31:30\> = Config 7.
                                                                   \<29:28\> = Config 6.
                                                                   \<27:26\> = Config 5.
                                                                   \<25:24\> = Config 4.
                                                                   \<23:22\> = Config 3.
                                                                   \<21:20\> = Config 2.
                                                                   \<19:18\> = Config 1.
                                                                   \<17:16\> = Config 0. */
        uint64_t reserved_32_55        : 24;
        uint64_t enable                : 8;  /**< [ 63: 56](R/W) Enable test mode. For diagnostic use only.
                                                                 Internal:
                                                                 Once a bit is set, random backpressure is generated
                                                                 at the corresponding point to allow for more frequent backpressure.

                                                                 IOBN()_BP_TEST(0) - INRF: Defined by iobn_defs::inrf_bp_test_t.
                                                                 \<63\> = iow_imi_cr_debit  - backpressure credit returns from imi to iow for cr credits.
                                                                 \<62\> = iow_imi_req_debit - backpressure credit returns from imi to iow for req credits.
                                                                 \<61\> = rsvd1 - rsvd for future ncb buses
                                                                 \<60\> = iow_ncb1_req_arb_debit - backpressure from ncb1 request to iob_iow_req_arb for credits.
                                                                 \<59\> = iow_ncb0_req_arb_debit - backpressure from ncb0 request to iob_iow_req_arb for credits.
                                                                 \<58\> = rsvd0 - rsvd for future ncb buses
                                                                 \<57\> = iow_ncb1_cr_arb_debit  - backpressure from ncb0 CR to iob_iow_irf_arb for credits.
                                                                 \<56\> = iow_ncb0_cr_arb_debit  - backpressure from ncb0 CR to iob_iow_irf_arb for credits.

                                                                 \<page\>
                                                                 IOBN()_BP_TEST(1) - INRM: Defined by iobn_defs::inrm_bp_test_t
                                                                 \<63\> = LSW1 Request.
                                                                 \<62\> = LSW0 Request.
                                                                 \<61\> = NCBO1-RET.
                                                                 \<60\> = NCBO0-PRET.
                                                                 \<59\> = NCBO0-RET.
                                                                 \<58\> = MSH - DAT. 10x.
                                                                 \<57\> = MSH - RSP. 10x.
                                                                 \<56\> = MSH - REQ. 10x.

                                                                 \<page\>
                                                                 IOBN()_BP_TEST(2) - INRF: Defined by iobn_defs::inrf_bp_test_t.
                                                                 \<63\> = NCB2 ADD FLID - stop flow of NCBI FLID and CPID info from being passed to IOW.
                                                                 \<62\> = NCB1 ADD FLID - stop flow of NCBI FLID and CPID info from being passed to IOW.
                                                                 \<61\> = NCB0 ADD FLID - stop flow of NCBI FLID and CPID info from being passed to IOW.
                                                                 \<60\> = TBD.
                                                                 \<59\> = TBD.
                                                                 \<58\> = TBD.
                                                                 \<57\> = TBD.
                                                                 \<56\> = iut_smmu_bp - emulates backpressure to IUT from SMMU.

                                                                 \<page\>
                                                                 IOBN()_BP_TEST(3) - INRF: Defined by iobn_defs::inrm_bp_test_t.
                                                                 \<63\> = TBD.
                                                                 \<62\> = imi_retry_smmu
                                                                 \<61\> = imi_retry_sow
                                                                 \<60\> = imi_tx_dat_stcpid
                                                                 \<59\> = imi_tx_rsp
                                                                 \<58\> = LBK - DAT. 10x.
                                                                 \<57\> = LBK - RSP. 10x.
                                                                 \<56\> = LBK - REQ. 10x.

                                                                 \<page\>
                                                                 IOBN()_BP_TEST(4) - INRF: Defined by iobn_defs::inrm_bp_test_t.
                                                                 \<63\> = TBD.
                                                                 \<62\> = TBD.
                                                                 \<61\> = TBD.
                                                                 \<60\> = TBD.
                                                                 \<59\> = TBD.
                                                                 \<58\> = TBD.
                                                                 \<57\> = TBD.
                                                                 \<56\> = TBD.

                                                                 \<page\>
                                                                 IOBN()_BP_TEST(5) - INRF: Defined by iobn_defs::iow_ill_bp_test_t. See
                                                                 IOBN(0..3)_ILL_BPTEST_SEL for how to map outputs to a ncb arbid.
                                                                 \<63\> = irf__ill_rtn_crd0.cr.
                                                                 \<62\> = irf__ill_rtn_crd0.np.
                                                                 \<61\> = irf__ill_rtn_crd0.pr.
                                                                 \<60\> = irf__ill_rtn_crd0.ps.
                                                                 \<59\> = irf__ill_rtn_crd1.cr.
                                                                 \<58\> = irf__ill_rtn_crd1.np.
                                                                 \<57\> = irf__ill_rtn_crd1.pr.
                                                                 \<56\> = irf__ill_rtn_crd1.ps. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_iobnx_bp_testx_s cn; */
};
typedef union cavm_iobnx_bp_testx cavm_iobnx_bp_testx_t;

static inline uint64_t CAVM_IOBNX_BP_TESTX(uint64_t a, uint64_t b) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_IOBNX_BP_TESTX(uint64_t a, uint64_t b)
{
    if ((a<=2) && (b<=5))
        return 0x87e120083800ll + 0x1000000ll * ((a) & 0x3) + 8ll * ((b) & 0x7);
    __cavm_csr_fatal("IOBNX_BP_TESTX", 2, a, b, 0, 0, 0, 0);
}

#define typedef_CAVM_IOBNX_BP_TESTX(a,b) cavm_iobnx_bp_testx_t
#define bustype_CAVM_IOBNX_BP_TESTX(a,b) CSR_TYPE_RSL
#define basename_CAVM_IOBNX_BP_TESTX(a,b) "IOBNX_BP_TESTX"
#define device_bar_CAVM_IOBNX_BP_TESTX(a,b) 0x0 /* PF_BAR0 */
#define busnum_CAVM_IOBNX_BP_TESTX(a,b) (a)
#define arguments_CAVM_IOBNX_BP_TESTX(a,b) (a),(b),-1,-1

/**
 * Register (RSL) iobn#_cfg0
 *
 * IOBN General Configuration 0 Register
 */
union cavm_iobnx_cfg0
{
    uint64_t u;
    struct cavm_iobnx_cfg0_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_12_63        : 52;
        uint64_t clken                 : 4;  /**< [ 11:  8](R/W) Force the NCBO clock enable to be always on. For diagnostic use only.
                                                                 Each bit is control for a given NCB bus, where bit 8 is for NCB bus 0 and bit 11 is for NCB bus 3. */
        uint64_t dis_ncbo_cr_pois      : 4;  /**< [  7:  4](R/W) When set the IOBN will not send poison on NCBO CRs. [4] == NCB0,
                                                                 [5] == NCB1, [6] == NCB2, [7] == NCB3. */
        uint64_t reserved_1_3          : 3;
        uint64_t force_sclk_cond_clk_en : 1; /**< [  0:  0](R/W) Force on sclks. For diagnostic use only. */
#else /* Word 0 - Little Endian */
        uint64_t force_sclk_cond_clk_en : 1; /**< [  0:  0](R/W) Force on sclks. For diagnostic use only. */
        uint64_t reserved_1_3          : 3;
        uint64_t dis_ncbo_cr_pois      : 4;  /**< [  7:  4](R/W) When set the IOBN will not send poison on NCBO CRs. [4] == NCB0,
                                                                 [5] == NCB1, [6] == NCB2, [7] == NCB3. */
        uint64_t clken                 : 4;  /**< [ 11:  8](R/W) Force the NCBO clock enable to be always on. For diagnostic use only.
                                                                 Each bit is control for a given NCB bus, where bit 8 is for NCB bus 0 and bit 11 is for NCB bus 3. */
        uint64_t reserved_12_63        : 52;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_iobnx_cfg0_s cn; */
};
typedef union cavm_iobnx_cfg0 cavm_iobnx_cfg0_t;

static inline uint64_t CAVM_IOBNX_CFG0(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_IOBNX_CFG0(uint64_t a)
{
    if (a<=2)
        return 0x87e120002000ll + 0x1000000ll * ((a) & 0x3);
    __cavm_csr_fatal("IOBNX_CFG0", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_IOBNX_CFG0(a) cavm_iobnx_cfg0_t
#define bustype_CAVM_IOBNX_CFG0(a) CSR_TYPE_RSL
#define basename_CAVM_IOBNX_CFG0(a) "IOBNX_CFG0"
#define device_bar_CAVM_IOBNX_CFG0(a) 0x0 /* PF_BAR0 */
#define busnum_CAVM_IOBNX_CFG0(a) (a)
#define arguments_CAVM_IOBNX_CFG0(a) (a),-1,-1,-1

/**
 * Register (RSL) iobn#_cfg1
 *
 * IOBN General Configuration 1 Register
 */
union cavm_iobnx_cfg1
{
    uint64_t u;
    struct cavm_iobnx_cfg1_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_20_63        : 44;
        uint64_t smmu_rtry_psize       : 4;  /**< [ 19: 16](R/W) When set reserves entries from the retry buffer for SMMU requests. The SMMU pool
                                                                 will be used when all the shared pool entries are exhausted. */
        uint64_t reserved_12_15        : 4;
        uint64_t mem_rtry_psize        : 4;  /**< [ 11:  8](R/W) When set reserves entries from the retry buffer for memory requests. The memory
                                                                 pool will be used when all the shared pool entries are exhausted. */
        uint64_t reserved_4_7          : 4;
        uint64_t tlb_sync_dis          : 1;  /**< [  3:  3](R/W) When set the IOBN will return SYNC-RDY to the SMMU without waiting for
                                                                 outstanding request to receive responses. For diagnostic use only. */
        uint64_t reserved_1_2          : 2;
        uint64_t force_rclk_cond_clk_en : 1; /**< [  0:  0](R/W) Force rclk conditional clocks active. For diagnostic use only. */
#else /* Word 0 - Little Endian */
        uint64_t force_rclk_cond_clk_en : 1; /**< [  0:  0](R/W) Force rclk conditional clocks active. For diagnostic use only. */
        uint64_t reserved_1_2          : 2;
        uint64_t tlb_sync_dis          : 1;  /**< [  3:  3](R/W) When set the IOBN will return SYNC-RDY to the SMMU without waiting for
                                                                 outstanding request to receive responses. For diagnostic use only. */
        uint64_t reserved_4_7          : 4;
        uint64_t mem_rtry_psize        : 4;  /**< [ 11:  8](R/W) When set reserves entries from the retry buffer for memory requests. The memory
                                                                 pool will be used when all the shared pool entries are exhausted. */
        uint64_t reserved_12_15        : 4;
        uint64_t smmu_rtry_psize       : 4;  /**< [ 19: 16](R/W) When set reserves entries from the retry buffer for SMMU requests. The SMMU pool
                                                                 will be used when all the shared pool entries are exhausted. */
        uint64_t reserved_20_63        : 44;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_iobnx_cfg1_s cn; */
};
typedef union cavm_iobnx_cfg1 cavm_iobnx_cfg1_t;

static inline uint64_t CAVM_IOBNX_CFG1(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_IOBNX_CFG1(uint64_t a)
{
    if (a<=2)
        return 0x87e120082010ll + 0x1000000ll * ((a) & 0x3);
    __cavm_csr_fatal("IOBNX_CFG1", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_IOBNX_CFG1(a) cavm_iobnx_cfg1_t
#define bustype_CAVM_IOBNX_CFG1(a) CSR_TYPE_RSL
#define basename_CAVM_IOBNX_CFG1(a) "IOBNX_CFG1"
#define device_bar_CAVM_IOBNX_CFG1(a) 0x0 /* PF_BAR0 */
#define busnum_CAVM_IOBNX_CFG1(a) (a)
#define arguments_CAVM_IOBNX_CFG1(a) (a),-1,-1,-1

/**
 * Register (RSL) iobn#_const
 *
 * IOBN Constant Registers
 * This register returns discovery information.
 */
union cavm_iobnx_const
{
    uint64_t u;
    struct cavm_iobnx_const_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_20_63        : 44;
        uint64_t st_ncb_num            : 4;  /**< [ 19: 16](RO) Starting NCB Number for this IOB device. */
        uint64_t reserved_11_15        : 5;
        uint64_t ncbs                  : 3;  /**< [ 10:  8](RO) Number of physical NCB buses attached to this IOB. */
        uint64_t reserved_4_7          : 4;
        uint64_t lsw_pres              : 4;  /**< [  3:  0](RO) Bit set per NCB bus if LSW is present. */
#else /* Word 0 - Little Endian */
        uint64_t lsw_pres              : 4;  /**< [  3:  0](RO) Bit set per NCB bus if LSW is present. */
        uint64_t reserved_4_7          : 4;
        uint64_t ncbs                  : 3;  /**< [ 10:  8](RO) Number of physical NCB buses attached to this IOB. */
        uint64_t reserved_11_15        : 5;
        uint64_t st_ncb_num            : 4;  /**< [ 19: 16](RO) Starting NCB Number for this IOB device. */
        uint64_t reserved_20_63        : 44;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_iobnx_const_s cn; */
};
typedef union cavm_iobnx_const cavm_iobnx_const_t;

static inline uint64_t CAVM_IOBNX_CONST(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_IOBNX_CONST(uint64_t a)
{
    if (a<=2)
        return 0x87e120000000ll + 0x1000000ll * ((a) & 0x3);
    __cavm_csr_fatal("IOBNX_CONST", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_IOBNX_CONST(a) cavm_iobnx_const_t
#define bustype_CAVM_IOBNX_CONST(a) CSR_TYPE_RSL
#define basename_CAVM_IOBNX_CONST(a) "IOBNX_CONST"
#define device_bar_CAVM_IOBNX_CONST(a) 0x0 /* PF_BAR0 */
#define busnum_CAVM_IOBNX_CONST(a) (a)
#define arguments_CAVM_IOBNX_CONST(a) (a),-1,-1,-1

/**
 * Register (RSL) iobn#_dll
 *
 * INTERNAL: IOBN Core-Clock DLL Status Register
 *
 * Status of the CCU core-clock DLL. For diagnostic use only.
 */
union cavm_iobnx_dll
{
    uint64_t u;
    struct cavm_iobnx_dll_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_35_63        : 29;
        uint64_t dbg_window            : 3;  /**< [ 34: 32](R/W/H) Defines a debug window, during which the DLL settings and the phase detector
                                                                 outputs will be monitored. The min and the max DLL setting during that window is
                                                                 going to be reported as well as any illegal phase detector outputs. Every write
                                                                 to the [DBG_WINDOW] resets [ILLEGAL_PD_REVERSED], [ILLEGAL_PD_LATE],
                                                                 [ILLEGAL_PD_EARLY], [MAX_DLL_SETTING] and [MIN_DLL_SETTING]. The debug window
                                                                 will correspond to the following number of rclk cycles based on the [DBG_WINDOW]
                                                                 value.
                                                                 0x0 = Indefinetly.
                                                                 0x1 = 2 ^ 12 core clock cycles.
                                                                 0x2 = 2 ^ 18 core clock cycles.
                                                                 0x3 = 2 ^ 24 core clock cycles.
                                                                 0x4 = 2 ^ 30 core clock cycles.
                                                                 0x5 = 2 ^ 36 core clock cycles.
                                                                 0x6 = 2 ^ 42 core clock cycles.
                                                                 0x7 = 2 ^ 48 core clock cycles. */
        uint64_t dbg_window_done       : 1;  /**< [ 31: 31](RO/H) Indicates if the debug window set by [DBG_WINDOW] is completed. */
        uint64_t illegal_pd_reversed   : 1;  /**< [ 30: 30](RO/H) clk_fast_rgt and clk_fast_lft outputs of the phase detector had concurrently an
                                                                 illegal reading during the last debug window set by [DBG_WINDOW]. */
        uint64_t illegal_pd_late       : 1;  /**< [ 29: 29](RO/H) clk_fast_rgt output of the phase detector had an illegal reading (1) during the
                                                                 last debug window set by [DBG_WINDOW]. */
        uint64_t illegal_pd_early      : 1;  /**< [ 28: 28](RO/H) clk_fast_lft output of the phase detector had an illegal reading (0) during the
                                                                 last debug window set by [DBG_WINDOW]. */
        uint64_t reserved_27           : 1;
        uint64_t max_dll_setting       : 7;  /**< [ 26: 20](RO/H) Max reported DLL setting during the last debug window set by [DBG_WINDOW]. */
        uint64_t reserved_19           : 1;
        uint64_t min_dll_setting       : 7;  /**< [ 18: 12](RO/H) Min reported DLL setting during the last debug window set by [DBG_WINDOW]. */
        uint64_t pd_out                : 3;  /**< [ 11:  9](RO/H) Synchronized output from CCU phase detector:
                                                                 \<11\> = clk_fast_mid.
                                                                 \<10\> = clk_fast_lft.
                                                                 \<9\> = clk_fast_rgt. */
        uint64_t dll_lock              : 1;  /**< [  8:  8](RO/H) The dll_lock signal from ROC core-clock DLL, from the positive edge of refclk. */
        uint64_t reserved_7            : 1;
        uint64_t dll_setting           : 7;  /**< [  6:  0](RO/H) The ROC core-clock DLL setting, from the negative edge of refclk. */
#else /* Word 0 - Little Endian */
        uint64_t dll_setting           : 7;  /**< [  6:  0](RO/H) The ROC core-clock DLL setting, from the negative edge of refclk. */
        uint64_t reserved_7            : 1;
        uint64_t dll_lock              : 1;  /**< [  8:  8](RO/H) The dll_lock signal from ROC core-clock DLL, from the positive edge of refclk. */
        uint64_t pd_out                : 3;  /**< [ 11:  9](RO/H) Synchronized output from CCU phase detector:
                                                                 \<11\> = clk_fast_mid.
                                                                 \<10\> = clk_fast_lft.
                                                                 \<9\> = clk_fast_rgt. */
        uint64_t min_dll_setting       : 7;  /**< [ 18: 12](RO/H) Min reported DLL setting during the last debug window set by [DBG_WINDOW]. */
        uint64_t reserved_19           : 1;
        uint64_t max_dll_setting       : 7;  /**< [ 26: 20](RO/H) Max reported DLL setting during the last debug window set by [DBG_WINDOW]. */
        uint64_t reserved_27           : 1;
        uint64_t illegal_pd_early      : 1;  /**< [ 28: 28](RO/H) clk_fast_lft output of the phase detector had an illegal reading (0) during the
                                                                 last debug window set by [DBG_WINDOW]. */
        uint64_t illegal_pd_late       : 1;  /**< [ 29: 29](RO/H) clk_fast_rgt output of the phase detector had an illegal reading (1) during the
                                                                 last debug window set by [DBG_WINDOW]. */
        uint64_t illegal_pd_reversed   : 1;  /**< [ 30: 30](RO/H) clk_fast_rgt and clk_fast_lft outputs of the phase detector had concurrently an
                                                                 illegal reading during the last debug window set by [DBG_WINDOW]. */
        uint64_t dbg_window_done       : 1;  /**< [ 31: 31](RO/H) Indicates if the debug window set by [DBG_WINDOW] is completed. */
        uint64_t dbg_window            : 3;  /**< [ 34: 32](R/W/H) Defines a debug window, during which the DLL settings and the phase detector
                                                                 outputs will be monitored. The min and the max DLL setting during that window is
                                                                 going to be reported as well as any illegal phase detector outputs. Every write
                                                                 to the [DBG_WINDOW] resets [ILLEGAL_PD_REVERSED], [ILLEGAL_PD_LATE],
                                                                 [ILLEGAL_PD_EARLY], [MAX_DLL_SETTING] and [MIN_DLL_SETTING]. The debug window
                                                                 will correspond to the following number of rclk cycles based on the [DBG_WINDOW]
                                                                 value.
                                                                 0x0 = Indefinetly.
                                                                 0x1 = 2 ^ 12 core clock cycles.
                                                                 0x2 = 2 ^ 18 core clock cycles.
                                                                 0x3 = 2 ^ 24 core clock cycles.
                                                                 0x4 = 2 ^ 30 core clock cycles.
                                                                 0x5 = 2 ^ 36 core clock cycles.
                                                                 0x6 = 2 ^ 42 core clock cycles.
                                                                 0x7 = 2 ^ 48 core clock cycles. */
        uint64_t reserved_35_63        : 29;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_iobnx_dll_s cn; */
};
typedef union cavm_iobnx_dll cavm_iobnx_dll_t;

static inline uint64_t CAVM_IOBNX_DLL(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_IOBNX_DLL(uint64_t a)
{
    if (a<=2)
        return 0x87e1200b0180ll + 0x1000000ll * ((a) & 0x3);
    __cavm_csr_fatal("IOBNX_DLL", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_IOBNX_DLL(a) cavm_iobnx_dll_t
#define bustype_CAVM_IOBNX_DLL(a) CSR_TYPE_RSL
#define basename_CAVM_IOBNX_DLL(a) "IOBNX_DLL"
#define device_bar_CAVM_IOBNX_DLL(a) 0x0 /* PF_BAR0 */
#define busnum_CAVM_IOBNX_DLL(a) (a)
#define arguments_CAVM_IOBNX_DLL(a) (a),-1,-1,-1

/**
 * Register (RSL) iobn#_dom#_bus#_streams
 *
 * IOBN Domain Bus Permit Registers
 * This register sets the permissions for a NCBI transaction (which are DMA
 * transactions or MSI-X writes), for requests for NCB device virtual-functions
 * and bridges.
 *
 * Index {b} corresponds to the stream's domain (stream_id\<21:16\>).
 *
 * Index {c} corresponds to the stream's bus number (stream_id\<15:8\>).
 *
 * For each combination of index {b} and {c}, each index {a} (the IOB number) must be
 * programmed to the same value.
 *
 * Streams which hit index {c}=0x0 are also affected by IOBN()_DOM()_DEV()_STREAMS.
 * Streams which hit index {b}=PCC_DEV_CON_E::MRML\<21:16\>,
 * {c}=PCC_DEV_CON_E::MRML\<15:8\> are also affected by IOBN()_RSL()_STREAMS.
 * Both of those alternative registers provide better granularity, so those indices
 * into this register should be left permissive (value of 0x0).
 */
union cavm_iobnx_domx_busx_streams
{
    uint64_t u;
    struct cavm_iobnx_domx_busx_streams_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_2_63         : 62;
        uint64_t strm_nsec             : 1;  /**< [  1:  1](SR/W) Stream nonsecure.

                                                                   0 = The device's stream ID is marked secure headed into the SMMU.  If the
                                                                   device is making a nonphysical request, the SMMU will use secure world
                                                                   lookup. The SMMU may, if properly configured, generate an outgoing physical
                                                                   address that is secure.

                                                                   1 = The device's stream ID is marked nonsecure headed into the SMMU.  If the
                                                                   device is making a nonphysical request, the SMMU will use nonsecure world
                                                                   lookup. The SMMU outgoing physical address will be nonsecure.

                                                                   [STRM_NSEC] is ignored if the device is making a physical request (as these
                                                                   transactions bypass the SMMU translation process).

                                                                   Typically firmware sets [PHYS_NSEC] and [STRM_NSEC] the same. */
        uint64_t phys_nsec             : 1;  /**< [  0:  0](SR/W) Physical nonsecure.
                                                                   0 = When the device makes a physical request, IOB will use the device's
                                                                   requested secure bit to determine if the request to DRAM/LLC is secure or not.
                                                                   1 = When the device makes a physical request, IOB will squash the
                                                                   device's secure request and issue the request to DRAM/LLC as nonsecure.

                                                                   Ignored if a device makes a nonphysical request.  (As nonphysical requests
                                                                   cause the SMMU to generate the SMMU-outgoing secure bit based on the SMMU
                                                                   translation process, including [STRM_NSEC].)

                                                                   Typically firmware sets [PHYS_NSEC] and [STRM_NSEC] the same. */
#else /* Word 0 - Little Endian */
        uint64_t phys_nsec             : 1;  /**< [  0:  0](SR/W) Physical nonsecure.
                                                                   0 = When the device makes a physical request, IOB will use the device's
                                                                   requested secure bit to determine if the request to DRAM/LLC is secure or not.
                                                                   1 = When the device makes a physical request, IOB will squash the
                                                                   device's secure request and issue the request to DRAM/LLC as nonsecure.

                                                                   Ignored if a device makes a nonphysical request.  (As nonphysical requests
                                                                   cause the SMMU to generate the SMMU-outgoing secure bit based on the SMMU
                                                                   translation process, including [STRM_NSEC].)

                                                                   Typically firmware sets [PHYS_NSEC] and [STRM_NSEC] the same. */
        uint64_t strm_nsec             : 1;  /**< [  1:  1](SR/W) Stream nonsecure.

                                                                   0 = The device's stream ID is marked secure headed into the SMMU.  If the
                                                                   device is making a nonphysical request, the SMMU will use secure world
                                                                   lookup. The SMMU may, if properly configured, generate an outgoing physical
                                                                   address that is secure.

                                                                   1 = The device's stream ID is marked nonsecure headed into the SMMU.  If the
                                                                   device is making a nonphysical request, the SMMU will use nonsecure world
                                                                   lookup. The SMMU outgoing physical address will be nonsecure.

                                                                   [STRM_NSEC] is ignored if the device is making a physical request (as these
                                                                   transactions bypass the SMMU translation process).

                                                                   Typically firmware sets [PHYS_NSEC] and [STRM_NSEC] the same. */
        uint64_t reserved_2_63         : 62;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_iobnx_domx_busx_streams_s cn; */
};
typedef union cavm_iobnx_domx_busx_streams cavm_iobnx_domx_busx_streams_t;

static inline uint64_t CAVM_IOBNX_DOMX_BUSX_STREAMS(uint64_t a, uint64_t b, uint64_t c) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_IOBNX_DOMX_BUSX_STREAMS(uint64_t a, uint64_t b, uint64_t c)
{
    if ((a<=2) && (b<=14) && (c<=255))
        return 0x87e120040000ll + 0x1000000ll * ((a) & 0x3) + 0x800ll * ((b) & 0xf) + 8ll * ((c) & 0xff);
    __cavm_csr_fatal("IOBNX_DOMX_BUSX_STREAMS", 3, a, b, c, 0, 0, 0);
}

#define typedef_CAVM_IOBNX_DOMX_BUSX_STREAMS(a,b,c) cavm_iobnx_domx_busx_streams_t
#define bustype_CAVM_IOBNX_DOMX_BUSX_STREAMS(a,b,c) CSR_TYPE_RSL
#define basename_CAVM_IOBNX_DOMX_BUSX_STREAMS(a,b,c) "IOBNX_DOMX_BUSX_STREAMS"
#define device_bar_CAVM_IOBNX_DOMX_BUSX_STREAMS(a,b,c) 0x0 /* PF_BAR0 */
#define busnum_CAVM_IOBNX_DOMX_BUSX_STREAMS(a,b,c) (a)
#define arguments_CAVM_IOBNX_DOMX_BUSX_STREAMS(a,b,c) (a),(b),(c),-1

/**
 * Register (RSL) iobn#_dom#_dev#_streams
 *
 * IOBN Device Bus Permit Registers
 * This register sets the permissions for a NCBI transaction (which are DMA
 * transactions or MSI-X writes), for requests for NCB device physicical-functions,
 * i.e. those where:
 *
 *   _ stream_id\<15:8\> = 0x0.
 *
 * Index {a} corresponds to the stream's domain number (stream_id\<21:16\>).
 *
 * Index {b} corresponds to the non-ARI ECAM device number (stream_id\<7:3\>).
 *
 * For each combination of index {b} and {c}, each index {a} (the IOB number) must be
 * programmed to the same value.
 */
union cavm_iobnx_domx_devx_streams
{
    uint64_t u;
    struct cavm_iobnx_domx_devx_streams_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_2_63         : 62;
        uint64_t strm_nsec             : 1;  /**< [  1:  1](SR/W) Stream nonsecure.

                                                                   0 = The device's stream ID is marked secure headed into the SMMU.  If the
                                                                   device is making a nonphysical request, the SMMU will use secure world
                                                                   lookup. The SMMU may, if properly configured, generate an outgoing physical
                                                                   address that is secure.

                                                                   1 = The device's stream ID is marked nonsecure headed into the SMMU.  If the
                                                                   device is making a nonphysical request, the SMMU will use nonsecure world
                                                                   lookup. The SMMU outgoing physical address will be nonsecure.

                                                                   [STRM_NSEC] is ignored if the device is making a physical request (as these
                                                                   transactions bypass the SMMU translation process).

                                                                   Typically firmware sets [PHYS_NSEC] and [STRM_NSEC] the same. */
        uint64_t phys_nsec             : 1;  /**< [  0:  0](SR/W) Physical nonsecure.
                                                                   0 = When the device makes a physical request, IOB will use the device's
                                                                   requested secure bit to determine if the request to DRAM/LLC is secure or not.
                                                                   1 = When the device makes a physical request, IOB will squash the
                                                                   device's secure request and issue the request to DRAM/LLC as nonsecure.

                                                                   Ignored if a device makes a nonphysical request.  (As nonphysical requests
                                                                   cause the SMMU to generate the SMMU-outgoing secure bit based on the SMMU
                                                                   translation process, including [STRM_NSEC].)

                                                                   Typically firmware sets [PHYS_NSEC] and [STRM_NSEC] the same. */
#else /* Word 0 - Little Endian */
        uint64_t phys_nsec             : 1;  /**< [  0:  0](SR/W) Physical nonsecure.
                                                                   0 = When the device makes a physical request, IOB will use the device's
                                                                   requested secure bit to determine if the request to DRAM/LLC is secure or not.
                                                                   1 = When the device makes a physical request, IOB will squash the
                                                                   device's secure request and issue the request to DRAM/LLC as nonsecure.

                                                                   Ignored if a device makes a nonphysical request.  (As nonphysical requests
                                                                   cause the SMMU to generate the SMMU-outgoing secure bit based on the SMMU
                                                                   translation process, including [STRM_NSEC].)

                                                                   Typically firmware sets [PHYS_NSEC] and [STRM_NSEC] the same. */
        uint64_t strm_nsec             : 1;  /**< [  1:  1](SR/W) Stream nonsecure.

                                                                   0 = The device's stream ID is marked secure headed into the SMMU.  If the
                                                                   device is making a nonphysical request, the SMMU will use secure world
                                                                   lookup. The SMMU may, if properly configured, generate an outgoing physical
                                                                   address that is secure.

                                                                   1 = The device's stream ID is marked nonsecure headed into the SMMU.  If the
                                                                   device is making a nonphysical request, the SMMU will use nonsecure world
                                                                   lookup. The SMMU outgoing physical address will be nonsecure.

                                                                   [STRM_NSEC] is ignored if the device is making a physical request (as these
                                                                   transactions bypass the SMMU translation process).

                                                                   Typically firmware sets [PHYS_NSEC] and [STRM_NSEC] the same. */
        uint64_t reserved_2_63         : 62;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_iobnx_domx_devx_streams_s cn; */
};
typedef union cavm_iobnx_domx_devx_streams cavm_iobnx_domx_devx_streams_t;

static inline uint64_t CAVM_IOBNX_DOMX_DEVX_STREAMS(uint64_t a, uint64_t b, uint64_t c) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_IOBNX_DOMX_DEVX_STREAMS(uint64_t a, uint64_t b, uint64_t c)
{
    if ((a<=2) && (b<=14) && (c<=31))
        return 0x87e120010000ll + 0x1000000ll * ((a) & 0x3) + 0x100ll * ((b) & 0xf) + 8ll * ((c) & 0x1f);
    __cavm_csr_fatal("IOBNX_DOMX_DEVX_STREAMS", 3, a, b, c, 0, 0, 0);
}

#define typedef_CAVM_IOBNX_DOMX_DEVX_STREAMS(a,b,c) cavm_iobnx_domx_devx_streams_t
#define bustype_CAVM_IOBNX_DOMX_DEVX_STREAMS(a,b,c) CSR_TYPE_RSL
#define basename_CAVM_IOBNX_DOMX_DEVX_STREAMS(a,b,c) "IOBNX_DOMX_DEVX_STREAMS"
#define device_bar_CAVM_IOBNX_DOMX_DEVX_STREAMS(a,b,c) 0x0 /* PF_BAR0 */
#define busnum_CAVM_IOBNX_DOMX_DEVX_STREAMS(a,b,c) (a)
#define arguments_CAVM_IOBNX_DOMX_DEVX_STREAMS(a,b,c) (a),(b),(c),-1

/**
 * Register (RSL) iobn#_eco_rclk
 *
 * INTERNAL: IOBN ECO RCLK Register
 */
union cavm_iobnx_eco_rclk
{
    uint64_t u;
    struct cavm_iobnx_eco_rclk_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t eco_rw                : 64; /**< [ 63:  0](R/W) Reserved for ECO usage. */
#else /* Word 0 - Little Endian */
        uint64_t eco_rw                : 64; /**< [ 63:  0](R/W) Reserved for ECO usage. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_iobnx_eco_rclk_s cn; */
};
typedef union cavm_iobnx_eco_rclk cavm_iobnx_eco_rclk_t;

static inline uint64_t CAVM_IOBNX_ECO_RCLK(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_IOBNX_ECO_RCLK(uint64_t a)
{
    if (a<=2)
        return 0x87e120083038ll + 0x1000000ll * ((a) & 0x3);
    __cavm_csr_fatal("IOBNX_ECO_RCLK", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_IOBNX_ECO_RCLK(a) cavm_iobnx_eco_rclk_t
#define bustype_CAVM_IOBNX_ECO_RCLK(a) CSR_TYPE_RSL
#define basename_CAVM_IOBNX_ECO_RCLK(a) "IOBNX_ECO_RCLK"
#define device_bar_CAVM_IOBNX_ECO_RCLK(a) 0x0 /* PF_BAR0 */
#define busnum_CAVM_IOBNX_ECO_RCLK(a) (a)
#define arguments_CAVM_IOBNX_ECO_RCLK(a) (a),-1,-1,-1

/**
 * Register (RSL) iobn#_eco_sclk
 *
 * INTERNAL: IOBN ECO SCLK Register
 */
union cavm_iobnx_eco_sclk
{
    uint64_t u;
    struct cavm_iobnx_eco_sclk_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t eco_rw                : 64; /**< [ 63:  0](R/W) Reserved for ECO usage. */
#else /* Word 0 - Little Endian */
        uint64_t eco_rw                : 64; /**< [ 63:  0](R/W) Reserved for ECO usage. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_iobnx_eco_sclk_s cn; */
};
typedef union cavm_iobnx_eco_sclk cavm_iobnx_eco_sclk_t;

static inline uint64_t CAVM_IOBNX_ECO_SCLK(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_IOBNX_ECO_SCLK(uint64_t a)
{
    if (a<=2)
        return 0x87e120003030ll + 0x1000000ll * ((a) & 0x3);
    __cavm_csr_fatal("IOBNX_ECO_SCLK", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_IOBNX_ECO_SCLK(a) cavm_iobnx_eco_sclk_t
#define bustype_CAVM_IOBNX_ECO_SCLK(a) CSR_TYPE_RSL
#define basename_CAVM_IOBNX_ECO_SCLK(a) "IOBNX_ECO_SCLK"
#define device_bar_CAVM_IOBNX_ECO_SCLK(a) 0x0 /* PF_BAR0 */
#define busnum_CAVM_IOBNX_ECO_SCLK(a) (a)
#define arguments_CAVM_IOBNX_ECO_SCLK(a) (a),-1,-1,-1

/**
 * Register (RSL) iobn#_err_ena
 *
 * IOBN Error Enable Register
 * Controls what errors are logged into IOBN()_INB_ERR_STATUS and IOBN()_OUTB_ERR_STATUS registers.
 */
union cavm_iobnx_err_ena
{
    uint64_t u;
    struct cavm_iobnx_err_ena_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_13_63        : 51;
        uint64_t outb_err_enb          : 5;  /**< [ 12:  8](R/W) Each bit if set enables logging errors, with bit numbers defined by IOBN_OUTB_ERR_E - 1. */
        uint64_t reserved_2_7          : 6;
        uint64_t inb_err_enb           : 2;  /**< [  1:  0](R/W) Each bit if set enables logging errors, with bit numbers defined by IOBN_INB_ERR_E - 1. */
#else /* Word 0 - Little Endian */
        uint64_t inb_err_enb           : 2;  /**< [  1:  0](R/W) Each bit if set enables logging errors, with bit numbers defined by IOBN_INB_ERR_E - 1. */
        uint64_t reserved_2_7          : 6;
        uint64_t outb_err_enb          : 5;  /**< [ 12:  8](R/W) Each bit if set enables logging errors, with bit numbers defined by IOBN_OUTB_ERR_E - 1. */
        uint64_t reserved_13_63        : 51;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_iobnx_err_ena_s cn; */
};
typedef union cavm_iobnx_err_ena cavm_iobnx_err_ena_t;

static inline uint64_t CAVM_IOBNX_ERR_ENA(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_IOBNX_ERR_ENA(uint64_t a)
{
    if (a<=2)
        return 0x87e120083080ll + 0x1000000ll * ((a) & 0x3);
    __cavm_csr_fatal("IOBNX_ERR_ENA", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_IOBNX_ERR_ENA(a) cavm_iobnx_err_ena_t
#define bustype_CAVM_IOBNX_ERR_ENA(a) CSR_TYPE_RSL
#define basename_CAVM_IOBNX_ERR_ENA(a) "IOBNX_ERR_ENA"
#define device_bar_CAVM_IOBNX_ERR_ENA(a) 0x0 /* PF_BAR0 */
#define busnum_CAVM_IOBNX_ERR_ENA(a) (a)
#define arguments_CAVM_IOBNX_ERR_ENA(a) (a),-1,-1,-1

/**
 * Register (RSL) iobn#_ill_bptest_sel
 *
 * INTERNAL: IOBN IOW LINK LIST Backpressure Test Select Registers
 *
 * Register selects which NCB arbid to apply bp_test(5) outputs to.
 */
union cavm_iobnx_ill_bptest_sel
{
    uint64_t u;
    struct cavm_iobnx_ill_bptest_sel_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_14_63        : 50;
        uint64_t ncb_sel1              : 2;  /**< [ 13: 12](R/W) Selects the NCB bus number to apply bp_test(5) irf__ill_rtn_crd1 outputs to. */
        uint64_t arbid_sel1            : 4;  /**< [ 11:  8](R/W) Selects the NCB arbid to apply bp_test(5) irf__ill_rtn_crd1 outputs to. */
        uint64_t reserved_6_7          : 2;
        uint64_t ncb_sel0              : 2;  /**< [  5:  4](R/W) Selects the NCB bus number to apply bp_test(5) irf__ill_rtn_crd0 outputs to. */
        uint64_t arbid_sel0            : 4;  /**< [  3:  0](R/W) Selects the NCB arbid to apply bp_test(5) irf__ill_rtn_crd0 outputs to. */
#else /* Word 0 - Little Endian */
        uint64_t arbid_sel0            : 4;  /**< [  3:  0](R/W) Selects the NCB arbid to apply bp_test(5) irf__ill_rtn_crd0 outputs to. */
        uint64_t ncb_sel0              : 2;  /**< [  5:  4](R/W) Selects the NCB bus number to apply bp_test(5) irf__ill_rtn_crd0 outputs to. */
        uint64_t reserved_6_7          : 2;
        uint64_t arbid_sel1            : 4;  /**< [ 11:  8](R/W) Selects the NCB arbid to apply bp_test(5) irf__ill_rtn_crd1 outputs to. */
        uint64_t ncb_sel1              : 2;  /**< [ 13: 12](R/W) Selects the NCB bus number to apply bp_test(5) irf__ill_rtn_crd1 outputs to. */
        uint64_t reserved_14_63        : 50;
#endif /* Word 0 - End */
    } s;
    struct cavm_iobnx_ill_bptest_sel_cn
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_16_63        : 48;
        uint64_t reserved_14_15        : 2;
        uint64_t ncb_sel1              : 2;  /**< [ 13: 12](R/W) Selects the NCB bus number to apply bp_test(5) irf__ill_rtn_crd1 outputs to. */
        uint64_t arbid_sel1            : 4;  /**< [ 11:  8](R/W) Selects the NCB arbid to apply bp_test(5) irf__ill_rtn_crd1 outputs to. */
        uint64_t reserved_6_7          : 2;
        uint64_t ncb_sel0              : 2;  /**< [  5:  4](R/W) Selects the NCB bus number to apply bp_test(5) irf__ill_rtn_crd0 outputs to. */
        uint64_t arbid_sel0            : 4;  /**< [  3:  0](R/W) Selects the NCB arbid to apply bp_test(5) irf__ill_rtn_crd0 outputs to. */
#else /* Word 0 - Little Endian */
        uint64_t arbid_sel0            : 4;  /**< [  3:  0](R/W) Selects the NCB arbid to apply bp_test(5) irf__ill_rtn_crd0 outputs to. */
        uint64_t ncb_sel0              : 2;  /**< [  5:  4](R/W) Selects the NCB bus number to apply bp_test(5) irf__ill_rtn_crd0 outputs to. */
        uint64_t reserved_6_7          : 2;
        uint64_t arbid_sel1            : 4;  /**< [ 11:  8](R/W) Selects the NCB arbid to apply bp_test(5) irf__ill_rtn_crd1 outputs to. */
        uint64_t ncb_sel1              : 2;  /**< [ 13: 12](R/W) Selects the NCB bus number to apply bp_test(5) irf__ill_rtn_crd1 outputs to. */
        uint64_t reserved_14_15        : 2;
        uint64_t reserved_16_63        : 48;
#endif /* Word 0 - End */
    } cn;
};
typedef union cavm_iobnx_ill_bptest_sel cavm_iobnx_ill_bptest_sel_t;

static inline uint64_t CAVM_IOBNX_ILL_BPTEST_SEL(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_IOBNX_ILL_BPTEST_SEL(uint64_t a)
{
    if (a<=2)
        return 0x87e120083098ll + 0x1000000ll * ((a) & 0x3);
    __cavm_csr_fatal("IOBNX_ILL_BPTEST_SEL", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_IOBNX_ILL_BPTEST_SEL(a) cavm_iobnx_ill_bptest_sel_t
#define bustype_CAVM_IOBNX_ILL_BPTEST_SEL(a) CSR_TYPE_RSL
#define basename_CAVM_IOBNX_ILL_BPTEST_SEL(a) "IOBNX_ILL_BPTEST_SEL"
#define device_bar_CAVM_IOBNX_ILL_BPTEST_SEL(a) 0x0 /* PF_BAR0 */
#define busnum_CAVM_IOBNX_ILL_BPTEST_SEL(a) (a)
#define arguments_CAVM_IOBNX_ILL_BPTEST_SEL(a) (a),-1,-1,-1

/**
 * Register (RSL) iobn#_inb_err_status
 *
 * IOBN In Bound Error Status Register
 * Inbound error status register logs first error detected on inbound control path.
 */
union cavm_iobnx_inb_err_status
{
    uint64_t u;
    struct cavm_iobnx_inb_err_status_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_60_63        : 4;
        uint64_t arbid                 : 4;  /**< [ 59: 56](RO/H) Captured flat ARBID when error condition is detected on inbound processing path.
                                                                 Valid when [ERR_TYPE] is nonzero */
        uint64_t reserved_52_55        : 4;
        uint64_t address               : 40; /**< [ 51: 12](RO/H) Captured address when error condition is detected on inbound processing path. Valid when
                                                                 [ERR_TYPE] is nonzero. */
        uint64_t reserved_2_11         : 10;
        uint64_t err_type              : 2;  /**< [  1:  0](R/W1C/H) Error type. Bits enumerated by IOBN_INB_ERR_E. */
#else /* Word 0 - Little Endian */
        uint64_t err_type              : 2;  /**< [  1:  0](R/W1C/H) Error type. Bits enumerated by IOBN_INB_ERR_E. */
        uint64_t reserved_2_11         : 10;
        uint64_t address               : 40; /**< [ 51: 12](RO/H) Captured address when error condition is detected on inbound processing path. Valid when
                                                                 [ERR_TYPE] is nonzero. */
        uint64_t reserved_52_55        : 4;
        uint64_t arbid                 : 4;  /**< [ 59: 56](RO/H) Captured flat ARBID when error condition is detected on inbound processing path.
                                                                 Valid when [ERR_TYPE] is nonzero */
        uint64_t reserved_60_63        : 4;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_iobnx_inb_err_status_s cn; */
};
typedef union cavm_iobnx_inb_err_status cavm_iobnx_inb_err_status_t;

static inline uint64_t CAVM_IOBNX_INB_ERR_STATUS(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_IOBNX_INB_ERR_STATUS(uint64_t a)
{
    if (a<=2)
        return 0x87e120083088ll + 0x1000000ll * ((a) & 0x3);
    __cavm_csr_fatal("IOBNX_INB_ERR_STATUS", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_IOBNX_INB_ERR_STATUS(a) cavm_iobnx_inb_err_status_t
#define bustype_CAVM_IOBNX_INB_ERR_STATUS(a) CSR_TYPE_RSL
#define basename_CAVM_IOBNX_INB_ERR_STATUS(a) "IOBNX_INB_ERR_STATUS"
#define device_bar_CAVM_IOBNX_INB_ERR_STATUS(a) 0x0 /* PF_BAR0 */
#define busnum_CAVM_IOBNX_INB_ERR_STATUS(a) (a)
#define arguments_CAVM_IOBNX_INB_ERR_STATUS(a) (a),-1,-1,-1

/**
 * Register (RSL) iobn#_int_ena_w1c
 *
 * IOBN Interrupt Enable Clear Register
 * This register clears interrupt enable bits.
 */
union cavm_iobnx_int_ena_w1c
{
    uint64_t u;
    struct cavm_iobnx_int_ena_w1c_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_33_63        : 31;
        uint64_t msh_dato_sbe          : 1;  /**< [ 32: 32](R/W1C/H) Reads or clears enable for IOBN(0..2)_INT_SUM[MSH_DATO_SBE]. */
        uint64_t msh_dato_dbe          : 1;  /**< [ 31: 31](R/W1C/H) Reads or clears enable for IOBN(0..2)_INT_SUM[MSH_DATO_DBE]. */
        uint64_t msh_smmu_psn          : 1;  /**< [ 30: 30](R/W1C/H) Reads or clears enable for IOBN(0..2)_INT_SUM[MSH_SMMU_PSN]. */
        uint64_t reserved_28_29        : 2;
        uint64_t msh_rsp_chk           : 1;  /**< [ 27: 27](R/W1C/H) Reads or clears enable for IOBN(0..2)_INT_SUM[MSH_RSP_CHK]. */
        uint64_t msh_snp_chk           : 1;  /**< [ 26: 26](R/W1C/H) Reads or clears enable for IOBN(0..2)_INT_SUM[MSH_SNP_CHK]. */
        uint64_t msh_req_chk           : 1;  /**< [ 25: 25](R/W1C/H) Reads or clears enable for IOBN(0..2)_INT_SUM[MSH_REQ_CHK]. */
        uint64_t msh_dat_chk           : 1;  /**< [ 24: 24](R/W1C/H) Reads or clears enable for IOBN(0..2)_INT_SUM[MSH_DAT_CHK]. */
        uint64_t reserved_22_23        : 2;
        uint64_t msh_dat_sbe           : 1;  /**< [ 21: 21](R/W1C/H) Reads or clears enable for IOBN(0..2)_INT_SUM[MSH_DAT_SBE]. */
        uint64_t msh_dat_dbe           : 1;  /**< [ 20: 20](R/W1C/H) Reads or clears enable for IOBN(0..2)_INT_SUM[MSH_DAT_DBE]. */
        uint64_t ncbo_flt_cr           : 4;  /**< [ 19: 16](R/W1C/H) Reads or clears enable for IOBN(0..2)_INT_SUM[NCBO_FLT_CR]. */
        uint64_t ncbo_pois_cr          : 4;  /**< [ 15: 12](R/W1C/H) Reads or clears enable for IOBN(0..2)_INT_SUM[NCBO_POIS_CR]. */
        uint64_t ncbi_unexp_cr         : 4;  /**< [ 11:  8](R/W1C/H) Reads or clears enable for IOBN(0..2)_INT_SUM[NCBI_UNEXP_CR]. */
        uint64_t ncbo_ncb_psn          : 4;  /**< [  7:  4](R/W1C/H) Reads or clears enable for IOBN(0..2)_INT_SUM[NCBO_NCB_PSN]. */
        uint64_t ncbo_to               : 4;  /**< [  3:  0](R/W1C/H) Reads or clears enable for IOBN(0..2)_INT_SUM[NCBO_TO]. */
#else /* Word 0 - Little Endian */
        uint64_t ncbo_to               : 4;  /**< [  3:  0](R/W1C/H) Reads or clears enable for IOBN(0..2)_INT_SUM[NCBO_TO]. */
        uint64_t ncbo_ncb_psn          : 4;  /**< [  7:  4](R/W1C/H) Reads or clears enable for IOBN(0..2)_INT_SUM[NCBO_NCB_PSN]. */
        uint64_t ncbi_unexp_cr         : 4;  /**< [ 11:  8](R/W1C/H) Reads or clears enable for IOBN(0..2)_INT_SUM[NCBI_UNEXP_CR]. */
        uint64_t ncbo_pois_cr          : 4;  /**< [ 15: 12](R/W1C/H) Reads or clears enable for IOBN(0..2)_INT_SUM[NCBO_POIS_CR]. */
        uint64_t ncbo_flt_cr           : 4;  /**< [ 19: 16](R/W1C/H) Reads or clears enable for IOBN(0..2)_INT_SUM[NCBO_FLT_CR]. */
        uint64_t msh_dat_dbe           : 1;  /**< [ 20: 20](R/W1C/H) Reads or clears enable for IOBN(0..2)_INT_SUM[MSH_DAT_DBE]. */
        uint64_t msh_dat_sbe           : 1;  /**< [ 21: 21](R/W1C/H) Reads or clears enable for IOBN(0..2)_INT_SUM[MSH_DAT_SBE]. */
        uint64_t reserved_22_23        : 2;
        uint64_t msh_dat_chk           : 1;  /**< [ 24: 24](R/W1C/H) Reads or clears enable for IOBN(0..2)_INT_SUM[MSH_DAT_CHK]. */
        uint64_t msh_req_chk           : 1;  /**< [ 25: 25](R/W1C/H) Reads or clears enable for IOBN(0..2)_INT_SUM[MSH_REQ_CHK]. */
        uint64_t msh_snp_chk           : 1;  /**< [ 26: 26](R/W1C/H) Reads or clears enable for IOBN(0..2)_INT_SUM[MSH_SNP_CHK]. */
        uint64_t msh_rsp_chk           : 1;  /**< [ 27: 27](R/W1C/H) Reads or clears enable for IOBN(0..2)_INT_SUM[MSH_RSP_CHK]. */
        uint64_t reserved_28_29        : 2;
        uint64_t msh_smmu_psn          : 1;  /**< [ 30: 30](R/W1C/H) Reads or clears enable for IOBN(0..2)_INT_SUM[MSH_SMMU_PSN]. */
        uint64_t msh_dato_dbe          : 1;  /**< [ 31: 31](R/W1C/H) Reads or clears enable for IOBN(0..2)_INT_SUM[MSH_DATO_DBE]. */
        uint64_t msh_dato_sbe          : 1;  /**< [ 32: 32](R/W1C/H) Reads or clears enable for IOBN(0..2)_INT_SUM[MSH_DATO_SBE]. */
        uint64_t reserved_33_63        : 31;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_iobnx_int_ena_w1c_s cn; */
};
typedef union cavm_iobnx_int_ena_w1c cavm_iobnx_int_ena_w1c_t;

static inline uint64_t CAVM_IOBNX_INT_ENA_W1C(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_IOBNX_INT_ENA_W1C(uint64_t a)
{
    if (a<=2)
        return 0x87e120088000ll + 0x1000000ll * ((a) & 0x3);
    __cavm_csr_fatal("IOBNX_INT_ENA_W1C", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_IOBNX_INT_ENA_W1C(a) cavm_iobnx_int_ena_w1c_t
#define bustype_CAVM_IOBNX_INT_ENA_W1C(a) CSR_TYPE_RSL
#define basename_CAVM_IOBNX_INT_ENA_W1C(a) "IOBNX_INT_ENA_W1C"
#define device_bar_CAVM_IOBNX_INT_ENA_W1C(a) 0x0 /* PF_BAR0 */
#define busnum_CAVM_IOBNX_INT_ENA_W1C(a) (a)
#define arguments_CAVM_IOBNX_INT_ENA_W1C(a) (a),-1,-1,-1

/**
 * Register (RSL) iobn#_int_ena_w1s
 *
 * IOBN Interrupt Enable Set Register
 * This register sets interrupt enable bits.
 */
union cavm_iobnx_int_ena_w1s
{
    uint64_t u;
    struct cavm_iobnx_int_ena_w1s_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_33_63        : 31;
        uint64_t msh_dato_sbe          : 1;  /**< [ 32: 32](R/W1S/H) Reads or sets enable for IOBN(0..2)_INT_SUM[MSH_DATO_SBE]. */
        uint64_t msh_dato_dbe          : 1;  /**< [ 31: 31](R/W1S/H) Reads or sets enable for IOBN(0..2)_INT_SUM[MSH_DATO_DBE]. */
        uint64_t msh_smmu_psn          : 1;  /**< [ 30: 30](R/W1S/H) Reads or sets enable for IOBN(0..2)_INT_SUM[MSH_SMMU_PSN]. */
        uint64_t reserved_28_29        : 2;
        uint64_t msh_rsp_chk           : 1;  /**< [ 27: 27](R/W1S/H) Reads or sets enable for IOBN(0..2)_INT_SUM[MSH_RSP_CHK]. */
        uint64_t msh_snp_chk           : 1;  /**< [ 26: 26](R/W1S/H) Reads or sets enable for IOBN(0..2)_INT_SUM[MSH_SNP_CHK]. */
        uint64_t msh_req_chk           : 1;  /**< [ 25: 25](R/W1S/H) Reads or sets enable for IOBN(0..2)_INT_SUM[MSH_REQ_CHK]. */
        uint64_t msh_dat_chk           : 1;  /**< [ 24: 24](R/W1S/H) Reads or sets enable for IOBN(0..2)_INT_SUM[MSH_DAT_CHK]. */
        uint64_t reserved_22_23        : 2;
        uint64_t msh_dat_sbe           : 1;  /**< [ 21: 21](R/W1S/H) Reads or sets enable for IOBN(0..2)_INT_SUM[MSH_DAT_SBE]. */
        uint64_t msh_dat_dbe           : 1;  /**< [ 20: 20](R/W1S/H) Reads or sets enable for IOBN(0..2)_INT_SUM[MSH_DAT_DBE]. */
        uint64_t ncbo_flt_cr           : 4;  /**< [ 19: 16](R/W1S/H) Reads or sets enable for IOBN(0..2)_INT_SUM[NCBO_FLT_CR]. */
        uint64_t ncbo_pois_cr          : 4;  /**< [ 15: 12](R/W1S/H) Reads or sets enable for IOBN(0..2)_INT_SUM[NCBO_POIS_CR]. */
        uint64_t ncbi_unexp_cr         : 4;  /**< [ 11:  8](R/W1S/H) Reads or sets enable for IOBN(0..2)_INT_SUM[NCBI_UNEXP_CR]. */
        uint64_t ncbo_ncb_psn          : 4;  /**< [  7:  4](R/W1S/H) Reads or sets enable for IOBN(0..2)_INT_SUM[NCBO_NCB_PSN]. */
        uint64_t ncbo_to               : 4;  /**< [  3:  0](R/W1S/H) Reads or sets enable for IOBN(0..2)_INT_SUM[NCBO_TO]. */
#else /* Word 0 - Little Endian */
        uint64_t ncbo_to               : 4;  /**< [  3:  0](R/W1S/H) Reads or sets enable for IOBN(0..2)_INT_SUM[NCBO_TO]. */
        uint64_t ncbo_ncb_psn          : 4;  /**< [  7:  4](R/W1S/H) Reads or sets enable for IOBN(0..2)_INT_SUM[NCBO_NCB_PSN]. */
        uint64_t ncbi_unexp_cr         : 4;  /**< [ 11:  8](R/W1S/H) Reads or sets enable for IOBN(0..2)_INT_SUM[NCBI_UNEXP_CR]. */
        uint64_t ncbo_pois_cr          : 4;  /**< [ 15: 12](R/W1S/H) Reads or sets enable for IOBN(0..2)_INT_SUM[NCBO_POIS_CR]. */
        uint64_t ncbo_flt_cr           : 4;  /**< [ 19: 16](R/W1S/H) Reads or sets enable for IOBN(0..2)_INT_SUM[NCBO_FLT_CR]. */
        uint64_t msh_dat_dbe           : 1;  /**< [ 20: 20](R/W1S/H) Reads or sets enable for IOBN(0..2)_INT_SUM[MSH_DAT_DBE]. */
        uint64_t msh_dat_sbe           : 1;  /**< [ 21: 21](R/W1S/H) Reads or sets enable for IOBN(0..2)_INT_SUM[MSH_DAT_SBE]. */
        uint64_t reserved_22_23        : 2;
        uint64_t msh_dat_chk           : 1;  /**< [ 24: 24](R/W1S/H) Reads or sets enable for IOBN(0..2)_INT_SUM[MSH_DAT_CHK]. */
        uint64_t msh_req_chk           : 1;  /**< [ 25: 25](R/W1S/H) Reads or sets enable for IOBN(0..2)_INT_SUM[MSH_REQ_CHK]. */
        uint64_t msh_snp_chk           : 1;  /**< [ 26: 26](R/W1S/H) Reads or sets enable for IOBN(0..2)_INT_SUM[MSH_SNP_CHK]. */
        uint64_t msh_rsp_chk           : 1;  /**< [ 27: 27](R/W1S/H) Reads or sets enable for IOBN(0..2)_INT_SUM[MSH_RSP_CHK]. */
        uint64_t reserved_28_29        : 2;
        uint64_t msh_smmu_psn          : 1;  /**< [ 30: 30](R/W1S/H) Reads or sets enable for IOBN(0..2)_INT_SUM[MSH_SMMU_PSN]. */
        uint64_t msh_dato_dbe          : 1;  /**< [ 31: 31](R/W1S/H) Reads or sets enable for IOBN(0..2)_INT_SUM[MSH_DATO_DBE]. */
        uint64_t msh_dato_sbe          : 1;  /**< [ 32: 32](R/W1S/H) Reads or sets enable for IOBN(0..2)_INT_SUM[MSH_DATO_SBE]. */
        uint64_t reserved_33_63        : 31;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_iobnx_int_ena_w1s_s cn; */
};
typedef union cavm_iobnx_int_ena_w1s cavm_iobnx_int_ena_w1s_t;

static inline uint64_t CAVM_IOBNX_INT_ENA_W1S(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_IOBNX_INT_ENA_W1S(uint64_t a)
{
    if (a<=2)
        return 0x87e120089000ll + 0x1000000ll * ((a) & 0x3);
    __cavm_csr_fatal("IOBNX_INT_ENA_W1S", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_IOBNX_INT_ENA_W1S(a) cavm_iobnx_int_ena_w1s_t
#define bustype_CAVM_IOBNX_INT_ENA_W1S(a) CSR_TYPE_RSL
#define basename_CAVM_IOBNX_INT_ENA_W1S(a) "IOBNX_INT_ENA_W1S"
#define device_bar_CAVM_IOBNX_INT_ENA_W1S(a) 0x0 /* PF_BAR0 */
#define busnum_CAVM_IOBNX_INT_ENA_W1S(a) (a)
#define arguments_CAVM_IOBNX_INT_ENA_W1S(a) (a),-1,-1,-1

/**
 * Register (RSL) iobn#_int_sum
 *
 * IOBN Interrupt Summary Register
 * This register contains the different interrupt-summary bits of the IOBN.
 * Bits in this register are RAS related events, that are expected to be routed to the SCP.
 */
union cavm_iobnx_int_sum
{
    uint64_t u;
    struct cavm_iobnx_int_sum_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_33_63        : 31;
        uint64_t msh_dato_sbe          : 1;  /**< [ 32: 32](R/W1C/H) MSH data for NCBO has a SBE. */
        uint64_t msh_dato_dbe          : 1;  /**< [ 31: 31](R/W1C/H) MSH data for NCBO has a DBE. */
        uint64_t msh_smmu_psn          : 1;  /**< [ 30: 30](R/W1C/H) MSH to SMMU store (CSR) has poison data. */
        uint64_t reserved_28_29        : 2;
        uint64_t msh_rsp_chk           : 1;  /**< [ 27: 27](R/W1C/H) MSH response has a checksum error. */
        uint64_t msh_snp_chk           : 1;  /**< [ 26: 26](R/W1C/H) MSH snoop has a checksum error. */
        uint64_t msh_req_chk           : 1;  /**< [ 25: 25](R/W1C/H) MSH request has a checksum error. */
        uint64_t msh_dat_chk           : 1;  /**< [ 24: 24](R/W1C/H) MSH data has a checksum error. */
        uint64_t reserved_22_23        : 2;
        uint64_t msh_dat_sbe           : 1;  /**< [ 21: 21](R/W1C/H) MSH data has a SBE. */
        uint64_t msh_dat_dbe           : 1;  /**< [ 20: 20](R/W1C/H) MSH data has a DBE. */
        uint64_t ncbo_flt_cr           : 4;  /**< [ 19: 16](R/W1C/H) NCBI CR had fault data error. */
        uint64_t ncbo_pois_cr          : 4;  /**< [ 15: 12](R/W1C/H) NCBO CR had poison data error. See IOBN_NCBO()_CR_ERR_STATUS. */
        uint64_t ncbi_unexp_cr         : 4;  /**< [ 11:  8](R/W1C/H) NCBI CR associated with an inactive CPID. See IOBN_NCBI()_CR_ERR_STATUS. */
        uint64_t ncbo_ncb_psn          : 4;  /**< [  7:  4](R/W1C/H) NCBO bus[3:0] store data with poison. IOBN_NCBO()_PSN_STATUS saves the first error information. */
        uint64_t ncbo_to               : 4;  /**< [  3:  0](R/W1C/H) NPR to a NCB device has timed out on bus[3:0]. This should not occur under normal
                                                                 circumstances and is typically fatal. See IOBN()_NCBO_TO[SUB_TIME]. */
#else /* Word 0 - Little Endian */
        uint64_t ncbo_to               : 4;  /**< [  3:  0](R/W1C/H) NPR to a NCB device has timed out on bus[3:0]. This should not occur under normal
                                                                 circumstances and is typically fatal. See IOBN()_NCBO_TO[SUB_TIME]. */
        uint64_t ncbo_ncb_psn          : 4;  /**< [  7:  4](R/W1C/H) NCBO bus[3:0] store data with poison. IOBN_NCBO()_PSN_STATUS saves the first error information. */
        uint64_t ncbi_unexp_cr         : 4;  /**< [ 11:  8](R/W1C/H) NCBI CR associated with an inactive CPID. See IOBN_NCBI()_CR_ERR_STATUS. */
        uint64_t ncbo_pois_cr          : 4;  /**< [ 15: 12](R/W1C/H) NCBO CR had poison data error. See IOBN_NCBO()_CR_ERR_STATUS. */
        uint64_t ncbo_flt_cr           : 4;  /**< [ 19: 16](R/W1C/H) NCBI CR had fault data error. */
        uint64_t msh_dat_dbe           : 1;  /**< [ 20: 20](R/W1C/H) MSH data has a DBE. */
        uint64_t msh_dat_sbe           : 1;  /**< [ 21: 21](R/W1C/H) MSH data has a SBE. */
        uint64_t reserved_22_23        : 2;
        uint64_t msh_dat_chk           : 1;  /**< [ 24: 24](R/W1C/H) MSH data has a checksum error. */
        uint64_t msh_req_chk           : 1;  /**< [ 25: 25](R/W1C/H) MSH request has a checksum error. */
        uint64_t msh_snp_chk           : 1;  /**< [ 26: 26](R/W1C/H) MSH snoop has a checksum error. */
        uint64_t msh_rsp_chk           : 1;  /**< [ 27: 27](R/W1C/H) MSH response has a checksum error. */
        uint64_t reserved_28_29        : 2;
        uint64_t msh_smmu_psn          : 1;  /**< [ 30: 30](R/W1C/H) MSH to SMMU store (CSR) has poison data. */
        uint64_t msh_dato_dbe          : 1;  /**< [ 31: 31](R/W1C/H) MSH data for NCBO has a DBE. */
        uint64_t msh_dato_sbe          : 1;  /**< [ 32: 32](R/W1C/H) MSH data for NCBO has a SBE. */
        uint64_t reserved_33_63        : 31;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_iobnx_int_sum_s cn; */
};
typedef union cavm_iobnx_int_sum cavm_iobnx_int_sum_t;

static inline uint64_t CAVM_IOBNX_INT_SUM(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_IOBNX_INT_SUM(uint64_t a)
{
    if (a<=2)
        return 0x87e120086000ll + 0x1000000ll * ((a) & 0x3);
    __cavm_csr_fatal("IOBNX_INT_SUM", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_IOBNX_INT_SUM(a) cavm_iobnx_int_sum_t
#define bustype_CAVM_IOBNX_INT_SUM(a) CSR_TYPE_RSL
#define basename_CAVM_IOBNX_INT_SUM(a) "IOBNX_INT_SUM"
#define device_bar_CAVM_IOBNX_INT_SUM(a) 0x0 /* PF_BAR0 */
#define busnum_CAVM_IOBNX_INT_SUM(a) (a)
#define arguments_CAVM_IOBNX_INT_SUM(a) (a),-1,-1,-1

/**
 * Register (RSL) iobn#_int_sum_w1s
 *
 * IOBN Interrupt Set Register
 * This register sets interrupt bits.
 */
union cavm_iobnx_int_sum_w1s
{
    uint64_t u;
    struct cavm_iobnx_int_sum_w1s_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_33_63        : 31;
        uint64_t msh_dato_sbe          : 1;  /**< [ 32: 32](R/W1S/H) Reads or sets IOBN(0..2)_INT_SUM[MSH_DATO_SBE]. */
        uint64_t msh_dato_dbe          : 1;  /**< [ 31: 31](R/W1S/H) Reads or sets IOBN(0..2)_INT_SUM[MSH_DATO_DBE]. */
        uint64_t msh_smmu_psn          : 1;  /**< [ 30: 30](R/W1S/H) Reads or sets IOBN(0..2)_INT_SUM[MSH_SMMU_PSN]. */
        uint64_t reserved_28_29        : 2;
        uint64_t msh_rsp_chk           : 1;  /**< [ 27: 27](R/W1S/H) Reads or sets IOBN(0..2)_INT_SUM[MSH_RSP_CHK]. */
        uint64_t msh_snp_chk           : 1;  /**< [ 26: 26](R/W1S/H) Reads or sets IOBN(0..2)_INT_SUM[MSH_SNP_CHK]. */
        uint64_t msh_req_chk           : 1;  /**< [ 25: 25](R/W1S/H) Reads or sets IOBN(0..2)_INT_SUM[MSH_REQ_CHK]. */
        uint64_t msh_dat_chk           : 1;  /**< [ 24: 24](R/W1S/H) Reads or sets IOBN(0..2)_INT_SUM[MSH_DAT_CHK]. */
        uint64_t reserved_22_23        : 2;
        uint64_t msh_dat_sbe           : 1;  /**< [ 21: 21](R/W1S/H) Reads or sets IOBN(0..2)_INT_SUM[MSH_DAT_SBE]. */
        uint64_t msh_dat_dbe           : 1;  /**< [ 20: 20](R/W1S/H) Reads or sets IOBN(0..2)_INT_SUM[MSH_DAT_DBE]. */
        uint64_t ncbo_flt_cr           : 4;  /**< [ 19: 16](R/W1S/H) Reads or sets IOBN(0..2)_INT_SUM[NCBO_FLT_CR]. */
        uint64_t ncbo_pois_cr          : 4;  /**< [ 15: 12](R/W1S/H) Reads or sets IOBN(0..2)_INT_SUM[NCBO_POIS_CR]. */
        uint64_t ncbi_unexp_cr         : 4;  /**< [ 11:  8](R/W1S/H) Reads or sets IOBN(0..2)_INT_SUM[NCBI_UNEXP_CR]. */
        uint64_t ncbo_ncb_psn          : 4;  /**< [  7:  4](R/W1S/H) Reads or sets IOBN(0..2)_INT_SUM[NCBO_NCB_PSN]. */
        uint64_t ncbo_to               : 4;  /**< [  3:  0](R/W1S/H) Reads or sets IOBN(0..2)_INT_SUM[NCBO_TO]. */
#else /* Word 0 - Little Endian */
        uint64_t ncbo_to               : 4;  /**< [  3:  0](R/W1S/H) Reads or sets IOBN(0..2)_INT_SUM[NCBO_TO]. */
        uint64_t ncbo_ncb_psn          : 4;  /**< [  7:  4](R/W1S/H) Reads or sets IOBN(0..2)_INT_SUM[NCBO_NCB_PSN]. */
        uint64_t ncbi_unexp_cr         : 4;  /**< [ 11:  8](R/W1S/H) Reads or sets IOBN(0..2)_INT_SUM[NCBI_UNEXP_CR]. */
        uint64_t ncbo_pois_cr          : 4;  /**< [ 15: 12](R/W1S/H) Reads or sets IOBN(0..2)_INT_SUM[NCBO_POIS_CR]. */
        uint64_t ncbo_flt_cr           : 4;  /**< [ 19: 16](R/W1S/H) Reads or sets IOBN(0..2)_INT_SUM[NCBO_FLT_CR]. */
        uint64_t msh_dat_dbe           : 1;  /**< [ 20: 20](R/W1S/H) Reads or sets IOBN(0..2)_INT_SUM[MSH_DAT_DBE]. */
        uint64_t msh_dat_sbe           : 1;  /**< [ 21: 21](R/W1S/H) Reads or sets IOBN(0..2)_INT_SUM[MSH_DAT_SBE]. */
        uint64_t reserved_22_23        : 2;
        uint64_t msh_dat_chk           : 1;  /**< [ 24: 24](R/W1S/H) Reads or sets IOBN(0..2)_INT_SUM[MSH_DAT_CHK]. */
        uint64_t msh_req_chk           : 1;  /**< [ 25: 25](R/W1S/H) Reads or sets IOBN(0..2)_INT_SUM[MSH_REQ_CHK]. */
        uint64_t msh_snp_chk           : 1;  /**< [ 26: 26](R/W1S/H) Reads or sets IOBN(0..2)_INT_SUM[MSH_SNP_CHK]. */
        uint64_t msh_rsp_chk           : 1;  /**< [ 27: 27](R/W1S/H) Reads or sets IOBN(0..2)_INT_SUM[MSH_RSP_CHK]. */
        uint64_t reserved_28_29        : 2;
        uint64_t msh_smmu_psn          : 1;  /**< [ 30: 30](R/W1S/H) Reads or sets IOBN(0..2)_INT_SUM[MSH_SMMU_PSN]. */
        uint64_t msh_dato_dbe          : 1;  /**< [ 31: 31](R/W1S/H) Reads or sets IOBN(0..2)_INT_SUM[MSH_DATO_DBE]. */
        uint64_t msh_dato_sbe          : 1;  /**< [ 32: 32](R/W1S/H) Reads or sets IOBN(0..2)_INT_SUM[MSH_DATO_SBE]. */
        uint64_t reserved_33_63        : 31;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_iobnx_int_sum_w1s_s cn; */
};
typedef union cavm_iobnx_int_sum_w1s cavm_iobnx_int_sum_w1s_t;

static inline uint64_t CAVM_IOBNX_INT_SUM_W1S(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_IOBNX_INT_SUM_W1S(uint64_t a)
{
    if (a<=2)
        return 0x87e120087000ll + 0x1000000ll * ((a) & 0x3);
    __cavm_csr_fatal("IOBNX_INT_SUM_W1S", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_IOBNX_INT_SUM_W1S(a) cavm_iobnx_int_sum_w1s_t
#define bustype_CAVM_IOBNX_INT_SUM_W1S(a) CSR_TYPE_RSL
#define basename_CAVM_IOBNX_INT_SUM_W1S(a) "IOBNX_INT_SUM_W1S"
#define device_bar_CAVM_IOBNX_INT_SUM_W1S(a) 0x0 /* PF_BAR0 */
#define busnum_CAVM_IOBNX_INT_SUM_W1S(a) (a)
#define arguments_CAVM_IOBNX_INT_SUM_W1S(a) (a),-1,-1,-1

/**
 * Register (RSL) iobn#_lsw_cfg
 *
 * IOBN LSW General Configuration Register
 */
union cavm_iobnx_lsw_cfg
{
    uint64_t u;
    struct cavm_iobnx_lsw_cfg_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_16_63        : 48;
        uint64_t lsw1_rsvd             : 7;  /**< [ 15:  9](R/W) Reserved. */
        uint64_t lsw1_force_cond_clk_en : 1; /**< [  8:  8](R/W) Force on LSW clock. For diagnostic use only. */
        uint64_t lsw0_rsvd             : 7;  /**< [  7:  1](R/W) Reserved. */
        uint64_t lsw0_force_cond_clk_en : 1; /**< [  0:  0](R/W) Force on LSW clock. For diagnostic use only. */
#else /* Word 0 - Little Endian */
        uint64_t lsw0_force_cond_clk_en : 1; /**< [  0:  0](R/W) Force on LSW clock. For diagnostic use only. */
        uint64_t lsw0_rsvd             : 7;  /**< [  7:  1](R/W) Reserved. */
        uint64_t lsw1_force_cond_clk_en : 1; /**< [  8:  8](R/W) Force on LSW clock. For diagnostic use only. */
        uint64_t lsw1_rsvd             : 7;  /**< [ 15:  9](R/W) Reserved. */
        uint64_t reserved_16_63        : 48;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_iobnx_lsw_cfg_s cn; */
};
typedef union cavm_iobnx_lsw_cfg cavm_iobnx_lsw_cfg_t;

static inline uint64_t CAVM_IOBNX_LSW_CFG(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_IOBNX_LSW_CFG(uint64_t a)
{
    if (a<=2)
        return 0x87e120002100ll + 0x1000000ll * ((a) & 0x3);
    __cavm_csr_fatal("IOBNX_LSW_CFG", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_IOBNX_LSW_CFG(a) cavm_iobnx_lsw_cfg_t
#define bustype_CAVM_IOBNX_LSW_CFG(a) CSR_TYPE_RSL
#define basename_CAVM_IOBNX_LSW_CFG(a) "IOBNX_LSW_CFG"
#define device_bar_CAVM_IOBNX_LSW_CFG(a) 0x0 /* PF_BAR0 */
#define busnum_CAVM_IOBNX_LSW_CFG(a) (a)
#define arguments_CAVM_IOBNX_LSW_CFG(a) (a),-1,-1,-1

/**
 * Register (RSL) iobn#_msix_pba#
 *
 * IOBN MSI-X Pending Bit Array Registers
 * This register is the MSI-X PBA table; the bit number is indexed by the IOBN_INT_VEC_E enumeration.
 */
union cavm_iobnx_msix_pbax
{
    uint64_t u;
    struct cavm_iobnx_msix_pbax_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t pend                  : 64; /**< [ 63:  0](RO) Pending message for the associated IOBN()_MSIX_VEC()_CTL, enumerated by IOBN_INT_VEC_E.
                                                                 Bits that have no associated IOBN_INT_VEC_E are zero. */
#else /* Word 0 - Little Endian */
        uint64_t pend                  : 64; /**< [ 63:  0](RO) Pending message for the associated IOBN()_MSIX_VEC()_CTL, enumerated by IOBN_INT_VEC_E.
                                                                 Bits that have no associated IOBN_INT_VEC_E are zero. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_iobnx_msix_pbax_s cn; */
};
typedef union cavm_iobnx_msix_pbax cavm_iobnx_msix_pbax_t;

static inline uint64_t CAVM_IOBNX_MSIX_PBAX(uint64_t a, uint64_t b) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_IOBNX_MSIX_PBAX(uint64_t a, uint64_t b)
{
    if ((a<=2) && (b==0))
        return 0x87e120ff0000ll + 0x1000000ll * ((a) & 0x3) + 8ll * ((b) & 0x0);
    __cavm_csr_fatal("IOBNX_MSIX_PBAX", 2, a, b, 0, 0, 0, 0);
}

#define typedef_CAVM_IOBNX_MSIX_PBAX(a,b) cavm_iobnx_msix_pbax_t
#define bustype_CAVM_IOBNX_MSIX_PBAX(a,b) CSR_TYPE_RSL
#define basename_CAVM_IOBNX_MSIX_PBAX(a,b) "IOBNX_MSIX_PBAX"
#define device_bar_CAVM_IOBNX_MSIX_PBAX(a,b) 0x4 /* PF_BAR4 */
#define busnum_CAVM_IOBNX_MSIX_PBAX(a,b) (a)
#define arguments_CAVM_IOBNX_MSIX_PBAX(a,b) (a),(b),-1,-1

/**
 * Register (RSL) iobn#_msix_vec#_addr
 *
 * IOBN MSI-X Vector-Table Address Register
 * This register is the MSI-X vector table, indexed by the IOBN_INT_VEC_E enumeration.
 */
union cavm_iobnx_msix_vecx_addr
{
    uint64_t u;
    struct cavm_iobnx_msix_vecx_addr_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_53_63        : 11;
        uint64_t addr                  : 51; /**< [ 52:  2](R/W) IOVA to use for MSI-X delivery of this vector. */
        uint64_t reserved_1            : 1;
        uint64_t secvec                : 1;  /**< [  0:  0](SR/W) Secure vector.
                                                                 0 = This vector may be read or written by either secure or nonsecure states.
                                                                 The vector's IOVA is sent to the SMMU as nonsecure (though this only affects
                                                                 physical addresses if PCCPF_XXX_VSEC_SCTL[MSIX_PHYS]=1).

                                                                 1 = This vector's IOBN()_MSIX_VEC()_ADDR, IOBN()_MSIX_VEC()_CTL, and
                                                                 corresponding bit of IOBN()_MSIX_PBA() are RAZ/WI and does not cause a fault
                                                                 when accessed by the nonsecure world.
                                                                 The vector's IOVA is sent to the SMMU as secure (though this only affects
                                                                 physical addresses if PCCPF_XXX_VSEC_SCTL[MSIX_PHYS]=1 or
                                                                 PCCPF_XXX_VSEC_SCTL[MSIX_SEC_PHYS]=1).

                                                                 If PCCPF_IOBN_VSEC_SCTL[MSIX_SEC] (for documentation, see PCCPF_XXX_VSEC_SCTL[MSIX_SEC])
                                                                 is set, all vectors are secure and function as if [SECVEC] was set.

                                                                 Also note the following:
                                                                 * When PCCPF_XXX_VSEC_SCTL[MSIX_SEC_EN]=1, all secure vectors (including secure
                                                                 VF vectors) will act as if PCCPF/PCCVF_XXX_MSIX_CAP_HDR[MSIXEN]=1,
                                                                 PCCPF/PCCVF_XXX_MSIX_CAP_HDR[FUNM]=0 and PCCPF/PCCVF_XXX_CMD[ME]=1.
                                                                 * When PCCPF_XXX_VSEC_SCTL[MSIX_SEC_PHYS]=1, all secure vectors (including
                                                                 secure VF vectors) are considered physical, regardless of
                                                                 PCCPF_XXX_VSEC_SCTL[MSIX_PHYS]. */
#else /* Word 0 - Little Endian */
        uint64_t secvec                : 1;  /**< [  0:  0](SR/W) Secure vector.
                                                                 0 = This vector may be read or written by either secure or nonsecure states.
                                                                 The vector's IOVA is sent to the SMMU as nonsecure (though this only affects
                                                                 physical addresses if PCCPF_XXX_VSEC_SCTL[MSIX_PHYS]=1).

                                                                 1 = This vector's IOBN()_MSIX_VEC()_ADDR, IOBN()_MSIX_VEC()_CTL, and
                                                                 corresponding bit of IOBN()_MSIX_PBA() are RAZ/WI and does not cause a fault
                                                                 when accessed by the nonsecure world.
                                                                 The vector's IOVA is sent to the SMMU as secure (though this only affects
                                                                 physical addresses if PCCPF_XXX_VSEC_SCTL[MSIX_PHYS]=1 or
                                                                 PCCPF_XXX_VSEC_SCTL[MSIX_SEC_PHYS]=1).

                                                                 If PCCPF_IOBN_VSEC_SCTL[MSIX_SEC] (for documentation, see PCCPF_XXX_VSEC_SCTL[MSIX_SEC])
                                                                 is set, all vectors are secure and function as if [SECVEC] was set.

                                                                 Also note the following:
                                                                 * When PCCPF_XXX_VSEC_SCTL[MSIX_SEC_EN]=1, all secure vectors (including secure
                                                                 VF vectors) will act as if PCCPF/PCCVF_XXX_MSIX_CAP_HDR[MSIXEN]=1,
                                                                 PCCPF/PCCVF_XXX_MSIX_CAP_HDR[FUNM]=0 and PCCPF/PCCVF_XXX_CMD[ME]=1.
                                                                 * When PCCPF_XXX_VSEC_SCTL[MSIX_SEC_PHYS]=1, all secure vectors (including
                                                                 secure VF vectors) are considered physical, regardless of
                                                                 PCCPF_XXX_VSEC_SCTL[MSIX_PHYS]. */
        uint64_t reserved_1            : 1;
        uint64_t addr                  : 51; /**< [ 52:  2](R/W) IOVA to use for MSI-X delivery of this vector. */
        uint64_t reserved_53_63        : 11;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_iobnx_msix_vecx_addr_s cn; */
};
typedef union cavm_iobnx_msix_vecx_addr cavm_iobnx_msix_vecx_addr_t;

static inline uint64_t CAVM_IOBNX_MSIX_VECX_ADDR(uint64_t a, uint64_t b) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_IOBNX_MSIX_VECX_ADDR(uint64_t a, uint64_t b)
{
    if ((a<=2) && (b==0))
        return 0x87e120f00000ll + 0x1000000ll * ((a) & 0x3) + 0x10ll * ((b) & 0x0);
    __cavm_csr_fatal("IOBNX_MSIX_VECX_ADDR", 2, a, b, 0, 0, 0, 0);
}

#define typedef_CAVM_IOBNX_MSIX_VECX_ADDR(a,b) cavm_iobnx_msix_vecx_addr_t
#define bustype_CAVM_IOBNX_MSIX_VECX_ADDR(a,b) CSR_TYPE_RSL
#define basename_CAVM_IOBNX_MSIX_VECX_ADDR(a,b) "IOBNX_MSIX_VECX_ADDR"
#define device_bar_CAVM_IOBNX_MSIX_VECX_ADDR(a,b) 0x4 /* PF_BAR4 */
#define busnum_CAVM_IOBNX_MSIX_VECX_ADDR(a,b) (a)
#define arguments_CAVM_IOBNX_MSIX_VECX_ADDR(a,b) (a),(b),-1,-1

/**
 * Register (RSL) iobn#_msix_vec#_ctl
 *
 * IOBN MSI-X Vector-Table Control and Data Register
 * This register is the MSI-X vector table, indexed by the IOBN_INT_VEC_E enumeration.
 */
union cavm_iobnx_msix_vecx_ctl
{
    uint64_t u;
    struct cavm_iobnx_msix_vecx_ctl_s
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
    /* struct cavm_iobnx_msix_vecx_ctl_s cn; */
};
typedef union cavm_iobnx_msix_vecx_ctl cavm_iobnx_msix_vecx_ctl_t;

static inline uint64_t CAVM_IOBNX_MSIX_VECX_CTL(uint64_t a, uint64_t b) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_IOBNX_MSIX_VECX_CTL(uint64_t a, uint64_t b)
{
    if ((a<=2) && (b==0))
        return 0x87e120f00008ll + 0x1000000ll * ((a) & 0x3) + 0x10ll * ((b) & 0x0);
    __cavm_csr_fatal("IOBNX_MSIX_VECX_CTL", 2, a, b, 0, 0, 0, 0);
}

#define typedef_CAVM_IOBNX_MSIX_VECX_CTL(a,b) cavm_iobnx_msix_vecx_ctl_t
#define bustype_CAVM_IOBNX_MSIX_VECX_CTL(a,b) CSR_TYPE_RSL
#define basename_CAVM_IOBNX_MSIX_VECX_CTL(a,b) "IOBNX_MSIX_VECX_CTL"
#define device_bar_CAVM_IOBNX_MSIX_VECX_CTL(a,b) 0x4 /* PF_BAR4 */
#define busnum_CAVM_IOBNX_MSIX_VECX_CTL(a,b) (a)
#define arguments_CAVM_IOBNX_MSIX_VECX_CTL(a,b) (a),(b),-1,-1

/**
 * Register (RSL) iobn#_ncb#_acc
 *
 * IOBN NCB Access Registers
 * This register sets attributes of NCBDIDs address bits \<43:36\>.
 */
union cavm_iobnx_ncbx_acc
{
    uint64_t u;
    struct cavm_iobnx_ncbx_acc_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_1_63         : 63;
        uint64_t all_cmds              : 1;  /**< [  0:  0](R/W) Device supports all commends.
                                                                 0 = Only naturally aligned loads and stores that are 64-bit or smaller are
                                                                 permitted to the NCB device. This setting is used for non-PEM devices.
                                                                 1 = Allow all size accesses, plus atomics and LMTSTs. This setting is used for
                                                                 PEM.

                                                                 Reset value of this field varies for different devices.
                                                                 Using nonreset values is for diagnostic use only. */
#else /* Word 0 - Little Endian */
        uint64_t all_cmds              : 1;  /**< [  0:  0](R/W) Device supports all commends.
                                                                 0 = Only naturally aligned loads and stores that are 64-bit or smaller are
                                                                 permitted to the NCB device. This setting is used for non-PEM devices.
                                                                 1 = Allow all size accesses, plus atomics and LMTSTs. This setting is used for
                                                                 PEM.

                                                                 Reset value of this field varies for different devices.
                                                                 Using nonreset values is for diagnostic use only. */
        uint64_t reserved_1_63         : 63;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_iobnx_ncbx_acc_s cn; */
};
typedef union cavm_iobnx_ncbx_acc cavm_iobnx_ncbx_acc_t;

static inline uint64_t CAVM_IOBNX_NCBX_ACC(uint64_t a, uint64_t b) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_IOBNX_NCBX_ACC(uint64_t a, uint64_t b)
{
    if ((a<=2) && (b<=255))
        return 0x87e1200c0000ll + 0x1000000ll * ((a) & 0x3) + 8ll * ((b) & 0xff);
    __cavm_csr_fatal("IOBNX_NCBX_ACC", 2, a, b, 0, 0, 0, 0);
}

#define typedef_CAVM_IOBNX_NCBX_ACC(a,b) cavm_iobnx_ncbx_acc_t
#define bustype_CAVM_IOBNX_NCBX_ACC(a,b) CSR_TYPE_RSL
#define basename_CAVM_IOBNX_NCBX_ACC(a,b) "IOBNX_NCBX_ACC"
#define device_bar_CAVM_IOBNX_NCBX_ACC(a,b) 0x0 /* PF_BAR0 */
#define busnum_CAVM_IOBNX_NCBX_ACC(a,b) (a)
#define arguments_CAVM_IOBNX_NCBX_ACC(a,b) (a),(b),-1,-1

/**
 * Register (RSL) iobn#_ncb#_mrml_permit_shadow
 *
 * INTERNAL: IOBN NCB Access Registers
 *
 * This register provides a way to read back IOB's IOB captures writes to MRML's
 * MRML_NCB()_PERMIT. For diagnostic use only.
 */
union cavm_iobnx_ncbx_mrml_permit_shadow
{
    uint64_t u;
    struct cavm_iobnx_ncbx_mrml_permit_shadow_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_8_63         : 56;
        uint64_t kill                  : 1;  /**< [  7:  7](SRO/H) Kill the device. Once written with one, stays
                                                                 set until warm chip reset.  If set, no access
                                                                 allowed by any initiator. */
        uint64_t reserved_2_6          : 5;
        uint64_t nsec_dis              : 1;  /**< [  1:  1](SRO/H) Nonsecure disable. As with [SEC_DIS], but for accesses initiated by nonsecure devices */
        uint64_t sec_dis               : 1;  /**< [  0:  0](SRO/H) Secure disable. */
#else /* Word 0 - Little Endian */
        uint64_t sec_dis               : 1;  /**< [  0:  0](SRO/H) Secure disable. */
        uint64_t nsec_dis              : 1;  /**< [  1:  1](SRO/H) Nonsecure disable. As with [SEC_DIS], but for accesses initiated by nonsecure devices */
        uint64_t reserved_2_6          : 5;
        uint64_t kill                  : 1;  /**< [  7:  7](SRO/H) Kill the device. Once written with one, stays
                                                                 set until warm chip reset.  If set, no access
                                                                 allowed by any initiator. */
        uint64_t reserved_8_63         : 56;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_iobnx_ncbx_mrml_permit_shadow_s cn; */
};
typedef union cavm_iobnx_ncbx_mrml_permit_shadow cavm_iobnx_ncbx_mrml_permit_shadow_t;

static inline uint64_t CAVM_IOBNX_NCBX_MRML_PERMIT_SHADOW(uint64_t a, uint64_t b) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_IOBNX_NCBX_MRML_PERMIT_SHADOW(uint64_t a, uint64_t b)
{
    if ((a<=2) && (b<=255))
        return 0x87e1200d0000ll + 0x1000000ll * ((a) & 0x3) + 8ll * ((b) & 0xff);
    __cavm_csr_fatal("IOBNX_NCBX_MRML_PERMIT_SHADOW", 2, a, b, 0, 0, 0, 0);
}

#define typedef_CAVM_IOBNX_NCBX_MRML_PERMIT_SHADOW(a,b) cavm_iobnx_ncbx_mrml_permit_shadow_t
#define bustype_CAVM_IOBNX_NCBX_MRML_PERMIT_SHADOW(a,b) CSR_TYPE_RSL
#define basename_CAVM_IOBNX_NCBX_MRML_PERMIT_SHADOW(a,b) "IOBNX_NCBX_MRML_PERMIT_SHADOW"
#define device_bar_CAVM_IOBNX_NCBX_MRML_PERMIT_SHADOW(a,b) 0x0 /* PF_BAR0 */
#define busnum_CAVM_IOBNX_NCBX_MRML_PERMIT_SHADOW(a,b) (a)
#define arguments_CAVM_IOBNX_NCBX_MRML_PERMIT_SHADOW(a,b) (a),(b),-1,-1

/**
 * Register (RSL) iobn#_ncbi#_cr_err_status
 *
 * IOBN NCBI Unexpected CR Error Status Register
 * NCBI error status register logs first unexpected NCBI CR.
 */
union cavm_iobnx_ncbix_cr_err_status
{
    uint64_t u;
    struct cavm_iobnx_ncbix_cr_err_status_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_4_63         : 60;
        uint64_t narbid                : 4;  /**< [  3:  0](RO/H) The NCBI ARBID of requesting NCB device. */
#else /* Word 0 - Little Endian */
        uint64_t narbid                : 4;  /**< [  3:  0](RO/H) The NCBI ARBID of requesting NCB device. */
        uint64_t reserved_4_63         : 60;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_iobnx_ncbix_cr_err_status_s cn; */
};
typedef union cavm_iobnx_ncbix_cr_err_status cavm_iobnx_ncbix_cr_err_status_t;

static inline uint64_t CAVM_IOBNX_NCBIX_CR_ERR_STATUS(uint64_t a, uint64_t b) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_IOBNX_NCBIX_CR_ERR_STATUS(uint64_t a, uint64_t b)
{
    if ((a<=2) && (b<=3))
        return 0x87e120000100ll + 0x1000000ll * ((a) & 0x3) + 8ll * ((b) & 0x3);
    __cavm_csr_fatal("IOBNX_NCBIX_CR_ERR_STATUS", 2, a, b, 0, 0, 0, 0);
}

#define typedef_CAVM_IOBNX_NCBIX_CR_ERR_STATUS(a,b) cavm_iobnx_ncbix_cr_err_status_t
#define bustype_CAVM_IOBNX_NCBIX_CR_ERR_STATUS(a,b) CSR_TYPE_RSL
#define basename_CAVM_IOBNX_NCBIX_CR_ERR_STATUS(a,b) "IOBNX_NCBIX_CR_ERR_STATUS"
#define device_bar_CAVM_IOBNX_NCBIX_CR_ERR_STATUS(a,b) 0x0 /* PF_BAR0 */
#define busnum_CAVM_IOBNX_NCBIX_CR_ERR_STATUS(a,b) (a)
#define arguments_CAVM_IOBNX_NCBIX_CR_ERR_STATUS(a,b) (a),(b),-1,-1

/**
 * Register (RSL) iobn#_ncbo#_cr_err_status
 *
 * IOBN NCBO CR Error Status Register
 * Outbound error status register logs first data error detected on outbound path.
 */
union cavm_iobnx_ncbox_cr_err_status
{
    uint64_t u;
    struct cavm_iobnx_ncbox_cr_err_status_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_57_63        : 7;
        uint64_t narbid                : 4;  /**< [ 56: 53](RO/H) The NCBI ARBID of requesting NCB device. */
        uint64_t address               : 53; /**< [ 52:  0](RO/H) The NCBI IOVA address associated with the ERROR. */
#else /* Word 0 - Little Endian */
        uint64_t address               : 53; /**< [ 52:  0](RO/H) The NCBI IOVA address associated with the ERROR. */
        uint64_t narbid                : 4;  /**< [ 56: 53](RO/H) The NCBI ARBID of requesting NCB device. */
        uint64_t reserved_57_63        : 7;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_iobnx_ncbox_cr_err_status_s cn; */
};
typedef union cavm_iobnx_ncbox_cr_err_status cavm_iobnx_ncbox_cr_err_status_t;

static inline uint64_t CAVM_IOBNX_NCBOX_CR_ERR_STATUS(uint64_t a, uint64_t b) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_IOBNX_NCBOX_CR_ERR_STATUS(uint64_t a, uint64_t b)
{
    if ((a<=2) && (b<=3))
        return 0x87e120000120ll + 0x1000000ll * ((a) & 0x3) + 8ll * ((b) & 0x3);
    __cavm_csr_fatal("IOBNX_NCBOX_CR_ERR_STATUS", 2, a, b, 0, 0, 0, 0);
}

#define typedef_CAVM_IOBNX_NCBOX_CR_ERR_STATUS(a,b) cavm_iobnx_ncbox_cr_err_status_t
#define bustype_CAVM_IOBNX_NCBOX_CR_ERR_STATUS(a,b) CSR_TYPE_RSL
#define basename_CAVM_IOBNX_NCBOX_CR_ERR_STATUS(a,b) "IOBNX_NCBOX_CR_ERR_STATUS"
#define device_bar_CAVM_IOBNX_NCBOX_CR_ERR_STATUS(a,b) 0x0 /* PF_BAR0 */
#define busnum_CAVM_IOBNX_NCBOX_CR_ERR_STATUS(a,b) (a)
#define arguments_CAVM_IOBNX_NCBOX_CR_ERR_STATUS(a,b) (a),(b),-1,-1

/**
 * Register (RSL) iobn#_ncbo#_psn_status
 *
 * IOBN NCBO Poison Status Register
 */
union cavm_iobnx_ncbox_psn_status
{
    uint64_t u;
    struct cavm_iobnx_ncbox_psn_status_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_52_63        : 12;
        uint64_t address               : 52; /**< [ 51:  0](RO/H) Captured address when poison transaction was sent on NCBO. Valid when
                                                                 corresponding bit is set in IOBN()_INT_SUM.
                                                                 When corresponding bit in IOBN()_INT_SUM is cleared it allows a new poison error
                                                                 to be latched. */
#else /* Word 0 - Little Endian */
        uint64_t address               : 52; /**< [ 51:  0](RO/H) Captured address when poison transaction was sent on NCBO. Valid when
                                                                 corresponding bit is set in IOBN()_INT_SUM.
                                                                 When corresponding bit in IOBN()_INT_SUM is cleared it allows a new poison error
                                                                 to be latched. */
        uint64_t reserved_52_63        : 12;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_iobnx_ncbox_psn_status_s cn; */
};
typedef union cavm_iobnx_ncbox_psn_status cavm_iobnx_ncbox_psn_status_t;

static inline uint64_t CAVM_IOBNX_NCBOX_PSN_STATUS(uint64_t a, uint64_t b) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_IOBNX_NCBOX_PSN_STATUS(uint64_t a, uint64_t b)
{
    if ((a<=2) && (b<=3))
        return 0x87e120003040ll + 0x1000000ll * ((a) & 0x3) + 8ll * ((b) & 0x3);
    __cavm_csr_fatal("IOBNX_NCBOX_PSN_STATUS", 2, a, b, 0, 0, 0, 0);
}

#define typedef_CAVM_IOBNX_NCBOX_PSN_STATUS(a,b) cavm_iobnx_ncbox_psn_status_t
#define bustype_CAVM_IOBNX_NCBOX_PSN_STATUS(a,b) CSR_TYPE_RSL
#define basename_CAVM_IOBNX_NCBOX_PSN_STATUS(a,b) "IOBNX_NCBOX_PSN_STATUS"
#define device_bar_CAVM_IOBNX_NCBOX_PSN_STATUS(a,b) 0x0 /* PF_BAR0 */
#define busnum_CAVM_IOBNX_NCBOX_PSN_STATUS(a,b) (a)
#define arguments_CAVM_IOBNX_NCBOX_PSN_STATUS(a,b) (a),(b),-1,-1

/**
 * Register (RSL) iobn#_ncbo_to
 *
 * IOBN NCBO Timeout Counter Registers
 * This register set the counter value for expected return data on NCBI.
 */
union cavm_iobnx_ncbo_to
{
    uint64_t u;
    struct cavm_iobnx_ncbo_to_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_32_63        : 32;
        uint64_t sub_time              : 32; /**< [ 31:  0](R/W) Timeout value. When a load operation is sent on NCBO, the timeout counter is
                                                                 started, and if return data on NCBI does not return within between three to four
                                                                 times the value of [SUB_TIME] in coprocessor-clocks, a timeout occurs and
                                                                 IOBN()_INT_SUM[NCBO_TO] is set. 0x0 disables. */
#else /* Word 0 - Little Endian */
        uint64_t sub_time              : 32; /**< [ 31:  0](R/W) Timeout value. When a load operation is sent on NCBO, the timeout counter is
                                                                 started, and if return data on NCBI does not return within between three to four
                                                                 times the value of [SUB_TIME] in coprocessor-clocks, a timeout occurs and
                                                                 IOBN()_INT_SUM[NCBO_TO] is set. 0x0 disables. */
        uint64_t reserved_32_63        : 32;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_iobnx_ncbo_to_s cn; */
};
typedef union cavm_iobnx_ncbo_to cavm_iobnx_ncbo_to_t;

static inline uint64_t CAVM_IOBNX_NCBO_TO(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_IOBNX_NCBO_TO(uint64_t a)
{
    if (a<=2)
        return 0x87e120000008ll + 0x1000000ll * ((a) & 0x3);
    __cavm_csr_fatal("IOBNX_NCBO_TO", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_IOBNX_NCBO_TO(a) cavm_iobnx_ncbo_to_t
#define bustype_CAVM_IOBNX_NCBO_TO(a) CSR_TYPE_RSL
#define basename_CAVM_IOBNX_NCBO_TO(a) "IOBNX_NCBO_TO"
#define device_bar_CAVM_IOBNX_NCBO_TO(a) 0x0 /* PF_BAR0 */
#define busnum_CAVM_IOBNX_NCBO_TO(a) (a)
#define arguments_CAVM_IOBNX_NCBO_TO(a) (a),-1,-1,-1

/**
 * Register (RSL) iobn#_ncbo_to_err#
 *
 * IOBN NCB Timeout Error Register
 * This register captures error information for a nonposted request that times out on
 * NCBO (when IOBN()_INT_SUM[NCBO_TO] is set).
 */
union cavm_iobnx_ncbo_to_errx
{
    uint64_t u;
    struct cavm_iobnx_ncbo_to_errx_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_16_63        : 48;
        uint64_t cpid                  : 8;  /**< [ 15:  8](RO/H) CPID for NP request that timed out on NCBO. */
        uint64_t reserved_4_7          : 4;
        uint64_t arbid                 : 4;  /**< [  3:  0](RO/H) Flat ARBID for NP request that timed out on NCBO. */
#else /* Word 0 - Little Endian */
        uint64_t arbid                 : 4;  /**< [  3:  0](RO/H) Flat ARBID for NP request that timed out on NCBO. */
        uint64_t reserved_4_7          : 4;
        uint64_t cpid                  : 8;  /**< [ 15:  8](RO/H) CPID for NP request that timed out on NCBO. */
        uint64_t reserved_16_63        : 48;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_iobnx_ncbo_to_errx_s cn; */
};
typedef union cavm_iobnx_ncbo_to_errx cavm_iobnx_ncbo_to_errx_t;

static inline uint64_t CAVM_IOBNX_NCBO_TO_ERRX(uint64_t a, uint64_t b) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_IOBNX_NCBO_TO_ERRX(uint64_t a, uint64_t b)
{
    if ((a<=2) && (b<=3))
        return 0x87e1200a0000ll + 0x1000000ll * ((a) & 0x3) + 8ll * ((b) & 0x3);
    __cavm_csr_fatal("IOBNX_NCBO_TO_ERRX", 2, a, b, 0, 0, 0, 0);
}

#define typedef_CAVM_IOBNX_NCBO_TO_ERRX(a,b) cavm_iobnx_ncbo_to_errx_t
#define bustype_CAVM_IOBNX_NCBO_TO_ERRX(a,b) CSR_TYPE_RSL
#define basename_CAVM_IOBNX_NCBO_TO_ERRX(a,b) "IOBNX_NCBO_TO_ERRX"
#define device_bar_CAVM_IOBNX_NCBO_TO_ERRX(a,b) 0x0 /* PF_BAR0 */
#define busnum_CAVM_IOBNX_NCBO_TO_ERRX(a,b) (a)
#define arguments_CAVM_IOBNX_NCBO_TO_ERRX(a,b) (a),(b),-1,-1

/**
 * Register (RSL) iobn#_outb_err_status
 *
 * IOBN Outbound Error Status Register
 * Outbound error status register logs first error detected on outbound control path.
 */
union cavm_iobnx_outb_err_status
{
    uint64_t u;
    struct cavm_iobnx_outb_err_status_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t ms                    : 11; /**< [ 63: 53](RO/H) Captured mesh source when error condition is detected on outbound
                                                                 processing path. Valid when [ERR_TYPE] is nonzero. */
        uint64_t reserved_52           : 1;
        uint64_t address               : 40; /**< [ 51: 12](RO/H) Captured address when error condition is detected on outbound processing path. Valid when
                                                                 [ERR_TYPE] is non zero. */
        uint64_t reserved_5_11         : 7;
        uint64_t err_type              : 5;  /**< [  4:  0](R/W1C/H) Error type. Bits enumerated by IOBN_OUTB_ERR_E. */
#else /* Word 0 - Little Endian */
        uint64_t err_type              : 5;  /**< [  4:  0](R/W1C/H) Error type. Bits enumerated by IOBN_OUTB_ERR_E. */
        uint64_t reserved_5_11         : 7;
        uint64_t address               : 40; /**< [ 51: 12](RO/H) Captured address when error condition is detected on outbound processing path. Valid when
                                                                 [ERR_TYPE] is non zero. */
        uint64_t reserved_52           : 1;
        uint64_t ms                    : 11; /**< [ 63: 53](RO/H) Captured mesh source when error condition is detected on outbound
                                                                 processing path. Valid when [ERR_TYPE] is nonzero. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_iobnx_outb_err_status_s cn; */
};
typedef union cavm_iobnx_outb_err_status cavm_iobnx_outb_err_status_t;

static inline uint64_t CAVM_IOBNX_OUTB_ERR_STATUS(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_IOBNX_OUTB_ERR_STATUS(uint64_t a)
{
    if (a<=2)
        return 0x87e120083090ll + 0x1000000ll * ((a) & 0x3);
    __cavm_csr_fatal("IOBNX_OUTB_ERR_STATUS", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_IOBNX_OUTB_ERR_STATUS(a) cavm_iobnx_outb_err_status_t
#define bustype_CAVM_IOBNX_OUTB_ERR_STATUS(a) CSR_TYPE_RSL
#define basename_CAVM_IOBNX_OUTB_ERR_STATUS(a) "IOBNX_OUTB_ERR_STATUS"
#define device_bar_CAVM_IOBNX_OUTB_ERR_STATUS(a) 0x0 /* PF_BAR0 */
#define busnum_CAVM_IOBNX_OUTB_ERR_STATUS(a) (a)
#define arguments_CAVM_IOBNX_OUTB_ERR_STATUS(a) (a),-1,-1,-1

/**
 * Register (RSL) iobn#_psn_ctl
 *
 * Poison Control Register
 */
union cavm_iobnx_psn_ctl
{
    uint64_t u;
    struct cavm_iobnx_psn_ctl_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_1_63         : 63;
        uint64_t dispsn                : 1;  /**< [  0:  0](R/W) Disable poison code creation and detection in the mesh / NCB ECC
                                                                 checkers/generators. */
#else /* Word 0 - Little Endian */
        uint64_t dispsn                : 1;  /**< [  0:  0](R/W) Disable poison code creation and detection in the mesh / NCB ECC
                                                                 checkers/generators. */
        uint64_t reserved_1_63         : 63;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_iobnx_psn_ctl_s cn; */
};
typedef union cavm_iobnx_psn_ctl cavm_iobnx_psn_ctl_t;

static inline uint64_t CAVM_IOBNX_PSN_CTL(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_IOBNX_PSN_CTL(uint64_t a)
{
    if (a<=2)
        return 0x87e120083050ll + 0x1000000ll * ((a) & 0x3);
    __cavm_csr_fatal("IOBNX_PSN_CTL", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_IOBNX_PSN_CTL(a) cavm_iobnx_psn_ctl_t
#define bustype_CAVM_IOBNX_PSN_CTL(a) CSR_TYPE_RSL
#define basename_CAVM_IOBNX_PSN_CTL(a) "IOBNX_PSN_CTL"
#define device_bar_CAVM_IOBNX_PSN_CTL(a) 0x0 /* PF_BAR0 */
#define busnum_CAVM_IOBNX_PSN_CTL(a) (a)
#define arguments_CAVM_IOBNX_PSN_CTL(a) (a),-1,-1,-1

/**
 * Register (RSL) iobn#_rperf_cntr#
 *
 * IOBN RCLK Performance Counter Registers
 */
union cavm_iobnx_rperf_cntrx
{
    uint64_t u;
    struct cavm_iobnx_rperf_cntrx_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t cnt                   : 64; /**< [ 63:  0](R/W/H) Count value of the performance counters controlled by IOBN()_RPERF_CTRL(). */
#else /* Word 0 - Little Endian */
        uint64_t cnt                   : 64; /**< [ 63:  0](R/W/H) Count value of the performance counters controlled by IOBN()_RPERF_CTRL(). */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_iobnx_rperf_cntrx_s cn; */
};
typedef union cavm_iobnx_rperf_cntrx cavm_iobnx_rperf_cntrx_t;

static inline uint64_t CAVM_IOBNX_RPERF_CNTRX(uint64_t a, uint64_t b) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_IOBNX_RPERF_CNTRX(uint64_t a, uint64_t b)
{
    if ((a<=2) && (b<=3))
        return 0x87e1200b0080ll + 0x1000000ll * ((a) & 0x3) + 8ll * ((b) & 0x3);
    __cavm_csr_fatal("IOBNX_RPERF_CNTRX", 2, a, b, 0, 0, 0, 0);
}

#define typedef_CAVM_IOBNX_RPERF_CNTRX(a,b) cavm_iobnx_rperf_cntrx_t
#define bustype_CAVM_IOBNX_RPERF_CNTRX(a,b) CSR_TYPE_RSL
#define basename_CAVM_IOBNX_RPERF_CNTRX(a,b) "IOBNX_RPERF_CNTRX"
#define device_bar_CAVM_IOBNX_RPERF_CNTRX(a,b) 0x0 /* PF_BAR0 */
#define busnum_CAVM_IOBNX_RPERF_CNTRX(a,b) (a)
#define arguments_CAVM_IOBNX_RPERF_CNTRX(a,b) (a),(b),-1,-1

/**
 * Register (RSL) iobn#_rperf_ctrl#
 *
 * IOBN RCLK Performance Counter Control Register
 * This register controls the IOBN()_RPERF_CNTR() registers.
 */
union cavm_iobnx_rperf_ctrlx
{
    uint64_t u;
    struct cavm_iobnx_rperf_ctrlx_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_32_63        : 32;
        uint64_t frozen                : 1;  /**< [ 31: 31](RO/H) Indicates the counter is frozen (i.e one shot event occurred). The counter will remain frozen
                                                                 until the clear bit is written. */
        uint64_t clear                 : 1;  /**< [ 30: 30](R/W/H) Writing 1 to this bit will generate a hardware pulse that will clear the
                                                                 counters and [FROZEN]. This register will always read back a zero. */
        uint64_t enable                : 1;  /**< [ 29: 29](R/W) Enable the counters. Set this bit to enable the corresponding counter in a
                                                                 separate write after setting [SEL0]/[SEL1]/[SEL2]. */
        uint64_t gbl_stop_enb          : 1;  /**< [ 28: 28](R/W) IOBN()_RPERF_CTRL(0) controls a global stop for all counters when this
                                                                 bit is written to a 1.
                                                                 IOBN()_RPERF_CTRL(1) controls a global enable for all counters when this
                                                                 bit is written to a 1. */
        uint64_t reserved_27           : 1;
        uint64_t event_type            : 1;  /**< [ 26: 26](R/W) Event type.
                                                                 0 = The event is counted when all events are asserted. (SEL0 & SEL1 & SEL2).
                                                                 1 = The event is counted when any event is asserted. (SEL0 | SEL1 | SEL2). */
        uint64_t mode                  : 2;  /**< [ 25: 24](R/W) Performance counter mode.
                                                                 0x0 = Positive edge.
                                                                 0x1 = Negative edge.
                                                                 0x2 = Level.
                                                                 0x3 = One shot. */
        uint64_t sel2                  : 8;  /**< [ 23: 16](R/W) Selects an event to be counted. Events are enumerated by IOBN_RPERF_EVENT_E. */
        uint64_t sel1                  : 8;  /**< [ 15:  8](R/W) Selects an event to be counted. Events are enumerated by IOBN_RPERF_EVENT_E. */
        uint64_t sel0                  : 8;  /**< [  7:  0](R/W) Selects an event to be counted. Events are enumerated by IOBN_RPERF_EVENT_E. */
#else /* Word 0 - Little Endian */
        uint64_t sel0                  : 8;  /**< [  7:  0](R/W) Selects an event to be counted. Events are enumerated by IOBN_RPERF_EVENT_E. */
        uint64_t sel1                  : 8;  /**< [ 15:  8](R/W) Selects an event to be counted. Events are enumerated by IOBN_RPERF_EVENT_E. */
        uint64_t sel2                  : 8;  /**< [ 23: 16](R/W) Selects an event to be counted. Events are enumerated by IOBN_RPERF_EVENT_E. */
        uint64_t mode                  : 2;  /**< [ 25: 24](R/W) Performance counter mode.
                                                                 0x0 = Positive edge.
                                                                 0x1 = Negative edge.
                                                                 0x2 = Level.
                                                                 0x3 = One shot. */
        uint64_t event_type            : 1;  /**< [ 26: 26](R/W) Event type.
                                                                 0 = The event is counted when all events are asserted. (SEL0 & SEL1 & SEL2).
                                                                 1 = The event is counted when any event is asserted. (SEL0 | SEL1 | SEL2). */
        uint64_t reserved_27           : 1;
        uint64_t gbl_stop_enb          : 1;  /**< [ 28: 28](R/W) IOBN()_RPERF_CTRL(0) controls a global stop for all counters when this
                                                                 bit is written to a 1.
                                                                 IOBN()_RPERF_CTRL(1) controls a global enable for all counters when this
                                                                 bit is written to a 1. */
        uint64_t enable                : 1;  /**< [ 29: 29](R/W) Enable the counters. Set this bit to enable the corresponding counter in a
                                                                 separate write after setting [SEL0]/[SEL1]/[SEL2]. */
        uint64_t clear                 : 1;  /**< [ 30: 30](R/W/H) Writing 1 to this bit will generate a hardware pulse that will clear the
                                                                 counters and [FROZEN]. This register will always read back a zero. */
        uint64_t frozen                : 1;  /**< [ 31: 31](RO/H) Indicates the counter is frozen (i.e one shot event occurred). The counter will remain frozen
                                                                 until the clear bit is written. */
        uint64_t reserved_32_63        : 32;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_iobnx_rperf_ctrlx_s cn; */
};
typedef union cavm_iobnx_rperf_ctrlx cavm_iobnx_rperf_ctrlx_t;

static inline uint64_t CAVM_IOBNX_RPERF_CTRLX(uint64_t a, uint64_t b) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_IOBNX_RPERF_CTRLX(uint64_t a, uint64_t b)
{
    if ((a<=2) && (b<=3))
        return 0x87e1200b0000ll + 0x1000000ll * ((a) & 0x3) + 8ll * ((b) & 0x3);
    __cavm_csr_fatal("IOBNX_RPERF_CTRLX", 2, a, b, 0, 0, 0, 0);
}

#define typedef_CAVM_IOBNX_RPERF_CTRLX(a,b) cavm_iobnx_rperf_ctrlx_t
#define bustype_CAVM_IOBNX_RPERF_CTRLX(a,b) CSR_TYPE_RSL
#define basename_CAVM_IOBNX_RPERF_CTRLX(a,b) "IOBNX_RPERF_CTRLX"
#define device_bar_CAVM_IOBNX_RPERF_CTRLX(a,b) 0x0 /* PF_BAR0 */
#define busnum_CAVM_IOBNX_RPERF_CTRLX(a,b) (a)
#define arguments_CAVM_IOBNX_RPERF_CTRLX(a,b) (a),(b),-1,-1

/**
 * Register (RSL) iobn#_rperf_inrm#
 *
 * IOBN INRM Performance Counter Control Register
 * This register controls IOBN()_RPERF_CNTR() when IOBN_RPERF_EVENT_E::INRM_PERF() is selected.
 */
union cavm_iobnx_rperf_inrmx
{
    uint64_t u;
    struct cavm_iobnx_rperf_inrmx_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t class3                : 3;  /**< [ 63: 61](R/W) Counter class - defines the usage of [CTL3]. */
        uint64_t ctl3                  : 13; /**< [ 60: 48](R/W) Which conditions to use for the INRM PERF counters as defined by [CLASS3] and
                                                                 struct IOBN_RPERF_INRM_*_S. */
        uint64_t class2                : 3;  /**< [ 47: 45](R/W) Counter class - defines the usage of [CTL2]. */
        uint64_t ctl2                  : 13; /**< [ 44: 32](R/W) Which conditions to use for the INRM PERF counters as defined by [CLASS2] and
                                                                 struct IOBN_RPERF_INRM_*_S. */
        uint64_t class1                : 3;  /**< [ 31: 29](R/W) Counter class - defines the usage of [CTL1]. */
        uint64_t ctl1                  : 13; /**< [ 28: 16](R/W) Which conditions to use for the INRM PERF counters as defined by [CLASS1] and
                                                                 struct IOBN_RPERF_INRM_*_S. */
        uint64_t class0                : 3;  /**< [ 15: 13](R/W) Counter class - defines the usage of [CTL0]. */
        uint64_t ctl0                  : 13; /**< [ 12:  0](R/W) Which conditions to use for the INRM PERF counters as defined by [CLASS0] and
                                                                 struct IOBN_RPERF_INRM_*_S. */
#else /* Word 0 - Little Endian */
        uint64_t ctl0                  : 13; /**< [ 12:  0](R/W) Which conditions to use for the INRM PERF counters as defined by [CLASS0] and
                                                                 struct IOBN_RPERF_INRM_*_S. */
        uint64_t class0                : 3;  /**< [ 15: 13](R/W) Counter class - defines the usage of [CTL0]. */
        uint64_t ctl1                  : 13; /**< [ 28: 16](R/W) Which conditions to use for the INRM PERF counters as defined by [CLASS1] and
                                                                 struct IOBN_RPERF_INRM_*_S. */
        uint64_t class1                : 3;  /**< [ 31: 29](R/W) Counter class - defines the usage of [CTL1]. */
        uint64_t ctl2                  : 13; /**< [ 44: 32](R/W) Which conditions to use for the INRM PERF counters as defined by [CLASS2] and
                                                                 struct IOBN_RPERF_INRM_*_S. */
        uint64_t class2                : 3;  /**< [ 47: 45](R/W) Counter class - defines the usage of [CTL2]. */
        uint64_t ctl3                  : 13; /**< [ 60: 48](R/W) Which conditions to use for the INRM PERF counters as defined by [CLASS3] and
                                                                 struct IOBN_RPERF_INRM_*_S. */
        uint64_t class3                : 3;  /**< [ 63: 61](R/W) Counter class - defines the usage of [CTL3]. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_iobnx_rperf_inrmx_s cn; */
};
typedef union cavm_iobnx_rperf_inrmx cavm_iobnx_rperf_inrmx_t;

static inline uint64_t CAVM_IOBNX_RPERF_INRMX(uint64_t a, uint64_t b) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_IOBNX_RPERF_INRMX(uint64_t a, uint64_t b)
{
    if ((a<=2) && (b==0))
        return 0x87e1200b0100ll + 0x1000000ll * ((a) & 0x3) + 8ll * ((b) & 0x0);
    __cavm_csr_fatal("IOBNX_RPERF_INRMX", 2, a, b, 0, 0, 0, 0);
}

#define typedef_CAVM_IOBNX_RPERF_INRMX(a,b) cavm_iobnx_rperf_inrmx_t
#define bustype_CAVM_IOBNX_RPERF_INRMX(a,b) CSR_TYPE_RSL
#define basename_CAVM_IOBNX_RPERF_INRMX(a,b) "IOBNX_RPERF_INRMX"
#define device_bar_CAVM_IOBNX_RPERF_INRMX(a,b) 0x0 /* PF_BAR0 */
#define busnum_CAVM_IOBNX_RPERF_INRMX(a,b) (a)
#define arguments_CAVM_IOBNX_RPERF_INRMX(a,b) (a),(b),-1,-1

/**
 * Register (RSL) iobn#_rsl#_streams
 *
 * IOBN RSL Stream Permission Registers
 * This register sets the permissions for a NCBI transaction (which are DMA
 * transactions or MSI-X writes), for requests from a RSL device, i.e.
 * those where:
 *
 * _ stream_id\<21:8\> = PCC_DEV_CON_E::MRML\<21:8\>
 *   (stream_id\<7:0\> + 0).
 *
 * _ stream_id\<21:8\> = PCC_DEV_CON_E::MRMLB1\<21:8\>
 *   (stream_id\<7:0\> + 256).
 *
 * _ stream_id\<21:8\> = PCC_DEV_CON_E::MRMLB2\<21:8\>
 *   (stream_id\<7:0\> + 512).
 *
 * _ stream_id\<21:8\> = PCC_DEV_CON_E::MRMLB3\<21:8\>
 *   (stream_id\<7:0\> + 768).
 *
 * For each given index {a} (the RSL function number), each IOB
 * must be programmed to the same value.
 */
union cavm_iobnx_rslx_streams
{
    uint64_t u;
    struct cavm_iobnx_rslx_streams_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_2_63         : 62;
        uint64_t strm_nsec             : 1;  /**< [  1:  1](SR/W) Stream nonsecure.

                                                                   0 = The device's stream ID is marked secure headed into the SMMU.  If the
                                                                   device is making a nonphysical request, the SMMU will use secure world
                                                                   lookup. The SMMU may, if properly configured, generate an outgoing physical
                                                                   address that is secure.

                                                                   1 = The device's stream ID is marked nonsecure headed into the SMMU.  If the
                                                                   device is making a nonphysical request, the SMMU will use nonsecure world
                                                                   lookup. The SMMU outgoing physical address will be nonsecure.

                                                                   [STRM_NSEC] is ignored if the device is making a physical request (as these
                                                                   transactions bypass the SMMU translation process).

                                                                   Typically firmware sets [PHYS_NSEC] and [STRM_NSEC] the same. */
        uint64_t phys_nsec             : 1;  /**< [  0:  0](SR/W) Physical nonsecure.
                                                                   0 = When the device makes a physical request, IOB will use the device's
                                                                   requested secure bit to determine if the request to DRAM/LLC is secure or not.
                                                                   1 = When the device makes a physical request, IOB will squash the
                                                                   device's secure request and issue the request to DRAM/LLC as nonsecure.

                                                                   Ignored if a device makes a nonphysical request.  (As nonphysical requests
                                                                   cause the SMMU to generate the SMMU-outgoing secure bit based on the SMMU
                                                                   translation process, including [STRM_NSEC].)

                                                                   Typically firmware sets [PHYS_NSEC] and [STRM_NSEC] the same. */
#else /* Word 0 - Little Endian */
        uint64_t phys_nsec             : 1;  /**< [  0:  0](SR/W) Physical nonsecure.
                                                                   0 = When the device makes a physical request, IOB will use the device's
                                                                   requested secure bit to determine if the request to DRAM/LLC is secure or not.
                                                                   1 = When the device makes a physical request, IOB will squash the
                                                                   device's secure request and issue the request to DRAM/LLC as nonsecure.

                                                                   Ignored if a device makes a nonphysical request.  (As nonphysical requests
                                                                   cause the SMMU to generate the SMMU-outgoing secure bit based on the SMMU
                                                                   translation process, including [STRM_NSEC].)

                                                                   Typically firmware sets [PHYS_NSEC] and [STRM_NSEC] the same. */
        uint64_t strm_nsec             : 1;  /**< [  1:  1](SR/W) Stream nonsecure.

                                                                   0 = The device's stream ID is marked secure headed into the SMMU.  If the
                                                                   device is making a nonphysical request, the SMMU will use secure world
                                                                   lookup. The SMMU may, if properly configured, generate an outgoing physical
                                                                   address that is secure.

                                                                   1 = The device's stream ID is marked nonsecure headed into the SMMU.  If the
                                                                   device is making a nonphysical request, the SMMU will use nonsecure world
                                                                   lookup. The SMMU outgoing physical address will be nonsecure.

                                                                   [STRM_NSEC] is ignored if the device is making a physical request (as these
                                                                   transactions bypass the SMMU translation process).

                                                                   Typically firmware sets [PHYS_NSEC] and [STRM_NSEC] the same. */
        uint64_t reserved_2_63         : 62;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_iobnx_rslx_streams_s cn; */
};
typedef union cavm_iobnx_rslx_streams cavm_iobnx_rslx_streams_t;

static inline uint64_t CAVM_IOBNX_RSLX_STREAMS(uint64_t a, uint64_t b) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_IOBNX_RSLX_STREAMS(uint64_t a, uint64_t b)
{
    if ((a<=2) && (b<=1023))
        return 0x87e120004000ll + 0x1000000ll * ((a) & 0x3) + 8ll * ((b) & 0x3ff);
    __cavm_csr_fatal("IOBNX_RSLX_STREAMS", 2, a, b, 0, 0, 0, 0);
}

#define typedef_CAVM_IOBNX_RSLX_STREAMS(a,b) cavm_iobnx_rslx_streams_t
#define bustype_CAVM_IOBNX_RSLX_STREAMS(a,b) CSR_TYPE_RSL
#define basename_CAVM_IOBNX_RSLX_STREAMS(a,b) "IOBNX_RSLX_STREAMS"
#define device_bar_CAVM_IOBNX_RSLX_STREAMS(a,b) 0x0 /* PF_BAR0 */
#define busnum_CAVM_IOBNX_RSLX_STREAMS(a,b) (a)
#define arguments_CAVM_IOBNX_RSLX_STREAMS(a,b) (a),(b),-1,-1

/**
 * Register (RSL) iobn#_scratch
 *
 * INTERNAL: IOBN Scratch Register
 */
union cavm_iobnx_scratch
{
    uint64_t u;
    struct cavm_iobnx_scratch_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t data                  : 64; /**< [ 63:  0](R/W) Test register for CSR access. */
#else /* Word 0 - Little Endian */
        uint64_t data                  : 64; /**< [ 63:  0](R/W) Test register for CSR access. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_iobnx_scratch_s cn; */
};
typedef union cavm_iobnx_scratch cavm_iobnx_scratch_t;

static inline uint64_t CAVM_IOBNX_SCRATCH(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_IOBNX_SCRATCH(uint64_t a)
{
    if (a<=2)
        return 0x87e120083020ll + 0x1000000ll * ((a) & 0x3);
    __cavm_csr_fatal("IOBNX_SCRATCH", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_IOBNX_SCRATCH(a) cavm_iobnx_scratch_t
#define bustype_CAVM_IOBNX_SCRATCH(a) CSR_TYPE_RSL
#define basename_CAVM_IOBNX_SCRATCH(a) "IOBNX_SCRATCH"
#define device_bar_CAVM_IOBNX_SCRATCH(a) 0x0 /* PF_BAR0 */
#define busnum_CAVM_IOBNX_SCRATCH(a) (a)
#define arguments_CAVM_IOBNX_SCRATCH(a) (a),-1,-1,-1

#endif /* __CAVM_CSRS_IOBN_H__ */
