#ifndef __CAVM_CSRS_RTT_CDMX_H__
#define __CAVM_CSRS_RTT_CDMX_H__
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
 * OcteonTX RTT_CDMX.
 *
 * This file is auto generated. Do not edit.
 *
 */

/**
 * Register (NCB32b) rtt_c_gdab_rom#_authstatus
 *
 * RTT C Gdab Rom Authstatus Register
 * Reports the current status of the authentication control signals.
 */
union cavm_rtt_c_gdab_romx_authstatus
{
    uint32_t u;
    struct cavm_rtt_c_gdab_romx_authstatus_s
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
    /* struct cavm_rtt_c_gdab_romx_authstatus_s cn; */
};
typedef union cavm_rtt_c_gdab_romx_authstatus cavm_rtt_c_gdab_romx_authstatus_t;

static inline uint64_t CAVM_RTT_C_GDAB_ROMX_AUTHSTATUS(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_RTT_C_GDAB_ROMX_AUTHSTATUS(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CNF10KB) && (a<=7))
        return 0x80e041000fb8ll + 0x800000ll * ((a) & 0x7);
    __cavm_csr_fatal("RTT_C_GDAB_ROMX_AUTHSTATUS", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_RTT_C_GDAB_ROMX_AUTHSTATUS(a) cavm_rtt_c_gdab_romx_authstatus_t
#define bustype_CAVM_RTT_C_GDAB_ROMX_AUTHSTATUS(a) CSR_TYPE_NCB32b
#define basename_CAVM_RTT_C_GDAB_ROMX_AUTHSTATUS(a) "RTT_C_GDAB_ROMX_AUTHSTATUS"
#define busnum_CAVM_RTT_C_GDAB_ROMX_AUTHSTATUS(a) (a)
#define arguments_CAVM_RTT_C_GDAB_ROMX_AUTHSTATUS(a) (a),-1,-1,-1

/**
 * Register (NCB32b) rtt_c_gdab_rom#_cidr0
 *
 * RTT C Gdab Rom Cidr0 Register
 * The CIDR0 register is part of the set of component identification registers.
 */
union cavm_rtt_c_gdab_romx_cidr0
{
    uint32_t u;
    struct cavm_rtt_c_gdab_romx_cidr0_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t reserved_8_31         : 24;
        uint32_t prmbl_0               : 8;  /**< [  7:  0](RO) Preamble. Returns 0x0D. */
#else /* Word 0 - Little Endian */
        uint32_t prmbl_0               : 8;  /**< [  7:  0](RO) Preamble. Returns 0x0D. */
        uint32_t reserved_8_31         : 24;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_rtt_c_gdab_romx_cidr0_s cn; */
};
typedef union cavm_rtt_c_gdab_romx_cidr0 cavm_rtt_c_gdab_romx_cidr0_t;

static inline uint64_t CAVM_RTT_C_GDAB_ROMX_CIDR0(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_RTT_C_GDAB_ROMX_CIDR0(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CNF10KB) && (a<=7))
        return 0x80e041000ff0ll + 0x800000ll * ((a) & 0x7);
    __cavm_csr_fatal("RTT_C_GDAB_ROMX_CIDR0", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_RTT_C_GDAB_ROMX_CIDR0(a) cavm_rtt_c_gdab_romx_cidr0_t
#define bustype_CAVM_RTT_C_GDAB_ROMX_CIDR0(a) CSR_TYPE_NCB32b
#define basename_CAVM_RTT_C_GDAB_ROMX_CIDR0(a) "RTT_C_GDAB_ROMX_CIDR0"
#define busnum_CAVM_RTT_C_GDAB_ROMX_CIDR0(a) (a)
#define arguments_CAVM_RTT_C_GDAB_ROMX_CIDR0(a) (a),-1,-1,-1

/**
 * Register (NCB32b) rtt_c_gdab_rom#_cidr1
 *
 * RTT C Gdab Rom Cidr1 Register
 * The CIDR1 register is part of the set of component identification registers.
 */
union cavm_rtt_c_gdab_romx_cidr1
{
    uint32_t u;
    struct cavm_rtt_c_gdab_romx_cidr1_s
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
    /* struct cavm_rtt_c_gdab_romx_cidr1_s cn; */
};
typedef union cavm_rtt_c_gdab_romx_cidr1 cavm_rtt_c_gdab_romx_cidr1_t;

static inline uint64_t CAVM_RTT_C_GDAB_ROMX_CIDR1(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_RTT_C_GDAB_ROMX_CIDR1(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CNF10KB) && (a<=7))
        return 0x80e041000ff4ll + 0x800000ll * ((a) & 0x7);
    __cavm_csr_fatal("RTT_C_GDAB_ROMX_CIDR1", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_RTT_C_GDAB_ROMX_CIDR1(a) cavm_rtt_c_gdab_romx_cidr1_t
#define bustype_CAVM_RTT_C_GDAB_ROMX_CIDR1(a) CSR_TYPE_NCB32b
#define basename_CAVM_RTT_C_GDAB_ROMX_CIDR1(a) "RTT_C_GDAB_ROMX_CIDR1"
#define busnum_CAVM_RTT_C_GDAB_ROMX_CIDR1(a) (a)
#define arguments_CAVM_RTT_C_GDAB_ROMX_CIDR1(a) (a),-1,-1,-1

/**
 * Register (NCB32b) rtt_c_gdab_rom#_cidr2
 *
 * RTT C Gdab Rom Cidr2 Register
 * The CIDR2 register is part of the set of component identification registers.
 */
union cavm_rtt_c_gdab_romx_cidr2
{
    uint32_t u;
    struct cavm_rtt_c_gdab_romx_cidr2_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t reserved_8_31         : 24;
        uint32_t prmbl_2               : 8;  /**< [  7:  0](RO) Preamble. Returns 0x05. */
#else /* Word 0 - Little Endian */
        uint32_t prmbl_2               : 8;  /**< [  7:  0](RO) Preamble. Returns 0x05. */
        uint32_t reserved_8_31         : 24;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_rtt_c_gdab_romx_cidr2_s cn; */
};
typedef union cavm_rtt_c_gdab_romx_cidr2 cavm_rtt_c_gdab_romx_cidr2_t;

static inline uint64_t CAVM_RTT_C_GDAB_ROMX_CIDR2(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_RTT_C_GDAB_ROMX_CIDR2(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CNF10KB) && (a<=7))
        return 0x80e041000ff8ll + 0x800000ll * ((a) & 0x7);
    __cavm_csr_fatal("RTT_C_GDAB_ROMX_CIDR2", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_RTT_C_GDAB_ROMX_CIDR2(a) cavm_rtt_c_gdab_romx_cidr2_t
#define bustype_CAVM_RTT_C_GDAB_ROMX_CIDR2(a) CSR_TYPE_NCB32b
#define basename_CAVM_RTT_C_GDAB_ROMX_CIDR2(a) "RTT_C_GDAB_ROMX_CIDR2"
#define busnum_CAVM_RTT_C_GDAB_ROMX_CIDR2(a) (a)
#define arguments_CAVM_RTT_C_GDAB_ROMX_CIDR2(a) (a),-1,-1,-1

/**
 * Register (NCB32b) rtt_c_gdab_rom#_cidr3
 *
 * RTT C Gdab Rom Cidr3 Register
 * The CIDR3 register is part of the set of component identification registers.
 */
union cavm_rtt_c_gdab_romx_cidr3
{
    uint32_t u;
    struct cavm_rtt_c_gdab_romx_cidr3_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t reserved_8_31         : 24;
        uint32_t prmbl_3               : 8;  /**< [  7:  0](RO) Preamble. Returns 0xB1. */
#else /* Word 0 - Little Endian */
        uint32_t prmbl_3               : 8;  /**< [  7:  0](RO) Preamble. Returns 0xB1. */
        uint32_t reserved_8_31         : 24;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_rtt_c_gdab_romx_cidr3_s cn; */
};
typedef union cavm_rtt_c_gdab_romx_cidr3 cavm_rtt_c_gdab_romx_cidr3_t;

static inline uint64_t CAVM_RTT_C_GDAB_ROMX_CIDR3(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_RTT_C_GDAB_ROMX_CIDR3(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CNF10KB) && (a<=7))
        return 0x80e041000ffcll + 0x800000ll * ((a) & 0x7);
    __cavm_csr_fatal("RTT_C_GDAB_ROMX_CIDR3", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_RTT_C_GDAB_ROMX_CIDR3(a) cavm_rtt_c_gdab_romx_cidr3_t
#define bustype_CAVM_RTT_C_GDAB_ROMX_CIDR3(a) CSR_TYPE_NCB32b
#define basename_CAVM_RTT_C_GDAB_ROMX_CIDR3(a) "RTT_C_GDAB_ROMX_CIDR3"
#define busnum_CAVM_RTT_C_GDAB_ROMX_CIDR3(a) (a)
#define arguments_CAVM_RTT_C_GDAB_ROMX_CIDR3(a) (a),-1,-1,-1

/**
 * Register (NCB32b) rtt_c_gdab_rom#_devarch
 *
 * RTT C Gdab Rom Devarch Register
 * Identifies the architect and architecture of a CoreSight component. The architect
 * might differ from the designer of a component, for example Arm defines the
 * architecture but another company designs and implements the component.
 */
union cavm_rtt_c_gdab_romx_devarch
{
    uint32_t u;
    struct cavm_rtt_c_gdab_romx_devarch_s
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
    /* struct cavm_rtt_c_gdab_romx_devarch_s cn; */
};
typedef union cavm_rtt_c_gdab_romx_devarch cavm_rtt_c_gdab_romx_devarch_t;

static inline uint64_t CAVM_RTT_C_GDAB_ROMX_DEVARCH(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_RTT_C_GDAB_ROMX_DEVARCH(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CNF10KB) && (a<=7))
        return 0x80e041000fbcll + 0x800000ll * ((a) & 0x7);
    __cavm_csr_fatal("RTT_C_GDAB_ROMX_DEVARCH", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_RTT_C_GDAB_ROMX_DEVARCH(a) cavm_rtt_c_gdab_romx_devarch_t
#define bustype_CAVM_RTT_C_GDAB_ROMX_DEVARCH(a) CSR_TYPE_NCB32b
#define basename_CAVM_RTT_C_GDAB_ROMX_DEVARCH(a) "RTT_C_GDAB_ROMX_DEVARCH"
#define busnum_CAVM_RTT_C_GDAB_ROMX_DEVARCH(a) (a)
#define arguments_CAVM_RTT_C_GDAB_ROMX_DEVARCH(a) (a),-1,-1,-1

/**
 * Register (NCB32b) rtt_c_gdab_rom#_devid
 *
 * RTT C Gdab Rom Devid Register
 * This register is IMPLEMENTATION DEFINED for each Part Number and Designer. The
 * register indicates the capabilities of the component.
 */
union cavm_rtt_c_gdab_romx_devid
{
    uint32_t u;
    struct cavm_rtt_c_gdab_romx_devid_s
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
    /* struct cavm_rtt_c_gdab_romx_devid_s cn; */
};
typedef union cavm_rtt_c_gdab_romx_devid cavm_rtt_c_gdab_romx_devid_t;

static inline uint64_t CAVM_RTT_C_GDAB_ROMX_DEVID(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_RTT_C_GDAB_ROMX_DEVID(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CNF10KB) && (a<=7))
        return 0x80e041000fc8ll + 0x800000ll * ((a) & 0x7);
    __cavm_csr_fatal("RTT_C_GDAB_ROMX_DEVID", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_RTT_C_GDAB_ROMX_DEVID(a) cavm_rtt_c_gdab_romx_devid_t
#define bustype_CAVM_RTT_C_GDAB_ROMX_DEVID(a) CSR_TYPE_NCB32b
#define basename_CAVM_RTT_C_GDAB_ROMX_DEVID(a) "RTT_C_GDAB_ROMX_DEVID"
#define busnum_CAVM_RTT_C_GDAB_ROMX_DEVID(a) (a)
#define arguments_CAVM_RTT_C_GDAB_ROMX_DEVID(a) (a),-1,-1,-1

/**
 * Register (NCB32b) rtt_c_gdab_rom#_pidr0
 *
 * RTT C Gdab Rom Pidr0 Register
 * The PIDR0 register is part of the set of peripheral identification registers.
 */
union cavm_rtt_c_gdab_romx_pidr0
{
    uint32_t u;
    struct cavm_rtt_c_gdab_romx_pidr0_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t reserved_8_31         : 24;
        uint32_t part_0                : 8;  /**< [  7:  0](RO/H) Part number, bits[7:0]. Set by the configuration inputs part_number[7:0] */
#else /* Word 0 - Little Endian */
        uint32_t part_0                : 8;  /**< [  7:  0](RO/H) Part number, bits[7:0]. Set by the configuration inputs part_number[7:0] */
        uint32_t reserved_8_31         : 24;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_rtt_c_gdab_romx_pidr0_s cn; */
};
typedef union cavm_rtt_c_gdab_romx_pidr0 cavm_rtt_c_gdab_romx_pidr0_t;

static inline uint64_t CAVM_RTT_C_GDAB_ROMX_PIDR0(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_RTT_C_GDAB_ROMX_PIDR0(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CNF10KB) && (a<=7))
        return 0x80e041000fe0ll + 0x800000ll * ((a) & 0x7);
    __cavm_csr_fatal("RTT_C_GDAB_ROMX_PIDR0", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_RTT_C_GDAB_ROMX_PIDR0(a) cavm_rtt_c_gdab_romx_pidr0_t
#define bustype_CAVM_RTT_C_GDAB_ROMX_PIDR0(a) CSR_TYPE_NCB32b
#define basename_CAVM_RTT_C_GDAB_ROMX_PIDR0(a) "RTT_C_GDAB_ROMX_PIDR0"
#define busnum_CAVM_RTT_C_GDAB_ROMX_PIDR0(a) (a)
#define arguments_CAVM_RTT_C_GDAB_ROMX_PIDR0(a) (a),-1,-1,-1

/**
 * Register (NCB32b) rtt_c_gdab_rom#_pidr1
 *
 * RTT C Gdab Rom Pidr1 Register
 * The PIDR1 register is part of the set of peripheral identification registers.
 */
union cavm_rtt_c_gdab_romx_pidr1
{
    uint32_t u;
    struct cavm_rtt_c_gdab_romx_pidr1_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t reserved_8_31         : 24;
        uint32_t des_0                 : 4;  /**< [  7:  4](RO) JEP106 identification code, bits[3:0]. Set by the configuration inputs
                                                                 jep106_id[3:0]. Together, with PIDR4.DES_2 and PIDR2.DES_1, they indicate the
                                                                 designer of the component and not the implementer, except where the two are the
                                                                 same. */
        uint32_t part_1                : 4;  /**< [  3:  0](RO/H) Part number, bits[11:8]. Set by the configuration inputs part_number[11:8]. */
#else /* Word 0 - Little Endian */
        uint32_t part_1                : 4;  /**< [  3:  0](RO/H) Part number, bits[11:8]. Set by the configuration inputs part_number[11:8]. */
        uint32_t des_0                 : 4;  /**< [  7:  4](RO) JEP106 identification code, bits[3:0]. Set by the configuration inputs
                                                                 jep106_id[3:0]. Together, with PIDR4.DES_2 and PIDR2.DES_1, they indicate the
                                                                 designer of the component and not the implementer, except where the two are the
                                                                 same. */
        uint32_t reserved_8_31         : 24;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_rtt_c_gdab_romx_pidr1_s cn; */
};
typedef union cavm_rtt_c_gdab_romx_pidr1 cavm_rtt_c_gdab_romx_pidr1_t;

static inline uint64_t CAVM_RTT_C_GDAB_ROMX_PIDR1(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_RTT_C_GDAB_ROMX_PIDR1(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CNF10KB) && (a<=7))
        return 0x80e041000fe4ll + 0x800000ll * ((a) & 0x7);
    __cavm_csr_fatal("RTT_C_GDAB_ROMX_PIDR1", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_RTT_C_GDAB_ROMX_PIDR1(a) cavm_rtt_c_gdab_romx_pidr1_t
#define bustype_CAVM_RTT_C_GDAB_ROMX_PIDR1(a) CSR_TYPE_NCB32b
#define basename_CAVM_RTT_C_GDAB_ROMX_PIDR1(a) "RTT_C_GDAB_ROMX_PIDR1"
#define busnum_CAVM_RTT_C_GDAB_ROMX_PIDR1(a) (a)
#define arguments_CAVM_RTT_C_GDAB_ROMX_PIDR1(a) (a),-1,-1,-1

/**
 * Register (NCB32b) rtt_c_gdab_rom#_pidr2
 *
 * RTT C Gdab Rom Pidr2 Register
 * The PIDR2 register is part of the set of peripheral identification registers.
 */
union cavm_rtt_c_gdab_romx_pidr2
{
    uint32_t u;
    struct cavm_rtt_c_gdab_romx_pidr2_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t reserved_8_31         : 24;
        uint32_t revision              : 4;  /**< [  7:  4](RO/H) Revision. Set by the configuration inputs revision[3:0]. */
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
        uint32_t revision              : 4;  /**< [  7:  4](RO/H) Revision. Set by the configuration inputs revision[3:0]. */
        uint32_t reserved_8_31         : 24;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_rtt_c_gdab_romx_pidr2_s cn; */
};
typedef union cavm_rtt_c_gdab_romx_pidr2 cavm_rtt_c_gdab_romx_pidr2_t;

static inline uint64_t CAVM_RTT_C_GDAB_ROMX_PIDR2(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_RTT_C_GDAB_ROMX_PIDR2(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CNF10KB) && (a<=7))
        return 0x80e041000fe8ll + 0x800000ll * ((a) & 0x7);
    __cavm_csr_fatal("RTT_C_GDAB_ROMX_PIDR2", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_RTT_C_GDAB_ROMX_PIDR2(a) cavm_rtt_c_gdab_romx_pidr2_t
#define bustype_CAVM_RTT_C_GDAB_ROMX_PIDR2(a) CSR_TYPE_NCB32b
#define basename_CAVM_RTT_C_GDAB_ROMX_PIDR2(a) "RTT_C_GDAB_ROMX_PIDR2"
#define busnum_CAVM_RTT_C_GDAB_ROMX_PIDR2(a) (a)
#define arguments_CAVM_RTT_C_GDAB_ROMX_PIDR2(a) (a),-1,-1,-1

/**
 * Register (NCB32b) rtt_c_gdab_rom#_pidr3
 *
 * RTT C Gdab Rom Pidr3 Register
 * The PIDR3 register is part of the set of peripheral identification registers.
 */
union cavm_rtt_c_gdab_romx_pidr3
{
    uint32_t u;
    struct cavm_rtt_c_gdab_romx_pidr3_s
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
    /* struct cavm_rtt_c_gdab_romx_pidr3_s cn; */
};
typedef union cavm_rtt_c_gdab_romx_pidr3 cavm_rtt_c_gdab_romx_pidr3_t;

static inline uint64_t CAVM_RTT_C_GDAB_ROMX_PIDR3(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_RTT_C_GDAB_ROMX_PIDR3(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CNF10KB) && (a<=7))
        return 0x80e041000fecll + 0x800000ll * ((a) & 0x7);
    __cavm_csr_fatal("RTT_C_GDAB_ROMX_PIDR3", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_RTT_C_GDAB_ROMX_PIDR3(a) cavm_rtt_c_gdab_romx_pidr3_t
#define bustype_CAVM_RTT_C_GDAB_ROMX_PIDR3(a) CSR_TYPE_NCB32b
#define basename_CAVM_RTT_C_GDAB_ROMX_PIDR3(a) "RTT_C_GDAB_ROMX_PIDR3"
#define busnum_CAVM_RTT_C_GDAB_ROMX_PIDR3(a) (a)
#define arguments_CAVM_RTT_C_GDAB_ROMX_PIDR3(a) (a),-1,-1,-1

/**
 * Register (NCB32b) rtt_c_gdab_rom#_pidr4
 *
 * RTT C Gdab Rom Pidr4 Register
 * The PIDR4 register is part of the set of peripheral identification registers.
 */
union cavm_rtt_c_gdab_romx_pidr4
{
    uint32_t u;
    struct cavm_rtt_c_gdab_romx_pidr4_s
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
    /* struct cavm_rtt_c_gdab_romx_pidr4_s cn; */
};
typedef union cavm_rtt_c_gdab_romx_pidr4 cavm_rtt_c_gdab_romx_pidr4_t;

static inline uint64_t CAVM_RTT_C_GDAB_ROMX_PIDR4(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_RTT_C_GDAB_ROMX_PIDR4(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CNF10KB) && (a<=7))
        return 0x80e041000fd0ll + 0x800000ll * ((a) & 0x7);
    __cavm_csr_fatal("RTT_C_GDAB_ROMX_PIDR4", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_RTT_C_GDAB_ROMX_PIDR4(a) cavm_rtt_c_gdab_romx_pidr4_t
#define bustype_CAVM_RTT_C_GDAB_ROMX_PIDR4(a) CSR_TYPE_NCB32b
#define basename_CAVM_RTT_C_GDAB_ROMX_PIDR4(a) "RTT_C_GDAB_ROMX_PIDR4"
#define busnum_CAVM_RTT_C_GDAB_ROMX_PIDR4(a) (a)
#define arguments_CAVM_RTT_C_GDAB_ROMX_PIDR4(a) (a),-1,-1,-1

/**
 * Register (NCB32b) rtt_c_gdab_rom#_pidr5
 *
 * RTT C Gdab Rom Pidr5 Register
 * The PIDR5 register is part of the set of peripheral identification registers.
 */
union cavm_rtt_c_gdab_romx_pidr5
{
    uint32_t u;
    struct cavm_rtt_c_gdab_romx_pidr5_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t reserved_8_31         : 24;
        uint32_t pidr5                 : 8;  /**< [  7:  0](RO) Reserved. */
#else /* Word 0 - Little Endian */
        uint32_t pidr5                 : 8;  /**< [  7:  0](RO) Reserved. */
        uint32_t reserved_8_31         : 24;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_rtt_c_gdab_romx_pidr5_s cn; */
};
typedef union cavm_rtt_c_gdab_romx_pidr5 cavm_rtt_c_gdab_romx_pidr5_t;

static inline uint64_t CAVM_RTT_C_GDAB_ROMX_PIDR5(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_RTT_C_GDAB_ROMX_PIDR5(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CNF10KB) && (a<=7))
        return 0x80e041000fd4ll + 0x800000ll * ((a) & 0x7);
    __cavm_csr_fatal("RTT_C_GDAB_ROMX_PIDR5", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_RTT_C_GDAB_ROMX_PIDR5(a) cavm_rtt_c_gdab_romx_pidr5_t
#define bustype_CAVM_RTT_C_GDAB_ROMX_PIDR5(a) CSR_TYPE_NCB32b
#define basename_CAVM_RTT_C_GDAB_ROMX_PIDR5(a) "RTT_C_GDAB_ROMX_PIDR5"
#define busnum_CAVM_RTT_C_GDAB_ROMX_PIDR5(a) (a)
#define arguments_CAVM_RTT_C_GDAB_ROMX_PIDR5(a) (a),-1,-1,-1

/**
 * Register (NCB32b) rtt_c_gdab_rom#_pidr6
 *
 * RTT C Gdab Rom Pidr6 Register
 * The PIDR6 register is part of the set of peripheral identification registers.
 */
union cavm_rtt_c_gdab_romx_pidr6
{
    uint32_t u;
    struct cavm_rtt_c_gdab_romx_pidr6_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t reserved_8_31         : 24;
        uint32_t pidr6                 : 8;  /**< [  7:  0](RO) Reserved. */
#else /* Word 0 - Little Endian */
        uint32_t pidr6                 : 8;  /**< [  7:  0](RO) Reserved. */
        uint32_t reserved_8_31         : 24;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_rtt_c_gdab_romx_pidr6_s cn; */
};
typedef union cavm_rtt_c_gdab_romx_pidr6 cavm_rtt_c_gdab_romx_pidr6_t;

static inline uint64_t CAVM_RTT_C_GDAB_ROMX_PIDR6(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_RTT_C_GDAB_ROMX_PIDR6(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CNF10KB) && (a<=7))
        return 0x80e041000fd8ll + 0x800000ll * ((a) & 0x7);
    __cavm_csr_fatal("RTT_C_GDAB_ROMX_PIDR6", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_RTT_C_GDAB_ROMX_PIDR6(a) cavm_rtt_c_gdab_romx_pidr6_t
#define bustype_CAVM_RTT_C_GDAB_ROMX_PIDR6(a) CSR_TYPE_NCB32b
#define basename_CAVM_RTT_C_GDAB_ROMX_PIDR6(a) "RTT_C_GDAB_ROMX_PIDR6"
#define busnum_CAVM_RTT_C_GDAB_ROMX_PIDR6(a) (a)
#define arguments_CAVM_RTT_C_GDAB_ROMX_PIDR6(a) (a),-1,-1,-1

/**
 * Register (NCB32b) rtt_c_gdab_rom#_pidr7
 *
 * RTT C Gdab Rom Pidr7 Register
 * The PIDR7 register is part of the set of peripheral identification registers.
 */
union cavm_rtt_c_gdab_romx_pidr7
{
    uint32_t u;
    struct cavm_rtt_c_gdab_romx_pidr7_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t reserved_8_31         : 24;
        uint32_t pidr7                 : 8;  /**< [  7:  0](RO) Reserved. */
#else /* Word 0 - Little Endian */
        uint32_t pidr7                 : 8;  /**< [  7:  0](RO) Reserved. */
        uint32_t reserved_8_31         : 24;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_rtt_c_gdab_romx_pidr7_s cn; */
};
typedef union cavm_rtt_c_gdab_romx_pidr7 cavm_rtt_c_gdab_romx_pidr7_t;

static inline uint64_t CAVM_RTT_C_GDAB_ROMX_PIDR7(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_RTT_C_GDAB_ROMX_PIDR7(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CNF10KB) && (a<=7))
        return 0x80e041000fdcll + 0x800000ll * ((a) & 0x7);
    __cavm_csr_fatal("RTT_C_GDAB_ROMX_PIDR7", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_RTT_C_GDAB_ROMX_PIDR7(a) cavm_rtt_c_gdab_romx_pidr7_t
#define bustype_CAVM_RTT_C_GDAB_ROMX_PIDR7(a) CSR_TYPE_NCB32b
#define basename_CAVM_RTT_C_GDAB_ROMX_PIDR7(a) "RTT_C_GDAB_ROMX_PIDR7"
#define busnum_CAVM_RTT_C_GDAB_ROMX_PIDR7(a) (a)
#define arguments_CAVM_RTT_C_GDAB_ROMX_PIDR7(a) (a),-1,-1,-1

/**
 * Register (NCB32b) rtt_c_gdab_rom#_romentry#
 *
 * RTT C Gdab Rom Romentry Register
 * Each register contains a descripter of a CoreSight component in the system. All ROM
 * table entries conform to the same format.
 */
union cavm_rtt_c_gdab_romx_romentryx
{
    uint32_t u;
    struct cavm_rtt_c_gdab_romx_romentryx_s
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
    /* struct cavm_rtt_c_gdab_romx_romentryx_s cn; */
};
typedef union cavm_rtt_c_gdab_romx_romentryx cavm_rtt_c_gdab_romx_romentryx_t;

static inline uint64_t CAVM_RTT_C_GDAB_ROMX_ROMENTRYX(uint64_t a, uint64_t b) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_RTT_C_GDAB_ROMX_ROMENTRYX(uint64_t a, uint64_t b)
{
    if (cavm_is_model(OCTEONTX_CNF10KB) && ((a<=7) && (b<=511)))
        return 0x80e041000000ll + 0x800000ll * ((a) & 0x7) + 4ll * ((b) & 0x1ff);
    __cavm_csr_fatal("RTT_C_GDAB_ROMX_ROMENTRYX", 2, a, b, 0, 0, 0, 0);
}

#define typedef_CAVM_RTT_C_GDAB_ROMX_ROMENTRYX(a,b) cavm_rtt_c_gdab_romx_romentryx_t
#define bustype_CAVM_RTT_C_GDAB_ROMX_ROMENTRYX(a,b) CSR_TYPE_NCB32b
#define basename_CAVM_RTT_C_GDAB_ROMX_ROMENTRYX(a,b) "RTT_C_GDAB_ROMX_ROMENTRYX"
#define busnum_CAVM_RTT_C_GDAB_ROMX_ROMENTRYX(a,b) (a)
#define arguments_CAVM_RTT_C_GDAB_ROMX_ROMENTRYX(a,b) (a),(b),-1,-1

/**
 * Register (NCB32b) rtt_cdmx_funnel_authstatus
 *
 * RTT Cdmx Funnel Authstatus Register
 * Reports the current status of the authentication control signals.
 */
union cavm_rtt_cdmx_funnel_authstatus
{
    uint32_t u;
    struct cavm_rtt_cdmx_funnel_authstatus_s
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
    /* struct cavm_rtt_cdmx_funnel_authstatus_s cn; */
};
typedef union cavm_rtt_cdmx_funnel_authstatus cavm_rtt_cdmx_funnel_authstatus_t;

#define CAVM_RTT_CDMX_FUNNEL_AUTHSTATUS CAVM_RTT_CDMX_FUNNEL_AUTHSTATUS_FUNC()
static inline uint64_t CAVM_RTT_CDMX_FUNNEL_AUTHSTATUS_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_RTT_CDMX_FUNNEL_AUTHSTATUS_FUNC(void)
{
    if (cavm_is_model(OCTEONTX_CNF10KB))
        return 0x80e040010fb8ll;
    __cavm_csr_fatal("RTT_CDMX_FUNNEL_AUTHSTATUS", 0, 0, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_RTT_CDMX_FUNNEL_AUTHSTATUS cavm_rtt_cdmx_funnel_authstatus_t
#define bustype_CAVM_RTT_CDMX_FUNNEL_AUTHSTATUS CSR_TYPE_NCB32b
#define basename_CAVM_RTT_CDMX_FUNNEL_AUTHSTATUS "RTT_CDMX_FUNNEL_AUTHSTATUS"
#define busnum_CAVM_RTT_CDMX_FUNNEL_AUTHSTATUS 0
#define arguments_CAVM_RTT_CDMX_FUNNEL_AUTHSTATUS -1,-1,-1,-1

/**
 * Register (NCB32b) rtt_cdmx_funnel_cidr0
 *
 * RTT Cdmx Funnel Cidr0 Register
 * The CIDR0 register is part of the set of component identification registers.
 */
union cavm_rtt_cdmx_funnel_cidr0
{
    uint32_t u;
    struct cavm_rtt_cdmx_funnel_cidr0_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t reserved_8_31         : 24;
        uint32_t prmbl_0               : 8;  /**< [  7:  0](RO) Preamble. Returns 0x0D. */
#else /* Word 0 - Little Endian */
        uint32_t prmbl_0               : 8;  /**< [  7:  0](RO) Preamble. Returns 0x0D. */
        uint32_t reserved_8_31         : 24;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_rtt_cdmx_funnel_cidr0_s cn; */
};
typedef union cavm_rtt_cdmx_funnel_cidr0 cavm_rtt_cdmx_funnel_cidr0_t;

#define CAVM_RTT_CDMX_FUNNEL_CIDR0 CAVM_RTT_CDMX_FUNNEL_CIDR0_FUNC()
static inline uint64_t CAVM_RTT_CDMX_FUNNEL_CIDR0_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_RTT_CDMX_FUNNEL_CIDR0_FUNC(void)
{
    if (cavm_is_model(OCTEONTX_CNF10KB))
        return 0x80e040010ff0ll;
    __cavm_csr_fatal("RTT_CDMX_FUNNEL_CIDR0", 0, 0, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_RTT_CDMX_FUNNEL_CIDR0 cavm_rtt_cdmx_funnel_cidr0_t
#define bustype_CAVM_RTT_CDMX_FUNNEL_CIDR0 CSR_TYPE_NCB32b
#define basename_CAVM_RTT_CDMX_FUNNEL_CIDR0 "RTT_CDMX_FUNNEL_CIDR0"
#define busnum_CAVM_RTT_CDMX_FUNNEL_CIDR0 0
#define arguments_CAVM_RTT_CDMX_FUNNEL_CIDR0 -1,-1,-1,-1

/**
 * Register (NCB32b) rtt_cdmx_funnel_cidr1
 *
 * RTT Cdmx Funnel Cidr1 Register
 * The CIDR1 register is part of the set of component identification registers.
 */
union cavm_rtt_cdmx_funnel_cidr1
{
    uint32_t u;
    struct cavm_rtt_cdmx_funnel_cidr1_s
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
    /* struct cavm_rtt_cdmx_funnel_cidr1_s cn; */
};
typedef union cavm_rtt_cdmx_funnel_cidr1 cavm_rtt_cdmx_funnel_cidr1_t;

#define CAVM_RTT_CDMX_FUNNEL_CIDR1 CAVM_RTT_CDMX_FUNNEL_CIDR1_FUNC()
static inline uint64_t CAVM_RTT_CDMX_FUNNEL_CIDR1_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_RTT_CDMX_FUNNEL_CIDR1_FUNC(void)
{
    if (cavm_is_model(OCTEONTX_CNF10KB))
        return 0x80e040010ff4ll;
    __cavm_csr_fatal("RTT_CDMX_FUNNEL_CIDR1", 0, 0, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_RTT_CDMX_FUNNEL_CIDR1 cavm_rtt_cdmx_funnel_cidr1_t
#define bustype_CAVM_RTT_CDMX_FUNNEL_CIDR1 CSR_TYPE_NCB32b
#define basename_CAVM_RTT_CDMX_FUNNEL_CIDR1 "RTT_CDMX_FUNNEL_CIDR1"
#define busnum_CAVM_RTT_CDMX_FUNNEL_CIDR1 0
#define arguments_CAVM_RTT_CDMX_FUNNEL_CIDR1 -1,-1,-1,-1

/**
 * Register (NCB32b) rtt_cdmx_funnel_cidr2
 *
 * RTT Cdmx Funnel Cidr2 Register
 * The CIDR2 register is part of the set of component identification registers.
 */
union cavm_rtt_cdmx_funnel_cidr2
{
    uint32_t u;
    struct cavm_rtt_cdmx_funnel_cidr2_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t reserved_8_31         : 24;
        uint32_t prmbl_2               : 8;  /**< [  7:  0](RO) Preamble. Returns 0x05. */
#else /* Word 0 - Little Endian */
        uint32_t prmbl_2               : 8;  /**< [  7:  0](RO) Preamble. Returns 0x05. */
        uint32_t reserved_8_31         : 24;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_rtt_cdmx_funnel_cidr2_s cn; */
};
typedef union cavm_rtt_cdmx_funnel_cidr2 cavm_rtt_cdmx_funnel_cidr2_t;

#define CAVM_RTT_CDMX_FUNNEL_CIDR2 CAVM_RTT_CDMX_FUNNEL_CIDR2_FUNC()
static inline uint64_t CAVM_RTT_CDMX_FUNNEL_CIDR2_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_RTT_CDMX_FUNNEL_CIDR2_FUNC(void)
{
    if (cavm_is_model(OCTEONTX_CNF10KB))
        return 0x80e040010ff8ll;
    __cavm_csr_fatal("RTT_CDMX_FUNNEL_CIDR2", 0, 0, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_RTT_CDMX_FUNNEL_CIDR2 cavm_rtt_cdmx_funnel_cidr2_t
#define bustype_CAVM_RTT_CDMX_FUNNEL_CIDR2 CSR_TYPE_NCB32b
#define basename_CAVM_RTT_CDMX_FUNNEL_CIDR2 "RTT_CDMX_FUNNEL_CIDR2"
#define busnum_CAVM_RTT_CDMX_FUNNEL_CIDR2 0
#define arguments_CAVM_RTT_CDMX_FUNNEL_CIDR2 -1,-1,-1,-1

/**
 * Register (NCB32b) rtt_cdmx_funnel_cidr3
 *
 * RTT Cdmx Funnel Cidr3 Register
 * The CIDR3 register is part of the set of component identification registers.
 */
union cavm_rtt_cdmx_funnel_cidr3
{
    uint32_t u;
    struct cavm_rtt_cdmx_funnel_cidr3_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t reserved_8_31         : 24;
        uint32_t prmbl_3               : 8;  /**< [  7:  0](RO) Preamble. Returns 0xB1. */
#else /* Word 0 - Little Endian */
        uint32_t prmbl_3               : 8;  /**< [  7:  0](RO) Preamble. Returns 0xB1. */
        uint32_t reserved_8_31         : 24;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_rtt_cdmx_funnel_cidr3_s cn; */
};
typedef union cavm_rtt_cdmx_funnel_cidr3 cavm_rtt_cdmx_funnel_cidr3_t;

#define CAVM_RTT_CDMX_FUNNEL_CIDR3 CAVM_RTT_CDMX_FUNNEL_CIDR3_FUNC()
static inline uint64_t CAVM_RTT_CDMX_FUNNEL_CIDR3_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_RTT_CDMX_FUNNEL_CIDR3_FUNC(void)
{
    if (cavm_is_model(OCTEONTX_CNF10KB))
        return 0x80e040010ffcll;
    __cavm_csr_fatal("RTT_CDMX_FUNNEL_CIDR3", 0, 0, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_RTT_CDMX_FUNNEL_CIDR3 cavm_rtt_cdmx_funnel_cidr3_t
#define bustype_CAVM_RTT_CDMX_FUNNEL_CIDR3 CSR_TYPE_NCB32b
#define basename_CAVM_RTT_CDMX_FUNNEL_CIDR3 "RTT_CDMX_FUNNEL_CIDR3"
#define busnum_CAVM_RTT_CDMX_FUNNEL_CIDR3 0
#define arguments_CAVM_RTT_CDMX_FUNNEL_CIDR3 -1,-1,-1,-1

/**
 * Register (NCB32b) rtt_cdmx_funnel_claimclr
 *
 * RTT Cdmx Funnel Claimclr Register
 * This register forms one half of the claim tag value. On writes, this location
 * enables individual bits to be cleared. On reads, it returns the current claim tag
 * value.
 */
union cavm_rtt_cdmx_funnel_claimclr
{
    uint32_t u;
    struct cavm_rtt_cdmx_funnel_claimclr_s
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
    /* struct cavm_rtt_cdmx_funnel_claimclr_s cn; */
};
typedef union cavm_rtt_cdmx_funnel_claimclr cavm_rtt_cdmx_funnel_claimclr_t;

#define CAVM_RTT_CDMX_FUNNEL_CLAIMCLR CAVM_RTT_CDMX_FUNNEL_CLAIMCLR_FUNC()
static inline uint64_t CAVM_RTT_CDMX_FUNNEL_CLAIMCLR_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_RTT_CDMX_FUNNEL_CLAIMCLR_FUNC(void)
{
    if (cavm_is_model(OCTEONTX_CNF10KB))
        return 0x80e040010fa4ll;
    __cavm_csr_fatal("RTT_CDMX_FUNNEL_CLAIMCLR", 0, 0, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_RTT_CDMX_FUNNEL_CLAIMCLR cavm_rtt_cdmx_funnel_claimclr_t
#define bustype_CAVM_RTT_CDMX_FUNNEL_CLAIMCLR CSR_TYPE_NCB32b
#define basename_CAVM_RTT_CDMX_FUNNEL_CLAIMCLR "RTT_CDMX_FUNNEL_CLAIMCLR"
#define busnum_CAVM_RTT_CDMX_FUNNEL_CLAIMCLR 0
#define arguments_CAVM_RTT_CDMX_FUNNEL_CLAIMCLR -1,-1,-1,-1

/**
 * Register (NCB32b) rtt_cdmx_funnel_claimset
 *
 * RTT Cdmx Funnel Claimset Register
 * This register forms one half of the claim tag value. On writes, this location
 * enables individual bits to be set. On reads, it returns the number of bits that can
 * be set.
 */
union cavm_rtt_cdmx_funnel_claimset
{
    uint32_t u;
    struct cavm_rtt_cdmx_funnel_claimset_s
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
    /* struct cavm_rtt_cdmx_funnel_claimset_s cn; */
};
typedef union cavm_rtt_cdmx_funnel_claimset cavm_rtt_cdmx_funnel_claimset_t;

#define CAVM_RTT_CDMX_FUNNEL_CLAIMSET CAVM_RTT_CDMX_FUNNEL_CLAIMSET_FUNC()
static inline uint64_t CAVM_RTT_CDMX_FUNNEL_CLAIMSET_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_RTT_CDMX_FUNNEL_CLAIMSET_FUNC(void)
{
    if (cavm_is_model(OCTEONTX_CNF10KB))
        return 0x80e040010fa0ll;
    __cavm_csr_fatal("RTT_CDMX_FUNNEL_CLAIMSET", 0, 0, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_RTT_CDMX_FUNNEL_CLAIMSET cavm_rtt_cdmx_funnel_claimset_t
#define bustype_CAVM_RTT_CDMX_FUNNEL_CLAIMSET CSR_TYPE_NCB32b
#define basename_CAVM_RTT_CDMX_FUNNEL_CLAIMSET "RTT_CDMX_FUNNEL_CLAIMSET"
#define busnum_CAVM_RTT_CDMX_FUNNEL_CLAIMSET 0
#define arguments_CAVM_RTT_CDMX_FUNNEL_CLAIMSET -1,-1,-1,-1

/**
 * Register (NCB32b) rtt_cdmx_funnel_devaff0
 *
 * RTT Cdmx Funnel Devaff0 Register
 * Enables a debugger to determine if two components have an affinity with each other.
 */
union cavm_rtt_cdmx_funnel_devaff0
{
    uint32_t u;
    struct cavm_rtt_cdmx_funnel_devaff0_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t devaff0               : 32; /**< [ 31:  0](RO) This field is RAZ. */
#else /* Word 0 - Little Endian */
        uint32_t devaff0               : 32; /**< [ 31:  0](RO) This field is RAZ. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_rtt_cdmx_funnel_devaff0_s cn; */
};
typedef union cavm_rtt_cdmx_funnel_devaff0 cavm_rtt_cdmx_funnel_devaff0_t;

#define CAVM_RTT_CDMX_FUNNEL_DEVAFF0 CAVM_RTT_CDMX_FUNNEL_DEVAFF0_FUNC()
static inline uint64_t CAVM_RTT_CDMX_FUNNEL_DEVAFF0_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_RTT_CDMX_FUNNEL_DEVAFF0_FUNC(void)
{
    if (cavm_is_model(OCTEONTX_CNF10KB))
        return 0x80e040010fa8ll;
    __cavm_csr_fatal("RTT_CDMX_FUNNEL_DEVAFF0", 0, 0, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_RTT_CDMX_FUNNEL_DEVAFF0 cavm_rtt_cdmx_funnel_devaff0_t
#define bustype_CAVM_RTT_CDMX_FUNNEL_DEVAFF0 CSR_TYPE_NCB32b
#define basename_CAVM_RTT_CDMX_FUNNEL_DEVAFF0 "RTT_CDMX_FUNNEL_DEVAFF0"
#define busnum_CAVM_RTT_CDMX_FUNNEL_DEVAFF0 0
#define arguments_CAVM_RTT_CDMX_FUNNEL_DEVAFF0 -1,-1,-1,-1

/**
 * Register (NCB32b) rtt_cdmx_funnel_devaff1
 *
 * RTT Cdmx Funnel Devaff1 Register
 * Enables a debugger to determine if two components have an affinity with each other.
 */
union cavm_rtt_cdmx_funnel_devaff1
{
    uint32_t u;
    struct cavm_rtt_cdmx_funnel_devaff1_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t devaff1               : 32; /**< [ 31:  0](RO) This field is RAZ. */
#else /* Word 0 - Little Endian */
        uint32_t devaff1               : 32; /**< [ 31:  0](RO) This field is RAZ. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_rtt_cdmx_funnel_devaff1_s cn; */
};
typedef union cavm_rtt_cdmx_funnel_devaff1 cavm_rtt_cdmx_funnel_devaff1_t;

#define CAVM_RTT_CDMX_FUNNEL_DEVAFF1 CAVM_RTT_CDMX_FUNNEL_DEVAFF1_FUNC()
static inline uint64_t CAVM_RTT_CDMX_FUNNEL_DEVAFF1_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_RTT_CDMX_FUNNEL_DEVAFF1_FUNC(void)
{
    if (cavm_is_model(OCTEONTX_CNF10KB))
        return 0x80e040010facll;
    __cavm_csr_fatal("RTT_CDMX_FUNNEL_DEVAFF1", 0, 0, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_RTT_CDMX_FUNNEL_DEVAFF1 cavm_rtt_cdmx_funnel_devaff1_t
#define bustype_CAVM_RTT_CDMX_FUNNEL_DEVAFF1 CSR_TYPE_NCB32b
#define basename_CAVM_RTT_CDMX_FUNNEL_DEVAFF1 "RTT_CDMX_FUNNEL_DEVAFF1"
#define busnum_CAVM_RTT_CDMX_FUNNEL_DEVAFF1 0
#define arguments_CAVM_RTT_CDMX_FUNNEL_DEVAFF1 -1,-1,-1,-1

/**
 * Register (NCB32b) rtt_cdmx_funnel_devarch
 *
 * RTT Cdmx Funnel Devarch Register
 * Identifies the architect and architecture of a CoreSight component. The architect
 * might differ from the designer of a component, for example Arm defines the
 * architecture but another company designs and implements the component.
 */
union cavm_rtt_cdmx_funnel_devarch
{
    uint32_t u;
    struct cavm_rtt_cdmx_funnel_devarch_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t architect             : 11; /**< [ 31: 21](RO) Returns 0. */
        uint32_t present               : 1;  /**< [ 20: 20](RO) Returns 0, indicating that the DEVARCH register is not present. */
        uint32_t revision              : 4;  /**< [ 19: 16](RO) Returns 0 */
        uint32_t archid                : 16; /**< [ 15:  0](RO) Returns 0. */
#else /* Word 0 - Little Endian */
        uint32_t archid                : 16; /**< [ 15:  0](RO) Returns 0. */
        uint32_t revision              : 4;  /**< [ 19: 16](RO) Returns 0 */
        uint32_t present               : 1;  /**< [ 20: 20](RO) Returns 0, indicating that the DEVARCH register is not present. */
        uint32_t architect             : 11; /**< [ 31: 21](RO) Returns 0. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_rtt_cdmx_funnel_devarch_s cn; */
};
typedef union cavm_rtt_cdmx_funnel_devarch cavm_rtt_cdmx_funnel_devarch_t;

#define CAVM_RTT_CDMX_FUNNEL_DEVARCH CAVM_RTT_CDMX_FUNNEL_DEVARCH_FUNC()
static inline uint64_t CAVM_RTT_CDMX_FUNNEL_DEVARCH_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_RTT_CDMX_FUNNEL_DEVARCH_FUNC(void)
{
    if (cavm_is_model(OCTEONTX_CNF10KB))
        return 0x80e040010fbcll;
    __cavm_csr_fatal("RTT_CDMX_FUNNEL_DEVARCH", 0, 0, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_RTT_CDMX_FUNNEL_DEVARCH cavm_rtt_cdmx_funnel_devarch_t
#define bustype_CAVM_RTT_CDMX_FUNNEL_DEVARCH CSR_TYPE_NCB32b
#define basename_CAVM_RTT_CDMX_FUNNEL_DEVARCH "RTT_CDMX_FUNNEL_DEVARCH"
#define busnum_CAVM_RTT_CDMX_FUNNEL_DEVARCH 0
#define arguments_CAVM_RTT_CDMX_FUNNEL_DEVARCH -1,-1,-1,-1

/**
 * Register (NCB32b) rtt_cdmx_funnel_devid
 *
 * RTT Cdmx Funnel Devid Register
 * This register is IMPLEMENTATION DEFINED for each Part Number and Designer. The
 * register indicates the capabilities of the component.
 */
union cavm_rtt_cdmx_funnel_devid
{
    uint32_t u;
    struct cavm_rtt_cdmx_funnel_devid_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t reserved_8_31         : 24;
        uint32_t scheme                : 4;  /**< [  7:  4](RO) Indicates priority scheme implemented. Input priority is controlled by the
                                                                 PRIORITYCONTROL register. */
        uint32_t portcount             : 4;  /**< [  3:  0](RO) Indicates the number of input ports connected. */
#else /* Word 0 - Little Endian */
        uint32_t portcount             : 4;  /**< [  3:  0](RO) Indicates the number of input ports connected. */
        uint32_t scheme                : 4;  /**< [  7:  4](RO) Indicates priority scheme implemented. Input priority is controlled by the
                                                                 PRIORITYCONTROL register. */
        uint32_t reserved_8_31         : 24;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_rtt_cdmx_funnel_devid_s cn; */
};
typedef union cavm_rtt_cdmx_funnel_devid cavm_rtt_cdmx_funnel_devid_t;

#define CAVM_RTT_CDMX_FUNNEL_DEVID CAVM_RTT_CDMX_FUNNEL_DEVID_FUNC()
static inline uint64_t CAVM_RTT_CDMX_FUNNEL_DEVID_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_RTT_CDMX_FUNNEL_DEVID_FUNC(void)
{
    if (cavm_is_model(OCTEONTX_CNF10KB))
        return 0x80e040010fc8ll;
    __cavm_csr_fatal("RTT_CDMX_FUNNEL_DEVID", 0, 0, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_RTT_CDMX_FUNNEL_DEVID cavm_rtt_cdmx_funnel_devid_t
#define bustype_CAVM_RTT_CDMX_FUNNEL_DEVID CSR_TYPE_NCB32b
#define basename_CAVM_RTT_CDMX_FUNNEL_DEVID "RTT_CDMX_FUNNEL_DEVID"
#define busnum_CAVM_RTT_CDMX_FUNNEL_DEVID 0
#define arguments_CAVM_RTT_CDMX_FUNNEL_DEVID -1,-1,-1,-1

/**
 * Register (NCB32b) rtt_cdmx_funnel_devid1
 *
 * RTT Cdmx Funnel Devid1 Register
 * Contains an IMPLEMENTATION DEFINED value.
 */
union cavm_rtt_cdmx_funnel_devid1
{
    uint32_t u;
    struct cavm_rtt_cdmx_funnel_devid1_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t devid1                : 32; /**< [ 31:  0](RO) This field is RAZ. */
#else /* Word 0 - Little Endian */
        uint32_t devid1                : 32; /**< [ 31:  0](RO) This field is RAZ. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_rtt_cdmx_funnel_devid1_s cn; */
};
typedef union cavm_rtt_cdmx_funnel_devid1 cavm_rtt_cdmx_funnel_devid1_t;

#define CAVM_RTT_CDMX_FUNNEL_DEVID1 CAVM_RTT_CDMX_FUNNEL_DEVID1_FUNC()
static inline uint64_t CAVM_RTT_CDMX_FUNNEL_DEVID1_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_RTT_CDMX_FUNNEL_DEVID1_FUNC(void)
{
    if (cavm_is_model(OCTEONTX_CNF10KB))
        return 0x80e040010fc4ll;
    __cavm_csr_fatal("RTT_CDMX_FUNNEL_DEVID1", 0, 0, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_RTT_CDMX_FUNNEL_DEVID1 cavm_rtt_cdmx_funnel_devid1_t
#define bustype_CAVM_RTT_CDMX_FUNNEL_DEVID1 CSR_TYPE_NCB32b
#define basename_CAVM_RTT_CDMX_FUNNEL_DEVID1 "RTT_CDMX_FUNNEL_DEVID1"
#define busnum_CAVM_RTT_CDMX_FUNNEL_DEVID1 0
#define arguments_CAVM_RTT_CDMX_FUNNEL_DEVID1 -1,-1,-1,-1

/**
 * Register (NCB32b) rtt_cdmx_funnel_devid2
 *
 * RTT Cdmx Funnel Devid2 Register
 * Contains an IMPLEMENTATION DEFINED value.
 */
union cavm_rtt_cdmx_funnel_devid2
{
    uint32_t u;
    struct cavm_rtt_cdmx_funnel_devid2_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t devid2                : 32; /**< [ 31:  0](RO) This field is RAZ. */
#else /* Word 0 - Little Endian */
        uint32_t devid2                : 32; /**< [ 31:  0](RO) This field is RAZ. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_rtt_cdmx_funnel_devid2_s cn; */
};
typedef union cavm_rtt_cdmx_funnel_devid2 cavm_rtt_cdmx_funnel_devid2_t;

#define CAVM_RTT_CDMX_FUNNEL_DEVID2 CAVM_RTT_CDMX_FUNNEL_DEVID2_FUNC()
static inline uint64_t CAVM_RTT_CDMX_FUNNEL_DEVID2_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_RTT_CDMX_FUNNEL_DEVID2_FUNC(void)
{
    if (cavm_is_model(OCTEONTX_CNF10KB))
        return 0x80e040010fc0ll;
    __cavm_csr_fatal("RTT_CDMX_FUNNEL_DEVID2", 0, 0, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_RTT_CDMX_FUNNEL_DEVID2 cavm_rtt_cdmx_funnel_devid2_t
#define bustype_CAVM_RTT_CDMX_FUNNEL_DEVID2 CSR_TYPE_NCB32b
#define basename_CAVM_RTT_CDMX_FUNNEL_DEVID2 "RTT_CDMX_FUNNEL_DEVID2"
#define busnum_CAVM_RTT_CDMX_FUNNEL_DEVID2 0
#define arguments_CAVM_RTT_CDMX_FUNNEL_DEVID2 -1,-1,-1,-1

/**
 * Register (NCB32b) rtt_cdmx_funnel_devtype
 *
 * RTT Cdmx Funnel Devtype Register
 * A debugger can use this register to get information about a component that has an
 * unrecognized Part number.
 */
union cavm_rtt_cdmx_funnel_devtype
{
    uint32_t u;
    struct cavm_rtt_cdmx_funnel_devtype_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t reserved_8_31         : 24;
        uint32_t sub                   : 4;  /**< [  7:  4](RO) Minor classification. Returns 0x1, indicating this component is a Funnel/Router. */
        uint32_t major                 : 4;  /**< [  3:  0](RO) Major classification. Returns 0x2, indicating this component is a Trace Link. */
#else /* Word 0 - Little Endian */
        uint32_t major                 : 4;  /**< [  3:  0](RO) Major classification. Returns 0x2, indicating this component is a Trace Link. */
        uint32_t sub                   : 4;  /**< [  7:  4](RO) Minor classification. Returns 0x1, indicating this component is a Funnel/Router. */
        uint32_t reserved_8_31         : 24;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_rtt_cdmx_funnel_devtype_s cn; */
};
typedef union cavm_rtt_cdmx_funnel_devtype cavm_rtt_cdmx_funnel_devtype_t;

#define CAVM_RTT_CDMX_FUNNEL_DEVTYPE CAVM_RTT_CDMX_FUNNEL_DEVTYPE_FUNC()
static inline uint64_t CAVM_RTT_CDMX_FUNNEL_DEVTYPE_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_RTT_CDMX_FUNNEL_DEVTYPE_FUNC(void)
{
    if (cavm_is_model(OCTEONTX_CNF10KB))
        return 0x80e040010fccll;
    __cavm_csr_fatal("RTT_CDMX_FUNNEL_DEVTYPE", 0, 0, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_RTT_CDMX_FUNNEL_DEVTYPE cavm_rtt_cdmx_funnel_devtype_t
#define bustype_CAVM_RTT_CDMX_FUNNEL_DEVTYPE CSR_TYPE_NCB32b
#define basename_CAVM_RTT_CDMX_FUNNEL_DEVTYPE "RTT_CDMX_FUNNEL_DEVTYPE"
#define busnum_CAVM_RTT_CDMX_FUNNEL_DEVTYPE 0
#define arguments_CAVM_RTT_CDMX_FUNNEL_DEVTYPE -1,-1,-1,-1

/**
 * Register (NCB32b) rtt_cdmx_funnel_funnelcontrol
 *
 * RTT Cdmx Funnel Funnelcontrol Register
 * The Funnel Control register is for enabling each of the trace sources and
 * controlling the hold time for switching between them.
 */
union cavm_rtt_cdmx_funnel_funnelcontrol
{
    uint32_t u;
    struct cavm_rtt_cdmx_funnel_funnelcontrol_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t sbz_0                 : 19; /**< [ 31: 13](R/W) Software should write the field as all 0s. */
        uint32_t flush_normal          : 1;  /**< [ 12: 12](R/W) This bit, when clear, allows slave ports that are already flushed to receive
                                                                 further data even if there are other ports that have not completed flush. If
                                                                 set, a port that has completed flush is not be allowed to receive further data
                                                                 until all ports have completed flush. */
        uint32_t ht                    : 4;  /**< [ 11:  8](R/W) Hold time. Value sets the minimum hold time before switching trace sources
                                                                 (funnel inputs) based on the ID. Value used is programmed value + 1. */
        uint32_t ens7                  : 1;  /**< [  7:  7](R/W) Enable slave interface 7. */
        uint32_t ens6                  : 1;  /**< [  6:  6](R/W) Enable slave interface 6. */
        uint32_t ens5                  : 1;  /**< [  5:  5](R/W) Enable slave interface 5. */
        uint32_t ens4                  : 1;  /**< [  4:  4](R/W) Enable slave interface 4. */
        uint32_t ens3                  : 1;  /**< [  3:  3](R/W) Enable slave interface 3. */
        uint32_t ens2                  : 1;  /**< [  2:  2](R/W) Enable slave interface 2. */
        uint32_t ens1                  : 1;  /**< [  1:  1](R/W) Enable slave interface 1. */
        uint32_t ens0                  : 1;  /**< [  0:  0](R/W) Enable slave interface 0. */
#else /* Word 0 - Little Endian */
        uint32_t ens0                  : 1;  /**< [  0:  0](R/W) Enable slave interface 0. */
        uint32_t ens1                  : 1;  /**< [  1:  1](R/W) Enable slave interface 1. */
        uint32_t ens2                  : 1;  /**< [  2:  2](R/W) Enable slave interface 2. */
        uint32_t ens3                  : 1;  /**< [  3:  3](R/W) Enable slave interface 3. */
        uint32_t ens4                  : 1;  /**< [  4:  4](R/W) Enable slave interface 4. */
        uint32_t ens5                  : 1;  /**< [  5:  5](R/W) Enable slave interface 5. */
        uint32_t ens6                  : 1;  /**< [  6:  6](R/W) Enable slave interface 6. */
        uint32_t ens7                  : 1;  /**< [  7:  7](R/W) Enable slave interface 7. */
        uint32_t ht                    : 4;  /**< [ 11:  8](R/W) Hold time. Value sets the minimum hold time before switching trace sources
                                                                 (funnel inputs) based on the ID. Value used is programmed value + 1. */
        uint32_t flush_normal          : 1;  /**< [ 12: 12](R/W) This bit, when clear, allows slave ports that are already flushed to receive
                                                                 further data even if there are other ports that have not completed flush. If
                                                                 set, a port that has completed flush is not be allowed to receive further data
                                                                 until all ports have completed flush. */
        uint32_t sbz_0                 : 19; /**< [ 31: 13](R/W) Software should write the field as all 0s. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_rtt_cdmx_funnel_funnelcontrol_s cn; */
};
typedef union cavm_rtt_cdmx_funnel_funnelcontrol cavm_rtt_cdmx_funnel_funnelcontrol_t;

#define CAVM_RTT_CDMX_FUNNEL_FUNNELCONTROL CAVM_RTT_CDMX_FUNNEL_FUNNELCONTROL_FUNC()
static inline uint64_t CAVM_RTT_CDMX_FUNNEL_FUNNELCONTROL_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_RTT_CDMX_FUNNEL_FUNNELCONTROL_FUNC(void)
{
    if (cavm_is_model(OCTEONTX_CNF10KB))
        return 0x80e040010000ll;
    __cavm_csr_fatal("RTT_CDMX_FUNNEL_FUNNELCONTROL", 0, 0, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_RTT_CDMX_FUNNEL_FUNNELCONTROL cavm_rtt_cdmx_funnel_funnelcontrol_t
#define bustype_CAVM_RTT_CDMX_FUNNEL_FUNNELCONTROL CSR_TYPE_NCB32b
#define basename_CAVM_RTT_CDMX_FUNNEL_FUNNELCONTROL "RTT_CDMX_FUNNEL_FUNNELCONTROL"
#define busnum_CAVM_RTT_CDMX_FUNNEL_FUNNELCONTROL 0
#define arguments_CAVM_RTT_CDMX_FUNNEL_FUNNELCONTROL -1,-1,-1,-1

/**
 * Register (NCB32b) rtt_cdmx_funnel_itatbctr0
 *
 * RTT Cdmx Funnel Itatbctr0 Register
 * This register allows observability and controllability of the ATBYTES buses, and
 * AFREADY and ATVALID signals into, and out of, the funnel. For slave signals coming
 * into the funnel, the register views the ports that are selected through the funnel
 * control register. Only one port must be selected for integration test.
 */
union cavm_rtt_cdmx_funnel_itatbctr0
{
    uint32_t u;
    struct cavm_rtt_cdmx_funnel_itatbctr0_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t sbz_1                 : 22; /**< [ 31: 10](R/W) Software should write the field as all 0s. */
        uint32_t atbytes               : 2;  /**< [  9:  8](R/W) Reads the value on atbytes_s[1:0] and writes the values on atbytes_m[1:0]. */
        uint32_t sbz_0                 : 6;  /**< [  7:  2](R/W) Software should write the field as all 0s. */
        uint32_t afready               : 1;  /**< [  1:  1](R/W) Reads and controls the afready signals into, and out of, the funnel. */
        uint32_t atvalid               : 1;  /**< [  0:  0](R/W) Reads and controls the atvalid signals into, and out of, the funnel. */
#else /* Word 0 - Little Endian */
        uint32_t atvalid               : 1;  /**< [  0:  0](R/W) Reads and controls the atvalid signals into, and out of, the funnel. */
        uint32_t afready               : 1;  /**< [  1:  1](R/W) Reads and controls the afready signals into, and out of, the funnel. */
        uint32_t sbz_0                 : 6;  /**< [  7:  2](R/W) Software should write the field as all 0s. */
        uint32_t atbytes               : 2;  /**< [  9:  8](R/W) Reads the value on atbytes_s[1:0] and writes the values on atbytes_m[1:0]. */
        uint32_t sbz_1                 : 22; /**< [ 31: 10](R/W) Software should write the field as all 0s. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_rtt_cdmx_funnel_itatbctr0_s cn; */
};
typedef union cavm_rtt_cdmx_funnel_itatbctr0 cavm_rtt_cdmx_funnel_itatbctr0_t;

#define CAVM_RTT_CDMX_FUNNEL_ITATBCTR0 CAVM_RTT_CDMX_FUNNEL_ITATBCTR0_FUNC()
static inline uint64_t CAVM_RTT_CDMX_FUNNEL_ITATBCTR0_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_RTT_CDMX_FUNNEL_ITATBCTR0_FUNC(void)
{
    if (cavm_is_model(OCTEONTX_CNF10KB))
        return 0x80e040010efcll;
    __cavm_csr_fatal("RTT_CDMX_FUNNEL_ITATBCTR0", 0, 0, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_RTT_CDMX_FUNNEL_ITATBCTR0 cavm_rtt_cdmx_funnel_itatbctr0_t
#define bustype_CAVM_RTT_CDMX_FUNNEL_ITATBCTR0 CSR_TYPE_NCB32b
#define basename_CAVM_RTT_CDMX_FUNNEL_ITATBCTR0 "RTT_CDMX_FUNNEL_ITATBCTR0"
#define busnum_CAVM_RTT_CDMX_FUNNEL_ITATBCTR0 0
#define arguments_CAVM_RTT_CDMX_FUNNEL_ITATBCTR0 -1,-1,-1,-1

/**
 * Register (NCB32b) rtt_cdmx_funnel_itatbctr1
 *
 * RTT Cdmx Funnel Itatbctr1 Register
 * This register allows observability and controllability of the ATID buses into, and
 * out of, the funnel. For slave signals coming into the funnel, the register views the
 * ports that are selected through the funnel control register. Only one port must be
 * selected for integration test.
 */
union cavm_rtt_cdmx_funnel_itatbctr1
{
    uint32_t u;
    struct cavm_rtt_cdmx_funnel_itatbctr1_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t sbz_0                 : 25; /**< [ 31:  7](R/W) Software should write the field as all 0s. */
        uint32_t atid                  : 7;  /**< [  6:  0](R/W) When read returns the value on atid_s, when written drives the value on atid_m. */
#else /* Word 0 - Little Endian */
        uint32_t atid                  : 7;  /**< [  6:  0](R/W) When read returns the value on atid_s, when written drives the value on atid_m. */
        uint32_t sbz_0                 : 25; /**< [ 31:  7](R/W) Software should write the field as all 0s. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_rtt_cdmx_funnel_itatbctr1_s cn; */
};
typedef union cavm_rtt_cdmx_funnel_itatbctr1 cavm_rtt_cdmx_funnel_itatbctr1_t;

#define CAVM_RTT_CDMX_FUNNEL_ITATBCTR1 CAVM_RTT_CDMX_FUNNEL_ITATBCTR1_FUNC()
static inline uint64_t CAVM_RTT_CDMX_FUNNEL_ITATBCTR1_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_RTT_CDMX_FUNNEL_ITATBCTR1_FUNC(void)
{
    if (cavm_is_model(OCTEONTX_CNF10KB))
        return 0x80e040010ef8ll;
    __cavm_csr_fatal("RTT_CDMX_FUNNEL_ITATBCTR1", 0, 0, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_RTT_CDMX_FUNNEL_ITATBCTR1 cavm_rtt_cdmx_funnel_itatbctr1_t
#define bustype_CAVM_RTT_CDMX_FUNNEL_ITATBCTR1 CSR_TYPE_NCB32b
#define basename_CAVM_RTT_CDMX_FUNNEL_ITATBCTR1 "RTT_CDMX_FUNNEL_ITATBCTR1"
#define busnum_CAVM_RTT_CDMX_FUNNEL_ITATBCTR1 0
#define arguments_CAVM_RTT_CDMX_FUNNEL_ITATBCTR1 -1,-1,-1,-1

/**
 * Register (NCB32b) rtt_cdmx_funnel_itatbctr2
 *
 * RTT Cdmx Funnel Itatbctr2 Register
 * This register allows observability and controllability of the afvalid and atready
 * signals into, and out of, the funnel. For slave signals coming into the funnel, the
 * register views the ports that are selected through the funnel control register. Only
 * one port must be selected for integration test.
 */
union cavm_rtt_cdmx_funnel_itatbctr2
{
    uint32_t u;
    struct cavm_rtt_cdmx_funnel_itatbctr2_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t sbz_0                 : 30; /**< [ 31:  2](R/W) Software should write the field as all 0s. */
        uint32_t afvalid               : 1;  /**< [  1:  1](R/W) Reads and controls the afvalid signals into, and out of, the funnel. */
        uint32_t atready               : 1;  /**< [  0:  0](R/W) Reads and controls the atready signal into, and out of, the funnel. */
#else /* Word 0 - Little Endian */
        uint32_t atready               : 1;  /**< [  0:  0](R/W) Reads and controls the atready signal into, and out of, the funnel. */
        uint32_t afvalid               : 1;  /**< [  1:  1](R/W) Reads and controls the afvalid signals into, and out of, the funnel. */
        uint32_t sbz_0                 : 30; /**< [ 31:  2](R/W) Software should write the field as all 0s. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_rtt_cdmx_funnel_itatbctr2_s cn; */
};
typedef union cavm_rtt_cdmx_funnel_itatbctr2 cavm_rtt_cdmx_funnel_itatbctr2_t;

#define CAVM_RTT_CDMX_FUNNEL_ITATBCTR2 CAVM_RTT_CDMX_FUNNEL_ITATBCTR2_FUNC()
static inline uint64_t CAVM_RTT_CDMX_FUNNEL_ITATBCTR2_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_RTT_CDMX_FUNNEL_ITATBCTR2_FUNC(void)
{
    if (cavm_is_model(OCTEONTX_CNF10KB))
        return 0x80e040010ef4ll;
    __cavm_csr_fatal("RTT_CDMX_FUNNEL_ITATBCTR2", 0, 0, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_RTT_CDMX_FUNNEL_ITATBCTR2 cavm_rtt_cdmx_funnel_itatbctr2_t
#define bustype_CAVM_RTT_CDMX_FUNNEL_ITATBCTR2 CSR_TYPE_NCB32b
#define basename_CAVM_RTT_CDMX_FUNNEL_ITATBCTR2 "RTT_CDMX_FUNNEL_ITATBCTR2"
#define busnum_CAVM_RTT_CDMX_FUNNEL_ITATBCTR2 0
#define arguments_CAVM_RTT_CDMX_FUNNEL_ITATBCTR2 -1,-1,-1,-1

/**
 * Register (NCB32b) rtt_cdmx_funnel_itatbctr3
 *
 * RTT Cdmx Funnel Itatbctr3 Register
 * This register allows observability and controllability of the SYNCREQ signals into,
 * and out of, the funnel. Only one slave interface must be selected for integration
 * test. The syncreq receiver on the master interface has a latching function to
 * capture a pulse arriving on that input. The arrival of a pulse sets the latch so
 * that the value can be read. Reading the register clears the latch. Reading a 1
 * indicates that a syncreq_m pulse arrived since the last read. Reading a 0 indicates
 * that no syncreq_m pulse has arrived. Writing a 1 to the register causes a syncreq_s
 * pulse to be generated to the upstream component.
 */
union cavm_rtt_cdmx_funnel_itatbctr3
{
    uint32_t u;
    struct cavm_rtt_cdmx_funnel_itatbctr3_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t sbz_0                 : 31; /**< [ 31:  1](R/W) Software should write the field as all 0s. */
        uint32_t syncreq               : 1;  /**< [  0:  0](R/W) Reads and controls the SYNCREQ signals into, and out of, the funnel. Reading clears the latch. */
#else /* Word 0 - Little Endian */
        uint32_t syncreq               : 1;  /**< [  0:  0](R/W) Reads and controls the SYNCREQ signals into, and out of, the funnel. Reading clears the latch. */
        uint32_t sbz_0                 : 31; /**< [ 31:  1](R/W) Software should write the field as all 0s. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_rtt_cdmx_funnel_itatbctr3_s cn; */
};
typedef union cavm_rtt_cdmx_funnel_itatbctr3 cavm_rtt_cdmx_funnel_itatbctr3_t;

#define CAVM_RTT_CDMX_FUNNEL_ITATBCTR3 CAVM_RTT_CDMX_FUNNEL_ITATBCTR3_FUNC()
static inline uint64_t CAVM_RTT_CDMX_FUNNEL_ITATBCTR3_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_RTT_CDMX_FUNNEL_ITATBCTR3_FUNC(void)
{
    if (cavm_is_model(OCTEONTX_CNF10KB))
        return 0x80e040010ef0ll;
    __cavm_csr_fatal("RTT_CDMX_FUNNEL_ITATBCTR3", 0, 0, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_RTT_CDMX_FUNNEL_ITATBCTR3 cavm_rtt_cdmx_funnel_itatbctr3_t
#define bustype_CAVM_RTT_CDMX_FUNNEL_ITATBCTR3 CSR_TYPE_NCB32b
#define basename_CAVM_RTT_CDMX_FUNNEL_ITATBCTR3 "RTT_CDMX_FUNNEL_ITATBCTR3"
#define busnum_CAVM_RTT_CDMX_FUNNEL_ITATBCTR3 0
#define arguments_CAVM_RTT_CDMX_FUNNEL_ITATBCTR3 -1,-1,-1,-1

/**
 * Register (NCB32b) rtt_cdmx_funnel_itatbdata0
 *
 * RTT Cdmx Funnel Itatbdata0 Register
 * This register allows observability and controllability of the ATDATA buses into and
 * out of the funnel. For slave signals coming into the funnel, the register views the
 * ports that are selected through the funnel control register. Only one port must be
 * selected for integration test.
 */
union cavm_rtt_cdmx_funnel_itatbdata0
{
    uint32_t u;
    struct cavm_rtt_cdmx_funnel_itatbdata0_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t sbz_0                 : 15; /**< [ 31: 17](R/W) Software should write the field as all 0s. */
        uint32_t atdata127             : 1;  /**< [ 16: 16](R/W) Reads atdata_s[127] and writes atdata_m[127]. */
        uint32_t atdata119             : 1;  /**< [ 15: 15](R/W) Reads atdata_s[119] and writes atdata_m[119]. */
        uint32_t atdata111             : 1;  /**< [ 14: 14](R/W) Reads atdata_s[111] and writes atdata_m[111]. */
        uint32_t atdata103             : 1;  /**< [ 13: 13](R/W) Reads atdata_s[103] and writes atdata_m[103]. */
        uint32_t atdata95              : 1;  /**< [ 12: 12](R/W) Reads atdata_s[95] and writes atdata_m[95]. */
        uint32_t atdata87              : 1;  /**< [ 11: 11](R/W) Reads atdata_s[87] and writes atdata_m[87]. */
        uint32_t atdata79              : 1;  /**< [ 10: 10](R/W) Reads atdata_s[79] and writes atdata_m[79]. */
        uint32_t atdata71              : 1;  /**< [  9:  9](R/W) Reads atdata_s[71] and writes atdata_m[71]. */
        uint32_t atdata63              : 1;  /**< [  8:  8](R/W) Reads atdata_s[63] and writes atdata_m[63]. */
        uint32_t atdata55              : 1;  /**< [  7:  7](R/W) Reads atdata_s[55] and writes atdata_m[55]. */
        uint32_t atdata47              : 1;  /**< [  6:  6](R/W) Reads atdata_s[47] and writes atdata_m[47]. */
        uint32_t atdata39              : 1;  /**< [  5:  5](R/W) Reads atdata_s[39] and writes atdata_m[39]. */
        uint32_t atdata31              : 1;  /**< [  4:  4](R/W) Reads atdata_s[31] and writes atdata_m[31]. */
        uint32_t atdata23              : 1;  /**< [  3:  3](R/W) Reads atdata_s[23] and writes atdata_m[23]. */
        uint32_t atdata15              : 1;  /**< [  2:  2](R/W) Reads atdata_s[15] and writes atdata_m[15]. */
        uint32_t atdata7               : 1;  /**< [  1:  1](R/W) Reads atdata_s[7] and writes atdata_m[7]. */
        uint32_t atdata0               : 1;  /**< [  0:  0](R/W) Reads atdata_s[0] and writes atdata_m[0]. */
#else /* Word 0 - Little Endian */
        uint32_t atdata0               : 1;  /**< [  0:  0](R/W) Reads atdata_s[0] and writes atdata_m[0]. */
        uint32_t atdata7               : 1;  /**< [  1:  1](R/W) Reads atdata_s[7] and writes atdata_m[7]. */
        uint32_t atdata15              : 1;  /**< [  2:  2](R/W) Reads atdata_s[15] and writes atdata_m[15]. */
        uint32_t atdata23              : 1;  /**< [  3:  3](R/W) Reads atdata_s[23] and writes atdata_m[23]. */
        uint32_t atdata31              : 1;  /**< [  4:  4](R/W) Reads atdata_s[31] and writes atdata_m[31]. */
        uint32_t atdata39              : 1;  /**< [  5:  5](R/W) Reads atdata_s[39] and writes atdata_m[39]. */
        uint32_t atdata47              : 1;  /**< [  6:  6](R/W) Reads atdata_s[47] and writes atdata_m[47]. */
        uint32_t atdata55              : 1;  /**< [  7:  7](R/W) Reads atdata_s[55] and writes atdata_m[55]. */
        uint32_t atdata63              : 1;  /**< [  8:  8](R/W) Reads atdata_s[63] and writes atdata_m[63]. */
        uint32_t atdata71              : 1;  /**< [  9:  9](R/W) Reads atdata_s[71] and writes atdata_m[71]. */
        uint32_t atdata79              : 1;  /**< [ 10: 10](R/W) Reads atdata_s[79] and writes atdata_m[79]. */
        uint32_t atdata87              : 1;  /**< [ 11: 11](R/W) Reads atdata_s[87] and writes atdata_m[87]. */
        uint32_t atdata95              : 1;  /**< [ 12: 12](R/W) Reads atdata_s[95] and writes atdata_m[95]. */
        uint32_t atdata103             : 1;  /**< [ 13: 13](R/W) Reads atdata_s[103] and writes atdata_m[103]. */
        uint32_t atdata111             : 1;  /**< [ 14: 14](R/W) Reads atdata_s[111] and writes atdata_m[111]. */
        uint32_t atdata119             : 1;  /**< [ 15: 15](R/W) Reads atdata_s[119] and writes atdata_m[119]. */
        uint32_t atdata127             : 1;  /**< [ 16: 16](R/W) Reads atdata_s[127] and writes atdata_m[127]. */
        uint32_t sbz_0                 : 15; /**< [ 31: 17](R/W) Software should write the field as all 0s. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_rtt_cdmx_funnel_itatbdata0_s cn; */
};
typedef union cavm_rtt_cdmx_funnel_itatbdata0 cavm_rtt_cdmx_funnel_itatbdata0_t;

#define CAVM_RTT_CDMX_FUNNEL_ITATBDATA0 CAVM_RTT_CDMX_FUNNEL_ITATBDATA0_FUNC()
static inline uint64_t CAVM_RTT_CDMX_FUNNEL_ITATBDATA0_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_RTT_CDMX_FUNNEL_ITATBDATA0_FUNC(void)
{
    if (cavm_is_model(OCTEONTX_CNF10KB))
        return 0x80e040010eecll;
    __cavm_csr_fatal("RTT_CDMX_FUNNEL_ITATBDATA0", 0, 0, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_RTT_CDMX_FUNNEL_ITATBDATA0 cavm_rtt_cdmx_funnel_itatbdata0_t
#define bustype_CAVM_RTT_CDMX_FUNNEL_ITATBDATA0 CSR_TYPE_NCB32b
#define basename_CAVM_RTT_CDMX_FUNNEL_ITATBDATA0 "RTT_CDMX_FUNNEL_ITATBDATA0"
#define busnum_CAVM_RTT_CDMX_FUNNEL_ITATBDATA0 0
#define arguments_CAVM_RTT_CDMX_FUNNEL_ITATBDATA0 -1,-1,-1,-1

/**
 * Register (NCB32b) rtt_cdmx_funnel_itctrl
 *
 * RTT Cdmx Funnel Itctrl Register
 * The Integration Mode Control register is used to enable topology detection.
 */
union cavm_rtt_cdmx_funnel_itctrl
{
    uint32_t u;
    struct cavm_rtt_cdmx_funnel_itctrl_s
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
    /* struct cavm_rtt_cdmx_funnel_itctrl_s cn; */
};
typedef union cavm_rtt_cdmx_funnel_itctrl cavm_rtt_cdmx_funnel_itctrl_t;

#define CAVM_RTT_CDMX_FUNNEL_ITCTRL CAVM_RTT_CDMX_FUNNEL_ITCTRL_FUNC()
static inline uint64_t CAVM_RTT_CDMX_FUNNEL_ITCTRL_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_RTT_CDMX_FUNNEL_ITCTRL_FUNC(void)
{
    if (cavm_is_model(OCTEONTX_CNF10KB))
        return 0x80e040010f00ll;
    __cavm_csr_fatal("RTT_CDMX_FUNNEL_ITCTRL", 0, 0, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_RTT_CDMX_FUNNEL_ITCTRL cavm_rtt_cdmx_funnel_itctrl_t
#define bustype_CAVM_RTT_CDMX_FUNNEL_ITCTRL CSR_TYPE_NCB32b
#define basename_CAVM_RTT_CDMX_FUNNEL_ITCTRL "RTT_CDMX_FUNNEL_ITCTRL"
#define busnum_CAVM_RTT_CDMX_FUNNEL_ITCTRL 0
#define arguments_CAVM_RTT_CDMX_FUNNEL_ITCTRL -1,-1,-1,-1

/**
 * Register (NCB32b) rtt_cdmx_funnel_pidr0
 *
 * RTT Cdmx Funnel Pidr0 Register
 * The PIDR0 register is part of the set of peripheral identification registers.
 */
union cavm_rtt_cdmx_funnel_pidr0
{
    uint32_t u;
    struct cavm_rtt_cdmx_funnel_pidr0_s
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
    /* struct cavm_rtt_cdmx_funnel_pidr0_s cn; */
};
typedef union cavm_rtt_cdmx_funnel_pidr0 cavm_rtt_cdmx_funnel_pidr0_t;

#define CAVM_RTT_CDMX_FUNNEL_PIDR0 CAVM_RTT_CDMX_FUNNEL_PIDR0_FUNC()
static inline uint64_t CAVM_RTT_CDMX_FUNNEL_PIDR0_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_RTT_CDMX_FUNNEL_PIDR0_FUNC(void)
{
    if (cavm_is_model(OCTEONTX_CNF10KB))
        return 0x80e040010fe0ll;
    __cavm_csr_fatal("RTT_CDMX_FUNNEL_PIDR0", 0, 0, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_RTT_CDMX_FUNNEL_PIDR0 cavm_rtt_cdmx_funnel_pidr0_t
#define bustype_CAVM_RTT_CDMX_FUNNEL_PIDR0 CSR_TYPE_NCB32b
#define basename_CAVM_RTT_CDMX_FUNNEL_PIDR0 "RTT_CDMX_FUNNEL_PIDR0"
#define busnum_CAVM_RTT_CDMX_FUNNEL_PIDR0 0
#define arguments_CAVM_RTT_CDMX_FUNNEL_PIDR0 -1,-1,-1,-1

/**
 * Register (NCB32b) rtt_cdmx_funnel_pidr1
 *
 * RTT Cdmx Funnel Pidr1 Register
 * The PIDR1 register is part of the set of peripheral identification registers.
 */
union cavm_rtt_cdmx_funnel_pidr1
{
    uint32_t u;
    struct cavm_rtt_cdmx_funnel_pidr1_s
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
    /* struct cavm_rtt_cdmx_funnel_pidr1_s cn; */
};
typedef union cavm_rtt_cdmx_funnel_pidr1 cavm_rtt_cdmx_funnel_pidr1_t;

#define CAVM_RTT_CDMX_FUNNEL_PIDR1 CAVM_RTT_CDMX_FUNNEL_PIDR1_FUNC()
static inline uint64_t CAVM_RTT_CDMX_FUNNEL_PIDR1_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_RTT_CDMX_FUNNEL_PIDR1_FUNC(void)
{
    if (cavm_is_model(OCTEONTX_CNF10KB))
        return 0x80e040010fe4ll;
    __cavm_csr_fatal("RTT_CDMX_FUNNEL_PIDR1", 0, 0, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_RTT_CDMX_FUNNEL_PIDR1 cavm_rtt_cdmx_funnel_pidr1_t
#define bustype_CAVM_RTT_CDMX_FUNNEL_PIDR1 CSR_TYPE_NCB32b
#define basename_CAVM_RTT_CDMX_FUNNEL_PIDR1 "RTT_CDMX_FUNNEL_PIDR1"
#define busnum_CAVM_RTT_CDMX_FUNNEL_PIDR1 0
#define arguments_CAVM_RTT_CDMX_FUNNEL_PIDR1 -1,-1,-1,-1

/**
 * Register (NCB32b) rtt_cdmx_funnel_pidr2
 *
 * RTT Cdmx Funnel Pidr2 Register
 * The PIDR2 register is part of the set of peripheral identification registers.
 */
union cavm_rtt_cdmx_funnel_pidr2
{
    uint32_t u;
    struct cavm_rtt_cdmx_funnel_pidr2_s
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
    /* struct cavm_rtt_cdmx_funnel_pidr2_s cn; */
};
typedef union cavm_rtt_cdmx_funnel_pidr2 cavm_rtt_cdmx_funnel_pidr2_t;

#define CAVM_RTT_CDMX_FUNNEL_PIDR2 CAVM_RTT_CDMX_FUNNEL_PIDR2_FUNC()
static inline uint64_t CAVM_RTT_CDMX_FUNNEL_PIDR2_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_RTT_CDMX_FUNNEL_PIDR2_FUNC(void)
{
    if (cavm_is_model(OCTEONTX_CNF10KB))
        return 0x80e040010fe8ll;
    __cavm_csr_fatal("RTT_CDMX_FUNNEL_PIDR2", 0, 0, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_RTT_CDMX_FUNNEL_PIDR2 cavm_rtt_cdmx_funnel_pidr2_t
#define bustype_CAVM_RTT_CDMX_FUNNEL_PIDR2 CSR_TYPE_NCB32b
#define basename_CAVM_RTT_CDMX_FUNNEL_PIDR2 "RTT_CDMX_FUNNEL_PIDR2"
#define busnum_CAVM_RTT_CDMX_FUNNEL_PIDR2 0
#define arguments_CAVM_RTT_CDMX_FUNNEL_PIDR2 -1,-1,-1,-1

/**
 * Register (NCB32b) rtt_cdmx_funnel_pidr3
 *
 * RTT Cdmx Funnel Pidr3 Register
 * The PIDR3 register is part of the set of peripheral identification registers.
 */
union cavm_rtt_cdmx_funnel_pidr3
{
    uint32_t u;
    struct cavm_rtt_cdmx_funnel_pidr3_s
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
    /* struct cavm_rtt_cdmx_funnel_pidr3_s cn; */
};
typedef union cavm_rtt_cdmx_funnel_pidr3 cavm_rtt_cdmx_funnel_pidr3_t;

#define CAVM_RTT_CDMX_FUNNEL_PIDR3 CAVM_RTT_CDMX_FUNNEL_PIDR3_FUNC()
static inline uint64_t CAVM_RTT_CDMX_FUNNEL_PIDR3_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_RTT_CDMX_FUNNEL_PIDR3_FUNC(void)
{
    if (cavm_is_model(OCTEONTX_CNF10KB))
        return 0x80e040010fecll;
    __cavm_csr_fatal("RTT_CDMX_FUNNEL_PIDR3", 0, 0, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_RTT_CDMX_FUNNEL_PIDR3 cavm_rtt_cdmx_funnel_pidr3_t
#define bustype_CAVM_RTT_CDMX_FUNNEL_PIDR3 CSR_TYPE_NCB32b
#define basename_CAVM_RTT_CDMX_FUNNEL_PIDR3 "RTT_CDMX_FUNNEL_PIDR3"
#define busnum_CAVM_RTT_CDMX_FUNNEL_PIDR3 0
#define arguments_CAVM_RTT_CDMX_FUNNEL_PIDR3 -1,-1,-1,-1

/**
 * Register (NCB32b) rtt_cdmx_funnel_pidr4
 *
 * RTT Cdmx Funnel Pidr4 Register
 * The PIDR4 register is part of the set of peripheral identification registers.
 */
union cavm_rtt_cdmx_funnel_pidr4
{
    uint32_t u;
    struct cavm_rtt_cdmx_funnel_pidr4_s
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
    /* struct cavm_rtt_cdmx_funnel_pidr4_s cn; */
};
typedef union cavm_rtt_cdmx_funnel_pidr4 cavm_rtt_cdmx_funnel_pidr4_t;

#define CAVM_RTT_CDMX_FUNNEL_PIDR4 CAVM_RTT_CDMX_FUNNEL_PIDR4_FUNC()
static inline uint64_t CAVM_RTT_CDMX_FUNNEL_PIDR4_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_RTT_CDMX_FUNNEL_PIDR4_FUNC(void)
{
    if (cavm_is_model(OCTEONTX_CNF10KB))
        return 0x80e040010fd0ll;
    __cavm_csr_fatal("RTT_CDMX_FUNNEL_PIDR4", 0, 0, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_RTT_CDMX_FUNNEL_PIDR4 cavm_rtt_cdmx_funnel_pidr4_t
#define bustype_CAVM_RTT_CDMX_FUNNEL_PIDR4 CSR_TYPE_NCB32b
#define basename_CAVM_RTT_CDMX_FUNNEL_PIDR4 "RTT_CDMX_FUNNEL_PIDR4"
#define busnum_CAVM_RTT_CDMX_FUNNEL_PIDR4 0
#define arguments_CAVM_RTT_CDMX_FUNNEL_PIDR4 -1,-1,-1,-1

/**
 * Register (NCB32b) rtt_cdmx_funnel_pidr5
 *
 * RTT Cdmx Funnel Pidr5 Register
 * The PIDR5 register is part of the set of peripheral identification registers.
 */
union cavm_rtt_cdmx_funnel_pidr5
{
    uint32_t u;
    struct cavm_rtt_cdmx_funnel_pidr5_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t reserved_8_31         : 24;
        uint32_t pidr5                 : 8;  /**< [  7:  0](RO) Reserved. */
#else /* Word 0 - Little Endian */
        uint32_t pidr5                 : 8;  /**< [  7:  0](RO) Reserved. */
        uint32_t reserved_8_31         : 24;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_rtt_cdmx_funnel_pidr5_s cn; */
};
typedef union cavm_rtt_cdmx_funnel_pidr5 cavm_rtt_cdmx_funnel_pidr5_t;

#define CAVM_RTT_CDMX_FUNNEL_PIDR5 CAVM_RTT_CDMX_FUNNEL_PIDR5_FUNC()
static inline uint64_t CAVM_RTT_CDMX_FUNNEL_PIDR5_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_RTT_CDMX_FUNNEL_PIDR5_FUNC(void)
{
    if (cavm_is_model(OCTEONTX_CNF10KB))
        return 0x80e040010fd4ll;
    __cavm_csr_fatal("RTT_CDMX_FUNNEL_PIDR5", 0, 0, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_RTT_CDMX_FUNNEL_PIDR5 cavm_rtt_cdmx_funnel_pidr5_t
#define bustype_CAVM_RTT_CDMX_FUNNEL_PIDR5 CSR_TYPE_NCB32b
#define basename_CAVM_RTT_CDMX_FUNNEL_PIDR5 "RTT_CDMX_FUNNEL_PIDR5"
#define busnum_CAVM_RTT_CDMX_FUNNEL_PIDR5 0
#define arguments_CAVM_RTT_CDMX_FUNNEL_PIDR5 -1,-1,-1,-1

/**
 * Register (NCB32b) rtt_cdmx_funnel_pidr6
 *
 * RTT Cdmx Funnel Pidr6 Register
 * The PIDR6 register is part of the set of peripheral identification registers.
 */
union cavm_rtt_cdmx_funnel_pidr6
{
    uint32_t u;
    struct cavm_rtt_cdmx_funnel_pidr6_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t reserved_8_31         : 24;
        uint32_t pidr6                 : 8;  /**< [  7:  0](RO) Reserved. */
#else /* Word 0 - Little Endian */
        uint32_t pidr6                 : 8;  /**< [  7:  0](RO) Reserved. */
        uint32_t reserved_8_31         : 24;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_rtt_cdmx_funnel_pidr6_s cn; */
};
typedef union cavm_rtt_cdmx_funnel_pidr6 cavm_rtt_cdmx_funnel_pidr6_t;

#define CAVM_RTT_CDMX_FUNNEL_PIDR6 CAVM_RTT_CDMX_FUNNEL_PIDR6_FUNC()
static inline uint64_t CAVM_RTT_CDMX_FUNNEL_PIDR6_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_RTT_CDMX_FUNNEL_PIDR6_FUNC(void)
{
    if (cavm_is_model(OCTEONTX_CNF10KB))
        return 0x80e040010fd8ll;
    __cavm_csr_fatal("RTT_CDMX_FUNNEL_PIDR6", 0, 0, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_RTT_CDMX_FUNNEL_PIDR6 cavm_rtt_cdmx_funnel_pidr6_t
#define bustype_CAVM_RTT_CDMX_FUNNEL_PIDR6 CSR_TYPE_NCB32b
#define basename_CAVM_RTT_CDMX_FUNNEL_PIDR6 "RTT_CDMX_FUNNEL_PIDR6"
#define busnum_CAVM_RTT_CDMX_FUNNEL_PIDR6 0
#define arguments_CAVM_RTT_CDMX_FUNNEL_PIDR6 -1,-1,-1,-1

/**
 * Register (NCB32b) rtt_cdmx_funnel_pidr7
 *
 * RTT Cdmx Funnel Pidr7 Register
 * The PIDR7 register is part of the set of peripheral identification registers.
 */
union cavm_rtt_cdmx_funnel_pidr7
{
    uint32_t u;
    struct cavm_rtt_cdmx_funnel_pidr7_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t reserved_8_31         : 24;
        uint32_t pidr7                 : 8;  /**< [  7:  0](RO) Reserved. */
#else /* Word 0 - Little Endian */
        uint32_t pidr7                 : 8;  /**< [  7:  0](RO) Reserved. */
        uint32_t reserved_8_31         : 24;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_rtt_cdmx_funnel_pidr7_s cn; */
};
typedef union cavm_rtt_cdmx_funnel_pidr7 cavm_rtt_cdmx_funnel_pidr7_t;

#define CAVM_RTT_CDMX_FUNNEL_PIDR7 CAVM_RTT_CDMX_FUNNEL_PIDR7_FUNC()
static inline uint64_t CAVM_RTT_CDMX_FUNNEL_PIDR7_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_RTT_CDMX_FUNNEL_PIDR7_FUNC(void)
{
    if (cavm_is_model(OCTEONTX_CNF10KB))
        return 0x80e040010fdcll;
    __cavm_csr_fatal("RTT_CDMX_FUNNEL_PIDR7", 0, 0, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_RTT_CDMX_FUNNEL_PIDR7 cavm_rtt_cdmx_funnel_pidr7_t
#define bustype_CAVM_RTT_CDMX_FUNNEL_PIDR7 CSR_TYPE_NCB32b
#define basename_CAVM_RTT_CDMX_FUNNEL_PIDR7 "RTT_CDMX_FUNNEL_PIDR7"
#define busnum_CAVM_RTT_CDMX_FUNNEL_PIDR7 0
#define arguments_CAVM_RTT_CDMX_FUNNEL_PIDR7 -1,-1,-1,-1

/**
 * Register (NCB32b) rtt_cdmx_funnel_prioritycontrol
 *
 * RTT Cdmx Funnel Prioritycontrol Register
 * The Priority Control register is for setting the priority of each port of the
 * funnel. It is a requirement of the programming software that the ports are all
 * disabled before the priority control register contents are changed. Changing the
 * port priorities in real time is not supported. If the priority control register is
 * written when one or more of the ports are enabled, then the write is silently
 * rejected and the value in the priority control register remains unchanged. The lower
 * the priority value, the higher is its priority when selecting the next port to be
 * serviced. If two or more ports have the same priority value, then the lowest
 * numbered port is serviced first.
 */
union cavm_rtt_cdmx_funnel_prioritycontrol
{
    uint32_t u;
    struct cavm_rtt_cdmx_funnel_prioritycontrol_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t sbz_0                 : 8;  /**< [ 31: 24](R/W) Software should write the field as all 0s. */
        uint32_t priport7              : 3;  /**< [ 23: 21](R/W) Priority value for port 7 */
        uint32_t priport6              : 3;  /**< [ 20: 18](R/W) Priority value for port 6 */
        uint32_t priport5              : 3;  /**< [ 17: 15](R/W) Priority value for port 5 */
        uint32_t priport4              : 3;  /**< [ 14: 12](R/W) Priority value for port 4 */
        uint32_t priport3              : 3;  /**< [ 11:  9](R/W) Priority value for port 3 */
        uint32_t priport2              : 3;  /**< [  8:  6](R/W) Priority value for port 2 */
        uint32_t priport1              : 3;  /**< [  5:  3](R/W) Priority value for port 1 */
        uint32_t priport0              : 3;  /**< [  2:  0](R/W) Priority value for port 0 */
#else /* Word 0 - Little Endian */
        uint32_t priport0              : 3;  /**< [  2:  0](R/W) Priority value for port 0 */
        uint32_t priport1              : 3;  /**< [  5:  3](R/W) Priority value for port 1 */
        uint32_t priport2              : 3;  /**< [  8:  6](R/W) Priority value for port 2 */
        uint32_t priport3              : 3;  /**< [ 11:  9](R/W) Priority value for port 3 */
        uint32_t priport4              : 3;  /**< [ 14: 12](R/W) Priority value for port 4 */
        uint32_t priport5              : 3;  /**< [ 17: 15](R/W) Priority value for port 5 */
        uint32_t priport6              : 3;  /**< [ 20: 18](R/W) Priority value for port 6 */
        uint32_t priport7              : 3;  /**< [ 23: 21](R/W) Priority value for port 7 */
        uint32_t sbz_0                 : 8;  /**< [ 31: 24](R/W) Software should write the field as all 0s. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_rtt_cdmx_funnel_prioritycontrol_s cn; */
};
typedef union cavm_rtt_cdmx_funnel_prioritycontrol cavm_rtt_cdmx_funnel_prioritycontrol_t;

#define CAVM_RTT_CDMX_FUNNEL_PRIORITYCONTROL CAVM_RTT_CDMX_FUNNEL_PRIORITYCONTROL_FUNC()
static inline uint64_t CAVM_RTT_CDMX_FUNNEL_PRIORITYCONTROL_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_RTT_CDMX_FUNNEL_PRIORITYCONTROL_FUNC(void)
{
    if (cavm_is_model(OCTEONTX_CNF10KB))
        return 0x80e040010004ll;
    __cavm_csr_fatal("RTT_CDMX_FUNNEL_PRIORITYCONTROL", 0, 0, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_RTT_CDMX_FUNNEL_PRIORITYCONTROL cavm_rtt_cdmx_funnel_prioritycontrol_t
#define bustype_CAVM_RTT_CDMX_FUNNEL_PRIORITYCONTROL CSR_TYPE_NCB32b
#define basename_CAVM_RTT_CDMX_FUNNEL_PRIORITYCONTROL "RTT_CDMX_FUNNEL_PRIORITYCONTROL"
#define busnum_CAVM_RTT_CDMX_FUNNEL_PRIORITYCONTROL 0
#define arguments_CAVM_RTT_CDMX_FUNNEL_PRIORITYCONTROL -1,-1,-1,-1

#endif /* __CAVM_CSRS_RTT_CDMX_H__ */
