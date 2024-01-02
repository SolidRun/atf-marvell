#ifndef __CAVM_CSRS_XCP_H__
#define __CAVM_CSRS_XCP_H__
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
 * XCP.
 *
 * This file is auto generated. Do not edit.
 *
 */

/**
 * Enumeration xcp_addr_prt_e
 *
 * XCP Address Partition Enumeration
 * Enumerates the partitions in CM7 address space, as recorded in XCP()_PRECISE_BUS_ERR_STATUS[PART].
 */
#define CAVM_XCP_ADDR_PRT_E_CSR_CPC (3)
#define CAVM_XCP_ADDR_PRT_E_CSR_PSBM (4)
#define CAVM_XCP_ADDR_PRT_E_CSR_XCP (2)
#define CAVM_XCP_ADDR_PRT_E_MEM (1)
#define CAVM_XCP_ADDR_PRT_E_NCB (5)
#define CAVM_XCP_ADDR_PRT_E_NONE (0)
#define CAVM_XCP_ADDR_PRT_E_RML (6)

/**
 * Enumeration xcp_bar_e
 *
 * XCP Base Address Register Enumeration
 * Enumerates the base address registers.
 */
#define CAVM_XCP_BAR_E_XCPX_PF_BAR0(a) (0x820000000000ll + 0x1000000000ll * (a))
#define CAVM_XCP_BAR_E_XCPX_PF_BAR0_SIZE 0x100000ull
#define CAVM_XCP_BAR_E_XCPX_PF_BAR4(a) (0x820000100000ll + 0x1000000000ll * (a))
#define CAVM_XCP_BAR_E_XCPX_PF_BAR4_SIZE 0x100000ull

/**
 * Enumeration xcp_cm7_vec_int_e
 *
 * XCP CM7 Vectored Interrupt Enumeration
 * Enumerates the vectored interrupt inputs to the CM7 core.
 */
#define CAVM_XCP_CM7_VEC_INT_E_BUS_ERR (0)
#define CAVM_XCP_CM7_VEC_INT_E_CTIIRQ0 (6)
#define CAVM_XCP_CM7_VEC_INT_E_CTIIRQ1 (7)
#define CAVM_XCP_CM7_VEC_INT_E_EXT_INTX(a) (0x40 + (a))
#define CAVM_XCP_CM7_VEC_INT_E_GIB0 (2)
#define CAVM_XCP_CM7_VEC_INT_E_GIB1 (3)
#define CAVM_XCP_CM7_VEC_INT_E_GIB2 (4)
#define CAVM_XCP_CM7_VEC_INT_E_MBOX (5)
#define CAVM_XCP_CM7_VEC_INT_E_RESERVEDX(a) (8 + (a))
#define CAVM_XCP_CM7_VEC_INT_E_WDOG (1)

/**
 * Enumeration xcp_dintf_err_type_e
 *
 * XCP Data Interface Precise Error Enumeration
 * Enumerates the precise error types, as recorded in XCP()_PRECISE_BUS_ERR_STATUS[ERR_TYPE].
 */
#define CAVM_XCP_DINTF_ERR_TYPE_E_ACCESS_ERR (3)
#define CAVM_XCP_DINTF_ERR_TYPE_E_FETCH_ERR_NCB_FETCH_DIS (4)
#define CAVM_XCP_DINTF_ERR_TYPE_E_INV_ADDR (2)
#define CAVM_XCP_DINTF_ERR_TYPE_E_NO_ERR (0)
#define CAVM_XCP_DINTF_ERR_TYPE_E_RD_ERR_NCB (6)
#define CAVM_XCP_DINTF_ERR_TYPE_E_UMPD_ADDR (1)
#define CAVM_XCP_DINTF_ERR_TYPE_E_WR_ERR_NCB (7)

/**
 * Enumeration xcp_int_vec_e
 *
 * XCP MSI-X Vector Enumeration
 * Enumerates the MSI-X interrupt vectors.
 */
#define CAVM_XCP_INT_VEC_E_XCP_DEV_MBOXX(a) (0 + (a))

/**
 * Enumeration xcp_mbox_dev_e
 *
 * XCP Mailbox Device ID Enumeration
 * Enumerates the device ID for MBOX registers.
 */
#define CAVM_XCP_MBOX_DEV_E_AP_NONSECURE0 (0x20)
#define CAVM_XCP_MBOX_DEV_E_AP_NONSECURE1 (0x21)
#define CAVM_XCP_MBOX_DEV_E_AP_NONSECURE10 (0x2a)
#define CAVM_XCP_MBOX_DEV_E_AP_NONSECURE11 (0x2b)
#define CAVM_XCP_MBOX_DEV_E_AP_NONSECURE12 (0x2c)
#define CAVM_XCP_MBOX_DEV_E_AP_NONSECURE13 (0x2d)
#define CAVM_XCP_MBOX_DEV_E_AP_NONSECURE14 (0x2e)
#define CAVM_XCP_MBOX_DEV_E_AP_NONSECURE15 (0x2f)
#define CAVM_XCP_MBOX_DEV_E_AP_NONSECURE16 (0x30)
#define CAVM_XCP_MBOX_DEV_E_AP_NONSECURE17 (0x31)
#define CAVM_XCP_MBOX_DEV_E_AP_NONSECURE18 (0x32)
#define CAVM_XCP_MBOX_DEV_E_AP_NONSECURE19 (0x33)
#define CAVM_XCP_MBOX_DEV_E_AP_NONSECURE2 (0x22)
#define CAVM_XCP_MBOX_DEV_E_AP_NONSECURE20 (0x34)
#define CAVM_XCP_MBOX_DEV_E_AP_NONSECURE21 (0x35)
#define CAVM_XCP_MBOX_DEV_E_AP_NONSECURE22 (0x36)
#define CAVM_XCP_MBOX_DEV_E_AP_NONSECURE23 (0x37)
#define CAVM_XCP_MBOX_DEV_E_AP_NONSECURE3 (0x23)
#define CAVM_XCP_MBOX_DEV_E_AP_NONSECURE4 (0x24)
#define CAVM_XCP_MBOX_DEV_E_AP_NONSECURE5 (0x25)
#define CAVM_XCP_MBOX_DEV_E_AP_NONSECURE6 (0x26)
#define CAVM_XCP_MBOX_DEV_E_AP_NONSECURE7 (0x27)
#define CAVM_XCP_MBOX_DEV_E_AP_NONSECURE8 (0x28)
#define CAVM_XCP_MBOX_DEV_E_AP_NONSECURE9 (0x29)
#define CAVM_XCP_MBOX_DEV_E_AP_SECURE0 (0)
#define CAVM_XCP_MBOX_DEV_E_AP_SECURE1 (1)
#define CAVM_XCP_MBOX_DEV_E_AP_SECURE10 (0xa)
#define CAVM_XCP_MBOX_DEV_E_AP_SECURE11 (0xb)
#define CAVM_XCP_MBOX_DEV_E_AP_SECURE12 (0xc)
#define CAVM_XCP_MBOX_DEV_E_AP_SECURE13 (0xd)
#define CAVM_XCP_MBOX_DEV_E_AP_SECURE14 (0xe)
#define CAVM_XCP_MBOX_DEV_E_AP_SECURE15 (0xf)
#define CAVM_XCP_MBOX_DEV_E_AP_SECURE16 (0x10)
#define CAVM_XCP_MBOX_DEV_E_AP_SECURE17 (0x11)
#define CAVM_XCP_MBOX_DEV_E_AP_SECURE18 (0x12)
#define CAVM_XCP_MBOX_DEV_E_AP_SECURE19 (0x13)
#define CAVM_XCP_MBOX_DEV_E_AP_SECURE2 (2)
#define CAVM_XCP_MBOX_DEV_E_AP_SECURE20 (0x14)
#define CAVM_XCP_MBOX_DEV_E_AP_SECURE21 (0x15)
#define CAVM_XCP_MBOX_DEV_E_AP_SECURE22 (0x16)
#define CAVM_XCP_MBOX_DEV_E_AP_SECURE23 (0x17)
#define CAVM_XCP_MBOX_DEV_E_AP_SECURE24 (0x18)
#define CAVM_XCP_MBOX_DEV_E_AP_SECURE25 (0x19)
#define CAVM_XCP_MBOX_DEV_E_AP_SECURE26 (0x1a)
#define CAVM_XCP_MBOX_DEV_E_AP_SECURE27 (0x1b)
#define CAVM_XCP_MBOX_DEV_E_AP_SECURE28 (0x1c)
#define CAVM_XCP_MBOX_DEV_E_AP_SECURE29 (0x1d)
#define CAVM_XCP_MBOX_DEV_E_AP_SECURE3 (3)
#define CAVM_XCP_MBOX_DEV_E_AP_SECURE30 (0x1e)
#define CAVM_XCP_MBOX_DEV_E_AP_SECURE31 (0x1f)
#define CAVM_XCP_MBOX_DEV_E_AP_SECURE4 (4)
#define CAVM_XCP_MBOX_DEV_E_AP_SECURE5 (5)
#define CAVM_XCP_MBOX_DEV_E_AP_SECURE6 (6)
#define CAVM_XCP_MBOX_DEV_E_AP_SECURE7 (7)
#define CAVM_XCP_MBOX_DEV_E_AP_SECURE8 (8)
#define CAVM_XCP_MBOX_DEV_E_AP_SECURE9 (9)
#define CAVM_XCP_MBOX_DEV_E_CCP_LOCAL (0x3a)
#define CAVM_XCP_MBOX_DEV_E_CCP_REMOTE (0x3e)
#define CAVM_XCP_MBOX_DEV_E_MCP_LOCAL (0x39)
#define CAVM_XCP_MBOX_DEV_E_MCP_REMOTE (0x3d)
#define CAVM_XCP_MBOX_DEV_E_PCP_LOCAL (0x3b)
#define CAVM_XCP_MBOX_DEV_E_PCP_REMOTE (0x3f)
#define CAVM_XCP_MBOX_DEV_E_SCP_LOCAL (0x38)
#define CAVM_XCP_MBOX_DEV_E_SCP_REMOTE (0x3c)

/**
 * Register (NCB32b) xcp#_boot_jump
 *
 * XCP Boot Jump Register
 * This register is only accessible to the requestor(s) permitted with CPC_XCP()_PERMIT.
 *
 * This register is reset on chip reset.
 */
union cavm_xcpx_boot_jump
{
    uint32_t u;
    struct cavm_xcpx_boot_jump_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t addr                  : 32; /**< [ 31:  0](R/W) The XCP ROM firmware reads this register immediately after reset and jumps to
                                                                 this address if nonzero. */
#else /* Word 0 - Little Endian */
        uint32_t addr                  : 32; /**< [ 31:  0](R/W) The XCP ROM firmware reads this register immediately after reset and jumps to
                                                                 this address if nonzero. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_xcpx_boot_jump_s cn; */
};
typedef union cavm_xcpx_boot_jump cavm_xcpx_boot_jump_t;

static inline uint64_t CAVM_XCPX_BOOT_JUMP(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_XCPX_BOOT_JUMP(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CN20KA) && (a<=3))
        return 0x820000000130ll + 0x1000000000ll * ((a) & 0x3);
    __cavm_csr_fatal("XCPX_BOOT_JUMP", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_XCPX_BOOT_JUMP(a) cavm_xcpx_boot_jump_t
#define bustype_CAVM_XCPX_BOOT_JUMP(a) CSR_TYPE_NCB32b
#define basename_CAVM_XCPX_BOOT_JUMP(a) "XCPX_BOOT_JUMP"
#define device_bar_CAVM_XCPX_BOOT_JUMP(a) 0x0 /* PF_BAR0 */
#define busnum_CAVM_XCPX_BOOT_JUMP(a) (a)
#define arguments_CAVM_XCPX_BOOT_JUMP(a) (a),-1,-1,-1

/**
 * Register (NCB32b) xcp#_bus_err_lint
 *
 * XCP Bus error Interrupt Register
 * This register assert error interrupt for XCP.
 *
 * This register is only accessible to the requestor(s) permitted with CPC_XCP()_PERMIT.
 *
 * This register is reset on XCP domain reset.
 */
union cavm_xcpx_bus_err_lint
{
    uint32_t u;
    struct cavm_xcpx_bus_err_lint_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t reserved_1_31         : 31;
        uint32_t sw_bus_err            : 1;  /**< [  0:  0](R/W1C/H) SW can indicate bus error for XCP. */
#else /* Word 0 - Little Endian */
        uint32_t sw_bus_err            : 1;  /**< [  0:  0](R/W1C/H) SW can indicate bus error for XCP. */
        uint32_t reserved_1_31         : 31;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_xcpx_bus_err_lint_s cn; */
};
typedef union cavm_xcpx_bus_err_lint cavm_xcpx_bus_err_lint_t;

static inline uint64_t CAVM_XCPX_BUS_ERR_LINT(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_XCPX_BUS_ERR_LINT(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CN20KA) && (a<=3))
        return 0x820000001c00ll + 0x1000000000ll * ((a) & 0x3);
    __cavm_csr_fatal("XCPX_BUS_ERR_LINT", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_XCPX_BUS_ERR_LINT(a) cavm_xcpx_bus_err_lint_t
#define bustype_CAVM_XCPX_BUS_ERR_LINT(a) CSR_TYPE_NCB32b
#define basename_CAVM_XCPX_BUS_ERR_LINT(a) "XCPX_BUS_ERR_LINT"
#define device_bar_CAVM_XCPX_BUS_ERR_LINT(a) 0x0 /* PF_BAR0 */
#define busnum_CAVM_XCPX_BUS_ERR_LINT(a) (a)
#define arguments_CAVM_XCPX_BUS_ERR_LINT(a) (a),-1,-1,-1

/**
 * Register (NCB32b) xcp#_bus_err_lint_ena_w1c
 *
 * XCP NCB bus error Interrupt Enable Clear Register
 * This register clears interrupt enable bits.
 */
union cavm_xcpx_bus_err_lint_ena_w1c
{
    uint32_t u;
    struct cavm_xcpx_bus_err_lint_ena_w1c_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t reserved_1_31         : 31;
        uint32_t sw_bus_err            : 1;  /**< [  0:  0](R/W1C/H) Reads or clears enable for XCP(0..3)_BUS_ERR_LINT[SW_BUS_ERR]. */
#else /* Word 0 - Little Endian */
        uint32_t sw_bus_err            : 1;  /**< [  0:  0](R/W1C/H) Reads or clears enable for XCP(0..3)_BUS_ERR_LINT[SW_BUS_ERR]. */
        uint32_t reserved_1_31         : 31;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_xcpx_bus_err_lint_ena_w1c_s cn; */
};
typedef union cavm_xcpx_bus_err_lint_ena_w1c cavm_xcpx_bus_err_lint_ena_w1c_t;

static inline uint64_t CAVM_XCPX_BUS_ERR_LINT_ENA_W1C(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_XCPX_BUS_ERR_LINT_ENA_W1C(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CN20KA) && (a<=3))
        return 0x820000001cc0ll + 0x1000000000ll * ((a) & 0x3);
    __cavm_csr_fatal("XCPX_BUS_ERR_LINT_ENA_W1C", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_XCPX_BUS_ERR_LINT_ENA_W1C(a) cavm_xcpx_bus_err_lint_ena_w1c_t
#define bustype_CAVM_XCPX_BUS_ERR_LINT_ENA_W1C(a) CSR_TYPE_NCB32b
#define basename_CAVM_XCPX_BUS_ERR_LINT_ENA_W1C(a) "XCPX_BUS_ERR_LINT_ENA_W1C"
#define device_bar_CAVM_XCPX_BUS_ERR_LINT_ENA_W1C(a) 0x0 /* PF_BAR0 */
#define busnum_CAVM_XCPX_BUS_ERR_LINT_ENA_W1C(a) (a)
#define arguments_CAVM_XCPX_BUS_ERR_LINT_ENA_W1C(a) (a),-1,-1,-1

/**
 * Register (NCB32b) xcp#_bus_err_lint_ena_w1s
 *
 * XCP NCB bus error Interrupt Enable Set Register
 * This register sets interrupt enable bits.
 */
union cavm_xcpx_bus_err_lint_ena_w1s
{
    uint32_t u;
    struct cavm_xcpx_bus_err_lint_ena_w1s_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t reserved_1_31         : 31;
        uint32_t sw_bus_err            : 1;  /**< [  0:  0](R/W1S/H) Reads or sets enable for XCP(0..3)_BUS_ERR_LINT[SW_BUS_ERR]. */
#else /* Word 0 - Little Endian */
        uint32_t sw_bus_err            : 1;  /**< [  0:  0](R/W1S/H) Reads or sets enable for XCP(0..3)_BUS_ERR_LINT[SW_BUS_ERR]. */
        uint32_t reserved_1_31         : 31;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_xcpx_bus_err_lint_ena_w1s_s cn; */
};
typedef union cavm_xcpx_bus_err_lint_ena_w1s cavm_xcpx_bus_err_lint_ena_w1s_t;

static inline uint64_t CAVM_XCPX_BUS_ERR_LINT_ENA_W1S(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_XCPX_BUS_ERR_LINT_ENA_W1S(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CN20KA) && (a<=3))
        return 0x820000001ce0ll + 0x1000000000ll * ((a) & 0x3);
    __cavm_csr_fatal("XCPX_BUS_ERR_LINT_ENA_W1S", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_XCPX_BUS_ERR_LINT_ENA_W1S(a) cavm_xcpx_bus_err_lint_ena_w1s_t
#define bustype_CAVM_XCPX_BUS_ERR_LINT_ENA_W1S(a) CSR_TYPE_NCB32b
#define basename_CAVM_XCPX_BUS_ERR_LINT_ENA_W1S(a) "XCPX_BUS_ERR_LINT_ENA_W1S"
#define device_bar_CAVM_XCPX_BUS_ERR_LINT_ENA_W1S(a) 0x0 /* PF_BAR0 */
#define busnum_CAVM_XCPX_BUS_ERR_LINT_ENA_W1S(a) (a)
#define arguments_CAVM_XCPX_BUS_ERR_LINT_ENA_W1S(a) (a),-1,-1,-1

/**
 * Register (NCB32b) xcp#_bus_err_lint_w1s
 *
 * XCP NCB bus error Interrupt Set Register
 * This register sets interrupt bits.
 */
union cavm_xcpx_bus_err_lint_w1s
{
    uint32_t u;
    struct cavm_xcpx_bus_err_lint_w1s_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t reserved_1_31         : 31;
        uint32_t sw_bus_err            : 1;  /**< [  0:  0](R/W1S/H) Reads or sets XCP(0..3)_BUS_ERR_LINT[SW_BUS_ERR]. */
#else /* Word 0 - Little Endian */
        uint32_t sw_bus_err            : 1;  /**< [  0:  0](R/W1S/H) Reads or sets XCP(0..3)_BUS_ERR_LINT[SW_BUS_ERR]. */
        uint32_t reserved_1_31         : 31;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_xcpx_bus_err_lint_w1s_s cn; */
};
typedef union cavm_xcpx_bus_err_lint_w1s cavm_xcpx_bus_err_lint_w1s_t;

static inline uint64_t CAVM_XCPX_BUS_ERR_LINT_W1S(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_XCPX_BUS_ERR_LINT_W1S(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CN20KA) && (a<=3))
        return 0x820000001c80ll + 0x1000000000ll * ((a) & 0x3);
    __cavm_csr_fatal("XCPX_BUS_ERR_LINT_W1S", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_XCPX_BUS_ERR_LINT_W1S(a) cavm_xcpx_bus_err_lint_w1s_t
#define bustype_CAVM_XCPX_BUS_ERR_LINT_W1S(a) CSR_TYPE_NCB32b
#define basename_CAVM_XCPX_BUS_ERR_LINT_W1S(a) "XCPX_BUS_ERR_LINT_W1S"
#define device_bar_CAVM_XCPX_BUS_ERR_LINT_W1S(a) 0x0 /* PF_BAR0 */
#define busnum_CAVM_XCPX_BUS_ERR_LINT_W1S(a) (a)
#define arguments_CAVM_XCPX_BUS_ERR_LINT_W1S(a) (a),-1,-1,-1

/**
 * Register (NCB32b) xcp#_cfg
 *
 * XCP Configuration Register
 * This register contains the configuration bits for XCP.
 *
 * This register is only accessible to the requestor(s) permitted with CPC_XCP()_PERMIT.
 *
 * This register is reset on XCP domain reset.
 */
union cavm_xcpx_cfg
{
    uint32_t u;
    struct cavm_xcpx_cfg_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t reserved_13_31        : 19;
        uint32_t chicken_ncb_b64       : 1;  /**< [ 12: 12](R/W) When XCP_NCB_WIN()_CFG.B64 is set, load to lower bits will cause de-asserting of
                                                                 ARREADY, to hold additional transaction till loaddata return.
                                                                 This bit will prevent ARREADY de-assertion. */
        uint32_t ctlppblock            : 4;  /**< [ 11:  8](R/W) CM7 CTLPPBLOCK[3:0] input configuration. */
        uint32_t reserved_2_7          : 6;
        uint32_t ext_fetch_dis         : 1;  /**< [  1:  1](R/W) Disable the option to fetch instructions from external memory (DDR). */
        uint32_t cfgbigend             : 1;  /**< [  0:  0](R/W) Static endianess settings. For diagnostic use only. */
#else /* Word 0 - Little Endian */
        uint32_t cfgbigend             : 1;  /**< [  0:  0](R/W) Static endianess settings. For diagnostic use only. */
        uint32_t ext_fetch_dis         : 1;  /**< [  1:  1](R/W) Disable the option to fetch instructions from external memory (DDR). */
        uint32_t reserved_2_7          : 6;
        uint32_t ctlppblock            : 4;  /**< [ 11:  8](R/W) CM7 CTLPPBLOCK[3:0] input configuration. */
        uint32_t chicken_ncb_b64       : 1;  /**< [ 12: 12](R/W) When XCP_NCB_WIN()_CFG.B64 is set, load to lower bits will cause de-asserting of
                                                                 ARREADY, to hold additional transaction till loaddata return.
                                                                 This bit will prevent ARREADY de-assertion. */
        uint32_t reserved_13_31        : 19;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_xcpx_cfg_s cn; */
};
typedef union cavm_xcpx_cfg cavm_xcpx_cfg_t;

static inline uint64_t CAVM_XCPX_CFG(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_XCPX_CFG(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CN20KA) && (a<=3))
        return 0x820000000200ll + 0x1000000000ll * ((a) & 0x3);
    __cavm_csr_fatal("XCPX_CFG", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_XCPX_CFG(a) cavm_xcpx_cfg_t
#define bustype_CAVM_XCPX_CFG(a) CSR_TYPE_NCB32b
#define basename_CAVM_XCPX_CFG(a) "XCPX_CFG"
#define device_bar_CAVM_XCPX_CFG(a) 0x0 /* PF_BAR0 */
#define busnum_CAVM_XCPX_CFG(a) (a)
#define arguments_CAVM_XCPX_CFG(a) (a),-1,-1,-1

/**
 * Register (NCB32b) xcp#_clken
 *
 * XCP Clock Enable Register
 * This register is only accessible to the requestor(s) permitted with CPC_XCP()_PERMIT.
 *
 * This register is reset on XCP domain reset.
 */
union cavm_xcpx_clken
{
    uint32_t u;
    struct cavm_xcpx_clken_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t reserved_1_31         : 31;
        uint32_t clken                 : 1;  /**< [  0:  0](R/W) Force the conditional clocking within XCP to be always on. For diagnostic use only. */
#else /* Word 0 - Little Endian */
        uint32_t clken                 : 1;  /**< [  0:  0](R/W) Force the conditional clocking within XCP to be always on. For diagnostic use only. */
        uint32_t reserved_1_31         : 31;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_xcpx_clken_s cn; */
};
typedef union cavm_xcpx_clken cavm_xcpx_clken_t;

static inline uint64_t CAVM_XCPX_CLKEN(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_XCPX_CLKEN(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CN20KA) && (a<=3))
        return 0x820000000010ll + 0x1000000000ll * ((a) & 0x3);
    __cavm_csr_fatal("XCPX_CLKEN", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_XCPX_CLKEN(a) cavm_xcpx_clken_t
#define bustype_CAVM_XCPX_CLKEN(a) CSR_TYPE_NCB32b
#define basename_CAVM_XCPX_CLKEN(a) "XCPX_CLKEN"
#define device_bar_CAVM_XCPX_CLKEN(a) 0x0 /* PF_BAR0 */
#define busnum_CAVM_XCPX_CLKEN(a) (a)
#define arguments_CAVM_XCPX_CLKEN(a) (a),-1,-1,-1

/**
 * Register (NCB32b) xcp#_cold_data
 *
 * XCP Cold Reset Data Register
 * Opaque data preserved through XCP and warm resets. Reset on cold reset.  This register is not
 * reset on trusted-mode changes, so must not contain keys/secrets.
 *
 * This register is only accessible to the requestor(s) permitted with CPC_XCP()_PERMIT.
 *
 * This register is reset on cold reset.
 */
union cavm_xcpx_cold_data
{
    uint32_t u;
    struct cavm_xcpx_cold_data_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t force_secondary       : 1;  /**< [ 31: 31](R/W) Force CCP_BL0 code to only attempt boots from the secondary boot device. CCP_BL1
                                                                 code may set this if an SCP, MCP, PCP or AP cannot be loaded from the primary, so that a
                                                                 reboot will load all of CCP_BL1, SCP_BL1, MCP_BL1, PCP_BL1 and AP_BL1 from the secondary devices
                                                                 so all the images match. */
        uint32_t data                  : 31; /**< [ 30:  0](R/W) Opaque data preserved through XCP and warm resets.   This register is not reset on trusted-mode
                                                                 changes, so must not contain keys/secrets. */
#else /* Word 0 - Little Endian */
        uint32_t data                  : 31; /**< [ 30:  0](R/W) Opaque data preserved through XCP and warm resets.   This register is not reset on trusted-mode
                                                                 changes, so must not contain keys/secrets. */
        uint32_t force_secondary       : 1;  /**< [ 31: 31](R/W) Force CCP_BL0 code to only attempt boots from the secondary boot device. CCP_BL1
                                                                 code may set this if an SCP, MCP, PCP or AP cannot be loaded from the primary, so that a
                                                                 reboot will load all of CCP_BL1, SCP_BL1, MCP_BL1, PCP_BL1 and AP_BL1 from the secondary devices
                                                                 so all the images match. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_xcpx_cold_data_s cn; */
};
typedef union cavm_xcpx_cold_data cavm_xcpx_cold_data_t;

static inline uint64_t CAVM_XCPX_COLD_DATA(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_XCPX_COLD_DATA(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CN20KA) && (a<=3))
        return 0x8200000da000ll + 0x1000000000ll * ((a) & 0x3);
    __cavm_csr_fatal("XCPX_COLD_DATA", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_XCPX_COLD_DATA(a) cavm_xcpx_cold_data_t
#define bustype_CAVM_XCPX_COLD_DATA(a) CSR_TYPE_NCB32b
#define basename_CAVM_XCPX_COLD_DATA(a) "XCPX_COLD_DATA"
#define device_bar_CAVM_XCPX_COLD_DATA(a) 0x0 /* PF_BAR0 */
#define busnum_CAVM_XCPX_COLD_DATA(a) (a)
#define arguments_CAVM_XCPX_COLD_DATA(a) (a),-1,-1,-1

/**
 * Register (NCB32b) xcp#_cold_sticky_w1s
 *
 * XCP Cold Reset sticky W1S Register
 * Opaque data preserved through XCP and warm resets. Writes of one stay as one until next cold
 * reset; cannot write zeros.  This register is not reset on trusted-mode changes, so must not
 * contain keys/secrets.
 *
 * This register is only accessible to the requestor(s) permitted with CPC_XCP()_PERMIT.
 *
 * This register is reset on cold reset.
 */
union cavm_xcpx_cold_sticky_w1s
{
    uint32_t u;
    struct cavm_xcpx_cold_sticky_w1s_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t boot_sec              : 1;  /**< [ 31: 31](R/W1S/H) BL1 has booted in secure mode since last cold reset.  If both [BOOT_SEC] and [BOOT_NSEC]
                                                                 are set, then these bits are not trustworthy. */
        uint32_t boot_nsec             : 1;  /**< [ 30: 30](R/W1S/H) BL1 has booted in nonsecure mode since last cold reset.  If both [BOOT_SEC] and
                                                                 [BOOT_NSEC] are set, then these bits are not trustworthy. */
        uint32_t boot_rsvd             : 2;  /**< [ 29: 28](R/W1S/H) Reserved. */
        uint32_t data                  : 22; /**< [ 27:  6](R/W1S/H) Data. Opaque data preserved through XCP and warm resets. Writes of one stay as one until
                                                                 next cold reset; cannot write zeros.  This register is not reset on trusted-mode
                                                                 changes, so must not contain keys/secrets. */
        uint32_t bl1_sz_inv            : 6;  /**< [  5:  0](R/W1S/H) BL1 size (inverted). Indicates the number of regions used by MCP code.
                                                                 0x00 = BL1 can be as big as 63 regions (63 * 64KB). (First boot.)
                                                                 0x01 = BL1 can be as big as 62 regions (62 * 64KB).
                                                                 0x3E = BL1 can be as big as 1 region (1 * 64KB).
                                                                 0x3F = BL1 can be as big as 0 region (0 * 64KB). */
#else /* Word 0 - Little Endian */
        uint32_t bl1_sz_inv            : 6;  /**< [  5:  0](R/W1S/H) BL1 size (inverted). Indicates the number of regions used by MCP code.
                                                                 0x00 = BL1 can be as big as 63 regions (63 * 64KB). (First boot.)
                                                                 0x01 = BL1 can be as big as 62 regions (62 * 64KB).
                                                                 0x3E = BL1 can be as big as 1 region (1 * 64KB).
                                                                 0x3F = BL1 can be as big as 0 region (0 * 64KB). */
        uint32_t data                  : 22; /**< [ 27:  6](R/W1S/H) Data. Opaque data preserved through XCP and warm resets. Writes of one stay as one until
                                                                 next cold reset; cannot write zeros.  This register is not reset on trusted-mode
                                                                 changes, so must not contain keys/secrets. */
        uint32_t boot_rsvd             : 2;  /**< [ 29: 28](R/W1S/H) Reserved. */
        uint32_t boot_nsec             : 1;  /**< [ 30: 30](R/W1S/H) BL1 has booted in nonsecure mode since last cold reset.  If both [BOOT_SEC] and
                                                                 [BOOT_NSEC] are set, then these bits are not trustworthy. */
        uint32_t boot_sec              : 1;  /**< [ 31: 31](R/W1S/H) BL1 has booted in secure mode since last cold reset.  If both [BOOT_SEC] and [BOOT_NSEC]
                                                                 are set, then these bits are not trustworthy. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_xcpx_cold_sticky_w1s_s cn; */
};
typedef union cavm_xcpx_cold_sticky_w1s cavm_xcpx_cold_sticky_w1s_t;

static inline uint64_t CAVM_XCPX_COLD_STICKY_W1S(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_XCPX_COLD_STICKY_W1S(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CN20KA) && (a<=3))
        return 0x8200000da040ll + 0x1000000000ll * ((a) & 0x3);
    __cavm_csr_fatal("XCPX_COLD_STICKY_W1S", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_XCPX_COLD_STICKY_W1S(a) cavm_xcpx_cold_sticky_w1s_t
#define bustype_CAVM_XCPX_COLD_STICKY_W1S(a) CSR_TYPE_NCB32b
#define basename_CAVM_XCPX_COLD_STICKY_W1S(a) "XCPX_COLD_STICKY_W1S"
#define device_bar_CAVM_XCPX_COLD_STICKY_W1S(a) 0x0 /* PF_BAR0 */
#define busnum_CAVM_XCPX_COLD_STICKY_W1S(a) (a)
#define arguments_CAVM_XCPX_COLD_STICKY_W1S(a) (a),-1,-1,-1

/**
 * Register (NCB32b) xcp#_const
 *
 * XCP Constants Register
 * This register is reset on XCP domain reset.
 */
union cavm_xcpx_const
{
    uint32_t u;
    struct cavm_xcpx_const_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t reserved_8_31         : 24;
        uint32_t mrml_wins             : 4;  /**< [  7:  4](RO) Number of MRML windows supported. */
        uint32_t ncb_wins              : 4;  /**< [  3:  0](RO) Number of NCB windows supported. */
#else /* Word 0 - Little Endian */
        uint32_t ncb_wins              : 4;  /**< [  3:  0](RO) Number of NCB windows supported. */
        uint32_t mrml_wins             : 4;  /**< [  7:  4](RO) Number of MRML windows supported. */
        uint32_t reserved_8_31         : 24;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_xcpx_const_s cn; */
};
typedef union cavm_xcpx_const cavm_xcpx_const_t;

static inline uint64_t CAVM_XCPX_CONST(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_XCPX_CONST(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CN20KA) && (a<=3))
        return 0x820000000000ll + 0x1000000000ll * ((a) & 0x3);
    __cavm_csr_fatal("XCPX_CONST", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_XCPX_CONST(a) cavm_xcpx_const_t
#define bustype_CAVM_XCPX_CONST(a) CSR_TYPE_NCB32b
#define basename_CAVM_XCPX_CONST(a) "XCPX_CONST"
#define device_bar_CAVM_XCPX_CONST(a) 0x0 /* PF_BAR0 */
#define busnum_CAVM_XCPX_CONST(a) (a)
#define arguments_CAVM_XCPX_CONST(a) (a),-1,-1,-1

/**
 * Register (NCB32b) xcp#_core_dcache_status
 *
 * XCP Core Data Cache Status Register
 * This register contains sticky bits of XCP data cache error signaling.
 *
 * This register is only accessible to the requestor(s) permitted with CPC_XCP()_PERMIT.
 *
 * This register is reset on XCP domain reset.
 */
union cavm_xcpx_core_dcache_status
{
    uint32_t u;
    struct cavm_xcpx_core_dcache_status_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t reserved_28_31        : 4;
        uint32_t dcdet                 : 4;  /**< [ 27: 24](R/W/H) CM7 Data cache error detection signaling. */
        uint32_t reserved_22_23        : 2;
        uint32_t dcerr                 : 22; /**< [ 21:  0](R/W/H) CM7 Data cache error bank signaling. */
#else /* Word 0 - Little Endian */
        uint32_t dcerr                 : 22; /**< [ 21:  0](R/W/H) CM7 Data cache error bank signaling. */
        uint32_t reserved_22_23        : 2;
        uint32_t dcdet                 : 4;  /**< [ 27: 24](R/W/H) CM7 Data cache error detection signaling. */
        uint32_t reserved_28_31        : 4;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_xcpx_core_dcache_status_s cn; */
};
typedef union cavm_xcpx_core_dcache_status cavm_xcpx_core_dcache_status_t;

static inline uint64_t CAVM_XCPX_CORE_DCACHE_STATUS(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_XCPX_CORE_DCACHE_STATUS(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CN20KA) && (a<=3))
        return 0x820000000180ll + 0x1000000000ll * ((a) & 0x3);
    __cavm_csr_fatal("XCPX_CORE_DCACHE_STATUS", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_XCPX_CORE_DCACHE_STATUS(a) cavm_xcpx_core_dcache_status_t
#define bustype_CAVM_XCPX_CORE_DCACHE_STATUS(a) CSR_TYPE_NCB32b
#define basename_CAVM_XCPX_CORE_DCACHE_STATUS(a) "XCPX_CORE_DCACHE_STATUS"
#define device_bar_CAVM_XCPX_CORE_DCACHE_STATUS(a) 0x0 /* PF_BAR0 */
#define busnum_CAVM_XCPX_CORE_DCACHE_STATUS(a) (a)
#define arguments_CAVM_XCPX_CORE_DCACHE_STATUS(a) (a),-1,-1,-1

/**
 * Register (NCB32b) xcp#_core_icache_status
 *
 * XCP Core Instruction Cache Status Register
 * This register contains sticky bits of XCP instruction cache error signaling.
 *
 * This register is only accessible to the requestor(s) permitted with CPC_XCP()_PERMIT.
 *
 * This register is reset on XCP domain reset.
 */
union cavm_xcpx_core_icache_status
{
    uint32_t u;
    struct cavm_xcpx_core_icache_status_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t reserved_28_31        : 4;
        uint32_t icdet                 : 4;  /**< [ 27: 24](R/W/H) CM7 Instuction cache error detection signaling. */
        uint32_t reserved_22_23        : 2;
        uint32_t icerr                 : 22; /**< [ 21:  0](R/W/H) CM7 Instruction cache error bank signaling. */
#else /* Word 0 - Little Endian */
        uint32_t icerr                 : 22; /**< [ 21:  0](R/W/H) CM7 Instruction cache error bank signaling. */
        uint32_t reserved_22_23        : 2;
        uint32_t icdet                 : 4;  /**< [ 27: 24](R/W/H) CM7 Instuction cache error detection signaling. */
        uint32_t reserved_28_31        : 4;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_xcpx_core_icache_status_s cn; */
};
typedef union cavm_xcpx_core_icache_status cavm_xcpx_core_icache_status_t;

static inline uint64_t CAVM_XCPX_CORE_ICACHE_STATUS(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_XCPX_CORE_ICACHE_STATUS(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CN20KA) && (a<=3))
        return 0x820000000190ll + 0x1000000000ll * ((a) & 0x3);
    __cavm_csr_fatal("XCPX_CORE_ICACHE_STATUS", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_XCPX_CORE_ICACHE_STATUS(a) cavm_xcpx_core_icache_status_t
#define bustype_CAVM_XCPX_CORE_ICACHE_STATUS(a) CSR_TYPE_NCB32b
#define basename_CAVM_XCPX_CORE_ICACHE_STATUS(a) "XCPX_CORE_ICACHE_STATUS"
#define device_bar_CAVM_XCPX_CORE_ICACHE_STATUS(a) 0x0 /* PF_BAR0 */
#define busnum_CAVM_XCPX_CORE_ICACHE_STATUS(a) (a)
#define arguments_CAVM_XCPX_CORE_ICACHE_STATUS(a) (a),-1,-1,-1

/**
 * Register (NCB32b) xcp#_cwd_lint
 *
 * XCP Per-core Watchdog Interrupt Register
 * Generic timer per XCP watchdog interrupts.
 *
 * This register is only accessible to the requestor(s) permitted with CPC_XCP()_PERMIT.
 *
 * This register is reset on XCP domain reset.
 */
union cavm_xcpx_cwd_lint
{
    uint32_t u;
    struct cavm_xcpx_cwd_lint_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t reserved_1_31         : 31;
        uint32_t wdog_int              : 1;  /**< [  0:  0](R/W1C/H) XCP watchdog interrupt. */
#else /* Word 0 - Little Endian */
        uint32_t wdog_int              : 1;  /**< [  0:  0](R/W1C/H) XCP watchdog interrupt. */
        uint32_t reserved_1_31         : 31;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_xcpx_cwd_lint_s cn; */
};
typedef union cavm_xcpx_cwd_lint cavm_xcpx_cwd_lint_t;

static inline uint64_t CAVM_XCPX_CWD_LINT(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_XCPX_CWD_LINT(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CN20KA) && (a<=3))
        return 0x820000040200ll + 0x1000000000ll * ((a) & 0x3);
    __cavm_csr_fatal("XCPX_CWD_LINT", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_XCPX_CWD_LINT(a) cavm_xcpx_cwd_lint_t
#define bustype_CAVM_XCPX_CWD_LINT(a) CSR_TYPE_NCB32b
#define basename_CAVM_XCPX_CWD_LINT(a) "XCPX_CWD_LINT"
#define device_bar_CAVM_XCPX_CWD_LINT(a) 0x0 /* PF_BAR0 */
#define busnum_CAVM_XCPX_CWD_LINT(a) (a)
#define arguments_CAVM_XCPX_CWD_LINT(a) (a),-1,-1,-1

/**
 * Register (NCB32b) xcp#_cwd_lint_ena_w1c
 *
 * XCP Per-core Watchdog Interrupt Enable Clear Register
 * This register clears interrupt enable bits.
 */
union cavm_xcpx_cwd_lint_ena_w1c
{
    uint32_t u;
    struct cavm_xcpx_cwd_lint_ena_w1c_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t reserved_1_31         : 31;
        uint32_t wdog_int              : 1;  /**< [  0:  0](R/W1C/H) Reads or clears enable for XCP(0..3)_CWD_LINT[WDOG_INT]. */
#else /* Word 0 - Little Endian */
        uint32_t wdog_int              : 1;  /**< [  0:  0](R/W1C/H) Reads or clears enable for XCP(0..3)_CWD_LINT[WDOG_INT]. */
        uint32_t reserved_1_31         : 31;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_xcpx_cwd_lint_ena_w1c_s cn; */
};
typedef union cavm_xcpx_cwd_lint_ena_w1c cavm_xcpx_cwd_lint_ena_w1c_t;

static inline uint64_t CAVM_XCPX_CWD_LINT_ENA_W1C(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_XCPX_CWD_LINT_ENA_W1C(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CN20KA) && (a<=3))
        return 0x820000040210ll + 0x1000000000ll * ((a) & 0x3);
    __cavm_csr_fatal("XCPX_CWD_LINT_ENA_W1C", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_XCPX_CWD_LINT_ENA_W1C(a) cavm_xcpx_cwd_lint_ena_w1c_t
#define bustype_CAVM_XCPX_CWD_LINT_ENA_W1C(a) CSR_TYPE_NCB32b
#define basename_CAVM_XCPX_CWD_LINT_ENA_W1C(a) "XCPX_CWD_LINT_ENA_W1C"
#define device_bar_CAVM_XCPX_CWD_LINT_ENA_W1C(a) 0x0 /* PF_BAR0 */
#define busnum_CAVM_XCPX_CWD_LINT_ENA_W1C(a) (a)
#define arguments_CAVM_XCPX_CWD_LINT_ENA_W1C(a) (a),-1,-1,-1

/**
 * Register (NCB32b) xcp#_cwd_lint_ena_w1s
 *
 * XCP Per-core Watchdog Interrupt Enable Set Register
 * This register sets interrupt enable bits.
 */
union cavm_xcpx_cwd_lint_ena_w1s
{
    uint32_t u;
    struct cavm_xcpx_cwd_lint_ena_w1s_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t reserved_1_31         : 31;
        uint32_t wdog_int              : 1;  /**< [  0:  0](R/W1S/H) Reads or sets enable for XCP(0..3)_CWD_LINT[WDOG_INT]. */
#else /* Word 0 - Little Endian */
        uint32_t wdog_int              : 1;  /**< [  0:  0](R/W1S/H) Reads or sets enable for XCP(0..3)_CWD_LINT[WDOG_INT]. */
        uint32_t reserved_1_31         : 31;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_xcpx_cwd_lint_ena_w1s_s cn; */
};
typedef union cavm_xcpx_cwd_lint_ena_w1s cavm_xcpx_cwd_lint_ena_w1s_t;

static inline uint64_t CAVM_XCPX_CWD_LINT_ENA_W1S(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_XCPX_CWD_LINT_ENA_W1S(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CN20KA) && (a<=3))
        return 0x820000040218ll + 0x1000000000ll * ((a) & 0x3);
    __cavm_csr_fatal("XCPX_CWD_LINT_ENA_W1S", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_XCPX_CWD_LINT_ENA_W1S(a) cavm_xcpx_cwd_lint_ena_w1s_t
#define bustype_CAVM_XCPX_CWD_LINT_ENA_W1S(a) CSR_TYPE_NCB32b
#define basename_CAVM_XCPX_CWD_LINT_ENA_W1S(a) "XCPX_CWD_LINT_ENA_W1S"
#define device_bar_CAVM_XCPX_CWD_LINT_ENA_W1S(a) 0x0 /* PF_BAR0 */
#define busnum_CAVM_XCPX_CWD_LINT_ENA_W1S(a) (a)
#define arguments_CAVM_XCPX_CWD_LINT_ENA_W1S(a) (a),-1,-1,-1

/**
 * Register (NCB32b) xcp#_cwd_lint_w1s
 *
 * XCP Per-core Watchdog Interrupt Set Register
 * This register sets interrupt bits.
 */
union cavm_xcpx_cwd_lint_w1s
{
    uint32_t u;
    struct cavm_xcpx_cwd_lint_w1s_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t reserved_1_31         : 31;
        uint32_t wdog_int              : 1;  /**< [  0:  0](R/W1S/H) Reads or sets XCP(0..3)_CWD_LINT[WDOG_INT]. */
#else /* Word 0 - Little Endian */
        uint32_t wdog_int              : 1;  /**< [  0:  0](R/W1S/H) Reads or sets XCP(0..3)_CWD_LINT[WDOG_INT]. */
        uint32_t reserved_1_31         : 31;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_xcpx_cwd_lint_w1s_s cn; */
};
typedef union cavm_xcpx_cwd_lint_w1s cavm_xcpx_cwd_lint_w1s_t;

static inline uint64_t CAVM_XCPX_CWD_LINT_W1S(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_XCPX_CWD_LINT_W1S(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CN20KA) && (a<=3))
        return 0x820000040208ll + 0x1000000000ll * ((a) & 0x3);
    __cavm_csr_fatal("XCPX_CWD_LINT_W1S", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_XCPX_CWD_LINT_W1S(a) cavm_xcpx_cwd_lint_w1s_t
#define bustype_CAVM_XCPX_CWD_LINT_W1S(a) CSR_TYPE_NCB32b
#define basename_CAVM_XCPX_CWD_LINT_W1S(a) "XCPX_CWD_LINT_W1S"
#define device_bar_CAVM_XCPX_CWD_LINT_W1S(a) 0x0 /* PF_BAR0 */
#define busnum_CAVM_XCPX_CWD_LINT_W1S(a) (a)
#define arguments_CAVM_XCPX_CWD_LINT_W1S(a) (a),-1,-1,-1

/**
 * Register (NCB32b) xcp#_cwd_nm_lint
 *
 * XCP Per-core Watchdog non-maskable Interrupt Register
 * Generic timer per XCP watchdog non-maskable interrupts.
 *
 * This register is only accessible to the requestor(s) permitted with CPC_XCP()_PERMIT.
 *
 * This register is reset on XCP domain reset.
 */
union cavm_xcpx_cwd_nm_lint
{
    uint32_t u;
    struct cavm_xcpx_cwd_nm_lint_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t reserved_1_31         : 31;
        uint32_t wdog_int              : 1;  /**< [  0:  0](R/W1C/H) XCP watchdog non-maskable interrupt. */
#else /* Word 0 - Little Endian */
        uint32_t wdog_int              : 1;  /**< [  0:  0](R/W1C/H) XCP watchdog non-maskable interrupt. */
        uint32_t reserved_1_31         : 31;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_xcpx_cwd_nm_lint_s cn; */
};
typedef union cavm_xcpx_cwd_nm_lint cavm_xcpx_cwd_nm_lint_t;

static inline uint64_t CAVM_XCPX_CWD_NM_LINT(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_XCPX_CWD_NM_LINT(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CN20KA) && (a<=3))
        return 0x820000041200ll + 0x1000000000ll * ((a) & 0x3);
    __cavm_csr_fatal("XCPX_CWD_NM_LINT", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_XCPX_CWD_NM_LINT(a) cavm_xcpx_cwd_nm_lint_t
#define bustype_CAVM_XCPX_CWD_NM_LINT(a) CSR_TYPE_NCB32b
#define basename_CAVM_XCPX_CWD_NM_LINT(a) "XCPX_CWD_NM_LINT"
#define device_bar_CAVM_XCPX_CWD_NM_LINT(a) 0x0 /* PF_BAR0 */
#define busnum_CAVM_XCPX_CWD_NM_LINT(a) (a)
#define arguments_CAVM_XCPX_CWD_NM_LINT(a) (a),-1,-1,-1

/**
 * Register (NCB32b) xcp#_cwd_nm_lint_w1s
 *
 * XCP Per-core Watchdog non-maskable Interrupt Set Register
 * This register sets interrupt bits.
 */
union cavm_xcpx_cwd_nm_lint_w1s
{
    uint32_t u;
    struct cavm_xcpx_cwd_nm_lint_w1s_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t reserved_1_31         : 31;
        uint32_t wdog_int              : 1;  /**< [  0:  0](R/W1S/H) Reads or sets XCP(0..3)_CWD_NM_LINT[WDOG_INT]. */
#else /* Word 0 - Little Endian */
        uint32_t wdog_int              : 1;  /**< [  0:  0](R/W1S/H) Reads or sets XCP(0..3)_CWD_NM_LINT[WDOG_INT]. */
        uint32_t reserved_1_31         : 31;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_xcpx_cwd_nm_lint_w1s_s cn; */
};
typedef union cavm_xcpx_cwd_nm_lint_w1s cavm_xcpx_cwd_nm_lint_w1s_t;

static inline uint64_t CAVM_XCPX_CWD_NM_LINT_W1S(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_XCPX_CWD_NM_LINT_W1S(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CN20KA) && (a<=3))
        return 0x820000041208ll + 0x1000000000ll * ((a) & 0x3);
    __cavm_csr_fatal("XCPX_CWD_NM_LINT_W1S", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_XCPX_CWD_NM_LINT_W1S(a) cavm_xcpx_cwd_nm_lint_w1s_t
#define bustype_CAVM_XCPX_CWD_NM_LINT_W1S(a) CSR_TYPE_NCB32b
#define basename_CAVM_XCPX_CWD_NM_LINT_W1S(a) "XCPX_CWD_NM_LINT_W1S"
#define device_bar_CAVM_XCPX_CWD_NM_LINT_W1S(a) 0x0 /* PF_BAR0 */
#define busnum_CAVM_XCPX_CWD_NM_LINT_W1S(a) (a)
#define arguments_CAVM_XCPX_CWD_NM_LINT_W1S(a) (a),-1,-1,-1

/**
 * Register (NCB32b) xcp#_cwd_poke
 *
 * XCP Per-XCP Watchdog Poke Registers
 * Per-core watchdog poke. Writing any value to this register does the following:
 * * Clears any pending interrupt generated by the associated watchdog.
 * * Resets XCP()_CWD_WDOG[STATE] to 0x0.
 * * Sets XCP()_CWD_WDOG[CNT] to (XCP()_CWD_WDOG[LEN] \<\< 8)..
 *
 * Reading this register returns the associated XCP()_CWD_WDOG register.
 *
 * This register is only accessible to the requestor(s) permitted with CPC_XCP()_PERMIT.
 *
 * This register is reset on XCP domain reset.
 */
union cavm_xcpx_cwd_poke
{
    uint32_t u;
    struct cavm_xcpx_cwd_poke_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t ign                   : 32; /**< [ 31:  0](WO/H) Write will cause a poke to XCP()_CWD_WDOG. See XCP()_CWD_WDOG. */
#else /* Word 0 - Little Endian */
        uint32_t ign                   : 32; /**< [ 31:  0](WO/H) Write will cause a poke to XCP()_CWD_WDOG. See XCP()_CWD_WDOG. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_xcpx_cwd_poke_s cn; */
};
typedef union cavm_xcpx_cwd_poke cavm_xcpx_cwd_poke_t;

static inline uint64_t CAVM_XCPX_CWD_POKE(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_XCPX_CWD_POKE(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CN20KA) && (a<=3))
        return 0x82000000ee00ll + 0x1000000000ll * ((a) & 0x3);
    __cavm_csr_fatal("XCPX_CWD_POKE", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_XCPX_CWD_POKE(a) cavm_xcpx_cwd_poke_t
#define bustype_CAVM_XCPX_CWD_POKE(a) CSR_TYPE_NCB32b
#define basename_CAVM_XCPX_CWD_POKE(a) "XCPX_CWD_POKE"
#define device_bar_CAVM_XCPX_CWD_POKE(a) 0x0 /* PF_BAR0 */
#define busnum_CAVM_XCPX_CWD_POKE(a) (a)
#define arguments_CAVM_XCPX_CWD_POKE(a) (a),-1,-1,-1

/**
 * Register (NCB32b) xcp#_cwd_wdog
 *
 * XCP Per-XCP Watchdog Registers
 * This register is only accessible to the requestor(s) permitted with CPC_XCP()_PERMIT.
 *
 * This register is reset on XCP domain reset.
 */
union cavm_xcpx_cwd_wdog
{
    uint32_t u;
    struct cavm_xcpx_cwd_wdog_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t gstop                 : 1;  /**< [ 31: 31](R/W) Reserved. */
        uint32_t dstop                 : 1;  /**< [ 30: 30](R/W) Debug-stop enable. Debug stop is asserted if the local XCP is in debug mode. */
        uint32_t cnt                   : 17; /**< [ 29: 13](R/W/H) Number of 10.24 us intervals until next watchdog expiration. Set on write to
                                                                 associated XCP()_CWD_POKE.

                                                                 Typically on each write to XCP()_CWD_WDOG, [CNT] should be set to [LEN] * 0x100. */
        uint32_t len                   : 9;  /**< [ 12:  4](R/W) Watchdog time-expiration length. The most-significant nine bits of a 17-bit value to be
                                                                 decremented every 10.24 us. */
        uint32_t state                 : 2;  /**< [  3:  2](R/W/H) Watchdog state. The number of watchdog time expirations since last core poke. Cleared on
                                                                 write to associated XCP()_CWD_POKE. */
        uint32_t mode                  : 2;  /**< [  1:  0](R/W) Watchdog mode:
                                                                 0x0 = Off.
                                                                 0x1 = (Maskable) Interrupt only.
                                                                 0x2 = (Maskable) Interrupt + NMI.
                                                                 0x3 = (Maskable) Interrupt + NMI + XCP domain reset. */
#else /* Word 0 - Little Endian */
        uint32_t mode                  : 2;  /**< [  1:  0](R/W) Watchdog mode:
                                                                 0x0 = Off.
                                                                 0x1 = (Maskable) Interrupt only.
                                                                 0x2 = (Maskable) Interrupt + NMI.
                                                                 0x3 = (Maskable) Interrupt + NMI + XCP domain reset. */
        uint32_t state                 : 2;  /**< [  3:  2](R/W/H) Watchdog state. The number of watchdog time expirations since last core poke. Cleared on
                                                                 write to associated XCP()_CWD_POKE. */
        uint32_t len                   : 9;  /**< [ 12:  4](R/W) Watchdog time-expiration length. The most-significant nine bits of a 17-bit value to be
                                                                 decremented every 10.24 us. */
        uint32_t cnt                   : 17; /**< [ 29: 13](R/W/H) Number of 10.24 us intervals until next watchdog expiration. Set on write to
                                                                 associated XCP()_CWD_POKE.

                                                                 Typically on each write to XCP()_CWD_WDOG, [CNT] should be set to [LEN] * 0x100. */
        uint32_t dstop                 : 1;  /**< [ 30: 30](R/W) Debug-stop enable. Debug stop is asserted if the local XCP is in debug mode. */
        uint32_t gstop                 : 1;  /**< [ 31: 31](R/W) Reserved. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_xcpx_cwd_wdog_s cn; */
};
typedef union cavm_xcpx_cwd_wdog cavm_xcpx_cwd_wdog_t;

static inline uint64_t CAVM_XCPX_CWD_WDOG(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_XCPX_CWD_WDOG(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CN20KA) && (a<=3))
        return 0x82000000ee80ll + 0x1000000000ll * ((a) & 0x3);
    __cavm_csr_fatal("XCPX_CWD_WDOG", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_XCPX_CWD_WDOG(a) cavm_xcpx_cwd_wdog_t
#define bustype_CAVM_XCPX_CWD_WDOG(a) CSR_TYPE_NCB32b
#define basename_CAVM_XCPX_CWD_WDOG(a) "XCPX_CWD_WDOG"
#define device_bar_CAVM_XCPX_CWD_WDOG(a) 0x0 /* PF_BAR0 */
#define busnum_CAVM_XCPX_CWD_WDOG(a) (a)
#define arguments_CAVM_XCPX_CWD_WDOG(a) (a),-1,-1,-1

/**
 * Register (NCB32b) xcp#_dev#_xcp_mbox
 *
 * XCP DEV-to-XCP Mailbox Data Registers
 * This register is the mailbox register for other devices to interrupt XCP
 * See XCP_MBOX_DEV_E for device enumeration.
 * For XCP-to-AP interrupts see instead XCP()_XCP_DEV()_MBOX.
 *
 * This register is only accessible to device driving this mailbox reg and the requestor(s)
 * permitted with CPC_XCP()_PERMIT.
 *
 * This register is reset on XCP domain reset.
 */
union cavm_xcpx_devx_xcp_mbox
{
    uint32_t u;
    struct cavm_xcpx_devx_xcp_mbox_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t data                  : 32; /**< [ 31:  0](R/W) Communication data from devices to XCP. When written sets XCP()_DEV()_XCP_MBOX_LINT[INTR]. */
#else /* Word 0 - Little Endian */
        uint32_t data                  : 32; /**< [ 31:  0](R/W) Communication data from devices to XCP. When written sets XCP()_DEV()_XCP_MBOX_LINT[INTR]. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_xcpx_devx_xcp_mbox_s cn; */
};
typedef union cavm_xcpx_devx_xcp_mbox cavm_xcpx_devx_xcp_mbox_t;

static inline uint64_t CAVM_XCPX_DEVX_XCP_MBOX(uint64_t a, uint64_t b) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_XCPX_DEVX_XCP_MBOX(uint64_t a, uint64_t b)
{
    if (cavm_is_model(OCTEONTX_CN20KA) && ((a<=3) && (b<=61)))
        return 0x8200000e1000ll + 0x1000000000ll * ((a) & 0x3) + 0x10ll * ((b) & 0x3f);
    __cavm_csr_fatal("XCPX_DEVX_XCP_MBOX", 2, a, b, 0, 0, 0, 0);
}

#define typedef_CAVM_XCPX_DEVX_XCP_MBOX(a,b) cavm_xcpx_devx_xcp_mbox_t
#define bustype_CAVM_XCPX_DEVX_XCP_MBOX(a,b) CSR_TYPE_NCB32b
#define basename_CAVM_XCPX_DEVX_XCP_MBOX(a,b) "XCPX_DEVX_XCP_MBOX"
#define device_bar_CAVM_XCPX_DEVX_XCP_MBOX(a,b) 0x0 /* PF_BAR0 */
#define busnum_CAVM_XCPX_DEVX_XCP_MBOX(a,b) (a)
#define arguments_CAVM_XCPX_DEVX_XCP_MBOX(a,b) (a),(b),-1,-1

/**
 * Register (NCB32b) xcp#_dev#_xcp_mbox_lint
 *
 * XCP DEV-to-XCP Mailbox Interrupt Register
 * This register contains mailbox interrupt for Devs to XCP core transactions.
 *
 * This register is only accessible to the requestor(s) permitted with CPC_XCP()_PERMIT.
 *
 * This register is reset on XCP domain reset.
 */
union cavm_xcpx_devx_xcp_mbox_lint
{
    uint32_t u;
    struct cavm_xcpx_devx_xcp_mbox_lint_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t reserved_1_31         : 31;
        uint32_t intr                  : 1;  /**< [  0:  0](R/W1C/H) Mailbox interrupt. Set when XCP()_DEV()_XCP_MBOX is written. */
#else /* Word 0 - Little Endian */
        uint32_t intr                  : 1;  /**< [  0:  0](R/W1C/H) Mailbox interrupt. Set when XCP()_DEV()_XCP_MBOX is written. */
        uint32_t reserved_1_31         : 31;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_xcpx_devx_xcp_mbox_lint_s cn; */
};
typedef union cavm_xcpx_devx_xcp_mbox_lint cavm_xcpx_devx_xcp_mbox_lint_t;

static inline uint64_t CAVM_XCPX_DEVX_XCP_MBOX_LINT(uint64_t a, uint64_t b) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_XCPX_DEVX_XCP_MBOX_LINT(uint64_t a, uint64_t b)
{
    if (cavm_is_model(OCTEONTX_CN20KA) && ((a<=3) && (b<=61)))
        return 0x8200000e2000ll + 0x1000000000ll * ((a) & 0x3) + 0x10ll * ((b) & 0x3f);
    __cavm_csr_fatal("XCPX_DEVX_XCP_MBOX_LINT", 2, a, b, 0, 0, 0, 0);
}

#define typedef_CAVM_XCPX_DEVX_XCP_MBOX_LINT(a,b) cavm_xcpx_devx_xcp_mbox_lint_t
#define bustype_CAVM_XCPX_DEVX_XCP_MBOX_LINT(a,b) CSR_TYPE_NCB32b
#define basename_CAVM_XCPX_DEVX_XCP_MBOX_LINT(a,b) "XCPX_DEVX_XCP_MBOX_LINT"
#define device_bar_CAVM_XCPX_DEVX_XCP_MBOX_LINT(a,b) 0x0 /* PF_BAR0 */
#define busnum_CAVM_XCPX_DEVX_XCP_MBOX_LINT(a,b) (a)
#define arguments_CAVM_XCPX_DEVX_XCP_MBOX_LINT(a,b) (a),(b),-1,-1

/**
 * Register (NCB32b) xcp#_dev#_xcp_mbox_lint_ena_w1c
 *
 * XCP DEV-to-XCP Mailbox Interrupt Enable Clear Register
 * This register clears interrupt enable bits.
 */
union cavm_xcpx_devx_xcp_mbox_lint_ena_w1c
{
    uint32_t u;
    struct cavm_xcpx_devx_xcp_mbox_lint_ena_w1c_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t reserved_1_31         : 31;
        uint32_t intr                  : 1;  /**< [  0:  0](R/W1C/H) Reads or clears enable for XCP(0..3)_DEV(0..61)_XCP_MBOX_LINT[INTR]. */
#else /* Word 0 - Little Endian */
        uint32_t intr                  : 1;  /**< [  0:  0](R/W1C/H) Reads or clears enable for XCP(0..3)_DEV(0..61)_XCP_MBOX_LINT[INTR]. */
        uint32_t reserved_1_31         : 31;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_xcpx_devx_xcp_mbox_lint_ena_w1c_s cn; */
};
typedef union cavm_xcpx_devx_xcp_mbox_lint_ena_w1c cavm_xcpx_devx_xcp_mbox_lint_ena_w1c_t;

static inline uint64_t CAVM_XCPX_DEVX_XCP_MBOX_LINT_ENA_W1C(uint64_t a, uint64_t b) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_XCPX_DEVX_XCP_MBOX_LINT_ENA_W1C(uint64_t a, uint64_t b)
{
    if (cavm_is_model(OCTEONTX_CN20KA) && ((a<=3) && (b<=61)))
        return 0x8200000e2c00ll + 0x1000000000ll * ((a) & 0x3) + 0x10ll * ((b) & 0x3f);
    __cavm_csr_fatal("XCPX_DEVX_XCP_MBOX_LINT_ENA_W1C", 2, a, b, 0, 0, 0, 0);
}

#define typedef_CAVM_XCPX_DEVX_XCP_MBOX_LINT_ENA_W1C(a,b) cavm_xcpx_devx_xcp_mbox_lint_ena_w1c_t
#define bustype_CAVM_XCPX_DEVX_XCP_MBOX_LINT_ENA_W1C(a,b) CSR_TYPE_NCB32b
#define basename_CAVM_XCPX_DEVX_XCP_MBOX_LINT_ENA_W1C(a,b) "XCPX_DEVX_XCP_MBOX_LINT_ENA_W1C"
#define device_bar_CAVM_XCPX_DEVX_XCP_MBOX_LINT_ENA_W1C(a,b) 0x0 /* PF_BAR0 */
#define busnum_CAVM_XCPX_DEVX_XCP_MBOX_LINT_ENA_W1C(a,b) (a)
#define arguments_CAVM_XCPX_DEVX_XCP_MBOX_LINT_ENA_W1C(a,b) (a),(b),-1,-1

/**
 * Register (NCB32b) xcp#_dev#_xcp_mbox_lint_ena_w1s
 *
 * XCP DEV-to-XCP Mailbox Interrupt Enable Set Register
 * This register sets interrupt enable bits.
 */
union cavm_xcpx_devx_xcp_mbox_lint_ena_w1s
{
    uint32_t u;
    struct cavm_xcpx_devx_xcp_mbox_lint_ena_w1s_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t reserved_1_31         : 31;
        uint32_t intr                  : 1;  /**< [  0:  0](R/W1S/H) Reads or sets enable for XCP(0..3)_DEV(0..61)_XCP_MBOX_LINT[INTR]. */
#else /* Word 0 - Little Endian */
        uint32_t intr                  : 1;  /**< [  0:  0](R/W1S/H) Reads or sets enable for XCP(0..3)_DEV(0..61)_XCP_MBOX_LINT[INTR]. */
        uint32_t reserved_1_31         : 31;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_xcpx_devx_xcp_mbox_lint_ena_w1s_s cn; */
};
typedef union cavm_xcpx_devx_xcp_mbox_lint_ena_w1s cavm_xcpx_devx_xcp_mbox_lint_ena_w1s_t;

static inline uint64_t CAVM_XCPX_DEVX_XCP_MBOX_LINT_ENA_W1S(uint64_t a, uint64_t b) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_XCPX_DEVX_XCP_MBOX_LINT_ENA_W1S(uint64_t a, uint64_t b)
{
    if (cavm_is_model(OCTEONTX_CN20KA) && ((a<=3) && (b<=61)))
        return 0x8200000e2800ll + 0x1000000000ll * ((a) & 0x3) + 0x10ll * ((b) & 0x3f);
    __cavm_csr_fatal("XCPX_DEVX_XCP_MBOX_LINT_ENA_W1S", 2, a, b, 0, 0, 0, 0);
}

#define typedef_CAVM_XCPX_DEVX_XCP_MBOX_LINT_ENA_W1S(a,b) cavm_xcpx_devx_xcp_mbox_lint_ena_w1s_t
#define bustype_CAVM_XCPX_DEVX_XCP_MBOX_LINT_ENA_W1S(a,b) CSR_TYPE_NCB32b
#define basename_CAVM_XCPX_DEVX_XCP_MBOX_LINT_ENA_W1S(a,b) "XCPX_DEVX_XCP_MBOX_LINT_ENA_W1S"
#define device_bar_CAVM_XCPX_DEVX_XCP_MBOX_LINT_ENA_W1S(a,b) 0x0 /* PF_BAR0 */
#define busnum_CAVM_XCPX_DEVX_XCP_MBOX_LINT_ENA_W1S(a,b) (a)
#define arguments_CAVM_XCPX_DEVX_XCP_MBOX_LINT_ENA_W1S(a,b) (a),(b),-1,-1

/**
 * Register (NCB32b) xcp#_dev#_xcp_mbox_lint_w1s
 *
 * XCP AP-to-XCP Mailbox Interrupt Set Register
 * This register sets interrupt bits.
 */
union cavm_xcpx_devx_xcp_mbox_lint_w1s
{
    uint32_t u;
    struct cavm_xcpx_devx_xcp_mbox_lint_w1s_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t reserved_1_31         : 31;
        uint32_t intr                  : 1;  /**< [  0:  0](R/W1S/H) Reads or sets XCP(0..3)_DEV(0..61)_XCP_MBOX_LINT[INTR]. */
#else /* Word 0 - Little Endian */
        uint32_t intr                  : 1;  /**< [  0:  0](R/W1S/H) Reads or sets XCP(0..3)_DEV(0..61)_XCP_MBOX_LINT[INTR]. */
        uint32_t reserved_1_31         : 31;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_xcpx_devx_xcp_mbox_lint_w1s_s cn; */
};
typedef union cavm_xcpx_devx_xcp_mbox_lint_w1s cavm_xcpx_devx_xcp_mbox_lint_w1s_t;

static inline uint64_t CAVM_XCPX_DEVX_XCP_MBOX_LINT_W1S(uint64_t a, uint64_t b) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_XCPX_DEVX_XCP_MBOX_LINT_W1S(uint64_t a, uint64_t b)
{
    if (cavm_is_model(OCTEONTX_CN20KA) && ((a<=3) && (b<=61)))
        return 0x8200000e2400ll + 0x1000000000ll * ((a) & 0x3) + 0x10ll * ((b) & 0x3f);
    __cavm_csr_fatal("XCPX_DEVX_XCP_MBOX_LINT_W1S", 2, a, b, 0, 0, 0, 0);
}

#define typedef_CAVM_XCPX_DEVX_XCP_MBOX_LINT_W1S(a,b) cavm_xcpx_devx_xcp_mbox_lint_w1s_t
#define bustype_CAVM_XCPX_DEVX_XCP_MBOX_LINT_W1S(a,b) CSR_TYPE_NCB32b
#define basename_CAVM_XCPX_DEVX_XCP_MBOX_LINT_W1S(a,b) "XCPX_DEVX_XCP_MBOX_LINT_W1S"
#define device_bar_CAVM_XCPX_DEVX_XCP_MBOX_LINT_W1S(a,b) 0x0 /* PF_BAR0 */
#define busnum_CAVM_XCPX_DEVX_XCP_MBOX_LINT_W1S(a,b) (a)
#define arguments_CAVM_XCPX_DEVX_XCP_MBOX_LINT_W1S(a,b) (a),(b),-1,-1

/**
 * Register (NCB32b) xcp#_gib#_lint
 *
 * XCP GIB Interrupt Register
 * This register contains GIB interrupt for XCP.
 *
 * This register and XCP()_GIB()_LINT_W1S are only accessible to the requestor(s)
 * permitted with CPC_XCP()_GIB()_LINT_PERMIT, or by a MSI-X/GIB interrupt message write.
 *
 * This register is reset on XCP domain reset.
 */
union cavm_xcpx_gibx_lint
{
    uint32_t u;
    struct cavm_xcpx_gibx_lint_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t gib_int               : 32; /**< [ 31:  0](R/W1C/H) MSI-X interrupt bits. Devices may program their MSI-X vector addresses to this
                                                                 physical address, and MSI-X vector data to have a single bit set in \<31:0\>. This
                                                                 will allow that device to set one of these bits, causing an interrupt to be
                                                                 signalled to the XCP (if appropriately enabled with XCP()_GIB()_LINT_ENA_W1C). */
#else /* Word 0 - Little Endian */
        uint32_t gib_int               : 32; /**< [ 31:  0](R/W1C/H) MSI-X interrupt bits. Devices may program their MSI-X vector addresses to this
                                                                 physical address, and MSI-X vector data to have a single bit set in \<31:0\>. This
                                                                 will allow that device to set one of these bits, causing an interrupt to be
                                                                 signalled to the XCP (if appropriately enabled with XCP()_GIB()_LINT_ENA_W1C). */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_xcpx_gibx_lint_s cn; */
};
typedef union cavm_xcpx_gibx_lint cavm_xcpx_gibx_lint_t;

static inline uint64_t CAVM_XCPX_GIBX_LINT(uint64_t a, uint64_t b) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_XCPX_GIBX_LINT(uint64_t a, uint64_t b)
{
    if (cavm_is_model(OCTEONTX_CN20KA) && ((a<=3) && (b<=2)))
        return 0x820000000c00ll + 0x1000000000ll * ((a) & 0x3) + 0x10ll * ((b) & 0x3);
    __cavm_csr_fatal("XCPX_GIBX_LINT", 2, a, b, 0, 0, 0, 0);
}

#define typedef_CAVM_XCPX_GIBX_LINT(a,b) cavm_xcpx_gibx_lint_t
#define bustype_CAVM_XCPX_GIBX_LINT(a,b) CSR_TYPE_NCB32b
#define basename_CAVM_XCPX_GIBX_LINT(a,b) "XCPX_GIBX_LINT"
#define device_bar_CAVM_XCPX_GIBX_LINT(a,b) 0x0 /* PF_BAR0 */
#define busnum_CAVM_XCPX_GIBX_LINT(a,b) (a)
#define arguments_CAVM_XCPX_GIBX_LINT(a,b) (a),(b),-1,-1

/**
 * Register (NCB32b) xcp#_gib#_lint_devid
 *
 * XCP GIB Interrupt Device ID Register
 * This register is only accessible to the requestor(s) permitted with CPC_XCP()_PERMIT.
 *
 * This register is reset on XCP domain reset.
 */
union cavm_xcpx_gibx_lint_devid
{
    uint32_t u;
    struct cavm_xcpx_gibx_lint_devid_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t valid                 : 1;  /**< [ 31: 31](R/W1C/H) Valid.  When a device sends an interrupt that writes to XCP()_GIB()_LINT_W1S (but not
                                                                 XCP()_GIB()_LINT or other registers), [VALID] is set and if [VALID] was previously clear,
                                                                 the device ID is recorded in [DEVID]. */
        uint32_t ovfl                  : 1;  /**< [ 30: 30](R/W1C/H) Overflow.  If [VALID] was previously set and a device sends a later message to
                                                                 XCP()_GIB()_LINT_W1S, and that message's device ID does not match [DEVID], then [OVFL] is
                                                                 set. This indicates that multiple devices have sent interrupts and software may need to
                                                                 poll multiple devices to determine which originated the interrupt. */
        uint32_t reserved_22_29        : 8;
        uint32_t devid                 : 22; /**< [ 21:  0](RO/H) Device ID.  The interrupt device ID that first wrote to XCP()_GIB()_LINT_W1S and caused
                                                                 [VALID] to become one. Unpredictable unless [VALID] is set. */
#else /* Word 0 - Little Endian */
        uint32_t devid                 : 22; /**< [ 21:  0](RO/H) Device ID.  The interrupt device ID that first wrote to XCP()_GIB()_LINT_W1S and caused
                                                                 [VALID] to become one. Unpredictable unless [VALID] is set. */
        uint32_t reserved_22_29        : 8;
        uint32_t ovfl                  : 1;  /**< [ 30: 30](R/W1C/H) Overflow.  If [VALID] was previously set and a device sends a later message to
                                                                 XCP()_GIB()_LINT_W1S, and that message's device ID does not match [DEVID], then [OVFL] is
                                                                 set. This indicates that multiple devices have sent interrupts and software may need to
                                                                 poll multiple devices to determine which originated the interrupt. */
        uint32_t valid                 : 1;  /**< [ 31: 31](R/W1C/H) Valid.  When a device sends an interrupt that writes to XCP()_GIB()_LINT_W1S (but not
                                                                 XCP()_GIB()_LINT or other registers), [VALID] is set and if [VALID] was previously clear,
                                                                 the device ID is recorded in [DEVID]. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_xcpx_gibx_lint_devid_s cn; */
};
typedef union cavm_xcpx_gibx_lint_devid cavm_xcpx_gibx_lint_devid_t;

static inline uint64_t CAVM_XCPX_GIBX_LINT_DEVID(uint64_t a, uint64_t b) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_XCPX_GIBX_LINT_DEVID(uint64_t a, uint64_t b)
{
    if (cavm_is_model(OCTEONTX_CN20KA) && ((a<=3) && (b<=2)))
        return 0x820000000dc0ll + 0x1000000000ll * ((a) & 0x3) + 0x10ll * ((b) & 0x3);
    __cavm_csr_fatal("XCPX_GIBX_LINT_DEVID", 2, a, b, 0, 0, 0, 0);
}

#define typedef_CAVM_XCPX_GIBX_LINT_DEVID(a,b) cavm_xcpx_gibx_lint_devid_t
#define bustype_CAVM_XCPX_GIBX_LINT_DEVID(a,b) CSR_TYPE_NCB32b
#define basename_CAVM_XCPX_GIBX_LINT_DEVID(a,b) "XCPX_GIBX_LINT_DEVID"
#define device_bar_CAVM_XCPX_GIBX_LINT_DEVID(a,b) 0x0 /* PF_BAR0 */
#define busnum_CAVM_XCPX_GIBX_LINT_DEVID(a,b) (a)
#define arguments_CAVM_XCPX_GIBX_LINT_DEVID(a,b) (a),(b),-1,-1

/**
 * Register (NCB32b) xcp#_gib#_lint_ena_w1c
 *
 * XCP GIB Interrupt Enable Clear Register
 * This register clears interrupt enable bits.
 */
union cavm_xcpx_gibx_lint_ena_w1c
{
    uint32_t u;
    struct cavm_xcpx_gibx_lint_ena_w1c_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t gib_int               : 32; /**< [ 31:  0](R/W1C/H) Reads or clears enable for XCP(0..3)_GIB(0..2)_LINT[GIB_INT]. */
#else /* Word 0 - Little Endian */
        uint32_t gib_int               : 32; /**< [ 31:  0](R/W1C/H) Reads or clears enable for XCP(0..3)_GIB(0..2)_LINT[GIB_INT]. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_xcpx_gibx_lint_ena_w1c_s cn; */
};
typedef union cavm_xcpx_gibx_lint_ena_w1c cavm_xcpx_gibx_lint_ena_w1c_t;

static inline uint64_t CAVM_XCPX_GIBX_LINT_ENA_W1C(uint64_t a, uint64_t b) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_XCPX_GIBX_LINT_ENA_W1C(uint64_t a, uint64_t b)
{
    if (cavm_is_model(OCTEONTX_CN20KA) && ((a<=3) && (b<=2)))
        return 0x820000000cc0ll + 0x1000000000ll * ((a) & 0x3) + 0x10ll * ((b) & 0x3);
    __cavm_csr_fatal("XCPX_GIBX_LINT_ENA_W1C", 2, a, b, 0, 0, 0, 0);
}

#define typedef_CAVM_XCPX_GIBX_LINT_ENA_W1C(a,b) cavm_xcpx_gibx_lint_ena_w1c_t
#define bustype_CAVM_XCPX_GIBX_LINT_ENA_W1C(a,b) CSR_TYPE_NCB32b
#define basename_CAVM_XCPX_GIBX_LINT_ENA_W1C(a,b) "XCPX_GIBX_LINT_ENA_W1C"
#define device_bar_CAVM_XCPX_GIBX_LINT_ENA_W1C(a,b) 0x0 /* PF_BAR0 */
#define busnum_CAVM_XCPX_GIBX_LINT_ENA_W1C(a,b) (a)
#define arguments_CAVM_XCPX_GIBX_LINT_ENA_W1C(a,b) (a),(b),-1,-1

/**
 * Register (NCB32b) xcp#_gib#_lint_ena_w1s
 *
 * XCP GIB Interrupt Enable Set Register
 * This register sets interrupt enable bits.
 */
union cavm_xcpx_gibx_lint_ena_w1s
{
    uint32_t u;
    struct cavm_xcpx_gibx_lint_ena_w1s_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t gib_int               : 32; /**< [ 31:  0](R/W1S/H) Reads or sets enable for XCP(0..3)_GIB(0..2)_LINT[GIB_INT]. */
#else /* Word 0 - Little Endian */
        uint32_t gib_int               : 32; /**< [ 31:  0](R/W1S/H) Reads or sets enable for XCP(0..3)_GIB(0..2)_LINT[GIB_INT]. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_xcpx_gibx_lint_ena_w1s_s cn; */
};
typedef union cavm_xcpx_gibx_lint_ena_w1s cavm_xcpx_gibx_lint_ena_w1s_t;

static inline uint64_t CAVM_XCPX_GIBX_LINT_ENA_W1S(uint64_t a, uint64_t b) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_XCPX_GIBX_LINT_ENA_W1S(uint64_t a, uint64_t b)
{
    if (cavm_is_model(OCTEONTX_CN20KA) && ((a<=3) && (b<=2)))
        return 0x820000000c40ll + 0x1000000000ll * ((a) & 0x3) + 0x10ll * ((b) & 0x3);
    __cavm_csr_fatal("XCPX_GIBX_LINT_ENA_W1S", 2, a, b, 0, 0, 0, 0);
}

#define typedef_CAVM_XCPX_GIBX_LINT_ENA_W1S(a,b) cavm_xcpx_gibx_lint_ena_w1s_t
#define bustype_CAVM_XCPX_GIBX_LINT_ENA_W1S(a,b) CSR_TYPE_NCB32b
#define basename_CAVM_XCPX_GIBX_LINT_ENA_W1S(a,b) "XCPX_GIBX_LINT_ENA_W1S"
#define device_bar_CAVM_XCPX_GIBX_LINT_ENA_W1S(a,b) 0x0 /* PF_BAR0 */
#define busnum_CAVM_XCPX_GIBX_LINT_ENA_W1S(a,b) (a)
#define arguments_CAVM_XCPX_GIBX_LINT_ENA_W1S(a,b) (a),(b),-1,-1

/**
 * Register (NCB32b) xcp#_gib#_lint_w1s
 *
 * XCP GIB Interrupt Set Register
 * This register sets interrupt bits.
 */
union cavm_xcpx_gibx_lint_w1s
{
    uint32_t u;
    struct cavm_xcpx_gibx_lint_w1s_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t gib_int               : 32; /**< [ 31:  0](R/W1S/H) Reads or sets XCP(0..3)_GIB(0..2)_LINT[GIB_INT]. */
#else /* Word 0 - Little Endian */
        uint32_t gib_int               : 32; /**< [ 31:  0](R/W1S/H) Reads or sets XCP(0..3)_GIB(0..2)_LINT[GIB_INT]. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_xcpx_gibx_lint_w1s_s cn; */
};
typedef union cavm_xcpx_gibx_lint_w1s cavm_xcpx_gibx_lint_w1s_t;

static inline uint64_t CAVM_XCPX_GIBX_LINT_W1S(uint64_t a, uint64_t b) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_XCPX_GIBX_LINT_W1S(uint64_t a, uint64_t b)
{
    if (cavm_is_model(OCTEONTX_CN20KA) && ((a<=3) && (b<=2)))
        return 0x820000000c80ll + 0x1000000000ll * ((a) & 0x3) + 0x10ll * ((b) & 0x3);
    __cavm_csr_fatal("XCPX_GIBX_LINT_W1S", 2, a, b, 0, 0, 0, 0);
}

#define typedef_CAVM_XCPX_GIBX_LINT_W1S(a,b) cavm_xcpx_gibx_lint_w1s_t
#define bustype_CAVM_XCPX_GIBX_LINT_W1S(a,b) CSR_TYPE_NCB32b
#define basename_CAVM_XCPX_GIBX_LINT_W1S(a,b) "XCPX_GIBX_LINT_W1S"
#define device_bar_CAVM_XCPX_GIBX_LINT_W1S(a,b) 0x0 /* PF_BAR0 */
#define busnum_CAVM_XCPX_GIBX_LINT_W1S(a,b) (a)
#define arguments_CAVM_XCPX_GIBX_LINT_W1S(a,b) (a),(b),-1,-1

/**
 * Register (NCB32b) xcp#_id
 *
 * XCP Identefication Register
 * This register is only accessible to the requestor(s) permitted with CPC_XCP()_PERMIT.
 *
 * This register is reset on XCP domain reset.
 */
union cavm_xcpx_id
{
    uint32_t u;
    struct cavm_xcpx_id_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t reserved_2_31         : 30;
        uint32_t id                    : 2;  /**< [  1:  0](RO/H) Status of the ID of the XCP.
                                                                 0: SCP.
                                                                 1: MCP.
                                                                 2: CCP.
                                                                 3: PCP. */
#else /* Word 0 - Little Endian */
        uint32_t id                    : 2;  /**< [  1:  0](RO/H) Status of the ID of the XCP.
                                                                 0: SCP.
                                                                 1: MCP.
                                                                 2: CCP.
                                                                 3: PCP. */
        uint32_t reserved_2_31         : 30;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_xcpx_id_s cn; */
};
typedef union cavm_xcpx_id cavm_xcpx_id_t;

static inline uint64_t CAVM_XCPX_ID(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_XCPX_ID(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CN20KA) && (a<=3))
        return 0x820000000020ll + 0x1000000000ll * ((a) & 0x3);
    __cavm_csr_fatal("XCPX_ID", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_XCPX_ID(a) cavm_xcpx_id_t
#define bustype_CAVM_XCPX_ID(a) CSR_TYPE_NCB32b
#define basename_CAVM_XCPX_ID(a) "XCPX_ID"
#define device_bar_CAVM_XCPX_ID(a) 0x0 /* PF_BAR0 */
#define busnum_CAVM_XCPX_ID(a) (a)
#define arguments_CAVM_XCPX_ID(a) (a),-1,-1,-1

/**
 * Register (NCB32b) xcp#_initvtor
 *
 * XCP CM7 Init Vector Table Offeset Register
 * This register contains the configuration bits for the CM7 INITVTOR input port.
 *
 * This register is only accessible to the requestor(s) permitted with CPC_XCP()_PERMIT.
 *
 * This register is reset on chip reset.
 */
union cavm_xcpx_initvtor
{
    uint32_t u;
    struct cavm_xcpx_initvtor_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t initvtor              : 25; /**< [ 31:  7](R/W) CM7 Init Vector Table Offset. */
        uint32_t reserved_0_6          : 7;
#else /* Word 0 - Little Endian */
        uint32_t reserved_0_6          : 7;
        uint32_t initvtor              : 25; /**< [ 31:  7](R/W) CM7 Init Vector Table Offset. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_xcpx_initvtor_s cn; */
};
typedef union cavm_xcpx_initvtor cavm_xcpx_initvtor_t;

static inline uint64_t CAVM_XCPX_INITVTOR(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_XCPX_INITVTOR(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CN20KA) && (a<=3))
        return 0x820000000230ll + 0x1000000000ll * ((a) & 0x3);
    __cavm_csr_fatal("XCPX_INITVTOR", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_XCPX_INITVTOR(a) cavm_xcpx_initvtor_t
#define bustype_CAVM_XCPX_INITVTOR(a) CSR_TYPE_NCB32b
#define basename_CAVM_XCPX_INITVTOR(a) "XCPX_INITVTOR"
#define device_bar_CAVM_XCPX_INITVTOR(a) 0x0 /* PF_BAR0 */
#define busnum_CAVM_XCPX_INITVTOR(a) (a)
#define arguments_CAVM_XCPX_INITVTOR(a) (a),-1,-1,-1

/**
 * Register (NCB) xcp#_lint0_summary
 *
 * XCP Interrupt Summary Register 0
 * This register is the local interrupt summary register 0 for the XCP CPU core.
 *
 * This register is only accessible to the requestor(s) permitted with CPC_XCP()_PERMIT.
 *
 * This register is reset on XCP domain reset.
 */
union cavm_xcpx_lint0_summary
{
    uint64_t u;
    struct cavm_xcpx_lint0_summary_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_20_63        : 44;
        uint64_t wdog_nmi              : 1;  /**< [ 19: 19](RO/H) WDOG non-maskable interrupt, XCP()_CWD_NM_LINT[WDOG_INT]. */
        uint64_t wdog_mi               : 1;  /**< [ 18: 18](RO/H) WDOG maskable interrupt, XCP()_CWD_LINT[WDOG_INT]. */
        uint64_t reserved_16_17        : 2;
        uint64_t bus_err               : 1;  /**< [ 15: 15](RO/H) Logical OR of bus error interrupt bits, XCP()_BUS_ERR_LINT. */
        uint64_t reserved_3_14         : 12;
        uint64_t gib                   : 3;  /**< [  2:  0](RO/H) Logical OR of each set of 32 GIB interrupt bits XCP()_GIB()_LINT\<31:0\>. */
#else /* Word 0 - Little Endian */
        uint64_t gib                   : 3;  /**< [  2:  0](RO/H) Logical OR of each set of 32 GIB interrupt bits XCP()_GIB()_LINT\<31:0\>. */
        uint64_t reserved_3_14         : 12;
        uint64_t bus_err               : 1;  /**< [ 15: 15](RO/H) Logical OR of bus error interrupt bits, XCP()_BUS_ERR_LINT. */
        uint64_t reserved_16_17        : 2;
        uint64_t wdog_mi               : 1;  /**< [ 18: 18](RO/H) WDOG maskable interrupt, XCP()_CWD_LINT[WDOG_INT]. */
        uint64_t wdog_nmi              : 1;  /**< [ 19: 19](RO/H) WDOG non-maskable interrupt, XCP()_CWD_NM_LINT[WDOG_INT]. */
        uint64_t reserved_20_63        : 44;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_xcpx_lint0_summary_s cn; */
};
typedef union cavm_xcpx_lint0_summary cavm_xcpx_lint0_summary_t;

static inline uint64_t CAVM_XCPX_LINT0_SUMMARY(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_XCPX_LINT0_SUMMARY(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CN20KA) && (a<=3))
        return 0x8200000e0000ll + 0x1000000000ll * ((a) & 0x3);
    __cavm_csr_fatal("XCPX_LINT0_SUMMARY", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_XCPX_LINT0_SUMMARY(a) cavm_xcpx_lint0_summary_t
#define bustype_CAVM_XCPX_LINT0_SUMMARY(a) CSR_TYPE_NCB
#define basename_CAVM_XCPX_LINT0_SUMMARY(a) "XCPX_LINT0_SUMMARY"
#define device_bar_CAVM_XCPX_LINT0_SUMMARY(a) 0x0 /* PF_BAR0 */
#define busnum_CAVM_XCPX_LINT0_SUMMARY(a) (a)
#define arguments_CAVM_XCPX_LINT0_SUMMARY(a) (a),-1,-1,-1

/**
 * Register (NCB) xcp#_lint1_summary
 *
 * XCP Interrupt Summary Register 1
 * This register is the local interrupt summary register 1 for the XCP CPU core.
 *
 * This register is only accessible to the requestor(s) permitted with CPC_XCP()_PERMIT.
 *
 * This register is reset on XCP domain reset.
 */
union cavm_xcpx_lint1_summary
{
    uint64_t u;
    struct cavm_xcpx_lint1_summary_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_62_63        : 2;
        uint64_t mbox                  : 62; /**< [ 61:  0](RO/H) Mailbox interrupt bits, XCP()_DEV()_XCP_MBOX_LINT[INTR]. */
#else /* Word 0 - Little Endian */
        uint64_t mbox                  : 62; /**< [ 61:  0](RO/H) Mailbox interrupt bits, XCP()_DEV()_XCP_MBOX_LINT[INTR]. */
        uint64_t reserved_62_63        : 2;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_xcpx_lint1_summary_s cn; */
};
typedef union cavm_xcpx_lint1_summary cavm_xcpx_lint1_summary_t;

static inline uint64_t CAVM_XCPX_LINT1_SUMMARY(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_XCPX_LINT1_SUMMARY(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CN20KA) && (a<=3))
        return 0x8200000e0008ll + 0x1000000000ll * ((a) & 0x3);
    __cavm_csr_fatal("XCPX_LINT1_SUMMARY", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_XCPX_LINT1_SUMMARY(a) cavm_xcpx_lint1_summary_t
#define bustype_CAVM_XCPX_LINT1_SUMMARY(a) CSR_TYPE_NCB
#define basename_CAVM_XCPX_LINT1_SUMMARY(a) "XCPX_LINT1_SUMMARY"
#define device_bar_CAVM_XCPX_LINT1_SUMMARY(a) 0x0 /* PF_BAR0 */
#define busnum_CAVM_XCPX_LINT1_SUMMARY(a) (a)
#define arguments_CAVM_XCPX_LINT1_SUMMARY(a) (a),-1,-1,-1

/**
 * Register (NCB32b) xcp#_mrml_64rd
 *
 * XCP MRML 64-bit Read Save/Restore Register
 * This register is only accessible to the requestor(s) permitted with CPC_XCP()_PERMIT.
 *
 * This register is reset on XCP domain reset, and cannot be accessed during XCP domain reset.
 */
union cavm_xcpx_mrml_64rd
{
    uint32_t u;
    struct cavm_xcpx_mrml_64rd_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t rd_data               : 32; /**< [ 31:  0](R/W) On a read, will return the saved upper 32-bits for the last 64-bit MRML read request.
                                                                 Writing this register will overwrite the value used by the MRML on a read to the upper
                                                                 32-bits in a 64-bit MRML window. Used to save/restore this value. */
#else /* Word 0 - Little Endian */
        uint32_t rd_data               : 32; /**< [ 31:  0](R/W) On a read, will return the saved upper 32-bits for the last 64-bit MRML read request.
                                                                 Writing this register will overwrite the value used by the MRML on a read to the upper
                                                                 32-bits in a 64-bit MRML window. Used to save/restore this value. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_xcpx_mrml_64rd_s cn; */
};
typedef union cavm_xcpx_mrml_64rd cavm_xcpx_mrml_64rd_t;

static inline uint64_t CAVM_XCPX_MRML_64RD(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_XCPX_MRML_64RD(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CN20KA) && (a<=3))
        return 0x820000000110ll + 0x1000000000ll * ((a) & 0x3);
    __cavm_csr_fatal("XCPX_MRML_64RD", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_XCPX_MRML_64RD(a) cavm_xcpx_mrml_64rd_t
#define bustype_CAVM_XCPX_MRML_64RD(a) CSR_TYPE_NCB32b
#define basename_CAVM_XCPX_MRML_64RD(a) "XCPX_MRML_64RD"
#define device_bar_CAVM_XCPX_MRML_64RD(a) 0x0 /* PF_BAR0 */
#define busnum_CAVM_XCPX_MRML_64RD(a) (a)
#define arguments_CAVM_XCPX_MRML_64RD(a) (a),-1,-1,-1

/**
 * Register (NCB32b) xcp#_mrml_64wr
 *
 * XCP MRML 64-bit Write Save/Restore Register
 * This register is only accessible to the requestor(s) permitted with CPC_XCP()_PERMIT.
 *
 * This register is reset on XCP domain reset, and cannot be accessed during XCP domain reset.
 */
union cavm_xcpx_mrml_64wr
{
    uint32_t u;
    struct cavm_xcpx_mrml_64wr_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t wr_data               : 32; /**< [ 31:  0](R/W) On a read, will return the saved value of lower 32-bits of a 64-bit write to be used by
                                                                 the MRML. Writing this register will overwrite the value used by the MRML. Used to
                                                                 save/restore this value. */
#else /* Word 0 - Little Endian */
        uint32_t wr_data               : 32; /**< [ 31:  0](R/W) On a read, will return the saved value of lower 32-bits of a 64-bit write to be used by
                                                                 the MRML. Writing this register will overwrite the value used by the MRML. Used to
                                                                 save/restore this value. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_xcpx_mrml_64wr_s cn; */
};
typedef union cavm_xcpx_mrml_64wr cavm_xcpx_mrml_64wr_t;

static inline uint64_t CAVM_XCPX_MRML_64WR(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_XCPX_MRML_64WR(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CN20KA) && (a<=3))
        return 0x820000000120ll + 0x1000000000ll * ((a) & 0x3);
    __cavm_csr_fatal("XCPX_MRML_64WR", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_XCPX_MRML_64WR(a) cavm_xcpx_mrml_64wr_t
#define bustype_CAVM_XCPX_MRML_64WR(a) CSR_TYPE_NCB32b
#define basename_CAVM_XCPX_MRML_64WR(a) "XCPX_MRML_64WR"
#define device_bar_CAVM_XCPX_MRML_64WR(a) 0x0 /* PF_BAR0 */
#define busnum_CAVM_XCPX_MRML_64WR(a) (a)
#define arguments_CAVM_XCPX_MRML_64WR(a) (a),-1,-1,-1

/**
 * Register (NCB32b) xcp#_mrml_win#_addr
 *
 * XCP RML Window Address Register
 * This register contains the upper address bits for the XCP core RML access windows.
 *
 * This register is only accessible to the requestor(s) permitted with CPC_XCP()_PERMIT.
 *
 * This register is reset on XCP domain reset.
 */
union cavm_xcpx_mrml_winx_addr
{
    uint32_t u;
    struct cavm_xcpx_mrml_winx_addr_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t reserved_24_31        : 8;
        uint32_t addr                  : 24; /**< [ 23:  0](R/W) Address bits 47:24 (as a physical address). */
#else /* Word 0 - Little Endian */
        uint32_t addr                  : 24; /**< [ 23:  0](R/W) Address bits 47:24 (as a physical address). */
        uint32_t reserved_24_31        : 8;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_xcpx_mrml_winx_addr_s cn; */
};
typedef union cavm_xcpx_mrml_winx_addr cavm_xcpx_mrml_winx_addr_t;

static inline uint64_t CAVM_XCPX_MRML_WINX_ADDR(uint64_t a, uint64_t b) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_XCPX_MRML_WINX_ADDR(uint64_t a, uint64_t b)
{
    if (cavm_is_model(OCTEONTX_CN20KA) && ((a<=3) && (b<=7)))
        return 0x820000000800ll + 0x1000000000ll * ((a) & 0x3) + 0x10ll * ((b) & 0x7);
    __cavm_csr_fatal("XCPX_MRML_WINX_ADDR", 2, a, b, 0, 0, 0, 0);
}

#define typedef_CAVM_XCPX_MRML_WINX_ADDR(a,b) cavm_xcpx_mrml_winx_addr_t
#define bustype_CAVM_XCPX_MRML_WINX_ADDR(a,b) CSR_TYPE_NCB32b
#define basename_CAVM_XCPX_MRML_WINX_ADDR(a,b) "XCPX_MRML_WINX_ADDR"
#define device_bar_CAVM_XCPX_MRML_WINX_ADDR(a,b) 0x0 /* PF_BAR0 */
#define busnum_CAVM_XCPX_MRML_WINX_ADDR(a,b) (a)
#define arguments_CAVM_XCPX_MRML_WINX_ADDR(a,b) (a),(b),-1,-1

/**
 * Register (NCB32b) xcp#_mrml_win#_cfg
 *
 * XCP RML Window Configuration Register
 * This register contains the control bits for the XCP core RML access windows.
 *
 * This register is only accessible to the requestor(s) permitted with CPC_XCP()_PERMIT.
 *
 * This register is reset on XCP domain reset.
 */
union cavm_xcpx_mrml_winx_cfg
{
    uint32_t u;
    struct cavm_xcpx_mrml_winx_cfg_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t reserved_6_31         : 26;
        uint32_t b64                   : 1;  /**< [  5:  5](R/W) 64-bit window. Specifies if the window access size.
                                                                 0 = 32 bit.
                                                                 1 = 64 bit.
                                                                 When using this mode to make a 64-bit access, the first 32-bit request must
                                                                 be aligned to the 64-bit boundary
                                                                 (PA\<2\>=0), followed by the odd word access (PA\<2\>=1) */
        uint32_t secure                : 2;  /**< [  4:  3](R/W) Secure-world transaction.
                                                                 0 = Nonsecure world for RML transactions.
                                                                 1 = Secure world for RML transactions.
                                                                 2 = Keep Security world for RML transactions - same as driven by CM7 CPU.
                                                                 3 = Reserved. */
        uint32_t reserved_0_2          : 3;
#else /* Word 0 - Little Endian */
        uint32_t reserved_0_2          : 3;
        uint32_t secure                : 2;  /**< [  4:  3](R/W) Secure-world transaction.
                                                                 0 = Nonsecure world for RML transactions.
                                                                 1 = Secure world for RML transactions.
                                                                 2 = Keep Security world for RML transactions - same as driven by CM7 CPU.
                                                                 3 = Reserved. */
        uint32_t b64                   : 1;  /**< [  5:  5](R/W) 64-bit window. Specifies if the window access size.
                                                                 0 = 32 bit.
                                                                 1 = 64 bit.
                                                                 When using this mode to make a 64-bit access, the first 32-bit request must
                                                                 be aligned to the 64-bit boundary
                                                                 (PA\<2\>=0), followed by the odd word access (PA\<2\>=1) */
        uint32_t reserved_6_31         : 26;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_xcpx_mrml_winx_cfg_s cn; */
};
typedef union cavm_xcpx_mrml_winx_cfg cavm_xcpx_mrml_winx_cfg_t;

static inline uint64_t CAVM_XCPX_MRML_WINX_CFG(uint64_t a, uint64_t b) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_XCPX_MRML_WINX_CFG(uint64_t a, uint64_t b)
{
    if (cavm_is_model(OCTEONTX_CN20KA) && ((a<=3) && (b<=7)))
        return 0x820000000700ll + 0x1000000000ll * ((a) & 0x3) + 0x10ll * ((b) & 0x7);
    __cavm_csr_fatal("XCPX_MRML_WINX_CFG", 2, a, b, 0, 0, 0, 0);
}

#define typedef_CAVM_XCPX_MRML_WINX_CFG(a,b) cavm_xcpx_mrml_winx_cfg_t
#define bustype_CAVM_XCPX_MRML_WINX_CFG(a,b) CSR_TYPE_NCB32b
#define basename_CAVM_XCPX_MRML_WINX_CFG(a,b) "XCPX_MRML_WINX_CFG"
#define device_bar_CAVM_XCPX_MRML_WINX_CFG(a,b) 0x0 /* PF_BAR0 */
#define busnum_CAVM_XCPX_MRML_WINX_CFG(a,b) (a)
#define arguments_CAVM_XCPX_MRML_WINX_CFG(a,b) (a),(b),-1,-1

/**
 * Register (NCB) xcp#_msix_pba#
 *
 * XCP MSI-X Pending Bit Array Registers
 * This register is the MSI-X PBA table; the bit number is indexed by the XCP_INT_VEC_E enumeration.
 *
 * This register is reset on XCP domain reset.
 */
union cavm_xcpx_msix_pbax
{
    uint64_t u;
    struct cavm_xcpx_msix_pbax_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t pend                  : 64; /**< [ 63:  0](RO/H) Pending message for the associated XCP()_MSIX_VEC()_CTL, enumerated by XCP_INT_VEC_E. Bits
                                                                 that have no associated XCP_INT_VEC_E are 0. */
#else /* Word 0 - Little Endian */
        uint64_t pend                  : 64; /**< [ 63:  0](RO/H) Pending message for the associated XCP()_MSIX_VEC()_CTL, enumerated by XCP_INT_VEC_E. Bits
                                                                 that have no associated XCP_INT_VEC_E are 0. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_xcpx_msix_pbax_s cn; */
};
typedef union cavm_xcpx_msix_pbax cavm_xcpx_msix_pbax_t;

static inline uint64_t CAVM_XCPX_MSIX_PBAX(uint64_t a, uint64_t b) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_XCPX_MSIX_PBAX(uint64_t a, uint64_t b)
{
    if (cavm_is_model(OCTEONTX_CN20KA) && ((a<=3) && (b==0)))
        return 0x8200001f0000ll + 0x1000000000ll * ((a) & 0x3) + 8ll * ((b) & 0x0);
    __cavm_csr_fatal("XCPX_MSIX_PBAX", 2, a, b, 0, 0, 0, 0);
}

#define typedef_CAVM_XCPX_MSIX_PBAX(a,b) cavm_xcpx_msix_pbax_t
#define bustype_CAVM_XCPX_MSIX_PBAX(a,b) CSR_TYPE_NCB
#define basename_CAVM_XCPX_MSIX_PBAX(a,b) "XCPX_MSIX_PBAX"
#define device_bar_CAVM_XCPX_MSIX_PBAX(a,b) 0x4 /* PF_BAR4 */
#define busnum_CAVM_XCPX_MSIX_PBAX(a,b) (a)
#define arguments_CAVM_XCPX_MSIX_PBAX(a,b) (a),(b),-1,-1

/**
 * Register (NCB) xcp#_msix_vec#_addr
 *
 * XCP MSI-X Vector-Table Address Register
 * This register is the MSI-X vector table, indexed by the XCP_INT_VEC_E enumeration.
 *
 * This register is reset on XCP domain reset.
 */
union cavm_xcpx_msix_vecx_addr
{
    uint64_t u;
    struct cavm_xcpx_msix_vecx_addr_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_53_63        : 11;
        uint64_t addr                  : 51; /**< [ 52:  2](R/W) IOVA to use for MSI-X delivery of this vector. */
        uint64_t reserved_1            : 1;
        uint64_t secvec                : 1;  /**< [  0:  0](SR/W) Secure vector.
                                                                 0 = This vector may be read or written by either secure or nonsecure states.
                                                                 The vector's IOVA is sent to the SMMU as nonsecure (though this only affects
                                                                 physical addresses if PCCPF_XXX_VSEC_SCTL[MSIX_PHYS]=1).

                                                                 1 = This vector's XCP()_MSIX_VEC()_ADDR, XCP()_MSIX_VEC()_CTL, and corresponding
                                                                 bit of XCP()_MSIX_PBA() are RAZ/WI and does not cause a fault when accessed
                                                                 by the nonsecure world.
                                                                 The vector's IOVA is sent to the SMMU as secure (though this only affects
                                                                 physical addresses if PCCPF_XXX_VSEC_SCTL[MSIX_PHYS]=1 or
                                                                 PCCPF_XXX_VSEC_SCTL[MSIX_SEC_PHYS]=1).

                                                                 If PCCPF_XCP_VSEC_SCTL[MSIX_SEC] (for documentation, see PCCPF_XXX_VSEC_SCTL[MSIX_SEC]) is
                                                                 set, all vectors are secure and function as if [SECVEC] was set.

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

                                                                 1 = This vector's XCP()_MSIX_VEC()_ADDR, XCP()_MSIX_VEC()_CTL, and corresponding
                                                                 bit of XCP()_MSIX_PBA() are RAZ/WI and does not cause a fault when accessed
                                                                 by the nonsecure world.
                                                                 The vector's IOVA is sent to the SMMU as secure (though this only affects
                                                                 physical addresses if PCCPF_XXX_VSEC_SCTL[MSIX_PHYS]=1 or
                                                                 PCCPF_XXX_VSEC_SCTL[MSIX_SEC_PHYS]=1).

                                                                 If PCCPF_XCP_VSEC_SCTL[MSIX_SEC] (for documentation, see PCCPF_XXX_VSEC_SCTL[MSIX_SEC]) is
                                                                 set, all vectors are secure and function as if [SECVEC] was set.

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
    /* struct cavm_xcpx_msix_vecx_addr_s cn; */
};
typedef union cavm_xcpx_msix_vecx_addr cavm_xcpx_msix_vecx_addr_t;

static inline uint64_t CAVM_XCPX_MSIX_VECX_ADDR(uint64_t a, uint64_t b) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_XCPX_MSIX_VECX_ADDR(uint64_t a, uint64_t b)
{
    if (cavm_is_model(OCTEONTX_CN20KA) && ((a<=3) && (b<=55)))
        return 0x820000100000ll + 0x1000000000ll * ((a) & 0x3) + 0x10ll * ((b) & 0x3f);
    __cavm_csr_fatal("XCPX_MSIX_VECX_ADDR", 2, a, b, 0, 0, 0, 0);
}

#define typedef_CAVM_XCPX_MSIX_VECX_ADDR(a,b) cavm_xcpx_msix_vecx_addr_t
#define bustype_CAVM_XCPX_MSIX_VECX_ADDR(a,b) CSR_TYPE_NCB
#define basename_CAVM_XCPX_MSIX_VECX_ADDR(a,b) "XCPX_MSIX_VECX_ADDR"
#define device_bar_CAVM_XCPX_MSIX_VECX_ADDR(a,b) 0x4 /* PF_BAR4 */
#define busnum_CAVM_XCPX_MSIX_VECX_ADDR(a,b) (a)
#define arguments_CAVM_XCPX_MSIX_VECX_ADDR(a,b) (a),(b),-1,-1

/**
 * Register (NCB) xcp#_msix_vec#_ctl
 *
 * XCP MSI-X Vector-Table Control and Data Register
 * This register is the MSI-X vector table, indexed by the XCP_INT_VEC_E enumeration
 *
 * This register is reset on XCP domain reset.
 */
union cavm_xcpx_msix_vecx_ctl
{
    uint64_t u;
    struct cavm_xcpx_msix_vecx_ctl_s
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
    /* struct cavm_xcpx_msix_vecx_ctl_s cn; */
};
typedef union cavm_xcpx_msix_vecx_ctl cavm_xcpx_msix_vecx_ctl_t;

static inline uint64_t CAVM_XCPX_MSIX_VECX_CTL(uint64_t a, uint64_t b) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_XCPX_MSIX_VECX_CTL(uint64_t a, uint64_t b)
{
    if (cavm_is_model(OCTEONTX_CN20KA) && ((a<=3) && (b<=55)))
        return 0x820000100008ll + 0x1000000000ll * ((a) & 0x3) + 0x10ll * ((b) & 0x3f);
    __cavm_csr_fatal("XCPX_MSIX_VECX_CTL", 2, a, b, 0, 0, 0, 0);
}

#define typedef_CAVM_XCPX_MSIX_VECX_CTL(a,b) cavm_xcpx_msix_vecx_ctl_t
#define bustype_CAVM_XCPX_MSIX_VECX_CTL(a,b) CSR_TYPE_NCB
#define basename_CAVM_XCPX_MSIX_VECX_CTL(a,b) "XCPX_MSIX_VECX_CTL"
#define device_bar_CAVM_XCPX_MSIX_VECX_CTL(a,b) 0x4 /* PF_BAR4 */
#define busnum_CAVM_XCPX_MSIX_VECX_CTL(a,b) (a)
#define arguments_CAVM_XCPX_MSIX_VECX_CTL(a,b) (a),(b),-1,-1

/**
 * Register (NCB32b) xcp#_ncb_64rd
 *
 * XCP NCB 64-bit Read Save/Restore Register
 * This register is only accessible to the requestor(s) permitted with CPC_XCP()_PERMIT.
 *
 * This register is reset on XCP domain reset.
 */
union cavm_xcpx_ncb_64rd
{
    uint32_t u;
    struct cavm_xcpx_ncb_64rd_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t rd_data               : 32; /**< [ 31:  0](R/W/H) On a read, will return the saved upper 32-bits for the last 64-bit MRML read request.
                                                                 Writing this register will overwrite the value used by the NCB on a read to the upper
                                                                 32-bits in a 64-bit NCB window. Used to save/restore this value. */
#else /* Word 0 - Little Endian */
        uint32_t rd_data               : 32; /**< [ 31:  0](R/W/H) On a read, will return the saved upper 32-bits for the last 64-bit MRML read request.
                                                                 Writing this register will overwrite the value used by the NCB on a read to the upper
                                                                 32-bits in a 64-bit NCB window. Used to save/restore this value. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_xcpx_ncb_64rd_s cn; */
};
typedef union cavm_xcpx_ncb_64rd cavm_xcpx_ncb_64rd_t;

static inline uint64_t CAVM_XCPX_NCB_64RD(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_XCPX_NCB_64RD(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CN20KA) && (a<=3))
        return 0x820000000140ll + 0x1000000000ll * ((a) & 0x3);
    __cavm_csr_fatal("XCPX_NCB_64RD", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_XCPX_NCB_64RD(a) cavm_xcpx_ncb_64rd_t
#define bustype_CAVM_XCPX_NCB_64RD(a) CSR_TYPE_NCB32b
#define basename_CAVM_XCPX_NCB_64RD(a) "XCPX_NCB_64RD"
#define device_bar_CAVM_XCPX_NCB_64RD(a) 0x0 /* PF_BAR0 */
#define busnum_CAVM_XCPX_NCB_64RD(a) (a)
#define arguments_CAVM_XCPX_NCB_64RD(a) (a),-1,-1,-1

/**
 * Register (NCB32b) xcp#_ncb_win#_addr
 *
 * XCP NCB Window Address Register
 * This register contains the upper address bits for the XCP core NCB access windows.
 *
 * This register is only accessible to the requestor(s) permitted with CPC_XCP()_PERMIT.
 *
 * This register is reset on XCP domain reset.
 *
 * The windows should not have overlapping address spaces if caching is enabled.
 */
union cavm_xcpx_ncb_winx_addr
{
    uint32_t u;
    struct cavm_xcpx_ncb_winx_addr_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t reserved_29_31        : 3;
        uint32_t addr                  : 29; /**< [ 28:  0](R/W) IOVA bits 52:24. */
#else /* Word 0 - Little Endian */
        uint32_t addr                  : 29; /**< [ 28:  0](R/W) IOVA bits 52:24. */
        uint32_t reserved_29_31        : 3;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_xcpx_ncb_winx_addr_s cn; */
};
typedef union cavm_xcpx_ncb_winx_addr cavm_xcpx_ncb_winx_addr_t;

static inline uint64_t CAVM_XCPX_NCB_WINX_ADDR(uint64_t a, uint64_t b) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_XCPX_NCB_WINX_ADDR(uint64_t a, uint64_t b)
{
    if (cavm_is_model(OCTEONTX_CN20KA) && ((a<=3) && (b<=7)))
        return 0x820000000400ll + 0x1000000000ll * ((a) & 0x3) + 0x10ll * ((b) & 0x7);
    __cavm_csr_fatal("XCPX_NCB_WINX_ADDR", 2, a, b, 0, 0, 0, 0);
}

#define typedef_CAVM_XCPX_NCB_WINX_ADDR(a,b) cavm_xcpx_ncb_winx_addr_t
#define bustype_CAVM_XCPX_NCB_WINX_ADDR(a,b) CSR_TYPE_NCB32b
#define basename_CAVM_XCPX_NCB_WINX_ADDR(a,b) "XCPX_NCB_WINX_ADDR"
#define device_bar_CAVM_XCPX_NCB_WINX_ADDR(a,b) 0x0 /* PF_BAR0 */
#define busnum_CAVM_XCPX_NCB_WINX_ADDR(a,b) (a)
#define arguments_CAVM_XCPX_NCB_WINX_ADDR(a,b) (a),(b),-1,-1

/**
 * Register (NCB32b) xcp#_ncb_win#_cfg
 *
 * XCP NCB Window Configuration Register
 * This register contains the control bits for the XCP core NCB access windows.
 *
 * This register is only accessible to the requestor(s) permitted with CPC_XCP()_PERMIT.
 *
 * This register is reset on XCP domain reset.
 */
union cavm_xcpx_ncb_winx_cfg
{
    uint32_t u;
    struct cavm_xcpx_ncb_winx_cfg_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t reserved_6_31         : 26;
        uint32_t b64                   : 1;  /**< [  5:  5](R/W) 64-bit window. Specifies if the window access size.
                                                                 64-bit supported only for address region that configured as Device or Strongly-
                                                                 Order memory type in CM7's MPU.
                                                                 0 = 32 bit.
                                                                 1 = 64 bit.
                                                                 When using this mode to make a 64-bit access, the first 32-bit request must
                                                                 be aligned to the 64-bit boundary
                                                                 (PA\<2\>=0), followed by the odd word access (PA\<2\>=1) */
        uint32_t secure                : 2;  /**< [  4:  3](R/W) Secure-world transaction.
                                                                 0 = Nonsecure world for NCB transactions.
                                                                 1 = Secure world for NCB transactions.
                                                                 2 = Keep Security world for NCB transactions - same as driven by CM7 CPU.
                                                                 3 = Reserved. */
        uint32_t phys                  : 1;  /**< [  2:  2](R/W) Physical address.
                                                                 0 = Virtual address. NCB IOVAs will be translated by the SMMU.
                                                                 1 = Physical address. NCB IOVAs bypass SMMU translation, and IOVA \<52\> is ignored. */
        uint32_t cacheable             : 2;  /**< [  1:  0](R/W) Cacheable.
                                                                   0 = Not cachable.
                                                                   1 = Cachable.
                                                                   2 = Keep same as driven by CM7 CPU.
                                                                   3 = Reserved. */
#else /* Word 0 - Little Endian */
        uint32_t cacheable             : 2;  /**< [  1:  0](R/W) Cacheable.
                                                                   0 = Not cachable.
                                                                   1 = Cachable.
                                                                   2 = Keep same as driven by CM7 CPU.
                                                                   3 = Reserved. */
        uint32_t phys                  : 1;  /**< [  2:  2](R/W) Physical address.
                                                                 0 = Virtual address. NCB IOVAs will be translated by the SMMU.
                                                                 1 = Physical address. NCB IOVAs bypass SMMU translation, and IOVA \<52\> is ignored. */
        uint32_t secure                : 2;  /**< [  4:  3](R/W) Secure-world transaction.
                                                                 0 = Nonsecure world for NCB transactions.
                                                                 1 = Secure world for NCB transactions.
                                                                 2 = Keep Security world for NCB transactions - same as driven by CM7 CPU.
                                                                 3 = Reserved. */
        uint32_t b64                   : 1;  /**< [  5:  5](R/W) 64-bit window. Specifies if the window access size.
                                                                 64-bit supported only for address region that configured as Device or Strongly-
                                                                 Order memory type in CM7's MPU.
                                                                 0 = 32 bit.
                                                                 1 = 64 bit.
                                                                 When using this mode to make a 64-bit access, the first 32-bit request must
                                                                 be aligned to the 64-bit boundary
                                                                 (PA\<2\>=0), followed by the odd word access (PA\<2\>=1) */
        uint32_t reserved_6_31         : 26;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_xcpx_ncb_winx_cfg_s cn; */
};
typedef union cavm_xcpx_ncb_winx_cfg cavm_xcpx_ncb_winx_cfg_t;

static inline uint64_t CAVM_XCPX_NCB_WINX_CFG(uint64_t a, uint64_t b) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_XCPX_NCB_WINX_CFG(uint64_t a, uint64_t b)
{
    if (cavm_is_model(OCTEONTX_CN20KA) && ((a<=3) && (b<=7)))
        return 0x820000000300ll + 0x1000000000ll * ((a) & 0x3) + 0x10ll * ((b) & 0x7);
    __cavm_csr_fatal("XCPX_NCB_WINX_CFG", 2, a, b, 0, 0, 0, 0);
}

#define typedef_CAVM_XCPX_NCB_WINX_CFG(a,b) cavm_xcpx_ncb_winx_cfg_t
#define bustype_CAVM_XCPX_NCB_WINX_CFG(a,b) CSR_TYPE_NCB32b
#define basename_CAVM_XCPX_NCB_WINX_CFG(a,b) "XCPX_NCB_WINX_CFG"
#define device_bar_CAVM_XCPX_NCB_WINX_CFG(a,b) 0x0 /* PF_BAR0 */
#define busnum_CAVM_XCPX_NCB_WINX_CFG(a,b) (a)
#define arguments_CAVM_XCPX_NCB_WINX_CFG(a,b) (a),(b),-1,-1

/**
 * Register (NCB32b) xcp#_precise_bus_err_addr
 *
 * XCP Precise Bus Error Address Register
 * This register contains the address of the precise data bus interface error for XCP.
 *
 * This register is reset on XCP domain reset.
 */
union cavm_xcpx_precise_bus_err_addr
{
    uint32_t u;
    struct cavm_xcpx_precise_bus_err_addr_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t addr                  : 32; /**< [ 31:  0](RO/H) Precise bus error address. Unpredictable unless XCP()_PRECISE_BUS_ERR_STATUS[VAL] is set. */
#else /* Word 0 - Little Endian */
        uint32_t addr                  : 32; /**< [ 31:  0](RO/H) Precise bus error address. Unpredictable unless XCP()_PRECISE_BUS_ERR_STATUS[VAL] is set. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_xcpx_precise_bus_err_addr_s cn; */
};
typedef union cavm_xcpx_precise_bus_err_addr cavm_xcpx_precise_bus_err_addr_t;

static inline uint64_t CAVM_XCPX_PRECISE_BUS_ERR_ADDR(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_XCPX_PRECISE_BUS_ERR_ADDR(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CN20KA) && (a<=3))
        return 0x820000001d00ll + 0x1000000000ll * ((a) & 0x3);
    __cavm_csr_fatal("XCPX_PRECISE_BUS_ERR_ADDR", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_XCPX_PRECISE_BUS_ERR_ADDR(a) cavm_xcpx_precise_bus_err_addr_t
#define bustype_CAVM_XCPX_PRECISE_BUS_ERR_ADDR(a) CSR_TYPE_NCB32b
#define basename_CAVM_XCPX_PRECISE_BUS_ERR_ADDR(a) "XCPX_PRECISE_BUS_ERR_ADDR"
#define device_bar_CAVM_XCPX_PRECISE_BUS_ERR_ADDR(a) 0x0 /* PF_BAR0 */
#define busnum_CAVM_XCPX_PRECISE_BUS_ERR_ADDR(a) (a)
#define arguments_CAVM_XCPX_PRECISE_BUS_ERR_ADDR(a) (a),-1,-1,-1

/**
 * Register (NCB32b) xcp#_precise_bus_err_status
 *
 * XCP Precise Bus Error Status Register
 * This register contains the state of the precise data bus interface error for XCP.
 *
 * This register is reset on XCP domain reset.
 */
union cavm_xcpx_precise_bus_err_status
{
    uint32_t u;
    struct cavm_xcpx_precise_bus_err_status_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t reserved_7_31         : 25;
        uint32_t val                   : 1;  /**< [  6:  6](R/W1C/H) Error valid. When set, subsequent bus errors are not recorded in
                                                                 XCP()_PRECISE_BUS_ERR_ADDR and XCP()_PRECISE_BUS_ERR_STATUS. */
        uint32_t err_type              : 3;  /**< [  5:  3](RO/H) Precise bus error type. Enumerated by XCP_DINTF_ERR_TYPE_E. */
        uint32_t part                  : 3;  /**< [  2:  0](RO/H) Partition in which the bus error occurred. Enumerated by XCP_ADDR_PRT_E. */
#else /* Word 0 - Little Endian */
        uint32_t part                  : 3;  /**< [  2:  0](RO/H) Partition in which the bus error occurred. Enumerated by XCP_ADDR_PRT_E. */
        uint32_t err_type              : 3;  /**< [  5:  3](RO/H) Precise bus error type. Enumerated by XCP_DINTF_ERR_TYPE_E. */
        uint32_t val                   : 1;  /**< [  6:  6](R/W1C/H) Error valid. When set, subsequent bus errors are not recorded in
                                                                 XCP()_PRECISE_BUS_ERR_ADDR and XCP()_PRECISE_BUS_ERR_STATUS. */
        uint32_t reserved_7_31         : 25;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_xcpx_precise_bus_err_status_s cn; */
};
typedef union cavm_xcpx_precise_bus_err_status cavm_xcpx_precise_bus_err_status_t;

static inline uint64_t CAVM_XCPX_PRECISE_BUS_ERR_STATUS(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_XCPX_PRECISE_BUS_ERR_STATUS(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CN20KA) && (a<=3))
        return 0x820000001d08ll + 0x1000000000ll * ((a) & 0x3);
    __cavm_csr_fatal("XCPX_PRECISE_BUS_ERR_STATUS", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_XCPX_PRECISE_BUS_ERR_STATUS(a) cavm_xcpx_precise_bus_err_status_t
#define bustype_CAVM_XCPX_PRECISE_BUS_ERR_STATUS(a) CSR_TYPE_NCB32b
#define basename_CAVM_XCPX_PRECISE_BUS_ERR_STATUS(a) "XCPX_PRECISE_BUS_ERR_STATUS"
#define device_bar_CAVM_XCPX_PRECISE_BUS_ERR_STATUS(a) 0x0 /* PF_BAR0 */
#define busnum_CAVM_XCPX_PRECISE_BUS_ERR_STATUS(a) (a)
#define arguments_CAVM_XCPX_PRECISE_BUS_ERR_STATUS(a) (a),-1,-1,-1

/**
 * Register (NCB32b) xcp#_ram_win#
 *
 * XCP RAM Window Register
 * This register contains the base address and size for the XCP core access windows to CPC RAM.
 *
 * This register is only accessible to the requestor(s) permitted with CPC_XCP()_PERMIT.
 *
 * This register is reset on XCP domain reset.
 */
union cavm_xcpx_ram_winx
{
    uint32_t u;
    struct cavm_xcpx_ram_winx_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t reserved_14_31        : 18;
        uint32_t size                  : 6;  /**< [ 13:  8](R/W) Size of segment in number of 64 KB blocks. */
        uint32_t reserved_6_7          : 2;
        uint32_t base                  : 6;  /**< [  5:  0](R/W) CPC RAM base address for this window. */
#else /* Word 0 - Little Endian */
        uint32_t base                  : 6;  /**< [  5:  0](R/W) CPC RAM base address for this window. */
        uint32_t reserved_6_7          : 2;
        uint32_t size                  : 6;  /**< [ 13:  8](R/W) Size of segment in number of 64 KB blocks. */
        uint32_t reserved_14_31        : 18;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_xcpx_ram_winx_s cn; */
};
typedef union cavm_xcpx_ram_winx cavm_xcpx_ram_winx_t;

static inline uint64_t CAVM_XCPX_RAM_WINX(uint64_t a, uint64_t b) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_XCPX_RAM_WINX(uint64_t a, uint64_t b)
{
    if (cavm_is_model(OCTEONTX_CN20KA) && ((a<=3) && (b<=3)))
        return 0x820000000600ll + 0x1000000000ll * ((a) & 0x3) + 0x10ll * ((b) & 0x3);
    __cavm_csr_fatal("XCPX_RAM_WINX", 2, a, b, 0, 0, 0, 0);
}

#define typedef_CAVM_XCPX_RAM_WINX(a,b) cavm_xcpx_ram_winx_t
#define bustype_CAVM_XCPX_RAM_WINX(a,b) CSR_TYPE_NCB32b
#define basename_CAVM_XCPX_RAM_WINX(a,b) "XCPX_RAM_WINX"
#define device_bar_CAVM_XCPX_RAM_WINX(a,b) 0x0 /* PF_BAR0 */
#define busnum_CAVM_XCPX_RAM_WINX(a,b) (a)
#define arguments_CAVM_XCPX_RAM_WINX(a,b) (a),(b),-1,-1

/**
 * Register (NCB32b) xcp#_status
 *
 * XCP Status Register
 * This register contains the status bits for XCP.
 *
 * This register is only accessible to the requestor(s) permitted with CPC_XCP()_PERMIT.
 *
 * This register is reset on XCP domain reset.
 */
union cavm_xcpx_status
{
    uint32_t u;
    struct cavm_xcpx_status_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t reserved_2_31         : 30;
        uint32_t wrap_err              : 1;  /**< [  1:  1](RO/H) Indicaiton of wrapper handler error.
                                                                 More than 1 outstanding per ID, or internal FIFO overflow. */
        uint32_t lock_up               : 1;  /**< [  0:  0](RO/H) CM7 indication of Lockup state. */
#else /* Word 0 - Little Endian */
        uint32_t lock_up               : 1;  /**< [  0:  0](RO/H) CM7 indication of Lockup state. */
        uint32_t wrap_err              : 1;  /**< [  1:  1](RO/H) Indicaiton of wrapper handler error.
                                                                 More than 1 outstanding per ID, or internal FIFO overflow. */
        uint32_t reserved_2_31         : 30;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_xcpx_status_s cn; */
};
typedef union cavm_xcpx_status cavm_xcpx_status_t;

static inline uint64_t CAVM_XCPX_STATUS(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_XCPX_STATUS(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CN20KA) && (a<=3))
        return 0x820000000210ll + 0x1000000000ll * ((a) & 0x3);
    __cavm_csr_fatal("XCPX_STATUS", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_XCPX_STATUS(a) cavm_xcpx_status_t
#define bustype_CAVM_XCPX_STATUS(a) CSR_TYPE_NCB32b
#define basename_CAVM_XCPX_STATUS(a) "XCPX_STATUS"
#define device_bar_CAVM_XCPX_STATUS(a) 0x0 /* PF_BAR0 */
#define busnum_CAVM_XCPX_STATUS(a) (a)
#define arguments_CAVM_XCPX_STATUS(a) (a),-1,-1,-1

/**
 * Register (NCB32b) xcp#_stcalib
 *
 * XCP CM7 STCALIB Configuration Register
 * This register contains the configuration bits for the CM7 STCALIB input port.
 *
 * This register is only accessible to the requestor(s) permitted with CPC_XCP()_PERMIT.
 *
 * This register is reset on XCP domain reset.
 */
union cavm_xcpx_stcalib
{
    uint32_t u;
    struct cavm_xcpx_stcalib_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t reserved_26_31        : 6;
        uint32_t stcalib               : 26; /**< [ 25:  0](R/W) CM7 SysTick timer STCALIB[25:0] input configuration. */
#else /* Word 0 - Little Endian */
        uint32_t stcalib               : 26; /**< [ 25:  0](R/W) CM7 SysTick timer STCALIB[25:0] input configuration. */
        uint32_t reserved_26_31        : 6;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_xcpx_stcalib_s cn; */
};
typedef union cavm_xcpx_stcalib cavm_xcpx_stcalib_t;

static inline uint64_t CAVM_XCPX_STCALIB(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_XCPX_STCALIB(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CN20KA) && (a<=3))
        return 0x820000000240ll + 0x1000000000ll * ((a) & 0x3);
    __cavm_csr_fatal("XCPX_STCALIB", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_XCPX_STCALIB(a) cavm_xcpx_stcalib_t
#define bustype_CAVM_XCPX_STCALIB(a) CSR_TYPE_NCB32b
#define basename_CAVM_XCPX_STCALIB(a) "XCPX_STCALIB"
#define device_bar_CAVM_XCPX_STCALIB(a) 0x0 /* PF_BAR0 */
#define busnum_CAVM_XCPX_STCALIB(a) (a)
#define arguments_CAVM_XCPX_STCALIB(a) (a),-1,-1,-1

/**
 * Register (NCB32b) xcp#_xcp_dev#_mbox
 *
 * XCP XCP-to-AP Mailbox Data Registers
 * This register is the mailbox register for XCP-to-AP core transactions.
 * For AP-to-XCP and XCP-to-XCP interrupts see instead XCP()_DEV()_XCP_MBOX.
 *
 * This register is only accessible to the associated device (based on DEV index by
 * XCP_MBOX_DEV_E) and the requestor(s) permitted with CPC_XCP()_PERMIT.
 */
union cavm_xcpx_xcp_devx_mbox
{
    uint32_t u;
    struct cavm_xcpx_xcp_devx_mbox_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t data                  : 32; /**< [ 31:  0](R/W) Communication data from XCP to AP. When written sets XCP()_XCP_DEV()_MBOX_RINT[INTR]. */
#else /* Word 0 - Little Endian */
        uint32_t data                  : 32; /**< [ 31:  0](R/W) Communication data from XCP to AP. When written sets XCP()_XCP_DEV()_MBOX_RINT[INTR]. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_xcpx_xcp_devx_mbox_s cn; */
};
typedef union cavm_xcpx_xcp_devx_mbox cavm_xcpx_xcp_devx_mbox_t;

static inline uint64_t CAVM_XCPX_XCP_DEVX_MBOX(uint64_t a, uint64_t b) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_XCPX_XCP_DEVX_MBOX(uint64_t a, uint64_t b)
{
    if (cavm_is_model(OCTEONTX_CN20KA) && ((a<=3) && (b<=55)))
        return 0x8200000d2000ll + 0x1000000000ll * ((a) & 0x3) + 0x10ll * ((b) & 0x3f);
    __cavm_csr_fatal("XCPX_XCP_DEVX_MBOX", 2, a, b, 0, 0, 0, 0);
}

#define typedef_CAVM_XCPX_XCP_DEVX_MBOX(a,b) cavm_xcpx_xcp_devx_mbox_t
#define bustype_CAVM_XCPX_XCP_DEVX_MBOX(a,b) CSR_TYPE_NCB32b
#define basename_CAVM_XCPX_XCP_DEVX_MBOX(a,b) "XCPX_XCP_DEVX_MBOX"
#define device_bar_CAVM_XCPX_XCP_DEVX_MBOX(a,b) 0x0 /* PF_BAR0 */
#define busnum_CAVM_XCPX_XCP_DEVX_MBOX(a,b) (a)
#define arguments_CAVM_XCPX_XCP_DEVX_MBOX(a,b) (a),(b),-1,-1

/**
 * Register (NCB) xcp#_xcp_dev#_mbox_rint
 *
 * XCP XCP-to-AP Mailbox Interrupt Register
 * This register contains mailbox interrupt for XCP-to-AP core transactions.
 *
 * This register is only accessible to the associated device (based on DEV index by
 * XCP_MBOX_DEV_E) and the requestor(s) permitted with CPC_XCP()_PERMIT.
 *
 * This register is reset on XCP domain reset.
 */
union cavm_xcpx_xcp_devx_mbox_rint
{
    uint64_t u;
    struct cavm_xcpx_xcp_devx_mbox_rint_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_1_63         : 63;
        uint64_t intr                  : 1;  /**< [  0:  0](R/W1C/H) Mailbox interrupt. Set when XCP()_XCP_DEV()_MBOX is written. */
#else /* Word 0 - Little Endian */
        uint64_t intr                  : 1;  /**< [  0:  0](R/W1C/H) Mailbox interrupt. Set when XCP()_XCP_DEV()_MBOX is written. */
        uint64_t reserved_1_63         : 63;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_xcpx_xcp_devx_mbox_rint_s cn; */
};
typedef union cavm_xcpx_xcp_devx_mbox_rint cavm_xcpx_xcp_devx_mbox_rint_t;

static inline uint64_t CAVM_XCPX_XCP_DEVX_MBOX_RINT(uint64_t a, uint64_t b) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_XCPX_XCP_DEVX_MBOX_RINT(uint64_t a, uint64_t b)
{
    if (cavm_is_model(OCTEONTX_CN20KA) && ((a<=3) && (b<=55)))
        return 0x8200000d3000ll + 0x1000000000ll * ((a) & 0x3) + 0x10ll * ((b) & 0x3f);
    __cavm_csr_fatal("XCPX_XCP_DEVX_MBOX_RINT", 2, a, b, 0, 0, 0, 0);
}

#define typedef_CAVM_XCPX_XCP_DEVX_MBOX_RINT(a,b) cavm_xcpx_xcp_devx_mbox_rint_t
#define bustype_CAVM_XCPX_XCP_DEVX_MBOX_RINT(a,b) CSR_TYPE_NCB
#define basename_CAVM_XCPX_XCP_DEVX_MBOX_RINT(a,b) "XCPX_XCP_DEVX_MBOX_RINT"
#define device_bar_CAVM_XCPX_XCP_DEVX_MBOX_RINT(a,b) 0x0 /* PF_BAR0 */
#define busnum_CAVM_XCPX_XCP_DEVX_MBOX_RINT(a,b) (a)
#define arguments_CAVM_XCPX_XCP_DEVX_MBOX_RINT(a,b) (a),(b),-1,-1

/**
 * Register (NCB) xcp#_xcp_dev#_mbox_rint_ena_w1c
 *
 * XCP XCP-to-AP Mailbox Interrupt Enable Clear Register
 * This register clears interrupt enable bits.
 */
union cavm_xcpx_xcp_devx_mbox_rint_ena_w1c
{
    uint64_t u;
    struct cavm_xcpx_xcp_devx_mbox_rint_ena_w1c_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_1_63         : 63;
        uint64_t intr                  : 1;  /**< [  0:  0](R/W1C/H) Reads or clears enable for XCP(0..3)_XCP_DEV(0..55)_MBOX_RINT[INTR]. */
#else /* Word 0 - Little Endian */
        uint64_t intr                  : 1;  /**< [  0:  0](R/W1C/H) Reads or clears enable for XCP(0..3)_XCP_DEV(0..55)_MBOX_RINT[INTR]. */
        uint64_t reserved_1_63         : 63;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_xcpx_xcp_devx_mbox_rint_ena_w1c_s cn; */
};
typedef union cavm_xcpx_xcp_devx_mbox_rint_ena_w1c cavm_xcpx_xcp_devx_mbox_rint_ena_w1c_t;

static inline uint64_t CAVM_XCPX_XCP_DEVX_MBOX_RINT_ENA_W1C(uint64_t a, uint64_t b) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_XCPX_XCP_DEVX_MBOX_RINT_ENA_W1C(uint64_t a, uint64_t b)
{
    if (cavm_is_model(OCTEONTX_CN20KA) && ((a<=3) && (b<=55)))
        return 0x8200000d3c00ll + 0x1000000000ll * ((a) & 0x3) + 0x10ll * ((b) & 0x3f);
    __cavm_csr_fatal("XCPX_XCP_DEVX_MBOX_RINT_ENA_W1C", 2, a, b, 0, 0, 0, 0);
}

#define typedef_CAVM_XCPX_XCP_DEVX_MBOX_RINT_ENA_W1C(a,b) cavm_xcpx_xcp_devx_mbox_rint_ena_w1c_t
#define bustype_CAVM_XCPX_XCP_DEVX_MBOX_RINT_ENA_W1C(a,b) CSR_TYPE_NCB
#define basename_CAVM_XCPX_XCP_DEVX_MBOX_RINT_ENA_W1C(a,b) "XCPX_XCP_DEVX_MBOX_RINT_ENA_W1C"
#define device_bar_CAVM_XCPX_XCP_DEVX_MBOX_RINT_ENA_W1C(a,b) 0x0 /* PF_BAR0 */
#define busnum_CAVM_XCPX_XCP_DEVX_MBOX_RINT_ENA_W1C(a,b) (a)
#define arguments_CAVM_XCPX_XCP_DEVX_MBOX_RINT_ENA_W1C(a,b) (a),(b),-1,-1

/**
 * Register (NCB) xcp#_xcp_dev#_mbox_rint_ena_w1s
 *
 * XCP XCP-to-AP Mailbox Interrupt Enable Set Register
 * This register sets interrupt enable bits.
 */
union cavm_xcpx_xcp_devx_mbox_rint_ena_w1s
{
    uint64_t u;
    struct cavm_xcpx_xcp_devx_mbox_rint_ena_w1s_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_1_63         : 63;
        uint64_t intr                  : 1;  /**< [  0:  0](R/W1S/H) Reads or sets enable for XCP(0..3)_XCP_DEV(0..55)_MBOX_RINT[INTR]. */
#else /* Word 0 - Little Endian */
        uint64_t intr                  : 1;  /**< [  0:  0](R/W1S/H) Reads or sets enable for XCP(0..3)_XCP_DEV(0..55)_MBOX_RINT[INTR]. */
        uint64_t reserved_1_63         : 63;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_xcpx_xcp_devx_mbox_rint_ena_w1s_s cn; */
};
typedef union cavm_xcpx_xcp_devx_mbox_rint_ena_w1s cavm_xcpx_xcp_devx_mbox_rint_ena_w1s_t;

static inline uint64_t CAVM_XCPX_XCP_DEVX_MBOX_RINT_ENA_W1S(uint64_t a, uint64_t b) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_XCPX_XCP_DEVX_MBOX_RINT_ENA_W1S(uint64_t a, uint64_t b)
{
    if (cavm_is_model(OCTEONTX_CN20KA) && ((a<=3) && (b<=55)))
        return 0x8200000d3400ll + 0x1000000000ll * ((a) & 0x3) + 0x10ll * ((b) & 0x3f);
    __cavm_csr_fatal("XCPX_XCP_DEVX_MBOX_RINT_ENA_W1S", 2, a, b, 0, 0, 0, 0);
}

#define typedef_CAVM_XCPX_XCP_DEVX_MBOX_RINT_ENA_W1S(a,b) cavm_xcpx_xcp_devx_mbox_rint_ena_w1s_t
#define bustype_CAVM_XCPX_XCP_DEVX_MBOX_RINT_ENA_W1S(a,b) CSR_TYPE_NCB
#define basename_CAVM_XCPX_XCP_DEVX_MBOX_RINT_ENA_W1S(a,b) "XCPX_XCP_DEVX_MBOX_RINT_ENA_W1S"
#define device_bar_CAVM_XCPX_XCP_DEVX_MBOX_RINT_ENA_W1S(a,b) 0x0 /* PF_BAR0 */
#define busnum_CAVM_XCPX_XCP_DEVX_MBOX_RINT_ENA_W1S(a,b) (a)
#define arguments_CAVM_XCPX_XCP_DEVX_MBOX_RINT_ENA_W1S(a,b) (a),(b),-1,-1

/**
 * Register (NCB) xcp#_xcp_dev#_mbox_rint_w1s
 *
 * XCP XCP-to-AP Mailbox Interrupt Set Register
 * This register sets interrupt bits.
 */
union cavm_xcpx_xcp_devx_mbox_rint_w1s
{
    uint64_t u;
    struct cavm_xcpx_xcp_devx_mbox_rint_w1s_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_1_63         : 63;
        uint64_t intr                  : 1;  /**< [  0:  0](R/W1S/H) Reads or sets XCP(0..3)_XCP_DEV(0..55)_MBOX_RINT[INTR]. */
#else /* Word 0 - Little Endian */
        uint64_t intr                  : 1;  /**< [  0:  0](R/W1S/H) Reads or sets XCP(0..3)_XCP_DEV(0..55)_MBOX_RINT[INTR]. */
        uint64_t reserved_1_63         : 63;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_xcpx_xcp_devx_mbox_rint_w1s_s cn; */
};
typedef union cavm_xcpx_xcp_devx_mbox_rint_w1s cavm_xcpx_xcp_devx_mbox_rint_w1s_t;

static inline uint64_t CAVM_XCPX_XCP_DEVX_MBOX_RINT_W1S(uint64_t a, uint64_t b) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_XCPX_XCP_DEVX_MBOX_RINT_W1S(uint64_t a, uint64_t b)
{
    if (cavm_is_model(OCTEONTX_CN20KA) && ((a<=3) && (b<=55)))
        return 0x8200000d3800ll + 0x1000000000ll * ((a) & 0x3) + 0x10ll * ((b) & 0x3f);
    __cavm_csr_fatal("XCPX_XCP_DEVX_MBOX_RINT_W1S", 2, a, b, 0, 0, 0, 0);
}

#define typedef_CAVM_XCPX_XCP_DEVX_MBOX_RINT_W1S(a,b) cavm_xcpx_xcp_devx_mbox_rint_w1s_t
#define bustype_CAVM_XCPX_XCP_DEVX_MBOX_RINT_W1S(a,b) CSR_TYPE_NCB
#define basename_CAVM_XCPX_XCP_DEVX_MBOX_RINT_W1S(a,b) "XCPX_XCP_DEVX_MBOX_RINT_W1S"
#define device_bar_CAVM_XCPX_XCP_DEVX_MBOX_RINT_W1S(a,b) 0x0 /* PF_BAR0 */
#define busnum_CAVM_XCPX_XCP_DEVX_MBOX_RINT_W1S(a,b) (a)
#define arguments_CAVM_XCPX_XCP_DEVX_MBOX_RINT_W1S(a,b) (a),(b),-1,-1

#endif /* __CAVM_CSRS_XCP_H__ */
