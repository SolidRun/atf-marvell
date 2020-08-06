#ifndef __CAVM_CSRS_EHSM_H__
#define __CAVM_CSRS_EHSM_H__
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
 * OcteonTX EHSM.
 *
 * This file is auto generated. Do not edit.
 *
 */

/**
 * Enumeration ehsm_bar_e
 *
 * EHSM Base Address Register Enumeration
 * Enumerates the base address registers.
 */
#define CAVM_EHSM_BAR_E_EHSM_PF_BAR0 (0x80b000000000ll)
#define CAVM_EHSM_BAR_E_EHSM_PF_BAR0_SIZE 0x100000ull
#define CAVM_EHSM_BAR_E_EHSM_PF_BAR4 (0x80b000100000ll)
#define CAVM_EHSM_BAR_E_EHSM_PF_BAR4_SIZE 0x100000ull

/**
 * Enumeration ehsm_int_vec_e
 *
 * EHSM MSI-X Vector Enumeration
 * Enumerates the MSI-X interrupt vectors.
 */
#define CAVM_EHSM_INT_VEC_E_EHSM_HST_INTX(a) (0 + (a))

/**
 * Register (NCB32b) ehsm_bcm_id
 *
 * BCM ID. Register
 * This is BCM ID. Each project is assigned with a unique BCM ID.
 */
union cavm_ehsm_bcm_id
{
    uint32_t u;
    struct cavm_ehsm_bcm_id_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t data                  : 32; /**< [ 31:  0](RO) x */
#else /* Word 0 - Little Endian */
        uint32_t data                  : 32; /**< [ 31:  0](RO) x */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_ehsm_bcm_id_s cn; */
};
typedef union cavm_ehsm_bcm_id cavm_ehsm_bcm_id_t;

#define CAVM_EHSM_BCM_ID CAVM_EHSM_BCM_ID_FUNC()
static inline uint64_t CAVM_EHSM_BCM_ID_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_EHSM_BCM_ID_FUNC(void)
{
    return 0x80b0000000d8ll;
}

#define typedef_CAVM_EHSM_BCM_ID cavm_ehsm_bcm_id_t
#define bustype_CAVM_EHSM_BCM_ID CSR_TYPE_NCB32b
#define basename_CAVM_EHSM_BCM_ID "EHSM_BCM_ID"
#define device_bar_CAVM_EHSM_BCM_ID 0x0 /* PF_BAR0 */
#define busnum_CAVM_EHSM_BCM_ID 0
#define arguments_CAVM_EHSM_BCM_ID -1,-1,-1,-1

/**
 * Register (NCB32b) ehsm_bcm_rev
 *
 * BCM Revision. Register
 * This is BCM revision. Current BCM revision is 01.00.00. The hex value is 32'h0001_0000
 */
union cavm_ehsm_bcm_rev
{
    uint32_t u;
    struct cavm_ehsm_bcm_rev_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t data                  : 32; /**< [ 31:  0](RO) x */
#else /* Word 0 - Little Endian */
        uint32_t data                  : 32; /**< [ 31:  0](RO) x */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_ehsm_bcm_rev_s cn; */
};
typedef union cavm_ehsm_bcm_rev cavm_ehsm_bcm_rev_t;

#define CAVM_EHSM_BCM_REV CAVM_EHSM_BCM_REV_FUNC()
static inline uint64_t CAVM_EHSM_BCM_REV_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_EHSM_BCM_REV_FUNC(void)
{
    return 0x80b0000000dcll;
}

#define typedef_CAVM_EHSM_BCM_REV cavm_ehsm_bcm_rev_t
#define bustype_CAVM_EHSM_BCM_REV CSR_TYPE_NCB32b
#define basename_CAVM_EHSM_BCM_REV "EHSM_BCM_REV"
#define device_bar_CAVM_EHSM_BCM_REV 0x0 /* PF_BAR0 */
#define busnum_CAVM_EHSM_BCM_REV 0
#define arguments_CAVM_EHSM_BCM_REV -1,-1,-1,-1

/**
 * Register (NCB32b) ehsm_boot_strap_pin_status
 *
 * Boot Strap Pin Status Register. Register
 * This is for BCM-78
 */
union cavm_ehsm_boot_strap_pin_status
{
    uint32_t u;
    struct cavm_ehsm_boot_strap_pin_status_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t disable_boot_strap31  : 1;  /**< [ 31: 31](RO) This is the shadow register for disable_boot_strap31 field from OTP. */
        uint32_t disable_boot_strap30  : 1;  /**< [ 30: 30](RO) This is the shadow register for disable_boot_strap30 field from OTP. */
        uint32_t disable_boot_strap29  : 1;  /**< [ 29: 29](RO) This is the shadow register for disable_boot_strap29 field from OTP. */
        uint32_t disable_boot_strap28  : 1;  /**< [ 28: 28](RO) This is the shadow register for disable_boot_strap28 field from OTP. */
        uint32_t disable_boot_strap27  : 1;  /**< [ 27: 27](RO) This is the shadow register for disable_boot_strap27 field from OTP. */
        uint32_t disable_boot_strap26  : 1;  /**< [ 26: 26](RO) This is the shadow register for disable_boot_strap26 field from OTP. */
        uint32_t disable_boot_strap25  : 1;  /**< [ 25: 25](RO) This is the shadow register for disable_boot_strap25 field from OTP. */
        uint32_t disable_boot_strap24  : 1;  /**< [ 24: 24](RO) This is the shadow register for disable_boot_strap24 field from OTP. */
        uint32_t disable_boot_strap23  : 1;  /**< [ 23: 23](RO) This is the shadow register for disable_boot_strap23 field from OTP. */
        uint32_t disable_boot_strap22  : 1;  /**< [ 22: 22](RO) This is the shadow register for disable_boot_strap22 field from OTP. */
        uint32_t disable_boot_strap21  : 1;  /**< [ 21: 21](RO) This is the shadow register for disable_boot_strap21 field from OTP. */
        uint32_t disable_boot_strap20  : 1;  /**< [ 20: 20](RO) This is the shadow register for disable_boot_strap20 field from OTP. */
        uint32_t disable_boot_strap19  : 1;  /**< [ 19: 19](RO) This is the shadow register for disable_boot_strap19 field from OTP. */
        uint32_t disable_boot_strap18  : 1;  /**< [ 18: 18](RO) This is the shadow register for disable_boot_strap18 field from OTP. */
        uint32_t disable_boot_strap17  : 1;  /**< [ 17: 17](RO) This is the shadow register for disable_boot_strap17 field from OTP. */
        uint32_t disable_boot_strap16  : 1;  /**< [ 16: 16](RO) This is the shadow register for disable_boot_strap16 field from OTP. */
        uint32_t disable_boot_strap15  : 1;  /**< [ 15: 15](RO) This is the shadow register for disable_boot_strap15 field from OTP. */
        uint32_t disable_boot_strap14  : 1;  /**< [ 14: 14](RO) This is the shadow register for disable_boot_strap14 field from OTP. */
        uint32_t disable_boot_strap13  : 1;  /**< [ 13: 13](RO) This is the shadow register for disable_boot_strap13 field from OTP. */
        uint32_t disable_boot_strap12  : 1;  /**< [ 12: 12](RO) This is the shadow register for disable_boot_strap12 field from OTP. */
        uint32_t disable_boot_strap11  : 1;  /**< [ 11: 11](RO) This is the shadow register for disable_boot_strap11 field from OTP. */
        uint32_t disable_boot_strap10  : 1;  /**< [ 10: 10](RO) This is the shadow register for disable_boot_strap10 field from OTP. */
        uint32_t disable_boot_strap9   : 1;  /**< [  9:  9](RO) This is the shadow register for disable_boot_strap9 field from OTP. */
        uint32_t disable_boot_strap8   : 1;  /**< [  8:  8](RO) This is the shadow register for disable_boot_strap8 field from OTP. */
        uint32_t disable_boot_strap7   : 1;  /**< [  7:  7](RO) This is the shadow register for disable_boot_strap7 field from OTP. */
        uint32_t disable_boot_strap6   : 1;  /**< [  6:  6](RO) This is the shadow register for disable_boot_strap6 field from OTP. */
        uint32_t disable_boot_strap5   : 1;  /**< [  5:  5](RO) This is the shadow register for disable_boot_strap5 field from OTP. */
        uint32_t disable_boot_strap4   : 1;  /**< [  4:  4](RO) This is the shadow register for disable_boot_strap4 field from OTP. */
        uint32_t disable_boot_strap3   : 1;  /**< [  3:  3](RO) This is the shadow register for disable_boot_strap3 field from OTP. */
        uint32_t disable_boot_strap2   : 1;  /**< [  2:  2](RO) This is the shadow register for disable_boot_strap2 field from OTP. */
        uint32_t disable_boot_strap1   : 1;  /**< [  1:  1](RO) This is the shadow register for disable_boot_strap1 field from OTP. */
        uint32_t disable_boot_strap0   : 1;  /**< [  0:  0](RO) This is the shadow register for disable_boot_strap0 field from OTP. */
#else /* Word 0 - Little Endian */
        uint32_t disable_boot_strap0   : 1;  /**< [  0:  0](RO) This is the shadow register for disable_boot_strap0 field from OTP. */
        uint32_t disable_boot_strap1   : 1;  /**< [  1:  1](RO) This is the shadow register for disable_boot_strap1 field from OTP. */
        uint32_t disable_boot_strap2   : 1;  /**< [  2:  2](RO) This is the shadow register for disable_boot_strap2 field from OTP. */
        uint32_t disable_boot_strap3   : 1;  /**< [  3:  3](RO) This is the shadow register for disable_boot_strap3 field from OTP. */
        uint32_t disable_boot_strap4   : 1;  /**< [  4:  4](RO) This is the shadow register for disable_boot_strap4 field from OTP. */
        uint32_t disable_boot_strap5   : 1;  /**< [  5:  5](RO) This is the shadow register for disable_boot_strap5 field from OTP. */
        uint32_t disable_boot_strap6   : 1;  /**< [  6:  6](RO) This is the shadow register for disable_boot_strap6 field from OTP. */
        uint32_t disable_boot_strap7   : 1;  /**< [  7:  7](RO) This is the shadow register for disable_boot_strap7 field from OTP. */
        uint32_t disable_boot_strap8   : 1;  /**< [  8:  8](RO) This is the shadow register for disable_boot_strap8 field from OTP. */
        uint32_t disable_boot_strap9   : 1;  /**< [  9:  9](RO) This is the shadow register for disable_boot_strap9 field from OTP. */
        uint32_t disable_boot_strap10  : 1;  /**< [ 10: 10](RO) This is the shadow register for disable_boot_strap10 field from OTP. */
        uint32_t disable_boot_strap11  : 1;  /**< [ 11: 11](RO) This is the shadow register for disable_boot_strap11 field from OTP. */
        uint32_t disable_boot_strap12  : 1;  /**< [ 12: 12](RO) This is the shadow register for disable_boot_strap12 field from OTP. */
        uint32_t disable_boot_strap13  : 1;  /**< [ 13: 13](RO) This is the shadow register for disable_boot_strap13 field from OTP. */
        uint32_t disable_boot_strap14  : 1;  /**< [ 14: 14](RO) This is the shadow register for disable_boot_strap14 field from OTP. */
        uint32_t disable_boot_strap15  : 1;  /**< [ 15: 15](RO) This is the shadow register for disable_boot_strap15 field from OTP. */
        uint32_t disable_boot_strap16  : 1;  /**< [ 16: 16](RO) This is the shadow register for disable_boot_strap16 field from OTP. */
        uint32_t disable_boot_strap17  : 1;  /**< [ 17: 17](RO) This is the shadow register for disable_boot_strap17 field from OTP. */
        uint32_t disable_boot_strap18  : 1;  /**< [ 18: 18](RO) This is the shadow register for disable_boot_strap18 field from OTP. */
        uint32_t disable_boot_strap19  : 1;  /**< [ 19: 19](RO) This is the shadow register for disable_boot_strap19 field from OTP. */
        uint32_t disable_boot_strap20  : 1;  /**< [ 20: 20](RO) This is the shadow register for disable_boot_strap20 field from OTP. */
        uint32_t disable_boot_strap21  : 1;  /**< [ 21: 21](RO) This is the shadow register for disable_boot_strap21 field from OTP. */
        uint32_t disable_boot_strap22  : 1;  /**< [ 22: 22](RO) This is the shadow register for disable_boot_strap22 field from OTP. */
        uint32_t disable_boot_strap23  : 1;  /**< [ 23: 23](RO) This is the shadow register for disable_boot_strap23 field from OTP. */
        uint32_t disable_boot_strap24  : 1;  /**< [ 24: 24](RO) This is the shadow register for disable_boot_strap24 field from OTP. */
        uint32_t disable_boot_strap25  : 1;  /**< [ 25: 25](RO) This is the shadow register for disable_boot_strap25 field from OTP. */
        uint32_t disable_boot_strap26  : 1;  /**< [ 26: 26](RO) This is the shadow register for disable_boot_strap26 field from OTP. */
        uint32_t disable_boot_strap27  : 1;  /**< [ 27: 27](RO) This is the shadow register for disable_boot_strap27 field from OTP. */
        uint32_t disable_boot_strap28  : 1;  /**< [ 28: 28](RO) This is the shadow register for disable_boot_strap28 field from OTP. */
        uint32_t disable_boot_strap29  : 1;  /**< [ 29: 29](RO) This is the shadow register for disable_boot_strap29 field from OTP. */
        uint32_t disable_boot_strap30  : 1;  /**< [ 30: 30](RO) This is the shadow register for disable_boot_strap30 field from OTP. */
        uint32_t disable_boot_strap31  : 1;  /**< [ 31: 31](RO) This is the shadow register for disable_boot_strap31 field from OTP. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_ehsm_boot_strap_pin_status_s cn; */
};
typedef union cavm_ehsm_boot_strap_pin_status cavm_ehsm_boot_strap_pin_status_t;

#define CAVM_EHSM_BOOT_STRAP_PIN_STATUS CAVM_EHSM_BOOT_STRAP_PIN_STATUS_FUNC()
static inline uint64_t CAVM_EHSM_BOOT_STRAP_PIN_STATUS_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_EHSM_BOOT_STRAP_PIN_STATUS_FUNC(void)
{
    return 0x80b000000128ll;
}

#define typedef_CAVM_EHSM_BOOT_STRAP_PIN_STATUS cavm_ehsm_boot_strap_pin_status_t
#define bustype_CAVM_EHSM_BOOT_STRAP_PIN_STATUS CSR_TYPE_NCB32b
#define basename_CAVM_EHSM_BOOT_STRAP_PIN_STATUS "EHSM_BOOT_STRAP_PIN_STATUS"
#define device_bar_CAVM_EHSM_BOOT_STRAP_PIN_STATUS 0x0 /* PF_BAR0 */
#define busnum_CAVM_EHSM_BOOT_STRAP_PIN_STATUS 0
#define arguments_CAVM_EHSM_BOOT_STRAP_PIN_STATUS -1,-1,-1,-1

/**
 * Register (NCB32b) ehsm_bootrom_config_status
 *
 * BootROM Configuration Status Register. Register
 * This is for BCM-78
 */
union cavm_ehsm_bootrom_config_status
{
    uint32_t u;
    struct cavm_ehsm_bootrom_config_status_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t reserved_31           : 1;
        uint32_t bootrom_reserved_parameter : 12;/**< [ 30: 19](RO) This is the shadow register for bootrom_reserved_parameter field from OTP. */
        uint32_t dice_scheme_id        : 3;  /**< [ 18: 16](RO) This is the shadow register for dice_scheme_id field from OTP. */
        uint32_t aes_scheme_id         : 5;  /**< [ 15: 11](RO) This is the shadow register for aes_scheme_id field from OTP. */
        uint32_t dsa_scheme_id         : 5;  /**< [ 10:  6](RO) This is the shadow register for dsa_scheme_id field from OTP. */
        uint32_t measured_boot_lock    : 1;  /**< [  5:  5](RO) This is the shadow register for measured_boot_lock field from OTP. */
        uint32_t encrypted_boot_lock   : 1;  /**< [  4:  4](RO) This is the shadow register for encrypted_boot_lock field from OTP. */
        uint32_t secure_boot_lock      : 1;  /**< [  3:  3](RO) This is the shadow register for secure_boot_lock field from OTP. */
        uint32_t measured_boot         : 1;  /**< [  2:  2](RO) This is the shadow register for measured_boot field from OTP. */
        uint32_t encrypted_boot        : 1;  /**< [  1:  1](RO) This is the shadow register for encrypted_boot field from OTP. */
        uint32_t secure_boot           : 1;  /**< [  0:  0](RO) This is the shadow register for secure_boot field from OTP. */
#else /* Word 0 - Little Endian */
        uint32_t secure_boot           : 1;  /**< [  0:  0](RO) This is the shadow register for secure_boot field from OTP. */
        uint32_t encrypted_boot        : 1;  /**< [  1:  1](RO) This is the shadow register for encrypted_boot field from OTP. */
        uint32_t measured_boot         : 1;  /**< [  2:  2](RO) This is the shadow register for measured_boot field from OTP. */
        uint32_t secure_boot_lock      : 1;  /**< [  3:  3](RO) This is the shadow register for secure_boot_lock field from OTP. */
        uint32_t encrypted_boot_lock   : 1;  /**< [  4:  4](RO) This is the shadow register for encrypted_boot_lock field from OTP. */
        uint32_t measured_boot_lock    : 1;  /**< [  5:  5](RO) This is the shadow register for measured_boot_lock field from OTP. */
        uint32_t dsa_scheme_id         : 5;  /**< [ 10:  6](RO) This is the shadow register for dsa_scheme_id field from OTP. */
        uint32_t aes_scheme_id         : 5;  /**< [ 15: 11](RO) This is the shadow register for aes_scheme_id field from OTP. */
        uint32_t dice_scheme_id        : 3;  /**< [ 18: 16](RO) This is the shadow register for dice_scheme_id field from OTP. */
        uint32_t bootrom_reserved_parameter : 12;/**< [ 30: 19](RO) This is the shadow register for bootrom_reserved_parameter field from OTP. */
        uint32_t reserved_31           : 1;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_ehsm_bootrom_config_status_s cn; */
};
typedef union cavm_ehsm_bootrom_config_status cavm_ehsm_bootrom_config_status_t;

#define CAVM_EHSM_BOOTROM_CONFIG_STATUS CAVM_EHSM_BOOTROM_CONFIG_STATUS_FUNC()
static inline uint64_t CAVM_EHSM_BOOTROM_CONFIG_STATUS_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_EHSM_BOOTROM_CONFIG_STATUS_FUNC(void)
{
    return 0x80b000000118ll;
}

#define typedef_CAVM_EHSM_BOOTROM_CONFIG_STATUS cavm_ehsm_bootrom_config_status_t
#define bustype_CAVM_EHSM_BOOTROM_CONFIG_STATUS CSR_TYPE_NCB32b
#define basename_CAVM_EHSM_BOOTROM_CONFIG_STATUS "EHSM_BOOTROM_CONFIG_STATUS"
#define device_bar_CAVM_EHSM_BOOTROM_CONFIG_STATUS 0x0 /* PF_BAR0 */
#define busnum_CAVM_EHSM_BOOTROM_CONFIG_STATUS 0
#define arguments_CAVM_EHSM_BOOTROM_CONFIG_STATUS -1,-1,-1,-1

/**
 * Register (NCB32b) ehsm_chain_of_trust_status
 *
 * Chain of Trust Setup Status Register. Register
 * This reigster is for IROM to program runtime trust status bits.
 */
union cavm_ehsm_chain_of_trust_status
{
    uint32_t u;
    struct cavm_ehsm_chain_of_trust_status_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t data                  : 32; /**< [ 31:  0](R/W) x */
#else /* Word 0 - Little Endian */
        uint32_t data                  : 32; /**< [ 31:  0](R/W) x */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_ehsm_chain_of_trust_status_s cn; */
};
typedef union cavm_ehsm_chain_of_trust_status cavm_ehsm_chain_of_trust_status_t;

#define CAVM_EHSM_CHAIN_OF_TRUST_STATUS CAVM_EHSM_CHAIN_OF_TRUST_STATUS_FUNC()
static inline uint64_t CAVM_EHSM_CHAIN_OF_TRUST_STATUS_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_EHSM_CHAIN_OF_TRUST_STATUS_FUNC(void)
{
    return 0x80b000000130ll;
}

#define typedef_CAVM_EHSM_CHAIN_OF_TRUST_STATUS cavm_ehsm_chain_of_trust_status_t
#define bustype_CAVM_EHSM_CHAIN_OF_TRUST_STATUS CSR_TYPE_NCB32b
#define basename_CAVM_EHSM_CHAIN_OF_TRUST_STATUS "EHSM_CHAIN_OF_TRUST_STATUS"
#define device_bar_CAVM_EHSM_CHAIN_OF_TRUST_STATUS 0x0 /* PF_BAR0 */
#define busnum_CAVM_EHSM_CHAIN_OF_TRUST_STATUS 0
#define arguments_CAVM_EHSM_CHAIN_OF_TRUST_STATUS -1,-1,-1,-1

/**
 * Register (NCB32b) ehsm_cmd_fifo_status
 *
 * Command Fifo Status. Register
 * x
 */
union cavm_ehsm_cmd_fifo_status
{
    uint32_t u;
    struct cavm_ehsm_cmd_fifo_status_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t reserved_17_31        : 15;
        uint32_t cmd_exe_core_id       : 1;  /**< [ 16: 16](RO) This bit indicate whether the command being executed is from host processor core 1 or core 2 */
        uint32_t cmd_status            : 8;  /**< [ 15:  8](RO) x */
        uint32_t core2_cmd_status_read_done : 1;/**< [  7:  7](RO) This bit indicates host processor core 2 has read back all CMD status for the
                                                                 last CMD from host processor core 2. CM3 can safely overwrite the CORE2 CMD
                                                                 status registers for current CMD from host processor core 2. */
        uint32_t core1_cmd_status_read_done : 1;/**< [  6:  6](RO) This bit indicates host processor core 1 has read back all CMD status for the
                                                                 last CMD from host processor core 1. CM3 can safely overwrite the CORE1 CMD
                                                                 status registers for current CMD from host processor core 1. */
        uint32_t core2_cmd_buffer_full : 1;  /**< [  5:  5](RO) This bit indicate command buffer for host processor core 2 is full. Host
                                                                 processor core 2 should wait for this bit to become 0 before sending new command
                                                                 primitive. */
        uint32_t core1_cmd_buffer_full : 1;  /**< [  4:  4](RO) This bit indicate command buffer for host processor core 1 is full. Host
                                                                 processor core 1 should wait for this bit to become 0 before sending new command
                                                                 primitive. */
        uint32_t cmd_cntr              : 4;  /**< [  3:  0](RO) x */
#else /* Word 0 - Little Endian */
        uint32_t cmd_cntr              : 4;  /**< [  3:  0](RO) x */
        uint32_t core1_cmd_buffer_full : 1;  /**< [  4:  4](RO) This bit indicate command buffer for host processor core 1 is full. Host
                                                                 processor core 1 should wait for this bit to become 0 before sending new command
                                                                 primitive. */
        uint32_t core2_cmd_buffer_full : 1;  /**< [  5:  5](RO) This bit indicate command buffer for host processor core 2 is full. Host
                                                                 processor core 2 should wait for this bit to become 0 before sending new command
                                                                 primitive. */
        uint32_t core1_cmd_status_read_done : 1;/**< [  6:  6](RO) This bit indicates host processor core 1 has read back all CMD status for the
                                                                 last CMD from host processor core 1. CM3 can safely overwrite the CORE1 CMD
                                                                 status registers for current CMD from host processor core 1. */
        uint32_t core2_cmd_status_read_done : 1;/**< [  7:  7](RO) This bit indicates host processor core 2 has read back all CMD status for the
                                                                 last CMD from host processor core 2. CM3 can safely overwrite the CORE2 CMD
                                                                 status registers for current CMD from host processor core 2. */
        uint32_t cmd_status            : 8;  /**< [ 15:  8](RO) x */
        uint32_t cmd_exe_core_id       : 1;  /**< [ 16: 16](RO) This bit indicate whether the command being executed is from host processor core 1 or core 2 */
        uint32_t reserved_17_31        : 15;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_ehsm_cmd_fifo_status_s cn; */
};
typedef union cavm_ehsm_cmd_fifo_status cavm_ehsm_cmd_fifo_status_t;

#define CAVM_EHSM_CMD_FIFO_STATUS CAVM_EHSM_CMD_FIFO_STATUS_FUNC()
static inline uint64_t CAVM_EHSM_CMD_FIFO_STATUS_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_EHSM_CMD_FIFO_STATUS_FUNC(void)
{
    return 0x80b0000000c4ll;
}

#define typedef_CAVM_EHSM_CMD_FIFO_STATUS cavm_ehsm_cmd_fifo_status_t
#define bustype_CAVM_EHSM_CMD_FIFO_STATUS CSR_TYPE_NCB32b
#define basename_CAVM_EHSM_CMD_FIFO_STATUS "EHSM_CMD_FIFO_STATUS"
#define device_bar_CAVM_EHSM_CMD_FIFO_STATUS 0x0 /* PF_BAR0 */
#define busnum_CAVM_EHSM_CMD_FIFO_STATUS 0
#define arguments_CAVM_EHSM_CMD_FIFO_STATUS -1,-1,-1,-1

/**
 * Register (NCB32b) ehsm_context_status
 *
 * Context Status. Register
 * x
 */
union cavm_ehsm_context_status
{
    uint32_t u;
    struct cavm_ehsm_context_status_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t context_status        : 32; /**< [ 31:  0](RO) x */
#else /* Word 0 - Little Endian */
        uint32_t context_status        : 32; /**< [ 31:  0](RO) x */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_ehsm_context_status_s cn; */
};
typedef union cavm_ehsm_context_status cavm_ehsm_context_status_t;

#define CAVM_EHSM_CONTEXT_STATUS CAVM_EHSM_CONTEXT_STATUS_FUNC()
static inline uint64_t CAVM_EHSM_CONTEXT_STATUS_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_EHSM_CONTEXT_STATUS_FUNC(void)
{
    return 0x80b0000000e0ll;
}

#define typedef_CAVM_EHSM_CONTEXT_STATUS cavm_ehsm_context_status_t
#define bustype_CAVM_EHSM_CONTEXT_STATUS CSR_TYPE_NCB32b
#define basename_CAVM_EHSM_CONTEXT_STATUS "EHSM_CONTEXT_STATUS"
#define device_bar_CAVM_EHSM_CONTEXT_STATUS 0x0 /* PF_BAR0 */
#define busnum_CAVM_EHSM_CONTEXT_STATUS 0
#define arguments_CAVM_EHSM_CONTEXT_STATUS -1,-1,-1,-1

/**
 * Register (NCB32b) ehsm_core1_cmd
 *
 * CORE 1 Secure Processor Command. Register
 * x
 */
union cavm_ehsm_core1_cmd
{
    uint32_t u;
    struct cavm_ehsm_core1_cmd_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t reserved_16_31        : 16;
        uint32_t cmd                   : 16; /**< [ 15:  0](WO) This is the CMD ID value of the primitive command from host processor core 1. */
#else /* Word 0 - Little Endian */
        uint32_t cmd                   : 16; /**< [ 15:  0](WO) This is the CMD ID value of the primitive command from host processor core 1. */
        uint32_t reserved_16_31        : 16;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_ehsm_core1_cmd_s cn; */
};
typedef union cavm_ehsm_core1_cmd cavm_ehsm_core1_cmd_t;

#define CAVM_EHSM_CORE1_CMD CAVM_EHSM_CORE1_CMD_FUNC()
static inline uint64_t CAVM_EHSM_CORE1_CMD_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_EHSM_CORE1_CMD_FUNC(void)
{
    return 0x80b000000040ll;
}

#define typedef_CAVM_EHSM_CORE1_CMD cavm_ehsm_core1_cmd_t
#define bustype_CAVM_EHSM_CORE1_CMD CSR_TYPE_NCB32b
#define basename_CAVM_EHSM_CORE1_CMD "EHSM_CORE1_CMD"
#define device_bar_CAVM_EHSM_CORE1_CMD 0x0 /* PF_BAR0 */
#define busnum_CAVM_EHSM_CORE1_CMD 0
#define arguments_CAVM_EHSM_CORE1_CMD -1,-1,-1,-1

/**
 * Register (NCB32b) ehsm_core1_cmd_param0
 *
 * CORE 1 Command Parameter 0. Register
 * This register contains parameter 0 associated with a BCM primitive command from host
 * processor core 1. There are a total of 16 spaces for primitive command parameters.
 * When the host processor core 1 wants to send a primitive command to BCM, it must
 * first write all the associated parameters (if any). The host parameter writing must
 * start at CORE1_CMD_PARAM0, and then work towards CORE1_CMD_PARAM15. Once all the
 * parameters associated with a primitive command have been written, the host can write
 * the associated primitive command to the CORE1_CMD register. There is no need to
 * write to all 16 parameter spaces, only the number associated with the primitive
 * command need to be written.
 */
union cavm_ehsm_core1_cmd_param0
{
    uint32_t u;
    struct cavm_ehsm_core1_cmd_param0_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t data                  : 32; /**< [ 31:  0](WO) x */
#else /* Word 0 - Little Endian */
        uint32_t data                  : 32; /**< [ 31:  0](WO) x */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_ehsm_core1_cmd_param0_s cn; */
};
typedef union cavm_ehsm_core1_cmd_param0 cavm_ehsm_core1_cmd_param0_t;

#define CAVM_EHSM_CORE1_CMD_PARAM0 CAVM_EHSM_CORE1_CMD_PARAM0_FUNC()
static inline uint64_t CAVM_EHSM_CORE1_CMD_PARAM0_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_EHSM_CORE1_CMD_PARAM0_FUNC(void)
{
    return 0x80b000000000ll;
}

#define typedef_CAVM_EHSM_CORE1_CMD_PARAM0 cavm_ehsm_core1_cmd_param0_t
#define bustype_CAVM_EHSM_CORE1_CMD_PARAM0 CSR_TYPE_NCB32b
#define basename_CAVM_EHSM_CORE1_CMD_PARAM0 "EHSM_CORE1_CMD_PARAM0"
#define device_bar_CAVM_EHSM_CORE1_CMD_PARAM0 0x0 /* PF_BAR0 */
#define busnum_CAVM_EHSM_CORE1_CMD_PARAM0 0
#define arguments_CAVM_EHSM_CORE1_CMD_PARAM0 -1,-1,-1,-1

/**
 * Register (NCB32b) ehsm_core1_cmd_param1
 *
 * CORE 1 Command Parameter 1. Register
 * This register contains parameter 1 associated with a BCM primitive command from host
 * processor core 1.
 */
union cavm_ehsm_core1_cmd_param1
{
    uint32_t u;
    struct cavm_ehsm_core1_cmd_param1_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t data                  : 32; /**< [ 31:  0](WO) x */
#else /* Word 0 - Little Endian */
        uint32_t data                  : 32; /**< [ 31:  0](WO) x */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_ehsm_core1_cmd_param1_s cn; */
};
typedef union cavm_ehsm_core1_cmd_param1 cavm_ehsm_core1_cmd_param1_t;

#define CAVM_EHSM_CORE1_CMD_PARAM1 CAVM_EHSM_CORE1_CMD_PARAM1_FUNC()
static inline uint64_t CAVM_EHSM_CORE1_CMD_PARAM1_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_EHSM_CORE1_CMD_PARAM1_FUNC(void)
{
    return 0x80b000000004ll;
}

#define typedef_CAVM_EHSM_CORE1_CMD_PARAM1 cavm_ehsm_core1_cmd_param1_t
#define bustype_CAVM_EHSM_CORE1_CMD_PARAM1 CSR_TYPE_NCB32b
#define basename_CAVM_EHSM_CORE1_CMD_PARAM1 "EHSM_CORE1_CMD_PARAM1"
#define device_bar_CAVM_EHSM_CORE1_CMD_PARAM1 0x0 /* PF_BAR0 */
#define busnum_CAVM_EHSM_CORE1_CMD_PARAM1 0
#define arguments_CAVM_EHSM_CORE1_CMD_PARAM1 -1,-1,-1,-1

/**
 * Register (NCB32b) ehsm_core1_cmd_param10
 *
 * CORE 1 Command Parameter 10. Register
 * This register contains parameter 10 associated with a BCM primitive command from
 * host processor core 1.
 */
union cavm_ehsm_core1_cmd_param10
{
    uint32_t u;
    struct cavm_ehsm_core1_cmd_param10_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t data                  : 32; /**< [ 31:  0](WO) x */
#else /* Word 0 - Little Endian */
        uint32_t data                  : 32; /**< [ 31:  0](WO) x */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_ehsm_core1_cmd_param10_s cn; */
};
typedef union cavm_ehsm_core1_cmd_param10 cavm_ehsm_core1_cmd_param10_t;

#define CAVM_EHSM_CORE1_CMD_PARAM10 CAVM_EHSM_CORE1_CMD_PARAM10_FUNC()
static inline uint64_t CAVM_EHSM_CORE1_CMD_PARAM10_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_EHSM_CORE1_CMD_PARAM10_FUNC(void)
{
    return 0x80b000000028ll;
}

#define typedef_CAVM_EHSM_CORE1_CMD_PARAM10 cavm_ehsm_core1_cmd_param10_t
#define bustype_CAVM_EHSM_CORE1_CMD_PARAM10 CSR_TYPE_NCB32b
#define basename_CAVM_EHSM_CORE1_CMD_PARAM10 "EHSM_CORE1_CMD_PARAM10"
#define device_bar_CAVM_EHSM_CORE1_CMD_PARAM10 0x0 /* PF_BAR0 */
#define busnum_CAVM_EHSM_CORE1_CMD_PARAM10 0
#define arguments_CAVM_EHSM_CORE1_CMD_PARAM10 -1,-1,-1,-1

/**
 * Register (NCB32b) ehsm_core1_cmd_param11
 *
 * CORE 1 Command Parameter 11. Register
 * This register contains parameter 11 associated with a BCM primitive command from
 * host processor core 1.
 */
union cavm_ehsm_core1_cmd_param11
{
    uint32_t u;
    struct cavm_ehsm_core1_cmd_param11_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t data                  : 32; /**< [ 31:  0](WO) x */
#else /* Word 0 - Little Endian */
        uint32_t data                  : 32; /**< [ 31:  0](WO) x */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_ehsm_core1_cmd_param11_s cn; */
};
typedef union cavm_ehsm_core1_cmd_param11 cavm_ehsm_core1_cmd_param11_t;

#define CAVM_EHSM_CORE1_CMD_PARAM11 CAVM_EHSM_CORE1_CMD_PARAM11_FUNC()
static inline uint64_t CAVM_EHSM_CORE1_CMD_PARAM11_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_EHSM_CORE1_CMD_PARAM11_FUNC(void)
{
    return 0x80b00000002cll;
}

#define typedef_CAVM_EHSM_CORE1_CMD_PARAM11 cavm_ehsm_core1_cmd_param11_t
#define bustype_CAVM_EHSM_CORE1_CMD_PARAM11 CSR_TYPE_NCB32b
#define basename_CAVM_EHSM_CORE1_CMD_PARAM11 "EHSM_CORE1_CMD_PARAM11"
#define device_bar_CAVM_EHSM_CORE1_CMD_PARAM11 0x0 /* PF_BAR0 */
#define busnum_CAVM_EHSM_CORE1_CMD_PARAM11 0
#define arguments_CAVM_EHSM_CORE1_CMD_PARAM11 -1,-1,-1,-1

/**
 * Register (NCB32b) ehsm_core1_cmd_param12
 *
 * CORE 1 Command Parameter 12. Register
 * This register contains parameter 12 associated with a BCM primitive command from
 * host processor core 1.
 */
union cavm_ehsm_core1_cmd_param12
{
    uint32_t u;
    struct cavm_ehsm_core1_cmd_param12_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t data                  : 32; /**< [ 31:  0](WO) x */
#else /* Word 0 - Little Endian */
        uint32_t data                  : 32; /**< [ 31:  0](WO) x */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_ehsm_core1_cmd_param12_s cn; */
};
typedef union cavm_ehsm_core1_cmd_param12 cavm_ehsm_core1_cmd_param12_t;

#define CAVM_EHSM_CORE1_CMD_PARAM12 CAVM_EHSM_CORE1_CMD_PARAM12_FUNC()
static inline uint64_t CAVM_EHSM_CORE1_CMD_PARAM12_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_EHSM_CORE1_CMD_PARAM12_FUNC(void)
{
    return 0x80b000000030ll;
}

#define typedef_CAVM_EHSM_CORE1_CMD_PARAM12 cavm_ehsm_core1_cmd_param12_t
#define bustype_CAVM_EHSM_CORE1_CMD_PARAM12 CSR_TYPE_NCB32b
#define basename_CAVM_EHSM_CORE1_CMD_PARAM12 "EHSM_CORE1_CMD_PARAM12"
#define device_bar_CAVM_EHSM_CORE1_CMD_PARAM12 0x0 /* PF_BAR0 */
#define busnum_CAVM_EHSM_CORE1_CMD_PARAM12 0
#define arguments_CAVM_EHSM_CORE1_CMD_PARAM12 -1,-1,-1,-1

/**
 * Register (NCB32b) ehsm_core1_cmd_param13
 *
 * CORE 1 Command Parameter 13. Register
 * This register contains parameter 13 associated with a BCM primitive command from
 * host processor core 1.
 */
union cavm_ehsm_core1_cmd_param13
{
    uint32_t u;
    struct cavm_ehsm_core1_cmd_param13_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t data                  : 32; /**< [ 31:  0](WO) x */
#else /* Word 0 - Little Endian */
        uint32_t data                  : 32; /**< [ 31:  0](WO) x */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_ehsm_core1_cmd_param13_s cn; */
};
typedef union cavm_ehsm_core1_cmd_param13 cavm_ehsm_core1_cmd_param13_t;

#define CAVM_EHSM_CORE1_CMD_PARAM13 CAVM_EHSM_CORE1_CMD_PARAM13_FUNC()
static inline uint64_t CAVM_EHSM_CORE1_CMD_PARAM13_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_EHSM_CORE1_CMD_PARAM13_FUNC(void)
{
    return 0x80b000000034ll;
}

#define typedef_CAVM_EHSM_CORE1_CMD_PARAM13 cavm_ehsm_core1_cmd_param13_t
#define bustype_CAVM_EHSM_CORE1_CMD_PARAM13 CSR_TYPE_NCB32b
#define basename_CAVM_EHSM_CORE1_CMD_PARAM13 "EHSM_CORE1_CMD_PARAM13"
#define device_bar_CAVM_EHSM_CORE1_CMD_PARAM13 0x0 /* PF_BAR0 */
#define busnum_CAVM_EHSM_CORE1_CMD_PARAM13 0
#define arguments_CAVM_EHSM_CORE1_CMD_PARAM13 -1,-1,-1,-1

/**
 * Register (NCB32b) ehsm_core1_cmd_param14
 *
 * CORE 1 Command Parameter 14. Register
 * This register contains parameter 14 associated with a BCM primitive command from
 * host processor core 1.
 */
union cavm_ehsm_core1_cmd_param14
{
    uint32_t u;
    struct cavm_ehsm_core1_cmd_param14_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t data                  : 32; /**< [ 31:  0](WO) x */
#else /* Word 0 - Little Endian */
        uint32_t data                  : 32; /**< [ 31:  0](WO) x */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_ehsm_core1_cmd_param14_s cn; */
};
typedef union cavm_ehsm_core1_cmd_param14 cavm_ehsm_core1_cmd_param14_t;

#define CAVM_EHSM_CORE1_CMD_PARAM14 CAVM_EHSM_CORE1_CMD_PARAM14_FUNC()
static inline uint64_t CAVM_EHSM_CORE1_CMD_PARAM14_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_EHSM_CORE1_CMD_PARAM14_FUNC(void)
{
    return 0x80b000000038ll;
}

#define typedef_CAVM_EHSM_CORE1_CMD_PARAM14 cavm_ehsm_core1_cmd_param14_t
#define bustype_CAVM_EHSM_CORE1_CMD_PARAM14 CSR_TYPE_NCB32b
#define basename_CAVM_EHSM_CORE1_CMD_PARAM14 "EHSM_CORE1_CMD_PARAM14"
#define device_bar_CAVM_EHSM_CORE1_CMD_PARAM14 0x0 /* PF_BAR0 */
#define busnum_CAVM_EHSM_CORE1_CMD_PARAM14 0
#define arguments_CAVM_EHSM_CORE1_CMD_PARAM14 -1,-1,-1,-1

/**
 * Register (NCB32b) ehsm_core1_cmd_param15
 *
 * CORE 1 Command Parameter 15. Register
 * This register contains parameter 15 associated with a BCM primitive command from
 * host processor core 1.
 */
union cavm_ehsm_core1_cmd_param15
{
    uint32_t u;
    struct cavm_ehsm_core1_cmd_param15_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t data                  : 32; /**< [ 31:  0](WO) x */
#else /* Word 0 - Little Endian */
        uint32_t data                  : 32; /**< [ 31:  0](WO) x */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_ehsm_core1_cmd_param15_s cn; */
};
typedef union cavm_ehsm_core1_cmd_param15 cavm_ehsm_core1_cmd_param15_t;

#define CAVM_EHSM_CORE1_CMD_PARAM15 CAVM_EHSM_CORE1_CMD_PARAM15_FUNC()
static inline uint64_t CAVM_EHSM_CORE1_CMD_PARAM15_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_EHSM_CORE1_CMD_PARAM15_FUNC(void)
{
    return 0x80b00000003cll;
}

#define typedef_CAVM_EHSM_CORE1_CMD_PARAM15 cavm_ehsm_core1_cmd_param15_t
#define bustype_CAVM_EHSM_CORE1_CMD_PARAM15 CSR_TYPE_NCB32b
#define basename_CAVM_EHSM_CORE1_CMD_PARAM15 "EHSM_CORE1_CMD_PARAM15"
#define device_bar_CAVM_EHSM_CORE1_CMD_PARAM15 0x0 /* PF_BAR0 */
#define busnum_CAVM_EHSM_CORE1_CMD_PARAM15 0
#define arguments_CAVM_EHSM_CORE1_CMD_PARAM15 -1,-1,-1,-1

/**
 * Register (NCB32b) ehsm_core1_cmd_param2
 *
 * CORE 1 Command Parameter 2. Register
 * This register contains parameter 2 associated with a BCM primitive command from host
 * processor core 1.
 */
union cavm_ehsm_core1_cmd_param2
{
    uint32_t u;
    struct cavm_ehsm_core1_cmd_param2_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t data                  : 32; /**< [ 31:  0](WO) x */
#else /* Word 0 - Little Endian */
        uint32_t data                  : 32; /**< [ 31:  0](WO) x */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_ehsm_core1_cmd_param2_s cn; */
};
typedef union cavm_ehsm_core1_cmd_param2 cavm_ehsm_core1_cmd_param2_t;

#define CAVM_EHSM_CORE1_CMD_PARAM2 CAVM_EHSM_CORE1_CMD_PARAM2_FUNC()
static inline uint64_t CAVM_EHSM_CORE1_CMD_PARAM2_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_EHSM_CORE1_CMD_PARAM2_FUNC(void)
{
    return 0x80b000000008ll;
}

#define typedef_CAVM_EHSM_CORE1_CMD_PARAM2 cavm_ehsm_core1_cmd_param2_t
#define bustype_CAVM_EHSM_CORE1_CMD_PARAM2 CSR_TYPE_NCB32b
#define basename_CAVM_EHSM_CORE1_CMD_PARAM2 "EHSM_CORE1_CMD_PARAM2"
#define device_bar_CAVM_EHSM_CORE1_CMD_PARAM2 0x0 /* PF_BAR0 */
#define busnum_CAVM_EHSM_CORE1_CMD_PARAM2 0
#define arguments_CAVM_EHSM_CORE1_CMD_PARAM2 -1,-1,-1,-1

/**
 * Register (NCB32b) ehsm_core1_cmd_param3
 *
 * CORE 1 Command Parameter 3. Register
 * This register contains parameter 3 associated with a BCM primitive command from host
 * processor core 1.
 */
union cavm_ehsm_core1_cmd_param3
{
    uint32_t u;
    struct cavm_ehsm_core1_cmd_param3_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t data                  : 32; /**< [ 31:  0](WO) x */
#else /* Word 0 - Little Endian */
        uint32_t data                  : 32; /**< [ 31:  0](WO) x */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_ehsm_core1_cmd_param3_s cn; */
};
typedef union cavm_ehsm_core1_cmd_param3 cavm_ehsm_core1_cmd_param3_t;

#define CAVM_EHSM_CORE1_CMD_PARAM3 CAVM_EHSM_CORE1_CMD_PARAM3_FUNC()
static inline uint64_t CAVM_EHSM_CORE1_CMD_PARAM3_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_EHSM_CORE1_CMD_PARAM3_FUNC(void)
{
    return 0x80b00000000cll;
}

#define typedef_CAVM_EHSM_CORE1_CMD_PARAM3 cavm_ehsm_core1_cmd_param3_t
#define bustype_CAVM_EHSM_CORE1_CMD_PARAM3 CSR_TYPE_NCB32b
#define basename_CAVM_EHSM_CORE1_CMD_PARAM3 "EHSM_CORE1_CMD_PARAM3"
#define device_bar_CAVM_EHSM_CORE1_CMD_PARAM3 0x0 /* PF_BAR0 */
#define busnum_CAVM_EHSM_CORE1_CMD_PARAM3 0
#define arguments_CAVM_EHSM_CORE1_CMD_PARAM3 -1,-1,-1,-1

/**
 * Register (NCB32b) ehsm_core1_cmd_param4
 *
 * CORE 1 Command Parameter 4. Register
 * This register contains parameter 4 associated with a BCM primitive command from host
 * processor core 1.
 */
union cavm_ehsm_core1_cmd_param4
{
    uint32_t u;
    struct cavm_ehsm_core1_cmd_param4_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t data                  : 32; /**< [ 31:  0](WO) x */
#else /* Word 0 - Little Endian */
        uint32_t data                  : 32; /**< [ 31:  0](WO) x */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_ehsm_core1_cmd_param4_s cn; */
};
typedef union cavm_ehsm_core1_cmd_param4 cavm_ehsm_core1_cmd_param4_t;

#define CAVM_EHSM_CORE1_CMD_PARAM4 CAVM_EHSM_CORE1_CMD_PARAM4_FUNC()
static inline uint64_t CAVM_EHSM_CORE1_CMD_PARAM4_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_EHSM_CORE1_CMD_PARAM4_FUNC(void)
{
    return 0x80b000000010ll;
}

#define typedef_CAVM_EHSM_CORE1_CMD_PARAM4 cavm_ehsm_core1_cmd_param4_t
#define bustype_CAVM_EHSM_CORE1_CMD_PARAM4 CSR_TYPE_NCB32b
#define basename_CAVM_EHSM_CORE1_CMD_PARAM4 "EHSM_CORE1_CMD_PARAM4"
#define device_bar_CAVM_EHSM_CORE1_CMD_PARAM4 0x0 /* PF_BAR0 */
#define busnum_CAVM_EHSM_CORE1_CMD_PARAM4 0
#define arguments_CAVM_EHSM_CORE1_CMD_PARAM4 -1,-1,-1,-1

/**
 * Register (NCB32b) ehsm_core1_cmd_param5
 *
 * CORE 1 Command Parameter 5. Register
 * This register contains parameter 5 associated with a BCM primitive command from host
 * processor core 1.
 */
union cavm_ehsm_core1_cmd_param5
{
    uint32_t u;
    struct cavm_ehsm_core1_cmd_param5_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t data                  : 32; /**< [ 31:  0](WO) x */
#else /* Word 0 - Little Endian */
        uint32_t data                  : 32; /**< [ 31:  0](WO) x */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_ehsm_core1_cmd_param5_s cn; */
};
typedef union cavm_ehsm_core1_cmd_param5 cavm_ehsm_core1_cmd_param5_t;

#define CAVM_EHSM_CORE1_CMD_PARAM5 CAVM_EHSM_CORE1_CMD_PARAM5_FUNC()
static inline uint64_t CAVM_EHSM_CORE1_CMD_PARAM5_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_EHSM_CORE1_CMD_PARAM5_FUNC(void)
{
    return 0x80b000000014ll;
}

#define typedef_CAVM_EHSM_CORE1_CMD_PARAM5 cavm_ehsm_core1_cmd_param5_t
#define bustype_CAVM_EHSM_CORE1_CMD_PARAM5 CSR_TYPE_NCB32b
#define basename_CAVM_EHSM_CORE1_CMD_PARAM5 "EHSM_CORE1_CMD_PARAM5"
#define device_bar_CAVM_EHSM_CORE1_CMD_PARAM5 0x0 /* PF_BAR0 */
#define busnum_CAVM_EHSM_CORE1_CMD_PARAM5 0
#define arguments_CAVM_EHSM_CORE1_CMD_PARAM5 -1,-1,-1,-1

/**
 * Register (NCB32b) ehsm_core1_cmd_param6
 *
 * CORE 1 Command Parameter 6. Register
 * This register contains parameter 6 associated with a BCM primitive command from host
 * processor core 1.
 */
union cavm_ehsm_core1_cmd_param6
{
    uint32_t u;
    struct cavm_ehsm_core1_cmd_param6_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t data                  : 32; /**< [ 31:  0](WO) x */
#else /* Word 0 - Little Endian */
        uint32_t data                  : 32; /**< [ 31:  0](WO) x */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_ehsm_core1_cmd_param6_s cn; */
};
typedef union cavm_ehsm_core1_cmd_param6 cavm_ehsm_core1_cmd_param6_t;

#define CAVM_EHSM_CORE1_CMD_PARAM6 CAVM_EHSM_CORE1_CMD_PARAM6_FUNC()
static inline uint64_t CAVM_EHSM_CORE1_CMD_PARAM6_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_EHSM_CORE1_CMD_PARAM6_FUNC(void)
{
    return 0x80b000000018ll;
}

#define typedef_CAVM_EHSM_CORE1_CMD_PARAM6 cavm_ehsm_core1_cmd_param6_t
#define bustype_CAVM_EHSM_CORE1_CMD_PARAM6 CSR_TYPE_NCB32b
#define basename_CAVM_EHSM_CORE1_CMD_PARAM6 "EHSM_CORE1_CMD_PARAM6"
#define device_bar_CAVM_EHSM_CORE1_CMD_PARAM6 0x0 /* PF_BAR0 */
#define busnum_CAVM_EHSM_CORE1_CMD_PARAM6 0
#define arguments_CAVM_EHSM_CORE1_CMD_PARAM6 -1,-1,-1,-1

/**
 * Register (NCB32b) ehsm_core1_cmd_param7
 *
 * CORE 1 Command Parameter 7. Register
 * This register contains parameter 7 associated with a BCM primitive command from host
 * processor core 1.
 */
union cavm_ehsm_core1_cmd_param7
{
    uint32_t u;
    struct cavm_ehsm_core1_cmd_param7_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t data                  : 32; /**< [ 31:  0](WO) x */
#else /* Word 0 - Little Endian */
        uint32_t data                  : 32; /**< [ 31:  0](WO) x */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_ehsm_core1_cmd_param7_s cn; */
};
typedef union cavm_ehsm_core1_cmd_param7 cavm_ehsm_core1_cmd_param7_t;

#define CAVM_EHSM_CORE1_CMD_PARAM7 CAVM_EHSM_CORE1_CMD_PARAM7_FUNC()
static inline uint64_t CAVM_EHSM_CORE1_CMD_PARAM7_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_EHSM_CORE1_CMD_PARAM7_FUNC(void)
{
    return 0x80b00000001cll;
}

#define typedef_CAVM_EHSM_CORE1_CMD_PARAM7 cavm_ehsm_core1_cmd_param7_t
#define bustype_CAVM_EHSM_CORE1_CMD_PARAM7 CSR_TYPE_NCB32b
#define basename_CAVM_EHSM_CORE1_CMD_PARAM7 "EHSM_CORE1_CMD_PARAM7"
#define device_bar_CAVM_EHSM_CORE1_CMD_PARAM7 0x0 /* PF_BAR0 */
#define busnum_CAVM_EHSM_CORE1_CMD_PARAM7 0
#define arguments_CAVM_EHSM_CORE1_CMD_PARAM7 -1,-1,-1,-1

/**
 * Register (NCB32b) ehsm_core1_cmd_param8
 *
 * CORE 1 Command Parameter 8. Register
 * This register contains parameter 8 associated with a BCM primitive command from host
 * processor core 1.
 */
union cavm_ehsm_core1_cmd_param8
{
    uint32_t u;
    struct cavm_ehsm_core1_cmd_param8_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t data                  : 32; /**< [ 31:  0](WO) x */
#else /* Word 0 - Little Endian */
        uint32_t data                  : 32; /**< [ 31:  0](WO) x */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_ehsm_core1_cmd_param8_s cn; */
};
typedef union cavm_ehsm_core1_cmd_param8 cavm_ehsm_core1_cmd_param8_t;

#define CAVM_EHSM_CORE1_CMD_PARAM8 CAVM_EHSM_CORE1_CMD_PARAM8_FUNC()
static inline uint64_t CAVM_EHSM_CORE1_CMD_PARAM8_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_EHSM_CORE1_CMD_PARAM8_FUNC(void)
{
    return 0x80b000000020ll;
}

#define typedef_CAVM_EHSM_CORE1_CMD_PARAM8 cavm_ehsm_core1_cmd_param8_t
#define bustype_CAVM_EHSM_CORE1_CMD_PARAM8 CSR_TYPE_NCB32b
#define basename_CAVM_EHSM_CORE1_CMD_PARAM8 "EHSM_CORE1_CMD_PARAM8"
#define device_bar_CAVM_EHSM_CORE1_CMD_PARAM8 0x0 /* PF_BAR0 */
#define busnum_CAVM_EHSM_CORE1_CMD_PARAM8 0
#define arguments_CAVM_EHSM_CORE1_CMD_PARAM8 -1,-1,-1,-1

/**
 * Register (NCB32b) ehsm_core1_cmd_param9
 *
 * CORE 1 Command Parameter 9. Register
 * This register contains parameter 9 associated with a BCM primitive command from host
 * processor core 1.
 */
union cavm_ehsm_core1_cmd_param9
{
    uint32_t u;
    struct cavm_ehsm_core1_cmd_param9_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t data                  : 32; /**< [ 31:  0](WO) x */
#else /* Word 0 - Little Endian */
        uint32_t data                  : 32; /**< [ 31:  0](WO) x */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_ehsm_core1_cmd_param9_s cn; */
};
typedef union cavm_ehsm_core1_cmd_param9 cavm_ehsm_core1_cmd_param9_t;

#define CAVM_EHSM_CORE1_CMD_PARAM9 CAVM_EHSM_CORE1_CMD_PARAM9_FUNC()
static inline uint64_t CAVM_EHSM_CORE1_CMD_PARAM9_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_EHSM_CORE1_CMD_PARAM9_FUNC(void)
{
    return 0x80b000000024ll;
}

#define typedef_CAVM_EHSM_CORE1_CMD_PARAM9 cavm_ehsm_core1_cmd_param9_t
#define bustype_CAVM_EHSM_CORE1_CMD_PARAM9 CSR_TYPE_NCB32b
#define basename_CAVM_EHSM_CORE1_CMD_PARAM9 "EHSM_CORE1_CMD_PARAM9"
#define device_bar_CAVM_EHSM_CORE1_CMD_PARAM9 0x0 /* PF_BAR0 */
#define busnum_CAVM_EHSM_CORE1_CMD_PARAM9 0
#define arguments_CAVM_EHSM_CORE1_CMD_PARAM9 -1,-1,-1,-1

/**
 * Register (NCB32b) ehsm_core1_cmd_ret_status
 *
 * CORE 1 Command Return Status. Register
 * This register contains return status associated with a BCM primitive command from
 * host processor core 1.
 */
union cavm_ehsm_core1_cmd_ret_status
{
    uint32_t u;
    struct cavm_ehsm_core1_cmd_ret_status_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t data                  : 32; /**< [ 31:  0](RO) x */
#else /* Word 0 - Little Endian */
        uint32_t data                  : 32; /**< [ 31:  0](RO) x */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_ehsm_core1_cmd_ret_status_s cn; */
};
typedef union cavm_ehsm_core1_cmd_ret_status cavm_ehsm_core1_cmd_ret_status_t;

#define CAVM_EHSM_CORE1_CMD_RET_STATUS CAVM_EHSM_CORE1_CMD_RET_STATUS_FUNC()
static inline uint64_t CAVM_EHSM_CORE1_CMD_RET_STATUS_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_EHSM_CORE1_CMD_RET_STATUS_FUNC(void)
{
    return 0x80b000000080ll;
}

#define typedef_CAVM_EHSM_CORE1_CMD_RET_STATUS cavm_ehsm_core1_cmd_ret_status_t
#define bustype_CAVM_EHSM_CORE1_CMD_RET_STATUS CSR_TYPE_NCB32b
#define basename_CAVM_EHSM_CORE1_CMD_RET_STATUS "EHSM_CORE1_CMD_RET_STATUS"
#define device_bar_CAVM_EHSM_CORE1_CMD_RET_STATUS 0x0 /* PF_BAR0 */
#define busnum_CAVM_EHSM_CORE1_CMD_RET_STATUS 0
#define arguments_CAVM_EHSM_CORE1_CMD_RET_STATUS -1,-1,-1,-1

/**
 * Register (NCB32b) ehsm_core1_cmd_status0
 *
 * CORE 1 Command Status 0. Register
 * This register contains status 0 associated with a BCM primitive command from host processor core 1.
 */
union cavm_ehsm_core1_cmd_status0
{
    uint32_t u;
    struct cavm_ehsm_core1_cmd_status0_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t data                  : 32; /**< [ 31:  0](RO) x */
#else /* Word 0 - Little Endian */
        uint32_t data                  : 32; /**< [ 31:  0](RO) x */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_ehsm_core1_cmd_status0_s cn; */
};
typedef union cavm_ehsm_core1_cmd_status0 cavm_ehsm_core1_cmd_status0_t;

#define CAVM_EHSM_CORE1_CMD_STATUS0 CAVM_EHSM_CORE1_CMD_STATUS0_FUNC()
static inline uint64_t CAVM_EHSM_CORE1_CMD_STATUS0_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_EHSM_CORE1_CMD_STATUS0_FUNC(void)
{
    return 0x80b000000084ll;
}

#define typedef_CAVM_EHSM_CORE1_CMD_STATUS0 cavm_ehsm_core1_cmd_status0_t
#define bustype_CAVM_EHSM_CORE1_CMD_STATUS0 CSR_TYPE_NCB32b
#define basename_CAVM_EHSM_CORE1_CMD_STATUS0 "EHSM_CORE1_CMD_STATUS0"
#define device_bar_CAVM_EHSM_CORE1_CMD_STATUS0 0x0 /* PF_BAR0 */
#define busnum_CAVM_EHSM_CORE1_CMD_STATUS0 0
#define arguments_CAVM_EHSM_CORE1_CMD_STATUS0 -1,-1,-1,-1

/**
 * Register (NCB32b) ehsm_core1_cmd_status1
 *
 * CORE 1 Command Status 1. Register
 * This register contains status 1 associated with a BCM primitive command from host processor core 1.
 */
union cavm_ehsm_core1_cmd_status1
{
    uint32_t u;
    struct cavm_ehsm_core1_cmd_status1_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t data                  : 32; /**< [ 31:  0](RO) x */
#else /* Word 0 - Little Endian */
        uint32_t data                  : 32; /**< [ 31:  0](RO) x */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_ehsm_core1_cmd_status1_s cn; */
};
typedef union cavm_ehsm_core1_cmd_status1 cavm_ehsm_core1_cmd_status1_t;

#define CAVM_EHSM_CORE1_CMD_STATUS1 CAVM_EHSM_CORE1_CMD_STATUS1_FUNC()
static inline uint64_t CAVM_EHSM_CORE1_CMD_STATUS1_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_EHSM_CORE1_CMD_STATUS1_FUNC(void)
{
    return 0x80b000000088ll;
}

#define typedef_CAVM_EHSM_CORE1_CMD_STATUS1 cavm_ehsm_core1_cmd_status1_t
#define bustype_CAVM_EHSM_CORE1_CMD_STATUS1 CSR_TYPE_NCB32b
#define basename_CAVM_EHSM_CORE1_CMD_STATUS1 "EHSM_CORE1_CMD_STATUS1"
#define device_bar_CAVM_EHSM_CORE1_CMD_STATUS1 0x0 /* PF_BAR0 */
#define busnum_CAVM_EHSM_CORE1_CMD_STATUS1 0
#define arguments_CAVM_EHSM_CORE1_CMD_STATUS1 -1,-1,-1,-1

/**
 * Register (NCB32b) ehsm_core1_cmd_status10
 *
 * CORE 1 Command Status 10. Register
 * This register contains status 10 associated with a BCM primitive command from host
 * processor core 1.
 */
union cavm_ehsm_core1_cmd_status10
{
    uint32_t u;
    struct cavm_ehsm_core1_cmd_status10_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t data                  : 32; /**< [ 31:  0](RO) x */
#else /* Word 0 - Little Endian */
        uint32_t data                  : 32; /**< [ 31:  0](RO) x */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_ehsm_core1_cmd_status10_s cn; */
};
typedef union cavm_ehsm_core1_cmd_status10 cavm_ehsm_core1_cmd_status10_t;

#define CAVM_EHSM_CORE1_CMD_STATUS10 CAVM_EHSM_CORE1_CMD_STATUS10_FUNC()
static inline uint64_t CAVM_EHSM_CORE1_CMD_STATUS10_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_EHSM_CORE1_CMD_STATUS10_FUNC(void)
{
    return 0x80b0000000acll;
}

#define typedef_CAVM_EHSM_CORE1_CMD_STATUS10 cavm_ehsm_core1_cmd_status10_t
#define bustype_CAVM_EHSM_CORE1_CMD_STATUS10 CSR_TYPE_NCB32b
#define basename_CAVM_EHSM_CORE1_CMD_STATUS10 "EHSM_CORE1_CMD_STATUS10"
#define device_bar_CAVM_EHSM_CORE1_CMD_STATUS10 0x0 /* PF_BAR0 */
#define busnum_CAVM_EHSM_CORE1_CMD_STATUS10 0
#define arguments_CAVM_EHSM_CORE1_CMD_STATUS10 -1,-1,-1,-1

/**
 * Register (NCB32b) ehsm_core1_cmd_status11
 *
 * CORE 1 Command Status 11. Register
 * This register contains status 11 associated with a BCM primitive command from host
 * processor core 1.
 */
union cavm_ehsm_core1_cmd_status11
{
    uint32_t u;
    struct cavm_ehsm_core1_cmd_status11_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t data                  : 32; /**< [ 31:  0](RO) x */
#else /* Word 0 - Little Endian */
        uint32_t data                  : 32; /**< [ 31:  0](RO) x */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_ehsm_core1_cmd_status11_s cn; */
};
typedef union cavm_ehsm_core1_cmd_status11 cavm_ehsm_core1_cmd_status11_t;

#define CAVM_EHSM_CORE1_CMD_STATUS11 CAVM_EHSM_CORE1_CMD_STATUS11_FUNC()
static inline uint64_t CAVM_EHSM_CORE1_CMD_STATUS11_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_EHSM_CORE1_CMD_STATUS11_FUNC(void)
{
    return 0x80b0000000b0ll;
}

#define typedef_CAVM_EHSM_CORE1_CMD_STATUS11 cavm_ehsm_core1_cmd_status11_t
#define bustype_CAVM_EHSM_CORE1_CMD_STATUS11 CSR_TYPE_NCB32b
#define basename_CAVM_EHSM_CORE1_CMD_STATUS11 "EHSM_CORE1_CMD_STATUS11"
#define device_bar_CAVM_EHSM_CORE1_CMD_STATUS11 0x0 /* PF_BAR0 */
#define busnum_CAVM_EHSM_CORE1_CMD_STATUS11 0
#define arguments_CAVM_EHSM_CORE1_CMD_STATUS11 -1,-1,-1,-1

/**
 * Register (NCB32b) ehsm_core1_cmd_status12
 *
 * CORE 1 Command Status 12. Register
 * This register contains status 12 associated with a BCM primitive command from host
 * processor core 1.
 */
union cavm_ehsm_core1_cmd_status12
{
    uint32_t u;
    struct cavm_ehsm_core1_cmd_status12_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t data                  : 32; /**< [ 31:  0](RO) x */
#else /* Word 0 - Little Endian */
        uint32_t data                  : 32; /**< [ 31:  0](RO) x */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_ehsm_core1_cmd_status12_s cn; */
};
typedef union cavm_ehsm_core1_cmd_status12 cavm_ehsm_core1_cmd_status12_t;

#define CAVM_EHSM_CORE1_CMD_STATUS12 CAVM_EHSM_CORE1_CMD_STATUS12_FUNC()
static inline uint64_t CAVM_EHSM_CORE1_CMD_STATUS12_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_EHSM_CORE1_CMD_STATUS12_FUNC(void)
{
    return 0x80b0000000b4ll;
}

#define typedef_CAVM_EHSM_CORE1_CMD_STATUS12 cavm_ehsm_core1_cmd_status12_t
#define bustype_CAVM_EHSM_CORE1_CMD_STATUS12 CSR_TYPE_NCB32b
#define basename_CAVM_EHSM_CORE1_CMD_STATUS12 "EHSM_CORE1_CMD_STATUS12"
#define device_bar_CAVM_EHSM_CORE1_CMD_STATUS12 0x0 /* PF_BAR0 */
#define busnum_CAVM_EHSM_CORE1_CMD_STATUS12 0
#define arguments_CAVM_EHSM_CORE1_CMD_STATUS12 -1,-1,-1,-1

/**
 * Register (NCB32b) ehsm_core1_cmd_status13
 *
 * CORE 1 Command Status 13. Register
 * This register contains status 13 associated with a BCM primitive command from host
 * processor core 1.
 */
union cavm_ehsm_core1_cmd_status13
{
    uint32_t u;
    struct cavm_ehsm_core1_cmd_status13_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t data                  : 32; /**< [ 31:  0](RO) x */
#else /* Word 0 - Little Endian */
        uint32_t data                  : 32; /**< [ 31:  0](RO) x */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_ehsm_core1_cmd_status13_s cn; */
};
typedef union cavm_ehsm_core1_cmd_status13 cavm_ehsm_core1_cmd_status13_t;

#define CAVM_EHSM_CORE1_CMD_STATUS13 CAVM_EHSM_CORE1_CMD_STATUS13_FUNC()
static inline uint64_t CAVM_EHSM_CORE1_CMD_STATUS13_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_EHSM_CORE1_CMD_STATUS13_FUNC(void)
{
    return 0x80b0000000b8ll;
}

#define typedef_CAVM_EHSM_CORE1_CMD_STATUS13 cavm_ehsm_core1_cmd_status13_t
#define bustype_CAVM_EHSM_CORE1_CMD_STATUS13 CSR_TYPE_NCB32b
#define basename_CAVM_EHSM_CORE1_CMD_STATUS13 "EHSM_CORE1_CMD_STATUS13"
#define device_bar_CAVM_EHSM_CORE1_CMD_STATUS13 0x0 /* PF_BAR0 */
#define busnum_CAVM_EHSM_CORE1_CMD_STATUS13 0
#define arguments_CAVM_EHSM_CORE1_CMD_STATUS13 -1,-1,-1,-1

/**
 * Register (NCB32b) ehsm_core1_cmd_status14
 *
 * CORE 1 Command Status 14. Register
 * This register contains status 14 associated with a BCM primitive command from host
 * processor core 1.
 */
union cavm_ehsm_core1_cmd_status14
{
    uint32_t u;
    struct cavm_ehsm_core1_cmd_status14_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t data                  : 32; /**< [ 31:  0](RO) x */
#else /* Word 0 - Little Endian */
        uint32_t data                  : 32; /**< [ 31:  0](RO) x */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_ehsm_core1_cmd_status14_s cn; */
};
typedef union cavm_ehsm_core1_cmd_status14 cavm_ehsm_core1_cmd_status14_t;

#define CAVM_EHSM_CORE1_CMD_STATUS14 CAVM_EHSM_CORE1_CMD_STATUS14_FUNC()
static inline uint64_t CAVM_EHSM_CORE1_CMD_STATUS14_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_EHSM_CORE1_CMD_STATUS14_FUNC(void)
{
    return 0x80b0000000bcll;
}

#define typedef_CAVM_EHSM_CORE1_CMD_STATUS14 cavm_ehsm_core1_cmd_status14_t
#define bustype_CAVM_EHSM_CORE1_CMD_STATUS14 CSR_TYPE_NCB32b
#define basename_CAVM_EHSM_CORE1_CMD_STATUS14 "EHSM_CORE1_CMD_STATUS14"
#define device_bar_CAVM_EHSM_CORE1_CMD_STATUS14 0x0 /* PF_BAR0 */
#define busnum_CAVM_EHSM_CORE1_CMD_STATUS14 0
#define arguments_CAVM_EHSM_CORE1_CMD_STATUS14 -1,-1,-1,-1

/**
 * Register (NCB32b) ehsm_core1_cmd_status15
 *
 * CORE 1 Command Status 15. Register
 * This register contains status 15 associated with a BCM primitive command from host
 * processor core 1.
 */
union cavm_ehsm_core1_cmd_status15
{
    uint32_t u;
    struct cavm_ehsm_core1_cmd_status15_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t data                  : 32; /**< [ 31:  0](RO) x */
#else /* Word 0 - Little Endian */
        uint32_t data                  : 32; /**< [ 31:  0](RO) x */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_ehsm_core1_cmd_status15_s cn; */
};
typedef union cavm_ehsm_core1_cmd_status15 cavm_ehsm_core1_cmd_status15_t;

#define CAVM_EHSM_CORE1_CMD_STATUS15 CAVM_EHSM_CORE1_CMD_STATUS15_FUNC()
static inline uint64_t CAVM_EHSM_CORE1_CMD_STATUS15_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_EHSM_CORE1_CMD_STATUS15_FUNC(void)
{
    return 0x80b0000000c0ll;
}

#define typedef_CAVM_EHSM_CORE1_CMD_STATUS15 cavm_ehsm_core1_cmd_status15_t
#define bustype_CAVM_EHSM_CORE1_CMD_STATUS15 CSR_TYPE_NCB32b
#define basename_CAVM_EHSM_CORE1_CMD_STATUS15 "EHSM_CORE1_CMD_STATUS15"
#define device_bar_CAVM_EHSM_CORE1_CMD_STATUS15 0x0 /* PF_BAR0 */
#define busnum_CAVM_EHSM_CORE1_CMD_STATUS15 0
#define arguments_CAVM_EHSM_CORE1_CMD_STATUS15 -1,-1,-1,-1

/**
 * Register (NCB32b) ehsm_core1_cmd_status2
 *
 * CORE 1 Command Status 2. Register
 * This register contains status 2 associated with a BCM primitive command from host processor core 1.
 */
union cavm_ehsm_core1_cmd_status2
{
    uint32_t u;
    struct cavm_ehsm_core1_cmd_status2_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t data                  : 32; /**< [ 31:  0](RO) x */
#else /* Word 0 - Little Endian */
        uint32_t data                  : 32; /**< [ 31:  0](RO) x */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_ehsm_core1_cmd_status2_s cn; */
};
typedef union cavm_ehsm_core1_cmd_status2 cavm_ehsm_core1_cmd_status2_t;

#define CAVM_EHSM_CORE1_CMD_STATUS2 CAVM_EHSM_CORE1_CMD_STATUS2_FUNC()
static inline uint64_t CAVM_EHSM_CORE1_CMD_STATUS2_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_EHSM_CORE1_CMD_STATUS2_FUNC(void)
{
    return 0x80b00000008cll;
}

#define typedef_CAVM_EHSM_CORE1_CMD_STATUS2 cavm_ehsm_core1_cmd_status2_t
#define bustype_CAVM_EHSM_CORE1_CMD_STATUS2 CSR_TYPE_NCB32b
#define basename_CAVM_EHSM_CORE1_CMD_STATUS2 "EHSM_CORE1_CMD_STATUS2"
#define device_bar_CAVM_EHSM_CORE1_CMD_STATUS2 0x0 /* PF_BAR0 */
#define busnum_CAVM_EHSM_CORE1_CMD_STATUS2 0
#define arguments_CAVM_EHSM_CORE1_CMD_STATUS2 -1,-1,-1,-1

/**
 * Register (NCB32b) ehsm_core1_cmd_status3
 *
 * CORE 1 Command Status 3. Register
 * This register contains status 3 associated with a BCM primitive command from host processor core 1.
 */
union cavm_ehsm_core1_cmd_status3
{
    uint32_t u;
    struct cavm_ehsm_core1_cmd_status3_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t data                  : 32; /**< [ 31:  0](RO) x */
#else /* Word 0 - Little Endian */
        uint32_t data                  : 32; /**< [ 31:  0](RO) x */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_ehsm_core1_cmd_status3_s cn; */
};
typedef union cavm_ehsm_core1_cmd_status3 cavm_ehsm_core1_cmd_status3_t;

#define CAVM_EHSM_CORE1_CMD_STATUS3 CAVM_EHSM_CORE1_CMD_STATUS3_FUNC()
static inline uint64_t CAVM_EHSM_CORE1_CMD_STATUS3_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_EHSM_CORE1_CMD_STATUS3_FUNC(void)
{
    return 0x80b000000090ll;
}

#define typedef_CAVM_EHSM_CORE1_CMD_STATUS3 cavm_ehsm_core1_cmd_status3_t
#define bustype_CAVM_EHSM_CORE1_CMD_STATUS3 CSR_TYPE_NCB32b
#define basename_CAVM_EHSM_CORE1_CMD_STATUS3 "EHSM_CORE1_CMD_STATUS3"
#define device_bar_CAVM_EHSM_CORE1_CMD_STATUS3 0x0 /* PF_BAR0 */
#define busnum_CAVM_EHSM_CORE1_CMD_STATUS3 0
#define arguments_CAVM_EHSM_CORE1_CMD_STATUS3 -1,-1,-1,-1

/**
 * Register (NCB32b) ehsm_core1_cmd_status4
 *
 * CORE 1 Command Status 4. Register
 * This register contains status 4 associated with a BCM primitive command from host processor core 1.
 */
union cavm_ehsm_core1_cmd_status4
{
    uint32_t u;
    struct cavm_ehsm_core1_cmd_status4_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t data                  : 32; /**< [ 31:  0](RO) x */
#else /* Word 0 - Little Endian */
        uint32_t data                  : 32; /**< [ 31:  0](RO) x */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_ehsm_core1_cmd_status4_s cn; */
};
typedef union cavm_ehsm_core1_cmd_status4 cavm_ehsm_core1_cmd_status4_t;

#define CAVM_EHSM_CORE1_CMD_STATUS4 CAVM_EHSM_CORE1_CMD_STATUS4_FUNC()
static inline uint64_t CAVM_EHSM_CORE1_CMD_STATUS4_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_EHSM_CORE1_CMD_STATUS4_FUNC(void)
{
    return 0x80b000000094ll;
}

#define typedef_CAVM_EHSM_CORE1_CMD_STATUS4 cavm_ehsm_core1_cmd_status4_t
#define bustype_CAVM_EHSM_CORE1_CMD_STATUS4 CSR_TYPE_NCB32b
#define basename_CAVM_EHSM_CORE1_CMD_STATUS4 "EHSM_CORE1_CMD_STATUS4"
#define device_bar_CAVM_EHSM_CORE1_CMD_STATUS4 0x0 /* PF_BAR0 */
#define busnum_CAVM_EHSM_CORE1_CMD_STATUS4 0
#define arguments_CAVM_EHSM_CORE1_CMD_STATUS4 -1,-1,-1,-1

/**
 * Register (NCB32b) ehsm_core1_cmd_status5
 *
 * CORE 1 Command Status 5. Register
 * This register contains status 5 associated with a BCM primitive command from host processor core 1.
 */
union cavm_ehsm_core1_cmd_status5
{
    uint32_t u;
    struct cavm_ehsm_core1_cmd_status5_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t data                  : 32; /**< [ 31:  0](RO) x */
#else /* Word 0 - Little Endian */
        uint32_t data                  : 32; /**< [ 31:  0](RO) x */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_ehsm_core1_cmd_status5_s cn; */
};
typedef union cavm_ehsm_core1_cmd_status5 cavm_ehsm_core1_cmd_status5_t;

#define CAVM_EHSM_CORE1_CMD_STATUS5 CAVM_EHSM_CORE1_CMD_STATUS5_FUNC()
static inline uint64_t CAVM_EHSM_CORE1_CMD_STATUS5_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_EHSM_CORE1_CMD_STATUS5_FUNC(void)
{
    return 0x80b000000098ll;
}

#define typedef_CAVM_EHSM_CORE1_CMD_STATUS5 cavm_ehsm_core1_cmd_status5_t
#define bustype_CAVM_EHSM_CORE1_CMD_STATUS5 CSR_TYPE_NCB32b
#define basename_CAVM_EHSM_CORE1_CMD_STATUS5 "EHSM_CORE1_CMD_STATUS5"
#define device_bar_CAVM_EHSM_CORE1_CMD_STATUS5 0x0 /* PF_BAR0 */
#define busnum_CAVM_EHSM_CORE1_CMD_STATUS5 0
#define arguments_CAVM_EHSM_CORE1_CMD_STATUS5 -1,-1,-1,-1

/**
 * Register (NCB32b) ehsm_core1_cmd_status6
 *
 * CORE 1 Command Status 6. Register
 * This register contains status 6 associated with a BCM primitive command from host processor core 1.
 */
union cavm_ehsm_core1_cmd_status6
{
    uint32_t u;
    struct cavm_ehsm_core1_cmd_status6_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t data                  : 32; /**< [ 31:  0](RO) x */
#else /* Word 0 - Little Endian */
        uint32_t data                  : 32; /**< [ 31:  0](RO) x */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_ehsm_core1_cmd_status6_s cn; */
};
typedef union cavm_ehsm_core1_cmd_status6 cavm_ehsm_core1_cmd_status6_t;

#define CAVM_EHSM_CORE1_CMD_STATUS6 CAVM_EHSM_CORE1_CMD_STATUS6_FUNC()
static inline uint64_t CAVM_EHSM_CORE1_CMD_STATUS6_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_EHSM_CORE1_CMD_STATUS6_FUNC(void)
{
    return 0x80b00000009cll;
}

#define typedef_CAVM_EHSM_CORE1_CMD_STATUS6 cavm_ehsm_core1_cmd_status6_t
#define bustype_CAVM_EHSM_CORE1_CMD_STATUS6 CSR_TYPE_NCB32b
#define basename_CAVM_EHSM_CORE1_CMD_STATUS6 "EHSM_CORE1_CMD_STATUS6"
#define device_bar_CAVM_EHSM_CORE1_CMD_STATUS6 0x0 /* PF_BAR0 */
#define busnum_CAVM_EHSM_CORE1_CMD_STATUS6 0
#define arguments_CAVM_EHSM_CORE1_CMD_STATUS6 -1,-1,-1,-1

/**
 * Register (NCB32b) ehsm_core1_cmd_status7
 *
 * CORE 1 Command Status 7. Register
 * This register contains status 7 associated with a BCM primitive command from host processor core 1.
 */
union cavm_ehsm_core1_cmd_status7
{
    uint32_t u;
    struct cavm_ehsm_core1_cmd_status7_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t data                  : 32; /**< [ 31:  0](RO) x */
#else /* Word 0 - Little Endian */
        uint32_t data                  : 32; /**< [ 31:  0](RO) x */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_ehsm_core1_cmd_status7_s cn; */
};
typedef union cavm_ehsm_core1_cmd_status7 cavm_ehsm_core1_cmd_status7_t;

#define CAVM_EHSM_CORE1_CMD_STATUS7 CAVM_EHSM_CORE1_CMD_STATUS7_FUNC()
static inline uint64_t CAVM_EHSM_CORE1_CMD_STATUS7_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_EHSM_CORE1_CMD_STATUS7_FUNC(void)
{
    return 0x80b0000000a0ll;
}

#define typedef_CAVM_EHSM_CORE1_CMD_STATUS7 cavm_ehsm_core1_cmd_status7_t
#define bustype_CAVM_EHSM_CORE1_CMD_STATUS7 CSR_TYPE_NCB32b
#define basename_CAVM_EHSM_CORE1_CMD_STATUS7 "EHSM_CORE1_CMD_STATUS7"
#define device_bar_CAVM_EHSM_CORE1_CMD_STATUS7 0x0 /* PF_BAR0 */
#define busnum_CAVM_EHSM_CORE1_CMD_STATUS7 0
#define arguments_CAVM_EHSM_CORE1_CMD_STATUS7 -1,-1,-1,-1

/**
 * Register (NCB32b) ehsm_core1_cmd_status8
 *
 * CORE 1 Command Status 8. Register
 * This register contains status 8 associated with a BCM primitive command from host processor core 1.
 */
union cavm_ehsm_core1_cmd_status8
{
    uint32_t u;
    struct cavm_ehsm_core1_cmd_status8_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t data                  : 32; /**< [ 31:  0](RO) x */
#else /* Word 0 - Little Endian */
        uint32_t data                  : 32; /**< [ 31:  0](RO) x */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_ehsm_core1_cmd_status8_s cn; */
};
typedef union cavm_ehsm_core1_cmd_status8 cavm_ehsm_core1_cmd_status8_t;

#define CAVM_EHSM_CORE1_CMD_STATUS8 CAVM_EHSM_CORE1_CMD_STATUS8_FUNC()
static inline uint64_t CAVM_EHSM_CORE1_CMD_STATUS8_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_EHSM_CORE1_CMD_STATUS8_FUNC(void)
{
    return 0x80b0000000a4ll;
}

#define typedef_CAVM_EHSM_CORE1_CMD_STATUS8 cavm_ehsm_core1_cmd_status8_t
#define bustype_CAVM_EHSM_CORE1_CMD_STATUS8 CSR_TYPE_NCB32b
#define basename_CAVM_EHSM_CORE1_CMD_STATUS8 "EHSM_CORE1_CMD_STATUS8"
#define device_bar_CAVM_EHSM_CORE1_CMD_STATUS8 0x0 /* PF_BAR0 */
#define busnum_CAVM_EHSM_CORE1_CMD_STATUS8 0
#define arguments_CAVM_EHSM_CORE1_CMD_STATUS8 -1,-1,-1,-1

/**
 * Register (NCB32b) ehsm_core1_cmd_status9
 *
 * CORE 1 Command Status 9. Register
 * This register contains status 9 associated with a BCM primitive command from host processor core 1.
 */
union cavm_ehsm_core1_cmd_status9
{
    uint32_t u;
    struct cavm_ehsm_core1_cmd_status9_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t data                  : 32; /**< [ 31:  0](RO) x */
#else /* Word 0 - Little Endian */
        uint32_t data                  : 32; /**< [ 31:  0](RO) x */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_ehsm_core1_cmd_status9_s cn; */
};
typedef union cavm_ehsm_core1_cmd_status9 cavm_ehsm_core1_cmd_status9_t;

#define CAVM_EHSM_CORE1_CMD_STATUS9 CAVM_EHSM_CORE1_CMD_STATUS9_FUNC()
static inline uint64_t CAVM_EHSM_CORE1_CMD_STATUS9_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_EHSM_CORE1_CMD_STATUS9_FUNC(void)
{
    return 0x80b0000000a8ll;
}

#define typedef_CAVM_EHSM_CORE1_CMD_STATUS9 cavm_ehsm_core1_cmd_status9_t
#define bustype_CAVM_EHSM_CORE1_CMD_STATUS9 CSR_TYPE_NCB32b
#define basename_CAVM_EHSM_CORE1_CMD_STATUS9 "EHSM_CORE1_CMD_STATUS9"
#define device_bar_CAVM_EHSM_CORE1_CMD_STATUS9 0x0 /* PF_BAR0 */
#define busnum_CAVM_EHSM_CORE1_CMD_STATUS9 0
#define arguments_CAVM_EHSM_CORE1_CMD_STATUS9 -1,-1,-1,-1

/**
 * Register (NCB32b) ehsm_core1_hst_interrupt_mask
 *
 * CORE 1 Host Interrupt Mask. Register
 * x
 */
union cavm_ehsm_core1_hst_interrupt_mask
{
    uint32_t u;
    struct cavm_ehsm_core1_hst_interrupt_mask_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t data                  : 32; /**< [ 31:  0](R/W) x */
#else /* Word 0 - Little Endian */
        uint32_t data                  : 32; /**< [ 31:  0](R/W) x */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_ehsm_core1_hst_interrupt_mask_s cn; */
};
typedef union cavm_ehsm_core1_hst_interrupt_mask cavm_ehsm_core1_hst_interrupt_mask_t;

#define CAVM_EHSM_CORE1_HST_INTERRUPT_MASK CAVM_EHSM_CORE1_HST_INTERRUPT_MASK_FUNC()
static inline uint64_t CAVM_EHSM_CORE1_HST_INTERRUPT_MASK_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_EHSM_CORE1_HST_INTERRUPT_MASK_FUNC(void)
{
    return 0x80b0000000ccll;
}

#define typedef_CAVM_EHSM_CORE1_HST_INTERRUPT_MASK cavm_ehsm_core1_hst_interrupt_mask_t
#define bustype_CAVM_EHSM_CORE1_HST_INTERRUPT_MASK CSR_TYPE_NCB32b
#define basename_CAVM_EHSM_CORE1_HST_INTERRUPT_MASK "EHSM_CORE1_HST_INTERRUPT_MASK"
#define device_bar_CAVM_EHSM_CORE1_HST_INTERRUPT_MASK 0x0 /* PF_BAR0 */
#define busnum_CAVM_EHSM_CORE1_HST_INTERRUPT_MASK 0
#define arguments_CAVM_EHSM_CORE1_HST_INTERRUPT_MASK -1,-1,-1,-1

/**
 * Register (NCB32b) ehsm_core1_hst_interrupt_rst
 *
 * CORE 1 Host Interrupt Reset. Register
 * x
 */
union cavm_ehsm_core1_hst_interrupt_rst
{
    uint32_t u;
    struct cavm_ehsm_core1_hst_interrupt_rst_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t reserved_18_31        : 14;
        uint32_t cmd_buffer_full_access : 1; /**< [ 17: 17](R/W) When active, this interrupt indicates to the host that an attempt was made to
                                                                 write the command register or the parameter register space when the command
                                                                 buffer of host processor core 1 was full. The command or parameter written is
                                                                 lost, but processing by the secure processor continue on the command or
                                                                 parameter that is already queued. The host can rewrite the command or parameter
                                                                 when CMD buffer of host processor core 1 is empty. Host can read
                                                                 CORE1_CMD_BUFFER_FULL field in CMD_FIFO_STATUS to check if CMD buffer of host
                                                                 processor core 1 is available to be written. */
        uint32_t hst_addr_range        : 1;  /**< [ 16: 16](R/W) This interrupt indicates that the host attempted to access an address to which
                                                                 it is not allowed access. This interrupt also triggers if a write is made to a
                                                                 read-only register, or a read to a write-only register. */
        uint32_t reserved_1_15         : 15;
        uint32_t sp_cmd_cmplt          : 1;  /**< [  0:  0](R/W) When set, this interrupt indicates that the secure processor has completed a
                                                                 primitive issued by host processor core 1. */
#else /* Word 0 - Little Endian */
        uint32_t sp_cmd_cmplt          : 1;  /**< [  0:  0](R/W) When set, this interrupt indicates that the secure processor has completed a
                                                                 primitive issued by host processor core 1. */
        uint32_t reserved_1_15         : 15;
        uint32_t hst_addr_range        : 1;  /**< [ 16: 16](R/W) This interrupt indicates that the host attempted to access an address to which
                                                                 it is not allowed access. This interrupt also triggers if a write is made to a
                                                                 read-only register, or a read to a write-only register. */
        uint32_t cmd_buffer_full_access : 1; /**< [ 17: 17](R/W) When active, this interrupt indicates to the host that an attempt was made to
                                                                 write the command register or the parameter register space when the command
                                                                 buffer of host processor core 1 was full. The command or parameter written is
                                                                 lost, but processing by the secure processor continue on the command or
                                                                 parameter that is already queued. The host can rewrite the command or parameter
                                                                 when CMD buffer of host processor core 1 is empty. Host can read
                                                                 CORE1_CMD_BUFFER_FULL field in CMD_FIFO_STATUS to check if CMD buffer of host
                                                                 processor core 1 is available to be written. */
        uint32_t reserved_18_31        : 14;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_ehsm_core1_hst_interrupt_rst_s cn; */
};
typedef union cavm_ehsm_core1_hst_interrupt_rst cavm_ehsm_core1_hst_interrupt_rst_t;

#define CAVM_EHSM_CORE1_HST_INTERRUPT_RST CAVM_EHSM_CORE1_HST_INTERRUPT_RST_FUNC()
static inline uint64_t CAVM_EHSM_CORE1_HST_INTERRUPT_RST_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_EHSM_CORE1_HST_INTERRUPT_RST_FUNC(void)
{
    return 0x80b0000000c8ll;
}

#define typedef_CAVM_EHSM_CORE1_HST_INTERRUPT_RST cavm_ehsm_core1_hst_interrupt_rst_t
#define bustype_CAVM_EHSM_CORE1_HST_INTERRUPT_RST CSR_TYPE_NCB32b
#define basename_CAVM_EHSM_CORE1_HST_INTERRUPT_RST "EHSM_CORE1_HST_INTERRUPT_RST"
#define device_bar_CAVM_EHSM_CORE1_HST_INTERRUPT_RST 0x0 /* PF_BAR0 */
#define busnum_CAVM_EHSM_CORE1_HST_INTERRUPT_RST 0
#define arguments_CAVM_EHSM_CORE1_HST_INTERRUPT_RST -1,-1,-1,-1

/**
 * Register (NCB32b) ehsm_core2_cmd
 *
 * CORE 2 Secure Processor Command. Register
 * x
 */
union cavm_ehsm_core2_cmd
{
    uint32_t u;
    struct cavm_ehsm_core2_cmd_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t reserved_16_31        : 16;
        uint32_t cmd                   : 16; /**< [ 15:  0](WO) This is the CMD ID value of the primitive command from host processor core 2. */
#else /* Word 0 - Little Endian */
        uint32_t cmd                   : 16; /**< [ 15:  0](WO) This is the CMD ID value of the primitive command from host processor core 2. */
        uint32_t reserved_16_31        : 16;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_ehsm_core2_cmd_s cn; */
};
typedef union cavm_ehsm_core2_cmd cavm_ehsm_core2_cmd_t;

#define CAVM_EHSM_CORE2_CMD CAVM_EHSM_CORE2_CMD_FUNC()
static inline uint64_t CAVM_EHSM_CORE2_CMD_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_EHSM_CORE2_CMD_FUNC(void)
{
    return 0x80b000000180ll;
}

#define typedef_CAVM_EHSM_CORE2_CMD cavm_ehsm_core2_cmd_t
#define bustype_CAVM_EHSM_CORE2_CMD CSR_TYPE_NCB32b
#define basename_CAVM_EHSM_CORE2_CMD "EHSM_CORE2_CMD"
#define device_bar_CAVM_EHSM_CORE2_CMD 0x0 /* PF_BAR0 */
#define busnum_CAVM_EHSM_CORE2_CMD 0
#define arguments_CAVM_EHSM_CORE2_CMD -1,-1,-1,-1

/**
 * Register (NCB32b) ehsm_core2_cmd_param0
 *
 * CORE 2 Command Parameter 0. Register
 * This register contains parameter 0 associated with a BCM primitive command from host
 * processor core 2. There are a total of 16 spaces for primitive command parameters.
 * When the host processor core 1 wants to send a primitive command to BCM, it must
 * first write all the associated parameters (if any). The host parameter writing must
 * start at CORE2_CMD_PARAM0, and then work towards CORE2_CMD_PARAM15. Once all the
 * parameters associated with a primitive command have been written, the host can write
 * the associated primitive command to the CORE2_CMD register. There is no need to
 * write to all 16 parameter spaces, only the number associated with the primitive
 * command need to be written.
 */
union cavm_ehsm_core2_cmd_param0
{
    uint32_t u;
    struct cavm_ehsm_core2_cmd_param0_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t data                  : 32; /**< [ 31:  0](WO) x */
#else /* Word 0 - Little Endian */
        uint32_t data                  : 32; /**< [ 31:  0](WO) x */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_ehsm_core2_cmd_param0_s cn; */
};
typedef union cavm_ehsm_core2_cmd_param0 cavm_ehsm_core2_cmd_param0_t;

#define CAVM_EHSM_CORE2_CMD_PARAM0 CAVM_EHSM_CORE2_CMD_PARAM0_FUNC()
static inline uint64_t CAVM_EHSM_CORE2_CMD_PARAM0_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_EHSM_CORE2_CMD_PARAM0_FUNC(void)
{
    return 0x80b000000140ll;
}

#define typedef_CAVM_EHSM_CORE2_CMD_PARAM0 cavm_ehsm_core2_cmd_param0_t
#define bustype_CAVM_EHSM_CORE2_CMD_PARAM0 CSR_TYPE_NCB32b
#define basename_CAVM_EHSM_CORE2_CMD_PARAM0 "EHSM_CORE2_CMD_PARAM0"
#define device_bar_CAVM_EHSM_CORE2_CMD_PARAM0 0x0 /* PF_BAR0 */
#define busnum_CAVM_EHSM_CORE2_CMD_PARAM0 0
#define arguments_CAVM_EHSM_CORE2_CMD_PARAM0 -1,-1,-1,-1

/**
 * Register (NCB32b) ehsm_core2_cmd_param1
 *
 * CORE 2 Command Parameter 1. Register
 * This register contains parameter 1 associated with a BCM primitive command from host
 * processor core 2.
 */
union cavm_ehsm_core2_cmd_param1
{
    uint32_t u;
    struct cavm_ehsm_core2_cmd_param1_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t data                  : 32; /**< [ 31:  0](WO) x */
#else /* Word 0 - Little Endian */
        uint32_t data                  : 32; /**< [ 31:  0](WO) x */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_ehsm_core2_cmd_param1_s cn; */
};
typedef union cavm_ehsm_core2_cmd_param1 cavm_ehsm_core2_cmd_param1_t;

#define CAVM_EHSM_CORE2_CMD_PARAM1 CAVM_EHSM_CORE2_CMD_PARAM1_FUNC()
static inline uint64_t CAVM_EHSM_CORE2_CMD_PARAM1_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_EHSM_CORE2_CMD_PARAM1_FUNC(void)
{
    return 0x80b000000144ll;
}

#define typedef_CAVM_EHSM_CORE2_CMD_PARAM1 cavm_ehsm_core2_cmd_param1_t
#define bustype_CAVM_EHSM_CORE2_CMD_PARAM1 CSR_TYPE_NCB32b
#define basename_CAVM_EHSM_CORE2_CMD_PARAM1 "EHSM_CORE2_CMD_PARAM1"
#define device_bar_CAVM_EHSM_CORE2_CMD_PARAM1 0x0 /* PF_BAR0 */
#define busnum_CAVM_EHSM_CORE2_CMD_PARAM1 0
#define arguments_CAVM_EHSM_CORE2_CMD_PARAM1 -1,-1,-1,-1

/**
 * Register (NCB32b) ehsm_core2_cmd_param10
 *
 * CORE 2 Command Parameter 10. Register
 * This register contains parameter 10 associated with a BCM primitive command from
 * host processor core 2.
 */
union cavm_ehsm_core2_cmd_param10
{
    uint32_t u;
    struct cavm_ehsm_core2_cmd_param10_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t data                  : 32; /**< [ 31:  0](WO) x */
#else /* Word 0 - Little Endian */
        uint32_t data                  : 32; /**< [ 31:  0](WO) x */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_ehsm_core2_cmd_param10_s cn; */
};
typedef union cavm_ehsm_core2_cmd_param10 cavm_ehsm_core2_cmd_param10_t;

#define CAVM_EHSM_CORE2_CMD_PARAM10 CAVM_EHSM_CORE2_CMD_PARAM10_FUNC()
static inline uint64_t CAVM_EHSM_CORE2_CMD_PARAM10_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_EHSM_CORE2_CMD_PARAM10_FUNC(void)
{
    return 0x80b000000168ll;
}

#define typedef_CAVM_EHSM_CORE2_CMD_PARAM10 cavm_ehsm_core2_cmd_param10_t
#define bustype_CAVM_EHSM_CORE2_CMD_PARAM10 CSR_TYPE_NCB32b
#define basename_CAVM_EHSM_CORE2_CMD_PARAM10 "EHSM_CORE2_CMD_PARAM10"
#define device_bar_CAVM_EHSM_CORE2_CMD_PARAM10 0x0 /* PF_BAR0 */
#define busnum_CAVM_EHSM_CORE2_CMD_PARAM10 0
#define arguments_CAVM_EHSM_CORE2_CMD_PARAM10 -1,-1,-1,-1

/**
 * Register (NCB32b) ehsm_core2_cmd_param11
 *
 * CORE 2 Command Parameter 11. Register
 * This register contains parameter 11 associated with a BCM primitive command from
 * host processor core 2.
 */
union cavm_ehsm_core2_cmd_param11
{
    uint32_t u;
    struct cavm_ehsm_core2_cmd_param11_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t data                  : 32; /**< [ 31:  0](WO) x */
#else /* Word 0 - Little Endian */
        uint32_t data                  : 32; /**< [ 31:  0](WO) x */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_ehsm_core2_cmd_param11_s cn; */
};
typedef union cavm_ehsm_core2_cmd_param11 cavm_ehsm_core2_cmd_param11_t;

#define CAVM_EHSM_CORE2_CMD_PARAM11 CAVM_EHSM_CORE2_CMD_PARAM11_FUNC()
static inline uint64_t CAVM_EHSM_CORE2_CMD_PARAM11_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_EHSM_CORE2_CMD_PARAM11_FUNC(void)
{
    return 0x80b00000016cll;
}

#define typedef_CAVM_EHSM_CORE2_CMD_PARAM11 cavm_ehsm_core2_cmd_param11_t
#define bustype_CAVM_EHSM_CORE2_CMD_PARAM11 CSR_TYPE_NCB32b
#define basename_CAVM_EHSM_CORE2_CMD_PARAM11 "EHSM_CORE2_CMD_PARAM11"
#define device_bar_CAVM_EHSM_CORE2_CMD_PARAM11 0x0 /* PF_BAR0 */
#define busnum_CAVM_EHSM_CORE2_CMD_PARAM11 0
#define arguments_CAVM_EHSM_CORE2_CMD_PARAM11 -1,-1,-1,-1

/**
 * Register (NCB32b) ehsm_core2_cmd_param12
 *
 * CORE 2 Command Parameter 12. Register
 * This register contains parameter 12 associated with a BCM primitive command from
 * host processor core 2.
 */
union cavm_ehsm_core2_cmd_param12
{
    uint32_t u;
    struct cavm_ehsm_core2_cmd_param12_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t data                  : 32; /**< [ 31:  0](WO) x */
#else /* Word 0 - Little Endian */
        uint32_t data                  : 32; /**< [ 31:  0](WO) x */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_ehsm_core2_cmd_param12_s cn; */
};
typedef union cavm_ehsm_core2_cmd_param12 cavm_ehsm_core2_cmd_param12_t;

#define CAVM_EHSM_CORE2_CMD_PARAM12 CAVM_EHSM_CORE2_CMD_PARAM12_FUNC()
static inline uint64_t CAVM_EHSM_CORE2_CMD_PARAM12_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_EHSM_CORE2_CMD_PARAM12_FUNC(void)
{
    return 0x80b000000170ll;
}

#define typedef_CAVM_EHSM_CORE2_CMD_PARAM12 cavm_ehsm_core2_cmd_param12_t
#define bustype_CAVM_EHSM_CORE2_CMD_PARAM12 CSR_TYPE_NCB32b
#define basename_CAVM_EHSM_CORE2_CMD_PARAM12 "EHSM_CORE2_CMD_PARAM12"
#define device_bar_CAVM_EHSM_CORE2_CMD_PARAM12 0x0 /* PF_BAR0 */
#define busnum_CAVM_EHSM_CORE2_CMD_PARAM12 0
#define arguments_CAVM_EHSM_CORE2_CMD_PARAM12 -1,-1,-1,-1

/**
 * Register (NCB32b) ehsm_core2_cmd_param13
 *
 * CORE 2 Command Parameter 13. Register
 * This register contains parameter 13 associated with a BCM primitive command from
 * host processor core 2.
 */
union cavm_ehsm_core2_cmd_param13
{
    uint32_t u;
    struct cavm_ehsm_core2_cmd_param13_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t data                  : 32; /**< [ 31:  0](WO) x */
#else /* Word 0 - Little Endian */
        uint32_t data                  : 32; /**< [ 31:  0](WO) x */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_ehsm_core2_cmd_param13_s cn; */
};
typedef union cavm_ehsm_core2_cmd_param13 cavm_ehsm_core2_cmd_param13_t;

#define CAVM_EHSM_CORE2_CMD_PARAM13 CAVM_EHSM_CORE2_CMD_PARAM13_FUNC()
static inline uint64_t CAVM_EHSM_CORE2_CMD_PARAM13_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_EHSM_CORE2_CMD_PARAM13_FUNC(void)
{
    return 0x80b000000174ll;
}

#define typedef_CAVM_EHSM_CORE2_CMD_PARAM13 cavm_ehsm_core2_cmd_param13_t
#define bustype_CAVM_EHSM_CORE2_CMD_PARAM13 CSR_TYPE_NCB32b
#define basename_CAVM_EHSM_CORE2_CMD_PARAM13 "EHSM_CORE2_CMD_PARAM13"
#define device_bar_CAVM_EHSM_CORE2_CMD_PARAM13 0x0 /* PF_BAR0 */
#define busnum_CAVM_EHSM_CORE2_CMD_PARAM13 0
#define arguments_CAVM_EHSM_CORE2_CMD_PARAM13 -1,-1,-1,-1

/**
 * Register (NCB32b) ehsm_core2_cmd_param14
 *
 * CORE 2 Command Parameter 14. Register
 * This register contains parameter 14 associated with a BCM primitive command from
 * host processor core 2.
 */
union cavm_ehsm_core2_cmd_param14
{
    uint32_t u;
    struct cavm_ehsm_core2_cmd_param14_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t data                  : 32; /**< [ 31:  0](WO) x */
#else /* Word 0 - Little Endian */
        uint32_t data                  : 32; /**< [ 31:  0](WO) x */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_ehsm_core2_cmd_param14_s cn; */
};
typedef union cavm_ehsm_core2_cmd_param14 cavm_ehsm_core2_cmd_param14_t;

#define CAVM_EHSM_CORE2_CMD_PARAM14 CAVM_EHSM_CORE2_CMD_PARAM14_FUNC()
static inline uint64_t CAVM_EHSM_CORE2_CMD_PARAM14_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_EHSM_CORE2_CMD_PARAM14_FUNC(void)
{
    return 0x80b000000178ll;
}

#define typedef_CAVM_EHSM_CORE2_CMD_PARAM14 cavm_ehsm_core2_cmd_param14_t
#define bustype_CAVM_EHSM_CORE2_CMD_PARAM14 CSR_TYPE_NCB32b
#define basename_CAVM_EHSM_CORE2_CMD_PARAM14 "EHSM_CORE2_CMD_PARAM14"
#define device_bar_CAVM_EHSM_CORE2_CMD_PARAM14 0x0 /* PF_BAR0 */
#define busnum_CAVM_EHSM_CORE2_CMD_PARAM14 0
#define arguments_CAVM_EHSM_CORE2_CMD_PARAM14 -1,-1,-1,-1

/**
 * Register (NCB32b) ehsm_core2_cmd_param15
 *
 * CORE 2 Command Parameter 15. Register
 * This register contains parameter 15 associated with a BCM primitive command from
 * host processor core 2.
 */
union cavm_ehsm_core2_cmd_param15
{
    uint32_t u;
    struct cavm_ehsm_core2_cmd_param15_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t data                  : 32; /**< [ 31:  0](WO) x */
#else /* Word 0 - Little Endian */
        uint32_t data                  : 32; /**< [ 31:  0](WO) x */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_ehsm_core2_cmd_param15_s cn; */
};
typedef union cavm_ehsm_core2_cmd_param15 cavm_ehsm_core2_cmd_param15_t;

#define CAVM_EHSM_CORE2_CMD_PARAM15 CAVM_EHSM_CORE2_CMD_PARAM15_FUNC()
static inline uint64_t CAVM_EHSM_CORE2_CMD_PARAM15_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_EHSM_CORE2_CMD_PARAM15_FUNC(void)
{
    return 0x80b00000017cll;
}

#define typedef_CAVM_EHSM_CORE2_CMD_PARAM15 cavm_ehsm_core2_cmd_param15_t
#define bustype_CAVM_EHSM_CORE2_CMD_PARAM15 CSR_TYPE_NCB32b
#define basename_CAVM_EHSM_CORE2_CMD_PARAM15 "EHSM_CORE2_CMD_PARAM15"
#define device_bar_CAVM_EHSM_CORE2_CMD_PARAM15 0x0 /* PF_BAR0 */
#define busnum_CAVM_EHSM_CORE2_CMD_PARAM15 0
#define arguments_CAVM_EHSM_CORE2_CMD_PARAM15 -1,-1,-1,-1

/**
 * Register (NCB32b) ehsm_core2_cmd_param2
 *
 * CORE 2 Command Parameter 2. Register
 * This register contains parameter 2 associated with a BCM primitive command from host
 * processor core 2.
 */
union cavm_ehsm_core2_cmd_param2
{
    uint32_t u;
    struct cavm_ehsm_core2_cmd_param2_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t data                  : 32; /**< [ 31:  0](WO) x */
#else /* Word 0 - Little Endian */
        uint32_t data                  : 32; /**< [ 31:  0](WO) x */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_ehsm_core2_cmd_param2_s cn; */
};
typedef union cavm_ehsm_core2_cmd_param2 cavm_ehsm_core2_cmd_param2_t;

#define CAVM_EHSM_CORE2_CMD_PARAM2 CAVM_EHSM_CORE2_CMD_PARAM2_FUNC()
static inline uint64_t CAVM_EHSM_CORE2_CMD_PARAM2_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_EHSM_CORE2_CMD_PARAM2_FUNC(void)
{
    return 0x80b000000148ll;
}

#define typedef_CAVM_EHSM_CORE2_CMD_PARAM2 cavm_ehsm_core2_cmd_param2_t
#define bustype_CAVM_EHSM_CORE2_CMD_PARAM2 CSR_TYPE_NCB32b
#define basename_CAVM_EHSM_CORE2_CMD_PARAM2 "EHSM_CORE2_CMD_PARAM2"
#define device_bar_CAVM_EHSM_CORE2_CMD_PARAM2 0x0 /* PF_BAR0 */
#define busnum_CAVM_EHSM_CORE2_CMD_PARAM2 0
#define arguments_CAVM_EHSM_CORE2_CMD_PARAM2 -1,-1,-1,-1

/**
 * Register (NCB32b) ehsm_core2_cmd_param3
 *
 * CORE 2 Command Parameter 3. Register
 * This register contains parameter 3 associated with a BCM primitive command from host
 * processor core 2.
 */
union cavm_ehsm_core2_cmd_param3
{
    uint32_t u;
    struct cavm_ehsm_core2_cmd_param3_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t data                  : 32; /**< [ 31:  0](WO) x */
#else /* Word 0 - Little Endian */
        uint32_t data                  : 32; /**< [ 31:  0](WO) x */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_ehsm_core2_cmd_param3_s cn; */
};
typedef union cavm_ehsm_core2_cmd_param3 cavm_ehsm_core2_cmd_param3_t;

#define CAVM_EHSM_CORE2_CMD_PARAM3 CAVM_EHSM_CORE2_CMD_PARAM3_FUNC()
static inline uint64_t CAVM_EHSM_CORE2_CMD_PARAM3_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_EHSM_CORE2_CMD_PARAM3_FUNC(void)
{
    return 0x80b00000014cll;
}

#define typedef_CAVM_EHSM_CORE2_CMD_PARAM3 cavm_ehsm_core2_cmd_param3_t
#define bustype_CAVM_EHSM_CORE2_CMD_PARAM3 CSR_TYPE_NCB32b
#define basename_CAVM_EHSM_CORE2_CMD_PARAM3 "EHSM_CORE2_CMD_PARAM3"
#define device_bar_CAVM_EHSM_CORE2_CMD_PARAM3 0x0 /* PF_BAR0 */
#define busnum_CAVM_EHSM_CORE2_CMD_PARAM3 0
#define arguments_CAVM_EHSM_CORE2_CMD_PARAM3 -1,-1,-1,-1

/**
 * Register (NCB32b) ehsm_core2_cmd_param4
 *
 * CORE 2 Command Parameter 4. Register
 * This register contains parameter 4 associated with a BCM primitive command from host
 * processor core 2.
 */
union cavm_ehsm_core2_cmd_param4
{
    uint32_t u;
    struct cavm_ehsm_core2_cmd_param4_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t data                  : 32; /**< [ 31:  0](WO) x */
#else /* Word 0 - Little Endian */
        uint32_t data                  : 32; /**< [ 31:  0](WO) x */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_ehsm_core2_cmd_param4_s cn; */
};
typedef union cavm_ehsm_core2_cmd_param4 cavm_ehsm_core2_cmd_param4_t;

#define CAVM_EHSM_CORE2_CMD_PARAM4 CAVM_EHSM_CORE2_CMD_PARAM4_FUNC()
static inline uint64_t CAVM_EHSM_CORE2_CMD_PARAM4_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_EHSM_CORE2_CMD_PARAM4_FUNC(void)
{
    return 0x80b000000150ll;
}

#define typedef_CAVM_EHSM_CORE2_CMD_PARAM4 cavm_ehsm_core2_cmd_param4_t
#define bustype_CAVM_EHSM_CORE2_CMD_PARAM4 CSR_TYPE_NCB32b
#define basename_CAVM_EHSM_CORE2_CMD_PARAM4 "EHSM_CORE2_CMD_PARAM4"
#define device_bar_CAVM_EHSM_CORE2_CMD_PARAM4 0x0 /* PF_BAR0 */
#define busnum_CAVM_EHSM_CORE2_CMD_PARAM4 0
#define arguments_CAVM_EHSM_CORE2_CMD_PARAM4 -1,-1,-1,-1

/**
 * Register (NCB32b) ehsm_core2_cmd_param5
 *
 * CORE 2 Command Parameter 5. Register
 * This register contains parameter 5 associated with a BCM primitive command from host
 * processor core 2.
 */
union cavm_ehsm_core2_cmd_param5
{
    uint32_t u;
    struct cavm_ehsm_core2_cmd_param5_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t data                  : 32; /**< [ 31:  0](WO) x */
#else /* Word 0 - Little Endian */
        uint32_t data                  : 32; /**< [ 31:  0](WO) x */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_ehsm_core2_cmd_param5_s cn; */
};
typedef union cavm_ehsm_core2_cmd_param5 cavm_ehsm_core2_cmd_param5_t;

#define CAVM_EHSM_CORE2_CMD_PARAM5 CAVM_EHSM_CORE2_CMD_PARAM5_FUNC()
static inline uint64_t CAVM_EHSM_CORE2_CMD_PARAM5_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_EHSM_CORE2_CMD_PARAM5_FUNC(void)
{
    return 0x80b000000154ll;
}

#define typedef_CAVM_EHSM_CORE2_CMD_PARAM5 cavm_ehsm_core2_cmd_param5_t
#define bustype_CAVM_EHSM_CORE2_CMD_PARAM5 CSR_TYPE_NCB32b
#define basename_CAVM_EHSM_CORE2_CMD_PARAM5 "EHSM_CORE2_CMD_PARAM5"
#define device_bar_CAVM_EHSM_CORE2_CMD_PARAM5 0x0 /* PF_BAR0 */
#define busnum_CAVM_EHSM_CORE2_CMD_PARAM5 0
#define arguments_CAVM_EHSM_CORE2_CMD_PARAM5 -1,-1,-1,-1

/**
 * Register (NCB32b) ehsm_core2_cmd_param6
 *
 * CORE 2 Command Parameter 6. Register
 * This register contains parameter 6 associated with a BCM primitive command from host
 * processor core 2.
 */
union cavm_ehsm_core2_cmd_param6
{
    uint32_t u;
    struct cavm_ehsm_core2_cmd_param6_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t data                  : 32; /**< [ 31:  0](WO) x */
#else /* Word 0 - Little Endian */
        uint32_t data                  : 32; /**< [ 31:  0](WO) x */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_ehsm_core2_cmd_param6_s cn; */
};
typedef union cavm_ehsm_core2_cmd_param6 cavm_ehsm_core2_cmd_param6_t;

#define CAVM_EHSM_CORE2_CMD_PARAM6 CAVM_EHSM_CORE2_CMD_PARAM6_FUNC()
static inline uint64_t CAVM_EHSM_CORE2_CMD_PARAM6_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_EHSM_CORE2_CMD_PARAM6_FUNC(void)
{
    return 0x80b000000158ll;
}

#define typedef_CAVM_EHSM_CORE2_CMD_PARAM6 cavm_ehsm_core2_cmd_param6_t
#define bustype_CAVM_EHSM_CORE2_CMD_PARAM6 CSR_TYPE_NCB32b
#define basename_CAVM_EHSM_CORE2_CMD_PARAM6 "EHSM_CORE2_CMD_PARAM6"
#define device_bar_CAVM_EHSM_CORE2_CMD_PARAM6 0x0 /* PF_BAR0 */
#define busnum_CAVM_EHSM_CORE2_CMD_PARAM6 0
#define arguments_CAVM_EHSM_CORE2_CMD_PARAM6 -1,-1,-1,-1

/**
 * Register (NCB32b) ehsm_core2_cmd_param7
 *
 * CORE 2 Command Parameter 7. Register
 * This register contains parameter 7 associated with a BCM primitive command from host
 * processor core 2.
 */
union cavm_ehsm_core2_cmd_param7
{
    uint32_t u;
    struct cavm_ehsm_core2_cmd_param7_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t data                  : 32; /**< [ 31:  0](WO) x */
#else /* Word 0 - Little Endian */
        uint32_t data                  : 32; /**< [ 31:  0](WO) x */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_ehsm_core2_cmd_param7_s cn; */
};
typedef union cavm_ehsm_core2_cmd_param7 cavm_ehsm_core2_cmd_param7_t;

#define CAVM_EHSM_CORE2_CMD_PARAM7 CAVM_EHSM_CORE2_CMD_PARAM7_FUNC()
static inline uint64_t CAVM_EHSM_CORE2_CMD_PARAM7_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_EHSM_CORE2_CMD_PARAM7_FUNC(void)
{
    return 0x80b00000015cll;
}

#define typedef_CAVM_EHSM_CORE2_CMD_PARAM7 cavm_ehsm_core2_cmd_param7_t
#define bustype_CAVM_EHSM_CORE2_CMD_PARAM7 CSR_TYPE_NCB32b
#define basename_CAVM_EHSM_CORE2_CMD_PARAM7 "EHSM_CORE2_CMD_PARAM7"
#define device_bar_CAVM_EHSM_CORE2_CMD_PARAM7 0x0 /* PF_BAR0 */
#define busnum_CAVM_EHSM_CORE2_CMD_PARAM7 0
#define arguments_CAVM_EHSM_CORE2_CMD_PARAM7 -1,-1,-1,-1

/**
 * Register (NCB32b) ehsm_core2_cmd_param8
 *
 * CORE 2 Command Parameter 8. Register
 * This register contains parameter 8 associated with a BCM primitive command from host
 * processor core 2.
 */
union cavm_ehsm_core2_cmd_param8
{
    uint32_t u;
    struct cavm_ehsm_core2_cmd_param8_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t data                  : 32; /**< [ 31:  0](WO) x */
#else /* Word 0 - Little Endian */
        uint32_t data                  : 32; /**< [ 31:  0](WO) x */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_ehsm_core2_cmd_param8_s cn; */
};
typedef union cavm_ehsm_core2_cmd_param8 cavm_ehsm_core2_cmd_param8_t;

#define CAVM_EHSM_CORE2_CMD_PARAM8 CAVM_EHSM_CORE2_CMD_PARAM8_FUNC()
static inline uint64_t CAVM_EHSM_CORE2_CMD_PARAM8_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_EHSM_CORE2_CMD_PARAM8_FUNC(void)
{
    return 0x80b000000160ll;
}

#define typedef_CAVM_EHSM_CORE2_CMD_PARAM8 cavm_ehsm_core2_cmd_param8_t
#define bustype_CAVM_EHSM_CORE2_CMD_PARAM8 CSR_TYPE_NCB32b
#define basename_CAVM_EHSM_CORE2_CMD_PARAM8 "EHSM_CORE2_CMD_PARAM8"
#define device_bar_CAVM_EHSM_CORE2_CMD_PARAM8 0x0 /* PF_BAR0 */
#define busnum_CAVM_EHSM_CORE2_CMD_PARAM8 0
#define arguments_CAVM_EHSM_CORE2_CMD_PARAM8 -1,-1,-1,-1

/**
 * Register (NCB32b) ehsm_core2_cmd_param9
 *
 * CORE 2 Command Parameter 9. Register
 * This register contains parameter 9 associated with a BCM primitive command from host
 * processor core 2.
 */
union cavm_ehsm_core2_cmd_param9
{
    uint32_t u;
    struct cavm_ehsm_core2_cmd_param9_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t data                  : 32; /**< [ 31:  0](WO) x */
#else /* Word 0 - Little Endian */
        uint32_t data                  : 32; /**< [ 31:  0](WO) x */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_ehsm_core2_cmd_param9_s cn; */
};
typedef union cavm_ehsm_core2_cmd_param9 cavm_ehsm_core2_cmd_param9_t;

#define CAVM_EHSM_CORE2_CMD_PARAM9 CAVM_EHSM_CORE2_CMD_PARAM9_FUNC()
static inline uint64_t CAVM_EHSM_CORE2_CMD_PARAM9_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_EHSM_CORE2_CMD_PARAM9_FUNC(void)
{
    return 0x80b000000164ll;
}

#define typedef_CAVM_EHSM_CORE2_CMD_PARAM9 cavm_ehsm_core2_cmd_param9_t
#define bustype_CAVM_EHSM_CORE2_CMD_PARAM9 CSR_TYPE_NCB32b
#define basename_CAVM_EHSM_CORE2_CMD_PARAM9 "EHSM_CORE2_CMD_PARAM9"
#define device_bar_CAVM_EHSM_CORE2_CMD_PARAM9 0x0 /* PF_BAR0 */
#define busnum_CAVM_EHSM_CORE2_CMD_PARAM9 0
#define arguments_CAVM_EHSM_CORE2_CMD_PARAM9 -1,-1,-1,-1

/**
 * Register (NCB32b) ehsm_core2_cmd_ret_status
 *
 * CORE 2 Command Return Status. Register
 * This register contains return status associated with a BCM primitive command from
 * host processor core 2.
 */
union cavm_ehsm_core2_cmd_ret_status
{
    uint32_t u;
    struct cavm_ehsm_core2_cmd_ret_status_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t data                  : 32; /**< [ 31:  0](RO) x */
#else /* Word 0 - Little Endian */
        uint32_t data                  : 32; /**< [ 31:  0](RO) x */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_ehsm_core2_cmd_ret_status_s cn; */
};
typedef union cavm_ehsm_core2_cmd_ret_status cavm_ehsm_core2_cmd_ret_status_t;

#define CAVM_EHSM_CORE2_CMD_RET_STATUS CAVM_EHSM_CORE2_CMD_RET_STATUS_FUNC()
static inline uint64_t CAVM_EHSM_CORE2_CMD_RET_STATUS_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_EHSM_CORE2_CMD_RET_STATUS_FUNC(void)
{
    return 0x80b0000001a0ll;
}

#define typedef_CAVM_EHSM_CORE2_CMD_RET_STATUS cavm_ehsm_core2_cmd_ret_status_t
#define bustype_CAVM_EHSM_CORE2_CMD_RET_STATUS CSR_TYPE_NCB32b
#define basename_CAVM_EHSM_CORE2_CMD_RET_STATUS "EHSM_CORE2_CMD_RET_STATUS"
#define device_bar_CAVM_EHSM_CORE2_CMD_RET_STATUS 0x0 /* PF_BAR0 */
#define busnum_CAVM_EHSM_CORE2_CMD_RET_STATUS 0
#define arguments_CAVM_EHSM_CORE2_CMD_RET_STATUS -1,-1,-1,-1

/**
 * Register (NCB32b) ehsm_core2_cmd_status0
 *
 * CORE 2 Command Status 0. Register
 * This register contains status 0 associated with a BCM primitive command from host processor core 2.
 */
union cavm_ehsm_core2_cmd_status0
{
    uint32_t u;
    struct cavm_ehsm_core2_cmd_status0_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t data                  : 32; /**< [ 31:  0](RO) x */
#else /* Word 0 - Little Endian */
        uint32_t data                  : 32; /**< [ 31:  0](RO) x */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_ehsm_core2_cmd_status0_s cn; */
};
typedef union cavm_ehsm_core2_cmd_status0 cavm_ehsm_core2_cmd_status0_t;

#define CAVM_EHSM_CORE2_CMD_STATUS0 CAVM_EHSM_CORE2_CMD_STATUS0_FUNC()
static inline uint64_t CAVM_EHSM_CORE2_CMD_STATUS0_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_EHSM_CORE2_CMD_STATUS0_FUNC(void)
{
    return 0x80b0000001a4ll;
}

#define typedef_CAVM_EHSM_CORE2_CMD_STATUS0 cavm_ehsm_core2_cmd_status0_t
#define bustype_CAVM_EHSM_CORE2_CMD_STATUS0 CSR_TYPE_NCB32b
#define basename_CAVM_EHSM_CORE2_CMD_STATUS0 "EHSM_CORE2_CMD_STATUS0"
#define device_bar_CAVM_EHSM_CORE2_CMD_STATUS0 0x0 /* PF_BAR0 */
#define busnum_CAVM_EHSM_CORE2_CMD_STATUS0 0
#define arguments_CAVM_EHSM_CORE2_CMD_STATUS0 -1,-1,-1,-1

/**
 * Register (NCB32b) ehsm_core2_cmd_status1
 *
 * CORE 2 Command Status 1. Register
 * This register contains status 1 associated with a BCM primitive command from host processor core 2.
 */
union cavm_ehsm_core2_cmd_status1
{
    uint32_t u;
    struct cavm_ehsm_core2_cmd_status1_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t data                  : 32; /**< [ 31:  0](RO) x */
#else /* Word 0 - Little Endian */
        uint32_t data                  : 32; /**< [ 31:  0](RO) x */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_ehsm_core2_cmd_status1_s cn; */
};
typedef union cavm_ehsm_core2_cmd_status1 cavm_ehsm_core2_cmd_status1_t;

#define CAVM_EHSM_CORE2_CMD_STATUS1 CAVM_EHSM_CORE2_CMD_STATUS1_FUNC()
static inline uint64_t CAVM_EHSM_CORE2_CMD_STATUS1_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_EHSM_CORE2_CMD_STATUS1_FUNC(void)
{
    return 0x80b0000001a8ll;
}

#define typedef_CAVM_EHSM_CORE2_CMD_STATUS1 cavm_ehsm_core2_cmd_status1_t
#define bustype_CAVM_EHSM_CORE2_CMD_STATUS1 CSR_TYPE_NCB32b
#define basename_CAVM_EHSM_CORE2_CMD_STATUS1 "EHSM_CORE2_CMD_STATUS1"
#define device_bar_CAVM_EHSM_CORE2_CMD_STATUS1 0x0 /* PF_BAR0 */
#define busnum_CAVM_EHSM_CORE2_CMD_STATUS1 0
#define arguments_CAVM_EHSM_CORE2_CMD_STATUS1 -1,-1,-1,-1

/**
 * Register (NCB32b) ehsm_core2_cmd_status10
 *
 * CORE 2 Command Status 10. Register
 * This register contains status 10 associated with a BCM primitive command from host
 * processor core 2.
 */
union cavm_ehsm_core2_cmd_status10
{
    uint32_t u;
    struct cavm_ehsm_core2_cmd_status10_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t data                  : 32; /**< [ 31:  0](RO) x */
#else /* Word 0 - Little Endian */
        uint32_t data                  : 32; /**< [ 31:  0](RO) x */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_ehsm_core2_cmd_status10_s cn; */
};
typedef union cavm_ehsm_core2_cmd_status10 cavm_ehsm_core2_cmd_status10_t;

#define CAVM_EHSM_CORE2_CMD_STATUS10 CAVM_EHSM_CORE2_CMD_STATUS10_FUNC()
static inline uint64_t CAVM_EHSM_CORE2_CMD_STATUS10_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_EHSM_CORE2_CMD_STATUS10_FUNC(void)
{
    return 0x80b0000001ccll;
}

#define typedef_CAVM_EHSM_CORE2_CMD_STATUS10 cavm_ehsm_core2_cmd_status10_t
#define bustype_CAVM_EHSM_CORE2_CMD_STATUS10 CSR_TYPE_NCB32b
#define basename_CAVM_EHSM_CORE2_CMD_STATUS10 "EHSM_CORE2_CMD_STATUS10"
#define device_bar_CAVM_EHSM_CORE2_CMD_STATUS10 0x0 /* PF_BAR0 */
#define busnum_CAVM_EHSM_CORE2_CMD_STATUS10 0
#define arguments_CAVM_EHSM_CORE2_CMD_STATUS10 -1,-1,-1,-1

/**
 * Register (NCB32b) ehsm_core2_cmd_status11
 *
 * CORE 2 Command Status 11. Register
 * This register contains status 11 associated with a BCM primitive command from host
 * processor core 2.
 */
union cavm_ehsm_core2_cmd_status11
{
    uint32_t u;
    struct cavm_ehsm_core2_cmd_status11_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t data                  : 32; /**< [ 31:  0](RO) x */
#else /* Word 0 - Little Endian */
        uint32_t data                  : 32; /**< [ 31:  0](RO) x */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_ehsm_core2_cmd_status11_s cn; */
};
typedef union cavm_ehsm_core2_cmd_status11 cavm_ehsm_core2_cmd_status11_t;

#define CAVM_EHSM_CORE2_CMD_STATUS11 CAVM_EHSM_CORE2_CMD_STATUS11_FUNC()
static inline uint64_t CAVM_EHSM_CORE2_CMD_STATUS11_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_EHSM_CORE2_CMD_STATUS11_FUNC(void)
{
    return 0x80b0000001d0ll;
}

#define typedef_CAVM_EHSM_CORE2_CMD_STATUS11 cavm_ehsm_core2_cmd_status11_t
#define bustype_CAVM_EHSM_CORE2_CMD_STATUS11 CSR_TYPE_NCB32b
#define basename_CAVM_EHSM_CORE2_CMD_STATUS11 "EHSM_CORE2_CMD_STATUS11"
#define device_bar_CAVM_EHSM_CORE2_CMD_STATUS11 0x0 /* PF_BAR0 */
#define busnum_CAVM_EHSM_CORE2_CMD_STATUS11 0
#define arguments_CAVM_EHSM_CORE2_CMD_STATUS11 -1,-1,-1,-1

/**
 * Register (NCB32b) ehsm_core2_cmd_status12
 *
 * CORE 2 Command Status 12. Register
 * This register contains status 12 associated with a BCM primitive command from host
 * processor core 2.
 */
union cavm_ehsm_core2_cmd_status12
{
    uint32_t u;
    struct cavm_ehsm_core2_cmd_status12_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t data                  : 32; /**< [ 31:  0](RO) x */
#else /* Word 0 - Little Endian */
        uint32_t data                  : 32; /**< [ 31:  0](RO) x */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_ehsm_core2_cmd_status12_s cn; */
};
typedef union cavm_ehsm_core2_cmd_status12 cavm_ehsm_core2_cmd_status12_t;

#define CAVM_EHSM_CORE2_CMD_STATUS12 CAVM_EHSM_CORE2_CMD_STATUS12_FUNC()
static inline uint64_t CAVM_EHSM_CORE2_CMD_STATUS12_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_EHSM_CORE2_CMD_STATUS12_FUNC(void)
{
    return 0x80b0000001d4ll;
}

#define typedef_CAVM_EHSM_CORE2_CMD_STATUS12 cavm_ehsm_core2_cmd_status12_t
#define bustype_CAVM_EHSM_CORE2_CMD_STATUS12 CSR_TYPE_NCB32b
#define basename_CAVM_EHSM_CORE2_CMD_STATUS12 "EHSM_CORE2_CMD_STATUS12"
#define device_bar_CAVM_EHSM_CORE2_CMD_STATUS12 0x0 /* PF_BAR0 */
#define busnum_CAVM_EHSM_CORE2_CMD_STATUS12 0
#define arguments_CAVM_EHSM_CORE2_CMD_STATUS12 -1,-1,-1,-1

/**
 * Register (NCB32b) ehsm_core2_cmd_status13
 *
 * CORE 2 Command Status 13. Register
 * This register contains status 13 associated with a BCM primitive command from host
 * processor core 2.
 */
union cavm_ehsm_core2_cmd_status13
{
    uint32_t u;
    struct cavm_ehsm_core2_cmd_status13_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t data                  : 32; /**< [ 31:  0](RO) x */
#else /* Word 0 - Little Endian */
        uint32_t data                  : 32; /**< [ 31:  0](RO) x */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_ehsm_core2_cmd_status13_s cn; */
};
typedef union cavm_ehsm_core2_cmd_status13 cavm_ehsm_core2_cmd_status13_t;

#define CAVM_EHSM_CORE2_CMD_STATUS13 CAVM_EHSM_CORE2_CMD_STATUS13_FUNC()
static inline uint64_t CAVM_EHSM_CORE2_CMD_STATUS13_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_EHSM_CORE2_CMD_STATUS13_FUNC(void)
{
    return 0x80b0000001d8ll;
}

#define typedef_CAVM_EHSM_CORE2_CMD_STATUS13 cavm_ehsm_core2_cmd_status13_t
#define bustype_CAVM_EHSM_CORE2_CMD_STATUS13 CSR_TYPE_NCB32b
#define basename_CAVM_EHSM_CORE2_CMD_STATUS13 "EHSM_CORE2_CMD_STATUS13"
#define device_bar_CAVM_EHSM_CORE2_CMD_STATUS13 0x0 /* PF_BAR0 */
#define busnum_CAVM_EHSM_CORE2_CMD_STATUS13 0
#define arguments_CAVM_EHSM_CORE2_CMD_STATUS13 -1,-1,-1,-1

/**
 * Register (NCB32b) ehsm_core2_cmd_status14
 *
 * CORE 2 Command Status 14. Register
 * This register contains status 14 associated with a BCM primitive command from host
 * processor core 2.
 */
union cavm_ehsm_core2_cmd_status14
{
    uint32_t u;
    struct cavm_ehsm_core2_cmd_status14_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t data                  : 32; /**< [ 31:  0](RO) x */
#else /* Word 0 - Little Endian */
        uint32_t data                  : 32; /**< [ 31:  0](RO) x */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_ehsm_core2_cmd_status14_s cn; */
};
typedef union cavm_ehsm_core2_cmd_status14 cavm_ehsm_core2_cmd_status14_t;

#define CAVM_EHSM_CORE2_CMD_STATUS14 CAVM_EHSM_CORE2_CMD_STATUS14_FUNC()
static inline uint64_t CAVM_EHSM_CORE2_CMD_STATUS14_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_EHSM_CORE2_CMD_STATUS14_FUNC(void)
{
    return 0x80b0000001dcll;
}

#define typedef_CAVM_EHSM_CORE2_CMD_STATUS14 cavm_ehsm_core2_cmd_status14_t
#define bustype_CAVM_EHSM_CORE2_CMD_STATUS14 CSR_TYPE_NCB32b
#define basename_CAVM_EHSM_CORE2_CMD_STATUS14 "EHSM_CORE2_CMD_STATUS14"
#define device_bar_CAVM_EHSM_CORE2_CMD_STATUS14 0x0 /* PF_BAR0 */
#define busnum_CAVM_EHSM_CORE2_CMD_STATUS14 0
#define arguments_CAVM_EHSM_CORE2_CMD_STATUS14 -1,-1,-1,-1

/**
 * Register (NCB32b) ehsm_core2_cmd_status15
 *
 * CORE 2 Command Status 15. Register
 * This register contains status 15 associated with a BCM primitive command from host
 * processor core 2.
 */
union cavm_ehsm_core2_cmd_status15
{
    uint32_t u;
    struct cavm_ehsm_core2_cmd_status15_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t data                  : 32; /**< [ 31:  0](RO) x */
#else /* Word 0 - Little Endian */
        uint32_t data                  : 32; /**< [ 31:  0](RO) x */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_ehsm_core2_cmd_status15_s cn; */
};
typedef union cavm_ehsm_core2_cmd_status15 cavm_ehsm_core2_cmd_status15_t;

#define CAVM_EHSM_CORE2_CMD_STATUS15 CAVM_EHSM_CORE2_CMD_STATUS15_FUNC()
static inline uint64_t CAVM_EHSM_CORE2_CMD_STATUS15_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_EHSM_CORE2_CMD_STATUS15_FUNC(void)
{
    return 0x80b0000001e0ll;
}

#define typedef_CAVM_EHSM_CORE2_CMD_STATUS15 cavm_ehsm_core2_cmd_status15_t
#define bustype_CAVM_EHSM_CORE2_CMD_STATUS15 CSR_TYPE_NCB32b
#define basename_CAVM_EHSM_CORE2_CMD_STATUS15 "EHSM_CORE2_CMD_STATUS15"
#define device_bar_CAVM_EHSM_CORE2_CMD_STATUS15 0x0 /* PF_BAR0 */
#define busnum_CAVM_EHSM_CORE2_CMD_STATUS15 0
#define arguments_CAVM_EHSM_CORE2_CMD_STATUS15 -1,-1,-1,-1

/**
 * Register (NCB32b) ehsm_core2_cmd_status2
 *
 * CORE 2 Command Status 2. Register
 * This register contains status 2 associated with a BCM primitive command from host processor core 2.
 */
union cavm_ehsm_core2_cmd_status2
{
    uint32_t u;
    struct cavm_ehsm_core2_cmd_status2_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t data                  : 32; /**< [ 31:  0](RO) x */
#else /* Word 0 - Little Endian */
        uint32_t data                  : 32; /**< [ 31:  0](RO) x */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_ehsm_core2_cmd_status2_s cn; */
};
typedef union cavm_ehsm_core2_cmd_status2 cavm_ehsm_core2_cmd_status2_t;

#define CAVM_EHSM_CORE2_CMD_STATUS2 CAVM_EHSM_CORE2_CMD_STATUS2_FUNC()
static inline uint64_t CAVM_EHSM_CORE2_CMD_STATUS2_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_EHSM_CORE2_CMD_STATUS2_FUNC(void)
{
    return 0x80b0000001acll;
}

#define typedef_CAVM_EHSM_CORE2_CMD_STATUS2 cavm_ehsm_core2_cmd_status2_t
#define bustype_CAVM_EHSM_CORE2_CMD_STATUS2 CSR_TYPE_NCB32b
#define basename_CAVM_EHSM_CORE2_CMD_STATUS2 "EHSM_CORE2_CMD_STATUS2"
#define device_bar_CAVM_EHSM_CORE2_CMD_STATUS2 0x0 /* PF_BAR0 */
#define busnum_CAVM_EHSM_CORE2_CMD_STATUS2 0
#define arguments_CAVM_EHSM_CORE2_CMD_STATUS2 -1,-1,-1,-1

/**
 * Register (NCB32b) ehsm_core2_cmd_status3
 *
 * CORE 2 Command Status 3. Register
 * This register contains status 3 associated with a BCM primitive command from host processor core 2.
 */
union cavm_ehsm_core2_cmd_status3
{
    uint32_t u;
    struct cavm_ehsm_core2_cmd_status3_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t data                  : 32; /**< [ 31:  0](RO) x */
#else /* Word 0 - Little Endian */
        uint32_t data                  : 32; /**< [ 31:  0](RO) x */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_ehsm_core2_cmd_status3_s cn; */
};
typedef union cavm_ehsm_core2_cmd_status3 cavm_ehsm_core2_cmd_status3_t;

#define CAVM_EHSM_CORE2_CMD_STATUS3 CAVM_EHSM_CORE2_CMD_STATUS3_FUNC()
static inline uint64_t CAVM_EHSM_CORE2_CMD_STATUS3_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_EHSM_CORE2_CMD_STATUS3_FUNC(void)
{
    return 0x80b0000001b0ll;
}

#define typedef_CAVM_EHSM_CORE2_CMD_STATUS3 cavm_ehsm_core2_cmd_status3_t
#define bustype_CAVM_EHSM_CORE2_CMD_STATUS3 CSR_TYPE_NCB32b
#define basename_CAVM_EHSM_CORE2_CMD_STATUS3 "EHSM_CORE2_CMD_STATUS3"
#define device_bar_CAVM_EHSM_CORE2_CMD_STATUS3 0x0 /* PF_BAR0 */
#define busnum_CAVM_EHSM_CORE2_CMD_STATUS3 0
#define arguments_CAVM_EHSM_CORE2_CMD_STATUS3 -1,-1,-1,-1

/**
 * Register (NCB32b) ehsm_core2_cmd_status4
 *
 * CORE 2 Command Status 4. Register
 * This register contains status 4 associated with a BCM primitive command from host processor core 2.
 */
union cavm_ehsm_core2_cmd_status4
{
    uint32_t u;
    struct cavm_ehsm_core2_cmd_status4_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t data                  : 32; /**< [ 31:  0](RO) x */
#else /* Word 0 - Little Endian */
        uint32_t data                  : 32; /**< [ 31:  0](RO) x */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_ehsm_core2_cmd_status4_s cn; */
};
typedef union cavm_ehsm_core2_cmd_status4 cavm_ehsm_core2_cmd_status4_t;

#define CAVM_EHSM_CORE2_CMD_STATUS4 CAVM_EHSM_CORE2_CMD_STATUS4_FUNC()
static inline uint64_t CAVM_EHSM_CORE2_CMD_STATUS4_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_EHSM_CORE2_CMD_STATUS4_FUNC(void)
{
    return 0x80b0000001b4ll;
}

#define typedef_CAVM_EHSM_CORE2_CMD_STATUS4 cavm_ehsm_core2_cmd_status4_t
#define bustype_CAVM_EHSM_CORE2_CMD_STATUS4 CSR_TYPE_NCB32b
#define basename_CAVM_EHSM_CORE2_CMD_STATUS4 "EHSM_CORE2_CMD_STATUS4"
#define device_bar_CAVM_EHSM_CORE2_CMD_STATUS4 0x0 /* PF_BAR0 */
#define busnum_CAVM_EHSM_CORE2_CMD_STATUS4 0
#define arguments_CAVM_EHSM_CORE2_CMD_STATUS4 -1,-1,-1,-1

/**
 * Register (NCB32b) ehsm_core2_cmd_status5
 *
 * CORE 2 Command Status 5. Register
 * This register contains status 5 associated with a BCM primitive command from host processor core 2.
 */
union cavm_ehsm_core2_cmd_status5
{
    uint32_t u;
    struct cavm_ehsm_core2_cmd_status5_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t data                  : 32; /**< [ 31:  0](RO) x */
#else /* Word 0 - Little Endian */
        uint32_t data                  : 32; /**< [ 31:  0](RO) x */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_ehsm_core2_cmd_status5_s cn; */
};
typedef union cavm_ehsm_core2_cmd_status5 cavm_ehsm_core2_cmd_status5_t;

#define CAVM_EHSM_CORE2_CMD_STATUS5 CAVM_EHSM_CORE2_CMD_STATUS5_FUNC()
static inline uint64_t CAVM_EHSM_CORE2_CMD_STATUS5_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_EHSM_CORE2_CMD_STATUS5_FUNC(void)
{
    return 0x80b0000001b8ll;
}

#define typedef_CAVM_EHSM_CORE2_CMD_STATUS5 cavm_ehsm_core2_cmd_status5_t
#define bustype_CAVM_EHSM_CORE2_CMD_STATUS5 CSR_TYPE_NCB32b
#define basename_CAVM_EHSM_CORE2_CMD_STATUS5 "EHSM_CORE2_CMD_STATUS5"
#define device_bar_CAVM_EHSM_CORE2_CMD_STATUS5 0x0 /* PF_BAR0 */
#define busnum_CAVM_EHSM_CORE2_CMD_STATUS5 0
#define arguments_CAVM_EHSM_CORE2_CMD_STATUS5 -1,-1,-1,-1

/**
 * Register (NCB32b) ehsm_core2_cmd_status6
 *
 * CORE 2 Command Status 6. Register
 * This register contains status 6 associated with a BCM primitive command from host processor core 2.
 */
union cavm_ehsm_core2_cmd_status6
{
    uint32_t u;
    struct cavm_ehsm_core2_cmd_status6_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t data                  : 32; /**< [ 31:  0](RO) x */
#else /* Word 0 - Little Endian */
        uint32_t data                  : 32; /**< [ 31:  0](RO) x */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_ehsm_core2_cmd_status6_s cn; */
};
typedef union cavm_ehsm_core2_cmd_status6 cavm_ehsm_core2_cmd_status6_t;

#define CAVM_EHSM_CORE2_CMD_STATUS6 CAVM_EHSM_CORE2_CMD_STATUS6_FUNC()
static inline uint64_t CAVM_EHSM_CORE2_CMD_STATUS6_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_EHSM_CORE2_CMD_STATUS6_FUNC(void)
{
    return 0x80b0000001bcll;
}

#define typedef_CAVM_EHSM_CORE2_CMD_STATUS6 cavm_ehsm_core2_cmd_status6_t
#define bustype_CAVM_EHSM_CORE2_CMD_STATUS6 CSR_TYPE_NCB32b
#define basename_CAVM_EHSM_CORE2_CMD_STATUS6 "EHSM_CORE2_CMD_STATUS6"
#define device_bar_CAVM_EHSM_CORE2_CMD_STATUS6 0x0 /* PF_BAR0 */
#define busnum_CAVM_EHSM_CORE2_CMD_STATUS6 0
#define arguments_CAVM_EHSM_CORE2_CMD_STATUS6 -1,-1,-1,-1

/**
 * Register (NCB32b) ehsm_core2_cmd_status7
 *
 * CORE 2 Command Status 7. Register
 * This register contains status 7 associated with a BCM primitive command from host processor core 2.
 */
union cavm_ehsm_core2_cmd_status7
{
    uint32_t u;
    struct cavm_ehsm_core2_cmd_status7_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t data                  : 32; /**< [ 31:  0](RO) x */
#else /* Word 0 - Little Endian */
        uint32_t data                  : 32; /**< [ 31:  0](RO) x */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_ehsm_core2_cmd_status7_s cn; */
};
typedef union cavm_ehsm_core2_cmd_status7 cavm_ehsm_core2_cmd_status7_t;

#define CAVM_EHSM_CORE2_CMD_STATUS7 CAVM_EHSM_CORE2_CMD_STATUS7_FUNC()
static inline uint64_t CAVM_EHSM_CORE2_CMD_STATUS7_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_EHSM_CORE2_CMD_STATUS7_FUNC(void)
{
    return 0x80b0000001c0ll;
}

#define typedef_CAVM_EHSM_CORE2_CMD_STATUS7 cavm_ehsm_core2_cmd_status7_t
#define bustype_CAVM_EHSM_CORE2_CMD_STATUS7 CSR_TYPE_NCB32b
#define basename_CAVM_EHSM_CORE2_CMD_STATUS7 "EHSM_CORE2_CMD_STATUS7"
#define device_bar_CAVM_EHSM_CORE2_CMD_STATUS7 0x0 /* PF_BAR0 */
#define busnum_CAVM_EHSM_CORE2_CMD_STATUS7 0
#define arguments_CAVM_EHSM_CORE2_CMD_STATUS7 -1,-1,-1,-1

/**
 * Register (NCB32b) ehsm_core2_cmd_status8
 *
 * CORE 2 Command Status 8. Register
 * This register contains status 8 associated with a BCM primitive command from host processor core 2.
 */
union cavm_ehsm_core2_cmd_status8
{
    uint32_t u;
    struct cavm_ehsm_core2_cmd_status8_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t data                  : 32; /**< [ 31:  0](RO) x */
#else /* Word 0 - Little Endian */
        uint32_t data                  : 32; /**< [ 31:  0](RO) x */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_ehsm_core2_cmd_status8_s cn; */
};
typedef union cavm_ehsm_core2_cmd_status8 cavm_ehsm_core2_cmd_status8_t;

#define CAVM_EHSM_CORE2_CMD_STATUS8 CAVM_EHSM_CORE2_CMD_STATUS8_FUNC()
static inline uint64_t CAVM_EHSM_CORE2_CMD_STATUS8_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_EHSM_CORE2_CMD_STATUS8_FUNC(void)
{
    return 0x80b0000001c4ll;
}

#define typedef_CAVM_EHSM_CORE2_CMD_STATUS8 cavm_ehsm_core2_cmd_status8_t
#define bustype_CAVM_EHSM_CORE2_CMD_STATUS8 CSR_TYPE_NCB32b
#define basename_CAVM_EHSM_CORE2_CMD_STATUS8 "EHSM_CORE2_CMD_STATUS8"
#define device_bar_CAVM_EHSM_CORE2_CMD_STATUS8 0x0 /* PF_BAR0 */
#define busnum_CAVM_EHSM_CORE2_CMD_STATUS8 0
#define arguments_CAVM_EHSM_CORE2_CMD_STATUS8 -1,-1,-1,-1

/**
 * Register (NCB32b) ehsm_core2_cmd_status9
 *
 * CORE 2 Command Status 9. Register
 * This register contains status 9 associated with a BCM primitive command from host processor core 2.
 */
union cavm_ehsm_core2_cmd_status9
{
    uint32_t u;
    struct cavm_ehsm_core2_cmd_status9_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t data                  : 32; /**< [ 31:  0](RO) x */
#else /* Word 0 - Little Endian */
        uint32_t data                  : 32; /**< [ 31:  0](RO) x */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_ehsm_core2_cmd_status9_s cn; */
};
typedef union cavm_ehsm_core2_cmd_status9 cavm_ehsm_core2_cmd_status9_t;

#define CAVM_EHSM_CORE2_CMD_STATUS9 CAVM_EHSM_CORE2_CMD_STATUS9_FUNC()
static inline uint64_t CAVM_EHSM_CORE2_CMD_STATUS9_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_EHSM_CORE2_CMD_STATUS9_FUNC(void)
{
    return 0x80b0000001c8ll;
}

#define typedef_CAVM_EHSM_CORE2_CMD_STATUS9 cavm_ehsm_core2_cmd_status9_t
#define bustype_CAVM_EHSM_CORE2_CMD_STATUS9 CSR_TYPE_NCB32b
#define basename_CAVM_EHSM_CORE2_CMD_STATUS9 "EHSM_CORE2_CMD_STATUS9"
#define device_bar_CAVM_EHSM_CORE2_CMD_STATUS9 0x0 /* PF_BAR0 */
#define busnum_CAVM_EHSM_CORE2_CMD_STATUS9 0
#define arguments_CAVM_EHSM_CORE2_CMD_STATUS9 -1,-1,-1,-1

/**
 * Register (NCB32b) ehsm_core2_hst_interrupt_mask
 *
 * CORE 2 Host Interrupt Mask. Register
 * x
 */
union cavm_ehsm_core2_hst_interrupt_mask
{
    uint32_t u;
    struct cavm_ehsm_core2_hst_interrupt_mask_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t data                  : 32; /**< [ 31:  0](R/W) x */
#else /* Word 0 - Little Endian */
        uint32_t data                  : 32; /**< [ 31:  0](R/W) x */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_ehsm_core2_hst_interrupt_mask_s cn; */
};
typedef union cavm_ehsm_core2_hst_interrupt_mask cavm_ehsm_core2_hst_interrupt_mask_t;

#define CAVM_EHSM_CORE2_HST_INTERRUPT_MASK CAVM_EHSM_CORE2_HST_INTERRUPT_MASK_FUNC()
static inline uint64_t CAVM_EHSM_CORE2_HST_INTERRUPT_MASK_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_EHSM_CORE2_HST_INTERRUPT_MASK_FUNC(void)
{
    return 0x80b0000001e8ll;
}

#define typedef_CAVM_EHSM_CORE2_HST_INTERRUPT_MASK cavm_ehsm_core2_hst_interrupt_mask_t
#define bustype_CAVM_EHSM_CORE2_HST_INTERRUPT_MASK CSR_TYPE_NCB32b
#define basename_CAVM_EHSM_CORE2_HST_INTERRUPT_MASK "EHSM_CORE2_HST_INTERRUPT_MASK"
#define device_bar_CAVM_EHSM_CORE2_HST_INTERRUPT_MASK 0x0 /* PF_BAR0 */
#define busnum_CAVM_EHSM_CORE2_HST_INTERRUPT_MASK 0
#define arguments_CAVM_EHSM_CORE2_HST_INTERRUPT_MASK -1,-1,-1,-1

/**
 * Register (NCB32b) ehsm_core2_hst_interrupt_rst
 *
 * CORE 2 Host Interrupt Reset. Register
 * x
 */
union cavm_ehsm_core2_hst_interrupt_rst
{
    uint32_t u;
    struct cavm_ehsm_core2_hst_interrupt_rst_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t reserved_18_31        : 14;
        uint32_t cmd_buffer_full_access : 1; /**< [ 17: 17](R/W) When active, this interrupt indicates to the host that an attempt was made to
                                                                 write the command register or the parameter register space when the command
                                                                 buffer of host processor core 2 was full. The command or parameter written is
                                                                 lost, but processing by the secure processor continue on the command or
                                                                 parameter that is already queued. The host can rewrite the command or parameter
                                                                 when CMD buffer of host processor core 2 is empty. Host can read
                                                                 CORE2_CMD_BUFFER_FULL field in CMD_FIFO_STATUS to check if CMD buffer of host
                                                                 processor core 2 is available to be written. */
        uint32_t hst_addr_range        : 1;  /**< [ 16: 16](R/W) This interrupt indicates that the host attempted to access an address to which
                                                                 it is not allowed access. This interrupt also triggers if a write is made to a
                                                                 read-only register, or a read to a write-only register. */
        uint32_t reserved_1_15         : 15;
        uint32_t sp_cmd_cmplt          : 1;  /**< [  0:  0](R/W) When set, this interrupt indicates that the secure processor has completed a
                                                                 primitive issued by host processor core 2. */
#else /* Word 0 - Little Endian */
        uint32_t sp_cmd_cmplt          : 1;  /**< [  0:  0](R/W) When set, this interrupt indicates that the secure processor has completed a
                                                                 primitive issued by host processor core 2. */
        uint32_t reserved_1_15         : 15;
        uint32_t hst_addr_range        : 1;  /**< [ 16: 16](R/W) This interrupt indicates that the host attempted to access an address to which
                                                                 it is not allowed access. This interrupt also triggers if a write is made to a
                                                                 read-only register, or a read to a write-only register. */
        uint32_t cmd_buffer_full_access : 1; /**< [ 17: 17](R/W) When active, this interrupt indicates to the host that an attempt was made to
                                                                 write the command register or the parameter register space when the command
                                                                 buffer of host processor core 2 was full. The command or parameter written is
                                                                 lost, but processing by the secure processor continue on the command or
                                                                 parameter that is already queued. The host can rewrite the command or parameter
                                                                 when CMD buffer of host processor core 2 is empty. Host can read
                                                                 CORE2_CMD_BUFFER_FULL field in CMD_FIFO_STATUS to check if CMD buffer of host
                                                                 processor core 2 is available to be written. */
        uint32_t reserved_18_31        : 14;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_ehsm_core2_hst_interrupt_rst_s cn; */
};
typedef union cavm_ehsm_core2_hst_interrupt_rst cavm_ehsm_core2_hst_interrupt_rst_t;

#define CAVM_EHSM_CORE2_HST_INTERRUPT_RST CAVM_EHSM_CORE2_HST_INTERRUPT_RST_FUNC()
static inline uint64_t CAVM_EHSM_CORE2_HST_INTERRUPT_RST_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_EHSM_CORE2_HST_INTERRUPT_RST_FUNC(void)
{
    return 0x80b0000001e4ll;
}

#define typedef_CAVM_EHSM_CORE2_HST_INTERRUPT_RST cavm_ehsm_core2_hst_interrupt_rst_t
#define bustype_CAVM_EHSM_CORE2_HST_INTERRUPT_RST CSR_TYPE_NCB32b
#define basename_CAVM_EHSM_CORE2_HST_INTERRUPT_RST "EHSM_CORE2_HST_INTERRUPT_RST"
#define device_bar_CAVM_EHSM_CORE2_HST_INTERRUPT_RST 0x0 /* PF_BAR0 */
#define busnum_CAVM_EHSM_CORE2_HST_INTERRUPT_RST 0
#define arguments_CAVM_EHSM_CORE2_HST_INTERRUPT_RST -1,-1,-1,-1

/**
 * Register (NCB32b) ehsm_eco
 *
 * INTERNAL: EHSM ECO Register
 *
 * This register is reset on chip reset.
 */
union cavm_ehsm_eco
{
    uint32_t u;
    struct cavm_ehsm_eco_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t eco_rw                : 32; /**< [ 31:  0](R/W) Reserved for ECO usage. */
#else /* Word 0 - Little Endian */
        uint32_t eco_rw                : 32; /**< [ 31:  0](R/W) Reserved for ECO usage. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_ehsm_eco_s cn; */
};
typedef union cavm_ehsm_eco cavm_ehsm_eco_t;

#define CAVM_EHSM_ECO CAVM_EHSM_ECO_FUNC()
static inline uint64_t CAVM_EHSM_ECO_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_EHSM_ECO_FUNC(void)
{
    return 0x80b000004200ll;
}

#define typedef_CAVM_EHSM_ECO cavm_ehsm_eco_t
#define bustype_CAVM_EHSM_ECO CSR_TYPE_NCB32b
#define basename_CAVM_EHSM_ECO "EHSM_ECO"
#define device_bar_CAVM_EHSM_ECO 0x0 /* PF_BAR0 */
#define busnum_CAVM_EHSM_ECO 0
#define arguments_CAVM_EHSM_ECO -1,-1,-1,-1

/**
 * Register (NCB32b) ehsm_fw_security_version
 *
 * FW Security Version Register. Register
 * This is for BCM-78
 */
union cavm_ehsm_fw_security_version
{
    uint32_t u;
    struct cavm_ehsm_fw_security_version_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t reserved_13_31        : 19;
        uint32_t version_index         : 2;  /**< [ 12: 11](RO) This is written by IROM to select loader_fw_security_version0~3 and main_fw_security_version0~3 */
        uint32_t version_index_valid   : 1;  /**< [ 10: 10](RO) This is written by IROM to indicate version_index is valid to select
                                                                 loader_fw_security_version0~3 and main_fw_security_version0~3 */
        uint32_t main_fw_security_version : 6;/**< [  9:  4](RO) This is the shadow register for main_fw_security_version0,
                                                                 main_fw_security_version1, main_fw_security_version2, or
                                                                 main_fw_security_version3 field from OTP, determined by version_index. The value
                                                                 range is 0~33. */
        uint32_t loader_fw_security_version : 4;/**< [  3:  0](RO) This is the shadow register for loader_fw_security_version0,
                                                                 loader_fw_security_version1, loader_fw_security_version2, or
                                                                 loader_fw_security_version3 field from OTP, determined by version_index. The
                                                                 value range is 0~10. */
#else /* Word 0 - Little Endian */
        uint32_t loader_fw_security_version : 4;/**< [  3:  0](RO) This is the shadow register for loader_fw_security_version0,
                                                                 loader_fw_security_version1, loader_fw_security_version2, or
                                                                 loader_fw_security_version3 field from OTP, determined by version_index. The
                                                                 value range is 0~10. */
        uint32_t main_fw_security_version : 6;/**< [  9:  4](RO) This is the shadow register for main_fw_security_version0,
                                                                 main_fw_security_version1, main_fw_security_version2, or
                                                                 main_fw_security_version3 field from OTP, determined by version_index. The value
                                                                 range is 0~33. */
        uint32_t version_index_valid   : 1;  /**< [ 10: 10](RO) This is written by IROM to indicate version_index is valid to select
                                                                 loader_fw_security_version0~3 and main_fw_security_version0~3 */
        uint32_t version_index         : 2;  /**< [ 12: 11](RO) This is written by IROM to select loader_fw_security_version0~3 and main_fw_security_version0~3 */
        uint32_t reserved_13_31        : 19;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_ehsm_fw_security_version_s cn; */
};
typedef union cavm_ehsm_fw_security_version cavm_ehsm_fw_security_version_t;

#define CAVM_EHSM_FW_SECURITY_VERSION CAVM_EHSM_FW_SECURITY_VERSION_FUNC()
static inline uint64_t CAVM_EHSM_FW_SECURITY_VERSION_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_EHSM_FW_SECURITY_VERSION_FUNC(void)
{
    return 0x80b000000124ll;
}

#define typedef_CAVM_EHSM_FW_SECURITY_VERSION cavm_ehsm_fw_security_version_t
#define bustype_CAVM_EHSM_FW_SECURITY_VERSION CSR_TYPE_NCB32b
#define basename_CAVM_EHSM_FW_SECURITY_VERSION "EHSM_FW_SECURITY_VERSION"
#define device_bar_CAVM_EHSM_FW_SECURITY_VERSION 0x0 /* PF_BAR0 */
#define busnum_CAVM_EHSM_FW_SECURITY_VERSION 0
#define arguments_CAVM_EHSM_FW_SECURITY_VERSION -1,-1,-1,-1

/**
 * Register (NCB) ehsm_hst#_int_ena_w1c
 *
 * EHSM Host Interrupt Enable Clear Register
 * This register clears interrupt enable bits.
 */
union cavm_ehsm_hstx_int_ena_w1c
{
    uint64_t u;
    struct cavm_ehsm_hstx_int_ena_w1c_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_1_63         : 63;
        uint64_t intr                  : 1;  /**< [  0:  0](R/W1C/H) Reads or clears enable for EHSM_HST(0..1)_INT_W1C[INTR]. */
#else /* Word 0 - Little Endian */
        uint64_t intr                  : 1;  /**< [  0:  0](R/W1C/H) Reads or clears enable for EHSM_HST(0..1)_INT_W1C[INTR]. */
        uint64_t reserved_1_63         : 63;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_ehsm_hstx_int_ena_w1c_s cn; */
};
typedef union cavm_ehsm_hstx_int_ena_w1c cavm_ehsm_hstx_int_ena_w1c_t;

static inline uint64_t CAVM_EHSM_HSTX_INT_ENA_W1C(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_EHSM_HSTX_INT_ENA_W1C(uint64_t a)
{
    if (a<=1)
        return 0x80b000004110ll + 0x20ll * ((a) & 0x1);
    __cavm_csr_fatal("EHSM_HSTX_INT_ENA_W1C", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_EHSM_HSTX_INT_ENA_W1C(a) cavm_ehsm_hstx_int_ena_w1c_t
#define bustype_CAVM_EHSM_HSTX_INT_ENA_W1C(a) CSR_TYPE_NCB
#define basename_CAVM_EHSM_HSTX_INT_ENA_W1C(a) "EHSM_HSTX_INT_ENA_W1C"
#define device_bar_CAVM_EHSM_HSTX_INT_ENA_W1C(a) 0x0 /* PF_BAR0 */
#define busnum_CAVM_EHSM_HSTX_INT_ENA_W1C(a) (a)
#define arguments_CAVM_EHSM_HSTX_INT_ENA_W1C(a) (a),-1,-1,-1

/**
 * Register (NCB) ehsm_hst#_int_ena_w1s
 *
 * EHSM Host Interrupt Enable Set Register
 * This register sets interrupt enable bits.
 */
union cavm_ehsm_hstx_int_ena_w1s
{
    uint64_t u;
    struct cavm_ehsm_hstx_int_ena_w1s_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_1_63         : 63;
        uint64_t intr                  : 1;  /**< [  0:  0](R/W1S/H) Reads or sets enable for EHSM_HST(0..1)_INT_W1C[INTR]. */
#else /* Word 0 - Little Endian */
        uint64_t intr                  : 1;  /**< [  0:  0](R/W1S/H) Reads or sets enable for EHSM_HST(0..1)_INT_W1C[INTR]. */
        uint64_t reserved_1_63         : 63;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_ehsm_hstx_int_ena_w1s_s cn; */
};
typedef union cavm_ehsm_hstx_int_ena_w1s cavm_ehsm_hstx_int_ena_w1s_t;

static inline uint64_t CAVM_EHSM_HSTX_INT_ENA_W1S(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_EHSM_HSTX_INT_ENA_W1S(uint64_t a)
{
    if (a<=1)
        return 0x80b000004118ll + 0x20ll * ((a) & 0x1);
    __cavm_csr_fatal("EHSM_HSTX_INT_ENA_W1S", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_EHSM_HSTX_INT_ENA_W1S(a) cavm_ehsm_hstx_int_ena_w1s_t
#define bustype_CAVM_EHSM_HSTX_INT_ENA_W1S(a) CSR_TYPE_NCB
#define basename_CAVM_EHSM_HSTX_INT_ENA_W1S(a) "EHSM_HSTX_INT_ENA_W1S"
#define device_bar_CAVM_EHSM_HSTX_INT_ENA_W1S(a) 0x0 /* PF_BAR0 */
#define busnum_CAVM_EHSM_HSTX_INT_ENA_W1S(a) (a)
#define arguments_CAVM_EHSM_HSTX_INT_ENA_W1S(a) (a),-1,-1,-1

/**
 * Register (NCB) ehsm_hst#_int_w1c
 *
 * EHSM Host Interrupt Register
 * This register indicate primitive execution done.
 */
union cavm_ehsm_hstx_int_w1c
{
    uint64_t u;
    struct cavm_ehsm_hstx_int_w1c_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_1_63         : 63;
        uint64_t intr                  : 1;  /**< [  0:  0](R/W1C/H) Interrupt to host processor, indicating primitive execution done. */
#else /* Word 0 - Little Endian */
        uint64_t intr                  : 1;  /**< [  0:  0](R/W1C/H) Interrupt to host processor, indicating primitive execution done. */
        uint64_t reserved_1_63         : 63;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_ehsm_hstx_int_w1c_s cn; */
};
typedef union cavm_ehsm_hstx_int_w1c cavm_ehsm_hstx_int_w1c_t;

static inline uint64_t CAVM_EHSM_HSTX_INT_W1C(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_EHSM_HSTX_INT_W1C(uint64_t a)
{
    if (a<=1)
        return 0x80b000004100ll + 0x20ll * ((a) & 0x1);
    __cavm_csr_fatal("EHSM_HSTX_INT_W1C", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_EHSM_HSTX_INT_W1C(a) cavm_ehsm_hstx_int_w1c_t
#define bustype_CAVM_EHSM_HSTX_INT_W1C(a) CSR_TYPE_NCB
#define basename_CAVM_EHSM_HSTX_INT_W1C(a) "EHSM_HSTX_INT_W1C"
#define device_bar_CAVM_EHSM_HSTX_INT_W1C(a) 0x0 /* PF_BAR0 */
#define busnum_CAVM_EHSM_HSTX_INT_W1C(a) (a)
#define arguments_CAVM_EHSM_HSTX_INT_W1C(a) (a),-1,-1,-1

/**
 * Register (NCB) ehsm_hst#_int_w1s
 *
 * EHSM Host Interrupt Set Register
 * This register sets interrupt bits.
 */
union cavm_ehsm_hstx_int_w1s
{
    uint64_t u;
    struct cavm_ehsm_hstx_int_w1s_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_1_63         : 63;
        uint64_t intr                  : 1;  /**< [  0:  0](R/W1S/H) Reads or sets EHSM_HST(0..1)_INT_W1C[INTR]. */
#else /* Word 0 - Little Endian */
        uint64_t intr                  : 1;  /**< [  0:  0](R/W1S/H) Reads or sets EHSM_HST(0..1)_INT_W1C[INTR]. */
        uint64_t reserved_1_63         : 63;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_ehsm_hstx_int_w1s_s cn; */
};
typedef union cavm_ehsm_hstx_int_w1s cavm_ehsm_hstx_int_w1s_t;

static inline uint64_t CAVM_EHSM_HSTX_INT_W1S(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_EHSM_HSTX_INT_W1S(uint64_t a)
{
    if (a<=1)
        return 0x80b000004108ll + 0x20ll * ((a) & 0x1);
    __cavm_csr_fatal("EHSM_HSTX_INT_W1S", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_EHSM_HSTX_INT_W1S(a) cavm_ehsm_hstx_int_w1s_t
#define bustype_CAVM_EHSM_HSTX_INT_W1S(a) CSR_TYPE_NCB
#define basename_CAVM_EHSM_HSTX_INT_W1S(a) "EHSM_HSTX_INT_W1S"
#define device_bar_CAVM_EHSM_HSTX_INT_W1S(a) 0x0 /* PF_BAR0 */
#define busnum_CAVM_EHSM_HSTX_INT_W1S(a) (a)
#define arguments_CAVM_EHSM_HSTX_INT_W1S(a) (a),-1,-1,-1

/**
 * Register (NCB32b) ehsm_hst_except_addr
 *
 * Host Exception Address. Register
 * x
 */
union cavm_ehsm_hst_except_addr
{
    uint32_t u;
    struct cavm_ehsm_hst_except_addr_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t data                  : 32; /**< [ 31:  0](R/W) x */
#else /* Word 0 - Little Endian */
        uint32_t data                  : 32; /**< [ 31:  0](R/W) x */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_ehsm_hst_except_addr_s cn; */
};
typedef union cavm_ehsm_hst_except_addr cavm_ehsm_hst_except_addr_t;

#define CAVM_EHSM_HST_EXCEPT_ADDR CAVM_EHSM_HST_EXCEPT_ADDR_FUNC()
static inline uint64_t CAVM_EHSM_HST_EXCEPT_ADDR_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_EHSM_HST_EXCEPT_ADDR_FUNC(void)
{
    return 0x80b0000000d0ll;
}

#define typedef_CAVM_EHSM_HST_EXCEPT_ADDR cavm_ehsm_hst_except_addr_t
#define bustype_CAVM_EHSM_HST_EXCEPT_ADDR CSR_TYPE_NCB32b
#define basename_CAVM_EHSM_HST_EXCEPT_ADDR "EHSM_HST_EXCEPT_ADDR"
#define device_bar_CAVM_EHSM_HST_EXCEPT_ADDR 0x0 /* PF_BAR0 */
#define busnum_CAVM_EHSM_HST_EXCEPT_ADDR 0
#define arguments_CAVM_EHSM_HST_EXCEPT_ADDR -1,-1,-1,-1

/**
 * Register (NCB32b) ehsm_hst_interrupt_set
 *
 * Host Interrupt Set. Register
 * x
 */
union cavm_ehsm_hst_interrupt_set
{
    uint32_t u;
    struct cavm_ehsm_hst_interrupt_set_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t reserved_19_31        : 13;
        uint32_t hst_queue_full        : 1;  /**< [ 18: 18](R/W) x */
        uint32_t hst_queue_full_access : 1;  /**< [ 17: 17](R/W) x */
        uint32_t hst_addr_range        : 1;  /**< [ 16: 16](R/W) x */
        uint32_t reserved_1_15         : 15;
        uint32_t sp_cmd_cmplt          : 1;  /**< [  0:  0](R/W) x */
#else /* Word 0 - Little Endian */
        uint32_t sp_cmd_cmplt          : 1;  /**< [  0:  0](R/W) x */
        uint32_t reserved_1_15         : 15;
        uint32_t hst_addr_range        : 1;  /**< [ 16: 16](R/W) x */
        uint32_t hst_queue_full_access : 1;  /**< [ 17: 17](R/W) x */
        uint32_t hst_queue_full        : 1;  /**< [ 18: 18](R/W) x */
        uint32_t reserved_19_31        : 13;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_ehsm_hst_interrupt_set_s cn; */
};
typedef union cavm_ehsm_hst_interrupt_set cavm_ehsm_hst_interrupt_set_t;

#define CAVM_EHSM_HST_INTERRUPT_SET CAVM_EHSM_HST_INTERRUPT_SET_FUNC()
static inline uint64_t CAVM_EHSM_HST_INTERRUPT_SET_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_EHSM_HST_INTERRUPT_SET_FUNC(void)
{
    return 0x80b000000234ll;
}

#define typedef_CAVM_EHSM_HST_INTERRUPT_SET cavm_ehsm_hst_interrupt_set_t
#define bustype_CAVM_EHSM_HST_INTERRUPT_SET CSR_TYPE_NCB32b
#define basename_CAVM_EHSM_HST_INTERRUPT_SET "EHSM_HST_INTERRUPT_SET"
#define device_bar_CAVM_EHSM_HST_INTERRUPT_SET 0x0 /* PF_BAR0 */
#define busnum_CAVM_EHSM_HST_INTERRUPT_SET 0
#define arguments_CAVM_EHSM_HST_INTERRUPT_SET -1,-1,-1,-1

/**
 * Register (NCB32b) ehsm_hst_trust
 *
 * SP Trust Register. Register
 * x
 */
union cavm_ehsm_hst_trust
{
    uint32_t u;
    struct cavm_ehsm_hst_trust_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t data                  : 32; /**< [ 31:  0](RO) x */
#else /* Word 0 - Little Endian */
        uint32_t data                  : 32; /**< [ 31:  0](RO) x */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_ehsm_hst_trust_s cn; */
};
typedef union cavm_ehsm_hst_trust cavm_ehsm_hst_trust_t;

#define CAVM_EHSM_HST_TRUST CAVM_EHSM_HST_TRUST_FUNC()
static inline uint64_t CAVM_EHSM_HST_TRUST_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_EHSM_HST_TRUST_FUNC(void)
{
    return 0x80b0000000d4ll;
}

#define typedef_CAVM_EHSM_HST_TRUST cavm_ehsm_hst_trust_t
#define bustype_CAVM_EHSM_HST_TRUST CSR_TYPE_NCB32b
#define basename_CAVM_EHSM_HST_TRUST "EHSM_HST_TRUST"
#define device_bar_CAVM_EHSM_HST_TRUST 0x0 /* PF_BAR0 */
#define busnum_CAVM_EHSM_HST_TRUST 0
#define arguments_CAVM_EHSM_HST_TRUST -1,-1,-1,-1

/**
 * Register (NCB) ehsm_ip_regs#
 *
 * EHSM IP Internal Registers
 * These registers access the EHSM register space.
 */
union cavm_ehsm_ip_regsx
{
    uint64_t u;
    struct cavm_ehsm_ip_regsx_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t dat                   : 64; /**< [ 63:  0](R/W) EHSM registers. */
#else /* Word 0 - Little Endian */
        uint64_t dat                   : 64; /**< [ 63:  0](R/W) EHSM registers. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_ehsm_ip_regsx_s cn; */
};
typedef union cavm_ehsm_ip_regsx cavm_ehsm_ip_regsx_t;

static inline uint64_t CAVM_EHSM_IP_REGSX(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_EHSM_IP_REGSX(uint64_t a)
{
    if (a<=2047)
        return 0x80b000000000ll + 4ll * ((a) & 0x7ff);
    __cavm_csr_fatal("EHSM_IP_REGSX", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_EHSM_IP_REGSX(a) cavm_ehsm_ip_regsx_t
#define bustype_CAVM_EHSM_IP_REGSX(a) CSR_TYPE_NCB
#define basename_CAVM_EHSM_IP_REGSX(a) "EHSM_IP_REGSX"
#define device_bar_CAVM_EHSM_IP_REGSX(a) 0x0 /* PF_BAR0 */
#define busnum_CAVM_EHSM_IP_REGSX(a) (a)
#define arguments_CAVM_EHSM_IP_REGSX(a) (a),-1,-1,-1

/**
 * Register (NCB32b) ehsm_jtag_cmd
 *
 * JTAG Secure Processor Command. Register
 * This is the CMD ID value of the primitive command from JTAG interface.
 */
union cavm_ehsm_jtag_cmd
{
    uint32_t u;
    struct cavm_ehsm_jtag_cmd_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t data                  : 32; /**< [ 31:  0](RO) x */
#else /* Word 0 - Little Endian */
        uint32_t data                  : 32; /**< [ 31:  0](RO) x */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_ehsm_jtag_cmd_s cn; */
};
typedef union cavm_ehsm_jtag_cmd cavm_ehsm_jtag_cmd_t;

#define CAVM_EHSM_JTAG_CMD CAVM_EHSM_JTAG_CMD_FUNC()
static inline uint64_t CAVM_EHSM_JTAG_CMD_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_EHSM_JTAG_CMD_FUNC(void)
{
    return 0x80b000000340ll;
}

#define typedef_CAVM_EHSM_JTAG_CMD cavm_ehsm_jtag_cmd_t
#define bustype_CAVM_EHSM_JTAG_CMD CSR_TYPE_NCB32b
#define basename_CAVM_EHSM_JTAG_CMD "EHSM_JTAG_CMD"
#define device_bar_CAVM_EHSM_JTAG_CMD 0x0 /* PF_BAR0 */
#define busnum_CAVM_EHSM_JTAG_CMD 0
#define arguments_CAVM_EHSM_JTAG_CMD -1,-1,-1,-1

/**
 * Register (NCB32b) ehsm_jtag_cmd_param0
 *
 * JTAG Command Parameter 0. Register
 * This register contains parameter 0 associated with a BCM primitive command from JTAG interface
 */
union cavm_ehsm_jtag_cmd_param0
{
    uint32_t u;
    struct cavm_ehsm_jtag_cmd_param0_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t data                  : 32; /**< [ 31:  0](RO) x */
#else /* Word 0 - Little Endian */
        uint32_t data                  : 32; /**< [ 31:  0](RO) x */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_ehsm_jtag_cmd_param0_s cn; */
};
typedef union cavm_ehsm_jtag_cmd_param0 cavm_ehsm_jtag_cmd_param0_t;

#define CAVM_EHSM_JTAG_CMD_PARAM0 CAVM_EHSM_JTAG_CMD_PARAM0_FUNC()
static inline uint64_t CAVM_EHSM_JTAG_CMD_PARAM0_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_EHSM_JTAG_CMD_PARAM0_FUNC(void)
{
    return 0x80b000000300ll;
}

#define typedef_CAVM_EHSM_JTAG_CMD_PARAM0 cavm_ehsm_jtag_cmd_param0_t
#define bustype_CAVM_EHSM_JTAG_CMD_PARAM0 CSR_TYPE_NCB32b
#define basename_CAVM_EHSM_JTAG_CMD_PARAM0 "EHSM_JTAG_CMD_PARAM0"
#define device_bar_CAVM_EHSM_JTAG_CMD_PARAM0 0x0 /* PF_BAR0 */
#define busnum_CAVM_EHSM_JTAG_CMD_PARAM0 0
#define arguments_CAVM_EHSM_JTAG_CMD_PARAM0 -1,-1,-1,-1

/**
 * Register (NCB32b) ehsm_jtag_cmd_param1
 *
 * JTAG Command Parameter 1. Register
 * This register contains parameter 1 associated with a BCM primitive command from from JTAG interface
 */
union cavm_ehsm_jtag_cmd_param1
{
    uint32_t u;
    struct cavm_ehsm_jtag_cmd_param1_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t data                  : 32; /**< [ 31:  0](RO) x */
#else /* Word 0 - Little Endian */
        uint32_t data                  : 32; /**< [ 31:  0](RO) x */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_ehsm_jtag_cmd_param1_s cn; */
};
typedef union cavm_ehsm_jtag_cmd_param1 cavm_ehsm_jtag_cmd_param1_t;

#define CAVM_EHSM_JTAG_CMD_PARAM1 CAVM_EHSM_JTAG_CMD_PARAM1_FUNC()
static inline uint64_t CAVM_EHSM_JTAG_CMD_PARAM1_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_EHSM_JTAG_CMD_PARAM1_FUNC(void)
{
    return 0x80b000000304ll;
}

#define typedef_CAVM_EHSM_JTAG_CMD_PARAM1 cavm_ehsm_jtag_cmd_param1_t
#define bustype_CAVM_EHSM_JTAG_CMD_PARAM1 CSR_TYPE_NCB32b
#define basename_CAVM_EHSM_JTAG_CMD_PARAM1 "EHSM_JTAG_CMD_PARAM1"
#define device_bar_CAVM_EHSM_JTAG_CMD_PARAM1 0x0 /* PF_BAR0 */
#define busnum_CAVM_EHSM_JTAG_CMD_PARAM1 0
#define arguments_CAVM_EHSM_JTAG_CMD_PARAM1 -1,-1,-1,-1

/**
 * Register (NCB32b) ehsm_jtag_cmd_param10
 *
 * JTAG Command Parameter 10. Register
 * This register contains parameter 10 associated with a BCM primitive command from JTAG interface.
 */
union cavm_ehsm_jtag_cmd_param10
{
    uint32_t u;
    struct cavm_ehsm_jtag_cmd_param10_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t data                  : 32; /**< [ 31:  0](RO) x */
#else /* Word 0 - Little Endian */
        uint32_t data                  : 32; /**< [ 31:  0](RO) x */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_ehsm_jtag_cmd_param10_s cn; */
};
typedef union cavm_ehsm_jtag_cmd_param10 cavm_ehsm_jtag_cmd_param10_t;

#define CAVM_EHSM_JTAG_CMD_PARAM10 CAVM_EHSM_JTAG_CMD_PARAM10_FUNC()
static inline uint64_t CAVM_EHSM_JTAG_CMD_PARAM10_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_EHSM_JTAG_CMD_PARAM10_FUNC(void)
{
    return 0x80b000000328ll;
}

#define typedef_CAVM_EHSM_JTAG_CMD_PARAM10 cavm_ehsm_jtag_cmd_param10_t
#define bustype_CAVM_EHSM_JTAG_CMD_PARAM10 CSR_TYPE_NCB32b
#define basename_CAVM_EHSM_JTAG_CMD_PARAM10 "EHSM_JTAG_CMD_PARAM10"
#define device_bar_CAVM_EHSM_JTAG_CMD_PARAM10 0x0 /* PF_BAR0 */
#define busnum_CAVM_EHSM_JTAG_CMD_PARAM10 0
#define arguments_CAVM_EHSM_JTAG_CMD_PARAM10 -1,-1,-1,-1

/**
 * Register (NCB32b) ehsm_jtag_cmd_param11
 *
 * JTAG Command Parameter 11. Register
 * This register contains parameter 11 associated with a BCM primitive command from JTAG interface.
 */
union cavm_ehsm_jtag_cmd_param11
{
    uint32_t u;
    struct cavm_ehsm_jtag_cmd_param11_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t data                  : 32; /**< [ 31:  0](RO) x */
#else /* Word 0 - Little Endian */
        uint32_t data                  : 32; /**< [ 31:  0](RO) x */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_ehsm_jtag_cmd_param11_s cn; */
};
typedef union cavm_ehsm_jtag_cmd_param11 cavm_ehsm_jtag_cmd_param11_t;

#define CAVM_EHSM_JTAG_CMD_PARAM11 CAVM_EHSM_JTAG_CMD_PARAM11_FUNC()
static inline uint64_t CAVM_EHSM_JTAG_CMD_PARAM11_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_EHSM_JTAG_CMD_PARAM11_FUNC(void)
{
    return 0x80b00000032cll;
}

#define typedef_CAVM_EHSM_JTAG_CMD_PARAM11 cavm_ehsm_jtag_cmd_param11_t
#define bustype_CAVM_EHSM_JTAG_CMD_PARAM11 CSR_TYPE_NCB32b
#define basename_CAVM_EHSM_JTAG_CMD_PARAM11 "EHSM_JTAG_CMD_PARAM11"
#define device_bar_CAVM_EHSM_JTAG_CMD_PARAM11 0x0 /* PF_BAR0 */
#define busnum_CAVM_EHSM_JTAG_CMD_PARAM11 0
#define arguments_CAVM_EHSM_JTAG_CMD_PARAM11 -1,-1,-1,-1

/**
 * Register (NCB32b) ehsm_jtag_cmd_param12
 *
 * JTAG Command Parameter 12. Register
 * This register contains parameter 12 associated with a BCM primitive command from JTAG interface.
 */
union cavm_ehsm_jtag_cmd_param12
{
    uint32_t u;
    struct cavm_ehsm_jtag_cmd_param12_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t data                  : 32; /**< [ 31:  0](RO) x */
#else /* Word 0 - Little Endian */
        uint32_t data                  : 32; /**< [ 31:  0](RO) x */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_ehsm_jtag_cmd_param12_s cn; */
};
typedef union cavm_ehsm_jtag_cmd_param12 cavm_ehsm_jtag_cmd_param12_t;

#define CAVM_EHSM_JTAG_CMD_PARAM12 CAVM_EHSM_JTAG_CMD_PARAM12_FUNC()
static inline uint64_t CAVM_EHSM_JTAG_CMD_PARAM12_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_EHSM_JTAG_CMD_PARAM12_FUNC(void)
{
    return 0x80b000000330ll;
}

#define typedef_CAVM_EHSM_JTAG_CMD_PARAM12 cavm_ehsm_jtag_cmd_param12_t
#define bustype_CAVM_EHSM_JTAG_CMD_PARAM12 CSR_TYPE_NCB32b
#define basename_CAVM_EHSM_JTAG_CMD_PARAM12 "EHSM_JTAG_CMD_PARAM12"
#define device_bar_CAVM_EHSM_JTAG_CMD_PARAM12 0x0 /* PF_BAR0 */
#define busnum_CAVM_EHSM_JTAG_CMD_PARAM12 0
#define arguments_CAVM_EHSM_JTAG_CMD_PARAM12 -1,-1,-1,-1

/**
 * Register (NCB32b) ehsm_jtag_cmd_param13
 *
 * JTAG Command Parameter 13. Register
 * This register contains parameter 13 associated with a BCM primitive command from JTAG interface.
 */
union cavm_ehsm_jtag_cmd_param13
{
    uint32_t u;
    struct cavm_ehsm_jtag_cmd_param13_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t data                  : 32; /**< [ 31:  0](RO) x */
#else /* Word 0 - Little Endian */
        uint32_t data                  : 32; /**< [ 31:  0](RO) x */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_ehsm_jtag_cmd_param13_s cn; */
};
typedef union cavm_ehsm_jtag_cmd_param13 cavm_ehsm_jtag_cmd_param13_t;

#define CAVM_EHSM_JTAG_CMD_PARAM13 CAVM_EHSM_JTAG_CMD_PARAM13_FUNC()
static inline uint64_t CAVM_EHSM_JTAG_CMD_PARAM13_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_EHSM_JTAG_CMD_PARAM13_FUNC(void)
{
    return 0x80b000000334ll;
}

#define typedef_CAVM_EHSM_JTAG_CMD_PARAM13 cavm_ehsm_jtag_cmd_param13_t
#define bustype_CAVM_EHSM_JTAG_CMD_PARAM13 CSR_TYPE_NCB32b
#define basename_CAVM_EHSM_JTAG_CMD_PARAM13 "EHSM_JTAG_CMD_PARAM13"
#define device_bar_CAVM_EHSM_JTAG_CMD_PARAM13 0x0 /* PF_BAR0 */
#define busnum_CAVM_EHSM_JTAG_CMD_PARAM13 0
#define arguments_CAVM_EHSM_JTAG_CMD_PARAM13 -1,-1,-1,-1

/**
 * Register (NCB32b) ehsm_jtag_cmd_param14
 *
 * JTAG Command Parameter 14. Register
 * This register contains parameter 14 associated with a BCM primitive command from JTAG interface.
 */
union cavm_ehsm_jtag_cmd_param14
{
    uint32_t u;
    struct cavm_ehsm_jtag_cmd_param14_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t data                  : 32; /**< [ 31:  0](RO) x */
#else /* Word 0 - Little Endian */
        uint32_t data                  : 32; /**< [ 31:  0](RO) x */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_ehsm_jtag_cmd_param14_s cn; */
};
typedef union cavm_ehsm_jtag_cmd_param14 cavm_ehsm_jtag_cmd_param14_t;

#define CAVM_EHSM_JTAG_CMD_PARAM14 CAVM_EHSM_JTAG_CMD_PARAM14_FUNC()
static inline uint64_t CAVM_EHSM_JTAG_CMD_PARAM14_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_EHSM_JTAG_CMD_PARAM14_FUNC(void)
{
    return 0x80b000000338ll;
}

#define typedef_CAVM_EHSM_JTAG_CMD_PARAM14 cavm_ehsm_jtag_cmd_param14_t
#define bustype_CAVM_EHSM_JTAG_CMD_PARAM14 CSR_TYPE_NCB32b
#define basename_CAVM_EHSM_JTAG_CMD_PARAM14 "EHSM_JTAG_CMD_PARAM14"
#define device_bar_CAVM_EHSM_JTAG_CMD_PARAM14 0x0 /* PF_BAR0 */
#define busnum_CAVM_EHSM_JTAG_CMD_PARAM14 0
#define arguments_CAVM_EHSM_JTAG_CMD_PARAM14 -1,-1,-1,-1

/**
 * Register (NCB32b) ehsm_jtag_cmd_param15
 *
 * JTAG Command Parameter 15. Register
 * This register contains parameter 15 associated with a BCM primitive command from JTAG interface.
 */
union cavm_ehsm_jtag_cmd_param15
{
    uint32_t u;
    struct cavm_ehsm_jtag_cmd_param15_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t data                  : 32; /**< [ 31:  0](RO) x */
#else /* Word 0 - Little Endian */
        uint32_t data                  : 32; /**< [ 31:  0](RO) x */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_ehsm_jtag_cmd_param15_s cn; */
};
typedef union cavm_ehsm_jtag_cmd_param15 cavm_ehsm_jtag_cmd_param15_t;

#define CAVM_EHSM_JTAG_CMD_PARAM15 CAVM_EHSM_JTAG_CMD_PARAM15_FUNC()
static inline uint64_t CAVM_EHSM_JTAG_CMD_PARAM15_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_EHSM_JTAG_CMD_PARAM15_FUNC(void)
{
    return 0x80b00000033cll;
}

#define typedef_CAVM_EHSM_JTAG_CMD_PARAM15 cavm_ehsm_jtag_cmd_param15_t
#define bustype_CAVM_EHSM_JTAG_CMD_PARAM15 CSR_TYPE_NCB32b
#define basename_CAVM_EHSM_JTAG_CMD_PARAM15 "EHSM_JTAG_CMD_PARAM15"
#define device_bar_CAVM_EHSM_JTAG_CMD_PARAM15 0x0 /* PF_BAR0 */
#define busnum_CAVM_EHSM_JTAG_CMD_PARAM15 0
#define arguments_CAVM_EHSM_JTAG_CMD_PARAM15 -1,-1,-1,-1

/**
 * Register (NCB32b) ehsm_jtag_cmd_param2
 *
 * JTAG Command Parameter 2. Register
 * This register contains parameter 2 associated with a BCM primitive command from from JTAG interface
 */
union cavm_ehsm_jtag_cmd_param2
{
    uint32_t u;
    struct cavm_ehsm_jtag_cmd_param2_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t data                  : 32; /**< [ 31:  0](RO) x */
#else /* Word 0 - Little Endian */
        uint32_t data                  : 32; /**< [ 31:  0](RO) x */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_ehsm_jtag_cmd_param2_s cn; */
};
typedef union cavm_ehsm_jtag_cmd_param2 cavm_ehsm_jtag_cmd_param2_t;

#define CAVM_EHSM_JTAG_CMD_PARAM2 CAVM_EHSM_JTAG_CMD_PARAM2_FUNC()
static inline uint64_t CAVM_EHSM_JTAG_CMD_PARAM2_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_EHSM_JTAG_CMD_PARAM2_FUNC(void)
{
    return 0x80b000000308ll;
}

#define typedef_CAVM_EHSM_JTAG_CMD_PARAM2 cavm_ehsm_jtag_cmd_param2_t
#define bustype_CAVM_EHSM_JTAG_CMD_PARAM2 CSR_TYPE_NCB32b
#define basename_CAVM_EHSM_JTAG_CMD_PARAM2 "EHSM_JTAG_CMD_PARAM2"
#define device_bar_CAVM_EHSM_JTAG_CMD_PARAM2 0x0 /* PF_BAR0 */
#define busnum_CAVM_EHSM_JTAG_CMD_PARAM2 0
#define arguments_CAVM_EHSM_JTAG_CMD_PARAM2 -1,-1,-1,-1

/**
 * Register (NCB32b) ehsm_jtag_cmd_param3
 *
 * JTAG Command Parameter 3. Register
 * This register contains parameter 3 associated with a BCM primitive command from from
 * JTAG interface.
 */
union cavm_ehsm_jtag_cmd_param3
{
    uint32_t u;
    struct cavm_ehsm_jtag_cmd_param3_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t data                  : 32; /**< [ 31:  0](RO) x */
#else /* Word 0 - Little Endian */
        uint32_t data                  : 32; /**< [ 31:  0](RO) x */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_ehsm_jtag_cmd_param3_s cn; */
};
typedef union cavm_ehsm_jtag_cmd_param3 cavm_ehsm_jtag_cmd_param3_t;

#define CAVM_EHSM_JTAG_CMD_PARAM3 CAVM_EHSM_JTAG_CMD_PARAM3_FUNC()
static inline uint64_t CAVM_EHSM_JTAG_CMD_PARAM3_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_EHSM_JTAG_CMD_PARAM3_FUNC(void)
{
    return 0x80b00000030cll;
}

#define typedef_CAVM_EHSM_JTAG_CMD_PARAM3 cavm_ehsm_jtag_cmd_param3_t
#define bustype_CAVM_EHSM_JTAG_CMD_PARAM3 CSR_TYPE_NCB32b
#define basename_CAVM_EHSM_JTAG_CMD_PARAM3 "EHSM_JTAG_CMD_PARAM3"
#define device_bar_CAVM_EHSM_JTAG_CMD_PARAM3 0x0 /* PF_BAR0 */
#define busnum_CAVM_EHSM_JTAG_CMD_PARAM3 0
#define arguments_CAVM_EHSM_JTAG_CMD_PARAM3 -1,-1,-1,-1

/**
 * Register (NCB32b) ehsm_jtag_cmd_param4
 *
 * JTAG Command Parameter 4. Register
 * This register contains parameter 4 associated with a BCM primitive command from JTAG interface.
 */
union cavm_ehsm_jtag_cmd_param4
{
    uint32_t u;
    struct cavm_ehsm_jtag_cmd_param4_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t data                  : 32; /**< [ 31:  0](RO) x */
#else /* Word 0 - Little Endian */
        uint32_t data                  : 32; /**< [ 31:  0](RO) x */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_ehsm_jtag_cmd_param4_s cn; */
};
typedef union cavm_ehsm_jtag_cmd_param4 cavm_ehsm_jtag_cmd_param4_t;

#define CAVM_EHSM_JTAG_CMD_PARAM4 CAVM_EHSM_JTAG_CMD_PARAM4_FUNC()
static inline uint64_t CAVM_EHSM_JTAG_CMD_PARAM4_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_EHSM_JTAG_CMD_PARAM4_FUNC(void)
{
    return 0x80b000000310ll;
}

#define typedef_CAVM_EHSM_JTAG_CMD_PARAM4 cavm_ehsm_jtag_cmd_param4_t
#define bustype_CAVM_EHSM_JTAG_CMD_PARAM4 CSR_TYPE_NCB32b
#define basename_CAVM_EHSM_JTAG_CMD_PARAM4 "EHSM_JTAG_CMD_PARAM4"
#define device_bar_CAVM_EHSM_JTAG_CMD_PARAM4 0x0 /* PF_BAR0 */
#define busnum_CAVM_EHSM_JTAG_CMD_PARAM4 0
#define arguments_CAVM_EHSM_JTAG_CMD_PARAM4 -1,-1,-1,-1

/**
 * Register (NCB32b) ehsm_jtag_cmd_param5
 *
 * JTAG Command Parameter 5. Register
 * This register contains parameter 5 associated with a BCM primitive command from JTAG interface.
 */
union cavm_ehsm_jtag_cmd_param5
{
    uint32_t u;
    struct cavm_ehsm_jtag_cmd_param5_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t data                  : 32; /**< [ 31:  0](RO) x */
#else /* Word 0 - Little Endian */
        uint32_t data                  : 32; /**< [ 31:  0](RO) x */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_ehsm_jtag_cmd_param5_s cn; */
};
typedef union cavm_ehsm_jtag_cmd_param5 cavm_ehsm_jtag_cmd_param5_t;

#define CAVM_EHSM_JTAG_CMD_PARAM5 CAVM_EHSM_JTAG_CMD_PARAM5_FUNC()
static inline uint64_t CAVM_EHSM_JTAG_CMD_PARAM5_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_EHSM_JTAG_CMD_PARAM5_FUNC(void)
{
    return 0x80b000000314ll;
}

#define typedef_CAVM_EHSM_JTAG_CMD_PARAM5 cavm_ehsm_jtag_cmd_param5_t
#define bustype_CAVM_EHSM_JTAG_CMD_PARAM5 CSR_TYPE_NCB32b
#define basename_CAVM_EHSM_JTAG_CMD_PARAM5 "EHSM_JTAG_CMD_PARAM5"
#define device_bar_CAVM_EHSM_JTAG_CMD_PARAM5 0x0 /* PF_BAR0 */
#define busnum_CAVM_EHSM_JTAG_CMD_PARAM5 0
#define arguments_CAVM_EHSM_JTAG_CMD_PARAM5 -1,-1,-1,-1

/**
 * Register (NCB32b) ehsm_jtag_cmd_param6
 *
 * JTAG Command Parameter 6. Register
 * This register contains parameter 6 associated with a BCM primitive command from JTAG interface.
 */
union cavm_ehsm_jtag_cmd_param6
{
    uint32_t u;
    struct cavm_ehsm_jtag_cmd_param6_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t data                  : 32; /**< [ 31:  0](RO) x */
#else /* Word 0 - Little Endian */
        uint32_t data                  : 32; /**< [ 31:  0](RO) x */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_ehsm_jtag_cmd_param6_s cn; */
};
typedef union cavm_ehsm_jtag_cmd_param6 cavm_ehsm_jtag_cmd_param6_t;

#define CAVM_EHSM_JTAG_CMD_PARAM6 CAVM_EHSM_JTAG_CMD_PARAM6_FUNC()
static inline uint64_t CAVM_EHSM_JTAG_CMD_PARAM6_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_EHSM_JTAG_CMD_PARAM6_FUNC(void)
{
    return 0x80b000000318ll;
}

#define typedef_CAVM_EHSM_JTAG_CMD_PARAM6 cavm_ehsm_jtag_cmd_param6_t
#define bustype_CAVM_EHSM_JTAG_CMD_PARAM6 CSR_TYPE_NCB32b
#define basename_CAVM_EHSM_JTAG_CMD_PARAM6 "EHSM_JTAG_CMD_PARAM6"
#define device_bar_CAVM_EHSM_JTAG_CMD_PARAM6 0x0 /* PF_BAR0 */
#define busnum_CAVM_EHSM_JTAG_CMD_PARAM6 0
#define arguments_CAVM_EHSM_JTAG_CMD_PARAM6 -1,-1,-1,-1

/**
 * Register (NCB32b) ehsm_jtag_cmd_param7
 *
 * JTAG Command Parameter 7. Register
 * This register contains parameter 7 associated with a BCM primitive command from JTAG interface.
 */
union cavm_ehsm_jtag_cmd_param7
{
    uint32_t u;
    struct cavm_ehsm_jtag_cmd_param7_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t data                  : 32; /**< [ 31:  0](RO) x */
#else /* Word 0 - Little Endian */
        uint32_t data                  : 32; /**< [ 31:  0](RO) x */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_ehsm_jtag_cmd_param7_s cn; */
};
typedef union cavm_ehsm_jtag_cmd_param7 cavm_ehsm_jtag_cmd_param7_t;

#define CAVM_EHSM_JTAG_CMD_PARAM7 CAVM_EHSM_JTAG_CMD_PARAM7_FUNC()
static inline uint64_t CAVM_EHSM_JTAG_CMD_PARAM7_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_EHSM_JTAG_CMD_PARAM7_FUNC(void)
{
    return 0x80b00000031cll;
}

#define typedef_CAVM_EHSM_JTAG_CMD_PARAM7 cavm_ehsm_jtag_cmd_param7_t
#define bustype_CAVM_EHSM_JTAG_CMD_PARAM7 CSR_TYPE_NCB32b
#define basename_CAVM_EHSM_JTAG_CMD_PARAM7 "EHSM_JTAG_CMD_PARAM7"
#define device_bar_CAVM_EHSM_JTAG_CMD_PARAM7 0x0 /* PF_BAR0 */
#define busnum_CAVM_EHSM_JTAG_CMD_PARAM7 0
#define arguments_CAVM_EHSM_JTAG_CMD_PARAM7 -1,-1,-1,-1

/**
 * Register (NCB32b) ehsm_jtag_cmd_param8
 *
 * JTAG Command Parameter 8. Register
 * This register contains parameter 8 associated with a BCM primitive command from JTAG interface.
 */
union cavm_ehsm_jtag_cmd_param8
{
    uint32_t u;
    struct cavm_ehsm_jtag_cmd_param8_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t data                  : 32; /**< [ 31:  0](RO) x */
#else /* Word 0 - Little Endian */
        uint32_t data                  : 32; /**< [ 31:  0](RO) x */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_ehsm_jtag_cmd_param8_s cn; */
};
typedef union cavm_ehsm_jtag_cmd_param8 cavm_ehsm_jtag_cmd_param8_t;

#define CAVM_EHSM_JTAG_CMD_PARAM8 CAVM_EHSM_JTAG_CMD_PARAM8_FUNC()
static inline uint64_t CAVM_EHSM_JTAG_CMD_PARAM8_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_EHSM_JTAG_CMD_PARAM8_FUNC(void)
{
    return 0x80b000000320ll;
}

#define typedef_CAVM_EHSM_JTAG_CMD_PARAM8 cavm_ehsm_jtag_cmd_param8_t
#define bustype_CAVM_EHSM_JTAG_CMD_PARAM8 CSR_TYPE_NCB32b
#define basename_CAVM_EHSM_JTAG_CMD_PARAM8 "EHSM_JTAG_CMD_PARAM8"
#define device_bar_CAVM_EHSM_JTAG_CMD_PARAM8 0x0 /* PF_BAR0 */
#define busnum_CAVM_EHSM_JTAG_CMD_PARAM8 0
#define arguments_CAVM_EHSM_JTAG_CMD_PARAM8 -1,-1,-1,-1

/**
 * Register (NCB32b) ehsm_jtag_cmd_param9
 *
 * JTAG Command Parameter 9. Register
 * This register contains parameter 9 associated with a BCM primitive command from JTAG interface.
 */
union cavm_ehsm_jtag_cmd_param9
{
    uint32_t u;
    struct cavm_ehsm_jtag_cmd_param9_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t data                  : 32; /**< [ 31:  0](RO) x */
#else /* Word 0 - Little Endian */
        uint32_t data                  : 32; /**< [ 31:  0](RO) x */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_ehsm_jtag_cmd_param9_s cn; */
};
typedef union cavm_ehsm_jtag_cmd_param9 cavm_ehsm_jtag_cmd_param9_t;

#define CAVM_EHSM_JTAG_CMD_PARAM9 CAVM_EHSM_JTAG_CMD_PARAM9_FUNC()
static inline uint64_t CAVM_EHSM_JTAG_CMD_PARAM9_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_EHSM_JTAG_CMD_PARAM9_FUNC(void)
{
    return 0x80b000000324ll;
}

#define typedef_CAVM_EHSM_JTAG_CMD_PARAM9 cavm_ehsm_jtag_cmd_param9_t
#define bustype_CAVM_EHSM_JTAG_CMD_PARAM9 CSR_TYPE_NCB32b
#define basename_CAVM_EHSM_JTAG_CMD_PARAM9 "EHSM_JTAG_CMD_PARAM9"
#define device_bar_CAVM_EHSM_JTAG_CMD_PARAM9 0x0 /* PF_BAR0 */
#define busnum_CAVM_EHSM_JTAG_CMD_PARAM9 0
#define arguments_CAVM_EHSM_JTAG_CMD_PARAM9 -1,-1,-1,-1

/**
 * Register (NCB32b) ehsm_jtag_cmd_ret_status
 *
 * JTAG Command Return Status. Register
 * This register contains return status associated with a BCM primitive command from JTAG interface.
 */
union cavm_ehsm_jtag_cmd_ret_status
{
    uint32_t u;
    struct cavm_ehsm_jtag_cmd_ret_status_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t data                  : 32; /**< [ 31:  0](R/W) x */
#else /* Word 0 - Little Endian */
        uint32_t data                  : 32; /**< [ 31:  0](R/W) x */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_ehsm_jtag_cmd_ret_status_s cn; */
};
typedef union cavm_ehsm_jtag_cmd_ret_status cavm_ehsm_jtag_cmd_ret_status_t;

#define CAVM_EHSM_JTAG_CMD_RET_STATUS CAVM_EHSM_JTAG_CMD_RET_STATUS_FUNC()
static inline uint64_t CAVM_EHSM_JTAG_CMD_RET_STATUS_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_EHSM_JTAG_CMD_RET_STATUS_FUNC(void)
{
    return 0x80b000000380ll;
}

#define typedef_CAVM_EHSM_JTAG_CMD_RET_STATUS cavm_ehsm_jtag_cmd_ret_status_t
#define bustype_CAVM_EHSM_JTAG_CMD_RET_STATUS CSR_TYPE_NCB32b
#define basename_CAVM_EHSM_JTAG_CMD_RET_STATUS "EHSM_JTAG_CMD_RET_STATUS"
#define device_bar_CAVM_EHSM_JTAG_CMD_RET_STATUS 0x0 /* PF_BAR0 */
#define busnum_CAVM_EHSM_JTAG_CMD_RET_STATUS 0
#define arguments_CAVM_EHSM_JTAG_CMD_RET_STATUS -1,-1,-1,-1

/**
 * Register (NCB32b) ehsm_jtag_cmd_status0
 *
 * JTAG Command Status 0. Register
 * This register contains status 0 associated with a BCM primitive command from JTAG interface.
 */
union cavm_ehsm_jtag_cmd_status0
{
    uint32_t u;
    struct cavm_ehsm_jtag_cmd_status0_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t data                  : 32; /**< [ 31:  0](R/W) x */
#else /* Word 0 - Little Endian */
        uint32_t data                  : 32; /**< [ 31:  0](R/W) x */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_ehsm_jtag_cmd_status0_s cn; */
};
typedef union cavm_ehsm_jtag_cmd_status0 cavm_ehsm_jtag_cmd_status0_t;

#define CAVM_EHSM_JTAG_CMD_STATUS0 CAVM_EHSM_JTAG_CMD_STATUS0_FUNC()
static inline uint64_t CAVM_EHSM_JTAG_CMD_STATUS0_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_EHSM_JTAG_CMD_STATUS0_FUNC(void)
{
    return 0x80b000000384ll;
}

#define typedef_CAVM_EHSM_JTAG_CMD_STATUS0 cavm_ehsm_jtag_cmd_status0_t
#define bustype_CAVM_EHSM_JTAG_CMD_STATUS0 CSR_TYPE_NCB32b
#define basename_CAVM_EHSM_JTAG_CMD_STATUS0 "EHSM_JTAG_CMD_STATUS0"
#define device_bar_CAVM_EHSM_JTAG_CMD_STATUS0 0x0 /* PF_BAR0 */
#define busnum_CAVM_EHSM_JTAG_CMD_STATUS0 0
#define arguments_CAVM_EHSM_JTAG_CMD_STATUS0 -1,-1,-1,-1

/**
 * Register (NCB32b) ehsm_jtag_cmd_status1
 *
 * JTAG Command Status 1. Register
 * This register contains status 1 associated with a BCM primitive command from JTAG interface.
 */
union cavm_ehsm_jtag_cmd_status1
{
    uint32_t u;
    struct cavm_ehsm_jtag_cmd_status1_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t data                  : 32; /**< [ 31:  0](R/W) x */
#else /* Word 0 - Little Endian */
        uint32_t data                  : 32; /**< [ 31:  0](R/W) x */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_ehsm_jtag_cmd_status1_s cn; */
};
typedef union cavm_ehsm_jtag_cmd_status1 cavm_ehsm_jtag_cmd_status1_t;

#define CAVM_EHSM_JTAG_CMD_STATUS1 CAVM_EHSM_JTAG_CMD_STATUS1_FUNC()
static inline uint64_t CAVM_EHSM_JTAG_CMD_STATUS1_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_EHSM_JTAG_CMD_STATUS1_FUNC(void)
{
    return 0x80b000000388ll;
}

#define typedef_CAVM_EHSM_JTAG_CMD_STATUS1 cavm_ehsm_jtag_cmd_status1_t
#define bustype_CAVM_EHSM_JTAG_CMD_STATUS1 CSR_TYPE_NCB32b
#define basename_CAVM_EHSM_JTAG_CMD_STATUS1 "EHSM_JTAG_CMD_STATUS1"
#define device_bar_CAVM_EHSM_JTAG_CMD_STATUS1 0x0 /* PF_BAR0 */
#define busnum_CAVM_EHSM_JTAG_CMD_STATUS1 0
#define arguments_CAVM_EHSM_JTAG_CMD_STATUS1 -1,-1,-1,-1

/**
 * Register (NCB32b) ehsm_jtag_cmd_status10
 *
 * JTAG Command Status 10. Register
 * This register contains status 10 associated with a BCM primitive command from JTAG interface.
 */
union cavm_ehsm_jtag_cmd_status10
{
    uint32_t u;
    struct cavm_ehsm_jtag_cmd_status10_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t data                  : 32; /**< [ 31:  0](R/W) x */
#else /* Word 0 - Little Endian */
        uint32_t data                  : 32; /**< [ 31:  0](R/W) x */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_ehsm_jtag_cmd_status10_s cn; */
};
typedef union cavm_ehsm_jtag_cmd_status10 cavm_ehsm_jtag_cmd_status10_t;

#define CAVM_EHSM_JTAG_CMD_STATUS10 CAVM_EHSM_JTAG_CMD_STATUS10_FUNC()
static inline uint64_t CAVM_EHSM_JTAG_CMD_STATUS10_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_EHSM_JTAG_CMD_STATUS10_FUNC(void)
{
    return 0x80b0000003acll;
}

#define typedef_CAVM_EHSM_JTAG_CMD_STATUS10 cavm_ehsm_jtag_cmd_status10_t
#define bustype_CAVM_EHSM_JTAG_CMD_STATUS10 CSR_TYPE_NCB32b
#define basename_CAVM_EHSM_JTAG_CMD_STATUS10 "EHSM_JTAG_CMD_STATUS10"
#define device_bar_CAVM_EHSM_JTAG_CMD_STATUS10 0x0 /* PF_BAR0 */
#define busnum_CAVM_EHSM_JTAG_CMD_STATUS10 0
#define arguments_CAVM_EHSM_JTAG_CMD_STATUS10 -1,-1,-1,-1

/**
 * Register (NCB32b) ehsm_jtag_cmd_status11
 *
 * JTAG Command Status 11. Register
 * This register contains status 11 associated with a BCM primitive command from JTAG interface.
 */
union cavm_ehsm_jtag_cmd_status11
{
    uint32_t u;
    struct cavm_ehsm_jtag_cmd_status11_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t data                  : 32; /**< [ 31:  0](R/W) x */
#else /* Word 0 - Little Endian */
        uint32_t data                  : 32; /**< [ 31:  0](R/W) x */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_ehsm_jtag_cmd_status11_s cn; */
};
typedef union cavm_ehsm_jtag_cmd_status11 cavm_ehsm_jtag_cmd_status11_t;

#define CAVM_EHSM_JTAG_CMD_STATUS11 CAVM_EHSM_JTAG_CMD_STATUS11_FUNC()
static inline uint64_t CAVM_EHSM_JTAG_CMD_STATUS11_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_EHSM_JTAG_CMD_STATUS11_FUNC(void)
{
    return 0x80b0000003b0ll;
}

#define typedef_CAVM_EHSM_JTAG_CMD_STATUS11 cavm_ehsm_jtag_cmd_status11_t
#define bustype_CAVM_EHSM_JTAG_CMD_STATUS11 CSR_TYPE_NCB32b
#define basename_CAVM_EHSM_JTAG_CMD_STATUS11 "EHSM_JTAG_CMD_STATUS11"
#define device_bar_CAVM_EHSM_JTAG_CMD_STATUS11 0x0 /* PF_BAR0 */
#define busnum_CAVM_EHSM_JTAG_CMD_STATUS11 0
#define arguments_CAVM_EHSM_JTAG_CMD_STATUS11 -1,-1,-1,-1

/**
 * Register (NCB32b) ehsm_jtag_cmd_status12
 *
 * JTAG Command Status 12. Register
 * This register contains status 12 associated with a BCM primitive command from JTAG interface.
 */
union cavm_ehsm_jtag_cmd_status12
{
    uint32_t u;
    struct cavm_ehsm_jtag_cmd_status12_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t data                  : 32; /**< [ 31:  0](R/W) x */
#else /* Word 0 - Little Endian */
        uint32_t data                  : 32; /**< [ 31:  0](R/W) x */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_ehsm_jtag_cmd_status12_s cn; */
};
typedef union cavm_ehsm_jtag_cmd_status12 cavm_ehsm_jtag_cmd_status12_t;

#define CAVM_EHSM_JTAG_CMD_STATUS12 CAVM_EHSM_JTAG_CMD_STATUS12_FUNC()
static inline uint64_t CAVM_EHSM_JTAG_CMD_STATUS12_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_EHSM_JTAG_CMD_STATUS12_FUNC(void)
{
    return 0x80b0000003b4ll;
}

#define typedef_CAVM_EHSM_JTAG_CMD_STATUS12 cavm_ehsm_jtag_cmd_status12_t
#define bustype_CAVM_EHSM_JTAG_CMD_STATUS12 CSR_TYPE_NCB32b
#define basename_CAVM_EHSM_JTAG_CMD_STATUS12 "EHSM_JTAG_CMD_STATUS12"
#define device_bar_CAVM_EHSM_JTAG_CMD_STATUS12 0x0 /* PF_BAR0 */
#define busnum_CAVM_EHSM_JTAG_CMD_STATUS12 0
#define arguments_CAVM_EHSM_JTAG_CMD_STATUS12 -1,-1,-1,-1

/**
 * Register (NCB32b) ehsm_jtag_cmd_status13
 *
 * JTAG Command Status 13. Register
 * This register contains status 13 associated with a BCM primitive command from JTAG interface.
 */
union cavm_ehsm_jtag_cmd_status13
{
    uint32_t u;
    struct cavm_ehsm_jtag_cmd_status13_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t data                  : 32; /**< [ 31:  0](R/W) x */
#else /* Word 0 - Little Endian */
        uint32_t data                  : 32; /**< [ 31:  0](R/W) x */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_ehsm_jtag_cmd_status13_s cn; */
};
typedef union cavm_ehsm_jtag_cmd_status13 cavm_ehsm_jtag_cmd_status13_t;

#define CAVM_EHSM_JTAG_CMD_STATUS13 CAVM_EHSM_JTAG_CMD_STATUS13_FUNC()
static inline uint64_t CAVM_EHSM_JTAG_CMD_STATUS13_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_EHSM_JTAG_CMD_STATUS13_FUNC(void)
{
    return 0x80b0000003b8ll;
}

#define typedef_CAVM_EHSM_JTAG_CMD_STATUS13 cavm_ehsm_jtag_cmd_status13_t
#define bustype_CAVM_EHSM_JTAG_CMD_STATUS13 CSR_TYPE_NCB32b
#define basename_CAVM_EHSM_JTAG_CMD_STATUS13 "EHSM_JTAG_CMD_STATUS13"
#define device_bar_CAVM_EHSM_JTAG_CMD_STATUS13 0x0 /* PF_BAR0 */
#define busnum_CAVM_EHSM_JTAG_CMD_STATUS13 0
#define arguments_CAVM_EHSM_JTAG_CMD_STATUS13 -1,-1,-1,-1

/**
 * Register (NCB32b) ehsm_jtag_cmd_status14
 *
 * JTAG Command Status 14. Register
 * This register contains status 14 associated with a BCM primitive command from JTAG interface.
 */
union cavm_ehsm_jtag_cmd_status14
{
    uint32_t u;
    struct cavm_ehsm_jtag_cmd_status14_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t data                  : 32; /**< [ 31:  0](R/W) x */
#else /* Word 0 - Little Endian */
        uint32_t data                  : 32; /**< [ 31:  0](R/W) x */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_ehsm_jtag_cmd_status14_s cn; */
};
typedef union cavm_ehsm_jtag_cmd_status14 cavm_ehsm_jtag_cmd_status14_t;

#define CAVM_EHSM_JTAG_CMD_STATUS14 CAVM_EHSM_JTAG_CMD_STATUS14_FUNC()
static inline uint64_t CAVM_EHSM_JTAG_CMD_STATUS14_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_EHSM_JTAG_CMD_STATUS14_FUNC(void)
{
    return 0x80b0000003bcll;
}

#define typedef_CAVM_EHSM_JTAG_CMD_STATUS14 cavm_ehsm_jtag_cmd_status14_t
#define bustype_CAVM_EHSM_JTAG_CMD_STATUS14 CSR_TYPE_NCB32b
#define basename_CAVM_EHSM_JTAG_CMD_STATUS14 "EHSM_JTAG_CMD_STATUS14"
#define device_bar_CAVM_EHSM_JTAG_CMD_STATUS14 0x0 /* PF_BAR0 */
#define busnum_CAVM_EHSM_JTAG_CMD_STATUS14 0
#define arguments_CAVM_EHSM_JTAG_CMD_STATUS14 -1,-1,-1,-1

/**
 * Register (NCB32b) ehsm_jtag_cmd_status15
 *
 * JTAG Command Status 15. Register
 * This register contains status 15 associated with a BCM primitive command from JTAG interface.
 */
union cavm_ehsm_jtag_cmd_status15
{
    uint32_t u;
    struct cavm_ehsm_jtag_cmd_status15_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t data                  : 32; /**< [ 31:  0](R/W) x */
#else /* Word 0 - Little Endian */
        uint32_t data                  : 32; /**< [ 31:  0](R/W) x */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_ehsm_jtag_cmd_status15_s cn; */
};
typedef union cavm_ehsm_jtag_cmd_status15 cavm_ehsm_jtag_cmd_status15_t;

#define CAVM_EHSM_JTAG_CMD_STATUS15 CAVM_EHSM_JTAG_CMD_STATUS15_FUNC()
static inline uint64_t CAVM_EHSM_JTAG_CMD_STATUS15_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_EHSM_JTAG_CMD_STATUS15_FUNC(void)
{
    return 0x80b0000003c0ll;
}

#define typedef_CAVM_EHSM_JTAG_CMD_STATUS15 cavm_ehsm_jtag_cmd_status15_t
#define bustype_CAVM_EHSM_JTAG_CMD_STATUS15 CSR_TYPE_NCB32b
#define basename_CAVM_EHSM_JTAG_CMD_STATUS15 "EHSM_JTAG_CMD_STATUS15"
#define device_bar_CAVM_EHSM_JTAG_CMD_STATUS15 0x0 /* PF_BAR0 */
#define busnum_CAVM_EHSM_JTAG_CMD_STATUS15 0
#define arguments_CAVM_EHSM_JTAG_CMD_STATUS15 -1,-1,-1,-1

/**
 * Register (NCB32b) ehsm_jtag_cmd_status2
 *
 * JTAG Command Status 2. Register
 * This register contains status 2 associated with a BCM primitive command from JTAG interface.
 */
union cavm_ehsm_jtag_cmd_status2
{
    uint32_t u;
    struct cavm_ehsm_jtag_cmd_status2_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t data                  : 32; /**< [ 31:  0](R/W) x */
#else /* Word 0 - Little Endian */
        uint32_t data                  : 32; /**< [ 31:  0](R/W) x */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_ehsm_jtag_cmd_status2_s cn; */
};
typedef union cavm_ehsm_jtag_cmd_status2 cavm_ehsm_jtag_cmd_status2_t;

#define CAVM_EHSM_JTAG_CMD_STATUS2 CAVM_EHSM_JTAG_CMD_STATUS2_FUNC()
static inline uint64_t CAVM_EHSM_JTAG_CMD_STATUS2_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_EHSM_JTAG_CMD_STATUS2_FUNC(void)
{
    return 0x80b00000038cll;
}

#define typedef_CAVM_EHSM_JTAG_CMD_STATUS2 cavm_ehsm_jtag_cmd_status2_t
#define bustype_CAVM_EHSM_JTAG_CMD_STATUS2 CSR_TYPE_NCB32b
#define basename_CAVM_EHSM_JTAG_CMD_STATUS2 "EHSM_JTAG_CMD_STATUS2"
#define device_bar_CAVM_EHSM_JTAG_CMD_STATUS2 0x0 /* PF_BAR0 */
#define busnum_CAVM_EHSM_JTAG_CMD_STATUS2 0
#define arguments_CAVM_EHSM_JTAG_CMD_STATUS2 -1,-1,-1,-1

/**
 * Register (NCB32b) ehsm_jtag_cmd_status3
 *
 * JTAG Command Status 3. Register
 * This register contains status 3 associated with a BCM primitive command from JTAG interface.
 */
union cavm_ehsm_jtag_cmd_status3
{
    uint32_t u;
    struct cavm_ehsm_jtag_cmd_status3_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t data                  : 32; /**< [ 31:  0](R/W) x */
#else /* Word 0 - Little Endian */
        uint32_t data                  : 32; /**< [ 31:  0](R/W) x */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_ehsm_jtag_cmd_status3_s cn; */
};
typedef union cavm_ehsm_jtag_cmd_status3 cavm_ehsm_jtag_cmd_status3_t;

#define CAVM_EHSM_JTAG_CMD_STATUS3 CAVM_EHSM_JTAG_CMD_STATUS3_FUNC()
static inline uint64_t CAVM_EHSM_JTAG_CMD_STATUS3_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_EHSM_JTAG_CMD_STATUS3_FUNC(void)
{
    return 0x80b000000390ll;
}

#define typedef_CAVM_EHSM_JTAG_CMD_STATUS3 cavm_ehsm_jtag_cmd_status3_t
#define bustype_CAVM_EHSM_JTAG_CMD_STATUS3 CSR_TYPE_NCB32b
#define basename_CAVM_EHSM_JTAG_CMD_STATUS3 "EHSM_JTAG_CMD_STATUS3"
#define device_bar_CAVM_EHSM_JTAG_CMD_STATUS3 0x0 /* PF_BAR0 */
#define busnum_CAVM_EHSM_JTAG_CMD_STATUS3 0
#define arguments_CAVM_EHSM_JTAG_CMD_STATUS3 -1,-1,-1,-1

/**
 * Register (NCB32b) ehsm_jtag_cmd_status4
 *
 * JTAG Command Status 4. Register
 * This register contains status 4 associated with a BCM primitive command from JTAG interface.
 */
union cavm_ehsm_jtag_cmd_status4
{
    uint32_t u;
    struct cavm_ehsm_jtag_cmd_status4_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t data                  : 32; /**< [ 31:  0](R/W) x */
#else /* Word 0 - Little Endian */
        uint32_t data                  : 32; /**< [ 31:  0](R/W) x */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_ehsm_jtag_cmd_status4_s cn; */
};
typedef union cavm_ehsm_jtag_cmd_status4 cavm_ehsm_jtag_cmd_status4_t;

#define CAVM_EHSM_JTAG_CMD_STATUS4 CAVM_EHSM_JTAG_CMD_STATUS4_FUNC()
static inline uint64_t CAVM_EHSM_JTAG_CMD_STATUS4_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_EHSM_JTAG_CMD_STATUS4_FUNC(void)
{
    return 0x80b000000394ll;
}

#define typedef_CAVM_EHSM_JTAG_CMD_STATUS4 cavm_ehsm_jtag_cmd_status4_t
#define bustype_CAVM_EHSM_JTAG_CMD_STATUS4 CSR_TYPE_NCB32b
#define basename_CAVM_EHSM_JTAG_CMD_STATUS4 "EHSM_JTAG_CMD_STATUS4"
#define device_bar_CAVM_EHSM_JTAG_CMD_STATUS4 0x0 /* PF_BAR0 */
#define busnum_CAVM_EHSM_JTAG_CMD_STATUS4 0
#define arguments_CAVM_EHSM_JTAG_CMD_STATUS4 -1,-1,-1,-1

/**
 * Register (NCB32b) ehsm_jtag_cmd_status5
 *
 * JTAG Command Status 5. Register
 * This register contains status 5 associated with a BCM primitive command from JTAG interface.
 */
union cavm_ehsm_jtag_cmd_status5
{
    uint32_t u;
    struct cavm_ehsm_jtag_cmd_status5_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t data                  : 32; /**< [ 31:  0](R/W) x */
#else /* Word 0 - Little Endian */
        uint32_t data                  : 32; /**< [ 31:  0](R/W) x */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_ehsm_jtag_cmd_status5_s cn; */
};
typedef union cavm_ehsm_jtag_cmd_status5 cavm_ehsm_jtag_cmd_status5_t;

#define CAVM_EHSM_JTAG_CMD_STATUS5 CAVM_EHSM_JTAG_CMD_STATUS5_FUNC()
static inline uint64_t CAVM_EHSM_JTAG_CMD_STATUS5_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_EHSM_JTAG_CMD_STATUS5_FUNC(void)
{
    return 0x80b000000398ll;
}

#define typedef_CAVM_EHSM_JTAG_CMD_STATUS5 cavm_ehsm_jtag_cmd_status5_t
#define bustype_CAVM_EHSM_JTAG_CMD_STATUS5 CSR_TYPE_NCB32b
#define basename_CAVM_EHSM_JTAG_CMD_STATUS5 "EHSM_JTAG_CMD_STATUS5"
#define device_bar_CAVM_EHSM_JTAG_CMD_STATUS5 0x0 /* PF_BAR0 */
#define busnum_CAVM_EHSM_JTAG_CMD_STATUS5 0
#define arguments_CAVM_EHSM_JTAG_CMD_STATUS5 -1,-1,-1,-1

/**
 * Register (NCB32b) ehsm_jtag_cmd_status6
 *
 * JTAG Command Status 6. Register
 * This register contains status 6 associated with a BCM primitive command from JTAG interface.
 */
union cavm_ehsm_jtag_cmd_status6
{
    uint32_t u;
    struct cavm_ehsm_jtag_cmd_status6_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t data                  : 32; /**< [ 31:  0](R/W) x */
#else /* Word 0 - Little Endian */
        uint32_t data                  : 32; /**< [ 31:  0](R/W) x */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_ehsm_jtag_cmd_status6_s cn; */
};
typedef union cavm_ehsm_jtag_cmd_status6 cavm_ehsm_jtag_cmd_status6_t;

#define CAVM_EHSM_JTAG_CMD_STATUS6 CAVM_EHSM_JTAG_CMD_STATUS6_FUNC()
static inline uint64_t CAVM_EHSM_JTAG_CMD_STATUS6_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_EHSM_JTAG_CMD_STATUS6_FUNC(void)
{
    return 0x80b00000039cll;
}

#define typedef_CAVM_EHSM_JTAG_CMD_STATUS6 cavm_ehsm_jtag_cmd_status6_t
#define bustype_CAVM_EHSM_JTAG_CMD_STATUS6 CSR_TYPE_NCB32b
#define basename_CAVM_EHSM_JTAG_CMD_STATUS6 "EHSM_JTAG_CMD_STATUS6"
#define device_bar_CAVM_EHSM_JTAG_CMD_STATUS6 0x0 /* PF_BAR0 */
#define busnum_CAVM_EHSM_JTAG_CMD_STATUS6 0
#define arguments_CAVM_EHSM_JTAG_CMD_STATUS6 -1,-1,-1,-1

/**
 * Register (NCB32b) ehsm_jtag_cmd_status7
 *
 * JTAG Command Status 7. Register
 * This register contains status 7 associated with a BCM primitive command from JTAG interface.
 */
union cavm_ehsm_jtag_cmd_status7
{
    uint32_t u;
    struct cavm_ehsm_jtag_cmd_status7_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t data                  : 32; /**< [ 31:  0](R/W) x */
#else /* Word 0 - Little Endian */
        uint32_t data                  : 32; /**< [ 31:  0](R/W) x */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_ehsm_jtag_cmd_status7_s cn; */
};
typedef union cavm_ehsm_jtag_cmd_status7 cavm_ehsm_jtag_cmd_status7_t;

#define CAVM_EHSM_JTAG_CMD_STATUS7 CAVM_EHSM_JTAG_CMD_STATUS7_FUNC()
static inline uint64_t CAVM_EHSM_JTAG_CMD_STATUS7_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_EHSM_JTAG_CMD_STATUS7_FUNC(void)
{
    return 0x80b0000003a0ll;
}

#define typedef_CAVM_EHSM_JTAG_CMD_STATUS7 cavm_ehsm_jtag_cmd_status7_t
#define bustype_CAVM_EHSM_JTAG_CMD_STATUS7 CSR_TYPE_NCB32b
#define basename_CAVM_EHSM_JTAG_CMD_STATUS7 "EHSM_JTAG_CMD_STATUS7"
#define device_bar_CAVM_EHSM_JTAG_CMD_STATUS7 0x0 /* PF_BAR0 */
#define busnum_CAVM_EHSM_JTAG_CMD_STATUS7 0
#define arguments_CAVM_EHSM_JTAG_CMD_STATUS7 -1,-1,-1,-1

/**
 * Register (NCB32b) ehsm_jtag_cmd_status8
 *
 * JTAG Command Status 8. Register
 * This register contains status 8 associated with a BCM primitive command from JTAG interface.
 */
union cavm_ehsm_jtag_cmd_status8
{
    uint32_t u;
    struct cavm_ehsm_jtag_cmd_status8_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t data                  : 32; /**< [ 31:  0](R/W) x */
#else /* Word 0 - Little Endian */
        uint32_t data                  : 32; /**< [ 31:  0](R/W) x */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_ehsm_jtag_cmd_status8_s cn; */
};
typedef union cavm_ehsm_jtag_cmd_status8 cavm_ehsm_jtag_cmd_status8_t;

#define CAVM_EHSM_JTAG_CMD_STATUS8 CAVM_EHSM_JTAG_CMD_STATUS8_FUNC()
static inline uint64_t CAVM_EHSM_JTAG_CMD_STATUS8_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_EHSM_JTAG_CMD_STATUS8_FUNC(void)
{
    return 0x80b0000003a4ll;
}

#define typedef_CAVM_EHSM_JTAG_CMD_STATUS8 cavm_ehsm_jtag_cmd_status8_t
#define bustype_CAVM_EHSM_JTAG_CMD_STATUS8 CSR_TYPE_NCB32b
#define basename_CAVM_EHSM_JTAG_CMD_STATUS8 "EHSM_JTAG_CMD_STATUS8"
#define device_bar_CAVM_EHSM_JTAG_CMD_STATUS8 0x0 /* PF_BAR0 */
#define busnum_CAVM_EHSM_JTAG_CMD_STATUS8 0
#define arguments_CAVM_EHSM_JTAG_CMD_STATUS8 -1,-1,-1,-1

/**
 * Register (NCB32b) ehsm_jtag_cmd_status9
 *
 * JTAG Command Status 9. Register
 * This register contains status 9 associated with a BCM primitive command from JTAG interface.
 */
union cavm_ehsm_jtag_cmd_status9
{
    uint32_t u;
    struct cavm_ehsm_jtag_cmd_status9_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t data                  : 32; /**< [ 31:  0](R/W) x */
#else /* Word 0 - Little Endian */
        uint32_t data                  : 32; /**< [ 31:  0](R/W) x */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_ehsm_jtag_cmd_status9_s cn; */
};
typedef union cavm_ehsm_jtag_cmd_status9 cavm_ehsm_jtag_cmd_status9_t;

#define CAVM_EHSM_JTAG_CMD_STATUS9 CAVM_EHSM_JTAG_CMD_STATUS9_FUNC()
static inline uint64_t CAVM_EHSM_JTAG_CMD_STATUS9_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_EHSM_JTAG_CMD_STATUS9_FUNC(void)
{
    return 0x80b0000003a8ll;
}

#define typedef_CAVM_EHSM_JTAG_CMD_STATUS9 cavm_ehsm_jtag_cmd_status9_t
#define bustype_CAVM_EHSM_JTAG_CMD_STATUS9 CSR_TYPE_NCB32b
#define basename_CAVM_EHSM_JTAG_CMD_STATUS9 "EHSM_JTAG_CMD_STATUS9"
#define device_bar_CAVM_EHSM_JTAG_CMD_STATUS9 0x0 /* PF_BAR0 */
#define busnum_CAVM_EHSM_JTAG_CMD_STATUS9 0
#define arguments_CAVM_EHSM_JTAG_CMD_STATUS9 -1,-1,-1,-1

/**
 * Register (NCB32b) ehsm_jtag_intf_status
 *
 * JTAG Interface Status. Register
 * x
 */
union cavm_ehsm_jtag_intf_status
{
    uint32_t u;
    struct cavm_ehsm_jtag_intf_status_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t reserved_2_31         : 30;
        uint32_t cm3_write_done        : 1;  /**< [  1:  1](R/W) CM3 write this bit to 1 to indicate that CM3 finished writing all CMD return
                                                                 status and status 0~15 for JTAG interface. */
        uint32_t cm3_read_done         : 1;  /**< [  0:  0](R/W) CM3 write this bit to 1 to indicate that CM3 finished reading all CMD parameters
                                                                 and CMD ID from JTAG interface. */
#else /* Word 0 - Little Endian */
        uint32_t cm3_read_done         : 1;  /**< [  0:  0](R/W) CM3 write this bit to 1 to indicate that CM3 finished reading all CMD parameters
                                                                 and CMD ID from JTAG interface. */
        uint32_t cm3_write_done        : 1;  /**< [  1:  1](R/W) CM3 write this bit to 1 to indicate that CM3 finished writing all CMD return
                                                                 status and status 0~15 for JTAG interface. */
        uint32_t reserved_2_31         : 30;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_ehsm_jtag_intf_status_s cn; */
};
typedef union cavm_ehsm_jtag_intf_status cavm_ehsm_jtag_intf_status_t;

#define CAVM_EHSM_JTAG_INTF_STATUS CAVM_EHSM_JTAG_INTF_STATUS_FUNC()
static inline uint64_t CAVM_EHSM_JTAG_INTF_STATUS_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_EHSM_JTAG_INTF_STATUS_FUNC(void)
{
    return 0x80b000000348ll;
}

#define typedef_CAVM_EHSM_JTAG_INTF_STATUS cavm_ehsm_jtag_intf_status_t
#define bustype_CAVM_EHSM_JTAG_INTF_STATUS CSR_TYPE_NCB32b
#define basename_CAVM_EHSM_JTAG_INTF_STATUS "EHSM_JTAG_INTF_STATUS"
#define device_bar_CAVM_EHSM_JTAG_INTF_STATUS 0x0 /* PF_BAR0 */
#define busnum_CAVM_EHSM_JTAG_INTF_STATUS 0
#define arguments_CAVM_EHSM_JTAG_INTF_STATUS -1,-1,-1,-1

/**
 * Register (NCB32b) ehsm_key_revoc_status
 *
 * Key Revocation Status Register. Register
 * This is for BCM-78
 */
union cavm_ehsm_key_revoc_status
{
    uint32_t u;
    struct cavm_ehsm_key_revoc_status_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t reserved_19_31        : 13;
        uint32_t key_revocation_control : 3; /**< [ 18: 16](RO) This is the shadow register for key_revocation_control field from OTP. */
        uint32_t key_manifest_version_control : 16;/**< [ 15:  0](RO) This is the shadow register for key_manifest_version_control field from OTP. */
#else /* Word 0 - Little Endian */
        uint32_t key_manifest_version_control : 16;/**< [ 15:  0](RO) This is the shadow register for key_manifest_version_control field from OTP. */
        uint32_t key_revocation_control : 3; /**< [ 18: 16](RO) This is the shadow register for key_revocation_control field from OTP. */
        uint32_t reserved_19_31        : 13;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_ehsm_key_revoc_status_s cn; */
};
typedef union cavm_ehsm_key_revoc_status cavm_ehsm_key_revoc_status_t;

#define CAVM_EHSM_KEY_REVOC_STATUS CAVM_EHSM_KEY_REVOC_STATUS_FUNC()
static inline uint64_t CAVM_EHSM_KEY_REVOC_STATUS_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_EHSM_KEY_REVOC_STATUS_FUNC(void)
{
    return 0x80b000000120ll;
}

#define typedef_CAVM_EHSM_KEY_REVOC_STATUS cavm_ehsm_key_revoc_status_t
#define bustype_CAVM_EHSM_KEY_REVOC_STATUS CSR_TYPE_NCB32b
#define basename_CAVM_EHSM_KEY_REVOC_STATUS "EHSM_KEY_REVOC_STATUS"
#define device_bar_CAVM_EHSM_KEY_REVOC_STATUS 0x0 /* PF_BAR0 */
#define busnum_CAVM_EHSM_KEY_REVOC_STATUS 0
#define arguments_CAVM_EHSM_KEY_REVOC_STATUS -1,-1,-1,-1

/**
 * Register (NCB32b) ehsm_lcs_debug_port_status
 *
 * Device LCS and Debug Port Access Status Register. Register
 * This is for BCM-78
 */
union cavm_ehsm_lcs_debug_port_status
{
    uint32_t u;
    struct cavm_ehsm_lcs_debug_port_status_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t reserved_30_31        : 2;
        uint32_t remaining_enable_disable_spare1 : 4;/**< [ 29: 26](RO) Remaining configuration for programming enable_disable_spare1 field in OTP
                                                                 efuse. Valid range is 0~10. User can program enable_disable_spare1 for 10 times. */
        uint32_t remaining_enable_disable_spare0 : 4;/**< [ 25: 22](RO) Remaining configuration for programming enable_disable_spare0 field in OTP
                                                                 efuse. Valid range is 0~10. User can program enable_disable_spare0 for 10 times. */
        uint32_t final_disable_spare1_debug : 1;/**< [ 21: 21](RO) This is the shadow register for current spare1 debug port access state from OTP. */
        uint32_t final_disable_spare0_debug : 1;/**< [ 20: 20](RO) This is the shadow register for current spare0 debug port access state from OTP. */
        uint32_t final_disable_ap_spniden_debug : 1;/**< [ 19: 19](RO) This is the shadow register for current ap_spniden debug port access state from OTP. */
        uint32_t final_disable_ap_spiden_debug : 1;/**< [ 18: 18](RO) This is the shadow register for current ap_spiden debug port access state from OTP. */
        uint32_t final_disable_ap_niden_debug : 1;/**< [ 17: 17](RO) This is the shadow register for current ap_niden debug port access state from OTP. */
        uint32_t final_disable_ap_dbgen_debug : 1;/**< [ 16: 16](RO) This is the shadow register for current ap_dbgen debug port access state from OTP. */
        uint32_t final_disable_mcp_debug : 1;/**< [ 15: 15](RO) This is the shadow register for current MCP debug port access state from OTP. */
        uint32_t final_disable_jtag_debug : 1;/**< [ 14: 14](RO) This is the shadow register for current JTAG debug port access state from OTP. */
        uint32_t final_disable_ehsm_debug : 1;/**< [ 13: 13](RO) This is the shadow register for current EHSM debug port access state from OTP. */
        uint32_t permnt_disable_ap_spare1 : 1;/**< [ 12: 12](RO) This is the shadow register for permnt_disable_ap_spare1 field from OTP efuse. */
        uint32_t permnt_disable_ap_spare0 : 1;/**< [ 11: 11](RO) This is the shadow register for permnt_disable_ap_spare0 field from OTP efuse. */
        uint32_t permnt_disable_ap_spniden : 1;/**< [ 10: 10](RO) This is the shadow register for permnt_disable_ap_spniden field from OTP efuse. */
        uint32_t permnt_disable_ap_spiden : 1;/**< [  9:  9](RO) This is the shadow register for permnt_disable_ap_spiden field from OTP efuse. */
        uint32_t permnt_disable_ap_niden : 1;/**< [  8:  8](RO) This is the shadow register for permnt_disable_ap_niden field from OTP efuse. */
        uint32_t permnt_disable_ap_dbgen : 1;/**< [  7:  7](RO) This is the shadow register for permnt_disable_ap_dbgen field from OTP efuse. */
        uint32_t permnt_disable_mcp_jtag : 1;/**< [  6:  6](RO) This is the shadow register for permnt_disable_mcp_jtag field from OTP efuse. */
        uint32_t permnt_disable_jtag_debug : 1;/**< [  5:  5](RO) This is the shadow register for permnt_disable_jtag_debug field from OTP efuse. */
        uint32_t permnt_disable_ehsm_debug : 1;/**< [  4:  4](RO) This is the shadow register for permnt_disable_ehsm_debug from field OTP efuse. */
        uint32_t life_cycle_state      : 4;  /**< [  3:  0](RO) This is the shadow register for life cycle state field from OTP efuse. */
#else /* Word 0 - Little Endian */
        uint32_t life_cycle_state      : 4;  /**< [  3:  0](RO) This is the shadow register for life cycle state field from OTP efuse. */
        uint32_t permnt_disable_ehsm_debug : 1;/**< [  4:  4](RO) This is the shadow register for permnt_disable_ehsm_debug from field OTP efuse. */
        uint32_t permnt_disable_jtag_debug : 1;/**< [  5:  5](RO) This is the shadow register for permnt_disable_jtag_debug field from OTP efuse. */
        uint32_t permnt_disable_mcp_jtag : 1;/**< [  6:  6](RO) This is the shadow register for permnt_disable_mcp_jtag field from OTP efuse. */
        uint32_t permnt_disable_ap_dbgen : 1;/**< [  7:  7](RO) This is the shadow register for permnt_disable_ap_dbgen field from OTP efuse. */
        uint32_t permnt_disable_ap_niden : 1;/**< [  8:  8](RO) This is the shadow register for permnt_disable_ap_niden field from OTP efuse. */
        uint32_t permnt_disable_ap_spiden : 1;/**< [  9:  9](RO) This is the shadow register for permnt_disable_ap_spiden field from OTP efuse. */
        uint32_t permnt_disable_ap_spniden : 1;/**< [ 10: 10](RO) This is the shadow register for permnt_disable_ap_spniden field from OTP efuse. */
        uint32_t permnt_disable_ap_spare0 : 1;/**< [ 11: 11](RO) This is the shadow register for permnt_disable_ap_spare0 field from OTP efuse. */
        uint32_t permnt_disable_ap_spare1 : 1;/**< [ 12: 12](RO) This is the shadow register for permnt_disable_ap_spare1 field from OTP efuse. */
        uint32_t final_disable_ehsm_debug : 1;/**< [ 13: 13](RO) This is the shadow register for current EHSM debug port access state from OTP. */
        uint32_t final_disable_jtag_debug : 1;/**< [ 14: 14](RO) This is the shadow register for current JTAG debug port access state from OTP. */
        uint32_t final_disable_mcp_debug : 1;/**< [ 15: 15](RO) This is the shadow register for current MCP debug port access state from OTP. */
        uint32_t final_disable_ap_dbgen_debug : 1;/**< [ 16: 16](RO) This is the shadow register for current ap_dbgen debug port access state from OTP. */
        uint32_t final_disable_ap_niden_debug : 1;/**< [ 17: 17](RO) This is the shadow register for current ap_niden debug port access state from OTP. */
        uint32_t final_disable_ap_spiden_debug : 1;/**< [ 18: 18](RO) This is the shadow register for current ap_spiden debug port access state from OTP. */
        uint32_t final_disable_ap_spniden_debug : 1;/**< [ 19: 19](RO) This is the shadow register for current ap_spniden debug port access state from OTP. */
        uint32_t final_disable_spare0_debug : 1;/**< [ 20: 20](RO) This is the shadow register for current spare0 debug port access state from OTP. */
        uint32_t final_disable_spare1_debug : 1;/**< [ 21: 21](RO) This is the shadow register for current spare1 debug port access state from OTP. */
        uint32_t remaining_enable_disable_spare0 : 4;/**< [ 25: 22](RO) Remaining configuration for programming enable_disable_spare0 field in OTP
                                                                 efuse. Valid range is 0~10. User can program enable_disable_spare0 for 10 times. */
        uint32_t remaining_enable_disable_spare1 : 4;/**< [ 29: 26](RO) Remaining configuration for programming enable_disable_spare1 field in OTP
                                                                 efuse. Valid range is 0~10. User can program enable_disable_spare1 for 10 times. */
        uint32_t reserved_30_31        : 2;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_ehsm_lcs_debug_port_status_s cn; */
};
typedef union cavm_ehsm_lcs_debug_port_status cavm_ehsm_lcs_debug_port_status_t;

#define CAVM_EHSM_LCS_DEBUG_PORT_STATUS CAVM_EHSM_LCS_DEBUG_PORT_STATUS_FUNC()
static inline uint64_t CAVM_EHSM_LCS_DEBUG_PORT_STATUS_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_EHSM_LCS_DEBUG_PORT_STATUS_FUNC(void)
{
    return 0x80b000000114ll;
}

#define typedef_CAVM_EHSM_LCS_DEBUG_PORT_STATUS cavm_ehsm_lcs_debug_port_status_t
#define bustype_CAVM_EHSM_LCS_DEBUG_PORT_STATUS CSR_TYPE_NCB32b
#define basename_CAVM_EHSM_LCS_DEBUG_PORT_STATUS "EHSM_LCS_DEBUG_PORT_STATUS"
#define device_bar_CAVM_EHSM_LCS_DEBUG_PORT_STATUS 0x0 /* PF_BAR0 */
#define busnum_CAVM_EHSM_LCS_DEBUG_PORT_STATUS 0
#define arguments_CAVM_EHSM_LCS_DEBUG_PORT_STATUS -1,-1,-1,-1

/**
 * Register (NCB) ehsm_msix_pba#
 *
 * EHSM MSI-X Pending Bit Array Registers
 * This register is the MSI-X PBA table; the bit number is indexed by the EHSM_INT_VEC_E enumeration.
 *
 * This register is reset on EHSM domain reset.
 */
union cavm_ehsm_msix_pbax
{
    uint64_t u;
    struct cavm_ehsm_msix_pbax_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t pend                  : 64; /**< [ 63:  0](RO/H) Pending message for the associated EHSM_MSIX_VEC()_CTL, enumerated by EHSM_INT_VEC_E. Bits
                                                                 that have no associated BCP_INT_VEC_E are 0. */
#else /* Word 0 - Little Endian */
        uint64_t pend                  : 64; /**< [ 63:  0](RO/H) Pending message for the associated EHSM_MSIX_VEC()_CTL, enumerated by EHSM_INT_VEC_E. Bits
                                                                 that have no associated BCP_INT_VEC_E are 0. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_ehsm_msix_pbax_s cn; */
};
typedef union cavm_ehsm_msix_pbax cavm_ehsm_msix_pbax_t;

static inline uint64_t CAVM_EHSM_MSIX_PBAX(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_EHSM_MSIX_PBAX(uint64_t a)
{
    if (a==0)
        return 0x80b0001f0000ll + 8ll * ((a) & 0x0);
    __cavm_csr_fatal("EHSM_MSIX_PBAX", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_EHSM_MSIX_PBAX(a) cavm_ehsm_msix_pbax_t
#define bustype_CAVM_EHSM_MSIX_PBAX(a) CSR_TYPE_NCB
#define basename_CAVM_EHSM_MSIX_PBAX(a) "EHSM_MSIX_PBAX"
#define device_bar_CAVM_EHSM_MSIX_PBAX(a) 0x4 /* PF_BAR4 */
#define busnum_CAVM_EHSM_MSIX_PBAX(a) (a)
#define arguments_CAVM_EHSM_MSIX_PBAX(a) (a),-1,-1,-1

/**
 * Register (NCB) ehsm_msix_vec#_addr
 *
 * EHSM MSI-X Vector-Table Address Register
 * This register is the MSI-X vector table, indexed by the EHSM_INT_VEC_E enumeration.
 *
 * This register is reset on EHSM domain reset.
 */
union cavm_ehsm_msix_vecx_addr
{
    uint64_t u;
    struct cavm_ehsm_msix_vecx_addr_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_53_63        : 11;
        uint64_t addr                  : 51; /**< [ 52:  2](R/W) IOVA to use for MSI-X delivery of this vector. */
        uint64_t reserved_1            : 1;
        uint64_t secvec                : 1;  /**< [  0:  0](SR/W) Secure vector.
                                                                 0 = This vector may be read or written by either secure or nonsecure states.
                                                                 The vector's IOVA is sent to the SMMU as nonsecure (though this only affects
                                                                 physical addresses if PCCPF_XXX_VSEC_SCTL[MSIX_PHYS]=1).

                                                                 1 = This vector's EHSM_MSIX_VEC()_ADDR, EHSM_MSIX_VEC()_CTL, and corresponding
                                                                 bit of EHSM_MSIX_PBA() are RAZ/WI and does not cause a fault when accessed
                                                                 by the nonsecure world.
                                                                 The vector's IOVA is sent to the SMMU as secure (though this only affects
                                                                 physical addresses if PCCPF_XXX_VSEC_SCTL[MSIX_PHYS]=1 or
                                                                 PCCPF_XXX_VSEC_SCTL[MSIX_SEC_PHYS]=1).

                                                                 If PCCPF_EHSM_VSEC_SCTL[MSIX_SEC] (for documentation, see PCCPF_XXX_VSEC_SCTL[MSIX_SEC]) is
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

                                                                 1 = This vector's EHSM_MSIX_VEC()_ADDR, EHSM_MSIX_VEC()_CTL, and corresponding
                                                                 bit of EHSM_MSIX_PBA() are RAZ/WI and does not cause a fault when accessed
                                                                 by the nonsecure world.
                                                                 The vector's IOVA is sent to the SMMU as secure (though this only affects
                                                                 physical addresses if PCCPF_XXX_VSEC_SCTL[MSIX_PHYS]=1 or
                                                                 PCCPF_XXX_VSEC_SCTL[MSIX_SEC_PHYS]=1).

                                                                 If PCCPF_EHSM_VSEC_SCTL[MSIX_SEC] (for documentation, see PCCPF_XXX_VSEC_SCTL[MSIX_SEC]) is
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
    /* struct cavm_ehsm_msix_vecx_addr_s cn; */
};
typedef union cavm_ehsm_msix_vecx_addr cavm_ehsm_msix_vecx_addr_t;

static inline uint64_t CAVM_EHSM_MSIX_VECX_ADDR(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_EHSM_MSIX_VECX_ADDR(uint64_t a)
{
    if (a<=1)
        return 0x80b000100000ll + 0x10ll * ((a) & 0x1);
    __cavm_csr_fatal("EHSM_MSIX_VECX_ADDR", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_EHSM_MSIX_VECX_ADDR(a) cavm_ehsm_msix_vecx_addr_t
#define bustype_CAVM_EHSM_MSIX_VECX_ADDR(a) CSR_TYPE_NCB
#define basename_CAVM_EHSM_MSIX_VECX_ADDR(a) "EHSM_MSIX_VECX_ADDR"
#define device_bar_CAVM_EHSM_MSIX_VECX_ADDR(a) 0x4 /* PF_BAR4 */
#define busnum_CAVM_EHSM_MSIX_VECX_ADDR(a) (a)
#define arguments_CAVM_EHSM_MSIX_VECX_ADDR(a) (a),-1,-1,-1

/**
 * Register (NCB) ehsm_msix_vec#_ctl
 *
 * EHSM MSI-X Vector-Table Control and Data Register
 * This register is the MSI-X vector table, indexed by the EHSM_INT_VEC_E enumeration.
 *
 * This register is reset on EHSM domain reset.
 */
union cavm_ehsm_msix_vecx_ctl
{
    uint64_t u;
    struct cavm_ehsm_msix_vecx_ctl_s
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
    /* struct cavm_ehsm_msix_vecx_ctl_s cn; */
};
typedef union cavm_ehsm_msix_vecx_ctl cavm_ehsm_msix_vecx_ctl_t;

static inline uint64_t CAVM_EHSM_MSIX_VECX_CTL(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_EHSM_MSIX_VECX_CTL(uint64_t a)
{
    if (a<=1)
        return 0x80b000100008ll + 0x10ll * ((a) & 0x1);
    __cavm_csr_fatal("EHSM_MSIX_VECX_CTL", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_EHSM_MSIX_VECX_CTL(a) cavm_ehsm_msix_vecx_ctl_t
#define bustype_CAVM_EHSM_MSIX_VECX_CTL(a) CSR_TYPE_NCB
#define basename_CAVM_EHSM_MSIX_VECX_CTL(a) "EHSM_MSIX_VECX_CTL"
#define device_bar_CAVM_EHSM_MSIX_VECX_CTL(a) 0x4 /* PF_BAR4 */
#define busnum_CAVM_EHSM_MSIX_VECX_CTL(a) (a)
#define arguments_CAVM_EHSM_MSIX_VECX_CTL(a) (a),-1,-1,-1

/**
 * Register (NCB32b) ehsm_remaining_config_status
 *
 * Remaining Congiuration Status Register. Register
 * This is for BCM-78
 */
union cavm_ehsm_remaining_config_status
{
    uint32_t u;
    struct cavm_ehsm_remaining_config_status_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t reserved_28_31        : 4;
        uint32_t remain_enable_disable_ap_spniden : 4;/**< [ 27: 24](RO) It indicate number of remaining configurations for enable_disable_ap_spniden.
                                                                 The valid range is 0~10. */
        uint32_t remain_enable_disable_ap_spiden : 4;/**< [ 23: 20](RO) It indicate number of remaining configurations for enable_disable_ap_spiden. The
                                                                 valid range is 0~10. */
        uint32_t remain_enable_disable_ap_niden : 4;/**< [ 19: 16](RO) It indicate number of remaining configurations for enable_disable_ap_niden. The
                                                                 valid range is 0~10. */
        uint32_t remain_enable_disable_ap_dbgen : 4;/**< [ 15: 12](RO) It indicate number of remaining configurations for enable_disable_ap_dbgen. The
                                                                 valid range is 0~10. */
        uint32_t remain_enable_disable_mcp_jtag : 4;/**< [ 11:  8](RO) It indicate number of remaining configurations for enable_disable_mcp_jtag. The
                                                                 valid range is 0~10. */
        uint32_t remain_enable_disable_debug_jtag : 4;/**< [  7:  4](RO) It indicate number of remaining configurations for enable_disable_debug_jtag.
                                                                 The valid range is 0~10. */
        uint32_t remain_enable_disable_ehsm_debug : 4;/**< [  3:  0](RO) It indicate number of remaining configurations for enable_disable_ehsm_debug.
                                                                 The valid range is 0~10. */
#else /* Word 0 - Little Endian */
        uint32_t remain_enable_disable_ehsm_debug : 4;/**< [  3:  0](RO) It indicate number of remaining configurations for enable_disable_ehsm_debug.
                                                                 The valid range is 0~10. */
        uint32_t remain_enable_disable_debug_jtag : 4;/**< [  7:  4](RO) It indicate number of remaining configurations for enable_disable_debug_jtag.
                                                                 The valid range is 0~10. */
        uint32_t remain_enable_disable_mcp_jtag : 4;/**< [ 11:  8](RO) It indicate number of remaining configurations for enable_disable_mcp_jtag. The
                                                                 valid range is 0~10. */
        uint32_t remain_enable_disable_ap_dbgen : 4;/**< [ 15: 12](RO) It indicate number of remaining configurations for enable_disable_ap_dbgen. The
                                                                 valid range is 0~10. */
        uint32_t remain_enable_disable_ap_niden : 4;/**< [ 19: 16](RO) It indicate number of remaining configurations for enable_disable_ap_niden. The
                                                                 valid range is 0~10. */
        uint32_t remain_enable_disable_ap_spiden : 4;/**< [ 23: 20](RO) It indicate number of remaining configurations for enable_disable_ap_spiden. The
                                                                 valid range is 0~10. */
        uint32_t remain_enable_disable_ap_spniden : 4;/**< [ 27: 24](RO) It indicate number of remaining configurations for enable_disable_ap_spniden.
                                                                 The valid range is 0~10. */
        uint32_t reserved_28_31        : 4;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_ehsm_remaining_config_status_s cn; */
};
typedef union cavm_ehsm_remaining_config_status cavm_ehsm_remaining_config_status_t;

#define CAVM_EHSM_REMAINING_CONFIG_STATUS CAVM_EHSM_REMAINING_CONFIG_STATUS_FUNC()
static inline uint64_t CAVM_EHSM_REMAINING_CONFIG_STATUS_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_EHSM_REMAINING_CONFIG_STATUS_FUNC(void)
{
    return 0x80b00000012cll;
}

#define typedef_CAVM_EHSM_REMAINING_CONFIG_STATUS cavm_ehsm_remaining_config_status_t
#define bustype_CAVM_EHSM_REMAINING_CONFIG_STATUS CSR_TYPE_NCB32b
#define basename_CAVM_EHSM_REMAINING_CONFIG_STATUS "EHSM_REMAINING_CONFIG_STATUS"
#define device_bar_CAVM_EHSM_REMAINING_CONFIG_STATUS 0x0 /* PF_BAR0 */
#define busnum_CAVM_EHSM_REMAINING_CONFIG_STATUS 0
#define arguments_CAVM_EHSM_REMAINING_CONFIG_STATUS -1,-1,-1,-1

/**
 * Register (NCB32b) ehsm_root_of_trust_status
 *
 * Root of Trust Setup Status Register. Register
 * This is for BCM-78
 */
union cavm_ehsm_root_of_trust_status
{
    uint32_t u;
    struct cavm_ehsm_root_of_trust_status_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t reserved_28_31        : 4;
        uint32_t ebg_continuous_health_test_fail : 1;/**< [ 27: 27](RO) Indicate that EBG continuous health test fails. */
        uint32_t ebg_start_up_health_test_done : 1;/**< [ 26: 26](RO) Indicate whether rkek is provisioned */
        uint32_t ebg_start_up_health_test_fail : 1;/**< [ 25: 25](RO) Indicate that EBG start up health test fails. It is only valid when EBG_start_up_health_test_done=1 */
        uint32_t bcm_panic_state       : 1;  /**< [ 24: 24](RO) Indicate BCM is in panic state. */
        uint32_t reserved_21_23        : 3;
        uint32_t rkek_provisioned      : 1;  /**< [ 20: 20](RO) Indicate whether rkek is provisioned */
        uint32_t uds_provisioned       : 1;  /**< [ 19: 19](RO) Indicate whether uds is provisioned */
        uint32_t l0_fw_aes_key3_provisioned : 1;/**< [ 18: 18](RO) Indicate whether L0_fw_aes_key3 is provisioned */
        uint32_t l0_fw_aes_key2_provisioned : 1;/**< [ 17: 17](RO) Indicate whether L0_fw_aes_key2 is provisioned */
        uint32_t l0_fw_aes_key1_provisioned : 1;/**< [ 16: 16](RO) Indicate whether L0_fw_aes_key1 is provisioned */
        uint32_t l0_fw_aes_key0_provisioned : 1;/**< [ 15: 15](RO) Indicate whether L0_fw_aes_key0 is provisioned */
        uint32_t kak3_binding_digest_provisioned : 1;/**< [ 14: 14](RO) Indicate whether kak3_binding_digest is provisioned */
        uint32_t kak2_binding_digest_provisioned : 1;/**< [ 13: 13](RO) Indicate whether kak2_binding_digest is provisioned */
        uint32_t kak1_binding_digest_provisioned : 1;/**< [ 12: 12](RO) Indicate whether kak1_binding_digest is provisioned */
        uint32_t kak0_binding_digest_provisioned : 1;/**< [ 11: 11](RO) Indicate whether kak0_binding_digest is provisioned */
        uint32_t auth_cmd_mode         : 1;  /**< [ 10: 10](RO) This is the shadow register for auth_cmd_mode field from OTP. */
        uint32_t disable_pie_reload    : 1;  /**< [  9:  9](RO) This is the shadow register for disable_pie_reload field from OTP. */
        uint32_t disable_bcm_self_test : 1;  /**< [  8:  8](RO) This is the shadow register for disable_bcm_self_test field from OTP. */
        uint32_t enable_puf            : 1;  /**< [  7:  7](RO) This is the shadow register for enable_puf field from OTP. */
        uint32_t uuid_lock             : 1;  /**< [  6:  6](RO) This is the shadow register for uuid_lock field from OTP. */
        uint32_t rkek_lock             : 1;  /**< [  5:  5](RO) This is the shadow register for rkek_lock field from OTP. */
        uint32_t rkek_read_disable     : 1;  /**< [  4:  4](RO) This is the shadow register for rkek_read_disable field from OTP. */
        uint32_t uds_read_disable      : 1;  /**< [  3:  3](RO) This is the shadow register for uds_read_disable field from OTP. */
        uint32_t l0_fw_aes_key_read_disable : 1;/**< [  2:  2](RO) This is the shadow register for L0_fw_aes_key_read_disable field from OTP. */
        uint32_t fips_mode             : 1;  /**< [  1:  1](RO) This is the shadow register for fips_mode field from OTP. */
        uint32_t disable_ecp           : 1;  /**< [  0:  0](RO) This is the shadow register for disable_ecp field from OTP. */
#else /* Word 0 - Little Endian */
        uint32_t disable_ecp           : 1;  /**< [  0:  0](RO) This is the shadow register for disable_ecp field from OTP. */
        uint32_t fips_mode             : 1;  /**< [  1:  1](RO) This is the shadow register for fips_mode field from OTP. */
        uint32_t l0_fw_aes_key_read_disable : 1;/**< [  2:  2](RO) This is the shadow register for L0_fw_aes_key_read_disable field from OTP. */
        uint32_t uds_read_disable      : 1;  /**< [  3:  3](RO) This is the shadow register for uds_read_disable field from OTP. */
        uint32_t rkek_read_disable     : 1;  /**< [  4:  4](RO) This is the shadow register for rkek_read_disable field from OTP. */
        uint32_t rkek_lock             : 1;  /**< [  5:  5](RO) This is the shadow register for rkek_lock field from OTP. */
        uint32_t uuid_lock             : 1;  /**< [  6:  6](RO) This is the shadow register for uuid_lock field from OTP. */
        uint32_t enable_puf            : 1;  /**< [  7:  7](RO) This is the shadow register for enable_puf field from OTP. */
        uint32_t disable_bcm_self_test : 1;  /**< [  8:  8](RO) This is the shadow register for disable_bcm_self_test field from OTP. */
        uint32_t disable_pie_reload    : 1;  /**< [  9:  9](RO) This is the shadow register for disable_pie_reload field from OTP. */
        uint32_t auth_cmd_mode         : 1;  /**< [ 10: 10](RO) This is the shadow register for auth_cmd_mode field from OTP. */
        uint32_t kak0_binding_digest_provisioned : 1;/**< [ 11: 11](RO) Indicate whether kak0_binding_digest is provisioned */
        uint32_t kak1_binding_digest_provisioned : 1;/**< [ 12: 12](RO) Indicate whether kak1_binding_digest is provisioned */
        uint32_t kak2_binding_digest_provisioned : 1;/**< [ 13: 13](RO) Indicate whether kak2_binding_digest is provisioned */
        uint32_t kak3_binding_digest_provisioned : 1;/**< [ 14: 14](RO) Indicate whether kak3_binding_digest is provisioned */
        uint32_t l0_fw_aes_key0_provisioned : 1;/**< [ 15: 15](RO) Indicate whether L0_fw_aes_key0 is provisioned */
        uint32_t l0_fw_aes_key1_provisioned : 1;/**< [ 16: 16](RO) Indicate whether L0_fw_aes_key1 is provisioned */
        uint32_t l0_fw_aes_key2_provisioned : 1;/**< [ 17: 17](RO) Indicate whether L0_fw_aes_key2 is provisioned */
        uint32_t l0_fw_aes_key3_provisioned : 1;/**< [ 18: 18](RO) Indicate whether L0_fw_aes_key3 is provisioned */
        uint32_t uds_provisioned       : 1;  /**< [ 19: 19](RO) Indicate whether uds is provisioned */
        uint32_t rkek_provisioned      : 1;  /**< [ 20: 20](RO) Indicate whether rkek is provisioned */
        uint32_t reserved_21_23        : 3;
        uint32_t bcm_panic_state       : 1;  /**< [ 24: 24](RO) Indicate BCM is in panic state. */
        uint32_t ebg_start_up_health_test_fail : 1;/**< [ 25: 25](RO) Indicate that EBG start up health test fails. It is only valid when EBG_start_up_health_test_done=1 */
        uint32_t ebg_start_up_health_test_done : 1;/**< [ 26: 26](RO) Indicate whether rkek is provisioned */
        uint32_t ebg_continuous_health_test_fail : 1;/**< [ 27: 27](RO) Indicate that EBG continuous health test fails. */
        uint32_t reserved_28_31        : 4;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_ehsm_root_of_trust_status_s cn; */
};
typedef union cavm_ehsm_root_of_trust_status cavm_ehsm_root_of_trust_status_t;

#define CAVM_EHSM_ROOT_OF_TRUST_STATUS CAVM_EHSM_ROOT_OF_TRUST_STATUS_FUNC()
static inline uint64_t CAVM_EHSM_ROOT_OF_TRUST_STATUS_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_EHSM_ROOT_OF_TRUST_STATUS_FUNC(void)
{
    return 0x80b00000011cll;
}

#define typedef_CAVM_EHSM_ROOT_OF_TRUST_STATUS cavm_ehsm_root_of_trust_status_t
#define bustype_CAVM_EHSM_ROOT_OF_TRUST_STATUS CSR_TYPE_NCB32b
#define basename_CAVM_EHSM_ROOT_OF_TRUST_STATUS "EHSM_ROOT_OF_TRUST_STATUS"
#define device_bar_CAVM_EHSM_ROOT_OF_TRUST_STATUS 0x0 /* PF_BAR0 */
#define busnum_CAVM_EHSM_ROOT_OF_TRUST_STATUS 0
#define arguments_CAVM_EHSM_ROOT_OF_TRUST_STATUS -1,-1,-1,-1

/**
 * Register (NCB32b) ehsm_s_eco
 *
 * INTERNAL: EHSM Secure ECO Register
 *
 * This register is reset on chip reset.
 */
union cavm_ehsm_s_eco
{
    uint32_t u;
    struct cavm_ehsm_s_eco_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t eco_rw                : 32; /**< [ 31:  0](SR/W) Reserved for secure ECO usage. */
#else /* Word 0 - Little Endian */
        uint32_t eco_rw                : 32; /**< [ 31:  0](SR/W) Reserved for secure ECO usage. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_ehsm_s_eco_s cn; */
};
typedef union cavm_ehsm_s_eco cavm_ehsm_s_eco_t;

#define CAVM_EHSM_S_ECO CAVM_EHSM_S_ECO_FUNC()
static inline uint64_t CAVM_EHSM_S_ECO_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_EHSM_S_ECO_FUNC(void)
{
    return 0x80b000004204ll;
}

#define typedef_CAVM_EHSM_S_ECO cavm_ehsm_s_eco_t
#define bustype_CAVM_EHSM_S_ECO CSR_TYPE_NCB32b
#define basename_CAVM_EHSM_S_ECO "EHSM_S_ECO"
#define device_bar_CAVM_EHSM_S_ECO 0x0 /* PF_BAR0 */
#define busnum_CAVM_EHSM_S_ECO 0
#define arguments_CAVM_EHSM_S_ECO -1,-1,-1,-1

/**
 * Register (NCB32b) ehsm_s_refclk_check_cycle
 *
 * INTERNAL: EHSM Refclk Check Cycle Boundaries Register
 *
 * This register determine the boundaries of refclk cycles represent by Ring Oscillator cycles.
 */
union cavm_ehsm_s_refclk_check_cycle
{
    uint32_t u;
    struct cavm_ehsm_s_refclk_check_cycle_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t cycle16_max           : 16; /**< [ 31: 16](SR/W) Set the max boundary of refclk cycle.
                                                                 Internal:
                                                                 16 * 535 mhz osc /  85 mhz refclk + 2 =\> 535/85  = 6.294 * 16 = 100.714 + 2 = 103 = 0x67 */
        uint32_t cycle16_min           : 16; /**< [ 15:  0](SR/W) Set the min boundary of refclk cycle.
                                                                 Internal:
                                                                 16 * 200 mhz osc / 115 mhz refclk - 2 =\> 200/115 = 1.739 * 16 = 27.824 - 2 = 25 = 0x19 */
#else /* Word 0 - Little Endian */
        uint32_t cycle16_min           : 16; /**< [ 15:  0](SR/W) Set the min boundary of refclk cycle.
                                                                 Internal:
                                                                 16 * 200 mhz osc / 115 mhz refclk - 2 =\> 200/115 = 1.739 * 16 = 27.824 - 2 = 25 = 0x19 */
        uint32_t cycle16_max           : 16; /**< [ 31: 16](SR/W) Set the max boundary of refclk cycle.
                                                                 Internal:
                                                                 16 * 535 mhz osc /  85 mhz refclk + 2 =\> 535/85  = 6.294 * 16 = 100.714 + 2 = 103 = 0x67 */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_ehsm_s_refclk_check_cycle_s cn; */
};
typedef union cavm_ehsm_s_refclk_check_cycle cavm_ehsm_s_refclk_check_cycle_t;

#define CAVM_EHSM_S_REFCLK_CHECK_CYCLE CAVM_EHSM_S_REFCLK_CHECK_CYCLE_FUNC()
static inline uint64_t CAVM_EHSM_S_REFCLK_CHECK_CYCLE_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_EHSM_S_REFCLK_CHECK_CYCLE_FUNC(void)
{
    return 0x80b000004210ll;
}

#define typedef_CAVM_EHSM_S_REFCLK_CHECK_CYCLE cavm_ehsm_s_refclk_check_cycle_t
#define bustype_CAVM_EHSM_S_REFCLK_CHECK_CYCLE CSR_TYPE_NCB32b
#define basename_CAVM_EHSM_S_REFCLK_CHECK_CYCLE "EHSM_S_REFCLK_CHECK_CYCLE"
#define device_bar_CAVM_EHSM_S_REFCLK_CHECK_CYCLE 0x0 /* PF_BAR0 */
#define busnum_CAVM_EHSM_S_REFCLK_CHECK_CYCLE 0
#define arguments_CAVM_EHSM_S_REFCLK_CHECK_CYCLE -1,-1,-1,-1

/**
 * Register (NCB32b) ehsm_shadow_reg_status
 *
 * SHADOW_REG_STATUS. Register
 * x
 */
union cavm_ehsm_shadow_reg_status
{
    uint32_t u;
    struct cavm_ehsm_shadow_reg_status_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t reserved_7_31         : 25;
        uint32_t clk_gate              : 1;  /**< [  6:  6](RO) 0: BCM input clock was running */
        uint32_t vdd_gate              : 1;  /**< [  5:  5](RO) 0: VDD was on */
        uint32_t cm3_sram_sd           : 1;  /**< [  4:  4](RO) 0: CM3 SRAM was in retention mode. */
        uint32_t cm3_sleepdeep         : 1;  /**< [  3:  3](RO) Connected with SLEEPDEEP output of CM3. Indicate whether CM3 is in deep sleep state */
        uint32_t cm3_sleeping          : 1;  /**< [  2:  2](RO) Connected with SLEEPING output of CM3. Indicate whether CM3 is in sleep state */
        uint32_t lcs_valid             : 1;  /**< [  1:  1](RO) Indication of whether LCS_DEBUG_PORT_STATUS, BOOTROM_CONFIG_STATUS,
                                                                 ROOT_OF_TRUST_STATUS, KEY_REVOC_STATUS and FW_SECURITY_VERSION are ready to be
                                                                 read. */
        uint32_t reserved_0            : 1;
#else /* Word 0 - Little Endian */
        uint32_t reserved_0            : 1;
        uint32_t lcs_valid             : 1;  /**< [  1:  1](RO) Indication of whether LCS_DEBUG_PORT_STATUS, BOOTROM_CONFIG_STATUS,
                                                                 ROOT_OF_TRUST_STATUS, KEY_REVOC_STATUS and FW_SECURITY_VERSION are ready to be
                                                                 read. */
        uint32_t cm3_sleeping          : 1;  /**< [  2:  2](RO) Connected with SLEEPING output of CM3. Indicate whether CM3 is in sleep state */
        uint32_t cm3_sleepdeep         : 1;  /**< [  3:  3](RO) Connected with SLEEPDEEP output of CM3. Indicate whether CM3 is in deep sleep state */
        uint32_t cm3_sram_sd           : 1;  /**< [  4:  4](RO) 0: CM3 SRAM was in retention mode. */
        uint32_t vdd_gate              : 1;  /**< [  5:  5](RO) 0: VDD was on */
        uint32_t clk_gate              : 1;  /**< [  6:  6](RO) 0: BCM input clock was running */
        uint32_t reserved_7_31         : 25;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_ehsm_shadow_reg_status_s cn; */
};
typedef union cavm_ehsm_shadow_reg_status cavm_ehsm_shadow_reg_status_t;

#define CAVM_EHSM_SHADOW_REG_STATUS CAVM_EHSM_SHADOW_REG_STATUS_FUNC()
static inline uint64_t CAVM_EHSM_SHADOW_REG_STATUS_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_EHSM_SHADOW_REG_STATUS_FUNC(void)
{
    return 0x80b000000100ll;
}

#define typedef_CAVM_EHSM_SHADOW_REG_STATUS cavm_ehsm_shadow_reg_status_t
#define bustype_CAVM_EHSM_SHADOW_REG_STATUS CSR_TYPE_NCB32b
#define basename_CAVM_EHSM_SHADOW_REG_STATUS "EHSM_SHADOW_REG_STATUS"
#define device_bar_CAVM_EHSM_SHADOW_REG_STATUS 0x0 /* PF_BAR0 */
#define busnum_CAVM_EHSM_SHADOW_REG_STATUS 0
#define arguments_CAVM_EHSM_SHADOW_REG_STATUS -1,-1,-1,-1

/**
 * Register (NCB32b) ehsm_sp_control
 *
 * SP Control. Register
 * x
 */
union cavm_ehsm_sp_control
{
    uint32_t u;
    struct cavm_ehsm_sp_control_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t reserved_7_31         : 25;
        uint32_t ram_write_buffer_flush : 1; /**< [  6:  6](R/W) Write 1 to flush the CM3 write buffer so that the data in write buffer will be
                                                                 written into CM3 RAM. It will be immediately be cleared to 0 after 1 cycle */
        uint32_t fpga_rom_write_en     : 1;  /**< [  5:  5](R/W) 0: Enable read and disable write to the 128KB sram used for replace ROM in FPGA */
        uint32_t rst_mailbox           : 1;  /**< [  4:  4](R/W) x */
        uint32_t sec_access_ctrl       : 1;  /**< [  3:  3](R/W) x */
        uint32_t mask_sp_int           : 1;  /**< [  2:  2](R/W) x */
        uint32_t sp_int_to_hst         : 1;  /**< [  1:  1](R/W) x */
        uint32_t cmd_reg_occupied      : 1;  /**< [  0:  0](R/W) x */
#else /* Word 0 - Little Endian */
        uint32_t cmd_reg_occupied      : 1;  /**< [  0:  0](R/W) x */
        uint32_t sp_int_to_hst         : 1;  /**< [  1:  1](R/W) x */
        uint32_t mask_sp_int           : 1;  /**< [  2:  2](R/W) x */
        uint32_t sec_access_ctrl       : 1;  /**< [  3:  3](R/W) x */
        uint32_t rst_mailbox           : 1;  /**< [  4:  4](R/W) x */
        uint32_t fpga_rom_write_en     : 1;  /**< [  5:  5](R/W) 0: Enable read and disable write to the 128KB sram used for replace ROM in FPGA */
        uint32_t ram_write_buffer_flush : 1; /**< [  6:  6](R/W) Write 1 to flush the CM3 write buffer so that the data in write buffer will be
                                                                 written into CM3 RAM. It will be immediately be cleared to 0 after 1 cycle */
        uint32_t reserved_7_31         : 25;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_ehsm_sp_control_s cn; */
};
typedef union cavm_ehsm_sp_control cavm_ehsm_sp_control_t;

#define CAVM_EHSM_SP_CONTROL CAVM_EHSM_SP_CONTROL_FUNC()
static inline uint64_t CAVM_EHSM_SP_CONTROL_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_EHSM_SP_CONTROL_FUNC(void)
{
    return 0x80b000000220ll;
}

#define typedef_CAVM_EHSM_SP_CONTROL cavm_ehsm_sp_control_t
#define bustype_CAVM_EHSM_SP_CONTROL CSR_TYPE_NCB32b
#define basename_CAVM_EHSM_SP_CONTROL "EHSM_SP_CONTROL"
#define device_bar_CAVM_EHSM_SP_CONTROL 0x0 /* PF_BAR0 */
#define busnum_CAVM_EHSM_SP_CONTROL 0
#define arguments_CAVM_EHSM_SP_CONTROL -1,-1,-1,-1

/**
 * Register (NCB32b) ehsm_sp_except_addr
 *
 * SP Exception Address. Register
 * The address triggers exception. The exceptions are:
 */
union cavm_ehsm_sp_except_addr
{
    uint32_t u;
    struct cavm_ehsm_sp_except_addr_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t data                  : 32; /**< [ 31:  0](R/W) x */
#else /* Word 0 - Little Endian */
        uint32_t data                  : 32; /**< [ 31:  0](R/W) x */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_ehsm_sp_except_addr_s cn; */
};
typedef union cavm_ehsm_sp_except_addr cavm_ehsm_sp_except_addr_t;

#define CAVM_EHSM_SP_EXCEPT_ADDR CAVM_EHSM_SP_EXCEPT_ADDR_FUNC()
static inline uint64_t CAVM_EHSM_SP_EXCEPT_ADDR_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_EHSM_SP_EXCEPT_ADDR_FUNC(void)
{
    return 0x80b000000224ll;
}

#define typedef_CAVM_EHSM_SP_EXCEPT_ADDR cavm_ehsm_sp_except_addr_t
#define bustype_CAVM_EHSM_SP_EXCEPT_ADDR CSR_TYPE_NCB32b
#define basename_CAVM_EHSM_SP_EXCEPT_ADDR "EHSM_SP_EXCEPT_ADDR"
#define device_bar_CAVM_EHSM_SP_EXCEPT_ADDR 0x0 /* PF_BAR0 */
#define busnum_CAVM_EHSM_SP_EXCEPT_ADDR 0
#define arguments_CAVM_EHSM_SP_EXCEPT_ADDR -1,-1,-1,-1

/**
 * Register (NCB32b) ehsm_sp_except_data
 *
 * SP Exception Data. Register
 * This register saves the data portion of the word from CM3 ROM or RAM when the errors below ocurs
 */
union cavm_ehsm_sp_except_data
{
    uint32_t u;
    struct cavm_ehsm_sp_except_data_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t data                  : 32; /**< [ 31:  0](R/W) x */
#else /* Word 0 - Little Endian */
        uint32_t data                  : 32; /**< [ 31:  0](R/W) x */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_ehsm_sp_except_data_s cn; */
};
typedef union cavm_ehsm_sp_except_data cavm_ehsm_sp_except_data_t;

#define CAVM_EHSM_SP_EXCEPT_DATA CAVM_EHSM_SP_EXCEPT_DATA_FUNC()
static inline uint64_t CAVM_EHSM_SP_EXCEPT_DATA_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_EHSM_SP_EXCEPT_DATA_FUNC(void)
{
    return 0x80b000000228ll;
}

#define typedef_CAVM_EHSM_SP_EXCEPT_DATA cavm_ehsm_sp_except_data_t
#define bustype_CAVM_EHSM_SP_EXCEPT_DATA CSR_TYPE_NCB32b
#define basename_CAVM_EHSM_SP_EXCEPT_DATA "EHSM_SP_EXCEPT_DATA"
#define device_bar_CAVM_EHSM_SP_EXCEPT_DATA 0x0 /* PF_BAR0 */
#define busnum_CAVM_EHSM_SP_EXCEPT_DATA 0
#define arguments_CAVM_EHSM_SP_EXCEPT_DATA -1,-1,-1,-1

/**
 * Register (NCB32b) ehsm_sp_except_info
 *
 * SP Exception Information. Register
 * This register saves the exception trigger source and parity bits value when exception occurs
 */
union cavm_ehsm_sp_except_info
{
    uint32_t u;
    struct cavm_ehsm_sp_except_info_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t triggered             : 1;  /**< [ 31: 31](RO) This field indicate one SP exception happened and information is latched in
                                                                 Source field, PARITY field, SP_EXCEPT_ADDR and SP_EXCEPT_DATA */
        uint32_t source                : 4;  /**< [ 30: 27](RO) This field indicate excpetion trigger source */
        uint32_t reserved_7_26         : 20;
        uint32_t parity                : 7;  /**< [  6:  0](R/W) This register saves the parity portion of the word from CM3 ROM, RAM or SPAD
                                                                 memory when the uncorrectable errors below ocurs */
#else /* Word 0 - Little Endian */
        uint32_t parity                : 7;  /**< [  6:  0](R/W) This register saves the parity portion of the word from CM3 ROM, RAM or SPAD
                                                                 memory when the uncorrectable errors below ocurs */
        uint32_t reserved_7_26         : 20;
        uint32_t source                : 4;  /**< [ 30: 27](RO) This field indicate excpetion trigger source */
        uint32_t triggered             : 1;  /**< [ 31: 31](RO) This field indicate one SP exception happened and information is latched in
                                                                 Source field, PARITY field, SP_EXCEPT_ADDR and SP_EXCEPT_DATA */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_ehsm_sp_except_info_s cn; */
};
typedef union cavm_ehsm_sp_except_info cavm_ehsm_sp_except_info_t;

#define CAVM_EHSM_SP_EXCEPT_INFO CAVM_EHSM_SP_EXCEPT_INFO_FUNC()
static inline uint64_t CAVM_EHSM_SP_EXCEPT_INFO_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_EHSM_SP_EXCEPT_INFO_FUNC(void)
{
    return 0x80b00000022cll;
}

#define typedef_CAVM_EHSM_SP_EXCEPT_INFO cavm_ehsm_sp_except_info_t
#define bustype_CAVM_EHSM_SP_EXCEPT_INFO CSR_TYPE_NCB32b
#define basename_CAVM_EHSM_SP_EXCEPT_INFO "EHSM_SP_EXCEPT_INFO"
#define device_bar_CAVM_EHSM_SP_EXCEPT_INFO 0x0 /* PF_BAR0 */
#define busnum_CAVM_EHSM_SP_EXCEPT_INFO 0
#define arguments_CAVM_EHSM_SP_EXCEPT_INFO -1,-1,-1,-1

/**
 * Register (NCB32b) ehsm_sp_interrupt_mask
 *
 * SP Interrupt Mask. Register
 * x
 */
union cavm_ehsm_sp_interrupt_mask
{
    uint32_t u;
    struct cavm_ehsm_sp_interrupt_mask_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t data                  : 32; /**< [ 31:  0](R/W) x */
#else /* Word 0 - Little Endian */
        uint32_t data                  : 32; /**< [ 31:  0](R/W) x */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_ehsm_sp_interrupt_mask_s cn; */
};
typedef union cavm_ehsm_sp_interrupt_mask cavm_ehsm_sp_interrupt_mask_t;

#define CAVM_EHSM_SP_INTERRUPT_MASK CAVM_EHSM_SP_INTERRUPT_MASK_FUNC()
static inline uint64_t CAVM_EHSM_SP_INTERRUPT_MASK_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_EHSM_SP_INTERRUPT_MASK_FUNC(void)
{
    return 0x80b00000021cll;
}

#define typedef_CAVM_EHSM_SP_INTERRUPT_MASK cavm_ehsm_sp_interrupt_mask_t
#define bustype_CAVM_EHSM_SP_INTERRUPT_MASK CSR_TYPE_NCB32b
#define basename_CAVM_EHSM_SP_INTERRUPT_MASK "EHSM_SP_INTERRUPT_MASK"
#define device_bar_CAVM_EHSM_SP_INTERRUPT_MASK 0x0 /* PF_BAR0 */
#define busnum_CAVM_EHSM_SP_INTERRUPT_MASK 0
#define arguments_CAVM_EHSM_SP_INTERRUPT_MASK -1,-1,-1,-1

/**
 * Register (NCB32b) ehsm_sp_interrupt_rst
 *
 * SP Interrupt Reset. Register
 * x
 */
union cavm_ehsm_sp_interrupt_rst
{
    uint32_t u;
    struct cavm_ehsm_sp_interrupt_rst_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t side_channel_sensor   : 16; /**< [ 31: 16](R/W) This is the interrupt from side channel sensors. They can all be clearred by CM3
                                                                 except bit 0. Bit 0 can only be clearred by HW reset */
        uint32_t reserved_13_15        : 3;
        uint32_t ebg_health_test_fail  : 1;  /**< [ 12: 12](R/W) This indicates that EBG start up or continuous health test fails. */
        uint32_t eng_slverr            : 1;  /**< [ 11: 11](R/W) This field indicates that during an APB access to the */
        uint32_t jtag_cmd_int          : 1;  /**< [ 10: 10](R/W) This field indicates that JTAG interface has sent a new command */
        uint32_t reserved_8_9          : 2;
        uint32_t spad_mem_dbe          : 1;  /**< [  7:  7](R/W) This field indicates a double bit uncorrectable error from a SPAD memory read. */
        uint32_t cm3_ram_dbe           : 1;  /**< [  6:  6](R/W) This field indicates a double bit uncorrectable error from a code memory SRAM read. */
        uint32_t cm3_rom_dbe           : 1;  /**< [  5:  5](R/W) This field indicates that the code memory detected a double bit uncorrectable
                                                                 error within the ROM that could not be corrected. The read address is stored at
                                                                 SP_EXCEPT_ADDR (RA0000224h [31:0]). This is considered a fatal error. */
        uint32_t ram_non_word_write    : 1;  /**< [  4:  4](R/W) Non word write, i.e. byte or half word write, to CM3 RAM is detected */
        uint32_t memc_addr_range       : 1;  /**< [  3:  3](R/W) This field indicates that the SP attempted to access a disallowed address within
                                                                 the code memory. This would be the range above 20K and below the range allocated
                                                                 to the ROM. The read address is stored within the SP_EXCEPT_ADDR (RA0000224h
                                                                 [31:0]) register. */
        uint32_t sys_addr_range        : 1;  /**< [  2:  2](R/W) This field indicates that the secure processor has attempted to access a
                                                                 register that is out of its address range of 1K byte. */
        uint32_t cmd_reg_occupied      : 1;  /**< [  1:  1](R/W) This field indicates that the command and parameter registers have been loaded with a new command. */
        uint32_t eng_int               : 1;  /**< [  0:  0](R/W) The accelerator engine block has indicated an interrupt. */
#else /* Word 0 - Little Endian */
        uint32_t eng_int               : 1;  /**< [  0:  0](R/W) The accelerator engine block has indicated an interrupt. */
        uint32_t cmd_reg_occupied      : 1;  /**< [  1:  1](R/W) This field indicates that the command and parameter registers have been loaded with a new command. */
        uint32_t sys_addr_range        : 1;  /**< [  2:  2](R/W) This field indicates that the secure processor has attempted to access a
                                                                 register that is out of its address range of 1K byte. */
        uint32_t memc_addr_range       : 1;  /**< [  3:  3](R/W) This field indicates that the SP attempted to access a disallowed address within
                                                                 the code memory. This would be the range above 20K and below the range allocated
                                                                 to the ROM. The read address is stored within the SP_EXCEPT_ADDR (RA0000224h
                                                                 [31:0]) register. */
        uint32_t ram_non_word_write    : 1;  /**< [  4:  4](R/W) Non word write, i.e. byte or half word write, to CM3 RAM is detected */
        uint32_t cm3_rom_dbe           : 1;  /**< [  5:  5](R/W) This field indicates that the code memory detected a double bit uncorrectable
                                                                 error within the ROM that could not be corrected. The read address is stored at
                                                                 SP_EXCEPT_ADDR (RA0000224h [31:0]). This is considered a fatal error. */
        uint32_t cm3_ram_dbe           : 1;  /**< [  6:  6](R/W) This field indicates a double bit uncorrectable error from a code memory SRAM read. */
        uint32_t spad_mem_dbe          : 1;  /**< [  7:  7](R/W) This field indicates a double bit uncorrectable error from a SPAD memory read. */
        uint32_t reserved_8_9          : 2;
        uint32_t jtag_cmd_int          : 1;  /**< [ 10: 10](R/W) This field indicates that JTAG interface has sent a new command */
        uint32_t eng_slverr            : 1;  /**< [ 11: 11](R/W) This field indicates that during an APB access to the */
        uint32_t ebg_health_test_fail  : 1;  /**< [ 12: 12](R/W) This indicates that EBG start up or continuous health test fails. */
        uint32_t reserved_13_15        : 3;
        uint32_t side_channel_sensor   : 16; /**< [ 31: 16](R/W) This is the interrupt from side channel sensors. They can all be clearred by CM3
                                                                 except bit 0. Bit 0 can only be clearred by HW reset */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_ehsm_sp_interrupt_rst_s cn; */
};
typedef union cavm_ehsm_sp_interrupt_rst cavm_ehsm_sp_interrupt_rst_t;

#define CAVM_EHSM_SP_INTERRUPT_RST CAVM_EHSM_SP_INTERRUPT_RST_FUNC()
static inline uint64_t CAVM_EHSM_SP_INTERRUPT_RST_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_EHSM_SP_INTERRUPT_RST_FUNC(void)
{
    return 0x80b000000218ll;
}

#define typedef_CAVM_EHSM_SP_INTERRUPT_RST cavm_ehsm_sp_interrupt_rst_t
#define bustype_CAVM_EHSM_SP_INTERRUPT_RST CSR_TYPE_NCB32b
#define basename_CAVM_EHSM_SP_INTERRUPT_RST "EHSM_SP_INTERRUPT_RST"
#define device_bar_CAVM_EHSM_SP_INTERRUPT_RST 0x0 /* PF_BAR0 */
#define busnum_CAVM_EHSM_SP_INTERRUPT_RST 0
#define arguments_CAVM_EHSM_SP_INTERRUPT_RST -1,-1,-1,-1

/**
 * Register (NCB32b) ehsm_sp_interrupt_set
 *
 * SP Interrupt Set. Register
 * Write a '1' to each bit position to set these interrupts.
 */
union cavm_ehsm_sp_interrupt_set
{
    uint32_t u;
    struct cavm_ehsm_sp_interrupt_set_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t side_channel_sensor   : 16; /**< [ 31: 16](R/W) This is the interrupt from side channel sensors. They can all be clearred by CM3
                                                                 except bit 0. Bit 0 can only be clearred by HW reset */
        uint32_t reserved_13_15        : 3;
        uint32_t ebg_health_test_fail  : 1;  /**< [ 12: 12](R/W) This indicates that EBG start up or continuous health test fails. */
        uint32_t eng_slverr            : 1;  /**< [ 11: 11](R/W) x */
        uint32_t jtag_cmd_int          : 1;  /**< [ 10: 10](R/W) This field indicates that JTAG interface has sent a new command */
        uint32_t reserved_8_9          : 2;
        uint32_t spad_mem_dbe          : 1;  /**< [  7:  7](R/W) Write 1 to set SPAD_MEM_DBE in SP_INTERRUPT_RST */
        uint32_t cm3_ram_dbe           : 1;  /**< [  6:  6](R/W) Write 1 to set CM3_RAM_DBE in SP_INTERRUPT_RST */
        uint32_t cm3_rom_dbe           : 1;  /**< [  5:  5](R/W) Write 1 to set CM3_ROM_DBE in SP_INTERRUPT_RST */
        uint32_t ram_non_word_write    : 1;  /**< [  4:  4](R/W) Non word write, i.e. byte or half word write, to CM3 RAM is detected */
        uint32_t memc_addr_range       : 1;  /**< [  3:  3](R/W) x */
        uint32_t sys_addr_range        : 1;  /**< [  2:  2](R/W) x */
        uint32_t cmd_reg_occupied      : 1;  /**< [  1:  1](R/W) x */
        uint32_t eng_int               : 1;  /**< [  0:  0](R/W) x */
#else /* Word 0 - Little Endian */
        uint32_t eng_int               : 1;  /**< [  0:  0](R/W) x */
        uint32_t cmd_reg_occupied      : 1;  /**< [  1:  1](R/W) x */
        uint32_t sys_addr_range        : 1;  /**< [  2:  2](R/W) x */
        uint32_t memc_addr_range       : 1;  /**< [  3:  3](R/W) x */
        uint32_t ram_non_word_write    : 1;  /**< [  4:  4](R/W) Non word write, i.e. byte or half word write, to CM3 RAM is detected */
        uint32_t cm3_rom_dbe           : 1;  /**< [  5:  5](R/W) Write 1 to set CM3_ROM_DBE in SP_INTERRUPT_RST */
        uint32_t cm3_ram_dbe           : 1;  /**< [  6:  6](R/W) Write 1 to set CM3_RAM_DBE in SP_INTERRUPT_RST */
        uint32_t spad_mem_dbe          : 1;  /**< [  7:  7](R/W) Write 1 to set SPAD_MEM_DBE in SP_INTERRUPT_RST */
        uint32_t reserved_8_9          : 2;
        uint32_t jtag_cmd_int          : 1;  /**< [ 10: 10](R/W) This field indicates that JTAG interface has sent a new command */
        uint32_t eng_slverr            : 1;  /**< [ 11: 11](R/W) x */
        uint32_t ebg_health_test_fail  : 1;  /**< [ 12: 12](R/W) This indicates that EBG start up or continuous health test fails. */
        uint32_t reserved_13_15        : 3;
        uint32_t side_channel_sensor   : 16; /**< [ 31: 16](R/W) This is the interrupt from side channel sensors. They can all be clearred by CM3
                                                                 except bit 0. Bit 0 can only be clearred by HW reset */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_ehsm_sp_interrupt_set_s cn; */
};
typedef union cavm_ehsm_sp_interrupt_set cavm_ehsm_sp_interrupt_set_t;

#define CAVM_EHSM_SP_INTERRUPT_SET CAVM_EHSM_SP_INTERRUPT_SET_FUNC()
static inline uint64_t CAVM_EHSM_SP_INTERRUPT_SET_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_EHSM_SP_INTERRUPT_SET_FUNC(void)
{
    return 0x80b000000210ll;
}

#define typedef_CAVM_EHSM_SP_INTERRUPT_SET cavm_ehsm_sp_interrupt_set_t
#define bustype_CAVM_EHSM_SP_INTERRUPT_SET CSR_TYPE_NCB32b
#define basename_CAVM_EHSM_SP_INTERRUPT_SET "EHSM_SP_INTERRUPT_SET"
#define device_bar_CAVM_EHSM_SP_INTERRUPT_SET 0x0 /* PF_BAR0 */
#define busnum_CAVM_EHSM_SP_INTERRUPT_SET 0
#define arguments_CAVM_EHSM_SP_INTERRUPT_SET -1,-1,-1,-1

/**
 * Register (NCB32b) ehsm_sp_sram_ctrl
 *
 * SP SRAM Control. Register
 * x
 */
union cavm_ehsm_sp_sram_ctrl
{
    uint32_t u;
    struct cavm_ehsm_sp_sram_ctrl_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t reserved_1_31         : 31;
        uint32_t memc_remap            : 1;  /**< [  0:  0](R/W) x */
#else /* Word 0 - Little Endian */
        uint32_t memc_remap            : 1;  /**< [  0:  0](R/W) x */
        uint32_t reserved_1_31         : 31;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_ehsm_sp_sram_ctrl_s cn; */
};
typedef union cavm_ehsm_sp_sram_ctrl cavm_ehsm_sp_sram_ctrl_t;

#define CAVM_EHSM_SP_SRAM_CTRL CAVM_EHSM_SP_SRAM_CTRL_FUNC()
static inline uint64_t CAVM_EHSM_SP_SRAM_CTRL_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_EHSM_SP_SRAM_CTRL_FUNC(void)
{
    return 0x80b000000214ll;
}

#define typedef_CAVM_EHSM_SP_SRAM_CTRL cavm_ehsm_sp_sram_ctrl_t
#define bustype_CAVM_EHSM_SP_SRAM_CTRL CSR_TYPE_NCB32b
#define basename_CAVM_EHSM_SP_SRAM_CTRL "EHSM_SP_SRAM_CTRL"
#define device_bar_CAVM_EHSM_SP_SRAM_CTRL 0x0 /* PF_BAR0 */
#define busnum_CAVM_EHSM_SP_SRAM_CTRL 0
#define arguments_CAVM_EHSM_SP_SRAM_CTRL -1,-1,-1,-1

/**
 * Register (NCB32b) ehsm_sp_tl
 *
 * Trust Level. Register
 * x
 */
union cavm_ehsm_sp_tl
{
    uint32_t u;
    struct cavm_ehsm_sp_tl_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t data                  : 32; /**< [ 31:  0](R/W) x */
#else /* Word 0 - Little Endian */
        uint32_t data                  : 32; /**< [ 31:  0](R/W) x */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_ehsm_sp_tl_s cn; */
};
typedef union cavm_ehsm_sp_tl cavm_ehsm_sp_tl_t;

#define CAVM_EHSM_SP_TL CAVM_EHSM_SP_TL_FUNC()
static inline uint64_t CAVM_EHSM_SP_TL_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_EHSM_SP_TL_FUNC(void)
{
    return 0x80b000000248ll;
}

#define typedef_CAVM_EHSM_SP_TL cavm_ehsm_sp_tl_t
#define bustype_CAVM_EHSM_SP_TL CSR_TYPE_NCB32b
#define basename_CAVM_EHSM_SP_TL "EHSM_SP_TL"
#define device_bar_CAVM_EHSM_SP_TL 0x0 /* PF_BAR0 */
#define busnum_CAVM_EHSM_SP_TL 0
#define arguments_CAVM_EHSM_SP_TL -1,-1,-1,-1

/**
 * Register (NCB32b) ehsm_sw_sensor
 *
 * CPC eHSM Software Sensor Register
 */
union cavm_ehsm_sw_sensor
{
    uint32_t u;
    struct cavm_ehsm_sw_sensor_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t reserved_1_31         : 31;
        uint32_t sw_sense              : 1;  /**< [  0:  0](R/W) Set Once register.
                                                                 Reset on cold reset.
                                                                 Connect to eHSM sensor[0]. */
#else /* Word 0 - Little Endian */
        uint32_t sw_sense              : 1;  /**< [  0:  0](R/W) Set Once register.
                                                                 Reset on cold reset.
                                                                 Connect to eHSM sensor[0]. */
        uint32_t reserved_1_31         : 31;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_ehsm_sw_sensor_s cn; */
};
typedef union cavm_ehsm_sw_sensor cavm_ehsm_sw_sensor_t;

#define CAVM_EHSM_SW_SENSOR CAVM_EHSM_SW_SENSOR_FUNC()
static inline uint64_t CAVM_EHSM_SW_SENSOR_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_EHSM_SW_SENSOR_FUNC(void)
{
    return 0x80b000004020ll;
}

#define typedef_CAVM_EHSM_SW_SENSOR cavm_ehsm_sw_sensor_t
#define bustype_CAVM_EHSM_SW_SENSOR CSR_TYPE_NCB32b
#define basename_CAVM_EHSM_SW_SENSOR "EHSM_SW_SENSOR"
#define device_bar_CAVM_EHSM_SW_SENSOR 0x0 /* PF_BAR0 */
#define busnum_CAVM_EHSM_SW_SENSOR 0
#define arguments_CAVM_EHSM_SW_SENSOR -1,-1,-1,-1

/**
 * Register (NCB32b) ehsm_uuid_0
 *
 * UUID_0. Register
 * This register saves the 1st word of UUID.
 */
union cavm_ehsm_uuid_0
{
    uint32_t u;
    struct cavm_ehsm_uuid_0_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t data                  : 32; /**< [ 31:  0](R/W) x */
#else /* Word 0 - Little Endian */
        uint32_t data                  : 32; /**< [ 31:  0](R/W) x */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_ehsm_uuid_0_s cn; */
};
typedef union cavm_ehsm_uuid_0 cavm_ehsm_uuid_0_t;

#define CAVM_EHSM_UUID_0 CAVM_EHSM_UUID_0_FUNC()
static inline uint64_t CAVM_EHSM_UUID_0_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_EHSM_UUID_0_FUNC(void)
{
    return 0x80b000000104ll;
}

#define typedef_CAVM_EHSM_UUID_0 cavm_ehsm_uuid_0_t
#define bustype_CAVM_EHSM_UUID_0 CSR_TYPE_NCB32b
#define basename_CAVM_EHSM_UUID_0 "EHSM_UUID_0"
#define device_bar_CAVM_EHSM_UUID_0 0x0 /* PF_BAR0 */
#define busnum_CAVM_EHSM_UUID_0 0
#define arguments_CAVM_EHSM_UUID_0 -1,-1,-1,-1

/**
 * Register (NCB32b) ehsm_uuid_1
 *
 * UUID_1. Register
 * This register saves the 2nd word of UUID.
 */
union cavm_ehsm_uuid_1
{
    uint32_t u;
    struct cavm_ehsm_uuid_1_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t data                  : 32; /**< [ 31:  0](R/W) x */
#else /* Word 0 - Little Endian */
        uint32_t data                  : 32; /**< [ 31:  0](R/W) x */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_ehsm_uuid_1_s cn; */
};
typedef union cavm_ehsm_uuid_1 cavm_ehsm_uuid_1_t;

#define CAVM_EHSM_UUID_1 CAVM_EHSM_UUID_1_FUNC()
static inline uint64_t CAVM_EHSM_UUID_1_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_EHSM_UUID_1_FUNC(void)
{
    return 0x80b000000108ll;
}

#define typedef_CAVM_EHSM_UUID_1 cavm_ehsm_uuid_1_t
#define bustype_CAVM_EHSM_UUID_1 CSR_TYPE_NCB32b
#define basename_CAVM_EHSM_UUID_1 "EHSM_UUID_1"
#define device_bar_CAVM_EHSM_UUID_1 0x0 /* PF_BAR0 */
#define busnum_CAVM_EHSM_UUID_1 0
#define arguments_CAVM_EHSM_UUID_1 -1,-1,-1,-1

/**
 * Register (NCB32b) ehsm_uuid_2
 *
 * UUID_2. Register
 * This register saves the 3rd word of UUID.
 */
union cavm_ehsm_uuid_2
{
    uint32_t u;
    struct cavm_ehsm_uuid_2_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t data                  : 32; /**< [ 31:  0](R/W) x */
#else /* Word 0 - Little Endian */
        uint32_t data                  : 32; /**< [ 31:  0](R/W) x */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_ehsm_uuid_2_s cn; */
};
typedef union cavm_ehsm_uuid_2 cavm_ehsm_uuid_2_t;

#define CAVM_EHSM_UUID_2 CAVM_EHSM_UUID_2_FUNC()
static inline uint64_t CAVM_EHSM_UUID_2_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_EHSM_UUID_2_FUNC(void)
{
    return 0x80b00000010cll;
}

#define typedef_CAVM_EHSM_UUID_2 cavm_ehsm_uuid_2_t
#define bustype_CAVM_EHSM_UUID_2 CSR_TYPE_NCB32b
#define basename_CAVM_EHSM_UUID_2 "EHSM_UUID_2"
#define device_bar_CAVM_EHSM_UUID_2 0x0 /* PF_BAR0 */
#define busnum_CAVM_EHSM_UUID_2 0
#define arguments_CAVM_EHSM_UUID_2 -1,-1,-1,-1

/**
 * Register (NCB32b) ehsm_uuid_ecc
 *
 * UUID_ECC. Register
 * This register saves the 3rd word of UUID.
 */
union cavm_ehsm_uuid_ecc
{
    uint32_t u;
    struct cavm_ehsm_uuid_ecc_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t reserved_19_31        : 13;
        uint32_t parity                : 18; /**< [ 18:  1](RO) This is the parity bits for UUID0~2 */
        uint32_t valid                 : 1;  /**< [  0:  0](RO) Indication of whether UUID_0, UUID_1, UUID_2 and PARITY is ready to be read. */
#else /* Word 0 - Little Endian */
        uint32_t valid                 : 1;  /**< [  0:  0](RO) Indication of whether UUID_0, UUID_1, UUID_2 and PARITY is ready to be read. */
        uint32_t parity                : 18; /**< [ 18:  1](RO) This is the parity bits for UUID0~2 */
        uint32_t reserved_19_31        : 13;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_ehsm_uuid_ecc_s cn; */
};
typedef union cavm_ehsm_uuid_ecc cavm_ehsm_uuid_ecc_t;

#define CAVM_EHSM_UUID_ECC CAVM_EHSM_UUID_ECC_FUNC()
static inline uint64_t CAVM_EHSM_UUID_ECC_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_EHSM_UUID_ECC_FUNC(void)
{
    return 0x80b000000110ll;
}

#define typedef_CAVM_EHSM_UUID_ECC cavm_ehsm_uuid_ecc_t
#define bustype_CAVM_EHSM_UUID_ECC CSR_TYPE_NCB32b
#define basename_CAVM_EHSM_UUID_ECC "EHSM_UUID_ECC"
#define device_bar_CAVM_EHSM_UUID_ECC 0x0 /* PF_BAR0 */
#define busnum_CAVM_EHSM_UUID_ECC 0
#define arguments_CAVM_EHSM_UUID_ECC -1,-1,-1,-1

/**
 * Register (NCB32b) ehsm_uuid_status
 *
 * UUID STATUS. Register
 * This register saves the status of UUID.
 */
union cavm_ehsm_uuid_status
{
    uint32_t u;
    struct cavm_ehsm_uuid_status_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t reserved_2_31         : 30;
        uint32_t uncorrectable_error   : 1;  /**< [  1:  1](R/W) Only valid when CORRECTION_DONE is 1. */
        uint32_t correction_done       : 1;  /**< [  0:  0](R/W) When it is 1, error corrected UUID is stored in UUID_0~2 and ready to be read by host */
#else /* Word 0 - Little Endian */
        uint32_t correction_done       : 1;  /**< [  0:  0](R/W) When it is 1, error corrected UUID is stored in UUID_0~2 and ready to be read by host */
        uint32_t uncorrectable_error   : 1;  /**< [  1:  1](R/W) Only valid when CORRECTION_DONE is 1. */
        uint32_t reserved_2_31         : 30;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_ehsm_uuid_status_s cn; */
};
typedef union cavm_ehsm_uuid_status cavm_ehsm_uuid_status_t;

#define CAVM_EHSM_UUID_STATUS CAVM_EHSM_UUID_STATUS_FUNC()
static inline uint64_t CAVM_EHSM_UUID_STATUS_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_EHSM_UUID_STATUS_FUNC(void)
{
    return 0x80b0000000fcll;
}

#define typedef_CAVM_EHSM_UUID_STATUS cavm_ehsm_uuid_status_t
#define bustype_CAVM_EHSM_UUID_STATUS CSR_TYPE_NCB32b
#define basename_CAVM_EHSM_UUID_STATUS "EHSM_UUID_STATUS"
#define device_bar_CAVM_EHSM_UUID_STATUS 0x0 /* PF_BAR0 */
#define busnum_CAVM_EHSM_UUID_STATUS 0
#define arguments_CAVM_EHSM_UUID_STATUS -1,-1,-1,-1

#endif /* __CAVM_CSRS_EHSM_H__ */
