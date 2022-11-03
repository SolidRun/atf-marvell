#ifndef __CAVM_CSRS_RTT_SHARED_H__
#define __CAVM_CSRS_RTT_SHARED_H__
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
 * OcteonTX RTT_SHARED.
 *
 * This file is auto generated. Do not edit.
 *
 */

/**
 * Register (NCB32b) rtt_cdmx_rom_authstatus
 *
 * RTT Cdmx Rom Authstatus Register
 * Reports the current status of the authentication control signals.
 */
union cavm_rtt_cdmx_rom_authstatus
{
    uint32_t u;
    struct cavm_rtt_cdmx_rom_authstatus_s
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
    /* struct cavm_rtt_cdmx_rom_authstatus_s cn; */
};
typedef union cavm_rtt_cdmx_rom_authstatus cavm_rtt_cdmx_rom_authstatus_t;

#define CAVM_RTT_CDMX_ROM_AUTHSTATUS CAVM_RTT_CDMX_ROM_AUTHSTATUS_FUNC()
static inline uint64_t CAVM_RTT_CDMX_ROM_AUTHSTATUS_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_RTT_CDMX_ROM_AUTHSTATUS_FUNC(void)
{
    if (cavm_is_model(OCTEONTX_CNF10KB))
        return 0x80e040000fb8ll;
    __cavm_csr_fatal("RTT_CDMX_ROM_AUTHSTATUS", 0, 0, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_RTT_CDMX_ROM_AUTHSTATUS cavm_rtt_cdmx_rom_authstatus_t
#define bustype_CAVM_RTT_CDMX_ROM_AUTHSTATUS CSR_TYPE_NCB32b
#define basename_CAVM_RTT_CDMX_ROM_AUTHSTATUS "RTT_CDMX_ROM_AUTHSTATUS"
#define busnum_CAVM_RTT_CDMX_ROM_AUTHSTATUS 0
#define arguments_CAVM_RTT_CDMX_ROM_AUTHSTATUS -1,-1,-1,-1

/**
 * Register (NCB32b) rtt_cdmx_rom_cidr0
 *
 * RTT Cdmx Rom Cidr0 Register
 * The CIDR0 register is part of the set of component identification registers.
 */
union cavm_rtt_cdmx_rom_cidr0
{
    uint32_t u;
    struct cavm_rtt_cdmx_rom_cidr0_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t reserved_8_31         : 24;
        uint32_t prmbl_0               : 8;  /**< [  7:  0](RO) Preamble. Returns 0x0D. */
#else /* Word 0 - Little Endian */
        uint32_t prmbl_0               : 8;  /**< [  7:  0](RO) Preamble. Returns 0x0D. */
        uint32_t reserved_8_31         : 24;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_rtt_cdmx_rom_cidr0_s cn; */
};
typedef union cavm_rtt_cdmx_rom_cidr0 cavm_rtt_cdmx_rom_cidr0_t;

#define CAVM_RTT_CDMX_ROM_CIDR0 CAVM_RTT_CDMX_ROM_CIDR0_FUNC()
static inline uint64_t CAVM_RTT_CDMX_ROM_CIDR0_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_RTT_CDMX_ROM_CIDR0_FUNC(void)
{
    if (cavm_is_model(OCTEONTX_CNF10KB))
        return 0x80e040000ff0ll;
    __cavm_csr_fatal("RTT_CDMX_ROM_CIDR0", 0, 0, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_RTT_CDMX_ROM_CIDR0 cavm_rtt_cdmx_rom_cidr0_t
#define bustype_CAVM_RTT_CDMX_ROM_CIDR0 CSR_TYPE_NCB32b
#define basename_CAVM_RTT_CDMX_ROM_CIDR0 "RTT_CDMX_ROM_CIDR0"
#define busnum_CAVM_RTT_CDMX_ROM_CIDR0 0
#define arguments_CAVM_RTT_CDMX_ROM_CIDR0 -1,-1,-1,-1

/**
 * Register (NCB32b) rtt_cdmx_rom_cidr1
 *
 * RTT Cdmx Rom Cidr1 Register
 * The CIDR1 register is part of the set of component identification registers.
 */
union cavm_rtt_cdmx_rom_cidr1
{
    uint32_t u;
    struct cavm_rtt_cdmx_rom_cidr1_s
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
    /* struct cavm_rtt_cdmx_rom_cidr1_s cn; */
};
typedef union cavm_rtt_cdmx_rom_cidr1 cavm_rtt_cdmx_rom_cidr1_t;

#define CAVM_RTT_CDMX_ROM_CIDR1 CAVM_RTT_CDMX_ROM_CIDR1_FUNC()
static inline uint64_t CAVM_RTT_CDMX_ROM_CIDR1_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_RTT_CDMX_ROM_CIDR1_FUNC(void)
{
    if (cavm_is_model(OCTEONTX_CNF10KB))
        return 0x80e040000ff4ll;
    __cavm_csr_fatal("RTT_CDMX_ROM_CIDR1", 0, 0, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_RTT_CDMX_ROM_CIDR1 cavm_rtt_cdmx_rom_cidr1_t
#define bustype_CAVM_RTT_CDMX_ROM_CIDR1 CSR_TYPE_NCB32b
#define basename_CAVM_RTT_CDMX_ROM_CIDR1 "RTT_CDMX_ROM_CIDR1"
#define busnum_CAVM_RTT_CDMX_ROM_CIDR1 0
#define arguments_CAVM_RTT_CDMX_ROM_CIDR1 -1,-1,-1,-1

/**
 * Register (NCB32b) rtt_cdmx_rom_cidr2
 *
 * RTT Cdmx Rom Cidr2 Register
 * The CIDR2 register is part of the set of component identification registers.
 */
union cavm_rtt_cdmx_rom_cidr2
{
    uint32_t u;
    struct cavm_rtt_cdmx_rom_cidr2_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t reserved_8_31         : 24;
        uint32_t prmbl_2               : 8;  /**< [  7:  0](RO) Preamble. Returns 0x05. */
#else /* Word 0 - Little Endian */
        uint32_t prmbl_2               : 8;  /**< [  7:  0](RO) Preamble. Returns 0x05. */
        uint32_t reserved_8_31         : 24;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_rtt_cdmx_rom_cidr2_s cn; */
};
typedef union cavm_rtt_cdmx_rom_cidr2 cavm_rtt_cdmx_rom_cidr2_t;

#define CAVM_RTT_CDMX_ROM_CIDR2 CAVM_RTT_CDMX_ROM_CIDR2_FUNC()
static inline uint64_t CAVM_RTT_CDMX_ROM_CIDR2_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_RTT_CDMX_ROM_CIDR2_FUNC(void)
{
    if (cavm_is_model(OCTEONTX_CNF10KB))
        return 0x80e040000ff8ll;
    __cavm_csr_fatal("RTT_CDMX_ROM_CIDR2", 0, 0, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_RTT_CDMX_ROM_CIDR2 cavm_rtt_cdmx_rom_cidr2_t
#define bustype_CAVM_RTT_CDMX_ROM_CIDR2 CSR_TYPE_NCB32b
#define basename_CAVM_RTT_CDMX_ROM_CIDR2 "RTT_CDMX_ROM_CIDR2"
#define busnum_CAVM_RTT_CDMX_ROM_CIDR2 0
#define arguments_CAVM_RTT_CDMX_ROM_CIDR2 -1,-1,-1,-1

/**
 * Register (NCB32b) rtt_cdmx_rom_cidr3
 *
 * RTT Cdmx Rom Cidr3 Register
 * The CIDR3 register is part of the set of component identification registers.
 */
union cavm_rtt_cdmx_rom_cidr3
{
    uint32_t u;
    struct cavm_rtt_cdmx_rom_cidr3_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t reserved_8_31         : 24;
        uint32_t prmbl_3               : 8;  /**< [  7:  0](RO) Preamble. Returns 0xB1. */
#else /* Word 0 - Little Endian */
        uint32_t prmbl_3               : 8;  /**< [  7:  0](RO) Preamble. Returns 0xB1. */
        uint32_t reserved_8_31         : 24;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_rtt_cdmx_rom_cidr3_s cn; */
};
typedef union cavm_rtt_cdmx_rom_cidr3 cavm_rtt_cdmx_rom_cidr3_t;

#define CAVM_RTT_CDMX_ROM_CIDR3 CAVM_RTT_CDMX_ROM_CIDR3_FUNC()
static inline uint64_t CAVM_RTT_CDMX_ROM_CIDR3_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_RTT_CDMX_ROM_CIDR3_FUNC(void)
{
    if (cavm_is_model(OCTEONTX_CNF10KB))
        return 0x80e040000ffcll;
    __cavm_csr_fatal("RTT_CDMX_ROM_CIDR3", 0, 0, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_RTT_CDMX_ROM_CIDR3 cavm_rtt_cdmx_rom_cidr3_t
#define bustype_CAVM_RTT_CDMX_ROM_CIDR3 CSR_TYPE_NCB32b
#define basename_CAVM_RTT_CDMX_ROM_CIDR3 "RTT_CDMX_ROM_CIDR3"
#define busnum_CAVM_RTT_CDMX_ROM_CIDR3 0
#define arguments_CAVM_RTT_CDMX_ROM_CIDR3 -1,-1,-1,-1

/**
 * Register (NCB32b) rtt_cdmx_rom_devarch
 *
 * RTT Cdmx Rom Devarch Register
 * Identifies the architect and architecture of a CoreSight component. The architect
 * might differ from the designer of a component, for example Arm defines the
 * architecture but another company designs and implements the component.
 */
union cavm_rtt_cdmx_rom_devarch
{
    uint32_t u;
    struct cavm_rtt_cdmx_rom_devarch_s
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
    /* struct cavm_rtt_cdmx_rom_devarch_s cn; */
};
typedef union cavm_rtt_cdmx_rom_devarch cavm_rtt_cdmx_rom_devarch_t;

#define CAVM_RTT_CDMX_ROM_DEVARCH CAVM_RTT_CDMX_ROM_DEVARCH_FUNC()
static inline uint64_t CAVM_RTT_CDMX_ROM_DEVARCH_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_RTT_CDMX_ROM_DEVARCH_FUNC(void)
{
    if (cavm_is_model(OCTEONTX_CNF10KB))
        return 0x80e040000fbcll;
    __cavm_csr_fatal("RTT_CDMX_ROM_DEVARCH", 0, 0, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_RTT_CDMX_ROM_DEVARCH cavm_rtt_cdmx_rom_devarch_t
#define bustype_CAVM_RTT_CDMX_ROM_DEVARCH CSR_TYPE_NCB32b
#define basename_CAVM_RTT_CDMX_ROM_DEVARCH "RTT_CDMX_ROM_DEVARCH"
#define busnum_CAVM_RTT_CDMX_ROM_DEVARCH 0
#define arguments_CAVM_RTT_CDMX_ROM_DEVARCH -1,-1,-1,-1

/**
 * Register (NCB32b) rtt_cdmx_rom_devid
 *
 * RTT Cdmx Rom Devid Register
 * This register is IMPLEMENTATION DEFINED for each Part Number and Designer. The
 * register indicates the capabilities of the component.
 */
union cavm_rtt_cdmx_rom_devid
{
    uint32_t u;
    struct cavm_rtt_cdmx_rom_devid_s
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
    /* struct cavm_rtt_cdmx_rom_devid_s cn; */
};
typedef union cavm_rtt_cdmx_rom_devid cavm_rtt_cdmx_rom_devid_t;

#define CAVM_RTT_CDMX_ROM_DEVID CAVM_RTT_CDMX_ROM_DEVID_FUNC()
static inline uint64_t CAVM_RTT_CDMX_ROM_DEVID_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_RTT_CDMX_ROM_DEVID_FUNC(void)
{
    if (cavm_is_model(OCTEONTX_CNF10KB))
        return 0x80e040000fc8ll;
    __cavm_csr_fatal("RTT_CDMX_ROM_DEVID", 0, 0, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_RTT_CDMX_ROM_DEVID cavm_rtt_cdmx_rom_devid_t
#define bustype_CAVM_RTT_CDMX_ROM_DEVID CSR_TYPE_NCB32b
#define basename_CAVM_RTT_CDMX_ROM_DEVID "RTT_CDMX_ROM_DEVID"
#define busnum_CAVM_RTT_CDMX_ROM_DEVID 0
#define arguments_CAVM_RTT_CDMX_ROM_DEVID -1,-1,-1,-1

/**
 * Register (NCB32b) rtt_cdmx_rom_pidr0
 *
 * RTT Cdmx Rom Pidr0 Register
 * The PIDR0 register is part of the set of peripheral identification registers.
 */
union cavm_rtt_cdmx_rom_pidr0
{
    uint32_t u;
    struct cavm_rtt_cdmx_rom_pidr0_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t reserved_8_31         : 24;
        uint32_t part_0                : 8;  /**< [  7:  0](RO/H) Part number, bits[7:0]. Set by the configuration inputs part_number[7:0] */
#else /* Word 0 - Little Endian */
        uint32_t part_0                : 8;  /**< [  7:  0](RO/H) Part number, bits[7:0]. Set by the configuration inputs part_number[7:0] */
        uint32_t reserved_8_31         : 24;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_rtt_cdmx_rom_pidr0_s cn; */
};
typedef union cavm_rtt_cdmx_rom_pidr0 cavm_rtt_cdmx_rom_pidr0_t;

#define CAVM_RTT_CDMX_ROM_PIDR0 CAVM_RTT_CDMX_ROM_PIDR0_FUNC()
static inline uint64_t CAVM_RTT_CDMX_ROM_PIDR0_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_RTT_CDMX_ROM_PIDR0_FUNC(void)
{
    if (cavm_is_model(OCTEONTX_CNF10KB))
        return 0x80e040000fe0ll;
    __cavm_csr_fatal("RTT_CDMX_ROM_PIDR0", 0, 0, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_RTT_CDMX_ROM_PIDR0 cavm_rtt_cdmx_rom_pidr0_t
#define bustype_CAVM_RTT_CDMX_ROM_PIDR0 CSR_TYPE_NCB32b
#define basename_CAVM_RTT_CDMX_ROM_PIDR0 "RTT_CDMX_ROM_PIDR0"
#define busnum_CAVM_RTT_CDMX_ROM_PIDR0 0
#define arguments_CAVM_RTT_CDMX_ROM_PIDR0 -1,-1,-1,-1

/**
 * Register (NCB32b) rtt_cdmx_rom_pidr1
 *
 * RTT Cdmx Rom Pidr1 Register
 * The PIDR1 register is part of the set of peripheral identification registers.
 */
union cavm_rtt_cdmx_rom_pidr1
{
    uint32_t u;
    struct cavm_rtt_cdmx_rom_pidr1_s
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
    /* struct cavm_rtt_cdmx_rom_pidr1_s cn; */
};
typedef union cavm_rtt_cdmx_rom_pidr1 cavm_rtt_cdmx_rom_pidr1_t;

#define CAVM_RTT_CDMX_ROM_PIDR1 CAVM_RTT_CDMX_ROM_PIDR1_FUNC()
static inline uint64_t CAVM_RTT_CDMX_ROM_PIDR1_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_RTT_CDMX_ROM_PIDR1_FUNC(void)
{
    if (cavm_is_model(OCTEONTX_CNF10KB))
        return 0x80e040000fe4ll;
    __cavm_csr_fatal("RTT_CDMX_ROM_PIDR1", 0, 0, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_RTT_CDMX_ROM_PIDR1 cavm_rtt_cdmx_rom_pidr1_t
#define bustype_CAVM_RTT_CDMX_ROM_PIDR1 CSR_TYPE_NCB32b
#define basename_CAVM_RTT_CDMX_ROM_PIDR1 "RTT_CDMX_ROM_PIDR1"
#define busnum_CAVM_RTT_CDMX_ROM_PIDR1 0
#define arguments_CAVM_RTT_CDMX_ROM_PIDR1 -1,-1,-1,-1

/**
 * Register (NCB32b) rtt_cdmx_rom_pidr2
 *
 * RTT Cdmx Rom Pidr2 Register
 * The PIDR2 register is part of the set of peripheral identification registers.
 */
union cavm_rtt_cdmx_rom_pidr2
{
    uint32_t u;
    struct cavm_rtt_cdmx_rom_pidr2_s
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
    /* struct cavm_rtt_cdmx_rom_pidr2_s cn; */
};
typedef union cavm_rtt_cdmx_rom_pidr2 cavm_rtt_cdmx_rom_pidr2_t;

#define CAVM_RTT_CDMX_ROM_PIDR2 CAVM_RTT_CDMX_ROM_PIDR2_FUNC()
static inline uint64_t CAVM_RTT_CDMX_ROM_PIDR2_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_RTT_CDMX_ROM_PIDR2_FUNC(void)
{
    if (cavm_is_model(OCTEONTX_CNF10KB))
        return 0x80e040000fe8ll;
    __cavm_csr_fatal("RTT_CDMX_ROM_PIDR2", 0, 0, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_RTT_CDMX_ROM_PIDR2 cavm_rtt_cdmx_rom_pidr2_t
#define bustype_CAVM_RTT_CDMX_ROM_PIDR2 CSR_TYPE_NCB32b
#define basename_CAVM_RTT_CDMX_ROM_PIDR2 "RTT_CDMX_ROM_PIDR2"
#define busnum_CAVM_RTT_CDMX_ROM_PIDR2 0
#define arguments_CAVM_RTT_CDMX_ROM_PIDR2 -1,-1,-1,-1

/**
 * Register (NCB32b) rtt_cdmx_rom_pidr3
 *
 * RTT Cdmx Rom Pidr3 Register
 * The PIDR3 register is part of the set of peripheral identification registers.
 */
union cavm_rtt_cdmx_rom_pidr3
{
    uint32_t u;
    struct cavm_rtt_cdmx_rom_pidr3_s
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
    /* struct cavm_rtt_cdmx_rom_pidr3_s cn; */
};
typedef union cavm_rtt_cdmx_rom_pidr3 cavm_rtt_cdmx_rom_pidr3_t;

#define CAVM_RTT_CDMX_ROM_PIDR3 CAVM_RTT_CDMX_ROM_PIDR3_FUNC()
static inline uint64_t CAVM_RTT_CDMX_ROM_PIDR3_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_RTT_CDMX_ROM_PIDR3_FUNC(void)
{
    if (cavm_is_model(OCTEONTX_CNF10KB))
        return 0x80e040000fecll;
    __cavm_csr_fatal("RTT_CDMX_ROM_PIDR3", 0, 0, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_RTT_CDMX_ROM_PIDR3 cavm_rtt_cdmx_rom_pidr3_t
#define bustype_CAVM_RTT_CDMX_ROM_PIDR3 CSR_TYPE_NCB32b
#define basename_CAVM_RTT_CDMX_ROM_PIDR3 "RTT_CDMX_ROM_PIDR3"
#define busnum_CAVM_RTT_CDMX_ROM_PIDR3 0
#define arguments_CAVM_RTT_CDMX_ROM_PIDR3 -1,-1,-1,-1

/**
 * Register (NCB32b) rtt_cdmx_rom_pidr4
 *
 * RTT Cdmx Rom Pidr4 Register
 * The PIDR4 register is part of the set of peripheral identification registers.
 */
union cavm_rtt_cdmx_rom_pidr4
{
    uint32_t u;
    struct cavm_rtt_cdmx_rom_pidr4_s
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
    /* struct cavm_rtt_cdmx_rom_pidr4_s cn; */
};
typedef union cavm_rtt_cdmx_rom_pidr4 cavm_rtt_cdmx_rom_pidr4_t;

#define CAVM_RTT_CDMX_ROM_PIDR4 CAVM_RTT_CDMX_ROM_PIDR4_FUNC()
static inline uint64_t CAVM_RTT_CDMX_ROM_PIDR4_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_RTT_CDMX_ROM_PIDR4_FUNC(void)
{
    if (cavm_is_model(OCTEONTX_CNF10KB))
        return 0x80e040000fd0ll;
    __cavm_csr_fatal("RTT_CDMX_ROM_PIDR4", 0, 0, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_RTT_CDMX_ROM_PIDR4 cavm_rtt_cdmx_rom_pidr4_t
#define bustype_CAVM_RTT_CDMX_ROM_PIDR4 CSR_TYPE_NCB32b
#define basename_CAVM_RTT_CDMX_ROM_PIDR4 "RTT_CDMX_ROM_PIDR4"
#define busnum_CAVM_RTT_CDMX_ROM_PIDR4 0
#define arguments_CAVM_RTT_CDMX_ROM_PIDR4 -1,-1,-1,-1

/**
 * Register (NCB32b) rtt_cdmx_rom_pidr5
 *
 * RTT Cdmx Rom Pidr5 Register
 * The PIDR5 register is part of the set of peripheral identification registers.
 */
union cavm_rtt_cdmx_rom_pidr5
{
    uint32_t u;
    struct cavm_rtt_cdmx_rom_pidr5_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t reserved_8_31         : 24;
        uint32_t pidr5                 : 8;  /**< [  7:  0](RO) Reserved. */
#else /* Word 0 - Little Endian */
        uint32_t pidr5                 : 8;  /**< [  7:  0](RO) Reserved. */
        uint32_t reserved_8_31         : 24;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_rtt_cdmx_rom_pidr5_s cn; */
};
typedef union cavm_rtt_cdmx_rom_pidr5 cavm_rtt_cdmx_rom_pidr5_t;

#define CAVM_RTT_CDMX_ROM_PIDR5 CAVM_RTT_CDMX_ROM_PIDR5_FUNC()
static inline uint64_t CAVM_RTT_CDMX_ROM_PIDR5_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_RTT_CDMX_ROM_PIDR5_FUNC(void)
{
    if (cavm_is_model(OCTEONTX_CNF10KB))
        return 0x80e040000fd4ll;
    __cavm_csr_fatal("RTT_CDMX_ROM_PIDR5", 0, 0, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_RTT_CDMX_ROM_PIDR5 cavm_rtt_cdmx_rom_pidr5_t
#define bustype_CAVM_RTT_CDMX_ROM_PIDR5 CSR_TYPE_NCB32b
#define basename_CAVM_RTT_CDMX_ROM_PIDR5 "RTT_CDMX_ROM_PIDR5"
#define busnum_CAVM_RTT_CDMX_ROM_PIDR5 0
#define arguments_CAVM_RTT_CDMX_ROM_PIDR5 -1,-1,-1,-1

/**
 * Register (NCB32b) rtt_cdmx_rom_pidr6
 *
 * RTT Cdmx Rom Pidr6 Register
 * The PIDR6 register is part of the set of peripheral identification registers.
 */
union cavm_rtt_cdmx_rom_pidr6
{
    uint32_t u;
    struct cavm_rtt_cdmx_rom_pidr6_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t reserved_8_31         : 24;
        uint32_t pidr6                 : 8;  /**< [  7:  0](RO) Reserved. */
#else /* Word 0 - Little Endian */
        uint32_t pidr6                 : 8;  /**< [  7:  0](RO) Reserved. */
        uint32_t reserved_8_31         : 24;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_rtt_cdmx_rom_pidr6_s cn; */
};
typedef union cavm_rtt_cdmx_rom_pidr6 cavm_rtt_cdmx_rom_pidr6_t;

#define CAVM_RTT_CDMX_ROM_PIDR6 CAVM_RTT_CDMX_ROM_PIDR6_FUNC()
static inline uint64_t CAVM_RTT_CDMX_ROM_PIDR6_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_RTT_CDMX_ROM_PIDR6_FUNC(void)
{
    if (cavm_is_model(OCTEONTX_CNF10KB))
        return 0x80e040000fd8ll;
    __cavm_csr_fatal("RTT_CDMX_ROM_PIDR6", 0, 0, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_RTT_CDMX_ROM_PIDR6 cavm_rtt_cdmx_rom_pidr6_t
#define bustype_CAVM_RTT_CDMX_ROM_PIDR6 CSR_TYPE_NCB32b
#define basename_CAVM_RTT_CDMX_ROM_PIDR6 "RTT_CDMX_ROM_PIDR6"
#define busnum_CAVM_RTT_CDMX_ROM_PIDR6 0
#define arguments_CAVM_RTT_CDMX_ROM_PIDR6 -1,-1,-1,-1

/**
 * Register (NCB32b) rtt_cdmx_rom_pidr7
 *
 * RTT Cdmx Rom Pidr7 Register
 * The PIDR7 register is part of the set of peripheral identification registers.
 */
union cavm_rtt_cdmx_rom_pidr7
{
    uint32_t u;
    struct cavm_rtt_cdmx_rom_pidr7_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t reserved_8_31         : 24;
        uint32_t pidr7                 : 8;  /**< [  7:  0](RO) Reserved. */
#else /* Word 0 - Little Endian */
        uint32_t pidr7                 : 8;  /**< [  7:  0](RO) Reserved. */
        uint32_t reserved_8_31         : 24;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_rtt_cdmx_rom_pidr7_s cn; */
};
typedef union cavm_rtt_cdmx_rom_pidr7 cavm_rtt_cdmx_rom_pidr7_t;

#define CAVM_RTT_CDMX_ROM_PIDR7 CAVM_RTT_CDMX_ROM_PIDR7_FUNC()
static inline uint64_t CAVM_RTT_CDMX_ROM_PIDR7_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_RTT_CDMX_ROM_PIDR7_FUNC(void)
{
    if (cavm_is_model(OCTEONTX_CNF10KB))
        return 0x80e040000fdcll;
    __cavm_csr_fatal("RTT_CDMX_ROM_PIDR7", 0, 0, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_RTT_CDMX_ROM_PIDR7 cavm_rtt_cdmx_rom_pidr7_t
#define bustype_CAVM_RTT_CDMX_ROM_PIDR7 CSR_TYPE_NCB32b
#define basename_CAVM_RTT_CDMX_ROM_PIDR7 "RTT_CDMX_ROM_PIDR7"
#define busnum_CAVM_RTT_CDMX_ROM_PIDR7 0
#define arguments_CAVM_RTT_CDMX_ROM_PIDR7 -1,-1,-1,-1

/**
 * Register (NCB32b) rtt_cdmx_rom_romentry#
 *
 * RTT Cdmx Rom Romentry Register
 * Each register contains a descripter of a CoreSight component in the system. All ROM
 * table entries conform to the same format.
 */
union cavm_rtt_cdmx_rom_romentryx
{
    uint32_t u;
    struct cavm_rtt_cdmx_rom_romentryx_s
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
    /* struct cavm_rtt_cdmx_rom_romentryx_s cn; */
};
typedef union cavm_rtt_cdmx_rom_romentryx cavm_rtt_cdmx_rom_romentryx_t;

static inline uint64_t CAVM_RTT_CDMX_ROM_ROMENTRYX(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_RTT_CDMX_ROM_ROMENTRYX(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CNF10KB) && (a<=511))
        return 0x80e040000000ll + 4ll * ((a) & 0x1ff);
    __cavm_csr_fatal("RTT_CDMX_ROM_ROMENTRYX", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_RTT_CDMX_ROM_ROMENTRYX(a) cavm_rtt_cdmx_rom_romentryx_t
#define bustype_CAVM_RTT_CDMX_ROM_ROMENTRYX(a) CSR_TYPE_NCB32b
#define basename_CAVM_RTT_CDMX_ROM_ROMENTRYX(a) "RTT_CDMX_ROM_ROMENTRYX"
#define busnum_CAVM_RTT_CDMX_ROM_ROMENTRYX(a) (a)
#define arguments_CAVM_RTT_CDMX_ROM_ROMENTRYX(a) (a),-1,-1,-1

/**
 * Register (NCB32b) rtt_mdmx_rom_authstatus
 *
 * RTT Mdmx Rom Authstatus Register
 * Reports the current status of the authentication control signals.
 */
union cavm_rtt_mdmx_rom_authstatus
{
    uint32_t u;
    struct cavm_rtt_mdmx_rom_authstatus_s
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
    /* struct cavm_rtt_mdmx_rom_authstatus_s cn; */
};
typedef union cavm_rtt_mdmx_rom_authstatus cavm_rtt_mdmx_rom_authstatus_t;

#define CAVM_RTT_MDMX_ROM_AUTHSTATUS CAVM_RTT_MDMX_ROM_AUTHSTATUS_FUNC()
static inline uint64_t CAVM_RTT_MDMX_ROM_AUTHSTATUS_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_RTT_MDMX_ROM_AUTHSTATUS_FUNC(void)
{
    if (cavm_is_model(OCTEONTX_CNF10KB))
        return 0x80e080000fb8ll;
    __cavm_csr_fatal("RTT_MDMX_ROM_AUTHSTATUS", 0, 0, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_RTT_MDMX_ROM_AUTHSTATUS cavm_rtt_mdmx_rom_authstatus_t
#define bustype_CAVM_RTT_MDMX_ROM_AUTHSTATUS CSR_TYPE_NCB32b
#define basename_CAVM_RTT_MDMX_ROM_AUTHSTATUS "RTT_MDMX_ROM_AUTHSTATUS"
#define busnum_CAVM_RTT_MDMX_ROM_AUTHSTATUS 0
#define arguments_CAVM_RTT_MDMX_ROM_AUTHSTATUS -1,-1,-1,-1

/**
 * Register (NCB32b) rtt_mdmx_rom_cidr0
 *
 * RTT Mdmx Rom Cidr0 Register
 * The CIDR0 register is part of the set of component identification registers.
 */
union cavm_rtt_mdmx_rom_cidr0
{
    uint32_t u;
    struct cavm_rtt_mdmx_rom_cidr0_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t reserved_8_31         : 24;
        uint32_t prmbl_0               : 8;  /**< [  7:  0](RO) Preamble. Returns 0x0D. */
#else /* Word 0 - Little Endian */
        uint32_t prmbl_0               : 8;  /**< [  7:  0](RO) Preamble. Returns 0x0D. */
        uint32_t reserved_8_31         : 24;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_rtt_mdmx_rom_cidr0_s cn; */
};
typedef union cavm_rtt_mdmx_rom_cidr0 cavm_rtt_mdmx_rom_cidr0_t;

#define CAVM_RTT_MDMX_ROM_CIDR0 CAVM_RTT_MDMX_ROM_CIDR0_FUNC()
static inline uint64_t CAVM_RTT_MDMX_ROM_CIDR0_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_RTT_MDMX_ROM_CIDR0_FUNC(void)
{
    if (cavm_is_model(OCTEONTX_CNF10KB))
        return 0x80e080000ff0ll;
    __cavm_csr_fatal("RTT_MDMX_ROM_CIDR0", 0, 0, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_RTT_MDMX_ROM_CIDR0 cavm_rtt_mdmx_rom_cidr0_t
#define bustype_CAVM_RTT_MDMX_ROM_CIDR0 CSR_TYPE_NCB32b
#define basename_CAVM_RTT_MDMX_ROM_CIDR0 "RTT_MDMX_ROM_CIDR0"
#define busnum_CAVM_RTT_MDMX_ROM_CIDR0 0
#define arguments_CAVM_RTT_MDMX_ROM_CIDR0 -1,-1,-1,-1

/**
 * Register (NCB32b) rtt_mdmx_rom_cidr1
 *
 * RTT Mdmx Rom Cidr1 Register
 * The CIDR1 register is part of the set of component identification registers.
 */
union cavm_rtt_mdmx_rom_cidr1
{
    uint32_t u;
    struct cavm_rtt_mdmx_rom_cidr1_s
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
    /* struct cavm_rtt_mdmx_rom_cidr1_s cn; */
};
typedef union cavm_rtt_mdmx_rom_cidr1 cavm_rtt_mdmx_rom_cidr1_t;

#define CAVM_RTT_MDMX_ROM_CIDR1 CAVM_RTT_MDMX_ROM_CIDR1_FUNC()
static inline uint64_t CAVM_RTT_MDMX_ROM_CIDR1_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_RTT_MDMX_ROM_CIDR1_FUNC(void)
{
    if (cavm_is_model(OCTEONTX_CNF10KB))
        return 0x80e080000ff4ll;
    __cavm_csr_fatal("RTT_MDMX_ROM_CIDR1", 0, 0, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_RTT_MDMX_ROM_CIDR1 cavm_rtt_mdmx_rom_cidr1_t
#define bustype_CAVM_RTT_MDMX_ROM_CIDR1 CSR_TYPE_NCB32b
#define basename_CAVM_RTT_MDMX_ROM_CIDR1 "RTT_MDMX_ROM_CIDR1"
#define busnum_CAVM_RTT_MDMX_ROM_CIDR1 0
#define arguments_CAVM_RTT_MDMX_ROM_CIDR1 -1,-1,-1,-1

/**
 * Register (NCB32b) rtt_mdmx_rom_cidr2
 *
 * RTT Mdmx Rom Cidr2 Register
 * The CIDR2 register is part of the set of component identification registers.
 */
union cavm_rtt_mdmx_rom_cidr2
{
    uint32_t u;
    struct cavm_rtt_mdmx_rom_cidr2_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t reserved_8_31         : 24;
        uint32_t prmbl_2               : 8;  /**< [  7:  0](RO) Preamble. Returns 0x05. */
#else /* Word 0 - Little Endian */
        uint32_t prmbl_2               : 8;  /**< [  7:  0](RO) Preamble. Returns 0x05. */
        uint32_t reserved_8_31         : 24;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_rtt_mdmx_rom_cidr2_s cn; */
};
typedef union cavm_rtt_mdmx_rom_cidr2 cavm_rtt_mdmx_rom_cidr2_t;

#define CAVM_RTT_MDMX_ROM_CIDR2 CAVM_RTT_MDMX_ROM_CIDR2_FUNC()
static inline uint64_t CAVM_RTT_MDMX_ROM_CIDR2_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_RTT_MDMX_ROM_CIDR2_FUNC(void)
{
    if (cavm_is_model(OCTEONTX_CNF10KB))
        return 0x80e080000ff8ll;
    __cavm_csr_fatal("RTT_MDMX_ROM_CIDR2", 0, 0, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_RTT_MDMX_ROM_CIDR2 cavm_rtt_mdmx_rom_cidr2_t
#define bustype_CAVM_RTT_MDMX_ROM_CIDR2 CSR_TYPE_NCB32b
#define basename_CAVM_RTT_MDMX_ROM_CIDR2 "RTT_MDMX_ROM_CIDR2"
#define busnum_CAVM_RTT_MDMX_ROM_CIDR2 0
#define arguments_CAVM_RTT_MDMX_ROM_CIDR2 -1,-1,-1,-1

/**
 * Register (NCB32b) rtt_mdmx_rom_cidr3
 *
 * RTT Mdmx Rom Cidr3 Register
 * The CIDR3 register is part of the set of component identification registers.
 */
union cavm_rtt_mdmx_rom_cidr3
{
    uint32_t u;
    struct cavm_rtt_mdmx_rom_cidr3_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t reserved_8_31         : 24;
        uint32_t prmbl_3               : 8;  /**< [  7:  0](RO) Preamble. Returns 0xB1. */
#else /* Word 0 - Little Endian */
        uint32_t prmbl_3               : 8;  /**< [  7:  0](RO) Preamble. Returns 0xB1. */
        uint32_t reserved_8_31         : 24;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_rtt_mdmx_rom_cidr3_s cn; */
};
typedef union cavm_rtt_mdmx_rom_cidr3 cavm_rtt_mdmx_rom_cidr3_t;

#define CAVM_RTT_MDMX_ROM_CIDR3 CAVM_RTT_MDMX_ROM_CIDR3_FUNC()
static inline uint64_t CAVM_RTT_MDMX_ROM_CIDR3_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_RTT_MDMX_ROM_CIDR3_FUNC(void)
{
    if (cavm_is_model(OCTEONTX_CNF10KB))
        return 0x80e080000ffcll;
    __cavm_csr_fatal("RTT_MDMX_ROM_CIDR3", 0, 0, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_RTT_MDMX_ROM_CIDR3 cavm_rtt_mdmx_rom_cidr3_t
#define bustype_CAVM_RTT_MDMX_ROM_CIDR3 CSR_TYPE_NCB32b
#define basename_CAVM_RTT_MDMX_ROM_CIDR3 "RTT_MDMX_ROM_CIDR3"
#define busnum_CAVM_RTT_MDMX_ROM_CIDR3 0
#define arguments_CAVM_RTT_MDMX_ROM_CIDR3 -1,-1,-1,-1

/**
 * Register (NCB32b) rtt_mdmx_rom_devarch
 *
 * RTT Mdmx Rom Devarch Register
 * Identifies the architect and architecture of a CoreSight component. The architect
 * might differ from the designer of a component, for example Arm defines the
 * architecture but another company designs and implements the component.
 */
union cavm_rtt_mdmx_rom_devarch
{
    uint32_t u;
    struct cavm_rtt_mdmx_rom_devarch_s
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
    /* struct cavm_rtt_mdmx_rom_devarch_s cn; */
};
typedef union cavm_rtt_mdmx_rom_devarch cavm_rtt_mdmx_rom_devarch_t;

#define CAVM_RTT_MDMX_ROM_DEVARCH CAVM_RTT_MDMX_ROM_DEVARCH_FUNC()
static inline uint64_t CAVM_RTT_MDMX_ROM_DEVARCH_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_RTT_MDMX_ROM_DEVARCH_FUNC(void)
{
    if (cavm_is_model(OCTEONTX_CNF10KB))
        return 0x80e080000fbcll;
    __cavm_csr_fatal("RTT_MDMX_ROM_DEVARCH", 0, 0, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_RTT_MDMX_ROM_DEVARCH cavm_rtt_mdmx_rom_devarch_t
#define bustype_CAVM_RTT_MDMX_ROM_DEVARCH CSR_TYPE_NCB32b
#define basename_CAVM_RTT_MDMX_ROM_DEVARCH "RTT_MDMX_ROM_DEVARCH"
#define busnum_CAVM_RTT_MDMX_ROM_DEVARCH 0
#define arguments_CAVM_RTT_MDMX_ROM_DEVARCH -1,-1,-1,-1

/**
 * Register (NCB32b) rtt_mdmx_rom_devid
 *
 * RTT Mdmx Rom Devid Register
 * This register is IMPLEMENTATION DEFINED for each Part Number and Designer. The
 * register indicates the capabilities of the component.
 */
union cavm_rtt_mdmx_rom_devid
{
    uint32_t u;
    struct cavm_rtt_mdmx_rom_devid_s
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
    /* struct cavm_rtt_mdmx_rom_devid_s cn; */
};
typedef union cavm_rtt_mdmx_rom_devid cavm_rtt_mdmx_rom_devid_t;

#define CAVM_RTT_MDMX_ROM_DEVID CAVM_RTT_MDMX_ROM_DEVID_FUNC()
static inline uint64_t CAVM_RTT_MDMX_ROM_DEVID_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_RTT_MDMX_ROM_DEVID_FUNC(void)
{
    if (cavm_is_model(OCTEONTX_CNF10KB))
        return 0x80e080000fc8ll;
    __cavm_csr_fatal("RTT_MDMX_ROM_DEVID", 0, 0, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_RTT_MDMX_ROM_DEVID cavm_rtt_mdmx_rom_devid_t
#define bustype_CAVM_RTT_MDMX_ROM_DEVID CSR_TYPE_NCB32b
#define basename_CAVM_RTT_MDMX_ROM_DEVID "RTT_MDMX_ROM_DEVID"
#define busnum_CAVM_RTT_MDMX_ROM_DEVID 0
#define arguments_CAVM_RTT_MDMX_ROM_DEVID -1,-1,-1,-1

/**
 * Register (NCB32b) rtt_mdmx_rom_pidr0
 *
 * RTT Mdmx Rom Pidr0 Register
 * The PIDR0 register is part of the set of peripheral identification registers.
 */
union cavm_rtt_mdmx_rom_pidr0
{
    uint32_t u;
    struct cavm_rtt_mdmx_rom_pidr0_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t reserved_8_31         : 24;
        uint32_t part_0                : 8;  /**< [  7:  0](RO/H) Part number, bits[7:0]. Set by the configuration inputs part_number[7:0] */
#else /* Word 0 - Little Endian */
        uint32_t part_0                : 8;  /**< [  7:  0](RO/H) Part number, bits[7:0]. Set by the configuration inputs part_number[7:0] */
        uint32_t reserved_8_31         : 24;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_rtt_mdmx_rom_pidr0_s cn; */
};
typedef union cavm_rtt_mdmx_rom_pidr0 cavm_rtt_mdmx_rom_pidr0_t;

#define CAVM_RTT_MDMX_ROM_PIDR0 CAVM_RTT_MDMX_ROM_PIDR0_FUNC()
static inline uint64_t CAVM_RTT_MDMX_ROM_PIDR0_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_RTT_MDMX_ROM_PIDR0_FUNC(void)
{
    if (cavm_is_model(OCTEONTX_CNF10KB))
        return 0x80e080000fe0ll;
    __cavm_csr_fatal("RTT_MDMX_ROM_PIDR0", 0, 0, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_RTT_MDMX_ROM_PIDR0 cavm_rtt_mdmx_rom_pidr0_t
#define bustype_CAVM_RTT_MDMX_ROM_PIDR0 CSR_TYPE_NCB32b
#define basename_CAVM_RTT_MDMX_ROM_PIDR0 "RTT_MDMX_ROM_PIDR0"
#define busnum_CAVM_RTT_MDMX_ROM_PIDR0 0
#define arguments_CAVM_RTT_MDMX_ROM_PIDR0 -1,-1,-1,-1

/**
 * Register (NCB32b) rtt_mdmx_rom_pidr1
 *
 * RTT Mdmx Rom Pidr1 Register
 * The PIDR1 register is part of the set of peripheral identification registers.
 */
union cavm_rtt_mdmx_rom_pidr1
{
    uint32_t u;
    struct cavm_rtt_mdmx_rom_pidr1_s
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
    /* struct cavm_rtt_mdmx_rom_pidr1_s cn; */
};
typedef union cavm_rtt_mdmx_rom_pidr1 cavm_rtt_mdmx_rom_pidr1_t;

#define CAVM_RTT_MDMX_ROM_PIDR1 CAVM_RTT_MDMX_ROM_PIDR1_FUNC()
static inline uint64_t CAVM_RTT_MDMX_ROM_PIDR1_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_RTT_MDMX_ROM_PIDR1_FUNC(void)
{
    if (cavm_is_model(OCTEONTX_CNF10KB))
        return 0x80e080000fe4ll;
    __cavm_csr_fatal("RTT_MDMX_ROM_PIDR1", 0, 0, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_RTT_MDMX_ROM_PIDR1 cavm_rtt_mdmx_rom_pidr1_t
#define bustype_CAVM_RTT_MDMX_ROM_PIDR1 CSR_TYPE_NCB32b
#define basename_CAVM_RTT_MDMX_ROM_PIDR1 "RTT_MDMX_ROM_PIDR1"
#define busnum_CAVM_RTT_MDMX_ROM_PIDR1 0
#define arguments_CAVM_RTT_MDMX_ROM_PIDR1 -1,-1,-1,-1

/**
 * Register (NCB32b) rtt_mdmx_rom_pidr2
 *
 * RTT Mdmx Rom Pidr2 Register
 * The PIDR2 register is part of the set of peripheral identification registers.
 */
union cavm_rtt_mdmx_rom_pidr2
{
    uint32_t u;
    struct cavm_rtt_mdmx_rom_pidr2_s
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
    /* struct cavm_rtt_mdmx_rom_pidr2_s cn; */
};
typedef union cavm_rtt_mdmx_rom_pidr2 cavm_rtt_mdmx_rom_pidr2_t;

#define CAVM_RTT_MDMX_ROM_PIDR2 CAVM_RTT_MDMX_ROM_PIDR2_FUNC()
static inline uint64_t CAVM_RTT_MDMX_ROM_PIDR2_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_RTT_MDMX_ROM_PIDR2_FUNC(void)
{
    if (cavm_is_model(OCTEONTX_CNF10KB))
        return 0x80e080000fe8ll;
    __cavm_csr_fatal("RTT_MDMX_ROM_PIDR2", 0, 0, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_RTT_MDMX_ROM_PIDR2 cavm_rtt_mdmx_rom_pidr2_t
#define bustype_CAVM_RTT_MDMX_ROM_PIDR2 CSR_TYPE_NCB32b
#define basename_CAVM_RTT_MDMX_ROM_PIDR2 "RTT_MDMX_ROM_PIDR2"
#define busnum_CAVM_RTT_MDMX_ROM_PIDR2 0
#define arguments_CAVM_RTT_MDMX_ROM_PIDR2 -1,-1,-1,-1

/**
 * Register (NCB32b) rtt_mdmx_rom_pidr3
 *
 * RTT Mdmx Rom Pidr3 Register
 * The PIDR3 register is part of the set of peripheral identification registers.
 */
union cavm_rtt_mdmx_rom_pidr3
{
    uint32_t u;
    struct cavm_rtt_mdmx_rom_pidr3_s
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
    /* struct cavm_rtt_mdmx_rom_pidr3_s cn; */
};
typedef union cavm_rtt_mdmx_rom_pidr3 cavm_rtt_mdmx_rom_pidr3_t;

#define CAVM_RTT_MDMX_ROM_PIDR3 CAVM_RTT_MDMX_ROM_PIDR3_FUNC()
static inline uint64_t CAVM_RTT_MDMX_ROM_PIDR3_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_RTT_MDMX_ROM_PIDR3_FUNC(void)
{
    if (cavm_is_model(OCTEONTX_CNF10KB))
        return 0x80e080000fecll;
    __cavm_csr_fatal("RTT_MDMX_ROM_PIDR3", 0, 0, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_RTT_MDMX_ROM_PIDR3 cavm_rtt_mdmx_rom_pidr3_t
#define bustype_CAVM_RTT_MDMX_ROM_PIDR3 CSR_TYPE_NCB32b
#define basename_CAVM_RTT_MDMX_ROM_PIDR3 "RTT_MDMX_ROM_PIDR3"
#define busnum_CAVM_RTT_MDMX_ROM_PIDR3 0
#define arguments_CAVM_RTT_MDMX_ROM_PIDR3 -1,-1,-1,-1

/**
 * Register (NCB32b) rtt_mdmx_rom_pidr4
 *
 * RTT Mdmx Rom Pidr4 Register
 * The PIDR4 register is part of the set of peripheral identification registers.
 */
union cavm_rtt_mdmx_rom_pidr4
{
    uint32_t u;
    struct cavm_rtt_mdmx_rom_pidr4_s
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
    /* struct cavm_rtt_mdmx_rom_pidr4_s cn; */
};
typedef union cavm_rtt_mdmx_rom_pidr4 cavm_rtt_mdmx_rom_pidr4_t;

#define CAVM_RTT_MDMX_ROM_PIDR4 CAVM_RTT_MDMX_ROM_PIDR4_FUNC()
static inline uint64_t CAVM_RTT_MDMX_ROM_PIDR4_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_RTT_MDMX_ROM_PIDR4_FUNC(void)
{
    if (cavm_is_model(OCTEONTX_CNF10KB))
        return 0x80e080000fd0ll;
    __cavm_csr_fatal("RTT_MDMX_ROM_PIDR4", 0, 0, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_RTT_MDMX_ROM_PIDR4 cavm_rtt_mdmx_rom_pidr4_t
#define bustype_CAVM_RTT_MDMX_ROM_PIDR4 CSR_TYPE_NCB32b
#define basename_CAVM_RTT_MDMX_ROM_PIDR4 "RTT_MDMX_ROM_PIDR4"
#define busnum_CAVM_RTT_MDMX_ROM_PIDR4 0
#define arguments_CAVM_RTT_MDMX_ROM_PIDR4 -1,-1,-1,-1

/**
 * Register (NCB32b) rtt_mdmx_rom_pidr5
 *
 * RTT Mdmx Rom Pidr5 Register
 * The PIDR5 register is part of the set of peripheral identification registers.
 */
union cavm_rtt_mdmx_rom_pidr5
{
    uint32_t u;
    struct cavm_rtt_mdmx_rom_pidr5_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t reserved_8_31         : 24;
        uint32_t pidr5                 : 8;  /**< [  7:  0](RO) Reserved. */
#else /* Word 0 - Little Endian */
        uint32_t pidr5                 : 8;  /**< [  7:  0](RO) Reserved. */
        uint32_t reserved_8_31         : 24;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_rtt_mdmx_rom_pidr5_s cn; */
};
typedef union cavm_rtt_mdmx_rom_pidr5 cavm_rtt_mdmx_rom_pidr5_t;

#define CAVM_RTT_MDMX_ROM_PIDR5 CAVM_RTT_MDMX_ROM_PIDR5_FUNC()
static inline uint64_t CAVM_RTT_MDMX_ROM_PIDR5_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_RTT_MDMX_ROM_PIDR5_FUNC(void)
{
    if (cavm_is_model(OCTEONTX_CNF10KB))
        return 0x80e080000fd4ll;
    __cavm_csr_fatal("RTT_MDMX_ROM_PIDR5", 0, 0, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_RTT_MDMX_ROM_PIDR5 cavm_rtt_mdmx_rom_pidr5_t
#define bustype_CAVM_RTT_MDMX_ROM_PIDR5 CSR_TYPE_NCB32b
#define basename_CAVM_RTT_MDMX_ROM_PIDR5 "RTT_MDMX_ROM_PIDR5"
#define busnum_CAVM_RTT_MDMX_ROM_PIDR5 0
#define arguments_CAVM_RTT_MDMX_ROM_PIDR5 -1,-1,-1,-1

/**
 * Register (NCB32b) rtt_mdmx_rom_pidr6
 *
 * RTT Mdmx Rom Pidr6 Register
 * The PIDR6 register is part of the set of peripheral identification registers.
 */
union cavm_rtt_mdmx_rom_pidr6
{
    uint32_t u;
    struct cavm_rtt_mdmx_rom_pidr6_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t reserved_8_31         : 24;
        uint32_t pidr6                 : 8;  /**< [  7:  0](RO) Reserved. */
#else /* Word 0 - Little Endian */
        uint32_t pidr6                 : 8;  /**< [  7:  0](RO) Reserved. */
        uint32_t reserved_8_31         : 24;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_rtt_mdmx_rom_pidr6_s cn; */
};
typedef union cavm_rtt_mdmx_rom_pidr6 cavm_rtt_mdmx_rom_pidr6_t;

#define CAVM_RTT_MDMX_ROM_PIDR6 CAVM_RTT_MDMX_ROM_PIDR6_FUNC()
static inline uint64_t CAVM_RTT_MDMX_ROM_PIDR6_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_RTT_MDMX_ROM_PIDR6_FUNC(void)
{
    if (cavm_is_model(OCTEONTX_CNF10KB))
        return 0x80e080000fd8ll;
    __cavm_csr_fatal("RTT_MDMX_ROM_PIDR6", 0, 0, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_RTT_MDMX_ROM_PIDR6 cavm_rtt_mdmx_rom_pidr6_t
#define bustype_CAVM_RTT_MDMX_ROM_PIDR6 CSR_TYPE_NCB32b
#define basename_CAVM_RTT_MDMX_ROM_PIDR6 "RTT_MDMX_ROM_PIDR6"
#define busnum_CAVM_RTT_MDMX_ROM_PIDR6 0
#define arguments_CAVM_RTT_MDMX_ROM_PIDR6 -1,-1,-1,-1

/**
 * Register (NCB32b) rtt_mdmx_rom_pidr7
 *
 * RTT Mdmx Rom Pidr7 Register
 * The PIDR7 register is part of the set of peripheral identification registers.
 */
union cavm_rtt_mdmx_rom_pidr7
{
    uint32_t u;
    struct cavm_rtt_mdmx_rom_pidr7_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t reserved_8_31         : 24;
        uint32_t pidr7                 : 8;  /**< [  7:  0](RO) Reserved. */
#else /* Word 0 - Little Endian */
        uint32_t pidr7                 : 8;  /**< [  7:  0](RO) Reserved. */
        uint32_t reserved_8_31         : 24;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_rtt_mdmx_rom_pidr7_s cn; */
};
typedef union cavm_rtt_mdmx_rom_pidr7 cavm_rtt_mdmx_rom_pidr7_t;

#define CAVM_RTT_MDMX_ROM_PIDR7 CAVM_RTT_MDMX_ROM_PIDR7_FUNC()
static inline uint64_t CAVM_RTT_MDMX_ROM_PIDR7_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_RTT_MDMX_ROM_PIDR7_FUNC(void)
{
    if (cavm_is_model(OCTEONTX_CNF10KB))
        return 0x80e080000fdcll;
    __cavm_csr_fatal("RTT_MDMX_ROM_PIDR7", 0, 0, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_RTT_MDMX_ROM_PIDR7 cavm_rtt_mdmx_rom_pidr7_t
#define bustype_CAVM_RTT_MDMX_ROM_PIDR7 CSR_TYPE_NCB32b
#define basename_CAVM_RTT_MDMX_ROM_PIDR7 "RTT_MDMX_ROM_PIDR7"
#define busnum_CAVM_RTT_MDMX_ROM_PIDR7 0
#define arguments_CAVM_RTT_MDMX_ROM_PIDR7 -1,-1,-1,-1

/**
 * Register (NCB32b) rtt_mdmx_rom_romentry#
 *
 * RTT Mdmx Rom Romentry Register
 * Each register contains a descripter of a CoreSight component in the system. All ROM
 * table entries conform to the same format.
 */
union cavm_rtt_mdmx_rom_romentryx
{
    uint32_t u;
    struct cavm_rtt_mdmx_rom_romentryx_s
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
    /* struct cavm_rtt_mdmx_rom_romentryx_s cn; */
};
typedef union cavm_rtt_mdmx_rom_romentryx cavm_rtt_mdmx_rom_romentryx_t;

static inline uint64_t CAVM_RTT_MDMX_ROM_ROMENTRYX(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_RTT_MDMX_ROM_ROMENTRYX(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CNF10KB) && (a<=511))
        return 0x80e080000000ll + 4ll * ((a) & 0x1ff);
    __cavm_csr_fatal("RTT_MDMX_ROM_ROMENTRYX", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_RTT_MDMX_ROM_ROMENTRYX(a) cavm_rtt_mdmx_rom_romentryx_t
#define bustype_CAVM_RTT_MDMX_ROM_ROMENTRYX(a) CSR_TYPE_NCB32b
#define basename_CAVM_RTT_MDMX_ROM_ROMENTRYX(a) "RTT_MDMX_ROM_ROMENTRYX"
#define busnum_CAVM_RTT_MDMX_ROM_ROMENTRYX(a) (a)
#define arguments_CAVM_RTT_MDMX_ROM_ROMENTRYX(a) (a),-1,-1,-1

/**
 * Register (NCB32b) rtt_shrd_etf_authstatus
 *
 * RTT Shrd Etf Authstatus Register
 * Reports the current status of the authentication control signals.
 */
union cavm_rtt_shrd_etf_authstatus
{
    uint32_t u;
    struct cavm_rtt_shrd_etf_authstatus_s
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
    /* struct cavm_rtt_shrd_etf_authstatus_s cn; */
};
typedef union cavm_rtt_shrd_etf_authstatus cavm_rtt_shrd_etf_authstatus_t;

#define CAVM_RTT_SHRD_ETF_AUTHSTATUS CAVM_RTT_SHRD_ETF_AUTHSTATUS_FUNC()
static inline uint64_t CAVM_RTT_SHRD_ETF_AUTHSTATUS_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_RTT_SHRD_ETF_AUTHSTATUS_FUNC(void)
{
    if (cavm_is_model(OCTEONTX_CNF10KB))
        return 0x80e000020fb8ll;
    __cavm_csr_fatal("RTT_SHRD_ETF_AUTHSTATUS", 0, 0, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_RTT_SHRD_ETF_AUTHSTATUS cavm_rtt_shrd_etf_authstatus_t
#define bustype_CAVM_RTT_SHRD_ETF_AUTHSTATUS CSR_TYPE_NCB32b
#define basename_CAVM_RTT_SHRD_ETF_AUTHSTATUS "RTT_SHRD_ETF_AUTHSTATUS"
#define busnum_CAVM_RTT_SHRD_ETF_AUTHSTATUS 0
#define arguments_CAVM_RTT_SHRD_ETF_AUTHSTATUS -1,-1,-1,-1

/**
 * Register (NCB32b) rtt_shrd_etf_bufwm
 *
 * RTT Shrd Etf Bufwm Register
 * The value that is programmed into this register indicates the desired threshold
 * vacancy level in 32-bit words in the trace memory. When the available space in the
 * FIFO is less than or equal to this value, that is, fill level \>= (MEM_SIZE - BUFWM),
 * the full output is asserted and the STS.Full bit is set. This register is used only
 * in the FIFO modes, that is, SWF1, SWF2, and HWF modes. In CB mode, the same
 * functionality is obtained by programming the RWP to the desired vacancy trigger
 * level, so that when the pointer wraps around, the full output gets asserted
 * indicating that the vacancy level has fallen below the desired level. Reading this
 * register returns the programmed value. The maximum value that can be written into
 * this register is MEM_SIZE - 1, in which case the full output is asserted after the
 * first 32-bit word is written to trace memory. Writing to this register other than
 * when in Disabled state results in UNPREDICTABLE behavior. Any software using it must
 * program it with an initial value before setting the CTL.TraceCaptEn bit to 1.
 */
union cavm_rtt_shrd_etf_bufwm
{
    uint32_t u;
    struct cavm_rtt_shrd_etf_bufwm_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t razwi_0               : 25; /**< [ 31:  7](R/W) Read-As-Zero, Writes Ignored. */
        uint32_t bufwm                 : 7;  /**< [  6:  0](R/W) Buffer Level Watermark. Indicates the desired threshold vacancy level in 32-bit
                                                                 words in the trace memory. The width of the register is log2(MEM_SIZE). */
#else /* Word 0 - Little Endian */
        uint32_t bufwm                 : 7;  /**< [  6:  0](R/W) Buffer Level Watermark. Indicates the desired threshold vacancy level in 32-bit
                                                                 words in the trace memory. The width of the register is log2(MEM_SIZE). */
        uint32_t razwi_0               : 25; /**< [ 31:  7](R/W) Read-As-Zero, Writes Ignored. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_rtt_shrd_etf_bufwm_s cn; */
};
typedef union cavm_rtt_shrd_etf_bufwm cavm_rtt_shrd_etf_bufwm_t;

#define CAVM_RTT_SHRD_ETF_BUFWM CAVM_RTT_SHRD_ETF_BUFWM_FUNC()
static inline uint64_t CAVM_RTT_SHRD_ETF_BUFWM_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_RTT_SHRD_ETF_BUFWM_FUNC(void)
{
    if (cavm_is_model(OCTEONTX_CNF10KB))
        return 0x80e000020034ll;
    __cavm_csr_fatal("RTT_SHRD_ETF_BUFWM", 0, 0, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_RTT_SHRD_ETF_BUFWM cavm_rtt_shrd_etf_bufwm_t
#define bustype_CAVM_RTT_SHRD_ETF_BUFWM CSR_TYPE_NCB32b
#define basename_CAVM_RTT_SHRD_ETF_BUFWM "RTT_SHRD_ETF_BUFWM"
#define busnum_CAVM_RTT_SHRD_ETF_BUFWM 0
#define arguments_CAVM_RTT_SHRD_ETF_BUFWM -1,-1,-1,-1

/**
 * Register (NCB32b) rtt_shrd_etf_cbuflevel
 *
 * RTT Shrd Etf Cbuflevel Register
 * The CBUFLEVEL register indicates the current fill level of the trace memory in units
 * of 32-bit words. When the TMC leaves Disabled state, this register dynamically
 * indicates the current fill level of trace memory. It retains its value on entering
 * Disabled state. It is not affected by the reprogramming of pointer registers in
 * Disabled state with the exception of RRD reads and RWD writes. Before leaving the
 * Disabled state software must program RRP with the same value as RWP. Without doing
 * this results in UNPREDICTABLE behavior.
 */
union cavm_rtt_shrd_etf_cbuflevel
{
    uint32_t u;
    struct cavm_rtt_shrd_etf_cbuflevel_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t razwi_0               : 24; /**< [ 31:  8](RO) Read-As-Zero, Writes Ignored. */
        uint32_t cbuflevel             : 8;  /**< [  7:  0](RO) Current Buffer Fill Level. Indicates the current fill level of the trace memory
                                                                 in 32-bit words. The width of the register is 1 + log2(MEM_SIZE). */
#else /* Word 0 - Little Endian */
        uint32_t cbuflevel             : 8;  /**< [  7:  0](RO) Current Buffer Fill Level. Indicates the current fill level of the trace memory
                                                                 in 32-bit words. The width of the register is 1 + log2(MEM_SIZE). */
        uint32_t razwi_0               : 24; /**< [ 31:  8](RO) Read-As-Zero, Writes Ignored. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_rtt_shrd_etf_cbuflevel_s cn; */
};
typedef union cavm_rtt_shrd_etf_cbuflevel cavm_rtt_shrd_etf_cbuflevel_t;

#define CAVM_RTT_SHRD_ETF_CBUFLEVEL CAVM_RTT_SHRD_ETF_CBUFLEVEL_FUNC()
static inline uint64_t CAVM_RTT_SHRD_ETF_CBUFLEVEL_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_RTT_SHRD_ETF_CBUFLEVEL_FUNC(void)
{
    if (cavm_is_model(OCTEONTX_CNF10KB))
        return 0x80e000020030ll;
    __cavm_csr_fatal("RTT_SHRD_ETF_CBUFLEVEL", 0, 0, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_RTT_SHRD_ETF_CBUFLEVEL cavm_rtt_shrd_etf_cbuflevel_t
#define bustype_CAVM_RTT_SHRD_ETF_CBUFLEVEL CSR_TYPE_NCB32b
#define basename_CAVM_RTT_SHRD_ETF_CBUFLEVEL "RTT_SHRD_ETF_CBUFLEVEL"
#define busnum_CAVM_RTT_SHRD_ETF_CBUFLEVEL 0
#define arguments_CAVM_RTT_SHRD_ETF_CBUFLEVEL -1,-1,-1,-1

/**
 * Register (NCB32b) rtt_shrd_etf_cidr0
 *
 * RTT Shrd Etf Cidr0 Register
 * The CIDR0 register is part of the set of component identification registers.
 */
union cavm_rtt_shrd_etf_cidr0
{
    uint32_t u;
    struct cavm_rtt_shrd_etf_cidr0_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t reserved_8_31         : 24;
        uint32_t prmbl_0               : 8;  /**< [  7:  0](RO) Preamble. Returns 0x0D. */
#else /* Word 0 - Little Endian */
        uint32_t prmbl_0               : 8;  /**< [  7:  0](RO) Preamble. Returns 0x0D. */
        uint32_t reserved_8_31         : 24;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_rtt_shrd_etf_cidr0_s cn; */
};
typedef union cavm_rtt_shrd_etf_cidr0 cavm_rtt_shrd_etf_cidr0_t;

#define CAVM_RTT_SHRD_ETF_CIDR0 CAVM_RTT_SHRD_ETF_CIDR0_FUNC()
static inline uint64_t CAVM_RTT_SHRD_ETF_CIDR0_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_RTT_SHRD_ETF_CIDR0_FUNC(void)
{
    if (cavm_is_model(OCTEONTX_CNF10KB))
        return 0x80e000020ff0ll;
    __cavm_csr_fatal("RTT_SHRD_ETF_CIDR0", 0, 0, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_RTT_SHRD_ETF_CIDR0 cavm_rtt_shrd_etf_cidr0_t
#define bustype_CAVM_RTT_SHRD_ETF_CIDR0 CSR_TYPE_NCB32b
#define basename_CAVM_RTT_SHRD_ETF_CIDR0 "RTT_SHRD_ETF_CIDR0"
#define busnum_CAVM_RTT_SHRD_ETF_CIDR0 0
#define arguments_CAVM_RTT_SHRD_ETF_CIDR0 -1,-1,-1,-1

/**
 * Register (NCB32b) rtt_shrd_etf_cidr1
 *
 * RTT Shrd Etf Cidr1 Register
 * The CIDR1 register is part of the set of component identification registers.
 */
union cavm_rtt_shrd_etf_cidr1
{
    uint32_t u;
    struct cavm_rtt_shrd_etf_cidr1_s
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
    /* struct cavm_rtt_shrd_etf_cidr1_s cn; */
};
typedef union cavm_rtt_shrd_etf_cidr1 cavm_rtt_shrd_etf_cidr1_t;

#define CAVM_RTT_SHRD_ETF_CIDR1 CAVM_RTT_SHRD_ETF_CIDR1_FUNC()
static inline uint64_t CAVM_RTT_SHRD_ETF_CIDR1_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_RTT_SHRD_ETF_CIDR1_FUNC(void)
{
    if (cavm_is_model(OCTEONTX_CNF10KB))
        return 0x80e000020ff4ll;
    __cavm_csr_fatal("RTT_SHRD_ETF_CIDR1", 0, 0, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_RTT_SHRD_ETF_CIDR1 cavm_rtt_shrd_etf_cidr1_t
#define bustype_CAVM_RTT_SHRD_ETF_CIDR1 CSR_TYPE_NCB32b
#define basename_CAVM_RTT_SHRD_ETF_CIDR1 "RTT_SHRD_ETF_CIDR1"
#define busnum_CAVM_RTT_SHRD_ETF_CIDR1 0
#define arguments_CAVM_RTT_SHRD_ETF_CIDR1 -1,-1,-1,-1

/**
 * Register (NCB32b) rtt_shrd_etf_cidr2
 *
 * RTT Shrd Etf Cidr2 Register
 * The CIDR2 register is part of the set of component identification registers.
 */
union cavm_rtt_shrd_etf_cidr2
{
    uint32_t u;
    struct cavm_rtt_shrd_etf_cidr2_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t reserved_8_31         : 24;
        uint32_t prmbl_2               : 8;  /**< [  7:  0](RO) Preamble. Returns 0x05. */
#else /* Word 0 - Little Endian */
        uint32_t prmbl_2               : 8;  /**< [  7:  0](RO) Preamble. Returns 0x05. */
        uint32_t reserved_8_31         : 24;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_rtt_shrd_etf_cidr2_s cn; */
};
typedef union cavm_rtt_shrd_etf_cidr2 cavm_rtt_shrd_etf_cidr2_t;

#define CAVM_RTT_SHRD_ETF_CIDR2 CAVM_RTT_SHRD_ETF_CIDR2_FUNC()
static inline uint64_t CAVM_RTT_SHRD_ETF_CIDR2_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_RTT_SHRD_ETF_CIDR2_FUNC(void)
{
    if (cavm_is_model(OCTEONTX_CNF10KB))
        return 0x80e000020ff8ll;
    __cavm_csr_fatal("RTT_SHRD_ETF_CIDR2", 0, 0, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_RTT_SHRD_ETF_CIDR2 cavm_rtt_shrd_etf_cidr2_t
#define bustype_CAVM_RTT_SHRD_ETF_CIDR2 CSR_TYPE_NCB32b
#define basename_CAVM_RTT_SHRD_ETF_CIDR2 "RTT_SHRD_ETF_CIDR2"
#define busnum_CAVM_RTT_SHRD_ETF_CIDR2 0
#define arguments_CAVM_RTT_SHRD_ETF_CIDR2 -1,-1,-1,-1

/**
 * Register (NCB32b) rtt_shrd_etf_cidr3
 *
 * RTT Shrd Etf Cidr3 Register
 * The CIDR3 register is part of the set of component identification registers.
 */
union cavm_rtt_shrd_etf_cidr3
{
    uint32_t u;
    struct cavm_rtt_shrd_etf_cidr3_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t reserved_8_31         : 24;
        uint32_t prmbl_3               : 8;  /**< [  7:  0](RO) Preamble. Returns 0xB1. */
#else /* Word 0 - Little Endian */
        uint32_t prmbl_3               : 8;  /**< [  7:  0](RO) Preamble. Returns 0xB1. */
        uint32_t reserved_8_31         : 24;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_rtt_shrd_etf_cidr3_s cn; */
};
typedef union cavm_rtt_shrd_etf_cidr3 cavm_rtt_shrd_etf_cidr3_t;

#define CAVM_RTT_SHRD_ETF_CIDR3 CAVM_RTT_SHRD_ETF_CIDR3_FUNC()
static inline uint64_t CAVM_RTT_SHRD_ETF_CIDR3_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_RTT_SHRD_ETF_CIDR3_FUNC(void)
{
    if (cavm_is_model(OCTEONTX_CNF10KB))
        return 0x80e000020ffcll;
    __cavm_csr_fatal("RTT_SHRD_ETF_CIDR3", 0, 0, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_RTT_SHRD_ETF_CIDR3 cavm_rtt_shrd_etf_cidr3_t
#define bustype_CAVM_RTT_SHRD_ETF_CIDR3 CSR_TYPE_NCB32b
#define basename_CAVM_RTT_SHRD_ETF_CIDR3 "RTT_SHRD_ETF_CIDR3"
#define busnum_CAVM_RTT_SHRD_ETF_CIDR3 0
#define arguments_CAVM_RTT_SHRD_ETF_CIDR3 -1,-1,-1,-1

/**
 * Register (NCB32b) rtt_shrd_etf_claimclr
 *
 * RTT Shrd Etf Claimclr Register
 * This register forms one half of the claim tag value. On writes, this location
 * enables individual bits to be cleared. On reads, it returns the current claim tag
 * value.
 */
union cavm_rtt_shrd_etf_claimclr
{
    uint32_t u;
    struct cavm_rtt_shrd_etf_claimclr_s
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
    /* struct cavm_rtt_shrd_etf_claimclr_s cn; */
};
typedef union cavm_rtt_shrd_etf_claimclr cavm_rtt_shrd_etf_claimclr_t;

#define CAVM_RTT_SHRD_ETF_CLAIMCLR CAVM_RTT_SHRD_ETF_CLAIMCLR_FUNC()
static inline uint64_t CAVM_RTT_SHRD_ETF_CLAIMCLR_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_RTT_SHRD_ETF_CLAIMCLR_FUNC(void)
{
    if (cavm_is_model(OCTEONTX_CNF10KB))
        return 0x80e000020fa4ll;
    __cavm_csr_fatal("RTT_SHRD_ETF_CLAIMCLR", 0, 0, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_RTT_SHRD_ETF_CLAIMCLR cavm_rtt_shrd_etf_claimclr_t
#define bustype_CAVM_RTT_SHRD_ETF_CLAIMCLR CSR_TYPE_NCB32b
#define basename_CAVM_RTT_SHRD_ETF_CLAIMCLR "RTT_SHRD_ETF_CLAIMCLR"
#define busnum_CAVM_RTT_SHRD_ETF_CLAIMCLR 0
#define arguments_CAVM_RTT_SHRD_ETF_CLAIMCLR -1,-1,-1,-1

/**
 * Register (NCB32b) rtt_shrd_etf_claimset
 *
 * RTT Shrd Etf Claimset Register
 * This register forms one half of the claim tag value. On writes, this location
 * enables individual bits to be set. On reads, it returns the number of bits that can
 * be set.
 */
union cavm_rtt_shrd_etf_claimset
{
    uint32_t u;
    struct cavm_rtt_shrd_etf_claimset_s
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
    /* struct cavm_rtt_shrd_etf_claimset_s cn; */
};
typedef union cavm_rtt_shrd_etf_claimset cavm_rtt_shrd_etf_claimset_t;

#define CAVM_RTT_SHRD_ETF_CLAIMSET CAVM_RTT_SHRD_ETF_CLAIMSET_FUNC()
static inline uint64_t CAVM_RTT_SHRD_ETF_CLAIMSET_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_RTT_SHRD_ETF_CLAIMSET_FUNC(void)
{
    if (cavm_is_model(OCTEONTX_CNF10KB))
        return 0x80e000020fa0ll;
    __cavm_csr_fatal("RTT_SHRD_ETF_CLAIMSET", 0, 0, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_RTT_SHRD_ETF_CLAIMSET cavm_rtt_shrd_etf_claimset_t
#define bustype_CAVM_RTT_SHRD_ETF_CLAIMSET CSR_TYPE_NCB32b
#define basename_CAVM_RTT_SHRD_ETF_CLAIMSET "RTT_SHRD_ETF_CLAIMSET"
#define busnum_CAVM_RTT_SHRD_ETF_CLAIMSET 0
#define arguments_CAVM_RTT_SHRD_ETF_CLAIMSET -1,-1,-1,-1

/**
 * Register (NCB32b) rtt_shrd_etf_ctl
 *
 * RTT Shrd Etf Ctl Register
 * This register controls trace stream capture. Setting the CTL.TraceCaptEn bit to 1
 * enables the TMC to capture the trace data. When trace capture is enabled, the
 * formatter behavior is controlled by the FFCR register.
 */
union cavm_rtt_shrd_etf_ctl
{
    uint32_t u;
    struct cavm_rtt_shrd_etf_ctl_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t razwi_0               : 31; /**< [ 31:  1](R/W) Read-As-Zero, Writes Ignored. */
        uint32_t tracecapten           : 1;  /**< [  0:  0](R/W) Trace capture enable. */
#else /* Word 0 - Little Endian */
        uint32_t tracecapten           : 1;  /**< [  0:  0](R/W) Trace capture enable. */
        uint32_t razwi_0               : 31; /**< [ 31:  1](R/W) Read-As-Zero, Writes Ignored. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_rtt_shrd_etf_ctl_s cn; */
};
typedef union cavm_rtt_shrd_etf_ctl cavm_rtt_shrd_etf_ctl_t;

#define CAVM_RTT_SHRD_ETF_CTL CAVM_RTT_SHRD_ETF_CTL_FUNC()
static inline uint64_t CAVM_RTT_SHRD_ETF_CTL_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_RTT_SHRD_ETF_CTL_FUNC(void)
{
    if (cavm_is_model(OCTEONTX_CNF10KB))
        return 0x80e000020020ll;
    __cavm_csr_fatal("RTT_SHRD_ETF_CTL", 0, 0, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_RTT_SHRD_ETF_CTL cavm_rtt_shrd_etf_ctl_t
#define bustype_CAVM_RTT_SHRD_ETF_CTL CSR_TYPE_NCB32b
#define basename_CAVM_RTT_SHRD_ETF_CTL "RTT_SHRD_ETF_CTL"
#define busnum_CAVM_RTT_SHRD_ETF_CTL 0
#define arguments_CAVM_RTT_SHRD_ETF_CTL -1,-1,-1,-1

/**
 * Register (NCB32b) rtt_shrd_etf_devid
 *
 * RTT Shrd Etf Devid Register
 * This register is IMPLEMENTATION DEFINED for each Part Number and Designer. The
 * register indicates the capabilities of the component.
 */
union cavm_rtt_shrd_etf_devid
{
    uint32_t u;
    struct cavm_rtt_shrd_etf_devid_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t reserved_11_31        : 21;
        uint32_t memwidth              : 3;  /**< [ 10:  8](RO) This value is twice ATB_DATA_WIDTH. */
        uint32_t configtype            : 2;  /**< [  7:  6](RO) Returns 0x2, indicating ETF configuration. */
        uint32_t clkscheme             : 1;  /**< [  5:  5](RO) RAM Clocking Scheme. This value indicates the TMC RAM clocking scheme used, that
                                                                 is, whether the TMC RAM operates synchronously or asynchronously to the TMC
                                                                 clock. Fixed to 0 indicating that TMC RAM clock is synchronous to the clk input. */
        uint32_t atbinportcount        : 5;  /**< [  4:  0](RO) Hidden Level of ATB input multiplexing. This value indicates the type/number of
                                                                 ATB multiplexing present on the input ATB. Fixed to 0x00 indicating that no
                                                                 multiplexing is present. */
#else /* Word 0 - Little Endian */
        uint32_t atbinportcount        : 5;  /**< [  4:  0](RO) Hidden Level of ATB input multiplexing. This value indicates the type/number of
                                                                 ATB multiplexing present on the input ATB. Fixed to 0x00 indicating that no
                                                                 multiplexing is present. */
        uint32_t clkscheme             : 1;  /**< [  5:  5](RO) RAM Clocking Scheme. This value indicates the TMC RAM clocking scheme used, that
                                                                 is, whether the TMC RAM operates synchronously or asynchronously to the TMC
                                                                 clock. Fixed to 0 indicating that TMC RAM clock is synchronous to the clk input. */
        uint32_t configtype            : 2;  /**< [  7:  6](RO) Returns 0x2, indicating ETF configuration. */
        uint32_t memwidth              : 3;  /**< [ 10:  8](RO) This value is twice ATB_DATA_WIDTH. */
        uint32_t reserved_11_31        : 21;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_rtt_shrd_etf_devid_s cn; */
};
typedef union cavm_rtt_shrd_etf_devid cavm_rtt_shrd_etf_devid_t;

#define CAVM_RTT_SHRD_ETF_DEVID CAVM_RTT_SHRD_ETF_DEVID_FUNC()
static inline uint64_t CAVM_RTT_SHRD_ETF_DEVID_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_RTT_SHRD_ETF_DEVID_FUNC(void)
{
    if (cavm_is_model(OCTEONTX_CNF10KB))
        return 0x80e000020fc8ll;
    __cavm_csr_fatal("RTT_SHRD_ETF_DEVID", 0, 0, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_RTT_SHRD_ETF_DEVID cavm_rtt_shrd_etf_devid_t
#define bustype_CAVM_RTT_SHRD_ETF_DEVID CSR_TYPE_NCB32b
#define basename_CAVM_RTT_SHRD_ETF_DEVID "RTT_SHRD_ETF_DEVID"
#define busnum_CAVM_RTT_SHRD_ETF_DEVID 0
#define arguments_CAVM_RTT_SHRD_ETF_DEVID -1,-1,-1,-1

/**
 * Register (NCB32b) rtt_shrd_etf_devid1
 *
 * RTT Shrd Etf Devid1 Register
 * Contains an IMPLEMENTATION DEFINED value.
 */
union cavm_rtt_shrd_etf_devid1
{
    uint32_t u;
    struct cavm_rtt_shrd_etf_devid1_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t reserved_1_31         : 31;
        uint32_t rmc                   : 1;  /**< [  0:  0](RO) Register management mode. TMC implements register management mode 1. */
#else /* Word 0 - Little Endian */
        uint32_t rmc                   : 1;  /**< [  0:  0](RO) Register management mode. TMC implements register management mode 1. */
        uint32_t reserved_1_31         : 31;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_rtt_shrd_etf_devid1_s cn; */
};
typedef union cavm_rtt_shrd_etf_devid1 cavm_rtt_shrd_etf_devid1_t;

#define CAVM_RTT_SHRD_ETF_DEVID1 CAVM_RTT_SHRD_ETF_DEVID1_FUNC()
static inline uint64_t CAVM_RTT_SHRD_ETF_DEVID1_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_RTT_SHRD_ETF_DEVID1_FUNC(void)
{
    if (cavm_is_model(OCTEONTX_CNF10KB))
        return 0x80e000020fc4ll;
    __cavm_csr_fatal("RTT_SHRD_ETF_DEVID1", 0, 0, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_RTT_SHRD_ETF_DEVID1 cavm_rtt_shrd_etf_devid1_t
#define bustype_CAVM_RTT_SHRD_ETF_DEVID1 CSR_TYPE_NCB32b
#define basename_CAVM_RTT_SHRD_ETF_DEVID1 "RTT_SHRD_ETF_DEVID1"
#define busnum_CAVM_RTT_SHRD_ETF_DEVID1 0
#define arguments_CAVM_RTT_SHRD_ETF_DEVID1 -1,-1,-1,-1

/**
 * Register (NCB32b) rtt_shrd_etf_devtype
 *
 * RTT Shrd Etf Devtype Register
 * A debugger can use this register to get information about a component that has an
 * unrecognized Part number.
 */
union cavm_rtt_shrd_etf_devtype
{
    uint32_t u;
    struct cavm_rtt_shrd_etf_devtype_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t reserved_8_31         : 24;
        uint32_t sub                   : 4;  /**< [  7:  4](RO) Minor classification. Returns 0x3, indicating this component is a FIFO. */
        uint32_t major                 : 4;  /**< [  3:  0](RO) Major classification. Returns 0x2, indicating this component is a Trace Link. */
#else /* Word 0 - Little Endian */
        uint32_t major                 : 4;  /**< [  3:  0](RO) Major classification. Returns 0x2, indicating this component is a Trace Link. */
        uint32_t sub                   : 4;  /**< [  7:  4](RO) Minor classification. Returns 0x3, indicating this component is a FIFO. */
        uint32_t reserved_8_31         : 24;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_rtt_shrd_etf_devtype_s cn; */
};
typedef union cavm_rtt_shrd_etf_devtype cavm_rtt_shrd_etf_devtype_t;

#define CAVM_RTT_SHRD_ETF_DEVTYPE CAVM_RTT_SHRD_ETF_DEVTYPE_FUNC()
static inline uint64_t CAVM_RTT_SHRD_ETF_DEVTYPE_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_RTT_SHRD_ETF_DEVTYPE_FUNC(void)
{
    if (cavm_is_model(OCTEONTX_CNF10KB))
        return 0x80e000020fccll;
    __cavm_csr_fatal("RTT_SHRD_ETF_DEVTYPE", 0, 0, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_RTT_SHRD_ETF_DEVTYPE cavm_rtt_shrd_etf_devtype_t
#define bustype_CAVM_RTT_SHRD_ETF_DEVTYPE CSR_TYPE_NCB32b
#define basename_CAVM_RTT_SHRD_ETF_DEVTYPE "RTT_SHRD_ETF_DEVTYPE"
#define busnum_CAVM_RTT_SHRD_ETF_DEVTYPE 0
#define arguments_CAVM_RTT_SHRD_ETF_DEVTYPE -1,-1,-1,-1

/**
 * Register (NCB32b) rtt_shrd_etf_ffcr
 *
 * RTT Shrd Etf Ffcr Register
 * The FFCR controls the generation of stop, trigger and flush events. The insertion of
 * a flush completion packet and the insertion of a trigger packet in the formatted
 * trace is enabled here. Also one of the 2 formatter modes for bypass mode and normal
 * mode can be changed here when the formatter has stopped.
 */
union cavm_rtt_shrd_etf_ffcr
{
    uint32_t u;
    struct cavm_rtt_shrd_etf_ffcr_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t razwi_3               : 16; /**< [ 31: 16](R/W) Read-As-Zero, Writes Ignored. */
        uint32_t embedflush            : 1;  /**< [ 15: 15](R/W) Embed Flush ID (flush completion packet). Enables insertion of Flush ID 0x7B
                                                                 with a single byte of data payload = 0x00 in the output trace, immediately after
                                                                 the last flush data byte, when a flush completes on the ATB slave interface.
                                                                 This bit is effective only in Normal formatting modes. In Bypass mode, the Flush
                                                                 ID insertion remains disabled and this bit is ignored. */
        uint32_t drainbuffer           : 1;  /**< [ 14: 14](R/W) Drain Buffer. This bit is used to enable draining of the trace data through the
                                                                 ATB master interface after the formatter has stopped. It is useful in CB mode to
                                                                 capture trace data into trace memory and then to drain the captured trace
                                                                 through the ATB master interface. Writing a 1 to this bit when in Stopped state
                                                                 starts the drain of the contents of trace buffer. This bit always reads as 0.
                                                                 The STS.TMCReady bit goes LOW while the drain is in progress. This bit is
                                                                 functional only when the TMC is in CB mode and formatting is enabled, that is,
                                                                 FFCR.EnFt=1. Setting this bit when the TMC is in any other mode, or when not in
                                                                 Stopped state, results in UNPREDICTABLE behavior. When trace capture is complete
                                                                 in CB mode, all of the captured trace must be retrieved from the trace memory,
                                                                 either by reading all trace data out through RRD reads, or draining all trace
                                                                 data by setting the FFCR.DrainBuffer bit. Setting this bit after some of the
                                                                 captured trace has been read out through RRD results in UNPREDICTABLE behavior. */
        uint32_t stopontrigevt         : 1;  /**< [ 13: 13](R/W) Stop On Trigger Event. If this bit is set, the formatter is stopped when a
                                                                 Trigger Event has been observed. This bit must be used only in CB mode because
                                                                 in FIFO modes, the TMC is a trace link rather than a trace sink and trigger
                                                                 events are related to trace sink functionality. If trace capture is enabled in
                                                                 SWF1, SWF2, or HWF mode with this bit set, it results in UNPREDICTABLE behavior. */
        uint32_t stoponfl              : 1;  /**< [ 12: 12](R/W) Stop On Flush. If this bit is set, the formatter is stopped on completion of a
                                                                 flush operation. The initiation of a flush operation is controlled by
                                                                 programming the register bits FFCR.FlushMan, FFCR.FOnTrigEvt, and FFCR.FOnFlIn.
                                                                 When a flush-initiation condition occurs, afvalid_s is asserted, and when the
                                                                 flush completion is received, that is, afready_s=1, trace capture is stopped.
                                                                 Any remaining data in the formatter is appended with a post-amble and written to
                                                                 trace memory. The flush operation is then complete. When the TMC is configured
                                                                 as an ETF, if a flush is initiated by the ATB Master interface, its completion
                                                                 does not lead to a formatter stop regardless of the value that is programmed in
                                                                 this bit. */
        uint32_t razwi_2               : 1;  /**< [ 11: 11](R/W) Read-As-Zero, Writes Ignored. */
        uint32_t trigonfl              : 1;  /**< [ 10: 10](R/W) Indicate on trace stream the completion of flush. If this bit is set, a trigger
                                                                 is indicated on the trace stream when afready_s is received for a flush in
                                                                 progress. If this bit is clear, no triggers are embedded in the trace stream on
                                                                 flush completion. If Trigger Insertion is disabled, that is, FFCR.EnTI=0, then
                                                                 trigger indication on the trace stream is blocked regardless of the value that
                                                                 is programmed in this bit. When the TMC is configured as ETF, if a flush is
                                                                 initiated by the ATB Master interface, its completion does not lead to a trigger
                                                                 indication on the trace stream regardless of the value that is programmed in
                                                                 this bit. */
        uint32_t trigontrigevt         : 1;  /**< [  9:  9](R/W) Indicate on trace stream the occurrence of a Trigger Event. If this bit is set,
                                                                 a trigger is indicated on the output trace stream when a Trigger Event occurs.
                                                                 If Trigger Insertion is disabled, that is, FFCR.EnTI=0, then trigger indication
                                                                 on the trace stream is blocked regardless of the value that is programmed in
                                                                 this bit. This bit must be used only in CB mode because in FIFO modes, the TMC
                                                                 is a trace link rather than a trace sink and trigger events are related to trace
                                                                 sink functionality. If trace capture is enabled in SWF1, SWF2, or HWF mode with
                                                                 this bit set, it results in UNPREDICTABLE behavior. */
        uint32_t trigontrigin          : 1;  /**< [  8:  8](R/W) Indicate on trace stream the occurrence of a rising edge on trigin. If this bit
                                                                 is set, a trigger is indicated on the trace stream when a rising edge is
                                                                 detected on the trigin input. If Trigger Insertion is disabled, that is,
                                                                 FFCR.EnTI=0, then trigger indication on the trace stream is blocked regardless
                                                                 of the value that is programmed in this bit. */
        uint32_t razwi_1               : 1;  /**< [  7:  7](R/W) Read-As-Zero, Writes Ignored. */
        uint32_t flushman              : 1;  /**< [  6:  6](R/W) Manually generate a flush of the system. Writing 1 to this bit causes a flush to
                                                                 be generated. This bit is cleared automatically when, in formatter bypass mode,
                                                                 afready_s was sampled high, or, in normal formatting mode, afready_s was sampled
                                                                 high and all flush data was output to the trace memory. If CTL.TraceCaptEn=0,
                                                                 writes to this bit are ignored. */
        uint32_t fontrigevt            : 1;  /**< [  5:  5](R/W) Flush on Trigger Event. If FFCR.StopOnTrigEvt is set, this bit is ignored.
                                                                 Setting this bit generates a flush when a Trigger Event occurs. If
                                                                 FFCR.StopOnTrigEvt is set, this bit is ignored. This bit must be used only in CB
                                                                 mode because in FIFO modes, the TMC is a trace link rather than a trace sink and
                                                                 trigger events are related to trace sink functionality. If trace capture is
                                                                 enabled in SWF1, SWF2, or HWF mode with this bit set, it results in
                                                                 UNPREDICTABLE behavior. */
        uint32_t fonflin               : 1;  /**< [  4:  4](R/W) Setting this bit enables the detection of transitions on the flushin input by
                                                                 the TMC. If this bit is set and the formatter has not already stopped, a rising
                                                                 edge on flushin initiates a flush request. */
        uint32_t razwi_0               : 2;  /**< [  3:  2](R/W) Read-As-Zero, Writes Ignored. */
        uint32_t enti                  : 1;  /**< [  1:  1](R/W) Enable Trigger Insertion. Setting this bit enables the insertion of triggers in
                                                                 the formatted trace stream. A trigger is indicated by inserting one byte of data
                                                                 0x00 with atid_s=0x7D in the trace stream. Trigger indication on the trace
                                                                 stream is also controlled by the register bits FFCR.TrigOnFl,
                                                                 FFCR.TrigOnTrigEvt, and FFCR.TrigOnTrigIn. This bit can only be changed when the
                                                                 TMC is in Disabled state. If FFCR.EnTI bit is set formatting is enabled. */
        uint32_t enft                  : 1;  /**< [  0:  0](R/W) Enable Formatter. If this bit is set, formatting is enabled. When EnTi is set,
                                                                 formatting is enabled. When CB mode is not used, formatting is also enabled. For
                                                                 backwards-compatibility with earlier versions of the ETB disabling of formatting
                                                                 is supported only in CB mode. This bit can only be changed when TMC is in
                                                                 Disabled state. */
#else /* Word 0 - Little Endian */
        uint32_t enft                  : 1;  /**< [  0:  0](R/W) Enable Formatter. If this bit is set, formatting is enabled. When EnTi is set,
                                                                 formatting is enabled. When CB mode is not used, formatting is also enabled. For
                                                                 backwards-compatibility with earlier versions of the ETB disabling of formatting
                                                                 is supported only in CB mode. This bit can only be changed when TMC is in
                                                                 Disabled state. */
        uint32_t enti                  : 1;  /**< [  1:  1](R/W) Enable Trigger Insertion. Setting this bit enables the insertion of triggers in
                                                                 the formatted trace stream. A trigger is indicated by inserting one byte of data
                                                                 0x00 with atid_s=0x7D in the trace stream. Trigger indication on the trace
                                                                 stream is also controlled by the register bits FFCR.TrigOnFl,
                                                                 FFCR.TrigOnTrigEvt, and FFCR.TrigOnTrigIn. This bit can only be changed when the
                                                                 TMC is in Disabled state. If FFCR.EnTI bit is set formatting is enabled. */
        uint32_t razwi_0               : 2;  /**< [  3:  2](R/W) Read-As-Zero, Writes Ignored. */
        uint32_t fonflin               : 1;  /**< [  4:  4](R/W) Setting this bit enables the detection of transitions on the flushin input by
                                                                 the TMC. If this bit is set and the formatter has not already stopped, a rising
                                                                 edge on flushin initiates a flush request. */
        uint32_t fontrigevt            : 1;  /**< [  5:  5](R/W) Flush on Trigger Event. If FFCR.StopOnTrigEvt is set, this bit is ignored.
                                                                 Setting this bit generates a flush when a Trigger Event occurs. If
                                                                 FFCR.StopOnTrigEvt is set, this bit is ignored. This bit must be used only in CB
                                                                 mode because in FIFO modes, the TMC is a trace link rather than a trace sink and
                                                                 trigger events are related to trace sink functionality. If trace capture is
                                                                 enabled in SWF1, SWF2, or HWF mode with this bit set, it results in
                                                                 UNPREDICTABLE behavior. */
        uint32_t flushman              : 1;  /**< [  6:  6](R/W) Manually generate a flush of the system. Writing 1 to this bit causes a flush to
                                                                 be generated. This bit is cleared automatically when, in formatter bypass mode,
                                                                 afready_s was sampled high, or, in normal formatting mode, afready_s was sampled
                                                                 high and all flush data was output to the trace memory. If CTL.TraceCaptEn=0,
                                                                 writes to this bit are ignored. */
        uint32_t razwi_1               : 1;  /**< [  7:  7](R/W) Read-As-Zero, Writes Ignored. */
        uint32_t trigontrigin          : 1;  /**< [  8:  8](R/W) Indicate on trace stream the occurrence of a rising edge on trigin. If this bit
                                                                 is set, a trigger is indicated on the trace stream when a rising edge is
                                                                 detected on the trigin input. If Trigger Insertion is disabled, that is,
                                                                 FFCR.EnTI=0, then trigger indication on the trace stream is blocked regardless
                                                                 of the value that is programmed in this bit. */
        uint32_t trigontrigevt         : 1;  /**< [  9:  9](R/W) Indicate on trace stream the occurrence of a Trigger Event. If this bit is set,
                                                                 a trigger is indicated on the output trace stream when a Trigger Event occurs.
                                                                 If Trigger Insertion is disabled, that is, FFCR.EnTI=0, then trigger indication
                                                                 on the trace stream is blocked regardless of the value that is programmed in
                                                                 this bit. This bit must be used only in CB mode because in FIFO modes, the TMC
                                                                 is a trace link rather than a trace sink and trigger events are related to trace
                                                                 sink functionality. If trace capture is enabled in SWF1, SWF2, or HWF mode with
                                                                 this bit set, it results in UNPREDICTABLE behavior. */
        uint32_t trigonfl              : 1;  /**< [ 10: 10](R/W) Indicate on trace stream the completion of flush. If this bit is set, a trigger
                                                                 is indicated on the trace stream when afready_s is received for a flush in
                                                                 progress. If this bit is clear, no triggers are embedded in the trace stream on
                                                                 flush completion. If Trigger Insertion is disabled, that is, FFCR.EnTI=0, then
                                                                 trigger indication on the trace stream is blocked regardless of the value that
                                                                 is programmed in this bit. When the TMC is configured as ETF, if a flush is
                                                                 initiated by the ATB Master interface, its completion does not lead to a trigger
                                                                 indication on the trace stream regardless of the value that is programmed in
                                                                 this bit. */
        uint32_t razwi_2               : 1;  /**< [ 11: 11](R/W) Read-As-Zero, Writes Ignored. */
        uint32_t stoponfl              : 1;  /**< [ 12: 12](R/W) Stop On Flush. If this bit is set, the formatter is stopped on completion of a
                                                                 flush operation. The initiation of a flush operation is controlled by
                                                                 programming the register bits FFCR.FlushMan, FFCR.FOnTrigEvt, and FFCR.FOnFlIn.
                                                                 When a flush-initiation condition occurs, afvalid_s is asserted, and when the
                                                                 flush completion is received, that is, afready_s=1, trace capture is stopped.
                                                                 Any remaining data in the formatter is appended with a post-amble and written to
                                                                 trace memory. The flush operation is then complete. When the TMC is configured
                                                                 as an ETF, if a flush is initiated by the ATB Master interface, its completion
                                                                 does not lead to a formatter stop regardless of the value that is programmed in
                                                                 this bit. */
        uint32_t stopontrigevt         : 1;  /**< [ 13: 13](R/W) Stop On Trigger Event. If this bit is set, the formatter is stopped when a
                                                                 Trigger Event has been observed. This bit must be used only in CB mode because
                                                                 in FIFO modes, the TMC is a trace link rather than a trace sink and trigger
                                                                 events are related to trace sink functionality. If trace capture is enabled in
                                                                 SWF1, SWF2, or HWF mode with this bit set, it results in UNPREDICTABLE behavior. */
        uint32_t drainbuffer           : 1;  /**< [ 14: 14](R/W) Drain Buffer. This bit is used to enable draining of the trace data through the
                                                                 ATB master interface after the formatter has stopped. It is useful in CB mode to
                                                                 capture trace data into trace memory and then to drain the captured trace
                                                                 through the ATB master interface. Writing a 1 to this bit when in Stopped state
                                                                 starts the drain of the contents of trace buffer. This bit always reads as 0.
                                                                 The STS.TMCReady bit goes LOW while the drain is in progress. This bit is
                                                                 functional only when the TMC is in CB mode and formatting is enabled, that is,
                                                                 FFCR.EnFt=1. Setting this bit when the TMC is in any other mode, or when not in
                                                                 Stopped state, results in UNPREDICTABLE behavior. When trace capture is complete
                                                                 in CB mode, all of the captured trace must be retrieved from the trace memory,
                                                                 either by reading all trace data out through RRD reads, or draining all trace
                                                                 data by setting the FFCR.DrainBuffer bit. Setting this bit after some of the
                                                                 captured trace has been read out through RRD results in UNPREDICTABLE behavior. */
        uint32_t embedflush            : 1;  /**< [ 15: 15](R/W) Embed Flush ID (flush completion packet). Enables insertion of Flush ID 0x7B
                                                                 with a single byte of data payload = 0x00 in the output trace, immediately after
                                                                 the last flush data byte, when a flush completes on the ATB slave interface.
                                                                 This bit is effective only in Normal formatting modes. In Bypass mode, the Flush
                                                                 ID insertion remains disabled and this bit is ignored. */
        uint32_t razwi_3               : 16; /**< [ 31: 16](R/W) Read-As-Zero, Writes Ignored. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_rtt_shrd_etf_ffcr_s cn; */
};
typedef union cavm_rtt_shrd_etf_ffcr cavm_rtt_shrd_etf_ffcr_t;

#define CAVM_RTT_SHRD_ETF_FFCR CAVM_RTT_SHRD_ETF_FFCR_FUNC()
static inline uint64_t CAVM_RTT_SHRD_ETF_FFCR_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_RTT_SHRD_ETF_FFCR_FUNC(void)
{
    if (cavm_is_model(OCTEONTX_CNF10KB))
        return 0x80e000020304ll;
    __cavm_csr_fatal("RTT_SHRD_ETF_FFCR", 0, 0, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_RTT_SHRD_ETF_FFCR cavm_rtt_shrd_etf_ffcr_t
#define bustype_CAVM_RTT_SHRD_ETF_FFCR CSR_TYPE_NCB32b
#define basename_CAVM_RTT_SHRD_ETF_FFCR "RTT_SHRD_ETF_FFCR"
#define busnum_CAVM_RTT_SHRD_ETF_FFCR 0
#define arguments_CAVM_RTT_SHRD_ETF_FFCR -1,-1,-1,-1

/**
 * Register (NCB32b) rtt_shrd_etf_ffsr
 *
 * RTT Shrd Etf Ffsr Register
 * This register indicates the status of the Formatter, and the status of Flush request.
 */
union cavm_rtt_shrd_etf_ffsr
{
    uint32_t u;
    struct cavm_rtt_shrd_etf_ffsr_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t razwi_0               : 30; /**< [ 31:  2](RO) Read-As-Zero, Writes Ignored. */
        uint32_t ftstopped             : 1;  /**< [  1:  1](RO) Formatter Stopped. This bit behaves the same way as STS.FtEmpty. It is cleared
                                                                 to 0 when leaving the Disabled state and retains its value when entering the
                                                                 Disabled state. The FFCR.FtStopped bit is deprecated and is present in this
                                                                 register to support backwards-compatibility with earlier versions of the ETB. */
        uint32_t flinprog              : 1;  /**< [  0:  0](RO) Flush In Progress. This bit indicates whether the TMC is currently processing a
                                                                 flush request. The flush initiation is controlled by the flush control bits in
                                                                 the FFCR register. This bit is cleared to 0 when leaving the Disabled state and
                                                                 retains its value when entering the Disabled state. When in Disabled state, this
                                                                 bit is not updated. */
#else /* Word 0 - Little Endian */
        uint32_t flinprog              : 1;  /**< [  0:  0](RO) Flush In Progress. This bit indicates whether the TMC is currently processing a
                                                                 flush request. The flush initiation is controlled by the flush control bits in
                                                                 the FFCR register. This bit is cleared to 0 when leaving the Disabled state and
                                                                 retains its value when entering the Disabled state. When in Disabled state, this
                                                                 bit is not updated. */
        uint32_t ftstopped             : 1;  /**< [  1:  1](RO) Formatter Stopped. This bit behaves the same way as STS.FtEmpty. It is cleared
                                                                 to 0 when leaving the Disabled state and retains its value when entering the
                                                                 Disabled state. The FFCR.FtStopped bit is deprecated and is present in this
                                                                 register to support backwards-compatibility with earlier versions of the ETB. */
        uint32_t razwi_0               : 30; /**< [ 31:  2](RO) Read-As-Zero, Writes Ignored. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_rtt_shrd_etf_ffsr_s cn; */
};
typedef union cavm_rtt_shrd_etf_ffsr cavm_rtt_shrd_etf_ffsr_t;

#define CAVM_RTT_SHRD_ETF_FFSR CAVM_RTT_SHRD_ETF_FFSR_FUNC()
static inline uint64_t CAVM_RTT_SHRD_ETF_FFSR_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_RTT_SHRD_ETF_FFSR_FUNC(void)
{
    if (cavm_is_model(OCTEONTX_CNF10KB))
        return 0x80e000020300ll;
    __cavm_csr_fatal("RTT_SHRD_ETF_FFSR", 0, 0, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_RTT_SHRD_ETF_FFSR cavm_rtt_shrd_etf_ffsr_t
#define bustype_CAVM_RTT_SHRD_ETF_FFSR CSR_TYPE_NCB32b
#define basename_CAVM_RTT_SHRD_ETF_FFSR "RTT_SHRD_ETF_FFSR"
#define busnum_CAVM_RTT_SHRD_ETF_FFSR 0
#define arguments_CAVM_RTT_SHRD_ETF_FFSR -1,-1,-1,-1

/**
 * Register (NCB32b) rtt_shrd_etf_itatbctr0
 *
 * RTT Shrd Etf Itatbctr0 Register
 * This register captures the values of ATB slave inputs atvalid_s, afready_s,
 * atwakeup_s, and atbytes_s in integration mode. In functional mode, this register
 * behaves as RAZ/WI. In integration mode, writes to this register are ignored and the
 * reads return the value of corresponding input pins. The width of this register is
 * given by: 8+log2(ATB DATA WIDTH/8).
 */
union cavm_rtt_shrd_etf_itatbctr0
{
    uint32_t u;
    struct cavm_rtt_shrd_etf_itatbctr0_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t razwi_1               : 22; /**< [ 31: 10](RO) Read-As-Zero, Writes Ignored. */
        uint32_t atbytess              : 2;  /**< [  9:  8](RO) Returns the value of atbytes_s input in integration mode. N=8+log2(ATB DATA WIDTH/8). */
        uint32_t razwi_0               : 5;  /**< [  7:  3](RO) Read-As-Zero, Writes Ignored. */
        uint32_t atwakeups             : 1;  /**< [  2:  2](RO) Returns the value of atwakeup_s input in integration mode. */
        uint32_t afreadys              : 1;  /**< [  1:  1](RO) Returns the value of afready_s input in integration mode. */
        uint32_t atvalids              : 1;  /**< [  0:  0](RO) Returns the value of atvalid_s input in integration mode. */
#else /* Word 0 - Little Endian */
        uint32_t atvalids              : 1;  /**< [  0:  0](RO) Returns the value of atvalid_s input in integration mode. */
        uint32_t afreadys              : 1;  /**< [  1:  1](RO) Returns the value of afready_s input in integration mode. */
        uint32_t atwakeups             : 1;  /**< [  2:  2](RO) Returns the value of atwakeup_s input in integration mode. */
        uint32_t razwi_0               : 5;  /**< [  7:  3](RO) Read-As-Zero, Writes Ignored. */
        uint32_t atbytess              : 2;  /**< [  9:  8](RO) Returns the value of atbytes_s input in integration mode. N=8+log2(ATB DATA WIDTH/8). */
        uint32_t razwi_1               : 22; /**< [ 31: 10](RO) Read-As-Zero, Writes Ignored. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_rtt_shrd_etf_itatbctr0_s cn; */
};
typedef union cavm_rtt_shrd_etf_itatbctr0 cavm_rtt_shrd_etf_itatbctr0_t;

#define CAVM_RTT_SHRD_ETF_ITATBCTR0 CAVM_RTT_SHRD_ETF_ITATBCTR0_FUNC()
static inline uint64_t CAVM_RTT_SHRD_ETF_ITATBCTR0_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_RTT_SHRD_ETF_ITATBCTR0_FUNC(void)
{
    if (cavm_is_model(OCTEONTX_CNF10KB))
        return 0x80e000020ef8ll;
    __cavm_csr_fatal("RTT_SHRD_ETF_ITATBCTR0", 0, 0, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_RTT_SHRD_ETF_ITATBCTR0 cavm_rtt_shrd_etf_itatbctr0_t
#define bustype_CAVM_RTT_SHRD_ETF_ITATBCTR0 CSR_TYPE_NCB32b
#define basename_CAVM_RTT_SHRD_ETF_ITATBCTR0 "RTT_SHRD_ETF_ITATBCTR0"
#define busnum_CAVM_RTT_SHRD_ETF_ITATBCTR0 0
#define arguments_CAVM_RTT_SHRD_ETF_ITATBCTR0 -1,-1,-1,-1

/**
 * Register (NCB32b) rtt_shrd_etf_itatbctr1
 *
 * RTT Shrd Etf Itatbctr1 Register
 * This register captures the value of the atid_s[6:0] input in integration mode. In
 * functional mode, this register behaves as RAZ/WI. In integration mode, writes to
 * this register are ignored and the reads return the value of atid_s input.
 */
union cavm_rtt_shrd_etf_itatbctr1
{
    uint32_t u;
    struct cavm_rtt_shrd_etf_itatbctr1_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t razwi_0               : 25; /**< [ 31:  7](RO) Read-As-Zero, Writes Ignored. */
        uint32_t atids                 : 7;  /**< [  6:  0](RO) Returns the value of atid_s[6:0] input in integration mode. */
#else /* Word 0 - Little Endian */
        uint32_t atids                 : 7;  /**< [  6:  0](RO) Returns the value of atid_s[6:0] input in integration mode. */
        uint32_t razwi_0               : 25; /**< [ 31:  7](RO) Read-As-Zero, Writes Ignored. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_rtt_shrd_etf_itatbctr1_s cn; */
};
typedef union cavm_rtt_shrd_etf_itatbctr1 cavm_rtt_shrd_etf_itatbctr1_t;

#define CAVM_RTT_SHRD_ETF_ITATBCTR1 CAVM_RTT_SHRD_ETF_ITATBCTR1_FUNC()
static inline uint64_t CAVM_RTT_SHRD_ETF_ITATBCTR1_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_RTT_SHRD_ETF_ITATBCTR1_FUNC(void)
{
    if (cavm_is_model(OCTEONTX_CNF10KB))
        return 0x80e000020ef4ll;
    __cavm_csr_fatal("RTT_SHRD_ETF_ITATBCTR1", 0, 0, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_RTT_SHRD_ETF_ITATBCTR1 cavm_rtt_shrd_etf_itatbctr1_t
#define bustype_CAVM_RTT_SHRD_ETF_ITATBCTR1 CSR_TYPE_NCB32b
#define basename_CAVM_RTT_SHRD_ETF_ITATBCTR1 "RTT_SHRD_ETF_ITATBCTR1"
#define busnum_CAVM_RTT_SHRD_ETF_ITATBCTR1 0
#define arguments_CAVM_RTT_SHRD_ETF_ITATBCTR1 -1,-1,-1,-1

/**
 * Register (NCB32b) rtt_shrd_etf_itatbctr2
 *
 * RTT Shrd Etf Itatbctr2 Register
 * This register enables control of ATB slave outputs atready_s, afvalid_s, and
 * syncreq_s in integration mode. In functional mode, this register behaves as RAZ/WI.
 * In integration mode, the value that is written to any bit of this register is driven
 * on the output pin that is controlled by that bit and the reads return 0x0.
 */
union cavm_rtt_shrd_etf_itatbctr2
{
    uint32_t u;
    struct cavm_rtt_shrd_etf_itatbctr2_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t razwi_0               : 29; /**< [ 31:  3](WO) Read-As-Zero, Writes Ignored. */
        uint32_t syncreqs              : 1;  /**< [  2:  2](WO) Controls the value of syncreq_s output in integration mode. */
        uint32_t afvalids              : 1;  /**< [  1:  1](WO) Controls the value of afvalid_s output in integration mode. */
        uint32_t atreadys              : 1;  /**< [  0:  0](WO) Controls the value of atready_s output in integration mode. */
#else /* Word 0 - Little Endian */
        uint32_t atreadys              : 1;  /**< [  0:  0](WO) Controls the value of atready_s output in integration mode. */
        uint32_t afvalids              : 1;  /**< [  1:  1](WO) Controls the value of afvalid_s output in integration mode. */
        uint32_t syncreqs              : 1;  /**< [  2:  2](WO) Controls the value of syncreq_s output in integration mode. */
        uint32_t razwi_0               : 29; /**< [ 31:  3](WO) Read-As-Zero, Writes Ignored. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_rtt_shrd_etf_itatbctr2_s cn; */
};
typedef union cavm_rtt_shrd_etf_itatbctr2 cavm_rtt_shrd_etf_itatbctr2_t;

#define CAVM_RTT_SHRD_ETF_ITATBCTR2 CAVM_RTT_SHRD_ETF_ITATBCTR2_FUNC()
static inline uint64_t CAVM_RTT_SHRD_ETF_ITATBCTR2_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_RTT_SHRD_ETF_ITATBCTR2_FUNC(void)
{
    if (cavm_is_model(OCTEONTX_CNF10KB))
        return 0x80e000020ef0ll;
    __cavm_csr_fatal("RTT_SHRD_ETF_ITATBCTR2", 0, 0, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_RTT_SHRD_ETF_ITATBCTR2 cavm_rtt_shrd_etf_itatbctr2_t
#define bustype_CAVM_RTT_SHRD_ETF_ITATBCTR2 CSR_TYPE_NCB32b
#define basename_CAVM_RTT_SHRD_ETF_ITATBCTR2 "RTT_SHRD_ETF_ITATBCTR2"
#define busnum_CAVM_RTT_SHRD_ETF_ITATBCTR2 0
#define arguments_CAVM_RTT_SHRD_ETF_ITATBCTR2 -1,-1,-1,-1

/**
 * Register (NCB32b) rtt_shrd_etf_itatbdata0
 *
 * RTT Shrd Etf Itatbdata0 Register
 * This register captures the value of atdata_s input in integration mode. In
 * functional mode, this register behaves as RAZ/WI. In integration mode, writes to
 * this register are ignored and the reads return the value of corresponding atdata_s
 * bits. The width of this register is given by: 1+(ATB DATA WIDTH)/8.
 */
union cavm_rtt_shrd_etf_itatbdata0
{
    uint32_t u;
    struct cavm_rtt_shrd_etf_itatbdata0_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t razwi_0               : 27; /**< [ 31:  5](RO) Read-As-Zero, Writes Ignored. */
        uint32_t atdatasbit31          : 1;  /**< [  4:  4](RO) Returns the value of atdata_s[31] input in integration mode. */
        uint32_t atdatasbit23          : 1;  /**< [  3:  3](RO) Returns the value of atdata_s[23] input in integration mode. */
        uint32_t atdatasbit15          : 1;  /**< [  2:  2](RO) Returns the value of atdata_s[15] input in integration mode. */
        uint32_t atdatasbit7           : 1;  /**< [  1:  1](RO) Returns the value of atdata_s[7] input in integration mode. */
        uint32_t atdatasbit0           : 1;  /**< [  0:  0](RO) Returns the value of atdata_s[0] input in integration mode. */
#else /* Word 0 - Little Endian */
        uint32_t atdatasbit0           : 1;  /**< [  0:  0](RO) Returns the value of atdata_s[0] input in integration mode. */
        uint32_t atdatasbit7           : 1;  /**< [  1:  1](RO) Returns the value of atdata_s[7] input in integration mode. */
        uint32_t atdatasbit15          : 1;  /**< [  2:  2](RO) Returns the value of atdata_s[15] input in integration mode. */
        uint32_t atdatasbit23          : 1;  /**< [  3:  3](RO) Returns the value of atdata_s[23] input in integration mode. */
        uint32_t atdatasbit31          : 1;  /**< [  4:  4](RO) Returns the value of atdata_s[31] input in integration mode. */
        uint32_t razwi_0               : 27; /**< [ 31:  5](RO) Read-As-Zero, Writes Ignored. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_rtt_shrd_etf_itatbdata0_s cn; */
};
typedef union cavm_rtt_shrd_etf_itatbdata0 cavm_rtt_shrd_etf_itatbdata0_t;

#define CAVM_RTT_SHRD_ETF_ITATBDATA0 CAVM_RTT_SHRD_ETF_ITATBDATA0_FUNC()
static inline uint64_t CAVM_RTT_SHRD_ETF_ITATBDATA0_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_RTT_SHRD_ETF_ITATBDATA0_FUNC(void)
{
    if (cavm_is_model(OCTEONTX_CNF10KB))
        return 0x80e000020eecll;
    __cavm_csr_fatal("RTT_SHRD_ETF_ITATBDATA0", 0, 0, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_RTT_SHRD_ETF_ITATBDATA0 cavm_rtt_shrd_etf_itatbdata0_t
#define bustype_CAVM_RTT_SHRD_ETF_ITATBDATA0 CSR_TYPE_NCB32b
#define basename_CAVM_RTT_SHRD_ETF_ITATBDATA0 "RTT_SHRD_ETF_ITATBDATA0"
#define busnum_CAVM_RTT_SHRD_ETF_ITATBDATA0 0
#define arguments_CAVM_RTT_SHRD_ETF_ITATBDATA0 -1,-1,-1,-1

/**
 * Register (NCB32b) rtt_shrd_etf_itatbmctr0
 *
 * RTT Shrd Etf Itatbmctr0 Register
 * This register enables control of the ATB master outputs atbytes_m, atwakeup_m,
 * afready_m, and atvalid_m in integration mode. In functional mode, this register
 * behaves as RAZ/WI. In integration mode, the value that is written to any bit of this
 * register is driven on the output pin that is controlled by that bit, and the reads
 * return 0x0.
 */
union cavm_rtt_shrd_etf_itatbmctr0
{
    uint32_t u;
    struct cavm_rtt_shrd_etf_itatbmctr0_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t razwi_1               : 22; /**< [ 31: 10](WO) Read-As-Zero, Writes Ignored. */
        uint32_t atbytesm              : 2;  /**< [  9:  8](WO) Controls the value of atbytes_m output in integration mode. This width of this
                                                                 field is given by N=8+log2(ATB DATA WIDTH/8). */
        uint32_t razwi_0               : 5;  /**< [  7:  3](WO) Read-As-Zero, Writes Ignored. */
        uint32_t atwakeupm             : 1;  /**< [  2:  2](WO) Controls the value of atwakeup_m output in integration mode. */
        uint32_t afreadym              : 1;  /**< [  1:  1](WO) Controls the value of afready_m output in integration mode. */
        uint32_t atvalidm              : 1;  /**< [  0:  0](WO) Controls the value of atvalid_m output in integration mode. */
#else /* Word 0 - Little Endian */
        uint32_t atvalidm              : 1;  /**< [  0:  0](WO) Controls the value of atvalid_m output in integration mode. */
        uint32_t afreadym              : 1;  /**< [  1:  1](WO) Controls the value of afready_m output in integration mode. */
        uint32_t atwakeupm             : 1;  /**< [  2:  2](WO) Controls the value of atwakeup_m output in integration mode. */
        uint32_t razwi_0               : 5;  /**< [  7:  3](WO) Read-As-Zero, Writes Ignored. */
        uint32_t atbytesm              : 2;  /**< [  9:  8](WO) Controls the value of atbytes_m output in integration mode. This width of this
                                                                 field is given by N=8+log2(ATB DATA WIDTH/8). */
        uint32_t razwi_1               : 22; /**< [ 31: 10](WO) Read-As-Zero, Writes Ignored. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_rtt_shrd_etf_itatbmctr0_s cn; */
};
typedef union cavm_rtt_shrd_etf_itatbmctr0 cavm_rtt_shrd_etf_itatbmctr0_t;

#define CAVM_RTT_SHRD_ETF_ITATBMCTR0 CAVM_RTT_SHRD_ETF_ITATBMCTR0_FUNC()
static inline uint64_t CAVM_RTT_SHRD_ETF_ITATBMCTR0_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_RTT_SHRD_ETF_ITATBMCTR0_FUNC(void)
{
    if (cavm_is_model(OCTEONTX_CNF10KB))
        return 0x80e000020edcll;
    __cavm_csr_fatal("RTT_SHRD_ETF_ITATBMCTR0", 0, 0, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_RTT_SHRD_ETF_ITATBMCTR0 cavm_rtt_shrd_etf_itatbmctr0_t
#define bustype_CAVM_RTT_SHRD_ETF_ITATBMCTR0 CSR_TYPE_NCB32b
#define basename_CAVM_RTT_SHRD_ETF_ITATBMCTR0 "RTT_SHRD_ETF_ITATBMCTR0"
#define busnum_CAVM_RTT_SHRD_ETF_ITATBMCTR0 0
#define arguments_CAVM_RTT_SHRD_ETF_ITATBMCTR0 -1,-1,-1,-1

/**
 * Register (NCB32b) rtt_shrd_etf_itatbmctr1
 *
 * RTT Shrd Etf Itatbmctr1 Register
 * This register enables control of the atid_m output in integration mode. In
 * functional mode, this register behaves as RAZ/WI. In integration mode, the value
 * that is written to this register is driven on the atid_m output and the reads return
 * 0x0.
 */
union cavm_rtt_shrd_etf_itatbmctr1
{
    uint32_t u;
    struct cavm_rtt_shrd_etf_itatbmctr1_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t razwi_0               : 25; /**< [ 31:  7](WO) Read-As-Zero, Writes Ignored. */
        uint32_t atidm                 : 7;  /**< [  6:  0](WO) Controls the value of the atid_m[6:0] output in integration mode. */
#else /* Word 0 - Little Endian */
        uint32_t atidm                 : 7;  /**< [  6:  0](WO) Controls the value of the atid_m[6:0] output in integration mode. */
        uint32_t razwi_0               : 25; /**< [ 31:  7](WO) Read-As-Zero, Writes Ignored. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_rtt_shrd_etf_itatbmctr1_s cn; */
};
typedef union cavm_rtt_shrd_etf_itatbmctr1 cavm_rtt_shrd_etf_itatbmctr1_t;

#define CAVM_RTT_SHRD_ETF_ITATBMCTR1 CAVM_RTT_SHRD_ETF_ITATBMCTR1_FUNC()
static inline uint64_t CAVM_RTT_SHRD_ETF_ITATBMCTR1_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_RTT_SHRD_ETF_ITATBMCTR1_FUNC(void)
{
    if (cavm_is_model(OCTEONTX_CNF10KB))
        return 0x80e000020ed8ll;
    __cavm_csr_fatal("RTT_SHRD_ETF_ITATBMCTR1", 0, 0, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_RTT_SHRD_ETF_ITATBMCTR1 cavm_rtt_shrd_etf_itatbmctr1_t
#define bustype_CAVM_RTT_SHRD_ETF_ITATBMCTR1 CSR_TYPE_NCB32b
#define basename_CAVM_RTT_SHRD_ETF_ITATBMCTR1 "RTT_SHRD_ETF_ITATBMCTR1"
#define busnum_CAVM_RTT_SHRD_ETF_ITATBMCTR1 0
#define arguments_CAVM_RTT_SHRD_ETF_ITATBMCTR1 -1,-1,-1,-1

/**
 * Register (NCB32b) rtt_shrd_etf_itatbmctr2
 *
 * RTT Shrd Etf Itatbmctr2 Register
 * This register captures the values of ATB master inputs atready_m, afvalid_m, and
 * syncreq_m in integration mode. In functional mode, this register behaves as RAZ/WI.
 */
union cavm_rtt_shrd_etf_itatbmctr2
{
    uint32_t u;
    struct cavm_rtt_shrd_etf_itatbmctr2_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t razwi_0               : 29; /**< [ 31:  3](RO) Read-As-Zero, Writes Ignored. */
        uint32_t syncreqm              : 1;  /**< [  2:  2](RO) Integration status of syncreq_m input. In integration mode, this bit latches to
                                                                 1 on a rising edge of syncreq_m input, which is cleared when this register is
                                                                 read or when integration mode is disabled. */
        uint32_t afvalidm              : 1;  /**< [  1:  1](RO) Integration status of afvalid_m input. In integration mode, writes are ignored
                                                                 and reads return the value of afvalid_m input. */
        uint32_t atreadym              : 1;  /**< [  0:  0](RO) Integration status of atready_m input. In integration mode, writes are ignored
                                                                 and reads return the value of the atready_m input. */
#else /* Word 0 - Little Endian */
        uint32_t atreadym              : 1;  /**< [  0:  0](RO) Integration status of atready_m input. In integration mode, writes are ignored
                                                                 and reads return the value of the atready_m input. */
        uint32_t afvalidm              : 1;  /**< [  1:  1](RO) Integration status of afvalid_m input. In integration mode, writes are ignored
                                                                 and reads return the value of afvalid_m input. */
        uint32_t syncreqm              : 1;  /**< [  2:  2](RO) Integration status of syncreq_m input. In integration mode, this bit latches to
                                                                 1 on a rising edge of syncreq_m input, which is cleared when this register is
                                                                 read or when integration mode is disabled. */
        uint32_t razwi_0               : 29; /**< [ 31:  3](RO) Read-As-Zero, Writes Ignored. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_rtt_shrd_etf_itatbmctr2_s cn; */
};
typedef union cavm_rtt_shrd_etf_itatbmctr2 cavm_rtt_shrd_etf_itatbmctr2_t;

#define CAVM_RTT_SHRD_ETF_ITATBMCTR2 CAVM_RTT_SHRD_ETF_ITATBMCTR2_FUNC()
static inline uint64_t CAVM_RTT_SHRD_ETF_ITATBMCTR2_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_RTT_SHRD_ETF_ITATBMCTR2_FUNC(void)
{
    if (cavm_is_model(OCTEONTX_CNF10KB))
        return 0x80e000020ed4ll;
    __cavm_csr_fatal("RTT_SHRD_ETF_ITATBMCTR2", 0, 0, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_RTT_SHRD_ETF_ITATBMCTR2 cavm_rtt_shrd_etf_itatbmctr2_t
#define bustype_CAVM_RTT_SHRD_ETF_ITATBMCTR2 CSR_TYPE_NCB32b
#define basename_CAVM_RTT_SHRD_ETF_ITATBMCTR2 "RTT_SHRD_ETF_ITATBMCTR2"
#define busnum_CAVM_RTT_SHRD_ETF_ITATBMCTR2 0
#define arguments_CAVM_RTT_SHRD_ETF_ITATBMCTR2 -1,-1,-1,-1

/**
 * Register (NCB32b) rtt_shrd_etf_itatbmdata0
 *
 * RTT Shrd Etf Itatbmdata0 Register
 * This register enables control of the atdata_m output in integration mode. In
 * functional mode, this register behaves as RAZ/WI. In integration mode, the value
 * that is written to any given bit is driven on the output pin that is controlled by
 * that bit and the reads return 0x0. The width of this register is given by 1+(ATB
 * DATA WIDTH)/8.
 */
union cavm_rtt_shrd_etf_itatbmdata0
{
    uint32_t u;
    struct cavm_rtt_shrd_etf_itatbmdata0_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t razwi_0               : 27; /**< [ 31:  5](WO) Read-As-Zero, Writes Ignored. */
        uint32_t atdatmbit31           : 1;  /**< [  4:  4](WO) Controls the value of atdata_m[31] output in integration mode. */
        uint32_t atdatmbit23           : 1;  /**< [  3:  3](WO) Controls the value of atdata_m[23] output in integration mode. */
        uint32_t atdatmbit15           : 1;  /**< [  2:  2](WO) Controls the value of atdata_m[15] output in integration mode. */
        uint32_t atdatmbit7            : 1;  /**< [  1:  1](WO) Controls the value of atdata_m[7] output in integration mode. */
        uint32_t atdatmbit0            : 1;  /**< [  0:  0](WO) Controls the value of atdata_m[0] output in integration mode. */
#else /* Word 0 - Little Endian */
        uint32_t atdatmbit0            : 1;  /**< [  0:  0](WO) Controls the value of atdata_m[0] output in integration mode. */
        uint32_t atdatmbit7            : 1;  /**< [  1:  1](WO) Controls the value of atdata_m[7] output in integration mode. */
        uint32_t atdatmbit15           : 1;  /**< [  2:  2](WO) Controls the value of atdata_m[15] output in integration mode. */
        uint32_t atdatmbit23           : 1;  /**< [  3:  3](WO) Controls the value of atdata_m[23] output in integration mode. */
        uint32_t atdatmbit31           : 1;  /**< [  4:  4](WO) Controls the value of atdata_m[31] output in integration mode. */
        uint32_t razwi_0               : 27; /**< [ 31:  5](WO) Read-As-Zero, Writes Ignored. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_rtt_shrd_etf_itatbmdata0_s cn; */
};
typedef union cavm_rtt_shrd_etf_itatbmdata0 cavm_rtt_shrd_etf_itatbmdata0_t;

#define CAVM_RTT_SHRD_ETF_ITATBMDATA0 CAVM_RTT_SHRD_ETF_ITATBMDATA0_FUNC()
static inline uint64_t CAVM_RTT_SHRD_ETF_ITATBMDATA0_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_RTT_SHRD_ETF_ITATBMDATA0_FUNC(void)
{
    if (cavm_is_model(OCTEONTX_CNF10KB))
        return 0x80e000020ed0ll;
    __cavm_csr_fatal("RTT_SHRD_ETF_ITATBMDATA0", 0, 0, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_RTT_SHRD_ETF_ITATBMDATA0 cavm_rtt_shrd_etf_itatbmdata0_t
#define bustype_CAVM_RTT_SHRD_ETF_ITATBMDATA0 CSR_TYPE_NCB32b
#define basename_CAVM_RTT_SHRD_ETF_ITATBMDATA0 "RTT_SHRD_ETF_ITATBMDATA0"
#define busnum_CAVM_RTT_SHRD_ETF_ITATBMDATA0 0
#define arguments_CAVM_RTT_SHRD_ETF_ITATBMDATA0 -1,-1,-1,-1

/**
 * Register (NCB32b) rtt_shrd_etf_itctrl
 *
 * RTT Shrd Etf Itctrl Register
 * The Integration Mode Control register is used to enable topology detection.
 */
union cavm_rtt_shrd_etf_itctrl
{
    uint32_t u;
    struct cavm_rtt_shrd_etf_itctrl_s
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
    /* struct cavm_rtt_shrd_etf_itctrl_s cn; */
};
typedef union cavm_rtt_shrd_etf_itctrl cavm_rtt_shrd_etf_itctrl_t;

#define CAVM_RTT_SHRD_ETF_ITCTRL CAVM_RTT_SHRD_ETF_ITCTRL_FUNC()
static inline uint64_t CAVM_RTT_SHRD_ETF_ITCTRL_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_RTT_SHRD_ETF_ITCTRL_FUNC(void)
{
    if (cavm_is_model(OCTEONTX_CNF10KB))
        return 0x80e000020f00ll;
    __cavm_csr_fatal("RTT_SHRD_ETF_ITCTRL", 0, 0, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_RTT_SHRD_ETF_ITCTRL cavm_rtt_shrd_etf_itctrl_t
#define bustype_CAVM_RTT_SHRD_ETF_ITCTRL CSR_TYPE_NCB32b
#define basename_CAVM_RTT_SHRD_ETF_ITCTRL "RTT_SHRD_ETF_ITCTRL"
#define busnum_CAVM_RTT_SHRD_ETF_ITCTRL 0
#define arguments_CAVM_RTT_SHRD_ETF_ITCTRL -1,-1,-1,-1

/**
 * Register (NCB32b) rtt_shrd_etf_itevtintr
 *
 * RTT Shrd Etf Itevtintr Register
 * This register controls the values of event and interrupt outputs in integration
 * mode. In functional mode, this register behaves as RAZ/WI. In integration mode, the
 * value that is written to any bit of this register is driven on the output pin that
 * is controlled by that bit and the reads return 0x0.
 */
union cavm_rtt_shrd_etf_itevtintr
{
    uint32_t u;
    struct cavm_rtt_shrd_etf_itevtintr_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t razwi_0               : 29; /**< [ 31:  3](WO) Read-As-Zero, Writes Ignored. */
        uint32_t flushcomp             : 1;  /**< [  2:  2](WO) Controls the value of flushcomp output in integration mode. */
        uint32_t full                  : 1;  /**< [  1:  1](WO) Controls the value of full output in integration mode. */
        uint32_t acqcomp               : 1;  /**< [  0:  0](WO) Controls the value of acqcomp output in integration mode. */
#else /* Word 0 - Little Endian */
        uint32_t acqcomp               : 1;  /**< [  0:  0](WO) Controls the value of acqcomp output in integration mode. */
        uint32_t full                  : 1;  /**< [  1:  1](WO) Controls the value of full output in integration mode. */
        uint32_t flushcomp             : 1;  /**< [  2:  2](WO) Controls the value of flushcomp output in integration mode. */
        uint32_t razwi_0               : 29; /**< [ 31:  3](WO) Read-As-Zero, Writes Ignored. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_rtt_shrd_etf_itevtintr_s cn; */
};
typedef union cavm_rtt_shrd_etf_itevtintr cavm_rtt_shrd_etf_itevtintr_t;

#define CAVM_RTT_SHRD_ETF_ITEVTINTR CAVM_RTT_SHRD_ETF_ITEVTINTR_FUNC()
static inline uint64_t CAVM_RTT_SHRD_ETF_ITEVTINTR_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_RTT_SHRD_ETF_ITEVTINTR_FUNC(void)
{
    if (cavm_is_model(OCTEONTX_CNF10KB))
        return 0x80e000020ee0ll;
    __cavm_csr_fatal("RTT_SHRD_ETF_ITEVTINTR", 0, 0, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_RTT_SHRD_ETF_ITEVTINTR cavm_rtt_shrd_etf_itevtintr_t
#define bustype_CAVM_RTT_SHRD_ETF_ITEVTINTR CSR_TYPE_NCB32b
#define basename_CAVM_RTT_SHRD_ETF_ITEVTINTR "RTT_SHRD_ETF_ITEVTINTR"
#define busnum_CAVM_RTT_SHRD_ETF_ITEVTINTR 0
#define arguments_CAVM_RTT_SHRD_ETF_ITEVTINTR -1,-1,-1,-1

/**
 * Register (NCB32b) rtt_shrd_etf_ittrflin
 *
 * RTT Shrd Etf Ittrflin Register
 * This register captures the values of the flushin and trigin inputs in integration
 * mode. In functional mode, this register behaves as RAZ/WI.
 */
union cavm_rtt_shrd_etf_ittrflin
{
    uint32_t u;
    struct cavm_rtt_shrd_etf_ittrflin_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t razwi_0               : 30; /**< [ 31:  2](RO) Read-As-Zero, Writes Ignored. */
        uint32_t flushin               : 1;  /**< [  1:  1](RO) Integration status of flushin input. In integration mode, this bit latches to 1
                                                                 on a rising edge of the flushin input. It is cleared when the register is read
                                                                 or when integration mode is disabled. */
        uint32_t trigin                : 1;  /**< [  0:  0](RO) Integration status of trigin input. In integration mode, this bit latches to 1
                                                                 on a rising edge of the trigin input. It is cleared when the register is read or
                                                                 when integration mode is disabled. */
#else /* Word 0 - Little Endian */
        uint32_t trigin                : 1;  /**< [  0:  0](RO) Integration status of trigin input. In integration mode, this bit latches to 1
                                                                 on a rising edge of the trigin input. It is cleared when the register is read or
                                                                 when integration mode is disabled. */
        uint32_t flushin               : 1;  /**< [  1:  1](RO) Integration status of flushin input. In integration mode, this bit latches to 1
                                                                 on a rising edge of the flushin input. It is cleared when the register is read
                                                                 or when integration mode is disabled. */
        uint32_t razwi_0               : 30; /**< [ 31:  2](RO) Read-As-Zero, Writes Ignored. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_rtt_shrd_etf_ittrflin_s cn; */
};
typedef union cavm_rtt_shrd_etf_ittrflin cavm_rtt_shrd_etf_ittrflin_t;

#define CAVM_RTT_SHRD_ETF_ITTRFLIN CAVM_RTT_SHRD_ETF_ITTRFLIN_FUNC()
static inline uint64_t CAVM_RTT_SHRD_ETF_ITTRFLIN_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_RTT_SHRD_ETF_ITTRFLIN_FUNC(void)
{
    if (cavm_is_model(OCTEONTX_CNF10KB))
        return 0x80e000020ee8ll;
    __cavm_csr_fatal("RTT_SHRD_ETF_ITTRFLIN", 0, 0, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_RTT_SHRD_ETF_ITTRFLIN cavm_rtt_shrd_etf_ittrflin_t
#define bustype_CAVM_RTT_SHRD_ETF_ITTRFLIN CSR_TYPE_NCB32b
#define basename_CAVM_RTT_SHRD_ETF_ITTRFLIN "RTT_SHRD_ETF_ITTRFLIN"
#define busnum_CAVM_RTT_SHRD_ETF_ITTRFLIN 0
#define arguments_CAVM_RTT_SHRD_ETF_ITTRFLIN -1,-1,-1,-1

/**
 * Register (NCB32b) rtt_shrd_etf_lbuflevel
 *
 * RTT Shrd Etf Lbuflevel Register
 * Reading this register returns the maximum fill level of the trace memory in 32-bit
 * words since this register was last read. Reading this register also results in its
 * contents being updated to the current fill level. When entering Disabled state, it
 * retains its last value. While in Disabled state, reads from this register do not
 * affect its value. When exiting Disabled state, the LBUFLEVEL register is updated to
 * the current fill level.
 */
union cavm_rtt_shrd_etf_lbuflevel
{
    uint32_t u;
    struct cavm_rtt_shrd_etf_lbuflevel_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t razwi_0               : 24; /**< [ 31:  8](RO) Read-As-Zero, Writes Ignored. */
        uint32_t lbuflevel             : 8;  /**< [  7:  0](RO) Latched Buffer Fill Level. Indicates the maximum fill level of the trace memory
                                                                 in 32-bit words since this register was last read. The width of the register is
                                                                 1 + log2(MEM_SIZE). */
#else /* Word 0 - Little Endian */
        uint32_t lbuflevel             : 8;  /**< [  7:  0](RO) Latched Buffer Fill Level. Indicates the maximum fill level of the trace memory
                                                                 in 32-bit words since this register was last read. The width of the register is
                                                                 1 + log2(MEM_SIZE). */
        uint32_t razwi_0               : 24; /**< [ 31:  8](RO) Read-As-Zero, Writes Ignored. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_rtt_shrd_etf_lbuflevel_s cn; */
};
typedef union cavm_rtt_shrd_etf_lbuflevel cavm_rtt_shrd_etf_lbuflevel_t;

#define CAVM_RTT_SHRD_ETF_LBUFLEVEL CAVM_RTT_SHRD_ETF_LBUFLEVEL_FUNC()
static inline uint64_t CAVM_RTT_SHRD_ETF_LBUFLEVEL_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_RTT_SHRD_ETF_LBUFLEVEL_FUNC(void)
{
    if (cavm_is_model(OCTEONTX_CNF10KB))
        return 0x80e00002002cll;
    __cavm_csr_fatal("RTT_SHRD_ETF_LBUFLEVEL", 0, 0, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_RTT_SHRD_ETF_LBUFLEVEL cavm_rtt_shrd_etf_lbuflevel_t
#define bustype_CAVM_RTT_SHRD_ETF_LBUFLEVEL CSR_TYPE_NCB32b
#define basename_CAVM_RTT_SHRD_ETF_LBUFLEVEL "RTT_SHRD_ETF_LBUFLEVEL"
#define busnum_CAVM_RTT_SHRD_ETF_LBUFLEVEL 0
#define arguments_CAVM_RTT_SHRD_ETF_LBUFLEVEL -1,-1,-1,-1

/**
 * Register (NCB32b) rtt_shrd_etf_mode
 *
 * RTT Shrd Etf Mode Register
 * This register controls the TMC operating mode. The operating mode can only be
 * changed when the TMC is in Disabled state. Attempting to write to this register in
 * any other state results in UNPREDICTABLE behavior. The operating mode is ignored
 * when in Disabled state.
 */
union cavm_rtt_shrd_etf_mode
{
    uint32_t u;
    struct cavm_rtt_shrd_etf_mode_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t razwi_1               : 27; /**< [ 31:  5](R/W) Read-As-Zero, Writes Ignored. */
        uint32_t stallonstop           : 1;  /**< [  4:  4](R/W) Stall On Stop. If this bit is set and the formatter stops as a result of a stop
                                                                 event, the output atready_s is de-asserted to stall the ATB interface and avoid
                                                                 loss of trace. If this bit is clear and the formatter stops as a result of a
                                                                 stop event, signal atready_s remains asserted but the TMC discards further
                                                                 incoming trace. */
        uint32_t razwi_0               : 2;  /**< [  3:  2](R/W) Read-As-Zero, Writes Ignored. */
        uint32_t mode                  : 2;  /**< [  1:  0](R/W) Selects the operating mode. If a reserved MODE value is programmed and trace
                                                                 capture is enabled, the TMC starts to operate in SWF1 mode. However, reading the
                                                                 MODE.MODE field returns the programmed value. */
#else /* Word 0 - Little Endian */
        uint32_t mode                  : 2;  /**< [  1:  0](R/W) Selects the operating mode. If a reserved MODE value is programmed and trace
                                                                 capture is enabled, the TMC starts to operate in SWF1 mode. However, reading the
                                                                 MODE.MODE field returns the programmed value. */
        uint32_t razwi_0               : 2;  /**< [  3:  2](R/W) Read-As-Zero, Writes Ignored. */
        uint32_t stallonstop           : 1;  /**< [  4:  4](R/W) Stall On Stop. If this bit is set and the formatter stops as a result of a stop
                                                                 event, the output atready_s is de-asserted to stall the ATB interface and avoid
                                                                 loss of trace. If this bit is clear and the formatter stops as a result of a
                                                                 stop event, signal atready_s remains asserted but the TMC discards further
                                                                 incoming trace. */
        uint32_t razwi_1               : 27; /**< [ 31:  5](R/W) Read-As-Zero, Writes Ignored. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_rtt_shrd_etf_mode_s cn; */
};
typedef union cavm_rtt_shrd_etf_mode cavm_rtt_shrd_etf_mode_t;

#define CAVM_RTT_SHRD_ETF_MODE CAVM_RTT_SHRD_ETF_MODE_FUNC()
static inline uint64_t CAVM_RTT_SHRD_ETF_MODE_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_RTT_SHRD_ETF_MODE_FUNC(void)
{
    if (cavm_is_model(OCTEONTX_CNF10KB))
        return 0x80e000020028ll;
    __cavm_csr_fatal("RTT_SHRD_ETF_MODE", 0, 0, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_RTT_SHRD_ETF_MODE cavm_rtt_shrd_etf_mode_t
#define bustype_CAVM_RTT_SHRD_ETF_MODE CSR_TYPE_NCB32b
#define basename_CAVM_RTT_SHRD_ETF_MODE "RTT_SHRD_ETF_MODE"
#define busnum_CAVM_RTT_SHRD_ETF_MODE 0
#define arguments_CAVM_RTT_SHRD_ETF_MODE -1,-1,-1,-1

/**
 * Register (NCB32b) rtt_shrd_etf_pidr0
 *
 * RTT Shrd Etf Pidr0 Register
 * The PIDR0 register is part of the set of peripheral identification registers.
 */
union cavm_rtt_shrd_etf_pidr0
{
    uint32_t u;
    struct cavm_rtt_shrd_etf_pidr0_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t reserved_8_31         : 24;
        uint32_t part_0                : 8;  /**< [  7:  0](RO) Part number (lower 8 bits). Returns 0xea, indicating TMC ETF. */
#else /* Word 0 - Little Endian */
        uint32_t part_0                : 8;  /**< [  7:  0](RO) Part number (lower 8 bits). Returns 0xea, indicating TMC ETF. */
        uint32_t reserved_8_31         : 24;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_rtt_shrd_etf_pidr0_s cn; */
};
typedef union cavm_rtt_shrd_etf_pidr0 cavm_rtt_shrd_etf_pidr0_t;

#define CAVM_RTT_SHRD_ETF_PIDR0 CAVM_RTT_SHRD_ETF_PIDR0_FUNC()
static inline uint64_t CAVM_RTT_SHRD_ETF_PIDR0_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_RTT_SHRD_ETF_PIDR0_FUNC(void)
{
    if (cavm_is_model(OCTEONTX_CNF10KB))
        return 0x80e000020fe0ll;
    __cavm_csr_fatal("RTT_SHRD_ETF_PIDR0", 0, 0, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_RTT_SHRD_ETF_PIDR0 cavm_rtt_shrd_etf_pidr0_t
#define bustype_CAVM_RTT_SHRD_ETF_PIDR0 CSR_TYPE_NCB32b
#define basename_CAVM_RTT_SHRD_ETF_PIDR0 "RTT_SHRD_ETF_PIDR0"
#define busnum_CAVM_RTT_SHRD_ETF_PIDR0 0
#define arguments_CAVM_RTT_SHRD_ETF_PIDR0 -1,-1,-1,-1

/**
 * Register (NCB32b) rtt_shrd_etf_pidr1
 *
 * RTT Shrd Etf Pidr1 Register
 * The PIDR1 register is part of the set of peripheral identification registers.
 */
union cavm_rtt_shrd_etf_pidr1
{
    uint32_t u;
    struct cavm_rtt_shrd_etf_pidr1_s
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
    /* struct cavm_rtt_shrd_etf_pidr1_s cn; */
};
typedef union cavm_rtt_shrd_etf_pidr1 cavm_rtt_shrd_etf_pidr1_t;

#define CAVM_RTT_SHRD_ETF_PIDR1 CAVM_RTT_SHRD_ETF_PIDR1_FUNC()
static inline uint64_t CAVM_RTT_SHRD_ETF_PIDR1_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_RTT_SHRD_ETF_PIDR1_FUNC(void)
{
    if (cavm_is_model(OCTEONTX_CNF10KB))
        return 0x80e000020fe4ll;
    __cavm_csr_fatal("RTT_SHRD_ETF_PIDR1", 0, 0, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_RTT_SHRD_ETF_PIDR1 cavm_rtt_shrd_etf_pidr1_t
#define bustype_CAVM_RTT_SHRD_ETF_PIDR1 CSR_TYPE_NCB32b
#define basename_CAVM_RTT_SHRD_ETF_PIDR1 "RTT_SHRD_ETF_PIDR1"
#define busnum_CAVM_RTT_SHRD_ETF_PIDR1 0
#define arguments_CAVM_RTT_SHRD_ETF_PIDR1 -1,-1,-1,-1

/**
 * Register (NCB32b) rtt_shrd_etf_pidr2
 *
 * RTT Shrd Etf Pidr2 Register
 * The PIDR2 register is part of the set of peripheral identification registers.
 */
union cavm_rtt_shrd_etf_pidr2
{
    uint32_t u;
    struct cavm_rtt_shrd_etf_pidr2_s
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
    /* struct cavm_rtt_shrd_etf_pidr2_s cn; */
};
typedef union cavm_rtt_shrd_etf_pidr2 cavm_rtt_shrd_etf_pidr2_t;

#define CAVM_RTT_SHRD_ETF_PIDR2 CAVM_RTT_SHRD_ETF_PIDR2_FUNC()
static inline uint64_t CAVM_RTT_SHRD_ETF_PIDR2_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_RTT_SHRD_ETF_PIDR2_FUNC(void)
{
    if (cavm_is_model(OCTEONTX_CNF10KB))
        return 0x80e000020fe8ll;
    __cavm_csr_fatal("RTT_SHRD_ETF_PIDR2", 0, 0, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_RTT_SHRD_ETF_PIDR2 cavm_rtt_shrd_etf_pidr2_t
#define bustype_CAVM_RTT_SHRD_ETF_PIDR2 CSR_TYPE_NCB32b
#define basename_CAVM_RTT_SHRD_ETF_PIDR2 "RTT_SHRD_ETF_PIDR2"
#define busnum_CAVM_RTT_SHRD_ETF_PIDR2 0
#define arguments_CAVM_RTT_SHRD_ETF_PIDR2 -1,-1,-1,-1

/**
 * Register (NCB32b) rtt_shrd_etf_pidr3
 *
 * RTT Shrd Etf Pidr3 Register
 * The PIDR3 register is part of the set of peripheral identification registers.
 */
union cavm_rtt_shrd_etf_pidr3
{
    uint32_t u;
    struct cavm_rtt_shrd_etf_pidr3_s
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
    /* struct cavm_rtt_shrd_etf_pidr3_s cn; */
};
typedef union cavm_rtt_shrd_etf_pidr3 cavm_rtt_shrd_etf_pidr3_t;

#define CAVM_RTT_SHRD_ETF_PIDR3 CAVM_RTT_SHRD_ETF_PIDR3_FUNC()
static inline uint64_t CAVM_RTT_SHRD_ETF_PIDR3_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_RTT_SHRD_ETF_PIDR3_FUNC(void)
{
    if (cavm_is_model(OCTEONTX_CNF10KB))
        return 0x80e000020fecll;
    __cavm_csr_fatal("RTT_SHRD_ETF_PIDR3", 0, 0, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_RTT_SHRD_ETF_PIDR3 cavm_rtt_shrd_etf_pidr3_t
#define bustype_CAVM_RTT_SHRD_ETF_PIDR3 CSR_TYPE_NCB32b
#define basename_CAVM_RTT_SHRD_ETF_PIDR3 "RTT_SHRD_ETF_PIDR3"
#define busnum_CAVM_RTT_SHRD_ETF_PIDR3 0
#define arguments_CAVM_RTT_SHRD_ETF_PIDR3 -1,-1,-1,-1

/**
 * Register (NCB32b) rtt_shrd_etf_pidr4
 *
 * RTT Shrd Etf Pidr4 Register
 * The PIDR4 register is part of the set of peripheral identification registers.
 */
union cavm_rtt_shrd_etf_pidr4
{
    uint32_t u;
    struct cavm_rtt_shrd_etf_pidr4_s
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
    /* struct cavm_rtt_shrd_etf_pidr4_s cn; */
};
typedef union cavm_rtt_shrd_etf_pidr4 cavm_rtt_shrd_etf_pidr4_t;

#define CAVM_RTT_SHRD_ETF_PIDR4 CAVM_RTT_SHRD_ETF_PIDR4_FUNC()
static inline uint64_t CAVM_RTT_SHRD_ETF_PIDR4_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_RTT_SHRD_ETF_PIDR4_FUNC(void)
{
    if (cavm_is_model(OCTEONTX_CNF10KB))
        return 0x80e000020fd0ll;
    __cavm_csr_fatal("RTT_SHRD_ETF_PIDR4", 0, 0, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_RTT_SHRD_ETF_PIDR4 cavm_rtt_shrd_etf_pidr4_t
#define bustype_CAVM_RTT_SHRD_ETF_PIDR4 CSR_TYPE_NCB32b
#define basename_CAVM_RTT_SHRD_ETF_PIDR4 "RTT_SHRD_ETF_PIDR4"
#define busnum_CAVM_RTT_SHRD_ETF_PIDR4 0
#define arguments_CAVM_RTT_SHRD_ETF_PIDR4 -1,-1,-1,-1

/**
 * Register (NCB32b) rtt_shrd_etf_pidr5
 *
 * RTT Shrd Etf Pidr5 Register
 * The PIDR5 register is part of the set of peripheral identification registers.
 */
union cavm_rtt_shrd_etf_pidr5
{
    uint32_t u;
    struct cavm_rtt_shrd_etf_pidr5_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t reserved_8_31         : 24;
        uint32_t pidr5                 : 8;  /**< [  7:  0](RO) Reserved. */
#else /* Word 0 - Little Endian */
        uint32_t pidr5                 : 8;  /**< [  7:  0](RO) Reserved. */
        uint32_t reserved_8_31         : 24;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_rtt_shrd_etf_pidr5_s cn; */
};
typedef union cavm_rtt_shrd_etf_pidr5 cavm_rtt_shrd_etf_pidr5_t;

#define CAVM_RTT_SHRD_ETF_PIDR5 CAVM_RTT_SHRD_ETF_PIDR5_FUNC()
static inline uint64_t CAVM_RTT_SHRD_ETF_PIDR5_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_RTT_SHRD_ETF_PIDR5_FUNC(void)
{
    if (cavm_is_model(OCTEONTX_CNF10KB))
        return 0x80e000020fd4ll;
    __cavm_csr_fatal("RTT_SHRD_ETF_PIDR5", 0, 0, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_RTT_SHRD_ETF_PIDR5 cavm_rtt_shrd_etf_pidr5_t
#define bustype_CAVM_RTT_SHRD_ETF_PIDR5 CSR_TYPE_NCB32b
#define basename_CAVM_RTT_SHRD_ETF_PIDR5 "RTT_SHRD_ETF_PIDR5"
#define busnum_CAVM_RTT_SHRD_ETF_PIDR5 0
#define arguments_CAVM_RTT_SHRD_ETF_PIDR5 -1,-1,-1,-1

/**
 * Register (NCB32b) rtt_shrd_etf_pidr6
 *
 * RTT Shrd Etf Pidr6 Register
 * The PIDR6 register is part of the set of peripheral identification registers.
 */
union cavm_rtt_shrd_etf_pidr6
{
    uint32_t u;
    struct cavm_rtt_shrd_etf_pidr6_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t reserved_8_31         : 24;
        uint32_t pidr6                 : 8;  /**< [  7:  0](RO) Reserved. */
#else /* Word 0 - Little Endian */
        uint32_t pidr6                 : 8;  /**< [  7:  0](RO) Reserved. */
        uint32_t reserved_8_31         : 24;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_rtt_shrd_etf_pidr6_s cn; */
};
typedef union cavm_rtt_shrd_etf_pidr6 cavm_rtt_shrd_etf_pidr6_t;

#define CAVM_RTT_SHRD_ETF_PIDR6 CAVM_RTT_SHRD_ETF_PIDR6_FUNC()
static inline uint64_t CAVM_RTT_SHRD_ETF_PIDR6_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_RTT_SHRD_ETF_PIDR6_FUNC(void)
{
    if (cavm_is_model(OCTEONTX_CNF10KB))
        return 0x80e000020fd8ll;
    __cavm_csr_fatal("RTT_SHRD_ETF_PIDR6", 0, 0, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_RTT_SHRD_ETF_PIDR6 cavm_rtt_shrd_etf_pidr6_t
#define bustype_CAVM_RTT_SHRD_ETF_PIDR6 CSR_TYPE_NCB32b
#define basename_CAVM_RTT_SHRD_ETF_PIDR6 "RTT_SHRD_ETF_PIDR6"
#define busnum_CAVM_RTT_SHRD_ETF_PIDR6 0
#define arguments_CAVM_RTT_SHRD_ETF_PIDR6 -1,-1,-1,-1

/**
 * Register (NCB32b) rtt_shrd_etf_pidr7
 *
 * RTT Shrd Etf Pidr7 Register
 * The PIDR7 register is part of the set of peripheral identification registers.
 */
union cavm_rtt_shrd_etf_pidr7
{
    uint32_t u;
    struct cavm_rtt_shrd_etf_pidr7_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t reserved_8_31         : 24;
        uint32_t pidr7                 : 8;  /**< [  7:  0](RO) Reserved. */
#else /* Word 0 - Little Endian */
        uint32_t pidr7                 : 8;  /**< [  7:  0](RO) Reserved. */
        uint32_t reserved_8_31         : 24;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_rtt_shrd_etf_pidr7_s cn; */
};
typedef union cavm_rtt_shrd_etf_pidr7 cavm_rtt_shrd_etf_pidr7_t;

#define CAVM_RTT_SHRD_ETF_PIDR7 CAVM_RTT_SHRD_ETF_PIDR7_FUNC()
static inline uint64_t CAVM_RTT_SHRD_ETF_PIDR7_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_RTT_SHRD_ETF_PIDR7_FUNC(void)
{
    if (cavm_is_model(OCTEONTX_CNF10KB))
        return 0x80e000020fdcll;
    __cavm_csr_fatal("RTT_SHRD_ETF_PIDR7", 0, 0, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_RTT_SHRD_ETF_PIDR7 cavm_rtt_shrd_etf_pidr7_t
#define bustype_CAVM_RTT_SHRD_ETF_PIDR7 CSR_TYPE_NCB32b
#define basename_CAVM_RTT_SHRD_ETF_PIDR7 "RTT_SHRD_ETF_PIDR7"
#define busnum_CAVM_RTT_SHRD_ETF_PIDR7 0
#define arguments_CAVM_RTT_SHRD_ETF_PIDR7 -1,-1,-1,-1

/**
 * Register (NCB32b) rtt_shrd_etf_pscr
 *
 * RTT Shrd Etf Pscr Register
 * This register determines the reload value of the Periodic Synchronization Counter.
 * This counter enables the frequency of sync packets to be optimized to the trace
 * capture buffer size. The default behavior of the counter is to generate periodic
 * synchronization requests, syncreq_s, on the ATB slave interface.
 */
union cavm_rtt_shrd_etf_pscr
{
    uint32_t u;
    struct cavm_rtt_shrd_etf_pscr_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t razwi_0               : 27; /**< [ 31:  5](R/W) Read-As-Zero, Writes Ignored. */
        uint32_t pscount               : 5;  /**< [  4:  0](R/W) Periodic Synchronization Count. Determines the reload value of the
                                                                 Synchronization Counter. The reload value takes effect the next time the counter
                                                                 reaches zero. When trace capture is enabled, the Synchronization Counter counts
                                                                 the number of bytes of trace data that is stored into the trace memory,
                                                                 regardless of whether the trace data has been formatted by the TMC or not, since
                                                                 the occurrence of the last sync request on the ATB slave interface. When the
                                                                 counter reaches 0, a sync request is sent on the ATB slave interface. Reads from
                                                                 this register return the reload value that is programmed in this register. This
                                                                 field resets to 0x0A, that is, the default sync period is 2^10 bytes. If a
                                                                 reserved value is programmed in this register field, the value 0x1B is used
                                                                 instead, and subsequent reads from this register also return 0x1B. The following
                                                                 constraints apply to the values written to the PSCount field: 0x0 -
                                                                 synchronization is disabled, 0x1-0x6 - reserved, 0x7-0x1B - synchronization
                                                                 period is 2^PSCount bytes. The smallest value 0x7 gives a sync period of 128
                                                                 bytes. The maximum allowed value 0x1B gives a sync period of 2^27 bytes, 0x1C-
                                                                 0x1F - reserved. */
#else /* Word 0 - Little Endian */
        uint32_t pscount               : 5;  /**< [  4:  0](R/W) Periodic Synchronization Count. Determines the reload value of the
                                                                 Synchronization Counter. The reload value takes effect the next time the counter
                                                                 reaches zero. When trace capture is enabled, the Synchronization Counter counts
                                                                 the number of bytes of trace data that is stored into the trace memory,
                                                                 regardless of whether the trace data has been formatted by the TMC or not, since
                                                                 the occurrence of the last sync request on the ATB slave interface. When the
                                                                 counter reaches 0, a sync request is sent on the ATB slave interface. Reads from
                                                                 this register return the reload value that is programmed in this register. This
                                                                 field resets to 0x0A, that is, the default sync period is 2^10 bytes. If a
                                                                 reserved value is programmed in this register field, the value 0x1B is used
                                                                 instead, and subsequent reads from this register also return 0x1B. The following
                                                                 constraints apply to the values written to the PSCount field: 0x0 -
                                                                 synchronization is disabled, 0x1-0x6 - reserved, 0x7-0x1B - synchronization
                                                                 period is 2^PSCount bytes. The smallest value 0x7 gives a sync period of 128
                                                                 bytes. The maximum allowed value 0x1B gives a sync period of 2^27 bytes, 0x1C-
                                                                 0x1F - reserved. */
        uint32_t razwi_0               : 27; /**< [ 31:  5](R/W) Read-As-Zero, Writes Ignored. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_rtt_shrd_etf_pscr_s cn; */
};
typedef union cavm_rtt_shrd_etf_pscr cavm_rtt_shrd_etf_pscr_t;

#define CAVM_RTT_SHRD_ETF_PSCR CAVM_RTT_SHRD_ETF_PSCR_FUNC()
static inline uint64_t CAVM_RTT_SHRD_ETF_PSCR_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_RTT_SHRD_ETF_PSCR_FUNC(void)
{
    if (cavm_is_model(OCTEONTX_CNF10KB))
        return 0x80e000020308ll;
    __cavm_csr_fatal("RTT_SHRD_ETF_PSCR", 0, 0, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_RTT_SHRD_ETF_PSCR cavm_rtt_shrd_etf_pscr_t
#define bustype_CAVM_RTT_SHRD_ETF_PSCR CSR_TYPE_NCB32b
#define basename_CAVM_RTT_SHRD_ETF_PSCR "RTT_SHRD_ETF_PSCR"
#define busnum_CAVM_RTT_SHRD_ETF_PSCR 0
#define arguments_CAVM_RTT_SHRD_ETF_PSCR -1,-1,-1,-1

/**
 * Register (NCB32b) rtt_shrd_etf_rrd
 *
 * RTT Shrd Etf Rrd Register
 * Reading this register allows data to be read from the trace memory at the location
 * pointed to by the RRP register when either in the Disabled state or operating in CB
 * or SWF1 mode. When ATB_DATA_WIDTH is 32, 64 or 128 bit wide the memory width is
 * twice as wide and a memory word holds 8, 16 or 32 bytes. Multiple RRD reads must be
 * performed to read a full memory word. When a full memory width of data has been read
 * via the RRD register, the RRP register is incremented to the next memory word. When
 * the TMC left the Disabled state and the trace memory is empty, this register returns
 * 0xFFFFFFFF. When the TMC left the Disabled state and the trace memory is empty, this
 * register returns 0xFFFFFFFF. When operating in CB mode and the TMC left the Disabled
 * state, this register returns 0xFFFFFFFF in all other states except the STOPPED
 * state. When operating in HWF mode, this register also returns 0xFFFFFFFF.
 */
union cavm_rtt_shrd_etf_rrd
{
    uint32_t u;
    struct cavm_rtt_shrd_etf_rrd_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t rrd                   : 32; /**< [ 31:  0](RO) Returns the data read from trace memory. */
#else /* Word 0 - Little Endian */
        uint32_t rrd                   : 32; /**< [ 31:  0](RO) Returns the data read from trace memory. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_rtt_shrd_etf_rrd_s cn; */
};
typedef union cavm_rtt_shrd_etf_rrd cavm_rtt_shrd_etf_rrd_t;

#define CAVM_RTT_SHRD_ETF_RRD CAVM_RTT_SHRD_ETF_RRD_FUNC()
static inline uint64_t CAVM_RTT_SHRD_ETF_RRD_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_RTT_SHRD_ETF_RRD_FUNC(void)
{
    if (cavm_is_model(OCTEONTX_CNF10KB))
        return 0x80e000020010ll;
    __cavm_csr_fatal("RTT_SHRD_ETF_RRD", 0, 0, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_RTT_SHRD_ETF_RRD cavm_rtt_shrd_etf_rrd_t
#define bustype_CAVM_RTT_SHRD_ETF_RRD CSR_TYPE_NCB32b
#define basename_CAVM_RTT_SHRD_ETF_RRD "RTT_SHRD_ETF_RRD"
#define busnum_CAVM_RTT_SHRD_ETF_RRD 0
#define arguments_CAVM_RTT_SHRD_ETF_RRD -1,-1,-1,-1

/**
 * Register (NCB32b) rtt_shrd_etf_rrp
 *
 * RTT Shrd Etf Rrp Register
 * The RAM Read Pointer Register contains the value of the read pointer that is used to
 * read entries from trace memory over the APB interface. Software must program it
 * before enabling trace capture. Software must program it with the same value as RWP
 * before enabling trace capture.
 */
union cavm_rtt_shrd_etf_rrp
{
    uint32_t u;
    struct cavm_rtt_shrd_etf_rrp_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t razwi_0               : 23; /**< [ 31:  9](R/W) Read-As-Zero, Writes Ignored. */
        uint32_t rrp                   : 9;  /**< [  8:  0](R/W) The RRP width depends on the size of trace memory and is given by log2(MEM_SIZE
                                                                 x 4). The remaining MSBs of the 32-bit register are of type RAZ/WI. When
                                                                 ATB_DATA_WIDTH is 32, 64 or 128 bit wide the memory width is twice as wide and a
                                                                 memory word holds 8, 16 or 32 bytes. When a full memory width of data has been
                                                                 read via the RRD register, the RRP register is incremented to the next memory
                                                                 word. Some of the lower bits have access type RAZ/WI. The number of bits is
                                                                 calculated as log2(2*ATB_DATA_WIDTH/8). Also the lowest 4 bits are always
                                                                 written 0 to enforce alignment to the frame length of 128 bits. For 256-bit wide
                                                                 memory, Software must program the 5th bit with 0 to enforce alignment with the
                                                                 memory width. */
#else /* Word 0 - Little Endian */
        uint32_t rrp                   : 9;  /**< [  8:  0](R/W) The RRP width depends on the size of trace memory and is given by log2(MEM_SIZE
                                                                 x 4). The remaining MSBs of the 32-bit register are of type RAZ/WI. When
                                                                 ATB_DATA_WIDTH is 32, 64 or 128 bit wide the memory width is twice as wide and a
                                                                 memory word holds 8, 16 or 32 bytes. When a full memory width of data has been
                                                                 read via the RRD register, the RRP register is incremented to the next memory
                                                                 word. Some of the lower bits have access type RAZ/WI. The number of bits is
                                                                 calculated as log2(2*ATB_DATA_WIDTH/8). Also the lowest 4 bits are always
                                                                 written 0 to enforce alignment to the frame length of 128 bits. For 256-bit wide
                                                                 memory, Software must program the 5th bit with 0 to enforce alignment with the
                                                                 memory width. */
        uint32_t razwi_0               : 23; /**< [ 31:  9](R/W) Read-As-Zero, Writes Ignored. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_rtt_shrd_etf_rrp_s cn; */
};
typedef union cavm_rtt_shrd_etf_rrp cavm_rtt_shrd_etf_rrp_t;

#define CAVM_RTT_SHRD_ETF_RRP CAVM_RTT_SHRD_ETF_RRP_FUNC()
static inline uint64_t CAVM_RTT_SHRD_ETF_RRP_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_RTT_SHRD_ETF_RRP_FUNC(void)
{
    if (cavm_is_model(OCTEONTX_CNF10KB))
        return 0x80e000020014ll;
    __cavm_csr_fatal("RTT_SHRD_ETF_RRP", 0, 0, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_RTT_SHRD_ETF_RRP cavm_rtt_shrd_etf_rrp_t
#define bustype_CAVM_RTT_SHRD_ETF_RRP CSR_TYPE_NCB32b
#define basename_CAVM_RTT_SHRD_ETF_RRP "RTT_SHRD_ETF_RRP"
#define busnum_CAVM_RTT_SHRD_ETF_RRP 0
#define arguments_CAVM_RTT_SHRD_ETF_RRP -1,-1,-1,-1

/**
 * Register (NCB32b) rtt_shrd_etf_rsz
 *
 * RTT Shrd Etf Rsz Register
 * Defines the size of trace memory in units of 32-bit words.
 */
union cavm_rtt_shrd_etf_rsz
{
    uint32_t u;
    struct cavm_rtt_shrd_etf_rsz_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t razwi_0               : 1;  /**< [ 31: 31](R/W) Read-As-Zero, Writes Ignored. */
        uint32_t rsz                   : 31; /**< [ 30:  0](RO) RAM size. Indicates the size of the RAM in 32-bit words. For example: Returns
                                                                 0x00000100 if trace memory size is 1KB, 0x40000000 if trace memory size is 4GB.
                                                                 This field has the same value as the MEM_SIZE parameter. */
#else /* Word 0 - Little Endian */
        uint32_t rsz                   : 31; /**< [ 30:  0](RO) RAM size. Indicates the size of the RAM in 32-bit words. For example: Returns
                                                                 0x00000100 if trace memory size is 1KB, 0x40000000 if trace memory size is 4GB.
                                                                 This field has the same value as the MEM_SIZE parameter. */
        uint32_t razwi_0               : 1;  /**< [ 31: 31](R/W) Read-As-Zero, Writes Ignored. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_rtt_shrd_etf_rsz_s cn; */
};
typedef union cavm_rtt_shrd_etf_rsz cavm_rtt_shrd_etf_rsz_t;

#define CAVM_RTT_SHRD_ETF_RSZ CAVM_RTT_SHRD_ETF_RSZ_FUNC()
static inline uint64_t CAVM_RTT_SHRD_ETF_RSZ_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_RTT_SHRD_ETF_RSZ_FUNC(void)
{
    if (cavm_is_model(OCTEONTX_CNF10KB))
        return 0x80e000020004ll;
    __cavm_csr_fatal("RTT_SHRD_ETF_RSZ", 0, 0, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_RTT_SHRD_ETF_RSZ cavm_rtt_shrd_etf_rsz_t
#define bustype_CAVM_RTT_SHRD_ETF_RSZ CSR_TYPE_NCB32b
#define basename_CAVM_RTT_SHRD_ETF_RSZ "RTT_SHRD_ETF_RSZ"
#define busnum_CAVM_RTT_SHRD_ETF_RSZ 0
#define arguments_CAVM_RTT_SHRD_ETF_RSZ -1,-1,-1,-1

/**
 * Register (NCB32b) rtt_shrd_etf_rwd
 *
 * RTT Shrd Etf Rwd Register
 * The RAM Write Data register enables testing of trace memory connectivity to the TMC.
 * Writing this register allows data to be written to the trace memory at the location
 * pointed to by the RWP register when in the Disabled state. When ATB_DATA_WIDTH is
 * 32, 64 or 128 bit wide the memory width is twice as wide and a memory word holds 8,
 * 16 or 32 bytes. Multiple RWD writes must be performed to write a full memory word.
 * When a full memory width of data has been written via the RWD register, the data is
 * written to the trace memory and the RWP register is incremented to the next memory
 * word.
 */
union cavm_rtt_shrd_etf_rwd
{
    uint32_t u;
    struct cavm_rtt_shrd_etf_rwd_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t rwd                   : 32; /**< [ 31:  0](WO) Data written to this register is placed in the trace memory. */
#else /* Word 0 - Little Endian */
        uint32_t rwd                   : 32; /**< [ 31:  0](WO) Data written to this register is placed in the trace memory. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_rtt_shrd_etf_rwd_s cn; */
};
typedef union cavm_rtt_shrd_etf_rwd cavm_rtt_shrd_etf_rwd_t;

#define CAVM_RTT_SHRD_ETF_RWD CAVM_RTT_SHRD_ETF_RWD_FUNC()
static inline uint64_t CAVM_RTT_SHRD_ETF_RWD_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_RTT_SHRD_ETF_RWD_FUNC(void)
{
    if (cavm_is_model(OCTEONTX_CNF10KB))
        return 0x80e000020024ll;
    __cavm_csr_fatal("RTT_SHRD_ETF_RWD", 0, 0, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_RTT_SHRD_ETF_RWD cavm_rtt_shrd_etf_rwd_t
#define bustype_CAVM_RTT_SHRD_ETF_RWD CSR_TYPE_NCB32b
#define basename_CAVM_RTT_SHRD_ETF_RWD "RTT_SHRD_ETF_RWD"
#define busnum_CAVM_RTT_SHRD_ETF_RWD 0
#define arguments_CAVM_RTT_SHRD_ETF_RWD -1,-1,-1,-1

/**
 * Register (NCB32b) rtt_shrd_etf_rwp
 *
 * RTT Shrd Etf Rwp Register
 * RAM Write Pointer Register sets the write pointer that is used to write entries into
 * the trace memory. Software must program it before enabling trace capture.
 */
union cavm_rtt_shrd_etf_rwp
{
    uint32_t u;
    struct cavm_rtt_shrd_etf_rwp_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t razwi_0               : 23; /**< [ 31:  9](R/W) Read-As-Zero, Writes Ignored. */
        uint32_t rwp                   : 9;  /**< [  8:  0](R/W) The RWP width depends on the size of trace memory and is given by log2(MEM_SIZE
                                                                 x 4). The remaining MSBs of the 32-bit register are of type RAZ/WI. When
                                                                 ATB_DATA_WIDTH is 32, 64 or 128 bit wide the memory width is twice as wide and a
                                                                 memory word holds 8, 16 or 32 bytes. When a full memory width of data has been
                                                                 written to the RWD register, the RWP register is incremented to the next memory
                                                                 word. Some of the lower bits have access type RAZ/WI. The number of bits is
                                                                 calculated as log2(2*ATB_DATA_WIDTH/8). Also the lowest 4 bits are always
                                                                 written 0 to enforce alignment to the frame length of 128 bits. For 256-bit wide
                                                                 memory, Software must program the 5th bit with 0 to enforce alignment with the
                                                                 memory width. */
#else /* Word 0 - Little Endian */
        uint32_t rwp                   : 9;  /**< [  8:  0](R/W) The RWP width depends on the size of trace memory and is given by log2(MEM_SIZE
                                                                 x 4). The remaining MSBs of the 32-bit register are of type RAZ/WI. When
                                                                 ATB_DATA_WIDTH is 32, 64 or 128 bit wide the memory width is twice as wide and a
                                                                 memory word holds 8, 16 or 32 bytes. When a full memory width of data has been
                                                                 written to the RWD register, the RWP register is incremented to the next memory
                                                                 word. Some of the lower bits have access type RAZ/WI. The number of bits is
                                                                 calculated as log2(2*ATB_DATA_WIDTH/8). Also the lowest 4 bits are always
                                                                 written 0 to enforce alignment to the frame length of 128 bits. For 256-bit wide
                                                                 memory, Software must program the 5th bit with 0 to enforce alignment with the
                                                                 memory width. */
        uint32_t razwi_0               : 23; /**< [ 31:  9](R/W) Read-As-Zero, Writes Ignored. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_rtt_shrd_etf_rwp_s cn; */
};
typedef union cavm_rtt_shrd_etf_rwp cavm_rtt_shrd_etf_rwp_t;

#define CAVM_RTT_SHRD_ETF_RWP CAVM_RTT_SHRD_ETF_RWP_FUNC()
static inline uint64_t CAVM_RTT_SHRD_ETF_RWP_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_RTT_SHRD_ETF_RWP_FUNC(void)
{
    if (cavm_is_model(OCTEONTX_CNF10KB))
        return 0x80e000020018ll;
    __cavm_csr_fatal("RTT_SHRD_ETF_RWP", 0, 0, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_RTT_SHRD_ETF_RWP cavm_rtt_shrd_etf_rwp_t
#define bustype_CAVM_RTT_SHRD_ETF_RWP CSR_TYPE_NCB32b
#define basename_CAVM_RTT_SHRD_ETF_RWP "RTT_SHRD_ETF_RWP"
#define busnum_CAVM_RTT_SHRD_ETF_RWP 0
#define arguments_CAVM_RTT_SHRD_ETF_RWP -1,-1,-1,-1

/**
 * Register (NCB32b) rtt_shrd_etf_sts
 *
 * RTT Shrd Etf Sts Register
 * Indicates the status of the Trace Memory Controller. After a reset, software must
 * ignore all the fields of this register except STS.TMCReady. The other fields have
 * meaning only when the TMC has left the Disabled state. Writes to all RO fields of
 * this register are ignored.
 */
union cavm_rtt_shrd_etf_sts
{
    uint32_t u;
    struct cavm_rtt_shrd_etf_sts_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t razwi_0               : 27; /**< [ 31:  5](R/W) Read-As-Zero, Writes Ignored. */
        uint32_t empty                 : 1;  /**< [  4:  4](RO) Trace buffer empty. If set, this bit indicates that the trace memory does not
                                                                 contain any valid trace data. However, this does not mean that the pipeline
                                                                 stages within the TMC are empty. To determine whether the internal pipeline
                                                                 stages are empty, the software must read the STS.TMCReady bit. This bit is valid
                                                                 only when TraceCaptEn is HIGH. This bit reads as zero when TraceCaptEn is LOW.
                                                                 Note, that in Circular Buffer mode, it is possible that the Empty bit and the
                                                                 Full bit in this register are one at the same time because the Full bit in this
                                                                 mode, when set, does not clear until TraceCaptEn is set. */
        uint32_t ftempty               : 1;  /**< [  3:  3](RO) Trace capture has been completed and all captured trace data has been written to
                                                                 the trace memory, set when trace capture has stopped */
        uint32_t tmcready              : 1;  /**< [  2:  2](RO) Trace capture has been completed, all captured trace data has been written to
                                                                 the trace memory, and reading from trace memory completed as a result of
                                                                 FFCR.DrainBuffer bit being set */
        uint32_t triggered             : 1;  /**< [  1:  1](RO) TMC triggered. This bit is set when trace capture is in progress and the TMC has
                                                                 detected a trigger event. This bit is cleared to 0 when leaving the Disabled
                                                                 state and retains its value when entering the Disabled state. A trigger event is
                                                                 when the TMC has written a set number of data words, as programmed in the TRG
                                                                 register, into the trace memory after a rising edge of trigin input, or a
                                                                 trigger packet (atid_s = 0x7D) is received in the input trace. */
        uint32_t full                  : 1;  /**< [  0:  0](RO) Trace memory full. This bit helps in determining the amount of valid data
                                                                 present in the trace memory. It is not affected by the reprogramming of pointer
                                                                 registers in Disabled state. It is cleared when the TMC leaves Disabled state.
                                                                 In Circular Buffer mode, this flag is set when the RAM write pointer wraps
                                                                 around the top of the buffer, and remains set until the TraceCaptEn bit is
                                                                 cleared and set. In Software FIFO and Hardware FIFO mode, this flag indicates
                                                                 that the current space in the trace memory is less than or equal to the value
                                                                 programmed in the BUFWM Register, that is, Fill level \>= MEM_SIZE - BUFWM. The
                                                                 FULL output from the TMC reflects the value of this register bit, except when
                                                                 the Integration Mode bit in the ITCTRL Register, 0xF00, is set. */
#else /* Word 0 - Little Endian */
        uint32_t full                  : 1;  /**< [  0:  0](RO) Trace memory full. This bit helps in determining the amount of valid data
                                                                 present in the trace memory. It is not affected by the reprogramming of pointer
                                                                 registers in Disabled state. It is cleared when the TMC leaves Disabled state.
                                                                 In Circular Buffer mode, this flag is set when the RAM write pointer wraps
                                                                 around the top of the buffer, and remains set until the TraceCaptEn bit is
                                                                 cleared and set. In Software FIFO and Hardware FIFO mode, this flag indicates
                                                                 that the current space in the trace memory is less than or equal to the value
                                                                 programmed in the BUFWM Register, that is, Fill level \>= MEM_SIZE - BUFWM. The
                                                                 FULL output from the TMC reflects the value of this register bit, except when
                                                                 the Integration Mode bit in the ITCTRL Register, 0xF00, is set. */
        uint32_t triggered             : 1;  /**< [  1:  1](RO) TMC triggered. This bit is set when trace capture is in progress and the TMC has
                                                                 detected a trigger event. This bit is cleared to 0 when leaving the Disabled
                                                                 state and retains its value when entering the Disabled state. A trigger event is
                                                                 when the TMC has written a set number of data words, as programmed in the TRG
                                                                 register, into the trace memory after a rising edge of trigin input, or a
                                                                 trigger packet (atid_s = 0x7D) is received in the input trace. */
        uint32_t tmcready              : 1;  /**< [  2:  2](RO) Trace capture has been completed, all captured trace data has been written to
                                                                 the trace memory, and reading from trace memory completed as a result of
                                                                 FFCR.DrainBuffer bit being set */
        uint32_t ftempty               : 1;  /**< [  3:  3](RO) Trace capture has been completed and all captured trace data has been written to
                                                                 the trace memory, set when trace capture has stopped */
        uint32_t empty                 : 1;  /**< [  4:  4](RO) Trace buffer empty. If set, this bit indicates that the trace memory does not
                                                                 contain any valid trace data. However, this does not mean that the pipeline
                                                                 stages within the TMC are empty. To determine whether the internal pipeline
                                                                 stages are empty, the software must read the STS.TMCReady bit. This bit is valid
                                                                 only when TraceCaptEn is HIGH. This bit reads as zero when TraceCaptEn is LOW.
                                                                 Note, that in Circular Buffer mode, it is possible that the Empty bit and the
                                                                 Full bit in this register are one at the same time because the Full bit in this
                                                                 mode, when set, does not clear until TraceCaptEn is set. */
        uint32_t razwi_0               : 27; /**< [ 31:  5](R/W) Read-As-Zero, Writes Ignored. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_rtt_shrd_etf_sts_s cn; */
};
typedef union cavm_rtt_shrd_etf_sts cavm_rtt_shrd_etf_sts_t;

#define CAVM_RTT_SHRD_ETF_STS CAVM_RTT_SHRD_ETF_STS_FUNC()
static inline uint64_t CAVM_RTT_SHRD_ETF_STS_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_RTT_SHRD_ETF_STS_FUNC(void)
{
    if (cavm_is_model(OCTEONTX_CNF10KB))
        return 0x80e00002000cll;
    __cavm_csr_fatal("RTT_SHRD_ETF_STS", 0, 0, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_RTT_SHRD_ETF_STS cavm_rtt_shrd_etf_sts_t
#define bustype_CAVM_RTT_SHRD_ETF_STS CSR_TYPE_NCB32b
#define basename_CAVM_RTT_SHRD_ETF_STS "RTT_SHRD_ETF_STS"
#define busnum_CAVM_RTT_SHRD_ETF_STS 0
#define arguments_CAVM_RTT_SHRD_ETF_STS -1,-1,-1,-1

/**
 * Register (NCB32b) rtt_shrd_etf_trg
 *
 * RTT Shrd Etf Trg Register
 * In Circular Buffer mode, the Trigger Counter register specifies the number of 32-bit
 * words to capture in the trace memory, after detection of either a rising edge on the
 * trigin input or a trigger packet in the incoming trace stream, that is, where atid_s
 * = 0x7D. The value programmed must be aligned to the frame length of 128 bits.
 * Software must program this register before leaving Disabled state.
 */
union cavm_rtt_shrd_etf_trg
{
    uint32_t u;
    struct cavm_rtt_shrd_etf_trg_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t razwi_0               : 25; /**< [ 31:  7](R/W) Read-As-Zero, Writes Ignored. */
        uint32_t trg                   : 7;  /**< [  6:  0](R/W) Trigger count. This count represents the number of 32-bit words of trace that
                                                                 are captured between a trigger packet and a trigger event.The lowest two bits
                                                                 have access type RAZ/WI. */
#else /* Word 0 - Little Endian */
        uint32_t trg                   : 7;  /**< [  6:  0](R/W) Trigger count. This count represents the number of 32-bit words of trace that
                                                                 are captured between a trigger packet and a trigger event.The lowest two bits
                                                                 have access type RAZ/WI. */
        uint32_t razwi_0               : 25; /**< [ 31:  7](R/W) Read-As-Zero, Writes Ignored. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_rtt_shrd_etf_trg_s cn; */
};
typedef union cavm_rtt_shrd_etf_trg cavm_rtt_shrd_etf_trg_t;

#define CAVM_RTT_SHRD_ETF_TRG CAVM_RTT_SHRD_ETF_TRG_FUNC()
static inline uint64_t CAVM_RTT_SHRD_ETF_TRG_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_RTT_SHRD_ETF_TRG_FUNC(void)
{
    if (cavm_is_model(OCTEONTX_CNF10KB))
        return 0x80e00002001cll;
    __cavm_csr_fatal("RTT_SHRD_ETF_TRG", 0, 0, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_RTT_SHRD_ETF_TRG cavm_rtt_shrd_etf_trg_t
#define bustype_CAVM_RTT_SHRD_ETF_TRG CSR_TYPE_NCB32b
#define basename_CAVM_RTT_SHRD_ETF_TRG "RTT_SHRD_ETF_TRG"
#define busnum_CAVM_RTT_SHRD_ETF_TRG 0
#define arguments_CAVM_RTT_SHRD_ETF_TRG -1,-1,-1,-1

/**
 * Register (NCB32b) rtt_shrd_etr_authstatus
 *
 * RTT Shrd Etr Authstatus Register
 * Reports the current status of the authentication control signals.
 */
union cavm_rtt_shrd_etr_authstatus
{
    uint32_t u;
    struct cavm_rtt_shrd_etr_authstatus_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t reserved_12_31        : 20;
        uint32_t hnid                  : 2;  /**< [ 11: 10](RO) Hypervisor non-invasive debug. */
        uint32_t hid                   : 2;  /**< [  9:  8](RO) Hypervisor invasive debug. */
        uint32_t snid                  : 2;  /**< [  7:  6](RO) Secure non-invasive debug. */
        uint32_t sid                   : 2;  /**< [  5:  4](RO/H) Secure invasive debug. */
        uint32_t nsnid                 : 2;  /**< [  3:  2](RO) Non-secure non-invasive debug. */
        uint32_t nsid                  : 2;  /**< [  1:  0](RO/H) Non-secure invasive debug. */
#else /* Word 0 - Little Endian */
        uint32_t nsid                  : 2;  /**< [  1:  0](RO/H) Non-secure invasive debug. */
        uint32_t nsnid                 : 2;  /**< [  3:  2](RO) Non-secure non-invasive debug. */
        uint32_t sid                   : 2;  /**< [  5:  4](RO/H) Secure invasive debug. */
        uint32_t snid                  : 2;  /**< [  7:  6](RO) Secure non-invasive debug. */
        uint32_t hid                   : 2;  /**< [  9:  8](RO) Hypervisor invasive debug. */
        uint32_t hnid                  : 2;  /**< [ 11: 10](RO) Hypervisor non-invasive debug. */
        uint32_t reserved_12_31        : 20;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_rtt_shrd_etr_authstatus_s cn; */
};
typedef union cavm_rtt_shrd_etr_authstatus cavm_rtt_shrd_etr_authstatus_t;

#define CAVM_RTT_SHRD_ETR_AUTHSTATUS CAVM_RTT_SHRD_ETR_AUTHSTATUS_FUNC()
static inline uint64_t CAVM_RTT_SHRD_ETR_AUTHSTATUS_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_RTT_SHRD_ETR_AUTHSTATUS_FUNC(void)
{
    if (cavm_is_model(OCTEONTX_CNF10KB))
        return 0x80e000030fb8ll;
    __cavm_csr_fatal("RTT_SHRD_ETR_AUTHSTATUS", 0, 0, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_RTT_SHRD_ETR_AUTHSTATUS cavm_rtt_shrd_etr_authstatus_t
#define bustype_CAVM_RTT_SHRD_ETR_AUTHSTATUS CSR_TYPE_NCB32b
#define basename_CAVM_RTT_SHRD_ETR_AUTHSTATUS "RTT_SHRD_ETR_AUTHSTATUS"
#define busnum_CAVM_RTT_SHRD_ETR_AUTHSTATUS 0
#define arguments_CAVM_RTT_SHRD_ETR_AUTHSTATUS -1,-1,-1,-1

/**
 * Register (NCB32b) rtt_shrd_etr_axictl
 *
 * RTT Shrd Etr Axictl Register
 * This register controls TMC accesses to system memory through the AXI interface. The
 * TMC only performs data accesses, so the arprot_m[2] and awprot_m[2] outputs are LOW
 * for all AXI transfers.
 */
union cavm_rtt_shrd_etr_axictl
{
    uint32_t u;
    struct cavm_rtt_shrd_etr_axictl_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t razwi_2               : 12; /**< [ 31: 20](R/W) Read-As-Zero, Writes Ignored. */
        uint32_t rcache                : 4;  /**< [ 19: 16](R/W) This field controls the AXI cache encoding for read transfers, that is, the
                                                                 value to be driven on the arcache_m[3:0] bus. Software must only program a valid
                                                                 AXI3 or AXI4 cache encoding value in this field. These values are defined in the
                                                                 AMBA 4 AXI and ACE Protocol Specification. If software attempts to program an
                                                                 invalid value 0x0 is written to this field instead. */
        uint32_t razwi_1               : 4;  /**< [ 15: 12](R/W) Read-As-Zero, Writes Ignored. */
        uint32_t wrburstlen            : 4;  /**< [ 11:  8](R/W) Write Burst Length. This field indicates the maximum number of data transfers
                                                                 that can occur within each burst that is initiated by the TMC on the AXI
                                                                 interface. The write burst that is initiated on the AXI can be shorter than the
                                                                 programmed value in a case when the formatter has stopped due to a stop
                                                                 condition having occurred. */
        uint32_t razwi_0               : 2;  /**< [  7:  6](R/W) Read-As-Zero, Writes Ignored. */
        uint32_t wcache                : 4;  /**< [  5:  2](R/W) This field controls the AXI cache encoding for write transfers, that is, the
                                                                 value to be driven on the awcache_m[3:0] bus. Software must only program a valid
                                                                 AXI3 or AXI4 cache encoding value in this field. These values are defined in the
                                                                 AMBA 4 AXI and ACE Protocol Specification. If software attempts to program an
                                                                 invalid value, 0x0 is written to this field instead. */
        uint32_t protctrlbit1          : 1;  /**< [  1:  1](R/W) Secure Access (AXI4 definition). This bit controls the value that is driven on
                                                                 arprot_m[1] or awprot_m[1] on the AXI master interface when performing AXI
                                                                 transfers. */
        uint32_t protctrlbit0          : 1;  /**< [  0:  0](R/W) Privileged Access (AXI4 definition). This bit controls the value that is driven
                                                                 on arprot_m[0] or awprot_m[0] on the AXI master interface when performing AXI
                                                                 transfers. */
#else /* Word 0 - Little Endian */
        uint32_t protctrlbit0          : 1;  /**< [  0:  0](R/W) Privileged Access (AXI4 definition). This bit controls the value that is driven
                                                                 on arprot_m[0] or awprot_m[0] on the AXI master interface when performing AXI
                                                                 transfers. */
        uint32_t protctrlbit1          : 1;  /**< [  1:  1](R/W) Secure Access (AXI4 definition). This bit controls the value that is driven on
                                                                 arprot_m[1] or awprot_m[1] on the AXI master interface when performing AXI
                                                                 transfers. */
        uint32_t wcache                : 4;  /**< [  5:  2](R/W) This field controls the AXI cache encoding for write transfers, that is, the
                                                                 value to be driven on the awcache_m[3:0] bus. Software must only program a valid
                                                                 AXI3 or AXI4 cache encoding value in this field. These values are defined in the
                                                                 AMBA 4 AXI and ACE Protocol Specification. If software attempts to program an
                                                                 invalid value, 0x0 is written to this field instead. */
        uint32_t razwi_0               : 2;  /**< [  7:  6](R/W) Read-As-Zero, Writes Ignored. */
        uint32_t wrburstlen            : 4;  /**< [ 11:  8](R/W) Write Burst Length. This field indicates the maximum number of data transfers
                                                                 that can occur within each burst that is initiated by the TMC on the AXI
                                                                 interface. The write burst that is initiated on the AXI can be shorter than the
                                                                 programmed value in a case when the formatter has stopped due to a stop
                                                                 condition having occurred. */
        uint32_t razwi_1               : 4;  /**< [ 15: 12](R/W) Read-As-Zero, Writes Ignored. */
        uint32_t rcache                : 4;  /**< [ 19: 16](R/W) This field controls the AXI cache encoding for read transfers, that is, the
                                                                 value to be driven on the arcache_m[3:0] bus. Software must only program a valid
                                                                 AXI3 or AXI4 cache encoding value in this field. These values are defined in the
                                                                 AMBA 4 AXI and ACE Protocol Specification. If software attempts to program an
                                                                 invalid value 0x0 is written to this field instead. */
        uint32_t razwi_2               : 12; /**< [ 31: 20](R/W) Read-As-Zero, Writes Ignored. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_rtt_shrd_etr_axictl_s cn; */
};
typedef union cavm_rtt_shrd_etr_axictl cavm_rtt_shrd_etr_axictl_t;

#define CAVM_RTT_SHRD_ETR_AXICTL CAVM_RTT_SHRD_ETR_AXICTL_FUNC()
static inline uint64_t CAVM_RTT_SHRD_ETR_AXICTL_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_RTT_SHRD_ETR_AXICTL_FUNC(void)
{
    if (cavm_is_model(OCTEONTX_CNF10KB))
        return 0x80e000030110ll;
    __cavm_csr_fatal("RTT_SHRD_ETR_AXICTL", 0, 0, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_RTT_SHRD_ETR_AXICTL cavm_rtt_shrd_etr_axictl_t
#define bustype_CAVM_RTT_SHRD_ETR_AXICTL CSR_TYPE_NCB32b
#define basename_CAVM_RTT_SHRD_ETR_AXICTL "RTT_SHRD_ETR_AXICTL"
#define busnum_CAVM_RTT_SHRD_ETR_AXICTL 0
#define arguments_CAVM_RTT_SHRD_ETR_AXICTL -1,-1,-1,-1

/**
 * Register (NCB32b) rtt_shrd_etr_bufwm
 *
 * RTT Shrd Etr Bufwm Register
 * The value that is programmed into this register indicates the desired threshold
 * vacancy level in 32-bit words in the trace memory. When the available space in the
 * FIFO is less than or equal to this value, that is, fill level \>= (MEM_SIZE - BUFWM),
 * the full output is asserted and the STS.Full bit is set. This register is used only
 * in the FIFO modes, that is, SWF1, SWF2, and HWF modes. In CB mode, the same
 * functionality is obtained by programming the RWP to the desired vacancy trigger
 * level, so that when the pointer wraps around, the full output gets asserted
 * indicating that the vacancy level has fallen below the desired level. Reading this
 * register returns the programmed value. The maximum value that can be written into
 * this register is MEM_SIZE - 1, in which case the full output is asserted after the
 * first 32-bit word is written to trace memory. Writing to this register other than
 * when in Disabled state results in UNPREDICTABLE behavior. Any software using it must
 * program it with an initial value before setting the CTL.TraceCaptEn bit to 1.
 */
union cavm_rtt_shrd_etr_bufwm
{
    uint32_t u;
    struct cavm_rtt_shrd_etr_bufwm_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t razwi_0               : 2;  /**< [ 31: 30](R/W) Read-As-Zero, Writes Ignored. */
        uint32_t bufwm                 : 30; /**< [ 29:  0](R/W) Buffer Level Watermark. Indicates the desired threshold vacancy level in 32-bit
                                                                 words in the trace memory. */
#else /* Word 0 - Little Endian */
        uint32_t bufwm                 : 30; /**< [ 29:  0](R/W) Buffer Level Watermark. Indicates the desired threshold vacancy level in 32-bit
                                                                 words in the trace memory. */
        uint32_t razwi_0               : 2;  /**< [ 31: 30](R/W) Read-As-Zero, Writes Ignored. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_rtt_shrd_etr_bufwm_s cn; */
};
typedef union cavm_rtt_shrd_etr_bufwm cavm_rtt_shrd_etr_bufwm_t;

#define CAVM_RTT_SHRD_ETR_BUFWM CAVM_RTT_SHRD_ETR_BUFWM_FUNC()
static inline uint64_t CAVM_RTT_SHRD_ETR_BUFWM_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_RTT_SHRD_ETR_BUFWM_FUNC(void)
{
    if (cavm_is_model(OCTEONTX_CNF10KB))
        return 0x80e000030034ll;
    __cavm_csr_fatal("RTT_SHRD_ETR_BUFWM", 0, 0, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_RTT_SHRD_ETR_BUFWM cavm_rtt_shrd_etr_bufwm_t
#define bustype_CAVM_RTT_SHRD_ETR_BUFWM CSR_TYPE_NCB32b
#define basename_CAVM_RTT_SHRD_ETR_BUFWM "RTT_SHRD_ETR_BUFWM"
#define busnum_CAVM_RTT_SHRD_ETR_BUFWM 0
#define arguments_CAVM_RTT_SHRD_ETR_BUFWM -1,-1,-1,-1

/**
 * Register (NCB32b) rtt_shrd_etr_cbuflevel
 *
 * RTT Shrd Etr Cbuflevel Register
 * The CBUFLEVEL register indicates the current fill level of the trace memory in units
 * of 32-bit words. When the TMC leaves Disabled state, this register dynamically
 * indicates the current fill level of trace memory. It retains its value on entering
 * Disabled state. It is not affected by the reprogramming of pointer registers in
 * Disabled state with the exception of RRD reads and RWD writes.
 */
union cavm_rtt_shrd_etr_cbuflevel
{
    uint32_t u;
    struct cavm_rtt_shrd_etr_cbuflevel_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t razwi_0               : 1;  /**< [ 31: 31](RO) Read-As-Zero, Writes Ignored. */
        uint32_t cbuflevel             : 31; /**< [ 30:  0](RO) Current Buffer Fill Level. Indicates the current fill level of the trace memory in 32-bit words. */
#else /* Word 0 - Little Endian */
        uint32_t cbuflevel             : 31; /**< [ 30:  0](RO) Current Buffer Fill Level. Indicates the current fill level of the trace memory in 32-bit words. */
        uint32_t razwi_0               : 1;  /**< [ 31: 31](RO) Read-As-Zero, Writes Ignored. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_rtt_shrd_etr_cbuflevel_s cn; */
};
typedef union cavm_rtt_shrd_etr_cbuflevel cavm_rtt_shrd_etr_cbuflevel_t;

#define CAVM_RTT_SHRD_ETR_CBUFLEVEL CAVM_RTT_SHRD_ETR_CBUFLEVEL_FUNC()
static inline uint64_t CAVM_RTT_SHRD_ETR_CBUFLEVEL_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_RTT_SHRD_ETR_CBUFLEVEL_FUNC(void)
{
    if (cavm_is_model(OCTEONTX_CNF10KB))
        return 0x80e000030030ll;
    __cavm_csr_fatal("RTT_SHRD_ETR_CBUFLEVEL", 0, 0, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_RTT_SHRD_ETR_CBUFLEVEL cavm_rtt_shrd_etr_cbuflevel_t
#define bustype_CAVM_RTT_SHRD_ETR_CBUFLEVEL CSR_TYPE_NCB32b
#define basename_CAVM_RTT_SHRD_ETR_CBUFLEVEL "RTT_SHRD_ETR_CBUFLEVEL"
#define busnum_CAVM_RTT_SHRD_ETR_CBUFLEVEL 0
#define arguments_CAVM_RTT_SHRD_ETR_CBUFLEVEL -1,-1,-1,-1

/**
 * Register (NCB32b) rtt_shrd_etr_cidr0
 *
 * RTT Shrd Etr Cidr0 Register
 * The CIDR0 register is part of the set of component identification registers.
 */
union cavm_rtt_shrd_etr_cidr0
{
    uint32_t u;
    struct cavm_rtt_shrd_etr_cidr0_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t reserved_8_31         : 24;
        uint32_t prmbl_0               : 8;  /**< [  7:  0](RO) Preamble. Returns 0x0D. */
#else /* Word 0 - Little Endian */
        uint32_t prmbl_0               : 8;  /**< [  7:  0](RO) Preamble. Returns 0x0D. */
        uint32_t reserved_8_31         : 24;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_rtt_shrd_etr_cidr0_s cn; */
};
typedef union cavm_rtt_shrd_etr_cidr0 cavm_rtt_shrd_etr_cidr0_t;

#define CAVM_RTT_SHRD_ETR_CIDR0 CAVM_RTT_SHRD_ETR_CIDR0_FUNC()
static inline uint64_t CAVM_RTT_SHRD_ETR_CIDR0_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_RTT_SHRD_ETR_CIDR0_FUNC(void)
{
    if (cavm_is_model(OCTEONTX_CNF10KB))
        return 0x80e000030ff0ll;
    __cavm_csr_fatal("RTT_SHRD_ETR_CIDR0", 0, 0, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_RTT_SHRD_ETR_CIDR0 cavm_rtt_shrd_etr_cidr0_t
#define bustype_CAVM_RTT_SHRD_ETR_CIDR0 CSR_TYPE_NCB32b
#define basename_CAVM_RTT_SHRD_ETR_CIDR0 "RTT_SHRD_ETR_CIDR0"
#define busnum_CAVM_RTT_SHRD_ETR_CIDR0 0
#define arguments_CAVM_RTT_SHRD_ETR_CIDR0 -1,-1,-1,-1

/**
 * Register (NCB32b) rtt_shrd_etr_cidr1
 *
 * RTT Shrd Etr Cidr1 Register
 * The CIDR1 register is part of the set of component identification registers.
 */
union cavm_rtt_shrd_etr_cidr1
{
    uint32_t u;
    struct cavm_rtt_shrd_etr_cidr1_s
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
    /* struct cavm_rtt_shrd_etr_cidr1_s cn; */
};
typedef union cavm_rtt_shrd_etr_cidr1 cavm_rtt_shrd_etr_cidr1_t;

#define CAVM_RTT_SHRD_ETR_CIDR1 CAVM_RTT_SHRD_ETR_CIDR1_FUNC()
static inline uint64_t CAVM_RTT_SHRD_ETR_CIDR1_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_RTT_SHRD_ETR_CIDR1_FUNC(void)
{
    if (cavm_is_model(OCTEONTX_CNF10KB))
        return 0x80e000030ff4ll;
    __cavm_csr_fatal("RTT_SHRD_ETR_CIDR1", 0, 0, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_RTT_SHRD_ETR_CIDR1 cavm_rtt_shrd_etr_cidr1_t
#define bustype_CAVM_RTT_SHRD_ETR_CIDR1 CSR_TYPE_NCB32b
#define basename_CAVM_RTT_SHRD_ETR_CIDR1 "RTT_SHRD_ETR_CIDR1"
#define busnum_CAVM_RTT_SHRD_ETR_CIDR1 0
#define arguments_CAVM_RTT_SHRD_ETR_CIDR1 -1,-1,-1,-1

/**
 * Register (NCB32b) rtt_shrd_etr_cidr2
 *
 * RTT Shrd Etr Cidr2 Register
 * The CIDR2 register is part of the set of component identification registers.
 */
union cavm_rtt_shrd_etr_cidr2
{
    uint32_t u;
    struct cavm_rtt_shrd_etr_cidr2_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t reserved_8_31         : 24;
        uint32_t prmbl_2               : 8;  /**< [  7:  0](RO) Preamble. Returns 0x05. */
#else /* Word 0 - Little Endian */
        uint32_t prmbl_2               : 8;  /**< [  7:  0](RO) Preamble. Returns 0x05. */
        uint32_t reserved_8_31         : 24;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_rtt_shrd_etr_cidr2_s cn; */
};
typedef union cavm_rtt_shrd_etr_cidr2 cavm_rtt_shrd_etr_cidr2_t;

#define CAVM_RTT_SHRD_ETR_CIDR2 CAVM_RTT_SHRD_ETR_CIDR2_FUNC()
static inline uint64_t CAVM_RTT_SHRD_ETR_CIDR2_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_RTT_SHRD_ETR_CIDR2_FUNC(void)
{
    if (cavm_is_model(OCTEONTX_CNF10KB))
        return 0x80e000030ff8ll;
    __cavm_csr_fatal("RTT_SHRD_ETR_CIDR2", 0, 0, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_RTT_SHRD_ETR_CIDR2 cavm_rtt_shrd_etr_cidr2_t
#define bustype_CAVM_RTT_SHRD_ETR_CIDR2 CSR_TYPE_NCB32b
#define basename_CAVM_RTT_SHRD_ETR_CIDR2 "RTT_SHRD_ETR_CIDR2"
#define busnum_CAVM_RTT_SHRD_ETR_CIDR2 0
#define arguments_CAVM_RTT_SHRD_ETR_CIDR2 -1,-1,-1,-1

/**
 * Register (NCB32b) rtt_shrd_etr_cidr3
 *
 * RTT Shrd Etr Cidr3 Register
 * The CIDR3 register is part of the set of component identification registers.
 */
union cavm_rtt_shrd_etr_cidr3
{
    uint32_t u;
    struct cavm_rtt_shrd_etr_cidr3_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t reserved_8_31         : 24;
        uint32_t prmbl_3               : 8;  /**< [  7:  0](RO) Preamble. Returns 0xB1. */
#else /* Word 0 - Little Endian */
        uint32_t prmbl_3               : 8;  /**< [  7:  0](RO) Preamble. Returns 0xB1. */
        uint32_t reserved_8_31         : 24;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_rtt_shrd_etr_cidr3_s cn; */
};
typedef union cavm_rtt_shrd_etr_cidr3 cavm_rtt_shrd_etr_cidr3_t;

#define CAVM_RTT_SHRD_ETR_CIDR3 CAVM_RTT_SHRD_ETR_CIDR3_FUNC()
static inline uint64_t CAVM_RTT_SHRD_ETR_CIDR3_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_RTT_SHRD_ETR_CIDR3_FUNC(void)
{
    if (cavm_is_model(OCTEONTX_CNF10KB))
        return 0x80e000030ffcll;
    __cavm_csr_fatal("RTT_SHRD_ETR_CIDR3", 0, 0, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_RTT_SHRD_ETR_CIDR3 cavm_rtt_shrd_etr_cidr3_t
#define bustype_CAVM_RTT_SHRD_ETR_CIDR3 CSR_TYPE_NCB32b
#define basename_CAVM_RTT_SHRD_ETR_CIDR3 "RTT_SHRD_ETR_CIDR3"
#define busnum_CAVM_RTT_SHRD_ETR_CIDR3 0
#define arguments_CAVM_RTT_SHRD_ETR_CIDR3 -1,-1,-1,-1

/**
 * Register (NCB32b) rtt_shrd_etr_claimclr
 *
 * RTT Shrd Etr Claimclr Register
 * This register forms one half of the claim tag value. On writes, this location
 * enables individual bits to be cleared. On reads, it returns the current claim tag
 * value.
 */
union cavm_rtt_shrd_etr_claimclr
{
    uint32_t u;
    struct cavm_rtt_shrd_etr_claimclr_s
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
    /* struct cavm_rtt_shrd_etr_claimclr_s cn; */
};
typedef union cavm_rtt_shrd_etr_claimclr cavm_rtt_shrd_etr_claimclr_t;

#define CAVM_RTT_SHRD_ETR_CLAIMCLR CAVM_RTT_SHRD_ETR_CLAIMCLR_FUNC()
static inline uint64_t CAVM_RTT_SHRD_ETR_CLAIMCLR_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_RTT_SHRD_ETR_CLAIMCLR_FUNC(void)
{
    if (cavm_is_model(OCTEONTX_CNF10KB))
        return 0x80e000030fa4ll;
    __cavm_csr_fatal("RTT_SHRD_ETR_CLAIMCLR", 0, 0, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_RTT_SHRD_ETR_CLAIMCLR cavm_rtt_shrd_etr_claimclr_t
#define bustype_CAVM_RTT_SHRD_ETR_CLAIMCLR CSR_TYPE_NCB32b
#define basename_CAVM_RTT_SHRD_ETR_CLAIMCLR "RTT_SHRD_ETR_CLAIMCLR"
#define busnum_CAVM_RTT_SHRD_ETR_CLAIMCLR 0
#define arguments_CAVM_RTT_SHRD_ETR_CLAIMCLR -1,-1,-1,-1

/**
 * Register (NCB32b) rtt_shrd_etr_claimset
 *
 * RTT Shrd Etr Claimset Register
 * This register forms one half of the claim tag value. On writes, this location
 * enables individual bits to be set. On reads, it returns the number of bits that can
 * be set.
 */
union cavm_rtt_shrd_etr_claimset
{
    uint32_t u;
    struct cavm_rtt_shrd_etr_claimset_s
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
    /* struct cavm_rtt_shrd_etr_claimset_s cn; */
};
typedef union cavm_rtt_shrd_etr_claimset cavm_rtt_shrd_etr_claimset_t;

#define CAVM_RTT_SHRD_ETR_CLAIMSET CAVM_RTT_SHRD_ETR_CLAIMSET_FUNC()
static inline uint64_t CAVM_RTT_SHRD_ETR_CLAIMSET_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_RTT_SHRD_ETR_CLAIMSET_FUNC(void)
{
    if (cavm_is_model(OCTEONTX_CNF10KB))
        return 0x80e000030fa0ll;
    __cavm_csr_fatal("RTT_SHRD_ETR_CLAIMSET", 0, 0, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_RTT_SHRD_ETR_CLAIMSET cavm_rtt_shrd_etr_claimset_t
#define bustype_CAVM_RTT_SHRD_ETR_CLAIMSET CSR_TYPE_NCB32b
#define basename_CAVM_RTT_SHRD_ETR_CLAIMSET "RTT_SHRD_ETR_CLAIMSET"
#define busnum_CAVM_RTT_SHRD_ETR_CLAIMSET 0
#define arguments_CAVM_RTT_SHRD_ETR_CLAIMSET -1,-1,-1,-1

/**
 * Register (NCB32b) rtt_shrd_etr_ctl
 *
 * RTT Shrd Etr Ctl Register
 * This register controls trace stream capture. Setting the CTL.TraceCaptEn bit to 1
 * enables the TMC to capture the trace data. When trace capture is enabled, the
 * formatter behavior is controlled by the FFCR register.
 */
union cavm_rtt_shrd_etr_ctl
{
    uint32_t u;
    struct cavm_rtt_shrd_etr_ctl_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t razwi_0               : 31; /**< [ 31:  1](R/W) Read-As-Zero, Writes Ignored. */
        uint32_t tracecapten           : 1;  /**< [  0:  0](R/W) Trace capture enable. */
#else /* Word 0 - Little Endian */
        uint32_t tracecapten           : 1;  /**< [  0:  0](R/W) Trace capture enable. */
        uint32_t razwi_0               : 31; /**< [ 31:  1](R/W) Read-As-Zero, Writes Ignored. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_rtt_shrd_etr_ctl_s cn; */
};
typedef union cavm_rtt_shrd_etr_ctl cavm_rtt_shrd_etr_ctl_t;

#define CAVM_RTT_SHRD_ETR_CTL CAVM_RTT_SHRD_ETR_CTL_FUNC()
static inline uint64_t CAVM_RTT_SHRD_ETR_CTL_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_RTT_SHRD_ETR_CTL_FUNC(void)
{
    if (cavm_is_model(OCTEONTX_CNF10KB))
        return 0x80e000030020ll;
    __cavm_csr_fatal("RTT_SHRD_ETR_CTL", 0, 0, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_RTT_SHRD_ETR_CTL cavm_rtt_shrd_etr_ctl_t
#define bustype_CAVM_RTT_SHRD_ETR_CTL CSR_TYPE_NCB32b
#define basename_CAVM_RTT_SHRD_ETR_CTL "RTT_SHRD_ETR_CTL"
#define busnum_CAVM_RTT_SHRD_ETR_CTL 0
#define arguments_CAVM_RTT_SHRD_ETR_CTL -1,-1,-1,-1

/**
 * Register (NCB32b) rtt_shrd_etr_dbahi
 *
 * RTT Shrd Etr Dbahi Register
 * This register, together with the DBALO register, enables the TMC to locate the trace
 * buffer in system memory. It contains bits \>= bit[32] of the start address of the
 * trace buffer in system memory. The width of this register is given by:
 * (AXI_ADDR_WIDTH - 32), however, if AXI_ADDR_WIDTH is \<= 32 bits, this register is
 * reserved and access type is RAZ/WI. Modifying this register, other than when in
 * Disabled state, results in UNPREDICTABLE behavior. Software must program it with an
 * initial value before setting CTL.TraceCaptEn bit to 1.
 */
union cavm_rtt_shrd_etr_dbahi
{
    uint32_t u;
    struct cavm_rtt_shrd_etr_dbahi_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t razwi_0               : 24; /**< [ 31:  8](R/W) Read-As-Zero, Writes Ignored. */
        uint32_t bufaddrhi             : 8;  /**< [  7:  0](R/W) Data Buffer High Address. Holds the upper bits, that is, bit[32] and above, of
                                                                 the AXI address that is used to locate the trace buffer in the system. */
#else /* Word 0 - Little Endian */
        uint32_t bufaddrhi             : 8;  /**< [  7:  0](R/W) Data Buffer High Address. Holds the upper bits, that is, bit[32] and above, of
                                                                 the AXI address that is used to locate the trace buffer in the system. */
        uint32_t razwi_0               : 24; /**< [ 31:  8](R/W) Read-As-Zero, Writes Ignored. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_rtt_shrd_etr_dbahi_s cn; */
};
typedef union cavm_rtt_shrd_etr_dbahi cavm_rtt_shrd_etr_dbahi_t;

#define CAVM_RTT_SHRD_ETR_DBAHI CAVM_RTT_SHRD_ETR_DBAHI_FUNC()
static inline uint64_t CAVM_RTT_SHRD_ETR_DBAHI_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_RTT_SHRD_ETR_DBAHI_FUNC(void)
{
    if (cavm_is_model(OCTEONTX_CNF10KB))
        return 0x80e00003011cll;
    __cavm_csr_fatal("RTT_SHRD_ETR_DBAHI", 0, 0, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_RTT_SHRD_ETR_DBAHI cavm_rtt_shrd_etr_dbahi_t
#define bustype_CAVM_RTT_SHRD_ETR_DBAHI CSR_TYPE_NCB32b
#define basename_CAVM_RTT_SHRD_ETR_DBAHI "RTT_SHRD_ETR_DBAHI"
#define busnum_CAVM_RTT_SHRD_ETR_DBAHI 0
#define arguments_CAVM_RTT_SHRD_ETR_DBAHI -1,-1,-1,-1

/**
 * Register (NCB32b) rtt_shrd_etr_dbalo
 *
 * RTT Shrd Etr Dbalo Register
 * This register, together with the DBAHI register, enables the TMC to locate the trace
 * buffer in system memory. This register contains bits [31:0] of the start address of
 * the trace buffer in system memory. This register is 32-bits wide if AXI_ADDR_WIDTH
 * is \>= 32-bits. If the AXI_ADDR_WIDTH is 0, this register is reserved and access type
 * is RAZ/WI. Software must program it before enabling trace capture, and the
 * programmed value must be aligned to the Trace Memory Data Width and the Frame Width.
 * Programming an unaligned value results in UNPREDICTABLE behavior. Modifying this
 * register other than when in Disabled state results in UNPREDICTABLE behavior.
 */
union cavm_rtt_shrd_etr_dbalo
{
    uint32_t u;
    struct cavm_rtt_shrd_etr_dbalo_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t bufaddrlo             : 32; /**< [ 31:  0](R/W) Data Buffer Low Address. Holds the lower 32 bits of the AXI address that is used
                                                                 to locate the trace buffer in system memory.The lowest four bits have access
                                                                 type RAZ/WI. */
#else /* Word 0 - Little Endian */
        uint32_t bufaddrlo             : 32; /**< [ 31:  0](R/W) Data Buffer Low Address. Holds the lower 32 bits of the AXI address that is used
                                                                 to locate the trace buffer in system memory.The lowest four bits have access
                                                                 type RAZ/WI. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_rtt_shrd_etr_dbalo_s cn; */
};
typedef union cavm_rtt_shrd_etr_dbalo cavm_rtt_shrd_etr_dbalo_t;

#define CAVM_RTT_SHRD_ETR_DBALO CAVM_RTT_SHRD_ETR_DBALO_FUNC()
static inline uint64_t CAVM_RTT_SHRD_ETR_DBALO_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_RTT_SHRD_ETR_DBALO_FUNC(void)
{
    if (cavm_is_model(OCTEONTX_CNF10KB))
        return 0x80e000030118ll;
    __cavm_csr_fatal("RTT_SHRD_ETR_DBALO", 0, 0, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_RTT_SHRD_ETR_DBALO cavm_rtt_shrd_etr_dbalo_t
#define bustype_CAVM_RTT_SHRD_ETR_DBALO CSR_TYPE_NCB32b
#define basename_CAVM_RTT_SHRD_ETR_DBALO "RTT_SHRD_ETR_DBALO"
#define busnum_CAVM_RTT_SHRD_ETR_DBALO 0
#define arguments_CAVM_RTT_SHRD_ETR_DBALO -1,-1,-1,-1

/**
 * Register (NCB32b) rtt_shrd_etr_devid
 *
 * RTT Shrd Etr Devid Register
 * This register is IMPLEMENTATION DEFINED for each Part Number and Designer. The
 * register indicates the capabilities of the component.
 */
union cavm_rtt_shrd_etr_devid
{
    uint32_t u;
    struct cavm_rtt_shrd_etr_devid_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t reserved_30_31        : 2;
        uint32_t cachetype             : 2;  /**< [ 29: 28](RO) Indicates the format of BUSCTL register bus control fields. Reads as 2'b00
                                                                 indicating that AXICTL bus attribute bits [19:16] and [5:2] follow an
                                                                 implementation-defined non-generic format. See AXICTL register description. */
        uint32_t modes                 : 3;  /**< [ 27: 25](RO) Indicates the supported modes of operation. Reads as 3'b001 indicating that ETR
                                                                 supports CB, SWF1, and SWF2 modes. */
        uint32_t noscat                : 1;  /**< [ 24: 24](RO) Indicates whether the scatter-gather mode is implemented. Fixed at 1 indicating
                                                                 that scatter-gather mode is not implemented. */
        uint32_t aw                    : 7;  /**< [ 23: 17](RO) This field indicates the width of AXI address bus in ETR configuration. This
                                                                 field is valid only when DEVID.AW_VALID is set. Possible values are: */
        uint32_t aw_valid              : 1;  /**< [ 16: 16](RO) Indicates whether field DEVID.AW is valid. The value of this field is fixed at 1. */
        uint32_t reserved_14_15        : 2;
        uint32_t wbuf_depth            : 3;  /**< [ 13: 11](RO) Log2 of the number of write buffer entries. This value is set by the parameter
                                                                 WBUFFER_DEPTH. Each entry is of size ATB_DATA_WIDTH. */
        uint32_t memwidth              : 3;  /**< [ 10:  8](RO) This value is equal to ATB_DATA_WIDTH. */
        uint32_t configtype            : 2;  /**< [  7:  6](RO) Returns 0x1 indicating ETR configuration. */
        uint32_t clkscheme             : 1;  /**< [  5:  5](RO) RAM Clocking Scheme. This value indicates the TMC RAM clocking scheme used, that
                                                                 is, whether the TMC RAM operates synchronously or asynchronously to the TMC
                                                                 clock. Fixed to 0 indicating that TMC RAM clock is synchronous to the clk input. */
        uint32_t atbinportcount        : 5;  /**< [  4:  0](RO) Hidden Level of ATB input multiplexing. This value indicates the type/number of
                                                                 ATB multiplexing present on the input ATB. Fixed to 0x00 indicating that no
                                                                 multiplexing is present. */
#else /* Word 0 - Little Endian */
        uint32_t atbinportcount        : 5;  /**< [  4:  0](RO) Hidden Level of ATB input multiplexing. This value indicates the type/number of
                                                                 ATB multiplexing present on the input ATB. Fixed to 0x00 indicating that no
                                                                 multiplexing is present. */
        uint32_t clkscheme             : 1;  /**< [  5:  5](RO) RAM Clocking Scheme. This value indicates the TMC RAM clocking scheme used, that
                                                                 is, whether the TMC RAM operates synchronously or asynchronously to the TMC
                                                                 clock. Fixed to 0 indicating that TMC RAM clock is synchronous to the clk input. */
        uint32_t configtype            : 2;  /**< [  7:  6](RO) Returns 0x1 indicating ETR configuration. */
        uint32_t memwidth              : 3;  /**< [ 10:  8](RO) This value is equal to ATB_DATA_WIDTH. */
        uint32_t wbuf_depth            : 3;  /**< [ 13: 11](RO) Log2 of the number of write buffer entries. This value is set by the parameter
                                                                 WBUFFER_DEPTH. Each entry is of size ATB_DATA_WIDTH. */
        uint32_t reserved_14_15        : 2;
        uint32_t aw_valid              : 1;  /**< [ 16: 16](RO) Indicates whether field DEVID.AW is valid. The value of this field is fixed at 1. */
        uint32_t aw                    : 7;  /**< [ 23: 17](RO) This field indicates the width of AXI address bus in ETR configuration. This
                                                                 field is valid only when DEVID.AW_VALID is set. Possible values are: */
        uint32_t noscat                : 1;  /**< [ 24: 24](RO) Indicates whether the scatter-gather mode is implemented. Fixed at 1 indicating
                                                                 that scatter-gather mode is not implemented. */
        uint32_t modes                 : 3;  /**< [ 27: 25](RO) Indicates the supported modes of operation. Reads as 3'b001 indicating that ETR
                                                                 supports CB, SWF1, and SWF2 modes. */
        uint32_t cachetype             : 2;  /**< [ 29: 28](RO) Indicates the format of BUSCTL register bus control fields. Reads as 2'b00
                                                                 indicating that AXICTL bus attribute bits [19:16] and [5:2] follow an
                                                                 implementation-defined non-generic format. See AXICTL register description. */
        uint32_t reserved_30_31        : 2;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_rtt_shrd_etr_devid_s cn; */
};
typedef union cavm_rtt_shrd_etr_devid cavm_rtt_shrd_etr_devid_t;

#define CAVM_RTT_SHRD_ETR_DEVID CAVM_RTT_SHRD_ETR_DEVID_FUNC()
static inline uint64_t CAVM_RTT_SHRD_ETR_DEVID_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_RTT_SHRD_ETR_DEVID_FUNC(void)
{
    if (cavm_is_model(OCTEONTX_CNF10KB))
        return 0x80e000030fc8ll;
    __cavm_csr_fatal("RTT_SHRD_ETR_DEVID", 0, 0, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_RTT_SHRD_ETR_DEVID cavm_rtt_shrd_etr_devid_t
#define bustype_CAVM_RTT_SHRD_ETR_DEVID CSR_TYPE_NCB32b
#define basename_CAVM_RTT_SHRD_ETR_DEVID "RTT_SHRD_ETR_DEVID"
#define busnum_CAVM_RTT_SHRD_ETR_DEVID 0
#define arguments_CAVM_RTT_SHRD_ETR_DEVID -1,-1,-1,-1

/**
 * Register (NCB32b) rtt_shrd_etr_devid1
 *
 * RTT Shrd Etr Devid1 Register
 * Contains an IMPLEMENTATION DEFINED value.
 */
union cavm_rtt_shrd_etr_devid1
{
    uint32_t u;
    struct cavm_rtt_shrd_etr_devid1_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t reserved_1_31         : 31;
        uint32_t rmc                   : 1;  /**< [  0:  0](RO) Register management mode. TMC implements register management mode 1. */
#else /* Word 0 - Little Endian */
        uint32_t rmc                   : 1;  /**< [  0:  0](RO) Register management mode. TMC implements register management mode 1. */
        uint32_t reserved_1_31         : 31;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_rtt_shrd_etr_devid1_s cn; */
};
typedef union cavm_rtt_shrd_etr_devid1 cavm_rtt_shrd_etr_devid1_t;

#define CAVM_RTT_SHRD_ETR_DEVID1 CAVM_RTT_SHRD_ETR_DEVID1_FUNC()
static inline uint64_t CAVM_RTT_SHRD_ETR_DEVID1_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_RTT_SHRD_ETR_DEVID1_FUNC(void)
{
    if (cavm_is_model(OCTEONTX_CNF10KB))
        return 0x80e000030fc4ll;
    __cavm_csr_fatal("RTT_SHRD_ETR_DEVID1", 0, 0, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_RTT_SHRD_ETR_DEVID1 cavm_rtt_shrd_etr_devid1_t
#define bustype_CAVM_RTT_SHRD_ETR_DEVID1 CSR_TYPE_NCB32b
#define basename_CAVM_RTT_SHRD_ETR_DEVID1 "RTT_SHRD_ETR_DEVID1"
#define busnum_CAVM_RTT_SHRD_ETR_DEVID1 0
#define arguments_CAVM_RTT_SHRD_ETR_DEVID1 -1,-1,-1,-1

/**
 * Register (NCB32b) rtt_shrd_etr_devtype
 *
 * RTT Shrd Etr Devtype Register
 * A debugger can use this register to get information about a component that has an
 * unrecognized Part number.
 */
union cavm_rtt_shrd_etr_devtype
{
    uint32_t u;
    struct cavm_rtt_shrd_etr_devtype_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t reserved_8_31         : 24;
        uint32_t sub                   : 4;  /**< [  7:  4](RO) Minor classification. Returns 0x2, indicating this component is a Buffer. */
        uint32_t major                 : 4;  /**< [  3:  0](RO) Major classification. Returns 0x1, indicating this component is a Trace Sink. */
#else /* Word 0 - Little Endian */
        uint32_t major                 : 4;  /**< [  3:  0](RO) Major classification. Returns 0x1, indicating this component is a Trace Sink. */
        uint32_t sub                   : 4;  /**< [  7:  4](RO) Minor classification. Returns 0x2, indicating this component is a Buffer. */
        uint32_t reserved_8_31         : 24;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_rtt_shrd_etr_devtype_s cn; */
};
typedef union cavm_rtt_shrd_etr_devtype cavm_rtt_shrd_etr_devtype_t;

#define CAVM_RTT_SHRD_ETR_DEVTYPE CAVM_RTT_SHRD_ETR_DEVTYPE_FUNC()
static inline uint64_t CAVM_RTT_SHRD_ETR_DEVTYPE_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_RTT_SHRD_ETR_DEVTYPE_FUNC(void)
{
    if (cavm_is_model(OCTEONTX_CNF10KB))
        return 0x80e000030fccll;
    __cavm_csr_fatal("RTT_SHRD_ETR_DEVTYPE", 0, 0, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_RTT_SHRD_ETR_DEVTYPE cavm_rtt_shrd_etr_devtype_t
#define bustype_CAVM_RTT_SHRD_ETR_DEVTYPE CSR_TYPE_NCB32b
#define basename_CAVM_RTT_SHRD_ETR_DEVTYPE "RTT_SHRD_ETR_DEVTYPE"
#define busnum_CAVM_RTT_SHRD_ETR_DEVTYPE 0
#define arguments_CAVM_RTT_SHRD_ETR_DEVTYPE -1,-1,-1,-1

/**
 * Register (NCB32b) rtt_shrd_etr_ffcr
 *
 * RTT Shrd Etr Ffcr Register
 * The FFCR controls the generation of stop, trigger and flush events. The insertion of
 * a flush completion packet and the insertion of a trigger packet in the formatted
 * trace is enabled here. Also one of the 2 formatter modes for bypass mode and normal
 * mode can be changed here when the formatter has stopped.
 */
union cavm_rtt_shrd_etr_ffcr
{
    uint32_t u;
    struct cavm_rtt_shrd_etr_ffcr_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t razwi_4               : 16; /**< [ 31: 16](R/W) Read-As-Zero, Writes Ignored. */
        uint32_t embedflush            : 1;  /**< [ 15: 15](R/W) Embed Flush ID (flush completion packet). Enables insertion of Flush ID 0x7B
                                                                 with a single byte of data payload = 0x00 in the output trace, immediately after
                                                                 the last flush data byte, when a flush completes on the ATB slave interface.
                                                                 This bit is effective only in Normal formatting modes. In Bypass mode, the Flush
                                                                 ID insertion remains disabled and this bit is ignored. */
        uint32_t razwi_3               : 1;  /**< [ 14: 14](R/W) Read-As-Zero, Writes Ignored. */
        uint32_t stopontrigevt         : 1;  /**< [ 13: 13](R/W) Stop On Trigger Event. If this bit is set, the formatter is stopped when a
                                                                 Trigger Event has been observed. This bit must be used only in CB mode because
                                                                 in FIFO modes, the TMC is a trace link rather than a trace sink and trigger
                                                                 events are related to trace sink functionality. If trace capture is enabled in
                                                                 SWF1, SWF2, or HWF mode with this bit set, it results in UNPREDICTABLE behavior. */
        uint32_t stoponfl              : 1;  /**< [ 12: 12](R/W) Stop On Flush. If this bit is set, the formatter is stopped on completion of a
                                                                 flush operation. The initiation of a flush operation is controlled by
                                                                 programming the register bits FFCR.FlushMan, FFCR.FOnTrigEvt, and FFCR.FOnFlIn.
                                                                 When a flush-initiation condition occurs, afvalid_s is asserted, and when the
                                                                 flush completion is received, that is, afready_s=1, trace capture is stopped.
                                                                 Any remaining data in the formatter is appended with a post-amble and written to
                                                                 trace memory. The flush operation is then complete. When the TMC is configured
                                                                 as an ETF, if a flush is initiated by the ATB Master interface, its completion
                                                                 does not lead to a formatter stop regardless of the value that is programmed in
                                                                 this bit. */
        uint32_t razwi_2               : 1;  /**< [ 11: 11](R/W) Read-As-Zero, Writes Ignored. */
        uint32_t trigonfl              : 1;  /**< [ 10: 10](R/W) Indicate on trace stream the completion of flush. If this bit is set, a trigger
                                                                 is indicated on the trace stream when afready_s is received for a flush in
                                                                 progress. If this bit is clear, no triggers are embedded in the trace stream on
                                                                 flush completion. If Trigger Insertion is disabled, that is, FFCR.EnTI=0, then
                                                                 trigger indication on the trace stream is blocked regardless of the value that
                                                                 is programmed in this bit. When the TMC is configured as ETF, if a flush is
                                                                 initiated by the ATB Master interface, its completion does not lead to a trigger
                                                                 indication on the trace stream regardless of the value that is programmed in
                                                                 this bit. */
        uint32_t trigontrigevt         : 1;  /**< [  9:  9](R/W) Indicate on trace stream the occurrence of a Trigger Event. If this bit is set,
                                                                 a trigger is indicated on the output trace stream when a Trigger Event occurs.
                                                                 If Trigger Insertion is disabled, that is, FFCR.EnTI=0, then trigger indication
                                                                 on the trace stream is blocked regardless of the value that is programmed in
                                                                 this bit. This bit must be used only in CB mode because in FIFO modes, the TMC
                                                                 is a trace link rather than a trace sink and trigger events are related to trace
                                                                 sink functionality. If trace capture is enabled in SWF1, SWF2, or HWF mode with
                                                                 this bit set, it results in UNPREDICTABLE behavior. */
        uint32_t trigontrigin          : 1;  /**< [  8:  8](R/W) Indicate on trace stream the occurrence of a rising edge on trigin. If this bit
                                                                 is set, a trigger is indicated on the trace stream when a rising edge is
                                                                 detected on the trigin input. If Trigger Insertion is disabled, that is,
                                                                 FFCR.EnTI=0, then trigger indication on the trace stream is blocked regardless
                                                                 of the value that is programmed in this bit. */
        uint32_t razwi_1               : 1;  /**< [  7:  7](R/W) Read-As-Zero, Writes Ignored. */
        uint32_t flushman              : 1;  /**< [  6:  6](R/W) Manually generate a flush of the system. Writing 1 to this bit causes a flush to
                                                                 be generated. This bit is cleared automatically when, in formatter bypass mode,
                                                                 afready_s was sampled high, or, in normal formatting mode, afready_s was sampled
                                                                 high and all flush data was output to the trace memory. If CTL.TraceCaptEn=0,
                                                                 writes to this bit are ignored. */
        uint32_t fontrigevt            : 1;  /**< [  5:  5](R/W) Flush on Trigger Event. If FFCR.StopOnTrigEvt is set, this bit is ignored.
                                                                 Setting this bit generates a flush when a Trigger Event occurs. If
                                                                 FFCR.StopOnTrigEvt is set, this bit is ignored. This bit must be used only in CB
                                                                 mode because in FIFO modes, the TMC is a trace link rather than a trace sink and
                                                                 trigger events are related to trace sink functionality. If trace capture is
                                                                 enabled in SWF1, SWF2, or HWF mode with this bit set, it results in
                                                                 UNPREDICTABLE behavior. */
        uint32_t fonflin               : 1;  /**< [  4:  4](R/W) Setting this bit enables the detection of transitions on the flushin input by
                                                                 the TMC. If this bit is set and the formatter has not already stopped, a rising
                                                                 edge on flushin initiates a flush request. */
        uint32_t razwi_0               : 2;  /**< [  3:  2](R/W) Read-As-Zero, Writes Ignored. */
        uint32_t enti                  : 1;  /**< [  1:  1](R/W) Enable Trigger Insertion. Setting this bit enables the insertion of triggers in
                                                                 the formatted trace stream. A trigger is indicated by inserting one byte of data
                                                                 0x00 with atid_s=0x7D in the trace stream. Trigger indication on the trace
                                                                 stream is also controlled by the register bits FFCR.TrigOnFl,
                                                                 FFCR.TrigOnTrigEvt, and FFCR.TrigOnTrigIn. This bit can only be changed when the
                                                                 TMC is in Disabled state. If FFCR.EnTI bit is set formatting is enabled. */
        uint32_t enft                  : 1;  /**< [  0:  0](R/W) Enable Formatter. If this bit is set, formatting is enabled. When EnTi is set,
                                                                 formatting is enabled. When CB mode is not used, formatting is also enabled. For
                                                                 backwards-compatibility with earlier versions of the ETB disabling of formatting
                                                                 is supported only in CB mode. This bit can only be changed when TMC is in
                                                                 Disabled state. */
#else /* Word 0 - Little Endian */
        uint32_t enft                  : 1;  /**< [  0:  0](R/W) Enable Formatter. If this bit is set, formatting is enabled. When EnTi is set,
                                                                 formatting is enabled. When CB mode is not used, formatting is also enabled. For
                                                                 backwards-compatibility with earlier versions of the ETB disabling of formatting
                                                                 is supported only in CB mode. This bit can only be changed when TMC is in
                                                                 Disabled state. */
        uint32_t enti                  : 1;  /**< [  1:  1](R/W) Enable Trigger Insertion. Setting this bit enables the insertion of triggers in
                                                                 the formatted trace stream. A trigger is indicated by inserting one byte of data
                                                                 0x00 with atid_s=0x7D in the trace stream. Trigger indication on the trace
                                                                 stream is also controlled by the register bits FFCR.TrigOnFl,
                                                                 FFCR.TrigOnTrigEvt, and FFCR.TrigOnTrigIn. This bit can only be changed when the
                                                                 TMC is in Disabled state. If FFCR.EnTI bit is set formatting is enabled. */
        uint32_t razwi_0               : 2;  /**< [  3:  2](R/W) Read-As-Zero, Writes Ignored. */
        uint32_t fonflin               : 1;  /**< [  4:  4](R/W) Setting this bit enables the detection of transitions on the flushin input by
                                                                 the TMC. If this bit is set and the formatter has not already stopped, a rising
                                                                 edge on flushin initiates a flush request. */
        uint32_t fontrigevt            : 1;  /**< [  5:  5](R/W) Flush on Trigger Event. If FFCR.StopOnTrigEvt is set, this bit is ignored.
                                                                 Setting this bit generates a flush when a Trigger Event occurs. If
                                                                 FFCR.StopOnTrigEvt is set, this bit is ignored. This bit must be used only in CB
                                                                 mode because in FIFO modes, the TMC is a trace link rather than a trace sink and
                                                                 trigger events are related to trace sink functionality. If trace capture is
                                                                 enabled in SWF1, SWF2, or HWF mode with this bit set, it results in
                                                                 UNPREDICTABLE behavior. */
        uint32_t flushman              : 1;  /**< [  6:  6](R/W) Manually generate a flush of the system. Writing 1 to this bit causes a flush to
                                                                 be generated. This bit is cleared automatically when, in formatter bypass mode,
                                                                 afready_s was sampled high, or, in normal formatting mode, afready_s was sampled
                                                                 high and all flush data was output to the trace memory. If CTL.TraceCaptEn=0,
                                                                 writes to this bit are ignored. */
        uint32_t razwi_1               : 1;  /**< [  7:  7](R/W) Read-As-Zero, Writes Ignored. */
        uint32_t trigontrigin          : 1;  /**< [  8:  8](R/W) Indicate on trace stream the occurrence of a rising edge on trigin. If this bit
                                                                 is set, a trigger is indicated on the trace stream when a rising edge is
                                                                 detected on the trigin input. If Trigger Insertion is disabled, that is,
                                                                 FFCR.EnTI=0, then trigger indication on the trace stream is blocked regardless
                                                                 of the value that is programmed in this bit. */
        uint32_t trigontrigevt         : 1;  /**< [  9:  9](R/W) Indicate on trace stream the occurrence of a Trigger Event. If this bit is set,
                                                                 a trigger is indicated on the output trace stream when a Trigger Event occurs.
                                                                 If Trigger Insertion is disabled, that is, FFCR.EnTI=0, then trigger indication
                                                                 on the trace stream is blocked regardless of the value that is programmed in
                                                                 this bit. This bit must be used only in CB mode because in FIFO modes, the TMC
                                                                 is a trace link rather than a trace sink and trigger events are related to trace
                                                                 sink functionality. If trace capture is enabled in SWF1, SWF2, or HWF mode with
                                                                 this bit set, it results in UNPREDICTABLE behavior. */
        uint32_t trigonfl              : 1;  /**< [ 10: 10](R/W) Indicate on trace stream the completion of flush. If this bit is set, a trigger
                                                                 is indicated on the trace stream when afready_s is received for a flush in
                                                                 progress. If this bit is clear, no triggers are embedded in the trace stream on
                                                                 flush completion. If Trigger Insertion is disabled, that is, FFCR.EnTI=0, then
                                                                 trigger indication on the trace stream is blocked regardless of the value that
                                                                 is programmed in this bit. When the TMC is configured as ETF, if a flush is
                                                                 initiated by the ATB Master interface, its completion does not lead to a trigger
                                                                 indication on the trace stream regardless of the value that is programmed in
                                                                 this bit. */
        uint32_t razwi_2               : 1;  /**< [ 11: 11](R/W) Read-As-Zero, Writes Ignored. */
        uint32_t stoponfl              : 1;  /**< [ 12: 12](R/W) Stop On Flush. If this bit is set, the formatter is stopped on completion of a
                                                                 flush operation. The initiation of a flush operation is controlled by
                                                                 programming the register bits FFCR.FlushMan, FFCR.FOnTrigEvt, and FFCR.FOnFlIn.
                                                                 When a flush-initiation condition occurs, afvalid_s is asserted, and when the
                                                                 flush completion is received, that is, afready_s=1, trace capture is stopped.
                                                                 Any remaining data in the formatter is appended with a post-amble and written to
                                                                 trace memory. The flush operation is then complete. When the TMC is configured
                                                                 as an ETF, if a flush is initiated by the ATB Master interface, its completion
                                                                 does not lead to a formatter stop regardless of the value that is programmed in
                                                                 this bit. */
        uint32_t stopontrigevt         : 1;  /**< [ 13: 13](R/W) Stop On Trigger Event. If this bit is set, the formatter is stopped when a
                                                                 Trigger Event has been observed. This bit must be used only in CB mode because
                                                                 in FIFO modes, the TMC is a trace link rather than a trace sink and trigger
                                                                 events are related to trace sink functionality. If trace capture is enabled in
                                                                 SWF1, SWF2, or HWF mode with this bit set, it results in UNPREDICTABLE behavior. */
        uint32_t razwi_3               : 1;  /**< [ 14: 14](R/W) Read-As-Zero, Writes Ignored. */
        uint32_t embedflush            : 1;  /**< [ 15: 15](R/W) Embed Flush ID (flush completion packet). Enables insertion of Flush ID 0x7B
                                                                 with a single byte of data payload = 0x00 in the output trace, immediately after
                                                                 the last flush data byte, when a flush completes on the ATB slave interface.
                                                                 This bit is effective only in Normal formatting modes. In Bypass mode, the Flush
                                                                 ID insertion remains disabled and this bit is ignored. */
        uint32_t razwi_4               : 16; /**< [ 31: 16](R/W) Read-As-Zero, Writes Ignored. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_rtt_shrd_etr_ffcr_s cn; */
};
typedef union cavm_rtt_shrd_etr_ffcr cavm_rtt_shrd_etr_ffcr_t;

#define CAVM_RTT_SHRD_ETR_FFCR CAVM_RTT_SHRD_ETR_FFCR_FUNC()
static inline uint64_t CAVM_RTT_SHRD_ETR_FFCR_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_RTT_SHRD_ETR_FFCR_FUNC(void)
{
    if (cavm_is_model(OCTEONTX_CNF10KB))
        return 0x80e000030304ll;
    __cavm_csr_fatal("RTT_SHRD_ETR_FFCR", 0, 0, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_RTT_SHRD_ETR_FFCR cavm_rtt_shrd_etr_ffcr_t
#define bustype_CAVM_RTT_SHRD_ETR_FFCR CSR_TYPE_NCB32b
#define basename_CAVM_RTT_SHRD_ETR_FFCR "RTT_SHRD_ETR_FFCR"
#define busnum_CAVM_RTT_SHRD_ETR_FFCR 0
#define arguments_CAVM_RTT_SHRD_ETR_FFCR -1,-1,-1,-1

/**
 * Register (NCB32b) rtt_shrd_etr_ffsr
 *
 * RTT Shrd Etr Ffsr Register
 * This register indicates the status of the Formatter, and the status of Flush request.
 */
union cavm_rtt_shrd_etr_ffsr
{
    uint32_t u;
    struct cavm_rtt_shrd_etr_ffsr_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t razwi_0               : 30; /**< [ 31:  2](RO) Read-As-Zero, Writes Ignored. */
        uint32_t ftstopped             : 1;  /**< [  1:  1](RO) Formatter Stopped. This bit behaves the same way as STS.FtEmpty. It is cleared
                                                                 to 0 when leaving the Disabled state and retains its value when entering the
                                                                 Disabled state. The FFCR.FtStopped bit is deprecated and is present in this
                                                                 register to support backwards-compatibility with earlier versions of the ETB. */
        uint32_t flinprog              : 1;  /**< [  0:  0](RO) Flush In Progress. This bit indicates whether the TMC is currently processing a
                                                                 flush request. The flush initiation is controlled by the flush control bits in
                                                                 the FFCR register. The flush request could additionally be from the ATB master
                                                                 port. This bit is cleared to 0 when leaving the Disabled state and retains its
                                                                 value when entering the Disabled state. When in Disabled state, this bit is not
                                                                 updated. */
#else /* Word 0 - Little Endian */
        uint32_t flinprog              : 1;  /**< [  0:  0](RO) Flush In Progress. This bit indicates whether the TMC is currently processing a
                                                                 flush request. The flush initiation is controlled by the flush control bits in
                                                                 the FFCR register. The flush request could additionally be from the ATB master
                                                                 port. This bit is cleared to 0 when leaving the Disabled state and retains its
                                                                 value when entering the Disabled state. When in Disabled state, this bit is not
                                                                 updated. */
        uint32_t ftstopped             : 1;  /**< [  1:  1](RO) Formatter Stopped. This bit behaves the same way as STS.FtEmpty. It is cleared
                                                                 to 0 when leaving the Disabled state and retains its value when entering the
                                                                 Disabled state. The FFCR.FtStopped bit is deprecated and is present in this
                                                                 register to support backwards-compatibility with earlier versions of the ETB. */
        uint32_t razwi_0               : 30; /**< [ 31:  2](RO) Read-As-Zero, Writes Ignored. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_rtt_shrd_etr_ffsr_s cn; */
};
typedef union cavm_rtt_shrd_etr_ffsr cavm_rtt_shrd_etr_ffsr_t;

#define CAVM_RTT_SHRD_ETR_FFSR CAVM_RTT_SHRD_ETR_FFSR_FUNC()
static inline uint64_t CAVM_RTT_SHRD_ETR_FFSR_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_RTT_SHRD_ETR_FFSR_FUNC(void)
{
    if (cavm_is_model(OCTEONTX_CNF10KB))
        return 0x80e000030300ll;
    __cavm_csr_fatal("RTT_SHRD_ETR_FFSR", 0, 0, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_RTT_SHRD_ETR_FFSR cavm_rtt_shrd_etr_ffsr_t
#define bustype_CAVM_RTT_SHRD_ETR_FFSR CSR_TYPE_NCB32b
#define basename_CAVM_RTT_SHRD_ETR_FFSR "RTT_SHRD_ETR_FFSR"
#define busnum_CAVM_RTT_SHRD_ETR_FFSR 0
#define arguments_CAVM_RTT_SHRD_ETR_FFSR -1,-1,-1,-1

/**
 * Register (NCB32b) rtt_shrd_etr_itatbctr0
 *
 * RTT Shrd Etr Itatbctr0 Register
 * This register captures the values of ATB slave inputs atvalid_s, afready_s,
 * atwakeup_s, and atbytes_s in integration mode. In functional mode, this register
 * behaves as RAZ/WI. In integration mode, writes to this register are ignored and the
 * reads return the value of corresponding input pins. The width of this register is
 * given by: 8+log2(ATB DATA WIDTH/8).
 */
union cavm_rtt_shrd_etr_itatbctr0
{
    uint32_t u;
    struct cavm_rtt_shrd_etr_itatbctr0_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t razwi_1               : 22; /**< [ 31: 10](RO) Read-As-Zero, Writes Ignored. */
        uint32_t atbytess              : 2;  /**< [  9:  8](RO) Returns the value of atbytes_s input in integration mode. N=8+log2(ATB DATA WIDTH/8). */
        uint32_t razwi_0               : 5;  /**< [  7:  3](RO) Read-As-Zero, Writes Ignored. */
        uint32_t atwakeups             : 1;  /**< [  2:  2](RO) Returns the value of atwakeup_s input in integration mode. */
        uint32_t afreadys              : 1;  /**< [  1:  1](RO) Returns the value of afready_s input in integration mode. */
        uint32_t atvalids              : 1;  /**< [  0:  0](RO) Returns the value of atvalid_s input in integration mode. */
#else /* Word 0 - Little Endian */
        uint32_t atvalids              : 1;  /**< [  0:  0](RO) Returns the value of atvalid_s input in integration mode. */
        uint32_t afreadys              : 1;  /**< [  1:  1](RO) Returns the value of afready_s input in integration mode. */
        uint32_t atwakeups             : 1;  /**< [  2:  2](RO) Returns the value of atwakeup_s input in integration mode. */
        uint32_t razwi_0               : 5;  /**< [  7:  3](RO) Read-As-Zero, Writes Ignored. */
        uint32_t atbytess              : 2;  /**< [  9:  8](RO) Returns the value of atbytes_s input in integration mode. N=8+log2(ATB DATA WIDTH/8). */
        uint32_t razwi_1               : 22; /**< [ 31: 10](RO) Read-As-Zero, Writes Ignored. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_rtt_shrd_etr_itatbctr0_s cn; */
};
typedef union cavm_rtt_shrd_etr_itatbctr0 cavm_rtt_shrd_etr_itatbctr0_t;

#define CAVM_RTT_SHRD_ETR_ITATBCTR0 CAVM_RTT_SHRD_ETR_ITATBCTR0_FUNC()
static inline uint64_t CAVM_RTT_SHRD_ETR_ITATBCTR0_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_RTT_SHRD_ETR_ITATBCTR0_FUNC(void)
{
    if (cavm_is_model(OCTEONTX_CNF10KB))
        return 0x80e000030ef8ll;
    __cavm_csr_fatal("RTT_SHRD_ETR_ITATBCTR0", 0, 0, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_RTT_SHRD_ETR_ITATBCTR0 cavm_rtt_shrd_etr_itatbctr0_t
#define bustype_CAVM_RTT_SHRD_ETR_ITATBCTR0 CSR_TYPE_NCB32b
#define basename_CAVM_RTT_SHRD_ETR_ITATBCTR0 "RTT_SHRD_ETR_ITATBCTR0"
#define busnum_CAVM_RTT_SHRD_ETR_ITATBCTR0 0
#define arguments_CAVM_RTT_SHRD_ETR_ITATBCTR0 -1,-1,-1,-1

/**
 * Register (NCB32b) rtt_shrd_etr_itatbctr1
 *
 * RTT Shrd Etr Itatbctr1 Register
 * This register captures the value of the atid_s[6:0] input in integration mode. In
 * functional mode, this register behaves as RAZ/WI. In integration mode, writes to
 * this register are ignored and the reads return the value of atid_s input.
 */
union cavm_rtt_shrd_etr_itatbctr1
{
    uint32_t u;
    struct cavm_rtt_shrd_etr_itatbctr1_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t razwi_0               : 25; /**< [ 31:  7](RO) Read-As-Zero, Writes Ignored. */
        uint32_t atids                 : 7;  /**< [  6:  0](RO) Returns the value of atid_s[6:0] input in integration mode. */
#else /* Word 0 - Little Endian */
        uint32_t atids                 : 7;  /**< [  6:  0](RO) Returns the value of atid_s[6:0] input in integration mode. */
        uint32_t razwi_0               : 25; /**< [ 31:  7](RO) Read-As-Zero, Writes Ignored. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_rtt_shrd_etr_itatbctr1_s cn; */
};
typedef union cavm_rtt_shrd_etr_itatbctr1 cavm_rtt_shrd_etr_itatbctr1_t;

#define CAVM_RTT_SHRD_ETR_ITATBCTR1 CAVM_RTT_SHRD_ETR_ITATBCTR1_FUNC()
static inline uint64_t CAVM_RTT_SHRD_ETR_ITATBCTR1_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_RTT_SHRD_ETR_ITATBCTR1_FUNC(void)
{
    if (cavm_is_model(OCTEONTX_CNF10KB))
        return 0x80e000030ef4ll;
    __cavm_csr_fatal("RTT_SHRD_ETR_ITATBCTR1", 0, 0, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_RTT_SHRD_ETR_ITATBCTR1 cavm_rtt_shrd_etr_itatbctr1_t
#define bustype_CAVM_RTT_SHRD_ETR_ITATBCTR1 CSR_TYPE_NCB32b
#define basename_CAVM_RTT_SHRD_ETR_ITATBCTR1 "RTT_SHRD_ETR_ITATBCTR1"
#define busnum_CAVM_RTT_SHRD_ETR_ITATBCTR1 0
#define arguments_CAVM_RTT_SHRD_ETR_ITATBCTR1 -1,-1,-1,-1

/**
 * Register (NCB32b) rtt_shrd_etr_itatbctr2
 *
 * RTT Shrd Etr Itatbctr2 Register
 * This register enables control of ATB slave outputs atready_s, afvalid_s, and
 * syncreq_s in integration mode. In functional mode, this register behaves as RAZ/WI.
 * In integration mode, the value that is written to any bit of this register is driven
 * on the output pin that is controlled by that bit and the reads return 0x0.
 */
union cavm_rtt_shrd_etr_itatbctr2
{
    uint32_t u;
    struct cavm_rtt_shrd_etr_itatbctr2_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t razwi_0               : 29; /**< [ 31:  3](WO) Read-As-Zero, Writes Ignored. */
        uint32_t syncreqs              : 1;  /**< [  2:  2](WO) Controls the value of syncreq_s output in integration mode. */
        uint32_t afvalids              : 1;  /**< [  1:  1](WO) Controls the value of afvalid_s output in integration mode. */
        uint32_t atreadys              : 1;  /**< [  0:  0](WO) Controls the value of atready_s output in integration mode. */
#else /* Word 0 - Little Endian */
        uint32_t atreadys              : 1;  /**< [  0:  0](WO) Controls the value of atready_s output in integration mode. */
        uint32_t afvalids              : 1;  /**< [  1:  1](WO) Controls the value of afvalid_s output in integration mode. */
        uint32_t syncreqs              : 1;  /**< [  2:  2](WO) Controls the value of syncreq_s output in integration mode. */
        uint32_t razwi_0               : 29; /**< [ 31:  3](WO) Read-As-Zero, Writes Ignored. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_rtt_shrd_etr_itatbctr2_s cn; */
};
typedef union cavm_rtt_shrd_etr_itatbctr2 cavm_rtt_shrd_etr_itatbctr2_t;

#define CAVM_RTT_SHRD_ETR_ITATBCTR2 CAVM_RTT_SHRD_ETR_ITATBCTR2_FUNC()
static inline uint64_t CAVM_RTT_SHRD_ETR_ITATBCTR2_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_RTT_SHRD_ETR_ITATBCTR2_FUNC(void)
{
    if (cavm_is_model(OCTEONTX_CNF10KB))
        return 0x80e000030ef0ll;
    __cavm_csr_fatal("RTT_SHRD_ETR_ITATBCTR2", 0, 0, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_RTT_SHRD_ETR_ITATBCTR2 cavm_rtt_shrd_etr_itatbctr2_t
#define bustype_CAVM_RTT_SHRD_ETR_ITATBCTR2 CSR_TYPE_NCB32b
#define basename_CAVM_RTT_SHRD_ETR_ITATBCTR2 "RTT_SHRD_ETR_ITATBCTR2"
#define busnum_CAVM_RTT_SHRD_ETR_ITATBCTR2 0
#define arguments_CAVM_RTT_SHRD_ETR_ITATBCTR2 -1,-1,-1,-1

/**
 * Register (NCB32b) rtt_shrd_etr_itatbdata0
 *
 * RTT Shrd Etr Itatbdata0 Register
 * This register captures the value of atdata_s input in integration mode. In
 * functional mode, this register behaves as RAZ/WI. In integration mode, writes to
 * this register are ignored and the reads return the value of corresponding atdata_s
 * bits. The width of this register is given by: 1+(ATB DATA WIDTH)/8.
 */
union cavm_rtt_shrd_etr_itatbdata0
{
    uint32_t u;
    struct cavm_rtt_shrd_etr_itatbdata0_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t razwi_0               : 27; /**< [ 31:  5](RO) Read-As-Zero, Writes Ignored. */
        uint32_t atdatasbit31          : 1;  /**< [  4:  4](RO) Returns the value of atdata_s[31] input in integration mode. */
        uint32_t atdatasbit23          : 1;  /**< [  3:  3](RO) Returns the value of atdata_s[23] input in integration mode. */
        uint32_t atdatasbit15          : 1;  /**< [  2:  2](RO) Returns the value of atdata_s[15] input in integration mode. */
        uint32_t atdatasbit7           : 1;  /**< [  1:  1](RO) Returns the value of atdata_s[7] input in integration mode. */
        uint32_t atdatasbit0           : 1;  /**< [  0:  0](RO) Returns the value of atdata_s[0] input in integration mode. */
#else /* Word 0 - Little Endian */
        uint32_t atdatasbit0           : 1;  /**< [  0:  0](RO) Returns the value of atdata_s[0] input in integration mode. */
        uint32_t atdatasbit7           : 1;  /**< [  1:  1](RO) Returns the value of atdata_s[7] input in integration mode. */
        uint32_t atdatasbit15          : 1;  /**< [  2:  2](RO) Returns the value of atdata_s[15] input in integration mode. */
        uint32_t atdatasbit23          : 1;  /**< [  3:  3](RO) Returns the value of atdata_s[23] input in integration mode. */
        uint32_t atdatasbit31          : 1;  /**< [  4:  4](RO) Returns the value of atdata_s[31] input in integration mode. */
        uint32_t razwi_0               : 27; /**< [ 31:  5](RO) Read-As-Zero, Writes Ignored. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_rtt_shrd_etr_itatbdata0_s cn; */
};
typedef union cavm_rtt_shrd_etr_itatbdata0 cavm_rtt_shrd_etr_itatbdata0_t;

#define CAVM_RTT_SHRD_ETR_ITATBDATA0 CAVM_RTT_SHRD_ETR_ITATBDATA0_FUNC()
static inline uint64_t CAVM_RTT_SHRD_ETR_ITATBDATA0_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_RTT_SHRD_ETR_ITATBDATA0_FUNC(void)
{
    if (cavm_is_model(OCTEONTX_CNF10KB))
        return 0x80e000030eecll;
    __cavm_csr_fatal("RTT_SHRD_ETR_ITATBDATA0", 0, 0, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_RTT_SHRD_ETR_ITATBDATA0 cavm_rtt_shrd_etr_itatbdata0_t
#define bustype_CAVM_RTT_SHRD_ETR_ITATBDATA0 CSR_TYPE_NCB32b
#define basename_CAVM_RTT_SHRD_ETR_ITATBDATA0 "RTT_SHRD_ETR_ITATBDATA0"
#define busnum_CAVM_RTT_SHRD_ETR_ITATBDATA0 0
#define arguments_CAVM_RTT_SHRD_ETR_ITATBDATA0 -1,-1,-1,-1

/**
 * Register (NCB32b) rtt_shrd_etr_itctrl
 *
 * RTT Shrd Etr Itctrl Register
 * The Integration Mode Control register is used to enable topology detection.
 */
union cavm_rtt_shrd_etr_itctrl
{
    uint32_t u;
    struct cavm_rtt_shrd_etr_itctrl_s
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
    /* struct cavm_rtt_shrd_etr_itctrl_s cn; */
};
typedef union cavm_rtt_shrd_etr_itctrl cavm_rtt_shrd_etr_itctrl_t;

#define CAVM_RTT_SHRD_ETR_ITCTRL CAVM_RTT_SHRD_ETR_ITCTRL_FUNC()
static inline uint64_t CAVM_RTT_SHRD_ETR_ITCTRL_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_RTT_SHRD_ETR_ITCTRL_FUNC(void)
{
    if (cavm_is_model(OCTEONTX_CNF10KB))
        return 0x80e000030f00ll;
    __cavm_csr_fatal("RTT_SHRD_ETR_ITCTRL", 0, 0, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_RTT_SHRD_ETR_ITCTRL cavm_rtt_shrd_etr_itctrl_t
#define bustype_CAVM_RTT_SHRD_ETR_ITCTRL CSR_TYPE_NCB32b
#define basename_CAVM_RTT_SHRD_ETR_ITCTRL "RTT_SHRD_ETR_ITCTRL"
#define busnum_CAVM_RTT_SHRD_ETR_ITCTRL 0
#define arguments_CAVM_RTT_SHRD_ETR_ITCTRL -1,-1,-1,-1

/**
 * Register (NCB32b) rtt_shrd_etr_itevtintr
 *
 * RTT Shrd Etr Itevtintr Register
 * This register controls the values of event and interrupt outputs in integration
 * mode. In functional mode, this register behaves as RAZ/WI. In integration mode, the
 * value that is written to any bit of this register is driven on the output pin that
 * is controlled by that bit and the reads return 0x0.
 */
union cavm_rtt_shrd_etr_itevtintr
{
    uint32_t u;
    struct cavm_rtt_shrd_etr_itevtintr_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t razwi_0               : 28; /**< [ 31:  4](WO) Read-As-Zero, Writes Ignored. */
        uint32_t bufintr               : 1;  /**< [  3:  3](WO) Controls the value of bufintr output in integration mode. */
        uint32_t flushcomp             : 1;  /**< [  2:  2](WO) Controls the value of flushcomp output in integration mode. */
        uint32_t full                  : 1;  /**< [  1:  1](WO) Controls the value of full output in integration mode. */
        uint32_t acqcomp               : 1;  /**< [  0:  0](WO) Controls the value of acqcomp output in integration mode. */
#else /* Word 0 - Little Endian */
        uint32_t acqcomp               : 1;  /**< [  0:  0](WO) Controls the value of acqcomp output in integration mode. */
        uint32_t full                  : 1;  /**< [  1:  1](WO) Controls the value of full output in integration mode. */
        uint32_t flushcomp             : 1;  /**< [  2:  2](WO) Controls the value of flushcomp output in integration mode. */
        uint32_t bufintr               : 1;  /**< [  3:  3](WO) Controls the value of bufintr output in integration mode. */
        uint32_t razwi_0               : 28; /**< [ 31:  4](WO) Read-As-Zero, Writes Ignored. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_rtt_shrd_etr_itevtintr_s cn; */
};
typedef union cavm_rtt_shrd_etr_itevtintr cavm_rtt_shrd_etr_itevtintr_t;

#define CAVM_RTT_SHRD_ETR_ITEVTINTR CAVM_RTT_SHRD_ETR_ITEVTINTR_FUNC()
static inline uint64_t CAVM_RTT_SHRD_ETR_ITEVTINTR_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_RTT_SHRD_ETR_ITEVTINTR_FUNC(void)
{
    if (cavm_is_model(OCTEONTX_CNF10KB))
        return 0x80e000030ee0ll;
    __cavm_csr_fatal("RTT_SHRD_ETR_ITEVTINTR", 0, 0, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_RTT_SHRD_ETR_ITEVTINTR cavm_rtt_shrd_etr_itevtintr_t
#define bustype_CAVM_RTT_SHRD_ETR_ITEVTINTR CSR_TYPE_NCB32b
#define basename_CAVM_RTT_SHRD_ETR_ITEVTINTR "RTT_SHRD_ETR_ITEVTINTR"
#define busnum_CAVM_RTT_SHRD_ETR_ITEVTINTR 0
#define arguments_CAVM_RTT_SHRD_ETR_ITEVTINTR -1,-1,-1,-1

/**
 * Register (NCB32b) rtt_shrd_etr_ittrflin
 *
 * RTT Shrd Etr Ittrflin Register
 * This register captures the values of the flushin and trigin inputs in integration
 * mode. In functional mode, this register behaves as RAZ/WI.
 */
union cavm_rtt_shrd_etr_ittrflin
{
    uint32_t u;
    struct cavm_rtt_shrd_etr_ittrflin_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t razwi_0               : 30; /**< [ 31:  2](RO) Read-As-Zero, Writes Ignored. */
        uint32_t flushin               : 1;  /**< [  1:  1](RO) Integration status of flushin input. In integration mode, this bit latches to 1
                                                                 on a rising edge of the flushin input. It is cleared when the register is read
                                                                 or when integration mode is disabled. */
        uint32_t trigin                : 1;  /**< [  0:  0](RO) Integration status of trigin input. In integration mode, this bit latches to 1
                                                                 on a rising edge of the trigin input. It is cleared when the register is read or
                                                                 when integration mode is disabled. */
#else /* Word 0 - Little Endian */
        uint32_t trigin                : 1;  /**< [  0:  0](RO) Integration status of trigin input. In integration mode, this bit latches to 1
                                                                 on a rising edge of the trigin input. It is cleared when the register is read or
                                                                 when integration mode is disabled. */
        uint32_t flushin               : 1;  /**< [  1:  1](RO) Integration status of flushin input. In integration mode, this bit latches to 1
                                                                 on a rising edge of the flushin input. It is cleared when the register is read
                                                                 or when integration mode is disabled. */
        uint32_t razwi_0               : 30; /**< [ 31:  2](RO) Read-As-Zero, Writes Ignored. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_rtt_shrd_etr_ittrflin_s cn; */
};
typedef union cavm_rtt_shrd_etr_ittrflin cavm_rtt_shrd_etr_ittrflin_t;

#define CAVM_RTT_SHRD_ETR_ITTRFLIN CAVM_RTT_SHRD_ETR_ITTRFLIN_FUNC()
static inline uint64_t CAVM_RTT_SHRD_ETR_ITTRFLIN_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_RTT_SHRD_ETR_ITTRFLIN_FUNC(void)
{
    if (cavm_is_model(OCTEONTX_CNF10KB))
        return 0x80e000030ee8ll;
    __cavm_csr_fatal("RTT_SHRD_ETR_ITTRFLIN", 0, 0, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_RTT_SHRD_ETR_ITTRFLIN cavm_rtt_shrd_etr_ittrflin_t
#define bustype_CAVM_RTT_SHRD_ETR_ITTRFLIN CSR_TYPE_NCB32b
#define basename_CAVM_RTT_SHRD_ETR_ITTRFLIN "RTT_SHRD_ETR_ITTRFLIN"
#define busnum_CAVM_RTT_SHRD_ETR_ITTRFLIN 0
#define arguments_CAVM_RTT_SHRD_ETR_ITTRFLIN -1,-1,-1,-1

/**
 * Register (NCB32b) rtt_shrd_etr_lbuflevel
 *
 * RTT Shrd Etr Lbuflevel Register
 * Reading this register returns the maximum fill level of the trace memory in 32-bit
 * words since this register was last read. Reading this register also results in its
 * contents being updated to the current fill level. When entering Disabled state, it
 * retains its last value. While in Disabled state, reads from this register do not
 * affect its value. When exiting Disabled state, the LBUFLEVEL register is updated to
 * the current fill level.
 */
union cavm_rtt_shrd_etr_lbuflevel
{
    uint32_t u;
    struct cavm_rtt_shrd_etr_lbuflevel_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t razwi_0               : 1;  /**< [ 31: 31](RO) Read-As-Zero, Writes Ignored. */
        uint32_t lbuflevel             : 31; /**< [ 30:  0](RO) Latched Buffer Fill Level. Indicates the maximum fill level of the trace memory
                                                                 in 32-bit words since this register was last read. */
#else /* Word 0 - Little Endian */
        uint32_t lbuflevel             : 31; /**< [ 30:  0](RO) Latched Buffer Fill Level. Indicates the maximum fill level of the trace memory
                                                                 in 32-bit words since this register was last read. */
        uint32_t razwi_0               : 1;  /**< [ 31: 31](RO) Read-As-Zero, Writes Ignored. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_rtt_shrd_etr_lbuflevel_s cn; */
};
typedef union cavm_rtt_shrd_etr_lbuflevel cavm_rtt_shrd_etr_lbuflevel_t;

#define CAVM_RTT_SHRD_ETR_LBUFLEVEL CAVM_RTT_SHRD_ETR_LBUFLEVEL_FUNC()
static inline uint64_t CAVM_RTT_SHRD_ETR_LBUFLEVEL_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_RTT_SHRD_ETR_LBUFLEVEL_FUNC(void)
{
    if (cavm_is_model(OCTEONTX_CNF10KB))
        return 0x80e00003002cll;
    __cavm_csr_fatal("RTT_SHRD_ETR_LBUFLEVEL", 0, 0, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_RTT_SHRD_ETR_LBUFLEVEL cavm_rtt_shrd_etr_lbuflevel_t
#define bustype_CAVM_RTT_SHRD_ETR_LBUFLEVEL CSR_TYPE_NCB32b
#define basename_CAVM_RTT_SHRD_ETR_LBUFLEVEL "RTT_SHRD_ETR_LBUFLEVEL"
#define busnum_CAVM_RTT_SHRD_ETR_LBUFLEVEL 0
#define arguments_CAVM_RTT_SHRD_ETR_LBUFLEVEL -1,-1,-1,-1

/**
 * Register (NCB32b) rtt_shrd_etr_mode
 *
 * RTT Shrd Etr Mode Register
 * This register controls the TMC operating mode. The operating mode can only be
 * changed when the TMC is in Disabled state. Attempting to write to this register in
 * any other state results in UNPREDICTABLE behavior. The operating mode is ignored
 * when in Disabled state.
 */
union cavm_rtt_shrd_etr_mode
{
    uint32_t u;
    struct cavm_rtt_shrd_etr_mode_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t razwi_1               : 27; /**< [ 31:  5](R/W) Read-As-Zero, Writes Ignored. */
        uint32_t stallonstop           : 1;  /**< [  4:  4](R/W) Stall On Stop. If this bit is set and the formatter stops as a result of a stop
                                                                 event, the output atready_s is de-asserted to stall the ATB interface and avoid
                                                                 loss of trace. If this bit is clear and the formatter stops as a result of a
                                                                 stop event, signal atready_s remains asserted but the TMC discards further
                                                                 incoming trace. */
        uint32_t razwi_0               : 2;  /**< [  3:  2](R/W) Read-As-Zero, Writes Ignored. */
        uint32_t mode                  : 2;  /**< [  1:  0](R/W) Selects the operating mode. If a reserved MODE value is programmed and trace
                                                                 capture is enabled, the TMC starts to operate in SWF1 mode. However, reading the
                                                                 MODE.MODE field returns the programmed value. */
#else /* Word 0 - Little Endian */
        uint32_t mode                  : 2;  /**< [  1:  0](R/W) Selects the operating mode. If a reserved MODE value is programmed and trace
                                                                 capture is enabled, the TMC starts to operate in SWF1 mode. However, reading the
                                                                 MODE.MODE field returns the programmed value. */
        uint32_t razwi_0               : 2;  /**< [  3:  2](R/W) Read-As-Zero, Writes Ignored. */
        uint32_t stallonstop           : 1;  /**< [  4:  4](R/W) Stall On Stop. If this bit is set and the formatter stops as a result of a stop
                                                                 event, the output atready_s is de-asserted to stall the ATB interface and avoid
                                                                 loss of trace. If this bit is clear and the formatter stops as a result of a
                                                                 stop event, signal atready_s remains asserted but the TMC discards further
                                                                 incoming trace. */
        uint32_t razwi_1               : 27; /**< [ 31:  5](R/W) Read-As-Zero, Writes Ignored. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_rtt_shrd_etr_mode_s cn; */
};
typedef union cavm_rtt_shrd_etr_mode cavm_rtt_shrd_etr_mode_t;

#define CAVM_RTT_SHRD_ETR_MODE CAVM_RTT_SHRD_ETR_MODE_FUNC()
static inline uint64_t CAVM_RTT_SHRD_ETR_MODE_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_RTT_SHRD_ETR_MODE_FUNC(void)
{
    if (cavm_is_model(OCTEONTX_CNF10KB))
        return 0x80e000030028ll;
    __cavm_csr_fatal("RTT_SHRD_ETR_MODE", 0, 0, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_RTT_SHRD_ETR_MODE cavm_rtt_shrd_etr_mode_t
#define bustype_CAVM_RTT_SHRD_ETR_MODE CSR_TYPE_NCB32b
#define basename_CAVM_RTT_SHRD_ETR_MODE "RTT_SHRD_ETR_MODE"
#define busnum_CAVM_RTT_SHRD_ETR_MODE 0
#define arguments_CAVM_RTT_SHRD_ETR_MODE -1,-1,-1,-1

/**
 * Register (NCB32b) rtt_shrd_etr_pidr0
 *
 * RTT Shrd Etr Pidr0 Register
 * The PIDR0 register is part of the set of peripheral identification registers.
 */
union cavm_rtt_shrd_etr_pidr0
{
    uint32_t u;
    struct cavm_rtt_shrd_etr_pidr0_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t reserved_8_31         : 24;
        uint32_t part_0                : 8;  /**< [  7:  0](RO) Part number (lower 8 bits). Returns 0xe8, indicating TMC ETR/ETS. */
#else /* Word 0 - Little Endian */
        uint32_t part_0                : 8;  /**< [  7:  0](RO) Part number (lower 8 bits). Returns 0xe8, indicating TMC ETR/ETS. */
        uint32_t reserved_8_31         : 24;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_rtt_shrd_etr_pidr0_s cn; */
};
typedef union cavm_rtt_shrd_etr_pidr0 cavm_rtt_shrd_etr_pidr0_t;

#define CAVM_RTT_SHRD_ETR_PIDR0 CAVM_RTT_SHRD_ETR_PIDR0_FUNC()
static inline uint64_t CAVM_RTT_SHRD_ETR_PIDR0_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_RTT_SHRD_ETR_PIDR0_FUNC(void)
{
    if (cavm_is_model(OCTEONTX_CNF10KB))
        return 0x80e000030fe0ll;
    __cavm_csr_fatal("RTT_SHRD_ETR_PIDR0", 0, 0, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_RTT_SHRD_ETR_PIDR0 cavm_rtt_shrd_etr_pidr0_t
#define bustype_CAVM_RTT_SHRD_ETR_PIDR0 CSR_TYPE_NCB32b
#define basename_CAVM_RTT_SHRD_ETR_PIDR0 "RTT_SHRD_ETR_PIDR0"
#define busnum_CAVM_RTT_SHRD_ETR_PIDR0 0
#define arguments_CAVM_RTT_SHRD_ETR_PIDR0 -1,-1,-1,-1

/**
 * Register (NCB32b) rtt_shrd_etr_pidr1
 *
 * RTT Shrd Etr Pidr1 Register
 * The PIDR1 register is part of the set of peripheral identification registers.
 */
union cavm_rtt_shrd_etr_pidr1
{
    uint32_t u;
    struct cavm_rtt_shrd_etr_pidr1_s
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
    /* struct cavm_rtt_shrd_etr_pidr1_s cn; */
};
typedef union cavm_rtt_shrd_etr_pidr1 cavm_rtt_shrd_etr_pidr1_t;

#define CAVM_RTT_SHRD_ETR_PIDR1 CAVM_RTT_SHRD_ETR_PIDR1_FUNC()
static inline uint64_t CAVM_RTT_SHRD_ETR_PIDR1_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_RTT_SHRD_ETR_PIDR1_FUNC(void)
{
    if (cavm_is_model(OCTEONTX_CNF10KB))
        return 0x80e000030fe4ll;
    __cavm_csr_fatal("RTT_SHRD_ETR_PIDR1", 0, 0, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_RTT_SHRD_ETR_PIDR1 cavm_rtt_shrd_etr_pidr1_t
#define bustype_CAVM_RTT_SHRD_ETR_PIDR1 CSR_TYPE_NCB32b
#define basename_CAVM_RTT_SHRD_ETR_PIDR1 "RTT_SHRD_ETR_PIDR1"
#define busnum_CAVM_RTT_SHRD_ETR_PIDR1 0
#define arguments_CAVM_RTT_SHRD_ETR_PIDR1 -1,-1,-1,-1

/**
 * Register (NCB32b) rtt_shrd_etr_pidr2
 *
 * RTT Shrd Etr Pidr2 Register
 * The PIDR2 register is part of the set of peripheral identification registers.
 */
union cavm_rtt_shrd_etr_pidr2
{
    uint32_t u;
    struct cavm_rtt_shrd_etr_pidr2_s
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
    /* struct cavm_rtt_shrd_etr_pidr2_s cn; */
};
typedef union cavm_rtt_shrd_etr_pidr2 cavm_rtt_shrd_etr_pidr2_t;

#define CAVM_RTT_SHRD_ETR_PIDR2 CAVM_RTT_SHRD_ETR_PIDR2_FUNC()
static inline uint64_t CAVM_RTT_SHRD_ETR_PIDR2_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_RTT_SHRD_ETR_PIDR2_FUNC(void)
{
    if (cavm_is_model(OCTEONTX_CNF10KB))
        return 0x80e000030fe8ll;
    __cavm_csr_fatal("RTT_SHRD_ETR_PIDR2", 0, 0, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_RTT_SHRD_ETR_PIDR2 cavm_rtt_shrd_etr_pidr2_t
#define bustype_CAVM_RTT_SHRD_ETR_PIDR2 CSR_TYPE_NCB32b
#define basename_CAVM_RTT_SHRD_ETR_PIDR2 "RTT_SHRD_ETR_PIDR2"
#define busnum_CAVM_RTT_SHRD_ETR_PIDR2 0
#define arguments_CAVM_RTT_SHRD_ETR_PIDR2 -1,-1,-1,-1

/**
 * Register (NCB32b) rtt_shrd_etr_pidr3
 *
 * RTT Shrd Etr Pidr3 Register
 * The PIDR3 register is part of the set of peripheral identification registers.
 */
union cavm_rtt_shrd_etr_pidr3
{
    uint32_t u;
    struct cavm_rtt_shrd_etr_pidr3_s
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
    /* struct cavm_rtt_shrd_etr_pidr3_s cn; */
};
typedef union cavm_rtt_shrd_etr_pidr3 cavm_rtt_shrd_etr_pidr3_t;

#define CAVM_RTT_SHRD_ETR_PIDR3 CAVM_RTT_SHRD_ETR_PIDR3_FUNC()
static inline uint64_t CAVM_RTT_SHRD_ETR_PIDR3_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_RTT_SHRD_ETR_PIDR3_FUNC(void)
{
    if (cavm_is_model(OCTEONTX_CNF10KB))
        return 0x80e000030fecll;
    __cavm_csr_fatal("RTT_SHRD_ETR_PIDR3", 0, 0, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_RTT_SHRD_ETR_PIDR3 cavm_rtt_shrd_etr_pidr3_t
#define bustype_CAVM_RTT_SHRD_ETR_PIDR3 CSR_TYPE_NCB32b
#define basename_CAVM_RTT_SHRD_ETR_PIDR3 "RTT_SHRD_ETR_PIDR3"
#define busnum_CAVM_RTT_SHRD_ETR_PIDR3 0
#define arguments_CAVM_RTT_SHRD_ETR_PIDR3 -1,-1,-1,-1

/**
 * Register (NCB32b) rtt_shrd_etr_pidr4
 *
 * RTT Shrd Etr Pidr4 Register
 * The PIDR4 register is part of the set of peripheral identification registers.
 */
union cavm_rtt_shrd_etr_pidr4
{
    uint32_t u;
    struct cavm_rtt_shrd_etr_pidr4_s
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
    /* struct cavm_rtt_shrd_etr_pidr4_s cn; */
};
typedef union cavm_rtt_shrd_etr_pidr4 cavm_rtt_shrd_etr_pidr4_t;

#define CAVM_RTT_SHRD_ETR_PIDR4 CAVM_RTT_SHRD_ETR_PIDR4_FUNC()
static inline uint64_t CAVM_RTT_SHRD_ETR_PIDR4_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_RTT_SHRD_ETR_PIDR4_FUNC(void)
{
    if (cavm_is_model(OCTEONTX_CNF10KB))
        return 0x80e000030fd0ll;
    __cavm_csr_fatal("RTT_SHRD_ETR_PIDR4", 0, 0, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_RTT_SHRD_ETR_PIDR4 cavm_rtt_shrd_etr_pidr4_t
#define bustype_CAVM_RTT_SHRD_ETR_PIDR4 CSR_TYPE_NCB32b
#define basename_CAVM_RTT_SHRD_ETR_PIDR4 "RTT_SHRD_ETR_PIDR4"
#define busnum_CAVM_RTT_SHRD_ETR_PIDR4 0
#define arguments_CAVM_RTT_SHRD_ETR_PIDR4 -1,-1,-1,-1

/**
 * Register (NCB32b) rtt_shrd_etr_pidr5
 *
 * RTT Shrd Etr Pidr5 Register
 * The PIDR5 register is part of the set of peripheral identification registers.
 */
union cavm_rtt_shrd_etr_pidr5
{
    uint32_t u;
    struct cavm_rtt_shrd_etr_pidr5_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t reserved_8_31         : 24;
        uint32_t pidr5                 : 8;  /**< [  7:  0](RO) Reserved. */
#else /* Word 0 - Little Endian */
        uint32_t pidr5                 : 8;  /**< [  7:  0](RO) Reserved. */
        uint32_t reserved_8_31         : 24;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_rtt_shrd_etr_pidr5_s cn; */
};
typedef union cavm_rtt_shrd_etr_pidr5 cavm_rtt_shrd_etr_pidr5_t;

#define CAVM_RTT_SHRD_ETR_PIDR5 CAVM_RTT_SHRD_ETR_PIDR5_FUNC()
static inline uint64_t CAVM_RTT_SHRD_ETR_PIDR5_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_RTT_SHRD_ETR_PIDR5_FUNC(void)
{
    if (cavm_is_model(OCTEONTX_CNF10KB))
        return 0x80e000030fd4ll;
    __cavm_csr_fatal("RTT_SHRD_ETR_PIDR5", 0, 0, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_RTT_SHRD_ETR_PIDR5 cavm_rtt_shrd_etr_pidr5_t
#define bustype_CAVM_RTT_SHRD_ETR_PIDR5 CSR_TYPE_NCB32b
#define basename_CAVM_RTT_SHRD_ETR_PIDR5 "RTT_SHRD_ETR_PIDR5"
#define busnum_CAVM_RTT_SHRD_ETR_PIDR5 0
#define arguments_CAVM_RTT_SHRD_ETR_PIDR5 -1,-1,-1,-1

/**
 * Register (NCB32b) rtt_shrd_etr_pidr6
 *
 * RTT Shrd Etr Pidr6 Register
 * The PIDR6 register is part of the set of peripheral identification registers.
 */
union cavm_rtt_shrd_etr_pidr6
{
    uint32_t u;
    struct cavm_rtt_shrd_etr_pidr6_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t reserved_8_31         : 24;
        uint32_t pidr6                 : 8;  /**< [  7:  0](RO) Reserved. */
#else /* Word 0 - Little Endian */
        uint32_t pidr6                 : 8;  /**< [  7:  0](RO) Reserved. */
        uint32_t reserved_8_31         : 24;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_rtt_shrd_etr_pidr6_s cn; */
};
typedef union cavm_rtt_shrd_etr_pidr6 cavm_rtt_shrd_etr_pidr6_t;

#define CAVM_RTT_SHRD_ETR_PIDR6 CAVM_RTT_SHRD_ETR_PIDR6_FUNC()
static inline uint64_t CAVM_RTT_SHRD_ETR_PIDR6_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_RTT_SHRD_ETR_PIDR6_FUNC(void)
{
    if (cavm_is_model(OCTEONTX_CNF10KB))
        return 0x80e000030fd8ll;
    __cavm_csr_fatal("RTT_SHRD_ETR_PIDR6", 0, 0, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_RTT_SHRD_ETR_PIDR6 cavm_rtt_shrd_etr_pidr6_t
#define bustype_CAVM_RTT_SHRD_ETR_PIDR6 CSR_TYPE_NCB32b
#define basename_CAVM_RTT_SHRD_ETR_PIDR6 "RTT_SHRD_ETR_PIDR6"
#define busnum_CAVM_RTT_SHRD_ETR_PIDR6 0
#define arguments_CAVM_RTT_SHRD_ETR_PIDR6 -1,-1,-1,-1

/**
 * Register (NCB32b) rtt_shrd_etr_pidr7
 *
 * RTT Shrd Etr Pidr7 Register
 * The PIDR7 register is part of the set of peripheral identification registers.
 */
union cavm_rtt_shrd_etr_pidr7
{
    uint32_t u;
    struct cavm_rtt_shrd_etr_pidr7_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t reserved_8_31         : 24;
        uint32_t pidr7                 : 8;  /**< [  7:  0](RO) Reserved. */
#else /* Word 0 - Little Endian */
        uint32_t pidr7                 : 8;  /**< [  7:  0](RO) Reserved. */
        uint32_t reserved_8_31         : 24;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_rtt_shrd_etr_pidr7_s cn; */
};
typedef union cavm_rtt_shrd_etr_pidr7 cavm_rtt_shrd_etr_pidr7_t;

#define CAVM_RTT_SHRD_ETR_PIDR7 CAVM_RTT_SHRD_ETR_PIDR7_FUNC()
static inline uint64_t CAVM_RTT_SHRD_ETR_PIDR7_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_RTT_SHRD_ETR_PIDR7_FUNC(void)
{
    if (cavm_is_model(OCTEONTX_CNF10KB))
        return 0x80e000030fdcll;
    __cavm_csr_fatal("RTT_SHRD_ETR_PIDR7", 0, 0, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_RTT_SHRD_ETR_PIDR7 cavm_rtt_shrd_etr_pidr7_t
#define bustype_CAVM_RTT_SHRD_ETR_PIDR7 CSR_TYPE_NCB32b
#define basename_CAVM_RTT_SHRD_ETR_PIDR7 "RTT_SHRD_ETR_PIDR7"
#define busnum_CAVM_RTT_SHRD_ETR_PIDR7 0
#define arguments_CAVM_RTT_SHRD_ETR_PIDR7 -1,-1,-1,-1

/**
 * Register (NCB32b) rtt_shrd_etr_pscr
 *
 * RTT Shrd Etr Pscr Register
 * This register determines the reload value of the Periodic Synchronization Counter.
 * This counter enables the frequency of sync packets to be optimized to the trace
 * capture buffer size. The default behavior of the counter is to generate periodic
 * synchronization requests, syncreq_s, on the ATB slave interface.
 */
union cavm_rtt_shrd_etr_pscr
{
    uint32_t u;
    struct cavm_rtt_shrd_etr_pscr_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t razwi_0               : 26; /**< [ 31:  6](R/W) Read-As-Zero, Writes Ignored. */
        uint32_t embedsync             : 1;  /**< [  5:  5](R/W) Embed Frame Sync Packet in the trace stream. Setting this bit to 1 enables the
                                                                 formatter to insert frame sync packets in the trace stream at periodic
                                                                 intervals. If this bit is set and the Synchronization Counter is enabled, the
                                                                 formatter inserts a 32-bit frame sync packet in the trace stream when the
                                                                 counter reaches 0. This bit is effective only when formatting is enabled, that
                                                                 is when FFCR.EnTI=1 or FFCR.EnFt=1, and it is ignored when the formatter is in
                                                                 bypass mode. */
        uint32_t pscount               : 5;  /**< [  4:  0](R/W) Periodic Synchronization Count. Determines the reload value of the
                                                                 Synchronization Counter. The reload value takes effect the next time the counter
                                                                 reaches zero. When trace capture is enabled, the Synchronization Counter counts
                                                                 the number of bytes of trace data that is stored into the trace memory,
                                                                 regardless of whether the trace data has been formatted by the TMC or not, since
                                                                 the occurrence of the last sync request on the ATB slave interface. When the
                                                                 counter reaches 0, a sync request is sent on the ATB slave interface. Reads from
                                                                 this register return the reload value that is programmed in this register. This
                                                                 field resets to 0x0A, that is, the default sync period is 2^10 bytes. If a
                                                                 reserved value is programmed in this register field, the value 0x1B is used
                                                                 instead, and subsequent reads from this register also return 0x1B. The following
                                                                 constraints apply to the values written to the PSCount field: 0x0 -
                                                                 synchronization is disabled, 0x1-0x6 - reserved, 0x7-0x1B - synchronization
                                                                 period is 2^PSCount bytes. The smallest value 0x7 gives a sync period of 128
                                                                 bytes. The maximum allowed value 0x1B gives a sync period of 2^27 bytes, 0x1C-
                                                                 0x1F - reserved. */
#else /* Word 0 - Little Endian */
        uint32_t pscount               : 5;  /**< [  4:  0](R/W) Periodic Synchronization Count. Determines the reload value of the
                                                                 Synchronization Counter. The reload value takes effect the next time the counter
                                                                 reaches zero. When trace capture is enabled, the Synchronization Counter counts
                                                                 the number of bytes of trace data that is stored into the trace memory,
                                                                 regardless of whether the trace data has been formatted by the TMC or not, since
                                                                 the occurrence of the last sync request on the ATB slave interface. When the
                                                                 counter reaches 0, a sync request is sent on the ATB slave interface. Reads from
                                                                 this register return the reload value that is programmed in this register. This
                                                                 field resets to 0x0A, that is, the default sync period is 2^10 bytes. If a
                                                                 reserved value is programmed in this register field, the value 0x1B is used
                                                                 instead, and subsequent reads from this register also return 0x1B. The following
                                                                 constraints apply to the values written to the PSCount field: 0x0 -
                                                                 synchronization is disabled, 0x1-0x6 - reserved, 0x7-0x1B - synchronization
                                                                 period is 2^PSCount bytes. The smallest value 0x7 gives a sync period of 128
                                                                 bytes. The maximum allowed value 0x1B gives a sync period of 2^27 bytes, 0x1C-
                                                                 0x1F - reserved. */
        uint32_t embedsync             : 1;  /**< [  5:  5](R/W) Embed Frame Sync Packet in the trace stream. Setting this bit to 1 enables the
                                                                 formatter to insert frame sync packets in the trace stream at periodic
                                                                 intervals. If this bit is set and the Synchronization Counter is enabled, the
                                                                 formatter inserts a 32-bit frame sync packet in the trace stream when the
                                                                 counter reaches 0. This bit is effective only when formatting is enabled, that
                                                                 is when FFCR.EnTI=1 or FFCR.EnFt=1, and it is ignored when the formatter is in
                                                                 bypass mode. */
        uint32_t razwi_0               : 26; /**< [ 31:  6](R/W) Read-As-Zero, Writes Ignored. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_rtt_shrd_etr_pscr_s cn; */
};
typedef union cavm_rtt_shrd_etr_pscr cavm_rtt_shrd_etr_pscr_t;

#define CAVM_RTT_SHRD_ETR_PSCR CAVM_RTT_SHRD_ETR_PSCR_FUNC()
static inline uint64_t CAVM_RTT_SHRD_ETR_PSCR_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_RTT_SHRD_ETR_PSCR_FUNC(void)
{
    if (cavm_is_model(OCTEONTX_CNF10KB))
        return 0x80e000030308ll;
    __cavm_csr_fatal("RTT_SHRD_ETR_PSCR", 0, 0, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_RTT_SHRD_ETR_PSCR cavm_rtt_shrd_etr_pscr_t
#define bustype_CAVM_RTT_SHRD_ETR_PSCR CSR_TYPE_NCB32b
#define basename_CAVM_RTT_SHRD_ETR_PSCR "RTT_SHRD_ETR_PSCR"
#define busnum_CAVM_RTT_SHRD_ETR_PSCR 0
#define arguments_CAVM_RTT_SHRD_ETR_PSCR -1,-1,-1,-1

/**
 * Register (NCB32b) rtt_shrd_etr_rrd
 *
 * RTT Shrd Etr Rrd Register
 * Reading this register allows data to be read from the trace memory at the location
 * pointed to by the RRP/RRPHI registers when either in the Disabled state or operating
 * in CB or SWF1 mode. When ATB_DATA_WIDTH is 32, 64 or 128 bit wide the AXI data width
 * is the same and a memory word holds 4, 8, or 16 bytes. When ATB_DATA_WIDTH is 64 or
 * 128 bit wide multiple RRD reads must be performed to read a full memory word. When a
 * full memory width of data has been read via the RRD register, the RRP register is
 * incremented to the next memory word. When the TMC left the Disabled state and the
 * trace memory is empty, this register returns 0xFFFFFFFF. When the TMC left the
 * Disabled state and the trace memory is empty, this register returns 0xFFFFFFFF. When
 * operating in CB mode and the TMC left the Disabled state, this register returns
 * 0xFFFFFFFF in all other states except the STOPPED state. When operating in SWF2
 * mode, this register also returns 0xFFFFFFFF. When the MemErr bit in the STS Register
 * is set, reading this register returns an error response on the APB slave interface.
 */
union cavm_rtt_shrd_etr_rrd
{
    uint32_t u;
    struct cavm_rtt_shrd_etr_rrd_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t rrd                   : 32; /**< [ 31:  0](RO) Returns the data read from trace memory. */
#else /* Word 0 - Little Endian */
        uint32_t rrd                   : 32; /**< [ 31:  0](RO) Returns the data read from trace memory. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_rtt_shrd_etr_rrd_s cn; */
};
typedef union cavm_rtt_shrd_etr_rrd cavm_rtt_shrd_etr_rrd_t;

#define CAVM_RTT_SHRD_ETR_RRD CAVM_RTT_SHRD_ETR_RRD_FUNC()
static inline uint64_t CAVM_RTT_SHRD_ETR_RRD_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_RTT_SHRD_ETR_RRD_FUNC(void)
{
    if (cavm_is_model(OCTEONTX_CNF10KB))
        return 0x80e000030010ll;
    __cavm_csr_fatal("RTT_SHRD_ETR_RRD", 0, 0, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_RTT_SHRD_ETR_RRD cavm_rtt_shrd_etr_rrd_t
#define bustype_CAVM_RTT_SHRD_ETR_RRD CSR_TYPE_NCB32b
#define basename_CAVM_RTT_SHRD_ETR_RRD "RTT_SHRD_ETR_RRD"
#define busnum_CAVM_RTT_SHRD_ETR_RRD 0
#define arguments_CAVM_RTT_SHRD_ETR_RRD -1,-1,-1,-1

/**
 * Register (NCB32b) rtt_shrd_etr_rrp
 *
 * RTT Shrd Etr Rrp Register
 * The RAM Read Pointer Register contains the value of the read pointer that is used to
 * read entries from trace memory over the APB interface. Software must program it
 * before enabling trace capture. Software must program it before enabling trace
 * capture.
 */
union cavm_rtt_shrd_etr_rrp
{
    uint32_t u;
    struct cavm_rtt_shrd_etr_rrp_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t rrp                   : 32; /**< [ 31:  0](R/W) This register represents the lower 32 bits of the AXI address that is used to
                                                                 access the trace memory with RRD read acesses. When ATB_DATA_WIDTH is 32, 64 or
                                                                 128 bit wide the AXI data width is the same and a memory word holds 4, 8, or 16
                                                                 bytes. When a full memory width of data has been read via the RRD register, the
                                                                 RRP register is incremented to the next memory word. Some of the lower bits have
                                                                 access type RAZ/WI. The number of bits is calculated as log2(ATB_DATA_WIDTH/8).
                                                                 When the AXI_ADDR_WIDTH is 0, this register is reserved and access type is
                                                                 RAZ/WI. */
#else /* Word 0 - Little Endian */
        uint32_t rrp                   : 32; /**< [ 31:  0](R/W) This register represents the lower 32 bits of the AXI address that is used to
                                                                 access the trace memory with RRD read acesses. When ATB_DATA_WIDTH is 32, 64 or
                                                                 128 bit wide the AXI data width is the same and a memory word holds 4, 8, or 16
                                                                 bytes. When a full memory width of data has been read via the RRD register, the
                                                                 RRP register is incremented to the next memory word. Some of the lower bits have
                                                                 access type RAZ/WI. The number of bits is calculated as log2(ATB_DATA_WIDTH/8).
                                                                 When the AXI_ADDR_WIDTH is 0, this register is reserved and access type is
                                                                 RAZ/WI. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_rtt_shrd_etr_rrp_s cn; */
};
typedef union cavm_rtt_shrd_etr_rrp cavm_rtt_shrd_etr_rrp_t;

#define CAVM_RTT_SHRD_ETR_RRP CAVM_RTT_SHRD_ETR_RRP_FUNC()
static inline uint64_t CAVM_RTT_SHRD_ETR_RRP_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_RTT_SHRD_ETR_RRP_FUNC(void)
{
    if (cavm_is_model(OCTEONTX_CNF10KB))
        return 0x80e000030014ll;
    __cavm_csr_fatal("RTT_SHRD_ETR_RRP", 0, 0, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_RTT_SHRD_ETR_RRP cavm_rtt_shrd_etr_rrp_t
#define bustype_CAVM_RTT_SHRD_ETR_RRP CSR_TYPE_NCB32b
#define basename_CAVM_RTT_SHRD_ETR_RRP "RTT_SHRD_ETR_RRP"
#define busnum_CAVM_RTT_SHRD_ETR_RRP 0
#define arguments_CAVM_RTT_SHRD_ETR_RRP -1,-1,-1,-1

/**
 * Register (NCB32b) rtt_shrd_etr_rrphi
 *
 * RTT Shrd Etr Rrphi Register
 * The RAM Read Pointer High register contains address bits \>= bit[32] of the read
 * pointer that is used to read entries from trace memory over the APB interface.
 * Software must program it before enabling trace capture.
 */
union cavm_rtt_shrd_etr_rrphi
{
    uint32_t u;
    struct cavm_rtt_shrd_etr_rrphi_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t razwi_0               : 24; /**< [ 31:  8](R/W) Read-As-Zero, Writes Ignored. */
        uint32_t rrphi                 : 8;  /**< [  7:  0](R/W) RAM Read Pointer High. Bits [32] and above of the RAM read pointer. */
#else /* Word 0 - Little Endian */
        uint32_t rrphi                 : 8;  /**< [  7:  0](R/W) RAM Read Pointer High. Bits [32] and above of the RAM read pointer. */
        uint32_t razwi_0               : 24; /**< [ 31:  8](R/W) Read-As-Zero, Writes Ignored. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_rtt_shrd_etr_rrphi_s cn; */
};
typedef union cavm_rtt_shrd_etr_rrphi cavm_rtt_shrd_etr_rrphi_t;

#define CAVM_RTT_SHRD_ETR_RRPHI CAVM_RTT_SHRD_ETR_RRPHI_FUNC()
static inline uint64_t CAVM_RTT_SHRD_ETR_RRPHI_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_RTT_SHRD_ETR_RRPHI_FUNC(void)
{
    if (cavm_is_model(OCTEONTX_CNF10KB))
        return 0x80e000030038ll;
    __cavm_csr_fatal("RTT_SHRD_ETR_RRPHI", 0, 0, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_RTT_SHRD_ETR_RRPHI cavm_rtt_shrd_etr_rrphi_t
#define bustype_CAVM_RTT_SHRD_ETR_RRPHI CSR_TYPE_NCB32b
#define basename_CAVM_RTT_SHRD_ETR_RRPHI "RTT_SHRD_ETR_RRPHI"
#define busnum_CAVM_RTT_SHRD_ETR_RRPHI 0
#define arguments_CAVM_RTT_SHRD_ETR_RRPHI -1,-1,-1,-1

/**
 * Register (NCB32b) rtt_shrd_etr_rsz
 *
 * RTT Shrd Etr Rsz Register
 * Defines the size of trace memory in units of 32-bit words.
 */
union cavm_rtt_shrd_etr_rsz
{
    uint32_t u;
    struct cavm_rtt_shrd_etr_rsz_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t razwi_0               : 1;  /**< [ 31: 31](R/W) Read-As-Zero, Writes Ignored. */
        uint32_t rsz                   : 31; /**< [ 30:  0](R/W) RAM size. Indicates the size of trace memory in 32-bit words. The size of the
                                                                 trace buffer must be a multiple of the AXI data width. This can be found by
                                                                 looking at the MEMWIDTH field in the DEVID Register. The maximum trace buffer
                                                                 size permitted is 4GB. The minimum trace buffer size enabled in Software FIFO
                                                                 mode and Hardware FIFO mode is 512 bytes. The minimum trace buffer size enabled
                                                                 in Circular Buffer mode is one AXI dataword. Returns the programmed value on
                                                                 reading. The burst length programmed in the AXICTL Register, WrBurstLen, must be
                                                                 compatible with the trace buffer size and the AXI data width so that the total
                                                                 number of bytes of data transferred in a burst is not greater than the trace
                                                                 buffer size. Programming an incompatible burst length results in UNPREDICTABLE
                                                                 behavior. Modifying this register when the TMCReady bit, STS Register, 0x00C is
                                                                 clear, or the TraceCaptEn bit, CTL Register, 0x020 is set, results in
                                                                 UNPREDICTABLE behavior. */
#else /* Word 0 - Little Endian */
        uint32_t rsz                   : 31; /**< [ 30:  0](R/W) RAM size. Indicates the size of trace memory in 32-bit words. The size of the
                                                                 trace buffer must be a multiple of the AXI data width. This can be found by
                                                                 looking at the MEMWIDTH field in the DEVID Register. The maximum trace buffer
                                                                 size permitted is 4GB. The minimum trace buffer size enabled in Software FIFO
                                                                 mode and Hardware FIFO mode is 512 bytes. The minimum trace buffer size enabled
                                                                 in Circular Buffer mode is one AXI dataword. Returns the programmed value on
                                                                 reading. The burst length programmed in the AXICTL Register, WrBurstLen, must be
                                                                 compatible with the trace buffer size and the AXI data width so that the total
                                                                 number of bytes of data transferred in a burst is not greater than the trace
                                                                 buffer size. Programming an incompatible burst length results in UNPREDICTABLE
                                                                 behavior. Modifying this register when the TMCReady bit, STS Register, 0x00C is
                                                                 clear, or the TraceCaptEn bit, CTL Register, 0x020 is set, results in
                                                                 UNPREDICTABLE behavior. */
        uint32_t razwi_0               : 1;  /**< [ 31: 31](R/W) Read-As-Zero, Writes Ignored. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_rtt_shrd_etr_rsz_s cn; */
};
typedef union cavm_rtt_shrd_etr_rsz cavm_rtt_shrd_etr_rsz_t;

#define CAVM_RTT_SHRD_ETR_RSZ CAVM_RTT_SHRD_ETR_RSZ_FUNC()
static inline uint64_t CAVM_RTT_SHRD_ETR_RSZ_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_RTT_SHRD_ETR_RSZ_FUNC(void)
{
    if (cavm_is_model(OCTEONTX_CNF10KB))
        return 0x80e000030004ll;
    __cavm_csr_fatal("RTT_SHRD_ETR_RSZ", 0, 0, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_RTT_SHRD_ETR_RSZ cavm_rtt_shrd_etr_rsz_t
#define bustype_CAVM_RTT_SHRD_ETR_RSZ CSR_TYPE_NCB32b
#define basename_CAVM_RTT_SHRD_ETR_RSZ "RTT_SHRD_ETR_RSZ"
#define busnum_CAVM_RTT_SHRD_ETR_RSZ 0
#define arguments_CAVM_RTT_SHRD_ETR_RSZ -1,-1,-1,-1

/**
 * Register (NCB32b) rtt_shrd_etr_rurp
 *
 * RTT Shrd Etr Rurp Register
 * The RURP register enables software to inform the TMC of the amount of trace data
 * that is extracted directly from system memory in SWF2 mode. Writes to this register
 * are ignored when the TMC is in Disabled state or when not in SWF2 mode.
 */
union cavm_rtt_shrd_etr_rurp
{
    uint32_t u;
    struct cavm_rtt_shrd_etr_rurp_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t razwi_0               : 11; /**< [ 31: 21](WO) Read-As-Zero, Writes Ignored. */
        uint32_t rurp                  : 21; /**< [ 20:  0](WO) RAM Update Read Pointer. A write to the RURP register causes the TMC to update
                                                                 the RAM Read Pointer, both the RRP and RRPHI registers, based on the value that
                                                                 is written to it. RURP allows up to 1MB of data to be extracted in a single
                                                                 chunk. Reads always return 0x0. The following constraints apply to the write
                                                                 values: 0x000000 - no effect, 0x000010-0x100000 - increment RRP by this value,
                                                                 0x100010-0x1FFFFF - reserved. The programmed value must also be aligned to the
                                                                 Trace Memory Data Width and the Frame Width. Programming an unaligned or
                                                                 reserved value results in UNPREDICTABLE behavior. */
#else /* Word 0 - Little Endian */
        uint32_t rurp                  : 21; /**< [ 20:  0](WO) RAM Update Read Pointer. A write to the RURP register causes the TMC to update
                                                                 the RAM Read Pointer, both the RRP and RRPHI registers, based on the value that
                                                                 is written to it. RURP allows up to 1MB of data to be extracted in a single
                                                                 chunk. Reads always return 0x0. The following constraints apply to the write
                                                                 values: 0x000000 - no effect, 0x000010-0x100000 - increment RRP by this value,
                                                                 0x100010-0x1FFFFF - reserved. The programmed value must also be aligned to the
                                                                 Trace Memory Data Width and the Frame Width. Programming an unaligned or
                                                                 reserved value results in UNPREDICTABLE behavior. */
        uint32_t razwi_0               : 11; /**< [ 31: 21](WO) Read-As-Zero, Writes Ignored. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_rtt_shrd_etr_rurp_s cn; */
};
typedef union cavm_rtt_shrd_etr_rurp cavm_rtt_shrd_etr_rurp_t;

#define CAVM_RTT_SHRD_ETR_RURP CAVM_RTT_SHRD_ETR_RURP_FUNC()
static inline uint64_t CAVM_RTT_SHRD_ETR_RURP_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_RTT_SHRD_ETR_RURP_FUNC(void)
{
    if (cavm_is_model(OCTEONTX_CNF10KB))
        return 0x80e000030120ll;
    __cavm_csr_fatal("RTT_SHRD_ETR_RURP", 0, 0, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_RTT_SHRD_ETR_RURP cavm_rtt_shrd_etr_rurp_t
#define bustype_CAVM_RTT_SHRD_ETR_RURP CSR_TYPE_NCB32b
#define basename_CAVM_RTT_SHRD_ETR_RURP "RTT_SHRD_ETR_RURP"
#define busnum_CAVM_RTT_SHRD_ETR_RURP 0
#define arguments_CAVM_RTT_SHRD_ETR_RURP -1,-1,-1,-1

/**
 * Register (NCB32b) rtt_shrd_etr_rwd
 *
 * RTT Shrd Etr Rwd Register
 * The RAM Write Data register enables testing of trace memory connectivity to the TMC.
 * Writing this register allows data to be written to the trace memory at the location
 * pointed to by the RWP/RWPHI registers when in the Disabled state. When
 * ATB_DATA_WIDTH is 32, 64 or 128 bit wide the AXI data width is the same and a memory
 * word holds 4, 8, or 16 bytes. When ATB_DATA_WIDTH is 64 or 128 bit wide multiple RWD
 * writes must be performed to write a full memory word. When a full memory width of
 * data has been written via the RWD register, the data is written to the trace memory
 * and the RWP register is incremented to the next memory word.  When the STS.MemErr
 * bit is set, writing to this register returns an error response on the APB interface
 * and the write data is discarded.
 */
union cavm_rtt_shrd_etr_rwd
{
    uint32_t u;
    struct cavm_rtt_shrd_etr_rwd_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t rwd                   : 32; /**< [ 31:  0](WO) Data written to this register is placed in the trace memory. */
#else /* Word 0 - Little Endian */
        uint32_t rwd                   : 32; /**< [ 31:  0](WO) Data written to this register is placed in the trace memory. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_rtt_shrd_etr_rwd_s cn; */
};
typedef union cavm_rtt_shrd_etr_rwd cavm_rtt_shrd_etr_rwd_t;

#define CAVM_RTT_SHRD_ETR_RWD CAVM_RTT_SHRD_ETR_RWD_FUNC()
static inline uint64_t CAVM_RTT_SHRD_ETR_RWD_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_RTT_SHRD_ETR_RWD_FUNC(void)
{
    if (cavm_is_model(OCTEONTX_CNF10KB))
        return 0x80e000030024ll;
    __cavm_csr_fatal("RTT_SHRD_ETR_RWD", 0, 0, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_RTT_SHRD_ETR_RWD cavm_rtt_shrd_etr_rwd_t
#define bustype_CAVM_RTT_SHRD_ETR_RWD CSR_TYPE_NCB32b
#define basename_CAVM_RTT_SHRD_ETR_RWD "RTT_SHRD_ETR_RWD"
#define busnum_CAVM_RTT_SHRD_ETR_RWD 0
#define arguments_CAVM_RTT_SHRD_ETR_RWD -1,-1,-1,-1

/**
 * Register (NCB32b) rtt_shrd_etr_rwp
 *
 * RTT Shrd Etr Rwp Register
 * RAM Write Pointer Register sets the write pointer that is used to write entries into
 * the trace memory. Software must program it before enabling trace capture.
 */
union cavm_rtt_shrd_etr_rwp
{
    uint32_t u;
    struct cavm_rtt_shrd_etr_rwp_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t rwp                   : 32; /**< [ 31:  0](R/W) This register represents the lower 32 bits of the AXI address that is used to
                                                                 access the trace memory with RRD read acesses. When ATB_DATA_WIDTH is 32, 64 or
                                                                 128 bit wide the AXI data width is the same and a memory word holds 4, 8, or 16
                                                                 bytes. When a full memory width of data has been written via the RWD register,
                                                                 the RWP register is incremented to the next memory word. Some of the lower bits
                                                                 have access type RAZ/WI. The number of bits is calculated as
                                                                 log2(ATB_DATA_WIDTH/8). When the AXI_ADDR_WIDTH is 0, this register is reserved
                                                                 and access type is RAZ/WI. */
#else /* Word 0 - Little Endian */
        uint32_t rwp                   : 32; /**< [ 31:  0](R/W) This register represents the lower 32 bits of the AXI address that is used to
                                                                 access the trace memory with RRD read acesses. When ATB_DATA_WIDTH is 32, 64 or
                                                                 128 bit wide the AXI data width is the same and a memory word holds 4, 8, or 16
                                                                 bytes. When a full memory width of data has been written via the RWD register,
                                                                 the RWP register is incremented to the next memory word. Some of the lower bits
                                                                 have access type RAZ/WI. The number of bits is calculated as
                                                                 log2(ATB_DATA_WIDTH/8). When the AXI_ADDR_WIDTH is 0, this register is reserved
                                                                 and access type is RAZ/WI. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_rtt_shrd_etr_rwp_s cn; */
};
typedef union cavm_rtt_shrd_etr_rwp cavm_rtt_shrd_etr_rwp_t;

#define CAVM_RTT_SHRD_ETR_RWP CAVM_RTT_SHRD_ETR_RWP_FUNC()
static inline uint64_t CAVM_RTT_SHRD_ETR_RWP_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_RTT_SHRD_ETR_RWP_FUNC(void)
{
    if (cavm_is_model(OCTEONTX_CNF10KB))
        return 0x80e000030018ll;
    __cavm_csr_fatal("RTT_SHRD_ETR_RWP", 0, 0, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_RTT_SHRD_ETR_RWP cavm_rtt_shrd_etr_rwp_t
#define bustype_CAVM_RTT_SHRD_ETR_RWP CSR_TYPE_NCB32b
#define basename_CAVM_RTT_SHRD_ETR_RWP "RTT_SHRD_ETR_RWP"
#define busnum_CAVM_RTT_SHRD_ETR_RWP 0
#define arguments_CAVM_RTT_SHRD_ETR_RWP -1,-1,-1,-1

/**
 * Register (NCB32b) rtt_shrd_etr_rwphi
 *
 * RTT Shrd Etr Rwphi Register
 * The RAM Write Pointer High register sets bits \>= bit[32] of the write pointer that
 * is used to write entries into the trace memory. Software must program it before
 * enabling trace capture.
 */
union cavm_rtt_shrd_etr_rwphi
{
    uint32_t u;
    struct cavm_rtt_shrd_etr_rwphi_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t razwi_0               : 24; /**< [ 31:  8](R/W) Read-As-Zero, Writes Ignored. */
        uint32_t rwphi                 : 8;  /**< [  7:  0](R/W) RAM Write Pointer High. Bits [32] and above of the RAM write pointer. */
#else /* Word 0 - Little Endian */
        uint32_t rwphi                 : 8;  /**< [  7:  0](R/W) RAM Write Pointer High. Bits [32] and above of the RAM write pointer. */
        uint32_t razwi_0               : 24; /**< [ 31:  8](R/W) Read-As-Zero, Writes Ignored. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_rtt_shrd_etr_rwphi_s cn; */
};
typedef union cavm_rtt_shrd_etr_rwphi cavm_rtt_shrd_etr_rwphi_t;

#define CAVM_RTT_SHRD_ETR_RWPHI CAVM_RTT_SHRD_ETR_RWPHI_FUNC()
static inline uint64_t CAVM_RTT_SHRD_ETR_RWPHI_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_RTT_SHRD_ETR_RWPHI_FUNC(void)
{
    if (cavm_is_model(OCTEONTX_CNF10KB))
        return 0x80e00003003cll;
    __cavm_csr_fatal("RTT_SHRD_ETR_RWPHI", 0, 0, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_RTT_SHRD_ETR_RWPHI cavm_rtt_shrd_etr_rwphi_t
#define bustype_CAVM_RTT_SHRD_ETR_RWPHI CSR_TYPE_NCB32b
#define basename_CAVM_RTT_SHRD_ETR_RWPHI "RTT_SHRD_ETR_RWPHI"
#define busnum_CAVM_RTT_SHRD_ETR_RWPHI 0
#define arguments_CAVM_RTT_SHRD_ETR_RWPHI -1,-1,-1,-1

/**
 * Register (NCB32b) rtt_shrd_etr_sts
 *
 * RTT Shrd Etr Sts Register
 * Indicates the status of the Trace Memory Controller. After a reset, software must
 * ignore all the fields of this register except STS.TMCReady. The other fields have
 * meaning only when the TMC has left the Disabled state. Writes to all RO fields of
 * this register are ignored.
 */
union cavm_rtt_shrd_etr_sts
{
    uint32_t u;
    struct cavm_rtt_shrd_etr_sts_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t razwi_0               : 26; /**< [ 31:  6](R/W) Read-As-Zero, Writes Ignored. */
        uint32_t memerr                : 1;  /**< [  5:  5](R/W) Memory error status. This bit indicates whether an error has occurred on the AXI
                                                                 master interface. The error could be due to an error response received from the
                                                                 connected AXI slave or due to attempted AXI transfers without proper
                                                                 authentication. */
        uint32_t empty                 : 1;  /**< [  4:  4](RO) Trace buffer empty. If set, this bit indicates that the trace memory does not
                                                                 contain any valid trace data. However, this does not mean that the pipeline
                                                                 stages within the TMC are empty. To determine whether the internal pipeline
                                                                 stages are empty, the software must read the STS.TMCReady bit. This bit is valid
                                                                 only when TraceCaptEn is HIGH. This bit reads as zero when TraceCaptEn is LOW.
                                                                 Note, that in Circular Buffer mode, it is possible that the Empty bit and the
                                                                 Full bit in this register are one at the same time because the Full bit in this
                                                                 mode, when set, does not clear until TraceCaptEn is set. */
        uint32_t ftempty               : 1;  /**< [  3:  3](RO) Trace capture has been completed and all captured trace data has been written to
                                                                 the trace memory, set when trace capture has stopped */
        uint32_t tmcready              : 1;  /**< [  2:  2](RO) Trace capture has been completed, all captured trace data has been written to
                                                                 the trace memory, and reading from trace memory completed as a result of final
                                                                 AXI write completing */
        uint32_t triggered             : 1;  /**< [  1:  1](RO) TMC triggered. This bit is set when trace capture is in progress and the TMC has
                                                                 detected a trigger event. This bit is cleared to 0 when leaving the Disabled
                                                                 state and retains its value when entering the Disabled state. A trigger event is
                                                                 when the TMC has written a set number of data words, as programmed in the TRG
                                                                 register, into the trace memory after a rising edge of trigin input, or a
                                                                 trigger packet (atid_s = 0x7D) is received in the input trace. */
        uint32_t full                  : 1;  /**< [  0:  0](R/W) Trace memory full. This bit helps in determining the amount of valid data
                                                                 present in the trace memory. Writes to this bit are allowed in Disabled state.
                                                                 However, it is not affected by the reprogramming of pointer registers in this
                                                                 state. In Circular Buffer mode, this flag is set when the RAM write pointer
                                                                 wraps around the top of the buffer, and remains set until the TraceCaptEn bit is
                                                                 cleared and set. In Software FIFO mode, this flag indicates that the current
                                                                 space in the trace memory is less than or equal to the value programmed in the
                                                                 BUFWM Register, that is, Fill level \>= MEM_SIZE - BUFWM. The FULL output from
                                                                 the TMC reflects the value of this register bit, except when the Integration
                                                                 Mode bit in the ITCTRL Register, 0xF00, is set. */
#else /* Word 0 - Little Endian */
        uint32_t full                  : 1;  /**< [  0:  0](R/W) Trace memory full. This bit helps in determining the amount of valid data
                                                                 present in the trace memory. Writes to this bit are allowed in Disabled state.
                                                                 However, it is not affected by the reprogramming of pointer registers in this
                                                                 state. In Circular Buffer mode, this flag is set when the RAM write pointer
                                                                 wraps around the top of the buffer, and remains set until the TraceCaptEn bit is
                                                                 cleared and set. In Software FIFO mode, this flag indicates that the current
                                                                 space in the trace memory is less than or equal to the value programmed in the
                                                                 BUFWM Register, that is, Fill level \>= MEM_SIZE - BUFWM. The FULL output from
                                                                 the TMC reflects the value of this register bit, except when the Integration
                                                                 Mode bit in the ITCTRL Register, 0xF00, is set. */
        uint32_t triggered             : 1;  /**< [  1:  1](RO) TMC triggered. This bit is set when trace capture is in progress and the TMC has
                                                                 detected a trigger event. This bit is cleared to 0 when leaving the Disabled
                                                                 state and retains its value when entering the Disabled state. A trigger event is
                                                                 when the TMC has written a set number of data words, as programmed in the TRG
                                                                 register, into the trace memory after a rising edge of trigin input, or a
                                                                 trigger packet (atid_s = 0x7D) is received in the input trace. */
        uint32_t tmcready              : 1;  /**< [  2:  2](RO) Trace capture has been completed, all captured trace data has been written to
                                                                 the trace memory, and reading from trace memory completed as a result of final
                                                                 AXI write completing */
        uint32_t ftempty               : 1;  /**< [  3:  3](RO) Trace capture has been completed and all captured trace data has been written to
                                                                 the trace memory, set when trace capture has stopped */
        uint32_t empty                 : 1;  /**< [  4:  4](RO) Trace buffer empty. If set, this bit indicates that the trace memory does not
                                                                 contain any valid trace data. However, this does not mean that the pipeline
                                                                 stages within the TMC are empty. To determine whether the internal pipeline
                                                                 stages are empty, the software must read the STS.TMCReady bit. This bit is valid
                                                                 only when TraceCaptEn is HIGH. This bit reads as zero when TraceCaptEn is LOW.
                                                                 Note, that in Circular Buffer mode, it is possible that the Empty bit and the
                                                                 Full bit in this register are one at the same time because the Full bit in this
                                                                 mode, when set, does not clear until TraceCaptEn is set. */
        uint32_t memerr                : 1;  /**< [  5:  5](R/W) Memory error status. This bit indicates whether an error has occurred on the AXI
                                                                 master interface. The error could be due to an error response received from the
                                                                 connected AXI slave or due to attempted AXI transfers without proper
                                                                 authentication. */
        uint32_t razwi_0               : 26; /**< [ 31:  6](R/W) Read-As-Zero, Writes Ignored. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_rtt_shrd_etr_sts_s cn; */
};
typedef union cavm_rtt_shrd_etr_sts cavm_rtt_shrd_etr_sts_t;

#define CAVM_RTT_SHRD_ETR_STS CAVM_RTT_SHRD_ETR_STS_FUNC()
static inline uint64_t CAVM_RTT_SHRD_ETR_STS_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_RTT_SHRD_ETR_STS_FUNC(void)
{
    if (cavm_is_model(OCTEONTX_CNF10KB))
        return 0x80e00003000cll;
    __cavm_csr_fatal("RTT_SHRD_ETR_STS", 0, 0, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_RTT_SHRD_ETR_STS cavm_rtt_shrd_etr_sts_t
#define bustype_CAVM_RTT_SHRD_ETR_STS CSR_TYPE_NCB32b
#define basename_CAVM_RTT_SHRD_ETR_STS "RTT_SHRD_ETR_STS"
#define busnum_CAVM_RTT_SHRD_ETR_STS 0
#define arguments_CAVM_RTT_SHRD_ETR_STS -1,-1,-1,-1

/**
 * Register (NCB32b) rtt_shrd_etr_trg
 *
 * RTT Shrd Etr Trg Register
 * In Circular Buffer mode, the Trigger Counter register specifies the number of 32-bit
 * words to capture in the trace memory, after detection of either a rising edge on the
 * trigin input or a trigger packet in the incoming trace stream, that is, where atid_s
 * = 0x7D. The value programmed must be aligned to the frame length of 128 bits.
 * Software must program this register before leaving Disabled state.
 */
union cavm_rtt_shrd_etr_trg
{
    uint32_t u;
    struct cavm_rtt_shrd_etr_trg_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t trg                   : 32; /**< [ 31:  0](R/W) Trigger count. This count represents the number of 32-bit words of trace that
                                                                 are captured between a trigger packet and a trigger event. The lowest two bits
                                                                 have access type RAZ/WI. */
#else /* Word 0 - Little Endian */
        uint32_t trg                   : 32; /**< [ 31:  0](R/W) Trigger count. This count represents the number of 32-bit words of trace that
                                                                 are captured between a trigger packet and a trigger event. The lowest two bits
                                                                 have access type RAZ/WI. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_rtt_shrd_etr_trg_s cn; */
};
typedef union cavm_rtt_shrd_etr_trg cavm_rtt_shrd_etr_trg_t;

#define CAVM_RTT_SHRD_ETR_TRG CAVM_RTT_SHRD_ETR_TRG_FUNC()
static inline uint64_t CAVM_RTT_SHRD_ETR_TRG_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_RTT_SHRD_ETR_TRG_FUNC(void)
{
    if (cavm_is_model(OCTEONTX_CNF10KB))
        return 0x80e00003001cll;
    __cavm_csr_fatal("RTT_SHRD_ETR_TRG", 0, 0, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_RTT_SHRD_ETR_TRG cavm_rtt_shrd_etr_trg_t
#define bustype_CAVM_RTT_SHRD_ETR_TRG CSR_TYPE_NCB32b
#define basename_CAVM_RTT_SHRD_ETR_TRG "RTT_SHRD_ETR_TRG"
#define busnum_CAVM_RTT_SHRD_ETR_TRG 0
#define arguments_CAVM_RTT_SHRD_ETR_TRG -1,-1,-1,-1

/**
 * Register (NCB32b) rtt_shrd_funnel_authstatus
 *
 * RTT Shrd Funnel Authstatus Register
 * Reports the current status of the authentication control signals.
 */
union cavm_rtt_shrd_funnel_authstatus
{
    uint32_t u;
    struct cavm_rtt_shrd_funnel_authstatus_s
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
    /* struct cavm_rtt_shrd_funnel_authstatus_s cn; */
};
typedef union cavm_rtt_shrd_funnel_authstatus cavm_rtt_shrd_funnel_authstatus_t;

#define CAVM_RTT_SHRD_FUNNEL_AUTHSTATUS CAVM_RTT_SHRD_FUNNEL_AUTHSTATUS_FUNC()
static inline uint64_t CAVM_RTT_SHRD_FUNNEL_AUTHSTATUS_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_RTT_SHRD_FUNNEL_AUTHSTATUS_FUNC(void)
{
    if (cavm_is_model(OCTEONTX_CNF10KB))
        return 0x80e000010fb8ll;
    __cavm_csr_fatal("RTT_SHRD_FUNNEL_AUTHSTATUS", 0, 0, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_RTT_SHRD_FUNNEL_AUTHSTATUS cavm_rtt_shrd_funnel_authstatus_t
#define bustype_CAVM_RTT_SHRD_FUNNEL_AUTHSTATUS CSR_TYPE_NCB32b
#define basename_CAVM_RTT_SHRD_FUNNEL_AUTHSTATUS "RTT_SHRD_FUNNEL_AUTHSTATUS"
#define busnum_CAVM_RTT_SHRD_FUNNEL_AUTHSTATUS 0
#define arguments_CAVM_RTT_SHRD_FUNNEL_AUTHSTATUS -1,-1,-1,-1

/**
 * Register (NCB32b) rtt_shrd_funnel_cidr0
 *
 * RTT Shrd Funnel Cidr0 Register
 * The CIDR0 register is part of the set of component identification registers.
 */
union cavm_rtt_shrd_funnel_cidr0
{
    uint32_t u;
    struct cavm_rtt_shrd_funnel_cidr0_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t reserved_8_31         : 24;
        uint32_t prmbl_0               : 8;  /**< [  7:  0](RO) Preamble. Returns 0x0D. */
#else /* Word 0 - Little Endian */
        uint32_t prmbl_0               : 8;  /**< [  7:  0](RO) Preamble. Returns 0x0D. */
        uint32_t reserved_8_31         : 24;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_rtt_shrd_funnel_cidr0_s cn; */
};
typedef union cavm_rtt_shrd_funnel_cidr0 cavm_rtt_shrd_funnel_cidr0_t;

#define CAVM_RTT_SHRD_FUNNEL_CIDR0 CAVM_RTT_SHRD_FUNNEL_CIDR0_FUNC()
static inline uint64_t CAVM_RTT_SHRD_FUNNEL_CIDR0_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_RTT_SHRD_FUNNEL_CIDR0_FUNC(void)
{
    if (cavm_is_model(OCTEONTX_CNF10KB))
        return 0x80e000010ff0ll;
    __cavm_csr_fatal("RTT_SHRD_FUNNEL_CIDR0", 0, 0, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_RTT_SHRD_FUNNEL_CIDR0 cavm_rtt_shrd_funnel_cidr0_t
#define bustype_CAVM_RTT_SHRD_FUNNEL_CIDR0 CSR_TYPE_NCB32b
#define basename_CAVM_RTT_SHRD_FUNNEL_CIDR0 "RTT_SHRD_FUNNEL_CIDR0"
#define busnum_CAVM_RTT_SHRD_FUNNEL_CIDR0 0
#define arguments_CAVM_RTT_SHRD_FUNNEL_CIDR0 -1,-1,-1,-1

/**
 * Register (NCB32b) rtt_shrd_funnel_cidr1
 *
 * RTT Shrd Funnel Cidr1 Register
 * The CIDR1 register is part of the set of component identification registers.
 */
union cavm_rtt_shrd_funnel_cidr1
{
    uint32_t u;
    struct cavm_rtt_shrd_funnel_cidr1_s
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
    /* struct cavm_rtt_shrd_funnel_cidr1_s cn; */
};
typedef union cavm_rtt_shrd_funnel_cidr1 cavm_rtt_shrd_funnel_cidr1_t;

#define CAVM_RTT_SHRD_FUNNEL_CIDR1 CAVM_RTT_SHRD_FUNNEL_CIDR1_FUNC()
static inline uint64_t CAVM_RTT_SHRD_FUNNEL_CIDR1_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_RTT_SHRD_FUNNEL_CIDR1_FUNC(void)
{
    if (cavm_is_model(OCTEONTX_CNF10KB))
        return 0x80e000010ff4ll;
    __cavm_csr_fatal("RTT_SHRD_FUNNEL_CIDR1", 0, 0, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_RTT_SHRD_FUNNEL_CIDR1 cavm_rtt_shrd_funnel_cidr1_t
#define bustype_CAVM_RTT_SHRD_FUNNEL_CIDR1 CSR_TYPE_NCB32b
#define basename_CAVM_RTT_SHRD_FUNNEL_CIDR1 "RTT_SHRD_FUNNEL_CIDR1"
#define busnum_CAVM_RTT_SHRD_FUNNEL_CIDR1 0
#define arguments_CAVM_RTT_SHRD_FUNNEL_CIDR1 -1,-1,-1,-1

/**
 * Register (NCB32b) rtt_shrd_funnel_cidr2
 *
 * RTT Shrd Funnel Cidr2 Register
 * The CIDR2 register is part of the set of component identification registers.
 */
union cavm_rtt_shrd_funnel_cidr2
{
    uint32_t u;
    struct cavm_rtt_shrd_funnel_cidr2_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t reserved_8_31         : 24;
        uint32_t prmbl_2               : 8;  /**< [  7:  0](RO) Preamble. Returns 0x05. */
#else /* Word 0 - Little Endian */
        uint32_t prmbl_2               : 8;  /**< [  7:  0](RO) Preamble. Returns 0x05. */
        uint32_t reserved_8_31         : 24;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_rtt_shrd_funnel_cidr2_s cn; */
};
typedef union cavm_rtt_shrd_funnel_cidr2 cavm_rtt_shrd_funnel_cidr2_t;

#define CAVM_RTT_SHRD_FUNNEL_CIDR2 CAVM_RTT_SHRD_FUNNEL_CIDR2_FUNC()
static inline uint64_t CAVM_RTT_SHRD_FUNNEL_CIDR2_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_RTT_SHRD_FUNNEL_CIDR2_FUNC(void)
{
    if (cavm_is_model(OCTEONTX_CNF10KB))
        return 0x80e000010ff8ll;
    __cavm_csr_fatal("RTT_SHRD_FUNNEL_CIDR2", 0, 0, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_RTT_SHRD_FUNNEL_CIDR2 cavm_rtt_shrd_funnel_cidr2_t
#define bustype_CAVM_RTT_SHRD_FUNNEL_CIDR2 CSR_TYPE_NCB32b
#define basename_CAVM_RTT_SHRD_FUNNEL_CIDR2 "RTT_SHRD_FUNNEL_CIDR2"
#define busnum_CAVM_RTT_SHRD_FUNNEL_CIDR2 0
#define arguments_CAVM_RTT_SHRD_FUNNEL_CIDR2 -1,-1,-1,-1

/**
 * Register (NCB32b) rtt_shrd_funnel_cidr3
 *
 * RTT Shrd Funnel Cidr3 Register
 * The CIDR3 register is part of the set of component identification registers.
 */
union cavm_rtt_shrd_funnel_cidr3
{
    uint32_t u;
    struct cavm_rtt_shrd_funnel_cidr3_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t reserved_8_31         : 24;
        uint32_t prmbl_3               : 8;  /**< [  7:  0](RO) Preamble. Returns 0xB1. */
#else /* Word 0 - Little Endian */
        uint32_t prmbl_3               : 8;  /**< [  7:  0](RO) Preamble. Returns 0xB1. */
        uint32_t reserved_8_31         : 24;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_rtt_shrd_funnel_cidr3_s cn; */
};
typedef union cavm_rtt_shrd_funnel_cidr3 cavm_rtt_shrd_funnel_cidr3_t;

#define CAVM_RTT_SHRD_FUNNEL_CIDR3 CAVM_RTT_SHRD_FUNNEL_CIDR3_FUNC()
static inline uint64_t CAVM_RTT_SHRD_FUNNEL_CIDR3_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_RTT_SHRD_FUNNEL_CIDR3_FUNC(void)
{
    if (cavm_is_model(OCTEONTX_CNF10KB))
        return 0x80e000010ffcll;
    __cavm_csr_fatal("RTT_SHRD_FUNNEL_CIDR3", 0, 0, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_RTT_SHRD_FUNNEL_CIDR3 cavm_rtt_shrd_funnel_cidr3_t
#define bustype_CAVM_RTT_SHRD_FUNNEL_CIDR3 CSR_TYPE_NCB32b
#define basename_CAVM_RTT_SHRD_FUNNEL_CIDR3 "RTT_SHRD_FUNNEL_CIDR3"
#define busnum_CAVM_RTT_SHRD_FUNNEL_CIDR3 0
#define arguments_CAVM_RTT_SHRD_FUNNEL_CIDR3 -1,-1,-1,-1

/**
 * Register (NCB32b) rtt_shrd_funnel_claimclr
 *
 * RTT Shrd Funnel Claimclr Register
 * This register forms one half of the claim tag value. On writes, this location
 * enables individual bits to be cleared. On reads, it returns the current claim tag
 * value.
 */
union cavm_rtt_shrd_funnel_claimclr
{
    uint32_t u;
    struct cavm_rtt_shrd_funnel_claimclr_s
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
    /* struct cavm_rtt_shrd_funnel_claimclr_s cn; */
};
typedef union cavm_rtt_shrd_funnel_claimclr cavm_rtt_shrd_funnel_claimclr_t;

#define CAVM_RTT_SHRD_FUNNEL_CLAIMCLR CAVM_RTT_SHRD_FUNNEL_CLAIMCLR_FUNC()
static inline uint64_t CAVM_RTT_SHRD_FUNNEL_CLAIMCLR_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_RTT_SHRD_FUNNEL_CLAIMCLR_FUNC(void)
{
    if (cavm_is_model(OCTEONTX_CNF10KB))
        return 0x80e000010fa4ll;
    __cavm_csr_fatal("RTT_SHRD_FUNNEL_CLAIMCLR", 0, 0, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_RTT_SHRD_FUNNEL_CLAIMCLR cavm_rtt_shrd_funnel_claimclr_t
#define bustype_CAVM_RTT_SHRD_FUNNEL_CLAIMCLR CSR_TYPE_NCB32b
#define basename_CAVM_RTT_SHRD_FUNNEL_CLAIMCLR "RTT_SHRD_FUNNEL_CLAIMCLR"
#define busnum_CAVM_RTT_SHRD_FUNNEL_CLAIMCLR 0
#define arguments_CAVM_RTT_SHRD_FUNNEL_CLAIMCLR -1,-1,-1,-1

/**
 * Register (NCB32b) rtt_shrd_funnel_claimset
 *
 * RTT Shrd Funnel Claimset Register
 * This register forms one half of the claim tag value. On writes, this location
 * enables individual bits to be set. On reads, it returns the number of bits that can
 * be set.
 */
union cavm_rtt_shrd_funnel_claimset
{
    uint32_t u;
    struct cavm_rtt_shrd_funnel_claimset_s
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
    /* struct cavm_rtt_shrd_funnel_claimset_s cn; */
};
typedef union cavm_rtt_shrd_funnel_claimset cavm_rtt_shrd_funnel_claimset_t;

#define CAVM_RTT_SHRD_FUNNEL_CLAIMSET CAVM_RTT_SHRD_FUNNEL_CLAIMSET_FUNC()
static inline uint64_t CAVM_RTT_SHRD_FUNNEL_CLAIMSET_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_RTT_SHRD_FUNNEL_CLAIMSET_FUNC(void)
{
    if (cavm_is_model(OCTEONTX_CNF10KB))
        return 0x80e000010fa0ll;
    __cavm_csr_fatal("RTT_SHRD_FUNNEL_CLAIMSET", 0, 0, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_RTT_SHRD_FUNNEL_CLAIMSET cavm_rtt_shrd_funnel_claimset_t
#define bustype_CAVM_RTT_SHRD_FUNNEL_CLAIMSET CSR_TYPE_NCB32b
#define basename_CAVM_RTT_SHRD_FUNNEL_CLAIMSET "RTT_SHRD_FUNNEL_CLAIMSET"
#define busnum_CAVM_RTT_SHRD_FUNNEL_CLAIMSET 0
#define arguments_CAVM_RTT_SHRD_FUNNEL_CLAIMSET -1,-1,-1,-1

/**
 * Register (NCB32b) rtt_shrd_funnel_devaff0
 *
 * RTT Shrd Funnel Devaff0 Register
 * Enables a debugger to determine if two components have an affinity with each other.
 */
union cavm_rtt_shrd_funnel_devaff0
{
    uint32_t u;
    struct cavm_rtt_shrd_funnel_devaff0_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t devaff0               : 32; /**< [ 31:  0](RO) This field is RAZ. */
#else /* Word 0 - Little Endian */
        uint32_t devaff0               : 32; /**< [ 31:  0](RO) This field is RAZ. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_rtt_shrd_funnel_devaff0_s cn; */
};
typedef union cavm_rtt_shrd_funnel_devaff0 cavm_rtt_shrd_funnel_devaff0_t;

#define CAVM_RTT_SHRD_FUNNEL_DEVAFF0 CAVM_RTT_SHRD_FUNNEL_DEVAFF0_FUNC()
static inline uint64_t CAVM_RTT_SHRD_FUNNEL_DEVAFF0_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_RTT_SHRD_FUNNEL_DEVAFF0_FUNC(void)
{
    if (cavm_is_model(OCTEONTX_CNF10KB))
        return 0x80e000010fa8ll;
    __cavm_csr_fatal("RTT_SHRD_FUNNEL_DEVAFF0", 0, 0, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_RTT_SHRD_FUNNEL_DEVAFF0 cavm_rtt_shrd_funnel_devaff0_t
#define bustype_CAVM_RTT_SHRD_FUNNEL_DEVAFF0 CSR_TYPE_NCB32b
#define basename_CAVM_RTT_SHRD_FUNNEL_DEVAFF0 "RTT_SHRD_FUNNEL_DEVAFF0"
#define busnum_CAVM_RTT_SHRD_FUNNEL_DEVAFF0 0
#define arguments_CAVM_RTT_SHRD_FUNNEL_DEVAFF0 -1,-1,-1,-1

/**
 * Register (NCB32b) rtt_shrd_funnel_devaff1
 *
 * RTT Shrd Funnel Devaff1 Register
 * Enables a debugger to determine if two components have an affinity with each other.
 */
union cavm_rtt_shrd_funnel_devaff1
{
    uint32_t u;
    struct cavm_rtt_shrd_funnel_devaff1_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t devaff1               : 32; /**< [ 31:  0](RO) This field is RAZ. */
#else /* Word 0 - Little Endian */
        uint32_t devaff1               : 32; /**< [ 31:  0](RO) This field is RAZ. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_rtt_shrd_funnel_devaff1_s cn; */
};
typedef union cavm_rtt_shrd_funnel_devaff1 cavm_rtt_shrd_funnel_devaff1_t;

#define CAVM_RTT_SHRD_FUNNEL_DEVAFF1 CAVM_RTT_SHRD_FUNNEL_DEVAFF1_FUNC()
static inline uint64_t CAVM_RTT_SHRD_FUNNEL_DEVAFF1_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_RTT_SHRD_FUNNEL_DEVAFF1_FUNC(void)
{
    if (cavm_is_model(OCTEONTX_CNF10KB))
        return 0x80e000010facll;
    __cavm_csr_fatal("RTT_SHRD_FUNNEL_DEVAFF1", 0, 0, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_RTT_SHRD_FUNNEL_DEVAFF1 cavm_rtt_shrd_funnel_devaff1_t
#define bustype_CAVM_RTT_SHRD_FUNNEL_DEVAFF1 CSR_TYPE_NCB32b
#define basename_CAVM_RTT_SHRD_FUNNEL_DEVAFF1 "RTT_SHRD_FUNNEL_DEVAFF1"
#define busnum_CAVM_RTT_SHRD_FUNNEL_DEVAFF1 0
#define arguments_CAVM_RTT_SHRD_FUNNEL_DEVAFF1 -1,-1,-1,-1

/**
 * Register (NCB32b) rtt_shrd_funnel_devarch
 *
 * RTT Shrd Funnel Devarch Register
 * Identifies the architect and architecture of a CoreSight component. The architect
 * might differ from the designer of a component, for example Arm defines the
 * architecture but another company designs and implements the component.
 */
union cavm_rtt_shrd_funnel_devarch
{
    uint32_t u;
    struct cavm_rtt_shrd_funnel_devarch_s
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
    /* struct cavm_rtt_shrd_funnel_devarch_s cn; */
};
typedef union cavm_rtt_shrd_funnel_devarch cavm_rtt_shrd_funnel_devarch_t;

#define CAVM_RTT_SHRD_FUNNEL_DEVARCH CAVM_RTT_SHRD_FUNNEL_DEVARCH_FUNC()
static inline uint64_t CAVM_RTT_SHRD_FUNNEL_DEVARCH_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_RTT_SHRD_FUNNEL_DEVARCH_FUNC(void)
{
    if (cavm_is_model(OCTEONTX_CNF10KB))
        return 0x80e000010fbcll;
    __cavm_csr_fatal("RTT_SHRD_FUNNEL_DEVARCH", 0, 0, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_RTT_SHRD_FUNNEL_DEVARCH cavm_rtt_shrd_funnel_devarch_t
#define bustype_CAVM_RTT_SHRD_FUNNEL_DEVARCH CSR_TYPE_NCB32b
#define basename_CAVM_RTT_SHRD_FUNNEL_DEVARCH "RTT_SHRD_FUNNEL_DEVARCH"
#define busnum_CAVM_RTT_SHRD_FUNNEL_DEVARCH 0
#define arguments_CAVM_RTT_SHRD_FUNNEL_DEVARCH -1,-1,-1,-1

/**
 * Register (NCB32b) rtt_shrd_funnel_devid
 *
 * RTT Shrd Funnel Devid Register
 * This register is IMPLEMENTATION DEFINED for each Part Number and Designer. The
 * register indicates the capabilities of the component.
 */
union cavm_rtt_shrd_funnel_devid
{
    uint32_t u;
    struct cavm_rtt_shrd_funnel_devid_s
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
    /* struct cavm_rtt_shrd_funnel_devid_s cn; */
};
typedef union cavm_rtt_shrd_funnel_devid cavm_rtt_shrd_funnel_devid_t;

#define CAVM_RTT_SHRD_FUNNEL_DEVID CAVM_RTT_SHRD_FUNNEL_DEVID_FUNC()
static inline uint64_t CAVM_RTT_SHRD_FUNNEL_DEVID_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_RTT_SHRD_FUNNEL_DEVID_FUNC(void)
{
    if (cavm_is_model(OCTEONTX_CNF10KB))
        return 0x80e000010fc8ll;
    __cavm_csr_fatal("RTT_SHRD_FUNNEL_DEVID", 0, 0, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_RTT_SHRD_FUNNEL_DEVID cavm_rtt_shrd_funnel_devid_t
#define bustype_CAVM_RTT_SHRD_FUNNEL_DEVID CSR_TYPE_NCB32b
#define basename_CAVM_RTT_SHRD_FUNNEL_DEVID "RTT_SHRD_FUNNEL_DEVID"
#define busnum_CAVM_RTT_SHRD_FUNNEL_DEVID 0
#define arguments_CAVM_RTT_SHRD_FUNNEL_DEVID -1,-1,-1,-1

/**
 * Register (NCB32b) rtt_shrd_funnel_devid1
 *
 * RTT Shrd Funnel Devid1 Register
 * Contains an IMPLEMENTATION DEFINED value.
 */
union cavm_rtt_shrd_funnel_devid1
{
    uint32_t u;
    struct cavm_rtt_shrd_funnel_devid1_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t devid1                : 32; /**< [ 31:  0](RO) This field is RAZ. */
#else /* Word 0 - Little Endian */
        uint32_t devid1                : 32; /**< [ 31:  0](RO) This field is RAZ. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_rtt_shrd_funnel_devid1_s cn; */
};
typedef union cavm_rtt_shrd_funnel_devid1 cavm_rtt_shrd_funnel_devid1_t;

#define CAVM_RTT_SHRD_FUNNEL_DEVID1 CAVM_RTT_SHRD_FUNNEL_DEVID1_FUNC()
static inline uint64_t CAVM_RTT_SHRD_FUNNEL_DEVID1_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_RTT_SHRD_FUNNEL_DEVID1_FUNC(void)
{
    if (cavm_is_model(OCTEONTX_CNF10KB))
        return 0x80e000010fc4ll;
    __cavm_csr_fatal("RTT_SHRD_FUNNEL_DEVID1", 0, 0, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_RTT_SHRD_FUNNEL_DEVID1 cavm_rtt_shrd_funnel_devid1_t
#define bustype_CAVM_RTT_SHRD_FUNNEL_DEVID1 CSR_TYPE_NCB32b
#define basename_CAVM_RTT_SHRD_FUNNEL_DEVID1 "RTT_SHRD_FUNNEL_DEVID1"
#define busnum_CAVM_RTT_SHRD_FUNNEL_DEVID1 0
#define arguments_CAVM_RTT_SHRD_FUNNEL_DEVID1 -1,-1,-1,-1

/**
 * Register (NCB32b) rtt_shrd_funnel_devid2
 *
 * RTT Shrd Funnel Devid2 Register
 * Contains an IMPLEMENTATION DEFINED value.
 */
union cavm_rtt_shrd_funnel_devid2
{
    uint32_t u;
    struct cavm_rtt_shrd_funnel_devid2_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t devid2                : 32; /**< [ 31:  0](RO) This field is RAZ. */
#else /* Word 0 - Little Endian */
        uint32_t devid2                : 32; /**< [ 31:  0](RO) This field is RAZ. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_rtt_shrd_funnel_devid2_s cn; */
};
typedef union cavm_rtt_shrd_funnel_devid2 cavm_rtt_shrd_funnel_devid2_t;

#define CAVM_RTT_SHRD_FUNNEL_DEVID2 CAVM_RTT_SHRD_FUNNEL_DEVID2_FUNC()
static inline uint64_t CAVM_RTT_SHRD_FUNNEL_DEVID2_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_RTT_SHRD_FUNNEL_DEVID2_FUNC(void)
{
    if (cavm_is_model(OCTEONTX_CNF10KB))
        return 0x80e000010fc0ll;
    __cavm_csr_fatal("RTT_SHRD_FUNNEL_DEVID2", 0, 0, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_RTT_SHRD_FUNNEL_DEVID2 cavm_rtt_shrd_funnel_devid2_t
#define bustype_CAVM_RTT_SHRD_FUNNEL_DEVID2 CSR_TYPE_NCB32b
#define basename_CAVM_RTT_SHRD_FUNNEL_DEVID2 "RTT_SHRD_FUNNEL_DEVID2"
#define busnum_CAVM_RTT_SHRD_FUNNEL_DEVID2 0
#define arguments_CAVM_RTT_SHRD_FUNNEL_DEVID2 -1,-1,-1,-1

/**
 * Register (NCB32b) rtt_shrd_funnel_devtype
 *
 * RTT Shrd Funnel Devtype Register
 * A debugger can use this register to get information about a component that has an
 * unrecognized Part number.
 */
union cavm_rtt_shrd_funnel_devtype
{
    uint32_t u;
    struct cavm_rtt_shrd_funnel_devtype_s
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
    /* struct cavm_rtt_shrd_funnel_devtype_s cn; */
};
typedef union cavm_rtt_shrd_funnel_devtype cavm_rtt_shrd_funnel_devtype_t;

#define CAVM_RTT_SHRD_FUNNEL_DEVTYPE CAVM_RTT_SHRD_FUNNEL_DEVTYPE_FUNC()
static inline uint64_t CAVM_RTT_SHRD_FUNNEL_DEVTYPE_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_RTT_SHRD_FUNNEL_DEVTYPE_FUNC(void)
{
    if (cavm_is_model(OCTEONTX_CNF10KB))
        return 0x80e000010fccll;
    __cavm_csr_fatal("RTT_SHRD_FUNNEL_DEVTYPE", 0, 0, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_RTT_SHRD_FUNNEL_DEVTYPE cavm_rtt_shrd_funnel_devtype_t
#define bustype_CAVM_RTT_SHRD_FUNNEL_DEVTYPE CSR_TYPE_NCB32b
#define basename_CAVM_RTT_SHRD_FUNNEL_DEVTYPE "RTT_SHRD_FUNNEL_DEVTYPE"
#define busnum_CAVM_RTT_SHRD_FUNNEL_DEVTYPE 0
#define arguments_CAVM_RTT_SHRD_FUNNEL_DEVTYPE -1,-1,-1,-1

/**
 * Register (NCB32b) rtt_shrd_funnel_funnelcontrol
 *
 * RTT Shrd Funnel Funnelcontrol Register
 * The Funnel Control register is for enabling each of the trace sources and
 * controlling the hold time for switching between them.
 */
union cavm_rtt_shrd_funnel_funnelcontrol
{
    uint32_t u;
    struct cavm_rtt_shrd_funnel_funnelcontrol_s
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
    /* struct cavm_rtt_shrd_funnel_funnelcontrol_s cn; */
};
typedef union cavm_rtt_shrd_funnel_funnelcontrol cavm_rtt_shrd_funnel_funnelcontrol_t;

#define CAVM_RTT_SHRD_FUNNEL_FUNNELCONTROL CAVM_RTT_SHRD_FUNNEL_FUNNELCONTROL_FUNC()
static inline uint64_t CAVM_RTT_SHRD_FUNNEL_FUNNELCONTROL_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_RTT_SHRD_FUNNEL_FUNNELCONTROL_FUNC(void)
{
    if (cavm_is_model(OCTEONTX_CNF10KB))
        return 0x80e000010000ll;
    __cavm_csr_fatal("RTT_SHRD_FUNNEL_FUNNELCONTROL", 0, 0, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_RTT_SHRD_FUNNEL_FUNNELCONTROL cavm_rtt_shrd_funnel_funnelcontrol_t
#define bustype_CAVM_RTT_SHRD_FUNNEL_FUNNELCONTROL CSR_TYPE_NCB32b
#define basename_CAVM_RTT_SHRD_FUNNEL_FUNNELCONTROL "RTT_SHRD_FUNNEL_FUNNELCONTROL"
#define busnum_CAVM_RTT_SHRD_FUNNEL_FUNNELCONTROL 0
#define arguments_CAVM_RTT_SHRD_FUNNEL_FUNNELCONTROL -1,-1,-1,-1

/**
 * Register (NCB32b) rtt_shrd_funnel_itatbctr0
 *
 * RTT Shrd Funnel Itatbctr0 Register
 * This register allows observability and controllability of the ATBYTES buses, and
 * AFREADY and ATVALID signals into, and out of, the funnel. For slave signals coming
 * into the funnel, the register views the ports that are selected through the funnel
 * control register. Only one port must be selected for integration test.
 */
union cavm_rtt_shrd_funnel_itatbctr0
{
    uint32_t u;
    struct cavm_rtt_shrd_funnel_itatbctr0_s
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
    /* struct cavm_rtt_shrd_funnel_itatbctr0_s cn; */
};
typedef union cavm_rtt_shrd_funnel_itatbctr0 cavm_rtt_shrd_funnel_itatbctr0_t;

#define CAVM_RTT_SHRD_FUNNEL_ITATBCTR0 CAVM_RTT_SHRD_FUNNEL_ITATBCTR0_FUNC()
static inline uint64_t CAVM_RTT_SHRD_FUNNEL_ITATBCTR0_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_RTT_SHRD_FUNNEL_ITATBCTR0_FUNC(void)
{
    if (cavm_is_model(OCTEONTX_CNF10KB))
        return 0x80e000010efcll;
    __cavm_csr_fatal("RTT_SHRD_FUNNEL_ITATBCTR0", 0, 0, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_RTT_SHRD_FUNNEL_ITATBCTR0 cavm_rtt_shrd_funnel_itatbctr0_t
#define bustype_CAVM_RTT_SHRD_FUNNEL_ITATBCTR0 CSR_TYPE_NCB32b
#define basename_CAVM_RTT_SHRD_FUNNEL_ITATBCTR0 "RTT_SHRD_FUNNEL_ITATBCTR0"
#define busnum_CAVM_RTT_SHRD_FUNNEL_ITATBCTR0 0
#define arguments_CAVM_RTT_SHRD_FUNNEL_ITATBCTR0 -1,-1,-1,-1

/**
 * Register (NCB32b) rtt_shrd_funnel_itatbctr1
 *
 * RTT Shrd Funnel Itatbctr1 Register
 * This register allows observability and controllability of the ATID buses into, and
 * out of, the funnel. For slave signals coming into the funnel, the register views the
 * ports that are selected through the funnel control register. Only one port must be
 * selected for integration test.
 */
union cavm_rtt_shrd_funnel_itatbctr1
{
    uint32_t u;
    struct cavm_rtt_shrd_funnel_itatbctr1_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t sbz_0                 : 25; /**< [ 31:  7](R/W) Software should write the field as all 0s. */
        uint32_t atid                  : 7;  /**< [  6:  0](R/W) When read returns the value on atid_s, when written drives the value on atid_m. */
#else /* Word 0 - Little Endian */
        uint32_t atid                  : 7;  /**< [  6:  0](R/W) When read returns the value on atid_s, when written drives the value on atid_m. */
        uint32_t sbz_0                 : 25; /**< [ 31:  7](R/W) Software should write the field as all 0s. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_rtt_shrd_funnel_itatbctr1_s cn; */
};
typedef union cavm_rtt_shrd_funnel_itatbctr1 cavm_rtt_shrd_funnel_itatbctr1_t;

#define CAVM_RTT_SHRD_FUNNEL_ITATBCTR1 CAVM_RTT_SHRD_FUNNEL_ITATBCTR1_FUNC()
static inline uint64_t CAVM_RTT_SHRD_FUNNEL_ITATBCTR1_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_RTT_SHRD_FUNNEL_ITATBCTR1_FUNC(void)
{
    if (cavm_is_model(OCTEONTX_CNF10KB))
        return 0x80e000010ef8ll;
    __cavm_csr_fatal("RTT_SHRD_FUNNEL_ITATBCTR1", 0, 0, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_RTT_SHRD_FUNNEL_ITATBCTR1 cavm_rtt_shrd_funnel_itatbctr1_t
#define bustype_CAVM_RTT_SHRD_FUNNEL_ITATBCTR1 CSR_TYPE_NCB32b
#define basename_CAVM_RTT_SHRD_FUNNEL_ITATBCTR1 "RTT_SHRD_FUNNEL_ITATBCTR1"
#define busnum_CAVM_RTT_SHRD_FUNNEL_ITATBCTR1 0
#define arguments_CAVM_RTT_SHRD_FUNNEL_ITATBCTR1 -1,-1,-1,-1

/**
 * Register (NCB32b) rtt_shrd_funnel_itatbctr2
 *
 * RTT Shrd Funnel Itatbctr2 Register
 * This register allows observability and controllability of the afvalid and atready
 * signals into, and out of, the funnel. For slave signals coming into the funnel, the
 * register views the ports that are selected through the funnel control register. Only
 * one port must be selected for integration test.
 */
union cavm_rtt_shrd_funnel_itatbctr2
{
    uint32_t u;
    struct cavm_rtt_shrd_funnel_itatbctr2_s
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
    /* struct cavm_rtt_shrd_funnel_itatbctr2_s cn; */
};
typedef union cavm_rtt_shrd_funnel_itatbctr2 cavm_rtt_shrd_funnel_itatbctr2_t;

#define CAVM_RTT_SHRD_FUNNEL_ITATBCTR2 CAVM_RTT_SHRD_FUNNEL_ITATBCTR2_FUNC()
static inline uint64_t CAVM_RTT_SHRD_FUNNEL_ITATBCTR2_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_RTT_SHRD_FUNNEL_ITATBCTR2_FUNC(void)
{
    if (cavm_is_model(OCTEONTX_CNF10KB))
        return 0x80e000010ef4ll;
    __cavm_csr_fatal("RTT_SHRD_FUNNEL_ITATBCTR2", 0, 0, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_RTT_SHRD_FUNNEL_ITATBCTR2 cavm_rtt_shrd_funnel_itatbctr2_t
#define bustype_CAVM_RTT_SHRD_FUNNEL_ITATBCTR2 CSR_TYPE_NCB32b
#define basename_CAVM_RTT_SHRD_FUNNEL_ITATBCTR2 "RTT_SHRD_FUNNEL_ITATBCTR2"
#define busnum_CAVM_RTT_SHRD_FUNNEL_ITATBCTR2 0
#define arguments_CAVM_RTT_SHRD_FUNNEL_ITATBCTR2 -1,-1,-1,-1

/**
 * Register (NCB32b) rtt_shrd_funnel_itatbctr3
 *
 * RTT Shrd Funnel Itatbctr3 Register
 * This register allows observability and controllability of the SYNCREQ signals into,
 * and out of, the funnel. Only one slave interface must be selected for integration
 * test. The syncreq receiver on the master interface has a latching function to
 * capture a pulse arriving on that input. The arrival of a pulse sets the latch so
 * that the value can be read. Reading the register clears the latch. Reading a 1
 * indicates that a syncreq_m pulse arrived since the last read. Reading a 0 indicates
 * that no syncreq_m pulse has arrived. Writing a 1 to the register causes a syncreq_s
 * pulse to be generated to the upstream component.
 */
union cavm_rtt_shrd_funnel_itatbctr3
{
    uint32_t u;
    struct cavm_rtt_shrd_funnel_itatbctr3_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t sbz_0                 : 31; /**< [ 31:  1](R/W) Software should write the field as all 0s. */
        uint32_t syncreq               : 1;  /**< [  0:  0](R/W) Reads and controls the SYNCREQ signals into, and out of, the funnel. Reading clears the latch. */
#else /* Word 0 - Little Endian */
        uint32_t syncreq               : 1;  /**< [  0:  0](R/W) Reads and controls the SYNCREQ signals into, and out of, the funnel. Reading clears the latch. */
        uint32_t sbz_0                 : 31; /**< [ 31:  1](R/W) Software should write the field as all 0s. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_rtt_shrd_funnel_itatbctr3_s cn; */
};
typedef union cavm_rtt_shrd_funnel_itatbctr3 cavm_rtt_shrd_funnel_itatbctr3_t;

#define CAVM_RTT_SHRD_FUNNEL_ITATBCTR3 CAVM_RTT_SHRD_FUNNEL_ITATBCTR3_FUNC()
static inline uint64_t CAVM_RTT_SHRD_FUNNEL_ITATBCTR3_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_RTT_SHRD_FUNNEL_ITATBCTR3_FUNC(void)
{
    if (cavm_is_model(OCTEONTX_CNF10KB))
        return 0x80e000010ef0ll;
    __cavm_csr_fatal("RTT_SHRD_FUNNEL_ITATBCTR3", 0, 0, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_RTT_SHRD_FUNNEL_ITATBCTR3 cavm_rtt_shrd_funnel_itatbctr3_t
#define bustype_CAVM_RTT_SHRD_FUNNEL_ITATBCTR3 CSR_TYPE_NCB32b
#define basename_CAVM_RTT_SHRD_FUNNEL_ITATBCTR3 "RTT_SHRD_FUNNEL_ITATBCTR3"
#define busnum_CAVM_RTT_SHRD_FUNNEL_ITATBCTR3 0
#define arguments_CAVM_RTT_SHRD_FUNNEL_ITATBCTR3 -1,-1,-1,-1

/**
 * Register (NCB32b) rtt_shrd_funnel_itatbdata0
 *
 * RTT Shrd Funnel Itatbdata0 Register
 * This register allows observability and controllability of the ATDATA buses into and
 * out of the funnel. For slave signals coming into the funnel, the register views the
 * ports that are selected through the funnel control register. Only one port must be
 * selected for integration test.
 */
union cavm_rtt_shrd_funnel_itatbdata0
{
    uint32_t u;
    struct cavm_rtt_shrd_funnel_itatbdata0_s
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
    /* struct cavm_rtt_shrd_funnel_itatbdata0_s cn; */
};
typedef union cavm_rtt_shrd_funnel_itatbdata0 cavm_rtt_shrd_funnel_itatbdata0_t;

#define CAVM_RTT_SHRD_FUNNEL_ITATBDATA0 CAVM_RTT_SHRD_FUNNEL_ITATBDATA0_FUNC()
static inline uint64_t CAVM_RTT_SHRD_FUNNEL_ITATBDATA0_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_RTT_SHRD_FUNNEL_ITATBDATA0_FUNC(void)
{
    if (cavm_is_model(OCTEONTX_CNF10KB))
        return 0x80e000010eecll;
    __cavm_csr_fatal("RTT_SHRD_FUNNEL_ITATBDATA0", 0, 0, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_RTT_SHRD_FUNNEL_ITATBDATA0 cavm_rtt_shrd_funnel_itatbdata0_t
#define bustype_CAVM_RTT_SHRD_FUNNEL_ITATBDATA0 CSR_TYPE_NCB32b
#define basename_CAVM_RTT_SHRD_FUNNEL_ITATBDATA0 "RTT_SHRD_FUNNEL_ITATBDATA0"
#define busnum_CAVM_RTT_SHRD_FUNNEL_ITATBDATA0 0
#define arguments_CAVM_RTT_SHRD_FUNNEL_ITATBDATA0 -1,-1,-1,-1

/**
 * Register (NCB32b) rtt_shrd_funnel_itctrl
 *
 * RTT Shrd Funnel Itctrl Register
 * The Integration Mode Control register is used to enable topology detection.
 */
union cavm_rtt_shrd_funnel_itctrl
{
    uint32_t u;
    struct cavm_rtt_shrd_funnel_itctrl_s
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
    /* struct cavm_rtt_shrd_funnel_itctrl_s cn; */
};
typedef union cavm_rtt_shrd_funnel_itctrl cavm_rtt_shrd_funnel_itctrl_t;

#define CAVM_RTT_SHRD_FUNNEL_ITCTRL CAVM_RTT_SHRD_FUNNEL_ITCTRL_FUNC()
static inline uint64_t CAVM_RTT_SHRD_FUNNEL_ITCTRL_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_RTT_SHRD_FUNNEL_ITCTRL_FUNC(void)
{
    if (cavm_is_model(OCTEONTX_CNF10KB))
        return 0x80e000010f00ll;
    __cavm_csr_fatal("RTT_SHRD_FUNNEL_ITCTRL", 0, 0, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_RTT_SHRD_FUNNEL_ITCTRL cavm_rtt_shrd_funnel_itctrl_t
#define bustype_CAVM_RTT_SHRD_FUNNEL_ITCTRL CSR_TYPE_NCB32b
#define basename_CAVM_RTT_SHRD_FUNNEL_ITCTRL "RTT_SHRD_FUNNEL_ITCTRL"
#define busnum_CAVM_RTT_SHRD_FUNNEL_ITCTRL 0
#define arguments_CAVM_RTT_SHRD_FUNNEL_ITCTRL -1,-1,-1,-1

/**
 * Register (NCB32b) rtt_shrd_funnel_pidr0
 *
 * RTT Shrd Funnel Pidr0 Register
 * The PIDR0 register is part of the set of peripheral identification registers.
 */
union cavm_rtt_shrd_funnel_pidr0
{
    uint32_t u;
    struct cavm_rtt_shrd_funnel_pidr0_s
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
    /* struct cavm_rtt_shrd_funnel_pidr0_s cn; */
};
typedef union cavm_rtt_shrd_funnel_pidr0 cavm_rtt_shrd_funnel_pidr0_t;

#define CAVM_RTT_SHRD_FUNNEL_PIDR0 CAVM_RTT_SHRD_FUNNEL_PIDR0_FUNC()
static inline uint64_t CAVM_RTT_SHRD_FUNNEL_PIDR0_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_RTT_SHRD_FUNNEL_PIDR0_FUNC(void)
{
    if (cavm_is_model(OCTEONTX_CNF10KB))
        return 0x80e000010fe0ll;
    __cavm_csr_fatal("RTT_SHRD_FUNNEL_PIDR0", 0, 0, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_RTT_SHRD_FUNNEL_PIDR0 cavm_rtt_shrd_funnel_pidr0_t
#define bustype_CAVM_RTT_SHRD_FUNNEL_PIDR0 CSR_TYPE_NCB32b
#define basename_CAVM_RTT_SHRD_FUNNEL_PIDR0 "RTT_SHRD_FUNNEL_PIDR0"
#define busnum_CAVM_RTT_SHRD_FUNNEL_PIDR0 0
#define arguments_CAVM_RTT_SHRD_FUNNEL_PIDR0 -1,-1,-1,-1

/**
 * Register (NCB32b) rtt_shrd_funnel_pidr1
 *
 * RTT Shrd Funnel Pidr1 Register
 * The PIDR1 register is part of the set of peripheral identification registers.
 */
union cavm_rtt_shrd_funnel_pidr1
{
    uint32_t u;
    struct cavm_rtt_shrd_funnel_pidr1_s
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
    /* struct cavm_rtt_shrd_funnel_pidr1_s cn; */
};
typedef union cavm_rtt_shrd_funnel_pidr1 cavm_rtt_shrd_funnel_pidr1_t;

#define CAVM_RTT_SHRD_FUNNEL_PIDR1 CAVM_RTT_SHRD_FUNNEL_PIDR1_FUNC()
static inline uint64_t CAVM_RTT_SHRD_FUNNEL_PIDR1_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_RTT_SHRD_FUNNEL_PIDR1_FUNC(void)
{
    if (cavm_is_model(OCTEONTX_CNF10KB))
        return 0x80e000010fe4ll;
    __cavm_csr_fatal("RTT_SHRD_FUNNEL_PIDR1", 0, 0, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_RTT_SHRD_FUNNEL_PIDR1 cavm_rtt_shrd_funnel_pidr1_t
#define bustype_CAVM_RTT_SHRD_FUNNEL_PIDR1 CSR_TYPE_NCB32b
#define basename_CAVM_RTT_SHRD_FUNNEL_PIDR1 "RTT_SHRD_FUNNEL_PIDR1"
#define busnum_CAVM_RTT_SHRD_FUNNEL_PIDR1 0
#define arguments_CAVM_RTT_SHRD_FUNNEL_PIDR1 -1,-1,-1,-1

/**
 * Register (NCB32b) rtt_shrd_funnel_pidr2
 *
 * RTT Shrd Funnel Pidr2 Register
 * The PIDR2 register is part of the set of peripheral identification registers.
 */
union cavm_rtt_shrd_funnel_pidr2
{
    uint32_t u;
    struct cavm_rtt_shrd_funnel_pidr2_s
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
    /* struct cavm_rtt_shrd_funnel_pidr2_s cn; */
};
typedef union cavm_rtt_shrd_funnel_pidr2 cavm_rtt_shrd_funnel_pidr2_t;

#define CAVM_RTT_SHRD_FUNNEL_PIDR2 CAVM_RTT_SHRD_FUNNEL_PIDR2_FUNC()
static inline uint64_t CAVM_RTT_SHRD_FUNNEL_PIDR2_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_RTT_SHRD_FUNNEL_PIDR2_FUNC(void)
{
    if (cavm_is_model(OCTEONTX_CNF10KB))
        return 0x80e000010fe8ll;
    __cavm_csr_fatal("RTT_SHRD_FUNNEL_PIDR2", 0, 0, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_RTT_SHRD_FUNNEL_PIDR2 cavm_rtt_shrd_funnel_pidr2_t
#define bustype_CAVM_RTT_SHRD_FUNNEL_PIDR2 CSR_TYPE_NCB32b
#define basename_CAVM_RTT_SHRD_FUNNEL_PIDR2 "RTT_SHRD_FUNNEL_PIDR2"
#define busnum_CAVM_RTT_SHRD_FUNNEL_PIDR2 0
#define arguments_CAVM_RTT_SHRD_FUNNEL_PIDR2 -1,-1,-1,-1

/**
 * Register (NCB32b) rtt_shrd_funnel_pidr3
 *
 * RTT Shrd Funnel Pidr3 Register
 * The PIDR3 register is part of the set of peripheral identification registers.
 */
union cavm_rtt_shrd_funnel_pidr3
{
    uint32_t u;
    struct cavm_rtt_shrd_funnel_pidr3_s
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
    /* struct cavm_rtt_shrd_funnel_pidr3_s cn; */
};
typedef union cavm_rtt_shrd_funnel_pidr3 cavm_rtt_shrd_funnel_pidr3_t;

#define CAVM_RTT_SHRD_FUNNEL_PIDR3 CAVM_RTT_SHRD_FUNNEL_PIDR3_FUNC()
static inline uint64_t CAVM_RTT_SHRD_FUNNEL_PIDR3_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_RTT_SHRD_FUNNEL_PIDR3_FUNC(void)
{
    if (cavm_is_model(OCTEONTX_CNF10KB))
        return 0x80e000010fecll;
    __cavm_csr_fatal("RTT_SHRD_FUNNEL_PIDR3", 0, 0, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_RTT_SHRD_FUNNEL_PIDR3 cavm_rtt_shrd_funnel_pidr3_t
#define bustype_CAVM_RTT_SHRD_FUNNEL_PIDR3 CSR_TYPE_NCB32b
#define basename_CAVM_RTT_SHRD_FUNNEL_PIDR3 "RTT_SHRD_FUNNEL_PIDR3"
#define busnum_CAVM_RTT_SHRD_FUNNEL_PIDR3 0
#define arguments_CAVM_RTT_SHRD_FUNNEL_PIDR3 -1,-1,-1,-1

/**
 * Register (NCB32b) rtt_shrd_funnel_pidr4
 *
 * RTT Shrd Funnel Pidr4 Register
 * The PIDR4 register is part of the set of peripheral identification registers.
 */
union cavm_rtt_shrd_funnel_pidr4
{
    uint32_t u;
    struct cavm_rtt_shrd_funnel_pidr4_s
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
    /* struct cavm_rtt_shrd_funnel_pidr4_s cn; */
};
typedef union cavm_rtt_shrd_funnel_pidr4 cavm_rtt_shrd_funnel_pidr4_t;

#define CAVM_RTT_SHRD_FUNNEL_PIDR4 CAVM_RTT_SHRD_FUNNEL_PIDR4_FUNC()
static inline uint64_t CAVM_RTT_SHRD_FUNNEL_PIDR4_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_RTT_SHRD_FUNNEL_PIDR4_FUNC(void)
{
    if (cavm_is_model(OCTEONTX_CNF10KB))
        return 0x80e000010fd0ll;
    __cavm_csr_fatal("RTT_SHRD_FUNNEL_PIDR4", 0, 0, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_RTT_SHRD_FUNNEL_PIDR4 cavm_rtt_shrd_funnel_pidr4_t
#define bustype_CAVM_RTT_SHRD_FUNNEL_PIDR4 CSR_TYPE_NCB32b
#define basename_CAVM_RTT_SHRD_FUNNEL_PIDR4 "RTT_SHRD_FUNNEL_PIDR4"
#define busnum_CAVM_RTT_SHRD_FUNNEL_PIDR4 0
#define arguments_CAVM_RTT_SHRD_FUNNEL_PIDR4 -1,-1,-1,-1

/**
 * Register (NCB32b) rtt_shrd_funnel_pidr5
 *
 * RTT Shrd Funnel Pidr5 Register
 * The PIDR5 register is part of the set of peripheral identification registers.
 */
union cavm_rtt_shrd_funnel_pidr5
{
    uint32_t u;
    struct cavm_rtt_shrd_funnel_pidr5_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t reserved_8_31         : 24;
        uint32_t pidr5                 : 8;  /**< [  7:  0](RO) Reserved. */
#else /* Word 0 - Little Endian */
        uint32_t pidr5                 : 8;  /**< [  7:  0](RO) Reserved. */
        uint32_t reserved_8_31         : 24;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_rtt_shrd_funnel_pidr5_s cn; */
};
typedef union cavm_rtt_shrd_funnel_pidr5 cavm_rtt_shrd_funnel_pidr5_t;

#define CAVM_RTT_SHRD_FUNNEL_PIDR5 CAVM_RTT_SHRD_FUNNEL_PIDR5_FUNC()
static inline uint64_t CAVM_RTT_SHRD_FUNNEL_PIDR5_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_RTT_SHRD_FUNNEL_PIDR5_FUNC(void)
{
    if (cavm_is_model(OCTEONTX_CNF10KB))
        return 0x80e000010fd4ll;
    __cavm_csr_fatal("RTT_SHRD_FUNNEL_PIDR5", 0, 0, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_RTT_SHRD_FUNNEL_PIDR5 cavm_rtt_shrd_funnel_pidr5_t
#define bustype_CAVM_RTT_SHRD_FUNNEL_PIDR5 CSR_TYPE_NCB32b
#define basename_CAVM_RTT_SHRD_FUNNEL_PIDR5 "RTT_SHRD_FUNNEL_PIDR5"
#define busnum_CAVM_RTT_SHRD_FUNNEL_PIDR5 0
#define arguments_CAVM_RTT_SHRD_FUNNEL_PIDR5 -1,-1,-1,-1

/**
 * Register (NCB32b) rtt_shrd_funnel_pidr6
 *
 * RTT Shrd Funnel Pidr6 Register
 * The PIDR6 register is part of the set of peripheral identification registers.
 */
union cavm_rtt_shrd_funnel_pidr6
{
    uint32_t u;
    struct cavm_rtt_shrd_funnel_pidr6_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t reserved_8_31         : 24;
        uint32_t pidr6                 : 8;  /**< [  7:  0](RO) Reserved. */
#else /* Word 0 - Little Endian */
        uint32_t pidr6                 : 8;  /**< [  7:  0](RO) Reserved. */
        uint32_t reserved_8_31         : 24;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_rtt_shrd_funnel_pidr6_s cn; */
};
typedef union cavm_rtt_shrd_funnel_pidr6 cavm_rtt_shrd_funnel_pidr6_t;

#define CAVM_RTT_SHRD_FUNNEL_PIDR6 CAVM_RTT_SHRD_FUNNEL_PIDR6_FUNC()
static inline uint64_t CAVM_RTT_SHRD_FUNNEL_PIDR6_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_RTT_SHRD_FUNNEL_PIDR6_FUNC(void)
{
    if (cavm_is_model(OCTEONTX_CNF10KB))
        return 0x80e000010fd8ll;
    __cavm_csr_fatal("RTT_SHRD_FUNNEL_PIDR6", 0, 0, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_RTT_SHRD_FUNNEL_PIDR6 cavm_rtt_shrd_funnel_pidr6_t
#define bustype_CAVM_RTT_SHRD_FUNNEL_PIDR6 CSR_TYPE_NCB32b
#define basename_CAVM_RTT_SHRD_FUNNEL_PIDR6 "RTT_SHRD_FUNNEL_PIDR6"
#define busnum_CAVM_RTT_SHRD_FUNNEL_PIDR6 0
#define arguments_CAVM_RTT_SHRD_FUNNEL_PIDR6 -1,-1,-1,-1

/**
 * Register (NCB32b) rtt_shrd_funnel_pidr7
 *
 * RTT Shrd Funnel Pidr7 Register
 * The PIDR7 register is part of the set of peripheral identification registers.
 */
union cavm_rtt_shrd_funnel_pidr7
{
    uint32_t u;
    struct cavm_rtt_shrd_funnel_pidr7_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t reserved_8_31         : 24;
        uint32_t pidr7                 : 8;  /**< [  7:  0](RO) Reserved. */
#else /* Word 0 - Little Endian */
        uint32_t pidr7                 : 8;  /**< [  7:  0](RO) Reserved. */
        uint32_t reserved_8_31         : 24;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_rtt_shrd_funnel_pidr7_s cn; */
};
typedef union cavm_rtt_shrd_funnel_pidr7 cavm_rtt_shrd_funnel_pidr7_t;

#define CAVM_RTT_SHRD_FUNNEL_PIDR7 CAVM_RTT_SHRD_FUNNEL_PIDR7_FUNC()
static inline uint64_t CAVM_RTT_SHRD_FUNNEL_PIDR7_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_RTT_SHRD_FUNNEL_PIDR7_FUNC(void)
{
    if (cavm_is_model(OCTEONTX_CNF10KB))
        return 0x80e000010fdcll;
    __cavm_csr_fatal("RTT_SHRD_FUNNEL_PIDR7", 0, 0, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_RTT_SHRD_FUNNEL_PIDR7 cavm_rtt_shrd_funnel_pidr7_t
#define bustype_CAVM_RTT_SHRD_FUNNEL_PIDR7 CSR_TYPE_NCB32b
#define basename_CAVM_RTT_SHRD_FUNNEL_PIDR7 "RTT_SHRD_FUNNEL_PIDR7"
#define busnum_CAVM_RTT_SHRD_FUNNEL_PIDR7 0
#define arguments_CAVM_RTT_SHRD_FUNNEL_PIDR7 -1,-1,-1,-1

/**
 * Register (NCB32b) rtt_shrd_funnel_prioritycontrol
 *
 * RTT Shrd Funnel Prioritycontrol Register
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
union cavm_rtt_shrd_funnel_prioritycontrol
{
    uint32_t u;
    struct cavm_rtt_shrd_funnel_prioritycontrol_s
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
    /* struct cavm_rtt_shrd_funnel_prioritycontrol_s cn; */
};
typedef union cavm_rtt_shrd_funnel_prioritycontrol cavm_rtt_shrd_funnel_prioritycontrol_t;

#define CAVM_RTT_SHRD_FUNNEL_PRIORITYCONTROL CAVM_RTT_SHRD_FUNNEL_PRIORITYCONTROL_FUNC()
static inline uint64_t CAVM_RTT_SHRD_FUNNEL_PRIORITYCONTROL_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_RTT_SHRD_FUNNEL_PRIORITYCONTROL_FUNC(void)
{
    if (cavm_is_model(OCTEONTX_CNF10KB))
        return 0x80e000010004ll;
    __cavm_csr_fatal("RTT_SHRD_FUNNEL_PRIORITYCONTROL", 0, 0, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_RTT_SHRD_FUNNEL_PRIORITYCONTROL cavm_rtt_shrd_funnel_prioritycontrol_t
#define bustype_CAVM_RTT_SHRD_FUNNEL_PRIORITYCONTROL CSR_TYPE_NCB32b
#define basename_CAVM_RTT_SHRD_FUNNEL_PRIORITYCONTROL "RTT_SHRD_FUNNEL_PRIORITYCONTROL"
#define busnum_CAVM_RTT_SHRD_FUNNEL_PRIORITYCONTROL 0
#define arguments_CAVM_RTT_SHRD_FUNNEL_PRIORITYCONTROL -1,-1,-1,-1

#endif /* __CAVM_CSRS_RTT_SHARED_H__ */
