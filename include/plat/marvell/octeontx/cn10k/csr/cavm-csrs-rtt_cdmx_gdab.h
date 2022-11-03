#ifndef __CAVM_CSRS_RTT_CDMX_GDAB_H__
#define __CAVM_CSRS_RTT_CDMX_GDAB_H__
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
 * OcteonTX RTT_CDMX_GDAB.
 *
 * This file is auto generated. Do not edit.
 *
 */

/**
 * Enumeration rtt_cdmx_gdab_bar_e
 *
 * RTT_CDMX_GDAB Base Address Register Enumeration
 * Enumerates the base address registers.
 */
#define CAVM_RTT_CDMX_GDAB_BAR_E_RTT_CDMX_GDABX_PF_BAR0(a) (0x80e040000000ll + 0x800000ll * (a))
#define CAVM_RTT_CDMX_GDAB_BAR_E_RTT_CDMX_GDABX_PF_BAR0_SIZE 0x40000000ull

/**
 * Register (NCB32b) r#tt_cg_cbp_rom#_authstatus
 *
 * RTT Cg Cbp Rom Authstatus Register
 * Reports the current status of the authentication control signals.
 */
union cavm_rxtt_cg_cbp_romx_authstatus
{
    uint32_t u;
    struct cavm_rxtt_cg_cbp_romx_authstatus_s
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
    /* struct cavm_rxtt_cg_cbp_romx_authstatus_s cn; */
};
typedef union cavm_rxtt_cg_cbp_romx_authstatus cavm_rxtt_cg_cbp_romx_authstatus_t;

static inline uint64_t CAVM_RXTT_CG_CBP_ROMX_AUTHSTATUS(uint64_t a, uint64_t b) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_RXTT_CG_CBP_ROMX_AUTHSTATUS(uint64_t a, uint64_t b)
{
    if (cavm_is_model(OCTEONTX_CNF10KB) && ((a<=7) && (b<=3)))
        return 0x80e041080fb8ll + 0x800000ll * ((a) & 0x7) + 0x80000ll * ((b) & 0x3);
    __cavm_csr_fatal("RXTT_CG_CBP_ROMX_AUTHSTATUS", 2, a, b, 0, 0, 0, 0);
}

#define typedef_CAVM_RXTT_CG_CBP_ROMX_AUTHSTATUS(a,b) cavm_rxtt_cg_cbp_romx_authstatus_t
#define bustype_CAVM_RXTT_CG_CBP_ROMX_AUTHSTATUS(a,b) CSR_TYPE_NCB32b
#define basename_CAVM_RXTT_CG_CBP_ROMX_AUTHSTATUS(a,b) "RXTT_CG_CBP_ROMX_AUTHSTATUS"
#define device_bar_CAVM_RXTT_CG_CBP_ROMX_AUTHSTATUS(a,b) 0x0 /* PF_BAR0 */
#define busnum_CAVM_RXTT_CG_CBP_ROMX_AUTHSTATUS(a,b) (a)
#define arguments_CAVM_RXTT_CG_CBP_ROMX_AUTHSTATUS(a,b) (a),(b),-1,-1

/**
 * Register (NCB32b) r#tt_cg_cbp_rom#_cidr0
 *
 * RTT Cg Cbp Rom Cidr0 Register
 * The CIDR0 register is part of the set of component identification registers.
 */
union cavm_rxtt_cg_cbp_romx_cidr0
{
    uint32_t u;
    struct cavm_rxtt_cg_cbp_romx_cidr0_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t reserved_8_31         : 24;
        uint32_t prmbl_0               : 8;  /**< [  7:  0](RO) Preamble. Returns 0x0D. */
#else /* Word 0 - Little Endian */
        uint32_t prmbl_0               : 8;  /**< [  7:  0](RO) Preamble. Returns 0x0D. */
        uint32_t reserved_8_31         : 24;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_rxtt_cg_cbp_romx_cidr0_s cn; */
};
typedef union cavm_rxtt_cg_cbp_romx_cidr0 cavm_rxtt_cg_cbp_romx_cidr0_t;

static inline uint64_t CAVM_RXTT_CG_CBP_ROMX_CIDR0(uint64_t a, uint64_t b) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_RXTT_CG_CBP_ROMX_CIDR0(uint64_t a, uint64_t b)
{
    if (cavm_is_model(OCTEONTX_CNF10KB) && ((a<=7) && (b<=3)))
        return 0x80e041080ff0ll + 0x800000ll * ((a) & 0x7) + 0x80000ll * ((b) & 0x3);
    __cavm_csr_fatal("RXTT_CG_CBP_ROMX_CIDR0", 2, a, b, 0, 0, 0, 0);
}

#define typedef_CAVM_RXTT_CG_CBP_ROMX_CIDR0(a,b) cavm_rxtt_cg_cbp_romx_cidr0_t
#define bustype_CAVM_RXTT_CG_CBP_ROMX_CIDR0(a,b) CSR_TYPE_NCB32b
#define basename_CAVM_RXTT_CG_CBP_ROMX_CIDR0(a,b) "RXTT_CG_CBP_ROMX_CIDR0"
#define device_bar_CAVM_RXTT_CG_CBP_ROMX_CIDR0(a,b) 0x0 /* PF_BAR0 */
#define busnum_CAVM_RXTT_CG_CBP_ROMX_CIDR0(a,b) (a)
#define arguments_CAVM_RXTT_CG_CBP_ROMX_CIDR0(a,b) (a),(b),-1,-1

/**
 * Register (NCB32b) r#tt_cg_cbp_rom#_cidr1
 *
 * RTT Cg Cbp Rom Cidr1 Register
 * The CIDR1 register is part of the set of component identification registers.
 */
union cavm_rxtt_cg_cbp_romx_cidr1
{
    uint32_t u;
    struct cavm_rxtt_cg_cbp_romx_cidr1_s
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
    /* struct cavm_rxtt_cg_cbp_romx_cidr1_s cn; */
};
typedef union cavm_rxtt_cg_cbp_romx_cidr1 cavm_rxtt_cg_cbp_romx_cidr1_t;

static inline uint64_t CAVM_RXTT_CG_CBP_ROMX_CIDR1(uint64_t a, uint64_t b) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_RXTT_CG_CBP_ROMX_CIDR1(uint64_t a, uint64_t b)
{
    if (cavm_is_model(OCTEONTX_CNF10KB) && ((a<=7) && (b<=3)))
        return 0x80e041080ff4ll + 0x800000ll * ((a) & 0x7) + 0x80000ll * ((b) & 0x3);
    __cavm_csr_fatal("RXTT_CG_CBP_ROMX_CIDR1", 2, a, b, 0, 0, 0, 0);
}

#define typedef_CAVM_RXTT_CG_CBP_ROMX_CIDR1(a,b) cavm_rxtt_cg_cbp_romx_cidr1_t
#define bustype_CAVM_RXTT_CG_CBP_ROMX_CIDR1(a,b) CSR_TYPE_NCB32b
#define basename_CAVM_RXTT_CG_CBP_ROMX_CIDR1(a,b) "RXTT_CG_CBP_ROMX_CIDR1"
#define device_bar_CAVM_RXTT_CG_CBP_ROMX_CIDR1(a,b) 0x0 /* PF_BAR0 */
#define busnum_CAVM_RXTT_CG_CBP_ROMX_CIDR1(a,b) (a)
#define arguments_CAVM_RXTT_CG_CBP_ROMX_CIDR1(a,b) (a),(b),-1,-1

/**
 * Register (NCB32b) r#tt_cg_cbp_rom#_cidr2
 *
 * RTT Cg Cbp Rom Cidr2 Register
 * The CIDR2 register is part of the set of component identification registers.
 */
union cavm_rxtt_cg_cbp_romx_cidr2
{
    uint32_t u;
    struct cavm_rxtt_cg_cbp_romx_cidr2_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t reserved_8_31         : 24;
        uint32_t prmbl_2               : 8;  /**< [  7:  0](RO) Preamble. Returns 0x05. */
#else /* Word 0 - Little Endian */
        uint32_t prmbl_2               : 8;  /**< [  7:  0](RO) Preamble. Returns 0x05. */
        uint32_t reserved_8_31         : 24;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_rxtt_cg_cbp_romx_cidr2_s cn; */
};
typedef union cavm_rxtt_cg_cbp_romx_cidr2 cavm_rxtt_cg_cbp_romx_cidr2_t;

static inline uint64_t CAVM_RXTT_CG_CBP_ROMX_CIDR2(uint64_t a, uint64_t b) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_RXTT_CG_CBP_ROMX_CIDR2(uint64_t a, uint64_t b)
{
    if (cavm_is_model(OCTEONTX_CNF10KB) && ((a<=7) && (b<=3)))
        return 0x80e041080ff8ll + 0x800000ll * ((a) & 0x7) + 0x80000ll * ((b) & 0x3);
    __cavm_csr_fatal("RXTT_CG_CBP_ROMX_CIDR2", 2, a, b, 0, 0, 0, 0);
}

#define typedef_CAVM_RXTT_CG_CBP_ROMX_CIDR2(a,b) cavm_rxtt_cg_cbp_romx_cidr2_t
#define bustype_CAVM_RXTT_CG_CBP_ROMX_CIDR2(a,b) CSR_TYPE_NCB32b
#define basename_CAVM_RXTT_CG_CBP_ROMX_CIDR2(a,b) "RXTT_CG_CBP_ROMX_CIDR2"
#define device_bar_CAVM_RXTT_CG_CBP_ROMX_CIDR2(a,b) 0x0 /* PF_BAR0 */
#define busnum_CAVM_RXTT_CG_CBP_ROMX_CIDR2(a,b) (a)
#define arguments_CAVM_RXTT_CG_CBP_ROMX_CIDR2(a,b) (a),(b),-1,-1

/**
 * Register (NCB32b) r#tt_cg_cbp_rom#_cidr3
 *
 * RTT Cg Cbp Rom Cidr3 Register
 * The CIDR3 register is part of the set of component identification registers.
 */
union cavm_rxtt_cg_cbp_romx_cidr3
{
    uint32_t u;
    struct cavm_rxtt_cg_cbp_romx_cidr3_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t reserved_8_31         : 24;
        uint32_t prmbl_3               : 8;  /**< [  7:  0](RO) Preamble. Returns 0xB1. */
#else /* Word 0 - Little Endian */
        uint32_t prmbl_3               : 8;  /**< [  7:  0](RO) Preamble. Returns 0xB1. */
        uint32_t reserved_8_31         : 24;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_rxtt_cg_cbp_romx_cidr3_s cn; */
};
typedef union cavm_rxtt_cg_cbp_romx_cidr3 cavm_rxtt_cg_cbp_romx_cidr3_t;

static inline uint64_t CAVM_RXTT_CG_CBP_ROMX_CIDR3(uint64_t a, uint64_t b) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_RXTT_CG_CBP_ROMX_CIDR3(uint64_t a, uint64_t b)
{
    if (cavm_is_model(OCTEONTX_CNF10KB) && ((a<=7) && (b<=3)))
        return 0x80e041080ffcll + 0x800000ll * ((a) & 0x7) + 0x80000ll * ((b) & 0x3);
    __cavm_csr_fatal("RXTT_CG_CBP_ROMX_CIDR3", 2, a, b, 0, 0, 0, 0);
}

#define typedef_CAVM_RXTT_CG_CBP_ROMX_CIDR3(a,b) cavm_rxtt_cg_cbp_romx_cidr3_t
#define bustype_CAVM_RXTT_CG_CBP_ROMX_CIDR3(a,b) CSR_TYPE_NCB32b
#define basename_CAVM_RXTT_CG_CBP_ROMX_CIDR3(a,b) "RXTT_CG_CBP_ROMX_CIDR3"
#define device_bar_CAVM_RXTT_CG_CBP_ROMX_CIDR3(a,b) 0x0 /* PF_BAR0 */
#define busnum_CAVM_RXTT_CG_CBP_ROMX_CIDR3(a,b) (a)
#define arguments_CAVM_RXTT_CG_CBP_ROMX_CIDR3(a,b) (a),(b),-1,-1

/**
 * Register (NCB32b) r#tt_cg_cbp_rom#_devarch
 *
 * RTT Cg Cbp Rom Devarch Register
 * Identifies the architect and architecture of a CoreSight component. The architect
 * might differ from the designer of a component, for example Arm defines the
 * architecture but another company designs and implements the component.
 */
union cavm_rxtt_cg_cbp_romx_devarch
{
    uint32_t u;
    struct cavm_rxtt_cg_cbp_romx_devarch_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t architect             : 11; /**< [ 31: 21](RO) Returns 0x23b, denoting Arm as architect of the component. */
        uint32_t present               : 1;  /**< [ 20: 20](RO) Returns 1, indicating that the DEVARCH register is present. */
        uint32_t revision              : 4;  /**< [ 19: 16](RO) Architecture revision. Returns the revision of the architecture that the ARCHID field specifies. */
        uint32_t archid                : 16; /**< [ 15:  0](RO) Architecture ID. Returns 0x0af7, identifying ROM Table Architecture v0. */
#else /* Word 0 - Little Endian */
        uint32_t archid                : 16; /**< [ 15:  0](RO) Architecture ID. Returns 0x0af7, identifying ROM Table Architecture v0. */
        uint32_t revision              : 4;  /**< [ 19: 16](RO) Architecture revision. Returns the revision of the architecture that the ARCHID field specifies. */
        uint32_t present               : 1;  /**< [ 20: 20](RO) Returns 1, indicating that the DEVARCH register is present. */
        uint32_t architect             : 11; /**< [ 31: 21](RO) Returns 0x23b, denoting Arm as architect of the component. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_rxtt_cg_cbp_romx_devarch_s cn; */
};
typedef union cavm_rxtt_cg_cbp_romx_devarch cavm_rxtt_cg_cbp_romx_devarch_t;

static inline uint64_t CAVM_RXTT_CG_CBP_ROMX_DEVARCH(uint64_t a, uint64_t b) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_RXTT_CG_CBP_ROMX_DEVARCH(uint64_t a, uint64_t b)
{
    if (cavm_is_model(OCTEONTX_CNF10KB) && ((a<=7) && (b<=3)))
        return 0x80e041080fbcll + 0x800000ll * ((a) & 0x7) + 0x80000ll * ((b) & 0x3);
    __cavm_csr_fatal("RXTT_CG_CBP_ROMX_DEVARCH", 2, a, b, 0, 0, 0, 0);
}

#define typedef_CAVM_RXTT_CG_CBP_ROMX_DEVARCH(a,b) cavm_rxtt_cg_cbp_romx_devarch_t
#define bustype_CAVM_RXTT_CG_CBP_ROMX_DEVARCH(a,b) CSR_TYPE_NCB32b
#define basename_CAVM_RXTT_CG_CBP_ROMX_DEVARCH(a,b) "RXTT_CG_CBP_ROMX_DEVARCH"
#define device_bar_CAVM_RXTT_CG_CBP_ROMX_DEVARCH(a,b) 0x0 /* PF_BAR0 */
#define busnum_CAVM_RXTT_CG_CBP_ROMX_DEVARCH(a,b) (a)
#define arguments_CAVM_RXTT_CG_CBP_ROMX_DEVARCH(a,b) (a),(b),-1,-1

/**
 * Register (NCB32b) r#tt_cg_cbp_rom#_devid
 *
 * RTT Cg Cbp Rom Devid Register
 * This register is IMPLEMENTATION DEFINED for each Part Number and Designer. The
 * register indicates the capabilities of the component.
 */
union cavm_rxtt_cg_cbp_romx_devid
{
    uint32_t u;
    struct cavm_rxtt_cg_cbp_romx_devid_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t reserved_6_31         : 26;
        uint32_t prr                   : 1;  /**< [  5:  5](RO) Indicates that power request functionality is included. Set by the GPR_PRESENT parameter. */
        uint32_t sysmem                : 1;  /**< [  4:  4](RO) Indicates whether system memory is present on the bus. Set by the SYSMEM parameter. */
        uint32_t reserved_3            : 1;
        uint32_t format                : 3;  /**< [  2:  0](RO) Indicates that this is a 32-bit ROM table. */
#else /* Word 0 - Little Endian */
        uint32_t format                : 3;  /**< [  2:  0](RO) Indicates that this is a 32-bit ROM table. */
        uint32_t reserved_3            : 1;
        uint32_t sysmem                : 1;  /**< [  4:  4](RO) Indicates whether system memory is present on the bus. Set by the SYSMEM parameter. */
        uint32_t prr                   : 1;  /**< [  5:  5](RO) Indicates that power request functionality is included. Set by the GPR_PRESENT parameter. */
        uint32_t reserved_6_31         : 26;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_rxtt_cg_cbp_romx_devid_s cn; */
};
typedef union cavm_rxtt_cg_cbp_romx_devid cavm_rxtt_cg_cbp_romx_devid_t;

static inline uint64_t CAVM_RXTT_CG_CBP_ROMX_DEVID(uint64_t a, uint64_t b) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_RXTT_CG_CBP_ROMX_DEVID(uint64_t a, uint64_t b)
{
    if (cavm_is_model(OCTEONTX_CNF10KB) && ((a<=7) && (b<=3)))
        return 0x80e041080fc8ll + 0x800000ll * ((a) & 0x7) + 0x80000ll * ((b) & 0x3);
    __cavm_csr_fatal("RXTT_CG_CBP_ROMX_DEVID", 2, a, b, 0, 0, 0, 0);
}

#define typedef_CAVM_RXTT_CG_CBP_ROMX_DEVID(a,b) cavm_rxtt_cg_cbp_romx_devid_t
#define bustype_CAVM_RXTT_CG_CBP_ROMX_DEVID(a,b) CSR_TYPE_NCB32b
#define basename_CAVM_RXTT_CG_CBP_ROMX_DEVID(a,b) "RXTT_CG_CBP_ROMX_DEVID"
#define device_bar_CAVM_RXTT_CG_CBP_ROMX_DEVID(a,b) 0x0 /* PF_BAR0 */
#define busnum_CAVM_RXTT_CG_CBP_ROMX_DEVID(a,b) (a)
#define arguments_CAVM_RXTT_CG_CBP_ROMX_DEVID(a,b) (a),(b),-1,-1

/**
 * Register (NCB32b) r#tt_cg_cbp_rom#_pidr0
 *
 * RTT Cg Cbp Rom Pidr0 Register
 * The PIDR0 register is part of the set of peripheral identification registers.
 */
union cavm_rxtt_cg_cbp_romx_pidr0
{
    uint32_t u;
    struct cavm_rxtt_cg_cbp_romx_pidr0_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t reserved_8_31         : 24;
        uint32_t part_0                : 8;  /**< [  7:  0](RO) Part number, bits[7:0]. Set by the configuration inputs part_number[7:0] */
#else /* Word 0 - Little Endian */
        uint32_t part_0                : 8;  /**< [  7:  0](RO) Part number, bits[7:0]. Set by the configuration inputs part_number[7:0] */
        uint32_t reserved_8_31         : 24;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_rxtt_cg_cbp_romx_pidr0_s cn; */
};
typedef union cavm_rxtt_cg_cbp_romx_pidr0 cavm_rxtt_cg_cbp_romx_pidr0_t;

static inline uint64_t CAVM_RXTT_CG_CBP_ROMX_PIDR0(uint64_t a, uint64_t b) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_RXTT_CG_CBP_ROMX_PIDR0(uint64_t a, uint64_t b)
{
    if (cavm_is_model(OCTEONTX_CNF10KB) && ((a<=7) && (b<=3)))
        return 0x80e041080fe0ll + 0x800000ll * ((a) & 0x7) + 0x80000ll * ((b) & 0x3);
    __cavm_csr_fatal("RXTT_CG_CBP_ROMX_PIDR0", 2, a, b, 0, 0, 0, 0);
}

#define typedef_CAVM_RXTT_CG_CBP_ROMX_PIDR0(a,b) cavm_rxtt_cg_cbp_romx_pidr0_t
#define bustype_CAVM_RXTT_CG_CBP_ROMX_PIDR0(a,b) CSR_TYPE_NCB32b
#define basename_CAVM_RXTT_CG_CBP_ROMX_PIDR0(a,b) "RXTT_CG_CBP_ROMX_PIDR0"
#define device_bar_CAVM_RXTT_CG_CBP_ROMX_PIDR0(a,b) 0x0 /* PF_BAR0 */
#define busnum_CAVM_RXTT_CG_CBP_ROMX_PIDR0(a,b) (a)
#define arguments_CAVM_RXTT_CG_CBP_ROMX_PIDR0(a,b) (a),(b),-1,-1

/**
 * Register (NCB32b) r#tt_cg_cbp_rom#_pidr1
 *
 * RTT Cg Cbp Rom Pidr1 Register
 * The PIDR1 register is part of the set of peripheral identification registers.
 */
union cavm_rxtt_cg_cbp_romx_pidr1
{
    uint32_t u;
    struct cavm_rxtt_cg_cbp_romx_pidr1_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t reserved_8_31         : 24;
        uint32_t des_0                 : 4;  /**< [  7:  4](RO) JEP106 identification code, bits[3:0]. Set by the configuration inputs
                                                                 jep106_id[3:0]. Together, with PIDR4.DES_2 and PIDR2.DES_1, they indicate the
                                                                 designer of the component and not the implementer, except where the two are the
                                                                 same. */
        uint32_t part_1                : 4;  /**< [  3:  0](RO) Part number, bits[11:8]. Set by the configuration inputs part_number[11:8]. */
#else /* Word 0 - Little Endian */
        uint32_t part_1                : 4;  /**< [  3:  0](RO) Part number, bits[11:8]. Set by the configuration inputs part_number[11:8]. */
        uint32_t des_0                 : 4;  /**< [  7:  4](RO) JEP106 identification code, bits[3:0]. Set by the configuration inputs
                                                                 jep106_id[3:0]. Together, with PIDR4.DES_2 and PIDR2.DES_1, they indicate the
                                                                 designer of the component and not the implementer, except where the two are the
                                                                 same. */
        uint32_t reserved_8_31         : 24;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_rxtt_cg_cbp_romx_pidr1_s cn; */
};
typedef union cavm_rxtt_cg_cbp_romx_pidr1 cavm_rxtt_cg_cbp_romx_pidr1_t;

static inline uint64_t CAVM_RXTT_CG_CBP_ROMX_PIDR1(uint64_t a, uint64_t b) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_RXTT_CG_CBP_ROMX_PIDR1(uint64_t a, uint64_t b)
{
    if (cavm_is_model(OCTEONTX_CNF10KB) && ((a<=7) && (b<=3)))
        return 0x80e041080fe4ll + 0x800000ll * ((a) & 0x7) + 0x80000ll * ((b) & 0x3);
    __cavm_csr_fatal("RXTT_CG_CBP_ROMX_PIDR1", 2, a, b, 0, 0, 0, 0);
}

#define typedef_CAVM_RXTT_CG_CBP_ROMX_PIDR1(a,b) cavm_rxtt_cg_cbp_romx_pidr1_t
#define bustype_CAVM_RXTT_CG_CBP_ROMX_PIDR1(a,b) CSR_TYPE_NCB32b
#define basename_CAVM_RXTT_CG_CBP_ROMX_PIDR1(a,b) "RXTT_CG_CBP_ROMX_PIDR1"
#define device_bar_CAVM_RXTT_CG_CBP_ROMX_PIDR1(a,b) 0x0 /* PF_BAR0 */
#define busnum_CAVM_RXTT_CG_CBP_ROMX_PIDR1(a,b) (a)
#define arguments_CAVM_RXTT_CG_CBP_ROMX_PIDR1(a,b) (a),(b),-1,-1

/**
 * Register (NCB32b) r#tt_cg_cbp_rom#_pidr2
 *
 * RTT Cg Cbp Rom Pidr2 Register
 * The PIDR2 register is part of the set of peripheral identification registers.
 */
union cavm_rxtt_cg_cbp_romx_pidr2
{
    uint32_t u;
    struct cavm_rxtt_cg_cbp_romx_pidr2_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t reserved_8_31         : 24;
        uint32_t revision              : 4;  /**< [  7:  4](RO) Revision. Set by the configuration inputs revision[3:0]. */
        uint32_t jedec                 : 1;  /**< [  3:  3](RO) 1 - Always set. Indicates that a JEDEC assigned value is used. */
        uint32_t des_1                 : 3;  /**< [  2:  0](RO) JEP106 identification code, bits[6:4]. Set by the configuration inputs
                                                                 jep106_id[6:4]. Together, with PIDR4.DES_2 and PIDR1.DES_0, they indicate the
                                                                 designer of the component and not the implementer, except where the two are the
                                                                 same. */
#else /* Word 0 - Little Endian */
        uint32_t des_1                 : 3;  /**< [  2:  0](RO) JEP106 identification code, bits[6:4]. Set by the configuration inputs
                                                                 jep106_id[6:4]. Together, with PIDR4.DES_2 and PIDR1.DES_0, they indicate the
                                                                 designer of the component and not the implementer, except where the two are the
                                                                 same. */
        uint32_t jedec                 : 1;  /**< [  3:  3](RO) 1 - Always set. Indicates that a JEDEC assigned value is used. */
        uint32_t revision              : 4;  /**< [  7:  4](RO) Revision. Set by the configuration inputs revision[3:0]. */
        uint32_t reserved_8_31         : 24;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_rxtt_cg_cbp_romx_pidr2_s cn; */
};
typedef union cavm_rxtt_cg_cbp_romx_pidr2 cavm_rxtt_cg_cbp_romx_pidr2_t;

static inline uint64_t CAVM_RXTT_CG_CBP_ROMX_PIDR2(uint64_t a, uint64_t b) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_RXTT_CG_CBP_ROMX_PIDR2(uint64_t a, uint64_t b)
{
    if (cavm_is_model(OCTEONTX_CNF10KB) && ((a<=7) && (b<=3)))
        return 0x80e041080fe8ll + 0x800000ll * ((a) & 0x7) + 0x80000ll * ((b) & 0x3);
    __cavm_csr_fatal("RXTT_CG_CBP_ROMX_PIDR2", 2, a, b, 0, 0, 0, 0);
}

#define typedef_CAVM_RXTT_CG_CBP_ROMX_PIDR2(a,b) cavm_rxtt_cg_cbp_romx_pidr2_t
#define bustype_CAVM_RXTT_CG_CBP_ROMX_PIDR2(a,b) CSR_TYPE_NCB32b
#define basename_CAVM_RXTT_CG_CBP_ROMX_PIDR2(a,b) "RXTT_CG_CBP_ROMX_PIDR2"
#define device_bar_CAVM_RXTT_CG_CBP_ROMX_PIDR2(a,b) 0x0 /* PF_BAR0 */
#define busnum_CAVM_RXTT_CG_CBP_ROMX_PIDR2(a,b) (a)
#define arguments_CAVM_RXTT_CG_CBP_ROMX_PIDR2(a,b) (a),(b),-1,-1

/**
 * Register (NCB32b) r#tt_cg_cbp_rom#_pidr3
 *
 * RTT Cg Cbp Rom Pidr3 Register
 * The PIDR3 register is part of the set of peripheral identification registers.
 */
union cavm_rxtt_cg_cbp_romx_pidr3
{
    uint32_t u;
    struct cavm_rxtt_cg_cbp_romx_pidr3_s
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
    /* struct cavm_rxtt_cg_cbp_romx_pidr3_s cn; */
};
typedef union cavm_rxtt_cg_cbp_romx_pidr3 cavm_rxtt_cg_cbp_romx_pidr3_t;

static inline uint64_t CAVM_RXTT_CG_CBP_ROMX_PIDR3(uint64_t a, uint64_t b) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_RXTT_CG_CBP_ROMX_PIDR3(uint64_t a, uint64_t b)
{
    if (cavm_is_model(OCTEONTX_CNF10KB) && ((a<=7) && (b<=3)))
        return 0x80e041080fecll + 0x800000ll * ((a) & 0x7) + 0x80000ll * ((b) & 0x3);
    __cavm_csr_fatal("RXTT_CG_CBP_ROMX_PIDR3", 2, a, b, 0, 0, 0, 0);
}

#define typedef_CAVM_RXTT_CG_CBP_ROMX_PIDR3(a,b) cavm_rxtt_cg_cbp_romx_pidr3_t
#define bustype_CAVM_RXTT_CG_CBP_ROMX_PIDR3(a,b) CSR_TYPE_NCB32b
#define basename_CAVM_RXTT_CG_CBP_ROMX_PIDR3(a,b) "RXTT_CG_CBP_ROMX_PIDR3"
#define device_bar_CAVM_RXTT_CG_CBP_ROMX_PIDR3(a,b) 0x0 /* PF_BAR0 */
#define busnum_CAVM_RXTT_CG_CBP_ROMX_PIDR3(a,b) (a)
#define arguments_CAVM_RXTT_CG_CBP_ROMX_PIDR3(a,b) (a),(b),-1,-1

/**
 * Register (NCB32b) r#tt_cg_cbp_rom#_pidr4
 *
 * RTT Cg Cbp Rom Pidr4 Register
 * The PIDR4 register is part of the set of peripheral identification registers.
 */
union cavm_rxtt_cg_cbp_romx_pidr4
{
    uint32_t u;
    struct cavm_rxtt_cg_cbp_romx_pidr4_s
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
    /* struct cavm_rxtt_cg_cbp_romx_pidr4_s cn; */
};
typedef union cavm_rxtt_cg_cbp_romx_pidr4 cavm_rxtt_cg_cbp_romx_pidr4_t;

static inline uint64_t CAVM_RXTT_CG_CBP_ROMX_PIDR4(uint64_t a, uint64_t b) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_RXTT_CG_CBP_ROMX_PIDR4(uint64_t a, uint64_t b)
{
    if (cavm_is_model(OCTEONTX_CNF10KB) && ((a<=7) && (b<=3)))
        return 0x80e041080fd0ll + 0x800000ll * ((a) & 0x7) + 0x80000ll * ((b) & 0x3);
    __cavm_csr_fatal("RXTT_CG_CBP_ROMX_PIDR4", 2, a, b, 0, 0, 0, 0);
}

#define typedef_CAVM_RXTT_CG_CBP_ROMX_PIDR4(a,b) cavm_rxtt_cg_cbp_romx_pidr4_t
#define bustype_CAVM_RXTT_CG_CBP_ROMX_PIDR4(a,b) CSR_TYPE_NCB32b
#define basename_CAVM_RXTT_CG_CBP_ROMX_PIDR4(a,b) "RXTT_CG_CBP_ROMX_PIDR4"
#define device_bar_CAVM_RXTT_CG_CBP_ROMX_PIDR4(a,b) 0x0 /* PF_BAR0 */
#define busnum_CAVM_RXTT_CG_CBP_ROMX_PIDR4(a,b) (a)
#define arguments_CAVM_RXTT_CG_CBP_ROMX_PIDR4(a,b) (a),(b),-1,-1

/**
 * Register (NCB32b) r#tt_cg_cbp_rom#_pidr5
 *
 * RTT Cg Cbp Rom Pidr5 Register
 * The PIDR5 register is part of the set of peripheral identification registers.
 */
union cavm_rxtt_cg_cbp_romx_pidr5
{
    uint32_t u;
    struct cavm_rxtt_cg_cbp_romx_pidr5_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t reserved_8_31         : 24;
        uint32_t pidr5                 : 8;  /**< [  7:  0](RO) Reserved. */
#else /* Word 0 - Little Endian */
        uint32_t pidr5                 : 8;  /**< [  7:  0](RO) Reserved. */
        uint32_t reserved_8_31         : 24;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_rxtt_cg_cbp_romx_pidr5_s cn; */
};
typedef union cavm_rxtt_cg_cbp_romx_pidr5 cavm_rxtt_cg_cbp_romx_pidr5_t;

static inline uint64_t CAVM_RXTT_CG_CBP_ROMX_PIDR5(uint64_t a, uint64_t b) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_RXTT_CG_CBP_ROMX_PIDR5(uint64_t a, uint64_t b)
{
    if (cavm_is_model(OCTEONTX_CNF10KB) && ((a<=7) && (b<=3)))
        return 0x80e041080fd4ll + 0x800000ll * ((a) & 0x7) + 0x80000ll * ((b) & 0x3);
    __cavm_csr_fatal("RXTT_CG_CBP_ROMX_PIDR5", 2, a, b, 0, 0, 0, 0);
}

#define typedef_CAVM_RXTT_CG_CBP_ROMX_PIDR5(a,b) cavm_rxtt_cg_cbp_romx_pidr5_t
#define bustype_CAVM_RXTT_CG_CBP_ROMX_PIDR5(a,b) CSR_TYPE_NCB32b
#define basename_CAVM_RXTT_CG_CBP_ROMX_PIDR5(a,b) "RXTT_CG_CBP_ROMX_PIDR5"
#define device_bar_CAVM_RXTT_CG_CBP_ROMX_PIDR5(a,b) 0x0 /* PF_BAR0 */
#define busnum_CAVM_RXTT_CG_CBP_ROMX_PIDR5(a,b) (a)
#define arguments_CAVM_RXTT_CG_CBP_ROMX_PIDR5(a,b) (a),(b),-1,-1

/**
 * Register (NCB32b) r#tt_cg_cbp_rom#_pidr6
 *
 * RTT Cg Cbp Rom Pidr6 Register
 * The PIDR6 register is part of the set of peripheral identification registers.
 */
union cavm_rxtt_cg_cbp_romx_pidr6
{
    uint32_t u;
    struct cavm_rxtt_cg_cbp_romx_pidr6_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t reserved_8_31         : 24;
        uint32_t pidr6                 : 8;  /**< [  7:  0](RO) Reserved. */
#else /* Word 0 - Little Endian */
        uint32_t pidr6                 : 8;  /**< [  7:  0](RO) Reserved. */
        uint32_t reserved_8_31         : 24;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_rxtt_cg_cbp_romx_pidr6_s cn; */
};
typedef union cavm_rxtt_cg_cbp_romx_pidr6 cavm_rxtt_cg_cbp_romx_pidr6_t;

static inline uint64_t CAVM_RXTT_CG_CBP_ROMX_PIDR6(uint64_t a, uint64_t b) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_RXTT_CG_CBP_ROMX_PIDR6(uint64_t a, uint64_t b)
{
    if (cavm_is_model(OCTEONTX_CNF10KB) && ((a<=7) && (b<=3)))
        return 0x80e041080fd8ll + 0x800000ll * ((a) & 0x7) + 0x80000ll * ((b) & 0x3);
    __cavm_csr_fatal("RXTT_CG_CBP_ROMX_PIDR6", 2, a, b, 0, 0, 0, 0);
}

#define typedef_CAVM_RXTT_CG_CBP_ROMX_PIDR6(a,b) cavm_rxtt_cg_cbp_romx_pidr6_t
#define bustype_CAVM_RXTT_CG_CBP_ROMX_PIDR6(a,b) CSR_TYPE_NCB32b
#define basename_CAVM_RXTT_CG_CBP_ROMX_PIDR6(a,b) "RXTT_CG_CBP_ROMX_PIDR6"
#define device_bar_CAVM_RXTT_CG_CBP_ROMX_PIDR6(a,b) 0x0 /* PF_BAR0 */
#define busnum_CAVM_RXTT_CG_CBP_ROMX_PIDR6(a,b) (a)
#define arguments_CAVM_RXTT_CG_CBP_ROMX_PIDR6(a,b) (a),(b),-1,-1

/**
 * Register (NCB32b) r#tt_cg_cbp_rom#_pidr7
 *
 * RTT Cg Cbp Rom Pidr7 Register
 * The PIDR7 register is part of the set of peripheral identification registers.
 */
union cavm_rxtt_cg_cbp_romx_pidr7
{
    uint32_t u;
    struct cavm_rxtt_cg_cbp_romx_pidr7_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t reserved_8_31         : 24;
        uint32_t pidr7                 : 8;  /**< [  7:  0](RO) Reserved. */
#else /* Word 0 - Little Endian */
        uint32_t pidr7                 : 8;  /**< [  7:  0](RO) Reserved. */
        uint32_t reserved_8_31         : 24;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_rxtt_cg_cbp_romx_pidr7_s cn; */
};
typedef union cavm_rxtt_cg_cbp_romx_pidr7 cavm_rxtt_cg_cbp_romx_pidr7_t;

static inline uint64_t CAVM_RXTT_CG_CBP_ROMX_PIDR7(uint64_t a, uint64_t b) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_RXTT_CG_CBP_ROMX_PIDR7(uint64_t a, uint64_t b)
{
    if (cavm_is_model(OCTEONTX_CNF10KB) && ((a<=7) && (b<=3)))
        return 0x80e041080fdcll + 0x800000ll * ((a) & 0x7) + 0x80000ll * ((b) & 0x3);
    __cavm_csr_fatal("RXTT_CG_CBP_ROMX_PIDR7", 2, a, b, 0, 0, 0, 0);
}

#define typedef_CAVM_RXTT_CG_CBP_ROMX_PIDR7(a,b) cavm_rxtt_cg_cbp_romx_pidr7_t
#define bustype_CAVM_RXTT_CG_CBP_ROMX_PIDR7(a,b) CSR_TYPE_NCB32b
#define basename_CAVM_RXTT_CG_CBP_ROMX_PIDR7(a,b) "RXTT_CG_CBP_ROMX_PIDR7"
#define device_bar_CAVM_RXTT_CG_CBP_ROMX_PIDR7(a,b) 0x0 /* PF_BAR0 */
#define busnum_CAVM_RXTT_CG_CBP_ROMX_PIDR7(a,b) (a)
#define arguments_CAVM_RXTT_CG_CBP_ROMX_PIDR7(a,b) (a),(b),-1,-1

/**
 * Register (NCB32b) r#tt_cg_cbp_rom#_romentry#
 *
 * RTT Cg Cbp Rom Romentry Register
 * Each register contains a descripter of a CoreSight component in the system. All ROM
 * table entries conform to the same format.
 */
union cavm_rxtt_cg_cbp_romx_romentryx
{
    uint32_t u;
    struct cavm_rxtt_cg_cbp_romx_romentryx_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t base_addr             : 20; /**< [ 31: 12](RO) Base address of component. */
        uint32_t sbz_1                 : 3;  /**< [ 11:  9](RO) Software should write the field as all 0s. */
        uint32_t power_domain_id       : 5;  /**< [  8:  4](RO) Indicates the power domain ID of the component. Only valid if bit 2 is set. If
                                                                 bit 2 is clear then this field has a value of 0. Possible values are 0 to 31,
                                                                 representing the 32 DBGPWRUPREQ/ACK interface pins of the component. */
        uint32_t sbz_0                 : 1;  /**< [  3:  3](RO) Software should write the field as all 0s. */
        uint32_t power_domain_id_valid : 1;  /**< [  2:  2](RO) Indicates whether there is a power domain ID specified in the ROM table entry. */
        uint32_t present               : 2;  /**< [  1:  0](RO) Indicates whether the ROM table entry is present. */
#else /* Word 0 - Little Endian */
        uint32_t present               : 2;  /**< [  1:  0](RO) Indicates whether the ROM table entry is present. */
        uint32_t power_domain_id_valid : 1;  /**< [  2:  2](RO) Indicates whether there is a power domain ID specified in the ROM table entry. */
        uint32_t sbz_0                 : 1;  /**< [  3:  3](RO) Software should write the field as all 0s. */
        uint32_t power_domain_id       : 5;  /**< [  8:  4](RO) Indicates the power domain ID of the component. Only valid if bit 2 is set. If
                                                                 bit 2 is clear then this field has a value of 0. Possible values are 0 to 31,
                                                                 representing the 32 DBGPWRUPREQ/ACK interface pins of the component. */
        uint32_t sbz_1                 : 3;  /**< [ 11:  9](RO) Software should write the field as all 0s. */
        uint32_t base_addr             : 20; /**< [ 31: 12](RO) Base address of component. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_rxtt_cg_cbp_romx_romentryx_s cn; */
};
typedef union cavm_rxtt_cg_cbp_romx_romentryx cavm_rxtt_cg_cbp_romx_romentryx_t;

static inline uint64_t CAVM_RXTT_CG_CBP_ROMX_ROMENTRYX(uint64_t a, uint64_t b, uint64_t c) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_RXTT_CG_CBP_ROMX_ROMENTRYX(uint64_t a, uint64_t b, uint64_t c)
{
    if (cavm_is_model(OCTEONTX_CNF10KB) && ((a<=7) && (b<=3) && (c<=511)))
        return 0x80e041080000ll + 0x800000ll * ((a) & 0x7) + 0x80000ll * ((b) & 0x3) + 4ll * ((c) & 0x1ff);
    __cavm_csr_fatal("RXTT_CG_CBP_ROMX_ROMENTRYX", 3, a, b, c, 0, 0, 0);
}

#define typedef_CAVM_RXTT_CG_CBP_ROMX_ROMENTRYX(a,b,c) cavm_rxtt_cg_cbp_romx_romentryx_t
#define bustype_CAVM_RXTT_CG_CBP_ROMX_ROMENTRYX(a,b,c) CSR_TYPE_NCB32b
#define basename_CAVM_RXTT_CG_CBP_ROMX_ROMENTRYX(a,b,c) "RXTT_CG_CBP_ROMX_ROMENTRYX"
#define device_bar_CAVM_RXTT_CG_CBP_ROMX_ROMENTRYX(a,b,c) 0x0 /* PF_BAR0 */
#define busnum_CAVM_RXTT_CG_CBP_ROMX_ROMENTRYX(a,b,c) (a)
#define arguments_CAVM_RXTT_CG_CBP_ROMX_ROMENTRYX(a,b,c) (a),(b),(c),-1

#endif /* __CAVM_CSRS_RTT_CDMX_GDAB_H__ */
