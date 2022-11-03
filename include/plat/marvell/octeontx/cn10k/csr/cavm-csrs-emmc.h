#ifndef __CAVM_CSRS_EMMC_H__
#define __CAVM_CSRS_EMMC_H__
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
 * OcteonTX EMMC.
 *
 * This file is auto generated. Do not edit.
 *
 */

/**
 * Enumeration emmc_bar_e
 *
 * EMMC Base Address Register Enumeration
 * Enumerates the base address registers.
 */
#define CAVM_EMMC_BAR_E_EMMCX_PF_BAR0(a) (0x824000000000ll + 0x1000000ll * (a))
#define CAVM_EMMC_BAR_E_EMMCX_PF_BAR0_SIZE 0x10000ull
#define CAVM_EMMC_BAR_E_EMMCX_PF_BAR4(a) (0x824009f00000ll + 0x1000000ll * (a))
#define CAVM_EMMC_BAR_E_EMMCX_PF_BAR4_SIZE 0x100000ull

/**
 * Enumeration emmc_int_vec_e
 *
 * EMMC PF MSI-X Vector Enumeration
 * Enumerates the MSI-X interrupt vectors.
 */
#define CAVM_EMMC_INT_VEC_E_EMMC_INTR (0)
#define CAVM_EMMC_INT_VEC_E_EMMC_INTR_CLEAR (1)

/**
 * Register (NCB) emmc#_clk_ctrl
 *
 * EMMC Clock Control Register
 */
union cavm_emmcx_clk_ctrl
{
    uint64_t u;
    struct cavm_emmcx_clk_ctrl_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_3_63         : 61;
        uint64_t emmc_imsc_shadow      : 1;  /**< [  2:  2](R/W) EMMC interrupt mask. 1 = EMMC INTR IS UNMASKED. 0 = EMMC INTR IS MASKED. */
        uint64_t wrap_sclk_force       : 1;  /**< [  1:  1](R/W) EMMC sclk clk gate override. 0 = EMMC sclk gating is enabled. 1 = EMMC sclk gating is disabled. */
        uint64_t emmc_clk_en           : 1;  /**< [  0:  0](R/W) EMMC IO clk enable. 0 = EMMC IO clock is disabled. 1 = EMMC IO clock is enabled. */
#else /* Word 0 - Little Endian */
        uint64_t emmc_clk_en           : 1;  /**< [  0:  0](R/W) EMMC IO clk enable. 0 = EMMC IO clock is disabled. 1 = EMMC IO clock is enabled. */
        uint64_t wrap_sclk_force       : 1;  /**< [  1:  1](R/W) EMMC sclk clk gate override. 0 = EMMC sclk gating is enabled. 1 = EMMC sclk gating is disabled. */
        uint64_t emmc_imsc_shadow      : 1;  /**< [  2:  2](R/W) EMMC interrupt mask. 1 = EMMC INTR IS UNMASKED. 0 = EMMC INTR IS MASKED. */
        uint64_t reserved_3_63         : 61;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_emmcx_clk_ctrl_s cn10; */
    struct cavm_emmcx_clk_ctrl_cn10ka_p1
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_1_63         : 63;
        uint64_t emmc_clk_en           : 1;  /**< [  0:  0](R/W) EMMC IO clk enable. 0 = EMMC IO clock is disabled. 1 = EMMC IO clock is enabled. */
#else /* Word 0 - Little Endian */
        uint64_t emmc_clk_en           : 1;  /**< [  0:  0](R/W) EMMC IO clk enable. 0 = EMMC IO clock is disabled. 1 = EMMC IO clock is enabled. */
        uint64_t reserved_1_63         : 63;
#endif /* Word 0 - End */
    } cn10ka_p1;
    struct cavm_emmcx_clk_ctrl_cn10ka_p2
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_3_63         : 61;
        uint64_t emmc_imsc_shadow      : 1;  /**< [  2:  2](R/W) EMMC interrupt mask. 1 = EMMC INTR IS UNMASKED. 0 = EMMC INTR IS MASKED. */
        uint64_t reserved_1            : 1;
        uint64_t emmc_clk_en           : 1;  /**< [  0:  0](R/W) EMMC IO clk enable. 0 = EMMC IO clock is disabled. 1 = EMMC IO clock is enabled. */
#else /* Word 0 - Little Endian */
        uint64_t emmc_clk_en           : 1;  /**< [  0:  0](R/W) EMMC IO clk enable. 0 = EMMC IO clock is disabled. 1 = EMMC IO clock is enabled. */
        uint64_t reserved_1            : 1;
        uint64_t emmc_imsc_shadow      : 1;  /**< [  2:  2](R/W) EMMC interrupt mask. 1 = EMMC INTR IS UNMASKED. 0 = EMMC INTR IS MASKED. */
        uint64_t reserved_3_63         : 61;
#endif /* Word 0 - End */
    } cn10ka_p2;
    /* struct cavm_emmcx_clk_ctrl_s cn10kb; */
    /* struct cavm_emmcx_clk_ctrl_cn10ka_p1 cnf10ka; */
    /* struct cavm_emmcx_clk_ctrl_cn10ka_p2 cnf10kb; */
};
typedef union cavm_emmcx_clk_ctrl cavm_emmcx_clk_ctrl_t;

static inline uint64_t CAVM_EMMCX_CLK_CTRL(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_EMMCX_CLK_CTRL(uint64_t a)
{
    if (a==0)
        return 0x824000000738ll + 0x1000000ll * ((a) & 0x0);
    __cavm_csr_fatal("EMMCX_CLK_CTRL", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_EMMCX_CLK_CTRL(a) cavm_emmcx_clk_ctrl_t
#define bustype_CAVM_EMMCX_CLK_CTRL(a) CSR_TYPE_NCB
#define basename_CAVM_EMMCX_CLK_CTRL(a) "EMMCX_CLK_CTRL"
#define device_bar_CAVM_EMMCX_CLK_CTRL(a) 0x0 /* PF_BAR0 */
#define busnum_CAVM_EMMCX_CLK_CTRL(a) (a)
#define arguments_CAVM_EMMCX_CLK_CTRL(a) (a),-1,-1,-1

/**
 * Register (NCB) emmc#_const
 *
 * EMMC Constants Register
 */
union cavm_emmcx_const
{
    uint64_t u;
    struct cavm_emmcx_const_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_0_63         : 64;
#else /* Word 0 - Little Endian */
        uint64_t reserved_0_63         : 64;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_emmcx_const_s cn; */
};
typedef union cavm_emmcx_const cavm_emmcx_const_t;

static inline uint64_t CAVM_EMMCX_CONST(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_EMMCX_CONST(uint64_t a)
{
    if (a==0)
        return 0x824000000708ll + 0x1000000ll * ((a) & 0x0);
    __cavm_csr_fatal("EMMCX_CONST", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_EMMCX_CONST(a) cavm_emmcx_const_t
#define bustype_CAVM_EMMCX_CONST(a) CSR_TYPE_NCB
#define basename_CAVM_EMMCX_CONST(a) "EMMCX_CONST"
#define device_bar_CAVM_EMMCX_CONST(a) 0x0 /* PF_BAR0 */
#define busnum_CAVM_EMMCX_CONST(a) (a)
#define arguments_CAVM_EMMCX_CONST(a) (a),-1,-1,-1

/**
 * Register (NCB32b) emmc#_host_cqrs_cqrs00
 *
 * EMMC Host Command Queuing Version Register
 */
union cavm_emmcx_host_cqrs_cqrs00
{
    uint32_t u;
    struct cavm_emmcx_host_cqrs_cqrs00_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t reserved_12_31        : 20;
        uint32_t cqvn1                 : 4;  /**< [ 11:  8](RO) eMMC Major Version Number. Major version number of supported eMMC standard - 5. */
        uint32_t cqvn2                 : 4;  /**< [  7:  4](RO) eMMC Minor Version Number. Minor version number of supported eMMC standard - 1. */
        uint32_t cqvn3                 : 4;  /**< [  3:  0](RO) eMMC Version Suffix. Suffix version number of supported eMMC standard - 0. */
#else /* Word 0 - Little Endian */
        uint32_t cqvn3                 : 4;  /**< [  3:  0](RO) eMMC Version Suffix. Suffix version number of supported eMMC standard - 0. */
        uint32_t cqvn2                 : 4;  /**< [  7:  4](RO) eMMC Minor Version Number. Minor version number of supported eMMC standard - 1. */
        uint32_t cqvn1                 : 4;  /**< [ 11:  8](RO) eMMC Major Version Number. Major version number of supported eMMC standard - 5. */
        uint32_t reserved_12_31        : 20;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_emmcx_host_cqrs_cqrs00_s cn; */
};
typedef union cavm_emmcx_host_cqrs_cqrs00 cavm_emmcx_host_cqrs_cqrs00_t;

static inline uint64_t CAVM_EMMCX_HOST_CQRS_CQRS00(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_EMMCX_HOST_CQRS_CQRS00(uint64_t a)
{
    if (a==0)
        return 0x824000000400ll + 0x1000000ll * ((a) & 0x0);
    __cavm_csr_fatal("EMMCX_HOST_CQRS_CQRS00", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_EMMCX_HOST_CQRS_CQRS00(a) cavm_emmcx_host_cqrs_cqrs00_t
#define bustype_CAVM_EMMCX_HOST_CQRS_CQRS00(a) CSR_TYPE_NCB32b
#define basename_CAVM_EMMCX_HOST_CQRS_CQRS00(a) "EMMCX_HOST_CQRS_CQRS00"
#define device_bar_CAVM_EMMCX_HOST_CQRS_CQRS00(a) 0x0 /* PF_BAR0 */
#define busnum_CAVM_EMMCX_HOST_CQRS_CQRS00(a) (a)
#define arguments_CAVM_EMMCX_HOST_CQRS_CQRS00(a) (a),-1,-1,-1

/**
 * Register (NCB32b) emmc#_host_cqrs_cqrs01
 *
 * EMMC Host Command Queuing Capabilities Register
 */
union cavm_emmcx_host_cqrs_cqrs01
{
    uint32_t u;
    struct cavm_emmcx_host_cqrs_cqrs01_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t reserved_16_31        : 16;
        uint32_t itcfmul               : 4;  /**< [ 15: 12](RO) Internal Timer Clock Frequency Multiplier (ITCFMUL). Defines multiplier of internal clock
                                                                 frequency for the coalescing timer and for the SQS polling period.
                                                                 0x0 = 0.001 MHz.
                                                                 0x1 = 0.01 MHz.
                                                                 0x2 = 0.1 MHz.
                                                                 0x3 = 1 MHz.
                                                                 0x4 = 10 MHz.
                                                                 The ITCFMUL and ITCFVAL defines the clock frequency. */
        uint32_t reserved_10_11        : 2;
        uint32_t itcfval               : 10; /**< [  9:  0](RO) Internal Timer Clock Frequency Value (ITCFVAL). Value defines internal clock frequency for the
                                                                 coalescing timer and for the SQS polling period. The frequency is equal to ITCFMUL * ITCFVAL. */
#else /* Word 0 - Little Endian */
        uint32_t itcfval               : 10; /**< [  9:  0](RO) Internal Timer Clock Frequency Value (ITCFVAL). Value defines internal clock frequency for the
                                                                 coalescing timer and for the SQS polling period. The frequency is equal to ITCFMUL * ITCFVAL. */
        uint32_t reserved_10_11        : 2;
        uint32_t itcfmul               : 4;  /**< [ 15: 12](RO) Internal Timer Clock Frequency Multiplier (ITCFMUL). Defines multiplier of internal clock
                                                                 frequency for the coalescing timer and for the SQS polling period.
                                                                 0x0 = 0.001 MHz.
                                                                 0x1 = 0.01 MHz.
                                                                 0x2 = 0.1 MHz.
                                                                 0x3 = 1 MHz.
                                                                 0x4 = 10 MHz.
                                                                 The ITCFMUL and ITCFVAL defines the clock frequency. */
        uint32_t reserved_16_31        : 16;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_emmcx_host_cqrs_cqrs01_s cn; */
};
typedef union cavm_emmcx_host_cqrs_cqrs01 cavm_emmcx_host_cqrs_cqrs01_t;

static inline uint64_t CAVM_EMMCX_HOST_CQRS_CQRS01(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_EMMCX_HOST_CQRS_CQRS01(uint64_t a)
{
    if (a==0)
        return 0x824000000404ll + 0x1000000ll * ((a) & 0x0);
    __cavm_csr_fatal("EMMCX_HOST_CQRS_CQRS01", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_EMMCX_HOST_CQRS_CQRS01(a) cavm_emmcx_host_cqrs_cqrs01_t
#define bustype_CAVM_EMMCX_HOST_CQRS_CQRS01(a) CSR_TYPE_NCB32b
#define basename_CAVM_EMMCX_HOST_CQRS_CQRS01(a) "EMMCX_HOST_CQRS_CQRS01"
#define device_bar_CAVM_EMMCX_HOST_CQRS_CQRS01(a) 0x0 /* PF_BAR0 */
#define busnum_CAVM_EMMCX_HOST_CQRS_CQRS01(a) (a)
#define arguments_CAVM_EMMCX_HOST_CQRS_CQRS01(a) (a),-1,-1,-1

/**
 * Register (NCB32b) emmc#_host_cqrs_cqrs02
 *
 * EMMC Host Command Queuing Configuration Register
 */
union cavm_emmcx_host_cqrs_cqrs02
{
    uint32_t u;
    struct cavm_emmcx_host_cqrs_cqrs02_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t reserved_13_31        : 19;
        uint32_t cqdce                 : 1;  /**< [ 12: 12](R/W) Direct Command (DCMD) Enable. Process Task Descriptor for slot 31 as Data Transfer Task Descriptor
                                                                 (0) or Direct Command Task Descriptor (1). */
        uint32_t reserved_9_11         : 3;
        uint32_t cqtds                 : 1;  /**< [  8:  8](R/W) Task Descriptor. Size Expect 128 bit (1) or 64 bit (0) task descriptor. This setting can be
                                                                 changed only when Command Queuing is disabled (CQE = 0). */
        uint32_t reserved_1_7          : 7;
        uint32_t cqe                   : 1;  /**< [  0:  0](R/W) Command Queuing Enable. Enables (1) or disables (0) the Command Queuing. This bit can be enabled
                                                                 only when all previous transactions are completed. This bit can be cleared only when all tasks
                                                                 are completed or cleared. Setting this bit to 1, set EMMC_HOST_SRS_SRS15[HV4E] automatically to 1. */
#else /* Word 0 - Little Endian */
        uint32_t cqe                   : 1;  /**< [  0:  0](R/W) Command Queuing Enable. Enables (1) or disables (0) the Command Queuing. This bit can be enabled
                                                                 only when all previous transactions are completed. This bit can be cleared only when all tasks
                                                                 are completed or cleared. Setting this bit to 1, set EMMC_HOST_SRS_SRS15[HV4E] automatically to 1. */
        uint32_t reserved_1_7          : 7;
        uint32_t cqtds                 : 1;  /**< [  8:  8](R/W) Task Descriptor. Size Expect 128 bit (1) or 64 bit (0) task descriptor. This setting can be
                                                                 changed only when Command Queuing is disabled (CQE = 0). */
        uint32_t reserved_9_11         : 3;
        uint32_t cqdce                 : 1;  /**< [ 12: 12](R/W) Direct Command (DCMD) Enable. Process Task Descriptor for slot 31 as Data Transfer Task Descriptor
                                                                 (0) or Direct Command Task Descriptor (1). */
        uint32_t reserved_13_31        : 19;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_emmcx_host_cqrs_cqrs02_s cn; */
};
typedef union cavm_emmcx_host_cqrs_cqrs02 cavm_emmcx_host_cqrs_cqrs02_t;

static inline uint64_t CAVM_EMMCX_HOST_CQRS_CQRS02(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_EMMCX_HOST_CQRS_CQRS02(uint64_t a)
{
    if (a==0)
        return 0x824000000408ll + 0x1000000ll * ((a) & 0x0);
    __cavm_csr_fatal("EMMCX_HOST_CQRS_CQRS02", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_EMMCX_HOST_CQRS_CQRS02(a) cavm_emmcx_host_cqrs_cqrs02_t
#define bustype_CAVM_EMMCX_HOST_CQRS_CQRS02(a) CSR_TYPE_NCB32b
#define basename_CAVM_EMMCX_HOST_CQRS_CQRS02(a) "EMMCX_HOST_CQRS_CQRS02"
#define device_bar_CAVM_EMMCX_HOST_CQRS_CQRS02(a) 0x0 /* PF_BAR0 */
#define busnum_CAVM_EMMCX_HOST_CQRS_CQRS02(a) (a)
#define arguments_CAVM_EMMCX_HOST_CQRS_CQRS02(a) (a),-1,-1,-1

/**
 * Register (NCB32b) emmc#_host_cqrs_cqrs03
 *
 * EMMC Host Command Queuing Control Register
 */
union cavm_emmcx_host_cqrs_cqrs03
{
    uint32_t u;
    struct cavm_emmcx_host_cqrs_cqrs03_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t reserved_9_31         : 23;
        uint32_t cqcat                 : 1;  /**< [  8:  8](R/W1S) Clear All Tasks. Clears (1) all active tasks in the host controller. Software has to poll this
                                                                 register until operation is completed (bit is automatically cleared). Software can set this bit
                                                                 only when the CQ Engine is halted. Software has to clear all requested tasks in the eMMC device.
                                                                 Writing (0) has no effect. */
        uint32_t reserved_1_7          : 7;
        uint32_t cqhlt                 : 1;  /**< [  0:  0](R/W) Halt CQ. Engine can be halted by writing this bit 1. Any pending operation will be completed,
                                                                 and awaiting operation will be stopped. Once all tasks are completed or stopped this bit is set 1.
                                                                 The host controller will not automatically start any new operation, but software can use SRS
                                                                 registers to issue any command directly bypassing CQE. CQ Engine starts operation after being
                                                                 halted by writing 0 to this register. Writing 0 is ignored when CQ Engine is not halted. */
#else /* Word 0 - Little Endian */
        uint32_t cqhlt                 : 1;  /**< [  0:  0](R/W) Halt CQ. Engine can be halted by writing this bit 1. Any pending operation will be completed,
                                                                 and awaiting operation will be stopped. Once all tasks are completed or stopped this bit is set 1.
                                                                 The host controller will not automatically start any new operation, but software can use SRS
                                                                 registers to issue any command directly bypassing CQE. CQ Engine starts operation after being
                                                                 halted by writing 0 to this register. Writing 0 is ignored when CQ Engine is not halted. */
        uint32_t reserved_1_7          : 7;
        uint32_t cqcat                 : 1;  /**< [  8:  8](R/W1S) Clear All Tasks. Clears (1) all active tasks in the host controller. Software has to poll this
                                                                 register until operation is completed (bit is automatically cleared). Software can set this bit
                                                                 only when the CQ Engine is halted. Software has to clear all requested tasks in the eMMC device.
                                                                 Writing (0) has no effect. */
        uint32_t reserved_9_31         : 23;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_emmcx_host_cqrs_cqrs03_s cn; */
};
typedef union cavm_emmcx_host_cqrs_cqrs03 cavm_emmcx_host_cqrs_cqrs03_t;

static inline uint64_t CAVM_EMMCX_HOST_CQRS_CQRS03(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_EMMCX_HOST_CQRS_CQRS03(uint64_t a)
{
    if (a==0)
        return 0x82400000040cll + 0x1000000ll * ((a) & 0x0);
    __cavm_csr_fatal("EMMCX_HOST_CQRS_CQRS03", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_EMMCX_HOST_CQRS_CQRS03(a) cavm_emmcx_host_cqrs_cqrs03_t
#define bustype_CAVM_EMMCX_HOST_CQRS_CQRS03(a) CSR_TYPE_NCB32b
#define basename_CAVM_EMMCX_HOST_CQRS_CQRS03(a) "EMMCX_HOST_CQRS_CQRS03"
#define device_bar_CAVM_EMMCX_HOST_CQRS_CQRS03(a) 0x0 /* PF_BAR0 */
#define busnum_CAVM_EMMCX_HOST_CQRS_CQRS03(a) (a)
#define arguments_CAVM_EMMCX_HOST_CQRS_CQRS03(a) (a),-1,-1,-1

/**
 * Register (NCB32b) emmc#_host_cqrs_cqrs04
 *
 * EMMC Host Command Queuing Interrupt Status Register
 * Command Queuing Interrupt Status. This register has several status bit related to
 * specific interrupt
 * event. When even happened and related Command Queuing Interrupt Status Enable is
 * set, the status bit
 * is set to 1. The bits can be cleared by software.
 * Write 0 clears bit.
 * Write 1 is ignored.
 */
union cavm_emmcx_host_cqrs_cqrs04
{
    uint32_t u;
    struct cavm_emmcx_host_cqrs_cqrs04_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t reserved_4_31         : 28;
        uint32_t cqtcl                 : 1;  /**< [  3:  3](R/W1C) Task Cleared (TCL). When task clear operation or clear individual task is completed, the CQE sets
                                                                 this bit to 1. */
        uint32_t cqredi                : 1;  /**< [  2:  2](R/W1C) Response Error Detected Interrupt (RED). When an error is detected in the response received from
                                                                 eMMC device, the CQE sets this bit to 1. Software can select which bits are analyzed by selecting
                                                                 CQRMEM. */
        uint32_t cqtcc                 : 1;  /**< [  1:  1](R/W1C) Task Complete Interrupt (TCC). CQE sets this bit when either a task with INT=1 is completed or
                                                                 Interrupt Coalescing reports interrupt. */
        uint32_t cqhac                 : 1;  /**< [  0:  0](R/W1C) Halt Complete Interrupt (HAC). CQE sets this bit when value of CQHLT changed from 0 to 1. */
#else /* Word 0 - Little Endian */
        uint32_t cqhac                 : 1;  /**< [  0:  0](R/W1C) Halt Complete Interrupt (HAC). CQE sets this bit when value of CQHLT changed from 0 to 1. */
        uint32_t cqtcc                 : 1;  /**< [  1:  1](R/W1C) Task Complete Interrupt (TCC). CQE sets this bit when either a task with INT=1 is completed or
                                                                 Interrupt Coalescing reports interrupt. */
        uint32_t cqredi                : 1;  /**< [  2:  2](R/W1C) Response Error Detected Interrupt (RED). When an error is detected in the response received from
                                                                 eMMC device, the CQE sets this bit to 1. Software can select which bits are analyzed by selecting
                                                                 CQRMEM. */
        uint32_t cqtcl                 : 1;  /**< [  3:  3](R/W1C) Task Cleared (TCL). When task clear operation or clear individual task is completed, the CQE sets
                                                                 this bit to 1. */
        uint32_t reserved_4_31         : 28;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_emmcx_host_cqrs_cqrs04_s cn; */
};
typedef union cavm_emmcx_host_cqrs_cqrs04 cavm_emmcx_host_cqrs_cqrs04_t;

static inline uint64_t CAVM_EMMCX_HOST_CQRS_CQRS04(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_EMMCX_HOST_CQRS_CQRS04(uint64_t a)
{
    if (a==0)
        return 0x824000000410ll + 0x1000000ll * ((a) & 0x0);
    __cavm_csr_fatal("EMMCX_HOST_CQRS_CQRS04", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_EMMCX_HOST_CQRS_CQRS04(a) cavm_emmcx_host_cqrs_cqrs04_t
#define bustype_CAVM_EMMCX_HOST_CQRS_CQRS04(a) CSR_TYPE_NCB32b
#define basename_CAVM_EMMCX_HOST_CQRS_CQRS04(a) "EMMCX_HOST_CQRS_CQRS04"
#define device_bar_CAVM_EMMCX_HOST_CQRS_CQRS04(a) 0x0 /* PF_BAR0 */
#define busnum_CAVM_EMMCX_HOST_CQRS_CQRS04(a) (a)
#define arguments_CAVM_EMMCX_HOST_CQRS_CQRS04(a) (a),-1,-1,-1

/**
 * Register (NCB32b) emmc#_host_cqrs_cqrs05
 *
 * EMMC Host Command Queuing Interrupt Status Enable Register
 * Statuses Enable bits enables interrupt sources. The status is enabled when bit is
 * set 1 (software wrote
 * 1 to the field).
 */
union cavm_emmcx_host_cqrs_cqrs05
{
    uint32_t u;
    struct cavm_emmcx_host_cqrs_cqrs05_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t reserved_4_31         : 28;
        uint32_t cqtclst               : 1;  /**< [  3:  3](R/W) Task Cleared Status Enable (TCL). Enables CQTCL register. */
        uint32_t cqredst               : 1;  /**< [  2:  2](R/W) Response Error Detected Status Enable (RED). Enables CQREDI register. */
        uint32_t cqtccst               : 1;  /**< [  1:  1](R/W) Task Complete Status Enable (TCC). Enables CQHAC register. */
        uint32_t cqhacst               : 1;  /**< [  0:  0](R/W) Halt Complete Status Enable (HAC). Enables CQTCLST register. */
#else /* Word 0 - Little Endian */
        uint32_t cqhacst               : 1;  /**< [  0:  0](R/W) Halt Complete Status Enable (HAC). Enables CQTCLST register. */
        uint32_t cqtccst               : 1;  /**< [  1:  1](R/W) Task Complete Status Enable (TCC). Enables CQHAC register. */
        uint32_t cqredst               : 1;  /**< [  2:  2](R/W) Response Error Detected Status Enable (RED). Enables CQREDI register. */
        uint32_t cqtclst               : 1;  /**< [  3:  3](R/W) Task Cleared Status Enable (TCL). Enables CQTCL register. */
        uint32_t reserved_4_31         : 28;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_emmcx_host_cqrs_cqrs05_s cn; */
};
typedef union cavm_emmcx_host_cqrs_cqrs05 cavm_emmcx_host_cqrs_cqrs05_t;

static inline uint64_t CAVM_EMMCX_HOST_CQRS_CQRS05(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_EMMCX_HOST_CQRS_CQRS05(uint64_t a)
{
    if (a==0)
        return 0x824000000414ll + 0x1000000ll * ((a) & 0x0);
    __cavm_csr_fatal("EMMCX_HOST_CQRS_CQRS05", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_EMMCX_HOST_CQRS_CQRS05(a) cavm_emmcx_host_cqrs_cqrs05_t
#define bustype_CAVM_EMMCX_HOST_CQRS_CQRS05(a) CSR_TYPE_NCB32b
#define basename_CAVM_EMMCX_HOST_CQRS_CQRS05(a) "EMMCX_HOST_CQRS_CQRS05"
#define device_bar_CAVM_EMMCX_HOST_CQRS_CQRS05(a) 0x0 /* PF_BAR0 */
#define busnum_CAVM_EMMCX_HOST_CQRS_CQRS05(a) (a)
#define arguments_CAVM_EMMCX_HOST_CQRS_CQRS05(a) (a),-1,-1,-1

/**
 * Register (NCB32b) emmc#_host_cqrs_cqrs06
 *
 * EMMC Host Command Queuing Interrupt Signal Enable Register
 * Command Queuing Interrupt Signal Enable. This register allows to turn on or turn off interrupt
 * notification separately for each bit of the Command Queuing Interrupt Status.  When
 * Interrupt status
 * bit is set 1 and related field in this register is set (software wrote 1 to the
 * filed), the Interrupt
 * Status is reported on interrupt port.
 */
union cavm_emmcx_host_cqrs_cqrs06
{
    uint32_t u;
    struct cavm_emmcx_host_cqrs_cqrs06_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t reserved_4_31         : 28;
        uint32_t cqtclsi               : 1;  /**< [  3:  3](R/W) Task Cleared Signal Enable (TCL). Enables interrupt signaling from CQTCL register. */
        uint32_t cqredsi               : 1;  /**< [  2:  2](R/W) Response Error Detected Signal Enable (TCC). Enables interrupt signaling from CQREDI register. */
        uint32_t cqtccsi               : 1;  /**< [  1:  1](R/W) Task Complete Signal Enable (TCC). Enables interrupt signaling from CQTCC register. */
        uint32_t cqhacsi               : 1;  /**< [  0:  0](R/W) Halt Complete Signal Enable (HAC). Enables interrupt signaling from CQHLT register. */
#else /* Word 0 - Little Endian */
        uint32_t cqhacsi               : 1;  /**< [  0:  0](R/W) Halt Complete Signal Enable (HAC). Enables interrupt signaling from CQHLT register. */
        uint32_t cqtccsi               : 1;  /**< [  1:  1](R/W) Task Complete Signal Enable (TCC). Enables interrupt signaling from CQTCC register. */
        uint32_t cqredsi               : 1;  /**< [  2:  2](R/W) Response Error Detected Signal Enable (TCC). Enables interrupt signaling from CQREDI register. */
        uint32_t cqtclsi               : 1;  /**< [  3:  3](R/W) Task Cleared Signal Enable (TCL). Enables interrupt signaling from CQTCL register. */
        uint32_t reserved_4_31         : 28;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_emmcx_host_cqrs_cqrs06_s cn; */
};
typedef union cavm_emmcx_host_cqrs_cqrs06 cavm_emmcx_host_cqrs_cqrs06_t;

static inline uint64_t CAVM_EMMCX_HOST_CQRS_CQRS06(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_EMMCX_HOST_CQRS_CQRS06(uint64_t a)
{
    if (a==0)
        return 0x824000000418ll + 0x1000000ll * ((a) & 0x0);
    __cavm_csr_fatal("EMMCX_HOST_CQRS_CQRS06", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_EMMCX_HOST_CQRS_CQRS06(a) cavm_emmcx_host_cqrs_cqrs06_t
#define bustype_CAVM_EMMCX_HOST_CQRS_CQRS06(a) CSR_TYPE_NCB32b
#define basename_CAVM_EMMCX_HOST_CQRS_CQRS06(a) "EMMCX_HOST_CQRS_CQRS06"
#define device_bar_CAVM_EMMCX_HOST_CQRS_CQRS06(a) 0x0 /* PF_BAR0 */
#define busnum_CAVM_EMMCX_HOST_CQRS_CQRS06(a) (a)
#define arguments_CAVM_EMMCX_HOST_CQRS_CQRS06(a) (a),-1,-1,-1

/**
 * Register (NCB32b) emmc#_host_cqrs_cqrs07
 *
 * EMMC Host Interrupt Coalescing Register
 * Interrupt Coalescing. This register allows to group a CQ transfer and report single interrupt for
 * entire group of requested tasks.
 */
union cavm_emmcx_host_cqrs_cqrs07
{
    uint32_t u;
    struct cavm_emmcx_host_cqrs_cqrs07_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t cqiced                : 1;  /**< [ 31: 31](R/W) Interrupt Coalescing Enable/Disable. Enables coalescing mechanism allowing to generate coalescing
                                                                 interrupts. */
        uint32_t reserved_21_30        : 10;
        uint32_t cqicsb                : 1;  /**< [ 20: 20](RO) Interrupt Coalescing Status Bit (ICSB). CQE sets this bit 1 when any task with INT=0 is completed. */
        uint32_t reserved_17_19        : 3;
        uint32_t cqicctr               : 1;  /**< [ 16: 16](WO) Counter and Timer Reset(ICCTR). S/W resets interrupt coalescing timer and counter. */
        uint32_t cqiccthwen            : 1;  /**< [ 15: 15](WO) Interrupt Coalescing Counter Threshold Write Enable (ICCTHWEN). This is write enable for CQICCTH.
                                                                 When this bit is set 1, the field will be updated. */
        uint32_t reserved_13_14        : 2;
        uint32_t cqiccth               : 5;  /**< [ 12:  8](R/W) Interrupt Coalescing Counter Threshold (ICCTH). CQE increments internal counter when task with
                                                                 INT=0 is completed. When internal counter reaches this value the coalescing generates interrupt.
                                                                 Software can select threshold value in range 1 to 31. Software can disable
                                                                 internal counter and interrupt
                                                                 generation by setting this field to 0. */
        uint32_t cqictovalen           : 1;  /**< [  7:  7](WO) Interrupt Coalescing Timeout Value Write Enable (ICTOVALWEN). This is write enable for CQICTOVAL.
                                                                 When this bit is set 1, the field will be updated. */
        uint32_t cqictoval             : 7;  /**< [  6:  0](R/W) Interrupt Coalescing Timeout Value (ICTOVAL). CQE generates interrupt when internal counter
                                                                 reaches period defined in this field. The counter starts when first transfer with INT=0 is
                                                                 completed. The counter increments each time when Internal Clock * 1024 period elapsed. Software can
                                                                 disable this timer by setting this filed to 0. */
#else /* Word 0 - Little Endian */
        uint32_t cqictoval             : 7;  /**< [  6:  0](R/W) Interrupt Coalescing Timeout Value (ICTOVAL). CQE generates interrupt when internal counter
                                                                 reaches period defined in this field. The counter starts when first transfer with INT=0 is
                                                                 completed. The counter increments each time when Internal Clock * 1024 period elapsed. Software can
                                                                 disable this timer by setting this filed to 0. */
        uint32_t cqictovalen           : 1;  /**< [  7:  7](WO) Interrupt Coalescing Timeout Value Write Enable (ICTOVALWEN). This is write enable for CQICTOVAL.
                                                                 When this bit is set 1, the field will be updated. */
        uint32_t cqiccth               : 5;  /**< [ 12:  8](R/W) Interrupt Coalescing Counter Threshold (ICCTH). CQE increments internal counter when task with
                                                                 INT=0 is completed. When internal counter reaches this value the coalescing generates interrupt.
                                                                 Software can select threshold value in range 1 to 31. Software can disable
                                                                 internal counter and interrupt
                                                                 generation by setting this field to 0. */
        uint32_t reserved_13_14        : 2;
        uint32_t cqiccthwen            : 1;  /**< [ 15: 15](WO) Interrupt Coalescing Counter Threshold Write Enable (ICCTHWEN). This is write enable for CQICCTH.
                                                                 When this bit is set 1, the field will be updated. */
        uint32_t cqicctr               : 1;  /**< [ 16: 16](WO) Counter and Timer Reset(ICCTR). S/W resets interrupt coalescing timer and counter. */
        uint32_t reserved_17_19        : 3;
        uint32_t cqicsb                : 1;  /**< [ 20: 20](RO) Interrupt Coalescing Status Bit (ICSB). CQE sets this bit 1 when any task with INT=0 is completed. */
        uint32_t reserved_21_30        : 10;
        uint32_t cqiced                : 1;  /**< [ 31: 31](R/W) Interrupt Coalescing Enable/Disable. Enables coalescing mechanism allowing to generate coalescing
                                                                 interrupts. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_emmcx_host_cqrs_cqrs07_s cn; */
};
typedef union cavm_emmcx_host_cqrs_cqrs07 cavm_emmcx_host_cqrs_cqrs07_t;

static inline uint64_t CAVM_EMMCX_HOST_CQRS_CQRS07(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_EMMCX_HOST_CQRS_CQRS07(uint64_t a)
{
    if (a==0)
        return 0x82400000041cll + 0x1000000ll * ((a) & 0x0);
    __cavm_csr_fatal("EMMCX_HOST_CQRS_CQRS07", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_EMMCX_HOST_CQRS_CQRS07(a) cavm_emmcx_host_cqrs_cqrs07_t
#define bustype_CAVM_EMMCX_HOST_CQRS_CQRS07(a) CSR_TYPE_NCB32b
#define basename_CAVM_EMMCX_HOST_CQRS_CQRS07(a) "EMMCX_HOST_CQRS_CQRS07"
#define device_bar_CAVM_EMMCX_HOST_CQRS_CQRS07(a) 0x0 /* PF_BAR0 */
#define busnum_CAVM_EMMCX_HOST_CQRS_CQRS07(a) (a)
#define arguments_CAVM_EMMCX_HOST_CQRS_CQRS07(a) (a),-1,-1,-1

/**
 * Register (NCB32b) emmc#_host_cqrs_cqrs08
 *
 * EMMC Host Command Queuing Task Descriptor List Base Address Register
 */
union cavm_emmcx_host_cqrs_cqrs08
{
    uint32_t u;
    struct cavm_emmcx_host_cqrs_cqrs08_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t cqtdlba               : 32; /**< [ 31:  0](R/W) Task Descriptor List Base Address (lower). Base address (32 lower bits) of the Task Descriptor
                                                                 List. Software will write values aligned to 1kB boundary (lower 10 bits have to be 0). The hardware
                                                                 ignores 10 lower bits. Software will update this register only when CQE is disabled. */
#else /* Word 0 - Little Endian */
        uint32_t cqtdlba               : 32; /**< [ 31:  0](R/W) Task Descriptor List Base Address (lower). Base address (32 lower bits) of the Task Descriptor
                                                                 List. Software will write values aligned to 1kB boundary (lower 10 bits have to be 0). The hardware
                                                                 ignores 10 lower bits. Software will update this register only when CQE is disabled. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_emmcx_host_cqrs_cqrs08_s cn; */
};
typedef union cavm_emmcx_host_cqrs_cqrs08 cavm_emmcx_host_cqrs_cqrs08_t;

static inline uint64_t CAVM_EMMCX_HOST_CQRS_CQRS08(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_EMMCX_HOST_CQRS_CQRS08(uint64_t a)
{
    if (a==0)
        return 0x824000000420ll + 0x1000000ll * ((a) & 0x0);
    __cavm_csr_fatal("EMMCX_HOST_CQRS_CQRS08", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_EMMCX_HOST_CQRS_CQRS08(a) cavm_emmcx_host_cqrs_cqrs08_t
#define bustype_CAVM_EMMCX_HOST_CQRS_CQRS08(a) CSR_TYPE_NCB32b
#define basename_CAVM_EMMCX_HOST_CQRS_CQRS08(a) "EMMCX_HOST_CQRS_CQRS08"
#define device_bar_CAVM_EMMCX_HOST_CQRS_CQRS08(a) 0x0 /* PF_BAR0 */
#define busnum_CAVM_EMMCX_HOST_CQRS_CQRS08(a) (a)
#define arguments_CAVM_EMMCX_HOST_CQRS_CQRS08(a) (a),-1,-1,-1

/**
 * Register (NCB32b) emmc#_host_cqrs_cqrs09
 *
 * EMMC Host Command Queuing Task Descriptor List Base Address Upper 32 Bits Register
 */
union cavm_emmcx_host_cqrs_cqrs09
{
    uint32_t u;
    struct cavm_emmcx_host_cqrs_cqrs09_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t cqtdlbau              : 32; /**< [ 31:  0](R/W) Task Descriptor List Base Address (upper). Base address (32 upper bits) of the Task descriptor
                                                                 List. This register is not used in 32 bit addressing mode (Software does not
                                                                 change this value). Software
                                                                 will update this register only when CQE is disabled. */
#else /* Word 0 - Little Endian */
        uint32_t cqtdlbau              : 32; /**< [ 31:  0](R/W) Task Descriptor List Base Address (upper). Base address (32 upper bits) of the Task descriptor
                                                                 List. This register is not used in 32 bit addressing mode (Software does not
                                                                 change this value). Software
                                                                 will update this register only when CQE is disabled. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_emmcx_host_cqrs_cqrs09_s cn; */
};
typedef union cavm_emmcx_host_cqrs_cqrs09 cavm_emmcx_host_cqrs_cqrs09_t;

static inline uint64_t CAVM_EMMCX_HOST_CQRS_CQRS09(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_EMMCX_HOST_CQRS_CQRS09(uint64_t a)
{
    if (a==0)
        return 0x824000000424ll + 0x1000000ll * ((a) & 0x0);
    __cavm_csr_fatal("EMMCX_HOST_CQRS_CQRS09", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_EMMCX_HOST_CQRS_CQRS09(a) cavm_emmcx_host_cqrs_cqrs09_t
#define bustype_CAVM_EMMCX_HOST_CQRS_CQRS09(a) CSR_TYPE_NCB32b
#define basename_CAVM_EMMCX_HOST_CQRS_CQRS09(a) "EMMCX_HOST_CQRS_CQRS09"
#define device_bar_CAVM_EMMCX_HOST_CQRS_CQRS09(a) 0x0 /* PF_BAR0 */
#define busnum_CAVM_EMMCX_HOST_CQRS_CQRS09(a) (a)
#define arguments_CAVM_EMMCX_HOST_CQRS_CQRS09(a) (a),-1,-1,-1

/**
 * Register (NCB32b) emmc#_host_cqrs_cqrs10
 *
 * EMMC Host Command Queuing Task Doorbell Register
 * Command Queuing Task Doorbell. CQ has 32 tasks have individual bits to start
 * operation on desired task.
 * The Software writes 1 on any position from 0 to 31 to start task 0 to 31. The
 * Software can request more than
 * one task in single write. The CQ Engine process tasks in order they were requested:
 * - when more than one task is requested in single register write, the task with lower number has
 * higher priority over task with higher number
 * - task(s) requested in earlier register write has higher priority over task(s) in
 * later register write
 * The order of the tasks are maintained during all phases of transaction. If given
 * task is not ready for
 * execution, the CQ Engine takes next task with highest number. CQ Engine needs
 * several clock cycles to
 * push requested in the single register write Task Doorbell to queue.  The slave interface ends write
 * transfer as soon all tasks are in the queue. When Software writes 0 to bit in this
 * register, the related
 * task won't start - this value is ignored. Task Doorbell bit remain 1 until task
 * execution is completed,
 * task is cleared by Clear All Task or Clear Task with this number or CQ Engine is disabled (CQE=0).
 */
union cavm_emmcx_host_cqrs_cqrs10
{
    uint32_t u;
    struct cavm_emmcx_host_cqrs_cqrs10_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t cqtd31                : 1;  /**< [ 31: 31](R/W1S) Command Queuing Task Doorbell 31. */
        uint32_t cqtd30                : 1;  /**< [ 30: 30](R/W1S) Command Queuing Task Doorbell 30. */
        uint32_t cqtd29                : 1;  /**< [ 29: 29](R/W1S) Command Queuing Task Doorbell 29. */
        uint32_t cqtd28                : 1;  /**< [ 28: 28](R/W1S) Command Queuing Task Doorbell 28. */
        uint32_t cqtd27                : 1;  /**< [ 27: 27](R/W1S) Command Queuing Task Doorbell 27. */
        uint32_t cqtd26                : 1;  /**< [ 26: 26](R/W1S) Command Queuing Task Doorbell 26. */
        uint32_t cqtd25                : 1;  /**< [ 25: 25](R/W1S) Command Queuing Task Doorbell 25. */
        uint32_t cqtd24                : 1;  /**< [ 24: 24](R/W1S) Command Queuing Task Doorbell 24. */
        uint32_t cqtd23                : 1;  /**< [ 23: 23](R/W1S) Command Queuing Task Doorbell 23. */
        uint32_t cqtd22                : 1;  /**< [ 22: 22](R/W1S) Command Queuing Task Doorbell 22. */
        uint32_t cqtd21                : 1;  /**< [ 21: 21](R/W1S) Command Queuing Task Doorbell 21. */
        uint32_t cqtd20                : 1;  /**< [ 20: 20](R/W1S) Command Queuing Task Doorbell 20. */
        uint32_t cqtd19                : 1;  /**< [ 19: 19](R/W1S) Command Queuing Task Doorbell 19. */
        uint32_t cqtd18                : 1;  /**< [ 18: 18](R/W1S) Command Queuing Task Doorbell 18. */
        uint32_t cqtd17                : 1;  /**< [ 17: 17](R/W1S) Command Queuing Task Doorbell 17. */
        uint32_t cqtd16                : 1;  /**< [ 16: 16](R/W1S) Command Queuing Task Doorbell 16. */
        uint32_t cqtd15                : 1;  /**< [ 15: 15](R/W1S) Command Queuing Task Doorbell 15. */
        uint32_t cqtd14                : 1;  /**< [ 14: 14](R/W1S) Command Queuing Task Doorbell 14. */
        uint32_t cqtd13                : 1;  /**< [ 13: 13](R/W1S) Command Queuing Task Doorbell 13. */
        uint32_t cqtd12                : 1;  /**< [ 12: 12](R/W1S) Command Queuing Task Doorbell 12. */
        uint32_t cqtd11                : 1;  /**< [ 11: 11](R/W1S) Command Queuing Task Doorbell 11. */
        uint32_t cqtd10                : 1;  /**< [ 10: 10](R/W1S) Command Queuing Task Doorbell 10. */
        uint32_t cqtd09                : 1;  /**< [  9:  9](R/W1S) Command Queuing Task Doorbell 9. */
        uint32_t cqtd08                : 1;  /**< [  8:  8](R/W1S) Command Queuing Task Doorbell 8. */
        uint32_t cqtd07                : 1;  /**< [  7:  7](R/W1S) Command Queuing Task Doorbell 7. */
        uint32_t cqtd06                : 1;  /**< [  6:  6](R/W1S) Command Queuing Task Doorbell 6. */
        uint32_t cqtd05                : 1;  /**< [  5:  5](R/W1S) Command Queuing Task Doorbell 5. */
        uint32_t cqtd04                : 1;  /**< [  4:  4](R/W1S) Command Queuing Task Doorbell 4. */
        uint32_t cqtd03                : 1;  /**< [  3:  3](R/W1S) Command Queuing Task Doorbell 3. */
        uint32_t cqtd02                : 1;  /**< [  2:  2](R/W1S) Command Queuing Task Doorbell 2. */
        uint32_t cqtd01                : 1;  /**< [  1:  1](R/W1S) Command Queuing Task Doorbell 1. */
        uint32_t cqtd00                : 1;  /**< [  0:  0](R/W1S) Command Queuing Task Doorbell 0. */
#else /* Word 0 - Little Endian */
        uint32_t cqtd00                : 1;  /**< [  0:  0](R/W1S) Command Queuing Task Doorbell 0. */
        uint32_t cqtd01                : 1;  /**< [  1:  1](R/W1S) Command Queuing Task Doorbell 1. */
        uint32_t cqtd02                : 1;  /**< [  2:  2](R/W1S) Command Queuing Task Doorbell 2. */
        uint32_t cqtd03                : 1;  /**< [  3:  3](R/W1S) Command Queuing Task Doorbell 3. */
        uint32_t cqtd04                : 1;  /**< [  4:  4](R/W1S) Command Queuing Task Doorbell 4. */
        uint32_t cqtd05                : 1;  /**< [  5:  5](R/W1S) Command Queuing Task Doorbell 5. */
        uint32_t cqtd06                : 1;  /**< [  6:  6](R/W1S) Command Queuing Task Doorbell 6. */
        uint32_t cqtd07                : 1;  /**< [  7:  7](R/W1S) Command Queuing Task Doorbell 7. */
        uint32_t cqtd08                : 1;  /**< [  8:  8](R/W1S) Command Queuing Task Doorbell 8. */
        uint32_t cqtd09                : 1;  /**< [  9:  9](R/W1S) Command Queuing Task Doorbell 9. */
        uint32_t cqtd10                : 1;  /**< [ 10: 10](R/W1S) Command Queuing Task Doorbell 10. */
        uint32_t cqtd11                : 1;  /**< [ 11: 11](R/W1S) Command Queuing Task Doorbell 11. */
        uint32_t cqtd12                : 1;  /**< [ 12: 12](R/W1S) Command Queuing Task Doorbell 12. */
        uint32_t cqtd13                : 1;  /**< [ 13: 13](R/W1S) Command Queuing Task Doorbell 13. */
        uint32_t cqtd14                : 1;  /**< [ 14: 14](R/W1S) Command Queuing Task Doorbell 14. */
        uint32_t cqtd15                : 1;  /**< [ 15: 15](R/W1S) Command Queuing Task Doorbell 15. */
        uint32_t cqtd16                : 1;  /**< [ 16: 16](R/W1S) Command Queuing Task Doorbell 16. */
        uint32_t cqtd17                : 1;  /**< [ 17: 17](R/W1S) Command Queuing Task Doorbell 17. */
        uint32_t cqtd18                : 1;  /**< [ 18: 18](R/W1S) Command Queuing Task Doorbell 18. */
        uint32_t cqtd19                : 1;  /**< [ 19: 19](R/W1S) Command Queuing Task Doorbell 19. */
        uint32_t cqtd20                : 1;  /**< [ 20: 20](R/W1S) Command Queuing Task Doorbell 20. */
        uint32_t cqtd21                : 1;  /**< [ 21: 21](R/W1S) Command Queuing Task Doorbell 21. */
        uint32_t cqtd22                : 1;  /**< [ 22: 22](R/W1S) Command Queuing Task Doorbell 22. */
        uint32_t cqtd23                : 1;  /**< [ 23: 23](R/W1S) Command Queuing Task Doorbell 23. */
        uint32_t cqtd24                : 1;  /**< [ 24: 24](R/W1S) Command Queuing Task Doorbell 24. */
        uint32_t cqtd25                : 1;  /**< [ 25: 25](R/W1S) Command Queuing Task Doorbell 25. */
        uint32_t cqtd26                : 1;  /**< [ 26: 26](R/W1S) Command Queuing Task Doorbell 26. */
        uint32_t cqtd27                : 1;  /**< [ 27: 27](R/W1S) Command Queuing Task Doorbell 27. */
        uint32_t cqtd28                : 1;  /**< [ 28: 28](R/W1S) Command Queuing Task Doorbell 28. */
        uint32_t cqtd29                : 1;  /**< [ 29: 29](R/W1S) Command Queuing Task Doorbell 29. */
        uint32_t cqtd30                : 1;  /**< [ 30: 30](R/W1S) Command Queuing Task Doorbell 30. */
        uint32_t cqtd31                : 1;  /**< [ 31: 31](R/W1S) Command Queuing Task Doorbell 31. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_emmcx_host_cqrs_cqrs10_s cn; */
};
typedef union cavm_emmcx_host_cqrs_cqrs10 cavm_emmcx_host_cqrs_cqrs10_t;

static inline uint64_t CAVM_EMMCX_HOST_CQRS_CQRS10(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_EMMCX_HOST_CQRS_CQRS10(uint64_t a)
{
    if (a==0)
        return 0x824000000428ll + 0x1000000ll * ((a) & 0x0);
    __cavm_csr_fatal("EMMCX_HOST_CQRS_CQRS10", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_EMMCX_HOST_CQRS_CQRS10(a) cavm_emmcx_host_cqrs_cqrs10_t
#define bustype_CAVM_EMMCX_HOST_CQRS_CQRS10(a) CSR_TYPE_NCB32b
#define basename_CAVM_EMMCX_HOST_CQRS_CQRS10(a) "EMMCX_HOST_CQRS_CQRS10"
#define device_bar_CAVM_EMMCX_HOST_CQRS_CQRS10(a) 0x0 /* PF_BAR0 */
#define busnum_CAVM_EMMCX_HOST_CQRS_CQRS10(a) (a)
#define arguments_CAVM_EMMCX_HOST_CQRS_CQRS10(a) (a),-1,-1,-1

/**
 * Register (NCB32b) emmc#_host_cqrs_cqrs11
 *
 * EMMC Host Task Complete Notification Register
 * Task Complete Notification. 32 bits related to 32 tasks. If task N is completed N bit is set 1. Bit
 * that is set 1 can be cleared by writing 1 to this bit.
 */
union cavm_emmcx_host_cqrs_cqrs11
{
    uint32_t u;
    struct cavm_emmcx_host_cqrs_cqrs11_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t cqtcn31               : 1;  /**< [ 31: 31](R/W1C) Task Completion Notification 31. */
        uint32_t cqtcn30               : 1;  /**< [ 30: 30](R/W1C) Task Completion Notification 30. */
        uint32_t cqtcn29               : 1;  /**< [ 29: 29](R/W1C) Task Completion Notification 29. */
        uint32_t cqtcn28               : 1;  /**< [ 28: 28](R/W1C) Task Completion Notification 28. */
        uint32_t cqtcn27               : 1;  /**< [ 27: 27](R/W1C) Task Completion Notification 27. */
        uint32_t cqtcn26               : 1;  /**< [ 26: 26](R/W1C) Task Completion Notification 26. */
        uint32_t cqtcn25               : 1;  /**< [ 25: 25](R/W1C) Task Completion Notification 25. */
        uint32_t cqtcn24               : 1;  /**< [ 24: 24](R/W1C) Task Completion Notification 24. */
        uint32_t cqtcn23               : 1;  /**< [ 23: 23](R/W1C) Task Completion Notification 23. */
        uint32_t cqtcn22               : 1;  /**< [ 22: 22](R/W1C) Task Completion Notification 22. */
        uint32_t cqtcn21               : 1;  /**< [ 21: 21](R/W1C) Task Completion Notification 21. */
        uint32_t cqtcn20               : 1;  /**< [ 20: 20](R/W1C) Task Completion Notification 20. */
        uint32_t cqtcn19               : 1;  /**< [ 19: 19](R/W1C) Task Completion Notification 19. */
        uint32_t cqtcn18               : 1;  /**< [ 18: 18](R/W1C) Task Completion Notification 18. */
        uint32_t cqtcn17               : 1;  /**< [ 17: 17](R/W1C) Task Completion Notification 17. */
        uint32_t cqtcn16               : 1;  /**< [ 16: 16](R/W1C) Task Completion Notification 16. */
        uint32_t cqtcn15               : 1;  /**< [ 15: 15](R/W1C) Task Completion Notification 15. */
        uint32_t cqtcn14               : 1;  /**< [ 14: 14](R/W1C) Task Completion Notification 14. */
        uint32_t cqtcn13               : 1;  /**< [ 13: 13](R/W1C) Task Completion Notification 13. */
        uint32_t cqtcn12               : 1;  /**< [ 12: 12](R/W1C) Task Completion Notification 12. */
        uint32_t cqtcn11               : 1;  /**< [ 11: 11](R/W1C) Task Completion Notification 11. */
        uint32_t cqtcn10               : 1;  /**< [ 10: 10](R/W1C) Task Completion Notification 10. */
        uint32_t cqtcn09               : 1;  /**< [  9:  9](R/W1C) Task Completion Notification 9. */
        uint32_t cqtcn08               : 1;  /**< [  8:  8](R/W1C) Task Completion Notification 8. */
        uint32_t cqtcn07               : 1;  /**< [  7:  7](R/W1C) Task Completion Notification 7. */
        uint32_t cqtcn06               : 1;  /**< [  6:  6](R/W1C) Task Completion Notification 6. */
        uint32_t cqtcn05               : 1;  /**< [  5:  5](R/W1C) Task Completion Notification 5. */
        uint32_t cqtcn04               : 1;  /**< [  4:  4](R/W1C) Task Completion Notification 4. */
        uint32_t cqtcn03               : 1;  /**< [  3:  3](R/W1C) Task Completion Notification 3. */
        uint32_t cqtcn02               : 1;  /**< [  2:  2](R/W1C) Task Completion Notification 2. */
        uint32_t cqtcn01               : 1;  /**< [  1:  1](R/W1C) Task Completion Notification 1. */
        uint32_t cqtcn00               : 1;  /**< [  0:  0](R/W1C) Task Completion Notification 0. */
#else /* Word 0 - Little Endian */
        uint32_t cqtcn00               : 1;  /**< [  0:  0](R/W1C) Task Completion Notification 0. */
        uint32_t cqtcn01               : 1;  /**< [  1:  1](R/W1C) Task Completion Notification 1. */
        uint32_t cqtcn02               : 1;  /**< [  2:  2](R/W1C) Task Completion Notification 2. */
        uint32_t cqtcn03               : 1;  /**< [  3:  3](R/W1C) Task Completion Notification 3. */
        uint32_t cqtcn04               : 1;  /**< [  4:  4](R/W1C) Task Completion Notification 4. */
        uint32_t cqtcn05               : 1;  /**< [  5:  5](R/W1C) Task Completion Notification 5. */
        uint32_t cqtcn06               : 1;  /**< [  6:  6](R/W1C) Task Completion Notification 6. */
        uint32_t cqtcn07               : 1;  /**< [  7:  7](R/W1C) Task Completion Notification 7. */
        uint32_t cqtcn08               : 1;  /**< [  8:  8](R/W1C) Task Completion Notification 8. */
        uint32_t cqtcn09               : 1;  /**< [  9:  9](R/W1C) Task Completion Notification 9. */
        uint32_t cqtcn10               : 1;  /**< [ 10: 10](R/W1C) Task Completion Notification 10. */
        uint32_t cqtcn11               : 1;  /**< [ 11: 11](R/W1C) Task Completion Notification 11. */
        uint32_t cqtcn12               : 1;  /**< [ 12: 12](R/W1C) Task Completion Notification 12. */
        uint32_t cqtcn13               : 1;  /**< [ 13: 13](R/W1C) Task Completion Notification 13. */
        uint32_t cqtcn14               : 1;  /**< [ 14: 14](R/W1C) Task Completion Notification 14. */
        uint32_t cqtcn15               : 1;  /**< [ 15: 15](R/W1C) Task Completion Notification 15. */
        uint32_t cqtcn16               : 1;  /**< [ 16: 16](R/W1C) Task Completion Notification 16. */
        uint32_t cqtcn17               : 1;  /**< [ 17: 17](R/W1C) Task Completion Notification 17. */
        uint32_t cqtcn18               : 1;  /**< [ 18: 18](R/W1C) Task Completion Notification 18. */
        uint32_t cqtcn19               : 1;  /**< [ 19: 19](R/W1C) Task Completion Notification 19. */
        uint32_t cqtcn20               : 1;  /**< [ 20: 20](R/W1C) Task Completion Notification 20. */
        uint32_t cqtcn21               : 1;  /**< [ 21: 21](R/W1C) Task Completion Notification 21. */
        uint32_t cqtcn22               : 1;  /**< [ 22: 22](R/W1C) Task Completion Notification 22. */
        uint32_t cqtcn23               : 1;  /**< [ 23: 23](R/W1C) Task Completion Notification 23. */
        uint32_t cqtcn24               : 1;  /**< [ 24: 24](R/W1C) Task Completion Notification 24. */
        uint32_t cqtcn25               : 1;  /**< [ 25: 25](R/W1C) Task Completion Notification 25. */
        uint32_t cqtcn26               : 1;  /**< [ 26: 26](R/W1C) Task Completion Notification 26. */
        uint32_t cqtcn27               : 1;  /**< [ 27: 27](R/W1C) Task Completion Notification 27. */
        uint32_t cqtcn28               : 1;  /**< [ 28: 28](R/W1C) Task Completion Notification 28. */
        uint32_t cqtcn29               : 1;  /**< [ 29: 29](R/W1C) Task Completion Notification 29. */
        uint32_t cqtcn30               : 1;  /**< [ 30: 30](R/W1C) Task Completion Notification 30. */
        uint32_t cqtcn31               : 1;  /**< [ 31: 31](R/W1C) Task Completion Notification 31. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_emmcx_host_cqrs_cqrs11_s cn; */
};
typedef union cavm_emmcx_host_cqrs_cqrs11 cavm_emmcx_host_cqrs_cqrs11_t;

static inline uint64_t CAVM_EMMCX_HOST_CQRS_CQRS11(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_EMMCX_HOST_CQRS_CQRS11(uint64_t a)
{
    if (a==0)
        return 0x82400000042cll + 0x1000000ll * ((a) & 0x0);
    __cavm_csr_fatal("EMMCX_HOST_CQRS_CQRS11", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_EMMCX_HOST_CQRS_CQRS11(a) cavm_emmcx_host_cqrs_cqrs11_t
#define bustype_CAVM_EMMCX_HOST_CQRS_CQRS11(a) CSR_TYPE_NCB32b
#define basename_CAVM_EMMCX_HOST_CQRS_CQRS11(a) "EMMCX_HOST_CQRS_CQRS11"
#define device_bar_CAVM_EMMCX_HOST_CQRS_CQRS11(a) 0x0 /* PF_BAR0 */
#define busnum_CAVM_EMMCX_HOST_CQRS_CQRS11(a) (a)
#define arguments_CAVM_EMMCX_HOST_CQRS_CQRS11(a) (a),-1,-1,-1

/**
 * Register (NCB32b) emmc#_host_cqrs_cqrs12
 *
 * EMMC Host Device Queue Status Register
 */
union cavm_emmcx_host_cqrs_cqrs12
{
    uint32_t u;
    struct cavm_emmcx_host_cqrs_cqrs12_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t cqdqs                 : 32; /**< [ 31:  0](RO) Device Queue Status. This register reflects to eMMC device status. Task N is ready for execution
                                                                 when bit N in this register is set to 1. This register is updated each time response for
                                                                 SEND_QUEUE_STATUS (CMD13) is received. */
#else /* Word 0 - Little Endian */
        uint32_t cqdqs                 : 32; /**< [ 31:  0](RO) Device Queue Status. This register reflects to eMMC device status. Task N is ready for execution
                                                                 when bit N in this register is set to 1. This register is updated each time response for
                                                                 SEND_QUEUE_STATUS (CMD13) is received. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_emmcx_host_cqrs_cqrs12_s cn; */
};
typedef union cavm_emmcx_host_cqrs_cqrs12 cavm_emmcx_host_cqrs_cqrs12_t;

static inline uint64_t CAVM_EMMCX_HOST_CQRS_CQRS12(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_EMMCX_HOST_CQRS_CQRS12(uint64_t a)
{
    if (a==0)
        return 0x824000000430ll + 0x1000000ll * ((a) & 0x0);
    __cavm_csr_fatal("EMMCX_HOST_CQRS_CQRS12", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_EMMCX_HOST_CQRS_CQRS12(a) cavm_emmcx_host_cqrs_cqrs12_t
#define bustype_CAVM_EMMCX_HOST_CQRS_CQRS12(a) CSR_TYPE_NCB32b
#define basename_CAVM_EMMCX_HOST_CQRS_CQRS12(a) "EMMCX_HOST_CQRS_CQRS12"
#define device_bar_CAVM_EMMCX_HOST_CQRS_CQRS12(a) 0x0 /* PF_BAR0 */
#define busnum_CAVM_EMMCX_HOST_CQRS_CQRS12(a) (a)
#define arguments_CAVM_EMMCX_HOST_CQRS_CQRS12(a) (a),-1,-1,-1

/**
 * Register (NCB32b) emmc#_host_cqrs_cqrs13
 *
 * EMMC Host Device Pending Tasks Register
 * This register information which task is submitted to eMMC (CMD44 and CMD45 was sent) and is not
 * executed. Task N is submitted and not executed when N bit is set 1. Bit N is cleared when task N is
 * completed.
 */
union cavm_emmcx_host_cqrs_cqrs13
{
    uint32_t u;
    struct cavm_emmcx_host_cqrs_cqrs13_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t cqdpt31               : 1;  /**< [ 31: 31](R/W) Device Pending Tasks 31. */
        uint32_t cqdpt30               : 1;  /**< [ 30: 30](R/W) Device Pending Tasks 30. */
        uint32_t cqdpt29               : 1;  /**< [ 29: 29](R/W) Device Pending Tasks 29. */
        uint32_t cqdpt28               : 1;  /**< [ 28: 28](R/W) Device Pending Tasks 28. */
        uint32_t cqdpt27               : 1;  /**< [ 27: 27](R/W) Device Pending Tasks 27. */
        uint32_t cqdpt26               : 1;  /**< [ 26: 26](R/W) Device Pending Tasks 26. */
        uint32_t cqdpt25               : 1;  /**< [ 25: 25](R/W) Device Pending Tasks 25. */
        uint32_t cqdpt24               : 1;  /**< [ 24: 24](R/W) Device Pending Tasks 24. */
        uint32_t cqdpt23               : 1;  /**< [ 23: 23](R/W) Device Pending Tasks 23. */
        uint32_t cqdpt22               : 1;  /**< [ 22: 22](R/W) Device Pending Tasks 22. */
        uint32_t cqdpt21               : 1;  /**< [ 21: 21](R/W) Device Pending Tasks 21. */
        uint32_t cqdpt20               : 1;  /**< [ 20: 20](R/W) Device Pending Tasks 20. */
        uint32_t cqdpt19               : 1;  /**< [ 19: 19](R/W) Device Pending Tasks 19. */
        uint32_t cqdpt18               : 1;  /**< [ 18: 18](R/W) Device Pending Tasks 18. */
        uint32_t cqdpt17               : 1;  /**< [ 17: 17](R/W) Device Pending Tasks 17. */
        uint32_t cqdpt16               : 1;  /**< [ 16: 16](R/W) Device Pending Tasks 16. */
        uint32_t cqdpt15               : 1;  /**< [ 15: 15](R/W) Device Pending Tasks 15. */
        uint32_t cqdpt14               : 1;  /**< [ 14: 14](R/W) Device Pending Tasks 14. */
        uint32_t cqdpt13               : 1;  /**< [ 13: 13](R/W) Device Pending Tasks 13. */
        uint32_t cqdpt12               : 1;  /**< [ 12: 12](R/W) Device Pending Tasks 12. */
        uint32_t cqdpt11               : 1;  /**< [ 11: 11](R/W) Device Pending Tasks 11. */
        uint32_t cqdpt10               : 1;  /**< [ 10: 10](R/W) Device Pending Tasks 10. */
        uint32_t cqdpt09               : 1;  /**< [  9:  9](R/W) Device Pending Tasks 9. */
        uint32_t cqdpt08               : 1;  /**< [  8:  8](R/W) Device Pending Tasks 8. */
        uint32_t cqdpt07               : 1;  /**< [  7:  7](R/W) Device Pending Tasks 7. */
        uint32_t cqdpt06               : 1;  /**< [  6:  6](R/W) Device Pending Tasks 6. */
        uint32_t cqdpt05               : 1;  /**< [  5:  5](R/W) Device Pending Tasks 5. */
        uint32_t cqdpt04               : 1;  /**< [  4:  4](R/W) Device Pending Tasks 4. */
        uint32_t cqdpt03               : 1;  /**< [  3:  3](R/W) Device Pending Tasks 3. */
        uint32_t cqdpt02               : 1;  /**< [  2:  2](R/W) Device Pending Tasks 2. */
        uint32_t cqdpt01               : 1;  /**< [  1:  1](R/W) Device Pending Tasks 1. */
        uint32_t cqdpt00               : 1;  /**< [  0:  0](R/W) Device Pending Tasks 0. */
#else /* Word 0 - Little Endian */
        uint32_t cqdpt00               : 1;  /**< [  0:  0](R/W) Device Pending Tasks 0. */
        uint32_t cqdpt01               : 1;  /**< [  1:  1](R/W) Device Pending Tasks 1. */
        uint32_t cqdpt02               : 1;  /**< [  2:  2](R/W) Device Pending Tasks 2. */
        uint32_t cqdpt03               : 1;  /**< [  3:  3](R/W) Device Pending Tasks 3. */
        uint32_t cqdpt04               : 1;  /**< [  4:  4](R/W) Device Pending Tasks 4. */
        uint32_t cqdpt05               : 1;  /**< [  5:  5](R/W) Device Pending Tasks 5. */
        uint32_t cqdpt06               : 1;  /**< [  6:  6](R/W) Device Pending Tasks 6. */
        uint32_t cqdpt07               : 1;  /**< [  7:  7](R/W) Device Pending Tasks 7. */
        uint32_t cqdpt08               : 1;  /**< [  8:  8](R/W) Device Pending Tasks 8. */
        uint32_t cqdpt09               : 1;  /**< [  9:  9](R/W) Device Pending Tasks 9. */
        uint32_t cqdpt10               : 1;  /**< [ 10: 10](R/W) Device Pending Tasks 10. */
        uint32_t cqdpt11               : 1;  /**< [ 11: 11](R/W) Device Pending Tasks 11. */
        uint32_t cqdpt12               : 1;  /**< [ 12: 12](R/W) Device Pending Tasks 12. */
        uint32_t cqdpt13               : 1;  /**< [ 13: 13](R/W) Device Pending Tasks 13. */
        uint32_t cqdpt14               : 1;  /**< [ 14: 14](R/W) Device Pending Tasks 14. */
        uint32_t cqdpt15               : 1;  /**< [ 15: 15](R/W) Device Pending Tasks 15. */
        uint32_t cqdpt16               : 1;  /**< [ 16: 16](R/W) Device Pending Tasks 16. */
        uint32_t cqdpt17               : 1;  /**< [ 17: 17](R/W) Device Pending Tasks 17. */
        uint32_t cqdpt18               : 1;  /**< [ 18: 18](R/W) Device Pending Tasks 18. */
        uint32_t cqdpt19               : 1;  /**< [ 19: 19](R/W) Device Pending Tasks 19. */
        uint32_t cqdpt20               : 1;  /**< [ 20: 20](R/W) Device Pending Tasks 20. */
        uint32_t cqdpt21               : 1;  /**< [ 21: 21](R/W) Device Pending Tasks 21. */
        uint32_t cqdpt22               : 1;  /**< [ 22: 22](R/W) Device Pending Tasks 22. */
        uint32_t cqdpt23               : 1;  /**< [ 23: 23](R/W) Device Pending Tasks 23. */
        uint32_t cqdpt24               : 1;  /**< [ 24: 24](R/W) Device Pending Tasks 24. */
        uint32_t cqdpt25               : 1;  /**< [ 25: 25](R/W) Device Pending Tasks 25. */
        uint32_t cqdpt26               : 1;  /**< [ 26: 26](R/W) Device Pending Tasks 26. */
        uint32_t cqdpt27               : 1;  /**< [ 27: 27](R/W) Device Pending Tasks 27. */
        uint32_t cqdpt28               : 1;  /**< [ 28: 28](R/W) Device Pending Tasks 28. */
        uint32_t cqdpt29               : 1;  /**< [ 29: 29](R/W) Device Pending Tasks 29. */
        uint32_t cqdpt30               : 1;  /**< [ 30: 30](R/W) Device Pending Tasks 30. */
        uint32_t cqdpt31               : 1;  /**< [ 31: 31](R/W) Device Pending Tasks 31. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_emmcx_host_cqrs_cqrs13_s cn; */
};
typedef union cavm_emmcx_host_cqrs_cqrs13 cavm_emmcx_host_cqrs_cqrs13_t;

static inline uint64_t CAVM_EMMCX_HOST_CQRS_CQRS13(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_EMMCX_HOST_CQRS_CQRS13(uint64_t a)
{
    if (a==0)
        return 0x824000000434ll + 0x1000000ll * ((a) & 0x0);
    __cavm_csr_fatal("EMMCX_HOST_CQRS_CQRS13", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_EMMCX_HOST_CQRS_CQRS13(a) cavm_emmcx_host_cqrs_cqrs13_t
#define bustype_CAVM_EMMCX_HOST_CQRS_CQRS13(a) CSR_TYPE_NCB32b
#define basename_CAVM_EMMCX_HOST_CQRS_CQRS13(a) "EMMCX_HOST_CQRS_CQRS13"
#define device_bar_CAVM_EMMCX_HOST_CQRS_CQRS13(a) 0x0 /* PF_BAR0 */
#define busnum_CAVM_EMMCX_HOST_CQRS_CQRS13(a) (a)
#define arguments_CAVM_EMMCX_HOST_CQRS_CQRS13(a) (a),-1,-1,-1

/**
 * Register (NCB32b) emmc#_host_cqrs_cqrs14
 *
 * EMMC Host Task Clear Register
 * Software writes 1 to N bit of this register to clear task N. Bit remains 1 until clear operation is
 * completed. Once operations ends, the CQE clears this bit to 0. The software has to ensure
 * the CQ Engine is
 * halted before clearing tasks. The Software can clear only single task.  When any bit
 * of this register is
 * set, the software has no to request new task clear. This operation clears only task in
 * the Host Controller.
 * The software should take care about clearing task in the device. Writing 0 to register is ignored.
 */
union cavm_emmcx_host_cqrs_cqrs14
{
    uint32_t u;
    struct cavm_emmcx_host_cqrs_cqrs14_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t cqtc31                : 1;  /**< [ 31: 31](R/W1S) Command Queuing Task Clear 31. */
        uint32_t cqtc30                : 1;  /**< [ 30: 30](R/W1S) Command Queuing Task Clear 30. */
        uint32_t cqtc29                : 1;  /**< [ 29: 29](R/W1S) Command Queuing Task Clear 29. */
        uint32_t cqtc28                : 1;  /**< [ 28: 28](R/W1S) Command Queuing Task Clear 28. */
        uint32_t cqtc27                : 1;  /**< [ 27: 27](R/W1S) Command Queuing Task Clear 27. */
        uint32_t cqtc26                : 1;  /**< [ 26: 26](R/W1S) Command Queuing Task Clear 26. */
        uint32_t cqtc25                : 1;  /**< [ 25: 25](R/W1S) Command Queuing Task Clear 25. */
        uint32_t cqtc24                : 1;  /**< [ 24: 24](R/W1S) Command Queuing Task Clear 24. */
        uint32_t cqtc23                : 1;  /**< [ 23: 23](R/W1S) Command Queuing Task Clear 23. */
        uint32_t cqtc22                : 1;  /**< [ 22: 22](R/W1S) Command Queuing Task Clear 22. */
        uint32_t cqtc21                : 1;  /**< [ 21: 21](R/W1S) Command Queuing Task Clear 21. */
        uint32_t cqtc20                : 1;  /**< [ 20: 20](R/W1S) Command Queuing Task Clear 20. */
        uint32_t cqtc19                : 1;  /**< [ 19: 19](R/W1S) Command Queuing Task Clear 19. */
        uint32_t cqtc18                : 1;  /**< [ 18: 18](R/W1S) Command Queuing Task Clear 18. */
        uint32_t cqtc17                : 1;  /**< [ 17: 17](R/W1S) Command Queuing Task Clear 17. */
        uint32_t cqtc16                : 1;  /**< [ 16: 16](R/W1S) Command Queuing Task Clear 16. */
        uint32_t cqtc15                : 1;  /**< [ 15: 15](R/W1S) Command Queuing Task Clear 15. */
        uint32_t cqtc14                : 1;  /**< [ 14: 14](R/W1S) Command Queuing Task Clear 14. */
        uint32_t cqtc13                : 1;  /**< [ 13: 13](R/W1S) Command Queuing Task Clear 13. */
        uint32_t cqtc12                : 1;  /**< [ 12: 12](R/W1S) Command Queuing Task Clear 12. */
        uint32_t cqtc11                : 1;  /**< [ 11: 11](R/W1S) Command Queuing Task Clear 11. */
        uint32_t cqtc10                : 1;  /**< [ 10: 10](R/W1S) Command Queuing Task Clear 10. */
        uint32_t cqtc09                : 1;  /**< [  9:  9](R/W1S) Command Queuing Task Clear 9. */
        uint32_t cqtc08                : 1;  /**< [  8:  8](R/W1S) Command Queuing Task Clear 8. */
        uint32_t cqtc07                : 1;  /**< [  7:  7](R/W1S) Command Queuing Task Clear 7. */
        uint32_t cqtc06                : 1;  /**< [  6:  6](R/W1S) Command Queuing Task Clear 6. */
        uint32_t cqtc05                : 1;  /**< [  5:  5](R/W1S) Command Queuing Task Clear 5. */
        uint32_t cqtc04                : 1;  /**< [  4:  4](R/W1S) Command Queuing Task Clear 4. */
        uint32_t cqtc03                : 1;  /**< [  3:  3](R/W1S) Command Queuing Task Clear 3. */
        uint32_t cqtc02                : 1;  /**< [  2:  2](R/W1S) Command Queuing Task Clear 2. */
        uint32_t cqtc01                : 1;  /**< [  1:  1](R/W1S) Command Queuing Task Clear 1. */
        uint32_t cqtc00                : 1;  /**< [  0:  0](R/W1S) Command Queuing Task Clear 0. */
#else /* Word 0 - Little Endian */
        uint32_t cqtc00                : 1;  /**< [  0:  0](R/W1S) Command Queuing Task Clear 0. */
        uint32_t cqtc01                : 1;  /**< [  1:  1](R/W1S) Command Queuing Task Clear 1. */
        uint32_t cqtc02                : 1;  /**< [  2:  2](R/W1S) Command Queuing Task Clear 2. */
        uint32_t cqtc03                : 1;  /**< [  3:  3](R/W1S) Command Queuing Task Clear 3. */
        uint32_t cqtc04                : 1;  /**< [  4:  4](R/W1S) Command Queuing Task Clear 4. */
        uint32_t cqtc05                : 1;  /**< [  5:  5](R/W1S) Command Queuing Task Clear 5. */
        uint32_t cqtc06                : 1;  /**< [  6:  6](R/W1S) Command Queuing Task Clear 6. */
        uint32_t cqtc07                : 1;  /**< [  7:  7](R/W1S) Command Queuing Task Clear 7. */
        uint32_t cqtc08                : 1;  /**< [  8:  8](R/W1S) Command Queuing Task Clear 8. */
        uint32_t cqtc09                : 1;  /**< [  9:  9](R/W1S) Command Queuing Task Clear 9. */
        uint32_t cqtc10                : 1;  /**< [ 10: 10](R/W1S) Command Queuing Task Clear 10. */
        uint32_t cqtc11                : 1;  /**< [ 11: 11](R/W1S) Command Queuing Task Clear 11. */
        uint32_t cqtc12                : 1;  /**< [ 12: 12](R/W1S) Command Queuing Task Clear 12. */
        uint32_t cqtc13                : 1;  /**< [ 13: 13](R/W1S) Command Queuing Task Clear 13. */
        uint32_t cqtc14                : 1;  /**< [ 14: 14](R/W1S) Command Queuing Task Clear 14. */
        uint32_t cqtc15                : 1;  /**< [ 15: 15](R/W1S) Command Queuing Task Clear 15. */
        uint32_t cqtc16                : 1;  /**< [ 16: 16](R/W1S) Command Queuing Task Clear 16. */
        uint32_t cqtc17                : 1;  /**< [ 17: 17](R/W1S) Command Queuing Task Clear 17. */
        uint32_t cqtc18                : 1;  /**< [ 18: 18](R/W1S) Command Queuing Task Clear 18. */
        uint32_t cqtc19                : 1;  /**< [ 19: 19](R/W1S) Command Queuing Task Clear 19. */
        uint32_t cqtc20                : 1;  /**< [ 20: 20](R/W1S) Command Queuing Task Clear 20. */
        uint32_t cqtc21                : 1;  /**< [ 21: 21](R/W1S) Command Queuing Task Clear 21. */
        uint32_t cqtc22                : 1;  /**< [ 22: 22](R/W1S) Command Queuing Task Clear 22. */
        uint32_t cqtc23                : 1;  /**< [ 23: 23](R/W1S) Command Queuing Task Clear 23. */
        uint32_t cqtc24                : 1;  /**< [ 24: 24](R/W1S) Command Queuing Task Clear 24. */
        uint32_t cqtc25                : 1;  /**< [ 25: 25](R/W1S) Command Queuing Task Clear 25. */
        uint32_t cqtc26                : 1;  /**< [ 26: 26](R/W1S) Command Queuing Task Clear 26. */
        uint32_t cqtc27                : 1;  /**< [ 27: 27](R/W1S) Command Queuing Task Clear 27. */
        uint32_t cqtc28                : 1;  /**< [ 28: 28](R/W1S) Command Queuing Task Clear 28. */
        uint32_t cqtc29                : 1;  /**< [ 29: 29](R/W1S) Command Queuing Task Clear 29. */
        uint32_t cqtc30                : 1;  /**< [ 30: 30](R/W1S) Command Queuing Task Clear 30. */
        uint32_t cqtc31                : 1;  /**< [ 31: 31](R/W1S) Command Queuing Task Clear 31. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_emmcx_host_cqrs_cqrs14_s cn; */
};
typedef union cavm_emmcx_host_cqrs_cqrs14 cavm_emmcx_host_cqrs_cqrs14_t;

static inline uint64_t CAVM_EMMCX_HOST_CQRS_CQRS14(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_EMMCX_HOST_CQRS_CQRS14(uint64_t a)
{
    if (a==0)
        return 0x824000000438ll + 0x1000000ll * ((a) & 0x0);
    __cavm_csr_fatal("EMMCX_HOST_CQRS_CQRS14", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_EMMCX_HOST_CQRS_CQRS14(a) cavm_emmcx_host_cqrs_cqrs14_t
#define bustype_CAVM_EMMCX_HOST_CQRS_CQRS14(a) CSR_TYPE_NCB32b
#define basename_CAVM_EMMCX_HOST_CQRS_CQRS14(a) "EMMCX_HOST_CQRS_CQRS14"
#define device_bar_CAVM_EMMCX_HOST_CQRS_CQRS14(a) 0x0 /* PF_BAR0 */
#define busnum_CAVM_EMMCX_HOST_CQRS_CQRS14(a) (a)
#define arguments_CAVM_EMMCX_HOST_CQRS_CQRS14(a) (a),-1,-1,-1

/**
 * Register (NCB32b) emmc#_host_cqrs_cqrs16
 *
 * EMMC Host Send Status Configuration 1 Register
 */
union cavm_emmcx_host_cqrs_cqrs16
{
    uint32_t u;
    struct cavm_emmcx_host_cqrs_cqrs16_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t reserved_20_31        : 12;
        uint32_t cqsscbc               : 4;  /**< [ 19: 16](R/W) Send Status Command Block Counter (CBC). Software can define if and when CQE
                                                                 sends SEND_QUEUE_STATUS
                                                                 (CMD13) command during data transfer. When this register is set 0, the CQE does not send CMD13
                                                                 during data transfer. The value is 1, 2, or N means, the CQE sends CMD13 is transferred during
                                                                 last, one before last, or (N-1) before last block, respectively. Accepted register value range is
                                                                 0 to 15. */
        uint32_t cqsscit               : 16; /**< [ 15:  0](R/W) Send Status Command Idle Timer (CIT). When CQE is in idle, the host controller can poll device by
                                                                 sending SEND_QUEUE_STATUS (CMD13) with interval defined by this register. Accepted register value
                                                                 is in range 1 to 65535. The interval can be calculated as CQSSICT * internal clock period. */
#else /* Word 0 - Little Endian */
        uint32_t cqsscit               : 16; /**< [ 15:  0](R/W) Send Status Command Idle Timer (CIT). When CQE is in idle, the host controller can poll device by
                                                                 sending SEND_QUEUE_STATUS (CMD13) with interval defined by this register. Accepted register value
                                                                 is in range 1 to 65535. The interval can be calculated as CQSSICT * internal clock period. */
        uint32_t cqsscbc               : 4;  /**< [ 19: 16](R/W) Send Status Command Block Counter (CBC). Software can define if and when CQE
                                                                 sends SEND_QUEUE_STATUS
                                                                 (CMD13) command during data transfer. When this register is set 0, the CQE does not send CMD13
                                                                 during data transfer. The value is 1, 2, or N means, the CQE sends CMD13 is transferred during
                                                                 last, one before last, or (N-1) before last block, respectively. Accepted register value range is
                                                                 0 to 15. */
        uint32_t reserved_20_31        : 12;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_emmcx_host_cqrs_cqrs16_s cn; */
};
typedef union cavm_emmcx_host_cqrs_cqrs16 cavm_emmcx_host_cqrs_cqrs16_t;

static inline uint64_t CAVM_EMMCX_HOST_CQRS_CQRS16(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_EMMCX_HOST_CQRS_CQRS16(uint64_t a)
{
    if (a==0)
        return 0x824000000440ll + 0x1000000ll * ((a) & 0x0);
    __cavm_csr_fatal("EMMCX_HOST_CQRS_CQRS16", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_EMMCX_HOST_CQRS_CQRS16(a) cavm_emmcx_host_cqrs_cqrs16_t
#define bustype_CAVM_EMMCX_HOST_CQRS_CQRS16(a) CSR_TYPE_NCB32b
#define basename_CAVM_EMMCX_HOST_CQRS_CQRS16(a) "EMMCX_HOST_CQRS_CQRS16"
#define device_bar_CAVM_EMMCX_HOST_CQRS_CQRS16(a) 0x0 /* PF_BAR0 */
#define busnum_CAVM_EMMCX_HOST_CQRS_CQRS16(a) (a)
#define arguments_CAVM_EMMCX_HOST_CQRS_CQRS16(a) (a),-1,-1,-1

/**
 * Register (NCB32b) emmc#_host_cqrs_cqrs17
 *
 * EMMC Host Send Status Configuration 2 Register
 */
union cavm_emmcx_host_cqrs_cqrs17
{
    uint32_t u;
    struct cavm_emmcx_host_cqrs_cqrs17_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t reserved_16_31        : 16;
        uint32_t cqsqsr                : 16; /**< [ 15:  0](R/W) Send Queue Status RCA. Software writes 16-bit RCA value which is send as an argument in
                                                                 SEND_QUEUE_STATUS (CMD13) command. */
#else /* Word 0 - Little Endian */
        uint32_t cqsqsr                : 16; /**< [ 15:  0](R/W) Send Queue Status RCA. Software writes 16-bit RCA value which is send as an argument in
                                                                 SEND_QUEUE_STATUS (CMD13) command. */
        uint32_t reserved_16_31        : 16;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_emmcx_host_cqrs_cqrs17_s cn; */
};
typedef union cavm_emmcx_host_cqrs_cqrs17 cavm_emmcx_host_cqrs_cqrs17_t;

static inline uint64_t CAVM_EMMCX_HOST_CQRS_CQRS17(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_EMMCX_HOST_CQRS_CQRS17(uint64_t a)
{
    if (a==0)
        return 0x824000000444ll + 0x1000000ll * ((a) & 0x0);
    __cavm_csr_fatal("EMMCX_HOST_CQRS_CQRS17", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_EMMCX_HOST_CQRS_CQRS17(a) cavm_emmcx_host_cqrs_cqrs17_t
#define bustype_CAVM_EMMCX_HOST_CQRS_CQRS17(a) CSR_TYPE_NCB32b
#define basename_CAVM_EMMCX_HOST_CQRS_CQRS17(a) "EMMCX_HOST_CQRS_CQRS17"
#define device_bar_CAVM_EMMCX_HOST_CQRS_CQRS17(a) 0x0 /* PF_BAR0 */
#define busnum_CAVM_EMMCX_HOST_CQRS_CQRS17(a) (a)
#define arguments_CAVM_EMMCX_HOST_CQRS_CQRS17(a) (a),-1,-1,-1

/**
 * Register (NCB32b) emmc#_host_cqrs_cqrs18
 *
 * EMMC Host Command Response for Direct-Command Task Register
 */
union cavm_emmcx_host_cqrs_cqrs18
{
    uint32_t u;
    struct cavm_emmcx_host_cqrs_cqrs18_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t cqdclr                : 32; /**< [ 31:  0](RO) Direct Command Last Response. CQE holds the last DCMD command response. */
#else /* Word 0 - Little Endian */
        uint32_t cqdclr                : 32; /**< [ 31:  0](RO) Direct Command Last Response. CQE holds the last DCMD command response. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_emmcx_host_cqrs_cqrs18_s cn; */
};
typedef union cavm_emmcx_host_cqrs_cqrs18 cavm_emmcx_host_cqrs_cqrs18_t;

static inline uint64_t CAVM_EMMCX_HOST_CQRS_CQRS18(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_EMMCX_HOST_CQRS_CQRS18(uint64_t a)
{
    if (a==0)
        return 0x824000000448ll + 0x1000000ll * ((a) & 0x0);
    __cavm_csr_fatal("EMMCX_HOST_CQRS_CQRS18", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_EMMCX_HOST_CQRS_CQRS18(a) cavm_emmcx_host_cqrs_cqrs18_t
#define bustype_CAVM_EMMCX_HOST_CQRS_CQRS18(a) CSR_TYPE_NCB32b
#define basename_CAVM_EMMCX_HOST_CQRS_CQRS18(a) "EMMCX_HOST_CQRS_CQRS18"
#define device_bar_CAVM_EMMCX_HOST_CQRS_CQRS18(a) 0x0 /* PF_BAR0 */
#define busnum_CAVM_EMMCX_HOST_CQRS_CQRS18(a) (a)
#define arguments_CAVM_EMMCX_HOST_CQRS_CQRS18(a) (a),-1,-1,-1

/**
 * Register (NCB32b) emmc#_host_cqrs_cqrs20
 *
 * EMMC Host Response Mode Error Mask Register
 */
union cavm_emmcx_host_cqrs_cqrs20
{
    uint32_t u;
    struct cavm_emmcx_host_cqrs_cqrs20_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t cqrmem                : 32; /**< [ 31:  0](R/W) Response Mode Error Mask. CQE is able to automatically detect errors in
                                                                 response. The software defines
                                                                 which bits of the response need to be checked. All bits set to 1 (written by
                                                                 software) are analyzed. The
                                                                 CQE reports Response Error Detected Interrupt (CQREDI) when N bit of CQRMEM is 1 and N bit of
                                                                 response is 1. Response for SEND_QUEUE_STATUS (CMD13) automatically sent by CQE is ignored. */
#else /* Word 0 - Little Endian */
        uint32_t cqrmem                : 32; /**< [ 31:  0](R/W) Response Mode Error Mask. CQE is able to automatically detect errors in
                                                                 response. The software defines
                                                                 which bits of the response need to be checked. All bits set to 1 (written by
                                                                 software) are analyzed. The
                                                                 CQE reports Response Error Detected Interrupt (CQREDI) when N bit of CQRMEM is 1 and N bit of
                                                                 response is 1. Response for SEND_QUEUE_STATUS (CMD13) automatically sent by CQE is ignored. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_emmcx_host_cqrs_cqrs20_s cn; */
};
typedef union cavm_emmcx_host_cqrs_cqrs20 cavm_emmcx_host_cqrs_cqrs20_t;

static inline uint64_t CAVM_EMMCX_HOST_CQRS_CQRS20(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_EMMCX_HOST_CQRS_CQRS20(uint64_t a)
{
    if (a==0)
        return 0x824000000450ll + 0x1000000ll * ((a) & 0x0);
    __cavm_csr_fatal("EMMCX_HOST_CQRS_CQRS20", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_EMMCX_HOST_CQRS_CQRS20(a) cavm_emmcx_host_cqrs_cqrs20_t
#define bustype_CAVM_EMMCX_HOST_CQRS_CQRS20(a) CSR_TYPE_NCB32b
#define basename_CAVM_EMMCX_HOST_CQRS_CQRS20(a) "EMMCX_HOST_CQRS_CQRS20"
#define device_bar_CAVM_EMMCX_HOST_CQRS_CQRS20(a) 0x0 /* PF_BAR0 */
#define busnum_CAVM_EMMCX_HOST_CQRS_CQRS20(a) (a)
#define arguments_CAVM_EMMCX_HOST_CQRS_CQRS20(a) (a),-1,-1,-1

/**
 * Register (NCB32b) emmc#_host_cqrs_cqrs21
 *
 * EMMC Host Task Error Information Register
 */
union cavm_emmcx_host_cqrs_cqrs21
{
    uint32_t u;
    struct cavm_emmcx_host_cqrs_cqrs21_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t cqdtefv               : 1;  /**< [ 31: 31](RO) Data Transfer Error Fields Valid. Host sets this bit to 1 when error is detected during data
                                                                 transfer. Host clears this bit to 0 when error is detected and there is no active data transfer. */
        uint32_t reserved_29_30        : 2;
        uint32_t cqdtetid              : 5;  /**< [ 28: 24](RO) Data Transfer Error Task ID. Host updates this field with ID of the task with active data transfer
                                                                 when error occurred during the data transfer. */
        uint32_t reserved_22_23        : 2;
        uint32_t cqdteci               : 6;  /**< [ 21: 16](RO) Data Transfer Error Command Index. Host updates this field with index of the data transfer command
                                                                 executed when error occurred during the data transfer. */
        uint32_t cqrmefv               : 1;  /**< [ 15: 15](RO) Response Mode Error Fields Valid. Host sets this bit to 1 when error is detected and command
                                                                 transaction is active. Host sets this bit to 0 when error is detected and command transaction is
                                                                 no active. */
        uint32_t reserved_13_14        : 2;
        uint32_t cqrmetid              : 5;  /**< [ 12:  8](RO) Response Mode Error Task ID. Host updates this field with ID of the task with active command
                                                                 transfer when error occurred during the command transaction. */
        uint32_t reserved_6_7          : 2;
        uint32_t cqrmeci               : 6;  /**< [  5:  0](RO) Response Mode Error Command Index. Host updates this field with index of the command executed when
                                                                 error occurred during the command transaction. */
#else /* Word 0 - Little Endian */
        uint32_t cqrmeci               : 6;  /**< [  5:  0](RO) Response Mode Error Command Index. Host updates this field with index of the command executed when
                                                                 error occurred during the command transaction. */
        uint32_t reserved_6_7          : 2;
        uint32_t cqrmetid              : 5;  /**< [ 12:  8](RO) Response Mode Error Task ID. Host updates this field with ID of the task with active command
                                                                 transfer when error occurred during the command transaction. */
        uint32_t reserved_13_14        : 2;
        uint32_t cqrmefv               : 1;  /**< [ 15: 15](RO) Response Mode Error Fields Valid. Host sets this bit to 1 when error is detected and command
                                                                 transaction is active. Host sets this bit to 0 when error is detected and command transaction is
                                                                 no active. */
        uint32_t cqdteci               : 6;  /**< [ 21: 16](RO) Data Transfer Error Command Index. Host updates this field with index of the data transfer command
                                                                 executed when error occurred during the data transfer. */
        uint32_t reserved_22_23        : 2;
        uint32_t cqdtetid              : 5;  /**< [ 28: 24](RO) Data Transfer Error Task ID. Host updates this field with ID of the task with active data transfer
                                                                 when error occurred during the data transfer. */
        uint32_t reserved_29_30        : 2;
        uint32_t cqdtefv               : 1;  /**< [ 31: 31](RO) Data Transfer Error Fields Valid. Host sets this bit to 1 when error is detected during data
                                                                 transfer. Host clears this bit to 0 when error is detected and there is no active data transfer. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_emmcx_host_cqrs_cqrs21_s cn; */
};
typedef union cavm_emmcx_host_cqrs_cqrs21 cavm_emmcx_host_cqrs_cqrs21_t;

static inline uint64_t CAVM_EMMCX_HOST_CQRS_CQRS21(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_EMMCX_HOST_CQRS_CQRS21(uint64_t a)
{
    if (a==0)
        return 0x824000000454ll + 0x1000000ll * ((a) & 0x0);
    __cavm_csr_fatal("EMMCX_HOST_CQRS_CQRS21", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_EMMCX_HOST_CQRS_CQRS21(a) cavm_emmcx_host_cqrs_cqrs21_t
#define bustype_CAVM_EMMCX_HOST_CQRS_CQRS21(a) CSR_TYPE_NCB32b
#define basename_CAVM_EMMCX_HOST_CQRS_CQRS21(a) "EMMCX_HOST_CQRS_CQRS21"
#define device_bar_CAVM_EMMCX_HOST_CQRS_CQRS21(a) 0x0 /* PF_BAR0 */
#define busnum_CAVM_EMMCX_HOST_CQRS_CQRS21(a) (a)
#define arguments_CAVM_EMMCX_HOST_CQRS_CQRS21(a) (a),-1,-1,-1

/**
 * Register (NCB32b) emmc#_host_cqrs_cqrs22
 *
 * EMMC Host Command Response Index Register
 */
union cavm_emmcx_host_cqrs_cqrs22
{
    uint32_t u;
    struct cavm_emmcx_host_cqrs_cqrs22_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t reserved_6_31         : 26;
        uint32_t cqlcri                : 6;  /**< [  5:  0](RO) Last Command Response Index. Host updates this field with command index when response is received. */
#else /* Word 0 - Little Endian */
        uint32_t cqlcri                : 6;  /**< [  5:  0](RO) Last Command Response Index. Host updates this field with command index when response is received. */
        uint32_t reserved_6_31         : 26;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_emmcx_host_cqrs_cqrs22_s cn; */
};
typedef union cavm_emmcx_host_cqrs_cqrs22 cavm_emmcx_host_cqrs_cqrs22_t;

static inline uint64_t CAVM_EMMCX_HOST_CQRS_CQRS22(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_EMMCX_HOST_CQRS_CQRS22(uint64_t a)
{
    if (a==0)
        return 0x824000000458ll + 0x1000000ll * ((a) & 0x0);
    __cavm_csr_fatal("EMMCX_HOST_CQRS_CQRS22", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_EMMCX_HOST_CQRS_CQRS22(a) cavm_emmcx_host_cqrs_cqrs22_t
#define bustype_CAVM_EMMCX_HOST_CQRS_CQRS22(a) CSR_TYPE_NCB32b
#define basename_CAVM_EMMCX_HOST_CQRS_CQRS22(a) "EMMCX_HOST_CQRS_CQRS22"
#define device_bar_CAVM_EMMCX_HOST_CQRS_CQRS22(a) 0x0 /* PF_BAR0 */
#define busnum_CAVM_EMMCX_HOST_CQRS_CQRS22(a) (a)
#define arguments_CAVM_EMMCX_HOST_CQRS_CQRS22(a) (a),-1,-1,-1

/**
 * Register (NCB32b) emmc#_host_cqrs_cqrs23
 *
 * EMMC Host Command Response Argument Register
 */
union cavm_emmcx_host_cqrs_cqrs23
{
    uint32_t u;
    struct cavm_emmcx_host_cqrs_cqrs23_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t cqlcra                : 32; /**< [ 31:  0](RO) Last Command Response Argument. Host updates this field with command argument when response is
                                                                 received. */
#else /* Word 0 - Little Endian */
        uint32_t cqlcra                : 32; /**< [ 31:  0](RO) Last Command Response Argument. Host updates this field with command argument when response is
                                                                 received. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_emmcx_host_cqrs_cqrs23_s cn; */
};
typedef union cavm_emmcx_host_cqrs_cqrs23 cavm_emmcx_host_cqrs_cqrs23_t;

static inline uint64_t CAVM_EMMCX_HOST_CQRS_CQRS23(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_EMMCX_HOST_CQRS_CQRS23(uint64_t a)
{
    if (a==0)
        return 0x82400000045cll + 0x1000000ll * ((a) & 0x0);
    __cavm_csr_fatal("EMMCX_HOST_CQRS_CQRS23", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_EMMCX_HOST_CQRS_CQRS23(a) cavm_emmcx_host_cqrs_cqrs23_t
#define bustype_CAVM_EMMCX_HOST_CQRS_CQRS23(a) CSR_TYPE_NCB32b
#define basename_CAVM_EMMCX_HOST_CQRS_CQRS23(a) "EMMCX_HOST_CQRS_CQRS23"
#define device_bar_CAVM_EMMCX_HOST_CQRS_CQRS23(a) 0x0 /* PF_BAR0 */
#define busnum_CAVM_EMMCX_HOST_CQRS_CQRS23(a) (a)
#define arguments_CAVM_EMMCX_HOST_CQRS_CQRS23(a) (a),-1,-1,-1

/**
 * Register (NCB32b) emmc#_host_crs_crs63
 *
 * EMMC Host Controller Version/Slot Interrupt Status Register
 */
union cavm_emmcx_host_crs_crs63
{
    uint32_t u;
    struct cavm_emmcx_host_crs_crs63_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t reserved_24_31        : 8;
        uint32_t svn                   : 8;  /**< [ 23: 16](RO) Specification Version Number. This field identifies the Host Controller Specification Version.
                                                                 0x0 = Version 1.00.
                                                                 0x1 = Version 2.00.
                                                                 0x2 = Version 3.00.
                                                                 0x3 = Version 4.00.
                                                                 0x4 = Version 4.10.
                                                                 0x5 = Version 4.20.
                                                                 0x6-0xFF = reserved. */
        uint32_t reserved_1_15         : 15;
        uint32_t ises                  : 1;  /**< [  0:  0](RO) Interrupt Signal For Each Slot. This field informs whether Interrupt or Wake-Up signal is active. */
#else /* Word 0 - Little Endian */
        uint32_t ises                  : 1;  /**< [  0:  0](RO) Interrupt Signal For Each Slot. This field informs whether Interrupt or Wake-Up signal is active. */
        uint32_t reserved_1_15         : 15;
        uint32_t svn                   : 8;  /**< [ 23: 16](RO) Specification Version Number. This field identifies the Host Controller Specification Version.
                                                                 0x0 = Version 1.00.
                                                                 0x1 = Version 2.00.
                                                                 0x2 = Version 3.00.
                                                                 0x3 = Version 4.00.
                                                                 0x4 = Version 4.10.
                                                                 0x5 = Version 4.20.
                                                                 0x6-0xFF = reserved. */
        uint32_t reserved_24_31        : 8;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_emmcx_host_crs_crs63_s cn; */
};
typedef union cavm_emmcx_host_crs_crs63 cavm_emmcx_host_crs_crs63_t;

static inline uint64_t CAVM_EMMCX_HOST_CRS_CRS63(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_EMMCX_HOST_CRS_CRS63(uint64_t a)
{
    if (a==0)
        return 0x8240000002fcll + 0x1000000ll * ((a) & 0x0);
    __cavm_csr_fatal("EMMCX_HOST_CRS_CRS63", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_EMMCX_HOST_CRS_CRS63(a) cavm_emmcx_host_crs_crs63_t
#define bustype_CAVM_EMMCX_HOST_CRS_CRS63(a) CSR_TYPE_NCB32b
#define basename_CAVM_EMMCX_HOST_CRS_CRS63(a) "EMMCX_HOST_CRS_CRS63"
#define device_bar_CAVM_EMMCX_HOST_CRS_CRS63(a) 0x0 /* PF_BAR0 */
#define busnum_CAVM_EMMCX_HOST_CRS_CRS63(a) (a)
#define arguments_CAVM_EMMCX_HOST_CRS_CRS63(a) (a),-1,-1,-1

/**
 * Register (NCB32b) emmc#_host_hrs_hrs00
 *
 * EMMC Host General Information Register
 */
union cavm_emmcx_host_hrs_hrs00
{
    uint32_t u;
    struct cavm_emmcx_host_hrs_hrs00_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t reserved_24_31        : 8;
        uint32_t sav                   : 8;  /**< [ 23: 16](RO) Slot Available. Informs that the Host Controller supports one slot. */
        uint32_t reserved_1_15         : 15;
        uint32_t swr                   : 1;  /**< [  0:  0](R/W1S) Software Reset. When set to 1, the entire core is reset. After reset operation complete, SWR bit
                                                                 is automatically cleared. It takes some time to complete the requested reset operation, so the
                                                                 software should always poll SWR bit status, and continue the other operations only when SWR is
                                                                 cleared to 0. There is no difference between SWR and EMMC_HOST_SRS11[SRFA] software resets. Both
                                                                 resets the same flip-flops. */
#else /* Word 0 - Little Endian */
        uint32_t swr                   : 1;  /**< [  0:  0](R/W1S) Software Reset. When set to 1, the entire core is reset. After reset operation complete, SWR bit
                                                                 is automatically cleared. It takes some time to complete the requested reset operation, so the
                                                                 software should always poll SWR bit status, and continue the other operations only when SWR is
                                                                 cleared to 0. There is no difference between SWR and EMMC_HOST_SRS11[SRFA] software resets. Both
                                                                 resets the same flip-flops. */
        uint32_t reserved_1_15         : 15;
        uint32_t sav                   : 8;  /**< [ 23: 16](RO) Slot Available. Informs that the Host Controller supports one slot. */
        uint32_t reserved_24_31        : 8;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_emmcx_host_hrs_hrs00_s cn; */
};
typedef union cavm_emmcx_host_hrs_hrs00 cavm_emmcx_host_hrs_hrs00_t;

static inline uint64_t CAVM_EMMCX_HOST_HRS_HRS00(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_EMMCX_HOST_HRS_HRS00(uint64_t a)
{
    if (a==0)
        return 0x824000000000ll + 0x1000000ll * ((a) & 0x0);
    __cavm_csr_fatal("EMMCX_HOST_HRS_HRS00", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_EMMCX_HOST_HRS_HRS00(a) cavm_emmcx_host_hrs_hrs00_t
#define bustype_CAVM_EMMCX_HOST_HRS_HRS00(a) CSR_TYPE_NCB32b
#define basename_CAVM_EMMCX_HOST_HRS_HRS00(a) "EMMCX_HOST_HRS_HRS00"
#define device_bar_CAVM_EMMCX_HOST_HRS_HRS00(a) 0x0 /* PF_BAR0 */
#define busnum_CAVM_EMMCX_HOST_HRS_HRS00(a) (a)
#define arguments_CAVM_EMMCX_HOST_HRS_HRS00(a) (a),-1,-1,-1

/**
 * Register (NCB32b) emmc#_host_hrs_hrs01
 *
 * EMMC Host Debounce Setting Register
 */
union cavm_emmcx_host_hrs_hrs01
{
    uint32_t u;
    struct cavm_emmcx_host_hrs_hrs01_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t reserved_24_31        : 8;
        uint32_t dp                    : 24; /**< [ 23:  0](R/W) Debounce Period. Defines the number of system (clk) clock cycles used by the debounce logic,
                                                                 which detects card insertion and removal events. The debounce period is equal to DP * tclk, where
                                                                 tclk is the period of clk clock. If there is no change on pad_mem_ctrl_0 signal level for a
                                                                 programmed debounce period, the core logic decodes the card state as stable and triggers
                                                                 card_inserted or card_removed event. Typically, DP value should be chosen to obtain the period of
                                                                 20ms. This register is reset to DEBOUNCE_PERIOD. */
#else /* Word 0 - Little Endian */
        uint32_t dp                    : 24; /**< [ 23:  0](R/W) Debounce Period. Defines the number of system (clk) clock cycles used by the debounce logic,
                                                                 which detects card insertion and removal events. The debounce period is equal to DP * tclk, where
                                                                 tclk is the period of clk clock. If there is no change on pad_mem_ctrl_0 signal level for a
                                                                 programmed debounce period, the core logic decodes the card state as stable and triggers
                                                                 card_inserted or card_removed event. Typically, DP value should be chosen to obtain the period of
                                                                 20ms. This register is reset to DEBOUNCE_PERIOD. */
        uint32_t reserved_24_31        : 8;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_emmcx_host_hrs_hrs01_s cn; */
};
typedef union cavm_emmcx_host_hrs_hrs01 cavm_emmcx_host_hrs_hrs01_t;

static inline uint64_t CAVM_EMMCX_HOST_HRS_HRS01(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_EMMCX_HOST_HRS_HRS01(uint64_t a)
{
    if (a==0)
        return 0x824000000004ll + 0x1000000ll * ((a) & 0x0);
    __cavm_csr_fatal("EMMCX_HOST_HRS_HRS01", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_EMMCX_HOST_HRS_HRS01(a) cavm_emmcx_host_hrs_hrs01_t
#define bustype_CAVM_EMMCX_HOST_HRS_HRS01(a) CSR_TYPE_NCB32b
#define basename_CAVM_EMMCX_HOST_HRS_HRS01(a) "EMMCX_HOST_HRS_HRS01"
#define device_bar_CAVM_EMMCX_HOST_HRS_HRS01(a) 0x0 /* PF_BAR0 */
#define busnum_CAVM_EMMCX_HOST_HRS_HRS01(a) (a)
#define arguments_CAVM_EMMCX_HOST_HRS_HRS01(a) (a),-1,-1,-1

/**
 * Register (NCB32b) emmc#_host_hrs_hrs02
 *
 * EMMC Host Bus Setting Register
 */
union cavm_emmcx_host_hrs_hrs02
{
    uint32_t u;
    struct cavm_emmcx_host_hrs_hrs02_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t reserved_18_31        : 14;
        uint32_t otn                   : 2;  /**< [ 17: 16](R/W) Number of Outstanding Transfers. Specifies number of outstanding transfers on DMA (Master)
                                                                 interface. The number of outstanding transfers is (OTN + 1), where OTN can be
                                                                 defined in range 0 to 3.
                                                                 This register is set to 3 after reset (i.e. 4 outstanding transfers). */
        uint32_t reserved_4_15         : 12;
        uint32_t pbl                   : 4;  /**< [  3:  0](R/W) Programmable Burst Length. This field defines a maximum number of beats in DMA burst. The value
                                                                 can be changed when no active transfer. This register is 0 after reset.
                                                                 0x1 = 1 beat in burst.
                                                                 0x2 = 2 beats in burst.
                                                                 0x3 = 4 beats in burst.
                                                                 0x4 = 8 bits in burst.
                                                                 other = 16 beats in burst. */
#else /* Word 0 - Little Endian */
        uint32_t pbl                   : 4;  /**< [  3:  0](R/W) Programmable Burst Length. This field defines a maximum number of beats in DMA burst. The value
                                                                 can be changed when no active transfer. This register is 0 after reset.
                                                                 0x1 = 1 beat in burst.
                                                                 0x2 = 2 beats in burst.
                                                                 0x3 = 4 beats in burst.
                                                                 0x4 = 8 bits in burst.
                                                                 other = 16 beats in burst. */
        uint32_t reserved_4_15         : 12;
        uint32_t otn                   : 2;  /**< [ 17: 16](R/W) Number of Outstanding Transfers. Specifies number of outstanding transfers on DMA (Master)
                                                                 interface. The number of outstanding transfers is (OTN + 1), where OTN can be
                                                                 defined in range 0 to 3.
                                                                 This register is set to 3 after reset (i.e. 4 outstanding transfers). */
        uint32_t reserved_18_31        : 14;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_emmcx_host_hrs_hrs02_s cn; */
};
typedef union cavm_emmcx_host_hrs_hrs02 cavm_emmcx_host_hrs_hrs02_t;

static inline uint64_t CAVM_EMMCX_HOST_HRS_HRS02(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_EMMCX_HOST_HRS_HRS02(uint64_t a)
{
    if (a==0)
        return 0x824000000008ll + 0x1000000ll * ((a) & 0x0);
    __cavm_csr_fatal("EMMCX_HOST_HRS_HRS02", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_EMMCX_HOST_HRS_HRS02(a) cavm_emmcx_host_hrs_hrs02_t
#define bustype_CAVM_EMMCX_HOST_HRS_HRS02(a) CSR_TYPE_NCB32b
#define basename_CAVM_EMMCX_HOST_HRS_HRS02(a) "EMMCX_HOST_HRS_HRS02"
#define device_bar_CAVM_EMMCX_HOST_HRS_HRS02(a) 0x0 /* PF_BAR0 */
#define busnum_CAVM_EMMCX_HOST_HRS_HRS02(a) (a)
#define arguments_CAVM_EMMCX_HOST_HRS_HRS02(a) (a),-1,-1,-1

/**
 * Register (NCB32b) emmc#_host_hrs_hrs03
 *
 * EMMC Host AXI ERROR Responses Register
 * These registers extend the standard set of SD-HOST interrupt statuses by information about AXI
 * interface exceptions. The registers are divided into three groups:
 * - Signal Enable registers allow to enable/mask signaling the Interrupt Status registers
 *   (EMMC_HOST_HRS_HRS03[3:0]) on interrupt port.
 * - Status Enable registers allow to enable/disable interrupt source for each
 * Interrupt Status separately
 * - Interrupt Status are triggered whenever the interrupt source is detected and the Status Enable
 * register is enabled.
 */
union cavm_emmcx_host_hrs_hrs03
{
    uint32_t u;
    struct cavm_emmcx_host_hrs_hrs03_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t reserved_20_31        : 12;
        uint32_t aer_iebs              : 1;  /**< [ 19: 19](R/W) Signal Enable for AXI ERROR Response B channel: SLVERR
                                                                 0 = interrupt masked.
                                                                 1 = interrupt enable. */
        uint32_t aer_iebd              : 1;  /**< [ 18: 18](R/W) Signal Enable for AXI ERROR Response B channel: DECERR
                                                                 0 = interrupt masked.
                                                                 1 = interrupt enable. */
        uint32_t aer_iers              : 1;  /**< [ 17: 17](R/W) Signal Enable for AXI ERROR Response R channel: SLVERR
                                                                 0 = interrupt masked.
                                                                 1 = interrupt enable. */
        uint32_t aer_ierd              : 1;  /**< [ 16: 16](R/W) Signal Enable for AXI ERROR Response R channel: DECERR
                                                                 0 = interrupt masked.
                                                                 1 = interrupt enable. */
        uint32_t reserved_12_15        : 4;
        uint32_t aer_senbs             : 1;  /**< [ 11: 11](R/W) Status Enable for AXI ERROR Response B channel: SLVERR
                                                                 0 = status disable.
                                                                 1 = status enable. */
        uint32_t aer_senbd             : 1;  /**< [ 10: 10](R/W) Status Enable for AXI ERROR Response B channel: DECERR
                                                                 0 = status disable.
                                                                 1 = status enable. */
        uint32_t aer_senrs             : 1;  /**< [  9:  9](R/W) Status Enable for AXI ERROR Response R channel: SLVERR
                                                                 0 = status disable.
                                                                 1 = status enable. */
        uint32_t aer_senrd             : 1;  /**< [  8:  8](R/W) Status Enable for AXI ERROR Response R channel: DECERR
                                                                 0 = status disable.
                                                                 1 = status enable. */
        uint32_t reserved_4_7          : 4;
        uint32_t aer_bs                : 1;  /**< [  3:  3](R/W1C) AXI ERROR Response B channel: SLVERR
                                                                 This bit is set when a SLVERR is detected on AXI Master bus in B channel (Write Response Channel). */
        uint32_t aer_bd                : 1;  /**< [  2:  2](R/W1C) AXI ERROR Response B channel: DECERR
                                                                 This bit is set when a DECERR is detected on AXI Master bus in B channel (Write Response Channel). */
        uint32_t aer_rs                : 1;  /**< [  1:  1](R/W1C) AXI ERROR Response R channel: SLVERR
                                                                 This bit is set when a SLVERR is detected on AXI Master bus in R channel (READ Response Channel). */
        uint32_t aer_rd                : 1;  /**< [  0:  0](R/W1C) AXI ERROR Response R channel: DECERR
                                                                 This bit is set when a DECERR is detected on AXI Master bus in R channel (READ Response Channel). */
#else /* Word 0 - Little Endian */
        uint32_t aer_rd                : 1;  /**< [  0:  0](R/W1C) AXI ERROR Response R channel: DECERR
                                                                 This bit is set when a DECERR is detected on AXI Master bus in R channel (READ Response Channel). */
        uint32_t aer_rs                : 1;  /**< [  1:  1](R/W1C) AXI ERROR Response R channel: SLVERR
                                                                 This bit is set when a SLVERR is detected on AXI Master bus in R channel (READ Response Channel). */
        uint32_t aer_bd                : 1;  /**< [  2:  2](R/W1C) AXI ERROR Response B channel: DECERR
                                                                 This bit is set when a DECERR is detected on AXI Master bus in B channel (Write Response Channel). */
        uint32_t aer_bs                : 1;  /**< [  3:  3](R/W1C) AXI ERROR Response B channel: SLVERR
                                                                 This bit is set when a SLVERR is detected on AXI Master bus in B channel (Write Response Channel). */
        uint32_t reserved_4_7          : 4;
        uint32_t aer_senrd             : 1;  /**< [  8:  8](R/W) Status Enable for AXI ERROR Response R channel: DECERR
                                                                 0 = status disable.
                                                                 1 = status enable. */
        uint32_t aer_senrs             : 1;  /**< [  9:  9](R/W) Status Enable for AXI ERROR Response R channel: SLVERR
                                                                 0 = status disable.
                                                                 1 = status enable. */
        uint32_t aer_senbd             : 1;  /**< [ 10: 10](R/W) Status Enable for AXI ERROR Response B channel: DECERR
                                                                 0 = status disable.
                                                                 1 = status enable. */
        uint32_t aer_senbs             : 1;  /**< [ 11: 11](R/W) Status Enable for AXI ERROR Response B channel: SLVERR
                                                                 0 = status disable.
                                                                 1 = status enable. */
        uint32_t reserved_12_15        : 4;
        uint32_t aer_ierd              : 1;  /**< [ 16: 16](R/W) Signal Enable for AXI ERROR Response R channel: DECERR
                                                                 0 = interrupt masked.
                                                                 1 = interrupt enable. */
        uint32_t aer_iers              : 1;  /**< [ 17: 17](R/W) Signal Enable for AXI ERROR Response R channel: SLVERR
                                                                 0 = interrupt masked.
                                                                 1 = interrupt enable. */
        uint32_t aer_iebd              : 1;  /**< [ 18: 18](R/W) Signal Enable for AXI ERROR Response B channel: DECERR
                                                                 0 = interrupt masked.
                                                                 1 = interrupt enable. */
        uint32_t aer_iebs              : 1;  /**< [ 19: 19](R/W) Signal Enable for AXI ERROR Response B channel: SLVERR
                                                                 0 = interrupt masked.
                                                                 1 = interrupt enable. */
        uint32_t reserved_20_31        : 12;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_emmcx_host_hrs_hrs03_s cn; */
};
typedef union cavm_emmcx_host_hrs_hrs03 cavm_emmcx_host_hrs_hrs03_t;

static inline uint64_t CAVM_EMMCX_HOST_HRS_HRS03(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_EMMCX_HOST_HRS_HRS03(uint64_t a)
{
    if (a==0)
        return 0x82400000000cll + 0x1000000ll * ((a) & 0x0);
    __cavm_csr_fatal("EMMCX_HOST_HRS_HRS03", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_EMMCX_HOST_HRS_HRS03(a) cavm_emmcx_host_hrs_hrs03_t
#define bustype_CAVM_EMMCX_HOST_HRS_HRS03(a) CSR_TYPE_NCB32b
#define basename_CAVM_EMMCX_HOST_HRS_HRS03(a) "EMMCX_HOST_HRS_HRS03"
#define device_bar_CAVM_EMMCX_HOST_HRS_HRS03(a) 0x0 /* PF_BAR0 */
#define busnum_CAVM_EMMCX_HOST_HRS_HRS03(a) (a)
#define arguments_CAVM_EMMCX_HOST_HRS_HRS03(a) (a),-1,-1,-1

/**
 * Register (NCB32b) emmc#_host_hrs_hrs04
 *
 * EMMC Host Hrs Hrs04 Register
 */
union cavm_emmcx_host_hrs_hrs04
{
    uint32_t u;
    struct cavm_emmcx_host_hrs_hrs04_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t reserved_16_31        : 16;
        uint32_t phyregaddr            : 16; /**< [ 15:  0](R/W) PHY Register Address. This filed defines the PHY Register Address for read/write accesses to PHY
                                                                 Register done through the EMMC_HOST_HRS_HRS05. */
#else /* Word 0 - Little Endian */
        uint32_t phyregaddr            : 16; /**< [ 15:  0](R/W) PHY Register Address. This filed defines the PHY Register Address for read/write accesses to PHY
                                                                 Register done through the EMMC_HOST_HRS_HRS05. */
        uint32_t reserved_16_31        : 16;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_emmcx_host_hrs_hrs04_s cn; */
};
typedef union cavm_emmcx_host_hrs_hrs04 cavm_emmcx_host_hrs_hrs04_t;

static inline uint64_t CAVM_EMMCX_HOST_HRS_HRS04(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_EMMCX_HOST_HRS_HRS04(uint64_t a)
{
    if (a==0)
        return 0x824000000010ll + 0x1000000ll * ((a) & 0x0);
    __cavm_csr_fatal("EMMCX_HOST_HRS_HRS04", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_EMMCX_HOST_HRS_HRS04(a) cavm_emmcx_host_hrs_hrs04_t
#define bustype_CAVM_EMMCX_HOST_HRS_HRS04(a) CSR_TYPE_NCB32b
#define basename_CAVM_EMMCX_HOST_HRS_HRS04(a) "EMMCX_HOST_HRS_HRS04"
#define device_bar_CAVM_EMMCX_HOST_HRS_HRS04(a) 0x0 /* PF_BAR0 */
#define busnum_CAVM_EMMCX_HOST_HRS_HRS04(a) (a)
#define arguments_CAVM_EMMCX_HOST_HRS_HRS04(a) (a),-1,-1,-1

/**
 * Register (NCB32b) emmc#_host_hrs_hrs05
 *
 * EMMC Host Hrs Hrs05 Register
 */
union cavm_emmcx_host_hrs_hrs05
{
    uint32_t u;
    struct cavm_emmcx_host_hrs_hrs05_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t phyregdata            : 32; /**< [ 31:  0](R/W) PHY Register Data Port. Access to this register generates read or write transaction to Combo PHY
                                                                 Register. When this field is read, a read transaction is sent to PHY through APB interface. Value
                                                                 received in the transaction is passed back as the access result. When this field is write, a write
                                                                 transaction is sent to PHY through APB interface along with the written data.
                                                                 Host Controller -- Combo PHY APB interface does not support unaligned transfers, and so access to
                                                                 this field is limited to 32-bit transactions only. Unaligned (16-bit or 8-bit) access to this
                                                                 field may lead to unexpected result. */
#else /* Word 0 - Little Endian */
        uint32_t phyregdata            : 32; /**< [ 31:  0](R/W) PHY Register Data Port. Access to this register generates read or write transaction to Combo PHY
                                                                 Register. When this field is read, a read transaction is sent to PHY through APB interface. Value
                                                                 received in the transaction is passed back as the access result. When this field is write, a write
                                                                 transaction is sent to PHY through APB interface along with the written data.
                                                                 Host Controller -- Combo PHY APB interface does not support unaligned transfers, and so access to
                                                                 this field is limited to 32-bit transactions only. Unaligned (16-bit or 8-bit) access to this
                                                                 field may lead to unexpected result. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_emmcx_host_hrs_hrs05_s cn; */
};
typedef union cavm_emmcx_host_hrs_hrs05 cavm_emmcx_host_hrs_hrs05_t;

static inline uint64_t CAVM_EMMCX_HOST_HRS_HRS05(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_EMMCX_HOST_HRS_HRS05(uint64_t a)
{
    if (a==0)
        return 0x824000000014ll + 0x1000000ll * ((a) & 0x0);
    __cavm_csr_fatal("EMMCX_HOST_HRS_HRS05", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_EMMCX_HOST_HRS_HRS05(a) cavm_emmcx_host_hrs_hrs05_t
#define bustype_CAVM_EMMCX_HOST_HRS_HRS05(a) CSR_TYPE_NCB32b
#define basename_CAVM_EMMCX_HOST_HRS_HRS05(a) "EMMCX_HOST_HRS_HRS05"
#define device_bar_CAVM_EMMCX_HOST_HRS_HRS05(a) 0x0 /* PF_BAR0 */
#define busnum_CAVM_EMMCX_HOST_HRS_HRS05(a) (a)
#define arguments_CAVM_EMMCX_HOST_HRS_HRS05(a) (a),-1,-1,-1

/**
 * Register (NCB32b) emmc#_host_hrs_hrs06
 *
 * EMMC Host Control Register
 */
union cavm_emmcx_host_hrs_hrs06
{
    uint32_t u;
    struct cavm_emmcx_host_hrs_hrs06_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t reserved_3_31         : 29;
        uint32_t emm                   : 3;  /**< [  2:  0](R/W) eMMC Mode select. This field sets eMMC mode. The mode should reflect to the eMMC device setting.
                                                                 If the SD card is in use, this field needs to be 000b.
                                                                 0x0 =  SD Card in use.
                                                                 0x2 =  SDR.
                                                                 0x3 =  DDR.
                                                                 0x4 =  HS200.
                                                                 0x5 =  HS400.
                                                                 0x6 =  HS400 Enhanced Strobe.
                                                                 others = Legacy. */
#else /* Word 0 - Little Endian */
        uint32_t emm                   : 3;  /**< [  2:  0](R/W) eMMC Mode select. This field sets eMMC mode. The mode should reflect to the eMMC device setting.
                                                                 If the SD card is in use, this field needs to be 000b.
                                                                 0x0 =  SD Card in use.
                                                                 0x2 =  SDR.
                                                                 0x3 =  DDR.
                                                                 0x4 =  HS200.
                                                                 0x5 =  HS400.
                                                                 0x6 =  HS400 Enhanced Strobe.
                                                                 others = Legacy. */
        uint32_t reserved_3_31         : 29;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_emmcx_host_hrs_hrs06_s cn; */
};
typedef union cavm_emmcx_host_hrs_hrs06 cavm_emmcx_host_hrs_hrs06_t;

static inline uint64_t CAVM_EMMCX_HOST_HRS_HRS06(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_EMMCX_HOST_HRS_HRS06(uint64_t a)
{
    if (a==0)
        return 0x824000000018ll + 0x1000000ll * ((a) & 0x0);
    __cavm_csr_fatal("EMMCX_HOST_HRS_HRS06", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_EMMCX_HOST_HRS_HRS06(a) cavm_emmcx_host_hrs_hrs06_t
#define bustype_CAVM_EMMCX_HOST_HRS_HRS06(a) CSR_TYPE_NCB32b
#define basename_CAVM_EMMCX_HOST_HRS_HRS06(a) "EMMCX_HOST_HRS_HRS06"
#define device_bar_CAVM_EMMCX_HOST_HRS_HRS06(a) 0x0 /* PF_BAR0 */
#define busnum_CAVM_EMMCX_HOST_HRS_HRS06(a) (a)
#define arguments_CAVM_EMMCX_HOST_HRS_HRS06(a) (a),-1,-1,-1

/**
 * Register (NCB32b) emmc#_host_hrs_hrs07
 *
 * EMMC Host I/O Delay Information Register
 */
union cavm_emmcx_host_hrs_hrs07
{
    uint32_t u;
    struct cavm_emmcx_host_hrs_hrs07_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t reserved_21_31        : 11;
        uint32_t rw_compensate         : 5;  /**< [ 20: 16](R/W) Read Wait Compensate value. According to delays between PAD and dfi_rddata, dfi_wrdata and PAD
                                                                 and to Read Wait timing requirements,the signal dat[2] should be set to 0 earlier than controller
                                                                 read the end bit of read data. Designer should update this register with delay of data path count
                                                                 in sdmclk clock cycles. If the value is greater than 10 and value of field SDCLK Frequency
                                                                 Select (concatenation of EMMC_HOST_SRS_SRS11[SDCFSH], EMMC_HOST_SRS_SRS11[SDCFSL]) is equal 0,
                                                                 then io_mask_start parameter in PHY register phy_dq_timing_reg should be set with value equal
                                                                 (RW_COMPENSATE-10)*2. */
        uint32_t reserved_5_15         : 11;
        uint32_t idelay_val            : 5;  /**< [  4:  0](R/W) Input delay value for IO. Designer should update this register with delay value of IO with
                                                                 appropriate input delay. Delay is count in half of period of sdmclk. If sdmclk is working
                                                                 at 200MHz frequency, then 1 is 2,5 ns. This value will be used to compensate delay of DAT line
                                                                 when controller is reading Card Interrupt. */
#else /* Word 0 - Little Endian */
        uint32_t idelay_val            : 5;  /**< [  4:  0](R/W) Input delay value for IO. Designer should update this register with delay value of IO with
                                                                 appropriate input delay. Delay is count in half of period of sdmclk. If sdmclk is working
                                                                 at 200MHz frequency, then 1 is 2,5 ns. This value will be used to compensate delay of DAT line
                                                                 when controller is reading Card Interrupt. */
        uint32_t reserved_5_15         : 11;
        uint32_t rw_compensate         : 5;  /**< [ 20: 16](R/W) Read Wait Compensate value. According to delays between PAD and dfi_rddata, dfi_wrdata and PAD
                                                                 and to Read Wait timing requirements,the signal dat[2] should be set to 0 earlier than controller
                                                                 read the end bit of read data. Designer should update this register with delay of data path count
                                                                 in sdmclk clock cycles. If the value is greater than 10 and value of field SDCLK Frequency
                                                                 Select (concatenation of EMMC_HOST_SRS_SRS11[SDCFSH], EMMC_HOST_SRS_SRS11[SDCFSL]) is equal 0,
                                                                 then io_mask_start parameter in PHY register phy_dq_timing_reg should be set with value equal
                                                                 (RW_COMPENSATE-10)*2. */
        uint32_t reserved_21_31        : 11;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_emmcx_host_hrs_hrs07_s cn; */
};
typedef union cavm_emmcx_host_hrs_hrs07 cavm_emmcx_host_hrs_hrs07_t;

static inline uint64_t CAVM_EMMCX_HOST_HRS_HRS07(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_EMMCX_HOST_HRS_HRS07(uint64_t a)
{
    if (a==0)
        return 0x82400000001cll + 0x1000000ll * ((a) & 0x0);
    __cavm_csr_fatal("EMMCX_HOST_HRS_HRS07", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_EMMCX_HOST_HRS_HRS07(a) cavm_emmcx_host_hrs_hrs07_t
#define bustype_CAVM_EMMCX_HOST_HRS_HRS07(a) CSR_TYPE_NCB32b
#define basename_CAVM_EMMCX_HOST_HRS_HRS07(a) "EMMCX_HOST_HRS_HRS07"
#define device_bar_CAVM_EMMCX_HOST_HRS_HRS07(a) 0x0 /* PF_BAR0 */
#define busnum_CAVM_EMMCX_HOST_HRS_HRS07(a) (a)
#define arguments_CAVM_EMMCX_HOST_HRS_HRS07(a) (a),-1,-1,-1

/**
 * Register (NCB32b) emmc#_host_hrs_hrs08
 *
 * EMMC Host PHY DLL Update Control and Status Register
 */
union cavm_emmcx_host_hrs_hrs08
{
    uint32_t u;
    struct cavm_emmcx_host_hrs_hrs08_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t reserved_2_31         : 30;
        uint32_t phy_dll_updack        : 1;  /**< [  1:  1](RO) This register contains value read from sdphy_dfi_ctrlupd_ack port. */
        uint32_t phy_dll_updreq        : 1;  /**< [  0:  0](R/W) This register controls sdphy_dfi_ctrlupd_req port. */
#else /* Word 0 - Little Endian */
        uint32_t phy_dll_updreq        : 1;  /**< [  0:  0](R/W) This register controls sdphy_dfi_ctrlupd_req port. */
        uint32_t phy_dll_updack        : 1;  /**< [  1:  1](RO) This register contains value read from sdphy_dfi_ctrlupd_ack port. */
        uint32_t reserved_2_31         : 30;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_emmcx_host_hrs_hrs08_s cn; */
};
typedef union cavm_emmcx_host_hrs_hrs08 cavm_emmcx_host_hrs_hrs08_t;

static inline uint64_t CAVM_EMMCX_HOST_HRS_HRS08(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_EMMCX_HOST_HRS_HRS08(uint64_t a)
{
    if (a==0)
        return 0x824000000020ll + 0x1000000ll * ((a) & 0x0);
    __cavm_csr_fatal("EMMCX_HOST_HRS_HRS08", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_EMMCX_HOST_HRS_HRS08(a) cavm_emmcx_host_hrs_hrs08_t
#define bustype_CAVM_EMMCX_HOST_HRS_HRS08(a) CSR_TYPE_NCB32b
#define basename_CAVM_EMMCX_HOST_HRS_HRS08(a) "EMMCX_HOST_HRS_HRS08"
#define device_bar_CAVM_EMMCX_HOST_HRS_HRS08(a) 0x0 /* PF_BAR0 */
#define busnum_CAVM_EMMCX_HOST_HRS_HRS08(a) (a)
#define arguments_CAVM_EMMCX_HOST_HRS_HRS08(a) (a),-1,-1,-1

/**
 * Register (NCB32b) emmc#_host_hrs_hrs09
 *
 * EMMC Host PHY Control and Status Register
 */
union cavm_emmcx_host_hrs_hrs09
{
    uint32_t u;
    struct cavm_emmcx_host_hrs_hrs09_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t lvsi_cnt              : 4;  /**< [ 31: 28](R/W) This field defines period of SDCLK pulse during LVS Identification. The period varies in range
                                                                 from LVSI_CNT * 2^(LVSI_TCKSEL+1) * t_CLK to (LVSI_CNT + 1) * 2^(LVSI_TCKSEL+1) * t_CLK.
                                                                 It is recommended to use lower LVSI_TCKSEL value and higher LVSI_CNT value to reduce SDCLK pulse
                                                                 period variation. The variation is +1/-1 LVSI_TCLKSEL unit. */
        uint32_t lvsi_tcksel           : 6;  /**< [ 27: 22](R/W) This field defines unit for LVSI_CNT.
                                                                 0 = 2*t_CLK (two CLK clock cycles).
                                                                 1 = 4*t_CLK (four CLK clock cycles).
                                                                 2 = 8*t_CLK (eight CLK clock cycles).
                                                                 3 = 16*t_CLK (sixteen clock cycles).
                                                                 N = (2^(N+1))*t_CLK where N must equal 0 to 47. Values above 47 are reserved. */
        uint32_t reserved_17_21        : 5;
        uint32_t rddata_en             : 1;  /**< [ 16: 16](R/W) If 1, dfi_rddata_en is forced to 1, else host logic controls the signal. */
        uint32_t rdcmd_en              : 1;  /**< [ 15: 15](R/W) If 1, dfi_rdcmd_en is forced to 1, else host logic controls the signal. */
        uint32_t reserved_4_14         : 11;
        uint32_t extended_wr_mode      : 1;  /**< [  3:  3](R/W) Controls sdphy_param_extended_wr_mode port. Non of software resets clear this register. */
        uint32_t extended_rd_mode      : 1;  /**< [  2:  2](R/W) Controls sdphy_param_extended_rd_mode port. Non of software resets clear this register. */
        uint32_t phy_init_complete     : 1;  /**< [  1:  1](RO) This field contains a value read from sdphy_dfi_init_complete port. */
        uint32_t phy_sw_reset          : 1;  /**< [  0:  0](R/W) This field controls sdphy_dll_rst_n. */
#else /* Word 0 - Little Endian */
        uint32_t phy_sw_reset          : 1;  /**< [  0:  0](R/W) This field controls sdphy_dll_rst_n. */
        uint32_t phy_init_complete     : 1;  /**< [  1:  1](RO) This field contains a value read from sdphy_dfi_init_complete port. */
        uint32_t extended_rd_mode      : 1;  /**< [  2:  2](R/W) Controls sdphy_param_extended_rd_mode port. Non of software resets clear this register. */
        uint32_t extended_wr_mode      : 1;  /**< [  3:  3](R/W) Controls sdphy_param_extended_wr_mode port. Non of software resets clear this register. */
        uint32_t reserved_4_14         : 11;
        uint32_t rdcmd_en              : 1;  /**< [ 15: 15](R/W) If 1, dfi_rdcmd_en is forced to 1, else host logic controls the signal. */
        uint32_t rddata_en             : 1;  /**< [ 16: 16](R/W) If 1, dfi_rddata_en is forced to 1, else host logic controls the signal. */
        uint32_t reserved_17_21        : 5;
        uint32_t lvsi_tcksel           : 6;  /**< [ 27: 22](R/W) This field defines unit for LVSI_CNT.
                                                                 0 = 2*t_CLK (two CLK clock cycles).
                                                                 1 = 4*t_CLK (four CLK clock cycles).
                                                                 2 = 8*t_CLK (eight CLK clock cycles).
                                                                 3 = 16*t_CLK (sixteen clock cycles).
                                                                 N = (2^(N+1))*t_CLK where N must equal 0 to 47. Values above 47 are reserved. */
        uint32_t lvsi_cnt              : 4;  /**< [ 31: 28](R/W) This field defines period of SDCLK pulse during LVS Identification. The period varies in range
                                                                 from LVSI_CNT * 2^(LVSI_TCKSEL+1) * t_CLK to (LVSI_CNT + 1) * 2^(LVSI_TCKSEL+1) * t_CLK.
                                                                 It is recommended to use lower LVSI_TCKSEL value and higher LVSI_CNT value to reduce SDCLK pulse
                                                                 period variation. The variation is +1/-1 LVSI_TCLKSEL unit. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_emmcx_host_hrs_hrs09_s cn; */
};
typedef union cavm_emmcx_host_hrs_hrs09 cavm_emmcx_host_hrs_hrs09_t;

static inline uint64_t CAVM_EMMCX_HOST_HRS_HRS09(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_EMMCX_HOST_HRS_HRS09(uint64_t a)
{
    if (a==0)
        return 0x824000000024ll + 0x1000000ll * ((a) & 0x0);
    __cavm_csr_fatal("EMMCX_HOST_HRS_HRS09", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_EMMCX_HOST_HRS_HRS09(a) cavm_emmcx_host_hrs_hrs09_t
#define bustype_CAVM_EMMCX_HOST_HRS_HRS09(a) CSR_TYPE_NCB32b
#define basename_CAVM_EMMCX_HOST_HRS_HRS09(a) "EMMCX_HOST_HRS_HRS09"
#define device_bar_CAVM_EMMCX_HOST_HRS_HRS09(a) 0x0 /* PF_BAR0 */
#define busnum_CAVM_EMMCX_HOST_HRS_HRS09(a) (a)
#define arguments_CAVM_EMMCX_HOST_HRS_HRS09(a) (a),-1,-1,-1

/**
 * Register (NCB32b) emmc#_host_hrs_hrs10
 *
 * EMMC Host Controller SDCLK Start Point Adjustment Register
 */
union cavm_emmcx_host_hrs_hrs10
{
    uint32_t u;
    struct cavm_emmcx_host_hrs_hrs10_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t reserved_23_31        : 9;
        uint32_t rddata_swap           : 1;  /**< [ 22: 22](R/W) If 1, dfi_rddata bytes [7:0] and [15:8] are swapped. */
        uint32_t reserved_20_21        : 2;
        uint32_t hcsdclkadj            : 4;  /**< [ 19: 16](R/W) This field allows to adjust flow control mechanism which disables SDCLK. With value 0, the clock
                                                                 (dfi_webar/dfi_webar_high) will be disabled right after end bit of the data block. Increasing
                                                                 this value will cause that clock signal is to be disabled earlier with SDCLK period step. */
        uint32_t reserved_0_15         : 16;
#else /* Word 0 - Little Endian */
        uint32_t reserved_0_15         : 16;
        uint32_t hcsdclkadj            : 4;  /**< [ 19: 16](R/W) This field allows to adjust flow control mechanism which disables SDCLK. With value 0, the clock
                                                                 (dfi_webar/dfi_webar_high) will be disabled right after end bit of the data block. Increasing
                                                                 this value will cause that clock signal is to be disabled earlier with SDCLK period step. */
        uint32_t reserved_20_21        : 2;
        uint32_t rddata_swap           : 1;  /**< [ 22: 22](R/W) If 1, dfi_rddata bytes [7:0] and [15:8] are swapped. */
        uint32_t reserved_23_31        : 9;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_emmcx_host_hrs_hrs10_s cn; */
};
typedef union cavm_emmcx_host_hrs_hrs10 cavm_emmcx_host_hrs_hrs10_t;

static inline uint64_t CAVM_EMMCX_HOST_HRS_HRS10(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_EMMCX_HOST_HRS_HRS10(uint64_t a)
{
    if (a==0)
        return 0x824000000028ll + 0x1000000ll * ((a) & 0x0);
    __cavm_csr_fatal("EMMCX_HOST_HRS_HRS10", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_EMMCX_HOST_HRS_HRS10(a) cavm_emmcx_host_hrs_hrs10_t
#define bustype_CAVM_EMMCX_HOST_HRS_HRS10(a) CSR_TYPE_NCB32b
#define basename_CAVM_EMMCX_HOST_HRS_HRS10(a) "EMMCX_HOST_HRS_HRS10"
#define device_bar_CAVM_EMMCX_HOST_HRS_HRS10(a) 0x0 /* PF_BAR0 */
#define busnum_CAVM_EMMCX_HOST_HRS_HRS10(a) (a)
#define arguments_CAVM_EMMCX_HOST_HRS_HRS10(a) (a),-1,-1,-1

/**
 * Register (NCB32b) emmc#_host_hrs_hrs11
 *
 * EMMC Host Control Register
 */
union cavm_emmcx_host_hrs_hrs11
{
    uint32_t u;
    struct cavm_emmcx_host_hrs_hrs11_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t reserved_1_31         : 31;
        uint32_t emmc_rst              : 1;  /**< [  0:  0](R/W) This field drives dfi_rstbar which is used as eMMC reset. */
#else /* Word 0 - Little Endian */
        uint32_t emmc_rst              : 1;  /**< [  0:  0](R/W) This field drives dfi_rstbar which is used as eMMC reset. */
        uint32_t reserved_1_31         : 31;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_emmcx_host_hrs_hrs11_s cn; */
};
typedef union cavm_emmcx_host_hrs_hrs11 cavm_emmcx_host_hrs_hrs11_t;

static inline uint64_t CAVM_EMMCX_HOST_HRS_HRS11(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_EMMCX_HOST_HRS_HRS11(uint64_t a)
{
    if (a==0)
        return 0x82400000002cll + 0x1000000ll * ((a) & 0x0);
    __cavm_csr_fatal("EMMCX_HOST_HRS_HRS11", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_EMMCX_HOST_HRS_HRS11(a) cavm_emmcx_host_hrs_hrs11_t
#define bustype_CAVM_EMMCX_HOST_HRS_HRS11(a) CSR_TYPE_NCB32b
#define basename_CAVM_EMMCX_HOST_HRS_HRS11(a) "EMMCX_HOST_HRS_HRS11"
#define device_bar_CAVM_EMMCX_HOST_HRS_HRS11(a) 0x0 /* PF_BAR0 */
#define busnum_CAVM_EMMCX_HOST_HRS_HRS11(a) (a)
#define arguments_CAVM_EMMCX_HOST_HRS_HRS11(a) (a),-1,-1,-1

/**
 * Register (NCB32b) emmc#_host_hrs_hrs12
 *
 * EMMC Host Interrupt Status Register
 */
union cavm_emmcx_host_hrs_hrs12
{
    uint32_t u;
    struct cavm_emmcx_host_hrs_hrs12_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t reserved_4_31         : 28;
        uint32_t phydatof              : 1;  /**< [  3:  3](R/W1C) PHY DAT Overflow. Status received from Combo PHY informing about DAT FIFO status. */
        uint32_t phydatur              : 1;  /**< [  2:  2](R/W1C) PHY DAT Underrun. Status received from Combo PHY informing about DAT FIFO status. */
        uint32_t phycmdof              : 1;  /**< [  1:  1](R/W1C) PHY CMD Overflow. Status received from Combo PHY informing about CMD FIFO status. */
        uint32_t phycmdur              : 1;  /**< [  0:  0](R/W1C) PHY CMD Underrun. Status received from Combo PHY informing about CMD FIFO status. */
#else /* Word 0 - Little Endian */
        uint32_t phycmdur              : 1;  /**< [  0:  0](R/W1C) PHY CMD Underrun. Status received from Combo PHY informing about CMD FIFO status. */
        uint32_t phycmdof              : 1;  /**< [  1:  1](R/W1C) PHY CMD Overflow. Status received from Combo PHY informing about CMD FIFO status. */
        uint32_t phydatur              : 1;  /**< [  2:  2](R/W1C) PHY DAT Underrun. Status received from Combo PHY informing about DAT FIFO status. */
        uint32_t phydatof              : 1;  /**< [  3:  3](R/W1C) PHY DAT Overflow. Status received from Combo PHY informing about DAT FIFO status. */
        uint32_t reserved_4_31         : 28;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_emmcx_host_hrs_hrs12_s cn; */
};
typedef union cavm_emmcx_host_hrs_hrs12 cavm_emmcx_host_hrs_hrs12_t;

static inline uint64_t CAVM_EMMCX_HOST_HRS_HRS12(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_EMMCX_HOST_HRS_HRS12(uint64_t a)
{
    if (a==0)
        return 0x824000000030ll + 0x1000000ll * ((a) & 0x0);
    __cavm_csr_fatal("EMMCX_HOST_HRS_HRS12", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_EMMCX_HOST_HRS_HRS12(a) cavm_emmcx_host_hrs_hrs12_t
#define bustype_CAVM_EMMCX_HOST_HRS_HRS12(a) CSR_TYPE_NCB32b
#define basename_CAVM_EMMCX_HOST_HRS_HRS12(a) "EMMCX_HOST_HRS_HRS12"
#define device_bar_CAVM_EMMCX_HOST_HRS_HRS12(a) 0x0 /* PF_BAR0 */
#define busnum_CAVM_EMMCX_HOST_HRS_HRS12(a) (a)
#define arguments_CAVM_EMMCX_HOST_HRS_HRS12(a) (a),-1,-1,-1

/**
 * Register (NCB32b) emmc#_host_hrs_hrs13
 *
 * EMMC Host Status Enable Register
 */
union cavm_emmcx_host_hrs_hrs13
{
    uint32_t u;
    struct cavm_emmcx_host_hrs_hrs13_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t reserved_4_31         : 28;
        uint32_t phydatof_se           : 1;  /**< [  3:  3](R/W) Mask for PHYDATOF status
                                                                 0 = masked.
                                                                 1 = enabled. */
        uint32_t phydatur_se           : 1;  /**< [  2:  2](R/W) Mask for PHYDATUR status
                                                                 0 = masked.
                                                                 1 = enabled. */
        uint32_t phycmdof_se           : 1;  /**< [  1:  1](R/W) Mask for PHYCMDOF status
                                                                 0 = masked.
                                                                 1 = enabled. */
        uint32_t phycmdur_se           : 1;  /**< [  0:  0](R/W) Mask for PHYCMDUR status
                                                                 0 = masked.
                                                                 1 = enabled. */
#else /* Word 0 - Little Endian */
        uint32_t phycmdur_se           : 1;  /**< [  0:  0](R/W) Mask for PHYCMDUR status
                                                                 0 = masked.
                                                                 1 = enabled. */
        uint32_t phycmdof_se           : 1;  /**< [  1:  1](R/W) Mask for PHYCMDOF status
                                                                 0 = masked.
                                                                 1 = enabled. */
        uint32_t phydatur_se           : 1;  /**< [  2:  2](R/W) Mask for PHYDATUR status
                                                                 0 = masked.
                                                                 1 = enabled. */
        uint32_t phydatof_se           : 1;  /**< [  3:  3](R/W) Mask for PHYDATOF status
                                                                 0 = masked.
                                                                 1 = enabled. */
        uint32_t reserved_4_31         : 28;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_emmcx_host_hrs_hrs13_s cn; */
};
typedef union cavm_emmcx_host_hrs_hrs13 cavm_emmcx_host_hrs_hrs13_t;

static inline uint64_t CAVM_EMMCX_HOST_HRS_HRS13(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_EMMCX_HOST_HRS_HRS13(uint64_t a)
{
    if (a==0)
        return 0x824000000034ll + 0x1000000ll * ((a) & 0x0);
    __cavm_csr_fatal("EMMCX_HOST_HRS_HRS13", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_EMMCX_HOST_HRS_HRS13(a) cavm_emmcx_host_hrs_hrs13_t
#define bustype_CAVM_EMMCX_HOST_HRS_HRS13(a) CSR_TYPE_NCB32b
#define basename_CAVM_EMMCX_HOST_HRS_HRS13(a) "EMMCX_HOST_HRS_HRS13"
#define device_bar_CAVM_EMMCX_HOST_HRS_HRS13(a) 0x0 /* PF_BAR0 */
#define busnum_CAVM_EMMCX_HOST_HRS_HRS13(a) (a)
#define arguments_CAVM_EMMCX_HOST_HRS_HRS13(a) (a),-1,-1,-1

/**
 * Register (NCB32b) emmc#_host_hrs_hrs14
 *
 * EMMC Host Signal Enable Register
 */
union cavm_emmcx_host_hrs_hrs14
{
    uint32_t u;
    struct cavm_emmcx_host_hrs_hrs14_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t reserved_4_31         : 28;
        uint32_t phydatof_ie           : 1;  /**< [  3:  3](R/W) Interrupt enable for PHYDATOF status
                                                                 0 = masked.
                                                                 1 = enabled. */
        uint32_t phydatur_ie           : 1;  /**< [  2:  2](R/W) Interrupt enable for PHYDATUR status
                                                                 0 = masked.
                                                                 1 = enabled. */
        uint32_t phycmdof_ie           : 1;  /**< [  1:  1](R/W) Interrupt enable for PHYCMDOF status
                                                                 0 = masked.
                                                                 1 = enabled. */
        uint32_t phycmdur_ie           : 1;  /**< [  0:  0](R/W) Interrupt enable for PHYCMDUR status
                                                                 0 = masked.
                                                                 1 = enabled. */
#else /* Word 0 - Little Endian */
        uint32_t phycmdur_ie           : 1;  /**< [  0:  0](R/W) Interrupt enable for PHYCMDUR status
                                                                 0 = masked.
                                                                 1 = enabled. */
        uint32_t phycmdof_ie           : 1;  /**< [  1:  1](R/W) Interrupt enable for PHYCMDOF status
                                                                 0 = masked.
                                                                 1 = enabled. */
        uint32_t phydatur_ie           : 1;  /**< [  2:  2](R/W) Interrupt enable for PHYDATUR status
                                                                 0 = masked.
                                                                 1 = enabled. */
        uint32_t phydatof_ie           : 1;  /**< [  3:  3](R/W) Interrupt enable for PHYDATOF status
                                                                 0 = masked.
                                                                 1 = enabled. */
        uint32_t reserved_4_31         : 28;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_emmcx_host_hrs_hrs14_s cn; */
};
typedef union cavm_emmcx_host_hrs_hrs14 cavm_emmcx_host_hrs_hrs14_t;

static inline uint64_t CAVM_EMMCX_HOST_HRS_HRS14(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_EMMCX_HOST_HRS_HRS14(uint64_t a)
{
    if (a==0)
        return 0x824000000038ll + 0x1000000ll * ((a) & 0x0);
    __cavm_csr_fatal("EMMCX_HOST_HRS_HRS14", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_EMMCX_HOST_HRS_HRS14(a) cavm_emmcx_host_hrs_hrs14_t
#define bustype_CAVM_EMMCX_HOST_HRS_HRS14(a) CSR_TYPE_NCB32b
#define basename_CAVM_EMMCX_HOST_HRS_HRS14(a) "EMMCX_HOST_HRS_HRS14"
#define device_bar_CAVM_EMMCX_HOST_HRS_HRS14(a) 0x0 /* PF_BAR0 */
#define busnum_CAVM_EMMCX_HOST_HRS_HRS14(a) (a)
#define arguments_CAVM_EMMCX_HOST_HRS_HRS14(a) (a),-1,-1,-1

/**
 * Register (NCB32b) emmc#_host_hrs_hrs16
 *
 * EMMC Host CMD/DAT Output Delay Register
 */
union cavm_emmcx_host_hrs_hrs16
{
    uint32_t u;
    struct cavm_emmcx_host_hrs_hrs16_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t wrdata1_sdclk_dly     : 4;  /**< [ 31: 28](R/W) Value in this field defines a delay of the dfi_wrdata[15:8] signal. The delay is equal
                                                                 value * t_SDCLK/2. */
        uint32_t wrdata0_sdclk_dly     : 4;  /**< [ 27: 24](R/W) Value in this field defines a delay of the dfi_wrdata[7:0] signal.The delay is equal
                                                                 value * t_SDCLK/2. */
        uint32_t wrcmd1_sdclk_dly      : 4;  /**< [ 23: 20](R/W) Value in this field defines a delay of the dfi_wrcmd signal. The delay is equal value * t_SDCLK/2. */
        uint32_t wrcmd0_sdclk_dly      : 4;  /**< [ 19: 16](R/W) Value in this field defines a delay of the dfi_wrcmd signal. The delay is equal value * t_SDCLK/2. */
        uint32_t wrdata1_dly           : 4;  /**< [ 15: 12](R/W) Value in this field defines a delay of the dfi_wrdata[15:8] signal. The delay is equal
                                                                 value * t_SDMCLK. */
        uint32_t wrdata0_dly           : 4;  /**< [ 11:  8](R/W) Value in this field defines a delay of the dfi_wrdata[7:0] signal. The delay is equal
                                                                 value * t_SDMCLK. */
        uint32_t wrcmd1_dly            : 4;  /**< [  7:  4](R/W) Value in this field defines a delay of the dfi_wrcmd[1] signal.The delay is equal
                                                                 value * t_SDMCLK. */
        uint32_t wrcmd0_dly            : 4;  /**< [  3:  0](R/W) Value in this field defines a delay of the dfi_wrcmd[0] signal. The delay is equal
                                                                 value * t_SDMCLK. */
#else /* Word 0 - Little Endian */
        uint32_t wrcmd0_dly            : 4;  /**< [  3:  0](R/W) Value in this field defines a delay of the dfi_wrcmd[0] signal. The delay is equal
                                                                 value * t_SDMCLK. */
        uint32_t wrcmd1_dly            : 4;  /**< [  7:  4](R/W) Value in this field defines a delay of the dfi_wrcmd[1] signal.The delay is equal
                                                                 value * t_SDMCLK. */
        uint32_t wrdata0_dly           : 4;  /**< [ 11:  8](R/W) Value in this field defines a delay of the dfi_wrdata[7:0] signal. The delay is equal
                                                                 value * t_SDMCLK. */
        uint32_t wrdata1_dly           : 4;  /**< [ 15: 12](R/W) Value in this field defines a delay of the dfi_wrdata[15:8] signal. The delay is equal
                                                                 value * t_SDMCLK. */
        uint32_t wrcmd0_sdclk_dly      : 4;  /**< [ 19: 16](R/W) Value in this field defines a delay of the dfi_wrcmd signal. The delay is equal value * t_SDCLK/2. */
        uint32_t wrcmd1_sdclk_dly      : 4;  /**< [ 23: 20](R/W) Value in this field defines a delay of the dfi_wrcmd signal. The delay is equal value * t_SDCLK/2. */
        uint32_t wrdata0_sdclk_dly     : 4;  /**< [ 27: 24](R/W) Value in this field defines a delay of the dfi_wrdata[7:0] signal.The delay is equal
                                                                 value * t_SDCLK/2. */
        uint32_t wrdata1_sdclk_dly     : 4;  /**< [ 31: 28](R/W) Value in this field defines a delay of the dfi_wrdata[15:8] signal. The delay is equal
                                                                 value * t_SDCLK/2. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_emmcx_host_hrs_hrs16_s cn; */
};
typedef union cavm_emmcx_host_hrs_hrs16 cavm_emmcx_host_hrs_hrs16_t;

static inline uint64_t CAVM_EMMCX_HOST_HRS_HRS16(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_EMMCX_HOST_HRS_HRS16(uint64_t a)
{
    if (a==0)
        return 0x824000000040ll + 0x1000000ll * ((a) & 0x0);
    __cavm_csr_fatal("EMMCX_HOST_HRS_HRS16", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_EMMCX_HOST_HRS_HRS16(a) cavm_emmcx_host_hrs_hrs16_t
#define bustype_CAVM_EMMCX_HOST_HRS_HRS16(a) CSR_TYPE_NCB32b
#define basename_CAVM_EMMCX_HOST_HRS_HRS16(a) "EMMCX_HOST_HRS_HRS16"
#define device_bar_CAVM_EMMCX_HOST_HRS_HRS16(a) 0x0 /* PF_BAR0 */
#define busnum_CAVM_EMMCX_HOST_HRS_HRS16(a) (a)
#define arguments_CAVM_EMMCX_HOST_HRS_HRS16(a) (a),-1,-1,-1

/**
 * Register (NCB32b) emmc#_host_hrs_hrs29
 *
 * EMMC Host SD Magic Number Register
 */
union cavm_emmcx_host_hrs_hrs29
{
    uint32_t u;
    struct cavm_emmcx_host_hrs_hrs29_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t sdmagicnum            : 32; /**< [ 31:  0](RO) This product number is IP6061. */
#else /* Word 0 - Little Endian */
        uint32_t sdmagicnum            : 32; /**< [ 31:  0](RO) This product number is IP6061. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_emmcx_host_hrs_hrs29_s cn; */
};
typedef union cavm_emmcx_host_hrs_hrs29 cavm_emmcx_host_hrs_hrs29_t;

static inline uint64_t CAVM_EMMCX_HOST_HRS_HRS29(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_EMMCX_HOST_HRS_HRS29(uint64_t a)
{
    if (a==0)
        return 0x824000000074ll + 0x1000000ll * ((a) & 0x0);
    __cavm_csr_fatal("EMMCX_HOST_HRS_HRS29", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_EMMCX_HOST_HRS_HRS29(a) cavm_emmcx_host_hrs_hrs29_t
#define bustype_CAVM_EMMCX_HOST_HRS_HRS29(a) CSR_TYPE_NCB32b
#define basename_CAVM_EMMCX_HOST_HRS_HRS29(a) "EMMCX_HOST_HRS_HRS29"
#define device_bar_CAVM_EMMCX_HOST_HRS_HRS29(a) 0x0 /* PF_BAR0 */
#define busnum_CAVM_EMMCX_HOST_HRS_HRS29(a) (a)
#define arguments_CAVM_EMMCX_HOST_HRS_HRS29(a) (a),-1,-1,-1

/**
 * Register (NCB32b) emmc#_host_hrs_hrs30
 *
 * EMMC Host Capability Register
 * Host Capability Register. This register states whether configurable options are available or are
 * not available in the SD/eMMC Host Controller configuration. This register gives such
 * information about features not been covered by the standard capability registers
 * (EMMC_HOST_SRS_SRS16-EMMC_HOST_SRS_SRS18).
 */
union cavm_emmcx_host_hrs_hrs30
{
    uint32_t u;
    struct cavm_emmcx_host_hrs_hrs30_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t reserved_2_31         : 30;
        uint32_t hs400essup            : 1;  /**< [  1:  1](RO) High Speed 400 Enhance Strobe supported. This field informs whether HS400 Enhance Strobe mode is
                                                                 0 = Not supported.
                                                                 1 = Supported. */
        uint32_t cqsup                 : 1;  /**< [  0:  0](RO) Command Queuing supported. This field informs whether Command Queuing is supported
                                                                 0 = Not supported.
                                                                 1 = Supported. */
#else /* Word 0 - Little Endian */
        uint32_t cqsup                 : 1;  /**< [  0:  0](RO) Command Queuing supported. This field informs whether Command Queuing is supported
                                                                 0 = Not supported.
                                                                 1 = Supported. */
        uint32_t hs400essup            : 1;  /**< [  1:  1](RO) High Speed 400 Enhance Strobe supported. This field informs whether HS400 Enhance Strobe mode is
                                                                 0 = Not supported.
                                                                 1 = Supported. */
        uint32_t reserved_2_31         : 30;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_emmcx_host_hrs_hrs30_s cn; */
};
typedef union cavm_emmcx_host_hrs_hrs30 cavm_emmcx_host_hrs_hrs30_t;

static inline uint64_t CAVM_EMMCX_HOST_HRS_HRS30(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_EMMCX_HOST_HRS_HRS30(uint64_t a)
{
    if (a==0)
        return 0x824000000078ll + 0x1000000ll * ((a) & 0x0);
    __cavm_csr_fatal("EMMCX_HOST_HRS_HRS30", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_EMMCX_HOST_HRS_HRS30(a) cavm_emmcx_host_hrs_hrs30_t
#define bustype_CAVM_EMMCX_HOST_HRS_HRS30(a) CSR_TYPE_NCB32b
#define basename_CAVM_EMMCX_HOST_HRS_HRS30(a) "EMMCX_HOST_HRS_HRS30"
#define device_bar_CAVM_EMMCX_HOST_HRS_HRS30(a) 0x0 /* PF_BAR0 */
#define busnum_CAVM_EMMCX_HOST_HRS_HRS30(a) (a)
#define arguments_CAVM_EMMCX_HOST_HRS_HRS30(a) (a),-1,-1,-1

/**
 * Register (NCB32b) emmc#_host_hrs_hrs31
 *
 * EMMC Host Controller Version Register
 * This register contains the host controller version number.
 */
union cavm_emmcx_host_hrs_hrs31
{
    uint32_t u;
    struct cavm_emmcx_host_hrs_hrs31_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t reserved_28_31        : 4;
        uint32_t hostctrlver           : 12; /**< [ 27: 16](RO) Host controller version. Release number of the host controller. */
        uint32_t reserved_8_15         : 8;
        uint32_t hostfixver            : 8;  /**< [  7:  0](RO) Fix Version Number. Number of the fix related to the Host Controller Version. */
#else /* Word 0 - Little Endian */
        uint32_t hostfixver            : 8;  /**< [  7:  0](RO) Fix Version Number. Number of the fix related to the Host Controller Version. */
        uint32_t reserved_8_15         : 8;
        uint32_t hostctrlver           : 12; /**< [ 27: 16](RO) Host controller version. Release number of the host controller. */
        uint32_t reserved_28_31        : 4;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_emmcx_host_hrs_hrs31_s cn; */
};
typedef union cavm_emmcx_host_hrs_hrs31 cavm_emmcx_host_hrs_hrs31_t;

static inline uint64_t CAVM_EMMCX_HOST_HRS_HRS31(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_EMMCX_HOST_HRS_HRS31(uint64_t a)
{
    if (a==0)
        return 0x82400000007cll + 0x1000000ll * ((a) & 0x0);
    __cavm_csr_fatal("EMMCX_HOST_HRS_HRS31", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_EMMCX_HOST_HRS_HRS31(a) cavm_emmcx_host_hrs_hrs31_t
#define bustype_CAVM_EMMCX_HOST_HRS_HRS31(a) CSR_TYPE_NCB32b
#define basename_CAVM_EMMCX_HOST_HRS_HRS31(a) "EMMCX_HOST_HRS_HRS31"
#define device_bar_CAVM_EMMCX_HOST_HRS_HRS31(a) 0x0 /* PF_BAR0 */
#define busnum_CAVM_EMMCX_HOST_HRS_HRS31(a) (a)
#define arguments_CAVM_EMMCX_HOST_HRS_HRS31(a) (a),-1,-1,-1

/**
 * Register (NCB32b) emmc#_host_hrs_hrs32
 *
 * EMMC Host FSM Monitor Register
 */
union cavm_emmcx_host_hrs_hrs32
{
    uint32_t u;
    struct cavm_emmcx_host_hrs_hrs32_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t load                  : 1;  /**< [ 31: 31](R/W) FSM monitor update request. Setting this bit to 1 starts internal FSM monitor to load value from
                                                                 selected FSM. After finishing this bit will be automatically cleared by hardware and FSM status
                                                                 can be read. */
        uint32_t addr                  : 15; /**< [ 30: 16](WO) FSM address. This field selects which FSM status will be read. All available status machines are
                                                                 listed in Debug section of User Guide. */
        uint32_t data                  : 16; /**< [ 15:  0](RO) FSM status. This register contains read FSM status. Before reading it user should select FSM
                                                                 address (ADDR), set LOAD bit and wait until hardware clears it. */
#else /* Word 0 - Little Endian */
        uint32_t data                  : 16; /**< [ 15:  0](RO) FSM status. This register contains read FSM status. Before reading it user should select FSM
                                                                 address (ADDR), set LOAD bit and wait until hardware clears it. */
        uint32_t addr                  : 15; /**< [ 30: 16](WO) FSM address. This field selects which FSM status will be read. All available status machines are
                                                                 listed in Debug section of User Guide. */
        uint32_t load                  : 1;  /**< [ 31: 31](R/W) FSM monitor update request. Setting this bit to 1 starts internal FSM monitor to load value from
                                                                 selected FSM. After finishing this bit will be automatically cleared by hardware and FSM status
                                                                 can be read. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_emmcx_host_hrs_hrs32_s cn; */
};
typedef union cavm_emmcx_host_hrs_hrs32 cavm_emmcx_host_hrs_hrs32_t;

static inline uint64_t CAVM_EMMCX_HOST_HRS_HRS32(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_EMMCX_HOST_HRS_HRS32(uint64_t a)
{
    if (a==0)
        return 0x824000000080ll + 0x1000000ll * ((a) & 0x0);
    __cavm_csr_fatal("EMMCX_HOST_HRS_HRS32", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_EMMCX_HOST_HRS_HRS32(a) cavm_emmcx_host_hrs_hrs32_t
#define bustype_CAVM_EMMCX_HOST_HRS_HRS32(a) CSR_TYPE_NCB32b
#define basename_CAVM_EMMCX_HOST_HRS_HRS32(a) "EMMCX_HOST_HRS_HRS32"
#define device_bar_CAVM_EMMCX_HOST_HRS_HRS32(a) 0x0 /* PF_BAR0 */
#define busnum_CAVM_EMMCX_HOST_HRS_HRS32(a) (a)
#define arguments_CAVM_EMMCX_HOST_HRS_HRS32(a) (a),-1,-1,-1

/**
 * Register (NCB32b) emmc#_host_hrs_hrs33
 *
 * EMMC Host Tune Status 0 Register
 */
union cavm_emmcx_host_hrs_hrs33
{
    uint32_t u;
    struct cavm_emmcx_host_hrs_hrs33_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t stat0                 : 32; /**< [ 31:  0](RO) Tune status 0. After invoking UHS-I tunning procedure each bit of this register represents status
                                                                 of one tuning step. This field correspond to tuning steps 31-0.
                                                                 0 = Step failed.
                                                                 1 = Step passed. */
#else /* Word 0 - Little Endian */
        uint32_t stat0                 : 32; /**< [ 31:  0](RO) Tune status 0. After invoking UHS-I tunning procedure each bit of this register represents status
                                                                 of one tuning step. This field correspond to tuning steps 31-0.
                                                                 0 = Step failed.
                                                                 1 = Step passed. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_emmcx_host_hrs_hrs33_s cn; */
};
typedef union cavm_emmcx_host_hrs_hrs33 cavm_emmcx_host_hrs_hrs33_t;

static inline uint64_t CAVM_EMMCX_HOST_HRS_HRS33(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_EMMCX_HOST_HRS_HRS33(uint64_t a)
{
    if (a==0)
        return 0x824000000084ll + 0x1000000ll * ((a) & 0x0);
    __cavm_csr_fatal("EMMCX_HOST_HRS_HRS33", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_EMMCX_HOST_HRS_HRS33(a) cavm_emmcx_host_hrs_hrs33_t
#define bustype_CAVM_EMMCX_HOST_HRS_HRS33(a) CSR_TYPE_NCB32b
#define basename_CAVM_EMMCX_HOST_HRS_HRS33(a) "EMMCX_HOST_HRS_HRS33"
#define device_bar_CAVM_EMMCX_HOST_HRS_HRS33(a) 0x0 /* PF_BAR0 */
#define busnum_CAVM_EMMCX_HOST_HRS_HRS33(a) (a)
#define arguments_CAVM_EMMCX_HOST_HRS_HRS33(a) (a),-1,-1,-1

/**
 * Register (NCB32b) emmc#_host_hrs_hrs34
 *
 * EMMC Host Tune Status 1 Register
 */
union cavm_emmcx_host_hrs_hrs34
{
    uint32_t u;
    struct cavm_emmcx_host_hrs_hrs34_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t reserved_8_31         : 24;
        uint32_t stat1                 : 8;  /**< [  7:  0](RO) Tune status 1. This field is continuation of STAT0 field. Its value represents status of tuning
                                                                 steps 39-32. */
#else /* Word 0 - Little Endian */
        uint32_t stat1                 : 8;  /**< [  7:  0](RO) Tune status 1. This field is continuation of STAT0 field. Its value represents status of tuning
                                                                 steps 39-32. */
        uint32_t reserved_8_31         : 24;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_emmcx_host_hrs_hrs34_s cn; */
};
typedef union cavm_emmcx_host_hrs_hrs34 cavm_emmcx_host_hrs_hrs34_t;

static inline uint64_t CAVM_EMMCX_HOST_HRS_HRS34(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_EMMCX_HOST_HRS_HRS34(uint64_t a)
{
    if (a==0)
        return 0x824000000088ll + 0x1000000ll * ((a) & 0x0);
    __cavm_csr_fatal("EMMCX_HOST_HRS_HRS34", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_EMMCX_HOST_HRS_HRS34(a) cavm_emmcx_host_hrs_hrs34_t
#define bustype_CAVM_EMMCX_HOST_HRS_HRS34(a) CSR_TYPE_NCB32b
#define basename_CAVM_EMMCX_HOST_HRS_HRS34(a) "EMMCX_HOST_HRS_HRS34"
#define device_bar_CAVM_EMMCX_HOST_HRS_HRS34(a) 0x0 /* PF_BAR0 */
#define busnum_CAVM_EMMCX_HOST_HRS_HRS34(a) (a)
#define arguments_CAVM_EMMCX_HOST_HRS_HRS34(a) (a),-1,-1,-1

/**
 * Register (NCB32b) emmc#_host_hrs_hrs36
 *
 * EMMC Host Boot Status Register
 */
union cavm_emmcx_host_hrs_hrs36
{
    uint32_t u;
    struct cavm_emmcx_host_hrs_hrs36_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t reserved_7_31         : 25;
        uint32_t boot_edm              : 1;  /**< [  6:  6](RO) Boot Error - Descriptor Mechanism Error. */
        uint32_t boot_ede              : 1;  /**< [  5:  5](RO) Boot Error - End Bit Error. */
        uint32_t boot_edc              : 1;  /**< [  4:  4](RO) Boot Error - Data CRC Error. */
        uint32_t boot_edt              : 1;  /**< [  3:  3](RO) Boot Error - Data Timeout Error. */
        uint32_t boot_eai              : 1;  /**< [  2:  2](RO) Boot Error - Invalid Acknowledge Error. */
        uint32_t boot_eat              : 1;  /**< [  1:  1](RO) Boot Error - Acknowledge Timeout Error. */
        uint32_t boot_act              : 1;  /**< [  0:  0](RO) Boot Active. Informs that the BOOT is active and the operation cannot be interfere by writing any
                                                                 registers. */
#else /* Word 0 - Little Endian */
        uint32_t boot_act              : 1;  /**< [  0:  0](RO) Boot Active. Informs that the BOOT is active and the operation cannot be interfere by writing any
                                                                 registers. */
        uint32_t boot_eat              : 1;  /**< [  1:  1](RO) Boot Error - Acknowledge Timeout Error. */
        uint32_t boot_eai              : 1;  /**< [  2:  2](RO) Boot Error - Invalid Acknowledge Error. */
        uint32_t boot_edt              : 1;  /**< [  3:  3](RO) Boot Error - Data Timeout Error. */
        uint32_t boot_edc              : 1;  /**< [  4:  4](RO) Boot Error - Data CRC Error. */
        uint32_t boot_ede              : 1;  /**< [  5:  5](RO) Boot Error - End Bit Error. */
        uint32_t boot_edm              : 1;  /**< [  6:  6](RO) Boot Error - Descriptor Mechanism Error. */
        uint32_t reserved_7_31         : 25;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_emmcx_host_hrs_hrs36_s cn; */
};
typedef union cavm_emmcx_host_hrs_hrs36 cavm_emmcx_host_hrs_hrs36_t;

static inline uint64_t CAVM_EMMCX_HOST_HRS_HRS36(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_EMMCX_HOST_HRS_HRS36(uint64_t a)
{
    if (a==0)
        return 0x824000000090ll + 0x1000000ll * ((a) & 0x0);
    __cavm_csr_fatal("EMMCX_HOST_HRS_HRS36", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_EMMCX_HOST_HRS_HRS36(a) cavm_emmcx_host_hrs_hrs36_t
#define bustype_CAVM_EMMCX_HOST_HRS_HRS36(a) CSR_TYPE_NCB32b
#define basename_CAVM_EMMCX_HOST_HRS_HRS36(a) "EMMCX_HOST_HRS_HRS36"
#define device_bar_CAVM_EMMCX_HOST_HRS_HRS36(a) 0x0 /* PF_BAR0 */
#define busnum_CAVM_EMMCX_HOST_HRS_HRS36(a) (a)
#define arguments_CAVM_EMMCX_HOST_HRS_HRS36(a) (a),-1,-1,-1

/**
 * Register (NCB32b) emmc#_host_hrs_hrs40
 *
 * EMMC Host BASE Address 0 for Auto-configuration Descriptor Mechanism Register
 */
union cavm_emmcx_host_hrs_hrs40
{
    uint32_t u;
    struct cavm_emmcx_host_hrs_hrs40_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t base_addr0            : 32; /**< [ 31:  0](R/W) Lower descriptor list base address. Lower 32-bits of the base address required for
                                                                 auto-configuration descriptor mechanism. */
#else /* Word 0 - Little Endian */
        uint32_t base_addr0            : 32; /**< [ 31:  0](R/W) Lower descriptor list base address. Lower 32-bits of the base address required for
                                                                 auto-configuration descriptor mechanism. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_emmcx_host_hrs_hrs40_s cn; */
};
typedef union cavm_emmcx_host_hrs_hrs40 cavm_emmcx_host_hrs_hrs40_t;

static inline uint64_t CAVM_EMMCX_HOST_HRS_HRS40(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_EMMCX_HOST_HRS_HRS40(uint64_t a)
{
    if (a==0)
        return 0x8240000000a0ll + 0x1000000ll * ((a) & 0x0);
    __cavm_csr_fatal("EMMCX_HOST_HRS_HRS40", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_EMMCX_HOST_HRS_HRS40(a) cavm_emmcx_host_hrs_hrs40_t
#define bustype_CAVM_EMMCX_HOST_HRS_HRS40(a) CSR_TYPE_NCB32b
#define basename_CAVM_EMMCX_HOST_HRS_HRS40(a) "EMMCX_HOST_HRS_HRS40"
#define device_bar_CAVM_EMMCX_HOST_HRS_HRS40(a) 0x0 /* PF_BAR0 */
#define busnum_CAVM_EMMCX_HOST_HRS_HRS40(a) (a)
#define arguments_CAVM_EMMCX_HOST_HRS_HRS40(a) (a),-1,-1,-1

/**
 * Register (NCB32b) emmc#_host_hrs_hrs41
 *
 * EMMC Host BASE Address 1 for Auto-configuration Descriptor Mechanism Register
 */
union cavm_emmcx_host_hrs_hrs41
{
    uint32_t u;
    struct cavm_emmcx_host_hrs_hrs41_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t base_addr1            : 32; /**< [ 31:  0](R/W) Higher descriptor list base address. Higher 32-bits of the base address required for
                                                                 auto-configuration descriptor mechanism and if 64-bit address is supported. */
#else /* Word 0 - Little Endian */
        uint32_t base_addr1            : 32; /**< [ 31:  0](R/W) Higher descriptor list base address. Higher 32-bits of the base address required for
                                                                 auto-configuration descriptor mechanism and if 64-bit address is supported. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_emmcx_host_hrs_hrs41_s cn; */
};
typedef union cavm_emmcx_host_hrs_hrs41 cavm_emmcx_host_hrs_hrs41_t;

static inline uint64_t CAVM_EMMCX_HOST_HRS_HRS41(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_EMMCX_HOST_HRS_HRS41(uint64_t a)
{
    if (a==0)
        return 0x8240000000a4ll + 0x1000000ll * ((a) & 0x0);
    __cavm_csr_fatal("EMMCX_HOST_HRS_HRS41", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_EMMCX_HOST_HRS_HRS41(a) cavm_emmcx_host_hrs_hrs41_t
#define bustype_CAVM_EMMCX_HOST_HRS_HRS41(a) CSR_TYPE_NCB32b
#define basename_CAVM_EMMCX_HOST_HRS_HRS41(a) "EMMCX_HOST_HRS_HRS41"
#define device_bar_CAVM_EMMCX_HOST_HRS_HRS41(a) 0x0 /* PF_BAR0 */
#define busnum_CAVM_EMMCX_HOST_HRS_HRS41(a) (a)
#define arguments_CAVM_EMMCX_HOST_HRS_HRS41(a) (a),-1,-1,-1

/**
 * Register (NCB32b) emmc#_host_hrs_hrs42
 *
 * EMMC Host Auto-configuration Descriptor Mechanism Enable/disable Register
 */
union cavm_emmcx_host_hrs_hrs42
{
    uint32_t u;
    struct cavm_emmcx_host_hrs_hrs42_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t reserved_5_31         : 27;
        uint32_t descmech_tm           : 4;  /**< [  4:  1](R/W) Descriptor mechanism timeout value. This value determines the interval by which
                                                                 descriptor mechanism
                                                                 timeout is detected. The interval can be computed as below:
                                                                 0x0 = clk*2^(14+2).
                                                                 0x1 = clk*2^(15+2).
                                                                 _ ...
                                                                 0xD = clk*2^(27+2).
                                                                 0xE = clk*2^(28+2).
                                                                 0xF = clk*2^(29+2).
                                                                 Where clk is the system clock period. */
        uint32_t descmech_en           : 1;  /**< [  0:  0](R/W) Enable/disable auto-configuration descriptor mechanism for Host/PHY pre-initialization sequence
                                                                 update. */
#else /* Word 0 - Little Endian */
        uint32_t descmech_en           : 1;  /**< [  0:  0](R/W) Enable/disable auto-configuration descriptor mechanism for Host/PHY pre-initialization sequence
                                                                 update. */
        uint32_t descmech_tm           : 4;  /**< [  4:  1](R/W) Descriptor mechanism timeout value. This value determines the interval by which
                                                                 descriptor mechanism
                                                                 timeout is detected. The interval can be computed as below:
                                                                 0x0 = clk*2^(14+2).
                                                                 0x1 = clk*2^(15+2).
                                                                 _ ...
                                                                 0xD = clk*2^(27+2).
                                                                 0xE = clk*2^(28+2).
                                                                 0xF = clk*2^(29+2).
                                                                 Where clk is the system clock period. */
        uint32_t reserved_5_31         : 27;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_emmcx_host_hrs_hrs42_s cn; */
};
typedef union cavm_emmcx_host_hrs_hrs42 cavm_emmcx_host_hrs_hrs42_t;

static inline uint64_t CAVM_EMMCX_HOST_HRS_HRS42(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_EMMCX_HOST_HRS_HRS42(uint64_t a)
{
    if (a==0)
        return 0x8240000000a8ll + 0x1000000ll * ((a) & 0x0);
    __cavm_csr_fatal("EMMCX_HOST_HRS_HRS42", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_EMMCX_HOST_HRS_HRS42(a) cavm_emmcx_host_hrs_hrs42_t
#define bustype_CAVM_EMMCX_HOST_HRS_HRS42(a) CSR_TYPE_NCB32b
#define basename_CAVM_EMMCX_HOST_HRS_HRS42(a) "EMMCX_HOST_HRS_HRS42"
#define device_bar_CAVM_EMMCX_HOST_HRS_HRS42(a) 0x0 /* PF_BAR0 */
#define busnum_CAVM_EMMCX_HOST_HRS_HRS42(a) (a)
#define arguments_CAVM_EMMCX_HOST_HRS_HRS42(a) (a),-1,-1,-1

/**
 * Register (NCB32b) emmc#_host_hrs_hrs43
 *
 * EMMC Host Error Status for Auto-configuration Descriptor Mechanism Register
 */
union cavm_emmcx_host_hrs_hrs43
{
    uint32_t u;
    struct cavm_emmcx_host_hrs_hrs43_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t reserved_4_31         : 28;
        uint32_t error_val             : 3;  /**< [  3:  1](RO) auto-configuration descriptor mechanism error type
                                                                 0x0 = first descriptor other than LINK.
                                                                 0x1 = invalid descriptor (VAL field = 0).
                                                                 0x2 = DMA error.
                                                                 0x3 = timeout. (descriptor fetching failed or register update failed)
                                                                 0x4 = wrong mask set for read command (mask[9:5] value is less than mask[4:0]).
                                                                 0x5 = descriptor with command other than READ_BLOCK read after descriptor with command
                                                                       READ_NONBLOCK. */
        uint32_t error_st              : 1;  /**< [  0:  0](RO) Error occurred during auto-configuration descriptor mechanism performance. */
#else /* Word 0 - Little Endian */
        uint32_t error_st              : 1;  /**< [  0:  0](RO) Error occurred during auto-configuration descriptor mechanism performance. */
        uint32_t error_val             : 3;  /**< [  3:  1](RO) auto-configuration descriptor mechanism error type
                                                                 0x0 = first descriptor other than LINK.
                                                                 0x1 = invalid descriptor (VAL field = 0).
                                                                 0x2 = DMA error.
                                                                 0x3 = timeout. (descriptor fetching failed or register update failed)
                                                                 0x4 = wrong mask set for read command (mask[9:5] value is less than mask[4:0]).
                                                                 0x5 = descriptor with command other than READ_BLOCK read after descriptor with command
                                                                       READ_NONBLOCK. */
        uint32_t reserved_4_31         : 28;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_emmcx_host_hrs_hrs43_s cn; */
};
typedef union cavm_emmcx_host_hrs_hrs43 cavm_emmcx_host_hrs_hrs43_t;

static inline uint64_t CAVM_EMMCX_HOST_HRS_HRS43(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_EMMCX_HOST_HRS_HRS43(uint64_t a)
{
    if (a==0)
        return 0x8240000000acll + 0x1000000ll * ((a) & 0x0);
    __cavm_csr_fatal("EMMCX_HOST_HRS_HRS43", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_EMMCX_HOST_HRS_HRS43(a) cavm_emmcx_host_hrs_hrs43_t
#define bustype_CAVM_EMMCX_HOST_HRS_HRS43(a) CSR_TYPE_NCB32b
#define basename_CAVM_EMMCX_HOST_HRS_HRS43(a) "EMMCX_HOST_HRS_HRS43"
#define device_bar_CAVM_EMMCX_HOST_HRS_HRS43(a) 0x0 /* PF_BAR0 */
#define busnum_CAVM_EMMCX_HOST_HRS_HRS43(a) (a)
#define arguments_CAVM_EMMCX_HOST_HRS_HRS43(a) (a),-1,-1,-1

/**
 * Register (NCB32b) emmc#_host_srs_srs00
 *
 * EMMC Host SDMA System Address/Argument 2/32-bit Block Count Register
 */
union cavm_emmcx_host_srs_srs00
{
    uint32_t u;
    struct cavm_emmcx_host_srs_srs00_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t saar                  : 32; /**< [ 31:  0](R/W) System Address/Argument 2/32-bit block count.
                                                                 This field is used as: 32-bit Block Count register/SDMA system memory address/Auto CMD23 Argument
                                                                 32-bit block count: This field enables to define number of data blocks for the next transfer. It is
                                                                 used when Host Controller is set in version 4 compatibility mode (EMMC_HOST_SRS_SRS15[HV4E]=1),
                                                                 Block Count Enable is enabled (EMMC_HOST_SRS_SRS03[BCE]=1) and 16-bit Block Count for Current
                                                                 Transfer is cleared (EMMC_HOST_SRS_SRS01[BCCT]=0). Value of this field is decremented after each
                                                                 block transfer. When this field is set 0, no data blocks is transferred. Software should not read
                                                                 this field during data transfer as return unexpected value. Write to this field during data
                                                                 transfer are ignored. When Host Controller is not set in version 4 compatibility mode
                                                                 (EMMC_HOST_SRS_SRS15[HV4E]=0) or 16-bit Block Count for Current Transfer is not equal to 0,
                                                                 (EMMC_HOST_SRS_SRS01[BCCT]) defines the block count.
                                                                 0x0 = no block transfer
                                                                 0x0000001 ..0xFFFFFFFF = 1 .. 4294967295 block(s) transfer.
                                                                 System Address: This register is used as base address when SDMA engine is selected
                                                                 (EMMC_HOST_SRS_SRS03[DMAE]=1 and EMMC_HOST_SRS_SRS10[DMASEL]=0) and EMMC_HOST_SRS_SRS15[HV4E]=0.
                                                                 When SDMA stops at SDMA Buffer Boundary, software updates System Address and write to SAAR[31:24]
                                                                 resumes SDMA transfer. Software driver sets address to the next data location in system memory.
                                                                 Auto CMD23 Argument: Auto CMD23 can be used in non-DMA or ADMA2 mode (when
                                                                 EMMC_HOST_SRS_SRS15[HV4E]=0) or in non-DMA, SDMA, ADMA2 mode (when EMMC_HOST_SRS_SRS15[HV4E]=1). */
#else /* Word 0 - Little Endian */
        uint32_t saar                  : 32; /**< [ 31:  0](R/W) System Address/Argument 2/32-bit block count.
                                                                 This field is used as: 32-bit Block Count register/SDMA system memory address/Auto CMD23 Argument
                                                                 32-bit block count: This field enables to define number of data blocks for the next transfer. It is
                                                                 used when Host Controller is set in version 4 compatibility mode (EMMC_HOST_SRS_SRS15[HV4E]=1),
                                                                 Block Count Enable is enabled (EMMC_HOST_SRS_SRS03[BCE]=1) and 16-bit Block Count for Current
                                                                 Transfer is cleared (EMMC_HOST_SRS_SRS01[BCCT]=0). Value of this field is decremented after each
                                                                 block transfer. When this field is set 0, no data blocks is transferred. Software should not read
                                                                 this field during data transfer as return unexpected value. Write to this field during data
                                                                 transfer are ignored. When Host Controller is not set in version 4 compatibility mode
                                                                 (EMMC_HOST_SRS_SRS15[HV4E]=0) or 16-bit Block Count for Current Transfer is not equal to 0,
                                                                 (EMMC_HOST_SRS_SRS01[BCCT]) defines the block count.
                                                                 0x0 = no block transfer
                                                                 0x0000001 ..0xFFFFFFFF = 1 .. 4294967295 block(s) transfer.
                                                                 System Address: This register is used as base address when SDMA engine is selected
                                                                 (EMMC_HOST_SRS_SRS03[DMAE]=1 and EMMC_HOST_SRS_SRS10[DMASEL]=0) and EMMC_HOST_SRS_SRS15[HV4E]=0.
                                                                 When SDMA stops at SDMA Buffer Boundary, software updates System Address and write to SAAR[31:24]
                                                                 resumes SDMA transfer. Software driver sets address to the next data location in system memory.
                                                                 Auto CMD23 Argument: Auto CMD23 can be used in non-DMA or ADMA2 mode (when
                                                                 EMMC_HOST_SRS_SRS15[HV4E]=0) or in non-DMA, SDMA, ADMA2 mode (when EMMC_HOST_SRS_SRS15[HV4E]=1). */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_emmcx_host_srs_srs00_s cn; */
};
typedef union cavm_emmcx_host_srs_srs00 cavm_emmcx_host_srs_srs00_t;

static inline uint64_t CAVM_EMMCX_HOST_SRS_SRS00(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_EMMCX_HOST_SRS_SRS00(uint64_t a)
{
    if (a==0)
        return 0x824000000200ll + 0x1000000ll * ((a) & 0x0);
    __cavm_csr_fatal("EMMCX_HOST_SRS_SRS00", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_EMMCX_HOST_SRS_SRS00(a) cavm_emmcx_host_srs_srs00_t
#define bustype_CAVM_EMMCX_HOST_SRS_SRS00(a) CSR_TYPE_NCB32b
#define basename_CAVM_EMMCX_HOST_SRS_SRS00(a) "EMMCX_HOST_SRS_SRS00"
#define device_bar_CAVM_EMMCX_HOST_SRS_SRS00(a) 0x0 /* PF_BAR0 */
#define busnum_CAVM_EMMCX_HOST_SRS_SRS00(a) (a)
#define arguments_CAVM_EMMCX_HOST_SRS_SRS00(a) (a),-1,-1,-1

/**
 * Register (NCB32b) emmc#_host_srs_srs01
 *
 * EMMC Host Block Size / Block Count Register
 */
union cavm_emmcx_host_srs_srs01
{
    uint32_t u;
    struct cavm_emmcx_host_srs_srs01_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t bcct                  : 16; /**< [ 31: 16](R/W) Block Count For Current Transfer. With this field, the number of data blocks can be defined for
                                                                 next transfer. This register is used when EMMC_HOST_SRS_SRS03[BCE] is set 1, and
                                                                 EMMC_HOST_SRS_SRS15[HV4E] is set to 0 or EMMC_HOST_SRS_SRS15[H4VE] is set to 1 and this field is
                                                                 different than 0, otherwise it will be ignored. When EMMC_HOST_SRS_SRS15[HV4E]==1 and this
                                                                 field == 0. 32-bit block count register is selected (EMMC_HOST_SRS_SRS00[SAAR]). The value is
                                                                 decremented after each block transfer. When this field is set 0, no data blocks will be transferred
                                                                 . During data transfer read operation may return invalid value, and write operations are ignored.
                                                                 0x0 = no block transfer
                                                                 0x1 .. 0xFFFF = 1 .. 65535 block(s) transfer. */
        uint32_t reserved_15           : 1;
        uint32_t sdmabb                : 3;  /**< [ 14: 12](R/W) SDMA Buffer Boundary. In this field, the system address boundary can be set for SDMA engine.
                                                                 The SDMA transfer stops crossing the address boundary and generates the DMA Interrupt
                                                                 (EMMC_HOST_SRS_SRS12[DMAINT]). After the DMA Interrupt, when the EMMC_HOST_SRS_SRS15[HV4E] is 0,
                                                                 the software should write new SDMA System Address (EMMC_HOST_SRS_SRS00[SAAR]/
                                                                 EMMC_HOST_SRS_SRS22[DMASA1]) in order to resume the SDMA transaction.
                                                                 0x0 = 4k bytes address boundary.
                                                                 0x1 = 8k bytes address boundary.
                                                                 0x2 = 16k bytes address boundary.
                                                                 0x3 = 32k bytes address boundary.
                                                                 0x4 = 64k bytes address boundary.
                                                                 0x5 = 128k bytes address boundary.
                                                                 0x6 = 256k bytes address boundary.
                                                                 0x7 = 512k bytes address boundary. */
        uint32_t tbs                   : 12; /**< [ 11:  0](R/W) Transfer Block Size. This field defines block size for block data transfers. During data transfer,
                                                                 read operations may return an invalid value, and write operations are ignored. The software will
                                                                 not set value that exceeds the physically implemented internal FIFO buffer size. The buffer size
                                                                 is equal to 2^FIFODEPTH, where FIFODEPTH is the generic parameter of the core. The SD/MMC (memory)
                                                                 uses block size up to 512 bytes. The SDIO can use up to 2048 bytes.
                                                                 0x000 = not used.
                                                                 0x001 = 1 data byte.
                                                                 0x002 = 2 data bytes.
                                                                 0x003 = 3 data bytes.
                                                                 _ ...
                                                                 0x1FF = 511 data bytes.
                                                                 0x200 = 512 data bytes.
                                                                 _ ...
                                                                 0x800 = 2048 data bytes.
                                                                 others = not used.
                                                                 Note: It is recommended for the software to use native data block size (512B) in case of multiple
                                                                 data block transfer (EMMC_HOST_SRS_SRS03[MSBS]==1). Using smaller block may cause unexpected
                                                                 response error when flow control is activated (i.e. SDCLK is disabled) during response transfer. */
#else /* Word 0 - Little Endian */
        uint32_t tbs                   : 12; /**< [ 11:  0](R/W) Transfer Block Size. This field defines block size for block data transfers. During data transfer,
                                                                 read operations may return an invalid value, and write operations are ignored. The software will
                                                                 not set value that exceeds the physically implemented internal FIFO buffer size. The buffer size
                                                                 is equal to 2^FIFODEPTH, where FIFODEPTH is the generic parameter of the core. The SD/MMC (memory)
                                                                 uses block size up to 512 bytes. The SDIO can use up to 2048 bytes.
                                                                 0x000 = not used.
                                                                 0x001 = 1 data byte.
                                                                 0x002 = 2 data bytes.
                                                                 0x003 = 3 data bytes.
                                                                 _ ...
                                                                 0x1FF = 511 data bytes.
                                                                 0x200 = 512 data bytes.
                                                                 _ ...
                                                                 0x800 = 2048 data bytes.
                                                                 others = not used.
                                                                 Note: It is recommended for the software to use native data block size (512B) in case of multiple
                                                                 data block transfer (EMMC_HOST_SRS_SRS03[MSBS]==1). Using smaller block may cause unexpected
                                                                 response error when flow control is activated (i.e. SDCLK is disabled) during response transfer. */
        uint32_t sdmabb                : 3;  /**< [ 14: 12](R/W) SDMA Buffer Boundary. In this field, the system address boundary can be set for SDMA engine.
                                                                 The SDMA transfer stops crossing the address boundary and generates the DMA Interrupt
                                                                 (EMMC_HOST_SRS_SRS12[DMAINT]). After the DMA Interrupt, when the EMMC_HOST_SRS_SRS15[HV4E] is 0,
                                                                 the software should write new SDMA System Address (EMMC_HOST_SRS_SRS00[SAAR]/
                                                                 EMMC_HOST_SRS_SRS22[DMASA1]) in order to resume the SDMA transaction.
                                                                 0x0 = 4k bytes address boundary.
                                                                 0x1 = 8k bytes address boundary.
                                                                 0x2 = 16k bytes address boundary.
                                                                 0x3 = 32k bytes address boundary.
                                                                 0x4 = 64k bytes address boundary.
                                                                 0x5 = 128k bytes address boundary.
                                                                 0x6 = 256k bytes address boundary.
                                                                 0x7 = 512k bytes address boundary. */
        uint32_t reserved_15           : 1;
        uint32_t bcct                  : 16; /**< [ 31: 16](R/W) Block Count For Current Transfer. With this field, the number of data blocks can be defined for
                                                                 next transfer. This register is used when EMMC_HOST_SRS_SRS03[BCE] is set 1, and
                                                                 EMMC_HOST_SRS_SRS15[HV4E] is set to 0 or EMMC_HOST_SRS_SRS15[H4VE] is set to 1 and this field is
                                                                 different than 0, otherwise it will be ignored. When EMMC_HOST_SRS_SRS15[HV4E]==1 and this
                                                                 field == 0. 32-bit block count register is selected (EMMC_HOST_SRS_SRS00[SAAR]). The value is
                                                                 decremented after each block transfer. When this field is set 0, no data blocks will be transferred
                                                                 . During data transfer read operation may return invalid value, and write operations are ignored.
                                                                 0x0 = no block transfer
                                                                 0x1 .. 0xFFFF = 1 .. 65535 block(s) transfer. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_emmcx_host_srs_srs01_s cn; */
};
typedef union cavm_emmcx_host_srs_srs01 cavm_emmcx_host_srs_srs01_t;

static inline uint64_t CAVM_EMMCX_HOST_SRS_SRS01(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_EMMCX_HOST_SRS_SRS01(uint64_t a)
{
    if (a==0)
        return 0x824000000204ll + 0x1000000ll * ((a) & 0x0);
    __cavm_csr_fatal("EMMCX_HOST_SRS_SRS01", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_EMMCX_HOST_SRS_SRS01(a) cavm_emmcx_host_srs_srs01_t
#define bustype_CAVM_EMMCX_HOST_SRS_SRS01(a) CSR_TYPE_NCB32b
#define basename_CAVM_EMMCX_HOST_SRS_SRS01(a) "EMMCX_HOST_SRS_SRS01"
#define device_bar_CAVM_EMMCX_HOST_SRS_SRS01(a) 0x0 /* PF_BAR0 */
#define busnum_CAVM_EMMCX_HOST_SRS_SRS01(a) (a)
#define arguments_CAVM_EMMCX_HOST_SRS_SRS01(a) (a),-1,-1,-1

/**
 * Register (NCB32b) emmc#_host_srs_srs02
 *
 * EMMC Host Argument 1 Register
 */
union cavm_emmcx_host_srs_srs02
{
    uint32_t u;
    struct cavm_emmcx_host_srs_srs02_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t arg1                  : 32; /**< [ 31:  0](R/W) Command Argument 1. This field contains 32-bits argument for command issued by
                                                                 EMMC_HOST_SRS_SRS03[CIDX] file write. */
#else /* Word 0 - Little Endian */
        uint32_t arg1                  : 32; /**< [ 31:  0](R/W) Command Argument 1. This field contains 32-bits argument for command issued by
                                                                 EMMC_HOST_SRS_SRS03[CIDX] file write. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_emmcx_host_srs_srs02_s cn; */
};
typedef union cavm_emmcx_host_srs_srs02 cavm_emmcx_host_srs_srs02_t;

static inline uint64_t CAVM_EMMCX_HOST_SRS_SRS02(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_EMMCX_HOST_SRS_SRS02(uint64_t a)
{
    if (a==0)
        return 0x824000000208ll + 0x1000000ll * ((a) & 0x0);
    __cavm_csr_fatal("EMMCX_HOST_SRS_SRS02", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_EMMCX_HOST_SRS_SRS02(a) cavm_emmcx_host_srs_srs02_t
#define bustype_CAVM_EMMCX_HOST_SRS_SRS02(a) CSR_TYPE_NCB32b
#define basename_CAVM_EMMCX_HOST_SRS_SRS02(a) "EMMCX_HOST_SRS_SRS02"
#define device_bar_CAVM_EMMCX_HOST_SRS_SRS02(a) 0x0 /* PF_BAR0 */
#define busnum_CAVM_EMMCX_HOST_SRS_SRS02(a) (a)
#define arguments_CAVM_EMMCX_HOST_SRS_SRS02(a) (a),-1,-1,-1

/**
 * Register (NCB32b) emmc#_host_srs_srs03
 *
 * EMMC Host Command/Transfer Mode Register
 */
union cavm_emmcx_host_srs_srs03
{
    uint32_t u;
    struct cavm_emmcx_host_srs_srs03_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t reserved_30_31        : 2;
        uint32_t cidx                  : 6;  /**< [ 29: 24](R/W) Command Index. This field contains a command number (index) of the command to be sent. The index
                                                                 can be defined in range 00-63, which means all commands (CMD00-CMD63 and ACMD00-ACMD63) defined
                                                                 in related specifications are supported.Writing this filed triggers the actual command transfer.
                                                                 This field is to be written only when Command Inhibit CMD bit is 0 in Present State Register
                                                                 (EMMC_HOST_SRS_SRS09[CICMD]). To check the list of available commands, refer to the appropriate
                                                                 card/device specifications. */
        uint32_t ct                    : 2;  /**< [ 23: 22](R/W) Command Type. This field defines specific type of command.
                                                                 0x0 = Normal Command - used by default when other command types are not intended to be used.
                                                                 0x1 = Suspend Command - not used.
                                                                 0x2 = Resume Command - not used.
                                                                 0x3 = Abort Command - used when the software wants to stop the current data transfer (read or
                                                                 write data transfer). The read transfer ends by stopping transfer to the internal buffer. The
                                                                 write transfer ends with releasing DAT line to High-Z state. Then, after sending an Abort Command,
                                                                 the software will issue the software reset. The Suspend and Resume Mechanism is not supported by
                                                                 the SD Host version 4.00 and later, and the Suspend and Resume Commands will not be used. */
        uint32_t dps                   : 1;  /**< [ 21: 21](R/W) Data Present Select.
                                                                 1 = for commands which transfer data (i.e. read or write data using DAT line).
                                                                 0 = for all other commands, including:
                                                                 Commands using only CMD line Commands with busy signalized on DAT[0] line
                                                                 (EMMC_HOST_SRS_SRS03[RTS]=11b) */
        uint32_t cice                  : 1;  /**< [ 20: 20](R/W) Command Index Check Enable.
                                                                 1 = the host checks if the Command Index field in the response is equal to the
                                                                 EMMC_HOST_SRS_SRS03[CIDX] value.
                                                                 0 = the check is not performed and Command Index field of the response is ignored.
                                                                 Recommended settings depends on response type, see following table for details:
                                                                 EMMC_HOST_SRS_SRS03[RTS]=00: 0 - No Response
                                                                 EMMC_HOST_SRS_SRS03[RTS]=01: 0 - R2
                                                                 EMMC_HOST_SRS_SRS03[RTS]=10: 0 - R3, R4
                                                                 EMMC_HOST_SRS_SRS03[RTS]=10: 1 - R1, R5, R6, R7
                                                                 EMMC_HOST_SRS_SRS03[RTS]=11: 1 - R1b, R5b */
        uint32_t crcce                 : 1;  /**< [ 19: 19](R/W) Command CRC Check Enable.
                                                                 1 = the host checks if the CRC field of the response is valid.
                                                                 0 = the CRC check is disabled and the CRC field of the response is ignored. The CRC check should
                                                                 be disabled for responses which do not contain an actual CRC value (some responses contain all 1s
                                                                 in place of the CRC field), and enabled for all other kinds of responses. Recommended settings
                                                                 depends on response type, see following table for details:
                                                                 EMMC_HOST_SRS_SRS03[RTS]=00: 0 - No Response.
                                                                 EMMC_HOST_SRS_SRS03[RTS]=01: 1 - R2.
                                                                 EMMC_HOST_SRS_SRS03[RTS]=10: 0 - R3, R4.
                                                                 EMMC_HOST_SRS_SRS03[RTS]=10: 1 - R1, R5, R6, R7.
                                                                 EMMC_HOST_SRS_SRS03[RTS]=11: 1 - R1b, R5b. */
        uint32_t scf                   : 1;  /**< [ 18: 18](R/W) Sub Command Flag.
                                                                 This bit is added from Version 4.10 to distinguish a main command or sub command. When issuing a
                                                                 main command, this bit is set to 0 and when issuing a sub command, this bit is set to 1. Setting of
                                                                 this bit is checked by SubCommand Status in Present State register EMMC_HOST_SRS_SRS09[SCMDS]. Host
                                                                 Driver manages whether main or sub command. Host Controller does not refer to this bit to issue
                                                                 the command. */
        uint32_t rts                   : 2;  /**< [ 17: 16](R/W) Response Type Select. Defines the expected response length.
                                                                 0x0 = no response.
                                                                 0x1 = 136-bit response.
                                                                 0x2 = 48-bit response.
                                                                 0x3 = 48-bit response with BUSY.
                                                                 Every command implies one of the response types listed above. To check the response type
                                                                 corresponding to a given command, please refer to the appropriate card/device specifications. */
        uint32_t reserved_9_15         : 7;
        uint32_t rid                   : 1;  /**< [  8:  8](R/W) Response Interrupt Disable.
                                                                 1 = the Command Complete Interrupt (EMMC_HOST_SRS_SRS12[CC]) will be disabled. The host will
                                                                 ignore the EMMC_HOST_SRS_SRS13[CC_SE] and behave as the EMMC_HOST_SRS_SRS13[CC_SE] would be 0.
                                                                 0 = the EMMC_HOST_SRS_SRS12[CC] will be enabled or disabled depend on the
                                                                 EMMC_HOST_SRS_SRS13[CC_SE] bit only. */
        uint32_t rece                  : 1;  /**< [  7:  7](R/W) Response Error Check Enable.
                                                                 1 =  the host will look after R1/R5 responses. If any error will be detected in the response,
                                                                 the EMMC_HOST_SRS_SRS12[ERSP] bit is set to 1. The software will set this bit only when R1/R5
                                                                 response is expected. The software will set EMMC_HOST_SRS_SRS03[RID] and RECE bits to 1 when the
                                                                 host checks R1/R5 errors. And both bits will be clear to 0, when the Software Driver will checks
                                                                 R1/R5 errors. On response error, the EMMC_HOST_SRS_SRS12[ERSP] bit (in Interrupt Status) is set 1. */
        uint32_t rect                  : 1;  /**< [  6:  6](R/W) Response Type R1/R5.
                                                                 Select R1 or R5 response type for the response content checker. Listed below error bits will be
                                                                 evaluated.
                                                                 0 = Response Type - R1 (SD Memory):
                                                                     bit 31 OUT_OF_RANGE.
                                                                     bit 30 ADDRESS_ERROR.
                                                                     bit 29 BLOCK_LEN_ERROR.
                                                                     bit 26 WP_VIOLATION.
                                                                     bit 25 CARD_IS_LOCKED.
                                                                     bit 23 COM_CRC_ERROR.
                                                                     bit 21 CARD_ECC_FAILED.
                                                                     bit 20 CC_ERROR.
                                                                     bit 19 ERRORRECT.
                                                                 1 = Response Type - R5 (SDIO):
                                                                     bit 7 COM_CRC_ERROR.
                                                                     bit 3 ERROR.
                                                                     bit 1 FUNCTION_NUMBER.
                                                                     bit 0 OUT_OF_RANGE.
                                                                 This field is ignored when EMMC_HOST_SRS_SRS03[RECE]=0. */
        uint32_t msbs                  : 1;  /**< [  5:  5](R/W) Multi/Single Block Select.
                                                                 Multi-block or single-block data transfer can be selected with this field.
                                                                 0 = Single-block.
                                                                 1 = Multi-block.
                                                                 This field is hardware-protected by Command Inhibit DAT bit in Present State Register
                                                                 (EMMC_HOST_SRS_SRS09[CIDAT]). When CIDAT=1, all writes to this field are ignored. */
        uint32_t dtds                  : 1;  /**< [  4:  4](R/W) Data Transfer Direction Select. Selects direction of data transfer for commands with DPS=1.
                                                                 0 = Write.
                                                                 1 = Read.
                                                                 For commands with EMMC_HOST_SRS_SRS03[DPS]=0, this field is ignored. This field is hardware-
                                                                 protected by Command inhibit DAT bit in Present State Register (EMMC_HOST_SRS_SRS09[CIDAT]). When
                                                                 CIDAT=1, all writes to this field are ignored. */
        uint32_t ace                   : 2;  /**< [  3:  2](R/W) Auto CMD Enable. The field allows to send one additional command to the card/device when the
                                                                 command is issued.
                                                                 0x0 = No auto command.
                                                                 0x1 = Auto CMD12.
                                                                 0x2 = Auto CMD23.
                                                                 0x3 = Auto CMD Auto Select.
                                                                 If Auto CMD disable (00b) is set, the host does not send any additional command. This setting
                                                                 will be used when auto command is not required or not intended.
                                                                 If Auto CMD12 (01b) is set, the host sends CMD12 (Abort) automatically when last block of
                                                                 multi-block transfer is completed.
                                                                 If Auto CMD23 (10b) is set, the host sends CMD23 (Set Block Count) automatically before issued
                                                                 transfer data command. An argument of this command can be set in EMMC_HOST_SRS_SRS00.
                                                                 If Auto CMD Auto Select (11b) is set, the host sends CMD12 or CMD23 according to result of
                                                                 identification process of card.
                                                                 If EMMC_HOST_SRS_SRS15[CMD23E] == 1 the host sends CMD23 as when as Auto CMD23 is set.
                                                                 If EMMC_HOST_SRS_SRS15[CMD23E] == 0 the host sends CMD12 as when as Auto CMD12 is set.
                                                                 On any error the issued command will not be sent. This field is hardware-protected by Command
                                                                 Inhibit DAT bit in Present State Register (EMMC_HOST_SRS_SRS09[CIDAT]). When
                                                                 EMMC_HOST_SRS_SRS09[CIDAT]=1, all writes to this field are ignored. */
        uint32_t bce                   : 1;  /**< [  1:  1](R/W) Block Count Enable.
                                                                 1 = active block count register is enabled for the next data transfer. The active register is
                                                                 either EMMC_HOST_SRS_SRS01[BCCT] or EMMC_HOST_SRS_SRS00[SAAR]. Transfer of each block
                                                                 automatically decrements the counter value. The multi-block transfer ends when the counter reaches
                                                                 0. So the finite transfer can not be performed with this setting.
                                                                 0 = block counting is disabled, and EMMC_HOST_SRS_SRS01[BCCT] retains its value. The transfer will
                                                                 be infinite in non-DMA and SDMA modes. For ADMA mode the transfer can be infinite or finite.
                                                                 The finite transfer ends on reading the descriptor with END status (so the transfer length is
                                                                 designated by the table of descriptors). In case of infinite transfer, the software will
                                                                 explicitly set ABORT command type to stop transfer. This field is hardware-protected by Command
                                                                 Inhibit DAT bit in Present State Register (EMMC_HOST_SRS_SRS09[CIDAT]). When CIDAT=1, all writes
                                                                 to this field are ignored. */
        uint32_t dmae                  : 1;  /**< [  0:  0](R/W) DMA Enable.
                                                                 1 = it enables DMA functionality. DMA can be enabled only if it is supported as indicated in
                                                                 the DMA Support in the EMMC_HOST_SRS_SRS16[DMAS] register. If DMA is not supported (due to host
                                                                 configuration), this bit is ignored. This field is hardware-protected by Command Inhibit DAT bit
                                                                 in Present State Register (EMMC_HOST_SRS_SRS09[CIDAT]). When EMMC_HOST_SRS_SRS09[CIDAT]=1, all
                                                                 writes to this field are ignored.
                                                                 Note: The ADMA2 mode uses only the finite transfer mode, i.e. this bit is to be set 1. */
#else /* Word 0 - Little Endian */
        uint32_t dmae                  : 1;  /**< [  0:  0](R/W) DMA Enable.
                                                                 1 = it enables DMA functionality. DMA can be enabled only if it is supported as indicated in
                                                                 the DMA Support in the EMMC_HOST_SRS_SRS16[DMAS] register. If DMA is not supported (due to host
                                                                 configuration), this bit is ignored. This field is hardware-protected by Command Inhibit DAT bit
                                                                 in Present State Register (EMMC_HOST_SRS_SRS09[CIDAT]). When EMMC_HOST_SRS_SRS09[CIDAT]=1, all
                                                                 writes to this field are ignored.
                                                                 Note: The ADMA2 mode uses only the finite transfer mode, i.e. this bit is to be set 1. */
        uint32_t bce                   : 1;  /**< [  1:  1](R/W) Block Count Enable.
                                                                 1 = active block count register is enabled for the next data transfer. The active register is
                                                                 either EMMC_HOST_SRS_SRS01[BCCT] or EMMC_HOST_SRS_SRS00[SAAR]. Transfer of each block
                                                                 automatically decrements the counter value. The multi-block transfer ends when the counter reaches
                                                                 0. So the finite transfer can not be performed with this setting.
                                                                 0 = block counting is disabled, and EMMC_HOST_SRS_SRS01[BCCT] retains its value. The transfer will
                                                                 be infinite in non-DMA and SDMA modes. For ADMA mode the transfer can be infinite or finite.
                                                                 The finite transfer ends on reading the descriptor with END status (so the transfer length is
                                                                 designated by the table of descriptors). In case of infinite transfer, the software will
                                                                 explicitly set ABORT command type to stop transfer. This field is hardware-protected by Command
                                                                 Inhibit DAT bit in Present State Register (EMMC_HOST_SRS_SRS09[CIDAT]). When CIDAT=1, all writes
                                                                 to this field are ignored. */
        uint32_t ace                   : 2;  /**< [  3:  2](R/W) Auto CMD Enable. The field allows to send one additional command to the card/device when the
                                                                 command is issued.
                                                                 0x0 = No auto command.
                                                                 0x1 = Auto CMD12.
                                                                 0x2 = Auto CMD23.
                                                                 0x3 = Auto CMD Auto Select.
                                                                 If Auto CMD disable (00b) is set, the host does not send any additional command. This setting
                                                                 will be used when auto command is not required or not intended.
                                                                 If Auto CMD12 (01b) is set, the host sends CMD12 (Abort) automatically when last block of
                                                                 multi-block transfer is completed.
                                                                 If Auto CMD23 (10b) is set, the host sends CMD23 (Set Block Count) automatically before issued
                                                                 transfer data command. An argument of this command can be set in EMMC_HOST_SRS_SRS00.
                                                                 If Auto CMD Auto Select (11b) is set, the host sends CMD12 or CMD23 according to result of
                                                                 identification process of card.
                                                                 If EMMC_HOST_SRS_SRS15[CMD23E] == 1 the host sends CMD23 as when as Auto CMD23 is set.
                                                                 If EMMC_HOST_SRS_SRS15[CMD23E] == 0 the host sends CMD12 as when as Auto CMD12 is set.
                                                                 On any error the issued command will not be sent. This field is hardware-protected by Command
                                                                 Inhibit DAT bit in Present State Register (EMMC_HOST_SRS_SRS09[CIDAT]). When
                                                                 EMMC_HOST_SRS_SRS09[CIDAT]=1, all writes to this field are ignored. */
        uint32_t dtds                  : 1;  /**< [  4:  4](R/W) Data Transfer Direction Select. Selects direction of data transfer for commands with DPS=1.
                                                                 0 = Write.
                                                                 1 = Read.
                                                                 For commands with EMMC_HOST_SRS_SRS03[DPS]=0, this field is ignored. This field is hardware-
                                                                 protected by Command inhibit DAT bit in Present State Register (EMMC_HOST_SRS_SRS09[CIDAT]). When
                                                                 CIDAT=1, all writes to this field are ignored. */
        uint32_t msbs                  : 1;  /**< [  5:  5](R/W) Multi/Single Block Select.
                                                                 Multi-block or single-block data transfer can be selected with this field.
                                                                 0 = Single-block.
                                                                 1 = Multi-block.
                                                                 This field is hardware-protected by Command Inhibit DAT bit in Present State Register
                                                                 (EMMC_HOST_SRS_SRS09[CIDAT]). When CIDAT=1, all writes to this field are ignored. */
        uint32_t rect                  : 1;  /**< [  6:  6](R/W) Response Type R1/R5.
                                                                 Select R1 or R5 response type for the response content checker. Listed below error bits will be
                                                                 evaluated.
                                                                 0 = Response Type - R1 (SD Memory):
                                                                     bit 31 OUT_OF_RANGE.
                                                                     bit 30 ADDRESS_ERROR.
                                                                     bit 29 BLOCK_LEN_ERROR.
                                                                     bit 26 WP_VIOLATION.
                                                                     bit 25 CARD_IS_LOCKED.
                                                                     bit 23 COM_CRC_ERROR.
                                                                     bit 21 CARD_ECC_FAILED.
                                                                     bit 20 CC_ERROR.
                                                                     bit 19 ERRORRECT.
                                                                 1 = Response Type - R5 (SDIO):
                                                                     bit 7 COM_CRC_ERROR.
                                                                     bit 3 ERROR.
                                                                     bit 1 FUNCTION_NUMBER.
                                                                     bit 0 OUT_OF_RANGE.
                                                                 This field is ignored when EMMC_HOST_SRS_SRS03[RECE]=0. */
        uint32_t rece                  : 1;  /**< [  7:  7](R/W) Response Error Check Enable.
                                                                 1 =  the host will look after R1/R5 responses. If any error will be detected in the response,
                                                                 the EMMC_HOST_SRS_SRS12[ERSP] bit is set to 1. The software will set this bit only when R1/R5
                                                                 response is expected. The software will set EMMC_HOST_SRS_SRS03[RID] and RECE bits to 1 when the
                                                                 host checks R1/R5 errors. And both bits will be clear to 0, when the Software Driver will checks
                                                                 R1/R5 errors. On response error, the EMMC_HOST_SRS_SRS12[ERSP] bit (in Interrupt Status) is set 1. */
        uint32_t rid                   : 1;  /**< [  8:  8](R/W) Response Interrupt Disable.
                                                                 1 = the Command Complete Interrupt (EMMC_HOST_SRS_SRS12[CC]) will be disabled. The host will
                                                                 ignore the EMMC_HOST_SRS_SRS13[CC_SE] and behave as the EMMC_HOST_SRS_SRS13[CC_SE] would be 0.
                                                                 0 = the EMMC_HOST_SRS_SRS12[CC] will be enabled or disabled depend on the
                                                                 EMMC_HOST_SRS_SRS13[CC_SE] bit only. */
        uint32_t reserved_9_15         : 7;
        uint32_t rts                   : 2;  /**< [ 17: 16](R/W) Response Type Select. Defines the expected response length.
                                                                 0x0 = no response.
                                                                 0x1 = 136-bit response.
                                                                 0x2 = 48-bit response.
                                                                 0x3 = 48-bit response with BUSY.
                                                                 Every command implies one of the response types listed above. To check the response type
                                                                 corresponding to a given command, please refer to the appropriate card/device specifications. */
        uint32_t scf                   : 1;  /**< [ 18: 18](R/W) Sub Command Flag.
                                                                 This bit is added from Version 4.10 to distinguish a main command or sub command. When issuing a
                                                                 main command, this bit is set to 0 and when issuing a sub command, this bit is set to 1. Setting of
                                                                 this bit is checked by SubCommand Status in Present State register EMMC_HOST_SRS_SRS09[SCMDS]. Host
                                                                 Driver manages whether main or sub command. Host Controller does not refer to this bit to issue
                                                                 the command. */
        uint32_t crcce                 : 1;  /**< [ 19: 19](R/W) Command CRC Check Enable.
                                                                 1 = the host checks if the CRC field of the response is valid.
                                                                 0 = the CRC check is disabled and the CRC field of the response is ignored. The CRC check should
                                                                 be disabled for responses which do not contain an actual CRC value (some responses contain all 1s
                                                                 in place of the CRC field), and enabled for all other kinds of responses. Recommended settings
                                                                 depends on response type, see following table for details:
                                                                 EMMC_HOST_SRS_SRS03[RTS]=00: 0 - No Response.
                                                                 EMMC_HOST_SRS_SRS03[RTS]=01: 1 - R2.
                                                                 EMMC_HOST_SRS_SRS03[RTS]=10: 0 - R3, R4.
                                                                 EMMC_HOST_SRS_SRS03[RTS]=10: 1 - R1, R5, R6, R7.
                                                                 EMMC_HOST_SRS_SRS03[RTS]=11: 1 - R1b, R5b. */
        uint32_t cice                  : 1;  /**< [ 20: 20](R/W) Command Index Check Enable.
                                                                 1 = the host checks if the Command Index field in the response is equal to the
                                                                 EMMC_HOST_SRS_SRS03[CIDX] value.
                                                                 0 = the check is not performed and Command Index field of the response is ignored.
                                                                 Recommended settings depends on response type, see following table for details:
                                                                 EMMC_HOST_SRS_SRS03[RTS]=00: 0 - No Response
                                                                 EMMC_HOST_SRS_SRS03[RTS]=01: 0 - R2
                                                                 EMMC_HOST_SRS_SRS03[RTS]=10: 0 - R3, R4
                                                                 EMMC_HOST_SRS_SRS03[RTS]=10: 1 - R1, R5, R6, R7
                                                                 EMMC_HOST_SRS_SRS03[RTS]=11: 1 - R1b, R5b */
        uint32_t dps                   : 1;  /**< [ 21: 21](R/W) Data Present Select.
                                                                 1 = for commands which transfer data (i.e. read or write data using DAT line).
                                                                 0 = for all other commands, including:
                                                                 Commands using only CMD line Commands with busy signalized on DAT[0] line
                                                                 (EMMC_HOST_SRS_SRS03[RTS]=11b) */
        uint32_t ct                    : 2;  /**< [ 23: 22](R/W) Command Type. This field defines specific type of command.
                                                                 0x0 = Normal Command - used by default when other command types are not intended to be used.
                                                                 0x1 = Suspend Command - not used.
                                                                 0x2 = Resume Command - not used.
                                                                 0x3 = Abort Command - used when the software wants to stop the current data transfer (read or
                                                                 write data transfer). The read transfer ends by stopping transfer to the internal buffer. The
                                                                 write transfer ends with releasing DAT line to High-Z state. Then, after sending an Abort Command,
                                                                 the software will issue the software reset. The Suspend and Resume Mechanism is not supported by
                                                                 the SD Host version 4.00 and later, and the Suspend and Resume Commands will not be used. */
        uint32_t cidx                  : 6;  /**< [ 29: 24](R/W) Command Index. This field contains a command number (index) of the command to be sent. The index
                                                                 can be defined in range 00-63, which means all commands (CMD00-CMD63 and ACMD00-ACMD63) defined
                                                                 in related specifications are supported.Writing this filed triggers the actual command transfer.
                                                                 This field is to be written only when Command Inhibit CMD bit is 0 in Present State Register
                                                                 (EMMC_HOST_SRS_SRS09[CICMD]). To check the list of available commands, refer to the appropriate
                                                                 card/device specifications. */
        uint32_t reserved_30_31        : 2;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_emmcx_host_srs_srs03_s cn; */
};
typedef union cavm_emmcx_host_srs_srs03 cavm_emmcx_host_srs_srs03_t;

static inline uint64_t CAVM_EMMCX_HOST_SRS_SRS03(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_EMMCX_HOST_SRS_SRS03(uint64_t a)
{
    if (a==0)
        return 0x82400000020cll + 0x1000000ll * ((a) & 0x0);
    __cavm_csr_fatal("EMMCX_HOST_SRS_SRS03", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_EMMCX_HOST_SRS_SRS03(a) cavm_emmcx_host_srs_srs03_t
#define bustype_CAVM_EMMCX_HOST_SRS_SRS03(a) CSR_TYPE_NCB32b
#define basename_CAVM_EMMCX_HOST_SRS_SRS03(a) "EMMCX_HOST_SRS_SRS03"
#define device_bar_CAVM_EMMCX_HOST_SRS_SRS03(a) 0x0 /* PF_BAR0 */
#define busnum_CAVM_EMMCX_HOST_SRS_SRS03(a) (a)
#define arguments_CAVM_EMMCX_HOST_SRS_SRS03(a) (a),-1,-1,-1

/**
 * Register (NCB32b) emmc#_host_srs_srs04
 *
 * EMMC Host EMMC_HOST_SRS_SRS04-EMMC_HOST_SRS_SRS07 Store Response Returned by the Card Register
 * The mapping of the actual device response and the EMMC_HOST_SRS_SRS04 -
 * EMMC_HOST_SRS_SRS07 contents
 * depends on the type of response. The type of response is determined by the RTS field
 * (Response Type)
 * for all user-defined commands. The separate cases are the Auto-CMD12 response (called R1b in the SD
 * Memory Specification) and Auto-CMD23 response (called R1 in the SD Memory
 * Specification). Auto-CMD12
 * and Auto-CMD23 responses are handled by the core automatically and goes to the EMMC_HOST_SRS_SRS07
 * register regardless of the RTS value. EMMC_HOST_SRS_SRS04-EMMC_HOST_SRS_SRS07 relation to received
 * response field:
 * Auto-CMD12 resp: Response field R[39:8] - RESP3[31:0]
 * Auto-CMD23 resp: Response field R[39:8] - RESP3[31:0]
 * No response: RTS=00b
 * 136-bit: RTS=01b, Response field R[127:8] - {RESP3[23:0], RESP2[31:0], RESP1[31:0], RESP0[31:0]}
 * 48-bit: RTS=10b, Response field R[39:8] - RESP0[31:0]
 * 48-bit with BUSY: RTS=11b, Response field R[39:8] - RESP0[31:0]
 * Implementation note: Registers value are undefined after reset, and will be valid after response is
 * received.
 */
union cavm_emmcx_host_srs_srs04
{
    uint32_t u;
    struct cavm_emmcx_host_srs_srs04_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t resp0                 : 32; /**< [ 31:  0](RO) RESP0 - Response Register #0 */
#else /* Word 0 - Little Endian */
        uint32_t resp0                 : 32; /**< [ 31:  0](RO) RESP0 - Response Register #0 */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_emmcx_host_srs_srs04_s cn; */
};
typedef union cavm_emmcx_host_srs_srs04 cavm_emmcx_host_srs_srs04_t;

static inline uint64_t CAVM_EMMCX_HOST_SRS_SRS04(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_EMMCX_HOST_SRS_SRS04(uint64_t a)
{
    if (a==0)
        return 0x824000000210ll + 0x1000000ll * ((a) & 0x0);
    __cavm_csr_fatal("EMMCX_HOST_SRS_SRS04", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_EMMCX_HOST_SRS_SRS04(a) cavm_emmcx_host_srs_srs04_t
#define bustype_CAVM_EMMCX_HOST_SRS_SRS04(a) CSR_TYPE_NCB32b
#define basename_CAVM_EMMCX_HOST_SRS_SRS04(a) "EMMCX_HOST_SRS_SRS04"
#define device_bar_CAVM_EMMCX_HOST_SRS_SRS04(a) 0x0 /* PF_BAR0 */
#define busnum_CAVM_EMMCX_HOST_SRS_SRS04(a) (a)
#define arguments_CAVM_EMMCX_HOST_SRS_SRS04(a) (a),-1,-1,-1

/**
 * Register (NCB32b) emmc#_host_srs_srs05
 *
 * EMMC Host Described in EMMC_HOST_SRS_SRS04 Register
 */
union cavm_emmcx_host_srs_srs05
{
    uint32_t u;
    struct cavm_emmcx_host_srs_srs05_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t resp1                 : 32; /**< [ 31:  0](RO) RESP1 - Response Register #1 */
#else /* Word 0 - Little Endian */
        uint32_t resp1                 : 32; /**< [ 31:  0](RO) RESP1 - Response Register #1 */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_emmcx_host_srs_srs05_s cn; */
};
typedef union cavm_emmcx_host_srs_srs05 cavm_emmcx_host_srs_srs05_t;

static inline uint64_t CAVM_EMMCX_HOST_SRS_SRS05(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_EMMCX_HOST_SRS_SRS05(uint64_t a)
{
    if (a==0)
        return 0x824000000214ll + 0x1000000ll * ((a) & 0x0);
    __cavm_csr_fatal("EMMCX_HOST_SRS_SRS05", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_EMMCX_HOST_SRS_SRS05(a) cavm_emmcx_host_srs_srs05_t
#define bustype_CAVM_EMMCX_HOST_SRS_SRS05(a) CSR_TYPE_NCB32b
#define basename_CAVM_EMMCX_HOST_SRS_SRS05(a) "EMMCX_HOST_SRS_SRS05"
#define device_bar_CAVM_EMMCX_HOST_SRS_SRS05(a) 0x0 /* PF_BAR0 */
#define busnum_CAVM_EMMCX_HOST_SRS_SRS05(a) (a)
#define arguments_CAVM_EMMCX_HOST_SRS_SRS05(a) (a),-1,-1,-1

/**
 * Register (NCB32b) emmc#_host_srs_srs06
 *
 * EMMC Host Described in EMMC_HOST_SRS_SRS04 Register
 * Described in EMMC_HOST_SRS_SRS04.
 */
union cavm_emmcx_host_srs_srs06
{
    uint32_t u;
    struct cavm_emmcx_host_srs_srs06_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t resp2                 : 32; /**< [ 31:  0](RO) RESP2 - Response Register #2 */
#else /* Word 0 - Little Endian */
        uint32_t resp2                 : 32; /**< [ 31:  0](RO) RESP2 - Response Register #2 */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_emmcx_host_srs_srs06_s cn; */
};
typedef union cavm_emmcx_host_srs_srs06 cavm_emmcx_host_srs_srs06_t;

static inline uint64_t CAVM_EMMCX_HOST_SRS_SRS06(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_EMMCX_HOST_SRS_SRS06(uint64_t a)
{
    if (a==0)
        return 0x824000000218ll + 0x1000000ll * ((a) & 0x0);
    __cavm_csr_fatal("EMMCX_HOST_SRS_SRS06", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_EMMCX_HOST_SRS_SRS06(a) cavm_emmcx_host_srs_srs06_t
#define bustype_CAVM_EMMCX_HOST_SRS_SRS06(a) CSR_TYPE_NCB32b
#define basename_CAVM_EMMCX_HOST_SRS_SRS06(a) "EMMCX_HOST_SRS_SRS06"
#define device_bar_CAVM_EMMCX_HOST_SRS_SRS06(a) 0x0 /* PF_BAR0 */
#define busnum_CAVM_EMMCX_HOST_SRS_SRS06(a) (a)
#define arguments_CAVM_EMMCX_HOST_SRS_SRS06(a) (a),-1,-1,-1

/**
 * Register (NCB32b) emmc#_host_srs_srs07
 *
 * EMMC Host Described in EMMC_HOST_SRS_SRS04 Register
 * Described in EMMC_HOST_SRS_SRS04.
 */
union cavm_emmcx_host_srs_srs07
{
    uint32_t u;
    struct cavm_emmcx_host_srs_srs07_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t resp3                 : 32; /**< [ 31:  0](RO) RESP3 - Response Register #3 */
#else /* Word 0 - Little Endian */
        uint32_t resp3                 : 32; /**< [ 31:  0](RO) RESP3 - Response Register #3 */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_emmcx_host_srs_srs07_s cn; */
};
typedef union cavm_emmcx_host_srs_srs07 cavm_emmcx_host_srs_srs07_t;

static inline uint64_t CAVM_EMMCX_HOST_SRS_SRS07(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_EMMCX_HOST_SRS_SRS07(uint64_t a)
{
    if (a==0)
        return 0x82400000021cll + 0x1000000ll * ((a) & 0x0);
    __cavm_csr_fatal("EMMCX_HOST_SRS_SRS07", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_EMMCX_HOST_SRS_SRS07(a) cavm_emmcx_host_srs_srs07_t
#define bustype_CAVM_EMMCX_HOST_SRS_SRS07(a) CSR_TYPE_NCB32b
#define basename_CAVM_EMMCX_HOST_SRS_SRS07(a) "EMMCX_HOST_SRS_SRS07"
#define device_bar_CAVM_EMMCX_HOST_SRS_SRS07(a) 0x0 /* PF_BAR0 */
#define busnum_CAVM_EMMCX_HOST_SRS_SRS07(a) (a)
#define arguments_CAVM_EMMCX_HOST_SRS_SRS07(a) (a),-1,-1,-1

/**
 * Register (NCB32b) emmc#_host_srs_srs08
 *
 * EMMC Host Data Buffer Register
 */
union cavm_emmcx_host_srs_srs08
{
    uint32_t u;
    struct cavm_emmcx_host_srs_srs08_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t bdp                   : 32; /**< [ 31:  0](R/W) Buffer Data Port. The field is to access the internal buffer (data block) in non-DMA transfer mode.
                                                                 8-bit, 16-bit, or 32-bit access to EMMC_HOST_SRS_SRS08 is possible with the following restrictions:
                                                                 - Only sequential contiguous access in Little Endian mode is possible. For example, if the software
                                                                 accesses BDP[7:0], then the next transfer will access BDP[15:8]. No byte skipping is allowed.
                                                                 - Each new block will start at the least significant byte of BDP, which is BDP[7:0].
                                                                 - If the block size is not a multiple of 32-bits, and the software accesses BDP using 32-bit words,
                                                                 then the excess bytes of the last word are ignored. This allows the software driver to use only
                                                                 32-bit data transfers regardless of the block size.
                                                                 - Access to the register with precaution - the FIFO pointers can be damaged when buffer is not
                                                                 ready or when number of accesses exceed the transfer block size (EMMC_HOST_SRS_SRS01[TBS]).
                                                                 Following shows all transfers (byte enable variations) that are allowed on EMMC_HOST_SRS_SRS08:
                                                                 Transfer width = 32-bit:
                                                                    be[3:0] = 0xF -\> BDP[31:0]
                                                                 Transfer width = 16-bit:
                                                                    be[3:0] = 0x3 -\> BDP[15:0]
                                                                    be[3:0] = 0xA -\> BDP[31:16]
                                                                 Transfer width = 8-bit:
                                                                    be[3:0] = 0x1 -\> BDP[7:0]
                                                                    be[3:0] = 0x2 -\> BDP[15:8]
                                                                    be[3:0] = 0x4 -\> BDP[23:16]
                                                                    be[3:0] = 0x8 -\> BDP[31:24] */
#else /* Word 0 - Little Endian */
        uint32_t bdp                   : 32; /**< [ 31:  0](R/W) Buffer Data Port. The field is to access the internal buffer (data block) in non-DMA transfer mode.
                                                                 8-bit, 16-bit, or 32-bit access to EMMC_HOST_SRS_SRS08 is possible with the following restrictions:
                                                                 - Only sequential contiguous access in Little Endian mode is possible. For example, if the software
                                                                 accesses BDP[7:0], then the next transfer will access BDP[15:8]. No byte skipping is allowed.
                                                                 - Each new block will start at the least significant byte of BDP, which is BDP[7:0].
                                                                 - If the block size is not a multiple of 32-bits, and the software accesses BDP using 32-bit words,
                                                                 then the excess bytes of the last word are ignored. This allows the software driver to use only
                                                                 32-bit data transfers regardless of the block size.
                                                                 - Access to the register with precaution - the FIFO pointers can be damaged when buffer is not
                                                                 ready or when number of accesses exceed the transfer block size (EMMC_HOST_SRS_SRS01[TBS]).
                                                                 Following shows all transfers (byte enable variations) that are allowed on EMMC_HOST_SRS_SRS08:
                                                                 Transfer width = 32-bit:
                                                                    be[3:0] = 0xF -\> BDP[31:0]
                                                                 Transfer width = 16-bit:
                                                                    be[3:0] = 0x3 -\> BDP[15:0]
                                                                    be[3:0] = 0xA -\> BDP[31:16]
                                                                 Transfer width = 8-bit:
                                                                    be[3:0] = 0x1 -\> BDP[7:0]
                                                                    be[3:0] = 0x2 -\> BDP[15:8]
                                                                    be[3:0] = 0x4 -\> BDP[23:16]
                                                                    be[3:0] = 0x8 -\> BDP[31:24] */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_emmcx_host_srs_srs08_s cn; */
};
typedef union cavm_emmcx_host_srs_srs08 cavm_emmcx_host_srs_srs08_t;

static inline uint64_t CAVM_EMMCX_HOST_SRS_SRS08(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_EMMCX_HOST_SRS_SRS08(uint64_t a)
{
    if (a==0)
        return 0x824000000220ll + 0x1000000ll * ((a) & 0x0);
    __cavm_csr_fatal("EMMCX_HOST_SRS_SRS08", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_EMMCX_HOST_SRS_SRS08(a) cavm_emmcx_host_srs_srs08_t
#define bustype_CAVM_EMMCX_HOST_SRS_SRS08(a) CSR_TYPE_NCB32b
#define basename_CAVM_EMMCX_HOST_SRS_SRS08(a) "EMMCX_HOST_SRS_SRS08"
#define device_bar_CAVM_EMMCX_HOST_SRS_SRS08(a) 0x0 /* PF_BAR0 */
#define busnum_CAVM_EMMCX_HOST_SRS_SRS08(a) (a)
#define arguments_CAVM_EMMCX_HOST_SRS_SRS08(a) (a),-1,-1,-1

/**
 * Register (NCB32b) emmc#_host_srs_srs09
 *
 * EMMC Host Present State Register
 */
union cavm_emmcx_host_srs_srs09
{
    uint32_t u;
    struct cavm_emmcx_host_srs_srs09_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t reserved_29_31        : 3;
        uint32_t scmds                 : 1;  /**< [ 28: 28](RO) Sub Command Status. The EMMC_HOST_SRS_SRS03 register and Response registers (EMMC_HOST_SRS_SRS04-
                                                                 EMMC_HOST_SRS_SRS07) are commonly used for main command and sub command. This status is used to
                                                                 distinguish which response error statuses, main command or sub command, indicated the Error
                                                                 Interrupt Status register. Just before reading of this register, the EMMC_HOST_SRS_SRS03[SCF] is
                                                                 copied to this status. This status is effective when not only Response Error interrupt is
                                                                 generated (EMMC_HOST_SRS_SRS12[ERSP]) but also data error interrupt is generated with Command Not
                                                                 Issued by Error (EMMC_HOST_SRS_SRS09[CNIBE]) or Auto CMD Error (EMMC_HOST_SRS_SRS12[EAC])
                                                                 interrupt is generated with Command Not Issued by Error by Auto CMD12 (EMMC_HOST_SRS_SRS15[CNIACE])
                                                                 . EMMC_HOST_SRS_SRS09[SCMDS] indicate which command is not issued (main or sub). */
        uint32_t cnibe                 : 1;  /**< [ 27: 27](RO) Command Not Issued By Error. Setting of CNIBE status indicates that a command cannot be issued to
                                                                 an error, except Auto CMD12 error. (Equivalent error status by Auto CMD12 error is defined as
                                                                 EMMC_HOST_SRS_SRS15[CNIACE]) This status is set to 1 when Host Controller cannot issue a command
                                                                 after setting Command register. */
        uint32_t lvsirslt              : 1;  /**< [ 26: 26](RO) LVS Identification Result. Result of the Low Voltage Signaling Identification. This bit
                                                                 contains a valid information only when LVS Identification Execution bit has changed from 1 to 0.
                                                                 This field is cleared when any of following condition is met:
                                                                 (a) SD Bus Power for VDD1 is set to 0.
                                                                 (b) Card Inserted indicates card removal.
                                                                 (c) EMMC_HOST_HRS_HRS00[SWR] (software reset). */
        uint32_t reserved_25           : 1;
        uint32_t cmdsl                 : 1;  /**< [ 24: 24](RO) CMD Line Signal Level. The value is equal to the actual signal level on CMD line of the
                                                                 SD interface (pad_mem_cmd). Is useful for debugging purposes. */
        uint32_t datsl1                : 4;  /**< [ 23: 20](RO) DAT[3:0] Line Signal Level. The value is equal to the actual signal level on DAT input pad of
                                                                 the SD/eMMC interface:
                                                                 EMMC_HOST_SRS_SRS09[23] - pad_mem_data[3]
                                                                 EMMC_HOST_SRS_SRS09[22] - pad_mem_data[2]
                                                                 EMMC_HOST_SRS_SRS09[21] - pad_mem_data[1]
                                                                 EMMC_HOST_SRS_SRS09[20] - pad_mem_data[0] */
        uint32_t wpsl                  : 1;  /**< [ 19: 19](RO) Write Protect Switch Pin Level. The value is equal to the actual signal level on Write Protect pad
                                                                 of the SD/eMMC interface (\textit{pad_mem_wpbar}).
                                                                 0 = means that the write operations is disabled.
                                                                 1 = means that the write operation is enabled. */
        uint32_t cdsl                  : 1;  /**< [ 18: 18](RO) Card Detect Pin Level. The value is equal to the inverted signal level on Card Detect pin
                                                                 of the SD/eMMC interface (\textit{pad_mem_ctrl_0}).
                                                                 0 = means no card is inside the slot.
                                                                 1 = means that the card is inserted.
                                                                 Debouncing is not performed on CDSL, therefore the use of Card Inserted (CI) bit is recommended
                                                                 during normal work. CDSL bit is useful only for debugging purposes. */
        uint32_t css                   : 1;  /**< [ 17: 17](RO) Card State Stable. Indicates if Card Detect Pin Level (CDSL) is stable.
                                                                 0 = means that the CDSL is not stable (during card insertion/removal or during the reset).
                                                                 1 = means that the CDSL value is stable.
                                                                 Field is useful for debugging purposes. */
        uint32_t ci                    : 1;  /**< [ 16: 16](RO) Card Inserted. Indicates if the card is inserted inside the slot.
                                                                 0 = no card in slot.
                                                                 1 = card is inserted.
                                                                 Unlike EMMC_HOST_SRS_SRS09[CDSL], value of EMMC_HOST_SRS_SRS09[CI] bit is guaranteed to be stable
                                                                 (i.e. debouncing is performed on this bit). Use of this bit is recommended during the normal
                                                                 operation of host. */
        uint32_t reserved_12_15        : 4;
        uint32_t bre                   : 1;  /**< [ 11: 11](RO) Buffer Read Enable. This field represents data buffer (EMMC_HOST_SRS_SRS08[BDP]) state for read
                                                                 transfer in non-DMA mode.
                                                                 0 = no valid data inside the data buffer.
                                                                 1 = valid data can be read from the data buffer.
                                                                 After reading the entire data block, this bit changes to 0. */
        uint32_t bwe                   : 1;  /**< [ 10: 10](RO) Buffer Write Enable. This bit represents data buffer (EMMC_HOST_SRS_SRS08[BDP]) state for write
                                                                 transfer in non-DMA mode.
                                                                 0 = data cannot be written.
                                                                 1 = data can be written to the data buffer.
                                                                 After reading the entire data block, this changes to 0. This bit will be cleared in case of
                                                                 EMMC_HOST_SRS_SRS10[SBGR] at non-DMA write transfer (even if the internal buffer is ready). The
                                                                 buffer must not be written after the EMMC_HOST_SRS_SRS10[SBGR]. If the BWR was set, the only
                                                                 action from the software is to clear the interrupt status. */
        uint32_t rta                   : 1;  /**< [  9:  9](RO) Read Transfer Active. Indicates the status of the read data transfer.
                                                                 0 = no data read transfer in progress.
                                                                 1 = data read transfer in progress.
                                                                 Bit is set 1 after sending the read command, or after restarting the read transfer by the Continue
                                                                 Request (EMMC_HOST_SRS_SRS10[CREQ]). Bit is set 0 by the hardware after the last block of the read
                                                                 transfer, or after stopping the read transfer by the Stop at Block Gap Request
                                                                 (EMMC_HOST_SRS_SRS10[SBGR]). In both cases, the entire data is to be read by the system from the
                                                                 internal data buffer before setting this bit to 0. In other words, EMMC_HOST_SRS_SRS09[RTA]=0
                                                                 means that the entire data is already transferred to the system, and internal data buffer is empty. */
        uint32_t wta                   : 1;  /**< [  8:  8](RO) Write Transfer Active. Indicates the status of the write data transfer.
                                                                 0 = no data write transfer in progress.
                                                                 1 = data write transfer in progress.
                                                                 Bit is set 1 after sending the write command, or after restarting the write transfer by the
                                                                 Continue Request (EMMC_HOST_SRS_SRS10[CREQ]). Bit is set 0 by the hardware after the last block of
                                                                 the write transfer, or after stopping the write transfer by the Stop at Block Gap Request
                                                                 (EMMC_HOST_SRS_SRS10[SBGR]).
                                                                 In both cases, the entire data has to be transferred to the card from the internal data buffer
                                                                 before setting this bit to 0. In other words, WTA=0 means that the entire data is already
                                                                 transferred to the card, and CRC response for the last data block is already received. */
        uint32_t datsl2                : 4;  /**< [  7:  4](RO) DAT[7:4] Line Signal Level. The value is equal to the actual signal level on DAT input pad of
                                                                 the SD/eMMC interface:
                                                                 SRS9.7 - pad_mem_data[7]
                                                                 SRS9.6 - pad_mem_data[6]
                                                                 SRS9.5 - pad_mem_data[5]
                                                                 SRS9.4 - pad_mem_data[4] */
        uint32_t reserved_3            : 1;
        uint32_t dla                   : 1;  /**< [  2:  2](RO) DAT Line Active. Indicates if the DAT lines of SD interface are currently in use.
                                                                 0 = DAT lines are released (not in use).
                                                                 1 = DAT lines are active (in use).
                                                                 This bit set to 1, when Read or Write Transfer bits are active. (EMMC_HOST_SRS_SRS09[RTA]=1 or
                                                                 EMMC_HOST_SRS_SRS09[WTA]=1), or if the card indicates busy state on the DAT lines. The card can
                                                                 become busy immediately after the write operation, or after command which requires response with
                                                                 busy. Falling edge of this bit (change from 1 to 0) directly triggers Transfer Complete Interrupt
                                                                 (EMMC_HOST_SRS_SRS12[TC]). */
        uint32_t cidat                 : 1;  /**< [  1:  1](RO) Command Inhibit DAT. Indicates if the host can issue a command which uses DAT line. Commands which
                                                                 use DAT line include write and read data commands and commands with busy response.
                                                                 0 = command using DAT line can be sent.
                                                                 1 = command using DAT line cannot be sent.
                                                                 When CIDAT=1 then the EMMC_HOST_SRS_SRS03[15:0] is write-protected. The software can write
                                                                 EMMC_HOST_SRS_SRS03[15:0] only when CIDAT=0. */
        uint32_t cicmd                 : 1;  /**< [  0:  0](RO) Command Inhibit CMD. Indicates if the host can issue a command.
                                                                 0 = command can be sent.
                                                                 1 = command cannot be sent.
                                                                 If this bit is 0, indicates the CMD line is not in use and the Host Controller can issue an SD
                                                                 command using the CMD line. This bit is set immediately after the CI is written, indicating start
                                                                 of command transmission. This bit is cleared when the command response is received. Even if the
                                                                 Command Inhibit DAT is set to 1, commands using only the CMD line can be issued if the Command
                                                                 Inhibit CMD is 0. Change from 1 to 0 directly triggers Command Complete Interrupt
                                                                 (EMMC_HOST_SRS_SRS12[CC]). */
#else /* Word 0 - Little Endian */
        uint32_t cicmd                 : 1;  /**< [  0:  0](RO) Command Inhibit CMD. Indicates if the host can issue a command.
                                                                 0 = command can be sent.
                                                                 1 = command cannot be sent.
                                                                 If this bit is 0, indicates the CMD line is not in use and the Host Controller can issue an SD
                                                                 command using the CMD line. This bit is set immediately after the CI is written, indicating start
                                                                 of command transmission. This bit is cleared when the command response is received. Even if the
                                                                 Command Inhibit DAT is set to 1, commands using only the CMD line can be issued if the Command
                                                                 Inhibit CMD is 0. Change from 1 to 0 directly triggers Command Complete Interrupt
                                                                 (EMMC_HOST_SRS_SRS12[CC]). */
        uint32_t cidat                 : 1;  /**< [  1:  1](RO) Command Inhibit DAT. Indicates if the host can issue a command which uses DAT line. Commands which
                                                                 use DAT line include write and read data commands and commands with busy response.
                                                                 0 = command using DAT line can be sent.
                                                                 1 = command using DAT line cannot be sent.
                                                                 When CIDAT=1 then the EMMC_HOST_SRS_SRS03[15:0] is write-protected. The software can write
                                                                 EMMC_HOST_SRS_SRS03[15:0] only when CIDAT=0. */
        uint32_t dla                   : 1;  /**< [  2:  2](RO) DAT Line Active. Indicates if the DAT lines of SD interface are currently in use.
                                                                 0 = DAT lines are released (not in use).
                                                                 1 = DAT lines are active (in use).
                                                                 This bit set to 1, when Read or Write Transfer bits are active. (EMMC_HOST_SRS_SRS09[RTA]=1 or
                                                                 EMMC_HOST_SRS_SRS09[WTA]=1), or if the card indicates busy state on the DAT lines. The card can
                                                                 become busy immediately after the write operation, or after command which requires response with
                                                                 busy. Falling edge of this bit (change from 1 to 0) directly triggers Transfer Complete Interrupt
                                                                 (EMMC_HOST_SRS_SRS12[TC]). */
        uint32_t reserved_3            : 1;
        uint32_t datsl2                : 4;  /**< [  7:  4](RO) DAT[7:4] Line Signal Level. The value is equal to the actual signal level on DAT input pad of
                                                                 the SD/eMMC interface:
                                                                 SRS9.7 - pad_mem_data[7]
                                                                 SRS9.6 - pad_mem_data[6]
                                                                 SRS9.5 - pad_mem_data[5]
                                                                 SRS9.4 - pad_mem_data[4] */
        uint32_t wta                   : 1;  /**< [  8:  8](RO) Write Transfer Active. Indicates the status of the write data transfer.
                                                                 0 = no data write transfer in progress.
                                                                 1 = data write transfer in progress.
                                                                 Bit is set 1 after sending the write command, or after restarting the write transfer by the
                                                                 Continue Request (EMMC_HOST_SRS_SRS10[CREQ]). Bit is set 0 by the hardware after the last block of
                                                                 the write transfer, or after stopping the write transfer by the Stop at Block Gap Request
                                                                 (EMMC_HOST_SRS_SRS10[SBGR]).
                                                                 In both cases, the entire data has to be transferred to the card from the internal data buffer
                                                                 before setting this bit to 0. In other words, WTA=0 means that the entire data is already
                                                                 transferred to the card, and CRC response for the last data block is already received. */
        uint32_t rta                   : 1;  /**< [  9:  9](RO) Read Transfer Active. Indicates the status of the read data transfer.
                                                                 0 = no data read transfer in progress.
                                                                 1 = data read transfer in progress.
                                                                 Bit is set 1 after sending the read command, or after restarting the read transfer by the Continue
                                                                 Request (EMMC_HOST_SRS_SRS10[CREQ]). Bit is set 0 by the hardware after the last block of the read
                                                                 transfer, or after stopping the read transfer by the Stop at Block Gap Request
                                                                 (EMMC_HOST_SRS_SRS10[SBGR]). In both cases, the entire data is to be read by the system from the
                                                                 internal data buffer before setting this bit to 0. In other words, EMMC_HOST_SRS_SRS09[RTA]=0
                                                                 means that the entire data is already transferred to the system, and internal data buffer is empty. */
        uint32_t bwe                   : 1;  /**< [ 10: 10](RO) Buffer Write Enable. This bit represents data buffer (EMMC_HOST_SRS_SRS08[BDP]) state for write
                                                                 transfer in non-DMA mode.
                                                                 0 = data cannot be written.
                                                                 1 = data can be written to the data buffer.
                                                                 After reading the entire data block, this changes to 0. This bit will be cleared in case of
                                                                 EMMC_HOST_SRS_SRS10[SBGR] at non-DMA write transfer (even if the internal buffer is ready). The
                                                                 buffer must not be written after the EMMC_HOST_SRS_SRS10[SBGR]. If the BWR was set, the only
                                                                 action from the software is to clear the interrupt status. */
        uint32_t bre                   : 1;  /**< [ 11: 11](RO) Buffer Read Enable. This field represents data buffer (EMMC_HOST_SRS_SRS08[BDP]) state for read
                                                                 transfer in non-DMA mode.
                                                                 0 = no valid data inside the data buffer.
                                                                 1 = valid data can be read from the data buffer.
                                                                 After reading the entire data block, this bit changes to 0. */
        uint32_t reserved_12_15        : 4;
        uint32_t ci                    : 1;  /**< [ 16: 16](RO) Card Inserted. Indicates if the card is inserted inside the slot.
                                                                 0 = no card in slot.
                                                                 1 = card is inserted.
                                                                 Unlike EMMC_HOST_SRS_SRS09[CDSL], value of EMMC_HOST_SRS_SRS09[CI] bit is guaranteed to be stable
                                                                 (i.e. debouncing is performed on this bit). Use of this bit is recommended during the normal
                                                                 operation of host. */
        uint32_t css                   : 1;  /**< [ 17: 17](RO) Card State Stable. Indicates if Card Detect Pin Level (CDSL) is stable.
                                                                 0 = means that the CDSL is not stable (during card insertion/removal or during the reset).
                                                                 1 = means that the CDSL value is stable.
                                                                 Field is useful for debugging purposes. */
        uint32_t cdsl                  : 1;  /**< [ 18: 18](RO) Card Detect Pin Level. The value is equal to the inverted signal level on Card Detect pin
                                                                 of the SD/eMMC interface (\textit{pad_mem_ctrl_0}).
                                                                 0 = means no card is inside the slot.
                                                                 1 = means that the card is inserted.
                                                                 Debouncing is not performed on CDSL, therefore the use of Card Inserted (CI) bit is recommended
                                                                 during normal work. CDSL bit is useful only for debugging purposes. */
        uint32_t wpsl                  : 1;  /**< [ 19: 19](RO) Write Protect Switch Pin Level. The value is equal to the actual signal level on Write Protect pad
                                                                 of the SD/eMMC interface (\textit{pad_mem_wpbar}).
                                                                 0 = means that the write operations is disabled.
                                                                 1 = means that the write operation is enabled. */
        uint32_t datsl1                : 4;  /**< [ 23: 20](RO) DAT[3:0] Line Signal Level. The value is equal to the actual signal level on DAT input pad of
                                                                 the SD/eMMC interface:
                                                                 EMMC_HOST_SRS_SRS09[23] - pad_mem_data[3]
                                                                 EMMC_HOST_SRS_SRS09[22] - pad_mem_data[2]
                                                                 EMMC_HOST_SRS_SRS09[21] - pad_mem_data[1]
                                                                 EMMC_HOST_SRS_SRS09[20] - pad_mem_data[0] */
        uint32_t cmdsl                 : 1;  /**< [ 24: 24](RO) CMD Line Signal Level. The value is equal to the actual signal level on CMD line of the
                                                                 SD interface (pad_mem_cmd). Is useful for debugging purposes. */
        uint32_t reserved_25           : 1;
        uint32_t lvsirslt              : 1;  /**< [ 26: 26](RO) LVS Identification Result. Result of the Low Voltage Signaling Identification. This bit
                                                                 contains a valid information only when LVS Identification Execution bit has changed from 1 to 0.
                                                                 This field is cleared when any of following condition is met:
                                                                 (a) SD Bus Power for VDD1 is set to 0.
                                                                 (b) Card Inserted indicates card removal.
                                                                 (c) EMMC_HOST_HRS_HRS00[SWR] (software reset). */
        uint32_t cnibe                 : 1;  /**< [ 27: 27](RO) Command Not Issued By Error. Setting of CNIBE status indicates that a command cannot be issued to
                                                                 an error, except Auto CMD12 error. (Equivalent error status by Auto CMD12 error is defined as
                                                                 EMMC_HOST_SRS_SRS15[CNIACE]) This status is set to 1 when Host Controller cannot issue a command
                                                                 after setting Command register. */
        uint32_t scmds                 : 1;  /**< [ 28: 28](RO) Sub Command Status. The EMMC_HOST_SRS_SRS03 register and Response registers (EMMC_HOST_SRS_SRS04-
                                                                 EMMC_HOST_SRS_SRS07) are commonly used for main command and sub command. This status is used to
                                                                 distinguish which response error statuses, main command or sub command, indicated the Error
                                                                 Interrupt Status register. Just before reading of this register, the EMMC_HOST_SRS_SRS03[SCF] is
                                                                 copied to this status. This status is effective when not only Response Error interrupt is
                                                                 generated (EMMC_HOST_SRS_SRS12[ERSP]) but also data error interrupt is generated with Command Not
                                                                 Issued by Error (EMMC_HOST_SRS_SRS09[CNIBE]) or Auto CMD Error (EMMC_HOST_SRS_SRS12[EAC])
                                                                 interrupt is generated with Command Not Issued by Error by Auto CMD12 (EMMC_HOST_SRS_SRS15[CNIACE])
                                                                 . EMMC_HOST_SRS_SRS09[SCMDS] indicate which command is not issued (main or sub). */
        uint32_t reserved_29_31        : 3;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_emmcx_host_srs_srs09_s cn; */
};
typedef union cavm_emmcx_host_srs_srs09 cavm_emmcx_host_srs_srs09_t;

static inline uint64_t CAVM_EMMCX_HOST_SRS_SRS09(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_EMMCX_HOST_SRS_SRS09(uint64_t a)
{
    if (a==0)
        return 0x824000000224ll + 0x1000000ll * ((a) & 0x0);
    __cavm_csr_fatal("EMMCX_HOST_SRS_SRS09", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_EMMCX_HOST_SRS_SRS09(a) cavm_emmcx_host_srs_srs09_t
#define bustype_CAVM_EMMCX_HOST_SRS_SRS09(a) CSR_TYPE_NCB32b
#define basename_CAVM_EMMCX_HOST_SRS_SRS09(a) "EMMCX_HOST_SRS_SRS09"
#define device_bar_CAVM_EMMCX_HOST_SRS_SRS09(a) 0x0 /* PF_BAR0 */
#define busnum_CAVM_EMMCX_HOST_SRS_SRS09(a) (a)
#define arguments_CAVM_EMMCX_HOST_SRS_SRS09(a) (a),-1,-1,-1

/**
 * Register (NCB32b) emmc#_host_srs_srs10
 *
 * EMMC Host Control 1 (General / Power / Block-Gap / Wake-Up) Register
 */
union cavm_emmcx_host_srs_srs10
{
    uint32_t u;
    struct cavm_emmcx_host_srs_srs10_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t reserved_27_31        : 5;
        uint32_t worm                  : 1;  /**< [ 26: 26](R/W) Wakeup Event Enable On SD Card Removal. When set to 1, enables wake-up event via Card Removal
                                                                 assertion in the EMMC_HOST_SRS_SRS12[CR] register. */
        uint32_t wois                  : 1;  /**< [ 25: 25](R/W) Wake-Up Event Enable On Card Inserted. When set to 1, enables wake-up event via Card Insertion
                                                                 assertion in the EMMC_HOST_SRS_SRS12[CIN] register. */
        uint32_t woiq                  : 1;  /**< [ 24: 24](R/W) Wakeup Event Enable On Card Interrupt. When set to 1, enables wake-up event via Card Interrupt
                                                                 assertion in the EMMC_HOST_SRS_SRS12[CINT] */
        uint32_t reserved_20_23        : 4;
        uint32_t ibg                   : 1;  /**< [ 19: 19](R/W) Interrupt At Block Gap. When set to 1, enables interrupt detection at the block gap for a multiple
                                                                 block transfer. This bit is valid only in SD4 mode. If the SD card cannot signal an interrupt
                                                                 during a multiple block transfer, this bit should be set to 0. */
        uint32_t rwc                   : 1;  /**< [ 18: 18](R/W) Read-Wait Control. When set to 1, enables Read Wait control. The Read Wait function is optional
                                                                 for SDIO cards. If the card does not support read wait, this bit would never be set to 1;
                                                                 otherwise, DAT line conflict may occur. */
        uint32_t creq                  : 1;  /**< [ 17: 17](R/W1S) Continue Request. When set to 1, restarts the transfer previously stopped using the Stop At Block
                                                                 Gap. The software will set EMMC_HOST_SRS_SRS10[SBGR] (Stop At Block Gap) bit to 0 before setting
                                                                 the (CR) Continue Request. When EMMC_HOST_SRS_SRS10[SBGR]=1, then all write operations to Continue
                                                                 Request are ignored. Clearing EMMC_HOST_SRS_SRS10[SBGR] can be done before or simultaneously with
                                                                 writing the CR. Continue Request bit is cleared automatically by the host when
                                                                 EMMC_HOST_SRS_SRS09[DLA] (Dat Line Active) changes from 0 to 1, indicating the actual restart of
                                                                 the transfer. */
        uint32_t sbgr                  : 1;  /**< [ 16: 16](R/W) Stop At Block Gap Request. When set to 1, orders the stop executing read and write transaction at
                                                                 the next possible block gap for non-DMA, SDMA and ADMA transfers. The software will maintain
                                                                 EMMC_HOST_SRS_SRS10[SBGR]=1 until the current transfer is complete (typically by waiting for -
                                                                 Transfer Complete bit). After Transfer Complete event, the software will set SBGR back to 0. In
                                                                 case of the read transfer, the host stops after the next data block received from the card. This
                                                                 uses the Read-Wait mechanism if it is enabled by EMMC_HOST_SRS_SRS10[RWC] or stops the card clock
                                                                 (\textit{pad_mem_webar_t}) if Read-Wait is disabled. In the case of the write transfer, host stops
                                                                 after the last block written to the data buffer. The host sends all data already written to the
                                                                 internal data buffer before stopping the transfer. In case of stopping non-DMA write transfer,
                                                                 the software will set this bit only at block gap (block unit (SD mode)). */
        uint32_t reserved_12_15        : 4;
        uint32_t bvs                   : 3;  /**< [ 11:  9](R/W) SD Bus Voltage Select. This field is used to configure VDD1 voltage level.The state of this field
                                                                 directly drives pad_bv port.
                                                                 0x0-0x4 = Reserved.
                                                                 0x5 = 1.8V (typical) for embedded.
                                                                 0x6 = 3.0V (typical).
                                                                 0x7 = 3.3V (typical).
                                                                 others = Reserved. */
        uint32_t bp                    : 1;  /**< [  8:  8](R/W) SD Bus Power for VDD1. When set to 1, the VDD1 voltage is supplied to card/device. The state of
                                                                 this bit directly drives \textit{pad_mem_ctrl_1} pad. Setting bit to 0 cause that host stops
                                                                 driving SDCLK, CMD/DAT lines. If the device is connected to the host, lines go low before
                                                                 disabling VDD1. The host will set this bit automatically to 0 when card is removed from the slot
                                                                 (i.e. after high to low transition on pad_mem_ctrl_0 pin). This is to provide the hot removal
                                                                 support. */
        uint32_t cdss                  : 1;  /**< [  7:  7](R/W) Card Detect Signal Selection. A card detection mechanism will base on either pad_mem_ctrl_0 port
                                                                 or register value.
                                                                 0 = pad_mem_ctrl_0 pin (normal mode).
                                                                 1 = CDTL(EMMC_HOST_SRS_SRS10[6]) bit (testing mode). */
        uint32_t cdtl                  : 1;  /**< [  6:  6](R/W) Card Detect Test Level. Designates card insertion status when EMMC_HOST_SRS_SRS10[CDSS]=1. Bit
                                                                 provided for test purposes.
                                                                 0 = no card.
                                                                 1 = card inserted. */
        uint32_t edtw                  : 1;  /**< [  5:  5](R/W) Extended Data Transfer Width. This bit is to enable/disable 8-bit DAT bus width mode.
                                                                 0 = bus width selected by EMMC_HOST_SRS_SRS10[DTW].
                                                                 1 = 8-bit mode enabled. */
        uint32_t dmasel                : 2;  /**< [  4:  3](R/W) DMA Select. In this field the DMA mode can be selected. The field behavior depends on the Host
                                                                 Controller Compatibility bit (EMMC_HOST_SRS_SRS15[HV4E]). Host Controller version 3.00 compatible
                                                                 mode (EMMC_HOST_SRS_SRS15[HV4E]=0)
                                                                 0x0 = SDMA mode.
                                                                 0x1 = Reserved.
                                                                 0x2 = ADMA2 (32-bit Address).
                                                                 0x2 = ADMA2 (64-bit Address).
                                                                 Host Controller version 4.00 compatibility mode (EMMC_HOST_SRS_SRS15[HV4E]=1)
                                                                 0x0 = SDMA mode.
                                                                 0x1 = Not Used.
                                                                 0x2 = ADMA2 mode (ADMA3 is not supported or disabled).
                                                                 0x3 = ADMA2 or ADMA3 is selected.
                                                                 The ADMA2 address bus width is configured by 64-bit Addressing bit in Host Controller 2 register
                                                                 when EMMC_HOST_SRS_SRS15[HV4E]=1. */
        uint32_t hse                   : 1;  /**< [  2:  2](R/W) High Speed Enable. Selects operating mode to Default Speed (HSE=0) or High Speed (HSE=1). The
                                                                 maximum SD clock frequency is defined as 0-25MHz in the default speed mode, and 0-50MHz in the
                                                                 High Speed mode. */
        uint32_t dtw                   : 1;  /**< [  1:  1](R/W) Data Transfer Width. Bit used to configure DAT bus width to 1 or 4.
                                                                 0 = 1-bit mode.
                                                                 1 = 4-bit mode.
                                                                 This bit is ignored when the EMMC_HOST_SRS_SRS10[EDTW] is set 1 (8-bit mode selected). */
        uint32_t ledc                  : 1;  /**< [  0:  0](R/W) LED Control. State of this bit directly drives led port of the host in order to control the
                                                                 external LED diode. LEDC=1 will switch LED on, while LEDC=0 will switch it off. The software will
                                                                 switch LED on to caution the user not to remove the card while the transfer is in progress. */
#else /* Word 0 - Little Endian */
        uint32_t ledc                  : 1;  /**< [  0:  0](R/W) LED Control. State of this bit directly drives led port of the host in order to control the
                                                                 external LED diode. LEDC=1 will switch LED on, while LEDC=0 will switch it off. The software will
                                                                 switch LED on to caution the user not to remove the card while the transfer is in progress. */
        uint32_t dtw                   : 1;  /**< [  1:  1](R/W) Data Transfer Width. Bit used to configure DAT bus width to 1 or 4.
                                                                 0 = 1-bit mode.
                                                                 1 = 4-bit mode.
                                                                 This bit is ignored when the EMMC_HOST_SRS_SRS10[EDTW] is set 1 (8-bit mode selected). */
        uint32_t hse                   : 1;  /**< [  2:  2](R/W) High Speed Enable. Selects operating mode to Default Speed (HSE=0) or High Speed (HSE=1). The
                                                                 maximum SD clock frequency is defined as 0-25MHz in the default speed mode, and 0-50MHz in the
                                                                 High Speed mode. */
        uint32_t dmasel                : 2;  /**< [  4:  3](R/W) DMA Select. In this field the DMA mode can be selected. The field behavior depends on the Host
                                                                 Controller Compatibility bit (EMMC_HOST_SRS_SRS15[HV4E]). Host Controller version 3.00 compatible
                                                                 mode (EMMC_HOST_SRS_SRS15[HV4E]=0)
                                                                 0x0 = SDMA mode.
                                                                 0x1 = Reserved.
                                                                 0x2 = ADMA2 (32-bit Address).
                                                                 0x2 = ADMA2 (64-bit Address).
                                                                 Host Controller version 4.00 compatibility mode (EMMC_HOST_SRS_SRS15[HV4E]=1)
                                                                 0x0 = SDMA mode.
                                                                 0x1 = Not Used.
                                                                 0x2 = ADMA2 mode (ADMA3 is not supported or disabled).
                                                                 0x3 = ADMA2 or ADMA3 is selected.
                                                                 The ADMA2 address bus width is configured by 64-bit Addressing bit in Host Controller 2 register
                                                                 when EMMC_HOST_SRS_SRS15[HV4E]=1. */
        uint32_t edtw                  : 1;  /**< [  5:  5](R/W) Extended Data Transfer Width. This bit is to enable/disable 8-bit DAT bus width mode.
                                                                 0 = bus width selected by EMMC_HOST_SRS_SRS10[DTW].
                                                                 1 = 8-bit mode enabled. */
        uint32_t cdtl                  : 1;  /**< [  6:  6](R/W) Card Detect Test Level. Designates card insertion status when EMMC_HOST_SRS_SRS10[CDSS]=1. Bit
                                                                 provided for test purposes.
                                                                 0 = no card.
                                                                 1 = card inserted. */
        uint32_t cdss                  : 1;  /**< [  7:  7](R/W) Card Detect Signal Selection. A card detection mechanism will base on either pad_mem_ctrl_0 port
                                                                 or register value.
                                                                 0 = pad_mem_ctrl_0 pin (normal mode).
                                                                 1 = CDTL(EMMC_HOST_SRS_SRS10[6]) bit (testing mode). */
        uint32_t bp                    : 1;  /**< [  8:  8](R/W) SD Bus Power for VDD1. When set to 1, the VDD1 voltage is supplied to card/device. The state of
                                                                 this bit directly drives \textit{pad_mem_ctrl_1} pad. Setting bit to 0 cause that host stops
                                                                 driving SDCLK, CMD/DAT lines. If the device is connected to the host, lines go low before
                                                                 disabling VDD1. The host will set this bit automatically to 0 when card is removed from the slot
                                                                 (i.e. after high to low transition on pad_mem_ctrl_0 pin). This is to provide the hot removal
                                                                 support. */
        uint32_t bvs                   : 3;  /**< [ 11:  9](R/W) SD Bus Voltage Select. This field is used to configure VDD1 voltage level.The state of this field
                                                                 directly drives pad_bv port.
                                                                 0x0-0x4 = Reserved.
                                                                 0x5 = 1.8V (typical) for embedded.
                                                                 0x6 = 3.0V (typical).
                                                                 0x7 = 3.3V (typical).
                                                                 others = Reserved. */
        uint32_t reserved_12_15        : 4;
        uint32_t sbgr                  : 1;  /**< [ 16: 16](R/W) Stop At Block Gap Request. When set to 1, orders the stop executing read and write transaction at
                                                                 the next possible block gap for non-DMA, SDMA and ADMA transfers. The software will maintain
                                                                 EMMC_HOST_SRS_SRS10[SBGR]=1 until the current transfer is complete (typically by waiting for -
                                                                 Transfer Complete bit). After Transfer Complete event, the software will set SBGR back to 0. In
                                                                 case of the read transfer, the host stops after the next data block received from the card. This
                                                                 uses the Read-Wait mechanism if it is enabled by EMMC_HOST_SRS_SRS10[RWC] or stops the card clock
                                                                 (\textit{pad_mem_webar_t}) if Read-Wait is disabled. In the case of the write transfer, host stops
                                                                 after the last block written to the data buffer. The host sends all data already written to the
                                                                 internal data buffer before stopping the transfer. In case of stopping non-DMA write transfer,
                                                                 the software will set this bit only at block gap (block unit (SD mode)). */
        uint32_t creq                  : 1;  /**< [ 17: 17](R/W1S) Continue Request. When set to 1, restarts the transfer previously stopped using the Stop At Block
                                                                 Gap. The software will set EMMC_HOST_SRS_SRS10[SBGR] (Stop At Block Gap) bit to 0 before setting
                                                                 the (CR) Continue Request. When EMMC_HOST_SRS_SRS10[SBGR]=1, then all write operations to Continue
                                                                 Request are ignored. Clearing EMMC_HOST_SRS_SRS10[SBGR] can be done before or simultaneously with
                                                                 writing the CR. Continue Request bit is cleared automatically by the host when
                                                                 EMMC_HOST_SRS_SRS09[DLA] (Dat Line Active) changes from 0 to 1, indicating the actual restart of
                                                                 the transfer. */
        uint32_t rwc                   : 1;  /**< [ 18: 18](R/W) Read-Wait Control. When set to 1, enables Read Wait control. The Read Wait function is optional
                                                                 for SDIO cards. If the card does not support read wait, this bit would never be set to 1;
                                                                 otherwise, DAT line conflict may occur. */
        uint32_t ibg                   : 1;  /**< [ 19: 19](R/W) Interrupt At Block Gap. When set to 1, enables interrupt detection at the block gap for a multiple
                                                                 block transfer. This bit is valid only in SD4 mode. If the SD card cannot signal an interrupt
                                                                 during a multiple block transfer, this bit should be set to 0. */
        uint32_t reserved_20_23        : 4;
        uint32_t woiq                  : 1;  /**< [ 24: 24](R/W) Wakeup Event Enable On Card Interrupt. When set to 1, enables wake-up event via Card Interrupt
                                                                 assertion in the EMMC_HOST_SRS_SRS12[CINT] */
        uint32_t wois                  : 1;  /**< [ 25: 25](R/W) Wake-Up Event Enable On Card Inserted. When set to 1, enables wake-up event via Card Insertion
                                                                 assertion in the EMMC_HOST_SRS_SRS12[CIN] register. */
        uint32_t worm                  : 1;  /**< [ 26: 26](R/W) Wakeup Event Enable On SD Card Removal. When set to 1, enables wake-up event via Card Removal
                                                                 assertion in the EMMC_HOST_SRS_SRS12[CR] register. */
        uint32_t reserved_27_31        : 5;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_emmcx_host_srs_srs10_s cn; */
};
typedef union cavm_emmcx_host_srs_srs10 cavm_emmcx_host_srs_srs10_t;

static inline uint64_t CAVM_EMMCX_HOST_SRS_SRS10(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_EMMCX_HOST_SRS_SRS10(uint64_t a)
{
    if (a==0)
        return 0x824000000228ll + 0x1000000ll * ((a) & 0x0);
    __cavm_csr_fatal("EMMCX_HOST_SRS_SRS10", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_EMMCX_HOST_SRS_SRS10(a) cavm_emmcx_host_srs_srs10_t
#define bustype_CAVM_EMMCX_HOST_SRS_SRS10(a) CSR_TYPE_NCB32b
#define basename_CAVM_EMMCX_HOST_SRS_SRS10(a) "EMMCX_HOST_SRS_SRS10"
#define device_bar_CAVM_EMMCX_HOST_SRS_SRS10(a) 0x0 /* PF_BAR0 */
#define busnum_CAVM_EMMCX_HOST_SRS_SRS10(a) (a)
#define arguments_CAVM_EMMCX_HOST_SRS_SRS10(a) (a),-1,-1,-1

/**
 * Register (NCB32b) emmc#_host_srs_srs11
 *
 * EMMC Host Control 2 (Clock, Timeout, Reset) Register
 */
union cavm_emmcx_host_srs_srs11
{
    uint32_t u;
    struct cavm_emmcx_host_srs_srs11_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t reserved_27_31        : 5;
        uint32_t srdat                 : 1;  /**< [ 26: 26](R/W1S) Software Reset For DAT Line. When set to 1, resets the logic related to the data path, including
                                                                 data buffers and the DMA logic. The following registers and bits are cleared:
                                                                 EMMC_HOST_SRS_SRS08 register:
                                                                       Buffer
                                                                 EMMC_HOST_SRS_SRS09 register:
                                                                       Buffer Read Enable
                                                                       Buffer Write Enable
                                                                       Read Transfer Active
                                                                       Write Transfer Active
                                                                       DAT Line Active
                                                                       Command Inhibit
                                                                 DATSRS10 register:
                                                                       Continue Request
                                                                       Stop At Block Gap Request
                                                                 EMMC_HOST_SRS_SRS12 register:
                                                                       Buffer Read Ready
                                                                       Buffer Write Ready
                                                                       DMA Interrupt
                                                                       Block Gap Event
                                                                       Transfer Complete
                                                                 After completing the reset operation, EMMC_HOST_SRS_SRS11[SRDAT] bit is automatically cleared. It
                                                                 takes some time to complete the reset operation, so the software will wait until
                                                                 EMMC_HOST_SRS_SRS11[SRDAT]=0, and continue the other operations only when
                                                                 EMMC_HOST_SRS_SRS11[SRDAT]=0. */
        uint32_t srcmd                 : 1;  /**< [ 25: 25](R/W1S) Software Reset For CMD Line. When set to 1, resets the logic related to the command generation
                                                                 and response checking. The following registers and bits are cleared:
                                                                 EMMC_HOST_SRS_SRS09 register: Command Inhibit CMD
                                                                 EMMC_HOST_SRS_SRS12 register: Command Complete
                                                                 After completing the reset operation, EMMC_HOST_SRS_SRS11[SRCMD] bit is automatically cleared. It
                                                                 takes some time to complete the reset operation, so the software will wait until SRCMD=0, and
                                                                 continue the other operations only when EMMC_HOST_SRS_SRS11[SRCMD]=0. */
        uint32_t srfa                  : 1;  /**< [ 24: 24](R/W1S) Software Reset For All. When set to 1, the entire slot is reset.After completing the reset
                                                                 operation, SRFA bit is automatically cleared. It takes some time to complete the reset operation,
                                                                 so the software will wait until SRFA=0, and continue the other operations only when SRFA=0.
                                                                 Additionally, after SRFA, software should reset and reinitialize card inserted to the slot. SD
                                                                 Card Power may be enabled 1 ms after this bit is cleared to ensure SD Card has been reset properly. */
        uint32_t reserved_20_23        : 4;
        uint32_t dtcv                  : 4;  /**< [ 19: 16](R/W) Data Timeout Counter Value. This value determines the interval by which DAT line timeouts are
                                                                 detected. The interval can be computed as below:
                                                                 0x0 =  t_sdmclk*2^(13+2).
                                                                 0x1 =  t_sdmclk*2^(14+2).
                                                                 0x2 =  t_sdmclk*2^(15+2).
                                                                 ..
                                                                 0xD =  t_sdmclk*2^(26+2).
                                                                 0xE =  t_sdmclk*2^(27+2).
                                                                 0xF =  Reserved.
                                                                 Where t_sdmclk is the sdmclk clock periodRefer to the Data Timeout. Error
                                                                 (EMMC_HOST_SRS_SRS12[EDT]) register for information on factors which generate data timeouts. */
        uint32_t sdcfsl                : 8;  /**< [ 15:  8](R/W) SDCLK Frequency Select (lower part). This register and EMMC_HOST_SRS_SRS11[SDCFSH] are used to
                                                                 calculate frequency of SDCLK clock. The SDCLK frequency is calculated with following expressions:
                                                                 - sdclk = sdmclk; when (N=0)
                                                                 - sdclk = sdmclk/2N; when (N\>0)
                                                                 Variable N is concatenation of EMMC_HOST_SRS_SRS11[SDCFSH] and EMMC_HOST_SRS_SRS11[SDCFSL]. The
                                                                 value of SDCFSL, SDCFSH registers can be changed only when EMMC_HOST_SRS_SRS11[SDCE] (SD Clock
                                                                 Enable)=0. */
        uint32_t sdcfsh                : 2;  /**< [  7:  6](R/W) SDCLK Frequency Select (higher part). This register is an extension to SDCFSL. */
        uint32_t reserved_3_5          : 3;
        uint32_t sdce                  : 1;  /**< [  2:  2](R/W) SD Clock Enable. When set to 1, SDCLK clock is enabled. When cleared to 0, SDCLK clock is stopped.
                                                                 The host clears SDCE automatically when card is removed from the slot (i.e. after the high to low
                                                                 transition on \textit{pad_mem_ctrl_0} pad). The SDCLK clock should be stopped by the software when
                                                                 changing the clock divider (i.e. SDCE bit will be cleared before writing
                                                                 EMMC_HOST_SRS_SRS11[SDCFSL], EMMC_HOST_SRS_SRS11[SDCFSH]). */
        uint32_t ics                   : 1;  /**< [  1:  1](RO) Internal Clock Stable. When read as 1, indicates that the clock on sdmclk pin of the host is
                                                                 stable after setting ICE to 1. When read as 0, indicates that the clock is not stable yet (for
                                                                 example the external PLL that generates the clock is not yet locked). The value of ICS is equal
                                                                 to the actual signal level on ics pin of the host. The user will connect ics to the external PLL
                                                                 if required. Otherwise, ics should be connected directly to the ice output of the host. */
        uint32_t ice                   : 1;  /**< [  0:  0](R/W) Internal Clock Enable. This field is designated to controls (enable/disable) external clock
                                                                 generator (e.g. PLL). The ICE bits of every slot are logically OR-ed together and then drive the
                                                                 ice pin. It means, the ice pin is 0 only when ICE in 0 for every slot implemented inside the host.
                                                                 The ice pin is 1 if at least one of the ICE bits is set to 1. When set to 0, the clock on sdmclk
                                                                 pin can be stopped externally. If the sdmclk is stopped, then host goes to a very low power state.
                                                                 The hosts registers are still operable (read and written operation are valid) even if the clock
                                                                 on sdmclk is stopped. Setting of the ICE bit does not affect card detection. It means, the card
                                                                 detection works even if the clock on sdmclk is stopped. */
#else /* Word 0 - Little Endian */
        uint32_t ice                   : 1;  /**< [  0:  0](R/W) Internal Clock Enable. This field is designated to controls (enable/disable) external clock
                                                                 generator (e.g. PLL). The ICE bits of every slot are logically OR-ed together and then drive the
                                                                 ice pin. It means, the ice pin is 0 only when ICE in 0 for every slot implemented inside the host.
                                                                 The ice pin is 1 if at least one of the ICE bits is set to 1. When set to 0, the clock on sdmclk
                                                                 pin can be stopped externally. If the sdmclk is stopped, then host goes to a very low power state.
                                                                 The hosts registers are still operable (read and written operation are valid) even if the clock
                                                                 on sdmclk is stopped. Setting of the ICE bit does not affect card detection. It means, the card
                                                                 detection works even if the clock on sdmclk is stopped. */
        uint32_t ics                   : 1;  /**< [  1:  1](RO) Internal Clock Stable. When read as 1, indicates that the clock on sdmclk pin of the host is
                                                                 stable after setting ICE to 1. When read as 0, indicates that the clock is not stable yet (for
                                                                 example the external PLL that generates the clock is not yet locked). The value of ICS is equal
                                                                 to the actual signal level on ics pin of the host. The user will connect ics to the external PLL
                                                                 if required. Otherwise, ics should be connected directly to the ice output of the host. */
        uint32_t sdce                  : 1;  /**< [  2:  2](R/W) SD Clock Enable. When set to 1, SDCLK clock is enabled. When cleared to 0, SDCLK clock is stopped.
                                                                 The host clears SDCE automatically when card is removed from the slot (i.e. after the high to low
                                                                 transition on \textit{pad_mem_ctrl_0} pad). The SDCLK clock should be stopped by the software when
                                                                 changing the clock divider (i.e. SDCE bit will be cleared before writing
                                                                 EMMC_HOST_SRS_SRS11[SDCFSL], EMMC_HOST_SRS_SRS11[SDCFSH]). */
        uint32_t reserved_3_5          : 3;
        uint32_t sdcfsh                : 2;  /**< [  7:  6](R/W) SDCLK Frequency Select (higher part). This register is an extension to SDCFSL. */
        uint32_t sdcfsl                : 8;  /**< [ 15:  8](R/W) SDCLK Frequency Select (lower part). This register and EMMC_HOST_SRS_SRS11[SDCFSH] are used to
                                                                 calculate frequency of SDCLK clock. The SDCLK frequency is calculated with following expressions:
                                                                 - sdclk = sdmclk; when (N=0)
                                                                 - sdclk = sdmclk/2N; when (N\>0)
                                                                 Variable N is concatenation of EMMC_HOST_SRS_SRS11[SDCFSH] and EMMC_HOST_SRS_SRS11[SDCFSL]. The
                                                                 value of SDCFSL, SDCFSH registers can be changed only when EMMC_HOST_SRS_SRS11[SDCE] (SD Clock
                                                                 Enable)=0. */
        uint32_t dtcv                  : 4;  /**< [ 19: 16](R/W) Data Timeout Counter Value. This value determines the interval by which DAT line timeouts are
                                                                 detected. The interval can be computed as below:
                                                                 0x0 =  t_sdmclk*2^(13+2).
                                                                 0x1 =  t_sdmclk*2^(14+2).
                                                                 0x2 =  t_sdmclk*2^(15+2).
                                                                 ..
                                                                 0xD =  t_sdmclk*2^(26+2).
                                                                 0xE =  t_sdmclk*2^(27+2).
                                                                 0xF =  Reserved.
                                                                 Where t_sdmclk is the sdmclk clock periodRefer to the Data Timeout. Error
                                                                 (EMMC_HOST_SRS_SRS12[EDT]) register for information on factors which generate data timeouts. */
        uint32_t reserved_20_23        : 4;
        uint32_t srfa                  : 1;  /**< [ 24: 24](R/W1S) Software Reset For All. When set to 1, the entire slot is reset.After completing the reset
                                                                 operation, SRFA bit is automatically cleared. It takes some time to complete the reset operation,
                                                                 so the software will wait until SRFA=0, and continue the other operations only when SRFA=0.
                                                                 Additionally, after SRFA, software should reset and reinitialize card inserted to the slot. SD
                                                                 Card Power may be enabled 1 ms after this bit is cleared to ensure SD Card has been reset properly. */
        uint32_t srcmd                 : 1;  /**< [ 25: 25](R/W1S) Software Reset For CMD Line. When set to 1, resets the logic related to the command generation
                                                                 and response checking. The following registers and bits are cleared:
                                                                 EMMC_HOST_SRS_SRS09 register: Command Inhibit CMD
                                                                 EMMC_HOST_SRS_SRS12 register: Command Complete
                                                                 After completing the reset operation, EMMC_HOST_SRS_SRS11[SRCMD] bit is automatically cleared. It
                                                                 takes some time to complete the reset operation, so the software will wait until SRCMD=0, and
                                                                 continue the other operations only when EMMC_HOST_SRS_SRS11[SRCMD]=0. */
        uint32_t srdat                 : 1;  /**< [ 26: 26](R/W1S) Software Reset For DAT Line. When set to 1, resets the logic related to the data path, including
                                                                 data buffers and the DMA logic. The following registers and bits are cleared:
                                                                 EMMC_HOST_SRS_SRS08 register:
                                                                       Buffer
                                                                 EMMC_HOST_SRS_SRS09 register:
                                                                       Buffer Read Enable
                                                                       Buffer Write Enable
                                                                       Read Transfer Active
                                                                       Write Transfer Active
                                                                       DAT Line Active
                                                                       Command Inhibit
                                                                 DATSRS10 register:
                                                                       Continue Request
                                                                       Stop At Block Gap Request
                                                                 EMMC_HOST_SRS_SRS12 register:
                                                                       Buffer Read Ready
                                                                       Buffer Write Ready
                                                                       DMA Interrupt
                                                                       Block Gap Event
                                                                       Transfer Complete
                                                                 After completing the reset operation, EMMC_HOST_SRS_SRS11[SRDAT] bit is automatically cleared. It
                                                                 takes some time to complete the reset operation, so the software will wait until
                                                                 EMMC_HOST_SRS_SRS11[SRDAT]=0, and continue the other operations only when
                                                                 EMMC_HOST_SRS_SRS11[SRDAT]=0. */
        uint32_t reserved_27_31        : 5;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_emmcx_host_srs_srs11_s cn; */
};
typedef union cavm_emmcx_host_srs_srs11 cavm_emmcx_host_srs_srs11_t;

static inline uint64_t CAVM_EMMCX_HOST_SRS_SRS11(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_EMMCX_HOST_SRS_SRS11(uint64_t a)
{
    if (a==0)
        return 0x82400000022cll + 0x1000000ll * ((a) & 0x0);
    __cavm_csr_fatal("EMMCX_HOST_SRS_SRS11", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_EMMCX_HOST_SRS_SRS11(a) cavm_emmcx_host_srs_srs11_t
#define bustype_CAVM_EMMCX_HOST_SRS_SRS11(a) CSR_TYPE_NCB32b
#define basename_CAVM_EMMCX_HOST_SRS_SRS11(a) "EMMCX_HOST_SRS_SRS11"
#define device_bar_CAVM_EMMCX_HOST_SRS_SRS11(a) 0x0 /* PF_BAR0 */
#define busnum_CAVM_EMMCX_HOST_SRS_SRS11(a) (a)
#define arguments_CAVM_EMMCX_HOST_SRS_SRS11(a) (a),-1,-1,-1

/**
 * Register (NCB32b) emmc#_host_srs_srs12
 *
 * EMMC Host Error/Normal Interrupt Statu Register
 */
union cavm_emmcx_host_srs_srs12
{
    uint32_t u;
    struct cavm_emmcx_host_srs_srs12_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t reserved_28_31        : 4;
        uint32_t ersp                  : 1;  /**< [ 27: 27](R/W1C) Response Error. Generated on error detection inside R1 or R5 response. Errors will be checked
                                                                 only if RECE is set 1. */
        uint32_t reserved_26           : 1;
        uint32_t eadma                 : 1;  /**< [ 25: 25](R/W1C) ADMA Error. Generated when an error occurs during ADMA read or write transfer. To resolve the
                                                                 cause of the error, the state of the ADMA engine at error occurrence is saved in ADMA Error Status
                                                                 register, and the address of the descriptor processed at error occurrence is provided in ADMA
                                                                 System Address register. */
        uint32_t eac                   : 1;  /**< [ 24: 24](R/W1C) Auto CMD Error (SD mode only). Generated when an error occurs during Auto CMD12/Auto CMD23 command
                                                                 transmission. It indicates one of the following conditions:
                                                                 - one of the bits in EMMC_HOST_SRS_SRS15 register has changed from 0 to 1,
                                                                 - Auto CMD12 is not executed due to the previous command error. */
        uint32_t ecl                   : 1;  /**< [ 23: 23](R/W1C) Current Limit Error. This fields carries an error/failure reported on the \textit{pad_cle} input
                                                                 pad of the Host Controller. The error/failure generation is located outside of this soft IP.
                                                                 Note: If the external power supply for SD/eMMC device does not monitor and report this type of
                                                                 error, connect the Current Limit Error (\textit{sdphy_dfi_cle} input of the Host Controller core)
                                                                 to 0. */
        uint32_t edeb                  : 1;  /**< [ 22: 22](R/W1C) Data End Bit Error (SD mode only). When set to 1, indicates detecting 0 at the end bit position of
                                                                 read data transfer which uses the DAT line, or at the end bit position of the Write CRC Status. */
        uint32_t edcrc                 : 1;  /**< [ 21: 21](R/W1C) Data CRC Error (SD mode only). When set to 1, indicates detecting CRC error when transferring
                                                                 read data which uses the DAT line, or when detecting the Write CRC status having a value of other
                                                                 than 010. This bit will be set to 1 immediately when conflict on CMD line detected. The conflict
                                                                 is signalized by setting this bit and EMMC_HOST_SRS_SRS12[EDT] to 1. */
        uint32_t edt                   : 1;  /**< [ 20: 20](R/W1C) Data Timeout Error (SD mode only). When set to 1, indicates detecting one of the following timeout
                                                                 conditions:
                                                                 1. Busy timeout for the response with busy.
                                                                 2. Busy timeout after Write CRC status.
                                                                 3. Write CRC Status timeout.
                                                                 4. Read data timeout.
                                                                 This bit will be set to 1 immediately when conflict on CMD line conflict detected. */
        uint32_t eci                   : 1;  /**< [ 19: 19](R/W1C) Command Index Error (SD mode only). When set to 1, indicates that Index error occurs in the
                                                                 command response. */
        uint32_t eceb                  : 1;  /**< [ 18: 18](R/W1C) Command End Bit Error (SD mode only). When set to 1, indicates detecting that the end bit of a
                                                                 command response is 0. */
        uint32_t eccrc                 : 1;  /**< [ 17: 17](R/W1C) Command CRC Error (SD mode only). When set to 1, indicates that command CRC error has occurred. */
        uint32_t ect                   : 1;  /**< [ 16: 16](R/W1C) Command Timeout Error. When set to 1, indicates that no response was returned within 64 SDCLK
                                                                 cycles from the end bit of the command. */
        uint32_t eint                  : 1;  /**< [ 15: 15](RO) Error Interrupt. This bit is set if any of bits in range EMMC_HOST_SRS_SRS12[31:16] is set; The
                                                                 software can check for an error by reading this single bit first. */
        uint32_t cqint                 : 1;  /**< [ 14: 14](RO) Command Queuing Interrupt. This interrupt is asserted when at least one of the bits in CQIS
                                                                 register is set. This interrupt is cleared only by clearing the source interrupt in CQIS register. */
        uint32_t fxe                   : 1;  /**< [ 13: 13](RO) FX Event. If EMMC_HOST_SRS_SRS03[RECE] is set to 1, and EMMC_HOST_SRS_SRS03[RECT] is set to 0 this
                                                                 interrupt indicates that 14th bit of response stored as 6th bit of EMMC_HOST_SRS_SRS04 register is
                                                                 set to 1. If EMMC_HOST_SRS_SRS03[RECE] is set to 1 only next response with type R1 containing card
                                                                 status bit 14th equal 0 can clean this interrupt. If EMMC_HOST_SRS_SRS03[RECE] is set to 0, this
                                                                 interrupt indicates that 14th bit of response stored as 6th bit of EMMC_HOST_SRS_SRS04 register is
                                                                 set to 1 except cases:
                                                                 1. Argument of CMD13 bit 15 is equal 1 - then response won't change value of this interrupt.
                                                                 2. Issued command does not have a response - then value of this interrupt won't change. */
        uint32_t reserved_9_12         : 4;
        uint32_t cint                  : 1;  /**< [  8:  8](RO) Card Interrupt. Indicates the card interrupt. CINT is not sampled by the card clock, so the
                                                                 interrupt can be detected even with SD clock stopped (EMMC_HOST_SRS_SRS11[SDCE]=0). Also, CINT is
                                                                 not cleared by writing 1. Instead, the software will clear the source of an interrupt inside the
                                                                 card. After detecting the Card Interrupt, the software will stop further interrupt detection by
                                                                 clearing EMMC_HOST_SRS_SRS13[CINT_SE] to 0. Then, the software will clear the interrupt source
                                                                 inside the card by using the appropriate commands. For the details, please refer to the SDIO Card
                                                                 Specification. After clearing the interrupt source, the card will stop to drive the interrupt
                                                                 signal to the host. Finally, when the interrupt service routine is finished, the interrupt
                                                                 detection can be enabled by setting EMMC_HOST_SRS_SRS13[CINT_SE] back to 1. */
        uint32_t cr                    : 1;  /**< [  7:  7](R/W1C) Card Removal. Generated when the EMMC_HOST_SRS_SRS09[CI] bit changes from 1 to 0, indicating card
                                                                 removal event. When read as 1, indicates that the card was removed from the slot. When read as 0,
                                                                 indicates that the card state is stable (still inserted or removed) or that the debouncing is in
                                                                 progress. */
        uint32_t cin                   : 1;  /**< [  6:  6](R/W1C) Card Insertion.Generated when the EMMC_HOST_SRS_SRS09[CI] bit changes from 0 to 1, indicating card
                                                                 insertion. When read as 1, indicates that the card was inserted to the slot. When read as 0,
                                                                 indicates that the card state is stable (still inserted or removed) or that the debouncing is in
                                                                 progress. */
        uint32_t brr                   : 1;  /**< [  5:  5](R/W1C) Buffer Read Ready. Generated when the BRE changes from 0 to 1, indicating that the data buffer can
                                                                 be read by the software. This field works differently in the SD Tuning Sequence, i.e. when Sampling
                                                                 Clock Select (EMMC_HOST_SRS_SRS15[SCS]) equals 1. It is set to 1 on the tune step completion
                                                                 despite of the step's result. As per the Standard, during the SD tuning, none of the interrupts is
                                                                 notified except Buffer Read Ready. */
        uint32_t bwr                   : 1;  /**< [  4:  4](R/W1C) Buffer Write Ready. Generated when the BWE changes from 0 to 1, indicating that the data buffer
                                                                 can be written by the software. */
        uint32_t dmaint                : 1;  /**< [  3:  3](R/W1C) DMA Interrupt. In SDMA mode, DMA interrupt is generated when the host controller detects the Host
                                                                 SDMA Buffer boundary. In ADMA mode, DMA interrupt is generated when the INT flag is set in a
                                                                 currently serviced ADMA descriptor. */
        uint32_t bge                   : 1;  /**< [  2:  2](R/W1C) Block Gap Event. Generated when the read/write transaction is stopped at a block gap as the
                                                                 result of setting EMMC_HOST_SRS_SRS10[SBGR] to 1. */
        uint32_t tc                    : 1;  /**< [  1:  1](R/W1C) Transfer Complete. SD Mode: Generated when the transfer which uses the DAT line is complete.
                                                                 Transfers which use the DAT line include the read/write transfers and commands with a busy
                                                                 response. In case of the read transfer, TC indicates that the entire data was transferred from
                                                                 the card to the host system (i.e. the host FIFO is empty after reading the last data block).
                                                                 In case of the write transfer, TC indicates that the entire data was transferred from the host
                                                                 to the card (i.e. the host FIFO is empty after writing the last data block), and the card accepted
                                                                 the data (busy signal released after the last block). In the case of the command with a busy
                                                                 response, TC indicates that the busy signal is released after the response. */
        uint32_t cc                    : 1;  /**< [  0:  0](R/W1C) Command Complete. Generated when the end bit of the response is received, except the response for
                                                                 Auto-CMD12 command. Auto-CMD12 command does not generate CC. */
#else /* Word 0 - Little Endian */
        uint32_t cc                    : 1;  /**< [  0:  0](R/W1C) Command Complete. Generated when the end bit of the response is received, except the response for
                                                                 Auto-CMD12 command. Auto-CMD12 command does not generate CC. */
        uint32_t tc                    : 1;  /**< [  1:  1](R/W1C) Transfer Complete. SD Mode: Generated when the transfer which uses the DAT line is complete.
                                                                 Transfers which use the DAT line include the read/write transfers and commands with a busy
                                                                 response. In case of the read transfer, TC indicates that the entire data was transferred from
                                                                 the card to the host system (i.e. the host FIFO is empty after reading the last data block).
                                                                 In case of the write transfer, TC indicates that the entire data was transferred from the host
                                                                 to the card (i.e. the host FIFO is empty after writing the last data block), and the card accepted
                                                                 the data (busy signal released after the last block). In the case of the command with a busy
                                                                 response, TC indicates that the busy signal is released after the response. */
        uint32_t bge                   : 1;  /**< [  2:  2](R/W1C) Block Gap Event. Generated when the read/write transaction is stopped at a block gap as the
                                                                 result of setting EMMC_HOST_SRS_SRS10[SBGR] to 1. */
        uint32_t dmaint                : 1;  /**< [  3:  3](R/W1C) DMA Interrupt. In SDMA mode, DMA interrupt is generated when the host controller detects the Host
                                                                 SDMA Buffer boundary. In ADMA mode, DMA interrupt is generated when the INT flag is set in a
                                                                 currently serviced ADMA descriptor. */
        uint32_t bwr                   : 1;  /**< [  4:  4](R/W1C) Buffer Write Ready. Generated when the BWE changes from 0 to 1, indicating that the data buffer
                                                                 can be written by the software. */
        uint32_t brr                   : 1;  /**< [  5:  5](R/W1C) Buffer Read Ready. Generated when the BRE changes from 0 to 1, indicating that the data buffer can
                                                                 be read by the software. This field works differently in the SD Tuning Sequence, i.e. when Sampling
                                                                 Clock Select (EMMC_HOST_SRS_SRS15[SCS]) equals 1. It is set to 1 on the tune step completion
                                                                 despite of the step's result. As per the Standard, during the SD tuning, none of the interrupts is
                                                                 notified except Buffer Read Ready. */
        uint32_t cin                   : 1;  /**< [  6:  6](R/W1C) Card Insertion.Generated when the EMMC_HOST_SRS_SRS09[CI] bit changes from 0 to 1, indicating card
                                                                 insertion. When read as 1, indicates that the card was inserted to the slot. When read as 0,
                                                                 indicates that the card state is stable (still inserted or removed) or that the debouncing is in
                                                                 progress. */
        uint32_t cr                    : 1;  /**< [  7:  7](R/W1C) Card Removal. Generated when the EMMC_HOST_SRS_SRS09[CI] bit changes from 1 to 0, indicating card
                                                                 removal event. When read as 1, indicates that the card was removed from the slot. When read as 0,
                                                                 indicates that the card state is stable (still inserted or removed) or that the debouncing is in
                                                                 progress. */
        uint32_t cint                  : 1;  /**< [  8:  8](RO) Card Interrupt. Indicates the card interrupt. CINT is not sampled by the card clock, so the
                                                                 interrupt can be detected even with SD clock stopped (EMMC_HOST_SRS_SRS11[SDCE]=0). Also, CINT is
                                                                 not cleared by writing 1. Instead, the software will clear the source of an interrupt inside the
                                                                 card. After detecting the Card Interrupt, the software will stop further interrupt detection by
                                                                 clearing EMMC_HOST_SRS_SRS13[CINT_SE] to 0. Then, the software will clear the interrupt source
                                                                 inside the card by using the appropriate commands. For the details, please refer to the SDIO Card
                                                                 Specification. After clearing the interrupt source, the card will stop to drive the interrupt
                                                                 signal to the host. Finally, when the interrupt service routine is finished, the interrupt
                                                                 detection can be enabled by setting EMMC_HOST_SRS_SRS13[CINT_SE] back to 1. */
        uint32_t reserved_9_12         : 4;
        uint32_t fxe                   : 1;  /**< [ 13: 13](RO) FX Event. If EMMC_HOST_SRS_SRS03[RECE] is set to 1, and EMMC_HOST_SRS_SRS03[RECT] is set to 0 this
                                                                 interrupt indicates that 14th bit of response stored as 6th bit of EMMC_HOST_SRS_SRS04 register is
                                                                 set to 1. If EMMC_HOST_SRS_SRS03[RECE] is set to 1 only next response with type R1 containing card
                                                                 status bit 14th equal 0 can clean this interrupt. If EMMC_HOST_SRS_SRS03[RECE] is set to 0, this
                                                                 interrupt indicates that 14th bit of response stored as 6th bit of EMMC_HOST_SRS_SRS04 register is
                                                                 set to 1 except cases:
                                                                 1. Argument of CMD13 bit 15 is equal 1 - then response won't change value of this interrupt.
                                                                 2. Issued command does not have a response - then value of this interrupt won't change. */
        uint32_t cqint                 : 1;  /**< [ 14: 14](RO) Command Queuing Interrupt. This interrupt is asserted when at least one of the bits in CQIS
                                                                 register is set. This interrupt is cleared only by clearing the source interrupt in CQIS register. */
        uint32_t eint                  : 1;  /**< [ 15: 15](RO) Error Interrupt. This bit is set if any of bits in range EMMC_HOST_SRS_SRS12[31:16] is set; The
                                                                 software can check for an error by reading this single bit first. */
        uint32_t ect                   : 1;  /**< [ 16: 16](R/W1C) Command Timeout Error. When set to 1, indicates that no response was returned within 64 SDCLK
                                                                 cycles from the end bit of the command. */
        uint32_t eccrc                 : 1;  /**< [ 17: 17](R/W1C) Command CRC Error (SD mode only). When set to 1, indicates that command CRC error has occurred. */
        uint32_t eceb                  : 1;  /**< [ 18: 18](R/W1C) Command End Bit Error (SD mode only). When set to 1, indicates detecting that the end bit of a
                                                                 command response is 0. */
        uint32_t eci                   : 1;  /**< [ 19: 19](R/W1C) Command Index Error (SD mode only). When set to 1, indicates that Index error occurs in the
                                                                 command response. */
        uint32_t edt                   : 1;  /**< [ 20: 20](R/W1C) Data Timeout Error (SD mode only). When set to 1, indicates detecting one of the following timeout
                                                                 conditions:
                                                                 1. Busy timeout for the response with busy.
                                                                 2. Busy timeout after Write CRC status.
                                                                 3. Write CRC Status timeout.
                                                                 4. Read data timeout.
                                                                 This bit will be set to 1 immediately when conflict on CMD line conflict detected. */
        uint32_t edcrc                 : 1;  /**< [ 21: 21](R/W1C) Data CRC Error (SD mode only). When set to 1, indicates detecting CRC error when transferring
                                                                 read data which uses the DAT line, or when detecting the Write CRC status having a value of other
                                                                 than 010. This bit will be set to 1 immediately when conflict on CMD line detected. The conflict
                                                                 is signalized by setting this bit and EMMC_HOST_SRS_SRS12[EDT] to 1. */
        uint32_t edeb                  : 1;  /**< [ 22: 22](R/W1C) Data End Bit Error (SD mode only). When set to 1, indicates detecting 0 at the end bit position of
                                                                 read data transfer which uses the DAT line, or at the end bit position of the Write CRC Status. */
        uint32_t ecl                   : 1;  /**< [ 23: 23](R/W1C) Current Limit Error. This fields carries an error/failure reported on the \textit{pad_cle} input
                                                                 pad of the Host Controller. The error/failure generation is located outside of this soft IP.
                                                                 Note: If the external power supply for SD/eMMC device does not monitor and report this type of
                                                                 error, connect the Current Limit Error (\textit{sdphy_dfi_cle} input of the Host Controller core)
                                                                 to 0. */
        uint32_t eac                   : 1;  /**< [ 24: 24](R/W1C) Auto CMD Error (SD mode only). Generated when an error occurs during Auto CMD12/Auto CMD23 command
                                                                 transmission. It indicates one of the following conditions:
                                                                 - one of the bits in EMMC_HOST_SRS_SRS15 register has changed from 0 to 1,
                                                                 - Auto CMD12 is not executed due to the previous command error. */
        uint32_t eadma                 : 1;  /**< [ 25: 25](R/W1C) ADMA Error. Generated when an error occurs during ADMA read or write transfer. To resolve the
                                                                 cause of the error, the state of the ADMA engine at error occurrence is saved in ADMA Error Status
                                                                 register, and the address of the descriptor processed at error occurrence is provided in ADMA
                                                                 System Address register. */
        uint32_t reserved_26           : 1;
        uint32_t ersp                  : 1;  /**< [ 27: 27](R/W1C) Response Error. Generated on error detection inside R1 or R5 response. Errors will be checked
                                                                 only if RECE is set 1. */
        uint32_t reserved_28_31        : 4;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_emmcx_host_srs_srs12_s cn; */
};
typedef union cavm_emmcx_host_srs_srs12 cavm_emmcx_host_srs_srs12_t;

static inline uint64_t CAVM_EMMCX_HOST_SRS_SRS12(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_EMMCX_HOST_SRS_SRS12(uint64_t a)
{
    if (a==0)
        return 0x824000000230ll + 0x1000000ll * ((a) & 0x0);
    __cavm_csr_fatal("EMMCX_HOST_SRS_SRS12", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_EMMCX_HOST_SRS_SRS12(a) cavm_emmcx_host_srs_srs12_t
#define bustype_CAVM_EMMCX_HOST_SRS_SRS12(a) CSR_TYPE_NCB32b
#define basename_CAVM_EMMCX_HOST_SRS_SRS12(a) "EMMCX_HOST_SRS_SRS12"
#define device_bar_CAVM_EMMCX_HOST_SRS_SRS12(a) 0x0 /* PF_BAR0 */
#define busnum_CAVM_EMMCX_HOST_SRS_SRS12(a) (a)
#define arguments_CAVM_EMMCX_HOST_SRS_SRS12(a) (a),-1,-1,-1

/**
 * Register (NCB32b) emmc#_host_srs_srs13
 *
 * EMMC Host Error/Normal Status Enable Register
 */
union cavm_emmcx_host_srs_srs13
{
    uint32_t u;
    struct cavm_emmcx_host_srs_srs13_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t reserved_28_31        : 4;
        uint32_t ersp_se               : 1;  /**< [ 27: 27](R/W) ERSP_SE. Response Error Status Enable (SD mode only)
                                                                 0 = masked.
                                                                 1 = enabled. */
        uint32_t reserved_26           : 1;
        uint32_t eadma_se              : 1;  /**< [ 25: 25](R/W) EADMA_SE. ADMA Error Status Enable (SD mode only)
                                                                 0 = masked.
                                                                 1 = enabled. */
        uint32_t eac_se                : 1;  /**< [ 24: 24](R/W) EAC_SE. Auto CMD Error Status Enable (SD mode only)
                                                                 0 = masked.
                                                                 1 = enabled. */
        uint32_t ecl_se                : 1;  /**< [ 23: 23](R/W) ECL_SE. Current Limit Error Status Enable (SD mode only)
                                                                 0 = masked.
                                                                 1 = enabled. */
        uint32_t edeb_se               : 1;  /**< [ 22: 22](R/W) EDEB_SE. Data End Bit Error Status Enable (SD mode only)
                                                                 0 = masked.
                                                                 1 = enabled. */
        uint32_t edcrc_se              : 1;  /**< [ 21: 21](R/W) EDCRC_SE. Data CRC Error Status Enable (SD mode only)
                                                                 0 = masked.
                                                                 1 = enabled. */
        uint32_t edt_se                : 1;  /**< [ 20: 20](R/W) EDT_SE. Data Timeout Error Status Enable (SD mode only)
                                                                 0 = masked.
                                                                 1 = enabled. */
        uint32_t eci_se                : 1;  /**< [ 19: 19](R/W) ECI_SE. Command Index Error Status Enable (SD mode only)
                                                                 0 = masked.
                                                                 1 = enabled. */
        uint32_t eceb_se               : 1;  /**< [ 18: 18](R/W) ECEB_SE. Command End Bit Error Status Enable (SD mode only)
                                                                 0 = masked.
                                                                 1 = enabled. */
        uint32_t eccrc_se              : 1;  /**< [ 17: 17](R/W) ECCRC_SE. Command CRC Error Status Enable (SD mode only)
                                                                 0 = masked.
                                                                 1 = enabled. */
        uint32_t ect_se                : 1;  /**< [ 16: 16](R/W) ECT_SE. Command Timeout Error Status Enable (SD mode only)
                                                                 0 = masked.
                                                                 1 = enabled. */
        uint32_t reserved_15           : 1;
        uint32_t cqint_se              : 1;  /**< [ 14: 14](R/W) CQINT_SE. Command Queuing Status Enable
                                                                 0 = masked.
                                                                 1 = enabled. */
        uint32_t fxe_se                : 1;  /**< [ 13: 13](R/W) FXE_SE. FX Event Status Enable
                                                                 0 = masked.
                                                                 1 = enabled. */
        uint32_t reserved_9_12         : 4;
        uint32_t cint_se               : 1;  /**< [  8:  8](R/W) CINT_SE. Card Interrupt Status Enable
                                                                 0 = masked.
                                                                 1 = enabled. */
        uint32_t cr_se                 : 1;  /**< [  7:  7](R/W) CR_SE. Card Removal Status Enable
                                                                 0 = masked.
                                                                 1 = enabled. */
        uint32_t cin_se                : 1;  /**< [  6:  6](R/W) CIN_SE. Card Insertion Status Enable
                                                                 0 = masked.
                                                                 1 = enabled. */
        uint32_t brr_se                : 1;  /**< [  5:  5](R/W) BRR_SE. Buffer Read Ready Status Enable
                                                                 0 = masked.
                                                                 1 = enabled. */
        uint32_t bwr_se                : 1;  /**< [  4:  4](R/W) BWR_SE. Buffer Write Ready Status Enable
                                                                 0 = masked.
                                                                 1 = enabled. */
        uint32_t dmaint_se             : 1;  /**< [  3:  3](R/W) DMAINT_SE. DMA Interrupt Status Enable
                                                                 0 = masked.
                                                                 1 = enabled. */
        uint32_t bge_se                : 1;  /**< [  2:  2](R/W) BGE_SE. Block Gap Event Status Enable
                                                                 0 = masked.
                                                                 1 = enabled. */
        uint32_t tc_se                 : 1;  /**< [  1:  1](R/W) TC_SE. Transfer Complete Status Enable
                                                                 0 = masked.
                                                                 1 = enabled. */
        uint32_t cc_se                 : 1;  /**< [  0:  0](R/W) CC_SE. Command Complete Status Enable
                                                                 0 = masked.
                                                                 1 = enabled. */
#else /* Word 0 - Little Endian */
        uint32_t cc_se                 : 1;  /**< [  0:  0](R/W) CC_SE. Command Complete Status Enable
                                                                 0 = masked.
                                                                 1 = enabled. */
        uint32_t tc_se                 : 1;  /**< [  1:  1](R/W) TC_SE. Transfer Complete Status Enable
                                                                 0 = masked.
                                                                 1 = enabled. */
        uint32_t bge_se                : 1;  /**< [  2:  2](R/W) BGE_SE. Block Gap Event Status Enable
                                                                 0 = masked.
                                                                 1 = enabled. */
        uint32_t dmaint_se             : 1;  /**< [  3:  3](R/W) DMAINT_SE. DMA Interrupt Status Enable
                                                                 0 = masked.
                                                                 1 = enabled. */
        uint32_t bwr_se                : 1;  /**< [  4:  4](R/W) BWR_SE. Buffer Write Ready Status Enable
                                                                 0 = masked.
                                                                 1 = enabled. */
        uint32_t brr_se                : 1;  /**< [  5:  5](R/W) BRR_SE. Buffer Read Ready Status Enable
                                                                 0 = masked.
                                                                 1 = enabled. */
        uint32_t cin_se                : 1;  /**< [  6:  6](R/W) CIN_SE. Card Insertion Status Enable
                                                                 0 = masked.
                                                                 1 = enabled. */
        uint32_t cr_se                 : 1;  /**< [  7:  7](R/W) CR_SE. Card Removal Status Enable
                                                                 0 = masked.
                                                                 1 = enabled. */
        uint32_t cint_se               : 1;  /**< [  8:  8](R/W) CINT_SE. Card Interrupt Status Enable
                                                                 0 = masked.
                                                                 1 = enabled. */
        uint32_t reserved_9_12         : 4;
        uint32_t fxe_se                : 1;  /**< [ 13: 13](R/W) FXE_SE. FX Event Status Enable
                                                                 0 = masked.
                                                                 1 = enabled. */
        uint32_t cqint_se              : 1;  /**< [ 14: 14](R/W) CQINT_SE. Command Queuing Status Enable
                                                                 0 = masked.
                                                                 1 = enabled. */
        uint32_t reserved_15           : 1;
        uint32_t ect_se                : 1;  /**< [ 16: 16](R/W) ECT_SE. Command Timeout Error Status Enable (SD mode only)
                                                                 0 = masked.
                                                                 1 = enabled. */
        uint32_t eccrc_se              : 1;  /**< [ 17: 17](R/W) ECCRC_SE. Command CRC Error Status Enable (SD mode only)
                                                                 0 = masked.
                                                                 1 = enabled. */
        uint32_t eceb_se               : 1;  /**< [ 18: 18](R/W) ECEB_SE. Command End Bit Error Status Enable (SD mode only)
                                                                 0 = masked.
                                                                 1 = enabled. */
        uint32_t eci_se                : 1;  /**< [ 19: 19](R/W) ECI_SE. Command Index Error Status Enable (SD mode only)
                                                                 0 = masked.
                                                                 1 = enabled. */
        uint32_t edt_se                : 1;  /**< [ 20: 20](R/W) EDT_SE. Data Timeout Error Status Enable (SD mode only)
                                                                 0 = masked.
                                                                 1 = enabled. */
        uint32_t edcrc_se              : 1;  /**< [ 21: 21](R/W) EDCRC_SE. Data CRC Error Status Enable (SD mode only)
                                                                 0 = masked.
                                                                 1 = enabled. */
        uint32_t edeb_se               : 1;  /**< [ 22: 22](R/W) EDEB_SE. Data End Bit Error Status Enable (SD mode only)
                                                                 0 = masked.
                                                                 1 = enabled. */
        uint32_t ecl_se                : 1;  /**< [ 23: 23](R/W) ECL_SE. Current Limit Error Status Enable (SD mode only)
                                                                 0 = masked.
                                                                 1 = enabled. */
        uint32_t eac_se                : 1;  /**< [ 24: 24](R/W) EAC_SE. Auto CMD Error Status Enable (SD mode only)
                                                                 0 = masked.
                                                                 1 = enabled. */
        uint32_t eadma_se              : 1;  /**< [ 25: 25](R/W) EADMA_SE. ADMA Error Status Enable (SD mode only)
                                                                 0 = masked.
                                                                 1 = enabled. */
        uint32_t reserved_26           : 1;
        uint32_t ersp_se               : 1;  /**< [ 27: 27](R/W) ERSP_SE. Response Error Status Enable (SD mode only)
                                                                 0 = masked.
                                                                 1 = enabled. */
        uint32_t reserved_28_31        : 4;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_emmcx_host_srs_srs13_s cn; */
};
typedef union cavm_emmcx_host_srs_srs13 cavm_emmcx_host_srs_srs13_t;

static inline uint64_t CAVM_EMMCX_HOST_SRS_SRS13(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_EMMCX_HOST_SRS_SRS13(uint64_t a)
{
    if (a==0)
        return 0x824000000234ll + 0x1000000ll * ((a) & 0x0);
    __cavm_csr_fatal("EMMCX_HOST_SRS_SRS13", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_EMMCX_HOST_SRS_SRS13(a) cavm_emmcx_host_srs_srs13_t
#define bustype_CAVM_EMMCX_HOST_SRS_SRS13(a) CSR_TYPE_NCB32b
#define basename_CAVM_EMMCX_HOST_SRS_SRS13(a) "EMMCX_HOST_SRS_SRS13"
#define device_bar_CAVM_EMMCX_HOST_SRS_SRS13(a) 0x0 /* PF_BAR0 */
#define busnum_CAVM_EMMCX_HOST_SRS_SRS13(a) (a)
#define arguments_CAVM_EMMCX_HOST_SRS_SRS13(a) (a),-1,-1,-1

/**
 * Register (NCB32b) emmc#_host_srs_srs14
 *
 * EMMC Host Error/Normal Signal Enable Register
 */
union cavm_emmcx_host_srs_srs14
{
    uint32_t u;
    struct cavm_emmcx_host_srs_srs14_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t reserved_28_31        : 4;
        uint32_t ersp_ie               : 1;  /**< [ 27: 27](R/W) ERSP_IE. Response Error Interrupt Enable
                                                                 0 = masked.
                                                                 1 = enabled. */
        uint32_t reserved_26           : 1;
        uint32_t eadma_ie              : 1;  /**< [ 25: 25](R/W) EADMA_IE. ADMA Error Interrupt Enable (SD mode only)
                                                                 0 = masked.
                                                                 1 = enabled. */
        uint32_t eac_ie                : 1;  /**< [ 24: 24](R/W) EAC_IE. Auto CMD Error Interrupt Enable (SD mode only)
                                                                 0 = masked.
                                                                 1 = enabled. */
        uint32_t ecl_ie                : 1;  /**< [ 23: 23](R/W) ECL_IE. Current Limit Error Interrupt Enable (SD mode only)
                                                                 0 = masked.
                                                                 1 = enabled. */
        uint32_t edeb_ie               : 1;  /**< [ 22: 22](R/W) EDEB_IE. Data End Bit Error Interrupt Enable (SD mode only)
                                                                 0 = masked.
                                                                 1 = enabled. */
        uint32_t edcrc_ie              : 1;  /**< [ 21: 21](R/W) EDCRC_IE. Data CRC Error Interrupt Enable (SD mode only)
                                                                 0 = masked.
                                                                 1 = enabled. */
        uint32_t edt_ie                : 1;  /**< [ 20: 20](R/W) EDT_IE. Data Timeout Error Interrupt Enable (SD mode only)
                                                                 0 = masked.
                                                                 1 = enabled. */
        uint32_t eci_ie                : 1;  /**< [ 19: 19](R/W) ECI_IE. Command Index Error Interrupt Enable (SD mode only)
                                                                 0 = masked.
                                                                 1 = enabled. */
        uint32_t eceb_ie               : 1;  /**< [ 18: 18](R/W) ECEB_IE. Command End Bit Error Interrupt Enable (SD mode only)
                                                                 0 = masked.
                                                                 1 = enabled. */
        uint32_t eccrc_ie              : 1;  /**< [ 17: 17](R/W) ECCRC_IE. Command CRC Error Interrupt Enable (SD mode only)
                                                                 0 = masked.
                                                                 1 = enabled. */
        uint32_t ect_ie                : 1;  /**< [ 16: 16](R/W) ECT_IE. Command Timeout Error Interrupt Enable (SD mode only)
                                                                 0 = masked.
                                                                 1 = enabled. */
        uint32_t reserved_15           : 1;
        uint32_t cqint_ie              : 1;  /**< [ 14: 14](R/W) CQINT_IE. Command Queuing - Interrupt Enable
                                                                 0 = masked.
                                                                 1 = enabled. */
        uint32_t fxe_ie                : 1;  /**< [ 13: 13](R/W) FXE_IE. FX Event Interrupt Enable
                                                                 0 = masked.
                                                                 1 = enabled. */
        uint32_t reserved_9_12         : 4;
        uint32_t cint_ie               : 1;  /**< [  8:  8](R/W) CINT_IE. Card Interrupt - Interrupt Enable
                                                                 0 = masked.
                                                                 1 = enabled. */
        uint32_t cr_ie                 : 1;  /**< [  7:  7](R/W) CR_IE. Card Removal Interrupt Enable
                                                                 0 = masked.
                                                                 1 = enabled. */
        uint32_t cin_ie                : 1;  /**< [  6:  6](R/W) CIN_IE. Card Insertion Interrupt Enable
                                                                 0 = masked.
                                                                 1 = enabled. */
        uint32_t brr_ie                : 1;  /**< [  5:  5](R/W) BRR_IE. Buffer Read Ready Interrupt Enable
                                                                 0 = masked.
                                                                 1 = enabled. */
        uint32_t bwr_ie                : 1;  /**< [  4:  4](R/W) BWR_IE. Buffer Write Ready Interrupt Enable
                                                                 0 = masked.
                                                                 1 = enabled. */
        uint32_t dmaint_ie             : 1;  /**< [  3:  3](R/W) DMAINT_IE. DMA Interrupt Enable
                                                                 0 = masked.
                                                                 1 = enabled. */
        uint32_t bge_ie                : 1;  /**< [  2:  2](R/W) BGE_IE. Block Gap Event Interrupt Enable
                                                                 0 = masked.
                                                                 1 = enabled. */
        uint32_t tc_ie                 : 1;  /**< [  1:  1](R/W) TC_IE. Transfer Complete Interrupt Enable
                                                                 0 = masked.
                                                                 1 = enabled. */
        uint32_t cc_ie                 : 1;  /**< [  0:  0](R/W) CC_IE. Command Complete Interrupt Enable
                                                                 0 = masked.
                                                                 1 = enabled. */
#else /* Word 0 - Little Endian */
        uint32_t cc_ie                 : 1;  /**< [  0:  0](R/W) CC_IE. Command Complete Interrupt Enable
                                                                 0 = masked.
                                                                 1 = enabled. */
        uint32_t tc_ie                 : 1;  /**< [  1:  1](R/W) TC_IE. Transfer Complete Interrupt Enable
                                                                 0 = masked.
                                                                 1 = enabled. */
        uint32_t bge_ie                : 1;  /**< [  2:  2](R/W) BGE_IE. Block Gap Event Interrupt Enable
                                                                 0 = masked.
                                                                 1 = enabled. */
        uint32_t dmaint_ie             : 1;  /**< [  3:  3](R/W) DMAINT_IE. DMA Interrupt Enable
                                                                 0 = masked.
                                                                 1 = enabled. */
        uint32_t bwr_ie                : 1;  /**< [  4:  4](R/W) BWR_IE. Buffer Write Ready Interrupt Enable
                                                                 0 = masked.
                                                                 1 = enabled. */
        uint32_t brr_ie                : 1;  /**< [  5:  5](R/W) BRR_IE. Buffer Read Ready Interrupt Enable
                                                                 0 = masked.
                                                                 1 = enabled. */
        uint32_t cin_ie                : 1;  /**< [  6:  6](R/W) CIN_IE. Card Insertion Interrupt Enable
                                                                 0 = masked.
                                                                 1 = enabled. */
        uint32_t cr_ie                 : 1;  /**< [  7:  7](R/W) CR_IE. Card Removal Interrupt Enable
                                                                 0 = masked.
                                                                 1 = enabled. */
        uint32_t cint_ie               : 1;  /**< [  8:  8](R/W) CINT_IE. Card Interrupt - Interrupt Enable
                                                                 0 = masked.
                                                                 1 = enabled. */
        uint32_t reserved_9_12         : 4;
        uint32_t fxe_ie                : 1;  /**< [ 13: 13](R/W) FXE_IE. FX Event Interrupt Enable
                                                                 0 = masked.
                                                                 1 = enabled. */
        uint32_t cqint_ie              : 1;  /**< [ 14: 14](R/W) CQINT_IE. Command Queuing - Interrupt Enable
                                                                 0 = masked.
                                                                 1 = enabled. */
        uint32_t reserved_15           : 1;
        uint32_t ect_ie                : 1;  /**< [ 16: 16](R/W) ECT_IE. Command Timeout Error Interrupt Enable (SD mode only)
                                                                 0 = masked.
                                                                 1 = enabled. */
        uint32_t eccrc_ie              : 1;  /**< [ 17: 17](R/W) ECCRC_IE. Command CRC Error Interrupt Enable (SD mode only)
                                                                 0 = masked.
                                                                 1 = enabled. */
        uint32_t eceb_ie               : 1;  /**< [ 18: 18](R/W) ECEB_IE. Command End Bit Error Interrupt Enable (SD mode only)
                                                                 0 = masked.
                                                                 1 = enabled. */
        uint32_t eci_ie                : 1;  /**< [ 19: 19](R/W) ECI_IE. Command Index Error Interrupt Enable (SD mode only)
                                                                 0 = masked.
                                                                 1 = enabled. */
        uint32_t edt_ie                : 1;  /**< [ 20: 20](R/W) EDT_IE. Data Timeout Error Interrupt Enable (SD mode only)
                                                                 0 = masked.
                                                                 1 = enabled. */
        uint32_t edcrc_ie              : 1;  /**< [ 21: 21](R/W) EDCRC_IE. Data CRC Error Interrupt Enable (SD mode only)
                                                                 0 = masked.
                                                                 1 = enabled. */
        uint32_t edeb_ie               : 1;  /**< [ 22: 22](R/W) EDEB_IE. Data End Bit Error Interrupt Enable (SD mode only)
                                                                 0 = masked.
                                                                 1 = enabled. */
        uint32_t ecl_ie                : 1;  /**< [ 23: 23](R/W) ECL_IE. Current Limit Error Interrupt Enable (SD mode only)
                                                                 0 = masked.
                                                                 1 = enabled. */
        uint32_t eac_ie                : 1;  /**< [ 24: 24](R/W) EAC_IE. Auto CMD Error Interrupt Enable (SD mode only)
                                                                 0 = masked.
                                                                 1 = enabled. */
        uint32_t eadma_ie              : 1;  /**< [ 25: 25](R/W) EADMA_IE. ADMA Error Interrupt Enable (SD mode only)
                                                                 0 = masked.
                                                                 1 = enabled. */
        uint32_t reserved_26           : 1;
        uint32_t ersp_ie               : 1;  /**< [ 27: 27](R/W) ERSP_IE. Response Error Interrupt Enable
                                                                 0 = masked.
                                                                 1 = enabled. */
        uint32_t reserved_28_31        : 4;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_emmcx_host_srs_srs14_s cn; */
};
typedef union cavm_emmcx_host_srs_srs14 cavm_emmcx_host_srs_srs14_t;

static inline uint64_t CAVM_EMMCX_HOST_SRS_SRS14(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_EMMCX_HOST_SRS_SRS14(uint64_t a)
{
    if (a==0)
        return 0x824000000238ll + 0x1000000ll * ((a) & 0x0);
    __cavm_csr_fatal("EMMCX_HOST_SRS_SRS14", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_EMMCX_HOST_SRS_SRS14(a) cavm_emmcx_host_srs_srs14_t
#define bustype_CAVM_EMMCX_HOST_SRS_SRS14(a) CSR_TYPE_NCB32b
#define basename_CAVM_EMMCX_HOST_SRS_SRS14(a) "EMMCX_HOST_SRS_SRS14"
#define device_bar_CAVM_EMMCX_HOST_SRS_SRS14(a) 0x0 /* PF_BAR0 */
#define busnum_CAVM_EMMCX_HOST_SRS_SRS14(a) (a)
#define arguments_CAVM_EMMCX_HOST_SRS_SRS14(a) (a),-1,-1,-1

/**
 * Register (NCB32b) emmc#_host_srs_srs15
 *
 * EMMC Host Control 2 / Auto CMD Error Status Register
 */
union cavm_emmcx_host_srs_srs15
{
    uint32_t u;
    struct cavm_emmcx_host_srs_srs15_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t pve                   : 1;  /**< [ 31: 31](R/W) Preset Value Enable. Setting this bit to 1 triggers an automatically update of
                                                                 EMMC_HOST_SRS_SRS11[SDCFSL], EMMC_HOST_SRS_SRS11[SDCFSH], EMMC_HOST_SRS_SRS11[CGS],
                                                                 EMMC_HOST_SRS_SRS15[DSS] registers by the host. Values for an update are taken from
                                                                 EMMC_HOST_SRS_SRS24 - EMMC_HOST_SRS_SRS27 and depends on EMMC_HOST_SRS_SRS15[UMS]. */
        uint32_t reserved_30           : 1;
        uint32_t a64b                  : 1;  /**< [ 29: 29](R/W) 64-bit Addressing. Specifies the addressing mode for DMA ending. This field is ignored when
                                                                 EMMC_HOST_SRS_SRS15[HV4E]=0.
                                                                 0 = 32-bit addressing.
                                                                 1 = 64-bit addressing. */
        uint32_t hv4e                  : 1;  /**< [ 28: 28](R/W) Host Version 4.00 Enable. Selects backward (SD Host 3.00 Version) compatibility mode or SD Host
                                                                 4.00 Version mode.
                                                                 0 = Version 3.00.
                                                                 1 = Version 4.00.
                                                                 The software can select system address register EMMC_HOST_SRS_SRS00 (when this bit is 0) or
                                                                 EMMC_HOST_SRS_SRS23 / EMMC_HOST_SRS_SRS22 (when this bit is 1) for the SDMA engine. */
        uint32_t cmd23e                : 1;  /**< [ 27: 27](R/W) CMD23 Enable. In result of Card Identification process, Host Driver set this bit to 1 if Card
                                                                 supports CMD23 (SCR[33]==1). */
        uint32_t adma2lm               : 1;  /**< [ 26: 26](R/W) ADMA2 Length Mode. This bit selects one of ADMA2 Length Modes either 16-bit or 26-bit.
                                                                 0 = 16-bit Data Length Mode.
                                                                 1 = 26-bit Data Length Mode. */
        uint32_t reserved_25           : 1;
        uint32_t lvsiexec              : 1;  /**< [ 24: 24](R/W) LVS Identification Execution. Setting this field to 1, generates one pulse on SDCLK output. This
                                                                 bit does not change while DAT[2] stays LOW. After detecting DAT[2] is HIGH, this field
                                                                 automatically changes its value to 0 confirming end of the Low Voltage Sequence. */
        uint32_t scs                   : 1;  /**< [ 23: 23](R/W) Sampling Clock Select. The host updates this bit when the tuning procedure is finished. If this bit
                                                                 is set to 1, this means that the tuning procedure is successfully completed. Otherwise it means
                                                                 that procedure failed and clock tuning logic is disabled. This bit is valid only after the
                                                                 procedure is finished.Writing 1 will be ignored. Writing 0 will reset and disable tuning block. */
        uint32_t extng                 : 1;  /**< [ 22: 22](R/W) Execute Tuning. This register controls tuning procedure.The procedure starts when the bit is set 1.
                                                                 The procedure can be aborted when the bit is cleared. The bit is read 1 while the procedure is in
                                                                 progress, and 0 when the procedure is finished.
                                                                 SCS = 0, EXTNG = 0 - Reset and disable clock tuning logic.
                                                                 SCS = 0, EXTNG = 1 - Reset and restart tuning process.
                                                                 SCS = 1, EXTNG = 0 - Stop tuning procedure.
                                                                 SCS = 1, EXTNG = 1 - Start retuning (without clock tuning logic reset). */
        uint32_t dss                   : 2;  /**< [ 21: 20](R/W) Driver Strength Select. This bit controls the electric parameters of I/O driver via
                                                                 \textit{sdphy_dfi_drvss} output of the SD/eMMC Host Controller core). Up to 4 configurations of
                                                                 I/O driver settings can be implemented:
                                                                 0x0 =  Driver Type B (default).
                                                                 0x1 =  Driver Type A.
                                                                 0x2 =  Driver Type C.
                                                                 0x3 =  Driver Type D.
                                                                 The bit is ignored when the V18SE is cleared. */
        uint32_t v18se                 : 1;  /**< [ 19: 19](R/W) 1.8V Signaling Enable. This bit controls I/O signaling voltage level. If the bit is 0 or 1, the
                                                                 I/O uses the 3.3V or 1.8V signaling, respectively. The SW driver will set this bit 1 when UHS-I
                                                                 mode. Depend on the selected SD interface mode, the software will set this field as follows:
                                                                 0 = for Default Speed, High Speed mode.
                                                                 1 = for UHS-I mode. */
        uint32_t ums                   : 3;  /**< [ 18: 16](R/W) UHS Mode Select. Used to select one of UHS-I modes.
                                                                 0x0 = SDR12.
                                                                 0x1 = SDR25.
                                                                 0x2 = SDR50.
                                                                 0x3 = SDR104.
                                                                 0x4 = DDR50.
                                                                 0x5 = Reserved.
                                                                 0x6 = Reserved.
                                                                 0x7 = Reserved.
                                                                 The selected UHS-I mode (when value is in range 000b-100b) will be ignored when V18SE is 0. */
        uint32_t reserved_8_15         : 8;
        uint32_t cniace                : 1;  /**< [  7:  7](RO) Command Not Issued By Auto CMD12 Error. When read as 1, the command was not executed by the Host
                                                                 due to the previous Auto CMD12 error. When Host detects any error during Auto-CMD12, then all
                                                                 further command generation attempts are blocked. The software reset sequence is needed for
                                                                 recovery. Bit is set to 0, when Auto CMD23 Error is detected (any of bits
                                                                 EMMC_HOST_SRS_SRS15[4:1] is set). */
        uint32_t reserved_6            : 1;
        uint32_t acre                  : 1;  /**< [  5:  5](RO) Auto CMD Response Error. When read as 1, means an error is detected in response to Auto Command. */
        uint32_t acie                  : 1;  /**< [  4:  4](RO) Auto CMD Index Error. When read as 1, means that Command Index error occurred in the Auto CMD
                                                                 response. */
        uint32_t acebe                 : 1;  /**< [  3:  3](RO) Auto CMD End Bit Error. When read as 1, indicates that the end bit of the Auto-CMD response is 0. */
        uint32_t acce                  : 1;  /**< [  2:  2](RO) Auto CMD CRC Error. When read as 1, indicates a CRC error was detected in the Auto CMD response
                                                                 or conflict on the CMD lines is detected:
                                                                 ACCE(EMMC_HOST_SRS_SRS15[2])=0, ACTE(EMMC_HOST_SRS_SRS15[1])=0 - No error.
                                                                 ACCE(EMMC_HOST_SRS_SRS15[2])=0, ACTE(EMMC_HOST_SRS_SRS15[1])=1 - Auto CMD Timeout error detected.
                                                                 ACCE(EMMC_HOST_SRS_SRS15[2])=1, ACTE(EMMC_HOST_SRS_SRS15[1])=0 - Auto CMD CRC error detected.
                                                                 ACCE(EMMC_HOST_SRS_SRS15[2])=1, ACTE(EMMC_HOST_SRS_SRS15[1])=1 - Conflict on the CMD line detected. */
        uint32_t acte                  : 1;  /**< [  1:  1](RO) Auto CMD Timeout Error. When read as 1, indicates that there was no response within 64 SDCLK clock
                                                                 cycles from the end bit of the Auto CMD or conflict on the CMD lines is detected (see table in
                                                                 EMMC_HOST_SRS_SRS15[ACCE] field description). If this bit is set to 1, the other error status bits
                                                                 (EMMC_HOST_SRS_SRS15[4:2]) are meaningless. */
        uint32_t acne                  : 1;  /**< [  0:  0](RO) Auto CMD12 Not Executed. When set to 1, means the host cannot issue Auto CMD12 due to some error.
                                                                 If this bit is set to 1, other error status bits (EMMC_HOST_SRS_SRS15[4:1]) are meaningless. Bit
                                                                 is updated with 0, when Auto CMD23 Error is detected (any of bits EMMC_HOST_SRS_SRS15[4:1] is set). */
#else /* Word 0 - Little Endian */
        uint32_t acne                  : 1;  /**< [  0:  0](RO) Auto CMD12 Not Executed. When set to 1, means the host cannot issue Auto CMD12 due to some error.
                                                                 If this bit is set to 1, other error status bits (EMMC_HOST_SRS_SRS15[4:1]) are meaningless. Bit
                                                                 is updated with 0, when Auto CMD23 Error is detected (any of bits EMMC_HOST_SRS_SRS15[4:1] is set). */
        uint32_t acte                  : 1;  /**< [  1:  1](RO) Auto CMD Timeout Error. When read as 1, indicates that there was no response within 64 SDCLK clock
                                                                 cycles from the end bit of the Auto CMD or conflict on the CMD lines is detected (see table in
                                                                 EMMC_HOST_SRS_SRS15[ACCE] field description). If this bit is set to 1, the other error status bits
                                                                 (EMMC_HOST_SRS_SRS15[4:2]) are meaningless. */
        uint32_t acce                  : 1;  /**< [  2:  2](RO) Auto CMD CRC Error. When read as 1, indicates a CRC error was detected in the Auto CMD response
                                                                 or conflict on the CMD lines is detected:
                                                                 ACCE(EMMC_HOST_SRS_SRS15[2])=0, ACTE(EMMC_HOST_SRS_SRS15[1])=0 - No error.
                                                                 ACCE(EMMC_HOST_SRS_SRS15[2])=0, ACTE(EMMC_HOST_SRS_SRS15[1])=1 - Auto CMD Timeout error detected.
                                                                 ACCE(EMMC_HOST_SRS_SRS15[2])=1, ACTE(EMMC_HOST_SRS_SRS15[1])=0 - Auto CMD CRC error detected.
                                                                 ACCE(EMMC_HOST_SRS_SRS15[2])=1, ACTE(EMMC_HOST_SRS_SRS15[1])=1 - Conflict on the CMD line detected. */
        uint32_t acebe                 : 1;  /**< [  3:  3](RO) Auto CMD End Bit Error. When read as 1, indicates that the end bit of the Auto-CMD response is 0. */
        uint32_t acie                  : 1;  /**< [  4:  4](RO) Auto CMD Index Error. When read as 1, means that Command Index error occurred in the Auto CMD
                                                                 response. */
        uint32_t acre                  : 1;  /**< [  5:  5](RO) Auto CMD Response Error. When read as 1, means an error is detected in response to Auto Command. */
        uint32_t reserved_6            : 1;
        uint32_t cniace                : 1;  /**< [  7:  7](RO) Command Not Issued By Auto CMD12 Error. When read as 1, the command was not executed by the Host
                                                                 due to the previous Auto CMD12 error. When Host detects any error during Auto-CMD12, then all
                                                                 further command generation attempts are blocked. The software reset sequence is needed for
                                                                 recovery. Bit is set to 0, when Auto CMD23 Error is detected (any of bits
                                                                 EMMC_HOST_SRS_SRS15[4:1] is set). */
        uint32_t reserved_8_15         : 8;
        uint32_t ums                   : 3;  /**< [ 18: 16](R/W) UHS Mode Select. Used to select one of UHS-I modes.
                                                                 0x0 = SDR12.
                                                                 0x1 = SDR25.
                                                                 0x2 = SDR50.
                                                                 0x3 = SDR104.
                                                                 0x4 = DDR50.
                                                                 0x5 = Reserved.
                                                                 0x6 = Reserved.
                                                                 0x7 = Reserved.
                                                                 The selected UHS-I mode (when value is in range 000b-100b) will be ignored when V18SE is 0. */
        uint32_t v18se                 : 1;  /**< [ 19: 19](R/W) 1.8V Signaling Enable. This bit controls I/O signaling voltage level. If the bit is 0 or 1, the
                                                                 I/O uses the 3.3V or 1.8V signaling, respectively. The SW driver will set this bit 1 when UHS-I
                                                                 mode. Depend on the selected SD interface mode, the software will set this field as follows:
                                                                 0 = for Default Speed, High Speed mode.
                                                                 1 = for UHS-I mode. */
        uint32_t dss                   : 2;  /**< [ 21: 20](R/W) Driver Strength Select. This bit controls the electric parameters of I/O driver via
                                                                 \textit{sdphy_dfi_drvss} output of the SD/eMMC Host Controller core). Up to 4 configurations of
                                                                 I/O driver settings can be implemented:
                                                                 0x0 =  Driver Type B (default).
                                                                 0x1 =  Driver Type A.
                                                                 0x2 =  Driver Type C.
                                                                 0x3 =  Driver Type D.
                                                                 The bit is ignored when the V18SE is cleared. */
        uint32_t extng                 : 1;  /**< [ 22: 22](R/W) Execute Tuning. This register controls tuning procedure.The procedure starts when the bit is set 1.
                                                                 The procedure can be aborted when the bit is cleared. The bit is read 1 while the procedure is in
                                                                 progress, and 0 when the procedure is finished.
                                                                 SCS = 0, EXTNG = 0 - Reset and disable clock tuning logic.
                                                                 SCS = 0, EXTNG = 1 - Reset and restart tuning process.
                                                                 SCS = 1, EXTNG = 0 - Stop tuning procedure.
                                                                 SCS = 1, EXTNG = 1 - Start retuning (without clock tuning logic reset). */
        uint32_t scs                   : 1;  /**< [ 23: 23](R/W) Sampling Clock Select. The host updates this bit when the tuning procedure is finished. If this bit
                                                                 is set to 1, this means that the tuning procedure is successfully completed. Otherwise it means
                                                                 that procedure failed and clock tuning logic is disabled. This bit is valid only after the
                                                                 procedure is finished.Writing 1 will be ignored. Writing 0 will reset and disable tuning block. */
        uint32_t lvsiexec              : 1;  /**< [ 24: 24](R/W) LVS Identification Execution. Setting this field to 1, generates one pulse on SDCLK output. This
                                                                 bit does not change while DAT[2] stays LOW. After detecting DAT[2] is HIGH, this field
                                                                 automatically changes its value to 0 confirming end of the Low Voltage Sequence. */
        uint32_t reserved_25           : 1;
        uint32_t adma2lm               : 1;  /**< [ 26: 26](R/W) ADMA2 Length Mode. This bit selects one of ADMA2 Length Modes either 16-bit or 26-bit.
                                                                 0 = 16-bit Data Length Mode.
                                                                 1 = 26-bit Data Length Mode. */
        uint32_t cmd23e                : 1;  /**< [ 27: 27](R/W) CMD23 Enable. In result of Card Identification process, Host Driver set this bit to 1 if Card
                                                                 supports CMD23 (SCR[33]==1). */
        uint32_t hv4e                  : 1;  /**< [ 28: 28](R/W) Host Version 4.00 Enable. Selects backward (SD Host 3.00 Version) compatibility mode or SD Host
                                                                 4.00 Version mode.
                                                                 0 = Version 3.00.
                                                                 1 = Version 4.00.
                                                                 The software can select system address register EMMC_HOST_SRS_SRS00 (when this bit is 0) or
                                                                 EMMC_HOST_SRS_SRS23 / EMMC_HOST_SRS_SRS22 (when this bit is 1) for the SDMA engine. */
        uint32_t a64b                  : 1;  /**< [ 29: 29](R/W) 64-bit Addressing. Specifies the addressing mode for DMA ending. This field is ignored when
                                                                 EMMC_HOST_SRS_SRS15[HV4E]=0.
                                                                 0 = 32-bit addressing.
                                                                 1 = 64-bit addressing. */
        uint32_t reserved_30           : 1;
        uint32_t pve                   : 1;  /**< [ 31: 31](R/W) Preset Value Enable. Setting this bit to 1 triggers an automatically update of
                                                                 EMMC_HOST_SRS_SRS11[SDCFSL], EMMC_HOST_SRS_SRS11[SDCFSH], EMMC_HOST_SRS_SRS11[CGS],
                                                                 EMMC_HOST_SRS_SRS15[DSS] registers by the host. Values for an update are taken from
                                                                 EMMC_HOST_SRS_SRS24 - EMMC_HOST_SRS_SRS27 and depends on EMMC_HOST_SRS_SRS15[UMS]. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_emmcx_host_srs_srs15_s cn; */
};
typedef union cavm_emmcx_host_srs_srs15 cavm_emmcx_host_srs_srs15_t;

static inline uint64_t CAVM_EMMCX_HOST_SRS_SRS15(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_EMMCX_HOST_SRS_SRS15(uint64_t a)
{
    if (a==0)
        return 0x82400000023cll + 0x1000000ll * ((a) & 0x0);
    __cavm_csr_fatal("EMMCX_HOST_SRS_SRS15", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_EMMCX_HOST_SRS_SRS15(a) cavm_emmcx_host_srs_srs15_t
#define bustype_CAVM_EMMCX_HOST_SRS_SRS15(a) CSR_TYPE_NCB32b
#define basename_CAVM_EMMCX_HOST_SRS_SRS15(a) "EMMCX_HOST_SRS_SRS15"
#define device_bar_CAVM_EMMCX_HOST_SRS_SRS15(a) 0x0 /* PF_BAR0 */
#define busnum_CAVM_EMMCX_HOST_SRS_SRS15(a) (a)
#define arguments_CAVM_EMMCX_HOST_SRS_SRS15(a) (a),-1,-1,-1

/**
 * Register (NCB32b) emmc#_host_srs_srs16
 *
 * EMMC Host Capabilities 1 Register
 */
union cavm_emmcx_host_srs_srs16
{
    uint32_t u;
    struct cavm_emmcx_host_srs_srs16_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t slt                   : 2;  /**< [ 31: 30](RO) Slot Type. These bits inform what type of slot is provided.
                                                                 0x0 =  Removable Card Slot.
                                                                 0x1 =  Embedded Slot for One Device.
                                                                 0x2 =  Shared Bus Slot.
                                                                 0x3 =  Reserved. */
        uint32_t ais                   : 1;  /**< [ 29: 29](RO) Asynchronous Interrupt Support. 0 = not supported. */
        uint32_t a64sv3                : 1;  /**< [ 28: 28](RO) 64-bit System Addressing Support.
                                                                 0 = 64-bit Addressing for V3 is not supported.
                                                                 1 = 64-bit Addressing for V3 is supported. */
        uint32_t a64sv4                : 1;  /**< [ 27: 27](RO) 64-bit System Addressing Support for V4.
                                                                 0 = 64-bit Addressing for V4 is not supported.
                                                                 1 = 64-bit Addressing for V4 is supported. */
        uint32_t vs18                  : 1;  /**< [ 26: 26](RO) Voltage Support 1.8V.
                                                                 0 = not supported.
                                                                 1 = supported. */
        uint32_t vs30                  : 1;  /**< [ 25: 25](RO) Voltage Support 3.0V.
                                                                 0 = not supported.
                                                                 1 = supported. */
        uint32_t vs33                  : 1;  /**< [ 24: 24](RO) Voltage Support 3.3V.
                                                                 0 = not supported.
                                                                 1 = supported. */
        uint32_t srs                   : 1;  /**< [ 23: 23](RO) Suspend / Resume Support.
                                                                 0 = not supported.
                                                                 1 = supported.
                                                                 The host controller does not support Suspend / Resume mechanism. */
        uint32_t dmas                  : 1;  /**< [ 22: 22](RO) SDMA Support.
                                                                 0 = not supported.
                                                                 1 = supported.
                                                                 This bit defines whether the SDMA is supported. */
        uint32_t hss                   : 1;  /**< [ 21: 21](RO) High Speed Support.
                                                                 0 = not supported.
                                                                 1 = supported. */
        uint32_t adma1s                : 1;  /**< [ 20: 20](RO) ADMA1 Support.
                                                                 0 = not supported.
                                                                 1 = supported. */
        uint32_t adma2s                : 1;  /**< [ 19: 19](RO) ADMA2 Support.
                                                                 0 = not supported.
                                                                 1 = supported. */
        uint32_t eds8                  : 1;  /**< [ 18: 18](RO) 8-bit Embedded Device Support.
                                                                 0 = not supported.
                                                                 1 = supported.
                                                                 If this bit is 0, the EMMC_HOST_SRS_SRS10[EDTW] register is not implemented. */
        uint32_t mbl                   : 2;  /**< [ 17: 16](RO) Max Block Length. This value indicates the maximum block size that can be transferred by the host.
                                                                 Three sizes can be defined as indicated below:
                                                                 0x0 = 512 Bytes.
                                                                 0x0 = 1024 Bytes.
                                                                 0x0 = 2048 Bytes.
                                                                 0x0 = Reserved.
                                                                 The physical FIFO buffer size is defined by the separate FIFODEPTH generic parameter, and the
                                                                 physical buffer size is equal to 2^FIFODEPTH * 8 bytes. Therefore, the Maximum Block Size defined
                                                                 by MBL will always be less or equal to the physical buffer size. */
        uint32_t bcsdclk               : 8;  /**< [ 15:  8](RO) Base Clock Frequency for SD Clock. Field defines the base clock frequency for the SD Clock in 1MHz
                                                                 units. The base clock is the clock sourced to sdmclk pin of the host. The maximum clock frequency
                                                                 supported is between 10MHz to 255MHz. If BCSDCLK = 0, the Host System has to obtain the clock
                                                                 information via another method (i.e. not defined by the specification). */
        uint32_t tcu                   : 1;  /**< [  7:  7](RO) Timeout Clock Unit. Field defines the frequency unit for the EMMC_HOST_SRS_SRS16[TCF].
                                                                 0 = kHz.
                                                                 1 = MHz. */
        uint32_t reserved_6            : 1;
        uint32_t tcf                   : 6;  /**< [  5:  0](RO) Timeout Clock Frequency. Defines the base clock frequency used to detect Data Timeout Error.
                                                                 The EMMC_HOST_SRS_SRS16[TCU] bit determines the unit used.
                                                                 0x0 = Host System has to obtain the clock information via another method(i.e. not defined by spec)
                                                                 0x1 = 1kHz(EMMC_HOST_SRS_SRS16[TCU]=0) or 1MHz(EMMC_HOST_SRS_SRS16[TCU]=1).
                                                                  ..
                                                                 0x3E = 63kHz(EMMC_HOST_SRS_SRS16[TCU]=0) or 63MHz(EMMC_HOST_SRS_SRS16[TCU]=1).
                                                                 0x3F = 63kHz(EMMC_HOST_SRS_SRS16[TCU]=0) or 63MHz(EMMC_HOST_SRS_SRS16[TCU]=1). */
#else /* Word 0 - Little Endian */
        uint32_t tcf                   : 6;  /**< [  5:  0](RO) Timeout Clock Frequency. Defines the base clock frequency used to detect Data Timeout Error.
                                                                 The EMMC_HOST_SRS_SRS16[TCU] bit determines the unit used.
                                                                 0x0 = Host System has to obtain the clock information via another method(i.e. not defined by spec)
                                                                 0x1 = 1kHz(EMMC_HOST_SRS_SRS16[TCU]=0) or 1MHz(EMMC_HOST_SRS_SRS16[TCU]=1).
                                                                  ..
                                                                 0x3E = 63kHz(EMMC_HOST_SRS_SRS16[TCU]=0) or 63MHz(EMMC_HOST_SRS_SRS16[TCU]=1).
                                                                 0x3F = 63kHz(EMMC_HOST_SRS_SRS16[TCU]=0) or 63MHz(EMMC_HOST_SRS_SRS16[TCU]=1). */
        uint32_t reserved_6            : 1;
        uint32_t tcu                   : 1;  /**< [  7:  7](RO) Timeout Clock Unit. Field defines the frequency unit for the EMMC_HOST_SRS_SRS16[TCF].
                                                                 0 = kHz.
                                                                 1 = MHz. */
        uint32_t bcsdclk               : 8;  /**< [ 15:  8](RO) Base Clock Frequency for SD Clock. Field defines the base clock frequency for the SD Clock in 1MHz
                                                                 units. The base clock is the clock sourced to sdmclk pin of the host. The maximum clock frequency
                                                                 supported is between 10MHz to 255MHz. If BCSDCLK = 0, the Host System has to obtain the clock
                                                                 information via another method (i.e. not defined by the specification). */
        uint32_t mbl                   : 2;  /**< [ 17: 16](RO) Max Block Length. This value indicates the maximum block size that can be transferred by the host.
                                                                 Three sizes can be defined as indicated below:
                                                                 0x0 = 512 Bytes.
                                                                 0x0 = 1024 Bytes.
                                                                 0x0 = 2048 Bytes.
                                                                 0x0 = Reserved.
                                                                 The physical FIFO buffer size is defined by the separate FIFODEPTH generic parameter, and the
                                                                 physical buffer size is equal to 2^FIFODEPTH * 8 bytes. Therefore, the Maximum Block Size defined
                                                                 by MBL will always be less or equal to the physical buffer size. */
        uint32_t eds8                  : 1;  /**< [ 18: 18](RO) 8-bit Embedded Device Support.
                                                                 0 = not supported.
                                                                 1 = supported.
                                                                 If this bit is 0, the EMMC_HOST_SRS_SRS10[EDTW] register is not implemented. */
        uint32_t adma2s                : 1;  /**< [ 19: 19](RO) ADMA2 Support.
                                                                 0 = not supported.
                                                                 1 = supported. */
        uint32_t adma1s                : 1;  /**< [ 20: 20](RO) ADMA1 Support.
                                                                 0 = not supported.
                                                                 1 = supported. */
        uint32_t hss                   : 1;  /**< [ 21: 21](RO) High Speed Support.
                                                                 0 = not supported.
                                                                 1 = supported. */
        uint32_t dmas                  : 1;  /**< [ 22: 22](RO) SDMA Support.
                                                                 0 = not supported.
                                                                 1 = supported.
                                                                 This bit defines whether the SDMA is supported. */
        uint32_t srs                   : 1;  /**< [ 23: 23](RO) Suspend / Resume Support.
                                                                 0 = not supported.
                                                                 1 = supported.
                                                                 The host controller does not support Suspend / Resume mechanism. */
        uint32_t vs33                  : 1;  /**< [ 24: 24](RO) Voltage Support 3.3V.
                                                                 0 = not supported.
                                                                 1 = supported. */
        uint32_t vs30                  : 1;  /**< [ 25: 25](RO) Voltage Support 3.0V.
                                                                 0 = not supported.
                                                                 1 = supported. */
        uint32_t vs18                  : 1;  /**< [ 26: 26](RO) Voltage Support 1.8V.
                                                                 0 = not supported.
                                                                 1 = supported. */
        uint32_t a64sv4                : 1;  /**< [ 27: 27](RO) 64-bit System Addressing Support for V4.
                                                                 0 = 64-bit Addressing for V4 is not supported.
                                                                 1 = 64-bit Addressing for V4 is supported. */
        uint32_t a64sv3                : 1;  /**< [ 28: 28](RO) 64-bit System Addressing Support.
                                                                 0 = 64-bit Addressing for V3 is not supported.
                                                                 1 = 64-bit Addressing for V3 is supported. */
        uint32_t ais                   : 1;  /**< [ 29: 29](RO) Asynchronous Interrupt Support. 0 = not supported. */
        uint32_t slt                   : 2;  /**< [ 31: 30](RO) Slot Type. These bits inform what type of slot is provided.
                                                                 0x0 =  Removable Card Slot.
                                                                 0x1 =  Embedded Slot for One Device.
                                                                 0x2 =  Shared Bus Slot.
                                                                 0x3 =  Reserved. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_emmcx_host_srs_srs16_s cn; */
};
typedef union cavm_emmcx_host_srs_srs16 cavm_emmcx_host_srs_srs16_t;

static inline uint64_t CAVM_EMMCX_HOST_SRS_SRS16(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_EMMCX_HOST_SRS_SRS16(uint64_t a)
{
    if (a==0)
        return 0x824000000240ll + 0x1000000ll * ((a) & 0x0);
    __cavm_csr_fatal("EMMCX_HOST_SRS_SRS16", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_EMMCX_HOST_SRS_SRS16(a) cavm_emmcx_host_srs_srs16_t
#define bustype_CAVM_EMMCX_HOST_SRS_SRS16(a) CSR_TYPE_NCB32b
#define basename_CAVM_EMMCX_HOST_SRS_SRS16(a) "EMMCX_HOST_SRS_SRS16"
#define device_bar_CAVM_EMMCX_HOST_SRS_SRS16(a) 0x0 /* PF_BAR0 */
#define busnum_CAVM_EMMCX_HOST_SRS_SRS16(a) (a)
#define arguments_CAVM_EMMCX_HOST_SRS_SRS16(a) (a),-1,-1,-1

/**
 * Register (NCB32b) emmc#_host_srs_srs17
 *
 * EMMC Host Capabilities 2 Register
 */
union cavm_emmcx_host_srs_srs17
{
    uint32_t u;
    struct cavm_emmcx_host_srs_srs17_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t lvsh                  : 1;  /**< [ 31: 31](RO) Low Voltage Signaling Host.
                                                                 0 = Not LVS Host.
                                                                 1 = LVS Host. */
        uint32_t reserved_29_30        : 2;
        uint32_t vdd2s                 : 1;  /**< [ 28: 28](RO) VDD2 Supported.
                                                                 0 = VDD2 not supported.
                                                                 1 = VDD2 supported. */
        uint32_t adma3sup              : 1;  /**< [ 27: 27](RO) ADMA3 Supported.
                                                                 0 = ADMA3 not supported.
                                                                 1 = ADMA3 supported. */
        uint32_t reserved_24_26        : 3;
        uint32_t clkmpr                : 8;  /**< [ 23: 16](RO) Clock Multiplier. This field is to be 0 (fixed), as the Clock Multiplier is not supported. */
        uint32_t rtngm                 : 2;  /**< [ 15: 14](RO) Re-Tuning Modes. Depending on the retuning method, the some restrictions are assumed for the data
                                                                 length between re-tunings. The core can work with supporting one of the three method:
                                                                 0 = Mode1: The software driver will use timer to calculate when the re-tuning is to be rerun. The
                                                                 data length between operations is limited to the 4MB.
                                                                 1 = Mode2: The driver will use either the re-tuning request (external input pin uhsi_retune_req is
                                                                 used for this purpose) or timer to predict when next retuning should be performed. The data length
                                                                 between operations is limited to the 4MB.
                                                                 2 - Mode3: This mode is similar to the mode2 with one exception. The core is able to perform auto
                                                                 retuning during the transmission, so data length limitation is not exists. Mode 3 is currently not
                                                                 supported.The driver can configure the timer by getting the RTNGCNT.This field is to be 0 or 1,
                                                                 because the mode 3 is not supported. */
        uint32_t utsm50                : 1;  /**< [ 13: 13](RO) Use Tuning for SDR50.
                                                                 0 = tuning operation is not necessary in SDR50 mode.
                                                                 1 = tuning operation is necessary in SDR50 mode. */
        uint32_t reserved_12           : 1;
        uint32_t rtngcnt               : 4;  /**< [ 11:  8](RO) Timer Count for Re-Tuning. These bits contain initial value for timer used to starting periodically
                                                                 Re-Tuning Operation.
                                                                 0x0 = Re-Tuning Timer disabled.
                                                                 0x1 = 1 second.
                                                                 _ ...
                                                                 n   = 2^(n-1) seconds.
                                                                 _ ...
                                                                 0xB = 1024 seconds.
                                                                 0xC-0xE = Reserved.
                                                                 0xF = Obtain this info in other way. */
        uint32_t reserved_7            : 1;
        uint32_t drvd                  : 1;  /**< [  6:  6](RO) 1.8V Line Driver Type D Supported.
                                                                 0 = Driver Type D not supported.
                                                                 1 = Driver Type D supported. */
        uint32_t drvc                  : 1;  /**< [  5:  5](RO) 1.8V Line Driver Type C Supported.
                                                                 0 = Driver Type C not supported.
                                                                 1 = Driver Type C supported. */
        uint32_t drva                  : 1;  /**< [  4:  4](RO) 1.8V Line Driver Type A Supported.
                                                                 0 = Driver Type A not supported.
                                                                 1 = Driver Type A supported. */
        uint32_t uhsii                 : 1;  /**< [  3:  3](RO) 0 = UHS-II not supported.
                                                                 1 = UHS-II / UHS-III Supported. */
        uint32_t ddr50                 : 1;  /**< [  2:  2](RO) DDR50 Supported.
                                                                 0 = DDR50 mode not supported.
                                                                 1 = DDR50 mode supported. */
        uint32_t sdr104                : 1;  /**< [  1:  1](RO) SDR104 Supported.
                                                                 0 = SDR104 mode not supported.
                                                                 1 = SDR104 mode supported. */
        uint32_t sdr50                 : 1;  /**< [  0:  0](RO) SDR50 Supported.
                                                                 0 = SDR50 mode not supported.
                                                                 1 = SDR50 mode supported. */
#else /* Word 0 - Little Endian */
        uint32_t sdr50                 : 1;  /**< [  0:  0](RO) SDR50 Supported.
                                                                 0 = SDR50 mode not supported.
                                                                 1 = SDR50 mode supported. */
        uint32_t sdr104                : 1;  /**< [  1:  1](RO) SDR104 Supported.
                                                                 0 = SDR104 mode not supported.
                                                                 1 = SDR104 mode supported. */
        uint32_t ddr50                 : 1;  /**< [  2:  2](RO) DDR50 Supported.
                                                                 0 = DDR50 mode not supported.
                                                                 1 = DDR50 mode supported. */
        uint32_t uhsii                 : 1;  /**< [  3:  3](RO) 0 = UHS-II not supported.
                                                                 1 = UHS-II / UHS-III Supported. */
        uint32_t drva                  : 1;  /**< [  4:  4](RO) 1.8V Line Driver Type A Supported.
                                                                 0 = Driver Type A not supported.
                                                                 1 = Driver Type A supported. */
        uint32_t drvc                  : 1;  /**< [  5:  5](RO) 1.8V Line Driver Type C Supported.
                                                                 0 = Driver Type C not supported.
                                                                 1 = Driver Type C supported. */
        uint32_t drvd                  : 1;  /**< [  6:  6](RO) 1.8V Line Driver Type D Supported.
                                                                 0 = Driver Type D not supported.
                                                                 1 = Driver Type D supported. */
        uint32_t reserved_7            : 1;
        uint32_t rtngcnt               : 4;  /**< [ 11:  8](RO) Timer Count for Re-Tuning. These bits contain initial value for timer used to starting periodically
                                                                 Re-Tuning Operation.
                                                                 0x0 = Re-Tuning Timer disabled.
                                                                 0x1 = 1 second.
                                                                 _ ...
                                                                 n   = 2^(n-1) seconds.
                                                                 _ ...
                                                                 0xB = 1024 seconds.
                                                                 0xC-0xE = Reserved.
                                                                 0xF = Obtain this info in other way. */
        uint32_t reserved_12           : 1;
        uint32_t utsm50                : 1;  /**< [ 13: 13](RO) Use Tuning for SDR50.
                                                                 0 = tuning operation is not necessary in SDR50 mode.
                                                                 1 = tuning operation is necessary in SDR50 mode. */
        uint32_t rtngm                 : 2;  /**< [ 15: 14](RO) Re-Tuning Modes. Depending on the retuning method, the some restrictions are assumed for the data
                                                                 length between re-tunings. The core can work with supporting one of the three method:
                                                                 0 = Mode1: The software driver will use timer to calculate when the re-tuning is to be rerun. The
                                                                 data length between operations is limited to the 4MB.
                                                                 1 = Mode2: The driver will use either the re-tuning request (external input pin uhsi_retune_req is
                                                                 used for this purpose) or timer to predict when next retuning should be performed. The data length
                                                                 between operations is limited to the 4MB.
                                                                 2 - Mode3: This mode is similar to the mode2 with one exception. The core is able to perform auto
                                                                 retuning during the transmission, so data length limitation is not exists. Mode 3 is currently not
                                                                 supported.The driver can configure the timer by getting the RTNGCNT.This field is to be 0 or 1,
                                                                 because the mode 3 is not supported. */
        uint32_t clkmpr                : 8;  /**< [ 23: 16](RO) Clock Multiplier. This field is to be 0 (fixed), as the Clock Multiplier is not supported. */
        uint32_t reserved_24_26        : 3;
        uint32_t adma3sup              : 1;  /**< [ 27: 27](RO) ADMA3 Supported.
                                                                 0 = ADMA3 not supported.
                                                                 1 = ADMA3 supported. */
        uint32_t vdd2s                 : 1;  /**< [ 28: 28](RO) VDD2 Supported.
                                                                 0 = VDD2 not supported.
                                                                 1 = VDD2 supported. */
        uint32_t reserved_29_30        : 2;
        uint32_t lvsh                  : 1;  /**< [ 31: 31](RO) Low Voltage Signaling Host.
                                                                 0 = Not LVS Host.
                                                                 1 = LVS Host. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_emmcx_host_srs_srs17_s cn; */
};
typedef union cavm_emmcx_host_srs_srs17 cavm_emmcx_host_srs_srs17_t;

static inline uint64_t CAVM_EMMCX_HOST_SRS_SRS17(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_EMMCX_HOST_SRS_SRS17(uint64_t a)
{
    if (a==0)
        return 0x824000000244ll + 0x1000000ll * ((a) & 0x0);
    __cavm_csr_fatal("EMMCX_HOST_SRS_SRS17", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_EMMCX_HOST_SRS_SRS17(a) cavm_emmcx_host_srs_srs17_t
#define bustype_CAVM_EMMCX_HOST_SRS_SRS17(a) CSR_TYPE_NCB32b
#define basename_CAVM_EMMCX_HOST_SRS_SRS17(a) "EMMCX_HOST_SRS_SRS17"
#define device_bar_CAVM_EMMCX_HOST_SRS_SRS17(a) 0x0 /* PF_BAR0 */
#define busnum_CAVM_EMMCX_HOST_SRS_SRS17(a) (a)
#define arguments_CAVM_EMMCX_HOST_SRS_SRS17(a) (a),-1,-1,-1

/**
 * Register (NCB32b) emmc#_host_srs_srs18
 *
 * EMMC Host Capabilities 3 Register
 */
union cavm_emmcx_host_srs_srs18
{
    uint32_t u;
    struct cavm_emmcx_host_srs_srs18_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t reserved_24_31        : 8;
        uint32_t mc18                  : 8;  /**< [ 23: 16](RO) Maximum Current for 1.8.
                                                                 0x0 = Host System has to obtain the current value via another method.
                                                                 0x1 = 4 mA.
                                                                 0x2 = 8 mA.
                                                                 0x3 = 12 mA.
                                                                 _ ...
                                                                 0xFF = 1020 mA. */
        uint32_t mc30                  : 8;  /**< [ 15:  8](RO) Maximum Current for 3.0V.
                                                                 0x0 = Host System has to obtain the current value via another method.
                                                                 0x1 = 4 mA.
                                                                 0x2 = 8 mA.
                                                                 0x3 = 12 mA.
                                                                 _ ...
                                                                 0xFF = 1020 mA. */
        uint32_t mc33                  : 8;  /**< [  7:  0](RO) Maximum Current for 3.3V.
                                                                 0x0 = Host System has to obtain the current value via another method.
                                                                 0x1 = 4 mA.
                                                                 0x2 = 8 mA.
                                                                 0x3 = 12 mA.
                                                                 _ ...
                                                                 0xFF = 1020 mA. */
#else /* Word 0 - Little Endian */
        uint32_t mc33                  : 8;  /**< [  7:  0](RO) Maximum Current for 3.3V.
                                                                 0x0 = Host System has to obtain the current value via another method.
                                                                 0x1 = 4 mA.
                                                                 0x2 = 8 mA.
                                                                 0x3 = 12 mA.
                                                                 _ ...
                                                                 0xFF = 1020 mA. */
        uint32_t mc30                  : 8;  /**< [ 15:  8](RO) Maximum Current for 3.0V.
                                                                 0x0 = Host System has to obtain the current value via another method.
                                                                 0x1 = 4 mA.
                                                                 0x2 = 8 mA.
                                                                 0x3 = 12 mA.
                                                                 _ ...
                                                                 0xFF = 1020 mA. */
        uint32_t mc18                  : 8;  /**< [ 23: 16](RO) Maximum Current for 1.8.
                                                                 0x0 = Host System has to obtain the current value via another method.
                                                                 0x1 = 4 mA.
                                                                 0x2 = 8 mA.
                                                                 0x3 = 12 mA.
                                                                 _ ...
                                                                 0xFF = 1020 mA. */
        uint32_t reserved_24_31        : 8;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_emmcx_host_srs_srs18_s cn; */
};
typedef union cavm_emmcx_host_srs_srs18 cavm_emmcx_host_srs_srs18_t;

static inline uint64_t CAVM_EMMCX_HOST_SRS_SRS18(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_EMMCX_HOST_SRS_SRS18(uint64_t a)
{
    if (a==0)
        return 0x824000000248ll + 0x1000000ll * ((a) & 0x0);
    __cavm_csr_fatal("EMMCX_HOST_SRS_SRS18", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_EMMCX_HOST_SRS_SRS18(a) cavm_emmcx_host_srs_srs18_t
#define bustype_CAVM_EMMCX_HOST_SRS_SRS18(a) CSR_TYPE_NCB32b
#define basename_CAVM_EMMCX_HOST_SRS_SRS18(a) "EMMCX_HOST_SRS_SRS18"
#define device_bar_CAVM_EMMCX_HOST_SRS_SRS18(a) 0x0 /* PF_BAR0 */
#define busnum_CAVM_EMMCX_HOST_SRS_SRS18(a) (a)
#define arguments_CAVM_EMMCX_HOST_SRS_SRS18(a) (a),-1,-1,-1

/**
 * Register (NCB32b) emmc#_host_srs_srs19
 *
 * EMMC Capabilities 4 Register
 */
union cavm_emmcx_host_srs_srs19
{
    uint32_t u;
    struct cavm_emmcx_host_srs_srs19_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t reserved_8_31         : 24;
        uint32_t mc18v2                : 8;  /**< [  7:  0](RO) Maximum Current for 1.8V VDD2.
                                                                 0x0 = Host System has to obtain the current value via another method.
                                                                 0x1 = 4 mA.
                                                                 0x2 = 8 mA.
                                                                 0x3 = 12 mA.
                                                                 _ ...
                                                                 0xFF = 1020 mA. */
#else /* Word 0 - Little Endian */
        uint32_t mc18v2                : 8;  /**< [  7:  0](RO) Maximum Current for 1.8V VDD2.
                                                                 0x0 = Host System has to obtain the current value via another method.
                                                                 0x1 = 4 mA.
                                                                 0x2 = 8 mA.
                                                                 0x3 = 12 mA.
                                                                 _ ...
                                                                 0xFF = 1020 mA. */
        uint32_t reserved_8_31         : 24;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_emmcx_host_srs_srs19_s cn; */
};
typedef union cavm_emmcx_host_srs_srs19 cavm_emmcx_host_srs_srs19_t;

static inline uint64_t CAVM_EMMCX_HOST_SRS_SRS19(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_EMMCX_HOST_SRS_SRS19(uint64_t a)
{
    if (a==0)
        return 0x82400000024cll + 0x1000000ll * ((a) & 0x0);
    __cavm_csr_fatal("EMMCX_HOST_SRS_SRS19", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_EMMCX_HOST_SRS_SRS19(a) cavm_emmcx_host_srs_srs19_t
#define bustype_CAVM_EMMCX_HOST_SRS_SRS19(a) CSR_TYPE_NCB32b
#define basename_CAVM_EMMCX_HOST_SRS_SRS19(a) "EMMCX_HOST_SRS_SRS19"
#define device_bar_CAVM_EMMCX_HOST_SRS_SRS19(a) 0x0 /* PF_BAR0 */
#define busnum_CAVM_EMMCX_HOST_SRS_SRS19(a) (a)
#define arguments_CAVM_EMMCX_HOST_SRS_SRS19(a) (a),-1,-1,-1

/**
 * Register (NCB32b) emmc#_host_srs_srs20
 *
 * EMMC Host Force Event Register
 * Each field of this register is related to the specific error status. Writing 1 to
 * field will set the
 * status error. This function is provided for software debug purposes.
 */
union cavm_emmcx_host_srs_srs20
{
    uint32_t u;
    struct cavm_emmcx_host_srs_srs20_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t reserved_28_31        : 4;
        uint32_t eresp_fe              : 1;  /**< [ 27: 27](WO) Force Response Error Event. */
        uint32_t etune_fe              : 1;  /**< [ 26: 26](WO) Force Tuning Error Event. */
        uint32_t eadma_fe              : 1;  /**< [ 25: 25](WO) Force ADMA Error Event. */
        uint32_t eac_fe                : 1;  /**< [ 24: 24](WO) Force Auto CMD Error Event. */
        uint32_t ecl_fe                : 1;  /**< [ 23: 23](WO) Force Current Limit Error Event. */
        uint32_t edeb_fe               : 1;  /**< [ 22: 22](WO) Force Data End Bit Error Event. */
        uint32_t edcrc_fe              : 1;  /**< [ 21: 21](WO) Force Data CRC Error Event. */
        uint32_t edt_fe                : 1;  /**< [ 20: 20](WO) Force Data Timeout Error Event. */
        uint32_t eci_fe                : 1;  /**< [ 19: 19](WO) Force Command Index Error Event. */
        uint32_t eceb_fe               : 1;  /**< [ 18: 18](WO) Force Command End Bit Error Event. */
        uint32_t eccrc_fe              : 1;  /**< [ 17: 17](WO) Force Command CRC Error Event. */
        uint32_t ect_fe                : 1;  /**< [ 16: 16](WO) Force Command Timeout Error Event. */
        uint32_t reserved_8_15         : 8;
        uint32_t cniace_fe             : 1;  /**< [  7:  7](WO) Force Command Not Issued By Auto CMD12 Error Event. */
        uint32_t reserved_5_6          : 2;
        uint32_t acie_fe               : 1;  /**< [  4:  4](WO) Force Auto CMD Index Error Event. */
        uint32_t acebe_fe              : 1;  /**< [  3:  3](WO) Force Auto CMD End Bit Error Event. */
        uint32_t acce_fe               : 1;  /**< [  2:  2](WO) Force Auto CMD CRC Error Event. */
        uint32_t acte_fe               : 1;  /**< [  1:  1](WO) Force Auto CMD Timeout Error Event. */
        uint32_t acne_fe               : 1;  /**< [  0:  0](WO) Force Auto CMD12 Not Executed Event. */
#else /* Word 0 - Little Endian */
        uint32_t acne_fe               : 1;  /**< [  0:  0](WO) Force Auto CMD12 Not Executed Event. */
        uint32_t acte_fe               : 1;  /**< [  1:  1](WO) Force Auto CMD Timeout Error Event. */
        uint32_t acce_fe               : 1;  /**< [  2:  2](WO) Force Auto CMD CRC Error Event. */
        uint32_t acebe_fe              : 1;  /**< [  3:  3](WO) Force Auto CMD End Bit Error Event. */
        uint32_t acie_fe               : 1;  /**< [  4:  4](WO) Force Auto CMD Index Error Event. */
        uint32_t reserved_5_6          : 2;
        uint32_t cniace_fe             : 1;  /**< [  7:  7](WO) Force Command Not Issued By Auto CMD12 Error Event. */
        uint32_t reserved_8_15         : 8;
        uint32_t ect_fe                : 1;  /**< [ 16: 16](WO) Force Command Timeout Error Event. */
        uint32_t eccrc_fe              : 1;  /**< [ 17: 17](WO) Force Command CRC Error Event. */
        uint32_t eceb_fe               : 1;  /**< [ 18: 18](WO) Force Command End Bit Error Event. */
        uint32_t eci_fe                : 1;  /**< [ 19: 19](WO) Force Command Index Error Event. */
        uint32_t edt_fe                : 1;  /**< [ 20: 20](WO) Force Data Timeout Error Event. */
        uint32_t edcrc_fe              : 1;  /**< [ 21: 21](WO) Force Data CRC Error Event. */
        uint32_t edeb_fe               : 1;  /**< [ 22: 22](WO) Force Data End Bit Error Event. */
        uint32_t ecl_fe                : 1;  /**< [ 23: 23](WO) Force Current Limit Error Event. */
        uint32_t eac_fe                : 1;  /**< [ 24: 24](WO) Force Auto CMD Error Event. */
        uint32_t eadma_fe              : 1;  /**< [ 25: 25](WO) Force ADMA Error Event. */
        uint32_t etune_fe              : 1;  /**< [ 26: 26](WO) Force Tuning Error Event. */
        uint32_t eresp_fe              : 1;  /**< [ 27: 27](WO) Force Response Error Event. */
        uint32_t reserved_28_31        : 4;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_emmcx_host_srs_srs20_s cn; */
};
typedef union cavm_emmcx_host_srs_srs20 cavm_emmcx_host_srs_srs20_t;

static inline uint64_t CAVM_EMMCX_HOST_SRS_SRS20(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_EMMCX_HOST_SRS_SRS20(uint64_t a)
{
    if (a==0)
        return 0x824000000250ll + 0x1000000ll * ((a) & 0x0);
    __cavm_csr_fatal("EMMCX_HOST_SRS_SRS20", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_EMMCX_HOST_SRS_SRS20(a) cavm_emmcx_host_srs_srs20_t
#define bustype_CAVM_EMMCX_HOST_SRS_SRS20(a) CSR_TYPE_NCB32b
#define basename_CAVM_EMMCX_HOST_SRS_SRS20(a) "EMMCX_HOST_SRS_SRS20"
#define device_bar_CAVM_EMMCX_HOST_SRS_SRS20(a) 0x0 /* PF_BAR0 */
#define busnum_CAVM_EMMCX_HOST_SRS_SRS20(a) (a)
#define arguments_CAVM_EMMCX_HOST_SRS_SRS20(a) (a),-1,-1,-1

/**
 * Register (NCB32b) emmc#_host_srs_srs21
 *
 * EMMC Host ADMA Error Status Register
 */
union cavm_emmcx_host_srs_srs21
{
    uint32_t u;
    struct cavm_emmcx_host_srs_srs21_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t reserved_3_31         : 29;
        uint32_t eadmal                : 1;  /**< [  2:  2](RO) ADMA Length Mismatch Error. This bit is set when:
                                                                 - total data length specified in ADMA descriptors is different from that specified by the Block
                                                                 Count and Block Length fields (if Block Count Enable is set).
                                                                 - total data length cannot be divided into complete blocks of specified length (if Block Count
                                                                 Enable is not set). */
        uint32_t eadmas                : 2;  /**< [  1:  0](RO) ADMA Error State. The value of this field reflects the state of the ADMA state machine. The
                                                                 possible values are:
                                                                 0x0 = ST_STOP (ADMA Stopped).
                                                                 0x1 = ST_FDS (Fetching descriptor).
                                                                 0x2 = not used.
                                                                 0x3 = ST_TRF (Transfer data). */
#else /* Word 0 - Little Endian */
        uint32_t eadmas                : 2;  /**< [  1:  0](RO) ADMA Error State. The value of this field reflects the state of the ADMA state machine. The
                                                                 possible values are:
                                                                 0x0 = ST_STOP (ADMA Stopped).
                                                                 0x1 = ST_FDS (Fetching descriptor).
                                                                 0x2 = not used.
                                                                 0x3 = ST_TRF (Transfer data). */
        uint32_t eadmal                : 1;  /**< [  2:  2](RO) ADMA Length Mismatch Error. This bit is set when:
                                                                 - total data length specified in ADMA descriptors is different from that specified by the Block
                                                                 Count and Block Length fields (if Block Count Enable is set).
                                                                 - total data length cannot be divided into complete blocks of specified length (if Block Count
                                                                 Enable is not set). */
        uint32_t reserved_3_31         : 29;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_emmcx_host_srs_srs21_s cn; */
};
typedef union cavm_emmcx_host_srs_srs21 cavm_emmcx_host_srs_srs21_t;

static inline uint64_t CAVM_EMMCX_HOST_SRS_SRS21(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_EMMCX_HOST_SRS_SRS21(uint64_t a)
{
    if (a==0)
        return 0x824000000254ll + 0x1000000ll * ((a) & 0x0);
    __cavm_csr_fatal("EMMCX_HOST_SRS_SRS21", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_EMMCX_HOST_SRS_SRS21(a) cavm_emmcx_host_srs_srs21_t
#define bustype_CAVM_EMMCX_HOST_SRS_SRS21(a) CSR_TYPE_NCB32b
#define basename_CAVM_EMMCX_HOST_SRS_SRS21(a) "EMMCX_HOST_SRS_SRS21"
#define device_bar_CAVM_EMMCX_HOST_SRS_SRS21(a) 0x0 /* PF_BAR0 */
#define busnum_CAVM_EMMCX_HOST_SRS_SRS21(a) (a)
#define arguments_CAVM_EMMCX_HOST_SRS_SRS21(a) (a),-1,-1,-1

/**
 * Register (NCB32b) emmc#_host_srs_srs22
 *
 * EMMC Host ADMA/SDMA System Address 1 Register
 */
union cavm_emmcx_host_srs_srs22
{
    uint32_t u;
    struct cavm_emmcx_host_srs_srs22_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t dmasa1                : 32; /**< [ 31:  0](R/W) ADMA System Address. This field contains the physical address of the currently processed ADMA
                                                                 descriptor or SDMA system address. The Host Driver will set this register with the descriptors
                                                                 table base address before it starts the ADMA transfers. The Host Driver should not write this
                                                                 register while the data transfer is active. While the ADMA engine is processing the descriptors
                                                                 list, the ADMASA value is always incremented to point the next descriptor to be fetched. If the
                                                                 ADMA Error occurs, the register holds the descriptor address depending on the ADMA Error State
                                                                 (EMMC_HOST_SRS_SRS21[EADMAS]) register value, as listed in the table below:
                                                                 0x0 = Points next of the error descriptor.
                                                                 0x1 = Points the error descriptor.
                                                                 0x2 = not used.
                                                                 0x3 = Points next of the error descriptor.
                                                                 The host ADMA engine ignores 2 or 3 least significant bits in this register when the 32-bit or
                                                                 64-bit addressing is active, respectively. If EMMC_HOST_SRS_SRS15[HV4E] is set 1
                                                                 and SDMA engine is selected,
                                                                 this field is used instead of EMMC_HOST_SRS_SRS00 to define system memory
                                                                 address. This register incremented and
                                                                 points to the next memory location that will be accessed. */
#else /* Word 0 - Little Endian */
        uint32_t dmasa1                : 32; /**< [ 31:  0](R/W) ADMA System Address. This field contains the physical address of the currently processed ADMA
                                                                 descriptor or SDMA system address. The Host Driver will set this register with the descriptors
                                                                 table base address before it starts the ADMA transfers. The Host Driver should not write this
                                                                 register while the data transfer is active. While the ADMA engine is processing the descriptors
                                                                 list, the ADMASA value is always incremented to point the next descriptor to be fetched. If the
                                                                 ADMA Error occurs, the register holds the descriptor address depending on the ADMA Error State
                                                                 (EMMC_HOST_SRS_SRS21[EADMAS]) register value, as listed in the table below:
                                                                 0x0 = Points next of the error descriptor.
                                                                 0x1 = Points the error descriptor.
                                                                 0x2 = not used.
                                                                 0x3 = Points next of the error descriptor.
                                                                 The host ADMA engine ignores 2 or 3 least significant bits in this register when the 32-bit or
                                                                 64-bit addressing is active, respectively. If EMMC_HOST_SRS_SRS15[HV4E] is set 1
                                                                 and SDMA engine is selected,
                                                                 this field is used instead of EMMC_HOST_SRS_SRS00 to define system memory
                                                                 address. This register incremented and
                                                                 points to the next memory location that will be accessed. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_emmcx_host_srs_srs22_s cn; */
};
typedef union cavm_emmcx_host_srs_srs22 cavm_emmcx_host_srs_srs22_t;

static inline uint64_t CAVM_EMMCX_HOST_SRS_SRS22(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_EMMCX_HOST_SRS_SRS22(uint64_t a)
{
    if (a==0)
        return 0x824000000258ll + 0x1000000ll * ((a) & 0x0);
    __cavm_csr_fatal("EMMCX_HOST_SRS_SRS22", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_EMMCX_HOST_SRS_SRS22(a) cavm_emmcx_host_srs_srs22_t
#define bustype_CAVM_EMMCX_HOST_SRS_SRS22(a) CSR_TYPE_NCB32b
#define basename_CAVM_EMMCX_HOST_SRS_SRS22(a) "EMMCX_HOST_SRS_SRS22"
#define device_bar_CAVM_EMMCX_HOST_SRS_SRS22(a) 0x0 /* PF_BAR0 */
#define busnum_CAVM_EMMCX_HOST_SRS_SRS22(a) (a)
#define arguments_CAVM_EMMCX_HOST_SRS_SRS22(a) (a),-1,-1,-1

/**
 * Register (NCB32b) emmc#_host_srs_srs23
 *
 * EMMC Host ADMA/SDMA System Address 2 Register
 */
union cavm_emmcx_host_srs_srs23
{
    uint32_t u;
    struct cavm_emmcx_host_srs_srs23_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t dmasa2                : 32; /**< [ 31:  0](R/W) ADMA System Address 2. In ADMA mode, if 64-bit addressing is enabled (EMMC_HOST_SRS_SRS15[A64B]=1),
                                                                 this field holds bits 63-32 of the physical address pointing on ADMA descriptor table. In SDMA
                                                                 mode, if host compatibility with version 4.x and 64-bit addressing are enabled
                                                                 (EMMC_HOST_SRS_SRS15[HV4E]=1 and EMMC_HOST_SRS_SRS15[A64B]=1), this field holds bits 63-32 of
                                                                 system address. */
#else /* Word 0 - Little Endian */
        uint32_t dmasa2                : 32; /**< [ 31:  0](R/W) ADMA System Address 2. In ADMA mode, if 64-bit addressing is enabled (EMMC_HOST_SRS_SRS15[A64B]=1),
                                                                 this field holds bits 63-32 of the physical address pointing on ADMA descriptor table. In SDMA
                                                                 mode, if host compatibility with version 4.x and 64-bit addressing are enabled
                                                                 (EMMC_HOST_SRS_SRS15[HV4E]=1 and EMMC_HOST_SRS_SRS15[A64B]=1), this field holds bits 63-32 of
                                                                 system address. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_emmcx_host_srs_srs23_s cn; */
};
typedef union cavm_emmcx_host_srs_srs23 cavm_emmcx_host_srs_srs23_t;

static inline uint64_t CAVM_EMMCX_HOST_SRS_SRS23(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_EMMCX_HOST_SRS_SRS23(uint64_t a)
{
    if (a==0)
        return 0x82400000025cll + 0x1000000ll * ((a) & 0x0);
    __cavm_csr_fatal("EMMCX_HOST_SRS_SRS23", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_EMMCX_HOST_SRS_SRS23(a) cavm_emmcx_host_srs_srs23_t
#define bustype_CAVM_EMMCX_HOST_SRS_SRS23(a) CSR_TYPE_NCB32b
#define basename_CAVM_EMMCX_HOST_SRS_SRS23(a) "EMMCX_HOST_SRS_SRS23"
#define device_bar_CAVM_EMMCX_HOST_SRS_SRS23(a) 0x0 /* PF_BAR0 */
#define busnum_CAVM_EMMCX_HOST_SRS_SRS23(a) (a)
#define arguments_CAVM_EMMCX_HOST_SRS_SRS23(a) (a),-1,-1,-1

/**
 * Register (NCB32b) emmc#_host_srs_srs24
 *
 * EMMC Host Preset Value (Default Speed) Register
 * EMMC_HOST_SRS_SRS24[31:16] - Default Speed if: EMMC_HOST_SRS_SRS15[V18SE]=0 ,
 * EMMC_HOST_SRS_SRS10[HSE]=0. HWINIT Register - Note this register is
 * hardware initialized after reset and the value read back will match the IP configuration.
 */
union cavm_emmcx_host_srs_srs24
{
    uint32_t u;
    struct cavm_emmcx_host_srs_srs24_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t srs24_dsspv_31_30     : 2;  /**< [ 31: 30](RO) Driver Strength Select - Preset Value This field can be used by the software to update
                                                                 EMMC_HOST_SRS_SRS15[DSS]. */
        uint32_t reserved_26_29        : 4;
        uint32_t srs24_sdcfspv_25_16   : 10; /**< [ 25: 16](RO) SDCLK Clock Frequency Select - Preset Value. This field can be used by the software to update
                                                                 EMMC_HOST_SRS_SRS11[SDCFSH] and EMMC_HOST_SRS_SRS11[SDCFSL]." */
        uint32_t reserved_0_15         : 16;
#else /* Word 0 - Little Endian */
        uint32_t reserved_0_15         : 16;
        uint32_t srs24_sdcfspv_25_16   : 10; /**< [ 25: 16](RO) SDCLK Clock Frequency Select - Preset Value. This field can be used by the software to update
                                                                 EMMC_HOST_SRS_SRS11[SDCFSH] and EMMC_HOST_SRS_SRS11[SDCFSL]." */
        uint32_t reserved_26_29        : 4;
        uint32_t srs24_dsspv_31_30     : 2;  /**< [ 31: 30](RO) Driver Strength Select - Preset Value This field can be used by the software to update
                                                                 EMMC_HOST_SRS_SRS15[DSS]. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_emmcx_host_srs_srs24_s cn; */
};
typedef union cavm_emmcx_host_srs_srs24 cavm_emmcx_host_srs_srs24_t;

static inline uint64_t CAVM_EMMCX_HOST_SRS_SRS24(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_EMMCX_HOST_SRS_SRS24(uint64_t a)
{
    if (a==0)
        return 0x824000000260ll + 0x1000000ll * ((a) & 0x0);
    __cavm_csr_fatal("EMMCX_HOST_SRS_SRS24", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_EMMCX_HOST_SRS_SRS24(a) cavm_emmcx_host_srs_srs24_t
#define bustype_CAVM_EMMCX_HOST_SRS_SRS24(a) CSR_TYPE_NCB32b
#define basename_CAVM_EMMCX_HOST_SRS_SRS24(a) "EMMCX_HOST_SRS_SRS24"
#define device_bar_CAVM_EMMCX_HOST_SRS_SRS24(a) 0x0 /* PF_BAR0 */
#define busnum_CAVM_EMMCX_HOST_SRS_SRS24(a) (a)
#define arguments_CAVM_EMMCX_HOST_SRS_SRS24(a) (a),-1,-1,-1

/**
 * Register (NCB32b) emmc#_host_srs_srs25
 *
 * EMMC Host Preset Value (High Speed and SDR12) Register
 * EMMC_HOST_SRS_SRS25[15:0] - High Speed if: EMMC_HOST_SRS_SRS15[V18SE]=0, SRS.HSE=1.
 * EMMC_HOST_SRS_SRS25[31:16] - SDR12 if: EMMC_HOST_SRS_SRS15[V18SE]=1, EMMC_HOST_SRS_SRS15[UMS]=0.
 * HWINIT Register - Note this register is hardware initialized after reset and the
 * value read back will
 * match the IP configuration.
 */
union cavm_emmcx_host_srs_srs25
{
    uint32_t u;
    struct cavm_emmcx_host_srs_srs25_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t srs25_dsspv_31_30     : 2;  /**< [ 31: 30](RO) Driver Strength Select - Preset Value. This field can be used by the software to update
                                                                 EMMC_HOST_SRS_SRS15[DSS]. */
        uint32_t reserved_26_29        : 4;
        uint32_t srs25_sdcfspv_25_16   : 10; /**< [ 25: 16](RO) SDCLK Clock Frequency Select - Preset Value. This field can be used by the software to update
                                                                 EMMC_HOST_SRS_SRS11[SDCFSH] and EMMC_HOST_SRS_SRS11[SDCFSL]. */
        uint32_t srs25_dsspv_15_14     : 2;  /**< [ 15: 14](RO) Driver Strength Select - Preset Value. This field can be used by the software to update
                                                                 EMMC_HOST_SRS_SRS15[DSS]. */
        uint32_t reserved_10_13        : 4;
        uint32_t srs25_sdcfspv_09_00   : 10; /**< [  9:  0](RO) SDCLK Clock Frequency Select - Preset Value. This field can be used by the software to update
                                                                 EMMC_HOST_SRS_SRS11[SDCFSH] and EMMC_HOST_SRS_SRS11[SDCFSL]. */
#else /* Word 0 - Little Endian */
        uint32_t srs25_sdcfspv_09_00   : 10; /**< [  9:  0](RO) SDCLK Clock Frequency Select - Preset Value. This field can be used by the software to update
                                                                 EMMC_HOST_SRS_SRS11[SDCFSH] and EMMC_HOST_SRS_SRS11[SDCFSL]. */
        uint32_t reserved_10_13        : 4;
        uint32_t srs25_dsspv_15_14     : 2;  /**< [ 15: 14](RO) Driver Strength Select - Preset Value. This field can be used by the software to update
                                                                 EMMC_HOST_SRS_SRS15[DSS]. */
        uint32_t srs25_sdcfspv_25_16   : 10; /**< [ 25: 16](RO) SDCLK Clock Frequency Select - Preset Value. This field can be used by the software to update
                                                                 EMMC_HOST_SRS_SRS11[SDCFSH] and EMMC_HOST_SRS_SRS11[SDCFSL]. */
        uint32_t reserved_26_29        : 4;
        uint32_t srs25_dsspv_31_30     : 2;  /**< [ 31: 30](RO) Driver Strength Select - Preset Value. This field can be used by the software to update
                                                                 EMMC_HOST_SRS_SRS15[DSS]. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_emmcx_host_srs_srs25_s cn; */
};
typedef union cavm_emmcx_host_srs_srs25 cavm_emmcx_host_srs_srs25_t;

static inline uint64_t CAVM_EMMCX_HOST_SRS_SRS25(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_EMMCX_HOST_SRS_SRS25(uint64_t a)
{
    if (a==0)
        return 0x824000000264ll + 0x1000000ll * ((a) & 0x0);
    __cavm_csr_fatal("EMMCX_HOST_SRS_SRS25", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_EMMCX_HOST_SRS_SRS25(a) cavm_emmcx_host_srs_srs25_t
#define bustype_CAVM_EMMCX_HOST_SRS_SRS25(a) CSR_TYPE_NCB32b
#define basename_CAVM_EMMCX_HOST_SRS_SRS25(a) "EMMCX_HOST_SRS_SRS25"
#define device_bar_CAVM_EMMCX_HOST_SRS_SRS25(a) 0x0 /* PF_BAR0 */
#define busnum_CAVM_EMMCX_HOST_SRS_SRS25(a) (a)
#define arguments_CAVM_EMMCX_HOST_SRS_SRS25(a) (a),-1,-1,-1

/**
 * Register (NCB32b) emmc#_host_srs_srs26
 *
 * EMMC Host Preset Value (SDR25 and SDR50) Register
 * EMMC_HOST_SRS_SRS26[15:0] - SDR25 if: EMMC_HOST_SRS_SRS15[V18SE]=1, EMMC_HOST_SRS_SRS15[UMS]=0x1.
 * EMMC_HOST_SRS_SRS26[31:16] - SDR50 if: EMMC_HOST_SRS_SRS15[V18SE]=1, EMMC_HOST_SRS_SRS15[UMS]=0x2.
 * HWINIT Register - Note this register is hardware initialized after reset and the value read back
 * will match the IP configuration.
 */
union cavm_emmcx_host_srs_srs26
{
    uint32_t u;
    struct cavm_emmcx_host_srs_srs26_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t srs26_dsspv_31_30     : 2;  /**< [ 31: 30](RO) Driver Strength Select - Preset Value. This field can be used by the software to update
                                                                 EMMC_HOST_SRS_SRS15[DSS]. */
        uint32_t reserved_26_29        : 4;
        uint32_t srs26_sdcfspv_25_16   : 10; /**< [ 25: 16](RO) SDCLK Clock Frequency Select - Preset Value. This field can be used by the software to update
                                                                 EMMC_HOST_SRS_SRS11[SDCFSH] and EMMC_HOST_SRS_SRS11[SDCFSL]. */
        uint32_t srs26_dsspv_15_14     : 2;  /**< [ 15: 14](RO) Driver Strength Select - Preset Value. This field can be used by the software to update
                                                                 EMMC_HOST_SRS_SRS15[DSS]. */
        uint32_t reserved_11_13        : 3;
        uint32_t srs26_cgspv_10        : 1;  /**< [ 10: 10](RO) Clock Generator Select - Preset Value. This field can be used by the software to update
                                                                 EMMC_HOST_SRS_SRS11[CGS]. */
        uint32_t srs26_sdcfspv_09_00   : 10; /**< [  9:  0](RO) SDCLK Clock Frequency Select - Preset Value. This field can be used by the software to update
                                                                 EMMC_HOST_SRS_SRS11[SDCFSH] and EMMC_HOST_SRS_SRS11[SDCFSL]." */
#else /* Word 0 - Little Endian */
        uint32_t srs26_sdcfspv_09_00   : 10; /**< [  9:  0](RO) SDCLK Clock Frequency Select - Preset Value. This field can be used by the software to update
                                                                 EMMC_HOST_SRS_SRS11[SDCFSH] and EMMC_HOST_SRS_SRS11[SDCFSL]." */
        uint32_t srs26_cgspv_10        : 1;  /**< [ 10: 10](RO) Clock Generator Select - Preset Value. This field can be used by the software to update
                                                                 EMMC_HOST_SRS_SRS11[CGS]. */
        uint32_t reserved_11_13        : 3;
        uint32_t srs26_dsspv_15_14     : 2;  /**< [ 15: 14](RO) Driver Strength Select - Preset Value. This field can be used by the software to update
                                                                 EMMC_HOST_SRS_SRS15[DSS]. */
        uint32_t srs26_sdcfspv_25_16   : 10; /**< [ 25: 16](RO) SDCLK Clock Frequency Select - Preset Value. This field can be used by the software to update
                                                                 EMMC_HOST_SRS_SRS11[SDCFSH] and EMMC_HOST_SRS_SRS11[SDCFSL]. */
        uint32_t reserved_26_29        : 4;
        uint32_t srs26_dsspv_31_30     : 2;  /**< [ 31: 30](RO) Driver Strength Select - Preset Value. This field can be used by the software to update
                                                                 EMMC_HOST_SRS_SRS15[DSS]. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_emmcx_host_srs_srs26_s cn; */
};
typedef union cavm_emmcx_host_srs_srs26 cavm_emmcx_host_srs_srs26_t;

static inline uint64_t CAVM_EMMCX_HOST_SRS_SRS26(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_EMMCX_HOST_SRS_SRS26(uint64_t a)
{
    if (a==0)
        return 0x824000000268ll + 0x1000000ll * ((a) & 0x0);
    __cavm_csr_fatal("EMMCX_HOST_SRS_SRS26", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_EMMCX_HOST_SRS_SRS26(a) cavm_emmcx_host_srs_srs26_t
#define bustype_CAVM_EMMCX_HOST_SRS_SRS26(a) CSR_TYPE_NCB32b
#define basename_CAVM_EMMCX_HOST_SRS_SRS26(a) "EMMCX_HOST_SRS_SRS26"
#define device_bar_CAVM_EMMCX_HOST_SRS_SRS26(a) 0x0 /* PF_BAR0 */
#define busnum_CAVM_EMMCX_HOST_SRS_SRS26(a) (a)
#define arguments_CAVM_EMMCX_HOST_SRS_SRS26(a) (a),-1,-1,-1

/**
 * Register (NCB32b) emmc#_host_srs_srs27
 *
 * EMMC Host Preset Value (SDR104 and DDR50) Register
 * EMMC_HOST_SRS_SRS27[15:0] - SDR104 if: EMMC_HOST_SRS_SRS15[V18SE]=1, EMMC_HOST_SRS_SRS15[UMS]=0x3.
 * EMMC_HOST_SRS_SRS27[31:16] - DDR50 if: EMMC_HOST_SRS_SRS15[V18SE]=1, EMMC_HOST_SRS_SRS15[UMS]=0x4.
 * HWINIT Register - Note this register is hardware initialized after reset and the
 * value read back will
 * match the IP configuration.
 */
union cavm_emmcx_host_srs_srs27
{
    uint32_t u;
    struct cavm_emmcx_host_srs_srs27_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t srs27_dsspv_31_30     : 2;  /**< [ 31: 30](RO) Driver Strength Select - Preset Value. This field can be used by the software to update
                                                                 EMMC_HOST_SRS_SRS15[DSS]. */
        uint32_t reserved_26_29        : 4;
        uint32_t srs27_sdcfspv_25_16   : 10; /**< [ 25: 16](RO) SDCLK Clock Frequency Select - Preset Value. This field can be used by the software to update
                                                                 EMMC_HOST_SRS_SRS11[SDCFSH] and EMMC_HOST_SRS_SRS11[SDCFSL]. */
        uint32_t srs27_dsspv_15_14     : 2;  /**< [ 15: 14](RO) Driver Strength Select - Preset Value. This field can be used by the software to update
                                                                 EMMC_HOST_SRS_SRS15[DSS]. */
        uint32_t reserved_10_13        : 4;
        uint32_t srs27_sdcfspv_09_00   : 10; /**< [  9:  0](RO) SDCLK Clock Frequency Select - Preset Value. This field can be used by the software to update
                                                                 EMMC_HOST_SRS_SRS11[SDCFSH] and EMMC_HOST_SRS_SRS11[SDCFSL]." */
#else /* Word 0 - Little Endian */
        uint32_t srs27_sdcfspv_09_00   : 10; /**< [  9:  0](RO) SDCLK Clock Frequency Select - Preset Value. This field can be used by the software to update
                                                                 EMMC_HOST_SRS_SRS11[SDCFSH] and EMMC_HOST_SRS_SRS11[SDCFSL]." */
        uint32_t reserved_10_13        : 4;
        uint32_t srs27_dsspv_15_14     : 2;  /**< [ 15: 14](RO) Driver Strength Select - Preset Value. This field can be used by the software to update
                                                                 EMMC_HOST_SRS_SRS15[DSS]. */
        uint32_t srs27_sdcfspv_25_16   : 10; /**< [ 25: 16](RO) SDCLK Clock Frequency Select - Preset Value. This field can be used by the software to update
                                                                 EMMC_HOST_SRS_SRS11[SDCFSH] and EMMC_HOST_SRS_SRS11[SDCFSL]. */
        uint32_t reserved_26_29        : 4;
        uint32_t srs27_dsspv_31_30     : 2;  /**< [ 31: 30](RO) Driver Strength Select - Preset Value. This field can be used by the software to update
                                                                 EMMC_HOST_SRS_SRS15[DSS]. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_emmcx_host_srs_srs27_s cn; */
};
typedef union cavm_emmcx_host_srs_srs27 cavm_emmcx_host_srs_srs27_t;

static inline uint64_t CAVM_EMMCX_HOST_SRS_SRS27(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_EMMCX_HOST_SRS_SRS27(uint64_t a)
{
    if (a==0)
        return 0x82400000026cll + 0x1000000ll * ((a) & 0x0);
    __cavm_csr_fatal("EMMCX_HOST_SRS_SRS27", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_EMMCX_HOST_SRS_SRS27(a) cavm_emmcx_host_srs_srs27_t
#define bustype_CAVM_EMMCX_HOST_SRS_SRS27(a) CSR_TYPE_NCB32b
#define basename_CAVM_EMMCX_HOST_SRS_SRS27(a) "EMMCX_HOST_SRS_SRS27"
#define device_bar_CAVM_EMMCX_HOST_SRS_SRS27(a) 0x0 /* PF_BAR0 */
#define busnum_CAVM_EMMCX_HOST_SRS_SRS27(a) (a)
#define arguments_CAVM_EMMCX_HOST_SRS_SRS27(a) (a),-1,-1,-1

/**
 * Register (NCB32b) emmc#_host_srs_srs30
 *
 * EMMC Host ADMA3 ID Address 1 Register
 */
union cavm_emmcx_host_srs_srs30
{
    uint32_t u;
    struct cavm_emmcx_host_srs_srs30_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t adma3id1              : 32; /**< [ 31:  0](R/W) ADMA3 Integrated Descriptor Address 1. This field contains the physical address of the currently
                                                                 processed ADMA3 Integrated Descriptor address. The Host Driver will set this register with the ID
                                                                 table base address before it starts the ADMA3 transfers. The Host Driver should not write this
                                                                 register while the data transfer is active. While the ADMA3 engine is processing the descriptors
                                                                 list,the ADMA3ID value is always incremented to point the next ID to be fetched. The host ADMA3
                                                                 engine ignores 2 or 3 least significant bits in this register when the 32-bit or 64-bit addressing
                                                                 is active, respectively. When ADMA3 uses 32-bit addressing mode, write to this register starts
                                                                 ADMA3. */
#else /* Word 0 - Little Endian */
        uint32_t adma3id1              : 32; /**< [ 31:  0](R/W) ADMA3 Integrated Descriptor Address 1. This field contains the physical address of the currently
                                                                 processed ADMA3 Integrated Descriptor address. The Host Driver will set this register with the ID
                                                                 table base address before it starts the ADMA3 transfers. The Host Driver should not write this
                                                                 register while the data transfer is active. While the ADMA3 engine is processing the descriptors
                                                                 list,the ADMA3ID value is always incremented to point the next ID to be fetched. The host ADMA3
                                                                 engine ignores 2 or 3 least significant bits in this register when the 32-bit or 64-bit addressing
                                                                 is active, respectively. When ADMA3 uses 32-bit addressing mode, write to this register starts
                                                                 ADMA3. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_emmcx_host_srs_srs30_s cn; */
};
typedef union cavm_emmcx_host_srs_srs30 cavm_emmcx_host_srs_srs30_t;

static inline uint64_t CAVM_EMMCX_HOST_SRS_SRS30(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_EMMCX_HOST_SRS_SRS30(uint64_t a)
{
    if (a==0)
        return 0x824000000278ll + 0x1000000ll * ((a) & 0x0);
    __cavm_csr_fatal("EMMCX_HOST_SRS_SRS30", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_EMMCX_HOST_SRS_SRS30(a) cavm_emmcx_host_srs_srs30_t
#define bustype_CAVM_EMMCX_HOST_SRS_SRS30(a) CSR_TYPE_NCB32b
#define basename_CAVM_EMMCX_HOST_SRS_SRS30(a) "EMMCX_HOST_SRS_SRS30"
#define device_bar_CAVM_EMMCX_HOST_SRS_SRS30(a) 0x0 /* PF_BAR0 */
#define busnum_CAVM_EMMCX_HOST_SRS_SRS30(a) (a)
#define arguments_CAVM_EMMCX_HOST_SRS_SRS30(a) (a),-1,-1,-1

/**
 * Register (NCB32b) emmc#_host_srs_srs31
 *
 * EMMC Host ADMA3 ID Address 2 Register
 */
union cavm_emmcx_host_srs_srs31
{
    uint32_t u;
    struct cavm_emmcx_host_srs_srs31_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t adma3id2              : 32; /**< [ 31:  0](R/W) ADMA3 Integrated Descriptor Address 2. If 64-bit addressing is enabled
                                                                 (EMMC_HOST_SRS_SRS15[A64B]=1), this field holds bits 63-32 of the physical address pointing on
                                                                 ADMA3 Integrated Descriptor table. When ADMA3 uses 64-bit addressing mode, write to this register
                                                                 starts ADMA3." */
#else /* Word 0 - Little Endian */
        uint32_t adma3id2              : 32; /**< [ 31:  0](R/W) ADMA3 Integrated Descriptor Address 2. If 64-bit addressing is enabled
                                                                 (EMMC_HOST_SRS_SRS15[A64B]=1), this field holds bits 63-32 of the physical address pointing on
                                                                 ADMA3 Integrated Descriptor table. When ADMA3 uses 64-bit addressing mode, write to this register
                                                                 starts ADMA3." */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_emmcx_host_srs_srs31_s cn; */
};
typedef union cavm_emmcx_host_srs_srs31 cavm_emmcx_host_srs_srs31_t;

static inline uint64_t CAVM_EMMCX_HOST_SRS_SRS31(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_EMMCX_HOST_SRS_SRS31(uint64_t a)
{
    if (a==0)
        return 0x82400000027cll + 0x1000000ll * ((a) & 0x0);
    __cavm_csr_fatal("EMMCX_HOST_SRS_SRS31", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_EMMCX_HOST_SRS_SRS31(a) cavm_emmcx_host_srs_srs31_t
#define bustype_CAVM_EMMCX_HOST_SRS_SRS31(a) CSR_TYPE_NCB32b
#define basename_CAVM_EMMCX_HOST_SRS_SRS31(a) "EMMCX_HOST_SRS_SRS31"
#define device_bar_CAVM_EMMCX_HOST_SRS_SRS31(a) 0x0 /* PF_BAR0 */
#define busnum_CAVM_EMMCX_HOST_SRS_SRS31(a) (a)
#define arguments_CAVM_EMMCX_HOST_SRS_SRS31(a) (a),-1,-1,-1

/**
 * Register (NCB) emmc#_intr
 *
 * EMMC PF Interrupt Register
 * This register contains the different interrupt summary bits of the EMMC.
 */
union cavm_emmcx_intr
{
    uint64_t u;
    struct cavm_emmcx_intr_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_1_63         : 63;
        uint64_t emmc_intr_out         : 1;  /**< [  0:  0](R/W1C/H) eMMC system interrupt set when any interrupt is triggered as indicated by EMMC_HOST_SRS_SRS12. */
#else /* Word 0 - Little Endian */
        uint64_t emmc_intr_out         : 1;  /**< [  0:  0](R/W1C/H) eMMC system interrupt set when any interrupt is triggered as indicated by EMMC_HOST_SRS_SRS12. */
        uint64_t reserved_1_63         : 63;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_emmcx_intr_s cn; */
};
typedef union cavm_emmcx_intr cavm_emmcx_intr_t;

static inline uint64_t CAVM_EMMCX_INTR(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_EMMCX_INTR(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CN10KA_AX) && (a==0))
        return 0x824000000718ll + 0x1000000ll * ((a) & 0x0);
    if (cavm_is_model(OCTEONTX_CNF10KA) && (a==0))
        return 0x824000000718ll + 0x1000000ll * ((a) & 0x0);
    __cavm_csr_fatal("EMMCX_INTR", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_EMMCX_INTR(a) cavm_emmcx_intr_t
#define bustype_CAVM_EMMCX_INTR(a) CSR_TYPE_NCB
#define basename_CAVM_EMMCX_INTR(a) "EMMCX_INTR"
#define device_bar_CAVM_EMMCX_INTR(a) 0x0 /* PF_BAR0 */
#define busnum_CAVM_EMMCX_INTR(a) (a)
#define arguments_CAVM_EMMCX_INTR(a) (a),-1,-1,-1

/**
 * Register (NCB) emmc#_intr_ena_w1c
 *
 * EMMC PF Interrupt Enable Clear Register
 * This register clears interrupt enable bits.
 */
union cavm_emmcx_intr_ena_w1c
{
    uint64_t u;
    struct cavm_emmcx_intr_ena_w1c_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_1_63         : 63;
        uint64_t emmc_intr_out         : 1;  /**< [  0:  0](R/W1C/H) Reads or clears enable for EMMC(0)_INTR[EMMC_INTR_OUT]. */
#else /* Word 0 - Little Endian */
        uint64_t emmc_intr_out         : 1;  /**< [  0:  0](R/W1C/H) Reads or clears enable for EMMC(0)_INTR[EMMC_INTR_OUT]. */
        uint64_t reserved_1_63         : 63;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_emmcx_intr_ena_w1c_s cn; */
};
typedef union cavm_emmcx_intr_ena_w1c cavm_emmcx_intr_ena_w1c_t;

static inline uint64_t CAVM_EMMCX_INTR_ENA_W1C(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_EMMCX_INTR_ENA_W1C(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CN10KA_AX) && (a==0))
        return 0x824000000728ll + 0x1000000ll * ((a) & 0x0);
    if (cavm_is_model(OCTEONTX_CNF10KA) && (a==0))
        return 0x824000000728ll + 0x1000000ll * ((a) & 0x0);
    __cavm_csr_fatal("EMMCX_INTR_ENA_W1C", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_EMMCX_INTR_ENA_W1C(a) cavm_emmcx_intr_ena_w1c_t
#define bustype_CAVM_EMMCX_INTR_ENA_W1C(a) CSR_TYPE_NCB
#define basename_CAVM_EMMCX_INTR_ENA_W1C(a) "EMMCX_INTR_ENA_W1C"
#define device_bar_CAVM_EMMCX_INTR_ENA_W1C(a) 0x0 /* PF_BAR0 */
#define busnum_CAVM_EMMCX_INTR_ENA_W1C(a) (a)
#define arguments_CAVM_EMMCX_INTR_ENA_W1C(a) (a),-1,-1,-1

/**
 * Register (NCB) emmc#_intr_ena_w1s
 *
 * EMMC PF Interrupt Enable Set Register
 * This register sets interrupt enable bits.
 */
union cavm_emmcx_intr_ena_w1s
{
    uint64_t u;
    struct cavm_emmcx_intr_ena_w1s_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_1_63         : 63;
        uint64_t emmc_intr_out         : 1;  /**< [  0:  0](R/W1S/H) Reads or sets enable for EMMC(0)_INTR[EMMC_INTR_OUT]. */
#else /* Word 0 - Little Endian */
        uint64_t emmc_intr_out         : 1;  /**< [  0:  0](R/W1S/H) Reads or sets enable for EMMC(0)_INTR[EMMC_INTR_OUT]. */
        uint64_t reserved_1_63         : 63;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_emmcx_intr_ena_w1s_s cn; */
};
typedef union cavm_emmcx_intr_ena_w1s cavm_emmcx_intr_ena_w1s_t;

static inline uint64_t CAVM_EMMCX_INTR_ENA_W1S(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_EMMCX_INTR_ENA_W1S(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CN10KA_AX) && (a==0))
        return 0x824000000730ll + 0x1000000ll * ((a) & 0x0);
    if (cavm_is_model(OCTEONTX_CNF10KA) && (a==0))
        return 0x824000000730ll + 0x1000000ll * ((a) & 0x0);
    __cavm_csr_fatal("EMMCX_INTR_ENA_W1S", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_EMMCX_INTR_ENA_W1S(a) cavm_emmcx_intr_ena_w1s_t
#define bustype_CAVM_EMMCX_INTR_ENA_W1S(a) CSR_TYPE_NCB
#define basename_CAVM_EMMCX_INTR_ENA_W1S(a) "EMMCX_INTR_ENA_W1S"
#define device_bar_CAVM_EMMCX_INTR_ENA_W1S(a) 0x0 /* PF_BAR0 */
#define busnum_CAVM_EMMCX_INTR_ENA_W1S(a) (a)
#define arguments_CAVM_EMMCX_INTR_ENA_W1S(a) (a),-1,-1,-1

/**
 * Register (NCB) emmc#_intr_w1s
 *
 * EMMC PF Interrupt Set Register
 * This register sets interrupt bits.
 */
union cavm_emmcx_intr_w1s
{
    uint64_t u;
    struct cavm_emmcx_intr_w1s_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_1_63         : 63;
        uint64_t emmc_intr_out         : 1;  /**< [  0:  0](R/W1S/H) Reads or sets EMMC(0)_INTR[EMMC_INTR_OUT]. */
#else /* Word 0 - Little Endian */
        uint64_t emmc_intr_out         : 1;  /**< [  0:  0](R/W1S/H) Reads or sets EMMC(0)_INTR[EMMC_INTR_OUT]. */
        uint64_t reserved_1_63         : 63;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_emmcx_intr_w1s_s cn; */
};
typedef union cavm_emmcx_intr_w1s cavm_emmcx_intr_w1s_t;

static inline uint64_t CAVM_EMMCX_INTR_W1S(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_EMMCX_INTR_W1S(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CN10KA_AX) && (a==0))
        return 0x824000000720ll + 0x1000000ll * ((a) & 0x0);
    if (cavm_is_model(OCTEONTX_CNF10KA) && (a==0))
        return 0x824000000720ll + 0x1000000ll * ((a) & 0x0);
    __cavm_csr_fatal("EMMCX_INTR_W1S", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_EMMCX_INTR_W1S(a) cavm_emmcx_intr_w1s_t
#define bustype_CAVM_EMMCX_INTR_W1S(a) CSR_TYPE_NCB
#define basename_CAVM_EMMCX_INTR_W1S(a) "EMMCX_INTR_W1S"
#define device_bar_CAVM_EMMCX_INTR_W1S(a) 0x0 /* PF_BAR0 */
#define busnum_CAVM_EMMCX_INTR_W1S(a) (a)
#define arguments_CAVM_EMMCX_INTR_W1S(a) (a),-1,-1,-1

/**
 * Register (NCB) emmc#_msix_pba#
 *
 * EMMC MSI-X Pending Bit Array Registers
 * This register is the MSI-X PBA table, the bit number is indexed by the EMMC_INT_VEC_E enumeration.
 */
union cavm_emmcx_msix_pbax
{
    uint64_t u;
    struct cavm_emmcx_msix_pbax_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t pend                  : 64; /**< [ 63:  0](RO/H) Pending message for each interrupt, enumerated by EMMC_INT_VEC_E. Bits that have no
                                                                 associated EMMC_INT_VEC_E are zero. */
#else /* Word 0 - Little Endian */
        uint64_t pend                  : 64; /**< [ 63:  0](RO/H) Pending message for each interrupt, enumerated by EMMC_INT_VEC_E. Bits that have no
                                                                 associated EMMC_INT_VEC_E are zero. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_emmcx_msix_pbax_s cn; */
};
typedef union cavm_emmcx_msix_pbax cavm_emmcx_msix_pbax_t;

static inline uint64_t CAVM_EMMCX_MSIX_PBAX(uint64_t a, uint64_t b) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_EMMCX_MSIX_PBAX(uint64_t a, uint64_t b)
{
    if ((a==0) && (b==0))
        return 0x824009ff0000ll + 0x1000000ll * ((a) & 0x0) + 8ll * ((b) & 0x0);
    __cavm_csr_fatal("EMMCX_MSIX_PBAX", 2, a, b, 0, 0, 0, 0);
}

#define typedef_CAVM_EMMCX_MSIX_PBAX(a,b) cavm_emmcx_msix_pbax_t
#define bustype_CAVM_EMMCX_MSIX_PBAX(a,b) CSR_TYPE_NCB
#define basename_CAVM_EMMCX_MSIX_PBAX(a,b) "EMMCX_MSIX_PBAX"
#define device_bar_CAVM_EMMCX_MSIX_PBAX(a,b) 0x4 /* PF_BAR4 */
#define busnum_CAVM_EMMCX_MSIX_PBAX(a,b) (a)
#define arguments_CAVM_EMMCX_MSIX_PBAX(a,b) (a),(b),-1,-1

/**
 * Register (NCB) emmc#_msix_vec#_addr
 *
 * EMMC MSI-X Vector Table Address Registers
 * This register is the MSI-X vector table, indexed by the EMMC_INT_VEC_E enumeration.
 */
union cavm_emmcx_msix_vecx_addr
{
    uint64_t u;
    struct cavm_emmcx_msix_vecx_addr_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_53_63        : 11;
        uint64_t addr                  : 51; /**< [ 52:  2](R/W) IOVA to use for MSI-X delivery of this vector. */
        uint64_t reserved_1            : 1;
        uint64_t secvec                : 1;  /**< [  0:  0](SR/W) Secure vector.
                                                                 0 = This vector may be read or written by either secure or nonsecure states.
                                                                 The vector's IOVA is sent to the SMMU as nonsecure (though this only affects
                                                                 physical addresses if PCCPF_XXX_VSEC_SCTL[MSIX_PHYS]=1).

                                                                 1 = This vector's EMMC()_MSIX_VEC()_ADDR, EMMC()_MSIX_VEC()_CTL, and
                                                                 corresponding bit of EMMC()_MSIX_PBA() are RAZ/WI and does not cause a fault when accessed
                                                                 by the nonsecure world. */
#else /* Word 0 - Little Endian */
        uint64_t secvec                : 1;  /**< [  0:  0](SR/W) Secure vector.
                                                                 0 = This vector may be read or written by either secure or nonsecure states.
                                                                 The vector's IOVA is sent to the SMMU as nonsecure (though this only affects
                                                                 physical addresses if PCCPF_XXX_VSEC_SCTL[MSIX_PHYS]=1).

                                                                 1 = This vector's EMMC()_MSIX_VEC()_ADDR, EMMC()_MSIX_VEC()_CTL, and
                                                                 corresponding bit of EMMC()_MSIX_PBA() are RAZ/WI and does not cause a fault when accessed
                                                                 by the nonsecure world. */
        uint64_t reserved_1            : 1;
        uint64_t addr                  : 51; /**< [ 52:  2](R/W) IOVA to use for MSI-X delivery of this vector. */
        uint64_t reserved_53_63        : 11;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_emmcx_msix_vecx_addr_s cn; */
};
typedef union cavm_emmcx_msix_vecx_addr cavm_emmcx_msix_vecx_addr_t;

static inline uint64_t CAVM_EMMCX_MSIX_VECX_ADDR(uint64_t a, uint64_t b) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_EMMCX_MSIX_VECX_ADDR(uint64_t a, uint64_t b)
{
    if (cavm_is_model(OCTEONTX_CN10KA_AX) && ((a==0) && (b==0)))
        return 0x824009f00000ll + 0x1000000ll * ((a) & 0x0) + 0x10ll * ((b) & 0x0);
    if (cavm_is_model(OCTEONTX_CN10KA_BX) && ((a==0) && (b<=1)))
        return 0x824009f00000ll + 0x1000000ll * ((a) & 0x0) + 0x10ll * ((b) & 0x1);
    if (cavm_is_model(OCTEONTX_CN10KB) && ((a==0) && (b<=1)))
        return 0x824009f00000ll + 0x1000000ll * ((a) & 0x0) + 0x10ll * ((b) & 0x1);
    if (cavm_is_model(OCTEONTX_CNF10KA) && ((a==0) && (b==0)))
        return 0x824009f00000ll + 0x1000000ll * ((a) & 0x0) + 0x10ll * ((b) & 0x0);
    if (cavm_is_model(OCTEONTX_CNF10KB) && ((a==0) && (b<=1)))
        return 0x824009f00000ll + 0x1000000ll * ((a) & 0x0) + 0x10ll * ((b) & 0x1);
    __cavm_csr_fatal("EMMCX_MSIX_VECX_ADDR", 2, a, b, 0, 0, 0, 0);
}

#define typedef_CAVM_EMMCX_MSIX_VECX_ADDR(a,b) cavm_emmcx_msix_vecx_addr_t
#define bustype_CAVM_EMMCX_MSIX_VECX_ADDR(a,b) CSR_TYPE_NCB
#define basename_CAVM_EMMCX_MSIX_VECX_ADDR(a,b) "EMMCX_MSIX_VECX_ADDR"
#define device_bar_CAVM_EMMCX_MSIX_VECX_ADDR(a,b) 0x4 /* PF_BAR4 */
#define busnum_CAVM_EMMCX_MSIX_VECX_ADDR(a,b) (a)
#define arguments_CAVM_EMMCX_MSIX_VECX_ADDR(a,b) (a),(b),-1,-1

/**
 * Register (NCB) emmc#_msix_vec#_ctl
 *
 * EMMC MSI-X Vector Table Control and Data Registers
 * This register is the MSI-X vector table, indexed by the EMMC_INT_VEC_E enumeration.
 */
union cavm_emmcx_msix_vecx_ctl
{
    uint64_t u;
    struct cavm_emmcx_msix_vecx_ctl_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_33_63        : 31;
        uint64_t mask                  : 1;  /**< [ 32: 32](R/W) When set, no MSI-X interrupts will be sent to this vector. */
        uint64_t data                  : 32; /**< [ 31:  0](R/W) Data to use for MSI-X delivery of this vector. */
#else /* Word 0 - Little Endian */
        uint64_t data                  : 32; /**< [ 31:  0](R/W) Data to use for MSI-X delivery of this vector. */
        uint64_t mask                  : 1;  /**< [ 32: 32](R/W) When set, no MSI-X interrupts will be sent to this vector. */
        uint64_t reserved_33_63        : 31;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_emmcx_msix_vecx_ctl_s cn; */
};
typedef union cavm_emmcx_msix_vecx_ctl cavm_emmcx_msix_vecx_ctl_t;

static inline uint64_t CAVM_EMMCX_MSIX_VECX_CTL(uint64_t a, uint64_t b) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_EMMCX_MSIX_VECX_CTL(uint64_t a, uint64_t b)
{
    if (cavm_is_model(OCTEONTX_CN10KA_AX) && ((a==0) && (b==0)))
        return 0x824009f00008ll + 0x1000000ll * ((a) & 0x0) + 0x10ll * ((b) & 0x0);
    if (cavm_is_model(OCTEONTX_CN10KA_BX) && ((a==0) && (b<=1)))
        return 0x824009f00008ll + 0x1000000ll * ((a) & 0x0) + 0x10ll * ((b) & 0x1);
    if (cavm_is_model(OCTEONTX_CN10KB) && ((a==0) && (b<=1)))
        return 0x824009f00008ll + 0x1000000ll * ((a) & 0x0) + 0x10ll * ((b) & 0x1);
    if (cavm_is_model(OCTEONTX_CNF10KA) && ((a==0) && (b==0)))
        return 0x824009f00008ll + 0x1000000ll * ((a) & 0x0) + 0x10ll * ((b) & 0x0);
    if (cavm_is_model(OCTEONTX_CNF10KB) && ((a==0) && (b<=1)))
        return 0x824009f00008ll + 0x1000000ll * ((a) & 0x0) + 0x10ll * ((b) & 0x1);
    __cavm_csr_fatal("EMMCX_MSIX_VECX_CTL", 2, a, b, 0, 0, 0, 0);
}

#define typedef_CAVM_EMMCX_MSIX_VECX_CTL(a,b) cavm_emmcx_msix_vecx_ctl_t
#define bustype_CAVM_EMMCX_MSIX_VECX_CTL(a,b) CSR_TYPE_NCB
#define basename_CAVM_EMMCX_MSIX_VECX_CTL(a,b) "EMMCX_MSIX_VECX_CTL"
#define device_bar_CAVM_EMMCX_MSIX_VECX_CTL(a,b) 0x4 /* PF_BAR4 */
#define busnum_CAVM_EMMCX_MSIX_VECX_CTL(a,b) (a)
#define arguments_CAVM_EMMCX_MSIX_VECX_CTL(a,b) (a),(b),-1,-1

/**
 * Register (NCB32b) emmc#_phy_ctb_rfile_phy_ctrl
 *
 * EMMC PHY Ctb Rfile PHY Ctrl Register
 * This register handles the global control settings for the PHY.
 */
union cavm_emmcx_phy_ctb_rfile_phy_ctrl
{
    uint32_t u;
    struct cavm_emmcx_phy_ctb_rfile_phy_ctrl_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t reserved_22_31        : 10;
        uint32_t pu_pd_polarity        : 1;  /**< [ 21: 21](R/W) Defines the polarity of the ALE port that in SD works as pull-up/pull-down signal for bit 2 of the
                                                                 DATA.
                                                                 0 - ALE port is a copy of dfi_ale.
                                                                 1 - ALE port is inverted version of dfi_ale. */
        uint32_t low_freq_sel          : 1;  /**< [ 20: 20](R/W) If this field is set high the DFI interface is synchronous to the falling edge of the clock i.e.
                                                                 the input signals are latched at the falling edge of the clk_ctrl and output signals are sync to
                                                                 falling edge of the clk_ctrl. Otherwise the interface is sync to the rising edge of the clk_ctrl. */
        uint32_t reserved_15_19        : 5;
        uint32_t sdr_dqs_value         : 1;  /**< [ 14: 14](R/W) The value that should be driven on the DQS pin while SDR operations are in progress. Please note
                                                                 that in the DDR modes of operations, the command and address cycles are still in SDR mode. This
                                                                 field informs the PHY of the value to be driven onto the DQS bus during these SDR cycles. */
        uint32_t reserved_10_13        : 4;
        uint32_t phony_dqs_timing      : 6;  /**< [  9:  4](R/W) The timing of assertion of phony DQS to the data slices. If the extended_read_mode is disabled the
                                                                 value should be zero. If the extended_read_mode is enabled the value should match the width of the
                                                                 rebar pulse in terms of clock PHY clock cycles reduced by 1. e.g. if rebar pulse width is 4 clock
                                                                 cycles the value of this field should be 3. */
        uint32_t reserved_1_3          : 3;
        uint32_t ctrl_clkperiod_delay  : 1;  /**< [  0:  0](R/W) Defines additional latency on the control signals ALE/CLE/WE/RE/CE/WP. */
#else /* Word 0 - Little Endian */
        uint32_t ctrl_clkperiod_delay  : 1;  /**< [  0:  0](R/W) Defines additional latency on the control signals ALE/CLE/WE/RE/CE/WP. */
        uint32_t reserved_1_3          : 3;
        uint32_t phony_dqs_timing      : 6;  /**< [  9:  4](R/W) The timing of assertion of phony DQS to the data slices. If the extended_read_mode is disabled the
                                                                 value should be zero. If the extended_read_mode is enabled the value should match the width of the
                                                                 rebar pulse in terms of clock PHY clock cycles reduced by 1. e.g. if rebar pulse width is 4 clock
                                                                 cycles the value of this field should be 3. */
        uint32_t reserved_10_13        : 4;
        uint32_t sdr_dqs_value         : 1;  /**< [ 14: 14](R/W) The value that should be driven on the DQS pin while SDR operations are in progress. Please note
                                                                 that in the DDR modes of operations, the command and address cycles are still in SDR mode. This
                                                                 field informs the PHY of the value to be driven onto the DQS bus during these SDR cycles. */
        uint32_t reserved_15_19        : 5;
        uint32_t low_freq_sel          : 1;  /**< [ 20: 20](R/W) If this field is set high the DFI interface is synchronous to the falling edge of the clock i.e.
                                                                 the input signals are latched at the falling edge of the clk_ctrl and output signals are sync to
                                                                 falling edge of the clk_ctrl. Otherwise the interface is sync to the rising edge of the clk_ctrl. */
        uint32_t pu_pd_polarity        : 1;  /**< [ 21: 21](R/W) Defines the polarity of the ALE port that in SD works as pull-up/pull-down signal for bit 2 of the
                                                                 DATA.
                                                                 0 - ALE port is a copy of dfi_ale.
                                                                 1 - ALE port is inverted version of dfi_ale. */
        uint32_t reserved_22_31        : 10;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_emmcx_phy_ctb_rfile_phy_ctrl_s cn; */
};
typedef union cavm_emmcx_phy_ctb_rfile_phy_ctrl cavm_emmcx_phy_ctb_rfile_phy_ctrl_t;

static inline uint64_t CAVM_EMMCX_PHY_CTB_RFILE_PHY_CTRL(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_EMMCX_PHY_CTB_RFILE_PHY_CTRL(uint64_t a)
{
    if (a==0)
        return 0x824000002080ll + 0x1000000ll * ((a) & 0x0);
    __cavm_csr_fatal("EMMCX_PHY_CTB_RFILE_PHY_CTRL", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_EMMCX_PHY_CTB_RFILE_PHY_CTRL(a) cavm_emmcx_phy_ctb_rfile_phy_ctrl_t
#define bustype_CAVM_EMMCX_PHY_CTB_RFILE_PHY_CTRL(a) CSR_TYPE_NCB32b
#define basename_CAVM_EMMCX_PHY_CTB_RFILE_PHY_CTRL(a) "EMMCX_PHY_CTB_RFILE_PHY_CTRL"
#define device_bar_CAVM_EMMCX_PHY_CTB_RFILE_PHY_CTRL(a) 0x0 /* PF_BAR0 */
#define busnum_CAVM_EMMCX_PHY_CTB_RFILE_PHY_CTRL(a) (a)
#define arguments_CAVM_EMMCX_PHY_CTB_RFILE_PHY_CTRL(a) (a),-1,-1,-1

/**
 * Register (NCB32b) emmc#_phy_ctb_rfile_phy_gpio_ctrl_0
 *
 * EMMC PHY Ctb Rfile PHY GPIO Ctrl 0 Register
 * This register is a general purpose register. The [31:0]vector is brought to the PHY I/Os. User may
 * choose to use these pins to control any static settings that may be required for
 * connected I/O pads.
 */
union cavm_emmcx_phy_ctb_rfile_phy_gpio_ctrl_0
{
    uint32_t u;
    struct cavm_emmcx_phy_ctb_rfile_phy_gpio_ctrl_0_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t phy_gpio_ctrl_0_value : 24; /**< [ 31:  8](R/W) General purpose register field. The [31:0] vector is brought to the PHY I/Os. User may choose to
                                                                 use these pins to control any static settings that may be required for the connected I/O pads. */
        uint32_t emmc_clk_ovr_en       : 1;  /**< [  7:  7](R/W) EMMC_CLK output control.
                                                                 0 = EMMC_CLK is tristated.
                                                                 1 = EMMC_CLK is actively driven with data from eMMC IP block. */
        uint32_t drive                 : 2;  /**< [  6:  5](R/W) emmc_io_ctl output impedance.
                                                                 0x0 = 55 ohm.
                                                                 0x1 = 45 ohm.
                                                                 0x2 = 33 ohm.
                                                                 0x3 = 20 ohm. */
        uint32_t drv_str_ovr_en        : 1;  /**< [  4:  4](R/W) emmc_io_ctl output drive strength override enable.
                                                                 0x0 = Drive is 0x10.
                                                                 0x1 = Drive strenght as per DRIVE. */
        uint32_t reserved_3            : 1;
        uint32_t slew                  : 2;  /**< [  2:  1](R/W) emmc_io_ctl output slew rate control.
                                                                 0x0 = Weakest.
                                                                 _ ...
                                                                 0x3 = Strongest. */
        uint32_t slew_rate_ovr_en      : 1;  /**< [  0:  0](R/W) emmc_io_ctl output slew rate control override enable.
                                                                 0x0 = SLEW is 0x11.
                                                                 0x1 = SLEW rate as per SLEW . */
#else /* Word 0 - Little Endian */
        uint32_t slew_rate_ovr_en      : 1;  /**< [  0:  0](R/W) emmc_io_ctl output slew rate control override enable.
                                                                 0x0 = SLEW is 0x11.
                                                                 0x1 = SLEW rate as per SLEW . */
        uint32_t slew                  : 2;  /**< [  2:  1](R/W) emmc_io_ctl output slew rate control.
                                                                 0x0 = Weakest.
                                                                 _ ...
                                                                 0x3 = Strongest. */
        uint32_t reserved_3            : 1;
        uint32_t drv_str_ovr_en        : 1;  /**< [  4:  4](R/W) emmc_io_ctl output drive strength override enable.
                                                                 0x0 = Drive is 0x10.
                                                                 0x1 = Drive strenght as per DRIVE. */
        uint32_t drive                 : 2;  /**< [  6:  5](R/W) emmc_io_ctl output impedance.
                                                                 0x0 = 55 ohm.
                                                                 0x1 = 45 ohm.
                                                                 0x2 = 33 ohm.
                                                                 0x3 = 20 ohm. */
        uint32_t emmc_clk_ovr_en       : 1;  /**< [  7:  7](R/W) EMMC_CLK output control.
                                                                 0 = EMMC_CLK is tristated.
                                                                 1 = EMMC_CLK is actively driven with data from eMMC IP block. */
        uint32_t phy_gpio_ctrl_0_value : 24; /**< [ 31:  8](R/W) General purpose register field. The [31:0] vector is brought to the PHY I/Os. User may choose to
                                                                 use these pins to control any static settings that may be required for the connected I/O pads. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_emmcx_phy_ctb_rfile_phy_gpio_ctrl_0_s cn; */
};
typedef union cavm_emmcx_phy_ctb_rfile_phy_gpio_ctrl_0 cavm_emmcx_phy_ctb_rfile_phy_gpio_ctrl_0_t;

static inline uint64_t CAVM_EMMCX_PHY_CTB_RFILE_PHY_GPIO_CTRL_0(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_EMMCX_PHY_CTB_RFILE_PHY_GPIO_CTRL_0(uint64_t a)
{
    if (a==0)
        return 0x824000002088ll + 0x1000000ll * ((a) & 0x0);
    __cavm_csr_fatal("EMMCX_PHY_CTB_RFILE_PHY_GPIO_CTRL_0", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_EMMCX_PHY_CTB_RFILE_PHY_GPIO_CTRL_0(a) cavm_emmcx_phy_ctb_rfile_phy_gpio_ctrl_0_t
#define bustype_CAVM_EMMCX_PHY_CTB_RFILE_PHY_GPIO_CTRL_0(a) CSR_TYPE_NCB32b
#define basename_CAVM_EMMCX_PHY_CTB_RFILE_PHY_GPIO_CTRL_0(a) "EMMCX_PHY_CTB_RFILE_PHY_GPIO_CTRL_0"
#define device_bar_CAVM_EMMCX_PHY_CTB_RFILE_PHY_GPIO_CTRL_0(a) 0x0 /* PF_BAR0 */
#define busnum_CAVM_EMMCX_PHY_CTB_RFILE_PHY_GPIO_CTRL_0(a) (a)
#define arguments_CAVM_EMMCX_PHY_CTB_RFILE_PHY_GPIO_CTRL_0(a) (a),-1,-1,-1

/**
 * Register (NCB32b) emmc#_phy_ctb_rfile_phy_gpio_ctrl_1
 *
 * EMMC PHY Ctb Rfile PHY GPIO Ctrl 1 Register
 * This register is a general purpose register. The [31:0] vector is brought to the PHY I/Os. User may
 * choose to use these pins to control any static settings that may be required for the
 * connected I/O pads.
 */
union cavm_emmcx_phy_ctb_rfile_phy_gpio_ctrl_1
{
    uint32_t u;
    struct cavm_emmcx_phy_ctb_rfile_phy_gpio_ctrl_1_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t phy_gpio_ctrl_1_value : 32; /**< [ 31:  0](R/W) General purpose register field. The [31:0] vector is brought to the PHY I/Os. User may choose to
                                                                 use these pins to control any static settings that may be required for the connected I/O pads. */
#else /* Word 0 - Little Endian */
        uint32_t phy_gpio_ctrl_1_value : 32; /**< [ 31:  0](R/W) General purpose register field. The [31:0] vector is brought to the PHY I/Os. User may choose to
                                                                 use these pins to control any static settings that may be required for the connected I/O pads. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_emmcx_phy_ctb_rfile_phy_gpio_ctrl_1_s cn; */
};
typedef union cavm_emmcx_phy_ctb_rfile_phy_gpio_ctrl_1 cavm_emmcx_phy_ctb_rfile_phy_gpio_ctrl_1_t;

static inline uint64_t CAVM_EMMCX_PHY_CTB_RFILE_PHY_GPIO_CTRL_1(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_EMMCX_PHY_CTB_RFILE_PHY_GPIO_CTRL_1(uint64_t a)
{
    if (a==0)
        return 0x82400000208cll + 0x1000000ll * ((a) & 0x0);
    __cavm_csr_fatal("EMMCX_PHY_CTB_RFILE_PHY_GPIO_CTRL_1", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_EMMCX_PHY_CTB_RFILE_PHY_GPIO_CTRL_1(a) cavm_emmcx_phy_ctb_rfile_phy_gpio_ctrl_1_t
#define bustype_CAVM_EMMCX_PHY_CTB_RFILE_PHY_GPIO_CTRL_1(a) CSR_TYPE_NCB32b
#define basename_CAVM_EMMCX_PHY_CTB_RFILE_PHY_GPIO_CTRL_1(a) "EMMCX_PHY_CTB_RFILE_PHY_GPIO_CTRL_1"
#define device_bar_CAVM_EMMCX_PHY_CTB_RFILE_PHY_GPIO_CTRL_1(a) 0x0 /* PF_BAR0 */
#define busnum_CAVM_EMMCX_PHY_CTB_RFILE_PHY_GPIO_CTRL_1(a) (a)
#define arguments_CAVM_EMMCX_PHY_CTB_RFILE_PHY_GPIO_CTRL_1(a) (a),-1,-1,-1

/**
 * Register (NCB32b) emmc#_phy_ctb_rfile_phy_gpio_status_0
 *
 * EMMC PHY Ctb Rfile PHY GPIO Status 0 Register
 * This register is a general purpose register. A [31:0] vector is brought from the PHY I/Os to this
 * register. User may choose to use this as a status register.
 */
union cavm_emmcx_phy_ctb_rfile_phy_gpio_status_0
{
    uint32_t u;
    struct cavm_emmcx_phy_ctb_rfile_phy_gpio_status_0_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t phy_gpio_status_0_value : 32;/**< [ 31:  0](RO) This register is a general purpose register. A [31:0] vector is brought from the PHY I/Os to this
                                                                 register. User may choose to use this as a status register. */
#else /* Word 0 - Little Endian */
        uint32_t phy_gpio_status_0_value : 32;/**< [ 31:  0](RO) This register is a general purpose register. A [31:0] vector is brought from the PHY I/Os to this
                                                                 register. User may choose to use this as a status register. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_emmcx_phy_ctb_rfile_phy_gpio_status_0_s cn; */
};
typedef union cavm_emmcx_phy_ctb_rfile_phy_gpio_status_0 cavm_emmcx_phy_ctb_rfile_phy_gpio_status_0_t;

static inline uint64_t CAVM_EMMCX_PHY_CTB_RFILE_PHY_GPIO_STATUS_0(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_EMMCX_PHY_CTB_RFILE_PHY_GPIO_STATUS_0(uint64_t a)
{
    if (a==0)
        return 0x824000002090ll + 0x1000000ll * ((a) & 0x0);
    __cavm_csr_fatal("EMMCX_PHY_CTB_RFILE_PHY_GPIO_STATUS_0", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_EMMCX_PHY_CTB_RFILE_PHY_GPIO_STATUS_0(a) cavm_emmcx_phy_ctb_rfile_phy_gpio_status_0_t
#define bustype_CAVM_EMMCX_PHY_CTB_RFILE_PHY_GPIO_STATUS_0(a) CSR_TYPE_NCB32b
#define basename_CAVM_EMMCX_PHY_CTB_RFILE_PHY_GPIO_STATUS_0(a) "EMMCX_PHY_CTB_RFILE_PHY_GPIO_STATUS_0"
#define device_bar_CAVM_EMMCX_PHY_CTB_RFILE_PHY_GPIO_STATUS_0(a) 0x0 /* PF_BAR0 */
#define busnum_CAVM_EMMCX_PHY_CTB_RFILE_PHY_GPIO_STATUS_0(a) (a)
#define arguments_CAVM_EMMCX_PHY_CTB_RFILE_PHY_GPIO_STATUS_0(a) (a),-1,-1,-1

/**
 * Register (NCB32b) emmc#_phy_ctb_rfile_phy_gpio_status_1
 *
 * EMMC PHY Ctb Rfile PHY GPIO Status 1 Register
 * This register is a general purpose register. A [31:0] vector is brought from the PHY I/Os to this
 * register. User may choose to use this as a status register.
 */
union cavm_emmcx_phy_ctb_rfile_phy_gpio_status_1
{
    uint32_t u;
    struct cavm_emmcx_phy_ctb_rfile_phy_gpio_status_1_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t phy_gpio_status_1_value : 32;/**< [ 31:  0](RO) This register is a general purpose register. A [31:0] vector is brought from the PHY I/Os to this
                                                                 register. User may choose to use this as a status register. */
#else /* Word 0 - Little Endian */
        uint32_t phy_gpio_status_1_value : 32;/**< [ 31:  0](RO) This register is a general purpose register. A [31:0] vector is brought from the PHY I/Os to this
                                                                 register. User may choose to use this as a status register. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_emmcx_phy_ctb_rfile_phy_gpio_status_1_s cn; */
};
typedef union cavm_emmcx_phy_ctb_rfile_phy_gpio_status_1 cavm_emmcx_phy_ctb_rfile_phy_gpio_status_1_t;

static inline uint64_t CAVM_EMMCX_PHY_CTB_RFILE_PHY_GPIO_STATUS_1(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_EMMCX_PHY_CTB_RFILE_PHY_GPIO_STATUS_1(uint64_t a)
{
    if (a==0)
        return 0x824000002094ll + 0x1000000ll * ((a) & 0x0);
    __cavm_csr_fatal("EMMCX_PHY_CTB_RFILE_PHY_GPIO_STATUS_1", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_EMMCX_PHY_CTB_RFILE_PHY_GPIO_STATUS_1(a) cavm_emmcx_phy_ctb_rfile_phy_gpio_status_1_t
#define bustype_CAVM_EMMCX_PHY_CTB_RFILE_PHY_GPIO_STATUS_1(a) CSR_TYPE_NCB32b
#define basename_CAVM_EMMCX_PHY_CTB_RFILE_PHY_GPIO_STATUS_1(a) "EMMCX_PHY_CTB_RFILE_PHY_GPIO_STATUS_1"
#define device_bar_CAVM_EMMCX_PHY_CTB_RFILE_PHY_GPIO_STATUS_1(a) 0x0 /* PF_BAR0 */
#define busnum_CAVM_EMMCX_PHY_CTB_RFILE_PHY_GPIO_STATUS_1(a) (a)
#define arguments_CAVM_EMMCX_PHY_CTB_RFILE_PHY_GPIO_STATUS_1(a) (a),-1,-1,-1

/**
 * Register (NCB32b) emmc#_phy_ctb_rfile_phy_tsel
 *
 * EMMC PHY Ctb Rfile PHY Tsel Register
 * This register handles the global control settings for the termination selects for reads.
 * For SD and XSPI controllers this should be disabled.
 */
union cavm_emmcx_phy_ctb_rfile_phy_tsel
{
    uint32_t u;
    struct cavm_emmcx_phy_ctb_rfile_phy_tsel_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t reserved_24_31        : 8;
        uint32_t tsel_off_value_data   : 4;  /**< [ 23: 20](R/W) Termination select off value for the data. */
        uint32_t tsel_rd_value_data    : 4;  /**< [ 19: 16](R/W) Termination select read value for the data. */
        uint32_t tsel_off_value_dqs    : 4;  /**< [ 15: 12](R/W) Termination select off value for the data strobe. */
        uint32_t tsel_rd_value_dqs     : 4;  /**< [ 11:  8](R/W) Termination select read value for the data strobe. */
        uint32_t reserved_0_7          : 8;
#else /* Word 0 - Little Endian */
        uint32_t reserved_0_7          : 8;
        uint32_t tsel_rd_value_dqs     : 4;  /**< [ 11:  8](R/W) Termination select read value for the data strobe. */
        uint32_t tsel_off_value_dqs    : 4;  /**< [ 15: 12](R/W) Termination select off value for the data strobe. */
        uint32_t tsel_rd_value_data    : 4;  /**< [ 19: 16](R/W) Termination select read value for the data. */
        uint32_t tsel_off_value_data   : 4;  /**< [ 23: 20](R/W) Termination select off value for the data. */
        uint32_t reserved_24_31        : 8;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_emmcx_phy_ctb_rfile_phy_tsel_s cn; */
};
typedef union cavm_emmcx_phy_ctb_rfile_phy_tsel cavm_emmcx_phy_ctb_rfile_phy_tsel_t;

static inline uint64_t CAVM_EMMCX_PHY_CTB_RFILE_PHY_TSEL(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_EMMCX_PHY_CTB_RFILE_PHY_TSEL(uint64_t a)
{
    if (a==0)
        return 0x824000002084ll + 0x1000000ll * ((a) & 0x0);
    __cavm_csr_fatal("EMMCX_PHY_CTB_RFILE_PHY_TSEL", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_EMMCX_PHY_CTB_RFILE_PHY_TSEL(a) cavm_emmcx_phy_ctb_rfile_phy_tsel_t
#define bustype_CAVM_EMMCX_PHY_CTB_RFILE_PHY_TSEL(a) CSR_TYPE_NCB32b
#define basename_CAVM_EMMCX_PHY_CTB_RFILE_PHY_TSEL(a) "EMMCX_PHY_CTB_RFILE_PHY_TSEL"
#define device_bar_CAVM_EMMCX_PHY_CTB_RFILE_PHY_TSEL(a) 0x0 /* PF_BAR0 */
#define busnum_CAVM_EMMCX_PHY_CTB_RFILE_PHY_TSEL(a) (a)
#define arguments_CAVM_EMMCX_PHY_CTB_RFILE_PHY_TSEL(a) (a),-1,-1,-1

/**
 * Register (NCB32b) emmc#_phy_dataslice_rfile_phy_dll_master_ctrl
 *
 * EMMC PHY Dataslice Rfile PHY DLL Master Ctrl Register
 * This register holds the control for the Master DLL logic.
 */
union cavm_emmcx_phy_dataslice_rfile_phy_dll_master_ctrl
{
    uint32_t u;
    struct cavm_emmcx_phy_dataslice_rfile_phy_dll_master_ctrl_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t reserved_24_31        : 8;
        uint32_t param_dll_bypass_mode : 1;  /**< [ 23: 23](R/W) DLL bypass mode control. Controls the bypass mode of the master and slave DLLs. The
                                                                 param_dll_bypass_mode is intended to be used only for debug.
                                                                 0 = Normal operational mode. DLL functioning in normal mode of operation where the slave delay
                                                                 line settings are used as fractional delay of the master delay line encoder reading of the number
                                                                 of delays in one cycle.
                                                                 1 = Bypass mode on. Delays are defined in phy_dll_slave_ctrl_reg. Master DLL is disabled with only
                                                                 1 delay element in its delay line. The slave slave delay lines decode delays in absolute delay
                                                                 elements rather than as fractional delays. The dll_lock field (bit [0]) of the phy_dll_obs_reg_0
                                                                 parameter will be forced high. */
        uint32_t param_phase_detect_sel : 3; /**< [ 22: 20](R/W) Selects the number of delay elements to be inserted between the phase detect flip-flops.
                                                                 Defaults to 0x0 although the recommended value is 2 elements but if a lock condition is not
                                                                 detected, the user should increase the number of delay elements.
                                                                 0x0 = One delay element.
                                                                 0x1 = Two delay element.
                                                                 0x2 = Three delay element.
                                                                 0x3 = Four delay element.
                                                                 0x4 = Five delay element.
                                                                 0x5 = Six delay element.
                                                                 0x6 = Seven delay element.
                                                                 0x7 = Eight delay element. */
        uint32_t reserved_19           : 1;
        uint32_t param_dll_lock_num    : 3;  /**< [ 18: 16](R/W) Holds the number of consecutive increment or decrement indications that will trigger an unlock
                                                                 condition and increment the dll_unlock_cnt field (bits [7:3]) and either the lock_dec_dbg
                                                                 (bits [23:16]) or lock_inc_dbg (bits [31:24]) fields of the phy_dll_obs_reg_0 parameter. */
        uint32_t reserved_8_15         : 8;
        uint32_t param_dll_start_point : 8;  /**< [  7:  0](R/W) This value is the initial delay value for the DLL. This value is also used as the increment value
                                                                 if the initial value is less than a half-clock cycle. This field should be set such that it is not
                                                                 greater than 7/8ths of a clock period given the worst case element delay. For example, if the
                                                                 frequency is 200MHz (5ns cycle time) with a worst case element 80ps delay, this field should be
                                                                 set to = 5 * (7/8) / .080 = 54 elements. This calculation helps determine the start point which
                                                                 achieves the fastest lock. However, a small value such as 0x04 may be used instead to ensure that
                                                                 the DLL does not lock on a harmonic. Note that with a small value like this, the initial lock time
                                                                 will be longer. Value smaller than 0x04 may cause no lock by DLL. */
#else /* Word 0 - Little Endian */
        uint32_t param_dll_start_point : 8;  /**< [  7:  0](R/W) This value is the initial delay value for the DLL. This value is also used as the increment value
                                                                 if the initial value is less than a half-clock cycle. This field should be set such that it is not
                                                                 greater than 7/8ths of a clock period given the worst case element delay. For example, if the
                                                                 frequency is 200MHz (5ns cycle time) with a worst case element 80ps delay, this field should be
                                                                 set to = 5 * (7/8) / .080 = 54 elements. This calculation helps determine the start point which
                                                                 achieves the fastest lock. However, a small value such as 0x04 may be used instead to ensure that
                                                                 the DLL does not lock on a harmonic. Note that with a small value like this, the initial lock time
                                                                 will be longer. Value smaller than 0x04 may cause no lock by DLL. */
        uint32_t reserved_8_15         : 8;
        uint32_t param_dll_lock_num    : 3;  /**< [ 18: 16](R/W) Holds the number of consecutive increment or decrement indications that will trigger an unlock
                                                                 condition and increment the dll_unlock_cnt field (bits [7:3]) and either the lock_dec_dbg
                                                                 (bits [23:16]) or lock_inc_dbg (bits [31:24]) fields of the phy_dll_obs_reg_0 parameter. */
        uint32_t reserved_19           : 1;
        uint32_t param_phase_detect_sel : 3; /**< [ 22: 20](R/W) Selects the number of delay elements to be inserted between the phase detect flip-flops.
                                                                 Defaults to 0x0 although the recommended value is 2 elements but if a lock condition is not
                                                                 detected, the user should increase the number of delay elements.
                                                                 0x0 = One delay element.
                                                                 0x1 = Two delay element.
                                                                 0x2 = Three delay element.
                                                                 0x3 = Four delay element.
                                                                 0x4 = Five delay element.
                                                                 0x5 = Six delay element.
                                                                 0x6 = Seven delay element.
                                                                 0x7 = Eight delay element. */
        uint32_t param_dll_bypass_mode : 1;  /**< [ 23: 23](R/W) DLL bypass mode control. Controls the bypass mode of the master and slave DLLs. The
                                                                 param_dll_bypass_mode is intended to be used only for debug.
                                                                 0 = Normal operational mode. DLL functioning in normal mode of operation where the slave delay
                                                                 line settings are used as fractional delay of the master delay line encoder reading of the number
                                                                 of delays in one cycle.
                                                                 1 = Bypass mode on. Delays are defined in phy_dll_slave_ctrl_reg. Master DLL is disabled with only
                                                                 1 delay element in its delay line. The slave slave delay lines decode delays in absolute delay
                                                                 elements rather than as fractional delays. The dll_lock field (bit [0]) of the phy_dll_obs_reg_0
                                                                 parameter will be forced high. */
        uint32_t reserved_24_31        : 8;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_emmcx_phy_dataslice_rfile_phy_dll_master_ctrl_s cn; */
};
typedef union cavm_emmcx_phy_dataslice_rfile_phy_dll_master_ctrl cavm_emmcx_phy_dataslice_rfile_phy_dll_master_ctrl_t;

static inline uint64_t CAVM_EMMCX_PHY_DATASLICE_RFILE_PHY_DLL_MASTER_CTRL(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_EMMCX_PHY_DATASLICE_RFILE_PHY_DLL_MASTER_CTRL(uint64_t a)
{
    if (a==0)
        return 0x82400000200cll + 0x1000000ll * ((a) & 0x0);
    __cavm_csr_fatal("EMMCX_PHY_DATASLICE_RFILE_PHY_DLL_MASTER_CTRL", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_EMMCX_PHY_DATASLICE_RFILE_PHY_DLL_MASTER_CTRL(a) cavm_emmcx_phy_dataslice_rfile_phy_dll_master_ctrl_t
#define bustype_CAVM_EMMCX_PHY_DATASLICE_RFILE_PHY_DLL_MASTER_CTRL(a) CSR_TYPE_NCB32b
#define basename_CAVM_EMMCX_PHY_DATASLICE_RFILE_PHY_DLL_MASTER_CTRL(a) "EMMCX_PHY_DATASLICE_RFILE_PHY_DLL_MASTER_CTRL"
#define device_bar_CAVM_EMMCX_PHY_DATASLICE_RFILE_PHY_DLL_MASTER_CTRL(a) 0x0 /* PF_BAR0 */
#define busnum_CAVM_EMMCX_PHY_DATASLICE_RFILE_PHY_DLL_MASTER_CTRL(a) (a)
#define arguments_CAVM_EMMCX_PHY_DATASLICE_RFILE_PHY_DLL_MASTER_CTRL(a) (a),-1,-1,-1

/**
 * Register (NCB32b) emmc#_phy_dataslice_rfile_phy_dll_obs_reg_0
 *
 * EMMC PHY Dataslice Rfile PHY DLL Obs Reg 0 Register
 * This register holds the following observable points in the PHY.
 */
union cavm_emmcx_phy_dataslice_rfile_phy_dll_obs_reg_0
{
    uint32_t u;
    struct cavm_emmcx_phy_dataslice_rfile_phy_dll_obs_reg_0_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t lock_inc_dbg          : 8;  /**< [ 31: 24](RO) Holds the state of the cumulative dll_lock_inc register when the dll_unlock_cnt field(bits [7:3])
                                                                 of this parameter was triggered to increment or was last saturated at a value of 0x1f. */
        uint32_t lock_dec_dbg          : 8;  /**< [ 23: 16](RO) Holds the state of the cumulative dll_lock_dec register when the dll_unlock_cnt field(bits [7:3])
                                                                 of this parameter was triggered to decrement or was last saturated at a value of 0x1f. */
        uint32_t dll_lock_value        : 8;  /**< [ 15:  8](RO) Reports the number of delay elements that the DLL has determined for lock in either full clock or
                                                                 half clock mode. In full clock mode, this value equals the number of delay elements in one cycle.
                                                                 In half clock mode, this value equals the number of delay elements in one half clock cycle. In
                                                                 saturation mode, this value equals the maximum number of delay elements. The slaves use this value
                                                                 to set up their delays for the clk_wr and read DQS signals. This value is valid only when locking
                                                                 mechanism is done. */
        uint32_t dll_unlock_cnt        : 5;  /**< [  7:  3](RO) Reports the number of times that the master DLL consecutive increment or decrement value
                                                                 programmed into the param_dll_lock_num field (bits [18:16]) of the phy_dll_master_ctrl_reg
                                                                 register has been triggered. The dll_unlock_cnt will saturate at a value of 0x1f. Asserting the
                                                                 dll_rst_n signal will reset this counter to 0. */
        uint32_t dll_locked_mode       : 2;  /**< [  2:  1](RO) Indicates status of DLL. Defines the mode in which the DLL has achieved the lock.
                                                                 0x0 = Full clock mode. The master delay line was long enough to lock on one full clock cycle of
                                                                 delay. In this mode, the dll_lock_value field (bits [15:8]) of this parameter indicates the number
                                                                 of delays in full clock cycles.
                                                                 0x1 = Reserved.
                                                                 0x2 = Half clock mode. The master delay line was not long enough to lock one full cycle of delay
                                                                 but could lock on a half-cycle of delay. In this mode, the dll_lock_value field (bits [15:8]) of
                                                                 this parameter indicates the number of delays in one half clock cycles.
                                                                 0x3 = Saturation mode. The master delay line was not long enough to lock on a full or a half-clock
                                                                 cycle. In this mode, the encoder value is fixed at the maximum delay line setting and the master
                                                                 DLL will be disabled. The slave delay lines continue to use the fractional delays based upon the
                                                                 fixed saturation value of the delay line. */
        uint32_t dll_lock              : 1;  /**< [  0:  0](RO) Indicates status of DLL. It indicates the DLL locking when the DLL lock logic found (not inc AND
                                                                 not dec) OR (an inc then dec) OR (a dec then inc). When param_dll_start_point is set smaller than
                                                                 half clock period the first found (a dec then inc) isn't the really DLL locking point but dll_lock
                                                                 is asserted.
                                                                 0 = DLL has not locked.
                                                                 1 = DLL is locked. */
#else /* Word 0 - Little Endian */
        uint32_t dll_lock              : 1;  /**< [  0:  0](RO) Indicates status of DLL. It indicates the DLL locking when the DLL lock logic found (not inc AND
                                                                 not dec) OR (an inc then dec) OR (a dec then inc). When param_dll_start_point is set smaller than
                                                                 half clock period the first found (a dec then inc) isn't the really DLL locking point but dll_lock
                                                                 is asserted.
                                                                 0 = DLL has not locked.
                                                                 1 = DLL is locked. */
        uint32_t dll_locked_mode       : 2;  /**< [  2:  1](RO) Indicates status of DLL. Defines the mode in which the DLL has achieved the lock.
                                                                 0x0 = Full clock mode. The master delay line was long enough to lock on one full clock cycle of
                                                                 delay. In this mode, the dll_lock_value field (bits [15:8]) of this parameter indicates the number
                                                                 of delays in full clock cycles.
                                                                 0x1 = Reserved.
                                                                 0x2 = Half clock mode. The master delay line was not long enough to lock one full cycle of delay
                                                                 but could lock on a half-cycle of delay. In this mode, the dll_lock_value field (bits [15:8]) of
                                                                 this parameter indicates the number of delays in one half clock cycles.
                                                                 0x3 = Saturation mode. The master delay line was not long enough to lock on a full or a half-clock
                                                                 cycle. In this mode, the encoder value is fixed at the maximum delay line setting and the master
                                                                 DLL will be disabled. The slave delay lines continue to use the fractional delays based upon the
                                                                 fixed saturation value of the delay line. */
        uint32_t dll_unlock_cnt        : 5;  /**< [  7:  3](RO) Reports the number of times that the master DLL consecutive increment or decrement value
                                                                 programmed into the param_dll_lock_num field (bits [18:16]) of the phy_dll_master_ctrl_reg
                                                                 register has been triggered. The dll_unlock_cnt will saturate at a value of 0x1f. Asserting the
                                                                 dll_rst_n signal will reset this counter to 0. */
        uint32_t dll_lock_value        : 8;  /**< [ 15:  8](RO) Reports the number of delay elements that the DLL has determined for lock in either full clock or
                                                                 half clock mode. In full clock mode, this value equals the number of delay elements in one cycle.
                                                                 In half clock mode, this value equals the number of delay elements in one half clock cycle. In
                                                                 saturation mode, this value equals the maximum number of delay elements. The slaves use this value
                                                                 to set up their delays for the clk_wr and read DQS signals. This value is valid only when locking
                                                                 mechanism is done. */
        uint32_t lock_dec_dbg          : 8;  /**< [ 23: 16](RO) Holds the state of the cumulative dll_lock_dec register when the dll_unlock_cnt field(bits [7:3])
                                                                 of this parameter was triggered to decrement or was last saturated at a value of 0x1f. */
        uint32_t lock_inc_dbg          : 8;  /**< [ 31: 24](RO) Holds the state of the cumulative dll_lock_inc register when the dll_unlock_cnt field(bits [7:3])
                                                                 of this parameter was triggered to increment or was last saturated at a value of 0x1f. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_emmcx_phy_dataslice_rfile_phy_dll_obs_reg_0_s cn; */
};
typedef union cavm_emmcx_phy_dataslice_rfile_phy_dll_obs_reg_0 cavm_emmcx_phy_dataslice_rfile_phy_dll_obs_reg_0_t;

static inline uint64_t CAVM_EMMCX_PHY_DATASLICE_RFILE_PHY_DLL_OBS_REG_0(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_EMMCX_PHY_DATASLICE_RFILE_PHY_DLL_OBS_REG_0(uint64_t a)
{
    if (a==0)
        return 0x82400000201cll + 0x1000000ll * ((a) & 0x0);
    __cavm_csr_fatal("EMMCX_PHY_DATASLICE_RFILE_PHY_DLL_OBS_REG_0", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_EMMCX_PHY_DATASLICE_RFILE_PHY_DLL_OBS_REG_0(a) cavm_emmcx_phy_dataslice_rfile_phy_dll_obs_reg_0_t
#define bustype_CAVM_EMMCX_PHY_DATASLICE_RFILE_PHY_DLL_OBS_REG_0(a) CSR_TYPE_NCB32b
#define basename_CAVM_EMMCX_PHY_DATASLICE_RFILE_PHY_DLL_OBS_REG_0(a) "EMMCX_PHY_DATASLICE_RFILE_PHY_DLL_OBS_REG_0"
#define device_bar_CAVM_EMMCX_PHY_DATASLICE_RFILE_PHY_DLL_OBS_REG_0(a) 0x0 /* PF_BAR0 */
#define busnum_CAVM_EMMCX_PHY_DATASLICE_RFILE_PHY_DLL_OBS_REG_0(a) (a)
#define arguments_CAVM_EMMCX_PHY_DATASLICE_RFILE_PHY_DLL_OBS_REG_0(a) (a),-1,-1,-1

/**
 * Register (NCB32b) emmc#_phy_dataslice_rfile_phy_dll_obs_reg_1
 *
 * EMMC PHY Dataslice Rfile PHY DLL Obs Reg 1 Register
 * This register holds the following observable points in the PHY.
 */
union cavm_emmcx_phy_dataslice_rfile_phy_dll_obs_reg_1
{
    uint32_t u;
    struct cavm_emmcx_phy_dataslice_rfile_phy_dll_obs_reg_1_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t reserved_24_31        : 8;
        uint32_t decoder_out_wr        : 8;  /**< [ 23: 16](RO) Holds the encoded value for the clk_wr delay line for this slice. */
        uint32_t decoder_out_rd_cmd    : 8;  /**< [ 15:  8](RO) Holds the encoded value for the CMD read delay line for this slice. */
        uint32_t decoder_out_rd        : 8;  /**< [  7:  0](RO) Holds the encoded value for the read delay line for this slice. */
#else /* Word 0 - Little Endian */
        uint32_t decoder_out_rd        : 8;  /**< [  7:  0](RO) Holds the encoded value for the read delay line for this slice. */
        uint32_t decoder_out_rd_cmd    : 8;  /**< [ 15:  8](RO) Holds the encoded value for the CMD read delay line for this slice. */
        uint32_t decoder_out_wr        : 8;  /**< [ 23: 16](RO) Holds the encoded value for the clk_wr delay line for this slice. */
        uint32_t reserved_24_31        : 8;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_emmcx_phy_dataslice_rfile_phy_dll_obs_reg_1_s cn; */
};
typedef union cavm_emmcx_phy_dataslice_rfile_phy_dll_obs_reg_1 cavm_emmcx_phy_dataslice_rfile_phy_dll_obs_reg_1_t;

static inline uint64_t CAVM_EMMCX_PHY_DATASLICE_RFILE_PHY_DLL_OBS_REG_1(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_EMMCX_PHY_DATASLICE_RFILE_PHY_DLL_OBS_REG_1(uint64_t a)
{
    if (a==0)
        return 0x824000002020ll + 0x1000000ll * ((a) & 0x0);
    __cavm_csr_fatal("EMMCX_PHY_DATASLICE_RFILE_PHY_DLL_OBS_REG_1", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_EMMCX_PHY_DATASLICE_RFILE_PHY_DLL_OBS_REG_1(a) cavm_emmcx_phy_dataslice_rfile_phy_dll_obs_reg_1_t
#define bustype_CAVM_EMMCX_PHY_DATASLICE_RFILE_PHY_DLL_OBS_REG_1(a) CSR_TYPE_NCB32b
#define basename_CAVM_EMMCX_PHY_DATASLICE_RFILE_PHY_DLL_OBS_REG_1(a) "EMMCX_PHY_DATASLICE_RFILE_PHY_DLL_OBS_REG_1"
#define device_bar_CAVM_EMMCX_PHY_DATASLICE_RFILE_PHY_DLL_OBS_REG_1(a) 0x0 /* PF_BAR0 */
#define busnum_CAVM_EMMCX_PHY_DATASLICE_RFILE_PHY_DLL_OBS_REG_1(a) (a)
#define arguments_CAVM_EMMCX_PHY_DATASLICE_RFILE_PHY_DLL_OBS_REG_1(a) (a),-1,-1,-1

/**
 * Register (NCB32b) emmc#_phy_dataslice_rfile_phy_dll_obs_reg_2
 *
 * EMMC PHY Dataslice Rfile PHY DLL Obs Reg 2 Register
 * This register holds the following observable points in the PHY.
 */
union cavm_emmcx_phy_dataslice_rfile_phy_dll_obs_reg_2
{
    uint32_t u;
    struct cavm_emmcx_phy_dataslice_rfile_phy_dll_obs_reg_2_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t reserved_8_31         : 24;
        uint32_t decoder_out_wrdqs     : 8;  /**< [  7:  0](RO) Holds the encoded value for the clk_wrdqs delay line for this slice. */
#else /* Word 0 - Little Endian */
        uint32_t decoder_out_wrdqs     : 8;  /**< [  7:  0](RO) Holds the encoded value for the clk_wrdqs delay line for this slice. */
        uint32_t reserved_8_31         : 24;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_emmcx_phy_dataslice_rfile_phy_dll_obs_reg_2_s cn; */
};
typedef union cavm_emmcx_phy_dataslice_rfile_phy_dll_obs_reg_2 cavm_emmcx_phy_dataslice_rfile_phy_dll_obs_reg_2_t;

static inline uint64_t CAVM_EMMCX_PHY_DATASLICE_RFILE_PHY_DLL_OBS_REG_2(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_EMMCX_PHY_DATASLICE_RFILE_PHY_DLL_OBS_REG_2(uint64_t a)
{
    if (a==0)
        return 0x824000002024ll + 0x1000000ll * ((a) & 0x0);
    __cavm_csr_fatal("EMMCX_PHY_DATASLICE_RFILE_PHY_DLL_OBS_REG_2", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_EMMCX_PHY_DATASLICE_RFILE_PHY_DLL_OBS_REG_2(a) cavm_emmcx_phy_dataslice_rfile_phy_dll_obs_reg_2_t
#define bustype_CAVM_EMMCX_PHY_DATASLICE_RFILE_PHY_DLL_OBS_REG_2(a) CSR_TYPE_NCB32b
#define basename_CAVM_EMMCX_PHY_DATASLICE_RFILE_PHY_DLL_OBS_REG_2(a) "EMMCX_PHY_DATASLICE_RFILE_PHY_DLL_OBS_REG_2"
#define device_bar_CAVM_EMMCX_PHY_DATASLICE_RFILE_PHY_DLL_OBS_REG_2(a) 0x0 /* PF_BAR0 */
#define busnum_CAVM_EMMCX_PHY_DATASLICE_RFILE_PHY_DLL_OBS_REG_2(a) (a)
#define arguments_CAVM_EMMCX_PHY_DATASLICE_RFILE_PHY_DLL_OBS_REG_2(a) (a),-1,-1,-1

/**
 * Register (NCB32b) emmc#_phy_dataslice_rfile_phy_dll_slave_ctrl
 *
 * EMMC PHY Dataslice Rfile PHY DLL Slave Ctrl Register
 * This register holds the control for the slave DLL logic.
 */
union cavm_emmcx_phy_dataslice_rfile_phy_dll_slave_ctrl
{
    uint32_t u;
    struct cavm_emmcx_phy_dataslice_rfile_phy_dll_slave_ctrl_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t read_dqs_cmd_delay    : 8;  /**< [ 31: 24](R/W) Controls the read command DQS delay which adjusts the timing in 1/256th of the clock period when in
                                                                 normal DLL locked mode. In bypass mode, this field directly programs the number of delay elements. */
        uint32_t clk_wrdqs_delay       : 8;  /**< [ 23: 16](R/W) Controls the clk_wrdqs delay line which adjusts the write DQS timing in 1/256th steps of the clock
                                                                 period in normal DLL locked mode. In bypass mode, this field directly programs the number of delay
                                                                 elements. clk_wrdqs delay line is used to adjust the write CMD bit timing. */
        uint32_t clk_wr_delay          : 8;  /**< [ 15:  8](R/W) Controls the clk_wr delay line which adjusts the write DQ bit timing in 1/256th steps of the clock
                                                                 period in normal DLL locked mode. In bypass mode, this field directly programs the number of
                                                                 delay elements. */
        uint32_t read_dqs_delay        : 8;  /**< [  7:  0](R/W) Controls the read DQS delay which adjusts the timing in 1/256th of the clock period when in normal
                                                                 DLL locked mode. In bypass mode, this field directly programs the number of delay elements. */
#else /* Word 0 - Little Endian */
        uint32_t read_dqs_delay        : 8;  /**< [  7:  0](R/W) Controls the read DQS delay which adjusts the timing in 1/256th of the clock period when in normal
                                                                 DLL locked mode. In bypass mode, this field directly programs the number of delay elements. */
        uint32_t clk_wr_delay          : 8;  /**< [ 15:  8](R/W) Controls the clk_wr delay line which adjusts the write DQ bit timing in 1/256th steps of the clock
                                                                 period in normal DLL locked mode. In bypass mode, this field directly programs the number of
                                                                 delay elements. */
        uint32_t clk_wrdqs_delay       : 8;  /**< [ 23: 16](R/W) Controls the clk_wrdqs delay line which adjusts the write DQS timing in 1/256th steps of the clock
                                                                 period in normal DLL locked mode. In bypass mode, this field directly programs the number of delay
                                                                 elements. clk_wrdqs delay line is used to adjust the write CMD bit timing. */
        uint32_t read_dqs_cmd_delay    : 8;  /**< [ 31: 24](R/W) Controls the read command DQS delay which adjusts the timing in 1/256th of the clock period when in
                                                                 normal DLL locked mode. In bypass mode, this field directly programs the number of delay elements. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_emmcx_phy_dataslice_rfile_phy_dll_slave_ctrl_s cn; */
};
typedef union cavm_emmcx_phy_dataslice_rfile_phy_dll_slave_ctrl cavm_emmcx_phy_dataslice_rfile_phy_dll_slave_ctrl_t;

static inline uint64_t CAVM_EMMCX_PHY_DATASLICE_RFILE_PHY_DLL_SLAVE_CTRL(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_EMMCX_PHY_DATASLICE_RFILE_PHY_DLL_SLAVE_CTRL(uint64_t a)
{
    if (a==0)
        return 0x824000002010ll + 0x1000000ll * ((a) & 0x0);
    __cavm_csr_fatal("EMMCX_PHY_DATASLICE_RFILE_PHY_DLL_SLAVE_CTRL", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_EMMCX_PHY_DATASLICE_RFILE_PHY_DLL_SLAVE_CTRL(a) cavm_emmcx_phy_dataslice_rfile_phy_dll_slave_ctrl_t
#define bustype_CAVM_EMMCX_PHY_DATASLICE_RFILE_PHY_DLL_SLAVE_CTRL(a) CSR_TYPE_NCB32b
#define basename_CAVM_EMMCX_PHY_DATASLICE_RFILE_PHY_DLL_SLAVE_CTRL(a) "EMMCX_PHY_DATASLICE_RFILE_PHY_DLL_SLAVE_CTRL"
#define device_bar_CAVM_EMMCX_PHY_DATASLICE_RFILE_PHY_DLL_SLAVE_CTRL(a) 0x0 /* PF_BAR0 */
#define busnum_CAVM_EMMCX_PHY_DATASLICE_RFILE_PHY_DLL_SLAVE_CTRL(a) (a)
#define arguments_CAVM_EMMCX_PHY_DATASLICE_RFILE_PHY_DLL_SLAVE_CTRL(a) (a),-1,-1,-1

/**
 * Register (NCB32b) emmc#_phy_dataslice_rfile_phy_dq_timing
 *
 * EMMC Phy Dataslice Rfile Phy Dq Timing Register
 * This register controls the DQ related timing.
 */
union cavm_emmcx_phy_dataslice_rfile_phy_dq_timing
{
    uint32_t u;
    struct cavm_emmcx_phy_dataslice_rfile_phy_dq_timing_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t io_mask_always_on     : 1;  /**< [ 31: 31](R/W) Defines if the I/O mask for DATA/CMD is always enabled.
                                                                 0 = disable i.e. start/end defines the I/O mask functionality. Recommended setting for SD/eMMC
                                                                 controller.
                                                                 1 = IO mask is always ON. */
        uint32_t reserved_30           : 1;
        uint32_t io_mask_end           : 3;  /**< [ 29: 27](R/W) Adjusts the ending point of the DQ/CMD pad input mask enable. Defines the delay after
                                                                 dfi_wrdata_en/dfi_wrcmd_en goes high when the mask is disabled (data/cmd are blocked and 1
                                                                 are passed to PHY). */
        uint32_t io_mask_start         : 3;  /**< [ 26: 24](R/W) Adjusts the starting point of the DQ/CMD pad input mask enable. Defines the delay after
                                                                 dfi_wrdata_en/dfi_wrcmd_en goes low when the mask is enabled (data/cmd are passed to PHY). */
        uint32_t data_clkperiod_delay  : 8;  /**< [ 23: 16](R/W) Defines additional latency on the write datapath. It also adds a clock cycle delay for the data
                                                                 OE path which is equivalent of adding 2 to the data_select_oe_end and data_select_oe_start. */
        uint32_t data_select_tsel_start : 4; /**< [ 15: 12](R/W) Defines the DQ pad dynamic termination select enable time. Larger values add greater delay to when
                                                                 tsel turns on. Each bit changes the output enable time by a 1/2 cycle resolution. */
        uint32_t data_select_tsel_end  : 4;  /**< [ 11:  8](R/W) Defines the DQ pad dynamic termination select disable time. Larger values increase the delay to
                                                                 when tsel turns off. Each bit changes the output enable time by a 1/2 cycle resolution. */
        uint32_t reserved_7            : 1;
        uint32_t data_select_oe_start  : 3;  /**< [  6:  4](R/W) Adjusts the starting point of the DQ pad output enable window. Lower numbers pull the rising edge
                                                                 earlier in time and larger numbers cause the rising edge to be delayed. Each bit changes the
                                                                 output enable time by a 1/2 cycle resolution. */
        uint32_t reserved_3            : 1;
        uint32_t data_select_oe_end    : 3;  /**< [  2:  0](R/W) Adjusts the ending point of the DQ pad output enable window. Lower numbers pull the falling edge
                                                                 earlier in time and larger numbers cause the falling edge to be delayed. Each bit changes the
                                                                 output enable time by a 1/2 cycle resolution. */
#else /* Word 0 - Little Endian */
        uint32_t data_select_oe_end    : 3;  /**< [  2:  0](R/W) Adjusts the ending point of the DQ pad output enable window. Lower numbers pull the falling edge
                                                                 earlier in time and larger numbers cause the falling edge to be delayed. Each bit changes the
                                                                 output enable time by a 1/2 cycle resolution. */
        uint32_t reserved_3            : 1;
        uint32_t data_select_oe_start  : 3;  /**< [  6:  4](R/W) Adjusts the starting point of the DQ pad output enable window. Lower numbers pull the rising edge
                                                                 earlier in time and larger numbers cause the rising edge to be delayed. Each bit changes the
                                                                 output enable time by a 1/2 cycle resolution. */
        uint32_t reserved_7            : 1;
        uint32_t data_select_tsel_end  : 4;  /**< [ 11:  8](R/W) Defines the DQ pad dynamic termination select disable time. Larger values increase the delay to
                                                                 when tsel turns off. Each bit changes the output enable time by a 1/2 cycle resolution. */
        uint32_t data_select_tsel_start : 4; /**< [ 15: 12](R/W) Defines the DQ pad dynamic termination select enable time. Larger values add greater delay to when
                                                                 tsel turns on. Each bit changes the output enable time by a 1/2 cycle resolution. */
        uint32_t data_clkperiod_delay  : 8;  /**< [ 23: 16](R/W) Defines additional latency on the write datapath. It also adds a clock cycle delay for the data
                                                                 OE path which is equivalent of adding 2 to the data_select_oe_end and data_select_oe_start. */
        uint32_t io_mask_start         : 3;  /**< [ 26: 24](R/W) Adjusts the starting point of the DQ/CMD pad input mask enable. Defines the delay after
                                                                 dfi_wrdata_en/dfi_wrcmd_en goes low when the mask is enabled (data/cmd are passed to PHY). */
        uint32_t io_mask_end           : 3;  /**< [ 29: 27](R/W) Adjusts the ending point of the DQ/CMD pad input mask enable. Defines the delay after
                                                                 dfi_wrdata_en/dfi_wrcmd_en goes high when the mask is disabled (data/cmd are blocked and 1
                                                                 are passed to PHY). */
        uint32_t reserved_30           : 1;
        uint32_t io_mask_always_on     : 1;  /**< [ 31: 31](R/W) Defines if the I/O mask for DATA/CMD is always enabled.
                                                                 0 = disable i.e. start/end defines the I/O mask functionality. Recommended setting for SD/eMMC
                                                                 controller.
                                                                 1 = IO mask is always ON. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_emmcx_phy_dataslice_rfile_phy_dq_timing_s cn; */
};
typedef union cavm_emmcx_phy_dataslice_rfile_phy_dq_timing cavm_emmcx_phy_dataslice_rfile_phy_dq_timing_t;

static inline uint64_t CAVM_EMMCX_PHY_DATASLICE_RFILE_PHY_DQ_TIMING(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_EMMCX_PHY_DATASLICE_RFILE_PHY_DQ_TIMING(uint64_t a)
{
    if (a==0)
        return 0x824000002000ll + 0x1000000ll * ((a) & 0x0);
    __cavm_csr_fatal("EMMCX_PHY_DATASLICE_RFILE_PHY_DQ_TIMING", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_EMMCX_PHY_DATASLICE_RFILE_PHY_DQ_TIMING(a) cavm_emmcx_phy_dataslice_rfile_phy_dq_timing_t
#define bustype_CAVM_EMMCX_PHY_DATASLICE_RFILE_PHY_DQ_TIMING(a) CSR_TYPE_NCB32b
#define basename_CAVM_EMMCX_PHY_DATASLICE_RFILE_PHY_DQ_TIMING(a) "EMMCX_PHY_DATASLICE_RFILE_PHY_DQ_TIMING"
#define device_bar_CAVM_EMMCX_PHY_DATASLICE_RFILE_PHY_DQ_TIMING(a) 0x0 /* PF_BAR0 */
#define busnum_CAVM_EMMCX_PHY_DATASLICE_RFILE_PHY_DQ_TIMING(a) (a)
#define arguments_CAVM_EMMCX_PHY_DATASLICE_RFILE_PHY_DQ_TIMING(a) (a),-1,-1,-1

/**
 * Register (NCB32b) emmc#_phy_dataslice_rfile_phy_dqs_timing
 *
 * EMMC PHY Dataslice Rfile PHY DQS Timing Register
 * This register controls the DQS related timing.
 */
union cavm_emmcx_phy_dataslice_rfile_phy_dqs_timing
{
    uint32_t u;
    struct cavm_emmcx_phy_dataslice_rfile_phy_dqs_timing_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t reserved_24_31        : 8;
        uint32_t dqs_clkperiod_delay   : 1;  /**< [ 23: 23](R/W) Defines additional latency on the write DQS path. It also adds a clock cycle delay for the DQS OE
                                                                 path which is equivalent of adding 2 to the dqs_select_oe_end and dqs_select_oe_start. */
        uint32_t use_ext_lpbk_dqs      : 1;  /**< [ 22: 22](R/W) Bit to choose lpbk_dqs to capture data for reads. It is valid when [USE_PHONY_DQS] and
                                                                 [USE_LPBK_DQS] fields are set high.
                                                                 0 = use internal lpbk_dqs (mem_rebar_ipad) for data capture.
                                                                 1 =  use external lpbk_dqs (lpbk_dqs connected to the lpbk_dqs_IO PAD) for data capture. */
        uint32_t use_lpbk_dqs          : 1;  /**< [ 21: 21](R/W) Bit to choose lpbk_dqs to capture data for reads. It is valid when [USE_PHONY_DQS] is set high.
                                                                 0 = Use phony DQS for data capture.
                                                                 1 = Use lpbk_dqs for data capture. Recommended setting for SD/eMMC controller. */
        uint32_t use_phony_dqs         : 1;  /**< [ 20: 20](R/W) Bit to choose lpbk_dqs or phony DQS (generated in the control slice logic) or DQS from the device
                                                                 to capture data for reads.
                                                                 0 = Use DQS from device for data capture.
                                                                 1 = Use phony DQS or lpbk_dqs for data capture. Bit 21 of the phy_dqs_timing_reg is used the
                                                                 choose the source signal. */
        uint32_t use_phony_dqs_cmd     : 1;  /**< [ 19: 19](R/W) Bit to choose phony DQS (or lpbk_dqs) from the control slice logic or DQS from the device to
                                                                 capture command data for reads.
                                                                 0 = Use DQS from device for command data capture.
                                                                 1 = Use phony DQS or lpbk_dqs for command data capture. */
        uint32_t reserved_17_18        : 2;
        uint32_t phony_dqs_sel         : 1;  /**< [ 16: 16](R/W) If this bit is cleared the phony_dqs is synchronous with rising edge of the clk_phy before sending
                                                                 to the entry flops. If this bit is set high the phony_dqs is synchronous with falling edge of
                                                                 clk_phy before sending to the entry flops. */
        uint32_t dqs_select_tsel_start : 4;  /**< [ 15: 12](R/W) Defines the DQ pad dynamic termination select enable time. Larger values add greater delay to when
                                                                 tsel turns on. Each bit changes the output enable time by a 1/2 cycle resolution. */
        uint32_t dqs_select_tsel_end   : 4;  /**< [ 11:  8](R/W) Defines the DQ pad dynamic termination select disable time. Larger values increase the delay to
                                                                 when tsel turns off. Each bit changes the output enable time by a 1/2 cycle resolution. */
        uint32_t dqs_select_oe_start   : 4;  /**< [  7:  4](R/W) Adjusts the starting point of the DQS pad output enable window. Lower numbers pull the rising edge
                                                                 earlier in time and larger numbers cause the rising edge to be delayed. Each bit changes the
                                                                 output enable time by a 1/2 cycle resolution. */
        uint32_t dqs_select_oe_end     : 4;  /**< [  3:  0](R/W) Adjusts the ending point of the DQS pad output enable window. Lower numbers pull the falling edge
                                                                 earlier in time and larger numbers cause the falling edge to be delayed. Each bit changes the
                                                                 output enable time by a 1/2 cycle resolution. This field must be set to at least the value of bits
                                                                 [7:4]+2 to prevent disabling the pad before the data is completely written. */
#else /* Word 0 - Little Endian */
        uint32_t dqs_select_oe_end     : 4;  /**< [  3:  0](R/W) Adjusts the ending point of the DQS pad output enable window. Lower numbers pull the falling edge
                                                                 earlier in time and larger numbers cause the falling edge to be delayed. Each bit changes the
                                                                 output enable time by a 1/2 cycle resolution. This field must be set to at least the value of bits
                                                                 [7:4]+2 to prevent disabling the pad before the data is completely written. */
        uint32_t dqs_select_oe_start   : 4;  /**< [  7:  4](R/W) Adjusts the starting point of the DQS pad output enable window. Lower numbers pull the rising edge
                                                                 earlier in time and larger numbers cause the rising edge to be delayed. Each bit changes the
                                                                 output enable time by a 1/2 cycle resolution. */
        uint32_t dqs_select_tsel_end   : 4;  /**< [ 11:  8](R/W) Defines the DQ pad dynamic termination select disable time. Larger values increase the delay to
                                                                 when tsel turns off. Each bit changes the output enable time by a 1/2 cycle resolution. */
        uint32_t dqs_select_tsel_start : 4;  /**< [ 15: 12](R/W) Defines the DQ pad dynamic termination select enable time. Larger values add greater delay to when
                                                                 tsel turns on. Each bit changes the output enable time by a 1/2 cycle resolution. */
        uint32_t phony_dqs_sel         : 1;  /**< [ 16: 16](R/W) If this bit is cleared the phony_dqs is synchronous with rising edge of the clk_phy before sending
                                                                 to the entry flops. If this bit is set high the phony_dqs is synchronous with falling edge of
                                                                 clk_phy before sending to the entry flops. */
        uint32_t reserved_17_18        : 2;
        uint32_t use_phony_dqs_cmd     : 1;  /**< [ 19: 19](R/W) Bit to choose phony DQS (or lpbk_dqs) from the control slice logic or DQS from the device to
                                                                 capture command data for reads.
                                                                 0 = Use DQS from device for command data capture.
                                                                 1 = Use phony DQS or lpbk_dqs for command data capture. */
        uint32_t use_phony_dqs         : 1;  /**< [ 20: 20](R/W) Bit to choose lpbk_dqs or phony DQS (generated in the control slice logic) or DQS from the device
                                                                 to capture data for reads.
                                                                 0 = Use DQS from device for data capture.
                                                                 1 = Use phony DQS or lpbk_dqs for data capture. Bit 21 of the phy_dqs_timing_reg is used the
                                                                 choose the source signal. */
        uint32_t use_lpbk_dqs          : 1;  /**< [ 21: 21](R/W) Bit to choose lpbk_dqs to capture data for reads. It is valid when [USE_PHONY_DQS] is set high.
                                                                 0 = Use phony DQS for data capture.
                                                                 1 = Use lpbk_dqs for data capture. Recommended setting for SD/eMMC controller. */
        uint32_t use_ext_lpbk_dqs      : 1;  /**< [ 22: 22](R/W) Bit to choose lpbk_dqs to capture data for reads. It is valid when [USE_PHONY_DQS] and
                                                                 [USE_LPBK_DQS] fields are set high.
                                                                 0 = use internal lpbk_dqs (mem_rebar_ipad) for data capture.
                                                                 1 =  use external lpbk_dqs (lpbk_dqs connected to the lpbk_dqs_IO PAD) for data capture. */
        uint32_t dqs_clkperiod_delay   : 1;  /**< [ 23: 23](R/W) Defines additional latency on the write DQS path. It also adds a clock cycle delay for the DQS OE
                                                                 path which is equivalent of adding 2 to the dqs_select_oe_end and dqs_select_oe_start. */
        uint32_t reserved_24_31        : 8;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_emmcx_phy_dataslice_rfile_phy_dqs_timing_s cn; */
};
typedef union cavm_emmcx_phy_dataslice_rfile_phy_dqs_timing cavm_emmcx_phy_dataslice_rfile_phy_dqs_timing_t;

static inline uint64_t CAVM_EMMCX_PHY_DATASLICE_RFILE_PHY_DQS_TIMING(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_EMMCX_PHY_DATASLICE_RFILE_PHY_DQS_TIMING(uint64_t a)
{
    if (a==0)
        return 0x824000002004ll + 0x1000000ll * ((a) & 0x0);
    __cavm_csr_fatal("EMMCX_PHY_DATASLICE_RFILE_PHY_DQS_TIMING", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_EMMCX_PHY_DATASLICE_RFILE_PHY_DQS_TIMING(a) cavm_emmcx_phy_dataslice_rfile_phy_dqs_timing_t
#define bustype_CAVM_EMMCX_PHY_DATASLICE_RFILE_PHY_DQS_TIMING(a) CSR_TYPE_NCB32b
#define basename_CAVM_EMMCX_PHY_DATASLICE_RFILE_PHY_DQS_TIMING(a) "EMMCX_PHY_DATASLICE_RFILE_PHY_DQS_TIMING"
#define device_bar_CAVM_EMMCX_PHY_DATASLICE_RFILE_PHY_DQS_TIMING(a) 0x0 /* PF_BAR0 */
#define busnum_CAVM_EMMCX_PHY_DATASLICE_RFILE_PHY_DQS_TIMING(a) (a)
#define arguments_CAVM_EMMCX_PHY_DATASLICE_RFILE_PHY_DQS_TIMING(a) (a),-1,-1,-1

/**
 * Register (NCB32b) emmc#_phy_dataslice_rfile_phy_features
 *
 * EMMC PHY Dataslice Rfile PHY Features Register
 * This register shows available hardware features.
 */
union cavm_emmcx_phy_dataslice_rfile_phy_features
{
    uint32_t u;
    struct cavm_emmcx_phy_dataslice_rfile_phy_features_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t reserved_16_31        : 16;
        uint32_t asf_sup               : 1;  /**< [ 15: 15](RO) Support for Automotive Safety Feature. */
        uint32_t pll_sup               : 1;  /**< [ 14: 14](RO) Support for PLL. */
        uint32_t jtag_sup              : 1;  /**< [ 13: 13](RO) Support for JTAG muxes. */
        uint32_t ext_lpbk_dqs          : 1;  /**< [ 12: 12](RO) Support for external LPBK_DQS I/O pad. */
        uint32_t reg_intf              : 1;  /**< [ 11: 11](RO) SFR interface type.  This is an encoded value. 0 = DFI. 1 = APB. */
        uint32_t per_bit_deskew        : 1;  /**< [ 10: 10](RO) Support for per-bit deskew. */
        uint32_t dfi_clock_ratio       : 1;  /**< [  9:  9](RO) Support for clock ratio on DFI interface. This is an encoded value.
                                                                 0 = 1:1.
                                                                 1 = 1:2. */
        uint32_t aging                 : 1;  /**< [  8:  8](RO) Support for aging in delay lines. */
        uint32_t dll_tap_num           : 1;  /**< [  7:  7](RO) Number of taps in delay line. This is an encoded value. 0 = 128. 1 = 256. */
        uint32_t bank_num              : 2;  /**< [  6:  5](RO) Maximum number of banks supported by hardware. This is an encoded value.
                                                                 0x0 = One bank.
                                                                 0x1 = Two banks.
                                                                 0x2 = Four banks.
                                                                 0x3 = Eight banks. */
        uint32_t sd_emmc               : 1;  /**< [  4:  4](RO) Support for SD/eMMC. */
        uint32_t xspi                  : 1;  /**< [  3:  3](RO) Support for XSPI. */
        uint32_t sdr_16bit             : 1;  /**< [  2:  2](RO) Support for 16bit in ONFI SDR work mode. */
        uint32_t onfi_41               : 1;  /**< [  1:  1](RO) Support for ONFI4.1 - NAND Flash. */
        uint32_t onfi_40               : 1;  /**< [  0:  0](RO) Support for ONFI4.0 - NAND Flash. */
#else /* Word 0 - Little Endian */
        uint32_t onfi_40               : 1;  /**< [  0:  0](RO) Support for ONFI4.0 - NAND Flash. */
        uint32_t onfi_41               : 1;  /**< [  1:  1](RO) Support for ONFI4.1 - NAND Flash. */
        uint32_t sdr_16bit             : 1;  /**< [  2:  2](RO) Support for 16bit in ONFI SDR work mode. */
        uint32_t xspi                  : 1;  /**< [  3:  3](RO) Support for XSPI. */
        uint32_t sd_emmc               : 1;  /**< [  4:  4](RO) Support for SD/eMMC. */
        uint32_t bank_num              : 2;  /**< [  6:  5](RO) Maximum number of banks supported by hardware. This is an encoded value.
                                                                 0x0 = One bank.
                                                                 0x1 = Two banks.
                                                                 0x2 = Four banks.
                                                                 0x3 = Eight banks. */
        uint32_t dll_tap_num           : 1;  /**< [  7:  7](RO) Number of taps in delay line. This is an encoded value. 0 = 128. 1 = 256. */
        uint32_t aging                 : 1;  /**< [  8:  8](RO) Support for aging in delay lines. */
        uint32_t dfi_clock_ratio       : 1;  /**< [  9:  9](RO) Support for clock ratio on DFI interface. This is an encoded value.
                                                                 0 = 1:1.
                                                                 1 = 1:2. */
        uint32_t per_bit_deskew        : 1;  /**< [ 10: 10](RO) Support for per-bit deskew. */
        uint32_t reg_intf              : 1;  /**< [ 11: 11](RO) SFR interface type.  This is an encoded value. 0 = DFI. 1 = APB. */
        uint32_t ext_lpbk_dqs          : 1;  /**< [ 12: 12](RO) Support for external LPBK_DQS I/O pad. */
        uint32_t jtag_sup              : 1;  /**< [ 13: 13](RO) Support for JTAG muxes. */
        uint32_t pll_sup               : 1;  /**< [ 14: 14](RO) Support for PLL. */
        uint32_t asf_sup               : 1;  /**< [ 15: 15](RO) Support for Automotive Safety Feature. */
        uint32_t reserved_16_31        : 16;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_emmcx_phy_dataslice_rfile_phy_features_s cn; */
};
typedef union cavm_emmcx_phy_dataslice_rfile_phy_features cavm_emmcx_phy_dataslice_rfile_phy_features_t;

static inline uint64_t CAVM_EMMCX_PHY_DATASLICE_RFILE_PHY_FEATURES(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_EMMCX_PHY_DATASLICE_RFILE_PHY_FEATURES(uint64_t a)
{
    if (a==0)
        return 0x824000002074ll + 0x1000000ll * ((a) & 0x0);
    __cavm_csr_fatal("EMMCX_PHY_DATASLICE_RFILE_PHY_FEATURES", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_EMMCX_PHY_DATASLICE_RFILE_PHY_FEATURES(a) cavm_emmcx_phy_dataslice_rfile_phy_features_t
#define bustype_CAVM_EMMCX_PHY_DATASLICE_RFILE_PHY_FEATURES(a) CSR_TYPE_NCB32b
#define basename_CAVM_EMMCX_PHY_DATASLICE_RFILE_PHY_FEATURES(a) "EMMCX_PHY_DATASLICE_RFILE_PHY_FEATURES"
#define device_bar_CAVM_EMMCX_PHY_DATASLICE_RFILE_PHY_FEATURES(a) 0x0 /* PF_BAR0 */
#define busnum_CAVM_EMMCX_PHY_DATASLICE_RFILE_PHY_FEATURES(a) (a)
#define arguments_CAVM_EMMCX_PHY_DATASLICE_RFILE_PHY_FEATURES(a) (a),-1,-1,-1

/**
 * Register (NCB32b) emmc#_phy_dataslice_rfile_phy_gate_lpbk_ctrl
 *
 * EMMC PHY Dataslice Rfile PHY Gate Lpbk Ctrl Register
 * This register controls the gate and loopback control related timing.
 */
union cavm_emmcx_phy_dataslice_rfile_phy_gate_lpbk_ctrl
{
    uint32_t u;
    struct cavm_emmcx_phy_dataslice_rfile_phy_gate_lpbk_ctrl_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t sync_method           : 1;  /**< [ 31: 31](R/W) Defines the method of transferring the data from DQS domain flops to the clk_phy clock domain.
                                                                 0 = read pointer advances based upon a programmable delay of the dfi_rddata_en pulse from the DFI
                                                                 interface.
                                                                 1 = read pointer advances based upon a programmable delay of the empty signal. Recommended setting
                                                                 for SD/eMMC controller. */
        uint32_t sw_dqs_phase_bypass   : 1;  /**< [ 30: 30](R/W) 0 = Use phase detect circult to determine the half_cycle_shift.
                                                                 1 = Use the clk_wrdqs_delay delay line setting to determine the half_cycle_shift. A delay line
                                                                 setting of 0x00-0x7f means half_cycle_shift = 0 and a delay line setting of 0x80-0xff means
                                                                 half_cycle_shift = 1. */
        uint32_t en_sw_half_cycle      : 1;  /**< [ 29: 29](R/W) Enables the software half cycle shift. This determines if write data is transferred to the
                                                                 clk_wrdqs domain on the positive or negative edge of the PHY clock. This field is valid when
                                                                 sw_dqs_phase_bypass is low.
                                                                 0 = Hardware automatically controls any shifting needed for the write level delay line.
                                                                 1 = The setting in the sw_half_cycle_shift field (bit [28]) of the phy_gate_lpbk_ctrl_reg bit
                                                                 parameter defines the shift.
                                                                 Note: If the user chooses to control the half cycle shift manually, it is important that the
                                                                 sw_half_cycle_shift field (bit [28]) of the phy_gate_lpbk_ctrl_reg parameter be cleared to zero if
                                                                 the delay is less than a 1/2 cycle and set to one if the delay is greater than a 1/2 cycle. It is
                                                                 recommended to allow the hardware to control this automatically. */
        uint32_t sw_half_cycle_shift   : 1;  /**< [ 28: 28](R/W) 0 = No effect.
                                                                 1 = Adds a half clock delay to the write data path. */
        uint32_t param_phase_detect_sel_oe : 3;/**< [ 27: 25](R/W) DLL Phase Detect Selector for DQS OE generation to handle the clock domain crossing between the
                                                                 clock and clk_wrdqs signal. Selects the number of delay elements to be inserted between the phase
                                                                 detect flip-flops. Defaults to 0x0.
                                                                 0x0 = One delay element.
                                                                 0x1 = Two delay element.
                                                                 0x2 = Three delay element.
                                                                 0x3 = Four delay element.
                                                                 0x4 = Five delay element.
                                                                 0x5 = Six delay element.
                                                                 0x6 = Seven delay element.
                                                                 0x7 = Eight delay element. */
        uint32_t rd_del_sel            : 6;  /**< [ 24: 19](R/W) Defines the read data delay. Holds the number of cycles to delay the dfi_rddata_en signal prior to
                                                                 enabling the read FIFO. After this delay, the read pointers begin incrementing the read FIFO.
                                                                 If [SYNC_METHOD] is set high the value of this field must take into account the synchronization
                                                                 time of the pointers in the entry FIFO (adding three clock cycles should be sufficient). */
        uint32_t underrun_suppress     : 1;  /**< [ 18: 18](R/W) This field turns off the generation of the underrun signal when [SYNC_METHOD] is set high.
                                                                 Recommended value is zero with an exception for SD/eMMC controller for which this field
                                                                 need to be set high. */
        uint32_t reserved_17           : 1;
        uint32_t rd_del_sel_empty      : 1;  /**< [ 16: 16](R/W) Defines the read data delay for the empty signal generated based on the incoming DQS strobes. For
                                                                 zero delay the data are passed from entry flops to the iodatain* flops one clock cycle after the
                                                                 !empty signals is asserted. Normally the zero value of this field is sufficient as the signal is
                                                                 generated based on the gray pointer synchronized with two stage synchronizer on clk_phy clock
                                                                 domain which gives minimum two clock cycle path from entry flop to the iodatain flop. Increasing
                                                                 the value of this field delays the moment of passing the data from entry flops to the iodatain
                                                                 flops. Increased value gives even more time to propagate the data but the bigger value the bigger
                                                                 probability to overflow the FIFO. Recommended value is zero. */
        uint32_t lpbk_err_check_timing : 3;  /**< [ 15: 13](R/W) Sets the cycle delay between the LFSR and loopback error check logic to ensure that the LFSR
                                                                 sourced data and data being looped back arrive at the same clock cycle for comparison. This value
                                                                 is related to the rd_del_sel field, and is equal to 7 - rd_del_sel. */
        uint32_t lpbk_fail_muxsel      : 1;  /**< [ 12: 12](R/W) Selects data output type for phy_obs_reg_0[23:8].
                                                                 0 = Return the expected data.
                                                                 1 = Return the actual data. */
        uint32_t loopback_control      : 2;  /**< [ 11: 10](R/W) Loopback control.
                                                                 0x0 = Normal Operation Mode.
                                                                 0x1 = lpbk_start; Enables loopback write mode.
                                                                 0x2 = lpbk_stop; Stop loopback to check error register.
                                                                 0x3 = clear; Clear loopback registers. */
        uint32_t lpbk_internal         : 1;  /**< [  9:  9](R/W) Controls the loopback read multiplexer.
                                                                 0 = External Loopback.
                                                                 1 = Internal loopback. */
        uint32_t lpbk_en               : 1;  /**< [  8:  8](R/W) Controls internal write multiplexer. 0x0 = Normal Operation. 0x1 = Enable loopback. */
        uint32_t reserved_7            : 1;
        uint32_t gate_cfg_always_on    : 1;  /**< [  6:  6](R/W) This parameter cause the gate to be always on.
                                                                 Recommended setting for SD/eMMC controller is 1. */
        uint32_t gate_cfg_close        : 2;  /**< [  5:  4](R/W) Normally the gate is closing when all bits of dfi_cebar are high or when dfi_rd_pre_post_amble and
                                                                 rebar_dfi are high. This parameter allows to extend the closing of the DQS gate. Recommended
                                                                 value is zero. */
        uint32_t gate_cfg              : 4;  /**< [  3:  0](R/W) Coarse adjust of gate open time. This value is the number of cycles to delay the dfi_rddata_en
                                                                 signal prior to opening the gate in full cycle increments. Decreasing this value pulls the gate
                                                                 earlier in time. This field should be programmed such that the gate signal lands in the valid DQS
                                                                 gate window. */
#else /* Word 0 - Little Endian */
        uint32_t gate_cfg              : 4;  /**< [  3:  0](R/W) Coarse adjust of gate open time. This value is the number of cycles to delay the dfi_rddata_en
                                                                 signal prior to opening the gate in full cycle increments. Decreasing this value pulls the gate
                                                                 earlier in time. This field should be programmed such that the gate signal lands in the valid DQS
                                                                 gate window. */
        uint32_t gate_cfg_close        : 2;  /**< [  5:  4](R/W) Normally the gate is closing when all bits of dfi_cebar are high or when dfi_rd_pre_post_amble and
                                                                 rebar_dfi are high. This parameter allows to extend the closing of the DQS gate. Recommended
                                                                 value is zero. */
        uint32_t gate_cfg_always_on    : 1;  /**< [  6:  6](R/W) This parameter cause the gate to be always on.
                                                                 Recommended setting for SD/eMMC controller is 1. */
        uint32_t reserved_7            : 1;
        uint32_t lpbk_en               : 1;  /**< [  8:  8](R/W) Controls internal write multiplexer. 0x0 = Normal Operation. 0x1 = Enable loopback. */
        uint32_t lpbk_internal         : 1;  /**< [  9:  9](R/W) Controls the loopback read multiplexer.
                                                                 0 = External Loopback.
                                                                 1 = Internal loopback. */
        uint32_t loopback_control      : 2;  /**< [ 11: 10](R/W) Loopback control.
                                                                 0x0 = Normal Operation Mode.
                                                                 0x1 = lpbk_start; Enables loopback write mode.
                                                                 0x2 = lpbk_stop; Stop loopback to check error register.
                                                                 0x3 = clear; Clear loopback registers. */
        uint32_t lpbk_fail_muxsel      : 1;  /**< [ 12: 12](R/W) Selects data output type for phy_obs_reg_0[23:8].
                                                                 0 = Return the expected data.
                                                                 1 = Return the actual data. */
        uint32_t lpbk_err_check_timing : 3;  /**< [ 15: 13](R/W) Sets the cycle delay between the LFSR and loopback error check logic to ensure that the LFSR
                                                                 sourced data and data being looped back arrive at the same clock cycle for comparison. This value
                                                                 is related to the rd_del_sel field, and is equal to 7 - rd_del_sel. */
        uint32_t rd_del_sel_empty      : 1;  /**< [ 16: 16](R/W) Defines the read data delay for the empty signal generated based on the incoming DQS strobes. For
                                                                 zero delay the data are passed from entry flops to the iodatain* flops one clock cycle after the
                                                                 !empty signals is asserted. Normally the zero value of this field is sufficient as the signal is
                                                                 generated based on the gray pointer synchronized with two stage synchronizer on clk_phy clock
                                                                 domain which gives minimum two clock cycle path from entry flop to the iodatain flop. Increasing
                                                                 the value of this field delays the moment of passing the data from entry flops to the iodatain
                                                                 flops. Increased value gives even more time to propagate the data but the bigger value the bigger
                                                                 probability to overflow the FIFO. Recommended value is zero. */
        uint32_t reserved_17           : 1;
        uint32_t underrun_suppress     : 1;  /**< [ 18: 18](R/W) This field turns off the generation of the underrun signal when [SYNC_METHOD] is set high.
                                                                 Recommended value is zero with an exception for SD/eMMC controller for which this field
                                                                 need to be set high. */
        uint32_t rd_del_sel            : 6;  /**< [ 24: 19](R/W) Defines the read data delay. Holds the number of cycles to delay the dfi_rddata_en signal prior to
                                                                 enabling the read FIFO. After this delay, the read pointers begin incrementing the read FIFO.
                                                                 If [SYNC_METHOD] is set high the value of this field must take into account the synchronization
                                                                 time of the pointers in the entry FIFO (adding three clock cycles should be sufficient). */
        uint32_t param_phase_detect_sel_oe : 3;/**< [ 27: 25](R/W) DLL Phase Detect Selector for DQS OE generation to handle the clock domain crossing between the
                                                                 clock and clk_wrdqs signal. Selects the number of delay elements to be inserted between the phase
                                                                 detect flip-flops. Defaults to 0x0.
                                                                 0x0 = One delay element.
                                                                 0x1 = Two delay element.
                                                                 0x2 = Three delay element.
                                                                 0x3 = Four delay element.
                                                                 0x4 = Five delay element.
                                                                 0x5 = Six delay element.
                                                                 0x6 = Seven delay element.
                                                                 0x7 = Eight delay element. */
        uint32_t sw_half_cycle_shift   : 1;  /**< [ 28: 28](R/W) 0 = No effect.
                                                                 1 = Adds a half clock delay to the write data path. */
        uint32_t en_sw_half_cycle      : 1;  /**< [ 29: 29](R/W) Enables the software half cycle shift. This determines if write data is transferred to the
                                                                 clk_wrdqs domain on the positive or negative edge of the PHY clock. This field is valid when
                                                                 sw_dqs_phase_bypass is low.
                                                                 0 = Hardware automatically controls any shifting needed for the write level delay line.
                                                                 1 = The setting in the sw_half_cycle_shift field (bit [28]) of the phy_gate_lpbk_ctrl_reg bit
                                                                 parameter defines the shift.
                                                                 Note: If the user chooses to control the half cycle shift manually, it is important that the
                                                                 sw_half_cycle_shift field (bit [28]) of the phy_gate_lpbk_ctrl_reg parameter be cleared to zero if
                                                                 the delay is less than a 1/2 cycle and set to one if the delay is greater than a 1/2 cycle. It is
                                                                 recommended to allow the hardware to control this automatically. */
        uint32_t sw_dqs_phase_bypass   : 1;  /**< [ 30: 30](R/W) 0 = Use phase detect circult to determine the half_cycle_shift.
                                                                 1 = Use the clk_wrdqs_delay delay line setting to determine the half_cycle_shift. A delay line
                                                                 setting of 0x00-0x7f means half_cycle_shift = 0 and a delay line setting of 0x80-0xff means
                                                                 half_cycle_shift = 1. */
        uint32_t sync_method           : 1;  /**< [ 31: 31](R/W) Defines the method of transferring the data from DQS domain flops to the clk_phy clock domain.
                                                                 0 = read pointer advances based upon a programmable delay of the dfi_rddata_en pulse from the DFI
                                                                 interface.
                                                                 1 = read pointer advances based upon a programmable delay of the empty signal. Recommended setting
                                                                 for SD/eMMC controller. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_emmcx_phy_dataslice_rfile_phy_gate_lpbk_ctrl_s cn; */
};
typedef union cavm_emmcx_phy_dataslice_rfile_phy_gate_lpbk_ctrl cavm_emmcx_phy_dataslice_rfile_phy_gate_lpbk_ctrl_t;

static inline uint64_t CAVM_EMMCX_PHY_DATASLICE_RFILE_PHY_GATE_LPBK_CTRL(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_EMMCX_PHY_DATASLICE_RFILE_PHY_GATE_LPBK_CTRL(uint64_t a)
{
    if (a==0)
        return 0x824000002008ll + 0x1000000ll * ((a) & 0x0);
    __cavm_csr_fatal("EMMCX_PHY_DATASLICE_RFILE_PHY_GATE_LPBK_CTRL", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_EMMCX_PHY_DATASLICE_RFILE_PHY_GATE_LPBK_CTRL(a) cavm_emmcx_phy_dataslice_rfile_phy_gate_lpbk_ctrl_t
#define bustype_CAVM_EMMCX_PHY_DATASLICE_RFILE_PHY_GATE_LPBK_CTRL(a) CSR_TYPE_NCB32b
#define basename_CAVM_EMMCX_PHY_DATASLICE_RFILE_PHY_GATE_LPBK_CTRL(a) "EMMCX_PHY_DATASLICE_RFILE_PHY_GATE_LPBK_CTRL"
#define device_bar_CAVM_EMMCX_PHY_DATASLICE_RFILE_PHY_GATE_LPBK_CTRL(a) 0x0 /* PF_BAR0 */
#define busnum_CAVM_EMMCX_PHY_DATASLICE_RFILE_PHY_GATE_LPBK_CTRL(a) (a)
#define arguments_CAVM_EMMCX_PHY_DATASLICE_RFILE_PHY_GATE_LPBK_CTRL(a) (a),-1,-1,-1

/**
 * Register (NCB32b) emmc#_phy_dataslice_rfile_phy_ie_timing
 *
 * EMMC PHY Dataslice Rfile PHY Ie Timing Register
 * This register controls the DQS related timing.
 */
union cavm_emmcx_phy_dataslice_rfile_phy_ie_timing
{
    uint32_t u;
    struct cavm_emmcx_phy_dataslice_rfile_phy_ie_timing_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t reserved_21_31        : 11;
        uint32_t ie_always_on          : 1;  /**< [ 20: 20](R/W) Forces the input enable(s) to be on always. */
        uint32_t reserved_19           : 1;
        uint32_t dq_ie_start           : 3;  /**< [ 18: 16](R/W) Define the start position for the DQ input enable. */
        uint32_t reserved_15           : 1;
        uint32_t dq_ie_stop            : 3;  /**< [ 14: 12](R/W) Define the stop position for the DQ input enable. */
        uint32_t reserved_11           : 1;
        uint32_t dqs_ie_start          : 3;  /**< [ 10:  8](R/W) Define the start position for the DQS input enable. */
        uint32_t reserved_7            : 1;
        uint32_t dqs_ie_stop           : 3;  /**< [  6:  4](R/W) Define the stop position for the DQS input enable. */
        uint32_t rddata_en_ie_dly      : 4;  /**< [  3:  0](R/W) Specifies the number of clocks of delay for the dfi_rddata_en signal to line it up with the true
                                                                 (normal) DFI read data position. The MC must deliver an early version of the read data enable to
                                                                 allow time for the input pads to turn on and this field allows the PHY to create the original
                                                                 timing. */
#else /* Word 0 - Little Endian */
        uint32_t rddata_en_ie_dly      : 4;  /**< [  3:  0](R/W) Specifies the number of clocks of delay for the dfi_rddata_en signal to line it up with the true
                                                                 (normal) DFI read data position. The MC must deliver an early version of the read data enable to
                                                                 allow time for the input pads to turn on and this field allows the PHY to create the original
                                                                 timing. */
        uint32_t dqs_ie_stop           : 3;  /**< [  6:  4](R/W) Define the stop position for the DQS input enable. */
        uint32_t reserved_7            : 1;
        uint32_t dqs_ie_start          : 3;  /**< [ 10:  8](R/W) Define the start position for the DQS input enable. */
        uint32_t reserved_11           : 1;
        uint32_t dq_ie_stop            : 3;  /**< [ 14: 12](R/W) Define the stop position for the DQ input enable. */
        uint32_t reserved_15           : 1;
        uint32_t dq_ie_start           : 3;  /**< [ 18: 16](R/W) Define the start position for the DQ input enable. */
        uint32_t reserved_19           : 1;
        uint32_t ie_always_on          : 1;  /**< [ 20: 20](R/W) Forces the input enable(s) to be on always. */
        uint32_t reserved_21_31        : 11;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_emmcx_phy_dataslice_rfile_phy_ie_timing_s cn; */
};
typedef union cavm_emmcx_phy_dataslice_rfile_phy_ie_timing cavm_emmcx_phy_dataslice_rfile_phy_ie_timing_t;

static inline uint64_t CAVM_EMMCX_PHY_DATASLICE_RFILE_PHY_IE_TIMING(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_EMMCX_PHY_DATASLICE_RFILE_PHY_IE_TIMING(uint64_t a)
{
    if (a==0)
        return 0x824000002014ll + 0x1000000ll * ((a) & 0x0);
    __cavm_csr_fatal("EMMCX_PHY_DATASLICE_RFILE_PHY_IE_TIMING", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_EMMCX_PHY_DATASLICE_RFILE_PHY_IE_TIMING(a) cavm_emmcx_phy_dataslice_rfile_phy_ie_timing_t
#define bustype_CAVM_EMMCX_PHY_DATASLICE_RFILE_PHY_IE_TIMING(a) CSR_TYPE_NCB32b
#define basename_CAVM_EMMCX_PHY_DATASLICE_RFILE_PHY_IE_TIMING(a) "EMMCX_PHY_DATASLICE_RFILE_PHY_IE_TIMING"
#define device_bar_CAVM_EMMCX_PHY_DATASLICE_RFILE_PHY_IE_TIMING(a) 0x0 /* PF_BAR0 */
#define busnum_CAVM_EMMCX_PHY_DATASLICE_RFILE_PHY_IE_TIMING(a) (a)
#define arguments_CAVM_EMMCX_PHY_DATASLICE_RFILE_PHY_IE_TIMING(a) (a),-1,-1,-1

/**
 * Register (NCB32b) emmc#_phy_dataslice_rfile_phy_obs_reg_0
 *
 * EMMC PHY Dataslice Rfile PHY Obs Reg 0 Register
 * This register holds the following observable points in the PHY.
 */
union cavm_emmcx_phy_dataslice_rfile_phy_obs_reg_0
{
    uint32_t u;
    struct cavm_emmcx_phy_dataslice_rfile_phy_obs_reg_0_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t reserved_28_31        : 4;
        uint32_t dqs_cmd_overflow      : 1;  /**< [ 27: 27](RO) CMD Status signal to indicate that the logic gate was closed too late ie. the number of DQS
                                                                 strobes exceed the capacity of the entry FIFO. It indicates that rd_del_sel signal value is too
                                                                 high and dfi_rddata are corrupted. It is possible that overflow status is asserted with underrun
                                                                 status - in such case the overflow takes the precedence. The dll_rst_n or rst_n clears this flag. */
        uint32_t dqs_cmd_underrun      : 1;  /**< [ 26: 26](RO) CMD Status signal to indicate that the logic gate had to be forced closed. It indicates that
                                                                 either the DQS strobe did not appear during read or rd_del_sel signal value is too low and
                                                                 dfi_rddata are corrupted. The dll_rst_n or rst_n clears this flag. */
        uint32_t dqs_overflow          : 1;  /**< [ 25: 25](RO) Status signal to indicate that the logic gate was closed too late ie. the number of DQS strobes
                                                                 exceed the capacity of the entry FIFO. It indicates that rd_del_sel signal value is too high
                                                                 and dfi_rddata are corrupted. It is possible that overflow status is asserted with underrun status
                                                                 - in such case the overflow takes the precedence. The dll_rst_n or rst_n clears this flag. */
        uint32_t dqs_underrun          : 1;  /**< [ 24: 24](RO) Status signal to indicate that the logic gate had to be forced closed. It indicates that either
                                                                 the DQS strobe did not appear during read or rd_del_sel signal value is too low and dfi_rddata are
                                                                 corrupted. The dll_rst_n or rst_n clears this flag. */
        uint32_t lpbk_dq_data          : 16; /**< [ 23:  8](RO) If errors are encountered in loopback test this field reports the actual data or the expected data,
                                                                 depending on the setting of the phy_gate_lpbk_ctrl_reg [12] parameter bit. This field is not clear
                                                                 by the clear state of the loopback. If there are no errors in loopback test the value is zero
                                                                 (or value from previous state). */
        uint32_t reserved_2_7          : 6;
        uint32_t lpbk_status           : 2;  /**< [  1:  0](RO) Loopback Status
                                                                 Bit0 - lpbk start; Defines the status of the loopback mode.
                                                                   0 = Not in loopback mode.
                                                                   1 = In loopback mode.
                                                                 Bit1 - lpbk status; Defines the status of the loopback mode.
                                                                   0 = Last Loopback test had no errors.
                                                                   1 = Last loopback test contained data errors. */
#else /* Word 0 - Little Endian */
        uint32_t lpbk_status           : 2;  /**< [  1:  0](RO) Loopback Status
                                                                 Bit0 - lpbk start; Defines the status of the loopback mode.
                                                                   0 = Not in loopback mode.
                                                                   1 = In loopback mode.
                                                                 Bit1 - lpbk status; Defines the status of the loopback mode.
                                                                   0 = Last Loopback test had no errors.
                                                                   1 = Last loopback test contained data errors. */
        uint32_t reserved_2_7          : 6;
        uint32_t lpbk_dq_data          : 16; /**< [ 23:  8](RO) If errors are encountered in loopback test this field reports the actual data or the expected data,
                                                                 depending on the setting of the phy_gate_lpbk_ctrl_reg [12] parameter bit. This field is not clear
                                                                 by the clear state of the loopback. If there are no errors in loopback test the value is zero
                                                                 (or value from previous state). */
        uint32_t dqs_underrun          : 1;  /**< [ 24: 24](RO) Status signal to indicate that the logic gate had to be forced closed. It indicates that either
                                                                 the DQS strobe did not appear during read or rd_del_sel signal value is too low and dfi_rddata are
                                                                 corrupted. The dll_rst_n or rst_n clears this flag. */
        uint32_t dqs_overflow          : 1;  /**< [ 25: 25](RO) Status signal to indicate that the logic gate was closed too late ie. the number of DQS strobes
                                                                 exceed the capacity of the entry FIFO. It indicates that rd_del_sel signal value is too high
                                                                 and dfi_rddata are corrupted. It is possible that overflow status is asserted with underrun status
                                                                 - in such case the overflow takes the precedence. The dll_rst_n or rst_n clears this flag. */
        uint32_t dqs_cmd_underrun      : 1;  /**< [ 26: 26](RO) CMD Status signal to indicate that the logic gate had to be forced closed. It indicates that
                                                                 either the DQS strobe did not appear during read or rd_del_sel signal value is too low and
                                                                 dfi_rddata are corrupted. The dll_rst_n or rst_n clears this flag. */
        uint32_t dqs_cmd_overflow      : 1;  /**< [ 27: 27](RO) CMD Status signal to indicate that the logic gate was closed too late ie. the number of DQS
                                                                 strobes exceed the capacity of the entry FIFO. It indicates that rd_del_sel signal value is too
                                                                 high and dfi_rddata are corrupted. It is possible that overflow status is asserted with underrun
                                                                 status - in such case the overflow takes the precedence. The dll_rst_n or rst_n clears this flag. */
        uint32_t reserved_28_31        : 4;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_emmcx_phy_dataslice_rfile_phy_obs_reg_0_s cn; */
};
typedef union cavm_emmcx_phy_dataslice_rfile_phy_obs_reg_0 cavm_emmcx_phy_dataslice_rfile_phy_obs_reg_0_t;

static inline uint64_t CAVM_EMMCX_PHY_DATASLICE_RFILE_PHY_OBS_REG_0(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_EMMCX_PHY_DATASLICE_RFILE_PHY_OBS_REG_0(uint64_t a)
{
    if (a==0)
        return 0x824000002018ll + 0x1000000ll * ((a) & 0x0);
    __cavm_csr_fatal("EMMCX_PHY_DATASLICE_RFILE_PHY_OBS_REG_0", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_EMMCX_PHY_DATASLICE_RFILE_PHY_OBS_REG_0(a) cavm_emmcx_phy_dataslice_rfile_phy_obs_reg_0_t
#define bustype_CAVM_EMMCX_PHY_DATASLICE_RFILE_PHY_OBS_REG_0(a) CSR_TYPE_NCB32b
#define basename_CAVM_EMMCX_PHY_DATASLICE_RFILE_PHY_OBS_REG_0(a) "EMMCX_PHY_DATASLICE_RFILE_PHY_OBS_REG_0"
#define device_bar_CAVM_EMMCX_PHY_DATASLICE_RFILE_PHY_OBS_REG_0(a) 0x0 /* PF_BAR0 */
#define busnum_CAVM_EMMCX_PHY_DATASLICE_RFILE_PHY_OBS_REG_0(a) (a)
#define arguments_CAVM_EMMCX_PHY_DATASLICE_RFILE_PHY_OBS_REG_0(a) (a),-1,-1,-1

/**
 * Register (NCB32b) emmc#_phy_dataslice_rfile_phy_rd_deskew
 *
 * EMMC PHY Dataslice Rfile PHY Rd Deskew Register
 * This register holds the values of delay of each DQ bit on the read path.
 */
union cavm_emmcx_phy_dataslice_rfile_phy_rd_deskew
{
    uint32_t u;
    struct cavm_emmcx_phy_dataslice_rfile_phy_rd_deskew_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t rd_dq7_deskew_delay   : 4;  /**< [ 31: 28](R/W) Deskew delay for DQ bit 7. */
        uint32_t rd_dq6_deskew_delay   : 4;  /**< [ 27: 24](R/W) Deskew delay for DQ bit 6. */
        uint32_t rd_dq5_deskew_delay   : 4;  /**< [ 23: 20](R/W) Deskew delay for DQ bit 5. */
        uint32_t rd_dq4_deskew_delay   : 4;  /**< [ 19: 16](R/W) Deskew delay for DQ bit 4. */
        uint32_t rd_dq3_deskew_delay   : 4;  /**< [ 15: 12](R/W) Deskew delay for DQ bit 3. */
        uint32_t rd_dq2_deskew_delay   : 4;  /**< [ 11:  8](R/W) Deskew delay for DQ bit 2. */
        uint32_t rd_dq1_deskew_delay   : 4;  /**< [  7:  4](R/W) Deskew delay for DQ bit 1. */
        uint32_t rd_dq0_deskew_delay   : 4;  /**< [  3:  0](R/W) Deskew delay for DQ bit 0. */
#else /* Word 0 - Little Endian */
        uint32_t rd_dq0_deskew_delay   : 4;  /**< [  3:  0](R/W) Deskew delay for DQ bit 0. */
        uint32_t rd_dq1_deskew_delay   : 4;  /**< [  7:  4](R/W) Deskew delay for DQ bit 1. */
        uint32_t rd_dq2_deskew_delay   : 4;  /**< [ 11:  8](R/W) Deskew delay for DQ bit 2. */
        uint32_t rd_dq3_deskew_delay   : 4;  /**< [ 15: 12](R/W) Deskew delay for DQ bit 3. */
        uint32_t rd_dq4_deskew_delay   : 4;  /**< [ 19: 16](R/W) Deskew delay for DQ bit 4. */
        uint32_t rd_dq5_deskew_delay   : 4;  /**< [ 23: 20](R/W) Deskew delay for DQ bit 5. */
        uint32_t rd_dq6_deskew_delay   : 4;  /**< [ 27: 24](R/W) Deskew delay for DQ bit 6. */
        uint32_t rd_dq7_deskew_delay   : 4;  /**< [ 31: 28](R/W) Deskew delay for DQ bit 7. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_emmcx_phy_dataslice_rfile_phy_rd_deskew_s cn; */
};
typedef union cavm_emmcx_phy_dataslice_rfile_phy_rd_deskew cavm_emmcx_phy_dataslice_rfile_phy_rd_deskew_t;

static inline uint64_t CAVM_EMMCX_PHY_DATASLICE_RFILE_PHY_RD_DESKEW(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_EMMCX_PHY_DATASLICE_RFILE_PHY_RD_DESKEW(uint64_t a)
{
    if (a==0)
        return 0x82400000203cll + 0x1000000ll * ((a) & 0x0);
    __cavm_csr_fatal("EMMCX_PHY_DATASLICE_RFILE_PHY_RD_DESKEW", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_EMMCX_PHY_DATASLICE_RFILE_PHY_RD_DESKEW(a) cavm_emmcx_phy_dataslice_rfile_phy_rd_deskew_t
#define bustype_CAVM_EMMCX_PHY_DATASLICE_RFILE_PHY_RD_DESKEW(a) CSR_TYPE_NCB32b
#define basename_CAVM_EMMCX_PHY_DATASLICE_RFILE_PHY_RD_DESKEW(a) "EMMCX_PHY_DATASLICE_RFILE_PHY_RD_DESKEW"
#define device_bar_CAVM_EMMCX_PHY_DATASLICE_RFILE_PHY_RD_DESKEW(a) 0x0 /* PF_BAR0 */
#define busnum_CAVM_EMMCX_PHY_DATASLICE_RFILE_PHY_RD_DESKEW(a) (a)
#define arguments_CAVM_EMMCX_PHY_DATASLICE_RFILE_PHY_RD_DESKEW(a) (a),-1,-1,-1

/**
 * Register (NCB32b) emmc#_phy_dataslice_rfile_phy_static_togg
 *
 * EMMC PHY Dataslice Rfile PHY Static Togg Register
 * This register controls the static aging feature of the PHY.
 */
union cavm_emmcx_phy_dataslice_rfile_phy_static_togg
{
    uint32_t u;
    struct cavm_emmcx_phy_dataslice_rfile_phy_static_togg_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t reserved_25_31        : 7;
        uint32_t read_dqs_togg_enable  : 1;  /**< [ 24: 24](R/W) Enables the toggling for the active part of the read_dqs delay line in idle state. For SD and XSPI
                                                                 set this field to zero. Toggling on active part of the read_dqs delay line for those controllers
                                                                 should be disabled
                                                                 0 = disabled.
                                                                 1 = enabled. */
        uint32_t static_togg_enable    : 4;  /**< [ 23: 20](R/W) Control to enable the toggle signal during static activity. When low the feature is disabled.
                                                                 bit 0 = master delay line enable.
                                                                 bit 1 = read path delay line enable.
                                                                 bit 2 = write path delay line enable.
                                                                 bit 3 = write DQS path delay line enable. */
        uint32_t reserved_17_19        : 3;
        uint32_t static_togg_global_enable : 1;/**< [ 16: 16](R/W) Global control to enable the toggle signal during static activity. */
        uint32_t static_tog_clk_div    : 16; /**< [ 15:  0](R/W) Clock divider to create toggle signal. */
#else /* Word 0 - Little Endian */
        uint32_t static_tog_clk_div    : 16; /**< [ 15:  0](R/W) Clock divider to create toggle signal. */
        uint32_t static_togg_global_enable : 1;/**< [ 16: 16](R/W) Global control to enable the toggle signal during static activity. */
        uint32_t reserved_17_19        : 3;
        uint32_t static_togg_enable    : 4;  /**< [ 23: 20](R/W) Control to enable the toggle signal during static activity. When low the feature is disabled.
                                                                 bit 0 = master delay line enable.
                                                                 bit 1 = read path delay line enable.
                                                                 bit 2 = write path delay line enable.
                                                                 bit 3 = write DQS path delay line enable. */
        uint32_t read_dqs_togg_enable  : 1;  /**< [ 24: 24](R/W) Enables the toggling for the active part of the read_dqs delay line in idle state. For SD and XSPI
                                                                 set this field to zero. Toggling on active part of the read_dqs delay line for those controllers
                                                                 should be disabled
                                                                 0 = disabled.
                                                                 1 = enabled. */
        uint32_t reserved_25_31        : 7;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_emmcx_phy_dataslice_rfile_phy_static_togg_s cn; */
};
typedef union cavm_emmcx_phy_dataslice_rfile_phy_static_togg cavm_emmcx_phy_dataslice_rfile_phy_static_togg_t;

static inline uint64_t CAVM_EMMCX_PHY_DATASLICE_RFILE_PHY_STATIC_TOGG(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_EMMCX_PHY_DATASLICE_RFILE_PHY_STATIC_TOGG(uint64_t a)
{
    if (a==0)
        return 0x824000002028ll + 0x1000000ll * ((a) & 0x0);
    __cavm_csr_fatal("EMMCX_PHY_DATASLICE_RFILE_PHY_STATIC_TOGG", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_EMMCX_PHY_DATASLICE_RFILE_PHY_STATIC_TOGG(a) cavm_emmcx_phy_dataslice_rfile_phy_static_togg_t
#define bustype_CAVM_EMMCX_PHY_DATASLICE_RFILE_PHY_STATIC_TOGG(a) CSR_TYPE_NCB32b
#define basename_CAVM_EMMCX_PHY_DATASLICE_RFILE_PHY_STATIC_TOGG(a) "EMMCX_PHY_DATASLICE_RFILE_PHY_STATIC_TOGG"
#define device_bar_CAVM_EMMCX_PHY_DATASLICE_RFILE_PHY_STATIC_TOGG(a) 0x0 /* PF_BAR0 */
#define busnum_CAVM_EMMCX_PHY_DATASLICE_RFILE_PHY_STATIC_TOGG(a) (a)
#define arguments_CAVM_EMMCX_PHY_DATASLICE_RFILE_PHY_STATIC_TOGG(a) (a),-1,-1,-1

/**
 * Register (NCB32b) emmc#_phy_dataslice_rfile_phy_version
 *
 * EMMC PHY Dataslice Rfile PHY Version Register
 * This register contains release identification number.
 */
union cavm_emmcx_phy_dataslice_rfile_phy_version
{
    uint32_t u;
    struct cavm_emmcx_phy_dataslice_rfile_phy_version_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t combo_phy_magic_number : 16;/**< [ 31: 16](RO) Magic number. */
        uint32_t phy_fix               : 8;  /**< [ 15:  8](RO) Fixed number (minor revision number). */
        uint32_t phy_rev               : 8;  /**< [  7:  0](RO) PHY revision number. */
#else /* Word 0 - Little Endian */
        uint32_t phy_rev               : 8;  /**< [  7:  0](RO) PHY revision number. */
        uint32_t phy_fix               : 8;  /**< [ 15:  8](RO) Fixed number (minor revision number). */
        uint32_t combo_phy_magic_number : 16;/**< [ 31: 16](RO) Magic number. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_emmcx_phy_dataslice_rfile_phy_version_s cn; */
};
typedef union cavm_emmcx_phy_dataslice_rfile_phy_version cavm_emmcx_phy_dataslice_rfile_phy_version_t;

static inline uint64_t CAVM_EMMCX_PHY_DATASLICE_RFILE_PHY_VERSION(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_EMMCX_PHY_DATASLICE_RFILE_PHY_VERSION(uint64_t a)
{
    if (a==0)
        return 0x824000002070ll + 0x1000000ll * ((a) & 0x0);
    __cavm_csr_fatal("EMMCX_PHY_DATASLICE_RFILE_PHY_VERSION", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_EMMCX_PHY_DATASLICE_RFILE_PHY_VERSION(a) cavm_emmcx_phy_dataslice_rfile_phy_version_t
#define bustype_CAVM_EMMCX_PHY_DATASLICE_RFILE_PHY_VERSION(a) CSR_TYPE_NCB32b
#define basename_CAVM_EMMCX_PHY_DATASLICE_RFILE_PHY_VERSION(a) "EMMCX_PHY_DATASLICE_RFILE_PHY_VERSION"
#define device_bar_CAVM_EMMCX_PHY_DATASLICE_RFILE_PHY_VERSION(a) 0x0 /* PF_BAR0 */
#define busnum_CAVM_EMMCX_PHY_DATASLICE_RFILE_PHY_VERSION(a) (a)
#define arguments_CAVM_EMMCX_PHY_DATASLICE_RFILE_PHY_VERSION(a) (a),-1,-1,-1

/**
 * Register (NCB32b) emmc#_phy_dataslice_rfile_phy_wr_deskew
 *
 * EMMC PHY Dataslice Rfile PHY Wr Deskew Register
 * This register holds the values of delay of each DQ bit on the write path.
 */
union cavm_emmcx_phy_dataslice_rfile_phy_wr_deskew
{
    uint32_t u;
    struct cavm_emmcx_phy_dataslice_rfile_phy_wr_deskew_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t wr_dq7_deskew_delay   : 4;  /**< [ 31: 28](R/W) Deskew delay for DQ bit 7. */
        uint32_t wr_dq6_deskew_delay   : 4;  /**< [ 27: 24](R/W) Deskew delay for DQ bit 6. */
        uint32_t wr_dq5_deskew_delay   : 4;  /**< [ 23: 20](R/W) Deskew delay for DQ bit 5. */
        uint32_t wr_dq4_deskew_delay   : 4;  /**< [ 19: 16](R/W) Deskew delay for DQ bit 4. */
        uint32_t wr_dq3_deskew_delay   : 4;  /**< [ 15: 12](R/W) Deskew delay for DQ bit 3. */
        uint32_t wr_dq2_deskew_delay   : 4;  /**< [ 11:  8](R/W) Deskew delay for DQ bit 2. */
        uint32_t wr_dq1_deskew_delay   : 4;  /**< [  7:  4](R/W) Deskew delay for DQ bit 1. */
        uint32_t wr_dq0_deskew_delay   : 4;  /**< [  3:  0](R/W) Deskew delay for DQ bit 0. */
#else /* Word 0 - Little Endian */
        uint32_t wr_dq0_deskew_delay   : 4;  /**< [  3:  0](R/W) Deskew delay for DQ bit 0. */
        uint32_t wr_dq1_deskew_delay   : 4;  /**< [  7:  4](R/W) Deskew delay for DQ bit 1. */
        uint32_t wr_dq2_deskew_delay   : 4;  /**< [ 11:  8](R/W) Deskew delay for DQ bit 2. */
        uint32_t wr_dq3_deskew_delay   : 4;  /**< [ 15: 12](R/W) Deskew delay for DQ bit 3. */
        uint32_t wr_dq4_deskew_delay   : 4;  /**< [ 19: 16](R/W) Deskew delay for DQ bit 4. */
        uint32_t wr_dq5_deskew_delay   : 4;  /**< [ 23: 20](R/W) Deskew delay for DQ bit 5. */
        uint32_t wr_dq6_deskew_delay   : 4;  /**< [ 27: 24](R/W) Deskew delay for DQ bit 6. */
        uint32_t wr_dq7_deskew_delay   : 4;  /**< [ 31: 28](R/W) Deskew delay for DQ bit 7. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_emmcx_phy_dataslice_rfile_phy_wr_deskew_s cn; */
};
typedef union cavm_emmcx_phy_dataslice_rfile_phy_wr_deskew cavm_emmcx_phy_dataslice_rfile_phy_wr_deskew_t;

static inline uint64_t CAVM_EMMCX_PHY_DATASLICE_RFILE_PHY_WR_DESKEW(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_EMMCX_PHY_DATASLICE_RFILE_PHY_WR_DESKEW(uint64_t a)
{
    if (a==0)
        return 0x82400000202cll + 0x1000000ll * ((a) & 0x0);
    __cavm_csr_fatal("EMMCX_PHY_DATASLICE_RFILE_PHY_WR_DESKEW", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_EMMCX_PHY_DATASLICE_RFILE_PHY_WR_DESKEW(a) cavm_emmcx_phy_dataslice_rfile_phy_wr_deskew_t
#define bustype_CAVM_EMMCX_PHY_DATASLICE_RFILE_PHY_WR_DESKEW(a) CSR_TYPE_NCB32b
#define basename_CAVM_EMMCX_PHY_DATASLICE_RFILE_PHY_WR_DESKEW(a) "EMMCX_PHY_DATASLICE_RFILE_PHY_WR_DESKEW"
#define device_bar_CAVM_EMMCX_PHY_DATASLICE_RFILE_PHY_WR_DESKEW(a) 0x0 /* PF_BAR0 */
#define busnum_CAVM_EMMCX_PHY_DATASLICE_RFILE_PHY_WR_DESKEW(a) (a)
#define arguments_CAVM_EMMCX_PHY_DATASLICE_RFILE_PHY_WR_DESKEW(a) (a),-1,-1,-1

/**
 * Register (NCB32b) emmc#_phy_dataslice_rfile_phy_wr_deskew_pd_ctrl_0
 *
 * EMMC PHY Dataslice Rfile PHY Wr Deskew Pd Ctrl 0 Register
 * This register holds the values of phase detect block for each DQ bit on the write path.
 */
union cavm_emmcx_phy_dataslice_rfile_phy_wr_deskew_pd_ctrl_0
{
    uint32_t u;
    struct cavm_emmcx_phy_dataslice_rfile_phy_wr_deskew_pd_ctrl_0_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t reserved_31           : 1;
        uint32_t dq3_sw_dq_phase_bypass : 1; /**< [ 30: 30](R/W) 0 = Use phase detect circuit to determine the half_cycle_shift.
                                                                 1 = Use the clk_wr_delay delay line setting to determine the half_cycle_shift. A delay line
                                                                 setting of 0x00-0x7f means half_cycle_shift= 0 and a delay line setting of 0x80-0xff
                                                                 means half_cycle_shift = 1. */
        uint32_t dq3_en_sw_half_cycle  : 1;  /**< [ 29: 29](R/W) Enables the software half cycle shift. This determines if write data is transferred to the clk_wr
                                                                 domain on the positive or negative edge of the PHY clock. This field is valid when
                                                                 dq3_sw_dq_phase_bypass is low.
                                                                 0 = Hardware automatically controls any shifting needed for the write level delay line.
                                                                 1 = The setting in the dq3_sw_half_cycle_shift field this reg defines the shift.
                                                                 Note: If the user chooses to control the half cycle shift manually, it is important that the
                                                                 dq3_sw_half_cycle_shift field (bit [12]) of the phy_wr_deskew_pd_ctrl_reg parameter be cleared to
                                                                 '0' if the delay is less than a 1/2 cycle and set to '1' if the delay is greater than a 1/2 cycle.
                                                                 It is recommended to allow the hardware to control this automatically. */
        uint32_t dq3_sw_half_cycle_shift : 1;/**< [ 28: 28](R/W) 0 = No effect.
                                                                 1 = Adds a half clock delay to the bit 3 of the write data path. */
        uint32_t reserved_27           : 1;
        uint32_t dq3_phase_detect_sel  : 3;  /**< [ 26: 24](R/W) DLL Phase Detect Selector for DQ generation to handle the clock domain crossing between the clock
                                                                 and clk_wr signal. Selects the number of delay elements to be inserted between the phase detect
                                                                 flip-flops. Defaults to 0x0.
                                                                 0x0 = One delay element.
                                                                 0x1 = Two delay element.
                                                                 0x2 = Three delay element.
                                                                 0x3 = Four delay element.
                                                                 0x4 = Five delay element.
                                                                 0x5 = Six delay element.
                                                                 0x6 = Seven delay element.
                                                                 0x7 = Eight delay element. */
        uint32_t reserved_23           : 1;
        uint32_t dq2_sw_dq_phase_bypass : 1; /**< [ 22: 22](R/W) 0 = Use phase detect circuit to determine the half_cycle_shift.
                                                                 1 = Use the clk_wr_delay delay line setting to determine the half_cycle_shift. A delay line
                                                                 setting of 0x00-0x7f means half_cycle_shift= 0 and a delay line setting of 0x80-0xff means
                                                                 half_cycle_shift = 1. */
        uint32_t dq2_en_sw_half_cycle  : 1;  /**< [ 21: 21](R/W) Enables the software half cycle shift. This determines if write data is transferred to the clk_wr
                                                                 domain on the positive or negative edge of the PHY clock. This field is valid when
                                                                 dq2_sw_dq_phase_bypass is low.
                                                                 0 = Hardware automatically controls any shifting needed for the write level delay line.
                                                                 1 = The setting in the dq2_sw_half_cycle_shift field this reg defines the shift.
                                                                 Note: If the user chooses to control the half cycle shift manually, it is important that the
                                                                 dq2_sw_half_cycle_shift field (bit [8]) of the phy_wr_deskew_pd_ctrl_reg parameter be cleared to
                                                                 '0' if the delay is less than a 1/2 cycle and set to '1' if the delay is greater than a 1/2 cycle.
                                                                 It is recommended to allow the hardware to control this automatically. */
        uint32_t dq2_sw_half_cycle_shift : 1;/**< [ 20: 20](R/W) 0 = No effect.
                                                                 1 = Adds a half clock delay to the bit 2 of the write data path. */
        uint32_t reserved_19           : 1;
        uint32_t dq2_phase_detect_sel  : 3;  /**< [ 18: 16](R/W) DLL Phase Detect Selector for DQ generation to handle the clock domain crossing between the clock
                                                                 and clk_wr signal. Selects the number of delay elements to be inserted between the phase detect
                                                                 flip-flops. Defaults to 0x0.
                                                                 0x0 = One delay element.
                                                                 0x1 = Two delay element.
                                                                 0x2 = Three delay element.
                                                                 0x3 = Four delay element.
                                                                 0x4 = Five delay element.
                                                                 0x5 = Six delay element.
                                                                 0x6 = Seven delay element.
                                                                 0x7 = Eight delay element. */
        uint32_t reserved_15           : 1;
        uint32_t dq1_sw_dq_phase_bypass : 1; /**< [ 14: 14](R/W) 0 = Use phase detect circuit to determine the half_cycle_shift.
                                                                 1 = Use the clk_wr_delay delay line setting to determine the half_cycle_shift. A delay line
                                                                 setting of 0x00-0x7f means half_cycle_shift = 0 and a delay line setting of 0x80-0xff
                                                                 means half_cycle_shift = 1. */
        uint32_t dq1_en_sw_half_cycle  : 1;  /**< [ 13: 13](R/W) Enables the software half cycle shift. This determines if write data is transferred to the clk_wr
                                                                 domain on the positive or negative edge of the PHY clock. This field is valid when
                                                                 dq1_sw_dq_phase_bypass is low.
                                                                 0 = Hardware automatically controls any shifting needed for the write level delay line.
                                                                 1 = The setting in the dq1_sw_half_cycle_shift field this reg defines the shift.
                                                                 Note: If the user chooses to control the half cycle shift manually, it is important that the
                                                                 dq1_sw_half_cycle_shift field (bit [4]) of the phy_wr_deskew_pd_ctrl_reg parameter be cleared to
                                                                 '0' if the delay is less than a 1/2 cycle and set to '1' if the delay is greater than a 1/2 cycle.
                                                                 It is recommended to allow the hardware to control this automatically. */
        uint32_t dq1_sw_half_cycle_shift : 1;/**< [ 12: 12](R/W) 0 = No effect.
                                                                 1 = Adds a half clock delay to the bit 1 of the write data path. */
        uint32_t reserved_11           : 1;
        uint32_t dq1_phase_detect_sel  : 3;  /**< [ 10:  8](R/W) DLL Phase Detect Selector for DQ generation to handle the clock domain crossing between the clock
                                                                 and clk_wr signal. Selects the number of delay elements to be inserted between the phase detect
                                                                 flip-flops. Defaults to 0x0.
                                                                 0x0 = One delay element.
                                                                 0x1 = Two delay element.
                                                                 0x2 = Three delay element.
                                                                 0x3 = Four delay element.
                                                                 0x4 = Five delay element.
                                                                 0x5 = Six delay element.
                                                                 0x6 = Seven delay element.
                                                                 0x7 = Eight delay element. */
        uint32_t reserved_7            : 1;
        uint32_t dq0_sw_dq_phase_bypass : 1; /**< [  6:  6](R/W) 0 = Use phase detect circuit to determine the half_cycle_shift.
                                                                 1 = Use the clk_wr_delay delay line setting to determine the half_cycle_shift. A delay line
                                                                 setting of 0x00-0x7f means half_cycle_shift = 0 and a delay line setting of 0x80-0xff
                                                                 means half_cycle_shift = 1. */
        uint32_t dq0_en_sw_half_cycle  : 1;  /**< [  5:  5](R/W) Enables the software half cycle shift. This determines if write data is transferred to the clk_wr
                                                                 domain on the positive or negative edge of the PHY clock.
                                                                 This field is valid when dq0_sw_dq_phase_bypass is low.
                                                                 0 = Hardware automatically controls any shifting needed for the write level delay line.
                                                                 1 = The setting in the dq0_sw_half_cycle_shift field this reg defines the shift.
                                                                 Note: If the user chooses to control the half cycle shift manually, it is important that the
                                                                 dq0_sw_half_cycle_shift field (bit [0]) of the phy_wr_deskew_pd_ctrl_reg parameter be cleared to
                                                                 '0' if the delay is less than a 1/2 cycle and set to '1' if the delay is greater than a 1/2 cycle.
                                                                 It is recommended to allow the hardware to control this automatically. */
        uint32_t dq0_sw_half_cycle_shift : 1;/**< [  4:  4](R/W) 0 = No effect.
                                                                 1 = Adds a half clock delay to the bit 0 of the write data path. */
        uint32_t reserved_3            : 1;
        uint32_t dq0_phase_detect_sel  : 3;  /**< [  2:  0](R/W) DLL Phase Detect Selector for DQ generation to handle the clock domain crossing between the clock
                                                                 and clk_wr signal. Selects the number of delay elements to be inserted between the phase detect
                                                                 flip-flops. Defaults to 0x0.
                                                                 0x0 = One delay element.
                                                                 0x1 = Two delay element.
                                                                 0x2 = Three delay element.
                                                                 0x3 = Four delay element.
                                                                 0x4 = Five delay element.
                                                                 0x5 = Six delay element.
                                                                 0x6 = Seven delay element.
                                                                 0x7 = Eight delay element. */
#else /* Word 0 - Little Endian */
        uint32_t dq0_phase_detect_sel  : 3;  /**< [  2:  0](R/W) DLL Phase Detect Selector for DQ generation to handle the clock domain crossing between the clock
                                                                 and clk_wr signal. Selects the number of delay elements to be inserted between the phase detect
                                                                 flip-flops. Defaults to 0x0.
                                                                 0x0 = One delay element.
                                                                 0x1 = Two delay element.
                                                                 0x2 = Three delay element.
                                                                 0x3 = Four delay element.
                                                                 0x4 = Five delay element.
                                                                 0x5 = Six delay element.
                                                                 0x6 = Seven delay element.
                                                                 0x7 = Eight delay element. */
        uint32_t reserved_3            : 1;
        uint32_t dq0_sw_half_cycle_shift : 1;/**< [  4:  4](R/W) 0 = No effect.
                                                                 1 = Adds a half clock delay to the bit 0 of the write data path. */
        uint32_t dq0_en_sw_half_cycle  : 1;  /**< [  5:  5](R/W) Enables the software half cycle shift. This determines if write data is transferred to the clk_wr
                                                                 domain on the positive or negative edge of the PHY clock.
                                                                 This field is valid when dq0_sw_dq_phase_bypass is low.
                                                                 0 = Hardware automatically controls any shifting needed for the write level delay line.
                                                                 1 = The setting in the dq0_sw_half_cycle_shift field this reg defines the shift.
                                                                 Note: If the user chooses to control the half cycle shift manually, it is important that the
                                                                 dq0_sw_half_cycle_shift field (bit [0]) of the phy_wr_deskew_pd_ctrl_reg parameter be cleared to
                                                                 '0' if the delay is less than a 1/2 cycle and set to '1' if the delay is greater than a 1/2 cycle.
                                                                 It is recommended to allow the hardware to control this automatically. */
        uint32_t dq0_sw_dq_phase_bypass : 1; /**< [  6:  6](R/W) 0 = Use phase detect circuit to determine the half_cycle_shift.
                                                                 1 = Use the clk_wr_delay delay line setting to determine the half_cycle_shift. A delay line
                                                                 setting of 0x00-0x7f means half_cycle_shift = 0 and a delay line setting of 0x80-0xff
                                                                 means half_cycle_shift = 1. */
        uint32_t reserved_7            : 1;
        uint32_t dq1_phase_detect_sel  : 3;  /**< [ 10:  8](R/W) DLL Phase Detect Selector for DQ generation to handle the clock domain crossing between the clock
                                                                 and clk_wr signal. Selects the number of delay elements to be inserted between the phase detect
                                                                 flip-flops. Defaults to 0x0.
                                                                 0x0 = One delay element.
                                                                 0x1 = Two delay element.
                                                                 0x2 = Three delay element.
                                                                 0x3 = Four delay element.
                                                                 0x4 = Five delay element.
                                                                 0x5 = Six delay element.
                                                                 0x6 = Seven delay element.
                                                                 0x7 = Eight delay element. */
        uint32_t reserved_11           : 1;
        uint32_t dq1_sw_half_cycle_shift : 1;/**< [ 12: 12](R/W) 0 = No effect.
                                                                 1 = Adds a half clock delay to the bit 1 of the write data path. */
        uint32_t dq1_en_sw_half_cycle  : 1;  /**< [ 13: 13](R/W) Enables the software half cycle shift. This determines if write data is transferred to the clk_wr
                                                                 domain on the positive or negative edge of the PHY clock. This field is valid when
                                                                 dq1_sw_dq_phase_bypass is low.
                                                                 0 = Hardware automatically controls any shifting needed for the write level delay line.
                                                                 1 = The setting in the dq1_sw_half_cycle_shift field this reg defines the shift.
                                                                 Note: If the user chooses to control the half cycle shift manually, it is important that the
                                                                 dq1_sw_half_cycle_shift field (bit [4]) of the phy_wr_deskew_pd_ctrl_reg parameter be cleared to
                                                                 '0' if the delay is less than a 1/2 cycle and set to '1' if the delay is greater than a 1/2 cycle.
                                                                 It is recommended to allow the hardware to control this automatically. */
        uint32_t dq1_sw_dq_phase_bypass : 1; /**< [ 14: 14](R/W) 0 = Use phase detect circuit to determine the half_cycle_shift.
                                                                 1 = Use the clk_wr_delay delay line setting to determine the half_cycle_shift. A delay line
                                                                 setting of 0x00-0x7f means half_cycle_shift = 0 and a delay line setting of 0x80-0xff
                                                                 means half_cycle_shift = 1. */
        uint32_t reserved_15           : 1;
        uint32_t dq2_phase_detect_sel  : 3;  /**< [ 18: 16](R/W) DLL Phase Detect Selector for DQ generation to handle the clock domain crossing between the clock
                                                                 and clk_wr signal. Selects the number of delay elements to be inserted between the phase detect
                                                                 flip-flops. Defaults to 0x0.
                                                                 0x0 = One delay element.
                                                                 0x1 = Two delay element.
                                                                 0x2 = Three delay element.
                                                                 0x3 = Four delay element.
                                                                 0x4 = Five delay element.
                                                                 0x5 = Six delay element.
                                                                 0x6 = Seven delay element.
                                                                 0x7 = Eight delay element. */
        uint32_t reserved_19           : 1;
        uint32_t dq2_sw_half_cycle_shift : 1;/**< [ 20: 20](R/W) 0 = No effect.
                                                                 1 = Adds a half clock delay to the bit 2 of the write data path. */
        uint32_t dq2_en_sw_half_cycle  : 1;  /**< [ 21: 21](R/W) Enables the software half cycle shift. This determines if write data is transferred to the clk_wr
                                                                 domain on the positive or negative edge of the PHY clock. This field is valid when
                                                                 dq2_sw_dq_phase_bypass is low.
                                                                 0 = Hardware automatically controls any shifting needed for the write level delay line.
                                                                 1 = The setting in the dq2_sw_half_cycle_shift field this reg defines the shift.
                                                                 Note: If the user chooses to control the half cycle shift manually, it is important that the
                                                                 dq2_sw_half_cycle_shift field (bit [8]) of the phy_wr_deskew_pd_ctrl_reg parameter be cleared to
                                                                 '0' if the delay is less than a 1/2 cycle and set to '1' if the delay is greater than a 1/2 cycle.
                                                                 It is recommended to allow the hardware to control this automatically. */
        uint32_t dq2_sw_dq_phase_bypass : 1; /**< [ 22: 22](R/W) 0 = Use phase detect circuit to determine the half_cycle_shift.
                                                                 1 = Use the clk_wr_delay delay line setting to determine the half_cycle_shift. A delay line
                                                                 setting of 0x00-0x7f means half_cycle_shift= 0 and a delay line setting of 0x80-0xff means
                                                                 half_cycle_shift = 1. */
        uint32_t reserved_23           : 1;
        uint32_t dq3_phase_detect_sel  : 3;  /**< [ 26: 24](R/W) DLL Phase Detect Selector for DQ generation to handle the clock domain crossing between the clock
                                                                 and clk_wr signal. Selects the number of delay elements to be inserted between the phase detect
                                                                 flip-flops. Defaults to 0x0.
                                                                 0x0 = One delay element.
                                                                 0x1 = Two delay element.
                                                                 0x2 = Three delay element.
                                                                 0x3 = Four delay element.
                                                                 0x4 = Five delay element.
                                                                 0x5 = Six delay element.
                                                                 0x6 = Seven delay element.
                                                                 0x7 = Eight delay element. */
        uint32_t reserved_27           : 1;
        uint32_t dq3_sw_half_cycle_shift : 1;/**< [ 28: 28](R/W) 0 = No effect.
                                                                 1 = Adds a half clock delay to the bit 3 of the write data path. */
        uint32_t dq3_en_sw_half_cycle  : 1;  /**< [ 29: 29](R/W) Enables the software half cycle shift. This determines if write data is transferred to the clk_wr
                                                                 domain on the positive or negative edge of the PHY clock. This field is valid when
                                                                 dq3_sw_dq_phase_bypass is low.
                                                                 0 = Hardware automatically controls any shifting needed for the write level delay line.
                                                                 1 = The setting in the dq3_sw_half_cycle_shift field this reg defines the shift.
                                                                 Note: If the user chooses to control the half cycle shift manually, it is important that the
                                                                 dq3_sw_half_cycle_shift field (bit [12]) of the phy_wr_deskew_pd_ctrl_reg parameter be cleared to
                                                                 '0' if the delay is less than a 1/2 cycle and set to '1' if the delay is greater than a 1/2 cycle.
                                                                 It is recommended to allow the hardware to control this automatically. */
        uint32_t dq3_sw_dq_phase_bypass : 1; /**< [ 30: 30](R/W) 0 = Use phase detect circuit to determine the half_cycle_shift.
                                                                 1 = Use the clk_wr_delay delay line setting to determine the half_cycle_shift. A delay line
                                                                 setting of 0x00-0x7f means half_cycle_shift= 0 and a delay line setting of 0x80-0xff
                                                                 means half_cycle_shift = 1. */
        uint32_t reserved_31           : 1;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_emmcx_phy_dataslice_rfile_phy_wr_deskew_pd_ctrl_0_s cn; */
};
typedef union cavm_emmcx_phy_dataslice_rfile_phy_wr_deskew_pd_ctrl_0 cavm_emmcx_phy_dataslice_rfile_phy_wr_deskew_pd_ctrl_0_t;

static inline uint64_t CAVM_EMMCX_PHY_DATASLICE_RFILE_PHY_WR_DESKEW_PD_CTRL_0(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_EMMCX_PHY_DATASLICE_RFILE_PHY_WR_DESKEW_PD_CTRL_0(uint64_t a)
{
    if (a==0)
        return 0x824000002034ll + 0x1000000ll * ((a) & 0x0);
    __cavm_csr_fatal("EMMCX_PHY_DATASLICE_RFILE_PHY_WR_DESKEW_PD_CTRL_0", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_EMMCX_PHY_DATASLICE_RFILE_PHY_WR_DESKEW_PD_CTRL_0(a) cavm_emmcx_phy_dataslice_rfile_phy_wr_deskew_pd_ctrl_0_t
#define bustype_CAVM_EMMCX_PHY_DATASLICE_RFILE_PHY_WR_DESKEW_PD_CTRL_0(a) CSR_TYPE_NCB32b
#define basename_CAVM_EMMCX_PHY_DATASLICE_RFILE_PHY_WR_DESKEW_PD_CTRL_0(a) "EMMCX_PHY_DATASLICE_RFILE_PHY_WR_DESKEW_PD_CTRL_0"
#define device_bar_CAVM_EMMCX_PHY_DATASLICE_RFILE_PHY_WR_DESKEW_PD_CTRL_0(a) 0x0 /* PF_BAR0 */
#define busnum_CAVM_EMMCX_PHY_DATASLICE_RFILE_PHY_WR_DESKEW_PD_CTRL_0(a) (a)
#define arguments_CAVM_EMMCX_PHY_DATASLICE_RFILE_PHY_WR_DESKEW_PD_CTRL_0(a) (a),-1,-1,-1

/**
 * Register (NCB32b) emmc#_phy_dataslice_rfile_phy_wr_deskew_pd_ctrl_1
 *
 * EMMC PHY Dataslice Rfile PHY Wr Deskew Pd Ctrl 1 Register
 * This register holds the values of phase detect block for each DQ bit on the write path.
 */
union cavm_emmcx_phy_dataslice_rfile_phy_wr_deskew_pd_ctrl_1
{
    uint32_t u;
    struct cavm_emmcx_phy_dataslice_rfile_phy_wr_deskew_pd_ctrl_1_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t reserved_31           : 1;
        uint32_t dq7_sw_dq_phase_bypass : 1; /**< [ 30: 30](R/W) 0 = Use phase detect circuit to determine the half_cycle_shift.
                                                                 1 = Use the clk_wr_delay delay line setting to determine the half_cycle_shift. A delay line
                                                                 setting of 0x00-0x7f means half_cycle_shift = 0 and a delay line setting of 0x80-0xff
                                                                 means half_cycle_shift = 1. */
        uint32_t dq7_en_sw_half_cycle  : 1;  /**< [ 29: 29](R/W) Enables the software half cycle shift. This determines if write data is transferred to the clk_wr
                                                                 domain on the positive or negative edge of the PHY clock. This field is valid when
                                                                 dq7_sw_dq_phase_bypass is low.
                                                                 0 = Hardware automatically controls any shifting needed for the write level delay line.
                                                                 1 = The setting in the dq7_sw_half_cycle_shift field of this reg defines the shift.
                                                                 Note: If the user chooses to control the half cycle shift manually, it is important that the
                                                                 dq7_sw_half_cycle_shift field (bit [28]) of the phy_wr_deskew_pd_ctrl_reg parameter be cleared to
                                                                 '0' if the delay is less than a 1/2 cycle and set to '1' if the delay is greater than a 1/2 cycle.
                                                                 It is recommended to allow the hardware to control this automatically. */
        uint32_t dq7_sw_half_cycle_shift : 1;/**< [ 28: 28](R/W) 0 = No effect.
                                                                 1 = Adds a half clock delay to the bit 7 of the write data path. */
        uint32_t reserved_27           : 1;
        uint32_t dq7_phase_detect_sel  : 3;  /**< [ 26: 24](R/W) DLL Phase Detect Selector for DQ generation to handle the clock domain crossing between the clock
                                                                 and clk_wr signal. Selects the number of delay elements to be inserted between the phase detect
                                                                 flip-flops. Defaults to 0x0.
                                                                 0x0 = One delay element.
                                                                 0x1 = Two delay element.
                                                                 0x2 = Three delay element.
                                                                 0x3 = Four delay element.
                                                                 0x4 = Five delay element.
                                                                 0x5 = Six delay element.
                                                                 0x6 = Seven delay element.
                                                                 0x7 = Eight delay element. */
        uint32_t reserved_23           : 1;
        uint32_t dq6_sw_dq_phase_bypass : 1; /**< [ 22: 22](R/W) 0 = Use phase detect circuit to determine the half_cycle_shift.
                                                                 1 = Use the clk_wr_delay delay line setting to determine the half_cycle_shift. A delay line
                                                                 setting of 0x00-0x7f means half_cycle_shift = 0 and a delay line setting of 0x80-0xff
                                                                 means half_cycle_shift = 1. */
        uint32_t dq6_en_sw_half_cycle  : 1;  /**< [ 21: 21](R/W) Enables the software half cycle shift. This determines if write data is transferred to the clk_wr
                                                                 domain on the positive or negative edge of the PHY clock. This field is valid when
                                                                 dq6_sw_dq_phase_bypass is low.
                                                                 0 = Hardware automatically controls any shifting needed for the write level delay line.
                                                                 1 = The setting in the dq6_sw_half_cycle_shift field this reg defines the shift.
                                                                 Note: If the user chooses to control the half cycle shift manually, it is important that the
                                                                 dq6_sw_half_cycle_shift field (bit [24]) of the phy_wr_deskew_pd_ctrl_reg parameter be cleared to
                                                                 '0' if the delay is less than a 1/2 cycle and set to '1' if the delay is greater than a 1/2 cycle.
                                                                 It is recommended to allow the hardware to control this automatically. */
        uint32_t dq6_sw_half_cycle_shift : 1;/**< [ 20: 20](R/W) 0 = No effect.
                                                                 1 = Adds a half clock delay to the bit 6 of the write data path. */
        uint32_t reserved_19           : 1;
        uint32_t dq6_phase_detect_sel  : 3;  /**< [ 18: 16](R/W) DLL Phase Detect Selector for DQ generation to handle the clock domain crossing between the clock
                                                                 and clk_wr signal. Selects the number of delay elements to be inserted between the phase detect
                                                                 flip-flops. Defaults to 0x0.
                                                                 0x0 = One delay element.
                                                                 0x1 = Two delay element.
                                                                 0x2 = Three delay element.
                                                                 0x3 = Four delay element.
                                                                 0x4 = Five delay element.
                                                                 0x5 = Six delay element.
                                                                 0x6 = Seven delay element.
                                                                 0x7 = Eight delay element. */
        uint32_t reserved_15           : 1;
        uint32_t dq5_sw_dq_phase_bypass : 1; /**< [ 14: 14](R/W) 0 = Use phase detect circuit to determine the half_cycle_shift.
                                                                 1 = Use the clk_wr_delay delay line setting to determine the half_cycle_shift. A delay line
                                                                 setting of 0x00-0x7f means half_cycle_shift = 0 and a delay line setting of 0x80-0xff
                                                                 means half_cycle_shift = 1. */
        uint32_t dq5_en_sw_half_cycle  : 1;  /**< [ 13: 13](R/W) Enables the software half cycle shift. This determines if write data is transferred to the clk_wr
                                                                 domain on the positive or negative edge of the PHY clock.
                                                                 This field is valid when dq5_sw_dq_phase_bypass is low.
                                                                 0 = Hardware automatically controls any shifting needed for the write level delay line.
                                                                 1 = The setting in the dq5_sw_half_cycle_shift field this reg defines the shift.
                                                                 Note: If the user chooses to control the half cycle shift manually, it is important that the
                                                                 dq5_sw_half_cycle_shift field (bit [20]) of the phy_wr_deskew_pd_ctrl_reg parameter be
                                                                 cleared to '0' if the delay is less than a 1/2 cycle and set to '1' if the delay is greater than
                                                                 a 1/2 cycle. It is recommended to allow the hardware to control this automatically. */
        uint32_t dq5_sw_half_cycle_shift : 1;/**< [ 12: 12](R/W) 0 = No effect.
                                                                 1 = Adds a half clock delay to the bit 5 of the write data path. */
        uint32_t reserved_11           : 1;
        uint32_t dq5_phase_detect_sel  : 3;  /**< [ 10:  8](R/W) DLL Phase Detect Selector for DQ generation to handle the clock domain crossing between the clock
                                                                 and clk_wr signal. Selects the number of delay elements to be inserted between the phase detect
                                                                 flip-flops. Defaults to 0x0.
                                                                 0x0 = One delay element.
                                                                 0x1 = Two delay element.
                                                                 0x2 = Three delay element.
                                                                 0x3 = Four delay element.
                                                                 0x4 = Five delay element.
                                                                 0x5 = Six delay element.
                                                                 0x6 = Seven delay element.
                                                                 0x7 = Eight delay element. */
        uint32_t reserved_7            : 1;
        uint32_t dq4_sw_dq_phase_bypass : 1; /**< [  6:  6](R/W) 0 = Use phase detect circuit to determine the half_cycle_shift.
                                                                 1 = Use the clk_wr_delay delay line setting to determine the half_cycle_shift. A delay line
                                                                 setting of 0x00-0x7f means half_cycle_shift = 0 and a delay line setting of 0x80-0xff
                                                                 means half_cycle_shift = 1. */
        uint32_t dq4_en_sw_half_cycle  : 1;  /**< [  5:  5](R/W) Enables the software half cycle shift. This determines if write data is transferred to the clk_wr
                                                                 domain on the positive or negative edge of the PHY clock.
                                                                 This field is valid when dq4_sw_dq_phase_bypass is low.
                                                                 0 = Hardware automatically controls any shifting needed for the write level delay line.
                                                                 1 = The setting in the dq4_sw_half_cycle_shift field this reg defines the shift.
                                                                 Note: If the user chooses to control the half cycle shift manually, it is important that the
                                                                 dq4_sw_half_cycle_shift field (bit [16]) of the phy_wr_deskew_pd_ctrl_reg parameter be
                                                                 cleared to '0' if the delay is less than a 1/2 cycle and set to '1' if the delay is greater than
                                                                 a 1/2 cycle. It is recommended to allow the hardware to control this automatically. */
        uint32_t dq4_sw_half_cycle_shift : 1;/**< [  4:  4](R/W) 0 = No effect.
                                                                 1 = Adds a half clock delay to the bit 4 of the write data path. */
        uint32_t reserved_3            : 1;
        uint32_t dq4_phase_detect_sel  : 3;  /**< [  2:  0](R/W) DLL Phase Detect Selector for DQ generation to handle the clock domain crossing between the clock
                                                                 and clk_wr signal. Selects the number of delay elements to be inserted between the phase detect
                                                                 flip-flops. Defaults to 0x0.
                                                                 0x0 = One delay element.
                                                                 0x1 = Two delay element.
                                                                 0x2 = Three delay element.
                                                                 0x3 = Four delay element.
                                                                 0x4 = Five delay element.
                                                                 0x5 = Six delay element.
                                                                 0x6 = Seven delay element.
                                                                 0x7 = Eight delay element. */
#else /* Word 0 - Little Endian */
        uint32_t dq4_phase_detect_sel  : 3;  /**< [  2:  0](R/W) DLL Phase Detect Selector for DQ generation to handle the clock domain crossing between the clock
                                                                 and clk_wr signal. Selects the number of delay elements to be inserted between the phase detect
                                                                 flip-flops. Defaults to 0x0.
                                                                 0x0 = One delay element.
                                                                 0x1 = Two delay element.
                                                                 0x2 = Three delay element.
                                                                 0x3 = Four delay element.
                                                                 0x4 = Five delay element.
                                                                 0x5 = Six delay element.
                                                                 0x6 = Seven delay element.
                                                                 0x7 = Eight delay element. */
        uint32_t reserved_3            : 1;
        uint32_t dq4_sw_half_cycle_shift : 1;/**< [  4:  4](R/W) 0 = No effect.
                                                                 1 = Adds a half clock delay to the bit 4 of the write data path. */
        uint32_t dq4_en_sw_half_cycle  : 1;  /**< [  5:  5](R/W) Enables the software half cycle shift. This determines if write data is transferred to the clk_wr
                                                                 domain on the positive or negative edge of the PHY clock.
                                                                 This field is valid when dq4_sw_dq_phase_bypass is low.
                                                                 0 = Hardware automatically controls any shifting needed for the write level delay line.
                                                                 1 = The setting in the dq4_sw_half_cycle_shift field this reg defines the shift.
                                                                 Note: If the user chooses to control the half cycle shift manually, it is important that the
                                                                 dq4_sw_half_cycle_shift field (bit [16]) of the phy_wr_deskew_pd_ctrl_reg parameter be
                                                                 cleared to '0' if the delay is less than a 1/2 cycle and set to '1' if the delay is greater than
                                                                 a 1/2 cycle. It is recommended to allow the hardware to control this automatically. */
        uint32_t dq4_sw_dq_phase_bypass : 1; /**< [  6:  6](R/W) 0 = Use phase detect circuit to determine the half_cycle_shift.
                                                                 1 = Use the clk_wr_delay delay line setting to determine the half_cycle_shift. A delay line
                                                                 setting of 0x00-0x7f means half_cycle_shift = 0 and a delay line setting of 0x80-0xff
                                                                 means half_cycle_shift = 1. */
        uint32_t reserved_7            : 1;
        uint32_t dq5_phase_detect_sel  : 3;  /**< [ 10:  8](R/W) DLL Phase Detect Selector for DQ generation to handle the clock domain crossing between the clock
                                                                 and clk_wr signal. Selects the number of delay elements to be inserted between the phase detect
                                                                 flip-flops. Defaults to 0x0.
                                                                 0x0 = One delay element.
                                                                 0x1 = Two delay element.
                                                                 0x2 = Three delay element.
                                                                 0x3 = Four delay element.
                                                                 0x4 = Five delay element.
                                                                 0x5 = Six delay element.
                                                                 0x6 = Seven delay element.
                                                                 0x7 = Eight delay element. */
        uint32_t reserved_11           : 1;
        uint32_t dq5_sw_half_cycle_shift : 1;/**< [ 12: 12](R/W) 0 = No effect.
                                                                 1 = Adds a half clock delay to the bit 5 of the write data path. */
        uint32_t dq5_en_sw_half_cycle  : 1;  /**< [ 13: 13](R/W) Enables the software half cycle shift. This determines if write data is transferred to the clk_wr
                                                                 domain on the positive or negative edge of the PHY clock.
                                                                 This field is valid when dq5_sw_dq_phase_bypass is low.
                                                                 0 = Hardware automatically controls any shifting needed for the write level delay line.
                                                                 1 = The setting in the dq5_sw_half_cycle_shift field this reg defines the shift.
                                                                 Note: If the user chooses to control the half cycle shift manually, it is important that the
                                                                 dq5_sw_half_cycle_shift field (bit [20]) of the phy_wr_deskew_pd_ctrl_reg parameter be
                                                                 cleared to '0' if the delay is less than a 1/2 cycle and set to '1' if the delay is greater than
                                                                 a 1/2 cycle. It is recommended to allow the hardware to control this automatically. */
        uint32_t dq5_sw_dq_phase_bypass : 1; /**< [ 14: 14](R/W) 0 = Use phase detect circuit to determine the half_cycle_shift.
                                                                 1 = Use the clk_wr_delay delay line setting to determine the half_cycle_shift. A delay line
                                                                 setting of 0x00-0x7f means half_cycle_shift = 0 and a delay line setting of 0x80-0xff
                                                                 means half_cycle_shift = 1. */
        uint32_t reserved_15           : 1;
        uint32_t dq6_phase_detect_sel  : 3;  /**< [ 18: 16](R/W) DLL Phase Detect Selector for DQ generation to handle the clock domain crossing between the clock
                                                                 and clk_wr signal. Selects the number of delay elements to be inserted between the phase detect
                                                                 flip-flops. Defaults to 0x0.
                                                                 0x0 = One delay element.
                                                                 0x1 = Two delay element.
                                                                 0x2 = Three delay element.
                                                                 0x3 = Four delay element.
                                                                 0x4 = Five delay element.
                                                                 0x5 = Six delay element.
                                                                 0x6 = Seven delay element.
                                                                 0x7 = Eight delay element. */
        uint32_t reserved_19           : 1;
        uint32_t dq6_sw_half_cycle_shift : 1;/**< [ 20: 20](R/W) 0 = No effect.
                                                                 1 = Adds a half clock delay to the bit 6 of the write data path. */
        uint32_t dq6_en_sw_half_cycle  : 1;  /**< [ 21: 21](R/W) Enables the software half cycle shift. This determines if write data is transferred to the clk_wr
                                                                 domain on the positive or negative edge of the PHY clock. This field is valid when
                                                                 dq6_sw_dq_phase_bypass is low.
                                                                 0 = Hardware automatically controls any shifting needed for the write level delay line.
                                                                 1 = The setting in the dq6_sw_half_cycle_shift field this reg defines the shift.
                                                                 Note: If the user chooses to control the half cycle shift manually, it is important that the
                                                                 dq6_sw_half_cycle_shift field (bit [24]) of the phy_wr_deskew_pd_ctrl_reg parameter be cleared to
                                                                 '0' if the delay is less than a 1/2 cycle and set to '1' if the delay is greater than a 1/2 cycle.
                                                                 It is recommended to allow the hardware to control this automatically. */
        uint32_t dq6_sw_dq_phase_bypass : 1; /**< [ 22: 22](R/W) 0 = Use phase detect circuit to determine the half_cycle_shift.
                                                                 1 = Use the clk_wr_delay delay line setting to determine the half_cycle_shift. A delay line
                                                                 setting of 0x00-0x7f means half_cycle_shift = 0 and a delay line setting of 0x80-0xff
                                                                 means half_cycle_shift = 1. */
        uint32_t reserved_23           : 1;
        uint32_t dq7_phase_detect_sel  : 3;  /**< [ 26: 24](R/W) DLL Phase Detect Selector for DQ generation to handle the clock domain crossing between the clock
                                                                 and clk_wr signal. Selects the number of delay elements to be inserted between the phase detect
                                                                 flip-flops. Defaults to 0x0.
                                                                 0x0 = One delay element.
                                                                 0x1 = Two delay element.
                                                                 0x2 = Three delay element.
                                                                 0x3 = Four delay element.
                                                                 0x4 = Five delay element.
                                                                 0x5 = Six delay element.
                                                                 0x6 = Seven delay element.
                                                                 0x7 = Eight delay element. */
        uint32_t reserved_27           : 1;
        uint32_t dq7_sw_half_cycle_shift : 1;/**< [ 28: 28](R/W) 0 = No effect.
                                                                 1 = Adds a half clock delay to the bit 7 of the write data path. */
        uint32_t dq7_en_sw_half_cycle  : 1;  /**< [ 29: 29](R/W) Enables the software half cycle shift. This determines if write data is transferred to the clk_wr
                                                                 domain on the positive or negative edge of the PHY clock. This field is valid when
                                                                 dq7_sw_dq_phase_bypass is low.
                                                                 0 = Hardware automatically controls any shifting needed for the write level delay line.
                                                                 1 = The setting in the dq7_sw_half_cycle_shift field of this reg defines the shift.
                                                                 Note: If the user chooses to control the half cycle shift manually, it is important that the
                                                                 dq7_sw_half_cycle_shift field (bit [28]) of the phy_wr_deskew_pd_ctrl_reg parameter be cleared to
                                                                 '0' if the delay is less than a 1/2 cycle and set to '1' if the delay is greater than a 1/2 cycle.
                                                                 It is recommended to allow the hardware to control this automatically. */
        uint32_t dq7_sw_dq_phase_bypass : 1; /**< [ 30: 30](R/W) 0 = Use phase detect circuit to determine the half_cycle_shift.
                                                                 1 = Use the clk_wr_delay delay line setting to determine the half_cycle_shift. A delay line
                                                                 setting of 0x00-0x7f means half_cycle_shift = 0 and a delay line setting of 0x80-0xff
                                                                 means half_cycle_shift = 1. */
        uint32_t reserved_31           : 1;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_emmcx_phy_dataslice_rfile_phy_wr_deskew_pd_ctrl_1_s cn; */
};
typedef union cavm_emmcx_phy_dataslice_rfile_phy_wr_deskew_pd_ctrl_1 cavm_emmcx_phy_dataslice_rfile_phy_wr_deskew_pd_ctrl_1_t;

static inline uint64_t CAVM_EMMCX_PHY_DATASLICE_RFILE_PHY_WR_DESKEW_PD_CTRL_1(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_EMMCX_PHY_DATASLICE_RFILE_PHY_WR_DESKEW_PD_CTRL_1(uint64_t a)
{
    if (a==0)
        return 0x824000002038ll + 0x1000000ll * ((a) & 0x0);
    __cavm_csr_fatal("EMMCX_PHY_DATASLICE_RFILE_PHY_WR_DESKEW_PD_CTRL_1", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_EMMCX_PHY_DATASLICE_RFILE_PHY_WR_DESKEW_PD_CTRL_1(a) cavm_emmcx_phy_dataslice_rfile_phy_wr_deskew_pd_ctrl_1_t
#define bustype_CAVM_EMMCX_PHY_DATASLICE_RFILE_PHY_WR_DESKEW_PD_CTRL_1(a) CSR_TYPE_NCB32b
#define basename_CAVM_EMMCX_PHY_DATASLICE_RFILE_PHY_WR_DESKEW_PD_CTRL_1(a) "EMMCX_PHY_DATASLICE_RFILE_PHY_WR_DESKEW_PD_CTRL_1"
#define device_bar_CAVM_EMMCX_PHY_DATASLICE_RFILE_PHY_WR_DESKEW_PD_CTRL_1(a) 0x0 /* PF_BAR0 */
#define busnum_CAVM_EMMCX_PHY_DATASLICE_RFILE_PHY_WR_DESKEW_PD_CTRL_1(a) (a)
#define arguments_CAVM_EMMCX_PHY_DATASLICE_RFILE_PHY_WR_DESKEW_PD_CTRL_1(a) (a),-1,-1,-1

/**
 * Register (NCB32b) emmc#_phy_dataslice_rfile_phy_wr_rd_deskew_cmd
 *
 * EMMC PHY Dataslice Rfile PHY Wr Rd Deskew Cmd Register
 * This register holds the values of delay of CMD bit on the write and read path as
 * well as the values of
 * phase detect block for CMD bit on the write path.
 */
union cavm_emmcx_phy_dataslice_rfile_phy_wr_rd_deskew_cmd
{
    uint32_t u;
    struct cavm_emmcx_phy_dataslice_rfile_phy_wr_rd_deskew_cmd_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t reserved_28_31        : 4;
        uint32_t rd_cmd_deskew_delay   : 4;  /**< [ 27: 24](R/W) Deskew delay for CMD signal. */
        uint32_t reserved_17_23        : 7;
        uint32_t cmd_clkperiod_delay   : 1;  /**< [ 16: 16](R/W) Defines additional latency on the CMD signal. */
        uint32_t reserved_15           : 1;
        uint32_t cmd_sw_dq_phase_bypass : 1; /**< [ 14: 14](R/W) 0x0 = Use phase detect circuit to determine the half_cycle_shift.
                                                                 0x1 = Use the clk_wr_delay delay line setting to determine the half_cycle_shift. A delay line
                                                                 setting of 0x00-0x7f means half_cycle_shift = 0 and a delay line setting of 0x80-0xff
                                                                 means half_cycle_shift = 1. */
        uint32_t cmd_en_sw_half_cycle  : 1;  /**< [ 13: 13](R/W) Enables the software half cycle shift. This determines if write data is transferred to the clk_wr
                                                                 domain on the positive or negative edge of the PHY clock. this field is valid when
                                                                 cmd_sw_dq_phase_bypass is low.
                                                                 0 = Hardware automatically controls any shifting needed for the write level delay line.
                                                                 1 = The setting in the cmd_sw_half_cycle_shift field of this reg defines the shift.
                                                                 Note: If the user chooses to control the half cycle shift manually, it is important that the
                                                                 cmd_sw_half_cycle_shift field (bit [12]) of the phy_wr_rd_deskew_cmd_reg parameter be cleared to
                                                                 '0' if the delay is less than a 1/2 cycle and set to '1' if the delay is greater than a 1/2 cycle.
                                                                 It is recommended to allow the hardware to control this automatically. */
        uint32_t cmd_sw_half_cycle_shift : 1;/**< [ 12: 12](R/W) 0 = No effect.
                                                                 1 = Adds a half clock delay to the bit of the write cmd path. */
        uint32_t reserved_11           : 1;
        uint32_t cmd_phase_detect_sel  : 3;  /**< [ 10:  8](R/W) DLL Phase Detect Selector for CMD generation to handle the clock domain crossing between the clock
                                                                 and clk_wr signal. Selects the number of delay elements to be inserted between the phase detect
                                                                 flip-flops. Defaults to 0x0.
                                                                 0x0 = One delay element.
                                                                 0x1 = Two delay element.
                                                                 0x2 = Three delay element.
                                                                 0x3 = Four delay element.
                                                                 0x4 = Five delay element.
                                                                 0x5 = Six delay element.
                                                                 0x6 = Seven delay element.
                                                                 0x7 = Eight delay element. */
        uint32_t reserved_4_7          : 4;
        uint32_t wr_cmd_deskew_delay   : 4;  /**< [  3:  0](R/W) Deskew delay for CMD signal. */
#else /* Word 0 - Little Endian */
        uint32_t wr_cmd_deskew_delay   : 4;  /**< [  3:  0](R/W) Deskew delay for CMD signal. */
        uint32_t reserved_4_7          : 4;
        uint32_t cmd_phase_detect_sel  : 3;  /**< [ 10:  8](R/W) DLL Phase Detect Selector for CMD generation to handle the clock domain crossing between the clock
                                                                 and clk_wr signal. Selects the number of delay elements to be inserted between the phase detect
                                                                 flip-flops. Defaults to 0x0.
                                                                 0x0 = One delay element.
                                                                 0x1 = Two delay element.
                                                                 0x2 = Three delay element.
                                                                 0x3 = Four delay element.
                                                                 0x4 = Five delay element.
                                                                 0x5 = Six delay element.
                                                                 0x6 = Seven delay element.
                                                                 0x7 = Eight delay element. */
        uint32_t reserved_11           : 1;
        uint32_t cmd_sw_half_cycle_shift : 1;/**< [ 12: 12](R/W) 0 = No effect.
                                                                 1 = Adds a half clock delay to the bit of the write cmd path. */
        uint32_t cmd_en_sw_half_cycle  : 1;  /**< [ 13: 13](R/W) Enables the software half cycle shift. This determines if write data is transferred to the clk_wr
                                                                 domain on the positive or negative edge of the PHY clock. this field is valid when
                                                                 cmd_sw_dq_phase_bypass is low.
                                                                 0 = Hardware automatically controls any shifting needed for the write level delay line.
                                                                 1 = The setting in the cmd_sw_half_cycle_shift field of this reg defines the shift.
                                                                 Note: If the user chooses to control the half cycle shift manually, it is important that the
                                                                 cmd_sw_half_cycle_shift field (bit [12]) of the phy_wr_rd_deskew_cmd_reg parameter be cleared to
                                                                 '0' if the delay is less than a 1/2 cycle and set to '1' if the delay is greater than a 1/2 cycle.
                                                                 It is recommended to allow the hardware to control this automatically. */
        uint32_t cmd_sw_dq_phase_bypass : 1; /**< [ 14: 14](R/W) 0x0 = Use phase detect circuit to determine the half_cycle_shift.
                                                                 0x1 = Use the clk_wr_delay delay line setting to determine the half_cycle_shift. A delay line
                                                                 setting of 0x00-0x7f means half_cycle_shift = 0 and a delay line setting of 0x80-0xff
                                                                 means half_cycle_shift = 1. */
        uint32_t reserved_15           : 1;
        uint32_t cmd_clkperiod_delay   : 1;  /**< [ 16: 16](R/W) Defines additional latency on the CMD signal. */
        uint32_t reserved_17_23        : 7;
        uint32_t rd_cmd_deskew_delay   : 4;  /**< [ 27: 24](R/W) Deskew delay for CMD signal. */
        uint32_t reserved_28_31        : 4;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_emmcx_phy_dataslice_rfile_phy_wr_rd_deskew_cmd_s cn; */
};
typedef union cavm_emmcx_phy_dataslice_rfile_phy_wr_rd_deskew_cmd cavm_emmcx_phy_dataslice_rfile_phy_wr_rd_deskew_cmd_t;

static inline uint64_t CAVM_EMMCX_PHY_DATASLICE_RFILE_PHY_WR_RD_DESKEW_CMD(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_EMMCX_PHY_DATASLICE_RFILE_PHY_WR_RD_DESKEW_CMD(uint64_t a)
{
    if (a==0)
        return 0x824000002030ll + 0x1000000ll * ((a) & 0x0);
    __cavm_csr_fatal("EMMCX_PHY_DATASLICE_RFILE_PHY_WR_RD_DESKEW_CMD", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_EMMCX_PHY_DATASLICE_RFILE_PHY_WR_RD_DESKEW_CMD(a) cavm_emmcx_phy_dataslice_rfile_phy_wr_rd_deskew_cmd_t
#define bustype_CAVM_EMMCX_PHY_DATASLICE_RFILE_PHY_WR_RD_DESKEW_CMD(a) CSR_TYPE_NCB32b
#define basename_CAVM_EMMCX_PHY_DATASLICE_RFILE_PHY_WR_RD_DESKEW_CMD(a) "EMMCX_PHY_DATASLICE_RFILE_PHY_WR_RD_DESKEW_CMD"
#define device_bar_CAVM_EMMCX_PHY_DATASLICE_RFILE_PHY_WR_RD_DESKEW_CMD(a) 0x0 /* PF_BAR0 */
#define busnum_CAVM_EMMCX_PHY_DATASLICE_RFILE_PHY_WR_RD_DESKEW_CMD(a) (a)
#define arguments_CAVM_EMMCX_PHY_DATASLICE_RFILE_PHY_WR_RD_DESKEW_CMD(a) (a),-1,-1,-1

/**
 * Register (NCB) emmc#_srs_ctl0
 *
 * EMMC SRS Control Register0
 */
union cavm_emmcx_srs_ctl0
{
    uint64_t u;
    struct cavm_emmcx_srs_ctl0_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t srs16                 : 32; /**< [ 63: 32](R/W) This register controls value of EMMC_HOST_SRS_SRS16. */
        uint64_t srs17                 : 32; /**< [ 31:  0](R/W) This register controls value of EMMC_HOST_SRS_SRS17. */
#else /* Word 0 - Little Endian */
        uint64_t srs17                 : 32; /**< [ 31:  0](R/W) This register controls value of EMMC_HOST_SRS_SRS17. */
        uint64_t srs16                 : 32; /**< [ 63: 32](R/W) This register controls value of EMMC_HOST_SRS_SRS16. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_emmcx_srs_ctl0_s cn; */
};
typedef union cavm_emmcx_srs_ctl0 cavm_emmcx_srs_ctl0_t;

static inline uint64_t CAVM_EMMCX_SRS_CTL0(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_EMMCX_SRS_CTL0(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CN10KB) && (a==0))
        return 0x824000000800ll + 0x1000000ll * ((a) & 0x0);
    __cavm_csr_fatal("EMMCX_SRS_CTL0", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_EMMCX_SRS_CTL0(a) cavm_emmcx_srs_ctl0_t
#define bustype_CAVM_EMMCX_SRS_CTL0(a) CSR_TYPE_NCB
#define basename_CAVM_EMMCX_SRS_CTL0(a) "EMMCX_SRS_CTL0"
#define device_bar_CAVM_EMMCX_SRS_CTL0(a) 0x0 /* PF_BAR0 */
#define busnum_CAVM_EMMCX_SRS_CTL0(a) (a)
#define arguments_CAVM_EMMCX_SRS_CTL0(a) (a),-1,-1,-1

/**
 * Register (NCB) emmc#_srs_ctl1
 *
 * EMMC SRS Control Register1
 */
union cavm_emmcx_srs_ctl1
{
    uint64_t u;
    struct cavm_emmcx_srs_ctl1_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t srs18                 : 32; /**< [ 63: 32](R/W) This register controls value of EMMC_HOST_SRS_SRS18. */
        uint64_t srs19                 : 32; /**< [ 31:  0](R/W) This register controls value of EMMC_HOST_SRS_SRS19. */
#else /* Word 0 - Little Endian */
        uint64_t srs19                 : 32; /**< [ 31:  0](R/W) This register controls value of EMMC_HOST_SRS_SRS19. */
        uint64_t srs18                 : 32; /**< [ 63: 32](R/W) This register controls value of EMMC_HOST_SRS_SRS18. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_emmcx_srs_ctl1_s cn; */
};
typedef union cavm_emmcx_srs_ctl1 cavm_emmcx_srs_ctl1_t;

static inline uint64_t CAVM_EMMCX_SRS_CTL1(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_EMMCX_SRS_CTL1(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CN10KB) && (a==0))
        return 0x824000000808ll + 0x1000000ll * ((a) & 0x0);
    __cavm_csr_fatal("EMMCX_SRS_CTL1", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_EMMCX_SRS_CTL1(a) cavm_emmcx_srs_ctl1_t
#define bustype_CAVM_EMMCX_SRS_CTL1(a) CSR_TYPE_NCB
#define basename_CAVM_EMMCX_SRS_CTL1(a) "EMMCX_SRS_CTL1"
#define device_bar_CAVM_EMMCX_SRS_CTL1(a) 0x0 /* PF_BAR0 */
#define busnum_CAVM_EMMCX_SRS_CTL1(a) (a)
#define arguments_CAVM_EMMCX_SRS_CTL1(a) (a),-1,-1,-1

/**
 * Register (NCB) emmc#_srs_ctl2
 *
 * EMMC SRS Control Register2
 */
union cavm_emmcx_srs_ctl2
{
    uint64_t u;
    struct cavm_emmcx_srs_ctl2_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t srs24                 : 32; /**< [ 63: 32](R/W) This register controls value of EMMC_HOST_SRS_SRS24. */
        uint64_t srs25                 : 32; /**< [ 31:  0](R/W) This register controls value of EMMC_HOST_SRS_SRS25. */
#else /* Word 0 - Little Endian */
        uint64_t srs25                 : 32; /**< [ 31:  0](R/W) This register controls value of EMMC_HOST_SRS_SRS25. */
        uint64_t srs24                 : 32; /**< [ 63: 32](R/W) This register controls value of EMMC_HOST_SRS_SRS24. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_emmcx_srs_ctl2_s cn; */
};
typedef union cavm_emmcx_srs_ctl2 cavm_emmcx_srs_ctl2_t;

static inline uint64_t CAVM_EMMCX_SRS_CTL2(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_EMMCX_SRS_CTL2(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CN10KB) && (a==0))
        return 0x824000000810ll + 0x1000000ll * ((a) & 0x0);
    __cavm_csr_fatal("EMMCX_SRS_CTL2", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_EMMCX_SRS_CTL2(a) cavm_emmcx_srs_ctl2_t
#define bustype_CAVM_EMMCX_SRS_CTL2(a) CSR_TYPE_NCB
#define basename_CAVM_EMMCX_SRS_CTL2(a) "EMMCX_SRS_CTL2"
#define device_bar_CAVM_EMMCX_SRS_CTL2(a) 0x0 /* PF_BAR0 */
#define busnum_CAVM_EMMCX_SRS_CTL2(a) (a)
#define arguments_CAVM_EMMCX_SRS_CTL2(a) (a),-1,-1,-1

/**
 * Register (NCB) emmc#_srs_ctl3
 *
 * EMMC SRS Control Register3
 */
union cavm_emmcx_srs_ctl3
{
    uint64_t u;
    struct cavm_emmcx_srs_ctl3_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t srs26                 : 32; /**< [ 63: 32](R/W) This register controls value of EMMC_HOST_SRS_SRS26. */
        uint64_t srs27                 : 32; /**< [ 31:  0](R/W) This register controls value of EMMC_HOST_SRS_SRS27. */
#else /* Word 0 - Little Endian */
        uint64_t srs27                 : 32; /**< [ 31:  0](R/W) This register controls value of EMMC_HOST_SRS_SRS27. */
        uint64_t srs26                 : 32; /**< [ 63: 32](R/W) This register controls value of EMMC_HOST_SRS_SRS26. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_emmcx_srs_ctl3_s cn; */
};
typedef union cavm_emmcx_srs_ctl3 cavm_emmcx_srs_ctl3_t;

static inline uint64_t CAVM_EMMCX_SRS_CTL3(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_EMMCX_SRS_CTL3(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CN10KB) && (a==0))
        return 0x824000000818ll + 0x1000000ll * ((a) & 0x0);
    __cavm_csr_fatal("EMMCX_SRS_CTL3", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_EMMCX_SRS_CTL3(a) cavm_emmcx_srs_ctl3_t
#define bustype_CAVM_EMMCX_SRS_CTL3(a) CSR_TYPE_NCB
#define basename_CAVM_EMMCX_SRS_CTL3(a) "EMMCX_SRS_CTL3"
#define device_bar_CAVM_EMMCX_SRS_CTL3(a) 0x0 /* PF_BAR0 */
#define busnum_CAVM_EMMCX_SRS_CTL3(a) (a)
#define arguments_CAVM_EMMCX_SRS_CTL3(a) (a),-1,-1,-1

#endif /* __CAVM_CSRS_EMMC_H__ */
