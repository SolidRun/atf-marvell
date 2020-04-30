#ifndef __CAVM_CSRS_BCM_H__
#define __CAVM_CSRS_BCM_H__
/* This file is auto-generated. Do not edit */

/***********************license start***********************************
* Copyright (C) 2020 Marvell International Ltd.
* SPDX-License-Identifier: BSD-3-Clause
* https://spdx.org/licenses
***********************license end**************************************/


/**
 * @file
 *
 * Configuration and status register (CSR) address and type definitions for
 * OcteonTX BCM.
 *
 * This file is auto generated. Do not edit.
 *
 */

/**
 * Enumeration bcm_bar_e
 *
 * BCM Base Address Register Enumeration
 * Enumerates the base address registers.
 */
#define CAVM_BCM_BAR_E_BCM_PF_BAR0 (0x80b000000000ll)
#define CAVM_BCM_BAR_E_BCM_PF_BAR0_SIZE 0x100000ull

/**
 * Register (NCB32b) bcm_eco
 *
 * INTERNAL: BCM ECO Register
 *
 * This register is reset on chip reset.
 */
union cavm_bcm_eco
{
    uint32_t u;
    struct cavm_bcm_eco_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t eco_rw                : 32; /**< [ 31:  0](R/W) Reserved for ECO usage. */
#else /* Word 0 - Little Endian */
        uint32_t eco_rw                : 32; /**< [ 31:  0](R/W) Reserved for ECO usage. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_bcm_eco_s cn; */
};
typedef union cavm_bcm_eco cavm_bcm_eco_t;

#define CAVM_BCM_ECO CAVM_BCM_ECO_FUNC()
static inline uint64_t CAVM_BCM_ECO_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_BCM_ECO_FUNC(void)
{
    return 0x80b000004100ll;
}

#define typedef_CAVM_BCM_ECO cavm_bcm_eco_t
#define bustype_CAVM_BCM_ECO CSR_TYPE_NCB32b
#define basename_CAVM_BCM_ECO "BCM_ECO"
#define device_bar_CAVM_BCM_ECO 0x0 /* PF_BAR0 */
#define busnum_CAVM_BCM_ECO 0
#define arguments_CAVM_BCM_ECO -1,-1,-1,-1

/**
 * Register (NCB) bcm_ip_regs#
 *
 * BCM IP Internal Registers
 * These registers access the BCM register space.
 */
union cavm_bcm_ip_regsx
{
    uint64_t u;
    struct cavm_bcm_ip_regsx_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t dat                   : 64; /**< [ 63:  0](R/W) BCM register */
#else /* Word 0 - Little Endian */
        uint64_t dat                   : 64; /**< [ 63:  0](R/W) BCM register */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_bcm_ip_regsx_s cn; */
};
typedef union cavm_bcm_ip_regsx cavm_bcm_ip_regsx_t;

static inline uint64_t CAVM_BCM_IP_REGSX(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_BCM_IP_REGSX(uint64_t a)
{
    if (a<=2047)
        return 0x80b000000000ll + 4ll * ((a) & 0x7ff);
    __cavm_csr_fatal("BCM_IP_REGSX", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_BCM_IP_REGSX(a) cavm_bcm_ip_regsx_t
#define bustype_CAVM_BCM_IP_REGSX(a) CSR_TYPE_NCB
#define basename_CAVM_BCM_IP_REGSX(a) "BCM_IP_REGSX"
#define device_bar_CAVM_BCM_IP_REGSX(a) 0x0 /* PF_BAR0 */
#define busnum_CAVM_BCM_IP_REGSX(a) (a)
#define arguments_CAVM_BCM_IP_REGSX(a) (a),-1,-1,-1

/**
 * Register (NCB) bcm_ram_base_addr
 *
 * CPC RAM Base Address Register
 */
union cavm_bcm_ram_base_addr
{
    uint64_t u;
    struct cavm_bcm_ram_base_addr_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t addr                  : 64; /**< [ 63:  0](R/W) CPC RAM base address as reflected to BCM DMA */
#else /* Word 0 - Little Endian */
        uint64_t addr                  : 64; /**< [ 63:  0](R/W) CPC RAM base address as reflected to BCM DMA */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_bcm_ram_base_addr_s cn; */
};
typedef union cavm_bcm_ram_base_addr cavm_bcm_ram_base_addr_t;

#define CAVM_BCM_RAM_BASE_ADDR CAVM_BCM_RAM_BASE_ADDR_FUNC()
static inline uint64_t CAVM_BCM_RAM_BASE_ADDR_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_BCM_RAM_BASE_ADDR_FUNC(void)
{
    return 0x80b000004000ll;
}

#define typedef_CAVM_BCM_RAM_BASE_ADDR cavm_bcm_ram_base_addr_t
#define bustype_CAVM_BCM_RAM_BASE_ADDR CSR_TYPE_NCB
#define basename_CAVM_BCM_RAM_BASE_ADDR "BCM_RAM_BASE_ADDR"
#define device_bar_CAVM_BCM_RAM_BASE_ADDR 0x0 /* PF_BAR0 */
#define busnum_CAVM_BCM_RAM_BASE_ADDR 0
#define arguments_CAVM_BCM_RAM_BASE_ADDR -1,-1,-1,-1

/**
 * Register (NCB) bcm_ram_dest_addr
 *
 * CPC RAM Destination Address Register
 */
union cavm_bcm_ram_dest_addr
{
    uint64_t u;
    struct cavm_bcm_ram_dest_addr_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t addr                  : 45; /**< [ 63: 19](R/W) CPC RAM base address.
                                                                 Transaction will recieve that value if original address of the transaction
                                                                 is in the window that define by RAM_SIZE and RAM_BASE_ADDR registers.

                                                                 19 LSB are the address inside the RAM. */
        uint64_t reserved_0_18         : 19;
#else /* Word 0 - Little Endian */
        uint64_t reserved_0_18         : 19;
        uint64_t addr                  : 45; /**< [ 63: 19](R/W) CPC RAM base address.
                                                                 Transaction will recieve that value if original address of the transaction
                                                                 is in the window that define by RAM_SIZE and RAM_BASE_ADDR registers.

                                                                 19 LSB are the address inside the RAM. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_bcm_ram_dest_addr_s cn; */
};
typedef union cavm_bcm_ram_dest_addr cavm_bcm_ram_dest_addr_t;

#define CAVM_BCM_RAM_DEST_ADDR CAVM_BCM_RAM_DEST_ADDR_FUNC()
static inline uint64_t CAVM_BCM_RAM_DEST_ADDR_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_BCM_RAM_DEST_ADDR_FUNC(void)
{
    return 0x80b000004010ll;
}

#define typedef_CAVM_BCM_RAM_DEST_ADDR cavm_bcm_ram_dest_addr_t
#define bustype_CAVM_BCM_RAM_DEST_ADDR CSR_TYPE_NCB
#define basename_CAVM_BCM_RAM_DEST_ADDR "BCM_RAM_DEST_ADDR"
#define device_bar_CAVM_BCM_RAM_DEST_ADDR 0x0 /* PF_BAR0 */
#define busnum_CAVM_BCM_RAM_DEST_ADDR 0
#define arguments_CAVM_BCM_RAM_DEST_ADDR -1,-1,-1,-1

/**
 * Register (NCB) bcm_ram_size
 *
 * CPC RAM Size Register
 */
union cavm_bcm_ram_size
{
    uint64_t u;
    struct cavm_bcm_ram_size_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t size                  : 64; /**< [ 63:  0](R/W) CPC RAM size as reflected to BCM DMA */
#else /* Word 0 - Little Endian */
        uint64_t size                  : 64; /**< [ 63:  0](R/W) CPC RAM size as reflected to BCM DMA */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_bcm_ram_size_s cn; */
};
typedef union cavm_bcm_ram_size cavm_bcm_ram_size_t;

#define CAVM_BCM_RAM_SIZE CAVM_BCM_RAM_SIZE_FUNC()
static inline uint64_t CAVM_BCM_RAM_SIZE_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_BCM_RAM_SIZE_FUNC(void)
{
    return 0x80b000004008ll;
}

#define typedef_CAVM_BCM_RAM_SIZE cavm_bcm_ram_size_t
#define bustype_CAVM_BCM_RAM_SIZE CSR_TYPE_NCB
#define basename_CAVM_BCM_RAM_SIZE "BCM_RAM_SIZE"
#define device_bar_CAVM_BCM_RAM_SIZE 0x0 /* PF_BAR0 */
#define busnum_CAVM_BCM_RAM_SIZE 0
#define arguments_CAVM_BCM_RAM_SIZE -1,-1,-1,-1

/**
 * Register (NCB32b) bcm_s_eco
 *
 * INTERNAL: BCM Secure ECO Register
 *
 * This register is reset on chip reset.
 */
union cavm_bcm_s_eco
{
    uint32_t u;
    struct cavm_bcm_s_eco_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t eco_rw                : 32; /**< [ 31:  0](SR/W) Reserved for secure ECO usage. */
#else /* Word 0 - Little Endian */
        uint32_t eco_rw                : 32; /**< [ 31:  0](SR/W) Reserved for secure ECO usage. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_bcm_s_eco_s cn; */
};
typedef union cavm_bcm_s_eco cavm_bcm_s_eco_t;

#define CAVM_BCM_S_ECO CAVM_BCM_S_ECO_FUNC()
static inline uint64_t CAVM_BCM_S_ECO_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_BCM_S_ECO_FUNC(void)
{
    return 0x80b000004104ll;
}

#define typedef_CAVM_BCM_S_ECO cavm_bcm_s_eco_t
#define bustype_CAVM_BCM_S_ECO CSR_TYPE_NCB32b
#define basename_CAVM_BCM_S_ECO "BCM_S_ECO"
#define device_bar_CAVM_BCM_S_ECO 0x0 /* PF_BAR0 */
#define busnum_CAVM_BCM_S_ECO 0
#define arguments_CAVM_BCM_S_ECO -1,-1,-1,-1

#endif /* __CAVM_CSRS_BCM_H__ */
