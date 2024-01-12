#ifndef __CAVM_CSRS_IOBPC_H__
#define __CAVM_CSRS_IOBPC_H__
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
 * IOBPC.
 *
 * This file is auto generated. Do not edit.
 *
 */

/**
 * Enumeration iobn_rperf_event_e
 *
 * IOBN RCLK Performance Event Enumeration
 * Enumerates the events that can be selected by IOBN_RPERF_CTRL()[SEL0,SEL1,SEL2].
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
 * Enumerates IOBN_RPERF_INRM()[CLASS*].
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
 * Enumeration iobpc_bar_e
 *
 * IOBPC Base Address Register Enumeration
 * Enumerates the base address registers.
 */
#define CAVM_IOBPC_BAR_E_IOBPCX_PF_BAR0(a) (0xc12028000000ll + 0x100000000ll * (a))
#define CAVM_IOBPC_BAR_E_IOBPCX_PF_BAR0_SIZE 0x100000ull

/**
 * Structure iobn_rperf_inrm_inbbp_s
 *
 * IOBN INRM Performance Inbound BP Control Structure
 * This structure represents a bit-vector of BP
 * conditions. Counter will increment if any of the enabled conditions is present.
 */
union cavm_iobn_rperf_inrm_inbbp_s
{
    uint32_t u;
    struct cavm_iobn_rperf_inrm_inbbp_s_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t reserved_11_31        : 21;
        uint32_t msh_dat1              : 1;  /**< [ 10: 10] When set, increment the associated RPERF IRNM performance count when BP from
                                                                 exhaustion of MSH1 Data credits. */
        uint32_t msh_rsp1              : 1;  /**< [  9:  9] When set, increment the associated RPERF IRNM performance count when BP from
                                                                 exhaustion of MSH1 Response credits. */
        uint32_t msh_req1              : 1;  /**< [  8:  8] When set, increment the associated RPERF IRNM performance count when BP from
                                                                 exhaustion of MSH1 Request credits. */
        uint32_t reserved_7            : 1;
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
        uint32_t reserved_7            : 1;
        uint32_t msh_req1              : 1;  /**< [  8:  8] When set, increment the associated RPERF IRNM performance count when BP from
                                                                 exhaustion of MSH1 Request credits. */
        uint32_t msh_rsp1              : 1;  /**< [  9:  9] When set, increment the associated RPERF IRNM performance count when BP from
                                                                 exhaustion of MSH1 Response credits. */
        uint32_t msh_dat1              : 1;  /**< [ 10: 10] When set, increment the associated RPERF IRNM performance count when BP from
                                                                 exhaustion of MSH1 Data credits. */
        uint32_t reserved_11_31        : 21;
#endif /* Word 0 - End */
    } s;
    struct cavm_iobn_rperf_inrm_inbbp_s_cn
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t reserved_13_31        : 19;
        uint32_t reserved_11_12        : 2;
        uint32_t msh_dat1              : 1;  /**< [ 10: 10] When set, increment the associated RPERF IRNM performance count when BP from
                                                                 exhaustion of MSH1 Data credits. */
        uint32_t msh_rsp1              : 1;  /**< [  9:  9] When set, increment the associated RPERF IRNM performance count when BP from
                                                                 exhaustion of MSH1 Response credits. */
        uint32_t msh_req1              : 1;  /**< [  8:  8] When set, increment the associated RPERF IRNM performance count when BP from
                                                                 exhaustion of MSH1 Request credits. */
        uint32_t reserved_7            : 1;
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
        uint32_t reserved_7            : 1;
        uint32_t msh_req1              : 1;  /**< [  8:  8] When set, increment the associated RPERF IRNM performance count when BP from
                                                                 exhaustion of MSH1 Request credits. */
        uint32_t msh_rsp1              : 1;  /**< [  9:  9] When set, increment the associated RPERF IRNM performance count when BP from
                                                                 exhaustion of MSH1 Response credits. */
        uint32_t msh_dat1              : 1;  /**< [ 10: 10] When set, increment the associated RPERF IRNM performance count when BP from
                                                                 exhaustion of MSH1 Data credits. */
        uint32_t reserved_11_12        : 2;
        uint32_t reserved_13_31        : 19;
#endif /* Word 0 - End */
    } cn;
};

/**
 * Structure iobn_rperf_inrm_inbdat_s
 *
 * IOBN INRM Performance Inbound Data Control Structure
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
 * IOBN INRM Performance Inbound Request Control Structure
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
 * IOBN INRM Performance Inbound Response Control Structure
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
 * IOBN INRM Performance Outbound Request Control Structure
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
                                                                 error. Category fields are ERR1 and ERR0. */
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
                                                                 error. Category fields are ERR1 and ERR0. */
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
                                                                 exclusive. */
        uint32_t iob                   : 1;  /**< [  1:  1] When set, increment the associated RPERF IRNM performance count when source
                                                                 transaction is from IOBN via the mesh. Category is transaction source. Category
                                                                 fields are LBK, IOB, and CCU. For accuracy, the LBK and IOB/CCU bits should be
                                                                 mutually exclusive. */
        uint32_t lbk                   : 1;  /**< [  0:  0] When set, increment the associated RPERF IRNM performance count when source
                                                                 transaction is from IOBN internal loopback. Category is transaction
                                                                 source. Category fields are LBK, IOB, and CCU. For accuracy, the LBK and IOB/CCU
                                                                 bits should be mutually exclusive. */
#else /* Word 0 - Little Endian */
        uint32_t lbk                   : 1;  /**< [  0:  0] When set, increment the associated RPERF IRNM performance count when source
                                                                 transaction is from IOBN internal loopback. Category is transaction
                                                                 source. Category fields are LBK, IOB, and CCU. For accuracy, the LBK and IOB/CCU
                                                                 bits should be mutually exclusive. */
        uint32_t iob                   : 1;  /**< [  1:  1] When set, increment the associated RPERF IRNM performance count when source
                                                                 transaction is from IOBN via the mesh. Category is transaction source. Category
                                                                 fields are LBK, IOB, and CCU. For accuracy, the LBK and IOB/CCU bits should be
                                                                 mutually exclusive. */
        uint32_t ccu                   : 1;  /**< [  2:  2] When set, increment the associated RPERF IRNM performance count when source
                                                                 transaction is from CCU. Category is transaction source. Category fields are
                                                                 LBK, IOB, and CCU. For accuracy, the LBK and IOB/CCU bits should be mutually
                                                                 exclusive. */
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
        uint64_t cnt                   : 64; /**< [ 63:  0](R/W/H) Count value of the performance counters controlled by IOBN_RPERF_CTRL(). */
#else /* Word 0 - Little Endian */
        uint64_t cnt                   : 64; /**< [ 63:  0](R/W/H) Count value of the performance counters controlled by IOBN_RPERF_CTRL(). */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_iobnx_rperf_cntrx_s cn; */
};
typedef union cavm_iobnx_rperf_cntrx cavm_iobnx_rperf_cntrx_t;

static inline uint64_t CAVM_IOBNX_RPERF_CNTRX(uint64_t a, uint64_t b) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_IOBNX_RPERF_CNTRX(uint64_t a, uint64_t b)
{
    if (cavm_is_model(OCTEONTX_CN20KA) && ((a<=7) && (b<=3)))
        return 0xc120280b0080ll + 0x100000000ll * ((a) & 0x7) + 8ll * ((b) & 0x3);
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
 * This register controls the IOBN_RPERF_CNTR() registers.
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
        uint64_t gbl_stop_enb          : 1;  /**< [ 28: 28](R/W) IOBN_RPERF_CTRL(0) controls a global stop for all counters when this
                                                                 bit is written to a 1.
                                                                 IOBN_RPERF_CTRL(1) controls a global enable for all counters when this
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
        uint64_t gbl_stop_enb          : 1;  /**< [ 28: 28](R/W) IOBN_RPERF_CTRL(0) controls a global stop for all counters when this
                                                                 bit is written to a 1.
                                                                 IOBN_RPERF_CTRL(1) controls a global enable for all counters when this
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
    if (cavm_is_model(OCTEONTX_CN20KA) && ((a<=7) && (b<=3)))
        return 0xc120280b0000ll + 0x100000000ll * ((a) & 0x7) + 8ll * ((b) & 0x3);
    __cavm_csr_fatal("IOBNX_RPERF_CTRLX", 2, a, b, 0, 0, 0, 0);
}

#define typedef_CAVM_IOBNX_RPERF_CTRLX(a,b) cavm_iobnx_rperf_ctrlx_t
#define bustype_CAVM_IOBNX_RPERF_CTRLX(a,b) CSR_TYPE_RSL
#define basename_CAVM_IOBNX_RPERF_CTRLX(a,b) "IOBNX_RPERF_CTRLX"
#define device_bar_CAVM_IOBNX_RPERF_CTRLX(a,b) 0x0 /* PF_BAR0 */
#define busnum_CAVM_IOBNX_RPERF_CTRLX(a,b) (a)
#define arguments_CAVM_IOBNX_RPERF_CTRLX(a,b) (a),(b),-1,-1

/**
 * Register (RSL) iobn#_rperf_inrf#
 *
 * IOBN INRF Performance Counter Control Register
 * This register controls IOBN_RPERF_CNTR() when IOBN_RPERF_EVENT_E::INRM_PERF() is not selected.
 */
union cavm_iobnx_rperf_inrfx
{
    uint64_t u;
    struct cavm_iobnx_rperf_inrfx_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_1_63         : 63;
        uint64_t rtry_sel              : 1;  /**< [  0:  0](R/W) Controls IOBN_RPERF_EVENT_E *RETRY* for retry buffers zero and one. Set to zero
                                                                 selects retry0 or set t one for retry1. */
#else /* Word 0 - Little Endian */
        uint64_t rtry_sel              : 1;  /**< [  0:  0](R/W) Controls IOBN_RPERF_EVENT_E *RETRY* for retry buffers zero and one. Set to zero
                                                                 selects retry0 or set t one for retry1. */
        uint64_t reserved_1_63         : 63;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_iobnx_rperf_inrfx_s cn; */
};
typedef union cavm_iobnx_rperf_inrfx cavm_iobnx_rperf_inrfx_t;

static inline uint64_t CAVM_IOBNX_RPERF_INRFX(uint64_t a, uint64_t b) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_IOBNX_RPERF_INRFX(uint64_t a, uint64_t b)
{
    if (cavm_is_model(OCTEONTX_CN20KA) && ((a<=7) && (b==0)))
        return 0xc120280b0180ll + 0x100000000ll * ((a) & 0x7) + 8ll * ((b) & 0x0);
    __cavm_csr_fatal("IOBNX_RPERF_INRFX", 2, a, b, 0, 0, 0, 0);
}

#define typedef_CAVM_IOBNX_RPERF_INRFX(a,b) cavm_iobnx_rperf_inrfx_t
#define bustype_CAVM_IOBNX_RPERF_INRFX(a,b) CSR_TYPE_RSL
#define basename_CAVM_IOBNX_RPERF_INRFX(a,b) "IOBNX_RPERF_INRFX"
#define device_bar_CAVM_IOBNX_RPERF_INRFX(a,b) 0x0 /* PF_BAR0 */
#define busnum_CAVM_IOBNX_RPERF_INRFX(a,b) (a)
#define arguments_CAVM_IOBNX_RPERF_INRFX(a,b) (a),(b),-1,-1

/**
 * Register (RSL) iobn#_rperf_inrm#
 *
 * IOBN INRM Performance Counter Control Register
 * This register controls IOBN_RPERF_CNTR() when IOBN_RPERF_EVENT_E::INRM_PERF() is selected.
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
    if (cavm_is_model(OCTEONTX_CN20KA) && ((a<=7) && (b==0)))
        return 0xc120280b0100ll + 0x100000000ll * ((a) & 0x7) + 8ll * ((b) & 0x0);
    __cavm_csr_fatal("IOBNX_RPERF_INRMX", 2, a, b, 0, 0, 0, 0);
}

#define typedef_CAVM_IOBNX_RPERF_INRMX(a,b) cavm_iobnx_rperf_inrmx_t
#define bustype_CAVM_IOBNX_RPERF_INRMX(a,b) CSR_TYPE_RSL
#define basename_CAVM_IOBNX_RPERF_INRMX(a,b) "IOBNX_RPERF_INRMX"
#define device_bar_CAVM_IOBNX_RPERF_INRMX(a,b) 0x0 /* PF_BAR0 */
#define busnum_CAVM_IOBNX_RPERF_INRMX(a,b) (a)
#define arguments_CAVM_IOBNX_RPERF_INRMX(a,b) (a),(b),-1,-1

#endif /* __CAVM_CSRS_IOBPC_H__ */
