#ifndef __CAVM_CSRS_EHSM_H__
#define __CAVM_CSRS_EHSM_H__
/* This file is auto-generated. Do not edit */

/***********************license start***********************************
* Copyright (C) 2021-2024 Marvell.
* SPDX-License-Identifier: BSD-3-Clause
* https://spdx.org/licenses
***********************license end**************************************/


/**
 * @file
 *
 * Configuration and status register (CSR) address and type definitions for
 * EHSM.
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

/**
 * Register (NCB32b) ehsm_auxiliary_otp_status
 *
 * EHSM Auxiliary Otp Status Register
 */
union cavm_ehsm_auxiliary_otp_status
{
    uint32_t u;
    struct cavm_ehsm_auxiliary_otp_status_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t sp_rsvd               : 2;  /**< [ 31: 30](RO) Missing register field description. */
        uint32_t rs_mvb0_to_28         : 29; /**< [ 29:  1](RO) This is the shadow register for bit 0~28 of the reserved majority voted bits in OTP */
        uint32_t efuse_mfg_qa          : 1;  /**< [  0:  0](RO) This is the shadow register for efuse_mfg_qa field from OTP. */
#else /* Word 0 - Little Endian */
        uint32_t efuse_mfg_qa          : 1;  /**< [  0:  0](RO) This is the shadow register for efuse_mfg_qa field from OTP. */
        uint32_t rs_mvb0_to_28         : 29; /**< [ 29:  1](RO) This is the shadow register for bit 0~28 of the reserved majority voted bits in OTP */
        uint32_t sp_rsvd               : 2;  /**< [ 31: 30](RO) Missing register field description. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_ehsm_auxiliary_otp_status_s cn; */
};
typedef union cavm_ehsm_auxiliary_otp_status cavm_ehsm_auxiliary_otp_status_t;

#define CAVM_EHSM_AUXILIARY_OTP_STATUS CAVM_EHSM_AUXILIARY_OTP_STATUS_FUNC()
static inline uint64_t CAVM_EHSM_AUXILIARY_OTP_STATUS_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_EHSM_AUXILIARY_OTP_STATUS_FUNC(void)
{
    if (cavm_is_model(OCTEONTX_CN20KA))
        return 0x80b0000000f0ll;
    __cavm_csr_fatal("EHSM_AUXILIARY_OTP_STATUS", 0, 0, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_EHSM_AUXILIARY_OTP_STATUS cavm_ehsm_auxiliary_otp_status_t
#define bustype_CAVM_EHSM_AUXILIARY_OTP_STATUS CSR_TYPE_NCB32b
#define basename_CAVM_EHSM_AUXILIARY_OTP_STATUS "EHSM_AUXILIARY_OTP_STATUS"
#define device_bar_CAVM_EHSM_AUXILIARY_OTP_STATUS 0x0 /* PF_BAR0 */
#define busnum_CAVM_EHSM_AUXILIARY_OTP_STATUS 0
#define arguments_CAVM_EHSM_AUXILIARY_OTP_STATUS -1,-1,-1,-1

/**
 * Register (NCB32b) ehsm_boot_strap_pin_status
 *
 * EHSM Boot Strap Pin Status Register
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
    if (cavm_is_model(OCTEONTX_CN20KA))
        return 0x80b000000128ll;
    __cavm_csr_fatal("EHSM_BOOT_STRAP_PIN_STATUS", 0, 0, 0, 0, 0, 0, 0);
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
 * EHSM Bootrom Config Status Register
 */
union cavm_ehsm_bootrom_config_status
{
    uint32_t u;
    struct cavm_ehsm_bootrom_config_status_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t bootrom_rsvd_param    : 10; /**< [ 31: 22](RO) This is the shadow register for bootrom_reserved_parameter field from OTP. */
        uint32_t dice_scheme_id        : 3;  /**< [ 21: 19](RO) This is the shadow register for dice_scheme_id field from OTP. */
        uint32_t aes_scheme_id         : 4;  /**< [ 18: 15](RO) This is the shadow register for aes_scheme_id field from OTP. */
        uint32_t pq_dsa_scheme_id      : 5;  /**< [ 14: 10](RO) This is the shadow register for pq_dsa_scheme_id field from OTP. */
        uint32_t dsa_scheme_id         : 3;  /**< [  9:  7](RO) This is the shadow register for dsa_scheme_id field from OTP. */
        uint32_t measured_boot_lock    : 1;  /**< [  6:  6](RO) This is the shadow register for measured_boot_lock field from OTP. */
        uint32_t encrypted_boot_lock   : 1;  /**< [  5:  5](RO) This is the shadow register for encrypted_boot_lock field from OTP. */
        uint32_t secure_boot_lock      : 1;  /**< [  4:  4](RO) This is the shadow register for secure_boot_lock field from OTP. */
        uint32_t measured_unenforced   : 1;  /**< [  3:  3](RO) This is the shadow register for measured_unenforced field from OTP. */
        uint32_t measured_boot         : 1;  /**< [  2:  2](RO) This is the shadow register for measured_boot field from OTP. */
        uint32_t encrypted_boot        : 1;  /**< [  1:  1](RO) This is the shadow register for encrypted_boot field from OTP. */
        uint32_t secure_boot           : 1;  /**< [  0:  0](RO) This is the shadow register for secure_boot field from OTP. */
#else /* Word 0 - Little Endian */
        uint32_t secure_boot           : 1;  /**< [  0:  0](RO) This is the shadow register for secure_boot field from OTP. */
        uint32_t encrypted_boot        : 1;  /**< [  1:  1](RO) This is the shadow register for encrypted_boot field from OTP. */
        uint32_t measured_boot         : 1;  /**< [  2:  2](RO) This is the shadow register for measured_boot field from OTP. */
        uint32_t measured_unenforced   : 1;  /**< [  3:  3](RO) This is the shadow register for measured_unenforced field from OTP. */
        uint32_t secure_boot_lock      : 1;  /**< [  4:  4](RO) This is the shadow register for secure_boot_lock field from OTP. */
        uint32_t encrypted_boot_lock   : 1;  /**< [  5:  5](RO) This is the shadow register for encrypted_boot_lock field from OTP. */
        uint32_t measured_boot_lock    : 1;  /**< [  6:  6](RO) This is the shadow register for measured_boot_lock field from OTP. */
        uint32_t dsa_scheme_id         : 3;  /**< [  9:  7](RO) This is the shadow register for dsa_scheme_id field from OTP. */
        uint32_t pq_dsa_scheme_id      : 5;  /**< [ 14: 10](RO) This is the shadow register for pq_dsa_scheme_id field from OTP. */
        uint32_t aes_scheme_id         : 4;  /**< [ 18: 15](RO) This is the shadow register for aes_scheme_id field from OTP. */
        uint32_t dice_scheme_id        : 3;  /**< [ 21: 19](RO) This is the shadow register for dice_scheme_id field from OTP. */
        uint32_t bootrom_rsvd_param    : 10; /**< [ 31: 22](RO) This is the shadow register for bootrom_reserved_parameter field from OTP. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_ehsm_bootrom_config_status_s cn; */
};
typedef union cavm_ehsm_bootrom_config_status cavm_ehsm_bootrom_config_status_t;

#define CAVM_EHSM_BOOTROM_CONFIG_STATUS CAVM_EHSM_BOOTROM_CONFIG_STATUS_FUNC()
static inline uint64_t CAVM_EHSM_BOOTROM_CONFIG_STATUS_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_EHSM_BOOTROM_CONFIG_STATUS_FUNC(void)
{
    if (cavm_is_model(OCTEONTX_CN20KA))
        return 0x80b000000118ll;
    __cavm_csr_fatal("EHSM_BOOTROM_CONFIG_STATUS", 0, 0, 0, 0, 0, 0, 0);
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
 * EHSM Chain Of Trust Status Register
 */
union cavm_ehsm_chain_of_trust_status
{
    uint32_t u;
    struct cavm_ehsm_chain_of_trust_status_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t sp_rsvd2              : 6;  /**< [ 31: 26](RO) Missing register field description. */
        uint32_t auth_cmd_2_disable_status : 1;/**< [ 25: 25](RO) This bit Indicates if auth cmd 2 has been disabled for this power cycle */
        uint32_t dak_7_gen_status      : 1;  /**< [ 24: 24](RO) This bit Indicates if DAK 7 has been generated */
        uint32_t dak_6_gen_status      : 1;  /**< [ 23: 23](RO) This bit Indicates if DAK 6 has been generated */
        uint32_t dak_5_gen_status      : 1;  /**< [ 22: 22](RO) This bit Indicates if DAK 5 has been generated */
        uint32_t dak_4_gen_status      : 1;  /**< [ 21: 21](RO) This bit Indicates if DAK 4 has been generated */
        uint32_t dak_3_gen_status      : 1;  /**< [ 20: 20](RO) This bit Indicates if DAK 3 has been generated */
        uint32_t dak_2_gen_status      : 1;  /**< [ 19: 19](RO) This bit Indicates if DAK 2 has been generated */
        uint32_t dak_1_gen_status      : 1;  /**< [ 18: 18](RO) This bit Indicates if DAK 1 has been generated */
        uint32_t dak_0_gen_status      : 1;  /**< [ 17: 17](RO) Internaldoconly=false;usedesignershortnamefordocs=false;is_rsv=false;display_nam
                                                                 e=DAK 0 Generation Status;}This bit Indicates if DAK 0 has been generated */
        uint32_t dlk_lock_status       : 1;  /**< [ 16: 16](RO) This bit Indicates if DLK has been locked */
        uint32_t dlk_gen_status        : 1;  /**< [ 15: 15](RO) This bit Indicates if DLK has been generated */
        uint32_t dik_lock_status       : 1;  /**< [ 14: 14](RO) This bit Indicates if DIK has been locked */
        uint32_t dik_gen_status        : 1;  /**< [ 13: 13](RO) This bit Indicates if DIK has been generated */
        uint32_t bootrom_exit          : 1;  /**< [ 12: 12](RO) This bit Indicates if BootRom has been exited */
        uint32_t global_challenge_lock_status : 1;/**< [ 11: 11](RO) This bit Indicates if the global challenge has been locked */
        uint32_t global_challenge_load_status : 1;/**< [ 10: 10](RO) Indicate if the global challenge has been loaded */
        uint32_t sp_rsvd1              : 2;  /**< [  9:  8](RO) Missing register field description. */
        uint32_t irom_panic_state      : 1;  /**< [  7:  7](RO) This bit Indicates if IROM is in panic state.Once this bit is set, it can only
                                                                 be cleared by HW reset */
        uint32_t pie_lock_status       : 1;  /**< [  6:  6](RO) This bit Indicates if the PIE reload has been locked */
        uint32_t soc_noise_injection   : 1;  /**< [  5:  5](RO) This bit Indicates ifSOC is injecting noise */
        uint32_t uds_lock_status       : 1;  /**< [  4:  4](RO) This bit Indicates if the UDS has been locked */
        uint32_t key_manifest_lock_status : 1;/**< [  3:  3](RO) This bit Indicates ifthe Key Manifest reload has been locked */
        uint32_t key_manifest_load_status : 1;/**< [  2:  2](RO) This bit Indicates if the key manifest has been loaded */
        uint32_t sp_rsvd0              : 1;  /**< [  1:  1](RO) Missing register field description. */
        uint32_t pie_load_status       : 1;  /**< [  0:  0](RO) This bit Indicates if PIE code has been loaded */
#else /* Word 0 - Little Endian */
        uint32_t pie_load_status       : 1;  /**< [  0:  0](RO) This bit Indicates if PIE code has been loaded */
        uint32_t sp_rsvd0              : 1;  /**< [  1:  1](RO) Missing register field description. */
        uint32_t key_manifest_load_status : 1;/**< [  2:  2](RO) This bit Indicates if the key manifest has been loaded */
        uint32_t key_manifest_lock_status : 1;/**< [  3:  3](RO) This bit Indicates ifthe Key Manifest reload has been locked */
        uint32_t uds_lock_status       : 1;  /**< [  4:  4](RO) This bit Indicates if the UDS has been locked */
        uint32_t soc_noise_injection   : 1;  /**< [  5:  5](RO) This bit Indicates ifSOC is injecting noise */
        uint32_t pie_lock_status       : 1;  /**< [  6:  6](RO) This bit Indicates if the PIE reload has been locked */
        uint32_t irom_panic_state      : 1;  /**< [  7:  7](RO) This bit Indicates if IROM is in panic state.Once this bit is set, it can only
                                                                 be cleared by HW reset */
        uint32_t sp_rsvd1              : 2;  /**< [  9:  8](RO) Missing register field description. */
        uint32_t global_challenge_load_status : 1;/**< [ 10: 10](RO) Indicate if the global challenge has been loaded */
        uint32_t global_challenge_lock_status : 1;/**< [ 11: 11](RO) This bit Indicates if the global challenge has been locked */
        uint32_t bootrom_exit          : 1;  /**< [ 12: 12](RO) This bit Indicates if BootRom has been exited */
        uint32_t dik_gen_status        : 1;  /**< [ 13: 13](RO) This bit Indicates if DIK has been generated */
        uint32_t dik_lock_status       : 1;  /**< [ 14: 14](RO) This bit Indicates if DIK has been locked */
        uint32_t dlk_gen_status        : 1;  /**< [ 15: 15](RO) This bit Indicates if DLK has been generated */
        uint32_t dlk_lock_status       : 1;  /**< [ 16: 16](RO) This bit Indicates if DLK has been locked */
        uint32_t dak_0_gen_status      : 1;  /**< [ 17: 17](RO) Internaldoconly=false;usedesignershortnamefordocs=false;is_rsv=false;display_nam
                                                                 e=DAK 0 Generation Status;}This bit Indicates if DAK 0 has been generated */
        uint32_t dak_1_gen_status      : 1;  /**< [ 18: 18](RO) This bit Indicates if DAK 1 has been generated */
        uint32_t dak_2_gen_status      : 1;  /**< [ 19: 19](RO) This bit Indicates if DAK 2 has been generated */
        uint32_t dak_3_gen_status      : 1;  /**< [ 20: 20](RO) This bit Indicates if DAK 3 has been generated */
        uint32_t dak_4_gen_status      : 1;  /**< [ 21: 21](RO) This bit Indicates if DAK 4 has been generated */
        uint32_t dak_5_gen_status      : 1;  /**< [ 22: 22](RO) This bit Indicates if DAK 5 has been generated */
        uint32_t dak_6_gen_status      : 1;  /**< [ 23: 23](RO) This bit Indicates if DAK 6 has been generated */
        uint32_t dak_7_gen_status      : 1;  /**< [ 24: 24](RO) This bit Indicates if DAK 7 has been generated */
        uint32_t auth_cmd_2_disable_status : 1;/**< [ 25: 25](RO) This bit Indicates if auth cmd 2 has been disabled for this power cycle */
        uint32_t sp_rsvd2              : 6;  /**< [ 31: 26](RO) Missing register field description. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_ehsm_chain_of_trust_status_s cn; */
};
typedef union cavm_ehsm_chain_of_trust_status cavm_ehsm_chain_of_trust_status_t;

#define CAVM_EHSM_CHAIN_OF_TRUST_STATUS CAVM_EHSM_CHAIN_OF_TRUST_STATUS_FUNC()
static inline uint64_t CAVM_EHSM_CHAIN_OF_TRUST_STATUS_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_EHSM_CHAIN_OF_TRUST_STATUS_FUNC(void)
{
    if (cavm_is_model(OCTEONTX_CN20KA))
        return 0x80b000000130ll;
    __cavm_csr_fatal("EHSM_CHAIN_OF_TRUST_STATUS", 0, 0, 0, 0, 0, 0, 0);
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
 * EHSM Cmd Fifo Status Register
 */
union cavm_ehsm_cmd_fifo_status
{
    uint32_t u;
    struct cavm_ehsm_cmd_fifo_status_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t cmd_checksum_skip     : 1;  /**< [ 31: 31](RO) Indicates the CMD checksum for the CMD being executed is skipped. It is because
                                                                 that at least one CMD parameters associated with this CMD is written more than
                                                                 once */
        uint32_t sp_rsvd0              : 14; /**< [ 30: 17](RO) Missing register field description. */
        uint32_t cmd_exe_core_id       : 1;  /**< [ 16: 16](RO) This bit indicate whether the command being executed is from host processor core
                                                                 1 or core 20: The command being executed is from host processor core 11: The
                                                                 command being executed is from host processor core 2 */
        uint32_t cmd_status            : 8;  /**< [ 15:  8](RO) This register allows the host to poll the status of the EHSM during the boot
                                                                 process.Bit [8]:If '0', indicates that the secure processor is not currently
                                                                 able to accept commands, so no primitive instructions should be sent, even if
                                                                 room is available in the command fifo. A '1' indicates a successful EHSM boot.At
                                                                 startup, this bit should be polled by the host to determine when to start
                                                                 sending primitive instructions.Bits [15:9]These bits are reserved for future
                                                                 use. */
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
        uint32_t cmd_status            : 8;  /**< [ 15:  8](RO) This register allows the host to poll the status of the EHSM during the boot
                                                                 process.Bit [8]:If '0', indicates that the secure processor is not currently
                                                                 able to accept commands, so no primitive instructions should be sent, even if
                                                                 room is available in the command fifo. A '1' indicates a successful EHSM boot.At
                                                                 startup, this bit should be polled by the host to determine when to start
                                                                 sending primitive instructions.Bits [15:9]These bits are reserved for future
                                                                 use. */
        uint32_t cmd_exe_core_id       : 1;  /**< [ 16: 16](RO) This bit indicate whether the command being executed is from host processor core
                                                                 1 or core 20: The command being executed is from host processor core 11: The
                                                                 command being executed is from host processor core 2 */
        uint32_t sp_rsvd0              : 14; /**< [ 30: 17](RO) Missing register field description. */
        uint32_t cmd_checksum_skip     : 1;  /**< [ 31: 31](RO) Indicates the CMD checksum for the CMD being executed is skipped. It is because
                                                                 that at least one CMD parameters associated with this CMD is written more than
                                                                 once */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_ehsm_cmd_fifo_status_s cn; */
};
typedef union cavm_ehsm_cmd_fifo_status cavm_ehsm_cmd_fifo_status_t;

#define CAVM_EHSM_CMD_FIFO_STATUS CAVM_EHSM_CMD_FIFO_STATUS_FUNC()
static inline uint64_t CAVM_EHSM_CMD_FIFO_STATUS_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_EHSM_CMD_FIFO_STATUS_FUNC(void)
{
    if (cavm_is_model(OCTEONTX_CN20KA))
        return 0x80b0000000c4ll;
    __cavm_csr_fatal("EHSM_CMD_FIFO_STATUS", 0, 0, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_EHSM_CMD_FIFO_STATUS cavm_ehsm_cmd_fifo_status_t
#define bustype_CAVM_EHSM_CMD_FIFO_STATUS CSR_TYPE_NCB32b
#define basename_CAVM_EHSM_CMD_FIFO_STATUS "EHSM_CMD_FIFO_STATUS"
#define device_bar_CAVM_EHSM_CMD_FIFO_STATUS 0x0 /* PF_BAR0 */
#define busnum_CAVM_EHSM_CMD_FIFO_STATUS 0
#define arguments_CAVM_EHSM_CMD_FIFO_STATUS -1,-1,-1,-1

/**
 * Register (NCB32b) ehsm_core1_cmd
 *
 * EHSM Core1 Cmd Register
 */
union cavm_ehsm_core1_cmd
{
    uint32_t u;
    struct cavm_ehsm_core1_cmd_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t sp_rsvd0              : 16; /**< [ 31: 16](RO) Missing register field description. */
        uint32_t cmd                   : 16; /**< [ 15:  0](WO) This is the CMD ID value of the primitive command from host processor core 1. */
#else /* Word 0 - Little Endian */
        uint32_t cmd                   : 16; /**< [ 15:  0](WO) This is the CMD ID value of the primitive command from host processor core 1. */
        uint32_t sp_rsvd0              : 16; /**< [ 31: 16](RO) Missing register field description. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_ehsm_core1_cmd_s cn; */
};
typedef union cavm_ehsm_core1_cmd cavm_ehsm_core1_cmd_t;

#define CAVM_EHSM_CORE1_CMD CAVM_EHSM_CORE1_CMD_FUNC()
static inline uint64_t CAVM_EHSM_CORE1_CMD_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_EHSM_CORE1_CMD_FUNC(void)
{
    if (cavm_is_model(OCTEONTX_CN20KA))
        return 0x80b000000040ll;
    __cavm_csr_fatal("EHSM_CORE1_CMD", 0, 0, 0, 0, 0, 0, 0);
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
 * EHSM Core1 Cmd Param0 Register
 */
union cavm_ehsm_core1_cmd_param0
{
    uint32_t u;
    struct cavm_ehsm_core1_cmd_param0_s
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
    /* struct cavm_ehsm_core1_cmd_param0_s cn; */
};
typedef union cavm_ehsm_core1_cmd_param0 cavm_ehsm_core1_cmd_param0_t;

#define CAVM_EHSM_CORE1_CMD_PARAM0 CAVM_EHSM_CORE1_CMD_PARAM0_FUNC()
static inline uint64_t CAVM_EHSM_CORE1_CMD_PARAM0_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_EHSM_CORE1_CMD_PARAM0_FUNC(void)
{
    if (cavm_is_model(OCTEONTX_CN20KA))
        return 0x80b000000000ll;
    __cavm_csr_fatal("EHSM_CORE1_CMD_PARAM0", 0, 0, 0, 0, 0, 0, 0);
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
 * EHSM Core1 Cmd Param1 Register
 */
union cavm_ehsm_core1_cmd_param1
{
    uint32_t u;
    struct cavm_ehsm_core1_cmd_param1_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t core1_cmd_param1      : 32; /**< [ 31:  0](WO) This register contains parameter 1 associated with a EHSM primitive command from
                                                                 host processor core 1. */
#else /* Word 0 - Little Endian */
        uint32_t core1_cmd_param1      : 32; /**< [ 31:  0](WO) This register contains parameter 1 associated with a EHSM primitive command from
                                                                 host processor core 1. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_ehsm_core1_cmd_param1_s cn; */
};
typedef union cavm_ehsm_core1_cmd_param1 cavm_ehsm_core1_cmd_param1_t;

#define CAVM_EHSM_CORE1_CMD_PARAM1 CAVM_EHSM_CORE1_CMD_PARAM1_FUNC()
static inline uint64_t CAVM_EHSM_CORE1_CMD_PARAM1_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_EHSM_CORE1_CMD_PARAM1_FUNC(void)
{
    if (cavm_is_model(OCTEONTX_CN20KA))
        return 0x80b000000004ll;
    __cavm_csr_fatal("EHSM_CORE1_CMD_PARAM1", 0, 0, 0, 0, 0, 0, 0);
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
 * EHSM Core1 Cmd Param10 Register
 */
union cavm_ehsm_core1_cmd_param10
{
    uint32_t u;
    struct cavm_ehsm_core1_cmd_param10_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t core1_cmd_param10     : 32; /**< [ 31:  0](WO) This register contains parameter 10 associated with a EHSM primitive command
                                                                 from host processor core 1. */
#else /* Word 0 - Little Endian */
        uint32_t core1_cmd_param10     : 32; /**< [ 31:  0](WO) This register contains parameter 10 associated with a EHSM primitive command
                                                                 from host processor core 1. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_ehsm_core1_cmd_param10_s cn; */
};
typedef union cavm_ehsm_core1_cmd_param10 cavm_ehsm_core1_cmd_param10_t;

#define CAVM_EHSM_CORE1_CMD_PARAM10 CAVM_EHSM_CORE1_CMD_PARAM10_FUNC()
static inline uint64_t CAVM_EHSM_CORE1_CMD_PARAM10_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_EHSM_CORE1_CMD_PARAM10_FUNC(void)
{
    if (cavm_is_model(OCTEONTX_CN20KA))
        return 0x80b000000028ll;
    __cavm_csr_fatal("EHSM_CORE1_CMD_PARAM10", 0, 0, 0, 0, 0, 0, 0);
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
 * EHSM Core1 Cmd Param11 Register
 */
union cavm_ehsm_core1_cmd_param11
{
    uint32_t u;
    struct cavm_ehsm_core1_cmd_param11_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t core1_cmd_param11     : 32; /**< [ 31:  0](WO) This register contains parameter 11 associated with a EHSM primitive command
                                                                 from host processor core 1. */
#else /* Word 0 - Little Endian */
        uint32_t core1_cmd_param11     : 32; /**< [ 31:  0](WO) This register contains parameter 11 associated with a EHSM primitive command
                                                                 from host processor core 1. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_ehsm_core1_cmd_param11_s cn; */
};
typedef union cavm_ehsm_core1_cmd_param11 cavm_ehsm_core1_cmd_param11_t;

#define CAVM_EHSM_CORE1_CMD_PARAM11 CAVM_EHSM_CORE1_CMD_PARAM11_FUNC()
static inline uint64_t CAVM_EHSM_CORE1_CMD_PARAM11_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_EHSM_CORE1_CMD_PARAM11_FUNC(void)
{
    if (cavm_is_model(OCTEONTX_CN20KA))
        return 0x80b00000002cll;
    __cavm_csr_fatal("EHSM_CORE1_CMD_PARAM11", 0, 0, 0, 0, 0, 0, 0);
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
 * EHSM Core1 Cmd Param12 Register
 */
union cavm_ehsm_core1_cmd_param12
{
    uint32_t u;
    struct cavm_ehsm_core1_cmd_param12_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t core1_cmd_param12     : 32; /**< [ 31:  0](WO) This register contains parameter 12 associated with a EHSM primitive command
                                                                 from host processor core 1. */
#else /* Word 0 - Little Endian */
        uint32_t core1_cmd_param12     : 32; /**< [ 31:  0](WO) This register contains parameter 12 associated with a EHSM primitive command
                                                                 from host processor core 1. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_ehsm_core1_cmd_param12_s cn; */
};
typedef union cavm_ehsm_core1_cmd_param12 cavm_ehsm_core1_cmd_param12_t;

#define CAVM_EHSM_CORE1_CMD_PARAM12 CAVM_EHSM_CORE1_CMD_PARAM12_FUNC()
static inline uint64_t CAVM_EHSM_CORE1_CMD_PARAM12_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_EHSM_CORE1_CMD_PARAM12_FUNC(void)
{
    if (cavm_is_model(OCTEONTX_CN20KA))
        return 0x80b000000030ll;
    __cavm_csr_fatal("EHSM_CORE1_CMD_PARAM12", 0, 0, 0, 0, 0, 0, 0);
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
 * EHSM Core1 Cmd Param13 Register
 */
union cavm_ehsm_core1_cmd_param13
{
    uint32_t u;
    struct cavm_ehsm_core1_cmd_param13_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t core1_cmd_param13     : 32; /**< [ 31:  0](WO) This register contains parameter 13 associated with a EHSM primitive command
                                                                 from host processor core 1. */
#else /* Word 0 - Little Endian */
        uint32_t core1_cmd_param13     : 32; /**< [ 31:  0](WO) This register contains parameter 13 associated with a EHSM primitive command
                                                                 from host processor core 1. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_ehsm_core1_cmd_param13_s cn; */
};
typedef union cavm_ehsm_core1_cmd_param13 cavm_ehsm_core1_cmd_param13_t;

#define CAVM_EHSM_CORE1_CMD_PARAM13 CAVM_EHSM_CORE1_CMD_PARAM13_FUNC()
static inline uint64_t CAVM_EHSM_CORE1_CMD_PARAM13_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_EHSM_CORE1_CMD_PARAM13_FUNC(void)
{
    if (cavm_is_model(OCTEONTX_CN20KA))
        return 0x80b000000034ll;
    __cavm_csr_fatal("EHSM_CORE1_CMD_PARAM13", 0, 0, 0, 0, 0, 0, 0);
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
 * EHSM Core1 Cmd Param14 Register
 */
union cavm_ehsm_core1_cmd_param14
{
    uint32_t u;
    struct cavm_ehsm_core1_cmd_param14_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t core1_cmd_param14     : 32; /**< [ 31:  0](WO) This register contains parameter 14 associated with a EHSM primitive command
                                                                 from host processor core 1. */
#else /* Word 0 - Little Endian */
        uint32_t core1_cmd_param14     : 32; /**< [ 31:  0](WO) This register contains parameter 14 associated with a EHSM primitive command
                                                                 from host processor core 1. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_ehsm_core1_cmd_param14_s cn; */
};
typedef union cavm_ehsm_core1_cmd_param14 cavm_ehsm_core1_cmd_param14_t;

#define CAVM_EHSM_CORE1_CMD_PARAM14 CAVM_EHSM_CORE1_CMD_PARAM14_FUNC()
static inline uint64_t CAVM_EHSM_CORE1_CMD_PARAM14_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_EHSM_CORE1_CMD_PARAM14_FUNC(void)
{
    if (cavm_is_model(OCTEONTX_CN20KA))
        return 0x80b000000038ll;
    __cavm_csr_fatal("EHSM_CORE1_CMD_PARAM14", 0, 0, 0, 0, 0, 0, 0);
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
 * EHSM Core1 Cmd Param15 Register
 */
union cavm_ehsm_core1_cmd_param15
{
    uint32_t u;
    struct cavm_ehsm_core1_cmd_param15_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t core1_cmd_param15     : 32; /**< [ 31:  0](WO) This register contains parameter 15 associated with a EHSM primitive command
                                                                 from host processor core 1. */
#else /* Word 0 - Little Endian */
        uint32_t core1_cmd_param15     : 32; /**< [ 31:  0](WO) This register contains parameter 15 associated with a EHSM primitive command
                                                                 from host processor core 1. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_ehsm_core1_cmd_param15_s cn; */
};
typedef union cavm_ehsm_core1_cmd_param15 cavm_ehsm_core1_cmd_param15_t;

#define CAVM_EHSM_CORE1_CMD_PARAM15 CAVM_EHSM_CORE1_CMD_PARAM15_FUNC()
static inline uint64_t CAVM_EHSM_CORE1_CMD_PARAM15_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_EHSM_CORE1_CMD_PARAM15_FUNC(void)
{
    if (cavm_is_model(OCTEONTX_CN20KA))
        return 0x80b00000003cll;
    __cavm_csr_fatal("EHSM_CORE1_CMD_PARAM15", 0, 0, 0, 0, 0, 0, 0);
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
 * EHSM Core1 Cmd Param2 Register
 */
union cavm_ehsm_core1_cmd_param2
{
    uint32_t u;
    struct cavm_ehsm_core1_cmd_param2_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t core1_cmd_param2      : 32; /**< [ 31:  0](WO) This register contains parameter 2 associated with a EHSM primitive command from
                                                                 host processor core 1. */
#else /* Word 0 - Little Endian */
        uint32_t core1_cmd_param2      : 32; /**< [ 31:  0](WO) This register contains parameter 2 associated with a EHSM primitive command from
                                                                 host processor core 1. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_ehsm_core1_cmd_param2_s cn; */
};
typedef union cavm_ehsm_core1_cmd_param2 cavm_ehsm_core1_cmd_param2_t;

#define CAVM_EHSM_CORE1_CMD_PARAM2 CAVM_EHSM_CORE1_CMD_PARAM2_FUNC()
static inline uint64_t CAVM_EHSM_CORE1_CMD_PARAM2_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_EHSM_CORE1_CMD_PARAM2_FUNC(void)
{
    if (cavm_is_model(OCTEONTX_CN20KA))
        return 0x80b000000008ll;
    __cavm_csr_fatal("EHSM_CORE1_CMD_PARAM2", 0, 0, 0, 0, 0, 0, 0);
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
 * EHSM Core1 Cmd Param3 Register
 */
union cavm_ehsm_core1_cmd_param3
{
    uint32_t u;
    struct cavm_ehsm_core1_cmd_param3_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t core1_cmd_param3      : 32; /**< [ 31:  0](WO) This register contains parameter 3 associated with a EHSM primitive command from
                                                                 host processor core 1. */
#else /* Word 0 - Little Endian */
        uint32_t core1_cmd_param3      : 32; /**< [ 31:  0](WO) This register contains parameter 3 associated with a EHSM primitive command from
                                                                 host processor core 1. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_ehsm_core1_cmd_param3_s cn; */
};
typedef union cavm_ehsm_core1_cmd_param3 cavm_ehsm_core1_cmd_param3_t;

#define CAVM_EHSM_CORE1_CMD_PARAM3 CAVM_EHSM_CORE1_CMD_PARAM3_FUNC()
static inline uint64_t CAVM_EHSM_CORE1_CMD_PARAM3_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_EHSM_CORE1_CMD_PARAM3_FUNC(void)
{
    if (cavm_is_model(OCTEONTX_CN20KA))
        return 0x80b00000000cll;
    __cavm_csr_fatal("EHSM_CORE1_CMD_PARAM3", 0, 0, 0, 0, 0, 0, 0);
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
 * EHSM Core1 Cmd Param4 Register
 */
union cavm_ehsm_core1_cmd_param4
{
    uint32_t u;
    struct cavm_ehsm_core1_cmd_param4_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t core1_cmd_param4      : 32; /**< [ 31:  0](WO) This register contains parameter 4 associated with a EHSM primitive command from
                                                                 host processor core 1. */
#else /* Word 0 - Little Endian */
        uint32_t core1_cmd_param4      : 32; /**< [ 31:  0](WO) This register contains parameter 4 associated with a EHSM primitive command from
                                                                 host processor core 1. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_ehsm_core1_cmd_param4_s cn; */
};
typedef union cavm_ehsm_core1_cmd_param4 cavm_ehsm_core1_cmd_param4_t;

#define CAVM_EHSM_CORE1_CMD_PARAM4 CAVM_EHSM_CORE1_CMD_PARAM4_FUNC()
static inline uint64_t CAVM_EHSM_CORE1_CMD_PARAM4_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_EHSM_CORE1_CMD_PARAM4_FUNC(void)
{
    if (cavm_is_model(OCTEONTX_CN20KA))
        return 0x80b000000010ll;
    __cavm_csr_fatal("EHSM_CORE1_CMD_PARAM4", 0, 0, 0, 0, 0, 0, 0);
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
 * EHSM Core1 Cmd Param5 Register
 */
union cavm_ehsm_core1_cmd_param5
{
    uint32_t u;
    struct cavm_ehsm_core1_cmd_param5_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t core1_cmd_param5      : 32; /**< [ 31:  0](WO) This register contains parameter 5 associated with a EHSM primitive command from
                                                                 host processor core 1. */
#else /* Word 0 - Little Endian */
        uint32_t core1_cmd_param5      : 32; /**< [ 31:  0](WO) This register contains parameter 5 associated with a EHSM primitive command from
                                                                 host processor core 1. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_ehsm_core1_cmd_param5_s cn; */
};
typedef union cavm_ehsm_core1_cmd_param5 cavm_ehsm_core1_cmd_param5_t;

#define CAVM_EHSM_CORE1_CMD_PARAM5 CAVM_EHSM_CORE1_CMD_PARAM5_FUNC()
static inline uint64_t CAVM_EHSM_CORE1_CMD_PARAM5_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_EHSM_CORE1_CMD_PARAM5_FUNC(void)
{
    if (cavm_is_model(OCTEONTX_CN20KA))
        return 0x80b000000014ll;
    __cavm_csr_fatal("EHSM_CORE1_CMD_PARAM5", 0, 0, 0, 0, 0, 0, 0);
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
 * EHSM Core1 Cmd Param6 Register
 */
union cavm_ehsm_core1_cmd_param6
{
    uint32_t u;
    struct cavm_ehsm_core1_cmd_param6_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t core1_cmd_param6      : 32; /**< [ 31:  0](WO) This register contains parameter 6 associated with a EHSM primitive command from
                                                                 host processor core 1. */
#else /* Word 0 - Little Endian */
        uint32_t core1_cmd_param6      : 32; /**< [ 31:  0](WO) This register contains parameter 6 associated with a EHSM primitive command from
                                                                 host processor core 1. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_ehsm_core1_cmd_param6_s cn; */
};
typedef union cavm_ehsm_core1_cmd_param6 cavm_ehsm_core1_cmd_param6_t;

#define CAVM_EHSM_CORE1_CMD_PARAM6 CAVM_EHSM_CORE1_CMD_PARAM6_FUNC()
static inline uint64_t CAVM_EHSM_CORE1_CMD_PARAM6_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_EHSM_CORE1_CMD_PARAM6_FUNC(void)
{
    if (cavm_is_model(OCTEONTX_CN20KA))
        return 0x80b000000018ll;
    __cavm_csr_fatal("EHSM_CORE1_CMD_PARAM6", 0, 0, 0, 0, 0, 0, 0);
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
 * EHSM Core1 Cmd Param7 Register
 */
union cavm_ehsm_core1_cmd_param7
{
    uint32_t u;
    struct cavm_ehsm_core1_cmd_param7_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t core1_cmd_param7      : 32; /**< [ 31:  0](WO) This register contains parameter 7 associated with a EHSM primitive command from
                                                                 host processor core 1. */
#else /* Word 0 - Little Endian */
        uint32_t core1_cmd_param7      : 32; /**< [ 31:  0](WO) This register contains parameter 7 associated with a EHSM primitive command from
                                                                 host processor core 1. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_ehsm_core1_cmd_param7_s cn; */
};
typedef union cavm_ehsm_core1_cmd_param7 cavm_ehsm_core1_cmd_param7_t;

#define CAVM_EHSM_CORE1_CMD_PARAM7 CAVM_EHSM_CORE1_CMD_PARAM7_FUNC()
static inline uint64_t CAVM_EHSM_CORE1_CMD_PARAM7_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_EHSM_CORE1_CMD_PARAM7_FUNC(void)
{
    if (cavm_is_model(OCTEONTX_CN20KA))
        return 0x80b00000001cll;
    __cavm_csr_fatal("EHSM_CORE1_CMD_PARAM7", 0, 0, 0, 0, 0, 0, 0);
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
 * EHSM Core1 Cmd Param8 Register
 */
union cavm_ehsm_core1_cmd_param8
{
    uint32_t u;
    struct cavm_ehsm_core1_cmd_param8_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t core1_cmd_param8      : 32; /**< [ 31:  0](WO) This register contains parameter 8 associated with a EHSM primitive command from
                                                                 host processor core 1. */
#else /* Word 0 - Little Endian */
        uint32_t core1_cmd_param8      : 32; /**< [ 31:  0](WO) This register contains parameter 8 associated with a EHSM primitive command from
                                                                 host processor core 1. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_ehsm_core1_cmd_param8_s cn; */
};
typedef union cavm_ehsm_core1_cmd_param8 cavm_ehsm_core1_cmd_param8_t;

#define CAVM_EHSM_CORE1_CMD_PARAM8 CAVM_EHSM_CORE1_CMD_PARAM8_FUNC()
static inline uint64_t CAVM_EHSM_CORE1_CMD_PARAM8_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_EHSM_CORE1_CMD_PARAM8_FUNC(void)
{
    if (cavm_is_model(OCTEONTX_CN20KA))
        return 0x80b000000020ll;
    __cavm_csr_fatal("EHSM_CORE1_CMD_PARAM8", 0, 0, 0, 0, 0, 0, 0);
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
 * EHSM Core1 Cmd Param9 Register
 */
union cavm_ehsm_core1_cmd_param9
{
    uint32_t u;
    struct cavm_ehsm_core1_cmd_param9_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t core1_cmd_param9      : 32; /**< [ 31:  0](WO) This register contains parameter 9 associated with a EHSM primitive command from
                                                                 host processor core 1. */
#else /* Word 0 - Little Endian */
        uint32_t core1_cmd_param9      : 32; /**< [ 31:  0](WO) This register contains parameter 9 associated with a EHSM primitive command from
                                                                 host processor core 1. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_ehsm_core1_cmd_param9_s cn; */
};
typedef union cavm_ehsm_core1_cmd_param9 cavm_ehsm_core1_cmd_param9_t;

#define CAVM_EHSM_CORE1_CMD_PARAM9 CAVM_EHSM_CORE1_CMD_PARAM9_FUNC()
static inline uint64_t CAVM_EHSM_CORE1_CMD_PARAM9_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_EHSM_CORE1_CMD_PARAM9_FUNC(void)
{
    if (cavm_is_model(OCTEONTX_CN20KA))
        return 0x80b000000024ll;
    __cavm_csr_fatal("EHSM_CORE1_CMD_PARAM9", 0, 0, 0, 0, 0, 0, 0);
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
 * EHSM Core1 Cmd Ret Status Register
 */
union cavm_ehsm_core1_cmd_ret_status
{
    uint32_t u;
    struct cavm_ehsm_core1_cmd_ret_status_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t core1_cmd_ret_status  : 32; /**< [ 31:  0](RO) This register contains return status associated with a EHSM primitive command
                                                                 from host processor core 1.If it is 0, it indicates command execution success.
                                                                 If it is non 0, it indicates command execution failure and the value is the
                                                                 error code. */
#else /* Word 0 - Little Endian */
        uint32_t core1_cmd_ret_status  : 32; /**< [ 31:  0](RO) This register contains return status associated with a EHSM primitive command
                                                                 from host processor core 1.If it is 0, it indicates command execution success.
                                                                 If it is non 0, it indicates command execution failure and the value is the
                                                                 error code. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_ehsm_core1_cmd_ret_status_s cn; */
};
typedef union cavm_ehsm_core1_cmd_ret_status cavm_ehsm_core1_cmd_ret_status_t;

#define CAVM_EHSM_CORE1_CMD_RET_STATUS CAVM_EHSM_CORE1_CMD_RET_STATUS_FUNC()
static inline uint64_t CAVM_EHSM_CORE1_CMD_RET_STATUS_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_EHSM_CORE1_CMD_RET_STATUS_FUNC(void)
{
    if (cavm_is_model(OCTEONTX_CN20KA))
        return 0x80b000000080ll;
    __cavm_csr_fatal("EHSM_CORE1_CMD_RET_STATUS", 0, 0, 0, 0, 0, 0, 0);
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
 * EHSM Core1 Cmd Status0 Register
 */
union cavm_ehsm_core1_cmd_status0
{
    uint32_t u;
    struct cavm_ehsm_core1_cmd_status0_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t core1_cmd_status0     : 32; /**< [ 31:  0](RO) This register contains status 0 associated with a EHSM primitive command from
                                                                 host processor core 1. */
#else /* Word 0 - Little Endian */
        uint32_t core1_cmd_status0     : 32; /**< [ 31:  0](RO) This register contains status 0 associated with a EHSM primitive command from
                                                                 host processor core 1. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_ehsm_core1_cmd_status0_s cn; */
};
typedef union cavm_ehsm_core1_cmd_status0 cavm_ehsm_core1_cmd_status0_t;

#define CAVM_EHSM_CORE1_CMD_STATUS0 CAVM_EHSM_CORE1_CMD_STATUS0_FUNC()
static inline uint64_t CAVM_EHSM_CORE1_CMD_STATUS0_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_EHSM_CORE1_CMD_STATUS0_FUNC(void)
{
    if (cavm_is_model(OCTEONTX_CN20KA))
        return 0x80b000000084ll;
    __cavm_csr_fatal("EHSM_CORE1_CMD_STATUS0", 0, 0, 0, 0, 0, 0, 0);
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
 * EHSM Core1 Cmd Status1 Register
 */
union cavm_ehsm_core1_cmd_status1
{
    uint32_t u;
    struct cavm_ehsm_core1_cmd_status1_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t core1_cmd_status1     : 32; /**< [ 31:  0](RO) This register contains status 1 associated with a EHSM primitive command from
                                                                 host processor core 1. */
#else /* Word 0 - Little Endian */
        uint32_t core1_cmd_status1     : 32; /**< [ 31:  0](RO) This register contains status 1 associated with a EHSM primitive command from
                                                                 host processor core 1. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_ehsm_core1_cmd_status1_s cn; */
};
typedef union cavm_ehsm_core1_cmd_status1 cavm_ehsm_core1_cmd_status1_t;

#define CAVM_EHSM_CORE1_CMD_STATUS1 CAVM_EHSM_CORE1_CMD_STATUS1_FUNC()
static inline uint64_t CAVM_EHSM_CORE1_CMD_STATUS1_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_EHSM_CORE1_CMD_STATUS1_FUNC(void)
{
    if (cavm_is_model(OCTEONTX_CN20KA))
        return 0x80b000000088ll;
    __cavm_csr_fatal("EHSM_CORE1_CMD_STATUS1", 0, 0, 0, 0, 0, 0, 0);
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
 * EHSM Core1 Cmd Status10 Register
 */
union cavm_ehsm_core1_cmd_status10
{
    uint32_t u;
    struct cavm_ehsm_core1_cmd_status10_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t core1_cmd_status10    : 32; /**< [ 31:  0](RO) This register contains status 10 associated with a EHSM primitive command from
                                                                 host processor core 1. */
#else /* Word 0 - Little Endian */
        uint32_t core1_cmd_status10    : 32; /**< [ 31:  0](RO) This register contains status 10 associated with a EHSM primitive command from
                                                                 host processor core 1. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_ehsm_core1_cmd_status10_s cn; */
};
typedef union cavm_ehsm_core1_cmd_status10 cavm_ehsm_core1_cmd_status10_t;

#define CAVM_EHSM_CORE1_CMD_STATUS10 CAVM_EHSM_CORE1_CMD_STATUS10_FUNC()
static inline uint64_t CAVM_EHSM_CORE1_CMD_STATUS10_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_EHSM_CORE1_CMD_STATUS10_FUNC(void)
{
    if (cavm_is_model(OCTEONTX_CN20KA))
        return 0x80b0000000acll;
    __cavm_csr_fatal("EHSM_CORE1_CMD_STATUS10", 0, 0, 0, 0, 0, 0, 0);
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
 * EHSM Core1 Cmd Status11 Register
 */
union cavm_ehsm_core1_cmd_status11
{
    uint32_t u;
    struct cavm_ehsm_core1_cmd_status11_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t core1_cmd_status11    : 32; /**< [ 31:  0](RO) This register contains status 11 associated with a EHSM primitive command from
                                                                 host processor core 1. */
#else /* Word 0 - Little Endian */
        uint32_t core1_cmd_status11    : 32; /**< [ 31:  0](RO) This register contains status 11 associated with a EHSM primitive command from
                                                                 host processor core 1. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_ehsm_core1_cmd_status11_s cn; */
};
typedef union cavm_ehsm_core1_cmd_status11 cavm_ehsm_core1_cmd_status11_t;

#define CAVM_EHSM_CORE1_CMD_STATUS11 CAVM_EHSM_CORE1_CMD_STATUS11_FUNC()
static inline uint64_t CAVM_EHSM_CORE1_CMD_STATUS11_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_EHSM_CORE1_CMD_STATUS11_FUNC(void)
{
    if (cavm_is_model(OCTEONTX_CN20KA))
        return 0x80b0000000b0ll;
    __cavm_csr_fatal("EHSM_CORE1_CMD_STATUS11", 0, 0, 0, 0, 0, 0, 0);
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
 * EHSM Core1 Cmd Status12 Register
 */
union cavm_ehsm_core1_cmd_status12
{
    uint32_t u;
    struct cavm_ehsm_core1_cmd_status12_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t core1_cmd_status12    : 32; /**< [ 31:  0](RO) This register contains status 12 associated with a EHSM primitive command from
                                                                 host processor core 1. */
#else /* Word 0 - Little Endian */
        uint32_t core1_cmd_status12    : 32; /**< [ 31:  0](RO) This register contains status 12 associated with a EHSM primitive command from
                                                                 host processor core 1. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_ehsm_core1_cmd_status12_s cn; */
};
typedef union cavm_ehsm_core1_cmd_status12 cavm_ehsm_core1_cmd_status12_t;

#define CAVM_EHSM_CORE1_CMD_STATUS12 CAVM_EHSM_CORE1_CMD_STATUS12_FUNC()
static inline uint64_t CAVM_EHSM_CORE1_CMD_STATUS12_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_EHSM_CORE1_CMD_STATUS12_FUNC(void)
{
    if (cavm_is_model(OCTEONTX_CN20KA))
        return 0x80b0000000b4ll;
    __cavm_csr_fatal("EHSM_CORE1_CMD_STATUS12", 0, 0, 0, 0, 0, 0, 0);
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
 * EHSM Core1 Cmd Status13 Register
 */
union cavm_ehsm_core1_cmd_status13
{
    uint32_t u;
    struct cavm_ehsm_core1_cmd_status13_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t core1_cmd_status13    : 32; /**< [ 31:  0](RO) This register contains status 13 associated with a EHSM primitive command from
                                                                 host processor core 1. */
#else /* Word 0 - Little Endian */
        uint32_t core1_cmd_status13    : 32; /**< [ 31:  0](RO) This register contains status 13 associated with a EHSM primitive command from
                                                                 host processor core 1. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_ehsm_core1_cmd_status13_s cn; */
};
typedef union cavm_ehsm_core1_cmd_status13 cavm_ehsm_core1_cmd_status13_t;

#define CAVM_EHSM_CORE1_CMD_STATUS13 CAVM_EHSM_CORE1_CMD_STATUS13_FUNC()
static inline uint64_t CAVM_EHSM_CORE1_CMD_STATUS13_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_EHSM_CORE1_CMD_STATUS13_FUNC(void)
{
    if (cavm_is_model(OCTEONTX_CN20KA))
        return 0x80b0000000b8ll;
    __cavm_csr_fatal("EHSM_CORE1_CMD_STATUS13", 0, 0, 0, 0, 0, 0, 0);
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
 * EHSM Core1 Cmd Status14 Register
 */
union cavm_ehsm_core1_cmd_status14
{
    uint32_t u;
    struct cavm_ehsm_core1_cmd_status14_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t core1_cmd_status14    : 32; /**< [ 31:  0](RO) This register contains status 14 associated with a EHSM primitive command from
                                                                 host processor core 1. */
#else /* Word 0 - Little Endian */
        uint32_t core1_cmd_status14    : 32; /**< [ 31:  0](RO) This register contains status 14 associated with a EHSM primitive command from
                                                                 host processor core 1. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_ehsm_core1_cmd_status14_s cn; */
};
typedef union cavm_ehsm_core1_cmd_status14 cavm_ehsm_core1_cmd_status14_t;

#define CAVM_EHSM_CORE1_CMD_STATUS14 CAVM_EHSM_CORE1_CMD_STATUS14_FUNC()
static inline uint64_t CAVM_EHSM_CORE1_CMD_STATUS14_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_EHSM_CORE1_CMD_STATUS14_FUNC(void)
{
    if (cavm_is_model(OCTEONTX_CN20KA))
        return 0x80b0000000bcll;
    __cavm_csr_fatal("EHSM_CORE1_CMD_STATUS14", 0, 0, 0, 0, 0, 0, 0);
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
 * EHSM Core1 Cmd Status15 Register
 */
union cavm_ehsm_core1_cmd_status15
{
    uint32_t u;
    struct cavm_ehsm_core1_cmd_status15_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t core1_cmd_status15    : 32; /**< [ 31:  0](RO) This register contains status 15 associated with a EHSM primitive command from
                                                                 host processor core 1. */
#else /* Word 0 - Little Endian */
        uint32_t core1_cmd_status15    : 32; /**< [ 31:  0](RO) This register contains status 15 associated with a EHSM primitive command from
                                                                 host processor core 1. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_ehsm_core1_cmd_status15_s cn; */
};
typedef union cavm_ehsm_core1_cmd_status15 cavm_ehsm_core1_cmd_status15_t;

#define CAVM_EHSM_CORE1_CMD_STATUS15 CAVM_EHSM_CORE1_CMD_STATUS15_FUNC()
static inline uint64_t CAVM_EHSM_CORE1_CMD_STATUS15_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_EHSM_CORE1_CMD_STATUS15_FUNC(void)
{
    if (cavm_is_model(OCTEONTX_CN20KA))
        return 0x80b0000000c0ll;
    __cavm_csr_fatal("EHSM_CORE1_CMD_STATUS15", 0, 0, 0, 0, 0, 0, 0);
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
 * EHSM Core1 Cmd Status2 Register
 */
union cavm_ehsm_core1_cmd_status2
{
    uint32_t u;
    struct cavm_ehsm_core1_cmd_status2_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t core1_cmd_status2     : 32; /**< [ 31:  0](RO) This register contains status 2 associated with a EHSM primitive command from
                                                                 host processor core 1. */
#else /* Word 0 - Little Endian */
        uint32_t core1_cmd_status2     : 32; /**< [ 31:  0](RO) This register contains status 2 associated with a EHSM primitive command from
                                                                 host processor core 1. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_ehsm_core1_cmd_status2_s cn; */
};
typedef union cavm_ehsm_core1_cmd_status2 cavm_ehsm_core1_cmd_status2_t;

#define CAVM_EHSM_CORE1_CMD_STATUS2 CAVM_EHSM_CORE1_CMD_STATUS2_FUNC()
static inline uint64_t CAVM_EHSM_CORE1_CMD_STATUS2_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_EHSM_CORE1_CMD_STATUS2_FUNC(void)
{
    if (cavm_is_model(OCTEONTX_CN20KA))
        return 0x80b00000008cll;
    __cavm_csr_fatal("EHSM_CORE1_CMD_STATUS2", 0, 0, 0, 0, 0, 0, 0);
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
 * EHSM Core1 Cmd Status3 Register
 */
union cavm_ehsm_core1_cmd_status3
{
    uint32_t u;
    struct cavm_ehsm_core1_cmd_status3_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t core1_cmd_status3     : 32; /**< [ 31:  0](RO) This register contains status 3 associated with a EHSM primitive command from
                                                                 host processor core 1. */
#else /* Word 0 - Little Endian */
        uint32_t core1_cmd_status3     : 32; /**< [ 31:  0](RO) This register contains status 3 associated with a EHSM primitive command from
                                                                 host processor core 1. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_ehsm_core1_cmd_status3_s cn; */
};
typedef union cavm_ehsm_core1_cmd_status3 cavm_ehsm_core1_cmd_status3_t;

#define CAVM_EHSM_CORE1_CMD_STATUS3 CAVM_EHSM_CORE1_CMD_STATUS3_FUNC()
static inline uint64_t CAVM_EHSM_CORE1_CMD_STATUS3_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_EHSM_CORE1_CMD_STATUS3_FUNC(void)
{
    if (cavm_is_model(OCTEONTX_CN20KA))
        return 0x80b000000090ll;
    __cavm_csr_fatal("EHSM_CORE1_CMD_STATUS3", 0, 0, 0, 0, 0, 0, 0);
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
 * EHSM Core1 Cmd Status4 Register
 */
union cavm_ehsm_core1_cmd_status4
{
    uint32_t u;
    struct cavm_ehsm_core1_cmd_status4_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t core1_cmd_status4     : 32; /**< [ 31:  0](RO) This register contains status 4 associated with a EHSM primitive command from
                                                                 host processor core 1. */
#else /* Word 0 - Little Endian */
        uint32_t core1_cmd_status4     : 32; /**< [ 31:  0](RO) This register contains status 4 associated with a EHSM primitive command from
                                                                 host processor core 1. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_ehsm_core1_cmd_status4_s cn; */
};
typedef union cavm_ehsm_core1_cmd_status4 cavm_ehsm_core1_cmd_status4_t;

#define CAVM_EHSM_CORE1_CMD_STATUS4 CAVM_EHSM_CORE1_CMD_STATUS4_FUNC()
static inline uint64_t CAVM_EHSM_CORE1_CMD_STATUS4_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_EHSM_CORE1_CMD_STATUS4_FUNC(void)
{
    if (cavm_is_model(OCTEONTX_CN20KA))
        return 0x80b000000094ll;
    __cavm_csr_fatal("EHSM_CORE1_CMD_STATUS4", 0, 0, 0, 0, 0, 0, 0);
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
 * EHSM Core1 Cmd Status5 Register
 */
union cavm_ehsm_core1_cmd_status5
{
    uint32_t u;
    struct cavm_ehsm_core1_cmd_status5_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t core1_cmd_status5     : 32; /**< [ 31:  0](RO) This register contains status 5 associated with a EHSM primitive command from
                                                                 host processor core 1. */
#else /* Word 0 - Little Endian */
        uint32_t core1_cmd_status5     : 32; /**< [ 31:  0](RO) This register contains status 5 associated with a EHSM primitive command from
                                                                 host processor core 1. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_ehsm_core1_cmd_status5_s cn; */
};
typedef union cavm_ehsm_core1_cmd_status5 cavm_ehsm_core1_cmd_status5_t;

#define CAVM_EHSM_CORE1_CMD_STATUS5 CAVM_EHSM_CORE1_CMD_STATUS5_FUNC()
static inline uint64_t CAVM_EHSM_CORE1_CMD_STATUS5_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_EHSM_CORE1_CMD_STATUS5_FUNC(void)
{
    if (cavm_is_model(OCTEONTX_CN20KA))
        return 0x80b000000098ll;
    __cavm_csr_fatal("EHSM_CORE1_CMD_STATUS5", 0, 0, 0, 0, 0, 0, 0);
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
 * EHSM Core1 Cmd Status6 Register
 */
union cavm_ehsm_core1_cmd_status6
{
    uint32_t u;
    struct cavm_ehsm_core1_cmd_status6_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t core1_cmd_status6     : 32; /**< [ 31:  0](RO) This register contains status 6 associated with a EHSM primitive command from
                                                                 host processor core 1. */
#else /* Word 0 - Little Endian */
        uint32_t core1_cmd_status6     : 32; /**< [ 31:  0](RO) This register contains status 6 associated with a EHSM primitive command from
                                                                 host processor core 1. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_ehsm_core1_cmd_status6_s cn; */
};
typedef union cavm_ehsm_core1_cmd_status6 cavm_ehsm_core1_cmd_status6_t;

#define CAVM_EHSM_CORE1_CMD_STATUS6 CAVM_EHSM_CORE1_CMD_STATUS6_FUNC()
static inline uint64_t CAVM_EHSM_CORE1_CMD_STATUS6_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_EHSM_CORE1_CMD_STATUS6_FUNC(void)
{
    if (cavm_is_model(OCTEONTX_CN20KA))
        return 0x80b00000009cll;
    __cavm_csr_fatal("EHSM_CORE1_CMD_STATUS6", 0, 0, 0, 0, 0, 0, 0);
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
 * EHSM Core1 Cmd Status7 Register
 */
union cavm_ehsm_core1_cmd_status7
{
    uint32_t u;
    struct cavm_ehsm_core1_cmd_status7_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t core1_cmd_status7     : 32; /**< [ 31:  0](RO) This register contains status 7 associated with a EHSM primitive command from
                                                                 host processor core 1. */
#else /* Word 0 - Little Endian */
        uint32_t core1_cmd_status7     : 32; /**< [ 31:  0](RO) This register contains status 7 associated with a EHSM primitive command from
                                                                 host processor core 1. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_ehsm_core1_cmd_status7_s cn; */
};
typedef union cavm_ehsm_core1_cmd_status7 cavm_ehsm_core1_cmd_status7_t;

#define CAVM_EHSM_CORE1_CMD_STATUS7 CAVM_EHSM_CORE1_CMD_STATUS7_FUNC()
static inline uint64_t CAVM_EHSM_CORE1_CMD_STATUS7_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_EHSM_CORE1_CMD_STATUS7_FUNC(void)
{
    if (cavm_is_model(OCTEONTX_CN20KA))
        return 0x80b0000000a0ll;
    __cavm_csr_fatal("EHSM_CORE1_CMD_STATUS7", 0, 0, 0, 0, 0, 0, 0);
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
 * EHSM Core1 Cmd Status8 Register
 */
union cavm_ehsm_core1_cmd_status8
{
    uint32_t u;
    struct cavm_ehsm_core1_cmd_status8_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t core1_cmd_status8     : 32; /**< [ 31:  0](RO) This register contains status 8 associated with a EHSM primitive command from
                                                                 host processor core 1. */
#else /* Word 0 - Little Endian */
        uint32_t core1_cmd_status8     : 32; /**< [ 31:  0](RO) This register contains status 8 associated with a EHSM primitive command from
                                                                 host processor core 1. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_ehsm_core1_cmd_status8_s cn; */
};
typedef union cavm_ehsm_core1_cmd_status8 cavm_ehsm_core1_cmd_status8_t;

#define CAVM_EHSM_CORE1_CMD_STATUS8 CAVM_EHSM_CORE1_CMD_STATUS8_FUNC()
static inline uint64_t CAVM_EHSM_CORE1_CMD_STATUS8_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_EHSM_CORE1_CMD_STATUS8_FUNC(void)
{
    if (cavm_is_model(OCTEONTX_CN20KA))
        return 0x80b0000000a4ll;
    __cavm_csr_fatal("EHSM_CORE1_CMD_STATUS8", 0, 0, 0, 0, 0, 0, 0);
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
 * EHSM Core1 Cmd Status9 Register
 */
union cavm_ehsm_core1_cmd_status9
{
    uint32_t u;
    struct cavm_ehsm_core1_cmd_status9_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t core1_cmd_status9     : 32; /**< [ 31:  0](RO) This register contains status 9 associated with a EHSM primitive command from
                                                                 host processor core 1. */
#else /* Word 0 - Little Endian */
        uint32_t core1_cmd_status9     : 32; /**< [ 31:  0](RO) This register contains status 9 associated with a EHSM primitive command from
                                                                 host processor core 1. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_ehsm_core1_cmd_status9_s cn; */
};
typedef union cavm_ehsm_core1_cmd_status9 cavm_ehsm_core1_cmd_status9_t;

#define CAVM_EHSM_CORE1_CMD_STATUS9 CAVM_EHSM_CORE1_CMD_STATUS9_FUNC()
static inline uint64_t CAVM_EHSM_CORE1_CMD_STATUS9_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_EHSM_CORE1_CMD_STATUS9_FUNC(void)
{
    if (cavm_is_model(OCTEONTX_CN20KA))
        return 0x80b0000000a8ll;
    __cavm_csr_fatal("EHSM_CORE1_CMD_STATUS9", 0, 0, 0, 0, 0, 0, 0);
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
 * EHSM Core1 Hst Interrupt Mask Register
 */
union cavm_ehsm_core1_hst_interrupt_mask
{
    uint32_t u;
    struct cavm_ehsm_core1_hst_interrupt_mask_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t core1_hst_interrupt_mask : 32;/**< [ 31:  0](R/W) This is host interrupt masking register for host processor core 1 */
#else /* Word 0 - Little Endian */
        uint32_t core1_hst_interrupt_mask : 32;/**< [ 31:  0](R/W) This is host interrupt masking register for host processor core 1 */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_ehsm_core1_hst_interrupt_mask_s cn; */
};
typedef union cavm_ehsm_core1_hst_interrupt_mask cavm_ehsm_core1_hst_interrupt_mask_t;

#define CAVM_EHSM_CORE1_HST_INTERRUPT_MASK CAVM_EHSM_CORE1_HST_INTERRUPT_MASK_FUNC()
static inline uint64_t CAVM_EHSM_CORE1_HST_INTERRUPT_MASK_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_EHSM_CORE1_HST_INTERRUPT_MASK_FUNC(void)
{
    if (cavm_is_model(OCTEONTX_CN20KA))
        return 0x80b0000000ccll;
    __cavm_csr_fatal("EHSM_CORE1_HST_INTERRUPT_MASK", 0, 0, 0, 0, 0, 0, 0);
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
 * EHSM Core1 Hst Interrupt Rst Register
 */
union cavm_ehsm_core1_hst_interrupt_rst
{
    uint32_t u;
    struct cavm_ehsm_core1_hst_interrupt_rst_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t sp_rsvd0              : 14; /**< [ 31: 18](RO) Missing register field description. */
        uint32_t cmd_buffer_full_access : 1; /**< [ 17: 17](R/W) When active, this interrupt indicates to the host processor core 1 that an
                                                                 attempt was made to write the command register or the parameter register space
                                                                 when the command buffer of host processor core 1 was full. The write attempt
                                                                 will be blocked. It does not impact the command and parameters that is already
                                                                 queued. The host can rewrite the command or parameter when CMD buffer of host
                                                                 processor core 1 is empty. Hostcan read CORE1_CMD_BUFFER_FULL field in
                                                                 CMD_FIFO_STATUS to check if CMD buffer of host processor core 1 is available to
                                                                 be written.To reset this field, write a 1 to clear the interrupt. */
        uint32_t hst_addr_range        : 1;  /**< [ 16: 16](R/W) This interrupt indicates that the host attempted to access an address to which
                                                                 it is not allowed access. This interrupt also triggers if a write is made to a
                                                                 read-only register, or a read to a write-only register.To reset this field,
                                                                 write a 1 to clear the interrupt. */
        uint32_t sp_rsvd1              : 11; /**< [ 15:  5](RO) Missing register field description. */
        uint32_t ram0_wakeup_timeout   : 1;  /**< [  4:  4](R/W) When set, this interrupt indicates that CM3 RAM part 0 has wakeup timeout error.
                                                                 It is triggered by 1 of the following scenarios1. ehsm_cm3_ram_part0_dslp is not
                                                                 driven to 0 within 32 cycles of ehsm_warm_rstn release2. ehsm_cm3_ram_part0_dslp
                                                                 is not driven to 0 within 32 cycles after ehsm_cm3_ram_part0_wakeup_requestHost
                                                                 should check SHADOW_REG_STATUS bit 27 and 28 to determine which scenario is the
                                                                 root cause of timeoutTo reset this field, write a 1 to clear the interrupt. */
        uint32_t watchdog_timeout      : 1;  /**< [  3:  3](R/W) This interrupt indicates that watchdog timer timeout happened and eHSM reset
                                                                 itself.To reset this field, write a 1 to clear the interrupt. */
        uint32_t sysrdyp_timeout       : 1;  /**< [  2:  2](R/W) This field indicates that SYSRDYP timeout is detected on OTP or PUF power
                                                                 switch.If enable_puf field in OTP efuse is 0, only SYSRDYP timeout of OTP power
                                                                 switch can trigger this host interruptIf enable_puf field in OTP efuse is 1,
                                                                 SYSRDYP timeout of either OTP or PUF power switch can trigger this host
                                                                 interrupt. User can read SHADOW_REG_STATUS to determine SYSRDYP timeout is
                                                                 detected on which power switch */
        uint32_t ehsm_mem_fail         : 1;  /**< [  1:  1](R/W) When set, this interrupt indicates that CM3 ROM, CM3 RAM or SPAD memory has
                                                                 uncorrectable error, or shadow buffer has parity error. User can read
                                                                 SHADOW_REG_STATUS to determine which memory or shadow buffer failsTo reset this
                                                                 field, write a 1 to clear the interrupt. */
        uint32_t irom_exe_int          : 1;  /**< [  0:  0](R/W) When set, this interrupt indicates that the secure processor has completed a
                                                                 primitive issued by host processor core 1, or completed execution for boot upTo
                                                                 reset this field, write a 1 to clear the interrupt. */
#else /* Word 0 - Little Endian */
        uint32_t irom_exe_int          : 1;  /**< [  0:  0](R/W) When set, this interrupt indicates that the secure processor has completed a
                                                                 primitive issued by host processor core 1, or completed execution for boot upTo
                                                                 reset this field, write a 1 to clear the interrupt. */
        uint32_t ehsm_mem_fail         : 1;  /**< [  1:  1](R/W) When set, this interrupt indicates that CM3 ROM, CM3 RAM or SPAD memory has
                                                                 uncorrectable error, or shadow buffer has parity error. User can read
                                                                 SHADOW_REG_STATUS to determine which memory or shadow buffer failsTo reset this
                                                                 field, write a 1 to clear the interrupt. */
        uint32_t sysrdyp_timeout       : 1;  /**< [  2:  2](R/W) This field indicates that SYSRDYP timeout is detected on OTP or PUF power
                                                                 switch.If enable_puf field in OTP efuse is 0, only SYSRDYP timeout of OTP power
                                                                 switch can trigger this host interruptIf enable_puf field in OTP efuse is 1,
                                                                 SYSRDYP timeout of either OTP or PUF power switch can trigger this host
                                                                 interrupt. User can read SHADOW_REG_STATUS to determine SYSRDYP timeout is
                                                                 detected on which power switch */
        uint32_t watchdog_timeout      : 1;  /**< [  3:  3](R/W) This interrupt indicates that watchdog timer timeout happened and eHSM reset
                                                                 itself.To reset this field, write a 1 to clear the interrupt. */
        uint32_t ram0_wakeup_timeout   : 1;  /**< [  4:  4](R/W) When set, this interrupt indicates that CM3 RAM part 0 has wakeup timeout error.
                                                                 It is triggered by 1 of the following scenarios1. ehsm_cm3_ram_part0_dslp is not
                                                                 driven to 0 within 32 cycles of ehsm_warm_rstn release2. ehsm_cm3_ram_part0_dslp
                                                                 is not driven to 0 within 32 cycles after ehsm_cm3_ram_part0_wakeup_requestHost
                                                                 should check SHADOW_REG_STATUS bit 27 and 28 to determine which scenario is the
                                                                 root cause of timeoutTo reset this field, write a 1 to clear the interrupt. */
        uint32_t sp_rsvd1              : 11; /**< [ 15:  5](RO) Missing register field description. */
        uint32_t hst_addr_range        : 1;  /**< [ 16: 16](R/W) This interrupt indicates that the host attempted to access an address to which
                                                                 it is not allowed access. This interrupt also triggers if a write is made to a
                                                                 read-only register, or a read to a write-only register.To reset this field,
                                                                 write a 1 to clear the interrupt. */
        uint32_t cmd_buffer_full_access : 1; /**< [ 17: 17](R/W) When active, this interrupt indicates to the host processor core 1 that an
                                                                 attempt was made to write the command register or the parameter register space
                                                                 when the command buffer of host processor core 1 was full. The write attempt
                                                                 will be blocked. It does not impact the command and parameters that is already
                                                                 queued. The host can rewrite the command or parameter when CMD buffer of host
                                                                 processor core 1 is empty. Hostcan read CORE1_CMD_BUFFER_FULL field in
                                                                 CMD_FIFO_STATUS to check if CMD buffer of host processor core 1 is available to
                                                                 be written.To reset this field, write a 1 to clear the interrupt. */
        uint32_t sp_rsvd0              : 14; /**< [ 31: 18](RO) Missing register field description. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_ehsm_core1_hst_interrupt_rst_s cn; */
};
typedef union cavm_ehsm_core1_hst_interrupt_rst cavm_ehsm_core1_hst_interrupt_rst_t;

#define CAVM_EHSM_CORE1_HST_INTERRUPT_RST CAVM_EHSM_CORE1_HST_INTERRUPT_RST_FUNC()
static inline uint64_t CAVM_EHSM_CORE1_HST_INTERRUPT_RST_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_EHSM_CORE1_HST_INTERRUPT_RST_FUNC(void)
{
    if (cavm_is_model(OCTEONTX_CN20KA))
        return 0x80b0000000c8ll;
    __cavm_csr_fatal("EHSM_CORE1_HST_INTERRUPT_RST", 0, 0, 0, 0, 0, 0, 0);
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
 * EHSM Core2 Cmd Register
 */
union cavm_ehsm_core2_cmd
{
    uint32_t u;
    struct cavm_ehsm_core2_cmd_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t sp_rsvd0              : 16; /**< [ 31: 16](RO) Missing register field description. */
        uint32_t cmd                   : 16; /**< [ 15:  0](WO) This is the CMD ID value of the primitive command from host processor core 2. */
#else /* Word 0 - Little Endian */
        uint32_t cmd                   : 16; /**< [ 15:  0](WO) This is the CMD ID value of the primitive command from host processor core 2. */
        uint32_t sp_rsvd0              : 16; /**< [ 31: 16](RO) Missing register field description. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_ehsm_core2_cmd_s cn; */
};
typedef union cavm_ehsm_core2_cmd cavm_ehsm_core2_cmd_t;

#define CAVM_EHSM_CORE2_CMD CAVM_EHSM_CORE2_CMD_FUNC()
static inline uint64_t CAVM_EHSM_CORE2_CMD_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_EHSM_CORE2_CMD_FUNC(void)
{
    if (cavm_is_model(OCTEONTX_CN20KA))
        return 0x80b000000180ll;
    __cavm_csr_fatal("EHSM_CORE2_CMD", 0, 0, 0, 0, 0, 0, 0);
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
 * EHSM Core2 Cmd Param0 Register
 */
union cavm_ehsm_core2_cmd_param0
{
    uint32_t u;
    struct cavm_ehsm_core2_cmd_param0_s
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
    /* struct cavm_ehsm_core2_cmd_param0_s cn; */
};
typedef union cavm_ehsm_core2_cmd_param0 cavm_ehsm_core2_cmd_param0_t;

#define CAVM_EHSM_CORE2_CMD_PARAM0 CAVM_EHSM_CORE2_CMD_PARAM0_FUNC()
static inline uint64_t CAVM_EHSM_CORE2_CMD_PARAM0_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_EHSM_CORE2_CMD_PARAM0_FUNC(void)
{
    if (cavm_is_model(OCTEONTX_CN20KA))
        return 0x80b000000140ll;
    __cavm_csr_fatal("EHSM_CORE2_CMD_PARAM0", 0, 0, 0, 0, 0, 0, 0);
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
 * EHSM Core2 Cmd Param1 Register
 */
union cavm_ehsm_core2_cmd_param1
{
    uint32_t u;
    struct cavm_ehsm_core2_cmd_param1_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t core2_cmd_param1      : 32; /**< [ 31:  0](WO) This register contains parameter 1 associated with a EHSM primitive command from
                                                                 host processor core 2. */
#else /* Word 0 - Little Endian */
        uint32_t core2_cmd_param1      : 32; /**< [ 31:  0](WO) This register contains parameter 1 associated with a EHSM primitive command from
                                                                 host processor core 2. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_ehsm_core2_cmd_param1_s cn; */
};
typedef union cavm_ehsm_core2_cmd_param1 cavm_ehsm_core2_cmd_param1_t;

#define CAVM_EHSM_CORE2_CMD_PARAM1 CAVM_EHSM_CORE2_CMD_PARAM1_FUNC()
static inline uint64_t CAVM_EHSM_CORE2_CMD_PARAM1_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_EHSM_CORE2_CMD_PARAM1_FUNC(void)
{
    if (cavm_is_model(OCTEONTX_CN20KA))
        return 0x80b000000144ll;
    __cavm_csr_fatal("EHSM_CORE2_CMD_PARAM1", 0, 0, 0, 0, 0, 0, 0);
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
 * EHSM Core2 Cmd Param10 Register
 */
union cavm_ehsm_core2_cmd_param10
{
    uint32_t u;
    struct cavm_ehsm_core2_cmd_param10_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t core2_cmd_param10     : 32; /**< [ 31:  0](WO) This register contains parameter 10 associated with a EHSM primitive command
                                                                 from host processor core 2. */
#else /* Word 0 - Little Endian */
        uint32_t core2_cmd_param10     : 32; /**< [ 31:  0](WO) This register contains parameter 10 associated with a EHSM primitive command
                                                                 from host processor core 2. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_ehsm_core2_cmd_param10_s cn; */
};
typedef union cavm_ehsm_core2_cmd_param10 cavm_ehsm_core2_cmd_param10_t;

#define CAVM_EHSM_CORE2_CMD_PARAM10 CAVM_EHSM_CORE2_CMD_PARAM10_FUNC()
static inline uint64_t CAVM_EHSM_CORE2_CMD_PARAM10_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_EHSM_CORE2_CMD_PARAM10_FUNC(void)
{
    if (cavm_is_model(OCTEONTX_CN20KA))
        return 0x80b000000168ll;
    __cavm_csr_fatal("EHSM_CORE2_CMD_PARAM10", 0, 0, 0, 0, 0, 0, 0);
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
 * EHSM Core2 Cmd Param11 Register
 */
union cavm_ehsm_core2_cmd_param11
{
    uint32_t u;
    struct cavm_ehsm_core2_cmd_param11_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t core2_cmd_param11     : 32; /**< [ 31:  0](WO) This register contains parameter 11 associated with a EHSM primitive command
                                                                 from host processor core 2. */
#else /* Word 0 - Little Endian */
        uint32_t core2_cmd_param11     : 32; /**< [ 31:  0](WO) This register contains parameter 11 associated with a EHSM primitive command
                                                                 from host processor core 2. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_ehsm_core2_cmd_param11_s cn; */
};
typedef union cavm_ehsm_core2_cmd_param11 cavm_ehsm_core2_cmd_param11_t;

#define CAVM_EHSM_CORE2_CMD_PARAM11 CAVM_EHSM_CORE2_CMD_PARAM11_FUNC()
static inline uint64_t CAVM_EHSM_CORE2_CMD_PARAM11_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_EHSM_CORE2_CMD_PARAM11_FUNC(void)
{
    if (cavm_is_model(OCTEONTX_CN20KA))
        return 0x80b00000016cll;
    __cavm_csr_fatal("EHSM_CORE2_CMD_PARAM11", 0, 0, 0, 0, 0, 0, 0);
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
 * EHSM Core2 Cmd Param12 Register
 */
union cavm_ehsm_core2_cmd_param12
{
    uint32_t u;
    struct cavm_ehsm_core2_cmd_param12_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t core2_cmd_param12     : 32; /**< [ 31:  0](WO) This register contains parameter 12 associated with a EHSM primitive command
                                                                 from host processor core 2. */
#else /* Word 0 - Little Endian */
        uint32_t core2_cmd_param12     : 32; /**< [ 31:  0](WO) This register contains parameter 12 associated with a EHSM primitive command
                                                                 from host processor core 2. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_ehsm_core2_cmd_param12_s cn; */
};
typedef union cavm_ehsm_core2_cmd_param12 cavm_ehsm_core2_cmd_param12_t;

#define CAVM_EHSM_CORE2_CMD_PARAM12 CAVM_EHSM_CORE2_CMD_PARAM12_FUNC()
static inline uint64_t CAVM_EHSM_CORE2_CMD_PARAM12_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_EHSM_CORE2_CMD_PARAM12_FUNC(void)
{
    if (cavm_is_model(OCTEONTX_CN20KA))
        return 0x80b000000170ll;
    __cavm_csr_fatal("EHSM_CORE2_CMD_PARAM12", 0, 0, 0, 0, 0, 0, 0);
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
 * EHSM Core2 Cmd Param13 Register
 */
union cavm_ehsm_core2_cmd_param13
{
    uint32_t u;
    struct cavm_ehsm_core2_cmd_param13_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t core2_cmd_param13     : 32; /**< [ 31:  0](WO) This register contains parameter 13 associated with a EHSM primitive command
                                                                 from host processor core 2. */
#else /* Word 0 - Little Endian */
        uint32_t core2_cmd_param13     : 32; /**< [ 31:  0](WO) This register contains parameter 13 associated with a EHSM primitive command
                                                                 from host processor core 2. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_ehsm_core2_cmd_param13_s cn; */
};
typedef union cavm_ehsm_core2_cmd_param13 cavm_ehsm_core2_cmd_param13_t;

#define CAVM_EHSM_CORE2_CMD_PARAM13 CAVM_EHSM_CORE2_CMD_PARAM13_FUNC()
static inline uint64_t CAVM_EHSM_CORE2_CMD_PARAM13_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_EHSM_CORE2_CMD_PARAM13_FUNC(void)
{
    if (cavm_is_model(OCTEONTX_CN20KA))
        return 0x80b000000174ll;
    __cavm_csr_fatal("EHSM_CORE2_CMD_PARAM13", 0, 0, 0, 0, 0, 0, 0);
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
 * EHSM Core2 Cmd Param14 Register
 */
union cavm_ehsm_core2_cmd_param14
{
    uint32_t u;
    struct cavm_ehsm_core2_cmd_param14_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t core2_cmd_param14     : 32; /**< [ 31:  0](WO) This register contains parameter 14 associated with a EHSM primitive command
                                                                 from host processor core 2. */
#else /* Word 0 - Little Endian */
        uint32_t core2_cmd_param14     : 32; /**< [ 31:  0](WO) This register contains parameter 14 associated with a EHSM primitive command
                                                                 from host processor core 2. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_ehsm_core2_cmd_param14_s cn; */
};
typedef union cavm_ehsm_core2_cmd_param14 cavm_ehsm_core2_cmd_param14_t;

#define CAVM_EHSM_CORE2_CMD_PARAM14 CAVM_EHSM_CORE2_CMD_PARAM14_FUNC()
static inline uint64_t CAVM_EHSM_CORE2_CMD_PARAM14_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_EHSM_CORE2_CMD_PARAM14_FUNC(void)
{
    if (cavm_is_model(OCTEONTX_CN20KA))
        return 0x80b000000178ll;
    __cavm_csr_fatal("EHSM_CORE2_CMD_PARAM14", 0, 0, 0, 0, 0, 0, 0);
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
 * EHSM Core2 Cmd Param15 Register
 */
union cavm_ehsm_core2_cmd_param15
{
    uint32_t u;
    struct cavm_ehsm_core2_cmd_param15_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t core2_cmd_param15     : 32; /**< [ 31:  0](WO) This register contains parameter 15 associated with a EHSM primitive command
                                                                 from host processor core 2. */
#else /* Word 0 - Little Endian */
        uint32_t core2_cmd_param15     : 32; /**< [ 31:  0](WO) This register contains parameter 15 associated with a EHSM primitive command
                                                                 from host processor core 2. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_ehsm_core2_cmd_param15_s cn; */
};
typedef union cavm_ehsm_core2_cmd_param15 cavm_ehsm_core2_cmd_param15_t;

#define CAVM_EHSM_CORE2_CMD_PARAM15 CAVM_EHSM_CORE2_CMD_PARAM15_FUNC()
static inline uint64_t CAVM_EHSM_CORE2_CMD_PARAM15_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_EHSM_CORE2_CMD_PARAM15_FUNC(void)
{
    if (cavm_is_model(OCTEONTX_CN20KA))
        return 0x80b00000017cll;
    __cavm_csr_fatal("EHSM_CORE2_CMD_PARAM15", 0, 0, 0, 0, 0, 0, 0);
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
 * EHSM Core2 Cmd Param2 Register
 */
union cavm_ehsm_core2_cmd_param2
{
    uint32_t u;
    struct cavm_ehsm_core2_cmd_param2_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t core2_cmd_param2      : 32; /**< [ 31:  0](WO) This register contains parameter 2 associated with a EHSM primitive command from
                                                                 host processor core 2. */
#else /* Word 0 - Little Endian */
        uint32_t core2_cmd_param2      : 32; /**< [ 31:  0](WO) This register contains parameter 2 associated with a EHSM primitive command from
                                                                 host processor core 2. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_ehsm_core2_cmd_param2_s cn; */
};
typedef union cavm_ehsm_core2_cmd_param2 cavm_ehsm_core2_cmd_param2_t;

#define CAVM_EHSM_CORE2_CMD_PARAM2 CAVM_EHSM_CORE2_CMD_PARAM2_FUNC()
static inline uint64_t CAVM_EHSM_CORE2_CMD_PARAM2_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_EHSM_CORE2_CMD_PARAM2_FUNC(void)
{
    if (cavm_is_model(OCTEONTX_CN20KA))
        return 0x80b000000148ll;
    __cavm_csr_fatal("EHSM_CORE2_CMD_PARAM2", 0, 0, 0, 0, 0, 0, 0);
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
 * EHSM Core2 Cmd Param3 Register
 */
union cavm_ehsm_core2_cmd_param3
{
    uint32_t u;
    struct cavm_ehsm_core2_cmd_param3_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t core2_cmd_param3      : 32; /**< [ 31:  0](WO) This register contains parameter 3 associated with a EHSM primitive command from
                                                                 host processor core 2. */
#else /* Word 0 - Little Endian */
        uint32_t core2_cmd_param3      : 32; /**< [ 31:  0](WO) This register contains parameter 3 associated with a EHSM primitive command from
                                                                 host processor core 2. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_ehsm_core2_cmd_param3_s cn; */
};
typedef union cavm_ehsm_core2_cmd_param3 cavm_ehsm_core2_cmd_param3_t;

#define CAVM_EHSM_CORE2_CMD_PARAM3 CAVM_EHSM_CORE2_CMD_PARAM3_FUNC()
static inline uint64_t CAVM_EHSM_CORE2_CMD_PARAM3_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_EHSM_CORE2_CMD_PARAM3_FUNC(void)
{
    if (cavm_is_model(OCTEONTX_CN20KA))
        return 0x80b00000014cll;
    __cavm_csr_fatal("EHSM_CORE2_CMD_PARAM3", 0, 0, 0, 0, 0, 0, 0);
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
 * EHSM Core2 Cmd Param4 Register
 */
union cavm_ehsm_core2_cmd_param4
{
    uint32_t u;
    struct cavm_ehsm_core2_cmd_param4_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t core2_cmd_param4      : 32; /**< [ 31:  0](WO) This register contains parameter 4 associated with a EHSM primitive command from
                                                                 host processor core 2. */
#else /* Word 0 - Little Endian */
        uint32_t core2_cmd_param4      : 32; /**< [ 31:  0](WO) This register contains parameter 4 associated with a EHSM primitive command from
                                                                 host processor core 2. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_ehsm_core2_cmd_param4_s cn; */
};
typedef union cavm_ehsm_core2_cmd_param4 cavm_ehsm_core2_cmd_param4_t;

#define CAVM_EHSM_CORE2_CMD_PARAM4 CAVM_EHSM_CORE2_CMD_PARAM4_FUNC()
static inline uint64_t CAVM_EHSM_CORE2_CMD_PARAM4_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_EHSM_CORE2_CMD_PARAM4_FUNC(void)
{
    if (cavm_is_model(OCTEONTX_CN20KA))
        return 0x80b000000150ll;
    __cavm_csr_fatal("EHSM_CORE2_CMD_PARAM4", 0, 0, 0, 0, 0, 0, 0);
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
 * EHSM Core2 Cmd Param5 Register
 */
union cavm_ehsm_core2_cmd_param5
{
    uint32_t u;
    struct cavm_ehsm_core2_cmd_param5_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t core2_cmd_param5      : 32; /**< [ 31:  0](WO) This register contains parameter 5 associated with a EHSM primitive command from
                                                                 host processor core 2. */
#else /* Word 0 - Little Endian */
        uint32_t core2_cmd_param5      : 32; /**< [ 31:  0](WO) This register contains parameter 5 associated with a EHSM primitive command from
                                                                 host processor core 2. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_ehsm_core2_cmd_param5_s cn; */
};
typedef union cavm_ehsm_core2_cmd_param5 cavm_ehsm_core2_cmd_param5_t;

#define CAVM_EHSM_CORE2_CMD_PARAM5 CAVM_EHSM_CORE2_CMD_PARAM5_FUNC()
static inline uint64_t CAVM_EHSM_CORE2_CMD_PARAM5_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_EHSM_CORE2_CMD_PARAM5_FUNC(void)
{
    if (cavm_is_model(OCTEONTX_CN20KA))
        return 0x80b000000154ll;
    __cavm_csr_fatal("EHSM_CORE2_CMD_PARAM5", 0, 0, 0, 0, 0, 0, 0);
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
 * EHSM Core2 Cmd Param6 Register
 */
union cavm_ehsm_core2_cmd_param6
{
    uint32_t u;
    struct cavm_ehsm_core2_cmd_param6_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t core2_cmd_param6      : 32; /**< [ 31:  0](WO) This register contains parameter 6 associated with a EHSMprimitive command from
                                                                 host processor core 2. */
#else /* Word 0 - Little Endian */
        uint32_t core2_cmd_param6      : 32; /**< [ 31:  0](WO) This register contains parameter 6 associated with a EHSMprimitive command from
                                                                 host processor core 2. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_ehsm_core2_cmd_param6_s cn; */
};
typedef union cavm_ehsm_core2_cmd_param6 cavm_ehsm_core2_cmd_param6_t;

#define CAVM_EHSM_CORE2_CMD_PARAM6 CAVM_EHSM_CORE2_CMD_PARAM6_FUNC()
static inline uint64_t CAVM_EHSM_CORE2_CMD_PARAM6_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_EHSM_CORE2_CMD_PARAM6_FUNC(void)
{
    if (cavm_is_model(OCTEONTX_CN20KA))
        return 0x80b000000158ll;
    __cavm_csr_fatal("EHSM_CORE2_CMD_PARAM6", 0, 0, 0, 0, 0, 0, 0);
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
 * EHSM Core2 Cmd Param7 Register
 */
union cavm_ehsm_core2_cmd_param7
{
    uint32_t u;
    struct cavm_ehsm_core2_cmd_param7_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t core2_cmd_param7      : 32; /**< [ 31:  0](WO) This register contains parameter 7 associated with a EHSM primitive command from
                                                                 host processor core 2. */
#else /* Word 0 - Little Endian */
        uint32_t core2_cmd_param7      : 32; /**< [ 31:  0](WO) This register contains parameter 7 associated with a EHSM primitive command from
                                                                 host processor core 2. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_ehsm_core2_cmd_param7_s cn; */
};
typedef union cavm_ehsm_core2_cmd_param7 cavm_ehsm_core2_cmd_param7_t;

#define CAVM_EHSM_CORE2_CMD_PARAM7 CAVM_EHSM_CORE2_CMD_PARAM7_FUNC()
static inline uint64_t CAVM_EHSM_CORE2_CMD_PARAM7_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_EHSM_CORE2_CMD_PARAM7_FUNC(void)
{
    if (cavm_is_model(OCTEONTX_CN20KA))
        return 0x80b00000015cll;
    __cavm_csr_fatal("EHSM_CORE2_CMD_PARAM7", 0, 0, 0, 0, 0, 0, 0);
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
 * EHSM Core2 Cmd Param8 Register
 */
union cavm_ehsm_core2_cmd_param8
{
    uint32_t u;
    struct cavm_ehsm_core2_cmd_param8_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t core2_cmd_param8      : 32; /**< [ 31:  0](WO) This register contains parameter 8 associated with a EHSM primitive command from
                                                                 host processor core 2. */
#else /* Word 0 - Little Endian */
        uint32_t core2_cmd_param8      : 32; /**< [ 31:  0](WO) This register contains parameter 8 associated with a EHSM primitive command from
                                                                 host processor core 2. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_ehsm_core2_cmd_param8_s cn; */
};
typedef union cavm_ehsm_core2_cmd_param8 cavm_ehsm_core2_cmd_param8_t;

#define CAVM_EHSM_CORE2_CMD_PARAM8 CAVM_EHSM_CORE2_CMD_PARAM8_FUNC()
static inline uint64_t CAVM_EHSM_CORE2_CMD_PARAM8_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_EHSM_CORE2_CMD_PARAM8_FUNC(void)
{
    if (cavm_is_model(OCTEONTX_CN20KA))
        return 0x80b000000160ll;
    __cavm_csr_fatal("EHSM_CORE2_CMD_PARAM8", 0, 0, 0, 0, 0, 0, 0);
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
 * EHSM Core2 Cmd Param9 Register
 */
union cavm_ehsm_core2_cmd_param9
{
    uint32_t u;
    struct cavm_ehsm_core2_cmd_param9_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t core2_cmd_param9      : 32; /**< [ 31:  0](WO) This register contains parameter 9 associated with a EHSM primitive command from
                                                                 host processor core 2. */
#else /* Word 0 - Little Endian */
        uint32_t core2_cmd_param9      : 32; /**< [ 31:  0](WO) This register contains parameter 9 associated with a EHSM primitive command from
                                                                 host processor core 2. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_ehsm_core2_cmd_param9_s cn; */
};
typedef union cavm_ehsm_core2_cmd_param9 cavm_ehsm_core2_cmd_param9_t;

#define CAVM_EHSM_CORE2_CMD_PARAM9 CAVM_EHSM_CORE2_CMD_PARAM9_FUNC()
static inline uint64_t CAVM_EHSM_CORE2_CMD_PARAM9_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_EHSM_CORE2_CMD_PARAM9_FUNC(void)
{
    if (cavm_is_model(OCTEONTX_CN20KA))
        return 0x80b000000164ll;
    __cavm_csr_fatal("EHSM_CORE2_CMD_PARAM9", 0, 0, 0, 0, 0, 0, 0);
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
 * EHSM Core2 Cmd Ret Status Register
 */
union cavm_ehsm_core2_cmd_ret_status
{
    uint32_t u;
    struct cavm_ehsm_core2_cmd_ret_status_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t core2_cmd_ret_status  : 32; /**< [ 31:  0](RO) This register contains return status associated with a EHSM primitive command
                                                                 from host processor core 2.If it is 0, it indicates command execution success.
                                                                 If it is non 0, it indicates command execution failure and the value is the
                                                                 error code. */
#else /* Word 0 - Little Endian */
        uint32_t core2_cmd_ret_status  : 32; /**< [ 31:  0](RO) This register contains return status associated with a EHSM primitive command
                                                                 from host processor core 2.If it is 0, it indicates command execution success.
                                                                 If it is non 0, it indicates command execution failure and the value is the
                                                                 error code. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_ehsm_core2_cmd_ret_status_s cn; */
};
typedef union cavm_ehsm_core2_cmd_ret_status cavm_ehsm_core2_cmd_ret_status_t;

#define CAVM_EHSM_CORE2_CMD_RET_STATUS CAVM_EHSM_CORE2_CMD_RET_STATUS_FUNC()
static inline uint64_t CAVM_EHSM_CORE2_CMD_RET_STATUS_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_EHSM_CORE2_CMD_RET_STATUS_FUNC(void)
{
    if (cavm_is_model(OCTEONTX_CN20KA))
        return 0x80b0000001a0ll;
    __cavm_csr_fatal("EHSM_CORE2_CMD_RET_STATUS", 0, 0, 0, 0, 0, 0, 0);
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
 * EHSM Core2 Cmd Status0 Register
 */
union cavm_ehsm_core2_cmd_status0
{
    uint32_t u;
    struct cavm_ehsm_core2_cmd_status0_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t core2_cmd_status0     : 32; /**< [ 31:  0](RO) This register contains status 0 associated with a EHSM primitive command from
                                                                 host processor core 2. */
#else /* Word 0 - Little Endian */
        uint32_t core2_cmd_status0     : 32; /**< [ 31:  0](RO) This register contains status 0 associated with a EHSM primitive command from
                                                                 host processor core 2. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_ehsm_core2_cmd_status0_s cn; */
};
typedef union cavm_ehsm_core2_cmd_status0 cavm_ehsm_core2_cmd_status0_t;

#define CAVM_EHSM_CORE2_CMD_STATUS0 CAVM_EHSM_CORE2_CMD_STATUS0_FUNC()
static inline uint64_t CAVM_EHSM_CORE2_CMD_STATUS0_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_EHSM_CORE2_CMD_STATUS0_FUNC(void)
{
    if (cavm_is_model(OCTEONTX_CN20KA))
        return 0x80b0000001a4ll;
    __cavm_csr_fatal("EHSM_CORE2_CMD_STATUS0", 0, 0, 0, 0, 0, 0, 0);
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
 * EHSM Core2 Cmd Status1 Register
 */
union cavm_ehsm_core2_cmd_status1
{
    uint32_t u;
    struct cavm_ehsm_core2_cmd_status1_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t core2_cmd_status1     : 32; /**< [ 31:  0](RO) This register contains status 1 associated with a EHSM primitive command from
                                                                 host processor core 2. */
#else /* Word 0 - Little Endian */
        uint32_t core2_cmd_status1     : 32; /**< [ 31:  0](RO) This register contains status 1 associated with a EHSM primitive command from
                                                                 host processor core 2. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_ehsm_core2_cmd_status1_s cn; */
};
typedef union cavm_ehsm_core2_cmd_status1 cavm_ehsm_core2_cmd_status1_t;

#define CAVM_EHSM_CORE2_CMD_STATUS1 CAVM_EHSM_CORE2_CMD_STATUS1_FUNC()
static inline uint64_t CAVM_EHSM_CORE2_CMD_STATUS1_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_EHSM_CORE2_CMD_STATUS1_FUNC(void)
{
    if (cavm_is_model(OCTEONTX_CN20KA))
        return 0x80b0000001a8ll;
    __cavm_csr_fatal("EHSM_CORE2_CMD_STATUS1", 0, 0, 0, 0, 0, 0, 0);
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
 * EHSM Core2 Cmd Status10 Register
 */
union cavm_ehsm_core2_cmd_status10
{
    uint32_t u;
    struct cavm_ehsm_core2_cmd_status10_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t core2_cmd_status10    : 32; /**< [ 31:  0](RO) This register contains status 10 associated with a EHSM primitive command from
                                                                 host processor core 2. */
#else /* Word 0 - Little Endian */
        uint32_t core2_cmd_status10    : 32; /**< [ 31:  0](RO) This register contains status 10 associated with a EHSM primitive command from
                                                                 host processor core 2. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_ehsm_core2_cmd_status10_s cn; */
};
typedef union cavm_ehsm_core2_cmd_status10 cavm_ehsm_core2_cmd_status10_t;

#define CAVM_EHSM_CORE2_CMD_STATUS10 CAVM_EHSM_CORE2_CMD_STATUS10_FUNC()
static inline uint64_t CAVM_EHSM_CORE2_CMD_STATUS10_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_EHSM_CORE2_CMD_STATUS10_FUNC(void)
{
    if (cavm_is_model(OCTEONTX_CN20KA))
        return 0x80b0000001ccll;
    __cavm_csr_fatal("EHSM_CORE2_CMD_STATUS10", 0, 0, 0, 0, 0, 0, 0);
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
 * EHSM Core2 Cmd Status11 Register
 */
union cavm_ehsm_core2_cmd_status11
{
    uint32_t u;
    struct cavm_ehsm_core2_cmd_status11_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t core2_cmd_status11    : 32; /**< [ 31:  0](RO) This register contains status 11 associated with a EHSM primitive command from
                                                                 host processor core 2. */
#else /* Word 0 - Little Endian */
        uint32_t core2_cmd_status11    : 32; /**< [ 31:  0](RO) This register contains status 11 associated with a EHSM primitive command from
                                                                 host processor core 2. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_ehsm_core2_cmd_status11_s cn; */
};
typedef union cavm_ehsm_core2_cmd_status11 cavm_ehsm_core2_cmd_status11_t;

#define CAVM_EHSM_CORE2_CMD_STATUS11 CAVM_EHSM_CORE2_CMD_STATUS11_FUNC()
static inline uint64_t CAVM_EHSM_CORE2_CMD_STATUS11_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_EHSM_CORE2_CMD_STATUS11_FUNC(void)
{
    if (cavm_is_model(OCTEONTX_CN20KA))
        return 0x80b0000001d0ll;
    __cavm_csr_fatal("EHSM_CORE2_CMD_STATUS11", 0, 0, 0, 0, 0, 0, 0);
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
 * EHSM Core2 Cmd Status12 Register
 */
union cavm_ehsm_core2_cmd_status12
{
    uint32_t u;
    struct cavm_ehsm_core2_cmd_status12_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t core2_cmd_status12    : 32; /**< [ 31:  0](RO) This register contains status 12 associated with a EHSM primitive command from
                                                                 host processor core 2. */
#else /* Word 0 - Little Endian */
        uint32_t core2_cmd_status12    : 32; /**< [ 31:  0](RO) This register contains status 12 associated with a EHSM primitive command from
                                                                 host processor core 2. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_ehsm_core2_cmd_status12_s cn; */
};
typedef union cavm_ehsm_core2_cmd_status12 cavm_ehsm_core2_cmd_status12_t;

#define CAVM_EHSM_CORE2_CMD_STATUS12 CAVM_EHSM_CORE2_CMD_STATUS12_FUNC()
static inline uint64_t CAVM_EHSM_CORE2_CMD_STATUS12_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_EHSM_CORE2_CMD_STATUS12_FUNC(void)
{
    if (cavm_is_model(OCTEONTX_CN20KA))
        return 0x80b0000001d4ll;
    __cavm_csr_fatal("EHSM_CORE2_CMD_STATUS12", 0, 0, 0, 0, 0, 0, 0);
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
 * EHSM Core2 Cmd Status13 Register
 */
union cavm_ehsm_core2_cmd_status13
{
    uint32_t u;
    struct cavm_ehsm_core2_cmd_status13_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t core2_cmd_status13    : 32; /**< [ 31:  0](RO) This register contains status 13 associated with a EHSM primitive command from
                                                                 host processor core 2. */
#else /* Word 0 - Little Endian */
        uint32_t core2_cmd_status13    : 32; /**< [ 31:  0](RO) This register contains status 13 associated with a EHSM primitive command from
                                                                 host processor core 2. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_ehsm_core2_cmd_status13_s cn; */
};
typedef union cavm_ehsm_core2_cmd_status13 cavm_ehsm_core2_cmd_status13_t;

#define CAVM_EHSM_CORE2_CMD_STATUS13 CAVM_EHSM_CORE2_CMD_STATUS13_FUNC()
static inline uint64_t CAVM_EHSM_CORE2_CMD_STATUS13_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_EHSM_CORE2_CMD_STATUS13_FUNC(void)
{
    if (cavm_is_model(OCTEONTX_CN20KA))
        return 0x80b0000001d8ll;
    __cavm_csr_fatal("EHSM_CORE2_CMD_STATUS13", 0, 0, 0, 0, 0, 0, 0);
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
 * EHSM Core2 Cmd Status14 Register
 */
union cavm_ehsm_core2_cmd_status14
{
    uint32_t u;
    struct cavm_ehsm_core2_cmd_status14_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t core2_cmd_status14    : 32; /**< [ 31:  0](RO) This register contains status 14 associated with a EHSM primitive command from
                                                                 host processor core 2. */
#else /* Word 0 - Little Endian */
        uint32_t core2_cmd_status14    : 32; /**< [ 31:  0](RO) This register contains status 14 associated with a EHSM primitive command from
                                                                 host processor core 2. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_ehsm_core2_cmd_status14_s cn; */
};
typedef union cavm_ehsm_core2_cmd_status14 cavm_ehsm_core2_cmd_status14_t;

#define CAVM_EHSM_CORE2_CMD_STATUS14 CAVM_EHSM_CORE2_CMD_STATUS14_FUNC()
static inline uint64_t CAVM_EHSM_CORE2_CMD_STATUS14_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_EHSM_CORE2_CMD_STATUS14_FUNC(void)
{
    if (cavm_is_model(OCTEONTX_CN20KA))
        return 0x80b0000001dcll;
    __cavm_csr_fatal("EHSM_CORE2_CMD_STATUS14", 0, 0, 0, 0, 0, 0, 0);
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
 * EHSM Core2 Cmd Status15 Register
 */
union cavm_ehsm_core2_cmd_status15
{
    uint32_t u;
    struct cavm_ehsm_core2_cmd_status15_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t core2_cmd_status15    : 32; /**< [ 31:  0](RO) This register contains status 15 associated with a EHSM primitive command from
                                                                 host processor core 2. */
#else /* Word 0 - Little Endian */
        uint32_t core2_cmd_status15    : 32; /**< [ 31:  0](RO) This register contains status 15 associated with a EHSM primitive command from
                                                                 host processor core 2. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_ehsm_core2_cmd_status15_s cn; */
};
typedef union cavm_ehsm_core2_cmd_status15 cavm_ehsm_core2_cmd_status15_t;

#define CAVM_EHSM_CORE2_CMD_STATUS15 CAVM_EHSM_CORE2_CMD_STATUS15_FUNC()
static inline uint64_t CAVM_EHSM_CORE2_CMD_STATUS15_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_EHSM_CORE2_CMD_STATUS15_FUNC(void)
{
    if (cavm_is_model(OCTEONTX_CN20KA))
        return 0x80b0000001e0ll;
    __cavm_csr_fatal("EHSM_CORE2_CMD_STATUS15", 0, 0, 0, 0, 0, 0, 0);
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
 * EHSM Core2 Cmd Status2 Register
 */
union cavm_ehsm_core2_cmd_status2
{
    uint32_t u;
    struct cavm_ehsm_core2_cmd_status2_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t core2_cmd_status2     : 32; /**< [ 31:  0](RO) This register contains status 2 associated with a EHSM primitive command from
                                                                 host processor core 2. */
#else /* Word 0 - Little Endian */
        uint32_t core2_cmd_status2     : 32; /**< [ 31:  0](RO) This register contains status 2 associated with a EHSM primitive command from
                                                                 host processor core 2. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_ehsm_core2_cmd_status2_s cn; */
};
typedef union cavm_ehsm_core2_cmd_status2 cavm_ehsm_core2_cmd_status2_t;

#define CAVM_EHSM_CORE2_CMD_STATUS2 CAVM_EHSM_CORE2_CMD_STATUS2_FUNC()
static inline uint64_t CAVM_EHSM_CORE2_CMD_STATUS2_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_EHSM_CORE2_CMD_STATUS2_FUNC(void)
{
    if (cavm_is_model(OCTEONTX_CN20KA))
        return 0x80b0000001acll;
    __cavm_csr_fatal("EHSM_CORE2_CMD_STATUS2", 0, 0, 0, 0, 0, 0, 0);
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
 * EHSM Core2 Cmd Status3 Register
 */
union cavm_ehsm_core2_cmd_status3
{
    uint32_t u;
    struct cavm_ehsm_core2_cmd_status3_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t core2_cmd_status3     : 32; /**< [ 31:  0](RO) This register contains status 3 associated with a EHSM primitive command from
                                                                 host processor core 2. */
#else /* Word 0 - Little Endian */
        uint32_t core2_cmd_status3     : 32; /**< [ 31:  0](RO) This register contains status 3 associated with a EHSM primitive command from
                                                                 host processor core 2. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_ehsm_core2_cmd_status3_s cn; */
};
typedef union cavm_ehsm_core2_cmd_status3 cavm_ehsm_core2_cmd_status3_t;

#define CAVM_EHSM_CORE2_CMD_STATUS3 CAVM_EHSM_CORE2_CMD_STATUS3_FUNC()
static inline uint64_t CAVM_EHSM_CORE2_CMD_STATUS3_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_EHSM_CORE2_CMD_STATUS3_FUNC(void)
{
    if (cavm_is_model(OCTEONTX_CN20KA))
        return 0x80b0000001b0ll;
    __cavm_csr_fatal("EHSM_CORE2_CMD_STATUS3", 0, 0, 0, 0, 0, 0, 0);
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
 * EHSM Core2 Cmd Status4 Register
 */
union cavm_ehsm_core2_cmd_status4
{
    uint32_t u;
    struct cavm_ehsm_core2_cmd_status4_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t core2_cmd_status4     : 32; /**< [ 31:  0](RO) This register contains status 4 associated with a EHSM primitive command from
                                                                 host processor core 2. */
#else /* Word 0 - Little Endian */
        uint32_t core2_cmd_status4     : 32; /**< [ 31:  0](RO) This register contains status 4 associated with a EHSM primitive command from
                                                                 host processor core 2. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_ehsm_core2_cmd_status4_s cn; */
};
typedef union cavm_ehsm_core2_cmd_status4 cavm_ehsm_core2_cmd_status4_t;

#define CAVM_EHSM_CORE2_CMD_STATUS4 CAVM_EHSM_CORE2_CMD_STATUS4_FUNC()
static inline uint64_t CAVM_EHSM_CORE2_CMD_STATUS4_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_EHSM_CORE2_CMD_STATUS4_FUNC(void)
{
    if (cavm_is_model(OCTEONTX_CN20KA))
        return 0x80b0000001b4ll;
    __cavm_csr_fatal("EHSM_CORE2_CMD_STATUS4", 0, 0, 0, 0, 0, 0, 0);
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
 * EHSM Core2 Cmd Status5 Register
 */
union cavm_ehsm_core2_cmd_status5
{
    uint32_t u;
    struct cavm_ehsm_core2_cmd_status5_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t core2_cmd_status5     : 32; /**< [ 31:  0](RO) This register contains status 5 associated with a EHSM primitive command from
                                                                 host processor core 2. */
#else /* Word 0 - Little Endian */
        uint32_t core2_cmd_status5     : 32; /**< [ 31:  0](RO) This register contains status 5 associated with a EHSM primitive command from
                                                                 host processor core 2. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_ehsm_core2_cmd_status5_s cn; */
};
typedef union cavm_ehsm_core2_cmd_status5 cavm_ehsm_core2_cmd_status5_t;

#define CAVM_EHSM_CORE2_CMD_STATUS5 CAVM_EHSM_CORE2_CMD_STATUS5_FUNC()
static inline uint64_t CAVM_EHSM_CORE2_CMD_STATUS5_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_EHSM_CORE2_CMD_STATUS5_FUNC(void)
{
    if (cavm_is_model(OCTEONTX_CN20KA))
        return 0x80b0000001b8ll;
    __cavm_csr_fatal("EHSM_CORE2_CMD_STATUS5", 0, 0, 0, 0, 0, 0, 0);
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
 * EHSM Core2 Cmd Status6 Register
 */
union cavm_ehsm_core2_cmd_status6
{
    uint32_t u;
    struct cavm_ehsm_core2_cmd_status6_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t core2_cmd_status6     : 32; /**< [ 31:  0](RO) This register contains status 6 associated with a EHSM primitive command from
                                                                 host processor core 2. */
#else /* Word 0 - Little Endian */
        uint32_t core2_cmd_status6     : 32; /**< [ 31:  0](RO) This register contains status 6 associated with a EHSM primitive command from
                                                                 host processor core 2. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_ehsm_core2_cmd_status6_s cn; */
};
typedef union cavm_ehsm_core2_cmd_status6 cavm_ehsm_core2_cmd_status6_t;

#define CAVM_EHSM_CORE2_CMD_STATUS6 CAVM_EHSM_CORE2_CMD_STATUS6_FUNC()
static inline uint64_t CAVM_EHSM_CORE2_CMD_STATUS6_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_EHSM_CORE2_CMD_STATUS6_FUNC(void)
{
    if (cavm_is_model(OCTEONTX_CN20KA))
        return 0x80b0000001bcll;
    __cavm_csr_fatal("EHSM_CORE2_CMD_STATUS6", 0, 0, 0, 0, 0, 0, 0);
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
 * EHSM Core2 Cmd Status7 Register
 */
union cavm_ehsm_core2_cmd_status7
{
    uint32_t u;
    struct cavm_ehsm_core2_cmd_status7_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t core2_cmd_status7     : 32; /**< [ 31:  0](RO) This register contains status 7 associated with a EHSM primitive command from
                                                                 host processor core 2. */
#else /* Word 0 - Little Endian */
        uint32_t core2_cmd_status7     : 32; /**< [ 31:  0](RO) This register contains status 7 associated with a EHSM primitive command from
                                                                 host processor core 2. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_ehsm_core2_cmd_status7_s cn; */
};
typedef union cavm_ehsm_core2_cmd_status7 cavm_ehsm_core2_cmd_status7_t;

#define CAVM_EHSM_CORE2_CMD_STATUS7 CAVM_EHSM_CORE2_CMD_STATUS7_FUNC()
static inline uint64_t CAVM_EHSM_CORE2_CMD_STATUS7_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_EHSM_CORE2_CMD_STATUS7_FUNC(void)
{
    if (cavm_is_model(OCTEONTX_CN20KA))
        return 0x80b0000001c0ll;
    __cavm_csr_fatal("EHSM_CORE2_CMD_STATUS7", 0, 0, 0, 0, 0, 0, 0);
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
 * EHSM Core2 Cmd Status8 Register
 */
union cavm_ehsm_core2_cmd_status8
{
    uint32_t u;
    struct cavm_ehsm_core2_cmd_status8_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t core2_cmd_status8     : 32; /**< [ 31:  0](RO) This register contains status 8 associated with a EHSM primitive command from
                                                                 host processor core 2. */
#else /* Word 0 - Little Endian */
        uint32_t core2_cmd_status8     : 32; /**< [ 31:  0](RO) This register contains status 8 associated with a EHSM primitive command from
                                                                 host processor core 2. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_ehsm_core2_cmd_status8_s cn; */
};
typedef union cavm_ehsm_core2_cmd_status8 cavm_ehsm_core2_cmd_status8_t;

#define CAVM_EHSM_CORE2_CMD_STATUS8 CAVM_EHSM_CORE2_CMD_STATUS8_FUNC()
static inline uint64_t CAVM_EHSM_CORE2_CMD_STATUS8_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_EHSM_CORE2_CMD_STATUS8_FUNC(void)
{
    if (cavm_is_model(OCTEONTX_CN20KA))
        return 0x80b0000001c4ll;
    __cavm_csr_fatal("EHSM_CORE2_CMD_STATUS8", 0, 0, 0, 0, 0, 0, 0);
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
 * EHSM Core2 Cmd Status9 Register
 */
union cavm_ehsm_core2_cmd_status9
{
    uint32_t u;
    struct cavm_ehsm_core2_cmd_status9_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t core2_cmd_status9     : 32; /**< [ 31:  0](RO) This register contains status 9 associated with a EHSM primitive command from
                                                                 host processor core 2. */
#else /* Word 0 - Little Endian */
        uint32_t core2_cmd_status9     : 32; /**< [ 31:  0](RO) This register contains status 9 associated with a EHSM primitive command from
                                                                 host processor core 2. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_ehsm_core2_cmd_status9_s cn; */
};
typedef union cavm_ehsm_core2_cmd_status9 cavm_ehsm_core2_cmd_status9_t;

#define CAVM_EHSM_CORE2_CMD_STATUS9 CAVM_EHSM_CORE2_CMD_STATUS9_FUNC()
static inline uint64_t CAVM_EHSM_CORE2_CMD_STATUS9_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_EHSM_CORE2_CMD_STATUS9_FUNC(void)
{
    if (cavm_is_model(OCTEONTX_CN20KA))
        return 0x80b0000001c8ll;
    __cavm_csr_fatal("EHSM_CORE2_CMD_STATUS9", 0, 0, 0, 0, 0, 0, 0);
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
 * EHSM Core2 Hst Interrupt Mask Register
 */
union cavm_ehsm_core2_hst_interrupt_mask
{
    uint32_t u;
    struct cavm_ehsm_core2_hst_interrupt_mask_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t core2_hst_interrupt_mask : 32;/**< [ 31:  0](R/W) This is host interrupt masking register for host processor core 2 */
#else /* Word 0 - Little Endian */
        uint32_t core2_hst_interrupt_mask : 32;/**< [ 31:  0](R/W) This is host interrupt masking register for host processor core 2 */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_ehsm_core2_hst_interrupt_mask_s cn; */
};
typedef union cavm_ehsm_core2_hst_interrupt_mask cavm_ehsm_core2_hst_interrupt_mask_t;

#define CAVM_EHSM_CORE2_HST_INTERRUPT_MASK CAVM_EHSM_CORE2_HST_INTERRUPT_MASK_FUNC()
static inline uint64_t CAVM_EHSM_CORE2_HST_INTERRUPT_MASK_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_EHSM_CORE2_HST_INTERRUPT_MASK_FUNC(void)
{
    if (cavm_is_model(OCTEONTX_CN20KA))
        return 0x80b0000001e8ll;
    __cavm_csr_fatal("EHSM_CORE2_HST_INTERRUPT_MASK", 0, 0, 0, 0, 0, 0, 0);
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
 * EHSM Core2 Hst Interrupt Rst Register
 */
union cavm_ehsm_core2_hst_interrupt_rst
{
    uint32_t u;
    struct cavm_ehsm_core2_hst_interrupt_rst_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t sp_rsvd0              : 14; /**< [ 31: 18](RO) Missing register field description. */
        uint32_t cmd_buffer_full_access : 1; /**< [ 17: 17](R/W) When active, this interrupt indicates to the host processor core 2 that an
                                                                 attempt was made to write the command register or the parameter register space
                                                                 when the command buffer of host processor core 2 was full. The write attempt
                                                                 will be blocked. It does not impact the command and parameters that is already
                                                                 queued. The host can rewrite the command or parameter when CMD buffer of host
                                                                 processor core 2 is empty. Host can read CORE2_CMD_BUFFER_FULL field in
                                                                 CMD_FIFO_STATUS to check if CMD buffer of host processor core 2 is available to
                                                                 be written.To reset this field, write a 1 to clear the interrupt. */
        uint32_t hst_addr_range        : 1;  /**< [ 16: 16](R/W) This interrupt indicates that the host attempted to access an address to which
                                                                 it is not allowed access. This interrupt also triggers if a write is made to a
                                                                 read-only register, or a read to a write-only register.To reset this field,
                                                                 write a 1 to clear the interrupt. */
        uint32_t sp_rsvd1              : 11; /**< [ 15:  5](RO) Missing register field description. */
        uint32_t ram0_wakeup_timeout   : 1;  /**< [  4:  4](R/W) When set, this interrupt indicates that CM3 RAM part 0 has wakeup timeout error.
                                                                 It is triggered by 1 of the following scenarios1. ehsm_cm3_ram_part0_dslp is not
                                                                 driven to 0 within 32 cycles of ehsm_warm_rstn release2. ehsm_cm3_ram_part0_dslp
                                                                 is not driven to 0 within 32 cycles after ehsm_cm3_ram_part0_wakeup_requestHost
                                                                 should check SHADOW_REG_STATUS bit 27 and 28 to determine which scenario is the
                                                                 root cause of timeoutTo reset this field, write a 1 to clear the interrupt. */
        uint32_t watchdog_timeout      : 1;  /**< [  3:  3](R/W) This interrupt indicates that watchdog timer timeout happened and eHSM reset
                                                                 itself.To reset this field, write a 1 to clear the interrupt. */
        uint32_t sysrdyp_timeout       : 1;  /**< [  2:  2](R/W) This field indicates that SYSRDYP timeout is detected on OTP or PUF power
                                                                 switch.If enable_puf field in OTP efuse is 0, only SYSRDYP timeout of OTP power
                                                                 switch can trigger this host interruptIf enable_puf field in OTP efuse is 1,
                                                                 SYSRDYP timeout of either OTP or PUF power switch can trigger this host
                                                                 interrupt. User can read SHADOW_REG_STATUS to determine SYSRDYP timeout is
                                                                 detected on which power switch */
        uint32_t ehsm_mem_fail         : 1;  /**< [  1:  1](R/W) When set, this interrupt indicates that CM3 ROM, CM3 RAM or SPAD memory has
                                                                 uncorrectable error, or shadow buffer has parity error. User can read
                                                                 SHADOW_REG_STATUS to determine which memory or shadow buffer failsTo reset this
                                                                 field, write a 1 to clear the interrupt. */
        uint32_t irom_exe_int          : 1;  /**< [  0:  0](R/W) When set, this interrupt indicates that the secure processor has completed a
                                                                 primitive issued by host processor core 2, or completed execution for boot upTo
                                                                 reset this field, write a 1 to clear the interrupt. */
#else /* Word 0 - Little Endian */
        uint32_t irom_exe_int          : 1;  /**< [  0:  0](R/W) When set, this interrupt indicates that the secure processor has completed a
                                                                 primitive issued by host processor core 2, or completed execution for boot upTo
                                                                 reset this field, write a 1 to clear the interrupt. */
        uint32_t ehsm_mem_fail         : 1;  /**< [  1:  1](R/W) When set, this interrupt indicates that CM3 ROM, CM3 RAM or SPAD memory has
                                                                 uncorrectable error, or shadow buffer has parity error. User can read
                                                                 SHADOW_REG_STATUS to determine which memory or shadow buffer failsTo reset this
                                                                 field, write a 1 to clear the interrupt. */
        uint32_t sysrdyp_timeout       : 1;  /**< [  2:  2](R/W) This field indicates that SYSRDYP timeout is detected on OTP or PUF power
                                                                 switch.If enable_puf field in OTP efuse is 0, only SYSRDYP timeout of OTP power
                                                                 switch can trigger this host interruptIf enable_puf field in OTP efuse is 1,
                                                                 SYSRDYP timeout of either OTP or PUF power switch can trigger this host
                                                                 interrupt. User can read SHADOW_REG_STATUS to determine SYSRDYP timeout is
                                                                 detected on which power switch */
        uint32_t watchdog_timeout      : 1;  /**< [  3:  3](R/W) This interrupt indicates that watchdog timer timeout happened and eHSM reset
                                                                 itself.To reset this field, write a 1 to clear the interrupt. */
        uint32_t ram0_wakeup_timeout   : 1;  /**< [  4:  4](R/W) When set, this interrupt indicates that CM3 RAM part 0 has wakeup timeout error.
                                                                 It is triggered by 1 of the following scenarios1. ehsm_cm3_ram_part0_dslp is not
                                                                 driven to 0 within 32 cycles of ehsm_warm_rstn release2. ehsm_cm3_ram_part0_dslp
                                                                 is not driven to 0 within 32 cycles after ehsm_cm3_ram_part0_wakeup_requestHost
                                                                 should check SHADOW_REG_STATUS bit 27 and 28 to determine which scenario is the
                                                                 root cause of timeoutTo reset this field, write a 1 to clear the interrupt. */
        uint32_t sp_rsvd1              : 11; /**< [ 15:  5](RO) Missing register field description. */
        uint32_t hst_addr_range        : 1;  /**< [ 16: 16](R/W) This interrupt indicates that the host attempted to access an address to which
                                                                 it is not allowed access. This interrupt also triggers if a write is made to a
                                                                 read-only register, or a read to a write-only register.To reset this field,
                                                                 write a 1 to clear the interrupt. */
        uint32_t cmd_buffer_full_access : 1; /**< [ 17: 17](R/W) When active, this interrupt indicates to the host processor core 2 that an
                                                                 attempt was made to write the command register or the parameter register space
                                                                 when the command buffer of host processor core 2 was full. The write attempt
                                                                 will be blocked. It does not impact the command and parameters that is already
                                                                 queued. The host can rewrite the command or parameter when CMD buffer of host
                                                                 processor core 2 is empty. Host can read CORE2_CMD_BUFFER_FULL field in
                                                                 CMD_FIFO_STATUS to check if CMD buffer of host processor core 2 is available to
                                                                 be written.To reset this field, write a 1 to clear the interrupt. */
        uint32_t sp_rsvd0              : 14; /**< [ 31: 18](RO) Missing register field description. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_ehsm_core2_hst_interrupt_rst_s cn; */
};
typedef union cavm_ehsm_core2_hst_interrupt_rst cavm_ehsm_core2_hst_interrupt_rst_t;

#define CAVM_EHSM_CORE2_HST_INTERRUPT_RST CAVM_EHSM_CORE2_HST_INTERRUPT_RST_FUNC()
static inline uint64_t CAVM_EHSM_CORE2_HST_INTERRUPT_RST_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_EHSM_CORE2_HST_INTERRUPT_RST_FUNC(void)
{
    if (cavm_is_model(OCTEONTX_CN20KA))
        return 0x80b0000001e4ll;
    __cavm_csr_fatal("EHSM_CORE2_HST_INTERRUPT_RST", 0, 0, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_EHSM_CORE2_HST_INTERRUPT_RST cavm_ehsm_core2_hst_interrupt_rst_t
#define bustype_CAVM_EHSM_CORE2_HST_INTERRUPT_RST CSR_TYPE_NCB32b
#define basename_CAVM_EHSM_CORE2_HST_INTERRUPT_RST "EHSM_CORE2_HST_INTERRUPT_RST"
#define device_bar_CAVM_EHSM_CORE2_HST_INTERRUPT_RST 0x0 /* PF_BAR0 */
#define busnum_CAVM_EHSM_CORE2_HST_INTERRUPT_RST 0
#define arguments_CAVM_EHSM_CORE2_HST_INTERRUPT_RST -1,-1,-1,-1

/**
 * Register (NCB32b) ehsm_ebg_setting_status
 *
 * EHSM Ebg Setting Status Register
 */
union cavm_ehsm_ebg_setting_status
{
    uint32_t u;
    struct cavm_ehsm_ebg_setting_status_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t ds_ratio              : 4;  /**< [ 31: 28](RO) This is the ds_ratio field value in OTP. If there is uncorrectable error, this field will be all 1s */
        uint32_t rng_slow_div          : 8;  /**< [ 27: 20](RO) This is the rng_slow_div field value in OTP. If there is uncorrectable error,
                                                                 this field will be all 1s */
        uint32_t repitition_cutoff_value : 9;/**< [ 19: 11](RO) This is the repitition count part of ebg_test_cutoff_value field value in OTP.
                                                                 If there is uncorrectable error, this field will be all 1s */
        uint32_t adaptive_cutoff_value : 11; /**< [ 10:  0](RO) This is the adaptive proportion part of ebg_test_cutoff_value field value in
                                                                 OTP. If there is uncorrectable error, this field will be all 1s */
#else /* Word 0 - Little Endian */
        uint32_t adaptive_cutoff_value : 11; /**< [ 10:  0](RO) This is the adaptive proportion part of ebg_test_cutoff_value field value in
                                                                 OTP. If there is uncorrectable error, this field will be all 1s */
        uint32_t repitition_cutoff_value : 9;/**< [ 19: 11](RO) This is the repitition count part of ebg_test_cutoff_value field value in OTP.
                                                                 If there is uncorrectable error, this field will be all 1s */
        uint32_t rng_slow_div          : 8;  /**< [ 27: 20](RO) This is the rng_slow_div field value in OTP. If there is uncorrectable error,
                                                                 this field will be all 1s */
        uint32_t ds_ratio              : 4;  /**< [ 31: 28](RO) This is the ds_ratio field value in OTP. If there is uncorrectable error, this field will be all 1s */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_ehsm_ebg_setting_status_s cn; */
};
typedef union cavm_ehsm_ebg_setting_status cavm_ehsm_ebg_setting_status_t;

#define CAVM_EHSM_EBG_SETTING_STATUS CAVM_EHSM_EBG_SETTING_STATUS_FUNC()
static inline uint64_t CAVM_EHSM_EBG_SETTING_STATUS_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_EHSM_EBG_SETTING_STATUS_FUNC(void)
{
    if (cavm_is_model(OCTEONTX_CN20KA))
        return 0x80b000000134ll;
    __cavm_csr_fatal("EHSM_EBG_SETTING_STATUS", 0, 0, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_EHSM_EBG_SETTING_STATUS cavm_ehsm_ebg_setting_status_t
#define bustype_CAVM_EHSM_EBG_SETTING_STATUS CSR_TYPE_NCB32b
#define basename_CAVM_EHSM_EBG_SETTING_STATUS "EHSM_EBG_SETTING_STATUS"
#define device_bar_CAVM_EHSM_EBG_SETTING_STATUS 0x0 /* PF_BAR0 */
#define busnum_CAVM_EHSM_EBG_SETTING_STATUS 0
#define arguments_CAVM_EHSM_EBG_SETTING_STATUS -1,-1,-1,-1

/**
 * Register (NCB32b) ehsm_ehsm_rev
 *
 * EHSM Ehsm Rev Register
 */
union cavm_ehsm_ehsm_rev
{
    uint32_t u;
    struct cavm_ehsm_ehsm_rev_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t ehsm_rev              : 32; /**< [ 31:  0](RO) This is eHSM revision. */
#else /* Word 0 - Little Endian */
        uint32_t ehsm_rev              : 32; /**< [ 31:  0](RO) This is eHSM revision. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_ehsm_ehsm_rev_s cn; */
};
typedef union cavm_ehsm_ehsm_rev cavm_ehsm_ehsm_rev_t;

#define CAVM_EHSM_EHSM_REV CAVM_EHSM_EHSM_REV_FUNC()
static inline uint64_t CAVM_EHSM_EHSM_REV_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_EHSM_EHSM_REV_FUNC(void)
{
    if (cavm_is_model(OCTEONTX_CN20KA))
        return 0x80b0000000dcll;
    __cavm_csr_fatal("EHSM_EHSM_REV", 0, 0, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_EHSM_EHSM_REV cavm_ehsm_ehsm_rev_t
#define bustype_CAVM_EHSM_EHSM_REV CSR_TYPE_NCB32b
#define basename_CAVM_EHSM_EHSM_REV "EHSM_EHSM_REV"
#define device_bar_CAVM_EHSM_EHSM_REV 0x0 /* PF_BAR0 */
#define busnum_CAVM_EHSM_EHSM_REV 0
#define arguments_CAVM_EHSM_EHSM_REV -1,-1,-1,-1

/**
 * Register (NCB32b) ehsm_ehsm_sp_freq
 *
 * EHSM Ehsm Sp Freq Register
 */
union cavm_ehsm_ehsm_sp_freq
{
    uint32_t u;
    struct cavm_ehsm_ehsm_sp_freq_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t ehsm_sp_freq          : 32; /**< [ 31:  0](RO) EHSM secure processor(CM3) frequency in KHz. It is used by IROM to covert cycle
                                                                 count to seconds. It is also the maximum frequency of eHSM clock */
#else /* Word 0 - Little Endian */
        uint32_t ehsm_sp_freq          : 32; /**< [ 31:  0](RO) EHSM secure processor(CM3) frequency in KHz. It is used by IROM to covert cycle
                                                                 count to seconds. It is also the maximum frequency of eHSM clock */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_ehsm_ehsm_sp_freq_s cn; */
};
typedef union cavm_ehsm_ehsm_sp_freq cavm_ehsm_ehsm_sp_freq_t;

#define CAVM_EHSM_EHSM_SP_FREQ CAVM_EHSM_EHSM_SP_FREQ_FUNC()
static inline uint64_t CAVM_EHSM_EHSM_SP_FREQ_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_EHSM_EHSM_SP_FREQ_FUNC(void)
{
    if (cavm_is_model(OCTEONTX_CN20KA))
        return 0x80b0000000e0ll;
    __cavm_csr_fatal("EHSM_EHSM_SP_FREQ", 0, 0, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_EHSM_EHSM_SP_FREQ cavm_ehsm_ehsm_sp_freq_t
#define bustype_CAVM_EHSM_EHSM_SP_FREQ CSR_TYPE_NCB32b
#define basename_CAVM_EHSM_EHSM_SP_FREQ "EHSM_EHSM_SP_FREQ"
#define device_bar_CAVM_EHSM_EHSM_SP_FREQ 0x0 /* PF_BAR0 */
#define busnum_CAVM_EHSM_EHSM_SP_FREQ 0
#define arguments_CAVM_EHSM_EHSM_SP_FREQ -1,-1,-1,-1

/**
 * Register (NCB32b) ehsm_fw_security_version
 *
 * EHSM Fw Security Version Register
 */
union cavm_ehsm_fw_security_version
{
    uint32_t u;
    struct cavm_ehsm_fw_security_version_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t sp_rsvd0              : 19; /**< [ 31: 13](RO) Missing register field description. */
        uint32_t main_fw_security_version : 7;/**< [ 12:  6](RO) This is the shadow register for main_fw_security_version_part1~12. The value range is 0~120. */
        uint32_t loader_fw_security_version : 6;/**< [  5:  0](RO) This is the shadow register for loader_fw_security_version_part1~4 field from
                                                                 OTP. The value range is 0~40. */
#else /* Word 0 - Little Endian */
        uint32_t loader_fw_security_version : 6;/**< [  5:  0](RO) This is the shadow register for loader_fw_security_version_part1~4 field from
                                                                 OTP. The value range is 0~40. */
        uint32_t main_fw_security_version : 7;/**< [ 12:  6](RO) This is the shadow register for main_fw_security_version_part1~12. The value range is 0~120. */
        uint32_t sp_rsvd0              : 19; /**< [ 31: 13](RO) Missing register field description. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_ehsm_fw_security_version_s cn; */
};
typedef union cavm_ehsm_fw_security_version cavm_ehsm_fw_security_version_t;

#define CAVM_EHSM_FW_SECURITY_VERSION CAVM_EHSM_FW_SECURITY_VERSION_FUNC()
static inline uint64_t CAVM_EHSM_FW_SECURITY_VERSION_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_EHSM_FW_SECURITY_VERSION_FUNC(void)
{
    if (cavm_is_model(OCTEONTX_CN20KA))
        return 0x80b000000124ll;
    __cavm_csr_fatal("EHSM_FW_SECURITY_VERSION", 0, 0, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_EHSM_FW_SECURITY_VERSION cavm_ehsm_fw_security_version_t
#define bustype_CAVM_EHSM_FW_SECURITY_VERSION CSR_TYPE_NCB32b
#define basename_CAVM_EHSM_FW_SECURITY_VERSION "EHSM_FW_SECURITY_VERSION"
#define device_bar_CAVM_EHSM_FW_SECURITY_VERSION 0x0 /* PF_BAR0 */
#define busnum_CAVM_EHSM_FW_SECURITY_VERSION 0
#define arguments_CAVM_EHSM_FW_SECURITY_VERSION -1,-1,-1,-1

/**
 * Register (NCB32b) ehsm_hst_except_addr
 *
 * EHSM Hst Except Addr Register
 */
union cavm_ehsm_hst_except_addr
{
    uint32_t u;
    struct cavm_ehsm_hst_except_addr_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t hst_except_addr       : 32; /**< [ 31:  0](R/W) This is the address that triggers HST_ADDR_RANGE in CORE1_HST_INTERRUPT_RST and
                                                                 CORE2_HST_INTERRUPT_RST */
#else /* Word 0 - Little Endian */
        uint32_t hst_except_addr       : 32; /**< [ 31:  0](R/W) This is the address that triggers HST_ADDR_RANGE in CORE1_HST_INTERRUPT_RST and
                                                                 CORE2_HST_INTERRUPT_RST */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_ehsm_hst_except_addr_s cn; */
};
typedef union cavm_ehsm_hst_except_addr cavm_ehsm_hst_except_addr_t;

#define CAVM_EHSM_HST_EXCEPT_ADDR CAVM_EHSM_HST_EXCEPT_ADDR_FUNC()
static inline uint64_t CAVM_EHSM_HST_EXCEPT_ADDR_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_EHSM_HST_EXCEPT_ADDR_FUNC(void)
{
    if (cavm_is_model(OCTEONTX_CN20KA))
        return 0x80b0000000d0ll;
    __cavm_csr_fatal("EHSM_HST_EXCEPT_ADDR", 0, 0, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_EHSM_HST_EXCEPT_ADDR cavm_ehsm_hst_except_addr_t
#define bustype_CAVM_EHSM_HST_EXCEPT_ADDR CSR_TYPE_NCB32b
#define basename_CAVM_EHSM_HST_EXCEPT_ADDR "EHSM_HST_EXCEPT_ADDR"
#define device_bar_CAVM_EHSM_HST_EXCEPT_ADDR 0x0 /* PF_BAR0 */
#define busnum_CAVM_EHSM_HST_EXCEPT_ADDR 0
#define arguments_CAVM_EHSM_HST_EXCEPT_ADDR -1,-1,-1,-1

/**
 * Register (NCB32b) ehsm_hst_trust
 *
 * EHSM Hst Trust Register
 */
union cavm_ehsm_hst_trust
{
    uint32_t u;
    struct cavm_ehsm_hst_trust_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t hst_trust             : 32; /**< [ 31:  0](RO) Missing register field description. */
#else /* Word 0 - Little Endian */
        uint32_t hst_trust             : 32; /**< [ 31:  0](RO) Missing register field description. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_ehsm_hst_trust_s cn; */
};
typedef union cavm_ehsm_hst_trust cavm_ehsm_hst_trust_t;

#define CAVM_EHSM_HST_TRUST CAVM_EHSM_HST_TRUST_FUNC()
static inline uint64_t CAVM_EHSM_HST_TRUST_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_EHSM_HST_TRUST_FUNC(void)
{
    if (cavm_is_model(OCTEONTX_CN20KA))
        return 0x80b0000000d4ll;
    __cavm_csr_fatal("EHSM_HST_TRUST", 0, 0, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_EHSM_HST_TRUST cavm_ehsm_hst_trust_t
#define bustype_CAVM_EHSM_HST_TRUST CSR_TYPE_NCB32b
#define basename_CAVM_EHSM_HST_TRUST "EHSM_HST_TRUST"
#define device_bar_CAVM_EHSM_HST_TRUST 0x0 /* PF_BAR0 */
#define busnum_CAVM_EHSM_HST_TRUST 0
#define arguments_CAVM_EHSM_HST_TRUST -1,-1,-1,-1

/**
 * Register (NCB32b) ehsm_key_revoc_status
 *
 * EHSM Key Revoc Status Register
 */
union cavm_ehsm_key_revoc_status
{
    uint32_t u;
    struct cavm_ehsm_key_revoc_status_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t sp_rsvd0              : 10; /**< [ 31: 22](RO) Missing register field description. */
        uint32_t kak4_usage            : 2;  /**< [ 21: 20](RO) 2'b00: KAK4 can be used for both Secure Boot Authentication and Auth
                                                                 CMD2'b01:KAK4 is exclusively used for Secure Boot AuthenticationKAK4 is
                                                                 exclusively used for Auth CMD, covering all sub-cmd of Auth CMD2b'10:KAK4 is
                                                                 exclusively used for Auth CMD, and only covering Auth CMD sub-cmd of
                                                                 (A)activating DAP/JTAG port and (B)LCS advance to FA_STATE.2b'11:It cannot be
                                                                 used for the rest of Auth CMD's sub-cmd. */
        uint32_t kak3_usage            : 2;  /**< [ 19: 18](RO) 2'b00: KAK3 can be used for both Secure Boot Authentication and Auth
                                                                 CMD2'b01:KAK3 is exclusively used for Secure Boot AuthenticationKAK3 is
                                                                 exclusively used for Auth CMD, covering all sub-cmd of Auth CMD2b'10:KAK3 is
                                                                 exclusively used for Auth CMD, and only covering Auth CMD sub-cmd of
                                                                 (A)activating DAP/JTAG port and (B)LCS advance to FA_STATE.2b'11:It cannot be
                                                                 used for the rest of Auth CMD's sub-cmd. */
        uint32_t kak2_usage            : 2;  /**< [ 17: 16](RO) 2'b00: KAK2 can be used for both Secure Boot Authentication and Auth
                                                                 CMD2'b01:KAK2 is exclusively used for Secure Boot AuthenticationKAK2 is
                                                                 exclusively used for Auth CMD, covering all sub-cmd of Auth CMD2b'10:KAK2 is
                                                                 exclusively used for Auth CMD, and only covering Auth CMD sub-cmd of
                                                                 (A)activating DAP/JTAG port and (B)LCS advance to FA_STATE.2b'11:It cannot be
                                                                 used for the rest of Auth CMD's sub-cmd. */
        uint32_t kak1_usage            : 2;  /**< [ 15: 14](RO) 2'b00: KAK1 can be used for both Secure Boot Authentication and Auth
                                                                 CMD2'b01:KAK1 is exclusively used for Secure Boot AuthenticationKAK1 is
                                                                 exclusively used for Auth CMD, covering all sub-cmd of Auth CMD2b'10:KAK1 is
                                                                 exclusively used for Auth CMD, and only covering Auth CMD sub-cmd of
                                                                 (A)activating DAP/JTAG port and (B)LCS advance to FA_STATE.2b'11:It cannot be
                                                                 used for the rest of Auth CMD's sub-cmd. */
        uint32_t kak0_usage            : 2;  /**< [ 13: 12](RO) 2'b00: KAK0 can be used for both Secure Boot Authentication and Auth
                                                                 CMD2'b01:KAK0 is exclusively used for Secure Boot AuthenticationKAK0 is
                                                                 exclusively used for Auth CMD, covering all sub-cmd of Auth CMD2b'10:KAK0 is
                                                                 exclusively used for Auth CMD, and only covering Auth CMD sub-cmd of
                                                                 (A)activating DAP/JTAG port and (B)LCS advance to FA_STATE.2b'11:It cannot be
                                                                 used for the rest of Auth CMD's sub-cmd. */
        uint32_t puf_key_revocation    : 2;  /**< [ 11: 10](RO) This is the shadow register for puf_key_revocation field from OTP. */
        uint32_t key_container_revocation : 5;/**< [  9:  5](RO) This is the shadow register for key_container_revocation field from OTP. */
        uint32_t key_manifest_version_control : 5;/**< [  4:  0](RO) This is the shadow register for key_manifest_version_control field from OTP. The
                                                                 value range is 0~20 */
#else /* Word 0 - Little Endian */
        uint32_t key_manifest_version_control : 5;/**< [  4:  0](RO) This is the shadow register for key_manifest_version_control field from OTP. The
                                                                 value range is 0~20 */
        uint32_t key_container_revocation : 5;/**< [  9:  5](RO) This is the shadow register for key_container_revocation field from OTP. */
        uint32_t puf_key_revocation    : 2;  /**< [ 11: 10](RO) This is the shadow register for puf_key_revocation field from OTP. */
        uint32_t kak0_usage            : 2;  /**< [ 13: 12](RO) 2'b00: KAK0 can be used for both Secure Boot Authentication and Auth
                                                                 CMD2'b01:KAK0 is exclusively used for Secure Boot AuthenticationKAK0 is
                                                                 exclusively used for Auth CMD, covering all sub-cmd of Auth CMD2b'10:KAK0 is
                                                                 exclusively used for Auth CMD, and only covering Auth CMD sub-cmd of
                                                                 (A)activating DAP/JTAG port and (B)LCS advance to FA_STATE.2b'11:It cannot be
                                                                 used for the rest of Auth CMD's sub-cmd. */
        uint32_t kak1_usage            : 2;  /**< [ 15: 14](RO) 2'b00: KAK1 can be used for both Secure Boot Authentication and Auth
                                                                 CMD2'b01:KAK1 is exclusively used for Secure Boot AuthenticationKAK1 is
                                                                 exclusively used for Auth CMD, covering all sub-cmd of Auth CMD2b'10:KAK1 is
                                                                 exclusively used for Auth CMD, and only covering Auth CMD sub-cmd of
                                                                 (A)activating DAP/JTAG port and (B)LCS advance to FA_STATE.2b'11:It cannot be
                                                                 used for the rest of Auth CMD's sub-cmd. */
        uint32_t kak2_usage            : 2;  /**< [ 17: 16](RO) 2'b00: KAK2 can be used for both Secure Boot Authentication and Auth
                                                                 CMD2'b01:KAK2 is exclusively used for Secure Boot AuthenticationKAK2 is
                                                                 exclusively used for Auth CMD, covering all sub-cmd of Auth CMD2b'10:KAK2 is
                                                                 exclusively used for Auth CMD, and only covering Auth CMD sub-cmd of
                                                                 (A)activating DAP/JTAG port and (B)LCS advance to FA_STATE.2b'11:It cannot be
                                                                 used for the rest of Auth CMD's sub-cmd. */
        uint32_t kak3_usage            : 2;  /**< [ 19: 18](RO) 2'b00: KAK3 can be used for both Secure Boot Authentication and Auth
                                                                 CMD2'b01:KAK3 is exclusively used for Secure Boot AuthenticationKAK3 is
                                                                 exclusively used for Auth CMD, covering all sub-cmd of Auth CMD2b'10:KAK3 is
                                                                 exclusively used for Auth CMD, and only covering Auth CMD sub-cmd of
                                                                 (A)activating DAP/JTAG port and (B)LCS advance to FA_STATE.2b'11:It cannot be
                                                                 used for the rest of Auth CMD's sub-cmd. */
        uint32_t kak4_usage            : 2;  /**< [ 21: 20](RO) 2'b00: KAK4 can be used for both Secure Boot Authentication and Auth
                                                                 CMD2'b01:KAK4 is exclusively used for Secure Boot AuthenticationKAK4 is
                                                                 exclusively used for Auth CMD, covering all sub-cmd of Auth CMD2b'10:KAK4 is
                                                                 exclusively used for Auth CMD, and only covering Auth CMD sub-cmd of
                                                                 (A)activating DAP/JTAG port and (B)LCS advance to FA_STATE.2b'11:It cannot be
                                                                 used for the rest of Auth CMD's sub-cmd. */
        uint32_t sp_rsvd0              : 10; /**< [ 31: 22](RO) Missing register field description. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_ehsm_key_revoc_status_s cn; */
};
typedef union cavm_ehsm_key_revoc_status cavm_ehsm_key_revoc_status_t;

#define CAVM_EHSM_KEY_REVOC_STATUS CAVM_EHSM_KEY_REVOC_STATUS_FUNC()
static inline uint64_t CAVM_EHSM_KEY_REVOC_STATUS_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_EHSM_KEY_REVOC_STATUS_FUNC(void)
{
    if (cavm_is_model(OCTEONTX_CN20KA))
        return 0x80b000000120ll;
    __cavm_csr_fatal("EHSM_KEY_REVOC_STATUS", 0, 0, 0, 0, 0, 0, 0);
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
 * EHSM Lcs Debug Port Status Register
 */
union cavm_ehsm_lcs_debug_port_status
{
    uint32_t u;
    struct cavm_ehsm_lcs_debug_port_status_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t ehsm_gpio             : 2;  /**< [ 31: 30](RO) This register reflects the value of eHSM input ehsm_gpio[1:0] */
        uint32_t remaining_enable_disable_dbgpt_8 : 4;/**< [ 29: 26](RO) Remaining configuration for programming enable_disable_dbgpt_8 field in OTP
                                                                 efuse. Valid range is 0~10. User can program enable_disable_dbgpt_8 for 10
                                                                 times. */
        uint32_t remaining_enable_disable_dbgpt_7 : 4;/**< [ 25: 22](RO) Remaining configuration for programming enable_disable_dbgpt_7 field in OTP
                                                                 efuse. Valid range is 0~10. User can program enable_disable_dbgpt_7 for 10
                                                                 times. */
        uint32_t final_disable_dbgpt_8 : 1;  /**< [ 21: 21](RO) This is the shadow register for current debug port 8 access state from OTP. It
                                                                 is consistent with ehsm_dp_disable[8]output value. */
        uint32_t final_disable_dbgpt_7 : 1;  /**< [ 20: 20](RO) This is the shadow register for current debug port 7 access state from OTP. It
                                                                 is consistent with ehsm_dp_disable[7]output value. */
        uint32_t final_disable_dbgpt_6 : 1;  /**< [ 19: 19](RO) This is the shadow register for current debug port 6 access state from OTP. It
                                                                 is consistent with ehsm_dp_disable[6]output value. */
        uint32_t final_disable_dbgpt_5 : 1;  /**< [ 18: 18](RO) This is the shadow register for current debug port 5 access state from OTP. It
                                                                 is consistent with ehsm_dp_disable[5]output value. */
        uint32_t final_disable_dbgpt_4 : 1;  /**< [ 17: 17](RO) This is the shadow register for current debug port 4 access state from OTP. It
                                                                 is consistent with ehsm_dp_disable[4]output value. */
        uint32_t final_disable_dbgpt_3 : 1;  /**< [ 16: 16](RO) This is the shadow register for current debug port 3 access state from OTP. It
                                                                 is consistent with ehsm_dp_disable[3]output value. */
        uint32_t final_disable_dbgpt_2 : 1;  /**< [ 15: 15](RO) This is the shadow register for current debug port 2 access state from OTP. It
                                                                 is consistent with ehsm_dp_disable[2]output value. */
        uint32_t final_disable_dbgpt_1 : 1;  /**< [ 14: 14](RO) This is the shadow register for current debug port 1 access state from OTP. It
                                                                 is consistent with ehsm_dp_disable[1]output value. */
        uint32_t final_disable_ehsm_debug : 1;/**< [ 13: 13](RO) This is the shadow register for current EHSM debug port access state from OTP.
                                                                 It is consistent with ehsm_dp_disable[0]output value. */
        uint32_t permnt_disable_dbgpt_8 : 1; /**< [ 12: 12](RO) This is the shadow register for permnt_disable_dbgpt_8 field from OTP efuse. */
        uint32_t permnt_disable_dbgpt_7 : 1; /**< [ 11: 11](RO) This is the shadow register for permnt_disable_dbgpt_7 field from OTP efuse. */
        uint32_t permnt_disable_dbgpt_6 : 1; /**< [ 10: 10](RO) This is the shadow register for permnt_disable_dbgpt_6field from OTP efuse. */
        uint32_t permnt_disable_dbgpt_5 : 1; /**< [  9:  9](RO) This is the shadow register for permnt_disable_dbgpt_5 field from OTP efuse. */
        uint32_t permnt_disable_dbgpt_4 : 1; /**< [  8:  8](RO) This is the shadow register for permnt_disable_dbgpt_4 field from OTP efuse. */
        uint32_t permnt_disable_dbgpt_3 : 1; /**< [  7:  7](RO) This is the shadow register for permnt_disable_dbgpt_3 field from OTP efuse. */
        uint32_t permnt_disable_dbgpt_2 : 1; /**< [  6:  6](RO) This is the shadow register forpermnt_disable_dbgpt_2 field from OTP efuse. */
        uint32_t permnt_disable_dbgpt_1 : 1; /**< [  5:  5](RO) This is the shadow register for permnt_disable_dbgpt_1 field from OTP efuse. */
        uint32_t permnt_disable_ehsm_debug : 1;/**< [  4:  4](RO) This is the shadow register for permnt_disable_ehsm_debug from field OTP efuse. */
        uint32_t life_cycle_state      : 4;  /**< [  3:  0](RO) This is the shadow register for life cycle state field from OTP efuse. */
#else /* Word 0 - Little Endian */
        uint32_t life_cycle_state      : 4;  /**< [  3:  0](RO) This is the shadow register for life cycle state field from OTP efuse. */
        uint32_t permnt_disable_ehsm_debug : 1;/**< [  4:  4](RO) This is the shadow register for permnt_disable_ehsm_debug from field OTP efuse. */
        uint32_t permnt_disable_dbgpt_1 : 1; /**< [  5:  5](RO) This is the shadow register for permnt_disable_dbgpt_1 field from OTP efuse. */
        uint32_t permnt_disable_dbgpt_2 : 1; /**< [  6:  6](RO) This is the shadow register forpermnt_disable_dbgpt_2 field from OTP efuse. */
        uint32_t permnt_disable_dbgpt_3 : 1; /**< [  7:  7](RO) This is the shadow register for permnt_disable_dbgpt_3 field from OTP efuse. */
        uint32_t permnt_disable_dbgpt_4 : 1; /**< [  8:  8](RO) This is the shadow register for permnt_disable_dbgpt_4 field from OTP efuse. */
        uint32_t permnt_disable_dbgpt_5 : 1; /**< [  9:  9](RO) This is the shadow register for permnt_disable_dbgpt_5 field from OTP efuse. */
        uint32_t permnt_disable_dbgpt_6 : 1; /**< [ 10: 10](RO) This is the shadow register for permnt_disable_dbgpt_6field from OTP efuse. */
        uint32_t permnt_disable_dbgpt_7 : 1; /**< [ 11: 11](RO) This is the shadow register for permnt_disable_dbgpt_7 field from OTP efuse. */
        uint32_t permnt_disable_dbgpt_8 : 1; /**< [ 12: 12](RO) This is the shadow register for permnt_disable_dbgpt_8 field from OTP efuse. */
        uint32_t final_disable_ehsm_debug : 1;/**< [ 13: 13](RO) This is the shadow register for current EHSM debug port access state from OTP.
                                                                 It is consistent with ehsm_dp_disable[0]output value. */
        uint32_t final_disable_dbgpt_1 : 1;  /**< [ 14: 14](RO) This is the shadow register for current debug port 1 access state from OTP. It
                                                                 is consistent with ehsm_dp_disable[1]output value. */
        uint32_t final_disable_dbgpt_2 : 1;  /**< [ 15: 15](RO) This is the shadow register for current debug port 2 access state from OTP. It
                                                                 is consistent with ehsm_dp_disable[2]output value. */
        uint32_t final_disable_dbgpt_3 : 1;  /**< [ 16: 16](RO) This is the shadow register for current debug port 3 access state from OTP. It
                                                                 is consistent with ehsm_dp_disable[3]output value. */
        uint32_t final_disable_dbgpt_4 : 1;  /**< [ 17: 17](RO) This is the shadow register for current debug port 4 access state from OTP. It
                                                                 is consistent with ehsm_dp_disable[4]output value. */
        uint32_t final_disable_dbgpt_5 : 1;  /**< [ 18: 18](RO) This is the shadow register for current debug port 5 access state from OTP. It
                                                                 is consistent with ehsm_dp_disable[5]output value. */
        uint32_t final_disable_dbgpt_6 : 1;  /**< [ 19: 19](RO) This is the shadow register for current debug port 6 access state from OTP. It
                                                                 is consistent with ehsm_dp_disable[6]output value. */
        uint32_t final_disable_dbgpt_7 : 1;  /**< [ 20: 20](RO) This is the shadow register for current debug port 7 access state from OTP. It
                                                                 is consistent with ehsm_dp_disable[7]output value. */
        uint32_t final_disable_dbgpt_8 : 1;  /**< [ 21: 21](RO) This is the shadow register for current debug port 8 access state from OTP. It
                                                                 is consistent with ehsm_dp_disable[8]output value. */
        uint32_t remaining_enable_disable_dbgpt_7 : 4;/**< [ 25: 22](RO) Remaining configuration for programming enable_disable_dbgpt_7 field in OTP
                                                                 efuse. Valid range is 0~10. User can program enable_disable_dbgpt_7 for 10
                                                                 times. */
        uint32_t remaining_enable_disable_dbgpt_8 : 4;/**< [ 29: 26](RO) Remaining configuration for programming enable_disable_dbgpt_8 field in OTP
                                                                 efuse. Valid range is 0~10. User can program enable_disable_dbgpt_8 for 10
                                                                 times. */
        uint32_t ehsm_gpio             : 2;  /**< [ 31: 30](RO) This register reflects the value of eHSM input ehsm_gpio[1:0] */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_ehsm_lcs_debug_port_status_s cn; */
};
typedef union cavm_ehsm_lcs_debug_port_status cavm_ehsm_lcs_debug_port_status_t;

#define CAVM_EHSM_LCS_DEBUG_PORT_STATUS CAVM_EHSM_LCS_DEBUG_PORT_STATUS_FUNC()
static inline uint64_t CAVM_EHSM_LCS_DEBUG_PORT_STATUS_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_EHSM_LCS_DEBUG_PORT_STATUS_FUNC(void)
{
    if (cavm_is_model(OCTEONTX_CN20KA))
        return 0x80b000000114ll;
    __cavm_csr_fatal("EHSM_LCS_DEBUG_PORT_STATUS", 0, 0, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_EHSM_LCS_DEBUG_PORT_STATUS cavm_ehsm_lcs_debug_port_status_t
#define bustype_CAVM_EHSM_LCS_DEBUG_PORT_STATUS CSR_TYPE_NCB32b
#define basename_CAVM_EHSM_LCS_DEBUG_PORT_STATUS "EHSM_LCS_DEBUG_PORT_STATUS"
#define device_bar_CAVM_EHSM_LCS_DEBUG_PORT_STATUS 0x0 /* PF_BAR0 */
#define busnum_CAVM_EHSM_LCS_DEBUG_PORT_STATUS 0
#define arguments_CAVM_EHSM_LCS_DEBUG_PORT_STATUS -1,-1,-1,-1

/**
 * Register (NCB32b) ehsm_remaining_config_status
 *
 * EHSM Remaining Config Status Register
 */
union cavm_ehsm_remaining_config_status
{
    uint32_t u;
    struct cavm_ehsm_remaining_config_status_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t sp_rsvd0              : 4;  /**< [ 31: 28](RO) Missing register field description. */
        uint32_t remaining_enable_disable_dbgpt_6 : 4;/**< [ 27: 24](RO) It indicate number of remaining configurations for enable_disable_dbgpt_6. The
                                                                 valid range is 0~10. User can program enable_disable_dbgpt_6 for 10 times. */
        uint32_t remaining_enable_disable_dbgpt_5 : 4;/**< [ 23: 20](RO) It indicate number of remaining configurations for enable_disable_dbgpt_5. The
                                                                 valid range is 0~10. User can program enable_disable_dbgpt_5 for 10 times. */
        uint32_t remaining_enable_disable_dbgpt_4 : 4;/**< [ 19: 16](RO) It indicate number of remaining configurations for enable_disable_dbgpt_4. The
                                                                 valid range is 0~10. User can program enable_disable_dbgpt_4 for 10 times. */
        uint32_t remaining_enable_disable_dbgpt_3 : 4;/**< [ 15: 12](RO) It indicate number of remaining configurations for enable_disable_dbgpt_3. The
                                                                 valid range is 0~10. User can program enable_disable_dbgpt_3 for 10 times. */
        uint32_t remaining_enable_disable_dbgpt_2 : 4;/**< [ 11:  8](RO) It indicate number of remaining configurations for enable_disable_dbgpt_2. The
                                                                 valid range is 0~10. User can program enable_disable_dbgpt_2 for 10 times. */
        uint32_t remaining_enable_disable_dbgpt_1 : 4;/**< [  7:  4](RO) It indicate number of remaining configurations for enable_disable_dbgpt_1. The
                                                                 valid range is 0~10. User can program enable_disable_dbgpt_1 for 10 times. */
        uint32_t remaining_enable_disable_ehsm_debug : 4;/**< [  3:  0](RO) It indicate number of remaining configurations for enable_disable_ehsm_debug.
                                                                 The valid range is 0~10. User can program enable_disable_ehsm_debug for 10
                                                                 times. */
#else /* Word 0 - Little Endian */
        uint32_t remaining_enable_disable_ehsm_debug : 4;/**< [  3:  0](RO) It indicate number of remaining configurations for enable_disable_ehsm_debug.
                                                                 The valid range is 0~10. User can program enable_disable_ehsm_debug for 10
                                                                 times. */
        uint32_t remaining_enable_disable_dbgpt_1 : 4;/**< [  7:  4](RO) It indicate number of remaining configurations for enable_disable_dbgpt_1. The
                                                                 valid range is 0~10. User can program enable_disable_dbgpt_1 for 10 times. */
        uint32_t remaining_enable_disable_dbgpt_2 : 4;/**< [ 11:  8](RO) It indicate number of remaining configurations for enable_disable_dbgpt_2. The
                                                                 valid range is 0~10. User can program enable_disable_dbgpt_2 for 10 times. */
        uint32_t remaining_enable_disable_dbgpt_3 : 4;/**< [ 15: 12](RO) It indicate number of remaining configurations for enable_disable_dbgpt_3. The
                                                                 valid range is 0~10. User can program enable_disable_dbgpt_3 for 10 times. */
        uint32_t remaining_enable_disable_dbgpt_4 : 4;/**< [ 19: 16](RO) It indicate number of remaining configurations for enable_disable_dbgpt_4. The
                                                                 valid range is 0~10. User can program enable_disable_dbgpt_4 for 10 times. */
        uint32_t remaining_enable_disable_dbgpt_5 : 4;/**< [ 23: 20](RO) It indicate number of remaining configurations for enable_disable_dbgpt_5. The
                                                                 valid range is 0~10. User can program enable_disable_dbgpt_5 for 10 times. */
        uint32_t remaining_enable_disable_dbgpt_6 : 4;/**< [ 27: 24](RO) It indicate number of remaining configurations for enable_disable_dbgpt_6. The
                                                                 valid range is 0~10. User can program enable_disable_dbgpt_6 for 10 times. */
        uint32_t sp_rsvd0              : 4;  /**< [ 31: 28](RO) Missing register field description. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_ehsm_remaining_config_status_s cn; */
};
typedef union cavm_ehsm_remaining_config_status cavm_ehsm_remaining_config_status_t;

#define CAVM_EHSM_REMAINING_CONFIG_STATUS CAVM_EHSM_REMAINING_CONFIG_STATUS_FUNC()
static inline uint64_t CAVM_EHSM_REMAINING_CONFIG_STATUS_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_EHSM_REMAINING_CONFIG_STATUS_FUNC(void)
{
    if (cavm_is_model(OCTEONTX_CN20KA))
        return 0x80b00000012cll;
    __cavm_csr_fatal("EHSM_REMAINING_CONFIG_STATUS", 0, 0, 0, 0, 0, 0, 0);
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
 * EHSM Root Of Trust Status Register
 */
union cavm_ehsm_root_of_trust_status
{
    uint32_t u;
    struct cavm_ehsm_root_of_trust_status_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t device_key_mixer_provisioned : 1;/**< [ 31: 31](RO) Indicate whether device_key_mixer is provisioned0: device_key_mixer is not
                                                                 provisioned, i.e. ecc_device_key_mixer are all 01: device_key_mixer is
                                                                 provisioned, i.e. not all ecc_device_key_mixer are 0 */
        uint32_t sp_rsvd0              : 3;  /**< [ 30: 28](RO) Missing register field description. */
        uint32_t ebg_continuous_health_test_fail : 1;/**< [ 27: 27](RO) Indicate that EBG continuous health test fails.0: EBG continuous health test is
                                                                 successful1: EBG continuous health test is failed */
        uint32_t ebg_start_up_health_test_done : 1;/**< [ 26: 26](RO) Indicate whether rkek is provisioned0: rkek is not provisioned, i.e. ecc_rkek
                                                                 are all 01: rkek is provisioned, i.e. not all ecc_rkek are 0 */
        uint32_t ebg_start_up_health_test_fail : 1;/**< [ 25: 25](RO) Indicate that EBG start up health test fails. It is only valid when
                                                                 EBG_start_up_health_test_done=10: EBG start up health test is successful1: EBG
                                                                 start up health test is failed */
        uint32_t ehsm_hw_panic_state   : 1;  /**< [ 24: 24](RO) Indicate EHSM is in panic state. It can be triggered by memory failure, shadow
                                                                 buffer failure and power switch failureFor memory ECC failures:1. When EHSM is
                                                                 in FIPS mode, panic state is triggered by uncorrectable error detected during
                                                                 memory self test or run time.2. When EHSM is in non FIPS mode, panic state is
                                                                 triggered by uncorrectable error detected during memory self test onlyFor memory
                                                                 wakeup failures1. ehsm_cm3_ram_part0_dslp is not driven to 0 within 32 cycles of
                                                                 ehsm_warm_rstn release2. ehsm_cm3_ram_part0_dslp is not driven to 0 within 32
                                                                 cycles after ehsm_cm3_ram_part0_wakeup_requestFor shadow buffer failure1. Parity
                                                                 error is detected when CM3 read shadow bufferFor power switch failures1. If
                                                                 enable_puf field in OTP efuse is 0, only SYSRDYP timeout of OTP power switch can
                                                                 trigger panic state2. If enable_puf field in OTP efuse is 1, SYSRDYP timeout of
                                                                 both OTP and PUF power switch can trigger panic state */
        uint32_t rkek_provisioned      : 1;  /**< [ 23: 23](RO) Indicate whether rkek is provisioned0: rkek is not provisioned, i.e. ecc_rkek
                                                                 are all 01: rkek is provisioned, i.e. not all ecc_rkek are 0 */
        uint32_t uds_provisioned       : 1;  /**< [ 22: 22](RO) Indicate whether uds is provisioned0: uds is not provisioned, i.e. ecc_uds are
                                                                 all 01: uds is provisioned, i.e. not all ecc_uds are 0 */
        uint32_t l0_fw_aes_key4_provisioned : 1;/**< [ 21: 21](RO) Indicate whether L0_fw_aes_key4 is provisioned0: L0_fw_aes_key4 is not
                                                                 provisioned, i.e. ecc_L0_fw_aes_key4 are all 01: L0_fw_aes_key4 is provisioned,
                                                                 i.e. not all ecc_L0_fw_aes_key4 are 0 */
        uint32_t l0_fw_aes_key3_provisioned : 1;/**< [ 20: 20](RO) Indicate whether L0_fw_aes_key3 is provisioned0: L0_fw_aes_key3 is not
                                                                 provisioned, i.e. ecc_L0_fw_aes_key3 are all 01: L0_fw_aes_key3 is provisioned,
                                                                 i.e. not all ecc_L0_fw_aes_key3 are 0 */
        uint32_t l0_fw_aes_key2_provisioned : 1;/**< [ 19: 19](RO) Indicate whether L0_fw_aes_key2 is provisioned0: L0_fw_aes_key2 is not
                                                                 provisioned, i.e. ecc_L0_fw_aes_key2 are all 01: L0_fw_aes_key2 is provisioned,
                                                                 i.e. not all ecc_L0_fw_aes_key2 are 0 */
        uint32_t l0_fw_aes_key1_provisioned : 1;/**< [ 18: 18](RO) Indicate whether L0_fw_aes_key1 is provisioned0: L0_fw_aes_key1 is not
                                                                 provisioned, i.e. ecc_L0_fw_aes_key1 are all 01: L0_fw_aes_key1 is provisioned,
                                                                 i.e. not all ecc_L0_fw_aes_key1 are 0 */
        uint32_t l0_fw_aes_key0_provisioned : 1;/**< [ 17: 17](RO) Indicate whether L0_fw_aes_key0 is provisioned0: L0_fw_aes_key0 is not
                                                                 provisioned, i.e. ecc_L0_fw_aes_key0 are all 01: L0_fw_aes_key0 is provisioned,
                                                                 i.e. not all ecc_L0_fw_aes_key0 are 0 */
        uint32_t kak4_binding_digest_provisioned : 1;/**< [ 16: 16](RO) Indicate whether kak4_binding_digest is provisioned0: kak4_binding_digest is not
                                                                 provisioned, i.e. ecc_kak4_binding_digest are all 01: kak4_binding_digest is
                                                                 provisioned, i.e. not all ecc_kak4_binding_digest are 0 */
        uint32_t kak3_binding_digest_provisioned : 1;/**< [ 15: 15](RO) Indicate whether kak3_binding_digest is provisioned0: kak3_binding_digest is not
                                                                 provisioned, i.e. ecc_kak3_binding_digest are all 01: kak3_binding_digest is
                                                                 provisioned, i.e. not all ecc_kak3_binding_digest are 0 */
        uint32_t kak2_binding_digest_provisioned : 1;/**< [ 14: 14](RO) Indicate whether kak2_binding_digest is provisioned0: kak2_binding_digest is not
                                                                 provisioned, i.e. ecc_kak2_binding_digest are all 01: kak2_binding_digest is
                                                                 provisioned, i.e. not all ecc_kak2_binding_digest are 0 */
        uint32_t kak1_binding_digest_provisioned : 1;/**< [ 13: 13](RO) Indicate whether kak1_binding_digest is provisioned0: kak1_binding_digest is not
                                                                 provisioned, i.e. ecc_kak1_binding_digest are all 01: kak1_binding_digest is
                                                                 provisioned, i.e. not all ecc_kak1_binding_digest are 0 */
        uint32_t kak0_binding_digest_provisioned : 1;/**< [ 12: 12](RO) Indicate whether kak0_binding_digest is provisioned0: kak0_binding_digest is not
                                                                 provisioned, i.e. ecc_kak0_binding_digest are all 01: kak0_binding_digest is
                                                                 provisioned, i.e. not all ecc_kak0_binding_digest are 0 */
        uint32_t auth_cmd_mode         : 2;  /**< [ 11: 10](RO) This is the shadow register for auth_cmd_mode field from OTP. */
        uint32_t disable_internal_crypto : 1;/**< [  9:  9](RO) This is the shadow register for disable_internal_crypto field from OTP. */
        uint32_t disable_soc_crypto    : 1;  /**< [  8:  8](RO) This is the shadow register for disable_soc_crypto field from OTP. */
        uint32_t enable_puf            : 1;  /**< [  7:  7](RO) This is the shadow register for enable_puf field from OTP. */
        uint32_t disable_ehsm_efuse    : 1;  /**< [  6:  6](RO) This is the shadow register for disable_ehsm_efuse field from OTP. */
        uint32_t rkek_lock             : 1;  /**< [  5:  5](RO) This is the shadow register for rkek_lock field from OTP. */
        uint32_t rkek_read_disable     : 1;  /**< [  4:  4](RO) This is the shadow register for rkek_read_disable field from OTP. */
        uint32_t uds_read_disable      : 1;  /**< [  3:  3](RO) This is the shadow register for uds_read_disable field from OTP. */
        uint32_t l0_fw_aes_key_read_disable : 1;/**< [  2:  2](RO) This is the shadow register for L0_fw_aes_key_read_disable field from OTP. */
        uint32_t fips_mode             : 1;  /**< [  1:  1](RO) This is the shadow register for fips_mode field from OTP. */
        uint32_t nist_only_alg         : 1;  /**< [  0:  0](RO) This is the shadow register for nist_only_alg field from OTP. */
#else /* Word 0 - Little Endian */
        uint32_t nist_only_alg         : 1;  /**< [  0:  0](RO) This is the shadow register for nist_only_alg field from OTP. */
        uint32_t fips_mode             : 1;  /**< [  1:  1](RO) This is the shadow register for fips_mode field from OTP. */
        uint32_t l0_fw_aes_key_read_disable : 1;/**< [  2:  2](RO) This is the shadow register for L0_fw_aes_key_read_disable field from OTP. */
        uint32_t uds_read_disable      : 1;  /**< [  3:  3](RO) This is the shadow register for uds_read_disable field from OTP. */
        uint32_t rkek_read_disable     : 1;  /**< [  4:  4](RO) This is the shadow register for rkek_read_disable field from OTP. */
        uint32_t rkek_lock             : 1;  /**< [  5:  5](RO) This is the shadow register for rkek_lock field from OTP. */
        uint32_t disable_ehsm_efuse    : 1;  /**< [  6:  6](RO) This is the shadow register for disable_ehsm_efuse field from OTP. */
        uint32_t enable_puf            : 1;  /**< [  7:  7](RO) This is the shadow register for enable_puf field from OTP. */
        uint32_t disable_soc_crypto    : 1;  /**< [  8:  8](RO) This is the shadow register for disable_soc_crypto field from OTP. */
        uint32_t disable_internal_crypto : 1;/**< [  9:  9](RO) This is the shadow register for disable_internal_crypto field from OTP. */
        uint32_t auth_cmd_mode         : 2;  /**< [ 11: 10](RO) This is the shadow register for auth_cmd_mode field from OTP. */
        uint32_t kak0_binding_digest_provisioned : 1;/**< [ 12: 12](RO) Indicate whether kak0_binding_digest is provisioned0: kak0_binding_digest is not
                                                                 provisioned, i.e. ecc_kak0_binding_digest are all 01: kak0_binding_digest is
                                                                 provisioned, i.e. not all ecc_kak0_binding_digest are 0 */
        uint32_t kak1_binding_digest_provisioned : 1;/**< [ 13: 13](RO) Indicate whether kak1_binding_digest is provisioned0: kak1_binding_digest is not
                                                                 provisioned, i.e. ecc_kak1_binding_digest are all 01: kak1_binding_digest is
                                                                 provisioned, i.e. not all ecc_kak1_binding_digest are 0 */
        uint32_t kak2_binding_digest_provisioned : 1;/**< [ 14: 14](RO) Indicate whether kak2_binding_digest is provisioned0: kak2_binding_digest is not
                                                                 provisioned, i.e. ecc_kak2_binding_digest are all 01: kak2_binding_digest is
                                                                 provisioned, i.e. not all ecc_kak2_binding_digest are 0 */
        uint32_t kak3_binding_digest_provisioned : 1;/**< [ 15: 15](RO) Indicate whether kak3_binding_digest is provisioned0: kak3_binding_digest is not
                                                                 provisioned, i.e. ecc_kak3_binding_digest are all 01: kak3_binding_digest is
                                                                 provisioned, i.e. not all ecc_kak3_binding_digest are 0 */
        uint32_t kak4_binding_digest_provisioned : 1;/**< [ 16: 16](RO) Indicate whether kak4_binding_digest is provisioned0: kak4_binding_digest is not
                                                                 provisioned, i.e. ecc_kak4_binding_digest are all 01: kak4_binding_digest is
                                                                 provisioned, i.e. not all ecc_kak4_binding_digest are 0 */
        uint32_t l0_fw_aes_key0_provisioned : 1;/**< [ 17: 17](RO) Indicate whether L0_fw_aes_key0 is provisioned0: L0_fw_aes_key0 is not
                                                                 provisioned, i.e. ecc_L0_fw_aes_key0 are all 01: L0_fw_aes_key0 is provisioned,
                                                                 i.e. not all ecc_L0_fw_aes_key0 are 0 */
        uint32_t l0_fw_aes_key1_provisioned : 1;/**< [ 18: 18](RO) Indicate whether L0_fw_aes_key1 is provisioned0: L0_fw_aes_key1 is not
                                                                 provisioned, i.e. ecc_L0_fw_aes_key1 are all 01: L0_fw_aes_key1 is provisioned,
                                                                 i.e. not all ecc_L0_fw_aes_key1 are 0 */
        uint32_t l0_fw_aes_key2_provisioned : 1;/**< [ 19: 19](RO) Indicate whether L0_fw_aes_key2 is provisioned0: L0_fw_aes_key2 is not
                                                                 provisioned, i.e. ecc_L0_fw_aes_key2 are all 01: L0_fw_aes_key2 is provisioned,
                                                                 i.e. not all ecc_L0_fw_aes_key2 are 0 */
        uint32_t l0_fw_aes_key3_provisioned : 1;/**< [ 20: 20](RO) Indicate whether L0_fw_aes_key3 is provisioned0: L0_fw_aes_key3 is not
                                                                 provisioned, i.e. ecc_L0_fw_aes_key3 are all 01: L0_fw_aes_key3 is provisioned,
                                                                 i.e. not all ecc_L0_fw_aes_key3 are 0 */
        uint32_t l0_fw_aes_key4_provisioned : 1;/**< [ 21: 21](RO) Indicate whether L0_fw_aes_key4 is provisioned0: L0_fw_aes_key4 is not
                                                                 provisioned, i.e. ecc_L0_fw_aes_key4 are all 01: L0_fw_aes_key4 is provisioned,
                                                                 i.e. not all ecc_L0_fw_aes_key4 are 0 */
        uint32_t uds_provisioned       : 1;  /**< [ 22: 22](RO) Indicate whether uds is provisioned0: uds is not provisioned, i.e. ecc_uds are
                                                                 all 01: uds is provisioned, i.e. not all ecc_uds are 0 */
        uint32_t rkek_provisioned      : 1;  /**< [ 23: 23](RO) Indicate whether rkek is provisioned0: rkek is not provisioned, i.e. ecc_rkek
                                                                 are all 01: rkek is provisioned, i.e. not all ecc_rkek are 0 */
        uint32_t ehsm_hw_panic_state   : 1;  /**< [ 24: 24](RO) Indicate EHSM is in panic state. It can be triggered by memory failure, shadow
                                                                 buffer failure and power switch failureFor memory ECC failures:1. When EHSM is
                                                                 in FIPS mode, panic state is triggered by uncorrectable error detected during
                                                                 memory self test or run time.2. When EHSM is in non FIPS mode, panic state is
                                                                 triggered by uncorrectable error detected during memory self test onlyFor memory
                                                                 wakeup failures1. ehsm_cm3_ram_part0_dslp is not driven to 0 within 32 cycles of
                                                                 ehsm_warm_rstn release2. ehsm_cm3_ram_part0_dslp is not driven to 0 within 32
                                                                 cycles after ehsm_cm3_ram_part0_wakeup_requestFor shadow buffer failure1. Parity
                                                                 error is detected when CM3 read shadow bufferFor power switch failures1. If
                                                                 enable_puf field in OTP efuse is 0, only SYSRDYP timeout of OTP power switch can
                                                                 trigger panic state2. If enable_puf field in OTP efuse is 1, SYSRDYP timeout of
                                                                 both OTP and PUF power switch can trigger panic state */
        uint32_t ebg_start_up_health_test_fail : 1;/**< [ 25: 25](RO) Indicate that EBG start up health test fails. It is only valid when
                                                                 EBG_start_up_health_test_done=10: EBG start up health test is successful1: EBG
                                                                 start up health test is failed */
        uint32_t ebg_start_up_health_test_done : 1;/**< [ 26: 26](RO) Indicate whether rkek is provisioned0: rkek is not provisioned, i.e. ecc_rkek
                                                                 are all 01: rkek is provisioned, i.e. not all ecc_rkek are 0 */
        uint32_t ebg_continuous_health_test_fail : 1;/**< [ 27: 27](RO) Indicate that EBG continuous health test fails.0: EBG continuous health test is
                                                                 successful1: EBG continuous health test is failed */
        uint32_t sp_rsvd0              : 3;  /**< [ 30: 28](RO) Missing register field description. */
        uint32_t device_key_mixer_provisioned : 1;/**< [ 31: 31](RO) Indicate whether device_key_mixer is provisioned0: device_key_mixer is not
                                                                 provisioned, i.e. ecc_device_key_mixer are all 01: device_key_mixer is
                                                                 provisioned, i.e. not all ecc_device_key_mixer are 0 */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_ehsm_root_of_trust_status_s cn; */
};
typedef union cavm_ehsm_root_of_trust_status cavm_ehsm_root_of_trust_status_t;

#define CAVM_EHSM_ROOT_OF_TRUST_STATUS CAVM_EHSM_ROOT_OF_TRUST_STATUS_FUNC()
static inline uint64_t CAVM_EHSM_ROOT_OF_TRUST_STATUS_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_EHSM_ROOT_OF_TRUST_STATUS_FUNC(void)
{
    if (cavm_is_model(OCTEONTX_CN20KA))
        return 0x80b00000011cll;
    __cavm_csr_fatal("EHSM_ROOT_OF_TRUST_STATUS", 0, 0, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_EHSM_ROOT_OF_TRUST_STATUS cavm_ehsm_root_of_trust_status_t
#define bustype_CAVM_EHSM_ROOT_OF_TRUST_STATUS CSR_TYPE_NCB32b
#define basename_CAVM_EHSM_ROOT_OF_TRUST_STATUS "EHSM_ROOT_OF_TRUST_STATUS"
#define device_bar_CAVM_EHSM_ROOT_OF_TRUST_STATUS 0x0 /* PF_BAR0 */
#define busnum_CAVM_EHSM_ROOT_OF_TRUST_STATUS 0
#define arguments_CAVM_EHSM_ROOT_OF_TRUST_STATUS -1,-1,-1,-1

/**
 * Register (NCB32b) ehsm_shadow_reg_status
 *
 * EHSM Shadow Reg Status Register
 */
union cavm_ehsm_shadow_reg_status
{
    uint32_t u;
    struct cavm_ehsm_shadow_reg_status_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t sp_rsvd0              : 1;  /**< [ 31: 31](RO) Missing register field description. */
        uint32_t ebg_setting_uncorrectable_error : 1;/**< [ 30: 30](RO) This bit indicate if there is uncorretable errors when doing error correction for EBG fields in OTP */
        uint32_t ebg_setting_correction_done : 1;/**< [ 29: 29](RO) This bit indicate if error correction for EBG fields */
        uint32_t ram0_warm_rst_wakeup_timeout : 1;/**< [ 28: 28](RO) Ehsm_cm3_ram_part0_dslp is not driven to 0 within 32 cycles after ehsm_warm_rstn release */
        uint32_t ram0_dslp_wakeup_timeout : 1;/**< [ 27: 27](RO) Ehsm_cm3_ram_part0_dslp is not driven to 0 within 32 cycles after ehsm_cm3_ram_part0_wakeup_request */
        uint32_t ram1_dslp_wakeup_timeout : 1;/**< [ 26: 26](RO) Ehsm_cm3_ram_part1_dslp is not driven to 0 within 32 cycles after ehsm_cm3_ram_part1_wakeup_request */
        uint32_t ram1_sd_wakeup_timeout : 1; /**< [ 25: 25](RO) Ehsm_cm3_ram_part1_sd is not driven to 0 within 32 cycles after ehsm_cm3_ram_part1_wakeup_request */
        uint32_t cm3_rom_crc_mismatch  : 1;  /**< [ 24: 24](RO) EHSM CM3 ROM CRC checksum mismatches in self test */
        uint32_t cm3_ram_self_test_failure_status : 4;/**< [ 23: 20](RO) This register indicate the status of eHSM CM3 RAM self test status for each
                                                                 memory instanceIf bit 0 is 1, RAM0 fail in memory self testIf bit 1 is 1, RAM1
                                                                 fail in memory self testIf bit 2 is 1, RAM2 fail in memory self testIf bit 3 is
                                                                 1, RAM3 fail in memory self test */
        uint32_t otp_sysrdyp_fall      : 1;  /**< [ 19: 19](RO) It indicate falling edge is detected on SYSRDYP of OTP power switch */
        uint32_t otp_sysrdyp_timeout   : 1;  /**< [ 18: 18](RO) It indicate timeout happen to SYSRDYP of OTP power switch */
        uint32_t puf_sysrdyp_fall      : 1;  /**< [ 17: 17](RO) It indicate falling edge is detected on SYSRDYP of PUF power switch */
        uint32_t puf_sysrdyp_timeout   : 1;  /**< [ 16: 16](RO) It indicate timeout happen to SYSRDYP of PUF power switch */
        uint32_t puf_key_aging_test_unavailable : 1;/**< [ 15: 15](RO) It indicate there is uncorrectable error in puk_key_digest field in OTP, so PUF
                                                                 key aging test is not available */
        uint32_t puf_key_aging_test_error : 1;/**< [ 14: 14](RO) It indicate PUF key aging test fails */
        uint32_t puf_key_aging_test_done : 1;/**< [ 13: 13](RO) It indicate PUF key aging test is done */
        uint32_t dormant_activation_status : 1;/**< [ 12: 12](RO) It drives bcm_otp_dormant_activation_status. It is written by CM3This field is
                                                                 reserved for eHSM internal use */
        uint32_t dormant_enable        : 1;  /**< [ 11: 11](RO) It is driven by bcm_otp_dormant_enable input. It indicate if dormant is enabled
                                                                 by hostThis field is reserved for eHSM internal use */
        uint32_t shadow_buffer_fail    : 1;  /**< [ 10: 10](RO) Shadow buffer detects parity error */
        uint32_t spad_mem_fail         : 1;  /**< [  9:  9](RO) SPAD memory detects uncorrectable error */
        uint32_t cm3_ram_fail          : 1;  /**< [  8:  8](RO) CM3 RAM detects uncorrectable error */
        uint32_t cm3_rom_fail          : 1;  /**< [  7:  7](RO) CM3 ROM detects uncorrectable error */
        uint32_t otp_efuse_write_disabled : 1;/**< [  6:  6](RO) It indicate OTP efuse write is disabled by one of the following conditions1.
                                                                 ehsm_soc_debug_occurred = 1 when eHSM is in NEW_CHIP, PROVISIONED or ERROR
                                                                 state2. ehsm_soc_debug_occurred = 1 when ehsm_otp_valid=03. OTP field
                                                                 dsiable_ehsm_efuse is 1 */
        uint32_t warm_reset_type       : 1;  /**< [  5:  5](RO) This bit indicates whether warm reset type 1 or type 2 is triggered. It is only
                                                                 valid when WARM_RESET_STATUS=1 */
        uint32_t warm_reset_stauts     : 1;  /**< [  4:  4](RO) This bit indicates if ehsm_warm_rstn is triggered. If it is triggered, user need
                                                                 to further check WARM_RESET_TYPE to determint whether warm reset type 1 or type
                                                                 2 is triggered */
        uint32_t cm3_sleepdeep         : 1;  /**< [  3:  3](RO) Connected with SLEEPDEEP output of CM3. Indicate whether CM3 is in deep sleep stateEHSM-42 */
        uint32_t cm3_sleeping          : 1;  /**< [  2:  2](RO) Connected with SLEEPING output of CM3. Indicate whether CM3 is in sleep stateEHSM-42 */
        uint32_t soc_debug_occurred    : 1;  /**< [  1:  1](RO) This bit indicate ehsm_soc_debug_occurred value has once become 1. This bit can
                                                                 only be reset by HW reset. */
        uint32_t lcs_valid             : 1;  /**< [  0:  0](RO) Indication of whether LCS_DEBUG_PORT_STATUS[31:0], BOOTROM_CONFIG_STATUS[31:0],
                                                                 ROOT_OF_TRUST_STATUS[23:0], KEY_REVOC_STATUS[31:0], FW_SECURITY_VERSION[31:0],
                                                                 BOOT_STRAP_PIN_STATUS[31:0], REMAININIG_CONFIG_STATUS[31:0],
                                                                 AUXILIARY_OTP_STATUS_0[31:0], AUXILIARY_OTP_STATUS_1[31:0]are ready to be
                                                                 read.When it is 1, user can read LCS_DEBUG_PORT_STATUS[31:0],
                                                                 BOOTROM_CONFIG_STATUS[31:0], ROOT_OF_TRUST_STATUS[23:0], KEY_REVOC_STATUS[31:0],
                                                                 FW_SECURITY_VERSION[31:0], BOOT_STRAP_PIN_STATUS[31:0],
                                                                 REMAININIG_CONFIG_STATUS[31:0], AUXILIARY_OTP_STATUS_0[31:0],
                                                                 AUXILIARY_OTP_STATUS_1[31:0] . When it is 0, these registers are invalid. */
#else /* Word 0 - Little Endian */
        uint32_t lcs_valid             : 1;  /**< [  0:  0](RO) Indication of whether LCS_DEBUG_PORT_STATUS[31:0], BOOTROM_CONFIG_STATUS[31:0],
                                                                 ROOT_OF_TRUST_STATUS[23:0], KEY_REVOC_STATUS[31:0], FW_SECURITY_VERSION[31:0],
                                                                 BOOT_STRAP_PIN_STATUS[31:0], REMAININIG_CONFIG_STATUS[31:0],
                                                                 AUXILIARY_OTP_STATUS_0[31:0], AUXILIARY_OTP_STATUS_1[31:0]are ready to be
                                                                 read.When it is 1, user can read LCS_DEBUG_PORT_STATUS[31:0],
                                                                 BOOTROM_CONFIG_STATUS[31:0], ROOT_OF_TRUST_STATUS[23:0], KEY_REVOC_STATUS[31:0],
                                                                 FW_SECURITY_VERSION[31:0], BOOT_STRAP_PIN_STATUS[31:0],
                                                                 REMAININIG_CONFIG_STATUS[31:0], AUXILIARY_OTP_STATUS_0[31:0],
                                                                 AUXILIARY_OTP_STATUS_1[31:0] . When it is 0, these registers are invalid. */
        uint32_t soc_debug_occurred    : 1;  /**< [  1:  1](RO) This bit indicate ehsm_soc_debug_occurred value has once become 1. This bit can
                                                                 only be reset by HW reset. */
        uint32_t cm3_sleeping          : 1;  /**< [  2:  2](RO) Connected with SLEEPING output of CM3. Indicate whether CM3 is in sleep stateEHSM-42 */
        uint32_t cm3_sleepdeep         : 1;  /**< [  3:  3](RO) Connected with SLEEPDEEP output of CM3. Indicate whether CM3 is in deep sleep stateEHSM-42 */
        uint32_t warm_reset_stauts     : 1;  /**< [  4:  4](RO) This bit indicates if ehsm_warm_rstn is triggered. If it is triggered, user need
                                                                 to further check WARM_RESET_TYPE to determint whether warm reset type 1 or type
                                                                 2 is triggered */
        uint32_t warm_reset_type       : 1;  /**< [  5:  5](RO) This bit indicates whether warm reset type 1 or type 2 is triggered. It is only
                                                                 valid when WARM_RESET_STATUS=1 */
        uint32_t otp_efuse_write_disabled : 1;/**< [  6:  6](RO) It indicate OTP efuse write is disabled by one of the following conditions1.
                                                                 ehsm_soc_debug_occurred = 1 when eHSM is in NEW_CHIP, PROVISIONED or ERROR
                                                                 state2. ehsm_soc_debug_occurred = 1 when ehsm_otp_valid=03. OTP field
                                                                 dsiable_ehsm_efuse is 1 */
        uint32_t cm3_rom_fail          : 1;  /**< [  7:  7](RO) CM3 ROM detects uncorrectable error */
        uint32_t cm3_ram_fail          : 1;  /**< [  8:  8](RO) CM3 RAM detects uncorrectable error */
        uint32_t spad_mem_fail         : 1;  /**< [  9:  9](RO) SPAD memory detects uncorrectable error */
        uint32_t shadow_buffer_fail    : 1;  /**< [ 10: 10](RO) Shadow buffer detects parity error */
        uint32_t dormant_enable        : 1;  /**< [ 11: 11](RO) It is driven by bcm_otp_dormant_enable input. It indicate if dormant is enabled
                                                                 by hostThis field is reserved for eHSM internal use */
        uint32_t dormant_activation_status : 1;/**< [ 12: 12](RO) It drives bcm_otp_dormant_activation_status. It is written by CM3This field is
                                                                 reserved for eHSM internal use */
        uint32_t puf_key_aging_test_done : 1;/**< [ 13: 13](RO) It indicate PUF key aging test is done */
        uint32_t puf_key_aging_test_error : 1;/**< [ 14: 14](RO) It indicate PUF key aging test fails */
        uint32_t puf_key_aging_test_unavailable : 1;/**< [ 15: 15](RO) It indicate there is uncorrectable error in puk_key_digest field in OTP, so PUF
                                                                 key aging test is not available */
        uint32_t puf_sysrdyp_timeout   : 1;  /**< [ 16: 16](RO) It indicate timeout happen to SYSRDYP of PUF power switch */
        uint32_t puf_sysrdyp_fall      : 1;  /**< [ 17: 17](RO) It indicate falling edge is detected on SYSRDYP of PUF power switch */
        uint32_t otp_sysrdyp_timeout   : 1;  /**< [ 18: 18](RO) It indicate timeout happen to SYSRDYP of OTP power switch */
        uint32_t otp_sysrdyp_fall      : 1;  /**< [ 19: 19](RO) It indicate falling edge is detected on SYSRDYP of OTP power switch */
        uint32_t cm3_ram_self_test_failure_status : 4;/**< [ 23: 20](RO) This register indicate the status of eHSM CM3 RAM self test status for each
                                                                 memory instanceIf bit 0 is 1, RAM0 fail in memory self testIf bit 1 is 1, RAM1
                                                                 fail in memory self testIf bit 2 is 1, RAM2 fail in memory self testIf bit 3 is
                                                                 1, RAM3 fail in memory self test */
        uint32_t cm3_rom_crc_mismatch  : 1;  /**< [ 24: 24](RO) EHSM CM3 ROM CRC checksum mismatches in self test */
        uint32_t ram1_sd_wakeup_timeout : 1; /**< [ 25: 25](RO) Ehsm_cm3_ram_part1_sd is not driven to 0 within 32 cycles after ehsm_cm3_ram_part1_wakeup_request */
        uint32_t ram1_dslp_wakeup_timeout : 1;/**< [ 26: 26](RO) Ehsm_cm3_ram_part1_dslp is not driven to 0 within 32 cycles after ehsm_cm3_ram_part1_wakeup_request */
        uint32_t ram0_dslp_wakeup_timeout : 1;/**< [ 27: 27](RO) Ehsm_cm3_ram_part0_dslp is not driven to 0 within 32 cycles after ehsm_cm3_ram_part0_wakeup_request */
        uint32_t ram0_warm_rst_wakeup_timeout : 1;/**< [ 28: 28](RO) Ehsm_cm3_ram_part0_dslp is not driven to 0 within 32 cycles after ehsm_warm_rstn release */
        uint32_t ebg_setting_correction_done : 1;/**< [ 29: 29](RO) This bit indicate if error correction for EBG fields */
        uint32_t ebg_setting_uncorrectable_error : 1;/**< [ 30: 30](RO) This bit indicate if there is uncorretable errors when doing error correction for EBG fields in OTP */
        uint32_t sp_rsvd0              : 1;  /**< [ 31: 31](RO) Missing register field description. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_ehsm_shadow_reg_status_s cn; */
};
typedef union cavm_ehsm_shadow_reg_status cavm_ehsm_shadow_reg_status_t;

#define CAVM_EHSM_SHADOW_REG_STATUS CAVM_EHSM_SHADOW_REG_STATUS_FUNC()
static inline uint64_t CAVM_EHSM_SHADOW_REG_STATUS_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_EHSM_SHADOW_REG_STATUS_FUNC(void)
{
    if (cavm_is_model(OCTEONTX_CN20KA))
        return 0x80b000000100ll;
    __cavm_csr_fatal("EHSM_SHADOW_REG_STATUS", 0, 0, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_EHSM_SHADOW_REG_STATUS cavm_ehsm_shadow_reg_status_t
#define bustype_CAVM_EHSM_SHADOW_REG_STATUS CSR_TYPE_NCB32b
#define basename_CAVM_EHSM_SHADOW_REG_STATUS "EHSM_SHADOW_REG_STATUS"
#define device_bar_CAVM_EHSM_SHADOW_REG_STATUS 0x0 /* PF_BAR0 */
#define busnum_CAVM_EHSM_SHADOW_REG_STATUS 0
#define arguments_CAVM_EHSM_SHADOW_REG_STATUS -1,-1,-1,-1

/**
 * Register (NCB32b) ehsm_side_channel_sensor_status
 *
 * EHSM Side Channel Sensor Status Register
 */
union cavm_ehsm_side_channel_sensor_status
{
    uint32_t u;
    struct cavm_ehsm_side_channel_sensor_status_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t side_channel_sensor_status : 32;/**< [ 31:  0](RO) Software Interruptbit 0:This is for system level software to report error
                                                                 eventClock frequency detectorbit 1:SOC detector should cover clock duty cycle
                                                                 and frequency changeClock pulse detectorbit 2:SOC detector should cover clock
                                                                 glitch and spikeThermal attack detectorbit 3:SOC detector should cover
                                                                 temperature changeVoltage sensor for SOC VDD power domain 1bit 4:SOC detector
                                                                 should cover voltage change on SOC VDD power domain 1Voltage sensor for SOC VDD
                                                                 power domain 2bit 5:SOC detector should cover voltage change on SOC VDD power
                                                                 domain 2Voltage sensor for SOC VDD power domain 3bit 6:SOC detector should cover
                                                                 voltage change on SOC VDD power domain 3Reservedbit 7~15 */
#else /* Word 0 - Little Endian */
        uint32_t side_channel_sensor_status : 32;/**< [ 31:  0](RO) Software Interruptbit 0:This is for system level software to report error
                                                                 eventClock frequency detectorbit 1:SOC detector should cover clock duty cycle
                                                                 and frequency changeClock pulse detectorbit 2:SOC detector should cover clock
                                                                 glitch and spikeThermal attack detectorbit 3:SOC detector should cover
                                                                 temperature changeVoltage sensor for SOC VDD power domain 1bit 4:SOC detector
                                                                 should cover voltage change on SOC VDD power domain 1Voltage sensor for SOC VDD
                                                                 power domain 2bit 5:SOC detector should cover voltage change on SOC VDD power
                                                                 domain 2Voltage sensor for SOC VDD power domain 3bit 6:SOC detector should cover
                                                                 voltage change on SOC VDD power domain 3Reservedbit 7~15 */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_ehsm_side_channel_sensor_status_s cn; */
};
typedef union cavm_ehsm_side_channel_sensor_status cavm_ehsm_side_channel_sensor_status_t;

#define CAVM_EHSM_SIDE_CHANNEL_SENSOR_STATUS CAVM_EHSM_SIDE_CHANNEL_SENSOR_STATUS_FUNC()
static inline uint64_t CAVM_EHSM_SIDE_CHANNEL_SENSOR_STATUS_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_EHSM_SIDE_CHANNEL_SENSOR_STATUS_FUNC(void)
{
    if (cavm_is_model(OCTEONTX_CN20KA))
        return 0x80b0000000ecll;
    __cavm_csr_fatal("EHSM_SIDE_CHANNEL_SENSOR_STATUS", 0, 0, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_EHSM_SIDE_CHANNEL_SENSOR_STATUS cavm_ehsm_side_channel_sensor_status_t
#define bustype_CAVM_EHSM_SIDE_CHANNEL_SENSOR_STATUS CSR_TYPE_NCB32b
#define basename_CAVM_EHSM_SIDE_CHANNEL_SENSOR_STATUS "EHSM_SIDE_CHANNEL_SENSOR_STATUS"
#define device_bar_CAVM_EHSM_SIDE_CHANNEL_SENSOR_STATUS 0x0 /* PF_BAR0 */
#define busnum_CAVM_EHSM_SIDE_CHANNEL_SENSOR_STATUS 0
#define arguments_CAVM_EHSM_SIDE_CHANNEL_SENSOR_STATUS -1,-1,-1,-1

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
        uint32_t reserved_28_31        : 4;
        uint32_t sticky_status         : 4;  /**< [ 27: 24](RO/H) This field will show if one of the following attack occured since last reset:
                                                                 Bit 0 - thermal attack.
                                                                 Bit 1 - Low Voltage Detect VCORE.
                                                                 Bit 2 - Low Voltage Detect VSYS - unused in Odyssey.
                                                                 Bit 3 - Low Voltage Detect VDIS. */
        uint32_t reserved_23           : 1;
        uint32_t sensors_enable_fuse   : 7;  /**< [ 22: 16](RO/H) This field will show the status of SENSORS_ENABLE fuse. */
        uint32_t reserved_14_15        : 2;
        uint32_t sensors_pre_qualifier : 6;  /**< [ 13:  8](RO/H) This field will be asserted even if fuses masking the sensor.
                                                                 Bit 0 - clock detect frequency.
                                                                 Bit 1 - clock detect pulse.
                                                                 Bit 2 - thermal attack.
                                                                 Bit 3 - Low Voltage Detect VCORE.
                                                                 Bit 4 - Low Voltage Detect VSYS - unused in Odyssey.
                                                                 Bit 5 - Low Voltage Detect VDIS. */
        uint32_t reserved_6_7          : 2;
        uint32_t sensors               : 6;  /**< [  5:  0](RO/H) Bit 0 - clock detect frequency.
                                                                 Bit 1 - clock detect pulse.
                                                                 Bit 2 - thermal attack.
                                                                 Bit 3 - Low Voltage Detect VCORE.
                                                                 Bit 4 - Low Voltage Detect VSYS - unused in Odyssey.
                                                                 Bit 5 - Low Voltage Detect VDIS. */
#else /* Word 0 - Little Endian */
        uint32_t sensors               : 6;  /**< [  5:  0](RO/H) Bit 0 - clock detect frequency.
                                                                 Bit 1 - clock detect pulse.
                                                                 Bit 2 - thermal attack.
                                                                 Bit 3 - Low Voltage Detect VCORE.
                                                                 Bit 4 - Low Voltage Detect VSYS - unused in Odyssey.
                                                                 Bit 5 - Low Voltage Detect VDIS. */
        uint32_t reserved_6_7          : 2;
        uint32_t sensors_pre_qualifier : 6;  /**< [ 13:  8](RO/H) This field will be asserted even if fuses masking the sensor.
                                                                 Bit 0 - clock detect frequency.
                                                                 Bit 1 - clock detect pulse.
                                                                 Bit 2 - thermal attack.
                                                                 Bit 3 - Low Voltage Detect VCORE.
                                                                 Bit 4 - Low Voltage Detect VSYS - unused in Odyssey.
                                                                 Bit 5 - Low Voltage Detect VDIS. */
        uint32_t reserved_14_15        : 2;
        uint32_t sensors_enable_fuse   : 7;  /**< [ 22: 16](RO/H) This field will show the status of SENSORS_ENABLE fuse. */
        uint32_t reserved_23           : 1;
        uint32_t sticky_status         : 4;  /**< [ 27: 24](RO/H) This field will show if one of the following attack occured since last reset:
                                                                 Bit 0 - thermal attack.
                                                                 Bit 1 - Low Voltage Detect VCORE.
                                                                 Bit 2 - Low Voltage Detect VSYS - unused in Odyssey.
                                                                 Bit 3 - Low Voltage Detect VDIS. */
        uint32_t reserved_28_31        : 4;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_ehsm_side_sensor_status_s cn; */
};
typedef union cavm_ehsm_side_sensor_status cavm_ehsm_side_sensor_status_t;

#define CAVM_EHSM_SIDE_SENSOR_STATUS CAVM_EHSM_SIDE_SENSOR_STATUS_FUNC()
static inline uint64_t CAVM_EHSM_SIDE_SENSOR_STATUS_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_EHSM_SIDE_SENSOR_STATUS_FUNC(void)
{
    if (cavm_is_model(OCTEONTX_CN20KA))
        return 0x80b000004028ll;
    __cavm_csr_fatal("EHSM_SIDE_SENSOR_STATUS", 0, 0, 0, 0, 0, 0, 0);
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
    if (cavm_is_model(OCTEONTX_CN20KA))
        return 0x80b000004020ll;
    __cavm_csr_fatal("EHSM_SW_SENSOR", 0, 0, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_EHSM_SW_SENSOR cavm_ehsm_sw_sensor_t
#define bustype_CAVM_EHSM_SW_SENSOR CSR_TYPE_NCB32b
#define basename_CAVM_EHSM_SW_SENSOR "EHSM_SW_SENSOR"
#define device_bar_CAVM_EHSM_SW_SENSOR 0x0 /* PF_BAR0 */
#define busnum_CAVM_EHSM_SW_SENSOR 0
#define arguments_CAVM_EHSM_SW_SENSOR -1,-1,-1,-1

/**
 * Register (NCB32b) ehsm_uuid_expo_0
 *
 * EHSM Uuid Expo 0 Register
 */
union cavm_ehsm_uuid_expo_0
{
    uint32_t u;
    struct cavm_ehsm_uuid_expo_0_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t uuid_expo_0           : 32; /**< [ 31:  0](RO) This register saves bit 31~0 of scrambled UUID. It is only valid after
                                                                 SCRAMBLE_DONE of UUID_STATUS is 1. When SCRAMBLE_DONE of UUID_STATUS is 0,
                                                                 reading this register will only return all 1s./ *eHSM_INTERNAL_DOC_NOTE* / This is
                                                                 for EHSM-159 */
#else /* Word 0 - Little Endian */
        uint32_t uuid_expo_0           : 32; /**< [ 31:  0](RO) This register saves bit 31~0 of scrambled UUID. It is only valid after
                                                                 SCRAMBLE_DONE of UUID_STATUS is 1. When SCRAMBLE_DONE of UUID_STATUS is 0,
                                                                 reading this register will only return all 1s./ *eHSM_INTERNAL_DOC_NOTE* / This is
                                                                 for EHSM-159 */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_ehsm_uuid_expo_0_s cn; */
};
typedef union cavm_ehsm_uuid_expo_0 cavm_ehsm_uuid_expo_0_t;

#define CAVM_EHSM_UUID_EXPO_0 CAVM_EHSM_UUID_EXPO_0_FUNC()
static inline uint64_t CAVM_EHSM_UUID_EXPO_0_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_EHSM_UUID_EXPO_0_FUNC(void)
{
    if (cavm_is_model(OCTEONTX_CN20KA))
        return 0x80b000000104ll;
    __cavm_csr_fatal("EHSM_UUID_EXPO_0", 0, 0, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_EHSM_UUID_EXPO_0 cavm_ehsm_uuid_expo_0_t
#define bustype_CAVM_EHSM_UUID_EXPO_0 CSR_TYPE_NCB32b
#define basename_CAVM_EHSM_UUID_EXPO_0 "EHSM_UUID_EXPO_0"
#define device_bar_CAVM_EHSM_UUID_EXPO_0 0x0 /* PF_BAR0 */
#define busnum_CAVM_EHSM_UUID_EXPO_0 0
#define arguments_CAVM_EHSM_UUID_EXPO_0 -1,-1,-1,-1

/**
 * Register (NCB32b) ehsm_uuid_expo_1
 *
 * EHSM Uuid Expo 1 Register
 */
union cavm_ehsm_uuid_expo_1
{
    uint32_t u;
    struct cavm_ehsm_uuid_expo_1_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t uuid_expo_1           : 32; /**< [ 31:  0](RO) This register saves bit 63~32 of scrambled UUID. It is only valid after
                                                                 SCRAMBLE_DONE of UUID_STATUS is 1. When SCRAMBLE_DONE of UUID_STATUS is 0,
                                                                 reading this register will only return all 1s./ *eHSM_INTERNAL_DOC_NOTE* / This is
                                                                 for EHSM-159 */
#else /* Word 0 - Little Endian */
        uint32_t uuid_expo_1           : 32; /**< [ 31:  0](RO) This register saves bit 63~32 of scrambled UUID. It is only valid after
                                                                 SCRAMBLE_DONE of UUID_STATUS is 1. When SCRAMBLE_DONE of UUID_STATUS is 0,
                                                                 reading this register will only return all 1s./ *eHSM_INTERNAL_DOC_NOTE* / This is
                                                                 for EHSM-159 */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_ehsm_uuid_expo_1_s cn; */
};
typedef union cavm_ehsm_uuid_expo_1 cavm_ehsm_uuid_expo_1_t;

#define CAVM_EHSM_UUID_EXPO_1 CAVM_EHSM_UUID_EXPO_1_FUNC()
static inline uint64_t CAVM_EHSM_UUID_EXPO_1_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_EHSM_UUID_EXPO_1_FUNC(void)
{
    if (cavm_is_model(OCTEONTX_CN20KA))
        return 0x80b000000108ll;
    __cavm_csr_fatal("EHSM_UUID_EXPO_1", 0, 0, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_EHSM_UUID_EXPO_1 cavm_ehsm_uuid_expo_1_t
#define bustype_CAVM_EHSM_UUID_EXPO_1 CSR_TYPE_NCB32b
#define basename_CAVM_EHSM_UUID_EXPO_1 "EHSM_UUID_EXPO_1"
#define device_bar_CAVM_EHSM_UUID_EXPO_1 0x0 /* PF_BAR0 */
#define busnum_CAVM_EHSM_UUID_EXPO_1 0
#define arguments_CAVM_EHSM_UUID_EXPO_1 -1,-1,-1,-1

/**
 * Register (NCB32b) ehsm_uuid_expo_2
 *
 * EHSM Uuid Expo 2 Register
 */
union cavm_ehsm_uuid_expo_2
{
    uint32_t u;
    struct cavm_ehsm_uuid_expo_2_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t uuid_expo_2           : 32; /**< [ 31:  0](RO) This register saves bit 95~64 of scrambled UUID. It is only valid after
                                                                 SCRAMBLE_DONE of UUID_STATUS is 1. When SCRAMBLE_DONE of UUID_STATUS is 0,
                                                                 reading this register will only return all 1s./ *eHSM_INTERNAL_DOC_NOTE* / This is
                                                                 for EHSM-159 */
#else /* Word 0 - Little Endian */
        uint32_t uuid_expo_2           : 32; /**< [ 31:  0](RO) This register saves bit 95~64 of scrambled UUID. It is only valid after
                                                                 SCRAMBLE_DONE of UUID_STATUS is 1. When SCRAMBLE_DONE of UUID_STATUS is 0,
                                                                 reading this register will only return all 1s./ *eHSM_INTERNAL_DOC_NOTE* / This is
                                                                 for EHSM-159 */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_ehsm_uuid_expo_2_s cn; */
};
typedef union cavm_ehsm_uuid_expo_2 cavm_ehsm_uuid_expo_2_t;

#define CAVM_EHSM_UUID_EXPO_2 CAVM_EHSM_UUID_EXPO_2_FUNC()
static inline uint64_t CAVM_EHSM_UUID_EXPO_2_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_EHSM_UUID_EXPO_2_FUNC(void)
{
    if (cavm_is_model(OCTEONTX_CN20KA))
        return 0x80b00000010cll;
    __cavm_csr_fatal("EHSM_UUID_EXPO_2", 0, 0, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_EHSM_UUID_EXPO_2 cavm_ehsm_uuid_expo_2_t
#define bustype_CAVM_EHSM_UUID_EXPO_2 CSR_TYPE_NCB32b
#define basename_CAVM_EHSM_UUID_EXPO_2 "EHSM_UUID_EXPO_2"
#define device_bar_CAVM_EHSM_UUID_EXPO_2 0x0 /* PF_BAR0 */
#define busnum_CAVM_EHSM_UUID_EXPO_2 0
#define arguments_CAVM_EHSM_UUID_EXPO_2 -1,-1,-1,-1

/**
 * Register (NCB32b) ehsm_uuid_expo_3
 *
 * EHSM Uuid Expo 3 Register
 */
union cavm_ehsm_uuid_expo_3
{
    uint32_t u;
    struct cavm_ehsm_uuid_expo_3_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t uuid_expo_3           : 32; /**< [ 31:  0](RO) This register saves bit 127~96 of scrambled UUID. It is only valid after
                                                                 SCRAMBLE_DONE of UUID_STATUS is 1. When SCRAMBLE_DONE of UUID_STATUS is 0,
                                                                 reading this register will only return all 1s./ *eHSM_INTERNAL_DOC_NOTE* / This is
                                                                 for EHSM-159 */
#else /* Word 0 - Little Endian */
        uint32_t uuid_expo_3           : 32; /**< [ 31:  0](RO) This register saves bit 127~96 of scrambled UUID. It is only valid after
                                                                 SCRAMBLE_DONE of UUID_STATUS is 1. When SCRAMBLE_DONE of UUID_STATUS is 0,
                                                                 reading this register will only return all 1s./ *eHSM_INTERNAL_DOC_NOTE* / This is
                                                                 for EHSM-159 */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_ehsm_uuid_expo_3_s cn; */
};
typedef union cavm_ehsm_uuid_expo_3 cavm_ehsm_uuid_expo_3_t;

#define CAVM_EHSM_UUID_EXPO_3 CAVM_EHSM_UUID_EXPO_3_FUNC()
static inline uint64_t CAVM_EHSM_UUID_EXPO_3_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_EHSM_UUID_EXPO_3_FUNC(void)
{
    if (cavm_is_model(OCTEONTX_CN20KA))
        return 0x80b000000110ll;
    __cavm_csr_fatal("EHSM_UUID_EXPO_3", 0, 0, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_EHSM_UUID_EXPO_3 cavm_ehsm_uuid_expo_3_t
#define bustype_CAVM_EHSM_UUID_EXPO_3 CSR_TYPE_NCB32b
#define basename_CAVM_EHSM_UUID_EXPO_3 "EHSM_UUID_EXPO_3"
#define device_bar_CAVM_EHSM_UUID_EXPO_3 0x0 /* PF_BAR0 */
#define busnum_CAVM_EHSM_UUID_EXPO_3 0
#define arguments_CAVM_EHSM_UUID_EXPO_3 -1,-1,-1,-1

/**
 * Register (NCB32b) ehsm_uuid_status
 *
 * EHSM Uuid Status Register
 */
union cavm_ehsm_uuid_status
{
    uint32_t u;
    struct cavm_ehsm_uuid_status_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t sp_rsvd0              : 27; /**< [ 31:  5](RO) Missing register field description. */
        uint32_t parity_mismatch       : 1;  /**< [  4:  4](RO) It indicates that parity mismatch is detected on UUID after UUID scrambling is
                                                                 done. This bit will be set to 0 when UUID ECC error correction or scrambling
                                                                 starts */
        uint32_t scramble_done         : 1;  /**< [  3:  3](RO) When it is 1, UUID scrambling is done. The value in UUID_EXPO_0~3 is valid to
                                                                 read.When it is 0, reading UUID_EXPO_0~3 will only return all 1sIf ECC_START or
                                                                 SCRAMBLE_START in UUID_CTRL is programmed to 1, this field will be reset to 0. */
        uint32_t no_correction         : 1;  /**< [  2:  2](RO) When it is 1, external_uuid_ecc_in are all 0s so no error correction is needed.
                                                                 UUID_0~2 will store the raw value of external_uuid_in */
        uint32_t uncorrectable_error   : 1;  /**< [  1:  1](RO) It is only valid when CORRECTION_DONE is 1.When it is 1, there is uncorrectable
                                                                 error in UUID. UUID_0~2 are invalidWhen it is 0, UUID error correction is
                                                                 successful, indicating either no error or single bit error (correctable). Error
                                                                 corrected UUID is stored in UUID_0~2 */
        uint32_t correction_done       : 1;  /**< [  0:  0](RO) When it is 1, HW finished error correction for UUID. User need to check
                                                                 UNCORRECTABLE_ERROR to see if error correction succeed.If UNCORRECTABLE_ERROR=0,
                                                                 UUID error correction is successful, indicating either no error or single bit
                                                                 error (correctable), error corrected UUID is stored in UUID_0~2 and ready to be
                                                                 read by hostIf UNCORRECTABLE_ERROR=1, UUID error correction failed, the value in
                                                                 UUID_0~2 are invalid */
#else /* Word 0 - Little Endian */
        uint32_t correction_done       : 1;  /**< [  0:  0](RO) When it is 1, HW finished error correction for UUID. User need to check
                                                                 UNCORRECTABLE_ERROR to see if error correction succeed.If UNCORRECTABLE_ERROR=0,
                                                                 UUID error correction is successful, indicating either no error or single bit
                                                                 error (correctable), error corrected UUID is stored in UUID_0~2 and ready to be
                                                                 read by hostIf UNCORRECTABLE_ERROR=1, UUID error correction failed, the value in
                                                                 UUID_0~2 are invalid */
        uint32_t uncorrectable_error   : 1;  /**< [  1:  1](RO) It is only valid when CORRECTION_DONE is 1.When it is 1, there is uncorrectable
                                                                 error in UUID. UUID_0~2 are invalidWhen it is 0, UUID error correction is
                                                                 successful, indicating either no error or single bit error (correctable). Error
                                                                 corrected UUID is stored in UUID_0~2 */
        uint32_t no_correction         : 1;  /**< [  2:  2](RO) When it is 1, external_uuid_ecc_in are all 0s so no error correction is needed.
                                                                 UUID_0~2 will store the raw value of external_uuid_in */
        uint32_t scramble_done         : 1;  /**< [  3:  3](RO) When it is 1, UUID scrambling is done. The value in UUID_EXPO_0~3 is valid to
                                                                 read.When it is 0, reading UUID_EXPO_0~3 will only return all 1sIf ECC_START or
                                                                 SCRAMBLE_START in UUID_CTRL is programmed to 1, this field will be reset to 0. */
        uint32_t parity_mismatch       : 1;  /**< [  4:  4](RO) It indicates that parity mismatch is detected on UUID after UUID scrambling is
                                                                 done. This bit will be set to 0 when UUID ECC error correction or scrambling
                                                                 starts */
        uint32_t sp_rsvd0              : 27; /**< [ 31:  5](RO) Missing register field description. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_ehsm_uuid_status_s cn; */
};
typedef union cavm_ehsm_uuid_status cavm_ehsm_uuid_status_t;

#define CAVM_EHSM_UUID_STATUS CAVM_EHSM_UUID_STATUS_FUNC()
static inline uint64_t CAVM_EHSM_UUID_STATUS_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_EHSM_UUID_STATUS_FUNC(void)
{
    if (cavm_is_model(OCTEONTX_CN20KA))
        return 0x80b0000000fcll;
    __cavm_csr_fatal("EHSM_UUID_STATUS", 0, 0, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_EHSM_UUID_STATUS cavm_ehsm_uuid_status_t
#define bustype_CAVM_EHSM_UUID_STATUS CSR_TYPE_NCB32b
#define basename_CAVM_EHSM_UUID_STATUS "EHSM_UUID_STATUS"
#define device_bar_CAVM_EHSM_UUID_STATUS 0x0 /* PF_BAR0 */
#define busnum_CAVM_EHSM_UUID_STATUS 0
#define arguments_CAVM_EHSM_UUID_STATUS -1,-1,-1,-1

/**
 * Register (NCB32b) ehsm_watchdog_timer_info
 *
 * EHSM Watchdog Timer Info Register
 */
union cavm_ehsm_watchdog_timer_info
{
    uint32_t u;
    struct cavm_ehsm_watchdog_timer_info_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t sp_rsvd               : 16; /**< [ 31: 16](RO) Missing register field description. */
        uint32_t cmd_id                : 16; /**< [ 15:  0](RO) It is the CMD ID value when watchdog timer timeout happens. Only HW reset can clear this field */
#else /* Word 0 - Little Endian */
        uint32_t cmd_id                : 16; /**< [ 15:  0](RO) It is the CMD ID value when watchdog timer timeout happens. Only HW reset can clear this field */
        uint32_t sp_rsvd               : 16; /**< [ 31: 16](RO) Missing register field description. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_ehsm_watchdog_timer_info_s cn; */
};
typedef union cavm_ehsm_watchdog_timer_info cavm_ehsm_watchdog_timer_info_t;

#define CAVM_EHSM_WATCHDOG_TIMER_INFO CAVM_EHSM_WATCHDOG_TIMER_INFO_FUNC()
static inline uint64_t CAVM_EHSM_WATCHDOG_TIMER_INFO_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_EHSM_WATCHDOG_TIMER_INFO_FUNC(void)
{
    if (cavm_is_model(OCTEONTX_CN20KA))
        return 0x80b00000013cll;
    __cavm_csr_fatal("EHSM_WATCHDOG_TIMER_INFO", 0, 0, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_EHSM_WATCHDOG_TIMER_INFO cavm_ehsm_watchdog_timer_info_t
#define bustype_CAVM_EHSM_WATCHDOG_TIMER_INFO CSR_TYPE_NCB32b
#define basename_CAVM_EHSM_WATCHDOG_TIMER_INFO "EHSM_WATCHDOG_TIMER_INFO"
#define device_bar_CAVM_EHSM_WATCHDOG_TIMER_INFO 0x0 /* PF_BAR0 */
#define busnum_CAVM_EHSM_WATCHDOG_TIMER_INFO 0
#define arguments_CAVM_EHSM_WATCHDOG_TIMER_INFO -1,-1,-1,-1

#endif /* __CAVM_CSRS_EHSM_H__ */
