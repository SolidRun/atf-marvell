#ifndef __CAVM_CSRS_PEMSEC_H__
#define __CAVM_CSRS_PEMSEC_H__
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
 * PEMSEC.
 *
 * This file is auto generated. Do not edit.
 *
 */

/**
 * Enumeration pemsec_bar_e
 *
 * PEMSEC Base Address Register Enumeration
 * Enumerates the base address registers.
 */
#define CAVM_PEMSEC_BAR_E_PEMSECX_PF_BAR0(a) (0xc2c000000000ll + 0x100000000ll * (a))
#define CAVM_PEMSEC_BAR_E_PEMSECX_PF_BAR0_SIZE 0x40000000ull
#define CAVM_PEMSEC_BAR_E_PEMSECX_PF_BAR4(a) (0xc2c080000000ll + 0x100000000ll * (a))
#define CAVM_PEMSEC_BAR_E_PEMSECX_PF_BAR4_SIZE 0x100000ull

/**
 * Enumeration pemsec_int_vec_e
 *
 * PEMSEC MSI-X Vector Enumeration
 * Enumerates the MSI-X interrupt vectors.
 */
#define CAVM_PEMSEC_INT_VEC_E_AES_RX_INT (2)
#define CAVM_PEMSEC_INT_VEC_E_AES_TX_INT (1)
#define CAVM_PEMSEC_INT_VEC_E_DWR_ACC_INT (3)
#define CAVM_PEMSEC_INT_VEC_E_IDE_GLB_INT (0)
#define CAVM_PEMSEC_INT_VEC_E_LNKDWN_INT (4)
#define CAVM_PEMSEC_INT_VEC_E_LNKUP_INT (5)
#define CAVM_PEMSEC_INT_VEC_E_PEMOOR_INT (6)
#define CAVM_PEMSEC_INT_VEC_E_VDMX_INT(a) (7 + (a))

/**
 * Register (ARF) pemsec#_blk_ide_ctl
 *
 * PEMSEC IDE Block Control Register
 * This register provides control of the IDE block resets and miscellaneous
 * configuration and test features.
 *
 * This register is not accessible through ROM scripts; see SCR_WRITE32_S[ADDR].
 *
 * This register is reset on core domain reset.
 */
union cavm_pemsecx_blk_ide_ctl
{
    uint64_t u;
    struct cavm_pemsecx_blk_ide_ctl_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_11_63        : 53;
        uint64_t ide_aes_hcfg_pprot    : 3;  /**< [ 10:  8](R/W) IDE AES HCFP Port APB PPROT[2:0] Inputs.

                                                                 Set[IDE_AES_HCFG_PPROT] to 0x0 for all IDE AES HCFG register accesses.
                                                                 PPROT[0] set to 0 for normal access.
                                                                 PPROT[1] set to 0 for secure access.
                                                                 PPROT[2] set to 0 for data access. */
        uint64_t reserved_7            : 1;
        uint64_t ide_hcfg_pprot        : 3;  /**< [  6:  4](R/W) IDE HCFP Port APB PPROT[2:0] Inputs.

                                                                 Set[IDE_HCFG_PPROT] to 0x0 for all IDE HCFG register accesses.
                                                                 PPROT[0] set to 0 for normal access.
                                                                 PPROT[1] set to 0 for secure access.
                                                                 PPROT[2] set to 0 for data access. */
        uint64_t ide_test_enable       : 1;  /**< [  3:  3](R/W) IDE FIPS FIPS 140-3 Test Enable.

                                                                 Set [IDE_TEST_ENABLE] to 1 to enable the FIPS 140-3 test features
                                                                 in the IDE block.  Enables testing the AES-GCM algorithm in the
                                                                 cryptographic core.

                                                                 In test mode the AES cryptographic core can operate in AES-GCM and
                                                                 AES-CTR mode.  The plain/cipher data, commands and IV/Counter values
                                                                 are controlled by the FIPS TX/RX input, output, and command registers.
                                                                 Refer to the PEMSEC TX/RX FIPS Test registers.

                                                                 Set [IDE_CORE_RST] to 1 before setting [IDE_TEST_ENABLE] to 1.
                                                                 After [IDE_TEST_ENABLE] is set to 1 set [IDE_CORE_RST] to 0 to
                                                                 place the IDE logic into FIPS 140-3 test mode.

                                                                 To take the IDE logic out of FIPS 14-3 test mode, set [IDE_CORE_RST]
                                                                 to 1 then set [IDE_TEST_ENABLE] to 0.

                                                                 [IDE_TEST_ENABLE] can only transition while [IDE_CORE_RST] is set to 1.
                                                                 Do not set [IDE_TEST_ENABLE] to 1 while in PCIe IDE mission mode. */
        uint64_t ide_core_rst          : 1;  /**< [  2:  2](R/W) IDE Core Reset.

                                                                 Set [IDE_CORE_RST] to 1 to force the IDE core into reset.  This
                                                                 provides a mechanism for software to force the IDE core into reset.
                                                                 The IDE hardware resets the IDE core when the PCIe controller MAC
                                                                 reset is driven.  The [IDE_CORE_RST] allows software to reset the
                                                                 IDE core independent of the PCIe controller MAC reset.

                                                                 The [IDE_CORE_RST] bit is not self-clearing. */
        uint64_t ide_cfg_caps_nonsticky_rst : 1;/**< [  1:  1](R/W) IDE Configuration Caps Interface Non-Sticky Reset.

                                                                 Setting [IDE_CFG_CAPS_NONSTICKY_RST] to 1 will reset all Caps Registers
                                                                 except sticky and HWINit registers.

                                                                 The [IDE_CFG_CAPS_NONSTICKY_RST] bit is not self-clearing. */
        uint64_t ide_cfg_caps_sticky_rst : 1;/**< [  0:  0](R/W) IDE Configuration Caps Interface Reset.

                                                                 Setting [IDE_CFG_CAPS_STICKY_RST] to 1 will reset Caps Register
                                                                 sticky registers only.

                                                                 The [IDE_CFG_CAPS_STICKY_RST] bit is not self-clearing. */
#else /* Word 0 - Little Endian */
        uint64_t ide_cfg_caps_sticky_rst : 1;/**< [  0:  0](R/W) IDE Configuration Caps Interface Reset.

                                                                 Setting [IDE_CFG_CAPS_STICKY_RST] to 1 will reset Caps Register
                                                                 sticky registers only.

                                                                 The [IDE_CFG_CAPS_STICKY_RST] bit is not self-clearing. */
        uint64_t ide_cfg_caps_nonsticky_rst : 1;/**< [  1:  1](R/W) IDE Configuration Caps Interface Non-Sticky Reset.

                                                                 Setting [IDE_CFG_CAPS_NONSTICKY_RST] to 1 will reset all Caps Registers
                                                                 except sticky and HWINit registers.

                                                                 The [IDE_CFG_CAPS_NONSTICKY_RST] bit is not self-clearing. */
        uint64_t ide_core_rst          : 1;  /**< [  2:  2](R/W) IDE Core Reset.

                                                                 Set [IDE_CORE_RST] to 1 to force the IDE core into reset.  This
                                                                 provides a mechanism for software to force the IDE core into reset.
                                                                 The IDE hardware resets the IDE core when the PCIe controller MAC
                                                                 reset is driven.  The [IDE_CORE_RST] allows software to reset the
                                                                 IDE core independent of the PCIe controller MAC reset.

                                                                 The [IDE_CORE_RST] bit is not self-clearing. */
        uint64_t ide_test_enable       : 1;  /**< [  3:  3](R/W) IDE FIPS FIPS 140-3 Test Enable.

                                                                 Set [IDE_TEST_ENABLE] to 1 to enable the FIPS 140-3 test features
                                                                 in the IDE block.  Enables testing the AES-GCM algorithm in the
                                                                 cryptographic core.

                                                                 In test mode the AES cryptographic core can operate in AES-GCM and
                                                                 AES-CTR mode.  The plain/cipher data, commands and IV/Counter values
                                                                 are controlled by the FIPS TX/RX input, output, and command registers.
                                                                 Refer to the PEMSEC TX/RX FIPS Test registers.

                                                                 Set [IDE_CORE_RST] to 1 before setting [IDE_TEST_ENABLE] to 1.
                                                                 After [IDE_TEST_ENABLE] is set to 1 set [IDE_CORE_RST] to 0 to
                                                                 place the IDE logic into FIPS 140-3 test mode.

                                                                 To take the IDE logic out of FIPS 14-3 test mode, set [IDE_CORE_RST]
                                                                 to 1 then set [IDE_TEST_ENABLE] to 0.

                                                                 [IDE_TEST_ENABLE] can only transition while [IDE_CORE_RST] is set to 1.
                                                                 Do not set [IDE_TEST_ENABLE] to 1 while in PCIe IDE mission mode. */
        uint64_t ide_hcfg_pprot        : 3;  /**< [  6:  4](R/W) IDE HCFP Port APB PPROT[2:0] Inputs.

                                                                 Set[IDE_HCFG_PPROT] to 0x0 for all IDE HCFG register accesses.
                                                                 PPROT[0] set to 0 for normal access.
                                                                 PPROT[1] set to 0 for secure access.
                                                                 PPROT[2] set to 0 for data access. */
        uint64_t reserved_7            : 1;
        uint64_t ide_aes_hcfg_pprot    : 3;  /**< [ 10:  8](R/W) IDE AES HCFP Port APB PPROT[2:0] Inputs.

                                                                 Set[IDE_AES_HCFG_PPROT] to 0x0 for all IDE AES HCFG register accesses.
                                                                 PPROT[0] set to 0 for normal access.
                                                                 PPROT[1] set to 0 for secure access.
                                                                 PPROT[2] set to 0 for data access. */
        uint64_t reserved_11_63        : 53;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_pemsecx_blk_ide_ctl_s cn; */
};
typedef union cavm_pemsecx_blk_ide_ctl cavm_pemsecx_blk_ide_ctl_t;

static inline uint64_t CAVM_PEMSECX_BLK_IDE_CTL(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_PEMSECX_BLK_IDE_CTL(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CN20KA) && (a<=5))
        return 0xc2c000006200ll + 0x100000000ll * ((a) & 0x7);
    __cavm_csr_fatal("PEMSECX_BLK_IDE_CTL", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_PEMSECX_BLK_IDE_CTL(a) cavm_pemsecx_blk_ide_ctl_t
#define bustype_CAVM_PEMSECX_BLK_IDE_CTL(a) CSR_TYPE_ARF
#define basename_CAVM_PEMSECX_BLK_IDE_CTL(a) "PEMSECX_BLK_IDE_CTL"
#define device_bar_CAVM_PEMSECX_BLK_IDE_CTL(a) 0x0 /* PF_BAR0 */
#define busnum_CAVM_PEMSECX_BLK_IDE_CTL(a) (a)
#define arguments_CAVM_PEMSECX_BLK_IDE_CTL(a) (a),-1,-1,-1

/**
 * Register (ARF) pemsec#_blk_ide_sts
 *
 * PEMSEC IDE Block Status Register
 * This register provides status of the IDE block.
 *
 * This register is not accessible through ROM scripts; see SCR_WRITE32_S[ADDR].
 *
 * This register is reset on core domain reset.
 */
union cavm_pemsecx_blk_ide_sts
{
    uint64_t u;
    struct cavm_pemsecx_blk_ide_sts_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_1_63         : 63;
        uint64_t ide_blk_prsnt         : 1;  /**< [  0:  0](RO/H) IDE Block Present.

                                                                 [IDE_BLK_PRSNT] will be set to 1 to indicate that the IDE Cryptographic hardware
                                                                 block is present.

                                                                 [IDE_BLK_PRSNT] will be set to 0 to indicate that the IDE Cryptographic hardware
                                                                 block is not present.  The PEMSEC_IDE_*, PEMSEC_TX_*, PEMSEC_RX_*, and PEMSEC_CFG_*,
                                                                 registers should not be accessed if [IDE_BLK_PRSNT] is set to 0.

                                                                 Software should read [IDE_BLK_PRSNT] before attempting to read or program the
                                                                 PEMSEC_IDE_*, PEMSEC_TX_*, PEMSEC_RX_*, and PEMSEC_CFG_* registers. */
#else /* Word 0 - Little Endian */
        uint64_t ide_blk_prsnt         : 1;  /**< [  0:  0](RO/H) IDE Block Present.

                                                                 [IDE_BLK_PRSNT] will be set to 1 to indicate that the IDE Cryptographic hardware
                                                                 block is present.

                                                                 [IDE_BLK_PRSNT] will be set to 0 to indicate that the IDE Cryptographic hardware
                                                                 block is not present.  The PEMSEC_IDE_*, PEMSEC_TX_*, PEMSEC_RX_*, and PEMSEC_CFG_*,
                                                                 registers should not be accessed if [IDE_BLK_PRSNT] is set to 0.

                                                                 Software should read [IDE_BLK_PRSNT] before attempting to read or program the
                                                                 PEMSEC_IDE_*, PEMSEC_TX_*, PEMSEC_RX_*, and PEMSEC_CFG_* registers. */
        uint64_t reserved_1_63         : 63;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_pemsecx_blk_ide_sts_s cn; */
};
typedef union cavm_pemsecx_blk_ide_sts cavm_pemsecx_blk_ide_sts_t;

static inline uint64_t CAVM_PEMSECX_BLK_IDE_STS(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_PEMSECX_BLK_IDE_STS(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CN20KA) && (a<=5))
        return 0xc2c000006208ll + 0x100000000ll * ((a) & 0x7);
    __cavm_csr_fatal("PEMSECX_BLK_IDE_STS", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_PEMSECX_BLK_IDE_STS(a) cavm_pemsecx_blk_ide_sts_t
#define bustype_CAVM_PEMSECX_BLK_IDE_STS(a) CSR_TYPE_ARF
#define basename_CAVM_PEMSECX_BLK_IDE_STS(a) "PEMSECX_BLK_IDE_STS"
#define device_bar_CAVM_PEMSECX_BLK_IDE_STS(a) 0x0 /* PF_BAR0 */
#define busnum_CAVM_PEMSECX_BLK_IDE_STS(a) (a)
#define arguments_CAVM_PEMSECX_BLK_IDE_STS(a) (a),-1,-1,-1

/**
 * Register (ARF) pemsec#_cfg_core_ver_num
 *
 * CFG IP Version Number Register
 */
union cavm_pemsecx_cfg_core_ver_num
{
    uint64_t u;
    struct cavm_pemsecx_cfg_core_ver_num_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_16_63        : 48;
        uint64_t version_num           : 16; /**< [ 15:  0](RO) Indicates the IDE corekit release version number. */
#else /* Word 0 - Little Endian */
        uint64_t version_num           : 16; /**< [ 15:  0](RO) Indicates the IDE corekit release version number. */
        uint64_t reserved_16_63        : 48;
#endif /* Word 0 - End */
    } s;
    struct cavm_pemsecx_cfg_core_ver_num_cn
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_32_63        : 32;
        uint64_t reserved_16_31        : 16;
        uint64_t version_num           : 16; /**< [ 15:  0](RO) Indicates the IDE corekit release version number. */
#else /* Word 0 - Little Endian */
        uint64_t version_num           : 16; /**< [ 15:  0](RO) Indicates the IDE corekit release version number. */
        uint64_t reserved_16_31        : 16;
        uint64_t reserved_32_63        : 32;
#endif /* Word 0 - End */
    } cn;
};
typedef union cavm_pemsecx_cfg_core_ver_num cavm_pemsecx_cfg_core_ver_num_t;

static inline uint64_t CAVM_PEMSECX_CFG_CORE_VER_NUM(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_PEMSECX_CFG_CORE_VER_NUM(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CN20KA) && (a<=5))
        return 0xc2c000001000ll + 0x100000000ll * ((a) & 0x7);
    __cavm_csr_fatal("PEMSECX_CFG_CORE_VER_NUM", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_PEMSECX_CFG_CORE_VER_NUM(a) cavm_pemsecx_cfg_core_ver_num_t
#define bustype_CAVM_PEMSECX_CFG_CORE_VER_NUM(a) CSR_TYPE_ARF
#define basename_CAVM_PEMSECX_CFG_CORE_VER_NUM(a) "PEMSECX_CFG_CORE_VER_NUM"
#define device_bar_CAVM_PEMSECX_CFG_CORE_VER_NUM(a) 0x0 /* PF_BAR0 */
#define busnum_CAVM_PEMSECX_CFG_CORE_VER_NUM(a) (a)
#define arguments_CAVM_PEMSECX_CFG_CORE_VER_NUM(a) (a),-1,-1,-1

/**
 * Register (ARF) pemsec#_cfg_core_ver_type
 *
 * CFG IP Version Type Register
 */
union cavm_pemsecx_cfg_core_ver_type
{
    uint64_t u;
    struct cavm_pemsecx_cfg_core_ver_type_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_16_63        : 48;
        uint64_t type_enum             : 4;  /**< [ 15: 12](RO) Corekit release type. */
        uint64_t pkg_num               : 4;  /**< [ 11:  8](RO) Corekit package number. */
        uint64_t type_num              : 8;  /**< [  7:  0](RO) Corekit version type number. */
#else /* Word 0 - Little Endian */
        uint64_t type_num              : 8;  /**< [  7:  0](RO) Corekit version type number. */
        uint64_t pkg_num               : 4;  /**< [ 11:  8](RO) Corekit package number. */
        uint64_t type_enum             : 4;  /**< [ 15: 12](RO) Corekit release type. */
        uint64_t reserved_16_63        : 48;
#endif /* Word 0 - End */
    } s;
    struct cavm_pemsecx_cfg_core_ver_type_cn
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_32_63        : 32;
        uint64_t reserved_16_31        : 16;
        uint64_t type_enum             : 4;  /**< [ 15: 12](RO) Corekit release type. */
        uint64_t pkg_num               : 4;  /**< [ 11:  8](RO) Corekit package number. */
        uint64_t type_num              : 8;  /**< [  7:  0](RO) Corekit version type number. */
#else /* Word 0 - Little Endian */
        uint64_t type_num              : 8;  /**< [  7:  0](RO) Corekit version type number. */
        uint64_t pkg_num               : 4;  /**< [ 11:  8](RO) Corekit package number. */
        uint64_t type_enum             : 4;  /**< [ 15: 12](RO) Corekit release type. */
        uint64_t reserved_16_31        : 16;
        uint64_t reserved_32_63        : 32;
#endif /* Word 0 - End */
    } cn;
};
typedef union cavm_pemsecx_cfg_core_ver_type cavm_pemsecx_cfg_core_ver_type_t;

static inline uint64_t CAVM_PEMSECX_CFG_CORE_VER_TYPE(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_PEMSECX_CFG_CORE_VER_TYPE(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CN20KA) && (a<=5))
        return 0xc2c000001008ll + 0x100000000ll * ((a) & 0x7);
    __cavm_csr_fatal("PEMSECX_CFG_CORE_VER_TYPE", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_PEMSECX_CFG_CORE_VER_TYPE(a) cavm_pemsecx_cfg_core_ver_type_t
#define bustype_CAVM_PEMSECX_CFG_CORE_VER_TYPE(a) CSR_TYPE_ARF
#define basename_CAVM_PEMSECX_CFG_CORE_VER_TYPE(a) "PEMSECX_CFG_CORE_VER_TYPE"
#define device_bar_CAVM_PEMSECX_CFG_CORE_VER_TYPE(a) 0x0 /* PF_BAR0 */
#define busnum_CAVM_PEMSECX_CFG_CORE_VER_TYPE(a) (a)
#define arguments_CAVM_PEMSECX_CFG_CORE_VER_TYPE(a) (a),-1,-1,-1

/**
 * Register (ARF) pemsec#_datapath_prot_error_inj_ctrl
 *
 * Datapath Protection Error Injection Control Register
 */
union cavm_pemsecx_datapath_prot_error_inj_ctrl
{
    uint64_t u;
    struct cavm_pemsecx_datapath_prot_error_inj_ctrl_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_16_63        : 48;
        uint64_t dpath_prot_error_inj_loc : 5;/**< [ 15: 11](R/W) Error injection location. Selects where error injection takes
                                                                 place, according to the following codification:
                                                                   0x00 = No region specified.
                                                                   0x01 = Tx Prefix at processing stage 2.
                                                                   0x02 = Tx Prefix at processing stage 4.
                                                                   0x03 = Tx Data after encryption.
                                                                   0x04 = Tx HDR at processing stage 0.
                                                                   0x05 = Tx HDR at processing stage 1.
                                                                   0x06 = Tx HDR at processing stage 2.
                                                                   0x07 = Tx HDR at processing stage 4.
                                                                   0x08 = Tx Calculated MAC.
                                                                   0x09 = Tx PCRC at processing stage 4.
                                                                   0x0a = Tx Data at output interface.
                                                                   0x0b = Rx Prefix at processing stage 2.
                                                                   0x0c = Rx Prefix at processing stage 4.
                                                                   0x0d = Rx Data after decryption.
                                                                   0x0e = Rx HDR at processing stage 4.
                                                                   0x0f = Rx PCRC at processing stage 4.
                                                                   0x10-0x1f = Reserved. */
        uint64_t dpath_prot_error_inj_count : 8;/**< [ 10:  3](R/W) W Error injection count. If value is n, n amount of errors
                                                                 injected:
                                                                     0 = Errors are inserted in every TLP until you clear
                                                                         ERROR_INJ_EN.
                                                                     1 = One errors injected.
                                                                     2 = Two errors injected. */
        uint64_t dpath_prot_error_inj_type : 2;/**< [  2:  1](R/W) Error injection type. Selects the type of error to inject
                                                                 according to the following codification:
                                                                    0x0 = none.
                                                                    0x1 = 1-bit.
                                                                    0x2 = 2-bit. */
        uint64_t dpath_prot_error_inj_en : 1;/**< [  0:  0](R/W) Error injection global enable. When set, enables the error
                                                                 insertion logic. */
#else /* Word 0 - Little Endian */
        uint64_t dpath_prot_error_inj_en : 1;/**< [  0:  0](R/W) Error injection global enable. When set, enables the error
                                                                 insertion logic. */
        uint64_t dpath_prot_error_inj_type : 2;/**< [  2:  1](R/W) Error injection type. Selects the type of error to inject
                                                                 according to the following codification:
                                                                    0x0 = none.
                                                                    0x1 = 1-bit.
                                                                    0x2 = 2-bit. */
        uint64_t dpath_prot_error_inj_count : 8;/**< [ 10:  3](R/W) W Error injection count. If value is n, n amount of errors
                                                                 injected:
                                                                     0 = Errors are inserted in every TLP until you clear
                                                                         ERROR_INJ_EN.
                                                                     1 = One errors injected.
                                                                     2 = Two errors injected. */
        uint64_t dpath_prot_error_inj_loc : 5;/**< [ 15: 11](R/W) Error injection location. Selects where error injection takes
                                                                 place, according to the following codification:
                                                                   0x00 = No region specified.
                                                                   0x01 = Tx Prefix at processing stage 2.
                                                                   0x02 = Tx Prefix at processing stage 4.
                                                                   0x03 = Tx Data after encryption.
                                                                   0x04 = Tx HDR at processing stage 0.
                                                                   0x05 = Tx HDR at processing stage 1.
                                                                   0x06 = Tx HDR at processing stage 2.
                                                                   0x07 = Tx HDR at processing stage 4.
                                                                   0x08 = Tx Calculated MAC.
                                                                   0x09 = Tx PCRC at processing stage 4.
                                                                   0x0a = Tx Data at output interface.
                                                                   0x0b = Rx Prefix at processing stage 2.
                                                                   0x0c = Rx Prefix at processing stage 4.
                                                                   0x0d = Rx Data after decryption.
                                                                   0x0e = Rx HDR at processing stage 4.
                                                                   0x0f = Rx PCRC at processing stage 4.
                                                                   0x10-0x1f = Reserved. */
        uint64_t reserved_16_63        : 48;
#endif /* Word 0 - End */
    } s;
    struct cavm_pemsecx_datapath_prot_error_inj_ctrl_cn
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_32_63        : 32;
        uint64_t reserved_16_31        : 16;
        uint64_t dpath_prot_error_inj_loc : 5;/**< [ 15: 11](R/W) Error injection location. Selects where error injection takes
                                                                 place, according to the following codification:
                                                                   0x00 = No region specified.
                                                                   0x01 = Tx Prefix at processing stage 2.
                                                                   0x02 = Tx Prefix at processing stage 4.
                                                                   0x03 = Tx Data after encryption.
                                                                   0x04 = Tx HDR at processing stage 0.
                                                                   0x05 = Tx HDR at processing stage 1.
                                                                   0x06 = Tx HDR at processing stage 2.
                                                                   0x07 = Tx HDR at processing stage 4.
                                                                   0x08 = Tx Calculated MAC.
                                                                   0x09 = Tx PCRC at processing stage 4.
                                                                   0x0a = Tx Data at output interface.
                                                                   0x0b = Rx Prefix at processing stage 2.
                                                                   0x0c = Rx Prefix at processing stage 4.
                                                                   0x0d = Rx Data after decryption.
                                                                   0x0e = Rx HDR at processing stage 4.
                                                                   0x0f = Rx PCRC at processing stage 4.
                                                                   0x10-0x1f = Reserved. */
        uint64_t dpath_prot_error_inj_count : 8;/**< [ 10:  3](R/W) W Error injection count. If value is n, n amount of errors
                                                                 injected:
                                                                     0 = Errors are inserted in every TLP until you clear
                                                                         ERROR_INJ_EN.
                                                                     1 = One errors injected.
                                                                     2 = Two errors injected. */
        uint64_t dpath_prot_error_inj_type : 2;/**< [  2:  1](R/W) Error injection type. Selects the type of error to inject
                                                                 according to the following codification:
                                                                    0x0 = none.
                                                                    0x1 = 1-bit.
                                                                    0x2 = 2-bit. */
        uint64_t dpath_prot_error_inj_en : 1;/**< [  0:  0](R/W) Error injection global enable. When set, enables the error
                                                                 insertion logic. */
#else /* Word 0 - Little Endian */
        uint64_t dpath_prot_error_inj_en : 1;/**< [  0:  0](R/W) Error injection global enable. When set, enables the error
                                                                 insertion logic. */
        uint64_t dpath_prot_error_inj_type : 2;/**< [  2:  1](R/W) Error injection type. Selects the type of error to inject
                                                                 according to the following codification:
                                                                    0x0 = none.
                                                                    0x1 = 1-bit.
                                                                    0x2 = 2-bit. */
        uint64_t dpath_prot_error_inj_count : 8;/**< [ 10:  3](R/W) W Error injection count. If value is n, n amount of errors
                                                                 injected:
                                                                     0 = Errors are inserted in every TLP until you clear
                                                                         ERROR_INJ_EN.
                                                                     1 = One errors injected.
                                                                     2 = Two errors injected. */
        uint64_t dpath_prot_error_inj_loc : 5;/**< [ 15: 11](R/W) Error injection location. Selects where error injection takes
                                                                 place, according to the following codification:
                                                                   0x00 = No region specified.
                                                                   0x01 = Tx Prefix at processing stage 2.
                                                                   0x02 = Tx Prefix at processing stage 4.
                                                                   0x03 = Tx Data after encryption.
                                                                   0x04 = Tx HDR at processing stage 0.
                                                                   0x05 = Tx HDR at processing stage 1.
                                                                   0x06 = Tx HDR at processing stage 2.
                                                                   0x07 = Tx HDR at processing stage 4.
                                                                   0x08 = Tx Calculated MAC.
                                                                   0x09 = Tx PCRC at processing stage 4.
                                                                   0x0a = Tx Data at output interface.
                                                                   0x0b = Rx Prefix at processing stage 2.
                                                                   0x0c = Rx Prefix at processing stage 4.
                                                                   0x0d = Rx Data after decryption.
                                                                   0x0e = Rx HDR at processing stage 4.
                                                                   0x0f = Rx PCRC at processing stage 4.
                                                                   0x10-0x1f = Reserved. */
        uint64_t reserved_16_31        : 16;
        uint64_t reserved_32_63        : 32;
#endif /* Word 0 - End */
    } cn;
};
typedef union cavm_pemsecx_datapath_prot_error_inj_ctrl cavm_pemsecx_datapath_prot_error_inj_ctrl_t;

static inline uint64_t CAVM_PEMSECX_DATAPATH_PROT_ERROR_INJ_CTRL(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_PEMSECX_DATAPATH_PROT_ERROR_INJ_CTRL(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CN20KA) && (a<=5))
        return 0xc2c000001650ll + 0x100000000ll * ((a) & 0x7);
    __cavm_csr_fatal("PEMSECX_DATAPATH_PROT_ERROR_INJ_CTRL", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_PEMSECX_DATAPATH_PROT_ERROR_INJ_CTRL(a) cavm_pemsecx_datapath_prot_error_inj_ctrl_t
#define bustype_CAVM_PEMSECX_DATAPATH_PROT_ERROR_INJ_CTRL(a) CSR_TYPE_ARF
#define basename_CAVM_PEMSECX_DATAPATH_PROT_ERROR_INJ_CTRL(a) "PEMSECX_DATAPATH_PROT_ERROR_INJ_CTRL"
#define device_bar_CAVM_PEMSECX_DATAPATH_PROT_ERROR_INJ_CTRL(a) 0x0 /* PF_BAR0 */
#define busnum_CAVM_PEMSECX_DATAPATH_PROT_ERROR_INJ_CTRL(a) (a)
#define arguments_CAVM_PEMSECX_DATAPATH_PROT_ERROR_INJ_CTRL(a) (a),-1,-1,-1

/**
 * Register (ARF) pemsec#_datapath_prot_irq_en
 *
 * Datapath ECC Interrupt Enable Register
 */
union cavm_pemsecx_datapath_prot_irq_en
{
    uint64_t u;
    struct cavm_pemsecx_datapath_prot_irq_en_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_9_63         : 55;
        uint64_t datapath_prot_rx_pcrc_irq_en : 1;/**< [  8:  8](R/W) IDE Rx MAC/PCRC Aux bus ECC interrupt enable. */
        uint64_t datapath_prot_rx_data_irq_en : 1;/**< [  7:  7](R/W) IDE Rx Data ECC interrupt enable. */
        uint64_t datapath_prot_rx_hdr_irq_en : 1;/**< [  6:  6](R/W) IDE Rx HDR ECC interrupt enable. */
        uint64_t datapath_prot_rx_prefix_irq_en : 1;/**< [  5:  5](R/W) IDE Rx Prefix ECC interrupt enable. */
        uint64_t datapath_prot_tx_pcrc_irq_en : 1;/**< [  4:  4](R/W) IDE Tx PCRC ECC interrupt enable. */
        uint64_t datapath_prot_tx_mac_irq_en : 1;/**< [  3:  3](R/W) IDE Tx MAC ECC interrupt enable. */
        uint64_t datapath_prot_tx_data_irq_en : 1;/**< [  2:  2](R/W) IDE Tx Data ECC interrupt enable */
        uint64_t datapath_prot_tx_hdr_irq_en : 1;/**< [  1:  1](R/W) IDE Tx HDR ECC interrupt enable. */
        uint64_t datapath_prot_tx_prefix_irq_en : 1;/**< [  0:  0](R/W) IDE Tx Prefix ECC interrupt enable. */
#else /* Word 0 - Little Endian */
        uint64_t datapath_prot_tx_prefix_irq_en : 1;/**< [  0:  0](R/W) IDE Tx Prefix ECC interrupt enable. */
        uint64_t datapath_prot_tx_hdr_irq_en : 1;/**< [  1:  1](R/W) IDE Tx HDR ECC interrupt enable. */
        uint64_t datapath_prot_tx_data_irq_en : 1;/**< [  2:  2](R/W) IDE Tx Data ECC interrupt enable */
        uint64_t datapath_prot_tx_mac_irq_en : 1;/**< [  3:  3](R/W) IDE Tx MAC ECC interrupt enable. */
        uint64_t datapath_prot_tx_pcrc_irq_en : 1;/**< [  4:  4](R/W) IDE Tx PCRC ECC interrupt enable. */
        uint64_t datapath_prot_rx_prefix_irq_en : 1;/**< [  5:  5](R/W) IDE Rx Prefix ECC interrupt enable. */
        uint64_t datapath_prot_rx_hdr_irq_en : 1;/**< [  6:  6](R/W) IDE Rx HDR ECC interrupt enable. */
        uint64_t datapath_prot_rx_data_irq_en : 1;/**< [  7:  7](R/W) IDE Rx Data ECC interrupt enable. */
        uint64_t datapath_prot_rx_pcrc_irq_en : 1;/**< [  8:  8](R/W) IDE Rx MAC/PCRC Aux bus ECC interrupt enable. */
        uint64_t reserved_9_63         : 55;
#endif /* Word 0 - End */
    } s;
    struct cavm_pemsecx_datapath_prot_irq_en_cn
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_32_63        : 32;
        uint64_t reserved_13_31        : 19;
        uint64_t reserved_9_12         : 4;
        uint64_t datapath_prot_rx_pcrc_irq_en : 1;/**< [  8:  8](R/W) IDE Rx MAC/PCRC Aux bus ECC interrupt enable. */
        uint64_t datapath_prot_rx_data_irq_en : 1;/**< [  7:  7](R/W) IDE Rx Data ECC interrupt enable. */
        uint64_t datapath_prot_rx_hdr_irq_en : 1;/**< [  6:  6](R/W) IDE Rx HDR ECC interrupt enable. */
        uint64_t datapath_prot_rx_prefix_irq_en : 1;/**< [  5:  5](R/W) IDE Rx Prefix ECC interrupt enable. */
        uint64_t datapath_prot_tx_pcrc_irq_en : 1;/**< [  4:  4](R/W) IDE Tx PCRC ECC interrupt enable. */
        uint64_t datapath_prot_tx_mac_irq_en : 1;/**< [  3:  3](R/W) IDE Tx MAC ECC interrupt enable. */
        uint64_t datapath_prot_tx_data_irq_en : 1;/**< [  2:  2](R/W) IDE Tx Data ECC interrupt enable */
        uint64_t datapath_prot_tx_hdr_irq_en : 1;/**< [  1:  1](R/W) IDE Tx HDR ECC interrupt enable. */
        uint64_t datapath_prot_tx_prefix_irq_en : 1;/**< [  0:  0](R/W) IDE Tx Prefix ECC interrupt enable. */
#else /* Word 0 - Little Endian */
        uint64_t datapath_prot_tx_prefix_irq_en : 1;/**< [  0:  0](R/W) IDE Tx Prefix ECC interrupt enable. */
        uint64_t datapath_prot_tx_hdr_irq_en : 1;/**< [  1:  1](R/W) IDE Tx HDR ECC interrupt enable. */
        uint64_t datapath_prot_tx_data_irq_en : 1;/**< [  2:  2](R/W) IDE Tx Data ECC interrupt enable */
        uint64_t datapath_prot_tx_mac_irq_en : 1;/**< [  3:  3](R/W) IDE Tx MAC ECC interrupt enable. */
        uint64_t datapath_prot_tx_pcrc_irq_en : 1;/**< [  4:  4](R/W) IDE Tx PCRC ECC interrupt enable. */
        uint64_t datapath_prot_rx_prefix_irq_en : 1;/**< [  5:  5](R/W) IDE Rx Prefix ECC interrupt enable. */
        uint64_t datapath_prot_rx_hdr_irq_en : 1;/**< [  6:  6](R/W) IDE Rx HDR ECC interrupt enable. */
        uint64_t datapath_prot_rx_data_irq_en : 1;/**< [  7:  7](R/W) IDE Rx Data ECC interrupt enable. */
        uint64_t datapath_prot_rx_pcrc_irq_en : 1;/**< [  8:  8](R/W) IDE Rx MAC/PCRC Aux bus ECC interrupt enable. */
        uint64_t reserved_9_12         : 4;
        uint64_t reserved_13_31        : 19;
        uint64_t reserved_32_63        : 32;
#endif /* Word 0 - End */
    } cn;
};
typedef union cavm_pemsecx_datapath_prot_irq_en cavm_pemsecx_datapath_prot_irq_en_t;

static inline uint64_t CAVM_PEMSECX_DATAPATH_PROT_IRQ_EN(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_PEMSECX_DATAPATH_PROT_IRQ_EN(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CN20KA) && (a<=5))
        return 0xc2c000001640ll + 0x100000000ll * ((a) & 0x7);
    __cavm_csr_fatal("PEMSECX_DATAPATH_PROT_IRQ_EN", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_PEMSECX_DATAPATH_PROT_IRQ_EN(a) cavm_pemsecx_datapath_prot_irq_en_t
#define bustype_CAVM_PEMSECX_DATAPATH_PROT_IRQ_EN(a) CSR_TYPE_ARF
#define basename_CAVM_PEMSECX_DATAPATH_PROT_IRQ_EN(a) "PEMSECX_DATAPATH_PROT_IRQ_EN"
#define device_bar_CAVM_PEMSECX_DATAPATH_PROT_IRQ_EN(a) 0x0 /* PF_BAR0 */
#define busnum_CAVM_PEMSECX_DATAPATH_PROT_IRQ_EN(a) (a)
#define arguments_CAVM_PEMSECX_DATAPATH_PROT_IRQ_EN(a) (a),-1,-1,-1

/**
 * Register (ARF) pemsec#_datapath_prot_irq_stat
 *
 * Datapath ECC Interrupt Status Register
 */
union cavm_pemsecx_datapath_prot_irq_stat
{
    uint64_t u;
    struct cavm_pemsecx_datapath_prot_irq_stat_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_18_63        : 46;
        uint64_t dpth_prot_rx_pcrc_irq_status : 2;/**< [ 17: 16](R/W1C/H) IDE Rx MAC/PCRC Aux bus ECC interrupt status.
                                                                 0x0 = No error.
                                                                 0x1 = Correctable error.
                                                                 0x2 = Uncorrectable error. */
        uint64_t dpath_prot_rx_data_irq_status : 2;/**< [ 15: 14](R/W1C/H) IDE Rx Data ECC interrupt status.
                                                                 0x0 = No error.
                                                                 0x1 = Correctable error.
                                                                 0x2 = Uncorrectable error. */
        uint64_t dpath_prot_rx_hdr_irq_status : 2;/**< [ 13: 12](R/W1C/H) IDE Rx HDR ECC interrupt status.
                                                                 0x0 = No error.
                                                                 0x1 = Correctable error.
                                                                 0x2 = Uncorrectable error. */
        uint64_t dpth_prot_rx_prefix_irq_status : 2;/**< [ 11: 10](R/W1C/H) IDE Rx Prefix ECC interrupt status.
                                                                 0x0 = No error.
                                                                 0x1 = Correctable error.
                                                                 0x2 = Uncorrectable error. */
        uint64_t dpth_prot_tx_pcrc_irq_status : 2;/**< [  9:  8](R/W1C/H) IDE Tx PCRC ECC interrupt status.
                                                                 0x0 = No error.
                                                                 0x1 = Correctable error.
                                                                 0x2 = Uncorrectable error. */
        uint64_t dpath_prot_tx_mac_irq_status : 2;/**< [  7:  6](R/W1C/H) IDE Tx MAC ECC interrupt status.
                                                                 0x0 = No error.
                                                                 0x1 = Correctable error.
                                                                 0x2 = Uncorrectable error. */
        uint64_t dpath_prot_tx_data_irq_status : 2;/**< [  5:  4](R/W1C/H) IDE Tx Data ECC interrupt status.
                                                                 0x0 = No error.
                                                                 0x1 = Correctable error.
                                                                 0x2 = Uncorrectable error. */
        uint64_t dpath_prot_tx_hdr_irq_status : 2;/**< [  3:  2](R/W1C/H) IDE Tx HDR ECC interrupt status.
                                                                 0x0 = No error.
                                                                 0x1 = Correctable error.
                                                                 0x2 = Uncorrectable error. */
        uint64_t dpth_prot_tx_prefix_irq_status : 2;/**< [  1:  0](R/W1C/H) IDE Tx Prefix ECC interrupt status.
                                                                 0x0 = No error.
                                                                 0x1 = Correctable error.
                                                                 0x2 = Uncorrectable error. */
#else /* Word 0 - Little Endian */
        uint64_t dpth_prot_tx_prefix_irq_status : 2;/**< [  1:  0](R/W1C/H) IDE Tx Prefix ECC interrupt status.
                                                                 0x0 = No error.
                                                                 0x1 = Correctable error.
                                                                 0x2 = Uncorrectable error. */
        uint64_t dpath_prot_tx_hdr_irq_status : 2;/**< [  3:  2](R/W1C/H) IDE Tx HDR ECC interrupt status.
                                                                 0x0 = No error.
                                                                 0x1 = Correctable error.
                                                                 0x2 = Uncorrectable error. */
        uint64_t dpath_prot_tx_data_irq_status : 2;/**< [  5:  4](R/W1C/H) IDE Tx Data ECC interrupt status.
                                                                 0x0 = No error.
                                                                 0x1 = Correctable error.
                                                                 0x2 = Uncorrectable error. */
        uint64_t dpath_prot_tx_mac_irq_status : 2;/**< [  7:  6](R/W1C/H) IDE Tx MAC ECC interrupt status.
                                                                 0x0 = No error.
                                                                 0x1 = Correctable error.
                                                                 0x2 = Uncorrectable error. */
        uint64_t dpth_prot_tx_pcrc_irq_status : 2;/**< [  9:  8](R/W1C/H) IDE Tx PCRC ECC interrupt status.
                                                                 0x0 = No error.
                                                                 0x1 = Correctable error.
                                                                 0x2 = Uncorrectable error. */
        uint64_t dpth_prot_rx_prefix_irq_status : 2;/**< [ 11: 10](R/W1C/H) IDE Rx Prefix ECC interrupt status.
                                                                 0x0 = No error.
                                                                 0x1 = Correctable error.
                                                                 0x2 = Uncorrectable error. */
        uint64_t dpath_prot_rx_hdr_irq_status : 2;/**< [ 13: 12](R/W1C/H) IDE Rx HDR ECC interrupt status.
                                                                 0x0 = No error.
                                                                 0x1 = Correctable error.
                                                                 0x2 = Uncorrectable error. */
        uint64_t dpath_prot_rx_data_irq_status : 2;/**< [ 15: 14](R/W1C/H) IDE Rx Data ECC interrupt status.
                                                                 0x0 = No error.
                                                                 0x1 = Correctable error.
                                                                 0x2 = Uncorrectable error. */
        uint64_t dpth_prot_rx_pcrc_irq_status : 2;/**< [ 17: 16](R/W1C/H) IDE Rx MAC/PCRC Aux bus ECC interrupt status.
                                                                 0x0 = No error.
                                                                 0x1 = Correctable error.
                                                                 0x2 = Uncorrectable error. */
        uint64_t reserved_18_63        : 46;
#endif /* Word 0 - End */
    } s;
    struct cavm_pemsecx_datapath_prot_irq_stat_cn
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_32_63        : 32;
        uint64_t reserved_26_31        : 6;
        uint64_t reserved_18_25        : 8;
        uint64_t dpth_prot_rx_pcrc_irq_status : 2;/**< [ 17: 16](R/W1C/H) IDE Rx MAC/PCRC Aux bus ECC interrupt status.
                                                                 0x0 = No error.
                                                                 0x1 = Correctable error.
                                                                 0x2 = Uncorrectable error. */
        uint64_t dpath_prot_rx_data_irq_status : 2;/**< [ 15: 14](R/W1C/H) IDE Rx Data ECC interrupt status.
                                                                 0x0 = No error.
                                                                 0x1 = Correctable error.
                                                                 0x2 = Uncorrectable error. */
        uint64_t dpath_prot_rx_hdr_irq_status : 2;/**< [ 13: 12](R/W1C/H) IDE Rx HDR ECC interrupt status.
                                                                 0x0 = No error.
                                                                 0x1 = Correctable error.
                                                                 0x2 = Uncorrectable error. */
        uint64_t dpth_prot_rx_prefix_irq_status : 2;/**< [ 11: 10](R/W1C/H) IDE Rx Prefix ECC interrupt status.
                                                                 0x0 = No error.
                                                                 0x1 = Correctable error.
                                                                 0x2 = Uncorrectable error. */
        uint64_t dpth_prot_tx_pcrc_irq_status : 2;/**< [  9:  8](R/W1C/H) IDE Tx PCRC ECC interrupt status.
                                                                 0x0 = No error.
                                                                 0x1 = Correctable error.
                                                                 0x2 = Uncorrectable error. */
        uint64_t dpath_prot_tx_mac_irq_status : 2;/**< [  7:  6](R/W1C/H) IDE Tx MAC ECC interrupt status.
                                                                 0x0 = No error.
                                                                 0x1 = Correctable error.
                                                                 0x2 = Uncorrectable error. */
        uint64_t dpath_prot_tx_data_irq_status : 2;/**< [  5:  4](R/W1C/H) IDE Tx Data ECC interrupt status.
                                                                 0x0 = No error.
                                                                 0x1 = Correctable error.
                                                                 0x2 = Uncorrectable error. */
        uint64_t dpath_prot_tx_hdr_irq_status : 2;/**< [  3:  2](R/W1C/H) IDE Tx HDR ECC interrupt status.
                                                                 0x0 = No error.
                                                                 0x1 = Correctable error.
                                                                 0x2 = Uncorrectable error. */
        uint64_t dpth_prot_tx_prefix_irq_status : 2;/**< [  1:  0](R/W1C/H) IDE Tx Prefix ECC interrupt status.
                                                                 0x0 = No error.
                                                                 0x1 = Correctable error.
                                                                 0x2 = Uncorrectable error. */
#else /* Word 0 - Little Endian */
        uint64_t dpth_prot_tx_prefix_irq_status : 2;/**< [  1:  0](R/W1C/H) IDE Tx Prefix ECC interrupt status.
                                                                 0x0 = No error.
                                                                 0x1 = Correctable error.
                                                                 0x2 = Uncorrectable error. */
        uint64_t dpath_prot_tx_hdr_irq_status : 2;/**< [  3:  2](R/W1C/H) IDE Tx HDR ECC interrupt status.
                                                                 0x0 = No error.
                                                                 0x1 = Correctable error.
                                                                 0x2 = Uncorrectable error. */
        uint64_t dpath_prot_tx_data_irq_status : 2;/**< [  5:  4](R/W1C/H) IDE Tx Data ECC interrupt status.
                                                                 0x0 = No error.
                                                                 0x1 = Correctable error.
                                                                 0x2 = Uncorrectable error. */
        uint64_t dpath_prot_tx_mac_irq_status : 2;/**< [  7:  6](R/W1C/H) IDE Tx MAC ECC interrupt status.
                                                                 0x0 = No error.
                                                                 0x1 = Correctable error.
                                                                 0x2 = Uncorrectable error. */
        uint64_t dpth_prot_tx_pcrc_irq_status : 2;/**< [  9:  8](R/W1C/H) IDE Tx PCRC ECC interrupt status.
                                                                 0x0 = No error.
                                                                 0x1 = Correctable error.
                                                                 0x2 = Uncorrectable error. */
        uint64_t dpth_prot_rx_prefix_irq_status : 2;/**< [ 11: 10](R/W1C/H) IDE Rx Prefix ECC interrupt status.
                                                                 0x0 = No error.
                                                                 0x1 = Correctable error.
                                                                 0x2 = Uncorrectable error. */
        uint64_t dpath_prot_rx_hdr_irq_status : 2;/**< [ 13: 12](R/W1C/H) IDE Rx HDR ECC interrupt status.
                                                                 0x0 = No error.
                                                                 0x1 = Correctable error.
                                                                 0x2 = Uncorrectable error. */
        uint64_t dpath_prot_rx_data_irq_status : 2;/**< [ 15: 14](R/W1C/H) IDE Rx Data ECC interrupt status.
                                                                 0x0 = No error.
                                                                 0x1 = Correctable error.
                                                                 0x2 = Uncorrectable error. */
        uint64_t dpth_prot_rx_pcrc_irq_status : 2;/**< [ 17: 16](R/W1C/H) IDE Rx MAC/PCRC Aux bus ECC interrupt status.
                                                                 0x0 = No error.
                                                                 0x1 = Correctable error.
                                                                 0x2 = Uncorrectable error. */
        uint64_t reserved_18_25        : 8;
        uint64_t reserved_26_31        : 6;
        uint64_t reserved_32_63        : 32;
#endif /* Word 0 - End */
    } cn;
};
typedef union cavm_pemsecx_datapath_prot_irq_stat cavm_pemsecx_datapath_prot_irq_stat_t;

static inline uint64_t CAVM_PEMSECX_DATAPATH_PROT_IRQ_STAT(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_PEMSECX_DATAPATH_PROT_IRQ_STAT(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CN20KA) && (a<=5))
        return 0xc2c000001648ll + 0x100000000ll * ((a) & 0x7);
    __cavm_csr_fatal("PEMSECX_DATAPATH_PROT_IRQ_STAT", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_PEMSECX_DATAPATH_PROT_IRQ_STAT(a) cavm_pemsecx_datapath_prot_irq_stat_t
#define bustype_CAVM_PEMSECX_DATAPATH_PROT_IRQ_STAT(a) CSR_TYPE_ARF
#define basename_CAVM_PEMSECX_DATAPATH_PROT_IRQ_STAT(a) "PEMSECX_DATAPATH_PROT_IRQ_STAT"
#define device_bar_CAVM_PEMSECX_DATAPATH_PROT_IRQ_STAT(a) 0x0 /* PF_BAR0 */
#define busnum_CAVM_PEMSECX_DATAPATH_PROT_IRQ_STAT(a) (a)
#define arguments_CAVM_PEMSECX_DATAPATH_PROT_IRQ_STAT(a) (a),-1,-1,-1

/**
 * Register (ARF) pemsec#_ide_counter_overflow
 *
 * IDE Counter Overflow Register
 */
union cavm_pemsecx_ide_counter_overflow
{
    uint64_t u;
    struct cavm_pemsecx_ide_counter_overflow_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_1_63         : 63;
        uint64_t overflow_status       : 1;  /**< [  0:  0](R/W1C/H) IDE Counter Overflow Indication. Refer to IDE ECN Rev A
                                                                 Section 6.99.5.  If either PR_Sent_Counter-NPR or
                                                                 PR_Sent_Counter-CPL overflow the [OVERFLOW_STATUS] is set
                                                                 to one. */
#else /* Word 0 - Little Endian */
        uint64_t overflow_status       : 1;  /**< [  0:  0](R/W1C/H) IDE Counter Overflow Indication. Refer to IDE ECN Rev A
                                                                 Section 6.99.5.  If either PR_Sent_Counter-NPR or
                                                                 PR_Sent_Counter-CPL overflow the [OVERFLOW_STATUS] is set
                                                                 to one. */
        uint64_t reserved_1_63         : 63;
#endif /* Word 0 - End */
    } s;
    struct cavm_pemsecx_ide_counter_overflow_cn
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_32_63        : 32;
        uint64_t reserved_1_31         : 31;
        uint64_t overflow_status       : 1;  /**< [  0:  0](R/W1C/H) IDE Counter Overflow Indication. Refer to IDE ECN Rev A
                                                                 Section 6.99.5.  If either PR_Sent_Counter-NPR or
                                                                 PR_Sent_Counter-CPL overflow the [OVERFLOW_STATUS] is set
                                                                 to one. */
#else /* Word 0 - Little Endian */
        uint64_t overflow_status       : 1;  /**< [  0:  0](R/W1C/H) IDE Counter Overflow Indication. Refer to IDE ECN Rev A
                                                                 Section 6.99.5.  If either PR_Sent_Counter-NPR or
                                                                 PR_Sent_Counter-CPL overflow the [OVERFLOW_STATUS] is set
                                                                 to one. */
        uint64_t reserved_1_31         : 31;
        uint64_t reserved_32_63        : 32;
#endif /* Word 0 - End */
    } cn;
};
typedef union cavm_pemsecx_ide_counter_overflow cavm_pemsecx_ide_counter_overflow_t;

static inline uint64_t CAVM_PEMSECX_IDE_COUNTER_OVERFLOW(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_PEMSECX_IDE_COUNTER_OVERFLOW(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CN20KA) && (a<=5))
        return 0xc2c0000015a8ll + 0x100000000ll * ((a) & 0x7);
    __cavm_csr_fatal("PEMSECX_IDE_COUNTER_OVERFLOW", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_PEMSECX_IDE_COUNTER_OVERFLOW(a) cavm_pemsecx_ide_counter_overflow_t
#define bustype_CAVM_PEMSECX_IDE_COUNTER_OVERFLOW(a) CSR_TYPE_ARF
#define basename_CAVM_PEMSECX_IDE_COUNTER_OVERFLOW(a) "PEMSECX_IDE_COUNTER_OVERFLOW"
#define device_bar_CAVM_PEMSECX_IDE_COUNTER_OVERFLOW(a) 0x0 /* PF_BAR0 */
#define busnum_CAVM_PEMSECX_IDE_COUNTER_OVERFLOW(a) (a)
#define arguments_CAVM_PEMSECX_IDE_COUNTER_OVERFLOW(a) (a),-1,-1,-1

/**
 * Register (ARF) pemsec#_ide_glbl_cfg
 *
 * IDE Global Configuration Register
 */
union cavm_pemsecx_ide_glbl_cfg
{
    uint64_t u;
    struct cavm_pemsecx_ide_glbl_cfg_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_10_63        : 54;
        uint64_t datapath_prot_corr_en : 1;  /**< [  9:  9](R/W) Enable correction of datapath protection correctable errors. */
        uint64_t datapath_prot_en      : 1;  /**< [  8:  8](R/W) Enable all datapath protection checks. */
        uint64_t ide_tbit_if_src_sel   : 1;  /**< [  7:  7](R/W) Reserved. */
        uint64_t tbit_src_sel          : 1;  /**< [  6:  6](R/W) T bit source selector.
                                                                 Software must set TBIT_SRC_SEL to one for normal PCIe IDE Operation.

                                                                    0 = Reserved.  For test use only.
                                                                        T bit associated through StreamID register association.
                                                                    1 = T bit copied from the received NPR.

                                                                 Per the PCI Express specification the T bit from the ingress
                                                                 Non-Posted Request will be copied to the T bit field in the
                                                                 IDE prefix for the associated NPR egress Completion. */
        uint64_t reserved_3_5          : 3;
        uint64_t rx_bypass_en          : 1;  /**< [  2:  2](R/W) Active High Enable Bypass Mode in the RX path. */
        uint64_t reserved_1            : 1;
        uint64_t tx_bypass_en          : 1;  /**< [  0:  0](R/W) Active High Enable Bypass Mode in the TX path. */
#else /* Word 0 - Little Endian */
        uint64_t tx_bypass_en          : 1;  /**< [  0:  0](R/W) Active High Enable Bypass Mode in the TX path. */
        uint64_t reserved_1            : 1;
        uint64_t rx_bypass_en          : 1;  /**< [  2:  2](R/W) Active High Enable Bypass Mode in the RX path. */
        uint64_t reserved_3_5          : 3;
        uint64_t tbit_src_sel          : 1;  /**< [  6:  6](R/W) T bit source selector.
                                                                 Software must set TBIT_SRC_SEL to one for normal PCIe IDE Operation.

                                                                    0 = Reserved.  For test use only.
                                                                        T bit associated through StreamID register association.
                                                                    1 = T bit copied from the received NPR.

                                                                 Per the PCI Express specification the T bit from the ingress
                                                                 Non-Posted Request will be copied to the T bit field in the
                                                                 IDE prefix for the associated NPR egress Completion. */
        uint64_t ide_tbit_if_src_sel   : 1;  /**< [  7:  7](R/W) Reserved. */
        uint64_t datapath_prot_en      : 1;  /**< [  8:  8](R/W) Enable all datapath protection checks. */
        uint64_t datapath_prot_corr_en : 1;  /**< [  9:  9](R/W) Enable correction of datapath protection correctable errors. */
        uint64_t reserved_10_63        : 54;
#endif /* Word 0 - End */
    } s;
    struct cavm_pemsecx_ide_glbl_cfg_cn
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_32_63        : 32;
        uint64_t reserved_10_31        : 22;
        uint64_t datapath_prot_corr_en : 1;  /**< [  9:  9](R/W) Enable correction of datapath protection correctable errors. */
        uint64_t datapath_prot_en      : 1;  /**< [  8:  8](R/W) Enable all datapath protection checks. */
        uint64_t ide_tbit_if_src_sel   : 1;  /**< [  7:  7](R/W) Reserved. */
        uint64_t tbit_src_sel          : 1;  /**< [  6:  6](R/W) T bit source selector.
                                                                 Software must set TBIT_SRC_SEL to one for normal PCIe IDE Operation.

                                                                    0 = Reserved.  For test use only.
                                                                        T bit associated through StreamID register association.
                                                                    1 = T bit copied from the received NPR.

                                                                 Per the PCI Express specification the T bit from the ingress
                                                                 Non-Posted Request will be copied to the T bit field in the
                                                                 IDE prefix for the associated NPR egress Completion. */
        uint64_t reserved_5            : 1;
        uint64_t reserved_4            : 1;
        uint64_t reserved_3            : 1;
        uint64_t rx_bypass_en          : 1;  /**< [  2:  2](R/W) Active High Enable Bypass Mode in the RX path. */
        uint64_t reserved_1            : 1;
        uint64_t tx_bypass_en          : 1;  /**< [  0:  0](R/W) Active High Enable Bypass Mode in the TX path. */
#else /* Word 0 - Little Endian */
        uint64_t tx_bypass_en          : 1;  /**< [  0:  0](R/W) Active High Enable Bypass Mode in the TX path. */
        uint64_t reserved_1            : 1;
        uint64_t rx_bypass_en          : 1;  /**< [  2:  2](R/W) Active High Enable Bypass Mode in the RX path. */
        uint64_t reserved_3            : 1;
        uint64_t reserved_4            : 1;
        uint64_t reserved_5            : 1;
        uint64_t tbit_src_sel          : 1;  /**< [  6:  6](R/W) T bit source selector.
                                                                 Software must set TBIT_SRC_SEL to one for normal PCIe IDE Operation.

                                                                    0 = Reserved.  For test use only.
                                                                        T bit associated through StreamID register association.
                                                                    1 = T bit copied from the received NPR.

                                                                 Per the PCI Express specification the T bit from the ingress
                                                                 Non-Posted Request will be copied to the T bit field in the
                                                                 IDE prefix for the associated NPR egress Completion. */
        uint64_t ide_tbit_if_src_sel   : 1;  /**< [  7:  7](R/W) Reserved. */
        uint64_t datapath_prot_en      : 1;  /**< [  8:  8](R/W) Enable all datapath protection checks. */
        uint64_t datapath_prot_corr_en : 1;  /**< [  9:  9](R/W) Enable correction of datapath protection correctable errors. */
        uint64_t reserved_10_31        : 22;
        uint64_t reserved_32_63        : 32;
#endif /* Word 0 - End */
    } cn;
};
typedef union cavm_pemsecx_ide_glbl_cfg cavm_pemsecx_ide_glbl_cfg_t;

static inline uint64_t CAVM_PEMSECX_IDE_GLBL_CFG(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_PEMSECX_IDE_GLBL_CFG(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CN20KA) && (a<=5))
        return 0xc2c000001010ll + 0x100000000ll * ((a) & 0x7);
    __cavm_csr_fatal("PEMSECX_IDE_GLBL_CFG", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_PEMSECX_IDE_GLBL_CFG(a) cavm_pemsecx_ide_glbl_cfg_t
#define bustype_CAVM_PEMSECX_IDE_GLBL_CFG(a) CSR_TYPE_ARF
#define basename_CAVM_PEMSECX_IDE_GLBL_CFG(a) "PEMSECX_IDE_GLBL_CFG"
#define device_bar_CAVM_PEMSECX_IDE_GLBL_CFG(a) 0x0 /* PF_BAR0 */
#define busnum_CAVM_PEMSECX_IDE_GLBL_CFG(a) (a)
#define arguments_CAVM_PEMSECX_IDE_GLBL_CFG(a) (a),-1,-1,-1

/**
 * Register (ARF) pemsec#_ide_int
 *
 * PEMSEC IDE Interrupt Summary Register
 * This register contains the interrupt summary bits for the IDE Host Configuration
 * and the AES TX and RX blocks.
 *
 * This register is not accessible through ROM scripts; see SCR_WRITE32_S[ADDR].
 *
 * This register is reset on core domain reset.
 */
union cavm_pemsecx_ide_int
{
    uint64_t u;
    struct cavm_pemsecx_ide_int_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_4_63         : 60;
        uint64_t dwr_acc_int           : 1;  /**< [  3:  3](R/W1C/H) Reserved. */
        uint64_t aes_rx_int            : 1;  /**< [  2:  2](R/W1C/H) Indicates that a IDE AES RX interrupt was signaled.
                                                                 Read the PEMSEC()_RX_IRQ_STAT register to determine the interrupt
                                                                 source. Refer to the PEMSEC()_RX_IRQ_EN register for interrupt
                                                                 programming. */
        uint64_t aes_tx_int            : 1;  /**< [  1:  1](R/W1C/H) Indicates that a IDE AEX TX interrupt was signaled.
                                                                 Read the PEMSEC()_TX_IRQ_STAT register to determine the interrupt
                                                                 source. Refer to the PEMSEC()_TX_IRQ_EN register for interrupt
                                                                 programming. */
        uint64_t ide_glb_int           : 1;  /**< [  0:  0](R/W1C/H) Indicates that a IDE Host Configuration Global interrupt was signaled.
                                                                 Read the PEMSEC()_IDE_IO_IRQ_STATUS register to determine the interrupt
                                                                 source. Refer to the PEMSEC()_IDE_IRQ_EN and
                                                                 PEMSEC()_KEY_SECURITY_IRQ_EN registers for interrupt programming. */
#else /* Word 0 - Little Endian */
        uint64_t ide_glb_int           : 1;  /**< [  0:  0](R/W1C/H) Indicates that a IDE Host Configuration Global interrupt was signaled.
                                                                 Read the PEMSEC()_IDE_IO_IRQ_STATUS register to determine the interrupt
                                                                 source. Refer to the PEMSEC()_IDE_IRQ_EN and
                                                                 PEMSEC()_KEY_SECURITY_IRQ_EN registers for interrupt programming. */
        uint64_t aes_tx_int            : 1;  /**< [  1:  1](R/W1C/H) Indicates that a IDE AEX TX interrupt was signaled.
                                                                 Read the PEMSEC()_TX_IRQ_STAT register to determine the interrupt
                                                                 source. Refer to the PEMSEC()_TX_IRQ_EN register for interrupt
                                                                 programming. */
        uint64_t aes_rx_int            : 1;  /**< [  2:  2](R/W1C/H) Indicates that a IDE AES RX interrupt was signaled.
                                                                 Read the PEMSEC()_RX_IRQ_STAT register to determine the interrupt
                                                                 source. Refer to the PEMSEC()_RX_IRQ_EN register for interrupt
                                                                 programming. */
        uint64_t dwr_acc_int           : 1;  /**< [  3:  3](R/W1C/H) Reserved. */
        uint64_t reserved_4_63         : 60;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_pemsecx_ide_int_s cn; */
};
typedef union cavm_pemsecx_ide_int cavm_pemsecx_ide_int_t;

static inline uint64_t CAVM_PEMSECX_IDE_INT(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_PEMSECX_IDE_INT(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CN20KA) && (a<=5))
        return 0xc2c000006000ll + 0x100000000ll * ((a) & 0x7);
    __cavm_csr_fatal("PEMSECX_IDE_INT", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_PEMSECX_IDE_INT(a) cavm_pemsecx_ide_int_t
#define bustype_CAVM_PEMSECX_IDE_INT(a) CSR_TYPE_ARF
#define basename_CAVM_PEMSECX_IDE_INT(a) "PEMSECX_IDE_INT"
#define device_bar_CAVM_PEMSECX_IDE_INT(a) 0x0 /* PF_BAR0 */
#define busnum_CAVM_PEMSECX_IDE_INT(a) (a)
#define arguments_CAVM_PEMSECX_IDE_INT(a) (a),-1,-1,-1

/**
 * Register (ARF) pemsec#_ide_int_ena_w1c
 *
 * PEMSEC IDE Interrupt Enable Clear Register
 * This register clears interrupt enable bits.
 */
union cavm_pemsecx_ide_int_ena_w1c
{
    uint64_t u;
    struct cavm_pemsecx_ide_int_ena_w1c_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_4_63         : 60;
        uint64_t dwr_acc_int           : 1;  /**< [  3:  3](R/W1C/H) Reserved. */
        uint64_t aes_rx_int            : 1;  /**< [  2:  2](R/W1C/H) Reads or clears enable for PEMSEC(0..5)_IDE_INT[AES_RX_INT]. */
        uint64_t aes_tx_int            : 1;  /**< [  1:  1](R/W1C/H) Reads or clears enable for PEMSEC(0..5)_IDE_INT[AES_TX_INT]. */
        uint64_t ide_glb_int           : 1;  /**< [  0:  0](R/W1C/H) Reads or clears enable for PEMSEC(0..5)_IDE_INT[IDE_GLB_INT]. */
#else /* Word 0 - Little Endian */
        uint64_t ide_glb_int           : 1;  /**< [  0:  0](R/W1C/H) Reads or clears enable for PEMSEC(0..5)_IDE_INT[IDE_GLB_INT]. */
        uint64_t aes_tx_int            : 1;  /**< [  1:  1](R/W1C/H) Reads or clears enable for PEMSEC(0..5)_IDE_INT[AES_TX_INT]. */
        uint64_t aes_rx_int            : 1;  /**< [  2:  2](R/W1C/H) Reads or clears enable for PEMSEC(0..5)_IDE_INT[AES_RX_INT]. */
        uint64_t dwr_acc_int           : 1;  /**< [  3:  3](R/W1C/H) Reserved. */
        uint64_t reserved_4_63         : 60;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_pemsecx_ide_int_ena_w1c_s cn; */
};
typedef union cavm_pemsecx_ide_int_ena_w1c cavm_pemsecx_ide_int_ena_w1c_t;

static inline uint64_t CAVM_PEMSECX_IDE_INT_ENA_W1C(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_PEMSECX_IDE_INT_ENA_W1C(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CN20KA) && (a<=5))
        return 0xc2c000006010ll + 0x100000000ll * ((a) & 0x7);
    __cavm_csr_fatal("PEMSECX_IDE_INT_ENA_W1C", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_PEMSECX_IDE_INT_ENA_W1C(a) cavm_pemsecx_ide_int_ena_w1c_t
#define bustype_CAVM_PEMSECX_IDE_INT_ENA_W1C(a) CSR_TYPE_ARF
#define basename_CAVM_PEMSECX_IDE_INT_ENA_W1C(a) "PEMSECX_IDE_INT_ENA_W1C"
#define device_bar_CAVM_PEMSECX_IDE_INT_ENA_W1C(a) 0x0 /* PF_BAR0 */
#define busnum_CAVM_PEMSECX_IDE_INT_ENA_W1C(a) (a)
#define arguments_CAVM_PEMSECX_IDE_INT_ENA_W1C(a) (a),-1,-1,-1

/**
 * Register (ARF) pemsec#_ide_int_ena_w1s
 *
 * PEMSEC IDE Interrupt Enable Set Register
 * This register sets interrupt enable bits.
 */
union cavm_pemsecx_ide_int_ena_w1s
{
    uint64_t u;
    struct cavm_pemsecx_ide_int_ena_w1s_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_4_63         : 60;
        uint64_t dwr_acc_int           : 1;  /**< [  3:  3](R/W1S/H) Reserved. */
        uint64_t aes_rx_int            : 1;  /**< [  2:  2](R/W1S/H) Reads or sets enable for PEMSEC(0..5)_IDE_INT[AES_RX_INT]. */
        uint64_t aes_tx_int            : 1;  /**< [  1:  1](R/W1S/H) Reads or sets enable for PEMSEC(0..5)_IDE_INT[AES_TX_INT]. */
        uint64_t ide_glb_int           : 1;  /**< [  0:  0](R/W1S/H) Reads or sets enable for PEMSEC(0..5)_IDE_INT[IDE_GLB_INT]. */
#else /* Word 0 - Little Endian */
        uint64_t ide_glb_int           : 1;  /**< [  0:  0](R/W1S/H) Reads or sets enable for PEMSEC(0..5)_IDE_INT[IDE_GLB_INT]. */
        uint64_t aes_tx_int            : 1;  /**< [  1:  1](R/W1S/H) Reads or sets enable for PEMSEC(0..5)_IDE_INT[AES_TX_INT]. */
        uint64_t aes_rx_int            : 1;  /**< [  2:  2](R/W1S/H) Reads or sets enable for PEMSEC(0..5)_IDE_INT[AES_RX_INT]. */
        uint64_t dwr_acc_int           : 1;  /**< [  3:  3](R/W1S/H) Reserved. */
        uint64_t reserved_4_63         : 60;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_pemsecx_ide_int_ena_w1s_s cn; */
};
typedef union cavm_pemsecx_ide_int_ena_w1s cavm_pemsecx_ide_int_ena_w1s_t;

static inline uint64_t CAVM_PEMSECX_IDE_INT_ENA_W1S(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_PEMSECX_IDE_INT_ENA_W1S(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CN20KA) && (a<=5))
        return 0xc2c000006018ll + 0x100000000ll * ((a) & 0x7);
    __cavm_csr_fatal("PEMSECX_IDE_INT_ENA_W1S", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_PEMSECX_IDE_INT_ENA_W1S(a) cavm_pemsecx_ide_int_ena_w1s_t
#define bustype_CAVM_PEMSECX_IDE_INT_ENA_W1S(a) CSR_TYPE_ARF
#define basename_CAVM_PEMSECX_IDE_INT_ENA_W1S(a) "PEMSECX_IDE_INT_ENA_W1S"
#define device_bar_CAVM_PEMSECX_IDE_INT_ENA_W1S(a) 0x0 /* PF_BAR0 */
#define busnum_CAVM_PEMSECX_IDE_INT_ENA_W1S(a) (a)
#define arguments_CAVM_PEMSECX_IDE_INT_ENA_W1S(a) (a),-1,-1,-1

/**
 * Register (ARF) pemsec#_ide_int_w1s
 *
 * PEMSEC IDE Interrupt Set Register
 * This register sets interrupt bits.
 */
union cavm_pemsecx_ide_int_w1s
{
    uint64_t u;
    struct cavm_pemsecx_ide_int_w1s_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_4_63         : 60;
        uint64_t dwr_acc_int           : 1;  /**< [  3:  3](R/W1S/H) Reserved. */
        uint64_t aes_rx_int            : 1;  /**< [  2:  2](R/W1S/H) Reads or sets PEMSEC(0..5)_IDE_INT[AES_RX_INT]. */
        uint64_t aes_tx_int            : 1;  /**< [  1:  1](R/W1S/H) Reads or sets PEMSEC(0..5)_IDE_INT[AES_TX_INT]. */
        uint64_t ide_glb_int           : 1;  /**< [  0:  0](R/W1S/H) Reads or sets PEMSEC(0..5)_IDE_INT[IDE_GLB_INT]. */
#else /* Word 0 - Little Endian */
        uint64_t ide_glb_int           : 1;  /**< [  0:  0](R/W1S/H) Reads or sets PEMSEC(0..5)_IDE_INT[IDE_GLB_INT]. */
        uint64_t aes_tx_int            : 1;  /**< [  1:  1](R/W1S/H) Reads or sets PEMSEC(0..5)_IDE_INT[AES_TX_INT]. */
        uint64_t aes_rx_int            : 1;  /**< [  2:  2](R/W1S/H) Reads or sets PEMSEC(0..5)_IDE_INT[AES_RX_INT]. */
        uint64_t dwr_acc_int           : 1;  /**< [  3:  3](R/W1S/H) Reserved. */
        uint64_t reserved_4_63         : 60;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_pemsecx_ide_int_w1s_s cn; */
};
typedef union cavm_pemsecx_ide_int_w1s cavm_pemsecx_ide_int_w1s_t;

static inline uint64_t CAVM_PEMSECX_IDE_INT_W1S(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_PEMSECX_IDE_INT_W1S(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CN20KA) && (a<=5))
        return 0xc2c000006008ll + 0x100000000ll * ((a) & 0x7);
    __cavm_csr_fatal("PEMSECX_IDE_INT_W1S", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_PEMSECX_IDE_INT_W1S(a) cavm_pemsecx_ide_int_w1s_t
#define bustype_CAVM_PEMSECX_IDE_INT_W1S(a) CSR_TYPE_ARF
#define basename_CAVM_PEMSECX_IDE_INT_W1S(a) "PEMSECX_IDE_INT_W1S"
#define device_bar_CAVM_PEMSECX_IDE_INT_W1S(a) 0x0 /* PF_BAR0 */
#define busnum_CAVM_PEMSECX_IDE_INT_W1S(a) (a)
#define arguments_CAVM_PEMSECX_IDE_INT_W1S(a) (a),-1,-1,-1

/**
 * Register (ARF) pemsec#_ide_io_irq_status
 *
 * IDE Interrupt Status Register
 */
union cavm_pemsecx_ide_io_irq_status
{
    uint64_t u;
    struct cavm_pemsecx_ide_io_irq_status_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_12_63        : 52;
        uint64_t rx_rekey_req_irq_glbl : 1;  /**< [ 11: 11](R/W1C/H) RX Rekey Request IRQ global. This bit is set to 1, and the
                                                                 global interrupt PEMSEC_IDE_INT[IDE_GLB_INT] will be set to 1,
                                                                 if enabled, whenever the TLP counter from a stream hits its
                                                                 threshold. */
        uint64_t tx_rekey_req_irq_glbl : 1;  /**< [ 10: 10](R/W1C/H) TX Rekey Request IRQ global. This bit is set to 1, and the
                                                                 global interrupt PEMSEC_IDE_INT[IDE_GLB_INT] will be set to 1,
                                                                 if enabled, whenever the TLP counter from a stream hits its
                                                                 threshold. */
        uint64_t reserved_9            : 1;
        uint64_t rx_kbit_toggled_irq_glbl : 1;/**< [  8:  8](R/W1C/H) RX Kbit toggled IRQ global. This bit is set to 1, and the
                                                                 global interrupt PEMSEC_IDE_INT[IDE_GLB_INT] will be set to 1,
                                                                 if enabled, whenever a Kbit toggles in any RX path.
                                                                 PEMSEC_RX_LNK_KBIT_TOGGLED specifies the stream where a Kbit
                                                                 toggle has occurred. */
        uint64_t tx_kbit_toggled_irq_glbl : 1;/**< [  7:  7](R/W1C/H) RX Kbit toggled IRQ global. This bit is set to 1, and the
                                                                 global interrupt PEMSEC_IDE_INT[IDE_GLB_INT] will be set to 1,
                                                                 if enabled, whenever a Kbit toggles in any TX path.
                                                                 PEMSEC_TX_LNK_KBIT_TOGGLED specifies the stream where a Kbit
                                                                 toggle has occurred. */
        uint64_t reserved_6            : 1;
        uint64_t rx_pcrc_err_irq_glbl  : 1;  /**< [  5:  5](R/W1C/H) RX PCRC Error Status bit. This bit is set to 1, and the
                                                                 global interrupt PEMSEC_IDE_INT[IDE_GLB_INT] will be set to 1,
                                                                 if enabled, whenever a PCRC error is detected on the associated
                                                                 RX path. */
        uint64_t reserved_3_4          : 2;
        uint64_t rx_check_failed_irq_glbl : 1;/**< [  2:  2](R/W1C/H) RX Check Failed IRQ global. This bit is set to 1, and the
                                                                 global interrupt PEMSEC_IDE_INT[IDE_GLB_INT] will be set to 1,
                                                                 if enabled, whenever a IDE check failed error is detected in
                                                                 the RX data path. */
        uint64_t reserved_1            : 1;
        uint64_t rx_misrouted_irq_glbl : 1;  /**< [  0:  0](R/W1C/H) RX Misrouted IRQ global. This bit is set to 1, and the global
                                                                 interrupt PEMSEC_IDE_INT[IDE_GLB_INT] will be set to 1,
                                                                 if enabled, whenever a misrouted TLP error is detected in the
                                                                 RX data path. */
#else /* Word 0 - Little Endian */
        uint64_t rx_misrouted_irq_glbl : 1;  /**< [  0:  0](R/W1C/H) RX Misrouted IRQ global. This bit is set to 1, and the global
                                                                 interrupt PEMSEC_IDE_INT[IDE_GLB_INT] will be set to 1,
                                                                 if enabled, whenever a misrouted TLP error is detected in the
                                                                 RX data path. */
        uint64_t reserved_1            : 1;
        uint64_t rx_check_failed_irq_glbl : 1;/**< [  2:  2](R/W1C/H) RX Check Failed IRQ global. This bit is set to 1, and the
                                                                 global interrupt PEMSEC_IDE_INT[IDE_GLB_INT] will be set to 1,
                                                                 if enabled, whenever a IDE check failed error is detected in
                                                                 the RX data path. */
        uint64_t reserved_3_4          : 2;
        uint64_t rx_pcrc_err_irq_glbl  : 1;  /**< [  5:  5](R/W1C/H) RX PCRC Error Status bit. This bit is set to 1, and the
                                                                 global interrupt PEMSEC_IDE_INT[IDE_GLB_INT] will be set to 1,
                                                                 if enabled, whenever a PCRC error is detected on the associated
                                                                 RX path. */
        uint64_t reserved_6            : 1;
        uint64_t tx_kbit_toggled_irq_glbl : 1;/**< [  7:  7](R/W1C/H) RX Kbit toggled IRQ global. This bit is set to 1, and the
                                                                 global interrupt PEMSEC_IDE_INT[IDE_GLB_INT] will be set to 1,
                                                                 if enabled, whenever a Kbit toggles in any TX path.
                                                                 PEMSEC_TX_LNK_KBIT_TOGGLED specifies the stream where a Kbit
                                                                 toggle has occurred. */
        uint64_t rx_kbit_toggled_irq_glbl : 1;/**< [  8:  8](R/W1C/H) RX Kbit toggled IRQ global. This bit is set to 1, and the
                                                                 global interrupt PEMSEC_IDE_INT[IDE_GLB_INT] will be set to 1,
                                                                 if enabled, whenever a Kbit toggles in any RX path.
                                                                 PEMSEC_RX_LNK_KBIT_TOGGLED specifies the stream where a Kbit
                                                                 toggle has occurred. */
        uint64_t reserved_9            : 1;
        uint64_t tx_rekey_req_irq_glbl : 1;  /**< [ 10: 10](R/W1C/H) TX Rekey Request IRQ global. This bit is set to 1, and the
                                                                 global interrupt PEMSEC_IDE_INT[IDE_GLB_INT] will be set to 1,
                                                                 if enabled, whenever the TLP counter from a stream hits its
                                                                 threshold. */
        uint64_t rx_rekey_req_irq_glbl : 1;  /**< [ 11: 11](R/W1C/H) RX Rekey Request IRQ global. This bit is set to 1, and the
                                                                 global interrupt PEMSEC_IDE_INT[IDE_GLB_INT] will be set to 1,
                                                                 if enabled, whenever the TLP counter from a stream hits its
                                                                 threshold. */
        uint64_t reserved_12_63        : 52;
#endif /* Word 0 - End */
    } s;
    struct cavm_pemsecx_ide_io_irq_status_cn
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_32_63        : 32;
        uint64_t reserved_12_31        : 20;
        uint64_t rx_rekey_req_irq_glbl : 1;  /**< [ 11: 11](R/W1C/H) RX Rekey Request IRQ global. This bit is set to 1, and the
                                                                 global interrupt PEMSEC_IDE_INT[IDE_GLB_INT] will be set to 1,
                                                                 if enabled, whenever the TLP counter from a stream hits its
                                                                 threshold. */
        uint64_t tx_rekey_req_irq_glbl : 1;  /**< [ 10: 10](R/W1C/H) TX Rekey Request IRQ global. This bit is set to 1, and the
                                                                 global interrupt PEMSEC_IDE_INT[IDE_GLB_INT] will be set to 1,
                                                                 if enabled, whenever the TLP counter from a stream hits its
                                                                 threshold. */
        uint64_t reserved_9            : 1;
        uint64_t rx_kbit_toggled_irq_glbl : 1;/**< [  8:  8](R/W1C/H) RX Kbit toggled IRQ global. This bit is set to 1, and the
                                                                 global interrupt PEMSEC_IDE_INT[IDE_GLB_INT] will be set to 1,
                                                                 if enabled, whenever a Kbit toggles in any RX path.
                                                                 PEMSEC_RX_LNK_KBIT_TOGGLED specifies the stream where a Kbit
                                                                 toggle has occurred. */
        uint64_t tx_kbit_toggled_irq_glbl : 1;/**< [  7:  7](R/W1C/H) RX Kbit toggled IRQ global. This bit is set to 1, and the
                                                                 global interrupt PEMSEC_IDE_INT[IDE_GLB_INT] will be set to 1,
                                                                 if enabled, whenever a Kbit toggles in any TX path.
                                                                 PEMSEC_TX_LNK_KBIT_TOGGLED specifies the stream where a Kbit
                                                                 toggle has occurred. */
        uint64_t reserved_6            : 1;
        uint64_t rx_pcrc_err_irq_glbl  : 1;  /**< [  5:  5](R/W1C/H) RX PCRC Error Status bit. This bit is set to 1, and the
                                                                 global interrupt PEMSEC_IDE_INT[IDE_GLB_INT] will be set to 1,
                                                                 if enabled, whenever a PCRC error is detected on the associated
                                                                 RX path. */
        uint64_t reserved_3_4          : 2;
        uint64_t rx_check_failed_irq_glbl : 1;/**< [  2:  2](R/W1C/H) RX Check Failed IRQ global. This bit is set to 1, and the
                                                                 global interrupt PEMSEC_IDE_INT[IDE_GLB_INT] will be set to 1,
                                                                 if enabled, whenever a IDE check failed error is detected in
                                                                 the RX data path. */
        uint64_t reserved_1            : 1;
        uint64_t rx_misrouted_irq_glbl : 1;  /**< [  0:  0](R/W1C/H) RX Misrouted IRQ global. This bit is set to 1, and the global
                                                                 interrupt PEMSEC_IDE_INT[IDE_GLB_INT] will be set to 1,
                                                                 if enabled, whenever a misrouted TLP error is detected in the
                                                                 RX data path. */
#else /* Word 0 - Little Endian */
        uint64_t rx_misrouted_irq_glbl : 1;  /**< [  0:  0](R/W1C/H) RX Misrouted IRQ global. This bit is set to 1, and the global
                                                                 interrupt PEMSEC_IDE_INT[IDE_GLB_INT] will be set to 1,
                                                                 if enabled, whenever a misrouted TLP error is detected in the
                                                                 RX data path. */
        uint64_t reserved_1            : 1;
        uint64_t rx_check_failed_irq_glbl : 1;/**< [  2:  2](R/W1C/H) RX Check Failed IRQ global. This bit is set to 1, and the
                                                                 global interrupt PEMSEC_IDE_INT[IDE_GLB_INT] will be set to 1,
                                                                 if enabled, whenever a IDE check failed error is detected in
                                                                 the RX data path. */
        uint64_t reserved_3_4          : 2;
        uint64_t rx_pcrc_err_irq_glbl  : 1;  /**< [  5:  5](R/W1C/H) RX PCRC Error Status bit. This bit is set to 1, and the
                                                                 global interrupt PEMSEC_IDE_INT[IDE_GLB_INT] will be set to 1,
                                                                 if enabled, whenever a PCRC error is detected on the associated
                                                                 RX path. */
        uint64_t reserved_6            : 1;
        uint64_t tx_kbit_toggled_irq_glbl : 1;/**< [  7:  7](R/W1C/H) RX Kbit toggled IRQ global. This bit is set to 1, and the
                                                                 global interrupt PEMSEC_IDE_INT[IDE_GLB_INT] will be set to 1,
                                                                 if enabled, whenever a Kbit toggles in any TX path.
                                                                 PEMSEC_TX_LNK_KBIT_TOGGLED specifies the stream where a Kbit
                                                                 toggle has occurred. */
        uint64_t rx_kbit_toggled_irq_glbl : 1;/**< [  8:  8](R/W1C/H) RX Kbit toggled IRQ global. This bit is set to 1, and the
                                                                 global interrupt PEMSEC_IDE_INT[IDE_GLB_INT] will be set to 1,
                                                                 if enabled, whenever a Kbit toggles in any RX path.
                                                                 PEMSEC_RX_LNK_KBIT_TOGGLED specifies the stream where a Kbit
                                                                 toggle has occurred. */
        uint64_t reserved_9            : 1;
        uint64_t tx_rekey_req_irq_glbl : 1;  /**< [ 10: 10](R/W1C/H) TX Rekey Request IRQ global. This bit is set to 1, and the
                                                                 global interrupt PEMSEC_IDE_INT[IDE_GLB_INT] will be set to 1,
                                                                 if enabled, whenever the TLP counter from a stream hits its
                                                                 threshold. */
        uint64_t rx_rekey_req_irq_glbl : 1;  /**< [ 11: 11](R/W1C/H) RX Rekey Request IRQ global. This bit is set to 1, and the
                                                                 global interrupt PEMSEC_IDE_INT[IDE_GLB_INT] will be set to 1,
                                                                 if enabled, whenever the TLP counter from a stream hits its
                                                                 threshold. */
        uint64_t reserved_12_31        : 20;
        uint64_t reserved_32_63        : 32;
#endif /* Word 0 - End */
    } cn;
};
typedef union cavm_pemsecx_ide_io_irq_status cavm_pemsecx_ide_io_irq_status_t;

static inline uint64_t CAVM_PEMSECX_IDE_IO_IRQ_STATUS(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_PEMSECX_IDE_IO_IRQ_STATUS(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CN20KA) && (a<=5))
        return 0xc2c0000015c8ll + 0x100000000ll * ((a) & 0x7);
    __cavm_csr_fatal("PEMSECX_IDE_IO_IRQ_STATUS", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_PEMSECX_IDE_IO_IRQ_STATUS(a) cavm_pemsecx_ide_io_irq_status_t
#define bustype_CAVM_PEMSECX_IDE_IO_IRQ_STATUS(a) CSR_TYPE_ARF
#define basename_CAVM_PEMSECX_IDE_IO_IRQ_STATUS(a) "PEMSECX_IDE_IO_IRQ_STATUS"
#define device_bar_CAVM_PEMSECX_IDE_IO_IRQ_STATUS(a) 0x0 /* PF_BAR0 */
#define busnum_CAVM_PEMSECX_IDE_IO_IRQ_STATUS(a) (a)
#define arguments_CAVM_PEMSECX_IDE_IO_IRQ_STATUS(a) (a),-1,-1,-1

/**
 * Register (ARF) pemsec#_ide_irq_en
 *
 * IDE Interrupt Enable Register
 */
union cavm_pemsecx_ide_irq_en
{
    uint64_t u;
    struct cavm_pemsecx_ide_irq_en_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_32_63        : 32;
        uint64_t irq_en_glbl           : 1;  /**< [ 31: 31](R/W) Enables Global interrupt. */
        uint64_t reserved_12_30        : 19;
        uint64_t datapath_prot_irq_en_glbl : 1;/**< [ 11: 11](R/W) Enables datapath protection irq global. */
        uint64_t rx_rekey_req_irq_en_glbl : 1;/**< [ 10: 10](R/W) Enables RX Rekey Request IRQ global, indicating when a
                                                                 TLP counter from a stream hits its threshold, in the RX data
                                                                 path. */
        uint64_t tx_rekey_req_irq_en_glbl : 1;/**< [  9:  9](R/W) Enables TX Rekey Request IRQ global, indicating when a
                                                                 TLP counter from a stream hits its threshold, in the TX data
                                                                 path. */
        uint64_t rx_kbit_toggled_irq_en_glbl : 1;/**< [  8:  8](R/W) Enables RX Kbit toggled IRQ global.
                                                                 When this bit is set to 1 the PEMSEC_IDE_INT[IDE_GLB_INT] interrupt will
                                                                 be asserted global, if enabled, whenever a Kbit toggles in any RX path.
                                                                 , indicating when a Kbit
                                                                 toggles in RX data path. */
        uint64_t tx_kbit_toggled_irq_en_glbl : 1;/**< [  7:  7](R/W) Enables TX Kbit toggled IRQ global, indicating when a Kbit
                                                                 toggles in TX data path. */
        uint64_t rx_pcrc_err_irq_en_glbl : 1;/**< [  6:  6](R/W) Enables RX PCRC Error IRQ global, indicating detected
                                                                 PCRC errors in the any RX data path. */
        uint64_t reserved_5            : 1;
        uint64_t rx_check_failed_irq_en_glbl : 1;/**< [  4:  4](R/W) Enables RX Check Failed IRQ global, indicating IDE check
                                                                 failed errors in the data path. */
        uint64_t rx_misrouted_irq_en_glbl : 1;/**< [  3:  3](R/W) Enables RX Misrouted IRQ global, indicating misrouted TLP
                                                                 errors in the data path. */
        uint64_t ide_cnt_ovf_irq_en_glb : 1; /**< [  2:  2](R/W) Enables IDE Counter Overflow IRQ global.
                                                                 A global interrupt is signaled when
                                                                 PEMSEC_IDE_COUNTER_OVERFLOW[OVERFLOW_STATUS] is set to 1. */
        uint64_t key_security_irq_en_glb : 1;/**< [  1:  1](R/W) Enables Security Status IRQ global, when a key swap is
                                                                 requested without a new key installed.
                                                                 It is also required to select which streams are used in
                                                                 the interrupt. This is done by setting the correspondent bit in
                                                                 the KEY_SECURITY_IRQ register. */
        uint64_t reserved_0            : 1;
#else /* Word 0 - Little Endian */
        uint64_t reserved_0            : 1;
        uint64_t key_security_irq_en_glb : 1;/**< [  1:  1](R/W) Enables Security Status IRQ global, when a key swap is
                                                                 requested without a new key installed.
                                                                 It is also required to select which streams are used in
                                                                 the interrupt. This is done by setting the correspondent bit in
                                                                 the KEY_SECURITY_IRQ register. */
        uint64_t ide_cnt_ovf_irq_en_glb : 1; /**< [  2:  2](R/W) Enables IDE Counter Overflow IRQ global.
                                                                 A global interrupt is signaled when
                                                                 PEMSEC_IDE_COUNTER_OVERFLOW[OVERFLOW_STATUS] is set to 1. */
        uint64_t rx_misrouted_irq_en_glbl : 1;/**< [  3:  3](R/W) Enables RX Misrouted IRQ global, indicating misrouted TLP
                                                                 errors in the data path. */
        uint64_t rx_check_failed_irq_en_glbl : 1;/**< [  4:  4](R/W) Enables RX Check Failed IRQ global, indicating IDE check
                                                                 failed errors in the data path. */
        uint64_t reserved_5            : 1;
        uint64_t rx_pcrc_err_irq_en_glbl : 1;/**< [  6:  6](R/W) Enables RX PCRC Error IRQ global, indicating detected
                                                                 PCRC errors in the any RX data path. */
        uint64_t tx_kbit_toggled_irq_en_glbl : 1;/**< [  7:  7](R/W) Enables TX Kbit toggled IRQ global, indicating when a Kbit
                                                                 toggles in TX data path. */
        uint64_t rx_kbit_toggled_irq_en_glbl : 1;/**< [  8:  8](R/W) Enables RX Kbit toggled IRQ global.
                                                                 When this bit is set to 1 the PEMSEC_IDE_INT[IDE_GLB_INT] interrupt will
                                                                 be asserted global, if enabled, whenever a Kbit toggles in any RX path.
                                                                 , indicating when a Kbit
                                                                 toggles in RX data path. */
        uint64_t tx_rekey_req_irq_en_glbl : 1;/**< [  9:  9](R/W) Enables TX Rekey Request IRQ global, indicating when a
                                                                 TLP counter from a stream hits its threshold, in the TX data
                                                                 path. */
        uint64_t rx_rekey_req_irq_en_glbl : 1;/**< [ 10: 10](R/W) Enables RX Rekey Request IRQ global, indicating when a
                                                                 TLP counter from a stream hits its threshold, in the RX data
                                                                 path. */
        uint64_t datapath_prot_irq_en_glbl : 1;/**< [ 11: 11](R/W) Enables datapath protection irq global. */
        uint64_t reserved_12_30        : 19;
        uint64_t irq_en_glbl           : 1;  /**< [ 31: 31](R/W) Enables Global interrupt. */
        uint64_t reserved_32_63        : 32;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_pemsecx_ide_irq_en_s cn; */
};
typedef union cavm_pemsecx_ide_irq_en cavm_pemsecx_ide_irq_en_t;

static inline uint64_t CAVM_PEMSECX_IDE_IRQ_EN(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_PEMSECX_IDE_IRQ_EN(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CN20KA) && (a<=5))
        return 0xc2c0000015b0ll + 0x100000000ll * ((a) & 0x7);
    __cavm_csr_fatal("PEMSECX_IDE_IRQ_EN", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_PEMSECX_IDE_IRQ_EN(a) cavm_pemsecx_ide_irq_en_t
#define bustype_CAVM_PEMSECX_IDE_IRQ_EN(a) CSR_TYPE_ARF
#define basename_CAVM_PEMSECX_IDE_IRQ_EN(a) "PEMSECX_IDE_IRQ_EN"
#define device_bar_CAVM_PEMSECX_IDE_IRQ_EN(a) 0x0 /* PF_BAR0 */
#define busnum_CAVM_PEMSECX_IDE_IRQ_EN(a) (a)
#define arguments_CAVM_PEMSECX_IDE_IRQ_EN(a) (a),-1,-1,-1

/**
 * Register (ARF) pemsec#_ide_sync_msg_cfg
 *
 * IDE Sync Message Configuration Register
 */
union cavm_pemsecx_ide_sync_msg_cfg
{
    uint64_t u;
    struct cavm_pemsecx_ide_sync_msg_cfg_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_9_63         : 55;
        uint64_t sync_msg_req_threshold : 9; /**< [  8:  0](R/W) Number of TLP threshold to request Sync Message to be
                                                                 sent. Applicable to all streams. */
#else /* Word 0 - Little Endian */
        uint64_t sync_msg_req_threshold : 9; /**< [  8:  0](R/W) Number of TLP threshold to request Sync Message to be
                                                                 sent. Applicable to all streams. */
        uint64_t reserved_9_63         : 55;
#endif /* Word 0 - End */
    } s;
    struct cavm_pemsecx_ide_sync_msg_cfg_cn
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_32_63        : 32;
        uint64_t reserved_9_31         : 23;
        uint64_t sync_msg_req_threshold : 9; /**< [  8:  0](R/W) Number of TLP threshold to request Sync Message to be
                                                                 sent. Applicable to all streams. */
#else /* Word 0 - Little Endian */
        uint64_t sync_msg_req_threshold : 9; /**< [  8:  0](R/W) Number of TLP threshold to request Sync Message to be
                                                                 sent. Applicable to all streams. */
        uint64_t reserved_9_31         : 23;
        uint64_t reserved_32_63        : 32;
#endif /* Word 0 - End */
    } cn;
};
typedef union cavm_pemsecx_ide_sync_msg_cfg cavm_pemsecx_ide_sync_msg_cfg_t;

static inline uint64_t CAVM_PEMSECX_IDE_SYNC_MSG_CFG(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_PEMSECX_IDE_SYNC_MSG_CFG(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CN20KA) && (a<=5))
        return 0xc2c000001018ll + 0x100000000ll * ((a) & 0x7);
    __cavm_csr_fatal("PEMSECX_IDE_SYNC_MSG_CFG", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_PEMSECX_IDE_SYNC_MSG_CFG(a) cavm_pemsecx_ide_sync_msg_cfg_t
#define bustype_CAVM_PEMSECX_IDE_SYNC_MSG_CFG(a) CSR_TYPE_ARF
#define basename_CAVM_PEMSECX_IDE_SYNC_MSG_CFG(a) "PEMSECX_IDE_SYNC_MSG_CFG"
#define device_bar_CAVM_PEMSECX_IDE_SYNC_MSG_CFG(a) 0x0 /* PF_BAR0 */
#define busnum_CAVM_PEMSECX_IDE_SYNC_MSG_CFG(a) (a)
#define arguments_CAVM_PEMSECX_IDE_SYNC_MSG_CFG(a) (a),-1,-1,-1

/**
 * Register (ARF) pemsec#_key_security_irq_en
 *
 * Key Security Interrupt Enable Register
 */
union cavm_pemsecx_key_security_irq_en
{
    uint64_t u;
    struct cavm_pemsecx_key_security_irq_en_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_1_63         : 63;
        uint64_t key_security_s0_irq_en : 1; /**< [  0:  0](R/W) This bit enables Security Status IRQ global when a key swap
                                                                 is requested in Stream 0 without a new key installed.
                                                                 It is required to set the
                                                                 KEY_SECURITY_IRQ_EN_GLB bit from IDE_IRQ_EN to
                                                                 enable this behavior. */
#else /* Word 0 - Little Endian */
        uint64_t key_security_s0_irq_en : 1; /**< [  0:  0](R/W) This bit enables Security Status IRQ global when a key swap
                                                                 is requested in Stream 0 without a new key installed.
                                                                 It is required to set the
                                                                 KEY_SECURITY_IRQ_EN_GLB bit from IDE_IRQ_EN to
                                                                 enable this behavior. */
        uint64_t reserved_1_63         : 63;
#endif /* Word 0 - End */
    } s;
    struct cavm_pemsecx_key_security_irq_en_cn
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_32_63        : 32;
        uint64_t reserved_16_31        : 16;
        uint64_t reserved_2_15         : 14;
        uint64_t reserved_1            : 1;
        uint64_t key_security_s0_irq_en : 1; /**< [  0:  0](R/W) This bit enables Security Status IRQ global when a key swap
                                                                 is requested in Stream 0 without a new key installed.
                                                                 It is required to set the
                                                                 KEY_SECURITY_IRQ_EN_GLB bit from IDE_IRQ_EN to
                                                                 enable this behavior. */
#else /* Word 0 - Little Endian */
        uint64_t key_security_s0_irq_en : 1; /**< [  0:  0](R/W) This bit enables Security Status IRQ global when a key swap
                                                                 is requested in Stream 0 without a new key installed.
                                                                 It is required to set the
                                                                 KEY_SECURITY_IRQ_EN_GLB bit from IDE_IRQ_EN to
                                                                 enable this behavior. */
        uint64_t reserved_1            : 1;
        uint64_t reserved_2_15         : 14;
        uint64_t reserved_16_31        : 16;
        uint64_t reserved_32_63        : 32;
#endif /* Word 0 - End */
    } cn;
};
typedef union cavm_pemsecx_key_security_irq_en cavm_pemsecx_key_security_irq_en_t;

static inline uint64_t CAVM_PEMSECX_KEY_SECURITY_IRQ_EN(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_PEMSECX_KEY_SECURITY_IRQ_EN(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CN20KA) && (a<=5))
        return 0xc2c0000015c0ll + 0x100000000ll * ((a) & 0x7);
    __cavm_csr_fatal("PEMSECX_KEY_SECURITY_IRQ_EN", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_PEMSECX_KEY_SECURITY_IRQ_EN(a) cavm_pemsecx_key_security_irq_en_t
#define bustype_CAVM_PEMSECX_KEY_SECURITY_IRQ_EN(a) CSR_TYPE_ARF
#define basename_CAVM_PEMSECX_KEY_SECURITY_IRQ_EN(a) "PEMSECX_KEY_SECURITY_IRQ_EN"
#define device_bar_CAVM_PEMSECX_KEY_SECURITY_IRQ_EN(a) 0x0 /* PF_BAR0 */
#define busnum_CAVM_PEMSECX_KEY_SECURITY_IRQ_EN(a) (a)
#define arguments_CAVM_PEMSECX_KEY_SECURITY_IRQ_EN(a) (a),-1,-1,-1

/**
 * Register (ARF) pemsec#_key_security_status_s0
 *
 * Key Security Status Stream 0 Register
 */
union cavm_pemsecx_key_security_status_s0
{
    uint64_t u;
    struct cavm_pemsecx_key_security_status_s0_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_6_63         : 58;
        uint64_t rx_key_swap_stat_s0_cpl : 1;/**< [  5:  5](R/W1C/H) 0 = No key swap request without new key installed in
                                                                 Completion substream from RX Stream 0.
                                                                 1 = Key swap request without new key installed in Completion
                                                                 substream from RX Stream 0. */
        uint64_t rx_key_swap_stat_s0_npr : 1;/**< [  4:  4](R/W1C/H) 0 = No key swap request without new key installed in Non-
                                                                 Posted Request substream from RX Stream 0.
                                                                 1 = Key swap request without new key installed in Non-
                                                                 Posted Request substream from RX Stream 0. */
        uint64_t rx_key_swap_stat_s0_pr : 1; /**< [  3:  3](R/W1C/H) 0 = No key swap request without new key installed in Posted
                                                                 Request substream from RX Stream 0.
                                                                 1 = Key swap request without new key installed in Posted
                                                                 Request substream from RX Stream 0. */
        uint64_t tx_key_swap_stat_s0_cpl : 1;/**< [  2:  2](R/W1C/H) 0 = No key swap request without new key installed in
                                                                 Completion substream from TX Stream 0.
                                                                 1 = Key swap request without new key installed in Completion
                                                                 substream from TX Stream 0. */
        uint64_t tx_key_swap_stat_s0_npr : 1;/**< [  1:  1](R/W1C/H) 0 = No key swap request without new key installed in Non-
                                                                 Posted Request substream from TX Stream 0.
                                                                 1 = Key swap request without new key installed in Non-
                                                                 Posted Request substream from TX Stream 0. */
        uint64_t tx_key_swap_stat_s0_pr : 1; /**< [  0:  0](R/W1C/H) 0 = No key swap request without new key installed in Posted
                                                                 Request substream from TX Stream 0.
                                                                 1 = Key swap request without new key installed in Posted
                                                                 Request substream from TX Stream 0. */
#else /* Word 0 - Little Endian */
        uint64_t tx_key_swap_stat_s0_pr : 1; /**< [  0:  0](R/W1C/H) 0 = No key swap request without new key installed in Posted
                                                                 Request substream from TX Stream 0.
                                                                 1 = Key swap request without new key installed in Posted
                                                                 Request substream from TX Stream 0. */
        uint64_t tx_key_swap_stat_s0_npr : 1;/**< [  1:  1](R/W1C/H) 0 = No key swap request without new key installed in Non-
                                                                 Posted Request substream from TX Stream 0.
                                                                 1 = Key swap request without new key installed in Non-
                                                                 Posted Request substream from TX Stream 0. */
        uint64_t tx_key_swap_stat_s0_cpl : 1;/**< [  2:  2](R/W1C/H) 0 = No key swap request without new key installed in
                                                                 Completion substream from TX Stream 0.
                                                                 1 = Key swap request without new key installed in Completion
                                                                 substream from TX Stream 0. */
        uint64_t rx_key_swap_stat_s0_pr : 1; /**< [  3:  3](R/W1C/H) 0 = No key swap request without new key installed in Posted
                                                                 Request substream from RX Stream 0.
                                                                 1 = Key swap request without new key installed in Posted
                                                                 Request substream from RX Stream 0. */
        uint64_t rx_key_swap_stat_s0_npr : 1;/**< [  4:  4](R/W1C/H) 0 = No key swap request without new key installed in Non-
                                                                 Posted Request substream from RX Stream 0.
                                                                 1 = Key swap request without new key installed in Non-
                                                                 Posted Request substream from RX Stream 0. */
        uint64_t rx_key_swap_stat_s0_cpl : 1;/**< [  5:  5](R/W1C/H) 0 = No key swap request without new key installed in
                                                                 Completion substream from RX Stream 0.
                                                                 1 = Key swap request without new key installed in Completion
                                                                 substream from RX Stream 0. */
        uint64_t reserved_6_63         : 58;
#endif /* Word 0 - End */
    } s;
    struct cavm_pemsecx_key_security_status_s0_cn
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_32_63        : 32;
        uint64_t reserved_6_31         : 26;
        uint64_t rx_key_swap_stat_s0_cpl : 1;/**< [  5:  5](R/W1C/H) 0 = No key swap request without new key installed in
                                                                 Completion substream from RX Stream 0.
                                                                 1 = Key swap request without new key installed in Completion
                                                                 substream from RX Stream 0. */
        uint64_t rx_key_swap_stat_s0_npr : 1;/**< [  4:  4](R/W1C/H) 0 = No key swap request without new key installed in Non-
                                                                 Posted Request substream from RX Stream 0.
                                                                 1 = Key swap request without new key installed in Non-
                                                                 Posted Request substream from RX Stream 0. */
        uint64_t rx_key_swap_stat_s0_pr : 1; /**< [  3:  3](R/W1C/H) 0 = No key swap request without new key installed in Posted
                                                                 Request substream from RX Stream 0.
                                                                 1 = Key swap request without new key installed in Posted
                                                                 Request substream from RX Stream 0. */
        uint64_t tx_key_swap_stat_s0_cpl : 1;/**< [  2:  2](R/W1C/H) 0 = No key swap request without new key installed in
                                                                 Completion substream from TX Stream 0.
                                                                 1 = Key swap request without new key installed in Completion
                                                                 substream from TX Stream 0. */
        uint64_t tx_key_swap_stat_s0_npr : 1;/**< [  1:  1](R/W1C/H) 0 = No key swap request without new key installed in Non-
                                                                 Posted Request substream from TX Stream 0.
                                                                 1 = Key swap request without new key installed in Non-
                                                                 Posted Request substream from TX Stream 0. */
        uint64_t tx_key_swap_stat_s0_pr : 1; /**< [  0:  0](R/W1C/H) 0 = No key swap request without new key installed in Posted
                                                                 Request substream from TX Stream 0.
                                                                 1 = Key swap request without new key installed in Posted
                                                                 Request substream from TX Stream 0. */
#else /* Word 0 - Little Endian */
        uint64_t tx_key_swap_stat_s0_pr : 1; /**< [  0:  0](R/W1C/H) 0 = No key swap request without new key installed in Posted
                                                                 Request substream from TX Stream 0.
                                                                 1 = Key swap request without new key installed in Posted
                                                                 Request substream from TX Stream 0. */
        uint64_t tx_key_swap_stat_s0_npr : 1;/**< [  1:  1](R/W1C/H) 0 = No key swap request without new key installed in Non-
                                                                 Posted Request substream from TX Stream 0.
                                                                 1 = Key swap request without new key installed in Non-
                                                                 Posted Request substream from TX Stream 0. */
        uint64_t tx_key_swap_stat_s0_cpl : 1;/**< [  2:  2](R/W1C/H) 0 = No key swap request without new key installed in
                                                                 Completion substream from TX Stream 0.
                                                                 1 = Key swap request without new key installed in Completion
                                                                 substream from TX Stream 0. */
        uint64_t rx_key_swap_stat_s0_pr : 1; /**< [  3:  3](R/W1C/H) 0 = No key swap request without new key installed in Posted
                                                                 Request substream from RX Stream 0.
                                                                 1 = Key swap request without new key installed in Posted
                                                                 Request substream from RX Stream 0. */
        uint64_t rx_key_swap_stat_s0_npr : 1;/**< [  4:  4](R/W1C/H) 0 = No key swap request without new key installed in Non-
                                                                 Posted Request substream from RX Stream 0.
                                                                 1 = Key swap request without new key installed in Non-
                                                                 Posted Request substream from RX Stream 0. */
        uint64_t rx_key_swap_stat_s0_cpl : 1;/**< [  5:  5](R/W1C/H) 0 = No key swap request without new key installed in
                                                                 Completion substream from RX Stream 0.
                                                                 1 = Key swap request without new key installed in Completion
                                                                 substream from RX Stream 0. */
        uint64_t reserved_6_31         : 26;
        uint64_t reserved_32_63        : 32;
#endif /* Word 0 - End */
    } cn;
};
typedef union cavm_pemsecx_key_security_status_s0 cavm_pemsecx_key_security_status_s0_t;

static inline uint64_t CAVM_PEMSECX_KEY_SECURITY_STATUS_S0(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_PEMSECX_KEY_SECURITY_STATUS_S0(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CN20KA) && (a<=5))
        return 0xc2c0000014a0ll + 0x100000000ll * ((a) & 0x7);
    __cavm_csr_fatal("PEMSECX_KEY_SECURITY_STATUS_S0", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_PEMSECX_KEY_SECURITY_STATUS_S0(a) cavm_pemsecx_key_security_status_s0_t
#define bustype_CAVM_PEMSECX_KEY_SECURITY_STATUS_S0(a) CSR_TYPE_ARF
#define basename_CAVM_PEMSECX_KEY_SECURITY_STATUS_S0(a) "PEMSECX_KEY_SECURITY_STATUS_S0"
#define device_bar_CAVM_PEMSECX_KEY_SECURITY_STATUS_S0(a) 0x0 /* PF_BAR0 */
#define busnum_CAVM_PEMSECX_KEY_SECURITY_STATUS_S0(a) (a)
#define arguments_CAVM_PEMSECX_KEY_SECURITY_STATUS_S0(a) (a),-1,-1,-1

/**
 * Register (ARF) pemsec#_key_thresh_en
 *
 * Key Threshold Enable Register
 */
union cavm_pemsecx_key_thresh_en
{
    uint64_t u;
    struct cavm_pemsecx_key_thresh_en_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_4_63         : 60;
        uint64_t rx_key_counter_autoclear_en : 1;/**< [  3:  3](R/W) Key counters auto-clear enable bit for RX. When this bitfield
                                                                 is set to 1, the key utilization counters are automatically cleared
                                                                 when they reach the configured threshold. */
        uint64_t tx_key_counter_autoclear_en : 1;/**< [  2:  2](R/W) Key counters auto-clear enable bit for TX. When this bitfield
                                                                 is set to 1, the key utilization counters are automatically cleared
                                                                 when they reach the configured threshold. */
        uint64_t rx_key_thresh_en      : 1;  /**< [  1:  1](R/W) Key threshold enable bit for RX. When this bitfield is set to 1 the
                                                                 TLP counter for the RX datapath is active. */
        uint64_t tx_key_thresh_en      : 1;  /**< [  0:  0](R/W) Key threshold enable bit for TX. When this bitfield is set to 1 the
                                                                 TLP counter for the TX datapath is active. */
#else /* Word 0 - Little Endian */
        uint64_t tx_key_thresh_en      : 1;  /**< [  0:  0](R/W) Key threshold enable bit for TX. When this bitfield is set to 1 the
                                                                 TLP counter for the TX datapath is active. */
        uint64_t rx_key_thresh_en      : 1;  /**< [  1:  1](R/W) Key threshold enable bit for RX. When this bitfield is set to 1 the
                                                                 TLP counter for the RX datapath is active. */
        uint64_t tx_key_counter_autoclear_en : 1;/**< [  2:  2](R/W) Key counters auto-clear enable bit for TX. When this bitfield
                                                                 is set to 1, the key utilization counters are automatically cleared
                                                                 when they reach the configured threshold. */
        uint64_t rx_key_counter_autoclear_en : 1;/**< [  3:  3](R/W) Key counters auto-clear enable bit for RX. When this bitfield
                                                                 is set to 1, the key utilization counters are automatically cleared
                                                                 when they reach the configured threshold. */
        uint64_t reserved_4_63         : 60;
#endif /* Word 0 - End */
    } s;
    struct cavm_pemsecx_key_thresh_en_cn
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_32_63        : 32;
        uint64_t reserved_4_31         : 28;
        uint64_t rx_key_counter_autoclear_en : 1;/**< [  3:  3](R/W) Key counters auto-clear enable bit for RX. When this bitfield
                                                                 is set to 1, the key utilization counters are automatically cleared
                                                                 when they reach the configured threshold. */
        uint64_t tx_key_counter_autoclear_en : 1;/**< [  2:  2](R/W) Key counters auto-clear enable bit for TX. When this bitfield
                                                                 is set to 1, the key utilization counters are automatically cleared
                                                                 when they reach the configured threshold. */
        uint64_t rx_key_thresh_en      : 1;  /**< [  1:  1](R/W) Key threshold enable bit for RX. When this bitfield is set to 1 the
                                                                 TLP counter for the RX datapath is active. */
        uint64_t tx_key_thresh_en      : 1;  /**< [  0:  0](R/W) Key threshold enable bit for TX. When this bitfield is set to 1 the
                                                                 TLP counter for the TX datapath is active. */
#else /* Word 0 - Little Endian */
        uint64_t tx_key_thresh_en      : 1;  /**< [  0:  0](R/W) Key threshold enable bit for TX. When this bitfield is set to 1 the
                                                                 TLP counter for the TX datapath is active. */
        uint64_t rx_key_thresh_en      : 1;  /**< [  1:  1](R/W) Key threshold enable bit for RX. When this bitfield is set to 1 the
                                                                 TLP counter for the RX datapath is active. */
        uint64_t tx_key_counter_autoclear_en : 1;/**< [  2:  2](R/W) Key counters auto-clear enable bit for TX. When this bitfield
                                                                 is set to 1, the key utilization counters are automatically cleared
                                                                 when they reach the configured threshold. */
        uint64_t rx_key_counter_autoclear_en : 1;/**< [  3:  3](R/W) Key counters auto-clear enable bit for RX. When this bitfield
                                                                 is set to 1, the key utilization counters are automatically cleared
                                                                 when they reach the configured threshold. */
        uint64_t reserved_4_31         : 28;
        uint64_t reserved_32_63        : 32;
#endif /* Word 0 - End */
    } cn;
};
typedef union cavm_pemsecx_key_thresh_en cavm_pemsecx_key_thresh_en_t;

static inline uint64_t CAVM_PEMSECX_KEY_THRESH_EN(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_PEMSECX_KEY_THRESH_EN(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CN20KA) && (a<=5))
        return 0xc2c000001058ll + 0x100000000ll * ((a) & 0x7);
    __cavm_csr_fatal("PEMSECX_KEY_THRESH_EN", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_PEMSECX_KEY_THRESH_EN(a) cavm_pemsecx_key_thresh_en_t
#define bustype_CAVM_PEMSECX_KEY_THRESH_EN(a) CSR_TYPE_ARF
#define basename_CAVM_PEMSECX_KEY_THRESH_EN(a) "PEMSECX_KEY_THRESH_EN"
#define device_bar_CAVM_PEMSECX_KEY_THRESH_EN(a) 0x0 /* PF_BAR0 */
#define busnum_CAVM_PEMSECX_KEY_THRESH_EN(a) (a)
#define arguments_CAVM_PEMSECX_KEY_THRESH_EN(a) (a),-1,-1,-1

/**
 * Register (ARF) pemsec#_lnk_snd_stream_insecure
 *
 * Send Link Stream to Insecure Register
 */
union cavm_pemsecx_lnk_snd_stream_insecure
{
    uint64_t u;
    struct cavm_pemsecx_lnk_snd_stream_insecure_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_1_63         : 63;
        uint64_t lnk_snd_stream_0_insecure : 1;/**< [  0:  0](R/W1C/H) Setting this bit to 1 sends link stream 0 to insecure mode.
                                                                 This bit auto clears. */
#else /* Word 0 - Little Endian */
        uint64_t lnk_snd_stream_0_insecure : 1;/**< [  0:  0](R/W1C/H) Setting this bit to 1 sends link stream 0 to insecure mode.
                                                                 This bit auto clears. */
        uint64_t reserved_1_63         : 63;
#endif /* Word 0 - End */
    } s;
    struct cavm_pemsecx_lnk_snd_stream_insecure_cn
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_32_63        : 32;
        uint64_t reserved_2_31         : 30;
        uint64_t reserved_1            : 1;
        uint64_t lnk_snd_stream_0_insecure : 1;/**< [  0:  0](R/W1C/H) Setting this bit to 1 sends link stream 0 to insecure mode.
                                                                 This bit auto clears. */
#else /* Word 0 - Little Endian */
        uint64_t lnk_snd_stream_0_insecure : 1;/**< [  0:  0](R/W1C/H) Setting this bit to 1 sends link stream 0 to insecure mode.
                                                                 This bit auto clears. */
        uint64_t reserved_1            : 1;
        uint64_t reserved_2_31         : 30;
        uint64_t reserved_32_63        : 32;
#endif /* Word 0 - End */
    } cn;
};
typedef union cavm_pemsecx_lnk_snd_stream_insecure cavm_pemsecx_lnk_snd_stream_insecure_t;

static inline uint64_t CAVM_PEMSECX_LNK_SND_STREAM_INSECURE(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_PEMSECX_LNK_SND_STREAM_INSECURE(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CN20KA) && (a<=5))
        return 0xc2c0000015d0ll + 0x100000000ll * ((a) & 0x7);
    __cavm_csr_fatal("PEMSECX_LNK_SND_STREAM_INSECURE", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_PEMSECX_LNK_SND_STREAM_INSECURE(a) cavm_pemsecx_lnk_snd_stream_insecure_t
#define bustype_CAVM_PEMSECX_LNK_SND_STREAM_INSECURE(a) CSR_TYPE_ARF
#define basename_CAVM_PEMSECX_LNK_SND_STREAM_INSECURE(a) "PEMSECX_LNK_SND_STREAM_INSECURE"
#define device_bar_CAVM_PEMSECX_LNK_SND_STREAM_INSECURE(a) 0x0 /* PF_BAR0 */
#define busnum_CAVM_PEMSECX_LNK_SND_STREAM_INSECURE(a) (a)
#define arguments_CAVM_PEMSECX_LNK_SND_STREAM_INSECURE(a) (a),-1,-1,-1

/**
 * Register (ARF) pemsec#_msix_pba#
 *
 * PEMSECC MSI-X Pending Bit Array Registers
 * This register is the MSI-X PBA table, the bit number is indexed by the
 * PEMSEC_INT_VEC_E enumeration.
 */
union cavm_pemsecx_msix_pbax
{
    uint64_t u;
    struct cavm_pemsecx_msix_pbax_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t pend                  : 64; /**< [ 63:  0](RO/H) Pending message for the associated PEMSEC()_MSIX_VEC()_CTL, enumerated by
                                                                 PEMSEC_INT_VEC_E. Bits that have no associated PEMSEC_INT_VEC_E are zero. */
#else /* Word 0 - Little Endian */
        uint64_t pend                  : 64; /**< [ 63:  0](RO/H) Pending message for the associated PEMSEC()_MSIX_VEC()_CTL, enumerated by
                                                                 PEMSEC_INT_VEC_E. Bits that have no associated PEMSEC_INT_VEC_E are zero. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_pemsecx_msix_pbax_s cn; */
};
typedef union cavm_pemsecx_msix_pbax cavm_pemsecx_msix_pbax_t;

static inline uint64_t CAVM_PEMSECX_MSIX_PBAX(uint64_t a, uint64_t b) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_PEMSECX_MSIX_PBAX(uint64_t a, uint64_t b)
{
    if (cavm_is_model(OCTEONTX_CN20KA) && ((a<=5) && (b==0)))
        return 0xc2c0800f0000ll + 0x100000000ll * ((a) & 0x7) + 8ll * ((b) & 0x0);
    __cavm_csr_fatal("PEMSECX_MSIX_PBAX", 2, a, b, 0, 0, 0, 0);
}

#define typedef_CAVM_PEMSECX_MSIX_PBAX(a,b) cavm_pemsecx_msix_pbax_t
#define bustype_CAVM_PEMSECX_MSIX_PBAX(a,b) CSR_TYPE_ARF
#define basename_CAVM_PEMSECX_MSIX_PBAX(a,b) "PEMSECX_MSIX_PBAX"
#define device_bar_CAVM_PEMSECX_MSIX_PBAX(a,b) 0x4 /* PF_BAR4 */
#define busnum_CAVM_PEMSECX_MSIX_PBAX(a,b) (a)
#define arguments_CAVM_PEMSECX_MSIX_PBAX(a,b) (a),(b),-1,-1

/**
 * Register (ARF) pemsec#_msix_vec#_addr
 *
 * PEMSEC MSI-X Vector Table Address Registers
 * This register is the MSI-X vector table, indexed by the PEMSEC_INT_VEC_E enumeration.
 */
union cavm_pemsecx_msix_vecx_addr
{
    uint64_t u;
    struct cavm_pemsecx_msix_vecx_addr_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_53_63        : 11;
        uint64_t addr                  : 51; /**< [ 52:  2](R/W) IOVA to use for MSI-X delivery of this vector. */
        uint64_t reserved_1            : 1;
        uint64_t secvec                : 1;  /**< [  0:  0](SR/W) Secure vector.
                                                                 0 = This vector may be read or written by either secure or nonsecure states.
                                                                 The vector's IOVA is sent to the SMMU as nonsecure (though this only affects
                                                                 physical addresses if PCCPF_XXX_VSEC_SCTL[MSIX_PHYS]=1).

                                                                 1 = This vector's PEMSEC()_MSIX_VEC()_ADDR, PEMSEC()_MSIX_VEC()_CTL, and
                                                                 corresponding bit of PEMSEC()_MSIX_PBA() are RAZ/WI and does not cause a fault
                                                                 when accessed by the nonsecure world.
                                                                 The vector's IOVA is sent to the SMMU as secure (though this only affects
                                                                 physical addresses if PCCPF_XXX_VSEC_SCTL[MSIX_PHYS]=1 or
                                                                 PCCPF_XXX_VSEC_SCTL[MSIX_SEC_PHYS]=1).

                                                                 If PCCPF_PEMSEC()_VSEC_SCTL[MSIX_SEC] (for documentation, see
                                                                 PCCPF_XXX_VSEC_SCTL[MSIX_SEC]) is
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

                                                                 1 = This vector's PEMSEC()_MSIX_VEC()_ADDR, PEMSEC()_MSIX_VEC()_CTL, and
                                                                 corresponding bit of PEMSEC()_MSIX_PBA() are RAZ/WI and does not cause a fault
                                                                 when accessed by the nonsecure world.
                                                                 The vector's IOVA is sent to the SMMU as secure (though this only affects
                                                                 physical addresses if PCCPF_XXX_VSEC_SCTL[MSIX_PHYS]=1 or
                                                                 PCCPF_XXX_VSEC_SCTL[MSIX_SEC_PHYS]=1).

                                                                 If PCCPF_PEMSEC()_VSEC_SCTL[MSIX_SEC] (for documentation, see
                                                                 PCCPF_XXX_VSEC_SCTL[MSIX_SEC]) is
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
    /* struct cavm_pemsecx_msix_vecx_addr_s cn; */
};
typedef union cavm_pemsecx_msix_vecx_addr cavm_pemsecx_msix_vecx_addr_t;

static inline uint64_t CAVM_PEMSECX_MSIX_VECX_ADDR(uint64_t a, uint64_t b) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_PEMSECX_MSIX_VECX_ADDR(uint64_t a, uint64_t b)
{
    if (cavm_is_model(OCTEONTX_CN20KA) && ((a<=5) && (b<=7)))
        return 0xc2c080000000ll + 0x100000000ll * ((a) & 0x7) + 0x10ll * ((b) & 0x7);
    __cavm_csr_fatal("PEMSECX_MSIX_VECX_ADDR", 2, a, b, 0, 0, 0, 0);
}

#define typedef_CAVM_PEMSECX_MSIX_VECX_ADDR(a,b) cavm_pemsecx_msix_vecx_addr_t
#define bustype_CAVM_PEMSECX_MSIX_VECX_ADDR(a,b) CSR_TYPE_ARF
#define basename_CAVM_PEMSECX_MSIX_VECX_ADDR(a,b) "PEMSECX_MSIX_VECX_ADDR"
#define device_bar_CAVM_PEMSECX_MSIX_VECX_ADDR(a,b) 0x4 /* PF_BAR4 */
#define busnum_CAVM_PEMSECX_MSIX_VECX_ADDR(a,b) (a)
#define arguments_CAVM_PEMSECX_MSIX_VECX_ADDR(a,b) (a),(b),-1,-1

/**
 * Register (ARF) pemsec#_msix_vec#_ctl
 *
 * PEMSEC MSI-X Vector Table Control and Data Registers
 * This register is the MSI-X vector table, indexed by the PEMSEC_INT_VEC_E enumeration.
 */
union cavm_pemsecx_msix_vecx_ctl
{
    uint64_t u;
    struct cavm_pemsecx_msix_vecx_ctl_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_33_63        : 31;
        uint64_t mask                  : 1;  /**< [ 32: 32](R/W) When set, no MSI-X interrupts will be sent to this vector. */
        uint64_t data                  : 32; /**< [ 31:  0](R/W) Data to use for MSI-X delivery of this vector. */
#else /* Word 0 - Little Endian */
        uint64_t data                  : 32; /**< [ 31:  0](R/W) Data to use for MSI-X delivery of this vector. */
        uint64_t mask                  : 1;  /**< [ 32: 32](R/W) When set, no MSI-X interrupts will be sent to this vector. */
        uint64_t reserved_33_63        : 31;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_pemsecx_msix_vecx_ctl_s cn; */
};
typedef union cavm_pemsecx_msix_vecx_ctl cavm_pemsecx_msix_vecx_ctl_t;

static inline uint64_t CAVM_PEMSECX_MSIX_VECX_CTL(uint64_t a, uint64_t b) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_PEMSECX_MSIX_VECX_CTL(uint64_t a, uint64_t b)
{
    if (cavm_is_model(OCTEONTX_CN20KA) && ((a<=5) && (b<=7)))
        return 0xc2c080000008ll + 0x100000000ll * ((a) & 0x7) + 0x10ll * ((b) & 0x7);
    __cavm_csr_fatal("PEMSECX_MSIX_VECX_CTL", 2, a, b, 0, 0, 0, 0);
}

#define typedef_CAVM_PEMSECX_MSIX_VECX_CTL(a,b) cavm_pemsecx_msix_vecx_ctl_t
#define bustype_CAVM_PEMSECX_MSIX_VECX_CTL(a,b) CSR_TYPE_ARF
#define basename_CAVM_PEMSECX_MSIX_VECX_CTL(a,b) "PEMSECX_MSIX_VECX_CTL"
#define device_bar_CAVM_PEMSECX_MSIX_VECX_CTL(a,b) 0x4 /* PF_BAR4 */
#define busnum_CAVM_PEMSECX_MSIX_VECX_CTL(a,b) (a)
#define arguments_CAVM_PEMSECX_MSIX_VECX_CTL(a,b) (a),(b),-1,-1

/**
 * Register (ARF) pemsec#_out_msg_size
 *
 * FIPS Output Out MSG Size Register
 * This register is for testing the IDE encryption logic per the
 * FIPS-197 AES standard.
 *
 * This register is only accessible when
 * PEMSEC_BLK_IDE_CTL[IDE_TEST_ENABLE] is set to 1.
 * Accesses to this register when
 * PEMSEC_BLK_IDE_CTL[IDE_TEST_ENABLE] is set to 0 will return
 * an error.
 */
union cavm_pemsecx_out_msg_size
{
    uint64_t u;
    struct cavm_pemsecx_out_msg_size_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_7_63         : 57;
        uint64_t out_msg_size          : 7;  /**< [  6:  0](RO/H) Byte mask of the message (MSG) in the MAC output data. */
#else /* Word 0 - Little Endian */
        uint64_t out_msg_size          : 7;  /**< [  6:  0](RO/H) Byte mask of the message (MSG) in the MAC output data. */
        uint64_t reserved_7_63         : 57;
#endif /* Word 0 - End */
    } s;
    struct cavm_pemsecx_out_msg_size_cn
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_32_63        : 32;
        uint64_t reserved_7_31         : 25;
        uint64_t out_msg_size          : 7;  /**< [  6:  0](RO/H) Byte mask of the message (MSG) in the MAC output data. */
#else /* Word 0 - Little Endian */
        uint64_t out_msg_size          : 7;  /**< [  6:  0](RO/H) Byte mask of the message (MSG) in the MAC output data. */
        uint64_t reserved_7_31         : 25;
        uint64_t reserved_32_63        : 32;
#endif /* Word 0 - End */
    } cn;
};
typedef union cavm_pemsecx_out_msg_size cavm_pemsecx_out_msg_size_t;

static inline uint64_t CAVM_PEMSECX_OUT_MSG_SIZE(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_PEMSECX_OUT_MSG_SIZE(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CN20KA) && (a<=5))
        return 0xc2c000004a40ll + 0x100000000ll * ((a) & 0x7);
    __cavm_csr_fatal("PEMSECX_OUT_MSG_SIZE", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_PEMSECX_OUT_MSG_SIZE(a) cavm_pemsecx_out_msg_size_t
#define bustype_CAVM_PEMSECX_OUT_MSG_SIZE(a) CSR_TYPE_ARF
#define basename_CAVM_PEMSECX_OUT_MSG_SIZE(a) "PEMSECX_OUT_MSG_SIZE"
#define device_bar_CAVM_PEMSECX_OUT_MSG_SIZE(a) 0x0 /* PF_BAR0 */
#define busnum_CAVM_PEMSECX_OUT_MSG_SIZE(a) (a)
#define arguments_CAVM_PEMSECX_OUT_MSG_SIZE(a) (a),-1,-1,-1

/**
 * Register (ARF) pemsec#_pem_int
 *
 * PEMSEC PEM Interrupt Summary Register
 * This register contains the interrupt summary bits for the PEM Interrupts.
 *
 * This register is not accessible through ROM scripts; see SCR_WRITE32_S[ADDR].
 *
 * This register is reset on core domain reset.
 */
union cavm_pemsecx_pem_int
{
    uint64_t u;
    struct cavm_pemsecx_pem_int_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_3_63         : 61;
        uint64_t pemoor_int            : 1;  /**< [  2:  2](R/W1C/H) Indication to software that the PEM has been taken out of MAC reset and it
                                                                 is safe to configure CSRs marked as being on MAC reset, as well as all PCIe configuration
                                                                 registers. */
        uint64_t lnkup_int             : 1;  /**< [  1:  1](R/W1C/H) Indicates that the PEM PCIe controller link is up. */
        uint64_t lnkdwn_int            : 1;  /**< [  0:  0](R/W1C/H) Indicates that the PEM PCIe controller link went down.
                                                                 [LNKDWN_INT] will signal an interrupt, if enabled via
                                                                 PEMSEC_PEM_INT_ENA_W1S[LNKDWN_INT], and the LTSSM
                                                                 transitions from L0 to DETECT state. */
#else /* Word 0 - Little Endian */
        uint64_t lnkdwn_int            : 1;  /**< [  0:  0](R/W1C/H) Indicates that the PEM PCIe controller link went down.
                                                                 [LNKDWN_INT] will signal an interrupt, if enabled via
                                                                 PEMSEC_PEM_INT_ENA_W1S[LNKDWN_INT], and the LTSSM
                                                                 transitions from L0 to DETECT state. */
        uint64_t lnkup_int             : 1;  /**< [  1:  1](R/W1C/H) Indicates that the PEM PCIe controller link is up. */
        uint64_t pemoor_int            : 1;  /**< [  2:  2](R/W1C/H) Indication to software that the PEM has been taken out of MAC reset and it
                                                                 is safe to configure CSRs marked as being on MAC reset, as well as all PCIe configuration
                                                                 registers. */
        uint64_t reserved_3_63         : 61;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_pemsecx_pem_int_s cn; */
};
typedef union cavm_pemsecx_pem_int cavm_pemsecx_pem_int_t;

static inline uint64_t CAVM_PEMSECX_PEM_INT(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_PEMSECX_PEM_INT(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CN20KA) && (a<=5))
        return 0xc2c000006108ll + 0x100000000ll * ((a) & 0x7);
    __cavm_csr_fatal("PEMSECX_PEM_INT", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_PEMSECX_PEM_INT(a) cavm_pemsecx_pem_int_t
#define bustype_CAVM_PEMSECX_PEM_INT(a) CSR_TYPE_ARF
#define basename_CAVM_PEMSECX_PEM_INT(a) "PEMSECX_PEM_INT"
#define device_bar_CAVM_PEMSECX_PEM_INT(a) 0x0 /* PF_BAR0 */
#define busnum_CAVM_PEMSECX_PEM_INT(a) (a)
#define arguments_CAVM_PEMSECX_PEM_INT(a) (a),-1,-1,-1

/**
 * Register (ARF) pemsec#_pem_int_ena_w1c
 *
 * PEMSEC PEM Interrupt Enable Clear Register
 * This register clears interrupt enable bits.
 */
union cavm_pemsecx_pem_int_ena_w1c
{
    uint64_t u;
    struct cavm_pemsecx_pem_int_ena_w1c_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_3_63         : 61;
        uint64_t pemoor_int            : 1;  /**< [  2:  2](R/W1C/H) Reads or clears enable for PEMSEC(0..5)_PEM_INT[PEMOOR_INT]. */
        uint64_t lnkup_int             : 1;  /**< [  1:  1](R/W1C/H) Reads or clears enable for PEMSEC(0..5)_PEM_INT[LNKUP_INT]. */
        uint64_t lnkdwn_int            : 1;  /**< [  0:  0](R/W1C/H) Reads or clears enable for PEMSEC(0..5)_PEM_INT[LNKDWN_INT]. */
#else /* Word 0 - Little Endian */
        uint64_t lnkdwn_int            : 1;  /**< [  0:  0](R/W1C/H) Reads or clears enable for PEMSEC(0..5)_PEM_INT[LNKDWN_INT]. */
        uint64_t lnkup_int             : 1;  /**< [  1:  1](R/W1C/H) Reads or clears enable for PEMSEC(0..5)_PEM_INT[LNKUP_INT]. */
        uint64_t pemoor_int            : 1;  /**< [  2:  2](R/W1C/H) Reads or clears enable for PEMSEC(0..5)_PEM_INT[PEMOOR_INT]. */
        uint64_t reserved_3_63         : 61;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_pemsecx_pem_int_ena_w1c_s cn; */
};
typedef union cavm_pemsecx_pem_int_ena_w1c cavm_pemsecx_pem_int_ena_w1c_t;

static inline uint64_t CAVM_PEMSECX_PEM_INT_ENA_W1C(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_PEMSECX_PEM_INT_ENA_W1C(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CN20KA) && (a<=5))
        return 0xc2c000006118ll + 0x100000000ll * ((a) & 0x7);
    __cavm_csr_fatal("PEMSECX_PEM_INT_ENA_W1C", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_PEMSECX_PEM_INT_ENA_W1C(a) cavm_pemsecx_pem_int_ena_w1c_t
#define bustype_CAVM_PEMSECX_PEM_INT_ENA_W1C(a) CSR_TYPE_ARF
#define basename_CAVM_PEMSECX_PEM_INT_ENA_W1C(a) "PEMSECX_PEM_INT_ENA_W1C"
#define device_bar_CAVM_PEMSECX_PEM_INT_ENA_W1C(a) 0x0 /* PF_BAR0 */
#define busnum_CAVM_PEMSECX_PEM_INT_ENA_W1C(a) (a)
#define arguments_CAVM_PEMSECX_PEM_INT_ENA_W1C(a) (a),-1,-1,-1

/**
 * Register (ARF) pemsec#_pem_int_ena_w1s
 *
 * PEMSEC PEM Interrupt Enable Set Register
 * This register sets interrupt enable bits.
 */
union cavm_pemsecx_pem_int_ena_w1s
{
    uint64_t u;
    struct cavm_pemsecx_pem_int_ena_w1s_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_3_63         : 61;
        uint64_t pemoor_int            : 1;  /**< [  2:  2](R/W1S/H) Reads or sets enable for PEMSEC(0..5)_PEM_INT[PEMOOR_INT]. */
        uint64_t lnkup_int             : 1;  /**< [  1:  1](R/W1S/H) Reads or sets enable for PEMSEC(0..5)_PEM_INT[LNKUP_INT]. */
        uint64_t lnkdwn_int            : 1;  /**< [  0:  0](R/W1S/H) Reads or sets enable for PEMSEC(0..5)_PEM_INT[LNKDWN_INT]. */
#else /* Word 0 - Little Endian */
        uint64_t lnkdwn_int            : 1;  /**< [  0:  0](R/W1S/H) Reads or sets enable for PEMSEC(0..5)_PEM_INT[LNKDWN_INT]. */
        uint64_t lnkup_int             : 1;  /**< [  1:  1](R/W1S/H) Reads or sets enable for PEMSEC(0..5)_PEM_INT[LNKUP_INT]. */
        uint64_t pemoor_int            : 1;  /**< [  2:  2](R/W1S/H) Reads or sets enable for PEMSEC(0..5)_PEM_INT[PEMOOR_INT]. */
        uint64_t reserved_3_63         : 61;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_pemsecx_pem_int_ena_w1s_s cn; */
};
typedef union cavm_pemsecx_pem_int_ena_w1s cavm_pemsecx_pem_int_ena_w1s_t;

static inline uint64_t CAVM_PEMSECX_PEM_INT_ENA_W1S(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_PEMSECX_PEM_INT_ENA_W1S(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CN20KA) && (a<=5))
        return 0xc2c000006120ll + 0x100000000ll * ((a) & 0x7);
    __cavm_csr_fatal("PEMSECX_PEM_INT_ENA_W1S", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_PEMSECX_PEM_INT_ENA_W1S(a) cavm_pemsecx_pem_int_ena_w1s_t
#define bustype_CAVM_PEMSECX_PEM_INT_ENA_W1S(a) CSR_TYPE_ARF
#define basename_CAVM_PEMSECX_PEM_INT_ENA_W1S(a) "PEMSECX_PEM_INT_ENA_W1S"
#define device_bar_CAVM_PEMSECX_PEM_INT_ENA_W1S(a) 0x0 /* PF_BAR0 */
#define busnum_CAVM_PEMSECX_PEM_INT_ENA_W1S(a) (a)
#define arguments_CAVM_PEMSECX_PEM_INT_ENA_W1S(a) (a),-1,-1,-1

/**
 * Register (ARF) pemsec#_pem_int_w1s
 *
 * PEMSEC PEM Interrupt Set Register
 * This register sets interrupt bits.
 */
union cavm_pemsecx_pem_int_w1s
{
    uint64_t u;
    struct cavm_pemsecx_pem_int_w1s_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_3_63         : 61;
        uint64_t pemoor_int            : 1;  /**< [  2:  2](R/W1S/H) Reads or sets PEMSEC(0..5)_PEM_INT[PEMOOR_INT]. */
        uint64_t lnkup_int             : 1;  /**< [  1:  1](R/W1S/H) Reads or sets PEMSEC(0..5)_PEM_INT[LNKUP_INT]. */
        uint64_t lnkdwn_int            : 1;  /**< [  0:  0](R/W1S/H) Reads or sets PEMSEC(0..5)_PEM_INT[LNKDWN_INT]. */
#else /* Word 0 - Little Endian */
        uint64_t lnkdwn_int            : 1;  /**< [  0:  0](R/W1S/H) Reads or sets PEMSEC(0..5)_PEM_INT[LNKDWN_INT]. */
        uint64_t lnkup_int             : 1;  /**< [  1:  1](R/W1S/H) Reads or sets PEMSEC(0..5)_PEM_INT[LNKUP_INT]. */
        uint64_t pemoor_int            : 1;  /**< [  2:  2](R/W1S/H) Reads or sets PEMSEC(0..5)_PEM_INT[PEMOOR_INT]. */
        uint64_t reserved_3_63         : 61;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_pemsecx_pem_int_w1s_s cn; */
};
typedef union cavm_pemsecx_pem_int_w1s cavm_pemsecx_pem_int_w1s_t;

static inline uint64_t CAVM_PEMSECX_PEM_INT_W1S(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_PEMSECX_PEM_INT_W1S(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CN20KA) && (a<=5))
        return 0xc2c000006110ll + 0x100000000ll * ((a) & 0x7);
    __cavm_csr_fatal("PEMSECX_PEM_INT_W1S", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_PEMSECX_PEM_INT_W1S(a) cavm_pemsecx_pem_int_w1s_t
#define bustype_CAVM_PEMSECX_PEM_INT_W1S(a) CSR_TYPE_ARF
#define basename_CAVM_PEMSECX_PEM_INT_W1S(a) "PEMSECX_PEM_INT_W1S"
#define device_bar_CAVM_PEMSECX_PEM_INT_W1S(a) 0x0 /* PF_BAR0 */
#define busnum_CAVM_PEMSECX_PEM_INT_W1S(a) (a)
#define arguments_CAVM_PEMSECX_PEM_INT_W1S(a) (a),-1,-1,-1

/**
 * Register (ARF) pemsec#_pem_status
 *
 * PEMSEC PEM Status Register
 * This register contains PEM PCIe controller status information.
 *
 * This register is not accessible through ROM scripts; see SCR_WRITE32_S[ADDR].
 *
 * This register is reset on core domain reset.
 */
union cavm_pemsecx_pem_status
{
    uint64_t u;
    struct cavm_pemsecx_pem_status_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_3_63         : 61;
        uint64_t pemoor                : 1;  /**< [  2:  2](RO/H) Indication to software that the PEM has been taken out of MAC reset and it
                                                                 is safe to configure CSRs marked as being on MAC reset, as well as all PCIe configuration
                                                                 registers. */
        uint64_t lnkup                 : 1;  /**< [  1:  1](RO/H) Indicates that the PEM PCIe controller link is up. */
        uint64_t lnkdwn                : 1;  /**< [  0:  0](RO/H) Indicates that the PEM PCIe controller link is down. */
#else /* Word 0 - Little Endian */
        uint64_t lnkdwn                : 1;  /**< [  0:  0](RO/H) Indicates that the PEM PCIe controller link is down. */
        uint64_t lnkup                 : 1;  /**< [  1:  1](RO/H) Indicates that the PEM PCIe controller link is up. */
        uint64_t pemoor                : 1;  /**< [  2:  2](RO/H) Indication to software that the PEM has been taken out of MAC reset and it
                                                                 is safe to configure CSRs marked as being on MAC reset, as well as all PCIe configuration
                                                                 registers. */
        uint64_t reserved_3_63         : 61;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_pemsecx_pem_status_s cn; */
};
typedef union cavm_pemsecx_pem_status cavm_pemsecx_pem_status_t;

static inline uint64_t CAVM_PEMSECX_PEM_STATUS(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_PEMSECX_PEM_STATUS(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CN20KA) && (a<=5))
        return 0xc2c000006100ll + 0x100000000ll * ((a) & 0x7);
    __cavm_csr_fatal("PEMSECX_PEM_STATUS", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_PEMSECX_PEM_STATUS(a) cavm_pemsecx_pem_status_t
#define bustype_CAVM_PEMSECX_PEM_STATUS(a) CSR_TYPE_ARF
#define basename_CAVM_PEMSECX_PEM_STATUS(a) "PEMSECX_PEM_STATUS"
#define device_bar_CAVM_PEMSECX_PEM_STATUS(a) 0x0 /* PF_BAR0 */
#define busnum_CAVM_PEMSECX_PEM_STATUS(a) (a)
#define arguments_CAVM_PEMSECX_PEM_STATUS(a) (a),-1,-1,-1

/**
 * Register (ARF) pemsec#_rekey_req_stat
 *
 * Rekey Request Status Register
 */
union cavm_pemsecx_rekey_req_stat
{
    uint64_t u;
    struct cavm_pemsecx_rekey_req_stat_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_17_63        : 47;
        uint64_t rx_rekey_req_status_s0 : 1; /**< [ 16: 16](R/W1C/H) Rekey request status for RX stream 0. When this bitfield is
                                                                 set to 1 this indicates that the TLP counter for the stream 0 has
                                                                 reached the value defined in the registers
                                                                 PEMSEC_RX_KEY_THRESHOLD_HIGH_S0 and PEMSEC_RX_KEY_THRESHOLD_LOW_S0.
                                                                 This bitfield needs to be cleared by Software. */
        uint64_t reserved_1_15         : 15;
        uint64_t tx_rekey_req_status_s0 : 1; /**< [  0:  0](R/W1C/H) Rekey request status for TX stream 0. When this bitfield is
                                                                 set to 1 this indicates that the TLP counter for the stream 0 has
                                                                 reached the value defined in the registers
                                                                 PEMSEC_TX_KEY_THRESHOLD_HIGH_S0 and PEMSEC_TX_KEY_THRESHOLD_LOW_S0.
                                                                 This bitfield needs to be cleared by Software. */
#else /* Word 0 - Little Endian */
        uint64_t tx_rekey_req_status_s0 : 1; /**< [  0:  0](R/W1C/H) Rekey request status for TX stream 0. When this bitfield is
                                                                 set to 1 this indicates that the TLP counter for the stream 0 has
                                                                 reached the value defined in the registers
                                                                 PEMSEC_TX_KEY_THRESHOLD_HIGH_S0 and PEMSEC_TX_KEY_THRESHOLD_LOW_S0.
                                                                 This bitfield needs to be cleared by Software. */
        uint64_t reserved_1_15         : 15;
        uint64_t rx_rekey_req_status_s0 : 1; /**< [ 16: 16](R/W1C/H) Rekey request status for RX stream 0. When this bitfield is
                                                                 set to 1 this indicates that the TLP counter for the stream 0 has
                                                                 reached the value defined in the registers
                                                                 PEMSEC_RX_KEY_THRESHOLD_HIGH_S0 and PEMSEC_RX_KEY_THRESHOLD_LOW_S0.
                                                                 This bitfield needs to be cleared by Software. */
        uint64_t reserved_17_63        : 47;
#endif /* Word 0 - End */
    } s;
    struct cavm_pemsecx_rekey_req_stat_cn
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_32_63        : 32;
        uint64_t reserved_18_31        : 14;
        uint64_t reserved_17           : 1;
        uint64_t rx_rekey_req_status_s0 : 1; /**< [ 16: 16](R/W1C/H) Rekey request status for RX stream 0. When this bitfield is
                                                                 set to 1 this indicates that the TLP counter for the stream 0 has
                                                                 reached the value defined in the registers
                                                                 PEMSEC_RX_KEY_THRESHOLD_HIGH_S0 and PEMSEC_RX_KEY_THRESHOLD_LOW_S0.
                                                                 This bitfield needs to be cleared by Software. */
        uint64_t reserved_1_15         : 15;
        uint64_t tx_rekey_req_status_s0 : 1; /**< [  0:  0](R/W1C/H) Rekey request status for TX stream 0. When this bitfield is
                                                                 set to 1 this indicates that the TLP counter for the stream 0 has
                                                                 reached the value defined in the registers
                                                                 PEMSEC_TX_KEY_THRESHOLD_HIGH_S0 and PEMSEC_TX_KEY_THRESHOLD_LOW_S0.
                                                                 This bitfield needs to be cleared by Software. */
#else /* Word 0 - Little Endian */
        uint64_t tx_rekey_req_status_s0 : 1; /**< [  0:  0](R/W1C/H) Rekey request status for TX stream 0. When this bitfield is
                                                                 set to 1 this indicates that the TLP counter for the stream 0 has
                                                                 reached the value defined in the registers
                                                                 PEMSEC_TX_KEY_THRESHOLD_HIGH_S0 and PEMSEC_TX_KEY_THRESHOLD_LOW_S0.
                                                                 This bitfield needs to be cleared by Software. */
        uint64_t reserved_1_15         : 15;
        uint64_t rx_rekey_req_status_s0 : 1; /**< [ 16: 16](R/W1C/H) Rekey request status for RX stream 0. When this bitfield is
                                                                 set to 1 this indicates that the TLP counter for the stream 0 has
                                                                 reached the value defined in the registers
                                                                 PEMSEC_RX_KEY_THRESHOLD_HIGH_S0 and PEMSEC_RX_KEY_THRESHOLD_LOW_S0.
                                                                 This bitfield needs to be cleared by Software. */
        uint64_t reserved_17           : 1;
        uint64_t reserved_18_31        : 14;
        uint64_t reserved_32_63        : 32;
#endif /* Word 0 - End */
    } cn;
};
typedef union cavm_pemsecx_rekey_req_stat cavm_pemsecx_rekey_req_stat_t;

static inline uint64_t CAVM_PEMSECX_REKEY_REQ_STAT(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_PEMSECX_REKEY_REQ_STAT(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CN20KA) && (a<=5))
        return 0xc2c000001060ll + 0x100000000ll * ((a) & 0x7);
    __cavm_csr_fatal("PEMSECX_REKEY_REQ_STAT", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_PEMSECX_REKEY_REQ_STAT(a) cavm_pemsecx_rekey_req_stat_t
#define bustype_CAVM_PEMSECX_REKEY_REQ_STAT(a) CSR_TYPE_ARF
#define basename_CAVM_PEMSECX_REKEY_REQ_STAT(a) "PEMSECX_REKEY_REQ_STAT"
#define device_bar_CAVM_PEMSECX_REKEY_REQ_STAT(a) 0x0 /* PF_BAR0 */
#define busnum_CAVM_PEMSECX_REKEY_REQ_STAT(a) (a)
#define arguments_CAVM_PEMSECX_REKEY_REQ_STAT(a) (a),-1,-1,-1

/**
 * Register (ARF) pemsec#_rx_aes_sel
 *
 * RX_FIPS AES Selection Register
 * This register is for testing the IDE encryption logic per the
 * FIPS-197 AES standard.
 *
 * This register is only accessible when
 * PEMSEC_BLK_IDE_CTL[IDE_TEST_ENABLE] is set to 1.
 * Accesses to this register when
 * PEMSEC_BLK_IDE_CTL[IDE_TEST_ENABLE] is set to 0 will return
 * an error.
 */
union cavm_pemsecx_rx_aes_sel
{
    uint64_t u;
    struct cavm_pemsecx_rx_aes_sel_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_1_63         : 63;
        uint64_t aes_sel               : 1;  /**< [  0:  0](R/W) Selects which AES to be served by the FIPS 140-3 test
                                                                 mode. */
#else /* Word 0 - Little Endian */
        uint64_t aes_sel               : 1;  /**< [  0:  0](R/W) Selects which AES to be served by the FIPS 140-3 test
                                                                 mode. */
        uint64_t reserved_1_63         : 63;
#endif /* Word 0 - End */
    } s;
    struct cavm_pemsecx_rx_aes_sel_cn
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_32_63        : 32;
        uint64_t reserved_1_31         : 31;
        uint64_t aes_sel               : 1;  /**< [  0:  0](R/W) Selects which AES to be served by the FIPS 140-3 test
                                                                 mode. */
#else /* Word 0 - Little Endian */
        uint64_t aes_sel               : 1;  /**< [  0:  0](R/W) Selects which AES to be served by the FIPS 140-3 test
                                                                 mode. */
        uint64_t reserved_1_31         : 31;
        uint64_t reserved_32_63        : 32;
#endif /* Word 0 - End */
    } cn;
};
typedef union cavm_pemsecx_rx_aes_sel cavm_pemsecx_rx_aes_sel_t;

static inline uint64_t CAVM_PEMSECX_RX_AES_SEL(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_PEMSECX_RX_AES_SEL(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CN20KA) && (a<=5))
        return 0xc2c000005bf8ll + 0x100000000ll * ((a) & 0x7);
    __cavm_csr_fatal("PEMSECX_RX_AES_SEL", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_PEMSECX_RX_AES_SEL(a) cavm_pemsecx_rx_aes_sel_t
#define bustype_CAVM_PEMSECX_RX_AES_SEL(a) CSR_TYPE_ARF
#define basename_CAVM_PEMSECX_RX_AES_SEL(a) "PEMSECX_RX_AES_SEL"
#define device_bar_CAVM_PEMSECX_RX_AES_SEL(a) 0x0 /* PF_BAR0 */
#define busnum_CAVM_PEMSECX_RX_AES_SEL(a) (a)
#define arguments_CAVM_PEMSECX_RX_AES_SEL(a) (a),-1,-1,-1

/**
 * Register (ARF) pemsec#_rx_cmd_aad
 *
 * RX FIPS Command - CMD AAD Register
 * This register is for testing the IDE encryption logic per the
 * FIPS-197 AES standard.
 *
 * This register is only accessible when
 * PEMSEC_BLK_IDE_CTL[IDE_TEST_ENABLE] is set to 1.
 * Accesses to this register when
 * PEMSEC_BLK_IDE_CTL[IDE_TEST_ENABLE] is set to 0 will return
 * an error.
 */
union cavm_pemsecx_rx_cmd_aad
{
    uint64_t u;
    struct cavm_pemsecx_rx_cmd_aad_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_1_63         : 63;
        uint64_t cmd_aad               : 1;  /**< [  0:  0](R/W) Additional Authentication Data (AAD) present in the input
                                                                 data. */
#else /* Word 0 - Little Endian */
        uint64_t cmd_aad               : 1;  /**< [  0:  0](R/W) Additional Authentication Data (AAD) present in the input
                                                                 data. */
        uint64_t reserved_1_63         : 63;
#endif /* Word 0 - End */
    } s;
    struct cavm_pemsecx_rx_cmd_aad_cn
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_32_63        : 32;
        uint64_t reserved_1_31         : 31;
        uint64_t cmd_aad               : 1;  /**< [  0:  0](R/W) Additional Authentication Data (AAD) present in the input
                                                                 data. */
#else /* Word 0 - Little Endian */
        uint64_t cmd_aad               : 1;  /**< [  0:  0](R/W) Additional Authentication Data (AAD) present in the input
                                                                 data. */
        uint64_t reserved_1_31         : 31;
        uint64_t reserved_32_63        : 32;
#endif /* Word 0 - End */
    } cn;
};
typedef union cavm_pemsecx_rx_cmd_aad cavm_pemsecx_rx_cmd_aad_t;

static inline uint64_t CAVM_PEMSECX_RX_CMD_AAD(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_PEMSECX_RX_CMD_AAD(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CN20KA) && (a<=5))
        return 0xc2c000005810ll + 0x100000000ll * ((a) & 0x7);
    __cavm_csr_fatal("PEMSECX_RX_CMD_AAD", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_PEMSECX_RX_CMD_AAD(a) cavm_pemsecx_rx_cmd_aad_t
#define bustype_CAVM_PEMSECX_RX_CMD_AAD(a) CSR_TYPE_ARF
#define basename_CAVM_PEMSECX_RX_CMD_AAD(a) "PEMSECX_RX_CMD_AAD"
#define device_bar_CAVM_PEMSECX_RX_CMD_AAD(a) 0x0 /* PF_BAR0 */
#define busnum_CAVM_PEMSECX_RX_CMD_AAD(a) (a)
#define arguments_CAVM_PEMSECX_RX_CMD_AAD(a) (a),-1,-1,-1

/**
 * Register (ARF) pemsec#_rx_cmd_aad_size
 *
 * RX FIPS Command - CMD AAD SIZE Register
 * This register is for testing the IDE encryption logic per the
 * FIPS-197 AES standard.
 *
 * This register is only accessible when
 * PEMSEC_BLK_IDE_CTL[IDE_TEST_ENABLE] is set to 1.
 * Accesses to this register when
 * PEMSEC_BLK_IDE_CTL[IDE_TEST_ENABLE] is set to 0 will return
 * an error.
 */
union cavm_pemsecx_rx_cmd_aad_size
{
    uint64_t u;
    struct cavm_pemsecx_rx_cmd_aad_size_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_6_63         : 58;
        uint64_t cmd_aad_size          : 6;  /**< [  5:  0](R/W) Byte mask of the Additional Authentication Data (AAD) in the
                                                                 input data. */
#else /* Word 0 - Little Endian */
        uint64_t cmd_aad_size          : 6;  /**< [  5:  0](R/W) Byte mask of the Additional Authentication Data (AAD) in the
                                                                 input data. */
        uint64_t reserved_6_63         : 58;
#endif /* Word 0 - End */
    } s;
    struct cavm_pemsecx_rx_cmd_aad_size_cn
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_32_63        : 32;
        uint64_t reserved_6_31         : 26;
        uint64_t cmd_aad_size          : 6;  /**< [  5:  0](R/W) Byte mask of the Additional Authentication Data (AAD) in the
                                                                 input data. */
#else /* Word 0 - Little Endian */
        uint64_t cmd_aad_size          : 6;  /**< [  5:  0](R/W) Byte mask of the Additional Authentication Data (AAD) in the
                                                                 input data. */
        uint64_t reserved_6_31         : 26;
        uint64_t reserved_32_63        : 32;
#endif /* Word 0 - End */
    } cn;
};
typedef union cavm_pemsecx_rx_cmd_aad_size cavm_pemsecx_rx_cmd_aad_size_t;

static inline uint64_t CAVM_PEMSECX_RX_CMD_AAD_SIZE(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_PEMSECX_RX_CMD_AAD_SIZE(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CN20KA) && (a<=5))
        return 0xc2c000005848ll + 0x100000000ll * ((a) & 0x7);
    __cavm_csr_fatal("PEMSECX_RX_CMD_AAD_SIZE", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_PEMSECX_RX_CMD_AAD_SIZE(a) cavm_pemsecx_rx_cmd_aad_size_t
#define bustype_CAVM_PEMSECX_RX_CMD_AAD_SIZE(a) CSR_TYPE_ARF
#define basename_CAVM_PEMSECX_RX_CMD_AAD_SIZE(a) "PEMSECX_RX_CMD_AAD_SIZE"
#define device_bar_CAVM_PEMSECX_RX_CMD_AAD_SIZE(a) 0x0 /* PF_BAR0 */
#define busnum_CAVM_PEMSECX_RX_CMD_AAD_SIZE(a) (a)
#define arguments_CAVM_PEMSECX_RX_CMD_AAD_SIZE(a) (a),-1,-1,-1

/**
 * Register (ARF) pemsec#_rx_cmd_ctx
 *
 * RX FIPS Command - CTX Register
 * This register is for testing the IDE encryption logic per the
 * FIPS-197 AES standard.
 *
 * This register is only accessible when
 * PEMSEC_BLK_IDE_CTL[IDE_TEST_ENABLE] is set to 1.
 * Accesses to this register when
 * PEMSEC_BLK_IDE_CTL[IDE_TEST_ENABLE] is set to 0 will return
 * an error.
 */
union cavm_pemsecx_rx_cmd_ctx
{
    uint64_t u;
    struct cavm_pemsecx_rx_cmd_ctx_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_4_63         : 60;
        uint64_t cmd_ctx               : 4;  /**< [  3:  0](R/W) Command context index. */
#else /* Word 0 - Little Endian */
        uint64_t cmd_ctx               : 4;  /**< [  3:  0](R/W) Command context index. */
        uint64_t reserved_4_63         : 60;
#endif /* Word 0 - End */
    } s;
    struct cavm_pemsecx_rx_cmd_ctx_cn
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_32_63        : 32;
        uint64_t reserved_4_31         : 28;
        uint64_t cmd_ctx               : 4;  /**< [  3:  0](R/W) Command context index. */
#else /* Word 0 - Little Endian */
        uint64_t cmd_ctx               : 4;  /**< [  3:  0](R/W) Command context index. */
        uint64_t reserved_4_31         : 28;
        uint64_t reserved_32_63        : 32;
#endif /* Word 0 - End */
    } cn;
};
typedef union cavm_pemsecx_rx_cmd_ctx cavm_pemsecx_rx_cmd_ctx_t;

static inline uint64_t CAVM_PEMSECX_RX_CMD_CTX(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_PEMSECX_RX_CMD_CTX(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CN20KA) && (a<=5))
        return 0xc2c000005858ll + 0x100000000ll * ((a) & 0x7);
    __cavm_csr_fatal("PEMSECX_RX_CMD_CTX", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_PEMSECX_RX_CMD_CTX(a) cavm_pemsecx_rx_cmd_ctx_t
#define bustype_CAVM_PEMSECX_RX_CMD_CTX(a) CSR_TYPE_ARF
#define basename_CAVM_PEMSECX_RX_CMD_CTX(a) "PEMSECX_RX_CMD_CTX"
#define device_bar_CAVM_PEMSECX_RX_CMD_CTX(a) 0x0 /* PF_BAR0 */
#define busnum_CAVM_PEMSECX_RX_CMD_CTX(a) (a)
#define arguments_CAVM_PEMSECX_RX_CMD_CTX(a) (a),-1,-1,-1

/**
 * Register (ARF) pemsec#_rx_cmd_eop
 *
 * RX FIPS Command - CMD EOP Register
 * This register is for testing the IDE encryption logic per the
 * FIPS-197 AES standard.
 *
 * This register is only accessible when
 * PEMSEC_BLK_IDE_CTL[IDE_TEST_ENABLE] is set to 1.
 * Accesses to this register when
 * PEMSEC_BLK_IDE_CTL[IDE_TEST_ENABLE] is set to 0 will return
 * an error.
 */
union cavm_pemsecx_rx_cmd_eop
{
    uint64_t u;
    struct cavm_pemsecx_rx_cmd_eop_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_1_63         : 63;
        uint64_t cmd_eop               : 1;  /**< [  0:  0](R/W) Ends a counter stream. */
#else /* Word 0 - Little Endian */
        uint64_t cmd_eop               : 1;  /**< [  0:  0](R/W) Ends a counter stream. */
        uint64_t reserved_1_63         : 63;
#endif /* Word 0 - End */
    } s;
    struct cavm_pemsecx_rx_cmd_eop_cn
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_32_63        : 32;
        uint64_t reserved_1_31         : 31;
        uint64_t cmd_eop               : 1;  /**< [  0:  0](R/W) Ends a counter stream. */
#else /* Word 0 - Little Endian */
        uint64_t cmd_eop               : 1;  /**< [  0:  0](R/W) Ends a counter stream. */
        uint64_t reserved_1_31         : 31;
        uint64_t reserved_32_63        : 32;
#endif /* Word 0 - End */
    } cn;
};
typedef union cavm_pemsecx_rx_cmd_eop cavm_pemsecx_rx_cmd_eop_t;

static inline uint64_t CAVM_PEMSECX_RX_CMD_EOP(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_PEMSECX_RX_CMD_EOP(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CN20KA) && (a<=5))
        return 0xc2c000005808ll + 0x100000000ll * ((a) & 0x7);
    __cavm_csr_fatal("PEMSECX_RX_CMD_EOP", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_PEMSECX_RX_CMD_EOP(a) cavm_pemsecx_rx_cmd_eop_t
#define bustype_CAVM_PEMSECX_RX_CMD_EOP(a) CSR_TYPE_ARF
#define basename_CAVM_PEMSECX_RX_CMD_EOP(a) "PEMSECX_RX_CMD_EOP"
#define device_bar_CAVM_PEMSECX_RX_CMD_EOP(a) 0x0 /* PF_BAR0 */
#define busnum_CAVM_PEMSECX_RX_CMD_EOP(a) (a)
#define arguments_CAVM_PEMSECX_RX_CMD_EOP(a) (a),-1,-1,-1

/**
 * Register (ARF) pemsec#_rx_cmd_msg
 *
 * RX FIPS Command - CMD MSG Register
 * This register is for testing the IDE encryption logic per the
 * FIPS-197 AES standard.
 *
 * This register is only accessible when
 * PEMSEC_BLK_IDE_CTL[IDE_TEST_ENABLE] is set to 1.
 * Accesses to this register when
 * PEMSEC_BLK_IDE_CTL[IDE_TEST_ENABLE] is set to 0 will return
 * an error.
 */
union cavm_pemsecx_rx_cmd_msg
{
    uint64_t u;
    struct cavm_pemsecx_rx_cmd_msg_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_1_63         : 63;
        uint64_t cmd_msg               : 1;  /**< [  0:  0](R/W) Message (MSG) present in the input data. */
#else /* Word 0 - Little Endian */
        uint64_t cmd_msg               : 1;  /**< [  0:  0](R/W) Message (MSG) present in the input data. */
        uint64_t reserved_1_63         : 63;
#endif /* Word 0 - End */
    } s;
    struct cavm_pemsecx_rx_cmd_msg_cn
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_32_63        : 32;
        uint64_t reserved_1_31         : 31;
        uint64_t cmd_msg               : 1;  /**< [  0:  0](R/W) Message (MSG) present in the input data. */
#else /* Word 0 - Little Endian */
        uint64_t cmd_msg               : 1;  /**< [  0:  0](R/W) Message (MSG) present in the input data. */
        uint64_t reserved_1_31         : 31;
        uint64_t reserved_32_63        : 32;
#endif /* Word 0 - End */
    } cn;
};
typedef union cavm_pemsecx_rx_cmd_msg cavm_pemsecx_rx_cmd_msg_t;

static inline uint64_t CAVM_PEMSECX_RX_CMD_MSG(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_PEMSECX_RX_CMD_MSG(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CN20KA) && (a<=5))
        return 0xc2c000005818ll + 0x100000000ll * ((a) & 0x7);
    __cavm_csr_fatal("PEMSECX_RX_CMD_MSG", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_PEMSECX_RX_CMD_MSG(a) cavm_pemsecx_rx_cmd_msg_t
#define bustype_CAVM_PEMSECX_RX_CMD_MSG(a) CSR_TYPE_ARF
#define basename_CAVM_PEMSECX_RX_CMD_MSG(a) "PEMSECX_RX_CMD_MSG"
#define device_bar_CAVM_PEMSECX_RX_CMD_MSG(a) 0x0 /* PF_BAR0 */
#define busnum_CAVM_PEMSECX_RX_CMD_MSG(a) (a)
#define arguments_CAVM_PEMSECX_RX_CMD_MSG(a) (a),-1,-1,-1

/**
 * Register (ARF) pemsec#_rx_cmd_msg_size
 *
 * RX FIPS Command - CMD MSG SIZE Register
 * This register is for testing the IDE encryption logic per the
 * FIPS-197 AES standard.
 *
 * This register is only accessible when
 * PEMSEC_BLK_IDE_CTL[IDE_TEST_ENABLE] is set to 1.
 * Accesses to this register when
 * PEMSEC_BLK_IDE_CTL[IDE_TEST_ENABLE] is set to 0 will return
 * an error.
 */
union cavm_pemsecx_rx_cmd_msg_size
{
    uint64_t u;
    struct cavm_pemsecx_rx_cmd_msg_size_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_7_63         : 57;
        uint64_t cmd_msg_size          : 7;  /**< [  6:  0](R/W) Byte mask of the message (MSG) in the MAC input data. */
#else /* Word 0 - Little Endian */
        uint64_t cmd_msg_size          : 7;  /**< [  6:  0](R/W) Byte mask of the message (MSG) in the MAC input data. */
        uint64_t reserved_7_63         : 57;
#endif /* Word 0 - End */
    } s;
    struct cavm_pemsecx_rx_cmd_msg_size_cn
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_32_63        : 32;
        uint64_t reserved_7_31         : 25;
        uint64_t cmd_msg_size          : 7;  /**< [  6:  0](R/W) Byte mask of the message (MSG) in the MAC input data. */
#else /* Word 0 - Little Endian */
        uint64_t cmd_msg_size          : 7;  /**< [  6:  0](R/W) Byte mask of the message (MSG) in the MAC input data. */
        uint64_t reserved_7_31         : 25;
        uint64_t reserved_32_63        : 32;
#endif /* Word 0 - End */
    } cn;
};
typedef union cavm_pemsecx_rx_cmd_msg_size cavm_pemsecx_rx_cmd_msg_size_t;

static inline uint64_t CAVM_PEMSECX_RX_CMD_MSG_SIZE(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_PEMSECX_RX_CMD_MSG_SIZE(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CN20KA) && (a<=5))
        return 0xc2c000005850ll + 0x100000000ll * ((a) & 0x7);
    __cavm_csr_fatal("PEMSECX_RX_CMD_MSG_SIZE", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_PEMSECX_RX_CMD_MSG_SIZE(a) cavm_pemsecx_rx_cmd_msg_size_t
#define bustype_CAVM_PEMSECX_RX_CMD_MSG_SIZE(a) CSR_TYPE_ARF
#define basename_CAVM_PEMSECX_RX_CMD_MSG_SIZE(a) "PEMSECX_RX_CMD_MSG_SIZE"
#define device_bar_CAVM_PEMSECX_RX_CMD_MSG_SIZE(a) 0x0 /* PF_BAR0 */
#define busnum_CAVM_PEMSECX_RX_CMD_MSG_SIZE(a) (a)
#define arguments_CAVM_PEMSECX_RX_CMD_MSG_SIZE(a) (a),-1,-1,-1

/**
 * Register (ARF) pemsec#_rx_cmd_ready
 *
 * RX FIPS Command - CMD Ready Register
 * This register is for testing the IDE encryption logic per the
 * FIPS-197 AES standard.
 *
 * This register is only accessible when
 * PEMSEC_BLK_IDE_CTL[IDE_TEST_ENABLE] is set to 1.
 * Accesses to this register when
 * PEMSEC_BLK_IDE_CTL[IDE_TEST_ENABLE] is set to 0 will return
 * an error.
 */
union cavm_pemsecx_rx_cmd_ready
{
    uint64_t u;
    struct cavm_pemsecx_rx_cmd_ready_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_1_63         : 63;
        uint64_t cmd_ready             : 1;  /**< [  0:  0](RO/H) AXI like valid/ready handshake. */
#else /* Word 0 - Little Endian */
        uint64_t cmd_ready             : 1;  /**< [  0:  0](RO/H) AXI like valid/ready handshake. */
        uint64_t reserved_1_63         : 63;
#endif /* Word 0 - End */
    } s;
    struct cavm_pemsecx_rx_cmd_ready_cn
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_32_63        : 32;
        uint64_t reserved_1_31         : 31;
        uint64_t cmd_ready             : 1;  /**< [  0:  0](RO/H) AXI like valid/ready handshake. */
#else /* Word 0 - Little Endian */
        uint64_t cmd_ready             : 1;  /**< [  0:  0](RO/H) AXI like valid/ready handshake. */
        uint64_t reserved_1_31         : 31;
        uint64_t reserved_32_63        : 32;
#endif /* Word 0 - End */
    } cn;
};
typedef union cavm_pemsecx_rx_cmd_ready cavm_pemsecx_rx_cmd_ready_t;

static inline uint64_t CAVM_PEMSECX_RX_CMD_READY(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_PEMSECX_RX_CMD_READY(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CN20KA) && (a<=5))
        return 0xc2c000005868ll + 0x100000000ll * ((a) & 0x7);
    __cavm_csr_fatal("PEMSECX_RX_CMD_READY", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_PEMSECX_RX_CMD_READY(a) cavm_pemsecx_rx_cmd_ready_t
#define bustype_CAVM_PEMSECX_RX_CMD_READY(a) CSR_TYPE_ARF
#define basename_CAVM_PEMSECX_RX_CMD_READY(a) "PEMSECX_RX_CMD_READY"
#define device_bar_CAVM_PEMSECX_RX_CMD_READY(a) 0x0 /* PF_BAR0 */
#define busnum_CAVM_PEMSECX_RX_CMD_READY(a) (a)
#define arguments_CAVM_PEMSECX_RX_CMD_READY(a) (a),-1,-1,-1

/**
 * Register (ARF) pemsec#_rx_cmd_sop
 *
 * RX FIPS Command - CMD SOP Register
 * This register is for testing the IDE encryption logic per the
 * FIPS-197 AES standard.
 *
 * This register is only accessible when
 * PEMSEC_BLK_IDE_CTL[IDE_TEST_ENABLE] is set to 1.
 * Accesses to this register when
 * PEMSEC_BLK_IDE_CTL[IDE_TEST_ENABLE] is set to 0 will return
 * an error.
 */
union cavm_pemsecx_rx_cmd_sop
{
    uint64_t u;
    struct cavm_pemsecx_rx_cmd_sop_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_1_63         : 63;
        uint64_t cmd_sop               : 1;  /**< [  0:  0](R/W) Starts a new counter stream. */
#else /* Word 0 - Little Endian */
        uint64_t cmd_sop               : 1;  /**< [  0:  0](R/W) Starts a new counter stream. */
        uint64_t reserved_1_63         : 63;
#endif /* Word 0 - End */
    } s;
    struct cavm_pemsecx_rx_cmd_sop_cn
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_32_63        : 32;
        uint64_t reserved_1_31         : 31;
        uint64_t cmd_sop               : 1;  /**< [  0:  0](R/W) Starts a new counter stream. */
#else /* Word 0 - Little Endian */
        uint64_t cmd_sop               : 1;  /**< [  0:  0](R/W) Starts a new counter stream. */
        uint64_t reserved_1_31         : 31;
        uint64_t reserved_32_63        : 32;
#endif /* Word 0 - End */
    } cn;
};
typedef union cavm_pemsecx_rx_cmd_sop cavm_pemsecx_rx_cmd_sop_t;

static inline uint64_t CAVM_PEMSECX_RX_CMD_SOP(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_PEMSECX_RX_CMD_SOP(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CN20KA) && (a<=5))
        return 0xc2c000005800ll + 0x100000000ll * ((a) & 0x7);
    __cavm_csr_fatal("PEMSECX_RX_CMD_SOP", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_PEMSECX_RX_CMD_SOP(a) cavm_pemsecx_rx_cmd_sop_t
#define bustype_CAVM_PEMSECX_RX_CMD_SOP(a) CSR_TYPE_ARF
#define basename_CAVM_PEMSECX_RX_CMD_SOP(a) "PEMSECX_RX_CMD_SOP"
#define device_bar_CAVM_PEMSECX_RX_CMD_SOP(a) 0x0 /* PF_BAR0 */
#define busnum_CAVM_PEMSECX_RX_CMD_SOP(a) (a)
#define arguments_CAVM_PEMSECX_RX_CMD_SOP(a) (a),-1,-1,-1

/**
 * Register (ARF) pemsec#_rx_cmd_valid
 *
 * RX FIPS Command - CMD Valid Register
 * This register is for testing the IDE encryption logic per the
 * FIPS-197 AES standard.
 *
 * This register is only accessible when
 * PEMSEC_BLK_IDE_CTL[IDE_TEST_ENABLE] is set to 1.
 * Accesses to this register when
 * PEMSEC_BLK_IDE_CTL[IDE_TEST_ENABLE] is set to 0 will return
 * an error.
 */
union cavm_pemsecx_rx_cmd_valid
{
    uint64_t u;
    struct cavm_pemsecx_rx_cmd_valid_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_1_63         : 63;
        uint64_t cmd_valid             : 1;  /**< [  0:  0](R/W) AXI like valid/ready handshake. */
#else /* Word 0 - Little Endian */
        uint64_t cmd_valid             : 1;  /**< [  0:  0](R/W) AXI like valid/ready handshake. */
        uint64_t reserved_1_63         : 63;
#endif /* Word 0 - End */
    } s;
    struct cavm_pemsecx_rx_cmd_valid_cn
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_32_63        : 32;
        uint64_t reserved_1_31         : 31;
        uint64_t cmd_valid             : 1;  /**< [  0:  0](R/W) AXI like valid/ready handshake. */
#else /* Word 0 - Little Endian */
        uint64_t cmd_valid             : 1;  /**< [  0:  0](R/W) AXI like valid/ready handshake. */
        uint64_t reserved_1_31         : 31;
        uint64_t reserved_32_63        : 32;
#endif /* Word 0 - End */
    } cn;
};
typedef union cavm_pemsecx_rx_cmd_valid cavm_pemsecx_rx_cmd_valid_t;

static inline uint64_t CAVM_PEMSECX_RX_CMD_VALID(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_PEMSECX_RX_CMD_VALID(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CN20KA) && (a<=5))
        return 0xc2c000005860ll + 0x100000000ll * ((a) & 0x7);
    __cavm_csr_fatal("PEMSECX_RX_CMD_VALID", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_PEMSECX_RX_CMD_VALID(a) cavm_pemsecx_rx_cmd_valid_t
#define bustype_CAVM_PEMSECX_RX_CMD_VALID(a) CSR_TYPE_ARF
#define basename_CAVM_PEMSECX_RX_CMD_VALID(a) "PEMSECX_RX_CMD_VALID"
#define device_bar_CAVM_PEMSECX_RX_CMD_VALID(a) 0x0 /* PF_BAR0 */
#define busnum_CAVM_PEMSECX_RX_CMD_VALID(a) (a)
#define arguments_CAVM_PEMSECX_RX_CMD_VALID(a) (a),-1,-1,-1

/**
 * Register (ARF) pemsec#_rx_core_ver_num
 *
 * IP Version Number Register
 */
union cavm_pemsecx_rx_core_ver_num
{
    uint64_t u;
    struct cavm_pemsecx_rx_core_ver_num_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_16_63        : 48;
        uint64_t version_num           : 16; /**< [ 15:  0](RO) Indicates the IDE corekit release version number. */
#else /* Word 0 - Little Endian */
        uint64_t version_num           : 16; /**< [ 15:  0](RO) Indicates the IDE corekit release version number. */
        uint64_t reserved_16_63        : 48;
#endif /* Word 0 - End */
    } s;
    struct cavm_pemsecx_rx_core_ver_num_cn
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_32_63        : 32;
        uint64_t reserved_16_31        : 16;
        uint64_t version_num           : 16; /**< [ 15:  0](RO) Indicates the IDE corekit release version number. */
#else /* Word 0 - Little Endian */
        uint64_t version_num           : 16; /**< [ 15:  0](RO) Indicates the IDE corekit release version number. */
        uint64_t reserved_16_31        : 16;
        uint64_t reserved_32_63        : 32;
#endif /* Word 0 - End */
    } cn;
};
typedef union cavm_pemsecx_rx_core_ver_num cavm_pemsecx_rx_core_ver_num_t;

static inline uint64_t CAVM_PEMSECX_RX_CORE_VER_NUM(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_PEMSECX_RX_CORE_VER_NUM(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CN20KA) && (a<=5))
        return 0xc2c000005000ll + 0x100000000ll * ((a) & 0x7);
    __cavm_csr_fatal("PEMSECX_RX_CORE_VER_NUM", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_PEMSECX_RX_CORE_VER_NUM(a) cavm_pemsecx_rx_core_ver_num_t
#define bustype_CAVM_PEMSECX_RX_CORE_VER_NUM(a) CSR_TYPE_ARF
#define basename_CAVM_PEMSECX_RX_CORE_VER_NUM(a) "PEMSECX_RX_CORE_VER_NUM"
#define device_bar_CAVM_PEMSECX_RX_CORE_VER_NUM(a) 0x0 /* PF_BAR0 */
#define busnum_CAVM_PEMSECX_RX_CORE_VER_NUM(a) (a)
#define arguments_CAVM_PEMSECX_RX_CORE_VER_NUM(a) (a),-1,-1,-1

/**
 * Register (ARF) pemsec#_rx_core_ver_type
 *
 * RX IP Version Type Register
 */
union cavm_pemsecx_rx_core_ver_type
{
    uint64_t u;
    struct cavm_pemsecx_rx_core_ver_type_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_16_63        : 48;
        uint64_t type_enum             : 4;  /**< [ 15: 12](RO) Corekit release type. */
        uint64_t pkg_num               : 4;  /**< [ 11:  8](RO) Corekit package number. */
        uint64_t type_num              : 8;  /**< [  7:  0](RO) Corekit version type number. */
#else /* Word 0 - Little Endian */
        uint64_t type_num              : 8;  /**< [  7:  0](RO) Corekit version type number. */
        uint64_t pkg_num               : 4;  /**< [ 11:  8](RO) Corekit package number. */
        uint64_t type_enum             : 4;  /**< [ 15: 12](RO) Corekit release type. */
        uint64_t reserved_16_63        : 48;
#endif /* Word 0 - End */
    } s;
    struct cavm_pemsecx_rx_core_ver_type_cn
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_32_63        : 32;
        uint64_t reserved_16_31        : 16;
        uint64_t type_enum             : 4;  /**< [ 15: 12](RO) Corekit release type. */
        uint64_t pkg_num               : 4;  /**< [ 11:  8](RO) Corekit package number. */
        uint64_t type_num              : 8;  /**< [  7:  0](RO) Corekit version type number. */
#else /* Word 0 - Little Endian */
        uint64_t type_num              : 8;  /**< [  7:  0](RO) Corekit version type number. */
        uint64_t pkg_num               : 4;  /**< [ 11:  8](RO) Corekit package number. */
        uint64_t type_enum             : 4;  /**< [ 15: 12](RO) Corekit release type. */
        uint64_t reserved_16_31        : 16;
        uint64_t reserved_32_63        : 32;
#endif /* Word 0 - End */
    } cn;
};
typedef union cavm_pemsecx_rx_core_ver_type cavm_pemsecx_rx_core_ver_type_t;

static inline uint64_t CAVM_PEMSECX_RX_CORE_VER_TYPE(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_PEMSECX_RX_CORE_VER_TYPE(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CN20KA) && (a<=5))
        return 0xc2c000005008ll + 0x100000000ll * ((a) & 0x7);
    __cavm_csr_fatal("PEMSECX_RX_CORE_VER_TYPE", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_PEMSECX_RX_CORE_VER_TYPE(a) cavm_pemsecx_rx_core_ver_type_t
#define bustype_CAVM_PEMSECX_RX_CORE_VER_TYPE(a) CSR_TYPE_ARF
#define basename_CAVM_PEMSECX_RX_CORE_VER_TYPE(a) "PEMSECX_RX_CORE_VER_TYPE"
#define device_bar_CAVM_PEMSECX_RX_CORE_VER_TYPE(a) 0x0 /* PF_BAR0 */
#define busnum_CAVM_PEMSECX_RX_CORE_VER_TYPE(a) (a)
#define arguments_CAVM_PEMSECX_RX_CORE_VER_TYPE(a) (a),-1,-1,-1

/**
 * Register (ARF) pemsec#_rx_ctr_iv_chunk
 *
 * RX FIPS Command - CTR IV Chunk Register
 * This register is for testing the IDE encryption logic per the
 * FIPS-197 AES standard.
 *
 * This register is only accessible when
 * PEMSEC_BLK_IDE_CTL[IDE_TEST_ENABLE] is set to 1.
 * Accesses to this register when
 * PEMSEC_BLK_IDE_CTL[IDE_TEST_ENABLE] is set to 0 will return
 * an error.
 */
union cavm_pemsecx_rx_ctr_iv_chunk
{
    uint64_t u;
    struct cavm_pemsecx_rx_ctr_iv_chunk_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_32_63        : 32;
        uint64_t ctr_iv_chunk          : 32; /**< [ 31:  0](R/W) 32b chunk of the Initial counter value (IV). */
#else /* Word 0 - Little Endian */
        uint64_t ctr_iv_chunk          : 32; /**< [ 31:  0](R/W) 32b chunk of the Initial counter value (IV). */
        uint64_t reserved_32_63        : 32;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_pemsecx_rx_ctr_iv_chunk_s cn; */
};
typedef union cavm_pemsecx_rx_ctr_iv_chunk cavm_pemsecx_rx_ctr_iv_chunk_t;

static inline uint64_t CAVM_PEMSECX_RX_CTR_IV_CHUNK(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_PEMSECX_RX_CTR_IV_CHUNK(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CN20KA) && (a<=5))
        return 0xc2c000005828ll + 0x100000000ll * ((a) & 0x7);
    __cavm_csr_fatal("PEMSECX_RX_CTR_IV_CHUNK", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_PEMSECX_RX_CTR_IV_CHUNK(a) cavm_pemsecx_rx_ctr_iv_chunk_t
#define bustype_CAVM_PEMSECX_RX_CTR_IV_CHUNK(a) CSR_TYPE_ARF
#define basename_CAVM_PEMSECX_RX_CTR_IV_CHUNK(a) "PEMSECX_RX_CTR_IV_CHUNK"
#define device_bar_CAVM_PEMSECX_RX_CTR_IV_CHUNK(a) 0x0 /* PF_BAR0 */
#define busnum_CAVM_PEMSECX_RX_CTR_IV_CHUNK(a) (a)
#define arguments_CAVM_PEMSECX_RX_CTR_IV_CHUNK(a) (a),-1,-1,-1

/**
 * Register (ARF) pemsec#_rx_ctr_iv_idx
 *
 * RX FIPS Command - CTR IV IDX Register
 * This register is for testing the IDE encryption logic per the
 * FIPS-197 AES standard.
 *
 * This register is only accessible when
 * PEMSEC_BLK_IDE_CTL[IDE_TEST_ENABLE] is set to 1.
 * Accesses to this register when
 * PEMSEC_BLK_IDE_CTL[IDE_TEST_ENABLE] is set to 0 will return
 * an error.
 */
union cavm_pemsecx_rx_ctr_iv_idx
{
    uint64_t u;
    struct cavm_pemsecx_rx_ctr_iv_idx_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_2_63         : 62;
        uint64_t ctr_iv_idx            : 2;  /**< [  1:  0](R/W) Index of the 32b iv chunk constructing the Initial counter
                                                                 value (IV). IV is in Big Endian Byte order */
#else /* Word 0 - Little Endian */
        uint64_t ctr_iv_idx            : 2;  /**< [  1:  0](R/W) Index of the 32b iv chunk constructing the Initial counter
                                                                 value (IV). IV is in Big Endian Byte order */
        uint64_t reserved_2_63         : 62;
#endif /* Word 0 - End */
    } s;
    struct cavm_pemsecx_rx_ctr_iv_idx_cn
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_32_63        : 32;
        uint64_t reserved_2_31         : 30;
        uint64_t ctr_iv_idx            : 2;  /**< [  1:  0](R/W) Index of the 32b iv chunk constructing the Initial counter
                                                                 value (IV). IV is in Big Endian Byte order */
#else /* Word 0 - Little Endian */
        uint64_t ctr_iv_idx            : 2;  /**< [  1:  0](R/W) Index of the 32b iv chunk constructing the Initial counter
                                                                 value (IV). IV is in Big Endian Byte order */
        uint64_t reserved_2_31         : 30;
        uint64_t reserved_32_63        : 32;
#endif /* Word 0 - End */
    } cn;
};
typedef union cavm_pemsecx_rx_ctr_iv_idx cavm_pemsecx_rx_ctr_iv_idx_t;

static inline uint64_t CAVM_PEMSECX_RX_CTR_IV_IDX(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_PEMSECX_RX_CTR_IV_IDX(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CN20KA) && (a<=5))
        return 0xc2c000005820ll + 0x100000000ll * ((a) & 0x7);
    __cavm_csr_fatal("PEMSECX_RX_CTR_IV_IDX", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_PEMSECX_RX_CTR_IV_IDX(a) cavm_pemsecx_rx_ctr_iv_idx_t
#define bustype_CAVM_PEMSECX_RX_CTR_IV_IDX(a) CSR_TYPE_ARF
#define basename_CAVM_PEMSECX_RX_CTR_IV_IDX(a) "PEMSECX_RX_CTR_IV_IDX"
#define device_bar_CAVM_PEMSECX_RX_CTR_IV_IDX(a) 0x0 /* PF_BAR0 */
#define busnum_CAVM_PEMSECX_RX_CTR_IV_IDX(a) (a)
#define arguments_CAVM_PEMSECX_RX_CTR_IV_IDX(a) (a),-1,-1,-1

/**
 * Register (ARF) pemsec#_rx_ctrl
 *
 * RX Control Register
 */
union cavm_pemsecx_rx_ctrl
{
    uint64_t u;
    struct cavm_pemsecx_rx_ctrl_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_19_63        : 45;
        uint64_t encrypt               : 1;  /**< [ 18: 18](R/W) Encrypt/Decrypt selector for the key.
                                                                    0 = Decrypt.
                                                                    1 = Encrypt.

                                                                 Set [ENCRYPT] to 0 for IDE RX.
                                                                 Decrypt incoming Rx data. */
        uint64_t reserved_17           : 1;
        uint64_t key_sz                : 1;  /**< [ 16: 16](R/W) Size of the key.
                                                                    0 = 128-bit.
                                                                    1 = 256-bit.
                                                                 Set [KEY_SZ] to 1 for IDE to specify a 256-bit key. */
        uint64_t reserved_3_15         : 13;
        uint64_t ctx_idx               : 3;  /**< [  2:  0](R/W) Key context index to load the key into. */
#else /* Word 0 - Little Endian */
        uint64_t ctx_idx               : 3;  /**< [  2:  0](R/W) Key context index to load the key into. */
        uint64_t reserved_3_15         : 13;
        uint64_t key_sz                : 1;  /**< [ 16: 16](R/W) Size of the key.
                                                                    0 = 128-bit.
                                                                    1 = 256-bit.
                                                                 Set [KEY_SZ] to 1 for IDE to specify a 256-bit key. */
        uint64_t reserved_17           : 1;
        uint64_t encrypt               : 1;  /**< [ 18: 18](R/W) Encrypt/Decrypt selector for the key.
                                                                    0 = Decrypt.
                                                                    1 = Encrypt.

                                                                 Set [ENCRYPT] to 0 for IDE RX.
                                                                 Decrypt incoming Rx data. */
        uint64_t reserved_19_63        : 45;
#endif /* Word 0 - End */
    } s;
    struct cavm_pemsecx_rx_ctrl_cn
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_32_63        : 32;
        uint64_t reserved_20_31        : 12;
        uint64_t reserved_19           : 1;
        uint64_t encrypt               : 1;  /**< [ 18: 18](R/W) Encrypt/Decrypt selector for the key.
                                                                    0 = Decrypt.
                                                                    1 = Encrypt.

                                                                 Set [ENCRYPT] to 0 for IDE RX.
                                                                 Decrypt incoming Rx data. */
        uint64_t reserved_17           : 1;
        uint64_t key_sz                : 1;  /**< [ 16: 16](R/W) Size of the key.
                                                                    0 = 128-bit.
                                                                    1 = 256-bit.
                                                                 Set [KEY_SZ] to 1 for IDE to specify a 256-bit key. */
        uint64_t reserved_3_15         : 13;
        uint64_t ctx_idx               : 3;  /**< [  2:  0](R/W) Key context index to load the key into. */
#else /* Word 0 - Little Endian */
        uint64_t ctx_idx               : 3;  /**< [  2:  0](R/W) Key context index to load the key into. */
        uint64_t reserved_3_15         : 13;
        uint64_t key_sz                : 1;  /**< [ 16: 16](R/W) Size of the key.
                                                                    0 = 128-bit.
                                                                    1 = 256-bit.
                                                                 Set [KEY_SZ] to 1 for IDE to specify a 256-bit key. */
        uint64_t reserved_17           : 1;
        uint64_t encrypt               : 1;  /**< [ 18: 18](R/W) Encrypt/Decrypt selector for the key.
                                                                    0 = Decrypt.
                                                                    1 = Encrypt.

                                                                 Set [ENCRYPT] to 0 for IDE RX.
                                                                 Decrypt incoming Rx data. */
        uint64_t reserved_19           : 1;
        uint64_t reserved_20_31        : 12;
        uint64_t reserved_32_63        : 32;
#endif /* Word 0 - End */
    } cn;
};
typedef union cavm_pemsecx_rx_ctrl cavm_pemsecx_rx_ctrl_t;

static inline uint64_t CAVM_PEMSECX_RX_CTRL(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_PEMSECX_RX_CTRL(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CN20KA) && (a<=5))
        return 0xc2c000005028ll + 0x100000000ll * ((a) & 0x7);
    __cavm_csr_fatal("PEMSECX_RX_CTRL", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_PEMSECX_RX_CTRL(a) cavm_pemsecx_rx_ctrl_t
#define bustype_CAVM_PEMSECX_RX_CTRL(a) CSR_TYPE_ARF
#define basename_CAVM_PEMSECX_RX_CTRL(a) "PEMSECX_RX_CTRL"
#define device_bar_CAVM_PEMSECX_RX_CTRL(a) 0x0 /* PF_BAR0 */
#define busnum_CAVM_PEMSECX_RX_CTRL(a) (a)
#define arguments_CAVM_PEMSECX_RX_CTRL(a) (a),-1,-1,-1

/**
 * Register (ARF) pemsec#_rx_data_ready
 *
 * RX FIPS Input DATA Ready Register
 * This register is for testing the IDE encryption logic per the
 * FIPS-197 AES standard.
 *
 * This register is only accessible when
 * PEMSEC_BLK_IDE_CTL[IDE_TEST_ENABLE] is set to 1.
 * Accesses to this register when
 * PEMSEC_BLK_IDE_CTL[IDE_TEST_ENABLE] is set to 0 will return
 * an error.
 */
union cavm_pemsecx_rx_data_ready
{
    uint64_t u;
    struct cavm_pemsecx_rx_data_ready_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_1_63         : 63;
        uint64_t data_ready            : 1;  /**< [  0:  0](RO/H) AXI like valid/ready(!stall) handshake. */
#else /* Word 0 - Little Endian */
        uint64_t data_ready            : 1;  /**< [  0:  0](RO/H) AXI like valid/ready(!stall) handshake. */
        uint64_t reserved_1_63         : 63;
#endif /* Word 0 - End */
    } s;
    struct cavm_pemsecx_rx_data_ready_cn
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_32_63        : 32;
        uint64_t reserved_1_31         : 31;
        uint64_t data_ready            : 1;  /**< [  0:  0](RO/H) AXI like valid/ready(!stall) handshake. */
#else /* Word 0 - Little Endian */
        uint64_t data_ready            : 1;  /**< [  0:  0](RO/H) AXI like valid/ready(!stall) handshake. */
        uint64_t reserved_1_31         : 31;
        uint64_t reserved_32_63        : 32;
#endif /* Word 0 - End */
    } cn;
};
typedef union cavm_pemsecx_rx_data_ready cavm_pemsecx_rx_data_ready_t;

static inline uint64_t CAVM_PEMSECX_RX_DATA_READY(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_PEMSECX_RX_DATA_READY(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CN20KA) && (a<=5))
        return 0xc2c0000058b8ll + 0x100000000ll * ((a) & 0x7);
    __cavm_csr_fatal("PEMSECX_RX_DATA_READY", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_PEMSECX_RX_DATA_READY(a) cavm_pemsecx_rx_data_ready_t
#define bustype_CAVM_PEMSECX_RX_DATA_READY(a) CSR_TYPE_ARF
#define basename_CAVM_PEMSECX_RX_DATA_READY(a) "PEMSECX_RX_DATA_READY"
#define device_bar_CAVM_PEMSECX_RX_DATA_READY(a) 0x0 /* PF_BAR0 */
#define busnum_CAVM_PEMSECX_RX_DATA_READY(a) (a)
#define arguments_CAVM_PEMSECX_RX_DATA_READY(a) (a),-1,-1,-1

/**
 * Register (ARF) pemsec#_rx_data_valid
 *
 * RX FIPS Input DATA Valid Register
 * This register is for testing the IDE encryption logic per the
 * FIPS-197 AES standard.
 *
 * This register is only accessible when
 * PEMSEC_BLK_IDE_CTL[IDE_TEST_ENABLE] is set to 1.
 * Accesses to this register when
 * PEMSEC_BLK_IDE_CTL[IDE_TEST_ENABLE] is set to 0 will return
 * an error.
 */
union cavm_pemsecx_rx_data_valid
{
    uint64_t u;
    struct cavm_pemsecx_rx_data_valid_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_1_63         : 63;
        uint64_t data_valid            : 1;  /**< [  0:  0](R/W) AXI like valid/ready(!stall) handshake. */
#else /* Word 0 - Little Endian */
        uint64_t data_valid            : 1;  /**< [  0:  0](R/W) AXI like valid/ready(!stall) handshake. */
        uint64_t reserved_1_63         : 63;
#endif /* Word 0 - End */
    } s;
    struct cavm_pemsecx_rx_data_valid_cn
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_32_63        : 32;
        uint64_t reserved_1_31         : 31;
        uint64_t data_valid            : 1;  /**< [  0:  0](R/W) AXI like valid/ready(!stall) handshake. */
#else /* Word 0 - Little Endian */
        uint64_t data_valid            : 1;  /**< [  0:  0](R/W) AXI like valid/ready(!stall) handshake. */
        uint64_t reserved_1_31         : 31;
        uint64_t reserved_32_63        : 32;
#endif /* Word 0 - End */
    } cn;
};
typedef union cavm_pemsecx_rx_data_valid cavm_pemsecx_rx_data_valid_t;

static inline uint64_t CAVM_PEMSECX_RX_DATA_VALID(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_PEMSECX_RX_DATA_VALID(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CN20KA) && (a<=5))
        return 0xc2c0000058b0ll + 0x100000000ll * ((a) & 0x7);
    __cavm_csr_fatal("PEMSECX_RX_DATA_VALID", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_PEMSECX_RX_DATA_VALID(a) cavm_pemsecx_rx_data_valid_t
#define bustype_CAVM_PEMSECX_RX_DATA_VALID(a) CSR_TYPE_ARF
#define basename_CAVM_PEMSECX_RX_DATA_VALID(a) "PEMSECX_RX_DATA_VALID"
#define device_bar_CAVM_PEMSECX_RX_DATA_VALID(a) 0x0 /* PF_BAR0 */
#define busnum_CAVM_PEMSECX_RX_DATA_VALID(a) (a)
#define arguments_CAVM_PEMSECX_RX_DATA_VALID(a) (a),-1,-1,-1

/**
 * Register (ARF) pemsec#_rx_disable_stream_keys
 *
 * Invalidates the Stream Keys for RX Register
 */
union cavm_pemsecx_rx_disable_stream_keys
{
    uint64_t u;
    struct cavm_pemsecx_rx_disable_stream_keys_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_1_63         : 63;
        uint64_t disable_key_s0        : 1;  /**< [  0:  0](R/W) Setting this bit to 1 invalidates the KEY for stream 0 in the
                                                                 RX data path. */
#else /* Word 0 - Little Endian */
        uint64_t disable_key_s0        : 1;  /**< [  0:  0](R/W) Setting this bit to 1 invalidates the KEY for stream 0 in the
                                                                 RX data path. */
        uint64_t reserved_1_63         : 63;
#endif /* Word 0 - End */
    } s;
    struct cavm_pemsecx_rx_disable_stream_keys_cn
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_32_63        : 32;
        uint64_t reserved_16_31        : 16;
        uint64_t reserved_1_15         : 15;
        uint64_t disable_key_s0        : 1;  /**< [  0:  0](R/W) Setting this bit to 1 invalidates the KEY for stream 0 in the
                                                                 RX data path. */
#else /* Word 0 - Little Endian */
        uint64_t disable_key_s0        : 1;  /**< [  0:  0](R/W) Setting this bit to 1 invalidates the KEY for stream 0 in the
                                                                 RX data path. */
        uint64_t reserved_1_15         : 15;
        uint64_t reserved_16_31        : 16;
        uint64_t reserved_32_63        : 32;
#endif /* Word 0 - End */
    } cn;
};
typedef union cavm_pemsecx_rx_disable_stream_keys cavm_pemsecx_rx_disable_stream_keys_t;

static inline uint64_t CAVM_PEMSECX_RX_DISABLE_STREAM_KEYS(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_PEMSECX_RX_DISABLE_STREAM_KEYS(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CN20KA) && (a<=5))
        return 0xc2c000005380ll + 0x100000000ll * ((a) & 0x7);
    __cavm_csr_fatal("PEMSECX_RX_DISABLE_STREAM_KEYS", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_PEMSECX_RX_DISABLE_STREAM_KEYS(a) cavm_pemsecx_rx_disable_stream_keys_t
#define bustype_CAVM_PEMSECX_RX_DISABLE_STREAM_KEYS(a) CSR_TYPE_ARF
#define basename_CAVM_PEMSECX_RX_DISABLE_STREAM_KEYS(a) "PEMSECX_RX_DISABLE_STREAM_KEYS"
#define device_bar_CAVM_PEMSECX_RX_DISABLE_STREAM_KEYS(a) 0x0 /* PF_BAR0 */
#define busnum_CAVM_PEMSECX_RX_DISABLE_STREAM_KEYS(a) (a)
#define arguments_CAVM_PEMSECX_RX_DISABLE_STREAM_KEYS(a) (a),-1,-1,-1

/**
 * Register (ARF) pemsec#_rx_in_data
 *
 * RX FIPS Input DATA Register
 * This register is for testing the IDE encryption logic per the
 * FIPS-197 AES standard.
 *
 * This register is only accessible when
 * PEMSEC_BLK_IDE_CTL[IDE_TEST_ENABLE] is set to 1.
 * Accesses to this register when
 * PEMSEC_BLK_IDE_CTL[IDE_TEST_ENABLE] is set to 0 will return
 * an error.
 */
union cavm_pemsecx_rx_in_data
{
    uint64_t u;
    struct cavm_pemsecx_rx_in_data_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_32_63        : 32;
        uint64_t in_data               : 32; /**< [ 31:  0](R/W) 32b chunk of the word to process. A partial word must be left
                                                                 justified on the signal. */
#else /* Word 0 - Little Endian */
        uint64_t in_data               : 32; /**< [ 31:  0](R/W) 32b chunk of the word to process. A partial word must be left
                                                                 justified on the signal. */
        uint64_t reserved_32_63        : 32;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_pemsecx_rx_in_data_s cn; */
};
typedef union cavm_pemsecx_rx_in_data cavm_pemsecx_rx_in_data_t;

static inline uint64_t CAVM_PEMSECX_RX_IN_DATA(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_PEMSECX_RX_IN_DATA(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CN20KA) && (a<=5))
        return 0xc2c0000058a8ll + 0x100000000ll * ((a) & 0x7);
    __cavm_csr_fatal("PEMSECX_RX_IN_DATA", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_PEMSECX_RX_IN_DATA(a) cavm_pemsecx_rx_in_data_t
#define bustype_CAVM_PEMSECX_RX_IN_DATA(a) CSR_TYPE_ARF
#define basename_CAVM_PEMSECX_RX_IN_DATA(a) "PEMSECX_RX_IN_DATA"
#define device_bar_CAVM_PEMSECX_RX_IN_DATA(a) 0x0 /* PF_BAR0 */
#define busnum_CAVM_PEMSECX_RX_IN_DATA(a) (a)
#define arguments_CAVM_PEMSECX_RX_IN_DATA(a) (a),-1,-1,-1

/**
 * Register (ARF) pemsec#_rx_in_data_idx
 *
 * RX FIPS Input DATA IDX Register
 * This register is for testing the IDE encryption logic per the
 * FIPS-197 AES standard.
 *
 * This register is only accessible when
 * PEMSEC_BLK_IDE_CTL[IDE_TEST_ENABLE] is set to 1.
 * Accesses to this register when
 * PEMSEC_BLK_IDE_CTL[IDE_TEST_ENABLE] is set to 0 will return
 * an error.
 */
union cavm_pemsecx_rx_in_data_idx
{
    uint64_t u;
    struct cavm_pemsecx_rx_in_data_idx_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_5_63         : 59;
        uint64_t in_data_idx           : 5;  /**< [  4:  0](R/W) Index of the 32b data chunk constructing the word to
                                                                 process. */
#else /* Word 0 - Little Endian */
        uint64_t in_data_idx           : 5;  /**< [  4:  0](R/W) Index of the 32b data chunk constructing the word to
                                                                 process. */
        uint64_t reserved_5_63         : 59;
#endif /* Word 0 - End */
    } s;
    struct cavm_pemsecx_rx_in_data_idx_cn
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_32_63        : 32;
        uint64_t reserved_5_31         : 27;
        uint64_t in_data_idx           : 5;  /**< [  4:  0](R/W) Index of the 32b data chunk constructing the word to
                                                                 process. */
#else /* Word 0 - Little Endian */
        uint64_t in_data_idx           : 5;  /**< [  4:  0](R/W) Index of the 32b data chunk constructing the word to
                                                                 process. */
        uint64_t reserved_5_31         : 27;
        uint64_t reserved_32_63        : 32;
#endif /* Word 0 - End */
    } cn;
};
typedef union cavm_pemsecx_rx_in_data_idx cavm_pemsecx_rx_in_data_idx_t;

static inline uint64_t CAVM_PEMSECX_RX_IN_DATA_IDX(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_PEMSECX_RX_IN_DATA_IDX(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CN20KA) && (a<=5))
        return 0xc2c0000058a0ll + 0x100000000ll * ((a) & 0x7);
    __cavm_csr_fatal("PEMSECX_RX_IN_DATA_IDX", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_PEMSECX_RX_IN_DATA_IDX(a) cavm_pemsecx_rx_in_data_idx_t
#define bustype_CAVM_PEMSECX_RX_IN_DATA_IDX(a) CSR_TYPE_ARF
#define basename_CAVM_PEMSECX_RX_IN_DATA_IDX(a) "PEMSECX_RX_IN_DATA_IDX"
#define device_bar_CAVM_PEMSECX_RX_IN_DATA_IDX(a) 0x0 /* PF_BAR0 */
#define busnum_CAVM_PEMSECX_RX_IN_DATA_IDX(a) (a)
#define arguments_CAVM_PEMSECX_RX_IN_DATA_IDX(a) (a),-1,-1,-1

/**
 * Register (ARF) pemsec#_rx_initial_iv_lsw
 *
 * RX Initial IV configuration value Low Register
 */
union cavm_pemsecx_rx_initial_iv_lsw
{
    uint64_t u;
    struct cavm_pemsecx_rx_initial_iv_lsw_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_32_63        : 32;
        uint64_t initial_iv_lsw        : 32; /**< [ 31:  0](WO/H) Initial IV configuration value (least-significant word)
                                                                 Configures the LSW value of the Initial IV for the
                                                                 CTRL.CTX_IDX context index
                                                                 Update of internal IV value is only effective when the
                                                                 CTRL register is written. */
#else /* Word 0 - Little Endian */
        uint64_t initial_iv_lsw        : 32; /**< [ 31:  0](WO/H) Initial IV configuration value (least-significant word)
                                                                 Configures the LSW value of the Initial IV for the
                                                                 CTRL.CTX_IDX context index
                                                                 Update of internal IV value is only effective when the
                                                                 CTRL register is written. */
        uint64_t reserved_32_63        : 32;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_pemsecx_rx_initial_iv_lsw_s cn; */
};
typedef union cavm_pemsecx_rx_initial_iv_lsw cavm_pemsecx_rx_initial_iv_lsw_t;

static inline uint64_t CAVM_PEMSECX_RX_INITIAL_IV_LSW(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_PEMSECX_RX_INITIAL_IV_LSW(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CN20KA) && (a<=5))
        return 0xc2c000005080ll + 0x100000000ll * ((a) & 0x7);
    __cavm_csr_fatal("PEMSECX_RX_INITIAL_IV_LSW", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_PEMSECX_RX_INITIAL_IV_LSW(a) cavm_pemsecx_rx_initial_iv_lsw_t
#define bustype_CAVM_PEMSECX_RX_INITIAL_IV_LSW(a) CSR_TYPE_ARF
#define basename_CAVM_PEMSECX_RX_INITIAL_IV_LSW(a) "PEMSECX_RX_INITIAL_IV_LSW"
#define device_bar_CAVM_PEMSECX_RX_INITIAL_IV_LSW(a) 0x0 /* PF_BAR0 */
#define busnum_CAVM_PEMSECX_RX_INITIAL_IV_LSW(a) (a)
#define arguments_CAVM_PEMSECX_RX_INITIAL_IV_LSW(a) (a),-1,-1,-1

/**
 * Register (ARF) pemsec#_rx_initial_iv_msw
 *
 * RX Initial IV configuration value Hi Register
 */
union cavm_pemsecx_rx_initial_iv_msw
{
    uint64_t u;
    struct cavm_pemsecx_rx_initial_iv_msw_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_32_63        : 32;
        uint64_t initial_iv_msw        : 32; /**< [ 31:  0](WO/H) Initial IV configuration value most-significant word
                                                                 Configures the MSW value of the Initial IV for the
                                                                 CTRL.CTX_IDX context index
                                                                 Update of internal IV value is only effective when the
                                                                 CTRL register is written. */
#else /* Word 0 - Little Endian */
        uint64_t initial_iv_msw        : 32; /**< [ 31:  0](WO/H) Initial IV configuration value most-significant word
                                                                 Configures the MSW value of the Initial IV for the
                                                                 CTRL.CTX_IDX context index
                                                                 Update of internal IV value is only effective when the
                                                                 CTRL register is written. */
        uint64_t reserved_32_63        : 32;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_pemsecx_rx_initial_iv_msw_s cn; */
};
typedef union cavm_pemsecx_rx_initial_iv_msw cavm_pemsecx_rx_initial_iv_msw_t;

static inline uint64_t CAVM_PEMSECX_RX_INITIAL_IV_MSW(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_PEMSECX_RX_INITIAL_IV_MSW(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CN20KA) && (a<=5))
        return 0xc2c000005088ll + 0x100000000ll * ((a) & 0x7);
    __cavm_csr_fatal("PEMSECX_RX_INITIAL_IV_MSW", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_PEMSECX_RX_INITIAL_IV_MSW(a) cavm_pemsecx_rx_initial_iv_msw_t
#define bustype_CAVM_PEMSECX_RX_INITIAL_IV_MSW(a) CSR_TYPE_ARF
#define basename_CAVM_PEMSECX_RX_INITIAL_IV_MSW(a) "PEMSECX_RX_INITIAL_IV_MSW"
#define device_bar_CAVM_PEMSECX_RX_INITIAL_IV_MSW(a) 0x0 /* PF_BAR0 */
#define busnum_CAVM_PEMSECX_RX_INITIAL_IV_MSW(a) (a)
#define arguments_CAVM_PEMSECX_RX_INITIAL_IV_MSW(a) (a),-1,-1,-1

/**
 * Register (ARF) pemsec#_rx_irq_en
 *
 * RX Interrupt Enable Register
 */
union cavm_pemsecx_rx_irq_en
{
    uint64_t u;
    struct cavm_pemsecx_rx_irq_en_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_32_63        : 32;
        uint64_t en_irq_output         : 1;  /**< [ 31: 31](R/W) RX Interrupt Enable. Set EN_IRQ_OUTPUT to one to enable the FSM_PAR_ERR,
                                                                 REG_PAR_ERR, CTX_IDX_ERR, and KEY_DONE interrupts in the PEMSEC_RX_IRQ_STAT
                                                                 register to set the PEMSEC_IDE_INT[AES_RX_INT] interrupt.  Set
                                                                 EN_IRQ_OUTPUT to zero to prevent all interrupt sources in the
                                                                 PEMSEC_RX_IRQ_STAT register from setting the PEMSEC_IDE_INT[AES_RX_INT]
                                                                 interrupt. */
        uint64_t reserved_18_30        : 13;
        uint64_t fsm_par_err           : 1;  /**< [ 17: 17](R/W) Enables interrupt indicating that an FSM parity error
                                                                 has been detected.  The corresponding PEMSEC_RX_IRQ_STAT field
                                                                 can only be asserted if this field is set to one. */
        uint64_t reg_par_err           : 1;  /**< [ 16: 16](R/W) Enables interrupt indicating that a register parity error has
                                                                 been detected. The corresponding PEMSEC_RX_IRQ_STAT field can only
                                                                 be asserted if this field is set to one. */
        uint64_t reserved_5_15         : 11;
        uint64_t ctx_idx_err           : 1;  /**< [  4:  4](R/W) Enables interrupt indicating that a context index error has
                                                                 been detected. The corresponding PEMSEC_RX_IRQ_STAT field can only
                                                                 be asserted if this field is set to one. */
        uint64_t reserved_1_3          : 3;
        uint64_t key_done              : 1;  /**< [  0:  0](R/W) Enables interrupt indicating that a key load has completed.
                                                                 The corresponding PEMSEC_RX_IRQ_STAT field can only
                                                                 be asserted if this field is set to one. */
#else /* Word 0 - Little Endian */
        uint64_t key_done              : 1;  /**< [  0:  0](R/W) Enables interrupt indicating that a key load has completed.
                                                                 The corresponding PEMSEC_RX_IRQ_STAT field can only
                                                                 be asserted if this field is set to one. */
        uint64_t reserved_1_3          : 3;
        uint64_t ctx_idx_err           : 1;  /**< [  4:  4](R/W) Enables interrupt indicating that a context index error has
                                                                 been detected. The corresponding PEMSEC_RX_IRQ_STAT field can only
                                                                 be asserted if this field is set to one. */
        uint64_t reserved_5_15         : 11;
        uint64_t reg_par_err           : 1;  /**< [ 16: 16](R/W) Enables interrupt indicating that a register parity error has
                                                                 been detected. The corresponding PEMSEC_RX_IRQ_STAT field can only
                                                                 be asserted if this field is set to one. */
        uint64_t fsm_par_err           : 1;  /**< [ 17: 17](R/W) Enables interrupt indicating that an FSM parity error
                                                                 has been detected.  The corresponding PEMSEC_RX_IRQ_STAT field
                                                                 can only be asserted if this field is set to one. */
        uint64_t reserved_18_30        : 13;
        uint64_t en_irq_output         : 1;  /**< [ 31: 31](R/W) RX Interrupt Enable. Set EN_IRQ_OUTPUT to one to enable the FSM_PAR_ERR,
                                                                 REG_PAR_ERR, CTX_IDX_ERR, and KEY_DONE interrupts in the PEMSEC_RX_IRQ_STAT
                                                                 register to set the PEMSEC_IDE_INT[AES_RX_INT] interrupt.  Set
                                                                 EN_IRQ_OUTPUT to zero to prevent all interrupt sources in the
                                                                 PEMSEC_RX_IRQ_STAT register from setting the PEMSEC_IDE_INT[AES_RX_INT]
                                                                 interrupt. */
        uint64_t reserved_32_63        : 32;
#endif /* Word 0 - End */
    } s;
    struct cavm_pemsecx_rx_irq_en_cn
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_32_63        : 32;
        uint64_t en_irq_output         : 1;  /**< [ 31: 31](R/W) RX Interrupt Enable. Set EN_IRQ_OUTPUT to one to enable the FSM_PAR_ERR,
                                                                 REG_PAR_ERR, CTX_IDX_ERR, and KEY_DONE interrupts in the PEMSEC_RX_IRQ_STAT
                                                                 register to set the PEMSEC_IDE_INT[AES_RX_INT] interrupt.  Set
                                                                 EN_IRQ_OUTPUT to zero to prevent all interrupt sources in the
                                                                 PEMSEC_RX_IRQ_STAT register from setting the PEMSEC_IDE_INT[AES_RX_INT]
                                                                 interrupt. */
        uint64_t reserved_18_30        : 13;
        uint64_t fsm_par_err           : 1;  /**< [ 17: 17](R/W) Enables interrupt indicating that an FSM parity error
                                                                 has been detected.  The corresponding PEMSEC_RX_IRQ_STAT field
                                                                 can only be asserted if this field is set to one. */
        uint64_t reg_par_err           : 1;  /**< [ 16: 16](R/W) Enables interrupt indicating that a register parity error has
                                                                 been detected. The corresponding PEMSEC_RX_IRQ_STAT field can only
                                                                 be asserted if this field is set to one. */
        uint64_t reserved_5_15         : 11;
        uint64_t ctx_idx_err           : 1;  /**< [  4:  4](R/W) Enables interrupt indicating that a context index error has
                                                                 been detected. The corresponding PEMSEC_RX_IRQ_STAT field can only
                                                                 be asserted if this field is set to one. */
        uint64_t reserved_2_3          : 2;
        uint64_t reserved_1            : 1;
        uint64_t key_done              : 1;  /**< [  0:  0](R/W) Enables interrupt indicating that a key load has completed.
                                                                 The corresponding PEMSEC_RX_IRQ_STAT field can only
                                                                 be asserted if this field is set to one. */
#else /* Word 0 - Little Endian */
        uint64_t key_done              : 1;  /**< [  0:  0](R/W) Enables interrupt indicating that a key load has completed.
                                                                 The corresponding PEMSEC_RX_IRQ_STAT field can only
                                                                 be asserted if this field is set to one. */
        uint64_t reserved_1            : 1;
        uint64_t reserved_2_3          : 2;
        uint64_t ctx_idx_err           : 1;  /**< [  4:  4](R/W) Enables interrupt indicating that a context index error has
                                                                 been detected. The corresponding PEMSEC_RX_IRQ_STAT field can only
                                                                 be asserted if this field is set to one. */
        uint64_t reserved_5_15         : 11;
        uint64_t reg_par_err           : 1;  /**< [ 16: 16](R/W) Enables interrupt indicating that a register parity error has
                                                                 been detected. The corresponding PEMSEC_RX_IRQ_STAT field can only
                                                                 be asserted if this field is set to one. */
        uint64_t fsm_par_err           : 1;  /**< [ 17: 17](R/W) Enables interrupt indicating that an FSM parity error
                                                                 has been detected.  The corresponding PEMSEC_RX_IRQ_STAT field
                                                                 can only be asserted if this field is set to one. */
        uint64_t reserved_18_30        : 13;
        uint64_t en_irq_output         : 1;  /**< [ 31: 31](R/W) RX Interrupt Enable. Set EN_IRQ_OUTPUT to one to enable the FSM_PAR_ERR,
                                                                 REG_PAR_ERR, CTX_IDX_ERR, and KEY_DONE interrupts in the PEMSEC_RX_IRQ_STAT
                                                                 register to set the PEMSEC_IDE_INT[AES_RX_INT] interrupt.  Set
                                                                 EN_IRQ_OUTPUT to zero to prevent all interrupt sources in the
                                                                 PEMSEC_RX_IRQ_STAT register from setting the PEMSEC_IDE_INT[AES_RX_INT]
                                                                 interrupt. */
        uint64_t reserved_32_63        : 32;
#endif /* Word 0 - End */
    } cn;
};
typedef union cavm_pemsecx_rx_irq_en cavm_pemsecx_rx_irq_en_t;

static inline uint64_t CAVM_PEMSECX_RX_IRQ_EN(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_PEMSECX_RX_IRQ_EN(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CN20KA) && (a<=5))
        return 0xc2c000005010ll + 0x100000000ll * ((a) & 0x7);
    __cavm_csr_fatal("PEMSECX_RX_IRQ_EN", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_PEMSECX_RX_IRQ_EN(a) cavm_pemsecx_rx_irq_en_t
#define bustype_CAVM_PEMSECX_RX_IRQ_EN(a) CSR_TYPE_ARF
#define basename_CAVM_PEMSECX_RX_IRQ_EN(a) "PEMSECX_RX_IRQ_EN"
#define device_bar_CAVM_PEMSECX_RX_IRQ_EN(a) 0x0 /* PF_BAR0 */
#define busnum_CAVM_PEMSECX_RX_IRQ_EN(a) (a)
#define arguments_CAVM_PEMSECX_RX_IRQ_EN(a) (a),-1,-1,-1

/**
 * Register (ARF) pemsec#_rx_irq_stat
 *
 * RX Interrupt Status Register
 */
union cavm_pemsecx_rx_irq_stat
{
    uint64_t u;
    struct cavm_pemsecx_rx_irq_stat_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_18_63        : 46;
        uint64_t fsm_par_err           : 1;  /**< [ 17: 17](R/W1C/H) Status of interrupt indicating that an FSM parity error has
                                                                 been detected. */
        uint64_t reg_par_err           : 1;  /**< [ 16: 16](R/W1C/H) Status of interrupt indicating that a register parity error has
                                                                 been detected. */
        uint64_t reserved_5_15         : 11;
        uint64_t ctx_idx_err           : 1;  /**< [  4:  4](R/W1C/H) Status of interrupt indicating that a context index error has
                                                                 been detected. */
        uint64_t reserved_1_3          : 3;
        uint64_t key_done              : 1;  /**< [  0:  0](R/W1C/H) Status of interrupt indicating that a key load has completed. */
#else /* Word 0 - Little Endian */
        uint64_t key_done              : 1;  /**< [  0:  0](R/W1C/H) Status of interrupt indicating that a key load has completed. */
        uint64_t reserved_1_3          : 3;
        uint64_t ctx_idx_err           : 1;  /**< [  4:  4](R/W1C/H) Status of interrupt indicating that a context index error has
                                                                 been detected. */
        uint64_t reserved_5_15         : 11;
        uint64_t reg_par_err           : 1;  /**< [ 16: 16](R/W1C/H) Status of interrupt indicating that a register parity error has
                                                                 been detected. */
        uint64_t fsm_par_err           : 1;  /**< [ 17: 17](R/W1C/H) Status of interrupt indicating that an FSM parity error has
                                                                 been detected. */
        uint64_t reserved_18_63        : 46;
#endif /* Word 0 - End */
    } s;
    struct cavm_pemsecx_rx_irq_stat_cn
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_32_63        : 32;
        uint64_t reserved_18_31        : 14;
        uint64_t fsm_par_err           : 1;  /**< [ 17: 17](R/W1C/H) Status of interrupt indicating that an FSM parity error has
                                                                 been detected. */
        uint64_t reg_par_err           : 1;  /**< [ 16: 16](R/W1C/H) Status of interrupt indicating that a register parity error has
                                                                 been detected. */
        uint64_t reserved_5_15         : 11;
        uint64_t ctx_idx_err           : 1;  /**< [  4:  4](R/W1C/H) Status of interrupt indicating that a context index error has
                                                                 been detected. */
        uint64_t reserved_1_3          : 3;
        uint64_t key_done              : 1;  /**< [  0:  0](R/W1C/H) Status of interrupt indicating that a key load has completed. */
#else /* Word 0 - Little Endian */
        uint64_t key_done              : 1;  /**< [  0:  0](R/W1C/H) Status of interrupt indicating that a key load has completed. */
        uint64_t reserved_1_3          : 3;
        uint64_t ctx_idx_err           : 1;  /**< [  4:  4](R/W1C/H) Status of interrupt indicating that a context index error has
                                                                 been detected. */
        uint64_t reserved_5_15         : 11;
        uint64_t reg_par_err           : 1;  /**< [ 16: 16](R/W1C/H) Status of interrupt indicating that a register parity error has
                                                                 been detected. */
        uint64_t fsm_par_err           : 1;  /**< [ 17: 17](R/W1C/H) Status of interrupt indicating that an FSM parity error has
                                                                 been detected. */
        uint64_t reserved_18_31        : 14;
        uint64_t reserved_32_63        : 32;
#endif /* Word 0 - End */
    } cn;
};
typedef union cavm_pemsecx_rx_irq_stat cavm_pemsecx_rx_irq_stat_t;

static inline uint64_t CAVM_PEMSECX_RX_IRQ_STAT(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_PEMSECX_RX_IRQ_STAT(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CN20KA) && (a<=5))
        return 0xc2c000005018ll + 0x100000000ll * ((a) & 0x7);
    __cavm_csr_fatal("PEMSECX_RX_IRQ_STAT", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_PEMSECX_RX_IRQ_STAT(a) cavm_pemsecx_rx_irq_stat_t
#define bustype_CAVM_PEMSECX_RX_IRQ_STAT(a) CSR_TYPE_ARF
#define basename_CAVM_PEMSECX_RX_IRQ_STAT(a) "PEMSECX_RX_IRQ_STAT"
#define device_bar_CAVM_PEMSECX_RX_IRQ_STAT(a) 0x0 /* PF_BAR0 */
#define busnum_CAVM_PEMSECX_RX_IRQ_STAT(a) (a)
#define arguments_CAVM_PEMSECX_RX_IRQ_STAT(a) (a),-1,-1,-1

/**
 * Register (ARF) pemsec#_rx_key_0
 *
 * RX Key 0 Register
 */
union cavm_pemsecx_rx_key_0
{
    uint64_t u;
    struct cavm_pemsecx_rx_key_0_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_32_63        : 32;
        uint64_t key                   : 32; /**< [ 31:  0](WO/H) Key bytes (00, 01, 02, 03).

                                                                 Key byte 00 is the MSB of the key and represents
                                                                 bits[255:224] of a 256-bit key or
                                                                 bits[127:96] of a 128-bit key. */
#else /* Word 0 - Little Endian */
        uint64_t key                   : 32; /**< [ 31:  0](WO/H) Key bytes (00, 01, 02, 03).

                                                                 Key byte 00 is the MSB of the key and represents
                                                                 bits[255:224] of a 256-bit key or
                                                                 bits[127:96] of a 128-bit key. */
        uint64_t reserved_32_63        : 32;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_pemsecx_rx_key_0_s cn; */
};
typedef union cavm_pemsecx_rx_key_0 cavm_pemsecx_rx_key_0_t;

static inline uint64_t CAVM_PEMSECX_RX_KEY_0(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_PEMSECX_RX_KEY_0(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CN20KA) && (a<=5))
        return 0xc2c000005040ll + 0x100000000ll * ((a) & 0x7);
    __cavm_csr_fatal("PEMSECX_RX_KEY_0", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_PEMSECX_RX_KEY_0(a) cavm_pemsecx_rx_key_0_t
#define bustype_CAVM_PEMSECX_RX_KEY_0(a) CSR_TYPE_ARF
#define basename_CAVM_PEMSECX_RX_KEY_0(a) "PEMSECX_RX_KEY_0"
#define device_bar_CAVM_PEMSECX_RX_KEY_0(a) 0x0 /* PF_BAR0 */
#define busnum_CAVM_PEMSECX_RX_KEY_0(a) (a)
#define arguments_CAVM_PEMSECX_RX_KEY_0(a) (a),-1,-1,-1

/**
 * Register (ARF) pemsec#_rx_key_1
 *
 * RX Key 1 Register
 */
union cavm_pemsecx_rx_key_1
{
    uint64_t u;
    struct cavm_pemsecx_rx_key_1_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_32_63        : 32;
        uint64_t key                   : 32; /**< [ 31:  0](WO/H) Key bytes (04, 05, 06, 07) */
#else /* Word 0 - Little Endian */
        uint64_t key                   : 32; /**< [ 31:  0](WO/H) Key bytes (04, 05, 06, 07) */
        uint64_t reserved_32_63        : 32;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_pemsecx_rx_key_1_s cn; */
};
typedef union cavm_pemsecx_rx_key_1 cavm_pemsecx_rx_key_1_t;

static inline uint64_t CAVM_PEMSECX_RX_KEY_1(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_PEMSECX_RX_KEY_1(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CN20KA) && (a<=5))
        return 0xc2c000005048ll + 0x100000000ll * ((a) & 0x7);
    __cavm_csr_fatal("PEMSECX_RX_KEY_1", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_PEMSECX_RX_KEY_1(a) cavm_pemsecx_rx_key_1_t
#define bustype_CAVM_PEMSECX_RX_KEY_1(a) CSR_TYPE_ARF
#define basename_CAVM_PEMSECX_RX_KEY_1(a) "PEMSECX_RX_KEY_1"
#define device_bar_CAVM_PEMSECX_RX_KEY_1(a) 0x0 /* PF_BAR0 */
#define busnum_CAVM_PEMSECX_RX_KEY_1(a) (a)
#define arguments_CAVM_PEMSECX_RX_KEY_1(a) (a),-1,-1,-1

/**
 * Register (ARF) pemsec#_rx_key_2
 *
 * RX Key 2 Register
 */
union cavm_pemsecx_rx_key_2
{
    uint64_t u;
    struct cavm_pemsecx_rx_key_2_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_32_63        : 32;
        uint64_t key                   : 32; /**< [ 31:  0](WO/H) Key bytes (08, 09, 10, 11) */
#else /* Word 0 - Little Endian */
        uint64_t key                   : 32; /**< [ 31:  0](WO/H) Key bytes (08, 09, 10, 11) */
        uint64_t reserved_32_63        : 32;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_pemsecx_rx_key_2_s cn; */
};
typedef union cavm_pemsecx_rx_key_2 cavm_pemsecx_rx_key_2_t;

static inline uint64_t CAVM_PEMSECX_RX_KEY_2(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_PEMSECX_RX_KEY_2(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CN20KA) && (a<=5))
        return 0xc2c000005050ll + 0x100000000ll * ((a) & 0x7);
    __cavm_csr_fatal("PEMSECX_RX_KEY_2", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_PEMSECX_RX_KEY_2(a) cavm_pemsecx_rx_key_2_t
#define bustype_CAVM_PEMSECX_RX_KEY_2(a) CSR_TYPE_ARF
#define basename_CAVM_PEMSECX_RX_KEY_2(a) "PEMSECX_RX_KEY_2"
#define device_bar_CAVM_PEMSECX_RX_KEY_2(a) 0x0 /* PF_BAR0 */
#define busnum_CAVM_PEMSECX_RX_KEY_2(a) (a)
#define arguments_CAVM_PEMSECX_RX_KEY_2(a) (a),-1,-1,-1

/**
 * Register (ARF) pemsec#_rx_key_3
 *
 * RX Key 3 Register
 */
union cavm_pemsecx_rx_key_3
{
    uint64_t u;
    struct cavm_pemsecx_rx_key_3_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_32_63        : 32;
        uint64_t key                   : 32; /**< [ 31:  0](WO/H) Key bytes (12, 13, 14, 15) */
#else /* Word 0 - Little Endian */
        uint64_t key                   : 32; /**< [ 31:  0](WO/H) Key bytes (12, 13, 14, 15) */
        uint64_t reserved_32_63        : 32;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_pemsecx_rx_key_3_s cn; */
};
typedef union cavm_pemsecx_rx_key_3 cavm_pemsecx_rx_key_3_t;

static inline uint64_t CAVM_PEMSECX_RX_KEY_3(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_PEMSECX_RX_KEY_3(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CN20KA) && (a<=5))
        return 0xc2c000005058ll + 0x100000000ll * ((a) & 0x7);
    __cavm_csr_fatal("PEMSECX_RX_KEY_3", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_PEMSECX_RX_KEY_3(a) cavm_pemsecx_rx_key_3_t
#define bustype_CAVM_PEMSECX_RX_KEY_3(a) CSR_TYPE_ARF
#define basename_CAVM_PEMSECX_RX_KEY_3(a) "PEMSECX_RX_KEY_3"
#define device_bar_CAVM_PEMSECX_RX_KEY_3(a) 0x0 /* PF_BAR0 */
#define busnum_CAVM_PEMSECX_RX_KEY_3(a) (a)
#define arguments_CAVM_PEMSECX_RX_KEY_3(a) (a),-1,-1,-1

/**
 * Register (ARF) pemsec#_rx_key_4
 *
 * RX Key 4 Register
 */
union cavm_pemsecx_rx_key_4
{
    uint64_t u;
    struct cavm_pemsecx_rx_key_4_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_32_63        : 32;
        uint64_t key                   : 32; /**< [ 31:  0](WO/H) Key bytes (16, 17, 18, 19) */
#else /* Word 0 - Little Endian */
        uint64_t key                   : 32; /**< [ 31:  0](WO/H) Key bytes (16, 17, 18, 19) */
        uint64_t reserved_32_63        : 32;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_pemsecx_rx_key_4_s cn; */
};
typedef union cavm_pemsecx_rx_key_4 cavm_pemsecx_rx_key_4_t;

static inline uint64_t CAVM_PEMSECX_RX_KEY_4(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_PEMSECX_RX_KEY_4(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CN20KA) && (a<=5))
        return 0xc2c000005060ll + 0x100000000ll * ((a) & 0x7);
    __cavm_csr_fatal("PEMSECX_RX_KEY_4", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_PEMSECX_RX_KEY_4(a) cavm_pemsecx_rx_key_4_t
#define bustype_CAVM_PEMSECX_RX_KEY_4(a) CSR_TYPE_ARF
#define basename_CAVM_PEMSECX_RX_KEY_4(a) "PEMSECX_RX_KEY_4"
#define device_bar_CAVM_PEMSECX_RX_KEY_4(a) 0x0 /* PF_BAR0 */
#define busnum_CAVM_PEMSECX_RX_KEY_4(a) (a)
#define arguments_CAVM_PEMSECX_RX_KEY_4(a) (a),-1,-1,-1

/**
 * Register (ARF) pemsec#_rx_key_5
 *
 * RX Key 5 Register
 */
union cavm_pemsecx_rx_key_5
{
    uint64_t u;
    struct cavm_pemsecx_rx_key_5_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_32_63        : 32;
        uint64_t key                   : 32; /**< [ 31:  0](WO/H) Key bytes (20, 21, 22, 23) */
#else /* Word 0 - Little Endian */
        uint64_t key                   : 32; /**< [ 31:  0](WO/H) Key bytes (20, 21, 22, 23) */
        uint64_t reserved_32_63        : 32;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_pemsecx_rx_key_5_s cn; */
};
typedef union cavm_pemsecx_rx_key_5 cavm_pemsecx_rx_key_5_t;

static inline uint64_t CAVM_PEMSECX_RX_KEY_5(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_PEMSECX_RX_KEY_5(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CN20KA) && (a<=5))
        return 0xc2c000005068ll + 0x100000000ll * ((a) & 0x7);
    __cavm_csr_fatal("PEMSECX_RX_KEY_5", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_PEMSECX_RX_KEY_5(a) cavm_pemsecx_rx_key_5_t
#define bustype_CAVM_PEMSECX_RX_KEY_5(a) CSR_TYPE_ARF
#define basename_CAVM_PEMSECX_RX_KEY_5(a) "PEMSECX_RX_KEY_5"
#define device_bar_CAVM_PEMSECX_RX_KEY_5(a) 0x0 /* PF_BAR0 */
#define busnum_CAVM_PEMSECX_RX_KEY_5(a) (a)
#define arguments_CAVM_PEMSECX_RX_KEY_5(a) (a),-1,-1,-1

/**
 * Register (ARF) pemsec#_rx_key_6
 *
 * RX Key 6 Register
 */
union cavm_pemsecx_rx_key_6
{
    uint64_t u;
    struct cavm_pemsecx_rx_key_6_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_32_63        : 32;
        uint64_t key                   : 32; /**< [ 31:  0](WO/H) Key bytes (24, 25, 26, 27) */
#else /* Word 0 - Little Endian */
        uint64_t key                   : 32; /**< [ 31:  0](WO/H) Key bytes (24, 25, 26, 27) */
        uint64_t reserved_32_63        : 32;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_pemsecx_rx_key_6_s cn; */
};
typedef union cavm_pemsecx_rx_key_6 cavm_pemsecx_rx_key_6_t;

static inline uint64_t CAVM_PEMSECX_RX_KEY_6(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_PEMSECX_RX_KEY_6(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CN20KA) && (a<=5))
        return 0xc2c000005070ll + 0x100000000ll * ((a) & 0x7);
    __cavm_csr_fatal("PEMSECX_RX_KEY_6", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_PEMSECX_RX_KEY_6(a) cavm_pemsecx_rx_key_6_t
#define bustype_CAVM_PEMSECX_RX_KEY_6(a) CSR_TYPE_ARF
#define basename_CAVM_PEMSECX_RX_KEY_6(a) "PEMSECX_RX_KEY_6"
#define device_bar_CAVM_PEMSECX_RX_KEY_6(a) 0x0 /* PF_BAR0 */
#define busnum_CAVM_PEMSECX_RX_KEY_6(a) (a)
#define arguments_CAVM_PEMSECX_RX_KEY_6(a) (a),-1,-1,-1

/**
 * Register (ARF) pemsec#_rx_key_7
 *
 * RX Key 7 Register
 */
union cavm_pemsecx_rx_key_7
{
    uint64_t u;
    struct cavm_pemsecx_rx_key_7_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_32_63        : 32;
        uint64_t key                   : 32; /**< [ 31:  0](WO/H) Key bytes (28, 29, 30, 31) */
#else /* Word 0 - Little Endian */
        uint64_t key                   : 32; /**< [ 31:  0](WO/H) Key bytes (28, 29, 30, 31) */
        uint64_t reserved_32_63        : 32;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_pemsecx_rx_key_7_s cn; */
};
typedef union cavm_pemsecx_rx_key_7 cavm_pemsecx_rx_key_7_t;

static inline uint64_t CAVM_PEMSECX_RX_KEY_7(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_PEMSECX_RX_KEY_7(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CN20KA) && (a<=5))
        return 0xc2c000005078ll + 0x100000000ll * ((a) & 0x7);
    __cavm_csr_fatal("PEMSECX_RX_KEY_7", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_PEMSECX_RX_KEY_7(a) cavm_pemsecx_rx_key_7_t
#define bustype_CAVM_PEMSECX_RX_KEY_7(a) CSR_TYPE_ARF
#define basename_CAVM_PEMSECX_RX_KEY_7(a) "PEMSECX_RX_KEY_7"
#define device_bar_CAVM_PEMSECX_RX_KEY_7(a) 0x0 /* PF_BAR0 */
#define busnum_CAVM_PEMSECX_RX_KEY_7(a) (a)
#define arguments_CAVM_PEMSECX_RX_KEY_7(a) (a),-1,-1,-1

/**
 * Register (ARF) pemsec#_rx_key_threshold_high_s0
 *
 * RX Key Threshold value for Stream 0 Hi Register
 */
union cavm_pemsecx_rx_key_threshold_high_s0
{
    uint64_t u;
    struct cavm_pemsecx_rx_key_threshold_high_s0_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_32_63        : 32;
        uint64_t rx_key_threshold_high_s0 : 32;/**< [ 31:  0](R/W) Higher 32 bit of key utilization threshold for RX stream 0. */
#else /* Word 0 - Little Endian */
        uint64_t rx_key_threshold_high_s0 : 32;/**< [ 31:  0](R/W) Higher 32 bit of key utilization threshold for RX stream 0. */
        uint64_t reserved_32_63        : 32;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_pemsecx_rx_key_threshold_high_s0_s cn; */
};
typedef union cavm_pemsecx_rx_key_threshold_high_s0 cavm_pemsecx_rx_key_threshold_high_s0_t;

static inline uint64_t CAVM_PEMSECX_RX_KEY_THRESHOLD_HIGH_S0(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_PEMSECX_RX_KEY_THRESHOLD_HIGH_S0(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CN20KA) && (a<=5))
        return 0xc2c000001098ll + 0x100000000ll * ((a) & 0x7);
    __cavm_csr_fatal("PEMSECX_RX_KEY_THRESHOLD_HIGH_S0", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_PEMSECX_RX_KEY_THRESHOLD_HIGH_S0(a) cavm_pemsecx_rx_key_threshold_high_s0_t
#define bustype_CAVM_PEMSECX_RX_KEY_THRESHOLD_HIGH_S0(a) CSR_TYPE_ARF
#define basename_CAVM_PEMSECX_RX_KEY_THRESHOLD_HIGH_S0(a) "PEMSECX_RX_KEY_THRESHOLD_HIGH_S0"
#define device_bar_CAVM_PEMSECX_RX_KEY_THRESHOLD_HIGH_S0(a) 0x0 /* PF_BAR0 */
#define busnum_CAVM_PEMSECX_RX_KEY_THRESHOLD_HIGH_S0(a) (a)
#define arguments_CAVM_PEMSECX_RX_KEY_THRESHOLD_HIGH_S0(a) (a),-1,-1,-1

/**
 * Register (ARF) pemsec#_rx_key_threshold_low_s0
 *
 * RX Key Threshold value for Stream 0 Low Register
 */
union cavm_pemsecx_rx_key_threshold_low_s0
{
    uint64_t u;
    struct cavm_pemsecx_rx_key_threshold_low_s0_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_32_63        : 32;
        uint64_t rx_key_threshold_low_s0 : 32;/**< [ 31:  0](R/W) Lower 32 bit of key utilization threshold for RX stream 0. */
#else /* Word 0 - Little Endian */
        uint64_t rx_key_threshold_low_s0 : 32;/**< [ 31:  0](R/W) Lower 32 bit of key utilization threshold for RX stream 0. */
        uint64_t reserved_32_63        : 32;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_pemsecx_rx_key_threshold_low_s0_s cn; */
};
typedef union cavm_pemsecx_rx_key_threshold_low_s0 cavm_pemsecx_rx_key_threshold_low_s0_t;

static inline uint64_t CAVM_PEMSECX_RX_KEY_THRESHOLD_LOW_S0(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_PEMSECX_RX_KEY_THRESHOLD_LOW_S0(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CN20KA) && (a<=5))
        return 0xc2c000001090ll + 0x100000000ll * ((a) & 0x7);
    __cavm_csr_fatal("PEMSECX_RX_KEY_THRESHOLD_LOW_S0", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_PEMSECX_RX_KEY_THRESHOLD_LOW_S0(a) cavm_pemsecx_rx_key_threshold_low_s0_t
#define bustype_CAVM_PEMSECX_RX_KEY_THRESHOLD_LOW_S0(a) CSR_TYPE_ARF
#define basename_CAVM_PEMSECX_RX_KEY_THRESHOLD_LOW_S0(a) "PEMSECX_RX_KEY_THRESHOLD_LOW_S0"
#define device_bar_CAVM_PEMSECX_RX_KEY_THRESHOLD_LOW_S0(a) 0x0 /* PF_BAR0 */
#define busnum_CAVM_PEMSECX_RX_KEY_THRESHOLD_LOW_S0(a) (a)
#define arguments_CAVM_PEMSECX_RX_KEY_THRESHOLD_LOW_S0(a) (a),-1,-1,-1

/**
 * Register (ARF) pemsec#_rx_key_usage_counter_high_s0
 *
 * RX Key utilization counter value for Stream 0 LSW Register
 */
union cavm_pemsecx_rx_key_usage_counter_high_s0
{
    uint64_t u;
    struct cavm_pemsecx_rx_key_usage_counter_high_s0_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_32_63        : 32;
        uint64_t rx_key_usage_counter_high_s0 : 32;/**< [ 31:  0](RO/H) Higher 32 bit of key utilization counter for RX stream 0. */
#else /* Word 0 - Little Endian */
        uint64_t rx_key_usage_counter_high_s0 : 32;/**< [ 31:  0](RO/H) Higher 32 bit of key utilization counter for RX stream 0. */
        uint64_t reserved_32_63        : 32;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_pemsecx_rx_key_usage_counter_high_s0_s cn; */
};
typedef union cavm_pemsecx_rx_key_usage_counter_high_s0 cavm_pemsecx_rx_key_usage_counter_high_s0_t;

static inline uint64_t CAVM_PEMSECX_RX_KEY_USAGE_COUNTER_HIGH_S0(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_PEMSECX_RX_KEY_USAGE_COUNTER_HIGH_S0(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CN20KA) && (a<=5))
        return 0xc2c000001670ll + 0x100000000ll * ((a) & 0x7);
    __cavm_csr_fatal("PEMSECX_RX_KEY_USAGE_COUNTER_HIGH_S0", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_PEMSECX_RX_KEY_USAGE_COUNTER_HIGH_S0(a) cavm_pemsecx_rx_key_usage_counter_high_s0_t
#define bustype_CAVM_PEMSECX_RX_KEY_USAGE_COUNTER_HIGH_S0(a) CSR_TYPE_ARF
#define basename_CAVM_PEMSECX_RX_KEY_USAGE_COUNTER_HIGH_S0(a) "PEMSECX_RX_KEY_USAGE_COUNTER_HIGH_S0"
#define device_bar_CAVM_PEMSECX_RX_KEY_USAGE_COUNTER_HIGH_S0(a) 0x0 /* PF_BAR0 */
#define busnum_CAVM_PEMSECX_RX_KEY_USAGE_COUNTER_HIGH_S0(a) (a)
#define arguments_CAVM_PEMSECX_RX_KEY_USAGE_COUNTER_HIGH_S0(a) (a),-1,-1,-1

/**
 * Register (ARF) pemsec#_rx_key_usage_counter_low_s0
 *
 * RX Key utilization counter value for Stream 0 LSW Register
 */
union cavm_pemsecx_rx_key_usage_counter_low_s0
{
    uint64_t u;
    struct cavm_pemsecx_rx_key_usage_counter_low_s0_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_32_63        : 32;
        uint64_t rx_key_usage_counter_low_s0 : 32;/**< [ 31:  0](RO/H) Lower 32 bit of key utilization counter for RX stream 0. */
#else /* Word 0 - Little Endian */
        uint64_t rx_key_usage_counter_low_s0 : 32;/**< [ 31:  0](RO/H) Lower 32 bit of key utilization counter for RX stream 0. */
        uint64_t reserved_32_63        : 32;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_pemsecx_rx_key_usage_counter_low_s0_s cn; */
};
typedef union cavm_pemsecx_rx_key_usage_counter_low_s0 cavm_pemsecx_rx_key_usage_counter_low_s0_t;

static inline uint64_t CAVM_PEMSECX_RX_KEY_USAGE_COUNTER_LOW_S0(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_PEMSECX_RX_KEY_USAGE_COUNTER_LOW_S0(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CN20KA) && (a<=5))
        return 0xc2c000001668ll + 0x100000000ll * ((a) & 0x7);
    __cavm_csr_fatal("PEMSECX_RX_KEY_USAGE_COUNTER_LOW_S0", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_PEMSECX_RX_KEY_USAGE_COUNTER_LOW_S0(a) cavm_pemsecx_rx_key_usage_counter_low_s0_t
#define bustype_CAVM_PEMSECX_RX_KEY_USAGE_COUNTER_LOW_S0(a) CSR_TYPE_ARF
#define basename_CAVM_PEMSECX_RX_KEY_USAGE_COUNTER_LOW_S0(a) "PEMSECX_RX_KEY_USAGE_COUNTER_LOW_S0"
#define device_bar_CAVM_PEMSECX_RX_KEY_USAGE_COUNTER_LOW_S0(a) 0x0 /* PF_BAR0 */
#define busnum_CAVM_PEMSECX_RX_KEY_USAGE_COUNTER_LOW_S0(a) (a)
#define arguments_CAVM_PEMSECX_RX_KEY_USAGE_COUNTER_LOW_S0(a) (a),-1,-1,-1

/**
 * Register (ARF) pemsec#_rx_lnk_kbit_cfg
 *
 * IDE RX Link Kbit Register
 */
union cavm_pemsecx_rx_lnk_kbit_cfg
{
    uint64_t u;
    struct cavm_pemsecx_rx_lnk_kbit_cfg_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_3_63         : 61;
        uint64_t kbit_cfg_s0_cpl       : 1;  /**< [  2:  2](R/W) Link IDE Stream 0 Kbit to be inserted in IDE Prefix for
                                                                 Completion substream. The application shall set the 3
                                                                 bits (Posted Request-PR, Non-Posted Request-NPR,
                                                                 Completion-CPL) from a specific stream to 1, when
                                                                 requesting a key swap. */
        uint64_t kbit_cfg_s0_npr       : 1;  /**< [  1:  1](R/W) Link IDE Stream 0 Kbit to be inserted in IDE Prefix for Non-
                                                                 Posted Request substream. The application shall set
                                                                 the 3 bits (Posted Request-PR, Non-Posted Request-NPR,
                                                                 Completion-CPL) from a specific stream to 1, when
                                                                 requesting a key swap. */
        uint64_t kbit_cfg_s0_pr        : 1;  /**< [  0:  0](R/W) Link IDE Stream 0 Kbit to be inserted in IDE Prefix for Posted
                                                                 Request substream. The application shall set the 3 bits
                                                                 (Posted Request-PR, Non-Posted Request-NPR,
                                                                 Completion-CPL) from a specific stream to 1, when
                                                                 requesting a key swap. */
#else /* Word 0 - Little Endian */
        uint64_t kbit_cfg_s0_pr        : 1;  /**< [  0:  0](R/W) Link IDE Stream 0 Kbit to be inserted in IDE Prefix for Posted
                                                                 Request substream. The application shall set the 3 bits
                                                                 (Posted Request-PR, Non-Posted Request-NPR,
                                                                 Completion-CPL) from a specific stream to 1, when
                                                                 requesting a key swap. */
        uint64_t kbit_cfg_s0_npr       : 1;  /**< [  1:  1](R/W) Link IDE Stream 0 Kbit to be inserted in IDE Prefix for Non-
                                                                 Posted Request substream. The application shall set
                                                                 the 3 bits (Posted Request-PR, Non-Posted Request-NPR,
                                                                 Completion-CPL) from a specific stream to 1, when
                                                                 requesting a key swap. */
        uint64_t kbit_cfg_s0_cpl       : 1;  /**< [  2:  2](R/W) Link IDE Stream 0 Kbit to be inserted in IDE Prefix for
                                                                 Completion substream. The application shall set the 3
                                                                 bits (Posted Request-PR, Non-Posted Request-NPR,
                                                                 Completion-CPL) from a specific stream to 1, when
                                                                 requesting a key swap. */
        uint64_t reserved_3_63         : 61;
#endif /* Word 0 - End */
    } s;
    struct cavm_pemsecx_rx_lnk_kbit_cfg_cn
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_32_63        : 32;
        uint64_t reserved_6_31         : 26;
        uint64_t reserved_3_5          : 3;
        uint64_t kbit_cfg_s0_cpl       : 1;  /**< [  2:  2](R/W) Link IDE Stream 0 Kbit to be inserted in IDE Prefix for
                                                                 Completion substream. The application shall set the 3
                                                                 bits (Posted Request-PR, Non-Posted Request-NPR,
                                                                 Completion-CPL) from a specific stream to 1, when
                                                                 requesting a key swap. */
        uint64_t kbit_cfg_s0_npr       : 1;  /**< [  1:  1](R/W) Link IDE Stream 0 Kbit to be inserted in IDE Prefix for Non-
                                                                 Posted Request substream. The application shall set
                                                                 the 3 bits (Posted Request-PR, Non-Posted Request-NPR,
                                                                 Completion-CPL) from a specific stream to 1, when
                                                                 requesting a key swap. */
        uint64_t kbit_cfg_s0_pr        : 1;  /**< [  0:  0](R/W) Link IDE Stream 0 Kbit to be inserted in IDE Prefix for Posted
                                                                 Request substream. The application shall set the 3 bits
                                                                 (Posted Request-PR, Non-Posted Request-NPR,
                                                                 Completion-CPL) from a specific stream to 1, when
                                                                 requesting a key swap. */
#else /* Word 0 - Little Endian */
        uint64_t kbit_cfg_s0_pr        : 1;  /**< [  0:  0](R/W) Link IDE Stream 0 Kbit to be inserted in IDE Prefix for Posted
                                                                 Request substream. The application shall set the 3 bits
                                                                 (Posted Request-PR, Non-Posted Request-NPR,
                                                                 Completion-CPL) from a specific stream to 1, when
                                                                 requesting a key swap. */
        uint64_t kbit_cfg_s0_npr       : 1;  /**< [  1:  1](R/W) Link IDE Stream 0 Kbit to be inserted in IDE Prefix for Non-
                                                                 Posted Request substream. The application shall set
                                                                 the 3 bits (Posted Request-PR, Non-Posted Request-NPR,
                                                                 Completion-CPL) from a specific stream to 1, when
                                                                 requesting a key swap. */
        uint64_t kbit_cfg_s0_cpl       : 1;  /**< [  2:  2](R/W) Link IDE Stream 0 Kbit to be inserted in IDE Prefix for
                                                                 Completion substream. The application shall set the 3
                                                                 bits (Posted Request-PR, Non-Posted Request-NPR,
                                                                 Completion-CPL) from a specific stream to 1, when
                                                                 requesting a key swap. */
        uint64_t reserved_3_5          : 3;
        uint64_t reserved_6_31         : 26;
        uint64_t reserved_32_63        : 32;
#endif /* Word 0 - End */
    } cn;
};
typedef union cavm_pemsecx_rx_lnk_kbit_cfg cavm_pemsecx_rx_lnk_kbit_cfg_t;

static inline uint64_t CAVM_PEMSECX_RX_LNK_KBIT_CFG(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_PEMSECX_RX_LNK_KBIT_CFG(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CN20KA) && (a<=5))
        return 0xc2c000001048ll + 0x100000000ll * ((a) & 0x7);
    __cavm_csr_fatal("PEMSECX_RX_LNK_KBIT_CFG", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_PEMSECX_RX_LNK_KBIT_CFG(a) cavm_pemsecx_rx_lnk_kbit_cfg_t
#define bustype_CAVM_PEMSECX_RX_LNK_KBIT_CFG(a) CSR_TYPE_ARF
#define basename_CAVM_PEMSECX_RX_LNK_KBIT_CFG(a) "PEMSECX_RX_LNK_KBIT_CFG"
#define device_bar_CAVM_PEMSECX_RX_LNK_KBIT_CFG(a) 0x0 /* PF_BAR0 */
#define busnum_CAVM_PEMSECX_RX_LNK_KBIT_CFG(a) (a)
#define arguments_CAVM_PEMSECX_RX_LNK_KBIT_CFG(a) (a),-1,-1,-1

/**
 * Register (ARF) pemsec#_rx_lnk_kbit_current
 *
 * RX Link Stream Current Kbit Register
 */
union cavm_pemsecx_rx_lnk_kbit_current
{
    uint64_t u;
    struct cavm_pemsecx_rx_lnk_kbit_current_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_3_63         : 61;
        uint64_t rx_lnk_kbit_current_s0_cpl : 1;/**< [  2:  2](R/W1C/H) RX Current Kbit for Link stream 0, Completion substream. */
        uint64_t rx_lnk_kbit_current_s0_npr : 1;/**< [  1:  1](R/W1C/H) RX Current Kbit for Link stream 0, Non-Posted Request substream. */
        uint64_t rx_lnk_kbit_current_s0_pr : 1;/**< [  0:  0](R/W1C/H) RX Current Kbit for Link stream 0, Posted Request substream. */
#else /* Word 0 - Little Endian */
        uint64_t rx_lnk_kbit_current_s0_pr : 1;/**< [  0:  0](R/W1C/H) RX Current Kbit for Link stream 0, Posted Request substream. */
        uint64_t rx_lnk_kbit_current_s0_npr : 1;/**< [  1:  1](R/W1C/H) RX Current Kbit for Link stream 0, Non-Posted Request substream. */
        uint64_t rx_lnk_kbit_current_s0_cpl : 1;/**< [  2:  2](R/W1C/H) RX Current Kbit for Link stream 0, Completion substream. */
        uint64_t reserved_3_63         : 61;
#endif /* Word 0 - End */
    } s;
    struct cavm_pemsecx_rx_lnk_kbit_current_cn
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_32_63        : 32;
        uint64_t reserved_6_31         : 26;
        uint64_t reserved_3_5          : 3;
        uint64_t rx_lnk_kbit_current_s0_cpl : 1;/**< [  2:  2](R/W1C/H) RX Current Kbit for Link stream 0, Completion substream. */
        uint64_t rx_lnk_kbit_current_s0_npr : 1;/**< [  1:  1](R/W1C/H) RX Current Kbit for Link stream 0, Non-Posted Request substream. */
        uint64_t rx_lnk_kbit_current_s0_pr : 1;/**< [  0:  0](R/W1C/H) RX Current Kbit for Link stream 0, Posted Request substream. */
#else /* Word 0 - Little Endian */
        uint64_t rx_lnk_kbit_current_s0_pr : 1;/**< [  0:  0](R/W1C/H) RX Current Kbit for Link stream 0, Posted Request substream. */
        uint64_t rx_lnk_kbit_current_s0_npr : 1;/**< [  1:  1](R/W1C/H) RX Current Kbit for Link stream 0, Non-Posted Request substream. */
        uint64_t rx_lnk_kbit_current_s0_cpl : 1;/**< [  2:  2](R/W1C/H) RX Current Kbit for Link stream 0, Completion substream. */
        uint64_t reserved_3_5          : 3;
        uint64_t reserved_6_31         : 26;
        uint64_t reserved_32_63        : 32;
#endif /* Word 0 - End */
    } cn;
};
typedef union cavm_pemsecx_rx_lnk_kbit_current cavm_pemsecx_rx_lnk_kbit_current_t;

static inline uint64_t CAVM_PEMSECX_RX_LNK_KBIT_CURRENT(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_PEMSECX_RX_LNK_KBIT_CURRENT(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CN20KA) && (a<=5))
        return 0xc2c000001620ll + 0x100000000ll * ((a) & 0x7);
    __cavm_csr_fatal("PEMSECX_RX_LNK_KBIT_CURRENT", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_PEMSECX_RX_LNK_KBIT_CURRENT(a) cavm_pemsecx_rx_lnk_kbit_current_t
#define bustype_CAVM_PEMSECX_RX_LNK_KBIT_CURRENT(a) CSR_TYPE_ARF
#define basename_CAVM_PEMSECX_RX_LNK_KBIT_CURRENT(a) "PEMSECX_RX_LNK_KBIT_CURRENT"
#define device_bar_CAVM_PEMSECX_RX_LNK_KBIT_CURRENT(a) 0x0 /* PF_BAR0 */
#define busnum_CAVM_PEMSECX_RX_LNK_KBIT_CURRENT(a) (a)
#define arguments_CAVM_PEMSECX_RX_LNK_KBIT_CURRENT(a) (a),-1,-1,-1

/**
 * Register (ARF) pemsec#_rx_lnk_kbit_toggled
 *
 * RX Link Stream Kbit Toggled Register
 */
union cavm_pemsecx_rx_lnk_kbit_toggled
{
    uint64_t u;
    struct cavm_pemsecx_rx_lnk_kbit_toggled_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_3_63         : 61;
        uint64_t rx_lnk_kbit_toggled_s0_cpl : 1;/**< [  2:  2](R/W1C/H) RX Kbit Toggled for Link stream 0, Completion substream. */
        uint64_t rx_lnk_kbit_toggled_s0_npr : 1;/**< [  1:  1](R/W1C/H) RX Kbit Toggled for Link stream 0, Non-Posted Request substream. */
        uint64_t rx_lnk_kbit_toggled_s0_pr : 1;/**< [  0:  0](R/W1C/H) RX Kbit Toggled for Link stream 0, Posted Request substream. */
#else /* Word 0 - Little Endian */
        uint64_t rx_lnk_kbit_toggled_s0_pr : 1;/**< [  0:  0](R/W1C/H) RX Kbit Toggled for Link stream 0, Posted Request substream. */
        uint64_t rx_lnk_kbit_toggled_s0_npr : 1;/**< [  1:  1](R/W1C/H) RX Kbit Toggled for Link stream 0, Non-Posted Request substream. */
        uint64_t rx_lnk_kbit_toggled_s0_cpl : 1;/**< [  2:  2](R/W1C/H) RX Kbit Toggled for Link stream 0, Completion substream. */
        uint64_t reserved_3_63         : 61;
#endif /* Word 0 - End */
    } s;
    struct cavm_pemsecx_rx_lnk_kbit_toggled_cn
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_32_63        : 32;
        uint64_t reserved_6_31         : 26;
        uint64_t reserved_3_5          : 3;
        uint64_t rx_lnk_kbit_toggled_s0_cpl : 1;/**< [  2:  2](R/W1C/H) RX Kbit Toggled for Link stream 0, Completion substream. */
        uint64_t rx_lnk_kbit_toggled_s0_npr : 1;/**< [  1:  1](R/W1C/H) RX Kbit Toggled for Link stream 0, Non-Posted Request substream. */
        uint64_t rx_lnk_kbit_toggled_s0_pr : 1;/**< [  0:  0](R/W1C/H) RX Kbit Toggled for Link stream 0, Posted Request substream. */
#else /* Word 0 - Little Endian */
        uint64_t rx_lnk_kbit_toggled_s0_pr : 1;/**< [  0:  0](R/W1C/H) RX Kbit Toggled for Link stream 0, Posted Request substream. */
        uint64_t rx_lnk_kbit_toggled_s0_npr : 1;/**< [  1:  1](R/W1C/H) RX Kbit Toggled for Link stream 0, Non-Posted Request substream. */
        uint64_t rx_lnk_kbit_toggled_s0_cpl : 1;/**< [  2:  2](R/W1C/H) RX Kbit Toggled for Link stream 0, Completion substream. */
        uint64_t reserved_3_5          : 3;
        uint64_t reserved_6_31         : 26;
        uint64_t reserved_32_63        : 32;
#endif /* Word 0 - End */
    } cn;
};
typedef union cavm_pemsecx_rx_lnk_kbit_toggled cavm_pemsecx_rx_lnk_kbit_toggled_t;

static inline uint64_t CAVM_PEMSECX_RX_LNK_KBIT_TOGGLED(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_PEMSECX_RX_LNK_KBIT_TOGGLED(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CN20KA) && (a<=5))
        return 0xc2c000001618ll + 0x100000000ll * ((a) & 0x7);
    __cavm_csr_fatal("PEMSECX_RX_LNK_KBIT_TOGGLED", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_PEMSECX_RX_LNK_KBIT_TOGGLED(a) cavm_pemsecx_rx_lnk_kbit_toggled_t
#define bustype_CAVM_PEMSECX_RX_LNK_KBIT_TOGGLED(a) CSR_TYPE_ARF
#define basename_CAVM_PEMSECX_RX_LNK_KBIT_TOGGLED(a) "PEMSECX_RX_LNK_KBIT_TOGGLED"
#define device_bar_CAVM_PEMSECX_RX_LNK_KBIT_TOGGLED(a) 0x0 /* PF_BAR0 */
#define busnum_CAVM_PEMSECX_RX_LNK_KBIT_TOGGLED(a) (a)
#define arguments_CAVM_PEMSECX_RX_LNK_KBIT_TOGGLED(a) (a),-1,-1,-1

/**
 * Register (ARF) pemsec#_rx_out_aad
 *
 * RX FIPS Output Out AAD Register
 * This register is for testing the IDE encryption logic per the
 * FIPS-197 AES standard.
 *
 * This register is only accessible when
 * PEMSEC_BLK_IDE_CTL[IDE_TEST_ENABLE] is set to 1.
 * Accesses to this register when
 * PEMSEC_BLK_IDE_CTL[IDE_TEST_ENABLE] is set to 0 will return
 * an error.
 */
union cavm_pemsecx_rx_out_aad
{
    uint64_t u;
    struct cavm_pemsecx_rx_out_aad_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_1_63         : 63;
        uint64_t out_aad               : 1;  /**< [  0:  0](RO/H) Command context index. */
#else /* Word 0 - Little Endian */
        uint64_t out_aad               : 1;  /**< [  0:  0](RO/H) Command context index. */
        uint64_t reserved_1_63         : 63;
#endif /* Word 0 - End */
    } s;
    struct cavm_pemsecx_rx_out_aad_cn
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_32_63        : 32;
        uint64_t reserved_1_31         : 31;
        uint64_t out_aad               : 1;  /**< [  0:  0](RO/H) Command context index. */
#else /* Word 0 - Little Endian */
        uint64_t out_aad               : 1;  /**< [  0:  0](RO/H) Command context index. */
        uint64_t reserved_1_31         : 31;
        uint64_t reserved_32_63        : 32;
#endif /* Word 0 - End */
    } cn;
};
typedef union cavm_pemsecx_rx_out_aad cavm_pemsecx_rx_out_aad_t;

static inline uint64_t CAVM_PEMSECX_RX_OUT_AAD(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_PEMSECX_RX_OUT_AAD(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CN20KA) && (a<=5))
        return 0xc2c000005a28ll + 0x100000000ll * ((a) & 0x7);
    __cavm_csr_fatal("PEMSECX_RX_OUT_AAD", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_PEMSECX_RX_OUT_AAD(a) cavm_pemsecx_rx_out_aad_t
#define bustype_CAVM_PEMSECX_RX_OUT_AAD(a) CSR_TYPE_ARF
#define basename_CAVM_PEMSECX_RX_OUT_AAD(a) "PEMSECX_RX_OUT_AAD"
#define device_bar_CAVM_PEMSECX_RX_OUT_AAD(a) 0x0 /* PF_BAR0 */
#define busnum_CAVM_PEMSECX_RX_OUT_AAD(a) (a)
#define arguments_CAVM_PEMSECX_RX_OUT_AAD(a) (a),-1,-1,-1

/**
 * Register (ARF) pemsec#_rx_out_aad_size
 *
 * RX FIPS Output Out AAD Size Register
 * This register is for testing the IDE encryption logic per the
 * FIPS-197 AES standard.
 *
 * This register is only accessible when
 * PEMSEC_BLK_IDE_CTL[IDE_TEST_ENABLE] is set to 1.
 * Accesses to this register when
 * PEMSEC_BLK_IDE_CTL[IDE_TEST_ENABLE] is set to 0 will return
 * an error.
 */
union cavm_pemsecx_rx_out_aad_size
{
    uint64_t u;
    struct cavm_pemsecx_rx_out_aad_size_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_6_63         : 58;
        uint64_t out_aad_size          : 6;  /**< [  5:  0](RO/H) Byte mask of the Additional Authentication Data (AAD) in the
                                                                 output data. */
#else /* Word 0 - Little Endian */
        uint64_t out_aad_size          : 6;  /**< [  5:  0](RO/H) Byte mask of the Additional Authentication Data (AAD) in the
                                                                 output data. */
        uint64_t reserved_6_63         : 58;
#endif /* Word 0 - End */
    } s;
    struct cavm_pemsecx_rx_out_aad_size_cn
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_32_63        : 32;
        uint64_t reserved_6_31         : 26;
        uint64_t out_aad_size          : 6;  /**< [  5:  0](RO/H) Byte mask of the Additional Authentication Data (AAD) in the
                                                                 output data. */
#else /* Word 0 - Little Endian */
        uint64_t out_aad_size          : 6;  /**< [  5:  0](RO/H) Byte mask of the Additional Authentication Data (AAD) in the
                                                                 output data. */
        uint64_t reserved_6_31         : 26;
        uint64_t reserved_32_63        : 32;
#endif /* Word 0 - End */
    } cn;
};
typedef union cavm_pemsecx_rx_out_aad_size cavm_pemsecx_rx_out_aad_size_t;

static inline uint64_t CAVM_PEMSECX_RX_OUT_AAD_SIZE(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_PEMSECX_RX_OUT_AAD_SIZE(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CN20KA) && (a<=5))
        return 0xc2c000005a30ll + 0x100000000ll * ((a) & 0x7);
    __cavm_csr_fatal("PEMSECX_RX_OUT_AAD_SIZE", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_PEMSECX_RX_OUT_AAD_SIZE(a) cavm_pemsecx_rx_out_aad_size_t
#define bustype_CAVM_PEMSECX_RX_OUT_AAD_SIZE(a) CSR_TYPE_ARF
#define basename_CAVM_PEMSECX_RX_OUT_AAD_SIZE(a) "PEMSECX_RX_OUT_AAD_SIZE"
#define device_bar_CAVM_PEMSECX_RX_OUT_AAD_SIZE(a) 0x0 /* PF_BAR0 */
#define busnum_CAVM_PEMSECX_RX_OUT_AAD_SIZE(a) (a)
#define arguments_CAVM_PEMSECX_RX_OUT_AAD_SIZE(a) (a),-1,-1,-1

/**
 * Register (ARF) pemsec#_rx_out_data_chunk
 *
 * RX FIPS Output Output Data Chunk Register
 * This register is for testing the IDE encryption logic per the
 * FIPS-197 AES standard.
 *
 * This register is only accessible when
 * PEMSEC_BLK_IDE_CTL[IDE_TEST_ENABLE] is set to 1.
 * Accesses to this register when
 * PEMSEC_BLK_IDE_CTL[IDE_TEST_ENABLE] is set to 0 will return
 * an error.
 */
union cavm_pemsecx_rx_out_data_chunk
{
    uint64_t u;
    struct cavm_pemsecx_rx_out_data_chunk_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_32_63        : 32;
        uint64_t out_data_chunk        : 32; /**< [ 31:  0](RO/H) 32b chunk of the calculated message. */
#else /* Word 0 - Little Endian */
        uint64_t out_data_chunk        : 32; /**< [ 31:  0](RO/H) 32b chunk of the calculated message. */
        uint64_t reserved_32_63        : 32;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_pemsecx_rx_out_data_chunk_s cn; */
};
typedef union cavm_pemsecx_rx_out_data_chunk cavm_pemsecx_rx_out_data_chunk_t;

static inline uint64_t CAVM_PEMSECX_RX_OUT_DATA_CHUNK(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_PEMSECX_RX_OUT_DATA_CHUNK(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CN20KA) && (a<=5))
        return 0xc2c000005a50ll + 0x100000000ll * ((a) & 0x7);
    __cavm_csr_fatal("PEMSECX_RX_OUT_DATA_CHUNK", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_PEMSECX_RX_OUT_DATA_CHUNK(a) cavm_pemsecx_rx_out_data_chunk_t
#define bustype_CAVM_PEMSECX_RX_OUT_DATA_CHUNK(a) CSR_TYPE_ARF
#define basename_CAVM_PEMSECX_RX_OUT_DATA_CHUNK(a) "PEMSECX_RX_OUT_DATA_CHUNK"
#define device_bar_CAVM_PEMSECX_RX_OUT_DATA_CHUNK(a) 0x0 /* PF_BAR0 */
#define busnum_CAVM_PEMSECX_RX_OUT_DATA_CHUNK(a) (a)
#define arguments_CAVM_PEMSECX_RX_OUT_DATA_CHUNK(a) (a),-1,-1,-1

/**
 * Register (ARF) pemsec#_rx_out_data_idx
 *
 * RX FIPS Output Output Data IDX Register
 * This register is for testing the IDE encryption logic per the
 * FIPS-197 AES standard.
 *
 * This register is only accessible when
 * PEMSEC_BLK_IDE_CTL[IDE_TEST_ENABLE] is set to 1.
 * Accesses to this register when
 * PEMSEC_BLK_IDE_CTL[IDE_TEST_ENABLE] is set to 0 will return
 * an error.
 */
union cavm_pemsecx_rx_out_data_idx
{
    uint64_t u;
    struct cavm_pemsecx_rx_out_data_idx_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_5_63         : 59;
        uint64_t out_data_idx          : 5;  /**< [  4:  0](R/W) Index of the 32b msg chunk constructing the Message word ,
                                                                 post encryption/decryption. A partial word is left justified on
                                                                 the signal. */
#else /* Word 0 - Little Endian */
        uint64_t out_data_idx          : 5;  /**< [  4:  0](R/W) Index of the 32b msg chunk constructing the Message word ,
                                                                 post encryption/decryption. A partial word is left justified on
                                                                 the signal. */
        uint64_t reserved_5_63         : 59;
#endif /* Word 0 - End */
    } s;
    struct cavm_pemsecx_rx_out_data_idx_cn
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_32_63        : 32;
        uint64_t reserved_5_31         : 27;
        uint64_t out_data_idx          : 5;  /**< [  4:  0](R/W) Index of the 32b msg chunk constructing the Message word ,
                                                                 post encryption/decryption. A partial word is left justified on
                                                                 the signal. */
#else /* Word 0 - Little Endian */
        uint64_t out_data_idx          : 5;  /**< [  4:  0](R/W) Index of the 32b msg chunk constructing the Message word ,
                                                                 post encryption/decryption. A partial word is left justified on
                                                                 the signal. */
        uint64_t reserved_5_31         : 27;
        uint64_t reserved_32_63        : 32;
#endif /* Word 0 - End */
    } cn;
};
typedef union cavm_pemsecx_rx_out_data_idx cavm_pemsecx_rx_out_data_idx_t;

static inline uint64_t CAVM_PEMSECX_RX_OUT_DATA_IDX(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_PEMSECX_RX_OUT_DATA_IDX(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CN20KA) && (a<=5))
        return 0xc2c000005a48ll + 0x100000000ll * ((a) & 0x7);
    __cavm_csr_fatal("PEMSECX_RX_OUT_DATA_IDX", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_PEMSECX_RX_OUT_DATA_IDX(a) cavm_pemsecx_rx_out_data_idx_t
#define bustype_CAVM_PEMSECX_RX_OUT_DATA_IDX(a) CSR_TYPE_ARF
#define basename_CAVM_PEMSECX_RX_OUT_DATA_IDX(a) "PEMSECX_RX_OUT_DATA_IDX"
#define device_bar_CAVM_PEMSECX_RX_OUT_DATA_IDX(a) 0x0 /* PF_BAR0 */
#define busnum_CAVM_PEMSECX_RX_OUT_DATA_IDX(a) (a)
#define arguments_CAVM_PEMSECX_RX_OUT_DATA_IDX(a) (a),-1,-1,-1

/**
 * Register (ARF) pemsec#_rx_out_eop
 *
 * RX FIPS Output EOP Indication Register
 * This register is for testing the IDE encryption logic per the
 * FIPS-197 AES standard.
 *
 * This register is only accessible when
 * PEMSEC_BLK_IDE_CTL[IDE_TEST_ENABLE] is set to 1.
 * Accesses to this register when
 * PEMSEC_BLK_IDE_CTL[IDE_TEST_ENABLE] is set to 0 will return
 * an error.
 */
union cavm_pemsecx_rx_out_eop
{
    uint64_t u;
    struct cavm_pemsecx_rx_out_eop_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_1_63         : 63;
        uint64_t out_eop               : 1;  /**< [  0:  0](RO/H) Reflect the equivalent signal on the Command interface. The
                                                                 value on the output will have an identical value as sent on the
                                                                 input. */
#else /* Word 0 - Little Endian */
        uint64_t out_eop               : 1;  /**< [  0:  0](RO/H) Reflect the equivalent signal on the Command interface. The
                                                                 value on the output will have an identical value as sent on the
                                                                 input. */
        uint64_t reserved_1_63         : 63;
#endif /* Word 0 - End */
    } s;
    struct cavm_pemsecx_rx_out_eop_cn
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_32_63        : 32;
        uint64_t reserved_1_31         : 31;
        uint64_t out_eop               : 1;  /**< [  0:  0](RO/H) Reflect the equivalent signal on the Command interface. The
                                                                 value on the output will have an identical value as sent on the
                                                                 input. */
#else /* Word 0 - Little Endian */
        uint64_t out_eop               : 1;  /**< [  0:  0](RO/H) Reflect the equivalent signal on the Command interface. The
                                                                 value on the output will have an identical value as sent on the
                                                                 input. */
        uint64_t reserved_1_31         : 31;
        uint64_t reserved_32_63        : 32;
#endif /* Word 0 - End */
    } cn;
};
typedef union cavm_pemsecx_rx_out_eop cavm_pemsecx_rx_out_eop_t;

static inline uint64_t CAVM_PEMSECX_RX_OUT_EOP(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_PEMSECX_RX_OUT_EOP(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CN20KA) && (a<=5))
        return 0xc2c000005a18ll + 0x100000000ll * ((a) & 0x7);
    __cavm_csr_fatal("PEMSECX_RX_OUT_EOP", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_PEMSECX_RX_OUT_EOP(a) cavm_pemsecx_rx_out_eop_t
#define bustype_CAVM_PEMSECX_RX_OUT_EOP(a) CSR_TYPE_ARF
#define basename_CAVM_PEMSECX_RX_OUT_EOP(a) "PEMSECX_RX_OUT_EOP"
#define device_bar_CAVM_PEMSECX_RX_OUT_EOP(a) 0x0 /* PF_BAR0 */
#define busnum_CAVM_PEMSECX_RX_OUT_EOP(a) (a)
#define arguments_CAVM_PEMSECX_RX_OUT_EOP(a) (a),-1,-1,-1

/**
 * Register (ARF) pemsec#_rx_out_mac_chunk
 *
 * RX FIPS Output MAC Chunk Register
 * This register is for testing the IDE encryption logic per the
 * FIPS-197 AES standard.
 *
 * This register is only accessible when
 * PEMSEC_BLK_IDE_CTL[IDE_TEST_ENABLE] is set to 1.
 * Accesses to this register when
 * PEMSEC_BLK_IDE_CTL[IDE_TEST_ENABLE] is set to 0 will return
 * an error.
 */
union cavm_pemsecx_rx_out_mac_chunk
{
    uint64_t u;
    struct cavm_pemsecx_rx_out_mac_chunk_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_32_63        : 32;
        uint64_t out_mac_chunk         : 32; /**< [ 31:  0](RO/H) 32b chunk of the calculated MAC value. */
#else /* Word 0 - Little Endian */
        uint64_t out_mac_chunk         : 32; /**< [ 31:  0](RO/H) 32b chunk of the calculated MAC value. */
        uint64_t reserved_32_63        : 32;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_pemsecx_rx_out_mac_chunk_s cn; */
};
typedef union cavm_pemsecx_rx_out_mac_chunk cavm_pemsecx_rx_out_mac_chunk_t;

static inline uint64_t CAVM_PEMSECX_RX_OUT_MAC_CHUNK(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_PEMSECX_RX_OUT_MAC_CHUNK(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CN20KA) && (a<=5))
        return 0xc2c000005a68ll + 0x100000000ll * ((a) & 0x7);
    __cavm_csr_fatal("PEMSECX_RX_OUT_MAC_CHUNK", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_PEMSECX_RX_OUT_MAC_CHUNK(a) cavm_pemsecx_rx_out_mac_chunk_t
#define bustype_CAVM_PEMSECX_RX_OUT_MAC_CHUNK(a) CSR_TYPE_ARF
#define basename_CAVM_PEMSECX_RX_OUT_MAC_CHUNK(a) "PEMSECX_RX_OUT_MAC_CHUNK"
#define device_bar_CAVM_PEMSECX_RX_OUT_MAC_CHUNK(a) 0x0 /* PF_BAR0 */
#define busnum_CAVM_PEMSECX_RX_OUT_MAC_CHUNK(a) (a)
#define arguments_CAVM_PEMSECX_RX_OUT_MAC_CHUNK(a) (a),-1,-1,-1

/**
 * Register (ARF) pemsec#_rx_out_mac_idx
 *
 * RX FIPS Output MAC Index Register
 * This register is for testing the IDE encryption logic per the
 * FIPS-197 AES standard.
 *
 * This register is only accessible when
 * PEMSEC_BLK_IDE_CTL[IDE_TEST_ENABLE] is set to 1.
 * Accesses to this register when
 * PEMSEC_BLK_IDE_CTL[IDE_TEST_ENABLE] is set to 0 will return
 * an error.
 */
union cavm_pemsecx_rx_out_mac_idx
{
    uint64_t u;
    struct cavm_pemsecx_rx_out_mac_idx_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_2_63         : 62;
        uint64_t out_mac_idx           : 2;  /**< [  1:  0](R/W) Index of the 32b MAC chunk constructing the calculated
                                                                 mac. MAC is in Big Endian Byte order. */
#else /* Word 0 - Little Endian */
        uint64_t out_mac_idx           : 2;  /**< [  1:  0](R/W) Index of the 32b MAC chunk constructing the calculated
                                                                 mac. MAC is in Big Endian Byte order. */
        uint64_t reserved_2_63         : 62;
#endif /* Word 0 - End */
    } s;
    struct cavm_pemsecx_rx_out_mac_idx_cn
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_32_63        : 32;
        uint64_t reserved_2_31         : 30;
        uint64_t out_mac_idx           : 2;  /**< [  1:  0](R/W) Index of the 32b MAC chunk constructing the calculated
                                                                 mac. MAC is in Big Endian Byte order. */
#else /* Word 0 - Little Endian */
        uint64_t out_mac_idx           : 2;  /**< [  1:  0](R/W) Index of the 32b MAC chunk constructing the calculated
                                                                 mac. MAC is in Big Endian Byte order. */
        uint64_t reserved_2_31         : 30;
        uint64_t reserved_32_63        : 32;
#endif /* Word 0 - End */
    } cn;
};
typedef union cavm_pemsecx_rx_out_mac_idx cavm_pemsecx_rx_out_mac_idx_t;

static inline uint64_t CAVM_PEMSECX_RX_OUT_MAC_IDX(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_PEMSECX_RX_OUT_MAC_IDX(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CN20KA) && (a<=5))
        return 0xc2c000005a60ll + 0x100000000ll * ((a) & 0x7);
    __cavm_csr_fatal("PEMSECX_RX_OUT_MAC_IDX", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_PEMSECX_RX_OUT_MAC_IDX(a) cavm_pemsecx_rx_out_mac_idx_t
#define bustype_CAVM_PEMSECX_RX_OUT_MAC_IDX(a) CSR_TYPE_ARF
#define basename_CAVM_PEMSECX_RX_OUT_MAC_IDX(a) "PEMSECX_RX_OUT_MAC_IDX"
#define device_bar_CAVM_PEMSECX_RX_OUT_MAC_IDX(a) 0x0 /* PF_BAR0 */
#define busnum_CAVM_PEMSECX_RX_OUT_MAC_IDX(a) (a)
#define arguments_CAVM_PEMSECX_RX_OUT_MAC_IDX(a) (a),-1,-1,-1

/**
 * Register (ARF) pemsec#_rx_out_msg
 *
 * RX_FIPS Output Out MSG Register
 * This register is for testing the IDE encryption logic per the
 * FIPS-197 AES standard.
 *
 * This register is only accessible when
 * PEMSEC_BLK_IDE_CTL[IDE_TEST_ENABLE] is set to 1.
 * Accesses to this register when
 * PEMSEC_BLK_IDE_CTL[IDE_TEST_ENABLE] is set to 0 will return
 * an error.
 */
union cavm_pemsecx_rx_out_msg
{
    uint64_t u;
    struct cavm_pemsecx_rx_out_msg_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_1_63         : 63;
        uint64_t out_msg               : 1;  /**< [  0:  0](RO/H) Message (MSG) present in the output data. */
#else /* Word 0 - Little Endian */
        uint64_t out_msg               : 1;  /**< [  0:  0](RO/H) Message (MSG) present in the output data. */
        uint64_t reserved_1_63         : 63;
#endif /* Word 0 - End */
    } s;
    struct cavm_pemsecx_rx_out_msg_cn
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_32_63        : 32;
        uint64_t reserved_1_31         : 31;
        uint64_t out_msg               : 1;  /**< [  0:  0](RO/H) Message (MSG) present in the output data. */
#else /* Word 0 - Little Endian */
        uint64_t out_msg               : 1;  /**< [  0:  0](RO/H) Message (MSG) present in the output data. */
        uint64_t reserved_1_31         : 31;
        uint64_t reserved_32_63        : 32;
#endif /* Word 0 - End */
    } cn;
};
typedef union cavm_pemsecx_rx_out_msg cavm_pemsecx_rx_out_msg_t;

static inline uint64_t CAVM_PEMSECX_RX_OUT_MSG(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_PEMSECX_RX_OUT_MSG(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CN20KA) && (a<=5))
        return 0xc2c000005a38ll + 0x100000000ll * ((a) & 0x7);
    __cavm_csr_fatal("PEMSECX_RX_OUT_MSG", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_PEMSECX_RX_OUT_MSG(a) cavm_pemsecx_rx_out_msg_t
#define bustype_CAVM_PEMSECX_RX_OUT_MSG(a) CSR_TYPE_ARF
#define basename_CAVM_PEMSECX_RX_OUT_MSG(a) "PEMSECX_RX_OUT_MSG"
#define device_bar_CAVM_PEMSECX_RX_OUT_MSG(a) 0x0 /* PF_BAR0 */
#define busnum_CAVM_PEMSECX_RX_OUT_MSG(a) (a)
#define arguments_CAVM_PEMSECX_RX_OUT_MSG(a) (a),-1,-1,-1

/**
 * Register (ARF) pemsec#_rx_out_msg_size
 *
 * RX FIPS Output Out MSG Size Register
 * This register is for testing the IDE encryption logic per the
 * FIPS-197 AES standard.
 *
 * This register is only accessible when
 * PEMSEC_BLK_IDE_CTL[IDE_TEST_ENABLE] is set to 1.
 * Accesses to this register when
 * PEMSEC_BLK_IDE_CTL[IDE_TEST_ENABLE] is set to 0 will return
 * an error.
 */
union cavm_pemsecx_rx_out_msg_size
{
    uint64_t u;
    struct cavm_pemsecx_rx_out_msg_size_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_7_63         : 57;
        uint64_t out_msg_size          : 7;  /**< [  6:  0](RO/H) Byte mask of the message (MSG) in the MAC output data. */
#else /* Word 0 - Little Endian */
        uint64_t out_msg_size          : 7;  /**< [  6:  0](RO/H) Byte mask of the message (MSG) in the MAC output data. */
        uint64_t reserved_7_63         : 57;
#endif /* Word 0 - End */
    } s;
    struct cavm_pemsecx_rx_out_msg_size_cn
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_32_63        : 32;
        uint64_t reserved_7_31         : 25;
        uint64_t out_msg_size          : 7;  /**< [  6:  0](RO/H) Byte mask of the message (MSG) in the MAC output data. */
#else /* Word 0 - Little Endian */
        uint64_t out_msg_size          : 7;  /**< [  6:  0](RO/H) Byte mask of the message (MSG) in the MAC output data. */
        uint64_t reserved_7_31         : 25;
        uint64_t reserved_32_63        : 32;
#endif /* Word 0 - End */
    } cn;
};
typedef union cavm_pemsecx_rx_out_msg_size cavm_pemsecx_rx_out_msg_size_t;

static inline uint64_t CAVM_PEMSECX_RX_OUT_MSG_SIZE(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_PEMSECX_RX_OUT_MSG_SIZE(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CN20KA) && (a<=5))
        return 0xc2c000005a40ll + 0x100000000ll * ((a) & 0x7);
    __cavm_csr_fatal("PEMSECX_RX_OUT_MSG_SIZE", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_PEMSECX_RX_OUT_MSG_SIZE(a) cavm_pemsecx_rx_out_msg_size_t
#define bustype_CAVM_PEMSECX_RX_OUT_MSG_SIZE(a) CSR_TYPE_ARF
#define basename_CAVM_PEMSECX_RX_OUT_MSG_SIZE(a) "PEMSECX_RX_OUT_MSG_SIZE"
#define device_bar_CAVM_PEMSECX_RX_OUT_MSG_SIZE(a) 0x0 /* PF_BAR0 */
#define busnum_CAVM_PEMSECX_RX_OUT_MSG_SIZE(a) (a)
#define arguments_CAVM_PEMSECX_RX_OUT_MSG_SIZE(a) (a),-1,-1,-1

/**
 * Register (ARF) pemsec#_rx_out_ready
 *
 * RX FIPS Output Ready Register
 * This register is for testing the IDE encryption logic per the
 * FIPS-197 AES standard.
 *
 * This register is only accessible when
 * PEMSEC_BLK_IDE_CTL[IDE_TEST_ENABLE] is set to 1.
 * Accesses to this register when
 * PEMSEC_BLK_IDE_CTL[IDE_TEST_ENABLE] is set to 0 will return
 * an error.
 */
union cavm_pemsecx_rx_out_ready
{
    uint64_t u;
    struct cavm_pemsecx_rx_out_ready_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_1_63         : 63;
        uint64_t out_ready             : 1;  /**< [  0:  0](R/W1S) Output Ready.
                                                                 AXI like valid/ready(!stall) handshake.
                                                                 PEMSEC_RX_OUT_VALID[OUT_VALID] set to 1 will deassert
                                                                 [OUT_READY]. Writing 1 to [OUT_READY] will set [OUT_READY]
                                                                 to 1 and signal that the software is ready to read the
                                                                 next output word from the PEMSEC_IDE_RX_OUT_DATA_CHUNK
                                                                 register. */
#else /* Word 0 - Little Endian */
        uint64_t out_ready             : 1;  /**< [  0:  0](R/W1S) Output Ready.
                                                                 AXI like valid/ready(!stall) handshake.
                                                                 PEMSEC_RX_OUT_VALID[OUT_VALID] set to 1 will deassert
                                                                 [OUT_READY]. Writing 1 to [OUT_READY] will set [OUT_READY]
                                                                 to 1 and signal that the software is ready to read the
                                                                 next output word from the PEMSEC_IDE_RX_OUT_DATA_CHUNK
                                                                 register. */
        uint64_t reserved_1_63         : 63;
#endif /* Word 0 - End */
    } s;
    struct cavm_pemsecx_rx_out_ready_cn
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_32_63        : 32;
        uint64_t reserved_1_31         : 31;
        uint64_t out_ready             : 1;  /**< [  0:  0](R/W1S) Output Ready.
                                                                 AXI like valid/ready(!stall) handshake.
                                                                 PEMSEC_RX_OUT_VALID[OUT_VALID] set to 1 will deassert
                                                                 [OUT_READY]. Writing 1 to [OUT_READY] will set [OUT_READY]
                                                                 to 1 and signal that the software is ready to read the
                                                                 next output word from the PEMSEC_IDE_RX_OUT_DATA_CHUNK
                                                                 register. */
#else /* Word 0 - Little Endian */
        uint64_t out_ready             : 1;  /**< [  0:  0](R/W1S) Output Ready.
                                                                 AXI like valid/ready(!stall) handshake.
                                                                 PEMSEC_RX_OUT_VALID[OUT_VALID] set to 1 will deassert
                                                                 [OUT_READY]. Writing 1 to [OUT_READY] will set [OUT_READY]
                                                                 to 1 and signal that the software is ready to read the
                                                                 next output word from the PEMSEC_IDE_RX_OUT_DATA_CHUNK
                                                                 register. */
        uint64_t reserved_1_31         : 31;
        uint64_t reserved_32_63        : 32;
#endif /* Word 0 - End */
    } cn;
};
typedef union cavm_pemsecx_rx_out_ready cavm_pemsecx_rx_out_ready_t;

static inline uint64_t CAVM_PEMSECX_RX_OUT_READY(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_PEMSECX_RX_OUT_READY(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CN20KA) && (a<=5))
        return 0xc2c000005a00ll + 0x100000000ll * ((a) & 0x7);
    __cavm_csr_fatal("PEMSECX_RX_OUT_READY", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_PEMSECX_RX_OUT_READY(a) cavm_pemsecx_rx_out_ready_t
#define bustype_CAVM_PEMSECX_RX_OUT_READY(a) CSR_TYPE_ARF
#define basename_CAVM_PEMSECX_RX_OUT_READY(a) "PEMSECX_RX_OUT_READY"
#define device_bar_CAVM_PEMSECX_RX_OUT_READY(a) 0x0 /* PF_BAR0 */
#define busnum_CAVM_PEMSECX_RX_OUT_READY(a) (a)
#define arguments_CAVM_PEMSECX_RX_OUT_READY(a) (a),-1,-1,-1

/**
 * Register (ARF) pemsec#_rx_out_sop
 *
 * RX FIPS Output SOP Indication Register
 * This register is for testing the IDE encryption logic per the
 * FIPS-197 AES standard.
 *
 * This register is only accessible when
 * PEMSEC_BLK_IDE_CTL[IDE_TEST_ENABLE] is set to 1.
 * Accesses to this register when
 * PEMSEC_BLK_IDE_CTL[IDE_TEST_ENABLE] is set to 0 will return
 * an error.
 */
union cavm_pemsecx_rx_out_sop
{
    uint64_t u;
    struct cavm_pemsecx_rx_out_sop_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_1_63         : 63;
        uint64_t out_sop               : 1;  /**< [  0:  0](RO/H) Indicates that this command is the first of the packet. */
#else /* Word 0 - Little Endian */
        uint64_t out_sop               : 1;  /**< [  0:  0](RO/H) Indicates that this command is the first of the packet. */
        uint64_t reserved_1_63         : 63;
#endif /* Word 0 - End */
    } s;
    struct cavm_pemsecx_rx_out_sop_cn
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_32_63        : 32;
        uint64_t reserved_1_31         : 31;
        uint64_t out_sop               : 1;  /**< [  0:  0](RO/H) Indicates that this command is the first of the packet. */
#else /* Word 0 - Little Endian */
        uint64_t out_sop               : 1;  /**< [  0:  0](RO/H) Indicates that this command is the first of the packet. */
        uint64_t reserved_1_31         : 31;
        uint64_t reserved_32_63        : 32;
#endif /* Word 0 - End */
    } cn;
};
typedef union cavm_pemsecx_rx_out_sop cavm_pemsecx_rx_out_sop_t;

static inline uint64_t CAVM_PEMSECX_RX_OUT_SOP(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_PEMSECX_RX_OUT_SOP(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CN20KA) && (a<=5))
        return 0xc2c000005a10ll + 0x100000000ll * ((a) & 0x7);
    __cavm_csr_fatal("PEMSECX_RX_OUT_SOP", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_PEMSECX_RX_OUT_SOP(a) cavm_pemsecx_rx_out_sop_t
#define bustype_CAVM_PEMSECX_RX_OUT_SOP(a) CSR_TYPE_ARF
#define basename_CAVM_PEMSECX_RX_OUT_SOP(a) "PEMSECX_RX_OUT_SOP"
#define device_bar_CAVM_PEMSECX_RX_OUT_SOP(a) 0x0 /* PF_BAR0 */
#define busnum_CAVM_PEMSECX_RX_OUT_SOP(a) (a)
#define arguments_CAVM_PEMSECX_RX_OUT_SOP(a) (a),-1,-1,-1

/**
 * Register (ARF) pemsec#_rx_out_valid
 *
 * RX FIPS Output Valid Register
 * This register is for testing the IDE encryption logic per the
 * FIPS-197 AES standard.
 *
 * This register is only accessible when
 * PEMSEC_BLK_IDE_CTL[IDE_TEST_ENABLE] is set to 1.
 * Accesses to this register when
 * PEMSEC_BLK_IDE_CTL[IDE_TEST_ENABLE] is set to 0 will return
 * an error.
 */
union cavm_pemsecx_rx_out_valid
{
    uint64_t u;
    struct cavm_pemsecx_rx_out_valid_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_1_63         : 63;
        uint64_t out_valid             : 1;  /**< [  0:  0](RO/H) AXI like valid/ready(!stall) handshake. */
#else /* Word 0 - Little Endian */
        uint64_t out_valid             : 1;  /**< [  0:  0](RO/H) AXI like valid/ready(!stall) handshake. */
        uint64_t reserved_1_63         : 63;
#endif /* Word 0 - End */
    } s;
    struct cavm_pemsecx_rx_out_valid_cn
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_32_63        : 32;
        uint64_t reserved_1_31         : 31;
        uint64_t out_valid             : 1;  /**< [  0:  0](RO/H) AXI like valid/ready(!stall) handshake. */
#else /* Word 0 - Little Endian */
        uint64_t out_valid             : 1;  /**< [  0:  0](RO/H) AXI like valid/ready(!stall) handshake. */
        uint64_t reserved_1_31         : 31;
        uint64_t reserved_32_63        : 32;
#endif /* Word 0 - End */
    } cn;
};
typedef union cavm_pemsecx_rx_out_valid cavm_pemsecx_rx_out_valid_t;

static inline uint64_t CAVM_PEMSECX_RX_OUT_VALID(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_PEMSECX_RX_OUT_VALID(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CN20KA) && (a<=5))
        return 0xc2c000005a08ll + 0x100000000ll * ((a) & 0x7);
    __cavm_csr_fatal("PEMSECX_RX_OUT_VALID", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_PEMSECX_RX_OUT_VALID(a) cavm_pemsecx_rx_out_valid_t
#define bustype_CAVM_PEMSECX_RX_OUT_VALID(a) CSR_TYPE_ARF
#define basename_CAVM_PEMSECX_RX_OUT_VALID(a) "PEMSECX_RX_OUT_VALID"
#define device_bar_CAVM_PEMSECX_RX_OUT_VALID(a) 0x0 /* PF_BAR0 */
#define busnum_CAVM_PEMSECX_RX_OUT_VALID(a) (a)
#define arguments_CAVM_PEMSECX_RX_OUT_VALID(a) (a),-1,-1,-1

/**
 * Register (ARF) pemsec#_rx_pcrc_err_cnt
 *
 * IDE Rx PCRC Error Count Register
 */
union cavm_pemsecx_rx_pcrc_err_cnt
{
    uint64_t u;
    struct cavm_pemsecx_rx_pcrc_err_cnt_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_8_63         : 56;
        uint64_t rx_pcrc_error_cnt     : 8;  /**< [  7:  0](R/W/H) Number of PCRC errors to be injected.
                                                                 Configuring this field with a value \> 0
                                                                 will enable PCRC error injection.
                                                                 This value is self-decremented after a PCRC
                                                                 error is injected.
                                                                 When this value is 0 no PCRC error is injected. */
#else /* Word 0 - Little Endian */
        uint64_t rx_pcrc_error_cnt     : 8;  /**< [  7:  0](R/W/H) Number of PCRC errors to be injected.
                                                                 Configuring this field with a value \> 0
                                                                 will enable PCRC error injection.
                                                                 This value is self-decremented after a PCRC
                                                                 error is injected.
                                                                 When this value is 0 no PCRC error is injected. */
        uint64_t reserved_8_63         : 56;
#endif /* Word 0 - End */
    } s;
    struct cavm_pemsecx_rx_pcrc_err_cnt_cn
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_32_63        : 32;
        uint64_t reserved_8_31         : 24;
        uint64_t rx_pcrc_error_cnt     : 8;  /**< [  7:  0](R/W/H) Number of PCRC errors to be injected.
                                                                 Configuring this field with a value \> 0
                                                                 will enable PCRC error injection.
                                                                 This value is self-decremented after a PCRC
                                                                 error is injected.
                                                                 When this value is 0 no PCRC error is injected. */
#else /* Word 0 - Little Endian */
        uint64_t rx_pcrc_error_cnt     : 8;  /**< [  7:  0](R/W/H) Number of PCRC errors to be injected.
                                                                 Configuring this field with a value \> 0
                                                                 will enable PCRC error injection.
                                                                 This value is self-decremented after a PCRC
                                                                 error is injected.
                                                                 When this value is 0 no PCRC error is injected. */
        uint64_t reserved_8_31         : 24;
        uint64_t reserved_32_63        : 32;
#endif /* Word 0 - End */
    } cn;
};
typedef union cavm_pemsecx_rx_pcrc_err_cnt cavm_pemsecx_rx_pcrc_err_cnt_t;

static inline uint64_t CAVM_PEMSECX_RX_PCRC_ERR_CNT(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_PEMSECX_RX_PCRC_ERR_CNT(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CN20KA) && (a<=5))
        return 0xc2c000001870ll + 0x100000000ll * ((a) & 0x7);
    __cavm_csr_fatal("PEMSECX_RX_PCRC_ERR_CNT", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_PEMSECX_RX_PCRC_ERR_CNT(a) cavm_pemsecx_rx_pcrc_err_cnt_t
#define bustype_CAVM_PEMSECX_RX_PCRC_ERR_CNT(a) CSR_TYPE_ARF
#define basename_CAVM_PEMSECX_RX_PCRC_ERR_CNT(a) "PEMSECX_RX_PCRC_ERR_CNT"
#define device_bar_CAVM_PEMSECX_RX_PCRC_ERR_CNT(a) 0x0 /* PF_BAR0 */
#define busnum_CAVM_PEMSECX_RX_PCRC_ERR_CNT(a) (a)
#define arguments_CAVM_PEMSECX_RX_PCRC_ERR_CNT(a) (a),-1,-1,-1

/**
 * Register (ARF) pemsec#_rx_pcrc_err_mask
 *
 * IDE Rx PCRC Error Mask Register
 */
union cavm_pemsecx_rx_pcrc_err_mask
{
    uint64_t u;
    struct cavm_pemsecx_rx_pcrc_err_mask_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_32_63        : 32;
        uint64_t rx_pcrc_error_mask    : 32; /**< [ 31:  0](R/W) 32 bit PCRC error mask value.
                                                                 This value flips the respective bits
                                                                 of the initial PCRC value.
                                                                 Default value indicates 0 error. */
#else /* Word 0 - Little Endian */
        uint64_t rx_pcrc_error_mask    : 32; /**< [ 31:  0](R/W) 32 bit PCRC error mask value.
                                                                 This value flips the respective bits
                                                                 of the initial PCRC value.
                                                                 Default value indicates 0 error. */
        uint64_t reserved_32_63        : 32;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_pemsecx_rx_pcrc_err_mask_s cn; */
};
typedef union cavm_pemsecx_rx_pcrc_err_mask cavm_pemsecx_rx_pcrc_err_mask_t;

static inline uint64_t CAVM_PEMSECX_RX_PCRC_ERR_MASK(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_PEMSECX_RX_PCRC_ERR_MASK(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CN20KA) && (a<=5))
        return 0xc2c000001868ll + 0x100000000ll * ((a) & 0x7);
    __cavm_csr_fatal("PEMSECX_RX_PCRC_ERR_MASK", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_PEMSECX_RX_PCRC_ERR_MASK(a) cavm_pemsecx_rx_pcrc_err_mask_t
#define bustype_CAVM_PEMSECX_RX_PCRC_ERR_MASK(a) CSR_TYPE_ARF
#define basename_CAVM_PEMSECX_RX_PCRC_ERR_MASK(a) "PEMSECX_RX_PCRC_ERR_MASK"
#define device_bar_CAVM_PEMSECX_RX_PCRC_ERR_MASK(a) 0x0 /* PF_BAR0 */
#define busnum_CAVM_PEMSECX_RX_PCRC_ERR_MASK(a) (a)
#define arguments_CAVM_PEMSECX_RX_PCRC_ERR_MASK(a) (a),-1,-1,-1

/**
 * Register (ARF) pemsec#_rx_stat
 *
 * RX Status Register
 */
union cavm_pemsecx_rx_stat
{
    uint64_t u;
    struct cavm_pemsecx_rx_stat_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_1_63         : 63;
        uint64_t busy                  : 1;  /**< [  0:  0](RO/H) Indicates that the core is busy installing a key.
                                                                 All other registers must not be written while this field
                                                                 indicates a 1. */
#else /* Word 0 - Little Endian */
        uint64_t busy                  : 1;  /**< [  0:  0](RO/H) Indicates that the core is busy installing a key.
                                                                 All other registers must not be written while this field
                                                                 indicates a 1. */
        uint64_t reserved_1_63         : 63;
#endif /* Word 0 - End */
    } s;
    struct cavm_pemsecx_rx_stat_cn
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_32_63        : 32;
        uint64_t reserved_2_31         : 30;
        uint64_t reserved_1            : 1;
        uint64_t busy                  : 1;  /**< [  0:  0](RO/H) Indicates that the core is busy installing a key.
                                                                 All other registers must not be written while this field
                                                                 indicates a 1. */
#else /* Word 0 - Little Endian */
        uint64_t busy                  : 1;  /**< [  0:  0](RO/H) Indicates that the core is busy installing a key.
                                                                 All other registers must not be written while this field
                                                                 indicates a 1. */
        uint64_t reserved_1            : 1;
        uint64_t reserved_2_31         : 30;
        uint64_t reserved_32_63        : 32;
#endif /* Word 0 - End */
    } cn;
};
typedef union cavm_pemsecx_rx_stat cavm_pemsecx_rx_stat_t;

static inline uint64_t CAVM_PEMSECX_RX_STAT(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_PEMSECX_RX_STAT(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CN20KA) && (a<=5))
        return 0xc2c000005030ll + 0x100000000ll * ((a) & 0x7);
    __cavm_csr_fatal("PEMSECX_RX_STAT", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_PEMSECX_RX_STAT(a) cavm_pemsecx_rx_stat_t
#define bustype_CAVM_PEMSECX_RX_STAT(a) CSR_TYPE_ARF
#define basename_CAVM_PEMSECX_RX_STAT(a) "PEMSECX_RX_STAT"
#define device_bar_CAVM_PEMSECX_RX_STAT(a) 0x0 /* PF_BAR0 */
#define busnum_CAVM_PEMSECX_RX_STAT(a) (a)
#define arguments_CAVM_PEMSECX_RX_STAT(a) (a),-1,-1,-1

/**
 * Register (ARF) pemsec#_rx_test_mode_cfg
 *
 * RX FIPS Test Mode Configuration Register
 * This register is for testing the IDE encryption logic per the
 * FIPS-197 AES standard.
 *
 * This register is only accessible when
 * PEMSEC_BLK_IDE_CTL[IDE_TEST_ENABLE] is set to 1.
 * Accesses to this register when
 * PEMSEC_BLK_IDE_CTL[IDE_TEST_ENABLE] is set to 0 will return
 * an error.
 */
union cavm_pemsecx_rx_test_mode_cfg
{
    uint64_t u;
    struct cavm_pemsecx_rx_test_mode_cfg_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_2_63         : 62;
        uint64_t test_mode_cfg         : 2;  /**< [  1:  0](R/W) FIPS Test Mode Configuration.
                                                                    0x0 - GCM
                                                                    0x1 - Reserved
                                                                    0x2 - CTR
                                                                    0x3 - ECB */
#else /* Word 0 - Little Endian */
        uint64_t test_mode_cfg         : 2;  /**< [  1:  0](R/W) FIPS Test Mode Configuration.
                                                                    0x0 - GCM
                                                                    0x1 - Reserved
                                                                    0x2 - CTR
                                                                    0x3 - ECB */
        uint64_t reserved_2_63         : 62;
#endif /* Word 0 - End */
    } s;
    struct cavm_pemsecx_rx_test_mode_cfg_cn
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_32_63        : 32;
        uint64_t reserved_2_31         : 30;
        uint64_t test_mode_cfg         : 2;  /**< [  1:  0](R/W) FIPS Test Mode Configuration.
                                                                    0x0 - GCM
                                                                    0x1 - Reserved
                                                                    0x2 - CTR
                                                                    0x3 - ECB */
#else /* Word 0 - Little Endian */
        uint64_t test_mode_cfg         : 2;  /**< [  1:  0](R/W) FIPS Test Mode Configuration.
                                                                    0x0 - GCM
                                                                    0x1 - Reserved
                                                                    0x2 - CTR
                                                                    0x3 - ECB */
        uint64_t reserved_2_31         : 30;
        uint64_t reserved_32_63        : 32;
#endif /* Word 0 - End */
    } cn;
};
typedef union cavm_pemsecx_rx_test_mode_cfg cavm_pemsecx_rx_test_mode_cfg_t;

static inline uint64_t CAVM_PEMSECX_RX_TEST_MODE_CFG(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_PEMSECX_RX_TEST_MODE_CFG(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CN20KA) && (a<=5))
        return 0xc2c000005898ll + 0x100000000ll * ((a) & 0x7);
    __cavm_csr_fatal("PEMSECX_RX_TEST_MODE_CFG", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_PEMSECX_RX_TEST_MODE_CFG(a) cavm_pemsecx_rx_test_mode_cfg_t
#define bustype_CAVM_PEMSECX_RX_TEST_MODE_CFG(a) CSR_TYPE_ARF
#define basename_CAVM_PEMSECX_RX_TEST_MODE_CFG(a) "PEMSECX_RX_TEST_MODE_CFG"
#define device_bar_CAVM_PEMSECX_RX_TEST_MODE_CFG(a) 0x0 /* PF_BAR0 */
#define busnum_CAVM_PEMSECX_RX_TEST_MODE_CFG(a) (a)
#define arguments_CAVM_PEMSECX_RX_TEST_MODE_CFG(a) (a),-1,-1,-1

/**
 * Register (ARF) pemsec#_scratch#
 *
 * PEMSEC Scratch Registers
 * Scratch Resisters.
 * These registers are reset on core domain reset.
 */
union cavm_pemsecx_scratchx
{
    uint64_t u;
    struct cavm_pemsecx_scratchx_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t scratch               : 64; /**< [ 63:  0](R/W) Scratch registers for software use, no hardware impact. */
#else /* Word 0 - Little Endian */
        uint64_t scratch               : 64; /**< [ 63:  0](R/W) Scratch registers for software use, no hardware impact. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_pemsecx_scratchx_s cn; */
};
typedef union cavm_pemsecx_scratchx cavm_pemsecx_scratchx_t;

static inline uint64_t CAVM_PEMSECX_SCRATCHX(uint64_t a, uint64_t b) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_PEMSECX_SCRATCHX(uint64_t a, uint64_t b)
{
    if (cavm_is_model(OCTEONTX_CN20KA) && ((a<=5) && (b<=7)))
        return 0xc2c000008000ll + 0x100000000ll * ((a) & 0x7) + 8ll * ((b) & 0x7);
    __cavm_csr_fatal("PEMSECX_SCRATCHX", 2, a, b, 0, 0, 0, 0);
}

#define typedef_CAVM_PEMSECX_SCRATCHX(a,b) cavm_pemsecx_scratchx_t
#define bustype_CAVM_PEMSECX_SCRATCHX(a,b) CSR_TYPE_ARF
#define basename_CAVM_PEMSECX_SCRATCHX(a,b) "PEMSECX_SCRATCHX"
#define device_bar_CAVM_PEMSECX_SCRATCHX(a,b) 0x0 /* PF_BAR0 */
#define busnum_CAVM_PEMSECX_SCRATCHX(a,b) (a)
#define arguments_CAVM_PEMSECX_SCRATCHX(a,b) (a),(b),-1,-1

/**
 * Register (ARF) pemsec#_tx_aes_sel
 *
 * TX_FIPS AES Selection Register
 * This register is for testing the IDE encryption logic per the
 * FIPS-197 AES standard.
 *
 * This register is only accessible when
 * PEMSEC_BLK_IDE_CTL[IDE_TEST_ENABLE] is set to 1.
 * Accesses to this register when
 * PEMSEC_BLK_IDE_CTL[IDE_TEST_ENABLE] is set to 0 will return
 * an error.
 */
union cavm_pemsecx_tx_aes_sel
{
    uint64_t u;
    struct cavm_pemsecx_tx_aes_sel_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_1_63         : 63;
        uint64_t aes_sel               : 1;  /**< [  0:  0](R/W) Selects which AES to be served by the FIPS 140-3 test
                                                                 mode. */
#else /* Word 0 - Little Endian */
        uint64_t aes_sel               : 1;  /**< [  0:  0](R/W) Selects which AES to be served by the FIPS 140-3 test
                                                                 mode. */
        uint64_t reserved_1_63         : 63;
#endif /* Word 0 - End */
    } s;
    struct cavm_pemsecx_tx_aes_sel_cn
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_32_63        : 32;
        uint64_t reserved_1_31         : 31;
        uint64_t aes_sel               : 1;  /**< [  0:  0](R/W) Selects which AES to be served by the FIPS 140-3 test
                                                                 mode. */
#else /* Word 0 - Little Endian */
        uint64_t aes_sel               : 1;  /**< [  0:  0](R/W) Selects which AES to be served by the FIPS 140-3 test
                                                                 mode. */
        uint64_t reserved_1_31         : 31;
        uint64_t reserved_32_63        : 32;
#endif /* Word 0 - End */
    } cn;
};
typedef union cavm_pemsecx_tx_aes_sel cavm_pemsecx_tx_aes_sel_t;

static inline uint64_t CAVM_PEMSECX_TX_AES_SEL(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_PEMSECX_TX_AES_SEL(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CN20KA) && (a<=5))
        return 0xc2c000004bf8ll + 0x100000000ll * ((a) & 0x7);
    __cavm_csr_fatal("PEMSECX_TX_AES_SEL", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_PEMSECX_TX_AES_SEL(a) cavm_pemsecx_tx_aes_sel_t
#define bustype_CAVM_PEMSECX_TX_AES_SEL(a) CSR_TYPE_ARF
#define basename_CAVM_PEMSECX_TX_AES_SEL(a) "PEMSECX_TX_AES_SEL"
#define device_bar_CAVM_PEMSECX_TX_AES_SEL(a) 0x0 /* PF_BAR0 */
#define busnum_CAVM_PEMSECX_TX_AES_SEL(a) (a)
#define arguments_CAVM_PEMSECX_TX_AES_SEL(a) (a),-1,-1,-1

/**
 * Register (ARF) pemsec#_tx_cmd_aad
 *
 * TX FIPS Command - CMD AAD Register
 * This register is for testing the IDE encryption logic per the
 * FIPS-197 AES standard.
 *
 * This register is only accessible when
 * PEMSEC_BLK_IDE_CTL[IDE_TEST_ENABLE] is set to 1.
 * Accesses to this register when
 * PEMSEC_BLK_IDE_CTL[IDE_TEST_ENABLE] is set to 0 will return
 * an error.
 */
union cavm_pemsecx_tx_cmd_aad
{
    uint64_t u;
    struct cavm_pemsecx_tx_cmd_aad_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_1_63         : 63;
        uint64_t cmd_aad               : 1;  /**< [  0:  0](R/W) Additional Authentication Data (AAD) present in the input
                                                                 data. */
#else /* Word 0 - Little Endian */
        uint64_t cmd_aad               : 1;  /**< [  0:  0](R/W) Additional Authentication Data (AAD) present in the input
                                                                 data. */
        uint64_t reserved_1_63         : 63;
#endif /* Word 0 - End */
    } s;
    struct cavm_pemsecx_tx_cmd_aad_cn
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_32_63        : 32;
        uint64_t reserved_1_31         : 31;
        uint64_t cmd_aad               : 1;  /**< [  0:  0](R/W) Additional Authentication Data (AAD) present in the input
                                                                 data. */
#else /* Word 0 - Little Endian */
        uint64_t cmd_aad               : 1;  /**< [  0:  0](R/W) Additional Authentication Data (AAD) present in the input
                                                                 data. */
        uint64_t reserved_1_31         : 31;
        uint64_t reserved_32_63        : 32;
#endif /* Word 0 - End */
    } cn;
};
typedef union cavm_pemsecx_tx_cmd_aad cavm_pemsecx_tx_cmd_aad_t;

static inline uint64_t CAVM_PEMSECX_TX_CMD_AAD(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_PEMSECX_TX_CMD_AAD(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CN20KA) && (a<=5))
        return 0xc2c000004810ll + 0x100000000ll * ((a) & 0x7);
    __cavm_csr_fatal("PEMSECX_TX_CMD_AAD", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_PEMSECX_TX_CMD_AAD(a) cavm_pemsecx_tx_cmd_aad_t
#define bustype_CAVM_PEMSECX_TX_CMD_AAD(a) CSR_TYPE_ARF
#define basename_CAVM_PEMSECX_TX_CMD_AAD(a) "PEMSECX_TX_CMD_AAD"
#define device_bar_CAVM_PEMSECX_TX_CMD_AAD(a) 0x0 /* PF_BAR0 */
#define busnum_CAVM_PEMSECX_TX_CMD_AAD(a) (a)
#define arguments_CAVM_PEMSECX_TX_CMD_AAD(a) (a),-1,-1,-1

/**
 * Register (ARF) pemsec#_tx_cmd_aad_size
 *
 * TX FIPS Command - CMD AAD SIZE Register
 * This register is for testing the IDE encryption logic per the
 * FIPS-197 AES standard.
 *
 * This register is only accessible when
 * PEMSEC_BLK_IDE_CTL[IDE_TEST_ENABLE] is set to 1.
 * Accesses to this register when
 * PEMSEC_BLK_IDE_CTL[IDE_TEST_ENABLE] is set to 0 will return
 * an error.
 */
union cavm_pemsecx_tx_cmd_aad_size
{
    uint64_t u;
    struct cavm_pemsecx_tx_cmd_aad_size_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_6_63         : 58;
        uint64_t cmd_aad_size          : 6;  /**< [  5:  0](R/W) Byte mask of the Additional Authentication Data (AAD) in the
                                                                 input data. */
#else /* Word 0 - Little Endian */
        uint64_t cmd_aad_size          : 6;  /**< [  5:  0](R/W) Byte mask of the Additional Authentication Data (AAD) in the
                                                                 input data. */
        uint64_t reserved_6_63         : 58;
#endif /* Word 0 - End */
    } s;
    struct cavm_pemsecx_tx_cmd_aad_size_cn
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_32_63        : 32;
        uint64_t reserved_6_31         : 26;
        uint64_t cmd_aad_size          : 6;  /**< [  5:  0](R/W) Byte mask of the Additional Authentication Data (AAD) in the
                                                                 input data. */
#else /* Word 0 - Little Endian */
        uint64_t cmd_aad_size          : 6;  /**< [  5:  0](R/W) Byte mask of the Additional Authentication Data (AAD) in the
                                                                 input data. */
        uint64_t reserved_6_31         : 26;
        uint64_t reserved_32_63        : 32;
#endif /* Word 0 - End */
    } cn;
};
typedef union cavm_pemsecx_tx_cmd_aad_size cavm_pemsecx_tx_cmd_aad_size_t;

static inline uint64_t CAVM_PEMSECX_TX_CMD_AAD_SIZE(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_PEMSECX_TX_CMD_AAD_SIZE(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CN20KA) && (a<=5))
        return 0xc2c000004848ll + 0x100000000ll * ((a) & 0x7);
    __cavm_csr_fatal("PEMSECX_TX_CMD_AAD_SIZE", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_PEMSECX_TX_CMD_AAD_SIZE(a) cavm_pemsecx_tx_cmd_aad_size_t
#define bustype_CAVM_PEMSECX_TX_CMD_AAD_SIZE(a) CSR_TYPE_ARF
#define basename_CAVM_PEMSECX_TX_CMD_AAD_SIZE(a) "PEMSECX_TX_CMD_AAD_SIZE"
#define device_bar_CAVM_PEMSECX_TX_CMD_AAD_SIZE(a) 0x0 /* PF_BAR0 */
#define busnum_CAVM_PEMSECX_TX_CMD_AAD_SIZE(a) (a)
#define arguments_CAVM_PEMSECX_TX_CMD_AAD_SIZE(a) (a),-1,-1,-1

/**
 * Register (ARF) pemsec#_tx_cmd_ctx
 *
 * TX FIPS Command - CTX Register
 * This register is for testing the IDE encryption logic per the
 * FIPS-197 AES standard.
 *
 * This register is only accessible when
 * PEMSEC_BLK_IDE_CTL[IDE_TEST_ENABLE] is set to 1.
 * Accesses to this register when
 * PEMSEC_BLK_IDE_CTL[IDE_TEST_ENABLE] is set to 0 will return
 * an error.
 */
union cavm_pemsecx_tx_cmd_ctx
{
    uint64_t u;
    struct cavm_pemsecx_tx_cmd_ctx_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_4_63         : 60;
        uint64_t cmd_ctx               : 4;  /**< [  3:  0](R/W) Command context index. */
#else /* Word 0 - Little Endian */
        uint64_t cmd_ctx               : 4;  /**< [  3:  0](R/W) Command context index. */
        uint64_t reserved_4_63         : 60;
#endif /* Word 0 - End */
    } s;
    struct cavm_pemsecx_tx_cmd_ctx_cn
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_32_63        : 32;
        uint64_t reserved_4_31         : 28;
        uint64_t cmd_ctx               : 4;  /**< [  3:  0](R/W) Command context index. */
#else /* Word 0 - Little Endian */
        uint64_t cmd_ctx               : 4;  /**< [  3:  0](R/W) Command context index. */
        uint64_t reserved_4_31         : 28;
        uint64_t reserved_32_63        : 32;
#endif /* Word 0 - End */
    } cn;
};
typedef union cavm_pemsecx_tx_cmd_ctx cavm_pemsecx_tx_cmd_ctx_t;

static inline uint64_t CAVM_PEMSECX_TX_CMD_CTX(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_PEMSECX_TX_CMD_CTX(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CN20KA) && (a<=5))
        return 0xc2c000004858ll + 0x100000000ll * ((a) & 0x7);
    __cavm_csr_fatal("PEMSECX_TX_CMD_CTX", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_PEMSECX_TX_CMD_CTX(a) cavm_pemsecx_tx_cmd_ctx_t
#define bustype_CAVM_PEMSECX_TX_CMD_CTX(a) CSR_TYPE_ARF
#define basename_CAVM_PEMSECX_TX_CMD_CTX(a) "PEMSECX_TX_CMD_CTX"
#define device_bar_CAVM_PEMSECX_TX_CMD_CTX(a) 0x0 /* PF_BAR0 */
#define busnum_CAVM_PEMSECX_TX_CMD_CTX(a) (a)
#define arguments_CAVM_PEMSECX_TX_CMD_CTX(a) (a),-1,-1,-1

/**
 * Register (ARF) pemsec#_tx_cmd_eop
 *
 * TX FIPS Command - CMD EOP Register
 * This register is for testing the IDE encryption logic per the
 * FIPS-197 AES standard.
 *
 * This register is only accessible when
 * PEMSEC_BLK_IDE_CTL[IDE_TEST_ENABLE] is set to 1.
 * Accesses to this register when
 * PEMSEC_BLK_IDE_CTL[IDE_TEST_ENABLE] is set to 0 will return
 * an error.
 */
union cavm_pemsecx_tx_cmd_eop
{
    uint64_t u;
    struct cavm_pemsecx_tx_cmd_eop_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_1_63         : 63;
        uint64_t cmd_eop               : 1;  /**< [  0:  0](R/W) Ends a counter stream. */
#else /* Word 0 - Little Endian */
        uint64_t cmd_eop               : 1;  /**< [  0:  0](R/W) Ends a counter stream. */
        uint64_t reserved_1_63         : 63;
#endif /* Word 0 - End */
    } s;
    struct cavm_pemsecx_tx_cmd_eop_cn
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_32_63        : 32;
        uint64_t reserved_1_31         : 31;
        uint64_t cmd_eop               : 1;  /**< [  0:  0](R/W) Ends a counter stream. */
#else /* Word 0 - Little Endian */
        uint64_t cmd_eop               : 1;  /**< [  0:  0](R/W) Ends a counter stream. */
        uint64_t reserved_1_31         : 31;
        uint64_t reserved_32_63        : 32;
#endif /* Word 0 - End */
    } cn;
};
typedef union cavm_pemsecx_tx_cmd_eop cavm_pemsecx_tx_cmd_eop_t;

static inline uint64_t CAVM_PEMSECX_TX_CMD_EOP(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_PEMSECX_TX_CMD_EOP(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CN20KA) && (a<=5))
        return 0xc2c000004808ll + 0x100000000ll * ((a) & 0x7);
    __cavm_csr_fatal("PEMSECX_TX_CMD_EOP", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_PEMSECX_TX_CMD_EOP(a) cavm_pemsecx_tx_cmd_eop_t
#define bustype_CAVM_PEMSECX_TX_CMD_EOP(a) CSR_TYPE_ARF
#define basename_CAVM_PEMSECX_TX_CMD_EOP(a) "PEMSECX_TX_CMD_EOP"
#define device_bar_CAVM_PEMSECX_TX_CMD_EOP(a) 0x0 /* PF_BAR0 */
#define busnum_CAVM_PEMSECX_TX_CMD_EOP(a) (a)
#define arguments_CAVM_PEMSECX_TX_CMD_EOP(a) (a),-1,-1,-1

/**
 * Register (ARF) pemsec#_tx_cmd_msg
 *
 * TX FIPS Command - CMD MSG Register
 * This register is for testing the IDE encryption logic per the
 * FIPS-197 AES standard.
 *
 * This register is only accessible when
 * PEMSEC_BLK_IDE_CTL[IDE_TEST_ENABLE] is set to 1.
 * Accesses to this register when
 * PEMSEC_BLK_IDE_CTL[IDE_TEST_ENABLE] is set to 0 will return
 * an error.
 */
union cavm_pemsecx_tx_cmd_msg
{
    uint64_t u;
    struct cavm_pemsecx_tx_cmd_msg_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_1_63         : 63;
        uint64_t cmd_msg               : 1;  /**< [  0:  0](R/W/H) Message (MSG) present in the input data. */
#else /* Word 0 - Little Endian */
        uint64_t cmd_msg               : 1;  /**< [  0:  0](R/W/H) Message (MSG) present in the input data. */
        uint64_t reserved_1_63         : 63;
#endif /* Word 0 - End */
    } s;
    struct cavm_pemsecx_tx_cmd_msg_cn
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_32_63        : 32;
        uint64_t reserved_1_31         : 31;
        uint64_t cmd_msg               : 1;  /**< [  0:  0](R/W/H) Message (MSG) present in the input data. */
#else /* Word 0 - Little Endian */
        uint64_t cmd_msg               : 1;  /**< [  0:  0](R/W/H) Message (MSG) present in the input data. */
        uint64_t reserved_1_31         : 31;
        uint64_t reserved_32_63        : 32;
#endif /* Word 0 - End */
    } cn;
};
typedef union cavm_pemsecx_tx_cmd_msg cavm_pemsecx_tx_cmd_msg_t;

static inline uint64_t CAVM_PEMSECX_TX_CMD_MSG(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_PEMSECX_TX_CMD_MSG(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CN20KA) && (a<=5))
        return 0xc2c000004818ll + 0x100000000ll * ((a) & 0x7);
    __cavm_csr_fatal("PEMSECX_TX_CMD_MSG", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_PEMSECX_TX_CMD_MSG(a) cavm_pemsecx_tx_cmd_msg_t
#define bustype_CAVM_PEMSECX_TX_CMD_MSG(a) CSR_TYPE_ARF
#define basename_CAVM_PEMSECX_TX_CMD_MSG(a) "PEMSECX_TX_CMD_MSG"
#define device_bar_CAVM_PEMSECX_TX_CMD_MSG(a) 0x0 /* PF_BAR0 */
#define busnum_CAVM_PEMSECX_TX_CMD_MSG(a) (a)
#define arguments_CAVM_PEMSECX_TX_CMD_MSG(a) (a),-1,-1,-1

/**
 * Register (ARF) pemsec#_tx_cmd_msg_size
 *
 * TX FIPS Command - CMD MSG SIZE Register
 * This register is for testing the IDE encryption logic per the
 * FIPS-197 AES standard.
 *
 * This register is only accessible when
 * PEMSEC_BLK_IDE_CTL[IDE_TEST_ENABLE] is set to 1.
 * Accesses to this register when
 * PEMSEC_BLK_IDE_CTL[IDE_TEST_ENABLE] is set to 0 will return
 * an error.
 */
union cavm_pemsecx_tx_cmd_msg_size
{
    uint64_t u;
    struct cavm_pemsecx_tx_cmd_msg_size_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_7_63         : 57;
        uint64_t cmd_msg_size          : 7;  /**< [  6:  0](R/W) Byte mask of the message (MSG) in the MAC input data. */
#else /* Word 0 - Little Endian */
        uint64_t cmd_msg_size          : 7;  /**< [  6:  0](R/W) Byte mask of the message (MSG) in the MAC input data. */
        uint64_t reserved_7_63         : 57;
#endif /* Word 0 - End */
    } s;
    struct cavm_pemsecx_tx_cmd_msg_size_cn
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_32_63        : 32;
        uint64_t reserved_7_31         : 25;
        uint64_t cmd_msg_size          : 7;  /**< [  6:  0](R/W) Byte mask of the message (MSG) in the MAC input data. */
#else /* Word 0 - Little Endian */
        uint64_t cmd_msg_size          : 7;  /**< [  6:  0](R/W) Byte mask of the message (MSG) in the MAC input data. */
        uint64_t reserved_7_31         : 25;
        uint64_t reserved_32_63        : 32;
#endif /* Word 0 - End */
    } cn;
};
typedef union cavm_pemsecx_tx_cmd_msg_size cavm_pemsecx_tx_cmd_msg_size_t;

static inline uint64_t CAVM_PEMSECX_TX_CMD_MSG_SIZE(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_PEMSECX_TX_CMD_MSG_SIZE(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CN20KA) && (a<=5))
        return 0xc2c000004850ll + 0x100000000ll * ((a) & 0x7);
    __cavm_csr_fatal("PEMSECX_TX_CMD_MSG_SIZE", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_PEMSECX_TX_CMD_MSG_SIZE(a) cavm_pemsecx_tx_cmd_msg_size_t
#define bustype_CAVM_PEMSECX_TX_CMD_MSG_SIZE(a) CSR_TYPE_ARF
#define basename_CAVM_PEMSECX_TX_CMD_MSG_SIZE(a) "PEMSECX_TX_CMD_MSG_SIZE"
#define device_bar_CAVM_PEMSECX_TX_CMD_MSG_SIZE(a) 0x0 /* PF_BAR0 */
#define busnum_CAVM_PEMSECX_TX_CMD_MSG_SIZE(a) (a)
#define arguments_CAVM_PEMSECX_TX_CMD_MSG_SIZE(a) (a),-1,-1,-1

/**
 * Register (ARF) pemsec#_tx_cmd_ready
 *
 * TX FIPS Command - CMD Ready Register
 * This register is for testing the IDE encryption logic per the
 * FIPS-197 AES standard.
 *
 * This register is only accessible when
 * PEMSEC_BLK_IDE_CTL[IDE_TEST_ENABLE] is set to 1.
 * Accesses to this register when
 * PEMSEC_BLK_IDE_CTL[IDE_TEST_ENABLE] is set to 0 will return
 * an error.
 */
union cavm_pemsecx_tx_cmd_ready
{
    uint64_t u;
    struct cavm_pemsecx_tx_cmd_ready_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_1_63         : 63;
        uint64_t cmd_ready             : 1;  /**< [  0:  0](RO/H) AXI like valid/ready handshake. */
#else /* Word 0 - Little Endian */
        uint64_t cmd_ready             : 1;  /**< [  0:  0](RO/H) AXI like valid/ready handshake. */
        uint64_t reserved_1_63         : 63;
#endif /* Word 0 - End */
    } s;
    struct cavm_pemsecx_tx_cmd_ready_cn
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_32_63        : 32;
        uint64_t reserved_1_31         : 31;
        uint64_t cmd_ready             : 1;  /**< [  0:  0](RO/H) AXI like valid/ready handshake. */
#else /* Word 0 - Little Endian */
        uint64_t cmd_ready             : 1;  /**< [  0:  0](RO/H) AXI like valid/ready handshake. */
        uint64_t reserved_1_31         : 31;
        uint64_t reserved_32_63        : 32;
#endif /* Word 0 - End */
    } cn;
};
typedef union cavm_pemsecx_tx_cmd_ready cavm_pemsecx_tx_cmd_ready_t;

static inline uint64_t CAVM_PEMSECX_TX_CMD_READY(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_PEMSECX_TX_CMD_READY(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CN20KA) && (a<=5))
        return 0xc2c000004868ll + 0x100000000ll * ((a) & 0x7);
    __cavm_csr_fatal("PEMSECX_TX_CMD_READY", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_PEMSECX_TX_CMD_READY(a) cavm_pemsecx_tx_cmd_ready_t
#define bustype_CAVM_PEMSECX_TX_CMD_READY(a) CSR_TYPE_ARF
#define basename_CAVM_PEMSECX_TX_CMD_READY(a) "PEMSECX_TX_CMD_READY"
#define device_bar_CAVM_PEMSECX_TX_CMD_READY(a) 0x0 /* PF_BAR0 */
#define busnum_CAVM_PEMSECX_TX_CMD_READY(a) (a)
#define arguments_CAVM_PEMSECX_TX_CMD_READY(a) (a),-1,-1,-1

/**
 * Register (ARF) pemsec#_tx_cmd_sop
 *
 * TX FIPS Command - CMD SOP Register
 * This register is for testing the IDE encryption logic per the
 * FIPS-197 AES standard.
 *
 * This register is only accessible when
 * PEMSEC_BLK_IDE_CTL[IDE_TEST_ENABLE] is set to 1.
 * Accesses to this register when
 * PEMSEC_BLK_IDE_CTL[IDE_TEST_ENABLE] is set to 0 will return
 * an error.
 */
union cavm_pemsecx_tx_cmd_sop
{
    uint64_t u;
    struct cavm_pemsecx_tx_cmd_sop_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_1_63         : 63;
        uint64_t cmd_sop               : 1;  /**< [  0:  0](R/W) Starts a new counter stream. */
#else /* Word 0 - Little Endian */
        uint64_t cmd_sop               : 1;  /**< [  0:  0](R/W) Starts a new counter stream. */
        uint64_t reserved_1_63         : 63;
#endif /* Word 0 - End */
    } s;
    struct cavm_pemsecx_tx_cmd_sop_cn
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_32_63        : 32;
        uint64_t reserved_1_31         : 31;
        uint64_t cmd_sop               : 1;  /**< [  0:  0](R/W) Starts a new counter stream. */
#else /* Word 0 - Little Endian */
        uint64_t cmd_sop               : 1;  /**< [  0:  0](R/W) Starts a new counter stream. */
        uint64_t reserved_1_31         : 31;
        uint64_t reserved_32_63        : 32;
#endif /* Word 0 - End */
    } cn;
};
typedef union cavm_pemsecx_tx_cmd_sop cavm_pemsecx_tx_cmd_sop_t;

static inline uint64_t CAVM_PEMSECX_TX_CMD_SOP(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_PEMSECX_TX_CMD_SOP(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CN20KA) && (a<=5))
        return 0xc2c000004800ll + 0x100000000ll * ((a) & 0x7);
    __cavm_csr_fatal("PEMSECX_TX_CMD_SOP", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_PEMSECX_TX_CMD_SOP(a) cavm_pemsecx_tx_cmd_sop_t
#define bustype_CAVM_PEMSECX_TX_CMD_SOP(a) CSR_TYPE_ARF
#define basename_CAVM_PEMSECX_TX_CMD_SOP(a) "PEMSECX_TX_CMD_SOP"
#define device_bar_CAVM_PEMSECX_TX_CMD_SOP(a) 0x0 /* PF_BAR0 */
#define busnum_CAVM_PEMSECX_TX_CMD_SOP(a) (a)
#define arguments_CAVM_PEMSECX_TX_CMD_SOP(a) (a),-1,-1,-1

/**
 * Register (ARF) pemsec#_tx_cmd_valid
 *
 * TX FIPS Command - CMD Valid Register
 * This register is for testing the IDE encryption logic per the
 * FIPS-197 AES standard.
 *
 * This register is only accessible when
 * PEMSEC_BLK_IDE_CTL[IDE_TEST_ENABLE] is set to 1.
 * Accesses to this register when
 * PEMSEC_BLK_IDE_CTL[IDE_TEST_ENABLE] is set to 0 will return
 * an error.
 */
union cavm_pemsecx_tx_cmd_valid
{
    uint64_t u;
    struct cavm_pemsecx_tx_cmd_valid_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_1_63         : 63;
        uint64_t cmd_valid             : 1;  /**< [  0:  0](R/W) AXI like valid/ready handshake. */
#else /* Word 0 - Little Endian */
        uint64_t cmd_valid             : 1;  /**< [  0:  0](R/W) AXI like valid/ready handshake. */
        uint64_t reserved_1_63         : 63;
#endif /* Word 0 - End */
    } s;
    struct cavm_pemsecx_tx_cmd_valid_cn
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_32_63        : 32;
        uint64_t reserved_1_31         : 31;
        uint64_t cmd_valid             : 1;  /**< [  0:  0](R/W) AXI like valid/ready handshake. */
#else /* Word 0 - Little Endian */
        uint64_t cmd_valid             : 1;  /**< [  0:  0](R/W) AXI like valid/ready handshake. */
        uint64_t reserved_1_31         : 31;
        uint64_t reserved_32_63        : 32;
#endif /* Word 0 - End */
    } cn;
};
typedef union cavm_pemsecx_tx_cmd_valid cavm_pemsecx_tx_cmd_valid_t;

static inline uint64_t CAVM_PEMSECX_TX_CMD_VALID(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_PEMSECX_TX_CMD_VALID(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CN20KA) && (a<=5))
        return 0xc2c000004860ll + 0x100000000ll * ((a) & 0x7);
    __cavm_csr_fatal("PEMSECX_TX_CMD_VALID", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_PEMSECX_TX_CMD_VALID(a) cavm_pemsecx_tx_cmd_valid_t
#define bustype_CAVM_PEMSECX_TX_CMD_VALID(a) CSR_TYPE_ARF
#define basename_CAVM_PEMSECX_TX_CMD_VALID(a) "PEMSECX_TX_CMD_VALID"
#define device_bar_CAVM_PEMSECX_TX_CMD_VALID(a) 0x0 /* PF_BAR0 */
#define busnum_CAVM_PEMSECX_TX_CMD_VALID(a) (a)
#define arguments_CAVM_PEMSECX_TX_CMD_VALID(a) (a),-1,-1,-1

/**
 * Register (ARF) pemsec#_tx_core_ver_num
 *
 * TX IP Version Number Register
 */
union cavm_pemsecx_tx_core_ver_num
{
    uint64_t u;
    struct cavm_pemsecx_tx_core_ver_num_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_16_63        : 48;
        uint64_t version_num           : 16; /**< [ 15:  0](RO) Indicates the IDE corekit release version number. */
#else /* Word 0 - Little Endian */
        uint64_t version_num           : 16; /**< [ 15:  0](RO) Indicates the IDE corekit release version number. */
        uint64_t reserved_16_63        : 48;
#endif /* Word 0 - End */
    } s;
    struct cavm_pemsecx_tx_core_ver_num_cn
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_32_63        : 32;
        uint64_t reserved_16_31        : 16;
        uint64_t version_num           : 16; /**< [ 15:  0](RO) Indicates the IDE corekit release version number. */
#else /* Word 0 - Little Endian */
        uint64_t version_num           : 16; /**< [ 15:  0](RO) Indicates the IDE corekit release version number. */
        uint64_t reserved_16_31        : 16;
        uint64_t reserved_32_63        : 32;
#endif /* Word 0 - End */
    } cn;
};
typedef union cavm_pemsecx_tx_core_ver_num cavm_pemsecx_tx_core_ver_num_t;

static inline uint64_t CAVM_PEMSECX_TX_CORE_VER_NUM(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_PEMSECX_TX_CORE_VER_NUM(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CN20KA) && (a<=5))
        return 0xc2c000004000ll + 0x100000000ll * ((a) & 0x7);
    __cavm_csr_fatal("PEMSECX_TX_CORE_VER_NUM", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_PEMSECX_TX_CORE_VER_NUM(a) cavm_pemsecx_tx_core_ver_num_t
#define bustype_CAVM_PEMSECX_TX_CORE_VER_NUM(a) CSR_TYPE_ARF
#define basename_CAVM_PEMSECX_TX_CORE_VER_NUM(a) "PEMSECX_TX_CORE_VER_NUM"
#define device_bar_CAVM_PEMSECX_TX_CORE_VER_NUM(a) 0x0 /* PF_BAR0 */
#define busnum_CAVM_PEMSECX_TX_CORE_VER_NUM(a) (a)
#define arguments_CAVM_PEMSECX_TX_CORE_VER_NUM(a) (a),-1,-1,-1

/**
 * Register (ARF) pemsec#_tx_core_ver_type
 *
 * TX IP Version Type Register
 */
union cavm_pemsecx_tx_core_ver_type
{
    uint64_t u;
    struct cavm_pemsecx_tx_core_ver_type_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_16_63        : 48;
        uint64_t type_enum             : 4;  /**< [ 15: 12](RO) Corekit release type. */
        uint64_t pkg_num               : 4;  /**< [ 11:  8](RO) Corekit package number. */
        uint64_t type_num              : 8;  /**< [  7:  0](RO) Corekit version type number. */
#else /* Word 0 - Little Endian */
        uint64_t type_num              : 8;  /**< [  7:  0](RO) Corekit version type number. */
        uint64_t pkg_num               : 4;  /**< [ 11:  8](RO) Corekit package number. */
        uint64_t type_enum             : 4;  /**< [ 15: 12](RO) Corekit release type. */
        uint64_t reserved_16_63        : 48;
#endif /* Word 0 - End */
    } s;
    struct cavm_pemsecx_tx_core_ver_type_cn
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_32_63        : 32;
        uint64_t reserved_16_31        : 16;
        uint64_t type_enum             : 4;  /**< [ 15: 12](RO) Corekit release type. */
        uint64_t pkg_num               : 4;  /**< [ 11:  8](RO) Corekit package number. */
        uint64_t type_num              : 8;  /**< [  7:  0](RO) Corekit version type number. */
#else /* Word 0 - Little Endian */
        uint64_t type_num              : 8;  /**< [  7:  0](RO) Corekit version type number. */
        uint64_t pkg_num               : 4;  /**< [ 11:  8](RO) Corekit package number. */
        uint64_t type_enum             : 4;  /**< [ 15: 12](RO) Corekit release type. */
        uint64_t reserved_16_31        : 16;
        uint64_t reserved_32_63        : 32;
#endif /* Word 0 - End */
    } cn;
};
typedef union cavm_pemsecx_tx_core_ver_type cavm_pemsecx_tx_core_ver_type_t;

static inline uint64_t CAVM_PEMSECX_TX_CORE_VER_TYPE(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_PEMSECX_TX_CORE_VER_TYPE(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CN20KA) && (a<=5))
        return 0xc2c000004008ll + 0x100000000ll * ((a) & 0x7);
    __cavm_csr_fatal("PEMSECX_TX_CORE_VER_TYPE", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_PEMSECX_TX_CORE_VER_TYPE(a) cavm_pemsecx_tx_core_ver_type_t
#define bustype_CAVM_PEMSECX_TX_CORE_VER_TYPE(a) CSR_TYPE_ARF
#define basename_CAVM_PEMSECX_TX_CORE_VER_TYPE(a) "PEMSECX_TX_CORE_VER_TYPE"
#define device_bar_CAVM_PEMSECX_TX_CORE_VER_TYPE(a) 0x0 /* PF_BAR0 */
#define busnum_CAVM_PEMSECX_TX_CORE_VER_TYPE(a) (a)
#define arguments_CAVM_PEMSECX_TX_CORE_VER_TYPE(a) (a),-1,-1,-1

/**
 * Register (ARF) pemsec#_tx_ctr_iv_chunk
 *
 * TX FIPS Command - CTR IV Chunk Register
 * This register is for testing the IDE encryption logic per the
 * FIPS-197 AES standard.
 *
 * This register is only accessible when
 * PEMSEC_BLK_IDE_CTL[IDE_TEST_ENABLE] is set to 1.
 * Accesses to this register when
 * PEMSEC_BLK_IDE_CTL[IDE_TEST_ENABLE] is set to 0 will return
 * an error.
 */
union cavm_pemsecx_tx_ctr_iv_chunk
{
    uint64_t u;
    struct cavm_pemsecx_tx_ctr_iv_chunk_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_32_63        : 32;
        uint64_t ctr_iv_chunk          : 32; /**< [ 31:  0](R/W) 32b chunk of the Initial counter value (IV). */
#else /* Word 0 - Little Endian */
        uint64_t ctr_iv_chunk          : 32; /**< [ 31:  0](R/W) 32b chunk of the Initial counter value (IV). */
        uint64_t reserved_32_63        : 32;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_pemsecx_tx_ctr_iv_chunk_s cn; */
};
typedef union cavm_pemsecx_tx_ctr_iv_chunk cavm_pemsecx_tx_ctr_iv_chunk_t;

static inline uint64_t CAVM_PEMSECX_TX_CTR_IV_CHUNK(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_PEMSECX_TX_CTR_IV_CHUNK(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CN20KA) && (a<=5))
        return 0xc2c000004828ll + 0x100000000ll * ((a) & 0x7);
    __cavm_csr_fatal("PEMSECX_TX_CTR_IV_CHUNK", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_PEMSECX_TX_CTR_IV_CHUNK(a) cavm_pemsecx_tx_ctr_iv_chunk_t
#define bustype_CAVM_PEMSECX_TX_CTR_IV_CHUNK(a) CSR_TYPE_ARF
#define basename_CAVM_PEMSECX_TX_CTR_IV_CHUNK(a) "PEMSECX_TX_CTR_IV_CHUNK"
#define device_bar_CAVM_PEMSECX_TX_CTR_IV_CHUNK(a) 0x0 /* PF_BAR0 */
#define busnum_CAVM_PEMSECX_TX_CTR_IV_CHUNK(a) (a)
#define arguments_CAVM_PEMSECX_TX_CTR_IV_CHUNK(a) (a),-1,-1,-1

/**
 * Register (ARF) pemsec#_tx_ctr_iv_idx
 *
 * TX FIPS Command - CTR IV IDX Register
 * This register is for testing the IDE encryption logic per the
 * FIPS-197 AES standard.
 *
 * This register is only accessible when
 * PEMSEC_BLK_IDE_CTL[IDE_TEST_ENABLE] is set to 1.
 * Accesses to this register when
 * PEMSEC_BLK_IDE_CTL[IDE_TEST_ENABLE] is set to 0 will return
 * an error.
 */
union cavm_pemsecx_tx_ctr_iv_idx
{
    uint64_t u;
    struct cavm_pemsecx_tx_ctr_iv_idx_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_2_63         : 62;
        uint64_t ctr_iv_idx            : 2;  /**< [  1:  0](R/W) Index of the 32b iv chunk constructing the Initial counter
                                                                 value (IV). IV is in Big Endian Byte order */
#else /* Word 0 - Little Endian */
        uint64_t ctr_iv_idx            : 2;  /**< [  1:  0](R/W) Index of the 32b iv chunk constructing the Initial counter
                                                                 value (IV). IV is in Big Endian Byte order */
        uint64_t reserved_2_63         : 62;
#endif /* Word 0 - End */
    } s;
    struct cavm_pemsecx_tx_ctr_iv_idx_cn
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_32_63        : 32;
        uint64_t reserved_2_31         : 30;
        uint64_t ctr_iv_idx            : 2;  /**< [  1:  0](R/W) Index of the 32b iv chunk constructing the Initial counter
                                                                 value (IV). IV is in Big Endian Byte order */
#else /* Word 0 - Little Endian */
        uint64_t ctr_iv_idx            : 2;  /**< [  1:  0](R/W) Index of the 32b iv chunk constructing the Initial counter
                                                                 value (IV). IV is in Big Endian Byte order */
        uint64_t reserved_2_31         : 30;
        uint64_t reserved_32_63        : 32;
#endif /* Word 0 - End */
    } cn;
};
typedef union cavm_pemsecx_tx_ctr_iv_idx cavm_pemsecx_tx_ctr_iv_idx_t;

static inline uint64_t CAVM_PEMSECX_TX_CTR_IV_IDX(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_PEMSECX_TX_CTR_IV_IDX(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CN20KA) && (a<=5))
        return 0xc2c000004820ll + 0x100000000ll * ((a) & 0x7);
    __cavm_csr_fatal("PEMSECX_TX_CTR_IV_IDX", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_PEMSECX_TX_CTR_IV_IDX(a) cavm_pemsecx_tx_ctr_iv_idx_t
#define bustype_CAVM_PEMSECX_TX_CTR_IV_IDX(a) CSR_TYPE_ARF
#define basename_CAVM_PEMSECX_TX_CTR_IV_IDX(a) "PEMSECX_TX_CTR_IV_IDX"
#define device_bar_CAVM_PEMSECX_TX_CTR_IV_IDX(a) 0x0 /* PF_BAR0 */
#define busnum_CAVM_PEMSECX_TX_CTR_IV_IDX(a) (a)
#define arguments_CAVM_PEMSECX_TX_CTR_IV_IDX(a) (a),-1,-1,-1

/**
 * Register (ARF) pemsec#_tx_ctrl
 *
 * TX Control Register
 */
union cavm_pemsecx_tx_ctrl
{
    uint64_t u;
    struct cavm_pemsecx_tx_ctrl_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_19_63        : 45;
        uint64_t encrypt               : 1;  /**< [ 18: 18](R/W) Encrypt/Decrypt selector for the key.
                                                                    0 = Decrypt.
                                                                    1 = Encrypt.

                                                                 Set [ENCRYPT] to 1 for IDE TX.
                                                                 Encrypt outgoing Tx data. */
        uint64_t reserved_17           : 1;
        uint64_t key_sz                : 1;  /**< [ 16: 16](R/W) Size of the key.
                                                                    0 = 128-bit.
                                                                    1 = 256-bit.
                                                                 Set [KEY_SZ] to 1 for IDE to specify a 256-bit key. */
        uint64_t reserved_3_15         : 13;
        uint64_t ctx_idx               : 3;  /**< [  2:  0](R/W) Key context index to load the key into. */
#else /* Word 0 - Little Endian */
        uint64_t ctx_idx               : 3;  /**< [  2:  0](R/W) Key context index to load the key into. */
        uint64_t reserved_3_15         : 13;
        uint64_t key_sz                : 1;  /**< [ 16: 16](R/W) Size of the key.
                                                                    0 = 128-bit.
                                                                    1 = 256-bit.
                                                                 Set [KEY_SZ] to 1 for IDE to specify a 256-bit key. */
        uint64_t reserved_17           : 1;
        uint64_t encrypt               : 1;  /**< [ 18: 18](R/W) Encrypt/Decrypt selector for the key.
                                                                    0 = Decrypt.
                                                                    1 = Encrypt.

                                                                 Set [ENCRYPT] to 1 for IDE TX.
                                                                 Encrypt outgoing Tx data. */
        uint64_t reserved_19_63        : 45;
#endif /* Word 0 - End */
    } s;
    struct cavm_pemsecx_tx_ctrl_cn
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_32_63        : 32;
        uint64_t reserved_20_31        : 12;
        uint64_t reserved_19           : 1;
        uint64_t encrypt               : 1;  /**< [ 18: 18](R/W) Encrypt/Decrypt selector for the key.
                                                                    0 = Decrypt.
                                                                    1 = Encrypt.

                                                                 Set [ENCRYPT] to 1 for IDE TX.
                                                                 Encrypt outgoing Tx data. */
        uint64_t reserved_17           : 1;
        uint64_t key_sz                : 1;  /**< [ 16: 16](R/W) Size of the key.
                                                                    0 = 128-bit.
                                                                    1 = 256-bit.
                                                                 Set [KEY_SZ] to 1 for IDE to specify a 256-bit key. */
        uint64_t reserved_3_15         : 13;
        uint64_t ctx_idx               : 3;  /**< [  2:  0](R/W) Key context index to load the key into. */
#else /* Word 0 - Little Endian */
        uint64_t ctx_idx               : 3;  /**< [  2:  0](R/W) Key context index to load the key into. */
        uint64_t reserved_3_15         : 13;
        uint64_t key_sz                : 1;  /**< [ 16: 16](R/W) Size of the key.
                                                                    0 = 128-bit.
                                                                    1 = 256-bit.
                                                                 Set [KEY_SZ] to 1 for IDE to specify a 256-bit key. */
        uint64_t reserved_17           : 1;
        uint64_t encrypt               : 1;  /**< [ 18: 18](R/W) Encrypt/Decrypt selector for the key.
                                                                    0 = Decrypt.
                                                                    1 = Encrypt.

                                                                 Set [ENCRYPT] to 1 for IDE TX.
                                                                 Encrypt outgoing Tx data. */
        uint64_t reserved_19           : 1;
        uint64_t reserved_20_31        : 12;
        uint64_t reserved_32_63        : 32;
#endif /* Word 0 - End */
    } cn;
};
typedef union cavm_pemsecx_tx_ctrl cavm_pemsecx_tx_ctrl_t;

static inline uint64_t CAVM_PEMSECX_TX_CTRL(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_PEMSECX_TX_CTRL(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CN20KA) && (a<=5))
        return 0xc2c000004028ll + 0x100000000ll * ((a) & 0x7);
    __cavm_csr_fatal("PEMSECX_TX_CTRL", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_PEMSECX_TX_CTRL(a) cavm_pemsecx_tx_ctrl_t
#define bustype_CAVM_PEMSECX_TX_CTRL(a) CSR_TYPE_ARF
#define basename_CAVM_PEMSECX_TX_CTRL(a) "PEMSECX_TX_CTRL"
#define device_bar_CAVM_PEMSECX_TX_CTRL(a) 0x0 /* PF_BAR0 */
#define busnum_CAVM_PEMSECX_TX_CTRL(a) (a)
#define arguments_CAVM_PEMSECX_TX_CTRL(a) (a),-1,-1,-1

/**
 * Register (ARF) pemsec#_tx_data_ready
 *
 * TX FIPS Input DATA Ready Register
 * This register is for testing the IDE encryption logic per the
 * FIPS-197 AES standard.
 *
 * This register is only accessible when
 * PEMSEC_BLK_IDE_CTL[IDE_TEST_ENABLE] is set to 1.
 * Accesses to this register when
 * PEMSEC_BLK_IDE_CTL[IDE_TEST_ENABLE] is set to 0 will return
 * an error.
 */
union cavm_pemsecx_tx_data_ready
{
    uint64_t u;
    struct cavm_pemsecx_tx_data_ready_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_1_63         : 63;
        uint64_t data_ready            : 1;  /**< [  0:  0](RO/H) AXI like valid/ready(!stall) handshake. */
#else /* Word 0 - Little Endian */
        uint64_t data_ready            : 1;  /**< [  0:  0](RO/H) AXI like valid/ready(!stall) handshake. */
        uint64_t reserved_1_63         : 63;
#endif /* Word 0 - End */
    } s;
    struct cavm_pemsecx_tx_data_ready_cn
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_32_63        : 32;
        uint64_t reserved_1_31         : 31;
        uint64_t data_ready            : 1;  /**< [  0:  0](RO/H) AXI like valid/ready(!stall) handshake. */
#else /* Word 0 - Little Endian */
        uint64_t data_ready            : 1;  /**< [  0:  0](RO/H) AXI like valid/ready(!stall) handshake. */
        uint64_t reserved_1_31         : 31;
        uint64_t reserved_32_63        : 32;
#endif /* Word 0 - End */
    } cn;
};
typedef union cavm_pemsecx_tx_data_ready cavm_pemsecx_tx_data_ready_t;

static inline uint64_t CAVM_PEMSECX_TX_DATA_READY(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_PEMSECX_TX_DATA_READY(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CN20KA) && (a<=5))
        return 0xc2c0000048b8ll + 0x100000000ll * ((a) & 0x7);
    __cavm_csr_fatal("PEMSECX_TX_DATA_READY", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_PEMSECX_TX_DATA_READY(a) cavm_pemsecx_tx_data_ready_t
#define bustype_CAVM_PEMSECX_TX_DATA_READY(a) CSR_TYPE_ARF
#define basename_CAVM_PEMSECX_TX_DATA_READY(a) "PEMSECX_TX_DATA_READY"
#define device_bar_CAVM_PEMSECX_TX_DATA_READY(a) 0x0 /* PF_BAR0 */
#define busnum_CAVM_PEMSECX_TX_DATA_READY(a) (a)
#define arguments_CAVM_PEMSECX_TX_DATA_READY(a) (a),-1,-1,-1

/**
 * Register (ARF) pemsec#_tx_data_valid
 *
 * TX FIPS Input DATA Valid Register
 * This register is for testing the IDE encryption logic per the
 * FIPS-197 AES standard.
 *
 * This register is only accessible when
 * PEMSEC_BLK_IDE_CTL[IDE_TEST_ENABLE] is set to 1.
 * Accesses to this register when
 * PEMSEC_BLK_IDE_CTL[IDE_TEST_ENABLE] is set to 0 will return
 * an error.
 */
union cavm_pemsecx_tx_data_valid
{
    uint64_t u;
    struct cavm_pemsecx_tx_data_valid_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_1_63         : 63;
        uint64_t data_valid            : 1;  /**< [  0:  0](R/W) AXI like valid/ready(!stall) handshake. */
#else /* Word 0 - Little Endian */
        uint64_t data_valid            : 1;  /**< [  0:  0](R/W) AXI like valid/ready(!stall) handshake. */
        uint64_t reserved_1_63         : 63;
#endif /* Word 0 - End */
    } s;
    struct cavm_pemsecx_tx_data_valid_cn
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_32_63        : 32;
        uint64_t reserved_1_31         : 31;
        uint64_t data_valid            : 1;  /**< [  0:  0](R/W) AXI like valid/ready(!stall) handshake. */
#else /* Word 0 - Little Endian */
        uint64_t data_valid            : 1;  /**< [  0:  0](R/W) AXI like valid/ready(!stall) handshake. */
        uint64_t reserved_1_31         : 31;
        uint64_t reserved_32_63        : 32;
#endif /* Word 0 - End */
    } cn;
};
typedef union cavm_pemsecx_tx_data_valid cavm_pemsecx_tx_data_valid_t;

static inline uint64_t CAVM_PEMSECX_TX_DATA_VALID(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_PEMSECX_TX_DATA_VALID(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CN20KA) && (a<=5))
        return 0xc2c0000048b0ll + 0x100000000ll * ((a) & 0x7);
    __cavm_csr_fatal("PEMSECX_TX_DATA_VALID", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_PEMSECX_TX_DATA_VALID(a) cavm_pemsecx_tx_data_valid_t
#define bustype_CAVM_PEMSECX_TX_DATA_VALID(a) CSR_TYPE_ARF
#define basename_CAVM_PEMSECX_TX_DATA_VALID(a) "PEMSECX_TX_DATA_VALID"
#define device_bar_CAVM_PEMSECX_TX_DATA_VALID(a) 0x0 /* PF_BAR0 */
#define busnum_CAVM_PEMSECX_TX_DATA_VALID(a) (a)
#define arguments_CAVM_PEMSECX_TX_DATA_VALID(a) (a),-1,-1,-1

/**
 * Register (ARF) pemsec#_tx_in_data
 *
 * TX FIPS Input DATA Register
 * This register is for testing the IDE encryption logic per the
 * FIPS-197 AES standard.
 *
 * This register is only accessible when
 * PEMSEC_BLK_IDE_CTL[IDE_TEST_ENABLE] is set to 1.
 * Accesses to this register when
 * PEMSEC_BLK_IDE_CTL[IDE_TEST_ENABLE] is set to 0 will return
 * an error.
 */
union cavm_pemsecx_tx_in_data
{
    uint64_t u;
    struct cavm_pemsecx_tx_in_data_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_32_63        : 32;
        uint64_t in_data               : 32; /**< [ 31:  0](R/W/H) 32b chunk of the word to process. A partial word must be left
                                                                 justified on the signal. */
#else /* Word 0 - Little Endian */
        uint64_t in_data               : 32; /**< [ 31:  0](R/W/H) 32b chunk of the word to process. A partial word must be left
                                                                 justified on the signal. */
        uint64_t reserved_32_63        : 32;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_pemsecx_tx_in_data_s cn; */
};
typedef union cavm_pemsecx_tx_in_data cavm_pemsecx_tx_in_data_t;

static inline uint64_t CAVM_PEMSECX_TX_IN_DATA(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_PEMSECX_TX_IN_DATA(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CN20KA) && (a<=5))
        return 0xc2c0000048a8ll + 0x100000000ll * ((a) & 0x7);
    __cavm_csr_fatal("PEMSECX_TX_IN_DATA", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_PEMSECX_TX_IN_DATA(a) cavm_pemsecx_tx_in_data_t
#define bustype_CAVM_PEMSECX_TX_IN_DATA(a) CSR_TYPE_ARF
#define basename_CAVM_PEMSECX_TX_IN_DATA(a) "PEMSECX_TX_IN_DATA"
#define device_bar_CAVM_PEMSECX_TX_IN_DATA(a) 0x0 /* PF_BAR0 */
#define busnum_CAVM_PEMSECX_TX_IN_DATA(a) (a)
#define arguments_CAVM_PEMSECX_TX_IN_DATA(a) (a),-1,-1,-1

/**
 * Register (ARF) pemsec#_tx_in_data_idx
 *
 * TX FIPS Input DATA IDX Register
 * This register is for testing the IDE encryption logic per the
 * FIPS-197 AES standard.
 *
 * This register is only accessible when
 * PEMSEC_BLK_IDE_CTL[IDE_TEST_ENABLE] is set to 1.
 * Accesses to this register when
 * PEMSEC_BLK_IDE_CTL[IDE_TEST_ENABLE] is set to 0 will return
 * an error.
 */
union cavm_pemsecx_tx_in_data_idx
{
    uint64_t u;
    struct cavm_pemsecx_tx_in_data_idx_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_5_63         : 59;
        uint64_t in_data_idx           : 5;  /**< [  4:  0](R/W) Index of the 32b data chunk constructing the word to
                                                                 process. */
#else /* Word 0 - Little Endian */
        uint64_t in_data_idx           : 5;  /**< [  4:  0](R/W) Index of the 32b data chunk constructing the word to
                                                                 process. */
        uint64_t reserved_5_63         : 59;
#endif /* Word 0 - End */
    } s;
    struct cavm_pemsecx_tx_in_data_idx_cn
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_32_63        : 32;
        uint64_t reserved_5_31         : 27;
        uint64_t in_data_idx           : 5;  /**< [  4:  0](R/W) Index of the 32b data chunk constructing the word to
                                                                 process. */
#else /* Word 0 - Little Endian */
        uint64_t in_data_idx           : 5;  /**< [  4:  0](R/W) Index of the 32b data chunk constructing the word to
                                                                 process. */
        uint64_t reserved_5_31         : 27;
        uint64_t reserved_32_63        : 32;
#endif /* Word 0 - End */
    } cn;
};
typedef union cavm_pemsecx_tx_in_data_idx cavm_pemsecx_tx_in_data_idx_t;

static inline uint64_t CAVM_PEMSECX_TX_IN_DATA_IDX(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_PEMSECX_TX_IN_DATA_IDX(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CN20KA) && (a<=5))
        return 0xc2c0000048a0ll + 0x100000000ll * ((a) & 0x7);
    __cavm_csr_fatal("PEMSECX_TX_IN_DATA_IDX", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_PEMSECX_TX_IN_DATA_IDX(a) cavm_pemsecx_tx_in_data_idx_t
#define bustype_CAVM_PEMSECX_TX_IN_DATA_IDX(a) CSR_TYPE_ARF
#define basename_CAVM_PEMSECX_TX_IN_DATA_IDX(a) "PEMSECX_TX_IN_DATA_IDX"
#define device_bar_CAVM_PEMSECX_TX_IN_DATA_IDX(a) 0x0 /* PF_BAR0 */
#define busnum_CAVM_PEMSECX_TX_IN_DATA_IDX(a) (a)
#define arguments_CAVM_PEMSECX_TX_IN_DATA_IDX(a) (a),-1,-1,-1

/**
 * Register (ARF) pemsec#_tx_initial_iv_lsw
 *
 * TX Initial IV configuration value Low Register
 */
union cavm_pemsecx_tx_initial_iv_lsw
{
    uint64_t u;
    struct cavm_pemsecx_tx_initial_iv_lsw_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_32_63        : 32;
        uint64_t initial_iv_lsw        : 32; /**< [ 31:  0](WO/H) Initial IV configuration value (least-significant word)
                                                                 Configures the LSW value of the Initial IV for the
                                                                 CTRL.CTX_IDX context index
                                                                 Update of internal IV value is only effective when the
                                                                 CTRL register is written. */
#else /* Word 0 - Little Endian */
        uint64_t initial_iv_lsw        : 32; /**< [ 31:  0](WO/H) Initial IV configuration value (least-significant word)
                                                                 Configures the LSW value of the Initial IV for the
                                                                 CTRL.CTX_IDX context index
                                                                 Update of internal IV value is only effective when the
                                                                 CTRL register is written. */
        uint64_t reserved_32_63        : 32;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_pemsecx_tx_initial_iv_lsw_s cn; */
};
typedef union cavm_pemsecx_tx_initial_iv_lsw cavm_pemsecx_tx_initial_iv_lsw_t;

static inline uint64_t CAVM_PEMSECX_TX_INITIAL_IV_LSW(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_PEMSECX_TX_INITIAL_IV_LSW(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CN20KA) && (a<=5))
        return 0xc2c000004080ll + 0x100000000ll * ((a) & 0x7);
    __cavm_csr_fatal("PEMSECX_TX_INITIAL_IV_LSW", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_PEMSECX_TX_INITIAL_IV_LSW(a) cavm_pemsecx_tx_initial_iv_lsw_t
#define bustype_CAVM_PEMSECX_TX_INITIAL_IV_LSW(a) CSR_TYPE_ARF
#define basename_CAVM_PEMSECX_TX_INITIAL_IV_LSW(a) "PEMSECX_TX_INITIAL_IV_LSW"
#define device_bar_CAVM_PEMSECX_TX_INITIAL_IV_LSW(a) 0x0 /* PF_BAR0 */
#define busnum_CAVM_PEMSECX_TX_INITIAL_IV_LSW(a) (a)
#define arguments_CAVM_PEMSECX_TX_INITIAL_IV_LSW(a) (a),-1,-1,-1

/**
 * Register (ARF) pemsec#_tx_initial_iv_msw
 *
 * TX Initial IV configuration value Hi Register
 */
union cavm_pemsecx_tx_initial_iv_msw
{
    uint64_t u;
    struct cavm_pemsecx_tx_initial_iv_msw_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_32_63        : 32;
        uint64_t initial_iv_msw        : 32; /**< [ 31:  0](WO/H) Initial IV configuration value most-significant word
                                                                 Configures the MSW value of the Initial IV for the
                                                                 CTRL.CTX_IDX context index
                                                                 Update of internal IV value is only effective when the
                                                                 CTRL register is written. */
#else /* Word 0 - Little Endian */
        uint64_t initial_iv_msw        : 32; /**< [ 31:  0](WO/H) Initial IV configuration value most-significant word
                                                                 Configures the MSW value of the Initial IV for the
                                                                 CTRL.CTX_IDX context index
                                                                 Update of internal IV value is only effective when the
                                                                 CTRL register is written. */
        uint64_t reserved_32_63        : 32;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_pemsecx_tx_initial_iv_msw_s cn; */
};
typedef union cavm_pemsecx_tx_initial_iv_msw cavm_pemsecx_tx_initial_iv_msw_t;

static inline uint64_t CAVM_PEMSECX_TX_INITIAL_IV_MSW(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_PEMSECX_TX_INITIAL_IV_MSW(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CN20KA) && (a<=5))
        return 0xc2c000004088ll + 0x100000000ll * ((a) & 0x7);
    __cavm_csr_fatal("PEMSECX_TX_INITIAL_IV_MSW", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_PEMSECX_TX_INITIAL_IV_MSW(a) cavm_pemsecx_tx_initial_iv_msw_t
#define bustype_CAVM_PEMSECX_TX_INITIAL_IV_MSW(a) CSR_TYPE_ARF
#define basename_CAVM_PEMSECX_TX_INITIAL_IV_MSW(a) "PEMSECX_TX_INITIAL_IV_MSW"
#define device_bar_CAVM_PEMSECX_TX_INITIAL_IV_MSW(a) 0x0 /* PF_BAR0 */
#define busnum_CAVM_PEMSECX_TX_INITIAL_IV_MSW(a) (a)
#define arguments_CAVM_PEMSECX_TX_INITIAL_IV_MSW(a) (a),-1,-1,-1

/**
 * Register (ARF) pemsec#_tx_irq_en
 *
 * TX Interrupt Enable Register
 */
union cavm_pemsecx_tx_irq_en
{
    uint64_t u;
    struct cavm_pemsecx_tx_irq_en_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_32_63        : 32;
        uint64_t en_irq_output         : 1;  /**< [ 31: 31](R/W/H) TX Interrupt Enable. Set EN_IRQ_OUTPUT to one to enable the FSM_PAR_ERR,
                                                                 REG_PAR_ERR, CTX_IDX_ERR, and KEY_DONE interrupts in the PEMSEC_TX_IRQ_STAT
                                                                 register to set the PEMSEC_IDE_INT[AES_TX_INT] interrupt.  Set
                                                                 EN_IRQ_OUTPUT to zero to prevent all interrupt sources in the
                                                                 PEMSEC_TX_IRQ_STAT register from setting the PEMSEC_IDE_INT[AES_TX_INT]
                                                                 interrupt. */
        uint64_t reserved_18_30        : 13;
        uint64_t fsm_par_err           : 1;  /**< [ 17: 17](R/W) Enables interrupt indicating that an FSM parity error
                                                                 has been detected.  The corresponding PEMSEC_TX_IRQ_STAT field
                                                                 can only be asserted if this field is set to one. */
        uint64_t reg_par_err           : 1;  /**< [ 16: 16](R/W) Enables interrupt indicating that a register parity error has
                                                                 been detected. The corresponding PEMSEC_TX_IRQ_STAT field can only
                                                                 be asserted if this field is set to one. */
        uint64_t reserved_5_15         : 11;
        uint64_t ctx_idx_err           : 1;  /**< [  4:  4](R/W) Enables interrupt indicating that a context index error has
                                                                 been detected. The corresponding PEMSEC_TX_IRQ_STAT field can only
                                                                 be asserted if this field is set to one. */
        uint64_t reserved_1_3          : 3;
        uint64_t key_done              : 1;  /**< [  0:  0](R/W) Enables interrupt indicating that a key load has completed.
                                                                 The corresponding PEMSEC_TX_IRQ_STAT field can only
                                                                 be asserted if this field is set to one. */
#else /* Word 0 - Little Endian */
        uint64_t key_done              : 1;  /**< [  0:  0](R/W) Enables interrupt indicating that a key load has completed.
                                                                 The corresponding PEMSEC_TX_IRQ_STAT field can only
                                                                 be asserted if this field is set to one. */
        uint64_t reserved_1_3          : 3;
        uint64_t ctx_idx_err           : 1;  /**< [  4:  4](R/W) Enables interrupt indicating that a context index error has
                                                                 been detected. The corresponding PEMSEC_TX_IRQ_STAT field can only
                                                                 be asserted if this field is set to one. */
        uint64_t reserved_5_15         : 11;
        uint64_t reg_par_err           : 1;  /**< [ 16: 16](R/W) Enables interrupt indicating that a register parity error has
                                                                 been detected. The corresponding PEMSEC_TX_IRQ_STAT field can only
                                                                 be asserted if this field is set to one. */
        uint64_t fsm_par_err           : 1;  /**< [ 17: 17](R/W) Enables interrupt indicating that an FSM parity error
                                                                 has been detected.  The corresponding PEMSEC_TX_IRQ_STAT field
                                                                 can only be asserted if this field is set to one. */
        uint64_t reserved_18_30        : 13;
        uint64_t en_irq_output         : 1;  /**< [ 31: 31](R/W/H) TX Interrupt Enable. Set EN_IRQ_OUTPUT to one to enable the FSM_PAR_ERR,
                                                                 REG_PAR_ERR, CTX_IDX_ERR, and KEY_DONE interrupts in the PEMSEC_TX_IRQ_STAT
                                                                 register to set the PEMSEC_IDE_INT[AES_TX_INT] interrupt.  Set
                                                                 EN_IRQ_OUTPUT to zero to prevent all interrupt sources in the
                                                                 PEMSEC_TX_IRQ_STAT register from setting the PEMSEC_IDE_INT[AES_TX_INT]
                                                                 interrupt. */
        uint64_t reserved_32_63        : 32;
#endif /* Word 0 - End */
    } s;
    struct cavm_pemsecx_tx_irq_en_cn
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_32_63        : 32;
        uint64_t en_irq_output         : 1;  /**< [ 31: 31](R/W/H) TX Interrupt Enable. Set EN_IRQ_OUTPUT to one to enable the FSM_PAR_ERR,
                                                                 REG_PAR_ERR, CTX_IDX_ERR, and KEY_DONE interrupts in the PEMSEC_TX_IRQ_STAT
                                                                 register to set the PEMSEC_IDE_INT[AES_TX_INT] interrupt.  Set
                                                                 EN_IRQ_OUTPUT to zero to prevent all interrupt sources in the
                                                                 PEMSEC_TX_IRQ_STAT register from setting the PEMSEC_IDE_INT[AES_TX_INT]
                                                                 interrupt. */
        uint64_t reserved_18_30        : 13;
        uint64_t fsm_par_err           : 1;  /**< [ 17: 17](R/W) Enables interrupt indicating that an FSM parity error
                                                                 has been detected.  The corresponding PEMSEC_TX_IRQ_STAT field
                                                                 can only be asserted if this field is set to one. */
        uint64_t reg_par_err           : 1;  /**< [ 16: 16](R/W) Enables interrupt indicating that a register parity error has
                                                                 been detected. The corresponding PEMSEC_TX_IRQ_STAT field can only
                                                                 be asserted if this field is set to one. */
        uint64_t reserved_5_15         : 11;
        uint64_t ctx_idx_err           : 1;  /**< [  4:  4](R/W) Enables interrupt indicating that a context index error has
                                                                 been detected. The corresponding PEMSEC_TX_IRQ_STAT field can only
                                                                 be asserted if this field is set to one. */
        uint64_t reserved_2_3          : 2;
        uint64_t reserved_1            : 1;
        uint64_t key_done              : 1;  /**< [  0:  0](R/W) Enables interrupt indicating that a key load has completed.
                                                                 The corresponding PEMSEC_TX_IRQ_STAT field can only
                                                                 be asserted if this field is set to one. */
#else /* Word 0 - Little Endian */
        uint64_t key_done              : 1;  /**< [  0:  0](R/W) Enables interrupt indicating that a key load has completed.
                                                                 The corresponding PEMSEC_TX_IRQ_STAT field can only
                                                                 be asserted if this field is set to one. */
        uint64_t reserved_1            : 1;
        uint64_t reserved_2_3          : 2;
        uint64_t ctx_idx_err           : 1;  /**< [  4:  4](R/W) Enables interrupt indicating that a context index error has
                                                                 been detected. The corresponding PEMSEC_TX_IRQ_STAT field can only
                                                                 be asserted if this field is set to one. */
        uint64_t reserved_5_15         : 11;
        uint64_t reg_par_err           : 1;  /**< [ 16: 16](R/W) Enables interrupt indicating that a register parity error has
                                                                 been detected. The corresponding PEMSEC_TX_IRQ_STAT field can only
                                                                 be asserted if this field is set to one. */
        uint64_t fsm_par_err           : 1;  /**< [ 17: 17](R/W) Enables interrupt indicating that an FSM parity error
                                                                 has been detected.  The corresponding PEMSEC_TX_IRQ_STAT field
                                                                 can only be asserted if this field is set to one. */
        uint64_t reserved_18_30        : 13;
        uint64_t en_irq_output         : 1;  /**< [ 31: 31](R/W/H) TX Interrupt Enable. Set EN_IRQ_OUTPUT to one to enable the FSM_PAR_ERR,
                                                                 REG_PAR_ERR, CTX_IDX_ERR, and KEY_DONE interrupts in the PEMSEC_TX_IRQ_STAT
                                                                 register to set the PEMSEC_IDE_INT[AES_TX_INT] interrupt.  Set
                                                                 EN_IRQ_OUTPUT to zero to prevent all interrupt sources in the
                                                                 PEMSEC_TX_IRQ_STAT register from setting the PEMSEC_IDE_INT[AES_TX_INT]
                                                                 interrupt. */
        uint64_t reserved_32_63        : 32;
#endif /* Word 0 - End */
    } cn;
};
typedef union cavm_pemsecx_tx_irq_en cavm_pemsecx_tx_irq_en_t;

static inline uint64_t CAVM_PEMSECX_TX_IRQ_EN(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_PEMSECX_TX_IRQ_EN(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CN20KA) && (a<=5))
        return 0xc2c000004010ll + 0x100000000ll * ((a) & 0x7);
    __cavm_csr_fatal("PEMSECX_TX_IRQ_EN", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_PEMSECX_TX_IRQ_EN(a) cavm_pemsecx_tx_irq_en_t
#define bustype_CAVM_PEMSECX_TX_IRQ_EN(a) CSR_TYPE_ARF
#define basename_CAVM_PEMSECX_TX_IRQ_EN(a) "PEMSECX_TX_IRQ_EN"
#define device_bar_CAVM_PEMSECX_TX_IRQ_EN(a) 0x0 /* PF_BAR0 */
#define busnum_CAVM_PEMSECX_TX_IRQ_EN(a) (a)
#define arguments_CAVM_PEMSECX_TX_IRQ_EN(a) (a),-1,-1,-1

/**
 * Register (ARF) pemsec#_tx_irq_stat
 *
 * TX Interrupt Status Register
 */
union cavm_pemsecx_tx_irq_stat
{
    uint64_t u;
    struct cavm_pemsecx_tx_irq_stat_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_18_63        : 46;
        uint64_t fsm_par_err           : 1;  /**< [ 17: 17](R/W1C/H) Status of interrupt indicating that an FSM parity error has
                                                                 been detected. */
        uint64_t reg_par_err           : 1;  /**< [ 16: 16](R/W1C/H) Status of interrupt indicating that a register parity error has
                                                                 been detected. */
        uint64_t reserved_5_15         : 11;
        uint64_t ctx_idx_err           : 1;  /**< [  4:  4](R/W1C/H) Status of interrupt indicating that a context index error has
                                                                 been detected. */
        uint64_t reserved_1_3          : 3;
        uint64_t key_done              : 1;  /**< [  0:  0](R/W1C/H) Status of interrupt indicating that a key load has completed. */
#else /* Word 0 - Little Endian */
        uint64_t key_done              : 1;  /**< [  0:  0](R/W1C/H) Status of interrupt indicating that a key load has completed. */
        uint64_t reserved_1_3          : 3;
        uint64_t ctx_idx_err           : 1;  /**< [  4:  4](R/W1C/H) Status of interrupt indicating that a context index error has
                                                                 been detected. */
        uint64_t reserved_5_15         : 11;
        uint64_t reg_par_err           : 1;  /**< [ 16: 16](R/W1C/H) Status of interrupt indicating that a register parity error has
                                                                 been detected. */
        uint64_t fsm_par_err           : 1;  /**< [ 17: 17](R/W1C/H) Status of interrupt indicating that an FSM parity error has
                                                                 been detected. */
        uint64_t reserved_18_63        : 46;
#endif /* Word 0 - End */
    } s;
    struct cavm_pemsecx_tx_irq_stat_cn
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_32_63        : 32;
        uint64_t reserved_18_31        : 14;
        uint64_t fsm_par_err           : 1;  /**< [ 17: 17](R/W1C/H) Status of interrupt indicating that an FSM parity error has
                                                                 been detected. */
        uint64_t reg_par_err           : 1;  /**< [ 16: 16](R/W1C/H) Status of interrupt indicating that a register parity error has
                                                                 been detected. */
        uint64_t reserved_5_15         : 11;
        uint64_t ctx_idx_err           : 1;  /**< [  4:  4](R/W1C/H) Status of interrupt indicating that a context index error has
                                                                 been detected. */
        uint64_t reserved_1_3          : 3;
        uint64_t key_done              : 1;  /**< [  0:  0](R/W1C/H) Status of interrupt indicating that a key load has completed. */
#else /* Word 0 - Little Endian */
        uint64_t key_done              : 1;  /**< [  0:  0](R/W1C/H) Status of interrupt indicating that a key load has completed. */
        uint64_t reserved_1_3          : 3;
        uint64_t ctx_idx_err           : 1;  /**< [  4:  4](R/W1C/H) Status of interrupt indicating that a context index error has
                                                                 been detected. */
        uint64_t reserved_5_15         : 11;
        uint64_t reg_par_err           : 1;  /**< [ 16: 16](R/W1C/H) Status of interrupt indicating that a register parity error has
                                                                 been detected. */
        uint64_t fsm_par_err           : 1;  /**< [ 17: 17](R/W1C/H) Status of interrupt indicating that an FSM parity error has
                                                                 been detected. */
        uint64_t reserved_18_31        : 14;
        uint64_t reserved_32_63        : 32;
#endif /* Word 0 - End */
    } cn;
};
typedef union cavm_pemsecx_tx_irq_stat cavm_pemsecx_tx_irq_stat_t;

static inline uint64_t CAVM_PEMSECX_TX_IRQ_STAT(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_PEMSECX_TX_IRQ_STAT(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CN20KA) && (a<=5))
        return 0xc2c000004018ll + 0x100000000ll * ((a) & 0x7);
    __cavm_csr_fatal("PEMSECX_TX_IRQ_STAT", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_PEMSECX_TX_IRQ_STAT(a) cavm_pemsecx_tx_irq_stat_t
#define bustype_CAVM_PEMSECX_TX_IRQ_STAT(a) CSR_TYPE_ARF
#define basename_CAVM_PEMSECX_TX_IRQ_STAT(a) "PEMSECX_TX_IRQ_STAT"
#define device_bar_CAVM_PEMSECX_TX_IRQ_STAT(a) 0x0 /* PF_BAR0 */
#define busnum_CAVM_PEMSECX_TX_IRQ_STAT(a) (a)
#define arguments_CAVM_PEMSECX_TX_IRQ_STAT(a) (a),-1,-1,-1

/**
 * Register (ARF) pemsec#_tx_key_0
 *
 * TX Key 0 Register
 */
union cavm_pemsecx_tx_key_0
{
    uint64_t u;
    struct cavm_pemsecx_tx_key_0_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_32_63        : 32;
        uint64_t key                   : 32; /**< [ 31:  0](WO/H) Key bytes (00, 01, 02, 03).

                                                                 Key byte 00 is the MSB of the key and represents
                                                                 bits[255:224] of a 256-bit key or
                                                                 bits[127:96] of a 128-bit key. */
#else /* Word 0 - Little Endian */
        uint64_t key                   : 32; /**< [ 31:  0](WO/H) Key bytes (00, 01, 02, 03).

                                                                 Key byte 00 is the MSB of the key and represents
                                                                 bits[255:224] of a 256-bit key or
                                                                 bits[127:96] of a 128-bit key. */
        uint64_t reserved_32_63        : 32;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_pemsecx_tx_key_0_s cn; */
};
typedef union cavm_pemsecx_tx_key_0 cavm_pemsecx_tx_key_0_t;

static inline uint64_t CAVM_PEMSECX_TX_KEY_0(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_PEMSECX_TX_KEY_0(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CN20KA) && (a<=5))
        return 0xc2c000004040ll + 0x100000000ll * ((a) & 0x7);
    __cavm_csr_fatal("PEMSECX_TX_KEY_0", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_PEMSECX_TX_KEY_0(a) cavm_pemsecx_tx_key_0_t
#define bustype_CAVM_PEMSECX_TX_KEY_0(a) CSR_TYPE_ARF
#define basename_CAVM_PEMSECX_TX_KEY_0(a) "PEMSECX_TX_KEY_0"
#define device_bar_CAVM_PEMSECX_TX_KEY_0(a) 0x0 /* PF_BAR0 */
#define busnum_CAVM_PEMSECX_TX_KEY_0(a) (a)
#define arguments_CAVM_PEMSECX_TX_KEY_0(a) (a),-1,-1,-1

/**
 * Register (ARF) pemsec#_tx_key_1
 *
 * TX Key 1 Register
 */
union cavm_pemsecx_tx_key_1
{
    uint64_t u;
    struct cavm_pemsecx_tx_key_1_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_32_63        : 32;
        uint64_t key                   : 32; /**< [ 31:  0](WO/H) Key bytes (04, 05, 06, 07). */
#else /* Word 0 - Little Endian */
        uint64_t key                   : 32; /**< [ 31:  0](WO/H) Key bytes (04, 05, 06, 07). */
        uint64_t reserved_32_63        : 32;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_pemsecx_tx_key_1_s cn; */
};
typedef union cavm_pemsecx_tx_key_1 cavm_pemsecx_tx_key_1_t;

static inline uint64_t CAVM_PEMSECX_TX_KEY_1(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_PEMSECX_TX_KEY_1(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CN20KA) && (a<=5))
        return 0xc2c000004048ll + 0x100000000ll * ((a) & 0x7);
    __cavm_csr_fatal("PEMSECX_TX_KEY_1", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_PEMSECX_TX_KEY_1(a) cavm_pemsecx_tx_key_1_t
#define bustype_CAVM_PEMSECX_TX_KEY_1(a) CSR_TYPE_ARF
#define basename_CAVM_PEMSECX_TX_KEY_1(a) "PEMSECX_TX_KEY_1"
#define device_bar_CAVM_PEMSECX_TX_KEY_1(a) 0x0 /* PF_BAR0 */
#define busnum_CAVM_PEMSECX_TX_KEY_1(a) (a)
#define arguments_CAVM_PEMSECX_TX_KEY_1(a) (a),-1,-1,-1

/**
 * Register (ARF) pemsec#_tx_key_2
 *
 * TX Key 2 Register
 */
union cavm_pemsecx_tx_key_2
{
    uint64_t u;
    struct cavm_pemsecx_tx_key_2_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_32_63        : 32;
        uint64_t key                   : 32; /**< [ 31:  0](WO/H) Key bytes (08, 09, 10, 11). */
#else /* Word 0 - Little Endian */
        uint64_t key                   : 32; /**< [ 31:  0](WO/H) Key bytes (08, 09, 10, 11). */
        uint64_t reserved_32_63        : 32;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_pemsecx_tx_key_2_s cn; */
};
typedef union cavm_pemsecx_tx_key_2 cavm_pemsecx_tx_key_2_t;

static inline uint64_t CAVM_PEMSECX_TX_KEY_2(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_PEMSECX_TX_KEY_2(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CN20KA) && (a<=5))
        return 0xc2c000004050ll + 0x100000000ll * ((a) & 0x7);
    __cavm_csr_fatal("PEMSECX_TX_KEY_2", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_PEMSECX_TX_KEY_2(a) cavm_pemsecx_tx_key_2_t
#define bustype_CAVM_PEMSECX_TX_KEY_2(a) CSR_TYPE_ARF
#define basename_CAVM_PEMSECX_TX_KEY_2(a) "PEMSECX_TX_KEY_2"
#define device_bar_CAVM_PEMSECX_TX_KEY_2(a) 0x0 /* PF_BAR0 */
#define busnum_CAVM_PEMSECX_TX_KEY_2(a) (a)
#define arguments_CAVM_PEMSECX_TX_KEY_2(a) (a),-1,-1,-1

/**
 * Register (ARF) pemsec#_tx_key_3
 *
 * TX Key 3 Register
 */
union cavm_pemsecx_tx_key_3
{
    uint64_t u;
    struct cavm_pemsecx_tx_key_3_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_32_63        : 32;
        uint64_t key                   : 32; /**< [ 31:  0](WO/H) Key bytes (12, 13, 14, 15). */
#else /* Word 0 - Little Endian */
        uint64_t key                   : 32; /**< [ 31:  0](WO/H) Key bytes (12, 13, 14, 15). */
        uint64_t reserved_32_63        : 32;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_pemsecx_tx_key_3_s cn; */
};
typedef union cavm_pemsecx_tx_key_3 cavm_pemsecx_tx_key_3_t;

static inline uint64_t CAVM_PEMSECX_TX_KEY_3(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_PEMSECX_TX_KEY_3(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CN20KA) && (a<=5))
        return 0xc2c000004058ll + 0x100000000ll * ((a) & 0x7);
    __cavm_csr_fatal("PEMSECX_TX_KEY_3", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_PEMSECX_TX_KEY_3(a) cavm_pemsecx_tx_key_3_t
#define bustype_CAVM_PEMSECX_TX_KEY_3(a) CSR_TYPE_ARF
#define basename_CAVM_PEMSECX_TX_KEY_3(a) "PEMSECX_TX_KEY_3"
#define device_bar_CAVM_PEMSECX_TX_KEY_3(a) 0x0 /* PF_BAR0 */
#define busnum_CAVM_PEMSECX_TX_KEY_3(a) (a)
#define arguments_CAVM_PEMSECX_TX_KEY_3(a) (a),-1,-1,-1

/**
 * Register (ARF) pemsec#_tx_key_4
 *
 * TX Key 4 Register
 */
union cavm_pemsecx_tx_key_4
{
    uint64_t u;
    struct cavm_pemsecx_tx_key_4_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_32_63        : 32;
        uint64_t key                   : 32; /**< [ 31:  0](WO/H) Key bytes (16, 17, 18, 19). */
#else /* Word 0 - Little Endian */
        uint64_t key                   : 32; /**< [ 31:  0](WO/H) Key bytes (16, 17, 18, 19). */
        uint64_t reserved_32_63        : 32;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_pemsecx_tx_key_4_s cn; */
};
typedef union cavm_pemsecx_tx_key_4 cavm_pemsecx_tx_key_4_t;

static inline uint64_t CAVM_PEMSECX_TX_KEY_4(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_PEMSECX_TX_KEY_4(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CN20KA) && (a<=5))
        return 0xc2c000004060ll + 0x100000000ll * ((a) & 0x7);
    __cavm_csr_fatal("PEMSECX_TX_KEY_4", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_PEMSECX_TX_KEY_4(a) cavm_pemsecx_tx_key_4_t
#define bustype_CAVM_PEMSECX_TX_KEY_4(a) CSR_TYPE_ARF
#define basename_CAVM_PEMSECX_TX_KEY_4(a) "PEMSECX_TX_KEY_4"
#define device_bar_CAVM_PEMSECX_TX_KEY_4(a) 0x0 /* PF_BAR0 */
#define busnum_CAVM_PEMSECX_TX_KEY_4(a) (a)
#define arguments_CAVM_PEMSECX_TX_KEY_4(a) (a),-1,-1,-1

/**
 * Register (ARF) pemsec#_tx_key_5
 *
 * TX Key 5 Register
 */
union cavm_pemsecx_tx_key_5
{
    uint64_t u;
    struct cavm_pemsecx_tx_key_5_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_32_63        : 32;
        uint64_t key                   : 32; /**< [ 31:  0](WO/H) Key bytes (20, 21, 22, 23). */
#else /* Word 0 - Little Endian */
        uint64_t key                   : 32; /**< [ 31:  0](WO/H) Key bytes (20, 21, 22, 23). */
        uint64_t reserved_32_63        : 32;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_pemsecx_tx_key_5_s cn; */
};
typedef union cavm_pemsecx_tx_key_5 cavm_pemsecx_tx_key_5_t;

static inline uint64_t CAVM_PEMSECX_TX_KEY_5(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_PEMSECX_TX_KEY_5(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CN20KA) && (a<=5))
        return 0xc2c000004068ll + 0x100000000ll * ((a) & 0x7);
    __cavm_csr_fatal("PEMSECX_TX_KEY_5", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_PEMSECX_TX_KEY_5(a) cavm_pemsecx_tx_key_5_t
#define bustype_CAVM_PEMSECX_TX_KEY_5(a) CSR_TYPE_ARF
#define basename_CAVM_PEMSECX_TX_KEY_5(a) "PEMSECX_TX_KEY_5"
#define device_bar_CAVM_PEMSECX_TX_KEY_5(a) 0x0 /* PF_BAR0 */
#define busnum_CAVM_PEMSECX_TX_KEY_5(a) (a)
#define arguments_CAVM_PEMSECX_TX_KEY_5(a) (a),-1,-1,-1

/**
 * Register (ARF) pemsec#_tx_key_6
 *
 * TX Key 6 Register
 */
union cavm_pemsecx_tx_key_6
{
    uint64_t u;
    struct cavm_pemsecx_tx_key_6_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_32_63        : 32;
        uint64_t key                   : 32; /**< [ 31:  0](WO/H) Key bytes (24, 25, 26, 27). */
#else /* Word 0 - Little Endian */
        uint64_t key                   : 32; /**< [ 31:  0](WO/H) Key bytes (24, 25, 26, 27). */
        uint64_t reserved_32_63        : 32;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_pemsecx_tx_key_6_s cn; */
};
typedef union cavm_pemsecx_tx_key_6 cavm_pemsecx_tx_key_6_t;

static inline uint64_t CAVM_PEMSECX_TX_KEY_6(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_PEMSECX_TX_KEY_6(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CN20KA) && (a<=5))
        return 0xc2c000004070ll + 0x100000000ll * ((a) & 0x7);
    __cavm_csr_fatal("PEMSECX_TX_KEY_6", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_PEMSECX_TX_KEY_6(a) cavm_pemsecx_tx_key_6_t
#define bustype_CAVM_PEMSECX_TX_KEY_6(a) CSR_TYPE_ARF
#define basename_CAVM_PEMSECX_TX_KEY_6(a) "PEMSECX_TX_KEY_6"
#define device_bar_CAVM_PEMSECX_TX_KEY_6(a) 0x0 /* PF_BAR0 */
#define busnum_CAVM_PEMSECX_TX_KEY_6(a) (a)
#define arguments_CAVM_PEMSECX_TX_KEY_6(a) (a),-1,-1,-1

/**
 * Register (ARF) pemsec#_tx_key_7
 *
 * TX Key 7 Register
 */
union cavm_pemsecx_tx_key_7
{
    uint64_t u;
    struct cavm_pemsecx_tx_key_7_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_32_63        : 32;
        uint64_t key                   : 32; /**< [ 31:  0](WO/H) Key bytes (28, 29, 30, 31). */
#else /* Word 0 - Little Endian */
        uint64_t key                   : 32; /**< [ 31:  0](WO/H) Key bytes (28, 29, 30, 31). */
        uint64_t reserved_32_63        : 32;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_pemsecx_tx_key_7_s cn; */
};
typedef union cavm_pemsecx_tx_key_7 cavm_pemsecx_tx_key_7_t;

static inline uint64_t CAVM_PEMSECX_TX_KEY_7(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_PEMSECX_TX_KEY_7(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CN20KA) && (a<=5))
        return 0xc2c000004078ll + 0x100000000ll * ((a) & 0x7);
    __cavm_csr_fatal("PEMSECX_TX_KEY_7", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_PEMSECX_TX_KEY_7(a) cavm_pemsecx_tx_key_7_t
#define bustype_CAVM_PEMSECX_TX_KEY_7(a) CSR_TYPE_ARF
#define basename_CAVM_PEMSECX_TX_KEY_7(a) "PEMSECX_TX_KEY_7"
#define device_bar_CAVM_PEMSECX_TX_KEY_7(a) 0x0 /* PF_BAR0 */
#define busnum_CAVM_PEMSECX_TX_KEY_7(a) (a)
#define arguments_CAVM_PEMSECX_TX_KEY_7(a) (a),-1,-1,-1

/**
 * Register (ARF) pemsec#_tx_key_threshold_high_s0
 *
 * TX Key Threshold value for Stream 0 Hi Register
 */
union cavm_pemsecx_tx_key_threshold_high_s0
{
    uint64_t u;
    struct cavm_pemsecx_tx_key_threshold_high_s0_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_32_63        : 32;
        uint64_t tx_key_threshold_high_s0 : 32;/**< [ 31:  0](R/W) Higher 32 bit of key utilization threshold for TX stream 0. */
#else /* Word 0 - Little Endian */
        uint64_t tx_key_threshold_high_s0 : 32;/**< [ 31:  0](R/W) Higher 32 bit of key utilization threshold for TX stream 0. */
        uint64_t reserved_32_63        : 32;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_pemsecx_tx_key_threshold_high_s0_s cn; */
};
typedef union cavm_pemsecx_tx_key_threshold_high_s0 cavm_pemsecx_tx_key_threshold_high_s0_t;

static inline uint64_t CAVM_PEMSECX_TX_KEY_THRESHOLD_HIGH_S0(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_PEMSECX_TX_KEY_THRESHOLD_HIGH_S0(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CN20KA) && (a<=5))
        return 0xc2c000001088ll + 0x100000000ll * ((a) & 0x7);
    __cavm_csr_fatal("PEMSECX_TX_KEY_THRESHOLD_HIGH_S0", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_PEMSECX_TX_KEY_THRESHOLD_HIGH_S0(a) cavm_pemsecx_tx_key_threshold_high_s0_t
#define bustype_CAVM_PEMSECX_TX_KEY_THRESHOLD_HIGH_S0(a) CSR_TYPE_ARF
#define basename_CAVM_PEMSECX_TX_KEY_THRESHOLD_HIGH_S0(a) "PEMSECX_TX_KEY_THRESHOLD_HIGH_S0"
#define device_bar_CAVM_PEMSECX_TX_KEY_THRESHOLD_HIGH_S0(a) 0x0 /* PF_BAR0 */
#define busnum_CAVM_PEMSECX_TX_KEY_THRESHOLD_HIGH_S0(a) (a)
#define arguments_CAVM_PEMSECX_TX_KEY_THRESHOLD_HIGH_S0(a) (a),-1,-1,-1

/**
 * Register (ARF) pemsec#_tx_key_threshold_low_s0
 *
 * TX Key Threshold value for Stream 0 Low Register
 */
union cavm_pemsecx_tx_key_threshold_low_s0
{
    uint64_t u;
    struct cavm_pemsecx_tx_key_threshold_low_s0_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_32_63        : 32;
        uint64_t tx_key_threshold_low_s0 : 32;/**< [ 31:  0](R/W) Lower 32 bit of key utilization threshold for TX stream 0. */
#else /* Word 0 - Little Endian */
        uint64_t tx_key_threshold_low_s0 : 32;/**< [ 31:  0](R/W) Lower 32 bit of key utilization threshold for TX stream 0. */
        uint64_t reserved_32_63        : 32;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_pemsecx_tx_key_threshold_low_s0_s cn; */
};
typedef union cavm_pemsecx_tx_key_threshold_low_s0 cavm_pemsecx_tx_key_threshold_low_s0_t;

static inline uint64_t CAVM_PEMSECX_TX_KEY_THRESHOLD_LOW_S0(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_PEMSECX_TX_KEY_THRESHOLD_LOW_S0(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CN20KA) && (a<=5))
        return 0xc2c000001080ll + 0x100000000ll * ((a) & 0x7);
    __cavm_csr_fatal("PEMSECX_TX_KEY_THRESHOLD_LOW_S0", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_PEMSECX_TX_KEY_THRESHOLD_LOW_S0(a) cavm_pemsecx_tx_key_threshold_low_s0_t
#define bustype_CAVM_PEMSECX_TX_KEY_THRESHOLD_LOW_S0(a) CSR_TYPE_ARF
#define basename_CAVM_PEMSECX_TX_KEY_THRESHOLD_LOW_S0(a) "PEMSECX_TX_KEY_THRESHOLD_LOW_S0"
#define device_bar_CAVM_PEMSECX_TX_KEY_THRESHOLD_LOW_S0(a) 0x0 /* PF_BAR0 */
#define busnum_CAVM_PEMSECX_TX_KEY_THRESHOLD_LOW_S0(a) (a)
#define arguments_CAVM_PEMSECX_TX_KEY_THRESHOLD_LOW_S0(a) (a),-1,-1,-1

/**
 * Register (ARF) pemsec#_tx_key_usage_counter_high_s0
 *
 * TX Key utilization counter value for Stream 0 LSW Register
 */
union cavm_pemsecx_tx_key_usage_counter_high_s0
{
    uint64_t u;
    struct cavm_pemsecx_tx_key_usage_counter_high_s0_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_32_63        : 32;
        uint64_t tx_key_usage_counter_high_s0 : 32;/**< [ 31:  0](RO/H) Higher 32 bit of key utilization counter for TX stream 0. */
#else /* Word 0 - Little Endian */
        uint64_t tx_key_usage_counter_high_s0 : 32;/**< [ 31:  0](RO/H) Higher 32 bit of key utilization counter for TX stream 0. */
        uint64_t reserved_32_63        : 32;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_pemsecx_tx_key_usage_counter_high_s0_s cn; */
};
typedef union cavm_pemsecx_tx_key_usage_counter_high_s0 cavm_pemsecx_tx_key_usage_counter_high_s0_t;

static inline uint64_t CAVM_PEMSECX_TX_KEY_USAGE_COUNTER_HIGH_S0(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_PEMSECX_TX_KEY_USAGE_COUNTER_HIGH_S0(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CN20KA) && (a<=5))
        return 0xc2c000001660ll + 0x100000000ll * ((a) & 0x7);
    __cavm_csr_fatal("PEMSECX_TX_KEY_USAGE_COUNTER_HIGH_S0", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_PEMSECX_TX_KEY_USAGE_COUNTER_HIGH_S0(a) cavm_pemsecx_tx_key_usage_counter_high_s0_t
#define bustype_CAVM_PEMSECX_TX_KEY_USAGE_COUNTER_HIGH_S0(a) CSR_TYPE_ARF
#define basename_CAVM_PEMSECX_TX_KEY_USAGE_COUNTER_HIGH_S0(a) "PEMSECX_TX_KEY_USAGE_COUNTER_HIGH_S0"
#define device_bar_CAVM_PEMSECX_TX_KEY_USAGE_COUNTER_HIGH_S0(a) 0x0 /* PF_BAR0 */
#define busnum_CAVM_PEMSECX_TX_KEY_USAGE_COUNTER_HIGH_S0(a) (a)
#define arguments_CAVM_PEMSECX_TX_KEY_USAGE_COUNTER_HIGH_S0(a) (a),-1,-1,-1

/**
 * Register (ARF) pemsec#_tx_key_usage_counter_low_s0
 *
 * TX Key utilization counter value for Stream 0 LSW Register
 */
union cavm_pemsecx_tx_key_usage_counter_low_s0
{
    uint64_t u;
    struct cavm_pemsecx_tx_key_usage_counter_low_s0_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_32_63        : 32;
        uint64_t tx_key_usage_counter_low_s0 : 32;/**< [ 31:  0](RO/H) Lower 32 bit of key utilization counter for TX stream 0. */
#else /* Word 0 - Little Endian */
        uint64_t tx_key_usage_counter_low_s0 : 32;/**< [ 31:  0](RO/H) Lower 32 bit of key utilization counter for TX stream 0. */
        uint64_t reserved_32_63        : 32;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_pemsecx_tx_key_usage_counter_low_s0_s cn; */
};
typedef union cavm_pemsecx_tx_key_usage_counter_low_s0 cavm_pemsecx_tx_key_usage_counter_low_s0_t;

static inline uint64_t CAVM_PEMSECX_TX_KEY_USAGE_COUNTER_LOW_S0(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_PEMSECX_TX_KEY_USAGE_COUNTER_LOW_S0(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CN20KA) && (a<=5))
        return 0xc2c000001658ll + 0x100000000ll * ((a) & 0x7);
    __cavm_csr_fatal("PEMSECX_TX_KEY_USAGE_COUNTER_LOW_S0", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_PEMSECX_TX_KEY_USAGE_COUNTER_LOW_S0(a) cavm_pemsecx_tx_key_usage_counter_low_s0_t
#define bustype_CAVM_PEMSECX_TX_KEY_USAGE_COUNTER_LOW_S0(a) CSR_TYPE_ARF
#define basename_CAVM_PEMSECX_TX_KEY_USAGE_COUNTER_LOW_S0(a) "PEMSECX_TX_KEY_USAGE_COUNTER_LOW_S0"
#define device_bar_CAVM_PEMSECX_TX_KEY_USAGE_COUNTER_LOW_S0(a) 0x0 /* PF_BAR0 */
#define busnum_CAVM_PEMSECX_TX_KEY_USAGE_COUNTER_LOW_S0(a) (a)
#define arguments_CAVM_PEMSECX_TX_KEY_USAGE_COUNTER_LOW_S0(a) (a),-1,-1,-1

/**
 * Register (ARF) pemsec#_tx_link_tbit_cfg
 *
 * IDE Link Stream Tbit Register
 */
union cavm_pemsecx_tx_link_tbit_cfg
{
    uint64_t u;
    struct cavm_pemsecx_tx_link_tbit_cfg_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_3_63         : 61;
        uint64_t tbit_cfg_s0_cpl       : 1;  /**< [  2:  2](R/W) Link IDE Stream 0 Tbit to be inserted in IDE Prefix for
                                                                 Completion substream. */
        uint64_t tbit_cfg_s0_npr       : 1;  /**< [  1:  1](R/W) Link IDE Stream 0 Tbit to be inserted in IDE Prefix for Non-
                                                                 Posted Request substream. */
        uint64_t tbit_cfg_s0_pr        : 1;  /**< [  0:  0](R/W) Link IDE Stream 0 Tbit to be inserted in IDE Prefix for
                                                                 Posted Request substream. */
#else /* Word 0 - Little Endian */
        uint64_t tbit_cfg_s0_pr        : 1;  /**< [  0:  0](R/W) Link IDE Stream 0 Tbit to be inserted in IDE Prefix for
                                                                 Posted Request substream. */
        uint64_t tbit_cfg_s0_npr       : 1;  /**< [  1:  1](R/W) Link IDE Stream 0 Tbit to be inserted in IDE Prefix for Non-
                                                                 Posted Request substream. */
        uint64_t tbit_cfg_s0_cpl       : 1;  /**< [  2:  2](R/W) Link IDE Stream 0 Tbit to be inserted in IDE Prefix for
                                                                 Completion substream. */
        uint64_t reserved_3_63         : 61;
#endif /* Word 0 - End */
    } s;
    struct cavm_pemsecx_tx_link_tbit_cfg_cn
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_32_63        : 32;
        uint64_t reserved_6_31         : 26;
        uint64_t reserved_3_5          : 3;
        uint64_t tbit_cfg_s0_cpl       : 1;  /**< [  2:  2](R/W) Link IDE Stream 0 Tbit to be inserted in IDE Prefix for
                                                                 Completion substream. */
        uint64_t tbit_cfg_s0_npr       : 1;  /**< [  1:  1](R/W) Link IDE Stream 0 Tbit to be inserted in IDE Prefix for Non-
                                                                 Posted Request substream. */
        uint64_t tbit_cfg_s0_pr        : 1;  /**< [  0:  0](R/W) Link IDE Stream 0 Tbit to be inserted in IDE Prefix for
                                                                 Posted Request substream. */
#else /* Word 0 - Little Endian */
        uint64_t tbit_cfg_s0_pr        : 1;  /**< [  0:  0](R/W) Link IDE Stream 0 Tbit to be inserted in IDE Prefix for
                                                                 Posted Request substream. */
        uint64_t tbit_cfg_s0_npr       : 1;  /**< [  1:  1](R/W) Link IDE Stream 0 Tbit to be inserted in IDE Prefix for Non-
                                                                 Posted Request substream. */
        uint64_t tbit_cfg_s0_cpl       : 1;  /**< [  2:  2](R/W) Link IDE Stream 0 Tbit to be inserted in IDE Prefix for
                                                                 Completion substream. */
        uint64_t reserved_3_5          : 3;
        uint64_t reserved_6_31         : 26;
        uint64_t reserved_32_63        : 32;
#endif /* Word 0 - End */
    } cn;
};
typedef union cavm_pemsecx_tx_link_tbit_cfg cavm_pemsecx_tx_link_tbit_cfg_t;

static inline uint64_t CAVM_PEMSECX_TX_LINK_TBIT_CFG(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_PEMSECX_TX_LINK_TBIT_CFG(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CN20KA) && (a<=5))
        return 0xc2c000001020ll + 0x100000000ll * ((a) & 0x7);
    __cavm_csr_fatal("PEMSECX_TX_LINK_TBIT_CFG", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_PEMSECX_TX_LINK_TBIT_CFG(a) cavm_pemsecx_tx_link_tbit_cfg_t
#define bustype_CAVM_PEMSECX_TX_LINK_TBIT_CFG(a) CSR_TYPE_ARF
#define basename_CAVM_PEMSECX_TX_LINK_TBIT_CFG(a) "PEMSECX_TX_LINK_TBIT_CFG"
#define device_bar_CAVM_PEMSECX_TX_LINK_TBIT_CFG(a) 0x0 /* PF_BAR0 */
#define busnum_CAVM_PEMSECX_TX_LINK_TBIT_CFG(a) (a)
#define arguments_CAVM_PEMSECX_TX_LINK_TBIT_CFG(a) (a),-1,-1,-1

/**
 * Register (ARF) pemsec#_tx_lnk_kbit_cfg
 *
 * IDE TX Link Kbit Register
 */
union cavm_pemsecx_tx_lnk_kbit_cfg
{
    uint64_t u;
    struct cavm_pemsecx_tx_lnk_kbit_cfg_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_3_63         : 61;
        uint64_t kbit_cfg_s0_cpl       : 1;  /**< [  2:  2](R/W) Link IDE Stream 0 Kbit to be inserted in IDE Prefix for
                                                                 Completion substream. The application shall set the 3
                                                                 bits (Posted Request-PR, Non-Posted Request-NPR,
                                                                 Completion-CPL) from a specific stream to 1, when
                                                                 requesting a key swap. */
        uint64_t kbit_cfg_s0_npr       : 1;  /**< [  1:  1](R/W) Link IDE Stream 0 Kbit to be inserted in IDE Prefix for Non-
                                                                 Posted Request substream. The application shall set
                                                                 the 3 bits (Posted Request-PR, Non-Posted Request-NPR,
                                                                 Completion-CPL) from a specific stream to 1, when
                                                                 requesting a key swap. */
        uint64_t kbit_cfg_s0_pr        : 1;  /**< [  0:  0](R/W) Link IDE Stream 0 Kbit to be inserted in IDE Prefix for Posted
                                                                 Request substream. The application shall set the 3 bits
                                                                 (Posted Request-PR, Non-Posted Request-NPR,
                                                                 Completion-CPL) from a specific stream to 1, when
                                                                 requesting a key swap. */
#else /* Word 0 - Little Endian */
        uint64_t kbit_cfg_s0_pr        : 1;  /**< [  0:  0](R/W) Link IDE Stream 0 Kbit to be inserted in IDE Prefix for Posted
                                                                 Request substream. The application shall set the 3 bits
                                                                 (Posted Request-PR, Non-Posted Request-NPR,
                                                                 Completion-CPL) from a specific stream to 1, when
                                                                 requesting a key swap. */
        uint64_t kbit_cfg_s0_npr       : 1;  /**< [  1:  1](R/W) Link IDE Stream 0 Kbit to be inserted in IDE Prefix for Non-
                                                                 Posted Request substream. The application shall set
                                                                 the 3 bits (Posted Request-PR, Non-Posted Request-NPR,
                                                                 Completion-CPL) from a specific stream to 1, when
                                                                 requesting a key swap. */
        uint64_t kbit_cfg_s0_cpl       : 1;  /**< [  2:  2](R/W) Link IDE Stream 0 Kbit to be inserted in IDE Prefix for
                                                                 Completion substream. The application shall set the 3
                                                                 bits (Posted Request-PR, Non-Posted Request-NPR,
                                                                 Completion-CPL) from a specific stream to 1, when
                                                                 requesting a key swap. */
        uint64_t reserved_3_63         : 61;
#endif /* Word 0 - End */
    } s;
    struct cavm_pemsecx_tx_lnk_kbit_cfg_cn
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_32_63        : 32;
        uint64_t reserved_6_31         : 26;
        uint64_t reserved_3_5          : 3;
        uint64_t kbit_cfg_s0_cpl       : 1;  /**< [  2:  2](R/W) Link IDE Stream 0 Kbit to be inserted in IDE Prefix for
                                                                 Completion substream. The application shall set the 3
                                                                 bits (Posted Request-PR, Non-Posted Request-NPR,
                                                                 Completion-CPL) from a specific stream to 1, when
                                                                 requesting a key swap. */
        uint64_t kbit_cfg_s0_npr       : 1;  /**< [  1:  1](R/W) Link IDE Stream 0 Kbit to be inserted in IDE Prefix for Non-
                                                                 Posted Request substream. The application shall set
                                                                 the 3 bits (Posted Request-PR, Non-Posted Request-NPR,
                                                                 Completion-CPL) from a specific stream to 1, when
                                                                 requesting a key swap. */
        uint64_t kbit_cfg_s0_pr        : 1;  /**< [  0:  0](R/W) Link IDE Stream 0 Kbit to be inserted in IDE Prefix for Posted
                                                                 Request substream. The application shall set the 3 bits
                                                                 (Posted Request-PR, Non-Posted Request-NPR,
                                                                 Completion-CPL) from a specific stream to 1, when
                                                                 requesting a key swap. */
#else /* Word 0 - Little Endian */
        uint64_t kbit_cfg_s0_pr        : 1;  /**< [  0:  0](R/W) Link IDE Stream 0 Kbit to be inserted in IDE Prefix for Posted
                                                                 Request substream. The application shall set the 3 bits
                                                                 (Posted Request-PR, Non-Posted Request-NPR,
                                                                 Completion-CPL) from a specific stream to 1, when
                                                                 requesting a key swap. */
        uint64_t kbit_cfg_s0_npr       : 1;  /**< [  1:  1](R/W) Link IDE Stream 0 Kbit to be inserted in IDE Prefix for Non-
                                                                 Posted Request substream. The application shall set
                                                                 the 3 bits (Posted Request-PR, Non-Posted Request-NPR,
                                                                 Completion-CPL) from a specific stream to 1, when
                                                                 requesting a key swap. */
        uint64_t kbit_cfg_s0_cpl       : 1;  /**< [  2:  2](R/W) Link IDE Stream 0 Kbit to be inserted in IDE Prefix for
                                                                 Completion substream. The application shall set the 3
                                                                 bits (Posted Request-PR, Non-Posted Request-NPR,
                                                                 Completion-CPL) from a specific stream to 1, when
                                                                 requesting a key swap. */
        uint64_t reserved_3_5          : 3;
        uint64_t reserved_6_31         : 26;
        uint64_t reserved_32_63        : 32;
#endif /* Word 0 - End */
    } cn;
};
typedef union cavm_pemsecx_tx_lnk_kbit_cfg cavm_pemsecx_tx_lnk_kbit_cfg_t;

static inline uint64_t CAVM_PEMSECX_TX_LNK_KBIT_CFG(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_PEMSECX_TX_LNK_KBIT_CFG(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CN20KA) && (a<=5))
        return 0xc2c000001038ll + 0x100000000ll * ((a) & 0x7);
    __cavm_csr_fatal("PEMSECX_TX_LNK_KBIT_CFG", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_PEMSECX_TX_LNK_KBIT_CFG(a) cavm_pemsecx_tx_lnk_kbit_cfg_t
#define bustype_CAVM_PEMSECX_TX_LNK_KBIT_CFG(a) CSR_TYPE_ARF
#define basename_CAVM_PEMSECX_TX_LNK_KBIT_CFG(a) "PEMSECX_TX_LNK_KBIT_CFG"
#define device_bar_CAVM_PEMSECX_TX_LNK_KBIT_CFG(a) 0x0 /* PF_BAR0 */
#define busnum_CAVM_PEMSECX_TX_LNK_KBIT_CFG(a) (a)
#define arguments_CAVM_PEMSECX_TX_LNK_KBIT_CFG(a) (a),-1,-1,-1

/**
 * Register (ARF) pemsec#_tx_lnk_kbit_toggled
 *
 * TX Link Stream Kbit Toggled Register
 */
union cavm_pemsecx_tx_lnk_kbit_toggled
{
    uint64_t u;
    struct cavm_pemsecx_tx_lnk_kbit_toggled_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_3_63         : 61;
        uint64_t tx_lnk_kbit_toggled_s0_cpl : 1;/**< [  2:  2](R/W1C/H) TX Kbit Toggled for Link stream 0, Completion substream. */
        uint64_t tx_lnk_kbit_toggled_s0_npr : 1;/**< [  1:  1](R/W1C/H) TX Kbit Toggled for Link stream 0, Non-Posted Request substream. */
        uint64_t tx_lnk_kbit_toggled_s0_pr : 1;/**< [  0:  0](R/W1C/H) TX Kbit Toggled for Link stream 0, Posted Request substream. */
#else /* Word 0 - Little Endian */
        uint64_t tx_lnk_kbit_toggled_s0_pr : 1;/**< [  0:  0](R/W1C/H) TX Kbit Toggled for Link stream 0, Posted Request substream. */
        uint64_t tx_lnk_kbit_toggled_s0_npr : 1;/**< [  1:  1](R/W1C/H) TX Kbit Toggled for Link stream 0, Non-Posted Request substream. */
        uint64_t tx_lnk_kbit_toggled_s0_cpl : 1;/**< [  2:  2](R/W1C/H) TX Kbit Toggled for Link stream 0, Completion substream. */
        uint64_t reserved_3_63         : 61;
#endif /* Word 0 - End */
    } s;
    struct cavm_pemsecx_tx_lnk_kbit_toggled_cn
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_32_63        : 32;
        uint64_t reserved_6_31         : 26;
        uint64_t reserved_3_5          : 3;
        uint64_t tx_lnk_kbit_toggled_s0_cpl : 1;/**< [  2:  2](R/W1C/H) TX Kbit Toggled for Link stream 0, Completion substream. */
        uint64_t tx_lnk_kbit_toggled_s0_npr : 1;/**< [  1:  1](R/W1C/H) TX Kbit Toggled for Link stream 0, Non-Posted Request substream. */
        uint64_t tx_lnk_kbit_toggled_s0_pr : 1;/**< [  0:  0](R/W1C/H) TX Kbit Toggled for Link stream 0, Posted Request substream. */
#else /* Word 0 - Little Endian */
        uint64_t tx_lnk_kbit_toggled_s0_pr : 1;/**< [  0:  0](R/W1C/H) TX Kbit Toggled for Link stream 0, Posted Request substream. */
        uint64_t tx_lnk_kbit_toggled_s0_npr : 1;/**< [  1:  1](R/W1C/H) TX Kbit Toggled for Link stream 0, Non-Posted Request substream. */
        uint64_t tx_lnk_kbit_toggled_s0_cpl : 1;/**< [  2:  2](R/W1C/H) TX Kbit Toggled for Link stream 0, Completion substream. */
        uint64_t reserved_3_5          : 3;
        uint64_t reserved_6_31         : 26;
        uint64_t reserved_32_63        : 32;
#endif /* Word 0 - End */
    } cn;
};
typedef union cavm_pemsecx_tx_lnk_kbit_toggled cavm_pemsecx_tx_lnk_kbit_toggled_t;

static inline uint64_t CAVM_PEMSECX_TX_LNK_KBIT_TOGGLED(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_PEMSECX_TX_LNK_KBIT_TOGGLED(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CN20KA) && (a<=5))
        return 0xc2c000001610ll + 0x100000000ll * ((a) & 0x7);
    __cavm_csr_fatal("PEMSECX_TX_LNK_KBIT_TOGGLED", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_PEMSECX_TX_LNK_KBIT_TOGGLED(a) cavm_pemsecx_tx_lnk_kbit_toggled_t
#define bustype_CAVM_PEMSECX_TX_LNK_KBIT_TOGGLED(a) CSR_TYPE_ARF
#define basename_CAVM_PEMSECX_TX_LNK_KBIT_TOGGLED(a) "PEMSECX_TX_LNK_KBIT_TOGGLED"
#define device_bar_CAVM_PEMSECX_TX_LNK_KBIT_TOGGLED(a) 0x0 /* PF_BAR0 */
#define busnum_CAVM_PEMSECX_TX_LNK_KBIT_TOGGLED(a) (a)
#define arguments_CAVM_PEMSECX_TX_LNK_KBIT_TOGGLED(a) (a),-1,-1,-1

/**
 * Register (ARF) pemsec#_tx_out_aad
 *
 * TX FIPS Output Out AAD Register
 * This register is for testing the IDE encryption logic per the
 * FIPS-197 AES standard.
 *
 * This register is only accessible when
 * PEMSEC_BLK_IDE_CTL[IDE_TEST_ENABLE] is set to 1.
 * Accesses to this register when
 * PEMSEC_BLK_IDE_CTL[IDE_TEST_ENABLE] is set to 0 will return
 * an error.
 */
union cavm_pemsecx_tx_out_aad
{
    uint64_t u;
    struct cavm_pemsecx_tx_out_aad_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_1_63         : 63;
        uint64_t out_aad               : 1;  /**< [  0:  0](RO/H) Command context index. */
#else /* Word 0 - Little Endian */
        uint64_t out_aad               : 1;  /**< [  0:  0](RO/H) Command context index. */
        uint64_t reserved_1_63         : 63;
#endif /* Word 0 - End */
    } s;
    struct cavm_pemsecx_tx_out_aad_cn
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_32_63        : 32;
        uint64_t reserved_1_31         : 31;
        uint64_t out_aad               : 1;  /**< [  0:  0](RO/H) Command context index. */
#else /* Word 0 - Little Endian */
        uint64_t out_aad               : 1;  /**< [  0:  0](RO/H) Command context index. */
        uint64_t reserved_1_31         : 31;
        uint64_t reserved_32_63        : 32;
#endif /* Word 0 - End */
    } cn;
};
typedef union cavm_pemsecx_tx_out_aad cavm_pemsecx_tx_out_aad_t;

static inline uint64_t CAVM_PEMSECX_TX_OUT_AAD(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_PEMSECX_TX_OUT_AAD(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CN20KA) && (a<=5))
        return 0xc2c000004a28ll + 0x100000000ll * ((a) & 0x7);
    __cavm_csr_fatal("PEMSECX_TX_OUT_AAD", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_PEMSECX_TX_OUT_AAD(a) cavm_pemsecx_tx_out_aad_t
#define bustype_CAVM_PEMSECX_TX_OUT_AAD(a) CSR_TYPE_ARF
#define basename_CAVM_PEMSECX_TX_OUT_AAD(a) "PEMSECX_TX_OUT_AAD"
#define device_bar_CAVM_PEMSECX_TX_OUT_AAD(a) 0x0 /* PF_BAR0 */
#define busnum_CAVM_PEMSECX_TX_OUT_AAD(a) (a)
#define arguments_CAVM_PEMSECX_TX_OUT_AAD(a) (a),-1,-1,-1

/**
 * Register (ARF) pemsec#_tx_out_aad_size
 *
 * TX FIPS Output Out AAD Size Register
 * This register is for testing the IDE encryption logic per the
 * FIPS-197 AES standard.
 *
 * This register is only accessible when
 * PEMSEC_BLK_IDE_CTL[IDE_TEST_ENABLE] is set to 1.
 * Accesses to this register when
 * PEMSEC_BLK_IDE_CTL[IDE_TEST_ENABLE] is set to 0 will return
 * an error.
 */
union cavm_pemsecx_tx_out_aad_size
{
    uint64_t u;
    struct cavm_pemsecx_tx_out_aad_size_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_6_63         : 58;
        uint64_t out_aad_size          : 6;  /**< [  5:  0](RO/H) Byte mask of the Additional Authentication Data (AAD) in the
                                                                 output data. */
#else /* Word 0 - Little Endian */
        uint64_t out_aad_size          : 6;  /**< [  5:  0](RO/H) Byte mask of the Additional Authentication Data (AAD) in the
                                                                 output data. */
        uint64_t reserved_6_63         : 58;
#endif /* Word 0 - End */
    } s;
    struct cavm_pemsecx_tx_out_aad_size_cn
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_32_63        : 32;
        uint64_t reserved_6_31         : 26;
        uint64_t out_aad_size          : 6;  /**< [  5:  0](RO/H) Byte mask of the Additional Authentication Data (AAD) in the
                                                                 output data. */
#else /* Word 0 - Little Endian */
        uint64_t out_aad_size          : 6;  /**< [  5:  0](RO/H) Byte mask of the Additional Authentication Data (AAD) in the
                                                                 output data. */
        uint64_t reserved_6_31         : 26;
        uint64_t reserved_32_63        : 32;
#endif /* Word 0 - End */
    } cn;
};
typedef union cavm_pemsecx_tx_out_aad_size cavm_pemsecx_tx_out_aad_size_t;

static inline uint64_t CAVM_PEMSECX_TX_OUT_AAD_SIZE(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_PEMSECX_TX_OUT_AAD_SIZE(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CN20KA) && (a<=5))
        return 0xc2c000004a30ll + 0x100000000ll * ((a) & 0x7);
    __cavm_csr_fatal("PEMSECX_TX_OUT_AAD_SIZE", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_PEMSECX_TX_OUT_AAD_SIZE(a) cavm_pemsecx_tx_out_aad_size_t
#define bustype_CAVM_PEMSECX_TX_OUT_AAD_SIZE(a) CSR_TYPE_ARF
#define basename_CAVM_PEMSECX_TX_OUT_AAD_SIZE(a) "PEMSECX_TX_OUT_AAD_SIZE"
#define device_bar_CAVM_PEMSECX_TX_OUT_AAD_SIZE(a) 0x0 /* PF_BAR0 */
#define busnum_CAVM_PEMSECX_TX_OUT_AAD_SIZE(a) (a)
#define arguments_CAVM_PEMSECX_TX_OUT_AAD_SIZE(a) (a),-1,-1,-1

/**
 * Register (ARF) pemsec#_tx_out_data_chunk
 *
 * TX FIPS Output Output Data Chunk Register
 * This register is for testing the IDE encryption logic per the
 * FIPS-197 AES standard.
 *
 * This register is only accessible when
 * PEMSEC_BLK_IDE_CTL[IDE_TEST_ENABLE] is set to 1.
 * Accesses to this register when
 * PEMSEC_BLK_IDE_CTL[IDE_TEST_ENABLE] is set to 0 will return
 * an error.
 */
union cavm_pemsecx_tx_out_data_chunk
{
    uint64_t u;
    struct cavm_pemsecx_tx_out_data_chunk_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_32_63        : 32;
        uint64_t out_data_chunk        : 32; /**< [ 31:  0](RO/H) 32b chunk of the calculated message. */
#else /* Word 0 - Little Endian */
        uint64_t out_data_chunk        : 32; /**< [ 31:  0](RO/H) 32b chunk of the calculated message. */
        uint64_t reserved_32_63        : 32;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_pemsecx_tx_out_data_chunk_s cn; */
};
typedef union cavm_pemsecx_tx_out_data_chunk cavm_pemsecx_tx_out_data_chunk_t;

static inline uint64_t CAVM_PEMSECX_TX_OUT_DATA_CHUNK(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_PEMSECX_TX_OUT_DATA_CHUNK(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CN20KA) && (a<=5))
        return 0xc2c000004a50ll + 0x100000000ll * ((a) & 0x7);
    __cavm_csr_fatal("PEMSECX_TX_OUT_DATA_CHUNK", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_PEMSECX_TX_OUT_DATA_CHUNK(a) cavm_pemsecx_tx_out_data_chunk_t
#define bustype_CAVM_PEMSECX_TX_OUT_DATA_CHUNK(a) CSR_TYPE_ARF
#define basename_CAVM_PEMSECX_TX_OUT_DATA_CHUNK(a) "PEMSECX_TX_OUT_DATA_CHUNK"
#define device_bar_CAVM_PEMSECX_TX_OUT_DATA_CHUNK(a) 0x0 /* PF_BAR0 */
#define busnum_CAVM_PEMSECX_TX_OUT_DATA_CHUNK(a) (a)
#define arguments_CAVM_PEMSECX_TX_OUT_DATA_CHUNK(a) (a),-1,-1,-1

/**
 * Register (ARF) pemsec#_tx_out_data_idx
 *
 * TX FIPS Output Output Data IDX Register
 * This register is for testing the IDE encryption logic per the
 * FIPS-197 AES standard.
 *
 * This register is only accessible when
 * PEMSEC_BLK_IDE_CTL[IDE_TEST_ENABLE] is set to 1.
 * Accesses to this register when
 * PEMSEC_BLK_IDE_CTL[IDE_TEST_ENABLE] is set to 0 will return
 * an error.
 */
union cavm_pemsecx_tx_out_data_idx
{
    uint64_t u;
    struct cavm_pemsecx_tx_out_data_idx_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_5_63         : 59;
        uint64_t out_data_idx          : 5;  /**< [  4:  0](R/W) Index of the 32b msg chunk constructing the Message word ,
                                                                 post encryption/decryption. A partial word is left justified on
                                                                 the signal. */
#else /* Word 0 - Little Endian */
        uint64_t out_data_idx          : 5;  /**< [  4:  0](R/W) Index of the 32b msg chunk constructing the Message word ,
                                                                 post encryption/decryption. A partial word is left justified on
                                                                 the signal. */
        uint64_t reserved_5_63         : 59;
#endif /* Word 0 - End */
    } s;
    struct cavm_pemsecx_tx_out_data_idx_cn
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_32_63        : 32;
        uint64_t reserved_5_31         : 27;
        uint64_t out_data_idx          : 5;  /**< [  4:  0](R/W) Index of the 32b msg chunk constructing the Message word ,
                                                                 post encryption/decryption. A partial word is left justified on
                                                                 the signal. */
#else /* Word 0 - Little Endian */
        uint64_t out_data_idx          : 5;  /**< [  4:  0](R/W) Index of the 32b msg chunk constructing the Message word ,
                                                                 post encryption/decryption. A partial word is left justified on
                                                                 the signal. */
        uint64_t reserved_5_31         : 27;
        uint64_t reserved_32_63        : 32;
#endif /* Word 0 - End */
    } cn;
};
typedef union cavm_pemsecx_tx_out_data_idx cavm_pemsecx_tx_out_data_idx_t;

static inline uint64_t CAVM_PEMSECX_TX_OUT_DATA_IDX(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_PEMSECX_TX_OUT_DATA_IDX(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CN20KA) && (a<=5))
        return 0xc2c000004a48ll + 0x100000000ll * ((a) & 0x7);
    __cavm_csr_fatal("PEMSECX_TX_OUT_DATA_IDX", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_PEMSECX_TX_OUT_DATA_IDX(a) cavm_pemsecx_tx_out_data_idx_t
#define bustype_CAVM_PEMSECX_TX_OUT_DATA_IDX(a) CSR_TYPE_ARF
#define basename_CAVM_PEMSECX_TX_OUT_DATA_IDX(a) "PEMSECX_TX_OUT_DATA_IDX"
#define device_bar_CAVM_PEMSECX_TX_OUT_DATA_IDX(a) 0x0 /* PF_BAR0 */
#define busnum_CAVM_PEMSECX_TX_OUT_DATA_IDX(a) (a)
#define arguments_CAVM_PEMSECX_TX_OUT_DATA_IDX(a) (a),-1,-1,-1

/**
 * Register (ARF) pemsec#_tx_out_eop
 *
 * TX FIPS Output EOP Indication Register
 * This register is for testing the IDE encryption logic per the
 * FIPS-197 AES standard.
 *
 * This register is only accessible when
 * PEMSEC_BLK_IDE_CTL[IDE_TEST_ENABLE] is set to 1.
 * Accesses to this register when
 * PEMSEC_BLK_IDE_CTL[IDE_TEST_ENABLE] is set to 0 will return
 * an error.
 */
union cavm_pemsecx_tx_out_eop
{
    uint64_t u;
    struct cavm_pemsecx_tx_out_eop_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_1_63         : 63;
        uint64_t out_eop               : 1;  /**< [  0:  0](RO/H) Reflect the equivalent signal on the Command interface. The
                                                                 value on the output will have an identical value as sent on the
                                                                 input. */
#else /* Word 0 - Little Endian */
        uint64_t out_eop               : 1;  /**< [  0:  0](RO/H) Reflect the equivalent signal on the Command interface. The
                                                                 value on the output will have an identical value as sent on the
                                                                 input. */
        uint64_t reserved_1_63         : 63;
#endif /* Word 0 - End */
    } s;
    struct cavm_pemsecx_tx_out_eop_cn
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_32_63        : 32;
        uint64_t reserved_1_31         : 31;
        uint64_t out_eop               : 1;  /**< [  0:  0](RO/H) Reflect the equivalent signal on the Command interface. The
                                                                 value on the output will have an identical value as sent on the
                                                                 input. */
#else /* Word 0 - Little Endian */
        uint64_t out_eop               : 1;  /**< [  0:  0](RO/H) Reflect the equivalent signal on the Command interface. The
                                                                 value on the output will have an identical value as sent on the
                                                                 input. */
        uint64_t reserved_1_31         : 31;
        uint64_t reserved_32_63        : 32;
#endif /* Word 0 - End */
    } cn;
};
typedef union cavm_pemsecx_tx_out_eop cavm_pemsecx_tx_out_eop_t;

static inline uint64_t CAVM_PEMSECX_TX_OUT_EOP(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_PEMSECX_TX_OUT_EOP(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CN20KA) && (a<=5))
        return 0xc2c000004a18ll + 0x100000000ll * ((a) & 0x7);
    __cavm_csr_fatal("PEMSECX_TX_OUT_EOP", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_PEMSECX_TX_OUT_EOP(a) cavm_pemsecx_tx_out_eop_t
#define bustype_CAVM_PEMSECX_TX_OUT_EOP(a) CSR_TYPE_ARF
#define basename_CAVM_PEMSECX_TX_OUT_EOP(a) "PEMSECX_TX_OUT_EOP"
#define device_bar_CAVM_PEMSECX_TX_OUT_EOP(a) 0x0 /* PF_BAR0 */
#define busnum_CAVM_PEMSECX_TX_OUT_EOP(a) (a)
#define arguments_CAVM_PEMSECX_TX_OUT_EOP(a) (a),-1,-1,-1

/**
 * Register (ARF) pemsec#_tx_out_mac_chunk
 *
 * TX FIPS Output MAC Chunk Register
 * This register is for testing the IDE encryption logic per the
 * FIPS-197 AES standard.
 *
 * This register is only accessible when
 * PEMSEC_BLK_IDE_CTL[IDE_TEST_ENABLE] is set to 1.
 * Accesses to this register when
 * PEMSEC_BLK_IDE_CTL[IDE_TEST_ENABLE] is set to 0 will return
 * an error.
 */
union cavm_pemsecx_tx_out_mac_chunk
{
    uint64_t u;
    struct cavm_pemsecx_tx_out_mac_chunk_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_32_63        : 32;
        uint64_t out_mac_chunk         : 32; /**< [ 31:  0](RO/H) 32b chunk of the calculated MAC value. */
#else /* Word 0 - Little Endian */
        uint64_t out_mac_chunk         : 32; /**< [ 31:  0](RO/H) 32b chunk of the calculated MAC value. */
        uint64_t reserved_32_63        : 32;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_pemsecx_tx_out_mac_chunk_s cn; */
};
typedef union cavm_pemsecx_tx_out_mac_chunk cavm_pemsecx_tx_out_mac_chunk_t;

static inline uint64_t CAVM_PEMSECX_TX_OUT_MAC_CHUNK(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_PEMSECX_TX_OUT_MAC_CHUNK(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CN20KA) && (a<=5))
        return 0xc2c000004a68ll + 0x100000000ll * ((a) & 0x7);
    __cavm_csr_fatal("PEMSECX_TX_OUT_MAC_CHUNK", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_PEMSECX_TX_OUT_MAC_CHUNK(a) cavm_pemsecx_tx_out_mac_chunk_t
#define bustype_CAVM_PEMSECX_TX_OUT_MAC_CHUNK(a) CSR_TYPE_ARF
#define basename_CAVM_PEMSECX_TX_OUT_MAC_CHUNK(a) "PEMSECX_TX_OUT_MAC_CHUNK"
#define device_bar_CAVM_PEMSECX_TX_OUT_MAC_CHUNK(a) 0x0 /* PF_BAR0 */
#define busnum_CAVM_PEMSECX_TX_OUT_MAC_CHUNK(a) (a)
#define arguments_CAVM_PEMSECX_TX_OUT_MAC_CHUNK(a) (a),-1,-1,-1

/**
 * Register (ARF) pemsec#_tx_out_mac_idx
 *
 * TX FIPS Output MAC Index Register
 * This register is for testing the IDE encryption logic per the
 * FIPS-197 AES standard.
 *
 * This register is only accessible when
 * PEMSEC_BLK_IDE_CTL[IDE_TEST_ENABLE] is set to 1.
 * Accesses to this register when
 * PEMSEC_BLK_IDE_CTL[IDE_TEST_ENABLE] is set to 0 will return
 * an error.
 */
union cavm_pemsecx_tx_out_mac_idx
{
    uint64_t u;
    struct cavm_pemsecx_tx_out_mac_idx_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_2_63         : 62;
        uint64_t out_mac_idx           : 2;  /**< [  1:  0](R/W) Index of the 32b MAC chunk constructing the calculated
                                                                 mac. MAC is in Big Endian Byte order. */
#else /* Word 0 - Little Endian */
        uint64_t out_mac_idx           : 2;  /**< [  1:  0](R/W) Index of the 32b MAC chunk constructing the calculated
                                                                 mac. MAC is in Big Endian Byte order. */
        uint64_t reserved_2_63         : 62;
#endif /* Word 0 - End */
    } s;
    struct cavm_pemsecx_tx_out_mac_idx_cn
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_32_63        : 32;
        uint64_t reserved_2_31         : 30;
        uint64_t out_mac_idx           : 2;  /**< [  1:  0](R/W) Index of the 32b MAC chunk constructing the calculated
                                                                 mac. MAC is in Big Endian Byte order. */
#else /* Word 0 - Little Endian */
        uint64_t out_mac_idx           : 2;  /**< [  1:  0](R/W) Index of the 32b MAC chunk constructing the calculated
                                                                 mac. MAC is in Big Endian Byte order. */
        uint64_t reserved_2_31         : 30;
        uint64_t reserved_32_63        : 32;
#endif /* Word 0 - End */
    } cn;
};
typedef union cavm_pemsecx_tx_out_mac_idx cavm_pemsecx_tx_out_mac_idx_t;

static inline uint64_t CAVM_PEMSECX_TX_OUT_MAC_IDX(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_PEMSECX_TX_OUT_MAC_IDX(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CN20KA) && (a<=5))
        return 0xc2c000004a60ll + 0x100000000ll * ((a) & 0x7);
    __cavm_csr_fatal("PEMSECX_TX_OUT_MAC_IDX", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_PEMSECX_TX_OUT_MAC_IDX(a) cavm_pemsecx_tx_out_mac_idx_t
#define bustype_CAVM_PEMSECX_TX_OUT_MAC_IDX(a) CSR_TYPE_ARF
#define basename_CAVM_PEMSECX_TX_OUT_MAC_IDX(a) "PEMSECX_TX_OUT_MAC_IDX"
#define device_bar_CAVM_PEMSECX_TX_OUT_MAC_IDX(a) 0x0 /* PF_BAR0 */
#define busnum_CAVM_PEMSECX_TX_OUT_MAC_IDX(a) (a)
#define arguments_CAVM_PEMSECX_TX_OUT_MAC_IDX(a) (a),-1,-1,-1

/**
 * Register (ARF) pemsec#_tx_out_msg
 *
 * TX_FIPS Output Out MSG Register
 * This register is for testing the IDE encryption logic per the
 * FIPS-197 AES standard.
 *
 * This register is only accessible when
 * PEMSEC_BLK_IDE_CTL[IDE_TEST_ENABLE] is set to 1.
 * Accesses to this register when
 * PEMSEC_BLK_IDE_CTL[IDE_TEST_ENABLE] is set to 0 will return
 * an error.
 */
union cavm_pemsecx_tx_out_msg
{
    uint64_t u;
    struct cavm_pemsecx_tx_out_msg_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_1_63         : 63;
        uint64_t out_msg               : 1;  /**< [  0:  0](RO/H) Message (MSG) present in the output data. */
#else /* Word 0 - Little Endian */
        uint64_t out_msg               : 1;  /**< [  0:  0](RO/H) Message (MSG) present in the output data. */
        uint64_t reserved_1_63         : 63;
#endif /* Word 0 - End */
    } s;
    struct cavm_pemsecx_tx_out_msg_cn
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_32_63        : 32;
        uint64_t reserved_1_31         : 31;
        uint64_t out_msg               : 1;  /**< [  0:  0](RO/H) Message (MSG) present in the output data. */
#else /* Word 0 - Little Endian */
        uint64_t out_msg               : 1;  /**< [  0:  0](RO/H) Message (MSG) present in the output data. */
        uint64_t reserved_1_31         : 31;
        uint64_t reserved_32_63        : 32;
#endif /* Word 0 - End */
    } cn;
};
typedef union cavm_pemsecx_tx_out_msg cavm_pemsecx_tx_out_msg_t;

static inline uint64_t CAVM_PEMSECX_TX_OUT_MSG(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_PEMSECX_TX_OUT_MSG(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CN20KA) && (a<=5))
        return 0xc2c000004a38ll + 0x100000000ll * ((a) & 0x7);
    __cavm_csr_fatal("PEMSECX_TX_OUT_MSG", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_PEMSECX_TX_OUT_MSG(a) cavm_pemsecx_tx_out_msg_t
#define bustype_CAVM_PEMSECX_TX_OUT_MSG(a) CSR_TYPE_ARF
#define basename_CAVM_PEMSECX_TX_OUT_MSG(a) "PEMSECX_TX_OUT_MSG"
#define device_bar_CAVM_PEMSECX_TX_OUT_MSG(a) 0x0 /* PF_BAR0 */
#define busnum_CAVM_PEMSECX_TX_OUT_MSG(a) (a)
#define arguments_CAVM_PEMSECX_TX_OUT_MSG(a) (a),-1,-1,-1

/**
 * Register (ARF) pemsec#_tx_out_ready
 *
 * TX FIPS Output Ready Register
 * This register is for testing the IDE encryption logic per the
 * FIPS-197 AES standard.
 *
 * This register is only accessible when
 * PEMSEC_BLK_IDE_CTL[IDE_TEST_ENABLE] is set to 1.
 * Accesses to this register when
 * PEMSEC_BLK_IDE_CTL[IDE_TEST_ENABLE] is set to 0 will return
 * an error.
 */
union cavm_pemsecx_tx_out_ready
{
    uint64_t u;
    struct cavm_pemsecx_tx_out_ready_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_1_63         : 63;
        uint64_t out_ready             : 1;  /**< [  0:  0](R/W1S) Output Ready.
                                                                 AXI like valid/ready(!stall) handshake.
                                                                 PEMSEC_TX_OUT_VALID[OUT_VALID] set to 1 will deassert
                                                                 [OUT_READY]. Writing 1 to [OUT_READY] will set [OUT_READY]
                                                                 to 1 and signal that the software is ready to read the
                                                                 next output word from the PEMSEC_IDE_TX_OUT_DATA_CHUNK
                                                                 register. */
#else /* Word 0 - Little Endian */
        uint64_t out_ready             : 1;  /**< [  0:  0](R/W1S) Output Ready.
                                                                 AXI like valid/ready(!stall) handshake.
                                                                 PEMSEC_TX_OUT_VALID[OUT_VALID] set to 1 will deassert
                                                                 [OUT_READY]. Writing 1 to [OUT_READY] will set [OUT_READY]
                                                                 to 1 and signal that the software is ready to read the
                                                                 next output word from the PEMSEC_IDE_TX_OUT_DATA_CHUNK
                                                                 register. */
        uint64_t reserved_1_63         : 63;
#endif /* Word 0 - End */
    } s;
    struct cavm_pemsecx_tx_out_ready_cn
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_32_63        : 32;
        uint64_t reserved_1_31         : 31;
        uint64_t out_ready             : 1;  /**< [  0:  0](R/W1S) Output Ready.
                                                                 AXI like valid/ready(!stall) handshake.
                                                                 PEMSEC_TX_OUT_VALID[OUT_VALID] set to 1 will deassert
                                                                 [OUT_READY]. Writing 1 to [OUT_READY] will set [OUT_READY]
                                                                 to 1 and signal that the software is ready to read the
                                                                 next output word from the PEMSEC_IDE_TX_OUT_DATA_CHUNK
                                                                 register. */
#else /* Word 0 - Little Endian */
        uint64_t out_ready             : 1;  /**< [  0:  0](R/W1S) Output Ready.
                                                                 AXI like valid/ready(!stall) handshake.
                                                                 PEMSEC_TX_OUT_VALID[OUT_VALID] set to 1 will deassert
                                                                 [OUT_READY]. Writing 1 to [OUT_READY] will set [OUT_READY]
                                                                 to 1 and signal that the software is ready to read the
                                                                 next output word from the PEMSEC_IDE_TX_OUT_DATA_CHUNK
                                                                 register. */
        uint64_t reserved_1_31         : 31;
        uint64_t reserved_32_63        : 32;
#endif /* Word 0 - End */
    } cn;
};
typedef union cavm_pemsecx_tx_out_ready cavm_pemsecx_tx_out_ready_t;

static inline uint64_t CAVM_PEMSECX_TX_OUT_READY(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_PEMSECX_TX_OUT_READY(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CN20KA) && (a<=5))
        return 0xc2c000004a00ll + 0x100000000ll * ((a) & 0x7);
    __cavm_csr_fatal("PEMSECX_TX_OUT_READY", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_PEMSECX_TX_OUT_READY(a) cavm_pemsecx_tx_out_ready_t
#define bustype_CAVM_PEMSECX_TX_OUT_READY(a) CSR_TYPE_ARF
#define basename_CAVM_PEMSECX_TX_OUT_READY(a) "PEMSECX_TX_OUT_READY"
#define device_bar_CAVM_PEMSECX_TX_OUT_READY(a) 0x0 /* PF_BAR0 */
#define busnum_CAVM_PEMSECX_TX_OUT_READY(a) (a)
#define arguments_CAVM_PEMSECX_TX_OUT_READY(a) (a),-1,-1,-1

/**
 * Register (ARF) pemsec#_tx_out_sop
 *
 * TX FIPS Output SOP Indication Register
 * This register is for testing the IDE encryption logic per the
 * FIPS-197 AES standard.
 *
 * This register is only accessible when
 * PEMSEC_BLK_IDE_CTL[IDE_TEST_ENABLE] is set to 1.
 * Accesses to this register when
 * PEMSEC_BLK_IDE_CTL[IDE_TEST_ENABLE] is set to 0 will return
 * an error.
 */
union cavm_pemsecx_tx_out_sop
{
    uint64_t u;
    struct cavm_pemsecx_tx_out_sop_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_1_63         : 63;
        uint64_t out_sop               : 1;  /**< [  0:  0](RO/H) Indicates that this command is the first of the packet. */
#else /* Word 0 - Little Endian */
        uint64_t out_sop               : 1;  /**< [  0:  0](RO/H) Indicates that this command is the first of the packet. */
        uint64_t reserved_1_63         : 63;
#endif /* Word 0 - End */
    } s;
    struct cavm_pemsecx_tx_out_sop_cn
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_32_63        : 32;
        uint64_t reserved_1_31         : 31;
        uint64_t out_sop               : 1;  /**< [  0:  0](RO/H) Indicates that this command is the first of the packet. */
#else /* Word 0 - Little Endian */
        uint64_t out_sop               : 1;  /**< [  0:  0](RO/H) Indicates that this command is the first of the packet. */
        uint64_t reserved_1_31         : 31;
        uint64_t reserved_32_63        : 32;
#endif /* Word 0 - End */
    } cn;
};
typedef union cavm_pemsecx_tx_out_sop cavm_pemsecx_tx_out_sop_t;

static inline uint64_t CAVM_PEMSECX_TX_OUT_SOP(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_PEMSECX_TX_OUT_SOP(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CN20KA) && (a<=5))
        return 0xc2c000004a10ll + 0x100000000ll * ((a) & 0x7);
    __cavm_csr_fatal("PEMSECX_TX_OUT_SOP", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_PEMSECX_TX_OUT_SOP(a) cavm_pemsecx_tx_out_sop_t
#define bustype_CAVM_PEMSECX_TX_OUT_SOP(a) CSR_TYPE_ARF
#define basename_CAVM_PEMSECX_TX_OUT_SOP(a) "PEMSECX_TX_OUT_SOP"
#define device_bar_CAVM_PEMSECX_TX_OUT_SOP(a) 0x0 /* PF_BAR0 */
#define busnum_CAVM_PEMSECX_TX_OUT_SOP(a) (a)
#define arguments_CAVM_PEMSECX_TX_OUT_SOP(a) (a),-1,-1,-1

/**
 * Register (ARF) pemsec#_tx_out_valid
 *
 * TX FIPS Output Valid Register
 * This register is for testing the IDE encryption logic per the
 * FIPS-197 AES standard.
 *
 * This register is only accessible when
 * PEMSEC_BLK_IDE_CTL[IDE_TEST_ENABLE] is set to 1.
 * Accesses to this register when
 * PEMSEC_BLK_IDE_CTL[IDE_TEST_ENABLE] is set to 0 will return
 * an error.
 */
union cavm_pemsecx_tx_out_valid
{
    uint64_t u;
    struct cavm_pemsecx_tx_out_valid_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_1_63         : 63;
        uint64_t out_valid             : 1;  /**< [  0:  0](RO/H) AXI like valid/ready(!stall) handshake. */
#else /* Word 0 - Little Endian */
        uint64_t out_valid             : 1;  /**< [  0:  0](RO/H) AXI like valid/ready(!stall) handshake. */
        uint64_t reserved_1_63         : 63;
#endif /* Word 0 - End */
    } s;
    struct cavm_pemsecx_tx_out_valid_cn
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_32_63        : 32;
        uint64_t reserved_1_31         : 31;
        uint64_t out_valid             : 1;  /**< [  0:  0](RO/H) AXI like valid/ready(!stall) handshake. */
#else /* Word 0 - Little Endian */
        uint64_t out_valid             : 1;  /**< [  0:  0](RO/H) AXI like valid/ready(!stall) handshake. */
        uint64_t reserved_1_31         : 31;
        uint64_t reserved_32_63        : 32;
#endif /* Word 0 - End */
    } cn;
};
typedef union cavm_pemsecx_tx_out_valid cavm_pemsecx_tx_out_valid_t;

static inline uint64_t CAVM_PEMSECX_TX_OUT_VALID(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_PEMSECX_TX_OUT_VALID(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CN20KA) && (a<=5))
        return 0xc2c000004a08ll + 0x100000000ll * ((a) & 0x7);
    __cavm_csr_fatal("PEMSECX_TX_OUT_VALID", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_PEMSECX_TX_OUT_VALID(a) cavm_pemsecx_tx_out_valid_t
#define bustype_CAVM_PEMSECX_TX_OUT_VALID(a) CSR_TYPE_ARF
#define basename_CAVM_PEMSECX_TX_OUT_VALID(a) "PEMSECX_TX_OUT_VALID"
#define device_bar_CAVM_PEMSECX_TX_OUT_VALID(a) 0x0 /* PF_BAR0 */
#define busnum_CAVM_PEMSECX_TX_OUT_VALID(a) (a)
#define arguments_CAVM_PEMSECX_TX_OUT_VALID(a) (a),-1,-1,-1

/**
 * Register (ARF) pemsec#_tx_pcrc_err_cnt
 *
 * IDE Tx PCRC Error Count Register
 */
union cavm_pemsecx_tx_pcrc_err_cnt
{
    uint64_t u;
    struct cavm_pemsecx_tx_pcrc_err_cnt_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_8_63         : 56;
        uint64_t tx_pcrc_error_cnt     : 8;  /**< [  7:  0](R/W/H) Number of PCRC errors to be injected.
                                                                 Configuring this field with a value \> 0
                                                                 enables PCRC error injection.
                                                                 This value is self-decremented after a PCRC
                                                                 error is injected.
                                                                 When this value is 0 no PCRC error is injected. */
#else /* Word 0 - Little Endian */
        uint64_t tx_pcrc_error_cnt     : 8;  /**< [  7:  0](R/W/H) Number of PCRC errors to be injected.
                                                                 Configuring this field with a value \> 0
                                                                 enables PCRC error injection.
                                                                 This value is self-decremented after a PCRC
                                                                 error is injected.
                                                                 When this value is 0 no PCRC error is injected. */
        uint64_t reserved_8_63         : 56;
#endif /* Word 0 - End */
    } s;
    struct cavm_pemsecx_tx_pcrc_err_cnt_cn
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_32_63        : 32;
        uint64_t reserved_8_31         : 24;
        uint64_t tx_pcrc_error_cnt     : 8;  /**< [  7:  0](R/W/H) Number of PCRC errors to be injected.
                                                                 Configuring this field with a value \> 0
                                                                 enables PCRC error injection.
                                                                 This value is self-decremented after a PCRC
                                                                 error is injected.
                                                                 When this value is 0 no PCRC error is injected. */
#else /* Word 0 - Little Endian */
        uint64_t tx_pcrc_error_cnt     : 8;  /**< [  7:  0](R/W/H) Number of PCRC errors to be injected.
                                                                 Configuring this field with a value \> 0
                                                                 enables PCRC error injection.
                                                                 This value is self-decremented after a PCRC
                                                                 error is injected.
                                                                 When this value is 0 no PCRC error is injected. */
        uint64_t reserved_8_31         : 24;
        uint64_t reserved_32_63        : 32;
#endif /* Word 0 - End */
    } cn;
};
typedef union cavm_pemsecx_tx_pcrc_err_cnt cavm_pemsecx_tx_pcrc_err_cnt_t;

static inline uint64_t CAVM_PEMSECX_TX_PCRC_ERR_CNT(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_PEMSECX_TX_PCRC_ERR_CNT(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CN20KA) && (a<=5))
        return 0xc2c000001860ll + 0x100000000ll * ((a) & 0x7);
    __cavm_csr_fatal("PEMSECX_TX_PCRC_ERR_CNT", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_PEMSECX_TX_PCRC_ERR_CNT(a) cavm_pemsecx_tx_pcrc_err_cnt_t
#define bustype_CAVM_PEMSECX_TX_PCRC_ERR_CNT(a) CSR_TYPE_ARF
#define basename_CAVM_PEMSECX_TX_PCRC_ERR_CNT(a) "PEMSECX_TX_PCRC_ERR_CNT"
#define device_bar_CAVM_PEMSECX_TX_PCRC_ERR_CNT(a) 0x0 /* PF_BAR0 */
#define busnum_CAVM_PEMSECX_TX_PCRC_ERR_CNT(a) (a)
#define arguments_CAVM_PEMSECX_TX_PCRC_ERR_CNT(a) (a),-1,-1,-1

/**
 * Register (ARF) pemsec#_tx_pcrc_err_mask
 *
 * IDE Tx PCRC Error Mask Register
 */
union cavm_pemsecx_tx_pcrc_err_mask
{
    uint64_t u;
    struct cavm_pemsecx_tx_pcrc_err_mask_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_32_63        : 32;
        uint64_t tx_pcrc_error_mask    : 32; /**< [ 31:  0](R/W) 32 bit PCRC error mask value.
                                                                 This value flips the respective bits
                                                                 of the initial PCRC value.
                                                                 Default value indicates 0 error. */
#else /* Word 0 - Little Endian */
        uint64_t tx_pcrc_error_mask    : 32; /**< [ 31:  0](R/W) 32 bit PCRC error mask value.
                                                                 This value flips the respective bits
                                                                 of the initial PCRC value.
                                                                 Default value indicates 0 error. */
        uint64_t reserved_32_63        : 32;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_pemsecx_tx_pcrc_err_mask_s cn; */
};
typedef union cavm_pemsecx_tx_pcrc_err_mask cavm_pemsecx_tx_pcrc_err_mask_t;

static inline uint64_t CAVM_PEMSECX_TX_PCRC_ERR_MASK(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_PEMSECX_TX_PCRC_ERR_MASK(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CN20KA) && (a<=5))
        return 0xc2c000001858ll + 0x100000000ll * ((a) & 0x7);
    __cavm_csr_fatal("PEMSECX_TX_PCRC_ERR_MASK", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_PEMSECX_TX_PCRC_ERR_MASK(a) cavm_pemsecx_tx_pcrc_err_mask_t
#define bustype_CAVM_PEMSECX_TX_PCRC_ERR_MASK(a) CSR_TYPE_ARF
#define basename_CAVM_PEMSECX_TX_PCRC_ERR_MASK(a) "PEMSECX_TX_PCRC_ERR_MASK"
#define device_bar_CAVM_PEMSECX_TX_PCRC_ERR_MASK(a) 0x0 /* PF_BAR0 */
#define busnum_CAVM_PEMSECX_TX_PCRC_ERR_MASK(a) (a)
#define arguments_CAVM_PEMSECX_TX_PCRC_ERR_MASK(a) (a),-1,-1,-1

/**
 * Register (ARF) pemsec#_tx_stat
 *
 * TX Status Register
 */
union cavm_pemsecx_tx_stat
{
    uint64_t u;
    struct cavm_pemsecx_tx_stat_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_1_63         : 63;
        uint64_t busy                  : 1;  /**< [  0:  0](RO/H) Indicates that the core is busy installing a key.
                                                                 All other registers must not be written while this field
                                                                 indicates a 1. */
#else /* Word 0 - Little Endian */
        uint64_t busy                  : 1;  /**< [  0:  0](RO/H) Indicates that the core is busy installing a key.
                                                                 All other registers must not be written while this field
                                                                 indicates a 1. */
        uint64_t reserved_1_63         : 63;
#endif /* Word 0 - End */
    } s;
    struct cavm_pemsecx_tx_stat_cn
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_32_63        : 32;
        uint64_t reserved_2_31         : 30;
        uint64_t reserved_1            : 1;
        uint64_t busy                  : 1;  /**< [  0:  0](RO/H) Indicates that the core is busy installing a key.
                                                                 All other registers must not be written while this field
                                                                 indicates a 1. */
#else /* Word 0 - Little Endian */
        uint64_t busy                  : 1;  /**< [  0:  0](RO/H) Indicates that the core is busy installing a key.
                                                                 All other registers must not be written while this field
                                                                 indicates a 1. */
        uint64_t reserved_1            : 1;
        uint64_t reserved_2_31         : 30;
        uint64_t reserved_32_63        : 32;
#endif /* Word 0 - End */
    } cn;
};
typedef union cavm_pemsecx_tx_stat cavm_pemsecx_tx_stat_t;

static inline uint64_t CAVM_PEMSECX_TX_STAT(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_PEMSECX_TX_STAT(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CN20KA) && (a<=5))
        return 0xc2c000004030ll + 0x100000000ll * ((a) & 0x7);
    __cavm_csr_fatal("PEMSECX_TX_STAT", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_PEMSECX_TX_STAT(a) cavm_pemsecx_tx_stat_t
#define bustype_CAVM_PEMSECX_TX_STAT(a) CSR_TYPE_ARF
#define basename_CAVM_PEMSECX_TX_STAT(a) "PEMSECX_TX_STAT"
#define device_bar_CAVM_PEMSECX_TX_STAT(a) 0x0 /* PF_BAR0 */
#define busnum_CAVM_PEMSECX_TX_STAT(a) (a)
#define arguments_CAVM_PEMSECX_TX_STAT(a) (a),-1,-1,-1

/**
 * Register (ARF) pemsec#_tx_test_mode_cfg
 *
 * TX FIPS Test Mode Configuration Register
 * This register is for testing the IDE encryption logic per the
 * FIPS-197 AES standard.
 *
 * This register is only accessible when
 * PEMSEC_BLK_IDE_CTL[IDE_TEST_ENABLE] is set to 1.
 * Accesses to this register when
 * PEMSEC_BLK_IDE_CTL[IDE_TEST_ENABLE] is set to 0 will return
 * an error.
 */
union cavm_pemsecx_tx_test_mode_cfg
{
    uint64_t u;
    struct cavm_pemsecx_tx_test_mode_cfg_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_2_63         : 62;
        uint64_t test_mode_cfg         : 2;  /**< [  1:  0](R/W) FIPS Test Mode Configuration.
                                                                    0x0 - GCM
                                                                    0x1 - Reserved
                                                                    0x2 - CTR
                                                                    0x3 - ECB */
#else /* Word 0 - Little Endian */
        uint64_t test_mode_cfg         : 2;  /**< [  1:  0](R/W) FIPS Test Mode Configuration.
                                                                    0x0 - GCM
                                                                    0x1 - Reserved
                                                                    0x2 - CTR
                                                                    0x3 - ECB */
        uint64_t reserved_2_63         : 62;
#endif /* Word 0 - End */
    } s;
    struct cavm_pemsecx_tx_test_mode_cfg_cn
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_32_63        : 32;
        uint64_t reserved_2_31         : 30;
        uint64_t test_mode_cfg         : 2;  /**< [  1:  0](R/W) FIPS Test Mode Configuration.
                                                                    0x0 - GCM
                                                                    0x1 - Reserved
                                                                    0x2 - CTR
                                                                    0x3 - ECB */
#else /* Word 0 - Little Endian */
        uint64_t test_mode_cfg         : 2;  /**< [  1:  0](R/W) FIPS Test Mode Configuration.
                                                                    0x0 - GCM
                                                                    0x1 - Reserved
                                                                    0x2 - CTR
                                                                    0x3 - ECB */
        uint64_t reserved_2_31         : 30;
        uint64_t reserved_32_63        : 32;
#endif /* Word 0 - End */
    } cn;
};
typedef union cavm_pemsecx_tx_test_mode_cfg cavm_pemsecx_tx_test_mode_cfg_t;

static inline uint64_t CAVM_PEMSECX_TX_TEST_MODE_CFG(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_PEMSECX_TX_TEST_MODE_CFG(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CN20KA) && (a<=5))
        return 0xc2c000004898ll + 0x100000000ll * ((a) & 0x7);
    __cavm_csr_fatal("PEMSECX_TX_TEST_MODE_CFG", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_PEMSECX_TX_TEST_MODE_CFG(a) cavm_pemsecx_tx_test_mode_cfg_t
#define bustype_CAVM_PEMSECX_TX_TEST_MODE_CFG(a) CSR_TYPE_ARF
#define basename_CAVM_PEMSECX_TX_TEST_MODE_CFG(a) "PEMSECX_TX_TEST_MODE_CFG"
#define device_bar_CAVM_PEMSECX_TX_TEST_MODE_CFG(a) 0x0 /* PF_BAR0 */
#define busnum_CAVM_PEMSECX_TX_TEST_MODE_CFG(a) (a)
#define arguments_CAVM_PEMSECX_TX_TEST_MODE_CFG(a) (a),-1,-1,-1

/**
 * Register (ARF) pemsec#_txdisable_stream_keys
 *
 * Invalidates the Stream Keys for TX Register
 */
union cavm_pemsecx_txdisable_stream_keys
{
    uint64_t u;
    struct cavm_pemsecx_txdisable_stream_keys_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_1_63         : 63;
        uint64_t disable_key_s0        : 1;  /**< [  0:  0](R/W) Setting this bit to 1 invalidates the KEY for stream 0 in the
                                                                 TX data path. */
#else /* Word 0 - Little Endian */
        uint64_t disable_key_s0        : 1;  /**< [  0:  0](R/W) Setting this bit to 1 invalidates the KEY for stream 0 in the
                                                                 TX data path. */
        uint64_t reserved_1_63         : 63;
#endif /* Word 0 - End */
    } s;
    struct cavm_pemsecx_txdisable_stream_keys_cn
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_32_63        : 32;
        uint64_t reserved_16_31        : 16;
        uint64_t reserved_1_15         : 15;
        uint64_t disable_key_s0        : 1;  /**< [  0:  0](R/W) Setting this bit to 1 invalidates the KEY for stream 0 in the
                                                                 TX data path. */
#else /* Word 0 - Little Endian */
        uint64_t disable_key_s0        : 1;  /**< [  0:  0](R/W) Setting this bit to 1 invalidates the KEY for stream 0 in the
                                                                 TX data path. */
        uint64_t reserved_1_15         : 15;
        uint64_t reserved_16_31        : 16;
        uint64_t reserved_32_63        : 32;
#endif /* Word 0 - End */
    } cn;
};
typedef union cavm_pemsecx_txdisable_stream_keys cavm_pemsecx_txdisable_stream_keys_t;

static inline uint64_t CAVM_PEMSECX_TXDISABLE_STREAM_KEYS(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_PEMSECX_TXDISABLE_STREAM_KEYS(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CN20KA) && (a<=5))
        return 0xc2c000004380ll + 0x100000000ll * ((a) & 0x7);
    __cavm_csr_fatal("PEMSECX_TXDISABLE_STREAM_KEYS", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_PEMSECX_TXDISABLE_STREAM_KEYS(a) cavm_pemsecx_txdisable_stream_keys_t
#define bustype_CAVM_PEMSECX_TXDISABLE_STREAM_KEYS(a) CSR_TYPE_ARF
#define basename_CAVM_PEMSECX_TXDISABLE_STREAM_KEYS(a) "PEMSECX_TXDISABLE_STREAM_KEYS"
#define device_bar_CAVM_PEMSECX_TXDISABLE_STREAM_KEYS(a) 0x0 /* PF_BAR0 */
#define busnum_CAVM_PEMSECX_TXDISABLE_STREAM_KEYS(a) (a)
#define arguments_CAVM_PEMSECX_TXDISABLE_STREAM_KEYS(a) (a),-1,-1,-1

/**
 * Register (ARF) pemsec#_vdm#_cfg
 *
 * PEMSEC VDM CONFIGURATIION Register
 * Vendor Defined Message Configuration Register.
 *
 * This register is not accessible through ROM scripts; see SCR_WRITE32_S[ADDR].
 *
 * This register is reset on core domain reset.
 */
union cavm_pemsecx_vdmx_cfg
{
    uint64_t u;
    struct cavm_pemsecx_vdmx_cfg_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_1_63         : 63;
        uint64_t vdm_sec_mode          : 1;  /**< [  0:  0](R/W) VDM CSR Security Mode.

                                                                 Selects which group of CSRs control the PCIe VDM Message Mailbox interface.
                                                                 Selection is determined
                                                                      [VDM_SEC_MODE]   VDM Message mailbox interface controlled by these CSRs
                                                                           1               PEMSEC_VDM()_*    {Secure}
                                                                           0               PEM_VDM()_*       {Unsecure}

                                                                 PEM/PEMSEC_VDM()_* registers that are not selected by the [VDM_SEC_MODE]
                                                                 field can be read and written but have no affect on the VDM messaging block. */
#else /* Word 0 - Little Endian */
        uint64_t vdm_sec_mode          : 1;  /**< [  0:  0](R/W) VDM CSR Security Mode.

                                                                 Selects which group of CSRs control the PCIe VDM Message Mailbox interface.
                                                                 Selection is determined
                                                                      [VDM_SEC_MODE]   VDM Message mailbox interface controlled by these CSRs
                                                                           1               PEMSEC_VDM()_*    {Secure}
                                                                           0               PEM_VDM()_*       {Unsecure}

                                                                 PEM/PEMSEC_VDM()_* registers that are not selected by the [VDM_SEC_MODE]
                                                                 field can be read and written but have no affect on the VDM messaging block. */
        uint64_t reserved_1_63         : 63;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_pemsecx_vdmx_cfg_s cn; */
};
typedef union cavm_pemsecx_vdmx_cfg cavm_pemsecx_vdmx_cfg_t;

static inline uint64_t CAVM_PEMSECX_VDMX_CFG(uint64_t a, uint64_t b) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_PEMSECX_VDMX_CFG(uint64_t a, uint64_t b)
{
    if (cavm_is_model(OCTEONTX_CN20KA) && ((a<=5) && (b==0)))
        return 0xc2c000007f70ll + 0x100000000ll * ((a) & 0x7) + 8ll * ((b) & 0x0);
    __cavm_csr_fatal("PEMSECX_VDMX_CFG", 2, a, b, 0, 0, 0, 0);
}

#define typedef_CAVM_PEMSECX_VDMX_CFG(a,b) cavm_pemsecx_vdmx_cfg_t
#define bustype_CAVM_PEMSECX_VDMX_CFG(a,b) CSR_TYPE_ARF
#define basename_CAVM_PEMSECX_VDMX_CFG(a,b) "PEMSECX_VDMX_CFG"
#define device_bar_CAVM_PEMSECX_VDMX_CFG(a,b) 0x0 /* PF_BAR0 */
#define busnum_CAVM_PEMSECX_VDMX_CFG(a,b) (a)
#define arguments_CAVM_PEMSECX_VDMX_CFG(a,b) (a),(b),-1,-1

/**
 * Register (ARF) pemsec#_vdm#_ctl
 *
 * PEMSEC VDM Control Register
 * This register provides control of the Vendor Defined Message (VDM) inbound
 * and outbound message mailboxes. Type 1 PCIe VDM messages are received and sent
 * via the VDM message mailbox interface.
 *
 * This register is not accessible through ROM scripts; see SCR_WRITE32_S[ADDR].
 *
 * This register is reset on core domain reset.
 *
 * This register is restricted to 64-bit access. Unsupported 32-bit access will
 * have unpredictable results, however will not cause an access hang or timeout.
 *
 * The operation of this register is restricted if PEMSEC()_VDM()_CFG[VDM_SEC_MODE]
 * is set to 0. Refer to the PEMSEC()_VDM()_CFG register description.
 */
union cavm_pemsecx_vdmx_ctl
{
    uint64_t u;
    struct cavm_pemsecx_vdmx_ctl_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_32_63        : 32;
        uint64_t ob_mbx_snd            : 1;  /**< [ 31: 31](WO/H) Outbound Message Mailbox Send.

                                                                 Set [OB_MBX_SND] to 1 to start an outbound VDM message transmission.
                                                                 This bit is self-clearing.

                                                                 The following registers must be programmed before setting the [OB_MBX_SND]
                                                                 bit to 1. Refer to the description for these registers for more information..
                                                                       PEMSEC()_VDM()_OB_HDRL
                                                                       PEMSEC()_VDM()_OB_HDRH
                                                                       PEMSEC()_VDM()_OB_PLD */
        uint64_t reserved_4_30         : 27;
        uint64_t mbx_cfg               : 1;  /**< [  3:  3](R/W) Reserved. */
        uint64_t reserved_2            : 1;
        uint64_t ob_mbx_rst            : 1;  /**< [  1:  1](R/W) Outbound Message Mailbox Reset.

                                                                 Set [OB_MBX_RST] to 1 to reset the VDM outbound message mailbox and
                                                                 associated payload FIFO, clear PEMSEC()_VDM()_STATUS[OB_MBX_BUSY] bit and
                                                                 clear PEMSEC()_VDM()_STATUS[OB_MBX_ERR] bit.

                                                                 [OB_MBX_RST] is not self-clearing, and must be set to 0 before sending
                                                                 VDM Type 1 message data via the VDM outbound message mailbox. */
        uint64_t ib_mbx_rst            : 1;  /**< [  0:  0](R/W) Inbound Message Mailbox Reset.

                                                                 Set [IB_MBX_RST] to 1 to reset the VDM inbound message mailbox header
                                                                 and payload FIFOs, clear PEMSEC()_VDM()_STATUS[IB_MBX_ERR] bit and clear
                                                                 the PEMSEC()_VDM()_STATUS[IB_MBX_RDY] bit.

                                                                 [IB_MBX_RST] is not self-clearing and must be set to 0 to receive
                                                                 inbound VDM Type 1 message data in the VDM inbound message mailbox. */
#else /* Word 0 - Little Endian */
        uint64_t ib_mbx_rst            : 1;  /**< [  0:  0](R/W) Inbound Message Mailbox Reset.

                                                                 Set [IB_MBX_RST] to 1 to reset the VDM inbound message mailbox header
                                                                 and payload FIFOs, clear PEMSEC()_VDM()_STATUS[IB_MBX_ERR] bit and clear
                                                                 the PEMSEC()_VDM()_STATUS[IB_MBX_RDY] bit.

                                                                 [IB_MBX_RST] is not self-clearing and must be set to 0 to receive
                                                                 inbound VDM Type 1 message data in the VDM inbound message mailbox. */
        uint64_t ob_mbx_rst            : 1;  /**< [  1:  1](R/W) Outbound Message Mailbox Reset.

                                                                 Set [OB_MBX_RST] to 1 to reset the VDM outbound message mailbox and
                                                                 associated payload FIFO, clear PEMSEC()_VDM()_STATUS[OB_MBX_BUSY] bit and
                                                                 clear PEMSEC()_VDM()_STATUS[OB_MBX_ERR] bit.

                                                                 [OB_MBX_RST] is not self-clearing, and must be set to 0 before sending
                                                                 VDM Type 1 message data via the VDM outbound message mailbox. */
        uint64_t reserved_2            : 1;
        uint64_t mbx_cfg               : 1;  /**< [  3:  3](R/W) Reserved. */
        uint64_t reserved_4_30         : 27;
        uint64_t ob_mbx_snd            : 1;  /**< [ 31: 31](WO/H) Outbound Message Mailbox Send.

                                                                 Set [OB_MBX_SND] to 1 to start an outbound VDM message transmission.
                                                                 This bit is self-clearing.

                                                                 The following registers must be programmed before setting the [OB_MBX_SND]
                                                                 bit to 1. Refer to the description for these registers for more information..
                                                                       PEMSEC()_VDM()_OB_HDRL
                                                                       PEMSEC()_VDM()_OB_HDRH
                                                                       PEMSEC()_VDM()_OB_PLD */
        uint64_t reserved_32_63        : 32;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_pemsecx_vdmx_ctl_s cn; */
};
typedef union cavm_pemsecx_vdmx_ctl cavm_pemsecx_vdmx_ctl_t;

static inline uint64_t CAVM_PEMSECX_VDMX_CTL(uint64_t a, uint64_t b) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_PEMSECX_VDMX_CTL(uint64_t a, uint64_t b)
{
    if (cavm_is_model(OCTEONTX_CN20KA) && ((a<=5) && (b==0)))
        return 0xc2c000007f00ll + 0x100000000ll * ((a) & 0x7) + 8ll * ((b) & 0x0);
    __cavm_csr_fatal("PEMSECX_VDMX_CTL", 2, a, b, 0, 0, 0, 0);
}

#define typedef_CAVM_PEMSECX_VDMX_CTL(a,b) cavm_pemsecx_vdmx_ctl_t
#define bustype_CAVM_PEMSECX_VDMX_CTL(a,b) CSR_TYPE_ARF
#define basename_CAVM_PEMSECX_VDMX_CTL(a,b) "PEMSECX_VDMX_CTL"
#define device_bar_CAVM_PEMSECX_VDMX_CTL(a,b) 0x0 /* PF_BAR0 */
#define busnum_CAVM_PEMSECX_VDMX_CTL(a,b) (a)
#define arguments_CAVM_PEMSECX_VDMX_CTL(a,b) (a),(b),-1,-1

/**
 * Register (ARF) pemsec#_vdm#_ib_hdr
 *
 * PEMSEC VDM Inbound Message Header Register
 * Vendor Defined Message Inbound Message Header Register.
 *
 * This register is not accessible through ROM scripts; see SCR_WRITE32_S[ADDR].
 *
 * This register is reset on core domain reset.
 *
 * This register is restricted to 64-bit access. Unsupported 32-bit access will
 * have unpredictable results, however will not cause an access hang or timeout.
 *
 * The operation of this register is restricted if PEMSEC()_VDM()_CFG[VDM_SEC_MODE]
 * is set to 0. Refer to the PEMSEC()_VDM()_CFG register description.
 */
union cavm_pemsecx_vdmx_ib_hdr
{
    uint64_t u;
    struct cavm_pemsecx_vdmx_ib_hdr_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t ib_msg_hdr            : 64; /**< [ 63:  0](RO/H) Inbound Message Header.

                                                                 When PEMSEC()_VDM()_STATUS[IB_MBX_RDY] is set to 1, read the [IB_MSG_HDR]
                                                                 register to retrieve the inbound VDM Type 1 message TLP header.

                                                                 Software must read the [IB_MSG_HDR] register twice to retrieve
                                                                 all sixteen bytes of the current inbound VDM Type 1 message TLP header.

                                                                 The first read access of [IB_MSG_HDR] contains VDM Type 1 message
                                                                 TLP header Byte 0 to Byte 7. The second read access of the [IB_MSG_HDR]
                                                                 contains TLP header Byte 8 to Byte 15.

                                                                 Refer to the DMTF MCTP over PCIe VDM Binding specification for
                                                                 more information regarding the MCTP VDM Type 1 message header fields.

                                                                 Writes to this register have no effect.

                                                                 Software must not read the PEMSEC()_VDM()_IB_HDR[IB_MSG_HDR] register
                                                                 when PEMSEC()_VDM()_STATUS[IB_MBX_RDY] is set to 0 otherwise a
                                                                 VDM IB message mailbox FIFO underflow will occur and
                                                                 PEMSEC()_VDM()_STATUS[IB_MBX_ERR] will be set to 1. */
#else /* Word 0 - Little Endian */
        uint64_t ib_msg_hdr            : 64; /**< [ 63:  0](RO/H) Inbound Message Header.

                                                                 When PEMSEC()_VDM()_STATUS[IB_MBX_RDY] is set to 1, read the [IB_MSG_HDR]
                                                                 register to retrieve the inbound VDM Type 1 message TLP header.

                                                                 Software must read the [IB_MSG_HDR] register twice to retrieve
                                                                 all sixteen bytes of the current inbound VDM Type 1 message TLP header.

                                                                 The first read access of [IB_MSG_HDR] contains VDM Type 1 message
                                                                 TLP header Byte 0 to Byte 7. The second read access of the [IB_MSG_HDR]
                                                                 contains TLP header Byte 8 to Byte 15.

                                                                 Refer to the DMTF MCTP over PCIe VDM Binding specification for
                                                                 more information regarding the MCTP VDM Type 1 message header fields.

                                                                 Writes to this register have no effect.

                                                                 Software must not read the PEMSEC()_VDM()_IB_HDR[IB_MSG_HDR] register
                                                                 when PEMSEC()_VDM()_STATUS[IB_MBX_RDY] is set to 0 otherwise a
                                                                 VDM IB message mailbox FIFO underflow will occur and
                                                                 PEMSEC()_VDM()_STATUS[IB_MBX_ERR] will be set to 1. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_pemsecx_vdmx_ib_hdr_s cn; */
};
typedef union cavm_pemsecx_vdmx_ib_hdr cavm_pemsecx_vdmx_ib_hdr_t;

static inline uint64_t CAVM_PEMSECX_VDMX_IB_HDR(uint64_t a, uint64_t b) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_PEMSECX_VDMX_IB_HDR(uint64_t a, uint64_t b)
{
    if (cavm_is_model(OCTEONTX_CN20KA) && ((a<=5) && (b==0)))
        return 0xc2c000007f50ll + 0x100000000ll * ((a) & 0x7) + 8ll * ((b) & 0x0);
    __cavm_csr_fatal("PEMSECX_VDMX_IB_HDR", 2, a, b, 0, 0, 0, 0);
}

#define typedef_CAVM_PEMSECX_VDMX_IB_HDR(a,b) cavm_pemsecx_vdmx_ib_hdr_t
#define bustype_CAVM_PEMSECX_VDMX_IB_HDR(a,b) CSR_TYPE_ARF
#define basename_CAVM_PEMSECX_VDMX_IB_HDR(a,b) "PEMSECX_VDMX_IB_HDR"
#define device_bar_CAVM_PEMSECX_VDMX_IB_HDR(a,b) 0x0 /* PF_BAR0 */
#define busnum_CAVM_PEMSECX_VDMX_IB_HDR(a,b) (a)
#define arguments_CAVM_PEMSECX_VDMX_IB_HDR(a,b) (a),(b),-1,-1

/**
 * Register (ARF) pemsec#_vdm#_ib_pld
 *
 * PEMSEC VDM Inbound Message Payload Register
 * Vendor Defined Message Inbound Message Payload Register.
 *
 * This register is not accessible through ROM scripts; see SCR_WRITE32_S[ADDR].
 *
 * This register is reset on core domain reset.
 *
 * This register is restricted to 64-bit access. Unsupported 32-bit access will
 * have unpredictable results, however will not cause an access hang or timeout.
 *
 * The operation of this register is restricted if PEMSEC()_VDM()_CFG[VDM_SEC_MODE]
 * is set to 0. Refer to the PEMSEC()_VDM()_CFG register description.
 */
union cavm_pemsecx_vdmx_ib_pld
{
    uint64_t u;
    struct cavm_pemsecx_vdmx_ib_pld_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t ib_msg_pld            : 64; /**< [ 63:  0](RO/H) Inbound Message Payload.

                                                                 When PEMSEC()_VDM()_STATUS[IB_MBX_RDY] is set to 1 read the [IB_MSG_PLD]
                                                                 register to retrieve the inbound VDM Type 1 message TLP payload.

                                                                 The current VDM Type 1 message header TLP previously read from
                                                                 PEMSEC()_VDM()_IB_HDR[IB_MSG_HDR] will indicate in TLP header
                                                                 bytes 2 and 3 the VDM message payload length in doublewords.
                                                                 Pad the length to the next 64-byte boundary and use that padded
                                                                 length value in bytes divided by 8-bytes as the number of [IB_MSG_PLD]
                                                                 reads required to read the entire VDM message payload from the
                                                                 VDM inbound payload mailbox FIFO.  For example a VDM message with a
                                                                 TLP payload length of 1 (4-bytes) requires eight reads of [IB_MSG_PLD]
                                                                 in order to flush the inbound VDM mailbox payload FIFO. The
                                                                 inbound VDM mailbox FIFO must be read in 64-byte chunks in order
                                                                 to prevent bubbles between message payloads of consecutive inbound
                                                                 VDM messages.

                                                                 Refer to the DMTF MCTP over PCIe VDM Binding specification for
                                                                 more information regarding the MCTP VDM Type 1 message payload
                                                                 fields.

                                                                 Writes to this register have no effect.

                                                                 Software must not read the PEMSEC()_VDM()_IB_PLD[IB_MSG_PLD] register
                                                                 when PEMSEC()_VDM()_STATUS[IB_MBX_RDY] is set to 0 otherwise a
                                                                 VDM IB message mailbox FIFO underflow will occur and
                                                                 PEMSEC()_VDM()_STATUS[IB_MBX_ERR] will be set to 1. */
#else /* Word 0 - Little Endian */
        uint64_t ib_msg_pld            : 64; /**< [ 63:  0](RO/H) Inbound Message Payload.

                                                                 When PEMSEC()_VDM()_STATUS[IB_MBX_RDY] is set to 1 read the [IB_MSG_PLD]
                                                                 register to retrieve the inbound VDM Type 1 message TLP payload.

                                                                 The current VDM Type 1 message header TLP previously read from
                                                                 PEMSEC()_VDM()_IB_HDR[IB_MSG_HDR] will indicate in TLP header
                                                                 bytes 2 and 3 the VDM message payload length in doublewords.
                                                                 Pad the length to the next 64-byte boundary and use that padded
                                                                 length value in bytes divided by 8-bytes as the number of [IB_MSG_PLD]
                                                                 reads required to read the entire VDM message payload from the
                                                                 VDM inbound payload mailbox FIFO.  For example a VDM message with a
                                                                 TLP payload length of 1 (4-bytes) requires eight reads of [IB_MSG_PLD]
                                                                 in order to flush the inbound VDM mailbox payload FIFO. The
                                                                 inbound VDM mailbox FIFO must be read in 64-byte chunks in order
                                                                 to prevent bubbles between message payloads of consecutive inbound
                                                                 VDM messages.

                                                                 Refer to the DMTF MCTP over PCIe VDM Binding specification for
                                                                 more information regarding the MCTP VDM Type 1 message payload
                                                                 fields.

                                                                 Writes to this register have no effect.

                                                                 Software must not read the PEMSEC()_VDM()_IB_PLD[IB_MSG_PLD] register
                                                                 when PEMSEC()_VDM()_STATUS[IB_MBX_RDY] is set to 0 otherwise a
                                                                 VDM IB message mailbox FIFO underflow will occur and
                                                                 PEMSEC()_VDM()_STATUS[IB_MBX_ERR] will be set to 1. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_pemsecx_vdmx_ib_pld_s cn; */
};
typedef union cavm_pemsecx_vdmx_ib_pld cavm_pemsecx_vdmx_ib_pld_t;

static inline uint64_t CAVM_PEMSECX_VDMX_IB_PLD(uint64_t a, uint64_t b) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_PEMSECX_VDMX_IB_PLD(uint64_t a, uint64_t b)
{
    if (cavm_is_model(OCTEONTX_CN20KA) && ((a<=5) && (b==0)))
        return 0xc2c000007f60ll + 0x100000000ll * ((a) & 0x7) + 8ll * ((b) & 0x0);
    __cavm_csr_fatal("PEMSECX_VDMX_IB_PLD", 2, a, b, 0, 0, 0, 0);
}

#define typedef_CAVM_PEMSECX_VDMX_IB_PLD(a,b) cavm_pemsecx_vdmx_ib_pld_t
#define bustype_CAVM_PEMSECX_VDMX_IB_PLD(a,b) CSR_TYPE_ARF
#define basename_CAVM_PEMSECX_VDMX_IB_PLD(a,b) "PEMSECX_VDMX_IB_PLD"
#define device_bar_CAVM_PEMSECX_VDMX_IB_PLD(a,b) 0x0 /* PF_BAR0 */
#define busnum_CAVM_PEMSECX_VDMX_IB_PLD(a,b) (a)
#define arguments_CAVM_PEMSECX_VDMX_IB_PLD(a,b) (a),(b),-1,-1

/**
 * Register (ARF) pemsec#_vdm#_ib_vid#
 *
 * PEMSEC VDM Inbound Message VID Match Register
 * Vendor Defined Message Inbound Message VID Match Register.
 *
 * This register is not accessible through ROM scripts; see SCR_WRITE32_S[ADDR].
 *
 * This register is reset on core domain reset.
 *
 * This register is restricted to 64-bit access. Unsupported 32-bit access will
 * have unpredictable results, however will not cause an access hang or timeout.
 *
 * The operation of this register is restricted if PEMSEC()_VDM()_CFG[VDM_SEC_MODE]
 * is set to 0. Refer to the PEMSEC()_VDM()_CFG register description.
 */
union cavm_pemsecx_vdmx_ib_vidx
{
    uint64_t u;
    struct cavm_pemsecx_vdmx_ib_vidx_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_32_63        : 32;
        uint64_t valid                 : 1;  /**< [ 31: 31](R/W) Valid.

                                                                 See description for Vendor ID [VID] below. */
        uint64_t reserved_16_30        : 15;
        uint64_t vid                   : 16; /**< [ 15:  0](R/W) Vendor ID.

                                                                 When the PEMSEC()_VDM()_IB_VID()[VALID] bit is set to 1 the inbound VDM mailbox
                                                                 logic compares the [VID] value to the VID field in the inbound Type 1 VDM
                                                                 message TLP header.  If there is a match the inbound Type 1 VDM message is
                                                                 forwarded to the inbound VDM message mailbox header and payload FIFOs for
                                                                 receipt.  If there is not a match the incoming Type 1 VDM message
                                                                 is silently discarded.

                                                                 Up to eight unique Vendor IDs (VIDs) can be programmed via the
                                                                 PEMSEC()_VDM()_IB_VID() registers to filter inbound Type 1 VDM messages
                                                                 by VID type.

                                                                 The default [VID] value of 0x1AB4 indicates a DMTF/MCTP Type 1 VDM message.

                                                                 For PCI-SIG-Defined VDMs use a VID value of 0x0001.

                                                                 Refer to the DMTF MCTP over PCIe VDM Binding specification for
                                                                 more information regarding the MCTP VDM Type 1 message header
                                                                 fields and VID value. */
#else /* Word 0 - Little Endian */
        uint64_t vid                   : 16; /**< [ 15:  0](R/W) Vendor ID.

                                                                 When the PEMSEC()_VDM()_IB_VID()[VALID] bit is set to 1 the inbound VDM mailbox
                                                                 logic compares the [VID] value to the VID field in the inbound Type 1 VDM
                                                                 message TLP header.  If there is a match the inbound Type 1 VDM message is
                                                                 forwarded to the inbound VDM message mailbox header and payload FIFOs for
                                                                 receipt.  If there is not a match the incoming Type 1 VDM message
                                                                 is silently discarded.

                                                                 Up to eight unique Vendor IDs (VIDs) can be programmed via the
                                                                 PEMSEC()_VDM()_IB_VID() registers to filter inbound Type 1 VDM messages
                                                                 by VID type.

                                                                 The default [VID] value of 0x1AB4 indicates a DMTF/MCTP Type 1 VDM message.

                                                                 For PCI-SIG-Defined VDMs use a VID value of 0x0001.

                                                                 Refer to the DMTF MCTP over PCIe VDM Binding specification for
                                                                 more information regarding the MCTP VDM Type 1 message header
                                                                 fields and VID value. */
        uint64_t reserved_16_30        : 15;
        uint64_t valid                 : 1;  /**< [ 31: 31](R/W) Valid.

                                                                 See description for Vendor ID [VID] below. */
        uint64_t reserved_32_63        : 32;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_pemsecx_vdmx_ib_vidx_s cn; */
};
typedef union cavm_pemsecx_vdmx_ib_vidx cavm_pemsecx_vdmx_ib_vidx_t;

static inline uint64_t CAVM_PEMSECX_VDMX_IB_VIDX(uint64_t a, uint64_t b, uint64_t c) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_PEMSECX_VDMX_IB_VIDX(uint64_t a, uint64_t b, uint64_t c)
{
    if (cavm_is_model(OCTEONTX_CN20KA) && ((a<=5) && (b==0) && (c<=7)))
        return 0xc2c000007f80ll + 0x100000000ll * ((a) & 0x7) + 0x40ll * ((b) & 0x0) + 8ll * ((c) & 0x7);
    __cavm_csr_fatal("PEMSECX_VDMX_IB_VIDX", 3, a, b, c, 0, 0, 0);
}

#define typedef_CAVM_PEMSECX_VDMX_IB_VIDX(a,b,c) cavm_pemsecx_vdmx_ib_vidx_t
#define bustype_CAVM_PEMSECX_VDMX_IB_VIDX(a,b,c) CSR_TYPE_ARF
#define basename_CAVM_PEMSECX_VDMX_IB_VIDX(a,b,c) "PEMSECX_VDMX_IB_VIDX"
#define device_bar_CAVM_PEMSECX_VDMX_IB_VIDX(a,b,c) 0x0 /* PF_BAR0 */
#define busnum_CAVM_PEMSECX_VDMX_IB_VIDX(a,b,c) (a)
#define arguments_CAVM_PEMSECX_VDMX_IB_VIDX(a,b,c) (a),(b),(c),-1

/**
 * Register (ARF) pemsec#_vdm#_int
 *
 * PEMSEC VDM Interrupt Register
 * This register contains the interrupt bits for VDM.
 *
 * This register is not accessible through ROM scripts; see SCR_WRITE32_S[ADDR].
 *
 * This register is reset on core domain reset.
 *
 * The operation of this register is restricted if PEMSEC()_VDM()_CFG[VDM_SEC_MODE]
 * is set to 0. Refer to the PEMSEC()_VDM()_CFG register description.
 */
union cavm_pemsecx_vdmx_int
{
    uint64_t u;
    struct cavm_pemsecx_vdmx_int_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_1_63         : 63;
        uint64_t rx_rcv                : 1;  /**< [  0:  0](R/W1C/H) Indicates that a VDM message has been received and placed in the VDM FIFO. */
#else /* Word 0 - Little Endian */
        uint64_t rx_rcv                : 1;  /**< [  0:  0](R/W1C/H) Indicates that a VDM message has been received and placed in the VDM FIFO. */
        uint64_t reserved_1_63         : 63;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_pemsecx_vdmx_int_s cn; */
};
typedef union cavm_pemsecx_vdmx_int cavm_pemsecx_vdmx_int_t;

static inline uint64_t CAVM_PEMSECX_VDMX_INT(uint64_t a, uint64_t b) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_PEMSECX_VDMX_INT(uint64_t a, uint64_t b)
{
    if (cavm_is_model(OCTEONTX_CN20KA) && ((a<=5) && (b==0)))
        return 0xc2c000007e00ll + 0x100000000ll * ((a) & 0x7) + 8ll * ((b) & 0x0);
    __cavm_csr_fatal("PEMSECX_VDMX_INT", 2, a, b, 0, 0, 0, 0);
}

#define typedef_CAVM_PEMSECX_VDMX_INT(a,b) cavm_pemsecx_vdmx_int_t
#define bustype_CAVM_PEMSECX_VDMX_INT(a,b) CSR_TYPE_ARF
#define basename_CAVM_PEMSECX_VDMX_INT(a,b) "PEMSECX_VDMX_INT"
#define device_bar_CAVM_PEMSECX_VDMX_INT(a,b) 0x0 /* PF_BAR0 */
#define busnum_CAVM_PEMSECX_VDMX_INT(a,b) (a)
#define arguments_CAVM_PEMSECX_VDMX_INT(a,b) (a),(b),-1,-1

/**
 * Register (ARF) pemsec#_vdm#_int_ena_w1c
 *
 * PEMSEC VDM Interrupt Enable Clear Register
 * This register clears interrupt enable bits.
 */
union cavm_pemsecx_vdmx_int_ena_w1c
{
    uint64_t u;
    struct cavm_pemsecx_vdmx_int_ena_w1c_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_1_63         : 63;
        uint64_t rx_rcv                : 1;  /**< [  0:  0](R/W1C/H) Reads or clears enable for PEMSEC(0..5)_VDM(0)_INT[RX_RCV]. */
#else /* Word 0 - Little Endian */
        uint64_t rx_rcv                : 1;  /**< [  0:  0](R/W1C/H) Reads or clears enable for PEMSEC(0..5)_VDM(0)_INT[RX_RCV]. */
        uint64_t reserved_1_63         : 63;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_pemsecx_vdmx_int_ena_w1c_s cn; */
};
typedef union cavm_pemsecx_vdmx_int_ena_w1c cavm_pemsecx_vdmx_int_ena_w1c_t;

static inline uint64_t CAVM_PEMSECX_VDMX_INT_ENA_W1C(uint64_t a, uint64_t b) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_PEMSECX_VDMX_INT_ENA_W1C(uint64_t a, uint64_t b)
{
    if (cavm_is_model(OCTEONTX_CN20KA) && ((a<=5) && (b==0)))
        return 0xc2c000007e20ll + 0x100000000ll * ((a) & 0x7) + 8ll * ((b) & 0x0);
    __cavm_csr_fatal("PEMSECX_VDMX_INT_ENA_W1C", 2, a, b, 0, 0, 0, 0);
}

#define typedef_CAVM_PEMSECX_VDMX_INT_ENA_W1C(a,b) cavm_pemsecx_vdmx_int_ena_w1c_t
#define bustype_CAVM_PEMSECX_VDMX_INT_ENA_W1C(a,b) CSR_TYPE_ARF
#define basename_CAVM_PEMSECX_VDMX_INT_ENA_W1C(a,b) "PEMSECX_VDMX_INT_ENA_W1C"
#define device_bar_CAVM_PEMSECX_VDMX_INT_ENA_W1C(a,b) 0x0 /* PF_BAR0 */
#define busnum_CAVM_PEMSECX_VDMX_INT_ENA_W1C(a,b) (a)
#define arguments_CAVM_PEMSECX_VDMX_INT_ENA_W1C(a,b) (a),(b),-1,-1

/**
 * Register (ARF) pemsec#_vdm#_int_ena_w1s
 *
 * PEMSEC VDM Interrupt Enable Set Register
 * This register sets interrupt enable bits.
 */
union cavm_pemsecx_vdmx_int_ena_w1s
{
    uint64_t u;
    struct cavm_pemsecx_vdmx_int_ena_w1s_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_1_63         : 63;
        uint64_t rx_rcv                : 1;  /**< [  0:  0](R/W1S/H) Reads or sets enable for PEMSEC(0..5)_VDM(0)_INT[RX_RCV]. */
#else /* Word 0 - Little Endian */
        uint64_t rx_rcv                : 1;  /**< [  0:  0](R/W1S/H) Reads or sets enable for PEMSEC(0..5)_VDM(0)_INT[RX_RCV]. */
        uint64_t reserved_1_63         : 63;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_pemsecx_vdmx_int_ena_w1s_s cn; */
};
typedef union cavm_pemsecx_vdmx_int_ena_w1s cavm_pemsecx_vdmx_int_ena_w1s_t;

static inline uint64_t CAVM_PEMSECX_VDMX_INT_ENA_W1S(uint64_t a, uint64_t b) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_PEMSECX_VDMX_INT_ENA_W1S(uint64_t a, uint64_t b)
{
    if (cavm_is_model(OCTEONTX_CN20KA) && ((a<=5) && (b==0)))
        return 0xc2c000007e30ll + 0x100000000ll * ((a) & 0x7) + 8ll * ((b) & 0x0);
    __cavm_csr_fatal("PEMSECX_VDMX_INT_ENA_W1S", 2, a, b, 0, 0, 0, 0);
}

#define typedef_CAVM_PEMSECX_VDMX_INT_ENA_W1S(a,b) cavm_pemsecx_vdmx_int_ena_w1s_t
#define bustype_CAVM_PEMSECX_VDMX_INT_ENA_W1S(a,b) CSR_TYPE_ARF
#define basename_CAVM_PEMSECX_VDMX_INT_ENA_W1S(a,b) "PEMSECX_VDMX_INT_ENA_W1S"
#define device_bar_CAVM_PEMSECX_VDMX_INT_ENA_W1S(a,b) 0x0 /* PF_BAR0 */
#define busnum_CAVM_PEMSECX_VDMX_INT_ENA_W1S(a,b) (a)
#define arguments_CAVM_PEMSECX_VDMX_INT_ENA_W1S(a,b) (a),(b),-1,-1

/**
 * Register (ARF) pemsec#_vdm#_int_w1s
 *
 * PEMSEC VDM Interrupt Set Register
 * This register sets interrupt bits.
 */
union cavm_pemsecx_vdmx_int_w1s
{
    uint64_t u;
    struct cavm_pemsecx_vdmx_int_w1s_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_1_63         : 63;
        uint64_t rx_rcv                : 1;  /**< [  0:  0](R/W1S/H) Reads or sets PEMSEC(0..5)_VDM(0)_INT[RX_RCV]. */
#else /* Word 0 - Little Endian */
        uint64_t rx_rcv                : 1;  /**< [  0:  0](R/W1S/H) Reads or sets PEMSEC(0..5)_VDM(0)_INT[RX_RCV]. */
        uint64_t reserved_1_63         : 63;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_pemsecx_vdmx_int_w1s_s cn; */
};
typedef union cavm_pemsecx_vdmx_int_w1s cavm_pemsecx_vdmx_int_w1s_t;

static inline uint64_t CAVM_PEMSECX_VDMX_INT_W1S(uint64_t a, uint64_t b) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_PEMSECX_VDMX_INT_W1S(uint64_t a, uint64_t b)
{
    if (cavm_is_model(OCTEONTX_CN20KA) && ((a<=5) && (b==0)))
        return 0xc2c000007e10ll + 0x100000000ll * ((a) & 0x7) + 8ll * ((b) & 0x0);
    __cavm_csr_fatal("PEMSECX_VDMX_INT_W1S", 2, a, b, 0, 0, 0, 0);
}

#define typedef_CAVM_PEMSECX_VDMX_INT_W1S(a,b) cavm_pemsecx_vdmx_int_w1s_t
#define bustype_CAVM_PEMSECX_VDMX_INT_W1S(a,b) CSR_TYPE_ARF
#define basename_CAVM_PEMSECX_VDMX_INT_W1S(a,b) "PEMSECX_VDMX_INT_W1S"
#define device_bar_CAVM_PEMSECX_VDMX_INT_W1S(a,b) 0x0 /* PF_BAR0 */
#define busnum_CAVM_PEMSECX_VDMX_INT_W1S(a,b) (a)
#define arguments_CAVM_PEMSECX_VDMX_INT_W1S(a,b) (a),(b),-1,-1

/**
 * Register (ARF) pemsec#_vdm#_ob_hdrh
 *
 * PEMSEC VDM Outbound Message Header Hi Register
 * Vendor Defined Message Outbound Message Header Hi Register.
 *
 * This register is not accessible through ROM scripts; see SCR_WRITE32_S[ADDR].
 *
 * This register is reset on core domain reset.
 *
 * This register is restricted to 64-bit access. Unsupported 32-bit access will
 * have unpredictable results, however will not cause an access hang or timeout.
 *
 * The operation of this register is restricted if PEMSEC()_VDM()_CFG[VDM_SEC_MODE]
 * is set to 0. Refer to the PEMSEC()_VDM()_CFG register description.
 */
union cavm_pemsecx_vdmx_ob_hdrh
{
    uint64_t u;
    struct cavm_pemsecx_vdmx_ob_hdrh_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_48_63        : 16;
        uint64_t msg_vid               : 16; /**< [ 47: 32](R/W) Message Vendor ID.  Program [MSG_VID] to specify the
                                                                 Type 1 VDM outbound message Vendor ID value.

                                                                 Set to 0x1AB4 to denote DMTF for MCTP VDM Type 1 messages.

                                                                 Software should ensure the [MSG_VID] is set to 0x1AB4 when
                                                                 sending MCTP Vendor Defined Type 1 messages.
                                                                 Refer to the DMTF MCTP over PCIe VDM Binding specification for
                                                                 more information. */
        uint64_t msg_tlp_hdr15         : 8;  /**< [ 31: 24](R/W) "Message TLP Header Byte 15.

                                                                 Program [MSG_TLP_HDR15] with byte 15 data of the
                                                                 outbound VDM Type 1 message TLP header.  This byte is the
                                                                 MCTP transport header SOF, EOM, Pkt Seq #, TO, Msg Tag fields.
                                                                 Refer to the DMTF MCTP over PCIe VDM Binding specification for
                                                                 more information." */
        uint64_t msg_tlp_hdr14         : 8;  /**< [ 23: 16](R/W) Message TLP Header Byte 14.

                                                                 Program [MSG_TLP_HDR14] with byte 14 data of the
                                                                 outbound VDM Type 1 message TLP header.  This byte is the
                                                                 MCTP transport header Source Endpoint IDE field.
                                                                 Refer to the DMTF MCTP over PCIe VDM Binding specification for
                                                                 more information. */
        uint64_t msg_tlp_hdr13         : 8;  /**< [ 15:  8](R/W) Message TLP Header Byte 13.

                                                                 Program the [MSG_TLP_HDR13] with byte 13 data of the
                                                                 outbound VDM Type 1 message TLP header.  This byte is the
                                                                 MCTP transport header Destination Endpoint ID field.
                                                                 Refer to the DMTF MCTP over PCIe VDM Binding specification for
                                                                 more information. */
        uint64_t msg_tlp_hdr12         : 8;  /**< [  7:  0](R/W) Message TLP Header Byte 12.

                                                                 Program the [MSG_TLP_HDR12] with byte 12 data of the
                                                                 outbound VDM Type 1 message TLP header.  This byte is the
                                                                 MCTP transport header RSVD and header version fields.
                                                                 Refer to the DMTF MCTP over PCIe VDM Binding specification for
                                                                 more information. */
#else /* Word 0 - Little Endian */
        uint64_t msg_tlp_hdr12         : 8;  /**< [  7:  0](R/W) Message TLP Header Byte 12.

                                                                 Program the [MSG_TLP_HDR12] with byte 12 data of the
                                                                 outbound VDM Type 1 message TLP header.  This byte is the
                                                                 MCTP transport header RSVD and header version fields.
                                                                 Refer to the DMTF MCTP over PCIe VDM Binding specification for
                                                                 more information. */
        uint64_t msg_tlp_hdr13         : 8;  /**< [ 15:  8](R/W) Message TLP Header Byte 13.

                                                                 Program the [MSG_TLP_HDR13] with byte 13 data of the
                                                                 outbound VDM Type 1 message TLP header.  This byte is the
                                                                 MCTP transport header Destination Endpoint ID field.
                                                                 Refer to the DMTF MCTP over PCIe VDM Binding specification for
                                                                 more information. */
        uint64_t msg_tlp_hdr14         : 8;  /**< [ 23: 16](R/W) Message TLP Header Byte 14.

                                                                 Program [MSG_TLP_HDR14] with byte 14 data of the
                                                                 outbound VDM Type 1 message TLP header.  This byte is the
                                                                 MCTP transport header Source Endpoint IDE field.
                                                                 Refer to the DMTF MCTP over PCIe VDM Binding specification for
                                                                 more information. */
        uint64_t msg_tlp_hdr15         : 8;  /**< [ 31: 24](R/W) "Message TLP Header Byte 15.

                                                                 Program [MSG_TLP_HDR15] with byte 15 data of the
                                                                 outbound VDM Type 1 message TLP header.  This byte is the
                                                                 MCTP transport header SOF, EOM, Pkt Seq #, TO, Msg Tag fields.
                                                                 Refer to the DMTF MCTP over PCIe VDM Binding specification for
                                                                 more information." */
        uint64_t msg_vid               : 16; /**< [ 47: 32](R/W) Message Vendor ID.  Program [MSG_VID] to specify the
                                                                 Type 1 VDM outbound message Vendor ID value.

                                                                 Set to 0x1AB4 to denote DMTF for MCTP VDM Type 1 messages.

                                                                 Software should ensure the [MSG_VID] is set to 0x1AB4 when
                                                                 sending MCTP Vendor Defined Type 1 messages.
                                                                 Refer to the DMTF MCTP over PCIe VDM Binding specification for
                                                                 more information. */
        uint64_t reserved_48_63        : 16;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_pemsecx_vdmx_ob_hdrh_s cn; */
};
typedef union cavm_pemsecx_vdmx_ob_hdrh cavm_pemsecx_vdmx_ob_hdrh_t;

static inline uint64_t CAVM_PEMSECX_VDMX_OB_HDRH(uint64_t a, uint64_t b) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_PEMSECX_VDMX_OB_HDRH(uint64_t a, uint64_t b)
{
    if (cavm_is_model(OCTEONTX_CN20KA) && ((a<=5) && (b==0)))
        return 0xc2c000007f30ll + 0x100000000ll * ((a) & 0x7) + 8ll * ((b) & 0x0);
    __cavm_csr_fatal("PEMSECX_VDMX_OB_HDRH", 2, a, b, 0, 0, 0, 0);
}

#define typedef_CAVM_PEMSECX_VDMX_OB_HDRH(a,b) cavm_pemsecx_vdmx_ob_hdrh_t
#define bustype_CAVM_PEMSECX_VDMX_OB_HDRH(a,b) CSR_TYPE_ARF
#define basename_CAVM_PEMSECX_VDMX_OB_HDRH(a,b) "PEMSECX_VDMX_OB_HDRH"
#define device_bar_CAVM_PEMSECX_VDMX_OB_HDRH(a,b) 0x0 /* PF_BAR0 */
#define busnum_CAVM_PEMSECX_VDMX_OB_HDRH(a,b) (a)
#define arguments_CAVM_PEMSECX_VDMX_OB_HDRH(a,b) (a),(b),-1,-1

/**
 * Register (ARF) pemsec#_vdm#_ob_hdrl
 *
 * PEMSEC VDM Outbound Message Header Low Register
 * Vendor Defined Message Outbound Message Header Low Register.
 *
 * This register is not accessible through ROM scripts; see SCR_WRITE32_S[ADDR].
 *
 * This register is reset on core domain reset.
 *
 * This register is restricted to 64-bit access. Unsupported 32-bit access will
 * have unpredictable results, however will not cause an access hang or timeout.
 *
 * The operation of this register is restricted if PEMSEC()_VDM()_CFG[VDM_SEC_MODE]
 * is set to 0. Refer to the PEMSEC()_VDM()_CFG register description.
 */
union cavm_pemsecx_vdmx_ob_hdrl
{
    uint64_t u;
    struct cavm_pemsecx_vdmx_ob_hdrl_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_51_63        : 13;
        uint64_t msg_rt                : 3;  /**< [ 50: 48](R/W) Message Routing. Program [MSG_RT] to indicate the Type 1
                                                                 VDM outbound message routing method.

                                                                    3'b000 = Route to Root Complex
                                                                    3'b010 = Route by ID
                                                                    3'b011 = Broadcast from Root Complex

                                                                 All other values are reserved.

                                                                 Refer to the DMTF MCTP over PCIe VDM Binding specification for
                                                                 more information. */
        uint64_t reserved_33_47        : 15;
        uint64_t msg_err               : 1;  /**< [ 32: 32](R/W) Message Error.  Test feature.  Set to 0. */
        uint64_t trgt_id               : 16; /**< [ 31: 16](R/W) PCIe Target ID.  Program [TRGT_ID] to specify the
                                                                 Type 1 VDM outbound message target id.

                                                                 Refer to the DMTF MCTP over PCIe VDM Binding specification for
                                                                 more information. */
        uint64_t msg_tag               : 8;  /**< [ 15:  8](R/W) Message Tag.  Program [MSG_TAG] to specify the
                                                                 Type 1 VDM outbound message tag.

                                                                 The VDM MSG_TAG field should be programmed as follows:

                                                                 [15:14] = Reserved. Program to 2'b00
                                                                 [13:12] = Pad Length in bytes
                                                                 [11:8]  = MCTP VDM Code.  Program to 4'h0

                                                                 Refer to the DMTF MCTP over PCIe VDM Binding specification for
                                                                 more information. */
        uint64_t reserved_6_7          : 2;
        uint64_t msg_len               : 6;  /**< [  5:  0](R/W) Message Length in 32-bit doublewords.  Program [MSG_LEN]
                                                                 to indicate the Type 1 VDM outbound message payload length
                                                                 padded to a 32-bit doubleword (4 byte) boundary.

                                                                 Legal values are 1 to 32 corresponding to 4-bytes and 128 bytes.

                                                                 Refer to the DMTF MCTP over PCIe VDM Binding specification for
                                                                 more information. */
#else /* Word 0 - Little Endian */
        uint64_t msg_len               : 6;  /**< [  5:  0](R/W) Message Length in 32-bit doublewords.  Program [MSG_LEN]
                                                                 to indicate the Type 1 VDM outbound message payload length
                                                                 padded to a 32-bit doubleword (4 byte) boundary.

                                                                 Legal values are 1 to 32 corresponding to 4-bytes and 128 bytes.

                                                                 Refer to the DMTF MCTP over PCIe VDM Binding specification for
                                                                 more information. */
        uint64_t reserved_6_7          : 2;
        uint64_t msg_tag               : 8;  /**< [ 15:  8](R/W) Message Tag.  Program [MSG_TAG] to specify the
                                                                 Type 1 VDM outbound message tag.

                                                                 The VDM MSG_TAG field should be programmed as follows:

                                                                 [15:14] = Reserved. Program to 2'b00
                                                                 [13:12] = Pad Length in bytes
                                                                 [11:8]  = MCTP VDM Code.  Program to 4'h0

                                                                 Refer to the DMTF MCTP over PCIe VDM Binding specification for
                                                                 more information. */
        uint64_t trgt_id               : 16; /**< [ 31: 16](R/W) PCIe Target ID.  Program [TRGT_ID] to specify the
                                                                 Type 1 VDM outbound message target id.

                                                                 Refer to the DMTF MCTP over PCIe VDM Binding specification for
                                                                 more information. */
        uint64_t msg_err               : 1;  /**< [ 32: 32](R/W) Message Error.  Test feature.  Set to 0. */
        uint64_t reserved_33_47        : 15;
        uint64_t msg_rt                : 3;  /**< [ 50: 48](R/W) Message Routing. Program [MSG_RT] to indicate the Type 1
                                                                 VDM outbound message routing method.

                                                                    3'b000 = Route to Root Complex
                                                                    3'b010 = Route by ID
                                                                    3'b011 = Broadcast from Root Complex

                                                                 All other values are reserved.

                                                                 Refer to the DMTF MCTP over PCIe VDM Binding specification for
                                                                 more information. */
        uint64_t reserved_51_63        : 13;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_pemsecx_vdmx_ob_hdrl_s cn; */
};
typedef union cavm_pemsecx_vdmx_ob_hdrl cavm_pemsecx_vdmx_ob_hdrl_t;

static inline uint64_t CAVM_PEMSECX_VDMX_OB_HDRL(uint64_t a, uint64_t b) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_PEMSECX_VDMX_OB_HDRL(uint64_t a, uint64_t b)
{
    if (cavm_is_model(OCTEONTX_CN20KA) && ((a<=5) && (b==0)))
        return 0xc2c000007f20ll + 0x100000000ll * ((a) & 0x7) + 8ll * ((b) & 0x0);
    __cavm_csr_fatal("PEMSECX_VDMX_OB_HDRL", 2, a, b, 0, 0, 0, 0);
}

#define typedef_CAVM_PEMSECX_VDMX_OB_HDRL(a,b) cavm_pemsecx_vdmx_ob_hdrl_t
#define bustype_CAVM_PEMSECX_VDMX_OB_HDRL(a,b) CSR_TYPE_ARF
#define basename_CAVM_PEMSECX_VDMX_OB_HDRL(a,b) "PEMSECX_VDMX_OB_HDRL"
#define device_bar_CAVM_PEMSECX_VDMX_OB_HDRL(a,b) 0x0 /* PF_BAR0 */
#define busnum_CAVM_PEMSECX_VDMX_OB_HDRL(a,b) (a)
#define arguments_CAVM_PEMSECX_VDMX_OB_HDRL(a,b) (a),(b),-1,-1

/**
 * Register (ARF) pemsec#_vdm#_ob_pld
 *
 * PEMSEC VDM Outbound Message Payload Register
 * Vendor Defined Message Outbound Message Payload Register.
 *
 * This register is not accessible through ROM scripts; see SCR_WRITE32_S[ADDR].
 *
 * This register is reset on core domain reset.
 *
 * This register is restricted to 64-bit access. Unsupported 32-bit access will
 * have unpredictable results, however will not cause an access hang or timeout.
 *
 * The operation of this register is restricted if PEMSEC()_VDM()_CFG[VDM_SEC_MODE]
 * is set to 0. Refer to the PEMSEC()_VDM()_CFG register description.
 */
union cavm_pemsecx_vdmx_ob_pld
{
    uint64_t u;
    struct cavm_pemsecx_vdmx_ob_pld_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t ob_msg_pld            : 64; /**< [ 63:  0](R/W) Outbound Message Payload.

                                                                 Outbound VDM message payload data is written to the outbound VDM Type 1
                                                                 message payload mailbox FIFO via 64-bit writes to the [OB_MSG_PLD] field.
                                                                 The message payload data is loaded a 64-bit word (8 bytes) at a time into
                                                                 the outbound VDM message mailbox payload FIFO.

                                                                 VDM outbound message payload data between 1 byte and 64-bytes in length must
                                                                 be padded to 64-bytes in the outbound message mailbox FIFO and requires
                                                                 that the PEMSEC()_VDM()_OB_PLD[OB_MSG_PLD] be written eight consecutive times
                                                                 to load the message payload data.

                                                                 Message payload data greater than 64-bytes (up to 128 bytes) must be padded
                                                                 to 128-bytes and requires sixteen 64-bit (8 byte) writes to the
                                                                 PEMSEC()_VDM()_OB_PLD[OB_MSG_PLD] register to load the message payload data.

                                                                 The maximum PCIe VDM Type 1 outbound message payload size is 128 bytes.

                                                                 Software must not write the PEMSEC()_VDM()_OB_PLD[OB_MSG_PLD] register more
                                                                 than sixteen consecutive times prior to sending a VDM message otherwise a
                                                                 VDM OB message mailbox FIFO overflow will occur and
                                                                 PEMSEC()_VDM()_STATUS[OB_MBX_ERR] will be set to 1. */
#else /* Word 0 - Little Endian */
        uint64_t ob_msg_pld            : 64; /**< [ 63:  0](R/W) Outbound Message Payload.

                                                                 Outbound VDM message payload data is written to the outbound VDM Type 1
                                                                 message payload mailbox FIFO via 64-bit writes to the [OB_MSG_PLD] field.
                                                                 The message payload data is loaded a 64-bit word (8 bytes) at a time into
                                                                 the outbound VDM message mailbox payload FIFO.

                                                                 VDM outbound message payload data between 1 byte and 64-bytes in length must
                                                                 be padded to 64-bytes in the outbound message mailbox FIFO and requires
                                                                 that the PEMSEC()_VDM()_OB_PLD[OB_MSG_PLD] be written eight consecutive times
                                                                 to load the message payload data.

                                                                 Message payload data greater than 64-bytes (up to 128 bytes) must be padded
                                                                 to 128-bytes and requires sixteen 64-bit (8 byte) writes to the
                                                                 PEMSEC()_VDM()_OB_PLD[OB_MSG_PLD] register to load the message payload data.

                                                                 The maximum PCIe VDM Type 1 outbound message payload size is 128 bytes.

                                                                 Software must not write the PEMSEC()_VDM()_OB_PLD[OB_MSG_PLD] register more
                                                                 than sixteen consecutive times prior to sending a VDM message otherwise a
                                                                 VDM OB message mailbox FIFO overflow will occur and
                                                                 PEMSEC()_VDM()_STATUS[OB_MBX_ERR] will be set to 1. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_pemsecx_vdmx_ob_pld_s cn; */
};
typedef union cavm_pemsecx_vdmx_ob_pld cavm_pemsecx_vdmx_ob_pld_t;

static inline uint64_t CAVM_PEMSECX_VDMX_OB_PLD(uint64_t a, uint64_t b) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_PEMSECX_VDMX_OB_PLD(uint64_t a, uint64_t b)
{
    if (cavm_is_model(OCTEONTX_CN20KA) && ((a<=5) && (b==0)))
        return 0xc2c000007f40ll + 0x100000000ll * ((a) & 0x7) + 8ll * ((b) & 0x0);
    __cavm_csr_fatal("PEMSECX_VDMX_OB_PLD", 2, a, b, 0, 0, 0, 0);
}

#define typedef_CAVM_PEMSECX_VDMX_OB_PLD(a,b) cavm_pemsecx_vdmx_ob_pld_t
#define bustype_CAVM_PEMSECX_VDMX_OB_PLD(a,b) CSR_TYPE_ARF
#define basename_CAVM_PEMSECX_VDMX_OB_PLD(a,b) "PEMSECX_VDMX_OB_PLD"
#define device_bar_CAVM_PEMSECX_VDMX_OB_PLD(a,b) 0x0 /* PF_BAR0 */
#define busnum_CAVM_PEMSECX_VDMX_OB_PLD(a,b) (a)
#define arguments_CAVM_PEMSECX_VDMX_OB_PLD(a,b) (a),(b),-1,-1

/**
 * Register (ARF) pemsec#_vdm#_status
 *
 * PEMSEC VDM Status Register
 * This register provides status of the Vendor Defined Message (VDM) inbound
 * and outbound message mailboxes.
 *
 * This register is not accessible through ROM scripts; see SCR_WRITE32_S[ADDR].
 *
 * This register is reset on core domain reset.
 *
 * This register is restricted to 64-bit access. Unsupported 32-bit access will
 * have unpredictable results, however will not cause an access hang or timeout.
 *
 * The operation of this register is restricted if PEMSEC()_VDM()_CFG[VDM_SEC_MODE]
 * is set to 0. Refer to the PEMSEC()_VDM()_CFG register description.
 */
union cavm_pemsecx_vdmx_status
{
    uint64_t u;
    struct cavm_pemsecx_vdmx_status_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_32_63        : 32;
        uint64_t ib_mbx_rdy            : 1;  /**< [ 31: 31](RO/H) Inbound Mailbox Ready.  The [IB_MBX_RDY] is set to 1 to indicate the VDM
                                                                 inbound message mailbox contains message data.  The [IB_MBX_RDY] bit is
                                                                 cleared to 0 when there is no VDM message data in the inbound message
                                                                 mailbox FIFOs.

                                                                 Interrupt on receipt of inbound VDM mailbox messages.

                                                                 Write PEMSEC()_VDM()_INT_ENA_W1S to enable the MSIX interrupt on
                                                                 receipt of an inbound VDM message.  When a VDM Type 1 message
                                                                 is received in the inbound VDM mailbox the PEMSEC()_VDM_INT[RX_RCV]
                                                                 bit will be set to 1 and a MSIX interrupt will be signaled.
                                                                 Read the inbound VDM mailbox header and payload FIFOs and
                                                                 empty the FIFOs to clear the interrupt.  Additionally set
                                                                 PEMSEC()_VDM()_INT[RX_RCV] to 0 to clear the MSIX interrupt.

                                                                 For more information refer to the following register descriptions.
                                                                     PEMSEC()_VDM()_INT
                                                                     PEMSEC()_VDM()_INT_W1S
                                                                     PEMSEC()_VDM()_INT_ENA_W1C
                                                                     PEMSEC()_VDM()_INT_ENA_W1S */
        uint64_t ib_mbx_sts            : 13; /**< [ 30: 18](RO/H) Inbound Mailbox Status. For diagnostic use only. */
        uint64_t ob_mbx_sts            : 14; /**< [ 17:  4](RO/H) Outbound Mailbox Status. For diagnostic use only. */
        uint64_t ob_mbx_err            : 1;  /**< [  3:  3](RO/H) Outbound Mailbox Error. The [OB_MBX_ERR] bit is set to 1 if an error
                                                                 occurred in the VDM outbound message mailbox.  The [OB_MBX_ERR] bit is set to 1
                                                                 when the outbound message mailbox FIFO overflows due to writing more than
                                                                 128bytes to the VDM outbound message FIFO via the PEMSEC()_VDM()_OB_PLD register.

                                                                 Set the PEMSEC()_VDM()_CTL[OB_MBX_RST] bit to 1 to clear the [OB_MBX_ERR] bit and
                                                                 the VDM outbound message mailbox FIFO. */
        uint64_t ib_mbx_err            : 1;  /**< [  2:  2](RO/H) Inbound Mailbox Error. The [IB_MBX_ERR] bit is set to 1 if an error
                                                                 occurred in the VDM inbound message mailbox. The error bit is set to 1 if
                                                                 either the inbound message header FIFO or inbound message payload FIFO overflows.

                                                                 Set the PEMSEC()_VDM()_CTL[IB_MBX_RST] bit to 1 to clear the [IB_MBX_ERR] bit and
                                                                 the VDM inbound message mailbox header and payload FIFOs. */
        uint64_t reserved_1            : 1;
        uint64_t ob_mbx_busy           : 1;  /**< [  0:  0](RO/H) Outbound Mailbox Busy.  [OB_MBX_BUSY] is set to 1 when the VDM outbound message
                                                                 mailbox is busy sending a VDM outbound message on the PCIe bus. The [OB_MBX_BUSY]
                                                                 bit will set to 1 immediately after the PEMSEC()_VDM()_CTL[OB_MBX_SND] bit is set to
                                                                 1. The [OB_MBX_BUSY] bit will be cleared to 0 by the VDM outbound mailbox logic
                                                                 when the outbound VDM message has completed transmission on the PCIe bus.

                                                                 Software must check that the [OB_MBX_BUSY] bit is cleared to 0 before programming
                                                                 the following outbound VDM message registers PEMSEC()_VDM()_OB_HDRH,
                                                                 PEMSEC()_VDM()_OB_HDRL, PEMSEC()_VDM()_OB_PLD, and PEMSEC()_VDM()_CTL[OB_MBX_SND].

                                                                 Setting the PEMSEC()_VDM()_CTL[OB_MBX_RST] to 1 will clear the [OB_MBX_BUSY] bit to 0.
                                                                 This should only be done if the PEMSEC()_VDM()_STATUS[OB_MBX_ERR] bit is set to 1
                                                                 indicating an VDM outbound mailbox error. */
#else /* Word 0 - Little Endian */
        uint64_t ob_mbx_busy           : 1;  /**< [  0:  0](RO/H) Outbound Mailbox Busy.  [OB_MBX_BUSY] is set to 1 when the VDM outbound message
                                                                 mailbox is busy sending a VDM outbound message on the PCIe bus. The [OB_MBX_BUSY]
                                                                 bit will set to 1 immediately after the PEMSEC()_VDM()_CTL[OB_MBX_SND] bit is set to
                                                                 1. The [OB_MBX_BUSY] bit will be cleared to 0 by the VDM outbound mailbox logic
                                                                 when the outbound VDM message has completed transmission on the PCIe bus.

                                                                 Software must check that the [OB_MBX_BUSY] bit is cleared to 0 before programming
                                                                 the following outbound VDM message registers PEMSEC()_VDM()_OB_HDRH,
                                                                 PEMSEC()_VDM()_OB_HDRL, PEMSEC()_VDM()_OB_PLD, and PEMSEC()_VDM()_CTL[OB_MBX_SND].

                                                                 Setting the PEMSEC()_VDM()_CTL[OB_MBX_RST] to 1 will clear the [OB_MBX_BUSY] bit to 0.
                                                                 This should only be done if the PEMSEC()_VDM()_STATUS[OB_MBX_ERR] bit is set to 1
                                                                 indicating an VDM outbound mailbox error. */
        uint64_t reserved_1            : 1;
        uint64_t ib_mbx_err            : 1;  /**< [  2:  2](RO/H) Inbound Mailbox Error. The [IB_MBX_ERR] bit is set to 1 if an error
                                                                 occurred in the VDM inbound message mailbox. The error bit is set to 1 if
                                                                 either the inbound message header FIFO or inbound message payload FIFO overflows.

                                                                 Set the PEMSEC()_VDM()_CTL[IB_MBX_RST] bit to 1 to clear the [IB_MBX_ERR] bit and
                                                                 the VDM inbound message mailbox header and payload FIFOs. */
        uint64_t ob_mbx_err            : 1;  /**< [  3:  3](RO/H) Outbound Mailbox Error. The [OB_MBX_ERR] bit is set to 1 if an error
                                                                 occurred in the VDM outbound message mailbox.  The [OB_MBX_ERR] bit is set to 1
                                                                 when the outbound message mailbox FIFO overflows due to writing more than
                                                                 128bytes to the VDM outbound message FIFO via the PEMSEC()_VDM()_OB_PLD register.

                                                                 Set the PEMSEC()_VDM()_CTL[OB_MBX_RST] bit to 1 to clear the [OB_MBX_ERR] bit and
                                                                 the VDM outbound message mailbox FIFO. */
        uint64_t ob_mbx_sts            : 14; /**< [ 17:  4](RO/H) Outbound Mailbox Status. For diagnostic use only. */
        uint64_t ib_mbx_sts            : 13; /**< [ 30: 18](RO/H) Inbound Mailbox Status. For diagnostic use only. */
        uint64_t ib_mbx_rdy            : 1;  /**< [ 31: 31](RO/H) Inbound Mailbox Ready.  The [IB_MBX_RDY] is set to 1 to indicate the VDM
                                                                 inbound message mailbox contains message data.  The [IB_MBX_RDY] bit is
                                                                 cleared to 0 when there is no VDM message data in the inbound message
                                                                 mailbox FIFOs.

                                                                 Interrupt on receipt of inbound VDM mailbox messages.

                                                                 Write PEMSEC()_VDM()_INT_ENA_W1S to enable the MSIX interrupt on
                                                                 receipt of an inbound VDM message.  When a VDM Type 1 message
                                                                 is received in the inbound VDM mailbox the PEMSEC()_VDM_INT[RX_RCV]
                                                                 bit will be set to 1 and a MSIX interrupt will be signaled.
                                                                 Read the inbound VDM mailbox header and payload FIFOs and
                                                                 empty the FIFOs to clear the interrupt.  Additionally set
                                                                 PEMSEC()_VDM()_INT[RX_RCV] to 0 to clear the MSIX interrupt.

                                                                 For more information refer to the following register descriptions.
                                                                     PEMSEC()_VDM()_INT
                                                                     PEMSEC()_VDM()_INT_W1S
                                                                     PEMSEC()_VDM()_INT_ENA_W1C
                                                                     PEMSEC()_VDM()_INT_ENA_W1S */
        uint64_t reserved_32_63        : 32;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_pemsecx_vdmx_status_s cn; */
};
typedef union cavm_pemsecx_vdmx_status cavm_pemsecx_vdmx_status_t;

static inline uint64_t CAVM_PEMSECX_VDMX_STATUS(uint64_t a, uint64_t b) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_PEMSECX_VDMX_STATUS(uint64_t a, uint64_t b)
{
    if (cavm_is_model(OCTEONTX_CN20KA) && ((a<=5) && (b==0)))
        return 0xc2c000007f10ll + 0x100000000ll * ((a) & 0x7) + 8ll * ((b) & 0x0);
    __cavm_csr_fatal("PEMSECX_VDMX_STATUS", 2, a, b, 0, 0, 0, 0);
}

#define typedef_CAVM_PEMSECX_VDMX_STATUS(a,b) cavm_pemsecx_vdmx_status_t
#define bustype_CAVM_PEMSECX_VDMX_STATUS(a,b) CSR_TYPE_ARF
#define basename_CAVM_PEMSECX_VDMX_STATUS(a,b) "PEMSECX_VDMX_STATUS"
#define device_bar_CAVM_PEMSECX_VDMX_STATUS(a,b) 0x0 /* PF_BAR0 */
#define busnum_CAVM_PEMSECX_VDMX_STATUS(a,b) (a)
#define arguments_CAVM_PEMSECX_VDMX_STATUS(a,b) (a),(b),-1,-1

#endif /* __CAVM_CSRS_PEMSEC_H__ */
