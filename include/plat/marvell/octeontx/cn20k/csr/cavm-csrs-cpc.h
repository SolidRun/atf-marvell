#ifndef __CAVM_CSRS_CPC_H__
#define __CAVM_CSRS_CPC_H__
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
 * CPC.
 *
 * This file is auto generated. Do not edit.
 *
 */

/**
 * Enumeration cpc_bar_e
 *
 * CPC Base Address Register Enumeration
 * Enumerates the base address registers.
 */
#define CAVM_CPC_BAR_E_CPC_PF_BAR0 (0xcf8000000000ll)
#define CAVM_CPC_BAR_E_CPC_PF_BAR0_SIZE 0x800000ull

/**
 * Enumeration cpc_permit_e
 *
 * CPC Permit Enumeration
 * Enumerates the permissions for CPC access.
 */
#define CAVM_CPC_PERMIT_E_CCP_DIS (4)
#define CAVM_CPC_PERMIT_E_EHSM_DIS (6)
#define CAVM_CPC_PERMIT_E_MCP_DIS (1)
#define CAVM_CPC_PERMIT_E_NSEC_DIS (3)
#define CAVM_CPC_PERMIT_E_PCP_DIS (5)
#define CAVM_CPC_PERMIT_E_SCP_DIS (0)
#define CAVM_CPC_PERMIT_E_SEC_DIS (2)

/**
 * Enumeration cpc_xcp_map_e
 *
 * CPC XCP Number Mapping Enumeration
 * Enumerates the XCP mapping.
 */
#define CAVM_CPC_XCP_MAP_E_CCP (2)
#define CAVM_CPC_XCP_MAP_E_MCP (1)
#define CAVM_CPC_XCP_MAP_E_PCP (3)
#define CAVM_CPC_XCP_MAP_E_SCP (0)

/**
 * Register (NCB32b) cpc_boot_owner#
 *
 * CPC Boot Owner Registers
 * These registers control an external arbiter for the boot device (SPI/eMMC)
 * across multiple external devices. There is a register for each requester:
 * _ \<0\> - SCP          - reset on SCP reset.
 * _ \<1\> - MCP          - reset on MCP reset.
 * _ \<2\> - AP Secure    - reset on core reset.
 * _ \<3\> - AP Nonsecure - reset on core reset.
 * _ \<4\> - CCP          - reset on CCP reset.
 * _ \<5\> - PCP          - reset on PCP reset.
 *
 * These register is only writable to the corresponding requestor(s) permitted with CPC_PERMIT.
 */
union cavm_cpc_boot_ownerx
{
    uint32_t u;
    struct cavm_cpc_boot_ownerx_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t reserved_9_31         : 23;
        uint32_t boot_wait             : 1;  /**< [  8:  8](RO/H) Boot device wait. State of the BOOT_WAIT pseudo-input; see
                                                                 GPIO_PIN_SEL_E::BOOT_WAIT. */
        uint32_t reserved_1_7          : 7;
        uint32_t boot_req              : 1;  /**< [  0:  0](R/W) Owner is requesting or using SPI/eMMC. */
#else /* Word 0 - Little Endian */
        uint32_t boot_req              : 1;  /**< [  0:  0](R/W) Owner is requesting or using SPI/eMMC. */
        uint32_t reserved_1_7          : 7;
        uint32_t boot_wait             : 1;  /**< [  8:  8](RO/H) Boot device wait. State of the BOOT_WAIT pseudo-input; see
                                                                 GPIO_PIN_SEL_E::BOOT_WAIT. */
        uint32_t reserved_9_31         : 23;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_cpc_boot_ownerx_s cn; */
};
typedef union cavm_cpc_boot_ownerx cavm_cpc_boot_ownerx_t;

static inline uint64_t CAVM_CPC_BOOT_OWNERX(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_CPC_BOOT_OWNERX(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CN20KA) && (a<=5))
        return 0xcf80000001c0ll + 8ll * ((a) & 0x7);
    __cavm_csr_fatal("CPC_BOOT_OWNERX", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_CPC_BOOT_OWNERX(a) cavm_cpc_boot_ownerx_t
#define bustype_CAVM_CPC_BOOT_OWNERX(a) CSR_TYPE_NCB32b
#define basename_CAVM_CPC_BOOT_OWNERX(a) "CPC_BOOT_OWNERX"
#define device_bar_CAVM_CPC_BOOT_OWNERX(a) 0x0 /* PF_BAR0 */
#define busnum_CAVM_CPC_BOOT_OWNERX(a) (a)
#define arguments_CAVM_CPC_BOOT_OWNERX(a) (a),-1,-1,-1

/**
 * Register (NCB32b) cpc_boot_rom_limit
 *
 * CPC Boot ROM Limit Register
 * This register contains the address limit in the internal boot ROM that non-XCP processors can
 * access.
 *
 * This register is only writable to the requestor(s) permitted with CPC_PERMIT.
 *
 * This register is reset on chip reset.
 */
union cavm_cpc_boot_rom_limit
{
    uint32_t u;
    struct cavm_cpc_boot_rom_limit_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t reserved_17_31        : 15;
        uint32_t addr                  : 14; /**< [ 16:  3](R/W) End of ROM address. This field specifies the first invalid address in CPC_ROM_MEM();
                                                                 access to a CPC_ROM_MEM() address at or above this address will return a "br -1"
                                                                 (branch-to-self) instruction opcode. Writes to this register which attempt to
                                                                 set an [ADDR] greater than the previous [ADDR] setting are ignored.
                                                                 Address is word aligned. */
        uint32_t reserved_0_2          : 3;
#else /* Word 0 - Little Endian */
        uint32_t reserved_0_2          : 3;
        uint32_t addr                  : 14; /**< [ 16:  3](R/W) End of ROM address. This field specifies the first invalid address in CPC_ROM_MEM();
                                                                 access to a CPC_ROM_MEM() address at or above this address will return a "br -1"
                                                                 (branch-to-self) instruction opcode. Writes to this register which attempt to
                                                                 set an [ADDR] greater than the previous [ADDR] setting are ignored.
                                                                 Address is word aligned. */
        uint32_t reserved_17_31        : 15;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_cpc_boot_rom_limit_s cn; */
};
typedef union cavm_cpc_boot_rom_limit cavm_cpc_boot_rom_limit_t;

#define CAVM_CPC_BOOT_ROM_LIMIT CAVM_CPC_BOOT_ROM_LIMIT_FUNC()
static inline uint64_t CAVM_CPC_BOOT_ROM_LIMIT_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_CPC_BOOT_ROM_LIMIT_FUNC(void)
{
    if (cavm_is_model(OCTEONTX_CN20KA))
        return 0xcf8000000158ll;
    __cavm_csr_fatal("CPC_BOOT_ROM_LIMIT", 0, 0, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_CPC_BOOT_ROM_LIMIT cavm_cpc_boot_rom_limit_t
#define bustype_CAVM_CPC_BOOT_ROM_LIMIT CSR_TYPE_NCB32b
#define basename_CAVM_CPC_BOOT_ROM_LIMIT "CPC_BOOT_ROM_LIMIT"
#define device_bar_CAVM_CPC_BOOT_ROM_LIMIT 0x0 /* PF_BAR0 */
#define busnum_CAVM_CPC_BOOT_ROM_LIMIT 0
#define arguments_CAVM_CPC_BOOT_ROM_LIMIT -1,-1,-1,-1

/**
 * Register (NCB32b) cpc_ccp_boot_rom_limit
 *
 * CPC CCP Boot ROM Limit Register
 * This register contains the address limit in the internal boot ROM that CCP can access.
 *
 * This register is only accessible to the requestor(s) permitted with CPC_PERMIT.
 *
 * This register is reset on chip reset and ccp_reset.
 */
union cavm_cpc_ccp_boot_rom_limit
{
    uint32_t u;
    struct cavm_cpc_ccp_boot_rom_limit_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t reserved_17_31        : 15;
        uint32_t addr                  : 14; /**< [ 16:  3](R/W) End of ROM address. This field specifies the first invalid address in CPC_ROM_MEM();
                                                                 access to a CPC_ROM_MEM() address at or above this address will return a "br -1"
                                                                 (branch-to-self) instruction opcode. Writes to this register which attempt to
                                                                 set an [ADDR] greater than the previous [ADDR] setting are ignored.
                                                                 Address is word aligned. */
        uint32_t reserved_0_2          : 3;
#else /* Word 0 - Little Endian */
        uint32_t reserved_0_2          : 3;
        uint32_t addr                  : 14; /**< [ 16:  3](R/W) End of ROM address. This field specifies the first invalid address in CPC_ROM_MEM();
                                                                 access to a CPC_ROM_MEM() address at or above this address will return a "br -1"
                                                                 (branch-to-self) instruction opcode. Writes to this register which attempt to
                                                                 set an [ADDR] greater than the previous [ADDR] setting are ignored.
                                                                 Address is word aligned. */
        uint32_t reserved_17_31        : 15;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_cpc_ccp_boot_rom_limit_s cn; */
};
typedef union cavm_cpc_ccp_boot_rom_limit cavm_cpc_ccp_boot_rom_limit_t;

#define CAVM_CPC_CCP_BOOT_ROM_LIMIT CAVM_CPC_CCP_BOOT_ROM_LIMIT_FUNC()
static inline uint64_t CAVM_CPC_CCP_BOOT_ROM_LIMIT_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_CPC_CCP_BOOT_ROM_LIMIT_FUNC(void)
{
    if (cavm_is_model(OCTEONTX_CN20KA))
        return 0xcf8000000168ll;
    __cavm_csr_fatal("CPC_CCP_BOOT_ROM_LIMIT", 0, 0, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_CPC_CCP_BOOT_ROM_LIMIT cavm_cpc_ccp_boot_rom_limit_t
#define bustype_CAVM_CPC_CCP_BOOT_ROM_LIMIT CSR_TYPE_NCB32b
#define basename_CAVM_CPC_CCP_BOOT_ROM_LIMIT "CPC_CCP_BOOT_ROM_LIMIT"
#define device_bar_CAVM_CPC_CCP_BOOT_ROM_LIMIT 0x0 /* PF_BAR0 */
#define busnum_CAVM_CPC_CCP_BOOT_ROM_LIMIT 0
#define arguments_CAVM_CPC_CCP_BOOT_ROM_LIMIT -1,-1,-1,-1

/**
 * Register (NCB32b) cpc_clken
 *
 * CPC Clock Enable Register
 * This register is only accessible to the requestor(s) permitted with CPC_PERMIT.
 *
 * This register is reset on chip reset.
 */
union cavm_cpc_clken
{
    uint32_t u;
    struct cavm_cpc_clken_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t reserved_2_31         : 30;
        uint32_t force_ncbi_clken      : 1;  /**< [  1:  1](R/W) Force the NCBI conditional clocks on. For diagnostic use only. */
        uint32_t clken                 : 1;  /**< [  0:  0](R/W) Force the conditional clocking within CPC to be always on. For diagnostic use only. */
#else /* Word 0 - Little Endian */
        uint32_t clken                 : 1;  /**< [  0:  0](R/W) Force the conditional clocking within CPC to be always on. For diagnostic use only. */
        uint32_t force_ncbi_clken      : 1;  /**< [  1:  1](R/W) Force the NCBI conditional clocks on. For diagnostic use only. */
        uint32_t reserved_2_31         : 30;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_cpc_clken_s cn; */
};
typedef union cavm_cpc_clken cavm_cpc_clken_t;

#define CAVM_CPC_CLKEN CAVM_CPC_CLKEN_FUNC()
static inline uint64_t CAVM_CPC_CLKEN_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_CPC_CLKEN_FUNC(void)
{
    if (cavm_is_model(OCTEONTX_CN20KA))
        return 0xcf8000000118ll;
    __cavm_csr_fatal("CPC_CLKEN", 0, 0, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_CPC_CLKEN cavm_cpc_clken_t
#define bustype_CAVM_CPC_CLKEN CSR_TYPE_NCB32b
#define basename_CAVM_CPC_CLKEN "CPC_CLKEN"
#define device_bar_CAVM_CPC_CLKEN 0x0 /* PF_BAR0 */
#define busnum_CAVM_CPC_CLKEN 0
#define arguments_CAVM_CPC_CLKEN -1,-1,-1,-1

/**
 * Register (NCB32b) cpc_const
 *
 * CPC Constants Register
 * This register is reset on chip reset.
 */
union cavm_cpc_const
{
    uint32_t u;
    struct cavm_cpc_const_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t reserved_16_31        : 16;
        uint32_t mem_regions           : 8;  /**< [ 15:  8](RO) Indicates number of 64KB memory regions in the CPC RAM. */
        uint32_t cores                 : 8;  /**< [  7:  0](RO) Indicates number of XCP cores within CPC. For function of each core see CPC_XCP_MAP_E. */
#else /* Word 0 - Little Endian */
        uint32_t cores                 : 8;  /**< [  7:  0](RO) Indicates number of XCP cores within CPC. For function of each core see CPC_XCP_MAP_E. */
        uint32_t mem_regions           : 8;  /**< [ 15:  8](RO) Indicates number of 64KB memory regions in the CPC RAM. */
        uint32_t reserved_16_31        : 16;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_cpc_const_s cn; */
};
typedef union cavm_cpc_const cavm_cpc_const_t;

#define CAVM_CPC_CONST CAVM_CPC_CONST_FUNC()
static inline uint64_t CAVM_CPC_CONST_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_CPC_CONST_FUNC(void)
{
    if (cavm_is_model(OCTEONTX_CN20KA))
        return 0xcf8000000000ll;
    __cavm_csr_fatal("CPC_CONST", 0, 0, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_CPC_CONST cavm_cpc_const_t
#define bustype_CAVM_CPC_CONST CSR_TYPE_NCB32b
#define basename_CAVM_CPC_CONST "CPC_CONST"
#define device_bar_CAVM_CPC_CONST 0x0 /* PF_BAR0 */
#define busnum_CAVM_CPC_CONST 0
#define arguments_CAVM_CPC_CONST -1,-1,-1,-1

/**
 * Register (NCB) cpc_csclk_active_pc
 *
 * CPC Conditional Coprocessor Clock Counter Register
 * This register counts conditional clocks for power management.
 *
 * This register is writable for diagnostic use only.
 *
 * This register is reset on chip reset.
 */
union cavm_cpc_csclk_active_pc
{
    uint64_t u;
    struct cavm_cpc_csclk_active_pc_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t count                 : 64; /**< [ 63:  0](R/W/H) Count of conditional coprocessor-clock cycles since reset. */
#else /* Word 0 - Little Endian */
        uint64_t count                 : 64; /**< [ 63:  0](R/W/H) Count of conditional coprocessor-clock cycles since reset. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_cpc_csclk_active_pc_s cn; */
};
typedef union cavm_cpc_csclk_active_pc cavm_cpc_csclk_active_pc_t;

#define CAVM_CPC_CSCLK_ACTIVE_PC CAVM_CPC_CSCLK_ACTIVE_PC_FUNC()
static inline uint64_t CAVM_CPC_CSCLK_ACTIVE_PC_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_CPC_CSCLK_ACTIVE_PC_FUNC(void)
{
    if (cavm_is_model(OCTEONTX_CN20KA))
        return 0xcf8000000010ll;
    __cavm_csr_fatal("CPC_CSCLK_ACTIVE_PC", 0, 0, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_CPC_CSCLK_ACTIVE_PC cavm_cpc_csclk_active_pc_t
#define bustype_CAVM_CPC_CSCLK_ACTIVE_PC CSR_TYPE_NCB
#define basename_CAVM_CPC_CSCLK_ACTIVE_PC "CPC_CSCLK_ACTIVE_PC"
#define device_bar_CAVM_CPC_CSCLK_ACTIVE_PC 0x0 /* PF_BAR0 */
#define busnum_CAVM_CPC_CSCLK_ACTIVE_PC 0
#define arguments_CAVM_CPC_CSCLK_ACTIVE_PC -1,-1,-1,-1

/**
 * Register (NCB32b) cpc_mcp_boot_rom_limit
 *
 * CPC MCP Boot ROM Limit Register
 * This register contains the address limit in the internal boot ROM that MCP can access.
 *
 * This register is only accessible to the requestor(s) permitted with CPC_PERMIT.
 *
 * This register is reset on chip reset and mcp_reset.
 */
union cavm_cpc_mcp_boot_rom_limit
{
    uint32_t u;
    struct cavm_cpc_mcp_boot_rom_limit_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t reserved_17_31        : 15;
        uint32_t addr                  : 14; /**< [ 16:  3](R/W) End of ROM address. This field specifies the first invalid address in CPC_ROM_MEM();
                                                                 access to a CPC_ROM_MEM() address at or above this address will return a "br -1"
                                                                 (branch-to-self) instruction opcode. Writes to this register which attempt to
                                                                 set an [ADDR] greater than the previous [ADDR] setting are ignored.
                                                                 Address is word aligned. */
        uint32_t reserved_0_2          : 3;
#else /* Word 0 - Little Endian */
        uint32_t reserved_0_2          : 3;
        uint32_t addr                  : 14; /**< [ 16:  3](R/W) End of ROM address. This field specifies the first invalid address in CPC_ROM_MEM();
                                                                 access to a CPC_ROM_MEM() address at or above this address will return a "br -1"
                                                                 (branch-to-self) instruction opcode. Writes to this register which attempt to
                                                                 set an [ADDR] greater than the previous [ADDR] setting are ignored.
                                                                 Address is word aligned. */
        uint32_t reserved_17_31        : 15;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_cpc_mcp_boot_rom_limit_s cn; */
};
typedef union cavm_cpc_mcp_boot_rom_limit cavm_cpc_mcp_boot_rom_limit_t;

#define CAVM_CPC_MCP_BOOT_ROM_LIMIT CAVM_CPC_MCP_BOOT_ROM_LIMIT_FUNC()
static inline uint64_t CAVM_CPC_MCP_BOOT_ROM_LIMIT_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_CPC_MCP_BOOT_ROM_LIMIT_FUNC(void)
{
    if (cavm_is_model(OCTEONTX_CN20KA))
        return 0xcf8000000160ll;
    __cavm_csr_fatal("CPC_MCP_BOOT_ROM_LIMIT", 0, 0, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_CPC_MCP_BOOT_ROM_LIMIT cavm_cpc_mcp_boot_rom_limit_t
#define bustype_CAVM_CPC_MCP_BOOT_ROM_LIMIT CSR_TYPE_NCB32b
#define basename_CAVM_CPC_MCP_BOOT_ROM_LIMIT "CPC_MCP_BOOT_ROM_LIMIT"
#define device_bar_CAVM_CPC_MCP_BOOT_ROM_LIMIT 0x0 /* PF_BAR0 */
#define busnum_CAVM_CPC_MCP_BOOT_ROM_LIMIT 0
#define arguments_CAVM_CPC_MCP_BOOT_ROM_LIMIT -1,-1,-1,-1

/**
 * Register (NCB32b) cpc_pcp_boot_rom_limit
 *
 * CPC PCP Boot ROM Limit Register
 * This register contains the address limit in the internal boot ROM that PCP can access.
 *
 * This register is only accessible to the requestor(s) permitted with CPC_PERMIT.
 *
 * This register is reset on chip reset and pcp_reset.
 */
union cavm_cpc_pcp_boot_rom_limit
{
    uint32_t u;
    struct cavm_cpc_pcp_boot_rom_limit_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t reserved_17_31        : 15;
        uint32_t addr                  : 14; /**< [ 16:  3](R/W) End of ROM address. This field specifies the first invalid address in CPC_ROM_MEM();
                                                                 access to a CPC_ROM_MEM() address at or above this address will return a "br -1"
                                                                 (branch-to-self) instruction opcode. Writes to this register which attempt to
                                                                 set an [ADDR] greater than the previous [ADDR] setting are ignored.
                                                                 Address is word aligned. */
        uint32_t reserved_0_2          : 3;
#else /* Word 0 - Little Endian */
        uint32_t reserved_0_2          : 3;
        uint32_t addr                  : 14; /**< [ 16:  3](R/W) End of ROM address. This field specifies the first invalid address in CPC_ROM_MEM();
                                                                 access to a CPC_ROM_MEM() address at or above this address will return a "br -1"
                                                                 (branch-to-self) instruction opcode. Writes to this register which attempt to
                                                                 set an [ADDR] greater than the previous [ADDR] setting are ignored.
                                                                 Address is word aligned. */
        uint32_t reserved_17_31        : 15;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_cpc_pcp_boot_rom_limit_s cn; */
};
typedef union cavm_cpc_pcp_boot_rom_limit cavm_cpc_pcp_boot_rom_limit_t;

#define CAVM_CPC_PCP_BOOT_ROM_LIMIT CAVM_CPC_PCP_BOOT_ROM_LIMIT_FUNC()
static inline uint64_t CAVM_CPC_PCP_BOOT_ROM_LIMIT_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_CPC_PCP_BOOT_ROM_LIMIT_FUNC(void)
{
    if (cavm_is_model(OCTEONTX_CN20KA))
        return 0xcf8000000170ll;
    __cavm_csr_fatal("CPC_PCP_BOOT_ROM_LIMIT", 0, 0, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_CPC_PCP_BOOT_ROM_LIMIT cavm_cpc_pcp_boot_rom_limit_t
#define bustype_CAVM_CPC_PCP_BOOT_ROM_LIMIT CSR_TYPE_NCB32b
#define basename_CAVM_CPC_PCP_BOOT_ROM_LIMIT "CPC_PCP_BOOT_ROM_LIMIT"
#define device_bar_CAVM_CPC_PCP_BOOT_ROM_LIMIT 0x0 /* PF_BAR0 */
#define busnum_CAVM_CPC_PCP_BOOT_ROM_LIMIT 0
#define arguments_CAVM_CPC_PCP_BOOT_ROM_LIMIT -1,-1,-1,-1

/**
 * Register (NCB32b) cpc_permit
 *
 * CPC Register Permit Registers
 * This register is used to control CPC register permissions.
 *
 * This register is only accessible to the requestor(s) permitted with CPC_PERMIT.
 *
 * This register is reset on chip reset.
 */
union cavm_cpc_permit
{
    uint32_t u;
    struct cavm_cpc_permit_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t lock                  : 1;  /**< [ 31: 31](R/W) When Set CPC_PERMIT register is locked for writes and becomes a Read Only
                                                                 Register, until this CSR is reset. */
        uint32_t reserved_6_30         : 25;
        uint32_t permitdis             : 6;  /**< [  5:  0](R/W) Access permission of each access group.
                                                                 _ \<0\> if set disallows SCP access.
                                                                 _ \<1\> if set disallows MCP access.
                                                                 _ \<2\> if set disallows non-(CCP/MCP/SCP/PCP) (e.g. AP, NCB or non-XCP) secure access.
                                                                 _ \<3\> if set disallows non-(CCP/MCP/SCP/PCP) (e.g. AP, NCB or non-XCP) nonsecure access.
                                                                 _ \<4\> if set disallows CCP access.
                                                                 _ \<5\> if set disallows PCP access. */
#else /* Word 0 - Little Endian */
        uint32_t permitdis             : 6;  /**< [  5:  0](R/W) Access permission of each access group.
                                                                 _ \<0\> if set disallows SCP access.
                                                                 _ \<1\> if set disallows MCP access.
                                                                 _ \<2\> if set disallows non-(CCP/MCP/SCP/PCP) (e.g. AP, NCB or non-XCP) secure access.
                                                                 _ \<3\> if set disallows non-(CCP/MCP/SCP/PCP) (e.g. AP, NCB or non-XCP) nonsecure access.
                                                                 _ \<4\> if set disallows CCP access.
                                                                 _ \<5\> if set disallows PCP access. */
        uint32_t reserved_6_30         : 25;
        uint32_t lock                  : 1;  /**< [ 31: 31](R/W) When Set CPC_PERMIT register is locked for writes and becomes a Read Only
                                                                 Register, until this CSR is reset. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_cpc_permit_s cn; */
};
typedef union cavm_cpc_permit cavm_cpc_permit_t;

#define CAVM_CPC_PERMIT CAVM_CPC_PERMIT_FUNC()
static inline uint64_t CAVM_CPC_PERMIT_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_CPC_PERMIT_FUNC(void)
{
    if (cavm_is_model(OCTEONTX_CN20KA))
        return 0xcf8000000120ll;
    __cavm_csr_fatal("CPC_PERMIT", 0, 0, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_CPC_PERMIT cavm_cpc_permit_t
#define bustype_CAVM_CPC_PERMIT CSR_TYPE_NCB32b
#define basename_CAVM_CPC_PERMIT "CPC_PERMIT"
#define device_bar_CAVM_CPC_PERMIT 0x0 /* PF_BAR0 */
#define busnum_CAVM_CPC_PERMIT 0
#define arguments_CAVM_CPC_PERMIT -1,-1,-1,-1

/**
 * Register (NCB) cpc_ram_mem#
 *
 * CPC RAM Memory Registers
 * These registers access the CPC RAM memory space. The size of the RAM is discoverable
 * with CPC_CONST[MEM_REGIONS].
 *
 * This register is only accessible to the requestor(s) permitted with CPC_RAM_PERMIT().
 *
 * This register is reset on chip reset.
 */
union cavm_cpc_ram_memx
{
    uint64_t u;
    struct cavm_cpc_ram_memx_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t dat                   : 64; /**< [ 63:  0](R/W) RAM data. */
#else /* Word 0 - Little Endian */
        uint64_t dat                   : 64; /**< [ 63:  0](R/W) RAM data. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_cpc_ram_memx_s cn; */
};
typedef union cavm_cpc_ram_memx cavm_cpc_ram_memx_t;

static inline uint64_t CAVM_CPC_RAM_MEMX(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_CPC_RAM_MEMX(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CN20KA) && (a<=32679))
        return 0xcf8000400000ll + 8ll * ((a) & 0x7fff);
    __cavm_csr_fatal("CPC_RAM_MEMX", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_CPC_RAM_MEMX(a) cavm_cpc_ram_memx_t
#define bustype_CAVM_CPC_RAM_MEMX(a) CSR_TYPE_NCB
#define basename_CAVM_CPC_RAM_MEMX(a) "CPC_RAM_MEMX"
#define device_bar_CAVM_CPC_RAM_MEMX(a) 0x0 /* PF_BAR0 */
#define busnum_CAVM_CPC_RAM_MEMX(a) (a)
#define arguments_CAVM_CPC_RAM_MEMX(a) (a),-1,-1,-1

/**
 * Register (NCB32b) cpc_ram_permit#
 *
 * CPC RAM Permit Registers
 * These registers are used to control the RAM space access permissions of
 * the SCP, MCP, CCP, PCP EHSM and NCB
 * The RAM is split into 64 secure regions.
 *
 * This register is only accessible to the requestor(s) permitted with CPC_PERMIT.
 *
 * This register is reset on chip reset.
 */
union cavm_cpc_ram_permitx
{
    uint32_t u;
    struct cavm_cpc_ram_permitx_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t exedis                : 4;  /**< [ 31: 28](R/W) Execute permission of each access group.
                                                                 _ \<0\> if set disallows CCP access.
                                                                 _ \<1\> if set disallows PCP access.
                                                                 _ \<2\> if set disallows SCP access.
                                                                 _ \<3\> if set disallows MCP access. */
        uint32_t reserved_23_27        : 5;
        uint32_t wrdis                 : 7;  /**< [ 22: 16](R/W) Write permission of each access group.
                                                                 _ \<0\> if set disallows SCP access.
                                                                 _ \<1\> if set disallows MCP access.
                                                                 _ \<2\> if set disallows non-EHSM/CCP/MCP/SCP/PCP (e.g. AP, NCB or non-XCP) secure access.
                                                                 _ \<3\> if set disallows non-EHSM/CCP/MCP/SCP/PCP (e.g. AP, NCB or non-XCP) nonsecure access.
                                                                 _ \<4\> if set disallows CCP access.
                                                                 _ \<5\> if set disallows EHSM access.
                                                                 _ \<6\> if set disallows PCP access. */
        uint32_t reserved_11_15        : 5;
        uint32_t lock                  : 1;  /**< [ 10: 10](R/W) When Set CPC_RAM_PERMIT register is locked for writes and becomes a Read Only
                                                                 Register, until this CSR is reset. */
        uint32_t reserved_7_9          : 3;
        uint32_t rddis                 : 7;  /**< [  6:  0](R/W) Read permission of each access group.
                                                                 _ \<0\> if set disallows SCP access.
                                                                 _ \<1\> if set disallows MCP access.
                                                                 _ \<2\> if set disallows non-EHSM/CCP/MCP/SCP/PCP (e.g. AP, NCB or non-XCP) secure access.
                                                                 _ \<3\> if set disallows non-EHSM/CCP/MCP/SCP/PCP (e.g. AP, NCB or non-XCP) nonsecure access.
                                                                 _ \<4\> if set disallows CCP access.
                                                                 _ \<5\> if set disallows EHSM access.
                                                                 _ \<6\> if set disallows PCP access. */
#else /* Word 0 - Little Endian */
        uint32_t rddis                 : 7;  /**< [  6:  0](R/W) Read permission of each access group.
                                                                 _ \<0\> if set disallows SCP access.
                                                                 _ \<1\> if set disallows MCP access.
                                                                 _ \<2\> if set disallows non-EHSM/CCP/MCP/SCP/PCP (e.g. AP, NCB or non-XCP) secure access.
                                                                 _ \<3\> if set disallows non-EHSM/CCP/MCP/SCP/PCP (e.g. AP, NCB or non-XCP) nonsecure access.
                                                                 _ \<4\> if set disallows CCP access.
                                                                 _ \<5\> if set disallows EHSM access.
                                                                 _ \<6\> if set disallows PCP access. */
        uint32_t reserved_7_9          : 3;
        uint32_t lock                  : 1;  /**< [ 10: 10](R/W) When Set CPC_RAM_PERMIT register is locked for writes and becomes a Read Only
                                                                 Register, until this CSR is reset. */
        uint32_t reserved_11_15        : 5;
        uint32_t wrdis                 : 7;  /**< [ 22: 16](R/W) Write permission of each access group.
                                                                 _ \<0\> if set disallows SCP access.
                                                                 _ \<1\> if set disallows MCP access.
                                                                 _ \<2\> if set disallows non-EHSM/CCP/MCP/SCP/PCP (e.g. AP, NCB or non-XCP) secure access.
                                                                 _ \<3\> if set disallows non-EHSM/CCP/MCP/SCP/PCP (e.g. AP, NCB or non-XCP) nonsecure access.
                                                                 _ \<4\> if set disallows CCP access.
                                                                 _ \<5\> if set disallows EHSM access.
                                                                 _ \<6\> if set disallows PCP access. */
        uint32_t reserved_23_27        : 5;
        uint32_t exedis                : 4;  /**< [ 31: 28](R/W) Execute permission of each access group.
                                                                 _ \<0\> if set disallows CCP access.
                                                                 _ \<1\> if set disallows PCP access.
                                                                 _ \<2\> if set disallows SCP access.
                                                                 _ \<3\> if set disallows MCP access. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_cpc_ram_permitx_s cn; */
};
typedef union cavm_cpc_ram_permitx cavm_cpc_ram_permitx_t;

static inline uint64_t CAVM_CPC_RAM_PERMITX(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_CPC_RAM_PERMITX(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CN20KA) && (a<=39))
        return 0xcf8000008000ll + 8ll * ((a) & 0x3f);
    __cavm_csr_fatal("CPC_RAM_PERMITX", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_CPC_RAM_PERMITX(a) cavm_cpc_ram_permitx_t
#define bustype_CAVM_CPC_RAM_PERMITX(a) CSR_TYPE_NCB32b
#define basename_CAVM_CPC_RAM_PERMITX(a) "CPC_RAM_PERMITX"
#define device_bar_CAVM_CPC_RAM_PERMITX(a) 0x0 /* PF_BAR0 */
#define busnum_CAVM_CPC_RAM_PERMITX(a) (a)
#define arguments_CAVM_CPC_RAM_PERMITX(a) (a),-1,-1,-1

/**
 * Register (NCB) cpc_rom_mem#
 *
 * CPC ROM Memory Registers
 * These registers access the CPC ROM memory space.
 *
 * This register is only accessible to the requestor(s) permitted with CPC_BOOT_ROM_LIMIT.
 *
 * This register is reset on chip reset.
 */
union cavm_cpc_rom_memx
{
    uint64_t u;
    struct cavm_cpc_rom_memx_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t dat                   : 64; /**< [ 63:  0](RO) ROM data. */
#else /* Word 0 - Little Endian */
        uint64_t dat                   : 64; /**< [ 63:  0](RO) ROM data. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_cpc_rom_memx_s cn; */
};
typedef union cavm_cpc_rom_memx cavm_cpc_rom_memx_t;

static inline uint64_t CAVM_CPC_ROM_MEMX(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_CPC_ROM_MEMX(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CN20KA) && (a<=8191))
        return 0xcf8000010000ll + 8ll * ((a) & 0x1fff);
    __cavm_csr_fatal("CPC_ROM_MEMX", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_CPC_ROM_MEMX(a) cavm_cpc_rom_memx_t
#define bustype_CAVM_CPC_ROM_MEMX(a) CSR_TYPE_NCB
#define basename_CAVM_CPC_ROM_MEMX(a) "CPC_ROM_MEMX"
#define device_bar_CAVM_CPC_ROM_MEMX(a) 0x0 /* PF_BAR0 */
#define busnum_CAVM_CPC_ROM_MEMX(a) (a)
#define arguments_CAVM_CPC_ROM_MEMX(a) (a),-1,-1,-1

/**
 * Register (NCB32b) cpc_scp_boot_rom_limit
 *
 * CPC SCP Boot ROM Limit Register
 * This register contains the address limit in the internal boot ROM that SCP can access.
 *
 * This register is only accessible to the requestor(s) permitted with CPC_PERMIT.
 *
 * This register is reset on chip reset and scp_reset.
 */
union cavm_cpc_scp_boot_rom_limit
{
    uint32_t u;
    struct cavm_cpc_scp_boot_rom_limit_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t reserved_17_31        : 15;
        uint32_t addr                  : 14; /**< [ 16:  3](R/W) End of ROM address. This field specifies the first invalid address in ROM_MEM();
                                                                 access to a ROM_MEM() address at or above this address will return a "br -1"
                                                                 (branch-to-self) instruction opcode. Writes to this register which attempt to
                                                                 set an [ADDR] greater than the previous [ADDR] setting are ignored.
                                                                 Address is word aligned. */
        uint32_t reserved_0_2          : 3;
#else /* Word 0 - Little Endian */
        uint32_t reserved_0_2          : 3;
        uint32_t addr                  : 14; /**< [ 16:  3](R/W) End of ROM address. This field specifies the first invalid address in ROM_MEM();
                                                                 access to a ROM_MEM() address at or above this address will return a "br -1"
                                                                 (branch-to-self) instruction opcode. Writes to this register which attempt to
                                                                 set an [ADDR] greater than the previous [ADDR] setting are ignored.
                                                                 Address is word aligned. */
        uint32_t reserved_17_31        : 15;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_cpc_scp_boot_rom_limit_s cn; */
};
typedef union cavm_cpc_scp_boot_rom_limit cavm_cpc_scp_boot_rom_limit_t;

#define CAVM_CPC_SCP_BOOT_ROM_LIMIT CAVM_CPC_SCP_BOOT_ROM_LIMIT_FUNC()
static inline uint64_t CAVM_CPC_SCP_BOOT_ROM_LIMIT_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_CPC_SCP_BOOT_ROM_LIMIT_FUNC(void)
{
    if (cavm_is_model(OCTEONTX_CN20KA))
        return 0xcf8000000150ll;
    __cavm_csr_fatal("CPC_SCP_BOOT_ROM_LIMIT", 0, 0, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_CPC_SCP_BOOT_ROM_LIMIT cavm_cpc_scp_boot_rom_limit_t
#define bustype_CAVM_CPC_SCP_BOOT_ROM_LIMIT CSR_TYPE_NCB32b
#define basename_CAVM_CPC_SCP_BOOT_ROM_LIMIT "CPC_SCP_BOOT_ROM_LIMIT"
#define device_bar_CAVM_CPC_SCP_BOOT_ROM_LIMIT 0x0 /* PF_BAR0 */
#define busnum_CAVM_CPC_SCP_BOOT_ROM_LIMIT 0
#define arguments_CAVM_CPC_SCP_BOOT_ROM_LIMIT -1,-1,-1,-1

/**
 * Register (NCB) cpc_timer100
 *
 * CPC Timer 100 MHz Register
 * This register contains the common 100 MHz timer register for the XCP cores.
 *
 * This register is only accessible to the requestor(s) permitted with CPC_PERMIT.
 * This register is writable for diagnostic use only.
 *
 * This register is reset on chip reset.
 */
union cavm_cpc_timer100
{
    uint64_t u;
    struct cavm_cpc_timer100_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t tmr                   : 64; /**< [ 63:  0](R/W/H) Free running count typically of 100 MHz bootclk cycles.
                                                                  When RST_CLK_CTL[REFCLK_SRC] = 0, during chip reset and boot, the timer clock frequency
                                                                  is based on a ring oscillator, with frequency range between 45 MHz and 100 MHz.
                                                                  When RST_CLK_CTL[REFCLK_SRC] = 1, the timer will use a constant 100 MHz frequency. */
#else /* Word 0 - Little Endian */
        uint64_t tmr                   : 64; /**< [ 63:  0](R/W/H) Free running count typically of 100 MHz bootclk cycles.
                                                                  When RST_CLK_CTL[REFCLK_SRC] = 0, during chip reset and boot, the timer clock frequency
                                                                  is based on a ring oscillator, with frequency range between 45 MHz and 100 MHz.
                                                                  When RST_CLK_CTL[REFCLK_SRC] = 1, the timer will use a constant 100 MHz frequency. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_cpc_timer100_s cn; */
};
typedef union cavm_cpc_timer100 cavm_cpc_timer100_t;

#define CAVM_CPC_TIMER100 CAVM_CPC_TIMER100_FUNC()
static inline uint64_t CAVM_CPC_TIMER100_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_CPC_TIMER100_FUNC(void)
{
    if (cavm_is_model(OCTEONTX_CN20KA))
        return 0xcf8000000110ll;
    __cavm_csr_fatal("CPC_TIMER100", 0, 0, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_CPC_TIMER100 cavm_cpc_timer100_t
#define bustype_CAVM_CPC_TIMER100 CSR_TYPE_NCB
#define basename_CAVM_CPC_TIMER100 "CPC_TIMER100"
#define device_bar_CAVM_CPC_TIMER100 0x0 /* PF_BAR0 */
#define busnum_CAVM_CPC_TIMER100 0
#define arguments_CAVM_CPC_TIMER100 -1,-1,-1,-1

/**
 * Register (NCB32b) cpc_xcp#_gib#_lint_permit
 *
 * CPC Register GIB Lint Permit Registers
 * These registers are used to control the XCP GIB LINT W1S/W1C register permissions.
 *
 * This register is only accessible to the requestor(s) permitted with CPC_PERMIT.
 *
 * This register is reset on chip reset.
 */
union cavm_cpc_xcpx_gibx_lint_permit
{
    uint32_t u;
    struct cavm_cpc_xcpx_gibx_lint_permit_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t lock                  : 1;  /**< [ 31: 31](R/W) When Set CPC_XCP(0..3)_GIB(0..2)_LINT_PERMIT register is locked for writes and becomes a Read
                                                                 Only Register, until this CSR is reset. */
        uint32_t reserved_6_30         : 25;
        uint32_t permitdis             : 6;  /**< [  5:  0](R/W) Access permission of each access group.
                                                                 _ \<0\> if set disallows SCP access.
                                                                 _ \<1\> if set disallows MCP access.
                                                                 _ \<2\> if set disallows non-CCP/MCP/SCP/PCP (e.g. AP, NCB or non-XCP) secure access.
                                                                 _ \<3\> if set disallows non-CCP/MCP/SCP/PCP (e.g. AP, NCB or non-XCP) nonsecure access.
                                                                 _ \<4\> if set disallows CCP access.
                                                                 _ \<5\> if set disallows PCP access. */
#else /* Word 0 - Little Endian */
        uint32_t permitdis             : 6;  /**< [  5:  0](R/W) Access permission of each access group.
                                                                 _ \<0\> if set disallows SCP access.
                                                                 _ \<1\> if set disallows MCP access.
                                                                 _ \<2\> if set disallows non-CCP/MCP/SCP/PCP (e.g. AP, NCB or non-XCP) secure access.
                                                                 _ \<3\> if set disallows non-CCP/MCP/SCP/PCP (e.g. AP, NCB or non-XCP) nonsecure access.
                                                                 _ \<4\> if set disallows CCP access.
                                                                 _ \<5\> if set disallows PCP access. */
        uint32_t reserved_6_30         : 25;
        uint32_t lock                  : 1;  /**< [ 31: 31](R/W) When Set CPC_XCP(0..3)_GIB(0..2)_LINT_PERMIT register is locked for writes and becomes a Read
                                                                 Only Register, until this CSR is reset. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_cpc_xcpx_gibx_lint_permit_s cn; */
};
typedef union cavm_cpc_xcpx_gibx_lint_permit cavm_cpc_xcpx_gibx_lint_permit_t;

static inline uint64_t CAVM_CPC_XCPX_GIBX_LINT_PERMIT(uint64_t a, uint64_t b) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_CPC_XCPX_GIBX_LINT_PERMIT(uint64_t a, uint64_t b)
{
    if (cavm_is_model(OCTEONTX_CN20KA) && ((a<=3) && (b<=2)))
        return 0xcf8000000200ll + 0x20ll * ((a) & 0x3) + 8ll * ((b) & 0x3);
    __cavm_csr_fatal("CPC_XCPX_GIBX_LINT_PERMIT", 2, a, b, 0, 0, 0, 0);
}

#define typedef_CAVM_CPC_XCPX_GIBX_LINT_PERMIT(a,b) cavm_cpc_xcpx_gibx_lint_permit_t
#define bustype_CAVM_CPC_XCPX_GIBX_LINT_PERMIT(a,b) CSR_TYPE_NCB32b
#define basename_CAVM_CPC_XCPX_GIBX_LINT_PERMIT(a,b) "CPC_XCPX_GIBX_LINT_PERMIT"
#define device_bar_CAVM_CPC_XCPX_GIBX_LINT_PERMIT(a,b) 0x0 /* PF_BAR0 */
#define busnum_CAVM_CPC_XCPX_GIBX_LINT_PERMIT(a,b) (a)
#define arguments_CAVM_CPC_XCPX_GIBX_LINT_PERMIT(a,b) (a),(b),-1,-1

/**
 * Register (NCB32b) cpc_xcp#_permit
 *
 * CPC Register Permit Registers
 * These registers are used to control the XCP register permissions.
 *
 * This register is only accessible to the requestor(s) permitted with CPC_PERMIT.
 *
 * This register is reset on chip reset.
 */
union cavm_cpc_xcpx_permit
{
    uint32_t u;
    struct cavm_cpc_xcpx_permit_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t lock                  : 1;  /**< [ 31: 31](R/W) When Set CPC_XCP(0..3)_PERMIT register is locked for writes and becomes a Read
                                                                 Only Register, until this CSR is reset. */
        uint32_t reserved_6_30         : 25;
        uint32_t permitdis             : 6;  /**< [  5:  0](R/W) Access permission of each access group.
                                                                 _ \<0\> if set disallows SCP access.
                                                                 _ \<1\> if set disallows MCP access.
                                                                 _ \<2\> if set disallows non-CCP/MCP/SCP/PCP (e.g. AP, NCB or non-XCP) secure access.
                                                                 _ \<3\> if set disallows non-CCP/MCP/SCP/PCP (e.g. AP, NCB or non-XCP) nonsecure access.
                                                                 _ \<4\> if set disallows CCP access.
                                                                 _ \<5\> if set disallows PCP access. */
#else /* Word 0 - Little Endian */
        uint32_t permitdis             : 6;  /**< [  5:  0](R/W) Access permission of each access group.
                                                                 _ \<0\> if set disallows SCP access.
                                                                 _ \<1\> if set disallows MCP access.
                                                                 _ \<2\> if set disallows non-CCP/MCP/SCP/PCP (e.g. AP, NCB or non-XCP) secure access.
                                                                 _ \<3\> if set disallows non-CCP/MCP/SCP/PCP (e.g. AP, NCB or non-XCP) nonsecure access.
                                                                 _ \<4\> if set disallows CCP access.
                                                                 _ \<5\> if set disallows PCP access. */
        uint32_t reserved_6_30         : 25;
        uint32_t lock                  : 1;  /**< [ 31: 31](R/W) When Set CPC_XCP(0..3)_PERMIT register is locked for writes and becomes a Read
                                                                 Only Register, until this CSR is reset. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_cpc_xcpx_permit_s cn; */
};
typedef union cavm_cpc_xcpx_permit cavm_cpc_xcpx_permit_t;

static inline uint64_t CAVM_CPC_XCPX_PERMIT(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_CPC_XCPX_PERMIT(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CN20KA) && (a<=3))
        return 0xcf80000001a0ll + 8ll * ((a) & 0x3);
    __cavm_csr_fatal("CPC_XCPX_PERMIT", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_CPC_XCPX_PERMIT(a) cavm_cpc_xcpx_permit_t
#define bustype_CAVM_CPC_XCPX_PERMIT(a) CSR_TYPE_NCB32b
#define basename_CAVM_CPC_XCPX_PERMIT(a) "CPC_XCPX_PERMIT"
#define device_bar_CAVM_CPC_XCPX_PERMIT(a) 0x0 /* PF_BAR0 */
#define busnum_CAVM_CPC_XCPX_PERMIT(a) (a)
#define arguments_CAVM_CPC_XCPX_PERMIT(a) (a),-1,-1,-1

#endif /* __CAVM_CSRS_CPC_H__ */
