#ifndef __CAVM_CSRS_RST_H__
#define __CAVM_CSRS_RST_H__
/* This file is auto-generated. Do not edit */

/***********************license start***********************************
* Copyright (C) 2021-2023 Marvell.
* SPDX-License-Identifier: BSD-3-Clause
* https://spdx.org/licenses
***********************license end**************************************/


/**
 * @file
 *
 * Configuration and status register (CSR) address and type definitions for
 * RST.
 *
 * This file is auto generated. Do not edit.
 *
 */

/**
 * Enumeration rst_bar_e
 *
 * RST Base Address Register Enumeration
 * Enumeration of RST BAR.
 */
#define CAVM_RST_BAR_E_RST_PF_BAR0 (0x87e006000000ll)
#define CAVM_RST_BAR_E_RST_PF_BAR0_SIZE 0x10000ull
#define CAVM_RST_BAR_E_RST_PF_BAR4 (0x87e006f00000ll)
#define CAVM_RST_BAR_E_RST_PF_BAR4_SIZE 0x100000ull

/**
 * Enumeration rst_boot_method_e
 *
 * RST Primary Boot-strap Method Enumeration
 * Enumerates the primary (first choice) and secondary (second choice) boot
 * device. Primary boot method is selected with the straps
 * GPIO_STRAP_PIN_E::BOOT_METHOD2..0, and secondary is selected with the straps
 * GPIO_STRAP_PIN_E::BOOT_METHOD5..3.
 *
 * To disable the secondary method, use ::REMOTE.
 */
#define CAVM_RST_BOOT_METHOD_E_I3C3 (0)
#define CAVM_RST_BOOT_METHOD_E_I3C4 (1)
#define CAVM_RST_BOOT_METHOD_E_REMOTE (7)
#define CAVM_RST_BOOT_METHOD_E_SPI0_CS0 (2)
#define CAVM_RST_BOOT_METHOD_E_SPI0_CS1 (3)
#define CAVM_RST_BOOT_METHOD_E_SPI1_CS0 (4)
#define CAVM_RST_BOOT_METHOD_E_SPI1_CS1 (5)
#define CAVM_RST_BOOT_METHOD_E_UART (6)

/**
 * Enumeration rst_int_vec_e
 *
 * RST MSI-X Vector Enumeration
 * Enumerates the MSI-X interrupt vectors.
 */
#define CAVM_RST_INT_VEC_E_INTS (0)

/**
 * Enumeration rst_pll_sel_e
 *
 * RST PLL Selection (DEPRECATED - REMOVE THIS) Enumeration
 * Enumerates the values of RST_PLL()[NEXT_PLL_SEL] and RST_PLL()[CUR_PLL_SEL]
 * (DEPRECATED - REMOVE THIS).
 */
#define CAVM_RST_PLL_SEL_E_ARO (6)
#define CAVM_RST_PLL_SEL_E_BYPASS (2)
#define CAVM_RST_PLL_SEL_E_OFF (3)
#define CAVM_RST_PLL_SEL_E_PLL0 (4)
#define CAVM_RST_PLL_SEL_E_PLL1 (5)
#define CAVM_RST_PLL_SEL_E_REFCLK (1)
#define CAVM_RST_PLL_SEL_E_RSVD (7)
#define CAVM_RST_PLL_SEL_E_RUNT (0)

/**
 * Enumeration rst_source_e
 *
 * RST Cause Enumeration
 * Enumeration of reset sources.
 */
#define CAVM_RST_SOURCE_E_DCOK0_PIN (0)
#define CAVM_RST_SOURCE_E_DCOK1_PIN (1)
#define CAVM_RST_SOURCE_E_DOMAIN_0_REQ0 (0x11)
#define CAVM_RST_SOURCE_E_DOMAIN_0_REQ1 (0x12)
#define CAVM_RST_SOURCE_E_DOMAIN_0_SOFT (0x10)
#define CAVM_RST_SOURCE_E_DOMAIN_1_REQ0 (0x14)
#define CAVM_RST_SOURCE_E_DOMAIN_1_REQ1 (0x15)
#define CAVM_RST_SOURCE_E_DOMAIN_1_SOFT (0x13)
#define CAVM_RST_SOURCE_E_DOMAIN_2_REQ0 (0x17)
#define CAVM_RST_SOURCE_E_DOMAIN_2_REQ1 (0x18)
#define CAVM_RST_SOURCE_E_DOMAIN_2_SOFT (0x16)
#define CAVM_RST_SOURCE_E_DOMAIN_3_REQ0 (0x1a)
#define CAVM_RST_SOURCE_E_DOMAIN_3_REQ1 (0x1b)
#define CAVM_RST_SOURCE_E_DOMAIN_3_SOFT (0x19)
#define CAVM_RST_SOURCE_E_DOMAIN_4_REQ0 (0x1d)
#define CAVM_RST_SOURCE_E_DOMAIN_4_REQ1 (0x1e)
#define CAVM_RST_SOURCE_E_DOMAIN_4_SOFT (0x1c)
#define CAVM_RST_SOURCE_E_DOMAIN_5_REQ0 (0x20)
#define CAVM_RST_SOURCE_E_DOMAIN_5_REQ1 (0x21)
#define CAVM_RST_SOURCE_E_DOMAIN_5_SOFT (0x1f)
#define CAVM_RST_SOURCE_E_DOMAIN_6_REQ0 (0x23)
#define CAVM_RST_SOURCE_E_DOMAIN_6_REQ1 (0x24)
#define CAVM_RST_SOURCE_E_DOMAIN_6_SOFT (0x22)
#define CAVM_RST_SOURCE_E_DOMAIN_7_REQ0 (0x26)
#define CAVM_RST_SOURCE_E_DOMAIN_7_REQ1 (0x27)
#define CAVM_RST_SOURCE_E_DOMAIN_7_SOFT (0x25)
#define CAVM_RST_SOURCE_E_GBL_CHIP_SOFT (8)
#define CAVM_RST_SOURCE_E_GBL_COLD_SOFT (4)
#define CAVM_RST_SOURCE_E_GLOBAL_CHIP (0xa)
#define CAVM_RST_SOURCE_E_GLOBAL_COLD (3)
#define CAVM_RST_SOURCE_E_GLOBAL_REQ0 (0xb)
#define CAVM_RST_SOURCE_E_GLOBAL_REQ1 (0xc)
#define CAVM_RST_SOURCE_E_LOCAL_CHIP_SOFT (9)
#define CAVM_RST_SOURCE_E_LOCAL_COLD_SOFT (5)
#define CAVM_RST_SOURCE_E_LOCAL_PG (2)
#define CAVM_RST_SOURCE_E_LOCAL_REQ0 (0xd)
#define CAVM_RST_SOURCE_E_LOCAL_REQ1 (0xe)
#define CAVM_RST_SOURCE_E_XCP0_SOFT (0x28)
#define CAVM_RST_SOURCE_E_XCP0_SYSRESET (0x29)
#define CAVM_RST_SOURCE_E_XCP0_WDOG (0x2a)
#define CAVM_RST_SOURCE_E_XCP1_SOFT (0x2b)
#define CAVM_RST_SOURCE_E_XCP1_SYSRESET (0x2c)
#define CAVM_RST_SOURCE_E_XCP1_WDOG (0x2d)
#define CAVM_RST_SOURCE_E_XCP2_SOFT (0x2e)
#define CAVM_RST_SOURCE_E_XCP2_SYSRESET (0x2f)
#define CAVM_RST_SOURCE_E_XCP2_WDOG (0x30)
#define CAVM_RST_SOURCE_E_XCP3_SOFT (0x31)
#define CAVM_RST_SOURCE_E_XCP3_SYSRESET (0x32)
#define CAVM_RST_SOURCE_E_XCP3_WDOG (0x33)

/**
 * Structure rst_boot_stat_s
 *
 * BOOT_STATUS field Structure
 * The ROM boot code stores this data in the RST_BOOT_STATUS register, once per each boot attempt.
 * Bits 31:0 For Primary partition.
 * Bits 63:32 For Secondary partition.
 */
union cavm_rst_boot_stat_s
{
    uint64_t u;
    struct cavm_rst_boot_stat_s_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t s_image_partition     : 1;  /**< [ 63: 63] Indicates if primary or secondary flash location was used on the boot media.
                                                                 When read as 0, indicates that booting from 0x10000 and read as 1, means booting from 0x02010000. */
        uint64_t s_boot_method         : 3;  /**< [ 62: 60] BootStrap value of boot path. See RST_BOOT_METHOD_E */
        uint64_t reserved_56_59        : 4;
        uint64_t s_error_module        : 8;  /**< [ 55: 48] Subsystem within the BL0 ROM where error occurred, reference the Marvell Boot
                                                                 Software Reference Manual. */
        uint64_t s_local_error_code    : 16; /**< [ 47: 32] Subsystem specific BL0 ROM error code, reference the Marvell Boot Software
                                                                 Trusted Image Module (TIM) Guide. */
        uint64_t p_image_partition     : 1;  /**< [ 31: 31] Indicates if primary or secondary flash location was used on the boot media.
                                                                 When read as 0, indicates that booting from 0x10000 and read as 1, means booting from 0x02010000. */
        uint64_t p_boot_method         : 3;  /**< [ 30: 28] BootStrap value of boot path. See RST_BOOT_METHOD_E */
        uint64_t reserved_24_27        : 4;
        uint64_t p_error_module        : 8;  /**< [ 23: 16] Subsystem within the BL0 ROM where error occurred, reference the Marvell Boot
                                                                 Software Trusted Image Module (TIM) Guide. */
        uint64_t p_local_error_code    : 16; /**< [ 15:  0] Subsystem specific BL0 ROM error code, reference the Marvell Boot Software
                                                                 Trusted Image Module (TIM) Guide. */
#else /* Word 0 - Little Endian */
        uint64_t p_local_error_code    : 16; /**< [ 15:  0] Subsystem specific BL0 ROM error code, reference the Marvell Boot Software
                                                                 Trusted Image Module (TIM) Guide. */
        uint64_t p_error_module        : 8;  /**< [ 23: 16] Subsystem within the BL0 ROM where error occurred, reference the Marvell Boot
                                                                 Software Trusted Image Module (TIM) Guide. */
        uint64_t reserved_24_27        : 4;
        uint64_t p_boot_method         : 3;  /**< [ 30: 28] BootStrap value of boot path. See RST_BOOT_METHOD_E */
        uint64_t p_image_partition     : 1;  /**< [ 31: 31] Indicates if primary or secondary flash location was used on the boot media.
                                                                 When read as 0, indicates that booting from 0x10000 and read as 1, means booting from 0x02010000. */
        uint64_t s_local_error_code    : 16; /**< [ 47: 32] Subsystem specific BL0 ROM error code, reference the Marvell Boot Software
                                                                 Trusted Image Module (TIM) Guide. */
        uint64_t s_error_module        : 8;  /**< [ 55: 48] Subsystem within the BL0 ROM where error occurred, reference the Marvell Boot
                                                                 Software Reference Manual. */
        uint64_t reserved_56_59        : 4;
        uint64_t s_boot_method         : 3;  /**< [ 62: 60] BootStrap value of boot path. See RST_BOOT_METHOD_E */
        uint64_t s_image_partition     : 1;  /**< [ 63: 63] Indicates if primary or secondary flash location was used on the boot media.
                                                                 When read as 0, indicates that booting from 0x10000 and read as 1, means booting from 0x02010000. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_rst_boot_stat_s_s cn; */
};

/**
 * Register (RSL) rst_ap_available#
 *
 * RST Core Availability Register
 * This register is not accessible through ROM scripts; see SCR_WRITE32_S[ADDR].
 */
union cavm_rst_ap_availablex
{
    uint64_t u;
    struct cavm_rst_ap_availablex_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t present               : 64; /**< [ 63:  0](RO/H) Each bit set indicates a core is present.  Up to 256 cores are supported.
                                                                 Available cores form a continuous vector 0..N-1. */
#else /* Word 0 - Little Endian */
        uint64_t present               : 64; /**< [ 63:  0](RO/H) Each bit set indicates a core is present.  Up to 256 cores are supported.
                                                                 Available cores form a continuous vector 0..N-1. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_rst_ap_availablex_s cn; */
};
typedef union cavm_rst_ap_availablex cavm_rst_ap_availablex_t;

static inline uint64_t CAVM_RST_AP_AVAILABLEX(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_RST_AP_AVAILABLEX(uint64_t a)
{
    if (a<=3)
        return 0x87e006001730ll + 8ll * ((a) & 0x3);
    __cavm_csr_fatal("RST_AP_AVAILABLEX", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_RST_AP_AVAILABLEX(a) cavm_rst_ap_availablex_t
#define bustype_CAVM_RST_AP_AVAILABLEX(a) CSR_TYPE_RSL
#define basename_CAVM_RST_AP_AVAILABLEX(a) "RST_AP_AVAILABLEX"
#define device_bar_CAVM_RST_AP_AVAILABLEX(a) 0x0 /* PF_BAR0 */
#define busnum_CAVM_RST_AP_AVAILABLEX(a) (a)
#define arguments_CAVM_RST_AP_AVAILABLEX(a) (a),-1,-1,-1

/**
 * Register (RSL) rst_boot
 *
 * RST Boot Register
 * This register is not accessible through ROM scripts; see SCR_WRITE32_S[ADDR].
 */
union cavm_rst_boot
{
    uint64_t u;
    struct cavm_rst_boot_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_12_63        : 52;
        uint64_t rboot                 : 4;  /**< [ 11:  8](R/W/H) Keep Boot device from leaving reset on the next chip reset.
                                                                 Typically one device is enabled on cold or chip reset. */
        uint64_t reserved_1_7          : 7;
        uint64_t rboot_pin             : 1;  /**< [  0:  0](RO/H) Remote boot strap. The value is set when primary boot method is RST_BOOT_METHOD_E::REMOTE
                                                                 when the GPIO pins are sampled on the rising edge of DCOK. */
#else /* Word 0 - Little Endian */
        uint64_t rboot_pin             : 1;  /**< [  0:  0](RO/H) Remote boot strap. The value is set when primary boot method is RST_BOOT_METHOD_E::REMOTE
                                                                 when the GPIO pins are sampled on the rising edge of DCOK. */
        uint64_t reserved_1_7          : 7;
        uint64_t rboot                 : 4;  /**< [ 11:  8](R/W/H) Keep Boot device from leaving reset on the next chip reset.
                                                                 Typically one device is enabled on cold or chip reset. */
        uint64_t reserved_12_63        : 52;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_rst_boot_s cn; */
};
typedef union cavm_rst_boot cavm_rst_boot_t;

#define CAVM_RST_BOOT CAVM_RST_BOOT_FUNC()
static inline uint64_t CAVM_RST_BOOT_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_RST_BOOT_FUNC(void)
{
    return 0x87e006001600ll;
}

#define typedef_CAVM_RST_BOOT cavm_rst_boot_t
#define bustype_CAVM_RST_BOOT CSR_TYPE_RSL
#define basename_CAVM_RST_BOOT "RST_BOOT"
#define device_bar_CAVM_RST_BOOT 0x0 /* PF_BAR0 */
#define busnum_CAVM_RST_BOOT 0
#define arguments_CAVM_RST_BOOT -1,-1,-1,-1

/**
 * Register (RSL) rst_boot_status
 *
 * RST Boot Status Register
 * This register is not accessible through ROM scripts; see SCR_WRITE32_S[ADDR].
 */
union cavm_rst_boot_status
{
    uint64_t u;
    struct cavm_rst_boot_status_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t stat3                 : 16; /**< [ 63: 48](R/W) JTAG-accessible boot status word three. Used by software to indicate progress of
                                                                 boot. Accessible via JTG/DTX with offset 17.
                                                                 This field is always reinitialized on a chip reset. */
        uint64_t stat2                 : 16; /**< [ 47: 32](R/W) JTAG-accessible boot status word two. Used by software to indicate progress of
                                                                 boot. Accessible via JTG/DTX with offset 16.
                                                                 This field is always reinitialized on a chip reset. */
        uint64_t stat1                 : 16; /**< [ 31: 16](R/W) JTAG-accessible boot status word one. Used by software to indicate progress of
                                                                 boot. Accessible via JTG/DTX with offset 13.
                                                                 This field is always reinitialized on a chip reset. */
        uint64_t stat0                 : 16; /**< [ 15:  0](R/W) JTAG-accessible boot status word zero. Used by software to indicate progress of
                                                                 boot. Accessible via JTG/DTX with offset 12.
                                                                 This field is always reinitialized on a chip reset. */
#else /* Word 0 - Little Endian */
        uint64_t stat0                 : 16; /**< [ 15:  0](R/W) JTAG-accessible boot status word zero. Used by software to indicate progress of
                                                                 boot. Accessible via JTG/DTX with offset 12.
                                                                 This field is always reinitialized on a chip reset. */
        uint64_t stat1                 : 16; /**< [ 31: 16](R/W) JTAG-accessible boot status word one. Used by software to indicate progress of
                                                                 boot. Accessible via JTG/DTX with offset 13.
                                                                 This field is always reinitialized on a chip reset. */
        uint64_t stat2                 : 16; /**< [ 47: 32](R/W) JTAG-accessible boot status word two. Used by software to indicate progress of
                                                                 boot. Accessible via JTG/DTX with offset 16.
                                                                 This field is always reinitialized on a chip reset. */
        uint64_t stat3                 : 16; /**< [ 63: 48](R/W) JTAG-accessible boot status word three. Used by software to indicate progress of
                                                                 boot. Accessible via JTG/DTX with offset 17.
                                                                 This field is always reinitialized on a chip reset. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_rst_boot_status_s cn; */
};
typedef union cavm_rst_boot_status cavm_rst_boot_status_t;

#define CAVM_RST_BOOT_STATUS CAVM_RST_BOOT_STATUS_FUNC()
static inline uint64_t CAVM_RST_BOOT_STATUS_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_RST_BOOT_STATUS_FUNC(void)
{
    return 0x87e006001800ll;
}

#define typedef_CAVM_RST_BOOT_STATUS cavm_rst_boot_status_t
#define bustype_CAVM_RST_BOOT_STATUS CSR_TYPE_RSL
#define basename_CAVM_RST_BOOT_STATUS "RST_BOOT_STATUS"
#define device_bar_CAVM_RST_BOOT_STATUS 0x0 /* PF_BAR0 */
#define busnum_CAVM_RST_BOOT_STATUS 0
#define arguments_CAVM_RST_BOOT_STATUS -1,-1,-1,-1

/**
 * Register (RSL) rst_cold_data#
 *
 * RST Cold Reset Data Registers
 * This register is not accessible through ROM scripts; see SCR_WRITE32_S[ADDR].
 */
union cavm_rst_cold_datax
{
    uint64_t u;
    struct cavm_rst_cold_datax_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t data                  : 64; /**< [ 63:  0](R/W) Scratch data registers preserved through chip reset.
                                                                 This field is always reinitialized on a cold reset. */
#else /* Word 0 - Little Endian */
        uint64_t data                  : 64; /**< [ 63:  0](R/W) Scratch data registers preserved through chip reset.
                                                                 This field is always reinitialized on a cold reset. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_rst_cold_datax_s cn; */
};
typedef union cavm_rst_cold_datax cavm_rst_cold_datax_t;

static inline uint64_t CAVM_RST_COLD_DATAX(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_RST_COLD_DATAX(uint64_t a)
{
    if (a<=5)
        return 0x87e0060017c0ll + 8ll * ((a) & 0x7);
    __cavm_csr_fatal("RST_COLD_DATAX", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_RST_COLD_DATAX(a) cavm_rst_cold_datax_t
#define bustype_CAVM_RST_COLD_DATAX(a) CSR_TYPE_RSL
#define basename_CAVM_RST_COLD_DATAX(a) "RST_COLD_DATAX"
#define device_bar_CAVM_RST_COLD_DATAX(a) 0x0 /* PF_BAR0 */
#define busnum_CAVM_RST_COLD_DATAX(a) (a)
#define arguments_CAVM_RST_COLD_DATAX(a) (a),-1,-1,-1

/**
 * Register (RSL) rst_const
 *
 * RST Constant Register
 * This register is accessible through ROM scripts; see SCR_WRITE32_S[ADDR].
 */
union cavm_rst_const
{
    uint64_t u;
    struct cavm_rst_const_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_16_63        : 48;
        uint64_t domain_bist           : 8;  /**< [ 15:  8](RO) Domain Memory BIST.
                                                                 When set, Indicates if RST_DOMAIN_W1C\<N\> runs a Clear BIST before releasing
                                                                 the reset. */
        uint64_t reserved_4_7          : 4;
        uint64_t xcp_present           : 4;  /**< [  3:  0](RO) XCP Present.  Indicates if XCPs are attached to this RST logic. */
#else /* Word 0 - Little Endian */
        uint64_t xcp_present           : 4;  /**< [  3:  0](RO) XCP Present.  Indicates if XCPs are attached to this RST logic. */
        uint64_t reserved_4_7          : 4;
        uint64_t domain_bist           : 8;  /**< [ 15:  8](RO) Domain Memory BIST.
                                                                 When set, Indicates if RST_DOMAIN_W1C\<N\> runs a Clear BIST before releasing
                                                                 the reset. */
        uint64_t reserved_16_63        : 48;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_rst_const_s cn; */
};
typedef union cavm_rst_const cavm_rst_const_t;

#define CAVM_RST_CONST CAVM_RST_CONST_FUNC()
static inline uint64_t CAVM_RST_CONST_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_RST_CONST_FUNC(void)
{
    return 0x87e0060019f8ll;
}

#define typedef_CAVM_RST_CONST cavm_rst_const_t
#define bustype_CAVM_RST_CONST CSR_TYPE_RSL
#define basename_CAVM_RST_CONST "RST_CONST"
#define device_bar_CAVM_RST_CONST 0x0 /* PF_BAR0 */
#define busnum_CAVM_RST_CONST 0
#define arguments_CAVM_RST_CONST -1,-1,-1,-1

/**
 * Register (RSL) rst_debug
 *
 * RST Debug Register
 * This register is not accessible through ROM scripts; see SCR_WRITE32_S[ADDR].
 */
union cavm_rst_debug
{
    uint64_t u;
    struct cavm_rst_debug_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_2_63         : 62;
        uint64_t clkena_on             : 1;  /**< [  1:  1](R/W) Force global clock enable on.
                                                                 Setting this field will force all clocks on while and dramatically
                                                                 increase power consumption.
                                                                 For diagnostic use only.
                                                                 This field is always reinitialized on a cold reset. */
        uint64_t clk_on                : 1;  /**< [  0:  0](R/W) Force conditional clock used for interrupt logic to always be on.
                                                                 For diagnostic use only.
                                                                 This field is always reinitialized on a cold reset. */
#else /* Word 0 - Little Endian */
        uint64_t clk_on                : 1;  /**< [  0:  0](R/W) Force conditional clock used for interrupt logic to always be on.
                                                                 For diagnostic use only.
                                                                 This field is always reinitialized on a cold reset. */
        uint64_t clkena_on             : 1;  /**< [  1:  1](R/W) Force global clock enable on.
                                                                 Setting this field will force all clocks on while and dramatically
                                                                 increase power consumption.
                                                                 For diagnostic use only.
                                                                 This field is always reinitialized on a cold reset. */
        uint64_t reserved_2_63         : 62;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_rst_debug_s cn; */
};
typedef union cavm_rst_debug cavm_rst_debug_t;

#define CAVM_RST_DEBUG CAVM_RST_DEBUG_FUNC()
static inline uint64_t CAVM_RST_DEBUG_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_RST_DEBUG_FUNC(void)
{
    return 0x87e0060016c0ll;
}

#define typedef_CAVM_RST_DEBUG cavm_rst_debug_t
#define bustype_CAVM_RST_DEBUG CSR_TYPE_RSL
#define basename_CAVM_RST_DEBUG "RST_DEBUG"
#define device_bar_CAVM_RST_DEBUG 0x0 /* PF_BAR0 */
#define busnum_CAVM_RST_DEBUG 0
#define arguments_CAVM_RST_DEBUG -1,-1,-1,-1

/**
 * Register (RSL) rst_delay
 *
 * RST Delay Register
 * This register is not accessible through ROM scripts; see SCR_WRITE32_S[ADDR].
 */
union cavm_rst_delay
{
    uint64_t u;
    struct cavm_rst_delay_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_24_63        : 40;
        uint64_t rst_dly               : 24; /**< [ 23:  0](R/W) Reset delay. Chip reset request immediately causes an early reset
                                                                 notification by asserting grstate.early_rst_n.  The assertion of the
                                                                 chip reset is delayed by this many 100 MHz PLL reference clocks.
                                                                 The minimum value is 1 uS.
                                                                 This field is reinitialized with a cold reset. */
#else /* Word 0 - Little Endian */
        uint64_t rst_dly               : 24; /**< [ 23:  0](R/W) Reset delay. Chip reset request immediately causes an early reset
                                                                 notification by asserting grstate.early_rst_n.  The assertion of the
                                                                 chip reset is delayed by this many 100 MHz PLL reference clocks.
                                                                 The minimum value is 1 uS.
                                                                 This field is reinitialized with a cold reset. */
        uint64_t reserved_24_63        : 40;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_rst_delay_s cn; */
};
typedef union cavm_rst_delay cavm_rst_delay_t;

#define CAVM_RST_DELAY CAVM_RST_DELAY_FUNC()
static inline uint64_t CAVM_RST_DELAY_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_RST_DELAY_FUNC(void)
{
    return 0x87e006001608ll;
}

#define typedef_CAVM_RST_DELAY cavm_rst_delay_t
#define bustype_CAVM_RST_DELAY CSR_TYPE_RSL
#define basename_CAVM_RST_DELAY "RST_DELAY"
#define device_bar_CAVM_RST_DELAY 0x0 /* PF_BAR0 */
#define busnum_CAVM_RST_DELAY 0
#define arguments_CAVM_RST_DELAY -1,-1,-1,-1

/**
 * Register (RSL) rst_domain_w1c#
 *
 * RST Domain Reset W1C Registers
 */
union cavm_rst_domain_w1cx
{
    uint64_t u;
    struct cavm_rst_domain_w1cx_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_2_63         : 62;
        uint64_t bip                   : 1;  /**< [  1:  1](RO) Domain BIST In Progress.
                                                                 When set, hardware is performing memory BIST to clear memories and domain is still in reset.
                                                                 After a write to RST_DOMAIN_W1C, if both this field and [SOFT_RST] clear, domain is out of reset.
                                                                 If this field is clear and [SOFT_RST] is still set then another source is
                                                                 holding the domain in reset. */
        uint64_t soft_rst              : 1;  /**< [  0:  0](R/W1C/H) Software-initiated deassertion of the Domain Reset.
                                                                 When set to one, DOMAIN_RST_N\<n\> is deasserted.
                                                                 All DOMAIN_RST_N\<n\> signals are asserted with Chip Reset and must be
                                                                 cleared by writing to this register.
                                                                 Reading this register shows the active high version of the signals. */
#else /* Word 0 - Little Endian */
        uint64_t soft_rst              : 1;  /**< [  0:  0](R/W1C/H) Software-initiated deassertion of the Domain Reset.
                                                                 When set to one, DOMAIN_RST_N\<n\> is deasserted.
                                                                 All DOMAIN_RST_N\<n\> signals are asserted with Chip Reset and must be
                                                                 cleared by writing to this register.
                                                                 Reading this register shows the active high version of the signals. */
        uint64_t bip                   : 1;  /**< [  1:  1](RO) Domain BIST In Progress.
                                                                 When set, hardware is performing memory BIST to clear memories and domain is still in reset.
                                                                 After a write to RST_DOMAIN_W1C, if both this field and [SOFT_RST] clear, domain is out of reset.
                                                                 If this field is clear and [SOFT_RST] is still set then another source is
                                                                 holding the domain in reset. */
        uint64_t reserved_2_63         : 62;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_rst_domain_w1cx_s cn; */
};
typedef union cavm_rst_domain_w1cx cavm_rst_domain_w1cx_t;

static inline uint64_t CAVM_RST_DOMAIN_W1CX(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_RST_DOMAIN_W1CX(uint64_t a)
{
    if (a<=7)
        return 0x87e006001940ll + 8ll * ((a) & 0x7);
    __cavm_csr_fatal("RST_DOMAIN_W1CX", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_RST_DOMAIN_W1CX(a) cavm_rst_domain_w1cx_t
#define bustype_CAVM_RST_DOMAIN_W1CX(a) CSR_TYPE_RSL
#define basename_CAVM_RST_DOMAIN_W1CX(a) "RST_DOMAIN_W1CX"
#define device_bar_CAVM_RST_DOMAIN_W1CX(a) 0x0 /* PF_BAR0 */
#define busnum_CAVM_RST_DOMAIN_W1CX(a) (a)
#define arguments_CAVM_RST_DOMAIN_W1CX(a) (a),-1,-1,-1

/**
 * Register (RSL) rst_domain_w1s#
 *
 * RST Domain Reset W1S Registers
 */
union cavm_rst_domain_w1sx
{
    uint64_t u;
    struct cavm_rst_domain_w1sx_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_1_63         : 63;
        uint64_t soft_rst              : 1;  /**< [  0:  0](R/W1S/H) Software-initiated assertion of the Domain Reset.
                                                                 When set to one, DOMAIN_RST_N\<n\> is asserted.
                                                                 All DOMAIN_RST_N\<n\> signals are asserted with Chip Reset and must be
                                                                 cleared by writing to RST_DOMAIN_W1C.
                                                                 Reading this register shows the active high version of the signals. */
#else /* Word 0 - Little Endian */
        uint64_t soft_rst              : 1;  /**< [  0:  0](R/W1S/H) Software-initiated assertion of the Domain Reset.
                                                                 When set to one, DOMAIN_RST_N\<n\> is asserted.
                                                                 All DOMAIN_RST_N\<n\> signals are asserted with Chip Reset and must be
                                                                 cleared by writing to RST_DOMAIN_W1C.
                                                                 Reading this register shows the active high version of the signals. */
        uint64_t reserved_1_63         : 63;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_rst_domain_w1sx_s cn; */
};
typedef union cavm_rst_domain_w1sx cavm_rst_domain_w1sx_t;

static inline uint64_t CAVM_RST_DOMAIN_W1SX(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_RST_DOMAIN_W1SX(uint64_t a)
{
    if (a<=7)
        return 0x87e006001840ll + 8ll * ((a) & 0x7);
    __cavm_csr_fatal("RST_DOMAIN_W1SX", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_RST_DOMAIN_W1SX(a) cavm_rst_domain_w1sx_t
#define bustype_CAVM_RST_DOMAIN_W1SX(a) CSR_TYPE_RSL
#define basename_CAVM_RST_DOMAIN_W1SX(a) "RST_DOMAIN_W1SX"
#define device_bar_CAVM_RST_DOMAIN_W1SX(a) 0x0 /* PF_BAR0 */
#define busnum_CAVM_RST_DOMAIN_W1SX(a) (a)
#define arguments_CAVM_RST_DOMAIN_W1SX(a) (a),-1,-1,-1

/**
 * Register (RSL) rst_gbl_chip_w1s
 *
 * RST Global Chip Reset Register
 * This register is not accessible through ROM scripts; see SCR_WRITE32_S[ADDR].
 */
union cavm_rst_gbl_chip_w1s
{
    uint64_t u;
    struct cavm_rst_gbl_chip_w1s_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_1_63         : 63;
        uint64_t soft_rst              : 1;  /**< [  0:  0](R/W1S/H) Software-initiated global chip reset.
                                                                 When set to one, places the entire chip into reset. At the completion
                                                                 of the reset the field is cleared.  This is similar to asserting and
                                                                 deasserting the CHIP_RESET_L pin.
                                                                 This field is always reinitialized on a cold reset. */
#else /* Word 0 - Little Endian */
        uint64_t soft_rst              : 1;  /**< [  0:  0](R/W1S/H) Software-initiated global chip reset.
                                                                 When set to one, places the entire chip into reset. At the completion
                                                                 of the reset the field is cleared.  This is similar to asserting and
                                                                 deasserting the CHIP_RESET_L pin.
                                                                 This field is always reinitialized on a cold reset. */
        uint64_t reserved_1_63         : 63;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_rst_gbl_chip_w1s_s cn; */
};
typedef union cavm_rst_gbl_chip_w1s cavm_rst_gbl_chip_w1s_t;

#define CAVM_RST_GBL_CHIP_W1S CAVM_RST_GBL_CHIP_W1S_FUNC()
static inline uint64_t CAVM_RST_GBL_CHIP_W1S_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_RST_GBL_CHIP_W1S_FUNC(void)
{
    return 0x87e006001820ll;
}

#define typedef_CAVM_RST_GBL_CHIP_W1S cavm_rst_gbl_chip_w1s_t
#define bustype_CAVM_RST_GBL_CHIP_W1S CSR_TYPE_RSL
#define basename_CAVM_RST_GBL_CHIP_W1S "RST_GBL_CHIP_W1S"
#define device_bar_CAVM_RST_GBL_CHIP_W1S 0x0 /* PF_BAR0 */
#define busnum_CAVM_RST_GBL_CHIP_W1S 0
#define arguments_CAVM_RST_GBL_CHIP_W1S -1,-1,-1,-1

/**
 * Register (RSL) rst_gbl_cold_w1s
 *
 * RST Global Cold Reset Register
 * This register is not accessible through ROM scripts; see SCR_WRITE32_S[ADDR].
 */
union cavm_rst_gbl_cold_w1s
{
    uint64_t u;
    struct cavm_rst_gbl_cold_w1s_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_1_63         : 63;
        uint64_t soft_rst              : 1;  /**< [  0:  0](R/W1S/H) Software-initiated global cold reset.
                                                                 When set to one, places the entire chip into cold reset. At the completion
                                                                 of the reset the field is cleared.
                                                                 This action is similar to deasserting and asserting DCOKn/PG with the
                                                                 exception that external pins are not sampled again.
                                                                 This field is always reinitialized on a cold reset. */
#else /* Word 0 - Little Endian */
        uint64_t soft_rst              : 1;  /**< [  0:  0](R/W1S/H) Software-initiated global cold reset.
                                                                 When set to one, places the entire chip into cold reset. At the completion
                                                                 of the reset the field is cleared.
                                                                 This action is similar to deasserting and asserting DCOKn/PG with the
                                                                 exception that external pins are not sampled again.
                                                                 This field is always reinitialized on a cold reset. */
        uint64_t reserved_1_63         : 63;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_rst_gbl_cold_w1s_s cn; */
};
typedef union cavm_rst_gbl_cold_w1s cavm_rst_gbl_cold_w1s_t;

#define CAVM_RST_GBL_COLD_W1S CAVM_RST_GBL_COLD_W1S_FUNC()
static inline uint64_t CAVM_RST_GBL_COLD_W1S_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_RST_GBL_COLD_W1S_FUNC(void)
{
    return 0x87e006001810ll;
}

#define typedef_CAVM_RST_GBL_COLD_W1S cavm_rst_gbl_cold_w1s_t
#define bustype_CAVM_RST_GBL_COLD_W1S CSR_TYPE_RSL
#define basename_CAVM_RST_GBL_COLD_W1S "RST_GBL_COLD_W1S"
#define device_bar_CAVM_RST_GBL_COLD_W1S 0x0 /* PF_BAR0 */
#define busnum_CAVM_RST_GBL_COLD_W1S 0
#define arguments_CAVM_RST_GBL_COLD_W1S -1,-1,-1,-1

/**
 * Register (RSL) rst_int
 *
 * RST Interrupt Register
 * This register is not accessible through ROM scripts; see SCR_WRITE32_S[ADDR].
 */
union cavm_rst_int
{
    uint64_t u;
    struct cavm_rst_int_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_20_63        : 44;
        uint64_t xcp_reset             : 4;  /**< [ 19: 16](R/W1C/H) XCP Reset caused by RST_XCP_W1S, SYSRESET or WDOG Requests. */
        uint64_t domain_reset          : 8;  /**< [ 15:  8](R/W1C/H) Domain Reset caused by RST_DOMAIN_W1S or DRESET_N_REQ_n\<0..1\>. */
        uint64_t io                    : 4;  /**< [  7:  4](R/W1C/H) IO signal state change.  RST_IO_CTL\<3..0\>[IO]. */
        uint64_t reserved_1_3          : 3;
        uint64_t early_chip            : 1;  /**< [  0:  0](R/W1C/H) Early Chip Reset Interrupt.
                                                                 Set when either a global or local chip reset request has been issued by this block. */
#else /* Word 0 - Little Endian */
        uint64_t early_chip            : 1;  /**< [  0:  0](R/W1C/H) Early Chip Reset Interrupt.
                                                                 Set when either a global or local chip reset request has been issued by this block. */
        uint64_t reserved_1_3          : 3;
        uint64_t io                    : 4;  /**< [  7:  4](R/W1C/H) IO signal state change.  RST_IO_CTL\<3..0\>[IO]. */
        uint64_t domain_reset          : 8;  /**< [ 15:  8](R/W1C/H) Domain Reset caused by RST_DOMAIN_W1S or DRESET_N_REQ_n\<0..1\>. */
        uint64_t xcp_reset             : 4;  /**< [ 19: 16](R/W1C/H) XCP Reset caused by RST_XCP_W1S, SYSRESET or WDOG Requests. */
        uint64_t reserved_20_63        : 44;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_rst_int_s cn; */
};
typedef union cavm_rst_int cavm_rst_int_t;

#define CAVM_RST_INT CAVM_RST_INT_FUNC()
static inline uint64_t CAVM_RST_INT_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_RST_INT_FUNC(void)
{
    return 0x87e006001628ll;
}

#define typedef_CAVM_RST_INT cavm_rst_int_t
#define bustype_CAVM_RST_INT CSR_TYPE_RSL
#define basename_CAVM_RST_INT "RST_INT"
#define device_bar_CAVM_RST_INT 0x0 /* PF_BAR0 */
#define busnum_CAVM_RST_INT 0
#define arguments_CAVM_RST_INT -1,-1,-1,-1

/**
 * Register (RSL) rst_int_ena_w1c
 *
 * RST Interrupt Enable Clear Register
 * This register clears interrupt enable bits.
 */
union cavm_rst_int_ena_w1c
{
    uint64_t u;
    struct cavm_rst_int_ena_w1c_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_20_63        : 44;
        uint64_t xcp_reset             : 4;  /**< [ 19: 16](R/W1C/H) Reads or clears enable for RST_INT[XCP_RESET]. */
        uint64_t domain_reset          : 8;  /**< [ 15:  8](R/W1C/H) Reads or clears enable for RST_INT[DOMAIN_RESET]. */
        uint64_t io                    : 4;  /**< [  7:  4](R/W1C/H) Reads or clears enable for RST_INT[IO]. */
        uint64_t reserved_1_3          : 3;
        uint64_t early_chip            : 1;  /**< [  0:  0](R/W1C/H) Reads or clears enable for RST_INT[EARLY_CHIP]. */
#else /* Word 0 - Little Endian */
        uint64_t early_chip            : 1;  /**< [  0:  0](R/W1C/H) Reads or clears enable for RST_INT[EARLY_CHIP]. */
        uint64_t reserved_1_3          : 3;
        uint64_t io                    : 4;  /**< [  7:  4](R/W1C/H) Reads or clears enable for RST_INT[IO]. */
        uint64_t domain_reset          : 8;  /**< [ 15:  8](R/W1C/H) Reads or clears enable for RST_INT[DOMAIN_RESET]. */
        uint64_t xcp_reset             : 4;  /**< [ 19: 16](R/W1C/H) Reads or clears enable for RST_INT[XCP_RESET]. */
        uint64_t reserved_20_63        : 44;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_rst_int_ena_w1c_s cn; */
};
typedef union cavm_rst_int_ena_w1c cavm_rst_int_ena_w1c_t;

#define CAVM_RST_INT_ENA_W1C CAVM_RST_INT_ENA_W1C_FUNC()
static inline uint64_t CAVM_RST_INT_ENA_W1C_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_RST_INT_ENA_W1C_FUNC(void)
{
    return 0x87e006001648ll;
}

#define typedef_CAVM_RST_INT_ENA_W1C cavm_rst_int_ena_w1c_t
#define bustype_CAVM_RST_INT_ENA_W1C CSR_TYPE_RSL
#define basename_CAVM_RST_INT_ENA_W1C "RST_INT_ENA_W1C"
#define device_bar_CAVM_RST_INT_ENA_W1C 0x0 /* PF_BAR0 */
#define busnum_CAVM_RST_INT_ENA_W1C 0
#define arguments_CAVM_RST_INT_ENA_W1C -1,-1,-1,-1

/**
 * Register (RSL) rst_int_ena_w1s
 *
 * RST Interrupt Enable Set Register
 * This register sets interrupt enable bits.
 */
union cavm_rst_int_ena_w1s
{
    uint64_t u;
    struct cavm_rst_int_ena_w1s_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_20_63        : 44;
        uint64_t xcp_reset             : 4;  /**< [ 19: 16](R/W1S/H) Reads or sets enable for RST_INT[XCP_RESET]. */
        uint64_t domain_reset          : 8;  /**< [ 15:  8](R/W1S/H) Reads or sets enable for RST_INT[DOMAIN_RESET]. */
        uint64_t io                    : 4;  /**< [  7:  4](R/W1S/H) Reads or sets enable for RST_INT[IO]. */
        uint64_t reserved_1_3          : 3;
        uint64_t early_chip            : 1;  /**< [  0:  0](R/W1S/H) Reads or sets enable for RST_INT[EARLY_CHIP]. */
#else /* Word 0 - Little Endian */
        uint64_t early_chip            : 1;  /**< [  0:  0](R/W1S/H) Reads or sets enable for RST_INT[EARLY_CHIP]. */
        uint64_t reserved_1_3          : 3;
        uint64_t io                    : 4;  /**< [  7:  4](R/W1S/H) Reads or sets enable for RST_INT[IO]. */
        uint64_t domain_reset          : 8;  /**< [ 15:  8](R/W1S/H) Reads or sets enable for RST_INT[DOMAIN_RESET]. */
        uint64_t xcp_reset             : 4;  /**< [ 19: 16](R/W1S/H) Reads or sets enable for RST_INT[XCP_RESET]. */
        uint64_t reserved_20_63        : 44;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_rst_int_ena_w1s_s cn; */
};
typedef union cavm_rst_int_ena_w1s cavm_rst_int_ena_w1s_t;

#define CAVM_RST_INT_ENA_W1S CAVM_RST_INT_ENA_W1S_FUNC()
static inline uint64_t CAVM_RST_INT_ENA_W1S_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_RST_INT_ENA_W1S_FUNC(void)
{
    return 0x87e006001640ll;
}

#define typedef_CAVM_RST_INT_ENA_W1S cavm_rst_int_ena_w1s_t
#define bustype_CAVM_RST_INT_ENA_W1S CSR_TYPE_RSL
#define basename_CAVM_RST_INT_ENA_W1S "RST_INT_ENA_W1S"
#define device_bar_CAVM_RST_INT_ENA_W1S 0x0 /* PF_BAR0 */
#define busnum_CAVM_RST_INT_ENA_W1S 0
#define arguments_CAVM_RST_INT_ENA_W1S -1,-1,-1,-1

/**
 * Register (RSL) rst_int_w1s
 *
 * RST Interrupt Set Register
 * This register sets interrupt bits.
 */
union cavm_rst_int_w1s
{
    uint64_t u;
    struct cavm_rst_int_w1s_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_20_63        : 44;
        uint64_t xcp_reset             : 4;  /**< [ 19: 16](R/W1S/H) Reads or sets RST_INT[XCP_RESET]. */
        uint64_t domain_reset          : 8;  /**< [ 15:  8](R/W1S/H) Reads or sets RST_INT[DOMAIN_RESET]. */
        uint64_t io                    : 4;  /**< [  7:  4](R/W1S/H) Reads or sets RST_INT[IO]. */
        uint64_t reserved_1_3          : 3;
        uint64_t early_chip            : 1;  /**< [  0:  0](R/W1S/H) Reads or sets RST_INT[EARLY_CHIP]. */
#else /* Word 0 - Little Endian */
        uint64_t early_chip            : 1;  /**< [  0:  0](R/W1S/H) Reads or sets RST_INT[EARLY_CHIP]. */
        uint64_t reserved_1_3          : 3;
        uint64_t io                    : 4;  /**< [  7:  4](R/W1S/H) Reads or sets RST_INT[IO]. */
        uint64_t domain_reset          : 8;  /**< [ 15:  8](R/W1S/H) Reads or sets RST_INT[DOMAIN_RESET]. */
        uint64_t xcp_reset             : 4;  /**< [ 19: 16](R/W1S/H) Reads or sets RST_INT[XCP_RESET]. */
        uint64_t reserved_20_63        : 44;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_rst_int_w1s_s cn; */
};
typedef union cavm_rst_int_w1s cavm_rst_int_w1s_t;

#define CAVM_RST_INT_W1S CAVM_RST_INT_W1S_FUNC()
static inline uint64_t CAVM_RST_INT_W1S_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_RST_INT_W1S_FUNC(void)
{
    return 0x87e006001630ll;
}

#define typedef_CAVM_RST_INT_W1S cavm_rst_int_w1s_t
#define bustype_CAVM_RST_INT_W1S CSR_TYPE_RSL
#define basename_CAVM_RST_INT_W1S "RST_INT_W1S"
#define device_bar_CAVM_RST_INT_W1S 0x0 /* PF_BAR0 */
#define busnum_CAVM_RST_INT_W1S 0
#define arguments_CAVM_RST_INT_W1S -1,-1,-1,-1

/**
 * Register (RSL) rst_io_ctl#
 *
 * RST IO Control Register
 * Spare I/O signals
 */
union cavm_rst_io_ctlx
{
    uint64_t u;
    struct cavm_rst_io_ctlx_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_4_63         : 60;
        uint64_t dir                   : 2;  /**< [  3:  2](R/W) IO Type.
                                                                  00 = Input
                                                                  01 = Reserved.
                                                                  10 = Output
                                                                  11 = Open Drain Output

                                                                 This field is cleared by a cold reset. */
        uint64_t io_reset              : 1;  /**< [  1:  1](R/W) IO Reset.
                                                                  0 = IO goes to 0 only on a cold reset.
                                                                  1 = IO goes to 0 on a chip or cold reset.

                                                                 This field is cleared by a cold reset. */
        uint64_t io                    : 1;  /**< [  0:  0](R/W) General Purpose IO Value. */
#else /* Word 0 - Little Endian */
        uint64_t io                    : 1;  /**< [  0:  0](R/W) General Purpose IO Value. */
        uint64_t io_reset              : 1;  /**< [  1:  1](R/W) IO Reset.
                                                                  0 = IO goes to 0 only on a cold reset.
                                                                  1 = IO goes to 0 on a chip or cold reset.

                                                                 This field is cleared by a cold reset. */
        uint64_t dir                   : 2;  /**< [  3:  2](R/W) IO Type.
                                                                  00 = Input
                                                                  01 = Reserved.
                                                                  10 = Output
                                                                  11 = Open Drain Output

                                                                 This field is cleared by a cold reset. */
        uint64_t reserved_4_63         : 60;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_rst_io_ctlx_s cn; */
};
typedef union cavm_rst_io_ctlx cavm_rst_io_ctlx_t;

static inline uint64_t CAVM_RST_IO_CTLX(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_RST_IO_CTLX(uint64_t a)
{
    if (a<=3)
        return 0x87e006001900ll + 8ll * ((a) & 0x3);
    __cavm_csr_fatal("RST_IO_CTLX", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_RST_IO_CTLX(a) cavm_rst_io_ctlx_t
#define bustype_CAVM_RST_IO_CTLX(a) CSR_TYPE_RSL
#define basename_CAVM_RST_IO_CTLX(a) "RST_IO_CTLX"
#define device_bar_CAVM_RST_IO_CTLX(a) 0x0 /* PF_BAR0 */
#define busnum_CAVM_RST_IO_CTLX(a) (a)
#define arguments_CAVM_RST_IO_CTLX(a) (a),-1,-1,-1

/**
 * Register (RSL) rst_lboot
 *
 * RST Last Boot Register
 * This register is not accessible through ROM scripts; see SCR_WRITE32_S[ADDR].
 */
union cavm_rst_lboot
{
    uint64_t u;
    struct cavm_rst_lboot_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t lboot                 : 64; /**< [ 63:  0](R/W1C/H) Bit vector of last reset cause.
                                                                 Bit numbers are enumerated by RST_SOURCE_E.
                                                                 Unused bits always read as zero.

                                                                 As various resets occur that were not merely side effects of more powerful resets,
                                                                 more and more bits will be set. But upon Cold Reset all bits are cleared except the
                                                                 appropriate cold reset bits. Bits can be individually cleared by writing 1 to them. */
#else /* Word 0 - Little Endian */
        uint64_t lboot                 : 64; /**< [ 63:  0](R/W1C/H) Bit vector of last reset cause.
                                                                 Bit numbers are enumerated by RST_SOURCE_E.
                                                                 Unused bits always read as zero.

                                                                 As various resets occur that were not merely side effects of more powerful resets,
                                                                 more and more bits will be set. But upon Cold Reset all bits are cleared except the
                                                                 appropriate cold reset bits. Bits can be individually cleared by writing 1 to them. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_rst_lboot_s cn; */
};
typedef union cavm_rst_lboot cavm_rst_lboot_t;

#define CAVM_RST_LBOOT CAVM_RST_LBOOT_FUNC()
static inline uint64_t CAVM_RST_LBOOT_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_RST_LBOOT_FUNC(void)
{
    return 0x87e006001620ll;
}

#define typedef_CAVM_RST_LBOOT cavm_rst_lboot_t
#define bustype_CAVM_RST_LBOOT CSR_TYPE_RSL
#define basename_CAVM_RST_LBOOT "RST_LBOOT"
#define device_bar_CAVM_RST_LBOOT 0x0 /* PF_BAR0 */
#define busnum_CAVM_RST_LBOOT 0
#define arguments_CAVM_RST_LBOOT -1,-1,-1,-1

/**
 * Register (RSL) rst_local_chip_w1s
 *
 * RST Local Chip Reset Register
 * This register is not accessible through ROM scripts; see SCR_WRITE32_S[ADDR].
 */
union cavm_rst_local_chip_w1s
{
    uint64_t u;
    struct cavm_rst_local_chip_w1s_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_1_63         : 63;
        uint64_t soft_rst              : 1;  /**< [  0:  0](R/W1S/H) Software-initiated local reset.
                                                                 When set to one, the logic creates a local reset request. At the completion
                                                                 of the reset the field is cleared.  This is similar to asserting and
                                                                 deasserting lreset_req_n.
                                                                 This field is always reinitialized on a cold reset. */
#else /* Word 0 - Little Endian */
        uint64_t soft_rst              : 1;  /**< [  0:  0](R/W1S/H) Software-initiated local reset.
                                                                 When set to one, the logic creates a local reset request. At the completion
                                                                 of the reset the field is cleared.  This is similar to asserting and
                                                                 deasserting lreset_req_n.
                                                                 This field is always reinitialized on a cold reset. */
        uint64_t reserved_1_63         : 63;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_rst_local_chip_w1s_s cn; */
};
typedef union cavm_rst_local_chip_w1s cavm_rst_local_chip_w1s_t;

#define CAVM_RST_LOCAL_CHIP_W1S CAVM_RST_LOCAL_CHIP_W1S_FUNC()
static inline uint64_t CAVM_RST_LOCAL_CHIP_W1S_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_RST_LOCAL_CHIP_W1S_FUNC(void)
{
    return 0x87e006001828ll;
}

#define typedef_CAVM_RST_LOCAL_CHIP_W1S cavm_rst_local_chip_w1s_t
#define bustype_CAVM_RST_LOCAL_CHIP_W1S CSR_TYPE_RSL
#define basename_CAVM_RST_LOCAL_CHIP_W1S "RST_LOCAL_CHIP_W1S"
#define device_bar_CAVM_RST_LOCAL_CHIP_W1S 0x0 /* PF_BAR0 */
#define busnum_CAVM_RST_LOCAL_CHIP_W1S 0
#define arguments_CAVM_RST_LOCAL_CHIP_W1S -1,-1,-1,-1

/**
 * Register (RSL) rst_local_cold_w1s
 *
 * RST Local Cold Reset Register
 * This register is not accessible through ROM scripts; see SCR_WRITE32_S[ADDR].
 */
union cavm_rst_local_cold_w1s
{
    uint64_t u;
    struct cavm_rst_local_cold_w1s_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_1_63         : 63;
        uint64_t soft_rst              : 1;  /**< [  0:  0](R/W1S/H) Software-initiated local cold reset.
                                                                 When set to one, the logic creates a local cold reset request. At the
                                                                 completion of the reset the field is cleared.  This is similar to
                                                                 asserting and deasserting DCOKn/PG for a single reset module with the
                                                                 exception that external pins are not sampled again.
                                                                 This field is always reinitialized to 0. */
#else /* Word 0 - Little Endian */
        uint64_t soft_rst              : 1;  /**< [  0:  0](R/W1S/H) Software-initiated local cold reset.
                                                                 When set to one, the logic creates a local cold reset request. At the
                                                                 completion of the reset the field is cleared.  This is similar to
                                                                 asserting and deasserting DCOKn/PG for a single reset module with the
                                                                 exception that external pins are not sampled again.
                                                                 This field is always reinitialized to 0. */
        uint64_t reserved_1_63         : 63;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_rst_local_cold_w1s_s cn; */
};
typedef union cavm_rst_local_cold_w1s cavm_rst_local_cold_w1s_t;

#define CAVM_RST_LOCAL_COLD_W1S CAVM_RST_LOCAL_COLD_W1S_FUNC()
static inline uint64_t CAVM_RST_LOCAL_COLD_W1S_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_RST_LOCAL_COLD_W1S_FUNC(void)
{
    return 0x87e006001818ll;
}

#define typedef_CAVM_RST_LOCAL_COLD_W1S cavm_rst_local_cold_w1s_t
#define bustype_CAVM_RST_LOCAL_COLD_W1S CSR_TYPE_RSL
#define basename_CAVM_RST_LOCAL_COLD_W1S "RST_LOCAL_COLD_W1S"
#define device_bar_CAVM_RST_LOCAL_COLD_W1S 0x0 /* PF_BAR0 */
#define busnum_CAVM_RST_LOCAL_COLD_W1S 0
#define arguments_CAVM_RST_LOCAL_COLD_W1S -1,-1,-1,-1

/**
 * Register (RSL) rst_msix_pba#
 *
 * RST MSI-X Pending Bit Array Registers
 */
union cavm_rst_msix_pbax
{
    uint64_t u;
    struct cavm_rst_msix_pbax_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t pend                  : 64; /**< [ 63:  0](RO/H) Reserved. */
#else /* Word 0 - Little Endian */
        uint64_t pend                  : 64; /**< [ 63:  0](RO/H) Reserved. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_rst_msix_pbax_s cn; */
};
typedef union cavm_rst_msix_pbax cavm_rst_msix_pbax_t;

static inline uint64_t CAVM_RST_MSIX_PBAX(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_RST_MSIX_PBAX(uint64_t a)
{
    if (a==0)
        return 0x87e006ff0000ll + 8ll * ((a) & 0x0);
    __cavm_csr_fatal("RST_MSIX_PBAX", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_RST_MSIX_PBAX(a) cavm_rst_msix_pbax_t
#define bustype_CAVM_RST_MSIX_PBAX(a) CSR_TYPE_RSL
#define basename_CAVM_RST_MSIX_PBAX(a) "RST_MSIX_PBAX"
#define device_bar_CAVM_RST_MSIX_PBAX(a) 0x4 /* PF_BAR4 */
#define busnum_CAVM_RST_MSIX_PBAX(a) (a)
#define arguments_CAVM_RST_MSIX_PBAX(a) (a),-1,-1,-1

/**
 * Register (RSL) rst_msix_vec#_addr
 *
 * RST MSI-X Vector-Table Address Register
 */
union cavm_rst_msix_vecx_addr
{
    uint64_t u;
    struct cavm_rst_msix_vecx_addr_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_53_63        : 11;
        uint64_t addr                  : 51; /**< [ 52:  2](R/W) Reserved. */
        uint64_t reserved_1            : 1;
        uint64_t secvec                : 1;  /**< [  0:  0](SR/W) Reserved. */
#else /* Word 0 - Little Endian */
        uint64_t secvec                : 1;  /**< [  0:  0](SR/W) Reserved. */
        uint64_t reserved_1            : 1;
        uint64_t addr                  : 51; /**< [ 52:  2](R/W) Reserved. */
        uint64_t reserved_53_63        : 11;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_rst_msix_vecx_addr_s cn; */
};
typedef union cavm_rst_msix_vecx_addr cavm_rst_msix_vecx_addr_t;

static inline uint64_t CAVM_RST_MSIX_VECX_ADDR(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_RST_MSIX_VECX_ADDR(uint64_t a)
{
    if (a==0)
        return 0x87e006f00000ll + 0x10ll * ((a) & 0x0);
    __cavm_csr_fatal("RST_MSIX_VECX_ADDR", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_RST_MSIX_VECX_ADDR(a) cavm_rst_msix_vecx_addr_t
#define bustype_CAVM_RST_MSIX_VECX_ADDR(a) CSR_TYPE_RSL
#define basename_CAVM_RST_MSIX_VECX_ADDR(a) "RST_MSIX_VECX_ADDR"
#define device_bar_CAVM_RST_MSIX_VECX_ADDR(a) 0x4 /* PF_BAR4 */
#define busnum_CAVM_RST_MSIX_VECX_ADDR(a) (a)
#define arguments_CAVM_RST_MSIX_VECX_ADDR(a) (a),-1,-1,-1

/**
 * Register (RSL) rst_msix_vec#_ctl
 *
 * RST MSI-X Vector-Table Control and Data Register
 */
union cavm_rst_msix_vecx_ctl
{
    uint64_t u;
    struct cavm_rst_msix_vecx_ctl_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_33_63        : 31;
        uint64_t mask                  : 1;  /**< [ 32: 32](R/W) Reserved. */
        uint64_t data                  : 32; /**< [ 31:  0](R/W) Reserved. */
#else /* Word 0 - Little Endian */
        uint64_t data                  : 32; /**< [ 31:  0](R/W) Reserved. */
        uint64_t mask                  : 1;  /**< [ 32: 32](R/W) Reserved. */
        uint64_t reserved_33_63        : 31;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_rst_msix_vecx_ctl_s cn; */
};
typedef union cavm_rst_msix_vecx_ctl cavm_rst_msix_vecx_ctl_t;

static inline uint64_t CAVM_RST_MSIX_VECX_CTL(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_RST_MSIX_VECX_CTL(uint64_t a)
{
    if (a==0)
        return 0x87e006f00008ll + 0x10ll * ((a) & 0x0);
    __cavm_csr_fatal("RST_MSIX_VECX_CTL", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_RST_MSIX_VECX_CTL(a) cavm_rst_msix_vecx_ctl_t
#define bustype_CAVM_RST_MSIX_VECX_CTL(a) CSR_TYPE_RSL
#define basename_CAVM_RST_MSIX_VECX_CTL(a) "RST_MSIX_VECX_CTL"
#define device_bar_CAVM_RST_MSIX_VECX_CTL(a) 0x4 /* PF_BAR4 */
#define busnum_CAVM_RST_MSIX_VECX_CTL(a) (a)
#define arguments_CAVM_RST_MSIX_VECX_CTL(a) (a),-1,-1,-1

/**
 * Register (RSL) rst_ref_cntr
 *
 * RST Reference-Counter Register
 * This register is not accessible through ROM scripts; see SCR_WRITE32_S[ADDR].
 */
union cavm_rst_ref_cntr
{
    uint64_t u;
    struct cavm_rst_ref_cntr_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t cnt                   : 64; /**< [ 63:  0](R/W/H) Reference count. [CNT] is incremented every 100 MHz boot clock.
                                                                 This field is always reinitialized on a cold reset. */
#else /* Word 0 - Little Endian */
        uint64_t cnt                   : 64; /**< [ 63:  0](R/W/H) Reference count. [CNT] is incremented every 100 MHz boot clock.
                                                                 This field is always reinitialized on a cold reset. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_rst_ref_cntr_s cn; */
};
typedef union cavm_rst_ref_cntr cavm_rst_ref_cntr_t;

#define CAVM_RST_REF_CNTR CAVM_RST_REF_CNTR_FUNC()
static inline uint64_t CAVM_RST_REF_CNTR_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_RST_REF_CNTR_FUNC(void)
{
    return 0x87e0060016b0ll;
}

#define typedef_CAVM_RST_REF_CNTR cavm_rst_ref_cntr_t
#define bustype_CAVM_RST_REF_CNTR CSR_TYPE_RSL
#define basename_CAVM_RST_REF_CNTR "RST_REF_CNTR"
#define device_bar_CAVM_RST_REF_CNTR 0x0 /* PF_BAR0 */
#define busnum_CAVM_RST_REF_CNTR 0
#define arguments_CAVM_RST_REF_CNTR -1,-1,-1,-1

/**
 * Register (RSL) rst_sw_w1s
 *
 * RST Software W1S Data Register
 * This register is not accessible through ROM scripts; see SCR_WRITE32_S[ADDR].
 */
union cavm_rst_sw_w1s
{
    uint64_t u;
    struct cavm_rst_sw_w1s_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t data                  : 64; /**< [ 63:  0](R/W1S) Scratch data registers preserved through chip reset.
                                                                 This field is always reinitialized on a cold reset. */
#else /* Word 0 - Little Endian */
        uint64_t data                  : 64; /**< [ 63:  0](R/W1S) Scratch data registers preserved through chip reset.
                                                                 This field is always reinitialized on a cold reset. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_rst_sw_w1s_s cn; */
};
typedef union cavm_rst_sw_w1s cavm_rst_sw_w1s_t;

#define CAVM_RST_SW_W1S CAVM_RST_SW_W1S_FUNC()
static inline uint64_t CAVM_RST_SW_W1S_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_RST_SW_W1S_FUNC(void)
{
    return 0x87e0060017f0ll;
}

#define typedef_CAVM_RST_SW_W1S cavm_rst_sw_w1s_t
#define bustype_CAVM_RST_SW_W1S CSR_TYPE_RSL
#define basename_CAVM_RST_SW_W1S "RST_SW_W1S"
#define device_bar_CAVM_RST_SW_W1S 0x0 /* PF_BAR0 */
#define busnum_CAVM_RST_SW_W1S 0
#define arguments_CAVM_RST_SW_W1S -1,-1,-1,-1

/**
 * Register (RSL) rst_thermal_alert
 *
 * RST Thermal Alert Register
 * This register is not accessible through ROM scripts; see SCR_WRITE32_S[ADDR].
 */
union cavm_rst_thermal_alert
{
    uint64_t u;
    struct cavm_rst_thermal_alert_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_9_63         : 55;
        uint64_t trip                  : 1;  /**< [  8:  8](R/W1S/H) Thermal trip pin. When set, drives the THERMAL_TRIP_L pin active low.
                                                                 This field is set by one of the on-board temperature sensors reaching a
                                                                 failure threshold or writing this bit.
                                                                 This field is always reinitialized on a cold reset. */
        uint64_t reserved_1_7          : 7;
        uint64_t alert                 : 1;  /**< [  0:  0](RO/H) Thermal alert status. When set to one, indicates a temperature sensor is
                                                                 currently at the failure threshold. */
#else /* Word 0 - Little Endian */
        uint64_t alert                 : 1;  /**< [  0:  0](RO/H) Thermal alert status. When set to one, indicates a temperature sensor is
                                                                 currently at the failure threshold. */
        uint64_t reserved_1_7          : 7;
        uint64_t trip                  : 1;  /**< [  8:  8](R/W1S/H) Thermal trip pin. When set, drives the THERMAL_TRIP_L pin active low.
                                                                 This field is set by one of the on-board temperature sensors reaching a
                                                                 failure threshold or writing this bit.
                                                                 This field is always reinitialized on a cold reset. */
        uint64_t reserved_9_63         : 55;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_rst_thermal_alert_s cn; */
};
typedef union cavm_rst_thermal_alert cavm_rst_thermal_alert_t;

#define CAVM_RST_THERMAL_ALERT CAVM_RST_THERMAL_ALERT_FUNC()
static inline uint64_t CAVM_RST_THERMAL_ALERT_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_RST_THERMAL_ALERT_FUNC(void)
{
    return 0x87e006001688ll;
}

#define typedef_CAVM_RST_THERMAL_ALERT cavm_rst_thermal_alert_t
#define bustype_CAVM_RST_THERMAL_ALERT CSR_TYPE_RSL
#define basename_CAVM_RST_THERMAL_ALERT "RST_THERMAL_ALERT"
#define device_bar_CAVM_RST_THERMAL_ALERT 0x0 /* PF_BAR0 */
#define busnum_CAVM_RST_THERMAL_ALERT 0
#define arguments_CAVM_RST_THERMAL_ALERT -1,-1,-1,-1

/**
 * Register (RSL) rst_xcp_w1c#
 *
 * RST XCP Reset W1C Registers
 */
union cavm_rst_xcp_w1cx
{
    uint64_t u;
    struct cavm_rst_xcp_w1cx_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_1_63         : 63;
        uint64_t soft_rst              : 1;  /**< [  0:  0](R/W1C/H) Software-initiated de-assertion of individual XCP resets.
                                                                 When set to one, corresponding XCP Reset is deasserted.
                                                                 Reading this register shows the active high version of the signals.
                                                                 This field is always reads back as asserted on a chip reset. */
#else /* Word 0 - Little Endian */
        uint64_t soft_rst              : 1;  /**< [  0:  0](R/W1C/H) Software-initiated de-assertion of individual XCP resets.
                                                                 When set to one, corresponding XCP Reset is deasserted.
                                                                 Reading this register shows the active high version of the signals.
                                                                 This field is always reads back as asserted on a chip reset. */
        uint64_t reserved_1_63         : 63;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_rst_xcp_w1cx_s cn; */
};
typedef union cavm_rst_xcp_w1cx cavm_rst_xcp_w1cx_t;

static inline uint64_t CAVM_RST_XCP_W1CX(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_RST_XCP_W1CX(uint64_t a)
{
    if (a<=3)
        return 0x87e006001980ll + 8ll * ((a) & 0x3);
    __cavm_csr_fatal("RST_XCP_W1CX", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_RST_XCP_W1CX(a) cavm_rst_xcp_w1cx_t
#define bustype_CAVM_RST_XCP_W1CX(a) CSR_TYPE_RSL
#define basename_CAVM_RST_XCP_W1CX(a) "RST_XCP_W1CX"
#define device_bar_CAVM_RST_XCP_W1CX(a) 0x0 /* PF_BAR0 */
#define busnum_CAVM_RST_XCP_W1CX(a) (a)
#define arguments_CAVM_RST_XCP_W1CX(a) (a),-1,-1,-1

/**
 * Register (RSL) rst_xcp_w1s#
 *
 * RST XCP Reset W1S Registers
 */
union cavm_rst_xcp_w1sx
{
    uint64_t u;
    struct cavm_rst_xcp_w1sx_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_2_63         : 62;
        uint64_t force_rst             : 1;  /**< [  1:  1](R/W1S) Force Domain Reset.  Setting this bit and SOFT_RST together will put the XCP
                                                                 in reset and force it to stay in reset until the field is cleared by a chip
                                                                 reset.  While set, writes to the corresponding RST_XCP_W1C\<n\> will be ignored. */
        uint64_t soft_rst              : 1;  /**< [  0:  0](R/W1S/H) Software-initiated assertion of the XCP Reset signals.
                                                                 When set to one, corresponding XCP_RST_N\<n\> is asserted.
                                                                 All XCP_RST_N\<n\> signals are asserted with Chip Reset.  RST_BOOT[RBOOT]
                                                                 field determines which ones are released automatically and which
                                                                 must be cleared by writing to RST_XCP_W1C.
                                                                 Reading this register shows the active high version of the signals. */
#else /* Word 0 - Little Endian */
        uint64_t soft_rst              : 1;  /**< [  0:  0](R/W1S/H) Software-initiated assertion of the XCP Reset signals.
                                                                 When set to one, corresponding XCP_RST_N\<n\> is asserted.
                                                                 All XCP_RST_N\<n\> signals are asserted with Chip Reset.  RST_BOOT[RBOOT]
                                                                 field determines which ones are released automatically and which
                                                                 must be cleared by writing to RST_XCP_W1C.
                                                                 Reading this register shows the active high version of the signals. */
        uint64_t force_rst             : 1;  /**< [  1:  1](R/W1S) Force Domain Reset.  Setting this bit and SOFT_RST together will put the XCP
                                                                 in reset and force it to stay in reset until the field is cleared by a chip
                                                                 reset.  While set, writes to the corresponding RST_XCP_W1C\<n\> will be ignored. */
        uint64_t reserved_2_63         : 62;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_rst_xcp_w1sx_s cn; */
};
typedef union cavm_rst_xcp_w1sx cavm_rst_xcp_w1sx_t;

static inline uint64_t CAVM_RST_XCP_W1SX(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_RST_XCP_W1SX(uint64_t a)
{
    if (a<=3)
        return 0x87e006001880ll + 8ll * ((a) & 0x3);
    __cavm_csr_fatal("RST_XCP_W1SX", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_RST_XCP_W1SX(a) cavm_rst_xcp_w1sx_t
#define bustype_CAVM_RST_XCP_W1SX(a) CSR_TYPE_RSL
#define basename_CAVM_RST_XCP_W1SX(a) "RST_XCP_W1SX"
#define device_bar_CAVM_RST_XCP_W1SX(a) 0x0 /* PF_BAR0 */
#define busnum_CAVM_RST_XCP_W1SX(a) (a)
#define arguments_CAVM_RST_XCP_W1SX(a) (a),-1,-1,-1

#endif /* __CAVM_CSRS_RST_H__ */
