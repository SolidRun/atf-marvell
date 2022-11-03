#ifndef __CAVM_CSRS_CST_SHRD_OCLA_CTI_H__
#define __CAVM_CSRS_CST_SHRD_OCLA_CTI_H__
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
 * OcteonTX CST_SHRD_OCLA_CTI.
 *
 * This file is auto generated. Do not edit.
 *
 */

/**
 * Register (NCB32b) cst_shrd_ocla_cti_asicctrl
 *
 * CST Shrd Ocla Cti Asicctrl Register
 * I/O port control.
 */
union cavm_cst_shrd_ocla_cti_asicctrl
{
    uint32_t u;
    struct cavm_cst_shrd_ocla_cti_asicctrl_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t sbz_0                 : 24; /**< [ 31:  8](R/W) Software should write the field as all 0s. */
        uint32_t asicctrl              : 8;  /**< [  7:  0](R/W) Set and clear external output signal. */
#else /* Word 0 - Little Endian */
        uint32_t asicctrl              : 8;  /**< [  7:  0](R/W) Set and clear external output signal. */
        uint32_t sbz_0                 : 24; /**< [ 31:  8](R/W) Software should write the field as all 0s. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_cst_shrd_ocla_cti_asicctrl_s cn; */
};
typedef union cavm_cst_shrd_ocla_cti_asicctrl cavm_cst_shrd_ocla_cti_asicctrl_t;

#define CAVM_CST_SHRD_OCLA_CTI_ASICCTRL CAVM_CST_SHRD_OCLA_CTI_ASICCTRL_FUNC()
static inline uint64_t CAVM_CST_SHRD_OCLA_CTI_ASICCTRL_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_CST_SHRD_OCLA_CTI_ASICCTRL_FUNC(void)
{
    return 0x87a100010144ll;
}

#define typedef_CAVM_CST_SHRD_OCLA_CTI_ASICCTRL cavm_cst_shrd_ocla_cti_asicctrl_t
#define bustype_CAVM_CST_SHRD_OCLA_CTI_ASICCTRL CSR_TYPE_NCB32b
#define basename_CAVM_CST_SHRD_OCLA_CTI_ASICCTRL "CST_SHRD_OCLA_CTI_ASICCTRL"
#define busnum_CAVM_CST_SHRD_OCLA_CTI_ASICCTRL 0
#define arguments_CAVM_CST_SHRD_OCLA_CTI_ASICCTRL -1,-1,-1,-1

/**
 * Register (NCB32b) cst_shrd_ocla_cti_authstatus
 *
 * CST Shrd Ocla Cti Authstatus Register
 * Reports the current status of the authentication control signals.
 */
union cavm_cst_shrd_ocla_cti_authstatus
{
    uint32_t u;
    struct cavm_cst_shrd_ocla_cti_authstatus_s
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
    /* struct cavm_cst_shrd_ocla_cti_authstatus_s cn; */
};
typedef union cavm_cst_shrd_ocla_cti_authstatus cavm_cst_shrd_ocla_cti_authstatus_t;

#define CAVM_CST_SHRD_OCLA_CTI_AUTHSTATUS CAVM_CST_SHRD_OCLA_CTI_AUTHSTATUS_FUNC()
static inline uint64_t CAVM_CST_SHRD_OCLA_CTI_AUTHSTATUS_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_CST_SHRD_OCLA_CTI_AUTHSTATUS_FUNC(void)
{
    return 0x87a100010fb8ll;
}

#define typedef_CAVM_CST_SHRD_OCLA_CTI_AUTHSTATUS cavm_cst_shrd_ocla_cti_authstatus_t
#define bustype_CAVM_CST_SHRD_OCLA_CTI_AUTHSTATUS CSR_TYPE_NCB32b
#define basename_CAVM_CST_SHRD_OCLA_CTI_AUTHSTATUS "CST_SHRD_OCLA_CTI_AUTHSTATUS"
#define busnum_CAVM_CST_SHRD_OCLA_CTI_AUTHSTATUS 0
#define arguments_CAVM_CST_SHRD_OCLA_CTI_AUTHSTATUS -1,-1,-1,-1

/**
 * Register (NCB32b) cst_shrd_ocla_cti_cidr0
 *
 * CST Shrd Ocla Cti Cidr0 Register
 * The CIDR0 register is part of the set of component identification registers.
 */
union cavm_cst_shrd_ocla_cti_cidr0
{
    uint32_t u;
    struct cavm_cst_shrd_ocla_cti_cidr0_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t reserved_8_31         : 24;
        uint32_t prmbl_0               : 8;  /**< [  7:  0](RO) Preamble. Returns 0x0D. */
#else /* Word 0 - Little Endian */
        uint32_t prmbl_0               : 8;  /**< [  7:  0](RO) Preamble. Returns 0x0D. */
        uint32_t reserved_8_31         : 24;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_cst_shrd_ocla_cti_cidr0_s cn; */
};
typedef union cavm_cst_shrd_ocla_cti_cidr0 cavm_cst_shrd_ocla_cti_cidr0_t;

#define CAVM_CST_SHRD_OCLA_CTI_CIDR0 CAVM_CST_SHRD_OCLA_CTI_CIDR0_FUNC()
static inline uint64_t CAVM_CST_SHRD_OCLA_CTI_CIDR0_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_CST_SHRD_OCLA_CTI_CIDR0_FUNC(void)
{
    return 0x87a100010ff0ll;
}

#define typedef_CAVM_CST_SHRD_OCLA_CTI_CIDR0 cavm_cst_shrd_ocla_cti_cidr0_t
#define bustype_CAVM_CST_SHRD_OCLA_CTI_CIDR0 CSR_TYPE_NCB32b
#define basename_CAVM_CST_SHRD_OCLA_CTI_CIDR0 "CST_SHRD_OCLA_CTI_CIDR0"
#define busnum_CAVM_CST_SHRD_OCLA_CTI_CIDR0 0
#define arguments_CAVM_CST_SHRD_OCLA_CTI_CIDR0 -1,-1,-1,-1

/**
 * Register (NCB32b) cst_shrd_ocla_cti_cidr1
 *
 * CST Shrd Ocla Cti Cidr1 Register
 * The CIDR1 register is part of the set of component identification registers.
 */
union cavm_cst_shrd_ocla_cti_cidr1
{
    uint32_t u;
    struct cavm_cst_shrd_ocla_cti_cidr1_s
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
    /* struct cavm_cst_shrd_ocla_cti_cidr1_s cn; */
};
typedef union cavm_cst_shrd_ocla_cti_cidr1 cavm_cst_shrd_ocla_cti_cidr1_t;

#define CAVM_CST_SHRD_OCLA_CTI_CIDR1 CAVM_CST_SHRD_OCLA_CTI_CIDR1_FUNC()
static inline uint64_t CAVM_CST_SHRD_OCLA_CTI_CIDR1_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_CST_SHRD_OCLA_CTI_CIDR1_FUNC(void)
{
    return 0x87a100010ff4ll;
}

#define typedef_CAVM_CST_SHRD_OCLA_CTI_CIDR1 cavm_cst_shrd_ocla_cti_cidr1_t
#define bustype_CAVM_CST_SHRD_OCLA_CTI_CIDR1 CSR_TYPE_NCB32b
#define basename_CAVM_CST_SHRD_OCLA_CTI_CIDR1 "CST_SHRD_OCLA_CTI_CIDR1"
#define busnum_CAVM_CST_SHRD_OCLA_CTI_CIDR1 0
#define arguments_CAVM_CST_SHRD_OCLA_CTI_CIDR1 -1,-1,-1,-1

/**
 * Register (NCB32b) cst_shrd_ocla_cti_cidr2
 *
 * CST Shrd Ocla Cti Cidr2 Register
 * The CIDR2 register is part of the set of component identification registers.
 */
union cavm_cst_shrd_ocla_cti_cidr2
{
    uint32_t u;
    struct cavm_cst_shrd_ocla_cti_cidr2_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t reserved_8_31         : 24;
        uint32_t prmbl_2               : 8;  /**< [  7:  0](RO) Preamble. Returns 0x05. */
#else /* Word 0 - Little Endian */
        uint32_t prmbl_2               : 8;  /**< [  7:  0](RO) Preamble. Returns 0x05. */
        uint32_t reserved_8_31         : 24;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_cst_shrd_ocla_cti_cidr2_s cn; */
};
typedef union cavm_cst_shrd_ocla_cti_cidr2 cavm_cst_shrd_ocla_cti_cidr2_t;

#define CAVM_CST_SHRD_OCLA_CTI_CIDR2 CAVM_CST_SHRD_OCLA_CTI_CIDR2_FUNC()
static inline uint64_t CAVM_CST_SHRD_OCLA_CTI_CIDR2_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_CST_SHRD_OCLA_CTI_CIDR2_FUNC(void)
{
    return 0x87a100010ff8ll;
}

#define typedef_CAVM_CST_SHRD_OCLA_CTI_CIDR2 cavm_cst_shrd_ocla_cti_cidr2_t
#define bustype_CAVM_CST_SHRD_OCLA_CTI_CIDR2 CSR_TYPE_NCB32b
#define basename_CAVM_CST_SHRD_OCLA_CTI_CIDR2 "CST_SHRD_OCLA_CTI_CIDR2"
#define busnum_CAVM_CST_SHRD_OCLA_CTI_CIDR2 0
#define arguments_CAVM_CST_SHRD_OCLA_CTI_CIDR2 -1,-1,-1,-1

/**
 * Register (NCB32b) cst_shrd_ocla_cti_cidr3
 *
 * CST Shrd Ocla Cti Cidr3 Register
 * The CIDR3 register is part of the set of component identification registers.
 */
union cavm_cst_shrd_ocla_cti_cidr3
{
    uint32_t u;
    struct cavm_cst_shrd_ocla_cti_cidr3_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t reserved_8_31         : 24;
        uint32_t prmbl_3               : 8;  /**< [  7:  0](RO) Preamble. Returns 0xB1. */
#else /* Word 0 - Little Endian */
        uint32_t prmbl_3               : 8;  /**< [  7:  0](RO) Preamble. Returns 0xB1. */
        uint32_t reserved_8_31         : 24;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_cst_shrd_ocla_cti_cidr3_s cn; */
};
typedef union cavm_cst_shrd_ocla_cti_cidr3 cavm_cst_shrd_ocla_cti_cidr3_t;

#define CAVM_CST_SHRD_OCLA_CTI_CIDR3 CAVM_CST_SHRD_OCLA_CTI_CIDR3_FUNC()
static inline uint64_t CAVM_CST_SHRD_OCLA_CTI_CIDR3_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_CST_SHRD_OCLA_CTI_CIDR3_FUNC(void)
{
    return 0x87a100010ffcll;
}

#define typedef_CAVM_CST_SHRD_OCLA_CTI_CIDR3 cavm_cst_shrd_ocla_cti_cidr3_t
#define bustype_CAVM_CST_SHRD_OCLA_CTI_CIDR3 CSR_TYPE_NCB32b
#define basename_CAVM_CST_SHRD_OCLA_CTI_CIDR3 "CST_SHRD_OCLA_CTI_CIDR3"
#define busnum_CAVM_CST_SHRD_OCLA_CTI_CIDR3 0
#define arguments_CAVM_CST_SHRD_OCLA_CTI_CIDR3 -1,-1,-1,-1

/**
 * Register (NCB32b) cst_shrd_ocla_cti_claimclr
 *
 * CST Shrd Ocla Cti Claimclr Register
 * This register forms one half of the claim tag value. On writes, this location
 * enables individual bits to be cleared. On reads, it returns the current claim tag
 * value.
 */
union cavm_cst_shrd_ocla_cti_claimclr
{
    uint32_t u;
    struct cavm_cst_shrd_ocla_cti_claimclr_s
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
    /* struct cavm_cst_shrd_ocla_cti_claimclr_s cn; */
};
typedef union cavm_cst_shrd_ocla_cti_claimclr cavm_cst_shrd_ocla_cti_claimclr_t;

#define CAVM_CST_SHRD_OCLA_CTI_CLAIMCLR CAVM_CST_SHRD_OCLA_CTI_CLAIMCLR_FUNC()
static inline uint64_t CAVM_CST_SHRD_OCLA_CTI_CLAIMCLR_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_CST_SHRD_OCLA_CTI_CLAIMCLR_FUNC(void)
{
    return 0x87a100010fa4ll;
}

#define typedef_CAVM_CST_SHRD_OCLA_CTI_CLAIMCLR cavm_cst_shrd_ocla_cti_claimclr_t
#define bustype_CAVM_CST_SHRD_OCLA_CTI_CLAIMCLR CSR_TYPE_NCB32b
#define basename_CAVM_CST_SHRD_OCLA_CTI_CLAIMCLR "CST_SHRD_OCLA_CTI_CLAIMCLR"
#define busnum_CAVM_CST_SHRD_OCLA_CTI_CLAIMCLR 0
#define arguments_CAVM_CST_SHRD_OCLA_CTI_CLAIMCLR -1,-1,-1,-1

/**
 * Register (NCB32b) cst_shrd_ocla_cti_claimset
 *
 * CST Shrd Ocla Cti Claimset Register
 * This register forms one half of the claim tag value. On writes, this location
 * enables individual bits to be set. On reads, it returns the number of bits that can
 * be set.
 */
union cavm_cst_shrd_ocla_cti_claimset
{
    uint32_t u;
    struct cavm_cst_shrd_ocla_cti_claimset_s
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
    /* struct cavm_cst_shrd_ocla_cti_claimset_s cn; */
};
typedef union cavm_cst_shrd_ocla_cti_claimset cavm_cst_shrd_ocla_cti_claimset_t;

#define CAVM_CST_SHRD_OCLA_CTI_CLAIMSET CAVM_CST_SHRD_OCLA_CTI_CLAIMSET_FUNC()
static inline uint64_t CAVM_CST_SHRD_OCLA_CTI_CLAIMSET_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_CST_SHRD_OCLA_CTI_CLAIMSET_FUNC(void)
{
    return 0x87a100010fa0ll;
}

#define typedef_CAVM_CST_SHRD_OCLA_CTI_CLAIMSET cavm_cst_shrd_ocla_cti_claimset_t
#define bustype_CAVM_CST_SHRD_OCLA_CTI_CLAIMSET CSR_TYPE_NCB32b
#define basename_CAVM_CST_SHRD_OCLA_CTI_CLAIMSET "CST_SHRD_OCLA_CTI_CLAIMSET"
#define busnum_CAVM_CST_SHRD_OCLA_CTI_CLAIMSET 0
#define arguments_CAVM_CST_SHRD_OCLA_CTI_CLAIMSET -1,-1,-1,-1

/**
 * Register (NCB32b) cst_shrd_ocla_cti_ctiappclear
 *
 * CST Shrd Ocla Cti Ctiappclear Register
 * The application channel clear register allows software to clear any channel output.
 * This register can be used by software to clear a channel event in place of a
 * hardware source on a trigger input. In a system where all events are sent as single
 * cycle pulses, this register must not be used. It is only retained for compatibility
 * with older systems and software. The register is implemented before the CTIGATE
 * register so, for the channel event to propagate outside the CTI, it is necessary for
 * the corresponding CTIGATE bit to be 1.
 */
union cavm_cst_shrd_ocla_cti_ctiappclear
{
    uint32_t u;
    struct cavm_cst_shrd_ocla_cti_ctiappclear_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t sbz_0                 : 28; /**< [ 31:  4](WO) Software should write the field as all 0s. */
        uint32_t appclear              : 4;  /**< [  3:  0](WO) Clears the corresponding internal channel flag. */
#else /* Word 0 - Little Endian */
        uint32_t appclear              : 4;  /**< [  3:  0](WO) Clears the corresponding internal channel flag. */
        uint32_t sbz_0                 : 28; /**< [ 31:  4](WO) Software should write the field as all 0s. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_cst_shrd_ocla_cti_ctiappclear_s cn; */
};
typedef union cavm_cst_shrd_ocla_cti_ctiappclear cavm_cst_shrd_ocla_cti_ctiappclear_t;

#define CAVM_CST_SHRD_OCLA_CTI_CTIAPPCLEAR CAVM_CST_SHRD_OCLA_CTI_CTIAPPCLEAR_FUNC()
static inline uint64_t CAVM_CST_SHRD_OCLA_CTI_CTIAPPCLEAR_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_CST_SHRD_OCLA_CTI_CTIAPPCLEAR_FUNC(void)
{
    return 0x87a100010018ll;
}

#define typedef_CAVM_CST_SHRD_OCLA_CTI_CTIAPPCLEAR cavm_cst_shrd_ocla_cti_ctiappclear_t
#define bustype_CAVM_CST_SHRD_OCLA_CTI_CTIAPPCLEAR CSR_TYPE_NCB32b
#define basename_CAVM_CST_SHRD_OCLA_CTI_CTIAPPCLEAR "CST_SHRD_OCLA_CTI_CTIAPPCLEAR"
#define busnum_CAVM_CST_SHRD_OCLA_CTI_CTIAPPCLEAR 0
#define arguments_CAVM_CST_SHRD_OCLA_CTI_CTIAPPCLEAR -1,-1,-1,-1

/**
 * Register (NCB32b) cst_shrd_ocla_cti_ctiapppulse
 *
 * CST Shrd Ocla Cti Ctiapppulse Register
 * The application channel pulse register allows software to pulse any channel output.
 * This register can be used by software to pulse a channel event in place of a
 * hardware source on a trigger input. The register is implemented before the CTIGATE
 * register so, for the channel event to propagate outside the CTI, it is necessary for
 * the corresponding CTIGATE bit to be 1.
 */
union cavm_cst_shrd_ocla_cti_ctiapppulse
{
    uint32_t u;
    struct cavm_cst_shrd_ocla_cti_ctiapppulse_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t sbz_0                 : 28; /**< [ 31:  4](WO) Software should write the field as all 0s. */
        uint32_t apppulse              : 4;  /**< [  3:  0](WO) Pulses the channel outputs. */
#else /* Word 0 - Little Endian */
        uint32_t apppulse              : 4;  /**< [  3:  0](WO) Pulses the channel outputs. */
        uint32_t sbz_0                 : 28; /**< [ 31:  4](WO) Software should write the field as all 0s. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_cst_shrd_ocla_cti_ctiapppulse_s cn; */
};
typedef union cavm_cst_shrd_ocla_cti_ctiapppulse cavm_cst_shrd_ocla_cti_ctiapppulse_t;

#define CAVM_CST_SHRD_OCLA_CTI_CTIAPPPULSE CAVM_CST_SHRD_OCLA_CTI_CTIAPPPULSE_FUNC()
static inline uint64_t CAVM_CST_SHRD_OCLA_CTI_CTIAPPPULSE_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_CST_SHRD_OCLA_CTI_CTIAPPPULSE_FUNC(void)
{
    return 0x87a10001001cll;
}

#define typedef_CAVM_CST_SHRD_OCLA_CTI_CTIAPPPULSE cavm_cst_shrd_ocla_cti_ctiapppulse_t
#define bustype_CAVM_CST_SHRD_OCLA_CTI_CTIAPPPULSE CSR_TYPE_NCB32b
#define basename_CAVM_CST_SHRD_OCLA_CTI_CTIAPPPULSE "CST_SHRD_OCLA_CTI_CTIAPPPULSE"
#define busnum_CAVM_CST_SHRD_OCLA_CTI_CTIAPPPULSE 0
#define arguments_CAVM_CST_SHRD_OCLA_CTI_CTIAPPPULSE -1,-1,-1,-1

/**
 * Register (NCB32b) cst_shrd_ocla_cti_ctiappset
 *
 * CST Shrd Ocla Cti Ctiappset Register
 * The application channel set register allows software to set any channel output. This
 * register can be used by software to generate a channel event in place of a hardware
 * source on a trigger input. In a system where all events are sent as single cycle
 * pulses, this register must not be used. It is only retained for compatibility with
 * older systems and software. The register is implemented before the CTIGATE register
 * so, for the channel event to propagate outside the CTI, it is necessary for the
 * corresponding CTIGATE bit to be 1.
 */
union cavm_cst_shrd_ocla_cti_ctiappset
{
    uint32_t u;
    struct cavm_cst_shrd_ocla_cti_ctiappset_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t sbz_0                 : 28; /**< [ 31:  4](R/W) Software should write the field as all 0s. */
        uint32_t appset                : 4;  /**< [  3:  0](R/W) Sets the corresponding internal channel flag. */
#else /* Word 0 - Little Endian */
        uint32_t appset                : 4;  /**< [  3:  0](R/W) Sets the corresponding internal channel flag. */
        uint32_t sbz_0                 : 28; /**< [ 31:  4](R/W) Software should write the field as all 0s. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_cst_shrd_ocla_cti_ctiappset_s cn; */
};
typedef union cavm_cst_shrd_ocla_cti_ctiappset cavm_cst_shrd_ocla_cti_ctiappset_t;

#define CAVM_CST_SHRD_OCLA_CTI_CTIAPPSET CAVM_CST_SHRD_OCLA_CTI_CTIAPPSET_FUNC()
static inline uint64_t CAVM_CST_SHRD_OCLA_CTI_CTIAPPSET_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_CST_SHRD_OCLA_CTI_CTIAPPSET_FUNC(void)
{
    return 0x87a100010014ll;
}

#define typedef_CAVM_CST_SHRD_OCLA_CTI_CTIAPPSET cavm_cst_shrd_ocla_cti_ctiappset_t
#define bustype_CAVM_CST_SHRD_OCLA_CTI_CTIAPPSET CSR_TYPE_NCB32b
#define basename_CAVM_CST_SHRD_OCLA_CTI_CTIAPPSET "CST_SHRD_OCLA_CTI_CTIAPPSET"
#define busnum_CAVM_CST_SHRD_OCLA_CTI_CTIAPPSET 0
#define arguments_CAVM_CST_SHRD_OCLA_CTI_CTIAPPSET -1,-1,-1,-1

/**
 * Register (NCB32b) cst_shrd_ocla_cti_ctichinstatus
 *
 * CST Shrd Ocla Cti Ctichinstatus Register
 * Channel input status. If the channel input is driven by a source that generates
 * single cycle pulses, this register is generally read as 0.
 */
union cavm_cst_shrd_ocla_cti_ctichinstatus
{
    uint32_t u;
    struct cavm_cst_shrd_ocla_cti_ctichinstatus_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t sbz_0                 : 28; /**< [ 31:  4](RO) Software should write the field as all 0s. */
        uint32_t ctichinstatus         : 4;  /**< [  3:  0](RO) Channel input status. */
#else /* Word 0 - Little Endian */
        uint32_t ctichinstatus         : 4;  /**< [  3:  0](RO) Channel input status. */
        uint32_t sbz_0                 : 28; /**< [ 31:  4](RO) Software should write the field as all 0s. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_cst_shrd_ocla_cti_ctichinstatus_s cn; */
};
typedef union cavm_cst_shrd_ocla_cti_ctichinstatus cavm_cst_shrd_ocla_cti_ctichinstatus_t;

#define CAVM_CST_SHRD_OCLA_CTI_CTICHINSTATUS CAVM_CST_SHRD_OCLA_CTI_CTICHINSTATUS_FUNC()
static inline uint64_t CAVM_CST_SHRD_OCLA_CTI_CTICHINSTATUS_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_CST_SHRD_OCLA_CTI_CTICHINSTATUS_FUNC(void)
{
    return 0x87a100010138ll;
}

#define typedef_CAVM_CST_SHRD_OCLA_CTI_CTICHINSTATUS cavm_cst_shrd_ocla_cti_ctichinstatus_t
#define bustype_CAVM_CST_SHRD_OCLA_CTI_CTICHINSTATUS CSR_TYPE_NCB32b
#define basename_CAVM_CST_SHRD_OCLA_CTI_CTICHINSTATUS "CST_SHRD_OCLA_CTI_CTICHINSTATUS"
#define busnum_CAVM_CST_SHRD_OCLA_CTI_CTICHINSTATUS 0
#define arguments_CAVM_CST_SHRD_OCLA_CTI_CTICHINSTATUS -1,-1,-1,-1

/**
 * Register (NCB32b) cst_shrd_ocla_cti_ctichoutstatus
 *
 * CST Shrd Ocla Cti Ctichoutstatus Register
 * Channel output status. The register only has meaning if the trigger source drives
 * static levels, rather than pulses.
 */
union cavm_cst_shrd_ocla_cti_ctichoutstatus
{
    uint32_t u;
    struct cavm_cst_shrd_ocla_cti_ctichoutstatus_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t sbz_0                 : 28; /**< [ 31:  4](RO) Software should write the field as all 0s. */
        uint32_t ctichoutstatus        : 4;  /**< [  3:  0](RO) Channel output status. */
#else /* Word 0 - Little Endian */
        uint32_t ctichoutstatus        : 4;  /**< [  3:  0](RO) Channel output status. */
        uint32_t sbz_0                 : 28; /**< [ 31:  4](RO) Software should write the field as all 0s. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_cst_shrd_ocla_cti_ctichoutstatus_s cn; */
};
typedef union cavm_cst_shrd_ocla_cti_ctichoutstatus cavm_cst_shrd_ocla_cti_ctichoutstatus_t;

#define CAVM_CST_SHRD_OCLA_CTI_CTICHOUTSTATUS CAVM_CST_SHRD_OCLA_CTI_CTICHOUTSTATUS_FUNC()
static inline uint64_t CAVM_CST_SHRD_OCLA_CTI_CTICHOUTSTATUS_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_CST_SHRD_OCLA_CTI_CTICHOUTSTATUS_FUNC(void)
{
    return 0x87a10001013cll;
}

#define typedef_CAVM_CST_SHRD_OCLA_CTI_CTICHOUTSTATUS cavm_cst_shrd_ocla_cti_ctichoutstatus_t
#define bustype_CAVM_CST_SHRD_OCLA_CTI_CTICHOUTSTATUS CSR_TYPE_NCB32b
#define basename_CAVM_CST_SHRD_OCLA_CTI_CTICHOUTSTATUS "CST_SHRD_OCLA_CTI_CTICHOUTSTATUS"
#define busnum_CAVM_CST_SHRD_OCLA_CTI_CTICHOUTSTATUS 0
#define arguments_CAVM_CST_SHRD_OCLA_CTI_CTICHOUTSTATUS -1,-1,-1,-1

/**
 * Register (NCB32b) cst_shrd_ocla_cti_cticontrol
 *
 * CST Shrd Ocla Cti Cticontrol Register
 * The CTI control register enables and disables the CTI.
 */
union cavm_cst_shrd_ocla_cti_cticontrol
{
    uint32_t u;
    struct cavm_cst_shrd_ocla_cti_cticontrol_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t sbz_0                 : 31; /**< [ 31:  1](R/W) Software should write the field as all 0s. */
        uint32_t ctien                 : 1;  /**< [  0:  0](R/W) Enable control. */
#else /* Word 0 - Little Endian */
        uint32_t ctien                 : 1;  /**< [  0:  0](R/W) Enable control. */
        uint32_t sbz_0                 : 31; /**< [ 31:  1](R/W) Software should write the field as all 0s. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_cst_shrd_ocla_cti_cticontrol_s cn; */
};
typedef union cavm_cst_shrd_ocla_cti_cticontrol cavm_cst_shrd_ocla_cti_cticontrol_t;

#define CAVM_CST_SHRD_OCLA_CTI_CTICONTROL CAVM_CST_SHRD_OCLA_CTI_CTICONTROL_FUNC()
static inline uint64_t CAVM_CST_SHRD_OCLA_CTI_CTICONTROL_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_CST_SHRD_OCLA_CTI_CTICONTROL_FUNC(void)
{
    return 0x87a100010000ll;
}

#define typedef_CAVM_CST_SHRD_OCLA_CTI_CTICONTROL cavm_cst_shrd_ocla_cti_cticontrol_t
#define bustype_CAVM_CST_SHRD_OCLA_CTI_CTICONTROL CSR_TYPE_NCB32b
#define basename_CAVM_CST_SHRD_OCLA_CTI_CTICONTROL "CST_SHRD_OCLA_CTI_CTICONTROL"
#define busnum_CAVM_CST_SHRD_OCLA_CTI_CTICONTROL 0
#define arguments_CAVM_CST_SHRD_OCLA_CTI_CTICONTROL -1,-1,-1,-1

/**
 * Register (NCB32b) cst_shrd_ocla_cti_ctigate
 *
 * CST Shrd Ocla Cti Ctigate Register
 * Channel output gate.
 */
union cavm_cst_shrd_ocla_cti_ctigate
{
    uint32_t u;
    struct cavm_cst_shrd_ocla_cti_ctigate_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t sbz_0                 : 28; /**< [ 31:  4](R/W) Software should write the field as all 0s. */
        uint32_t ctigateen             : 4;  /**< [  3:  0](R/W) Enables the propagation of channel events out of the CTI, one bit per channel. */
#else /* Word 0 - Little Endian */
        uint32_t ctigateen             : 4;  /**< [  3:  0](R/W) Enables the propagation of channel events out of the CTI, one bit per channel. */
        uint32_t sbz_0                 : 28; /**< [ 31:  4](R/W) Software should write the field as all 0s. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_cst_shrd_ocla_cti_ctigate_s cn; */
};
typedef union cavm_cst_shrd_ocla_cti_ctigate cavm_cst_shrd_ocla_cti_ctigate_t;

#define CAVM_CST_SHRD_OCLA_CTI_CTIGATE CAVM_CST_SHRD_OCLA_CTI_CTIGATE_FUNC()
static inline uint64_t CAVM_CST_SHRD_OCLA_CTI_CTIGATE_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_CST_SHRD_OCLA_CTI_CTIGATE_FUNC(void)
{
    return 0x87a100010140ll;
}

#define typedef_CAVM_CST_SHRD_OCLA_CTI_CTIGATE cavm_cst_shrd_ocla_cti_ctigate_t
#define bustype_CAVM_CST_SHRD_OCLA_CTI_CTIGATE CSR_TYPE_NCB32b
#define basename_CAVM_CST_SHRD_OCLA_CTI_CTIGATE "CST_SHRD_OCLA_CTI_CTIGATE"
#define busnum_CAVM_CST_SHRD_OCLA_CTI_CTIGATE 0
#define arguments_CAVM_CST_SHRD_OCLA_CTI_CTIGATE -1,-1,-1,-1

/**
 * Register (NCB32b) cst_shrd_ocla_cti_ctiinen0
 *
 * CST Shrd Ocla Cti Ctiinen0 Register
 * This register maps trigger inputs to channels in the cross trigger system. The
 * CTIINEN registers are bit maps that allow the trigger input to be mapped to any
 * channel output, including none (0x0) and all (0xF). There is one register per
 * trigger input, so it is possible to map any combination of trigger inputs to any
 * channel outputs.
 */
union cavm_cst_shrd_ocla_cti_ctiinen0
{
    uint32_t u;
    struct cavm_cst_shrd_ocla_cti_ctiinen0_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t sbz_0                 : 28; /**< [ 31:  4](R/W) Software should write the field as all 0s. */
        uint32_t triginen              : 4;  /**< [  3:  0](R/W) Trigger input to channel mapping. */
#else /* Word 0 - Little Endian */
        uint32_t triginen              : 4;  /**< [  3:  0](R/W) Trigger input to channel mapping. */
        uint32_t sbz_0                 : 28; /**< [ 31:  4](R/W) Software should write the field as all 0s. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_cst_shrd_ocla_cti_ctiinen0_s cn; */
};
typedef union cavm_cst_shrd_ocla_cti_ctiinen0 cavm_cst_shrd_ocla_cti_ctiinen0_t;

#define CAVM_CST_SHRD_OCLA_CTI_CTIINEN0 CAVM_CST_SHRD_OCLA_CTI_CTIINEN0_FUNC()
static inline uint64_t CAVM_CST_SHRD_OCLA_CTI_CTIINEN0_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_CST_SHRD_OCLA_CTI_CTIINEN0_FUNC(void)
{
    return 0x87a100010020ll;
}

#define typedef_CAVM_CST_SHRD_OCLA_CTI_CTIINEN0 cavm_cst_shrd_ocla_cti_ctiinen0_t
#define bustype_CAVM_CST_SHRD_OCLA_CTI_CTIINEN0 CSR_TYPE_NCB32b
#define basename_CAVM_CST_SHRD_OCLA_CTI_CTIINEN0 "CST_SHRD_OCLA_CTI_CTIINEN0"
#define busnum_CAVM_CST_SHRD_OCLA_CTI_CTIINEN0 0
#define arguments_CAVM_CST_SHRD_OCLA_CTI_CTIINEN0 -1,-1,-1,-1

/**
 * Register (NCB32b) cst_shrd_ocla_cti_ctiinen1
 *
 * CST Shrd Ocla Cti Ctiinen1 Register
 * This register maps trigger inputs to channels in the cross trigger system. The
 * CTIINEN registers are bit maps that allow the trigger input to be mapped to any
 * channel output, including none (0x0) and all (0xF). There is one register per
 * trigger input, so it is possible to map any combination of trigger inputs to any
 * channel outputs.
 */
union cavm_cst_shrd_ocla_cti_ctiinen1
{
    uint32_t u;
    struct cavm_cst_shrd_ocla_cti_ctiinen1_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t sbz_0                 : 28; /**< [ 31:  4](R/W) Software should write the field as all 0s. */
        uint32_t triginen              : 4;  /**< [  3:  0](R/W) Trigger input to channel mapping. */
#else /* Word 0 - Little Endian */
        uint32_t triginen              : 4;  /**< [  3:  0](R/W) Trigger input to channel mapping. */
        uint32_t sbz_0                 : 28; /**< [ 31:  4](R/W) Software should write the field as all 0s. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_cst_shrd_ocla_cti_ctiinen1_s cn; */
};
typedef union cavm_cst_shrd_ocla_cti_ctiinen1 cavm_cst_shrd_ocla_cti_ctiinen1_t;

#define CAVM_CST_SHRD_OCLA_CTI_CTIINEN1 CAVM_CST_SHRD_OCLA_CTI_CTIINEN1_FUNC()
static inline uint64_t CAVM_CST_SHRD_OCLA_CTI_CTIINEN1_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_CST_SHRD_OCLA_CTI_CTIINEN1_FUNC(void)
{
    return 0x87a100010024ll;
}

#define typedef_CAVM_CST_SHRD_OCLA_CTI_CTIINEN1 cavm_cst_shrd_ocla_cti_ctiinen1_t
#define bustype_CAVM_CST_SHRD_OCLA_CTI_CTIINEN1 CSR_TYPE_NCB32b
#define basename_CAVM_CST_SHRD_OCLA_CTI_CTIINEN1 "CST_SHRD_OCLA_CTI_CTIINEN1"
#define busnum_CAVM_CST_SHRD_OCLA_CTI_CTIINEN1 0
#define arguments_CAVM_CST_SHRD_OCLA_CTI_CTIINEN1 -1,-1,-1,-1

/**
 * Register (NCB32b) cst_shrd_ocla_cti_ctiinen10
 *
 * CST Shrd Ocla Cti Ctiinen10 Register
 * This register maps trigger inputs to channels in the cross trigger system. The
 * CTIINEN registers are bit maps that allow the trigger input to be mapped to any
 * channel output, including none (0x0) and all (0xF). There is one register per
 * trigger input, so it is possible to map any combination of trigger inputs to any
 * channel outputs.
 */
union cavm_cst_shrd_ocla_cti_ctiinen10
{
    uint32_t u;
    struct cavm_cst_shrd_ocla_cti_ctiinen10_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t sbz_0                 : 28; /**< [ 31:  4](R/W) Software should write the field as all 0s. */
        uint32_t triginen              : 4;  /**< [  3:  0](R/W) Trigger input to channel mapping. */
#else /* Word 0 - Little Endian */
        uint32_t triginen              : 4;  /**< [  3:  0](R/W) Trigger input to channel mapping. */
        uint32_t sbz_0                 : 28; /**< [ 31:  4](R/W) Software should write the field as all 0s. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_cst_shrd_ocla_cti_ctiinen10_s cn; */
};
typedef union cavm_cst_shrd_ocla_cti_ctiinen10 cavm_cst_shrd_ocla_cti_ctiinen10_t;

#define CAVM_CST_SHRD_OCLA_CTI_CTIINEN10 CAVM_CST_SHRD_OCLA_CTI_CTIINEN10_FUNC()
static inline uint64_t CAVM_CST_SHRD_OCLA_CTI_CTIINEN10_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_CST_SHRD_OCLA_CTI_CTIINEN10_FUNC(void)
{
    return 0x87a100010048ll;
}

#define typedef_CAVM_CST_SHRD_OCLA_CTI_CTIINEN10 cavm_cst_shrd_ocla_cti_ctiinen10_t
#define bustype_CAVM_CST_SHRD_OCLA_CTI_CTIINEN10 CSR_TYPE_NCB32b
#define basename_CAVM_CST_SHRD_OCLA_CTI_CTIINEN10 "CST_SHRD_OCLA_CTI_CTIINEN10"
#define busnum_CAVM_CST_SHRD_OCLA_CTI_CTIINEN10 0
#define arguments_CAVM_CST_SHRD_OCLA_CTI_CTIINEN10 -1,-1,-1,-1

/**
 * Register (NCB32b) cst_shrd_ocla_cti_ctiinen11
 *
 * CST Shrd Ocla Cti Ctiinen11 Register
 * This register maps trigger inputs to channels in the cross trigger system. The
 * CTIINEN registers are bit maps that allow the trigger input to be mapped to any
 * channel output, including none (0x0) and all (0xF). There is one register per
 * trigger input, so it is possible to map any combination of trigger inputs to any
 * channel outputs.
 */
union cavm_cst_shrd_ocla_cti_ctiinen11
{
    uint32_t u;
    struct cavm_cst_shrd_ocla_cti_ctiinen11_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t sbz_0                 : 28; /**< [ 31:  4](R/W) Software should write the field as all 0s. */
        uint32_t triginen              : 4;  /**< [  3:  0](R/W) Trigger input to channel mapping. */
#else /* Word 0 - Little Endian */
        uint32_t triginen              : 4;  /**< [  3:  0](R/W) Trigger input to channel mapping. */
        uint32_t sbz_0                 : 28; /**< [ 31:  4](R/W) Software should write the field as all 0s. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_cst_shrd_ocla_cti_ctiinen11_s cn; */
};
typedef union cavm_cst_shrd_ocla_cti_ctiinen11 cavm_cst_shrd_ocla_cti_ctiinen11_t;

#define CAVM_CST_SHRD_OCLA_CTI_CTIINEN11 CAVM_CST_SHRD_OCLA_CTI_CTIINEN11_FUNC()
static inline uint64_t CAVM_CST_SHRD_OCLA_CTI_CTIINEN11_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_CST_SHRD_OCLA_CTI_CTIINEN11_FUNC(void)
{
    return 0x87a10001004cll;
}

#define typedef_CAVM_CST_SHRD_OCLA_CTI_CTIINEN11 cavm_cst_shrd_ocla_cti_ctiinen11_t
#define bustype_CAVM_CST_SHRD_OCLA_CTI_CTIINEN11 CSR_TYPE_NCB32b
#define basename_CAVM_CST_SHRD_OCLA_CTI_CTIINEN11 "CST_SHRD_OCLA_CTI_CTIINEN11"
#define busnum_CAVM_CST_SHRD_OCLA_CTI_CTIINEN11 0
#define arguments_CAVM_CST_SHRD_OCLA_CTI_CTIINEN11 -1,-1,-1,-1

/**
 * Register (NCB32b) cst_shrd_ocla_cti_ctiinen12
 *
 * CST Shrd Ocla Cti Ctiinen12 Register
 * This register maps trigger inputs to channels in the cross trigger system. The
 * CTIINEN registers are bit maps that allow the trigger input to be mapped to any
 * channel output, including none (0x0) and all (0xF). There is one register per
 * trigger input, so it is possible to map any combination of trigger inputs to any
 * channel outputs.
 */
union cavm_cst_shrd_ocla_cti_ctiinen12
{
    uint32_t u;
    struct cavm_cst_shrd_ocla_cti_ctiinen12_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t sbz_0                 : 28; /**< [ 31:  4](R/W) Software should write the field as all 0s. */
        uint32_t triginen              : 4;  /**< [  3:  0](R/W) Trigger input to channel mapping. */
#else /* Word 0 - Little Endian */
        uint32_t triginen              : 4;  /**< [  3:  0](R/W) Trigger input to channel mapping. */
        uint32_t sbz_0                 : 28; /**< [ 31:  4](R/W) Software should write the field as all 0s. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_cst_shrd_ocla_cti_ctiinen12_s cn; */
};
typedef union cavm_cst_shrd_ocla_cti_ctiinen12 cavm_cst_shrd_ocla_cti_ctiinen12_t;

#define CAVM_CST_SHRD_OCLA_CTI_CTIINEN12 CAVM_CST_SHRD_OCLA_CTI_CTIINEN12_FUNC()
static inline uint64_t CAVM_CST_SHRD_OCLA_CTI_CTIINEN12_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_CST_SHRD_OCLA_CTI_CTIINEN12_FUNC(void)
{
    return 0x87a100010050ll;
}

#define typedef_CAVM_CST_SHRD_OCLA_CTI_CTIINEN12 cavm_cst_shrd_ocla_cti_ctiinen12_t
#define bustype_CAVM_CST_SHRD_OCLA_CTI_CTIINEN12 CSR_TYPE_NCB32b
#define basename_CAVM_CST_SHRD_OCLA_CTI_CTIINEN12 "CST_SHRD_OCLA_CTI_CTIINEN12"
#define busnum_CAVM_CST_SHRD_OCLA_CTI_CTIINEN12 0
#define arguments_CAVM_CST_SHRD_OCLA_CTI_CTIINEN12 -1,-1,-1,-1

/**
 * Register (NCB32b) cst_shrd_ocla_cti_ctiinen13
 *
 * CST Shrd Ocla Cti Ctiinen13 Register
 * This register maps trigger inputs to channels in the cross trigger system. The
 * CTIINEN registers are bit maps that allow the trigger input to be mapped to any
 * channel output, including none (0x0) and all (0xF). There is one register per
 * trigger input, so it is possible to map any combination of trigger inputs to any
 * channel outputs.
 */
union cavm_cst_shrd_ocla_cti_ctiinen13
{
    uint32_t u;
    struct cavm_cst_shrd_ocla_cti_ctiinen13_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t sbz_0                 : 28; /**< [ 31:  4](R/W) Software should write the field as all 0s. */
        uint32_t triginen              : 4;  /**< [  3:  0](R/W) Trigger input to channel mapping. */
#else /* Word 0 - Little Endian */
        uint32_t triginen              : 4;  /**< [  3:  0](R/W) Trigger input to channel mapping. */
        uint32_t sbz_0                 : 28; /**< [ 31:  4](R/W) Software should write the field as all 0s. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_cst_shrd_ocla_cti_ctiinen13_s cn; */
};
typedef union cavm_cst_shrd_ocla_cti_ctiinen13 cavm_cst_shrd_ocla_cti_ctiinen13_t;

#define CAVM_CST_SHRD_OCLA_CTI_CTIINEN13 CAVM_CST_SHRD_OCLA_CTI_CTIINEN13_FUNC()
static inline uint64_t CAVM_CST_SHRD_OCLA_CTI_CTIINEN13_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_CST_SHRD_OCLA_CTI_CTIINEN13_FUNC(void)
{
    return 0x87a100010054ll;
}

#define typedef_CAVM_CST_SHRD_OCLA_CTI_CTIINEN13 cavm_cst_shrd_ocla_cti_ctiinen13_t
#define bustype_CAVM_CST_SHRD_OCLA_CTI_CTIINEN13 CSR_TYPE_NCB32b
#define basename_CAVM_CST_SHRD_OCLA_CTI_CTIINEN13 "CST_SHRD_OCLA_CTI_CTIINEN13"
#define busnum_CAVM_CST_SHRD_OCLA_CTI_CTIINEN13 0
#define arguments_CAVM_CST_SHRD_OCLA_CTI_CTIINEN13 -1,-1,-1,-1

/**
 * Register (NCB32b) cst_shrd_ocla_cti_ctiinen14
 *
 * CST Shrd Ocla Cti Ctiinen14 Register
 * This register maps trigger inputs to channels in the cross trigger system. The
 * CTIINEN registers are bit maps that allow the trigger input to be mapped to any
 * channel output, including none (0x0) and all (0xF). There is one register per
 * trigger input, so it is possible to map any combination of trigger inputs to any
 * channel outputs.
 */
union cavm_cst_shrd_ocla_cti_ctiinen14
{
    uint32_t u;
    struct cavm_cst_shrd_ocla_cti_ctiinen14_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t sbz_0                 : 28; /**< [ 31:  4](R/W) Software should write the field as all 0s. */
        uint32_t triginen              : 4;  /**< [  3:  0](R/W) Trigger input to channel mapping. */
#else /* Word 0 - Little Endian */
        uint32_t triginen              : 4;  /**< [  3:  0](R/W) Trigger input to channel mapping. */
        uint32_t sbz_0                 : 28; /**< [ 31:  4](R/W) Software should write the field as all 0s. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_cst_shrd_ocla_cti_ctiinen14_s cn; */
};
typedef union cavm_cst_shrd_ocla_cti_ctiinen14 cavm_cst_shrd_ocla_cti_ctiinen14_t;

#define CAVM_CST_SHRD_OCLA_CTI_CTIINEN14 CAVM_CST_SHRD_OCLA_CTI_CTIINEN14_FUNC()
static inline uint64_t CAVM_CST_SHRD_OCLA_CTI_CTIINEN14_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_CST_SHRD_OCLA_CTI_CTIINEN14_FUNC(void)
{
    return 0x87a100010058ll;
}

#define typedef_CAVM_CST_SHRD_OCLA_CTI_CTIINEN14 cavm_cst_shrd_ocla_cti_ctiinen14_t
#define bustype_CAVM_CST_SHRD_OCLA_CTI_CTIINEN14 CSR_TYPE_NCB32b
#define basename_CAVM_CST_SHRD_OCLA_CTI_CTIINEN14 "CST_SHRD_OCLA_CTI_CTIINEN14"
#define busnum_CAVM_CST_SHRD_OCLA_CTI_CTIINEN14 0
#define arguments_CAVM_CST_SHRD_OCLA_CTI_CTIINEN14 -1,-1,-1,-1

/**
 * Register (NCB32b) cst_shrd_ocla_cti_ctiinen15
 *
 * CST Shrd Ocla Cti Ctiinen15 Register
 * This register maps trigger inputs to channels in the cross trigger system. The
 * CTIINEN registers are bit maps that allow the trigger input to be mapped to any
 * channel output, including none (0x0) and all (0xF). There is one register per
 * trigger input, so it is possible to map any combination of trigger inputs to any
 * channel outputs.
 */
union cavm_cst_shrd_ocla_cti_ctiinen15
{
    uint32_t u;
    struct cavm_cst_shrd_ocla_cti_ctiinen15_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t sbz_0                 : 28; /**< [ 31:  4](R/W) Software should write the field as all 0s. */
        uint32_t triginen              : 4;  /**< [  3:  0](R/W) Trigger input to channel mapping. */
#else /* Word 0 - Little Endian */
        uint32_t triginen              : 4;  /**< [  3:  0](R/W) Trigger input to channel mapping. */
        uint32_t sbz_0                 : 28; /**< [ 31:  4](R/W) Software should write the field as all 0s. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_cst_shrd_ocla_cti_ctiinen15_s cn; */
};
typedef union cavm_cst_shrd_ocla_cti_ctiinen15 cavm_cst_shrd_ocla_cti_ctiinen15_t;

#define CAVM_CST_SHRD_OCLA_CTI_CTIINEN15 CAVM_CST_SHRD_OCLA_CTI_CTIINEN15_FUNC()
static inline uint64_t CAVM_CST_SHRD_OCLA_CTI_CTIINEN15_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_CST_SHRD_OCLA_CTI_CTIINEN15_FUNC(void)
{
    return 0x87a10001005cll;
}

#define typedef_CAVM_CST_SHRD_OCLA_CTI_CTIINEN15 cavm_cst_shrd_ocla_cti_ctiinen15_t
#define bustype_CAVM_CST_SHRD_OCLA_CTI_CTIINEN15 CSR_TYPE_NCB32b
#define basename_CAVM_CST_SHRD_OCLA_CTI_CTIINEN15 "CST_SHRD_OCLA_CTI_CTIINEN15"
#define busnum_CAVM_CST_SHRD_OCLA_CTI_CTIINEN15 0
#define arguments_CAVM_CST_SHRD_OCLA_CTI_CTIINEN15 -1,-1,-1,-1

/**
 * Register (NCB32b) cst_shrd_ocla_cti_ctiinen16
 *
 * CST Shrd Ocla Cti Ctiinen16 Register
 * This register maps trigger inputs to channels in the cross trigger system. The
 * CTIINEN registers are bit maps that allow the trigger input to be mapped to any
 * channel output, including none (0x0) and all (0xF). There is one register per
 * trigger input, so it is possible to map any combination of trigger inputs to any
 * channel outputs.
 */
union cavm_cst_shrd_ocla_cti_ctiinen16
{
    uint32_t u;
    struct cavm_cst_shrd_ocla_cti_ctiinen16_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t sbz_0                 : 28; /**< [ 31:  4](R/W) Software should write the field as all 0s. */
        uint32_t triginen              : 4;  /**< [  3:  0](R/W) Trigger input to channel mapping. */
#else /* Word 0 - Little Endian */
        uint32_t triginen              : 4;  /**< [  3:  0](R/W) Trigger input to channel mapping. */
        uint32_t sbz_0                 : 28; /**< [ 31:  4](R/W) Software should write the field as all 0s. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_cst_shrd_ocla_cti_ctiinen16_s cn; */
};
typedef union cavm_cst_shrd_ocla_cti_ctiinen16 cavm_cst_shrd_ocla_cti_ctiinen16_t;

#define CAVM_CST_SHRD_OCLA_CTI_CTIINEN16 CAVM_CST_SHRD_OCLA_CTI_CTIINEN16_FUNC()
static inline uint64_t CAVM_CST_SHRD_OCLA_CTI_CTIINEN16_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_CST_SHRD_OCLA_CTI_CTIINEN16_FUNC(void)
{
    return 0x87a100010060ll;
}

#define typedef_CAVM_CST_SHRD_OCLA_CTI_CTIINEN16 cavm_cst_shrd_ocla_cti_ctiinen16_t
#define bustype_CAVM_CST_SHRD_OCLA_CTI_CTIINEN16 CSR_TYPE_NCB32b
#define basename_CAVM_CST_SHRD_OCLA_CTI_CTIINEN16 "CST_SHRD_OCLA_CTI_CTIINEN16"
#define busnum_CAVM_CST_SHRD_OCLA_CTI_CTIINEN16 0
#define arguments_CAVM_CST_SHRD_OCLA_CTI_CTIINEN16 -1,-1,-1,-1

/**
 * Register (NCB32b) cst_shrd_ocla_cti_ctiinen17
 *
 * CST Shrd Ocla Cti Ctiinen17 Register
 * This register maps trigger inputs to channels in the cross trigger system. The
 * CTIINEN registers are bit maps that allow the trigger input to be mapped to any
 * channel output, including none (0x0) and all (0xF). There is one register per
 * trigger input, so it is possible to map any combination of trigger inputs to any
 * channel outputs.
 */
union cavm_cst_shrd_ocla_cti_ctiinen17
{
    uint32_t u;
    struct cavm_cst_shrd_ocla_cti_ctiinen17_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t sbz_0                 : 28; /**< [ 31:  4](R/W) Software should write the field as all 0s. */
        uint32_t triginen              : 4;  /**< [  3:  0](R/W) Trigger input to channel mapping. */
#else /* Word 0 - Little Endian */
        uint32_t triginen              : 4;  /**< [  3:  0](R/W) Trigger input to channel mapping. */
        uint32_t sbz_0                 : 28; /**< [ 31:  4](R/W) Software should write the field as all 0s. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_cst_shrd_ocla_cti_ctiinen17_s cn; */
};
typedef union cavm_cst_shrd_ocla_cti_ctiinen17 cavm_cst_shrd_ocla_cti_ctiinen17_t;

#define CAVM_CST_SHRD_OCLA_CTI_CTIINEN17 CAVM_CST_SHRD_OCLA_CTI_CTIINEN17_FUNC()
static inline uint64_t CAVM_CST_SHRD_OCLA_CTI_CTIINEN17_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_CST_SHRD_OCLA_CTI_CTIINEN17_FUNC(void)
{
    return 0x87a100010064ll;
}

#define typedef_CAVM_CST_SHRD_OCLA_CTI_CTIINEN17 cavm_cst_shrd_ocla_cti_ctiinen17_t
#define bustype_CAVM_CST_SHRD_OCLA_CTI_CTIINEN17 CSR_TYPE_NCB32b
#define basename_CAVM_CST_SHRD_OCLA_CTI_CTIINEN17 "CST_SHRD_OCLA_CTI_CTIINEN17"
#define busnum_CAVM_CST_SHRD_OCLA_CTI_CTIINEN17 0
#define arguments_CAVM_CST_SHRD_OCLA_CTI_CTIINEN17 -1,-1,-1,-1

/**
 * Register (NCB32b) cst_shrd_ocla_cti_ctiinen18
 *
 * CST Shrd Ocla Cti Ctiinen18 Register
 * This register maps trigger inputs to channels in the cross trigger system. The
 * CTIINEN registers are bit maps that allow the trigger input to be mapped to any
 * channel output, including none (0x0) and all (0xF). There is one register per
 * trigger input, so it is possible to map any combination of trigger inputs to any
 * channel outputs.
 */
union cavm_cst_shrd_ocla_cti_ctiinen18
{
    uint32_t u;
    struct cavm_cst_shrd_ocla_cti_ctiinen18_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t sbz_0                 : 28; /**< [ 31:  4](R/W) Software should write the field as all 0s. */
        uint32_t triginen              : 4;  /**< [  3:  0](R/W) Trigger input to channel mapping. */
#else /* Word 0 - Little Endian */
        uint32_t triginen              : 4;  /**< [  3:  0](R/W) Trigger input to channel mapping. */
        uint32_t sbz_0                 : 28; /**< [ 31:  4](R/W) Software should write the field as all 0s. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_cst_shrd_ocla_cti_ctiinen18_s cn; */
};
typedef union cavm_cst_shrd_ocla_cti_ctiinen18 cavm_cst_shrd_ocla_cti_ctiinen18_t;

#define CAVM_CST_SHRD_OCLA_CTI_CTIINEN18 CAVM_CST_SHRD_OCLA_CTI_CTIINEN18_FUNC()
static inline uint64_t CAVM_CST_SHRD_OCLA_CTI_CTIINEN18_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_CST_SHRD_OCLA_CTI_CTIINEN18_FUNC(void)
{
    return 0x87a100010068ll;
}

#define typedef_CAVM_CST_SHRD_OCLA_CTI_CTIINEN18 cavm_cst_shrd_ocla_cti_ctiinen18_t
#define bustype_CAVM_CST_SHRD_OCLA_CTI_CTIINEN18 CSR_TYPE_NCB32b
#define basename_CAVM_CST_SHRD_OCLA_CTI_CTIINEN18 "CST_SHRD_OCLA_CTI_CTIINEN18"
#define busnum_CAVM_CST_SHRD_OCLA_CTI_CTIINEN18 0
#define arguments_CAVM_CST_SHRD_OCLA_CTI_CTIINEN18 -1,-1,-1,-1

/**
 * Register (NCB32b) cst_shrd_ocla_cti_ctiinen19
 *
 * CST Shrd Ocla Cti Ctiinen19 Register
 * This register maps trigger inputs to channels in the cross trigger system. The
 * CTIINEN registers are bit maps that allow the trigger input to be mapped to any
 * channel output, including none (0x0) and all (0xF). There is one register per
 * trigger input, so it is possible to map any combination of trigger inputs to any
 * channel outputs.
 */
union cavm_cst_shrd_ocla_cti_ctiinen19
{
    uint32_t u;
    struct cavm_cst_shrd_ocla_cti_ctiinen19_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t sbz_0                 : 28; /**< [ 31:  4](R/W) Software should write the field as all 0s. */
        uint32_t triginen              : 4;  /**< [  3:  0](R/W) Trigger input to channel mapping. */
#else /* Word 0 - Little Endian */
        uint32_t triginen              : 4;  /**< [  3:  0](R/W) Trigger input to channel mapping. */
        uint32_t sbz_0                 : 28; /**< [ 31:  4](R/W) Software should write the field as all 0s. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_cst_shrd_ocla_cti_ctiinen19_s cn; */
};
typedef union cavm_cst_shrd_ocla_cti_ctiinen19 cavm_cst_shrd_ocla_cti_ctiinen19_t;

#define CAVM_CST_SHRD_OCLA_CTI_CTIINEN19 CAVM_CST_SHRD_OCLA_CTI_CTIINEN19_FUNC()
static inline uint64_t CAVM_CST_SHRD_OCLA_CTI_CTIINEN19_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_CST_SHRD_OCLA_CTI_CTIINEN19_FUNC(void)
{
    return 0x87a10001006cll;
}

#define typedef_CAVM_CST_SHRD_OCLA_CTI_CTIINEN19 cavm_cst_shrd_ocla_cti_ctiinen19_t
#define bustype_CAVM_CST_SHRD_OCLA_CTI_CTIINEN19 CSR_TYPE_NCB32b
#define basename_CAVM_CST_SHRD_OCLA_CTI_CTIINEN19 "CST_SHRD_OCLA_CTI_CTIINEN19"
#define busnum_CAVM_CST_SHRD_OCLA_CTI_CTIINEN19 0
#define arguments_CAVM_CST_SHRD_OCLA_CTI_CTIINEN19 -1,-1,-1,-1

/**
 * Register (NCB32b) cst_shrd_ocla_cti_ctiinen2
 *
 * CST Shrd Ocla Cti Ctiinen2 Register
 * This register maps trigger inputs to channels in the cross trigger system. The
 * CTIINEN registers are bit maps that allow the trigger input to be mapped to any
 * channel output, including none (0x0) and all (0xF). There is one register per
 * trigger input, so it is possible to map any combination of trigger inputs to any
 * channel outputs.
 */
union cavm_cst_shrd_ocla_cti_ctiinen2
{
    uint32_t u;
    struct cavm_cst_shrd_ocla_cti_ctiinen2_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t sbz_0                 : 28; /**< [ 31:  4](R/W) Software should write the field as all 0s. */
        uint32_t triginen              : 4;  /**< [  3:  0](R/W) Trigger input to channel mapping. */
#else /* Word 0 - Little Endian */
        uint32_t triginen              : 4;  /**< [  3:  0](R/W) Trigger input to channel mapping. */
        uint32_t sbz_0                 : 28; /**< [ 31:  4](R/W) Software should write the field as all 0s. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_cst_shrd_ocla_cti_ctiinen2_s cn; */
};
typedef union cavm_cst_shrd_ocla_cti_ctiinen2 cavm_cst_shrd_ocla_cti_ctiinen2_t;

#define CAVM_CST_SHRD_OCLA_CTI_CTIINEN2 CAVM_CST_SHRD_OCLA_CTI_CTIINEN2_FUNC()
static inline uint64_t CAVM_CST_SHRD_OCLA_CTI_CTIINEN2_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_CST_SHRD_OCLA_CTI_CTIINEN2_FUNC(void)
{
    return 0x87a100010028ll;
}

#define typedef_CAVM_CST_SHRD_OCLA_CTI_CTIINEN2 cavm_cst_shrd_ocla_cti_ctiinen2_t
#define bustype_CAVM_CST_SHRD_OCLA_CTI_CTIINEN2 CSR_TYPE_NCB32b
#define basename_CAVM_CST_SHRD_OCLA_CTI_CTIINEN2 "CST_SHRD_OCLA_CTI_CTIINEN2"
#define busnum_CAVM_CST_SHRD_OCLA_CTI_CTIINEN2 0
#define arguments_CAVM_CST_SHRD_OCLA_CTI_CTIINEN2 -1,-1,-1,-1

/**
 * Register (NCB32b) cst_shrd_ocla_cti_ctiinen20
 *
 * CST Shrd Ocla Cti Ctiinen20 Register
 * This register maps trigger inputs to channels in the cross trigger system. The
 * CTIINEN registers are bit maps that allow the trigger input to be mapped to any
 * channel output, including none (0x0) and all (0xF). There is one register per
 * trigger input, so it is possible to map any combination of trigger inputs to any
 * channel outputs.
 */
union cavm_cst_shrd_ocla_cti_ctiinen20
{
    uint32_t u;
    struct cavm_cst_shrd_ocla_cti_ctiinen20_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t sbz_0                 : 28; /**< [ 31:  4](R/W) Software should write the field as all 0s. */
        uint32_t triginen              : 4;  /**< [  3:  0](R/W) Trigger input to channel mapping. */
#else /* Word 0 - Little Endian */
        uint32_t triginen              : 4;  /**< [  3:  0](R/W) Trigger input to channel mapping. */
        uint32_t sbz_0                 : 28; /**< [ 31:  4](R/W) Software should write the field as all 0s. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_cst_shrd_ocla_cti_ctiinen20_s cn; */
};
typedef union cavm_cst_shrd_ocla_cti_ctiinen20 cavm_cst_shrd_ocla_cti_ctiinen20_t;

#define CAVM_CST_SHRD_OCLA_CTI_CTIINEN20 CAVM_CST_SHRD_OCLA_CTI_CTIINEN20_FUNC()
static inline uint64_t CAVM_CST_SHRD_OCLA_CTI_CTIINEN20_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_CST_SHRD_OCLA_CTI_CTIINEN20_FUNC(void)
{
    return 0x87a100010070ll;
}

#define typedef_CAVM_CST_SHRD_OCLA_CTI_CTIINEN20 cavm_cst_shrd_ocla_cti_ctiinen20_t
#define bustype_CAVM_CST_SHRD_OCLA_CTI_CTIINEN20 CSR_TYPE_NCB32b
#define basename_CAVM_CST_SHRD_OCLA_CTI_CTIINEN20 "CST_SHRD_OCLA_CTI_CTIINEN20"
#define busnum_CAVM_CST_SHRD_OCLA_CTI_CTIINEN20 0
#define arguments_CAVM_CST_SHRD_OCLA_CTI_CTIINEN20 -1,-1,-1,-1

/**
 * Register (NCB32b) cst_shrd_ocla_cti_ctiinen21
 *
 * CST Shrd Ocla Cti Ctiinen21 Register
 * This register maps trigger inputs to channels in the cross trigger system. The
 * CTIINEN registers are bit maps that allow the trigger input to be mapped to any
 * channel output, including none (0x0) and all (0xF). There is one register per
 * trigger input, so it is possible to map any combination of trigger inputs to any
 * channel outputs.
 */
union cavm_cst_shrd_ocla_cti_ctiinen21
{
    uint32_t u;
    struct cavm_cst_shrd_ocla_cti_ctiinen21_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t sbz_0                 : 28; /**< [ 31:  4](R/W) Software should write the field as all 0s. */
        uint32_t triginen              : 4;  /**< [  3:  0](R/W) Trigger input to channel mapping. */
#else /* Word 0 - Little Endian */
        uint32_t triginen              : 4;  /**< [  3:  0](R/W) Trigger input to channel mapping. */
        uint32_t sbz_0                 : 28; /**< [ 31:  4](R/W) Software should write the field as all 0s. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_cst_shrd_ocla_cti_ctiinen21_s cn; */
};
typedef union cavm_cst_shrd_ocla_cti_ctiinen21 cavm_cst_shrd_ocla_cti_ctiinen21_t;

#define CAVM_CST_SHRD_OCLA_CTI_CTIINEN21 CAVM_CST_SHRD_OCLA_CTI_CTIINEN21_FUNC()
static inline uint64_t CAVM_CST_SHRD_OCLA_CTI_CTIINEN21_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_CST_SHRD_OCLA_CTI_CTIINEN21_FUNC(void)
{
    return 0x87a100010074ll;
}

#define typedef_CAVM_CST_SHRD_OCLA_CTI_CTIINEN21 cavm_cst_shrd_ocla_cti_ctiinen21_t
#define bustype_CAVM_CST_SHRD_OCLA_CTI_CTIINEN21 CSR_TYPE_NCB32b
#define basename_CAVM_CST_SHRD_OCLA_CTI_CTIINEN21 "CST_SHRD_OCLA_CTI_CTIINEN21"
#define busnum_CAVM_CST_SHRD_OCLA_CTI_CTIINEN21 0
#define arguments_CAVM_CST_SHRD_OCLA_CTI_CTIINEN21 -1,-1,-1,-1

/**
 * Register (NCB32b) cst_shrd_ocla_cti_ctiinen22
 *
 * CST Shrd Ocla Cti Ctiinen22 Register
 * This register maps trigger inputs to channels in the cross trigger system. The
 * CTIINEN registers are bit maps that allow the trigger input to be mapped to any
 * channel output, including none (0x0) and all (0xF). There is one register per
 * trigger input, so it is possible to map any combination of trigger inputs to any
 * channel outputs.
 */
union cavm_cst_shrd_ocla_cti_ctiinen22
{
    uint32_t u;
    struct cavm_cst_shrd_ocla_cti_ctiinen22_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t sbz_0                 : 28; /**< [ 31:  4](R/W) Software should write the field as all 0s. */
        uint32_t triginen              : 4;  /**< [  3:  0](R/W) Trigger input to channel mapping. */
#else /* Word 0 - Little Endian */
        uint32_t triginen              : 4;  /**< [  3:  0](R/W) Trigger input to channel mapping. */
        uint32_t sbz_0                 : 28; /**< [ 31:  4](R/W) Software should write the field as all 0s. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_cst_shrd_ocla_cti_ctiinen22_s cn; */
};
typedef union cavm_cst_shrd_ocla_cti_ctiinen22 cavm_cst_shrd_ocla_cti_ctiinen22_t;

#define CAVM_CST_SHRD_OCLA_CTI_CTIINEN22 CAVM_CST_SHRD_OCLA_CTI_CTIINEN22_FUNC()
static inline uint64_t CAVM_CST_SHRD_OCLA_CTI_CTIINEN22_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_CST_SHRD_OCLA_CTI_CTIINEN22_FUNC(void)
{
    return 0x87a100010078ll;
}

#define typedef_CAVM_CST_SHRD_OCLA_CTI_CTIINEN22 cavm_cst_shrd_ocla_cti_ctiinen22_t
#define bustype_CAVM_CST_SHRD_OCLA_CTI_CTIINEN22 CSR_TYPE_NCB32b
#define basename_CAVM_CST_SHRD_OCLA_CTI_CTIINEN22 "CST_SHRD_OCLA_CTI_CTIINEN22"
#define busnum_CAVM_CST_SHRD_OCLA_CTI_CTIINEN22 0
#define arguments_CAVM_CST_SHRD_OCLA_CTI_CTIINEN22 -1,-1,-1,-1

/**
 * Register (NCB32b) cst_shrd_ocla_cti_ctiinen23
 *
 * CST Shrd Ocla Cti Ctiinen23 Register
 * This register maps trigger inputs to channels in the cross trigger system. The
 * CTIINEN registers are bit maps that allow the trigger input to be mapped to any
 * channel output, including none (0x0) and all (0xF). There is one register per
 * trigger input, so it is possible to map any combination of trigger inputs to any
 * channel outputs.
 */
union cavm_cst_shrd_ocla_cti_ctiinen23
{
    uint32_t u;
    struct cavm_cst_shrd_ocla_cti_ctiinen23_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t sbz_0                 : 28; /**< [ 31:  4](R/W) Software should write the field as all 0s. */
        uint32_t triginen              : 4;  /**< [  3:  0](R/W) Trigger input to channel mapping. */
#else /* Word 0 - Little Endian */
        uint32_t triginen              : 4;  /**< [  3:  0](R/W) Trigger input to channel mapping. */
        uint32_t sbz_0                 : 28; /**< [ 31:  4](R/W) Software should write the field as all 0s. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_cst_shrd_ocla_cti_ctiinen23_s cn; */
};
typedef union cavm_cst_shrd_ocla_cti_ctiinen23 cavm_cst_shrd_ocla_cti_ctiinen23_t;

#define CAVM_CST_SHRD_OCLA_CTI_CTIINEN23 CAVM_CST_SHRD_OCLA_CTI_CTIINEN23_FUNC()
static inline uint64_t CAVM_CST_SHRD_OCLA_CTI_CTIINEN23_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_CST_SHRD_OCLA_CTI_CTIINEN23_FUNC(void)
{
    return 0x87a10001007cll;
}

#define typedef_CAVM_CST_SHRD_OCLA_CTI_CTIINEN23 cavm_cst_shrd_ocla_cti_ctiinen23_t
#define bustype_CAVM_CST_SHRD_OCLA_CTI_CTIINEN23 CSR_TYPE_NCB32b
#define basename_CAVM_CST_SHRD_OCLA_CTI_CTIINEN23 "CST_SHRD_OCLA_CTI_CTIINEN23"
#define busnum_CAVM_CST_SHRD_OCLA_CTI_CTIINEN23 0
#define arguments_CAVM_CST_SHRD_OCLA_CTI_CTIINEN23 -1,-1,-1,-1

/**
 * Register (NCB32b) cst_shrd_ocla_cti_ctiinen24
 *
 * CST Shrd Ocla Cti Ctiinen24 Register
 * This register maps trigger inputs to channels in the cross trigger system. The
 * CTIINEN registers are bit maps that allow the trigger input to be mapped to any
 * channel output, including none (0x0) and all (0xF). There is one register per
 * trigger input, so it is possible to map any combination of trigger inputs to any
 * channel outputs.
 */
union cavm_cst_shrd_ocla_cti_ctiinen24
{
    uint32_t u;
    struct cavm_cst_shrd_ocla_cti_ctiinen24_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t sbz_0                 : 28; /**< [ 31:  4](R/W) Software should write the field as all 0s. */
        uint32_t triginen              : 4;  /**< [  3:  0](R/W) Trigger input to channel mapping. */
#else /* Word 0 - Little Endian */
        uint32_t triginen              : 4;  /**< [  3:  0](R/W) Trigger input to channel mapping. */
        uint32_t sbz_0                 : 28; /**< [ 31:  4](R/W) Software should write the field as all 0s. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_cst_shrd_ocla_cti_ctiinen24_s cn; */
};
typedef union cavm_cst_shrd_ocla_cti_ctiinen24 cavm_cst_shrd_ocla_cti_ctiinen24_t;

#define CAVM_CST_SHRD_OCLA_CTI_CTIINEN24 CAVM_CST_SHRD_OCLA_CTI_CTIINEN24_FUNC()
static inline uint64_t CAVM_CST_SHRD_OCLA_CTI_CTIINEN24_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_CST_SHRD_OCLA_CTI_CTIINEN24_FUNC(void)
{
    return 0x87a100010080ll;
}

#define typedef_CAVM_CST_SHRD_OCLA_CTI_CTIINEN24 cavm_cst_shrd_ocla_cti_ctiinen24_t
#define bustype_CAVM_CST_SHRD_OCLA_CTI_CTIINEN24 CSR_TYPE_NCB32b
#define basename_CAVM_CST_SHRD_OCLA_CTI_CTIINEN24 "CST_SHRD_OCLA_CTI_CTIINEN24"
#define busnum_CAVM_CST_SHRD_OCLA_CTI_CTIINEN24 0
#define arguments_CAVM_CST_SHRD_OCLA_CTI_CTIINEN24 -1,-1,-1,-1

/**
 * Register (NCB32b) cst_shrd_ocla_cti_ctiinen25
 *
 * CST Shrd Ocla Cti Ctiinen25 Register
 * This register maps trigger inputs to channels in the cross trigger system. The
 * CTIINEN registers are bit maps that allow the trigger input to be mapped to any
 * channel output, including none (0x0) and all (0xF). There is one register per
 * trigger input, so it is possible to map any combination of trigger inputs to any
 * channel outputs.
 */
union cavm_cst_shrd_ocla_cti_ctiinen25
{
    uint32_t u;
    struct cavm_cst_shrd_ocla_cti_ctiinen25_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t sbz_0                 : 28; /**< [ 31:  4](R/W) Software should write the field as all 0s. */
        uint32_t triginen              : 4;  /**< [  3:  0](R/W) Trigger input to channel mapping. */
#else /* Word 0 - Little Endian */
        uint32_t triginen              : 4;  /**< [  3:  0](R/W) Trigger input to channel mapping. */
        uint32_t sbz_0                 : 28; /**< [ 31:  4](R/W) Software should write the field as all 0s. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_cst_shrd_ocla_cti_ctiinen25_s cn; */
};
typedef union cavm_cst_shrd_ocla_cti_ctiinen25 cavm_cst_shrd_ocla_cti_ctiinen25_t;

#define CAVM_CST_SHRD_OCLA_CTI_CTIINEN25 CAVM_CST_SHRD_OCLA_CTI_CTIINEN25_FUNC()
static inline uint64_t CAVM_CST_SHRD_OCLA_CTI_CTIINEN25_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_CST_SHRD_OCLA_CTI_CTIINEN25_FUNC(void)
{
    return 0x87a100010084ll;
}

#define typedef_CAVM_CST_SHRD_OCLA_CTI_CTIINEN25 cavm_cst_shrd_ocla_cti_ctiinen25_t
#define bustype_CAVM_CST_SHRD_OCLA_CTI_CTIINEN25 CSR_TYPE_NCB32b
#define basename_CAVM_CST_SHRD_OCLA_CTI_CTIINEN25 "CST_SHRD_OCLA_CTI_CTIINEN25"
#define busnum_CAVM_CST_SHRD_OCLA_CTI_CTIINEN25 0
#define arguments_CAVM_CST_SHRD_OCLA_CTI_CTIINEN25 -1,-1,-1,-1

/**
 * Register (NCB32b) cst_shrd_ocla_cti_ctiinen26
 *
 * CST Shrd Ocla Cti Ctiinen26 Register
 * This register maps trigger inputs to channels in the cross trigger system. The
 * CTIINEN registers are bit maps that allow the trigger input to be mapped to any
 * channel output, including none (0x0) and all (0xF). There is one register per
 * trigger input, so it is possible to map any combination of trigger inputs to any
 * channel outputs.
 */
union cavm_cst_shrd_ocla_cti_ctiinen26
{
    uint32_t u;
    struct cavm_cst_shrd_ocla_cti_ctiinen26_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t sbz_0                 : 28; /**< [ 31:  4](R/W) Software should write the field as all 0s. */
        uint32_t triginen              : 4;  /**< [  3:  0](R/W) Trigger input to channel mapping. */
#else /* Word 0 - Little Endian */
        uint32_t triginen              : 4;  /**< [  3:  0](R/W) Trigger input to channel mapping. */
        uint32_t sbz_0                 : 28; /**< [ 31:  4](R/W) Software should write the field as all 0s. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_cst_shrd_ocla_cti_ctiinen26_s cn; */
};
typedef union cavm_cst_shrd_ocla_cti_ctiinen26 cavm_cst_shrd_ocla_cti_ctiinen26_t;

#define CAVM_CST_SHRD_OCLA_CTI_CTIINEN26 CAVM_CST_SHRD_OCLA_CTI_CTIINEN26_FUNC()
static inline uint64_t CAVM_CST_SHRD_OCLA_CTI_CTIINEN26_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_CST_SHRD_OCLA_CTI_CTIINEN26_FUNC(void)
{
    return 0x87a100010088ll;
}

#define typedef_CAVM_CST_SHRD_OCLA_CTI_CTIINEN26 cavm_cst_shrd_ocla_cti_ctiinen26_t
#define bustype_CAVM_CST_SHRD_OCLA_CTI_CTIINEN26 CSR_TYPE_NCB32b
#define basename_CAVM_CST_SHRD_OCLA_CTI_CTIINEN26 "CST_SHRD_OCLA_CTI_CTIINEN26"
#define busnum_CAVM_CST_SHRD_OCLA_CTI_CTIINEN26 0
#define arguments_CAVM_CST_SHRD_OCLA_CTI_CTIINEN26 -1,-1,-1,-1

/**
 * Register (NCB32b) cst_shrd_ocla_cti_ctiinen27
 *
 * CST Shrd Ocla Cti Ctiinen27 Register
 * This register maps trigger inputs to channels in the cross trigger system. The
 * CTIINEN registers are bit maps that allow the trigger input to be mapped to any
 * channel output, including none (0x0) and all (0xF). There is one register per
 * trigger input, so it is possible to map any combination of trigger inputs to any
 * channel outputs.
 */
union cavm_cst_shrd_ocla_cti_ctiinen27
{
    uint32_t u;
    struct cavm_cst_shrd_ocla_cti_ctiinen27_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t sbz_0                 : 28; /**< [ 31:  4](R/W) Software should write the field as all 0s. */
        uint32_t triginen              : 4;  /**< [  3:  0](R/W) Trigger input to channel mapping. */
#else /* Word 0 - Little Endian */
        uint32_t triginen              : 4;  /**< [  3:  0](R/W) Trigger input to channel mapping. */
        uint32_t sbz_0                 : 28; /**< [ 31:  4](R/W) Software should write the field as all 0s. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_cst_shrd_ocla_cti_ctiinen27_s cn; */
};
typedef union cavm_cst_shrd_ocla_cti_ctiinen27 cavm_cst_shrd_ocla_cti_ctiinen27_t;

#define CAVM_CST_SHRD_OCLA_CTI_CTIINEN27 CAVM_CST_SHRD_OCLA_CTI_CTIINEN27_FUNC()
static inline uint64_t CAVM_CST_SHRD_OCLA_CTI_CTIINEN27_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_CST_SHRD_OCLA_CTI_CTIINEN27_FUNC(void)
{
    return 0x87a10001008cll;
}

#define typedef_CAVM_CST_SHRD_OCLA_CTI_CTIINEN27 cavm_cst_shrd_ocla_cti_ctiinen27_t
#define bustype_CAVM_CST_SHRD_OCLA_CTI_CTIINEN27 CSR_TYPE_NCB32b
#define basename_CAVM_CST_SHRD_OCLA_CTI_CTIINEN27 "CST_SHRD_OCLA_CTI_CTIINEN27"
#define busnum_CAVM_CST_SHRD_OCLA_CTI_CTIINEN27 0
#define arguments_CAVM_CST_SHRD_OCLA_CTI_CTIINEN27 -1,-1,-1,-1

/**
 * Register (NCB32b) cst_shrd_ocla_cti_ctiinen28
 *
 * CST Shrd Ocla Cti Ctiinen28 Register
 * This register maps trigger inputs to channels in the cross trigger system. The
 * CTIINEN registers are bit maps that allow the trigger input to be mapped to any
 * channel output, including none (0x0) and all (0xF). There is one register per
 * trigger input, so it is possible to map any combination of trigger inputs to any
 * channel outputs.
 */
union cavm_cst_shrd_ocla_cti_ctiinen28
{
    uint32_t u;
    struct cavm_cst_shrd_ocla_cti_ctiinen28_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t sbz_0                 : 28; /**< [ 31:  4](R/W) Software should write the field as all 0s. */
        uint32_t triginen              : 4;  /**< [  3:  0](R/W) Trigger input to channel mapping. */
#else /* Word 0 - Little Endian */
        uint32_t triginen              : 4;  /**< [  3:  0](R/W) Trigger input to channel mapping. */
        uint32_t sbz_0                 : 28; /**< [ 31:  4](R/W) Software should write the field as all 0s. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_cst_shrd_ocla_cti_ctiinen28_s cn; */
};
typedef union cavm_cst_shrd_ocla_cti_ctiinen28 cavm_cst_shrd_ocla_cti_ctiinen28_t;

#define CAVM_CST_SHRD_OCLA_CTI_CTIINEN28 CAVM_CST_SHRD_OCLA_CTI_CTIINEN28_FUNC()
static inline uint64_t CAVM_CST_SHRD_OCLA_CTI_CTIINEN28_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_CST_SHRD_OCLA_CTI_CTIINEN28_FUNC(void)
{
    return 0x87a100010090ll;
}

#define typedef_CAVM_CST_SHRD_OCLA_CTI_CTIINEN28 cavm_cst_shrd_ocla_cti_ctiinen28_t
#define bustype_CAVM_CST_SHRD_OCLA_CTI_CTIINEN28 CSR_TYPE_NCB32b
#define basename_CAVM_CST_SHRD_OCLA_CTI_CTIINEN28 "CST_SHRD_OCLA_CTI_CTIINEN28"
#define busnum_CAVM_CST_SHRD_OCLA_CTI_CTIINEN28 0
#define arguments_CAVM_CST_SHRD_OCLA_CTI_CTIINEN28 -1,-1,-1,-1

/**
 * Register (NCB32b) cst_shrd_ocla_cti_ctiinen29
 *
 * CST Shrd Ocla Cti Ctiinen29 Register
 * This register maps trigger inputs to channels in the cross trigger system. The
 * CTIINEN registers are bit maps that allow the trigger input to be mapped to any
 * channel output, including none (0x0) and all (0xF). There is one register per
 * trigger input, so it is possible to map any combination of trigger inputs to any
 * channel outputs.
 */
union cavm_cst_shrd_ocla_cti_ctiinen29
{
    uint32_t u;
    struct cavm_cst_shrd_ocla_cti_ctiinen29_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t sbz_0                 : 28; /**< [ 31:  4](R/W) Software should write the field as all 0s. */
        uint32_t triginen              : 4;  /**< [  3:  0](R/W) Trigger input to channel mapping. */
#else /* Word 0 - Little Endian */
        uint32_t triginen              : 4;  /**< [  3:  0](R/W) Trigger input to channel mapping. */
        uint32_t sbz_0                 : 28; /**< [ 31:  4](R/W) Software should write the field as all 0s. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_cst_shrd_ocla_cti_ctiinen29_s cn; */
};
typedef union cavm_cst_shrd_ocla_cti_ctiinen29 cavm_cst_shrd_ocla_cti_ctiinen29_t;

#define CAVM_CST_SHRD_OCLA_CTI_CTIINEN29 CAVM_CST_SHRD_OCLA_CTI_CTIINEN29_FUNC()
static inline uint64_t CAVM_CST_SHRD_OCLA_CTI_CTIINEN29_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_CST_SHRD_OCLA_CTI_CTIINEN29_FUNC(void)
{
    return 0x87a100010094ll;
}

#define typedef_CAVM_CST_SHRD_OCLA_CTI_CTIINEN29 cavm_cst_shrd_ocla_cti_ctiinen29_t
#define bustype_CAVM_CST_SHRD_OCLA_CTI_CTIINEN29 CSR_TYPE_NCB32b
#define basename_CAVM_CST_SHRD_OCLA_CTI_CTIINEN29 "CST_SHRD_OCLA_CTI_CTIINEN29"
#define busnum_CAVM_CST_SHRD_OCLA_CTI_CTIINEN29 0
#define arguments_CAVM_CST_SHRD_OCLA_CTI_CTIINEN29 -1,-1,-1,-1

/**
 * Register (NCB32b) cst_shrd_ocla_cti_ctiinen3
 *
 * CST Shrd Ocla Cti Ctiinen3 Register
 * This register maps trigger inputs to channels in the cross trigger system. The
 * CTIINEN registers are bit maps that allow the trigger input to be mapped to any
 * channel output, including none (0x0) and all (0xF). There is one register per
 * trigger input, so it is possible to map any combination of trigger inputs to any
 * channel outputs.
 */
union cavm_cst_shrd_ocla_cti_ctiinen3
{
    uint32_t u;
    struct cavm_cst_shrd_ocla_cti_ctiinen3_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t sbz_0                 : 28; /**< [ 31:  4](R/W) Software should write the field as all 0s. */
        uint32_t triginen              : 4;  /**< [  3:  0](R/W) Trigger input to channel mapping. */
#else /* Word 0 - Little Endian */
        uint32_t triginen              : 4;  /**< [  3:  0](R/W) Trigger input to channel mapping. */
        uint32_t sbz_0                 : 28; /**< [ 31:  4](R/W) Software should write the field as all 0s. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_cst_shrd_ocla_cti_ctiinen3_s cn; */
};
typedef union cavm_cst_shrd_ocla_cti_ctiinen3 cavm_cst_shrd_ocla_cti_ctiinen3_t;

#define CAVM_CST_SHRD_OCLA_CTI_CTIINEN3 CAVM_CST_SHRD_OCLA_CTI_CTIINEN3_FUNC()
static inline uint64_t CAVM_CST_SHRD_OCLA_CTI_CTIINEN3_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_CST_SHRD_OCLA_CTI_CTIINEN3_FUNC(void)
{
    return 0x87a10001002cll;
}

#define typedef_CAVM_CST_SHRD_OCLA_CTI_CTIINEN3 cavm_cst_shrd_ocla_cti_ctiinen3_t
#define bustype_CAVM_CST_SHRD_OCLA_CTI_CTIINEN3 CSR_TYPE_NCB32b
#define basename_CAVM_CST_SHRD_OCLA_CTI_CTIINEN3 "CST_SHRD_OCLA_CTI_CTIINEN3"
#define busnum_CAVM_CST_SHRD_OCLA_CTI_CTIINEN3 0
#define arguments_CAVM_CST_SHRD_OCLA_CTI_CTIINEN3 -1,-1,-1,-1

/**
 * Register (NCB32b) cst_shrd_ocla_cti_ctiinen30
 *
 * CST Shrd Ocla Cti Ctiinen30 Register
 * This register maps trigger inputs to channels in the cross trigger system. The
 * CTIINEN registers are bit maps that allow the trigger input to be mapped to any
 * channel output, including none (0x0) and all (0xF). There is one register per
 * trigger input, so it is possible to map any combination of trigger inputs to any
 * channel outputs.
 */
union cavm_cst_shrd_ocla_cti_ctiinen30
{
    uint32_t u;
    struct cavm_cst_shrd_ocla_cti_ctiinen30_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t sbz_0                 : 28; /**< [ 31:  4](R/W) Software should write the field as all 0s. */
        uint32_t triginen              : 4;  /**< [  3:  0](R/W) Trigger input to channel mapping. */
#else /* Word 0 - Little Endian */
        uint32_t triginen              : 4;  /**< [  3:  0](R/W) Trigger input to channel mapping. */
        uint32_t sbz_0                 : 28; /**< [ 31:  4](R/W) Software should write the field as all 0s. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_cst_shrd_ocla_cti_ctiinen30_s cn; */
};
typedef union cavm_cst_shrd_ocla_cti_ctiinen30 cavm_cst_shrd_ocla_cti_ctiinen30_t;

#define CAVM_CST_SHRD_OCLA_CTI_CTIINEN30 CAVM_CST_SHRD_OCLA_CTI_CTIINEN30_FUNC()
static inline uint64_t CAVM_CST_SHRD_OCLA_CTI_CTIINEN30_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_CST_SHRD_OCLA_CTI_CTIINEN30_FUNC(void)
{
    return 0x87a100010098ll;
}

#define typedef_CAVM_CST_SHRD_OCLA_CTI_CTIINEN30 cavm_cst_shrd_ocla_cti_ctiinen30_t
#define bustype_CAVM_CST_SHRD_OCLA_CTI_CTIINEN30 CSR_TYPE_NCB32b
#define basename_CAVM_CST_SHRD_OCLA_CTI_CTIINEN30 "CST_SHRD_OCLA_CTI_CTIINEN30"
#define busnum_CAVM_CST_SHRD_OCLA_CTI_CTIINEN30 0
#define arguments_CAVM_CST_SHRD_OCLA_CTI_CTIINEN30 -1,-1,-1,-1

/**
 * Register (NCB32b) cst_shrd_ocla_cti_ctiinen31
 *
 * CST Shrd Ocla Cti Ctiinen31 Register
 * This register maps trigger inputs to channels in the cross trigger system. The
 * CTIINEN registers are bit maps that allow the trigger input to be mapped to any
 * channel output, including none (0x0) and all (0xF). There is one register per
 * trigger input, so it is possible to map any combination of trigger inputs to any
 * channel outputs.
 */
union cavm_cst_shrd_ocla_cti_ctiinen31
{
    uint32_t u;
    struct cavm_cst_shrd_ocla_cti_ctiinen31_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t sbz_0                 : 28; /**< [ 31:  4](R/W) Software should write the field as all 0s. */
        uint32_t triginen              : 4;  /**< [  3:  0](R/W) Trigger input to channel mapping. */
#else /* Word 0 - Little Endian */
        uint32_t triginen              : 4;  /**< [  3:  0](R/W) Trigger input to channel mapping. */
        uint32_t sbz_0                 : 28; /**< [ 31:  4](R/W) Software should write the field as all 0s. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_cst_shrd_ocla_cti_ctiinen31_s cn; */
};
typedef union cavm_cst_shrd_ocla_cti_ctiinen31 cavm_cst_shrd_ocla_cti_ctiinen31_t;

#define CAVM_CST_SHRD_OCLA_CTI_CTIINEN31 CAVM_CST_SHRD_OCLA_CTI_CTIINEN31_FUNC()
static inline uint64_t CAVM_CST_SHRD_OCLA_CTI_CTIINEN31_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_CST_SHRD_OCLA_CTI_CTIINEN31_FUNC(void)
{
    return 0x87a10001009cll;
}

#define typedef_CAVM_CST_SHRD_OCLA_CTI_CTIINEN31 cavm_cst_shrd_ocla_cti_ctiinen31_t
#define bustype_CAVM_CST_SHRD_OCLA_CTI_CTIINEN31 CSR_TYPE_NCB32b
#define basename_CAVM_CST_SHRD_OCLA_CTI_CTIINEN31 "CST_SHRD_OCLA_CTI_CTIINEN31"
#define busnum_CAVM_CST_SHRD_OCLA_CTI_CTIINEN31 0
#define arguments_CAVM_CST_SHRD_OCLA_CTI_CTIINEN31 -1,-1,-1,-1

/**
 * Register (NCB32b) cst_shrd_ocla_cti_ctiinen4
 *
 * CST Shrd Ocla Cti Ctiinen4 Register
 * This register maps trigger inputs to channels in the cross trigger system. The
 * CTIINEN registers are bit maps that allow the trigger input to be mapped to any
 * channel output, including none (0x0) and all (0xF). There is one register per
 * trigger input, so it is possible to map any combination of trigger inputs to any
 * channel outputs.
 */
union cavm_cst_shrd_ocla_cti_ctiinen4
{
    uint32_t u;
    struct cavm_cst_shrd_ocla_cti_ctiinen4_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t sbz_0                 : 28; /**< [ 31:  4](R/W) Software should write the field as all 0s. */
        uint32_t triginen              : 4;  /**< [  3:  0](R/W) Trigger input to channel mapping. */
#else /* Word 0 - Little Endian */
        uint32_t triginen              : 4;  /**< [  3:  0](R/W) Trigger input to channel mapping. */
        uint32_t sbz_0                 : 28; /**< [ 31:  4](R/W) Software should write the field as all 0s. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_cst_shrd_ocla_cti_ctiinen4_s cn; */
};
typedef union cavm_cst_shrd_ocla_cti_ctiinen4 cavm_cst_shrd_ocla_cti_ctiinen4_t;

#define CAVM_CST_SHRD_OCLA_CTI_CTIINEN4 CAVM_CST_SHRD_OCLA_CTI_CTIINEN4_FUNC()
static inline uint64_t CAVM_CST_SHRD_OCLA_CTI_CTIINEN4_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_CST_SHRD_OCLA_CTI_CTIINEN4_FUNC(void)
{
    return 0x87a100010030ll;
}

#define typedef_CAVM_CST_SHRD_OCLA_CTI_CTIINEN4 cavm_cst_shrd_ocla_cti_ctiinen4_t
#define bustype_CAVM_CST_SHRD_OCLA_CTI_CTIINEN4 CSR_TYPE_NCB32b
#define basename_CAVM_CST_SHRD_OCLA_CTI_CTIINEN4 "CST_SHRD_OCLA_CTI_CTIINEN4"
#define busnum_CAVM_CST_SHRD_OCLA_CTI_CTIINEN4 0
#define arguments_CAVM_CST_SHRD_OCLA_CTI_CTIINEN4 -1,-1,-1,-1

/**
 * Register (NCB32b) cst_shrd_ocla_cti_ctiinen5
 *
 * CST Shrd Ocla Cti Ctiinen5 Register
 * This register maps trigger inputs to channels in the cross trigger system. The
 * CTIINEN registers are bit maps that allow the trigger input to be mapped to any
 * channel output, including none (0x0) and all (0xF). There is one register per
 * trigger input, so it is possible to map any combination of trigger inputs to any
 * channel outputs.
 */
union cavm_cst_shrd_ocla_cti_ctiinen5
{
    uint32_t u;
    struct cavm_cst_shrd_ocla_cti_ctiinen5_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t sbz_0                 : 28; /**< [ 31:  4](R/W) Software should write the field as all 0s. */
        uint32_t triginen              : 4;  /**< [  3:  0](R/W) Trigger input to channel mapping. */
#else /* Word 0 - Little Endian */
        uint32_t triginen              : 4;  /**< [  3:  0](R/W) Trigger input to channel mapping. */
        uint32_t sbz_0                 : 28; /**< [ 31:  4](R/W) Software should write the field as all 0s. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_cst_shrd_ocla_cti_ctiinen5_s cn; */
};
typedef union cavm_cst_shrd_ocla_cti_ctiinen5 cavm_cst_shrd_ocla_cti_ctiinen5_t;

#define CAVM_CST_SHRD_OCLA_CTI_CTIINEN5 CAVM_CST_SHRD_OCLA_CTI_CTIINEN5_FUNC()
static inline uint64_t CAVM_CST_SHRD_OCLA_CTI_CTIINEN5_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_CST_SHRD_OCLA_CTI_CTIINEN5_FUNC(void)
{
    return 0x87a100010034ll;
}

#define typedef_CAVM_CST_SHRD_OCLA_CTI_CTIINEN5 cavm_cst_shrd_ocla_cti_ctiinen5_t
#define bustype_CAVM_CST_SHRD_OCLA_CTI_CTIINEN5 CSR_TYPE_NCB32b
#define basename_CAVM_CST_SHRD_OCLA_CTI_CTIINEN5 "CST_SHRD_OCLA_CTI_CTIINEN5"
#define busnum_CAVM_CST_SHRD_OCLA_CTI_CTIINEN5 0
#define arguments_CAVM_CST_SHRD_OCLA_CTI_CTIINEN5 -1,-1,-1,-1

/**
 * Register (NCB32b) cst_shrd_ocla_cti_ctiinen6
 *
 * CST Shrd Ocla Cti Ctiinen6 Register
 * This register maps trigger inputs to channels in the cross trigger system. The
 * CTIINEN registers are bit maps that allow the trigger input to be mapped to any
 * channel output, including none (0x0) and all (0xF). There is one register per
 * trigger input, so it is possible to map any combination of trigger inputs to any
 * channel outputs.
 */
union cavm_cst_shrd_ocla_cti_ctiinen6
{
    uint32_t u;
    struct cavm_cst_shrd_ocla_cti_ctiinen6_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t sbz_0                 : 28; /**< [ 31:  4](R/W) Software should write the field as all 0s. */
        uint32_t triginen              : 4;  /**< [  3:  0](R/W) Trigger input to channel mapping. */
#else /* Word 0 - Little Endian */
        uint32_t triginen              : 4;  /**< [  3:  0](R/W) Trigger input to channel mapping. */
        uint32_t sbz_0                 : 28; /**< [ 31:  4](R/W) Software should write the field as all 0s. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_cst_shrd_ocla_cti_ctiinen6_s cn; */
};
typedef union cavm_cst_shrd_ocla_cti_ctiinen6 cavm_cst_shrd_ocla_cti_ctiinen6_t;

#define CAVM_CST_SHRD_OCLA_CTI_CTIINEN6 CAVM_CST_SHRD_OCLA_CTI_CTIINEN6_FUNC()
static inline uint64_t CAVM_CST_SHRD_OCLA_CTI_CTIINEN6_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_CST_SHRD_OCLA_CTI_CTIINEN6_FUNC(void)
{
    return 0x87a100010038ll;
}

#define typedef_CAVM_CST_SHRD_OCLA_CTI_CTIINEN6 cavm_cst_shrd_ocla_cti_ctiinen6_t
#define bustype_CAVM_CST_SHRD_OCLA_CTI_CTIINEN6 CSR_TYPE_NCB32b
#define basename_CAVM_CST_SHRD_OCLA_CTI_CTIINEN6 "CST_SHRD_OCLA_CTI_CTIINEN6"
#define busnum_CAVM_CST_SHRD_OCLA_CTI_CTIINEN6 0
#define arguments_CAVM_CST_SHRD_OCLA_CTI_CTIINEN6 -1,-1,-1,-1

/**
 * Register (NCB32b) cst_shrd_ocla_cti_ctiinen7
 *
 * CST Shrd Ocla Cti Ctiinen7 Register
 * This register maps trigger inputs to channels in the cross trigger system. The
 * CTIINEN registers are bit maps that allow the trigger input to be mapped to any
 * channel output, including none (0x0) and all (0xF). There is one register per
 * trigger input, so it is possible to map any combination of trigger inputs to any
 * channel outputs.
 */
union cavm_cst_shrd_ocla_cti_ctiinen7
{
    uint32_t u;
    struct cavm_cst_shrd_ocla_cti_ctiinen7_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t sbz_0                 : 28; /**< [ 31:  4](R/W) Software should write the field as all 0s. */
        uint32_t triginen              : 4;  /**< [  3:  0](R/W) Trigger input to channel mapping. */
#else /* Word 0 - Little Endian */
        uint32_t triginen              : 4;  /**< [  3:  0](R/W) Trigger input to channel mapping. */
        uint32_t sbz_0                 : 28; /**< [ 31:  4](R/W) Software should write the field as all 0s. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_cst_shrd_ocla_cti_ctiinen7_s cn; */
};
typedef union cavm_cst_shrd_ocla_cti_ctiinen7 cavm_cst_shrd_ocla_cti_ctiinen7_t;

#define CAVM_CST_SHRD_OCLA_CTI_CTIINEN7 CAVM_CST_SHRD_OCLA_CTI_CTIINEN7_FUNC()
static inline uint64_t CAVM_CST_SHRD_OCLA_CTI_CTIINEN7_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_CST_SHRD_OCLA_CTI_CTIINEN7_FUNC(void)
{
    return 0x87a10001003cll;
}

#define typedef_CAVM_CST_SHRD_OCLA_CTI_CTIINEN7 cavm_cst_shrd_ocla_cti_ctiinen7_t
#define bustype_CAVM_CST_SHRD_OCLA_CTI_CTIINEN7 CSR_TYPE_NCB32b
#define basename_CAVM_CST_SHRD_OCLA_CTI_CTIINEN7 "CST_SHRD_OCLA_CTI_CTIINEN7"
#define busnum_CAVM_CST_SHRD_OCLA_CTI_CTIINEN7 0
#define arguments_CAVM_CST_SHRD_OCLA_CTI_CTIINEN7 -1,-1,-1,-1

/**
 * Register (NCB32b) cst_shrd_ocla_cti_ctiinen8
 *
 * CST Shrd Ocla Cti Ctiinen8 Register
 * This register maps trigger inputs to channels in the cross trigger system. The
 * CTIINEN registers are bit maps that allow the trigger input to be mapped to any
 * channel output, including none (0x0) and all (0xF). There is one register per
 * trigger input, so it is possible to map any combination of trigger inputs to any
 * channel outputs.
 */
union cavm_cst_shrd_ocla_cti_ctiinen8
{
    uint32_t u;
    struct cavm_cst_shrd_ocla_cti_ctiinen8_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t sbz_0                 : 28; /**< [ 31:  4](R/W) Software should write the field as all 0s. */
        uint32_t triginen              : 4;  /**< [  3:  0](R/W) Trigger input to channel mapping. */
#else /* Word 0 - Little Endian */
        uint32_t triginen              : 4;  /**< [  3:  0](R/W) Trigger input to channel mapping. */
        uint32_t sbz_0                 : 28; /**< [ 31:  4](R/W) Software should write the field as all 0s. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_cst_shrd_ocla_cti_ctiinen8_s cn; */
};
typedef union cavm_cst_shrd_ocla_cti_ctiinen8 cavm_cst_shrd_ocla_cti_ctiinen8_t;

#define CAVM_CST_SHRD_OCLA_CTI_CTIINEN8 CAVM_CST_SHRD_OCLA_CTI_CTIINEN8_FUNC()
static inline uint64_t CAVM_CST_SHRD_OCLA_CTI_CTIINEN8_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_CST_SHRD_OCLA_CTI_CTIINEN8_FUNC(void)
{
    return 0x87a100010040ll;
}

#define typedef_CAVM_CST_SHRD_OCLA_CTI_CTIINEN8 cavm_cst_shrd_ocla_cti_ctiinen8_t
#define bustype_CAVM_CST_SHRD_OCLA_CTI_CTIINEN8 CSR_TYPE_NCB32b
#define basename_CAVM_CST_SHRD_OCLA_CTI_CTIINEN8 "CST_SHRD_OCLA_CTI_CTIINEN8"
#define busnum_CAVM_CST_SHRD_OCLA_CTI_CTIINEN8 0
#define arguments_CAVM_CST_SHRD_OCLA_CTI_CTIINEN8 -1,-1,-1,-1

/**
 * Register (NCB32b) cst_shrd_ocla_cti_ctiinen9
 *
 * CST Shrd Ocla Cti Ctiinen9 Register
 * This register maps trigger inputs to channels in the cross trigger system. The
 * CTIINEN registers are bit maps that allow the trigger input to be mapped to any
 * channel output, including none (0x0) and all (0xF). There is one register per
 * trigger input, so it is possible to map any combination of trigger inputs to any
 * channel outputs.
 */
union cavm_cst_shrd_ocla_cti_ctiinen9
{
    uint32_t u;
    struct cavm_cst_shrd_ocla_cti_ctiinen9_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t sbz_0                 : 28; /**< [ 31:  4](R/W) Software should write the field as all 0s. */
        uint32_t triginen              : 4;  /**< [  3:  0](R/W) Trigger input to channel mapping. */
#else /* Word 0 - Little Endian */
        uint32_t triginen              : 4;  /**< [  3:  0](R/W) Trigger input to channel mapping. */
        uint32_t sbz_0                 : 28; /**< [ 31:  4](R/W) Software should write the field as all 0s. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_cst_shrd_ocla_cti_ctiinen9_s cn; */
};
typedef union cavm_cst_shrd_ocla_cti_ctiinen9 cavm_cst_shrd_ocla_cti_ctiinen9_t;

#define CAVM_CST_SHRD_OCLA_CTI_CTIINEN9 CAVM_CST_SHRD_OCLA_CTI_CTIINEN9_FUNC()
static inline uint64_t CAVM_CST_SHRD_OCLA_CTI_CTIINEN9_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_CST_SHRD_OCLA_CTI_CTIINEN9_FUNC(void)
{
    return 0x87a100010044ll;
}

#define typedef_CAVM_CST_SHRD_OCLA_CTI_CTIINEN9 cavm_cst_shrd_ocla_cti_ctiinen9_t
#define bustype_CAVM_CST_SHRD_OCLA_CTI_CTIINEN9 CSR_TYPE_NCB32b
#define basename_CAVM_CST_SHRD_OCLA_CTI_CTIINEN9 "CST_SHRD_OCLA_CTI_CTIINEN9"
#define busnum_CAVM_CST_SHRD_OCLA_CTI_CTIINEN9 0
#define arguments_CAVM_CST_SHRD_OCLA_CTI_CTIINEN9 -1,-1,-1,-1

/**
 * Register (NCB32b) cst_shrd_ocla_cti_ctiintack
 *
 * CST Shrd Ocla Cti Ctiintack Register
 * Software acknowledge for trigger outputs. The CTIINTACK register is a bit map that
 * allows selective clearing of trigger output events. If the SW_HANDSHAKE parameter
 * for a trigger output is set, indicating that the output latches HIGH when an event
 * is sent to that output, then the output remains HIGH until the corresponding INTACK
 * bit is written to a 1. A write of a bit to 0 has no effect. This allows different
 * software threads to be responsible for clearing different trigger outputs without
 * needing to perform a read-modify-write operation to find which bits are set.
 */
union cavm_cst_shrd_ocla_cti_ctiintack
{
    uint32_t u;
    struct cavm_cst_shrd_ocla_cti_ctiintack_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t intack                : 32; /**< [ 31:  0](WO) Acknowledges the corresponding event_out output. */
#else /* Word 0 - Little Endian */
        uint32_t intack                : 32; /**< [ 31:  0](WO) Acknowledges the corresponding event_out output. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_cst_shrd_ocla_cti_ctiintack_s cn; */
};
typedef union cavm_cst_shrd_ocla_cti_ctiintack cavm_cst_shrd_ocla_cti_ctiintack_t;

#define CAVM_CST_SHRD_OCLA_CTI_CTIINTACK CAVM_CST_SHRD_OCLA_CTI_CTIINTACK_FUNC()
static inline uint64_t CAVM_CST_SHRD_OCLA_CTI_CTIINTACK_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_CST_SHRD_OCLA_CTI_CTIINTACK_FUNC(void)
{
    return 0x87a100010010ll;
}

#define typedef_CAVM_CST_SHRD_OCLA_CTI_CTIINTACK cavm_cst_shrd_ocla_cti_ctiintack_t
#define bustype_CAVM_CST_SHRD_OCLA_CTI_CTIINTACK CSR_TYPE_NCB32b
#define basename_CAVM_CST_SHRD_OCLA_CTI_CTIINTACK "CST_SHRD_OCLA_CTI_CTIINTACK"
#define busnum_CAVM_CST_SHRD_OCLA_CTI_CTIINTACK 0
#define arguments_CAVM_CST_SHRD_OCLA_CTI_CTIINTACK -1,-1,-1,-1

/**
 * Register (NCB32b) cst_shrd_ocla_cti_ctiouten0
 *
 * CST Shrd Ocla Cti Ctiouten0 Register
 * This register maps channels in the cross trigger system to trigger outputs. The
 * CTIOUTEN registers are bit maps that allow any channel input to be mapped to the
 * trigger output, including none (0x0) and all (0xF). There is one register per
 * trigger output so it is possible to map any channel input to any combination of
 * trigger outputs.
 */
union cavm_cst_shrd_ocla_cti_ctiouten0
{
    uint32_t u;
    struct cavm_cst_shrd_ocla_cti_ctiouten0_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t sbz_0                 : 28; /**< [ 31:  4](R/W) Software should write the field as all 0s. */
        uint32_t trigouten             : 4;  /**< [  3:  0](R/W) Channel to trigger output mapping. */
#else /* Word 0 - Little Endian */
        uint32_t trigouten             : 4;  /**< [  3:  0](R/W) Channel to trigger output mapping. */
        uint32_t sbz_0                 : 28; /**< [ 31:  4](R/W) Software should write the field as all 0s. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_cst_shrd_ocla_cti_ctiouten0_s cn; */
};
typedef union cavm_cst_shrd_ocla_cti_ctiouten0 cavm_cst_shrd_ocla_cti_ctiouten0_t;

#define CAVM_CST_SHRD_OCLA_CTI_CTIOUTEN0 CAVM_CST_SHRD_OCLA_CTI_CTIOUTEN0_FUNC()
static inline uint64_t CAVM_CST_SHRD_OCLA_CTI_CTIOUTEN0_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_CST_SHRD_OCLA_CTI_CTIOUTEN0_FUNC(void)
{
    return 0x87a1000100a0ll;
}

#define typedef_CAVM_CST_SHRD_OCLA_CTI_CTIOUTEN0 cavm_cst_shrd_ocla_cti_ctiouten0_t
#define bustype_CAVM_CST_SHRD_OCLA_CTI_CTIOUTEN0 CSR_TYPE_NCB32b
#define basename_CAVM_CST_SHRD_OCLA_CTI_CTIOUTEN0 "CST_SHRD_OCLA_CTI_CTIOUTEN0"
#define busnum_CAVM_CST_SHRD_OCLA_CTI_CTIOUTEN0 0
#define arguments_CAVM_CST_SHRD_OCLA_CTI_CTIOUTEN0 -1,-1,-1,-1

/**
 * Register (NCB32b) cst_shrd_ocla_cti_ctiouten1
 *
 * CST Shrd Ocla Cti Ctiouten1 Register
 * This register maps channels in the cross trigger system to trigger outputs. The
 * CTIOUTEN registers are bit maps that allow any channel input to be mapped to the
 * trigger output, including none (0x0) and all (0xF). There is one register per
 * trigger output so it is possible to map any channel input to any combination of
 * trigger outputs.
 */
union cavm_cst_shrd_ocla_cti_ctiouten1
{
    uint32_t u;
    struct cavm_cst_shrd_ocla_cti_ctiouten1_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t sbz_0                 : 28; /**< [ 31:  4](R/W) Software should write the field as all 0s. */
        uint32_t trigouten             : 4;  /**< [  3:  0](R/W) Channel to trigger output mapping. */
#else /* Word 0 - Little Endian */
        uint32_t trigouten             : 4;  /**< [  3:  0](R/W) Channel to trigger output mapping. */
        uint32_t sbz_0                 : 28; /**< [ 31:  4](R/W) Software should write the field as all 0s. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_cst_shrd_ocla_cti_ctiouten1_s cn; */
};
typedef union cavm_cst_shrd_ocla_cti_ctiouten1 cavm_cst_shrd_ocla_cti_ctiouten1_t;

#define CAVM_CST_SHRD_OCLA_CTI_CTIOUTEN1 CAVM_CST_SHRD_OCLA_CTI_CTIOUTEN1_FUNC()
static inline uint64_t CAVM_CST_SHRD_OCLA_CTI_CTIOUTEN1_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_CST_SHRD_OCLA_CTI_CTIOUTEN1_FUNC(void)
{
    return 0x87a1000100a4ll;
}

#define typedef_CAVM_CST_SHRD_OCLA_CTI_CTIOUTEN1 cavm_cst_shrd_ocla_cti_ctiouten1_t
#define bustype_CAVM_CST_SHRD_OCLA_CTI_CTIOUTEN1 CSR_TYPE_NCB32b
#define basename_CAVM_CST_SHRD_OCLA_CTI_CTIOUTEN1 "CST_SHRD_OCLA_CTI_CTIOUTEN1"
#define busnum_CAVM_CST_SHRD_OCLA_CTI_CTIOUTEN1 0
#define arguments_CAVM_CST_SHRD_OCLA_CTI_CTIOUTEN1 -1,-1,-1,-1

/**
 * Register (NCB32b) cst_shrd_ocla_cti_ctiouten10
 *
 * CST Shrd Ocla Cti Ctiouten10 Register
 * This register maps channels in the cross trigger system to trigger outputs. The
 * CTIOUTEN registers are bit maps that allow any channel input to be mapped to the
 * trigger output, including none (0x0) and all (0xF). There is one register per
 * trigger output so it is possible to map any channel input to any combination of
 * trigger outputs.
 */
union cavm_cst_shrd_ocla_cti_ctiouten10
{
    uint32_t u;
    struct cavm_cst_shrd_ocla_cti_ctiouten10_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t sbz_0                 : 28; /**< [ 31:  4](R/W) Software should write the field as all 0s. */
        uint32_t trigouten             : 4;  /**< [  3:  0](R/W) Channel to trigger output mapping. */
#else /* Word 0 - Little Endian */
        uint32_t trigouten             : 4;  /**< [  3:  0](R/W) Channel to trigger output mapping. */
        uint32_t sbz_0                 : 28; /**< [ 31:  4](R/W) Software should write the field as all 0s. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_cst_shrd_ocla_cti_ctiouten10_s cn; */
};
typedef union cavm_cst_shrd_ocla_cti_ctiouten10 cavm_cst_shrd_ocla_cti_ctiouten10_t;

#define CAVM_CST_SHRD_OCLA_CTI_CTIOUTEN10 CAVM_CST_SHRD_OCLA_CTI_CTIOUTEN10_FUNC()
static inline uint64_t CAVM_CST_SHRD_OCLA_CTI_CTIOUTEN10_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_CST_SHRD_OCLA_CTI_CTIOUTEN10_FUNC(void)
{
    return 0x87a1000100c8ll;
}

#define typedef_CAVM_CST_SHRD_OCLA_CTI_CTIOUTEN10 cavm_cst_shrd_ocla_cti_ctiouten10_t
#define bustype_CAVM_CST_SHRD_OCLA_CTI_CTIOUTEN10 CSR_TYPE_NCB32b
#define basename_CAVM_CST_SHRD_OCLA_CTI_CTIOUTEN10 "CST_SHRD_OCLA_CTI_CTIOUTEN10"
#define busnum_CAVM_CST_SHRD_OCLA_CTI_CTIOUTEN10 0
#define arguments_CAVM_CST_SHRD_OCLA_CTI_CTIOUTEN10 -1,-1,-1,-1

/**
 * Register (NCB32b) cst_shrd_ocla_cti_ctiouten11
 *
 * CST Shrd Ocla Cti Ctiouten11 Register
 * This register maps channels in the cross trigger system to trigger outputs. The
 * CTIOUTEN registers are bit maps that allow any channel input to be mapped to the
 * trigger output, including none (0x0) and all (0xF). There is one register per
 * trigger output so it is possible to map any channel input to any combination of
 * trigger outputs.
 */
union cavm_cst_shrd_ocla_cti_ctiouten11
{
    uint32_t u;
    struct cavm_cst_shrd_ocla_cti_ctiouten11_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t sbz_0                 : 28; /**< [ 31:  4](R/W) Software should write the field as all 0s. */
        uint32_t trigouten             : 4;  /**< [  3:  0](R/W) Channel to trigger output mapping. */
#else /* Word 0 - Little Endian */
        uint32_t trigouten             : 4;  /**< [  3:  0](R/W) Channel to trigger output mapping. */
        uint32_t sbz_0                 : 28; /**< [ 31:  4](R/W) Software should write the field as all 0s. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_cst_shrd_ocla_cti_ctiouten11_s cn; */
};
typedef union cavm_cst_shrd_ocla_cti_ctiouten11 cavm_cst_shrd_ocla_cti_ctiouten11_t;

#define CAVM_CST_SHRD_OCLA_CTI_CTIOUTEN11 CAVM_CST_SHRD_OCLA_CTI_CTIOUTEN11_FUNC()
static inline uint64_t CAVM_CST_SHRD_OCLA_CTI_CTIOUTEN11_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_CST_SHRD_OCLA_CTI_CTIOUTEN11_FUNC(void)
{
    return 0x87a1000100ccll;
}

#define typedef_CAVM_CST_SHRD_OCLA_CTI_CTIOUTEN11 cavm_cst_shrd_ocla_cti_ctiouten11_t
#define bustype_CAVM_CST_SHRD_OCLA_CTI_CTIOUTEN11 CSR_TYPE_NCB32b
#define basename_CAVM_CST_SHRD_OCLA_CTI_CTIOUTEN11 "CST_SHRD_OCLA_CTI_CTIOUTEN11"
#define busnum_CAVM_CST_SHRD_OCLA_CTI_CTIOUTEN11 0
#define arguments_CAVM_CST_SHRD_OCLA_CTI_CTIOUTEN11 -1,-1,-1,-1

/**
 * Register (NCB32b) cst_shrd_ocla_cti_ctiouten12
 *
 * CST Shrd Ocla Cti Ctiouten12 Register
 * This register maps channels in the cross trigger system to trigger outputs. The
 * CTIOUTEN registers are bit maps that allow any channel input to be mapped to the
 * trigger output, including none (0x0) and all (0xF). There is one register per
 * trigger output so it is possible to map any channel input to any combination of
 * trigger outputs.
 */
union cavm_cst_shrd_ocla_cti_ctiouten12
{
    uint32_t u;
    struct cavm_cst_shrd_ocla_cti_ctiouten12_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t sbz_0                 : 28; /**< [ 31:  4](R/W) Software should write the field as all 0s. */
        uint32_t trigouten             : 4;  /**< [  3:  0](R/W) Channel to trigger output mapping. */
#else /* Word 0 - Little Endian */
        uint32_t trigouten             : 4;  /**< [  3:  0](R/W) Channel to trigger output mapping. */
        uint32_t sbz_0                 : 28; /**< [ 31:  4](R/W) Software should write the field as all 0s. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_cst_shrd_ocla_cti_ctiouten12_s cn; */
};
typedef union cavm_cst_shrd_ocla_cti_ctiouten12 cavm_cst_shrd_ocla_cti_ctiouten12_t;

#define CAVM_CST_SHRD_OCLA_CTI_CTIOUTEN12 CAVM_CST_SHRD_OCLA_CTI_CTIOUTEN12_FUNC()
static inline uint64_t CAVM_CST_SHRD_OCLA_CTI_CTIOUTEN12_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_CST_SHRD_OCLA_CTI_CTIOUTEN12_FUNC(void)
{
    return 0x87a1000100d0ll;
}

#define typedef_CAVM_CST_SHRD_OCLA_CTI_CTIOUTEN12 cavm_cst_shrd_ocla_cti_ctiouten12_t
#define bustype_CAVM_CST_SHRD_OCLA_CTI_CTIOUTEN12 CSR_TYPE_NCB32b
#define basename_CAVM_CST_SHRD_OCLA_CTI_CTIOUTEN12 "CST_SHRD_OCLA_CTI_CTIOUTEN12"
#define busnum_CAVM_CST_SHRD_OCLA_CTI_CTIOUTEN12 0
#define arguments_CAVM_CST_SHRD_OCLA_CTI_CTIOUTEN12 -1,-1,-1,-1

/**
 * Register (NCB32b) cst_shrd_ocla_cti_ctiouten13
 *
 * CST Shrd Ocla Cti Ctiouten13 Register
 * This register maps channels in the cross trigger system to trigger outputs. The
 * CTIOUTEN registers are bit maps that allow any channel input to be mapped to the
 * trigger output, including none (0x0) and all (0xF). There is one register per
 * trigger output so it is possible to map any channel input to any combination of
 * trigger outputs.
 */
union cavm_cst_shrd_ocla_cti_ctiouten13
{
    uint32_t u;
    struct cavm_cst_shrd_ocla_cti_ctiouten13_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t sbz_0                 : 28; /**< [ 31:  4](R/W) Software should write the field as all 0s. */
        uint32_t trigouten             : 4;  /**< [  3:  0](R/W) Channel to trigger output mapping. */
#else /* Word 0 - Little Endian */
        uint32_t trigouten             : 4;  /**< [  3:  0](R/W) Channel to trigger output mapping. */
        uint32_t sbz_0                 : 28; /**< [ 31:  4](R/W) Software should write the field as all 0s. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_cst_shrd_ocla_cti_ctiouten13_s cn; */
};
typedef union cavm_cst_shrd_ocla_cti_ctiouten13 cavm_cst_shrd_ocla_cti_ctiouten13_t;

#define CAVM_CST_SHRD_OCLA_CTI_CTIOUTEN13 CAVM_CST_SHRD_OCLA_CTI_CTIOUTEN13_FUNC()
static inline uint64_t CAVM_CST_SHRD_OCLA_CTI_CTIOUTEN13_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_CST_SHRD_OCLA_CTI_CTIOUTEN13_FUNC(void)
{
    return 0x87a1000100d4ll;
}

#define typedef_CAVM_CST_SHRD_OCLA_CTI_CTIOUTEN13 cavm_cst_shrd_ocla_cti_ctiouten13_t
#define bustype_CAVM_CST_SHRD_OCLA_CTI_CTIOUTEN13 CSR_TYPE_NCB32b
#define basename_CAVM_CST_SHRD_OCLA_CTI_CTIOUTEN13 "CST_SHRD_OCLA_CTI_CTIOUTEN13"
#define busnum_CAVM_CST_SHRD_OCLA_CTI_CTIOUTEN13 0
#define arguments_CAVM_CST_SHRD_OCLA_CTI_CTIOUTEN13 -1,-1,-1,-1

/**
 * Register (NCB32b) cst_shrd_ocla_cti_ctiouten14
 *
 * CST Shrd Ocla Cti Ctiouten14 Register
 * This register maps channels in the cross trigger system to trigger outputs. The
 * CTIOUTEN registers are bit maps that allow any channel input to be mapped to the
 * trigger output, including none (0x0) and all (0xF). There is one register per
 * trigger output so it is possible to map any channel input to any combination of
 * trigger outputs.
 */
union cavm_cst_shrd_ocla_cti_ctiouten14
{
    uint32_t u;
    struct cavm_cst_shrd_ocla_cti_ctiouten14_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t sbz_0                 : 28; /**< [ 31:  4](R/W) Software should write the field as all 0s. */
        uint32_t trigouten             : 4;  /**< [  3:  0](R/W) Channel to trigger output mapping. */
#else /* Word 0 - Little Endian */
        uint32_t trigouten             : 4;  /**< [  3:  0](R/W) Channel to trigger output mapping. */
        uint32_t sbz_0                 : 28; /**< [ 31:  4](R/W) Software should write the field as all 0s. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_cst_shrd_ocla_cti_ctiouten14_s cn; */
};
typedef union cavm_cst_shrd_ocla_cti_ctiouten14 cavm_cst_shrd_ocla_cti_ctiouten14_t;

#define CAVM_CST_SHRD_OCLA_CTI_CTIOUTEN14 CAVM_CST_SHRD_OCLA_CTI_CTIOUTEN14_FUNC()
static inline uint64_t CAVM_CST_SHRD_OCLA_CTI_CTIOUTEN14_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_CST_SHRD_OCLA_CTI_CTIOUTEN14_FUNC(void)
{
    return 0x87a1000100d8ll;
}

#define typedef_CAVM_CST_SHRD_OCLA_CTI_CTIOUTEN14 cavm_cst_shrd_ocla_cti_ctiouten14_t
#define bustype_CAVM_CST_SHRD_OCLA_CTI_CTIOUTEN14 CSR_TYPE_NCB32b
#define basename_CAVM_CST_SHRD_OCLA_CTI_CTIOUTEN14 "CST_SHRD_OCLA_CTI_CTIOUTEN14"
#define busnum_CAVM_CST_SHRD_OCLA_CTI_CTIOUTEN14 0
#define arguments_CAVM_CST_SHRD_OCLA_CTI_CTIOUTEN14 -1,-1,-1,-1

/**
 * Register (NCB32b) cst_shrd_ocla_cti_ctiouten15
 *
 * CST Shrd Ocla Cti Ctiouten15 Register
 * This register maps channels in the cross trigger system to trigger outputs. The
 * CTIOUTEN registers are bit maps that allow any channel input to be mapped to the
 * trigger output, including none (0x0) and all (0xF). There is one register per
 * trigger output so it is possible to map any channel input to any combination of
 * trigger outputs.
 */
union cavm_cst_shrd_ocla_cti_ctiouten15
{
    uint32_t u;
    struct cavm_cst_shrd_ocla_cti_ctiouten15_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t sbz_0                 : 28; /**< [ 31:  4](R/W) Software should write the field as all 0s. */
        uint32_t trigouten             : 4;  /**< [  3:  0](R/W) Channel to trigger output mapping. */
#else /* Word 0 - Little Endian */
        uint32_t trigouten             : 4;  /**< [  3:  0](R/W) Channel to trigger output mapping. */
        uint32_t sbz_0                 : 28; /**< [ 31:  4](R/W) Software should write the field as all 0s. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_cst_shrd_ocla_cti_ctiouten15_s cn; */
};
typedef union cavm_cst_shrd_ocla_cti_ctiouten15 cavm_cst_shrd_ocla_cti_ctiouten15_t;

#define CAVM_CST_SHRD_OCLA_CTI_CTIOUTEN15 CAVM_CST_SHRD_OCLA_CTI_CTIOUTEN15_FUNC()
static inline uint64_t CAVM_CST_SHRD_OCLA_CTI_CTIOUTEN15_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_CST_SHRD_OCLA_CTI_CTIOUTEN15_FUNC(void)
{
    return 0x87a1000100dcll;
}

#define typedef_CAVM_CST_SHRD_OCLA_CTI_CTIOUTEN15 cavm_cst_shrd_ocla_cti_ctiouten15_t
#define bustype_CAVM_CST_SHRD_OCLA_CTI_CTIOUTEN15 CSR_TYPE_NCB32b
#define basename_CAVM_CST_SHRD_OCLA_CTI_CTIOUTEN15 "CST_SHRD_OCLA_CTI_CTIOUTEN15"
#define busnum_CAVM_CST_SHRD_OCLA_CTI_CTIOUTEN15 0
#define arguments_CAVM_CST_SHRD_OCLA_CTI_CTIOUTEN15 -1,-1,-1,-1

/**
 * Register (NCB32b) cst_shrd_ocla_cti_ctiouten16
 *
 * CST Shrd Ocla Cti Ctiouten16 Register
 * This register maps channels in the cross trigger system to trigger outputs. The
 * CTIOUTEN registers are bit maps that allow any channel input to be mapped to the
 * trigger output, including none (0x0) and all (0xF). There is one register per
 * trigger output so it is possible to map any channel input to any combination of
 * trigger outputs.
 */
union cavm_cst_shrd_ocla_cti_ctiouten16
{
    uint32_t u;
    struct cavm_cst_shrd_ocla_cti_ctiouten16_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t sbz_0                 : 28; /**< [ 31:  4](R/W) Software should write the field as all 0s. */
        uint32_t trigouten             : 4;  /**< [  3:  0](R/W) Channel to trigger output mapping. */
#else /* Word 0 - Little Endian */
        uint32_t trigouten             : 4;  /**< [  3:  0](R/W) Channel to trigger output mapping. */
        uint32_t sbz_0                 : 28; /**< [ 31:  4](R/W) Software should write the field as all 0s. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_cst_shrd_ocla_cti_ctiouten16_s cn; */
};
typedef union cavm_cst_shrd_ocla_cti_ctiouten16 cavm_cst_shrd_ocla_cti_ctiouten16_t;

#define CAVM_CST_SHRD_OCLA_CTI_CTIOUTEN16 CAVM_CST_SHRD_OCLA_CTI_CTIOUTEN16_FUNC()
static inline uint64_t CAVM_CST_SHRD_OCLA_CTI_CTIOUTEN16_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_CST_SHRD_OCLA_CTI_CTIOUTEN16_FUNC(void)
{
    return 0x87a1000100e0ll;
}

#define typedef_CAVM_CST_SHRD_OCLA_CTI_CTIOUTEN16 cavm_cst_shrd_ocla_cti_ctiouten16_t
#define bustype_CAVM_CST_SHRD_OCLA_CTI_CTIOUTEN16 CSR_TYPE_NCB32b
#define basename_CAVM_CST_SHRD_OCLA_CTI_CTIOUTEN16 "CST_SHRD_OCLA_CTI_CTIOUTEN16"
#define busnum_CAVM_CST_SHRD_OCLA_CTI_CTIOUTEN16 0
#define arguments_CAVM_CST_SHRD_OCLA_CTI_CTIOUTEN16 -1,-1,-1,-1

/**
 * Register (NCB32b) cst_shrd_ocla_cti_ctiouten17
 *
 * CST Shrd Ocla Cti Ctiouten17 Register
 * This register maps channels in the cross trigger system to trigger outputs. The
 * CTIOUTEN registers are bit maps that allow any channel input to be mapped to the
 * trigger output, including none (0x0) and all (0xF). There is one register per
 * trigger output so it is possible to map any channel input to any combination of
 * trigger outputs.
 */
union cavm_cst_shrd_ocla_cti_ctiouten17
{
    uint32_t u;
    struct cavm_cst_shrd_ocla_cti_ctiouten17_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t sbz_0                 : 28; /**< [ 31:  4](R/W) Software should write the field as all 0s. */
        uint32_t trigouten             : 4;  /**< [  3:  0](R/W) Channel to trigger output mapping. */
#else /* Word 0 - Little Endian */
        uint32_t trigouten             : 4;  /**< [  3:  0](R/W) Channel to trigger output mapping. */
        uint32_t sbz_0                 : 28; /**< [ 31:  4](R/W) Software should write the field as all 0s. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_cst_shrd_ocla_cti_ctiouten17_s cn; */
};
typedef union cavm_cst_shrd_ocla_cti_ctiouten17 cavm_cst_shrd_ocla_cti_ctiouten17_t;

#define CAVM_CST_SHRD_OCLA_CTI_CTIOUTEN17 CAVM_CST_SHRD_OCLA_CTI_CTIOUTEN17_FUNC()
static inline uint64_t CAVM_CST_SHRD_OCLA_CTI_CTIOUTEN17_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_CST_SHRD_OCLA_CTI_CTIOUTEN17_FUNC(void)
{
    return 0x87a1000100e4ll;
}

#define typedef_CAVM_CST_SHRD_OCLA_CTI_CTIOUTEN17 cavm_cst_shrd_ocla_cti_ctiouten17_t
#define bustype_CAVM_CST_SHRD_OCLA_CTI_CTIOUTEN17 CSR_TYPE_NCB32b
#define basename_CAVM_CST_SHRD_OCLA_CTI_CTIOUTEN17 "CST_SHRD_OCLA_CTI_CTIOUTEN17"
#define busnum_CAVM_CST_SHRD_OCLA_CTI_CTIOUTEN17 0
#define arguments_CAVM_CST_SHRD_OCLA_CTI_CTIOUTEN17 -1,-1,-1,-1

/**
 * Register (NCB32b) cst_shrd_ocla_cti_ctiouten18
 *
 * CST Shrd Ocla Cti Ctiouten18 Register
 * This register maps channels in the cross trigger system to trigger outputs. The
 * CTIOUTEN registers are bit maps that allow any channel input to be mapped to the
 * trigger output, including none (0x0) and all (0xF). There is one register per
 * trigger output so it is possible to map any channel input to any combination of
 * trigger outputs.
 */
union cavm_cst_shrd_ocla_cti_ctiouten18
{
    uint32_t u;
    struct cavm_cst_shrd_ocla_cti_ctiouten18_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t sbz_0                 : 28; /**< [ 31:  4](R/W) Software should write the field as all 0s. */
        uint32_t trigouten             : 4;  /**< [  3:  0](R/W) Channel to trigger output mapping. */
#else /* Word 0 - Little Endian */
        uint32_t trigouten             : 4;  /**< [  3:  0](R/W) Channel to trigger output mapping. */
        uint32_t sbz_0                 : 28; /**< [ 31:  4](R/W) Software should write the field as all 0s. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_cst_shrd_ocla_cti_ctiouten18_s cn; */
};
typedef union cavm_cst_shrd_ocla_cti_ctiouten18 cavm_cst_shrd_ocla_cti_ctiouten18_t;

#define CAVM_CST_SHRD_OCLA_CTI_CTIOUTEN18 CAVM_CST_SHRD_OCLA_CTI_CTIOUTEN18_FUNC()
static inline uint64_t CAVM_CST_SHRD_OCLA_CTI_CTIOUTEN18_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_CST_SHRD_OCLA_CTI_CTIOUTEN18_FUNC(void)
{
    return 0x87a1000100e8ll;
}

#define typedef_CAVM_CST_SHRD_OCLA_CTI_CTIOUTEN18 cavm_cst_shrd_ocla_cti_ctiouten18_t
#define bustype_CAVM_CST_SHRD_OCLA_CTI_CTIOUTEN18 CSR_TYPE_NCB32b
#define basename_CAVM_CST_SHRD_OCLA_CTI_CTIOUTEN18 "CST_SHRD_OCLA_CTI_CTIOUTEN18"
#define busnum_CAVM_CST_SHRD_OCLA_CTI_CTIOUTEN18 0
#define arguments_CAVM_CST_SHRD_OCLA_CTI_CTIOUTEN18 -1,-1,-1,-1

/**
 * Register (NCB32b) cst_shrd_ocla_cti_ctiouten19
 *
 * CST Shrd Ocla Cti Ctiouten19 Register
 * This register maps channels in the cross trigger system to trigger outputs. The
 * CTIOUTEN registers are bit maps that allow any channel input to be mapped to the
 * trigger output, including none (0x0) and all (0xF). There is one register per
 * trigger output so it is possible to map any channel input to any combination of
 * trigger outputs.
 */
union cavm_cst_shrd_ocla_cti_ctiouten19
{
    uint32_t u;
    struct cavm_cst_shrd_ocla_cti_ctiouten19_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t sbz_0                 : 28; /**< [ 31:  4](R/W) Software should write the field as all 0s. */
        uint32_t trigouten             : 4;  /**< [  3:  0](R/W) Channel to trigger output mapping. */
#else /* Word 0 - Little Endian */
        uint32_t trigouten             : 4;  /**< [  3:  0](R/W) Channel to trigger output mapping. */
        uint32_t sbz_0                 : 28; /**< [ 31:  4](R/W) Software should write the field as all 0s. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_cst_shrd_ocla_cti_ctiouten19_s cn; */
};
typedef union cavm_cst_shrd_ocla_cti_ctiouten19 cavm_cst_shrd_ocla_cti_ctiouten19_t;

#define CAVM_CST_SHRD_OCLA_CTI_CTIOUTEN19 CAVM_CST_SHRD_OCLA_CTI_CTIOUTEN19_FUNC()
static inline uint64_t CAVM_CST_SHRD_OCLA_CTI_CTIOUTEN19_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_CST_SHRD_OCLA_CTI_CTIOUTEN19_FUNC(void)
{
    return 0x87a1000100ecll;
}

#define typedef_CAVM_CST_SHRD_OCLA_CTI_CTIOUTEN19 cavm_cst_shrd_ocla_cti_ctiouten19_t
#define bustype_CAVM_CST_SHRD_OCLA_CTI_CTIOUTEN19 CSR_TYPE_NCB32b
#define basename_CAVM_CST_SHRD_OCLA_CTI_CTIOUTEN19 "CST_SHRD_OCLA_CTI_CTIOUTEN19"
#define busnum_CAVM_CST_SHRD_OCLA_CTI_CTIOUTEN19 0
#define arguments_CAVM_CST_SHRD_OCLA_CTI_CTIOUTEN19 -1,-1,-1,-1

/**
 * Register (NCB32b) cst_shrd_ocla_cti_ctiouten2
 *
 * CST Shrd Ocla Cti Ctiouten2 Register
 * This register maps channels in the cross trigger system to trigger outputs. The
 * CTIOUTEN registers are bit maps that allow any channel input to be mapped to the
 * trigger output, including none (0x0) and all (0xF). There is one register per
 * trigger output so it is possible to map any channel input to any combination of
 * trigger outputs.
 */
union cavm_cst_shrd_ocla_cti_ctiouten2
{
    uint32_t u;
    struct cavm_cst_shrd_ocla_cti_ctiouten2_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t sbz_0                 : 28; /**< [ 31:  4](R/W) Software should write the field as all 0s. */
        uint32_t trigouten             : 4;  /**< [  3:  0](R/W) Channel to trigger output mapping. */
#else /* Word 0 - Little Endian */
        uint32_t trigouten             : 4;  /**< [  3:  0](R/W) Channel to trigger output mapping. */
        uint32_t sbz_0                 : 28; /**< [ 31:  4](R/W) Software should write the field as all 0s. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_cst_shrd_ocla_cti_ctiouten2_s cn; */
};
typedef union cavm_cst_shrd_ocla_cti_ctiouten2 cavm_cst_shrd_ocla_cti_ctiouten2_t;

#define CAVM_CST_SHRD_OCLA_CTI_CTIOUTEN2 CAVM_CST_SHRD_OCLA_CTI_CTIOUTEN2_FUNC()
static inline uint64_t CAVM_CST_SHRD_OCLA_CTI_CTIOUTEN2_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_CST_SHRD_OCLA_CTI_CTIOUTEN2_FUNC(void)
{
    return 0x87a1000100a8ll;
}

#define typedef_CAVM_CST_SHRD_OCLA_CTI_CTIOUTEN2 cavm_cst_shrd_ocla_cti_ctiouten2_t
#define bustype_CAVM_CST_SHRD_OCLA_CTI_CTIOUTEN2 CSR_TYPE_NCB32b
#define basename_CAVM_CST_SHRD_OCLA_CTI_CTIOUTEN2 "CST_SHRD_OCLA_CTI_CTIOUTEN2"
#define busnum_CAVM_CST_SHRD_OCLA_CTI_CTIOUTEN2 0
#define arguments_CAVM_CST_SHRD_OCLA_CTI_CTIOUTEN2 -1,-1,-1,-1

/**
 * Register (NCB32b) cst_shrd_ocla_cti_ctiouten20
 *
 * CST Shrd Ocla Cti Ctiouten20 Register
 * This register maps channels in the cross trigger system to trigger outputs. The
 * CTIOUTEN registers are bit maps that allow any channel input to be mapped to the
 * trigger output, including none (0x0) and all (0xF). There is one register per
 * trigger output so it is possible to map any channel input to any combination of
 * trigger outputs.
 */
union cavm_cst_shrd_ocla_cti_ctiouten20
{
    uint32_t u;
    struct cavm_cst_shrd_ocla_cti_ctiouten20_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t sbz_0                 : 28; /**< [ 31:  4](R/W) Software should write the field as all 0s. */
        uint32_t trigouten             : 4;  /**< [  3:  0](R/W) Channel to trigger output mapping. */
#else /* Word 0 - Little Endian */
        uint32_t trigouten             : 4;  /**< [  3:  0](R/W) Channel to trigger output mapping. */
        uint32_t sbz_0                 : 28; /**< [ 31:  4](R/W) Software should write the field as all 0s. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_cst_shrd_ocla_cti_ctiouten20_s cn; */
};
typedef union cavm_cst_shrd_ocla_cti_ctiouten20 cavm_cst_shrd_ocla_cti_ctiouten20_t;

#define CAVM_CST_SHRD_OCLA_CTI_CTIOUTEN20 CAVM_CST_SHRD_OCLA_CTI_CTIOUTEN20_FUNC()
static inline uint64_t CAVM_CST_SHRD_OCLA_CTI_CTIOUTEN20_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_CST_SHRD_OCLA_CTI_CTIOUTEN20_FUNC(void)
{
    return 0x87a1000100f0ll;
}

#define typedef_CAVM_CST_SHRD_OCLA_CTI_CTIOUTEN20 cavm_cst_shrd_ocla_cti_ctiouten20_t
#define bustype_CAVM_CST_SHRD_OCLA_CTI_CTIOUTEN20 CSR_TYPE_NCB32b
#define basename_CAVM_CST_SHRD_OCLA_CTI_CTIOUTEN20 "CST_SHRD_OCLA_CTI_CTIOUTEN20"
#define busnum_CAVM_CST_SHRD_OCLA_CTI_CTIOUTEN20 0
#define arguments_CAVM_CST_SHRD_OCLA_CTI_CTIOUTEN20 -1,-1,-1,-1

/**
 * Register (NCB32b) cst_shrd_ocla_cti_ctiouten21
 *
 * CST Shrd Ocla Cti Ctiouten21 Register
 * This register maps channels in the cross trigger system to trigger outputs. The
 * CTIOUTEN registers are bit maps that allow any channel input to be mapped to the
 * trigger output, including none (0x0) and all (0xF). There is one register per
 * trigger output so it is possible to map any channel input to any combination of
 * trigger outputs.
 */
union cavm_cst_shrd_ocla_cti_ctiouten21
{
    uint32_t u;
    struct cavm_cst_shrd_ocla_cti_ctiouten21_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t sbz_0                 : 28; /**< [ 31:  4](R/W) Software should write the field as all 0s. */
        uint32_t trigouten             : 4;  /**< [  3:  0](R/W) Channel to trigger output mapping. */
#else /* Word 0 - Little Endian */
        uint32_t trigouten             : 4;  /**< [  3:  0](R/W) Channel to trigger output mapping. */
        uint32_t sbz_0                 : 28; /**< [ 31:  4](R/W) Software should write the field as all 0s. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_cst_shrd_ocla_cti_ctiouten21_s cn; */
};
typedef union cavm_cst_shrd_ocla_cti_ctiouten21 cavm_cst_shrd_ocla_cti_ctiouten21_t;

#define CAVM_CST_SHRD_OCLA_CTI_CTIOUTEN21 CAVM_CST_SHRD_OCLA_CTI_CTIOUTEN21_FUNC()
static inline uint64_t CAVM_CST_SHRD_OCLA_CTI_CTIOUTEN21_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_CST_SHRD_OCLA_CTI_CTIOUTEN21_FUNC(void)
{
    return 0x87a1000100f4ll;
}

#define typedef_CAVM_CST_SHRD_OCLA_CTI_CTIOUTEN21 cavm_cst_shrd_ocla_cti_ctiouten21_t
#define bustype_CAVM_CST_SHRD_OCLA_CTI_CTIOUTEN21 CSR_TYPE_NCB32b
#define basename_CAVM_CST_SHRD_OCLA_CTI_CTIOUTEN21 "CST_SHRD_OCLA_CTI_CTIOUTEN21"
#define busnum_CAVM_CST_SHRD_OCLA_CTI_CTIOUTEN21 0
#define arguments_CAVM_CST_SHRD_OCLA_CTI_CTIOUTEN21 -1,-1,-1,-1

/**
 * Register (NCB32b) cst_shrd_ocla_cti_ctiouten22
 *
 * CST Shrd Ocla Cti Ctiouten22 Register
 * This register maps channels in the cross trigger system to trigger outputs. The
 * CTIOUTEN registers are bit maps that allow any channel input to be mapped to the
 * trigger output, including none (0x0) and all (0xF). There is one register per
 * trigger output so it is possible to map any channel input to any combination of
 * trigger outputs.
 */
union cavm_cst_shrd_ocla_cti_ctiouten22
{
    uint32_t u;
    struct cavm_cst_shrd_ocla_cti_ctiouten22_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t sbz_0                 : 28; /**< [ 31:  4](R/W) Software should write the field as all 0s. */
        uint32_t trigouten             : 4;  /**< [  3:  0](R/W) Channel to trigger output mapping. */
#else /* Word 0 - Little Endian */
        uint32_t trigouten             : 4;  /**< [  3:  0](R/W) Channel to trigger output mapping. */
        uint32_t sbz_0                 : 28; /**< [ 31:  4](R/W) Software should write the field as all 0s. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_cst_shrd_ocla_cti_ctiouten22_s cn; */
};
typedef union cavm_cst_shrd_ocla_cti_ctiouten22 cavm_cst_shrd_ocla_cti_ctiouten22_t;

#define CAVM_CST_SHRD_OCLA_CTI_CTIOUTEN22 CAVM_CST_SHRD_OCLA_CTI_CTIOUTEN22_FUNC()
static inline uint64_t CAVM_CST_SHRD_OCLA_CTI_CTIOUTEN22_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_CST_SHRD_OCLA_CTI_CTIOUTEN22_FUNC(void)
{
    return 0x87a1000100f8ll;
}

#define typedef_CAVM_CST_SHRD_OCLA_CTI_CTIOUTEN22 cavm_cst_shrd_ocla_cti_ctiouten22_t
#define bustype_CAVM_CST_SHRD_OCLA_CTI_CTIOUTEN22 CSR_TYPE_NCB32b
#define basename_CAVM_CST_SHRD_OCLA_CTI_CTIOUTEN22 "CST_SHRD_OCLA_CTI_CTIOUTEN22"
#define busnum_CAVM_CST_SHRD_OCLA_CTI_CTIOUTEN22 0
#define arguments_CAVM_CST_SHRD_OCLA_CTI_CTIOUTEN22 -1,-1,-1,-1

/**
 * Register (NCB32b) cst_shrd_ocla_cti_ctiouten23
 *
 * CST Shrd Ocla Cti Ctiouten23 Register
 * This register maps channels in the cross trigger system to trigger outputs. The
 * CTIOUTEN registers are bit maps that allow any channel input to be mapped to the
 * trigger output, including none (0x0) and all (0xF). There is one register per
 * trigger output so it is possible to map any channel input to any combination of
 * trigger outputs.
 */
union cavm_cst_shrd_ocla_cti_ctiouten23
{
    uint32_t u;
    struct cavm_cst_shrd_ocla_cti_ctiouten23_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t sbz_0                 : 28; /**< [ 31:  4](R/W) Software should write the field as all 0s. */
        uint32_t trigouten             : 4;  /**< [  3:  0](R/W) Channel to trigger output mapping. */
#else /* Word 0 - Little Endian */
        uint32_t trigouten             : 4;  /**< [  3:  0](R/W) Channel to trigger output mapping. */
        uint32_t sbz_0                 : 28; /**< [ 31:  4](R/W) Software should write the field as all 0s. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_cst_shrd_ocla_cti_ctiouten23_s cn; */
};
typedef union cavm_cst_shrd_ocla_cti_ctiouten23 cavm_cst_shrd_ocla_cti_ctiouten23_t;

#define CAVM_CST_SHRD_OCLA_CTI_CTIOUTEN23 CAVM_CST_SHRD_OCLA_CTI_CTIOUTEN23_FUNC()
static inline uint64_t CAVM_CST_SHRD_OCLA_CTI_CTIOUTEN23_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_CST_SHRD_OCLA_CTI_CTIOUTEN23_FUNC(void)
{
    return 0x87a1000100fcll;
}

#define typedef_CAVM_CST_SHRD_OCLA_CTI_CTIOUTEN23 cavm_cst_shrd_ocla_cti_ctiouten23_t
#define bustype_CAVM_CST_SHRD_OCLA_CTI_CTIOUTEN23 CSR_TYPE_NCB32b
#define basename_CAVM_CST_SHRD_OCLA_CTI_CTIOUTEN23 "CST_SHRD_OCLA_CTI_CTIOUTEN23"
#define busnum_CAVM_CST_SHRD_OCLA_CTI_CTIOUTEN23 0
#define arguments_CAVM_CST_SHRD_OCLA_CTI_CTIOUTEN23 -1,-1,-1,-1

/**
 * Register (NCB32b) cst_shrd_ocla_cti_ctiouten24
 *
 * CST Shrd Ocla Cti Ctiouten24 Register
 * This register maps channels in the cross trigger system to trigger outputs. The
 * CTIOUTEN registers are bit maps that allow any channel input to be mapped to the
 * trigger output, including none (0x0) and all (0xF). There is one register per
 * trigger output so it is possible to map any channel input to any combination of
 * trigger outputs.
 */
union cavm_cst_shrd_ocla_cti_ctiouten24
{
    uint32_t u;
    struct cavm_cst_shrd_ocla_cti_ctiouten24_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t sbz_0                 : 28; /**< [ 31:  4](R/W) Software should write the field as all 0s. */
        uint32_t trigouten             : 4;  /**< [  3:  0](R/W) Channel to trigger output mapping. */
#else /* Word 0 - Little Endian */
        uint32_t trigouten             : 4;  /**< [  3:  0](R/W) Channel to trigger output mapping. */
        uint32_t sbz_0                 : 28; /**< [ 31:  4](R/W) Software should write the field as all 0s. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_cst_shrd_ocla_cti_ctiouten24_s cn; */
};
typedef union cavm_cst_shrd_ocla_cti_ctiouten24 cavm_cst_shrd_ocla_cti_ctiouten24_t;

#define CAVM_CST_SHRD_OCLA_CTI_CTIOUTEN24 CAVM_CST_SHRD_OCLA_CTI_CTIOUTEN24_FUNC()
static inline uint64_t CAVM_CST_SHRD_OCLA_CTI_CTIOUTEN24_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_CST_SHRD_OCLA_CTI_CTIOUTEN24_FUNC(void)
{
    return 0x87a100010100ll;
}

#define typedef_CAVM_CST_SHRD_OCLA_CTI_CTIOUTEN24 cavm_cst_shrd_ocla_cti_ctiouten24_t
#define bustype_CAVM_CST_SHRD_OCLA_CTI_CTIOUTEN24 CSR_TYPE_NCB32b
#define basename_CAVM_CST_SHRD_OCLA_CTI_CTIOUTEN24 "CST_SHRD_OCLA_CTI_CTIOUTEN24"
#define busnum_CAVM_CST_SHRD_OCLA_CTI_CTIOUTEN24 0
#define arguments_CAVM_CST_SHRD_OCLA_CTI_CTIOUTEN24 -1,-1,-1,-1

/**
 * Register (NCB32b) cst_shrd_ocla_cti_ctiouten25
 *
 * CST Shrd Ocla Cti Ctiouten25 Register
 * This register maps channels in the cross trigger system to trigger outputs. The
 * CTIOUTEN registers are bit maps that allow any channel input to be mapped to the
 * trigger output, including none (0x0) and all (0xF). There is one register per
 * trigger output so it is possible to map any channel input to any combination of
 * trigger outputs.
 */
union cavm_cst_shrd_ocla_cti_ctiouten25
{
    uint32_t u;
    struct cavm_cst_shrd_ocla_cti_ctiouten25_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t sbz_0                 : 28; /**< [ 31:  4](R/W) Software should write the field as all 0s. */
        uint32_t trigouten             : 4;  /**< [  3:  0](R/W) Channel to trigger output mapping. */
#else /* Word 0 - Little Endian */
        uint32_t trigouten             : 4;  /**< [  3:  0](R/W) Channel to trigger output mapping. */
        uint32_t sbz_0                 : 28; /**< [ 31:  4](R/W) Software should write the field as all 0s. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_cst_shrd_ocla_cti_ctiouten25_s cn; */
};
typedef union cavm_cst_shrd_ocla_cti_ctiouten25 cavm_cst_shrd_ocla_cti_ctiouten25_t;

#define CAVM_CST_SHRD_OCLA_CTI_CTIOUTEN25 CAVM_CST_SHRD_OCLA_CTI_CTIOUTEN25_FUNC()
static inline uint64_t CAVM_CST_SHRD_OCLA_CTI_CTIOUTEN25_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_CST_SHRD_OCLA_CTI_CTIOUTEN25_FUNC(void)
{
    return 0x87a100010104ll;
}

#define typedef_CAVM_CST_SHRD_OCLA_CTI_CTIOUTEN25 cavm_cst_shrd_ocla_cti_ctiouten25_t
#define bustype_CAVM_CST_SHRD_OCLA_CTI_CTIOUTEN25 CSR_TYPE_NCB32b
#define basename_CAVM_CST_SHRD_OCLA_CTI_CTIOUTEN25 "CST_SHRD_OCLA_CTI_CTIOUTEN25"
#define busnum_CAVM_CST_SHRD_OCLA_CTI_CTIOUTEN25 0
#define arguments_CAVM_CST_SHRD_OCLA_CTI_CTIOUTEN25 -1,-1,-1,-1

/**
 * Register (NCB32b) cst_shrd_ocla_cti_ctiouten26
 *
 * CST Shrd Ocla Cti Ctiouten26 Register
 * This register maps channels in the cross trigger system to trigger outputs. The
 * CTIOUTEN registers are bit maps that allow any channel input to be mapped to the
 * trigger output, including none (0x0) and all (0xF). There is one register per
 * trigger output so it is possible to map any channel input to any combination of
 * trigger outputs.
 */
union cavm_cst_shrd_ocla_cti_ctiouten26
{
    uint32_t u;
    struct cavm_cst_shrd_ocla_cti_ctiouten26_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t sbz_0                 : 28; /**< [ 31:  4](R/W) Software should write the field as all 0s. */
        uint32_t trigouten             : 4;  /**< [  3:  0](R/W) Channel to trigger output mapping. */
#else /* Word 0 - Little Endian */
        uint32_t trigouten             : 4;  /**< [  3:  0](R/W) Channel to trigger output mapping. */
        uint32_t sbz_0                 : 28; /**< [ 31:  4](R/W) Software should write the field as all 0s. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_cst_shrd_ocla_cti_ctiouten26_s cn; */
};
typedef union cavm_cst_shrd_ocla_cti_ctiouten26 cavm_cst_shrd_ocla_cti_ctiouten26_t;

#define CAVM_CST_SHRD_OCLA_CTI_CTIOUTEN26 CAVM_CST_SHRD_OCLA_CTI_CTIOUTEN26_FUNC()
static inline uint64_t CAVM_CST_SHRD_OCLA_CTI_CTIOUTEN26_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_CST_SHRD_OCLA_CTI_CTIOUTEN26_FUNC(void)
{
    return 0x87a100010108ll;
}

#define typedef_CAVM_CST_SHRD_OCLA_CTI_CTIOUTEN26 cavm_cst_shrd_ocla_cti_ctiouten26_t
#define bustype_CAVM_CST_SHRD_OCLA_CTI_CTIOUTEN26 CSR_TYPE_NCB32b
#define basename_CAVM_CST_SHRD_OCLA_CTI_CTIOUTEN26 "CST_SHRD_OCLA_CTI_CTIOUTEN26"
#define busnum_CAVM_CST_SHRD_OCLA_CTI_CTIOUTEN26 0
#define arguments_CAVM_CST_SHRD_OCLA_CTI_CTIOUTEN26 -1,-1,-1,-1

/**
 * Register (NCB32b) cst_shrd_ocla_cti_ctiouten27
 *
 * CST Shrd Ocla Cti Ctiouten27 Register
 * This register maps channels in the cross trigger system to trigger outputs. The
 * CTIOUTEN registers are bit maps that allow any channel input to be mapped to the
 * trigger output, including none (0x0) and all (0xF). There is one register per
 * trigger output so it is possible to map any channel input to any combination of
 * trigger outputs.
 */
union cavm_cst_shrd_ocla_cti_ctiouten27
{
    uint32_t u;
    struct cavm_cst_shrd_ocla_cti_ctiouten27_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t sbz_0                 : 28; /**< [ 31:  4](R/W) Software should write the field as all 0s. */
        uint32_t trigouten             : 4;  /**< [  3:  0](R/W) Channel to trigger output mapping. */
#else /* Word 0 - Little Endian */
        uint32_t trigouten             : 4;  /**< [  3:  0](R/W) Channel to trigger output mapping. */
        uint32_t sbz_0                 : 28; /**< [ 31:  4](R/W) Software should write the field as all 0s. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_cst_shrd_ocla_cti_ctiouten27_s cn; */
};
typedef union cavm_cst_shrd_ocla_cti_ctiouten27 cavm_cst_shrd_ocla_cti_ctiouten27_t;

#define CAVM_CST_SHRD_OCLA_CTI_CTIOUTEN27 CAVM_CST_SHRD_OCLA_CTI_CTIOUTEN27_FUNC()
static inline uint64_t CAVM_CST_SHRD_OCLA_CTI_CTIOUTEN27_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_CST_SHRD_OCLA_CTI_CTIOUTEN27_FUNC(void)
{
    return 0x87a10001010cll;
}

#define typedef_CAVM_CST_SHRD_OCLA_CTI_CTIOUTEN27 cavm_cst_shrd_ocla_cti_ctiouten27_t
#define bustype_CAVM_CST_SHRD_OCLA_CTI_CTIOUTEN27 CSR_TYPE_NCB32b
#define basename_CAVM_CST_SHRD_OCLA_CTI_CTIOUTEN27 "CST_SHRD_OCLA_CTI_CTIOUTEN27"
#define busnum_CAVM_CST_SHRD_OCLA_CTI_CTIOUTEN27 0
#define arguments_CAVM_CST_SHRD_OCLA_CTI_CTIOUTEN27 -1,-1,-1,-1

/**
 * Register (NCB32b) cst_shrd_ocla_cti_ctiouten28
 *
 * CST Shrd Ocla Cti Ctiouten28 Register
 * This register maps channels in the cross trigger system to trigger outputs. The
 * CTIOUTEN registers are bit maps that allow any channel input to be mapped to the
 * trigger output, including none (0x0) and all (0xF). There is one register per
 * trigger output so it is possible to map any channel input to any combination of
 * trigger outputs.
 */
union cavm_cst_shrd_ocla_cti_ctiouten28
{
    uint32_t u;
    struct cavm_cst_shrd_ocla_cti_ctiouten28_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t sbz_0                 : 28; /**< [ 31:  4](R/W) Software should write the field as all 0s. */
        uint32_t trigouten             : 4;  /**< [  3:  0](R/W) Channel to trigger output mapping. */
#else /* Word 0 - Little Endian */
        uint32_t trigouten             : 4;  /**< [  3:  0](R/W) Channel to trigger output mapping. */
        uint32_t sbz_0                 : 28; /**< [ 31:  4](R/W) Software should write the field as all 0s. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_cst_shrd_ocla_cti_ctiouten28_s cn; */
};
typedef union cavm_cst_shrd_ocla_cti_ctiouten28 cavm_cst_shrd_ocla_cti_ctiouten28_t;

#define CAVM_CST_SHRD_OCLA_CTI_CTIOUTEN28 CAVM_CST_SHRD_OCLA_CTI_CTIOUTEN28_FUNC()
static inline uint64_t CAVM_CST_SHRD_OCLA_CTI_CTIOUTEN28_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_CST_SHRD_OCLA_CTI_CTIOUTEN28_FUNC(void)
{
    return 0x87a100010110ll;
}

#define typedef_CAVM_CST_SHRD_OCLA_CTI_CTIOUTEN28 cavm_cst_shrd_ocla_cti_ctiouten28_t
#define bustype_CAVM_CST_SHRD_OCLA_CTI_CTIOUTEN28 CSR_TYPE_NCB32b
#define basename_CAVM_CST_SHRD_OCLA_CTI_CTIOUTEN28 "CST_SHRD_OCLA_CTI_CTIOUTEN28"
#define busnum_CAVM_CST_SHRD_OCLA_CTI_CTIOUTEN28 0
#define arguments_CAVM_CST_SHRD_OCLA_CTI_CTIOUTEN28 -1,-1,-1,-1

/**
 * Register (NCB32b) cst_shrd_ocla_cti_ctiouten29
 *
 * CST Shrd Ocla Cti Ctiouten29 Register
 * This register maps channels in the cross trigger system to trigger outputs. The
 * CTIOUTEN registers are bit maps that allow any channel input to be mapped to the
 * trigger output, including none (0x0) and all (0xF). There is one register per
 * trigger output so it is possible to map any channel input to any combination of
 * trigger outputs.
 */
union cavm_cst_shrd_ocla_cti_ctiouten29
{
    uint32_t u;
    struct cavm_cst_shrd_ocla_cti_ctiouten29_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t sbz_0                 : 28; /**< [ 31:  4](R/W) Software should write the field as all 0s. */
        uint32_t trigouten             : 4;  /**< [  3:  0](R/W) Channel to trigger output mapping. */
#else /* Word 0 - Little Endian */
        uint32_t trigouten             : 4;  /**< [  3:  0](R/W) Channel to trigger output mapping. */
        uint32_t sbz_0                 : 28; /**< [ 31:  4](R/W) Software should write the field as all 0s. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_cst_shrd_ocla_cti_ctiouten29_s cn; */
};
typedef union cavm_cst_shrd_ocla_cti_ctiouten29 cavm_cst_shrd_ocla_cti_ctiouten29_t;

#define CAVM_CST_SHRD_OCLA_CTI_CTIOUTEN29 CAVM_CST_SHRD_OCLA_CTI_CTIOUTEN29_FUNC()
static inline uint64_t CAVM_CST_SHRD_OCLA_CTI_CTIOUTEN29_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_CST_SHRD_OCLA_CTI_CTIOUTEN29_FUNC(void)
{
    return 0x87a100010114ll;
}

#define typedef_CAVM_CST_SHRD_OCLA_CTI_CTIOUTEN29 cavm_cst_shrd_ocla_cti_ctiouten29_t
#define bustype_CAVM_CST_SHRD_OCLA_CTI_CTIOUTEN29 CSR_TYPE_NCB32b
#define basename_CAVM_CST_SHRD_OCLA_CTI_CTIOUTEN29 "CST_SHRD_OCLA_CTI_CTIOUTEN29"
#define busnum_CAVM_CST_SHRD_OCLA_CTI_CTIOUTEN29 0
#define arguments_CAVM_CST_SHRD_OCLA_CTI_CTIOUTEN29 -1,-1,-1,-1

/**
 * Register (NCB32b) cst_shrd_ocla_cti_ctiouten3
 *
 * CST Shrd Ocla Cti Ctiouten3 Register
 * This register maps channels in the cross trigger system to trigger outputs. The
 * CTIOUTEN registers are bit maps that allow any channel input to be mapped to the
 * trigger output, including none (0x0) and all (0xF). There is one register per
 * trigger output so it is possible to map any channel input to any combination of
 * trigger outputs.
 */
union cavm_cst_shrd_ocla_cti_ctiouten3
{
    uint32_t u;
    struct cavm_cst_shrd_ocla_cti_ctiouten3_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t sbz_0                 : 28; /**< [ 31:  4](R/W) Software should write the field as all 0s. */
        uint32_t trigouten             : 4;  /**< [  3:  0](R/W) Channel to trigger output mapping. */
#else /* Word 0 - Little Endian */
        uint32_t trigouten             : 4;  /**< [  3:  0](R/W) Channel to trigger output mapping. */
        uint32_t sbz_0                 : 28; /**< [ 31:  4](R/W) Software should write the field as all 0s. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_cst_shrd_ocla_cti_ctiouten3_s cn; */
};
typedef union cavm_cst_shrd_ocla_cti_ctiouten3 cavm_cst_shrd_ocla_cti_ctiouten3_t;

#define CAVM_CST_SHRD_OCLA_CTI_CTIOUTEN3 CAVM_CST_SHRD_OCLA_CTI_CTIOUTEN3_FUNC()
static inline uint64_t CAVM_CST_SHRD_OCLA_CTI_CTIOUTEN3_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_CST_SHRD_OCLA_CTI_CTIOUTEN3_FUNC(void)
{
    return 0x87a1000100acll;
}

#define typedef_CAVM_CST_SHRD_OCLA_CTI_CTIOUTEN3 cavm_cst_shrd_ocla_cti_ctiouten3_t
#define bustype_CAVM_CST_SHRD_OCLA_CTI_CTIOUTEN3 CSR_TYPE_NCB32b
#define basename_CAVM_CST_SHRD_OCLA_CTI_CTIOUTEN3 "CST_SHRD_OCLA_CTI_CTIOUTEN3"
#define busnum_CAVM_CST_SHRD_OCLA_CTI_CTIOUTEN3 0
#define arguments_CAVM_CST_SHRD_OCLA_CTI_CTIOUTEN3 -1,-1,-1,-1

/**
 * Register (NCB32b) cst_shrd_ocla_cti_ctiouten30
 *
 * CST Shrd Ocla Cti Ctiouten30 Register
 * This register maps channels in the cross trigger system to trigger outputs. The
 * CTIOUTEN registers are bit maps that allow any channel input to be mapped to the
 * trigger output, including none (0x0) and all (0xF). There is one register per
 * trigger output so it is possible to map any channel input to any combination of
 * trigger outputs.
 */
union cavm_cst_shrd_ocla_cti_ctiouten30
{
    uint32_t u;
    struct cavm_cst_shrd_ocla_cti_ctiouten30_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t sbz_0                 : 28; /**< [ 31:  4](R/W) Software should write the field as all 0s. */
        uint32_t trigouten             : 4;  /**< [  3:  0](R/W) Channel to trigger output mapping. */
#else /* Word 0 - Little Endian */
        uint32_t trigouten             : 4;  /**< [  3:  0](R/W) Channel to trigger output mapping. */
        uint32_t sbz_0                 : 28; /**< [ 31:  4](R/W) Software should write the field as all 0s. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_cst_shrd_ocla_cti_ctiouten30_s cn; */
};
typedef union cavm_cst_shrd_ocla_cti_ctiouten30 cavm_cst_shrd_ocla_cti_ctiouten30_t;

#define CAVM_CST_SHRD_OCLA_CTI_CTIOUTEN30 CAVM_CST_SHRD_OCLA_CTI_CTIOUTEN30_FUNC()
static inline uint64_t CAVM_CST_SHRD_OCLA_CTI_CTIOUTEN30_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_CST_SHRD_OCLA_CTI_CTIOUTEN30_FUNC(void)
{
    return 0x87a100010118ll;
}

#define typedef_CAVM_CST_SHRD_OCLA_CTI_CTIOUTEN30 cavm_cst_shrd_ocla_cti_ctiouten30_t
#define bustype_CAVM_CST_SHRD_OCLA_CTI_CTIOUTEN30 CSR_TYPE_NCB32b
#define basename_CAVM_CST_SHRD_OCLA_CTI_CTIOUTEN30 "CST_SHRD_OCLA_CTI_CTIOUTEN30"
#define busnum_CAVM_CST_SHRD_OCLA_CTI_CTIOUTEN30 0
#define arguments_CAVM_CST_SHRD_OCLA_CTI_CTIOUTEN30 -1,-1,-1,-1

/**
 * Register (NCB32b) cst_shrd_ocla_cti_ctiouten31
 *
 * CST Shrd Ocla Cti Ctiouten31 Register
 * This register maps channels in the cross trigger system to trigger outputs. The
 * CTIOUTEN registers are bit maps that allow any channel input to be mapped to the
 * trigger output, including none (0x0) and all (0xF). There is one register per
 * trigger output so it is possible to map any channel input to any combination of
 * trigger outputs.
 */
union cavm_cst_shrd_ocla_cti_ctiouten31
{
    uint32_t u;
    struct cavm_cst_shrd_ocla_cti_ctiouten31_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t sbz_0                 : 28; /**< [ 31:  4](R/W) Software should write the field as all 0s. */
        uint32_t trigouten             : 4;  /**< [  3:  0](R/W) Channel to trigger output mapping. */
#else /* Word 0 - Little Endian */
        uint32_t trigouten             : 4;  /**< [  3:  0](R/W) Channel to trigger output mapping. */
        uint32_t sbz_0                 : 28; /**< [ 31:  4](R/W) Software should write the field as all 0s. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_cst_shrd_ocla_cti_ctiouten31_s cn; */
};
typedef union cavm_cst_shrd_ocla_cti_ctiouten31 cavm_cst_shrd_ocla_cti_ctiouten31_t;

#define CAVM_CST_SHRD_OCLA_CTI_CTIOUTEN31 CAVM_CST_SHRD_OCLA_CTI_CTIOUTEN31_FUNC()
static inline uint64_t CAVM_CST_SHRD_OCLA_CTI_CTIOUTEN31_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_CST_SHRD_OCLA_CTI_CTIOUTEN31_FUNC(void)
{
    return 0x87a10001011cll;
}

#define typedef_CAVM_CST_SHRD_OCLA_CTI_CTIOUTEN31 cavm_cst_shrd_ocla_cti_ctiouten31_t
#define bustype_CAVM_CST_SHRD_OCLA_CTI_CTIOUTEN31 CSR_TYPE_NCB32b
#define basename_CAVM_CST_SHRD_OCLA_CTI_CTIOUTEN31 "CST_SHRD_OCLA_CTI_CTIOUTEN31"
#define busnum_CAVM_CST_SHRD_OCLA_CTI_CTIOUTEN31 0
#define arguments_CAVM_CST_SHRD_OCLA_CTI_CTIOUTEN31 -1,-1,-1,-1

/**
 * Register (NCB32b) cst_shrd_ocla_cti_ctiouten4
 *
 * CST Shrd Ocla Cti Ctiouten4 Register
 * This register maps channels in the cross trigger system to trigger outputs. The
 * CTIOUTEN registers are bit maps that allow any channel input to be mapped to the
 * trigger output, including none (0x0) and all (0xF). There is one register per
 * trigger output so it is possible to map any channel input to any combination of
 * trigger outputs.
 */
union cavm_cst_shrd_ocla_cti_ctiouten4
{
    uint32_t u;
    struct cavm_cst_shrd_ocla_cti_ctiouten4_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t sbz_0                 : 28; /**< [ 31:  4](R/W) Software should write the field as all 0s. */
        uint32_t trigouten             : 4;  /**< [  3:  0](R/W) Channel to trigger output mapping. */
#else /* Word 0 - Little Endian */
        uint32_t trigouten             : 4;  /**< [  3:  0](R/W) Channel to trigger output mapping. */
        uint32_t sbz_0                 : 28; /**< [ 31:  4](R/W) Software should write the field as all 0s. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_cst_shrd_ocla_cti_ctiouten4_s cn; */
};
typedef union cavm_cst_shrd_ocla_cti_ctiouten4 cavm_cst_shrd_ocla_cti_ctiouten4_t;

#define CAVM_CST_SHRD_OCLA_CTI_CTIOUTEN4 CAVM_CST_SHRD_OCLA_CTI_CTIOUTEN4_FUNC()
static inline uint64_t CAVM_CST_SHRD_OCLA_CTI_CTIOUTEN4_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_CST_SHRD_OCLA_CTI_CTIOUTEN4_FUNC(void)
{
    return 0x87a1000100b0ll;
}

#define typedef_CAVM_CST_SHRD_OCLA_CTI_CTIOUTEN4 cavm_cst_shrd_ocla_cti_ctiouten4_t
#define bustype_CAVM_CST_SHRD_OCLA_CTI_CTIOUTEN4 CSR_TYPE_NCB32b
#define basename_CAVM_CST_SHRD_OCLA_CTI_CTIOUTEN4 "CST_SHRD_OCLA_CTI_CTIOUTEN4"
#define busnum_CAVM_CST_SHRD_OCLA_CTI_CTIOUTEN4 0
#define arguments_CAVM_CST_SHRD_OCLA_CTI_CTIOUTEN4 -1,-1,-1,-1

/**
 * Register (NCB32b) cst_shrd_ocla_cti_ctiouten5
 *
 * CST Shrd Ocla Cti Ctiouten5 Register
 * This register maps channels in the cross trigger system to trigger outputs. The
 * CTIOUTEN registers are bit maps that allow any channel input to be mapped to the
 * trigger output, including none (0x0) and all (0xF). There is one register per
 * trigger output so it is possible to map any channel input to any combination of
 * trigger outputs.
 */
union cavm_cst_shrd_ocla_cti_ctiouten5
{
    uint32_t u;
    struct cavm_cst_shrd_ocla_cti_ctiouten5_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t sbz_0                 : 28; /**< [ 31:  4](R/W) Software should write the field as all 0s. */
        uint32_t trigouten             : 4;  /**< [  3:  0](R/W) Channel to trigger output mapping. */
#else /* Word 0 - Little Endian */
        uint32_t trigouten             : 4;  /**< [  3:  0](R/W) Channel to trigger output mapping. */
        uint32_t sbz_0                 : 28; /**< [ 31:  4](R/W) Software should write the field as all 0s. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_cst_shrd_ocla_cti_ctiouten5_s cn; */
};
typedef union cavm_cst_shrd_ocla_cti_ctiouten5 cavm_cst_shrd_ocla_cti_ctiouten5_t;

#define CAVM_CST_SHRD_OCLA_CTI_CTIOUTEN5 CAVM_CST_SHRD_OCLA_CTI_CTIOUTEN5_FUNC()
static inline uint64_t CAVM_CST_SHRD_OCLA_CTI_CTIOUTEN5_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_CST_SHRD_OCLA_CTI_CTIOUTEN5_FUNC(void)
{
    return 0x87a1000100b4ll;
}

#define typedef_CAVM_CST_SHRD_OCLA_CTI_CTIOUTEN5 cavm_cst_shrd_ocla_cti_ctiouten5_t
#define bustype_CAVM_CST_SHRD_OCLA_CTI_CTIOUTEN5 CSR_TYPE_NCB32b
#define basename_CAVM_CST_SHRD_OCLA_CTI_CTIOUTEN5 "CST_SHRD_OCLA_CTI_CTIOUTEN5"
#define busnum_CAVM_CST_SHRD_OCLA_CTI_CTIOUTEN5 0
#define arguments_CAVM_CST_SHRD_OCLA_CTI_CTIOUTEN5 -1,-1,-1,-1

/**
 * Register (NCB32b) cst_shrd_ocla_cti_ctiouten6
 *
 * CST Shrd Ocla Cti Ctiouten6 Register
 * This register maps channels in the cross trigger system to trigger outputs. The
 * CTIOUTEN registers are bit maps that allow any channel input to be mapped to the
 * trigger output, including none (0x0) and all (0xF). There is one register per
 * trigger output so it is possible to map any channel input to any combination of
 * trigger outputs.
 */
union cavm_cst_shrd_ocla_cti_ctiouten6
{
    uint32_t u;
    struct cavm_cst_shrd_ocla_cti_ctiouten6_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t sbz_0                 : 28; /**< [ 31:  4](R/W) Software should write the field as all 0s. */
        uint32_t trigouten             : 4;  /**< [  3:  0](R/W) Channel to trigger output mapping. */
#else /* Word 0 - Little Endian */
        uint32_t trigouten             : 4;  /**< [  3:  0](R/W) Channel to trigger output mapping. */
        uint32_t sbz_0                 : 28; /**< [ 31:  4](R/W) Software should write the field as all 0s. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_cst_shrd_ocla_cti_ctiouten6_s cn; */
};
typedef union cavm_cst_shrd_ocla_cti_ctiouten6 cavm_cst_shrd_ocla_cti_ctiouten6_t;

#define CAVM_CST_SHRD_OCLA_CTI_CTIOUTEN6 CAVM_CST_SHRD_OCLA_CTI_CTIOUTEN6_FUNC()
static inline uint64_t CAVM_CST_SHRD_OCLA_CTI_CTIOUTEN6_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_CST_SHRD_OCLA_CTI_CTIOUTEN6_FUNC(void)
{
    return 0x87a1000100b8ll;
}

#define typedef_CAVM_CST_SHRD_OCLA_CTI_CTIOUTEN6 cavm_cst_shrd_ocla_cti_ctiouten6_t
#define bustype_CAVM_CST_SHRD_OCLA_CTI_CTIOUTEN6 CSR_TYPE_NCB32b
#define basename_CAVM_CST_SHRD_OCLA_CTI_CTIOUTEN6 "CST_SHRD_OCLA_CTI_CTIOUTEN6"
#define busnum_CAVM_CST_SHRD_OCLA_CTI_CTIOUTEN6 0
#define arguments_CAVM_CST_SHRD_OCLA_CTI_CTIOUTEN6 -1,-1,-1,-1

/**
 * Register (NCB32b) cst_shrd_ocla_cti_ctiouten7
 *
 * CST Shrd Ocla Cti Ctiouten7 Register
 * This register maps channels in the cross trigger system to trigger outputs. The
 * CTIOUTEN registers are bit maps that allow any channel input to be mapped to the
 * trigger output, including none (0x0) and all (0xF). There is one register per
 * trigger output so it is possible to map any channel input to any combination of
 * trigger outputs.
 */
union cavm_cst_shrd_ocla_cti_ctiouten7
{
    uint32_t u;
    struct cavm_cst_shrd_ocla_cti_ctiouten7_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t sbz_0                 : 28; /**< [ 31:  4](R/W) Software should write the field as all 0s. */
        uint32_t trigouten             : 4;  /**< [  3:  0](R/W) Channel to trigger output mapping. */
#else /* Word 0 - Little Endian */
        uint32_t trigouten             : 4;  /**< [  3:  0](R/W) Channel to trigger output mapping. */
        uint32_t sbz_0                 : 28; /**< [ 31:  4](R/W) Software should write the field as all 0s. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_cst_shrd_ocla_cti_ctiouten7_s cn; */
};
typedef union cavm_cst_shrd_ocla_cti_ctiouten7 cavm_cst_shrd_ocla_cti_ctiouten7_t;

#define CAVM_CST_SHRD_OCLA_CTI_CTIOUTEN7 CAVM_CST_SHRD_OCLA_CTI_CTIOUTEN7_FUNC()
static inline uint64_t CAVM_CST_SHRD_OCLA_CTI_CTIOUTEN7_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_CST_SHRD_OCLA_CTI_CTIOUTEN7_FUNC(void)
{
    return 0x87a1000100bcll;
}

#define typedef_CAVM_CST_SHRD_OCLA_CTI_CTIOUTEN7 cavm_cst_shrd_ocla_cti_ctiouten7_t
#define bustype_CAVM_CST_SHRD_OCLA_CTI_CTIOUTEN7 CSR_TYPE_NCB32b
#define basename_CAVM_CST_SHRD_OCLA_CTI_CTIOUTEN7 "CST_SHRD_OCLA_CTI_CTIOUTEN7"
#define busnum_CAVM_CST_SHRD_OCLA_CTI_CTIOUTEN7 0
#define arguments_CAVM_CST_SHRD_OCLA_CTI_CTIOUTEN7 -1,-1,-1,-1

/**
 * Register (NCB32b) cst_shrd_ocla_cti_ctiouten8
 *
 * CST Shrd Ocla Cti Ctiouten8 Register
 * This register maps channels in the cross trigger system to trigger outputs. The
 * CTIOUTEN registers are bit maps that allow any channel input to be mapped to the
 * trigger output, including none (0x0) and all (0xF). There is one register per
 * trigger output so it is possible to map any channel input to any combination of
 * trigger outputs.
 */
union cavm_cst_shrd_ocla_cti_ctiouten8
{
    uint32_t u;
    struct cavm_cst_shrd_ocla_cti_ctiouten8_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t sbz_0                 : 28; /**< [ 31:  4](R/W) Software should write the field as all 0s. */
        uint32_t trigouten             : 4;  /**< [  3:  0](R/W) Channel to trigger output mapping. */
#else /* Word 0 - Little Endian */
        uint32_t trigouten             : 4;  /**< [  3:  0](R/W) Channel to trigger output mapping. */
        uint32_t sbz_0                 : 28; /**< [ 31:  4](R/W) Software should write the field as all 0s. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_cst_shrd_ocla_cti_ctiouten8_s cn; */
};
typedef union cavm_cst_shrd_ocla_cti_ctiouten8 cavm_cst_shrd_ocla_cti_ctiouten8_t;

#define CAVM_CST_SHRD_OCLA_CTI_CTIOUTEN8 CAVM_CST_SHRD_OCLA_CTI_CTIOUTEN8_FUNC()
static inline uint64_t CAVM_CST_SHRD_OCLA_CTI_CTIOUTEN8_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_CST_SHRD_OCLA_CTI_CTIOUTEN8_FUNC(void)
{
    return 0x87a1000100c0ll;
}

#define typedef_CAVM_CST_SHRD_OCLA_CTI_CTIOUTEN8 cavm_cst_shrd_ocla_cti_ctiouten8_t
#define bustype_CAVM_CST_SHRD_OCLA_CTI_CTIOUTEN8 CSR_TYPE_NCB32b
#define basename_CAVM_CST_SHRD_OCLA_CTI_CTIOUTEN8 "CST_SHRD_OCLA_CTI_CTIOUTEN8"
#define busnum_CAVM_CST_SHRD_OCLA_CTI_CTIOUTEN8 0
#define arguments_CAVM_CST_SHRD_OCLA_CTI_CTIOUTEN8 -1,-1,-1,-1

/**
 * Register (NCB32b) cst_shrd_ocla_cti_ctiouten9
 *
 * CST Shrd Ocla Cti Ctiouten9 Register
 * This register maps channels in the cross trigger system to trigger outputs. The
 * CTIOUTEN registers are bit maps that allow any channel input to be mapped to the
 * trigger output, including none (0x0) and all (0xF). There is one register per
 * trigger output so it is possible to map any channel input to any combination of
 * trigger outputs.
 */
union cavm_cst_shrd_ocla_cti_ctiouten9
{
    uint32_t u;
    struct cavm_cst_shrd_ocla_cti_ctiouten9_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t sbz_0                 : 28; /**< [ 31:  4](R/W) Software should write the field as all 0s. */
        uint32_t trigouten             : 4;  /**< [  3:  0](R/W) Channel to trigger output mapping. */
#else /* Word 0 - Little Endian */
        uint32_t trigouten             : 4;  /**< [  3:  0](R/W) Channel to trigger output mapping. */
        uint32_t sbz_0                 : 28; /**< [ 31:  4](R/W) Software should write the field as all 0s. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_cst_shrd_ocla_cti_ctiouten9_s cn; */
};
typedef union cavm_cst_shrd_ocla_cti_ctiouten9 cavm_cst_shrd_ocla_cti_ctiouten9_t;

#define CAVM_CST_SHRD_OCLA_CTI_CTIOUTEN9 CAVM_CST_SHRD_OCLA_CTI_CTIOUTEN9_FUNC()
static inline uint64_t CAVM_CST_SHRD_OCLA_CTI_CTIOUTEN9_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_CST_SHRD_OCLA_CTI_CTIOUTEN9_FUNC(void)
{
    return 0x87a1000100c4ll;
}

#define typedef_CAVM_CST_SHRD_OCLA_CTI_CTIOUTEN9 cavm_cst_shrd_ocla_cti_ctiouten9_t
#define bustype_CAVM_CST_SHRD_OCLA_CTI_CTIOUTEN9 CSR_TYPE_NCB32b
#define basename_CAVM_CST_SHRD_OCLA_CTI_CTIOUTEN9 "CST_SHRD_OCLA_CTI_CTIOUTEN9"
#define busnum_CAVM_CST_SHRD_OCLA_CTI_CTIOUTEN9 0
#define arguments_CAVM_CST_SHRD_OCLA_CTI_CTIOUTEN9 -1,-1,-1,-1

/**
 * Register (NCB32b) cst_shrd_ocla_cti_ctitriginstatus
 *
 * CST Shrd Ocla Cti Ctitriginstatus Register
 * Trigger input status. If the event_in input is driven by a source that generates
 * single cycle pulses, this register is generally read as 0.
 */
union cavm_cst_shrd_ocla_cti_ctitriginstatus
{
    uint32_t u;
    struct cavm_cst_shrd_ocla_cti_ctitriginstatus_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t triginstatus          : 32; /**< [ 31:  0](RO) Trigger input status. */
#else /* Word 0 - Little Endian */
        uint32_t triginstatus          : 32; /**< [ 31:  0](RO) Trigger input status. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_cst_shrd_ocla_cti_ctitriginstatus_s cn; */
};
typedef union cavm_cst_shrd_ocla_cti_ctitriginstatus cavm_cst_shrd_ocla_cti_ctitriginstatus_t;

#define CAVM_CST_SHRD_OCLA_CTI_CTITRIGINSTATUS CAVM_CST_SHRD_OCLA_CTI_CTITRIGINSTATUS_FUNC()
static inline uint64_t CAVM_CST_SHRD_OCLA_CTI_CTITRIGINSTATUS_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_CST_SHRD_OCLA_CTI_CTITRIGINSTATUS_FUNC(void)
{
    return 0x87a100010130ll;
}

#define typedef_CAVM_CST_SHRD_OCLA_CTI_CTITRIGINSTATUS cavm_cst_shrd_ocla_cti_ctitriginstatus_t
#define bustype_CAVM_CST_SHRD_OCLA_CTI_CTITRIGINSTATUS CSR_TYPE_NCB32b
#define basename_CAVM_CST_SHRD_OCLA_CTI_CTITRIGINSTATUS "CST_SHRD_OCLA_CTI_CTITRIGINSTATUS"
#define busnum_CAVM_CST_SHRD_OCLA_CTI_CTITRIGINSTATUS 0
#define arguments_CAVM_CST_SHRD_OCLA_CTI_CTITRIGINSTATUS -1,-1,-1,-1

/**
 * Register (NCB32b) cst_shrd_ocla_cti_ctitrigoutstatus
 *
 * CST Shrd Ocla Cti Ctitrigoutstatus Register
 * Trigger output status. The register only has meaning if the trigger source drives
 * static levels, rather than pulses.
 */
union cavm_cst_shrd_ocla_cti_ctitrigoutstatus
{
    uint32_t u;
    struct cavm_cst_shrd_ocla_cti_ctitrigoutstatus_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t trigoutstatus         : 32; /**< [ 31:  0](RO) Trigger output status. */
#else /* Word 0 - Little Endian */
        uint32_t trigoutstatus         : 32; /**< [ 31:  0](RO) Trigger output status. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_cst_shrd_ocla_cti_ctitrigoutstatus_s cn; */
};
typedef union cavm_cst_shrd_ocla_cti_ctitrigoutstatus cavm_cst_shrd_ocla_cti_ctitrigoutstatus_t;

#define CAVM_CST_SHRD_OCLA_CTI_CTITRIGOUTSTATUS CAVM_CST_SHRD_OCLA_CTI_CTITRIGOUTSTATUS_FUNC()
static inline uint64_t CAVM_CST_SHRD_OCLA_CTI_CTITRIGOUTSTATUS_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_CST_SHRD_OCLA_CTI_CTITRIGOUTSTATUS_FUNC(void)
{
    return 0x87a100010134ll;
}

#define typedef_CAVM_CST_SHRD_OCLA_CTI_CTITRIGOUTSTATUS cavm_cst_shrd_ocla_cti_ctitrigoutstatus_t
#define bustype_CAVM_CST_SHRD_OCLA_CTI_CTITRIGOUTSTATUS CSR_TYPE_NCB32b
#define basename_CAVM_CST_SHRD_OCLA_CTI_CTITRIGOUTSTATUS "CST_SHRD_OCLA_CTI_CTITRIGOUTSTATUS"
#define busnum_CAVM_CST_SHRD_OCLA_CTI_CTITRIGOUTSTATUS 0
#define arguments_CAVM_CST_SHRD_OCLA_CTI_CTITRIGOUTSTATUS -1,-1,-1,-1

/**
 * Register (NCB32b) cst_shrd_ocla_cti_devaff0
 *
 * CST Shrd Ocla Cti Devaff0 Register
 * Enables a debugger to determine if two components have an affinity with each other.
 */
union cavm_cst_shrd_ocla_cti_devaff0
{
    uint32_t u;
    struct cavm_cst_shrd_ocla_cti_devaff0_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t devaff0               : 32; /**< [ 31:  0](RO) Lower 32-bits of DEVAFF. The value is set by the devaff[31:0] tie-off inputs. */
#else /* Word 0 - Little Endian */
        uint32_t devaff0               : 32; /**< [ 31:  0](RO) Lower 32-bits of DEVAFF. The value is set by the devaff[31:0] tie-off inputs. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_cst_shrd_ocla_cti_devaff0_s cn; */
};
typedef union cavm_cst_shrd_ocla_cti_devaff0 cavm_cst_shrd_ocla_cti_devaff0_t;

#define CAVM_CST_SHRD_OCLA_CTI_DEVAFF0 CAVM_CST_SHRD_OCLA_CTI_DEVAFF0_FUNC()
static inline uint64_t CAVM_CST_SHRD_OCLA_CTI_DEVAFF0_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_CST_SHRD_OCLA_CTI_DEVAFF0_FUNC(void)
{
    return 0x87a100010fa8ll;
}

#define typedef_CAVM_CST_SHRD_OCLA_CTI_DEVAFF0 cavm_cst_shrd_ocla_cti_devaff0_t
#define bustype_CAVM_CST_SHRD_OCLA_CTI_DEVAFF0 CSR_TYPE_NCB32b
#define basename_CAVM_CST_SHRD_OCLA_CTI_DEVAFF0 "CST_SHRD_OCLA_CTI_DEVAFF0"
#define busnum_CAVM_CST_SHRD_OCLA_CTI_DEVAFF0 0
#define arguments_CAVM_CST_SHRD_OCLA_CTI_DEVAFF0 -1,-1,-1,-1

/**
 * Register (NCB32b) cst_shrd_ocla_cti_devaff1
 *
 * CST Shrd Ocla Cti Devaff1 Register
 * Enables a debugger to determine if two components have an affinity with each other.
 */
union cavm_cst_shrd_ocla_cti_devaff1
{
    uint32_t u;
    struct cavm_cst_shrd_ocla_cti_devaff1_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t devaff1               : 32; /**< [ 31:  0](RO) Upper 32-bits of DEVAFF. The value is set by the devaff[63:32] tie-off inputs. */
#else /* Word 0 - Little Endian */
        uint32_t devaff1               : 32; /**< [ 31:  0](RO) Upper 32-bits of DEVAFF. The value is set by the devaff[63:32] tie-off inputs. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_cst_shrd_ocla_cti_devaff1_s cn; */
};
typedef union cavm_cst_shrd_ocla_cti_devaff1 cavm_cst_shrd_ocla_cti_devaff1_t;

#define CAVM_CST_SHRD_OCLA_CTI_DEVAFF1 CAVM_CST_SHRD_OCLA_CTI_DEVAFF1_FUNC()
static inline uint64_t CAVM_CST_SHRD_OCLA_CTI_DEVAFF1_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_CST_SHRD_OCLA_CTI_DEVAFF1_FUNC(void)
{
    return 0x87a100010facll;
}

#define typedef_CAVM_CST_SHRD_OCLA_CTI_DEVAFF1 cavm_cst_shrd_ocla_cti_devaff1_t
#define bustype_CAVM_CST_SHRD_OCLA_CTI_DEVAFF1 CSR_TYPE_NCB32b
#define basename_CAVM_CST_SHRD_OCLA_CTI_DEVAFF1 "CST_SHRD_OCLA_CTI_DEVAFF1"
#define busnum_CAVM_CST_SHRD_OCLA_CTI_DEVAFF1 0
#define arguments_CAVM_CST_SHRD_OCLA_CTI_DEVAFF1 -1,-1,-1,-1

/**
 * Register (NCB32b) cst_shrd_ocla_cti_devarch
 *
 * CST Shrd Ocla Cti Devarch Register
 * Identifies the architect and architecture of a CoreSight component. The architect
 * might differ from the designer of a component, for example Arm defines the
 * architecture but another company designs and implements the component.
 */
union cavm_cst_shrd_ocla_cti_devarch
{
    uint32_t u;
    struct cavm_cst_shrd_ocla_cti_devarch_s
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
    /* struct cavm_cst_shrd_ocla_cti_devarch_s cn; */
};
typedef union cavm_cst_shrd_ocla_cti_devarch cavm_cst_shrd_ocla_cti_devarch_t;

#define CAVM_CST_SHRD_OCLA_CTI_DEVARCH CAVM_CST_SHRD_OCLA_CTI_DEVARCH_FUNC()
static inline uint64_t CAVM_CST_SHRD_OCLA_CTI_DEVARCH_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_CST_SHRD_OCLA_CTI_DEVARCH_FUNC(void)
{
    return 0x87a100010fbcll;
}

#define typedef_CAVM_CST_SHRD_OCLA_CTI_DEVARCH cavm_cst_shrd_ocla_cti_devarch_t
#define bustype_CAVM_CST_SHRD_OCLA_CTI_DEVARCH CSR_TYPE_NCB32b
#define basename_CAVM_CST_SHRD_OCLA_CTI_DEVARCH "CST_SHRD_OCLA_CTI_DEVARCH"
#define busnum_CAVM_CST_SHRD_OCLA_CTI_DEVARCH 0
#define arguments_CAVM_CST_SHRD_OCLA_CTI_DEVARCH -1,-1,-1,-1

/**
 * Register (NCB32b) cst_shrd_ocla_cti_devid
 *
 * CST Shrd Ocla Cti Devid Register
 * This register is IMPLEMENTATION DEFINED for each Part Number and Designer. The
 * register indicates the capabilities of the component.
 */
union cavm_cst_shrd_ocla_cti_devid
{
    uint32_t u;
    struct cavm_cst_shrd_ocla_cti_devid_s
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
    /* struct cavm_cst_shrd_ocla_cti_devid_s cn; */
};
typedef union cavm_cst_shrd_ocla_cti_devid cavm_cst_shrd_ocla_cti_devid_t;

#define CAVM_CST_SHRD_OCLA_CTI_DEVID CAVM_CST_SHRD_OCLA_CTI_DEVID_FUNC()
static inline uint64_t CAVM_CST_SHRD_OCLA_CTI_DEVID_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_CST_SHRD_OCLA_CTI_DEVID_FUNC(void)
{
    return 0x87a100010fc8ll;
}

#define typedef_CAVM_CST_SHRD_OCLA_CTI_DEVID cavm_cst_shrd_ocla_cti_devid_t
#define bustype_CAVM_CST_SHRD_OCLA_CTI_DEVID CSR_TYPE_NCB32b
#define basename_CAVM_CST_SHRD_OCLA_CTI_DEVID "CST_SHRD_OCLA_CTI_DEVID"
#define busnum_CAVM_CST_SHRD_OCLA_CTI_DEVID 0
#define arguments_CAVM_CST_SHRD_OCLA_CTI_DEVID -1,-1,-1,-1

/**
 * Register (NCB32b) cst_shrd_ocla_cti_devtype
 *
 * CST Shrd Ocla Cti Devtype Register
 * A debugger can use this register to get information about a component that has an
 * unrecognized Part number.
 */
union cavm_cst_shrd_ocla_cti_devtype
{
    uint32_t u;
    struct cavm_cst_shrd_ocla_cti_devtype_s
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
    /* struct cavm_cst_shrd_ocla_cti_devtype_s cn; */
};
typedef union cavm_cst_shrd_ocla_cti_devtype cavm_cst_shrd_ocla_cti_devtype_t;

#define CAVM_CST_SHRD_OCLA_CTI_DEVTYPE CAVM_CST_SHRD_OCLA_CTI_DEVTYPE_FUNC()
static inline uint64_t CAVM_CST_SHRD_OCLA_CTI_DEVTYPE_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_CST_SHRD_OCLA_CTI_DEVTYPE_FUNC(void)
{
    return 0x87a100010fccll;
}

#define typedef_CAVM_CST_SHRD_OCLA_CTI_DEVTYPE cavm_cst_shrd_ocla_cti_devtype_t
#define bustype_CAVM_CST_SHRD_OCLA_CTI_DEVTYPE CSR_TYPE_NCB32b
#define basename_CAVM_CST_SHRD_OCLA_CTI_DEVTYPE "CST_SHRD_OCLA_CTI_DEVTYPE"
#define busnum_CAVM_CST_SHRD_OCLA_CTI_DEVTYPE 0
#define arguments_CAVM_CST_SHRD_OCLA_CTI_DEVTYPE -1,-1,-1,-1

/**
 * Register (NCB32b) cst_shrd_ocla_cti_itchin
 *
 * CST Shrd Ocla Cti Itchin Register
 * Integration test to view channel events. The integration test register includes a
 * latch that is set when a pulse is received on a channel input. When read, a register
 * bit reads as 1 if the channel has received a pulse since it was last read. The act
 * of reading the register automatically clears the 1 to a 0. When performing
 * integration testing it is therefore important to coordinate the setting of event
 * latches and reading/clearing them.
 */
union cavm_cst_shrd_ocla_cti_itchin
{
    uint32_t u;
    struct cavm_cst_shrd_ocla_cti_itchin_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t sbz_0                 : 28; /**< [ 31:  4](RO) Software should write the field as all 0s. */
        uint32_t ctichin               : 4;  /**< [  3:  0](RO) Reads the latched value of the channel inputs. */
#else /* Word 0 - Little Endian */
        uint32_t ctichin               : 4;  /**< [  3:  0](RO) Reads the latched value of the channel inputs. */
        uint32_t sbz_0                 : 28; /**< [ 31:  4](RO) Software should write the field as all 0s. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_cst_shrd_ocla_cti_itchin_s cn; */
};
typedef union cavm_cst_shrd_ocla_cti_itchin cavm_cst_shrd_ocla_cti_itchin_t;

#define CAVM_CST_SHRD_OCLA_CTI_ITCHIN CAVM_CST_SHRD_OCLA_CTI_ITCHIN_FUNC()
static inline uint64_t CAVM_CST_SHRD_OCLA_CTI_ITCHIN_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_CST_SHRD_OCLA_CTI_ITCHIN_FUNC(void)
{
    return 0x87a100010ef4ll;
}

#define typedef_CAVM_CST_SHRD_OCLA_CTI_ITCHIN cavm_cst_shrd_ocla_cti_itchin_t
#define bustype_CAVM_CST_SHRD_OCLA_CTI_ITCHIN CSR_TYPE_NCB32b
#define basename_CAVM_CST_SHRD_OCLA_CTI_ITCHIN "CST_SHRD_OCLA_CTI_ITCHIN"
#define busnum_CAVM_CST_SHRD_OCLA_CTI_ITCHIN 0
#define arguments_CAVM_CST_SHRD_OCLA_CTI_ITCHIN -1,-1,-1,-1

/**
 * Register (NCB32b) cst_shrd_ocla_cti_itchout
 *
 * CST Shrd Ocla Cti Itchout Register
 * Integration test mode register, used to generate channel events. Writing to the
 * register creates a single pulse on the output. ITCHOUT is self-clearing.
 */
union cavm_cst_shrd_ocla_cti_itchout
{
    uint32_t u;
    struct cavm_cst_shrd_ocla_cti_itchout_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t sbz_0                 : 28; /**< [ 31:  4](R/W) Software should write the field as all 0s. */
        uint32_t ctichout              : 4;  /**< [  3:  0](R/W) Pulses the channel outputs. */
#else /* Word 0 - Little Endian */
        uint32_t ctichout              : 4;  /**< [  3:  0](R/W) Pulses the channel outputs. */
        uint32_t sbz_0                 : 28; /**< [ 31:  4](R/W) Software should write the field as all 0s. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_cst_shrd_ocla_cti_itchout_s cn; */
};
typedef union cavm_cst_shrd_ocla_cti_itchout cavm_cst_shrd_ocla_cti_itchout_t;

#define CAVM_CST_SHRD_OCLA_CTI_ITCHOUT CAVM_CST_SHRD_OCLA_CTI_ITCHOUT_FUNC()
static inline uint64_t CAVM_CST_SHRD_OCLA_CTI_ITCHOUT_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_CST_SHRD_OCLA_CTI_ITCHOUT_FUNC(void)
{
    return 0x87a100010ee4ll;
}

#define typedef_CAVM_CST_SHRD_OCLA_CTI_ITCHOUT cavm_cst_shrd_ocla_cti_itchout_t
#define bustype_CAVM_CST_SHRD_OCLA_CTI_ITCHOUT CSR_TYPE_NCB32b
#define basename_CAVM_CST_SHRD_OCLA_CTI_ITCHOUT "CST_SHRD_OCLA_CTI_ITCHOUT"
#define busnum_CAVM_CST_SHRD_OCLA_CTI_ITCHOUT 0
#define arguments_CAVM_CST_SHRD_OCLA_CTI_ITCHOUT -1,-1,-1,-1

/**
 * Register (NCB32b) cst_shrd_ocla_cti_itctrl
 *
 * CST Shrd Ocla Cti Itctrl Register
 * The Integration Mode Control register is used to enable topology detection.
 */
union cavm_cst_shrd_ocla_cti_itctrl
{
    uint32_t u;
    struct cavm_cst_shrd_ocla_cti_itctrl_s
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
    /* struct cavm_cst_shrd_ocla_cti_itctrl_s cn; */
};
typedef union cavm_cst_shrd_ocla_cti_itctrl cavm_cst_shrd_ocla_cti_itctrl_t;

#define CAVM_CST_SHRD_OCLA_CTI_ITCTRL CAVM_CST_SHRD_OCLA_CTI_ITCTRL_FUNC()
static inline uint64_t CAVM_CST_SHRD_OCLA_CTI_ITCTRL_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_CST_SHRD_OCLA_CTI_ITCTRL_FUNC(void)
{
    return 0x87a100010f00ll;
}

#define typedef_CAVM_CST_SHRD_OCLA_CTI_ITCTRL cavm_cst_shrd_ocla_cti_itctrl_t
#define bustype_CAVM_CST_SHRD_OCLA_CTI_ITCTRL CSR_TYPE_NCB32b
#define basename_CAVM_CST_SHRD_OCLA_CTI_ITCTRL "CST_SHRD_OCLA_CTI_ITCTRL"
#define busnum_CAVM_CST_SHRD_OCLA_CTI_ITCTRL 0
#define arguments_CAVM_CST_SHRD_OCLA_CTI_ITCTRL -1,-1,-1,-1

/**
 * Register (NCB32b) cst_shrd_ocla_cti_ittrigin
 *
 * CST Shrd Ocla Cti Ittrigin Register
 * Integration test to view trigger events. The integration test register includes a
 * latch that is set when a pulse is received on a trigger input. When read, a register
 * bit reads as 1 if the trigger input has received a pulse since it was last read. The
 * act of reading the register automatically clears the 1 to a 0. When performing
 * integration testing it is therefore important to coordinate the setting of event
 * latches and reading/clearing them.
 */
union cavm_cst_shrd_ocla_cti_ittrigin
{
    uint32_t u;
    struct cavm_cst_shrd_ocla_cti_ittrigin_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t ctitrigin             : 32; /**< [ 31:  0](RO) Reads the latched value of the trigger inputs. */
#else /* Word 0 - Little Endian */
        uint32_t ctitrigin             : 32; /**< [ 31:  0](RO) Reads the latched value of the trigger inputs. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_cst_shrd_ocla_cti_ittrigin_s cn; */
};
typedef union cavm_cst_shrd_ocla_cti_ittrigin cavm_cst_shrd_ocla_cti_ittrigin_t;

#define CAVM_CST_SHRD_OCLA_CTI_ITTRIGIN CAVM_CST_SHRD_OCLA_CTI_ITTRIGIN_FUNC()
static inline uint64_t CAVM_CST_SHRD_OCLA_CTI_ITTRIGIN_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_CST_SHRD_OCLA_CTI_ITTRIGIN_FUNC(void)
{
    return 0x87a100010ef8ll;
}

#define typedef_CAVM_CST_SHRD_OCLA_CTI_ITTRIGIN cavm_cst_shrd_ocla_cti_ittrigin_t
#define bustype_CAVM_CST_SHRD_OCLA_CTI_ITTRIGIN CSR_TYPE_NCB32b
#define basename_CAVM_CST_SHRD_OCLA_CTI_ITTRIGIN "CST_SHRD_OCLA_CTI_ITTRIGIN"
#define busnum_CAVM_CST_SHRD_OCLA_CTI_ITTRIGIN 0
#define arguments_CAVM_CST_SHRD_OCLA_CTI_ITTRIGIN -1,-1,-1,-1

/**
 * Register (NCB32b) cst_shrd_ocla_cti_ittrigout
 *
 * CST Shrd Ocla Cti Ittrigout Register
 * Integration test to generate trigger events.
 */
union cavm_cst_shrd_ocla_cti_ittrigout
{
    uint32_t u;
    struct cavm_cst_shrd_ocla_cti_ittrigout_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t ctitrigout            : 32; /**< [ 31:  0](R/W) Set/clear trigger output signal. Reads return the value in the register. Writes: */
#else /* Word 0 - Little Endian */
        uint32_t ctitrigout            : 32; /**< [ 31:  0](R/W) Set/clear trigger output signal. Reads return the value in the register. Writes: */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_cst_shrd_ocla_cti_ittrigout_s cn; */
};
typedef union cavm_cst_shrd_ocla_cti_ittrigout cavm_cst_shrd_ocla_cti_ittrigout_t;

#define CAVM_CST_SHRD_OCLA_CTI_ITTRIGOUT CAVM_CST_SHRD_OCLA_CTI_ITTRIGOUT_FUNC()
static inline uint64_t CAVM_CST_SHRD_OCLA_CTI_ITTRIGOUT_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_CST_SHRD_OCLA_CTI_ITTRIGOUT_FUNC(void)
{
    return 0x87a100010ee8ll;
}

#define typedef_CAVM_CST_SHRD_OCLA_CTI_ITTRIGOUT cavm_cst_shrd_ocla_cti_ittrigout_t
#define bustype_CAVM_CST_SHRD_OCLA_CTI_ITTRIGOUT CSR_TYPE_NCB32b
#define basename_CAVM_CST_SHRD_OCLA_CTI_ITTRIGOUT "CST_SHRD_OCLA_CTI_ITTRIGOUT"
#define busnum_CAVM_CST_SHRD_OCLA_CTI_ITTRIGOUT 0
#define arguments_CAVM_CST_SHRD_OCLA_CTI_ITTRIGOUT -1,-1,-1,-1

/**
 * Register (NCB32b) cst_shrd_ocla_cti_pidr0
 *
 * CST Shrd Ocla Cti Pidr0 Register
 * The PIDR0 register is part of the set of peripheral identification registers.
 */
union cavm_cst_shrd_ocla_cti_pidr0
{
    uint32_t u;
    struct cavm_cst_shrd_ocla_cti_pidr0_s
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
    /* struct cavm_cst_shrd_ocla_cti_pidr0_s cn; */
};
typedef union cavm_cst_shrd_ocla_cti_pidr0 cavm_cst_shrd_ocla_cti_pidr0_t;

#define CAVM_CST_SHRD_OCLA_CTI_PIDR0 CAVM_CST_SHRD_OCLA_CTI_PIDR0_FUNC()
static inline uint64_t CAVM_CST_SHRD_OCLA_CTI_PIDR0_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_CST_SHRD_OCLA_CTI_PIDR0_FUNC(void)
{
    return 0x87a100010fe0ll;
}

#define typedef_CAVM_CST_SHRD_OCLA_CTI_PIDR0 cavm_cst_shrd_ocla_cti_pidr0_t
#define bustype_CAVM_CST_SHRD_OCLA_CTI_PIDR0 CSR_TYPE_NCB32b
#define basename_CAVM_CST_SHRD_OCLA_CTI_PIDR0 "CST_SHRD_OCLA_CTI_PIDR0"
#define busnum_CAVM_CST_SHRD_OCLA_CTI_PIDR0 0
#define arguments_CAVM_CST_SHRD_OCLA_CTI_PIDR0 -1,-1,-1,-1

/**
 * Register (NCB32b) cst_shrd_ocla_cti_pidr1
 *
 * CST Shrd Ocla Cti Pidr1 Register
 * The PIDR1 register is part of the set of peripheral identification registers.
 */
union cavm_cst_shrd_ocla_cti_pidr1
{
    uint32_t u;
    struct cavm_cst_shrd_ocla_cti_pidr1_s
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
    /* struct cavm_cst_shrd_ocla_cti_pidr1_s cn; */
};
typedef union cavm_cst_shrd_ocla_cti_pidr1 cavm_cst_shrd_ocla_cti_pidr1_t;

#define CAVM_CST_SHRD_OCLA_CTI_PIDR1 CAVM_CST_SHRD_OCLA_CTI_PIDR1_FUNC()
static inline uint64_t CAVM_CST_SHRD_OCLA_CTI_PIDR1_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_CST_SHRD_OCLA_CTI_PIDR1_FUNC(void)
{
    return 0x87a100010fe4ll;
}

#define typedef_CAVM_CST_SHRD_OCLA_CTI_PIDR1 cavm_cst_shrd_ocla_cti_pidr1_t
#define bustype_CAVM_CST_SHRD_OCLA_CTI_PIDR1 CSR_TYPE_NCB32b
#define basename_CAVM_CST_SHRD_OCLA_CTI_PIDR1 "CST_SHRD_OCLA_CTI_PIDR1"
#define busnum_CAVM_CST_SHRD_OCLA_CTI_PIDR1 0
#define arguments_CAVM_CST_SHRD_OCLA_CTI_PIDR1 -1,-1,-1,-1

/**
 * Register (NCB32b) cst_shrd_ocla_cti_pidr2
 *
 * CST Shrd Ocla Cti Pidr2 Register
 * The PIDR2 register is part of the set of peripheral identification registers.
 */
union cavm_cst_shrd_ocla_cti_pidr2
{
    uint32_t u;
    struct cavm_cst_shrd_ocla_cti_pidr2_s
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
    /* struct cavm_cst_shrd_ocla_cti_pidr2_s cn; */
};
typedef union cavm_cst_shrd_ocla_cti_pidr2 cavm_cst_shrd_ocla_cti_pidr2_t;

#define CAVM_CST_SHRD_OCLA_CTI_PIDR2 CAVM_CST_SHRD_OCLA_CTI_PIDR2_FUNC()
static inline uint64_t CAVM_CST_SHRD_OCLA_CTI_PIDR2_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_CST_SHRD_OCLA_CTI_PIDR2_FUNC(void)
{
    return 0x87a100010fe8ll;
}

#define typedef_CAVM_CST_SHRD_OCLA_CTI_PIDR2 cavm_cst_shrd_ocla_cti_pidr2_t
#define bustype_CAVM_CST_SHRD_OCLA_CTI_PIDR2 CSR_TYPE_NCB32b
#define basename_CAVM_CST_SHRD_OCLA_CTI_PIDR2 "CST_SHRD_OCLA_CTI_PIDR2"
#define busnum_CAVM_CST_SHRD_OCLA_CTI_PIDR2 0
#define arguments_CAVM_CST_SHRD_OCLA_CTI_PIDR2 -1,-1,-1,-1

/**
 * Register (NCB32b) cst_shrd_ocla_cti_pidr3
 *
 * CST Shrd Ocla Cti Pidr3 Register
 * The PIDR3 register is part of the set of peripheral identification registers.
 */
union cavm_cst_shrd_ocla_cti_pidr3
{
    uint32_t u;
    struct cavm_cst_shrd_ocla_cti_pidr3_s
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
    /* struct cavm_cst_shrd_ocla_cti_pidr3_s cn; */
};
typedef union cavm_cst_shrd_ocla_cti_pidr3 cavm_cst_shrd_ocla_cti_pidr3_t;

#define CAVM_CST_SHRD_OCLA_CTI_PIDR3 CAVM_CST_SHRD_OCLA_CTI_PIDR3_FUNC()
static inline uint64_t CAVM_CST_SHRD_OCLA_CTI_PIDR3_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_CST_SHRD_OCLA_CTI_PIDR3_FUNC(void)
{
    return 0x87a100010fecll;
}

#define typedef_CAVM_CST_SHRD_OCLA_CTI_PIDR3 cavm_cst_shrd_ocla_cti_pidr3_t
#define bustype_CAVM_CST_SHRD_OCLA_CTI_PIDR3 CSR_TYPE_NCB32b
#define basename_CAVM_CST_SHRD_OCLA_CTI_PIDR3 "CST_SHRD_OCLA_CTI_PIDR3"
#define busnum_CAVM_CST_SHRD_OCLA_CTI_PIDR3 0
#define arguments_CAVM_CST_SHRD_OCLA_CTI_PIDR3 -1,-1,-1,-1

/**
 * Register (NCB32b) cst_shrd_ocla_cti_pidr4
 *
 * CST Shrd Ocla Cti Pidr4 Register
 * The PIDR4 register is part of the set of peripheral identification registers.
 */
union cavm_cst_shrd_ocla_cti_pidr4
{
    uint32_t u;
    struct cavm_cst_shrd_ocla_cti_pidr4_s
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
    /* struct cavm_cst_shrd_ocla_cti_pidr4_s cn; */
};
typedef union cavm_cst_shrd_ocla_cti_pidr4 cavm_cst_shrd_ocla_cti_pidr4_t;

#define CAVM_CST_SHRD_OCLA_CTI_PIDR4 CAVM_CST_SHRD_OCLA_CTI_PIDR4_FUNC()
static inline uint64_t CAVM_CST_SHRD_OCLA_CTI_PIDR4_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_CST_SHRD_OCLA_CTI_PIDR4_FUNC(void)
{
    return 0x87a100010fd0ll;
}

#define typedef_CAVM_CST_SHRD_OCLA_CTI_PIDR4 cavm_cst_shrd_ocla_cti_pidr4_t
#define bustype_CAVM_CST_SHRD_OCLA_CTI_PIDR4 CSR_TYPE_NCB32b
#define basename_CAVM_CST_SHRD_OCLA_CTI_PIDR4 "CST_SHRD_OCLA_CTI_PIDR4"
#define busnum_CAVM_CST_SHRD_OCLA_CTI_PIDR4 0
#define arguments_CAVM_CST_SHRD_OCLA_CTI_PIDR4 -1,-1,-1,-1

/**
 * Register (NCB32b) cst_shrd_ocla_cti_pidr5
 *
 * CST Shrd Ocla Cti Pidr5 Register
 * The PIDR5 register is part of the set of peripheral identification registers.
 */
union cavm_cst_shrd_ocla_cti_pidr5
{
    uint32_t u;
    struct cavm_cst_shrd_ocla_cti_pidr5_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t reserved_8_31         : 24;
        uint32_t pidr5                 : 8;  /**< [  7:  0](RO) Reserved. */
#else /* Word 0 - Little Endian */
        uint32_t pidr5                 : 8;  /**< [  7:  0](RO) Reserved. */
        uint32_t reserved_8_31         : 24;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_cst_shrd_ocla_cti_pidr5_s cn; */
};
typedef union cavm_cst_shrd_ocla_cti_pidr5 cavm_cst_shrd_ocla_cti_pidr5_t;

#define CAVM_CST_SHRD_OCLA_CTI_PIDR5 CAVM_CST_SHRD_OCLA_CTI_PIDR5_FUNC()
static inline uint64_t CAVM_CST_SHRD_OCLA_CTI_PIDR5_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_CST_SHRD_OCLA_CTI_PIDR5_FUNC(void)
{
    return 0x87a100010fd4ll;
}

#define typedef_CAVM_CST_SHRD_OCLA_CTI_PIDR5 cavm_cst_shrd_ocla_cti_pidr5_t
#define bustype_CAVM_CST_SHRD_OCLA_CTI_PIDR5 CSR_TYPE_NCB32b
#define basename_CAVM_CST_SHRD_OCLA_CTI_PIDR5 "CST_SHRD_OCLA_CTI_PIDR5"
#define busnum_CAVM_CST_SHRD_OCLA_CTI_PIDR5 0
#define arguments_CAVM_CST_SHRD_OCLA_CTI_PIDR5 -1,-1,-1,-1

/**
 * Register (NCB32b) cst_shrd_ocla_cti_pidr6
 *
 * CST Shrd Ocla Cti Pidr6 Register
 * The PIDR6 register is part of the set of peripheral identification registers.
 */
union cavm_cst_shrd_ocla_cti_pidr6
{
    uint32_t u;
    struct cavm_cst_shrd_ocla_cti_pidr6_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t reserved_8_31         : 24;
        uint32_t pidr6                 : 8;  /**< [  7:  0](RO) Reserved. */
#else /* Word 0 - Little Endian */
        uint32_t pidr6                 : 8;  /**< [  7:  0](RO) Reserved. */
        uint32_t reserved_8_31         : 24;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_cst_shrd_ocla_cti_pidr6_s cn; */
};
typedef union cavm_cst_shrd_ocla_cti_pidr6 cavm_cst_shrd_ocla_cti_pidr6_t;

#define CAVM_CST_SHRD_OCLA_CTI_PIDR6 CAVM_CST_SHRD_OCLA_CTI_PIDR6_FUNC()
static inline uint64_t CAVM_CST_SHRD_OCLA_CTI_PIDR6_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_CST_SHRD_OCLA_CTI_PIDR6_FUNC(void)
{
    return 0x87a100010fd8ll;
}

#define typedef_CAVM_CST_SHRD_OCLA_CTI_PIDR6 cavm_cst_shrd_ocla_cti_pidr6_t
#define bustype_CAVM_CST_SHRD_OCLA_CTI_PIDR6 CSR_TYPE_NCB32b
#define basename_CAVM_CST_SHRD_OCLA_CTI_PIDR6 "CST_SHRD_OCLA_CTI_PIDR6"
#define busnum_CAVM_CST_SHRD_OCLA_CTI_PIDR6 0
#define arguments_CAVM_CST_SHRD_OCLA_CTI_PIDR6 -1,-1,-1,-1

/**
 * Register (NCB32b) cst_shrd_ocla_cti_pidr7
 *
 * CST Shrd Ocla Cti Pidr7 Register
 * The PIDR7 register is part of the set of peripheral identification registers.
 */
union cavm_cst_shrd_ocla_cti_pidr7
{
    uint32_t u;
    struct cavm_cst_shrd_ocla_cti_pidr7_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t reserved_8_31         : 24;
        uint32_t pidr7                 : 8;  /**< [  7:  0](RO) Reserved. */
#else /* Word 0 - Little Endian */
        uint32_t pidr7                 : 8;  /**< [  7:  0](RO) Reserved. */
        uint32_t reserved_8_31         : 24;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_cst_shrd_ocla_cti_pidr7_s cn; */
};
typedef union cavm_cst_shrd_ocla_cti_pidr7 cavm_cst_shrd_ocla_cti_pidr7_t;

#define CAVM_CST_SHRD_OCLA_CTI_PIDR7 CAVM_CST_SHRD_OCLA_CTI_PIDR7_FUNC()
static inline uint64_t CAVM_CST_SHRD_OCLA_CTI_PIDR7_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_CST_SHRD_OCLA_CTI_PIDR7_FUNC(void)
{
    return 0x87a100010fdcll;
}

#define typedef_CAVM_CST_SHRD_OCLA_CTI_PIDR7 cavm_cst_shrd_ocla_cti_pidr7_t
#define bustype_CAVM_CST_SHRD_OCLA_CTI_PIDR7 CSR_TYPE_NCB32b
#define basename_CAVM_CST_SHRD_OCLA_CTI_PIDR7 "CST_SHRD_OCLA_CTI_PIDR7"
#define busnum_CAVM_CST_SHRD_OCLA_CTI_PIDR7 0
#define arguments_CAVM_CST_SHRD_OCLA_CTI_PIDR7 -1,-1,-1,-1

#endif /* __CAVM_CSRS_CST_SHRD_OCLA_CTI_H__ */
