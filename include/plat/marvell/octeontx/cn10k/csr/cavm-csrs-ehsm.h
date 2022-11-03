#ifndef __CAVM_CSRS_EHSM_H__
#define __CAVM_CSRS_EHSM_H__
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
 * Register (NCB32b) ehsm_biu_boot_strap_pin_status
 *
 * EHSM Biu Boot Strap Pin Status Register
 * This is for EHSM-78
 */
union cavm_ehsm_biu_boot_strap_pin_status
{
    uint32_t u;
    struct cavm_ehsm_biu_boot_strap_pin_status_s
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
    /* struct cavm_ehsm_biu_boot_strap_pin_status_s cn; */
};
typedef union cavm_ehsm_biu_boot_strap_pin_status cavm_ehsm_biu_boot_strap_pin_status_t;

#define CAVM_EHSM_BIU_BOOT_STRAP_PIN_STATUS CAVM_EHSM_BIU_BOOT_STRAP_PIN_STATUS_FUNC()
static inline uint64_t CAVM_EHSM_BIU_BOOT_STRAP_PIN_STATUS_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_EHSM_BIU_BOOT_STRAP_PIN_STATUS_FUNC(void)
{
    return 0x80b000000128ll;
}

#define typedef_CAVM_EHSM_BIU_BOOT_STRAP_PIN_STATUS cavm_ehsm_biu_boot_strap_pin_status_t
#define bustype_CAVM_EHSM_BIU_BOOT_STRAP_PIN_STATUS CSR_TYPE_NCB32b
#define basename_CAVM_EHSM_BIU_BOOT_STRAP_PIN_STATUS "EHSM_BIU_BOOT_STRAP_PIN_STATUS"
#define device_bar_CAVM_EHSM_BIU_BOOT_STRAP_PIN_STATUS 0x0 /* PF_BAR0 */
#define busnum_CAVM_EHSM_BIU_BOOT_STRAP_PIN_STATUS 0
#define arguments_CAVM_EHSM_BIU_BOOT_STRAP_PIN_STATUS -1,-1,-1,-1

/**
 * Register (NCB32b) ehsm_biu_bootrom_config_status
 *
 * EHSM Biu Bootrom Config Status Register
 * This is for EHSM-78
 */
union cavm_ehsm_biu_bootrom_config_status
{
    uint32_t u;
    struct cavm_ehsm_biu_bootrom_config_status_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t reserved_31           : 1;
        uint32_t bootrom_rsvd_param    : 12; /**< [ 30: 19](RO) This is the shadow register for bootrom_reserved_parameter field from OTP. */
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
        uint32_t bootrom_rsvd_param    : 12; /**< [ 30: 19](RO) This is the shadow register for bootrom_reserved_parameter field from OTP. */
        uint32_t reserved_31           : 1;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_ehsm_biu_bootrom_config_status_s cn; */
};
typedef union cavm_ehsm_biu_bootrom_config_status cavm_ehsm_biu_bootrom_config_status_t;

#define CAVM_EHSM_BIU_BOOTROM_CONFIG_STATUS CAVM_EHSM_BIU_BOOTROM_CONFIG_STATUS_FUNC()
static inline uint64_t CAVM_EHSM_BIU_BOOTROM_CONFIG_STATUS_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_EHSM_BIU_BOOTROM_CONFIG_STATUS_FUNC(void)
{
    return 0x80b000000118ll;
}

#define typedef_CAVM_EHSM_BIU_BOOTROM_CONFIG_STATUS cavm_ehsm_biu_bootrom_config_status_t
#define bustype_CAVM_EHSM_BIU_BOOTROM_CONFIG_STATUS CSR_TYPE_NCB32b
#define basename_CAVM_EHSM_BIU_BOOTROM_CONFIG_STATUS "EHSM_BIU_BOOTROM_CONFIG_STATUS"
#define device_bar_CAVM_EHSM_BIU_BOOTROM_CONFIG_STATUS 0x0 /* PF_BAR0 */
#define busnum_CAVM_EHSM_BIU_BOOTROM_CONFIG_STATUS 0
#define arguments_CAVM_EHSM_BIU_BOOTROM_CONFIG_STATUS -1,-1,-1,-1

/**
 * Register (NCB32b) ehsm_biu_chain_of_trust_status
 *
 * EHSM Biu Chain Of Trust Status Register
 * This reigster is for IROM to program runtime trust status bits.
 */
union cavm_ehsm_biu_chain_of_trust_status
{
    uint32_t u;
    struct cavm_ehsm_biu_chain_of_trust_status_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t reserved_8_31         : 24;
        uint32_t irom_panic_state      : 1;  /**< [  7:  7](RO) Indicate if IROM is in panic state. */
        uint32_t pie_lock_status       : 1;  /**< [  6:  6](RO) Indicate if the PIE reload has been locked. */
        uint32_t soc_noise_injection   : 1;  /**< [  5:  5](RO) Indicate if SOC is injecting noise. */
        uint32_t uds_lock_status       : 1;  /**< [  4:  4](RO) Indicate if the UDS has been locked. */
        uint32_t key_manifest_lock_status : 1;/**< [  3:  3](RO) Indicate if the Key Manifest reload has been locked. */
        uint32_t key_manifest_load_status : 1;/**< [  2:  2](RO) Indicate if the key manifest has been loaded. */
        uint32_t reserved_1            : 1;
        uint32_t pie_load_status       : 1;  /**< [  0:  0](RO) Indicate if PIE code has been loaded. */
#else /* Word 0 - Little Endian */
        uint32_t pie_load_status       : 1;  /**< [  0:  0](RO) Indicate if PIE code has been loaded. */
        uint32_t reserved_1            : 1;
        uint32_t key_manifest_load_status : 1;/**< [  2:  2](RO) Indicate if the key manifest has been loaded. */
        uint32_t key_manifest_lock_status : 1;/**< [  3:  3](RO) Indicate if the Key Manifest reload has been locked. */
        uint32_t uds_lock_status       : 1;  /**< [  4:  4](RO) Indicate if the UDS has been locked. */
        uint32_t soc_noise_injection   : 1;  /**< [  5:  5](RO) Indicate if SOC is injecting noise. */
        uint32_t pie_lock_status       : 1;  /**< [  6:  6](RO) Indicate if the PIE reload has been locked. */
        uint32_t irom_panic_state      : 1;  /**< [  7:  7](RO) Indicate if IROM is in panic state. */
        uint32_t reserved_8_31         : 24;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_ehsm_biu_chain_of_trust_status_s cn; */
};
typedef union cavm_ehsm_biu_chain_of_trust_status cavm_ehsm_biu_chain_of_trust_status_t;

#define CAVM_EHSM_BIU_CHAIN_OF_TRUST_STATUS CAVM_EHSM_BIU_CHAIN_OF_TRUST_STATUS_FUNC()
static inline uint64_t CAVM_EHSM_BIU_CHAIN_OF_TRUST_STATUS_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_EHSM_BIU_CHAIN_OF_TRUST_STATUS_FUNC(void)
{
    return 0x80b000000130ll;
}

#define typedef_CAVM_EHSM_BIU_CHAIN_OF_TRUST_STATUS cavm_ehsm_biu_chain_of_trust_status_t
#define bustype_CAVM_EHSM_BIU_CHAIN_OF_TRUST_STATUS CSR_TYPE_NCB32b
#define basename_CAVM_EHSM_BIU_CHAIN_OF_TRUST_STATUS "EHSM_BIU_CHAIN_OF_TRUST_STATUS"
#define device_bar_CAVM_EHSM_BIU_CHAIN_OF_TRUST_STATUS 0x0 /* PF_BAR0 */
#define busnum_CAVM_EHSM_BIU_CHAIN_OF_TRUST_STATUS 0
#define arguments_CAVM_EHSM_BIU_CHAIN_OF_TRUST_STATUS -1,-1,-1,-1

/**
 * Register (NCB32b) ehsm_biu_cmd_fifo_status
 *
 * EHSM Biu Cmd Fifo Status Register
 */
union cavm_ehsm_biu_cmd_fifo_status
{
    uint32_t u;
    struct cavm_ehsm_biu_cmd_fifo_status_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t reserved_17_31        : 15;
        uint32_t cmd_exe_core_id       : 1;  /**< [ 16: 16](RO) This bit indicate whether the command being executed is from host processor core 1 or core 2.
                                                                 0: The command being executed is from host processor core 1.
                                                                 1: The command being executed is from host processor core 2. */
        uint32_t cmd_status            : 8;  /**< [ 15:  8](RO) This register allows the host to poll the status of the BCM during the boot process.
                                                                 Bit [8]:
                                                                 If '0', indicates that the secure processor is not currently able to accept
                                                                 commands, so no primitive instructions should be sent, even if room is available
                                                                 in the command fifo. A '1' indicates a successful BCM boot.
                                                                 At startup, this bit should be polled by the host to determine when to start
                                                                 sending primitive instructions.
                                                                 Bits [15:9]:
                                                                 These bits are reserved for future use. */
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
        uint32_t cmd_cntr              : 4;  /**< [  3:  0](RO) Indicates the number of unprocessed commands that are currently in the cmd fifo.
                                                                 The current limit is 8 commands. */
#else /* Word 0 - Little Endian */
        uint32_t cmd_cntr              : 4;  /**< [  3:  0](RO) Indicates the number of unprocessed commands that are currently in the cmd fifo.
                                                                 The current limit is 8 commands. */
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
        uint32_t cmd_status            : 8;  /**< [ 15:  8](RO) This register allows the host to poll the status of the BCM during the boot process.
                                                                 Bit [8]:
                                                                 If '0', indicates that the secure processor is not currently able to accept
                                                                 commands, so no primitive instructions should be sent, even if room is available
                                                                 in the command fifo. A '1' indicates a successful BCM boot.
                                                                 At startup, this bit should be polled by the host to determine when to start
                                                                 sending primitive instructions.
                                                                 Bits [15:9]:
                                                                 These bits are reserved for future use. */
        uint32_t cmd_exe_core_id       : 1;  /**< [ 16: 16](RO) This bit indicate whether the command being executed is from host processor core 1 or core 2.
                                                                 0: The command being executed is from host processor core 1.
                                                                 1: The command being executed is from host processor core 2. */
        uint32_t reserved_17_31        : 15;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_ehsm_biu_cmd_fifo_status_s cn; */
};
typedef union cavm_ehsm_biu_cmd_fifo_status cavm_ehsm_biu_cmd_fifo_status_t;

#define CAVM_EHSM_BIU_CMD_FIFO_STATUS CAVM_EHSM_BIU_CMD_FIFO_STATUS_FUNC()
static inline uint64_t CAVM_EHSM_BIU_CMD_FIFO_STATUS_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_EHSM_BIU_CMD_FIFO_STATUS_FUNC(void)
{
    return 0x80b0000000c4ll;
}

#define typedef_CAVM_EHSM_BIU_CMD_FIFO_STATUS cavm_ehsm_biu_cmd_fifo_status_t
#define bustype_CAVM_EHSM_BIU_CMD_FIFO_STATUS CSR_TYPE_NCB32b
#define basename_CAVM_EHSM_BIU_CMD_FIFO_STATUS "EHSM_BIU_CMD_FIFO_STATUS"
#define device_bar_CAVM_EHSM_BIU_CMD_FIFO_STATUS 0x0 /* PF_BAR0 */
#define busnum_CAVM_EHSM_BIU_CMD_FIFO_STATUS 0
#define arguments_CAVM_EHSM_BIU_CMD_FIFO_STATUS -1,-1,-1,-1

/**
 * Register (NCB32b) ehsm_biu_context_status
 *
 * EHSM Biu Context Status Register
 */
union cavm_ehsm_biu_context_status
{
    uint32_t u;
    struct cavm_ehsm_biu_context_status_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t context_status        : 32; /**< [ 31:  0](RO) Missing register field description. */
#else /* Word 0 - Little Endian */
        uint32_t context_status        : 32; /**< [ 31:  0](RO) Missing register field description. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_ehsm_biu_context_status_s cn; */
};
typedef union cavm_ehsm_biu_context_status cavm_ehsm_biu_context_status_t;

#define CAVM_EHSM_BIU_CONTEXT_STATUS CAVM_EHSM_BIU_CONTEXT_STATUS_FUNC()
static inline uint64_t CAVM_EHSM_BIU_CONTEXT_STATUS_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_EHSM_BIU_CONTEXT_STATUS_FUNC(void)
{
    return 0x80b0000000e0ll;
}

#define typedef_CAVM_EHSM_BIU_CONTEXT_STATUS cavm_ehsm_biu_context_status_t
#define bustype_CAVM_EHSM_BIU_CONTEXT_STATUS CSR_TYPE_NCB32b
#define basename_CAVM_EHSM_BIU_CONTEXT_STATUS "EHSM_BIU_CONTEXT_STATUS"
#define device_bar_CAVM_EHSM_BIU_CONTEXT_STATUS 0x0 /* PF_BAR0 */
#define busnum_CAVM_EHSM_BIU_CONTEXT_STATUS 0
#define arguments_CAVM_EHSM_BIU_CONTEXT_STATUS -1,-1,-1,-1

/**
 * Register (NCB32b) ehsm_biu_core1_cmd
 *
 * EHSM Biu Core1 Cmd Register
 */
union cavm_ehsm_biu_core1_cmd
{
    uint32_t u;
    struct cavm_ehsm_biu_core1_cmd_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t host_core_id          : 12; /**< [ 31: 20](RO) This is the cmd_wid value when host write CORE1_CMD or CORE2_CMD register. Both
                                                                 host and SP cannot write this field. Only SP can read this field.
                                                                 It will return the cmd_wid for CORE1 when CM3 is executing command from
                                                                 CORE1. It will return the cmd_wid for CORE2 when CM3 is executing command from
                                                                 CORE2 */
        uint32_t reserved_16_19        : 4;
        uint32_t cmd                   : 16; /**< [ 15:  0](WO) This is the CMD ID value of the primitive command from host processor core 1. */
#else /* Word 0 - Little Endian */
        uint32_t cmd                   : 16; /**< [ 15:  0](WO) This is the CMD ID value of the primitive command from host processor core 1. */
        uint32_t reserved_16_19        : 4;
        uint32_t host_core_id          : 12; /**< [ 31: 20](RO) This is the cmd_wid value when host write CORE1_CMD or CORE2_CMD register. Both
                                                                 host and SP cannot write this field. Only SP can read this field.
                                                                 It will return the cmd_wid for CORE1 when CM3 is executing command from
                                                                 CORE1. It will return the cmd_wid for CORE2 when CM3 is executing command from
                                                                 CORE2 */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_ehsm_biu_core1_cmd_s cn; */
};
typedef union cavm_ehsm_biu_core1_cmd cavm_ehsm_biu_core1_cmd_t;

#define CAVM_EHSM_BIU_CORE1_CMD CAVM_EHSM_BIU_CORE1_CMD_FUNC()
static inline uint64_t CAVM_EHSM_BIU_CORE1_CMD_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_EHSM_BIU_CORE1_CMD_FUNC(void)
{
    return 0x80b000000040ll;
}

#define typedef_CAVM_EHSM_BIU_CORE1_CMD cavm_ehsm_biu_core1_cmd_t
#define bustype_CAVM_EHSM_BIU_CORE1_CMD CSR_TYPE_NCB32b
#define basename_CAVM_EHSM_BIU_CORE1_CMD "EHSM_BIU_CORE1_CMD"
#define device_bar_CAVM_EHSM_BIU_CORE1_CMD 0x0 /* PF_BAR0 */
#define busnum_CAVM_EHSM_BIU_CORE1_CMD 0
#define arguments_CAVM_EHSM_BIU_CORE1_CMD -1,-1,-1,-1

/**
 * Register (NCB32b) ehsm_biu_core1_cmd_param0
 *
 * EHSM Biu Core1 Cmd Param0 Register
 * This register contains parameter 0 associated with a EHSM primitive command from
 * host processor core 1. There are a total of 16 spaces for primitive command
 * parameters. When the host processor core 1 wants to send a primitive command to
 * EHSM, it must first write all the associated parameters (if any). Once all the
 * parameters associated with a primitive command have been written, the host processor
 * core 1 can write the associated primitive command to the CORE1_CMD register. Host
 * does not need to write the unused parameters. The CM3 processor has read access to
 * all 16 Command Parameter registers, but no write access.
 */
union cavm_ehsm_biu_core1_cmd_param0
{
    uint32_t u;
    struct cavm_ehsm_biu_core1_cmd_param0_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t core1_cmd_param0      : 32; /**< [ 31:  0](WO) This register contains parameter 0 associated with a EHSM primitive command from
                                                                 host processor core 1. There are a total of 16 spaces for primitive command
                                                                 parameters. When the host processor core 1 wants to send a primitive command to
                                                                 EHSM, it must first write all the associated parameters (if any). Once all the
                                                                 parameters associated with a primitive command have been written, the host
                                                                 processor core 1 can write the associated primitive command to the CORE1_CMD
                                                                 register. Host does not need to write the unused parameters. The CM3 processor
                                                                 has read access to all 16 Command Parameter registers, but no write access. */
#else /* Word 0 - Little Endian */
        uint32_t core1_cmd_param0      : 32; /**< [ 31:  0](WO) This register contains parameter 0 associated with a EHSM primitive command from
                                                                 host processor core 1. There are a total of 16 spaces for primitive command
                                                                 parameters. When the host processor core 1 wants to send a primitive command to
                                                                 EHSM, it must first write all the associated parameters (if any). Once all the
                                                                 parameters associated with a primitive command have been written, the host
                                                                 processor core 1 can write the associated primitive command to the CORE1_CMD
                                                                 register. Host does not need to write the unused parameters. The CM3 processor
                                                                 has read access to all 16 Command Parameter registers, but no write access. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_ehsm_biu_core1_cmd_param0_s cn; */
};
typedef union cavm_ehsm_biu_core1_cmd_param0 cavm_ehsm_biu_core1_cmd_param0_t;

#define CAVM_EHSM_BIU_CORE1_CMD_PARAM0 CAVM_EHSM_BIU_CORE1_CMD_PARAM0_FUNC()
static inline uint64_t CAVM_EHSM_BIU_CORE1_CMD_PARAM0_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_EHSM_BIU_CORE1_CMD_PARAM0_FUNC(void)
{
    return 0x80b000000000ll;
}

#define typedef_CAVM_EHSM_BIU_CORE1_CMD_PARAM0 cavm_ehsm_biu_core1_cmd_param0_t
#define bustype_CAVM_EHSM_BIU_CORE1_CMD_PARAM0 CSR_TYPE_NCB32b
#define basename_CAVM_EHSM_BIU_CORE1_CMD_PARAM0 "EHSM_BIU_CORE1_CMD_PARAM0"
#define device_bar_CAVM_EHSM_BIU_CORE1_CMD_PARAM0 0x0 /* PF_BAR0 */
#define busnum_CAVM_EHSM_BIU_CORE1_CMD_PARAM0 0
#define arguments_CAVM_EHSM_BIU_CORE1_CMD_PARAM0 -1,-1,-1,-1

/**
 * Register (NCB32b) ehsm_biu_core1_cmd_param1
 *
 * EHSM Biu Core1 Cmd Param1 Register
 * This register contains parameter 1 associated with a EHSM primitive command from
 * host processor core 1.
 */
union cavm_ehsm_biu_core1_cmd_param1
{
    uint32_t u;
    struct cavm_ehsm_biu_core1_cmd_param1_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t core1_cmd_param1      : 32; /**< [ 31:  0](WO) This register contains parameter 1 associated with a EHSM primitive command from
                                                                 host processor core 1. */
#else /* Word 0 - Little Endian */
        uint32_t core1_cmd_param1      : 32; /**< [ 31:  0](WO) This register contains parameter 1 associated with a EHSM primitive command from
                                                                 host processor core 1. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_ehsm_biu_core1_cmd_param1_s cn; */
};
typedef union cavm_ehsm_biu_core1_cmd_param1 cavm_ehsm_biu_core1_cmd_param1_t;

#define CAVM_EHSM_BIU_CORE1_CMD_PARAM1 CAVM_EHSM_BIU_CORE1_CMD_PARAM1_FUNC()
static inline uint64_t CAVM_EHSM_BIU_CORE1_CMD_PARAM1_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_EHSM_BIU_CORE1_CMD_PARAM1_FUNC(void)
{
    return 0x80b000000004ll;
}

#define typedef_CAVM_EHSM_BIU_CORE1_CMD_PARAM1 cavm_ehsm_biu_core1_cmd_param1_t
#define bustype_CAVM_EHSM_BIU_CORE1_CMD_PARAM1 CSR_TYPE_NCB32b
#define basename_CAVM_EHSM_BIU_CORE1_CMD_PARAM1 "EHSM_BIU_CORE1_CMD_PARAM1"
#define device_bar_CAVM_EHSM_BIU_CORE1_CMD_PARAM1 0x0 /* PF_BAR0 */
#define busnum_CAVM_EHSM_BIU_CORE1_CMD_PARAM1 0
#define arguments_CAVM_EHSM_BIU_CORE1_CMD_PARAM1 -1,-1,-1,-1

/**
 * Register (NCB32b) ehsm_biu_core1_cmd_param10
 *
 * EHSM Biu Core1 Cmd Param10 Register
 * This register contains parameter 10 associated with a EHSM primitive command from
 * host processor core 1.
 */
union cavm_ehsm_biu_core1_cmd_param10
{
    uint32_t u;
    struct cavm_ehsm_biu_core1_cmd_param10_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t core1_cmd_param10     : 32; /**< [ 31:  0](WO) This register contains parameter 10 associated with a EHSM primitive command
                                                                 from host processor core 1. */
#else /* Word 0 - Little Endian */
        uint32_t core1_cmd_param10     : 32; /**< [ 31:  0](WO) This register contains parameter 10 associated with a EHSM primitive command
                                                                 from host processor core 1. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_ehsm_biu_core1_cmd_param10_s cn; */
};
typedef union cavm_ehsm_biu_core1_cmd_param10 cavm_ehsm_biu_core1_cmd_param10_t;

#define CAVM_EHSM_BIU_CORE1_CMD_PARAM10 CAVM_EHSM_BIU_CORE1_CMD_PARAM10_FUNC()
static inline uint64_t CAVM_EHSM_BIU_CORE1_CMD_PARAM10_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_EHSM_BIU_CORE1_CMD_PARAM10_FUNC(void)
{
    return 0x80b000000028ll;
}

#define typedef_CAVM_EHSM_BIU_CORE1_CMD_PARAM10 cavm_ehsm_biu_core1_cmd_param10_t
#define bustype_CAVM_EHSM_BIU_CORE1_CMD_PARAM10 CSR_TYPE_NCB32b
#define basename_CAVM_EHSM_BIU_CORE1_CMD_PARAM10 "EHSM_BIU_CORE1_CMD_PARAM10"
#define device_bar_CAVM_EHSM_BIU_CORE1_CMD_PARAM10 0x0 /* PF_BAR0 */
#define busnum_CAVM_EHSM_BIU_CORE1_CMD_PARAM10 0
#define arguments_CAVM_EHSM_BIU_CORE1_CMD_PARAM10 -1,-1,-1,-1

/**
 * Register (NCB32b) ehsm_biu_core1_cmd_param11
 *
 * EHSM Biu Core1 Cmd Param11 Register
 * This register contains parameter 11 associated with a EHSM primitive command from
 * host processor core 1.
 */
union cavm_ehsm_biu_core1_cmd_param11
{
    uint32_t u;
    struct cavm_ehsm_biu_core1_cmd_param11_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t core1_cmd_param11     : 32; /**< [ 31:  0](WO) This register contains parameter 11 associated with a EHSM primitive command
                                                                 from host processor core 1. */
#else /* Word 0 - Little Endian */
        uint32_t core1_cmd_param11     : 32; /**< [ 31:  0](WO) This register contains parameter 11 associated with a EHSM primitive command
                                                                 from host processor core 1. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_ehsm_biu_core1_cmd_param11_s cn; */
};
typedef union cavm_ehsm_biu_core1_cmd_param11 cavm_ehsm_biu_core1_cmd_param11_t;

#define CAVM_EHSM_BIU_CORE1_CMD_PARAM11 CAVM_EHSM_BIU_CORE1_CMD_PARAM11_FUNC()
static inline uint64_t CAVM_EHSM_BIU_CORE1_CMD_PARAM11_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_EHSM_BIU_CORE1_CMD_PARAM11_FUNC(void)
{
    return 0x80b00000002cll;
}

#define typedef_CAVM_EHSM_BIU_CORE1_CMD_PARAM11 cavm_ehsm_biu_core1_cmd_param11_t
#define bustype_CAVM_EHSM_BIU_CORE1_CMD_PARAM11 CSR_TYPE_NCB32b
#define basename_CAVM_EHSM_BIU_CORE1_CMD_PARAM11 "EHSM_BIU_CORE1_CMD_PARAM11"
#define device_bar_CAVM_EHSM_BIU_CORE1_CMD_PARAM11 0x0 /* PF_BAR0 */
#define busnum_CAVM_EHSM_BIU_CORE1_CMD_PARAM11 0
#define arguments_CAVM_EHSM_BIU_CORE1_CMD_PARAM11 -1,-1,-1,-1

/**
 * Register (NCB32b) ehsm_biu_core1_cmd_param12
 *
 * EHSM Biu Core1 Cmd Param12 Register
 * This register contains parameter 12 associated with a EHSM primitive command from
 * host processor core 1.
 */
union cavm_ehsm_biu_core1_cmd_param12
{
    uint32_t u;
    struct cavm_ehsm_biu_core1_cmd_param12_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t core1_cmd_param12     : 32; /**< [ 31:  0](WO) This register contains parameter 12 associated with a EHSM primitive command
                                                                 from host processor core 1. */
#else /* Word 0 - Little Endian */
        uint32_t core1_cmd_param12     : 32; /**< [ 31:  0](WO) This register contains parameter 12 associated with a EHSM primitive command
                                                                 from host processor core 1. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_ehsm_biu_core1_cmd_param12_s cn; */
};
typedef union cavm_ehsm_biu_core1_cmd_param12 cavm_ehsm_biu_core1_cmd_param12_t;

#define CAVM_EHSM_BIU_CORE1_CMD_PARAM12 CAVM_EHSM_BIU_CORE1_CMD_PARAM12_FUNC()
static inline uint64_t CAVM_EHSM_BIU_CORE1_CMD_PARAM12_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_EHSM_BIU_CORE1_CMD_PARAM12_FUNC(void)
{
    return 0x80b000000030ll;
}

#define typedef_CAVM_EHSM_BIU_CORE1_CMD_PARAM12 cavm_ehsm_biu_core1_cmd_param12_t
#define bustype_CAVM_EHSM_BIU_CORE1_CMD_PARAM12 CSR_TYPE_NCB32b
#define basename_CAVM_EHSM_BIU_CORE1_CMD_PARAM12 "EHSM_BIU_CORE1_CMD_PARAM12"
#define device_bar_CAVM_EHSM_BIU_CORE1_CMD_PARAM12 0x0 /* PF_BAR0 */
#define busnum_CAVM_EHSM_BIU_CORE1_CMD_PARAM12 0
#define arguments_CAVM_EHSM_BIU_CORE1_CMD_PARAM12 -1,-1,-1,-1

/**
 * Register (NCB32b) ehsm_biu_core1_cmd_param13
 *
 * EHSM Biu Core1 Cmd Param13 Register
 * This register contains parameter 13 associated with a EHSM primitive command from
 * host processor core 1.
 */
union cavm_ehsm_biu_core1_cmd_param13
{
    uint32_t u;
    struct cavm_ehsm_biu_core1_cmd_param13_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t core1_cmd_param13     : 32; /**< [ 31:  0](WO) This register contains parameter 13 associated with a EHSM primitive command
                                                                 from host processor core 1. */
#else /* Word 0 - Little Endian */
        uint32_t core1_cmd_param13     : 32; /**< [ 31:  0](WO) This register contains parameter 13 associated with a EHSM primitive command
                                                                 from host processor core 1. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_ehsm_biu_core1_cmd_param13_s cn; */
};
typedef union cavm_ehsm_biu_core1_cmd_param13 cavm_ehsm_biu_core1_cmd_param13_t;

#define CAVM_EHSM_BIU_CORE1_CMD_PARAM13 CAVM_EHSM_BIU_CORE1_CMD_PARAM13_FUNC()
static inline uint64_t CAVM_EHSM_BIU_CORE1_CMD_PARAM13_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_EHSM_BIU_CORE1_CMD_PARAM13_FUNC(void)
{
    return 0x80b000000034ll;
}

#define typedef_CAVM_EHSM_BIU_CORE1_CMD_PARAM13 cavm_ehsm_biu_core1_cmd_param13_t
#define bustype_CAVM_EHSM_BIU_CORE1_CMD_PARAM13 CSR_TYPE_NCB32b
#define basename_CAVM_EHSM_BIU_CORE1_CMD_PARAM13 "EHSM_BIU_CORE1_CMD_PARAM13"
#define device_bar_CAVM_EHSM_BIU_CORE1_CMD_PARAM13 0x0 /* PF_BAR0 */
#define busnum_CAVM_EHSM_BIU_CORE1_CMD_PARAM13 0
#define arguments_CAVM_EHSM_BIU_CORE1_CMD_PARAM13 -1,-1,-1,-1

/**
 * Register (NCB32b) ehsm_biu_core1_cmd_param14
 *
 * EHSM Biu Core1 Cmd Param14 Register
 * This register contains parameter 14 associated with a EHSM primitive command from
 * host processor core 1.
 */
union cavm_ehsm_biu_core1_cmd_param14
{
    uint32_t u;
    struct cavm_ehsm_biu_core1_cmd_param14_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t core1_cmd_param14     : 32; /**< [ 31:  0](WO) This register contains parameter 14 associated with a EHSM primitive command
                                                                 from host processor core 1. */
#else /* Word 0 - Little Endian */
        uint32_t core1_cmd_param14     : 32; /**< [ 31:  0](WO) This register contains parameter 14 associated with a EHSM primitive command
                                                                 from host processor core 1. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_ehsm_biu_core1_cmd_param14_s cn; */
};
typedef union cavm_ehsm_biu_core1_cmd_param14 cavm_ehsm_biu_core1_cmd_param14_t;

#define CAVM_EHSM_BIU_CORE1_CMD_PARAM14 CAVM_EHSM_BIU_CORE1_CMD_PARAM14_FUNC()
static inline uint64_t CAVM_EHSM_BIU_CORE1_CMD_PARAM14_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_EHSM_BIU_CORE1_CMD_PARAM14_FUNC(void)
{
    return 0x80b000000038ll;
}

#define typedef_CAVM_EHSM_BIU_CORE1_CMD_PARAM14 cavm_ehsm_biu_core1_cmd_param14_t
#define bustype_CAVM_EHSM_BIU_CORE1_CMD_PARAM14 CSR_TYPE_NCB32b
#define basename_CAVM_EHSM_BIU_CORE1_CMD_PARAM14 "EHSM_BIU_CORE1_CMD_PARAM14"
#define device_bar_CAVM_EHSM_BIU_CORE1_CMD_PARAM14 0x0 /* PF_BAR0 */
#define busnum_CAVM_EHSM_BIU_CORE1_CMD_PARAM14 0
#define arguments_CAVM_EHSM_BIU_CORE1_CMD_PARAM14 -1,-1,-1,-1

/**
 * Register (NCB32b) ehsm_biu_core1_cmd_param15
 *
 * EHSM Biu Core1 Cmd Param15 Register
 * This register contains parameter 15 associated with a EHSM primitive command from
 * host processor core 1.
 */
union cavm_ehsm_biu_core1_cmd_param15
{
    uint32_t u;
    struct cavm_ehsm_biu_core1_cmd_param15_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t core1_cmd_param15     : 32; /**< [ 31:  0](WO) This register contains parameter 15 associated with a EHSM primitive command
                                                                 from host processor core 1. */
#else /* Word 0 - Little Endian */
        uint32_t core1_cmd_param15     : 32; /**< [ 31:  0](WO) This register contains parameter 15 associated with a EHSM primitive command
                                                                 from host processor core 1. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_ehsm_biu_core1_cmd_param15_s cn; */
};
typedef union cavm_ehsm_biu_core1_cmd_param15 cavm_ehsm_biu_core1_cmd_param15_t;

#define CAVM_EHSM_BIU_CORE1_CMD_PARAM15 CAVM_EHSM_BIU_CORE1_CMD_PARAM15_FUNC()
static inline uint64_t CAVM_EHSM_BIU_CORE1_CMD_PARAM15_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_EHSM_BIU_CORE1_CMD_PARAM15_FUNC(void)
{
    return 0x80b00000003cll;
}

#define typedef_CAVM_EHSM_BIU_CORE1_CMD_PARAM15 cavm_ehsm_biu_core1_cmd_param15_t
#define bustype_CAVM_EHSM_BIU_CORE1_CMD_PARAM15 CSR_TYPE_NCB32b
#define basename_CAVM_EHSM_BIU_CORE1_CMD_PARAM15 "EHSM_BIU_CORE1_CMD_PARAM15"
#define device_bar_CAVM_EHSM_BIU_CORE1_CMD_PARAM15 0x0 /* PF_BAR0 */
#define busnum_CAVM_EHSM_BIU_CORE1_CMD_PARAM15 0
#define arguments_CAVM_EHSM_BIU_CORE1_CMD_PARAM15 -1,-1,-1,-1

/**
 * Register (NCB32b) ehsm_biu_core1_cmd_param2
 *
 * EHSM Biu Core1 Cmd Param2 Register
 * This register contains parameter 2 associated with a EHSM primitive command from
 * host processor core 1.
 */
union cavm_ehsm_biu_core1_cmd_param2
{
    uint32_t u;
    struct cavm_ehsm_biu_core1_cmd_param2_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t core1_cmd_param2      : 32; /**< [ 31:  0](WO) This register contains parameter 2 associated with a EHSM primitive command from
                                                                 host processor core 1. */
#else /* Word 0 - Little Endian */
        uint32_t core1_cmd_param2      : 32; /**< [ 31:  0](WO) This register contains parameter 2 associated with a EHSM primitive command from
                                                                 host processor core 1. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_ehsm_biu_core1_cmd_param2_s cn; */
};
typedef union cavm_ehsm_biu_core1_cmd_param2 cavm_ehsm_biu_core1_cmd_param2_t;

#define CAVM_EHSM_BIU_CORE1_CMD_PARAM2 CAVM_EHSM_BIU_CORE1_CMD_PARAM2_FUNC()
static inline uint64_t CAVM_EHSM_BIU_CORE1_CMD_PARAM2_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_EHSM_BIU_CORE1_CMD_PARAM2_FUNC(void)
{
    return 0x80b000000008ll;
}

#define typedef_CAVM_EHSM_BIU_CORE1_CMD_PARAM2 cavm_ehsm_biu_core1_cmd_param2_t
#define bustype_CAVM_EHSM_BIU_CORE1_CMD_PARAM2 CSR_TYPE_NCB32b
#define basename_CAVM_EHSM_BIU_CORE1_CMD_PARAM2 "EHSM_BIU_CORE1_CMD_PARAM2"
#define device_bar_CAVM_EHSM_BIU_CORE1_CMD_PARAM2 0x0 /* PF_BAR0 */
#define busnum_CAVM_EHSM_BIU_CORE1_CMD_PARAM2 0
#define arguments_CAVM_EHSM_BIU_CORE1_CMD_PARAM2 -1,-1,-1,-1

/**
 * Register (NCB32b) ehsm_biu_core1_cmd_param3
 *
 * EHSM Biu Core1 Cmd Param3 Register
 * This register contains parameter 3 associated with a EHSM primitive command from
 * host processor core 1.
 */
union cavm_ehsm_biu_core1_cmd_param3
{
    uint32_t u;
    struct cavm_ehsm_biu_core1_cmd_param3_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t core1_cmd_param3      : 32; /**< [ 31:  0](WO) This register contains parameter 3 associated with a EHSM primitive command from
                                                                 host processor core 1. */
#else /* Word 0 - Little Endian */
        uint32_t core1_cmd_param3      : 32; /**< [ 31:  0](WO) This register contains parameter 3 associated with a EHSM primitive command from
                                                                 host processor core 1. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_ehsm_biu_core1_cmd_param3_s cn; */
};
typedef union cavm_ehsm_biu_core1_cmd_param3 cavm_ehsm_biu_core1_cmd_param3_t;

#define CAVM_EHSM_BIU_CORE1_CMD_PARAM3 CAVM_EHSM_BIU_CORE1_CMD_PARAM3_FUNC()
static inline uint64_t CAVM_EHSM_BIU_CORE1_CMD_PARAM3_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_EHSM_BIU_CORE1_CMD_PARAM3_FUNC(void)
{
    return 0x80b00000000cll;
}

#define typedef_CAVM_EHSM_BIU_CORE1_CMD_PARAM3 cavm_ehsm_biu_core1_cmd_param3_t
#define bustype_CAVM_EHSM_BIU_CORE1_CMD_PARAM3 CSR_TYPE_NCB32b
#define basename_CAVM_EHSM_BIU_CORE1_CMD_PARAM3 "EHSM_BIU_CORE1_CMD_PARAM3"
#define device_bar_CAVM_EHSM_BIU_CORE1_CMD_PARAM3 0x0 /* PF_BAR0 */
#define busnum_CAVM_EHSM_BIU_CORE1_CMD_PARAM3 0
#define arguments_CAVM_EHSM_BIU_CORE1_CMD_PARAM3 -1,-1,-1,-1

/**
 * Register (NCB32b) ehsm_biu_core1_cmd_param4
 *
 * EHSM Biu Core1 Cmd Param4 Register
 * This register contains parameter 4 associated with a EHSM primitive command from
 * host processor core 1.
 */
union cavm_ehsm_biu_core1_cmd_param4
{
    uint32_t u;
    struct cavm_ehsm_biu_core1_cmd_param4_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t core1_cmd_param4      : 32; /**< [ 31:  0](WO) This register contains parameter 4 associated with a EHSM primitive command from
                                                                 host processor core 1. */
#else /* Word 0 - Little Endian */
        uint32_t core1_cmd_param4      : 32; /**< [ 31:  0](WO) This register contains parameter 4 associated with a EHSM primitive command from
                                                                 host processor core 1. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_ehsm_biu_core1_cmd_param4_s cn; */
};
typedef union cavm_ehsm_biu_core1_cmd_param4 cavm_ehsm_biu_core1_cmd_param4_t;

#define CAVM_EHSM_BIU_CORE1_CMD_PARAM4 CAVM_EHSM_BIU_CORE1_CMD_PARAM4_FUNC()
static inline uint64_t CAVM_EHSM_BIU_CORE1_CMD_PARAM4_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_EHSM_BIU_CORE1_CMD_PARAM4_FUNC(void)
{
    return 0x80b000000010ll;
}

#define typedef_CAVM_EHSM_BIU_CORE1_CMD_PARAM4 cavm_ehsm_biu_core1_cmd_param4_t
#define bustype_CAVM_EHSM_BIU_CORE1_CMD_PARAM4 CSR_TYPE_NCB32b
#define basename_CAVM_EHSM_BIU_CORE1_CMD_PARAM4 "EHSM_BIU_CORE1_CMD_PARAM4"
#define device_bar_CAVM_EHSM_BIU_CORE1_CMD_PARAM4 0x0 /* PF_BAR0 */
#define busnum_CAVM_EHSM_BIU_CORE1_CMD_PARAM4 0
#define arguments_CAVM_EHSM_BIU_CORE1_CMD_PARAM4 -1,-1,-1,-1

/**
 * Register (NCB32b) ehsm_biu_core1_cmd_param5
 *
 * EHSM Biu Core1 Cmd Param5 Register
 * This register contains parameter 5 associated with a EHSM primitive command from
 * host processor core 1.
 */
union cavm_ehsm_biu_core1_cmd_param5
{
    uint32_t u;
    struct cavm_ehsm_biu_core1_cmd_param5_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t core1_cmd_param5      : 32; /**< [ 31:  0](WO) This register contains parameter 5 associated with a EHSM primitive command from
                                                                 host processor core 1. */
#else /* Word 0 - Little Endian */
        uint32_t core1_cmd_param5      : 32; /**< [ 31:  0](WO) This register contains parameter 5 associated with a EHSM primitive command from
                                                                 host processor core 1. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_ehsm_biu_core1_cmd_param5_s cn; */
};
typedef union cavm_ehsm_biu_core1_cmd_param5 cavm_ehsm_biu_core1_cmd_param5_t;

#define CAVM_EHSM_BIU_CORE1_CMD_PARAM5 CAVM_EHSM_BIU_CORE1_CMD_PARAM5_FUNC()
static inline uint64_t CAVM_EHSM_BIU_CORE1_CMD_PARAM5_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_EHSM_BIU_CORE1_CMD_PARAM5_FUNC(void)
{
    return 0x80b000000014ll;
}

#define typedef_CAVM_EHSM_BIU_CORE1_CMD_PARAM5 cavm_ehsm_biu_core1_cmd_param5_t
#define bustype_CAVM_EHSM_BIU_CORE1_CMD_PARAM5 CSR_TYPE_NCB32b
#define basename_CAVM_EHSM_BIU_CORE1_CMD_PARAM5 "EHSM_BIU_CORE1_CMD_PARAM5"
#define device_bar_CAVM_EHSM_BIU_CORE1_CMD_PARAM5 0x0 /* PF_BAR0 */
#define busnum_CAVM_EHSM_BIU_CORE1_CMD_PARAM5 0
#define arguments_CAVM_EHSM_BIU_CORE1_CMD_PARAM5 -1,-1,-1,-1

/**
 * Register (NCB32b) ehsm_biu_core1_cmd_param6
 *
 * EHSM Biu Core1 Cmd Param6 Register
 * This register contains parameter 6 associated with a EHSM primitive command from
 * host processor core 1.
 */
union cavm_ehsm_biu_core1_cmd_param6
{
    uint32_t u;
    struct cavm_ehsm_biu_core1_cmd_param6_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t core1_cmd_param6      : 32; /**< [ 31:  0](WO) This register contains parameter 6 associated with a EHSM primitive command from
                                                                 host processor core 1. */
#else /* Word 0 - Little Endian */
        uint32_t core1_cmd_param6      : 32; /**< [ 31:  0](WO) This register contains parameter 6 associated with a EHSM primitive command from
                                                                 host processor core 1. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_ehsm_biu_core1_cmd_param6_s cn; */
};
typedef union cavm_ehsm_biu_core1_cmd_param6 cavm_ehsm_biu_core1_cmd_param6_t;

#define CAVM_EHSM_BIU_CORE1_CMD_PARAM6 CAVM_EHSM_BIU_CORE1_CMD_PARAM6_FUNC()
static inline uint64_t CAVM_EHSM_BIU_CORE1_CMD_PARAM6_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_EHSM_BIU_CORE1_CMD_PARAM6_FUNC(void)
{
    return 0x80b000000018ll;
}

#define typedef_CAVM_EHSM_BIU_CORE1_CMD_PARAM6 cavm_ehsm_biu_core1_cmd_param6_t
#define bustype_CAVM_EHSM_BIU_CORE1_CMD_PARAM6 CSR_TYPE_NCB32b
#define basename_CAVM_EHSM_BIU_CORE1_CMD_PARAM6 "EHSM_BIU_CORE1_CMD_PARAM6"
#define device_bar_CAVM_EHSM_BIU_CORE1_CMD_PARAM6 0x0 /* PF_BAR0 */
#define busnum_CAVM_EHSM_BIU_CORE1_CMD_PARAM6 0
#define arguments_CAVM_EHSM_BIU_CORE1_CMD_PARAM6 -1,-1,-1,-1

/**
 * Register (NCB32b) ehsm_biu_core1_cmd_param7
 *
 * EHSM Biu Core1 Cmd Param7 Register
 * This register contains parameter 7 associated with a EHSM primitive command from
 * host processor core 1.
 */
union cavm_ehsm_biu_core1_cmd_param7
{
    uint32_t u;
    struct cavm_ehsm_biu_core1_cmd_param7_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t core1_cmd_param7      : 32; /**< [ 31:  0](WO) This register contains parameter 7 associated with a EHSM primitive command from
                                                                 host processor core 1. */
#else /* Word 0 - Little Endian */
        uint32_t core1_cmd_param7      : 32; /**< [ 31:  0](WO) This register contains parameter 7 associated with a EHSM primitive command from
                                                                 host processor core 1. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_ehsm_biu_core1_cmd_param7_s cn; */
};
typedef union cavm_ehsm_biu_core1_cmd_param7 cavm_ehsm_biu_core1_cmd_param7_t;

#define CAVM_EHSM_BIU_CORE1_CMD_PARAM7 CAVM_EHSM_BIU_CORE1_CMD_PARAM7_FUNC()
static inline uint64_t CAVM_EHSM_BIU_CORE1_CMD_PARAM7_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_EHSM_BIU_CORE1_CMD_PARAM7_FUNC(void)
{
    return 0x80b00000001cll;
}

#define typedef_CAVM_EHSM_BIU_CORE1_CMD_PARAM7 cavm_ehsm_biu_core1_cmd_param7_t
#define bustype_CAVM_EHSM_BIU_CORE1_CMD_PARAM7 CSR_TYPE_NCB32b
#define basename_CAVM_EHSM_BIU_CORE1_CMD_PARAM7 "EHSM_BIU_CORE1_CMD_PARAM7"
#define device_bar_CAVM_EHSM_BIU_CORE1_CMD_PARAM7 0x0 /* PF_BAR0 */
#define busnum_CAVM_EHSM_BIU_CORE1_CMD_PARAM7 0
#define arguments_CAVM_EHSM_BIU_CORE1_CMD_PARAM7 -1,-1,-1,-1

/**
 * Register (NCB32b) ehsm_biu_core1_cmd_param8
 *
 * EHSM Biu Core1 Cmd Param8 Register
 * This register contains parameter 8 associated with a EHSM primitive command from
 * host processor core 1.
 */
union cavm_ehsm_biu_core1_cmd_param8
{
    uint32_t u;
    struct cavm_ehsm_biu_core1_cmd_param8_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t core1_cmd_param8      : 32; /**< [ 31:  0](WO) This register contains parameter 8 associated with a EHSM primitive command from
                                                                 host processor core 1. */
#else /* Word 0 - Little Endian */
        uint32_t core1_cmd_param8      : 32; /**< [ 31:  0](WO) This register contains parameter 8 associated with a EHSM primitive command from
                                                                 host processor core 1. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_ehsm_biu_core1_cmd_param8_s cn; */
};
typedef union cavm_ehsm_biu_core1_cmd_param8 cavm_ehsm_biu_core1_cmd_param8_t;

#define CAVM_EHSM_BIU_CORE1_CMD_PARAM8 CAVM_EHSM_BIU_CORE1_CMD_PARAM8_FUNC()
static inline uint64_t CAVM_EHSM_BIU_CORE1_CMD_PARAM8_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_EHSM_BIU_CORE1_CMD_PARAM8_FUNC(void)
{
    return 0x80b000000020ll;
}

#define typedef_CAVM_EHSM_BIU_CORE1_CMD_PARAM8 cavm_ehsm_biu_core1_cmd_param8_t
#define bustype_CAVM_EHSM_BIU_CORE1_CMD_PARAM8 CSR_TYPE_NCB32b
#define basename_CAVM_EHSM_BIU_CORE1_CMD_PARAM8 "EHSM_BIU_CORE1_CMD_PARAM8"
#define device_bar_CAVM_EHSM_BIU_CORE1_CMD_PARAM8 0x0 /* PF_BAR0 */
#define busnum_CAVM_EHSM_BIU_CORE1_CMD_PARAM8 0
#define arguments_CAVM_EHSM_BIU_CORE1_CMD_PARAM8 -1,-1,-1,-1

/**
 * Register (NCB32b) ehsm_biu_core1_cmd_param9
 *
 * EHSM Biu Core1 Cmd Param9 Register
 * This register contains parameter 9 associated with a EHSM primitive command from
 * host processor core 1.
 */
union cavm_ehsm_biu_core1_cmd_param9
{
    uint32_t u;
    struct cavm_ehsm_biu_core1_cmd_param9_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t core1_cmd_param9      : 32; /**< [ 31:  0](WO) This register contains parameter 9 associated with a EHSM primitive command from
                                                                 host processor core 1. */
#else /* Word 0 - Little Endian */
        uint32_t core1_cmd_param9      : 32; /**< [ 31:  0](WO) This register contains parameter 9 associated with a EHSM primitive command from
                                                                 host processor core 1. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_ehsm_biu_core1_cmd_param9_s cn; */
};
typedef union cavm_ehsm_biu_core1_cmd_param9 cavm_ehsm_biu_core1_cmd_param9_t;

#define CAVM_EHSM_BIU_CORE1_CMD_PARAM9 CAVM_EHSM_BIU_CORE1_CMD_PARAM9_FUNC()
static inline uint64_t CAVM_EHSM_BIU_CORE1_CMD_PARAM9_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_EHSM_BIU_CORE1_CMD_PARAM9_FUNC(void)
{
    return 0x80b000000024ll;
}

#define typedef_CAVM_EHSM_BIU_CORE1_CMD_PARAM9 cavm_ehsm_biu_core1_cmd_param9_t
#define bustype_CAVM_EHSM_BIU_CORE1_CMD_PARAM9 CSR_TYPE_NCB32b
#define basename_CAVM_EHSM_BIU_CORE1_CMD_PARAM9 "EHSM_BIU_CORE1_CMD_PARAM9"
#define device_bar_CAVM_EHSM_BIU_CORE1_CMD_PARAM9 0x0 /* PF_BAR0 */
#define busnum_CAVM_EHSM_BIU_CORE1_CMD_PARAM9 0
#define arguments_CAVM_EHSM_BIU_CORE1_CMD_PARAM9 -1,-1,-1,-1

/**
 * Register (NCB32b) ehsm_biu_core1_cmd_ret_status
 *
 * EHSM Biu Core1 Cmd Ret Status Register
 * This register contains return status associated with a EHSM primitive command from
 * host processor core 1.
 * If it is 0, it indicates command execution success. If it is non 0, it indicates
 * command execution failure and the value is the error code.
 */
union cavm_ehsm_biu_core1_cmd_ret_status
{
    uint32_t u;
    struct cavm_ehsm_biu_core1_cmd_ret_status_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t core1_cmd_ret_status  : 32; /**< [ 31:  0](RO) This register contains return status associated with a EHSM primitive command
                                                                 from host processor core 1.
                                                                 If it is 0, it indicates command execution success. If it is non 0, it indicates
                                                                 command execution failure and the value is the error code. */
#else /* Word 0 - Little Endian */
        uint32_t core1_cmd_ret_status  : 32; /**< [ 31:  0](RO) This register contains return status associated with a EHSM primitive command
                                                                 from host processor core 1.
                                                                 If it is 0, it indicates command execution success. If it is non 0, it indicates
                                                                 command execution failure and the value is the error code. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_ehsm_biu_core1_cmd_ret_status_s cn; */
};
typedef union cavm_ehsm_biu_core1_cmd_ret_status cavm_ehsm_biu_core1_cmd_ret_status_t;

#define CAVM_EHSM_BIU_CORE1_CMD_RET_STATUS CAVM_EHSM_BIU_CORE1_CMD_RET_STATUS_FUNC()
static inline uint64_t CAVM_EHSM_BIU_CORE1_CMD_RET_STATUS_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_EHSM_BIU_CORE1_CMD_RET_STATUS_FUNC(void)
{
    return 0x80b000000080ll;
}

#define typedef_CAVM_EHSM_BIU_CORE1_CMD_RET_STATUS cavm_ehsm_biu_core1_cmd_ret_status_t
#define bustype_CAVM_EHSM_BIU_CORE1_CMD_RET_STATUS CSR_TYPE_NCB32b
#define basename_CAVM_EHSM_BIU_CORE1_CMD_RET_STATUS "EHSM_BIU_CORE1_CMD_RET_STATUS"
#define device_bar_CAVM_EHSM_BIU_CORE1_CMD_RET_STATUS 0x0 /* PF_BAR0 */
#define busnum_CAVM_EHSM_BIU_CORE1_CMD_RET_STATUS 0
#define arguments_CAVM_EHSM_BIU_CORE1_CMD_RET_STATUS -1,-1,-1,-1

/**
 * Register (NCB32b) ehsm_biu_core1_cmd_status0
 *
 * EHSM Biu Core1 Cmd Status0 Register
 * This register contains status 0 associated with a EHSM primitive command from host
 * processor core 1.
 */
union cavm_ehsm_biu_core1_cmd_status0
{
    uint32_t u;
    struct cavm_ehsm_biu_core1_cmd_status0_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t core1_cmd_status0     : 32; /**< [ 31:  0](RO) This register contains status 0 associated with a EHSM primitive command from
                                                                 host processor core 1. */
#else /* Word 0 - Little Endian */
        uint32_t core1_cmd_status0     : 32; /**< [ 31:  0](RO) This register contains status 0 associated with a EHSM primitive command from
                                                                 host processor core 1. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_ehsm_biu_core1_cmd_status0_s cn; */
};
typedef union cavm_ehsm_biu_core1_cmd_status0 cavm_ehsm_biu_core1_cmd_status0_t;

#define CAVM_EHSM_BIU_CORE1_CMD_STATUS0 CAVM_EHSM_BIU_CORE1_CMD_STATUS0_FUNC()
static inline uint64_t CAVM_EHSM_BIU_CORE1_CMD_STATUS0_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_EHSM_BIU_CORE1_CMD_STATUS0_FUNC(void)
{
    return 0x80b000000084ll;
}

#define typedef_CAVM_EHSM_BIU_CORE1_CMD_STATUS0 cavm_ehsm_biu_core1_cmd_status0_t
#define bustype_CAVM_EHSM_BIU_CORE1_CMD_STATUS0 CSR_TYPE_NCB32b
#define basename_CAVM_EHSM_BIU_CORE1_CMD_STATUS0 "EHSM_BIU_CORE1_CMD_STATUS0"
#define device_bar_CAVM_EHSM_BIU_CORE1_CMD_STATUS0 0x0 /* PF_BAR0 */
#define busnum_CAVM_EHSM_BIU_CORE1_CMD_STATUS0 0
#define arguments_CAVM_EHSM_BIU_CORE1_CMD_STATUS0 -1,-1,-1,-1

/**
 * Register (NCB32b) ehsm_biu_core1_cmd_status1
 *
 * EHSM Biu Core1 Cmd Status1 Register
 * This register contains status 1 associated with a EHSM primitive command from host
 * processor core 1.
 */
union cavm_ehsm_biu_core1_cmd_status1
{
    uint32_t u;
    struct cavm_ehsm_biu_core1_cmd_status1_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t core1_cmd_status1     : 32; /**< [ 31:  0](RO) This register contains status 1 associated with a EHSM primitive command from
                                                                 host processor core 1. */
#else /* Word 0 - Little Endian */
        uint32_t core1_cmd_status1     : 32; /**< [ 31:  0](RO) This register contains status 1 associated with a EHSM primitive command from
                                                                 host processor core 1. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_ehsm_biu_core1_cmd_status1_s cn; */
};
typedef union cavm_ehsm_biu_core1_cmd_status1 cavm_ehsm_biu_core1_cmd_status1_t;

#define CAVM_EHSM_BIU_CORE1_CMD_STATUS1 CAVM_EHSM_BIU_CORE1_CMD_STATUS1_FUNC()
static inline uint64_t CAVM_EHSM_BIU_CORE1_CMD_STATUS1_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_EHSM_BIU_CORE1_CMD_STATUS1_FUNC(void)
{
    return 0x80b000000088ll;
}

#define typedef_CAVM_EHSM_BIU_CORE1_CMD_STATUS1 cavm_ehsm_biu_core1_cmd_status1_t
#define bustype_CAVM_EHSM_BIU_CORE1_CMD_STATUS1 CSR_TYPE_NCB32b
#define basename_CAVM_EHSM_BIU_CORE1_CMD_STATUS1 "EHSM_BIU_CORE1_CMD_STATUS1"
#define device_bar_CAVM_EHSM_BIU_CORE1_CMD_STATUS1 0x0 /* PF_BAR0 */
#define busnum_CAVM_EHSM_BIU_CORE1_CMD_STATUS1 0
#define arguments_CAVM_EHSM_BIU_CORE1_CMD_STATUS1 -1,-1,-1,-1

/**
 * Register (NCB32b) ehsm_biu_core1_cmd_status10
 *
 * EHSM Biu Core1 Cmd Status10 Register
 * This register contains status 10 associated with a EHSM primitive command from host
 * processor core 1.
 */
union cavm_ehsm_biu_core1_cmd_status10
{
    uint32_t u;
    struct cavm_ehsm_biu_core1_cmd_status10_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t core1_cmd_status10    : 32; /**< [ 31:  0](RO) This register contains status 10 associated with a EHSM primitive command from
                                                                 host processor core 1. */
#else /* Word 0 - Little Endian */
        uint32_t core1_cmd_status10    : 32; /**< [ 31:  0](RO) This register contains status 10 associated with a EHSM primitive command from
                                                                 host processor core 1. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_ehsm_biu_core1_cmd_status10_s cn; */
};
typedef union cavm_ehsm_biu_core1_cmd_status10 cavm_ehsm_biu_core1_cmd_status10_t;

#define CAVM_EHSM_BIU_CORE1_CMD_STATUS10 CAVM_EHSM_BIU_CORE1_CMD_STATUS10_FUNC()
static inline uint64_t CAVM_EHSM_BIU_CORE1_CMD_STATUS10_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_EHSM_BIU_CORE1_CMD_STATUS10_FUNC(void)
{
    return 0x80b0000000acll;
}

#define typedef_CAVM_EHSM_BIU_CORE1_CMD_STATUS10 cavm_ehsm_biu_core1_cmd_status10_t
#define bustype_CAVM_EHSM_BIU_CORE1_CMD_STATUS10 CSR_TYPE_NCB32b
#define basename_CAVM_EHSM_BIU_CORE1_CMD_STATUS10 "EHSM_BIU_CORE1_CMD_STATUS10"
#define device_bar_CAVM_EHSM_BIU_CORE1_CMD_STATUS10 0x0 /* PF_BAR0 */
#define busnum_CAVM_EHSM_BIU_CORE1_CMD_STATUS10 0
#define arguments_CAVM_EHSM_BIU_CORE1_CMD_STATUS10 -1,-1,-1,-1

/**
 * Register (NCB32b) ehsm_biu_core1_cmd_status11
 *
 * EHSM Biu Core1 Cmd Status11 Register
 * This register contains status 11 associated with a EHSM primitive command from host
 * processor core 1.
 */
union cavm_ehsm_biu_core1_cmd_status11
{
    uint32_t u;
    struct cavm_ehsm_biu_core1_cmd_status11_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t core1_cmd_status11    : 32; /**< [ 31:  0](RO) This register contains status 11 associated with a EHSM primitive command from
                                                                 host processor core 1. */
#else /* Word 0 - Little Endian */
        uint32_t core1_cmd_status11    : 32; /**< [ 31:  0](RO) This register contains status 11 associated with a EHSM primitive command from
                                                                 host processor core 1. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_ehsm_biu_core1_cmd_status11_s cn; */
};
typedef union cavm_ehsm_biu_core1_cmd_status11 cavm_ehsm_biu_core1_cmd_status11_t;

#define CAVM_EHSM_BIU_CORE1_CMD_STATUS11 CAVM_EHSM_BIU_CORE1_CMD_STATUS11_FUNC()
static inline uint64_t CAVM_EHSM_BIU_CORE1_CMD_STATUS11_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_EHSM_BIU_CORE1_CMD_STATUS11_FUNC(void)
{
    return 0x80b0000000b0ll;
}

#define typedef_CAVM_EHSM_BIU_CORE1_CMD_STATUS11 cavm_ehsm_biu_core1_cmd_status11_t
#define bustype_CAVM_EHSM_BIU_CORE1_CMD_STATUS11 CSR_TYPE_NCB32b
#define basename_CAVM_EHSM_BIU_CORE1_CMD_STATUS11 "EHSM_BIU_CORE1_CMD_STATUS11"
#define device_bar_CAVM_EHSM_BIU_CORE1_CMD_STATUS11 0x0 /* PF_BAR0 */
#define busnum_CAVM_EHSM_BIU_CORE1_CMD_STATUS11 0
#define arguments_CAVM_EHSM_BIU_CORE1_CMD_STATUS11 -1,-1,-1,-1

/**
 * Register (NCB32b) ehsm_biu_core1_cmd_status12
 *
 * EHSM Biu Core1 Cmd Status12 Register
 * This register contains status 12 associated with a EHSM primitive command from host
 * processor core 1.
 */
union cavm_ehsm_biu_core1_cmd_status12
{
    uint32_t u;
    struct cavm_ehsm_biu_core1_cmd_status12_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t core1_cmd_status12    : 32; /**< [ 31:  0](RO) This register contains status 12 associated with a EHSM primitive command from
                                                                 host processor core 1. */
#else /* Word 0 - Little Endian */
        uint32_t core1_cmd_status12    : 32; /**< [ 31:  0](RO) This register contains status 12 associated with a EHSM primitive command from
                                                                 host processor core 1. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_ehsm_biu_core1_cmd_status12_s cn; */
};
typedef union cavm_ehsm_biu_core1_cmd_status12 cavm_ehsm_biu_core1_cmd_status12_t;

#define CAVM_EHSM_BIU_CORE1_CMD_STATUS12 CAVM_EHSM_BIU_CORE1_CMD_STATUS12_FUNC()
static inline uint64_t CAVM_EHSM_BIU_CORE1_CMD_STATUS12_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_EHSM_BIU_CORE1_CMD_STATUS12_FUNC(void)
{
    return 0x80b0000000b4ll;
}

#define typedef_CAVM_EHSM_BIU_CORE1_CMD_STATUS12 cavm_ehsm_biu_core1_cmd_status12_t
#define bustype_CAVM_EHSM_BIU_CORE1_CMD_STATUS12 CSR_TYPE_NCB32b
#define basename_CAVM_EHSM_BIU_CORE1_CMD_STATUS12 "EHSM_BIU_CORE1_CMD_STATUS12"
#define device_bar_CAVM_EHSM_BIU_CORE1_CMD_STATUS12 0x0 /* PF_BAR0 */
#define busnum_CAVM_EHSM_BIU_CORE1_CMD_STATUS12 0
#define arguments_CAVM_EHSM_BIU_CORE1_CMD_STATUS12 -1,-1,-1,-1

/**
 * Register (NCB32b) ehsm_biu_core1_cmd_status13
 *
 * EHSM Biu Core1 Cmd Status13 Register
 * This register contains status 13 associated with a EHSM primitive command from host
 * processor core 1.
 */
union cavm_ehsm_biu_core1_cmd_status13
{
    uint32_t u;
    struct cavm_ehsm_biu_core1_cmd_status13_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t core1_cmd_status13    : 32; /**< [ 31:  0](RO) This register contains status 13 associated with a EHSM primitive command from
                                                                 host processor core 1. */
#else /* Word 0 - Little Endian */
        uint32_t core1_cmd_status13    : 32; /**< [ 31:  0](RO) This register contains status 13 associated with a EHSM primitive command from
                                                                 host processor core 1. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_ehsm_biu_core1_cmd_status13_s cn; */
};
typedef union cavm_ehsm_biu_core1_cmd_status13 cavm_ehsm_biu_core1_cmd_status13_t;

#define CAVM_EHSM_BIU_CORE1_CMD_STATUS13 CAVM_EHSM_BIU_CORE1_CMD_STATUS13_FUNC()
static inline uint64_t CAVM_EHSM_BIU_CORE1_CMD_STATUS13_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_EHSM_BIU_CORE1_CMD_STATUS13_FUNC(void)
{
    return 0x80b0000000b8ll;
}

#define typedef_CAVM_EHSM_BIU_CORE1_CMD_STATUS13 cavm_ehsm_biu_core1_cmd_status13_t
#define bustype_CAVM_EHSM_BIU_CORE1_CMD_STATUS13 CSR_TYPE_NCB32b
#define basename_CAVM_EHSM_BIU_CORE1_CMD_STATUS13 "EHSM_BIU_CORE1_CMD_STATUS13"
#define device_bar_CAVM_EHSM_BIU_CORE1_CMD_STATUS13 0x0 /* PF_BAR0 */
#define busnum_CAVM_EHSM_BIU_CORE1_CMD_STATUS13 0
#define arguments_CAVM_EHSM_BIU_CORE1_CMD_STATUS13 -1,-1,-1,-1

/**
 * Register (NCB32b) ehsm_biu_core1_cmd_status14
 *
 * EHSM Biu Core1 Cmd Status14 Register
 * This register contains status 14 associated with a EHSM primitive command from host
 * processor core 1.
 */
union cavm_ehsm_biu_core1_cmd_status14
{
    uint32_t u;
    struct cavm_ehsm_biu_core1_cmd_status14_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t core1_cmd_status14    : 32; /**< [ 31:  0](RO) This register contains status 14 associated with a EHSM primitive command from
                                                                 host processor core 1. */
#else /* Word 0 - Little Endian */
        uint32_t core1_cmd_status14    : 32; /**< [ 31:  0](RO) This register contains status 14 associated with a EHSM primitive command from
                                                                 host processor core 1. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_ehsm_biu_core1_cmd_status14_s cn; */
};
typedef union cavm_ehsm_biu_core1_cmd_status14 cavm_ehsm_biu_core1_cmd_status14_t;

#define CAVM_EHSM_BIU_CORE1_CMD_STATUS14 CAVM_EHSM_BIU_CORE1_CMD_STATUS14_FUNC()
static inline uint64_t CAVM_EHSM_BIU_CORE1_CMD_STATUS14_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_EHSM_BIU_CORE1_CMD_STATUS14_FUNC(void)
{
    return 0x80b0000000bcll;
}

#define typedef_CAVM_EHSM_BIU_CORE1_CMD_STATUS14 cavm_ehsm_biu_core1_cmd_status14_t
#define bustype_CAVM_EHSM_BIU_CORE1_CMD_STATUS14 CSR_TYPE_NCB32b
#define basename_CAVM_EHSM_BIU_CORE1_CMD_STATUS14 "EHSM_BIU_CORE1_CMD_STATUS14"
#define device_bar_CAVM_EHSM_BIU_CORE1_CMD_STATUS14 0x0 /* PF_BAR0 */
#define busnum_CAVM_EHSM_BIU_CORE1_CMD_STATUS14 0
#define arguments_CAVM_EHSM_BIU_CORE1_CMD_STATUS14 -1,-1,-1,-1

/**
 * Register (NCB32b) ehsm_biu_core1_cmd_status15
 *
 * EHSM Biu Core1 Cmd Status15 Register
 * This register contains status 15 associated with a EHSM primitive command from host
 * processor core 1.
 */
union cavm_ehsm_biu_core1_cmd_status15
{
    uint32_t u;
    struct cavm_ehsm_biu_core1_cmd_status15_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t core1_cmd_status15    : 32; /**< [ 31:  0](RO) This register contains status 15 associated with a EHSM primitive command from
                                                                 host processor core 1. */
#else /* Word 0 - Little Endian */
        uint32_t core1_cmd_status15    : 32; /**< [ 31:  0](RO) This register contains status 15 associated with a EHSM primitive command from
                                                                 host processor core 1. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_ehsm_biu_core1_cmd_status15_s cn; */
};
typedef union cavm_ehsm_biu_core1_cmd_status15 cavm_ehsm_biu_core1_cmd_status15_t;

#define CAVM_EHSM_BIU_CORE1_CMD_STATUS15 CAVM_EHSM_BIU_CORE1_CMD_STATUS15_FUNC()
static inline uint64_t CAVM_EHSM_BIU_CORE1_CMD_STATUS15_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_EHSM_BIU_CORE1_CMD_STATUS15_FUNC(void)
{
    return 0x80b0000000c0ll;
}

#define typedef_CAVM_EHSM_BIU_CORE1_CMD_STATUS15 cavm_ehsm_biu_core1_cmd_status15_t
#define bustype_CAVM_EHSM_BIU_CORE1_CMD_STATUS15 CSR_TYPE_NCB32b
#define basename_CAVM_EHSM_BIU_CORE1_CMD_STATUS15 "EHSM_BIU_CORE1_CMD_STATUS15"
#define device_bar_CAVM_EHSM_BIU_CORE1_CMD_STATUS15 0x0 /* PF_BAR0 */
#define busnum_CAVM_EHSM_BIU_CORE1_CMD_STATUS15 0
#define arguments_CAVM_EHSM_BIU_CORE1_CMD_STATUS15 -1,-1,-1,-1

/**
 * Register (NCB32b) ehsm_biu_core1_cmd_status2
 *
 * EHSM Biu Core1 Cmd Status2 Register
 * This register contains status 2 associated with a EHSM primitive command from host
 * processor core 1.
 */
union cavm_ehsm_biu_core1_cmd_status2
{
    uint32_t u;
    struct cavm_ehsm_biu_core1_cmd_status2_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t core1_cmd_status2     : 32; /**< [ 31:  0](RO) This register contains status 2 associated with a EHSM primitive command from
                                                                 host processor core 1. */
#else /* Word 0 - Little Endian */
        uint32_t core1_cmd_status2     : 32; /**< [ 31:  0](RO) This register contains status 2 associated with a EHSM primitive command from
                                                                 host processor core 1. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_ehsm_biu_core1_cmd_status2_s cn; */
};
typedef union cavm_ehsm_biu_core1_cmd_status2 cavm_ehsm_biu_core1_cmd_status2_t;

#define CAVM_EHSM_BIU_CORE1_CMD_STATUS2 CAVM_EHSM_BIU_CORE1_CMD_STATUS2_FUNC()
static inline uint64_t CAVM_EHSM_BIU_CORE1_CMD_STATUS2_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_EHSM_BIU_CORE1_CMD_STATUS2_FUNC(void)
{
    return 0x80b00000008cll;
}

#define typedef_CAVM_EHSM_BIU_CORE1_CMD_STATUS2 cavm_ehsm_biu_core1_cmd_status2_t
#define bustype_CAVM_EHSM_BIU_CORE1_CMD_STATUS2 CSR_TYPE_NCB32b
#define basename_CAVM_EHSM_BIU_CORE1_CMD_STATUS2 "EHSM_BIU_CORE1_CMD_STATUS2"
#define device_bar_CAVM_EHSM_BIU_CORE1_CMD_STATUS2 0x0 /* PF_BAR0 */
#define busnum_CAVM_EHSM_BIU_CORE1_CMD_STATUS2 0
#define arguments_CAVM_EHSM_BIU_CORE1_CMD_STATUS2 -1,-1,-1,-1

/**
 * Register (NCB32b) ehsm_biu_core1_cmd_status3
 *
 * EHSM Biu Core1 Cmd Status3 Register
 * This register contains status 3 associated with a EHSM primitive command from host
 * processor core 1.
 */
union cavm_ehsm_biu_core1_cmd_status3
{
    uint32_t u;
    struct cavm_ehsm_biu_core1_cmd_status3_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t core1_cmd_status3     : 32; /**< [ 31:  0](RO) This register contains status 3 associated with a EHSM primitive command from
                                                                 host processor core 1. */
#else /* Word 0 - Little Endian */
        uint32_t core1_cmd_status3     : 32; /**< [ 31:  0](RO) This register contains status 3 associated with a EHSM primitive command from
                                                                 host processor core 1. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_ehsm_biu_core1_cmd_status3_s cn; */
};
typedef union cavm_ehsm_biu_core1_cmd_status3 cavm_ehsm_biu_core1_cmd_status3_t;

#define CAVM_EHSM_BIU_CORE1_CMD_STATUS3 CAVM_EHSM_BIU_CORE1_CMD_STATUS3_FUNC()
static inline uint64_t CAVM_EHSM_BIU_CORE1_CMD_STATUS3_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_EHSM_BIU_CORE1_CMD_STATUS3_FUNC(void)
{
    return 0x80b000000090ll;
}

#define typedef_CAVM_EHSM_BIU_CORE1_CMD_STATUS3 cavm_ehsm_biu_core1_cmd_status3_t
#define bustype_CAVM_EHSM_BIU_CORE1_CMD_STATUS3 CSR_TYPE_NCB32b
#define basename_CAVM_EHSM_BIU_CORE1_CMD_STATUS3 "EHSM_BIU_CORE1_CMD_STATUS3"
#define device_bar_CAVM_EHSM_BIU_CORE1_CMD_STATUS3 0x0 /* PF_BAR0 */
#define busnum_CAVM_EHSM_BIU_CORE1_CMD_STATUS3 0
#define arguments_CAVM_EHSM_BIU_CORE1_CMD_STATUS3 -1,-1,-1,-1

/**
 * Register (NCB32b) ehsm_biu_core1_cmd_status4
 *
 * EHSM Biu Core1 Cmd Status4 Register
 * This register contains status 4 associated with a EHSM primitive command from host
 * processor core 1.
 */
union cavm_ehsm_biu_core1_cmd_status4
{
    uint32_t u;
    struct cavm_ehsm_biu_core1_cmd_status4_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t core1_cmd_status4     : 32; /**< [ 31:  0](RO) This register contains status 4 associated with a EHSM primitive command from
                                                                 host processor core 1. */
#else /* Word 0 - Little Endian */
        uint32_t core1_cmd_status4     : 32; /**< [ 31:  0](RO) This register contains status 4 associated with a EHSM primitive command from
                                                                 host processor core 1. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_ehsm_biu_core1_cmd_status4_s cn; */
};
typedef union cavm_ehsm_biu_core1_cmd_status4 cavm_ehsm_biu_core1_cmd_status4_t;

#define CAVM_EHSM_BIU_CORE1_CMD_STATUS4 CAVM_EHSM_BIU_CORE1_CMD_STATUS4_FUNC()
static inline uint64_t CAVM_EHSM_BIU_CORE1_CMD_STATUS4_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_EHSM_BIU_CORE1_CMD_STATUS4_FUNC(void)
{
    return 0x80b000000094ll;
}

#define typedef_CAVM_EHSM_BIU_CORE1_CMD_STATUS4 cavm_ehsm_biu_core1_cmd_status4_t
#define bustype_CAVM_EHSM_BIU_CORE1_CMD_STATUS4 CSR_TYPE_NCB32b
#define basename_CAVM_EHSM_BIU_CORE1_CMD_STATUS4 "EHSM_BIU_CORE1_CMD_STATUS4"
#define device_bar_CAVM_EHSM_BIU_CORE1_CMD_STATUS4 0x0 /* PF_BAR0 */
#define busnum_CAVM_EHSM_BIU_CORE1_CMD_STATUS4 0
#define arguments_CAVM_EHSM_BIU_CORE1_CMD_STATUS4 -1,-1,-1,-1

/**
 * Register (NCB32b) ehsm_biu_core1_cmd_status5
 *
 * EHSM Biu Core1 Cmd Status5 Register
 * This register contains status 5 associated with a EHSM primitive command from host
 * processor core 1.
 */
union cavm_ehsm_biu_core1_cmd_status5
{
    uint32_t u;
    struct cavm_ehsm_biu_core1_cmd_status5_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t core1_cmd_status5     : 32; /**< [ 31:  0](RO) This register contains status 5 associated with a EHSM primitive command from
                                                                 host processor core 1. */
#else /* Word 0 - Little Endian */
        uint32_t core1_cmd_status5     : 32; /**< [ 31:  0](RO) This register contains status 5 associated with a EHSM primitive command from
                                                                 host processor core 1. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_ehsm_biu_core1_cmd_status5_s cn; */
};
typedef union cavm_ehsm_biu_core1_cmd_status5 cavm_ehsm_biu_core1_cmd_status5_t;

#define CAVM_EHSM_BIU_CORE1_CMD_STATUS5 CAVM_EHSM_BIU_CORE1_CMD_STATUS5_FUNC()
static inline uint64_t CAVM_EHSM_BIU_CORE1_CMD_STATUS5_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_EHSM_BIU_CORE1_CMD_STATUS5_FUNC(void)
{
    return 0x80b000000098ll;
}

#define typedef_CAVM_EHSM_BIU_CORE1_CMD_STATUS5 cavm_ehsm_biu_core1_cmd_status5_t
#define bustype_CAVM_EHSM_BIU_CORE1_CMD_STATUS5 CSR_TYPE_NCB32b
#define basename_CAVM_EHSM_BIU_CORE1_CMD_STATUS5 "EHSM_BIU_CORE1_CMD_STATUS5"
#define device_bar_CAVM_EHSM_BIU_CORE1_CMD_STATUS5 0x0 /* PF_BAR0 */
#define busnum_CAVM_EHSM_BIU_CORE1_CMD_STATUS5 0
#define arguments_CAVM_EHSM_BIU_CORE1_CMD_STATUS5 -1,-1,-1,-1

/**
 * Register (NCB32b) ehsm_biu_core1_cmd_status6
 *
 * EHSM Biu Core1 Cmd Status6 Register
 * This register contains status 6 associated with a EHSM primitive command from host
 * processor core 1.
 */
union cavm_ehsm_biu_core1_cmd_status6
{
    uint32_t u;
    struct cavm_ehsm_biu_core1_cmd_status6_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t core1_cmd_status6     : 32; /**< [ 31:  0](RO) This register contains status 6 associated with a EHSM primitive command from
                                                                 host processor core 1. */
#else /* Word 0 - Little Endian */
        uint32_t core1_cmd_status6     : 32; /**< [ 31:  0](RO) This register contains status 6 associated with a EHSM primitive command from
                                                                 host processor core 1. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_ehsm_biu_core1_cmd_status6_s cn; */
};
typedef union cavm_ehsm_biu_core1_cmd_status6 cavm_ehsm_biu_core1_cmd_status6_t;

#define CAVM_EHSM_BIU_CORE1_CMD_STATUS6 CAVM_EHSM_BIU_CORE1_CMD_STATUS6_FUNC()
static inline uint64_t CAVM_EHSM_BIU_CORE1_CMD_STATUS6_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_EHSM_BIU_CORE1_CMD_STATUS6_FUNC(void)
{
    return 0x80b00000009cll;
}

#define typedef_CAVM_EHSM_BIU_CORE1_CMD_STATUS6 cavm_ehsm_biu_core1_cmd_status6_t
#define bustype_CAVM_EHSM_BIU_CORE1_CMD_STATUS6 CSR_TYPE_NCB32b
#define basename_CAVM_EHSM_BIU_CORE1_CMD_STATUS6 "EHSM_BIU_CORE1_CMD_STATUS6"
#define device_bar_CAVM_EHSM_BIU_CORE1_CMD_STATUS6 0x0 /* PF_BAR0 */
#define busnum_CAVM_EHSM_BIU_CORE1_CMD_STATUS6 0
#define arguments_CAVM_EHSM_BIU_CORE1_CMD_STATUS6 -1,-1,-1,-1

/**
 * Register (NCB32b) ehsm_biu_core1_cmd_status7
 *
 * EHSM Biu Core1 Cmd Status7 Register
 * This register contains status 7 associated with a EHSM primitive command from host
 * processor core 1.
 */
union cavm_ehsm_biu_core1_cmd_status7
{
    uint32_t u;
    struct cavm_ehsm_biu_core1_cmd_status7_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t core1_cmd_status7     : 32; /**< [ 31:  0](RO) This register contains status 7 associated with a EHSM primitive command from
                                                                 host processor core 1. */
#else /* Word 0 - Little Endian */
        uint32_t core1_cmd_status7     : 32; /**< [ 31:  0](RO) This register contains status 7 associated with a EHSM primitive command from
                                                                 host processor core 1. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_ehsm_biu_core1_cmd_status7_s cn; */
};
typedef union cavm_ehsm_biu_core1_cmd_status7 cavm_ehsm_biu_core1_cmd_status7_t;

#define CAVM_EHSM_BIU_CORE1_CMD_STATUS7 CAVM_EHSM_BIU_CORE1_CMD_STATUS7_FUNC()
static inline uint64_t CAVM_EHSM_BIU_CORE1_CMD_STATUS7_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_EHSM_BIU_CORE1_CMD_STATUS7_FUNC(void)
{
    return 0x80b0000000a0ll;
}

#define typedef_CAVM_EHSM_BIU_CORE1_CMD_STATUS7 cavm_ehsm_biu_core1_cmd_status7_t
#define bustype_CAVM_EHSM_BIU_CORE1_CMD_STATUS7 CSR_TYPE_NCB32b
#define basename_CAVM_EHSM_BIU_CORE1_CMD_STATUS7 "EHSM_BIU_CORE1_CMD_STATUS7"
#define device_bar_CAVM_EHSM_BIU_CORE1_CMD_STATUS7 0x0 /* PF_BAR0 */
#define busnum_CAVM_EHSM_BIU_CORE1_CMD_STATUS7 0
#define arguments_CAVM_EHSM_BIU_CORE1_CMD_STATUS7 -1,-1,-1,-1

/**
 * Register (NCB32b) ehsm_biu_core1_cmd_status8
 *
 * EHSM Biu Core1 Cmd Status8 Register
 * This register contains status 8 associated with a EHSM primitive command from host
 * processor core 1.
 */
union cavm_ehsm_biu_core1_cmd_status8
{
    uint32_t u;
    struct cavm_ehsm_biu_core1_cmd_status8_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t core1_cmd_status8     : 32; /**< [ 31:  0](RO) This register contains status 8 associated with a EHSM primitive command from
                                                                 host processor core 1. */
#else /* Word 0 - Little Endian */
        uint32_t core1_cmd_status8     : 32; /**< [ 31:  0](RO) This register contains status 8 associated with a EHSM primitive command from
                                                                 host processor core 1. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_ehsm_biu_core1_cmd_status8_s cn; */
};
typedef union cavm_ehsm_biu_core1_cmd_status8 cavm_ehsm_biu_core1_cmd_status8_t;

#define CAVM_EHSM_BIU_CORE1_CMD_STATUS8 CAVM_EHSM_BIU_CORE1_CMD_STATUS8_FUNC()
static inline uint64_t CAVM_EHSM_BIU_CORE1_CMD_STATUS8_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_EHSM_BIU_CORE1_CMD_STATUS8_FUNC(void)
{
    return 0x80b0000000a4ll;
}

#define typedef_CAVM_EHSM_BIU_CORE1_CMD_STATUS8 cavm_ehsm_biu_core1_cmd_status8_t
#define bustype_CAVM_EHSM_BIU_CORE1_CMD_STATUS8 CSR_TYPE_NCB32b
#define basename_CAVM_EHSM_BIU_CORE1_CMD_STATUS8 "EHSM_BIU_CORE1_CMD_STATUS8"
#define device_bar_CAVM_EHSM_BIU_CORE1_CMD_STATUS8 0x0 /* PF_BAR0 */
#define busnum_CAVM_EHSM_BIU_CORE1_CMD_STATUS8 0
#define arguments_CAVM_EHSM_BIU_CORE1_CMD_STATUS8 -1,-1,-1,-1

/**
 * Register (NCB32b) ehsm_biu_core1_cmd_status9
 *
 * EHSM Biu Core1 Cmd Status9 Register
 * This register contains status 9 associated with a EHSM primitive command from host
 * processor core 1.
 */
union cavm_ehsm_biu_core1_cmd_status9
{
    uint32_t u;
    struct cavm_ehsm_biu_core1_cmd_status9_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t core1_cmd_status9     : 32; /**< [ 31:  0](RO) This register contains status 9 associated with a EHSM primitive command from
                                                                 host processor core 1. */
#else /* Word 0 - Little Endian */
        uint32_t core1_cmd_status9     : 32; /**< [ 31:  0](RO) This register contains status 9 associated with a EHSM primitive command from
                                                                 host processor core 1. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_ehsm_biu_core1_cmd_status9_s cn; */
};
typedef union cavm_ehsm_biu_core1_cmd_status9 cavm_ehsm_biu_core1_cmd_status9_t;

#define CAVM_EHSM_BIU_CORE1_CMD_STATUS9 CAVM_EHSM_BIU_CORE1_CMD_STATUS9_FUNC()
static inline uint64_t CAVM_EHSM_BIU_CORE1_CMD_STATUS9_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_EHSM_BIU_CORE1_CMD_STATUS9_FUNC(void)
{
    return 0x80b0000000a8ll;
}

#define typedef_CAVM_EHSM_BIU_CORE1_CMD_STATUS9 cavm_ehsm_biu_core1_cmd_status9_t
#define bustype_CAVM_EHSM_BIU_CORE1_CMD_STATUS9 CSR_TYPE_NCB32b
#define basename_CAVM_EHSM_BIU_CORE1_CMD_STATUS9 "EHSM_BIU_CORE1_CMD_STATUS9"
#define device_bar_CAVM_EHSM_BIU_CORE1_CMD_STATUS9 0x0 /* PF_BAR0 */
#define busnum_CAVM_EHSM_BIU_CORE1_CMD_STATUS9 0
#define arguments_CAVM_EHSM_BIU_CORE1_CMD_STATUS9 -1,-1,-1,-1

/**
 * Register (NCB32b) ehsm_biu_core1_hst_interrupt_mask
 *
 * EHSM Biu Core1 Hst Interrupt Mask Register
 * This is host interrupt masking register for host processor core 1
 */
union cavm_ehsm_biu_core1_hst_interrupt_mask
{
    uint32_t u;
    struct cavm_ehsm_biu_core1_hst_interrupt_mask_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t core1_hst_interrupt_mask : 32;/**< [ 31:  0](R/W) This is host interrupt masking register for host processor core 1 */
#else /* Word 0 - Little Endian */
        uint32_t core1_hst_interrupt_mask : 32;/**< [ 31:  0](R/W) This is host interrupt masking register for host processor core 1 */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_ehsm_biu_core1_hst_interrupt_mask_s cn; */
};
typedef union cavm_ehsm_biu_core1_hst_interrupt_mask cavm_ehsm_biu_core1_hst_interrupt_mask_t;

#define CAVM_EHSM_BIU_CORE1_HST_INTERRUPT_MASK CAVM_EHSM_BIU_CORE1_HST_INTERRUPT_MASK_FUNC()
static inline uint64_t CAVM_EHSM_BIU_CORE1_HST_INTERRUPT_MASK_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_EHSM_BIU_CORE1_HST_INTERRUPT_MASK_FUNC(void)
{
    return 0x80b0000000ccll;
}

#define typedef_CAVM_EHSM_BIU_CORE1_HST_INTERRUPT_MASK cavm_ehsm_biu_core1_hst_interrupt_mask_t
#define bustype_CAVM_EHSM_BIU_CORE1_HST_INTERRUPT_MASK CSR_TYPE_NCB32b
#define basename_CAVM_EHSM_BIU_CORE1_HST_INTERRUPT_MASK "EHSM_BIU_CORE1_HST_INTERRUPT_MASK"
#define device_bar_CAVM_EHSM_BIU_CORE1_HST_INTERRUPT_MASK 0x0 /* PF_BAR0 */
#define busnum_CAVM_EHSM_BIU_CORE1_HST_INTERRUPT_MASK 0
#define arguments_CAVM_EHSM_BIU_CORE1_HST_INTERRUPT_MASK -1,-1,-1,-1

/**
 * Register (NCB32b) ehsm_biu_core1_hst_interrupt_rst
 *
 * EHSM Biu Core1 Hst Interrupt Rst Register
 * This is host interrupt register for host processor core 1
 */
union cavm_ehsm_biu_core1_hst_interrupt_rst
{
    uint32_t u;
    struct cavm_ehsm_biu_core1_hst_interrupt_rst_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t reserved_18_31        : 14;
        uint32_t cmd_buffer_full_access : 1; /**< [ 17: 17](R/W) When active, this interrupt indicates to the host processor core 1 that an
                                                                 attempt was made to write the command register or the parameter register space
                                                                 when the command buffer of host processor core 1 was full. The write attempt
                                                                 will be blocked. It does not impact the command and parameters that is already
                                                                 queued. The host can rewrite the command or parameter when CMD buffer of host
                                                                 processor core 1 is empty. Host can read CORE1_CMD_BUFFER_FULL field in
                                                                 CMD_FIFO_STATUS to check if CMD buffer of host processor core 1 is available to
                                                                 be written.
                                                                 To reset this field, write a 1 to clear the interrupt. */
        uint32_t hst_addr_range        : 1;  /**< [ 16: 16](R/W) This interrupt indicates that the host attempted to access an address to which
                                                                 it is not allowed access. This interrupt also triggers if a write is made to a
                                                                 read-only register, or a read to a write-only register.
                                                                 To reset this field, write a 1 to clear the interrupt. */
        uint32_t reserved_3_15         : 13;
        uint32_t sysrdyp_timeout       : 1;  /**< [  2:  2](R/W) This field indicates that SYSRDYP timeout is detected on OTP or PUF power switch.
                                                                 If enable_puf field in OTP efuse is 0, only SYSRDYP timeout of OTP power switch
                                                                 can trigger this host interrupt
                                                                 If enable_puf field in OTP efuse is 1, SYSRDYP timeout of either OTP or PUF
                                                                 power switch can trigger this host interrupt. User can read SHADOW_REG_STATUS to
                                                                 determine SYSRDYP timeout is detected on which power switch */
        uint32_t ehsm_mem_fail         : 1;  /**< [  1:  1](R/W) When set, this interrupt indicates that CM3 ROM, CM3 RAM or SPAD memory has uncorrectable error
                                                                 To reset this field, write a 1 to clear the interrupt. */
        uint32_t irom_exe_int          : 1;  /**< [  0:  0](R/W) When set, this interrupt indicates that the secure processor has completed a
                                                                 primitive issued by host processor core 1, or completed execution for boot up
                                                                 To reset this field, write a 1 to clear the interrupt. */
#else /* Word 0 - Little Endian */
        uint32_t irom_exe_int          : 1;  /**< [  0:  0](R/W) When set, this interrupt indicates that the secure processor has completed a
                                                                 primitive issued by host processor core 1, or completed execution for boot up
                                                                 To reset this field, write a 1 to clear the interrupt. */
        uint32_t ehsm_mem_fail         : 1;  /**< [  1:  1](R/W) When set, this interrupt indicates that CM3 ROM, CM3 RAM or SPAD memory has uncorrectable error
                                                                 To reset this field, write a 1 to clear the interrupt. */
        uint32_t sysrdyp_timeout       : 1;  /**< [  2:  2](R/W) This field indicates that SYSRDYP timeout is detected on OTP or PUF power switch.
                                                                 If enable_puf field in OTP efuse is 0, only SYSRDYP timeout of OTP power switch
                                                                 can trigger this host interrupt
                                                                 If enable_puf field in OTP efuse is 1, SYSRDYP timeout of either OTP or PUF
                                                                 power switch can trigger this host interrupt. User can read SHADOW_REG_STATUS to
                                                                 determine SYSRDYP timeout is detected on which power switch */
        uint32_t reserved_3_15         : 13;
        uint32_t hst_addr_range        : 1;  /**< [ 16: 16](R/W) This interrupt indicates that the host attempted to access an address to which
                                                                 it is not allowed access. This interrupt also triggers if a write is made to a
                                                                 read-only register, or a read to a write-only register.
                                                                 To reset this field, write a 1 to clear the interrupt. */
        uint32_t cmd_buffer_full_access : 1; /**< [ 17: 17](R/W) When active, this interrupt indicates to the host processor core 1 that an
                                                                 attempt was made to write the command register or the parameter register space
                                                                 when the command buffer of host processor core 1 was full. The write attempt
                                                                 will be blocked. It does not impact the command and parameters that is already
                                                                 queued. The host can rewrite the command or parameter when CMD buffer of host
                                                                 processor core 1 is empty. Host can read CORE1_CMD_BUFFER_FULL field in
                                                                 CMD_FIFO_STATUS to check if CMD buffer of host processor core 1 is available to
                                                                 be written.
                                                                 To reset this field, write a 1 to clear the interrupt. */
        uint32_t reserved_18_31        : 14;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_ehsm_biu_core1_hst_interrupt_rst_s cn; */
};
typedef union cavm_ehsm_biu_core1_hst_interrupt_rst cavm_ehsm_biu_core1_hst_interrupt_rst_t;

#define CAVM_EHSM_BIU_CORE1_HST_INTERRUPT_RST CAVM_EHSM_BIU_CORE1_HST_INTERRUPT_RST_FUNC()
static inline uint64_t CAVM_EHSM_BIU_CORE1_HST_INTERRUPT_RST_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_EHSM_BIU_CORE1_HST_INTERRUPT_RST_FUNC(void)
{
    return 0x80b0000000c8ll;
}

#define typedef_CAVM_EHSM_BIU_CORE1_HST_INTERRUPT_RST cavm_ehsm_biu_core1_hst_interrupt_rst_t
#define bustype_CAVM_EHSM_BIU_CORE1_HST_INTERRUPT_RST CSR_TYPE_NCB32b
#define basename_CAVM_EHSM_BIU_CORE1_HST_INTERRUPT_RST "EHSM_BIU_CORE1_HST_INTERRUPT_RST"
#define device_bar_CAVM_EHSM_BIU_CORE1_HST_INTERRUPT_RST 0x0 /* PF_BAR0 */
#define busnum_CAVM_EHSM_BIU_CORE1_HST_INTERRUPT_RST 0
#define arguments_CAVM_EHSM_BIU_CORE1_HST_INTERRUPT_RST -1,-1,-1,-1

/**
 * Register (NCB32b) ehsm_biu_core2_cmd
 *
 * EHSM Biu Core2 Cmd Register
 */
union cavm_ehsm_biu_core2_cmd
{
    uint32_t u;
    struct cavm_ehsm_biu_core2_cmd_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t reserved_16_31        : 16;
        uint32_t cmd                   : 16; /**< [ 15:  0](WO) This is the CMD ID value of the primitive command from host processor core 2. */
#else /* Word 0 - Little Endian */
        uint32_t cmd                   : 16; /**< [ 15:  0](WO) This is the CMD ID value of the primitive command from host processor core 2. */
        uint32_t reserved_16_31        : 16;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_ehsm_biu_core2_cmd_s cn; */
};
typedef union cavm_ehsm_biu_core2_cmd cavm_ehsm_biu_core2_cmd_t;

#define CAVM_EHSM_BIU_CORE2_CMD CAVM_EHSM_BIU_CORE2_CMD_FUNC()
static inline uint64_t CAVM_EHSM_BIU_CORE2_CMD_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_EHSM_BIU_CORE2_CMD_FUNC(void)
{
    return 0x80b000000180ll;
}

#define typedef_CAVM_EHSM_BIU_CORE2_CMD cavm_ehsm_biu_core2_cmd_t
#define bustype_CAVM_EHSM_BIU_CORE2_CMD CSR_TYPE_NCB32b
#define basename_CAVM_EHSM_BIU_CORE2_CMD "EHSM_BIU_CORE2_CMD"
#define device_bar_CAVM_EHSM_BIU_CORE2_CMD 0x0 /* PF_BAR0 */
#define busnum_CAVM_EHSM_BIU_CORE2_CMD 0
#define arguments_CAVM_EHSM_BIU_CORE2_CMD -1,-1,-1,-1

/**
 * Register (NCB32b) ehsm_biu_core2_cmd_param0
 *
 * EHSM Biu Core2 Cmd Param0 Register
 * This register contains parameter 0 associated with a EHSM primitive command from
 * host processor core 2. There are a total of 16 spaces for primitive command
 * parameters. When the host processor core 2 wants to send a primitive command to
 * EHSM, it must first write all the associated parameters (if any). Once all the
 * parameters associated with a primitive command have been written, the host processor
 * core 2 can write the associated primitive command to the CORE2_CMD register. Host
 * does not need to write the unused parameters.
 */
union cavm_ehsm_biu_core2_cmd_param0
{
    uint32_t u;
    struct cavm_ehsm_biu_core2_cmd_param0_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t core2_cmd_param0      : 32; /**< [ 31:  0](WO) This register contains parameter 0 associated with a EHSM primitive command from
                                                                 host processor core 2. There are a total of 16 spaces for primitive command
                                                                 parameters. When the host processor core 2 wants to send a primitive command to
                                                                 EHSM, it must first write all the associated parameters (if any). Once all the
                                                                 parameters associated with a primitive command have been written, the host
                                                                 processor core 2 can write the associated primitive command to the CORE2_CMD
                                                                 register. Host does not need to write the unused parameters. */
#else /* Word 0 - Little Endian */
        uint32_t core2_cmd_param0      : 32; /**< [ 31:  0](WO) This register contains parameter 0 associated with a EHSM primitive command from
                                                                 host processor core 2. There are a total of 16 spaces for primitive command
                                                                 parameters. When the host processor core 2 wants to send a primitive command to
                                                                 EHSM, it must first write all the associated parameters (if any). Once all the
                                                                 parameters associated with a primitive command have been written, the host
                                                                 processor core 2 can write the associated primitive command to the CORE2_CMD
                                                                 register. Host does not need to write the unused parameters. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_ehsm_biu_core2_cmd_param0_s cn; */
};
typedef union cavm_ehsm_biu_core2_cmd_param0 cavm_ehsm_biu_core2_cmd_param0_t;

#define CAVM_EHSM_BIU_CORE2_CMD_PARAM0 CAVM_EHSM_BIU_CORE2_CMD_PARAM0_FUNC()
static inline uint64_t CAVM_EHSM_BIU_CORE2_CMD_PARAM0_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_EHSM_BIU_CORE2_CMD_PARAM0_FUNC(void)
{
    return 0x80b000000140ll;
}

#define typedef_CAVM_EHSM_BIU_CORE2_CMD_PARAM0 cavm_ehsm_biu_core2_cmd_param0_t
#define bustype_CAVM_EHSM_BIU_CORE2_CMD_PARAM0 CSR_TYPE_NCB32b
#define basename_CAVM_EHSM_BIU_CORE2_CMD_PARAM0 "EHSM_BIU_CORE2_CMD_PARAM0"
#define device_bar_CAVM_EHSM_BIU_CORE2_CMD_PARAM0 0x0 /* PF_BAR0 */
#define busnum_CAVM_EHSM_BIU_CORE2_CMD_PARAM0 0
#define arguments_CAVM_EHSM_BIU_CORE2_CMD_PARAM0 -1,-1,-1,-1

/**
 * Register (NCB32b) ehsm_biu_core2_cmd_param1
 *
 * EHSM Biu Core2 Cmd Param1 Register
 * This register contains parameter 1 associated with a EHSM primitive command from
 * host processor core 2.
 */
union cavm_ehsm_biu_core2_cmd_param1
{
    uint32_t u;
    struct cavm_ehsm_biu_core2_cmd_param1_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t core2_cmd_param1      : 32; /**< [ 31:  0](WO) This register contains parameter 1 associated with a EHSM primitive command from
                                                                 host processor core 2. */
#else /* Word 0 - Little Endian */
        uint32_t core2_cmd_param1      : 32; /**< [ 31:  0](WO) This register contains parameter 1 associated with a EHSM primitive command from
                                                                 host processor core 2. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_ehsm_biu_core2_cmd_param1_s cn; */
};
typedef union cavm_ehsm_biu_core2_cmd_param1 cavm_ehsm_biu_core2_cmd_param1_t;

#define CAVM_EHSM_BIU_CORE2_CMD_PARAM1 CAVM_EHSM_BIU_CORE2_CMD_PARAM1_FUNC()
static inline uint64_t CAVM_EHSM_BIU_CORE2_CMD_PARAM1_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_EHSM_BIU_CORE2_CMD_PARAM1_FUNC(void)
{
    return 0x80b000000144ll;
}

#define typedef_CAVM_EHSM_BIU_CORE2_CMD_PARAM1 cavm_ehsm_biu_core2_cmd_param1_t
#define bustype_CAVM_EHSM_BIU_CORE2_CMD_PARAM1 CSR_TYPE_NCB32b
#define basename_CAVM_EHSM_BIU_CORE2_CMD_PARAM1 "EHSM_BIU_CORE2_CMD_PARAM1"
#define device_bar_CAVM_EHSM_BIU_CORE2_CMD_PARAM1 0x0 /* PF_BAR0 */
#define busnum_CAVM_EHSM_BIU_CORE2_CMD_PARAM1 0
#define arguments_CAVM_EHSM_BIU_CORE2_CMD_PARAM1 -1,-1,-1,-1

/**
 * Register (NCB32b) ehsm_biu_core2_cmd_param10
 *
 * EHSM Biu Core2 Cmd Param10 Register
 * This register contains parameter 10 associated with a EHSM primitive command from
 * host processor core 2.
 */
union cavm_ehsm_biu_core2_cmd_param10
{
    uint32_t u;
    struct cavm_ehsm_biu_core2_cmd_param10_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t core2_cmd_param10     : 32; /**< [ 31:  0](WO) This register contains parameter 10 associated with a EHSM primitive command
                                                                 from host processor core 2. */
#else /* Word 0 - Little Endian */
        uint32_t core2_cmd_param10     : 32; /**< [ 31:  0](WO) This register contains parameter 10 associated with a EHSM primitive command
                                                                 from host processor core 2. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_ehsm_biu_core2_cmd_param10_s cn; */
};
typedef union cavm_ehsm_biu_core2_cmd_param10 cavm_ehsm_biu_core2_cmd_param10_t;

#define CAVM_EHSM_BIU_CORE2_CMD_PARAM10 CAVM_EHSM_BIU_CORE2_CMD_PARAM10_FUNC()
static inline uint64_t CAVM_EHSM_BIU_CORE2_CMD_PARAM10_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_EHSM_BIU_CORE2_CMD_PARAM10_FUNC(void)
{
    return 0x80b000000168ll;
}

#define typedef_CAVM_EHSM_BIU_CORE2_CMD_PARAM10 cavm_ehsm_biu_core2_cmd_param10_t
#define bustype_CAVM_EHSM_BIU_CORE2_CMD_PARAM10 CSR_TYPE_NCB32b
#define basename_CAVM_EHSM_BIU_CORE2_CMD_PARAM10 "EHSM_BIU_CORE2_CMD_PARAM10"
#define device_bar_CAVM_EHSM_BIU_CORE2_CMD_PARAM10 0x0 /* PF_BAR0 */
#define busnum_CAVM_EHSM_BIU_CORE2_CMD_PARAM10 0
#define arguments_CAVM_EHSM_BIU_CORE2_CMD_PARAM10 -1,-1,-1,-1

/**
 * Register (NCB32b) ehsm_biu_core2_cmd_param11
 *
 * EHSM Biu Core2 Cmd Param11 Register
 * This register contains parameter 11 associated with a EHSM primitive command from
 * host processor core 2.
 */
union cavm_ehsm_biu_core2_cmd_param11
{
    uint32_t u;
    struct cavm_ehsm_biu_core2_cmd_param11_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t core2_cmd_param11     : 32; /**< [ 31:  0](WO) This register contains parameter 11 associated with a EHSM primitive command
                                                                 from host processor core 2. */
#else /* Word 0 - Little Endian */
        uint32_t core2_cmd_param11     : 32; /**< [ 31:  0](WO) This register contains parameter 11 associated with a EHSM primitive command
                                                                 from host processor core 2. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_ehsm_biu_core2_cmd_param11_s cn; */
};
typedef union cavm_ehsm_biu_core2_cmd_param11 cavm_ehsm_biu_core2_cmd_param11_t;

#define CAVM_EHSM_BIU_CORE2_CMD_PARAM11 CAVM_EHSM_BIU_CORE2_CMD_PARAM11_FUNC()
static inline uint64_t CAVM_EHSM_BIU_CORE2_CMD_PARAM11_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_EHSM_BIU_CORE2_CMD_PARAM11_FUNC(void)
{
    return 0x80b00000016cll;
}

#define typedef_CAVM_EHSM_BIU_CORE2_CMD_PARAM11 cavm_ehsm_biu_core2_cmd_param11_t
#define bustype_CAVM_EHSM_BIU_CORE2_CMD_PARAM11 CSR_TYPE_NCB32b
#define basename_CAVM_EHSM_BIU_CORE2_CMD_PARAM11 "EHSM_BIU_CORE2_CMD_PARAM11"
#define device_bar_CAVM_EHSM_BIU_CORE2_CMD_PARAM11 0x0 /* PF_BAR0 */
#define busnum_CAVM_EHSM_BIU_CORE2_CMD_PARAM11 0
#define arguments_CAVM_EHSM_BIU_CORE2_CMD_PARAM11 -1,-1,-1,-1

/**
 * Register (NCB32b) ehsm_biu_core2_cmd_param12
 *
 * EHSM Biu Core2 Cmd Param12 Register
 * This register contains parameter 12 associated with a EHSM primitive command from
 * host processor core 2.
 */
union cavm_ehsm_biu_core2_cmd_param12
{
    uint32_t u;
    struct cavm_ehsm_biu_core2_cmd_param12_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t core2_cmd_param12     : 32; /**< [ 31:  0](WO) This register contains parameter 12 associated with a EHSM primitive command
                                                                 from host processor core 2. */
#else /* Word 0 - Little Endian */
        uint32_t core2_cmd_param12     : 32; /**< [ 31:  0](WO) This register contains parameter 12 associated with a EHSM primitive command
                                                                 from host processor core 2. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_ehsm_biu_core2_cmd_param12_s cn; */
};
typedef union cavm_ehsm_biu_core2_cmd_param12 cavm_ehsm_biu_core2_cmd_param12_t;

#define CAVM_EHSM_BIU_CORE2_CMD_PARAM12 CAVM_EHSM_BIU_CORE2_CMD_PARAM12_FUNC()
static inline uint64_t CAVM_EHSM_BIU_CORE2_CMD_PARAM12_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_EHSM_BIU_CORE2_CMD_PARAM12_FUNC(void)
{
    return 0x80b000000170ll;
}

#define typedef_CAVM_EHSM_BIU_CORE2_CMD_PARAM12 cavm_ehsm_biu_core2_cmd_param12_t
#define bustype_CAVM_EHSM_BIU_CORE2_CMD_PARAM12 CSR_TYPE_NCB32b
#define basename_CAVM_EHSM_BIU_CORE2_CMD_PARAM12 "EHSM_BIU_CORE2_CMD_PARAM12"
#define device_bar_CAVM_EHSM_BIU_CORE2_CMD_PARAM12 0x0 /* PF_BAR0 */
#define busnum_CAVM_EHSM_BIU_CORE2_CMD_PARAM12 0
#define arguments_CAVM_EHSM_BIU_CORE2_CMD_PARAM12 -1,-1,-1,-1

/**
 * Register (NCB32b) ehsm_biu_core2_cmd_param13
 *
 * EHSM Biu Core2 Cmd Param13 Register
 * This register contains parameter 13 associated with a EHSM primitive command from
 * host processor core 2.
 */
union cavm_ehsm_biu_core2_cmd_param13
{
    uint32_t u;
    struct cavm_ehsm_biu_core2_cmd_param13_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t core2_cmd_param13     : 32; /**< [ 31:  0](WO) This register contains parameter 13 associated with a EHSM primitive command
                                                                 from host processor core 2. */
#else /* Word 0 - Little Endian */
        uint32_t core2_cmd_param13     : 32; /**< [ 31:  0](WO) This register contains parameter 13 associated with a EHSM primitive command
                                                                 from host processor core 2. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_ehsm_biu_core2_cmd_param13_s cn; */
};
typedef union cavm_ehsm_biu_core2_cmd_param13 cavm_ehsm_biu_core2_cmd_param13_t;

#define CAVM_EHSM_BIU_CORE2_CMD_PARAM13 CAVM_EHSM_BIU_CORE2_CMD_PARAM13_FUNC()
static inline uint64_t CAVM_EHSM_BIU_CORE2_CMD_PARAM13_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_EHSM_BIU_CORE2_CMD_PARAM13_FUNC(void)
{
    return 0x80b000000174ll;
}

#define typedef_CAVM_EHSM_BIU_CORE2_CMD_PARAM13 cavm_ehsm_biu_core2_cmd_param13_t
#define bustype_CAVM_EHSM_BIU_CORE2_CMD_PARAM13 CSR_TYPE_NCB32b
#define basename_CAVM_EHSM_BIU_CORE2_CMD_PARAM13 "EHSM_BIU_CORE2_CMD_PARAM13"
#define device_bar_CAVM_EHSM_BIU_CORE2_CMD_PARAM13 0x0 /* PF_BAR0 */
#define busnum_CAVM_EHSM_BIU_CORE2_CMD_PARAM13 0
#define arguments_CAVM_EHSM_BIU_CORE2_CMD_PARAM13 -1,-1,-1,-1

/**
 * Register (NCB32b) ehsm_biu_core2_cmd_param14
 *
 * EHSM Biu Core2 Cmd Param14 Register
 * This register contains parameter 14 associated with a EHSM primitive command from
 * host processor core 2.
 */
union cavm_ehsm_biu_core2_cmd_param14
{
    uint32_t u;
    struct cavm_ehsm_biu_core2_cmd_param14_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t core2_cmd_param14     : 32; /**< [ 31:  0](WO) This register contains parameter 14 associated with a EHSM primitive command
                                                                 from host processor core 2. */
#else /* Word 0 - Little Endian */
        uint32_t core2_cmd_param14     : 32; /**< [ 31:  0](WO) This register contains parameter 14 associated with a EHSM primitive command
                                                                 from host processor core 2. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_ehsm_biu_core2_cmd_param14_s cn; */
};
typedef union cavm_ehsm_biu_core2_cmd_param14 cavm_ehsm_biu_core2_cmd_param14_t;

#define CAVM_EHSM_BIU_CORE2_CMD_PARAM14 CAVM_EHSM_BIU_CORE2_CMD_PARAM14_FUNC()
static inline uint64_t CAVM_EHSM_BIU_CORE2_CMD_PARAM14_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_EHSM_BIU_CORE2_CMD_PARAM14_FUNC(void)
{
    return 0x80b000000178ll;
}

#define typedef_CAVM_EHSM_BIU_CORE2_CMD_PARAM14 cavm_ehsm_biu_core2_cmd_param14_t
#define bustype_CAVM_EHSM_BIU_CORE2_CMD_PARAM14 CSR_TYPE_NCB32b
#define basename_CAVM_EHSM_BIU_CORE2_CMD_PARAM14 "EHSM_BIU_CORE2_CMD_PARAM14"
#define device_bar_CAVM_EHSM_BIU_CORE2_CMD_PARAM14 0x0 /* PF_BAR0 */
#define busnum_CAVM_EHSM_BIU_CORE2_CMD_PARAM14 0
#define arguments_CAVM_EHSM_BIU_CORE2_CMD_PARAM14 -1,-1,-1,-1

/**
 * Register (NCB32b) ehsm_biu_core2_cmd_param15
 *
 * EHSM Biu Core2 Cmd Param15 Register
 * This register contains parameter 15 associated with a EHSM primitive command from
 * host processor core 2.
 */
union cavm_ehsm_biu_core2_cmd_param15
{
    uint32_t u;
    struct cavm_ehsm_biu_core2_cmd_param15_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t core2_cmd_param15     : 32; /**< [ 31:  0](WO) This register contains parameter 15 associated with a EHSM primitive command
                                                                 from host processor core 2. */
#else /* Word 0 - Little Endian */
        uint32_t core2_cmd_param15     : 32; /**< [ 31:  0](WO) This register contains parameter 15 associated with a EHSM primitive command
                                                                 from host processor core 2. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_ehsm_biu_core2_cmd_param15_s cn; */
};
typedef union cavm_ehsm_biu_core2_cmd_param15 cavm_ehsm_biu_core2_cmd_param15_t;

#define CAVM_EHSM_BIU_CORE2_CMD_PARAM15 CAVM_EHSM_BIU_CORE2_CMD_PARAM15_FUNC()
static inline uint64_t CAVM_EHSM_BIU_CORE2_CMD_PARAM15_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_EHSM_BIU_CORE2_CMD_PARAM15_FUNC(void)
{
    return 0x80b00000017cll;
}

#define typedef_CAVM_EHSM_BIU_CORE2_CMD_PARAM15 cavm_ehsm_biu_core2_cmd_param15_t
#define bustype_CAVM_EHSM_BIU_CORE2_CMD_PARAM15 CSR_TYPE_NCB32b
#define basename_CAVM_EHSM_BIU_CORE2_CMD_PARAM15 "EHSM_BIU_CORE2_CMD_PARAM15"
#define device_bar_CAVM_EHSM_BIU_CORE2_CMD_PARAM15 0x0 /* PF_BAR0 */
#define busnum_CAVM_EHSM_BIU_CORE2_CMD_PARAM15 0
#define arguments_CAVM_EHSM_BIU_CORE2_CMD_PARAM15 -1,-1,-1,-1

/**
 * Register (NCB32b) ehsm_biu_core2_cmd_param2
 *
 * EHSM Biu Core2 Cmd Param2 Register
 * This register contains parameter 2 associated with a EHSM primitive command from
 * host processor core 2.
 */
union cavm_ehsm_biu_core2_cmd_param2
{
    uint32_t u;
    struct cavm_ehsm_biu_core2_cmd_param2_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t core2_cmd_param2      : 32; /**< [ 31:  0](WO) This register contains parameter 2 associated with a EHSM primitive command from
                                                                 host processor core 2. */
#else /* Word 0 - Little Endian */
        uint32_t core2_cmd_param2      : 32; /**< [ 31:  0](WO) This register contains parameter 2 associated with a EHSM primitive command from
                                                                 host processor core 2. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_ehsm_biu_core2_cmd_param2_s cn; */
};
typedef union cavm_ehsm_biu_core2_cmd_param2 cavm_ehsm_biu_core2_cmd_param2_t;

#define CAVM_EHSM_BIU_CORE2_CMD_PARAM2 CAVM_EHSM_BIU_CORE2_CMD_PARAM2_FUNC()
static inline uint64_t CAVM_EHSM_BIU_CORE2_CMD_PARAM2_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_EHSM_BIU_CORE2_CMD_PARAM2_FUNC(void)
{
    return 0x80b000000148ll;
}

#define typedef_CAVM_EHSM_BIU_CORE2_CMD_PARAM2 cavm_ehsm_biu_core2_cmd_param2_t
#define bustype_CAVM_EHSM_BIU_CORE2_CMD_PARAM2 CSR_TYPE_NCB32b
#define basename_CAVM_EHSM_BIU_CORE2_CMD_PARAM2 "EHSM_BIU_CORE2_CMD_PARAM2"
#define device_bar_CAVM_EHSM_BIU_CORE2_CMD_PARAM2 0x0 /* PF_BAR0 */
#define busnum_CAVM_EHSM_BIU_CORE2_CMD_PARAM2 0
#define arguments_CAVM_EHSM_BIU_CORE2_CMD_PARAM2 -1,-1,-1,-1

/**
 * Register (NCB32b) ehsm_biu_core2_cmd_param3
 *
 * EHSM Biu Core2 Cmd Param3 Register
 * This register contains parameter 3 associated with a EHSM primitive command from
 * host processor core 2.
 */
union cavm_ehsm_biu_core2_cmd_param3
{
    uint32_t u;
    struct cavm_ehsm_biu_core2_cmd_param3_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t core2_cmd_param3      : 32; /**< [ 31:  0](WO) This register contains parameter 3 associated with a EHSM primitive command from
                                                                 host processor core 2. */
#else /* Word 0 - Little Endian */
        uint32_t core2_cmd_param3      : 32; /**< [ 31:  0](WO) This register contains parameter 3 associated with a EHSM primitive command from
                                                                 host processor core 2. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_ehsm_biu_core2_cmd_param3_s cn; */
};
typedef union cavm_ehsm_biu_core2_cmd_param3 cavm_ehsm_biu_core2_cmd_param3_t;

#define CAVM_EHSM_BIU_CORE2_CMD_PARAM3 CAVM_EHSM_BIU_CORE2_CMD_PARAM3_FUNC()
static inline uint64_t CAVM_EHSM_BIU_CORE2_CMD_PARAM3_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_EHSM_BIU_CORE2_CMD_PARAM3_FUNC(void)
{
    return 0x80b00000014cll;
}

#define typedef_CAVM_EHSM_BIU_CORE2_CMD_PARAM3 cavm_ehsm_biu_core2_cmd_param3_t
#define bustype_CAVM_EHSM_BIU_CORE2_CMD_PARAM3 CSR_TYPE_NCB32b
#define basename_CAVM_EHSM_BIU_CORE2_CMD_PARAM3 "EHSM_BIU_CORE2_CMD_PARAM3"
#define device_bar_CAVM_EHSM_BIU_CORE2_CMD_PARAM3 0x0 /* PF_BAR0 */
#define busnum_CAVM_EHSM_BIU_CORE2_CMD_PARAM3 0
#define arguments_CAVM_EHSM_BIU_CORE2_CMD_PARAM3 -1,-1,-1,-1

/**
 * Register (NCB32b) ehsm_biu_core2_cmd_param4
 *
 * EHSM Biu Core2 Cmd Param4 Register
 * This register contains parameter 4 associated with a EHSM primitive command from
 * host processor core 2.
 */
union cavm_ehsm_biu_core2_cmd_param4
{
    uint32_t u;
    struct cavm_ehsm_biu_core2_cmd_param4_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t core2_cmd_param4      : 32; /**< [ 31:  0](WO) This register contains parameter 4 associated with a EHSM primitive command from
                                                                 host processor core 2. */
#else /* Word 0 - Little Endian */
        uint32_t core2_cmd_param4      : 32; /**< [ 31:  0](WO) This register contains parameter 4 associated with a EHSM primitive command from
                                                                 host processor core 2. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_ehsm_biu_core2_cmd_param4_s cn; */
};
typedef union cavm_ehsm_biu_core2_cmd_param4 cavm_ehsm_biu_core2_cmd_param4_t;

#define CAVM_EHSM_BIU_CORE2_CMD_PARAM4 CAVM_EHSM_BIU_CORE2_CMD_PARAM4_FUNC()
static inline uint64_t CAVM_EHSM_BIU_CORE2_CMD_PARAM4_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_EHSM_BIU_CORE2_CMD_PARAM4_FUNC(void)
{
    return 0x80b000000150ll;
}

#define typedef_CAVM_EHSM_BIU_CORE2_CMD_PARAM4 cavm_ehsm_biu_core2_cmd_param4_t
#define bustype_CAVM_EHSM_BIU_CORE2_CMD_PARAM4 CSR_TYPE_NCB32b
#define basename_CAVM_EHSM_BIU_CORE2_CMD_PARAM4 "EHSM_BIU_CORE2_CMD_PARAM4"
#define device_bar_CAVM_EHSM_BIU_CORE2_CMD_PARAM4 0x0 /* PF_BAR0 */
#define busnum_CAVM_EHSM_BIU_CORE2_CMD_PARAM4 0
#define arguments_CAVM_EHSM_BIU_CORE2_CMD_PARAM4 -1,-1,-1,-1

/**
 * Register (NCB32b) ehsm_biu_core2_cmd_param5
 *
 * EHSM Biu Core2 Cmd Param5 Register
 * This register contains parameter 5 associated with a EHSM primitive command from
 * host processor core 2.
 */
union cavm_ehsm_biu_core2_cmd_param5
{
    uint32_t u;
    struct cavm_ehsm_biu_core2_cmd_param5_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t core2_cmd_param5      : 32; /**< [ 31:  0](WO) This register contains parameter 5 associated with a EHSM primitive command from
                                                                 host processor core 2. */
#else /* Word 0 - Little Endian */
        uint32_t core2_cmd_param5      : 32; /**< [ 31:  0](WO) This register contains parameter 5 associated with a EHSM primitive command from
                                                                 host processor core 2. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_ehsm_biu_core2_cmd_param5_s cn; */
};
typedef union cavm_ehsm_biu_core2_cmd_param5 cavm_ehsm_biu_core2_cmd_param5_t;

#define CAVM_EHSM_BIU_CORE2_CMD_PARAM5 CAVM_EHSM_BIU_CORE2_CMD_PARAM5_FUNC()
static inline uint64_t CAVM_EHSM_BIU_CORE2_CMD_PARAM5_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_EHSM_BIU_CORE2_CMD_PARAM5_FUNC(void)
{
    return 0x80b000000154ll;
}

#define typedef_CAVM_EHSM_BIU_CORE2_CMD_PARAM5 cavm_ehsm_biu_core2_cmd_param5_t
#define bustype_CAVM_EHSM_BIU_CORE2_CMD_PARAM5 CSR_TYPE_NCB32b
#define basename_CAVM_EHSM_BIU_CORE2_CMD_PARAM5 "EHSM_BIU_CORE2_CMD_PARAM5"
#define device_bar_CAVM_EHSM_BIU_CORE2_CMD_PARAM5 0x0 /* PF_BAR0 */
#define busnum_CAVM_EHSM_BIU_CORE2_CMD_PARAM5 0
#define arguments_CAVM_EHSM_BIU_CORE2_CMD_PARAM5 -1,-1,-1,-1

/**
 * Register (NCB32b) ehsm_biu_core2_cmd_param6
 *
 * EHSM Biu Core2 Cmd Param6 Register
 * This register contains parameter 6 associated with a EHSM primitive command from
 * host processor core 2.
 */
union cavm_ehsm_biu_core2_cmd_param6
{
    uint32_t u;
    struct cavm_ehsm_biu_core2_cmd_param6_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t core2_cmd_param6      : 32; /**< [ 31:  0](WO) This register contains parameter 6 associated with a EHSM primitive command from
                                                                 host processor core 2. */
#else /* Word 0 - Little Endian */
        uint32_t core2_cmd_param6      : 32; /**< [ 31:  0](WO) This register contains parameter 6 associated with a EHSM primitive command from
                                                                 host processor core 2. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_ehsm_biu_core2_cmd_param6_s cn; */
};
typedef union cavm_ehsm_biu_core2_cmd_param6 cavm_ehsm_biu_core2_cmd_param6_t;

#define CAVM_EHSM_BIU_CORE2_CMD_PARAM6 CAVM_EHSM_BIU_CORE2_CMD_PARAM6_FUNC()
static inline uint64_t CAVM_EHSM_BIU_CORE2_CMD_PARAM6_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_EHSM_BIU_CORE2_CMD_PARAM6_FUNC(void)
{
    return 0x80b000000158ll;
}

#define typedef_CAVM_EHSM_BIU_CORE2_CMD_PARAM6 cavm_ehsm_biu_core2_cmd_param6_t
#define bustype_CAVM_EHSM_BIU_CORE2_CMD_PARAM6 CSR_TYPE_NCB32b
#define basename_CAVM_EHSM_BIU_CORE2_CMD_PARAM6 "EHSM_BIU_CORE2_CMD_PARAM6"
#define device_bar_CAVM_EHSM_BIU_CORE2_CMD_PARAM6 0x0 /* PF_BAR0 */
#define busnum_CAVM_EHSM_BIU_CORE2_CMD_PARAM6 0
#define arguments_CAVM_EHSM_BIU_CORE2_CMD_PARAM6 -1,-1,-1,-1

/**
 * Register (NCB32b) ehsm_biu_core2_cmd_param7
 *
 * EHSM Biu Core2 Cmd Param7 Register
 * This register contains parameter 7 associated with a EHSM primitive command from
 * host processor core 2.
 */
union cavm_ehsm_biu_core2_cmd_param7
{
    uint32_t u;
    struct cavm_ehsm_biu_core2_cmd_param7_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t core2_cmd_param7      : 32; /**< [ 31:  0](WO) This register contains parameter 7 associated with a EHSM primitive command from
                                                                 host processor core 2. */
#else /* Word 0 - Little Endian */
        uint32_t core2_cmd_param7      : 32; /**< [ 31:  0](WO) This register contains parameter 7 associated with a EHSM primitive command from
                                                                 host processor core 2. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_ehsm_biu_core2_cmd_param7_s cn; */
};
typedef union cavm_ehsm_biu_core2_cmd_param7 cavm_ehsm_biu_core2_cmd_param7_t;

#define CAVM_EHSM_BIU_CORE2_CMD_PARAM7 CAVM_EHSM_BIU_CORE2_CMD_PARAM7_FUNC()
static inline uint64_t CAVM_EHSM_BIU_CORE2_CMD_PARAM7_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_EHSM_BIU_CORE2_CMD_PARAM7_FUNC(void)
{
    return 0x80b00000015cll;
}

#define typedef_CAVM_EHSM_BIU_CORE2_CMD_PARAM7 cavm_ehsm_biu_core2_cmd_param7_t
#define bustype_CAVM_EHSM_BIU_CORE2_CMD_PARAM7 CSR_TYPE_NCB32b
#define basename_CAVM_EHSM_BIU_CORE2_CMD_PARAM7 "EHSM_BIU_CORE2_CMD_PARAM7"
#define device_bar_CAVM_EHSM_BIU_CORE2_CMD_PARAM7 0x0 /* PF_BAR0 */
#define busnum_CAVM_EHSM_BIU_CORE2_CMD_PARAM7 0
#define arguments_CAVM_EHSM_BIU_CORE2_CMD_PARAM7 -1,-1,-1,-1

/**
 * Register (NCB32b) ehsm_biu_core2_cmd_param8
 *
 * EHSM Biu Core2 Cmd Param8 Register
 * This register contains parameter 8 associated with a EHSM primitive command from
 * host processor core 2.
 */
union cavm_ehsm_biu_core2_cmd_param8
{
    uint32_t u;
    struct cavm_ehsm_biu_core2_cmd_param8_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t core2_cmd_param8      : 32; /**< [ 31:  0](WO) This register contains parameter 8 associated with a EHSM primitive command from
                                                                 host processor core 2. */
#else /* Word 0 - Little Endian */
        uint32_t core2_cmd_param8      : 32; /**< [ 31:  0](WO) This register contains parameter 8 associated with a EHSM primitive command from
                                                                 host processor core 2. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_ehsm_biu_core2_cmd_param8_s cn; */
};
typedef union cavm_ehsm_biu_core2_cmd_param8 cavm_ehsm_biu_core2_cmd_param8_t;

#define CAVM_EHSM_BIU_CORE2_CMD_PARAM8 CAVM_EHSM_BIU_CORE2_CMD_PARAM8_FUNC()
static inline uint64_t CAVM_EHSM_BIU_CORE2_CMD_PARAM8_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_EHSM_BIU_CORE2_CMD_PARAM8_FUNC(void)
{
    return 0x80b000000160ll;
}

#define typedef_CAVM_EHSM_BIU_CORE2_CMD_PARAM8 cavm_ehsm_biu_core2_cmd_param8_t
#define bustype_CAVM_EHSM_BIU_CORE2_CMD_PARAM8 CSR_TYPE_NCB32b
#define basename_CAVM_EHSM_BIU_CORE2_CMD_PARAM8 "EHSM_BIU_CORE2_CMD_PARAM8"
#define device_bar_CAVM_EHSM_BIU_CORE2_CMD_PARAM8 0x0 /* PF_BAR0 */
#define busnum_CAVM_EHSM_BIU_CORE2_CMD_PARAM8 0
#define arguments_CAVM_EHSM_BIU_CORE2_CMD_PARAM8 -1,-1,-1,-1

/**
 * Register (NCB32b) ehsm_biu_core2_cmd_param9
 *
 * EHSM Biu Core2 Cmd Param9 Register
 * This register contains parameter 9 associated with a EHSM primitive command from
 * host processor core 2.
 */
union cavm_ehsm_biu_core2_cmd_param9
{
    uint32_t u;
    struct cavm_ehsm_biu_core2_cmd_param9_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t core2_cmd_param9      : 32; /**< [ 31:  0](WO) This register contains parameter 9 associated with a EHSM primitive command from
                                                                 host processor core 2. */
#else /* Word 0 - Little Endian */
        uint32_t core2_cmd_param9      : 32; /**< [ 31:  0](WO) This register contains parameter 9 associated with a EHSM primitive command from
                                                                 host processor core 2. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_ehsm_biu_core2_cmd_param9_s cn; */
};
typedef union cavm_ehsm_biu_core2_cmd_param9 cavm_ehsm_biu_core2_cmd_param9_t;

#define CAVM_EHSM_BIU_CORE2_CMD_PARAM9 CAVM_EHSM_BIU_CORE2_CMD_PARAM9_FUNC()
static inline uint64_t CAVM_EHSM_BIU_CORE2_CMD_PARAM9_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_EHSM_BIU_CORE2_CMD_PARAM9_FUNC(void)
{
    return 0x80b000000164ll;
}

#define typedef_CAVM_EHSM_BIU_CORE2_CMD_PARAM9 cavm_ehsm_biu_core2_cmd_param9_t
#define bustype_CAVM_EHSM_BIU_CORE2_CMD_PARAM9 CSR_TYPE_NCB32b
#define basename_CAVM_EHSM_BIU_CORE2_CMD_PARAM9 "EHSM_BIU_CORE2_CMD_PARAM9"
#define device_bar_CAVM_EHSM_BIU_CORE2_CMD_PARAM9 0x0 /* PF_BAR0 */
#define busnum_CAVM_EHSM_BIU_CORE2_CMD_PARAM9 0
#define arguments_CAVM_EHSM_BIU_CORE2_CMD_PARAM9 -1,-1,-1,-1

/**
 * Register (NCB32b) ehsm_biu_core2_cmd_ret_status
 *
 * EHSM Biu Core2 Cmd Ret Status Register
 * This register contains return status associated with a EHSM primitive command from
 * host processor core 2.
 * If it is 0, it indicates command execution success. If it is non 0, it indicates
 * command execution failure and the value is the error code.
 */
union cavm_ehsm_biu_core2_cmd_ret_status
{
    uint32_t u;
    struct cavm_ehsm_biu_core2_cmd_ret_status_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t core2_cmd_ret_status  : 32; /**< [ 31:  0](RO) This register contains return status associated with a EHSM primitive command
                                                                 from host processor core 2.
                                                                 If it is 0, it indicates command execution success. If it is non 0, it indicates
                                                                 command execution failure and the value is the error code. */
#else /* Word 0 - Little Endian */
        uint32_t core2_cmd_ret_status  : 32; /**< [ 31:  0](RO) This register contains return status associated with a EHSM primitive command
                                                                 from host processor core 2.
                                                                 If it is 0, it indicates command execution success. If it is non 0, it indicates
                                                                 command execution failure and the value is the error code. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_ehsm_biu_core2_cmd_ret_status_s cn; */
};
typedef union cavm_ehsm_biu_core2_cmd_ret_status cavm_ehsm_biu_core2_cmd_ret_status_t;

#define CAVM_EHSM_BIU_CORE2_CMD_RET_STATUS CAVM_EHSM_BIU_CORE2_CMD_RET_STATUS_FUNC()
static inline uint64_t CAVM_EHSM_BIU_CORE2_CMD_RET_STATUS_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_EHSM_BIU_CORE2_CMD_RET_STATUS_FUNC(void)
{
    return 0x80b0000001a0ll;
}

#define typedef_CAVM_EHSM_BIU_CORE2_CMD_RET_STATUS cavm_ehsm_biu_core2_cmd_ret_status_t
#define bustype_CAVM_EHSM_BIU_CORE2_CMD_RET_STATUS CSR_TYPE_NCB32b
#define basename_CAVM_EHSM_BIU_CORE2_CMD_RET_STATUS "EHSM_BIU_CORE2_CMD_RET_STATUS"
#define device_bar_CAVM_EHSM_BIU_CORE2_CMD_RET_STATUS 0x0 /* PF_BAR0 */
#define busnum_CAVM_EHSM_BIU_CORE2_CMD_RET_STATUS 0
#define arguments_CAVM_EHSM_BIU_CORE2_CMD_RET_STATUS -1,-1,-1,-1

/**
 * Register (NCB32b) ehsm_biu_core2_cmd_status0
 *
 * EHSM Biu Core2 Cmd Status0 Register
 * This register contains status 0 associated with a EHSM primitive command from host
 * processor core 2.
 */
union cavm_ehsm_biu_core2_cmd_status0
{
    uint32_t u;
    struct cavm_ehsm_biu_core2_cmd_status0_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t core2_cmd_status0     : 32; /**< [ 31:  0](RO) This register contains status 0 associated with a EHSM primitive command from
                                                                 host processor core 2. */
#else /* Word 0 - Little Endian */
        uint32_t core2_cmd_status0     : 32; /**< [ 31:  0](RO) This register contains status 0 associated with a EHSM primitive command from
                                                                 host processor core 2. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_ehsm_biu_core2_cmd_status0_s cn; */
};
typedef union cavm_ehsm_biu_core2_cmd_status0 cavm_ehsm_biu_core2_cmd_status0_t;

#define CAVM_EHSM_BIU_CORE2_CMD_STATUS0 CAVM_EHSM_BIU_CORE2_CMD_STATUS0_FUNC()
static inline uint64_t CAVM_EHSM_BIU_CORE2_CMD_STATUS0_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_EHSM_BIU_CORE2_CMD_STATUS0_FUNC(void)
{
    return 0x80b0000001a4ll;
}

#define typedef_CAVM_EHSM_BIU_CORE2_CMD_STATUS0 cavm_ehsm_biu_core2_cmd_status0_t
#define bustype_CAVM_EHSM_BIU_CORE2_CMD_STATUS0 CSR_TYPE_NCB32b
#define basename_CAVM_EHSM_BIU_CORE2_CMD_STATUS0 "EHSM_BIU_CORE2_CMD_STATUS0"
#define device_bar_CAVM_EHSM_BIU_CORE2_CMD_STATUS0 0x0 /* PF_BAR0 */
#define busnum_CAVM_EHSM_BIU_CORE2_CMD_STATUS0 0
#define arguments_CAVM_EHSM_BIU_CORE2_CMD_STATUS0 -1,-1,-1,-1

/**
 * Register (NCB32b) ehsm_biu_core2_cmd_status1
 *
 * EHSM Biu Core2 Cmd Status1 Register
 * This register contains status 1 associated with a EHSM primitive command from host
 * processor core 2.
 */
union cavm_ehsm_biu_core2_cmd_status1
{
    uint32_t u;
    struct cavm_ehsm_biu_core2_cmd_status1_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t core2_cmd_status1     : 32; /**< [ 31:  0](RO) This register contains status 1 associated with a EHSM primitive command from
                                                                 host processor core 2. */
#else /* Word 0 - Little Endian */
        uint32_t core2_cmd_status1     : 32; /**< [ 31:  0](RO) This register contains status 1 associated with a EHSM primitive command from
                                                                 host processor core 2. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_ehsm_biu_core2_cmd_status1_s cn; */
};
typedef union cavm_ehsm_biu_core2_cmd_status1 cavm_ehsm_biu_core2_cmd_status1_t;

#define CAVM_EHSM_BIU_CORE2_CMD_STATUS1 CAVM_EHSM_BIU_CORE2_CMD_STATUS1_FUNC()
static inline uint64_t CAVM_EHSM_BIU_CORE2_CMD_STATUS1_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_EHSM_BIU_CORE2_CMD_STATUS1_FUNC(void)
{
    return 0x80b0000001a8ll;
}

#define typedef_CAVM_EHSM_BIU_CORE2_CMD_STATUS1 cavm_ehsm_biu_core2_cmd_status1_t
#define bustype_CAVM_EHSM_BIU_CORE2_CMD_STATUS1 CSR_TYPE_NCB32b
#define basename_CAVM_EHSM_BIU_CORE2_CMD_STATUS1 "EHSM_BIU_CORE2_CMD_STATUS1"
#define device_bar_CAVM_EHSM_BIU_CORE2_CMD_STATUS1 0x0 /* PF_BAR0 */
#define busnum_CAVM_EHSM_BIU_CORE2_CMD_STATUS1 0
#define arguments_CAVM_EHSM_BIU_CORE2_CMD_STATUS1 -1,-1,-1,-1

/**
 * Register (NCB32b) ehsm_biu_core2_cmd_status10
 *
 * EHSM Biu Core2 Cmd Status10 Register
 * This register contains status 10 associated with a EHSM primitive command from host
 * processor core 2.
 */
union cavm_ehsm_biu_core2_cmd_status10
{
    uint32_t u;
    struct cavm_ehsm_biu_core2_cmd_status10_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t core2_cmd_status10    : 32; /**< [ 31:  0](RO) This register contains status 10 associated with a EHSM primitive command from
                                                                 host processor core 2. */
#else /* Word 0 - Little Endian */
        uint32_t core2_cmd_status10    : 32; /**< [ 31:  0](RO) This register contains status 10 associated with a EHSM primitive command from
                                                                 host processor core 2. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_ehsm_biu_core2_cmd_status10_s cn; */
};
typedef union cavm_ehsm_biu_core2_cmd_status10 cavm_ehsm_biu_core2_cmd_status10_t;

#define CAVM_EHSM_BIU_CORE2_CMD_STATUS10 CAVM_EHSM_BIU_CORE2_CMD_STATUS10_FUNC()
static inline uint64_t CAVM_EHSM_BIU_CORE2_CMD_STATUS10_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_EHSM_BIU_CORE2_CMD_STATUS10_FUNC(void)
{
    return 0x80b0000001ccll;
}

#define typedef_CAVM_EHSM_BIU_CORE2_CMD_STATUS10 cavm_ehsm_biu_core2_cmd_status10_t
#define bustype_CAVM_EHSM_BIU_CORE2_CMD_STATUS10 CSR_TYPE_NCB32b
#define basename_CAVM_EHSM_BIU_CORE2_CMD_STATUS10 "EHSM_BIU_CORE2_CMD_STATUS10"
#define device_bar_CAVM_EHSM_BIU_CORE2_CMD_STATUS10 0x0 /* PF_BAR0 */
#define busnum_CAVM_EHSM_BIU_CORE2_CMD_STATUS10 0
#define arguments_CAVM_EHSM_BIU_CORE2_CMD_STATUS10 -1,-1,-1,-1

/**
 * Register (NCB32b) ehsm_biu_core2_cmd_status11
 *
 * EHSM Biu Core2 Cmd Status11 Register
 * This register contains status 11 associated with a EHSM primitive command from host
 * processor core 2.
 */
union cavm_ehsm_biu_core2_cmd_status11
{
    uint32_t u;
    struct cavm_ehsm_biu_core2_cmd_status11_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t core2_cmd_status11    : 32; /**< [ 31:  0](RO) This register contains status 11 associated with a EHSM primitive command from
                                                                 host processor core 2. */
#else /* Word 0 - Little Endian */
        uint32_t core2_cmd_status11    : 32; /**< [ 31:  0](RO) This register contains status 11 associated with a EHSM primitive command from
                                                                 host processor core 2. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_ehsm_biu_core2_cmd_status11_s cn; */
};
typedef union cavm_ehsm_biu_core2_cmd_status11 cavm_ehsm_biu_core2_cmd_status11_t;

#define CAVM_EHSM_BIU_CORE2_CMD_STATUS11 CAVM_EHSM_BIU_CORE2_CMD_STATUS11_FUNC()
static inline uint64_t CAVM_EHSM_BIU_CORE2_CMD_STATUS11_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_EHSM_BIU_CORE2_CMD_STATUS11_FUNC(void)
{
    return 0x80b0000001d0ll;
}

#define typedef_CAVM_EHSM_BIU_CORE2_CMD_STATUS11 cavm_ehsm_biu_core2_cmd_status11_t
#define bustype_CAVM_EHSM_BIU_CORE2_CMD_STATUS11 CSR_TYPE_NCB32b
#define basename_CAVM_EHSM_BIU_CORE2_CMD_STATUS11 "EHSM_BIU_CORE2_CMD_STATUS11"
#define device_bar_CAVM_EHSM_BIU_CORE2_CMD_STATUS11 0x0 /* PF_BAR0 */
#define busnum_CAVM_EHSM_BIU_CORE2_CMD_STATUS11 0
#define arguments_CAVM_EHSM_BIU_CORE2_CMD_STATUS11 -1,-1,-1,-1

/**
 * Register (NCB32b) ehsm_biu_core2_cmd_status12
 *
 * EHSM Biu Core2 Cmd Status12 Register
 * This register contains status 12 associated with a EHSM primitive command from host
 * processor core 2.
 */
union cavm_ehsm_biu_core2_cmd_status12
{
    uint32_t u;
    struct cavm_ehsm_biu_core2_cmd_status12_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t core2_cmd_status12    : 32; /**< [ 31:  0](RO) This register contains status 12 associated with a EHSM primitive command from
                                                                 host processor core 2. */
#else /* Word 0 - Little Endian */
        uint32_t core2_cmd_status12    : 32; /**< [ 31:  0](RO) This register contains status 12 associated with a EHSM primitive command from
                                                                 host processor core 2. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_ehsm_biu_core2_cmd_status12_s cn; */
};
typedef union cavm_ehsm_biu_core2_cmd_status12 cavm_ehsm_biu_core2_cmd_status12_t;

#define CAVM_EHSM_BIU_CORE2_CMD_STATUS12 CAVM_EHSM_BIU_CORE2_CMD_STATUS12_FUNC()
static inline uint64_t CAVM_EHSM_BIU_CORE2_CMD_STATUS12_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_EHSM_BIU_CORE2_CMD_STATUS12_FUNC(void)
{
    return 0x80b0000001d4ll;
}

#define typedef_CAVM_EHSM_BIU_CORE2_CMD_STATUS12 cavm_ehsm_biu_core2_cmd_status12_t
#define bustype_CAVM_EHSM_BIU_CORE2_CMD_STATUS12 CSR_TYPE_NCB32b
#define basename_CAVM_EHSM_BIU_CORE2_CMD_STATUS12 "EHSM_BIU_CORE2_CMD_STATUS12"
#define device_bar_CAVM_EHSM_BIU_CORE2_CMD_STATUS12 0x0 /* PF_BAR0 */
#define busnum_CAVM_EHSM_BIU_CORE2_CMD_STATUS12 0
#define arguments_CAVM_EHSM_BIU_CORE2_CMD_STATUS12 -1,-1,-1,-1

/**
 * Register (NCB32b) ehsm_biu_core2_cmd_status13
 *
 * EHSM Biu Core2 Cmd Status13 Register
 * This register contains status 13 associated with a EHSM primitive command from host
 * processor core 2.
 */
union cavm_ehsm_biu_core2_cmd_status13
{
    uint32_t u;
    struct cavm_ehsm_biu_core2_cmd_status13_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t core2_cmd_status13    : 32; /**< [ 31:  0](RO) This register contains status 13 associated with a EHSM primitive command from
                                                                 host processor core 2. */
#else /* Word 0 - Little Endian */
        uint32_t core2_cmd_status13    : 32; /**< [ 31:  0](RO) This register contains status 13 associated with a EHSM primitive command from
                                                                 host processor core 2. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_ehsm_biu_core2_cmd_status13_s cn; */
};
typedef union cavm_ehsm_biu_core2_cmd_status13 cavm_ehsm_biu_core2_cmd_status13_t;

#define CAVM_EHSM_BIU_CORE2_CMD_STATUS13 CAVM_EHSM_BIU_CORE2_CMD_STATUS13_FUNC()
static inline uint64_t CAVM_EHSM_BIU_CORE2_CMD_STATUS13_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_EHSM_BIU_CORE2_CMD_STATUS13_FUNC(void)
{
    return 0x80b0000001d8ll;
}

#define typedef_CAVM_EHSM_BIU_CORE2_CMD_STATUS13 cavm_ehsm_biu_core2_cmd_status13_t
#define bustype_CAVM_EHSM_BIU_CORE2_CMD_STATUS13 CSR_TYPE_NCB32b
#define basename_CAVM_EHSM_BIU_CORE2_CMD_STATUS13 "EHSM_BIU_CORE2_CMD_STATUS13"
#define device_bar_CAVM_EHSM_BIU_CORE2_CMD_STATUS13 0x0 /* PF_BAR0 */
#define busnum_CAVM_EHSM_BIU_CORE2_CMD_STATUS13 0
#define arguments_CAVM_EHSM_BIU_CORE2_CMD_STATUS13 -1,-1,-1,-1

/**
 * Register (NCB32b) ehsm_biu_core2_cmd_status14
 *
 * EHSM Biu Core2 Cmd Status14 Register
 * This register contains status 14 associated with a EHSM primitive command from host
 * processor core 2.
 */
union cavm_ehsm_biu_core2_cmd_status14
{
    uint32_t u;
    struct cavm_ehsm_biu_core2_cmd_status14_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t core2_cmd_status14    : 32; /**< [ 31:  0](RO) This register contains status 14 associated with a EHSM primitive command from
                                                                 host processor core 2. */
#else /* Word 0 - Little Endian */
        uint32_t core2_cmd_status14    : 32; /**< [ 31:  0](RO) This register contains status 14 associated with a EHSM primitive command from
                                                                 host processor core 2. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_ehsm_biu_core2_cmd_status14_s cn; */
};
typedef union cavm_ehsm_biu_core2_cmd_status14 cavm_ehsm_biu_core2_cmd_status14_t;

#define CAVM_EHSM_BIU_CORE2_CMD_STATUS14 CAVM_EHSM_BIU_CORE2_CMD_STATUS14_FUNC()
static inline uint64_t CAVM_EHSM_BIU_CORE2_CMD_STATUS14_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_EHSM_BIU_CORE2_CMD_STATUS14_FUNC(void)
{
    return 0x80b0000001dcll;
}

#define typedef_CAVM_EHSM_BIU_CORE2_CMD_STATUS14 cavm_ehsm_biu_core2_cmd_status14_t
#define bustype_CAVM_EHSM_BIU_CORE2_CMD_STATUS14 CSR_TYPE_NCB32b
#define basename_CAVM_EHSM_BIU_CORE2_CMD_STATUS14 "EHSM_BIU_CORE2_CMD_STATUS14"
#define device_bar_CAVM_EHSM_BIU_CORE2_CMD_STATUS14 0x0 /* PF_BAR0 */
#define busnum_CAVM_EHSM_BIU_CORE2_CMD_STATUS14 0
#define arguments_CAVM_EHSM_BIU_CORE2_CMD_STATUS14 -1,-1,-1,-1

/**
 * Register (NCB32b) ehsm_biu_core2_cmd_status15
 *
 * EHSM Biu Core2 Cmd Status15 Register
 * This register contains status 15 associated with a EHSM primitive command from host
 * processor core 2.
 */
union cavm_ehsm_biu_core2_cmd_status15
{
    uint32_t u;
    struct cavm_ehsm_biu_core2_cmd_status15_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t core2_cmd_status15    : 32; /**< [ 31:  0](RO) This register contains status 15 associated with a EHSM primitive command from
                                                                 host processor core 2. */
#else /* Word 0 - Little Endian */
        uint32_t core2_cmd_status15    : 32; /**< [ 31:  0](RO) This register contains status 15 associated with a EHSM primitive command from
                                                                 host processor core 2. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_ehsm_biu_core2_cmd_status15_s cn; */
};
typedef union cavm_ehsm_biu_core2_cmd_status15 cavm_ehsm_biu_core2_cmd_status15_t;

#define CAVM_EHSM_BIU_CORE2_CMD_STATUS15 CAVM_EHSM_BIU_CORE2_CMD_STATUS15_FUNC()
static inline uint64_t CAVM_EHSM_BIU_CORE2_CMD_STATUS15_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_EHSM_BIU_CORE2_CMD_STATUS15_FUNC(void)
{
    return 0x80b0000001e0ll;
}

#define typedef_CAVM_EHSM_BIU_CORE2_CMD_STATUS15 cavm_ehsm_biu_core2_cmd_status15_t
#define bustype_CAVM_EHSM_BIU_CORE2_CMD_STATUS15 CSR_TYPE_NCB32b
#define basename_CAVM_EHSM_BIU_CORE2_CMD_STATUS15 "EHSM_BIU_CORE2_CMD_STATUS15"
#define device_bar_CAVM_EHSM_BIU_CORE2_CMD_STATUS15 0x0 /* PF_BAR0 */
#define busnum_CAVM_EHSM_BIU_CORE2_CMD_STATUS15 0
#define arguments_CAVM_EHSM_BIU_CORE2_CMD_STATUS15 -1,-1,-1,-1

/**
 * Register (NCB32b) ehsm_biu_core2_cmd_status2
 *
 * EHSM Biu Core2 Cmd Status2 Register
 * This register contains status 2 associated with a EHSM primitive command from host
 * processor core 2.
 */
union cavm_ehsm_biu_core2_cmd_status2
{
    uint32_t u;
    struct cavm_ehsm_biu_core2_cmd_status2_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t core2_cmd_status2     : 32; /**< [ 31:  0](RO) This register contains status 2 associated with a EHSM primitive command from
                                                                 host processor core 2. */
#else /* Word 0 - Little Endian */
        uint32_t core2_cmd_status2     : 32; /**< [ 31:  0](RO) This register contains status 2 associated with a EHSM primitive command from
                                                                 host processor core 2. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_ehsm_biu_core2_cmd_status2_s cn; */
};
typedef union cavm_ehsm_biu_core2_cmd_status2 cavm_ehsm_biu_core2_cmd_status2_t;

#define CAVM_EHSM_BIU_CORE2_CMD_STATUS2 CAVM_EHSM_BIU_CORE2_CMD_STATUS2_FUNC()
static inline uint64_t CAVM_EHSM_BIU_CORE2_CMD_STATUS2_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_EHSM_BIU_CORE2_CMD_STATUS2_FUNC(void)
{
    return 0x80b0000001acll;
}

#define typedef_CAVM_EHSM_BIU_CORE2_CMD_STATUS2 cavm_ehsm_biu_core2_cmd_status2_t
#define bustype_CAVM_EHSM_BIU_CORE2_CMD_STATUS2 CSR_TYPE_NCB32b
#define basename_CAVM_EHSM_BIU_CORE2_CMD_STATUS2 "EHSM_BIU_CORE2_CMD_STATUS2"
#define device_bar_CAVM_EHSM_BIU_CORE2_CMD_STATUS2 0x0 /* PF_BAR0 */
#define busnum_CAVM_EHSM_BIU_CORE2_CMD_STATUS2 0
#define arguments_CAVM_EHSM_BIU_CORE2_CMD_STATUS2 -1,-1,-1,-1

/**
 * Register (NCB32b) ehsm_biu_core2_cmd_status3
 *
 * EHSM Biu Core2 Cmd Status3 Register
 * This register contains status 3 associated with a EHSM primitive command from host
 * processor core 2.
 */
union cavm_ehsm_biu_core2_cmd_status3
{
    uint32_t u;
    struct cavm_ehsm_biu_core2_cmd_status3_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t core2_cmd_status3     : 32; /**< [ 31:  0](RO) This register contains status 3 associated with a EHSM primitive command from
                                                                 host processor core 2. */
#else /* Word 0 - Little Endian */
        uint32_t core2_cmd_status3     : 32; /**< [ 31:  0](RO) This register contains status 3 associated with a EHSM primitive command from
                                                                 host processor core 2. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_ehsm_biu_core2_cmd_status3_s cn; */
};
typedef union cavm_ehsm_biu_core2_cmd_status3 cavm_ehsm_biu_core2_cmd_status3_t;

#define CAVM_EHSM_BIU_CORE2_CMD_STATUS3 CAVM_EHSM_BIU_CORE2_CMD_STATUS3_FUNC()
static inline uint64_t CAVM_EHSM_BIU_CORE2_CMD_STATUS3_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_EHSM_BIU_CORE2_CMD_STATUS3_FUNC(void)
{
    return 0x80b0000001b0ll;
}

#define typedef_CAVM_EHSM_BIU_CORE2_CMD_STATUS3 cavm_ehsm_biu_core2_cmd_status3_t
#define bustype_CAVM_EHSM_BIU_CORE2_CMD_STATUS3 CSR_TYPE_NCB32b
#define basename_CAVM_EHSM_BIU_CORE2_CMD_STATUS3 "EHSM_BIU_CORE2_CMD_STATUS3"
#define device_bar_CAVM_EHSM_BIU_CORE2_CMD_STATUS3 0x0 /* PF_BAR0 */
#define busnum_CAVM_EHSM_BIU_CORE2_CMD_STATUS3 0
#define arguments_CAVM_EHSM_BIU_CORE2_CMD_STATUS3 -1,-1,-1,-1

/**
 * Register (NCB32b) ehsm_biu_core2_cmd_status4
 *
 * EHSM Biu Core2 Cmd Status4 Register
 * This register contains status 4 associated with a EHSM primitive command from host
 * processor core 2.
 */
union cavm_ehsm_biu_core2_cmd_status4
{
    uint32_t u;
    struct cavm_ehsm_biu_core2_cmd_status4_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t core2_cmd_status4     : 32; /**< [ 31:  0](RO) This register contains status 4 associated with a EHSM primitive command from
                                                                 host processor core 2. */
#else /* Word 0 - Little Endian */
        uint32_t core2_cmd_status4     : 32; /**< [ 31:  0](RO) This register contains status 4 associated with a EHSM primitive command from
                                                                 host processor core 2. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_ehsm_biu_core2_cmd_status4_s cn; */
};
typedef union cavm_ehsm_biu_core2_cmd_status4 cavm_ehsm_biu_core2_cmd_status4_t;

#define CAVM_EHSM_BIU_CORE2_CMD_STATUS4 CAVM_EHSM_BIU_CORE2_CMD_STATUS4_FUNC()
static inline uint64_t CAVM_EHSM_BIU_CORE2_CMD_STATUS4_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_EHSM_BIU_CORE2_CMD_STATUS4_FUNC(void)
{
    return 0x80b0000001b4ll;
}

#define typedef_CAVM_EHSM_BIU_CORE2_CMD_STATUS4 cavm_ehsm_biu_core2_cmd_status4_t
#define bustype_CAVM_EHSM_BIU_CORE2_CMD_STATUS4 CSR_TYPE_NCB32b
#define basename_CAVM_EHSM_BIU_CORE2_CMD_STATUS4 "EHSM_BIU_CORE2_CMD_STATUS4"
#define device_bar_CAVM_EHSM_BIU_CORE2_CMD_STATUS4 0x0 /* PF_BAR0 */
#define busnum_CAVM_EHSM_BIU_CORE2_CMD_STATUS4 0
#define arguments_CAVM_EHSM_BIU_CORE2_CMD_STATUS4 -1,-1,-1,-1

/**
 * Register (NCB32b) ehsm_biu_core2_cmd_status5
 *
 * EHSM Biu Core2 Cmd Status5 Register
 * This register contains status 5 associated with a EHSM primitive command from host
 * processor core 2.
 */
union cavm_ehsm_biu_core2_cmd_status5
{
    uint32_t u;
    struct cavm_ehsm_biu_core2_cmd_status5_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t core2_cmd_status5     : 32; /**< [ 31:  0](RO) This register contains status 5 associated with a EHSM primitive command from
                                                                 host processor core 2. */
#else /* Word 0 - Little Endian */
        uint32_t core2_cmd_status5     : 32; /**< [ 31:  0](RO) This register contains status 5 associated with a EHSM primitive command from
                                                                 host processor core 2. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_ehsm_biu_core2_cmd_status5_s cn; */
};
typedef union cavm_ehsm_biu_core2_cmd_status5 cavm_ehsm_biu_core2_cmd_status5_t;

#define CAVM_EHSM_BIU_CORE2_CMD_STATUS5 CAVM_EHSM_BIU_CORE2_CMD_STATUS5_FUNC()
static inline uint64_t CAVM_EHSM_BIU_CORE2_CMD_STATUS5_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_EHSM_BIU_CORE2_CMD_STATUS5_FUNC(void)
{
    return 0x80b0000001b8ll;
}

#define typedef_CAVM_EHSM_BIU_CORE2_CMD_STATUS5 cavm_ehsm_biu_core2_cmd_status5_t
#define bustype_CAVM_EHSM_BIU_CORE2_CMD_STATUS5 CSR_TYPE_NCB32b
#define basename_CAVM_EHSM_BIU_CORE2_CMD_STATUS5 "EHSM_BIU_CORE2_CMD_STATUS5"
#define device_bar_CAVM_EHSM_BIU_CORE2_CMD_STATUS5 0x0 /* PF_BAR0 */
#define busnum_CAVM_EHSM_BIU_CORE2_CMD_STATUS5 0
#define arguments_CAVM_EHSM_BIU_CORE2_CMD_STATUS5 -1,-1,-1,-1

/**
 * Register (NCB32b) ehsm_biu_core2_cmd_status6
 *
 * EHSM Biu Core2 Cmd Status6 Register
 * This register contains status 6 associated with a EHSM primitive command from host
 * processor core 2.
 */
union cavm_ehsm_biu_core2_cmd_status6
{
    uint32_t u;
    struct cavm_ehsm_biu_core2_cmd_status6_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t core2_cmd_status6     : 32; /**< [ 31:  0](RO) This register contains status 6 associated with a EHSM primitive command from
                                                                 host processor core 2. */
#else /* Word 0 - Little Endian */
        uint32_t core2_cmd_status6     : 32; /**< [ 31:  0](RO) This register contains status 6 associated with a EHSM primitive command from
                                                                 host processor core 2. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_ehsm_biu_core2_cmd_status6_s cn; */
};
typedef union cavm_ehsm_biu_core2_cmd_status6 cavm_ehsm_biu_core2_cmd_status6_t;

#define CAVM_EHSM_BIU_CORE2_CMD_STATUS6 CAVM_EHSM_BIU_CORE2_CMD_STATUS6_FUNC()
static inline uint64_t CAVM_EHSM_BIU_CORE2_CMD_STATUS6_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_EHSM_BIU_CORE2_CMD_STATUS6_FUNC(void)
{
    return 0x80b0000001bcll;
}

#define typedef_CAVM_EHSM_BIU_CORE2_CMD_STATUS6 cavm_ehsm_biu_core2_cmd_status6_t
#define bustype_CAVM_EHSM_BIU_CORE2_CMD_STATUS6 CSR_TYPE_NCB32b
#define basename_CAVM_EHSM_BIU_CORE2_CMD_STATUS6 "EHSM_BIU_CORE2_CMD_STATUS6"
#define device_bar_CAVM_EHSM_BIU_CORE2_CMD_STATUS6 0x0 /* PF_BAR0 */
#define busnum_CAVM_EHSM_BIU_CORE2_CMD_STATUS6 0
#define arguments_CAVM_EHSM_BIU_CORE2_CMD_STATUS6 -1,-1,-1,-1

/**
 * Register (NCB32b) ehsm_biu_core2_cmd_status7
 *
 * EHSM Biu Core2 Cmd Status7 Register
 * This register contains status 7 associated with a EHSM primitive command from host
 * processor core 2.
 */
union cavm_ehsm_biu_core2_cmd_status7
{
    uint32_t u;
    struct cavm_ehsm_biu_core2_cmd_status7_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t core2_cmd_status7     : 32; /**< [ 31:  0](RO) This register contains status 7 associated with a EHSM primitive command from
                                                                 host processor core 2. */
#else /* Word 0 - Little Endian */
        uint32_t core2_cmd_status7     : 32; /**< [ 31:  0](RO) This register contains status 7 associated with a EHSM primitive command from
                                                                 host processor core 2. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_ehsm_biu_core2_cmd_status7_s cn; */
};
typedef union cavm_ehsm_biu_core2_cmd_status7 cavm_ehsm_biu_core2_cmd_status7_t;

#define CAVM_EHSM_BIU_CORE2_CMD_STATUS7 CAVM_EHSM_BIU_CORE2_CMD_STATUS7_FUNC()
static inline uint64_t CAVM_EHSM_BIU_CORE2_CMD_STATUS7_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_EHSM_BIU_CORE2_CMD_STATUS7_FUNC(void)
{
    return 0x80b0000001c0ll;
}

#define typedef_CAVM_EHSM_BIU_CORE2_CMD_STATUS7 cavm_ehsm_biu_core2_cmd_status7_t
#define bustype_CAVM_EHSM_BIU_CORE2_CMD_STATUS7 CSR_TYPE_NCB32b
#define basename_CAVM_EHSM_BIU_CORE2_CMD_STATUS7 "EHSM_BIU_CORE2_CMD_STATUS7"
#define device_bar_CAVM_EHSM_BIU_CORE2_CMD_STATUS7 0x0 /* PF_BAR0 */
#define busnum_CAVM_EHSM_BIU_CORE2_CMD_STATUS7 0
#define arguments_CAVM_EHSM_BIU_CORE2_CMD_STATUS7 -1,-1,-1,-1

/**
 * Register (NCB32b) ehsm_biu_core2_cmd_status8
 *
 * EHSM Biu Core2 Cmd Status8 Register
 * This register contains status 8 associated with a EHSM primitive command from host
 * processor core 2.
 */
union cavm_ehsm_biu_core2_cmd_status8
{
    uint32_t u;
    struct cavm_ehsm_biu_core2_cmd_status8_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t core2_cmd_status8     : 32; /**< [ 31:  0](RO) This register contains status 8 associated with a EHSM primitive command from
                                                                 host processor core 2. */
#else /* Word 0 - Little Endian */
        uint32_t core2_cmd_status8     : 32; /**< [ 31:  0](RO) This register contains status 8 associated with a EHSM primitive command from
                                                                 host processor core 2. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_ehsm_biu_core2_cmd_status8_s cn; */
};
typedef union cavm_ehsm_biu_core2_cmd_status8 cavm_ehsm_biu_core2_cmd_status8_t;

#define CAVM_EHSM_BIU_CORE2_CMD_STATUS8 CAVM_EHSM_BIU_CORE2_CMD_STATUS8_FUNC()
static inline uint64_t CAVM_EHSM_BIU_CORE2_CMD_STATUS8_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_EHSM_BIU_CORE2_CMD_STATUS8_FUNC(void)
{
    return 0x80b0000001c4ll;
}

#define typedef_CAVM_EHSM_BIU_CORE2_CMD_STATUS8 cavm_ehsm_biu_core2_cmd_status8_t
#define bustype_CAVM_EHSM_BIU_CORE2_CMD_STATUS8 CSR_TYPE_NCB32b
#define basename_CAVM_EHSM_BIU_CORE2_CMD_STATUS8 "EHSM_BIU_CORE2_CMD_STATUS8"
#define device_bar_CAVM_EHSM_BIU_CORE2_CMD_STATUS8 0x0 /* PF_BAR0 */
#define busnum_CAVM_EHSM_BIU_CORE2_CMD_STATUS8 0
#define arguments_CAVM_EHSM_BIU_CORE2_CMD_STATUS8 -1,-1,-1,-1

/**
 * Register (NCB32b) ehsm_biu_core2_cmd_status9
 *
 * EHSM Biu Core2 Cmd Status9 Register
 * This register contains status 9 associated with a EHSM primitive command from host
 * processor core 2.
 */
union cavm_ehsm_biu_core2_cmd_status9
{
    uint32_t u;
    struct cavm_ehsm_biu_core2_cmd_status9_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t core2_cmd_status9     : 32; /**< [ 31:  0](RO) This register contains status 9 associated with a EHSM primitive command from
                                                                 host processor core 2. */
#else /* Word 0 - Little Endian */
        uint32_t core2_cmd_status9     : 32; /**< [ 31:  0](RO) This register contains status 9 associated with a EHSM primitive command from
                                                                 host processor core 2. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_ehsm_biu_core2_cmd_status9_s cn; */
};
typedef union cavm_ehsm_biu_core2_cmd_status9 cavm_ehsm_biu_core2_cmd_status9_t;

#define CAVM_EHSM_BIU_CORE2_CMD_STATUS9 CAVM_EHSM_BIU_CORE2_CMD_STATUS9_FUNC()
static inline uint64_t CAVM_EHSM_BIU_CORE2_CMD_STATUS9_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_EHSM_BIU_CORE2_CMD_STATUS9_FUNC(void)
{
    return 0x80b0000001c8ll;
}

#define typedef_CAVM_EHSM_BIU_CORE2_CMD_STATUS9 cavm_ehsm_biu_core2_cmd_status9_t
#define bustype_CAVM_EHSM_BIU_CORE2_CMD_STATUS9 CSR_TYPE_NCB32b
#define basename_CAVM_EHSM_BIU_CORE2_CMD_STATUS9 "EHSM_BIU_CORE2_CMD_STATUS9"
#define device_bar_CAVM_EHSM_BIU_CORE2_CMD_STATUS9 0x0 /* PF_BAR0 */
#define busnum_CAVM_EHSM_BIU_CORE2_CMD_STATUS9 0
#define arguments_CAVM_EHSM_BIU_CORE2_CMD_STATUS9 -1,-1,-1,-1

/**
 * Register (NCB32b) ehsm_biu_core2_hst_interrupt_mask
 *
 * EHSM Biu Core2 Hst Interrupt Mask Register
 * This is host interrupt masking register for host processor core 2
 */
union cavm_ehsm_biu_core2_hst_interrupt_mask
{
    uint32_t u;
    struct cavm_ehsm_biu_core2_hst_interrupt_mask_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t core2_hst_interrupt_mask : 32;/**< [ 31:  0](R/W) This is host interrupt masking register for host processor core 2 */
#else /* Word 0 - Little Endian */
        uint32_t core2_hst_interrupt_mask : 32;/**< [ 31:  0](R/W) This is host interrupt masking register for host processor core 2 */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_ehsm_biu_core2_hst_interrupt_mask_s cn; */
};
typedef union cavm_ehsm_biu_core2_hst_interrupt_mask cavm_ehsm_biu_core2_hst_interrupt_mask_t;

#define CAVM_EHSM_BIU_CORE2_HST_INTERRUPT_MASK CAVM_EHSM_BIU_CORE2_HST_INTERRUPT_MASK_FUNC()
static inline uint64_t CAVM_EHSM_BIU_CORE2_HST_INTERRUPT_MASK_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_EHSM_BIU_CORE2_HST_INTERRUPT_MASK_FUNC(void)
{
    return 0x80b0000001e8ll;
}

#define typedef_CAVM_EHSM_BIU_CORE2_HST_INTERRUPT_MASK cavm_ehsm_biu_core2_hst_interrupt_mask_t
#define bustype_CAVM_EHSM_BIU_CORE2_HST_INTERRUPT_MASK CSR_TYPE_NCB32b
#define basename_CAVM_EHSM_BIU_CORE2_HST_INTERRUPT_MASK "EHSM_BIU_CORE2_HST_INTERRUPT_MASK"
#define device_bar_CAVM_EHSM_BIU_CORE2_HST_INTERRUPT_MASK 0x0 /* PF_BAR0 */
#define busnum_CAVM_EHSM_BIU_CORE2_HST_INTERRUPT_MASK 0
#define arguments_CAVM_EHSM_BIU_CORE2_HST_INTERRUPT_MASK -1,-1,-1,-1

/**
 * Register (NCB32b) ehsm_biu_core2_hst_interrupt_rst
 *
 * EHSM Biu Core2 Hst Interrupt Rst Register
 * This is host interrupt register for host processor core 2
 */
union cavm_ehsm_biu_core2_hst_interrupt_rst
{
    uint32_t u;
    struct cavm_ehsm_biu_core2_hst_interrupt_rst_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t reserved_18_31        : 14;
        uint32_t cmd_buffer_full_access : 1; /**< [ 17: 17](R/W) When active, this interrupt indicates to the host processor core 2 that an
                                                                 attempt was made to write the command register or the parameter register space
                                                                 when the command buffer of host processor core 2 was full. The write attempt
                                                                 will be blocked. It does not impact the command and parameters that is already
                                                                 queued. The host can rewrite the command or parameter when CMD buffer of host
                                                                 processor core 2 is empty. Host can read CORE2_CMD_BUFFER_FULL field in
                                                                 CMD_FIFO_STATUS to check if CMD buffer of host processor core 2 is available to
                                                                 be written.
                                                                 To reset this field, write a 1 to clear the interrupt. */
        uint32_t hst_addr_range        : 1;  /**< [ 16: 16](R/W) This interrupt indicates that the host attempted to access an address to which
                                                                 it is not allowed access. This interrupt also triggers if a write is made to a
                                                                 read-only register, or a read to a write-only register.
                                                                 To reset this field, write a 1 to clear the interrupt. */
        uint32_t reserved_3_15         : 13;
        uint32_t sysrdyp_timeout       : 1;  /**< [  2:  2](R/W) This field indicates that SYSRDYP timeout is detected on OTP or PUF power switch.
                                                                 If enable_puf field in OTP efuse is 0, only SYSRDYP timeout of OTP power switch
                                                                 can trigger this host interrupt
                                                                 If enable_puf field in OTP efuse is 1, SYSRDYP timeout of either OTP or PUF
                                                                 power switch can trigger this host interrupt. User can read SHADOW_REG_STATUS to
                                                                 determine SYSRDYP timeout is detected on which power switch */
        uint32_t ehsm_mem_fail         : 1;  /**< [  1:  1](R/W) When set, this interrupt indicates that CM3 ROM, CM3 RAM or SPAD memory has uncorrectable error
                                                                 To reset this field, write a 1 to clear the interrupt. */
        uint32_t irom_exe_int          : 1;  /**< [  0:  0](R/W) When set, this interrupt indicates that the secure processor has completed a
                                                                 primitive issued by host processor core 2, or completed execution for boot up
                                                                 To reset this field, write a 1 to clear the interrupt. */
#else /* Word 0 - Little Endian */
        uint32_t irom_exe_int          : 1;  /**< [  0:  0](R/W) When set, this interrupt indicates that the secure processor has completed a
                                                                 primitive issued by host processor core 2, or completed execution for boot up
                                                                 To reset this field, write a 1 to clear the interrupt. */
        uint32_t ehsm_mem_fail         : 1;  /**< [  1:  1](R/W) When set, this interrupt indicates that CM3 ROM, CM3 RAM or SPAD memory has uncorrectable error
                                                                 To reset this field, write a 1 to clear the interrupt. */
        uint32_t sysrdyp_timeout       : 1;  /**< [  2:  2](R/W) This field indicates that SYSRDYP timeout is detected on OTP or PUF power switch.
                                                                 If enable_puf field in OTP efuse is 0, only SYSRDYP timeout of OTP power switch
                                                                 can trigger this host interrupt
                                                                 If enable_puf field in OTP efuse is 1, SYSRDYP timeout of either OTP or PUF
                                                                 power switch can trigger this host interrupt. User can read SHADOW_REG_STATUS to
                                                                 determine SYSRDYP timeout is detected on which power switch */
        uint32_t reserved_3_15         : 13;
        uint32_t hst_addr_range        : 1;  /**< [ 16: 16](R/W) This interrupt indicates that the host attempted to access an address to which
                                                                 it is not allowed access. This interrupt also triggers if a write is made to a
                                                                 read-only register, or a read to a write-only register.
                                                                 To reset this field, write a 1 to clear the interrupt. */
        uint32_t cmd_buffer_full_access : 1; /**< [ 17: 17](R/W) When active, this interrupt indicates to the host processor core 2 that an
                                                                 attempt was made to write the command register or the parameter register space
                                                                 when the command buffer of host processor core 2 was full. The write attempt
                                                                 will be blocked. It does not impact the command and parameters that is already
                                                                 queued. The host can rewrite the command or parameter when CMD buffer of host
                                                                 processor core 2 is empty. Host can read CORE2_CMD_BUFFER_FULL field in
                                                                 CMD_FIFO_STATUS to check if CMD buffer of host processor core 2 is available to
                                                                 be written.
                                                                 To reset this field, write a 1 to clear the interrupt. */
        uint32_t reserved_18_31        : 14;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_ehsm_biu_core2_hst_interrupt_rst_s cn; */
};
typedef union cavm_ehsm_biu_core2_hst_interrupt_rst cavm_ehsm_biu_core2_hst_interrupt_rst_t;

#define CAVM_EHSM_BIU_CORE2_HST_INTERRUPT_RST CAVM_EHSM_BIU_CORE2_HST_INTERRUPT_RST_FUNC()
static inline uint64_t CAVM_EHSM_BIU_CORE2_HST_INTERRUPT_RST_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_EHSM_BIU_CORE2_HST_INTERRUPT_RST_FUNC(void)
{
    return 0x80b0000001e4ll;
}

#define typedef_CAVM_EHSM_BIU_CORE2_HST_INTERRUPT_RST cavm_ehsm_biu_core2_hst_interrupt_rst_t
#define bustype_CAVM_EHSM_BIU_CORE2_HST_INTERRUPT_RST CSR_TYPE_NCB32b
#define basename_CAVM_EHSM_BIU_CORE2_HST_INTERRUPT_RST "EHSM_BIU_CORE2_HST_INTERRUPT_RST"
#define device_bar_CAVM_EHSM_BIU_CORE2_HST_INTERRUPT_RST 0x0 /* PF_BAR0 */
#define busnum_CAVM_EHSM_BIU_CORE2_HST_INTERRUPT_RST 0
#define arguments_CAVM_EHSM_BIU_CORE2_HST_INTERRUPT_RST -1,-1,-1,-1

/**
 * Register (NCB32b) ehsm_biu_ehsm_id
 *
 * EHSM Biu Ehsm Id Register
 * This is EHSM ID. Each project is assigned with a unique EHSM ID.
 * Internal: |
 *  EHSM-39. For CNXXXX, EHSM ID is 0x25.
 */
union cavm_ehsm_biu_ehsm_id
{
    uint32_t u;
    struct cavm_ehsm_biu_ehsm_id_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t ehsm_id               : 32; /**< [ 31:  0](RO) This is EHSM ID. Each project is assigned with a unique EHSM ID.
                                                                 Internal: |
                                                                  EHSM-39. For CNXXXX, EHSM ID is 0x25. */
#else /* Word 0 - Little Endian */
        uint32_t ehsm_id               : 32; /**< [ 31:  0](RO) This is EHSM ID. Each project is assigned with a unique EHSM ID.
                                                                 Internal: |
                                                                  EHSM-39. For CNXXXX, EHSM ID is 0x25. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_ehsm_biu_ehsm_id_s cn; */
};
typedef union cavm_ehsm_biu_ehsm_id cavm_ehsm_biu_ehsm_id_t;

#define CAVM_EHSM_BIU_EHSM_ID CAVM_EHSM_BIU_EHSM_ID_FUNC()
static inline uint64_t CAVM_EHSM_BIU_EHSM_ID_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_EHSM_BIU_EHSM_ID_FUNC(void)
{
    return 0x80b0000000d8ll;
}

#define typedef_CAVM_EHSM_BIU_EHSM_ID cavm_ehsm_biu_ehsm_id_t
#define bustype_CAVM_EHSM_BIU_EHSM_ID CSR_TYPE_NCB32b
#define basename_CAVM_EHSM_BIU_EHSM_ID "EHSM_BIU_EHSM_ID"
#define device_bar_CAVM_EHSM_BIU_EHSM_ID 0x0 /* PF_BAR0 */
#define busnum_CAVM_EHSM_BIU_EHSM_ID 0
#define arguments_CAVM_EHSM_BIU_EHSM_ID -1,-1,-1,-1

/**
 * Register (NCB32b) ehsm_biu_ehsm_rev
 *
 * EHSM Biu Ehsm Rev Register
 * This is EHSM revision.
 * Internal: |
 *  EHSM-39. For CNXXXX, the revision is 02.00.00 (0x0002_0000).
 */
union cavm_ehsm_biu_ehsm_rev
{
    uint32_t u;
    struct cavm_ehsm_biu_ehsm_rev_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t ehsm_rev              : 32; /**< [ 31:  0](RO) This is EHSM revision.
                                                                 Internal: |
                                                                  EHSM-39. For CNXXXX, the revision is 02.00.00 (0x0002_0000). */
#else /* Word 0 - Little Endian */
        uint32_t ehsm_rev              : 32; /**< [ 31:  0](RO) This is EHSM revision.
                                                                 Internal: |
                                                                  EHSM-39. For CNXXXX, the revision is 02.00.00 (0x0002_0000). */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_ehsm_biu_ehsm_rev_s cn; */
};
typedef union cavm_ehsm_biu_ehsm_rev cavm_ehsm_biu_ehsm_rev_t;

#define CAVM_EHSM_BIU_EHSM_REV CAVM_EHSM_BIU_EHSM_REV_FUNC()
static inline uint64_t CAVM_EHSM_BIU_EHSM_REV_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_EHSM_BIU_EHSM_REV_FUNC(void)
{
    return 0x80b0000000dcll;
}

#define typedef_CAVM_EHSM_BIU_EHSM_REV cavm_ehsm_biu_ehsm_rev_t
#define bustype_CAVM_EHSM_BIU_EHSM_REV CSR_TYPE_NCB32b
#define basename_CAVM_EHSM_BIU_EHSM_REV "EHSM_BIU_EHSM_REV"
#define device_bar_CAVM_EHSM_BIU_EHSM_REV 0x0 /* PF_BAR0 */
#define busnum_CAVM_EHSM_BIU_EHSM_REV 0
#define arguments_CAVM_EHSM_BIU_EHSM_REV -1,-1,-1,-1

/**
 * Register (NCB32b) ehsm_biu_fw_security_version
 *
 * EHSM Biu Fw Security Version Register
 * This is for EHSM-78
 */
union cavm_ehsm_biu_fw_security_version
{
    uint32_t u;
    struct cavm_ehsm_biu_fw_security_version_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t reserved_13_31        : 19;
        uint32_t kak_id                : 2;  /**< [ 12: 11](RO) This is written by IROM to select loader_fw_security_version0~3 and main_fw_security_version0~3.
                                                                 0: loader_fw_security_version field reflects OTP field
                                                                 loader_fw_security_version0, main_fw_security_version field reflects OTP field
                                                                 main_fw_security_version0.
                                                                 1: loader_fw_security_version field reflects OTP field
                                                                 loader_fw_security_version1, main_fw_security_version field reflects OTP field
                                                                 main_fw_security_version1.
                                                                 2: loader_fw_security_version field reflects OTP field
                                                                 loader_fw_security_version2, main_fw_security_version field reflects OTP field
                                                                 main_fw_security_version2.
                                                                 3: loader_fw_security_version field reflects OTP field
                                                                 loader_fw_security_version3, main_fw_security_version field reflects OTP field
                                                                 main_fw_security_version3. */
        uint32_t kak_id_valid          : 1;  /**< [ 10: 10](RO) This is written by IROM to indicate kak_id is valid to select
                                                                 loader_fw_security_version0~3 and main_fw_security_version0~3. */
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
        uint32_t kak_id_valid          : 1;  /**< [ 10: 10](RO) This is written by IROM to indicate kak_id is valid to select
                                                                 loader_fw_security_version0~3 and main_fw_security_version0~3. */
        uint32_t kak_id                : 2;  /**< [ 12: 11](RO) This is written by IROM to select loader_fw_security_version0~3 and main_fw_security_version0~3.
                                                                 0: loader_fw_security_version field reflects OTP field
                                                                 loader_fw_security_version0, main_fw_security_version field reflects OTP field
                                                                 main_fw_security_version0.
                                                                 1: loader_fw_security_version field reflects OTP field
                                                                 loader_fw_security_version1, main_fw_security_version field reflects OTP field
                                                                 main_fw_security_version1.
                                                                 2: loader_fw_security_version field reflects OTP field
                                                                 loader_fw_security_version2, main_fw_security_version field reflects OTP field
                                                                 main_fw_security_version2.
                                                                 3: loader_fw_security_version field reflects OTP field
                                                                 loader_fw_security_version3, main_fw_security_version field reflects OTP field
                                                                 main_fw_security_version3. */
        uint32_t reserved_13_31        : 19;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_ehsm_biu_fw_security_version_s cn; */
};
typedef union cavm_ehsm_biu_fw_security_version cavm_ehsm_biu_fw_security_version_t;

#define CAVM_EHSM_BIU_FW_SECURITY_VERSION CAVM_EHSM_BIU_FW_SECURITY_VERSION_FUNC()
static inline uint64_t CAVM_EHSM_BIU_FW_SECURITY_VERSION_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_EHSM_BIU_FW_SECURITY_VERSION_FUNC(void)
{
    return 0x80b000000124ll;
}

#define typedef_CAVM_EHSM_BIU_FW_SECURITY_VERSION cavm_ehsm_biu_fw_security_version_t
#define bustype_CAVM_EHSM_BIU_FW_SECURITY_VERSION CSR_TYPE_NCB32b
#define basename_CAVM_EHSM_BIU_FW_SECURITY_VERSION "EHSM_BIU_FW_SECURITY_VERSION"
#define device_bar_CAVM_EHSM_BIU_FW_SECURITY_VERSION 0x0 /* PF_BAR0 */
#define busnum_CAVM_EHSM_BIU_FW_SECURITY_VERSION 0
#define arguments_CAVM_EHSM_BIU_FW_SECURITY_VERSION -1,-1,-1,-1

/**
 * Register (NCB32b) ehsm_biu_hst_except_addr
 *
 * EHSM Biu Hst Except Addr Register
 * This is the address that triggers HST_ADDR_RANGE in CORE1_HST_INTERRUPT_RST and
 * CORE2_HST_INTERRUPT_RST.
 */
union cavm_ehsm_biu_hst_except_addr
{
    uint32_t u;
    struct cavm_ehsm_biu_hst_except_addr_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t hst_except_addr       : 32; /**< [ 31:  0](RO) This is the address that triggers HST_ADDR_RANGE in CORE1_HST_INTERRUPT_RST and
                                                                 CORE2_HST_INTERRUPT_RST. */
#else /* Word 0 - Little Endian */
        uint32_t hst_except_addr       : 32; /**< [ 31:  0](RO) This is the address that triggers HST_ADDR_RANGE in CORE1_HST_INTERRUPT_RST and
                                                                 CORE2_HST_INTERRUPT_RST. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_ehsm_biu_hst_except_addr_s cn; */
};
typedef union cavm_ehsm_biu_hst_except_addr cavm_ehsm_biu_hst_except_addr_t;

#define CAVM_EHSM_BIU_HST_EXCEPT_ADDR CAVM_EHSM_BIU_HST_EXCEPT_ADDR_FUNC()
static inline uint64_t CAVM_EHSM_BIU_HST_EXCEPT_ADDR_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_EHSM_BIU_HST_EXCEPT_ADDR_FUNC(void)
{
    return 0x80b0000000d0ll;
}

#define typedef_CAVM_EHSM_BIU_HST_EXCEPT_ADDR cavm_ehsm_biu_hst_except_addr_t
#define bustype_CAVM_EHSM_BIU_HST_EXCEPT_ADDR CSR_TYPE_NCB32b
#define basename_CAVM_EHSM_BIU_HST_EXCEPT_ADDR "EHSM_BIU_HST_EXCEPT_ADDR"
#define device_bar_CAVM_EHSM_BIU_HST_EXCEPT_ADDR 0x0 /* PF_BAR0 */
#define busnum_CAVM_EHSM_BIU_HST_EXCEPT_ADDR 0
#define arguments_CAVM_EHSM_BIU_HST_EXCEPT_ADDR -1,-1,-1,-1

/**
 * Register (NCB32b) ehsm_biu_hst_trust
 *
 * EHSM Biu Hst Trust Register
 */
union cavm_ehsm_biu_hst_trust
{
    uint32_t u;
    struct cavm_ehsm_biu_hst_trust_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t hst_trust             : 32; /**< [ 31:  0](RO) Missing register field description. */
#else /* Word 0 - Little Endian */
        uint32_t hst_trust             : 32; /**< [ 31:  0](RO) Missing register field description. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_ehsm_biu_hst_trust_s cn; */
};
typedef union cavm_ehsm_biu_hst_trust cavm_ehsm_biu_hst_trust_t;

#define CAVM_EHSM_BIU_HST_TRUST CAVM_EHSM_BIU_HST_TRUST_FUNC()
static inline uint64_t CAVM_EHSM_BIU_HST_TRUST_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_EHSM_BIU_HST_TRUST_FUNC(void)
{
    return 0x80b0000000d4ll;
}

#define typedef_CAVM_EHSM_BIU_HST_TRUST cavm_ehsm_biu_hst_trust_t
#define bustype_CAVM_EHSM_BIU_HST_TRUST CSR_TYPE_NCB32b
#define basename_CAVM_EHSM_BIU_HST_TRUST "EHSM_BIU_HST_TRUST"
#define device_bar_CAVM_EHSM_BIU_HST_TRUST 0x0 /* PF_BAR0 */
#define busnum_CAVM_EHSM_BIU_HST_TRUST 0
#define arguments_CAVM_EHSM_BIU_HST_TRUST -1,-1,-1,-1

/**
 * Register (NCB32b) ehsm_biu_key_revoc_status
 *
 * EHSM Biu Key Revoc Status Register
 * This is for EHSM-78
 */
union cavm_ehsm_biu_key_revoc_status
{
    uint32_t u;
    struct cavm_ehsm_biu_key_revoc_status_s
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
    /* struct cavm_ehsm_biu_key_revoc_status_s cn; */
};
typedef union cavm_ehsm_biu_key_revoc_status cavm_ehsm_biu_key_revoc_status_t;

#define CAVM_EHSM_BIU_KEY_REVOC_STATUS CAVM_EHSM_BIU_KEY_REVOC_STATUS_FUNC()
static inline uint64_t CAVM_EHSM_BIU_KEY_REVOC_STATUS_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_EHSM_BIU_KEY_REVOC_STATUS_FUNC(void)
{
    return 0x80b000000120ll;
}

#define typedef_CAVM_EHSM_BIU_KEY_REVOC_STATUS cavm_ehsm_biu_key_revoc_status_t
#define bustype_CAVM_EHSM_BIU_KEY_REVOC_STATUS CSR_TYPE_NCB32b
#define basename_CAVM_EHSM_BIU_KEY_REVOC_STATUS "EHSM_BIU_KEY_REVOC_STATUS"
#define device_bar_CAVM_EHSM_BIU_KEY_REVOC_STATUS 0x0 /* PF_BAR0 */
#define busnum_CAVM_EHSM_BIU_KEY_REVOC_STATUS 0
#define arguments_CAVM_EHSM_BIU_KEY_REVOC_STATUS -1,-1,-1,-1

/**
 * Register (NCB32b) ehsm_biu_lcs_debug_port_status
 *
 * EHSM Biu Lcs Debug Port Status Register
 * This is for EHSM-78
 */
union cavm_ehsm_biu_lcs_debug_port_status
{
    uint32_t u;
    struct cavm_ehsm_biu_lcs_debug_port_status_s
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
    /* struct cavm_ehsm_biu_lcs_debug_port_status_s cn; */
};
typedef union cavm_ehsm_biu_lcs_debug_port_status cavm_ehsm_biu_lcs_debug_port_status_t;

#define CAVM_EHSM_BIU_LCS_DEBUG_PORT_STATUS CAVM_EHSM_BIU_LCS_DEBUG_PORT_STATUS_FUNC()
static inline uint64_t CAVM_EHSM_BIU_LCS_DEBUG_PORT_STATUS_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_EHSM_BIU_LCS_DEBUG_PORT_STATUS_FUNC(void)
{
    return 0x80b000000114ll;
}

#define typedef_CAVM_EHSM_BIU_LCS_DEBUG_PORT_STATUS cavm_ehsm_biu_lcs_debug_port_status_t
#define bustype_CAVM_EHSM_BIU_LCS_DEBUG_PORT_STATUS CSR_TYPE_NCB32b
#define basename_CAVM_EHSM_BIU_LCS_DEBUG_PORT_STATUS "EHSM_BIU_LCS_DEBUG_PORT_STATUS"
#define device_bar_CAVM_EHSM_BIU_LCS_DEBUG_PORT_STATUS 0x0 /* PF_BAR0 */
#define busnum_CAVM_EHSM_BIU_LCS_DEBUG_PORT_STATUS 0
#define arguments_CAVM_EHSM_BIU_LCS_DEBUG_PORT_STATUS -1,-1,-1,-1

/**
 * Register (NCB32b) ehsm_biu_remaining_config_status
 *
 * EHSM Biu Remaining Config Status Register
 * This is for EHSM-78
 */
union cavm_ehsm_biu_remaining_config_status
{
    uint32_t u;
    struct cavm_ehsm_biu_remaining_config_status_s
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
    /* struct cavm_ehsm_biu_remaining_config_status_s cn; */
};
typedef union cavm_ehsm_biu_remaining_config_status cavm_ehsm_biu_remaining_config_status_t;

#define CAVM_EHSM_BIU_REMAINING_CONFIG_STATUS CAVM_EHSM_BIU_REMAINING_CONFIG_STATUS_FUNC()
static inline uint64_t CAVM_EHSM_BIU_REMAINING_CONFIG_STATUS_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_EHSM_BIU_REMAINING_CONFIG_STATUS_FUNC(void)
{
    return 0x80b00000012cll;
}

#define typedef_CAVM_EHSM_BIU_REMAINING_CONFIG_STATUS cavm_ehsm_biu_remaining_config_status_t
#define bustype_CAVM_EHSM_BIU_REMAINING_CONFIG_STATUS CSR_TYPE_NCB32b
#define basename_CAVM_EHSM_BIU_REMAINING_CONFIG_STATUS "EHSM_BIU_REMAINING_CONFIG_STATUS"
#define device_bar_CAVM_EHSM_BIU_REMAINING_CONFIG_STATUS 0x0 /* PF_BAR0 */
#define busnum_CAVM_EHSM_BIU_REMAINING_CONFIG_STATUS 0
#define arguments_CAVM_EHSM_BIU_REMAINING_CONFIG_STATUS -1,-1,-1,-1

/**
 * Register (NCB32b) ehsm_biu_root_of_trust_status
 *
 * EHSM Biu Root Of Trust Status Register
 * This is for EHSM-78
 */
union cavm_ehsm_biu_root_of_trust_status
{
    uint32_t u;
    struct cavm_ehsm_biu_root_of_trust_status_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t reserved_28_31        : 4;
        uint32_t ebg_continuous_health_test_fail : 1;/**< [ 27: 27](RO) Indicates that EBG continuous health test fails.
                                                                 0: EBG continuous health test is successful.
                                                                 1: EBG continuous health test is failed. */
        uint32_t ebg_start_up_health_test_done : 1;/**< [ 26: 26](RO) Indicates whether rkek is provisioned.
                                                                 0: rkek is not provisioned, i.e. ecc_rkek are all 0.
                                                                 1: rkek is provisioned, i.e. not all ecc_rkek are 0. */
        uint32_t ebg_start_up_health_test_fail : 1;/**< [ 25: 25](RO) Indicates that EBG start up health test fails. It is only valid when
                                                                 EBG_start_up_health_test_done=1
                                                                 0: EBG start up health test is successful.
                                                                 1: EBG start up health test is failed. */
        uint32_t ehsm_panic_state      : 1;  /**< [ 24: 24](RO) Indicate EHSM is in panic state. It can be triggered by memory failure and power switch failure
                                                                 For memory failures:
                                                                 1. When EHSM is in FIPS mode, panic state is triggered by uncorrectable error
                                                                 detected during memory self test or run time.
                                                                 2. When EHSM is in non FIPS mode, panic state is triggered by uncorrectable
                                                                 error detected during memory self test only.
                                                                 For power switch failures.
                                                                 1. If enable_puf field in OTP efuse is 0, only SYSRDYP timeout of OTP power
                                                                 switch can trigger panic state.
                                                                 2. If enable_puf field in OTP efuse is 1, SYSRDYP timeout of both OTP and PUF
                                                                 power switch can trigger panic state. */
        uint32_t reserved_21_23        : 3;
        uint32_t rkek_provisioned      : 1;  /**< [ 20: 20](RO) Indicates whether rkek is provisioned.
                                                                 0: rkek is not provisioned, i.e. ecc_rkek are all 0.
                                                                 1: rkek is provisioned, i.e. not all ecc_rkek are 0. */
        uint32_t uds_provisioned       : 1;  /**< [ 19: 19](RO) Indicates whether uds is provisioned.
                                                                 0: uds is not provisioned, i.e. ecc_uds are all 0.
                                                                 1: uds is provisioned, i.e. not all ecc_uds are 0. */
        uint32_t l0_fw_aes_key3_provisioned : 1;/**< [ 18: 18](RO) Indicates whether L0_fw_aes_key3 is provisioned.
                                                                 0: L0_fw_aes_key3 is not provisioned, i.e. ecc_L0_fw_aes_key3 are all 0.
                                                                 1: L0_fw_aes_key3 is provisioned, i.e. not all ecc_L0_fw_aes_key3 are 0. */
        uint32_t l0_fw_aes_key2_provisioned : 1;/**< [ 17: 17](RO) Indicates whether L0_fw_aes_key2 is provisioned.
                                                                 0: L0_fw_aes_key2 is not provisioned, i.e. ecc_L0_fw_aes_key2 are all 0.
                                                                 1: L0_fw_aes_key2 is provisioned, i.e. not all ecc_L0_fw_aes_key2 are 0. */
        uint32_t l0_fw_aes_key1_provisioned : 1;/**< [ 16: 16](RO) Indicates whether L0_fw_aes_key1 is provisioned.
                                                                 0: L0_fw_aes_key1 is not provisioned, i.e. ecc_L0_fw_aes_key1 are all 0.
                                                                 1: L0_fw_aes_key1 is provisioned, i.e. not all ecc_L0_fw_aes_key1 are 0. */
        uint32_t l0_fw_aes_key0_provisioned : 1;/**< [ 15: 15](RO) Indicates whether L0_fw_aes_key0 is provisioned.
                                                                 0: L0_fw_aes_key0 is not provisioned, i.e. ecc_L0_fw_aes_key0 are all 0.
                                                                 1: L0_fw_aes_key0 is provisioned, i.e. not all ecc_L0_fw_aes_key0 are 0. */
        uint32_t kak3_binding_digest_provisioned : 1;/**< [ 14: 14](RO) Indicates whether kak3_binding_digest is provisioned.
                                                                 0: kak3_binding_digest is not provisioned, i.e. ecc_kak3_binding_digest are all 0.
                                                                 1: kak3_binding_digest is provisioned, i.e. not all ecc_kak3_binding_digest are 0. */
        uint32_t kak2_binding_digest_provisioned : 1;/**< [ 13: 13](RO) Indicates whether kak2_binding_digest is provisioned
                                                                 0: kak2_binding_digest is not provisioned, i.e. ecc_kak2_binding_digest are all 0.
                                                                 1: kak2_binding_digest is provisioned, i.e. not all ecc_kak2_binding_digest are 0. */
        uint32_t kak1_binding_digest_provisioned : 1;/**< [ 12: 12](RO) Indicates whether kak1_binding_digest is provisioned.
                                                                 0: kak1_binding_digest is not provisioned, i.e. ecc_kak1_binding_digest are all 0.
                                                                 1: kak1_binding_digest is provisioned, i.e. not all ecc_kak1_binding_digest are 0. */
        uint32_t kak0_binding_digest_provisioned : 1;/**< [ 11: 11](RO) Indicates whether kak0_binding_digest is provisioned.
                                                                 0: kak0_binding_digest is not provisioned, i.e. ecc_kak0_binding_digest are all 0.
                                                                 1: kak0_binding_digest is provisioned, i.e. not all ecc_kak0_binding_digest are 0. */
        uint32_t auth_cmd_mode         : 1;  /**< [ 10: 10](RO) This is the shadow register for auth_cmd_mode field from OTP. */
        uint32_t disable_ehsm_crypto   : 1;  /**< [  9:  9](RO) This is the shadow register for disable_bcm_crypto field from OTP. */
        uint32_t disable_ehsm_self_test : 1; /**< [  8:  8](RO) This is the shadow register for disable_bcm_self_test field from OTP. */
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
        uint32_t disable_ehsm_self_test : 1; /**< [  8:  8](RO) This is the shadow register for disable_bcm_self_test field from OTP. */
        uint32_t disable_ehsm_crypto   : 1;  /**< [  9:  9](RO) This is the shadow register for disable_bcm_crypto field from OTP. */
        uint32_t auth_cmd_mode         : 1;  /**< [ 10: 10](RO) This is the shadow register for auth_cmd_mode field from OTP. */
        uint32_t kak0_binding_digest_provisioned : 1;/**< [ 11: 11](RO) Indicates whether kak0_binding_digest is provisioned.
                                                                 0: kak0_binding_digest is not provisioned, i.e. ecc_kak0_binding_digest are all 0.
                                                                 1: kak0_binding_digest is provisioned, i.e. not all ecc_kak0_binding_digest are 0. */
        uint32_t kak1_binding_digest_provisioned : 1;/**< [ 12: 12](RO) Indicates whether kak1_binding_digest is provisioned.
                                                                 0: kak1_binding_digest is not provisioned, i.e. ecc_kak1_binding_digest are all 0.
                                                                 1: kak1_binding_digest is provisioned, i.e. not all ecc_kak1_binding_digest are 0. */
        uint32_t kak2_binding_digest_provisioned : 1;/**< [ 13: 13](RO) Indicates whether kak2_binding_digest is provisioned
                                                                 0: kak2_binding_digest is not provisioned, i.e. ecc_kak2_binding_digest are all 0.
                                                                 1: kak2_binding_digest is provisioned, i.e. not all ecc_kak2_binding_digest are 0. */
        uint32_t kak3_binding_digest_provisioned : 1;/**< [ 14: 14](RO) Indicates whether kak3_binding_digest is provisioned.
                                                                 0: kak3_binding_digest is not provisioned, i.e. ecc_kak3_binding_digest are all 0.
                                                                 1: kak3_binding_digest is provisioned, i.e. not all ecc_kak3_binding_digest are 0. */
        uint32_t l0_fw_aes_key0_provisioned : 1;/**< [ 15: 15](RO) Indicates whether L0_fw_aes_key0 is provisioned.
                                                                 0: L0_fw_aes_key0 is not provisioned, i.e. ecc_L0_fw_aes_key0 are all 0.
                                                                 1: L0_fw_aes_key0 is provisioned, i.e. not all ecc_L0_fw_aes_key0 are 0. */
        uint32_t l0_fw_aes_key1_provisioned : 1;/**< [ 16: 16](RO) Indicates whether L0_fw_aes_key1 is provisioned.
                                                                 0: L0_fw_aes_key1 is not provisioned, i.e. ecc_L0_fw_aes_key1 are all 0.
                                                                 1: L0_fw_aes_key1 is provisioned, i.e. not all ecc_L0_fw_aes_key1 are 0. */
        uint32_t l0_fw_aes_key2_provisioned : 1;/**< [ 17: 17](RO) Indicates whether L0_fw_aes_key2 is provisioned.
                                                                 0: L0_fw_aes_key2 is not provisioned, i.e. ecc_L0_fw_aes_key2 are all 0.
                                                                 1: L0_fw_aes_key2 is provisioned, i.e. not all ecc_L0_fw_aes_key2 are 0. */
        uint32_t l0_fw_aes_key3_provisioned : 1;/**< [ 18: 18](RO) Indicates whether L0_fw_aes_key3 is provisioned.
                                                                 0: L0_fw_aes_key3 is not provisioned, i.e. ecc_L0_fw_aes_key3 are all 0.
                                                                 1: L0_fw_aes_key3 is provisioned, i.e. not all ecc_L0_fw_aes_key3 are 0. */
        uint32_t uds_provisioned       : 1;  /**< [ 19: 19](RO) Indicates whether uds is provisioned.
                                                                 0: uds is not provisioned, i.e. ecc_uds are all 0.
                                                                 1: uds is provisioned, i.e. not all ecc_uds are 0. */
        uint32_t rkek_provisioned      : 1;  /**< [ 20: 20](RO) Indicates whether rkek is provisioned.
                                                                 0: rkek is not provisioned, i.e. ecc_rkek are all 0.
                                                                 1: rkek is provisioned, i.e. not all ecc_rkek are 0. */
        uint32_t reserved_21_23        : 3;
        uint32_t ehsm_panic_state      : 1;  /**< [ 24: 24](RO) Indicate EHSM is in panic state. It can be triggered by memory failure and power switch failure
                                                                 For memory failures:
                                                                 1. When EHSM is in FIPS mode, panic state is triggered by uncorrectable error
                                                                 detected during memory self test or run time.
                                                                 2. When EHSM is in non FIPS mode, panic state is triggered by uncorrectable
                                                                 error detected during memory self test only.
                                                                 For power switch failures.
                                                                 1. If enable_puf field in OTP efuse is 0, only SYSRDYP timeout of OTP power
                                                                 switch can trigger panic state.
                                                                 2. If enable_puf field in OTP efuse is 1, SYSRDYP timeout of both OTP and PUF
                                                                 power switch can trigger panic state. */
        uint32_t ebg_start_up_health_test_fail : 1;/**< [ 25: 25](RO) Indicates that EBG start up health test fails. It is only valid when
                                                                 EBG_start_up_health_test_done=1
                                                                 0: EBG start up health test is successful.
                                                                 1: EBG start up health test is failed. */
        uint32_t ebg_start_up_health_test_done : 1;/**< [ 26: 26](RO) Indicates whether rkek is provisioned.
                                                                 0: rkek is not provisioned, i.e. ecc_rkek are all 0.
                                                                 1: rkek is provisioned, i.e. not all ecc_rkek are 0. */
        uint32_t ebg_continuous_health_test_fail : 1;/**< [ 27: 27](RO) Indicates that EBG continuous health test fails.
                                                                 0: EBG continuous health test is successful.
                                                                 1: EBG continuous health test is failed. */
        uint32_t reserved_28_31        : 4;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_ehsm_biu_root_of_trust_status_s cn; */
};
typedef union cavm_ehsm_biu_root_of_trust_status cavm_ehsm_biu_root_of_trust_status_t;

#define CAVM_EHSM_BIU_ROOT_OF_TRUST_STATUS CAVM_EHSM_BIU_ROOT_OF_TRUST_STATUS_FUNC()
static inline uint64_t CAVM_EHSM_BIU_ROOT_OF_TRUST_STATUS_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_EHSM_BIU_ROOT_OF_TRUST_STATUS_FUNC(void)
{
    return 0x80b00000011cll;
}

#define typedef_CAVM_EHSM_BIU_ROOT_OF_TRUST_STATUS cavm_ehsm_biu_root_of_trust_status_t
#define bustype_CAVM_EHSM_BIU_ROOT_OF_TRUST_STATUS CSR_TYPE_NCB32b
#define basename_CAVM_EHSM_BIU_ROOT_OF_TRUST_STATUS "EHSM_BIU_ROOT_OF_TRUST_STATUS"
#define device_bar_CAVM_EHSM_BIU_ROOT_OF_TRUST_STATUS 0x0 /* PF_BAR0 */
#define busnum_CAVM_EHSM_BIU_ROOT_OF_TRUST_STATUS 0
#define arguments_CAVM_EHSM_BIU_ROOT_OF_TRUST_STATUS -1,-1,-1,-1

/**
 * Register (NCB32b) ehsm_biu_shadow_reg_status
 *
 * EHSM Biu Shadow Reg Status Register
 */
union cavm_ehsm_biu_shadow_reg_status
{
    uint32_t u;
    struct cavm_ehsm_biu_shadow_reg_status_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t reserved_20_31        : 12;
        uint32_t otp_sysrdyp_fall      : 1;  /**< [ 19: 19](RO) Falling edge is detected on SYSRDYP of OTP power switch. */
        uint32_t otp_sysrdyp_timeout   : 1;  /**< [ 18: 18](RO) Timeout happened to SYSRDYP of OTP power switch. */
        uint32_t puf_sysrdyp_fall      : 1;  /**< [ 17: 17](RO) Falling edge is detected on SYSRDYP of PUF power switch. */
        uint32_t puf_sysrdyp_timeout   : 1;  /**< [ 16: 16](RO) Timeout happen to SYSRDYP of PUF power switch. */
        uint32_t puf_key_aging_test_unavailable : 1;/**< [ 15: 15](RO) Uncorrectable error in puk_key_digest field in OTP, so PUF
                                                                 key aging test is not available. */
        uint32_t puf_key_aging_test_error : 1;/**< [ 14: 14](RO) PUF key aging test fails. */
        uint32_t puf_key_aging_test_done : 1;/**< [ 13: 13](RO) PUF key aging test is done. */
        uint32_t dormant_activation_status : 1;/**< [ 12: 12](RO) It drives bcm_otp_dormant_activation_status. It is written by CM3
                                                                 This field is reserved for CNXXXX. */
        uint32_t dormant_enable        : 1;  /**< [ 11: 11](RO) It is driven by bcm_otp_dormant_enable input. It indicate if dormant is enabled by host
                                                                 This field is reserved for CNXXXX. */
        uint32_t reserved_10           : 1;
        uint32_t spad_mem_fail         : 1;  /**< [  9:  9](RO) SPAD memory detects uncorrectable error. */
        uint32_t cm3_ram_fail          : 1;  /**< [  8:  8](RO) CM3 RAM detects uncorrectable error. */
        uint32_t cm3_rom_fail          : 1;  /**< [  7:  7](RO) CM3 ROM detects uncorrectable error. */
        uint32_t clk_gate              : 1;  /**< [  6:  6](RO) 0: EHSM input clock was running.
                                                                 1: EHSM input clock was gated.
                                                                 EHSM-61. */
        uint32_t vdd_gate              : 1;  /**< [  5:  5](RO) 0: VDD was on.
                                                                 1: VDD was off.
                                                                 EHSM-61. */
        uint32_t cm3_sram_sd           : 1;  /**< [  4:  4](RO) 0: CM3 SRAM was in retention mode.
                                                                 1: CM3 SRAM was in shutdown mode.
                                                                 EHSM-61. */
        uint32_t cm3_sleepdeep         : 1;  /**< [  3:  3](RO) Connected with SLEEPDEEP output of CM3. Indicate whether CM3 is in deep sleep state
                                                                 EHSM-42. */
        uint32_t cm3_sleeping          : 1;  /**< [  2:  2](RO) Connected with SLEEPING output of CM3. Indicate whether CM3 is in sleep state
                                                                 EHSM-42. */
        uint32_t lcs_all_valid         : 1;  /**< [  1:  1](RO) Indication of whether all the OTP shadow registers including
                                                                 LCS_DEBUG_PORT_STATUS, BOOTROM_CONFIG_STATUS, ROOT_OF_TRUST_STATUS,
                                                                 KEY_REVOC_STATUS, FW_SECURITY_VERSION, BOOT_STRAP_PIN_STATUS,
                                                                 REMAININIG_CONFIG_STATUS are ready to be read.
                                                                 When it is 1, user can read LCS_DEBUG_PORT_STATUS, BOOTROM_CONFIG_STATUS,
                                                                 ROOT_OF_TRUST_STATUS, KEY_REVOC_STATUS, FW_SECURITY_VERSION,
                                                                 BOOT_STRAP_PIN_STATUS, REMAININIG_CONFIG_STATUS. When it is 0, these registers
                                                                 are invalid. */
        uint32_t lcs_phase1_valid      : 1;  /**< [  0:  0](RO) Indication of whether LCS_DEBUG_PORT_STATUS, BOOTROM_CONFIG_STATUS,
                                                                 ROOT_OF_TRUST_STATUS, KEY_REVOC_STATUS, BOOT_STRAP_PIN_STATUS,
                                                                 REMAININIG_CONFIG_STATUS are ready to be read.
                                                                 When it is 1, user can read LCS_DEBUG_PORT_STATUS, BOOTROM_CONFIG_STATUS,
                                                                 ROOT_OF_TRUST_STATUS, KEY_REVOC_STATUS, BOOT_STRAP_PIN_STATUS,
                                                                 REMAININIG_CONFIG_STATUS. When it is 0, these registers are invalid. */
#else /* Word 0 - Little Endian */
        uint32_t lcs_phase1_valid      : 1;  /**< [  0:  0](RO) Indication of whether LCS_DEBUG_PORT_STATUS, BOOTROM_CONFIG_STATUS,
                                                                 ROOT_OF_TRUST_STATUS, KEY_REVOC_STATUS, BOOT_STRAP_PIN_STATUS,
                                                                 REMAININIG_CONFIG_STATUS are ready to be read.
                                                                 When it is 1, user can read LCS_DEBUG_PORT_STATUS, BOOTROM_CONFIG_STATUS,
                                                                 ROOT_OF_TRUST_STATUS, KEY_REVOC_STATUS, BOOT_STRAP_PIN_STATUS,
                                                                 REMAININIG_CONFIG_STATUS. When it is 0, these registers are invalid. */
        uint32_t lcs_all_valid         : 1;  /**< [  1:  1](RO) Indication of whether all the OTP shadow registers including
                                                                 LCS_DEBUG_PORT_STATUS, BOOTROM_CONFIG_STATUS, ROOT_OF_TRUST_STATUS,
                                                                 KEY_REVOC_STATUS, FW_SECURITY_VERSION, BOOT_STRAP_PIN_STATUS,
                                                                 REMAININIG_CONFIG_STATUS are ready to be read.
                                                                 When it is 1, user can read LCS_DEBUG_PORT_STATUS, BOOTROM_CONFIG_STATUS,
                                                                 ROOT_OF_TRUST_STATUS, KEY_REVOC_STATUS, FW_SECURITY_VERSION,
                                                                 BOOT_STRAP_PIN_STATUS, REMAININIG_CONFIG_STATUS. When it is 0, these registers
                                                                 are invalid. */
        uint32_t cm3_sleeping          : 1;  /**< [  2:  2](RO) Connected with SLEEPING output of CM3. Indicate whether CM3 is in sleep state
                                                                 EHSM-42. */
        uint32_t cm3_sleepdeep         : 1;  /**< [  3:  3](RO) Connected with SLEEPDEEP output of CM3. Indicate whether CM3 is in deep sleep state
                                                                 EHSM-42. */
        uint32_t cm3_sram_sd           : 1;  /**< [  4:  4](RO) 0: CM3 SRAM was in retention mode.
                                                                 1: CM3 SRAM was in shutdown mode.
                                                                 EHSM-61. */
        uint32_t vdd_gate              : 1;  /**< [  5:  5](RO) 0: VDD was on.
                                                                 1: VDD was off.
                                                                 EHSM-61. */
        uint32_t clk_gate              : 1;  /**< [  6:  6](RO) 0: EHSM input clock was running.
                                                                 1: EHSM input clock was gated.
                                                                 EHSM-61. */
        uint32_t cm3_rom_fail          : 1;  /**< [  7:  7](RO) CM3 ROM detects uncorrectable error. */
        uint32_t cm3_ram_fail          : 1;  /**< [  8:  8](RO) CM3 RAM detects uncorrectable error. */
        uint32_t spad_mem_fail         : 1;  /**< [  9:  9](RO) SPAD memory detects uncorrectable error. */
        uint32_t reserved_10           : 1;
        uint32_t dormant_enable        : 1;  /**< [ 11: 11](RO) It is driven by bcm_otp_dormant_enable input. It indicate if dormant is enabled by host
                                                                 This field is reserved for CNXXXX. */
        uint32_t dormant_activation_status : 1;/**< [ 12: 12](RO) It drives bcm_otp_dormant_activation_status. It is written by CM3
                                                                 This field is reserved for CNXXXX. */
        uint32_t puf_key_aging_test_done : 1;/**< [ 13: 13](RO) PUF key aging test is done. */
        uint32_t puf_key_aging_test_error : 1;/**< [ 14: 14](RO) PUF key aging test fails. */
        uint32_t puf_key_aging_test_unavailable : 1;/**< [ 15: 15](RO) Uncorrectable error in puk_key_digest field in OTP, so PUF
                                                                 key aging test is not available. */
        uint32_t puf_sysrdyp_timeout   : 1;  /**< [ 16: 16](RO) Timeout happen to SYSRDYP of PUF power switch. */
        uint32_t puf_sysrdyp_fall      : 1;  /**< [ 17: 17](RO) Falling edge is detected on SYSRDYP of PUF power switch. */
        uint32_t otp_sysrdyp_timeout   : 1;  /**< [ 18: 18](RO) Timeout happened to SYSRDYP of OTP power switch. */
        uint32_t otp_sysrdyp_fall      : 1;  /**< [ 19: 19](RO) Falling edge is detected on SYSRDYP of OTP power switch. */
        uint32_t reserved_20_31        : 12;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_ehsm_biu_shadow_reg_status_s cn; */
};
typedef union cavm_ehsm_biu_shadow_reg_status cavm_ehsm_biu_shadow_reg_status_t;

#define CAVM_EHSM_BIU_SHADOW_REG_STATUS CAVM_EHSM_BIU_SHADOW_REG_STATUS_FUNC()
static inline uint64_t CAVM_EHSM_BIU_SHADOW_REG_STATUS_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_EHSM_BIU_SHADOW_REG_STATUS_FUNC(void)
{
    return 0x80b000000100ll;
}

#define typedef_CAVM_EHSM_BIU_SHADOW_REG_STATUS cavm_ehsm_biu_shadow_reg_status_t
#define bustype_CAVM_EHSM_BIU_SHADOW_REG_STATUS CSR_TYPE_NCB32b
#define basename_CAVM_EHSM_BIU_SHADOW_REG_STATUS "EHSM_BIU_SHADOW_REG_STATUS"
#define device_bar_CAVM_EHSM_BIU_SHADOW_REG_STATUS 0x0 /* PF_BAR0 */
#define busnum_CAVM_EHSM_BIU_SHADOW_REG_STATUS 0
#define arguments_CAVM_EHSM_BIU_SHADOW_REG_STATUS -1,-1,-1,-1

/**
 * Register (NCB32b) ehsm_biu_uuid_0
 *
 * EHSM Biu Uuid 0 Register
 * This register saves bit 31~0 of UUID.
 * This is for EHSM-32.
 */
union cavm_ehsm_biu_uuid_0
{
    uint32_t u;
    struct cavm_ehsm_biu_uuid_0_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t uuid_0                : 32; /**< [ 31:  0](RO) This register saves bit 31~0 of UUID.
                                                                 This is for EHSM-32. */
#else /* Word 0 - Little Endian */
        uint32_t uuid_0                : 32; /**< [ 31:  0](RO) This register saves bit 31~0 of UUID.
                                                                 This is for EHSM-32. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_ehsm_biu_uuid_0_s cn; */
};
typedef union cavm_ehsm_biu_uuid_0 cavm_ehsm_biu_uuid_0_t;

#define CAVM_EHSM_BIU_UUID_0 CAVM_EHSM_BIU_UUID_0_FUNC()
static inline uint64_t CAVM_EHSM_BIU_UUID_0_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_EHSM_BIU_UUID_0_FUNC(void)
{
    return 0x80b000000104ll;
}

#define typedef_CAVM_EHSM_BIU_UUID_0 cavm_ehsm_biu_uuid_0_t
#define bustype_CAVM_EHSM_BIU_UUID_0 CSR_TYPE_NCB32b
#define basename_CAVM_EHSM_BIU_UUID_0 "EHSM_BIU_UUID_0"
#define device_bar_CAVM_EHSM_BIU_UUID_0 0x0 /* PF_BAR0 */
#define busnum_CAVM_EHSM_BIU_UUID_0 0
#define arguments_CAVM_EHSM_BIU_UUID_0 -1,-1,-1,-1

/**
 * Register (NCB32b) ehsm_biu_uuid_1
 *
 * EHSM Biu Uuid 1 Register
 * This register saves bit 63~32 of UUID.
 * This is for EHSM-32.
 */
union cavm_ehsm_biu_uuid_1
{
    uint32_t u;
    struct cavm_ehsm_biu_uuid_1_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t uuid_1                : 32; /**< [ 31:  0](RO) This register saves bit 63~32 of UUID.
                                                                 This is for EHSM-32. */
#else /* Word 0 - Little Endian */
        uint32_t uuid_1                : 32; /**< [ 31:  0](RO) This register saves bit 63~32 of UUID.
                                                                 This is for EHSM-32. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_ehsm_biu_uuid_1_s cn; */
};
typedef union cavm_ehsm_biu_uuid_1 cavm_ehsm_biu_uuid_1_t;

#define CAVM_EHSM_BIU_UUID_1 CAVM_EHSM_BIU_UUID_1_FUNC()
static inline uint64_t CAVM_EHSM_BIU_UUID_1_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_EHSM_BIU_UUID_1_FUNC(void)
{
    return 0x80b000000108ll;
}

#define typedef_CAVM_EHSM_BIU_UUID_1 cavm_ehsm_biu_uuid_1_t
#define bustype_CAVM_EHSM_BIU_UUID_1 CSR_TYPE_NCB32b
#define basename_CAVM_EHSM_BIU_UUID_1 "EHSM_BIU_UUID_1"
#define device_bar_CAVM_EHSM_BIU_UUID_1 0x0 /* PF_BAR0 */
#define busnum_CAVM_EHSM_BIU_UUID_1 0
#define arguments_CAVM_EHSM_BIU_UUID_1 -1,-1,-1,-1

/**
 * Register (NCB32b) ehsm_biu_uuid_2
 *
 * EHSM Biu Uuid 2 Register
 * This register saves bit 95~64 of UUID.
 * This is for EHSM-32.
 */
union cavm_ehsm_biu_uuid_2
{
    uint32_t u;
    struct cavm_ehsm_biu_uuid_2_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t uuid_2                : 32; /**< [ 31:  0](RO) This register saves bit 95~64 of UUID.
                                                                 This is for EHSM-32. */
#else /* Word 0 - Little Endian */
        uint32_t uuid_2                : 32; /**< [ 31:  0](RO) This register saves bit 95~64 of UUID.
                                                                 This is for EHSM-32. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_ehsm_biu_uuid_2_s cn; */
};
typedef union cavm_ehsm_biu_uuid_2 cavm_ehsm_biu_uuid_2_t;

#define CAVM_EHSM_BIU_UUID_2 CAVM_EHSM_BIU_UUID_2_FUNC()
static inline uint64_t CAVM_EHSM_BIU_UUID_2_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_EHSM_BIU_UUID_2_FUNC(void)
{
    return 0x80b00000010cll;
}

#define typedef_CAVM_EHSM_BIU_UUID_2 cavm_ehsm_biu_uuid_2_t
#define bustype_CAVM_EHSM_BIU_UUID_2 CSR_TYPE_NCB32b
#define basename_CAVM_EHSM_BIU_UUID_2 "EHSM_BIU_UUID_2"
#define device_bar_CAVM_EHSM_BIU_UUID_2 0x0 /* PF_BAR0 */
#define busnum_CAVM_EHSM_BIU_UUID_2 0
#define arguments_CAVM_EHSM_BIU_UUID_2 -1,-1,-1,-1

/**
 * Register (NCB32b) ehsm_biu_uuid_status
 *
 * EHSM Biu Uuid Status Register
 * This register saves the status of UUID.
 * This is for EHSM-32
 */
union cavm_ehsm_biu_uuid_status
{
    uint32_t u;
    struct cavm_ehsm_biu_uuid_status_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t reserved_3_31         : 29;
        uint32_t no_correction         : 1;  /**< [  2:  2](RO) When it is 1, external_uuid_ecc_in are all 0s so no error correction is needed.
                                                                 UUID_0~2 will store the raw value of external_uuid_in. */
        uint32_t uncorrectable_error   : 1;  /**< [  1:  1](RO) It is only valid when CORRECTION_DONE is 1.
                                                                 1 = There is uncorrectable error in UUID. UUID_0~2 are invalid.
                                                                 0 = UUID error correction is successful. Error corrected UUID is stored in UUID_0~2. */
        uint32_t correction_done       : 1;  /**< [  0:  0](RO) When it is 1, HW finished error correction for UUID. User need to check
                                                                 UNCORRECTABLE_ERROR to see if error correction succeed.
                                                                 If UNCORRECTABLE_ERROR=0, UUID error correction is successful, error corrected
                                                                 UUID is stored in UUID_0~2 and ready to be read by host.
                                                                 If UNCORRECTABLE_ERROR=1, UUID error correction failed, the value in UUID_0~2 are invalid. */
#else /* Word 0 - Little Endian */
        uint32_t correction_done       : 1;  /**< [  0:  0](RO) When it is 1, HW finished error correction for UUID. User need to check
                                                                 UNCORRECTABLE_ERROR to see if error correction succeed.
                                                                 If UNCORRECTABLE_ERROR=0, UUID error correction is successful, error corrected
                                                                 UUID is stored in UUID_0~2 and ready to be read by host.
                                                                 If UNCORRECTABLE_ERROR=1, UUID error correction failed, the value in UUID_0~2 are invalid. */
        uint32_t uncorrectable_error   : 1;  /**< [  1:  1](RO) It is only valid when CORRECTION_DONE is 1.
                                                                 1 = There is uncorrectable error in UUID. UUID_0~2 are invalid.
                                                                 0 = UUID error correction is successful. Error corrected UUID is stored in UUID_0~2. */
        uint32_t no_correction         : 1;  /**< [  2:  2](RO) When it is 1, external_uuid_ecc_in are all 0s so no error correction is needed.
                                                                 UUID_0~2 will store the raw value of external_uuid_in. */
        uint32_t reserved_3_31         : 29;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_ehsm_biu_uuid_status_s cn; */
};
typedef union cavm_ehsm_biu_uuid_status cavm_ehsm_biu_uuid_status_t;

#define CAVM_EHSM_BIU_UUID_STATUS CAVM_EHSM_BIU_UUID_STATUS_FUNC()
static inline uint64_t CAVM_EHSM_BIU_UUID_STATUS_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_EHSM_BIU_UUID_STATUS_FUNC(void)
{
    return 0x80b0000000fcll;
}

#define typedef_CAVM_EHSM_BIU_UUID_STATUS cavm_ehsm_biu_uuid_status_t
#define bustype_CAVM_EHSM_BIU_UUID_STATUS CSR_TYPE_NCB32b
#define basename_CAVM_EHSM_BIU_UUID_STATUS "EHSM_BIU_UUID_STATUS"
#define device_bar_CAVM_EHSM_BIU_UUID_STATUS 0x0 /* PF_BAR0 */
#define busnum_CAVM_EHSM_BIU_UUID_STATUS 0
#define arguments_CAVM_EHSM_BIU_UUID_STATUS -1,-1,-1,-1

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
                                                                 that have no associated EHSM_INT_VEC_E are 0. */
#else /* Word 0 - Little Endian */
        uint64_t pend                  : 64; /**< [ 63:  0](RO/H) Pending message for the associated EHSM_MSIX_VEC()_CTL, enumerated by EHSM_INT_VEC_E. Bits
                                                                 that have no associated EHSM_INT_VEC_E are 0. */
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
 * Register (NCB32b) ehsm_side_sensor_status
 *
 * EHSM CPC Side Sensor Status Register
 */
union cavm_ehsm_side_sensor_status
{
    uint32_t u;
    struct cavm_ehsm_side_sensor_status_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t reserved_14_31        : 18;
        uint32_t sensors_pre_qualifier : 6;  /**< [ 13:  8](RO/H) This field will be asserted even if fuses masking the sensor.
                                                                 Bit 0 - clock detect frequency.
                                                                 Bit 1 - clock detect pulse.
                                                                 Bit 2 - thermal attack.
                                                                 Bit 3 - Low Voltage Detect VDIS.
                                                                 Bit 4 - Low Voltage Detect VCORE.
                                                                 Bit 5 - Low Voltage Detect VSYS. */
        uint32_t reserved_6_7          : 2;
        uint32_t sensors               : 6;  /**< [  5:  0](RO/H) Bit 0 - clock detect frequency.
                                                                 Bit 1 - clock detect pulse.
                                                                 Bit 2 - thermal attack.
                                                                 Bit 3 - Low Voltage Detect VDIS.
                                                                 Bit 4 - Low Voltage Detect VCORE.
                                                                 Bit 5 - Low Voltage Detect VSYS. */
#else /* Word 0 - Little Endian */
        uint32_t sensors               : 6;  /**< [  5:  0](RO/H) Bit 0 - clock detect frequency.
                                                                 Bit 1 - clock detect pulse.
                                                                 Bit 2 - thermal attack.
                                                                 Bit 3 - Low Voltage Detect VDIS.
                                                                 Bit 4 - Low Voltage Detect VCORE.
                                                                 Bit 5 - Low Voltage Detect VSYS. */
        uint32_t reserved_6_7          : 2;
        uint32_t sensors_pre_qualifier : 6;  /**< [ 13:  8](RO/H) This field will be asserted even if fuses masking the sensor.
                                                                 Bit 0 - clock detect frequency.
                                                                 Bit 1 - clock detect pulse.
                                                                 Bit 2 - thermal attack.
                                                                 Bit 3 - Low Voltage Detect VDIS.
                                                                 Bit 4 - Low Voltage Detect VCORE.
                                                                 Bit 5 - Low Voltage Detect VSYS. */
        uint32_t reserved_14_31        : 18;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_ehsm_side_sensor_status_s cn; */
};
typedef union cavm_ehsm_side_sensor_status cavm_ehsm_side_sensor_status_t;

#define CAVM_EHSM_SIDE_SENSOR_STATUS CAVM_EHSM_SIDE_SENSOR_STATUS_FUNC()
static inline uint64_t CAVM_EHSM_SIDE_SENSOR_STATUS_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_EHSM_SIDE_SENSOR_STATUS_FUNC(void)
{
    return 0x80b000004028ll;
}

#define typedef_CAVM_EHSM_SIDE_SENSOR_STATUS cavm_ehsm_side_sensor_status_t
#define bustype_CAVM_EHSM_SIDE_SENSOR_STATUS CSR_TYPE_NCB32b
#define basename_CAVM_EHSM_SIDE_SENSOR_STATUS "EHSM_SIDE_SENSOR_STATUS"
#define device_bar_CAVM_EHSM_SIDE_SENSOR_STATUS 0x0 /* PF_BAR0 */
#define busnum_CAVM_EHSM_SIDE_SENSOR_STATUS 0
#define arguments_CAVM_EHSM_SIDE_SENSOR_STATUS -1,-1,-1,-1

/**
 * Register (NCB32b) ehsm_sw_sensor
 *
 * EHSM CPC Software Sensor Register
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

#endif /* __CAVM_CSRS_EHSM_H__ */
