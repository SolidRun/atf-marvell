#ifndef __CAVM_CSRS_RST_H__
#define __CAVM_CSRS_RST_H__
/* This file is auto-generated. Do not edit */

/***********************license start***********************************
* Copyright (C) 2020 Marvell
* SPDX-License-Identifier: BSD-3-Clause
* https://spdx.org/licenses
***********************license end**************************************/


/**
 * @file
 *
 * Configuration and status register (CSR) address and type definitions for
 * OcteonTX RST.
 *
 * This file is auto generated. Do not edit.
 *
 */

/**
 * Enumeration rst_bar_e
 *
 * RST Base Address Register Enumeration
 * Enumerates the base address registers.
 */
#define CAVM_RST_BAR_E_RST_PF_BAR0 (0x87e006000000ll)
#define CAVM_RST_BAR_E_RST_PF_BAR0_SIZE 0x10000ull
#define CAVM_RST_BAR_E_RST_PF_BAR2 (0x87e00a000000ll)
#define CAVM_RST_BAR_E_RST_PF_BAR2_SIZE 0x10000ull
#define CAVM_RST_BAR_E_RST_PF_BAR4 (0x87e006f00000ll)
#define CAVM_RST_BAR_E_RST_PF_BAR4_SIZE 0x100000ull

/**
 * Enumeration rst_boot_fail_e
 *
 * RST Boot Failure Code Enumeration
 * Enumerates the reasons for boot failure, returned to post-boot code
 * in argument register 0 and blinked on GPIO\<11\>.
 */
#define CAVM_RST_BOOT_FAIL_E_AUTH (6)
#define CAVM_RST_BOOT_FAIL_E_BUS_ERROR (0xb)
#define CAVM_RST_BOOT_FAIL_E_DEVICE (3)
#define CAVM_RST_BOOT_FAIL_E_GOOD (1)
#define CAVM_RST_BOOT_FAIL_E_HASH (8)
#define CAVM_RST_BOOT_FAIL_E_KEY (7)
#define CAVM_RST_BOOT_FAIL_E_MAGIC (4)
#define CAVM_RST_BOOT_FAIL_E_MCORE (5)
#define CAVM_RST_BOOT_FAIL_E_METH (2)
#define CAVM_RST_BOOT_FAIL_E_SCRIPT_ACC_ERROR (0xa)
#define CAVM_RST_BOOT_FAIL_E_SCRIPT_INVALID (9)
#define CAVM_RST_BOOT_FAIL_E_UNINIT (0)

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
#define CAVM_RST_BOOT_METHOD_E_EMMC_CS0 (0)
#define CAVM_RST_BOOT_METHOD_E_EMMC_CS1 (1)
#define CAVM_RST_BOOT_METHOD_E_REMOTE (7)
#define CAVM_RST_BOOT_METHOD_E_SPI0_CS0 (2)
#define CAVM_RST_BOOT_METHOD_E_SPI0_CS1 (3)
#define CAVM_RST_BOOT_METHOD_E_SPI1_CS0 (4)
#define CAVM_RST_BOOT_METHOD_E_SPI1_CS1 (5)

/**
 * Enumeration rst_dev_e
 *
 * Programmable Reset Device Enumeration
 * Enumerates devices that have programmable reset domains, and index {a} of RST_DEV_MAP().
 */
#define CAVM_RST_DEV_E_AVS (1)
#define CAVM_RST_DEV_E_EMMC (0x19)
#define CAVM_RST_DEV_E_I3C (0x10)
#define CAVM_RST_DEV_E_MPIX(a) (2 + (a))
#define CAVM_RST_DEV_E_RFIFX(a) (0x28 + (a))
#define CAVM_RST_DEV_E_ROC_OCLA (0x18)
#define CAVM_RST_DEV_E_SGPIO (0x17)
#define CAVM_RST_DEV_E_SMI (0x16)
#define CAVM_RST_DEV_E_TWSX(a) (4 + (a))
#define CAVM_RST_DEV_E_UAAX(a) (0x1a + (a))

/**
 * Enumeration rst_domain_e
 *
 * RST Domain Enumeration
 * This enumerates the values of RST_DEV_MAP()[DMN].
 */
#define CAVM_RST_DOMAIN_E_BPHY (5)
#define CAVM_RST_DOMAIN_E_CHIP (0)
#define CAVM_RST_DOMAIN_E_COLD (6)
#define CAVM_RST_DOMAIN_E_CORE (1)
#define CAVM_RST_DOMAIN_E_ECP (4)
#define CAVM_RST_DOMAIN_E_MCP (2)
#define CAVM_RST_DOMAIN_E_OFF (7)
#define CAVM_RST_DOMAIN_E_SCP (3)

/**
 * Enumeration rst_int_vec_e
 *
 * RST MSI-X Vector Enumeration
 * Enumerates the MSI-X interrupt vectors.
 */
#define CAVM_RST_INT_VEC_E_INTS (0)

/**
 * Enumeration rst_pll_e
 *
 * RST PLL Enumeration
 * Enumerates the values of RST_PLL() and RST_MAN_PLL().
 * Internal:
 * and RST_TEST_PLL().
 */
#define CAVM_RST_PLL_E_BCLK (0xc)
#define CAVM_RST_PLL_E_BCNCLK (0xd)
#define CAVM_RST_PLL_E_DFICLK (4)
#define CAVM_RST_PLL_E_DSPCLK (0xe)
#define CAVM_RST_PLL_E_IOCLK (3)
#define CAVM_RST_PLL_E_JESDCLK (0xf)
#define CAVM_RST_PLL_E_MESHCLK (1)
#define CAVM_RST_PLL_E_NCLK (0xb)
#define CAVM_RST_PLL_E_NETCLK (2)
#define CAVM_RST_PLL_E_SCLK (0)

/**
 * Enumeration rst_pll_sel_e
 *
 * RST PLL Selection Enumeration
 * Enumerates the values of RST_PLL()[NEXT_PLL_SEL] and RST_PLL()[CUR_PLL_SEL].
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
 * Enumerates the reset sources for both reset domain mapping and cause of last reset,
 * corresponding to the bit numbers of RST_LBOOT.
 */
#define CAVM_RST_SOURCE_E_BPHY_RESET_PIN (0x20)
#define CAVM_RST_SOURCE_E_BPHY_SOFT (0x21)
#define CAVM_RST_SOURCE_E_CHIPKILL (4)
#define CAVM_RST_SOURCE_E_CHIP_RESET_PIN (2)
#define CAVM_RST_SOURCE_E_CHIP_SOFT (3)
#define CAVM_RST_SOURCE_E_COLD_SOFT (1)
#define CAVM_RST_SOURCE_E_CORE_RESET_PIN (0xb)
#define CAVM_RST_SOURCE_E_CORE_SOFT (0xc)
#define CAVM_RST_SOURCE_E_CORE_WDOG (0xd)
#define CAVM_RST_SOURCE_E_DCOK_PIN (0)
#define CAVM_RST_SOURCE_E_ECP_SOFT (0x22)
#define CAVM_RST_SOURCE_E_ECP_WDOG (0x23)
#define CAVM_RST_SOURCE_E_MCP_RESET_PIN (8)
#define CAVM_RST_SOURCE_E_MCP_SOFT (9)
#define CAVM_RST_SOURCE_E_MCP_WDOG (0xa)
#define CAVM_RST_SOURCE_E_PEM_CHIPX(a) (0x11 + 2 * (a))
#define CAVM_RST_SOURCE_E_PEM_COREX(a) (0x10 + 2 * (a))
#define CAVM_RST_SOURCE_E_RSVD_E (0xe)
#define CAVM_RST_SOURCE_E_RSVD_F (0xf)
#define CAVM_RST_SOURCE_E_SCP_RESET_PIN (5)
#define CAVM_RST_SOURCE_E_SCP_SOFT (6)
#define CAVM_RST_SOURCE_E_SCP_WDOG (7)

/**
 * Structure rst_boot_stat_s
 *
 * BOOT_STATUS field Structure
 * The ROM boot code stores this data in the RST_BOOT_STATUS register, once per each boot attempt.
 */
union cavm_rst_boot_stat_s
{
    uint32_t u;
    struct cavm_rst_boot_stat_s_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t reserved_16_31        : 16;
        uint32_t trusted               : 1;  /**< [ 15: 15] This was a trusted-mode boot. */
        uint32_t primary               : 1;  /**< [ 14: 14] This was a boot from the primary device. */
        uint32_t scr_done              : 1;  /**< [ 13: 13] The ROM script ran to completion on this boot. */
        uint32_t reserved_7_12         : 6;
        uint32_t boot_method           : 3;  /**< [  6:  4] The boot method for this boot attempt RST_BOOT_METHOD_E. */
        uint32_t fail                  : 4;  /**< [  3:  0] The failure code for this boot attempt RST_BOOT_FAIL_E. */
#else /* Word 0 - Little Endian */
        uint32_t fail                  : 4;  /**< [  3:  0] The failure code for this boot attempt RST_BOOT_FAIL_E. */
        uint32_t boot_method           : 3;  /**< [  6:  4] The boot method for this boot attempt RST_BOOT_METHOD_E. */
        uint32_t reserved_7_12         : 6;
        uint32_t scr_done              : 1;  /**< [ 13: 13] The ROM script ran to completion on this boot. */
        uint32_t primary               : 1;  /**< [ 14: 14] This was a boot from the primary device. */
        uint32_t trusted               : 1;  /**< [ 15: 15] This was a trusted-mode boot. */
        uint32_t reserved_16_31        : 16;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_rst_boot_stat_s_s cn; */
};

/**
 * Register (RSL) rst_bist_active
 *
 * RST BIST Active Status Register
 * This register is not accessible through ROM scripts; see SCR_WRITE32_S[ADDR].
 */
union cavm_rst_bist_active
{
    uint64_t u;
    struct cavm_rst_bist_active_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_7_63         : 57;
        uint64_t csr                   : 1;  /**< [  6:  6](RO/H) BIST in progress due to access to RST_DEV_MAP().  When set, memories
                                                                 associated with this access are being tested.

                                                                 This field is reinitialized on a cold domain reset.

                                                                 Internal:
                                                                 This field is reinitialized on the falling edge of dcok. */
        uint64_t ecp                   : 1;  /**< [  5:  5](RO/H) ECP domain BIST in progress.  When set, memories associated with
                                                                 the ECP domain are being tested.

                                                                 This field is reinitialized on a cold domain reset.

                                                                 Internal:
                                                                 This field is reinitialized on the falling edge of dcok. */
        uint64_t bphy                  : 1;  /**< [  4:  4](RO/H) Reserved.
                                                                 Internal:
                                                                 BPHY domain BIST in progress.  When set, memories associated with
                                                                 the BPHY domain are being tested. */
        uint64_t scp                   : 1;  /**< [  3:  3](RO/H) SCP domain BIST in progress.  When set, memories associated with
                                                                 the SCP domain are being tested.

                                                                 This field is reinitialized on a cold domain reset.

                                                                 Internal:
                                                                 This field is reinitialized on the falling edge of dcok. */
        uint64_t mcp                   : 1;  /**< [  2:  2](RO/H) MCP domain BIST in progress.  When set, memories associated with
                                                                 the MCP domain are being tested.

                                                                 This field is reinitialized on a cold domain reset.

                                                                 Internal:
                                                                 This field is reinitialized on the falling edge of dcok. */
        uint64_t core                  : 1;  /**< [  1:  1](RO/H) Core domain BIST in progress.  When set, memories associated with
                                                                 the core domain are being tested.

                                                                 This field is reinitialized on a cold domain reset.

                                                                 Internal:
                                                                 This field is reinitialized on the falling edge of dcok. */
        uint64_t chip                  : 1;  /**< [  0:  0](RO/H) Chip BIST in progress.  Always reads 0. */
#else /* Word 0 - Little Endian */
        uint64_t chip                  : 1;  /**< [  0:  0](RO/H) Chip BIST in progress.  Always reads 0. */
        uint64_t core                  : 1;  /**< [  1:  1](RO/H) Core domain BIST in progress.  When set, memories associated with
                                                                 the core domain are being tested.

                                                                 This field is reinitialized on a cold domain reset.

                                                                 Internal:
                                                                 This field is reinitialized on the falling edge of dcok. */
        uint64_t mcp                   : 1;  /**< [  2:  2](RO/H) MCP domain BIST in progress.  When set, memories associated with
                                                                 the MCP domain are being tested.

                                                                 This field is reinitialized on a cold domain reset.

                                                                 Internal:
                                                                 This field is reinitialized on the falling edge of dcok. */
        uint64_t scp                   : 1;  /**< [  3:  3](RO/H) SCP domain BIST in progress.  When set, memories associated with
                                                                 the SCP domain are being tested.

                                                                 This field is reinitialized on a cold domain reset.

                                                                 Internal:
                                                                 This field is reinitialized on the falling edge of dcok. */
        uint64_t bphy                  : 1;  /**< [  4:  4](RO/H) Reserved.
                                                                 Internal:
                                                                 BPHY domain BIST in progress.  When set, memories associated with
                                                                 the BPHY domain are being tested. */
        uint64_t ecp                   : 1;  /**< [  5:  5](RO/H) ECP domain BIST in progress.  When set, memories associated with
                                                                 the ECP domain are being tested.

                                                                 This field is reinitialized on a cold domain reset.

                                                                 Internal:
                                                                 This field is reinitialized on the falling edge of dcok. */
        uint64_t csr                   : 1;  /**< [  6:  6](RO/H) BIST in progress due to access to RST_DEV_MAP().  When set, memories
                                                                 associated with this access are being tested.

                                                                 This field is reinitialized on a cold domain reset.

                                                                 Internal:
                                                                 This field is reinitialized on the falling edge of dcok. */
        uint64_t reserved_7_63         : 57;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_rst_bist_active_s cn; */
};
typedef union cavm_rst_bist_active cavm_rst_bist_active_t;

#define CAVM_RST_BIST_ACTIVE CAVM_RST_BIST_ACTIVE_FUNC()
static inline uint64_t CAVM_RST_BIST_ACTIVE_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_RST_BIST_ACTIVE_FUNC(void)
{
    return 0x87e006001890ll;
}

#define typedef_CAVM_RST_BIST_ACTIVE cavm_rst_bist_active_t
#define bustype_CAVM_RST_BIST_ACTIVE CSR_TYPE_RSL
#define basename_CAVM_RST_BIST_ACTIVE "RST_BIST_ACTIVE"
#define device_bar_CAVM_RST_BIST_ACTIVE 0x0 /* PF_BAR0 */
#define busnum_CAVM_RST_BIST_ACTIVE 0
#define arguments_CAVM_RST_BIST_ACTIVE -1,-1,-1,-1

/**
 * Register (RSL) rst_bist_timer
 *
 * INTERNAL: RST BIST Timer Register
 *
 * This register is not accessible through ROM scripts; see SCR_WRITE32_S[ADDR].
 */
union cavm_rst_bist_timer
{
    uint64_t u;
    struct cavm_rst_bist_timer_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_29_63        : 35;
        uint64_t count                 : 29; /**< [ 28:  0](RO/H) Number of 100 MHz reference clocks that have elapsed during the
                                                                 last BIST operation.  If MSB is set the BIST did not
                                                                 complete as expected. This field is reinitialized on a cold domain reset.

                                                                 Internal:
                                                                 This field is reinitialized on the falling edge of dll_stable. */
#else /* Word 0 - Little Endian */
        uint64_t count                 : 29; /**< [ 28:  0](RO/H) Number of 100 MHz reference clocks that have elapsed during the
                                                                 last BIST operation.  If MSB is set the BIST did not
                                                                 complete as expected. This field is reinitialized on a cold domain reset.

                                                                 Internal:
                                                                 This field is reinitialized on the falling edge of dll_stable. */
        uint64_t reserved_29_63        : 35;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_rst_bist_timer_s cn; */
};
typedef union cavm_rst_bist_timer cavm_rst_bist_timer_t;

#define CAVM_RST_BIST_TIMER CAVM_RST_BIST_TIMER_FUNC()
static inline uint64_t CAVM_RST_BIST_TIMER_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_RST_BIST_TIMER_FUNC(void)
{
    return 0x87e006001760ll;
}

#define typedef_CAVM_RST_BIST_TIMER cavm_rst_bist_timer_t
#define bustype_CAVM_RST_BIST_TIMER CSR_TYPE_RSL
#define basename_CAVM_RST_BIST_TIMER "RST_BIST_TIMER"
#define device_bar_CAVM_RST_BIST_TIMER 0x0 /* PF_BAR0 */
#define busnum_CAVM_RST_BIST_TIMER 0
#define arguments_CAVM_RST_BIST_TIMER -1,-1,-1,-1

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
        uint64_t chipkill              : 1;  /**< [ 63: 63](R/W1S) A zero-to-one transition of CHIPKILL starts the CHIPKILL timer. When set and the timer
                                                                 expires, chip domain reset is asserted.
                                                                 The length of the CHIPKILL timer is specified by RST_CKILL[TIMER].
                                                                 This feature is effectively a delayed reset.
                                                                 This field is reinitialized with a chip domain reset. */
        uint64_t reserved_2_62         : 61;
        uint64_t rboot                 : 1;  /**< [  1:  1](R/W/H) Remote boot. If set, indicates that SCP will require a write to
                                                                 RST_SCP_DOMAIN_W1C to bring it out of reset.  Otherwise it
                                                                 will automatically come out of reset once the reset source has
                                                                 been deasserted.
                                                                 The initial value is set when [RBOOT_PIN] is true and
                                                                 trustzone has not been enabled.
                                                                 This field is reinitialized with a cold domain reset.

                                                                 Internal:
                                                                 This field is cleared when jtg__rst_disable_remote is active. */
        uint64_t rboot_pin             : 1;  /**< [  0:  0](RO) Remote boot strap. The value is set when primary boot method is RST_BOOT_METHOD_E::REMOTE
                                                                 when the GPIO pins are sampled on the rising edge of PLL_DCOK. */
#else /* Word 0 - Little Endian */
        uint64_t rboot_pin             : 1;  /**< [  0:  0](RO) Remote boot strap. The value is set when primary boot method is RST_BOOT_METHOD_E::REMOTE
                                                                 when the GPIO pins are sampled on the rising edge of PLL_DCOK. */
        uint64_t rboot                 : 1;  /**< [  1:  1](R/W/H) Remote boot. If set, indicates that SCP will require a write to
                                                                 RST_SCP_DOMAIN_W1C to bring it out of reset.  Otherwise it
                                                                 will automatically come out of reset once the reset source has
                                                                 been deasserted.
                                                                 The initial value is set when [RBOOT_PIN] is true and
                                                                 trustzone has not been enabled.
                                                                 This field is reinitialized with a cold domain reset.

                                                                 Internal:
                                                                 This field is cleared when jtg__rst_disable_remote is active. */
        uint64_t reserved_2_62         : 61;
        uint64_t chipkill              : 1;  /**< [ 63: 63](R/W1S) A zero-to-one transition of CHIPKILL starts the CHIPKILL timer. When set and the timer
                                                                 expires, chip domain reset is asserted.
                                                                 The length of the CHIPKILL timer is specified by RST_CKILL[TIMER].
                                                                 This feature is effectively a delayed reset.
                                                                 This field is reinitialized with a chip domain reset. */
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

                                                                 This field is always reinitialized on a chip domain reset. */
        uint64_t stat2                 : 16; /**< [ 47: 32](R/W) JTAG-accessible boot status word two. Used by software to indicate progress of
                                                                 boot. Accessible via JTG/DTX with offset 16.

                                                                 This field is always reinitialized on a chip domain reset. */
        uint64_t stat1                 : 16; /**< [ 31: 16](R/W) JTAG-accessible boot status word one. Used by software to indicate progress of
                                                                 boot. Accessible via JTG/DTX with offset 13.

                                                                 This field is always reinitialized on a chip domain reset. */
        uint64_t stat0                 : 16; /**< [ 15:  0](R/W) JTAG-accessible boot status word zero. Used by software to indicate progress of
                                                                 boot. Accessible via JTG/DTX with offset 12.

                                                                 This field is always reinitialized on a chip domain reset. */
#else /* Word 0 - Little Endian */
        uint64_t stat0                 : 16; /**< [ 15:  0](R/W) JTAG-accessible boot status word zero. Used by software to indicate progress of
                                                                 boot. Accessible via JTG/DTX with offset 12.

                                                                 This field is always reinitialized on a chip domain reset. */
        uint64_t stat1                 : 16; /**< [ 31: 16](R/W) JTAG-accessible boot status word one. Used by software to indicate progress of
                                                                 boot. Accessible via JTG/DTX with offset 13.

                                                                 This field is always reinitialized on a chip domain reset. */
        uint64_t stat2                 : 16; /**< [ 47: 32](R/W) JTAG-accessible boot status word two. Used by software to indicate progress of
                                                                 boot. Accessible via JTG/DTX with offset 16.

                                                                 This field is always reinitialized on a chip domain reset. */
        uint64_t stat3                 : 16; /**< [ 63: 48](R/W) JTAG-accessible boot status word three. Used by software to indicate progress of
                                                                 boot. Accessible via JTG/DTX with offset 17.

                                                                 This field is always reinitialized on a chip domain reset. */
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
 * Register (RSL) rst_bphy_domain_w1c
 *
 * INTERNAL: RST BPHY Domain Soft Reset Clear Register
 *
 * This register is not accessible through ROM scripts; see SCR_WRITE32_S[ADDR].
 */
union cavm_rst_bphy_domain_w1c
{
    uint64_t u;
    struct cavm_rst_bphy_domain_w1c_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_1_63         : 63;
        uint64_t soft_rst              : 1;  /**< [  0:  0](R/W1C/H) Clear software-initiated reset of the BPHY processor and associated logic.
                                                                 When set to one, the soft reset of the BPHY is removed.
                                                                 Reads of this register show the soft reset state.  Not the actual BPHY domain reset.
                                                                 Other factors may keep the reset active, reading RST_RESET_ACTIVE[BPHY] shows
                                                                 the actual reset state.  To compensate for delays in reset, this field should only
                                                                 be set if RST_RESET_ACTIVE[BPHY] is set.
                                                                 This field is always reinitialized on a core domain reset. */
#else /* Word 0 - Little Endian */
        uint64_t soft_rst              : 1;  /**< [  0:  0](R/W1C/H) Clear software-initiated reset of the BPHY processor and associated logic.
                                                                 When set to one, the soft reset of the BPHY is removed.
                                                                 Reads of this register show the soft reset state.  Not the actual BPHY domain reset.
                                                                 Other factors may keep the reset active, reading RST_RESET_ACTIVE[BPHY] shows
                                                                 the actual reset state.  To compensate for delays in reset, this field should only
                                                                 be set if RST_RESET_ACTIVE[BPHY] is set.
                                                                 This field is always reinitialized on a core domain reset. */
        uint64_t reserved_1_63         : 63;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_rst_bphy_domain_w1c_s cn; */
};
typedef union cavm_rst_bphy_domain_w1c cavm_rst_bphy_domain_w1c_t;

#define CAVM_RST_BPHY_DOMAIN_W1C CAVM_RST_BPHY_DOMAIN_W1C_FUNC()
static inline uint64_t CAVM_RST_BPHY_DOMAIN_W1C_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_RST_BPHY_DOMAIN_W1C_FUNC(void)
{
    return 0x87e006001858ll;
}

#define typedef_CAVM_RST_BPHY_DOMAIN_W1C cavm_rst_bphy_domain_w1c_t
#define bustype_CAVM_RST_BPHY_DOMAIN_W1C CSR_TYPE_RSL
#define basename_CAVM_RST_BPHY_DOMAIN_W1C "RST_BPHY_DOMAIN_W1C"
#define device_bar_CAVM_RST_BPHY_DOMAIN_W1C 0x0 /* PF_BAR0 */
#define busnum_CAVM_RST_BPHY_DOMAIN_W1C 0
#define arguments_CAVM_RST_BPHY_DOMAIN_W1C -1,-1,-1,-1

/**
 * Register (RSL) rst_bphy_domain_w1s
 *
 * INTERNAL: RST BPHY Domain Soft Reset Set Register
 *
 * This register is not accessible through ROM scripts; see SCR_WRITE32_S[ADDR].
 */
union cavm_rst_bphy_domain_w1s
{
    uint64_t u;
    struct cavm_rst_bphy_domain_w1s_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_1_63         : 63;
        uint64_t soft_rst              : 1;  /**< [  0:  0](R/W1S/H) Set software-initiated reset of BPHY associated logic.
                                                                 When set to one, all logic associated with the BPHY domain is placed in reset.
                                                                 Reads of this register show the soft reset state.  Not the actual BPHY domain reset.
                                                                 Other factors may keep the reset active, reading RST_RESET_ACTIVE[BPHY] shows
                                                                 the actual reset state.
                                                                 This field is always reinitialized on a core domain reset. */
#else /* Word 0 - Little Endian */
        uint64_t soft_rst              : 1;  /**< [  0:  0](R/W1S/H) Set software-initiated reset of BPHY associated logic.
                                                                 When set to one, all logic associated with the BPHY domain is placed in reset.
                                                                 Reads of this register show the soft reset state.  Not the actual BPHY domain reset.
                                                                 Other factors may keep the reset active, reading RST_RESET_ACTIVE[BPHY] shows
                                                                 the actual reset state.
                                                                 This field is always reinitialized on a core domain reset. */
        uint64_t reserved_1_63         : 63;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_rst_bphy_domain_w1s_s cn; */
};
typedef union cavm_rst_bphy_domain_w1s cavm_rst_bphy_domain_w1s_t;

#define CAVM_RST_BPHY_DOMAIN_W1S CAVM_RST_BPHY_DOMAIN_W1S_FUNC()
static inline uint64_t CAVM_RST_BPHY_DOMAIN_W1S_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_RST_BPHY_DOMAIN_W1S_FUNC(void)
{
    return 0x87e006001850ll;
}

#define typedef_CAVM_RST_BPHY_DOMAIN_W1S cavm_rst_bphy_domain_w1s_t
#define bustype_CAVM_RST_BPHY_DOMAIN_W1S CSR_TYPE_RSL
#define basename_CAVM_RST_BPHY_DOMAIN_W1S "RST_BPHY_DOMAIN_W1S"
#define device_bar_CAVM_RST_BPHY_DOMAIN_W1S 0x0 /* PF_BAR0 */
#define busnum_CAVM_RST_BPHY_DOMAIN_W1S 0
#define arguments_CAVM_RST_BPHY_DOMAIN_W1S -1,-1,-1,-1

/**
 * Register (RSL) rst_cfg
 *
 * RST Configuration Register
 * This register is not accessible through ROM scripts; see SCR_WRITE32_S[ADDR].
 */
union cavm_rst_cfg
{
    uint64_t u;
    struct cavm_rst_cfg_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_1_63         : 63;
        uint64_t clr_bist              : 1;  /**< [  0:  0](R/W/H) Perform clear BIST on each chip domain reset, instead of a full BIST.
                                                                 Note that the first BIST during a cold domain reset is always a clear BIST.
                                                                 This field is reinitialized with a cold domain reset based on the
                                                                 inverse of GPIO_STRAP_PIN_E[FULL_BIST]. */
#else /* Word 0 - Little Endian */
        uint64_t clr_bist              : 1;  /**< [  0:  0](R/W/H) Perform clear BIST on each chip domain reset, instead of a full BIST.
                                                                 Note that the first BIST during a cold domain reset is always a clear BIST.
                                                                 This field is reinitialized with a cold domain reset based on the
                                                                 inverse of GPIO_STRAP_PIN_E[FULL_BIST]. */
        uint64_t reserved_1_63         : 63;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_rst_cfg_s cn; */
};
typedef union cavm_rst_cfg cavm_rst_cfg_t;

#define CAVM_RST_CFG CAVM_RST_CFG_FUNC()
static inline uint64_t CAVM_RST_CFG_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_RST_CFG_FUNC(void)
{
    return 0x87e006001610ll;
}

#define typedef_CAVM_RST_CFG cavm_rst_cfg_t
#define bustype_CAVM_RST_CFG CSR_TYPE_RSL
#define basename_CAVM_RST_CFG "RST_CFG"
#define device_bar_CAVM_RST_CFG 0x0 /* PF_BAR0 */
#define busnum_CAVM_RST_CFG 0
#define arguments_CAVM_RST_CFG -1,-1,-1,-1

/**
 * Register (RSL) rst_chip_domain_w1s
 *
 * RST Chip Domain Soft Pulse Reset Register
 * This register is not accessible through ROM scripts; see SCR_WRITE32_S[ADDR].
 */
union cavm_rst_chip_domain_w1s
{
    uint64_t u;
    struct cavm_rst_chip_domain_w1s_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_1_63         : 63;
        uint64_t soft_rst              : 1;  /**< [  0:  0](R/W1S/H) Software-initiated reset of entire chip domain.
                                                                 When set to one, places the entire chip into reset. At the completion
                                                                 of the reset the field is cleared.  This is similar to asserting and
                                                                 deasserting the CHIP_RESET_L pin.
                                                                 When performing a reset, set this bit and then read any register to
                                                                 confirm that chip is out of reset.
                                                                 This field is always reinitialized on a chip domain reset. */
#else /* Word 0 - Little Endian */
        uint64_t soft_rst              : 1;  /**< [  0:  0](R/W1S/H) Software-initiated reset of entire chip domain.
                                                                 When set to one, places the entire chip into reset. At the completion
                                                                 of the reset the field is cleared.  This is similar to asserting and
                                                                 deasserting the CHIP_RESET_L pin.
                                                                 When performing a reset, set this bit and then read any register to
                                                                 confirm that chip is out of reset.
                                                                 This field is always reinitialized on a chip domain reset. */
        uint64_t reserved_1_63         : 63;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_rst_chip_domain_w1s_s cn; */
};
typedef union cavm_rst_chip_domain_w1s cavm_rst_chip_domain_w1s_t;

#define CAVM_RST_CHIP_DOMAIN_W1S CAVM_RST_CHIP_DOMAIN_W1S_FUNC()
static inline uint64_t CAVM_RST_CHIP_DOMAIN_W1S_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_RST_CHIP_DOMAIN_W1S_FUNC(void)
{
    return 0x87e006001810ll;
}

#define typedef_CAVM_RST_CHIP_DOMAIN_W1S cavm_rst_chip_domain_w1s_t
#define bustype_CAVM_RST_CHIP_DOMAIN_W1S CSR_TYPE_RSL
#define basename_CAVM_RST_CHIP_DOMAIN_W1S "RST_CHIP_DOMAIN_W1S"
#define device_bar_CAVM_RST_CHIP_DOMAIN_W1S 0x0 /* PF_BAR0 */
#define busnum_CAVM_RST_CHIP_DOMAIN_W1S 0
#define arguments_CAVM_RST_CHIP_DOMAIN_W1S -1,-1,-1,-1

/**
 * Register (RSL) rst_ckill
 *
 * RST Chipkill Timer Register
 * This register is not accessible through ROM scripts; see SCR_WRITE32_S[ADDR].
 */
union cavm_rst_ckill
{
    uint64_t u;
    struct cavm_rst_ckill_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_47_63        : 17;
        uint64_t timer                 : 47; /**< [ 46:  0](R/W/H) Chipkill timer measured in 100 MHz PLL reference clocks. Read
                                                                 requests return current chip kill timer. Write operations have
                                                                 no effect when RST_BOOT[CHIPKILL] is set.
                                                                 This field is always reinitialized on a chip domain reset. */
#else /* Word 0 - Little Endian */
        uint64_t timer                 : 47; /**< [ 46:  0](R/W/H) Chipkill timer measured in 100 MHz PLL reference clocks. Read
                                                                 requests return current chip kill timer. Write operations have
                                                                 no effect when RST_BOOT[CHIPKILL] is set.
                                                                 This field is always reinitialized on a chip domain reset. */
        uint64_t reserved_47_63        : 17;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_rst_ckill_s cn; */
};
typedef union cavm_rst_ckill cavm_rst_ckill_t;

#define CAVM_RST_CKILL CAVM_RST_CKILL_FUNC()
static inline uint64_t CAVM_RST_CKILL_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_RST_CKILL_FUNC(void)
{
    return 0x87e006001638ll;
}

#define typedef_CAVM_RST_CKILL cavm_rst_ckill_t
#define bustype_CAVM_RST_CKILL CSR_TYPE_RSL
#define basename_CAVM_RST_CKILL "RST_CKILL"
#define device_bar_CAVM_RST_CKILL 0x0 /* PF_BAR0 */
#define busnum_CAVM_RST_CKILL 0
#define arguments_CAVM_RST_CKILL -1,-1,-1,-1

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
        uint64_t data                  : 64; /**< [ 63:  0](R/W) Scratch data registers preserved through chip, core,
                                                                 MCP and SCP domain resets.
                                                                 This field is always reinitialized on a cold domain reset. */
#else /* Word 0 - Little Endian */
        uint64_t data                  : 64; /**< [ 63:  0](R/W) Scratch data registers preserved through chip, core,
                                                                 MCP and SCP domain resets.
                                                                 This field is always reinitialized on a cold domain reset. */
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
 * Register (RSL) rst_cold_domain_w1s
 *
 * RST Cold Domain Pulse Reset Register
 * This register is not accessible through ROM scripts; see SCR_WRITE32_S[ADDR].
 */
union cavm_rst_cold_domain_w1s
{
    uint64_t u;
    struct cavm_rst_cold_domain_w1s_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_1_63         : 63;
        uint64_t soft_rst              : 1;  /**< [  0:  0](R/W1S/H) Software-initiated reset of entire chip emulating a cold domain reset.
                                                                 When set to one, places the entire chip into reset. At the completion
                                                                 of the reset the field is cleared.
                                                                 This action is similar to deasserting and asserting PLL_DCOK with the
                                                                 exception that external pins are not sampled again.
                                                                 When performing a reset, set this bit and
                                                                 then read any register to confirm that chip is out of reset.
                                                                 This field is always reinitialized on a cold domain reset. */
#else /* Word 0 - Little Endian */
        uint64_t soft_rst              : 1;  /**< [  0:  0](R/W1S/H) Software-initiated reset of entire chip emulating a cold domain reset.
                                                                 When set to one, places the entire chip into reset. At the completion
                                                                 of the reset the field is cleared.
                                                                 This action is similar to deasserting and asserting PLL_DCOK with the
                                                                 exception that external pins are not sampled again.
                                                                 When performing a reset, set this bit and
                                                                 then read any register to confirm that chip is out of reset.
                                                                 This field is always reinitialized on a cold domain reset. */
        uint64_t reserved_1_63         : 63;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_rst_cold_domain_w1s_s cn; */
};
typedef union cavm_rst_cold_domain_w1s cavm_rst_cold_domain_w1s_t;

#define CAVM_RST_COLD_DOMAIN_W1S CAVM_RST_COLD_DOMAIN_W1S_FUNC()
static inline uint64_t CAVM_RST_COLD_DOMAIN_W1S_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_RST_COLD_DOMAIN_W1S_FUNC(void)
{
    return 0x87e006001808ll;
}

#define typedef_CAVM_RST_COLD_DOMAIN_W1S cavm_rst_cold_domain_w1s_t
#define bustype_CAVM_RST_COLD_DOMAIN_W1S CSR_TYPE_RSL
#define basename_CAVM_RST_COLD_DOMAIN_W1S "RST_COLD_DOMAIN_W1S"
#define device_bar_CAVM_RST_COLD_DOMAIN_W1S 0x0 /* PF_BAR0 */
#define busnum_CAVM_RST_COLD_DOMAIN_W1S 0
#define arguments_CAVM_RST_COLD_DOMAIN_W1S -1,-1,-1,-1

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
        uint64_t reserved_32_63        : 32;
        uint64_t plls                  : 16; /**< [ 31: 16](RO) PLL active. Each bit corresponds to a PLL enumerated by RST_PLL_E being available.
                                                                 Internal:
                                                                 Determined by tie__init_mul \> 0 for each PLL. */
        uint64_t rst_devs              : 8;  /**< [ 15:  8](RO) Number of RST_DEV_E enumeration values supported, and size of RST_DEV_MAP(). */
        uint64_t pems                  : 8;  /**< [  7:  0](RO) Number of PEMs supported by RST. */
#else /* Word 0 - Little Endian */
        uint64_t pems                  : 8;  /**< [  7:  0](RO) Number of PEMs supported by RST. */
        uint64_t rst_devs              : 8;  /**< [ 15:  8](RO) Number of RST_DEV_E enumeration values supported, and size of RST_DEV_MAP(). */
        uint64_t plls                  : 16; /**< [ 31: 16](RO) PLL active. Each bit corresponds to a PLL enumerated by RST_PLL_E being available.
                                                                 Internal:
                                                                 Determined by tie__init_mul \> 0 for each PLL. */
        uint64_t reserved_32_63        : 32;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_rst_const_s cn; */
};
typedef union cavm_rst_const cavm_rst_const_t;

#define CAVM_RST_CONST CAVM_RST_CONST_FUNC()
static inline uint64_t CAVM_RST_CONST_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_RST_CONST_FUNC(void)
{
    return 0x87e0060018f8ll;
}

#define typedef_CAVM_RST_CONST cavm_rst_const_t
#define bustype_CAVM_RST_CONST CSR_TYPE_RSL
#define basename_CAVM_RST_CONST "RST_CONST"
#define device_bar_CAVM_RST_CONST 0x0 /* PF_BAR0 */
#define busnum_CAVM_RST_CONST 0
#define arguments_CAVM_RST_CONST -1,-1,-1,-1

/**
 * Register (RSL) rst_core_domain_w1c
 *
 * RST Core Domain Soft Reset Clear Register
 * This register is not accessible through ROM scripts; see SCR_WRITE32_S[ADDR].
 */
union cavm_rst_core_domain_w1c
{
    uint64_t u;
    struct cavm_rst_core_domain_w1c_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_1_63         : 63;
        uint64_t soft_rst              : 1;  /**< [  0:  0](R/W1C/H) Clear software-initiated reset of AP cores, cache, NCB and associated logic.
                                                                 When set to one, the soft reset of the core is removed.
                                                                 Reads of this register show the soft reset state.  Not the actual core domain reset.
                                                                 Other factors may keep the reset active, reading RST_RESET_ACTIVE[CORE] shows
                                                                 the actual reset state.  To compensate for delays in reset, this field should only
                                                                 be set if RST_RESET_ACTIVE[CORE] is set.
                                                                 This field is always reinitialized on a chip domain reset. */
#else /* Word 0 - Little Endian */
        uint64_t soft_rst              : 1;  /**< [  0:  0](R/W1C/H) Clear software-initiated reset of AP cores, cache, NCB and associated logic.
                                                                 When set to one, the soft reset of the core is removed.
                                                                 Reads of this register show the soft reset state.  Not the actual core domain reset.
                                                                 Other factors may keep the reset active, reading RST_RESET_ACTIVE[CORE] shows
                                                                 the actual reset state.  To compensate for delays in reset, this field should only
                                                                 be set if RST_RESET_ACTIVE[CORE] is set.
                                                                 This field is always reinitialized on a chip domain reset. */
        uint64_t reserved_1_63         : 63;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_rst_core_domain_w1c_s cn; */
};
typedef union cavm_rst_core_domain_w1c cavm_rst_core_domain_w1c_t;

#define CAVM_RST_CORE_DOMAIN_W1C CAVM_RST_CORE_DOMAIN_W1C_FUNC()
static inline uint64_t CAVM_RST_CORE_DOMAIN_W1C_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_RST_CORE_DOMAIN_W1C_FUNC(void)
{
    return 0x87e006001828ll;
}

#define typedef_CAVM_RST_CORE_DOMAIN_W1C cavm_rst_core_domain_w1c_t
#define bustype_CAVM_RST_CORE_DOMAIN_W1C CSR_TYPE_RSL
#define basename_CAVM_RST_CORE_DOMAIN_W1C "RST_CORE_DOMAIN_W1C"
#define device_bar_CAVM_RST_CORE_DOMAIN_W1C 0x0 /* PF_BAR0 */
#define busnum_CAVM_RST_CORE_DOMAIN_W1C 0
#define arguments_CAVM_RST_CORE_DOMAIN_W1C -1,-1,-1,-1

/**
 * Register (RSL) rst_core_domain_w1s
 *
 * RST Core Domain Soft Reset Set Register
 * This register is not accessible through ROM scripts; see SCR_WRITE32_S[ADDR].
 */
union cavm_rst_core_domain_w1s
{
    uint64_t u;
    struct cavm_rst_core_domain_w1s_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_1_63         : 63;
        uint64_t soft_rst              : 1;  /**< [  0:  0](R/W1S/H) Software-initiated reset of AP cores, cache, NCB and associated logic.
                                                                 When set to one, all logic associated with the core domain is placed in reset.
                                                                 Reads of this register show the soft reset state.  Not the actual core domain reset.
                                                                 Other factors may keep the reset active, reading RST_RESET_ACTIVE[CORE] shows
                                                                 the actual reset state.
                                                                 It is typically cleared by writing to RST_CORE_DOMAIN_W1C.
                                                                 This field is always reinitialized on a chip domain reset. */
#else /* Word 0 - Little Endian */
        uint64_t soft_rst              : 1;  /**< [  0:  0](R/W1S/H) Software-initiated reset of AP cores, cache, NCB and associated logic.
                                                                 When set to one, all logic associated with the core domain is placed in reset.
                                                                 Reads of this register show the soft reset state.  Not the actual core domain reset.
                                                                 Other factors may keep the reset active, reading RST_RESET_ACTIVE[CORE] shows
                                                                 the actual reset state.
                                                                 It is typically cleared by writing to RST_CORE_DOMAIN_W1C.
                                                                 This field is always reinitialized on a chip domain reset. */
        uint64_t reserved_1_63         : 63;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_rst_core_domain_w1s_s cn; */
};
typedef union cavm_rst_core_domain_w1s cavm_rst_core_domain_w1s_t;

#define CAVM_RST_CORE_DOMAIN_W1S CAVM_RST_CORE_DOMAIN_W1S_FUNC()
static inline uint64_t CAVM_RST_CORE_DOMAIN_W1S_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_RST_CORE_DOMAIN_W1S_FUNC(void)
{
    return 0x87e006001820ll;
}

#define typedef_CAVM_RST_CORE_DOMAIN_W1S cavm_rst_core_domain_w1s_t
#define bustype_CAVM_RST_CORE_DOMAIN_W1S CSR_TYPE_RSL
#define basename_CAVM_RST_CORE_DOMAIN_W1S "RST_CORE_DOMAIN_W1S"
#define device_bar_CAVM_RST_CORE_DOMAIN_W1S 0x0 /* PF_BAR0 */
#define busnum_CAVM_RST_CORE_DOMAIN_W1S 0
#define arguments_CAVM_RST_CORE_DOMAIN_W1S -1,-1,-1,-1

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
        uint64_t reserved_5_63         : 59;
        uint64_t div_clk_rst           : 1;  /**< [  4:  4](R/W) Force clock divider reset.
                                                                 Setting this field will force fixed clock dividers into reset.
                                                                 Clearing this field will enable clock dividers.
                                                                 For diagnostic use only.

                                                                 This field is always reinitialized on a cold domain reset. */
        uint64_t dll_csr_wakeup        : 1;  /**< [  3:  3](R/W) Reserved.
                                                                 Internal:
                                                                 Forces DLL setting to unlock.
                                                                 Setting this field will force all DLLs to track clock changes.
                                                                 For diagnostic use only.

                                                                 This field is always reinitialized on a cold domain reset. */
        uint64_t clkena_on             : 1;  /**< [  2:  2](R/W) Force global clock enable on.
                                                                 Setting this field will force all clocks on while they are in reset and
                                                                 will dramatically increase power consumption.
                                                                 For diagnostic use only.
                                                                 This field is always reinitialized on a cold domain reset. */
        uint64_t clk_cng               : 1;  /**< [  1:  1](R/W) Reserved.
                                                                 Internal:
                                                                 Force clock-changing indicator on.
                                                                 For diagnostic use only.
                                                                 This field is always reinitialized on a cold domain reset. */
        uint64_t clk_on                : 1;  /**< [  0:  0](R/W) Force conditional clock used for interrupt logic to always be on.
                                                                 For diagnostic use only.
                                                                 This field is always reinitialized on a cold domain reset. */
#else /* Word 0 - Little Endian */
        uint64_t clk_on                : 1;  /**< [  0:  0](R/W) Force conditional clock used for interrupt logic to always be on.
                                                                 For diagnostic use only.
                                                                 This field is always reinitialized on a cold domain reset. */
        uint64_t clk_cng               : 1;  /**< [  1:  1](R/W) Reserved.
                                                                 Internal:
                                                                 Force clock-changing indicator on.
                                                                 For diagnostic use only.
                                                                 This field is always reinitialized on a cold domain reset. */
        uint64_t clkena_on             : 1;  /**< [  2:  2](R/W) Force global clock enable on.
                                                                 Setting this field will force all clocks on while they are in reset and
                                                                 will dramatically increase power consumption.
                                                                 For diagnostic use only.
                                                                 This field is always reinitialized on a cold domain reset. */
        uint64_t dll_csr_wakeup        : 1;  /**< [  3:  3](R/W) Reserved.
                                                                 Internal:
                                                                 Forces DLL setting to unlock.
                                                                 Setting this field will force all DLLs to track clock changes.
                                                                 For diagnostic use only.

                                                                 This field is always reinitialized on a cold domain reset. */
        uint64_t div_clk_rst           : 1;  /**< [  4:  4](R/W) Force clock divider reset.
                                                                 Setting this field will force fixed clock dividers into reset.
                                                                 Clearing this field will enable clock dividers.
                                                                 For diagnostic use only.

                                                                 This field is always reinitialized on a cold domain reset. */
        uint64_t reserved_5_63         : 59;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_rst_debug_s cn; */
};
typedef union cavm_rst_debug cavm_rst_debug_t;

#define CAVM_RST_DEBUG CAVM_RST_DEBUG_FUNC()
static inline uint64_t CAVM_RST_DEBUG_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_RST_DEBUG_FUNC(void)
{
    return 0x87e0060017b0ll;
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
        uint64_t reserved_16_63        : 48;
        uint64_t rst_dly               : 16; /**< [ 15:  0](R/W) Reset delay. Chip and core domain resets immediately causes an early reset
                                                                 notification to the DDR interface.  The assertion of the domain reset is delayed
                                                                 by this many 100 MHz PLL reference clocks. The minimum value is 1 uS.
                                                                 Typical value is 5 uS once core domain has been brought out of reset.
                                                                 This field is reinitialized with a cold domain reset. */
#else /* Word 0 - Little Endian */
        uint64_t rst_dly               : 16; /**< [ 15:  0](R/W) Reset delay. Chip and core domain resets immediately causes an early reset
                                                                 notification to the DDR interface.  The assertion of the domain reset is delayed
                                                                 by this many 100 MHz PLL reference clocks. The minimum value is 1 uS.
                                                                 Typical value is 5 uS once core domain has been brought out of reset.
                                                                 This field is reinitialized with a cold domain reset. */
        uint64_t reserved_16_63        : 48;
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
 * Register (RSL) rst_dev_map#
 *
 * RST Device Map Register
 * This register configures the reset domain of devices. Index {a} is enumerated by RST_DEV_E.
 * Writes to these registers should only occur when all the bits of RST_BIST_ACTIVE are clear.
 * See RST_BIST_ACTIVE for details.
 * Only one RST_DEV_MAP() should be written at a time.
 *
 * This register is not accessible through ROM scripts; see SCR_WRITE32_S[ADDR].
 */
union cavm_rst_dev_mapx
{
    uint64_t u;
    struct cavm_rst_dev_mapx_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_3_63         : 61;
        uint64_t dmn                   : 3;  /**< [  2:  0](R/W) Map of programmable devices to reset domains. When the specified domain reset
                                                                 occurs the corresponding device will reset. Devices are numbered according to
                                                                 RST_DEV_E.

                                                                 See RST_DOMAIN_E for field encodings.

                                                                 This field is always reinitialized on a cold domain reset.

                                                                 Internal:
                                                                 RST_DEV_MAP()[DMN] resets to core domain for everything except AVS, EMM, and MPI\<1:0\>
                                                                 which are reset to SCP domain. */
#else /* Word 0 - Little Endian */
        uint64_t dmn                   : 3;  /**< [  2:  0](R/W) Map of programmable devices to reset domains. When the specified domain reset
                                                                 occurs the corresponding device will reset. Devices are numbered according to
                                                                 RST_DEV_E.

                                                                 See RST_DOMAIN_E for field encodings.

                                                                 This field is always reinitialized on a cold domain reset.

                                                                 Internal:
                                                                 RST_DEV_MAP()[DMN] resets to core domain for everything except AVS, EMM, and MPI\<1:0\>
                                                                 which are reset to SCP domain. */
        uint64_t reserved_3_63         : 61;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_rst_dev_mapx_s cn; */
};
typedef union cavm_rst_dev_mapx cavm_rst_dev_mapx_t;

static inline uint64_t CAVM_RST_DEV_MAPX(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_RST_DEV_MAPX(uint64_t a)
{
    if (a<=47)
        return 0x87e00a001a00ll + 8ll * ((a) & 0x3f);
    __cavm_csr_fatal("RST_DEV_MAPX", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_RST_DEV_MAPX(a) cavm_rst_dev_mapx_t
#define bustype_CAVM_RST_DEV_MAPX(a) CSR_TYPE_RSL
#define basename_CAVM_RST_DEV_MAPX(a) "RST_DEV_MAPX"
#define device_bar_CAVM_RST_DEV_MAPX(a) 0x2 /* PF_BAR2 */
#define busnum_CAVM_RST_DEV_MAPX(a) (a)
#define arguments_CAVM_RST_DEV_MAPX(a) (a),-1,-1,-1

/**
 * Register (RSL) rst_eco
 *
 * INTERNAL: RST ECO Register
 *
 * This register is not accessible through ROM scripts; see SCR_WRITE32_S[ADDR].
 */
union cavm_rst_eco
{
    uint64_t u;
    struct cavm_rst_eco_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_32_63        : 32;
        uint64_t eco_rw                : 32; /**< [ 31:  0](R/W) ECO flops.
                                                                 This field is always reinitialized on a cold domain reset. */
#else /* Word 0 - Little Endian */
        uint64_t eco_rw                : 32; /**< [ 31:  0](R/W) ECO flops.
                                                                 This field is always reinitialized on a cold domain reset. */
        uint64_t reserved_32_63        : 32;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_rst_eco_s cn; */
};
typedef union cavm_rst_eco cavm_rst_eco_t;

#define CAVM_RST_ECO CAVM_RST_ECO_FUNC()
static inline uint64_t CAVM_RST_ECO_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_RST_ECO_FUNC(void)
{
    return 0x87e0060017b8ll;
}

#define typedef_CAVM_RST_ECO cavm_rst_eco_t
#define bustype_CAVM_RST_ECO CSR_TYPE_RSL
#define basename_CAVM_RST_ECO "RST_ECO"
#define device_bar_CAVM_RST_ECO 0x0 /* PF_BAR0 */
#define busnum_CAVM_RST_ECO 0
#define arguments_CAVM_RST_ECO -1,-1,-1,-1

/**
 * Register (RSL) rst_ecp_domain_w1c
 *
 * RST ECP Domain Soft Reset Clear Register
 * This register is not accessible through ROM scripts; see SCR_WRITE32_S[ADDR].
 */
union cavm_rst_ecp_domain_w1c
{
    uint64_t u;
    struct cavm_rst_ecp_domain_w1c_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_1_63         : 63;
        uint64_t soft_rst              : 1;  /**< [  0:  0](R/W1C/H) Clear software-initiated reset of the ECP processor and associated logic.
                                                                 When set to one, the soft reset of the ECP is removed.
                                                                 Reads of this register show the soft reset state.  Not the actual ECP domain reset.
                                                                 Other factors may keep the reset active, reading RST_RESET_ACTIVE[ECP] shows
                                                                 the actual reset state.  To compensate for delays in reset, this field should only
                                                                 be set if RST_RESET_ACTIVE[ECP] is set.
                                                                 This field is always reinitialized on a chip domain reset. */
#else /* Word 0 - Little Endian */
        uint64_t soft_rst              : 1;  /**< [  0:  0](R/W1C/H) Clear software-initiated reset of the ECP processor and associated logic.
                                                                 When set to one, the soft reset of the ECP is removed.
                                                                 Reads of this register show the soft reset state.  Not the actual ECP domain reset.
                                                                 Other factors may keep the reset active, reading RST_RESET_ACTIVE[ECP] shows
                                                                 the actual reset state.  To compensate for delays in reset, this field should only
                                                                 be set if RST_RESET_ACTIVE[ECP] is set.
                                                                 This field is always reinitialized on a chip domain reset. */
        uint64_t reserved_1_63         : 63;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_rst_ecp_domain_w1c_s cn; */
};
typedef union cavm_rst_ecp_domain_w1c cavm_rst_ecp_domain_w1c_t;

#define CAVM_RST_ECP_DOMAIN_W1C CAVM_RST_ECP_DOMAIN_W1C_FUNC()
static inline uint64_t CAVM_RST_ECP_DOMAIN_W1C_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_RST_ECP_DOMAIN_W1C_FUNC(void)
{
    return 0x87e006001868ll;
}

#define typedef_CAVM_RST_ECP_DOMAIN_W1C cavm_rst_ecp_domain_w1c_t
#define bustype_CAVM_RST_ECP_DOMAIN_W1C CSR_TYPE_RSL
#define basename_CAVM_RST_ECP_DOMAIN_W1C "RST_ECP_DOMAIN_W1C"
#define device_bar_CAVM_RST_ECP_DOMAIN_W1C 0x0 /* PF_BAR0 */
#define busnum_CAVM_RST_ECP_DOMAIN_W1C 0
#define arguments_CAVM_RST_ECP_DOMAIN_W1C -1,-1,-1,-1

/**
 * Register (RSL) rst_ecp_domain_w1s
 *
 * RST ECP Domain Soft Reset Set Register
 * This register is not accessible through ROM scripts; see SCR_WRITE32_S[ADDR].
 */
union cavm_rst_ecp_domain_w1s
{
    uint64_t u;
    struct cavm_rst_ecp_domain_w1s_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_1_63         : 63;
        uint64_t soft_rst              : 1;  /**< [  0:  0](R/W1S/H) Set software-initiated reset of ECP core and associated logic.
                                                                 When set to one, all logic associated with the ECP domain is placed in reset.
                                                                 Reads of this register show the soft reset state.  Not the actual ECP domain reset.
                                                                 Other factors may keep the reset active, reading RST_RESET_ACTIVE[ECP] shows
                                                                 the actual reset state.
                                                                 It is typically cleared by writing to RST_ECP_DOMAIN_W1C.
                                                                 This field is always reinitialized on a chip domain reset. */
#else /* Word 0 - Little Endian */
        uint64_t soft_rst              : 1;  /**< [  0:  0](R/W1S/H) Set software-initiated reset of ECP core and associated logic.
                                                                 When set to one, all logic associated with the ECP domain is placed in reset.
                                                                 Reads of this register show the soft reset state.  Not the actual ECP domain reset.
                                                                 Other factors may keep the reset active, reading RST_RESET_ACTIVE[ECP] shows
                                                                 the actual reset state.
                                                                 It is typically cleared by writing to RST_ECP_DOMAIN_W1C.
                                                                 This field is always reinitialized on a chip domain reset. */
        uint64_t reserved_1_63         : 63;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_rst_ecp_domain_w1s_s cn; */
};
typedef union cavm_rst_ecp_domain_w1s cavm_rst_ecp_domain_w1s_t;

#define CAVM_RST_ECP_DOMAIN_W1S CAVM_RST_ECP_DOMAIN_W1S_FUNC()
static inline uint64_t CAVM_RST_ECP_DOMAIN_W1S_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_RST_ECP_DOMAIN_W1S_FUNC(void)
{
    return 0x87e006001860ll;
}

#define typedef_CAVM_RST_ECP_DOMAIN_W1S cavm_rst_ecp_domain_w1s_t
#define bustype_CAVM_RST_ECP_DOMAIN_W1S CSR_TYPE_RSL
#define basename_CAVM_RST_ECP_DOMAIN_W1S "RST_ECP_DOMAIN_W1S"
#define device_bar_CAVM_RST_ECP_DOMAIN_W1S 0x0 /* PF_BAR0 */
#define busnum_CAVM_RST_ECP_DOMAIN_W1S 0
#define arguments_CAVM_RST_ECP_DOMAIN_W1S -1,-1,-1,-1

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
        uint64_t reserved_53_63        : 11;
        uint64_t ecp_reset             : 1;  /**< [ 52: 52](R/W1C/H) ECP domain entered reset.
                                                                 This field is reinitialized with a chip domain reset. */
        uint64_t bphy_reset            : 1;  /**< [ 51: 51](R/W1C/H) Reserved.
                                                                 Internal:
                                                                 BPHY domain entered reset.
                                                                 This field is reinitialized with a chip domain reset. */
        uint64_t scp_reset             : 1;  /**< [ 50: 50](R/W1C/H) SCP domain entered reset.
                                                                 This field is reinitialized with a chip domain reset. */
        uint64_t mcp_reset             : 1;  /**< [ 49: 49](R/W1C/H) MCP domain entered reset.
                                                                 This field is reinitialized with a chip domain reset. */
        uint64_t core_reset            : 1;  /**< [ 48: 48](R/W1C/H) Core domain entered reset.
                                                                 This field is reinitialized with a chip domain reset. */
        uint64_t reserved_0_47         : 48;
#else /* Word 0 - Little Endian */
        uint64_t reserved_0_47         : 48;
        uint64_t core_reset            : 1;  /**< [ 48: 48](R/W1C/H) Core domain entered reset.
                                                                 This field is reinitialized with a chip domain reset. */
        uint64_t mcp_reset             : 1;  /**< [ 49: 49](R/W1C/H) MCP domain entered reset.
                                                                 This field is reinitialized with a chip domain reset. */
        uint64_t scp_reset             : 1;  /**< [ 50: 50](R/W1C/H) SCP domain entered reset.
                                                                 This field is reinitialized with a chip domain reset. */
        uint64_t bphy_reset            : 1;  /**< [ 51: 51](R/W1C/H) Reserved.
                                                                 Internal:
                                                                 BPHY domain entered reset.
                                                                 This field is reinitialized with a chip domain reset. */
        uint64_t ecp_reset             : 1;  /**< [ 52: 52](R/W1C/H) ECP domain entered reset.
                                                                 This field is reinitialized with a chip domain reset. */
        uint64_t reserved_53_63        : 11;
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
        uint64_t reserved_53_63        : 11;
        uint64_t ecp_reset             : 1;  /**< [ 52: 52](R/W1C/H) Reads or clears enable for RST_INT[ECP_RESET]. */
        uint64_t bphy_reset            : 1;  /**< [ 51: 51](R/W1C/H) Reads or clears enable for RST_INT[BPHY_RESET].
                                                                 Internal:
                                                                 BPHY domain entered reset.
                                                                 This field is reinitialized with a chip domain reset. */
        uint64_t scp_reset             : 1;  /**< [ 50: 50](R/W1C/H) Reads or clears enable for RST_INT[SCP_RESET]. */
        uint64_t mcp_reset             : 1;  /**< [ 49: 49](R/W1C/H) Reads or clears enable for RST_INT[MCP_RESET]. */
        uint64_t core_reset            : 1;  /**< [ 48: 48](R/W1C/H) Reads or clears enable for RST_INT[CORE_RESET]. */
        uint64_t reserved_0_47         : 48;
#else /* Word 0 - Little Endian */
        uint64_t reserved_0_47         : 48;
        uint64_t core_reset            : 1;  /**< [ 48: 48](R/W1C/H) Reads or clears enable for RST_INT[CORE_RESET]. */
        uint64_t mcp_reset             : 1;  /**< [ 49: 49](R/W1C/H) Reads or clears enable for RST_INT[MCP_RESET]. */
        uint64_t scp_reset             : 1;  /**< [ 50: 50](R/W1C/H) Reads or clears enable for RST_INT[SCP_RESET]. */
        uint64_t bphy_reset            : 1;  /**< [ 51: 51](R/W1C/H) Reads or clears enable for RST_INT[BPHY_RESET].
                                                                 Internal:
                                                                 BPHY domain entered reset.
                                                                 This field is reinitialized with a chip domain reset. */
        uint64_t ecp_reset             : 1;  /**< [ 52: 52](R/W1C/H) Reads or clears enable for RST_INT[ECP_RESET]. */
        uint64_t reserved_53_63        : 11;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_rst_int_ena_w1c_s cn; */
};
typedef union cavm_rst_int_ena_w1c cavm_rst_int_ena_w1c_t;

#define CAVM_RST_INT_ENA_W1C CAVM_RST_INT_ENA_W1C_FUNC()
static inline uint64_t CAVM_RST_INT_ENA_W1C_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_RST_INT_ENA_W1C_FUNC(void)
{
    return 0x87e0060016a8ll;
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
        uint64_t reserved_53_63        : 11;
        uint64_t ecp_reset             : 1;  /**< [ 52: 52](R/W1S/H) Reads or sets enable for RST_INT[ECP_RESET]. */
        uint64_t bphy_reset            : 1;  /**< [ 51: 51](R/W1S/H) Reads or sets enable for RST_INT[BPHY_RESET].
                                                                 Internal:
                                                                 BPHY domain entered reset.
                                                                 This field is reinitialized with a chip domain reset. */
        uint64_t scp_reset             : 1;  /**< [ 50: 50](R/W1S/H) Reads or sets enable for RST_INT[SCP_RESET]. */
        uint64_t mcp_reset             : 1;  /**< [ 49: 49](R/W1S/H) Reads or sets enable for RST_INT[MCP_RESET]. */
        uint64_t core_reset            : 1;  /**< [ 48: 48](R/W1S/H) Reads or sets enable for RST_INT[CORE_RESET]. */
        uint64_t reserved_0_47         : 48;
#else /* Word 0 - Little Endian */
        uint64_t reserved_0_47         : 48;
        uint64_t core_reset            : 1;  /**< [ 48: 48](R/W1S/H) Reads or sets enable for RST_INT[CORE_RESET]. */
        uint64_t mcp_reset             : 1;  /**< [ 49: 49](R/W1S/H) Reads or sets enable for RST_INT[MCP_RESET]. */
        uint64_t scp_reset             : 1;  /**< [ 50: 50](R/W1S/H) Reads or sets enable for RST_INT[SCP_RESET]. */
        uint64_t bphy_reset            : 1;  /**< [ 51: 51](R/W1S/H) Reads or sets enable for RST_INT[BPHY_RESET].
                                                                 Internal:
                                                                 BPHY domain entered reset.
                                                                 This field is reinitialized with a chip domain reset. */
        uint64_t ecp_reset             : 1;  /**< [ 52: 52](R/W1S/H) Reads or sets enable for RST_INT[ECP_RESET]. */
        uint64_t reserved_53_63        : 11;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_rst_int_ena_w1s_s cn; */
};
typedef union cavm_rst_int_ena_w1s cavm_rst_int_ena_w1s_t;

#define CAVM_RST_INT_ENA_W1S CAVM_RST_INT_ENA_W1S_FUNC()
static inline uint64_t CAVM_RST_INT_ENA_W1S_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_RST_INT_ENA_W1S_FUNC(void)
{
    return 0x87e0060016a0ll;
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
        uint64_t reserved_53_63        : 11;
        uint64_t ecp_reset             : 1;  /**< [ 52: 52](R/W1S/H) Reads or sets RST_INT[ECP_RESET]. */
        uint64_t bphy_reset            : 1;  /**< [ 51: 51](R/W1S/H) Reads or sets RST_INT[BPHY_RESET].
                                                                 Internal:
                                                                 BPHY domain entered reset.
                                                                 This field is reinitialized with a chip domain reset. */
        uint64_t scp_reset             : 1;  /**< [ 50: 50](R/W1S/H) Reads or sets RST_INT[SCP_RESET]. */
        uint64_t mcp_reset             : 1;  /**< [ 49: 49](R/W1S/H) Reads or sets RST_INT[MCP_RESET]. */
        uint64_t core_reset            : 1;  /**< [ 48: 48](R/W1S/H) Reads or sets RST_INT[CORE_RESET]. */
        uint64_t reserved_0_47         : 48;
#else /* Word 0 - Little Endian */
        uint64_t reserved_0_47         : 48;
        uint64_t core_reset            : 1;  /**< [ 48: 48](R/W1S/H) Reads or sets RST_INT[CORE_RESET]. */
        uint64_t mcp_reset             : 1;  /**< [ 49: 49](R/W1S/H) Reads or sets RST_INT[MCP_RESET]. */
        uint64_t scp_reset             : 1;  /**< [ 50: 50](R/W1S/H) Reads or sets RST_INT[SCP_RESET]. */
        uint64_t bphy_reset            : 1;  /**< [ 51: 51](R/W1S/H) Reads or sets RST_INT[BPHY_RESET].
                                                                 Internal:
                                                                 BPHY domain entered reset.
                                                                 This field is reinitialized with a chip domain reset. */
        uint64_t ecp_reset             : 1;  /**< [ 52: 52](R/W1S/H) Reads or sets RST_INT[ECP_RESET]. */
        uint64_t reserved_53_63        : 11;
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
        uint64_t reserved_48_63        : 16;
        uint64_t lboot                 : 48; /**< [ 47:  0](R/W1C/H) Bit vector of last reset cause(es).
                                                                 Bit numbers are enumerated by RST_SOURCE_E.
                                                                 Unused bits always read as zero.

                                                                 The value reset with a cold domain reset. */
#else /* Word 0 - Little Endian */
        uint64_t lboot                 : 48; /**< [ 47:  0](R/W1C/H) Bit vector of last reset cause(es).
                                                                 Bit numbers are enumerated by RST_SOURCE_E.
                                                                 Unused bits always read as zero.

                                                                 The value reset with a cold domain reset. */
        uint64_t reserved_48_63        : 16;
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
 * Register (RSL) rst_man_pll#
 *
 * RST Manual PLL Control Register
 * These registers are used in conjunction with the RST_PLL() registers when
 * the RST_PLL()[NEXT_MAN] field is set.  Indexed by RST_PLL_E.
 * These register is not accessible through ROM scripts; see SCR_WRITE32_S[ADDR].
 *
 * This register is always reset on a chip domain reset.
 */
union cavm_rst_man_pllx
{
    uint64_t u;
    struct cavm_rst_man_pllx_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_63           : 1;
        uint64_t power_down            : 3;  /**< [ 62: 60](R/W/H) Power Down.
                                                                 When set, The selected PLL/ARO is powered down and is in reset.  When RST_PLL()[NEXT_PGM]
                                                                 is set and RST_PLL()[NEXT_PLL_SEL] indicates eith a PLL or ARO.  The device is powered up and
                                                                 released from reset by the hardware.  The hardware automatically clears the bit when the
                                                                 sequence is complete and the device is present.  This sequence adds
                                                                 approximately 15uS to the programming.  During this
                                                                 time the NEXT_SWITCH timer is frozen.

                                                                 The following are the bit mapping:
                                                                   \<0\> = PLL0.
                                                                   \<1\> = PLL1.
                                                                   \<2\> = ARO.

                                                                 This operation does not require RST_PLL()[NEXT_MAN] to be set. */
        uint64_t ref_div               : 4;  /**< [ 59: 56](R/W) Reference clock divider.
                                                                   0 = Reserved.
                                                                   1 = Divide reference clock by 1.
                                                                   2 = Divide reference clock by 2 (typical).
                                                                   3-31 = Divide reference clock by N.

                                                                 See PLL Specification for effect on other fields.
                                                                 ARO ignores this field and uses reference clock divided by 2. */
        uint64_t reserved_55           : 1;
        uint64_t post_div              : 9;  /**< [ 54: 46](R/W) Post scalar divider.
                                                                   0, 1 = Reserved.
                                                                   2-511 = Divide VCO output by [POST_DIV]. */
        uint64_t bw                    : 2;  /**< [ 45: 44](R/W) PLL VCO bandwidth.
                                                                 For DFICLK PLL the following setting are supported:
                                                                   00 = 20-30 MHz PLL reference/ref_div
                                                                   01 = 30-45 MHz PLL reference/ref_div
                                                                   10 = 45-65 MHz PLL reference/ref_div
                                                                   11 = 65-90 MHz PLL reference/ref_div

                                                                 Bits used as MSBs for DLF_KP and DLF_KI for LP PLL.
                                                                   11 = 30.72 MHz PLL reference/ref_div (see ALT_REF)
                                                                   11 = 50.00 MHz PLL reference/ref_div

                                                                 Not used by ARO.

                                                                 See PLL and LP PLL specifications for details. */
        uint64_t vco_mul               : 10; /**< [ 43: 34](R/W) VCO multiplier integer.
                                                                    VCO frequency is [VCO_MUL].[VCO_FRACT] * reference_clock / [REF_DIV].

                                                                 See PLL and ARO specifications for min/max VCO frequencies. */
        uint64_t vco_fract             : 10; /**< [ 33: 24](R/W) VCO multiplier fraction.
                                                                    VCO frequency is [VCO_MUL].[VCO_FRACT] * reference_clock / [REF_DIV].

                                                                 See PLL specifications for min/max VCO frequencies.  Not used by ARO. */
        uint64_t icp                   : 4;  /**< [ 23: 20](R/W) DFICLK PLL ICP setting.

                                                                 Typical setting 0x6 (0110) for 30.72, 33.33 and 50.00 MHz reference

                                                                 See DFICLK PLL specification for details.

                                                                 Not used by PLL or ARO. */
        uint64_t dlf_kp                : 5;  /**< [ 19: 15](R/W) DLF Proportional Path Gain Setting.
                                                                 MSB is 1 bit integer stored in BW[1], 3 bit integer and 2 bit fraction stored here.

                                                                 Typical values are:
                                                                 Rate   Value BW[1], DLF_KP  PLL reference/ref_div
                                                                 \<pre\>
                                                                 30 Mhz  0x24   1     0x04   30.00 - 48.70 Mhz
                                                                 50 Mhz  0x3d   1     0x1d   50 Mhz
                                                                 \</pre\>

                                                                 Not used by DFICLK PLL and ARO.

                                                                 See PLL specification for details. */
        uint64_t dlf_ki                : 5;  /**< [ 14: 10](R/W) DLF Intergral Path Gain Setting.
                                                                 MSB is 1 bit integer stored in BW[0] and 5 bit fraction stored here.

                                                                 Typical values are:
                                                                 Rate   Value BW[0], DLF_KI  PLL reference/ref_div
                                                                 \<pre\>
                                                                 30 Mhz  0x3d   1     0x1d   30.00 - 48.70 Mhz
                                                                 50 MHz  0x3f   1     0x1f   50 MHz
                                                                 \</pre\>

                                                                 Not used by DFICLK PLL and ARO.

                                                                 See PLL specification for details. */
        uint64_t update_rate           : 10; /**< [  9:  0](R/W) PLL update rate.  PLL reference/ref_div in 100KHz increments.
                                                                 Default values
                                                                   307 for 30.72 MHz reference.
                                                                   333 for 33.33 MHz reference.
                                                                   500 for 50.00 MHz reference.

                                                                 MSB unused by LP PLL. */
#else /* Word 0 - Little Endian */
        uint64_t update_rate           : 10; /**< [  9:  0](R/W) PLL update rate.  PLL reference/ref_div in 100KHz increments.
                                                                 Default values
                                                                   307 for 30.72 MHz reference.
                                                                   333 for 33.33 MHz reference.
                                                                   500 for 50.00 MHz reference.

                                                                 MSB unused by LP PLL. */
        uint64_t dlf_ki                : 5;  /**< [ 14: 10](R/W) DLF Intergral Path Gain Setting.
                                                                 MSB is 1 bit integer stored in BW[0] and 5 bit fraction stored here.

                                                                 Typical values are:
                                                                 Rate   Value BW[0], DLF_KI  PLL reference/ref_div
                                                                 \<pre\>
                                                                 30 Mhz  0x3d   1     0x1d   30.00 - 48.70 Mhz
                                                                 50 MHz  0x3f   1     0x1f   50 MHz
                                                                 \</pre\>

                                                                 Not used by DFICLK PLL and ARO.

                                                                 See PLL specification for details. */
        uint64_t dlf_kp                : 5;  /**< [ 19: 15](R/W) DLF Proportional Path Gain Setting.
                                                                 MSB is 1 bit integer stored in BW[1], 3 bit integer and 2 bit fraction stored here.

                                                                 Typical values are:
                                                                 Rate   Value BW[1], DLF_KP  PLL reference/ref_div
                                                                 \<pre\>
                                                                 30 Mhz  0x24   1     0x04   30.00 - 48.70 Mhz
                                                                 50 Mhz  0x3d   1     0x1d   50 Mhz
                                                                 \</pre\>

                                                                 Not used by DFICLK PLL and ARO.

                                                                 See PLL specification for details. */
        uint64_t icp                   : 4;  /**< [ 23: 20](R/W) DFICLK PLL ICP setting.

                                                                 Typical setting 0x6 (0110) for 30.72, 33.33 and 50.00 MHz reference

                                                                 See DFICLK PLL specification for details.

                                                                 Not used by PLL or ARO. */
        uint64_t vco_fract             : 10; /**< [ 33: 24](R/W) VCO multiplier fraction.
                                                                    VCO frequency is [VCO_MUL].[VCO_FRACT] * reference_clock / [REF_DIV].

                                                                 See PLL specifications for min/max VCO frequencies.  Not used by ARO. */
        uint64_t vco_mul               : 10; /**< [ 43: 34](R/W) VCO multiplier integer.
                                                                    VCO frequency is [VCO_MUL].[VCO_FRACT] * reference_clock / [REF_DIV].

                                                                 See PLL and ARO specifications for min/max VCO frequencies. */
        uint64_t bw                    : 2;  /**< [ 45: 44](R/W) PLL VCO bandwidth.
                                                                 For DFICLK PLL the following setting are supported:
                                                                   00 = 20-30 MHz PLL reference/ref_div
                                                                   01 = 30-45 MHz PLL reference/ref_div
                                                                   10 = 45-65 MHz PLL reference/ref_div
                                                                   11 = 65-90 MHz PLL reference/ref_div

                                                                 Bits used as MSBs for DLF_KP and DLF_KI for LP PLL.
                                                                   11 = 30.72 MHz PLL reference/ref_div (see ALT_REF)
                                                                   11 = 50.00 MHz PLL reference/ref_div

                                                                 Not used by ARO.

                                                                 See PLL and LP PLL specifications for details. */
        uint64_t post_div              : 9;  /**< [ 54: 46](R/W) Post scalar divider.
                                                                   0, 1 = Reserved.
                                                                   2-511 = Divide VCO output by [POST_DIV]. */
        uint64_t reserved_55           : 1;
        uint64_t ref_div               : 4;  /**< [ 59: 56](R/W) Reference clock divider.
                                                                   0 = Reserved.
                                                                   1 = Divide reference clock by 1.
                                                                   2 = Divide reference clock by 2 (typical).
                                                                   3-31 = Divide reference clock by N.

                                                                 See PLL Specification for effect on other fields.
                                                                 ARO ignores this field and uses reference clock divided by 2. */
        uint64_t power_down            : 3;  /**< [ 62: 60](R/W/H) Power Down.
                                                                 When set, The selected PLL/ARO is powered down and is in reset.  When RST_PLL()[NEXT_PGM]
                                                                 is set and RST_PLL()[NEXT_PLL_SEL] indicates eith a PLL or ARO.  The device is powered up and
                                                                 released from reset by the hardware.  The hardware automatically clears the bit when the
                                                                 sequence is complete and the device is present.  This sequence adds
                                                                 approximately 15uS to the programming.  During this
                                                                 time the NEXT_SWITCH timer is frozen.

                                                                 The following are the bit mapping:
                                                                   \<0\> = PLL0.
                                                                   \<1\> = PLL1.
                                                                   \<2\> = ARO.

                                                                 This operation does not require RST_PLL()[NEXT_MAN] to be set. */
        uint64_t reserved_63           : 1;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_rst_man_pllx_s cn; */
};
typedef union cavm_rst_man_pllx cavm_rst_man_pllx_t;

static inline uint64_t CAVM_RST_MAN_PLLX(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_RST_MAN_PLLX(uint64_t a)
{
    if (a<=15)
        return 0x87e00a001008ll + 0x10ll * ((a) & 0xf);
    __cavm_csr_fatal("RST_MAN_PLLX", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_RST_MAN_PLLX(a) cavm_rst_man_pllx_t
#define bustype_CAVM_RST_MAN_PLLX(a) CSR_TYPE_RSL
#define basename_CAVM_RST_MAN_PLLX(a) "RST_MAN_PLLX"
#define device_bar_CAVM_RST_MAN_PLLX(a) 0x2 /* PF_BAR2 */
#define busnum_CAVM_RST_MAN_PLLX(a) (a)
#define arguments_CAVM_RST_MAN_PLLX(a) (a),-1,-1,-1

/**
 * Register (RSL) rst_mcp_domain_w1c
 *
 * RST MCP Domain Soft Reset Clear Register
 * This register is not accessible through ROM scripts; see SCR_WRITE32_S[ADDR].
 */
union cavm_rst_mcp_domain_w1c
{
    uint64_t u;
    struct cavm_rst_mcp_domain_w1c_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_1_63         : 63;
        uint64_t soft_rst              : 1;  /**< [  0:  0](R/W1C/H) Clear software-initiated reset of the MCP processor and associated logic.
                                                                 When set to one, the soft reset of the MCP is removed.
                                                                 Reads of this register show the soft reset state.  Not the actual MCP domain reset.
                                                                 Other factors may keep the reset active, reading RST_RESET_ACTIVE[MCP] shows
                                                                 the actual reset state.  To compensate for delays in reset, this field should only
                                                                 be set if RST_RESET_ACTIVE[MCP] is set.
                                                                 This field is always reinitialized on a chip domain reset. */
#else /* Word 0 - Little Endian */
        uint64_t soft_rst              : 1;  /**< [  0:  0](R/W1C/H) Clear software-initiated reset of the MCP processor and associated logic.
                                                                 When set to one, the soft reset of the MCP is removed.
                                                                 Reads of this register show the soft reset state.  Not the actual MCP domain reset.
                                                                 Other factors may keep the reset active, reading RST_RESET_ACTIVE[MCP] shows
                                                                 the actual reset state.  To compensate for delays in reset, this field should only
                                                                 be set if RST_RESET_ACTIVE[MCP] is set.
                                                                 This field is always reinitialized on a chip domain reset. */
        uint64_t reserved_1_63         : 63;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_rst_mcp_domain_w1c_s cn; */
};
typedef union cavm_rst_mcp_domain_w1c cavm_rst_mcp_domain_w1c_t;

#define CAVM_RST_MCP_DOMAIN_W1C CAVM_RST_MCP_DOMAIN_W1C_FUNC()
static inline uint64_t CAVM_RST_MCP_DOMAIN_W1C_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_RST_MCP_DOMAIN_W1C_FUNC(void)
{
    return 0x87e006001838ll;
}

#define typedef_CAVM_RST_MCP_DOMAIN_W1C cavm_rst_mcp_domain_w1c_t
#define bustype_CAVM_RST_MCP_DOMAIN_W1C CSR_TYPE_RSL
#define basename_CAVM_RST_MCP_DOMAIN_W1C "RST_MCP_DOMAIN_W1C"
#define device_bar_CAVM_RST_MCP_DOMAIN_W1C 0x0 /* PF_BAR0 */
#define busnum_CAVM_RST_MCP_DOMAIN_W1C 0
#define arguments_CAVM_RST_MCP_DOMAIN_W1C -1,-1,-1,-1

/**
 * Register (RSL) rst_mcp_domain_w1s
 *
 * RST MCP Domain Soft Reset Set Register
 * This register is not accessible through ROM scripts; see SCR_WRITE32_S[ADDR].
 */
union cavm_rst_mcp_domain_w1s
{
    uint64_t u;
    struct cavm_rst_mcp_domain_w1s_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_1_63         : 63;
        uint64_t soft_rst              : 1;  /**< [  0:  0](R/W1S/H) Set software-initiated reset of MCP core and associated logic.
                                                                 When set to one, all logic associated with the MCP domain is placed in reset.
                                                                 Reads of this register show the soft reset state.  Not the actual MCP domain reset.
                                                                 Other factors may keep the reset active, reading RST_RESET_ACTIVE[MCP] shows
                                                                 the actual reset state.
                                                                 It is typically cleared by writing to RST_MCP_DOMAIN_W1C.
                                                                 This field is always reinitialized on a chip domain reset. */
#else /* Word 0 - Little Endian */
        uint64_t soft_rst              : 1;  /**< [  0:  0](R/W1S/H) Set software-initiated reset of MCP core and associated logic.
                                                                 When set to one, all logic associated with the MCP domain is placed in reset.
                                                                 Reads of this register show the soft reset state.  Not the actual MCP domain reset.
                                                                 Other factors may keep the reset active, reading RST_RESET_ACTIVE[MCP] shows
                                                                 the actual reset state.
                                                                 It is typically cleared by writing to RST_MCP_DOMAIN_W1C.
                                                                 This field is always reinitialized on a chip domain reset. */
        uint64_t reserved_1_63         : 63;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_rst_mcp_domain_w1s_s cn; */
};
typedef union cavm_rst_mcp_domain_w1s cavm_rst_mcp_domain_w1s_t;

#define CAVM_RST_MCP_DOMAIN_W1S CAVM_RST_MCP_DOMAIN_W1S_FUNC()
static inline uint64_t CAVM_RST_MCP_DOMAIN_W1S_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_RST_MCP_DOMAIN_W1S_FUNC(void)
{
    return 0x87e006001830ll;
}

#define typedef_CAVM_RST_MCP_DOMAIN_W1S cavm_rst_mcp_domain_w1s_t
#define bustype_CAVM_RST_MCP_DOMAIN_W1S CSR_TYPE_RSL
#define basename_CAVM_RST_MCP_DOMAIN_W1S "RST_MCP_DOMAIN_W1S"
#define device_bar_CAVM_RST_MCP_DOMAIN_W1S 0x0 /* PF_BAR0 */
#define busnum_CAVM_RST_MCP_DOMAIN_W1S 0
#define arguments_CAVM_RST_MCP_DOMAIN_W1S -1,-1,-1,-1

/**
 * Register (RSL) rst_msix_pba#
 *
 * RST MSI-X Pending Bit Array Registers
 * This register is the MSI-X PBA table; the bit number is indexed by the RST_INT_VEC_E
 * enumeration.
 *
 * This register is not accessible through ROM scripts; see SCR_WRITE32_S[ADDR].
 */
union cavm_rst_msix_pbax
{
    uint64_t u;
    struct cavm_rst_msix_pbax_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t pend                  : 64; /**< [ 63:  0](RO/H) Pending message for the associated RST_MSIX_VEC()_CTL, enumerated by
                                                                 RST_INT_VEC_E. Bits that have no associated RST_INT_VEC_E are 0.
                                                                 This field is always reinitialized on a chip domain reset. */
#else /* Word 0 - Little Endian */
        uint64_t pend                  : 64; /**< [ 63:  0](RO/H) Pending message for the associated RST_MSIX_VEC()_CTL, enumerated by
                                                                 RST_INT_VEC_E. Bits that have no associated RST_INT_VEC_E are 0.
                                                                 This field is always reinitialized on a chip domain reset. */
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
 * This register is the MSI-X vector table, indexed by the RST_INT_VEC_E enumeration.
 *
 * This register is not accessible through ROM scripts; see SCR_WRITE32_S[ADDR].
 */
union cavm_rst_msix_vecx_addr
{
    uint64_t u;
    struct cavm_rst_msix_vecx_addr_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_53_63        : 11;
        uint64_t addr                  : 51; /**< [ 52:  2](R/W) IOVA to use for MSI-X delivery of this vector.
                                                                 This field is always reinitialized on a chip domain reset. */
        uint64_t reserved_1            : 1;
        uint64_t secvec                : 1;  /**< [  0:  0](SR/W) Secure vector.
                                                                 0 = This vector may be read or written by either secure or nonsecure states.
                                                                 The vector's IOVA is sent to the SMMU as nonsecure (though this only affects
                                                                 physical addresses if PCCPF_XXX_VSEC_SCTL[MSIX_PHYS]=1).

                                                                 1 = This vector's RST_MSIX_VEC()_ADDR, RST_MSIX_VEC()_CTL, and
                                                                 corresponding bit of RST_MSIX_PBA() are RAZ/WI and does not cause
                                                                 a fault when accessed by the nonsecure world.
                                                                 The vector's IOVA is sent to the SMMU as secure (though this only affects
                                                                 physical addresses if PCCPF_XXX_VSEC_SCTL[MSIX_PHYS]=1 or
                                                                 PCCPF_XXX_VSEC_SCTL[MSIX_SEC_PHYS]=1).

                                                                 If PCCPF_RST_VSEC_SCTL[MSIX_SEC] (for documentation, see
                                                                 PCCPF_XXX_VSEC_SCTL[MSIX_SEC]) is
                                                                 set, all vectors are secure and function as if [SECVEC] was set.
                                                                 This field is always reinitialized on a chip domain reset.

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

                                                                 1 = This vector's RST_MSIX_VEC()_ADDR, RST_MSIX_VEC()_CTL, and
                                                                 corresponding bit of RST_MSIX_PBA() are RAZ/WI and does not cause
                                                                 a fault when accessed by the nonsecure world.
                                                                 The vector's IOVA is sent to the SMMU as secure (though this only affects
                                                                 physical addresses if PCCPF_XXX_VSEC_SCTL[MSIX_PHYS]=1 or
                                                                 PCCPF_XXX_VSEC_SCTL[MSIX_SEC_PHYS]=1).

                                                                 If PCCPF_RST_VSEC_SCTL[MSIX_SEC] (for documentation, see
                                                                 PCCPF_XXX_VSEC_SCTL[MSIX_SEC]) is
                                                                 set, all vectors are secure and function as if [SECVEC] was set.
                                                                 This field is always reinitialized on a chip domain reset.

                                                                 Also note the following:
                                                                 * When PCCPF_XXX_VSEC_SCTL[MSIX_SEC_EN]=1, all secure vectors (including secure
                                                                 VF vectors) will act as if PCCPF/PCCVF_XXX_MSIX_CAP_HDR[MSIXEN]=1,
                                                                 PCCPF/PCCVF_XXX_MSIX_CAP_HDR[FUNM]=0 and PCCPF/PCCVF_XXX_CMD[ME]=1.
                                                                 * When PCCPF_XXX_VSEC_SCTL[MSIX_SEC_PHYS]=1, all secure vectors (including
                                                                 secure VF vectors) are considered physical, regardless of
                                                                 PCCPF_XXX_VSEC_SCTL[MSIX_PHYS]. */
        uint64_t reserved_1            : 1;
        uint64_t addr                  : 51; /**< [ 52:  2](R/W) IOVA to use for MSI-X delivery of this vector.
                                                                 This field is always reinitialized on a chip domain reset. */
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
 * This register is the MSI-X vector table, indexed by the RST_INT_VEC_E enumeration.
 *
 * This register is not accessible through ROM scripts; see SCR_WRITE32_S[ADDR].
 */
union cavm_rst_msix_vecx_ctl
{
    uint64_t u;
    struct cavm_rst_msix_vecx_ctl_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_33_63        : 31;
        uint64_t mask                  : 1;  /**< [ 32: 32](R/W) When set, no MSI-X interrupts are sent to this vector.
                                                                 This field is always reinitialized on a chip domain reset. */
        uint64_t data                  : 32; /**< [ 31:  0](R/W) Data to use for MSI-X delivery of this vector.
                                                                 This field is always reinitialized on a chip domain reset. */
#else /* Word 0 - Little Endian */
        uint64_t data                  : 32; /**< [ 31:  0](R/W) Data to use for MSI-X delivery of this vector.
                                                                 This field is always reinitialized on a chip domain reset. */
        uint64_t mask                  : 1;  /**< [ 32: 32](R/W) When set, no MSI-X interrupts are sent to this vector.
                                                                 This field is always reinitialized on a chip domain reset. */
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
 * Register (RSL) rst_out_ctl
 *
 * INTERNAL: RST External Reset Control Register
 *
 * This register is accessible through ROM scripts; see SCR_WRITE32_S[ADDR].
 */
union cavm_rst_out_ctl
{
    uint64_t u;
    struct cavm_rst_out_ctl_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_6_63         : 58;
        uint64_t ecp_rst               : 1;  /**< [  5:  5](R/W) ECP reset output. Reserved.

                                                                 This field is always reinitialized on an ECP domain reset. */
        uint64_t bphy_rst              : 1;  /**< [  4:  4](R/W) BPHY reset output. When set by software, this field drives the GPIO_PIN_SEL_E::BPHY_RESET_OUT
                                                                 selectable pin active. The pin can be assigned using GPIO_BIT_CFG(). If this
                                                                 field is set by software then it must also be cleared to deassert the pin.
                                                                 The pin is also automatically asserted and deasserted by hardware during a BPHY
                                                                 domain reset.
                                                                 This field is always reinitialized on a BPHY domain reset. */
        uint64_t scp_rst               : 1;  /**< [  3:  3](R/W) SCP reset output. When set by software, this field drives the GPIO_PIN_SEL_E::SCP_RESET_OUT
                                                                 selectable pin active. The pin can be assigned using GPIO_BIT_CFG(). If this
                                                                 field is set by software then it must also be cleared to deassert the pin.
                                                                 The pin is also automatically asserted and deasserted by hardware during a SCP
                                                                 domain reset.
                                                                 This field is always reinitialized on an SCP domain reset. */
        uint64_t mcp_rst               : 1;  /**< [  2:  2](R/W) MCP reset output. When set by software, this field drives the GPIO_PIN_SEL_E::MCP_RESET_OUT
                                                                 selectable pin active. The pin can be assigned using GPIO_BIT_CFG(). If this
                                                                 field is set by software then it must also be cleared to deassert the pin.
                                                                 The pin is also automatically asserted and deasserted by hardware during a MCP
                                                                 domain reset.
                                                                 This field is always reinitialized on an MCP domain reset. */
        uint64_t core_rst              : 1;  /**< [  1:  1](R/W) Core reset output. When set by software, this field drives the GPIO_PIN_SEL_E::CORE_RESET_OUT
                                                                 selectable pin active. The pin can be assigned using GPIO_BIT_CFG(). If this
                                                                 field is set by software then it must also be cleared to deassert the pin.
                                                                 The pin is also automatically asserted and deasserted by hardware during a core
                                                                 domain reset.
                                                                 This field is always reinitialized on a core domain reset. */
        uint64_t chip_rst              : 1;  /**< [  0:  0](R/W) Chip domain reset output. When set to one by software, this field drives the
                                                                 CHIP_RESET_OUT_L pin active low. If this field is set my software then it must also be
                                                                 cleared to deassert the pin. The pin is also automatically asserted and deasserted by
                                                                 hardware during a chip domain reset.
                                                                 This field is always reinitialized on a chip domain reset. */
#else /* Word 0 - Little Endian */
        uint64_t chip_rst              : 1;  /**< [  0:  0](R/W) Chip domain reset output. When set to one by software, this field drives the
                                                                 CHIP_RESET_OUT_L pin active low. If this field is set my software then it must also be
                                                                 cleared to deassert the pin. The pin is also automatically asserted and deasserted by
                                                                 hardware during a chip domain reset.
                                                                 This field is always reinitialized on a chip domain reset. */
        uint64_t core_rst              : 1;  /**< [  1:  1](R/W) Core reset output. When set by software, this field drives the GPIO_PIN_SEL_E::CORE_RESET_OUT
                                                                 selectable pin active. The pin can be assigned using GPIO_BIT_CFG(). If this
                                                                 field is set by software then it must also be cleared to deassert the pin.
                                                                 The pin is also automatically asserted and deasserted by hardware during a core
                                                                 domain reset.
                                                                 This field is always reinitialized on a core domain reset. */
        uint64_t mcp_rst               : 1;  /**< [  2:  2](R/W) MCP reset output. When set by software, this field drives the GPIO_PIN_SEL_E::MCP_RESET_OUT
                                                                 selectable pin active. The pin can be assigned using GPIO_BIT_CFG(). If this
                                                                 field is set by software then it must also be cleared to deassert the pin.
                                                                 The pin is also automatically asserted and deasserted by hardware during a MCP
                                                                 domain reset.
                                                                 This field is always reinitialized on an MCP domain reset. */
        uint64_t scp_rst               : 1;  /**< [  3:  3](R/W) SCP reset output. When set by software, this field drives the GPIO_PIN_SEL_E::SCP_RESET_OUT
                                                                 selectable pin active. The pin can be assigned using GPIO_BIT_CFG(). If this
                                                                 field is set by software then it must also be cleared to deassert the pin.
                                                                 The pin is also automatically asserted and deasserted by hardware during a SCP
                                                                 domain reset.
                                                                 This field is always reinitialized on an SCP domain reset. */
        uint64_t bphy_rst              : 1;  /**< [  4:  4](R/W) BPHY reset output. When set by software, this field drives the GPIO_PIN_SEL_E::BPHY_RESET_OUT
                                                                 selectable pin active. The pin can be assigned using GPIO_BIT_CFG(). If this
                                                                 field is set by software then it must also be cleared to deassert the pin.
                                                                 The pin is also automatically asserted and deasserted by hardware during a BPHY
                                                                 domain reset.
                                                                 This field is always reinitialized on a BPHY domain reset. */
        uint64_t ecp_rst               : 1;  /**< [  5:  5](R/W) ECP reset output. Reserved.

                                                                 This field is always reinitialized on an ECP domain reset. */
        uint64_t reserved_6_63         : 58;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_rst_out_ctl_s cn; */
};
typedef union cavm_rst_out_ctl cavm_rst_out_ctl_t;

#define CAVM_RST_OUT_CTL CAVM_RST_OUT_CTL_FUNC()
static inline uint64_t CAVM_RST_OUT_CTL_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_RST_OUT_CTL_FUNC(void)
{
    return 0x87e006001688ll;
}

#define typedef_CAVM_RST_OUT_CTL cavm_rst_out_ctl_t
#define bustype_CAVM_RST_OUT_CTL CSR_TYPE_RSL
#define basename_CAVM_RST_OUT_CTL "RST_OUT_CTL"
#define device_bar_CAVM_RST_OUT_CTL 0x0 /* PF_BAR0 */
#define busnum_CAVM_RST_OUT_CTL 0
#define arguments_CAVM_RST_OUT_CTL -1,-1,-1,-1

/**
 * Register (RSL) rst_pll#
 *
 * RST PLL Control Register
 * This register is not accessible through ROM scripts; see SCR_WRITE32_S[ADDR].
 * Each index of this register controls a PLL on the chip.  The register is used for
 * typical programming operations and is supplemented with the RST_MAN_PLL()
 * register when selected.  Indexed by RST_PLL_E.
 *
 * The register fields are returned to reset values on a chip domain reset unless
 * specifically noted.
 */
union cavm_rst_pllx
{
    uint64_t u;
    struct cavm_rst_pllx_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t aro_present           : 1;  /**< [ 63: 63](RO/H) Adaptive Ring Oscillator present.
                                                                 0 = ARO is unavailable.  Programming the ARO will have not effect and
                                                                     switching to ARO will result in the clock being stopped.
                                                                 1 = ARO is available. */
        uint64_t pll1_present          : 1;  /**< [ 62: 62](RO/H) PLL1 present.
                                                                 0 = PLL1 is unavailable.  Programming PLL1 will have not effect and
                                                                     switching to PLL1 will result in the clock being stopped.
                                                                 1 = PLL1 is available. */
        uint64_t alt_ref               : 1;  /**< [ 61: 61](R/W/H) Alternate reference clock.
                                                                 0 = Use 100 MHz reference.  [CUR_MUL] and [NEXT_MUL] values are based on 50 MHz increments
                                                                 1 = Use 122.88 MHz alternate reference clock.  [CUR_MUL] and [NEXT_MUL] values are based on
                                                                     30.72 MHz increments.

                                                                 Changing this field typically required PLL programming. */
        uint64_t reserved_60           : 1;
        uint64_t cur_pll_sel           : 3;  /**< [ 59: 57](RO/H) Current PLL selection.
                                                                 Enumerated by RST_PLL_SEL_E. */
        uint64_t reserved_55_56        : 2;
        uint64_t cur_mul               : 7;  /**< [ 54: 48](RO/H) Current frequency multiplier.
                                                                 If Bypass Clock or [USE_MAN] is selected, calculations must be done by software.
                                                                 The value is limited by [MAX_MUL].

                                                                 Units are based on the PLL reference clock.
                                                                   With [ALT_REF] = 0, multiplier units are 50.00 MHz.
                                                                   With [ALT_REF] = 1, multiplier units are 30.76 MHz.

                                                                 The following values are possible:
                                                                   0 = Uninitialized or powered down PLL selected by [CUR_PLL_SEL].
                                                                   1 = Bypass clock selected.
                                                                   2 = Reference clock selected.
                                                                   3 = Runt clock selected.
                                                                   4-70 = Valid clock frequency when [ALT_REF] = 0.
                                                                   4-114 = Valid clock frequency when [ALT_REF] = 1.

                                                                 If NEXT_MAN is set, NEXT_NUL is used to set CUR_MUL but the actual frequency
                                                                 is calculated by:
                                                                         RST_MAN_PLL()[VCO_MUL] / (RST_MAN_PLL()[REF_DIV] * RST_MAN_PLL()[POST_DIV])

                                                                 This field is always set to the lower of [INIT_MUL] and the limit specified by
                                                                 [MAX_MUL] on a chip domain reset. */
        uint64_t reserved_47           : 1;
        uint64_t max_mul               : 7;  /**< [ 46: 40](R/W/H) Maximum PLL multiplier.
                                                                 This field is used to limit the [CUR_MUL] value.
                                                                 A value of zero is considered unlimited.  Once the value
                                                                 of this field is nonzero, any new values written into this field
                                                                 cannot exceed the previous value.  Values 1-5 are reserved
                                                                 since the minimum PLL frequency at least 300 MHz.

                                                                 This field is reinitialized on a chip domain reset. */
        uint64_t reserved_39           : 1;
        uint64_t init_mul              : 7;  /**< [ 38: 32](R/W) Chip Reset Frequency Multiplier.  Value used to program the PLL on a chip domain
                                                                 reset.  Value is based on 50 MHz.

                                                                 This field is only reinitialized on a cold domain reset. */
        uint64_t reserved_31           : 1;
        uint64_t next_mul              : 7;  /**< [ 30: 24](R/W) Next Frequency Multiplier.  Used to program the PLL/ARO if [NEXT_MAN] is clear.

                                                                 Frequency is based on reference clock and [ALT_REF] values.
                                                                   [ALT_REF] = 0, 100.00 MHz reference, units are 50.00 MHz.
                                                                   [ALT_REF] = 1, 122.88 MHz reference, units are 30.76 MHz.

                                                                 Values ranges when [NEXT_MAN] = 0 are:
                                                                   [ALT_REF] = 0, 4 - 70
                                                                   [ALT_REF] = 1, 4 - 114

                                                                 When [NEXT_MAN] = 1. Values have no effect on the hardware but can
                                                                 be used for software.

                                                                 In all cases values specified will appear in CUR_MUL after programming.

                                                                 This field is always set to [INIT_MUL] on a chip domain reset. */
        uint64_t next_pll_sel          : 3;  /**< [ 23: 21](R/W) Next PLL Selection.  This field is used to select which clock source is being
                                                                 selected or programmed.  It affects both the RST_PLL() and RST_MAN_PLL() registers.
                                                                 Both the [NEXT_PGM] and [NEXT_SWITCH] fields use this information to start PLL operations
                                                                 and the value must not be changed while operations are taking place.
                                                                 Enumerated by RST_PLL_SEL_E. */
        uint64_t reserved_18_20        : 3;
        uint64_t next_man              : 1;  /**< [ 17: 17](R/W) Determine PLL controls for next operation using contents of RST_MAN_PLL() to specify values.
                                                                 0 = Use [NEXT_MUL] to determine settings and show results in [CUR_MUL].
                                                                 1 = Use RST_MAN_PLL() fields to determine settings and set [CUR_MUL] to 0. */
        uint64_t next_pgm              : 1;  /**< [ 16: 16](R/W/H) Program PLL specified by [NEXT_PLL_SEL] using [NEXT_MUL] if [NEXT_MAN] is clear or
                                                                 using RST_MAN_PLL() fields if set. Hardware automatically
                                                                 clears this field when both PLL is updated and any delay specified
                                                                 in [NEXT_SWITCH] has completed. */
        uint64_t reserved_14_15        : 2;
        uint64_t next_switch           : 14; /**< [ 13:  0](R/W/H) Switch the PLL specified by [NEXT_PLL_SEL] after delaying this value times 10nS.
                                                                 When set to a nonzero value, the hardware will wait for
                                                                 any PLL programming to complete and then switch after the specified number of
                                                                 100 MHz clocks. Hardware will add additional clocks if required.
                                                                 If the BYPASS pin is asserted, all switches will result in BYPASS_CLK being selected.

                                                                 Internal:
                                                                 Hardware will add counts to maintain 64 reference clock notification to hardware. */
#else /* Word 0 - Little Endian */
        uint64_t next_switch           : 14; /**< [ 13:  0](R/W/H) Switch the PLL specified by [NEXT_PLL_SEL] after delaying this value times 10nS.
                                                                 When set to a nonzero value, the hardware will wait for
                                                                 any PLL programming to complete and then switch after the specified number of
                                                                 100 MHz clocks. Hardware will add additional clocks if required.
                                                                 If the BYPASS pin is asserted, all switches will result in BYPASS_CLK being selected.

                                                                 Internal:
                                                                 Hardware will add counts to maintain 64 reference clock notification to hardware. */
        uint64_t reserved_14_15        : 2;
        uint64_t next_pgm              : 1;  /**< [ 16: 16](R/W/H) Program PLL specified by [NEXT_PLL_SEL] using [NEXT_MUL] if [NEXT_MAN] is clear or
                                                                 using RST_MAN_PLL() fields if set. Hardware automatically
                                                                 clears this field when both PLL is updated and any delay specified
                                                                 in [NEXT_SWITCH] has completed. */
        uint64_t next_man              : 1;  /**< [ 17: 17](R/W) Determine PLL controls for next operation using contents of RST_MAN_PLL() to specify values.
                                                                 0 = Use [NEXT_MUL] to determine settings and show results in [CUR_MUL].
                                                                 1 = Use RST_MAN_PLL() fields to determine settings and set [CUR_MUL] to 0. */
        uint64_t reserved_18_20        : 3;
        uint64_t next_pll_sel          : 3;  /**< [ 23: 21](R/W) Next PLL Selection.  This field is used to select which clock source is being
                                                                 selected or programmed.  It affects both the RST_PLL() and RST_MAN_PLL() registers.
                                                                 Both the [NEXT_PGM] and [NEXT_SWITCH] fields use this information to start PLL operations
                                                                 and the value must not be changed while operations are taking place.
                                                                 Enumerated by RST_PLL_SEL_E. */
        uint64_t next_mul              : 7;  /**< [ 30: 24](R/W) Next Frequency Multiplier.  Used to program the PLL/ARO if [NEXT_MAN] is clear.

                                                                 Frequency is based on reference clock and [ALT_REF] values.
                                                                   [ALT_REF] = 0, 100.00 MHz reference, units are 50.00 MHz.
                                                                   [ALT_REF] = 1, 122.88 MHz reference, units are 30.76 MHz.

                                                                 Values ranges when [NEXT_MAN] = 0 are:
                                                                   [ALT_REF] = 0, 4 - 70
                                                                   [ALT_REF] = 1, 4 - 114

                                                                 When [NEXT_MAN] = 1. Values have no effect on the hardware but can
                                                                 be used for software.

                                                                 In all cases values specified will appear in CUR_MUL after programming.

                                                                 This field is always set to [INIT_MUL] on a chip domain reset. */
        uint64_t reserved_31           : 1;
        uint64_t init_mul              : 7;  /**< [ 38: 32](R/W) Chip Reset Frequency Multiplier.  Value used to program the PLL on a chip domain
                                                                 reset.  Value is based on 50 MHz.

                                                                 This field is only reinitialized on a cold domain reset. */
        uint64_t reserved_39           : 1;
        uint64_t max_mul               : 7;  /**< [ 46: 40](R/W/H) Maximum PLL multiplier.
                                                                 This field is used to limit the [CUR_MUL] value.
                                                                 A value of zero is considered unlimited.  Once the value
                                                                 of this field is nonzero, any new values written into this field
                                                                 cannot exceed the previous value.  Values 1-5 are reserved
                                                                 since the minimum PLL frequency at least 300 MHz.

                                                                 This field is reinitialized on a chip domain reset. */
        uint64_t reserved_47           : 1;
        uint64_t cur_mul               : 7;  /**< [ 54: 48](RO/H) Current frequency multiplier.
                                                                 If Bypass Clock or [USE_MAN] is selected, calculations must be done by software.
                                                                 The value is limited by [MAX_MUL].

                                                                 Units are based on the PLL reference clock.
                                                                   With [ALT_REF] = 0, multiplier units are 50.00 MHz.
                                                                   With [ALT_REF] = 1, multiplier units are 30.76 MHz.

                                                                 The following values are possible:
                                                                   0 = Uninitialized or powered down PLL selected by [CUR_PLL_SEL].
                                                                   1 = Bypass clock selected.
                                                                   2 = Reference clock selected.
                                                                   3 = Runt clock selected.
                                                                   4-70 = Valid clock frequency when [ALT_REF] = 0.
                                                                   4-114 = Valid clock frequency when [ALT_REF] = 1.

                                                                 If NEXT_MAN is set, NEXT_NUL is used to set CUR_MUL but the actual frequency
                                                                 is calculated by:
                                                                         RST_MAN_PLL()[VCO_MUL] / (RST_MAN_PLL()[REF_DIV] * RST_MAN_PLL()[POST_DIV])

                                                                 This field is always set to the lower of [INIT_MUL] and the limit specified by
                                                                 [MAX_MUL] on a chip domain reset. */
        uint64_t reserved_55_56        : 2;
        uint64_t cur_pll_sel           : 3;  /**< [ 59: 57](RO/H) Current PLL selection.
                                                                 Enumerated by RST_PLL_SEL_E. */
        uint64_t reserved_60           : 1;
        uint64_t alt_ref               : 1;  /**< [ 61: 61](R/W/H) Alternate reference clock.
                                                                 0 = Use 100 MHz reference.  [CUR_MUL] and [NEXT_MUL] values are based on 50 MHz increments
                                                                 1 = Use 122.88 MHz alternate reference clock.  [CUR_MUL] and [NEXT_MUL] values are based on
                                                                     30.72 MHz increments.

                                                                 Changing this field typically required PLL programming. */
        uint64_t pll1_present          : 1;  /**< [ 62: 62](RO/H) PLL1 present.
                                                                 0 = PLL1 is unavailable.  Programming PLL1 will have not effect and
                                                                     switching to PLL1 will result in the clock being stopped.
                                                                 1 = PLL1 is available. */
        uint64_t aro_present           : 1;  /**< [ 63: 63](RO/H) Adaptive Ring Oscillator present.
                                                                 0 = ARO is unavailable.  Programming the ARO will have not effect and
                                                                     switching to ARO will result in the clock being stopped.
                                                                 1 = ARO is available. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_rst_pllx_s cn; */
};
typedef union cavm_rst_pllx cavm_rst_pllx_t;

static inline uint64_t CAVM_RST_PLLX(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_RST_PLLX(uint64_t a)
{
    if (a<=15)
        return 0x87e00a001000ll + 0x10ll * ((a) & 0xf);
    __cavm_csr_fatal("RST_PLLX", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_RST_PLLX(a) cavm_rst_pllx_t
#define bustype_CAVM_RST_PLLX(a) CSR_TYPE_RSL
#define basename_CAVM_RST_PLLX(a) "RST_PLLX"
#define device_bar_CAVM_RST_PLLX(a) 0x2 /* PF_BAR2 */
#define busnum_CAVM_RST_PLLX(a) (a)
#define arguments_CAVM_RST_PLLX(a) (a),-1,-1,-1

/**
 * Register (RSL) rst_pp_available
 *
 * RST Physical Core Availability Register
 * This register is not accessible through ROM scripts; see SCR_WRITE32_S[ADDR].
 */
union cavm_rst_pp_available
{
    uint64_t u;
    struct cavm_rst_pp_available_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t present               : 64; /**< [ 63:  0](RO) Each bit set indicates a core is present.  Available cores form a
                                                                 continious vector 0..N.  Note this is different from previous chip generations. */
#else /* Word 0 - Little Endian */
        uint64_t present               : 64; /**< [ 63:  0](RO) Each bit set indicates a core is present.  Available cores form a
                                                                 continious vector 0..N.  Note this is different from previous chip generations. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_rst_pp_available_s cn; */
};
typedef union cavm_rst_pp_available cavm_rst_pp_available_t;

#define CAVM_RST_PP_AVAILABLE CAVM_RST_PP_AVAILABLE_FUNC()
static inline uint64_t CAVM_RST_PP_AVAILABLE_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_RST_PP_AVAILABLE_FUNC(void)
{
    return 0x87e006001738ll;
}

#define typedef_CAVM_RST_PP_AVAILABLE cavm_rst_pp_available_t
#define bustype_CAVM_RST_PP_AVAILABLE CSR_TYPE_RSL
#define basename_CAVM_RST_PP_AVAILABLE "RST_PP_AVAILABLE"
#define device_bar_CAVM_RST_PP_AVAILABLE 0x0 /* PF_BAR0 */
#define busnum_CAVM_RST_PP_AVAILABLE 0
#define arguments_CAVM_RST_PP_AVAILABLE -1,-1,-1,-1

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
        uint64_t cnt                   : 64; /**< [ 63:  0](R/W/H) Reference count. [CNT] is incremented every 100 MHz reference clock.
                                                                 This field is always reinitialized on a cold domain reset. */
#else /* Word 0 - Little Endian */
        uint64_t cnt                   : 64; /**< [ 63:  0](R/W/H) Reference count. [CNT] is incremented every 100 MHz reference clock.
                                                                 This field is always reinitialized on a cold domain reset. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_rst_ref_cntr_s cn; */
};
typedef union cavm_rst_ref_cntr cavm_rst_ref_cntr_t;

#define CAVM_RST_REF_CNTR CAVM_RST_REF_CNTR_FUNC()
static inline uint64_t CAVM_RST_REF_CNTR_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_RST_REF_CNTR_FUNC(void)
{
    return 0x87e006001758ll;
}

#define typedef_CAVM_RST_REF_CNTR cavm_rst_ref_cntr_t
#define bustype_CAVM_RST_REF_CNTR CSR_TYPE_RSL
#define basename_CAVM_RST_REF_CNTR "RST_REF_CNTR"
#define device_bar_CAVM_RST_REF_CNTR 0x0 /* PF_BAR0 */
#define busnum_CAVM_RST_REF_CNTR 0
#define arguments_CAVM_RST_REF_CNTR -1,-1,-1,-1

/**
 * Register (RSL) rst_reset_active
 *
 * RST Domain Reset Active Status Register
 * This register is not accessible through ROM scripts; see SCR_WRITE32_S[ADDR].
 */
union cavm_rst_reset_active
{
    uint64_t u;
    struct cavm_rst_reset_active_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_6_63         : 58;
        uint64_t ecp                   : 1;  /**< [  5:  5](RO/H) ECP domain reset status.  When set, ECP domain is in reset. Default reset value
                                                                 is one after a chip reset. */
        uint64_t bphy                  : 1;  /**< [  4:  4](RO/H) Reserved.
                                                                 Internal:
                                                                 BPHY domain reset status.  When set, BPHY domain is in reset.
                                                                 Default reset value is one after a chip or core reset. */
        uint64_t scp                   : 1;  /**< [  3:  3](RO/H) SCP domain reset status.  When set, SCP domain is in reset.
                                                                 Default reset value is zero after a chip reset. */
        uint64_t mcp                   : 1;  /**< [  2:  2](RO/H) MCP domain reset status.  When set, MCP domain is in reset.
                                                                 Default reset value is one after a chip reset. */
        uint64_t core                  : 1;  /**< [  1:  1](RO/H) Core domain reset status.  When set, core domain is in reset.
                                                                 Default reset value is one after a chip reset. */
        uint64_t chip                  : 1;  /**< [  0:  0](RO/H) Chip domain reset status.  Always reads 0. */
#else /* Word 0 - Little Endian */
        uint64_t chip                  : 1;  /**< [  0:  0](RO/H) Chip domain reset status.  Always reads 0. */
        uint64_t core                  : 1;  /**< [  1:  1](RO/H) Core domain reset status.  When set, core domain is in reset.
                                                                 Default reset value is one after a chip reset. */
        uint64_t mcp                   : 1;  /**< [  2:  2](RO/H) MCP domain reset status.  When set, MCP domain is in reset.
                                                                 Default reset value is one after a chip reset. */
        uint64_t scp                   : 1;  /**< [  3:  3](RO/H) SCP domain reset status.  When set, SCP domain is in reset.
                                                                 Default reset value is zero after a chip reset. */
        uint64_t bphy                  : 1;  /**< [  4:  4](RO/H) Reserved.
                                                                 Internal:
                                                                 BPHY domain reset status.  When set, BPHY domain is in reset.
                                                                 Default reset value is one after a chip or core reset. */
        uint64_t ecp                   : 1;  /**< [  5:  5](RO/H) ECP domain reset status.  When set, ECP domain is in reset. Default reset value
                                                                 is one after a chip reset. */
        uint64_t reserved_6_63         : 58;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_rst_reset_active_s cn; */
};
typedef union cavm_rst_reset_active cavm_rst_reset_active_t;

#define CAVM_RST_RESET_ACTIVE CAVM_RST_RESET_ACTIVE_FUNC()
static inline uint64_t CAVM_RST_RESET_ACTIVE_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_RST_RESET_ACTIVE_FUNC(void)
{
    return 0x87e006001888ll;
}

#define typedef_CAVM_RST_RESET_ACTIVE cavm_rst_reset_active_t
#define bustype_CAVM_RST_RESET_ACTIVE CSR_TYPE_RSL
#define basename_CAVM_RST_RESET_ACTIVE "RST_RESET_ACTIVE"
#define device_bar_CAVM_RST_RESET_ACTIVE 0x0 /* PF_BAR0 */
#define busnum_CAVM_RST_RESET_ACTIVE 0
#define arguments_CAVM_RST_RESET_ACTIVE -1,-1,-1,-1

/**
 * Register (RSL) rst_scp_domain_w1c
 *
 * RST SCP Domain Soft Reset Clear Register
 * This register is not accessible through ROM scripts; see SCR_WRITE32_S[ADDR].
 */
union cavm_rst_scp_domain_w1c
{
    uint64_t u;
    struct cavm_rst_scp_domain_w1c_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_1_63         : 63;
        uint64_t soft_rst              : 1;  /**< [  0:  0](R/W1C/H) Clear software-initiated reset of the SCP processor and associated logic.
                                                                 When set to one, the soft reset of the SCP is removed.
                                                                 Reads of this register show the soft reset state.  Not the actual SCP domain reset.
                                                                 Other factors may keep the reset active, reading RST_RESET_ACTIVE[SCP] shows
                                                                 the actual reset state.  To compensate for delays in reset, this field should only
                                                                 be set if RST_RESET_ACTIVE[SCP] is set.
                                                                 This field is always reinitialized on a chip domain reset. */
#else /* Word 0 - Little Endian */
        uint64_t soft_rst              : 1;  /**< [  0:  0](R/W1C/H) Clear software-initiated reset of the SCP processor and associated logic.
                                                                 When set to one, the soft reset of the SCP is removed.
                                                                 Reads of this register show the soft reset state.  Not the actual SCP domain reset.
                                                                 Other factors may keep the reset active, reading RST_RESET_ACTIVE[SCP] shows
                                                                 the actual reset state.  To compensate for delays in reset, this field should only
                                                                 be set if RST_RESET_ACTIVE[SCP] is set.
                                                                 This field is always reinitialized on a chip domain reset. */
        uint64_t reserved_1_63         : 63;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_rst_scp_domain_w1c_s cn; */
};
typedef union cavm_rst_scp_domain_w1c cavm_rst_scp_domain_w1c_t;

#define CAVM_RST_SCP_DOMAIN_W1C CAVM_RST_SCP_DOMAIN_W1C_FUNC()
static inline uint64_t CAVM_RST_SCP_DOMAIN_W1C_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_RST_SCP_DOMAIN_W1C_FUNC(void)
{
    return 0x87e006001848ll;
}

#define typedef_CAVM_RST_SCP_DOMAIN_W1C cavm_rst_scp_domain_w1c_t
#define bustype_CAVM_RST_SCP_DOMAIN_W1C CSR_TYPE_RSL
#define basename_CAVM_RST_SCP_DOMAIN_W1C "RST_SCP_DOMAIN_W1C"
#define device_bar_CAVM_RST_SCP_DOMAIN_W1C 0x0 /* PF_BAR0 */
#define busnum_CAVM_RST_SCP_DOMAIN_W1C 0
#define arguments_CAVM_RST_SCP_DOMAIN_W1C -1,-1,-1,-1

/**
 * Register (RSL) rst_scp_domain_w1s
 *
 * RST SCP Domain Soft Reset Set Register
 * This register is not accessible through ROM scripts; see SCR_WRITE32_S[ADDR].
 */
union cavm_rst_scp_domain_w1s
{
    uint64_t u;
    struct cavm_rst_scp_domain_w1s_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_1_63         : 63;
        uint64_t soft_rst              : 1;  /**< [  0:  0](R/W1S/H) Set software-initiated reset of SCP core and associated logic.
                                                                 When set to one, all logic associated with the SCP domain is placed in reset.
                                                                 If RST_BOOT[RBOOT] is set, the SCP soft reset will stay asserted until
                                                                 RST_SCP_DOMAIN_W1C is written.  Otherwise it will automatically deassert.
                                                                 Reads of this register show the soft reset state.  Not the actual SCP domain reset.
                                                                 Other factors may keep the reset active, reading RST_RESET_ACTIVE[SCP] shows
                                                                 the actual reset state.
                                                                 This field is always reinitialized on a chip domain reset. */
#else /* Word 0 - Little Endian */
        uint64_t soft_rst              : 1;  /**< [  0:  0](R/W1S/H) Set software-initiated reset of SCP core and associated logic.
                                                                 When set to one, all logic associated with the SCP domain is placed in reset.
                                                                 If RST_BOOT[RBOOT] is set, the SCP soft reset will stay asserted until
                                                                 RST_SCP_DOMAIN_W1C is written.  Otherwise it will automatically deassert.
                                                                 Reads of this register show the soft reset state.  Not the actual SCP domain reset.
                                                                 Other factors may keep the reset active, reading RST_RESET_ACTIVE[SCP] shows
                                                                 the actual reset state.
                                                                 This field is always reinitialized on a chip domain reset. */
        uint64_t reserved_1_63         : 63;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_rst_scp_domain_w1s_s cn; */
};
typedef union cavm_rst_scp_domain_w1s cavm_rst_scp_domain_w1s_t;

#define CAVM_RST_SCP_DOMAIN_W1S CAVM_RST_SCP_DOMAIN_W1S_FUNC()
static inline uint64_t CAVM_RST_SCP_DOMAIN_W1S_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_RST_SCP_DOMAIN_W1S_FUNC(void)
{
    return 0x87e006001840ll;
}

#define typedef_CAVM_RST_SCP_DOMAIN_W1S cavm_rst_scp_domain_w1s_t
#define bustype_CAVM_RST_SCP_DOMAIN_W1S CSR_TYPE_RSL
#define basename_CAVM_RST_SCP_DOMAIN_W1S "RST_SCP_DOMAIN_W1S"
#define device_bar_CAVM_RST_SCP_DOMAIN_W1S 0x0 /* PF_BAR0 */
#define busnum_CAVM_RST_SCP_DOMAIN_W1S 0
#define arguments_CAVM_RST_SCP_DOMAIN_W1S -1,-1,-1,-1

/**
 * Register (RSL) rst_src_map
 *
 * RST Source Domain Map Register
 * This register is not accessible through ROM scripts; see SCR_WRITE32_S[ADDR].
 */
union cavm_rst_src_map
{
    uint64_t u;
    struct cavm_rst_src_map_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_11_63        : 53;
        uint64_t scp_to_mcp            : 1;  /**< [ 10: 10](R/W) SCP watchdog and pin resets mapped to MCP domain reset.
                                                                 0 = Mapping disabled.
                                                                 1 = SCP reset pin or the SCP watchdog will additionally
                                                                     cause an MCP domain reset.

                                                                 This field is always reinitialized on a cold domain reset. */
        uint64_t scp_to_core           : 1;  /**< [  9:  9](R/W) SCP watchdog and pin resets mapped to core domain reset.
                                                                 0 = Mapping disabled.
                                                                 1 = SCP reset pin or the SCP watchdog will additionally
                                                                     cause a core domain reset.

                                                                 This field is always reinitialized on a cold domain reset. */
        uint64_t scp_to_chip           : 1;  /**< [  8:  8](R/W) SCP watchdog and pin resets mapped to chip domain reset.
                                                                 0 = Mapping disabled.
                                                                 1 = SCP reset pin or the SCP watchdog will additionally
                                                                     cause a chip domain reset.

                                                                 This field is always reinitialized on a cold domain reset. */
        uint64_t mcp_to_scp            : 1;  /**< [  7:  7](R/W) MCP watchdog and pin resets mapped to SCP domain reset.
                                                                 0 = Mapping disabled.
                                                                 1 = MCP reset pin or the MCP watchdog will additionally
                                                                     cause an SCP domain reset.

                                                                 This field is always reinitialized on a cold domain reset. */
        uint64_t reserved_6            : 1;
        uint64_t mcp_to_core           : 1;  /**< [  5:  5](R/W) MCP watchdog and pin resets mapped to core domain reset.
                                                                 0 = Mapping disabled.
                                                                 1 = MCP reset pin or the MCP watchdog will additionally
                                                                     cause a core domain reset.

                                                                 This field is always reinitialized on a cold domain reset. */
        uint64_t mcp_to_chip           : 1;  /**< [  4:  4](R/W) MCP watchdog and pin resets mapped to chip domain reset.
                                                                 0 = Mapping disabled.
                                                                 1 = MCP reset pin or the MCP watchdog will additionally
                                                                     cause a chip domain reset.

                                                                 This field is always reinitialized on a cold domain reset. */
        uint64_t core_to_scp           : 1;  /**< [  3:  3](R/W) Core watchdog and pin resets mapped to SCP domain reset.
                                                                 0 = Mapping disabled.
                                                                 1 = Core reset pin or the AP watchdog will additionally
                                                                     cause an SCP domain reset.

                                                                 This field is always reinitialized on a cold domain reset. */
        uint64_t core_to_mcp           : 1;  /**< [  2:  2](R/W) Core watchdog and pin resets mapped to MCP domain reset.
                                                                 0 = Mapping disabled.
                                                                 1 = Core reset pin or the AP watchdog will additionally
                                                                     cause an MCP domain reset.

                                                                 This field is always reinitialized on a cold domain reset. */
        uint64_t reserved_1            : 1;
        uint64_t core_to_chip          : 1;  /**< [  0:  0](R/W) Core watchdog and pin resets mapped to chip domain reset.
                                                                 0 = Mapping disabled.
                                                                 1 = Core reset pin or the AP watchdog will additionally
                                                                     cause a chip domain reset.

                                                                 This field is always reinitialized on a cold domain reset. */
#else /* Word 0 - Little Endian */
        uint64_t core_to_chip          : 1;  /**< [  0:  0](R/W) Core watchdog and pin resets mapped to chip domain reset.
                                                                 0 = Mapping disabled.
                                                                 1 = Core reset pin or the AP watchdog will additionally
                                                                     cause a chip domain reset.

                                                                 This field is always reinitialized on a cold domain reset. */
        uint64_t reserved_1            : 1;
        uint64_t core_to_mcp           : 1;  /**< [  2:  2](R/W) Core watchdog and pin resets mapped to MCP domain reset.
                                                                 0 = Mapping disabled.
                                                                 1 = Core reset pin or the AP watchdog will additionally
                                                                     cause an MCP domain reset.

                                                                 This field is always reinitialized on a cold domain reset. */
        uint64_t core_to_scp           : 1;  /**< [  3:  3](R/W) Core watchdog and pin resets mapped to SCP domain reset.
                                                                 0 = Mapping disabled.
                                                                 1 = Core reset pin or the AP watchdog will additionally
                                                                     cause an SCP domain reset.

                                                                 This field is always reinitialized on a cold domain reset. */
        uint64_t mcp_to_chip           : 1;  /**< [  4:  4](R/W) MCP watchdog and pin resets mapped to chip domain reset.
                                                                 0 = Mapping disabled.
                                                                 1 = MCP reset pin or the MCP watchdog will additionally
                                                                     cause a chip domain reset.

                                                                 This field is always reinitialized on a cold domain reset. */
        uint64_t mcp_to_core           : 1;  /**< [  5:  5](R/W) MCP watchdog and pin resets mapped to core domain reset.
                                                                 0 = Mapping disabled.
                                                                 1 = MCP reset pin or the MCP watchdog will additionally
                                                                     cause a core domain reset.

                                                                 This field is always reinitialized on a cold domain reset. */
        uint64_t reserved_6            : 1;
        uint64_t mcp_to_scp            : 1;  /**< [  7:  7](R/W) MCP watchdog and pin resets mapped to SCP domain reset.
                                                                 0 = Mapping disabled.
                                                                 1 = MCP reset pin or the MCP watchdog will additionally
                                                                     cause an SCP domain reset.

                                                                 This field is always reinitialized on a cold domain reset. */
        uint64_t scp_to_chip           : 1;  /**< [  8:  8](R/W) SCP watchdog and pin resets mapped to chip domain reset.
                                                                 0 = Mapping disabled.
                                                                 1 = SCP reset pin or the SCP watchdog will additionally
                                                                     cause a chip domain reset.

                                                                 This field is always reinitialized on a cold domain reset. */
        uint64_t scp_to_core           : 1;  /**< [  9:  9](R/W) SCP watchdog and pin resets mapped to core domain reset.
                                                                 0 = Mapping disabled.
                                                                 1 = SCP reset pin or the SCP watchdog will additionally
                                                                     cause a core domain reset.

                                                                 This field is always reinitialized on a cold domain reset. */
        uint64_t scp_to_mcp            : 1;  /**< [ 10: 10](R/W) SCP watchdog and pin resets mapped to MCP domain reset.
                                                                 0 = Mapping disabled.
                                                                 1 = SCP reset pin or the SCP watchdog will additionally
                                                                     cause an MCP domain reset.

                                                                 This field is always reinitialized on a cold domain reset. */
        uint64_t reserved_11_63        : 53;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_rst_src_map_s cn; */
};
typedef union cavm_rst_src_map cavm_rst_src_map_t;

#define CAVM_RST_SRC_MAP CAVM_RST_SRC_MAP_FUNC()
static inline uint64_t CAVM_RST_SRC_MAP_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_RST_SRC_MAP_FUNC(void)
{
    return 0x87e006001898ll;
}

#define typedef_CAVM_RST_SRC_MAP cavm_rst_src_map_t
#define bustype_CAVM_RST_SRC_MAP CSR_TYPE_RSL
#define basename_CAVM_RST_SRC_MAP "RST_SRC_MAP"
#define device_bar_CAVM_RST_SRC_MAP 0x0 /* PF_BAR0 */
#define busnum_CAVM_RST_SRC_MAP 0
#define arguments_CAVM_RST_SRC_MAP -1,-1,-1,-1

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
        uint64_t data                  : 64; /**< [ 63:  0](R/W1S) Data register that can be set by software and is only cleared
                                                                 on initialization.
                                                                 This field is always reinitialized on a chip domain reset. */
#else /* Word 0 - Little Endian */
        uint64_t data                  : 64; /**< [ 63:  0](R/W1S) Data register that can be set by software and is only cleared
                                                                 on initialization.
                                                                 This field is always reinitialized on a chip domain reset. */
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
 * Register (RSL) rst_test_pll#
 *
 * RST Manual PLL Control Register
 * Internal:
 * These registers are used to test the PLL operation and allow the pll output
 * clock to be stopped or restarted during testing.  Writes to this register
 * cause an update cycle to be sent thru the pll_intf.  Indexed by RST_PLL_E.
 * These register is not accessible through ROM scripts; see SCR_WRITE32_S[ADDR].
 *
 * This register is always reset on a chip domain reset.
 */
union cavm_rst_test_pllx
{
    uint64_t u;
    struct cavm_rst_test_pllx_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_35_63        : 29;
        uint64_t testclk_pll1          : 1;  /**< [ 34: 34](R/W) Test Clock source selection.
                                                                   0 = TEST_CLKOUT Based on PLL0.
                                                                   1 = TEST_CLKOUT Based on PLL1. */
        uint64_t msc_enable            : 1;  /**< [ 33: 33](R/W/H) Enable diagnostic output.  Setting this bit causes the PLL to output
                                                                 to the common MSC_CLKOUT and MSC_LOCK ports.  No more than one
                                                                 [MSC_ENABLE] may be set at a time.

                                                                 This field is reinitialized on a cold domain reset. */
        uint64_t stop_clk              : 1;  /**< [ 32: 32](R/W/H) PLL output stop control.  When this is written to a 1 along with STOP_CNT\>0 this will
                                                                 start the counter at STOP_CNT and stop the output clock when the counter reaches zero.
                                                                 Writing this bit to a 0 will re-start the clock. Reading this value as a 1 along with
                                                                 STOP_CNT=0 indicates the clock has been stopped. */
        uint64_t stop_cnt              : 32; /**< [ 31:  0](R/W/H) Counter Delay to stop PLL output.  The counter decrements every PLL output clock. */
#else /* Word 0 - Little Endian */
        uint64_t stop_cnt              : 32; /**< [ 31:  0](R/W/H) Counter Delay to stop PLL output.  The counter decrements every PLL output clock. */
        uint64_t stop_clk              : 1;  /**< [ 32: 32](R/W/H) PLL output stop control.  When this is written to a 1 along with STOP_CNT\>0 this will
                                                                 start the counter at STOP_CNT and stop the output clock when the counter reaches zero.
                                                                 Writing this bit to a 0 will re-start the clock. Reading this value as a 1 along with
                                                                 STOP_CNT=0 indicates the clock has been stopped. */
        uint64_t msc_enable            : 1;  /**< [ 33: 33](R/W/H) Enable diagnostic output.  Setting this bit causes the PLL to output
                                                                 to the common MSC_CLKOUT and MSC_LOCK ports.  No more than one
                                                                 [MSC_ENABLE] may be set at a time.

                                                                 This field is reinitialized on a cold domain reset. */
        uint64_t testclk_pll1          : 1;  /**< [ 34: 34](R/W) Test Clock source selection.
                                                                   0 = TEST_CLKOUT Based on PLL0.
                                                                   1 = TEST_CLKOUT Based on PLL1. */
        uint64_t reserved_35_63        : 29;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_rst_test_pllx_s cn; */
};
typedef union cavm_rst_test_pllx cavm_rst_test_pllx_t;

static inline uint64_t CAVM_RST_TEST_PLLX(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_RST_TEST_PLLX(uint64_t a)
{
    if (a<=15)
        return 0x87e00a001200ll + 8ll * ((a) & 0xf);
    __cavm_csr_fatal("RST_TEST_PLLX", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_RST_TEST_PLLX(a) cavm_rst_test_pllx_t
#define bustype_CAVM_RST_TEST_PLLX(a) CSR_TYPE_RSL
#define basename_CAVM_RST_TEST_PLLX(a) "RST_TEST_PLLX"
#define device_bar_CAVM_RST_TEST_PLLX(a) 0x2 /* PF_BAR2 */
#define busnum_CAVM_RST_TEST_PLLX(a) (a)
#define arguments_CAVM_RST_TEST_PLLX(a) (a),-1,-1,-1

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
                                                                 This field is always reinitialized on a cold domain reset. */
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
                                                                 This field is always reinitialized on a cold domain reset. */
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
    return 0x87e006001690ll;
}

#define typedef_CAVM_RST_THERMAL_ALERT cavm_rst_thermal_alert_t
#define bustype_CAVM_RST_THERMAL_ALERT CSR_TYPE_RSL
#define basename_CAVM_RST_THERMAL_ALERT "RST_THERMAL_ALERT"
#define device_bar_CAVM_RST_THERMAL_ALERT 0x0 /* PF_BAR0 */
#define busnum_CAVM_RST_THERMAL_ALERT 0
#define arguments_CAVM_RST_THERMAL_ALERT -1,-1,-1,-1

#endif /* __CAVM_CSRS_RST_H__ */
