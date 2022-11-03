#ifndef __CAVM_CSRS_CST_CW_CTI_H__
#define __CAVM_CSRS_CST_CW_CTI_H__
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
 * OcteonTX CST_CW_CTI.
 *
 * This file is auto generated. Do not edit.
 *
 */

/**
 * Register (NCB32b) cst_cw#_cti_asicctrl
 *
 * CST Cw Cti Asicctrl Register
 * I/O port control.
 */
union cavm_cst_cwx_cti_asicctrl
{
    uint32_t u;
    struct cavm_cst_cwx_cti_asicctrl_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t sbz_0                 : 24; /**< [ 31:  8](R/W) Software should write the field as all 0s. */
        uint32_t asicctrl              : 8;  /**< [  7:  0](R/W) Set and clear external output signal. */
#else /* Word 0 - Little Endian */
        uint32_t asicctrl              : 8;  /**< [  7:  0](R/W) Set and clear external output signal. */
        uint32_t sbz_0                 : 24; /**< [ 31:  8](R/W) Software should write the field as all 0s. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_cst_cwx_cti_asicctrl_s cn; */
};
typedef union cavm_cst_cwx_cti_asicctrl cavm_cst_cwx_cti_asicctrl_t;

static inline uint64_t CAVM_CST_CWX_CTI_ASICCTRL(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_CST_CWX_CTI_ASICCTRL(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CN10KA) && (a<=23))
        return 0x87a004020144ll + 0x100000ll * ((a) & 0x1f);
    if (cavm_is_model(OCTEONTX_CN10KB) && (a<=7))
        return 0x87a004020144ll + 0x100000ll * ((a) & 0x7);
    if (cavm_is_model(OCTEONTX_CNF10KA) && (a<=17))
        return 0x87a004020144ll + 0x100000ll * ((a) & 0x1f);
    if (cavm_is_model(OCTEONTX_CNF10KB) && (a<=11))
        return 0x87a004020144ll + 0x100000ll * ((a) & 0xf);
    __cavm_csr_fatal("CST_CWX_CTI_ASICCTRL", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_CST_CWX_CTI_ASICCTRL(a) cavm_cst_cwx_cti_asicctrl_t
#define bustype_CAVM_CST_CWX_CTI_ASICCTRL(a) CSR_TYPE_NCB32b
#define basename_CAVM_CST_CWX_CTI_ASICCTRL(a) "CST_CWX_CTI_ASICCTRL"
#define busnum_CAVM_CST_CWX_CTI_ASICCTRL(a) (a)
#define arguments_CAVM_CST_CWX_CTI_ASICCTRL(a) (a),-1,-1,-1

/**
 * Register (NCB32b) cst_cw#_cti_authstatus
 *
 * CST Cw Cti Authstatus Register
 * Reports the current status of the authentication control signals.
 */
union cavm_cst_cwx_cti_authstatus
{
    uint32_t u;
    struct cavm_cst_cwx_cti_authstatus_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t reserved_12_31        : 20;
        uint32_t hnid                  : 2;  /**< [ 11: 10](RO) Hypervisor non-invasive debug. */
        uint32_t hid                   : 2;  /**< [  9:  8](RO) Hypervisor invasive debug. */
        uint32_t snid                  : 2;  /**< [  7:  6](RO) Secure non-invasive debug. */
        uint32_t sid                   : 2;  /**< [  5:  4](RO) Secure invasive debug. */
        uint32_t nsnid                 : 2;  /**< [  3:  2](RO) Non-secure non-invasive debug. */
        uint32_t nsid                  : 2;  /**< [  1:  0](RO) Non-secure invasive debug. */
#else /* Word 0 - Little Endian */
        uint32_t nsid                  : 2;  /**< [  1:  0](RO) Non-secure invasive debug. */
        uint32_t nsnid                 : 2;  /**< [  3:  2](RO) Non-secure non-invasive debug. */
        uint32_t sid                   : 2;  /**< [  5:  4](RO) Secure invasive debug. */
        uint32_t snid                  : 2;  /**< [  7:  6](RO) Secure non-invasive debug. */
        uint32_t hid                   : 2;  /**< [  9:  8](RO) Hypervisor invasive debug. */
        uint32_t hnid                  : 2;  /**< [ 11: 10](RO) Hypervisor non-invasive debug. */
        uint32_t reserved_12_31        : 20;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_cst_cwx_cti_authstatus_s cn; */
};
typedef union cavm_cst_cwx_cti_authstatus cavm_cst_cwx_cti_authstatus_t;

static inline uint64_t CAVM_CST_CWX_CTI_AUTHSTATUS(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_CST_CWX_CTI_AUTHSTATUS(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CN10KA) && (a<=23))
        return 0x87a004020fb8ll + 0x100000ll * ((a) & 0x1f);
    if (cavm_is_model(OCTEONTX_CN10KB) && (a<=7))
        return 0x87a004020fb8ll + 0x100000ll * ((a) & 0x7);
    if (cavm_is_model(OCTEONTX_CNF10KA) && (a<=17))
        return 0x87a004020fb8ll + 0x100000ll * ((a) & 0x1f);
    if (cavm_is_model(OCTEONTX_CNF10KB) && (a<=11))
        return 0x87a004020fb8ll + 0x100000ll * ((a) & 0xf);
    __cavm_csr_fatal("CST_CWX_CTI_AUTHSTATUS", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_CST_CWX_CTI_AUTHSTATUS(a) cavm_cst_cwx_cti_authstatus_t
#define bustype_CAVM_CST_CWX_CTI_AUTHSTATUS(a) CSR_TYPE_NCB32b
#define basename_CAVM_CST_CWX_CTI_AUTHSTATUS(a) "CST_CWX_CTI_AUTHSTATUS"
#define busnum_CAVM_CST_CWX_CTI_AUTHSTATUS(a) (a)
#define arguments_CAVM_CST_CWX_CTI_AUTHSTATUS(a) (a),-1,-1,-1

/**
 * Register (NCB32b) cst_cw#_cti_cidr0
 *
 * CST Cw Cti Cidr0 Register
 * The CIDR0 register is part of the set of component identification registers.
 */
union cavm_cst_cwx_cti_cidr0
{
    uint32_t u;
    struct cavm_cst_cwx_cti_cidr0_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t reserved_8_31         : 24;
        uint32_t prmbl_0               : 8;  /**< [  7:  0](RO) Preamble. Returns 0x0D. */
#else /* Word 0 - Little Endian */
        uint32_t prmbl_0               : 8;  /**< [  7:  0](RO) Preamble. Returns 0x0D. */
        uint32_t reserved_8_31         : 24;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_cst_cwx_cti_cidr0_s cn; */
};
typedef union cavm_cst_cwx_cti_cidr0 cavm_cst_cwx_cti_cidr0_t;

static inline uint64_t CAVM_CST_CWX_CTI_CIDR0(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_CST_CWX_CTI_CIDR0(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CN10KA) && (a<=23))
        return 0x87a004020ff0ll + 0x100000ll * ((a) & 0x1f);
    if (cavm_is_model(OCTEONTX_CN10KB) && (a<=7))
        return 0x87a004020ff0ll + 0x100000ll * ((a) & 0x7);
    if (cavm_is_model(OCTEONTX_CNF10KA) && (a<=17))
        return 0x87a004020ff0ll + 0x100000ll * ((a) & 0x1f);
    if (cavm_is_model(OCTEONTX_CNF10KB) && (a<=11))
        return 0x87a004020ff0ll + 0x100000ll * ((a) & 0xf);
    __cavm_csr_fatal("CST_CWX_CTI_CIDR0", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_CST_CWX_CTI_CIDR0(a) cavm_cst_cwx_cti_cidr0_t
#define bustype_CAVM_CST_CWX_CTI_CIDR0(a) CSR_TYPE_NCB32b
#define basename_CAVM_CST_CWX_CTI_CIDR0(a) "CST_CWX_CTI_CIDR0"
#define busnum_CAVM_CST_CWX_CTI_CIDR0(a) (a)
#define arguments_CAVM_CST_CWX_CTI_CIDR0(a) (a),-1,-1,-1

/**
 * Register (NCB32b) cst_cw#_cti_cidr1
 *
 * CST Cw Cti Cidr1 Register
 * The CIDR1 register is part of the set of component identification registers.
 */
union cavm_cst_cwx_cti_cidr1
{
    uint32_t u;
    struct cavm_cst_cwx_cti_cidr1_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t reserved_8_31         : 24;
        uint32_t class_f               : 4;  /**< [  7:  4](RO) Component class. Returns 0x9, indicating this is a CoreSight component. */
        uint32_t prmbl_1               : 4;  /**< [  3:  0](RO) Preamble. Returns 0x0. */
#else /* Word 0 - Little Endian */
        uint32_t prmbl_1               : 4;  /**< [  3:  0](RO) Preamble. Returns 0x0. */
        uint32_t class_f               : 4;  /**< [  7:  4](RO) Component class. Returns 0x9, indicating this is a CoreSight component. */
        uint32_t reserved_8_31         : 24;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_cst_cwx_cti_cidr1_s cn; */
};
typedef union cavm_cst_cwx_cti_cidr1 cavm_cst_cwx_cti_cidr1_t;

static inline uint64_t CAVM_CST_CWX_CTI_CIDR1(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_CST_CWX_CTI_CIDR1(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CN10KA) && (a<=23))
        return 0x87a004020ff4ll + 0x100000ll * ((a) & 0x1f);
    if (cavm_is_model(OCTEONTX_CN10KB) && (a<=7))
        return 0x87a004020ff4ll + 0x100000ll * ((a) & 0x7);
    if (cavm_is_model(OCTEONTX_CNF10KA) && (a<=17))
        return 0x87a004020ff4ll + 0x100000ll * ((a) & 0x1f);
    if (cavm_is_model(OCTEONTX_CNF10KB) && (a<=11))
        return 0x87a004020ff4ll + 0x100000ll * ((a) & 0xf);
    __cavm_csr_fatal("CST_CWX_CTI_CIDR1", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_CST_CWX_CTI_CIDR1(a) cavm_cst_cwx_cti_cidr1_t
#define bustype_CAVM_CST_CWX_CTI_CIDR1(a) CSR_TYPE_NCB32b
#define basename_CAVM_CST_CWX_CTI_CIDR1(a) "CST_CWX_CTI_CIDR1"
#define busnum_CAVM_CST_CWX_CTI_CIDR1(a) (a)
#define arguments_CAVM_CST_CWX_CTI_CIDR1(a) (a),-1,-1,-1

/**
 * Register (NCB32b) cst_cw#_cti_cidr2
 *
 * CST Cw Cti Cidr2 Register
 * The CIDR2 register is part of the set of component identification registers.
 */
union cavm_cst_cwx_cti_cidr2
{
    uint32_t u;
    struct cavm_cst_cwx_cti_cidr2_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t reserved_8_31         : 24;
        uint32_t prmbl_2               : 8;  /**< [  7:  0](RO) Preamble. Returns 0x05. */
#else /* Word 0 - Little Endian */
        uint32_t prmbl_2               : 8;  /**< [  7:  0](RO) Preamble. Returns 0x05. */
        uint32_t reserved_8_31         : 24;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_cst_cwx_cti_cidr2_s cn; */
};
typedef union cavm_cst_cwx_cti_cidr2 cavm_cst_cwx_cti_cidr2_t;

static inline uint64_t CAVM_CST_CWX_CTI_CIDR2(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_CST_CWX_CTI_CIDR2(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CN10KA) && (a<=23))
        return 0x87a004020ff8ll + 0x100000ll * ((a) & 0x1f);
    if (cavm_is_model(OCTEONTX_CN10KB) && (a<=7))
        return 0x87a004020ff8ll + 0x100000ll * ((a) & 0x7);
    if (cavm_is_model(OCTEONTX_CNF10KA) && (a<=17))
        return 0x87a004020ff8ll + 0x100000ll * ((a) & 0x1f);
    if (cavm_is_model(OCTEONTX_CNF10KB) && (a<=11))
        return 0x87a004020ff8ll + 0x100000ll * ((a) & 0xf);
    __cavm_csr_fatal("CST_CWX_CTI_CIDR2", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_CST_CWX_CTI_CIDR2(a) cavm_cst_cwx_cti_cidr2_t
#define bustype_CAVM_CST_CWX_CTI_CIDR2(a) CSR_TYPE_NCB32b
#define basename_CAVM_CST_CWX_CTI_CIDR2(a) "CST_CWX_CTI_CIDR2"
#define busnum_CAVM_CST_CWX_CTI_CIDR2(a) (a)
#define arguments_CAVM_CST_CWX_CTI_CIDR2(a) (a),-1,-1,-1

/**
 * Register (NCB32b) cst_cw#_cti_cidr3
 *
 * CST Cw Cti Cidr3 Register
 * The CIDR3 register is part of the set of component identification registers.
 */
union cavm_cst_cwx_cti_cidr3
{
    uint32_t u;
    struct cavm_cst_cwx_cti_cidr3_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t reserved_8_31         : 24;
        uint32_t prmbl_3               : 8;  /**< [  7:  0](RO) Preamble. Returns 0xB1. */
#else /* Word 0 - Little Endian */
        uint32_t prmbl_3               : 8;  /**< [  7:  0](RO) Preamble. Returns 0xB1. */
        uint32_t reserved_8_31         : 24;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_cst_cwx_cti_cidr3_s cn; */
};
typedef union cavm_cst_cwx_cti_cidr3 cavm_cst_cwx_cti_cidr3_t;

static inline uint64_t CAVM_CST_CWX_CTI_CIDR3(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_CST_CWX_CTI_CIDR3(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CN10KA) && (a<=23))
        return 0x87a004020ffcll + 0x100000ll * ((a) & 0x1f);
    if (cavm_is_model(OCTEONTX_CN10KB) && (a<=7))
        return 0x87a004020ffcll + 0x100000ll * ((a) & 0x7);
    if (cavm_is_model(OCTEONTX_CNF10KA) && (a<=17))
        return 0x87a004020ffcll + 0x100000ll * ((a) & 0x1f);
    if (cavm_is_model(OCTEONTX_CNF10KB) && (a<=11))
        return 0x87a004020ffcll + 0x100000ll * ((a) & 0xf);
    __cavm_csr_fatal("CST_CWX_CTI_CIDR3", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_CST_CWX_CTI_CIDR3(a) cavm_cst_cwx_cti_cidr3_t
#define bustype_CAVM_CST_CWX_CTI_CIDR3(a) CSR_TYPE_NCB32b
#define basename_CAVM_CST_CWX_CTI_CIDR3(a) "CST_CWX_CTI_CIDR3"
#define busnum_CAVM_CST_CWX_CTI_CIDR3(a) (a)
#define arguments_CAVM_CST_CWX_CTI_CIDR3(a) (a),-1,-1,-1

/**
 * Register (NCB32b) cst_cw#_cti_claimclr
 *
 * CST Cw Cti Claimclr Register
 * This register forms one half of the claim tag value. On writes, this location
 * enables individual bits to be cleared. On reads, it returns the current claim tag
 * value.
 */
union cavm_cst_cwx_cti_claimclr
{
    uint32_t u;
    struct cavm_cst_cwx_cti_claimclr_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t razwi_0               : 28; /**< [ 31:  4](R/W) Read-As-Zero, Writes Ignored. */
        uint32_t clr                   : 4;  /**< [  3:  0](R/W) A bit-programmable register bank that clears the claim tag value. It is zero at
                                                                 reset. It is used by software agents to signal to each other ownership of the
                                                                 hardware. It has no direct effect on the hardware itself. */
#else /* Word 0 - Little Endian */
        uint32_t clr                   : 4;  /**< [  3:  0](R/W) A bit-programmable register bank that clears the claim tag value. It is zero at
                                                                 reset. It is used by software agents to signal to each other ownership of the
                                                                 hardware. It has no direct effect on the hardware itself. */
        uint32_t razwi_0               : 28; /**< [ 31:  4](R/W) Read-As-Zero, Writes Ignored. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_cst_cwx_cti_claimclr_s cn; */
};
typedef union cavm_cst_cwx_cti_claimclr cavm_cst_cwx_cti_claimclr_t;

static inline uint64_t CAVM_CST_CWX_CTI_CLAIMCLR(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_CST_CWX_CTI_CLAIMCLR(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CN10KA) && (a<=23))
        return 0x87a004020fa4ll + 0x100000ll * ((a) & 0x1f);
    if (cavm_is_model(OCTEONTX_CN10KB) && (a<=7))
        return 0x87a004020fa4ll + 0x100000ll * ((a) & 0x7);
    if (cavm_is_model(OCTEONTX_CNF10KA) && (a<=17))
        return 0x87a004020fa4ll + 0x100000ll * ((a) & 0x1f);
    if (cavm_is_model(OCTEONTX_CNF10KB) && (a<=11))
        return 0x87a004020fa4ll + 0x100000ll * ((a) & 0xf);
    __cavm_csr_fatal("CST_CWX_CTI_CLAIMCLR", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_CST_CWX_CTI_CLAIMCLR(a) cavm_cst_cwx_cti_claimclr_t
#define bustype_CAVM_CST_CWX_CTI_CLAIMCLR(a) CSR_TYPE_NCB32b
#define basename_CAVM_CST_CWX_CTI_CLAIMCLR(a) "CST_CWX_CTI_CLAIMCLR"
#define busnum_CAVM_CST_CWX_CTI_CLAIMCLR(a) (a)
#define arguments_CAVM_CST_CWX_CTI_CLAIMCLR(a) (a),-1,-1,-1

/**
 * Register (NCB32b) cst_cw#_cti_claimset
 *
 * CST Cw Cti Claimset Register
 * This register forms one half of the claim tag value. On writes, this location
 * enables individual bits to be set. On reads, it returns the number of bits that can
 * be set.
 */
union cavm_cst_cwx_cti_claimset
{
    uint32_t u;
    struct cavm_cst_cwx_cti_claimset_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t razwi_0               : 28; /**< [ 31:  4](R/W) Read-As-Zero, Writes Ignored. */
        uint32_t set                   : 4;  /**< [  3:  0](R/W) A bit-programmable register bank that sets the claim tag value. A read returns a
                                                                 logic 1 for all implemented locations. */
#else /* Word 0 - Little Endian */
        uint32_t set                   : 4;  /**< [  3:  0](R/W) A bit-programmable register bank that sets the claim tag value. A read returns a
                                                                 logic 1 for all implemented locations. */
        uint32_t razwi_0               : 28; /**< [ 31:  4](R/W) Read-As-Zero, Writes Ignored. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_cst_cwx_cti_claimset_s cn; */
};
typedef union cavm_cst_cwx_cti_claimset cavm_cst_cwx_cti_claimset_t;

static inline uint64_t CAVM_CST_CWX_CTI_CLAIMSET(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_CST_CWX_CTI_CLAIMSET(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CN10KA) && (a<=23))
        return 0x87a004020fa0ll + 0x100000ll * ((a) & 0x1f);
    if (cavm_is_model(OCTEONTX_CN10KB) && (a<=7))
        return 0x87a004020fa0ll + 0x100000ll * ((a) & 0x7);
    if (cavm_is_model(OCTEONTX_CNF10KA) && (a<=17))
        return 0x87a004020fa0ll + 0x100000ll * ((a) & 0x1f);
    if (cavm_is_model(OCTEONTX_CNF10KB) && (a<=11))
        return 0x87a004020fa0ll + 0x100000ll * ((a) & 0xf);
    __cavm_csr_fatal("CST_CWX_CTI_CLAIMSET", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_CST_CWX_CTI_CLAIMSET(a) cavm_cst_cwx_cti_claimset_t
#define bustype_CAVM_CST_CWX_CTI_CLAIMSET(a) CSR_TYPE_NCB32b
#define basename_CAVM_CST_CWX_CTI_CLAIMSET(a) "CST_CWX_CTI_CLAIMSET"
#define busnum_CAVM_CST_CWX_CTI_CLAIMSET(a) (a)
#define arguments_CAVM_CST_CWX_CTI_CLAIMSET(a) (a),-1,-1,-1

/**
 * Register (NCB32b) cst_cw#_cti_ctiappclear
 *
 * CST Cw Cti Ctiappclear Register
 * The application channel clear register allows software to clear any channel output.
 * This register can be used by software to clear a channel event in place of a
 * hardware source on a trigger input. In a system where all events are sent as single
 * cycle pulses, this register must not be used. It is only retained for compatibility
 * with older systems and software. The register is implemented before the CTIGATE
 * register so, for the channel event to propagate outside the CTI, it is necessary for
 * the corresponding CTIGATE bit to be 1.
 */
union cavm_cst_cwx_cti_ctiappclear
{
    uint32_t u;
    struct cavm_cst_cwx_cti_ctiappclear_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t sbz_0                 : 28; /**< [ 31:  4](WO) Software should write the field as all 0s. */
        uint32_t appclear              : 4;  /**< [  3:  0](WO) Clears the corresponding internal channel flag. */
#else /* Word 0 - Little Endian */
        uint32_t appclear              : 4;  /**< [  3:  0](WO) Clears the corresponding internal channel flag. */
        uint32_t sbz_0                 : 28; /**< [ 31:  4](WO) Software should write the field as all 0s. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_cst_cwx_cti_ctiappclear_s cn; */
};
typedef union cavm_cst_cwx_cti_ctiappclear cavm_cst_cwx_cti_ctiappclear_t;

static inline uint64_t CAVM_CST_CWX_CTI_CTIAPPCLEAR(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_CST_CWX_CTI_CTIAPPCLEAR(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CN10KA) && (a<=23))
        return 0x87a004020018ll + 0x100000ll * ((a) & 0x1f);
    if (cavm_is_model(OCTEONTX_CN10KB) && (a<=7))
        return 0x87a004020018ll + 0x100000ll * ((a) & 0x7);
    if (cavm_is_model(OCTEONTX_CNF10KA) && (a<=17))
        return 0x87a004020018ll + 0x100000ll * ((a) & 0x1f);
    if (cavm_is_model(OCTEONTX_CNF10KB) && (a<=11))
        return 0x87a004020018ll + 0x100000ll * ((a) & 0xf);
    __cavm_csr_fatal("CST_CWX_CTI_CTIAPPCLEAR", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_CST_CWX_CTI_CTIAPPCLEAR(a) cavm_cst_cwx_cti_ctiappclear_t
#define bustype_CAVM_CST_CWX_CTI_CTIAPPCLEAR(a) CSR_TYPE_NCB32b
#define basename_CAVM_CST_CWX_CTI_CTIAPPCLEAR(a) "CST_CWX_CTI_CTIAPPCLEAR"
#define busnum_CAVM_CST_CWX_CTI_CTIAPPCLEAR(a) (a)
#define arguments_CAVM_CST_CWX_CTI_CTIAPPCLEAR(a) (a),-1,-1,-1

/**
 * Register (NCB32b) cst_cw#_cti_ctiapppulse
 *
 * CST Cw Cti Ctiapppulse Register
 * The application channel pulse register allows software to pulse any channel output.
 * This register can be used by software to pulse a channel event in place of a
 * hardware source on a trigger input. The register is implemented before the CTIGATE
 * register so, for the channel event to propagate outside the CTI, it is necessary for
 * the corresponding CTIGATE bit to be 1.
 */
union cavm_cst_cwx_cti_ctiapppulse
{
    uint32_t u;
    struct cavm_cst_cwx_cti_ctiapppulse_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t sbz_0                 : 28; /**< [ 31:  4](WO) Software should write the field as all 0s. */
        uint32_t apppulse              : 4;  /**< [  3:  0](WO) Pulses the channel outputs. */
#else /* Word 0 - Little Endian */
        uint32_t apppulse              : 4;  /**< [  3:  0](WO) Pulses the channel outputs. */
        uint32_t sbz_0                 : 28; /**< [ 31:  4](WO) Software should write the field as all 0s. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_cst_cwx_cti_ctiapppulse_s cn; */
};
typedef union cavm_cst_cwx_cti_ctiapppulse cavm_cst_cwx_cti_ctiapppulse_t;

static inline uint64_t CAVM_CST_CWX_CTI_CTIAPPPULSE(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_CST_CWX_CTI_CTIAPPPULSE(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CN10KA) && (a<=23))
        return 0x87a00402001cll + 0x100000ll * ((a) & 0x1f);
    if (cavm_is_model(OCTEONTX_CN10KB) && (a<=7))
        return 0x87a00402001cll + 0x100000ll * ((a) & 0x7);
    if (cavm_is_model(OCTEONTX_CNF10KA) && (a<=17))
        return 0x87a00402001cll + 0x100000ll * ((a) & 0x1f);
    if (cavm_is_model(OCTEONTX_CNF10KB) && (a<=11))
        return 0x87a00402001cll + 0x100000ll * ((a) & 0xf);
    __cavm_csr_fatal("CST_CWX_CTI_CTIAPPPULSE", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_CST_CWX_CTI_CTIAPPPULSE(a) cavm_cst_cwx_cti_ctiapppulse_t
#define bustype_CAVM_CST_CWX_CTI_CTIAPPPULSE(a) CSR_TYPE_NCB32b
#define basename_CAVM_CST_CWX_CTI_CTIAPPPULSE(a) "CST_CWX_CTI_CTIAPPPULSE"
#define busnum_CAVM_CST_CWX_CTI_CTIAPPPULSE(a) (a)
#define arguments_CAVM_CST_CWX_CTI_CTIAPPPULSE(a) (a),-1,-1,-1

/**
 * Register (NCB32b) cst_cw#_cti_ctiappset
 *
 * CST Cw Cti Ctiappset Register
 * The application channel set register allows software to set any channel output. This
 * register can be used by software to generate a channel event in place of a hardware
 * source on a trigger input. In a system where all events are sent as single cycle
 * pulses, this register must not be used. It is only retained for compatibility with
 * older systems and software. The register is implemented before the CTIGATE register
 * so, for the channel event to propagate outside the CTI, it is necessary for the
 * corresponding CTIGATE bit to be 1.
 */
union cavm_cst_cwx_cti_ctiappset
{
    uint32_t u;
    struct cavm_cst_cwx_cti_ctiappset_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t sbz_0                 : 28; /**< [ 31:  4](R/W) Software should write the field as all 0s. */
        uint32_t appset                : 4;  /**< [  3:  0](R/W) Sets the corresponding internal channel flag. */
#else /* Word 0 - Little Endian */
        uint32_t appset                : 4;  /**< [  3:  0](R/W) Sets the corresponding internal channel flag. */
        uint32_t sbz_0                 : 28; /**< [ 31:  4](R/W) Software should write the field as all 0s. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_cst_cwx_cti_ctiappset_s cn; */
};
typedef union cavm_cst_cwx_cti_ctiappset cavm_cst_cwx_cti_ctiappset_t;

static inline uint64_t CAVM_CST_CWX_CTI_CTIAPPSET(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_CST_CWX_CTI_CTIAPPSET(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CN10KA) && (a<=23))
        return 0x87a004020014ll + 0x100000ll * ((a) & 0x1f);
    if (cavm_is_model(OCTEONTX_CN10KB) && (a<=7))
        return 0x87a004020014ll + 0x100000ll * ((a) & 0x7);
    if (cavm_is_model(OCTEONTX_CNF10KA) && (a<=17))
        return 0x87a004020014ll + 0x100000ll * ((a) & 0x1f);
    if (cavm_is_model(OCTEONTX_CNF10KB) && (a<=11))
        return 0x87a004020014ll + 0x100000ll * ((a) & 0xf);
    __cavm_csr_fatal("CST_CWX_CTI_CTIAPPSET", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_CST_CWX_CTI_CTIAPPSET(a) cavm_cst_cwx_cti_ctiappset_t
#define bustype_CAVM_CST_CWX_CTI_CTIAPPSET(a) CSR_TYPE_NCB32b
#define basename_CAVM_CST_CWX_CTI_CTIAPPSET(a) "CST_CWX_CTI_CTIAPPSET"
#define busnum_CAVM_CST_CWX_CTI_CTIAPPSET(a) (a)
#define arguments_CAVM_CST_CWX_CTI_CTIAPPSET(a) (a),-1,-1,-1

/**
 * Register (NCB32b) cst_cw#_cti_ctichinstatus
 *
 * CST Cw Cti Ctichinstatus Register
 * Channel input status. If the channel input is driven by a source that generates
 * single cycle pulses, this register is generally read as 0.
 */
union cavm_cst_cwx_cti_ctichinstatus
{
    uint32_t u;
    struct cavm_cst_cwx_cti_ctichinstatus_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t sbz_0                 : 28; /**< [ 31:  4](RO) Software should write the field as all 0s. */
        uint32_t ctichinstatus         : 4;  /**< [  3:  0](RO) Channel input status. */
#else /* Word 0 - Little Endian */
        uint32_t ctichinstatus         : 4;  /**< [  3:  0](RO) Channel input status. */
        uint32_t sbz_0                 : 28; /**< [ 31:  4](RO) Software should write the field as all 0s. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_cst_cwx_cti_ctichinstatus_s cn; */
};
typedef union cavm_cst_cwx_cti_ctichinstatus cavm_cst_cwx_cti_ctichinstatus_t;

static inline uint64_t CAVM_CST_CWX_CTI_CTICHINSTATUS(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_CST_CWX_CTI_CTICHINSTATUS(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CN10KA) && (a<=23))
        return 0x87a004020138ll + 0x100000ll * ((a) & 0x1f);
    if (cavm_is_model(OCTEONTX_CN10KB) && (a<=7))
        return 0x87a004020138ll + 0x100000ll * ((a) & 0x7);
    if (cavm_is_model(OCTEONTX_CNF10KA) && (a<=17))
        return 0x87a004020138ll + 0x100000ll * ((a) & 0x1f);
    if (cavm_is_model(OCTEONTX_CNF10KB) && (a<=11))
        return 0x87a004020138ll + 0x100000ll * ((a) & 0xf);
    __cavm_csr_fatal("CST_CWX_CTI_CTICHINSTATUS", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_CST_CWX_CTI_CTICHINSTATUS(a) cavm_cst_cwx_cti_ctichinstatus_t
#define bustype_CAVM_CST_CWX_CTI_CTICHINSTATUS(a) CSR_TYPE_NCB32b
#define basename_CAVM_CST_CWX_CTI_CTICHINSTATUS(a) "CST_CWX_CTI_CTICHINSTATUS"
#define busnum_CAVM_CST_CWX_CTI_CTICHINSTATUS(a) (a)
#define arguments_CAVM_CST_CWX_CTI_CTICHINSTATUS(a) (a),-1,-1,-1

/**
 * Register (NCB32b) cst_cw#_cti_ctichoutstatus
 *
 * CST Cw Cti Ctichoutstatus Register
 * Channel output status. The register only has meaning if the trigger source drives
 * static levels, rather than pulses.
 */
union cavm_cst_cwx_cti_ctichoutstatus
{
    uint32_t u;
    struct cavm_cst_cwx_cti_ctichoutstatus_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t sbz_0                 : 28; /**< [ 31:  4](RO) Software should write the field as all 0s. */
        uint32_t ctichoutstatus        : 4;  /**< [  3:  0](RO) Channel output status. */
#else /* Word 0 - Little Endian */
        uint32_t ctichoutstatus        : 4;  /**< [  3:  0](RO) Channel output status. */
        uint32_t sbz_0                 : 28; /**< [ 31:  4](RO) Software should write the field as all 0s. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_cst_cwx_cti_ctichoutstatus_s cn; */
};
typedef union cavm_cst_cwx_cti_ctichoutstatus cavm_cst_cwx_cti_ctichoutstatus_t;

static inline uint64_t CAVM_CST_CWX_CTI_CTICHOUTSTATUS(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_CST_CWX_CTI_CTICHOUTSTATUS(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CN10KA) && (a<=23))
        return 0x87a00402013cll + 0x100000ll * ((a) & 0x1f);
    if (cavm_is_model(OCTEONTX_CN10KB) && (a<=7))
        return 0x87a00402013cll + 0x100000ll * ((a) & 0x7);
    if (cavm_is_model(OCTEONTX_CNF10KA) && (a<=17))
        return 0x87a00402013cll + 0x100000ll * ((a) & 0x1f);
    if (cavm_is_model(OCTEONTX_CNF10KB) && (a<=11))
        return 0x87a00402013cll + 0x100000ll * ((a) & 0xf);
    __cavm_csr_fatal("CST_CWX_CTI_CTICHOUTSTATUS", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_CST_CWX_CTI_CTICHOUTSTATUS(a) cavm_cst_cwx_cti_ctichoutstatus_t
#define bustype_CAVM_CST_CWX_CTI_CTICHOUTSTATUS(a) CSR_TYPE_NCB32b
#define basename_CAVM_CST_CWX_CTI_CTICHOUTSTATUS(a) "CST_CWX_CTI_CTICHOUTSTATUS"
#define busnum_CAVM_CST_CWX_CTI_CTICHOUTSTATUS(a) (a)
#define arguments_CAVM_CST_CWX_CTI_CTICHOUTSTATUS(a) (a),-1,-1,-1

/**
 * Register (NCB32b) cst_cw#_cti_cticontrol
 *
 * CST Cw Cti Cticontrol Register
 * The CTI control register enables and disables the CTI.
 */
union cavm_cst_cwx_cti_cticontrol
{
    uint32_t u;
    struct cavm_cst_cwx_cti_cticontrol_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t sbz_0                 : 31; /**< [ 31:  1](R/W) Software should write the field as all 0s. */
        uint32_t ctien                 : 1;  /**< [  0:  0](R/W) Enable control. */
#else /* Word 0 - Little Endian */
        uint32_t ctien                 : 1;  /**< [  0:  0](R/W) Enable control. */
        uint32_t sbz_0                 : 31; /**< [ 31:  1](R/W) Software should write the field as all 0s. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_cst_cwx_cti_cticontrol_s cn; */
};
typedef union cavm_cst_cwx_cti_cticontrol cavm_cst_cwx_cti_cticontrol_t;

static inline uint64_t CAVM_CST_CWX_CTI_CTICONTROL(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_CST_CWX_CTI_CTICONTROL(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CN10KA) && (a<=23))
        return 0x87a004020000ll + 0x100000ll * ((a) & 0x1f);
    if (cavm_is_model(OCTEONTX_CN10KB) && (a<=7))
        return 0x87a004020000ll + 0x100000ll * ((a) & 0x7);
    if (cavm_is_model(OCTEONTX_CNF10KA) && (a<=17))
        return 0x87a004020000ll + 0x100000ll * ((a) & 0x1f);
    if (cavm_is_model(OCTEONTX_CNF10KB) && (a<=11))
        return 0x87a004020000ll + 0x100000ll * ((a) & 0xf);
    __cavm_csr_fatal("CST_CWX_CTI_CTICONTROL", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_CST_CWX_CTI_CTICONTROL(a) cavm_cst_cwx_cti_cticontrol_t
#define bustype_CAVM_CST_CWX_CTI_CTICONTROL(a) CSR_TYPE_NCB32b
#define basename_CAVM_CST_CWX_CTI_CTICONTROL(a) "CST_CWX_CTI_CTICONTROL"
#define busnum_CAVM_CST_CWX_CTI_CTICONTROL(a) (a)
#define arguments_CAVM_CST_CWX_CTI_CTICONTROL(a) (a),-1,-1,-1

/**
 * Register (NCB32b) cst_cw#_cti_ctigate
 *
 * CST Cw Cti Ctigate Register
 * Channel output gate.
 */
union cavm_cst_cwx_cti_ctigate
{
    uint32_t u;
    struct cavm_cst_cwx_cti_ctigate_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t sbz_0                 : 28; /**< [ 31:  4](R/W) Software should write the field as all 0s. */
        uint32_t ctigateen             : 4;  /**< [  3:  0](R/W) Enables the propagation of channel events out of the CTI, one bit per channel. */
#else /* Word 0 - Little Endian */
        uint32_t ctigateen             : 4;  /**< [  3:  0](R/W) Enables the propagation of channel events out of the CTI, one bit per channel. */
        uint32_t sbz_0                 : 28; /**< [ 31:  4](R/W) Software should write the field as all 0s. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_cst_cwx_cti_ctigate_s cn; */
};
typedef union cavm_cst_cwx_cti_ctigate cavm_cst_cwx_cti_ctigate_t;

static inline uint64_t CAVM_CST_CWX_CTI_CTIGATE(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_CST_CWX_CTI_CTIGATE(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CN10KA) && (a<=23))
        return 0x87a004020140ll + 0x100000ll * ((a) & 0x1f);
    if (cavm_is_model(OCTEONTX_CN10KB) && (a<=7))
        return 0x87a004020140ll + 0x100000ll * ((a) & 0x7);
    if (cavm_is_model(OCTEONTX_CNF10KA) && (a<=17))
        return 0x87a004020140ll + 0x100000ll * ((a) & 0x1f);
    if (cavm_is_model(OCTEONTX_CNF10KB) && (a<=11))
        return 0x87a004020140ll + 0x100000ll * ((a) & 0xf);
    __cavm_csr_fatal("CST_CWX_CTI_CTIGATE", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_CST_CWX_CTI_CTIGATE(a) cavm_cst_cwx_cti_ctigate_t
#define bustype_CAVM_CST_CWX_CTI_CTIGATE(a) CSR_TYPE_NCB32b
#define basename_CAVM_CST_CWX_CTI_CTIGATE(a) "CST_CWX_CTI_CTIGATE"
#define busnum_CAVM_CST_CWX_CTI_CTIGATE(a) (a)
#define arguments_CAVM_CST_CWX_CTI_CTIGATE(a) (a),-1,-1,-1

/**
 * Register (NCB32b) cst_cw#_cti_ctiinen0
 *
 * CST Cw Cti Ctiinen0 Register
 * This register maps trigger inputs to channels in the cross trigger system. The
 * CTIINEN registers are bit maps that allow the trigger input to be mapped to any
 * channel output, including none (0x0) and all (0xF). There is one register per
 * trigger input, so it is possible to map any combination of trigger inputs to any
 * channel outputs.
 */
union cavm_cst_cwx_cti_ctiinen0
{
    uint32_t u;
    struct cavm_cst_cwx_cti_ctiinen0_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t sbz_0                 : 28; /**< [ 31:  4](R/W) Software should write the field as all 0s. */
        uint32_t triginen              : 4;  /**< [  3:  0](R/W) Trigger input to channel mapping. */
#else /* Word 0 - Little Endian */
        uint32_t triginen              : 4;  /**< [  3:  0](R/W) Trigger input to channel mapping. */
        uint32_t sbz_0                 : 28; /**< [ 31:  4](R/W) Software should write the field as all 0s. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_cst_cwx_cti_ctiinen0_s cn; */
};
typedef union cavm_cst_cwx_cti_ctiinen0 cavm_cst_cwx_cti_ctiinen0_t;

static inline uint64_t CAVM_CST_CWX_CTI_CTIINEN0(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_CST_CWX_CTI_CTIINEN0(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CN10KA) && (a<=23))
        return 0x87a004020020ll + 0x100000ll * ((a) & 0x1f);
    if (cavm_is_model(OCTEONTX_CN10KB) && (a<=7))
        return 0x87a004020020ll + 0x100000ll * ((a) & 0x7);
    if (cavm_is_model(OCTEONTX_CNF10KA) && (a<=17))
        return 0x87a004020020ll + 0x100000ll * ((a) & 0x1f);
    if (cavm_is_model(OCTEONTX_CNF10KB) && (a<=11))
        return 0x87a004020020ll + 0x100000ll * ((a) & 0xf);
    __cavm_csr_fatal("CST_CWX_CTI_CTIINEN0", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_CST_CWX_CTI_CTIINEN0(a) cavm_cst_cwx_cti_ctiinen0_t
#define bustype_CAVM_CST_CWX_CTI_CTIINEN0(a) CSR_TYPE_NCB32b
#define basename_CAVM_CST_CWX_CTI_CTIINEN0(a) "CST_CWX_CTI_CTIINEN0"
#define busnum_CAVM_CST_CWX_CTI_CTIINEN0(a) (a)
#define arguments_CAVM_CST_CWX_CTI_CTIINEN0(a) (a),-1,-1,-1

/**
 * Register (NCB32b) cst_cw#_cti_ctiinen1
 *
 * CST Cw Cti Ctiinen1 Register
 * This register maps trigger inputs to channels in the cross trigger system. The
 * CTIINEN registers are bit maps that allow the trigger input to be mapped to any
 * channel output, including none (0x0) and all (0xF). There is one register per
 * trigger input, so it is possible to map any combination of trigger inputs to any
 * channel outputs.
 */
union cavm_cst_cwx_cti_ctiinen1
{
    uint32_t u;
    struct cavm_cst_cwx_cti_ctiinen1_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t sbz_0                 : 28; /**< [ 31:  4](R/W) Software should write the field as all 0s. */
        uint32_t triginen              : 4;  /**< [  3:  0](R/W) Trigger input to channel mapping. */
#else /* Word 0 - Little Endian */
        uint32_t triginen              : 4;  /**< [  3:  0](R/W) Trigger input to channel mapping. */
        uint32_t sbz_0                 : 28; /**< [ 31:  4](R/W) Software should write the field as all 0s. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_cst_cwx_cti_ctiinen1_s cn; */
};
typedef union cavm_cst_cwx_cti_ctiinen1 cavm_cst_cwx_cti_ctiinen1_t;

static inline uint64_t CAVM_CST_CWX_CTI_CTIINEN1(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_CST_CWX_CTI_CTIINEN1(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CN10KA) && (a<=23))
        return 0x87a004020024ll + 0x100000ll * ((a) & 0x1f);
    if (cavm_is_model(OCTEONTX_CN10KB) && (a<=7))
        return 0x87a004020024ll + 0x100000ll * ((a) & 0x7);
    if (cavm_is_model(OCTEONTX_CNF10KA) && (a<=17))
        return 0x87a004020024ll + 0x100000ll * ((a) & 0x1f);
    if (cavm_is_model(OCTEONTX_CNF10KB) && (a<=11))
        return 0x87a004020024ll + 0x100000ll * ((a) & 0xf);
    __cavm_csr_fatal("CST_CWX_CTI_CTIINEN1", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_CST_CWX_CTI_CTIINEN1(a) cavm_cst_cwx_cti_ctiinen1_t
#define bustype_CAVM_CST_CWX_CTI_CTIINEN1(a) CSR_TYPE_NCB32b
#define basename_CAVM_CST_CWX_CTI_CTIINEN1(a) "CST_CWX_CTI_CTIINEN1"
#define busnum_CAVM_CST_CWX_CTI_CTIINEN1(a) (a)
#define arguments_CAVM_CST_CWX_CTI_CTIINEN1(a) (a),-1,-1,-1

/**
 * Register (NCB32b) cst_cw#_cti_ctiinen10
 *
 * CST Cw Cti Ctiinen10 Register
 * This register maps trigger inputs to channels in the cross trigger system. The
 * CTIINEN registers are bit maps that allow the trigger input to be mapped to any
 * channel output, including none (0x0) and all (0xF). There is one register per
 * trigger input, so it is possible to map any combination of trigger inputs to any
 * channel outputs.
 */
union cavm_cst_cwx_cti_ctiinen10
{
    uint32_t u;
    struct cavm_cst_cwx_cti_ctiinen10_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t sbz_0                 : 28; /**< [ 31:  4](R/W) Software should write the field as all 0s. */
        uint32_t triginen              : 4;  /**< [  3:  0](R/W) Trigger input to channel mapping. */
#else /* Word 0 - Little Endian */
        uint32_t triginen              : 4;  /**< [  3:  0](R/W) Trigger input to channel mapping. */
        uint32_t sbz_0                 : 28; /**< [ 31:  4](R/W) Software should write the field as all 0s. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_cst_cwx_cti_ctiinen10_s cn; */
};
typedef union cavm_cst_cwx_cti_ctiinen10 cavm_cst_cwx_cti_ctiinen10_t;

static inline uint64_t CAVM_CST_CWX_CTI_CTIINEN10(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_CST_CWX_CTI_CTIINEN10(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CN10KA) && (a<=23))
        return 0x87a004020048ll + 0x100000ll * ((a) & 0x1f);
    if (cavm_is_model(OCTEONTX_CN10KB) && (a<=7))
        return 0x87a004020048ll + 0x100000ll * ((a) & 0x7);
    if (cavm_is_model(OCTEONTX_CNF10KA) && (a<=17))
        return 0x87a004020048ll + 0x100000ll * ((a) & 0x1f);
    if (cavm_is_model(OCTEONTX_CNF10KB) && (a<=11))
        return 0x87a004020048ll + 0x100000ll * ((a) & 0xf);
    __cavm_csr_fatal("CST_CWX_CTI_CTIINEN10", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_CST_CWX_CTI_CTIINEN10(a) cavm_cst_cwx_cti_ctiinen10_t
#define bustype_CAVM_CST_CWX_CTI_CTIINEN10(a) CSR_TYPE_NCB32b
#define basename_CAVM_CST_CWX_CTI_CTIINEN10(a) "CST_CWX_CTI_CTIINEN10"
#define busnum_CAVM_CST_CWX_CTI_CTIINEN10(a) (a)
#define arguments_CAVM_CST_CWX_CTI_CTIINEN10(a) (a),-1,-1,-1

/**
 * Register (NCB32b) cst_cw#_cti_ctiinen11
 *
 * CST Cw Cti Ctiinen11 Register
 * This register maps trigger inputs to channels in the cross trigger system. The
 * CTIINEN registers are bit maps that allow the trigger input to be mapped to any
 * channel output, including none (0x0) and all (0xF). There is one register per
 * trigger input, so it is possible to map any combination of trigger inputs to any
 * channel outputs.
 */
union cavm_cst_cwx_cti_ctiinen11
{
    uint32_t u;
    struct cavm_cst_cwx_cti_ctiinen11_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t sbz_0                 : 28; /**< [ 31:  4](R/W) Software should write the field as all 0s. */
        uint32_t triginen              : 4;  /**< [  3:  0](R/W) Trigger input to channel mapping. */
#else /* Word 0 - Little Endian */
        uint32_t triginen              : 4;  /**< [  3:  0](R/W) Trigger input to channel mapping. */
        uint32_t sbz_0                 : 28; /**< [ 31:  4](R/W) Software should write the field as all 0s. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_cst_cwx_cti_ctiinen11_s cn; */
};
typedef union cavm_cst_cwx_cti_ctiinen11 cavm_cst_cwx_cti_ctiinen11_t;

static inline uint64_t CAVM_CST_CWX_CTI_CTIINEN11(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_CST_CWX_CTI_CTIINEN11(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CN10KA) && (a<=23))
        return 0x87a00402004cll + 0x100000ll * ((a) & 0x1f);
    if (cavm_is_model(OCTEONTX_CN10KB) && (a<=7))
        return 0x87a00402004cll + 0x100000ll * ((a) & 0x7);
    if (cavm_is_model(OCTEONTX_CNF10KA) && (a<=17))
        return 0x87a00402004cll + 0x100000ll * ((a) & 0x1f);
    if (cavm_is_model(OCTEONTX_CNF10KB) && (a<=11))
        return 0x87a00402004cll + 0x100000ll * ((a) & 0xf);
    __cavm_csr_fatal("CST_CWX_CTI_CTIINEN11", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_CST_CWX_CTI_CTIINEN11(a) cavm_cst_cwx_cti_ctiinen11_t
#define bustype_CAVM_CST_CWX_CTI_CTIINEN11(a) CSR_TYPE_NCB32b
#define basename_CAVM_CST_CWX_CTI_CTIINEN11(a) "CST_CWX_CTI_CTIINEN11"
#define busnum_CAVM_CST_CWX_CTI_CTIINEN11(a) (a)
#define arguments_CAVM_CST_CWX_CTI_CTIINEN11(a) (a),-1,-1,-1

/**
 * Register (NCB32b) cst_cw#_cti_ctiinen12
 *
 * CST Cw Cti Ctiinen12 Register
 * This register maps trigger inputs to channels in the cross trigger system. The
 * CTIINEN registers are bit maps that allow the trigger input to be mapped to any
 * channel output, including none (0x0) and all (0xF). There is one register per
 * trigger input, so it is possible to map any combination of trigger inputs to any
 * channel outputs.
 */
union cavm_cst_cwx_cti_ctiinen12
{
    uint32_t u;
    struct cavm_cst_cwx_cti_ctiinen12_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t sbz_0                 : 28; /**< [ 31:  4](R/W) Software should write the field as all 0s. */
        uint32_t triginen              : 4;  /**< [  3:  0](R/W) Trigger input to channel mapping. */
#else /* Word 0 - Little Endian */
        uint32_t triginen              : 4;  /**< [  3:  0](R/W) Trigger input to channel mapping. */
        uint32_t sbz_0                 : 28; /**< [ 31:  4](R/W) Software should write the field as all 0s. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_cst_cwx_cti_ctiinen12_s cn; */
};
typedef union cavm_cst_cwx_cti_ctiinen12 cavm_cst_cwx_cti_ctiinen12_t;

static inline uint64_t CAVM_CST_CWX_CTI_CTIINEN12(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_CST_CWX_CTI_CTIINEN12(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CN10KA) && (a<=23))
        return 0x87a004020050ll + 0x100000ll * ((a) & 0x1f);
    if (cavm_is_model(OCTEONTX_CN10KB) && (a<=7))
        return 0x87a004020050ll + 0x100000ll * ((a) & 0x7);
    if (cavm_is_model(OCTEONTX_CNF10KA) && (a<=17))
        return 0x87a004020050ll + 0x100000ll * ((a) & 0x1f);
    if (cavm_is_model(OCTEONTX_CNF10KB) && (a<=11))
        return 0x87a004020050ll + 0x100000ll * ((a) & 0xf);
    __cavm_csr_fatal("CST_CWX_CTI_CTIINEN12", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_CST_CWX_CTI_CTIINEN12(a) cavm_cst_cwx_cti_ctiinen12_t
#define bustype_CAVM_CST_CWX_CTI_CTIINEN12(a) CSR_TYPE_NCB32b
#define basename_CAVM_CST_CWX_CTI_CTIINEN12(a) "CST_CWX_CTI_CTIINEN12"
#define busnum_CAVM_CST_CWX_CTI_CTIINEN12(a) (a)
#define arguments_CAVM_CST_CWX_CTI_CTIINEN12(a) (a),-1,-1,-1

/**
 * Register (NCB32b) cst_cw#_cti_ctiinen13
 *
 * CST Cw Cti Ctiinen13 Register
 * This register maps trigger inputs to channels in the cross trigger system. The
 * CTIINEN registers are bit maps that allow the trigger input to be mapped to any
 * channel output, including none (0x0) and all (0xF). There is one register per
 * trigger input, so it is possible to map any combination of trigger inputs to any
 * channel outputs.
 */
union cavm_cst_cwx_cti_ctiinen13
{
    uint32_t u;
    struct cavm_cst_cwx_cti_ctiinen13_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t sbz_0                 : 28; /**< [ 31:  4](R/W) Software should write the field as all 0s. */
        uint32_t triginen              : 4;  /**< [  3:  0](R/W) Trigger input to channel mapping. */
#else /* Word 0 - Little Endian */
        uint32_t triginen              : 4;  /**< [  3:  0](R/W) Trigger input to channel mapping. */
        uint32_t sbz_0                 : 28; /**< [ 31:  4](R/W) Software should write the field as all 0s. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_cst_cwx_cti_ctiinen13_s cn; */
};
typedef union cavm_cst_cwx_cti_ctiinen13 cavm_cst_cwx_cti_ctiinen13_t;

static inline uint64_t CAVM_CST_CWX_CTI_CTIINEN13(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_CST_CWX_CTI_CTIINEN13(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CN10KA) && (a<=23))
        return 0x87a004020054ll + 0x100000ll * ((a) & 0x1f);
    if (cavm_is_model(OCTEONTX_CN10KB) && (a<=7))
        return 0x87a004020054ll + 0x100000ll * ((a) & 0x7);
    if (cavm_is_model(OCTEONTX_CNF10KA) && (a<=17))
        return 0x87a004020054ll + 0x100000ll * ((a) & 0x1f);
    if (cavm_is_model(OCTEONTX_CNF10KB) && (a<=11))
        return 0x87a004020054ll + 0x100000ll * ((a) & 0xf);
    __cavm_csr_fatal("CST_CWX_CTI_CTIINEN13", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_CST_CWX_CTI_CTIINEN13(a) cavm_cst_cwx_cti_ctiinen13_t
#define bustype_CAVM_CST_CWX_CTI_CTIINEN13(a) CSR_TYPE_NCB32b
#define basename_CAVM_CST_CWX_CTI_CTIINEN13(a) "CST_CWX_CTI_CTIINEN13"
#define busnum_CAVM_CST_CWX_CTI_CTIINEN13(a) (a)
#define arguments_CAVM_CST_CWX_CTI_CTIINEN13(a) (a),-1,-1,-1

/**
 * Register (NCB32b) cst_cw#_cti_ctiinen14
 *
 * CST Cw Cti Ctiinen14 Register
 * This register maps trigger inputs to channels in the cross trigger system. The
 * CTIINEN registers are bit maps that allow the trigger input to be mapped to any
 * channel output, including none (0x0) and all (0xF). There is one register per
 * trigger input, so it is possible to map any combination of trigger inputs to any
 * channel outputs.
 */
union cavm_cst_cwx_cti_ctiinen14
{
    uint32_t u;
    struct cavm_cst_cwx_cti_ctiinen14_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t sbz_0                 : 28; /**< [ 31:  4](R/W) Software should write the field as all 0s. */
        uint32_t triginen              : 4;  /**< [  3:  0](R/W) Trigger input to channel mapping. */
#else /* Word 0 - Little Endian */
        uint32_t triginen              : 4;  /**< [  3:  0](R/W) Trigger input to channel mapping. */
        uint32_t sbz_0                 : 28; /**< [ 31:  4](R/W) Software should write the field as all 0s. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_cst_cwx_cti_ctiinen14_s cn; */
};
typedef union cavm_cst_cwx_cti_ctiinen14 cavm_cst_cwx_cti_ctiinen14_t;

static inline uint64_t CAVM_CST_CWX_CTI_CTIINEN14(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_CST_CWX_CTI_CTIINEN14(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CN10KA) && (a<=23))
        return 0x87a004020058ll + 0x100000ll * ((a) & 0x1f);
    if (cavm_is_model(OCTEONTX_CN10KB) && (a<=7))
        return 0x87a004020058ll + 0x100000ll * ((a) & 0x7);
    if (cavm_is_model(OCTEONTX_CNF10KA) && (a<=17))
        return 0x87a004020058ll + 0x100000ll * ((a) & 0x1f);
    if (cavm_is_model(OCTEONTX_CNF10KB) && (a<=11))
        return 0x87a004020058ll + 0x100000ll * ((a) & 0xf);
    __cavm_csr_fatal("CST_CWX_CTI_CTIINEN14", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_CST_CWX_CTI_CTIINEN14(a) cavm_cst_cwx_cti_ctiinen14_t
#define bustype_CAVM_CST_CWX_CTI_CTIINEN14(a) CSR_TYPE_NCB32b
#define basename_CAVM_CST_CWX_CTI_CTIINEN14(a) "CST_CWX_CTI_CTIINEN14"
#define busnum_CAVM_CST_CWX_CTI_CTIINEN14(a) (a)
#define arguments_CAVM_CST_CWX_CTI_CTIINEN14(a) (a),-1,-1,-1

/**
 * Register (NCB32b) cst_cw#_cti_ctiinen15
 *
 * CST Cw Cti Ctiinen15 Register
 * This register maps trigger inputs to channels in the cross trigger system. The
 * CTIINEN registers are bit maps that allow the trigger input to be mapped to any
 * channel output, including none (0x0) and all (0xF). There is one register per
 * trigger input, so it is possible to map any combination of trigger inputs to any
 * channel outputs.
 */
union cavm_cst_cwx_cti_ctiinen15
{
    uint32_t u;
    struct cavm_cst_cwx_cti_ctiinen15_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t sbz_0                 : 28; /**< [ 31:  4](R/W) Software should write the field as all 0s. */
        uint32_t triginen              : 4;  /**< [  3:  0](R/W) Trigger input to channel mapping. */
#else /* Word 0 - Little Endian */
        uint32_t triginen              : 4;  /**< [  3:  0](R/W) Trigger input to channel mapping. */
        uint32_t sbz_0                 : 28; /**< [ 31:  4](R/W) Software should write the field as all 0s. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_cst_cwx_cti_ctiinen15_s cn; */
};
typedef union cavm_cst_cwx_cti_ctiinen15 cavm_cst_cwx_cti_ctiinen15_t;

static inline uint64_t CAVM_CST_CWX_CTI_CTIINEN15(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_CST_CWX_CTI_CTIINEN15(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CN10KA) && (a<=23))
        return 0x87a00402005cll + 0x100000ll * ((a) & 0x1f);
    if (cavm_is_model(OCTEONTX_CN10KB) && (a<=7))
        return 0x87a00402005cll + 0x100000ll * ((a) & 0x7);
    if (cavm_is_model(OCTEONTX_CNF10KA) && (a<=17))
        return 0x87a00402005cll + 0x100000ll * ((a) & 0x1f);
    if (cavm_is_model(OCTEONTX_CNF10KB) && (a<=11))
        return 0x87a00402005cll + 0x100000ll * ((a) & 0xf);
    __cavm_csr_fatal("CST_CWX_CTI_CTIINEN15", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_CST_CWX_CTI_CTIINEN15(a) cavm_cst_cwx_cti_ctiinen15_t
#define bustype_CAVM_CST_CWX_CTI_CTIINEN15(a) CSR_TYPE_NCB32b
#define basename_CAVM_CST_CWX_CTI_CTIINEN15(a) "CST_CWX_CTI_CTIINEN15"
#define busnum_CAVM_CST_CWX_CTI_CTIINEN15(a) (a)
#define arguments_CAVM_CST_CWX_CTI_CTIINEN15(a) (a),-1,-1,-1

/**
 * Register (NCB32b) cst_cw#_cti_ctiinen16
 *
 * CST Cw Cti Ctiinen16 Register
 * This register maps trigger inputs to channels in the cross trigger system. The
 * CTIINEN registers are bit maps that allow the trigger input to be mapped to any
 * channel output, including none (0x0) and all (0xF). There is one register per
 * trigger input, so it is possible to map any combination of trigger inputs to any
 * channel outputs.
 */
union cavm_cst_cwx_cti_ctiinen16
{
    uint32_t u;
    struct cavm_cst_cwx_cti_ctiinen16_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t sbz_0                 : 28; /**< [ 31:  4](R/W) Software should write the field as all 0s. */
        uint32_t triginen              : 4;  /**< [  3:  0](R/W) Trigger input to channel mapping. */
#else /* Word 0 - Little Endian */
        uint32_t triginen              : 4;  /**< [  3:  0](R/W) Trigger input to channel mapping. */
        uint32_t sbz_0                 : 28; /**< [ 31:  4](R/W) Software should write the field as all 0s. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_cst_cwx_cti_ctiinen16_s cn; */
};
typedef union cavm_cst_cwx_cti_ctiinen16 cavm_cst_cwx_cti_ctiinen16_t;

static inline uint64_t CAVM_CST_CWX_CTI_CTIINEN16(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_CST_CWX_CTI_CTIINEN16(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CN10KA) && (a<=23))
        return 0x87a004020060ll + 0x100000ll * ((a) & 0x1f);
    if (cavm_is_model(OCTEONTX_CN10KB) && (a<=7))
        return 0x87a004020060ll + 0x100000ll * ((a) & 0x7);
    if (cavm_is_model(OCTEONTX_CNF10KA) && (a<=17))
        return 0x87a004020060ll + 0x100000ll * ((a) & 0x1f);
    if (cavm_is_model(OCTEONTX_CNF10KB) && (a<=11))
        return 0x87a004020060ll + 0x100000ll * ((a) & 0xf);
    __cavm_csr_fatal("CST_CWX_CTI_CTIINEN16", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_CST_CWX_CTI_CTIINEN16(a) cavm_cst_cwx_cti_ctiinen16_t
#define bustype_CAVM_CST_CWX_CTI_CTIINEN16(a) CSR_TYPE_NCB32b
#define basename_CAVM_CST_CWX_CTI_CTIINEN16(a) "CST_CWX_CTI_CTIINEN16"
#define busnum_CAVM_CST_CWX_CTI_CTIINEN16(a) (a)
#define arguments_CAVM_CST_CWX_CTI_CTIINEN16(a) (a),-1,-1,-1

/**
 * Register (NCB32b) cst_cw#_cti_ctiinen17
 *
 * CST Cw Cti Ctiinen17 Register
 * This register maps trigger inputs to channels in the cross trigger system. The
 * CTIINEN registers are bit maps that allow the trigger input to be mapped to any
 * channel output, including none (0x0) and all (0xF). There is one register per
 * trigger input, so it is possible to map any combination of trigger inputs to any
 * channel outputs.
 */
union cavm_cst_cwx_cti_ctiinen17
{
    uint32_t u;
    struct cavm_cst_cwx_cti_ctiinen17_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t sbz_0                 : 28; /**< [ 31:  4](R/W) Software should write the field as all 0s. */
        uint32_t triginen              : 4;  /**< [  3:  0](R/W) Trigger input to channel mapping. */
#else /* Word 0 - Little Endian */
        uint32_t triginen              : 4;  /**< [  3:  0](R/W) Trigger input to channel mapping. */
        uint32_t sbz_0                 : 28; /**< [ 31:  4](R/W) Software should write the field as all 0s. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_cst_cwx_cti_ctiinen17_s cn; */
};
typedef union cavm_cst_cwx_cti_ctiinen17 cavm_cst_cwx_cti_ctiinen17_t;

static inline uint64_t CAVM_CST_CWX_CTI_CTIINEN17(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_CST_CWX_CTI_CTIINEN17(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CN10KA) && (a<=23))
        return 0x87a004020064ll + 0x100000ll * ((a) & 0x1f);
    if (cavm_is_model(OCTEONTX_CN10KB) && (a<=7))
        return 0x87a004020064ll + 0x100000ll * ((a) & 0x7);
    if (cavm_is_model(OCTEONTX_CNF10KA) && (a<=17))
        return 0x87a004020064ll + 0x100000ll * ((a) & 0x1f);
    if (cavm_is_model(OCTEONTX_CNF10KB) && (a<=11))
        return 0x87a004020064ll + 0x100000ll * ((a) & 0xf);
    __cavm_csr_fatal("CST_CWX_CTI_CTIINEN17", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_CST_CWX_CTI_CTIINEN17(a) cavm_cst_cwx_cti_ctiinen17_t
#define bustype_CAVM_CST_CWX_CTI_CTIINEN17(a) CSR_TYPE_NCB32b
#define basename_CAVM_CST_CWX_CTI_CTIINEN17(a) "CST_CWX_CTI_CTIINEN17"
#define busnum_CAVM_CST_CWX_CTI_CTIINEN17(a) (a)
#define arguments_CAVM_CST_CWX_CTI_CTIINEN17(a) (a),-1,-1,-1

/**
 * Register (NCB32b) cst_cw#_cti_ctiinen18
 *
 * CST Cw Cti Ctiinen18 Register
 * This register maps trigger inputs to channels in the cross trigger system. The
 * CTIINEN registers are bit maps that allow the trigger input to be mapped to any
 * channel output, including none (0x0) and all (0xF). There is one register per
 * trigger input, so it is possible to map any combination of trigger inputs to any
 * channel outputs.
 */
union cavm_cst_cwx_cti_ctiinen18
{
    uint32_t u;
    struct cavm_cst_cwx_cti_ctiinen18_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t sbz_0                 : 28; /**< [ 31:  4](R/W) Software should write the field as all 0s. */
        uint32_t triginen              : 4;  /**< [  3:  0](R/W) Trigger input to channel mapping. */
#else /* Word 0 - Little Endian */
        uint32_t triginen              : 4;  /**< [  3:  0](R/W) Trigger input to channel mapping. */
        uint32_t sbz_0                 : 28; /**< [ 31:  4](R/W) Software should write the field as all 0s. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_cst_cwx_cti_ctiinen18_s cn; */
};
typedef union cavm_cst_cwx_cti_ctiinen18 cavm_cst_cwx_cti_ctiinen18_t;

static inline uint64_t CAVM_CST_CWX_CTI_CTIINEN18(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_CST_CWX_CTI_CTIINEN18(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CN10KA) && (a<=23))
        return 0x87a004020068ll + 0x100000ll * ((a) & 0x1f);
    if (cavm_is_model(OCTEONTX_CN10KB) && (a<=7))
        return 0x87a004020068ll + 0x100000ll * ((a) & 0x7);
    if (cavm_is_model(OCTEONTX_CNF10KA) && (a<=17))
        return 0x87a004020068ll + 0x100000ll * ((a) & 0x1f);
    if (cavm_is_model(OCTEONTX_CNF10KB) && (a<=11))
        return 0x87a004020068ll + 0x100000ll * ((a) & 0xf);
    __cavm_csr_fatal("CST_CWX_CTI_CTIINEN18", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_CST_CWX_CTI_CTIINEN18(a) cavm_cst_cwx_cti_ctiinen18_t
#define bustype_CAVM_CST_CWX_CTI_CTIINEN18(a) CSR_TYPE_NCB32b
#define basename_CAVM_CST_CWX_CTI_CTIINEN18(a) "CST_CWX_CTI_CTIINEN18"
#define busnum_CAVM_CST_CWX_CTI_CTIINEN18(a) (a)
#define arguments_CAVM_CST_CWX_CTI_CTIINEN18(a) (a),-1,-1,-1

/**
 * Register (NCB32b) cst_cw#_cti_ctiinen19
 *
 * CST Cw Cti Ctiinen19 Register
 * This register maps trigger inputs to channels in the cross trigger system. The
 * CTIINEN registers are bit maps that allow the trigger input to be mapped to any
 * channel output, including none (0x0) and all (0xF). There is one register per
 * trigger input, so it is possible to map any combination of trigger inputs to any
 * channel outputs.
 */
union cavm_cst_cwx_cti_ctiinen19
{
    uint32_t u;
    struct cavm_cst_cwx_cti_ctiinen19_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t sbz_0                 : 28; /**< [ 31:  4](R/W) Software should write the field as all 0s. */
        uint32_t triginen              : 4;  /**< [  3:  0](R/W) Trigger input to channel mapping. */
#else /* Word 0 - Little Endian */
        uint32_t triginen              : 4;  /**< [  3:  0](R/W) Trigger input to channel mapping. */
        uint32_t sbz_0                 : 28; /**< [ 31:  4](R/W) Software should write the field as all 0s. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_cst_cwx_cti_ctiinen19_s cn; */
};
typedef union cavm_cst_cwx_cti_ctiinen19 cavm_cst_cwx_cti_ctiinen19_t;

static inline uint64_t CAVM_CST_CWX_CTI_CTIINEN19(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_CST_CWX_CTI_CTIINEN19(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CN10KA) && (a<=23))
        return 0x87a00402006cll + 0x100000ll * ((a) & 0x1f);
    if (cavm_is_model(OCTEONTX_CN10KB) && (a<=7))
        return 0x87a00402006cll + 0x100000ll * ((a) & 0x7);
    if (cavm_is_model(OCTEONTX_CNF10KA) && (a<=17))
        return 0x87a00402006cll + 0x100000ll * ((a) & 0x1f);
    if (cavm_is_model(OCTEONTX_CNF10KB) && (a<=11))
        return 0x87a00402006cll + 0x100000ll * ((a) & 0xf);
    __cavm_csr_fatal("CST_CWX_CTI_CTIINEN19", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_CST_CWX_CTI_CTIINEN19(a) cavm_cst_cwx_cti_ctiinen19_t
#define bustype_CAVM_CST_CWX_CTI_CTIINEN19(a) CSR_TYPE_NCB32b
#define basename_CAVM_CST_CWX_CTI_CTIINEN19(a) "CST_CWX_CTI_CTIINEN19"
#define busnum_CAVM_CST_CWX_CTI_CTIINEN19(a) (a)
#define arguments_CAVM_CST_CWX_CTI_CTIINEN19(a) (a),-1,-1,-1

/**
 * Register (NCB32b) cst_cw#_cti_ctiinen2
 *
 * CST Cw Cti Ctiinen2 Register
 * This register maps trigger inputs to channels in the cross trigger system. The
 * CTIINEN registers are bit maps that allow the trigger input to be mapped to any
 * channel output, including none (0x0) and all (0xF). There is one register per
 * trigger input, so it is possible to map any combination of trigger inputs to any
 * channel outputs.
 */
union cavm_cst_cwx_cti_ctiinen2
{
    uint32_t u;
    struct cavm_cst_cwx_cti_ctiinen2_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t sbz_0                 : 28; /**< [ 31:  4](R/W) Software should write the field as all 0s. */
        uint32_t triginen              : 4;  /**< [  3:  0](R/W) Trigger input to channel mapping. */
#else /* Word 0 - Little Endian */
        uint32_t triginen              : 4;  /**< [  3:  0](R/W) Trigger input to channel mapping. */
        uint32_t sbz_0                 : 28; /**< [ 31:  4](R/W) Software should write the field as all 0s. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_cst_cwx_cti_ctiinen2_s cn; */
};
typedef union cavm_cst_cwx_cti_ctiinen2 cavm_cst_cwx_cti_ctiinen2_t;

static inline uint64_t CAVM_CST_CWX_CTI_CTIINEN2(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_CST_CWX_CTI_CTIINEN2(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CN10KA) && (a<=23))
        return 0x87a004020028ll + 0x100000ll * ((a) & 0x1f);
    if (cavm_is_model(OCTEONTX_CN10KB) && (a<=7))
        return 0x87a004020028ll + 0x100000ll * ((a) & 0x7);
    if (cavm_is_model(OCTEONTX_CNF10KA) && (a<=17))
        return 0x87a004020028ll + 0x100000ll * ((a) & 0x1f);
    if (cavm_is_model(OCTEONTX_CNF10KB) && (a<=11))
        return 0x87a004020028ll + 0x100000ll * ((a) & 0xf);
    __cavm_csr_fatal("CST_CWX_CTI_CTIINEN2", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_CST_CWX_CTI_CTIINEN2(a) cavm_cst_cwx_cti_ctiinen2_t
#define bustype_CAVM_CST_CWX_CTI_CTIINEN2(a) CSR_TYPE_NCB32b
#define basename_CAVM_CST_CWX_CTI_CTIINEN2(a) "CST_CWX_CTI_CTIINEN2"
#define busnum_CAVM_CST_CWX_CTI_CTIINEN2(a) (a)
#define arguments_CAVM_CST_CWX_CTI_CTIINEN2(a) (a),-1,-1,-1

/**
 * Register (NCB32b) cst_cw#_cti_ctiinen20
 *
 * CST Cw Cti Ctiinen20 Register
 * This register maps trigger inputs to channels in the cross trigger system. The
 * CTIINEN registers are bit maps that allow the trigger input to be mapped to any
 * channel output, including none (0x0) and all (0xF). There is one register per
 * trigger input, so it is possible to map any combination of trigger inputs to any
 * channel outputs.
 */
union cavm_cst_cwx_cti_ctiinen20
{
    uint32_t u;
    struct cavm_cst_cwx_cti_ctiinen20_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t sbz_0                 : 28; /**< [ 31:  4](R/W) Software should write the field as all 0s. */
        uint32_t triginen              : 4;  /**< [  3:  0](R/W) Trigger input to channel mapping. */
#else /* Word 0 - Little Endian */
        uint32_t triginen              : 4;  /**< [  3:  0](R/W) Trigger input to channel mapping. */
        uint32_t sbz_0                 : 28; /**< [ 31:  4](R/W) Software should write the field as all 0s. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_cst_cwx_cti_ctiinen20_s cn; */
};
typedef union cavm_cst_cwx_cti_ctiinen20 cavm_cst_cwx_cti_ctiinen20_t;

static inline uint64_t CAVM_CST_CWX_CTI_CTIINEN20(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_CST_CWX_CTI_CTIINEN20(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CN10KA) && (a<=23))
        return 0x87a004020070ll + 0x100000ll * ((a) & 0x1f);
    if (cavm_is_model(OCTEONTX_CN10KB) && (a<=7))
        return 0x87a004020070ll + 0x100000ll * ((a) & 0x7);
    if (cavm_is_model(OCTEONTX_CNF10KA) && (a<=17))
        return 0x87a004020070ll + 0x100000ll * ((a) & 0x1f);
    if (cavm_is_model(OCTEONTX_CNF10KB) && (a<=11))
        return 0x87a004020070ll + 0x100000ll * ((a) & 0xf);
    __cavm_csr_fatal("CST_CWX_CTI_CTIINEN20", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_CST_CWX_CTI_CTIINEN20(a) cavm_cst_cwx_cti_ctiinen20_t
#define bustype_CAVM_CST_CWX_CTI_CTIINEN20(a) CSR_TYPE_NCB32b
#define basename_CAVM_CST_CWX_CTI_CTIINEN20(a) "CST_CWX_CTI_CTIINEN20"
#define busnum_CAVM_CST_CWX_CTI_CTIINEN20(a) (a)
#define arguments_CAVM_CST_CWX_CTI_CTIINEN20(a) (a),-1,-1,-1

/**
 * Register (NCB32b) cst_cw#_cti_ctiinen21
 *
 * CST Cw Cti Ctiinen21 Register
 * This register maps trigger inputs to channels in the cross trigger system. The
 * CTIINEN registers are bit maps that allow the trigger input to be mapped to any
 * channel output, including none (0x0) and all (0xF). There is one register per
 * trigger input, so it is possible to map any combination of trigger inputs to any
 * channel outputs.
 */
union cavm_cst_cwx_cti_ctiinen21
{
    uint32_t u;
    struct cavm_cst_cwx_cti_ctiinen21_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t sbz_0                 : 28; /**< [ 31:  4](R/W) Software should write the field as all 0s. */
        uint32_t triginen              : 4;  /**< [  3:  0](R/W) Trigger input to channel mapping. */
#else /* Word 0 - Little Endian */
        uint32_t triginen              : 4;  /**< [  3:  0](R/W) Trigger input to channel mapping. */
        uint32_t sbz_0                 : 28; /**< [ 31:  4](R/W) Software should write the field as all 0s. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_cst_cwx_cti_ctiinen21_s cn; */
};
typedef union cavm_cst_cwx_cti_ctiinen21 cavm_cst_cwx_cti_ctiinen21_t;

static inline uint64_t CAVM_CST_CWX_CTI_CTIINEN21(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_CST_CWX_CTI_CTIINEN21(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CN10KA) && (a<=23))
        return 0x87a004020074ll + 0x100000ll * ((a) & 0x1f);
    if (cavm_is_model(OCTEONTX_CN10KB) && (a<=7))
        return 0x87a004020074ll + 0x100000ll * ((a) & 0x7);
    if (cavm_is_model(OCTEONTX_CNF10KA) && (a<=17))
        return 0x87a004020074ll + 0x100000ll * ((a) & 0x1f);
    if (cavm_is_model(OCTEONTX_CNF10KB) && (a<=11))
        return 0x87a004020074ll + 0x100000ll * ((a) & 0xf);
    __cavm_csr_fatal("CST_CWX_CTI_CTIINEN21", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_CST_CWX_CTI_CTIINEN21(a) cavm_cst_cwx_cti_ctiinen21_t
#define bustype_CAVM_CST_CWX_CTI_CTIINEN21(a) CSR_TYPE_NCB32b
#define basename_CAVM_CST_CWX_CTI_CTIINEN21(a) "CST_CWX_CTI_CTIINEN21"
#define busnum_CAVM_CST_CWX_CTI_CTIINEN21(a) (a)
#define arguments_CAVM_CST_CWX_CTI_CTIINEN21(a) (a),-1,-1,-1

/**
 * Register (NCB32b) cst_cw#_cti_ctiinen22
 *
 * CST Cw Cti Ctiinen22 Register
 * This register maps trigger inputs to channels in the cross trigger system. The
 * CTIINEN registers are bit maps that allow the trigger input to be mapped to any
 * channel output, including none (0x0) and all (0xF). There is one register per
 * trigger input, so it is possible to map any combination of trigger inputs to any
 * channel outputs.
 */
union cavm_cst_cwx_cti_ctiinen22
{
    uint32_t u;
    struct cavm_cst_cwx_cti_ctiinen22_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t sbz_0                 : 28; /**< [ 31:  4](R/W) Software should write the field as all 0s. */
        uint32_t triginen              : 4;  /**< [  3:  0](R/W) Trigger input to channel mapping. */
#else /* Word 0 - Little Endian */
        uint32_t triginen              : 4;  /**< [  3:  0](R/W) Trigger input to channel mapping. */
        uint32_t sbz_0                 : 28; /**< [ 31:  4](R/W) Software should write the field as all 0s. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_cst_cwx_cti_ctiinen22_s cn; */
};
typedef union cavm_cst_cwx_cti_ctiinen22 cavm_cst_cwx_cti_ctiinen22_t;

static inline uint64_t CAVM_CST_CWX_CTI_CTIINEN22(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_CST_CWX_CTI_CTIINEN22(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CN10KA) && (a<=23))
        return 0x87a004020078ll + 0x100000ll * ((a) & 0x1f);
    if (cavm_is_model(OCTEONTX_CN10KB) && (a<=7))
        return 0x87a004020078ll + 0x100000ll * ((a) & 0x7);
    if (cavm_is_model(OCTEONTX_CNF10KA) && (a<=17))
        return 0x87a004020078ll + 0x100000ll * ((a) & 0x1f);
    if (cavm_is_model(OCTEONTX_CNF10KB) && (a<=11))
        return 0x87a004020078ll + 0x100000ll * ((a) & 0xf);
    __cavm_csr_fatal("CST_CWX_CTI_CTIINEN22", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_CST_CWX_CTI_CTIINEN22(a) cavm_cst_cwx_cti_ctiinen22_t
#define bustype_CAVM_CST_CWX_CTI_CTIINEN22(a) CSR_TYPE_NCB32b
#define basename_CAVM_CST_CWX_CTI_CTIINEN22(a) "CST_CWX_CTI_CTIINEN22"
#define busnum_CAVM_CST_CWX_CTI_CTIINEN22(a) (a)
#define arguments_CAVM_CST_CWX_CTI_CTIINEN22(a) (a),-1,-1,-1

/**
 * Register (NCB32b) cst_cw#_cti_ctiinen23
 *
 * CST Cw Cti Ctiinen23 Register
 * This register maps trigger inputs to channels in the cross trigger system. The
 * CTIINEN registers are bit maps that allow the trigger input to be mapped to any
 * channel output, including none (0x0) and all (0xF). There is one register per
 * trigger input, so it is possible to map any combination of trigger inputs to any
 * channel outputs.
 */
union cavm_cst_cwx_cti_ctiinen23
{
    uint32_t u;
    struct cavm_cst_cwx_cti_ctiinen23_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t sbz_0                 : 28; /**< [ 31:  4](R/W) Software should write the field as all 0s. */
        uint32_t triginen              : 4;  /**< [  3:  0](R/W) Trigger input to channel mapping. */
#else /* Word 0 - Little Endian */
        uint32_t triginen              : 4;  /**< [  3:  0](R/W) Trigger input to channel mapping. */
        uint32_t sbz_0                 : 28; /**< [ 31:  4](R/W) Software should write the field as all 0s. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_cst_cwx_cti_ctiinen23_s cn; */
};
typedef union cavm_cst_cwx_cti_ctiinen23 cavm_cst_cwx_cti_ctiinen23_t;

static inline uint64_t CAVM_CST_CWX_CTI_CTIINEN23(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_CST_CWX_CTI_CTIINEN23(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CN10KA) && (a<=23))
        return 0x87a00402007cll + 0x100000ll * ((a) & 0x1f);
    if (cavm_is_model(OCTEONTX_CN10KB) && (a<=7))
        return 0x87a00402007cll + 0x100000ll * ((a) & 0x7);
    if (cavm_is_model(OCTEONTX_CNF10KA) && (a<=17))
        return 0x87a00402007cll + 0x100000ll * ((a) & 0x1f);
    if (cavm_is_model(OCTEONTX_CNF10KB) && (a<=11))
        return 0x87a00402007cll + 0x100000ll * ((a) & 0xf);
    __cavm_csr_fatal("CST_CWX_CTI_CTIINEN23", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_CST_CWX_CTI_CTIINEN23(a) cavm_cst_cwx_cti_ctiinen23_t
#define bustype_CAVM_CST_CWX_CTI_CTIINEN23(a) CSR_TYPE_NCB32b
#define basename_CAVM_CST_CWX_CTI_CTIINEN23(a) "CST_CWX_CTI_CTIINEN23"
#define busnum_CAVM_CST_CWX_CTI_CTIINEN23(a) (a)
#define arguments_CAVM_CST_CWX_CTI_CTIINEN23(a) (a),-1,-1,-1

/**
 * Register (NCB32b) cst_cw#_cti_ctiinen24
 *
 * CST Cw Cti Ctiinen24 Register
 * This register maps trigger inputs to channels in the cross trigger system. The
 * CTIINEN registers are bit maps that allow the trigger input to be mapped to any
 * channel output, including none (0x0) and all (0xF). There is one register per
 * trigger input, so it is possible to map any combination of trigger inputs to any
 * channel outputs.
 */
union cavm_cst_cwx_cti_ctiinen24
{
    uint32_t u;
    struct cavm_cst_cwx_cti_ctiinen24_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t sbz_0                 : 28; /**< [ 31:  4](R/W) Software should write the field as all 0s. */
        uint32_t triginen              : 4;  /**< [  3:  0](R/W) Trigger input to channel mapping. */
#else /* Word 0 - Little Endian */
        uint32_t triginen              : 4;  /**< [  3:  0](R/W) Trigger input to channel mapping. */
        uint32_t sbz_0                 : 28; /**< [ 31:  4](R/W) Software should write the field as all 0s. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_cst_cwx_cti_ctiinen24_s cn; */
};
typedef union cavm_cst_cwx_cti_ctiinen24 cavm_cst_cwx_cti_ctiinen24_t;

static inline uint64_t CAVM_CST_CWX_CTI_CTIINEN24(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_CST_CWX_CTI_CTIINEN24(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CN10KA) && (a<=23))
        return 0x87a004020080ll + 0x100000ll * ((a) & 0x1f);
    if (cavm_is_model(OCTEONTX_CN10KB) && (a<=7))
        return 0x87a004020080ll + 0x100000ll * ((a) & 0x7);
    if (cavm_is_model(OCTEONTX_CNF10KA) && (a<=17))
        return 0x87a004020080ll + 0x100000ll * ((a) & 0x1f);
    if (cavm_is_model(OCTEONTX_CNF10KB) && (a<=11))
        return 0x87a004020080ll + 0x100000ll * ((a) & 0xf);
    __cavm_csr_fatal("CST_CWX_CTI_CTIINEN24", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_CST_CWX_CTI_CTIINEN24(a) cavm_cst_cwx_cti_ctiinen24_t
#define bustype_CAVM_CST_CWX_CTI_CTIINEN24(a) CSR_TYPE_NCB32b
#define basename_CAVM_CST_CWX_CTI_CTIINEN24(a) "CST_CWX_CTI_CTIINEN24"
#define busnum_CAVM_CST_CWX_CTI_CTIINEN24(a) (a)
#define arguments_CAVM_CST_CWX_CTI_CTIINEN24(a) (a),-1,-1,-1

/**
 * Register (NCB32b) cst_cw#_cti_ctiinen25
 *
 * CST Cw Cti Ctiinen25 Register
 * This register maps trigger inputs to channels in the cross trigger system. The
 * CTIINEN registers are bit maps that allow the trigger input to be mapped to any
 * channel output, including none (0x0) and all (0xF). There is one register per
 * trigger input, so it is possible to map any combination of trigger inputs to any
 * channel outputs.
 */
union cavm_cst_cwx_cti_ctiinen25
{
    uint32_t u;
    struct cavm_cst_cwx_cti_ctiinen25_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t sbz_0                 : 28; /**< [ 31:  4](R/W) Software should write the field as all 0s. */
        uint32_t triginen              : 4;  /**< [  3:  0](R/W) Trigger input to channel mapping. */
#else /* Word 0 - Little Endian */
        uint32_t triginen              : 4;  /**< [  3:  0](R/W) Trigger input to channel mapping. */
        uint32_t sbz_0                 : 28; /**< [ 31:  4](R/W) Software should write the field as all 0s. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_cst_cwx_cti_ctiinen25_s cn; */
};
typedef union cavm_cst_cwx_cti_ctiinen25 cavm_cst_cwx_cti_ctiinen25_t;

static inline uint64_t CAVM_CST_CWX_CTI_CTIINEN25(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_CST_CWX_CTI_CTIINEN25(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CN10KA) && (a<=23))
        return 0x87a004020084ll + 0x100000ll * ((a) & 0x1f);
    if (cavm_is_model(OCTEONTX_CN10KB) && (a<=7))
        return 0x87a004020084ll + 0x100000ll * ((a) & 0x7);
    if (cavm_is_model(OCTEONTX_CNF10KA) && (a<=17))
        return 0x87a004020084ll + 0x100000ll * ((a) & 0x1f);
    if (cavm_is_model(OCTEONTX_CNF10KB) && (a<=11))
        return 0x87a004020084ll + 0x100000ll * ((a) & 0xf);
    __cavm_csr_fatal("CST_CWX_CTI_CTIINEN25", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_CST_CWX_CTI_CTIINEN25(a) cavm_cst_cwx_cti_ctiinen25_t
#define bustype_CAVM_CST_CWX_CTI_CTIINEN25(a) CSR_TYPE_NCB32b
#define basename_CAVM_CST_CWX_CTI_CTIINEN25(a) "CST_CWX_CTI_CTIINEN25"
#define busnum_CAVM_CST_CWX_CTI_CTIINEN25(a) (a)
#define arguments_CAVM_CST_CWX_CTI_CTIINEN25(a) (a),-1,-1,-1

/**
 * Register (NCB32b) cst_cw#_cti_ctiinen26
 *
 * CST Cw Cti Ctiinen26 Register
 * This register maps trigger inputs to channels in the cross trigger system. The
 * CTIINEN registers are bit maps that allow the trigger input to be mapped to any
 * channel output, including none (0x0) and all (0xF). There is one register per
 * trigger input, so it is possible to map any combination of trigger inputs to any
 * channel outputs.
 */
union cavm_cst_cwx_cti_ctiinen26
{
    uint32_t u;
    struct cavm_cst_cwx_cti_ctiinen26_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t sbz_0                 : 28; /**< [ 31:  4](R/W) Software should write the field as all 0s. */
        uint32_t triginen              : 4;  /**< [  3:  0](R/W) Trigger input to channel mapping. */
#else /* Word 0 - Little Endian */
        uint32_t triginen              : 4;  /**< [  3:  0](R/W) Trigger input to channel mapping. */
        uint32_t sbz_0                 : 28; /**< [ 31:  4](R/W) Software should write the field as all 0s. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_cst_cwx_cti_ctiinen26_s cn; */
};
typedef union cavm_cst_cwx_cti_ctiinen26 cavm_cst_cwx_cti_ctiinen26_t;

static inline uint64_t CAVM_CST_CWX_CTI_CTIINEN26(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_CST_CWX_CTI_CTIINEN26(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CN10KA) && (a<=23))
        return 0x87a004020088ll + 0x100000ll * ((a) & 0x1f);
    if (cavm_is_model(OCTEONTX_CN10KB) && (a<=7))
        return 0x87a004020088ll + 0x100000ll * ((a) & 0x7);
    if (cavm_is_model(OCTEONTX_CNF10KA) && (a<=17))
        return 0x87a004020088ll + 0x100000ll * ((a) & 0x1f);
    if (cavm_is_model(OCTEONTX_CNF10KB) && (a<=11))
        return 0x87a004020088ll + 0x100000ll * ((a) & 0xf);
    __cavm_csr_fatal("CST_CWX_CTI_CTIINEN26", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_CST_CWX_CTI_CTIINEN26(a) cavm_cst_cwx_cti_ctiinen26_t
#define bustype_CAVM_CST_CWX_CTI_CTIINEN26(a) CSR_TYPE_NCB32b
#define basename_CAVM_CST_CWX_CTI_CTIINEN26(a) "CST_CWX_CTI_CTIINEN26"
#define busnum_CAVM_CST_CWX_CTI_CTIINEN26(a) (a)
#define arguments_CAVM_CST_CWX_CTI_CTIINEN26(a) (a),-1,-1,-1

/**
 * Register (NCB32b) cst_cw#_cti_ctiinen27
 *
 * CST Cw Cti Ctiinen27 Register
 * This register maps trigger inputs to channels in the cross trigger system. The
 * CTIINEN registers are bit maps that allow the trigger input to be mapped to any
 * channel output, including none (0x0) and all (0xF). There is one register per
 * trigger input, so it is possible to map any combination of trigger inputs to any
 * channel outputs.
 */
union cavm_cst_cwx_cti_ctiinen27
{
    uint32_t u;
    struct cavm_cst_cwx_cti_ctiinen27_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t sbz_0                 : 28; /**< [ 31:  4](R/W) Software should write the field as all 0s. */
        uint32_t triginen              : 4;  /**< [  3:  0](R/W) Trigger input to channel mapping. */
#else /* Word 0 - Little Endian */
        uint32_t triginen              : 4;  /**< [  3:  0](R/W) Trigger input to channel mapping. */
        uint32_t sbz_0                 : 28; /**< [ 31:  4](R/W) Software should write the field as all 0s. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_cst_cwx_cti_ctiinen27_s cn; */
};
typedef union cavm_cst_cwx_cti_ctiinen27 cavm_cst_cwx_cti_ctiinen27_t;

static inline uint64_t CAVM_CST_CWX_CTI_CTIINEN27(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_CST_CWX_CTI_CTIINEN27(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CN10KA) && (a<=23))
        return 0x87a00402008cll + 0x100000ll * ((a) & 0x1f);
    if (cavm_is_model(OCTEONTX_CN10KB) && (a<=7))
        return 0x87a00402008cll + 0x100000ll * ((a) & 0x7);
    if (cavm_is_model(OCTEONTX_CNF10KA) && (a<=17))
        return 0x87a00402008cll + 0x100000ll * ((a) & 0x1f);
    if (cavm_is_model(OCTEONTX_CNF10KB) && (a<=11))
        return 0x87a00402008cll + 0x100000ll * ((a) & 0xf);
    __cavm_csr_fatal("CST_CWX_CTI_CTIINEN27", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_CST_CWX_CTI_CTIINEN27(a) cavm_cst_cwx_cti_ctiinen27_t
#define bustype_CAVM_CST_CWX_CTI_CTIINEN27(a) CSR_TYPE_NCB32b
#define basename_CAVM_CST_CWX_CTI_CTIINEN27(a) "CST_CWX_CTI_CTIINEN27"
#define busnum_CAVM_CST_CWX_CTI_CTIINEN27(a) (a)
#define arguments_CAVM_CST_CWX_CTI_CTIINEN27(a) (a),-1,-1,-1

/**
 * Register (NCB32b) cst_cw#_cti_ctiinen28
 *
 * CST Cw Cti Ctiinen28 Register
 * This register maps trigger inputs to channels in the cross trigger system. The
 * CTIINEN registers are bit maps that allow the trigger input to be mapped to any
 * channel output, including none (0x0) and all (0xF). There is one register per
 * trigger input, so it is possible to map any combination of trigger inputs to any
 * channel outputs.
 */
union cavm_cst_cwx_cti_ctiinen28
{
    uint32_t u;
    struct cavm_cst_cwx_cti_ctiinen28_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t sbz_0                 : 28; /**< [ 31:  4](R/W) Software should write the field as all 0s. */
        uint32_t triginen              : 4;  /**< [  3:  0](R/W) Trigger input to channel mapping. */
#else /* Word 0 - Little Endian */
        uint32_t triginen              : 4;  /**< [  3:  0](R/W) Trigger input to channel mapping. */
        uint32_t sbz_0                 : 28; /**< [ 31:  4](R/W) Software should write the field as all 0s. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_cst_cwx_cti_ctiinen28_s cn; */
};
typedef union cavm_cst_cwx_cti_ctiinen28 cavm_cst_cwx_cti_ctiinen28_t;

static inline uint64_t CAVM_CST_CWX_CTI_CTIINEN28(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_CST_CWX_CTI_CTIINEN28(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CN10KA) && (a<=23))
        return 0x87a004020090ll + 0x100000ll * ((a) & 0x1f);
    if (cavm_is_model(OCTEONTX_CN10KB) && (a<=7))
        return 0x87a004020090ll + 0x100000ll * ((a) & 0x7);
    if (cavm_is_model(OCTEONTX_CNF10KA) && (a<=17))
        return 0x87a004020090ll + 0x100000ll * ((a) & 0x1f);
    if (cavm_is_model(OCTEONTX_CNF10KB) && (a<=11))
        return 0x87a004020090ll + 0x100000ll * ((a) & 0xf);
    __cavm_csr_fatal("CST_CWX_CTI_CTIINEN28", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_CST_CWX_CTI_CTIINEN28(a) cavm_cst_cwx_cti_ctiinen28_t
#define bustype_CAVM_CST_CWX_CTI_CTIINEN28(a) CSR_TYPE_NCB32b
#define basename_CAVM_CST_CWX_CTI_CTIINEN28(a) "CST_CWX_CTI_CTIINEN28"
#define busnum_CAVM_CST_CWX_CTI_CTIINEN28(a) (a)
#define arguments_CAVM_CST_CWX_CTI_CTIINEN28(a) (a),-1,-1,-1

/**
 * Register (NCB32b) cst_cw#_cti_ctiinen29
 *
 * CST Cw Cti Ctiinen29 Register
 * This register maps trigger inputs to channels in the cross trigger system. The
 * CTIINEN registers are bit maps that allow the trigger input to be mapped to any
 * channel output, including none (0x0) and all (0xF). There is one register per
 * trigger input, so it is possible to map any combination of trigger inputs to any
 * channel outputs.
 */
union cavm_cst_cwx_cti_ctiinen29
{
    uint32_t u;
    struct cavm_cst_cwx_cti_ctiinen29_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t sbz_0                 : 28; /**< [ 31:  4](R/W) Software should write the field as all 0s. */
        uint32_t triginen              : 4;  /**< [  3:  0](R/W) Trigger input to channel mapping. */
#else /* Word 0 - Little Endian */
        uint32_t triginen              : 4;  /**< [  3:  0](R/W) Trigger input to channel mapping. */
        uint32_t sbz_0                 : 28; /**< [ 31:  4](R/W) Software should write the field as all 0s. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_cst_cwx_cti_ctiinen29_s cn; */
};
typedef union cavm_cst_cwx_cti_ctiinen29 cavm_cst_cwx_cti_ctiinen29_t;

static inline uint64_t CAVM_CST_CWX_CTI_CTIINEN29(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_CST_CWX_CTI_CTIINEN29(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CN10KA) && (a<=23))
        return 0x87a004020094ll + 0x100000ll * ((a) & 0x1f);
    if (cavm_is_model(OCTEONTX_CN10KB) && (a<=7))
        return 0x87a004020094ll + 0x100000ll * ((a) & 0x7);
    if (cavm_is_model(OCTEONTX_CNF10KA) && (a<=17))
        return 0x87a004020094ll + 0x100000ll * ((a) & 0x1f);
    if (cavm_is_model(OCTEONTX_CNF10KB) && (a<=11))
        return 0x87a004020094ll + 0x100000ll * ((a) & 0xf);
    __cavm_csr_fatal("CST_CWX_CTI_CTIINEN29", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_CST_CWX_CTI_CTIINEN29(a) cavm_cst_cwx_cti_ctiinen29_t
#define bustype_CAVM_CST_CWX_CTI_CTIINEN29(a) CSR_TYPE_NCB32b
#define basename_CAVM_CST_CWX_CTI_CTIINEN29(a) "CST_CWX_CTI_CTIINEN29"
#define busnum_CAVM_CST_CWX_CTI_CTIINEN29(a) (a)
#define arguments_CAVM_CST_CWX_CTI_CTIINEN29(a) (a),-1,-1,-1

/**
 * Register (NCB32b) cst_cw#_cti_ctiinen3
 *
 * CST Cw Cti Ctiinen3 Register
 * This register maps trigger inputs to channels in the cross trigger system. The
 * CTIINEN registers are bit maps that allow the trigger input to be mapped to any
 * channel output, including none (0x0) and all (0xF). There is one register per
 * trigger input, so it is possible to map any combination of trigger inputs to any
 * channel outputs.
 */
union cavm_cst_cwx_cti_ctiinen3
{
    uint32_t u;
    struct cavm_cst_cwx_cti_ctiinen3_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t sbz_0                 : 28; /**< [ 31:  4](R/W) Software should write the field as all 0s. */
        uint32_t triginen              : 4;  /**< [  3:  0](R/W) Trigger input to channel mapping. */
#else /* Word 0 - Little Endian */
        uint32_t triginen              : 4;  /**< [  3:  0](R/W) Trigger input to channel mapping. */
        uint32_t sbz_0                 : 28; /**< [ 31:  4](R/W) Software should write the field as all 0s. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_cst_cwx_cti_ctiinen3_s cn; */
};
typedef union cavm_cst_cwx_cti_ctiinen3 cavm_cst_cwx_cti_ctiinen3_t;

static inline uint64_t CAVM_CST_CWX_CTI_CTIINEN3(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_CST_CWX_CTI_CTIINEN3(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CN10KA) && (a<=23))
        return 0x87a00402002cll + 0x100000ll * ((a) & 0x1f);
    if (cavm_is_model(OCTEONTX_CN10KB) && (a<=7))
        return 0x87a00402002cll + 0x100000ll * ((a) & 0x7);
    if (cavm_is_model(OCTEONTX_CNF10KA) && (a<=17))
        return 0x87a00402002cll + 0x100000ll * ((a) & 0x1f);
    if (cavm_is_model(OCTEONTX_CNF10KB) && (a<=11))
        return 0x87a00402002cll + 0x100000ll * ((a) & 0xf);
    __cavm_csr_fatal("CST_CWX_CTI_CTIINEN3", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_CST_CWX_CTI_CTIINEN3(a) cavm_cst_cwx_cti_ctiinen3_t
#define bustype_CAVM_CST_CWX_CTI_CTIINEN3(a) CSR_TYPE_NCB32b
#define basename_CAVM_CST_CWX_CTI_CTIINEN3(a) "CST_CWX_CTI_CTIINEN3"
#define busnum_CAVM_CST_CWX_CTI_CTIINEN3(a) (a)
#define arguments_CAVM_CST_CWX_CTI_CTIINEN3(a) (a),-1,-1,-1

/**
 * Register (NCB32b) cst_cw#_cti_ctiinen30
 *
 * CST Cw Cti Ctiinen30 Register
 * This register maps trigger inputs to channels in the cross trigger system. The
 * CTIINEN registers are bit maps that allow the trigger input to be mapped to any
 * channel output, including none (0x0) and all (0xF). There is one register per
 * trigger input, so it is possible to map any combination of trigger inputs to any
 * channel outputs.
 */
union cavm_cst_cwx_cti_ctiinen30
{
    uint32_t u;
    struct cavm_cst_cwx_cti_ctiinen30_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t sbz_0                 : 28; /**< [ 31:  4](R/W) Software should write the field as all 0s. */
        uint32_t triginen              : 4;  /**< [  3:  0](R/W) Trigger input to channel mapping. */
#else /* Word 0 - Little Endian */
        uint32_t triginen              : 4;  /**< [  3:  0](R/W) Trigger input to channel mapping. */
        uint32_t sbz_0                 : 28; /**< [ 31:  4](R/W) Software should write the field as all 0s. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_cst_cwx_cti_ctiinen30_s cn; */
};
typedef union cavm_cst_cwx_cti_ctiinen30 cavm_cst_cwx_cti_ctiinen30_t;

static inline uint64_t CAVM_CST_CWX_CTI_CTIINEN30(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_CST_CWX_CTI_CTIINEN30(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CN10KA) && (a<=23))
        return 0x87a004020098ll + 0x100000ll * ((a) & 0x1f);
    if (cavm_is_model(OCTEONTX_CN10KB) && (a<=7))
        return 0x87a004020098ll + 0x100000ll * ((a) & 0x7);
    if (cavm_is_model(OCTEONTX_CNF10KA) && (a<=17))
        return 0x87a004020098ll + 0x100000ll * ((a) & 0x1f);
    if (cavm_is_model(OCTEONTX_CNF10KB) && (a<=11))
        return 0x87a004020098ll + 0x100000ll * ((a) & 0xf);
    __cavm_csr_fatal("CST_CWX_CTI_CTIINEN30", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_CST_CWX_CTI_CTIINEN30(a) cavm_cst_cwx_cti_ctiinen30_t
#define bustype_CAVM_CST_CWX_CTI_CTIINEN30(a) CSR_TYPE_NCB32b
#define basename_CAVM_CST_CWX_CTI_CTIINEN30(a) "CST_CWX_CTI_CTIINEN30"
#define busnum_CAVM_CST_CWX_CTI_CTIINEN30(a) (a)
#define arguments_CAVM_CST_CWX_CTI_CTIINEN30(a) (a),-1,-1,-1

/**
 * Register (NCB32b) cst_cw#_cti_ctiinen31
 *
 * CST Cw Cti Ctiinen31 Register
 * This register maps trigger inputs to channels in the cross trigger system. The
 * CTIINEN registers are bit maps that allow the trigger input to be mapped to any
 * channel output, including none (0x0) and all (0xF). There is one register per
 * trigger input, so it is possible to map any combination of trigger inputs to any
 * channel outputs.
 */
union cavm_cst_cwx_cti_ctiinen31
{
    uint32_t u;
    struct cavm_cst_cwx_cti_ctiinen31_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t sbz_0                 : 28; /**< [ 31:  4](R/W) Software should write the field as all 0s. */
        uint32_t triginen              : 4;  /**< [  3:  0](R/W) Trigger input to channel mapping. */
#else /* Word 0 - Little Endian */
        uint32_t triginen              : 4;  /**< [  3:  0](R/W) Trigger input to channel mapping. */
        uint32_t sbz_0                 : 28; /**< [ 31:  4](R/W) Software should write the field as all 0s. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_cst_cwx_cti_ctiinen31_s cn; */
};
typedef union cavm_cst_cwx_cti_ctiinen31 cavm_cst_cwx_cti_ctiinen31_t;

static inline uint64_t CAVM_CST_CWX_CTI_CTIINEN31(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_CST_CWX_CTI_CTIINEN31(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CN10KA) && (a<=23))
        return 0x87a00402009cll + 0x100000ll * ((a) & 0x1f);
    if (cavm_is_model(OCTEONTX_CN10KB) && (a<=7))
        return 0x87a00402009cll + 0x100000ll * ((a) & 0x7);
    if (cavm_is_model(OCTEONTX_CNF10KA) && (a<=17))
        return 0x87a00402009cll + 0x100000ll * ((a) & 0x1f);
    if (cavm_is_model(OCTEONTX_CNF10KB) && (a<=11))
        return 0x87a00402009cll + 0x100000ll * ((a) & 0xf);
    __cavm_csr_fatal("CST_CWX_CTI_CTIINEN31", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_CST_CWX_CTI_CTIINEN31(a) cavm_cst_cwx_cti_ctiinen31_t
#define bustype_CAVM_CST_CWX_CTI_CTIINEN31(a) CSR_TYPE_NCB32b
#define basename_CAVM_CST_CWX_CTI_CTIINEN31(a) "CST_CWX_CTI_CTIINEN31"
#define busnum_CAVM_CST_CWX_CTI_CTIINEN31(a) (a)
#define arguments_CAVM_CST_CWX_CTI_CTIINEN31(a) (a),-1,-1,-1

/**
 * Register (NCB32b) cst_cw#_cti_ctiinen4
 *
 * CST Cw Cti Ctiinen4 Register
 * This register maps trigger inputs to channels in the cross trigger system. The
 * CTIINEN registers are bit maps that allow the trigger input to be mapped to any
 * channel output, including none (0x0) and all (0xF). There is one register per
 * trigger input, so it is possible to map any combination of trigger inputs to any
 * channel outputs.
 */
union cavm_cst_cwx_cti_ctiinen4
{
    uint32_t u;
    struct cavm_cst_cwx_cti_ctiinen4_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t sbz_0                 : 28; /**< [ 31:  4](R/W) Software should write the field as all 0s. */
        uint32_t triginen              : 4;  /**< [  3:  0](R/W) Trigger input to channel mapping. */
#else /* Word 0 - Little Endian */
        uint32_t triginen              : 4;  /**< [  3:  0](R/W) Trigger input to channel mapping. */
        uint32_t sbz_0                 : 28; /**< [ 31:  4](R/W) Software should write the field as all 0s. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_cst_cwx_cti_ctiinen4_s cn; */
};
typedef union cavm_cst_cwx_cti_ctiinen4 cavm_cst_cwx_cti_ctiinen4_t;

static inline uint64_t CAVM_CST_CWX_CTI_CTIINEN4(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_CST_CWX_CTI_CTIINEN4(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CN10KA) && (a<=23))
        return 0x87a004020030ll + 0x100000ll * ((a) & 0x1f);
    if (cavm_is_model(OCTEONTX_CN10KB) && (a<=7))
        return 0x87a004020030ll + 0x100000ll * ((a) & 0x7);
    if (cavm_is_model(OCTEONTX_CNF10KA) && (a<=17))
        return 0x87a004020030ll + 0x100000ll * ((a) & 0x1f);
    if (cavm_is_model(OCTEONTX_CNF10KB) && (a<=11))
        return 0x87a004020030ll + 0x100000ll * ((a) & 0xf);
    __cavm_csr_fatal("CST_CWX_CTI_CTIINEN4", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_CST_CWX_CTI_CTIINEN4(a) cavm_cst_cwx_cti_ctiinen4_t
#define bustype_CAVM_CST_CWX_CTI_CTIINEN4(a) CSR_TYPE_NCB32b
#define basename_CAVM_CST_CWX_CTI_CTIINEN4(a) "CST_CWX_CTI_CTIINEN4"
#define busnum_CAVM_CST_CWX_CTI_CTIINEN4(a) (a)
#define arguments_CAVM_CST_CWX_CTI_CTIINEN4(a) (a),-1,-1,-1

/**
 * Register (NCB32b) cst_cw#_cti_ctiinen5
 *
 * CST Cw Cti Ctiinen5 Register
 * This register maps trigger inputs to channels in the cross trigger system. The
 * CTIINEN registers are bit maps that allow the trigger input to be mapped to any
 * channel output, including none (0x0) and all (0xF). There is one register per
 * trigger input, so it is possible to map any combination of trigger inputs to any
 * channel outputs.
 */
union cavm_cst_cwx_cti_ctiinen5
{
    uint32_t u;
    struct cavm_cst_cwx_cti_ctiinen5_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t sbz_0                 : 28; /**< [ 31:  4](R/W) Software should write the field as all 0s. */
        uint32_t triginen              : 4;  /**< [  3:  0](R/W) Trigger input to channel mapping. */
#else /* Word 0 - Little Endian */
        uint32_t triginen              : 4;  /**< [  3:  0](R/W) Trigger input to channel mapping. */
        uint32_t sbz_0                 : 28; /**< [ 31:  4](R/W) Software should write the field as all 0s. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_cst_cwx_cti_ctiinen5_s cn; */
};
typedef union cavm_cst_cwx_cti_ctiinen5 cavm_cst_cwx_cti_ctiinen5_t;

static inline uint64_t CAVM_CST_CWX_CTI_CTIINEN5(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_CST_CWX_CTI_CTIINEN5(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CN10KA) && (a<=23))
        return 0x87a004020034ll + 0x100000ll * ((a) & 0x1f);
    if (cavm_is_model(OCTEONTX_CN10KB) && (a<=7))
        return 0x87a004020034ll + 0x100000ll * ((a) & 0x7);
    if (cavm_is_model(OCTEONTX_CNF10KA) && (a<=17))
        return 0x87a004020034ll + 0x100000ll * ((a) & 0x1f);
    if (cavm_is_model(OCTEONTX_CNF10KB) && (a<=11))
        return 0x87a004020034ll + 0x100000ll * ((a) & 0xf);
    __cavm_csr_fatal("CST_CWX_CTI_CTIINEN5", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_CST_CWX_CTI_CTIINEN5(a) cavm_cst_cwx_cti_ctiinen5_t
#define bustype_CAVM_CST_CWX_CTI_CTIINEN5(a) CSR_TYPE_NCB32b
#define basename_CAVM_CST_CWX_CTI_CTIINEN5(a) "CST_CWX_CTI_CTIINEN5"
#define busnum_CAVM_CST_CWX_CTI_CTIINEN5(a) (a)
#define arguments_CAVM_CST_CWX_CTI_CTIINEN5(a) (a),-1,-1,-1

/**
 * Register (NCB32b) cst_cw#_cti_ctiinen6
 *
 * CST Cw Cti Ctiinen6 Register
 * This register maps trigger inputs to channels in the cross trigger system. The
 * CTIINEN registers are bit maps that allow the trigger input to be mapped to any
 * channel output, including none (0x0) and all (0xF). There is one register per
 * trigger input, so it is possible to map any combination of trigger inputs to any
 * channel outputs.
 */
union cavm_cst_cwx_cti_ctiinen6
{
    uint32_t u;
    struct cavm_cst_cwx_cti_ctiinen6_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t sbz_0                 : 28; /**< [ 31:  4](R/W) Software should write the field as all 0s. */
        uint32_t triginen              : 4;  /**< [  3:  0](R/W) Trigger input to channel mapping. */
#else /* Word 0 - Little Endian */
        uint32_t triginen              : 4;  /**< [  3:  0](R/W) Trigger input to channel mapping. */
        uint32_t sbz_0                 : 28; /**< [ 31:  4](R/W) Software should write the field as all 0s. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_cst_cwx_cti_ctiinen6_s cn; */
};
typedef union cavm_cst_cwx_cti_ctiinen6 cavm_cst_cwx_cti_ctiinen6_t;

static inline uint64_t CAVM_CST_CWX_CTI_CTIINEN6(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_CST_CWX_CTI_CTIINEN6(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CN10KA) && (a<=23))
        return 0x87a004020038ll + 0x100000ll * ((a) & 0x1f);
    if (cavm_is_model(OCTEONTX_CN10KB) && (a<=7))
        return 0x87a004020038ll + 0x100000ll * ((a) & 0x7);
    if (cavm_is_model(OCTEONTX_CNF10KA) && (a<=17))
        return 0x87a004020038ll + 0x100000ll * ((a) & 0x1f);
    if (cavm_is_model(OCTEONTX_CNF10KB) && (a<=11))
        return 0x87a004020038ll + 0x100000ll * ((a) & 0xf);
    __cavm_csr_fatal("CST_CWX_CTI_CTIINEN6", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_CST_CWX_CTI_CTIINEN6(a) cavm_cst_cwx_cti_ctiinen6_t
#define bustype_CAVM_CST_CWX_CTI_CTIINEN6(a) CSR_TYPE_NCB32b
#define basename_CAVM_CST_CWX_CTI_CTIINEN6(a) "CST_CWX_CTI_CTIINEN6"
#define busnum_CAVM_CST_CWX_CTI_CTIINEN6(a) (a)
#define arguments_CAVM_CST_CWX_CTI_CTIINEN6(a) (a),-1,-1,-1

/**
 * Register (NCB32b) cst_cw#_cti_ctiinen7
 *
 * CST Cw Cti Ctiinen7 Register
 * This register maps trigger inputs to channels in the cross trigger system. The
 * CTIINEN registers are bit maps that allow the trigger input to be mapped to any
 * channel output, including none (0x0) and all (0xF). There is one register per
 * trigger input, so it is possible to map any combination of trigger inputs to any
 * channel outputs.
 */
union cavm_cst_cwx_cti_ctiinen7
{
    uint32_t u;
    struct cavm_cst_cwx_cti_ctiinen7_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t sbz_0                 : 28; /**< [ 31:  4](R/W) Software should write the field as all 0s. */
        uint32_t triginen              : 4;  /**< [  3:  0](R/W) Trigger input to channel mapping. */
#else /* Word 0 - Little Endian */
        uint32_t triginen              : 4;  /**< [  3:  0](R/W) Trigger input to channel mapping. */
        uint32_t sbz_0                 : 28; /**< [ 31:  4](R/W) Software should write the field as all 0s. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_cst_cwx_cti_ctiinen7_s cn; */
};
typedef union cavm_cst_cwx_cti_ctiinen7 cavm_cst_cwx_cti_ctiinen7_t;

static inline uint64_t CAVM_CST_CWX_CTI_CTIINEN7(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_CST_CWX_CTI_CTIINEN7(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CN10KA) && (a<=23))
        return 0x87a00402003cll + 0x100000ll * ((a) & 0x1f);
    if (cavm_is_model(OCTEONTX_CN10KB) && (a<=7))
        return 0x87a00402003cll + 0x100000ll * ((a) & 0x7);
    if (cavm_is_model(OCTEONTX_CNF10KA) && (a<=17))
        return 0x87a00402003cll + 0x100000ll * ((a) & 0x1f);
    if (cavm_is_model(OCTEONTX_CNF10KB) && (a<=11))
        return 0x87a00402003cll + 0x100000ll * ((a) & 0xf);
    __cavm_csr_fatal("CST_CWX_CTI_CTIINEN7", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_CST_CWX_CTI_CTIINEN7(a) cavm_cst_cwx_cti_ctiinen7_t
#define bustype_CAVM_CST_CWX_CTI_CTIINEN7(a) CSR_TYPE_NCB32b
#define basename_CAVM_CST_CWX_CTI_CTIINEN7(a) "CST_CWX_CTI_CTIINEN7"
#define busnum_CAVM_CST_CWX_CTI_CTIINEN7(a) (a)
#define arguments_CAVM_CST_CWX_CTI_CTIINEN7(a) (a),-1,-1,-1

/**
 * Register (NCB32b) cst_cw#_cti_ctiinen8
 *
 * CST Cw Cti Ctiinen8 Register
 * This register maps trigger inputs to channels in the cross trigger system. The
 * CTIINEN registers are bit maps that allow the trigger input to be mapped to any
 * channel output, including none (0x0) and all (0xF). There is one register per
 * trigger input, so it is possible to map any combination of trigger inputs to any
 * channel outputs.
 */
union cavm_cst_cwx_cti_ctiinen8
{
    uint32_t u;
    struct cavm_cst_cwx_cti_ctiinen8_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t sbz_0                 : 28; /**< [ 31:  4](R/W) Software should write the field as all 0s. */
        uint32_t triginen              : 4;  /**< [  3:  0](R/W) Trigger input to channel mapping. */
#else /* Word 0 - Little Endian */
        uint32_t triginen              : 4;  /**< [  3:  0](R/W) Trigger input to channel mapping. */
        uint32_t sbz_0                 : 28; /**< [ 31:  4](R/W) Software should write the field as all 0s. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_cst_cwx_cti_ctiinen8_s cn; */
};
typedef union cavm_cst_cwx_cti_ctiinen8 cavm_cst_cwx_cti_ctiinen8_t;

static inline uint64_t CAVM_CST_CWX_CTI_CTIINEN8(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_CST_CWX_CTI_CTIINEN8(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CN10KA) && (a<=23))
        return 0x87a004020040ll + 0x100000ll * ((a) & 0x1f);
    if (cavm_is_model(OCTEONTX_CN10KB) && (a<=7))
        return 0x87a004020040ll + 0x100000ll * ((a) & 0x7);
    if (cavm_is_model(OCTEONTX_CNF10KA) && (a<=17))
        return 0x87a004020040ll + 0x100000ll * ((a) & 0x1f);
    if (cavm_is_model(OCTEONTX_CNF10KB) && (a<=11))
        return 0x87a004020040ll + 0x100000ll * ((a) & 0xf);
    __cavm_csr_fatal("CST_CWX_CTI_CTIINEN8", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_CST_CWX_CTI_CTIINEN8(a) cavm_cst_cwx_cti_ctiinen8_t
#define bustype_CAVM_CST_CWX_CTI_CTIINEN8(a) CSR_TYPE_NCB32b
#define basename_CAVM_CST_CWX_CTI_CTIINEN8(a) "CST_CWX_CTI_CTIINEN8"
#define busnum_CAVM_CST_CWX_CTI_CTIINEN8(a) (a)
#define arguments_CAVM_CST_CWX_CTI_CTIINEN8(a) (a),-1,-1,-1

/**
 * Register (NCB32b) cst_cw#_cti_ctiinen9
 *
 * CST Cw Cti Ctiinen9 Register
 * This register maps trigger inputs to channels in the cross trigger system. The
 * CTIINEN registers are bit maps that allow the trigger input to be mapped to any
 * channel output, including none (0x0) and all (0xF). There is one register per
 * trigger input, so it is possible to map any combination of trigger inputs to any
 * channel outputs.
 */
union cavm_cst_cwx_cti_ctiinen9
{
    uint32_t u;
    struct cavm_cst_cwx_cti_ctiinen9_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t sbz_0                 : 28; /**< [ 31:  4](R/W) Software should write the field as all 0s. */
        uint32_t triginen              : 4;  /**< [  3:  0](R/W) Trigger input to channel mapping. */
#else /* Word 0 - Little Endian */
        uint32_t triginen              : 4;  /**< [  3:  0](R/W) Trigger input to channel mapping. */
        uint32_t sbz_0                 : 28; /**< [ 31:  4](R/W) Software should write the field as all 0s. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_cst_cwx_cti_ctiinen9_s cn; */
};
typedef union cavm_cst_cwx_cti_ctiinen9 cavm_cst_cwx_cti_ctiinen9_t;

static inline uint64_t CAVM_CST_CWX_CTI_CTIINEN9(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_CST_CWX_CTI_CTIINEN9(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CN10KA) && (a<=23))
        return 0x87a004020044ll + 0x100000ll * ((a) & 0x1f);
    if (cavm_is_model(OCTEONTX_CN10KB) && (a<=7))
        return 0x87a004020044ll + 0x100000ll * ((a) & 0x7);
    if (cavm_is_model(OCTEONTX_CNF10KA) && (a<=17))
        return 0x87a004020044ll + 0x100000ll * ((a) & 0x1f);
    if (cavm_is_model(OCTEONTX_CNF10KB) && (a<=11))
        return 0x87a004020044ll + 0x100000ll * ((a) & 0xf);
    __cavm_csr_fatal("CST_CWX_CTI_CTIINEN9", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_CST_CWX_CTI_CTIINEN9(a) cavm_cst_cwx_cti_ctiinen9_t
#define bustype_CAVM_CST_CWX_CTI_CTIINEN9(a) CSR_TYPE_NCB32b
#define basename_CAVM_CST_CWX_CTI_CTIINEN9(a) "CST_CWX_CTI_CTIINEN9"
#define busnum_CAVM_CST_CWX_CTI_CTIINEN9(a) (a)
#define arguments_CAVM_CST_CWX_CTI_CTIINEN9(a) (a),-1,-1,-1

/**
 * Register (NCB32b) cst_cw#_cti_ctiintack
 *
 * CST Cw Cti Ctiintack Register
 * Software acknowledge for trigger outputs. The CTIINTACK register is a bit map that
 * allows selective clearing of trigger output events. If the SW_HANDSHAKE parameter
 * for a trigger output is set, indicating that the output latches HIGH when an event
 * is sent to that output, then the output remains HIGH until the corresponding INTACK
 * bit is written to a 1. A write of a bit to 0 has no effect. This allows different
 * software threads to be responsible for clearing different trigger outputs without
 * needing to perform a read-modify-write operation to find which bits are set.
 */
union cavm_cst_cwx_cti_ctiintack
{
    uint32_t u;
    struct cavm_cst_cwx_cti_ctiintack_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t intack                : 32; /**< [ 31:  0](WO) Acknowledges the corresponding event_out output. */
#else /* Word 0 - Little Endian */
        uint32_t intack                : 32; /**< [ 31:  0](WO) Acknowledges the corresponding event_out output. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_cst_cwx_cti_ctiintack_s cn; */
};
typedef union cavm_cst_cwx_cti_ctiintack cavm_cst_cwx_cti_ctiintack_t;

static inline uint64_t CAVM_CST_CWX_CTI_CTIINTACK(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_CST_CWX_CTI_CTIINTACK(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CN10KA) && (a<=23))
        return 0x87a004020010ll + 0x100000ll * ((a) & 0x1f);
    if (cavm_is_model(OCTEONTX_CN10KB) && (a<=7))
        return 0x87a004020010ll + 0x100000ll * ((a) & 0x7);
    if (cavm_is_model(OCTEONTX_CNF10KA) && (a<=17))
        return 0x87a004020010ll + 0x100000ll * ((a) & 0x1f);
    if (cavm_is_model(OCTEONTX_CNF10KB) && (a<=11))
        return 0x87a004020010ll + 0x100000ll * ((a) & 0xf);
    __cavm_csr_fatal("CST_CWX_CTI_CTIINTACK", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_CST_CWX_CTI_CTIINTACK(a) cavm_cst_cwx_cti_ctiintack_t
#define bustype_CAVM_CST_CWX_CTI_CTIINTACK(a) CSR_TYPE_NCB32b
#define basename_CAVM_CST_CWX_CTI_CTIINTACK(a) "CST_CWX_CTI_CTIINTACK"
#define busnum_CAVM_CST_CWX_CTI_CTIINTACK(a) (a)
#define arguments_CAVM_CST_CWX_CTI_CTIINTACK(a) (a),-1,-1,-1

/**
 * Register (NCB32b) cst_cw#_cti_ctiouten0
 *
 * CST Cw Cti Ctiouten0 Register
 * This register maps channels in the cross trigger system to trigger outputs. The
 * CTIOUTEN registers are bit maps that allow any channel input to be mapped to the
 * trigger output, including none (0x0) and all (0xF). There is one register per
 * trigger output so it is possible to map any channel input to any combination of
 * trigger outputs.
 */
union cavm_cst_cwx_cti_ctiouten0
{
    uint32_t u;
    struct cavm_cst_cwx_cti_ctiouten0_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t sbz_0                 : 28; /**< [ 31:  4](R/W) Software should write the field as all 0s. */
        uint32_t trigouten             : 4;  /**< [  3:  0](R/W) Channel to trigger output mapping. */
#else /* Word 0 - Little Endian */
        uint32_t trigouten             : 4;  /**< [  3:  0](R/W) Channel to trigger output mapping. */
        uint32_t sbz_0                 : 28; /**< [ 31:  4](R/W) Software should write the field as all 0s. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_cst_cwx_cti_ctiouten0_s cn; */
};
typedef union cavm_cst_cwx_cti_ctiouten0 cavm_cst_cwx_cti_ctiouten0_t;

static inline uint64_t CAVM_CST_CWX_CTI_CTIOUTEN0(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_CST_CWX_CTI_CTIOUTEN0(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CN10KA) && (a<=23))
        return 0x87a0040200a0ll + 0x100000ll * ((a) & 0x1f);
    if (cavm_is_model(OCTEONTX_CN10KB) && (a<=7))
        return 0x87a0040200a0ll + 0x100000ll * ((a) & 0x7);
    if (cavm_is_model(OCTEONTX_CNF10KA) && (a<=17))
        return 0x87a0040200a0ll + 0x100000ll * ((a) & 0x1f);
    if (cavm_is_model(OCTEONTX_CNF10KB) && (a<=11))
        return 0x87a0040200a0ll + 0x100000ll * ((a) & 0xf);
    __cavm_csr_fatal("CST_CWX_CTI_CTIOUTEN0", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_CST_CWX_CTI_CTIOUTEN0(a) cavm_cst_cwx_cti_ctiouten0_t
#define bustype_CAVM_CST_CWX_CTI_CTIOUTEN0(a) CSR_TYPE_NCB32b
#define basename_CAVM_CST_CWX_CTI_CTIOUTEN0(a) "CST_CWX_CTI_CTIOUTEN0"
#define busnum_CAVM_CST_CWX_CTI_CTIOUTEN0(a) (a)
#define arguments_CAVM_CST_CWX_CTI_CTIOUTEN0(a) (a),-1,-1,-1

/**
 * Register (NCB32b) cst_cw#_cti_ctiouten1
 *
 * CST Cw Cti Ctiouten1 Register
 * This register maps channels in the cross trigger system to trigger outputs. The
 * CTIOUTEN registers are bit maps that allow any channel input to be mapped to the
 * trigger output, including none (0x0) and all (0xF). There is one register per
 * trigger output so it is possible to map any channel input to any combination of
 * trigger outputs.
 */
union cavm_cst_cwx_cti_ctiouten1
{
    uint32_t u;
    struct cavm_cst_cwx_cti_ctiouten1_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t sbz_0                 : 28; /**< [ 31:  4](R/W) Software should write the field as all 0s. */
        uint32_t trigouten             : 4;  /**< [  3:  0](R/W) Channel to trigger output mapping. */
#else /* Word 0 - Little Endian */
        uint32_t trigouten             : 4;  /**< [  3:  0](R/W) Channel to trigger output mapping. */
        uint32_t sbz_0                 : 28; /**< [ 31:  4](R/W) Software should write the field as all 0s. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_cst_cwx_cti_ctiouten1_s cn; */
};
typedef union cavm_cst_cwx_cti_ctiouten1 cavm_cst_cwx_cti_ctiouten1_t;

static inline uint64_t CAVM_CST_CWX_CTI_CTIOUTEN1(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_CST_CWX_CTI_CTIOUTEN1(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CN10KA) && (a<=23))
        return 0x87a0040200a4ll + 0x100000ll * ((a) & 0x1f);
    if (cavm_is_model(OCTEONTX_CN10KB) && (a<=7))
        return 0x87a0040200a4ll + 0x100000ll * ((a) & 0x7);
    if (cavm_is_model(OCTEONTX_CNF10KA) && (a<=17))
        return 0x87a0040200a4ll + 0x100000ll * ((a) & 0x1f);
    if (cavm_is_model(OCTEONTX_CNF10KB) && (a<=11))
        return 0x87a0040200a4ll + 0x100000ll * ((a) & 0xf);
    __cavm_csr_fatal("CST_CWX_CTI_CTIOUTEN1", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_CST_CWX_CTI_CTIOUTEN1(a) cavm_cst_cwx_cti_ctiouten1_t
#define bustype_CAVM_CST_CWX_CTI_CTIOUTEN1(a) CSR_TYPE_NCB32b
#define basename_CAVM_CST_CWX_CTI_CTIOUTEN1(a) "CST_CWX_CTI_CTIOUTEN1"
#define busnum_CAVM_CST_CWX_CTI_CTIOUTEN1(a) (a)
#define arguments_CAVM_CST_CWX_CTI_CTIOUTEN1(a) (a),-1,-1,-1

/**
 * Register (NCB32b) cst_cw#_cti_ctiouten10
 *
 * CST Cw Cti Ctiouten10 Register
 * This register maps channels in the cross trigger system to trigger outputs. The
 * CTIOUTEN registers are bit maps that allow any channel input to be mapped to the
 * trigger output, including none (0x0) and all (0xF). There is one register per
 * trigger output so it is possible to map any channel input to any combination of
 * trigger outputs.
 */
union cavm_cst_cwx_cti_ctiouten10
{
    uint32_t u;
    struct cavm_cst_cwx_cti_ctiouten10_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t sbz_0                 : 28; /**< [ 31:  4](R/W) Software should write the field as all 0s. */
        uint32_t trigouten             : 4;  /**< [  3:  0](R/W) Channel to trigger output mapping. */
#else /* Word 0 - Little Endian */
        uint32_t trigouten             : 4;  /**< [  3:  0](R/W) Channel to trigger output mapping. */
        uint32_t sbz_0                 : 28; /**< [ 31:  4](R/W) Software should write the field as all 0s. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_cst_cwx_cti_ctiouten10_s cn; */
};
typedef union cavm_cst_cwx_cti_ctiouten10 cavm_cst_cwx_cti_ctiouten10_t;

static inline uint64_t CAVM_CST_CWX_CTI_CTIOUTEN10(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_CST_CWX_CTI_CTIOUTEN10(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CN10KA) && (a<=23))
        return 0x87a0040200c8ll + 0x100000ll * ((a) & 0x1f);
    if (cavm_is_model(OCTEONTX_CN10KB) && (a<=7))
        return 0x87a0040200c8ll + 0x100000ll * ((a) & 0x7);
    if (cavm_is_model(OCTEONTX_CNF10KA) && (a<=17))
        return 0x87a0040200c8ll + 0x100000ll * ((a) & 0x1f);
    if (cavm_is_model(OCTEONTX_CNF10KB) && (a<=11))
        return 0x87a0040200c8ll + 0x100000ll * ((a) & 0xf);
    __cavm_csr_fatal("CST_CWX_CTI_CTIOUTEN10", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_CST_CWX_CTI_CTIOUTEN10(a) cavm_cst_cwx_cti_ctiouten10_t
#define bustype_CAVM_CST_CWX_CTI_CTIOUTEN10(a) CSR_TYPE_NCB32b
#define basename_CAVM_CST_CWX_CTI_CTIOUTEN10(a) "CST_CWX_CTI_CTIOUTEN10"
#define busnum_CAVM_CST_CWX_CTI_CTIOUTEN10(a) (a)
#define arguments_CAVM_CST_CWX_CTI_CTIOUTEN10(a) (a),-1,-1,-1

/**
 * Register (NCB32b) cst_cw#_cti_ctiouten11
 *
 * CST Cw Cti Ctiouten11 Register
 * This register maps channels in the cross trigger system to trigger outputs. The
 * CTIOUTEN registers are bit maps that allow any channel input to be mapped to the
 * trigger output, including none (0x0) and all (0xF). There is one register per
 * trigger output so it is possible to map any channel input to any combination of
 * trigger outputs.
 */
union cavm_cst_cwx_cti_ctiouten11
{
    uint32_t u;
    struct cavm_cst_cwx_cti_ctiouten11_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t sbz_0                 : 28; /**< [ 31:  4](R/W) Software should write the field as all 0s. */
        uint32_t trigouten             : 4;  /**< [  3:  0](R/W) Channel to trigger output mapping. */
#else /* Word 0 - Little Endian */
        uint32_t trigouten             : 4;  /**< [  3:  0](R/W) Channel to trigger output mapping. */
        uint32_t sbz_0                 : 28; /**< [ 31:  4](R/W) Software should write the field as all 0s. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_cst_cwx_cti_ctiouten11_s cn; */
};
typedef union cavm_cst_cwx_cti_ctiouten11 cavm_cst_cwx_cti_ctiouten11_t;

static inline uint64_t CAVM_CST_CWX_CTI_CTIOUTEN11(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_CST_CWX_CTI_CTIOUTEN11(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CN10KA) && (a<=23))
        return 0x87a0040200ccll + 0x100000ll * ((a) & 0x1f);
    if (cavm_is_model(OCTEONTX_CN10KB) && (a<=7))
        return 0x87a0040200ccll + 0x100000ll * ((a) & 0x7);
    if (cavm_is_model(OCTEONTX_CNF10KA) && (a<=17))
        return 0x87a0040200ccll + 0x100000ll * ((a) & 0x1f);
    if (cavm_is_model(OCTEONTX_CNF10KB) && (a<=11))
        return 0x87a0040200ccll + 0x100000ll * ((a) & 0xf);
    __cavm_csr_fatal("CST_CWX_CTI_CTIOUTEN11", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_CST_CWX_CTI_CTIOUTEN11(a) cavm_cst_cwx_cti_ctiouten11_t
#define bustype_CAVM_CST_CWX_CTI_CTIOUTEN11(a) CSR_TYPE_NCB32b
#define basename_CAVM_CST_CWX_CTI_CTIOUTEN11(a) "CST_CWX_CTI_CTIOUTEN11"
#define busnum_CAVM_CST_CWX_CTI_CTIOUTEN11(a) (a)
#define arguments_CAVM_CST_CWX_CTI_CTIOUTEN11(a) (a),-1,-1,-1

/**
 * Register (NCB32b) cst_cw#_cti_ctiouten12
 *
 * CST Cw Cti Ctiouten12 Register
 * This register maps channels in the cross trigger system to trigger outputs. The
 * CTIOUTEN registers are bit maps that allow any channel input to be mapped to the
 * trigger output, including none (0x0) and all (0xF). There is one register per
 * trigger output so it is possible to map any channel input to any combination of
 * trigger outputs.
 */
union cavm_cst_cwx_cti_ctiouten12
{
    uint32_t u;
    struct cavm_cst_cwx_cti_ctiouten12_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t sbz_0                 : 28; /**< [ 31:  4](R/W) Software should write the field as all 0s. */
        uint32_t trigouten             : 4;  /**< [  3:  0](R/W) Channel to trigger output mapping. */
#else /* Word 0 - Little Endian */
        uint32_t trigouten             : 4;  /**< [  3:  0](R/W) Channel to trigger output mapping. */
        uint32_t sbz_0                 : 28; /**< [ 31:  4](R/W) Software should write the field as all 0s. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_cst_cwx_cti_ctiouten12_s cn; */
};
typedef union cavm_cst_cwx_cti_ctiouten12 cavm_cst_cwx_cti_ctiouten12_t;

static inline uint64_t CAVM_CST_CWX_CTI_CTIOUTEN12(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_CST_CWX_CTI_CTIOUTEN12(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CN10KA) && (a<=23))
        return 0x87a0040200d0ll + 0x100000ll * ((a) & 0x1f);
    if (cavm_is_model(OCTEONTX_CN10KB) && (a<=7))
        return 0x87a0040200d0ll + 0x100000ll * ((a) & 0x7);
    if (cavm_is_model(OCTEONTX_CNF10KA) && (a<=17))
        return 0x87a0040200d0ll + 0x100000ll * ((a) & 0x1f);
    if (cavm_is_model(OCTEONTX_CNF10KB) && (a<=11))
        return 0x87a0040200d0ll + 0x100000ll * ((a) & 0xf);
    __cavm_csr_fatal("CST_CWX_CTI_CTIOUTEN12", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_CST_CWX_CTI_CTIOUTEN12(a) cavm_cst_cwx_cti_ctiouten12_t
#define bustype_CAVM_CST_CWX_CTI_CTIOUTEN12(a) CSR_TYPE_NCB32b
#define basename_CAVM_CST_CWX_CTI_CTIOUTEN12(a) "CST_CWX_CTI_CTIOUTEN12"
#define busnum_CAVM_CST_CWX_CTI_CTIOUTEN12(a) (a)
#define arguments_CAVM_CST_CWX_CTI_CTIOUTEN12(a) (a),-1,-1,-1

/**
 * Register (NCB32b) cst_cw#_cti_ctiouten13
 *
 * CST Cw Cti Ctiouten13 Register
 * This register maps channels in the cross trigger system to trigger outputs. The
 * CTIOUTEN registers are bit maps that allow any channel input to be mapped to the
 * trigger output, including none (0x0) and all (0xF). There is one register per
 * trigger output so it is possible to map any channel input to any combination of
 * trigger outputs.
 */
union cavm_cst_cwx_cti_ctiouten13
{
    uint32_t u;
    struct cavm_cst_cwx_cti_ctiouten13_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t sbz_0                 : 28; /**< [ 31:  4](R/W) Software should write the field as all 0s. */
        uint32_t trigouten             : 4;  /**< [  3:  0](R/W) Channel to trigger output mapping. */
#else /* Word 0 - Little Endian */
        uint32_t trigouten             : 4;  /**< [  3:  0](R/W) Channel to trigger output mapping. */
        uint32_t sbz_0                 : 28; /**< [ 31:  4](R/W) Software should write the field as all 0s. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_cst_cwx_cti_ctiouten13_s cn; */
};
typedef union cavm_cst_cwx_cti_ctiouten13 cavm_cst_cwx_cti_ctiouten13_t;

static inline uint64_t CAVM_CST_CWX_CTI_CTIOUTEN13(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_CST_CWX_CTI_CTIOUTEN13(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CN10KA) && (a<=23))
        return 0x87a0040200d4ll + 0x100000ll * ((a) & 0x1f);
    if (cavm_is_model(OCTEONTX_CN10KB) && (a<=7))
        return 0x87a0040200d4ll + 0x100000ll * ((a) & 0x7);
    if (cavm_is_model(OCTEONTX_CNF10KA) && (a<=17))
        return 0x87a0040200d4ll + 0x100000ll * ((a) & 0x1f);
    if (cavm_is_model(OCTEONTX_CNF10KB) && (a<=11))
        return 0x87a0040200d4ll + 0x100000ll * ((a) & 0xf);
    __cavm_csr_fatal("CST_CWX_CTI_CTIOUTEN13", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_CST_CWX_CTI_CTIOUTEN13(a) cavm_cst_cwx_cti_ctiouten13_t
#define bustype_CAVM_CST_CWX_CTI_CTIOUTEN13(a) CSR_TYPE_NCB32b
#define basename_CAVM_CST_CWX_CTI_CTIOUTEN13(a) "CST_CWX_CTI_CTIOUTEN13"
#define busnum_CAVM_CST_CWX_CTI_CTIOUTEN13(a) (a)
#define arguments_CAVM_CST_CWX_CTI_CTIOUTEN13(a) (a),-1,-1,-1

/**
 * Register (NCB32b) cst_cw#_cti_ctiouten14
 *
 * CST Cw Cti Ctiouten14 Register
 * This register maps channels in the cross trigger system to trigger outputs. The
 * CTIOUTEN registers are bit maps that allow any channel input to be mapped to the
 * trigger output, including none (0x0) and all (0xF). There is one register per
 * trigger output so it is possible to map any channel input to any combination of
 * trigger outputs.
 */
union cavm_cst_cwx_cti_ctiouten14
{
    uint32_t u;
    struct cavm_cst_cwx_cti_ctiouten14_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t sbz_0                 : 28; /**< [ 31:  4](R/W) Software should write the field as all 0s. */
        uint32_t trigouten             : 4;  /**< [  3:  0](R/W) Channel to trigger output mapping. */
#else /* Word 0 - Little Endian */
        uint32_t trigouten             : 4;  /**< [  3:  0](R/W) Channel to trigger output mapping. */
        uint32_t sbz_0                 : 28; /**< [ 31:  4](R/W) Software should write the field as all 0s. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_cst_cwx_cti_ctiouten14_s cn; */
};
typedef union cavm_cst_cwx_cti_ctiouten14 cavm_cst_cwx_cti_ctiouten14_t;

static inline uint64_t CAVM_CST_CWX_CTI_CTIOUTEN14(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_CST_CWX_CTI_CTIOUTEN14(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CN10KA) && (a<=23))
        return 0x87a0040200d8ll + 0x100000ll * ((a) & 0x1f);
    if (cavm_is_model(OCTEONTX_CN10KB) && (a<=7))
        return 0x87a0040200d8ll + 0x100000ll * ((a) & 0x7);
    if (cavm_is_model(OCTEONTX_CNF10KA) && (a<=17))
        return 0x87a0040200d8ll + 0x100000ll * ((a) & 0x1f);
    if (cavm_is_model(OCTEONTX_CNF10KB) && (a<=11))
        return 0x87a0040200d8ll + 0x100000ll * ((a) & 0xf);
    __cavm_csr_fatal("CST_CWX_CTI_CTIOUTEN14", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_CST_CWX_CTI_CTIOUTEN14(a) cavm_cst_cwx_cti_ctiouten14_t
#define bustype_CAVM_CST_CWX_CTI_CTIOUTEN14(a) CSR_TYPE_NCB32b
#define basename_CAVM_CST_CWX_CTI_CTIOUTEN14(a) "CST_CWX_CTI_CTIOUTEN14"
#define busnum_CAVM_CST_CWX_CTI_CTIOUTEN14(a) (a)
#define arguments_CAVM_CST_CWX_CTI_CTIOUTEN14(a) (a),-1,-1,-1

/**
 * Register (NCB32b) cst_cw#_cti_ctiouten15
 *
 * CST Cw Cti Ctiouten15 Register
 * This register maps channels in the cross trigger system to trigger outputs. The
 * CTIOUTEN registers are bit maps that allow any channel input to be mapped to the
 * trigger output, including none (0x0) and all (0xF). There is one register per
 * trigger output so it is possible to map any channel input to any combination of
 * trigger outputs.
 */
union cavm_cst_cwx_cti_ctiouten15
{
    uint32_t u;
    struct cavm_cst_cwx_cti_ctiouten15_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t sbz_0                 : 28; /**< [ 31:  4](R/W) Software should write the field as all 0s. */
        uint32_t trigouten             : 4;  /**< [  3:  0](R/W) Channel to trigger output mapping. */
#else /* Word 0 - Little Endian */
        uint32_t trigouten             : 4;  /**< [  3:  0](R/W) Channel to trigger output mapping. */
        uint32_t sbz_0                 : 28; /**< [ 31:  4](R/W) Software should write the field as all 0s. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_cst_cwx_cti_ctiouten15_s cn; */
};
typedef union cavm_cst_cwx_cti_ctiouten15 cavm_cst_cwx_cti_ctiouten15_t;

static inline uint64_t CAVM_CST_CWX_CTI_CTIOUTEN15(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_CST_CWX_CTI_CTIOUTEN15(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CN10KA) && (a<=23))
        return 0x87a0040200dcll + 0x100000ll * ((a) & 0x1f);
    if (cavm_is_model(OCTEONTX_CN10KB) && (a<=7))
        return 0x87a0040200dcll + 0x100000ll * ((a) & 0x7);
    if (cavm_is_model(OCTEONTX_CNF10KA) && (a<=17))
        return 0x87a0040200dcll + 0x100000ll * ((a) & 0x1f);
    if (cavm_is_model(OCTEONTX_CNF10KB) && (a<=11))
        return 0x87a0040200dcll + 0x100000ll * ((a) & 0xf);
    __cavm_csr_fatal("CST_CWX_CTI_CTIOUTEN15", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_CST_CWX_CTI_CTIOUTEN15(a) cavm_cst_cwx_cti_ctiouten15_t
#define bustype_CAVM_CST_CWX_CTI_CTIOUTEN15(a) CSR_TYPE_NCB32b
#define basename_CAVM_CST_CWX_CTI_CTIOUTEN15(a) "CST_CWX_CTI_CTIOUTEN15"
#define busnum_CAVM_CST_CWX_CTI_CTIOUTEN15(a) (a)
#define arguments_CAVM_CST_CWX_CTI_CTIOUTEN15(a) (a),-1,-1,-1

/**
 * Register (NCB32b) cst_cw#_cti_ctiouten16
 *
 * CST Cw Cti Ctiouten16 Register
 * This register maps channels in the cross trigger system to trigger outputs. The
 * CTIOUTEN registers are bit maps that allow any channel input to be mapped to the
 * trigger output, including none (0x0) and all (0xF). There is one register per
 * trigger output so it is possible to map any channel input to any combination of
 * trigger outputs.
 */
union cavm_cst_cwx_cti_ctiouten16
{
    uint32_t u;
    struct cavm_cst_cwx_cti_ctiouten16_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t sbz_0                 : 28; /**< [ 31:  4](R/W) Software should write the field as all 0s. */
        uint32_t trigouten             : 4;  /**< [  3:  0](R/W) Channel to trigger output mapping. */
#else /* Word 0 - Little Endian */
        uint32_t trigouten             : 4;  /**< [  3:  0](R/W) Channel to trigger output mapping. */
        uint32_t sbz_0                 : 28; /**< [ 31:  4](R/W) Software should write the field as all 0s. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_cst_cwx_cti_ctiouten16_s cn; */
};
typedef union cavm_cst_cwx_cti_ctiouten16 cavm_cst_cwx_cti_ctiouten16_t;

static inline uint64_t CAVM_CST_CWX_CTI_CTIOUTEN16(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_CST_CWX_CTI_CTIOUTEN16(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CN10KA) && (a<=23))
        return 0x87a0040200e0ll + 0x100000ll * ((a) & 0x1f);
    if (cavm_is_model(OCTEONTX_CN10KB) && (a<=7))
        return 0x87a0040200e0ll + 0x100000ll * ((a) & 0x7);
    if (cavm_is_model(OCTEONTX_CNF10KA) && (a<=17))
        return 0x87a0040200e0ll + 0x100000ll * ((a) & 0x1f);
    if (cavm_is_model(OCTEONTX_CNF10KB) && (a<=11))
        return 0x87a0040200e0ll + 0x100000ll * ((a) & 0xf);
    __cavm_csr_fatal("CST_CWX_CTI_CTIOUTEN16", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_CST_CWX_CTI_CTIOUTEN16(a) cavm_cst_cwx_cti_ctiouten16_t
#define bustype_CAVM_CST_CWX_CTI_CTIOUTEN16(a) CSR_TYPE_NCB32b
#define basename_CAVM_CST_CWX_CTI_CTIOUTEN16(a) "CST_CWX_CTI_CTIOUTEN16"
#define busnum_CAVM_CST_CWX_CTI_CTIOUTEN16(a) (a)
#define arguments_CAVM_CST_CWX_CTI_CTIOUTEN16(a) (a),-1,-1,-1

/**
 * Register (NCB32b) cst_cw#_cti_ctiouten17
 *
 * CST Cw Cti Ctiouten17 Register
 * This register maps channels in the cross trigger system to trigger outputs. The
 * CTIOUTEN registers are bit maps that allow any channel input to be mapped to the
 * trigger output, including none (0x0) and all (0xF). There is one register per
 * trigger output so it is possible to map any channel input to any combination of
 * trigger outputs.
 */
union cavm_cst_cwx_cti_ctiouten17
{
    uint32_t u;
    struct cavm_cst_cwx_cti_ctiouten17_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t sbz_0                 : 28; /**< [ 31:  4](R/W) Software should write the field as all 0s. */
        uint32_t trigouten             : 4;  /**< [  3:  0](R/W) Channel to trigger output mapping. */
#else /* Word 0 - Little Endian */
        uint32_t trigouten             : 4;  /**< [  3:  0](R/W) Channel to trigger output mapping. */
        uint32_t sbz_0                 : 28; /**< [ 31:  4](R/W) Software should write the field as all 0s. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_cst_cwx_cti_ctiouten17_s cn; */
};
typedef union cavm_cst_cwx_cti_ctiouten17 cavm_cst_cwx_cti_ctiouten17_t;

static inline uint64_t CAVM_CST_CWX_CTI_CTIOUTEN17(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_CST_CWX_CTI_CTIOUTEN17(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CN10KA) && (a<=23))
        return 0x87a0040200e4ll + 0x100000ll * ((a) & 0x1f);
    if (cavm_is_model(OCTEONTX_CN10KB) && (a<=7))
        return 0x87a0040200e4ll + 0x100000ll * ((a) & 0x7);
    if (cavm_is_model(OCTEONTX_CNF10KA) && (a<=17))
        return 0x87a0040200e4ll + 0x100000ll * ((a) & 0x1f);
    if (cavm_is_model(OCTEONTX_CNF10KB) && (a<=11))
        return 0x87a0040200e4ll + 0x100000ll * ((a) & 0xf);
    __cavm_csr_fatal("CST_CWX_CTI_CTIOUTEN17", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_CST_CWX_CTI_CTIOUTEN17(a) cavm_cst_cwx_cti_ctiouten17_t
#define bustype_CAVM_CST_CWX_CTI_CTIOUTEN17(a) CSR_TYPE_NCB32b
#define basename_CAVM_CST_CWX_CTI_CTIOUTEN17(a) "CST_CWX_CTI_CTIOUTEN17"
#define busnum_CAVM_CST_CWX_CTI_CTIOUTEN17(a) (a)
#define arguments_CAVM_CST_CWX_CTI_CTIOUTEN17(a) (a),-1,-1,-1

/**
 * Register (NCB32b) cst_cw#_cti_ctiouten18
 *
 * CST Cw Cti Ctiouten18 Register
 * This register maps channels in the cross trigger system to trigger outputs. The
 * CTIOUTEN registers are bit maps that allow any channel input to be mapped to the
 * trigger output, including none (0x0) and all (0xF). There is one register per
 * trigger output so it is possible to map any channel input to any combination of
 * trigger outputs.
 */
union cavm_cst_cwx_cti_ctiouten18
{
    uint32_t u;
    struct cavm_cst_cwx_cti_ctiouten18_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t sbz_0                 : 28; /**< [ 31:  4](R/W) Software should write the field as all 0s. */
        uint32_t trigouten             : 4;  /**< [  3:  0](R/W) Channel to trigger output mapping. */
#else /* Word 0 - Little Endian */
        uint32_t trigouten             : 4;  /**< [  3:  0](R/W) Channel to trigger output mapping. */
        uint32_t sbz_0                 : 28; /**< [ 31:  4](R/W) Software should write the field as all 0s. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_cst_cwx_cti_ctiouten18_s cn; */
};
typedef union cavm_cst_cwx_cti_ctiouten18 cavm_cst_cwx_cti_ctiouten18_t;

static inline uint64_t CAVM_CST_CWX_CTI_CTIOUTEN18(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_CST_CWX_CTI_CTIOUTEN18(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CN10KA) && (a<=23))
        return 0x87a0040200e8ll + 0x100000ll * ((a) & 0x1f);
    if (cavm_is_model(OCTEONTX_CN10KB) && (a<=7))
        return 0x87a0040200e8ll + 0x100000ll * ((a) & 0x7);
    if (cavm_is_model(OCTEONTX_CNF10KA) && (a<=17))
        return 0x87a0040200e8ll + 0x100000ll * ((a) & 0x1f);
    if (cavm_is_model(OCTEONTX_CNF10KB) && (a<=11))
        return 0x87a0040200e8ll + 0x100000ll * ((a) & 0xf);
    __cavm_csr_fatal("CST_CWX_CTI_CTIOUTEN18", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_CST_CWX_CTI_CTIOUTEN18(a) cavm_cst_cwx_cti_ctiouten18_t
#define bustype_CAVM_CST_CWX_CTI_CTIOUTEN18(a) CSR_TYPE_NCB32b
#define basename_CAVM_CST_CWX_CTI_CTIOUTEN18(a) "CST_CWX_CTI_CTIOUTEN18"
#define busnum_CAVM_CST_CWX_CTI_CTIOUTEN18(a) (a)
#define arguments_CAVM_CST_CWX_CTI_CTIOUTEN18(a) (a),-1,-1,-1

/**
 * Register (NCB32b) cst_cw#_cti_ctiouten19
 *
 * CST Cw Cti Ctiouten19 Register
 * This register maps channels in the cross trigger system to trigger outputs. The
 * CTIOUTEN registers are bit maps that allow any channel input to be mapped to the
 * trigger output, including none (0x0) and all (0xF). There is one register per
 * trigger output so it is possible to map any channel input to any combination of
 * trigger outputs.
 */
union cavm_cst_cwx_cti_ctiouten19
{
    uint32_t u;
    struct cavm_cst_cwx_cti_ctiouten19_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t sbz_0                 : 28; /**< [ 31:  4](R/W) Software should write the field as all 0s. */
        uint32_t trigouten             : 4;  /**< [  3:  0](R/W) Channel to trigger output mapping. */
#else /* Word 0 - Little Endian */
        uint32_t trigouten             : 4;  /**< [  3:  0](R/W) Channel to trigger output mapping. */
        uint32_t sbz_0                 : 28; /**< [ 31:  4](R/W) Software should write the field as all 0s. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_cst_cwx_cti_ctiouten19_s cn; */
};
typedef union cavm_cst_cwx_cti_ctiouten19 cavm_cst_cwx_cti_ctiouten19_t;

static inline uint64_t CAVM_CST_CWX_CTI_CTIOUTEN19(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_CST_CWX_CTI_CTIOUTEN19(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CN10KA) && (a<=23))
        return 0x87a0040200ecll + 0x100000ll * ((a) & 0x1f);
    if (cavm_is_model(OCTEONTX_CN10KB) && (a<=7))
        return 0x87a0040200ecll + 0x100000ll * ((a) & 0x7);
    if (cavm_is_model(OCTEONTX_CNF10KA) && (a<=17))
        return 0x87a0040200ecll + 0x100000ll * ((a) & 0x1f);
    if (cavm_is_model(OCTEONTX_CNF10KB) && (a<=11))
        return 0x87a0040200ecll + 0x100000ll * ((a) & 0xf);
    __cavm_csr_fatal("CST_CWX_CTI_CTIOUTEN19", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_CST_CWX_CTI_CTIOUTEN19(a) cavm_cst_cwx_cti_ctiouten19_t
#define bustype_CAVM_CST_CWX_CTI_CTIOUTEN19(a) CSR_TYPE_NCB32b
#define basename_CAVM_CST_CWX_CTI_CTIOUTEN19(a) "CST_CWX_CTI_CTIOUTEN19"
#define busnum_CAVM_CST_CWX_CTI_CTIOUTEN19(a) (a)
#define arguments_CAVM_CST_CWX_CTI_CTIOUTEN19(a) (a),-1,-1,-1

/**
 * Register (NCB32b) cst_cw#_cti_ctiouten2
 *
 * CST Cw Cti Ctiouten2 Register
 * This register maps channels in the cross trigger system to trigger outputs. The
 * CTIOUTEN registers are bit maps that allow any channel input to be mapped to the
 * trigger output, including none (0x0) and all (0xF). There is one register per
 * trigger output so it is possible to map any channel input to any combination of
 * trigger outputs.
 */
union cavm_cst_cwx_cti_ctiouten2
{
    uint32_t u;
    struct cavm_cst_cwx_cti_ctiouten2_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t sbz_0                 : 28; /**< [ 31:  4](R/W) Software should write the field as all 0s. */
        uint32_t trigouten             : 4;  /**< [  3:  0](R/W) Channel to trigger output mapping. */
#else /* Word 0 - Little Endian */
        uint32_t trigouten             : 4;  /**< [  3:  0](R/W) Channel to trigger output mapping. */
        uint32_t sbz_0                 : 28; /**< [ 31:  4](R/W) Software should write the field as all 0s. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_cst_cwx_cti_ctiouten2_s cn; */
};
typedef union cavm_cst_cwx_cti_ctiouten2 cavm_cst_cwx_cti_ctiouten2_t;

static inline uint64_t CAVM_CST_CWX_CTI_CTIOUTEN2(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_CST_CWX_CTI_CTIOUTEN2(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CN10KA) && (a<=23))
        return 0x87a0040200a8ll + 0x100000ll * ((a) & 0x1f);
    if (cavm_is_model(OCTEONTX_CN10KB) && (a<=7))
        return 0x87a0040200a8ll + 0x100000ll * ((a) & 0x7);
    if (cavm_is_model(OCTEONTX_CNF10KA) && (a<=17))
        return 0x87a0040200a8ll + 0x100000ll * ((a) & 0x1f);
    if (cavm_is_model(OCTEONTX_CNF10KB) && (a<=11))
        return 0x87a0040200a8ll + 0x100000ll * ((a) & 0xf);
    __cavm_csr_fatal("CST_CWX_CTI_CTIOUTEN2", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_CST_CWX_CTI_CTIOUTEN2(a) cavm_cst_cwx_cti_ctiouten2_t
#define bustype_CAVM_CST_CWX_CTI_CTIOUTEN2(a) CSR_TYPE_NCB32b
#define basename_CAVM_CST_CWX_CTI_CTIOUTEN2(a) "CST_CWX_CTI_CTIOUTEN2"
#define busnum_CAVM_CST_CWX_CTI_CTIOUTEN2(a) (a)
#define arguments_CAVM_CST_CWX_CTI_CTIOUTEN2(a) (a),-1,-1,-1

/**
 * Register (NCB32b) cst_cw#_cti_ctiouten20
 *
 * CST Cw Cti Ctiouten20 Register
 * This register maps channels in the cross trigger system to trigger outputs. The
 * CTIOUTEN registers are bit maps that allow any channel input to be mapped to the
 * trigger output, including none (0x0) and all (0xF). There is one register per
 * trigger output so it is possible to map any channel input to any combination of
 * trigger outputs.
 */
union cavm_cst_cwx_cti_ctiouten20
{
    uint32_t u;
    struct cavm_cst_cwx_cti_ctiouten20_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t sbz_0                 : 28; /**< [ 31:  4](R/W) Software should write the field as all 0s. */
        uint32_t trigouten             : 4;  /**< [  3:  0](R/W) Channel to trigger output mapping. */
#else /* Word 0 - Little Endian */
        uint32_t trigouten             : 4;  /**< [  3:  0](R/W) Channel to trigger output mapping. */
        uint32_t sbz_0                 : 28; /**< [ 31:  4](R/W) Software should write the field as all 0s. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_cst_cwx_cti_ctiouten20_s cn; */
};
typedef union cavm_cst_cwx_cti_ctiouten20 cavm_cst_cwx_cti_ctiouten20_t;

static inline uint64_t CAVM_CST_CWX_CTI_CTIOUTEN20(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_CST_CWX_CTI_CTIOUTEN20(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CN10KA) && (a<=23))
        return 0x87a0040200f0ll + 0x100000ll * ((a) & 0x1f);
    if (cavm_is_model(OCTEONTX_CN10KB) && (a<=7))
        return 0x87a0040200f0ll + 0x100000ll * ((a) & 0x7);
    if (cavm_is_model(OCTEONTX_CNF10KA) && (a<=17))
        return 0x87a0040200f0ll + 0x100000ll * ((a) & 0x1f);
    if (cavm_is_model(OCTEONTX_CNF10KB) && (a<=11))
        return 0x87a0040200f0ll + 0x100000ll * ((a) & 0xf);
    __cavm_csr_fatal("CST_CWX_CTI_CTIOUTEN20", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_CST_CWX_CTI_CTIOUTEN20(a) cavm_cst_cwx_cti_ctiouten20_t
#define bustype_CAVM_CST_CWX_CTI_CTIOUTEN20(a) CSR_TYPE_NCB32b
#define basename_CAVM_CST_CWX_CTI_CTIOUTEN20(a) "CST_CWX_CTI_CTIOUTEN20"
#define busnum_CAVM_CST_CWX_CTI_CTIOUTEN20(a) (a)
#define arguments_CAVM_CST_CWX_CTI_CTIOUTEN20(a) (a),-1,-1,-1

/**
 * Register (NCB32b) cst_cw#_cti_ctiouten21
 *
 * CST Cw Cti Ctiouten21 Register
 * This register maps channels in the cross trigger system to trigger outputs. The
 * CTIOUTEN registers are bit maps that allow any channel input to be mapped to the
 * trigger output, including none (0x0) and all (0xF). There is one register per
 * trigger output so it is possible to map any channel input to any combination of
 * trigger outputs.
 */
union cavm_cst_cwx_cti_ctiouten21
{
    uint32_t u;
    struct cavm_cst_cwx_cti_ctiouten21_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t sbz_0                 : 28; /**< [ 31:  4](R/W) Software should write the field as all 0s. */
        uint32_t trigouten             : 4;  /**< [  3:  0](R/W) Channel to trigger output mapping. */
#else /* Word 0 - Little Endian */
        uint32_t trigouten             : 4;  /**< [  3:  0](R/W) Channel to trigger output mapping. */
        uint32_t sbz_0                 : 28; /**< [ 31:  4](R/W) Software should write the field as all 0s. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_cst_cwx_cti_ctiouten21_s cn; */
};
typedef union cavm_cst_cwx_cti_ctiouten21 cavm_cst_cwx_cti_ctiouten21_t;

static inline uint64_t CAVM_CST_CWX_CTI_CTIOUTEN21(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_CST_CWX_CTI_CTIOUTEN21(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CN10KA) && (a<=23))
        return 0x87a0040200f4ll + 0x100000ll * ((a) & 0x1f);
    if (cavm_is_model(OCTEONTX_CN10KB) && (a<=7))
        return 0x87a0040200f4ll + 0x100000ll * ((a) & 0x7);
    if (cavm_is_model(OCTEONTX_CNF10KA) && (a<=17))
        return 0x87a0040200f4ll + 0x100000ll * ((a) & 0x1f);
    if (cavm_is_model(OCTEONTX_CNF10KB) && (a<=11))
        return 0x87a0040200f4ll + 0x100000ll * ((a) & 0xf);
    __cavm_csr_fatal("CST_CWX_CTI_CTIOUTEN21", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_CST_CWX_CTI_CTIOUTEN21(a) cavm_cst_cwx_cti_ctiouten21_t
#define bustype_CAVM_CST_CWX_CTI_CTIOUTEN21(a) CSR_TYPE_NCB32b
#define basename_CAVM_CST_CWX_CTI_CTIOUTEN21(a) "CST_CWX_CTI_CTIOUTEN21"
#define busnum_CAVM_CST_CWX_CTI_CTIOUTEN21(a) (a)
#define arguments_CAVM_CST_CWX_CTI_CTIOUTEN21(a) (a),-1,-1,-1

/**
 * Register (NCB32b) cst_cw#_cti_ctiouten22
 *
 * CST Cw Cti Ctiouten22 Register
 * This register maps channels in the cross trigger system to trigger outputs. The
 * CTIOUTEN registers are bit maps that allow any channel input to be mapped to the
 * trigger output, including none (0x0) and all (0xF). There is one register per
 * trigger output so it is possible to map any channel input to any combination of
 * trigger outputs.
 */
union cavm_cst_cwx_cti_ctiouten22
{
    uint32_t u;
    struct cavm_cst_cwx_cti_ctiouten22_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t sbz_0                 : 28; /**< [ 31:  4](R/W) Software should write the field as all 0s. */
        uint32_t trigouten             : 4;  /**< [  3:  0](R/W) Channel to trigger output mapping. */
#else /* Word 0 - Little Endian */
        uint32_t trigouten             : 4;  /**< [  3:  0](R/W) Channel to trigger output mapping. */
        uint32_t sbz_0                 : 28; /**< [ 31:  4](R/W) Software should write the field as all 0s. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_cst_cwx_cti_ctiouten22_s cn; */
};
typedef union cavm_cst_cwx_cti_ctiouten22 cavm_cst_cwx_cti_ctiouten22_t;

static inline uint64_t CAVM_CST_CWX_CTI_CTIOUTEN22(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_CST_CWX_CTI_CTIOUTEN22(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CN10KA) && (a<=23))
        return 0x87a0040200f8ll + 0x100000ll * ((a) & 0x1f);
    if (cavm_is_model(OCTEONTX_CN10KB) && (a<=7))
        return 0x87a0040200f8ll + 0x100000ll * ((a) & 0x7);
    if (cavm_is_model(OCTEONTX_CNF10KA) && (a<=17))
        return 0x87a0040200f8ll + 0x100000ll * ((a) & 0x1f);
    if (cavm_is_model(OCTEONTX_CNF10KB) && (a<=11))
        return 0x87a0040200f8ll + 0x100000ll * ((a) & 0xf);
    __cavm_csr_fatal("CST_CWX_CTI_CTIOUTEN22", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_CST_CWX_CTI_CTIOUTEN22(a) cavm_cst_cwx_cti_ctiouten22_t
#define bustype_CAVM_CST_CWX_CTI_CTIOUTEN22(a) CSR_TYPE_NCB32b
#define basename_CAVM_CST_CWX_CTI_CTIOUTEN22(a) "CST_CWX_CTI_CTIOUTEN22"
#define busnum_CAVM_CST_CWX_CTI_CTIOUTEN22(a) (a)
#define arguments_CAVM_CST_CWX_CTI_CTIOUTEN22(a) (a),-1,-1,-1

/**
 * Register (NCB32b) cst_cw#_cti_ctiouten23
 *
 * CST Cw Cti Ctiouten23 Register
 * This register maps channels in the cross trigger system to trigger outputs. The
 * CTIOUTEN registers are bit maps that allow any channel input to be mapped to the
 * trigger output, including none (0x0) and all (0xF). There is one register per
 * trigger output so it is possible to map any channel input to any combination of
 * trigger outputs.
 */
union cavm_cst_cwx_cti_ctiouten23
{
    uint32_t u;
    struct cavm_cst_cwx_cti_ctiouten23_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t sbz_0                 : 28; /**< [ 31:  4](R/W) Software should write the field as all 0s. */
        uint32_t trigouten             : 4;  /**< [  3:  0](R/W) Channel to trigger output mapping. */
#else /* Word 0 - Little Endian */
        uint32_t trigouten             : 4;  /**< [  3:  0](R/W) Channel to trigger output mapping. */
        uint32_t sbz_0                 : 28; /**< [ 31:  4](R/W) Software should write the field as all 0s. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_cst_cwx_cti_ctiouten23_s cn; */
};
typedef union cavm_cst_cwx_cti_ctiouten23 cavm_cst_cwx_cti_ctiouten23_t;

static inline uint64_t CAVM_CST_CWX_CTI_CTIOUTEN23(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_CST_CWX_CTI_CTIOUTEN23(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CN10KA) && (a<=23))
        return 0x87a0040200fcll + 0x100000ll * ((a) & 0x1f);
    if (cavm_is_model(OCTEONTX_CN10KB) && (a<=7))
        return 0x87a0040200fcll + 0x100000ll * ((a) & 0x7);
    if (cavm_is_model(OCTEONTX_CNF10KA) && (a<=17))
        return 0x87a0040200fcll + 0x100000ll * ((a) & 0x1f);
    if (cavm_is_model(OCTEONTX_CNF10KB) && (a<=11))
        return 0x87a0040200fcll + 0x100000ll * ((a) & 0xf);
    __cavm_csr_fatal("CST_CWX_CTI_CTIOUTEN23", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_CST_CWX_CTI_CTIOUTEN23(a) cavm_cst_cwx_cti_ctiouten23_t
#define bustype_CAVM_CST_CWX_CTI_CTIOUTEN23(a) CSR_TYPE_NCB32b
#define basename_CAVM_CST_CWX_CTI_CTIOUTEN23(a) "CST_CWX_CTI_CTIOUTEN23"
#define busnum_CAVM_CST_CWX_CTI_CTIOUTEN23(a) (a)
#define arguments_CAVM_CST_CWX_CTI_CTIOUTEN23(a) (a),-1,-1,-1

/**
 * Register (NCB32b) cst_cw#_cti_ctiouten24
 *
 * CST Cw Cti Ctiouten24 Register
 * This register maps channels in the cross trigger system to trigger outputs. The
 * CTIOUTEN registers are bit maps that allow any channel input to be mapped to the
 * trigger output, including none (0x0) and all (0xF). There is one register per
 * trigger output so it is possible to map any channel input to any combination of
 * trigger outputs.
 */
union cavm_cst_cwx_cti_ctiouten24
{
    uint32_t u;
    struct cavm_cst_cwx_cti_ctiouten24_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t sbz_0                 : 28; /**< [ 31:  4](R/W) Software should write the field as all 0s. */
        uint32_t trigouten             : 4;  /**< [  3:  0](R/W) Channel to trigger output mapping. */
#else /* Word 0 - Little Endian */
        uint32_t trigouten             : 4;  /**< [  3:  0](R/W) Channel to trigger output mapping. */
        uint32_t sbz_0                 : 28; /**< [ 31:  4](R/W) Software should write the field as all 0s. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_cst_cwx_cti_ctiouten24_s cn; */
};
typedef union cavm_cst_cwx_cti_ctiouten24 cavm_cst_cwx_cti_ctiouten24_t;

static inline uint64_t CAVM_CST_CWX_CTI_CTIOUTEN24(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_CST_CWX_CTI_CTIOUTEN24(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CN10KA) && (a<=23))
        return 0x87a004020100ll + 0x100000ll * ((a) & 0x1f);
    if (cavm_is_model(OCTEONTX_CN10KB) && (a<=7))
        return 0x87a004020100ll + 0x100000ll * ((a) & 0x7);
    if (cavm_is_model(OCTEONTX_CNF10KA) && (a<=17))
        return 0x87a004020100ll + 0x100000ll * ((a) & 0x1f);
    if (cavm_is_model(OCTEONTX_CNF10KB) && (a<=11))
        return 0x87a004020100ll + 0x100000ll * ((a) & 0xf);
    __cavm_csr_fatal("CST_CWX_CTI_CTIOUTEN24", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_CST_CWX_CTI_CTIOUTEN24(a) cavm_cst_cwx_cti_ctiouten24_t
#define bustype_CAVM_CST_CWX_CTI_CTIOUTEN24(a) CSR_TYPE_NCB32b
#define basename_CAVM_CST_CWX_CTI_CTIOUTEN24(a) "CST_CWX_CTI_CTIOUTEN24"
#define busnum_CAVM_CST_CWX_CTI_CTIOUTEN24(a) (a)
#define arguments_CAVM_CST_CWX_CTI_CTIOUTEN24(a) (a),-1,-1,-1

/**
 * Register (NCB32b) cst_cw#_cti_ctiouten25
 *
 * CST Cw Cti Ctiouten25 Register
 * This register maps channels in the cross trigger system to trigger outputs. The
 * CTIOUTEN registers are bit maps that allow any channel input to be mapped to the
 * trigger output, including none (0x0) and all (0xF). There is one register per
 * trigger output so it is possible to map any channel input to any combination of
 * trigger outputs.
 */
union cavm_cst_cwx_cti_ctiouten25
{
    uint32_t u;
    struct cavm_cst_cwx_cti_ctiouten25_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t sbz_0                 : 28; /**< [ 31:  4](R/W) Software should write the field as all 0s. */
        uint32_t trigouten             : 4;  /**< [  3:  0](R/W) Channel to trigger output mapping. */
#else /* Word 0 - Little Endian */
        uint32_t trigouten             : 4;  /**< [  3:  0](R/W) Channel to trigger output mapping. */
        uint32_t sbz_0                 : 28; /**< [ 31:  4](R/W) Software should write the field as all 0s. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_cst_cwx_cti_ctiouten25_s cn; */
};
typedef union cavm_cst_cwx_cti_ctiouten25 cavm_cst_cwx_cti_ctiouten25_t;

static inline uint64_t CAVM_CST_CWX_CTI_CTIOUTEN25(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_CST_CWX_CTI_CTIOUTEN25(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CN10KA) && (a<=23))
        return 0x87a004020104ll + 0x100000ll * ((a) & 0x1f);
    if (cavm_is_model(OCTEONTX_CN10KB) && (a<=7))
        return 0x87a004020104ll + 0x100000ll * ((a) & 0x7);
    if (cavm_is_model(OCTEONTX_CNF10KA) && (a<=17))
        return 0x87a004020104ll + 0x100000ll * ((a) & 0x1f);
    if (cavm_is_model(OCTEONTX_CNF10KB) && (a<=11))
        return 0x87a004020104ll + 0x100000ll * ((a) & 0xf);
    __cavm_csr_fatal("CST_CWX_CTI_CTIOUTEN25", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_CST_CWX_CTI_CTIOUTEN25(a) cavm_cst_cwx_cti_ctiouten25_t
#define bustype_CAVM_CST_CWX_CTI_CTIOUTEN25(a) CSR_TYPE_NCB32b
#define basename_CAVM_CST_CWX_CTI_CTIOUTEN25(a) "CST_CWX_CTI_CTIOUTEN25"
#define busnum_CAVM_CST_CWX_CTI_CTIOUTEN25(a) (a)
#define arguments_CAVM_CST_CWX_CTI_CTIOUTEN25(a) (a),-1,-1,-1

/**
 * Register (NCB32b) cst_cw#_cti_ctiouten26
 *
 * CST Cw Cti Ctiouten26 Register
 * This register maps channels in the cross trigger system to trigger outputs. The
 * CTIOUTEN registers are bit maps that allow any channel input to be mapped to the
 * trigger output, including none (0x0) and all (0xF). There is one register per
 * trigger output so it is possible to map any channel input to any combination of
 * trigger outputs.
 */
union cavm_cst_cwx_cti_ctiouten26
{
    uint32_t u;
    struct cavm_cst_cwx_cti_ctiouten26_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t sbz_0                 : 28; /**< [ 31:  4](R/W) Software should write the field as all 0s. */
        uint32_t trigouten             : 4;  /**< [  3:  0](R/W) Channel to trigger output mapping. */
#else /* Word 0 - Little Endian */
        uint32_t trigouten             : 4;  /**< [  3:  0](R/W) Channel to trigger output mapping. */
        uint32_t sbz_0                 : 28; /**< [ 31:  4](R/W) Software should write the field as all 0s. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_cst_cwx_cti_ctiouten26_s cn; */
};
typedef union cavm_cst_cwx_cti_ctiouten26 cavm_cst_cwx_cti_ctiouten26_t;

static inline uint64_t CAVM_CST_CWX_CTI_CTIOUTEN26(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_CST_CWX_CTI_CTIOUTEN26(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CN10KA) && (a<=23))
        return 0x87a004020108ll + 0x100000ll * ((a) & 0x1f);
    if (cavm_is_model(OCTEONTX_CN10KB) && (a<=7))
        return 0x87a004020108ll + 0x100000ll * ((a) & 0x7);
    if (cavm_is_model(OCTEONTX_CNF10KA) && (a<=17))
        return 0x87a004020108ll + 0x100000ll * ((a) & 0x1f);
    if (cavm_is_model(OCTEONTX_CNF10KB) && (a<=11))
        return 0x87a004020108ll + 0x100000ll * ((a) & 0xf);
    __cavm_csr_fatal("CST_CWX_CTI_CTIOUTEN26", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_CST_CWX_CTI_CTIOUTEN26(a) cavm_cst_cwx_cti_ctiouten26_t
#define bustype_CAVM_CST_CWX_CTI_CTIOUTEN26(a) CSR_TYPE_NCB32b
#define basename_CAVM_CST_CWX_CTI_CTIOUTEN26(a) "CST_CWX_CTI_CTIOUTEN26"
#define busnum_CAVM_CST_CWX_CTI_CTIOUTEN26(a) (a)
#define arguments_CAVM_CST_CWX_CTI_CTIOUTEN26(a) (a),-1,-1,-1

/**
 * Register (NCB32b) cst_cw#_cti_ctiouten27
 *
 * CST Cw Cti Ctiouten27 Register
 * This register maps channels in the cross trigger system to trigger outputs. The
 * CTIOUTEN registers are bit maps that allow any channel input to be mapped to the
 * trigger output, including none (0x0) and all (0xF). There is one register per
 * trigger output so it is possible to map any channel input to any combination of
 * trigger outputs.
 */
union cavm_cst_cwx_cti_ctiouten27
{
    uint32_t u;
    struct cavm_cst_cwx_cti_ctiouten27_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t sbz_0                 : 28; /**< [ 31:  4](R/W) Software should write the field as all 0s. */
        uint32_t trigouten             : 4;  /**< [  3:  0](R/W) Channel to trigger output mapping. */
#else /* Word 0 - Little Endian */
        uint32_t trigouten             : 4;  /**< [  3:  0](R/W) Channel to trigger output mapping. */
        uint32_t sbz_0                 : 28; /**< [ 31:  4](R/W) Software should write the field as all 0s. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_cst_cwx_cti_ctiouten27_s cn; */
};
typedef union cavm_cst_cwx_cti_ctiouten27 cavm_cst_cwx_cti_ctiouten27_t;

static inline uint64_t CAVM_CST_CWX_CTI_CTIOUTEN27(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_CST_CWX_CTI_CTIOUTEN27(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CN10KA) && (a<=23))
        return 0x87a00402010cll + 0x100000ll * ((a) & 0x1f);
    if (cavm_is_model(OCTEONTX_CN10KB) && (a<=7))
        return 0x87a00402010cll + 0x100000ll * ((a) & 0x7);
    if (cavm_is_model(OCTEONTX_CNF10KA) && (a<=17))
        return 0x87a00402010cll + 0x100000ll * ((a) & 0x1f);
    if (cavm_is_model(OCTEONTX_CNF10KB) && (a<=11))
        return 0x87a00402010cll + 0x100000ll * ((a) & 0xf);
    __cavm_csr_fatal("CST_CWX_CTI_CTIOUTEN27", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_CST_CWX_CTI_CTIOUTEN27(a) cavm_cst_cwx_cti_ctiouten27_t
#define bustype_CAVM_CST_CWX_CTI_CTIOUTEN27(a) CSR_TYPE_NCB32b
#define basename_CAVM_CST_CWX_CTI_CTIOUTEN27(a) "CST_CWX_CTI_CTIOUTEN27"
#define busnum_CAVM_CST_CWX_CTI_CTIOUTEN27(a) (a)
#define arguments_CAVM_CST_CWX_CTI_CTIOUTEN27(a) (a),-1,-1,-1

/**
 * Register (NCB32b) cst_cw#_cti_ctiouten28
 *
 * CST Cw Cti Ctiouten28 Register
 * This register maps channels in the cross trigger system to trigger outputs. The
 * CTIOUTEN registers are bit maps that allow any channel input to be mapped to the
 * trigger output, including none (0x0) and all (0xF). There is one register per
 * trigger output so it is possible to map any channel input to any combination of
 * trigger outputs.
 */
union cavm_cst_cwx_cti_ctiouten28
{
    uint32_t u;
    struct cavm_cst_cwx_cti_ctiouten28_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t sbz_0                 : 28; /**< [ 31:  4](R/W) Software should write the field as all 0s. */
        uint32_t trigouten             : 4;  /**< [  3:  0](R/W) Channel to trigger output mapping. */
#else /* Word 0 - Little Endian */
        uint32_t trigouten             : 4;  /**< [  3:  0](R/W) Channel to trigger output mapping. */
        uint32_t sbz_0                 : 28; /**< [ 31:  4](R/W) Software should write the field as all 0s. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_cst_cwx_cti_ctiouten28_s cn; */
};
typedef union cavm_cst_cwx_cti_ctiouten28 cavm_cst_cwx_cti_ctiouten28_t;

static inline uint64_t CAVM_CST_CWX_CTI_CTIOUTEN28(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_CST_CWX_CTI_CTIOUTEN28(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CN10KA) && (a<=23))
        return 0x87a004020110ll + 0x100000ll * ((a) & 0x1f);
    if (cavm_is_model(OCTEONTX_CN10KB) && (a<=7))
        return 0x87a004020110ll + 0x100000ll * ((a) & 0x7);
    if (cavm_is_model(OCTEONTX_CNF10KA) && (a<=17))
        return 0x87a004020110ll + 0x100000ll * ((a) & 0x1f);
    if (cavm_is_model(OCTEONTX_CNF10KB) && (a<=11))
        return 0x87a004020110ll + 0x100000ll * ((a) & 0xf);
    __cavm_csr_fatal("CST_CWX_CTI_CTIOUTEN28", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_CST_CWX_CTI_CTIOUTEN28(a) cavm_cst_cwx_cti_ctiouten28_t
#define bustype_CAVM_CST_CWX_CTI_CTIOUTEN28(a) CSR_TYPE_NCB32b
#define basename_CAVM_CST_CWX_CTI_CTIOUTEN28(a) "CST_CWX_CTI_CTIOUTEN28"
#define busnum_CAVM_CST_CWX_CTI_CTIOUTEN28(a) (a)
#define arguments_CAVM_CST_CWX_CTI_CTIOUTEN28(a) (a),-1,-1,-1

/**
 * Register (NCB32b) cst_cw#_cti_ctiouten29
 *
 * CST Cw Cti Ctiouten29 Register
 * This register maps channels in the cross trigger system to trigger outputs. The
 * CTIOUTEN registers are bit maps that allow any channel input to be mapped to the
 * trigger output, including none (0x0) and all (0xF). There is one register per
 * trigger output so it is possible to map any channel input to any combination of
 * trigger outputs.
 */
union cavm_cst_cwx_cti_ctiouten29
{
    uint32_t u;
    struct cavm_cst_cwx_cti_ctiouten29_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t sbz_0                 : 28; /**< [ 31:  4](R/W) Software should write the field as all 0s. */
        uint32_t trigouten             : 4;  /**< [  3:  0](R/W) Channel to trigger output mapping. */
#else /* Word 0 - Little Endian */
        uint32_t trigouten             : 4;  /**< [  3:  0](R/W) Channel to trigger output mapping. */
        uint32_t sbz_0                 : 28; /**< [ 31:  4](R/W) Software should write the field as all 0s. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_cst_cwx_cti_ctiouten29_s cn; */
};
typedef union cavm_cst_cwx_cti_ctiouten29 cavm_cst_cwx_cti_ctiouten29_t;

static inline uint64_t CAVM_CST_CWX_CTI_CTIOUTEN29(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_CST_CWX_CTI_CTIOUTEN29(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CN10KA) && (a<=23))
        return 0x87a004020114ll + 0x100000ll * ((a) & 0x1f);
    if (cavm_is_model(OCTEONTX_CN10KB) && (a<=7))
        return 0x87a004020114ll + 0x100000ll * ((a) & 0x7);
    if (cavm_is_model(OCTEONTX_CNF10KA) && (a<=17))
        return 0x87a004020114ll + 0x100000ll * ((a) & 0x1f);
    if (cavm_is_model(OCTEONTX_CNF10KB) && (a<=11))
        return 0x87a004020114ll + 0x100000ll * ((a) & 0xf);
    __cavm_csr_fatal("CST_CWX_CTI_CTIOUTEN29", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_CST_CWX_CTI_CTIOUTEN29(a) cavm_cst_cwx_cti_ctiouten29_t
#define bustype_CAVM_CST_CWX_CTI_CTIOUTEN29(a) CSR_TYPE_NCB32b
#define basename_CAVM_CST_CWX_CTI_CTIOUTEN29(a) "CST_CWX_CTI_CTIOUTEN29"
#define busnum_CAVM_CST_CWX_CTI_CTIOUTEN29(a) (a)
#define arguments_CAVM_CST_CWX_CTI_CTIOUTEN29(a) (a),-1,-1,-1

/**
 * Register (NCB32b) cst_cw#_cti_ctiouten3
 *
 * CST Cw Cti Ctiouten3 Register
 * This register maps channels in the cross trigger system to trigger outputs. The
 * CTIOUTEN registers are bit maps that allow any channel input to be mapped to the
 * trigger output, including none (0x0) and all (0xF). There is one register per
 * trigger output so it is possible to map any channel input to any combination of
 * trigger outputs.
 */
union cavm_cst_cwx_cti_ctiouten3
{
    uint32_t u;
    struct cavm_cst_cwx_cti_ctiouten3_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t sbz_0                 : 28; /**< [ 31:  4](R/W) Software should write the field as all 0s. */
        uint32_t trigouten             : 4;  /**< [  3:  0](R/W) Channel to trigger output mapping. */
#else /* Word 0 - Little Endian */
        uint32_t trigouten             : 4;  /**< [  3:  0](R/W) Channel to trigger output mapping. */
        uint32_t sbz_0                 : 28; /**< [ 31:  4](R/W) Software should write the field as all 0s. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_cst_cwx_cti_ctiouten3_s cn; */
};
typedef union cavm_cst_cwx_cti_ctiouten3 cavm_cst_cwx_cti_ctiouten3_t;

static inline uint64_t CAVM_CST_CWX_CTI_CTIOUTEN3(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_CST_CWX_CTI_CTIOUTEN3(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CN10KA) && (a<=23))
        return 0x87a0040200acll + 0x100000ll * ((a) & 0x1f);
    if (cavm_is_model(OCTEONTX_CN10KB) && (a<=7))
        return 0x87a0040200acll + 0x100000ll * ((a) & 0x7);
    if (cavm_is_model(OCTEONTX_CNF10KA) && (a<=17))
        return 0x87a0040200acll + 0x100000ll * ((a) & 0x1f);
    if (cavm_is_model(OCTEONTX_CNF10KB) && (a<=11))
        return 0x87a0040200acll + 0x100000ll * ((a) & 0xf);
    __cavm_csr_fatal("CST_CWX_CTI_CTIOUTEN3", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_CST_CWX_CTI_CTIOUTEN3(a) cavm_cst_cwx_cti_ctiouten3_t
#define bustype_CAVM_CST_CWX_CTI_CTIOUTEN3(a) CSR_TYPE_NCB32b
#define basename_CAVM_CST_CWX_CTI_CTIOUTEN3(a) "CST_CWX_CTI_CTIOUTEN3"
#define busnum_CAVM_CST_CWX_CTI_CTIOUTEN3(a) (a)
#define arguments_CAVM_CST_CWX_CTI_CTIOUTEN3(a) (a),-1,-1,-1

/**
 * Register (NCB32b) cst_cw#_cti_ctiouten30
 *
 * CST Cw Cti Ctiouten30 Register
 * This register maps channels in the cross trigger system to trigger outputs. The
 * CTIOUTEN registers are bit maps that allow any channel input to be mapped to the
 * trigger output, including none (0x0) and all (0xF). There is one register per
 * trigger output so it is possible to map any channel input to any combination of
 * trigger outputs.
 */
union cavm_cst_cwx_cti_ctiouten30
{
    uint32_t u;
    struct cavm_cst_cwx_cti_ctiouten30_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t sbz_0                 : 28; /**< [ 31:  4](R/W) Software should write the field as all 0s. */
        uint32_t trigouten             : 4;  /**< [  3:  0](R/W) Channel to trigger output mapping. */
#else /* Word 0 - Little Endian */
        uint32_t trigouten             : 4;  /**< [  3:  0](R/W) Channel to trigger output mapping. */
        uint32_t sbz_0                 : 28; /**< [ 31:  4](R/W) Software should write the field as all 0s. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_cst_cwx_cti_ctiouten30_s cn; */
};
typedef union cavm_cst_cwx_cti_ctiouten30 cavm_cst_cwx_cti_ctiouten30_t;

static inline uint64_t CAVM_CST_CWX_CTI_CTIOUTEN30(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_CST_CWX_CTI_CTIOUTEN30(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CN10KA) && (a<=23))
        return 0x87a004020118ll + 0x100000ll * ((a) & 0x1f);
    if (cavm_is_model(OCTEONTX_CN10KB) && (a<=7))
        return 0x87a004020118ll + 0x100000ll * ((a) & 0x7);
    if (cavm_is_model(OCTEONTX_CNF10KA) && (a<=17))
        return 0x87a004020118ll + 0x100000ll * ((a) & 0x1f);
    if (cavm_is_model(OCTEONTX_CNF10KB) && (a<=11))
        return 0x87a004020118ll + 0x100000ll * ((a) & 0xf);
    __cavm_csr_fatal("CST_CWX_CTI_CTIOUTEN30", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_CST_CWX_CTI_CTIOUTEN30(a) cavm_cst_cwx_cti_ctiouten30_t
#define bustype_CAVM_CST_CWX_CTI_CTIOUTEN30(a) CSR_TYPE_NCB32b
#define basename_CAVM_CST_CWX_CTI_CTIOUTEN30(a) "CST_CWX_CTI_CTIOUTEN30"
#define busnum_CAVM_CST_CWX_CTI_CTIOUTEN30(a) (a)
#define arguments_CAVM_CST_CWX_CTI_CTIOUTEN30(a) (a),-1,-1,-1

/**
 * Register (NCB32b) cst_cw#_cti_ctiouten31
 *
 * CST Cw Cti Ctiouten31 Register
 * This register maps channels in the cross trigger system to trigger outputs. The
 * CTIOUTEN registers are bit maps that allow any channel input to be mapped to the
 * trigger output, including none (0x0) and all (0xF). There is one register per
 * trigger output so it is possible to map any channel input to any combination of
 * trigger outputs.
 */
union cavm_cst_cwx_cti_ctiouten31
{
    uint32_t u;
    struct cavm_cst_cwx_cti_ctiouten31_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t sbz_0                 : 28; /**< [ 31:  4](R/W) Software should write the field as all 0s. */
        uint32_t trigouten             : 4;  /**< [  3:  0](R/W) Channel to trigger output mapping. */
#else /* Word 0 - Little Endian */
        uint32_t trigouten             : 4;  /**< [  3:  0](R/W) Channel to trigger output mapping. */
        uint32_t sbz_0                 : 28; /**< [ 31:  4](R/W) Software should write the field as all 0s. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_cst_cwx_cti_ctiouten31_s cn; */
};
typedef union cavm_cst_cwx_cti_ctiouten31 cavm_cst_cwx_cti_ctiouten31_t;

static inline uint64_t CAVM_CST_CWX_CTI_CTIOUTEN31(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_CST_CWX_CTI_CTIOUTEN31(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CN10KA) && (a<=23))
        return 0x87a00402011cll + 0x100000ll * ((a) & 0x1f);
    if (cavm_is_model(OCTEONTX_CN10KB) && (a<=7))
        return 0x87a00402011cll + 0x100000ll * ((a) & 0x7);
    if (cavm_is_model(OCTEONTX_CNF10KA) && (a<=17))
        return 0x87a00402011cll + 0x100000ll * ((a) & 0x1f);
    if (cavm_is_model(OCTEONTX_CNF10KB) && (a<=11))
        return 0x87a00402011cll + 0x100000ll * ((a) & 0xf);
    __cavm_csr_fatal("CST_CWX_CTI_CTIOUTEN31", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_CST_CWX_CTI_CTIOUTEN31(a) cavm_cst_cwx_cti_ctiouten31_t
#define bustype_CAVM_CST_CWX_CTI_CTIOUTEN31(a) CSR_TYPE_NCB32b
#define basename_CAVM_CST_CWX_CTI_CTIOUTEN31(a) "CST_CWX_CTI_CTIOUTEN31"
#define busnum_CAVM_CST_CWX_CTI_CTIOUTEN31(a) (a)
#define arguments_CAVM_CST_CWX_CTI_CTIOUTEN31(a) (a),-1,-1,-1

/**
 * Register (NCB32b) cst_cw#_cti_ctiouten4
 *
 * CST Cw Cti Ctiouten4 Register
 * This register maps channels in the cross trigger system to trigger outputs. The
 * CTIOUTEN registers are bit maps that allow any channel input to be mapped to the
 * trigger output, including none (0x0) and all (0xF). There is one register per
 * trigger output so it is possible to map any channel input to any combination of
 * trigger outputs.
 */
union cavm_cst_cwx_cti_ctiouten4
{
    uint32_t u;
    struct cavm_cst_cwx_cti_ctiouten4_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t sbz_0                 : 28; /**< [ 31:  4](R/W) Software should write the field as all 0s. */
        uint32_t trigouten             : 4;  /**< [  3:  0](R/W) Channel to trigger output mapping. */
#else /* Word 0 - Little Endian */
        uint32_t trigouten             : 4;  /**< [  3:  0](R/W) Channel to trigger output mapping. */
        uint32_t sbz_0                 : 28; /**< [ 31:  4](R/W) Software should write the field as all 0s. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_cst_cwx_cti_ctiouten4_s cn; */
};
typedef union cavm_cst_cwx_cti_ctiouten4 cavm_cst_cwx_cti_ctiouten4_t;

static inline uint64_t CAVM_CST_CWX_CTI_CTIOUTEN4(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_CST_CWX_CTI_CTIOUTEN4(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CN10KA) && (a<=23))
        return 0x87a0040200b0ll + 0x100000ll * ((a) & 0x1f);
    if (cavm_is_model(OCTEONTX_CN10KB) && (a<=7))
        return 0x87a0040200b0ll + 0x100000ll * ((a) & 0x7);
    if (cavm_is_model(OCTEONTX_CNF10KA) && (a<=17))
        return 0x87a0040200b0ll + 0x100000ll * ((a) & 0x1f);
    if (cavm_is_model(OCTEONTX_CNF10KB) && (a<=11))
        return 0x87a0040200b0ll + 0x100000ll * ((a) & 0xf);
    __cavm_csr_fatal("CST_CWX_CTI_CTIOUTEN4", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_CST_CWX_CTI_CTIOUTEN4(a) cavm_cst_cwx_cti_ctiouten4_t
#define bustype_CAVM_CST_CWX_CTI_CTIOUTEN4(a) CSR_TYPE_NCB32b
#define basename_CAVM_CST_CWX_CTI_CTIOUTEN4(a) "CST_CWX_CTI_CTIOUTEN4"
#define busnum_CAVM_CST_CWX_CTI_CTIOUTEN4(a) (a)
#define arguments_CAVM_CST_CWX_CTI_CTIOUTEN4(a) (a),-1,-1,-1

/**
 * Register (NCB32b) cst_cw#_cti_ctiouten5
 *
 * CST Cw Cti Ctiouten5 Register
 * This register maps channels in the cross trigger system to trigger outputs. The
 * CTIOUTEN registers are bit maps that allow any channel input to be mapped to the
 * trigger output, including none (0x0) and all (0xF). There is one register per
 * trigger output so it is possible to map any channel input to any combination of
 * trigger outputs.
 */
union cavm_cst_cwx_cti_ctiouten5
{
    uint32_t u;
    struct cavm_cst_cwx_cti_ctiouten5_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t sbz_0                 : 28; /**< [ 31:  4](R/W) Software should write the field as all 0s. */
        uint32_t trigouten             : 4;  /**< [  3:  0](R/W) Channel to trigger output mapping. */
#else /* Word 0 - Little Endian */
        uint32_t trigouten             : 4;  /**< [  3:  0](R/W) Channel to trigger output mapping. */
        uint32_t sbz_0                 : 28; /**< [ 31:  4](R/W) Software should write the field as all 0s. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_cst_cwx_cti_ctiouten5_s cn; */
};
typedef union cavm_cst_cwx_cti_ctiouten5 cavm_cst_cwx_cti_ctiouten5_t;

static inline uint64_t CAVM_CST_CWX_CTI_CTIOUTEN5(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_CST_CWX_CTI_CTIOUTEN5(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CN10KA) && (a<=23))
        return 0x87a0040200b4ll + 0x100000ll * ((a) & 0x1f);
    if (cavm_is_model(OCTEONTX_CN10KB) && (a<=7))
        return 0x87a0040200b4ll + 0x100000ll * ((a) & 0x7);
    if (cavm_is_model(OCTEONTX_CNF10KA) && (a<=17))
        return 0x87a0040200b4ll + 0x100000ll * ((a) & 0x1f);
    if (cavm_is_model(OCTEONTX_CNF10KB) && (a<=11))
        return 0x87a0040200b4ll + 0x100000ll * ((a) & 0xf);
    __cavm_csr_fatal("CST_CWX_CTI_CTIOUTEN5", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_CST_CWX_CTI_CTIOUTEN5(a) cavm_cst_cwx_cti_ctiouten5_t
#define bustype_CAVM_CST_CWX_CTI_CTIOUTEN5(a) CSR_TYPE_NCB32b
#define basename_CAVM_CST_CWX_CTI_CTIOUTEN5(a) "CST_CWX_CTI_CTIOUTEN5"
#define busnum_CAVM_CST_CWX_CTI_CTIOUTEN5(a) (a)
#define arguments_CAVM_CST_CWX_CTI_CTIOUTEN5(a) (a),-1,-1,-1

/**
 * Register (NCB32b) cst_cw#_cti_ctiouten6
 *
 * CST Cw Cti Ctiouten6 Register
 * This register maps channels in the cross trigger system to trigger outputs. The
 * CTIOUTEN registers are bit maps that allow any channel input to be mapped to the
 * trigger output, including none (0x0) and all (0xF). There is one register per
 * trigger output so it is possible to map any channel input to any combination of
 * trigger outputs.
 */
union cavm_cst_cwx_cti_ctiouten6
{
    uint32_t u;
    struct cavm_cst_cwx_cti_ctiouten6_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t sbz_0                 : 28; /**< [ 31:  4](R/W) Software should write the field as all 0s. */
        uint32_t trigouten             : 4;  /**< [  3:  0](R/W) Channel to trigger output mapping. */
#else /* Word 0 - Little Endian */
        uint32_t trigouten             : 4;  /**< [  3:  0](R/W) Channel to trigger output mapping. */
        uint32_t sbz_0                 : 28; /**< [ 31:  4](R/W) Software should write the field as all 0s. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_cst_cwx_cti_ctiouten6_s cn; */
};
typedef union cavm_cst_cwx_cti_ctiouten6 cavm_cst_cwx_cti_ctiouten6_t;

static inline uint64_t CAVM_CST_CWX_CTI_CTIOUTEN6(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_CST_CWX_CTI_CTIOUTEN6(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CN10KA) && (a<=23))
        return 0x87a0040200b8ll + 0x100000ll * ((a) & 0x1f);
    if (cavm_is_model(OCTEONTX_CN10KB) && (a<=7))
        return 0x87a0040200b8ll + 0x100000ll * ((a) & 0x7);
    if (cavm_is_model(OCTEONTX_CNF10KA) && (a<=17))
        return 0x87a0040200b8ll + 0x100000ll * ((a) & 0x1f);
    if (cavm_is_model(OCTEONTX_CNF10KB) && (a<=11))
        return 0x87a0040200b8ll + 0x100000ll * ((a) & 0xf);
    __cavm_csr_fatal("CST_CWX_CTI_CTIOUTEN6", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_CST_CWX_CTI_CTIOUTEN6(a) cavm_cst_cwx_cti_ctiouten6_t
#define bustype_CAVM_CST_CWX_CTI_CTIOUTEN6(a) CSR_TYPE_NCB32b
#define basename_CAVM_CST_CWX_CTI_CTIOUTEN6(a) "CST_CWX_CTI_CTIOUTEN6"
#define busnum_CAVM_CST_CWX_CTI_CTIOUTEN6(a) (a)
#define arguments_CAVM_CST_CWX_CTI_CTIOUTEN6(a) (a),-1,-1,-1

/**
 * Register (NCB32b) cst_cw#_cti_ctiouten7
 *
 * CST Cw Cti Ctiouten7 Register
 * This register maps channels in the cross trigger system to trigger outputs. The
 * CTIOUTEN registers are bit maps that allow any channel input to be mapped to the
 * trigger output, including none (0x0) and all (0xF). There is one register per
 * trigger output so it is possible to map any channel input to any combination of
 * trigger outputs.
 */
union cavm_cst_cwx_cti_ctiouten7
{
    uint32_t u;
    struct cavm_cst_cwx_cti_ctiouten7_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t sbz_0                 : 28; /**< [ 31:  4](R/W) Software should write the field as all 0s. */
        uint32_t trigouten             : 4;  /**< [  3:  0](R/W) Channel to trigger output mapping. */
#else /* Word 0 - Little Endian */
        uint32_t trigouten             : 4;  /**< [  3:  0](R/W) Channel to trigger output mapping. */
        uint32_t sbz_0                 : 28; /**< [ 31:  4](R/W) Software should write the field as all 0s. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_cst_cwx_cti_ctiouten7_s cn; */
};
typedef union cavm_cst_cwx_cti_ctiouten7 cavm_cst_cwx_cti_ctiouten7_t;

static inline uint64_t CAVM_CST_CWX_CTI_CTIOUTEN7(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_CST_CWX_CTI_CTIOUTEN7(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CN10KA) && (a<=23))
        return 0x87a0040200bcll + 0x100000ll * ((a) & 0x1f);
    if (cavm_is_model(OCTEONTX_CN10KB) && (a<=7))
        return 0x87a0040200bcll + 0x100000ll * ((a) & 0x7);
    if (cavm_is_model(OCTEONTX_CNF10KA) && (a<=17))
        return 0x87a0040200bcll + 0x100000ll * ((a) & 0x1f);
    if (cavm_is_model(OCTEONTX_CNF10KB) && (a<=11))
        return 0x87a0040200bcll + 0x100000ll * ((a) & 0xf);
    __cavm_csr_fatal("CST_CWX_CTI_CTIOUTEN7", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_CST_CWX_CTI_CTIOUTEN7(a) cavm_cst_cwx_cti_ctiouten7_t
#define bustype_CAVM_CST_CWX_CTI_CTIOUTEN7(a) CSR_TYPE_NCB32b
#define basename_CAVM_CST_CWX_CTI_CTIOUTEN7(a) "CST_CWX_CTI_CTIOUTEN7"
#define busnum_CAVM_CST_CWX_CTI_CTIOUTEN7(a) (a)
#define arguments_CAVM_CST_CWX_CTI_CTIOUTEN7(a) (a),-1,-1,-1

/**
 * Register (NCB32b) cst_cw#_cti_ctiouten8
 *
 * CST Cw Cti Ctiouten8 Register
 * This register maps channels in the cross trigger system to trigger outputs. The
 * CTIOUTEN registers are bit maps that allow any channel input to be mapped to the
 * trigger output, including none (0x0) and all (0xF). There is one register per
 * trigger output so it is possible to map any channel input to any combination of
 * trigger outputs.
 */
union cavm_cst_cwx_cti_ctiouten8
{
    uint32_t u;
    struct cavm_cst_cwx_cti_ctiouten8_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t sbz_0                 : 28; /**< [ 31:  4](R/W) Software should write the field as all 0s. */
        uint32_t trigouten             : 4;  /**< [  3:  0](R/W) Channel to trigger output mapping. */
#else /* Word 0 - Little Endian */
        uint32_t trigouten             : 4;  /**< [  3:  0](R/W) Channel to trigger output mapping. */
        uint32_t sbz_0                 : 28; /**< [ 31:  4](R/W) Software should write the field as all 0s. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_cst_cwx_cti_ctiouten8_s cn; */
};
typedef union cavm_cst_cwx_cti_ctiouten8 cavm_cst_cwx_cti_ctiouten8_t;

static inline uint64_t CAVM_CST_CWX_CTI_CTIOUTEN8(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_CST_CWX_CTI_CTIOUTEN8(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CN10KA) && (a<=23))
        return 0x87a0040200c0ll + 0x100000ll * ((a) & 0x1f);
    if (cavm_is_model(OCTEONTX_CN10KB) && (a<=7))
        return 0x87a0040200c0ll + 0x100000ll * ((a) & 0x7);
    if (cavm_is_model(OCTEONTX_CNF10KA) && (a<=17))
        return 0x87a0040200c0ll + 0x100000ll * ((a) & 0x1f);
    if (cavm_is_model(OCTEONTX_CNF10KB) && (a<=11))
        return 0x87a0040200c0ll + 0x100000ll * ((a) & 0xf);
    __cavm_csr_fatal("CST_CWX_CTI_CTIOUTEN8", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_CST_CWX_CTI_CTIOUTEN8(a) cavm_cst_cwx_cti_ctiouten8_t
#define bustype_CAVM_CST_CWX_CTI_CTIOUTEN8(a) CSR_TYPE_NCB32b
#define basename_CAVM_CST_CWX_CTI_CTIOUTEN8(a) "CST_CWX_CTI_CTIOUTEN8"
#define busnum_CAVM_CST_CWX_CTI_CTIOUTEN8(a) (a)
#define arguments_CAVM_CST_CWX_CTI_CTIOUTEN8(a) (a),-1,-1,-1

/**
 * Register (NCB32b) cst_cw#_cti_ctiouten9
 *
 * CST Cw Cti Ctiouten9 Register
 * This register maps channels in the cross trigger system to trigger outputs. The
 * CTIOUTEN registers are bit maps that allow any channel input to be mapped to the
 * trigger output, including none (0x0) and all (0xF). There is one register per
 * trigger output so it is possible to map any channel input to any combination of
 * trigger outputs.
 */
union cavm_cst_cwx_cti_ctiouten9
{
    uint32_t u;
    struct cavm_cst_cwx_cti_ctiouten9_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t sbz_0                 : 28; /**< [ 31:  4](R/W) Software should write the field as all 0s. */
        uint32_t trigouten             : 4;  /**< [  3:  0](R/W) Channel to trigger output mapping. */
#else /* Word 0 - Little Endian */
        uint32_t trigouten             : 4;  /**< [  3:  0](R/W) Channel to trigger output mapping. */
        uint32_t sbz_0                 : 28; /**< [ 31:  4](R/W) Software should write the field as all 0s. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_cst_cwx_cti_ctiouten9_s cn; */
};
typedef union cavm_cst_cwx_cti_ctiouten9 cavm_cst_cwx_cti_ctiouten9_t;

static inline uint64_t CAVM_CST_CWX_CTI_CTIOUTEN9(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_CST_CWX_CTI_CTIOUTEN9(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CN10KA) && (a<=23))
        return 0x87a0040200c4ll + 0x100000ll * ((a) & 0x1f);
    if (cavm_is_model(OCTEONTX_CN10KB) && (a<=7))
        return 0x87a0040200c4ll + 0x100000ll * ((a) & 0x7);
    if (cavm_is_model(OCTEONTX_CNF10KA) && (a<=17))
        return 0x87a0040200c4ll + 0x100000ll * ((a) & 0x1f);
    if (cavm_is_model(OCTEONTX_CNF10KB) && (a<=11))
        return 0x87a0040200c4ll + 0x100000ll * ((a) & 0xf);
    __cavm_csr_fatal("CST_CWX_CTI_CTIOUTEN9", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_CST_CWX_CTI_CTIOUTEN9(a) cavm_cst_cwx_cti_ctiouten9_t
#define bustype_CAVM_CST_CWX_CTI_CTIOUTEN9(a) CSR_TYPE_NCB32b
#define basename_CAVM_CST_CWX_CTI_CTIOUTEN9(a) "CST_CWX_CTI_CTIOUTEN9"
#define busnum_CAVM_CST_CWX_CTI_CTIOUTEN9(a) (a)
#define arguments_CAVM_CST_CWX_CTI_CTIOUTEN9(a) (a),-1,-1,-1

/**
 * Register (NCB32b) cst_cw#_cti_ctitriginstatus
 *
 * CST Cw Cti Ctitriginstatus Register
 * Trigger input status. If the event_in input is driven by a source that generates
 * single cycle pulses, this register is generally read as 0.
 */
union cavm_cst_cwx_cti_ctitriginstatus
{
    uint32_t u;
    struct cavm_cst_cwx_cti_ctitriginstatus_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t triginstatus          : 32; /**< [ 31:  0](RO) Trigger input status. */
#else /* Word 0 - Little Endian */
        uint32_t triginstatus          : 32; /**< [ 31:  0](RO) Trigger input status. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_cst_cwx_cti_ctitriginstatus_s cn; */
};
typedef union cavm_cst_cwx_cti_ctitriginstatus cavm_cst_cwx_cti_ctitriginstatus_t;

static inline uint64_t CAVM_CST_CWX_CTI_CTITRIGINSTATUS(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_CST_CWX_CTI_CTITRIGINSTATUS(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CN10KA) && (a<=23))
        return 0x87a004020130ll + 0x100000ll * ((a) & 0x1f);
    if (cavm_is_model(OCTEONTX_CN10KB) && (a<=7))
        return 0x87a004020130ll + 0x100000ll * ((a) & 0x7);
    if (cavm_is_model(OCTEONTX_CNF10KA) && (a<=17))
        return 0x87a004020130ll + 0x100000ll * ((a) & 0x1f);
    if (cavm_is_model(OCTEONTX_CNF10KB) && (a<=11))
        return 0x87a004020130ll + 0x100000ll * ((a) & 0xf);
    __cavm_csr_fatal("CST_CWX_CTI_CTITRIGINSTATUS", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_CST_CWX_CTI_CTITRIGINSTATUS(a) cavm_cst_cwx_cti_ctitriginstatus_t
#define bustype_CAVM_CST_CWX_CTI_CTITRIGINSTATUS(a) CSR_TYPE_NCB32b
#define basename_CAVM_CST_CWX_CTI_CTITRIGINSTATUS(a) "CST_CWX_CTI_CTITRIGINSTATUS"
#define busnum_CAVM_CST_CWX_CTI_CTITRIGINSTATUS(a) (a)
#define arguments_CAVM_CST_CWX_CTI_CTITRIGINSTATUS(a) (a),-1,-1,-1

/**
 * Register (NCB32b) cst_cw#_cti_ctitrigoutstatus
 *
 * CST Cw Cti Ctitrigoutstatus Register
 * Trigger output status. The register only has meaning if the trigger source drives
 * static levels, rather than pulses.
 */
union cavm_cst_cwx_cti_ctitrigoutstatus
{
    uint32_t u;
    struct cavm_cst_cwx_cti_ctitrigoutstatus_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t trigoutstatus         : 32; /**< [ 31:  0](RO) Trigger output status. */
#else /* Word 0 - Little Endian */
        uint32_t trigoutstatus         : 32; /**< [ 31:  0](RO) Trigger output status. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_cst_cwx_cti_ctitrigoutstatus_s cn; */
};
typedef union cavm_cst_cwx_cti_ctitrigoutstatus cavm_cst_cwx_cti_ctitrigoutstatus_t;

static inline uint64_t CAVM_CST_CWX_CTI_CTITRIGOUTSTATUS(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_CST_CWX_CTI_CTITRIGOUTSTATUS(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CN10KA) && (a<=23))
        return 0x87a004020134ll + 0x100000ll * ((a) & 0x1f);
    if (cavm_is_model(OCTEONTX_CN10KB) && (a<=7))
        return 0x87a004020134ll + 0x100000ll * ((a) & 0x7);
    if (cavm_is_model(OCTEONTX_CNF10KA) && (a<=17))
        return 0x87a004020134ll + 0x100000ll * ((a) & 0x1f);
    if (cavm_is_model(OCTEONTX_CNF10KB) && (a<=11))
        return 0x87a004020134ll + 0x100000ll * ((a) & 0xf);
    __cavm_csr_fatal("CST_CWX_CTI_CTITRIGOUTSTATUS", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_CST_CWX_CTI_CTITRIGOUTSTATUS(a) cavm_cst_cwx_cti_ctitrigoutstatus_t
#define bustype_CAVM_CST_CWX_CTI_CTITRIGOUTSTATUS(a) CSR_TYPE_NCB32b
#define basename_CAVM_CST_CWX_CTI_CTITRIGOUTSTATUS(a) "CST_CWX_CTI_CTITRIGOUTSTATUS"
#define busnum_CAVM_CST_CWX_CTI_CTITRIGOUTSTATUS(a) (a)
#define arguments_CAVM_CST_CWX_CTI_CTITRIGOUTSTATUS(a) (a),-1,-1,-1

/**
 * Register (NCB32b) cst_cw#_cti_devaff0
 *
 * CST Cw Cti Devaff0 Register
 * Enables a debugger to determine if two components have an affinity with each other.
 */
union cavm_cst_cwx_cti_devaff0
{
    uint32_t u;
    struct cavm_cst_cwx_cti_devaff0_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t devaff0               : 32; /**< [ 31:  0](RO) Lower 32-bits of DEVAFF. The value is set by the devaff[31:0] tie-off inputs. */
#else /* Word 0 - Little Endian */
        uint32_t devaff0               : 32; /**< [ 31:  0](RO) Lower 32-bits of DEVAFF. The value is set by the devaff[31:0] tie-off inputs. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_cst_cwx_cti_devaff0_s cn; */
};
typedef union cavm_cst_cwx_cti_devaff0 cavm_cst_cwx_cti_devaff0_t;

static inline uint64_t CAVM_CST_CWX_CTI_DEVAFF0(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_CST_CWX_CTI_DEVAFF0(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CN10KA) && (a<=23))
        return 0x87a004020fa8ll + 0x100000ll * ((a) & 0x1f);
    if (cavm_is_model(OCTEONTX_CN10KB) && (a<=7))
        return 0x87a004020fa8ll + 0x100000ll * ((a) & 0x7);
    if (cavm_is_model(OCTEONTX_CNF10KA) && (a<=17))
        return 0x87a004020fa8ll + 0x100000ll * ((a) & 0x1f);
    if (cavm_is_model(OCTEONTX_CNF10KB) && (a<=11))
        return 0x87a004020fa8ll + 0x100000ll * ((a) & 0xf);
    __cavm_csr_fatal("CST_CWX_CTI_DEVAFF0", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_CST_CWX_CTI_DEVAFF0(a) cavm_cst_cwx_cti_devaff0_t
#define bustype_CAVM_CST_CWX_CTI_DEVAFF0(a) CSR_TYPE_NCB32b
#define basename_CAVM_CST_CWX_CTI_DEVAFF0(a) "CST_CWX_CTI_DEVAFF0"
#define busnum_CAVM_CST_CWX_CTI_DEVAFF0(a) (a)
#define arguments_CAVM_CST_CWX_CTI_DEVAFF0(a) (a),-1,-1,-1

/**
 * Register (NCB32b) cst_cw#_cti_devaff1
 *
 * CST Cw Cti Devaff1 Register
 * Enables a debugger to determine if two components have an affinity with each other.
 */
union cavm_cst_cwx_cti_devaff1
{
    uint32_t u;
    struct cavm_cst_cwx_cti_devaff1_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t devaff1               : 32; /**< [ 31:  0](RO) Upper 32-bits of DEVAFF. The value is set by the devaff[63:32] tie-off inputs. */
#else /* Word 0 - Little Endian */
        uint32_t devaff1               : 32; /**< [ 31:  0](RO) Upper 32-bits of DEVAFF. The value is set by the devaff[63:32] tie-off inputs. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_cst_cwx_cti_devaff1_s cn; */
};
typedef union cavm_cst_cwx_cti_devaff1 cavm_cst_cwx_cti_devaff1_t;

static inline uint64_t CAVM_CST_CWX_CTI_DEVAFF1(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_CST_CWX_CTI_DEVAFF1(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CN10KA) && (a<=23))
        return 0x87a004020facll + 0x100000ll * ((a) & 0x1f);
    if (cavm_is_model(OCTEONTX_CN10KB) && (a<=7))
        return 0x87a004020facll + 0x100000ll * ((a) & 0x7);
    if (cavm_is_model(OCTEONTX_CNF10KA) && (a<=17))
        return 0x87a004020facll + 0x100000ll * ((a) & 0x1f);
    if (cavm_is_model(OCTEONTX_CNF10KB) && (a<=11))
        return 0x87a004020facll + 0x100000ll * ((a) & 0xf);
    __cavm_csr_fatal("CST_CWX_CTI_DEVAFF1", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_CST_CWX_CTI_DEVAFF1(a) cavm_cst_cwx_cti_devaff1_t
#define bustype_CAVM_CST_CWX_CTI_DEVAFF1(a) CSR_TYPE_NCB32b
#define basename_CAVM_CST_CWX_CTI_DEVAFF1(a) "CST_CWX_CTI_DEVAFF1"
#define busnum_CAVM_CST_CWX_CTI_DEVAFF1(a) (a)
#define arguments_CAVM_CST_CWX_CTI_DEVAFF1(a) (a),-1,-1,-1

/**
 * Register (NCB32b) cst_cw#_cti_devarch
 *
 * CST Cw Cti Devarch Register
 * Identifies the architect and architecture of a CoreSight component. The architect
 * might differ from the designer of a component, for example Arm defines the
 * architecture but another company designs and implements the component.
 */
union cavm_cst_cwx_cti_devarch
{
    uint32_t u;
    struct cavm_cst_cwx_cti_devarch_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t architect             : 11; /**< [ 31: 21](RO) Returns 0x23b, denoting Arm as architect of the component. */
        uint32_t present               : 1;  /**< [ 20: 20](RO) Returns 1, indicating that the DEVARCH register is present. */
        uint32_t revision              : 4;  /**< [ 19: 16](RO) Architecture revision. Returns the revision of the architecture that the ARCHID field specifies. */
        uint32_t archid                : 16; /**< [ 15:  0](RO) Architecture ID. Returns 0x1a14, identifying Cross Trigger Interface architecture v2. */
#else /* Word 0 - Little Endian */
        uint32_t archid                : 16; /**< [ 15:  0](RO) Architecture ID. Returns 0x1a14, identifying Cross Trigger Interface architecture v2. */
        uint32_t revision              : 4;  /**< [ 19: 16](RO) Architecture revision. Returns the revision of the architecture that the ARCHID field specifies. */
        uint32_t present               : 1;  /**< [ 20: 20](RO) Returns 1, indicating that the DEVARCH register is present. */
        uint32_t architect             : 11; /**< [ 31: 21](RO) Returns 0x23b, denoting Arm as architect of the component. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_cst_cwx_cti_devarch_s cn; */
};
typedef union cavm_cst_cwx_cti_devarch cavm_cst_cwx_cti_devarch_t;

static inline uint64_t CAVM_CST_CWX_CTI_DEVARCH(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_CST_CWX_CTI_DEVARCH(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CN10KA) && (a<=23))
        return 0x87a004020fbcll + 0x100000ll * ((a) & 0x1f);
    if (cavm_is_model(OCTEONTX_CN10KB) && (a<=7))
        return 0x87a004020fbcll + 0x100000ll * ((a) & 0x7);
    if (cavm_is_model(OCTEONTX_CNF10KA) && (a<=17))
        return 0x87a004020fbcll + 0x100000ll * ((a) & 0x1f);
    if (cavm_is_model(OCTEONTX_CNF10KB) && (a<=11))
        return 0x87a004020fbcll + 0x100000ll * ((a) & 0xf);
    __cavm_csr_fatal("CST_CWX_CTI_DEVARCH", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_CST_CWX_CTI_DEVARCH(a) cavm_cst_cwx_cti_devarch_t
#define bustype_CAVM_CST_CWX_CTI_DEVARCH(a) CSR_TYPE_NCB32b
#define basename_CAVM_CST_CWX_CTI_DEVARCH(a) "CST_CWX_CTI_DEVARCH"
#define busnum_CAVM_CST_CWX_CTI_DEVARCH(a) (a)
#define arguments_CAVM_CST_CWX_CTI_DEVARCH(a) (a),-1,-1,-1

/**
 * Register (NCB32b) cst_cw#_cti_devid
 *
 * CST Cw Cti Devid Register
 * This register is IMPLEMENTATION DEFINED for each Part Number and Designer. The
 * register indicates the capabilities of the component.
 */
union cavm_cst_cwx_cti_devid
{
    uint32_t u;
    struct cavm_cst_cwx_cti_devid_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t reserved_25_31        : 7;
        uint32_t inout_f               : 1;  /**< [ 24: 24](RO) Indicates channel inputs are also masked by the CTIGATE register. Always 1. */
        uint32_t reserved_20_23        : 4;
        uint32_t num_ch                : 4;  /**< [ 19: 16](RO) The number of channels. Always 4. */
        uint32_t num_trig              : 8;  /**< [ 15:  8](RO) Indicates the maximum number of triggers - the maximum of the two parameters,
                                                                 NUM_EVENT_SLAVES and NUM_EVENT_MASTERS. */
        uint32_t reserved_5_7          : 3;
        uint32_t ext_mux_num           : 5;  /**< [  4:  0](RO) Indicates the value of the EXT_MUX_NUM parameter, which determines if there is
                                                                 any external multiplexing on the trigger inputs and outputs. 0 indicates no
                                                                 multiplexing. */
#else /* Word 0 - Little Endian */
        uint32_t ext_mux_num           : 5;  /**< [  4:  0](RO) Indicates the value of the EXT_MUX_NUM parameter, which determines if there is
                                                                 any external multiplexing on the trigger inputs and outputs. 0 indicates no
                                                                 multiplexing. */
        uint32_t reserved_5_7          : 3;
        uint32_t num_trig              : 8;  /**< [ 15:  8](RO) Indicates the maximum number of triggers - the maximum of the two parameters,
                                                                 NUM_EVENT_SLAVES and NUM_EVENT_MASTERS. */
        uint32_t num_ch                : 4;  /**< [ 19: 16](RO) The number of channels. Always 4. */
        uint32_t reserved_20_23        : 4;
        uint32_t inout_f               : 1;  /**< [ 24: 24](RO) Indicates channel inputs are also masked by the CTIGATE register. Always 1. */
        uint32_t reserved_25_31        : 7;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_cst_cwx_cti_devid_s cn; */
};
typedef union cavm_cst_cwx_cti_devid cavm_cst_cwx_cti_devid_t;

static inline uint64_t CAVM_CST_CWX_CTI_DEVID(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_CST_CWX_CTI_DEVID(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CN10KA) && (a<=23))
        return 0x87a004020fc8ll + 0x100000ll * ((a) & 0x1f);
    if (cavm_is_model(OCTEONTX_CN10KB) && (a<=7))
        return 0x87a004020fc8ll + 0x100000ll * ((a) & 0x7);
    if (cavm_is_model(OCTEONTX_CNF10KA) && (a<=17))
        return 0x87a004020fc8ll + 0x100000ll * ((a) & 0x1f);
    if (cavm_is_model(OCTEONTX_CNF10KB) && (a<=11))
        return 0x87a004020fc8ll + 0x100000ll * ((a) & 0xf);
    __cavm_csr_fatal("CST_CWX_CTI_DEVID", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_CST_CWX_CTI_DEVID(a) cavm_cst_cwx_cti_devid_t
#define bustype_CAVM_CST_CWX_CTI_DEVID(a) CSR_TYPE_NCB32b
#define basename_CAVM_CST_CWX_CTI_DEVID(a) "CST_CWX_CTI_DEVID"
#define busnum_CAVM_CST_CWX_CTI_DEVID(a) (a)
#define arguments_CAVM_CST_CWX_CTI_DEVID(a) (a),-1,-1,-1

/**
 * Register (NCB32b) cst_cw#_cti_devtype
 *
 * CST Cw Cti Devtype Register
 * A debugger can use this register to get information about a component that has an
 * unrecognized Part number.
 */
union cavm_cst_cwx_cti_devtype
{
    uint32_t u;
    struct cavm_cst_cwx_cti_devtype_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t reserved_8_31         : 24;
        uint32_t sub                   : 4;  /**< [  7:  4](RO) Minor classification. Returns 0x1, indicating this component is a Trigger-Matrix. */
        uint32_t major                 : 4;  /**< [  3:  0](RO) Major classification. Returns 0x4, indicating this component performs Debug Control. */
#else /* Word 0 - Little Endian */
        uint32_t major                 : 4;  /**< [  3:  0](RO) Major classification. Returns 0x4, indicating this component performs Debug Control. */
        uint32_t sub                   : 4;  /**< [  7:  4](RO) Minor classification. Returns 0x1, indicating this component is a Trigger-Matrix. */
        uint32_t reserved_8_31         : 24;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_cst_cwx_cti_devtype_s cn; */
};
typedef union cavm_cst_cwx_cti_devtype cavm_cst_cwx_cti_devtype_t;

static inline uint64_t CAVM_CST_CWX_CTI_DEVTYPE(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_CST_CWX_CTI_DEVTYPE(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CN10KA) && (a<=23))
        return 0x87a004020fccll + 0x100000ll * ((a) & 0x1f);
    if (cavm_is_model(OCTEONTX_CN10KB) && (a<=7))
        return 0x87a004020fccll + 0x100000ll * ((a) & 0x7);
    if (cavm_is_model(OCTEONTX_CNF10KA) && (a<=17))
        return 0x87a004020fccll + 0x100000ll * ((a) & 0x1f);
    if (cavm_is_model(OCTEONTX_CNF10KB) && (a<=11))
        return 0x87a004020fccll + 0x100000ll * ((a) & 0xf);
    __cavm_csr_fatal("CST_CWX_CTI_DEVTYPE", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_CST_CWX_CTI_DEVTYPE(a) cavm_cst_cwx_cti_devtype_t
#define bustype_CAVM_CST_CWX_CTI_DEVTYPE(a) CSR_TYPE_NCB32b
#define basename_CAVM_CST_CWX_CTI_DEVTYPE(a) "CST_CWX_CTI_DEVTYPE"
#define busnum_CAVM_CST_CWX_CTI_DEVTYPE(a) (a)
#define arguments_CAVM_CST_CWX_CTI_DEVTYPE(a) (a),-1,-1,-1

/**
 * Register (NCB32b) cst_cw#_cti_itchin
 *
 * CST Cw Cti Itchin Register
 * Integration test to view channel events. The integration test register includes a
 * latch that is set when a pulse is received on a channel input. When read, a register
 * bit reads as 1 if the channel has received a pulse since it was last read. The act
 * of reading the register automatically clears the 1 to a 0. When performing
 * integration testing it is therefore important to coordinate the setting of event
 * latches and reading/clearing them.
 */
union cavm_cst_cwx_cti_itchin
{
    uint32_t u;
    struct cavm_cst_cwx_cti_itchin_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t sbz_0                 : 28; /**< [ 31:  4](RO) Software should write the field as all 0s. */
        uint32_t ctichin               : 4;  /**< [  3:  0](RO) Reads the latched value of the channel inputs. */
#else /* Word 0 - Little Endian */
        uint32_t ctichin               : 4;  /**< [  3:  0](RO) Reads the latched value of the channel inputs. */
        uint32_t sbz_0                 : 28; /**< [ 31:  4](RO) Software should write the field as all 0s. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_cst_cwx_cti_itchin_s cn; */
};
typedef union cavm_cst_cwx_cti_itchin cavm_cst_cwx_cti_itchin_t;

static inline uint64_t CAVM_CST_CWX_CTI_ITCHIN(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_CST_CWX_CTI_ITCHIN(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CN10KA) && (a<=23))
        return 0x87a004020ef4ll + 0x100000ll * ((a) & 0x1f);
    if (cavm_is_model(OCTEONTX_CN10KB) && (a<=7))
        return 0x87a004020ef4ll + 0x100000ll * ((a) & 0x7);
    if (cavm_is_model(OCTEONTX_CNF10KA) && (a<=17))
        return 0x87a004020ef4ll + 0x100000ll * ((a) & 0x1f);
    if (cavm_is_model(OCTEONTX_CNF10KB) && (a<=11))
        return 0x87a004020ef4ll + 0x100000ll * ((a) & 0xf);
    __cavm_csr_fatal("CST_CWX_CTI_ITCHIN", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_CST_CWX_CTI_ITCHIN(a) cavm_cst_cwx_cti_itchin_t
#define bustype_CAVM_CST_CWX_CTI_ITCHIN(a) CSR_TYPE_NCB32b
#define basename_CAVM_CST_CWX_CTI_ITCHIN(a) "CST_CWX_CTI_ITCHIN"
#define busnum_CAVM_CST_CWX_CTI_ITCHIN(a) (a)
#define arguments_CAVM_CST_CWX_CTI_ITCHIN(a) (a),-1,-1,-1

/**
 * Register (NCB32b) cst_cw#_cti_itchout
 *
 * CST Cw Cti Itchout Register
 * Integration test mode register, used to generate channel events. Writing to the
 * register creates a single pulse on the output. ITCHOUT is self-clearing.
 */
union cavm_cst_cwx_cti_itchout
{
    uint32_t u;
    struct cavm_cst_cwx_cti_itchout_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t sbz_0                 : 28; /**< [ 31:  4](R/W) Software should write the field as all 0s. */
        uint32_t ctichout              : 4;  /**< [  3:  0](R/W) Pulses the channel outputs. */
#else /* Word 0 - Little Endian */
        uint32_t ctichout              : 4;  /**< [  3:  0](R/W) Pulses the channel outputs. */
        uint32_t sbz_0                 : 28; /**< [ 31:  4](R/W) Software should write the field as all 0s. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_cst_cwx_cti_itchout_s cn; */
};
typedef union cavm_cst_cwx_cti_itchout cavm_cst_cwx_cti_itchout_t;

static inline uint64_t CAVM_CST_CWX_CTI_ITCHOUT(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_CST_CWX_CTI_ITCHOUT(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CN10KA) && (a<=23))
        return 0x87a004020ee4ll + 0x100000ll * ((a) & 0x1f);
    if (cavm_is_model(OCTEONTX_CN10KB) && (a<=7))
        return 0x87a004020ee4ll + 0x100000ll * ((a) & 0x7);
    if (cavm_is_model(OCTEONTX_CNF10KA) && (a<=17))
        return 0x87a004020ee4ll + 0x100000ll * ((a) & 0x1f);
    if (cavm_is_model(OCTEONTX_CNF10KB) && (a<=11))
        return 0x87a004020ee4ll + 0x100000ll * ((a) & 0xf);
    __cavm_csr_fatal("CST_CWX_CTI_ITCHOUT", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_CST_CWX_CTI_ITCHOUT(a) cavm_cst_cwx_cti_itchout_t
#define bustype_CAVM_CST_CWX_CTI_ITCHOUT(a) CSR_TYPE_NCB32b
#define basename_CAVM_CST_CWX_CTI_ITCHOUT(a) "CST_CWX_CTI_ITCHOUT"
#define busnum_CAVM_CST_CWX_CTI_ITCHOUT(a) (a)
#define arguments_CAVM_CST_CWX_CTI_ITCHOUT(a) (a),-1,-1,-1

/**
 * Register (NCB32b) cst_cw#_cti_itctrl
 *
 * CST Cw Cti Itctrl Register
 * The Integration Mode Control register is used to enable topology detection.
 */
union cavm_cst_cwx_cti_itctrl
{
    uint32_t u;
    struct cavm_cst_cwx_cti_itctrl_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t razwi_0               : 31; /**< [ 31:  1](R/W) Read-As-Zero, Writes Ignored. */
        uint32_t ime                   : 1;  /**< [  0:  0](R/W) Integration Mode Enable. When set, the component enters integration mode,
                                                                 enabling topology detection or integration testing to be performed. */
#else /* Word 0 - Little Endian */
        uint32_t ime                   : 1;  /**< [  0:  0](R/W) Integration Mode Enable. When set, the component enters integration mode,
                                                                 enabling topology detection or integration testing to be performed. */
        uint32_t razwi_0               : 31; /**< [ 31:  1](R/W) Read-As-Zero, Writes Ignored. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_cst_cwx_cti_itctrl_s cn; */
};
typedef union cavm_cst_cwx_cti_itctrl cavm_cst_cwx_cti_itctrl_t;

static inline uint64_t CAVM_CST_CWX_CTI_ITCTRL(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_CST_CWX_CTI_ITCTRL(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CN10KA) && (a<=23))
        return 0x87a004020f00ll + 0x100000ll * ((a) & 0x1f);
    if (cavm_is_model(OCTEONTX_CN10KB) && (a<=7))
        return 0x87a004020f00ll + 0x100000ll * ((a) & 0x7);
    if (cavm_is_model(OCTEONTX_CNF10KA) && (a<=17))
        return 0x87a004020f00ll + 0x100000ll * ((a) & 0x1f);
    if (cavm_is_model(OCTEONTX_CNF10KB) && (a<=11))
        return 0x87a004020f00ll + 0x100000ll * ((a) & 0xf);
    __cavm_csr_fatal("CST_CWX_CTI_ITCTRL", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_CST_CWX_CTI_ITCTRL(a) cavm_cst_cwx_cti_itctrl_t
#define bustype_CAVM_CST_CWX_CTI_ITCTRL(a) CSR_TYPE_NCB32b
#define basename_CAVM_CST_CWX_CTI_ITCTRL(a) "CST_CWX_CTI_ITCTRL"
#define busnum_CAVM_CST_CWX_CTI_ITCTRL(a) (a)
#define arguments_CAVM_CST_CWX_CTI_ITCTRL(a) (a),-1,-1,-1

/**
 * Register (NCB32b) cst_cw#_cti_ittrigin
 *
 * CST Cw Cti Ittrigin Register
 * Integration test to view trigger events. The integration test register includes a
 * latch that is set when a pulse is received on a trigger input. When read, a register
 * bit reads as 1 if the trigger input has received a pulse since it was last read. The
 * act of reading the register automatically clears the 1 to a 0. When performing
 * integration testing it is therefore important to coordinate the setting of event
 * latches and reading/clearing them.
 */
union cavm_cst_cwx_cti_ittrigin
{
    uint32_t u;
    struct cavm_cst_cwx_cti_ittrigin_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t ctitrigin             : 32; /**< [ 31:  0](RO) Reads the latched value of the trigger inputs. */
#else /* Word 0 - Little Endian */
        uint32_t ctitrigin             : 32; /**< [ 31:  0](RO) Reads the latched value of the trigger inputs. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_cst_cwx_cti_ittrigin_s cn; */
};
typedef union cavm_cst_cwx_cti_ittrigin cavm_cst_cwx_cti_ittrigin_t;

static inline uint64_t CAVM_CST_CWX_CTI_ITTRIGIN(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_CST_CWX_CTI_ITTRIGIN(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CN10KA) && (a<=23))
        return 0x87a004020ef8ll + 0x100000ll * ((a) & 0x1f);
    if (cavm_is_model(OCTEONTX_CN10KB) && (a<=7))
        return 0x87a004020ef8ll + 0x100000ll * ((a) & 0x7);
    if (cavm_is_model(OCTEONTX_CNF10KA) && (a<=17))
        return 0x87a004020ef8ll + 0x100000ll * ((a) & 0x1f);
    if (cavm_is_model(OCTEONTX_CNF10KB) && (a<=11))
        return 0x87a004020ef8ll + 0x100000ll * ((a) & 0xf);
    __cavm_csr_fatal("CST_CWX_CTI_ITTRIGIN", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_CST_CWX_CTI_ITTRIGIN(a) cavm_cst_cwx_cti_ittrigin_t
#define bustype_CAVM_CST_CWX_CTI_ITTRIGIN(a) CSR_TYPE_NCB32b
#define basename_CAVM_CST_CWX_CTI_ITTRIGIN(a) "CST_CWX_CTI_ITTRIGIN"
#define busnum_CAVM_CST_CWX_CTI_ITTRIGIN(a) (a)
#define arguments_CAVM_CST_CWX_CTI_ITTRIGIN(a) (a),-1,-1,-1

/**
 * Register (NCB32b) cst_cw#_cti_ittrigout
 *
 * CST Cw Cti Ittrigout Register
 * Integration test to generate trigger events.
 */
union cavm_cst_cwx_cti_ittrigout
{
    uint32_t u;
    struct cavm_cst_cwx_cti_ittrigout_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t ctitrigout            : 32; /**< [ 31:  0](R/W) Set/clear trigger output signal. Reads return the value in the register. Writes: */
#else /* Word 0 - Little Endian */
        uint32_t ctitrigout            : 32; /**< [ 31:  0](R/W) Set/clear trigger output signal. Reads return the value in the register. Writes: */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_cst_cwx_cti_ittrigout_s cn; */
};
typedef union cavm_cst_cwx_cti_ittrigout cavm_cst_cwx_cti_ittrigout_t;

static inline uint64_t CAVM_CST_CWX_CTI_ITTRIGOUT(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_CST_CWX_CTI_ITTRIGOUT(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CN10KA) && (a<=23))
        return 0x87a004020ee8ll + 0x100000ll * ((a) & 0x1f);
    if (cavm_is_model(OCTEONTX_CN10KB) && (a<=7))
        return 0x87a004020ee8ll + 0x100000ll * ((a) & 0x7);
    if (cavm_is_model(OCTEONTX_CNF10KA) && (a<=17))
        return 0x87a004020ee8ll + 0x100000ll * ((a) & 0x1f);
    if (cavm_is_model(OCTEONTX_CNF10KB) && (a<=11))
        return 0x87a004020ee8ll + 0x100000ll * ((a) & 0xf);
    __cavm_csr_fatal("CST_CWX_CTI_ITTRIGOUT", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_CST_CWX_CTI_ITTRIGOUT(a) cavm_cst_cwx_cti_ittrigout_t
#define bustype_CAVM_CST_CWX_CTI_ITTRIGOUT(a) CSR_TYPE_NCB32b
#define basename_CAVM_CST_CWX_CTI_ITTRIGOUT(a) "CST_CWX_CTI_ITTRIGOUT"
#define busnum_CAVM_CST_CWX_CTI_ITTRIGOUT(a) (a)
#define arguments_CAVM_CST_CWX_CTI_ITTRIGOUT(a) (a),-1,-1,-1

/**
 * Register (NCB32b) cst_cw#_cti_pidr0
 *
 * CST Cw Cti Pidr0 Register
 * The PIDR0 register is part of the set of peripheral identification registers.
 */
union cavm_cst_cwx_cti_pidr0
{
    uint32_t u;
    struct cavm_cst_cwx_cti_pidr0_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t reserved_8_31         : 24;
        uint32_t part_0                : 8;  /**< [  7:  0](RO) Part number, bits[7:0]. Taken together with PIDR1.PART_1 it indicates the
                                                                 component. The Part Number is selected by the designer of the component. */
#else /* Word 0 - Little Endian */
        uint32_t part_0                : 8;  /**< [  7:  0](RO) Part number, bits[7:0]. Taken together with PIDR1.PART_1 it indicates the
                                                                 component. The Part Number is selected by the designer of the component. */
        uint32_t reserved_8_31         : 24;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_cst_cwx_cti_pidr0_s cn; */
};
typedef union cavm_cst_cwx_cti_pidr0 cavm_cst_cwx_cti_pidr0_t;

static inline uint64_t CAVM_CST_CWX_CTI_PIDR0(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_CST_CWX_CTI_PIDR0(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CN10KA) && (a<=23))
        return 0x87a004020fe0ll + 0x100000ll * ((a) & 0x1f);
    if (cavm_is_model(OCTEONTX_CN10KB) && (a<=7))
        return 0x87a004020fe0ll + 0x100000ll * ((a) & 0x7);
    if (cavm_is_model(OCTEONTX_CNF10KA) && (a<=17))
        return 0x87a004020fe0ll + 0x100000ll * ((a) & 0x1f);
    if (cavm_is_model(OCTEONTX_CNF10KB) && (a<=11))
        return 0x87a004020fe0ll + 0x100000ll * ((a) & 0xf);
    __cavm_csr_fatal("CST_CWX_CTI_PIDR0", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_CST_CWX_CTI_PIDR0(a) cavm_cst_cwx_cti_pidr0_t
#define bustype_CAVM_CST_CWX_CTI_PIDR0(a) CSR_TYPE_NCB32b
#define basename_CAVM_CST_CWX_CTI_PIDR0(a) "CST_CWX_CTI_PIDR0"
#define busnum_CAVM_CST_CWX_CTI_PIDR0(a) (a)
#define arguments_CAVM_CST_CWX_CTI_PIDR0(a) (a),-1,-1,-1

/**
 * Register (NCB32b) cst_cw#_cti_pidr1
 *
 * CST Cw Cti Pidr1 Register
 * The PIDR1 register is part of the set of peripheral identification registers.
 */
union cavm_cst_cwx_cti_pidr1
{
    uint32_t u;
    struct cavm_cst_cwx_cti_pidr1_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t reserved_8_31         : 24;
        uint32_t des_0                 : 4;  /**< [  7:  4](RO) JEP106 identification code, bits[3:0]. Together, with PIDR4.DES_2 and
                                                                 PIDR2.DES_1, they indicate the designer of the component and not the
                                                                 implementer, except where the two are the same. */
        uint32_t part_1                : 4;  /**< [  3:  0](RO) Part number, bits[11:8]. Taken together with PIDR0.PART_0 it indicates the
                                                                 component. The Part Number is selected by the designer of the component. */
#else /* Word 0 - Little Endian */
        uint32_t part_1                : 4;  /**< [  3:  0](RO) Part number, bits[11:8]. Taken together with PIDR0.PART_0 it indicates the
                                                                 component. The Part Number is selected by the designer of the component. */
        uint32_t des_0                 : 4;  /**< [  7:  4](RO) JEP106 identification code, bits[3:0]. Together, with PIDR4.DES_2 and
                                                                 PIDR2.DES_1, they indicate the designer of the component and not the
                                                                 implementer, except where the two are the same. */
        uint32_t reserved_8_31         : 24;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_cst_cwx_cti_pidr1_s cn; */
};
typedef union cavm_cst_cwx_cti_pidr1 cavm_cst_cwx_cti_pidr1_t;

static inline uint64_t CAVM_CST_CWX_CTI_PIDR1(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_CST_CWX_CTI_PIDR1(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CN10KA) && (a<=23))
        return 0x87a004020fe4ll + 0x100000ll * ((a) & 0x1f);
    if (cavm_is_model(OCTEONTX_CN10KB) && (a<=7))
        return 0x87a004020fe4ll + 0x100000ll * ((a) & 0x7);
    if (cavm_is_model(OCTEONTX_CNF10KA) && (a<=17))
        return 0x87a004020fe4ll + 0x100000ll * ((a) & 0x1f);
    if (cavm_is_model(OCTEONTX_CNF10KB) && (a<=11))
        return 0x87a004020fe4ll + 0x100000ll * ((a) & 0xf);
    __cavm_csr_fatal("CST_CWX_CTI_PIDR1", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_CST_CWX_CTI_PIDR1(a) cavm_cst_cwx_cti_pidr1_t
#define bustype_CAVM_CST_CWX_CTI_PIDR1(a) CSR_TYPE_NCB32b
#define basename_CAVM_CST_CWX_CTI_PIDR1(a) "CST_CWX_CTI_PIDR1"
#define busnum_CAVM_CST_CWX_CTI_PIDR1(a) (a)
#define arguments_CAVM_CST_CWX_CTI_PIDR1(a) (a),-1,-1,-1

/**
 * Register (NCB32b) cst_cw#_cti_pidr2
 *
 * CST Cw Cti Pidr2 Register
 * The PIDR2 register is part of the set of peripheral identification registers.
 */
union cavm_cst_cwx_cti_pidr2
{
    uint32_t u;
    struct cavm_cst_cwx_cti_pidr2_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t reserved_8_31         : 24;
        uint32_t revision              : 4;  /**< [  7:  4](RO) Revision. It is an incremental value starting at 0x0 for the first design of a
                                                                 component. See the css600 Component list in Chapter 1 for information on the RTL
                                                                 revision of the component. */
        uint32_t jedec                 : 1;  /**< [  3:  3](RO) 1 - Always set. Indicates that a JEDEC assigned value is used. */
        uint32_t des_1                 : 3;  /**< [  2:  0](RO) JEP106 identification code, bits[6:4]. Together, with PIDR4.DES_2 and
                                                                 PIDR1.DES_0, they indicate the designer of the component and not the
                                                                 implementer, except where the two are the same. */
#else /* Word 0 - Little Endian */
        uint32_t des_1                 : 3;  /**< [  2:  0](RO) JEP106 identification code, bits[6:4]. Together, with PIDR4.DES_2 and
                                                                 PIDR1.DES_0, they indicate the designer of the component and not the
                                                                 implementer, except where the two are the same. */
        uint32_t jedec                 : 1;  /**< [  3:  3](RO) 1 - Always set. Indicates that a JEDEC assigned value is used. */
        uint32_t revision              : 4;  /**< [  7:  4](RO) Revision. It is an incremental value starting at 0x0 for the first design of a
                                                                 component. See the css600 Component list in Chapter 1 for information on the RTL
                                                                 revision of the component. */
        uint32_t reserved_8_31         : 24;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_cst_cwx_cti_pidr2_s cn; */
};
typedef union cavm_cst_cwx_cti_pidr2 cavm_cst_cwx_cti_pidr2_t;

static inline uint64_t CAVM_CST_CWX_CTI_PIDR2(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_CST_CWX_CTI_PIDR2(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CN10KA) && (a<=23))
        return 0x87a004020fe8ll + 0x100000ll * ((a) & 0x1f);
    if (cavm_is_model(OCTEONTX_CN10KB) && (a<=7))
        return 0x87a004020fe8ll + 0x100000ll * ((a) & 0x7);
    if (cavm_is_model(OCTEONTX_CNF10KA) && (a<=17))
        return 0x87a004020fe8ll + 0x100000ll * ((a) & 0x1f);
    if (cavm_is_model(OCTEONTX_CNF10KB) && (a<=11))
        return 0x87a004020fe8ll + 0x100000ll * ((a) & 0xf);
    __cavm_csr_fatal("CST_CWX_CTI_PIDR2", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_CST_CWX_CTI_PIDR2(a) cavm_cst_cwx_cti_pidr2_t
#define bustype_CAVM_CST_CWX_CTI_PIDR2(a) CSR_TYPE_NCB32b
#define basename_CAVM_CST_CWX_CTI_PIDR2(a) "CST_CWX_CTI_PIDR2"
#define busnum_CAVM_CST_CWX_CTI_PIDR2(a) (a)
#define arguments_CAVM_CST_CWX_CTI_PIDR2(a) (a),-1,-1,-1

/**
 * Register (NCB32b) cst_cw#_cti_pidr3
 *
 * CST Cw Cti Pidr3 Register
 * The PIDR3 register is part of the set of peripheral identification registers.
 */
union cavm_cst_cwx_cti_pidr3
{
    uint32_t u;
    struct cavm_cst_cwx_cti_pidr3_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t reserved_8_31         : 24;
        uint32_t revand                : 4;  /**< [  7:  4](RO) This field indicates minor errata fixes specific to this design, for example
                                                                 metal fixes after implementation. In most cases this field is 0x0. */
        uint32_t cmod                  : 4;  /**< [  3:  0](RO) Customer Modified. Where the component is reusable IP, this value indicates if
                                                                 the customer has modified the behavior of the component. In most cases this
                                                                 field is 0x0. */
#else /* Word 0 - Little Endian */
        uint32_t cmod                  : 4;  /**< [  3:  0](RO) Customer Modified. Where the component is reusable IP, this value indicates if
                                                                 the customer has modified the behavior of the component. In most cases this
                                                                 field is 0x0. */
        uint32_t revand                : 4;  /**< [  7:  4](RO) This field indicates minor errata fixes specific to this design, for example
                                                                 metal fixes after implementation. In most cases this field is 0x0. */
        uint32_t reserved_8_31         : 24;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_cst_cwx_cti_pidr3_s cn; */
};
typedef union cavm_cst_cwx_cti_pidr3 cavm_cst_cwx_cti_pidr3_t;

static inline uint64_t CAVM_CST_CWX_CTI_PIDR3(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_CST_CWX_CTI_PIDR3(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CN10KA) && (a<=23))
        return 0x87a004020fecll + 0x100000ll * ((a) & 0x1f);
    if (cavm_is_model(OCTEONTX_CN10KB) && (a<=7))
        return 0x87a004020fecll + 0x100000ll * ((a) & 0x7);
    if (cavm_is_model(OCTEONTX_CNF10KA) && (a<=17))
        return 0x87a004020fecll + 0x100000ll * ((a) & 0x1f);
    if (cavm_is_model(OCTEONTX_CNF10KB) && (a<=11))
        return 0x87a004020fecll + 0x100000ll * ((a) & 0xf);
    __cavm_csr_fatal("CST_CWX_CTI_PIDR3", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_CST_CWX_CTI_PIDR3(a) cavm_cst_cwx_cti_pidr3_t
#define bustype_CAVM_CST_CWX_CTI_PIDR3(a) CSR_TYPE_NCB32b
#define basename_CAVM_CST_CWX_CTI_PIDR3(a) "CST_CWX_CTI_PIDR3"
#define busnum_CAVM_CST_CWX_CTI_PIDR3(a) (a)
#define arguments_CAVM_CST_CWX_CTI_PIDR3(a) (a),-1,-1,-1

/**
 * Register (NCB32b) cst_cw#_cti_pidr4
 *
 * CST Cw Cti Pidr4 Register
 * The PIDR4 register is part of the set of peripheral identification registers.
 */
union cavm_cst_cwx_cti_pidr4
{
    uint32_t u;
    struct cavm_cst_cwx_cti_pidr4_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t reserved_8_31         : 24;
        uint32_t size                  : 4;  /**< [  7:  4](RO) Indicates the memory size that is used by this component. Returns 0 indicating
                                                                 that the component uses an UNKNOWN number of 4KB blocks. Using the SIZE field to
                                                                 indicate the size of the component is deprecated. */
        uint32_t des_2                 : 4;  /**< [  3:  0](RO) JEP106 continuation code. Together, with PIDR2.DES_1 and PIDR1.DES_0, they
                                                                 indicate the designer of the component and not the implementer, except where the
                                                                 two are the same. */
#else /* Word 0 - Little Endian */
        uint32_t des_2                 : 4;  /**< [  3:  0](RO) JEP106 continuation code. Together, with PIDR2.DES_1 and PIDR1.DES_0, they
                                                                 indicate the designer of the component and not the implementer, except where the
                                                                 two are the same. */
        uint32_t size                  : 4;  /**< [  7:  4](RO) Indicates the memory size that is used by this component. Returns 0 indicating
                                                                 that the component uses an UNKNOWN number of 4KB blocks. Using the SIZE field to
                                                                 indicate the size of the component is deprecated. */
        uint32_t reserved_8_31         : 24;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_cst_cwx_cti_pidr4_s cn; */
};
typedef union cavm_cst_cwx_cti_pidr4 cavm_cst_cwx_cti_pidr4_t;

static inline uint64_t CAVM_CST_CWX_CTI_PIDR4(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_CST_CWX_CTI_PIDR4(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CN10KA) && (a<=23))
        return 0x87a004020fd0ll + 0x100000ll * ((a) & 0x1f);
    if (cavm_is_model(OCTEONTX_CN10KB) && (a<=7))
        return 0x87a004020fd0ll + 0x100000ll * ((a) & 0x7);
    if (cavm_is_model(OCTEONTX_CNF10KA) && (a<=17))
        return 0x87a004020fd0ll + 0x100000ll * ((a) & 0x1f);
    if (cavm_is_model(OCTEONTX_CNF10KB) && (a<=11))
        return 0x87a004020fd0ll + 0x100000ll * ((a) & 0xf);
    __cavm_csr_fatal("CST_CWX_CTI_PIDR4", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_CST_CWX_CTI_PIDR4(a) cavm_cst_cwx_cti_pidr4_t
#define bustype_CAVM_CST_CWX_CTI_PIDR4(a) CSR_TYPE_NCB32b
#define basename_CAVM_CST_CWX_CTI_PIDR4(a) "CST_CWX_CTI_PIDR4"
#define busnum_CAVM_CST_CWX_CTI_PIDR4(a) (a)
#define arguments_CAVM_CST_CWX_CTI_PIDR4(a) (a),-1,-1,-1

/**
 * Register (NCB32b) cst_cw#_cti_pidr5
 *
 * CST Cw Cti Pidr5 Register
 * The PIDR5 register is part of the set of peripheral identification registers.
 */
union cavm_cst_cwx_cti_pidr5
{
    uint32_t u;
    struct cavm_cst_cwx_cti_pidr5_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t reserved_8_31         : 24;
        uint32_t pidr5                 : 8;  /**< [  7:  0](RO) Reserved. */
#else /* Word 0 - Little Endian */
        uint32_t pidr5                 : 8;  /**< [  7:  0](RO) Reserved. */
        uint32_t reserved_8_31         : 24;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_cst_cwx_cti_pidr5_s cn; */
};
typedef union cavm_cst_cwx_cti_pidr5 cavm_cst_cwx_cti_pidr5_t;

static inline uint64_t CAVM_CST_CWX_CTI_PIDR5(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_CST_CWX_CTI_PIDR5(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CN10KA) && (a<=23))
        return 0x87a004020fd4ll + 0x100000ll * ((a) & 0x1f);
    if (cavm_is_model(OCTEONTX_CN10KB) && (a<=7))
        return 0x87a004020fd4ll + 0x100000ll * ((a) & 0x7);
    if (cavm_is_model(OCTEONTX_CNF10KA) && (a<=17))
        return 0x87a004020fd4ll + 0x100000ll * ((a) & 0x1f);
    if (cavm_is_model(OCTEONTX_CNF10KB) && (a<=11))
        return 0x87a004020fd4ll + 0x100000ll * ((a) & 0xf);
    __cavm_csr_fatal("CST_CWX_CTI_PIDR5", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_CST_CWX_CTI_PIDR5(a) cavm_cst_cwx_cti_pidr5_t
#define bustype_CAVM_CST_CWX_CTI_PIDR5(a) CSR_TYPE_NCB32b
#define basename_CAVM_CST_CWX_CTI_PIDR5(a) "CST_CWX_CTI_PIDR5"
#define busnum_CAVM_CST_CWX_CTI_PIDR5(a) (a)
#define arguments_CAVM_CST_CWX_CTI_PIDR5(a) (a),-1,-1,-1

/**
 * Register (NCB32b) cst_cw#_cti_pidr6
 *
 * CST Cw Cti Pidr6 Register
 * The PIDR6 register is part of the set of peripheral identification registers.
 */
union cavm_cst_cwx_cti_pidr6
{
    uint32_t u;
    struct cavm_cst_cwx_cti_pidr6_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t reserved_8_31         : 24;
        uint32_t pidr6                 : 8;  /**< [  7:  0](RO) Reserved. */
#else /* Word 0 - Little Endian */
        uint32_t pidr6                 : 8;  /**< [  7:  0](RO) Reserved. */
        uint32_t reserved_8_31         : 24;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_cst_cwx_cti_pidr6_s cn; */
};
typedef union cavm_cst_cwx_cti_pidr6 cavm_cst_cwx_cti_pidr6_t;

static inline uint64_t CAVM_CST_CWX_CTI_PIDR6(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_CST_CWX_CTI_PIDR6(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CN10KA) && (a<=23))
        return 0x87a004020fd8ll + 0x100000ll * ((a) & 0x1f);
    if (cavm_is_model(OCTEONTX_CN10KB) && (a<=7))
        return 0x87a004020fd8ll + 0x100000ll * ((a) & 0x7);
    if (cavm_is_model(OCTEONTX_CNF10KA) && (a<=17))
        return 0x87a004020fd8ll + 0x100000ll * ((a) & 0x1f);
    if (cavm_is_model(OCTEONTX_CNF10KB) && (a<=11))
        return 0x87a004020fd8ll + 0x100000ll * ((a) & 0xf);
    __cavm_csr_fatal("CST_CWX_CTI_PIDR6", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_CST_CWX_CTI_PIDR6(a) cavm_cst_cwx_cti_pidr6_t
#define bustype_CAVM_CST_CWX_CTI_PIDR6(a) CSR_TYPE_NCB32b
#define basename_CAVM_CST_CWX_CTI_PIDR6(a) "CST_CWX_CTI_PIDR6"
#define busnum_CAVM_CST_CWX_CTI_PIDR6(a) (a)
#define arguments_CAVM_CST_CWX_CTI_PIDR6(a) (a),-1,-1,-1

/**
 * Register (NCB32b) cst_cw#_cti_pidr7
 *
 * CST Cw Cti Pidr7 Register
 * The PIDR7 register is part of the set of peripheral identification registers.
 */
union cavm_cst_cwx_cti_pidr7
{
    uint32_t u;
    struct cavm_cst_cwx_cti_pidr7_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t reserved_8_31         : 24;
        uint32_t pidr7                 : 8;  /**< [  7:  0](RO) Reserved. */
#else /* Word 0 - Little Endian */
        uint32_t pidr7                 : 8;  /**< [  7:  0](RO) Reserved. */
        uint32_t reserved_8_31         : 24;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_cst_cwx_cti_pidr7_s cn; */
};
typedef union cavm_cst_cwx_cti_pidr7 cavm_cst_cwx_cti_pidr7_t;

static inline uint64_t CAVM_CST_CWX_CTI_PIDR7(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_CST_CWX_CTI_PIDR7(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CN10KA) && (a<=23))
        return 0x87a004020fdcll + 0x100000ll * ((a) & 0x1f);
    if (cavm_is_model(OCTEONTX_CN10KB) && (a<=7))
        return 0x87a004020fdcll + 0x100000ll * ((a) & 0x7);
    if (cavm_is_model(OCTEONTX_CNF10KA) && (a<=17))
        return 0x87a004020fdcll + 0x100000ll * ((a) & 0x1f);
    if (cavm_is_model(OCTEONTX_CNF10KB) && (a<=11))
        return 0x87a004020fdcll + 0x100000ll * ((a) & 0xf);
    __cavm_csr_fatal("CST_CWX_CTI_PIDR7", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_CST_CWX_CTI_PIDR7(a) cavm_cst_cwx_cti_pidr7_t
#define bustype_CAVM_CST_CWX_CTI_PIDR7(a) CSR_TYPE_NCB32b
#define basename_CAVM_CST_CWX_CTI_PIDR7(a) "CST_CWX_CTI_PIDR7"
#define busnum_CAVM_CST_CWX_CTI_PIDR7(a) (a)
#define arguments_CAVM_CST_CWX_CTI_PIDR7(a) (a),-1,-1,-1

#endif /* __CAVM_CSRS_CST_CW_CTI_H__ */
